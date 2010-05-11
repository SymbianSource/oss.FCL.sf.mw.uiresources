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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008602c };

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
0x100c,	// (0x00087038) Screen

0x1018,	// (0x00087044) application_window

0x1054,	// (0x00087080) area_bottom_pane_ParamLimits

0x1054,	// (0x00087080) area_bottom_pane

0x108d,	// (0x000870b9) area_top_pane_ParamLimits

0x108d,	// (0x000870b9) area_top_pane

0xb1b5,	// (0x000911e1) call_video_uplink_pane_ParamLimits

0xb1b5,	// (0x000911e1) call_video_uplink_pane

0x111b,	// (0x00087147) main_pane_ParamLimits

0x111b,	// (0x00087147) main_pane

0xb52d,	// (0x00091559) context_pane

0x6177,	// (0x0008c1a3) navi_pane

0x61a9,	// (0x0008c1d5) popup_cale_events_window_ParamLimits

0x61a9,	// (0x0008c1d5) popup_cale_events_window

0xb540,	// (0x0009156c) popup_mup_playback_window

0x61c1,	// (0x0008c1ed) signal_pane

0xed82,	// (0x00094dae) main_browser_pane

0xef47,	// (0x00094f73) main_burst_pane

0x5ed7,	// (0x0008bf03) main_calc_pane

0xb4bf,	// (0x000914eb) main_cale_day_pane

0x1763,	// (0x0008778f) main_cale_month_pane

0xb4bf,	// (0x000914eb) main_cale_week_pane

0xef47,	// (0x00094f73) main_call_pane

0xea62,	// (0x00094a8e) main_call_poc_pane

0xef47,	// (0x00094f73) main_camera_pane

0xef47,	// (0x00094f73) main_chi_dic_pane

0x3a0e,	// (0x00089a3a) main_clock_pane

0xea62,	// (0x00094a8e) main_fmradio_pane

0xef47,	// (0x00094f73) main_graph_messa_pane

0xea62,	// (0x00094a8e) main_help_pane

0xed82,	// (0x00094dae) main_im_pane

0xecbd,	// (0x00094ce9) main_image_pane_ParamLimits

0xecbd,	// (0x00094ce9) main_image_pane

0xea62,	// (0x00094a8e) main_location2_pane

0xef47,	// (0x00094f73) main_location_pane

0xecbd,	// (0x00094ce9) main_messa_pane

0xea62,	// (0x00094a8e) main_mp2_pane

0xef47,	// (0x00094f73) main_mp_pane

0xea62,	// (0x00094a8e) main_msg_pane

0xea62,	// (0x00094a8e) main_mup_eq_pane

0xea62,	// (0x00094a8e) main_mup_pane

0xed82,	// (0x00094dae) main_notes_pane

0xea62,	// (0x00094a8e) main_pec_pane

0xea62,	// (0x00094a8e) main_phob_pane

0xea62,	// (0x00094a8e) main_pinb_pane

0xea62,	// (0x00094a8e) main_postcard_pane

0xea62,	// (0x00094a8e) main_qdial_pane

0xef47,	// (0x00094f73) main_skin_pane

0xea62,	// (0x00094a8e) main_smil2_pane

0xef47,	// (0x00094f73) main_smil_pane

0xef47,	// (0x00094f73) main_video_pane

0xef47,	// (0x00094f73) main_video_tele_pane

0xecbd,	// (0x00094ce9) main_viewer_pane_ParamLimits

0xecbd,	// (0x00094ce9) main_viewer_pane

0xef47,	// (0x00094f73) main_vorec_pane

0x5f2b,	// (0x0008bf57) popup_blid_sat_info_window_ParamLimits

0x5f2b,	// (0x0008bf57) popup_blid_sat_info_window

0x5f83,	// (0x0008bfaf) popup_dyc_status_message_window_ParamLimits

0x5f83,	// (0x0008bfaf) popup_dyc_status_message_window

0x5f9d,	// (0x0008bfc9) popup_grid_large_graphic_window_ParamLimits

0x5f9d,	// (0x0008bfc9) popup_grid_large_graphic_window

0x6059,	// (0x0008c085) popup_loc_request_window_ParamLimits

0x6059,	// (0x0008c085) popup_loc_request_window

0x614f,	// (0x0008c17b) popup_wml_address_window_ParamLimits

0x614f,	// (0x0008c17b) popup_wml_address_window

0x5d11,	// (0x0008bd3d) call_muted_g1

0x4b83,	// (0x0008abaf) popup_call_audio_conf_window_ParamLimits

0x4b83,	// (0x0008abaf) popup_call_audio_conf_window

0x5d25,	// (0x0008bd51) popup_call_audio_first_window_ParamLimits

0x5d25,	// (0x0008bd51) popup_call_audio_first_window

0x5d9b,	// (0x0008bdc7) popup_call_audio_in_window_ParamLimits

0x5d9b,	// (0x0008bdc7) popup_call_audio_in_window

0x5dd7,	// (0x0008be03) popup_call_audio_out_window_ParamLimits

0x5dd7,	// (0x0008be03) popup_call_audio_out_window

0x5e11,	// (0x0008be3d) popup_call_audio_second_window_ParamLimits

0x5e11,	// (0x0008be3d) popup_call_audio_second_window

0x5e67,	// (0x0008be93) popup_call_audio_wait_window_ParamLimits

0x5e67,	// (0x0008be93) popup_call_audio_wait_window

0x5e9c,	// (0x0008bec8) popup_number_entry_window_ParamLimits

0x5e9c,	// (0x0008bec8) popup_number_entry_window

0xe64f,	// (0x0009467b) bg_popup_call_pane_cp05_ParamLimits

0xe64f,	// (0x0009467b) bg_popup_call_pane_cp05

0xe66f,	// (0x0009469b) popup_number_entry_window_t1

0xe682,	// (0x000946ae) popup_number_entry_window_t2

0xe694,	// (0x000946c0) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000950f6) popup_number_entry_window_t

0xe6a6,	// (0x000946d2) text_title_cp2

0xe6b9,	// (0x000946e5) bg_popup_call_pane_cp_ParamLimits

0xe6b9,	// (0x000946e5) bg_popup_call_pane_cp

0xe6c7,	// (0x000946f3) call_thumbnail_pane

0xe6cf,	// (0x000946fb) popup_call_audio_in_window_g1_ParamLimits

0xe6cf,	// (0x000946fb) popup_call_audio_in_window_g1

0xe6db,	// (0x00094707) popup_call_audio_in_window_g2_ParamLimits

0xe6db,	// (0x00094707) popup_call_audio_in_window_g2

0xe6e7,	// (0x00094713) popup_call_audio_in_window_g3_ParamLimits

0xe6e7,	// (0x00094713) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000950ff) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000950ff) popup_call_audio_in_window_g

0xe6f3,	// (0x0009471f) popup_call_audio_in_window_t1_ParamLimits

0xe6f3,	// (0x0009471f) popup_call_audio_in_window_t1

0xe70f,	// (0x0009473b) popup_call_audio_in_window_t2_ParamLimits

0xe70f,	// (0x0009473b) popup_call_audio_in_window_t2

0xe72b,	// (0x00094757) popup_call_audio_in_window_t3_ParamLimits

0xe72b,	// (0x00094757) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00095106) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00095106) popup_call_audio_in_window_t

0xe6b9,	// (0x000946e5) bg_popup_call_pane_cp01_ParamLimits

0xe6b9,	// (0x000946e5) bg_popup_call_pane_cp01

0xe6c7,	// (0x000946f3) call_thumbnail_pane_cp02

0xe73e,	// (0x0009476a) call_type_pane_cp022

0xe746,	// (0x00094772) popup_call_audio_out_window_g1_ParamLimits

0xe746,	// (0x00094772) popup_call_audio_out_window_g1

0xe758,	// (0x00094784) popup_call_audio_out_window_g2_ParamLimits

0xe758,	// (0x00094784) popup_call_audio_out_window_g2

0xe764,	// (0x00094790) popup_call_audio_out_window_g3_ParamLimits

0xe764,	// (0x00094790) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009510d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009510d) popup_call_audio_out_window_g

0xe776,	// (0x000947a2) popup_call_audio_out_window_t1_ParamLimits

0xe776,	// (0x000947a2) popup_call_audio_out_window_t1

0xe78e,	// (0x000947ba) popup_call_audio_out_window_t2_ParamLimits

0xe78e,	// (0x000947ba) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00095114) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00095114) popup_call_audio_out_window_t

0xe7a3,	// (0x000947cf) bg_popup_call_pane_ParamLimits

0xe7a3,	// (0x000947cf) bg_popup_call_pane

0x12d7,	// (0x00087303) call_thumbnail_pane_cp_ParamLimits

0x12d7,	// (0x00087303) call_thumbnail_pane_cp

0xe827,	// (0x00094853) call_type_pane_cp01_ParamLimits

0xe827,	// (0x00094853) call_type_pane_cp01

0xe86b,	// (0x00094897) popup_call_audio_first_window_g1_ParamLimits

0xe86b,	// (0x00094897) popup_call_audio_first_window_g1

0xe8b7,	// (0x000948e3) popup_call_audio_first_window_g2_ParamLimits

0xe8b7,	// (0x000948e3) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00095119) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00095119) popup_call_audio_first_window_g

0xe8fb,	// (0x00094927) popup_call_audio_first_window_t1_ParamLimits

0xe8fb,	// (0x00094927) popup_call_audio_first_window_t1

0xe9a7,	// (0x000949d3) popup_call_audio_first_window_t4_ParamLimits

0xe9a7,	// (0x000949d3) popup_call_audio_first_window_t4

0xea33,	// (0x00094a5f) popup_call_audio_first_window_t5_ParamLimits

0xea33,	// (0x00094a5f) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009511e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009511e) popup_call_audio_first_window_t

0xea62,	// (0x00094a8e) bg_popup_call_pane_cp02

0xea6c,	// (0x00094a98) call_type_pane_cp023

0xea74,	// (0x00094aa0) popup_call_audio_wait_window_g1

0xea7c,	// (0x00094aa8) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00095125) popup_call_audio_wait_window_g

0xea84,	// (0x00094ab0) popup_call_audio_wait_window_t3

0xea92,	// (0x00094abe) bg_popup_call_pane_cp03_ParamLimits

0xea92,	// (0x00094abe) bg_popup_call_pane_cp03

0xeaf2,	// (0x00094b1e) call_thumbnail_pane_cp011_ParamLimits

0xeaf2,	// (0x00094b1e) call_thumbnail_pane_cp011

0xeafe,	// (0x00094b2a) call_type_pane_cp034_ParamLimits

0xeafe,	// (0x00094b2a) call_type_pane_cp034

0xeb3a,	// (0x00094b66) popup_call_audio_second_window_g1_ParamLimits

0xeb3a,	// (0x00094b66) popup_call_audio_second_window_g1

0xeb76,	// (0x00094ba2) popup_call_audio_second_window_g2_ParamLimits

0xeb76,	// (0x00094ba2) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009512a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009512a) popup_call_audio_second_window_g

0xebb2,	// (0x00094bde) popup_call_audio_second_window_t1_ParamLimits

0xebb2,	// (0x00094bde) popup_call_audio_second_window_t1

0xec33,	// (0x00094c5f) popup_call_audio_second_window_t2_ParamLimits

0xec33,	// (0x00094c5f) popup_call_audio_second_window_t2

0xec69,	// (0x00094c95) popup_call_audio_second_window_t3_ParamLimits

0xec69,	// (0x00094c95) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009512f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009512f) popup_call_audio_second_window_t

0xea62,	// (0x00094a8e) bg_popup_call_pane_cp04

0xec9f,	// (0x00094ccb) list_conf_pane

0xeca7,	// (0x00094cd3) popup_call_audio_conf_window_t1

0xecb5,	// (0x00094ce1) call_thumbnail_pane_g1

0xecbd,	// (0x00094ce9) bg_pinb_pane_ParamLimits

0xecbd,	// (0x00094ce9) bg_pinb_pane

0xeccb,	// (0x00094cf7) find_pinb_pane

0xecd4,	// (0x00094d00) listscroll_pinb_pane_ParamLimits

0xecd4,	// (0x00094d00) listscroll_pinb_pane

0xece3,	// (0x00094d0f) pinb_bg_pane_g1

0x12fb,	// (0x00087327) pinb_bg_pane_g2

0x1307,	// (0x00087333) pinb_bg_pane_g3

0x1313,	// (0x0008733f) pinb_bg_pane_g4

0x131f,	// (0x0008734b) pinb_bg_pane_g5

0x132b,	// (0x00087357) pinb_bg_pane_g6

0x1336,	// (0x00087362) pinb_bg_pane_g7

0x1341,	// (0x0008736d) pinb_bg_pane_g8

0x134c,	// (0x00087378) pinb_bg_pane_g9

0x1356,	// (0x00087382) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00095136) pinb_bg_pane_g

0x1373,	// (0x0008739f) grid_pinb_pane

0x137c,	// (0x000873a8) list_pinb_pane

0x1385,	// (0x000873b1) scroll_pane_cp01_ParamLimits

0x1385,	// (0x000873b1) scroll_pane_cp01

0xeced,	// (0x00094d19) find_pinb_pane_g1_ParamLimits

0xeced,	// (0x00094d19) find_pinb_pane_g1

0xed05,	// (0x00094d31) find_pinb_pane_t1

0xed17,	// (0x00094d43) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00095150) find_pinb_pane_t

0xed2c,	// (0x00094d58) input_focus_pane_cp01_ParamLimits

0xed2c,	// (0x00094d58) input_focus_pane_cp01

0x1397,	// (0x000873c3) cell_pinb_pane_ParamLimits

0x1397,	// (0x000873c3) cell_pinb_pane

0x13c0,	// (0x000873ec) cell_pinb_pane_g1_ParamLimits

0x13c0,	// (0x000873ec) cell_pinb_pane_g1

0x13d0,	// (0x000873fc) cell_pinb_pane_g2_ParamLimits

0x13d0,	// (0x000873fc) cell_pinb_pane_g2

0xed38,	// (0x00094d64) cell_pinb_pane_g3_ParamLimits

0xed38,	// (0x00094d64) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00095155) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00095155) cell_pinb_pane_g

0xea62,	// (0x00094a8e) grid_highlight_pane_cp01

0x13dc,	// (0x00087408) list_pinb_item_pane_ParamLimits

0x13dc,	// (0x00087408) list_pinb_item_pane

0xea62,	// (0x00094a8e) list_highlight_pane_cp02

0x13ee,	// (0x0008741a) list_pinb_item_pane_g1_ParamLimits

0x13ee,	// (0x0008741a) list_pinb_item_pane_g1

0x13fb,	// (0x00087427) list_pinb_item_pane_g2_ParamLimits

0x13fb,	// (0x00087427) list_pinb_item_pane_g2

0x1407,	// (0x00087433) list_pinb_item_pane_g3_ParamLimits

0x1407,	// (0x00087433) list_pinb_item_pane_g3

0x1418,	// (0x00087444) list_pinb_item_pane_g4_ParamLimits

0x1418,	// (0x00087444) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009515c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009515c) list_pinb_item_pane_g

0x1424,	// (0x00087450) list_pinb_item_pane_t1_ParamLimits

0x1424,	// (0x00087450) list_pinb_item_pane_t1

0x1459,	// (0x00087485) calc_display_pane

0x1481,	// (0x000874ad) calc_paper_pane

0x14a4,	// (0x000874d0) grid_calc_pane

0xea62,	// (0x00094a8e) bg_list_pane_cp01

0x14d2,	// (0x000874fe) clock_g1

0x14da,	// (0x00087506) clock_g2

0x0001,

0xf139,	// (0x00095165) clock_g

0x14e2,	// (0x0008750e) clock_t1_ParamLimits

0x14e2,	// (0x0008750e) clock_t1

0x14f7,	// (0x00087523) clock_t2_ParamLimits

0x14f7,	// (0x00087523) clock_t2

0x1509,	// (0x00087535) clock_t3_ParamLimits

0x1509,	// (0x00087535) clock_t3

0x151b,	// (0x00087547) clock_t4_ParamLimits

0x151b,	// (0x00087547) clock_t4

0x152d,	// (0x00087559) clock_t5_ParamLimits

0x152d,	// (0x00087559) clock_t5

0x1542,	// (0x0008756e) clock_t6_ParamLimits

0x1542,	// (0x0008756e) clock_t6

0x1554,	// (0x00087580) clock_t7_ParamLimits

0x1554,	// (0x00087580) clock_t7

0x1566,	// (0x00087592) clock_t8_ParamLimits

0x1566,	// (0x00087592) clock_t8

0x157a,	// (0x000875a6) clock_t9_ParamLimits

0x157a,	// (0x000875a6) clock_t9

0x0008,

0xf13e,	// (0x0009516a) clock_t_ParamLimits

0xf13e,	// (0x0009516a) clock_t

0xed44,	// (0x00094d70) popup_clock_analogue_window_cp02

0xed44,	// (0x00094d70) popup_clock_digital_window_cp01

0xed4c,	// (0x00094d78) listscroll_help_pane

0xea62,	// (0x00094a8e) phob_pre_status_pane

0xed56,	// (0x00094d82) grid_qdial_pane

0xecbd,	// (0x00094ce9) listscroll_mce_pane

0xecbd,	// (0x00094ce9) bg_notes_pane

0xed60,	// (0x00094d8c) list_notes_pane

0x158e,	// (0x000875ba) scroll_pane_cp06

0xed6e,	// (0x00094d9a) bg_calc_paper_pane

0xb1db,	// (0x00091207) list_calc_pane

0xed82,	// (0x00094dae) bg_calc_display_pane

0x15a2,	// (0x000875ce) calc_display_pane_t1

0x15b4,	// (0x000875e0) calc_display_pane_t2

0xb1f5,	// (0x00091221) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009517d) calc_display_pane_t

0x15c6,	// (0x000875f2) cell_calc_pane_ParamLimits

0x15c6,	// (0x000875f2) cell_calc_pane

0xed8e,	// (0x00094dba) bg_calc_paper_pane_g1

0xed9a,	// (0x00094dc6) bg_calc_paper_pane_g2

0xeda6,	// (0x00094dd2) bg_calc_paper_pane_g3

0xedb2,	// (0x00094dde) bg_calc_paper_pane_g4

0xedbe,	// (0x00094dea) bg_calc_paper_pane_g5

0x15fb,	// (0x00087627) bg_calc_paper_pane_g6

0x160a,	// (0x00087636) bg_calc_paper_pane_g7

0x1619,	// (0x00087645) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00095184) bg_calc_paper_pane_g

0x162c,	// (0x00087658) calc_bg_paper_pane_g9

0x163f,	// (0x0008766b) list_calc_item_pane_ParamLimits

0x163f,	// (0x0008766b) list_calc_item_pane

0xedca,	// (0x00094df6) list_calc_item_pane_g1

0xb207,	// (0x00091233) list_calc_item_pane_t1_ParamLimits

0xb207,	// (0x00091233) list_calc_item_pane_t1

0x1654,	// (0x00087680) list_calc_item_pane_t2_ParamLimits

0x1654,	// (0x00087680) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00095195) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00095195) list_calc_item_pane_t

0xedd7,	// (0x00094e03) cell_calc_pane_g1

0xede1,	// (0x00094e0d) grid_highlight_pane_cp02

0x1686,	// (0x000876b2) bg_calc_display_pane_g1

0x168f,	// (0x000876bb) bg_calc_display_pane_g2

0x1699,	// (0x000876c5) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009519f) bg_calc_display_pane_g

0x16a2,	// (0x000876ce) cell_qdial_pane_ParamLimits

0x16a2,	// (0x000876ce) cell_qdial_pane

0x16b6,	// (0x000876e2) cell_qdial_pane_g1_ParamLimits

0x16b6,	// (0x000876e2) cell_qdial_pane_g1

0x16cc,	// (0x000876f8) cell_qdial_pane_g2_ParamLimits

0x16cc,	// (0x000876f8) cell_qdial_pane_g2

0xee03,	// (0x00094e2f) cell_qdial_pane_g3_ParamLimits

0xee03,	// (0x00094e2f) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000951a6) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000951a6) cell_qdial_pane_g

0x16f3,	// (0x0008771f) cell_qdial_pane_t1_ParamLimits

0x16f3,	// (0x0008771f) cell_qdial_pane_t1

0x170b,	// (0x00087737) cell_qdial_pane_t2_ParamLimits

0x170b,	// (0x00087737) cell_qdial_pane_t2

0x171e,	// (0x0008774a) cell_qdial_pane_t3_ParamLimits

0x171e,	// (0x0008774a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000951af) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000951af) cell_qdial_pane_t

0xea62,	// (0x00094a8e) grid_highlight_pane_cp04

0xee0f,	// (0x00094e3b) thumbnail_qdial_pane_ParamLimits

0xee0f,	// (0x00094e3b) thumbnail_qdial_pane

0xee6b,	// (0x00094e97) list_help_pane

0xee74,	// (0x00094ea0) scroll_pane_cp02

0x1731,	// (0x0008775d) help_list_pane_t1_ParamLimits

0x1731,	// (0x0008775d) help_list_pane_t1

0xb219,	// (0x00091245) bg_notes_pane_g2

0xb221,	// (0x0009124d) bg_notes_pane_g3

0xb229,	// (0x00091255) notes_bg_pane_g1

0xb231,	// (0x0009125d) notes_bg_pane_g4

0xb239,	// (0x00091265) notes_bg_pane_g5

0xb241,	// (0x0009126d) notes_bg_pane_g6

0xb249,	// (0x00091275) notes_bg_pane_g7

0xb251,	// (0x0009127d) notes_bg_pane_g8

0xb259,	// (0x00091285) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000951cd) notes_bg_pane_g

0x174e,	// (0x0008777a) list_notes_text_pane_ParamLimits

0x174e,	// (0x0008777a) list_notes_text_pane

0xee7d,	// (0x00094ea9) list_notes_text_pane_g1

0x0191,	// (0x000861bd) list_notes_text_pane_t1

0x1763,	// (0x0008778f) listscroll_cale_week_pane

0x178f,	// (0x000877bb) bg_cale_heading_pane

0xeea0,	// (0x00094ecc) bg_cale_pane_cp01

0x17a7,	// (0x000877d3) cale_week_corner_pane

0x17c6,	// (0x000877f2) cale_week_day_heading_pane

0x17e3,	// (0x0008780f) cale_week_scroll_pane_g1

0x17f6,	// (0x00087822) cale_week_scroll_pane_g2

0x180e,	// (0x0008783a) cale_week_scroll_pane_g3

0x1826,	// (0x00087852) cale_week_scroll_pane_g4

0x183e,	// (0x0008786a) cale_week_scroll_pane_g5

0x185e,	// (0x0008788a) cale_week_scroll_pane_g6

0x187e,	// (0x000878aa) cale_week_scroll_pane_g7

0x189e,	// (0x000878ca) cale_week_scroll_pane_g8

0x18c2,	// (0x000878ee) cale_week_scroll_pane_g9

0x18da,	// (0x00087906) cale_week_scroll_pane_g10

0x18f2,	// (0x0008791e) cale_week_scroll_pane_g11

0x190a,	// (0x00087936) cale_week_scroll_pane_g12

0x1922,	// (0x0008794e) cale_week_scroll_pane_g13

0x1922,	// (0x0008794e) cale_week_scroll_pane_g14

0x1922,	// (0x0008794e) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000951dc) cale_week_scroll_pane_g

0x195e,	// (0x0008798a) cale_week_time_pane

0x1982,	// (0x000879ae) grid_cale_week_pane

0xeecf,	// (0x00094efb) scroll_pane_cp08

0x19a8,	// (0x000879d4) cell_cale_week_pane_ParamLimits

0x19a8,	// (0x000879d4) cell_cale_week_pane

0x1a36,	// (0x00087a62) cale_week_day_heading_pane_t1

0x1a7b,	// (0x00087aa7) cale_week_day_heading_pane_t2

0x1ac5,	// (0x00087af1) cale_week_day_heading_pane_t3

0x1b0f,	// (0x00087b3b) cale_week_day_heading_pane_t4

0x1b59,	// (0x00087b85) cale_week_day_heading_pane_t5

0x1bab,	// (0x00087bd7) cale_week_day_heading_pane_t6

0x1bfd,	// (0x00087c29) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000951fd) cale_week_day_heading_pane_t

0xeeec,	// (0x00094f18) bg_cale_side_pane

0x1c42,	// (0x00087c6e) cale_week_time_pane_t1

0x1c5c,	// (0x00087c88) cale_week_time_pane_t2

0x1c76,	// (0x00087ca2) cale_week_time_pane_t3

0x1c90,	// (0x00087cbc) cale_week_time_pane_t4

0x1caa,	// (0x00087cd6) cale_week_time_pane_t5

0x1cc4,	// (0x00087cf0) cale_week_time_pane_t6

0x1cde,	// (0x00087d0a) cale_week_time_pane_t7

0x1cf8,	// (0x00087d24) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009520c) cale_week_time_pane_t

0x1d18,	// (0x00087d44) cell_cale_week_pane_g2

0x1d37,	// (0x00087d63) cell_cale_week_pane_g3_ParamLimits

0x1d37,	// (0x00087d63) cell_cale_week_pane_g3

0xeefa,	// (0x00094f26) grid_highlight_pane_cp07

0xef02,	// (0x00094f2e) listscroll_gms_pane

0xef0c,	// (0x00094f38) grid_gms_pane

0xef15,	// (0x00094f41) listscroll_gms_pane_g1

0xef1d,	// (0x00094f49) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009521d) listscroll_gms_pane_g

0x1d4f,	// (0x00087d7b) scroll_pane_cp010

0x1d5a,	// (0x00087d86) cell_gms_pane_ParamLimits

0x1d5a,	// (0x00087d86) cell_gms_pane

0x1d6d,	// (0x00087d99) cell_gms_pane_g1

0xef25,	// (0x00094f51) cell_gms_pane_g2

0xef2d,	// (0x00094f59) cell_gms_pane_g3

0xef36,	// (0x00094f62) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00095222) cell_gms_pane_g

0xef3f,	// (0x00094f6b) grid_highlight_pane_cp09

0x5cbb,	// (0x0008bce7) phob_pre_status_pane_g1

0x5cc3,	// (0x0008bcef) phob_pre_status_pane_g2

0x5ccb,	// (0x0008bcf7) phob_pre_status_pane_g3

0x5cd3,	// (0x0008bcff) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0009560d) phob_pre_status_pane_g

0x5ce3,	// (0x0008bd0f) phob_pre_status_pane_t1

0x5cf1,	// (0x0008bd1d) phob_pre_status_pane_t2

0x5d01,	// (0x0008bd2d) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00095618) phob_pre_status_pane_t

0xef47,	// (0x00094f73) bg_list_pane_cp05

0x1d7d,	// (0x00087da9) grid_vorec_pane

0x1d85,	// (0x00087db1) vorec_t1

0x1d93,	// (0x00087dbf) vorec_t2

0x1da1,	// (0x00087dcd) vorec_t3

0x1daf,	// (0x00087ddb) vorec_t4

0xb13f,	// (0x0009116b) vorec_t5

0xb14d,	// (0x00091179) vorec_t6

0x0004,

0xf1ff,	// (0x0009522b) vorec_t

0xb15b,	// (0x00091187) wait_bar_pane_cp01

0x1dcb,	// (0x00087df7) cell_vorec_pane_ParamLimits

0x1dcb,	// (0x00087df7) cell_vorec_pane

0xb261,	// (0x0009128d) cell_vorec_pane_g1

0xea62,	// (0x00094a8e) grid_highlight_pane_cp05

0x1df3,	// (0x00087e1f) cams_zoom_pane

0x1e02,	// (0x00087e2e) image_vga_pane

0x1e1c,	// (0x00087e48) main_camera_pane_g1

0x1e2e,	// (0x00087e5a) main_camera_pane_g2

0x1e3e,	// (0x00087e6a) main_camera_pane_g3

0x1e4e,	// (0x00087e7a) main_camera_pane_g4

0x1e5e,	// (0x00087e8a) main_camera_pane_g5

0x1e6e,	// (0x00087e9a) main_camera_pane_g6

0x1e80,	// (0x00087eac) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00095236) main_camera_pane_g

0x1e90,	// (0x00087ebc) main_camera_pane_t1

0x1ea6,	// (0x00087ed2) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00095247) main_camera_pane_t

0x1ee0,	// (0x00087f0c) cams_zoom_pane_cp_ParamLimits

0x1ee0,	// (0x00087f0c) cams_zoom_pane_cp

0x1f08,	// (0x00087f34) image_cif_pane_ParamLimits

0x1f08,	// (0x00087f34) image_cif_pane

0x1f3e,	// (0x00087f6a) image_subqcif_pane

0x1f46,	// (0x00087f72) main_video_pane_g1_ParamLimits

0x1f46,	// (0x00087f72) main_video_pane_g1

0x1f6a,	// (0x00087f96) main_video_pane_g2_ParamLimits

0x1f6a,	// (0x00087f96) main_video_pane_g2

0x1f9e,	// (0x00087fca) main_video_pane_g3_ParamLimits

0x1f9e,	// (0x00087fca) main_video_pane_g3

0x1fcc,	// (0x00087ff8) main_video_pane_g4_ParamLimits

0x1fcc,	// (0x00087ff8) main_video_pane_g4

0x1ffa,	// (0x00088026) main_video_pane_g5_ParamLimits

0x1ffa,	// (0x00088026) main_video_pane_g5

0xef5b,	// (0x00094f87) main_video_pane_g6_ParamLimits

0xef5b,	// (0x00094f87) main_video_pane_g6

0x0006,

0xf220,	// (0x0009524c) main_video_pane_g_ParamLimits

0xf220,	// (0x0009524c) main_video_pane_g

0x2023,	// (0x0008804f) main_video_pane_t1_ParamLimits

0x2023,	// (0x0008804f) main_video_pane_t1

0xef75,	// (0x00094fa1) cams_zoom_pane_g1

0xef7e,	// (0x00094faa) cams_zoom_pane_g2

0xef87,	// (0x00094fb3) cams_zoom_pane_g3

0x206c,	// (0x00088098) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009525b) cams_zoom_pane_g

0x2089,	// (0x000880b5) grid_cams_pane

0x20a3,	// (0x000880cf) linegrid_cams_pane

0x20b7,	// (0x000880e3) cell_cams_pane_ParamLimits

0x20b7,	// (0x000880e3) cell_cams_pane

0x20d7,	// (0x00088103) cams_burst_image_pane

0x20df,	// (0x0008810b) cell_cams_pane_g1

0xea62,	// (0x00094a8e) grid_highlight_pane_cp03

0xedd7,	// (0x00094e03) mp_bg_pane_g1

0xea62,	// (0x00094a8e) bg_list_pane_cp03

0xb3e4,	// (0x00091410) bg_mp_pane

0xb3ec,	// (0x00091418) grid_mp_pane

0xb3f4,	// (0x00091420) media_player_g1

0xb3fc,	// (0x00091428) media_player_t1

0xb40a,	// (0x00091436) media_player_t2

0xb418,	// (0x00091444) media_player_t3

0xb426,	// (0x00091452) media_player_t4

0xb434,	// (0x00091460) media_player_t5

0xb442,	// (0x0009146e) media_player_t6

0xb450,	// (0x0009147c) media_player_t7

0x0006,

0xf5cb,	// (0x000955f7) media_player_t

0xb45e,	// (0x0009148a) wait_bar_pane_cp02

0xf5b0,	// (0x000955dc) main_usb_pane_t

0x5cb2,	// (0x0008bcde) cell_mp_pane

0xedd7,	// (0x00094e03) cell_mp_pane_g1

0xea62,	// (0x00094a8e) grid_highlight_pane_cp06

0x20ff,	// (0x0008812b) grid_skin_colour_pane

0x2107,	// (0x00088133) list_highlight_pane_cp03

0x210f,	// (0x0008813b) skin_g1

0x2117,	// (0x00088143) skin_t1

0x2126,	// (0x00088152) skin_t2

0x0001,

0xf264,	// (0x00095290) skin_t

0x2134,	// (0x00088160) cell_skin_colour_pane_ParamLimits

0x2134,	// (0x00088160) cell_skin_colour_pane

0x2154,	// (0x00088180) cell_skin_colour_pane_g1

0x21bf,	// (0x000881eb) call_video_g1_ParamLimits

0x21bf,	// (0x000881eb) call_video_g1

0x21db,	// (0x00088207) call_video_g2_ParamLimits

0x21db,	// (0x00088207) call_video_g2

0x0001,

0xf269,	// (0x00095295) call_video_g_ParamLimits

0xf269,	// (0x00095295) call_video_g

0x222d,	// (0x00088259) call_video_uplink_pane_cp1_ParamLimits

0x222d,	// (0x00088259) call_video_uplink_pane_cp1

0x2292,	// (0x000882be) call_video_uplink_pane_cp2

0x22d4,	// (0x00088300) video_down_crop_pane_ParamLimits

0x22d4,	// (0x00088300) video_down_crop_pane

0x23cb,	// (0x000883f7) video_down_pane_ParamLimits

0x23cb,	// (0x000883f7) video_down_pane

0x24c2,	// (0x000884ee) video_down_subqcif_pane_ParamLimits

0x24c2,	// (0x000884ee) video_down_subqcif_pane

0x24da,	// (0x00088506) video_down_subqcif_pane_cp_ParamLimits

0x24da,	// (0x00088506) video_down_subqcif_pane_cp

0x2517,	// (0x00088543) im_reading_pane_ParamLimits

0x2517,	// (0x00088543) im_reading_pane

0x2529,	// (0x00088555) im_writing_pane_ParamLimits

0x2529,	// (0x00088555) im_writing_pane

0x2547,	// (0x00088573) im_reading_pane_t1

0x2580,	// (0x000885ac) list_im_pane

0x2591,	// (0x000885bd) scroll_pane_cp07

0x25aa,	// (0x000885d6) im_writing_pane_t1_ParamLimits

0x25aa,	// (0x000885d6) im_writing_pane_t1

0x25bf,	// (0x000885eb) im_writing_pane_t2_ParamLimits

0x25bf,	// (0x000885eb) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009529f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009529f) im_writing_pane_t

0xea62,	// (0x00094a8e) input_focus_pane_cp04

0xea62,	// (0x00094a8e) input_focus_pane_cp05

0x25dc,	// (0x00088608) list_im_single_pane_ParamLimits

0x25dc,	// (0x00088608) list_im_single_pane

0x25f0,	// (0x0008861c) list_single_im_pane_t1

0x5c72,	// (0x0008bc9e) blid_accuracy_pane

0x5c7a,	// (0x0008bca6) blid_compass_pane

0x5c84,	// (0x0008bcb0) main_location_t1

0x5c94,	// (0x0008bcc0) main_location_t2

0x5ca4,	// (0x0008bcd0) main_location_t3

0x0002,

0xf5da,	// (0x00095606) main_location_t

0xea62,	// (0x00094a8e) aid_levels_location

0xedd7,	// (0x00094e03) blid_accuracy_pane_g1

0xedd7,	// (0x00094e03) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00095301) blid_accuracy_pane_g

0x262a,	// (0x00088656) wml_content_pane

0x2668,	// (0x00088694) wml_button_pane_ParamLimits

0x2668,	// (0x00088694) wml_button_pane

0x267c,	// (0x000886a8) wml_list_single_large_pane_ParamLimits

0x267c,	// (0x000886a8) wml_list_single_large_pane

0x2691,	// (0x000886bd) wml_list_single_medium_pane_ParamLimits

0x2691,	// (0x000886bd) wml_list_single_medium_pane

0x26a7,	// (0x000886d3) wml_list_single_small_pane_ParamLimits

0x26a7,	// (0x000886d3) wml_list_single_small_pane

0x26bf,	// (0x000886eb) wml_selection_box_pane_ParamLimits

0x26bf,	// (0x000886eb) wml_selection_box_pane

0x26d2,	// (0x000886fe) wml_list_single_pane_t1

0x26e1,	// (0x0008870d) wml_list_single_medium_pane_t1

0x26f0,	// (0x0008871c) wml_list_single_large_pane_t1

0x26ff,	// (0x0008872b) input_focus_pane_cp02_ParamLimits

0x26ff,	// (0x0008872b) input_focus_pane_cp02

0x2712,	// (0x0008873e) wml_selection_box_pane_g1

0x271b,	// (0x00088747) wml_selection_box_pane_t1_ParamLimits

0x271b,	// (0x00088747) wml_selection_box_pane_t1

0xecbd,	// (0x00094ce9) bg_wml_button_pane_ParamLimits

0xecbd,	// (0x00094ce9) bg_wml_button_pane

0x2733,	// (0x0008875f) wml_button_pane_g1

0x273b,	// (0x00088767) wml_button_pane_t1

0x2733,	// (0x0008875f) wml_button_bg_pane_g1

0x274b,	// (0x00088777) wml_button_bg_pane_g2

0x2753,	// (0x0008877f) wml_button_bg_pane_g3

0x275b,	// (0x00088787) wml_button_bg_pane_g4

0x2763,	// (0x0008878f) wml_button_bg_pane_g5

0x276b,	// (0x00088797) wml_button_bg_pane_g6

0x2773,	// (0x0008879f) wml_button_bg_pane_g7

0x277b,	// (0x000887a7) wml_button_bg_pane_g8

0x2783,	// (0x000887af) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000952a4) wml_button_bg_pane_g

0x278b,	// (0x000887b7) bg_list_pane_cp02

0x2793,	// (0x000887bf) mce_header_pane_ParamLimits

0x2793,	// (0x000887bf) mce_header_pane

0x27a9,	// (0x000887d5) mce_icon_pane

0x27a9,	// (0x000887d5) mce_image_pane

0x27b2,	// (0x000887de) mce_text_pane_ParamLimits

0x27b2,	// (0x000887de) mce_text_pane

0x27c5,	// (0x000887f1) scroll_pane_cp03

0x2660,	// (0x0008868c) scroll_pane_cp04

0x27cf,	// (0x000887fb) scroll_pane_cp05_ParamLimits

0x27cf,	// (0x000887fb) scroll_pane_cp05

0x27db,	// (0x00088807) mce_header_field_pane_ParamLimits

0x27db,	// (0x00088807) mce_header_field_pane

0x27f2,	// (0x0008881e) mce_header_field_pane_2_ParamLimits

0x27f2,	// (0x0008881e) mce_header_field_pane_2

0x2808,	// (0x00088834) mce_header_field_pane_3

0x2810,	// (0x0008883c) list_single_mce_message_pane_ParamLimits

0x2810,	// (0x0008883c) list_single_mce_message_pane

0x2825,	// (0x00088851) list_single_mce_smart_pane_ParamLimits

0x2825,	// (0x00088851) list_single_mce_smart_pane

0x2845,	// (0x00088871) input_focus_pane_cp03

0x284e,	// (0x0008887a) list_header_data_pane

0x2856,	// (0x00088882) mce_header_field_pane_t1

0x2866,	// (0x00088892) list_single_mce_header_pane_ParamLimits

0x2866,	// (0x00088892) list_single_mce_header_pane

0x287a,	// (0x000888a6) list_single_mce_header_pane_t1

0x2889,	// (0x000888b5) list_single_mce_message_pane_g1

0x2891,	// (0x000888bd) list_single_mce_message_pane_t1

0x28c5,	// (0x000888f1) bg_cale_heading_pane_cp01_ParamLimits

0x28c5,	// (0x000888f1) bg_cale_heading_pane_cp01

0x28f4,	// (0x00088920) bg_cale_pane_cp02_ParamLimits

0x28f4,	// (0x00088920) bg_cale_pane_cp02

0x2921,	// (0x0008894d) cale_month_corner_pane

0x2940,	// (0x0008896c) cale_month_day_heading_pane_ParamLimits

0x2940,	// (0x0008896c) cale_month_day_heading_pane

0x2987,	// (0x000889b3) cale_month_pane_g1_ParamLimits

0x2987,	// (0x000889b3) cale_month_pane_g1

0x29ab,	// (0x000889d7) cale_month_pane_g2_ParamLimits

0x29ab,	// (0x000889d7) cale_month_pane_g2

0x29db,	// (0x00088a07) cale_month_pane_g3_ParamLimits

0x29db,	// (0x00088a07) cale_month_pane_g3

0x2a17,	// (0x00088a43) cale_month_pane_g4_ParamLimits

0x2a17,	// (0x00088a43) cale_month_pane_g4

0x2a53,	// (0x00088a7f) cale_month_pane_g5_ParamLimits

0x2a53,	// (0x00088a7f) cale_month_pane_g5

0x2a9b,	// (0x00088ac7) cale_month_pane_g6_ParamLimits

0x2a9b,	// (0x00088ac7) cale_month_pane_g6

0x2ae7,	// (0x00088b13) cale_month_pane_g7_ParamLimits

0x2ae7,	// (0x00088b13) cale_month_pane_g7

0x2b3b,	// (0x00088b67) cale_month_pane_g8_ParamLimits

0x2b3b,	// (0x00088b67) cale_month_pane_g8

0x2b8f,	// (0x00088bbb) cale_month_pane_g9_ParamLimits

0x2b8f,	// (0x00088bbb) cale_month_pane_g9

0x2be1,	// (0x00088c0d) cale_month_pane_g10_ParamLimits

0x2be1,	// (0x00088c0d) cale_month_pane_g10

0x2c33,	// (0x00088c5f) cale_month_pane_g11_ParamLimits

0x2c33,	// (0x00088c5f) cale_month_pane_g11

0x2c85,	// (0x00088cb1) cale_month_pane_g12_ParamLimits

0x2c85,	// (0x00088cb1) cale_month_pane_g12

0x2cd7,	// (0x00088d03) cale_month_pane_g13_ParamLimits

0x2cd7,	// (0x00088d03) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000952b7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000952b7) cale_month_pane_g

0x2d3b,	// (0x00088d67) cale_month_week_pane

0x2d5f,	// (0x00088d8b) grid_cale_month_pane_ParamLimits

0x2d5f,	// (0x00088d8b) grid_cale_month_pane

0x2d9d,	// (0x00088dc9) cale_month_day_heading_pane_t1

0x2e23,	// (0x00088e4f) cale_month_day_heading_pane_t2

0x2eb4,	// (0x00088ee0) cale_month_day_heading_pane_t3

0x2f45,	// (0x00088f71) cale_month_day_heading_pane_t4

0x2fda,	// (0x00089006) cale_month_day_heading_pane_t5

0x307b,	// (0x000890a7) cale_month_day_heading_pane_t6

0x311c,	// (0x00089148) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000952d2) cale_month_day_heading_pane_t

0xeeec,	// (0x00094f18) bg_cale_side_pane_cp01

0x31c5,	// (0x000891f1) cale_month_week_pane_t1

0x31de,	// (0x0008920a) cale_month_week_pane_t2

0x31f7,	// (0x00089223) cale_month_week_pane_t3

0x3210,	// (0x0008923c) cale_month_week_pane_t4

0x3229,	// (0x00089255) cale_month_week_pane_t5

0x3242,	// (0x0008926e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000952e1) cale_month_week_pane_t

0x325b,	// (0x00089287) cell_cale_month_pane_ParamLimits

0x325b,	// (0x00089287) cell_cale_month_pane

0xb26b,	// (0x00091297) cell_cale_month_pane_g1

0x3385,	// (0x000893b1) cell_cale_month_pane_t1_ParamLimits

0x3385,	// (0x000893b1) cell_cale_month_pane_t1

0xeefa,	// (0x00094f26) grid_highlight_pane_cp08

0xedd7,	// (0x00094e03) main_smil_g1

0x33b1,	// (0x000893dd) smil_status_pane

0x33ba,	// (0x000893e6) smil_text_pane

0x5b80,	// (0x0008bbac) bg_popup_call3_rect_pane_g8

0x5b88,	// (0x0008bbb4) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009559a) bg_popup_call3_rect_pane_g

0xb5a7,	// (0x000915d3) smil_status_volume_pane_g1

0x33ce,	// (0x000893fa) smil_status_pane_t1

0xb5da,	// (0x00091606) volume_smil_pane

0x33e5,	// (0x00089411) list_smil_text_pane

0x33ef,	// (0x0008941b) scroll_pane_cp011

0x33fa,	// (0x00089426) smil_text_list_pane_t1_ParamLimits

0x33fa,	// (0x00089426) smil_text_list_pane_t1

0xb277,	// (0x000912a3) aid_volume_smil_ParamLimits

0xb277,	// (0x000912a3) aid_volume_smil

0xedd7,	// (0x00094e03) smil_volume_pane_g1

0xedd7,	// (0x00094e03) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00095301) smil_volume_pane_g

0x1763,	// (0x0008778f) listscroll_cale_day_pane

0x3436,	// (0x00089462) bg_cale_pane

0x344e,	// (0x0008947a) list_cale_pane

0x3471,	// (0x0008949d) scroll_pane_cp09

0x3482,	// (0x000894ae) cale_bg_pane_g1

0x348a,	// (0x000894b6) cale_bg_pane_g2

0x3492,	// (0x000894be) cale_bg_pane_g3

0x349a,	// (0x000894c6) cale_bg_pane_g4

0x34a2,	// (0x000894ce) cale_bg_pane_g5

0x34aa,	// (0x000894d6) cale_bg_pane_g6

0x34b2,	// (0x000894de) cale_bg_pane_g7

0x34ba,	// (0x000894e6) cale_bg_pane_g8

0x34c2,	// (0x000894ee) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00095306) cale_bg_pane_g

0x34d2,	// (0x000894fe) list_cale_time_pane_ParamLimits

0x34d2,	// (0x000894fe) list_cale_time_pane

0x34e7,	// (0x00089513) list_cale_time_pane_g1_ParamLimits

0x34e7,	// (0x00089513) list_cale_time_pane_g1

0x34f3,	// (0x0008951f) list_cale_time_pane_g2_ParamLimits

0x34f3,	// (0x0008951f) list_cale_time_pane_g2

0x3500,	// (0x0008952c) list_cale_time_pane_g3_ParamLimits

0x3500,	// (0x0008952c) list_cale_time_pane_g3

0x350e,	// (0x0008953a) list_cale_time_pane_g4_ParamLimits

0x350e,	// (0x0008953a) list_cale_time_pane_g4

0x351c,	// (0x00089548) list_cale_time_pane_g5_ParamLimits

0x351c,	// (0x00089548) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00095319) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00095319) list_cale_time_pane_g

0x3537,	// (0x00089563) list_cale_time_pane_t1_ParamLimits

0x3537,	// (0x00089563) list_cale_time_pane_t1

0x355f,	// (0x0008958b) list_cale_time_pane_t2_ParamLimits

0x355f,	// (0x0008958b) list_cale_time_pane_t2

0x3c29,	// (0x00089c55) aid_blid_cardinal_pane

0x3c73,	// (0x00089c9f) compass_pane_t4

0x3587,	// (0x000895b3) list_cale_time_pane_t4_ParamLimits

0x3587,	// (0x000895b3) list_cale_time_pane_t4

0x3c81,	// (0x00089cad) compass_pane_t5

0x3c8f,	// (0x00089cbb) compass_pane_t6

0x3c9d,	// (0x00089cc9) compass_pane_t7

0x3d33,	// (0x00089d5f) navi_pane_cc_t1

0x3f52,	// (0x00089f7e) aid_phob_thumbnail_center_pane

0x458e,	// (0x0008a5ba) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00095326) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00095326) list_cale_time_pane_t

0xe6b9,	// (0x000946e5) bg_popup_window_pane_cp02_ParamLimits

0xe6b9,	// (0x000946e5) bg_popup_window_pane_cp02

0x35af,	// (0x000895db) heading_pane_cp01_ParamLimits

0x35af,	// (0x000895db) heading_pane_cp01

0x35bb,	// (0x000895e7) loc_req_pane_ParamLimits

0x35bb,	// (0x000895e7) loc_req_pane

0x35cb,	// (0x000895f7) loc_type_pane_ParamLimits

0x35cb,	// (0x000895f7) loc_type_pane

0x35dd,	// (0x00089609) loc_type_pane_t1_ParamLimits

0x35dd,	// (0x00089609) loc_type_pane_t1

0x35ef,	// (0x0008961b) loc_type_pane_t2_ParamLimits

0x35ef,	// (0x0008961b) loc_type_pane_t2

0x3601,	// (0x0008962d) loc_type_pane_t3_ParamLimits

0x3601,	// (0x0008962d) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009532d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009532d) loc_type_pane_t

0x3613,	// (0x0008963f) list_loc_req_pane

0x361d,	// (0x00089649) scroll_pane_cp012

0x3628,	// (0x00089654) list_single_loc_request_popup_menu_pane_ParamLimits

0x3628,	// (0x00089654) list_single_loc_request_popup_menu_pane

0x3635,	// (0x00089661) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3635,	// (0x00089661) list_single_loc_request_popup_menu_pane_g1

0x3641,	// (0x0008966d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3641,	// (0x0008966d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00095334) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00095334) list_single_loc_request_popup_menu_pane_g

0x364d,	// (0x00089679) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x364d,	// (0x00089679) list_single_loc_request_popup_menu_pane_t1

0xecbd,	// (0x00094ce9) bg_popup_window_pane_cp03_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_window_pane_cp03

0x3663,	// (0x0008968f) heading_loc_req_pane_ParamLimits

0x3663,	// (0x0008968f) heading_loc_req_pane

0x366f,	// (0x0008969b) popup_dyc_status_message_window_g1_ParamLimits

0x366f,	// (0x0008969b) popup_dyc_status_message_window_g1

0x3683,	// (0x000896af) popup_dyc_status_message_window_t1_ParamLimits

0x3683,	// (0x000896af) popup_dyc_status_message_window_t1

0x3698,	// (0x000896c4) popup_dyc_status_message_window_t2_ParamLimits

0x3698,	// (0x000896c4) popup_dyc_status_message_window_t2

0x36ad,	// (0x000896d9) popup_dyc_status_message_window_t3_ParamLimits

0x36ad,	// (0x000896d9) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00095339) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00095339) popup_dyc_status_message_window_t

0xea62,	// (0x00094a8e) bg_heading_pane_cp01

0x36c9,	// (0x000896f5) heading_loc_req_pane_g1

0x36d1,	// (0x000896fd) heading_loc_req_pane_g2

0x36d9,	// (0x00089705) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00095340) heading_loc_req_pane_g

0x36e1,	// (0x0008970d) heading_loc_req_pane_t1

0x36fc,	// (0x00089728) bg_popup_sub_pane_cp01_ParamLimits

0x36fc,	// (0x00089728) bg_popup_sub_pane_cp01

0x370a,	// (0x00089736) popup_cale_events_window_g1_ParamLimits

0x370a,	// (0x00089736) popup_cale_events_window_g1

0x372a,	// (0x00089756) popup_cale_events_window_g2_ParamLimits

0x372a,	// (0x00089756) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00095374) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00095374) popup_cale_events_window_g

0x374a,	// (0x00089776) popup_cale_events_window_t1_ParamLimits

0x374a,	// (0x00089776) popup_cale_events_window_t1

0x375c,	// (0x00089788) popup_cale_events_window_t2_ParamLimits

0x375c,	// (0x00089788) popup_cale_events_window_t2

0x379a,	// (0x000897c6) popup_cale_events_window_t3_ParamLimits

0x379a,	// (0x000897c6) popup_cale_events_window_t3

0x37d4,	// (0x00089800) popup_cale_events_window_t4_ParamLimits

0x37d4,	// (0x00089800) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00095379) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00095379) popup_cale_events_window_t

0x380a,	// (0x00089836) call_type_pane

0x381a,	// (0x00089846) popup_call_status_window_g1

0x382e,	// (0x0008985a) popup_call_status_window_g2

0x3842,	// (0x0008986e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00095382) popup_call_status_window_g

0x3851,	// (0x0008987d) call_type_pane_g1

0x385a,	// (0x00089886) call_type_pane_g2

0x0001,

0xf35d,	// (0x00095389) call_type_pane_g

0xea62,	// (0x00094a8e) bg_popup_sub_pane_cp02

0x3863,	// (0x0008988f) listscroll_popup_wml_pane

0x386b,	// (0x00089897) list_wml_pane

0x3875,	// (0x000898a1) scroll_pane_cp013

0x3880,	// (0x000898ac) list_single_graphic_popup_wml_pane_ParamLimits

0x3880,	// (0x000898ac) list_single_graphic_popup_wml_pane

0xedd7,	// (0x00094e03) list_single_graphic_popup_wml_pane_g1

0x3894,	// (0x000898c0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009538e) list_single_graphic_popup_wml_pane_g

0x389c,	// (0x000898c8) list_single_graphic_popup_wml_pane_t1

0x38b2,	// (0x000898de) aid_call_pane

0xecb5,	// (0x00094ce1) popup_clock_analogue_window_g1

0xecb5,	// (0x00094ce1) popup_clock_analogue_window_g2

0xb2a5,	// (0x000912d1) popup_clock_analogue_window_g3

0xb2a5,	// (0x000912d1) popup_clock_analogue_window_g4

0xedd7,	// (0x00094e03) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00095393) popup_clock_analogue_window_g

0xb2ad,	// (0x000912d9) popup_clock_analogue_window_t1

0xb2bb,	// (0x000912e7) clock_digital_number_pane_ParamLimits

0xb2bb,	// (0x000912e7) clock_digital_number_pane

0xb2c7,	// (0x000912f3) clock_digital_number_pane_cp02_ParamLimits

0xb2c7,	// (0x000912f3) clock_digital_number_pane_cp02

0xb2d3,	// (0x000912ff) clock_digital_number_pane_cp03_ParamLimits

0xb2d3,	// (0x000912ff) clock_digital_number_pane_cp03

0xb2df,	// (0x0009130b) clock_digital_number_pane_cp04_ParamLimits

0xb2df,	// (0x0009130b) clock_digital_number_pane_cp04

0xb2ef,	// (0x0009131b) clock_digital_separator_pane_ParamLimits

0xb2ef,	// (0x0009131b) clock_digital_separator_pane

0xb2fb,	// (0x00091327) popup_clock_digital_window_t1

0xedd7,	// (0x00094e03) clock_digital_number_pane_g1

0xedd7,	// (0x00094e03) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00095301) clock_digital_number_pane_g

0xedd7,	// (0x00094e03) clock_digital_separator_pane_g1

0xedd7,	// (0x00094e03) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00095301) clock_digital_separator_pane_g

0xea62,	// (0x00094a8e) bg_popup_window_pane_cp04

0x38ba,	// (0x000898e6) heading_pane_cp03

0x38c2,	// (0x000898ee) listscroll_popup_gms_pane

0x38ca,	// (0x000898f6) grid_large_graphic_popup_pane

0x38d4,	// (0x00089900) listscroll_popup_gms_pane_g1

0x38dc,	// (0x00089908) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009539e) listscroll_popup_gms_pane_g

0x2660,	// (0x0008868c) scroll_pane_cp014

0x38e4,	// (0x00089910) cell_large_graphic_popup_pane_ParamLimits

0x38e4,	// (0x00089910) cell_large_graphic_popup_pane

0x38fc,	// (0x00089928) cell_large_graphic_popup_pane_g1_ParamLimits

0x38fc,	// (0x00089928) cell_large_graphic_popup_pane_g1

0x3908,	// (0x00089934) cell_large_graphic_popup_pane_g2_ParamLimits

0x3908,	// (0x00089934) cell_large_graphic_popup_pane_g2

0x3914,	// (0x00089940) cell_large_graphic_popup_pane_g3_ParamLimits

0x3914,	// (0x00089940) cell_large_graphic_popup_pane_g3

0x3921,	// (0x0008994d) cell_large_graphic_popup_pane_g4_ParamLimits

0x3921,	// (0x0008994d) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000953a3) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000953a3) cell_large_graphic_popup_pane_g

0x3931,	// (0x0008995d) grid_highlight_pane_cp010

0xedd7,	// (0x00094e03) bg_popup_call_pane_g1

0x393b,	// (0x00089967) list_single_graphic_popup_conf_pane_ParamLimits

0x393b,	// (0x00089967) list_single_graphic_popup_conf_pane

0x394e,	// (0x0008997a) list_highlight_pane_cp01

0x3957,	// (0x00089983) list_single_graphic_popup_conf_pane_g1

0x395f,	// (0x0008998b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000953ac) list_single_graphic_popup_conf_pane_g

0x3967,	// (0x00089993) list_single_graphic_popup_conf_pane_t1

0x3975,	// (0x000899a1) linegrid_cams_pane_g1

0x397e,	// (0x000899aa) linegrid_cams_pane_g2

0xef2d,	// (0x00094f59) linegrid_cams_pane_g3

0x3987,	// (0x000899b3) linegrid_cams_pane_g4

0x3990,	// (0x000899bc) linegrid_cams_pane_g5

0x3999,	// (0x000899c5) linegrid_cams_pane_g6

0xef36,	// (0x00094f62) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000953b1) linegrid_cams_pane_g

0x39a4,	// (0x000899d0) popup_clock_analogue_window

0x39a4,	// (0x000899d0) popup_clock_digital_window

0xea62,	// (0x00094a8e) popup_phob_thumbnail_window

0xedd7,	// (0x00094e03) call_video_uplink_pane_g1

0x39ad,	// (0x000899d9) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000953c0) call_video_uplink_pane_g

0x39b5,	// (0x000899e1) video_uplink_pane

0x39bd,	// (0x000899e9) mce_image_pane_g1

0x39c7,	// (0x000899f3) mce_image_pane_g2

0x39d1,	// (0x000899fd) mce_image_pane_g3

0x39d9,	// (0x00089a05) mce_image_pane_g4

0x39e1,	// (0x00089a0d) mce_image_pane_g5

0x0004,

0xf399,	// (0x000953c5) mce_image_pane_g

0x39e9,	// (0x00089a15) control_top_pane_stacon_cp01_ParamLimits

0x39e9,	// (0x00089a15) control_top_pane_stacon_cp01

0x39fd,	// (0x00089a29) uni_indicator_pane_stacon_cp01_ParamLimits

0x39fd,	// (0x00089a29) uni_indicator_pane_stacon_cp01

0x3a0e,	// (0x00089a3a) bg_popup_sub_pane_cp03

0x3a18,	// (0x00089a44) chi_dic_find_pane

0x3a20,	// (0x00089a4c) listscroll_chi_dic_pane

0x3a29,	// (0x00089a55) main_pane_chidic_g1

0x3a3c,	// (0x00089a68) chi_dic_find_pane_t1

0x3a4a,	// (0x00089a76) find_chidic_pane

0x3a53,	// (0x00089a7f) chi_dic_list_pane_ParamLimits

0x3a53,	// (0x00089a7f) chi_dic_list_pane

0x3a64,	// (0x00089a90) scroll_pane_cp020

0x3a6c,	// (0x00089a98) find_chidic_pane_t1

0xea62,	// (0x00094a8e) input_focus_pane_cp06

0x3a7b,	// (0x00089aa7) list_chi_dic_pane_ParamLimits

0x3a7b,	// (0x00089aa7) list_chi_dic_pane

0x3a8d,	// (0x00089ab9) list_chi_dic_pane_t1_ParamLimits

0x3a8d,	// (0x00089ab9) list_chi_dic_pane_t1

0xea62,	// (0x00094a8e) list_highlight_pane_cp020

0x3aa0,	// (0x00089acc) bg_cale_heading_pane_g1

0x3aa8,	// (0x00089ad4) bg_cale_heading_pane_g2

0x3ab0,	// (0x00089adc) bg_cale_heading_pane_g3

0x3ab8,	// (0x00089ae4) bg_cale_heading_pane_g4

0x3ac2,	// (0x00089aee) bg_cale_heading_pane_g5

0x3acc,	// (0x00089af8) bg_cale_heading_pane_g6

0x3ad4,	// (0x00089b00) bg_cale_heading_pane_g7

0x3adc,	// (0x00089b08) bg_cale_heading_pane_g8

0x3ae6,	// (0x00089b12) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000953d0) bg_cale_heading_pane_g

0x3aa0,	// (0x00089acc) bg_cale_side_pane_g1

0x3af0,	// (0x00089b1c) bg_cale_side_pane_g2

0x3af8,	// (0x00089b24) bg_cale_side_pane_g3

0x3b00,	// (0x00089b2c) bg_cale_side_pane_g4

0x3b08,	// (0x00089b34) bg_cale_side_pane_g5

0x3b10,	// (0x00089b3c) bg_cale_side_pane_g6

0x3b18,	// (0x00089b44) bg_cale_side_pane_g7

0x3b20,	// (0x00089b4c) bg_cale_side_pane_g8

0x3b28,	// (0x00089b54) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000953e3) bg_cale_side_pane_g

0x3b30,	// (0x00089b5c) popup_call_status_window_ParamLimits

0x3b30,	// (0x00089b5c) popup_call_status_window

0x3b79,	// (0x00089ba5) stacon_top_pane

0x3b81,	// (0x00089bad) status_pane_ParamLimits

0x3b81,	// (0x00089bad) status_pane

0x3b96,	// (0x00089bc2) status_small_pane

0x3b9e,	// (0x00089bca) control_pane

0xea62,	// (0x00094a8e) stacon_bottom_pane

0x3ba6,	// (0x00089bd2) list_single_mce_smart_pane_t1_ParamLimits

0x3ba6,	// (0x00089bd2) list_single_mce_smart_pane_t1

0x3bb9,	// (0x00089be5) list_single_mce_smart_pane_t2_ParamLimits

0x3bb9,	// (0x00089be5) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000953f6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000953f6) list_single_mce_smart_pane_t

0x3bd8,	// (0x00089c04) compass_pane

0x3be1,	// (0x00089c0d) main_location2_pane_t1

0x3bf3,	// (0x00089c1f) main_location2_pane_t2

0x3c05,	// (0x00089c31) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000953fb) main_location2_pane_t

0x3c49,	// (0x00089c75) compass_pane_g1_ParamLimits

0x3c49,	// (0x00089c75) compass_pane_g1

0x3c55,	// (0x00089c81) compass_pane_t1

0x3c64,	// (0x00089c90) compass_pane_t2

0x0005,

0xf3d8,	// (0x00095404) compass_pane_t

0x3cab,	// (0x00089cd7) text_secondary_cp61

0x3d2a,	// (0x00089d56) navi_pane_cams_g5

0x3da6,	// (0x00089dd2) navi_pane_im_t1

0x3db4,	// (0x00089de0) navi_pane_mp_g1_ParamLimits

0x3db4,	// (0x00089de0) navi_pane_mp_g1

0x3dc8,	// (0x00089df4) navi_pane_mp_g2_ParamLimits

0x3dc8,	// (0x00089df4) navi_pane_mp_g2

0x3dd4,	// (0x00089e00) navi_pane_mp_g3_ParamLimits

0x3dd4,	// (0x00089e00) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00095418) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00095418) navi_pane_mp_g

0x3de0,	// (0x00089e0c) navi_pane_mp_t1

0x3dee,	// (0x00089e1a) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0009541f) navi_pane_mp_t

0x3e9b,	// (0x00089ec7) navi_pane_vt_g1

0x3de0,	// (0x00089e0c) navi_pane_vt_t1

0x3ea3,	// (0x00089ecf) navi_slider_pane

0xef47,	// (0x00094f73) zooming_pane

0x3eb3,	// (0x00089edf) navi_slider_pane_g1

0xb318,	// (0x00091344) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00095426) navi_slider_pane_g

0x3ed7,	// (0x00089f03) aid_levels_zoom

0x3edf,	// (0x00089f0b) zooming_pane_g1

0x3ee7,	// (0x00089f13) zooming_pane_g2

0x3ee7,	// (0x00089f13) zooming_pane_g3

0x0002,

0xf409,	// (0x00095435) zooming_pane_g

0x3eef,	// (0x00089f1b) level_10_zoom

0x3ef8,	// (0x00089f24) level_11_zoom

0x3f01,	// (0x00089f2d) level_1_zoom

0x3f0a,	// (0x00089f36) level_2_zoom

0x3f13,	// (0x00089f3f) level_3_zoom

0x3f1c,	// (0x00089f48) level_4_zoom

0x3f25,	// (0x00089f51) level_5_zoom

0x3f2e,	// (0x00089f5a) level_6_zoom

0x3f37,	// (0x00089f63) level_7_zoom

0x3f40,	// (0x00089f6c) level_8_zoom

0x3f49,	// (0x00089f75) level_9_zoom

0x3f5a,	// (0x00089f86) popup_phob_thumbnail_window_g1

0x3f62,	// (0x00089f8e) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009543c) popup_phob_thumbnail_window_g

0xb466,	// (0x00091492) level_1_location

0xb46e,	// (0x0009149a) level_2_location

0xb476,	// (0x000914a2) level_3_location

0xb47e,	// (0x000914aa) level_4_location

0xef47,	// (0x00094f73) level_5_location

0x3f6a,	// (0x00089f96) mce_icon_pane_g1

0x3f74,	// (0x00089fa0) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00095441) mce_icon_pane_g

0x3f7c,	// (0x00089fa8) main_mup_pane_g1_ParamLimits

0x3f7c,	// (0x00089fa8) main_mup_pane_g1

0x3f92,	// (0x00089fbe) main_mup_pane_g2_ParamLimits

0x3f92,	// (0x00089fbe) main_mup_pane_g2

0x3faa,	// (0x00089fd6) main_mup_pane_g3_ParamLimits

0x3faa,	// (0x00089fd6) main_mup_pane_g3

0x3fc2,	// (0x00089fee) main_mup_pane_g4_ParamLimits

0x3fc2,	// (0x00089fee) main_mup_pane_g4

0x3fda,	// (0x0008a006) main_mup_pane_g5_ParamLimits

0x3fda,	// (0x0008a006) main_mup_pane_g5

0x3ff6,	// (0x0008a022) main_mup_pane_g6_ParamLimits

0x3ff6,	// (0x0008a022) main_mup_pane_g6

0x400e,	// (0x0008a03a) main_mup_pane_g7_ParamLimits

0x400e,	// (0x0008a03a) main_mup_pane_g7

0x4026,	// (0x0008a052) main_mup_pane_g8_ParamLimits

0x4026,	// (0x0008a052) main_mup_pane_g8

0x4040,	// (0x0008a06c) main_mup_pane_g9_ParamLimits

0x4040,	// (0x0008a06c) main_mup_pane_g9

0x405a,	// (0x0008a086) main_mup_pane_g10_ParamLimits

0x405a,	// (0x0008a086) main_mup_pane_g10

0x4074,	// (0x0008a0a0) main_mup_pane_g11_ParamLimits

0x4074,	// (0x0008a0a0) main_mup_pane_g11

0x4088,	// (0x0008a0b4) main_mup_pane_g12_ParamLimits

0x4088,	// (0x0008a0b4) main_mup_pane_g12

0x409e,	// (0x0008a0ca) main_mup_pane_g13_ParamLimits

0x409e,	// (0x0008a0ca) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00095446) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00095446) main_mup_pane_g

0x40b2,	// (0x0008a0de) main_mup_pane_t1_ParamLimits

0x40b2,	// (0x0008a0de) main_mup_pane_t1

0x40cc,	// (0x0008a0f8) main_mup_pane_t2_ParamLimits

0x40cc,	// (0x0008a0f8) main_mup_pane_t2

0x40e4,	// (0x0008a110) main_mup_pane_t3_ParamLimits

0x40e4,	// (0x0008a110) main_mup_pane_t3

0x40fc,	// (0x0008a128) main_mup_pane_t4_ParamLimits

0x40fc,	// (0x0008a128) main_mup_pane_t4

0x411a,	// (0x0008a146) main_mup_pane_t5_ParamLimits

0x411a,	// (0x0008a146) main_mup_pane_t5

0x412f,	// (0x0008a15b) main_mup_pane_t6_ParamLimits

0x412f,	// (0x0008a15b) main_mup_pane_t6

0x0005,

0xf435,	// (0x00095461) main_mup_pane_t_ParamLimits

0xf435,	// (0x00095461) main_mup_pane_t

0x4141,	// (0x0008a16d) mup_progress_pane_ParamLimits

0x4141,	// (0x0008a16d) mup_progress_pane

0x414d,	// (0x0008a179) mup_visualizer_pane_ParamLimits

0x414d,	// (0x0008a179) mup_visualizer_pane

0x417d,	// (0x0008a1a9) mup_volume_pane_ParamLimits

0x417d,	// (0x0008a1a9) mup_volume_pane

0x419b,	// (0x0008a1c7) mup_visualizer_pane_g1_ParamLimits

0x419b,	// (0x0008a1c7) mup_visualizer_pane_g1

0x419b,	// (0x0008a1c7) mup_visualizer_pane_g2_ParamLimits

0x419b,	// (0x0008a1c7) mup_visualizer_pane_g2

0x3c49,	// (0x00089c75) mup_visualizer_pane_g3_ParamLimits

0x3c49,	// (0x00089c75) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009546e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009546e) mup_visualizer_pane_g

0xedd7,	// (0x00094e03) mup_volume_pane_g1

0x41b1,	// (0x0008a1dd) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00095475) mup_volume_pane_g

0xedd7,	// (0x00094e03) mup_progress_pane_g1

0x41ba,	// (0x0008a1e6) mup_progress_pane_g2

0x41c3,	// (0x0008a1ef) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009547a) mup_progress_pane_g

0xea62,	// (0x00094a8e) bg_popup_window_pane_cp05

0x41cc,	// (0x0008a1f8) heading_pane_cp02_ParamLimits

0x41cc,	// (0x0008a1f8) heading_pane_cp02

0x41e6,	// (0x0008a212) list_popup_blid_pane

0x41ee,	// (0x0008a21a) list_blid_sat_info_pane_ParamLimits

0x41ee,	// (0x0008a21a) list_blid_sat_info_pane

0x4201,	// (0x0008a22d) list_blid_sat_info_pane_g1

0x4209,	// (0x0008a235) list_blid_sat_info_pane_t1

0x430f,	// (0x0008a33b) mup_equalizer_pane_ParamLimits

0x430f,	// (0x0008a33b) mup_equalizer_pane

0x4328,	// (0x0008a354) mup_equalizer_pane_cp1_ParamLimits

0x4328,	// (0x0008a354) mup_equalizer_pane_cp1

0x4345,	// (0x0008a371) mup_equalizer_pane_cp2_ParamLimits

0x4345,	// (0x0008a371) mup_equalizer_pane_cp2

0x4362,	// (0x0008a38e) mup_equalizer_pane_cp3_ParamLimits

0x4362,	// (0x0008a38e) mup_equalizer_pane_cp3

0x4383,	// (0x0008a3af) mup_equalizer_pane_cp4_ParamLimits

0x4383,	// (0x0008a3af) mup_equalizer_pane_cp4

0x43a4,	// (0x0008a3d0) mup_equalizer_pane_cp5

0x43b8,	// (0x0008a3e4) mup_equalizer_pane_cp6

0x43cc,	// (0x0008a3f8) mup_equalizer_pane_cp7

0xb384,	// (0x000913b0) bg_popup_call_poc_act_pane_g9

0xb38c,	// (0x000913b8) bg_popup_call_poc_act_pane_g10

0xb394,	// (0x000913c0) bg_popup_call_poc_act_pane_g11

0x000a,

0xecbd,	// (0x00094ce9) mup_scale_pane

0xedd7,	// (0x00094e03) mup_scale_pane_g1

0x43e0,	// (0x0008a40c) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00095496) mup_scale_pane_g

0x4416,	// (0x0008a442) msg_data_pane

0x441e,	// (0x0008a44a) scroll_pane_cp017

0x0385,	// (0x000863b1) bg_list_pane_cp04_ParamLimits

0x0385,	// (0x000863b1) bg_list_pane_cp04

0x4426,	// (0x0008a452) msg_data_pane_g1

0x442e,	// (0x0008a45a) msg_data_pane_g2

0x4438,	// (0x0008a464) msg_data_pane_g3

0x4440,	// (0x0008a46c) msg_data_pane_g4

0x4448,	// (0x0008a474) msg_data_pane_g5

0x4450,	// (0x0008a47c) msg_data_pane_g6

0x4458,	// (0x0008a484) msg_data_pane_g7

0x0006,

0xf479,	// (0x000954a5) msg_data_pane_g

0x03a5,	// (0x000863d1) msg_text_pane_ParamLimits

0x03a5,	// (0x000863d1) msg_text_pane

0x4460,	// (0x0008a48c) qrid_highlight_pane_cp011_ParamLimits

0x4460,	// (0x0008a48c) qrid_highlight_pane_cp011

0xea62,	// (0x00094a8e) msg_body_pane

0xea62,	// (0x00094a8e) msg_header_pane

0x447f,	// (0x0008a4ab) input_focus_pane_cp07

0x03d5,	// (0x00086401) msg_header_pane_t1_ParamLimits

0x03d5,	// (0x00086401) msg_header_pane_t1

0x03e7,	// (0x00086413) msg_header_pane_t2_ParamLimits

0x03e7,	// (0x00086413) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000954b9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000954b9) msg_header_pane_t

0x4494,	// (0x0008a4c0) msg_body_pane_g1

0x03f9,	// (0x00086425) msg_body_pane_t1_ParamLimits

0x03f9,	// (0x00086425) msg_body_pane_t1

0x042a,	// (0x00086456) msg_body_pane_t2_ParamLimits

0x042a,	// (0x00086456) msg_body_pane_t2

0x043c,	// (0x00086468) msg_body_pane_t3_ParamLimits

0x043c,	// (0x00086468) msg_body_pane_t3

0x0002,

0xf492,	// (0x000954be) msg_body_pane_t_ParamLimits

0xf492,	// (0x000954be) msg_body_pane_t

0x44d6,	// (0x0008a502) main_viewer_pane_g1_ParamLimits

0x44d6,	// (0x0008a502) main_viewer_pane_g1

0x44e4,	// (0x0008a510) main_viewer_pane_g2_ParamLimits

0x44e4,	// (0x0008a510) main_viewer_pane_g2

0x44f2,	// (0x0008a51e) main_viewer_pane_g3_ParamLimits

0x44f2,	// (0x0008a51e) main_viewer_pane_g3

0x4501,	// (0x0008a52d) main_viewer_pane_g4_ParamLimits

0x4501,	// (0x0008a52d) main_viewer_pane_g4

0xb342,	// (0x0009136e) main_viewer_pane_g5_ParamLimits

0xb342,	// (0x0009136e) main_viewer_pane_g5

0xb342,	// (0x0009136e) main_viewer_pane_g7_ParamLimits

0xb342,	// (0x0009136e) main_viewer_pane_g7

0xb354,	// (0x00091380) main_viewer_pane_g8_ParamLimits

0xb354,	// (0x00091380) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000954ce) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000954ce) main_viewer_pane_g

0x4510,	// (0x0008a53c) viewer_content_pane_ParamLimits

0x4510,	// (0x0008a53c) viewer_content_pane

0x454b,	// (0x0008a577) main_postcard_pane_g1_ParamLimits

0x454b,	// (0x0008a577) main_postcard_pane_g1

0x4561,	// (0x0008a58d) main_postcard_pane_g2_ParamLimits

0x4561,	// (0x0008a58d) main_postcard_pane_g2

0x4577,	// (0x0008a5a3) main_postcard_pane_g3_ParamLimits

0x4577,	// (0x0008a5a3) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000954df) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000954df) main_postcard_pane_g

0x458e,	// (0x0008a5ba) main_postcard_pane_g4

0xb5ba,	// (0x000915e6) smil_status_volume_pane_g2

0x45d1,	// (0x0008a5fd) postcard_pane_ParamLimits

0x45d1,	// (0x0008a5fd) postcard_pane

0x4613,	// (0x0008a63f) postcard_pane_g1_ParamLimits

0x4613,	// (0x0008a63f) postcard_pane_g1

0x4621,	// (0x0008a64d) postcard_pane_g2_ParamLimits

0x4621,	// (0x0008a64d) postcard_pane_g2

0x462d,	// (0x0008a659) postcard_pane_g3_ParamLimits

0x462d,	// (0x0008a659) postcard_pane_g3

0x4639,	// (0x0008a665) postcard_pane_g4_ParamLimits

0x4639,	// (0x0008a665) postcard_pane_g4

0x4647,	// (0x0008a673) postcard_pane_g5_ParamLimits

0x4647,	// (0x0008a673) postcard_pane_g5

0x465c,	// (0x0008a688) postcard_pane_g6_ParamLimits

0x465c,	// (0x0008a688) postcard_pane_g6

0x4613,	// (0x0008a63f) postcard_pane_g7_ParamLimits

0x4613,	// (0x0008a63f) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000954ec) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000954ec) postcard_pane_g

0x4670,	// (0x0008a69c) main_mp2_pane_g1_ParamLimits

0x4670,	// (0x0008a69c) main_mp2_pane_g1

0x467c,	// (0x0008a6a8) main_mp2_pane_g2_ParamLimits

0x467c,	// (0x0008a6a8) main_mp2_pane_g2

0x4688,	// (0x0008a6b4) main_mp2_pane_g3_ParamLimits

0x4688,	// (0x0008a6b4) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000954fb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000954fb) main_mp2_pane_g

0x4694,	// (0x0008a6c0) main_mp2_pane_t1_ParamLimits

0x4694,	// (0x0008a6c0) main_mp2_pane_t1

0x46a9,	// (0x0008a6d5) main_mp2_pane_t2_ParamLimits

0x46a9,	// (0x0008a6d5) main_mp2_pane_t2

0x46bb,	// (0x0008a6e7) main_mp2_pane_t3_ParamLimits

0x46bb,	// (0x0008a6e7) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00095502) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00095502) main_mp2_pane_t

0x46cd,	// (0x0008a6f9) pec_content_pane_ParamLimits

0x46cd,	// (0x0008a6f9) pec_content_pane

0x2660,	// (0x0008868c) scroll_pane_cp015

0x46df,	// (0x0008a70b) pec_attribute_pane_ParamLimits

0x46df,	// (0x0008a70b) pec_attribute_pane

0x46ef,	// (0x0008a71b) pec_content_pane_g1_ParamLimits

0x46ef,	// (0x0008a71b) pec_content_pane_g1

0x46fb,	// (0x0008a727) pec_content_pane_t1_ParamLimits

0x46fb,	// (0x0008a727) pec_content_pane_t1

0x470d,	// (0x0008a739) pec_content_pane_t2_ParamLimits

0x470d,	// (0x0008a739) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00095509) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00095509) pec_content_pane_t

0x471f,	// (0x0008a74b) list_single_graphic_pane_cp01_ParamLimits

0x471f,	// (0x0008a74b) list_single_graphic_pane_cp01

0xecbd,	// (0x00094ce9) bg_popup_sub_pane_cp04

0x4734,	// (0x0008a760) popup_mup_playback_window_g1

0x4740,	// (0x0008a76c) popup_mup_playback_window_t1

0x4755,	// (0x0008a781) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0009550e) popup_mup_playback_window_t

0x47aa,	// (0x0008a7d6) main_image_pane_g1_ParamLimits

0x47aa,	// (0x0008a7d6) main_image_pane_g1

0x4887,	// (0x0008a8b3) scroll_pane_cp018_ParamLimits

0x4887,	// (0x0008a8b3) scroll_pane_cp018

0x489f,	// (0x0008a8cb) scroll_pane_cp016_ParamLimits

0x489f,	// (0x0008a8cb) scroll_pane_cp016

0x48d3,	// (0x0008a8ff) smil2_image_pane_ParamLimits

0x48d3,	// (0x0008a8ff) smil2_image_pane

0x4903,	// (0x0008a92f) smil2_root_pane_ParamLimits

0x4903,	// (0x0008a92f) smil2_root_pane

0x493b,	// (0x0008a967) smil2_text_pane_ParamLimits

0x493b,	// (0x0008a967) smil2_text_pane

0xea62,	// (0x00094a8e) bg_list_pane_cp06

0x49c3,	// (0x0008a9ef) grid_radio_pane

0xea62,	// (0x00094a8e) bg_popup_window_pane_cp06

0x49cb,	// (0x0008a9f7) main_fmradio_pane_t1

0x38ba,	// (0x000898e6) heading_pane_cp04

0x49d9,	// (0x0008aa05) main_fmradio_pane_t2

0xb39c,	// (0x000913c8) popup_cale_lunar_info_window_g1

0x49e7,	// (0x0008aa13) main_fmradio_pane_t3

0xb3a4,	// (0x000913d0) popup_cale_lunar_info_window_g2

0x49f5,	// (0x0008aa21) main_fmradio_pane_t4

0x0001,

0x4a03,	// (0x0008aa2f) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000955e9) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00095523) main_fmradio_pane_t

0x4a11,	// (0x0008aa3d) wait_bar_pane_cp03

0x4a19,	// (0x0008aa45) cell_fmradio_pane_ParamLimits

0x4a19,	// (0x0008aa45) cell_fmradio_pane

0x4613,	// (0x0008a63f) cell_fmradio_pane_g1_ParamLimits

0x4613,	// (0x0008a63f) cell_fmradio_pane_g1

0xea62,	// (0x00094a8e) grid_highlight_pane_cp011

0x4a2c,	// (0x0008aa58) poc_content_pane_ParamLimits

0x4a2c,	// (0x0008aa58) poc_content_pane

0x4a3e,	// (0x0008aa6a) scroll_pane_cp019

0x4a46,	// (0x0008aa72) popup_call_poc_act_window_ParamLimits

0x4a46,	// (0x0008aa72) popup_call_poc_act_window

0x4a6a,	// (0x0008aa96) popup_call_poc_inact_window_ParamLimits

0x4a6a,	// (0x0008aa96) popup_call_poc_inact_window

0xf594,	// (0x000955c0) bg_popup_call_poc_act_pane_g

0x5b90,	// (0x0008bbbc) bg_popup_call_poc_inact_pane_g1

0x5b98,	// (0x0008bbc4) bg_popup_call_poc_inact_pane_g2

0x4a83,	// (0x0008aaaf) popup_call_poc_act_window_g2

0x5ba0,	// (0x0008bbcc) bg_popup_call_poc_inact_pane_g3

0x5ba8,	// (0x0008bbd4) bg_popup_call_poc_inact_pane_g4

0x5bb0,	// (0x0008bbdc) bg_popup_call_poc_inact_pane_g5

0x4a8b,	// (0x0008aab7) popup_call_poc_act_window_t1_ParamLimits

0x4a8b,	// (0x0008aab7) popup_call_poc_act_window_t1

0x4ab3,	// (0x0008aadf) popup_call_poc_act_window_t2_ParamLimits

0x4ab3,	// (0x0008aadf) popup_call_poc_act_window_t2

0x4adb,	// (0x0008ab07) popup_call_poc_act_window_t3_ParamLimits

0x4adb,	// (0x0008ab07) popup_call_poc_act_window_t3

0x4b03,	// (0x0008ab2f) popup_call_poc_act_window_t4_ParamLimits

0x4b03,	// (0x0008ab2f) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009552e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009552e) popup_call_poc_act_window_t

0x5bb8,	// (0x0008bbe4) bg_popup_call_poc_inact_pane_g6

0x5bc0,	// (0x0008bbec) bg_popup_call_poc_inact_pane_g7

0x5bc8,	// (0x0008bbf4) bg_popup_call_poc_inact_pane_g8

0x4b15,	// (0x0008ab41) popup_call_poc_inact_window_g2

0x5bd0,	// (0x0008bbfc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000955ad) bg_popup_call_poc_inact_pane_g

0x4b1d,	// (0x0008ab49) popup_call_poc_inact_window_t1_ParamLimits

0x4b1d,	// (0x0008ab49) popup_call_poc_inact_window_t1

0x4b32,	// (0x0008ab5e) popup_call_poc_inact_window_t2_ParamLimits

0x4b32,	// (0x0008ab5e) popup_call_poc_inact_window_t2

0x4b47,	// (0x0008ab73) popup_call_poc_inact_window_t3_ParamLimits

0x4b47,	// (0x0008ab73) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00095537) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00095537) popup_call_poc_inact_window_t

0xb52d,	// (0x00091559) context_pane_ParamLimits

0x61c1,	// (0x0008c1ed) signal_pane_ParamLimits

0xef47,	// (0x00094f73) main_call2_pane

0xb506,	// (0x00091532) popup_phob_thumbnail2_window_ParamLimits

0xb506,	// (0x00091532) popup_phob_thumbnail2_window

0xb32a,	// (0x00091356) aid_hotspot_pointer_arrow_pane

0xb332,	// (0x0009135e) aid_hotspot_pointer_hand_pane

0x5cdb,	// (0x0008bd07) phob_pre_status_pane_g5

0x1df3,	// (0x00087e1f) cams_zoom_pane_ParamLimits

0x1e02,	// (0x00087e2e) image_vga_pane_ParamLimits

0x1e1c,	// (0x00087e48) main_camera_pane_g1_ParamLimits

0x1e2e,	// (0x00087e5a) main_camera_pane_g2_ParamLimits

0x1e3e,	// (0x00087e6a) main_camera_pane_g3_ParamLimits

0x1e4e,	// (0x00087e7a) main_camera_pane_g4_ParamLimits

0x1e5e,	// (0x00087e8a) main_camera_pane_g5_ParamLimits

0x1e6e,	// (0x00087e9a) main_camera_pane_g6_ParamLimits

0x1e80,	// (0x00087eac) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00095236) main_camera_pane_g_ParamLimits

0x1e90,	// (0x00087ebc) main_camera_pane_t1_ParamLimits

0x1ea6,	// (0x00087ed2) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00095247) main_camera_pane_t_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_preview_window_pane_cp01_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_preview_window_pane_cp01

0x4b5c,	// (0x0008ab88) popup_phob_thumbnail2_window_g1_ParamLimits

0x4b5c,	// (0x0008ab88) popup_phob_thumbnail2_window_g1

0xea62,	// (0x00094a8e) call2_cli_visual_pane

0x4b83,	// (0x0008abaf) popup_call2_audio_conf_window_ParamLimits

0x4b83,	// (0x0008abaf) popup_call2_audio_conf_window

0x4ba3,	// (0x0008abcf) popup_call2_audio_first_window_ParamLimits

0x4ba3,	// (0x0008abcf) popup_call2_audio_first_window

0x4c39,	// (0x0008ac65) popup_call2_audio_in_window_ParamLimits

0x4c39,	// (0x0008ac65) popup_call2_audio_in_window

0x4c81,	// (0x0008acad) popup_call2_audio_out_window_ParamLimits

0x4c81,	// (0x0008acad) popup_call2_audio_out_window

0x4ceb,	// (0x0008ad17) popup_call2_audio_second_window_ParamLimits

0x4ceb,	// (0x0008ad17) popup_call2_audio_second_window

0x4d51,	// (0x0008ad7d) popup_call2_audio_wait_window_ParamLimits

0x4d51,	// (0x0008ad7d) popup_call2_audio_wait_window

0xea62,	// (0x00094a8e) bg_popup_call2_act_pane_cp03

0xec9f,	// (0x00094ccb) list_conf_pane_cp

0x4d8b,	// (0x0008adb7) popup_call2_audio_conf_window_t1

0x393b,	// (0x00089967) list_single_graphic_popup_conf2_pane_ParamLimits

0x393b,	// (0x00089967) list_single_graphic_popup_conf2_pane

0x394e,	// (0x0008997a) list_highlight_pane_cp04

0x4d99,	// (0x0008adc5) list_single_graphic_popup_conf2_pane_g1

0x395f,	// (0x0008998b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009553e) list_single_graphic_popup_conf2_pane_g

0x4da3,	// (0x0008adcf) list_single_graphic_popup_conf2_pane_t1

0x4db1,	// (0x0008addd) bg_popup_call2_act_pane_cp01_ParamLimits

0x4db1,	// (0x0008addd) bg_popup_call2_act_pane_cp01

0x4e3b,	// (0x0008ae67) call_type_pane_cp05_ParamLimits

0x4e3b,	// (0x0008ae67) call_type_pane_cp05

0x4e8f,	// (0x0008aebb) popup_call2_audio_second_window_g1_ParamLimits

0x4e8f,	// (0x0008aebb) popup_call2_audio_second_window_g1

0x4ee3,	// (0x0008af0f) popup_call2_audio_second_window_g2_ParamLimits

0x4ee3,	// (0x0008af0f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00095543) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00095543) popup_call2_audio_second_window_g

0x4f48,	// (0x0008af74) popup_call2_audio_second_window_t1_ParamLimits

0x4f48,	// (0x0008af74) popup_call2_audio_second_window_t1

0x5003,	// (0x0008b02f) popup_call2_audio_second_window_t2_ParamLimits

0x5003,	// (0x0008b02f) popup_call2_audio_second_window_t2

0x5056,	// (0x0008b082) popup_call2_audio_second_window_t3_ParamLimits

0x5056,	// (0x0008b082) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009554a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009554a) popup_call2_audio_second_window_t

0xea62,	// (0x00094a8e) bg_popup_call2_in_pane_cp02

0xea6c,	// (0x00094a98) call_type_pane_cp04

0xea74,	// (0x00094aa0) popup_call2_audio_wait_window_g1

0xea7c,	// (0x00094aa8) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00095125) popup_call2_audio_wait_window_g

0xea84,	// (0x00094ab0) popup_call2_audio_wait_window_t3

0x5149,	// (0x0008b175) bg_popup_call2_act_pane_ParamLimits

0x5149,	// (0x0008b175) bg_popup_call2_act_pane

0x5209,	// (0x0008b235) call_type_pane_cp03_ParamLimits

0x5209,	// (0x0008b235) call_type_pane_cp03

0x526d,	// (0x0008b299) popup_call2_audio_first_window_g1_ParamLimits

0x526d,	// (0x0008b299) popup_call2_audio_first_window_g1

0x52dd,	// (0x0008b309) popup_call2_audio_first_window_g2_ParamLimits

0x52dd,	// (0x0008b309) popup_call2_audio_first_window_g2

0x419b,	// (0x0008a1c7) popup_call2_audio_first_window_g3_ParamLimits

0x419b,	// (0x0008a1c7) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00095553) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00095553) popup_call2_audio_first_window_g

0x53bb,	// (0x0008b3e7) popup_call2_audio_first_window_t1_ParamLimits

0x53bb,	// (0x0008b3e7) popup_call2_audio_first_window_t1

0x54be,	// (0x0008b4ea) popup_call2_audio_first_window_t4_ParamLimits

0x54be,	// (0x0008b4ea) popup_call2_audio_first_window_t4

0x55a1,	// (0x0008b5cd) popup_call2_audio_first_window_t5_ParamLimits

0x55a1,	// (0x0008b5cd) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009555e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009555e) popup_call2_audio_first_window_t

0xecb5,	// (0x00094ce1) bg_popup_call2_act_pane_g1

0xb3ac,	// (0x000913d8) popup_cale_lunar_info_window_t1

0xb3ba,	// (0x000913e6) popup_cale_lunar_info_window_t2

0xb3c8,	// (0x000913f4) popup_cale_lunar_info_window_t3

0xea62,	// (0x00094a8e) bg_popup_call2_bubble_pane

0x56a2,	// (0x0008b6ce) bg_popup_call2_in_pane_cp01_ParamLimits

0x56a2,	// (0x0008b6ce) bg_popup_call2_in_pane_cp01

0xe73e,	// (0x0009476a) call_type_pane_cp02

0x56ea,	// (0x0008b716) popup_call2_audio_out_window_g1_ParamLimits

0x56ea,	// (0x0008b716) popup_call2_audio_out_window_g1

0x5716,	// (0x0008b742) popup_call2_audio_out_window_g2_ParamLimits

0x5716,	// (0x0008b742) popup_call2_audio_out_window_g2

0x573e,	// (0x0008b76a) popup_call2_audio_out_window_g3_ParamLimits

0x573e,	// (0x0008b76a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00095567) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00095567) popup_call2_audio_out_window_g

0x5779,	// (0x0008b7a5) popup_call2_audio_out_window_t1_ParamLimits

0x5779,	// (0x0008b7a5) popup_call2_audio_out_window_t1

0x57d8,	// (0x0008b804) popup_call2_audio_out_window_t2_ParamLimits

0x57d8,	// (0x0008b804) popup_call2_audio_out_window_t2

0x582c,	// (0x0008b858) popup_call2_audio_out_window_t3_ParamLimits

0x582c,	// (0x0008b858) popup_call2_audio_out_window_t3

0x5842,	// (0x0008b86e) popup_call2_audio_out_window_t4_ParamLimits

0x5842,	// (0x0008b86e) popup_call2_audio_out_window_t4

0x5858,	// (0x0008b884) popup_call2_audio_out_window_t5_ParamLimits

0x5858,	// (0x0008b884) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00095570) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00095570) popup_call2_audio_out_window_t

0x58bc,	// (0x0008b8e8) bg_popup_call2_in_pane_ParamLimits

0x58bc,	// (0x0008b8e8) bg_popup_call2_in_pane

0x5918,	// (0x0008b944) popup_call2_audio_in_window_g1_ParamLimits

0x5918,	// (0x0008b944) popup_call2_audio_in_window_g1

0x5950,	// (0x0008b97c) popup_call2_audio_in_window_g2_ParamLimits

0x5950,	// (0x0008b97c) popup_call2_audio_in_window_g2

0x5988,	// (0x0008b9b4) popup_call2_audio_in_window_g3_ParamLimits

0x5988,	// (0x0008b9b4) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009557d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009557d) popup_call2_audio_in_window_g

0x59e0,	// (0x0008ba0c) popup_call2_audio_in_window_t1_ParamLimits

0x59e0,	// (0x0008ba0c) popup_call2_audio_in_window_t1

0x5a60,	// (0x0008ba8c) popup_call2_audio_in_window_t2_ParamLimits

0x5a60,	// (0x0008ba8c) popup_call2_audio_in_window_t2

0x5ae0,	// (0x0008bb0c) popup_call2_audio_in_window_t3_ParamLimits

0x5ae0,	// (0x0008bb0c) popup_call2_audio_in_window_t3

0x5afa,	// (0x0008bb26) popup_call2_audio_in_window_t4_ParamLimits

0x5afa,	// (0x0008bb26) popup_call2_audio_in_window_t4

0x5b0c,	// (0x0008bb38) popup_call2_audio_in_window_t5_ParamLimits

0x5b0c,	// (0x0008bb38) popup_call2_audio_in_window_t5

0x5b21,	// (0x0008bb4d) popup_call2_audio_in_window_t6_ParamLimits

0x5b21,	// (0x0008bb4d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00095586) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00095586) popup_call2_audio_in_window_t

0xecb5,	// (0x00094ce1) bg_popup_call2_in_pane_g1

0xb3d6,	// (0x00091402) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000955ee) popup_cale_lunar_info_window_t

0xecbd,	// (0x00094ce9) bg_popup_call2_rect_pane_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_call2_rect_pane

0xea62,	// (0x00094a8e) call2_cli_visual_graphic_pane

0xea62,	// (0x00094a8e) call2_cli_visual_text_pane

0xb5cd,	// (0x000915f9) smil_status_volume_pane_g3

0x0002,

0xedd7,	// (0x00094e03) call2_cli_visual_graphic_pane_g1

0xedd7,	// (0x00094e03) call2_cli_visual_graphic_pane_g2

0xedd7,	// (0x00094e03) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00095593) call2_cli_visual_graphic_pane_g

0x5b50,	// (0x0008bb7c) bg_popup_call2_rect_pane_g1

0xee63,	// (0x00094e8f) bg_popup_call2_rect_pane_g2

0x5b58,	// (0x0008bb84) bg_popup_call2_rect_pane_g3

0x5b60,	// (0x0008bb8c) bg_popup_call2_rect_pane_g4

0x5b68,	// (0x0008bb94) bg_popup_call2_rect_pane_g5

0x5b70,	// (0x0008bb9c) bg_popup_call2_rect_pane_g6

0x5b78,	// (0x0008bba4) bg_popup_call2_rect_pane_g7

0x5b80,	// (0x0008bbac) bg_popup_call2_rect_pane_g8

0x5b88,	// (0x0008bbb4) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009559a) bg_popup_call2_rect_pane_g

0x5b90,	// (0x0008bbbc) bg_popup_call2_bubble_pane_g1

0x5b98,	// (0x0008bbc4) bg_popup_call2_bubble_pane_g2

0x5ba0,	// (0x0008bbcc) bg_popup_call2_bubble_pane_g3

0x5ba8,	// (0x0008bbd4) bg_popup_call2_bubble_pane_g4

0x5bb0,	// (0x0008bbdc) bg_popup_call2_bubble_pane_g5

0x5bb8,	// (0x0008bbe4) bg_popup_call2_bubble_pane_g6

0x5bc0,	// (0x0008bbec) bg_popup_call2_bubble_pane_g7

0x5bc8,	// (0x0008bbf4) bg_popup_call2_bubble_pane_g8

0x5bd0,	// (0x0008bbfc) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000955ad) bg_popup_call2_bubble_pane_g

0x1775,	// (0x000877a1) aid_cale_week_size_cell_pane

0x1ebc,	// (0x00087ee8) aid_cams_cif_uncrop_pane_ParamLimits

0x1ebc,	// (0x00087ee8) aid_cams_cif_uncrop_pane

0x2075,	// (0x000880a1) aid_cams_size_cell_ParamLimits

0x2075,	// (0x000880a1) aid_cams_size_cell

0x2089,	// (0x000880b5) grid_cams_pane_ParamLimits

0x20a3,	// (0x000880cf) linegrid_cams_pane_ParamLimits

0x21f1,	// (0x0008821d) call_video_pane_t1

0x220f,	// (0x0008823b) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009529a) call_video_pane_t

0x289f,	// (0x000888cb) aid_cale_month_size_cell_pane_ParamLimits

0x289f,	// (0x000888cb) aid_cale_month_size_cell_pane

0xf60b,	// (0x00095637) smil_status_volume_pane_g

0xb5da,	// (0x00091606) volume_smil_pane_ParamLimits

0xb16d,	// (0x00091199) aid_popup2_width_pane

0x16dd,	// (0x00087709) cell_qdial_pane_g4_ParamLimits

0x16dd,	// (0x00087709) cell_qdial_pane_g4

0x3c29,	// (0x00089c55) aid_blid_cardinal_pane_ParamLimits

0x3c35,	// (0x00089c61) aid_blid_destination_pane_ParamLimits

0x3c35,	// (0x00089c61) aid_blid_destination_pane

0xecbd,	// (0x00094ce9) bg_popup_call_poc_act_pane_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_call_poc_act_pane

0xecbd,	// (0x00094ce9) bg_popup_call_poc_inact_pane_ParamLimits

0xecbd,	// (0x00094ce9) bg_popup_call_poc_inact_pane

0x5be0,	// (0x0008bc0c) bg_popup_call_poc_act_pane_g1

0x5be8,	// (0x0008bc14) bg_popup_call_poc_act_pane_g2

0xb36c,	// (0x00091398) bg_popup_call_poc_act_pane_g3

0x5ba8,	// (0x0008bbd4) bg_popup_call_poc_act_pane_g4

0x5bb0,	// (0x0008bbdc) bg_popup_call_poc_act_pane_g5

0xb374,	// (0x000913a0) bg_popup_call_poc_act_pane_g6

0x5bc0,	// (0x0008bbec) bg_popup_call_poc_act_pane_g7

0xb37c,	// (0x000913a8) bg_popup_call_poc_act_pane_g8

0xea62,	// (0x00094a8e) main_usb_pane

0xb4e1,	// (0x0009150d) popup_cale_lunar_info_window

0x2547,	// (0x00088573) im_reading_pane_t1_ParamLimits

0x2580,	// (0x000885ac) list_im_pane_ParamLimits

0x2591,	// (0x000885bd) scroll_pane_cp07_ParamLimits

0xea62,	// (0x00094a8e) grid_highlight_pane_cp012

0xecbd,	// (0x00094ce9) mup_scale_pane_ParamLimits

0x4613,	// (0x0008a63f) main_usb_pane_g1_ParamLimits

0x4613,	// (0x0008a63f) main_usb_pane_g1

0x5bf0,	// (0x0008bc1c) main_usb_pane_g2_ParamLimits

0x5bf0,	// (0x0008bc1c) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000955d7) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000955d7) main_usb_pane_g

0x5c06,	// (0x0008bc32) main_usb_pane_t1_ParamLimits

0x5c06,	// (0x0008bc32) main_usb_pane_t1

0x5c18,	// (0x0008bc44) main_usb_pane_t2_ParamLimits

0x5c18,	// (0x0008bc44) main_usb_pane_t2

0x5c2a,	// (0x0008bc56) main_usb_pane_t3_ParamLimits

0x5c2a,	// (0x0008bc56) main_usb_pane_t3

0x5c3c,	// (0x0008bc68) main_usb_pane_t4_ParamLimits

0x5c3c,	// (0x0008bc68) main_usb_pane_t4

0x5c4e,	// (0x0008bc7a) main_usb_pane_t5_ParamLimits

0x5c4e,	// (0x0008bc7a) main_usb_pane_t5

0x5c60,	// (0x0008bc8c) main_usb_pane_t6_ParamLimits

0x5c60,	// (0x0008bc8c) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000955dc) main_usb_pane_t_ParamLimits

0x3bd8,	// (0x00089c04) aid_text_placing

0x3be1,	// (0x00089c0d) main_location2_pane_t1_ParamLimits

0x3bf3,	// (0x00089c1f) main_location2_pane_t2_ParamLimits

0x3c05,	// (0x00089c31) main_location2_pane_t3_ParamLimits

0x3c17,	// (0x00089c43) main_location2_pane_t4_ParamLimits

0x3c17,	// (0x00089c43) main_location2_pane_t4

0xf3cf,	// (0x000953fb) main_location2_pane_t_ParamLimits

0xecf9,	// (0x00094d25) find_pinb_pane_g2_ParamLimits

0xecf9,	// (0x00094d25) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009514b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009514b) find_pinb_pane_g

0xed05,	// (0x00094d31) find_pinb_pane_t1_ParamLimits

0xed17,	// (0x00094d43) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00095150) find_pinb_pane_t_ParamLimits

0xea62,	// (0x00094a8e) main_call3_pane

0x2d9d,	// (0x00088dc9) cale_month_day_heading_pane_t1_ParamLimits

0x2e23,	// (0x00088e4f) cale_month_day_heading_pane_t2_ParamLimits

0x2eb4,	// (0x00088ee0) cale_month_day_heading_pane_t3_ParamLimits

0x2f45,	// (0x00088f71) cale_month_day_heading_pane_t4_ParamLimits

0x2fda,	// (0x00089006) cale_month_day_heading_pane_t5_ParamLimits

0x307b,	// (0x000890a7) cale_month_day_heading_pane_t6_ParamLimits

0x311c,	// (0x00089148) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000952d2) cale_month_day_heading_pane_t_ParamLimits

0x33dc,	// (0x00089408) smil_status_volume_pane

0x45ef,	// (0x0008a61b) postcard_address_pane_ParamLimits

0x45ef,	// (0x0008a61b) postcard_address_pane

0x4601,	// (0x0008a62d) postcard_message_pane_ParamLimits

0x4601,	// (0x0008a62d) postcard_message_pane

0x5b36,	// (0x0008bb62) call2_cli_visual_pane_t1_ParamLimits

0x5b36,	// (0x0008bb62) call2_cli_visual_pane_t1

0x63ee,	// (0x0008c41a) postcard_message_pane_t1_ParamLimits

0x63ee,	// (0x0008c41a) postcard_message_pane_t1

0x63d7,	// (0x0008c403) postcard_address_pane_t1_ParamLimits

0x63d7,	// (0x0008c403) postcard_address_pane_t1

0x63c3,	// (0x0008c3ef) popup_call3_audio_in_window_ParamLimits

0x63c3,	// (0x0008c3ef) popup_call3_audio_in_window

0x624e,	// (0x0008c27a) bg_popup_call3_in_pane_ParamLimits

0x624e,	// (0x0008c27a) bg_popup_call3_in_pane

0x62c4,	// (0x0008c2f0) popup_call3_audio_in_window_g1_ParamLimits

0x62c4,	// (0x0008c2f0) popup_call3_audio_in_window_g1

0x62e4,	// (0x0008c310) popup_call3_audio_in_window_g2_ParamLimits

0x62e4,	// (0x0008c310) popup_call3_audio_in_window_g2

0x6304,	// (0x0008c330) popup_call3_audio_in_window_g3_ParamLimits

0x6304,	// (0x0008c330) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0009563e) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0009563e) popup_call3_audio_in_window_g

0x6335,	// (0x0008c361) popup_call3_audio_in_window_t1_ParamLimits

0x6335,	// (0x0008c361) popup_call3_audio_in_window_t1

0x6373,	// (0x0008c39f) popup_call3_audio_in_window_t2_ParamLimits

0x6373,	// (0x0008c39f) popup_call3_audio_in_window_t2

0x63b1,	// (0x0008c3dd) popup_call3_audio_in_window_t3_ParamLimits

0x63b1,	// (0x0008c3dd) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00095647) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00095647) popup_call3_audio_in_window_t

0xef47,	// (0x00094f73) bg_popup_call3_rect_pane

0x5b50,	// (0x0008bb7c) bg_popup_call3_rect_pane_g1

0xee63,	// (0x00094e8f) bg_popup_call3_rect_pane_g2

0x5b58,	// (0x0008bb84) bg_popup_call3_rect_pane_g3

0x5b60,	// (0x0008bb8c) bg_popup_call3_rect_pane_g4

0x5b68,	// (0x0008bb94) bg_popup_call3_rect_pane_g5

0x5b70,	// (0x0008bb9c) bg_popup_call3_rect_pane_g6

0x5b78,	// (0x0008bba4) bg_popup_call3_rect_pane_g7

0x4193,	// (0x0008a1bf) mup_visualizer_osc_pane

0x41a9,	// (0x0008a1d5) mup_visualizer_spec_pane

0x627e,	// (0x0008c2aa) call3_video_qcif_pane_ParamLimits

0x627e,	// (0x0008c2aa) call3_video_qcif_pane

0x6291,	// (0x0008c2bd) call3_video_qcif_uncrop_pane_ParamLimits

0x6291,	// (0x0008c2bd) call3_video_qcif_uncrop_pane

0x629f,	// (0x0008c2cb) call3_video_subqcif_pane_ParamLimits

0x629f,	// (0x0008c2cb) call3_video_subqcif_pane

0x62b3,	// (0x0008c2df) call3_video_subqcif_uncrop_pane_ParamLimits

0x62b3,	// (0x0008c2df) call3_video_subqcif_uncrop_pane

0x6324,	// (0x0008c350) popup_call3_audio_in_window_g4_ParamLimits

0x6324,	// (0x0008c350) popup_call3_audio_in_window_g4

0x623d,	// (0x0008c269) mup_spec_half_pane

0x6246,	// (0x0008c272) mup_spec_half_pane_cp

0xb58d,	// (0x000915b9) mup_osc_middle_pane

0xb596,	// (0x000915c2) mup_visualizer_osc_pane_g1

0x621d,	// (0x0008c249) mup_spec_bar_pane_ParamLimits

0x621d,	// (0x0008c249) mup_spec_bar_pane

0xb57a,	// (0x000915a6) mup_spec_bar_pane_g1

0xb584,	// (0x000915b0) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00095632) mup_spec_bar_pane_g

0x1775,	// (0x000877a1) aid_cale_week_size_cell_pane_ParamLimits

0x178f,	// (0x000877bb) bg_cale_heading_pane_ParamLimits

0xeea0,	// (0x00094ecc) bg_cale_pane_cp01_ParamLimits

0x17a7,	// (0x000877d3) cale_week_corner_pane_ParamLimits

0x17c6,	// (0x000877f2) cale_week_day_heading_pane_ParamLimits

0x17e3,	// (0x0008780f) cale_week_scroll_pane_g1_ParamLimits

0x17f6,	// (0x00087822) cale_week_scroll_pane_g2_ParamLimits

0x180e,	// (0x0008783a) cale_week_scroll_pane_g3_ParamLimits

0x1826,	// (0x00087852) cale_week_scroll_pane_g4_ParamLimits

0x183e,	// (0x0008786a) cale_week_scroll_pane_g5_ParamLimits

0x185e,	// (0x0008788a) cale_week_scroll_pane_g6_ParamLimits

0x187e,	// (0x000878aa) cale_week_scroll_pane_g7_ParamLimits

0x189e,	// (0x000878ca) cale_week_scroll_pane_g8_ParamLimits

0x18c2,	// (0x000878ee) cale_week_scroll_pane_g9_ParamLimits

0x18da,	// (0x00087906) cale_week_scroll_pane_g10_ParamLimits

0x18f2,	// (0x0008791e) cale_week_scroll_pane_g11_ParamLimits

0x190a,	// (0x00087936) cale_week_scroll_pane_g12_ParamLimits

0x1922,	// (0x0008794e) cale_week_scroll_pane_g13_ParamLimits

0x1922,	// (0x0008794e) cale_week_scroll_pane_g14_ParamLimits

0x1922,	// (0x0008794e) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000951dc) cale_week_scroll_pane_g_ParamLimits

0x195e,	// (0x0008798a) cale_week_time_pane_ParamLimits

0x1982,	// (0x000879ae) grid_cale_week_pane_ParamLimits

0xeebd,	// (0x00094ee9) listscroll_cale_week_pane_t1

0xeecf,	// (0x00094efb) scroll_pane_cp08_ParamLimits

0x2921,	// (0x0008894d) cale_month_corner_pane_ParamLimits

0x2d29,	// (0x00088d55) cale_month_pane_t1

0x2d3b,	// (0x00088d67) cale_month_week_pane_ParamLimits

0x381a,	// (0x00089846) popup_call_status_window_g1_ParamLimits

0x382e,	// (0x0008985a) popup_call_status_window_g2_ParamLimits

0x3842,	// (0x0008986e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00095382) popup_call_status_window_g_ParamLimits

0x38aa,	// (0x000898d6) aid_call2_pane

0x03c7,	// (0x000863f3) msg_header_pane_g1

0x45ef,	// (0x0008a61b) postcard_address2_pane_ParamLimits

0x45ef,	// (0x0008a61b) postcard_address2_pane

0x4601,	// (0x0008a62d) postcard_message2_pane_ParamLimits

0x4601,	// (0x0008a62d) postcard_message2_pane

0x61cf,	// (0x0008c1fb) message2_row_pane_ParamLimits

0x61cf,	// (0x0008c1fb) message2_row_pane

0x61eb,	// (0x0008c217) address2_row_pane_ParamLimits

0x61eb,	// (0x0008c217) address2_row_pane

0xb548,	// (0x00091574) postcard_message2_row_pane_g1

0xb550,	// (0x0009157c) postcard_message2_row_pane_t1

0xb548,	// (0x00091574) address2_row_pane_g1

0xb550,	// (0x0009157c) address2_row_pane_t1

0x1d75,	// (0x00087da1) aid_size_cell_vorec

0xea62,	// (0x00094a8e) main_rss_pane

0x61fe,	// (0x0008c22a) rss_list_single_pane_ParamLimits

0x61fe,	// (0x0008c22a) rss_list_single_pane

0xb55e,	// (0x0009158a) rss_list_single_pane_t1

0xb56c,	// (0x00091598) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0009562d) rss_list_single_pane_t

0xea62,	// (0x00094a8e) main_camera2_pane

0xea62,	// (0x00094a8e) main_video2_pane

0x6467,	// (0x0008c493) cams_zoom_pane_cp2_ParamLimits

0x6467,	// (0x0008c493) cams_zoom_pane_cp2

0x6487,	// (0x0008c4b3) image2_vga_pane_ParamLimits

0x6487,	// (0x0008c4b3) image2_vga_pane

0x64d8,	// (0x0008c504) main_camera2_pane_g1_ParamLimits

0x64d8,	// (0x0008c504) main_camera2_pane_g1

0x64f8,	// (0x0008c524) main_camera2_pane_g2_ParamLimits

0x64f8,	// (0x0008c524) main_camera2_pane_g2

0x6518,	// (0x0008c544) main_camera2_pane_g3_ParamLimits

0x6518,	// (0x0008c544) main_camera2_pane_g3

0x6538,	// (0x0008c564) main_camera2_pane_g4_ParamLimits

0x6538,	// (0x0008c564) main_camera2_pane_g4

0x6558,	// (0x0008c584) main_camera2_pane_g5_ParamLimits

0x6558,	// (0x0008c584) main_camera2_pane_g5

0x6578,	// (0x0008c5a4) main_camera2_pane_g6_ParamLimits

0x6578,	// (0x0008c5a4) main_camera2_pane_g6

0x6598,	// (0x0008c5c4) main_camera2_pane_g7_ParamLimits

0x6598,	// (0x0008c5c4) main_camera2_pane_g7

0x65b8,	// (0x0008c5e4) main_camera2_pane_g8_ParamLimits

0x65b8,	// (0x0008c5e4) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0009564e) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0009564e) main_camera2_pane_g

0x65f8,	// (0x0008c624) main_camera2_pane_t1_ParamLimits

0x65f8,	// (0x0008c624) main_camera2_pane_t1

0x662d,	// (0x0008c659) main_camera2_pane_t2_ParamLimits

0x662d,	// (0x0008c659) main_camera2_pane_t2

0x6653,	// (0x0008c67f) main_camera2_pane_t3_ParamLimits

0x6653,	// (0x0008c67f) main_camera2_pane_t3

0x66b1,	// (0x0008c6dd) main_camera2_pane_t4_ParamLimits

0x66b1,	// (0x0008c6dd) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00095661) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00095661) main_camera2_pane_t

0x6743,	// (0x0008c76f) cams_zoom_pane_cp4_ParamLimits

0x6743,	// (0x0008c76f) cams_zoom_pane_cp4

0x6759,	// (0x0008c785) image2_cif_pane_ParamLimits

0x6759,	// (0x0008c785) image2_cif_pane

0x6784,	// (0x0008c7b0) image2_subqcif_pane_ParamLimits

0x6784,	// (0x0008c7b0) image2_subqcif_pane

0x679e,	// (0x0008c7ca) main_video2_pane_g1_ParamLimits

0x679e,	// (0x0008c7ca) main_video2_pane_g1

0x67b8,	// (0x0008c7e4) main_video2_pane_g2_ParamLimits

0x67b8,	// (0x0008c7e4) main_video2_pane_g2

0x67ce,	// (0x0008c7fa) main_video2_pane_g3_ParamLimits

0x67ce,	// (0x0008c7fa) main_video2_pane_g3

0x67e4,	// (0x0008c810) main_video2_pane_g4_ParamLimits

0x67e4,	// (0x0008c810) main_video2_pane_g4

0x67fa,	// (0x0008c826) main_video2_pane_g5_ParamLimits

0x67fa,	// (0x0008c826) main_video2_pane_g5

0x6810,	// (0x0008c83c) main_video2_pane_g6_ParamLimits

0x6810,	// (0x0008c83c) main_video2_pane_g6

0x0005,

0xf644,	// (0x00095670) main_video2_pane_g_ParamLimits

0xf644,	// (0x00095670) main_video2_pane_g

0x682a,	// (0x0008c856) main_video2_pane_t1_ParamLimits

0x682a,	// (0x0008c856) main_video2_pane_t1

0x684e,	// (0x0008c87a) main_video2_pane_t2_ParamLimits

0x684e,	// (0x0008c87a) main_video2_pane_t2

0x689c,	// (0x0008c8c8) main_video2_pane_t3_ParamLimits

0x689c,	// (0x0008c8c8) main_video2_pane_t3

0x0002,

0xf651,	// (0x0009567d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0009567d) main_video2_pane_t

0x5d1b,	// (0x0008bd47) call_muted_g2

0x0001,

0xf5f3,	// (0x0009561f) call_muted_g

0xea62,	// (0x00094a8e) main_mup2_pane

0x68e0,	// (0x0008c90c) main_mup2_pane_g1_ParamLimits

0x68e0,	// (0x0008c90c) main_mup2_pane_g1

0x68ec,	// (0x0008c918) main_mup2_pane_g2_ParamLimits

0x68ec,	// (0x0008c918) main_mup2_pane_g2

0xb6fe,	// (0x0009172a) main_mup_pane_g13_cp1

0xb706,	// (0x00091732) mup_volume_pane_cp1

0x6908,	// (0x0008c934) main_mup2_pane_g4_ParamLimits

0x6908,	// (0x0008c934) main_mup2_pane_g4

0x691a,	// (0x0008c946) main_mup2_pane_g5_ParamLimits

0x691a,	// (0x0008c946) main_mup2_pane_g5

0x692c,	// (0x0008c958) main_mup2_pane_g6_ParamLimits

0x692c,	// (0x0008c958) main_mup2_pane_g6

0x693e,	// (0x0008c96a) main_mup2_pane_g7_ParamLimits

0x693e,	// (0x0008c96a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x00095684) main_mup2_pane_g_ParamLimits

0xf658,	// (0x00095684) main_mup2_pane_g

0x6956,	// (0x0008c982) main_mup2_pane_t1_ParamLimits

0x6956,	// (0x0008c982) main_mup2_pane_t1

0x696c,	// (0x0008c998) main_mup2_pane_t2_ParamLimits

0x696c,	// (0x0008c998) main_mup2_pane_t2

0x6982,	// (0x0008c9ae) main_mup2_pane_t3_ParamLimits

0x6982,	// (0x0008c9ae) main_mup2_pane_t3

0x6998,	// (0x0008c9c4) main_mup2_pane_t4_ParamLimits

0x6998,	// (0x0008c9c4) main_mup2_pane_t4

0x69b0,	// (0x0008c9dc) main_mup2_pane_t5_ParamLimits

0x69b0,	// (0x0008c9dc) main_mup2_pane_t5

0x69c8,	// (0x0008c9f4) main_mup2_pane_t6_ParamLimits

0x69c8,	// (0x0008c9f4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x00095693) main_mup2_pane_t_ParamLimits

0xf667,	// (0x00095693) main_mup2_pane_t

0x69f8,	// (0x0008ca24) mup2_visualizer_pane_ParamLimits

0x69f8,	// (0x0008ca24) mup2_visualizer_pane

0x6a26,	// (0x0008ca52) mup_progress_pane_cp_ParamLimits

0x6a26,	// (0x0008ca52) mup_progress_pane_cp

0xb6e0,	// (0x0009170c) mup_volume_pane_cp_ParamLimits

0xb6e0,	// (0x0009170c) mup_volume_pane_cp

0x6a3a,	// (0x0008ca66) mup2_visualizer_pane_g1_ParamLimits

0x6a3a,	// (0x0008ca66) mup2_visualizer_pane_g1

0xb61f,	// (0x0009164b) mup2_visualizer_pane_g2_ParamLimits

0xb61f,	// (0x0009164b) mup2_visualizer_pane_g2

0x6a51,	// (0x0008ca7d) mup2_visualizer_pane_g3_ParamLimits

0x6a51,	// (0x0008ca7d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000956a0) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000956a0) mup2_visualizer_pane_g

0x49bb,	// (0x0008a9e7) aid_size_cell_fmradio

0x5ecd,	// (0x0008bef9) aid_height_parent_landcape

0x2647,	// (0x00088673) wml_content_pane_cp

0x264f,	// (0x0008867b) wml_tabs_pane

0x2658,	// (0x00088684) popup_wml_miniature_window

0x2660,	// (0x0008868c) scroll_pane_cp021

0x2674,	// (0x000886a0) wml_content_pane_comp8

0xea62,	// (0x00094a8e) bg_popup_sub_pane_cp05

0xb63d,	// (0x00091669) popup_wml_miniature_window_g1

0xb645,	// (0x00091671) wml_miniature_view_pane

0x6a5d,	// (0x0008ca89) aid_size_wml_view

0x6a65,	// (0x0008ca91) wml_miniature_view_pane_g1

0x6a6e,	// (0x0008ca9a) wml_miniature_view_pane_g2

0x6a77,	// (0x0008caa3) wml_miniature_view_pane_g3

0x6a7f,	// (0x0008caab) wml_miniature_view_pane_g4

0x6a87,	// (0x0008cab3) wml_miniature_view_pane_g5

0x6a8f,	// (0x0008cabb) wml_miniature_view_pane_g6

0x6a97,	// (0x0008cac3) wml_miniature_view_pane_g7

0x6a9f,	// (0x0008cacb) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000956a7) wml_miniature_view_pane_g

0xb64d,	// (0x00091679) background_graphic_ParamLimits

0xb64d,	// (0x00091679) background_graphic

0xb659,	// (0x00091685) wml_tabs_2_pane

0xb662,	// (0x0009168e) wml_tabs_3_pane_ParamLimits

0xb662,	// (0x0009168e) wml_tabs_3_pane

0xb674,	// (0x000916a0) wml_tabs_4_pane_ParamLimits

0xb674,	// (0x000916a0) wml_tabs_4_pane

0xb68a,	// (0x000916b6) wml_tabs_5_pane_ParamLimits

0xb68a,	// (0x000916b6) wml_tabs_5_pane

0xb6a4,	// (0x000916d0) wml_tabs_pane_g2_ParamLimits

0xb6a4,	// (0x000916d0) wml_tabs_pane_g2

0xb6b8,	// (0x000916e4) wml_tabs_pane_g3_ParamLimits

0xb6b8,	// (0x000916e4) wml_tabs_pane_g3

0x6aa7,	// (0x0008cad3) wml_tabs_2_active_pane_ParamLimits

0x6aa7,	// (0x0008cad3) wml_tabs_2_active_pane

0x6abb,	// (0x0008cae7) wml_tabs_2_passive_pane_ParamLimits

0x6abb,	// (0x0008cae7) wml_tabs_2_passive_pane

0x6acf,	// (0x0008cafb) wml_tabs_3_active_pane_cp_ParamLimits

0x6acf,	// (0x0008cafb) wml_tabs_3_active_pane_cp

0x6ae4,	// (0x0008cb10) wml_tabs_3_passive_pane_ParamLimits

0x6ae4,	// (0x0008cb10) wml_tabs_3_passive_pane

0x6af7,	// (0x0008cb23) wml_tabs_3_passive_pane_cp_ParamLimits

0x6af7,	// (0x0008cb23) wml_tabs_3_passive_pane_cp

0x6b0e,	// (0x0008cb3a) tabs_4_active_pane

0x6b16,	// (0x0008cb42) tabs_4_passive_pane

0x6b20,	// (0x0008cb4c) tabs_4_passive_pane_cp

0x6b28,	// (0x0008cb54) tabs_4_passive_pane_cp2

0x5bd8,	// (0x0008bc04) aid_height_text

0x4169,	// (0x0008a195) mup_volume_cont_pane_ParamLimits

0x4169,	// (0x0008a195) mup_volume_cont_pane

0x1361,	// (0x0008738d) aid_size_cell_pinb

0x136b,	// (0x00087397) aid_size_list_pinb

0x6a12,	// (0x0008ca3e) mup2_volume_cont_pane_ParamLimits

0x6a12,	// (0x0008ca3e) mup2_volume_cont_pane

0xb6cc,	// (0x000916f8) mup2_volume_cont_pane_g1_ParamLimits

0xb6cc,	// (0x000916f8) mup2_volume_cont_pane_g1

0x1024,	// (0x00087050) aid_size_cell_touch_ParamLimits

0x1024,	// (0x00087050) aid_size_cell_touch

0x1251,	// (0x0008727d) touch_pane_ParamLimits

0x1251,	// (0x0008727d) touch_pane

0xe637,	// (0x00094663) main_rss2_pane

0xb70e,	// (0x0009173a) listscroll_rss2_pane

0xb717,	// (0x00091743) rss2_navigation_pane

0xb71f,	// (0x0009174b) list_rss2_pane

0x3a64,	// (0x00089a90) scroll_pane_cp22

0xb727,	// (0x00091753) rss2_navigation_pane_g1

0xb730,	// (0x0009175c) rss2_navigation_pane_g2

0xb738,	// (0x00091764) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000956b8) rss2_navigation_pane_g

0xb740,	// (0x0009176c) rss2_navigation_pane_t1

0x6b32,	// (0x0008cb5e) rss2_list_single_pane_ParamLimits

0x6b32,	// (0x0008cb5e) rss2_list_single_pane

0xb74e,	// (0x0009177a) rss2_list_single_pane_t2

0xb75c,	// (0x00091788) rss2_list_single_pane_t3_ParamLimits

0xb75c,	// (0x00091788) rss2_list_single_pane_t3

0xb779,	// (0x000917a5) rss2_list_single_pane_t4

0x33c4,	// (0x000893f0) smil_status_pane_g1

0xe641,	// (0x0009466d) main_image2_pane_ParamLimits

0xe641,	// (0x0009466d) main_image2_pane

0x65d8,	// (0x0008c604) main_camera2_pane_g9_ParamLimits

0x65d8,	// (0x0008c604) main_camera2_pane_g9

0x6706,	// (0x0008c732) main_camera2_pane_t5_ParamLimits

0x6706,	// (0x0008c732) main_camera2_pane_t5

0xb5ef,	// (0x0009161b) main_camera2_pane_t6_ParamLimits

0xb5ef,	// (0x0009161b) main_camera2_pane_t6

0x6b47,	// (0x0008cb73) main_image2_pane_g1_ParamLimits

0x6b47,	// (0x0008cb73) main_image2_pane_g1

0x4971,	// (0x0008a99d) smil2_video_pane_ParamLimits

0x4971,	// (0x0008a99d) smil2_video_pane

0xb189,	// (0x000911b5) aid_zoom_text_primary_cp

0xb1c9,	// (0x000911f5) popup_preview_fixed_window

0x253f,	// (0x0008856b) im_reading_pane_g1

0x644f,	// (0x0008c47b) cams2_bc_adjust_pane_cp_ParamLimits

0x644f,	// (0x0008c47b) cams2_bc_adjust_pane_cp

0x6735,	// (0x0008c761) cams2_bc_adjust_pane_ParamLimits

0x6735,	// (0x0008c761) cams2_bc_adjust_pane

0xb787,	// (0x000917b3) cams2_bc_adjust_pane_g1

0xb78f,	// (0x000917bb) cams2_slider_pane

0xb798,	// (0x000917c4) cams2_slider_pane_g1

0xb7a1,	// (0x000917cd) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000956bf) cams2_slider_pane_g

0x1459,	// (0x00087485) calc_display_pane_ParamLimits

0x1481,	// (0x000874ad) calc_paper_pane_ParamLimits

0x14a4,	// (0x000874d0) grid_calc_pane_ParamLimits

0xb2fb,	// (0x00091327) popup_clock_digital_window_t1_ParamLimits

0x47f8,	// (0x0008a824) main_image_pane_t1

0x143b,	// (0x00087467) aid_size_cell_calc_ParamLimits

0x143b,	// (0x00087467) aid_size_cell_calc

0x5f13,	// (0x0008bf3f) popup_blid_sat_info2_window_ParamLimits

0x5f13,	// (0x0008bf3f) popup_blid_sat_info2_window

0xb7c3,	// (0x000917ef) aid_size_cell_blid

0xb7cb,	// (0x000917f7) bg_popup_window_pane_cp07

0xb7ee,	// (0x0009181a) grid_popup_blid_pane

0xb7f8,	// (0x00091824) heading_pane_cp05_ParamLimits

0xb7f8,	// (0x00091824) heading_pane_cp05

0xb8c2,	// (0x000918ee) cell_popup_blid_pane_ParamLimits

0xb8c2,	// (0x000918ee) cell_popup_blid_pane

0xb8e6,	// (0x00091912) cell_popup_blid_pane_g1

0xb8ee,	// (0x0009191a) cell_popup_blid_pane_t1

0x69e2,	// (0x0008ca0e) mup2_indicator_pane_ParamLimits

0x69e2,	// (0x0008ca0e) mup2_indicator_pane

0xef47,	// (0x00094f73) mup2_visualizer_osc_pane

0xb62b,	// (0x00091657) mup2_visualizer_spec_pane_ParamLimits

0xb62b,	// (0x00091657) mup2_visualizer_spec_pane

0x6b5d,	// (0x0008cb89) mup2_spec_half_pane

0x6b66,	// (0x0008cb92) mup2_spec_half_pane_cp

0x6b6e,	// (0x0008cb9a) mup2_spec_bar_pane_ParamLimits

0x6b6e,	// (0x0008cb9a) mup2_spec_bar_pane

0xb57a,	// (0x000915a6) mup2_spec_bar_pane_g1

0xb584,	// (0x000915b0) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00095632) mup2_spec_bar_pane_g

0x6b8e,	// (0x0008cbba) mup2_osc_middle_pane

0xb596,	// (0x000915c2) mup2_visualizer_osc_pane_g1

0xe66f,	// (0x0009469b) popup_number_entry_window_t1_ParamLimits

0xe682,	// (0x000946ae) popup_number_entry_window_t2_ParamLimits

0xe694,	// (0x000946c0) popup_number_entry_window_t3_ParamLimits

0x12a3,	// (0x000872cf) popup_number_entry_window_t5_ParamLimits

0x12a3,	// (0x000872cf) popup_number_entry_window_t5

0xf0ca,	// (0x000950f6) popup_number_entry_window_t_ParamLimits

0xe6a6,	// (0x000946d2) text_title_cp2_ParamLimits

0xb33a,	// (0x00091366) aid_hotspot_pointer_text2_pane

0xb360,	// (0x0009138c) main_viewer_pane_g9_ParamLimits

0xb360,	// (0x0009138c) main_viewer_pane_g9

0x2d29,	// (0x00088d55) cale_month_pane_t1_ParamLimits

0x3436,	// (0x00089462) bg_cale_pane_ParamLimits

0x344e,	// (0x0008947a) list_cale_pane_ParamLimits

0x345f,	// (0x0008948b) listscroll_cale_day_pane_t1

0x3471,	// (0x0008949d) scroll_pane_cp09_ParamLimits

0x4217,	// (0x0008a243) main_mup_eq_pane_t1_ParamLimits

0x4217,	// (0x0008a243) main_mup_eq_pane_t1

0x4231,	// (0x0008a25d) main_mup_eq_pane_t2_ParamLimits

0x4231,	// (0x0008a25d) main_mup_eq_pane_t2

0x424b,	// (0x0008a277) main_mup_eq_pane_t3_ParamLimits

0x424b,	// (0x0008a277) main_mup_eq_pane_t3

0x4267,	// (0x0008a293) main_mup_eq_pane_t4_ParamLimits

0x4267,	// (0x0008a293) main_mup_eq_pane_t4

0x4283,	// (0x0008a2af) main_mup_eq_pane_t5_ParamLimits

0x4283,	// (0x0008a2af) main_mup_eq_pane_t5

0x429f,	// (0x0008a2cb) main_mup_eq_pane_t6_ParamLimits

0x429f,	// (0x0008a2cb) main_mup_eq_pane_t6

0x42b3,	// (0x0008a2df) main_mup_eq_pane_t7_ParamLimits

0x42b3,	// (0x0008a2df) main_mup_eq_pane_t7

0x42c7,	// (0x0008a2f3) main_mup_eq_pane_t8_ParamLimits

0x42c7,	// (0x0008a2f3) main_mup_eq_pane_t8

0x42db,	// (0x0008a307) main_mup_eq_pane_t9_ParamLimits

0x42db,	// (0x0008a307) main_mup_eq_pane_t9

0x42f5,	// (0x0008a321) main_mup_eq_pane_t10_ParamLimits

0x42f5,	// (0x0008a321) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00095481) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00095481) main_mup_eq_pane_t

0x43a4,	// (0x0008a3d0) mup_equalizer_pane_cp5_ParamLimits

0x43b8,	// (0x0008a3e4) mup_equalizer_pane_cp6_ParamLimits

0x43cc,	// (0x0008a3f8) mup_equalizer_pane_cp7_ParamLimits

0xe637,	// (0x00094663) main_gallery_pane

0xb59f,	// (0x000915cb) smil2_volume_pane

0xb5a7,	// (0x000915d3) smil_status_volume_pane_g1_ParamLimits

0xb5ba,	// (0x000915e6) smil_status_volume_pane_g2_ParamLimits

0xb5cd,	// (0x000915f9) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00095637) smil_status_volume_pane_g_ParamLimits

0xb7cb,	// (0x000917f7) bg_popup_window_pane_cp07_ParamLimits

0xb7d9,	// (0x00091805) blid_firmament_pane

0x6b97,	// (0x0008cbc3) aid_size_cell_gallery_ParamLimits

0x6b97,	// (0x0008cbc3) aid_size_cell_gallery

0x6bad,	// (0x0008cbd9) grid_gallery_pane_ParamLimits

0x6bad,	// (0x0008cbd9) grid_gallery_pane

0x6bc6,	// (0x0008cbf2) cell_gallery_pane_ParamLimits

0x6bc6,	// (0x0008cbf2) cell_gallery_pane

0xb8fc,	// (0x00091928) bg_cell_gallery_focus_pane_ParamLimits

0xb8fc,	// (0x00091928) bg_cell_gallery_focus_pane

0xb90e,	// (0x0009193a) cell_gallery_pane_g1_ParamLimits

0xb90e,	// (0x0009193a) cell_gallery_pane_g1

0x6c0f,	// (0x0008cc3b) cell_gallery_pane_g2_ParamLimits

0x6c0f,	// (0x0008cc3b) cell_gallery_pane_g2

0x6c1c,	// (0x0008cc48) cell_gallery_pane_g3_ParamLimits

0x6c1c,	// (0x0008cc48) cell_gallery_pane_g3

0xb91a,	// (0x00091946) cell_gallery_pane_g4_ParamLimits

0xb91a,	// (0x00091946) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000956e5) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000956e5) cell_gallery_pane_g

0xb926,	// (0x00091952) bg_cell_gallery_focus_pane_g1

0xb92e,	// (0x0009195a) bg_cell_gallery_focus_pane_g2

0xb936,	// (0x00091962) bg_cell_gallery_focus_pane_g3

0xb93e,	// (0x0009196a) bg_cell_gallery_focus_pane_g4

0xb946,	// (0x00091972) bg_cell_gallery_focus_pane_g5

0xb94e,	// (0x0009197a) bg_cell_gallery_focus_pane_g6

0xb956,	// (0x00091982) bg_cell_gallery_focus_pane_g7

0xb95e,	// (0x0009198a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000956ee) bg_cell_gallery_focus_pane_g

0xb966,	// (0x00091992) aid_firma_cardinal

0xb97a,	// (0x000919a6) blid_firmament_pane_t1

0xb991,	// (0x000919bd) blid_firmament_pane_t2

0xb9a8,	// (0x000919d4) blid_firmament_pane_t3

0xb9bf,	// (0x000919eb) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000956ff) blid_firmament_pane_t

0xb9d6,	// (0x00091a02) blid_sat_info_pane

0xb9e6,	// (0x00091a12) blid_sat_info_pane_g1

0xb9e6,	// (0x00091a12) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00095708) blid_sat_info_pane_g

0xb9f0,	// (0x00091a1c) blid_sat_info_pane_t1

0xb9fe,	// (0x00091a2a) smil2_volume_content_pane

0xba07,	// (0x00091a33) smil2_volume_pane_g1

0xba0f,	// (0x00091a3b) smil2_volume_content_pane_g1

0xba18,	// (0x00091a44) smil2_volume_content_pane_g2

0xba21,	// (0x00091a4d) smil2_volume_content_pane_g3

0xba2a,	// (0x00091a56) smil2_volume_content_pane_g4

0xba33,	// (0x00091a5f) smil2_volume_content_pane_g5

0xba3c,	// (0x00091a68) smil2_volume_content_pane_g6

0xba45,	// (0x00091a71) smil2_volume_content_pane_g7

0xba4e,	// (0x00091a7a) smil2_volume_content_pane_g8

0xba57,	// (0x00091a83) smil2_volume_content_pane_g9

0xba60,	// (0x00091a8c) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0009570d) smil2_volume_content_pane_g

0x1a36,	// (0x00087a62) cale_week_day_heading_pane_t1_ParamLimits

0x1a7b,	// (0x00087aa7) cale_week_day_heading_pane_t2_ParamLimits

0x1ac5,	// (0x00087af1) cale_week_day_heading_pane_t3_ParamLimits

0x1b0f,	// (0x00087b3b) cale_week_day_heading_pane_t4_ParamLimits

0x1b59,	// (0x00087b85) cale_week_day_heading_pane_t5_ParamLimits

0x1bab,	// (0x00087bd7) cale_week_day_heading_pane_t6_ParamLimits

0x1bfd,	// (0x00087c29) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000951fd) cale_week_day_heading_pane_t_ParamLimits

0xeeec,	// (0x00094f18) bg_cale_side_pane_ParamLimits

0x1c42,	// (0x00087c6e) cale_week_time_pane_t1_ParamLimits

0x1c5c,	// (0x00087c88) cale_week_time_pane_t2_ParamLimits

0x1c76,	// (0x00087ca2) cale_week_time_pane_t3_ParamLimits

0x1c90,	// (0x00087cbc) cale_week_time_pane_t4_ParamLimits

0x1caa,	// (0x00087cd6) cale_week_time_pane_t5_ParamLimits

0x1cc4,	// (0x00087cf0) cale_week_time_pane_t6_ParamLimits

0x1cde,	// (0x00087d0a) cale_week_time_pane_t7_ParamLimits

0x1cf8,	// (0x00087d24) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009520c) cale_week_time_pane_t_ParamLimits

0x1d18,	// (0x00087d44) cell_cale_week_pane_g2_ParamLimits

0xeeec,	// (0x00094f18) bg_cale_side_pane_cp01_ParamLimits

0x31c5,	// (0x000891f1) cale_month_week_pane_t1_ParamLimits

0x31de,	// (0x0008920a) cale_month_week_pane_t2_ParamLimits

0x31f7,	// (0x00089223) cale_month_week_pane_t3_ParamLimits

0x3210,	// (0x0008923c) cale_month_week_pane_t4_ParamLimits

0x3229,	// (0x00089255) cale_month_week_pane_t5_ParamLimits

0x3242,	// (0x0008926e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000952e1) cale_month_week_pane_t_ParamLimits

0xb26b,	// (0x00091297) cell_cale_month_pane_g1_ParamLimits

0xe637,	// (0x00094663) main_cale_event_viewer_pane

0xe637,	// (0x00094663) listscroll_cale_event_viewer_pane

0xba69,	// (0x00091a95) list_cale_ev_pane

0xba71,	// (0x00091a9d) scroll_pane_cp023

0xba7d,	// (0x00091aa9) field_cale_ev_pane_ParamLimits

0xba7d,	// (0x00091aa9) field_cale_ev_pane

0xba9b,	// (0x00091ac7) field_cale_ev_content_pane_ParamLimits

0xba9b,	// (0x00091ac7) field_cale_ev_content_pane

0xbaa7,	// (0x00091ad3) field_cale_ev_pane_g1_ParamLimits

0xbaa7,	// (0x00091ad3) field_cale_ev_pane_g1

0xbab3,	// (0x00091adf) field_cale_ev_pane_g2_ParamLimits

0xbab3,	// (0x00091adf) field_cale_ev_pane_g2

0xbacb,	// (0x00091af7) field_cale_ev_pane_g3_ParamLimits

0xbacb,	// (0x00091af7) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00095722) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00095722) field_cale_ev_pane_g

0xbae3,	// (0x00091b0f) field_cale_ev_pane_t1_ParamLimits

0xbae3,	// (0x00091b0f) field_cale_ev_pane_t1

0xbafa,	// (0x00091b26) field_cale_ev_content_pane_t1_ParamLimits

0xbafa,	// (0x00091b26) field_cale_ev_content_pane_t1

0x4476,	// (0x0008a4a2) bg_button_pane_cp01

0x1763,	// (0x0008778f) listscroll_cale_week_pane_ParamLimits

0xee97,	// (0x00094ec3) popup_toolbar_window_cp01

0xeebd,	// (0x00094ee9) listscroll_cale_week_pane_t1_ParamLimits

0x1763,	// (0x0008778f) listscroll_cale_day_pane_ParamLimits

0xee97,	// (0x00094ec3) popup_toolbar_window_cp02

0x345f,	// (0x0008948b) listscroll_cale_day_pane_t1_ParamLimits

0x1763,	// (0x0008778f) main_cale_month_pane_ParamLimits

0xb518,	// (0x00091544) popup_toolbar_window_cp03_ParamLimits

0xb518,	// (0x00091544) popup_toolbar_window_cp03

0x47d6,	// (0x0008a802) main_image_pane_g2_ParamLimits

0x47d6,	// (0x0008a802) main_image_pane_g2

0x47e7,	// (0x0008a813) main_image_pane_g3_ParamLimits

0x47e7,	// (0x0008a813) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00095513) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00095513) main_image_pane_g

0x47f8,	// (0x0008a824) main_image_pane_t1_ParamLimits

0x480f,	// (0x0008a83b) main_image_pane_t2_ParamLimits

0x480f,	// (0x0008a83b) main_image_pane_t2

0x4821,	// (0x0008a84d) main_image_pane_t3_ParamLimits

0x4821,	// (0x0008a84d) main_image_pane_t3

0x4849,	// (0x0008a875) main_image_pane_t4_ParamLimits

0x4849,	// (0x0008a875) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009551a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009551a) main_image_pane_t

0x4869,	// (0x0008a895) popup_image_details_window_cp01

0x4873,	// (0x0008a89f) popup_toobar_trans_pane_cp01_ParamLimits

0x4873,	// (0x0008a89f) popup_toobar_trans_pane_cp01

0x5ff2,	// (0x0008c01e) popup_image_details_window_ParamLimits

0x5ff2,	// (0x0008c01e) popup_image_details_window

0xb4eb,	// (0x00091517) popup_image_focus_window

0x6409,	// (0x0008c435) camera2_autofocus_pane_ParamLimits

0x6409,	// (0x0008c435) camera2_autofocus_pane

0xe637,	// (0x00094663) bg_popup_sub_pane_cp06

0xbb18,	// (0x00091b44) popup_image_focus_window_g1

0xbb20,	// (0x00091b4c) popup_image_focus_window_g2

0xbb28,	// (0x00091b54) popup_image_focus_window_g3

0xbb30,	// (0x00091b5c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x00095729) popup_image_focus_window_g

0xbb38,	// (0x00091b64) popup_image_focus_window_t1

0xbb46,	// (0x00091b72) popup_image_focus_window_t2

0xbb56,	// (0x00091b82) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00095732) popup_image_focus_window_t

0xbb64,	// (0x00091b90) camera2_autofocus_pane_g1

0xe641,	// (0x0009466d) bg_tb_trans_pane_cp01

0xbb72,	// (0x00091b9e) popup_image_details_window_g1

0xbb85,	// (0x00091bb1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00095744) popup_image_details_window_g

0xbbae,	// (0x00091bda) popup_image_details_window_t1

0xbbc0,	// (0x00091bec) popup_image_details_window_t2

0xbbd9,	// (0x00091c05) popup_image_details_window_t3

0xbbed,	// (0x00091c19) popup_image_details_window_t4

0xbc08,	// (0x00091c34) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0009574b) popup_image_details_window_t

0xed6e,	// (0x00094d9a) bg_calc_paper_pane_ParamLimits

0xe637,	// (0x00094663) grid_highlight_pane_cp013

0xb1db,	// (0x00091207) list_calc_pane_ParamLimits

0xb1ed,	// (0x00091219) scroll_pane_cp024

0xed82,	// (0x00094dae) bg_calc_display_pane_ParamLimits

0x15a2,	// (0x000875ce) calc_display_pane_t1_ParamLimits

0x15b4,	// (0x000875e0) calc_display_pane_t2_ParamLimits

0xb1f5,	// (0x00091221) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009517d) calc_display_pane_t_ParamLimits

0x166e,	// (0x0008769a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009519a) cell_calc_pane_g

0x1677,	// (0x000876a3) cell_calc_pane_t1

0xede1,	// (0x00094e0d) grid_highlight_pane_cp02_ParamLimits

0xedf7,	// (0x00094e23) toolbar_button_pane_cp01_ParamLimits

0xedf7,	// (0x00094e23) toolbar_button_pane_cp01

0x48b5,	// (0x0008a8e1) temp_image_control_pane_ParamLimits

0x48b5,	// (0x0008a8e1) temp_image_control_pane

0xe641,	// (0x0009466d) main_mp3_pane

0xbc22,	// (0x00091c4e) temp_image_control_pane_g1_ParamLimits

0xbc22,	// (0x00091c4e) temp_image_control_pane_g1

0xbc30,	// (0x00091c5c) temp_image_control_pane_g2_ParamLimits

0xbc30,	// (0x00091c5c) temp_image_control_pane_g2

0xbc42,	// (0x00091c6e) temp_image_control_pane_g3_ParamLimits

0xbc42,	// (0x00091c6e) temp_image_control_pane_g3

0x6c59,	// (0x0008cc85) temp_image_control_pane_g4_ParamLimits

0x6c59,	// (0x0008cc85) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00095756) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00095756) temp_image_control_pane_g

0xbc22,	// (0x00091c4e) main_mp3_pane_g1

0x6c6c,	// (0x0008cc98) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0009575f) main_mp3_pane_g

0xbc85,	// (0x00091cb1) main_mp3_pane_t1

0xef4f,	// (0x00094f7b) main_camera_pane_g8_ParamLimits

0xef4f,	// (0x00094f7b) main_camera_pane_g8

0x2012,	// (0x0008803e) main_video_pane_g7_ParamLimits

0x2012,	// (0x0008803e) main_video_pane_g7

0xb60d,	// (0x00091639) main_camera2_pane_t7_ParamLimits

0xb60d,	// (0x00091639) main_camera2_pane_t7

0x2607,	// (0x00088633) scroll_pane_cp025_ParamLimits

0x2607,	// (0x00088633) scroll_pane_cp025

0x261b,	// (0x00088647) scroll_pane_cp026_ParamLimits

0x261b,	// (0x00088647) scroll_pane_cp026

0x262a,	// (0x00088656) wml_content_pane_ParamLimits

0xe637,	// (0x00094663) main_touch_calib_pane

0x6d40,	// (0x0008cd6c) main_touch_calib_pane_g1

0x6d52,	// (0x0008cd7e) main_touch_calib_pane_g2

0x6d64,	// (0x0008cd90) main_touch_calib_pane_g3

0x6d76,	// (0x0008cda2) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0009577d) main_touch_calib_pane_g

0x6d88,	// (0x0008cdb4) main_touch_calib_pane_t1

0x6da2,	// (0x0008cdce) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x00095786) main_touch_calib_pane_t

0x3d0c,	// (0x00089d38) mup_progress_pane_cp02

0x3d41,	// (0x00089d6d) navi_pane_g1

0x3dfc,	// (0x00089e28) navi_pane_mp_t3

0xe641,	// (0x0009466d) main_mp3_pane_ParamLimits

0x6177,	// (0x0008c1a3) navi_pane_ParamLimits

0xbc22,	// (0x00091c4e) main_mp3_pane_g1_ParamLimits

0x6c6c,	// (0x0008cc98) main_mp3_pane_g2_ParamLimits

0x6c7a,	// (0x0008cca6) main_mp3_pane_g3_ParamLimits

0x6c7a,	// (0x0008cca6) main_mp3_pane_g3

0x6c88,	// (0x0008ccb4) main_mp3_pane_g4_ParamLimits

0x6c88,	// (0x0008ccb4) main_mp3_pane_g4

0xbc52,	// (0x00091c7e) main_mp3_pane_g5_ParamLimits

0xbc52,	// (0x00091c7e) main_mp3_pane_g5

0xbc60,	// (0x00091c8c) main_mp3_pane_g6_ParamLimits

0xbc60,	// (0x00091c8c) main_mp3_pane_g6

0xbc6d,	// (0x00091c99) main_mp3_pane_g7_ParamLimits

0xbc6d,	// (0x00091c99) main_mp3_pane_g7

0xbc79,	// (0x00091ca5) main_mp3_pane_g8_ParamLimits

0xbc79,	// (0x00091ca5) main_mp3_pane_g8

0xf733,	// (0x0009575f) main_mp3_pane_g_ParamLimits

0x6c94,	// (0x0008ccc0) main_mp3_pane_t2

0x6ca2,	// (0x0008ccce) main_mp3_pane_t3

0xbc93,	// (0x00091cbf) main_mp3_pane_t4

0xbca1,	// (0x00091ccd) main_mp3_pane_t5

0x0005,

0xf744,	// (0x00095770) main_mp3_pane_t

0xbcaf,	// (0x00091cdb) mup_progress_pane_cp01

0xb189,	// (0x000911b5) aid_zoom_text_secondary2

0xba69,	// (0x00091a95) list_cale_ev2_pane

0xba71,	// (0x00091a9d) scroll_pane_cp023_ParamLimits

0x6df8,	// (0x0008ce24) field_cale_ev2_pane_ParamLimits

0x6df8,	// (0x0008ce24) field_cale_ev2_pane

0x6e18,	// (0x0008ce44) field_cale_ev2_pane_g1_ParamLimits

0x6e18,	// (0x0008ce44) field_cale_ev2_pane_g1

0x6e24,	// (0x0008ce50) field_cale_ev2_pane_g2_ParamLimits

0x6e24,	// (0x0008ce50) field_cale_ev2_pane_g2

0x6e3c,	// (0x0008ce68) field_cale_ev2_pane_g3_ParamLimits

0x6e3c,	// (0x0008ce68) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x00095791) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x00095791) field_cale_ev2_pane_g

0xbcc3,	// (0x00091cef) field_cale_ev2_pane_t1_ParamLimits

0xbcc3,	// (0x00091cef) field_cale_ev2_pane_t1

0xbcda,	// (0x00091d06) field_cale_ev2_pane_t2_ParamLimits

0xbcda,	// (0x00091d06) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0009579a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0009579a) field_cale_ev2_pane_t

0x45a5,	// (0x0008a5d1) main_postcard_pane_g5_ParamLimits

0x45a5,	// (0x0008a5d1) main_postcard_pane_g5

0x45bb,	// (0x0008a5e7) main_postcard_pane_g6_ParamLimits

0x45bb,	// (0x0008a5e7) main_postcard_pane_g6

0x1dde,	// (0x00087e0a) camera2_autofocus_pane_cp_ParamLimits

0x1dde,	// (0x00087e0a) camera2_autofocus_pane_cp

0xe641,	// (0x0009466d) main_mup3_pane

0x6e54,	// (0x0008ce80) main_mup3_pane_g1_ParamLimits

0x6e54,	// (0x0008ce80) main_mup3_pane_g1

0x6e76,	// (0x0008cea2) main_mup3_pane_g2_ParamLimits

0x6e76,	// (0x0008cea2) main_mup3_pane_g2

0x6ef4,	// (0x0008cf20) main_mup3_pane_g3_ParamLimits

0x6ef4,	// (0x0008cf20) main_mup3_pane_g3

0x6f3a,	// (0x0008cf66) main_mup3_pane_g4_ParamLimits

0x6f3a,	// (0x0008cf66) main_mup3_pane_g4

0x6f80,	// (0x0008cfac) main_mup3_pane_g5_ParamLimits

0x6f80,	// (0x0008cfac) main_mup3_pane_g5

0x6fc6,	// (0x0008cff2) main_mup3_pane_g6_ParamLimits

0x6fc6,	// (0x0008cff2) main_mup3_pane_g6

0xbd0f,	// (0x00091d3b) main_mup3_pane_g7_ParamLimits

0xbd0f,	// (0x00091d3b) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000957aa) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000957aa) main_mup3_pane_g

0x7044,	// (0x0008d070) main_mup3_pane_t1_ParamLimits

0x7044,	// (0x0008d070) main_mup3_pane_t1

0x70b8,	// (0x0008d0e4) main_mup3_pane_t2_ParamLimits

0x70b8,	// (0x0008d0e4) main_mup3_pane_t2

0x718c,	// (0x0008d1b8) main_mup3_pane_t4_ParamLimits

0x718c,	// (0x0008d1b8) main_mup3_pane_t4

0x71e2,	// (0x0008d20e) main_mup3_pane_t5_ParamLimits

0x71e2,	// (0x0008d20e) main_mup3_pane_t5

0x729e,	// (0x0008d2ca) main_mup3_pane_t6_ParamLimits

0x729e,	// (0x0008d2ca) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000957bb) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000957bb) main_mup3_pane_t

0x7356,	// (0x0008d382) mup3_progress_pane_ParamLimits

0x7356,	// (0x0008d382) mup3_progress_pane

0x73ec,	// (0x0008d418) popup_mup3_control_window_ParamLimits

0x73ec,	// (0x0008d418) popup_mup3_control_window

0xbd1d,	// (0x00091d49) popup_mup3_text_window

0x741e,	// (0x0008d44a) mup3_progress_pane_t1

0x743d,	// (0x0008d469) mup3_progress_pane_t2

0xbd25,	// (0x00091d51) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000957c8) mup3_progress_pane_t

0xbd42,	// (0x00091d6e) mup_progress_pane_cp03

0xe637,	// (0x00094663) bg_tb_trans_pane_cp04

0x745c,	// (0x0008d488) mup3_volume_pane

0x7464,	// (0x0008d490) popup_mup3_control_window_g1

0x746d,	// (0x0008d499) mup3_volume_pane_g1

0x7476,	// (0x0008d4a2) mup3_volume_pane_g2

0x747f,	// (0x0008d4ab) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000957cf) mup3_volume_pane_g

0xe637,	// (0x00094663) bg_tb_trans_pane_cp03

0xbd52,	// (0x00091d7e) popup_mup3_text_window_g1

0xbd5a,	// (0x00091d86) popup_mup3_text_window_t1

0xedca,	// (0x00094df6) list_calc_item_pane_g1_ParamLimits

0xb6f5,	// (0x00091721) mup_volume_pane_cp_g1

0x6dbc,	// (0x0008cde8) main_touch_calib_pane_t3

0x6dd0,	// (0x0008cdfc) main_touch_calib_pane_t4

0x6de4,	// (0x0008ce10) main_touch_calib_pane_t5

0xb165,	// (0x00091191) aid_cell_size_toolbar2

0xb16d,	// (0x00091199) aid_popup3_width_pane

0xb179,	// (0x000911a5) aid_zoom_text_msg_primary

0x1dbd,	// (0x00087de9) vorec_t7

0xed8e,	// (0x00094dba) bg_calc_paper_pane_g1_ParamLimits

0xed9a,	// (0x00094dc6) bg_calc_paper_pane_g2_ParamLimits

0xeda6,	// (0x00094dd2) bg_calc_paper_pane_g3_ParamLimits

0xedb2,	// (0x00094dde) bg_calc_paper_pane_g4_ParamLimits

0xedbe,	// (0x00094dea) bg_calc_paper_pane_g5_ParamLimits

0x15fb,	// (0x00087627) bg_calc_paper_pane_g6_ParamLimits

0x160a,	// (0x00087636) bg_calc_paper_pane_g7_ParamLimits

0x1619,	// (0x00087645) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00095184) bg_calc_paper_pane_g_ParamLimits

0x162c,	// (0x00087658) calc_bg_paper_pane_g9_ParamLimits

0x1f29,	// (0x00087f55) image_qvga_pane_ParamLimits

0x1f29,	// (0x00087f55) image_qvga_pane

0xecbd,	// (0x00094ce9) bg_popup_sub_pane_cp04_ParamLimits

0x4734,	// (0x0008a760) popup_mup_playback_window_g1_ParamLimits

0x4740,	// (0x0008a76c) popup_mup_playback_window_t1_ParamLimits

0x4755,	// (0x0008a781) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0009550e) popup_mup_playback_window_t_ParamLimits

0x68fc,	// (0x0008c928) main_mup2_pane_g3_ParamLimits

0x68fc,	// (0x0008c928) main_mup2_pane_g3

0x229a,	// (0x000882c6) popup_toolbar_window_cp04

0x4f37,	// (0x0008af63) popup_call2_audio_second_window_g3_ParamLimits

0x4f37,	// (0x0008af63) popup_call2_audio_second_window_g3

0x5341,	// (0x0008b36d) popup_call2_audio_first_window_g4_ParamLimits

0x5341,	// (0x0008b36d) popup_call2_audio_first_window_g4

0x59c0,	// (0x0008b9ec) popup_call2_audio_in_window_g4_ParamLimits

0x59c0,	// (0x0008b9ec) popup_call2_audio_in_window_g4

0x476a,	// (0x0008a796) aid_area_sk_bg_cut_ParamLimits

0x476a,	// (0x0008a796) aid_area_sk_bg_cut

0x4788,	// (0x0008a7b4) aid_area_sk_bg_cut_2_ParamLimits

0x4788,	// (0x0008a7b4) aid_area_sk_bg_cut_2

0x6bff,	// (0x0008cc2b) aid_placing_details_win

0x6c07,	// (0x0008cc33) aid_placing_details_win_2

0xbb64,	// (0x00091b90) camera2_autofocus_pane_g1_ParamLimits

0x11ea,	// (0x00087216) popup_fixed_preview_cale_window_ParamLimits

0x11ea,	// (0x00087216) popup_fixed_preview_cale_window

0x3ebc,	// (0x00089ee8) navi_slider_pane_g3

0x3ec5,	// (0x00089ef1) navi_slider_pane_g4

0x3ece,	// (0x00089efa) navi_slider_pane_g5

0x3ebc,	// (0x00089ee8) navi_slider_pane_g6

0xb321,	// (0x0009134d) navi_slider_pane_g7

0x43e9,	// (0x0008a415) mup_scale_pane_g3

0x43f2,	// (0x0008a41e) mup_scale_pane_g4

0x43fb,	// (0x0008a427) mup_scale_pane_g5

0x4404,	// (0x0008a430) mup_scale_pane_g6

0x440d,	// (0x0008a439) mup_scale_pane_g7

0x3ebc,	// (0x00089ee8) cams2_slider_pane_g3

0xb7aa,	// (0x000917d6) cams2_slider_pane_g4

0xb7b2,	// (0x000917de) cams2_slider_pane_g5

0x3ebc,	// (0x00089ee8) cams2_slider_pane_g6

0xb7ba,	// (0x000917e6) cams2_slider_pane_g7

0xb9e6,	// (0x00091a12) camera2_autofocus_pane_cp_g1

0xb4bf,	// (0x000914eb) bg_popup_preview_window_pane_cp02_ParamLimits

0xb4bf,	// (0x000914eb) bg_popup_preview_window_pane_cp02

0xbd68,	// (0x00091d94) list_fp_cale_pane_ParamLimits

0xbd68,	// (0x00091d94) list_fp_cale_pane

0xbd74,	// (0x00091da0) popup_fixed_preview_cale_window_t1_ParamLimits

0xbd74,	// (0x00091da0) popup_fixed_preview_cale_window_t1

0x7488,	// (0x0008d4b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x7488,	// (0x0008d4b4) popup_fixed_preview_cale_window_t2

0x749d,	// (0x0008d4c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x749d,	// (0x0008d4c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000957d6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000957d6) popup_fixed_preview_cale_window_t

0x74b2,	// (0x0008d4de) list_single_fp_cale_pane_ParamLimits

0x74b2,	// (0x0008d4de) list_single_fp_cale_pane

0xbd92,	// (0x00091dbe) list_single_fp_cale_pane_g1_ParamLimits

0xbd92,	// (0x00091dbe) list_single_fp_cale_pane_g1

0xbd9e,	// (0x00091dca) list_single_fp_cale_pane_g2_ParamLimits

0xbd9e,	// (0x00091dca) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000957dd) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000957dd) list_single_fp_cale_pane_g

0xbdb7,	// (0x00091de3) list_single_fp_cale_pane_t1_ParamLimits

0xbdb7,	// (0x00091de3) list_single_fp_cale_pane_t1

0xbdc9,	// (0x00091df5) list_single_fp_cale_pane_t2_ParamLimits

0xbdc9,	// (0x00091df5) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000957e4) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000957e4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe637,	// (0x00094663) main_dialer_pane

0x74c7,	// (0x0008d4f3) aid_cell_size_keypad

0x74d1,	// (0x0008d4fd) dialer_ne_pane

0x74d9,	// (0x0008d505) grid_dialer_command_1_pane

0x74e1,	// (0x0008d50d) grid_dialer_command_2_pane

0x74e9,	// (0x0008d515) grid_dialer_keypad_pane

0x74fb,	// (0x0008d527) bg_popup_call_pane_cp06_ParamLimits

0x74fb,	// (0x0008d527) bg_popup_call_pane_cp06

0x7507,	// (0x0008d533) dialer_ne_clear_pane_ParamLimits

0x7507,	// (0x0008d533) dialer_ne_clear_pane

0xbdfc,	// (0x00091e28) dialer_ne_pane_g1

0xbe04,	// (0x00091e30) dialer_ne_pane_t1_ParamLimits

0xbe04,	// (0x00091e30) dialer_ne_pane_t1

0x7513,	// (0x0008d53f) dialer_ne_pane_t2_ParamLimits

0x7513,	// (0x0008d53f) dialer_ne_pane_t2

0x753d,	// (0x0008d569) dialer_ne_pane_t3_ParamLimits

0x753d,	// (0x0008d569) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000957e9) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000957e9) dialer_ne_pane_t

0x756d,	// (0x0008d599) dialer_ne_pane_t3_copy1_ParamLimits

0x756d,	// (0x0008d599) dialer_ne_pane_t3_copy1

0x759c,	// (0x0008d5c8) cell_dialer_keypad_pane_ParamLimits

0x759c,	// (0x0008d5c8) cell_dialer_keypad_pane

0x75b3,	// (0x0008d5df) cell_dialer_command_1_pane_ParamLimits

0x75b3,	// (0x0008d5df) cell_dialer_command_1_pane

0x75c9,	// (0x0008d5f5) cell_dialer_command_2_pane_ParamLimits

0x75c9,	// (0x0008d5f5) cell_dialer_command_2_pane

0xbe16,	// (0x00091e42) bg_button_pane_cp02_ParamLimits

0xbe16,	// (0x00091e42) bg_button_pane_cp02

0x75d8,	// (0x0008d604) cell_dialer_keypad_pane_g1_ParamLimits

0x75d8,	// (0x0008d604) cell_dialer_keypad_pane_g1

0xbe16,	// (0x00091e42) bg_button_pane_cp03_ParamLimits

0xbe16,	// (0x00091e42) bg_button_pane_cp03

0x75ec,	// (0x0008d618) cell_dialer_command_1_pane_g1_ParamLimits

0x75ec,	// (0x0008d618) cell_dialer_command_1_pane_g1

0xbe22,	// (0x00091e4e) bg_button_pane_cp04

0x7600,	// (0x0008d62c) cell_dialer_command_2_pane_g1

0xef47,	// (0x00094f73) bg_button_pane_cp06

0xbe2a,	// (0x00091e56) dialer_ne_clear_pane_g1

0x3d4d,	// (0x00089d79) navi_pane_g2

0x3d7b,	// (0x00089da7) navi_pane_g3

0x0002,

0xf3e5,	// (0x00095411) navi_pane_g

0x3e0a,	// (0x00089e36) navi_pane_mv_g2

0x3e31,	// (0x00089e5d) navi_pane_mv_g5

0x3e39,	// (0x00089e65) navi_pane_mv_t1

0xed82,	// (0x00094dae) main_clock2_pane

0x764b,	// (0x0008d677) main_clock2_list_pane_ParamLimits

0x764b,	// (0x0008d677) main_clock2_list_pane

0x7681,	// (0x0008d6ad) main_clock2_pane_t1_ParamLimits

0x7681,	// (0x0008d6ad) main_clock2_pane_t1

0x76bd,	// (0x0008d6e9) main_clock2_pane_t2_ParamLimits

0x76bd,	// (0x0008d6e9) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000957f5) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000957f5) main_clock2_pane_t

0x775b,	// (0x0008d787) popup_clock_analogue_window_cp03_ParamLimits

0x775b,	// (0x0008d787) popup_clock_analogue_window_cp03

0x7780,	// (0x0008d7ac) popup_clock_digital_window_cp02_ParamLimits

0x7780,	// (0x0008d7ac) popup_clock_digital_window_cp02

0x77f1,	// (0x0008d81d) main_clock2_list_single_pane_ParamLimits

0x77f1,	// (0x0008d81d) main_clock2_list_single_pane

0xef47,	// (0x00094f73) list_highlight_pane_cp05

0xbe68,	// (0x00091e94) main_clock2_list_single_pane_t1

0x229a,	// (0x000882c6) popup_toolbar_window_cp04_ParamLimits

0x6c29,	// (0x0008cc55) camera2_autofocus_pane_g2_ParamLimits

0x6c29,	// (0x0008cc55) camera2_autofocus_pane_g2

0x6c35,	// (0x0008cc61) camera2_autofocus_pane_g3_ParamLimits

0x6c35,	// (0x0008cc61) camera2_autofocus_pane_g3

0x6c41,	// (0x0008cc6d) camera2_autofocus_pane_g4_ParamLimits

0x6c41,	// (0x0008cc6d) camera2_autofocus_pane_g4

0x6c4d,	// (0x0008cc79) camera2_autofocus_pane_g5_ParamLimits

0x6c4d,	// (0x0008cc79) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x00095739) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x00095739) camera2_autofocus_pane_g

0xbcef,	// (0x00091d1b) camera2_autofocus_pane_cp_g2

0xbcf7,	// (0x00091d23) camera2_autofocus_pane_cp_g3

0xbcff,	// (0x00091d2b) camera2_autofocus_pane_cp_g4

0xbd07,	// (0x00091d33) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0009579f) camera2_autofocus_pane_cp_g

0x74f3,	// (0x0008d51f) popup_dialer_spcha_window

0xe637,	// (0x00094663) bg_popup_sub_pane_cp07

0xbe76,	// (0x00091ea2) list_spcha_pane

0xbe7e,	// (0x00091eaa) list_single_spcha_pane_ParamLimits

0xbe7e,	// (0x00091eaa) list_single_spcha_pane

0xe637,	// (0x00094663) list_highlight_pane_cp06

0xbe8f,	// (0x00091ebb) list_single_spcha_pane_t1

0x576a,	// (0x0008b796) popup_call2_audio_out_window_g4_ParamLimits

0x576a,	// (0x0008b796) popup_call2_audio_out_window_g4

0xe637,	// (0x00094663) main_imed2_pane

0xb4f3,	// (0x0009151f) popup_imed_adjust2_window

0x600a,	// (0x0008c036) popup_imed_trans_window_ParamLimits

0x600a,	// (0x0008c036) popup_imed_trans_window

0xb824,	// (0x00091850) popup_blid_sat_info2_window_t1

0xb832,	// (0x0009185e) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000956ce) popup_blid_sat_info2_window_t

0x789b,	// (0x0008d8c7) aid_size_cell_colour_35

0x78bb,	// (0x0008d8e7) aid_size_cell_colour_112

0x78db,	// (0x0008d907) aid_size_cell_effect

0xb4cb,	// (0x000914f7) bg_tb_trans_pane_cp02

0x35af,	// (0x000895db) heading_imed_pane

0x78fb,	// (0x0008d927) listscroll_imed_pane

0xbe9d,	// (0x00091ec9) heading_imed_pane_g1

0xbea5,	// (0x00091ed1) heading_imed_pane_t1

0xbeb3,	// (0x00091edf) grid_imed_colour_35_pane_ParamLimits

0xbeb3,	// (0x00091edf) grid_imed_colour_35_pane

0x7907,	// (0x0008d933) grid_imed_effect_pane

0xbeca,	// (0x00091ef6) list_imed_aspect_pane

0x791d,	// (0x0008d949) scroll_pane_cp027_ParamLimits

0x791d,	// (0x0008d949) scroll_pane_cp027

0x792e,	// (0x0008d95a) cell_imed_effect_pane_ParamLimits

0x792e,	// (0x0008d95a) cell_imed_effect_pane

0xbed2,	// (0x00091efe) cell_imed_colour_pane_ParamLimits

0xbed2,	// (0x00091efe) cell_imed_colour_pane

0xbf14,	// (0x00091f40) cell_imed_colour_pane_g1_ParamLimits

0xbf14,	// (0x00091f40) cell_imed_colour_pane_g1

0xbf25,	// (0x00091f51) hgihlgiht_grid_pane_cp016_ParamLimits

0xbf25,	// (0x00091f51) hgihlgiht_grid_pane_cp016

0x7955,	// (0x0008d981) cell_imed_effect_pane_g1

0x795d,	// (0x0008d989) grid_highlight_pane_cp017

0xbf36,	// (0x00091f62) list_imed_single_pane_ParamLimits

0xbf36,	// (0x00091f62) list_imed_single_pane

0xe637,	// (0x00094663) list_highlight_pane_cp07

0xbf4b,	// (0x00091f77) list_imed_aspect_pane_comp1_t1

0xb4cb,	// (0x000914f7) bg_tb_trans_pane_cp05

0xbf6d,	// (0x00091f99) popup_imed_adjust2_window_g1

0xbf94,	// (0x00091fc0) popup_imed_adjust2_window_t1

0xbfac,	// (0x00091fd8) slider_imed_adjust_pane

0xbfc0,	// (0x00091fec) slider_imed_adjust_pane_g1

0xbfd0,	// (0x00091ffc) slider_imed_adjust_pane_g2

0xbfe0,	// (0x0009200c) slider_imed_adjust_pane_g3

0xbff1,	// (0x0009201d) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00095812) slider_imed_adjust_pane_g

0x7966,	// (0x0008d992) aid_size_cell_clipart2

0x7972,	// (0x0008d99e) grid_imed_clipart_pane

0xc002,	// (0x0009202e) scroll_pane_cp031

0x797c,	// (0x0008d9a8) cell_imed_clipart_pane_ParamLimits

0x797c,	// (0x0008d9a8) cell_imed_clipart_pane

0x799e,	// (0x0008d9ca) cell_imed_clipart_pane_g1

0xe637,	// (0x00094663) grid_highlight_pane_cp014

0x7660,	// (0x0008d68c) main_clock2_pane_g1_ParamLimits

0x7660,	// (0x0008d68c) main_clock2_pane_g1

0x779c,	// (0x0008d7c8) aid_call2_pane_cp10

0x77ae,	// (0x0008d7da) aid_call_pane_cp10

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g1

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g2

0x77c0,	// (0x0008d7ec) popup_clock_analogue_window_cp10_g3

0x77c0,	// (0x0008d7ec) popup_clock_analogue_window_cp10_g4

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00095800) popup_clock_analogue_window_cp10_g

0x77d2,	// (0x0008d7fe) popup_clock_analogue_window_cp10_t1

0x7803,	// (0x0008d82f) clock_digital_number_pane_cp10_ParamLimits

0x7803,	// (0x0008d82f) clock_digital_number_pane_cp10

0x781b,	// (0x0008d847) clock_digital_number_pane_cp11_ParamLimits

0x781b,	// (0x0008d847) clock_digital_number_pane_cp11

0x7833,	// (0x0008d85f) clock_digital_number_pane_cp12_ParamLimits

0x7833,	// (0x0008d85f) clock_digital_number_pane_cp12

0x784b,	// (0x0008d877) clock_digital_number_pane_cp13_ParamLimits

0x784b,	// (0x0008d877) clock_digital_number_pane_cp13

0x7863,	// (0x0008d88f) clock_digital_separator_pane_cp10_ParamLimits

0x7863,	// (0x0008d88f) clock_digital_separator_pane_cp10

0x787b,	// (0x0008d8a7) popup_clock_digital_window_cp02_t1_ParamLimits

0x787b,	// (0x0008d8a7) popup_clock_digital_window_cp02_t1

0xecb5,	// (0x00094ce1) clock_digital_number_pane_cp10_g1

0xecb5,	// (0x00094ce1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009581b) clock_digital_number_pane_cp10_g

0xecb5,	// (0x00094ce1) clock_digital_separator_pane_cp10_g1

0xecb5,	// (0x00094ce1) clock_digital_separator_pane_g2_cp10

0x3e7b,	// (0x00089ea7) navi_pane_vded_g4

0x3e84,	// (0x00089eb0) navi_pane_vded_g5

0x3e8d,	// (0x00089eb9) navi_pane_vded_t1

0xe637,	// (0x00094663) main_vded_pane

0x79a7,	// (0x0008d9d3) main_vded_pane_g1

0x79b1,	// (0x0008d9dd) main_vded_pane_g2

0x79bb,	// (0x0008d9e7) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00095820) main_vded_pane_g

0x79c5,	// (0x0008d9f1) main_vded_pane_t1

0x79d3,	// (0x0008d9ff) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00095827) main_vded_pane_t

0x79e1,	// (0x0008da0d) vded_slider_pane

0x79e9,	// (0x0008da15) vded_video_pane

0xc00a,	// (0x00092036) vded_video_pane_g1

0x79f1,	// (0x0008da1d) vded_video_pane_g2

0xb9e6,	// (0x00091a12) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009582c) vded_video_pane_g

0xc014,	// (0x00092040) vded_slider_pane_g1

0xb6f5,	// (0x00091721) vded_slider_pane_g2

0xc01d,	// (0x00092049) vded_slider_pane_g3

0xc026,	// (0x00092052) vded_slider_pane_g4

0xc02f,	// (0x0009205b) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00095833) vded_slider_pane_g

0x73d4,	// (0x0008d400) mup3_rocker_pane_ParamLimits

0x73d4,	// (0x0008d400) mup3_rocker_pane

0x79fa,	// (0x0008da26) mup3_control_keys_pane_g1

0x7a02,	// (0x0008da2e) mup3_control_keys_pane_g2

0x7a0a,	// (0x0008da36) mup3_control_keys_pane_g3

0x7a12,	// (0x0008da3e) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0009583e) mup3_control_keys_pane_g

0x1221,	// (0x0008724d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1221,	// (0x0008724d) popup_toolbar2_fixed_window_cp01

0x7408,	// (0x0008d434) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7408,	// (0x0008d434) popup_toolbar2_fixed_window_cp02

0x50a9,	// (0x0008b0d5) popup_call2_audio_second_window_t4_ParamLimits

0x50a9,	// (0x0008b0d5) popup_call2_audio_second_window_t4

0x55d7,	// (0x0008b603) popup_call2_audio_first_window_t6_ParamLimits

0x55d7,	// (0x0008b603) popup_call2_audio_first_window_t6

0x586d,	// (0x0008b899) popup_call2_audio_out_window_t6_ParamLimits

0x586d,	// (0x0008b899) popup_call2_audio_out_window_t6

0xe637,	// (0x00094663) main_vitu_pane

0x7a22,	// (0x0008da4e) aid_size_cell_itu_ParamLimits

0x7a22,	// (0x0008da4e) aid_size_cell_itu

0xe641,	// (0x0009466d) bg_popup_window_pane_cp08_ParamLimits

0xe641,	// (0x0009466d) bg_popup_window_pane_cp08

0x7a38,	// (0x0008da64) field_vitu_entry_pane_ParamLimits

0x7a38,	// (0x0008da64) field_vitu_entry_pane

0x7a4f,	// (0x0008da7b) grid_vitu_function_pane_ParamLimits

0x7a4f,	// (0x0008da7b) grid_vitu_function_pane

0x7a6a,	// (0x0008da96) grid_vitu_itu_pane_ParamLimits

0x7a6a,	// (0x0008da96) grid_vitu_itu_pane

0x7a88,	// (0x0008dab4) cell_vitu_itu_pane_ParamLimits

0x7a88,	// (0x0008dab4) cell_vitu_itu_pane

0x7aaa,	// (0x0008dad6) cell_vitu_function_pane_ParamLimits

0x7aaa,	// (0x0008dad6) cell_vitu_function_pane

0xe641,	// (0x0009466d) bg_popup_sub_pane_cp08_ParamLimits

0xe641,	// (0x0009466d) bg_popup_sub_pane_cp08

0x7ac3,	// (0x0008daef) field_vitu_entry_pane_t1_ParamLimits

0x7ac3,	// (0x0008daef) field_vitu_entry_pane_t1

0xc050,	// (0x0009207c) field_vitu_entry_pane_t2_ParamLimits

0xc050,	// (0x0009207c) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009584c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009584c) field_vitu_entry_pane_t

0xc06d,	// (0x00092099) bg_button_pane_cp05_ParamLimits

0xc06d,	// (0x00092099) bg_button_pane_cp05

0x7ae1,	// (0x0008db0d) cell_vitu_itu_pane_g1

0x7af9,	// (0x0008db25) cell_vitu_itu_pane_t1_ParamLimits

0x7af9,	// (0x0008db25) cell_vitu_itu_pane_t1

0x7b0b,	// (0x0008db37) cell_vitu_itu_pane_t2_ParamLimits

0x7b0b,	// (0x0008db37) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00095851) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00095851) cell_vitu_itu_pane_t

0xc07b,	// (0x000920a7) bg_button_pane_cp07

0x7b40,	// (0x0008db6c) cell_vitu_function_pane_g1

0xb1d3,	// (0x000911ff) main_calc_pane_g1

0x1048,	// (0x00087074) aid_visual_content_pane

0xe637,	// (0x00094663) main_vradio_pane

0x7b49,	// (0x0008db75) main_vradio_pane_g1_ParamLimits

0x7b49,	// (0x0008db75) main_vradio_pane_g1

0xc085,	// (0x000920b1) main_vradio_pane_g2_ParamLimits

0xc085,	// (0x000920b1) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00095858) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00095858) main_vradio_pane_g

0x7b62,	// (0x0008db8e) main_vradio_pane_t1_ParamLimits

0x7b62,	// (0x0008db8e) main_vradio_pane_t1

0x7b77,	// (0x0008dba3) main_vradio_pane_t2_ParamLimits

0x7b77,	// (0x0008dba3) main_vradio_pane_t2

0xc092,	// (0x000920be) main_vradio_pane_t3_ParamLimits

0xc092,	// (0x000920be) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009585d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009585d) main_vradio_pane_t

0x7b8c,	// (0x0008dbb8) vradio_rocker_control_pane_ParamLimits

0x7b8c,	// (0x0008dbb8) vradio_rocker_control_pane

0x7b9e,	// (0x0008dbca) vradio_station_info_pane_ParamLimits

0x7b9e,	// (0x0008dbca) vradio_station_info_pane

0xc0a6,	// (0x000920d2) vradio_frequency_info_pane_ParamLimits

0xc0a6,	// (0x000920d2) vradio_frequency_info_pane

0xb9e6,	// (0x00091a12) vradio_station_info_pane_g1

0xc0b5,	// (0x000920e1) vradio_station_info_pane_t1_ParamLimits

0xc0b5,	// (0x000920e1) vradio_station_info_pane_t1

0xc0d7,	// (0x00092103) vradio_station_info_pane_t2_ParamLimits

0xc0d7,	// (0x00092103) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00095864) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00095864) vradio_station_info_pane_t

0xc0e9,	// (0x00092115) vradio_tuning_pane

0xc0f1,	// (0x0009211d) vradio_rocker_control_pane_g1

0xc0f9,	// (0x00092125) vradio_rocker_control_pane_g2

0xc101,	// (0x0009212d) vradio_rocker_control_pane_g3

0xc109,	// (0x00092135) vradio_rocker_control_pane_g4

0xc111,	// (0x0009213d) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x00095869) vradio_rocker_control_pane_g

0x7bb0,	// (0x0008dbdc) vradio_frequency_info_pane_g1

0xc119,	// (0x00092145) vradio_frequency_info_pane_t1_ParamLimits

0xc119,	// (0x00092145) vradio_frequency_info_pane_t1

0x7bba,	// (0x0008dbe6) vradio_tuning_pane_g1

0x7bc5,	// (0x0008dbf1) vradio_tuning_pane_t1

0xb191,	// (0x000911bd) area_side_right_pane_ParamLimits

0xb191,	// (0x000911bd) area_side_right_pane

0xb486,	// (0x000914b2) status_small_pane_g1

0xb48e,	// (0x000914ba) status_small_pane_g2

0xb497,	// (0x000914c3) status_small_pane_g3

0xb4a0,	// (0x000914cc) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00095624) status_small_pane_g

0xb4a9,	// (0x000914d5) status_small_pane_t1

0xe637,	// (0x00094663) main_video3_pane

0xc12d,	// (0x00092159) cams_zoom_vslider_pane

0xc135,	// (0x00092161) image3_wide_pane_ParamLimits

0xc135,	// (0x00092161) image3_wide_pane

0xc14f,	// (0x0009217b) image3_wide_small_pane

0xc15b,	// (0x00092187) main_video3_pane_g1_ParamLimits

0xc15b,	// (0x00092187) main_video3_pane_g1

0xc177,	// (0x000921a3) main_video3_pane_g2_ParamLimits

0xc177,	// (0x000921a3) main_video3_pane_g2

0x0001,

0xf848,	// (0x00095874) main_video3_pane_g_ParamLimits

0xf848,	// (0x00095874) main_video3_pane_g

0xc193,	// (0x000921bf) main_video3_pane_t1_ParamLimits

0xc193,	// (0x000921bf) main_video3_pane_t1

0xc1be,	// (0x000921ea) main_video3_pane_t2_ParamLimits

0xc1be,	// (0x000921ea) main_video3_pane_t2

0xc1e9,	// (0x00092215) main_video3_pane_t3_ParamLimits

0xc1e9,	// (0x00092215) main_video3_pane_t3

0x0002,

0xf84d,	// (0x00095879) main_video3_pane_t_ParamLimits

0xf84d,	// (0x00095879) main_video3_pane_t

0xc216,	// (0x00092242) cams_zoom_vslider_pane_g1

0xc21f,	// (0x0009224b) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x00095880) cams_zoom_vslider_pane_g

0xc227,	// (0x00092253) small_slider_vertical_pane

0xb9e6,	// (0x00091a12) small_slider_vertical_pane_g1

0xb9e6,	// (0x00091a12) small_slider_vertical_pane_g2

0xc22f,	// (0x0009225b) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x00095885) small_slider_vertical_pane_g

0xe637,	// (0x00094663) main_hwr_training_pane

0xc238,	// (0x00092264) hwr_training_instruct_pane_ParamLimits

0xc238,	// (0x00092264) hwr_training_instruct_pane

0x7bd4,	// (0x0008dc00) hwr_training_navi_pane_ParamLimits

0x7bd4,	// (0x0008dc00) hwr_training_navi_pane

0x7bf3,	// (0x0008dc1f) hwr_training_write_pane_ParamLimits

0x7bf3,	// (0x0008dc1f) hwr_training_write_pane

0xe637,	// (0x00094663) bg_frame_shadow_pane

0xc26f,	// (0x0009229b) hwr_training_write_pane_g1

0xc277,	// (0x000922a3) hwr_training_write_pane_g2

0xc27f,	// (0x000922ab) hwr_training_write_pane_g3

0xc287,	// (0x000922b3) hwr_training_write_pane_g4

0xc28f,	// (0x000922bb) hwr_training_write_pane_g5

0xc297,	// (0x000922c3) hwr_training_write_pane_g6

0xc29f,	// (0x000922cb) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009588c) hwr_training_write_pane_g

0xc2a7,	// (0x000922d3) hwr_training_navi_pane_g1_ParamLimits

0xc2a7,	// (0x000922d3) hwr_training_navi_pane_g1

0xc2b9,	// (0x000922e5) hwr_training_navi_pane_g2_ParamLimits

0xc2b9,	// (0x000922e5) hwr_training_navi_pane_g2

0xc2cb,	// (0x000922f7) hwr_training_navi_pane_g3_ParamLimits

0xc2cb,	// (0x000922f7) hwr_training_navi_pane_g3

0xc2db,	// (0x00092307) hwr_training_navi_pane_g4_ParamLimits

0xc2db,	// (0x00092307) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009589b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009589b) hwr_training_navi_pane_g

0xc2e8,	// (0x00092314) hwr_training_navi_pane_t1

0x7c3b,	// (0x0008dc67) list_single_hwr_training_instruct_pane_ParamLimits

0x7c3b,	// (0x0008dc67) list_single_hwr_training_instruct_pane

0xc2f6,	// (0x00092322) list_single_hwr_training_instruct_pane_t1

0xb926,	// (0x00091952) bg_frame_shadow_pane_g1

0xc305,	// (0x00092331) bg_frame_shadow_pane_g2

0xc30d,	// (0x00092339) bg_frame_shadow_pane_g3

0xc315,	// (0x00092341) bg_frame_shadow_pane_g4

0xc31d,	// (0x00092349) bg_frame_shadow_pane_g5

0xc325,	// (0x00092351) bg_frame_shadow_pane_g6

0xc32d,	// (0x00092359) bg_frame_shadow_pane_g7

0xee3b,	// (0x00094e67) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000958a6) bg_frame_shadow_pane_g

0xe637,	// (0x00094663) main_video_tele_dialer_pane

0x7c50,	// (0x0008dc7c) aid_size_cell_video_keypad_ParamLimits

0x7c50,	// (0x0008dc7c) aid_size_cell_video_keypad

0x7c6a,	// (0x0008dc96) grid_video_dialer_keypad_pane_ParamLimits

0x7c6a,	// (0x0008dc96) grid_video_dialer_keypad_pane

0x7cb6,	// (0x0008dce2) video_down_pane_cp_ParamLimits

0x7cb6,	// (0x0008dce2) video_down_pane_cp

0x7ce8,	// (0x0008dd14) cell_video_dialer_keypad_pane_ParamLimits

0x7ce8,	// (0x0008dd14) cell_video_dialer_keypad_pane

0xc335,	// (0x00092361) bg_button_pane_cp08_ParamLimits

0xc335,	// (0x00092361) bg_button_pane_cp08

0x7d0a,	// (0x0008dd36) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7d0a,	// (0x0008dd36) cell_video_dialer_keypad_pane_g1

0x73be,	// (0x0008d3ea) mup3_rocker2_pane_ParamLimits

0x73be,	// (0x0008d3ea) mup3_rocker2_pane

0xb9e6,	// (0x00091a12) mup3_rocker2_pane_g1

0x5eeb,	// (0x0008bf17) main_dialer2_pane

0xe637,	// (0x00094663) main_mp4_pane

0xc349,	// (0x00092375) main_mp4_pane_g1_ParamLimits

0xc349,	// (0x00092375) main_mp4_pane_g1

0xc349,	// (0x00092375) main_mp4_pane_g2_ParamLimits

0xc349,	// (0x00092375) main_mp4_pane_g2

0x7d41,	// (0x0008dd6d) main_mp4_pane_g3_ParamLimits

0x7d41,	// (0x0008dd6d) main_mp4_pane_g3

0xc357,	// (0x00092383) main_mp4_pane_g4_ParamLimits

0xc357,	// (0x00092383) main_mp4_pane_g4

0xc37f,	// (0x000923ab) main_mp4_pane_g5_ParamLimits

0xc37f,	// (0x000923ab) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000958c6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000958c6) main_mp4_pane_g

0xc3cf,	// (0x000923fb) main_mp4_pane_t1_ParamLimits

0xc3cf,	// (0x000923fb) main_mp4_pane_t1

0xc42b,	// (0x00092457) main_mp4_pane_t2_ParamLimits

0xc42b,	// (0x00092457) main_mp4_pane_t2

0xc47d,	// (0x000924a9) main_mp4_pane_t3_ParamLimits

0xc47d,	// (0x000924a9) main_mp4_pane_t3

0xc49d,	// (0x000924c9) main_mp4_pane_t4_ParamLimits

0xc49d,	// (0x000924c9) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000958d3) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000958d3) main_mp4_pane_t

0xc4e1,	// (0x0009250d) mp4_progress_pane_ParamLimits

0xc4e1,	// (0x0009250d) mp4_progress_pane

0xc52b,	// (0x00092557) mp4_rocker_pane_ParamLimits

0xc52b,	// (0x00092557) mp4_rocker_pane

0xc553,	// (0x0009257f) mp4_progress_pane_t1

0xc56c,	// (0x00092598) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000958dc) mp4_progress_pane_t

0xc585,	// (0x000925b1) mup_progress_pane_cp04

0xb9e6,	// (0x00091a12) mp4_rocker_pane_g1

0x7d7d,	// (0x0008dda9) aid_cell_size_keypad2_ParamLimits

0x7d7d,	// (0x0008dda9) aid_cell_size_keypad2

0x7d93,	// (0x0008ddbf) dialer2_ne_pane_ParamLimits

0x7d93,	// (0x0008ddbf) dialer2_ne_pane

0x7dad,	// (0x0008ddd9) grid_dialer2_keypad_pane_ParamLimits

0x7dad,	// (0x0008ddd9) grid_dialer2_keypad_pane

0xb7cb,	// (0x000917f7) bg_popup_call_pane_cp07_ParamLimits

0xb7cb,	// (0x000917f7) bg_popup_call_pane_cp07

0x7dc9,	// (0x0008ddf5) dialer2_ne_pane_t1_ParamLimits

0x7dc9,	// (0x0008ddf5) dialer2_ne_pane_t1

0x7e04,	// (0x0008de30) cell_dialer2_keypad_pane_ParamLimits

0x7e04,	// (0x0008de30) cell_dialer2_keypad_pane

0xc5a3,	// (0x000925cf) bg_button_pane_pane_cp04_ParamLimits

0xc5a3,	// (0x000925cf) bg_button_pane_pane_cp04

0x7e26,	// (0x0008de52) cell_dialer2_keypad_pane_g1_ParamLimits

0x7e26,	// (0x0008de52) cell_dialer2_keypad_pane_g1

0x215c,	// (0x00088188) aid_placing_vt_set_content_ParamLimits

0x215c,	// (0x00088188) aid_placing_vt_set_content

0x2184,	// (0x000881b0) aid_placing_vt_set_title_ParamLimits

0x2184,	// (0x000881b0) aid_placing_vt_set_title

0xe637,	// (0x00094663) main_image3_pane

0x7eec,	// (0x0008df18) area_side_right_pane_cp01_ParamLimits

0x7eec,	// (0x0008df18) area_side_right_pane_cp01

0xc349,	// (0x00092375) main_image3_pane_g1_ParamLimits

0xc349,	// (0x00092375) main_image3_pane_g1

0x7f03,	// (0x0008df2f) main_image3_pane_g2_ParamLimits

0x7f03,	// (0x0008df2f) main_image3_pane_g2

0x7f2b,	// (0x0008df57) main_image3_pane_g3_ParamLimits

0x7f2b,	// (0x0008df57) main_image3_pane_g3

0x7f55,	// (0x0008df81) main_image3_pane_g4_ParamLimits

0x7f55,	// (0x0008df81) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000958eb) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000958eb) main_image3_pane_g

0x7f7f,	// (0x0008dfab) main_image3_pane_t1_ParamLimits

0x7f7f,	// (0x0008dfab) main_image3_pane_t1

0x7fd7,	// (0x0008e003) main_image3_pane_t2_ParamLimits

0x7fd7,	// (0x0008e003) main_image3_pane_t2

0x8029,	// (0x0008e055) main_image3_pane_t3_ParamLimits

0x8029,	// (0x0008e055) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000958f4) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000958f4) main_image3_pane_t

0xe641,	// (0x0009466d) grid_sctrl_middle_pane_cp01_ParamLimits

0xe641,	// (0x0009466d) grid_sctrl_middle_pane_cp01

0x80b1,	// (0x0008e0dd) cell_sctrl_middle_pane_cp01_ParamLimits

0x80b1,	// (0x0008e0dd) cell_sctrl_middle_pane_cp01

0x80ce,	// (0x0008e0fa) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x80ce,	// (0x0008e0fa) cell_sctrl_middle_pane_cp01_g1

0xe637,	// (0x00094663) main_call4_pane

0x80e4,	// (0x0008e110) aid_size_button_call4_ParamLimits

0x80e4,	// (0x0008e110) aid_size_button_call4

0x8115,	// (0x0008e141) call4_windows_pane_ParamLimits

0x8115,	// (0x0008e141) call4_windows_pane

0x8135,	// (0x0008e161) grid_call4_button_pane_ParamLimits

0x8135,	// (0x0008e161) grid_call4_button_pane

0xc5e1,	// (0x0009260d) call4_windows_conf_pane

0xc5f8,	// (0x00092624) popup_call4_audio_first_window_ParamLimits

0xc5f8,	// (0x00092624) popup_call4_audio_first_window

0xc644,	// (0x00092670) popup_call4_audio_second_window_ParamLimits

0xc644,	// (0x00092670) popup_call4_audio_second_window

0xc658,	// (0x00092684) popup_call4_audio_wait_window_ParamLimits

0xc658,	// (0x00092684) popup_call4_audio_wait_window

0x8162,	// (0x0008e18e) cell_call4_button_pane_ParamLimits

0x8162,	// (0x0008e18e) cell_call4_button_pane

0x818b,	// (0x0008e1b7) bg_button_pane_cp09_ParamLimits

0x818b,	// (0x0008e1b7) bg_button_pane_cp09

0x8197,	// (0x0008e1c3) cell_call4_button_pane_g1_ParamLimits

0x8197,	// (0x0008e1c3) cell_call4_button_pane_g1

0x81bd,	// (0x0008e1e9) cell_call4_button_pane_t1_ParamLimits

0x81bd,	// (0x0008e1e9) cell_call4_button_pane_t1

0xc6a0,	// (0x000926cc) popup_call4_audio_conf_window_ParamLimits

0xc6a0,	// (0x000926cc) popup_call4_audio_conf_window

0x741e,	// (0x0008d44a) mup3_progress_pane_t1_ParamLimits

0x743d,	// (0x0008d469) mup3_progress_pane_t2_ParamLimits

0xbd25,	// (0x00091d51) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000957c8) mup3_progress_pane_t_ParamLimits

0xbd42,	// (0x00091d6e) mup_progress_pane_cp03_ParamLimits

0x7a1a,	// (0x0008da46) mup3_control_keys_pane_g4_copy1

0xc50f,	// (0x0009253b) mp4_rocker2_pane_ParamLimits

0xc50f,	// (0x0009253b) mp4_rocker2_pane

0xc6b4,	// (0x000926e0) mp4_rocker2_pane_g1

0xc6bc,	// (0x000926e8) mp4_rocker2_pane_g2

0xc6c4,	// (0x000926f0) mp4_rocker2_pane_g3

0xc6cc,	// (0x000926f8) mp4_rocker2_pane_g4

0xc6d4,	// (0x00092700) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000958fd) mp4_rocker2_pane_g

0xe637,	// (0x00094663) main_camera4_pane

0xe637,	// (0x00094663) main_video4_pane

0x7c84,	// (0x0008dcb0) main_video_tele_dialer_pane_t1_ParamLimits

0x7c84,	// (0x0008dcb0) main_video_tele_dialer_pane_t1

0x7c9d,	// (0x0008dcc9) main_video_tele_dialer_pane_t2_ParamLimits

0x7c9d,	// (0x0008dcc9) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000958b7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000958b7) main_video_tele_dialer_pane_t

0x81fb,	// (0x0008e227) cam4_autofocus_pane_ParamLimits

0x81fb,	// (0x0008e227) cam4_autofocus_pane

0x8211,	// (0x0008e23d) cam4_image_uncrop_pane_ParamLimits

0x8211,	// (0x0008e23d) cam4_image_uncrop_pane

0x822b,	// (0x0008e257) cam4_indicators_pane_ParamLimits

0x822b,	// (0x0008e257) cam4_indicators_pane

0x8256,	// (0x0008e282) main_camera4_pane_g1_ParamLimits

0x8256,	// (0x0008e282) main_camera4_pane_g1

0x8268,	// (0x0008e294) main_camera4_pane_g2_ParamLimits

0x8268,	// (0x0008e294) main_camera4_pane_g2

0x827b,	// (0x0008e2a7) main_camera4_pane_g3_ParamLimits

0x827b,	// (0x0008e2a7) main_camera4_pane_g3

0x828e,	// (0x0008e2ba) main_camera4_pane_g4_ParamLimits

0x828e,	// (0x0008e2ba) main_camera4_pane_g4

0x82a1,	// (0x0008e2cd) main_camera4_pane_g5_ParamLimits

0x82a1,	// (0x0008e2cd) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00095908) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00095908) main_camera4_pane_g

0x82c5,	// (0x0008e2f1) main_camera4_pane_t1_ParamLimits

0x82c5,	// (0x0008e2f1) main_camera4_pane_t1

0xbc52,	// (0x00091c7e) bg_tb_trans_pane_cp06

0xc712,	// (0x0009273e) cam4_indicators_pane_g1

0xc723,	// (0x0009274f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00095923) cam4_indicators_pane_g

0xc741,	// (0x0009276d) cam4_indicators_pane_t1

0x8329,	// (0x0008e355) main_video4_pane_g1_ParamLimits

0x8329,	// (0x0008e355) main_video4_pane_g1

0x8338,	// (0x0008e364) main_video4_pane_g2_ParamLimits

0x8338,	// (0x0008e364) main_video4_pane_g2

0x8347,	// (0x0008e373) main_video4_pane_g3_ParamLimits

0x8347,	// (0x0008e373) main_video4_pane_g3

0x8356,	// (0x0008e382) main_video4_pane_g4_ParamLimits

0x8356,	// (0x0008e382) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009592a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009592a) main_video4_pane_g

0x8374,	// (0x0008e3a0) vid4_indicators_pane_ParamLimits

0x8374,	// (0x0008e3a0) vid4_indicators_pane

0x83a2,	// (0x0008e3ce) video4_image_uncrop_cif_pane_ParamLimits

0x83a2,	// (0x0008e3ce) video4_image_uncrop_cif_pane

0x83bc,	// (0x0008e3e8) video4_image_uncrop_nhd_pane_ParamLimits

0x83bc,	// (0x0008e3e8) video4_image_uncrop_nhd_pane

0x8211,	// (0x0008e23d) video4_image_uncrop_vga_pane_ParamLimits

0x8211,	// (0x0008e23d) video4_image_uncrop_vga_pane

0xe641,	// (0x0009466d) bg_tb_trans_pane_cp07

0xc76d,	// (0x00092799) vid4_indicators_pane_g1

0xc781,	// (0x000927ad) vid4_indicators_pane_g2

0xc795,	// (0x000927c1) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00095935) vid4_indicators_pane_g

0xc7c4,	// (0x000927f0) vid4_indicators_pane_t1

0x83d0,	// (0x0008e3fc) cam4_autofocus_pane_g1

0x83d8,	// (0x0008e404) cam4_autofocus_pane_g2

0x83e0,	// (0x0008e40c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00095940) cam4_autofocus_pane_g

0x83e8,	// (0x0008e414) cam4_autofocus_pane_g3_copy1

0x7ccc,	// (0x0008dcf8) video_down_pane_cp_t1

0x7cda,	// (0x0008dd06) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000958bc) video_down_pane_cp_t

0xe641,	// (0x0009466d) popup_vitu2_window_ParamLimits

0xe641,	// (0x0009466d) popup_vitu2_window

0x83f0,	// (0x0008e41c) aid_size_cell2_itu2_ParamLimits

0x83f0,	// (0x0008e41c) aid_size_cell2_itu2

0x8416,	// (0x0008e442) aid_size_cell_itu2_ParamLimits

0x8416,	// (0x0008e442) aid_size_cell_itu2

0x8472,	// (0x0008e49e) bg_popup_window_pane_cp09_ParamLimits

0x8472,	// (0x0008e49e) bg_popup_window_pane_cp09

0x8480,	// (0x0008e4ac) field_vitu2_entry_pane_ParamLimits

0x8480,	// (0x0008e4ac) field_vitu2_entry_pane

0x84a6,	// (0x0008e4d2) grid_vitu2_function_pane_ParamLimits

0x84a6,	// (0x0008e4d2) grid_vitu2_function_pane

0x84f7,	// (0x0008e523) grid_vitu2_itu_pane_ParamLimits

0x84f7,	// (0x0008e523) grid_vitu2_itu_pane

0x858f,	// (0x0008e5bb) cell_vitu2_itu_pane_ParamLimits

0x858f,	// (0x0008e5bb) cell_vitu2_itu_pane

0x85bb,	// (0x0008e5e7) cell_vitu2_function_pane_ParamLimits

0x85bb,	// (0x0008e5e7) cell_vitu2_function_pane

0xc7db,	// (0x00092807) bg_popup_call_pane_cp08_ParamLimits

0xc7db,	// (0x00092807) bg_popup_call_pane_cp08

0xc7f2,	// (0x0009281e) field_vitu2_entry_pane_g1

0xc7fe,	// (0x0009282a) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00095947) field_vitu2_entry_pane_g

0x044e,	// (0x0008647a) field_vitu2_entry_pane_t1_ParamLimits

0x044e,	// (0x0008647a) field_vitu2_entry_pane_t1

0xc818,	// (0x00092844) field_vitu2_entry_pane_t2_ParamLimits

0xc818,	// (0x00092844) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0009594e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0009594e) field_vitu2_entry_pane_t

0x85fa,	// (0x0008e626) bg_button_pane_cp010_ParamLimits

0x85fa,	// (0x0008e626) bg_button_pane_cp010

0xc83d,	// (0x00092869) cell_vitu2_itu_pane_g1

0x8616,	// (0x0008e642) cell_vitu2_itu_pane_t1_ParamLimits

0x8616,	// (0x0008e642) cell_vitu2_itu_pane_t1

0x047c,	// (0x000864a8) cell_vitu2_itu_pane_t2_ParamLimits

0x047c,	// (0x000864a8) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00095958) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00095958) cell_vitu2_itu_pane_t

0xe641,	// (0x0009466d) bg_button_pane_cp011

0x8674,	// (0x0008e6a0) cell_vitu2_function_pane_g1

0xe637,	// (0x00094663) main_myfav_hc_pane

0x8079,	// (0x0008e0a5) popup_image3_note_pane_ParamLimits

0x8079,	// (0x0008e0a5) popup_image3_note_pane

0x8095,	// (0x0008e0c1) popup_image3_tool_bar_pane_ParamLimits

0x8095,	// (0x0008e0c1) popup_image3_tool_bar_pane

0x050a,	// (0x00086536) cell_vitu2_itu_pane_t3_ParamLimits

0x050a,	// (0x00086536) cell_vitu2_itu_pane_t3

0xe637,	// (0x00094663) bg_popup_trans_pane

0xc84f,	// (0x0009287b) grid_image3_tool_bar_pane

0xc859,	// (0x00092885) bg_popup_trans_pane_g1

0x2753,	// (0x0008877f) bg_popup_trans_pane_g2

0xc861,	// (0x0009288d) bg_popup_trans_pane_g3

0xc869,	// (0x00092895) bg_popup_trans_pane_g4

0xc871,	// (0x0009289d) bg_popup_trans_pane_g5

0xc879,	// (0x000928a5) bg_popup_trans_pane_g6

0xc881,	// (0x000928ad) bg_popup_trans_pane_g7

0xc889,	// (0x000928b5) bg_popup_trans_pane_g8

0x2733,	// (0x0008875f) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0009595f) bg_popup_trans_pane_g

0xc891,	// (0x000928bd) cell_image3_tool_bar_pane_ParamLimits

0xc891,	// (0x000928bd) cell_image3_tool_bar_pane

0xb9e6,	// (0x00091a12) cell_image3_tool_bar_pane_g1

0xe637,	// (0x00094663) bg_popup_trans_pane_cp1

0xc8a5,	// (0x000928d1) popup_image3_note_pane_t1

0xc8b3,	// (0x000928df) popup_image3_note_pane_t2

0xc8c1,	// (0x000928ed) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00095972) popup_image3_note_pane_t

0xc8cf,	// (0x000928fb) popup_image3_note_pane_t3_copy1

0x8688,	// (0x0008e6b4) bg_myfav_hc_instruction_pane_ParamLimits

0x8688,	// (0x0008e6b4) bg_myfav_hc_instruction_pane

0x869c,	// (0x0008e6c8) cell_myfav_contact_pane_ParamLimits

0x869c,	// (0x0008e6c8) cell_myfav_contact_pane

0x86ba,	// (0x0008e6e6) cell_myfav_contact_pane_cp1_ParamLimits

0x86ba,	// (0x0008e6e6) cell_myfav_contact_pane_cp1

0x86d2,	// (0x0008e6fe) cell_myfav_contact_pane_cp2_ParamLimits

0x86d2,	// (0x0008e6fe) cell_myfav_contact_pane_cp2

0x86ea,	// (0x0008e716) cell_myfav_contact_pane_cp3_ParamLimits

0x86ea,	// (0x0008e716) cell_myfav_contact_pane_cp3

0x8701,	// (0x0008e72d) cell_myfav_contact_pane_cp4_ParamLimits

0x8701,	// (0x0008e72d) cell_myfav_contact_pane_cp4

0x8719,	// (0x0008e745) cell_myfav_contact_pane_cp5_ParamLimits

0x8719,	// (0x0008e745) cell_myfav_contact_pane_cp5

0x872d,	// (0x0008e759) cell_myfav_contact_pane_cp6_ParamLimits

0x872d,	// (0x0008e759) cell_myfav_contact_pane_cp6

0x8743,	// (0x0008e76f) cell_myfav_contact_pane_cp7_ParamLimits

0x8743,	// (0x0008e76f) cell_myfav_contact_pane_cp7

0xc8dd,	// (0x00092909) listscroll_gen_pane_cp05

0x875d,	// (0x0008e789) main_myfav_hc_pane_g1_ParamLimits

0x875d,	// (0x0008e789) main_myfav_hc_pane_g1

0x8777,	// (0x0008e7a3) main_myfav_hc_pane_g2_ParamLimits

0x8777,	// (0x0008e7a3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00095979) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00095979) main_myfav_hc_pane_g

0x87a9,	// (0x0008e7d5) main_myfav_hc_pane_t1_ParamLimits

0x87a9,	// (0x0008e7d5) main_myfav_hc_pane_t1

0xc8e6,	// (0x00092912) main_myfav_hc_pane_t2_ParamLimits

0xc8e6,	// (0x00092912) main_myfav_hc_pane_t2

0xc8f8,	// (0x00092924) main_myfav_hc_pane_t3_ParamLimits

0xc8f8,	// (0x00092924) main_myfav_hc_pane_t3

0x87c0,	// (0x0008e7ec) main_myfav_hc_pane_t4_ParamLimits

0x87c0,	// (0x0008e7ec) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00095980) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00095980) main_myfav_hc_pane_t

0xb9e6,	// (0x00091a12) bg_myfav_hc_instruction_pane_g1

0xc90a,	// (0x00092936) cell_myfav_contact_pane_g1_ParamLimits

0xc90a,	// (0x00092936) cell_myfav_contact_pane_g1

0xc90a,	// (0x00092936) cell_myfav_contact_pane_g2_ParamLimits

0xc90a,	// (0x00092936) cell_myfav_contact_pane_g2

0xc916,	// (0x00092942) cell_myfav_contact_pane_g3_ParamLimits

0xc916,	// (0x00092942) cell_myfav_contact_pane_g3

0xbd0f,	// (0x00091d3b) cell_myfav_contact_pane_g4_ParamLimits

0xbd0f,	// (0x00091d3b) cell_myfav_contact_pane_g4

0xc923,	// (0x0009294f) cell_myfav_contact_pane_g5_ParamLimits

0xc923,	// (0x0009294f) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009598b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009598b) cell_myfav_contact_pane_g

0x8791,	// (0x0008e7bd) main_myfav_hc_pane_g3_ParamLimits

0x8791,	// (0x0008e7bd) main_myfav_hc_pane_g3

0x1183,	// (0x000871af) popup_adpt_find_window

0x87e8,	// (0x0008e814) afind_page_pane_ParamLimits

0x87e8,	// (0x0008e814) afind_page_pane

0x87fd,	// (0x0008e829) aid_size_cell_afind_ParamLimits

0x87fd,	// (0x0008e829) aid_size_cell_afind

0x881b,	// (0x0008e847) bg_popup_sub_pane_cp09_ParamLimits

0x881b,	// (0x0008e847) bg_popup_sub_pane_cp09

0x8828,	// (0x0008e854) find_pane_cp01_ParamLimits

0x8828,	// (0x0008e854) find_pane_cp01

0xc92f,	// (0x0009295b) grid_afind_control_pane_ParamLimits

0xc92f,	// (0x0009295b) grid_afind_control_pane

0x8835,	// (0x0008e861) grid_afind_pane_ParamLimits

0x8835,	// (0x0008e861) grid_afind_pane

0x8857,	// (0x0008e883) cell_afind_pane_ParamLimits

0x8857,	// (0x0008e883) cell_afind_pane

0xb9e6,	// (0x00091a12) afind_page_pane_g1

0x88be,	// (0x0008e8ea) afind_page_pane_g2

0x88c7,	// (0x0008e8f3) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00095996) afind_page_pane_g

0x88d0,	// (0x0008e8fc) afind_page_pane_t1

0xc943,	// (0x0009296f) cell_afind_grid_control_pane_ParamLimits

0xc943,	// (0x0009296f) cell_afind_grid_control_pane

0xc5a3,	// (0x000925cf) bg_button_pane_cp69_ParamLimits

0xc5a3,	// (0x000925cf) bg_button_pane_cp69

0x88f0,	// (0x0008e91c) cell_afind_pane_g1_ParamLimits

0x88f0,	// (0x0008e91c) cell_afind_pane_g1

0x88fd,	// (0x0008e929) cell_afind_pane_t1_ParamLimits

0x88fd,	// (0x0008e929) cell_afind_pane_t1

0x20d7,	// (0x00088103) bg_button_pane_cp72

0xc952,	// (0x0009297e) cell_afind_grid_control_pane_g1

0x4b68,	// (0x0008ab94) aid_image_placing_area_ParamLimits

0x4b68,	// (0x0008ab94) aid_image_placing_area

0xc038,	// (0x00092064) field_vitu_entry_pane_g1_ParamLimits

0xc038,	// (0x00092064) field_vitu_entry_pane_g1

0xc044,	// (0x00092070) field_vitu_entry_pane_g2_ParamLimits

0xc044,	// (0x00092070) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00095847) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00095847) field_vitu_entry_pane_g

0x7ae1,	// (0x0008db0d) cell_vitu_itu_pane_g1_ParamLimits

0x7b23,	// (0x0008db4f) cell_vitu_itu_pane_t3_ParamLimits

0x7b23,	// (0x0008db4f) cell_vitu_itu_pane_t3

0xc553,	// (0x0009257f) mp4_progress_pane_t1_ParamLimits

0xc56c,	// (0x00092598) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000958dc) mp4_progress_pane_t_ParamLimits

0xc585,	// (0x000925b1) mup_progress_pane_cp04_ParamLimits

0x87d4,	// (0x0008e800) main_myfav_hc_pane_t5_ParamLimits

0x87d4,	// (0x0008e800) main_myfav_hc_pane_t5

0xb181,	// (0x000911ad) aid_zoom_text_primary

0x1183,	// (0x000871af) popup_adpt_find_window_ParamLimits

0xe641,	// (0x0009466d) main_cam_set_pane

0x8242,	// (0x0008e26e) cam4_zoom_pane_ParamLimits

0x8242,	// (0x0008e26e) cam4_zoom_pane

0x890f,	// (0x0008e93b) main_cam_set_pane_g1_ParamLimits

0x890f,	// (0x0008e93b) main_cam_set_pane_g1

0x891d,	// (0x0008e949) main_cam_set_pane_g2_ParamLimits

0x891d,	// (0x0008e949) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009599d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009599d) main_cam_set_pane_g

0x893e,	// (0x0008e96a) main_cam_set_pane_t1_ParamLimits

0x893e,	// (0x0008e96a) main_cam_set_pane_t1

0x8959,	// (0x0008e985) main_cset_listscroll_pane_ParamLimits

0x8959,	// (0x0008e985) main_cset_listscroll_pane

0x8979,	// (0x0008e9a5) main_cset_slider_pane_ParamLimits

0x8979,	// (0x0008e9a5) main_cset_slider_pane

0xc963,	// (0x0009298f) main_cset_list_pane_ParamLimits

0xc963,	// (0x0009298f) main_cset_list_pane

0xc973,	// (0x0009299f) scroll_pane_cp028

0x899f,	// (0x0008e9cb) aid_area_touch_slider

0x89bb,	// (0x0008e9e7) cset_slider_pane

0x89e5,	// (0x0008ea11) main_cset_slider_pane_g1

0x89fa,	// (0x0008ea26) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000959a2) main_cset_slider_pane_g

0xc9ac,	// (0x000929d8) main_cset_slider_pane_t1

0x8ab6,	// (0x0008eae2) main_cset_slider_pane_t2

0x8ad0,	// (0x0008eafc) main_cset_slider_pane_t3

0x8aea,	// (0x0008eb16) main_cset_slider_pane_t4

0x8b04,	// (0x0008eb30) main_cset_slider_pane_t5

0x8b1e,	// (0x0008eb4a) main_cset_slider_pane_t6

0x8b33,	// (0x0008eb5f) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000959c7) main_cset_slider_pane_t

0x8c37,	// (0x0008ec63) cset_list_set_pane_ParamLimits

0x8c37,	// (0x0008ec63) cset_list_set_pane

0x8c49,	// (0x0008ec75) aid_position_infowindow_above

0x8c51,	// (0x0008ec7d) aid_position_infowindow_below

0xef90,	// (0x00094fbc) cset_list_set_pane_g1_ParamLimits

0xef90,	// (0x00094fbc) cset_list_set_pane_g1

0xca4c,	// (0x00092a78) cset_list_set_pane_g3_ParamLimits

0xca4c,	// (0x00092a78) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000959e6) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000959e6) cset_list_set_pane_g

0xca5b,	// (0x00092a87) cset_list_set_pane_t1_ParamLimits

0xca5b,	// (0x00092a87) cset_list_set_pane_t1

0xe641,	// (0x0009466d) list_highlight_pane_cp021_ParamLimits

0xe641,	// (0x0009466d) list_highlight_pane_cp021

0x43e9,	// (0x0008a415) cset_slider_pane_g1

0x43fb,	// (0x0008a427) cset_slider_pane_g2

0x43f2,	// (0x0008a41e) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000959eb) cset_slider_pane_g

0xef9c,	// (0x00094fc8) aid_area_touch_cam4_zoom

0xefa4,	// (0x00094fd0) cam4_zoom_cont_pane

0xefac,	// (0x00094fd8) cam4_zoom_pane_g1

0xefb4,	// (0x00094fe0) cam4_zoom_pane_g2

0x8c59,	// (0x0008ec85) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000959f2) cam4_zoom_pane_g

0xca70,	// (0x00092a9c) cam4_zoom_cont_pane_g1

0xca79,	// (0x00092aa5) cam4_zoom_cont_pane_g2

0xca82,	// (0x00092aae) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000959f9) cam4_zoom_cont_pane_g

0x8102,	// (0x0008e12e) call4_image_pane_ParamLimits

0x8102,	// (0x0008e12e) call4_image_pane

0xc5e1,	// (0x0009260d) call4_windows_conf_pane_ParamLimits

0xc622,	// (0x0009264e) popup_call4_audio_in_window_ParamLimits

0xc622,	// (0x0009264e) popup_call4_audio_in_window

0xe637,	// (0x00094663) bg_popup_call2_act_pane_cp02

0xc698,	// (0x000926c4) call4_list_conf_pane

0xb9e6,	// (0x00091a12) call4_image_pane_g1

0xb9e6,	// (0x00091a12) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00095708) call4_image_pane_g

0xca8b,	// (0x00092ab7) list_single_graphic_popup_conf4_pane_ParamLimits

0xca8b,	// (0x00092ab7) list_single_graphic_popup_conf4_pane

0xe637,	// (0x00094663) list_highlight_pane_cp022

0xca9e,	// (0x00092aca) list_single_graphic_popup_conf4_pane_g1

0x395f,	// (0x0008998b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00095a00) list_single_graphic_popup_conf4_pane_g

0xcaa6,	// (0x00092ad2) list_single_graphic_popup_conf4_pane_t1

0x22ba,	// (0x000882e6) popup_vtel_slider_window_ParamLimits

0x22ba,	// (0x000882e6) popup_vtel_slider_window

0xc591,	// (0x000925bd) dialer2_ne_pane_t2_ParamLimits

0xc591,	// (0x000925bd) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000958e1) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000958e1) dialer2_ne_pane_t

0xb7cb,	// (0x000917f7) bg_popup_sub_pane_cp010_ParamLimits

0xb7cb,	// (0x000917f7) bg_popup_sub_pane_cp010

0x8c61,	// (0x0008ec8d) popup_vtel_slider_window_g1_ParamLimits

0x8c61,	// (0x0008ec8d) popup_vtel_slider_window_g1

0x8c74,	// (0x0008eca0) popup_vtel_slider_window_g2_ParamLimits

0x8c74,	// (0x0008eca0) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00095a05) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00095a05) popup_vtel_slider_window_g

0x8cca,	// (0x0008ecf6) vtel_slider_pane_ParamLimits

0x8cca,	// (0x0008ecf6) vtel_slider_pane

0x8cec,	// (0x0008ed18) vtel_slider_pane_g1_ParamLimits

0x8cec,	// (0x0008ed18) vtel_slider_pane_g1

0x8d00,	// (0x0008ed2c) vtel_slider_pane_g2_ParamLimits

0x8d00,	// (0x0008ed2c) vtel_slider_pane_g2

0x8d18,	// (0x0008ed44) vtel_slider_pane_g3_ParamLimits

0x8d18,	// (0x0008ed44) vtel_slider_pane_g3

0x8cec,	// (0x0008ed18) vtel_slider_pane_g4_ParamLimits

0x8cec,	// (0x0008ed18) vtel_slider_pane_g4

0x8d2e,	// (0x0008ed5a) vtel_slider_pane_g5_ParamLimits

0x8d2e,	// (0x0008ed5a) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00095a0e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00095a0e) vtel_slider_pane_g

0xe641,	// (0x0009466d) main_gallery2_pane

0x8442,	// (0x0008e46e) aid_size_row_itut2_dropdow_list_ParamLimits

0x8442,	// (0x0008e46e) aid_size_row_itut2_dropdow_list

0x84ce,	// (0x0008e4fa) grid_vitu2_function_top_pane_ParamLimits

0x84ce,	// (0x0008e4fa) grid_vitu2_function_top_pane

0x8538,	// (0x0008e564) popup_vitu2_dropdown_list_window_ParamLimits

0x8538,	// (0x0008e564) popup_vitu2_dropdown_list_window

0x8561,	// (0x0008e58d) popup_vitu2_match_list_window

0x8d44,	// (0x0008ed70) cell_vitu2_function_top_pane_ParamLimits

0x8d44,	// (0x0008ed70) cell_vitu2_function_top_pane

0x8d5c,	// (0x0008ed88) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8d5c,	// (0x0008ed88) cell_vitu2_function_top_pane_cp01

0x8d78,	// (0x0008eda4) cell_vitu2_function_top_wide_pane_ParamLimits

0x8d78,	// (0x0008eda4) cell_vitu2_function_top_wide_pane

0xe641,	// (0x0009466d) bg_button_pane_cp012

0x8d94,	// (0x0008edc0) cell_vitu2_function_top_pane_g1

0xefbc,	// (0x00094fe8) bg_button_pane_cp013_ParamLimits

0xefbc,	// (0x00094fe8) bg_button_pane_cp013

0x8da8,	// (0x0008edd4) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8da8,	// (0x0008edd4) cell_vitu2_function_top_wide_pane_g1

0xe641,	// (0x0009466d) bg_popup_sub_pane_cp20

0x8dc0,	// (0x0008edec) list_vitu2_match_list_pane

0xc859,	// (0x00092885) bg_popup_sub_pane_cp20_g1

0xc861,	// (0x0009288d) bg_popup_sub_pane_cp20_g2

0x2753,	// (0x0008877f) bg_popup_sub_pane_cp20_g3

0xc869,	// (0x00092895) bg_popup_sub_pane_cp20_g4

0x2733,	// (0x0008875f) bg_popup_sub_pane_cp20_g5

0xcabc,	// (0x00092ae8) bg_popup_sub_pane_cp20_g6

0xc879,	// (0x000928a5) bg_popup_sub_pane_cp20_g7

0xc881,	// (0x000928ad) bg_popup_sub_pane_cp20_g8

0xc889,	// (0x000928b5) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00095a19) bg_popup_sub_pane_cp20_g

0xefd8,	// (0x00095004) list_vitu2_match_list_item_pane_ParamLimits

0xefd8,	// (0x00095004) list_vitu2_match_list_item_pane

0xefea,	// (0x00095016) list_vitu2_match_list_item_pane_t1

0xe637,	// (0x00094663) bg_popup_sub_pane_cp21

0x3863,	// (0x0008988f) grid_vitu2_dropdown_list_pane

0x8dde,	// (0x0008ee0a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8dde,	// (0x0008ee0a) cell_vitu2_dropdown_list_char_pane

0x8dff,	// (0x0008ee2b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8dff,	// (0x0008ee2b) cell_vitu2_dropdown_list_ctrl_pane

0xcac4,	// (0x00092af0) cell_vitu2_dropdown_list_char_pane_g1

0xcacd,	// (0x00092af9) cell_vitu2_dropdown_list_char_pane_g2

0xcad6,	// (0x00092b02) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00095a36) cell_vitu2_dropdown_list_char_pane_g

0x8e2b,	// (0x0008ee57) cell_vitu2_dropdown_list_char_pane_t1

0x8e39,	// (0x0008ee65) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8e39,	// (0x0008ee65) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8e46,	// (0x0008ee72) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8e46,	// (0x0008ee72) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8e53,	// (0x0008ee7f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8e53,	// (0x0008ee7f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8e60,	// (0x0008ee8c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8e60,	// (0x0008ee8c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbc52,	// (0x00091c7e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbc52,	// (0x00091c7e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00095a3d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00095a3d) cell_vitu2_dropdown_list_ctrl_pane_g

0x8e7c,	// (0x0008eea8) aid_size_cell_gallery2_ParamLimits

0x8e7c,	// (0x0008eea8) aid_size_cell_gallery2

0x8e9a,	// (0x0008eec6) grid_gallery2_pane_ParamLimits

0x8e9a,	// (0x0008eec6) grid_gallery2_pane

0x8eb4,	// (0x0008eee0) scroll_pane_cp029_ParamLimits

0x8eb4,	// (0x0008eee0) scroll_pane_cp029

0x8ec0,	// (0x0008eeec) cell_gallery2_pane_ParamLimits

0x8ec0,	// (0x0008eeec) cell_gallery2_pane

0xcadf,	// (0x00092b0b) cell_gallery2_pane_g2

0x8f1c,	// (0x0008ef48) cell_gallery2_pane_g3

0xcae7,	// (0x00092b13) cell_gallery2_pane_g4

0xcaef,	// (0x00092b1b) cell_gallery2_pane_g5

0xef47,	// (0x00094f73) grid_highlight_pane_cp10

0x8561,	// (0x0008e58d) popup_vitu2_match_list_window_ParamLimits

0x8578,	// (0x0008e5a4) popup_vitu2_query_window_ParamLimits

0x8578,	// (0x0008e5a4) popup_vitu2_query_window

0xe637,	// (0x00094663) bg_vitu2_candi_button_pane

0xcac4,	// (0x00092af0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcacd,	// (0x00092af9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcad6,	// (0x00092b02) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x05c6,	// (0x000865f2) bg_button_pane_cp015

0x8f24,	// (0x0008ef50) bg_button_pane_cp016

0x8f37,	// (0x0008ef63) bg_button_pane_cp017

0xb4cb,	// (0x000914f7) bg_popup_sub_pane_cp22

0xcaf7,	// (0x00092b23) popup_vitu2_query_window_g1

0x05f9,	// (0x00086625) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00095a48) popup_vitu2_query_window_g

0x0618,	// (0x00086644) popup_vitu2_query_window_t1_ParamLimits

0x0618,	// (0x00086644) popup_vitu2_query_window_t1

0x064d,	// (0x00086679) popup_vitu2_query_window_t2_ParamLimits

0x064d,	// (0x00086679) popup_vitu2_query_window_t2

0x065f,	// (0x0008668b) popup_vitu2_query_window_t3_ParamLimits

0x065f,	// (0x0008668b) popup_vitu2_query_window_t3

0x8f5b,	// (0x0008ef87) popup_vitu2_query_window_t4_ParamLimits

0x8f5b,	// (0x0008ef87) popup_vitu2_query_window_t4

0x8f7c,	// (0x0008efa8) popup_vitu2_query_window_t5_ParamLimits

0x8f7c,	// (0x0008efa8) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00095a4f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00095a4f) popup_vitu2_query_window_t

0xc95b,	// (0x00092987) main_cset_text_pane

0x899f,	// (0x0008e9cb) aid_area_touch_slider_ParamLimits

0x89bb,	// (0x0008e9e7) cset_slider_pane_ParamLimits

0x89e5,	// (0x0008ea11) main_cset_slider_pane_g1_ParamLimits

0x89fa,	// (0x0008ea26) main_cset_slider_pane_g2_ParamLimits

0xc97c,	// (0x000929a8) main_cset_slider_pane_g3_ParamLimits

0xc97c,	// (0x000929a8) main_cset_slider_pane_g3

0x8a0f,	// (0x0008ea3b) main_cset_slider_pane_g4_ParamLimits

0x8a0f,	// (0x0008ea3b) main_cset_slider_pane_g4

0x8a1e,	// (0x0008ea4a) main_cset_slider_pane_g5_ParamLimits

0x8a1e,	// (0x0008ea4a) main_cset_slider_pane_g5

0x8a2a,	// (0x0008ea56) main_cset_slider_pane_g6_ParamLimits

0x8a2a,	// (0x0008ea56) main_cset_slider_pane_g6

0xf976,	// (0x000959a2) main_cset_slider_pane_g_ParamLimits

0xc9ac,	// (0x000929d8) main_cset_slider_pane_t1_ParamLimits

0x8ab6,	// (0x0008eae2) main_cset_slider_pane_t2_ParamLimits

0x8ad0,	// (0x0008eafc) main_cset_slider_pane_t3_ParamLimits

0x8aea,	// (0x0008eb16) main_cset_slider_pane_t4_ParamLimits

0x8b04,	// (0x0008eb30) main_cset_slider_pane_t5_ParamLimits

0x8b1e,	// (0x0008eb4a) main_cset_slider_pane_t6_ParamLimits

0x8b33,	// (0x0008eb5f) main_cset_slider_pane_t7_ParamLimits

0x8b5d,	// (0x0008eb89) main_cset_slider_pane_t8_ParamLimits

0x8b5d,	// (0x0008eb89) main_cset_slider_pane_t8

0x8b85,	// (0x0008ebb1) main_cset_slider_pane_t9_ParamLimits

0x8b85,	// (0x0008ebb1) main_cset_slider_pane_t9

0x8bad,	// (0x0008ebd9) main_cset_slider_pane_t10_ParamLimits

0x8bad,	// (0x0008ebd9) main_cset_slider_pane_t10

0x8bd5,	// (0x0008ec01) main_cset_slider_pane_t11_ParamLimits

0x8bd5,	// (0x0008ec01) main_cset_slider_pane_t11

0x8bfd,	// (0x0008ec29) main_cset_slider_pane_t12_ParamLimits

0x8bfd,	// (0x0008ec29) main_cset_slider_pane_t12

0x8c1a,	// (0x0008ec46) main_cset_slider_pane_t13_ParamLimits

0x8c1a,	// (0x0008ec46) main_cset_slider_pane_t13

0xf99b,	// (0x000959c7) main_cset_slider_pane_t_ParamLimits

0xe637,	// (0x00094663) bg_popup_sub_pane_cp011

0xcb03,	// (0x00092b2f) main_cset_text_pane_g1

0xcb0b,	// (0x00092b37) main_cset_text_pane_t1

0xcb19,	// (0x00092b45) main_cset_text_pane_t2

0xcb27,	// (0x00092b53) main_cset_text_pane_t3

0xcb35,	// (0x00092b61) main_cset_text_pane_t4

0xcb43,	// (0x00092b6f) main_cset_text_pane_t5

0xcb51,	// (0x00092b7d) main_cset_text_pane_t6

0xcb5f,	// (0x00092b8b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00095a5e) main_cset_text_pane_t

0xe637,	// (0x00094663) main_cam4_burst_pane

0xe637,	// (0x00094663) main_cam5_pane

0x88de,	// (0x0008e90a) bg_button_pane_cp019

0x88e7,	// (0x0008e913) bg_button_pane_cp020

0xc988,	// (0x000929b4) main_cset_slider_pane_g7_ParamLimits

0xc988,	// (0x000929b4) main_cset_slider_pane_g7

0xc994,	// (0x000929c0) main_cset_slider_pane_g8_ParamLimits

0xc994,	// (0x000929c0) main_cset_slider_pane_g8

0x8a3e,	// (0x0008ea6a) main_cset_slider_pane_g9_ParamLimits

0x8a3e,	// (0x0008ea6a) main_cset_slider_pane_g9

0x8a4a,	// (0x0008ea76) main_cset_slider_pane_g10_ParamLimits

0x8a4a,	// (0x0008ea76) main_cset_slider_pane_g10

0x8a56,	// (0x0008ea82) main_cset_slider_pane_g11_ParamLimits

0x8a56,	// (0x0008ea82) main_cset_slider_pane_g11

0x8a62,	// (0x0008ea8e) main_cset_slider_pane_g12_ParamLimits

0x8a62,	// (0x0008ea8e) main_cset_slider_pane_g12

0x8a6e,	// (0x0008ea9a) main_cset_slider_pane_g13_ParamLimits

0x8a6e,	// (0x0008ea9a) main_cset_slider_pane_g13

0x8a7a,	// (0x0008eaa6) main_cset_slider_pane_g14_ParamLimits

0x8a7a,	// (0x0008eaa6) main_cset_slider_pane_g14

0x8a86,	// (0x0008eab2) main_cset_slider_pane_g15_ParamLimits

0x8a86,	// (0x0008eab2) main_cset_slider_pane_g15

0xc9da,	// (0x00092a06) main_cset_slider_pane_t14_ParamLimits

0xc9da,	// (0x00092a06) main_cset_slider_pane_t14

0xca13,	// (0x00092a3f) main_cset_slider_pane_t15_ParamLimits

0xca13,	// (0x00092a3f) main_cset_slider_pane_t15

0x8f9d,	// (0x0008efc9) aid_cam4_burst_size_cell_ParamLimits

0x8f9d,	// (0x0008efc9) aid_cam4_burst_size_cell

0x8fbd,	// (0x0008efe9) grid_cam4_burst_pane_ParamLimits

0x8fbd,	// (0x0008efe9) grid_cam4_burst_pane

0x8ff5,	// (0x0008f021) linegrid_cam4_burst_pane_ParamLimits

0x8ff5,	// (0x0008f021) linegrid_cam4_burst_pane

0xcb6d,	// (0x00092b99) scroll_pane_cp30_ParamLimits

0xcb6d,	// (0x00092b99) scroll_pane_cp30

0x9019,	// (0x0008f045) cell_cam4_burst_pane_ParamLimits

0x9019,	// (0x0008f045) cell_cam4_burst_pane

0xcb79,	// (0x00092ba5) linegrid_cam4_burst_pane_g1_ParamLimits

0xcb79,	// (0x00092ba5) linegrid_cam4_burst_pane_g1

0x9066,	// (0x0008f092) linegrid_cam4_burst_pane_g2_ParamLimits

0x9066,	// (0x0008f092) linegrid_cam4_burst_pane_g2

0xcb86,	// (0x00092bb2) linegrid_cam4_burst_pane_g3_ParamLimits

0xcb86,	// (0x00092bb2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00095a6d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00095a6d) linegrid_cam4_burst_pane_g

0x9077,	// (0x0008f0a3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9077,	// (0x0008f0a3) linegrid_cam4_burst_pane_g3_copy1

0xcb93,	// (0x00092bbf) linegrid_cam4_burst_pane_g4_ParamLimits

0xcb93,	// (0x00092bbf) linegrid_cam4_burst_pane_g4

0x9091,	// (0x0008f0bd) linegrid_cam4_burst_pane_g5_ParamLimits

0x9091,	// (0x0008f0bd) linegrid_cam4_burst_pane_g5

0x90a2,	// (0x0008f0ce) linegrid_cam4_burst_pane_g6_ParamLimits

0x90a2,	// (0x0008f0ce) linegrid_cam4_burst_pane_g6

0xcba0,	// (0x00092bcc) linegrid_cam4_burst_pane_g7_ParamLimits

0xcba0,	// (0x00092bcc) linegrid_cam4_burst_pane_g7

0x90b9,	// (0x0008f0e5) cell_cam4_burst_pane_g1

0xcbb9,	// (0x00092be5) main_cam5_pane_t1_ParamLimits

0xcbb9,	// (0x00092be5) main_cam5_pane_t1

0xcbcb,	// (0x00092bf7) main_cam5_pane_t2_ParamLimits

0xcbcb,	// (0x00092bf7) main_cam5_pane_t2

0xcbdd,	// (0x00092c09) main_cam5_pane_t3_ParamLimits

0xcbdd,	// (0x00092c09) main_cam5_pane_t3

0xcbef,	// (0x00092c1b) main_cam5_pane_t4_ParamLimits

0xcbef,	// (0x00092c1b) main_cam5_pane_t4

0xcc07,	// (0x00092c33) main_cam5_pane_t5_ParamLimits

0xcc07,	// (0x00092c33) main_cam5_pane_t5

0xcc1b,	// (0x00092c47) main_cam5_pane_t6_ParamLimits

0xcc1b,	// (0x00092c47) main_cam5_pane_t6

0xcc2f,	// (0x00092c5b) main_cam5_pane_t7_ParamLimits

0xcc2f,	// (0x00092c5b) main_cam5_pane_t7

0xcc41,	// (0x00092c6d) main_cam5_pane_t8_ParamLimits

0xcc41,	// (0x00092c6d) main_cam5_pane_t8

0xcc5d,	// (0x00092c89) main_cam5_pane_t9_ParamLimits

0xcc5d,	// (0x00092c89) main_cam5_pane_t9

0xcc6f,	// (0x00092c9b) main_cam5_pane_t10_ParamLimits

0xcc6f,	// (0x00092c9b) main_cam5_pane_t10

0xcc81,	// (0x00092cad) main_cam5_pane_t11_ParamLimits

0xcc81,	// (0x00092cad) main_cam5_pane_t11

0xcc93,	// (0x00092cbf) main_cam5_pane_t12_ParamLimits

0xcc93,	// (0x00092cbf) main_cam5_pane_t12

0xcca8,	// (0x00092cd4) main_cam5_pane_t13_ParamLimits

0xcca8,	// (0x00092cd4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00095a79) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00095a79) main_cam5_pane_t

0x1205,	// (0x00087231) popup_scut_keymap_window_ParamLimits

0x1205,	// (0x00087231) popup_scut_keymap_window

0x90cc,	// (0x0008f0f8) aid_size_cell_brow_shortcut

0xef47,	// (0x00094f73) bg_popup_window_pane_cp010

0x90d8,	// (0x0008f104) grid_scut_pane

0x90e4,	// (0x0008f110) cell_scut_pane_ParamLimits

0x90e4,	// (0x0008f110) cell_scut_pane

0x90fb,	// (0x0008f127) cell_scut_pane_g1

0xccc5,	// (0x00092cf1) cell_scut_pane_t1

0xccd4,	// (0x00092d00) cell_scut_pane_t2

0x9104,	// (0x0008f130) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00095a94) cell_scut_pane_t

0x6fd7,	// (0x0008d003) main_mup3_pane_g8_ParamLimits

0x6fd7,	// (0x0008d003) main_mup3_pane_g8

0x845a,	// (0x0008e486) area_vitu2_query_pane_ParamLimits

0x845a,	// (0x0008e486) area_vitu2_query_pane

0x05d8,	// (0x00086604) input_focus_pane_cp08

0xcce3,	// (0x00092d0f) area_vitu2_query_pane_g1

0x06dd,	// (0x00086709) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00095a9b) area_vitu2_query_pane_g

0x9112,	// (0x0008f13e) area_vitu2_query_pane_t1_ParamLimits

0x9112,	// (0x0008f13e) area_vitu2_query_pane_t1

0x9126,	// (0x0008f152) area_vitu2_query_pane_t2_ParamLimits

0x9126,	// (0x0008f152) area_vitu2_query_pane_t2

0x06ee,	// (0x0008671a) area_vitu2_query_pane_t3_ParamLimits

0x06ee,	// (0x0008671a) area_vitu2_query_pane_t3

0xccef,	// (0x00092d1b) area_vitu2_query_pane_t4_ParamLimits

0xccef,	// (0x00092d1b) area_vitu2_query_pane_t4

0xcd17,	// (0x00092d43) area_vitu2_query_pane_t5_ParamLimits

0xcd17,	// (0x00092d43) area_vitu2_query_pane_t5

0xcd3f,	// (0x00092d6b) area_vitu2_query_pane_t6_ParamLimits

0xcd3f,	// (0x00092d6b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00095aa0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00095aa0) area_vitu2_query_pane_t

0x913a,	// (0x0008f166) bg_button_pane_cp018

0x9148,	// (0x0008f174) bg_button_pane_cp021

0x0716,	// (0x00086742) bg_button_pane_cp022

0x0725,	// (0x00086751) input_focus_pane_cp09

0x3cba,	// (0x00089ce6) aid_size_touch_mv_arrow_left

0x3ce3,	// (0x00089d0f) aid_size_touch_mv_arrow_right

0x8a9e,	// (0x0008eaca) main_cset_slider_pane_g16_ParamLimits

0x8a9e,	// (0x0008eaca) main_cset_slider_pane_g16

0x8aaa,	// (0x0008ead6) main_cset_slider_pane_g17_ParamLimits

0x8aaa,	// (0x0008ead6) main_cset_slider_pane_g17

0x90b9,	// (0x0008f0e5) cell_cam4_burst_pane_g1_ParamLimits

0xe637,	// (0x00094663) compa_mode_pane

0x8c84,	// (0x0008ecb0) popup_vtel_slider_window_g3_ParamLimits

0x8c84,	// (0x0008ecb0) popup_vtel_slider_window_g3

0x8c9b,	// (0x0008ecc7) popup_vtel_slider_window_g4_ParamLimits

0x8c9b,	// (0x0008ecc7) popup_vtel_slider_window_g4

0x8cb2,	// (0x0008ecde) popup_vtel_slider_window_t1_ParamLimits

0x8cb2,	// (0x0008ecde) popup_vtel_slider_window_t1

0xe637,	// (0x00094663) main_cl_pane

0xb4f3,	// (0x0009151f) popup_imed_adjust2_window_ParamLimits

0xb4cb,	// (0x000914f7) bg_tb_trans_pane_cp05_ParamLimits

0xbf6d,	// (0x00091f99) popup_imed_adjust2_window_g1_ParamLimits

0xbf7c,	// (0x00091fa8) popup_imed_adjust2_window_g2_ParamLimits

0xbf7c,	// (0x00091fa8) popup_imed_adjust2_window_g2

0xbf88,	// (0x00091fb4) popup_imed_adjust2_window_g3_ParamLimits

0xbf88,	// (0x00091fb4) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0009580b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0009580b) popup_imed_adjust2_window_g

0xbf94,	// (0x00091fc0) popup_imed_adjust2_window_t1_ParamLimits

0xbfac,	// (0x00091fd8) slider_imed_adjust_pane_ParamLimits

0xbfc0,	// (0x00091fec) slider_imed_adjust_pane_g1_ParamLimits

0xbfd0,	// (0x00091ffc) slider_imed_adjust_pane_g2_ParamLimits

0xbfe0,	// (0x0009200c) slider_imed_adjust_pane_g3_ParamLimits

0xbff1,	// (0x0009201d) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00095812) slider_imed_adjust_pane_g_ParamLimits

0x81e3,	// (0x0008e20f) aid_touch_area_cam4_ParamLimits

0x81e3,	// (0x0008e20f) aid_touch_area_cam4

0xc6dc,	// (0x00092708) battery_pane_cp01

0x82b2,	// (0x0008e2de) main_camera4_pane_g6_ParamLimits

0x82b2,	// (0x0008e2de) main_camera4_pane_g6

0x82dc,	// (0x0008e308) main_camera4_pane_t2_ParamLimits

0x82dc,	// (0x0008e308) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00095915) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00095915) main_camera4_pane_t

0x8311,	// (0x0008e33d) aid_touch_area_vid4_ParamLimits

0x8311,	// (0x0008e33d) aid_touch_area_vid4

0x8365,	// (0x0008e391) main_video4_pane_g5_ParamLimits

0x8365,	// (0x0008e391) main_video4_pane_g5

0x838a,	// (0x0008e3b6) vid4_progress_pane_ParamLimits

0x838a,	// (0x0008e3b6) vid4_progress_pane

0xc9a0,	// (0x000929cc) main_cset_slider_pane_g18_ParamLimits

0xc9a0,	// (0x000929cc) main_cset_slider_pane_g18

0xcbad,	// (0x00092bd9) cell_cam4_burst_pane_g2_ParamLimits

0xcbad,	// (0x00092bd9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00095a74) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00095a74) cell_cam4_burst_pane_g

0xed82,	// (0x00094dae) bg_cl_pane_ParamLimits

0xed82,	// (0x00094dae) bg_cl_pane

0x9154,	// (0x0008f180) cl_header_pane_ParamLimits

0x9154,	// (0x0008f180) cl_header_pane

0x9168,	// (0x0008f194) cl_listscroll_pane_ParamLimits

0x9168,	// (0x0008f194) cl_listscroll_pane

0xcd8b,	// (0x00092db7) bg_cl_pane_g1

0xcd93,	// (0x00092dbf) bg_cl_pane_g2

0xcd9b,	// (0x00092dc7) bg_cl_pane_g3

0xcda3,	// (0x00092dcf) bg_cl_pane_g4

0xcdab,	// (0x00092dd7) bg_cl_pane_g5

0xcdb3,	// (0x00092ddf) bg_cl_pane_g6

0xcdbb,	// (0x00092de7) bg_cl_pane_g7

0xcdc3,	// (0x00092def) bg_cl_pane_g8

0xcdcb,	// (0x00092df7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00095aaf) bg_cl_pane_g

0x9178,	// (0x0008f1a4) aid_height_cl_leading_ParamLimits

0x9178,	// (0x0008f1a4) aid_height_cl_leading

0x9184,	// (0x0008f1b0) aid_height_cl_text_ParamLimits

0x9184,	// (0x0008f1b0) aid_height_cl_text

0xe641,	// (0x0009466d) bg_cl_header_pane_ParamLimits

0xe641,	// (0x0009466d) bg_cl_header_pane

0x91a3,	// (0x0008f1cf) cl_header_pane_g1_ParamLimits

0x91a3,	// (0x0008f1cf) cl_header_pane_g1

0x91b9,	// (0x0008f1e5) cl_header_pane_t1_ParamLimits

0x91b9,	// (0x0008f1e5) cl_header_pane_t1

0xcdd3,	// (0x00092dff) cl_list_pane

0xc973,	// (0x0009299f) hc_scroll_pane_cp01

0x2733,	// (0x0008875f) bg_cl_header_pane_g1

0xc859,	// (0x00092885) bg_cl_header_pane_g2

0x2753,	// (0x0008877f) bg_cl_header_pane_g3

0xc869,	// (0x00092895) bg_cl_header_pane_g4

0xc861,	// (0x0009288d) bg_cl_header_pane_g5

0xcabc,	// (0x00092ae8) bg_cl_header_pane_g6

0xc881,	// (0x000928ad) bg_cl_header_pane_g7

0xc889,	// (0x000928b5) bg_cl_header_pane_g8

0xc879,	// (0x000928a5) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00095ac2) bg_cl_header_pane_g

0x91d2,	// (0x0008f1fe) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x91d2,	// (0x0008f1fe) hc_cl_list_double_graphic_heading_pane

0x91e3,	// (0x0008f20f) hc_cl_list_single_graphic_pane_ParamLimits

0x91e3,	// (0x0008f20f) hc_cl_list_single_graphic_pane

0x91f9,	// (0x0008f225) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x91f9,	// (0x0008f225) hc_cl_list_single_graphic_pane_g1

0x9205,	// (0x0008f231) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9205,	// (0x0008f231) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00095ad5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00095ad5) hc_cl_list_single_graphic_pane_g

0x9219,	// (0x0008f245) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9219,	// (0x0008f245) hc_cl_list_single_graphic_pane_t1

0x91f9,	// (0x0008f225) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x91f9,	// (0x0008f225) hc_cl_list_double_graphic_heading_pane_g1

0x922e,	// (0x0008f25a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x922e,	// (0x0008f25a) hc_cl_list_double_graphic_heading_pane_g2

0x9242,	// (0x0008f26e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9242,	// (0x0008f26e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00095ada) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00095ada) hc_cl_list_double_graphic_heading_pane_g

0x9256,	// (0x0008f282) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9256,	// (0x0008f282) hc_cl_list_double_graphic_heading_pane_t1

0x926b,	// (0x0008f297) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x926b,	// (0x0008f297) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00095ae1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00095ae1) hc_cl_list_double_graphic_heading_pane_t

0xf000,	// (0x0009502c) vid4_progress_pane_g1

0xf010,	// (0x0009503c) vid4_progress_pane_g2

0x9280,	// (0x0008f2ac) vid4_progress_pane_g3

0xf020,	// (0x0009504c) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00095ae6) vid4_progress_pane_g

0x9292,	// (0x0008f2be) vid4_progress_pane_t1

0xf038,	// (0x00095064) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00095af1) vid4_progress_pane_t

0x92aa,	// (0x0008f2d6) wait_bar_pane_cp07

0xb7d9,	// (0x00091805) blid_firmament_pane_ParamLimits

0xb81c,	// (0x00091848) popup_blid_sat_info2_window_g1

0xb840,	// (0x0009186c) popup_blid_sat_info2_window_t3

0xb84e,	// (0x0009187a) popup_blid_sat_info2_window_t4

0xb85c,	// (0x00091888) popup_blid_sat_info2_window_t5

0xb86a,	// (0x00091896) popup_blid_sat_info2_window_t6

0xb87a,	// (0x000918a6) popup_blid_sat_info2_window_t7

0xb888,	// (0x000918b4) popup_blid_sat_info2_window_t8

0xb896,	// (0x000918c2) popup_blid_sat_info2_window_t9

0xb8a4,	// (0x000918d0) popup_blid_sat_info2_window_t10

0xb966,	// (0x00091992) aid_firma_cardinal_ParamLimits

0xb97a,	// (0x000919a6) blid_firmament_pane_t1_ParamLimits

0xb991,	// (0x000919bd) blid_firmament_pane_t2_ParamLimits

0xb9a8,	// (0x000919d4) blid_firmament_pane_t3_ParamLimits

0xb9bf,	// (0x000919eb) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000956ff) blid_firmament_pane_t_ParamLimits

0xb9d6,	// (0x00091a02) blid_sat_info_pane_ParamLimits

0xe641,	// (0x0009466d) main_cam_set_pane_ParamLimits

0x789b,	// (0x0008d8c7) aid_size_cell_colour_35_ParamLimits

0x78bb,	// (0x0008d8e7) aid_size_cell_colour_112_ParamLimits

0x78db,	// (0x0008d907) aid_size_cell_effect_ParamLimits

0xb4cb,	// (0x000914f7) bg_tb_trans_pane_cp02_ParamLimits

0x35af,	// (0x000895db) heading_imed_pane_ParamLimits

0x78fb,	// (0x0008d927) listscroll_imed_pane_ParamLimits

0x5353,	// (0x0008b37f) popup_call2_audio_first_window_g5_ParamLimits

0x5353,	// (0x0008b37f) popup_call2_audio_first_window_g5

0x7e8e,	// (0x0008deba) aid_size_touch_image3_arrow_left_ParamLimits

0x7e8e,	// (0x0008deba) aid_size_touch_image3_arrow_left

0x7eba,	// (0x0008dee6) aid_size_touch_image3_arrow_right_ParamLimits

0x7eba,	// (0x0008dee6) aid_size_touch_image3_arrow_right

0xf04d,	// (0x00095079) vid4_progress_pane_t3

0x7c0e,	// (0x0008dc3a) main_hwr_training_symbol_option_pane_ParamLimits

0x7c0e,	// (0x0008dc3a) main_hwr_training_symbol_option_pane

0xc25a,	// (0x00092286) popup_hwr_training_preview_window_ParamLimits

0xc25a,	// (0x00092286) popup_hwr_training_preview_window

0x7c2e,	// (0x0008dc5a) hwr_training_navi_pane_g5_ParamLimits

0x7c2e,	// (0x0008dc5a) hwr_training_navi_pane_g5

0xc835,	// (0x00092861) popup_char_count_window

0xe641,	// (0x0009466d) bg_popup_sub_pane_cp20_ParamLimits

0x8dc0,	// (0x0008edec) list_vitu2_match_list_pane_ParamLimits

0x8dcf,	// (0x0008edfb) vitu2_page_scroll_pane_ParamLimits

0x8dcf,	// (0x0008edfb) vitu2_page_scroll_pane

0xcded,	// (0x00092e19) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcded,	// (0x00092e19) list_single_hwr_training_symbol_option_pane

0xce00,	// (0x00092e2c) list_single_hwr_training_symbol_option_pane_g1

0xce08,	// (0x00092e34) list_single_hwr_training_symbol_option_pane_t1

0xce16,	// (0x00092e42) bg_button_pane_cp023

0xce1f,	// (0x00092e4b) bg_button_pane_cp024

0x92e1,	// (0x0008f30d) vitu2_page_scroll_pane_g1

0x92e9,	// (0x0008f315) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00095af8) vitu2_page_scroll_pane_g

0x92f1,	// (0x0008f31d) vitu2_page_scroll_pane_t1

0xb6f5,	// (0x00091721) popup_char_count_window_g1

0xce52,	// (0x00092e7e) popup_char_count_window_g2

0xce5b,	// (0x00092e87) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00095afd) popup_char_count_window_g

0xce64,	// (0x00092e90) popup_char_count_window_t1

0xe637,	// (0x00094663) main_vded2_pane

0xbf59,	// (0x00091f85) aid_size_cell_imed_line

0xbf63,	// (0x00091f8f) grid_imed_line_width_pane

0xc7a6,	// (0x000927d2) vid4_indicators_pane_g4

0xce72,	// (0x00092e9e) cell_imed_line_width_pane_ParamLimits

0xce72,	// (0x00092e9e) cell_imed_line_width_pane

0xce86,	// (0x00092eb2) cell_imed_line_width_pane_g1

0xce8f,	// (0x00092ebb) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00095b04) cell_imed_line_width_pane_g

0x9300,	// (0x0008f32c) main_vded2_pane_g1_ParamLimits

0x9300,	// (0x0008f32c) main_vded2_pane_g1

0x9316,	// (0x0008f342) main_vded2_pane_g2_ParamLimits

0x9316,	// (0x0008f342) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00095b09) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00095b09) main_vded2_pane_g

0x9328,	// (0x0008f354) vded2_slider_pane_ParamLimits

0x9328,	// (0x0008f354) vded2_slider_pane

0x9338,	// (0x0008f364) aid_size_touch_vded2_end

0x9342,	// (0x0008f36e) aid_size_touch_vded2_playhead

0xce97,	// (0x00092ec3) aid_size_touch_vded2_start

0xce9f,	// (0x00092ecb) vded2_slider_bg_pane

0xcea8,	// (0x00092ed4) vded2_slider_pane_g1

0xceb1,	// (0x00092edd) vded2_slider_pane_g2

0x934c,	// (0x0008f378) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00095b0e) vded2_slider_pane_g

0xceb9,	// (0x00092ee5) vded2_slider_bg_pane_g1

0xcec2,	// (0x00092eee) vded2_slider_bg_pane_g2

0xcecb,	// (0x00092ef7) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00095b15) vded2_slider_bg_pane_g

0x451e,	// (0x0008a54a) aid_postcard_touch_down_pane_ParamLimits

0x451e,	// (0x0008a54a) aid_postcard_touch_down_pane

0x4534,	// (0x0008a560) aid_postcard_touch_up_pane_ParamLimits

0x4534,	// (0x0008a560) aid_postcard_touch_up_pane

0xe637,	// (0x00094663) main_blid2_pane

0xb4d9,	// (0x00091505) popup_blid2_search_window

0xe637,	// (0x00094663) blid2_gps_pane

0xe637,	// (0x00094663) blid2_navig_pane

0xe637,	// (0x00094663) blid2_search_pane

0xe637,	// (0x00094663) blid2_tripm_pane

0x9357,	// (0x0008f383) blid2_search_pane_g1_ParamLimits

0x9357,	// (0x0008f383) blid2_search_pane_g1

0x9371,	// (0x0008f39d) blid2_search_pane_t1_ParamLimits

0x9371,	// (0x0008f39d) blid2_search_pane_t1

0x9383,	// (0x0008f3af) aid_size_cell_blid2_gps_ParamLimits

0x9383,	// (0x0008f3af) aid_size_cell_blid2_gps

0x939b,	// (0x0008f3c7) blid2_gps_pane_g1_ParamLimits

0x939b,	// (0x0008f3c7) blid2_gps_pane_g1

0x93af,	// (0x0008f3db) grid_blid2_satellite_pane_ParamLimits

0x93af,	// (0x0008f3db) grid_blid2_satellite_pane

0x93c9,	// (0x0008f3f5) blid2_navig_pane_g1_ParamLimits

0x93c9,	// (0x0008f3f5) blid2_navig_pane_g1

0x93d5,	// (0x0008f401) blid2_navig_pane_t1_ParamLimits

0x93d5,	// (0x0008f401) blid2_navig_pane_t1

0x93f0,	// (0x0008f41c) blid2_navig_pane_t2_ParamLimits

0x93f0,	// (0x0008f41c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00095b1c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00095b1c) blid2_navig_pane_t

0x940b,	// (0x0008f437) blid2_navig_ring_pane_ParamLimits

0x940b,	// (0x0008f437) blid2_navig_ring_pane

0x9424,	// (0x0008f450) blid2_speed_pane_ParamLimits

0x9424,	// (0x0008f450) blid2_speed_pane

0x9430,	// (0x0008f45c) blid2_tripm_pane_g1_ParamLimits

0x9430,	// (0x0008f45c) blid2_tripm_pane_g1

0x9449,	// (0x0008f475) blid2_tripm_pane_g2_ParamLimits

0x9449,	// (0x0008f475) blid2_tripm_pane_g2

0x945d,	// (0x0008f489) blid2_tripm_pane_g3_ParamLimits

0x945d,	// (0x0008f489) blid2_tripm_pane_g3

0x9471,	// (0x0008f49d) blid2_tripm_pane_g4_ParamLimits

0x9471,	// (0x0008f49d) blid2_tripm_pane_g4

0x9485,	// (0x0008f4b1) blid2_tripm_pane_g5_ParamLimits

0x9485,	// (0x0008f4b1) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00095b21) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00095b21) blid2_tripm_pane_g

0x94ab,	// (0x0008f4d7) blid2_tripm_pane_t1_ParamLimits

0x94ab,	// (0x0008f4d7) blid2_tripm_pane_t1

0x94c6,	// (0x0008f4f2) blid2_tripm_pane_t2_ParamLimits

0x94c6,	// (0x0008f4f2) blid2_tripm_pane_t2

0x94df,	// (0x0008f50b) blid2_tripm_pane_t3_ParamLimits

0x94df,	// (0x0008f50b) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00095b2e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00095b2e) blid2_tripm_pane_t

0x9526,	// (0x0008f552) cell_blid2_satellite_pane_ParamLimits

0x9526,	// (0x0008f552) cell_blid2_satellite_pane

0x9544,	// (0x0008f570) cell_blid2_satellite_pane_g1

0xced4,	// (0x00092f00) cell_blid2_satellite_pane_t1

0xb9e6,	// (0x00091a12) blid2_speed_pane_g1

0xcee2,	// (0x00092f0e) blid2_speed_pane_t1

0xcef0,	// (0x00092f1c) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00095b37) blid2_speed_pane_t

0xb9e6,	// (0x00091a12) blid2_navig_ring_pane_g1

0x954d,	// (0x0008f579) blid2_navig_ring_pane_g2

0x9555,	// (0x0008f581) blid2_navig_ring_pane_g3

0x955d,	// (0x0008f589) blid2_navig_ring_pane_g4

0x9565,	// (0x0008f591) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00095b3c) blid2_navig_ring_pane_g

0xe637,	// (0x00094663) bg_popup_window_pane_cp011

0xcefe,	// (0x00092f2a) popup_blid2_search_window_g1

0xcf06,	// (0x00092f32) popup_blid2_search_window_t1

0xcf14,	// (0x00092f40) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00095b47) popup_blid2_search_window_t

0x25ff,	// (0x0008862b) main_browser_pane_g1

0xed82,	// (0x00094dae) main_browser_pane_ParamLimits

0xe641,	// (0x0009466d) bg_button_pane_cp011_ParamLimits

0x8674,	// (0x0008e6a0) cell_vitu2_function_pane_g1_ParamLimits

0xb4cb,	// (0x000914f7) bg_popup_sub_pane_cp22_ParamLimits

0x05d8,	// (0x00086604) input_focus_pane_cp08_ParamLimits

0x8f4a,	// (0x0008ef76) popup_vitu2_query_button_pane_ParamLimits

0x8f4a,	// (0x0008ef76) popup_vitu2_query_button_pane

0x05ef,	// (0x0008661b) popup_vitu2_query_input_button_pane

0xcaf7,	// (0x00092b23) popup_vitu2_query_window_g1_ParamLimits

0x05f9,	// (0x00086625) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00095a48) popup_vitu2_query_window_g_ParamLimits

0xe637,	// (0x00094663) bg_button_pane_cp026

0x956d,	// (0x0008f599) popup_vitu2_query_input_button_pane_g1

0xe637,	// (0x00094663) bg_button_pane_cp025

0xcf22,	// (0x00092f4e) popup_vitu2_query_button_pane_t1

0x6cb0,	// (0x0008ccdc) main_mp3_pane_t6

0x6cbe,	// (0x0008ccea) popup_slider_window_cp01

0xc70a,	// (0x00092736) cam4_battery_pane

0xc763,	// (0x0009278f) cam4_battery_pane_cp02

0xeff8,	// (0x00095024) cam4_battery_pane_cp01

0xeff8,	// (0x00095024) cam4_battery_pane_cp03

0xb9e6,	// (0x00091a12) cam4_battery_pane_g1

0xcf30,	// (0x00092f5c) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00095b4c) cam4_battery_pane_g

0xb8b2,	// (0x000918de) popup_blid_sat_info2_window_t11

0x3cba,	// (0x00089ce6) aid_size_touch_mv_arrow_left_ParamLimits

0x3ce3,	// (0x00089d0f) aid_size_touch_mv_arrow_right_ParamLimits

0x3d41,	// (0x00089d6d) navi_pane_g1_ParamLimits

0x3d4d,	// (0x00089d79) navi_pane_g2_ParamLimits

0x3d7b,	// (0x00089da7) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00095411) navi_pane_g_ParamLimits

0x3e39,	// (0x00089e65) navi_pane_mv_t1_ParamLimits

0x7907,	// (0x0008d933) grid_imed_effect_pane_ParamLimits

0x21a5,	// (0x000881d1) aid_placing_vt_slider_lsc

0x21b5,	// (0x000881e1) aid_placing_vt_slider_prt

0xe641,	// (0x0009466d) bg_tb_trans_pane_cp01_ParamLimits

0xbb72,	// (0x00091b9e) popup_image_details_window_g1_ParamLimits

0xbb85,	// (0x00091bb1) popup_image_details_window_g2_ParamLimits

0xbb9a,	// (0x00091bc6) popup_image_details_window_g3_ParamLimits

0xbb9a,	// (0x00091bc6) popup_image_details_window_g3

0xf718,	// (0x00095744) popup_image_details_window_g_ParamLimits

0xbbae,	// (0x00091bda) popup_image_details_window_t1_ParamLimits

0xbbc0,	// (0x00091bec) popup_image_details_window_t2_ParamLimits

0xbbd9,	// (0x00091c05) popup_image_details_window_t3_ParamLimits

0xbbed,	// (0x00091c19) popup_image_details_window_t4_ParamLimits

0xbc08,	// (0x00091c34) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0009574b) popup_image_details_window_t_ParamLimits

0x9190,	// (0x0008f1bc) cl_header_name_pane_ParamLimits

0x9190,	// (0x0008f1bc) cl_header_name_pane

0x9575,	// (0x0008f5a1) cl_header_name_pane_t1_ParamLimits

0x9575,	// (0x0008f5a1) cl_header_name_pane_t1

0x9596,	// (0x0008f5c2) cl_header_name_pane_t2_ParamLimits

0x9596,	// (0x0008f5c2) cl_header_name_pane_t2

0x95d8,	// (0x0008f604) cl_header_name_pane_t3_ParamLimits

0x95d8,	// (0x0008f604) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00095b51) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00095b51) cl_header_name_pane_t

0x3e0a,	// (0x00089e36) navi_pane_mv_g2_ParamLimits

0xc7f2,	// (0x0009281e) field_vitu2_entry_pane_g1_ParamLimits

0xc7fe,	// (0x0009282a) field_vitu2_entry_pane_g2_ParamLimits

0xc80a,	// (0x00092836) field_vitu2_entry_pane_g3_ParamLimits

0xc80a,	// (0x00092836) field_vitu2_entry_pane_g3

0xf91b,	// (0x00095947) field_vitu2_entry_pane_g_ParamLimits

0xc83d,	// (0x00092869) cell_vitu2_itu_pane_g1_ParamLimits

0x8608,	// (0x0008e634) cell_vitu2_itu_pane_g2_ParamLimits

0x8608,	// (0x0008e634) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00095953) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00095953) cell_vitu2_itu_pane_g

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp05_ParamLimits

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp05

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp03

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp04

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp10_ParamLimits

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp10

0x0716,	// (0x00086742) bg_vkb2_func_pane_cp08

0x913a,	// (0x0008f166) bg_vkb2_func_pane_cp06

0x9148,	// (0x0008f174) bg_vkb2_func_pane_cp07

0xce28,	// (0x00092e54) bg_vkb2_func_pane_cp11_ParamLimits

0xce28,	// (0x00092e54) bg_vkb2_func_pane_cp11

0xce3d,	// (0x00092e69) bg_vkb2_func_pane_cp12_ParamLimits

0xce3d,	// (0x00092e69) bg_vkb2_func_pane_cp12

0xe637,	// (0x00094663) bg_vkb2_func_pane_cp09

0xc859,	// (0x00092885) bg_vkb2_func_pane_g1

0x2753,	// (0x0008877f) bg_vkb2_func_pane_g2

0xc861,	// (0x0009288d) bg_vkb2_func_pane_g3

0xc869,	// (0x00092895) bg_vkb2_func_pane_g4

0xcabc,	// (0x00092ae8) bg_vkb2_func_pane_g5

0xc881,	// (0x000928ad) bg_vkb2_func_pane_g6

0xc889,	// (0x000928b5) bg_vkb2_func_pane_g7

0xc879,	// (0x000928a5) bg_vkb2_func_pane_g8

0x2733,	// (0x0008875f) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00095b58) bg_vkb2_func_pane_g

0x9499,	// (0x0008f4c5) blid2_tripm_pane_g6_ParamLimits

0x9499,	// (0x0008f4c5) blid2_tripm_pane_g6

0xc54b,	// (0x00092577) mp4_progress_pane_g1

0x9512,	// (0x0008f53e) blid2_tripm_values_pane_ParamLimits

0x9512,	// (0x0008f53e) blid2_tripm_values_pane

0x9609,	// (0x0008f635) blid2_tripm_values_pane_t1

0x9617,	// (0x0008f643) blid2_tripm_values_pane_t2

0x9625,	// (0x0008f651) blid2_tripm_values_pane_t3

0x9633,	// (0x0008f65f) blid2_tripm_values_pane_t4

0x9641,	// (0x0008f66d) blid2_tripm_values_pane_t5

0x964f,	// (0x0008f67b) blid2_tripm_values_pane_t6

0x965d,	// (0x0008f689) blid2_tripm_values_pane_t7

0x966b,	// (0x0008f697) blid2_tripm_values_pane_t8

0x9679,	// (0x0008f6a5) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00095b6b) blid2_tripm_values_pane_t

0x21f1,	// (0x0008821d) call_video_pane_t1_ParamLimits

0x220f,	// (0x0008823b) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009529a) call_video_pane_t_ParamLimits

0x03c7,	// (0x000863f3) msg_header_pane_g1_ParamLimits

0x4488,	// (0x0008a4b4) msg_header_pane_g2_ParamLimits

0x4488,	// (0x0008a4b4) msg_header_pane_g2

0x0001,

0xf488,	// (0x000954b4) msg_header_pane_g_ParamLimits

0xf488,	// (0x000954b4) msg_header_pane_g

0xed82,	// (0x00094dae) main_clock2_pane_ParamLimits

0x7608,	// (0x0008d634) grid_clock2_toolbar_pane_ParamLimits

0x7608,	// (0x0008d634) grid_clock2_toolbar_pane

0x7608,	// (0x0008d634) listscroll_clock2_pane_ParamLimits

0x7608,	// (0x0008d634) listscroll_clock2_pane

0x76fb,	// (0x0008d727) main_clock2_pane_t3_ParamLimits

0x76fb,	// (0x0008d727) main_clock2_pane_t3

0x771f,	// (0x0008d74b) main_clock2_pane_t4_ParamLimits

0x771f,	// (0x0008d74b) main_clock2_pane_t4

0xcf3a,	// (0x00092f66) cell_clock2_toolbar_pane

0xcf42,	// (0x00092f6e) cell_clock2_toolbar_pane_cp01

0xcf42,	// (0x00092f6e) cell_clock2_toolbar_pane_cp02

0xcf4a,	// (0x00092f76) cell_clock2_toolbar_pane_cp03

0xcf52,	// (0x00092f7e) list_clock2_pane

0x3a64,	// (0x00089a90) scroll_pane_cp10

0xcf5a,	// (0x00092f86) list_single_clock2_pane_ParamLimits

0xcf5a,	// (0x00092f86) list_single_clock2_pane

0xef47,	// (0x00094f73) list_highlight_pane_cp08

0xcf67,	// (0x00092f93) list_single_clock2_pane_t1

0xcf75,	// (0x00092fa1) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00095b7e) list_single_clock2_pane_t

0xe637,	// (0x00094663) bg_button_pane_cp10

0xcf83,	// (0x00092faf) cell_clock2_toolbar_pane_g1

0x449c,	// (0x0008a4c8) aid_main_viewer_pane_g1_ParamLimits

0x449c,	// (0x0008a4c8) aid_main_viewer_pane_g1

0x44aa,	// (0x0008a4d6) aid_main_viewer_pane_g2_ParamLimits

0x44aa,	// (0x0008a4d6) aid_main_viewer_pane_g2

0x44b8,	// (0x0008a4e4) aid_main_viewer_pane_g3_ParamLimits

0x44b8,	// (0x0008a4e4) aid_main_viewer_pane_g3

0x44c7,	// (0x0008a4f3) aid_main_viewer_pane_g4_ParamLimits

0x44c7,	// (0x0008a4f3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000954c5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000954c5) aid_main_viewer_pane_g

0x5ed7,	// (0x0008bf03) main_calc_pane_ParamLimits

0x5eeb,	// (0x0008bf17) main_dialer2_pane_ParamLimits

0xe637,	// (0x00094663) main_cam6_pane

0xe637,	// (0x00094663) main_vid6_pane

0x7614,	// (0x0008d640) listscroll_gen_pane_cp06_ParamLimits

0x7614,	// (0x0008d640) listscroll_gen_pane_cp06

0x7742,	// (0x0008d76e) main_clock2_pane_t5_ParamLimits

0x7742,	// (0x0008d76e) main_clock2_pane_t5

0x779c,	// (0x0008d7c8) aid_call2_pane_cp10_ParamLimits

0x77ae,	// (0x0008d7da) aid_call_pane_cp10_ParamLimits

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g2_ParamLimits

0x77c0,	// (0x0008d7ec) popup_clock_analogue_window_cp10_g3_ParamLimits

0x77c0,	// (0x0008d7ec) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3c49,	// (0x00089c75) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00095800) popup_clock_analogue_window_cp10_g_ParamLimits

0x77d2,	// (0x0008d7fe) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7e3b,	// (0x0008de67) cell_dialer2_keypad_pane_g2_ParamLimits

0x7e3b,	// (0x0008de67) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000958e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000958e6) cell_dialer2_keypad_pane_g

0x7e57,	// (0x0008de83) cell_dialer2_keypad_pane_t1

0x8991,	// (0x0008e9bd) main_cset_text2_pane_ParamLimits

0x8991,	// (0x0008e9bd) main_cset_text2_pane

0xcce3,	// (0x00092d0f) area_vitu2_query_pane_g1_ParamLimits

0x06dd,	// (0x00086709) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00095a9b) area_vitu2_query_pane_g_ParamLimits

0xcd67,	// (0x00092d93) area_vitu2_query_pane_t7_ParamLimits

0xcd67,	// (0x00092d93) area_vitu2_query_pane_t7

0x913a,	// (0x0008f166) bg_button_pane_cp018_ParamLimits

0x9148,	// (0x0008f174) bg_button_pane_cp021_ParamLimits

0x0716,	// (0x00086742) bg_button_pane_cp022_ParamLimits

0x0716,	// (0x00086742) bg_vkb2_func_pane_cp08_ParamLimits

0x913a,	// (0x0008f166) bg_vkb2_func_pane_cp06_ParamLimits

0x9148,	// (0x0008f174) bg_vkb2_func_pane_cp07_ParamLimits

0x0725,	// (0x00086751) input_focus_pane_cp09_ParamLimits

0xf06a,	// (0x00095096) cam6_autofocus_pane_ParamLimits

0xf06a,	// (0x00095096) cam6_autofocus_pane

0x9687,	// (0x0008f6b3) cam6_image_uncrop_pane_ParamLimits

0x9687,	// (0x0008f6b3) cam6_image_uncrop_pane

0x9696,	// (0x0008f6c2) cam6_indi_pane_ParamLimits

0x9696,	// (0x0008f6c2) cam6_indi_pane

0x96ac,	// (0x0008f6d8) cam6_mode_pane_ParamLimits

0x96ac,	// (0x0008f6d8) cam6_mode_pane

0x96be,	// (0x0008f6ea) cam6_timer_pane_ParamLimits

0x96be,	// (0x0008f6ea) cam6_timer_pane

0x96ca,	// (0x0008f6f6) cam6_zoom_pane_ParamLimits

0x96ca,	// (0x0008f6f6) cam6_zoom_pane

0x96d6,	// (0x0008f702) cam6_mode_pane_g1_ParamLimits

0x96d6,	// (0x0008f702) cam6_mode_pane_g1

0x96e6,	// (0x0008f712) cam6_mode_pane_g2_ParamLimits

0x96e6,	// (0x0008f712) cam6_mode_pane_g2

0x96f6,	// (0x0008f722) cam6_mode_pane_g3_ParamLimits

0x96f6,	// (0x0008f722) cam6_mode_pane_g3

0x9706,	// (0x0008f732) cam6_mode_pane_g4_ParamLimits

0x9706,	// (0x0008f732) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00095b83) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00095b83) cam6_mode_pane_g

0xcf8b,	// (0x00092fb7) bg_tb_trans_pane_cp08_ParamLimits

0xcf8b,	// (0x00092fb7) bg_tb_trans_pane_cp08

0xcf99,	// (0x00092fc5) cam6_battery_pane_ParamLimits

0xcf99,	// (0x00092fc5) cam6_battery_pane

0xcfaf,	// (0x00092fdb) cam6_indi_pane_g1_ParamLimits

0xcfaf,	// (0x00092fdb) cam6_indi_pane_g1

0xcfc1,	// (0x00092fed) cam6_indi_pane_g2_ParamLimits

0xcfc1,	// (0x00092fed) cam6_indi_pane_g2

0xcfd3,	// (0x00092fff) cam6_indi_pane_g3_ParamLimits

0xcfd3,	// (0x00092fff) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00095b8c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00095b8c) cam6_indi_pane_g

0xcfe5,	// (0x00093011) cam6_indi_pane_t1_ParamLimits

0xcfe5,	// (0x00093011) cam6_indi_pane_t1

0x9716,	// (0x0008f742) cam6_autofocus_pane_g1

0x971e,	// (0x0008f74a) cam6_autofocus_pane_g2

0x9726,	// (0x0008f752) cam6_autofocus_pane_g3

0x972e,	// (0x0008f75a) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00095b93) cam6_autofocus_pane_g

0xd00b,	// (0x00093037) cam6_timer_pane_g1

0xd013,	// (0x0009303f) cam6_timer_pane_t1

0xd021,	// (0x0009304d) cam6_zoom_cont_pane

0xd029,	// (0x00093055) cam6_zoom_pane_g1

0xd031,	// (0x0009305d) cam6_zoom_pane_g2

0x9736,	// (0x0008f762) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00095b9c) cam6_zoom_pane_g

0xb9e6,	// (0x00091a12) cam6_battery_pane_g1

0xb9e6,	// (0x00091a12) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00095708) cam6_battery_pane_g

0xd039,	// (0x00093065) cam6_zoom_cont_pane_g1

0xd042,	// (0x0009306e) cam6_zoom_cont_pane_g2

0xd04b,	// (0x00093077) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00095ba3) cam6_zoom_cont_pane_g

0x9753,	// (0x0008f77f) cam6_mode_pane_cp_ParamLimits

0x9753,	// (0x0008f77f) cam6_mode_pane_cp

0x96ca,	// (0x0008f6f6) cam6_zoom_pane_cp_ParamLimits

0x96ca,	// (0x0008f6f6) cam6_zoom_pane_cp

0x9765,	// (0x0008f791) vid6_image_uncrop_cif_pane_ParamLimits

0x9765,	// (0x0008f791) vid6_image_uncrop_cif_pane

0x9775,	// (0x0008f7a1) vid6_image_uncrop_nhd_pane_ParamLimits

0x9775,	// (0x0008f7a1) vid6_image_uncrop_nhd_pane

0x9687,	// (0x0008f6b3) vid6_image_uncrop_vga_pane_ParamLimits

0x9687,	// (0x0008f6b3) vid6_image_uncrop_vga_pane

0x9784,	// (0x0008f7b0) vid6_image_uncrop_wvga_pane_ParamLimits

0x9784,	// (0x0008f7b0) vid6_image_uncrop_wvga_pane

0x9793,	// (0x0008f7bf) vid6_indi_pane_ParamLimits

0x9793,	// (0x0008f7bf) vid6_indi_pane

0xcf8b,	// (0x00092fb7) bg_tb_trans_pane_cp09_ParamLimits

0xcf8b,	// (0x00092fb7) bg_tb_trans_pane_cp09

0xd063,	// (0x0009308f) cam6_battery_pane_cp_ParamLimits

0xd063,	// (0x0009308f) cam6_battery_pane_cp

0xd06f,	// (0x0009309b) vid6_indi_pane_g1_ParamLimits

0xd06f,	// (0x0009309b) vid6_indi_pane_g1

0xd081,	// (0x000930ad) vid6_indi_pane_g2_ParamLimits

0xd081,	// (0x000930ad) vid6_indi_pane_g2

0xd093,	// (0x000930bf) vid6_indi_pane_g3_ParamLimits

0xd093,	// (0x000930bf) vid6_indi_pane_g3

0xd0a8,	// (0x000930d4) vid6_indi_pane_g4_ParamLimits

0xd0a8,	// (0x000930d4) vid6_indi_pane_g4

0xd0bd,	// (0x000930e9) vid6_indi_pane_g5_ParamLimits

0xd0bd,	// (0x000930e9) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00095baa) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00095baa) vid6_indi_pane_g

0xd0d7,	// (0x00093103) vid6_indi_pane_t1_ParamLimits

0xd0d7,	// (0x00093103) vid6_indi_pane_t1

0xd0ed,	// (0x00093119) vid6_indi_pane_t2_ParamLimits

0xd0ed,	// (0x00093119) vid6_indi_pane_t2

0xd115,	// (0x00093141) vid6_indi_pane_t3_ParamLimits

0xd115,	// (0x00093141) vid6_indi_pane_t3

0xd13d,	// (0x00093169) vid6_indi_pane_t4_ParamLimits

0xd13d,	// (0x00093169) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00095bb5) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00095bb5) vid6_indi_pane_t

0xd161,	// (0x0009318d) wait_bar_pane_cp08

0x97ab,	// (0x0008f7d7) main_cset_text2_pane_t1_ParamLimits

0x97ab,	// (0x0008f7d7) main_cset_text2_pane_t1

0x973e,	// (0x0008f76a) listscroll_gen_pane_cp06_t1_ParamLimits

0x973e,	// (0x0008f76a) listscroll_gen_pane_cp06_t1

0xe637,	// (0x00094663) main_cam6_set_pane

0xbc52,	// (0x00091c7e) bg_tb_trans_pane_cp06_ParamLimits

0xc712,	// (0x0009273e) cam4_indicators_pane_g1_ParamLimits

0xc723,	// (0x0009274f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00095923) cam4_indicators_pane_g_ParamLimits

0xc741,	// (0x0009276d) cam4_indicators_pane_t1_ParamLimits

0xe641,	// (0x0009466d) bg_tb_trans_pane_cp07_ParamLimits

0xc76d,	// (0x00092799) vid4_indicators_pane_g1_ParamLimits

0xc781,	// (0x000927ad) vid4_indicators_pane_g2_ParamLimits

0xc795,	// (0x000927c1) vid4_indicators_pane_g3_ParamLimits

0xc7a6,	// (0x000927d2) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00095935) vid4_indicators_pane_g_ParamLimits

0xc7c4,	// (0x000927f0) vid4_indicators_pane_t1_ParamLimits

0xf000,	// (0x0009502c) vid4_progress_pane_g1_ParamLimits

0xf010,	// (0x0009503c) vid4_progress_pane_g2_ParamLimits

0x9280,	// (0x0008f2ac) vid4_progress_pane_g3_ParamLimits

0xf020,	// (0x0009504c) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00095ae6) vid4_progress_pane_g_ParamLimits

0x9292,	// (0x0008f2be) vid4_progress_pane_t1_ParamLimits

0xf038,	// (0x00095064) vid4_progress_pane_t2_ParamLimits

0xf04d,	// (0x00095079) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00095af1) vid4_progress_pane_t_ParamLimits

0x92aa,	// (0x0008f2d6) wait_bar_pane_cp07_ParamLimits

0x97c8,	// (0x0008f7f4) main_cam6_set_pane_g2_ParamLimits

0x97c8,	// (0x0008f7f4) main_cam6_set_pane_g2

0x97ec,	// (0x0008f818) main_cset6_listscroll_pane_ParamLimits

0x97ec,	// (0x0008f818) main_cset6_listscroll_pane

0x980c,	// (0x0008f838) main_cset6_slider_pane_ParamLimits

0x980c,	// (0x0008f838) main_cset6_slider_pane

0x9822,	// (0x0008f84e) main_cset6_text2_pane_ParamLimits

0x9822,	// (0x0008f84e) main_cset6_text2_pane

0xd170,	// (0x0009319c) main_cset6_text_pane

0xd178,	// (0x000931a4) main_cset_list_pane_copy1_ParamLimits

0xd178,	// (0x000931a4) main_cset_list_pane_copy1

0xd188,	// (0x000931b4) scroll_pane_cp028_copy1

0x9830,	// (0x0008f85c) cset_list_set_pane_copy1

0x9841,	// (0x0008f86d) aid_position_infowindow_above_copy1

0x9849,	// (0x0008f875) aid_position_infowindow_below_copy1

0x9851,	// (0x0008f87d) cset_list_set_pane_g1_copy1

0x0748,	// (0x00086774) cset_list_set_pane_g3_copy1_ParamLimits

0x0748,	// (0x00086774) cset_list_set_pane_g3_copy1

0x0757,	// (0x00086783) cset_list_set_pane_t1_copy1_ParamLimits

0x0757,	// (0x00086783) cset_list_set_pane_t1_copy1

0xe641,	// (0x0009466d) list_highlight_pane_cp021_copy1_ParamLimits

0xe641,	// (0x0009466d) list_highlight_pane_cp021_copy1

0xd191,	// (0x000931bd) cset6_slider_pane_ParamLimits

0xd191,	// (0x000931bd) cset6_slider_pane

0xd1bd,	// (0x000931e9) main_cset6_slider_pane_g1_ParamLimits

0xd1bd,	// (0x000931e9) main_cset6_slider_pane_g1

0x9859,	// (0x0008f885) main_cset6_slider_pane_g2_ParamLimits

0x9859,	// (0x0008f885) main_cset6_slider_pane_g2

0xd1e5,	// (0x00093211) main_cset6_slider_pane_g3_ParamLimits

0xd1e5,	// (0x00093211) main_cset6_slider_pane_g3

0x9881,	// (0x0008f8ad) main_cset6_slider_pane_g4_ParamLimits

0x9881,	// (0x0008f8ad) main_cset6_slider_pane_g4

0x988d,	// (0x0008f8b9) main_cset6_slider_pane_g5_ParamLimits

0x988d,	// (0x0008f8b9) main_cset6_slider_pane_g5

0xc988,	// (0x000929b4) main_cset6_slider_pane_g7_ParamLimits

0xc988,	// (0x000929b4) main_cset6_slider_pane_g7

0xc994,	// (0x000929c0) main_cset6_slider_pane_g8_ParamLimits

0xc994,	// (0x000929c0) main_cset6_slider_pane_g8

0x8a3e,	// (0x0008ea6a) main_cset6_slider_pane_g9_ParamLimits

0x8a3e,	// (0x0008ea6a) main_cset6_slider_pane_g9

0x8a4a,	// (0x0008ea76) main_cset6_slider_pane_g10_ParamLimits

0x8a4a,	// (0x0008ea76) main_cset6_slider_pane_g10

0x8a56,	// (0x0008ea82) main_cset6_slider_pane_g11_ParamLimits

0x8a56,	// (0x0008ea82) main_cset6_slider_pane_g11

0x8a62,	// (0x0008ea8e) main_cset6_slider_pane_g12_ParamLimits

0x8a62,	// (0x0008ea8e) main_cset6_slider_pane_g12

0x8a6e,	// (0x0008ea9a) main_cset6_slider_pane_g13_ParamLimits

0x8a6e,	// (0x0008ea9a) main_cset6_slider_pane_g13

0x8a7a,	// (0x0008eaa6) main_cset6_slider_pane_g14_ParamLimits

0x8a7a,	// (0x0008eaa6) main_cset6_slider_pane_g14

0x9899,	// (0x0008f8c5) main_cset6_slider_pane_g15_ParamLimits

0x9899,	// (0x0008f8c5) main_cset6_slider_pane_g15

0x8a9e,	// (0x0008eaca) main_cset6_slider_pane_g16_ParamLimits

0x8a9e,	// (0x0008eaca) main_cset6_slider_pane_g16

0x8aaa,	// (0x0008ead6) main_cset6_slider_pane_g17_ParamLimits

0x8aaa,	// (0x0008ead6) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00095bbe) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00095bbe) main_cset6_slider_pane_g

0xd1f1,	// (0x0009321d) main_cset6_slider_pane_t1_ParamLimits

0xd1f1,	// (0x0009321d) main_cset6_slider_pane_t1

0x98c9,	// (0x0008f8f5) main_cset6_slider_pane_t2_ParamLimits

0x98c9,	// (0x0008f8f5) main_cset6_slider_pane_t2

0x98f4,	// (0x0008f920) main_cset6_slider_pane_t3_ParamLimits

0x98f4,	// (0x0008f920) main_cset6_slider_pane_t3

0x991f,	// (0x0008f94b) main_cset6_slider_pane_t4_ParamLimits

0x991f,	// (0x0008f94b) main_cset6_slider_pane_t4

0x994a,	// (0x0008f976) main_cset6_slider_pane_t5_ParamLimits

0x994a,	// (0x0008f976) main_cset6_slider_pane_t5

0xd232,	// (0x0009325e) main_cset6_slider_pane_t7_ParamLimits

0xd232,	// (0x0009325e) main_cset6_slider_pane_t7

0x9975,	// (0x0008f9a1) main_cset6_slider_pane_t8_ParamLimits

0x9975,	// (0x0008f9a1) main_cset6_slider_pane_t8

0x9999,	// (0x0008f9c5) main_cset6_slider_pane_t9_ParamLimits

0x9999,	// (0x0008f9c5) main_cset6_slider_pane_t9

0x99bd,	// (0x0008f9e9) main_cset6_slider_pane_t10_ParamLimits

0x99bd,	// (0x0008f9e9) main_cset6_slider_pane_t10

0x99e1,	// (0x0008fa0d) main_cset6_slider_pane_t11_ParamLimits

0x99e1,	// (0x0008fa0d) main_cset6_slider_pane_t11

0xd268,	// (0x00093294) main_cset6_slider_pane_t14_ParamLimits

0xd268,	// (0x00093294) main_cset6_slider_pane_t14

0xd2a1,	// (0x000932cd) main_cset6_slider_pane_t15_ParamLimits

0xd2a1,	// (0x000932cd) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00095be3) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00095be3) main_cset6_slider_pane_t

0xca70,	// (0x00092a9c) cset_slider_pane_g1_copy1

0xca79,	// (0x00092aa5) cset_slider_pane_g2_copy1

0xca82,	// (0x00092aae) cset_slider_pane_g3_copy1

0xe637,	// (0x00094663) bg_popup_sub_pane_cp011_copy1

0xd2da,	// (0x00093306) main_cset_text_pane_g1_copy1

0xcb0b,	// (0x00092b37) main_cset_text_pane_t1_copy1

0xcb19,	// (0x00092b45) main_cset_text_pane_t2_copy1

0xcb27,	// (0x00092b53) main_cset_text_pane_t3_copy1

0xcb35,	// (0x00092b61) main_cset_text_pane_t4_copy1

0xcb43,	// (0x00092b6f) main_cset_text_pane_t5_copy1

0xd2e2,	// (0x0009330e) main_cset_text_pane_t6_copy1

0xd2f0,	// (0x0009331c) main_cset_text_pane_t7_copy1

0x97ab,	// (0x0008f7d7) main_cset_text2_pane_t1_copy1

0xe641,	// (0x0009466d) main_ncimui_pane

0x6135,	// (0x0008c161) popup_query_ncimui_window_ParamLimits

0x6135,	// (0x0008c161) popup_query_ncimui_window

0xbcb7,	// (0x00091ce3) field_cale_ev2_pane_g4_ParamLimits

0xbcb7,	// (0x00091ce3) field_cale_ev2_pane_g4

0x7d1b,	// (0x0008dd47) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7d1b,	// (0x0008dd47) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000958c1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000958c1) cell_video_dialer_keypad_pane_g

0x7d33,	// (0x0008dd5f) cell_video_dialer_keypad_pane_t1

0xe637,	// (0x00094663) bg_popup_window_pane_cp012

0x38ba,	// (0x000898e6) heading_pane_cp06

0xd31c,	// (0x00093348) ncim_query_content_pane

0xe637,	// (0x00094663) bg_popup_heading_pane_cp01

0xd324,	// (0x00093350) ncim_heading_pane_t1

0xd332,	// (0x0009335e) ncim_indicator_popup_pane

0xd344,	// (0x00093370) ncim_query_button_pane

0xd358,	// (0x00093384) ncim_query_content_pane_t1

0xd36a,	// (0x00093396) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00095c27) ncim_query_content_pane_t

0xd3a4,	// (0x000933d0) ncim_query_list_pane

0xd3b6,	// (0x000933e2) ncim_query_popup_pane

0xd332,	// (0x0009335e) ncim_indicator_popup_pane_ParamLimits

0x9b46,	// (0x0008fb72) ncim_query_content_pane_g1_ParamLimits

0x9b46,	// (0x0008fb72) ncim_query_content_pane_g1

0xd358,	// (0x00093384) ncim_query_content_pane_t1_ParamLimits

0xd36a,	// (0x00093396) ncim_query_content_pane_t2_ParamLimits

0x9b52,	// (0x0008fb7e) ncim_query_content_pane_t3_ParamLimits

0x9b52,	// (0x0008fb7e) ncim_query_content_pane_t3

0x9b7a,	// (0x0008fba6) ncim_query_content_pane_t4_ParamLimits

0x9b7a,	// (0x0008fba6) ncim_query_content_pane_t4

0x9ba2,	// (0x0008fbce) ncim_query_content_pane_t5_ParamLimits

0x9ba2,	// (0x0008fbce) ncim_query_content_pane_t5

0xd37c,	// (0x000933a8) ncim_query_content_pane_t6_ParamLimits

0xd37c,	// (0x000933a8) ncim_query_content_pane_t6

0xfbfb,	// (0x00095c27) ncim_query_content_pane_t_ParamLimits

0xd3a4,	// (0x000933d0) ncim_query_list_pane_ParamLimits

0xd3b6,	// (0x000933e2) ncim_query_popup_pane_ParamLimits

0xd3ca,	// (0x000933f6) wait_bar_pane_cp04

0xe637,	// (0x00094663) input_focus_pane_cp011

0xd3d2,	// (0x000933fe) ncim_query_popup_pane_t1

0xd3e0,	// (0x0009340c) ncim_list_query_list_pane_ParamLimits

0xd3e0,	// (0x0009340c) ncim_list_query_list_pane

0xe637,	// (0x00094663) bg_button_pane_cp027

0xd3ed,	// (0x00093419) ncim_query_button_pane_g1

0xe637,	// (0x00094663) list_highlight_pane_cp012

0xd3f7,	// (0x00093423) ncim_list_query_list_pane_g1

0xd3ff,	// (0x0009342b) ncim_list_query_list_pane_t1

0xc732,	// (0x0009275e) cam4_indicators_pane_g3_ParamLimits

0xc732,	// (0x0009275e) cam4_indicators_pane_g3

0xc7b2,	// (0x000927de) vid4_indicators_pane_g5_ParamLimits

0xc7b2,	// (0x000927de) vid4_indicators_pane_g5

0xf02c,	// (0x00095058) vid4_progress_pane_g5_ParamLimits

0xf02c,	// (0x00095058) vid4_progress_pane_g5

0x9a34,	// (0x0008fa60) main_ncimui_pane_g1

0x9a9a,	// (0x0008fac6) ncimui_group_query_pane_ParamLimits

0x9a9a,	// (0x0008fac6) ncimui_group_query_pane

0x9ae2,	// (0x0008fb0e) ncimui_list_pane_ParamLimits

0x9ae2,	// (0x0008fb0e) ncimui_list_pane

0x9b09,	// (0x0008fb35) ncimui_text_pane_ParamLimits

0x9b09,	// (0x0008fb35) ncimui_text_pane

0x9bca,	// (0x0008fbf6) ncimui_text_pane_t1_ParamLimits

0x9bca,	// (0x0008fbf6) ncimui_text_pane_t1

0xd40d,	// (0x00093439) ncimui_list_single_graphic_pane_ParamLimits

0xd40d,	// (0x00093439) ncimui_list_single_graphic_pane

0x9be8,	// (0x0008fc14) ncimui_query_pane_ParamLimits

0x9be8,	// (0x0008fc14) ncimui_query_pane

0xe637,	// (0x00094663) list_highlight_pane_cp013

0xd41d,	// (0x00093449) ncim_list_query_list_pane_t1_copy1

0xd3f7,	// (0x00093423) ncim_list_single_graphic_pane_g1

0xd42b,	// (0x00093457) ncim_query_button_pane_cp01

0xd437,	// (0x00093463) ncim_query_entry_pane_ParamLimits

0xd437,	// (0x00093463) ncim_query_entry_pane

0xd44a,	// (0x00093476) ncimui_query_pane_g1

0xd456,	// (0x00093482) ncimui_query_pane_t1_ParamLimits

0xd456,	// (0x00093482) ncimui_query_pane_t1

0xe641,	// (0x0009466d) input_focus_pane_cp012

0xd46f,	// (0x0009349b) ncim_query_entry_pane_t1

0xed82,	// (0x00094dae) main_im_pane_ParamLimits

0xe641,	// (0x0009466d) main_mobtv_pane_ParamLimits

0xe641,	// (0x0009466d) main_mobtv_pane

0x98b1,	// (0x0008f8dd) main_cset6_slider_pane_g18_ParamLimits

0x98b1,	// (0x0008f8dd) main_cset6_slider_pane_g18

0x98bd,	// (0x0008f8e9) main_cset6_slider_pane_g19_ParamLimits

0x98bd,	// (0x0008f8e9) main_cset6_slider_pane_g19

0xf078,	// (0x000950a4) bg_main_mobtv_pane_ParamLimits

0xf078,	// (0x000950a4) bg_main_mobtv_pane

0x9bfb,	// (0x0008fc27) main_mobtv_info_pane

0x9c04,	// (0x0008fc30) main_mobtv_loading_pane_ParamLimits

0x9c04,	// (0x0008fc30) main_mobtv_loading_pane

0xd481,	// (0x000934ad) main_mobtv_pg_channel_list_pane

0xd48b,	// (0x000934b7) main_mobtv_pg_hdr_pane

0x9c11,	// (0x0008fc3d) main_mobtv_programe_curr_pane_ParamLimits

0x9c11,	// (0x0008fc3d) main_mobtv_programe_curr_pane

0x9c1e,	// (0x0008fc4a) main_mobtv_programe_next_pane_ParamLimits

0x9c1e,	// (0x0008fc4a) main_mobtv_programe_next_pane

0xd494,	// (0x000934c0) popup_mobtv_noti_window

0xb9e6,	// (0x00091a12) main_tv_pg_hdr_pane_g1

0xd49c,	// (0x000934c8) main_tv_pg_hdr_pane_g2

0xd4a4,	// (0x000934d0) main_tv_pg_hdr_pane_g3

0xd4ac,	// (0x000934d8) main_tv_pg_hdr_pane_g4

0xd4b4,	// (0x000934e0) main_tv_pg_hdr_pane_g5

0xd4be,	// (0x000934ea) main_tv_pg_hdr_pane_g6

0xd4c8,	// (0x000934f4) main_tv_pg_hdr_pane_g7

0xd4d2,	// (0x000934fe) main_tv_pg_hdr_pane_g8

0xd4dc,	// (0x00093508) main_tv_pg_hdr_pane_g9

0xd4e6,	// (0x00093512) main_tv_pg_hdr_pane_g10

0xd4f0,	// (0x0009351c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00095c34) main_tv_pg_hdr_pane_g

0xd4fa,	// (0x00093526) main_tv_pg_hdr_pane_t1

0xd508,	// (0x00093534) main_tv_pg_hdr_pane_t2

0xd516,	// (0x00093542) main_tv_pg_hdr_pane_t3

0xd526,	// (0x00093552) main_tv_pg_hdr_pane_t4

0xd536,	// (0x00093562) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00095c4b) main_tv_pg_hdr_pane_t

0xd546,	// (0x00093572) single_mobtv_pg_channel_pane_ParamLimits

0xd546,	// (0x00093572) single_mobtv_pg_channel_pane

0xd558,	// (0x00093584) single_mobtv_pg_channel_table_pane

0xd561,	// (0x0009358d) single_mobtv_pg_channel_thumb_pane

0xd56a,	// (0x00093596) single_tv_pg_channel_pane_g1

0xd573,	// (0x0009359f) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00095c56) single_tv_pg_channel_pane_g

0xbc52,	// (0x00091c7e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbc52,	// (0x00091c7e) bg_single_mobtv_pg_channel_thumb_pane

0xd57c,	// (0x000935a8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd57c,	// (0x000935a8) single_mobtv_pg_channel_thumb_pane_g1

0xd58a,	// (0x000935b6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd58a,	// (0x000935b6) single_mobtv_pg_channel_thumb_pane_g2

0xd596,	// (0x000935c2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd596,	// (0x000935c2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00095c5b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00095c5b) single_mobtv_pg_channel_thumb_pane_g

0xd5a2,	// (0x000935ce) single_mobtv_pg_channel_thumb_pane_t1

0xd5b0,	// (0x000935dc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00095c62) single_mobtv_pg_channel_thumb_pane_t

0xb9e6,	// (0x00091a12) bg_single_mobtv_pg_channel_table_pane_g1

0xb9e6,	// (0x00091a12) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00095708) bg_single_mobtv_pg_channel_table_pane_g

0xd5be,	// (0x000935ea) single_mobtv_pg_channel_table_pane_t1

0xd5cc,	// (0x000935f8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00095c67) single_mobtv_pg_channel_table_pane_t

0x9c33,	// (0x0008fc5f) main_mobtv_info_pane_g1_ParamLimits

0x9c33,	// (0x0008fc5f) main_mobtv_info_pane_g1

0x9c51,	// (0x0008fc7d) main_mobtv_info_pane_t1_ParamLimits

0x9c51,	// (0x0008fc7d) main_mobtv_info_pane_t1

0x9cc9,	// (0x0008fcf5) main_mobtv_info_pane_t2_ParamLimits

0x9cc9,	// (0x0008fcf5) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00095c71) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00095c71) main_mobtv_info_pane_t

0x9d58,	// (0x0008fd84) wait_bar_pane_cp05

0x9d6a,	// (0x0008fd96) main_mobtv_loading_pane_g1_ParamLimits

0x9d6a,	// (0x0008fd96) main_mobtv_loading_pane_g1

0x9d7d,	// (0x0008fda9) main_mobtv_loading_pane_g2_ParamLimits

0x9d7d,	// (0x0008fda9) main_mobtv_loading_pane_g2

0x9d89,	// (0x0008fdb5) main_mobtv_loading_pane_g3_ParamLimits

0x9d89,	// (0x0008fdb5) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00095c78) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00095c78) main_mobtv_loading_pane_g

0xd5da,	// (0x00093606) main_mobtv_loading_pane_t1_ParamLimits

0xd5da,	// (0x00093606) main_mobtv_loading_pane_t1

0xd5f2,	// (0x0009361e) main_mobtv_loading_pane_t2_ParamLimits

0xd5f2,	// (0x0009361e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00095c7f) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00095c7f) main_mobtv_loading_pane_t

0x9d9c,	// (0x0008fdc8) wait_bar_pane_cp06_ParamLimits

0x9d9c,	// (0x0008fdc8) wait_bar_pane_cp06

0xd616,	// (0x00093642) main_mobtv_programe_curr_pane_t1

0xd624,	// (0x00093650) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00095c84) main_mobtv_programe_curr_pane_t

0xd632,	// (0x0009365e) main_mobtv_programe_next_pane_t1

0xd640,	// (0x0009366c) main_mobtv_programe_next_pane_t2

0xd64e,	// (0x0009367a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x00095c89) main_mobtv_programe_next_pane_t

0xe637,	// (0x00094663) bg_popup_mobtv_noti_window_pane

0xd65c,	// (0x00093688) popup_mobtv_noti_window_g1

0xd664,	// (0x00093690) popup_mobtv_noti_window_t1

0xd672,	// (0x0009369e) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00095c90) popup_mobtv_noti_window_t

0xb9e6,	// (0x00091a12) bg_popup_mobtv_noti_window_pane_g1

0xe637,	// (0x00094663) sc_clock_pane

0xe637,	// (0x00094663) main_fs_bigclock_pane

0x94fc,	// (0x0008f528) blid2_tripm_pane_t4_ParamLimits

0x94fc,	// (0x0008f528) blid2_tripm_pane_t4

0x9dab,	// (0x0008fdd7) sc_clock_pane_g1_ParamLimits

0x9dab,	// (0x0008fdd7) sc_clock_pane_g1

0x9dbd,	// (0x0008fde9) sc_clock_pane_t1_ParamLimits

0x9dbd,	// (0x0008fde9) sc_clock_pane_t1

0x9ddf,	// (0x0008fe0b) sc_clock_pane_t2_ParamLimits

0x9ddf,	// (0x0008fe0b) sc_clock_pane_t2

0x9df7,	// (0x0008fe23) sc_clock_pane_t3_ParamLimits

0x9df7,	// (0x0008fe23) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x00095c95) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x00095c95) sc_clock_pane_t

0xa765,	// (0x00090791) main_fs_bigclock_indicator_pane_ParamLimits

0xa765,	// (0x00090791) main_fs_bigclock_indicator_pane

0x9e97,	// (0x0008fec3) main_fs_bigclock_pane_g1_ParamLimits

0x9e97,	// (0x0008fec3) main_fs_bigclock_pane_g1

0xa771,	// (0x0009079d) main_fs_bigclock_pane_t1_ParamLimits

0xa771,	// (0x0009079d) main_fs_bigclock_pane_t1

0xa783,	// (0x000907af) main_fs_bigclock_pane_t2_ParamLimits

0xa783,	// (0x000907af) main_fs_bigclock_pane_t2

0xa797,	// (0x000907c3) main_fs_bigclock_pane_t3_ParamLimits

0xa797,	// (0x000907c3) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00095e9f) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00095e9f) main_fs_bigclock_pane_t

0xe1cf,	// (0x000941fb) main_fs_bigclock_indicator_pane_g1

0xd34c,	// (0x00093378) ncim_query_content_pane_g2_ParamLimits

0xd34c,	// (0x00093378) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00095c22) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00095c22) ncim_query_content_pane_g

0x9e10,	// (0x0008fe3c) sc_clock_pane_t4_ParamLimits

0x9e10,	// (0x0008fe3c) sc_clock_pane_t4

0xe641,	// (0x0009466d) main_radioblah_pane

0xc666,	// (0x00092692) cell_call4_button_pane_t1_copy1_ParamLimits

0xc666,	// (0x00092692) cell_call4_button_pane_t1_copy1

0x9a4c,	// (0x0008fa78) main_ncimui_pane_t1_ParamLimits

0x9a4c,	// (0x0008fa78) main_ncimui_pane_t1

0x9a66,	// (0x0008fa92) main_ncimui_pane_t2_ParamLimits

0x9a66,	// (0x0008fa92) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00095c1b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00095c1b) main_ncimui_pane_t

0xd7b6,	// (0x000937e2) main_radioblah_anim_pane_ParamLimits

0xd7b6,	// (0x000937e2) main_radioblah_anim_pane

0xd7c7,	// (0x000937f3) main_radioblah_info_pane_ParamLimits

0xd7c7,	// (0x000937f3) main_radioblah_info_pane

0xd7db,	// (0x00093807) main_radioblah_pane_t1_ParamLimits

0xd7db,	// (0x00093807) main_radioblah_pane_t1

0xd7f7,	// (0x00093823) main_radioblah_pane_t2_ParamLimits

0xd7f7,	// (0x00093823) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x00095cb6) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x00095cb6) main_radioblah_pane_t

0x9eef,	// (0x0008ff1b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9eef,	// (0x0008ff1b) main_radioblah_rocker_ctrl_pane

0xd83f,	// (0x0009386b) main_radioblah_info_pane_t1_ParamLimits

0xd83f,	// (0x0009386b) main_radioblah_info_pane_t1

0x9f47,	// (0x0008ff73) main_radioblah_info_pane_t2_ParamLimits

0x9f47,	// (0x0008ff73) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00095cbf) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00095cbf) main_radioblah_info_pane_t

0xb9e6,	// (0x00091a12) main_radioblah_rocker_ctrl_pane_g1

0x9ff7,	// (0x00090023) main_radioblah_rocker_ctrl_pane_g2

0x9fff,	// (0x0009002b) main_radioblah_rocker_ctrl_pane_g3

0xa007,	// (0x00090033) main_radioblah_rocker_ctrl_pane_g4

0xa00f,	// (0x0009003b) main_radioblah_rocker_ctrl_pane_g5

0xa017,	// (0x00090043) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x00095cc8) main_radioblah_rocker_ctrl_pane_g

0x97ab,	// (0x0008f7d7) main_cset_text2_pane_t1_copy1_ParamLimits

0xc6f0,	// (0x0009271c) cam4_image_uncrop_qvga_pane

0xc75b,	// (0x00092787) vid4_image_uncrop_qcif_pane

0xf06a,	// (0x00095096) cam6_image_uncrop_qvga_pane_ParamLimits

0xf06a,	// (0x00095096) cam6_image_uncrop_qvga_pane

0xd053,	// (0x0009307f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd053,	// (0x0009307f) vid6_image_uncrop_qcif_pane

0xe637,	// (0x00094663) bg_popup_preview_window_pane_cp03

0xd2fe,	// (0x0009332a) list_cset_text2_pane

0xd306,	// (0x00093332) main_cset6_text2_pane_g1

0xd30e,	// (0x0009333a) main_cset6_text2_pane_t1

0xa01f,	// (0x0009004b) list_cset_text2_pane_t1_ParamLimits

0xa01f,	// (0x0009004b) list_cset_text2_pane_t1

0xe641,	// (0x0009466d) main_radioblah_pane_ParamLimits

0x9d44,	// (0x0008fd70) main_mobtv_info_pane_t3_ParamLimits

0x9d44,	// (0x0008fd70) main_mobtv_info_pane_t3

0x9edd,	// (0x0008ff09) main_radioblah_pane_g1

0x9f17,	// (0x0008ff43) main_radioblah_info_pane_g1

0x9f9c,	// (0x0008ffc8) main_radioblah_info_pane_t3_ParamLimits

0x9f9c,	// (0x0008ffc8) main_radioblah_info_pane_t3

0x335f,	// (0x0008938b) highlight_cell_cale_month_pane_ParamLimits

0x335f,	// (0x0008938b) highlight_cell_cale_month_pane

0xe637,	// (0x00094663) main_phob_fisheye_pane

0xbd86,	// (0x00091db2) scroll_pane_cp0031_ParamLimits

0xbd86,	// (0x00091db2) scroll_pane_cp0031

0xd161,	// (0x0009318d) wait_bar_pane_cp08_ParamLimits

0x9830,	// (0x0008f85c) cset_list_set_pane_copy1_ParamLimits

0xd879,	// (0x000938a5) highlight_cell_cale_month_pane_g1

0xa038,	// (0x00090064) highlight_cell_cale_month_pane_t1

0xcdd3,	// (0x00092dff) list_gen_pane_cp01

0xc973,	// (0x0009299f) scroll_pane_01

0xf086,	// (0x000950b2) list_single_double_fisheye_pane

0x0821,	// (0x0008684d) list_double_fisheye_pane_g1_ParamLimits

0x0821,	// (0x0008684d) list_double_fisheye_pane_g1

0x082d,	// (0x00086859) list_double_fisheye_pane_g2_ParamLimits

0x082d,	// (0x00086859) list_double_fisheye_pane_g2

0xa046,	// (0x00090072) list_double_fisheye_pane_g3_ParamLimits

0xa046,	// (0x00090072) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00095cd5) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00095cd5) list_double_fisheye_pane_g

0x085e,	// (0x0008688a) list_double_fisheye_pane_t1_ParamLimits

0x085e,	// (0x0008688a) list_double_fisheye_pane_t1

0x0879,	// (0x000868a5) list_double_fisheye_pane_t2_ParamLimits

0x0879,	// (0x000868a5) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00095ce0) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00095ce0) list_double_fisheye_pane_t

0xe637,	// (0x00094663) main_call5_pane

0x9e3b,	// (0x0008fe67) sc_swipe_pane_ParamLimits

0x9e3b,	// (0x0008fe67) sc_swipe_pane

0xa065,	// (0x00090091) call5_image_pane_ParamLimits

0xa065,	// (0x00090091) call5_image_pane

0xa082,	// (0x000900ae) call5_swipe_1_pane_ParamLimits

0xa082,	// (0x000900ae) call5_swipe_1_pane

0xa095,	// (0x000900c1) call5_swipe_2_pane_ParamLimits

0xa095,	// (0x000900c1) call5_swipe_2_pane

0xa0c0,	// (0x000900ec) popup_call5_audio_first_window_ParamLimits

0xa0c0,	// (0x000900ec) popup_call5_audio_first_window

0xbc52,	// (0x00091c7e) call5_swipe_1_pane_g1_ParamLimits

0xbc52,	// (0x00091c7e) call5_swipe_1_pane_g1

0xd881,	// (0x000938ad) call5_swipe_1_pane_g2_ParamLimits

0xd881,	// (0x000938ad) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00095ce5) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00095ce5) call5_swipe_1_pane_g

0xd88d,	// (0x000938b9) call5_swipe_1_pane_t1_ParamLimits

0xd88d,	// (0x000938b9) call5_swipe_1_pane_t1

0xbc52,	// (0x00091c7e) call5_swipe_2_pane_g1_ParamLimits

0xbc52,	// (0x00091c7e) call5_swipe_2_pane_g1

0xd8a2,	// (0x000938ce) call5_swipe_2_pane_g2_ParamLimits

0xd8a2,	// (0x000938ce) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x00095cea) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x00095cea) call5_swipe_2_pane_g

0xd8ae,	// (0x000938da) call5_swipe_2_pane_t1_ParamLimits

0xd8ae,	// (0x000938da) call5_swipe_2_pane_t1

0xd8c3,	// (0x000938ef) sc_swipe_pane_g1_ParamLimits

0xd8c3,	// (0x000938ef) sc_swipe_pane_g1

0xd8d0,	// (0x000938fc) sc_swipe_pane_g2_ParamLimits

0xd8d0,	// (0x000938fc) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00095cef) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00095cef) sc_swipe_pane_g

0xd8dc,	// (0x00093908) sc_swipe_pane_t1_ParamLimits

0xd8dc,	// (0x00093908) sc_swipe_pane_t1

0xe637,	// (0x00094663) main_cmail_launcher_pane

0xa0d1,	// (0x000900fd) aid_size_cell_cmail_l_ParamLimits

0xa0d1,	// (0x000900fd) aid_size_cell_cmail_l

0xa0eb,	// (0x00090117) grid_cmail_l_pane_ParamLimits

0xa0eb,	// (0x00090117) grid_cmail_l_pane

0xa106,	// (0x00090132) cell_cmail_l_pane_ParamLimits

0xa106,	// (0x00090132) cell_cmail_l_pane

0xa12c,	// (0x00090158) cell_cmail_l_pane_g1_ParamLimits

0xa12c,	// (0x00090158) cell_cmail_l_pane_g1

0xa138,	// (0x00090164) cell_cmail_l_pane_t1_ParamLimits

0xa138,	// (0x00090164) cell_cmail_l_pane_t1

0xd8f1,	// (0x0009391d) cell_cmail_l_pane_t2_ParamLimits

0xd8f1,	// (0x0009391d) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00095cf4) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00095cf4) cell_cmail_l_pane_t

0xe641,	// (0x0009466d) grid_highlight_pane_cp018_ParamLimits

0xe641,	// (0x0009466d) grid_highlight_pane_cp018

0x10ea,	// (0x00087116) main2_pane_ParamLimits

0x10ea,	// (0x00087116) main2_pane

0xee1b,	// (0x00094e47) popup_sp_fs_action_menu_bg_pane_g1

0xee23,	// (0x00094e4f) popup_sp_fs_action_menu_bg_pane_g2

0xee2b,	// (0x00094e57) popup_sp_fs_action_menu_bg_pane_g3

0xee33,	// (0x00094e5f) popup_sp_fs_action_menu_bg_pane_g4

0xee3b,	// (0x00094e67) popup_sp_fs_action_menu_bg_pane_g5

0xee43,	// (0x00094e6f) popup_sp_fs_action_menu_bg_pane_g6

0xee4b,	// (0x00094e77) popup_sp_fs_action_menu_bg_pane_g7

0xee53,	// (0x00094e7f) popup_sp_fs_action_menu_bg_pane_g8

0xee5b,	// (0x00094e87) popup_sp_fs_action_menu_bg_pane_g9

0xee63,	// (0x00094e8f) popup_sp_fs_action_menu_bg_pane_g10

0xee63,	// (0x00094e8f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000951b6) popup_sp_fs_action_menu_bg_pane_g

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g3_g1

0x20e7,	// (0x00088113) list_medium_line_x2_t3_g3_g2_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_t3_g3_g2

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00095264) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00095264) list_medium_line_x2_t3_g3_g

0x01b7,	// (0x000861e3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x01b7,	// (0x000861e3) list_medium_line_x2_t3_g3_t1

0x01cc,	// (0x000861f8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x01cc,	// (0x000861f8) list_medium_line_x2_t3_g3_t2

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009526b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009526b) list_medium_line_x2_t3_g3_t

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g2_g1

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00095272) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00095272) list_medium_line_x2_t3_g2_g

0x01f5,	// (0x00086221) list_medium_line_x2_t3_g2_t1_ParamLimits

0x01f5,	// (0x00086221) list_medium_line_x2_t3_g2_t1

0x020b,	// (0x00086237) list_medium_line_x2_t3_g2_t2_ParamLimits

0x020b,	// (0x00086237) list_medium_line_x2_t3_g2_t2

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00095277) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00095277) list_medium_line_x2_t3_g2_t

0x019f,	// (0x000861cb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t4_g4_g1

0x20f3,	// (0x0008811f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x20f3,	// (0x0008811f) list_medium_line_x2_t4_g4_g2

0x20e7,	// (0x00088113) list_medium_line_x2_t4_g4_g3_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_t4_g4_g3

0x021d,	// (0x00086249) list_medium_line_x2_t4_g4_g4_ParamLimits

0x021d,	// (0x00086249) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009527e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009527e) list_medium_line_x2_t4_g4_g

0x0229,	// (0x00086255) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0229,	// (0x00086255) list_medium_line_x2_t4_g4_t1

0x0243,	// (0x0008626f) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0243,	// (0x0008626f) list_medium_line_x2_t4_g4_t2

0x0259,	// (0x00086285) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0259,	// (0x00086285) list_medium_line_x2_t4_g4_t3

0x026e,	// (0x0008629a) list_medium_line_x2_t4_g4_t4_ParamLimits

0x026e,	// (0x0008629a) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00095287) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00095287) list_medium_line_x2_t4_g4_t

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g4_g1

0x20f3,	// (0x0008811f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x20f3,	// (0x0008811f) list_medium_line_x2_t2_g4_g2

0x20e7,	// (0x00088113) list_medium_line_x2_t2_g4_g3_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_t2_g4_g3

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000952ee) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000952ee) list_medium_line_x2_t2_g4_g

0x0280,	// (0x000862ac) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0280,	// (0x000862ac) list_medium_line_x2_t2_g4_t1

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000952f7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000952f7) list_medium_line_x2_t2_g4_t

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g3_g1

0x20e7,	// (0x00088113) list_medium_line_x2_t2_g3_g2_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_t2_g3_g2

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00095264) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00095264) list_medium_line_x2_t2_g3_g

0x0295,	// (0x000862c1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0295,	// (0x000862c1) list_medium_line_x2_t2_g3_t1

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000952fc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000952fc) list_medium_line_x2_t2_g3_t

0x36f0,	// (0x0008971c) main_sp_fs_list_pane_ParamLimits

0x36f0,	// (0x0008971c) main_sp_fs_list_pane

0xb299,	// (0x000912c5) sp_fs_scroll_pane_ParamLimits

0xb299,	// (0x000912c5) sp_fs_scroll_pane

0x02aa,	// (0x000862d6) list_medium_line_x2_t3_t1

0x02ba,	// (0x000862e6) list_medium_line_x2_t3_t2

0x02c8,	// (0x000862f4) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00095347) list_medium_line_x2_t3_t

0x02d6,	// (0x00086302) list_medium_line_x3_t4_t1

0x02e6,	// (0x00086312) list_medium_line_x3_t4_t2

0x02f4,	// (0x00086320) list_medium_line_x3_t4_t3

0x02c8,	// (0x000862f4) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009534e) list_medium_line_x3_t4_t

0x0302,	// (0x0008632e) list_medium_line_x4_t5_t1

0x0312,	// (0x0008633e) list_medium_line_x4_t5_t2

0x02f4,	// (0x00086320) list_medium_line_x4_t5_t3

0x0320,	// (0x0008634c) list_medium_line_x4_t5_t4

0x02c8,	// (0x000862f4) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00095357) list_medium_line_x4_t5_t

0x019f,	// (0x000861cb) list_medium_line_t4_g4_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_t4_g4_g1

0x032e,	// (0x0008635a) list_medium_line_t4_g4_g2_ParamLimits

0x032e,	// (0x0008635a) list_medium_line_t4_g4_g2

0x033a,	// (0x00086366) list_medium_line_t4_g4_g3_ParamLimits

0x033a,	// (0x00086366) list_medium_line_t4_g4_g3

0x01ab,	// (0x000861d7) list_medium_line_t4_g4_g4_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00095362) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00095362) list_medium_line_t4_g4_g

0x0346,	// (0x00086372) list_medium_line_t4_g4_t1_ParamLimits

0x0346,	// (0x00086372) list_medium_line_t4_g4_t1

0x035b,	// (0x00086387) list_medium_line_t4_g4_t2_ParamLimits

0x035b,	// (0x00086387) list_medium_line_t4_g4_t2

0x0370,	// (0x0008639c) list_medium_line_t4_g4_t3_ParamLimits

0x0370,	// (0x0008639c) list_medium_line_t4_g4_t3

0x01e0,	// (0x0008620c) list_medium_line_t4_g4_t4_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009536b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009536b) list_medium_line_t4_g4_t

0x3a31,	// (0x00089a5d) chi_dic_find_pane_g1

0x5eff,	// (0x0008bf2b) main_tport_pane

0x0568,	// (0x00086594) list_medium_line_plain_t1

0x0576,	// (0x000865a2) list_medium_line_t2_g2_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t2_g2_g1

0x0582,	// (0x000865ae) list_medium_line_t2_g2_g2_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00095a2c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00095a2c) list_medium_line_t2_g2_g

0x058e,	// (0x000865ba) list_medium_line_t2_g2_t1_ParamLimits

0x058e,	// (0x000865ba) list_medium_line_t2_g2_t1

0x05a8,	// (0x000865d4) list_medium_line_t2_g2_t2_ParamLimits

0x05a8,	// (0x000865d4) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00095a31) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00095a31) list_medium_line_t2_g2_t

0xcddc,	// (0x00092e08) aid_sp_fs_list_icon_a_sm

0xf062,	// (0x0009508e) aid_sp_fs_list_icon_d

0x92bd,	// (0x0008f2e9) aid_sp_fs_text_primary

0xcde4,	// (0x00092e10) aid_sp_fs_text_secondary

0x92c6,	// (0x0008f2f2) list_medium_line

0x92c6,	// (0x0008f2f2) list_medium_line_g2

0x92c6,	// (0x0008f2f2) list_medium_line_g3

0x92c6,	// (0x0008f2f2) list_medium_line_plain

0x92c6,	// (0x0008f2f2) list_medium_line_plain_t2

0x92c6,	// (0x0008f2f2) list_medium_line_plain_t3

0x92c6,	// (0x0008f2f2) list_medium_line_right_icon

0x92c6,	// (0x0008f2f2) list_medium_line_right_iconx2

0x92c6,	// (0x0008f2f2) list_medium_line_t2

0x92c6,	// (0x0008f2f2) list_medium_line_t2_g2

0x92c6,	// (0x0008f2f2) list_medium_line_t2_g3

0x92c6,	// (0x0008f2f2) list_medium_line_t2_right_icon

0x92c6,	// (0x0008f2f2) list_medium_line_t2_right_iconx2

0x92c6,	// (0x0008f2f2) list_medium_line_t3

0x92c6,	// (0x0008f2f2) list_medium_line_t3_g2

0x92c6,	// (0x0008f2f2) list_medium_line_t3_g3

0x92c6,	// (0x0008f2f2) list_medium_line_t3_right_iconx2

0x92cf,	// (0x0008f2fb) list_medium_line_t4_g4

0x92c6,	// (0x0008f2f2) list_medium_line_x2

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t2_g2

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t2_g3

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t2_g4

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t3

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t3_g2

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t3_g3

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t3_g4

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t4_g2

0x92c6,	// (0x0008f2f2) list_medium_line_x2_t4_g4

0x92d8,	// (0x0008f304) list_medium_line_x3

0x92d8,	// (0x0008f304) list_medium_line_x3_t4

0x92d8,	// (0x0008f304) list_medium_line_x3_t4_g4

0x92cf,	// (0x0008f2fb) list_medium_line_x4_t4

0x92cf,	// (0x0008f2fb) list_medium_line_x4_t4_g7

0x92cf,	// (0x0008f2fb) list_medium_line_x4_t5

0x0734,	// (0x00086760) list_single_fs_dyc_pane_ParamLimits

0x0734,	// (0x00086760) list_single_fs_dyc_pane

0x019f,	// (0x000861cb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x4_t4_g7_g1

0x076c,	// (0x00086798) list_medium_line_x4_t4_g7_g2_ParamLimits

0x076c,	// (0x00086798) list_medium_line_x4_t4_g7_g2

0x9a05,	// (0x0008fa31) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9a05,	// (0x0008fa31) list_medium_line_x4_t4_g7_g3

0x9a14,	// (0x0008fa40) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9a14,	// (0x0008fa40) list_medium_line_x4_t4_g7_g4

0x0778,	// (0x000867a4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0778,	// (0x000867a4) list_medium_line_x4_t4_g7_g5

0x0787,	// (0x000867b3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0787,	// (0x000867b3) list_medium_line_x4_t4_g7_g6

0x0796,	// (0x000867c2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0796,	// (0x000867c2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00095bfc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00095bfc) list_medium_line_x4_t4_g7_g

0x07a2,	// (0x000867ce) list_medium_line_x4_t4_g7_t1_ParamLimits

0x07a2,	// (0x000867ce) list_medium_line_x4_t4_g7_t1

0x07b7,	// (0x000867e3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x07b7,	// (0x000867e3) list_medium_line_x4_t4_g7_t2

0x07cc,	// (0x000867f8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x07cc,	// (0x000867f8) list_medium_line_x4_t4_g7_t3

0x07e1,	// (0x0008680d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x07e1,	// (0x0008680d) list_medium_line_x4_t4_g7_t4

0x07f3,	// (0x0008681f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x07f3,	// (0x0008681f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00095c0b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00095c0b) list_medium_line_x4_t4_g7_t

0x0805,	// (0x00086831) list_single_dyc_row_pane_ParamLimits

0x0805,	// (0x00086831) list_single_dyc_row_pane

0xa052,	// (0x0009007e) call5_gesture_pane_ParamLimits

0xa052,	// (0x0009007e) call5_gesture_pane

0xa0a8,	// (0x000900d4) call5_windows_pane_ParamLimits

0xa0a8,	// (0x000900d4) call5_windows_pane

0xa14e,	// (0x0009017a) call5_swipe_1_pane_cp_ParamLimits

0xa14e,	// (0x0009017a) call5_swipe_1_pane_cp

0xa15a,	// (0x00090186) call5_swipe_2_pane_cp_ParamLimits

0xa15a,	// (0x00090186) call5_swipe_2_pane_cp

0xef47,	// (0x00094f73) call5_image_pane_cp

0xa166,	// (0x00090192) popup_call5_audio_first_window_cp_ParamLimits

0xa166,	// (0x00090192) popup_call5_audio_first_window_cp

0xd8c3,	// (0x000938ef) call5_swipe_1_pane_g1_cp_ParamLimits

0xd8c3,	// (0x000938ef) call5_swipe_1_pane_g1_cp

0xd903,	// (0x0009392f) call5_swipe_1_pane_g2_cp

0xd8dc,	// (0x00093908) call5_swipe_1_pane_t1_cp_ParamLimits

0xd8dc,	// (0x00093908) call5_swipe_1_pane_t1_cp

0xd8c3,	// (0x000938ef) call5_swipe_2_pane_g1_cp_ParamLimits

0xd8c3,	// (0x000938ef) call5_swipe_2_pane_g1_cp

0xd90b,	// (0x00093937) call5_swipe_2_pane_g2_cp

0xd913,	// (0x0009393f) call5_swipe_2_pane_t1_cp_ParamLimits

0xd913,	// (0x0009393f) call5_swipe_2_pane_t1_cp

0xe641,	// (0x0009466d) main_sp_fs_email_pane

0xd928,	// (0x00093954) main_sp_fs_listscroll_pane_te

0xa174,	// (0x000901a0) popup_sp_fs_action_menu_pane_ParamLimits

0xa174,	// (0x000901a0) popup_sp_fs_action_menu_pane

0xb9e6,	// (0x00091a12) bg_sp_fs_ctrlbar_pane_g1

0xd931,	// (0x0009395d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd93a,	// (0x00093966) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd943,	// (0x0009396f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb9e6,	// (0x00091a12) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x00095cf9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb7cb,	// (0x000917f7) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb7cb,	// (0x000917f7) bg_sp_fs_ctrlbar_ddmenu_pane

0xd94c,	// (0x00093978) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd94c,	// (0x00093978) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd958,	// (0x00093984) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd958,	// (0x00093984) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00095d02) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00095d02) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd964,	// (0x00093990) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd964,	// (0x00093990) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x089b,	// (0x000868c7) list_medium_line_t2_right_icon_g1

0x08a3,	// (0x000868cf) list_medium_line_t2_right_icon_t1

0x08b3,	// (0x000868df) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00095d07) list_medium_line_t2_right_icon_t

0xb4cb,	// (0x000914f7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb4cb,	// (0x000914f7) bg_sp_fs_ctrlbar_pane

0xa200,	// (0x0009022c) main_sp_fs_ctrlbar_button_pane_cp01

0xa20a,	// (0x00090236) main_sp_fs_ctrlbar_ddmenu_pane

0xd9b6,	// (0x000939e2) main_sp_fs_ctrlbar_pane_g1

0xd9c2,	// (0x000939ee) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00095d0c) main_sp_fs_ctrlbar_pane_g

0xd9ce,	// (0x000939fa) main_sp_fs_ctrlbar_pane_t1

0xa214,	// (0x00090240) main_sp_fs_ctrlbar_pane

0xa238,	// (0x00090264) main_sp_fs_listscroll_pane_te_cp01

0x08c5,	// (0x000868f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x08c5,	// (0x000868f1) popup_sp_fs_action_menu_pane_cp01

0xe641,	// (0x0009466d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe641,	// (0x0009466d) bg_sp_fs_highlight_list_pane_cp01

0xd9fe,	// (0x00093a2a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd9fe,	// (0x00093a2a) sp_fs_action_menu_list_gene_pane_g1

0xda0d,	// (0x00093a39) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xda0d,	// (0x00093a39) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00095d16) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00095d16) sp_fs_action_menu_list_gene_pane_g

0xda1a,	// (0x00093a46) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xda1a,	// (0x00093a46) sp_fs_action_menu_list_gene_pane_t1

0xda32,	// (0x00093a5e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xda32,	// (0x00093a5e) sp_fs_action_menu_list_gene_pane

0xda53,	// (0x00093a7f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xda53,	// (0x00093a7f) popup_sp_fs_action_menu_bg_pane

0xda61,	// (0x00093a8d) sp_fs_action_menu_list_pane_ParamLimits

0xda61,	// (0x00093a8d) sp_fs_action_menu_list_pane

0xf08f,	// (0x000950bb) sp_fs_scroll_pane_cp01_ParamLimits

0xf08f,	// (0x000950bb) sp_fs_scroll_pane_cp01

0x08f5,	// (0x00086921) list_medium_line_plain_t2_t1

0x0905,	// (0x00086931) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x00095d1b) list_medium_line_plain_t2_t

0x0915,	// (0x00086941) list_medium_line_plain_t3_t1

0x0925,	// (0x00086951) list_medium_line_plain_t3_t2

0x0933,	// (0x0008695f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00095d20) list_medium_line_plain_t3_t

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t2_g2_g1

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00095272) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00095272) list_medium_line_x2_t2_g2_g

0x0346,	// (0x00086372) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0346,	// (0x00086372) list_medium_line_x2_t2_g2_t1

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00095d27) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00095d27) list_medium_line_x2_t2_g2_t

0x019f,	// (0x000861cb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t4_g2_g1

0x0941,	// (0x0008696d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0941,	// (0x0008696d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x00095d2c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x00095d2c) list_medium_line_x2_t4_g2_g

0x0953,	// (0x0008697f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0953,	// (0x0008697f) list_medium_line_x2_t4_g2_t1

0x096a,	// (0x00086996) list_medium_line_x2_t4_g2_t2_ParamLimits

0x096a,	// (0x00086996) list_medium_line_x2_t4_g2_t2

0x097f,	// (0x000869ab) list_medium_line_x2_t4_g2_t3_ParamLimits

0x097f,	// (0x000869ab) list_medium_line_x2_t4_g2_t3

0x01e0,	// (0x0008620c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00095d31) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00095d31) list_medium_line_x2_t4_g2_t

0x0991,	// (0x000869bd) list_medium_line_t3_right_iconx2_g1

0x089b,	// (0x000868c7) list_medium_line_t3_right_iconx2_g2

0x0999,	// (0x000869c5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x00095d3a) list_medium_line_t3_right_iconx2_g

0x09a3,	// (0x000869cf) list_medium_line_t3_right_iconx2_t1

0x09b3,	// (0x000869df) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00095d41) list_medium_line_t3_right_iconx2_t

0x019f,	// (0x000861cb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x3_t4_g4_g1

0x20e7,	// (0x00088113) list_medium_line_x3_t4_g4_g2_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x3_t4_g4_g2

0x032e,	// (0x0008635a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x032e,	// (0x0008635a) list_medium_line_x3_t4_g4_g3

0xa258,	// (0x00090284) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa258,	// (0x00090284) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00095d46) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00095d46) list_medium_line_x3_t4_g4_g

0x09c1,	// (0x000869ed) list_medium_line_x3_t4_g4_t1_ParamLimits

0x09c1,	// (0x000869ed) list_medium_line_x3_t4_g4_t1

0x09d8,	// (0x00086a04) list_medium_line_x3_t4_g4_t2_ParamLimits

0x09d8,	// (0x00086a04) list_medium_line_x3_t4_g4_t2

0x035b,	// (0x00086387) list_medium_line_x3_t4_g4_t3_ParamLimits

0x035b,	// (0x00086387) list_medium_line_x3_t4_g4_t3

0x09f3,	// (0x00086a1f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x09f3,	// (0x00086a1f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00095d4f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00095d4f) list_medium_line_x3_t4_g4_t

0x0a10,	// (0x00086a3c) list_single_dyc_row_text_pane_t1_ParamLimits

0x0a10,	// (0x00086a3c) list_single_dyc_row_text_pane_t1

0x0a59,	// (0x00086a85) list_single_dyc_row_text_pane_t2_ParamLimits

0x0a59,	// (0x00086a85) list_single_dyc_row_text_pane_t2

0xda83,	// (0x00093aaf) list_single_dyc_row_text_pane_t3_ParamLimits

0xda83,	// (0x00093aaf) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00095d58) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00095d58) list_single_dyc_row_text_pane_t

0xdaa7,	// (0x00093ad3) list_single_dyc_row_pane_g1_ParamLimits

0xdaa7,	// (0x00093ad3) list_single_dyc_row_pane_g1

0xdab3,	// (0x00093adf) list_single_dyc_row_pane_g2_ParamLimits

0xdab3,	// (0x00093adf) list_single_dyc_row_pane_g2

0xdabf,	// (0x00093aeb) list_single_dyc_row_pane_g3_ParamLimits

0xdabf,	// (0x00093aeb) list_single_dyc_row_pane_g3

0xdacb,	// (0x00093af7) list_single_dyc_row_pane_g4_ParamLimits

0xdacb,	// (0x00093af7) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00095d65) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00095d65) list_single_dyc_row_pane_g

0xdad7,	// (0x00093b03) list_single_dyc_row_text_pane_ParamLimits

0xdad7,	// (0x00093b03) list_single_dyc_row_text_pane

0xe637,	// (0x00094663) bg_sp_fs_scroll_pane

0xdaf6,	// (0x00093b22) thumb_sp_fs_scroll_pane

0x0576,	// (0x000865a2) list_medium_line_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_g1

0x0b8e,	// (0x00086bba) list_medium_line_t1_ParamLimits

0x0b8e,	// (0x00086bba) list_medium_line_t1

0x019f,	// (0x000861cb) list_medium_line_x2_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_g1

0x20e7,	// (0x00088113) list_medium_line_x2_g2_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00095d6e) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00095d6e) list_medium_line_x2_g

0xdaff,	// (0x00093b2b) list_medium_line_x2_t1_ParamLimits

0xdaff,	// (0x00093b2b) list_medium_line_x2_t1

0x019f,	// (0x000861cb) list_medium_line_x3_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x3_g1

0x20e7,	// (0x00088113) list_medium_line_x3_g2_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00095d6e) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00095d6e) list_medium_line_x3_g

0xdaff,	// (0x00093b2b) list_medium_line_x3_t1_ParamLimits

0xdaff,	// (0x00093b2b) list_medium_line_x3_t1

0xdb15,	// (0x00093b41) thumb_sp_fs_scroll_pane_g1

0xdb1e,	// (0x00093b4a) thumb_sp_fs_scroll_pane_g2

0xdb27,	// (0x00093b53) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095d73) thumb_sp_fs_scroll_pane_g

0xdb15,	// (0x00093b41) bg_sp_fs_scroll_pane_g1

0xdb1e,	// (0x00093b4a) bg_sp_fs_scroll_pane_g2

0xdb27,	// (0x00093b53) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00095d73) bg_sp_fs_scroll_pane_g

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x019f,	// (0x000861cb) list_medium_line_x2_t3_g4_g1

0x20f3,	// (0x0008811f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x20f3,	// (0x0008811f) list_medium_line_x2_t3_g4_g2

0x20e7,	// (0x00088113) list_medium_line_x2_t3_g4_g3_ParamLimits

0x20e7,	// (0x00088113) list_medium_line_x2_t3_g4_g3

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x01ab,	// (0x000861d7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000952ee) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000952ee) list_medium_line_x2_t3_g4_g

0x0ba3,	// (0x00086bcf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ba3,	// (0x00086bcf) list_medium_line_x2_t3_g4_t1

0x0bbd,	// (0x00086be9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0bbd,	// (0x00086be9) list_medium_line_x2_t3_g4_t2

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x01e0,	// (0x0008620c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00095d7a) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00095d7a) list_medium_line_x2_t3_g4_t

0x0576,	// (0x000865a2) list_medium_line_g2_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_g2_g1

0x0582,	// (0x000865ae) list_medium_line_g2_g2_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00095a2c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00095a2c) list_medium_line_g2_g

0x0bd6,	// (0x00086c02) list_medium_line_g2_t1_ParamLimits

0x0bd6,	// (0x00086c02) list_medium_line_g2_t1

0x0576,	// (0x000865a2) list_medium_line_t3_g2_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t3_g2_g1

0x0582,	// (0x000865ae) list_medium_line_t3_g2_g2_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00095a2c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00095a2c) list_medium_line_t3_g2_g

0x0beb,	// (0x00086c17) list_medium_line_t3_g2_t1_ParamLimits

0x0beb,	// (0x00086c17) list_medium_line_t3_g2_t1

0x0c05,	// (0x00086c31) list_medium_line_t3_g2_t2_ParamLimits

0x0c05,	// (0x00086c31) list_medium_line_t3_g2_t2

0x0c1b,	// (0x00086c47) list_medium_line_t3_g2_t3_ParamLimits

0x0c1b,	// (0x00086c47) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00095d81) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00095d81) list_medium_line_t3_g2_t

0x089b,	// (0x000868c7) list_medium_line_right_icon_g1

0x0c32,	// (0x00086c5e) list_medium_line_right_icon_t1

0x0576,	// (0x000865a2) list_medium_line_t2_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t2_g1

0x0c40,	// (0x00086c6c) list_medium_line_t2_t1_ParamLimits

0x0c40,	// (0x00086c6c) list_medium_line_t2_t1

0x0c5a,	// (0x00086c86) list_medium_line_t2_t2_ParamLimits

0x0c5a,	// (0x00086c86) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00095d88) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00095d88) list_medium_line_t2_t

0x0576,	// (0x000865a2) list_medium_line_t3_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t3_g1

0x0c73,	// (0x00086c9f) list_medium_line_t3_t1_ParamLimits

0x0c73,	// (0x00086c9f) list_medium_line_t3_t1

0x0c8a,	// (0x00086cb6) list_medium_line_t3_t2_ParamLimits

0x0c8a,	// (0x00086cb6) list_medium_line_t3_t2

0x0c9f,	// (0x00086ccb) list_medium_line_t3_t3_ParamLimits

0x0c9f,	// (0x00086ccb) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00095d8d) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00095d8d) list_medium_line_t3_t

0x0576,	// (0x000865a2) list_medium_line_g3_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_g3_g1

0x0cb1,	// (0x00086cdd) list_medium_line_g3_g2_ParamLimits

0x0cb1,	// (0x00086cdd) list_medium_line_g3_g2

0x0582,	// (0x000865ae) list_medium_line_g3_g3_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00095d94) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00095d94) list_medium_line_g3_g

0x0cbd,	// (0x00086ce9) list_medium_line_g3_t1_ParamLimits

0x0cbd,	// (0x00086ce9) list_medium_line_g3_t1

0x0576,	// (0x000865a2) list_medium_line_t2_g3_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t2_g3_g1

0x0cb1,	// (0x00086cdd) list_medium_line_t2_g3_g2_ParamLimits

0x0cb1,	// (0x00086cdd) list_medium_line_t2_g3_g2

0x0582,	// (0x000865ae) list_medium_line_t2_g3_g3_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00095d94) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00095d94) list_medium_line_t2_g3_g

0x0cd2,	// (0x00086cfe) list_medium_line_t2_g3_t1_ParamLimits

0x0cd2,	// (0x00086cfe) list_medium_line_t2_g3_t1

0x0cec,	// (0x00086d18) list_medium_line_t2_g3_t2_ParamLimits

0x0cec,	// (0x00086d18) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00095d9b) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00095d9b) list_medium_line_t2_g3_t

0x0576,	// (0x000865a2) list_medium_line_t3_g3_g1_ParamLimits

0x0576,	// (0x000865a2) list_medium_line_t3_g3_g1

0x0cb1,	// (0x00086cdd) list_medium_line_t3_g3_g2_ParamLimits

0x0cb1,	// (0x00086cdd) list_medium_line_t3_g3_g2

0x0582,	// (0x000865ae) list_medium_line_t3_g3_g3_ParamLimits

0x0582,	// (0x000865ae) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00095d94) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00095d94) list_medium_line_t3_g3_g

0x0d0a,	// (0x00086d36) list_medium_line_t3_g3_t1_ParamLimits

0x0d0a,	// (0x00086d36) list_medium_line_t3_g3_t1

0x0d23,	// (0x00086d4f) list_medium_line_t3_g3_t2_ParamLimits

0x0d23,	// (0x00086d4f) list_medium_line_t3_g3_t2

0x0d39,	// (0x00086d65) list_medium_line_t3_g3_t3_ParamLimits

0x0d39,	// (0x00086d65) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00095da0) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00095da0) list_medium_line_t3_g3_t

0x0991,	// (0x000869bd) list_medium_line_right_iconx2_g1

0x089b,	// (0x000868c7) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095da7) list_medium_line_right_iconx2_g

0x0d53,	// (0x00086d7f) list_medium_line_right_iconx2_t1

0x0991,	// (0x000869bd) list_medium_line_t2_right_iconx2_g1

0x089b,	// (0x000868c7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00095da7) list_medium_line_t2_right_iconx2_g

0x0d61,	// (0x00086d8d) list_medium_line_t2_right_iconx2_t1

0x0d71,	// (0x00086d9d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00095dac) list_medium_line_t2_right_iconx2_t

0x0d83,	// (0x00086daf) list_medium_line_x4_t4_t1

0x0d91,	// (0x00086dbd) list_medium_line_x4_t4_t2

0x0da1,	// (0x00086dcd) list_medium_line_x4_t4_t3

0x0db1,	// (0x00086ddd) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00095db1) list_medium_line_x4_t4_t

0xa2a7,	// (0x000902d3) tport_appsw_pane_ParamLimits

0xa2a7,	// (0x000902d3) tport_appsw_pane

0xa2bf,	// (0x000902eb) tport_contact_pane_ParamLimits

0xa2bf,	// (0x000902eb) tport_contact_pane

0xa2d7,	// (0x00090303) tport_listscroll_pane_ParamLimits

0xa2d7,	// (0x00090303) tport_listscroll_pane

0xa2f1,	// (0x0009031d) cell_tport_appsw_pane_ParamLimits

0xa2f1,	// (0x0009031d) cell_tport_appsw_pane

0xc80a,	// (0x00092836) tport_appsw_pane_g1_ParamLimits

0xc80a,	// (0x00092836) tport_appsw_pane_g1

0xdb30,	// (0x00093b5c) tport_contact_pane_g1

0xd3d2,	// (0x000933fe) tport_contact_pane_t1

0xdb39,	// (0x00093b65) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00095dba) tport_contact_pane_t

0xdb47,	// (0x00093b73) list_tport_pane

0xdb50,	// (0x00093b7c) scroll_pane_cp_030

0xa339,	// (0x00090365) cell_tport_appsw_pane_g1

0xa349,	// (0x00090375) cell_tport_appsw_pane_t1

0xa357,	// (0x00090383) grid_highlight_pane_cp019

0xa35f,	// (0x0009038b) list_tport_double_graphic_pane_ParamLimits

0xa35f,	// (0x0009038b) list_tport_double_graphic_pane

0xe641,	// (0x0009466d) list_highlight_pane_cp023_ParamLimits

0xe641,	// (0x0009466d) list_highlight_pane_cp023

0xa36c,	// (0x00090398) list_tport_double_graphic_pane_g1_ParamLimits

0xa36c,	// (0x00090398) list_tport_double_graphic_pane_g1

0xa379,	// (0x000903a5) list_tport_double_graphic_pane_t1_ParamLimits

0xa379,	// (0x000903a5) list_tport_double_graphic_pane_t1

0xa38e,	// (0x000903ba) list_tport_double_graphic_pane_t2_ParamLimits

0xa38e,	// (0x000903ba) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00095dc6) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00095dc6) list_tport_double_graphic_pane_t

0xe637,	// (0x00094663) main_cale_note_pane

0x85e0,	// (0x0008e60c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x85e0,	// (0x0008e60c) cell_vitu2_function_top_wide_pane_cp01

0x9d58,	// (0x0008fd84) wait_bar_pane_cp05_ParamLimits

0xe641,	// (0x0009466d) listscroll_cmail_pane

0xdb59,	// (0x00093b85) list_cmail_pane

0xca8b,	// (0x00092ab7) list_cmail_body_pane

0xa3a0,	// (0x000903cc) list_single_cmail_header_caption_pane

0xa3b6,	// (0x000903e2) list_single_cmail_header_detail_pane_ParamLimits

0xa3b6,	// (0x000903e2) list_single_cmail_header_detail_pane

0xdb69,	// (0x00093b95) list_single_cmail_header_caption_pane_t1

0x0dc1,	// (0x00086ded) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0dc1,	// (0x00086ded) list_single_cmail_header_detail_pane_g1

0xf0b5,	// (0x000950e1) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b5,	// (0x000950e1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00095dcb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00095dcb) list_single_cmail_header_detail_pane_g

0xdb8d,	// (0x00093bb9) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdb8d,	// (0x00093bb9) list_single_cmail_header_detail_pane_t1

0xdbed,	// (0x00093c19) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdbed,	// (0x00093c19) list_single_cmail_header_editor_pane_bg

0xd573,	// (0x0009359f) list_cmail_body_pane_g1

0xdc04,	// (0x00093c30) list_cmail_body_pane_t1

0xc859,	// (0x00092885) list_single_cmail_header_editor_pane_bg_g1

0x2753,	// (0x0008877f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc869,	// (0x00092895) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc861,	// (0x0009288d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcabc,	// (0x00092ae8) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc889,	// (0x000928b5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc879,	// (0x000928a5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc881,	// (0x000928ad) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2733,	// (0x0008875f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa3df,	// (0x0009040b) calenote_gesture_pane_ParamLimits

0xa3df,	// (0x0009040b) calenote_gesture_pane

0xa3ff,	// (0x0009042b) calenote_window_pane_ParamLimits

0xa3ff,	// (0x0009042b) calenote_window_pane

0xdc12,	// (0x00093c3e) popup_note_window_cp01

0xa41b,	// (0x00090447) calenote_swipe_1_pane_ParamLimits

0xa41b,	// (0x00090447) calenote_swipe_1_pane

0xa15a,	// (0x00090186) calenote_swipe_2_pane_ParamLimits

0xa15a,	// (0x00090186) calenote_swipe_2_pane

0xd8c3,	// (0x000938ef) calenote_swipe_1_pane_g1_ParamLimits

0xd8c3,	// (0x000938ef) calenote_swipe_1_pane_g1

0xd8d0,	// (0x000938fc) calenote_swipe_1_pane_g2_ParamLimits

0xd8d0,	// (0x000938fc) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00095cef) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00095cef) calenote_swipe_1_pane_g

0xdc24,	// (0x00093c50) calenote_swipe_1_pane_t1_ParamLimits

0xdc24,	// (0x00093c50) calenote_swipe_1_pane_t1

0xd8c3,	// (0x000938ef) calenote_swipe_2_pane_g1_ParamLimits

0xd8c3,	// (0x000938ef) calenote_swipe_2_pane_g1

0xdc43,	// (0x00093c6f) calenote_swipe_2_pane_g2_ParamLimits

0xdc43,	// (0x00093c6f) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00095dd7) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00095dd7) calenote_swipe_2_pane_g

0xdc4f,	// (0x00093c7b) calenote_swipe_2_pane_t1_ParamLimits

0xdc4f,	// (0x00093c7b) calenote_swipe_2_pane_t1

0xe637,	// (0x00094663) main_mup_navstr_pane

0x72b0,	// (0x0008d2dc) main_mup3_pane_t7_ParamLimits

0x72b0,	// (0x0008d2dc) main_mup3_pane_t7

0xc3a7,	// (0x000923d3) main_mp4_pane_g6_ParamLimits

0xc3a7,	// (0x000923d3) main_mp4_pane_g6

0xc5cf,	// (0x000925fb) main_image3_pane_t4_ParamLimits

0xc5cf,	// (0x000925fb) main_image3_pane_t4

0xa430,	// (0x0009045c) popup_navstr_preview_pane_ParamLimits

0xa430,	// (0x0009045c) popup_navstr_preview_pane

0xa444,	// (0x00090470) scroll_navstr_pane_ParamLimits

0xa444,	// (0x00090470) scroll_navstr_pane

0xe637,	// (0x00094663) bg_popup_preview_window_pane_cp04

0xdc76,	// (0x00093ca2) popup_navstr_preview_pane_t1

0xa458,	// (0x00090484) scroll_navstr_pane_g1_ParamLimits

0xa458,	// (0x00090484) scroll_navstr_pane_g1

0xa46c,	// (0x00090498) scroll_navstr_pane_t1_ParamLimits

0xa46c,	// (0x00090498) scroll_navstr_pane_t1

0xdc1b,	// (0x00093c47) bg_button_pane_cp014

0xdc1b,	// (0x00093c47) bg_button_pane_cp030

0x0841,	// (0x0008686d) list_double_fisheye_pane_g4_ParamLimits

0x0841,	// (0x0008686d) list_double_fisheye_pane_g4

0x084d,	// (0x00086879) list_double_fisheye_pane_g5_ParamLimits

0x084d,	// (0x00086879) list_double_fisheye_pane_g5

0xb299,	// (0x000912c5) sp_fs_scroll_pane_cp03

0xd9b6,	// (0x000939e2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd9c2,	// (0x000939ee) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00095d0c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd9ce,	// (0x000939fa) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdb61,	// (0x00093b8d) sp_fs_scroll_pane_cp02

0xee86,	// (0x00094eb2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xee86,	// (0x00094eb2) popup_sp_fs_calendar_preview_list_single_pane

0xe637,	// (0x00094663) main_cam6_pano_pane

0xe641,	// (0x0009466d) main_mup3_pane_ParamLimits

0xe637,	// (0x00094663) main_phacti_pane

0x9c2b,	// (0x0008fc57) bg_button_pane_cp11

0x9c45,	// (0x0008fc71) main_mobtv_info_pane_g2_ParamLimits

0x9c45,	// (0x0008fc71) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00095c6c) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00095c6c) main_mobtv_info_pane_g

0x9e22,	// (0x0008fe4e) sc_clock_pane_t5_ParamLimits

0x9e22,	// (0x0008fe4e) sc_clock_pane_t5

0x9edd,	// (0x0008ff09) main_radioblah_pane_g1_ParamLimits

0xd80f,	// (0x0009383b) main_radioblah_pane_t3_ParamLimits

0xd80f,	// (0x0009383b) main_radioblah_pane_t3

0xd827,	// (0x00093853) main_radioblah_pane_t4_ParamLimits

0xd827,	// (0x00093853) main_radioblah_pane_t4

0x9f05,	// (0x0008ff31) main_radioblah_text_pane_ParamLimits

0x9f05,	// (0x0008ff31) main_radioblah_text_pane

0x9f17,	// (0x0008ff43) main_radioblah_info_pane_g1_ParamLimits

0x9fb0,	// (0x0008ffdc) main_radioblah_info_pane_t4_ParamLimits

0x9fb0,	// (0x0008ffdc) main_radioblah_info_pane_t4

0xe641,	// (0x0009466d) main_sp_fs_calendar_pane

0xa483,	// (0x000904af) main_phacti_pane_g1

0xa48b,	// (0x000904b7) phacti_note_pane_ParamLimits

0xa48b,	// (0x000904b7) phacti_note_pane

0xdc8d,	// (0x00093cb9) phacti_term_pane_ParamLimits

0xdc8d,	// (0x00093cb9) phacti_term_pane

0xdca2,	// (0x00093cce) phacti_note_pane_t1_ParamLimits

0xdca2,	// (0x00093cce) phacti_note_pane_t1

0xdcb9,	// (0x00093ce5) phacti_term_pane_g1

0xdcc1,	// (0x00093ced) phacti_term_pane_t1_ParamLimits

0xdcc1,	// (0x00093ced) phacti_term_pane_t1

0xdceb,	// (0x00093d17) popup_sp_fs_calendar_preview_list_single_pane_g1

0x20df,	// (0x0008810b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00095de1) popup_sp_fs_calendar_preview_list_single_pane_g

0xdcf3,	// (0x00093d1f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdcf3,	// (0x00093d1f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdd09,	// (0x00093d35) aid_popup_sp_fs_bg_corner_pane

0xb9e6,	// (0x00091a12) popup_sp_fs_calendar_preview_bg_pane_g1

0xe637,	// (0x00094663) popup_sp_fs_calendar_preview_bg_pane

0xdd11,	// (0x00093d3d) popup_sp_fs_calendar_preview_list_pane

0xb4cb,	// (0x000914f7) bg_main_sp_fs_cale_pane_ParamLimits

0xb4cb,	// (0x000914f7) bg_main_sp_fs_cale_pane

0xdd19,	// (0x00093d45) listscroll_cale_mrui_pane_ParamLimits

0xdd19,	// (0x00093d45) listscroll_cale_mrui_pane

0xdd2e,	// (0x00093d5a) listscroll_sp_fs_schedule_track_pane

0xdd37,	// (0x00093d63) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdd37,	// (0x00093d63) main_sp_fs_ctrlbar_pane_cp01

0xdd4a,	// (0x00093d76) main_sp_fs_ribbon_pane

0xdd52,	// (0x00093d7e) popup_sp_fs_cale_preview_window

0xa500,	// (0x0009052c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa500,	// (0x0009052c) list_single_sp_fs_schedule_track_pane

0xe641,	// (0x0009466d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe641,	// (0x0009466d) bg_sp_fs_highlight_list_pane_cp03

0xa513,	// (0x0009053f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa513,	// (0x0009053f) list_single_sp_fs_schedule_track_pane_g1

0xa51f,	// (0x0009054b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa51f,	// (0x0009054b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00095de6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00095de6) list_single_sp_fs_schedule_track_pane_g

0xa52b,	// (0x00090557) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa52b,	// (0x00090557) list_single_sp_fs_schedule_track_pane_t1

0xa545,	// (0x00090571) sp_fs_schedule_track_pane_ParamLimits

0xa545,	// (0x00090571) sp_fs_schedule_track_pane

0xdd64,	// (0x00093d90) sp_fs_schedule_track_pane_g1

0xdd6c,	// (0x00093d98) sp_fs_schedule_track_pane_g2

0xdd74,	// (0x00093da0) sp_fs_schedule_track_pane_g3

0xdd7c,	// (0x00093da8) sp_fs_schedule_track_pane_g4

0xdd84,	// (0x00093db0) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00095deb) sp_fs_schedule_track_pane_g

0xc859,	// (0x00092885) bg_sp_fs_schedule_viewer_highlight_g1

0x2753,	// (0x0008877f) bg_sp_fs_schedule_viewer_highlight_g2

0xc861,	// (0x0009288d) bg_sp_fs_schedule_viewer_highlight_g3

0xc869,	// (0x00092895) bg_sp_fs_schedule_viewer_highlight_g4

0xcabc,	// (0x00092ae8) bg_sp_fs_schedule_viewer_highlight_g5

0xc879,	// (0x000928a5) bg_sp_fs_schedule_viewer_highlight_g6

0xc881,	// (0x000928ad) bg_sp_fs_schedule_viewer_highlight_g7

0xc889,	// (0x000928b5) bg_sp_fs_schedule_viewer_highlight_g8

0x2733,	// (0x0008875f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00095df6) bg_sp_fs_schedule_viewer_highlight_g

0xe637,	// (0x00094663) bg_main_sp_fs_ribbon_pane

0xa556,	// (0x00090582) main_sp_fs_ribbon_pane_g1

0xdd8c,	// (0x00093db8) main_sp_fs_ribbon_pane_t1

0xa55f,	// (0x0009058b) main_sp_fs_ribbon_pane_t2

0xdd9b,	// (0x00093dc7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00095e09) main_sp_fs_ribbon_pane_t

0xddaa,	// (0x00093dd6) main_sp_fs_ribbon_scheduler_pane

0xddb2,	// (0x00093dde) bg_main_sp_fs_ribbon_pane_g1

0xddbb,	// (0x00093de7) bg_main_sp_fs_ribbon_pane_g2

0xddc4,	// (0x00093df0) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00095e10) bg_main_sp_fs_ribbon_pane_g

0xddcc,	// (0x00093df8) main_sp_fs_ribbon_scheduler_pane_g1

0xddd5,	// (0x00093e01) main_sp_fs_ribbon_scheduler_pane_g2

0xddde,	// (0x00093e0a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00095e17) main_sp_fs_ribbon_scheduler_pane_g

0xdde7,	// (0x00093e13) list_cale_mrui_pane

0xa56e,	// (0x0009059a) sp_fs_scroll_pane_cp07_ParamLimits

0xa56e,	// (0x0009059a) sp_fs_scroll_pane_cp07

0xa58a,	// (0x000905b6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa58a,	// (0x000905b6) bg_sp_fs_schedule_viewer_highlight

0xddf4,	// (0x00093e20) list_single_sp_fs_schedule_track_pane_cp01

0xddfc,	// (0x00093e28) list_sp_fs_schedule_track_pane

0xde04,	// (0x00093e30) sp_fs_scroll_pane_cp06_ParamLimits

0xde04,	// (0x00093e30) sp_fs_scroll_pane_cp06

0xb9e6,	// (0x00091a12) bgmain_sp_fs_calendar_pane_g1

0x0dd9,	// (0x00086e05) list_single_cale_mrui_pane_ParamLimits

0x0dd9,	// (0x00086e05) list_single_cale_mrui_pane

0xde16,	// (0x00093e42) list_single_cale_mrui_row_pane_ParamLimits

0xde16,	// (0x00093e42) list_single_cale_mrui_row_pane

0xde23,	// (0x00093e4f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xde23,	// (0x00093e4f) list_single_cale_mrui_row_pane_g1

0xde68,	// (0x00093e94) list_single_cale_mrui_row_pane_t1_ParamLimits

0xde68,	// (0x00093e94) list_single_cale_mrui_row_pane_t1

0x0dfa,	// (0x00086e26) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0dfa,	// (0x00086e26) list_single_cale_mrui_row_pane_t2

0xde7a,	// (0x00093ea6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xde7a,	// (0x00093ea6) list_single_cale_mrui_row_pane_t3

0xdea9,	// (0x00093ed5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdea9,	// (0x00093ed5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00095e25) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00095e25) list_single_cale_mrui_row_pane_t

0x0e62,	// (0x00086e8e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0e62,	// (0x00086e8e) list_single_cmail_header_editor_pane_bg_cp01

0x0e88,	// (0x00086eb4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0e88,	// (0x00086eb4) list_single_cmail_header_editor_pane_bg_cp02

0xa59a,	// (0x000905c6) main_radioblah_text_pane_t1_ParamLimits

0xa59a,	// (0x000905c6) main_radioblah_text_pane_t1

0xded8,	// (0x00093f04) cam6_indi_pane_cp01

0xdee0,	// (0x00093f0c) cam6_mode_pane_cp01

0xdee8,	// (0x00093f14) cam6_pano_pane

0xdef1,	// (0x00093f1d) cam6_zoom_pane_cp01

0xdef9,	// (0x00093f25) cam6_pano_image_pane

0xdf04,	// (0x00093f30) cam6_pano_pane_g1

0xd573,	// (0x0009359f) cam6_pano_pane_g2

0xdf0d,	// (0x00093f39) cam6_pano_pane_g3

0xdf16,	// (0x00093f42) cam6_pano_pane_g4

0xc00a,	// (0x00092036) cam6_pano_pane_g5

0xdf1f,	// (0x00093f4b) cam6_pano_pane_g6

0xdf29,	// (0x00093f55) cam6_pano_pane_g7

0xdf31,	// (0x00093f5d) cam6_pano_pane_g8

0xdf3a,	// (0x00093f66) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00095e2e) cam6_pano_pane_g

0xe637,	// (0x00094663) main_browser_tag_pane

0xdc6e,	// (0x00093c9a) grid_navstr_albumart_pane

0xdf45,	// (0x00093f71) cell_navstr_albumart_pane_ParamLimits

0xdf45,	// (0x00093f71) cell_navstr_albumart_pane

0xdf65,	// (0x00093f91) cell_navstr_albumart_pane_g1

0x5b58,	// (0x0008bb84) cell_navstr_albumart_pane_g2

0x5b68,	// (0x0008bb94) cell_navstr_albumart_pane_g3

0x5b60,	// (0x0008bb8c) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00095e41) cell_navstr_albumart_pane_g

0xa5b4,	// (0x000905e0) bt_list_pane_ParamLimits

0xa5b4,	// (0x000905e0) bt_list_pane

0xa5c8,	// (0x000905f4) bt_list_pane_t1

0xa5d7,	// (0x00090603) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00095e4a) bt_list_pane_t

0xe637,	// (0x00094663) main_cale_prevew_pane

0xa5e6,	// (0x00090612) popup_cale_preview_window_ParamLimits

0xa5e6,	// (0x00090612) popup_cale_preview_window

0xe641,	// (0x0009466d) bg_popup_preview_window_pane_cp05_ParamLimits

0xe641,	// (0x0009466d) bg_popup_preview_window_pane_cp05

0xdf6d,	// (0x00093f99) list_cale_preview_pane_ParamLimits

0xdf6d,	// (0x00093f99) list_cale_preview_pane

0xa601,	// (0x0009062d) list_double_cale_preview_pane_ParamLimits

0xa601,	// (0x0009062d) list_double_cale_preview_pane

0xa613,	// (0x0009063f) list_single_cale_preview_pane_ParamLimits

0xa613,	// (0x0009063f) list_single_cale_preview_pane

0xa629,	// (0x00090655) list_single_cale_preview_pane_g1

0xa631,	// (0x0009065d) list_single_cale_preview_pane_t1_ParamLimits

0xa631,	// (0x0009065d) list_single_cale_preview_pane_t1

0xa646,	// (0x00090672) list_double_cale_preview_pane_g1

0xa64e,	// (0x0009067a) list_double_cale_preview_pane_t1_ParamLimits

0xa64e,	// (0x0009067a) list_double_cale_preview_pane_t1

0xa663,	// (0x0009068f) list_double_cale_preview_pane_t2_ParamLimits

0xa663,	// (0x0009068f) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00095e4f) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00095e4f) list_double_cale_preview_pane_t

0xe637,	// (0x00094663) main_ezdial_pane

0xe641,	// (0x0009466d) main_sp_fs_email_pane_ParamLimits

0xa1b8,	// (0x000901e4) cmail_ddmenu_btn01_pane_ParamLimits

0xa1b8,	// (0x000901e4) cmail_ddmenu_btn01_pane

0xa1cb,	// (0x000901f7) cmail_ddmenu_btn02_pane_ParamLimits

0xa1cb,	// (0x000901f7) cmail_ddmenu_btn02_pane

0xa1ee,	// (0x0009021a) cmail_ddmenu_btn03_pane_ParamLimits

0xa1ee,	// (0x0009021a) cmail_ddmenu_btn03_pane

0xa214,	// (0x00090240) main_sp_fs_ctrlbar_pane_ParamLimits

0xa238,	// (0x00090264) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xca8b,	// (0x00092ab7) list_cmail_body_pane_ParamLimits

0xdb77,	// (0x00093ba3) bg_button_pane_cp12

0xdb80,	// (0x00093bac) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdb80,	// (0x00093bac) list_single_cmail_header_detail_pane_g3

0xdbc9,	// (0x00093bf5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdbc9,	// (0x00093bf5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00095dd2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00095dd2) list_single_cmail_header_detail_pane_t

0xdcd6,	// (0x00093d02) phacti_term_pane_t2_ParamLimits

0xdcd6,	// (0x00093d02) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00095ddc) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00095ddc) phacti_term_pane_t

0xdf79,	// (0x00093fa5) aid_size_list_single_double

0xa67b,	// (0x000906a7) popup_ezdial_listscroll_window

0xa697,	// (0x000906c3) popup_number_entry_window_cp01

0xef47,	// (0x00094f73) bg_popup_call_pane_cp09

0xdf85,	// (0x00093fb1) ezdial_list_pane

0xdf8d,	// (0x00093fb9) scroll_pane_cp23

0xb4cb,	// (0x000914f7) bg_button_pane_cp028_ParamLimits

0xb4cb,	// (0x000914f7) bg_button_pane_cp028

0xa6a5,	// (0x000906d1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa6a5,	// (0x000906d1) cmail_ddmenu_btn01_pane_g1

0xa6b1,	// (0x000906dd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa6b1,	// (0x000906dd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00095e54) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00095e54) cmail_ddmenu_btn01_pane_g

0xdf95,	// (0x00093fc1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdf95,	// (0x00093fc1) cmail_ddmenu_btn01_pane_t1

0xb4cb,	// (0x000914f7) bg_button_pane_cp029_ParamLimits

0xb4cb,	// (0x000914f7) bg_button_pane_cp029

0xa6bd,	// (0x000906e9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa6bd,	// (0x000906e9) cmail_ddmenu_btn02_pane_g1

0xa6d6,	// (0x00090702) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa6d6,	// (0x00090702) cmail_ddmenu_btn02_pane_t1

0xe641,	// (0x0009466d) bg_button_pane_cp031_ParamLimits

0xe641,	// (0x0009466d) bg_button_pane_cp031

0xa6bd,	// (0x000906e9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa6bd,	// (0x000906e9) cmail_ddmenu_btn03_pane_g1

0xa6d6,	// (0x00090702) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa6d6,	// (0x00090702) cmail_ddmenu_btn03_pane_t1

0x7e57,	// (0x0008de83) cell_dialer2_keypad_pane_t1_ParamLimits

0x7e71,	// (0x0008de9d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7e71,	// (0x0008de9d) cell_dialer2_keypad_pane_t1_copy1

0x9a92,	// (0x0008fabe) ncimui_group_button_pane

0xe641,	// (0x0009466d) main_sp_fs_calendar_pane_ParamLimits

0xa3a0,	// (0x000903cc) list_single_cmail_header_caption_pane_ParamLimits

0xf0c1,	// (0x000950ed) aid_recal_txt_sm_pane

0xe637,	// (0x00094663) mian_recal_day_pane

0xdd52,	// (0x00093d7e) popup_sp_fs_cale_preview_window_ParamLimits

0xdfaa,	// (0x00093fd6) list_recal_day_pane

0xdfec,	// (0x00094018) list_single_recal_day_pane_ParamLimits

0xdfec,	// (0x00094018) list_single_recal_day_pane

0xdffe,	// (0x0009402a) list_single_recal_day_pane_g1_ParamLimits

0xdffe,	// (0x0009402a) list_single_recal_day_pane_g1

0xe00a,	// (0x00094036) list_single_recal_day_pane_g2_ParamLimits

0xe00a,	// (0x00094036) list_single_recal_day_pane_g2

0xe016,	// (0x00094042) list_single_recal_day_pane_g3_ParamLimits

0xe016,	// (0x00094042) list_single_recal_day_pane_g3

0x0ea8,	// (0x00086ed4) list_single_recal_day_pane_g4_ParamLimits

0x0ea8,	// (0x00086ed4) list_single_recal_day_pane_g4

0xe022,	// (0x0009404e) list_single_recal_day_pane_g5_ParamLimits

0xe022,	// (0x0009404e) list_single_recal_day_pane_g5

0xe02e,	// (0x0009405a) list_single_recal_day_pane_g6_ParamLimits

0xe02e,	// (0x0009405a) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00095e63) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00095e63) list_single_recal_day_pane_g

0xe042,	// (0x0009406e) list_single_recal_day_pane_t1

0xe054,	// (0x00094080) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00095e6e) list_single_recal_day_pane_t

0xa6fa,	// (0x00090726) ncimui_query_button_pane_ParamLimits

0xa6fa,	// (0x00090726) ncimui_query_button_pane

0xa70a,	// (0x00090736) ncimui_query_button_pane_t1_ParamLimits

0xa70a,	// (0x00090736) ncimui_query_button_pane_t1

0xe066,	// (0x00094092) ncimui_query_button_pane_t2_ParamLimits

0xe066,	// (0x00094092) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00095e73) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00095e73) ncimui_query_button_pane_t

0xa71d,	// (0x00090749) query_button_pane_ParamLimits

0xa71d,	// (0x00090749) query_button_pane

0xe637,	// (0x00094663) bg_button_pane_cp0028

0xe079,	// (0x000940a5) query_button_pane_t1

0x5eff,	// (0x0008bf2b) main_tport_pane_ParamLimits

0xa264,	// (0x00090290) bg_popup_window_pane_cp01_ParamLimits

0xa264,	// (0x00090290) bg_popup_window_pane_cp01

0xa27f,	// (0x000902ab) heading_pane_cp08_ParamLimits

0xa27f,	// (0x000902ab) heading_pane_cp08

0xa292,	// (0x000902be) heading_pane_cp07_ParamLimits

0xa292,	// (0x000902be) heading_pane_cp07

0xa339,	// (0x00090365) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00095dbf) cell_tport_appsw_pane_g

0x039d,	// (0x000863c9) input_candi_list_open_g1

0x352a,	// (0x00089556) list_cale_time_pane_g6_ParamLimits

0x352a,	// (0x00089556) list_cale_time_pane_g6

0x6cc8,	// (0x0008ccf4) aid_size_touch_calib_1_ParamLimits

0x6cc8,	// (0x0008ccf4) aid_size_touch_calib_1

0x6cda,	// (0x0008cd06) aid_size_touch_calib_2_ParamLimits

0x6cda,	// (0x0008cd06) aid_size_touch_calib_2

0x6cf2,	// (0x0008cd1e) aid_size_touch_calib_3_ParamLimits

0x6cf2,	// (0x0008cd1e) aid_size_touch_calib_3

0x6d10,	// (0x0008cd3c) aid_size_touch_calib_4_ParamLimits

0x6d10,	// (0x0008cd3c) aid_size_touch_calib_4

0x6d28,	// (0x0008cd54) main_touch_calib_button_group_pane_ParamLimits

0x6d28,	// (0x0008cd54) main_touch_calib_button_group_pane

0x6d40,	// (0x0008cd6c) main_touch_calib_pane_g1_ParamLimits

0x6d52,	// (0x0008cd7e) main_touch_calib_pane_g2_ParamLimits

0x6d64,	// (0x0008cd90) main_touch_calib_pane_g3_ParamLimits

0x6d76,	// (0x0008cda2) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0009577d) main_touch_calib_pane_g_ParamLimits

0x6d88,	// (0x0008cdb4) main_touch_calib_pane_t1_ParamLimits

0x6da2,	// (0x0008cdce) main_touch_calib_pane_t2_ParamLimits

0x6dbc,	// (0x0008cde8) main_touch_calib_pane_t3_ParamLimits

0x6dd0,	// (0x0008cdfc) main_touch_calib_pane_t4_ParamLimits

0x6de4,	// (0x0008ce10) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x00095786) main_touch_calib_pane_t_ParamLimits

0xbdaa,	// (0x00091dd6) list_single_fp_cale_pane_g3_ParamLimits

0xbdaa,	// (0x00091dd6) list_single_fp_cale_pane_g3

0xe641,	// (0x0009466d) bg_button_pane_cp012_ParamLimits

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp03_ParamLimits

0x8d94,	// (0x0008edc0) cell_vitu2_function_top_pane_g1_ParamLimits

0xe641,	// (0x0009466d) bg_vkb2_func_pane_cp04_ParamLimits

0x9a20,	// (0x0008fa4c) main_ncimui_button_group_pane_ParamLimits

0x9a20,	// (0x0008fa4c) main_ncimui_button_group_pane

0x9a80,	// (0x0008faac) main_ncimui_pane_t3_ParamLimits

0x9a80,	// (0x0008faac) main_ncimui_pane_t3

0xdc84,	// (0x00093cb0) phacti_button_group_pane

0xdf79,	// (0x00093fa5) aid_size_list_single_double_ParamLimits

0xa67b,	// (0x000906a7) popup_ezdial_listscroll_window_ParamLimits

0xa697,	// (0x000906c3) popup_number_entry_window_cp01_ParamLimits

0xa730,	// (0x0009075c) phacti_button_pane_ParamLimits

0xa730,	// (0x0009075c) phacti_button_pane

0xe637,	// (0x00094663) bg_button_pane_cp14

0xe087,	// (0x000940b3) phacti_button_pane_t1

0xa741,	// (0x0009076d) main_touch_calib_button_pane_ParamLimits

0xa741,	// (0x0009076d) main_touch_calib_button_pane

0xed82,	// (0x00094dae) bg_button_pane_cp18_ParamLimits

0xed82,	// (0x00094dae) bg_button_pane_cp18

0xe095,	// (0x000940c1) main_touch_calib_button_pane_t1_ParamLimits

0xe095,	// (0x000940c1) main_touch_calib_button_pane_t1

0xe0ab,	// (0x000940d7) main_touch_calib_button_pane_t2_ParamLimits

0xe0ab,	// (0x000940d7) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00095e78) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00095e78) main_touch_calib_button_pane_t

0xe637,	// (0x00094663) cell_ncimui_button_pane

0xe637,	// (0x00094663) bg_button_pane_cp032

0xe0c9,	// (0x000940f5) cell_ncimui_button_pane_t1

0xc5af,	// (0x000925db) image3_infobar_pane_ParamLimits

0xc5af,	// (0x000925db) image3_infobar_pane

0x9e4e,	// (0x0008fe7a) fs_bigclock_status_pane_ParamLimits

0x9e4e,	// (0x0008fe7a) fs_bigclock_status_pane

0x9e5b,	// (0x0008fe87) main_fs_bigclock_clock_pane_ParamLimits

0x9e5b,	// (0x0008fe87) main_fs_bigclock_clock_pane

0x9e7b,	// (0x0008fea7) main_fs_bigclock_indi_pane_ParamLimits

0x9e7b,	// (0x0008fea7) main_fs_bigclock_indi_pane

0x9ea5,	// (0x0008fed1) main_fs_bigclock_swipe_pane_ParamLimits

0x9ea5,	// (0x0008fed1) main_fs_bigclock_swipe_pane

0xe637,	// (0x00094663) main_fs_clock_dumped_data

0xd680,	// (0x000936ac) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd680,	// (0x000936ac) list_single_fs_bigclock_indicator_pane_g1

0xd69b,	// (0x000936c7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd69b,	// (0x000936c7) list_single_fs_bigclock_indicator_pane_g2

0xd6b5,	// (0x000936e1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd6b5,	// (0x000936e1) list_single_fs_bigclock_indicator_pane_g3

0xd6cf,	// (0x000936fb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd6cf,	// (0x000936fb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00095ca0) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00095ca0) list_single_fs_bigclock_indicator_pane_g

0xd6fa,	// (0x00093726) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd6fa,	// (0x00093726) list_single_fs_bigclock_indicator_pane_t1

0xd722,	// (0x0009374e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd722,	// (0x0009374e) list_single_fs_bigclock_indicator_pane_t2

0xd74a,	// (0x00093776) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd74a,	// (0x00093776) list_single_fs_bigclock_indicator_pane_t3

0xd772,	// (0x0009379e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd772,	// (0x0009379e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00095cab) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00095cab) list_single_fs_bigclock_indicator_pane_t

0xe0d7,	// (0x00094103) image3_infobar_fav_pane_ParamLimits

0xe0d7,	// (0x00094103) image3_infobar_fav_pane

0xe0e7,	// (0x00094113) image3_infobar_loc_pane_ParamLimits

0xe0e7,	// (0x00094113) image3_infobar_loc_pane

0xe0fb,	// (0x00094127) image3_infobar_time_pane_ParamLimits

0xe0fb,	// (0x00094127) image3_infobar_time_pane

0xb9e6,	// (0x00091a12) image3_infobar_time_pane_g1

0xe10b,	// (0x00094137) image3_infobar_time_pane_t1

0xb9e6,	// (0x00091a12) image3_infobar_loc_pane_g1

0xe119,	// (0x00094145) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00095e7d) image3_infobar_loc_pane_g

0xe121,	// (0x0009414d) image3_infobar_loc_pane_t1

0xb9e6,	// (0x00091a12) image3_infobar_fav_pane_g1

0xe12f,	// (0x0009415b) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00095e82) image3_infobar_fav_pane_g

0xe137,	// (0x00094163) fs_bigclock_status_battery_pane

0xe140,	// (0x0009416c) fs_bigclock_status_signal_pane

0xe149,	// (0x00094175) fs_bigclock_status_title_pane

0xe152,	// (0x0009417e) fs_bigclock_status_signal_pane_g1

0xe15b,	// (0x00094187) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00095e87) fs_bigclock_status_signal_pane_g

0xe163,	// (0x0009418f) fs_bigclock_status_battery_pane_g1

0xe16c,	// (0x00094198) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00095e8c) fs_bigclock_status_battery_pane_g

0xe174,	// (0x000941a0) fs_bigclock_status_title_pane_t1

0xb9e6,	// (0x00091a12) main_fs_bigclock_clock_pane_g1

0xe182,	// (0x000941ae) main_fs_bigclock_clock_pane_g2

0xe18b,	// (0x000941b7) main_fs_bigclock_clock_pane_g3

0xe18b,	// (0x000941b7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00095e91) main_fs_bigclock_clock_pane_g

0xe193,	// (0x000941bf) main_fs_bigclock_clock_pane_t1

0xa756,	// (0x00090782) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00095e9a) main_fs_bigclock_clock_pane_t

0xe1a1,	// (0x000941cd) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe1a1,	// (0x000941cd) list_single_fs_bigclock_indicator_pane

0xe1b2,	// (0x000941de) list_single_fs_bigclock_pane_ParamLimits

0xe1b2,	// (0x000941de) list_single_fs_bigclock_pane

0xe1d8,	// (0x00094204) main_fs_bigclock_indicator_pane_t1

0xe1e7,	// (0x00094213) list_single_fs_bigclock_pane_g1

0xe1ef,	// (0x0009421b) list_single_fs_bigclock_pane_t1

0xb9e6,	// (0x00091a12) main_fs_bigclock_swipe_pane_g1

0xe232,	// (0x0009425e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00095eab) main_fs_bigclock_swipe_pane_g

0xe23a,	// (0x00094266) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe23a,	// (0x00094266) main_fs_bigclock_swipe_pane_t1

0x380a,	// (0x00089836) call_type_pane_ParamLimits

0xe637,	// (0x00094663) main_btmg_pane

0xde4f,	// (0x00093e7b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xde4f,	// (0x00093e7b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00095e1e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00095e1e) list_single_cale_mrui_row_pane_g

0xdfd3,	// (0x00093fff) list_recal_vselct_arw_lo_pane

0xdfdb,	// (0x00094007) list_recal_vselct_arw_up_pane

0xdfe3,	// (0x0009400f) list_recal_vselct_pane

0xa7a9,	// (0x000907d5) btmg_button_pane

0xa7b3,	// (0x000907df) main_btmg_pane_g1

0xe637,	// (0x00094663) bg_button_pane_cp044

0xe257,	// (0x00094283) btmg_button_pane_t1

0xb4b7,	// (0x000914e3) aid_listscroll_gen

0xe641,	// (0x0009466d) main_cntbar_detail_pane

0xdb59,	// (0x00093b85) list_cmail_folder_pane

0xb299,	// (0x000912c5) sp_fs_scroll_pane_cp03_ParamLimits

0x0ec0,	// (0x00086eec) list_single_fs_dyc_pane_cp01_ParamLimits

0x0ec0,	// (0x00086eec) list_single_fs_dyc_pane_cp01

0xe265,	// (0x00094291) aid_size_cmail_indent

0xe26e,	// (0x0009429a) list_single_dyc_row_pane_cp01

0xa7ef,	// (0x0009081b) cntbar_detail_list_pane_ParamLimits

0xa7ef,	// (0x0009081b) cntbar_detail_list_pane

0xa83b,	// (0x00090867) main_cntbar_detail_cont_pane_ParamLimits

0xa83b,	// (0x00090867) main_cntbar_detail_cont_pane

0xb299,	// (0x000912c5) scroll_pane_cp032_ParamLimits

0xb299,	// (0x000912c5) scroll_pane_cp032

0xa84f,	// (0x0009087b) cntbar_detail_list_event_pane_ParamLimits

0xa84f,	// (0x0009087b) cntbar_detail_list_event_pane

0xa7ff,	// (0x0009082b) cntbar_detail_list_shct_pane

0x27a9,	// (0x000887d5) aid_list_gen

0xe277,	// (0x000942a3) aid_scroll

0xe280,	// (0x000942ac) aid_size_touch_scroll_bar

0x92c6,	// (0x0008f2f2) aid_list_double

0xa85f,	// (0x0009088b) aid_list_single

0x92c6,	// (0x0008f2f2) aid_list_single_lg

0x0ed5,	// (0x00086f01) aid_list_z_g_a_sm

0xa868,	// (0x00090894) aid_list_z_g_d

0x0edd,	// (0x00086f09) aid_txt_z_prm

0x0eeb,	// (0x00086f17) aid_txt_z_prm_cp01

0x0ef9,	// (0x00086f25) aid_txt_z_sec

0xa870,	// (0x0009089c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa870,	// (0x0009089c) main_cntbar_detail_cont_pane_g1

0xa884,	// (0x000908b0) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa884,	// (0x000908b0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00095eb0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00095eb0) main_cntbar_detail_cont_pane_g

0xe289,	// (0x000942b5) main_cntbar_detail_cont_pane_t1

0xe297,	// (0x000942c3) main_cntbar_detail_cont_pane_t2

0xe2a5,	// (0x000942d1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00095eb5) main_cntbar_detail_cont_pane_t

0xa894,	// (0x000908c0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa894,	// (0x000908c0) cell_cntbar_detail_list_shct_pane

0xe2b3,	// (0x000942df) cntbar_detail_list_shct_pane_g1

0xe2bc,	// (0x000942e8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00095ebc) cntbar_detail_list_shct_pane_g

0xa8a8,	// (0x000908d4) cntbar_detail_list_event_pane_g1_ParamLimits

0xa8a8,	// (0x000908d4) cntbar_detail_list_event_pane_g1

0xa8b4,	// (0x000908e0) cntbar_detail_list_event_pane_g2_ParamLimits

0xa8b4,	// (0x000908e0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00095ec1) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00095ec1) cntbar_detail_list_event_pane_g

0xa920,	// (0x0009094c) cntbar_detail_list_event_pane_t1_ParamLimits

0xa920,	// (0x0009094c) cntbar_detail_list_event_pane_t1

0xa935,	// (0x00090961) cntbar_detail_list_event_pane_t2_ParamLimits

0xa935,	// (0x00090961) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00095ece) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00095ece) cntbar_detail_list_event_pane_t

0xb9e6,	// (0x00091a12) cell_cntbar_detail_list_shct_pane_g1

0x3e29,	// (0x00089e55) navi_pane_mv_g3

0xe641,	// (0x0009466d) main_cntbar_detail_pane_ParamLimits

0xe637,	// (0x00094663) main_notif_wgt_pane

0xc341,	// (0x0009236d) aid_tch_main_mp4_pane_g4

0xc543,	// (0x0009256f) popup_slider_window_cp02

0xdfc9,	// (0x00093ff5) list_recal_day_event_pane

0xa7bd,	// (0x000907e9) cntbar_detail_btn_pane_ParamLimits

0xa7bd,	// (0x000907e9) cntbar_detail_btn_pane

0xa7d6,	// (0x00090802) cntbar_detail_btn_pane_cp01_ParamLimits

0xa7d6,	// (0x00090802) cntbar_detail_btn_pane_cp01

0xa7ff,	// (0x0009082b) cntbar_detail_list_shct_pane_ParamLimits

0xa80f,	// (0x0009083b) cntbar_detail_pane_g1_ParamLimits

0xa80f,	// (0x0009083b) cntbar_detail_pane_g1

0xa81f,	// (0x0009084b) cntbar_detail_pane_t1_ParamLimits

0xa81f,	// (0x0009084b) cntbar_detail_pane_t1

0xa8c0,	// (0x000908ec) cntbar_detail_list_event_pane_g3_ParamLimits

0xa8c0,	// (0x000908ec) cntbar_detail_list_event_pane_g3

0xa8d8,	// (0x00090904) cntbar_detail_list_event_pane_g4_ParamLimits

0xa8d8,	// (0x00090904) cntbar_detail_list_event_pane_g4

0xa8f0,	// (0x0009091c) cntbar_detail_list_event_pane_g5_ParamLimits

0xa8f0,	// (0x0009091c) cntbar_detail_list_event_pane_g5

0xa908,	// (0x00090934) cntbar_detail_list_event_pane_g6_ParamLimits

0xa908,	// (0x00090934) cntbar_detail_list_event_pane_g6

0xa94a,	// (0x00090976) cntbar_detail_list_event_pane_t3_ParamLimits

0xa94a,	// (0x00090976) cntbar_detail_list_event_pane_t3

0xa95c,	// (0x00090988) popup_notif_wgt_window_ParamLimits

0xa95c,	// (0x00090988) popup_notif_wgt_window

0xa975,	// (0x000909a1) popup_submenu_window_cp01_ParamLimits

0xa975,	// (0x000909a1) popup_submenu_window_cp01

0xef47,	// (0x00094f73) bg_popup_window_pane_cp10

0xe2c5,	// (0x000942f1) listscroll_notif_wgt_pane

0xe2d7,	// (0x00094303) list_notif_wgt_window

0xe2e0,	// (0x0009430c) scroll_pane_cp033

0xa98b,	// (0x000909b7) list_notif_wgt_row_pane_ParamLimits

0xa98b,	// (0x000909b7) list_notif_wgt_row_pane

0xe2e9,	// (0x00094315) aid_size_list_notif_wgt_del

0xe2f6,	// (0x00094322) list_notif_wgt_row_pane_g1

0xe302,	// (0x0009432e) list_notif_wgt_row_pane_g2

0xe316,	// (0x00094342) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00095ed5) list_notif_wgt_row_pane_g

0xe323,	// (0x0009434f) list_notif_wgt_row_pane_t1

0xe339,	// (0x00094365) list_notif_wgt_row_pane_t2

0xe34b,	// (0x00094377) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00095edc) list_notif_wgt_row_pane_t

0xcac4,	// (0x00092af0) list_recal_day_event_pane_g1

0xe35d,	// (0x00094389) list_recal_day_event_pane_t1

0xe637,	// (0x00094663) bg_button_pane_cp045

0xa99b,	// (0x000909c7) cntbar_detail_btn_pane_t1

0xb4cb,	// (0x000914f7) main_callh_pane_ParamLimits

0xb4cb,	// (0x000914f7) main_callh_pane

0xe637,	// (0x00094663) main_coverflow0_pane

0xe637,	// (0x00094663) main_wgtman_pane

0x9ebd,	// (0x0008fee9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ebd,	// (0x0008fee9) main_fs_bigclock_unlock_btn_pane

0xa331,	// (0x0009035d) bg_button_pane_cp16

0xa341,	// (0x0009036d) cell_tport_appsw_pane_g3

0xa9a9,	// (0x000909d5) cf0_flow_pane_ParamLimits

0xa9a9,	// (0x000909d5) cf0_flow_pane

0xe36c,	// (0x00094398) listscroll_cf0_pane

0xe377,	// (0x000943a3) main_cf0_pane_g1

0xa9be,	// (0x000909ea) main_cf0_pane_t1_ParamLimits

0xa9be,	// (0x000909ea) main_cf0_pane_t1

0xa9d5,	// (0x00090a01) main_cf0_pane_t2_ParamLimits

0xa9d5,	// (0x00090a01) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00095ee8) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00095ee8) main_cf0_pane_t

0xe389,	// (0x000943b5) scroll_pane_cp11

0xa9ec,	// (0x00090a18) cf0_flow_pane_g1

0xa9f4,	// (0x00090a20) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00095eed) cf0_flow_pane_g

0xa9fc,	// (0x00090a28) cf0_flow_pane_t1

0xe637,	// (0x00094663) main_call6_pane

0xe637,	// (0x00094663) main_calllock_pane

0xaa0a,	// (0x00090a36) call6_btn_grp_pane_ParamLimits

0xaa0a,	// (0x00090a36) call6_btn_grp_pane

0xaa24,	// (0x00090a50) call6_pane_g1_ParamLimits

0xaa24,	// (0x00090a50) call6_pane_g1

0xaa39,	// (0x00090a65) popup_call6_1st_window_ParamLimits

0xaa39,	// (0x00090a65) popup_call6_1st_window

0xaa4a,	// (0x00090a76) popup_call6_2nd_window_ParamLimits

0xaa4a,	// (0x00090a76) popup_call6_2nd_window

0xaa5b,	// (0x00090a87) cell_call6_btn_pane_ParamLimits

0xaa5b,	// (0x00090a87) cell_call6_btn_pane

0xef47,	// (0x00094f73) bg_popup_call2_in_pane_cp03

0xe394,	// (0x000943c0) popup_call6_1st_window_g1

0xe39c,	// (0x000943c8) popup_call6_1st_window_g2

0xe3a4,	// (0x000943d0) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00095ef2) popup_call6_1st_window_g

0xe3ac,	// (0x000943d8) popup_call6_1st_window_t1

0xe3bb,	// (0x000943e7) popup_call6_1st_window_t2

0xe3cb,	// (0x000943f7) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00095ef9) popup_call6_1st_window_t

0xef47,	// (0x00094f73) bg_popup_call2_in_pane_cp04

0xe394,	// (0x000943c0) popup_call6_2nd_window_g1

0xe39c,	// (0x000943c8) popup_call6_2nd_window_g2

0xe3a4,	// (0x000943d0) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00095ef2) popup_call6_2nd_window_g

0xe3ac,	// (0x000943d8) popup_call6_2nd_window_t1

0xe637,	// (0x00094663) bg_button_pane_cp15

0xe3db,	// (0x00094407) cell_call6_btn_pane_g1

0xe3e4,	// (0x00094410) cell_call6_btn_pane_t1

0xaa6f,	// (0x00090a9b) listscroll_wgtman_pane_ParamLimits

0xaa6f,	// (0x00090a9b) listscroll_wgtman_pane

0xaa90,	// (0x00090abc) wgtman_btn_pane_ParamLimits

0xaa90,	// (0x00090abc) wgtman_btn_pane

0x3a64,	// (0x00089a90) aid_scroll_copy1

0xe3f3,	// (0x0009441f) list_wgtman_pane

0xaad3,	// (0x00090aff) wgtman_btn_pane_g1_ParamLimits

0xaad3,	// (0x00090aff) wgtman_btn_pane_g1

0xaaff,	// (0x00090b2b) wgtman_btn_pane_t1_ParamLimits

0xaaff,	// (0x00090b2b) wgtman_btn_pane_t1

0xe3fd,	// (0x00094429) wgtman_btn_pane_t2_ParamLimits

0xe3fd,	// (0x00094429) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00095f00) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00095f00) wgtman_btn_pane_t

0xab3c,	// (0x00090b68) listrow_wgtman_pane_ParamLimits

0xab3c,	// (0x00090b68) listrow_wgtman_pane

0xab4e,	// (0x00090b7a) listrow_wgtman_pane_g1

0xab5b,	// (0x00090b87) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00095f05) listrow_wgtman_pane_g

0x0f07,	// (0x00086f33) listrow_wgtman_pane_t1

0x0f1f,	// (0x00086f4b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00095f0a) listrow_wgtman_pane_t

0x0f45,	// (0x00086f71) wait_bar_pane_cp09

0xe414,	// (0x00094440) main_calllock_btn_pane

0xe41e,	// (0x0009444a) main_calllock_pane_g1

0xe637,	// (0x00094663) bg_button_pane_cp17

0xe42a,	// (0x00094456) main_calllock_btn_pane_g1

0xe433,	// (0x0009445f) main_calllock_btn_pane_t1

0xe637,	// (0x00094663) main_dialer3_pane

0xe637,	// (0x00094663) main_fmrd2_pane

0xb9e6,	// (0x00091a12) main_fs_bigclock_unlock_btn_pane_g1

0xe44a,	// (0x00094476) main_fs_bigclock_unlock_btn_pane_t1

0xab79,	// (0x00090ba5) area_fmrd2_info_pane_ParamLimits

0xab79,	// (0x00090ba5) area_fmrd2_info_pane

0xab8a,	// (0x00090bb6) area_fmrd2_visual_pane_ParamLimits

0xab8a,	// (0x00090bb6) area_fmrd2_visual_pane

0xab98,	// (0x00090bc4) fmrd2_indi_pane_ParamLimits

0xab98,	// (0x00090bc4) fmrd2_indi_pane

0xaba5,	// (0x00090bd1) area_fmrd2_visual_pane_g1

0xabad,	// (0x00090bd9) area_fmrd2_visual_pane_t1

0xabbd,	// (0x00090be9) area_fmrd2_visual_pane_t2

0xabcd,	// (0x00090bf9) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00095f14) area_fmrd2_visual_pane_t

0xabdd,	// (0x00090c09) area_fmrd2_info_pane_g1

0xabe5,	// (0x00090c11) area_fmrd2_info_pane_t1

0xabf5,	// (0x00090c21) area_fmrd2_info_pane_t2

0xac05,	// (0x00090c31) area_fmrd2_info_pane_t3

0xac15,	// (0x00090c41) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00095f1b) area_fmrd2_info_pane_t

0xac23,	// (0x00090c4f) fmrd2_indi_pane_t1

0xac33,	// (0x00090c5f) fmrd2_indi_pane_t2

0xac43,	// (0x00090c6f) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00095f24) fmrd2_indi_pane_t

0xd6de,	// (0x0009370a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd6de,	// (0x0009370a) list_single_fs_bigclock_indicator_pane_g5

0xd78e,	// (0x000937ba) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd78e,	// (0x000937ba) list_single_fs_bigclock_indicator_pane_t5

0xa49f,	// (0x000904cb) aid_cell_bcale_month_pane_ParamLimits

0xa49f,	// (0x000904cb) aid_cell_bcale_month_pane

0xa4bd,	// (0x000904e9) bcale_month_pane_ParamLimits

0xa4bd,	// (0x000904e9) bcale_month_pane

0xa4e1,	// (0x0009050d) bcale_preview_pane_ParamLimits

0xa4e1,	// (0x0009050d) bcale_preview_pane

0xe1ef,	// (0x0009421b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe20e,	// (0x0009423a) list_single_fs_bigclock_pane_t2_ParamLimits

0xe20e,	// (0x0009423a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00095ea6) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00095ea6) list_single_fs_bigclock_pane_t

0xe442,	// (0x0009446e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00095f0f) main_fs_bigclock_unlock_btn_pane_g

0xac53,	// (0x00090c7f) aid_dia3_key_size_ParamLimits

0xac53,	// (0x00090c7f) aid_dia3_key_size

0xac62,	// (0x00090c8e) aid_dia3_listrow_size_ParamLimits

0xac62,	// (0x00090c8e) aid_dia3_listrow_size

0xac77,	// (0x00090ca3) dia3_keypad_fun_pane_ParamLimits

0xac77,	// (0x00090ca3) dia3_keypad_fun_pane

0xac93,	// (0x00090cbf) dia3_keypad_num_pane_ParamLimits

0xac93,	// (0x00090cbf) dia3_keypad_num_pane

0xacae,	// (0x00090cda) dia3_listscroll_pane_ParamLimits

0xacae,	// (0x00090cda) dia3_listscroll_pane

0xacc1,	// (0x00090ced) dia3_numentry_pane_ParamLimits

0xacc1,	// (0x00090ced) dia3_numentry_pane

0xe458,	// (0x00094484) dia3_list_pane

0xe463,	// (0x0009448f) scroll_pane_cp12

0xe637,	// (0x00094663) bg_dia3_numentry_pane

0xacd5,	// (0x00090d01) dia3_numentry_pane_t1

0xace4,	// (0x00090d10) cell_dia3_key_num_pane

0xacec,	// (0x00090d18) cell_dia3_key0_fun_pane_ParamLimits

0xacec,	// (0x00090d18) cell_dia3_key0_fun_pane

0xad00,	// (0x00090d2c) cell_dia3_key1_fun_pane_ParamLimits

0xad00,	// (0x00090d2c) cell_dia3_key1_fun_pane

0xad18,	// (0x00090d44) dia3_listrow_pane

0xd3ed,	// (0x00093419) bg_dia3_numentry_pane_g1

0xe637,	// (0x00094663) bg_button_pane_cp21

0xe46e,	// (0x0009449a) cell_dia3_key_num_pane_t1

0xe47c,	// (0x000944a8) cell_dia3_key_num_pane_t2

0xe48b,	// (0x000944b7) cell_dia3_key_num_pane_t3

0xe49a,	// (0x000944c6) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00095f2b) cell_dia3_key_num_pane_t

0xe637,	// (0x00094663) bg_button_pane_cp19

0xad2a,	// (0x00090d56) cell_dia3_key0_fun_pane_g1

0xe637,	// (0x00094663) bg_button_pane_cp20

0xad32,	// (0x00090d5e) cell_dia3_key1_fun_pane_g1

0xad3a,	// (0x00090d66) area_left_week_number_pane

0xad46,	// (0x00090d72) area_top_day_name_pane

0xad59,	// (0x00090d85) frame_month_view_pane

0xe4a9,	// (0x000944d5) grid_month_view_pane

0xad6c,	// (0x00090d98) cell_top_day_name_pane_ParamLimits

0xad6c,	// (0x00090d98) cell_top_day_name_pane

0xad99,	// (0x00090dc5) cell_area_left_week_number_pane_ParamLimits

0xad99,	// (0x00090dc5) cell_area_left_week_number_pane

0xadad,	// (0x00090dd9) cell_month_view_pane_ParamLimits

0xadad,	// (0x00090dd9) cell_month_view_pane

0xe4b7,	// (0x000944e3) frm_month_g1

0xadda,	// (0x00090e06) frm_month_g2

0xaded,	// (0x00090e19) frm_month_g3

0xae00,	// (0x00090e2c) frm_month_g4

0xae13,	// (0x00090e3f) frm_month_g5

0xae26,	// (0x00090e52) frm_month_g6

0xae39,	// (0x00090e65) frm_month_g7

0xe4c4,	// (0x000944f0) frm_month_g8

0xae4c,	// (0x00090e78) frm_month_g9

0xae5c,	// (0x00090e88) frm_month_g10

0xae6c,	// (0x00090e98) frm_month_g11

0xae7c,	// (0x00090ea8) frm_month_g12

0xae8e,	// (0x00090eba) frm_month_g13

0xaea0,	// (0x00090ecc) frm_month_g14

0xaeb4,	// (0x00090ee0) frm_month_g15

0xaec8,	// (0x00090ef4) frm_month_g16

0x000f,

0xff08,	// (0x00095f34) frm_month_g

0xe4d1,	// (0x000944fd) cell_top_day_name_pane_t1

0xaedc,	// (0x00090f08) cell_area_left_week_number_pane_g1

0xaee8,	// (0x00090f14) cell_area_left_week_number_pane_t1

0xbc52,	// (0x00091c7e) cell_month_view_pane_g1

0xaefb,	// (0x00090f27) cell_month_view_pane_t1

0xe637,	// (0x00094663) main_fps_pane

0xd97e,	// (0x000939aa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd97e,	// (0x000939aa) cmail_ddmenu_btn02_pane_cp1

0xd99a,	// (0x000939c6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd99a,	// (0x000939c6) cmail_ddmenu_btn02_pane_cp2

0xa6c9,	// (0x000906f5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa6c9,	// (0x000906f5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00095e59) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00095e59) cmail_ddmenu_btn02_pane_g

0xa6e8,	// (0x00090714) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa6e8,	// (0x00090714) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00095e5e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00095e5e) cmail_ddmenu_btn02_pane_t

0xaf0e,	// (0x00090f3a) fps_text_pane_ParamLimits

0xaf0e,	// (0x00090f3a) fps_text_pane

0xaf25,	// (0x00090f51) main_fps_pane_g1_ParamLimits

0xaf25,	// (0x00090f51) main_fps_pane_g1

0xaf3f,	// (0x00090f6b) wait_bar_pane_cp010_ParamLimits

0xaf3f,	// (0x00090f6b) wait_bar_pane_cp010

0xaf50,	// (0x00090f7c) fps_text_pane_t1_ParamLimits

0xaf50,	// (0x00090f7c) fps_text_pane_t1

0xc6f8,	// (0x00092724) cam4_image_uncrop_pane_g1

0xc701,	// (0x0009272d) cam4_image_uncrop_pane_g2

0x82fd,	// (0x0008e329) cam4_image_uncrop_pane_g3

0x8306,	// (0x0008e332) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009591a) cam4_image_uncrop_pane_g

0xad18,	// (0x00090d44) dia3_listrow_pane_ParamLimits

0xe637,	// (0x00094663) main_phob2_pane

0xa302,	// (0x0009032e) cell_tport_appsw_pane_cp02_ParamLimits

0xa302,	// (0x0009032e) cell_tport_appsw_pane_cp02

0xa316,	// (0x00090342) cell_tport_appsw_pane_cp03_ParamLimits

0xa316,	// (0x00090342) cell_tport_appsw_pane_cp03

0xe637,	// (0x00094663) phob2_contact_card_pane

0xe637,	// (0x00094663) phob2_listscroll_pane

0xe4e4,	// (0x00094510) phob2_list_pane

0xe4ec,	// (0x00094518) scroll_pane_cp034

0xaf68,	// (0x00090f94) phob2_cc_data_pane_ParamLimits

0xaf68,	// (0x00090f94) phob2_cc_data_pane

0xaf87,	// (0x00090fb3) phob2_cc_listscroll_pane_ParamLimits

0xaf87,	// (0x00090fb3) phob2_cc_listscroll_pane

0xab3c,	// (0x00090b68) list_double_large_graphic_phob2_pane_ParamLimits

0xab3c,	// (0x00090b68) list_double_large_graphic_phob2_pane

0xafa5,	// (0x00090fd1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xafa5,	// (0x00090fd1) list_double_large_graphic_phob2_pane_g1

0x0f57,	// (0x00086f83) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0f57,	// (0x00086f83) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00095f55) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00095f55) list_double_large_graphic_phob2_pane_g

0x0f63,	// (0x00086f8f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0f63,	// (0x00086f8f) list_double_large_graphic_phob2_pane_t1

0x0f78,	// (0x00086fa4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0f78,	// (0x00086fa4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00095f5a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00095f5a) list_double_large_graphic_phob2_pane_t

0xe637,	// (0x00094663) list_highlight_pane_cp024

0xafbb,	// (0x00090fe7) phob2_cc_button_pane

0xafc3,	// (0x00090fef) phob2_cc_data_pane_g1_ParamLimits

0xafc3,	// (0x00090fef) phob2_cc_data_pane_g1

0xafd8,	// (0x00091004) phob2_cc_data_pane_g2_ParamLimits

0xafd8,	// (0x00091004) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00095f5f) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00095f5f) phob2_cc_data_pane_g

0xafe8,	// (0x00091014) phob2_cc_data_pane_t1_ParamLimits

0xafe8,	// (0x00091014) phob2_cc_data_pane_t1

0xb000,	// (0x0009102c) phob2_cc_data_pane_t2_ParamLimits

0xb000,	// (0x0009102c) phob2_cc_data_pane_t2

0xb018,	// (0x00091044) phob2_cc_data_pane_t3_ParamLimits

0xb018,	// (0x00091044) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00095f64) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00095f64) phob2_cc_data_pane_t

0xe4f4,	// (0x00094520) phob2_cc_list_pane_ParamLimits

0xe4f4,	// (0x00094520) phob2_cc_list_pane

0xcb6d,	// (0x00092b99) scroll_pane_cp035_ParamLimits

0xcb6d,	// (0x00092b99) scroll_pane_cp035

0xe641,	// (0x0009466d) bg_button_pane_cp033

0xe500,	// (0x0009452c) phob2_cc_button_pane_g1

0xe50c,	// (0x00094538) phob2_cc_button_pane_t1

0xe521,	// (0x0009454d) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00095f6b) phob2_cc_button_pane_t

0xb030,	// (0x0009105c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb030,	// (0x0009105c) list_double_large_graphic_phob2_cc_pane

0xb042,	// (0x0009106e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb042,	// (0x0009106e) list_double_large_graphic_phob2_cc_pane_g1

0x0f8a,	// (0x00086fb6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0f8a,	// (0x00086fb6) list_double_large_graphic_phob2_cc_pane_g2

0x0f96,	// (0x00086fc2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0f96,	// (0x00086fc2) list_double_large_graphic_phob2_cc_pane_g3

0x0fa2,	// (0x00086fce) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0fa2,	// (0x00086fce) list_double_large_graphic_phob2_cc_pane_g4

0x0fae,	// (0x00086fda) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0fae,	// (0x00086fda) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00095f70) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00095f70) list_double_large_graphic_phob2_cc_pane_g

0x0fba,	// (0x00086fe6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0fba,	// (0x00086fe6) list_double_large_graphic_phob2_cc_pane_t1

0x0fe3,	// (0x0008700f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0fe3,	// (0x0008700f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00095f7b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00095f7b) list_double_large_graphic_phob2_cc_pane_t

0xe533,	// (0x0009455f) list_highlight_pane_cp025_ParamLimits

0xe533,	// (0x0009455f) list_highlight_pane_cp025

0xe641,	// (0x0009466d) bg_button_pane_cp033_ParamLimits

0xe500,	// (0x0009452c) phob2_cc_button_pane_g1_ParamLimits

0xe50c,	// (0x00094538) phob2_cc_button_pane_t1_ParamLimits

0xe521,	// (0x0009454d) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00095f6b) phob2_cc_button_pane_t_ParamLimits

0x1245,	// (0x00087271) popup_wgtman_window

0xc973,	// (0x0009299f) scroll_pane_cp038

0xaab5,	// (0x00090ae1) wgtman_btn_pane_cp_01_ParamLimits

0xaab5,	// (0x00090ae1) wgtman_btn_pane_cp_01

0xe541,	// (0x0009456d) wgtman_content_pane

0xe54a,	// (0x00094576) wgtman_heading_pane

0xe637,	// (0x00094663) bg_heading_pane_cp02

0xe553,	// (0x0009457f) wgtman_heading_pane_g1

0xe55b,	// (0x00094587) wgtman_heading_pane_t1

0xe569,	// (0x00094595) scroll_pane_cp036

0xe571,	// (0x0009459d) wgtman_list_pane

0xe579,	// (0x000945a5) wgtman_list_pane_t1_ParamLimits

0xe579,	// (0x000945a5) wgtman_list_pane_t1

0xc6e4,	// (0x00092710) cam4_grid_pane

0x05c6,	// (0x000865f2) bg_button_pane_cp015_ParamLimits

0x8f24,	// (0x0008ef50) bg_button_pane_cp016_ParamLimits

0x8f37,	// (0x0008ef63) bg_button_pane_cp017_ParamLimits

0x060c,	// (0x00086638) popup_vitu2_query_window_g3_ParamLimits

0x060c,	// (0x00086638) popup_vitu2_query_window_g3

0x0687,	// (0x000866b3) popup_vitu2_query_window_t6_ParamLimits

0x0687,	// (0x000866b3) popup_vitu2_query_window_t6

0x06b2,	// (0x000866de) popup_vitu2_query_window_t7_ParamLimits

0x06b2,	// (0x000866de) popup_vitu2_query_window_t7

0xc6f8,	// (0x00092724) cam4_grid_pane_g1

0xc701,	// (0x0009272d) cam4_grid_pane_g2

0xe593,	// (0x000945bf) cam4_grid_pane_g3

0xe59c,	// (0x000945c8) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00095f80) cam4_grid_pane_g

0x21a5,	// (0x000881d1) aid_placing_vt_slider_lsc_ParamLimits

0x2500,	// (0x0008852c) vidtel_button_pane_ParamLimits

0x2500,	// (0x0008852c) vidtel_button_pane

0xe637,	// (0x00094663) bg_button_pane_cp034

0xb04e,	// (0x0009107a) vidtel_button_pane_g1

0xe5a7,	// (0x000945d3) vidtel_button_pane_t1

0xcab4,	// (0x00092ae0) aid_size_vtel_slider_touch

0xcb6d,	// (0x00092b99) scroll_pane_cp039

0xd42b,	// (0x00093457) ncim_query_button_pane_cp01_ParamLimits

0xd44a,	// (0x00093476) ncimui_query_pane_g1_ParamLimits

0xe641,	// (0x0009466d) input_focus_pane_cp012_ParamLimits

0xd46f,	// (0x0009349b) ncim_query_entry_pane_t1_ParamLimits

0xcb6d,	// (0x00092b99) scroll_pane_cp039_ParamLimits

0x3d14,	// (0x00089d40) navi_pane_bcale_mc_g1

0x3d1c,	// (0x00089d48) navi_pane_bcale_mc_t1

0xd9e3,	// (0x00093a0f) main_sp_fs_email_pane_g1

0xd9ef,	// (0x00093a1b) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00095d11) main_sp_fs_email_pane_g

0xde5b,	// (0x00093e87) list_single_cale_mrui_row_pane_g3_ParamLimits

0xde5b,	// (0x00093e87) list_single_cale_mrui_row_pane_g3

0x0eb6,	// (0x00086ee2) list_single_recal_day_pane_g5_event_pane

0xe03a,	// (0x00094066) list_single_recal_day_pane_g7

0xe5bd,	// (0x000945e9) list_recal_day_event_pane_cp01

0xe5c6,	// (0x000945f2) list_recal_vselct_arw_lo_pane_cp01

0xe5ce,	// (0x000945fa) list_recal_vselct_arw_up_pane_cp01

0xe5d6,	// (0x00094602) list_recal_vselct_pane_cp01

0xcac4,	// (0x00092af0) list_recal_day_event_pane_cp01_g1

0xe5e0,	// (0x0009460c) list_recal_day_event_pane_cp01_t1

0xe042,	// (0x0009406e) list_single_recal_day_pane_t1_ParamLimits

0xe054,	// (0x00094080) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00095e6e) list_single_recal_day_pane_t_ParamLimits

0xecbd,	// (0x00094ce9) bg_notes_pane_ParamLimits

0xed60,	// (0x00094d8c) list_notes_pane_ParamLimits

0x158e,	// (0x000875ba) scroll_pane_cp06_ParamLimits

0xed82,	// (0x00094dae) main_notes_pane_ParamLimits

0xe637,	// (0x00094663) main_welc_pane

0xb056,	// (0x00091082) main_welc_body_pane_ParamLimits

0xb056,	// (0x00091082) main_welc_body_pane

0xb074,	// (0x000910a0) main_welc_opti_pane_ParamLimits

0xb074,	// (0x000910a0) main_welc_opti_pane

0xb0b9,	// (0x000910e5) main_welc_pane_t1_ParamLimits

0xb0b9,	// (0x000910e5) main_welc_pane_t1

0xb0d7,	// (0x00091103) main_welc_body_row_pane_ParamLimits

0xb0d7,	// (0x00091103) main_welc_body_row_pane

0xe5ee,	// (0x0009461a) main_welc_opti_row_pane_ParamLimits

0xe5ee,	// (0x0009461a) main_welc_opti_row_pane

0xe5fc,	// (0x00094628) main_welc_opti_row_pane_g1

0xb0eb,	// (0x00091117) main_welc_opti_row_pane_t1

0xe604,	// (0x00094630) main_welc_body_row_pane_t1

0xe2cf,	// (0x000942fb) popup_notif_wgt_heading_pane

0xe2e9,	// (0x00094315) aid_size_list_notif_wgt_del_ParamLimits

0xe2f6,	// (0x00094322) list_notif_wgt_row_pane_g1_ParamLimits

0xe302,	// (0x0009432e) list_notif_wgt_row_pane_g2_ParamLimits

0xe316,	// (0x00094342) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00095ed5) list_notif_wgt_row_pane_g_ParamLimits

0xe323,	// (0x0009434f) list_notif_wgt_row_pane_t1_ParamLimits

0xe339,	// (0x00094365) list_notif_wgt_row_pane_t2_ParamLimits

0xe34b,	// (0x00094377) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00095edc) list_notif_wgt_row_pane_t_ParamLimits

0xab4e,	// (0x00090b7a) listrow_wgtman_pane_g1_ParamLimits

0xab5b,	// (0x00090b87) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00095f05) listrow_wgtman_pane_g_ParamLimits

0x0f07,	// (0x00086f33) listrow_wgtman_pane_t1_ParamLimits

0x0f1f,	// (0x00086f4b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00095f0a) listrow_wgtman_pane_t_ParamLimits

0x0f45,	// (0x00086f71) wait_bar_pane_cp09_ParamLimits

0xe637,	// (0x00094663) bg_popup_heading_pane_cp02

0xe613,	// (0x0009463f) popup_notif_wgt_heading_pane_g1

0xe61b,	// (0x00094647) popup_notif_wgt_heading_pane_t1

0xe637,	// (0x00094663) main_vids_pane

0xe637,	// (0x00094663) vids_listscroll_pane

0xb0fa,	// (0x00091126) scroll_pane_cp040

0xe637,	// (0x00094663) vids_list_pane

0xb105,	// (0x00091131) vids_list_double_pane_ParamLimits

0xb105,	// (0x00091131) vids_list_double_pane

0xb116,	// (0x00091142) vids_list_double_pane_g1

0xb11f,	// (0x0009114b) vids_list_double_pane_t1

0xb12f,	// (0x0009115b) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00095f8e) vids_list_double_pane_t

0xe641,	// (0x0009466d) main_ncimui_pane_ParamLimits

0x9a34,	// (0x0008fa60) main_ncimui_pane_g1_ParamLimits

0x9a40,	// (0x0008fa6c) main_ncimui_pane_g2_ParamLimits

0x9a40,	// (0x0008fa6c) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00095c16) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00095c16) main_ncimui_pane_g

0xb08f,	// (0x000910bb) main_welc_pane_g1_ParamLimits

0xb08f,	// (0x000910bb) main_welc_pane_g1

0xb0a4,	// (0x000910d0) main_welc_pane_g2_ParamLimits

0xb0a4,	// (0x000910d0) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00095f89) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00095f89) main_welc_pane_g

0xecbd,	// (0x00094ce9) listscroll_mce_pane_ParamLimits

0x3eab,	// (0x00089ed7) wait_bar_pane_cp10

0xb4bf,	// (0x000914eb) main_cale_day_pane_ParamLimits

0xb4bf,	// (0x000914eb) main_cale_week_pane_ParamLimits

0xecbd,	// (0x00094ce9) main_messa_pane_ParamLimits

0x7639,	// (0x0008d665) main_clock2_btn_pane_ParamLimits

0x7639,	// (0x0008d665) main_clock2_btn_pane

0xbe32,	// (0x00091e5e) main_clock2_btn_pane_cp01_ParamLimits

0xbe32,	// (0x00091e5e) main_clock2_btn_pane_cp01

0xdde7,	// (0x00093e13) list_cale_mrui_pane_ParamLimits

0xe381,	// (0x000943ad) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00095ee3) main_cf0_pane_g

0xad3a,	// (0x00090d66) area_left_week_number_pane_ParamLimits

0xad46,	// (0x00090d72) area_top_day_name_pane_ParamLimits

0xad59,	// (0x00090d85) frame_month_view_pane_ParamLimits

0xe4a9,	// (0x000944d5) grid_month_view_pane_ParamLimits

0xe4b7,	// (0x000944e3) frm_month_g1_ParamLimits

0xadda,	// (0x00090e06) frm_month_g2_ParamLimits

0xaded,	// (0x00090e19) frm_month_g3_ParamLimits

0xae00,	// (0x00090e2c) frm_month_g4_ParamLimits

0xae13,	// (0x00090e3f) frm_month_g5_ParamLimits

0xae26,	// (0x00090e52) frm_month_g6_ParamLimits

0xae39,	// (0x00090e65) frm_month_g7_ParamLimits

0xe4c4,	// (0x000944f0) frm_month_g8_ParamLimits

0xae4c,	// (0x00090e78) frm_month_g9_ParamLimits

0xae5c,	// (0x00090e88) frm_month_g10_ParamLimits

0xae6c,	// (0x00090e98) frm_month_g11_ParamLimits

0xae7c,	// (0x00090ea8) frm_month_g12_ParamLimits

0xae8e,	// (0x00090eba) frm_month_g13_ParamLimits

0xaea0,	// (0x00090ecc) frm_month_g14_ParamLimits

0xaeb4,	// (0x00090ee0) frm_month_g15_ParamLimits

0xaec8,	// (0x00090ef4) frm_month_g16_ParamLimits

0xff08,	// (0x00095f34) frm_month_g_ParamLimits

0xe4d1,	// (0x000944fd) cell_top_day_name_pane_t1_ParamLimits

0xaedc,	// (0x00090f08) cell_area_left_week_number_pane_g1_ParamLimits

0xaee8,	// (0x00090f14) cell_area_left_week_number_pane_t1_ParamLimits

0xbc52,	// (0x00091c7e) cell_month_view_pane_g1_ParamLimits

0xaefb,	// (0x00090f27) cell_month_view_pane_t1_ParamLimits

0xecb5,	// (0x00094ce1) main_clock2_btn_pane_g1

0xe629,	// (0x00094655) main_clock2_btn_pane_t1

0xe641,	// (0x0009466d) listscroll_cmail_pane_ParamLimits

0xd9e3,	// (0x00093a0f) main_sp_fs_email_pane_g1_ParamLimits

0xd9ef,	// (0x00093a1b) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00095d11) main_sp_fs_email_pane_g_ParamLimits

0xdfaa,	// (0x00093fd6) list_recal_day_pane_ParamLimits

0xdfbb,	// (0x00093fe7) mian_recal_day_pane_t1

0x0acf,	// (0x00086afb) list_single_dyc_row_text_pane_t4_ParamLimits

0x0acf,	// (0x00086afb) list_single_dyc_row_text_pane_t4

0x0b18,	// (0x00086b44) list_single_dyc_row_text_pane_t5_ParamLimits

0x0b18,	// (0x00086b44) list_single_dyc_row_text_pane_t5

0xda95,	// (0x00093ac1) list_single_dyc_row_text_pane_t6_ParamLimits

0xda95,	// (0x00093ac1) list_single_dyc_row_text_pane_t6

0x34ca,	// (0x000894f6) aid_mgn_list_cale_time_pane

0xe641,	// (0x0009466d) main_gallery2_pane_ParamLimits

0xbe48,	// (0x00091e74) main_clock2_pane_cp01_t1

0xbe58,	// (0x00091e84) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000957f0) main_clock2_pane_cp01_t

0x193a,	// (0x00087966) cale_week_scroll_pane_g16_ParamLimits

0x193a,	// (0x00087966) cale_week_scroll_pane_g16

0xef47,	// (0x00094f73) vorec_slider_pane

0xe5a7,	// (0x000945d3) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Large

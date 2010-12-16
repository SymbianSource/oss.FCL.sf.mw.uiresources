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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00096bd2 };

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
0x0a2a,	// (0x000975fc) Screen

0x0a36,	// (0x00097608) application_window

0x0a72,	// (0x00097644) area_bottom_pane_ParamLimits

0x0a72,	// (0x00097644) area_bottom_pane

0x0aab,	// (0x0009767d) area_top_pane_ParamLimits

0x0aab,	// (0x0009767d) area_top_pane

0x9809,	// (0x000a03db) call_video_uplink_pane_ParamLimits

0x9809,	// (0x000a03db) call_video_uplink_pane

0x0b39,	// (0x0009770b) main_pane_ParamLimits

0x0b39,	// (0x0009770b) main_pane

0xd4af,	// (0x000a4081) context_pane

0x3638,	// (0x0009a20a) navi_pane

0x366a,	// (0x0009a23c) popup_cale_events_window_ParamLimits

0x366a,	// (0x0009a23c) popup_cale_events_window

0xd4c2,	// (0x000a4094) popup_mup_playback_window

0x3682,	// (0x0009a254) signal_pane

0xb58a,	// (0x000a215c) main_browser_pane

0xb792,	// (0x000a2364) main_burst_pane

0x33a0,	// (0x00099f72) main_calc_pane

0xd4a3,	// (0x000a4075) main_cale_day_pane

0x0f72,	// (0x00097b44) main_cale_month_pane

0xd4a3,	// (0x000a4075) main_cale_week_pane

0xb792,	// (0x000a2364) main_call_pane

0xb20a,	// (0x000a1ddc) main_call_poc_pane

0xb792,	// (0x000a2364) main_camera_pane

0xb792,	// (0x000a2364) main_chi_dic_pane

0xbefb,	// (0x000a2acd) main_clock_pane

0xb20a,	// (0x000a1ddc) main_fmradio_pane

0xb792,	// (0x000a2364) main_graph_messa_pane

0xb20a,	// (0x000a1ddc) main_help_pane

0xb58a,	// (0x000a215c) main_im_pane

0xb465,	// (0x000a2037) main_image_pane_ParamLimits

0xb465,	// (0x000a2037) main_image_pane

0xb20a,	// (0x000a1ddc) main_location2_pane

0xb792,	// (0x000a2364) main_location_pane

0xb465,	// (0x000a2037) main_messa_pane

0xb20a,	// (0x000a1ddc) main_mp2_pane

0xb792,	// (0x000a2364) main_mp_pane

0xb20a,	// (0x000a1ddc) main_msg_pane

0xb20a,	// (0x000a1ddc) main_mup_eq_pane

0xb20a,	// (0x000a1ddc) main_mup_pane

0xb58a,	// (0x000a215c) main_notes_pane

0xb20a,	// (0x000a1ddc) main_pec_pane

0xb20a,	// (0x000a1ddc) main_phob_pane

0xb20a,	// (0x000a1ddc) main_pinb_pane

0xb20a,	// (0x000a1ddc) main_postcard_pane

0xb20a,	// (0x000a1ddc) main_qdial_pane

0xb792,	// (0x000a2364) main_skin_pane

0xb20a,	// (0x000a1ddc) main_smil2_pane

0xb792,	// (0x000a2364) main_smil_pane

0xb792,	// (0x000a2364) main_video_pane

0xb792,	// (0x000a2364) main_video_tele_pane

0xb465,	// (0x000a2037) main_viewer_pane_ParamLimits

0xb465,	// (0x000a2037) main_viewer_pane

0xb792,	// (0x000a2364) main_vorec_pane

0x33f4,	// (0x00099fc6) popup_blid_sat_info_window_ParamLimits

0x33f4,	// (0x00099fc6) popup_blid_sat_info_window

0x344c,	// (0x0009a01e) popup_dyc_status_message_window_ParamLimits

0x344c,	// (0x0009a01e) popup_dyc_status_message_window

0x3464,	// (0x0009a036) popup_grid_large_graphic_window_ParamLimits

0x3464,	// (0x0009a036) popup_grid_large_graphic_window

0x3514,	// (0x0009a0e6) popup_loc_request_window_ParamLimits

0x3514,	// (0x0009a0e6) popup_loc_request_window

0x3610,	// (0x0009a1e2) popup_wml_address_window_ParamLimits

0x3610,	// (0x0009a1e2) popup_wml_address_window

0x31da,	// (0x00099dac) call_muted_g1

0x2ecf,	// (0x00099aa1) popup_call_audio_conf_window_ParamLimits

0x2ecf,	// (0x00099aa1) popup_call_audio_conf_window

0x31ee,	// (0x00099dc0) popup_call_audio_first_window_ParamLimits

0x31ee,	// (0x00099dc0) popup_call_audio_first_window

0x3264,	// (0x00099e36) popup_call_audio_in_window_ParamLimits

0x3264,	// (0x00099e36) popup_call_audio_in_window

0x32a0,	// (0x00099e72) popup_call_audio_out_window_ParamLimits

0x32a0,	// (0x00099e72) popup_call_audio_out_window

0x32da,	// (0x00099eac) popup_call_audio_second_window_ParamLimits

0x32da,	// (0x00099eac) popup_call_audio_second_window

0x3330,	// (0x00099f02) popup_call_audio_wait_window_ParamLimits

0x3330,	// (0x00099f02) popup_call_audio_wait_window

0x3365,	// (0x00099f37) popup_number_entry_window_ParamLimits

0x3365,	// (0x00099f37) popup_number_entry_window

0xacc6,	// (0x000a1898) bg_popup_call_pane_cp05_ParamLimits

0xacc6,	// (0x000a1898) bg_popup_call_pane_cp05

0xace6,	// (0x000a18b8) popup_number_entry_window_t1

0xacf9,	// (0x000a18cb) popup_number_entry_window_t2

0xad0b,	// (0x000a18dd) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x000a5bef) popup_number_entry_window_t

0xad1d,	// (0x000a18ef) text_title_cp2

0xad30,	// (0x000a1902) bg_popup_call_pane_cp_ParamLimits

0xad30,	// (0x000a1902) bg_popup_call_pane_cp

0xad3e,	// (0x000a1910) call_thumbnail_pane

0xad46,	// (0x000a1918) popup_call_audio_in_window_g1_ParamLimits

0xad46,	// (0x000a1918) popup_call_audio_in_window_g1

0xad52,	// (0x000a1924) popup_call_audio_in_window_g2_ParamLimits

0xad52,	// (0x000a1924) popup_call_audio_in_window_g2

0xad5e,	// (0x000a1930) popup_call_audio_in_window_g3_ParamLimits

0xad5e,	// (0x000a1930) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x000a5bf8) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x000a5bf8) popup_call_audio_in_window_g

0xad6a,	// (0x000a193c) popup_call_audio_in_window_t1_ParamLimits

0xad6a,	// (0x000a193c) popup_call_audio_in_window_t1

0xad86,	// (0x000a1958) popup_call_audio_in_window_t2_ParamLimits

0xad86,	// (0x000a1958) popup_call_audio_in_window_t2

0xada2,	// (0x000a1974) popup_call_audio_in_window_t3_ParamLimits

0xada2,	// (0x000a1974) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x000a5bff) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x000a5bff) popup_call_audio_in_window_t

0xad30,	// (0x000a1902) bg_popup_call_pane_cp01_ParamLimits

0xad30,	// (0x000a1902) bg_popup_call_pane_cp01

0xad3e,	// (0x000a1910) call_thumbnail_pane_cp02

0xadb5,	// (0x000a1987) call_type_pane_cp022

0xadbd,	// (0x000a198f) popup_call_audio_out_window_g1_ParamLimits

0xadbd,	// (0x000a198f) popup_call_audio_out_window_g1

0xadcf,	// (0x000a19a1) popup_call_audio_out_window_g2_ParamLimits

0xadcf,	// (0x000a19a1) popup_call_audio_out_window_g2

0xaddb,	// (0x000a19ad) popup_call_audio_out_window_g3_ParamLimits

0xaddb,	// (0x000a19ad) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x000a5c06) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x000a5c06) popup_call_audio_out_window_g

0xaded,	// (0x000a19bf) popup_call_audio_out_window_t1_ParamLimits

0xaded,	// (0x000a19bf) popup_call_audio_out_window_t1

0xae05,	// (0x000a19d7) popup_call_audio_out_window_t2_ParamLimits

0xae05,	// (0x000a19d7) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x000a5c0d) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x000a5c0d) popup_call_audio_out_window_t

0xae1a,	// (0x000a19ec) bg_popup_call_pane_ParamLimits

0xae1a,	// (0x000a19ec) bg_popup_call_pane

0x0cf5,	// (0x000978c7) call_thumbnail_pane_cp_ParamLimits

0x0cf5,	// (0x000978c7) call_thumbnail_pane_cp

0xae9e,	// (0x000a1a70) call_type_pane_cp01_ParamLimits

0xae9e,	// (0x000a1a70) call_type_pane_cp01

0xaee2,	// (0x000a1ab4) popup_call_audio_first_window_g1_ParamLimits

0xaee2,	// (0x000a1ab4) popup_call_audio_first_window_g1

0xaf2e,	// (0x000a1b00) popup_call_audio_first_window_g2_ParamLimits

0xaf2e,	// (0x000a1b00) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x000a5c12) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x000a5c12) popup_call_audio_first_window_g

0xaf72,	// (0x000a1b44) popup_call_audio_first_window_t1_ParamLimits

0xaf72,	// (0x000a1b44) popup_call_audio_first_window_t1

0xb14f,	// (0x000a1d21) popup_call_audio_first_window_t4_ParamLimits

0xb14f,	// (0x000a1d21) popup_call_audio_first_window_t4

0xb1db,	// (0x000a1dad) popup_call_audio_first_window_t5_ParamLimits

0xb1db,	// (0x000a1dad) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x000a5c17) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x000a5c17) popup_call_audio_first_window_t

0xb20a,	// (0x000a1ddc) bg_popup_call_pane_cp02

0xb214,	// (0x000a1de6) call_type_pane_cp023

0xb21c,	// (0x000a1dee) popup_call_audio_wait_window_g1

0xb224,	// (0x000a1df6) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x000a5c1e) popup_call_audio_wait_window_g

0xb22c,	// (0x000a1dfe) popup_call_audio_wait_window_t3

0xb23a,	// (0x000a1e0c) bg_popup_call_pane_cp03_ParamLimits

0xb23a,	// (0x000a1e0c) bg_popup_call_pane_cp03

0xb29a,	// (0x000a1e6c) call_thumbnail_pane_cp011_ParamLimits

0xb29a,	// (0x000a1e6c) call_thumbnail_pane_cp011

0xb2a6,	// (0x000a1e78) call_type_pane_cp034_ParamLimits

0xb2a6,	// (0x000a1e78) call_type_pane_cp034

0xb2e2,	// (0x000a1eb4) popup_call_audio_second_window_g1_ParamLimits

0xb2e2,	// (0x000a1eb4) popup_call_audio_second_window_g1

0xb31e,	// (0x000a1ef0) popup_call_audio_second_window_g2_ParamLimits

0xb31e,	// (0x000a1ef0) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x000a5c23) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x000a5c23) popup_call_audio_second_window_g

0xb35a,	// (0x000a1f2c) popup_call_audio_second_window_t1_ParamLimits

0xb35a,	// (0x000a1f2c) popup_call_audio_second_window_t1

0xb3db,	// (0x000a1fad) popup_call_audio_second_window_t2_ParamLimits

0xb3db,	// (0x000a1fad) popup_call_audio_second_window_t2

0xb411,	// (0x000a1fe3) popup_call_audio_second_window_t3_ParamLimits

0xb411,	// (0x000a1fe3) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x000a5c28) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x000a5c28) popup_call_audio_second_window_t

0xb20a,	// (0x000a1ddc) bg_popup_call_pane_cp04

0xb447,	// (0x000a2019) list_conf_pane

0xb44f,	// (0x000a2021) popup_call_audio_conf_window_t1

0xb45d,	// (0x000a202f) call_thumbnail_pane_g1

0xb465,	// (0x000a2037) bg_pinb_pane_ParamLimits

0xb465,	// (0x000a2037) bg_pinb_pane

0xb473,	// (0x000a2045) find_pinb_pane

0xb465,	// (0x000a2037) listscroll_pinb_pane_ParamLimits

0xb465,	// (0x000a2037) listscroll_pinb_pane

0xb47d,	// (0x000a204f) pinb_bg_pane_g1

0xb47d,	// (0x000a204f) pinb_bg_pane_g2

0xb47d,	// (0x000a204f) pinb_bg_pane_g3

0xb47d,	// (0x000a204f) pinb_bg_pane_g4

0xb47d,	// (0x000a204f) pinb_bg_pane_g5

0xb47d,	// (0x000a204f) pinb_bg_pane_g6

0xb47d,	// (0x000a204f) pinb_bg_pane_g7

0xb47d,	// (0x000a204f) pinb_bg_pane_g8

0xb47d,	// (0x000a204f) pinb_bg_pane_g9

0xb47d,	// (0x000a204f) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x000a5c2f) pinb_bg_pane_g

0xacbc,	// (0x000a188e) grid_pinb_pane

0xacbc,	// (0x000a188e) list_pinb_pane

0xb487,	// (0x000a2059) scroll_pane_cp01_ParamLimits

0xb487,	// (0x000a2059) scroll_pane_cp01

0xb495,	// (0x000a2067) find_pinb_pane_g1_ParamLimits

0xb495,	// (0x000a2067) find_pinb_pane_g1

0xb4ad,	// (0x000a207f) find_pinb_pane_t1

0xb4bf,	// (0x000a2091) find_pinb_pane_t2

0x0001,

0xf077,	// (0x000a5c49) find_pinb_pane_t

0xb4d4,	// (0x000a20a6) input_focus_pane_cp01_ParamLimits

0xb4d4,	// (0x000a20a6) input_focus_pane_cp01

0xb4e0,	// (0x000a20b2) cell_pinb_pane_ParamLimits

0xb4e0,	// (0x000a20b2) cell_pinb_pane

0xb4ee,	// (0x000a20c0) cell_pinb_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_pinb_pane_g1

0xb4fc,	// (0x000a20ce) cell_pinb_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) cell_pinb_pane_g2

0xb4fc,	// (0x000a20ce) cell_pinb_pane_g3_ParamLimits

0xb4fc,	// (0x000a20ce) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x000a5c4e) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x000a5c4e) cell_pinb_pane_g

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp01

0xb4e0,	// (0x000a20b2) list_pinb_item_pane_ParamLimits

0xb4e0,	// (0x000a20b2) list_pinb_item_pane

0xacbc,	// (0x000a188e) list_highlight_pane_cp02

0xb50a,	// (0x000a20dc) list_pinb_item_pane_g1_ParamLimits

0xb50a,	// (0x000a20dc) list_pinb_item_pane_g1

0xb4fc,	// (0x000a20ce) list_pinb_item_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) list_pinb_item_pane_g2

0xb4ee,	// (0x000a20c0) list_pinb_item_pane_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_pinb_item_pane_g3

0xb4fc,	// (0x000a20ce) list_pinb_item_pane_g4_ParamLimits

0xb4fc,	// (0x000a20ce) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x000a5c55) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x000a5c55) list_pinb_item_pane_g

0xb518,	// (0x000a20ea) list_pinb_item_pane_t1_ParamLimits

0xb518,	// (0x000a20ea) list_pinb_item_pane_t1

0x0d37,	// (0x00097909) calc_display_pane

0x0d5c,	// (0x0009792e) calc_paper_pane

0x0d7f,	// (0x00097951) grid_calc_pane

0xacbc,	// (0x000a188e) bg_list_pane_cp01

0xb52c,	// (0x000a20fe) clock_g1

0xb52c,	// (0x000a20fe) clock_g2

0x0001,

0xf08c,	// (0x000a5c5e) clock_g

0xb536,	// (0x000a2108) clock_t1_ParamLimits

0xb536,	// (0x000a2108) clock_t1

0xb54a,	// (0x000a211c) clock_t2_ParamLimits

0xb54a,	// (0x000a211c) clock_t2

0xb54a,	// (0x000a211c) clock_t3_ParamLimits

0xb54a,	// (0x000a211c) clock_t3

0xb54a,	// (0x000a211c) clock_t4_ParamLimits

0xb54a,	// (0x000a211c) clock_t4

0xb536,	// (0x000a2108) clock_t5_ParamLimits

0xb536,	// (0x000a2108) clock_t5

0xb54a,	// (0x000a211c) clock_t6_ParamLimits

0xb54a,	// (0x000a211c) clock_t6

0xb54a,	// (0x000a211c) clock_t7_ParamLimits

0xb54a,	// (0x000a211c) clock_t7

0xb54a,	// (0x000a211c) clock_t8_ParamLimits

0xb54a,	// (0x000a211c) clock_t8

0xb54a,	// (0x000a211c) clock_t9_ParamLimits

0xb54a,	// (0x000a211c) clock_t9

0x0008,

0xf091,	// (0x000a5c63) clock_t_ParamLimits

0xf091,	// (0x000a5c63) clock_t

0xacbc,	// (0x000a188e) popup_clock_analogue_window_cp02

0xacbc,	// (0x000a188e) popup_clock_digital_window_cp01

0xb20a,	// (0x000a1ddc) listscroll_help_pane

0xb20a,	// (0x000a1ddc) phob_pre_status_pane

0xb55e,	// (0x000a2130) grid_qdial_pane

0xb465,	// (0x000a2037) listscroll_mce_pane

0xb465,	// (0x000a2037) bg_notes_pane

0xb568,	// (0x000a213a) list_notes_pane

0x0dad,	// (0x0009797f) scroll_pane_cp06

0xb576,	// (0x000a2148) bg_calc_paper_pane

0x9847,	// (0x000a0419) list_calc_pane

0xb58a,	// (0x000a215c) bg_calc_display_pane

0x0dc1,	// (0x00097993) calc_display_pane_t1

0x0dd3,	// (0x000979a5) calc_display_pane_t2

0x9861,	// (0x000a0433) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000a5c76) calc_display_pane_t

0x0de5,	// (0x000979b7) cell_calc_pane_ParamLimits

0x0de5,	// (0x000979b7) cell_calc_pane

0xb596,	// (0x000a2168) bg_calc_paper_pane_g1

0xb5a2,	// (0x000a2174) bg_calc_paper_pane_g2

0xb5ae,	// (0x000a2180) bg_calc_paper_pane_g3

0xb5ba,	// (0x000a218c) bg_calc_paper_pane_g4

0xb5c6,	// (0x000a2198) bg_calc_paper_pane_g5

0x0e1a,	// (0x000979ec) bg_calc_paper_pane_g6

0x0e29,	// (0x000979fb) bg_calc_paper_pane_g7

0x0e38,	// (0x00097a0a) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000a5c7d) bg_calc_paper_pane_g

0x0e4b,	// (0x00097a1d) calc_bg_paper_pane_g9

0x0e5e,	// (0x00097a30) list_calc_item_pane_ParamLimits

0x0e5e,	// (0x00097a30) list_calc_item_pane

0xb5d2,	// (0x000a21a4) list_calc_item_pane_g1

0x9873,	// (0x000a0445) list_calc_item_pane_t1_ParamLimits

0x9873,	// (0x000a0445) list_calc_item_pane_t1

0x0e73,	// (0x00097a45) list_calc_item_pane_t2_ParamLimits

0x0e73,	// (0x00097a45) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000a5c8e) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000a5c8e) list_calc_item_pane_t

0xb47d,	// (0x000a204f) cell_calc_pane_g1

0xb5df,	// (0x000a21b1) grid_highlight_pane_cp02

0xeda3,	// (0x000a5975) bg_calc_display_pane_g1

0x0ea5,	// (0x00097a77) bg_calc_display_pane_g2

0xb601,	// (0x000a21d3) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000a5c98) bg_calc_display_pane_g

0x0eaf,	// (0x00097a81) cell_qdial_pane_ParamLimits

0x0eaf,	// (0x00097a81) cell_qdial_pane

0x0ec3,	// (0x00097a95) cell_qdial_pane_g1_ParamLimits

0x0ec3,	// (0x00097a95) cell_qdial_pane_g1

0x0ed9,	// (0x00097aab) cell_qdial_pane_g2_ParamLimits

0x0ed9,	// (0x00097aab) cell_qdial_pane_g2

0xb60a,	// (0x000a21dc) cell_qdial_pane_g3_ParamLimits

0xb60a,	// (0x000a21dc) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000a5c9f) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000a5c9f) cell_qdial_pane_g

0x0eff,	// (0x00097ad1) cell_qdial_pane_t1_ParamLimits

0x0eff,	// (0x00097ad1) cell_qdial_pane_t1

0x0f17,	// (0x00097ae9) cell_qdial_pane_t2_ParamLimits

0x0f17,	// (0x00097ae9) cell_qdial_pane_t2

0x0f2a,	// (0x00097afc) cell_qdial_pane_t3_ParamLimits

0x0f2a,	// (0x00097afc) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000a5ca8) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000a5ca8) cell_qdial_pane_t

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp04

0xb616,	// (0x000a21e8) thumbnail_qdial_pane_ParamLimits

0xb616,	// (0x000a21e8) thumbnail_qdial_pane

0xb672,	// (0x000a2244) list_help_pane

0xb67b,	// (0x000a224d) scroll_pane_cp02

0x0f3d,	// (0x00097b0f) help_list_pane_t1_ParamLimits

0x0f3d,	// (0x00097b0f) help_list_pane_t1

0xb684,	// (0x000a2256) bg_notes_pane_g2

0xb68c,	// (0x000a225e) bg_notes_pane_g3

0xb694,	// (0x000a2266) notes_bg_pane_g1

0xb69c,	// (0x000a226e) notes_bg_pane_g4

0xb6a4,	// (0x000a2276) notes_bg_pane_g5

0xb6ac,	// (0x000a227e) notes_bg_pane_g6

0xb6b4,	// (0x000a2286) notes_bg_pane_g7

0xb6bc,	// (0x000a228e) notes_bg_pane_g8

0xb6c4,	// (0x000a2296) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000a5cc6) notes_bg_pane_g

0x0f5c,	// (0x00097b2e) list_notes_text_pane_ParamLimits

0x0f5c,	// (0x00097b2e) list_notes_text_pane

0xb6cc,	// (0x000a229e) list_notes_text_pane_g1

0xb6d5,	// (0x000a22a7) list_notes_text_pane_t1

0x0f72,	// (0x00097b44) listscroll_cale_week_pane

0x0f9e,	// (0x00097b70) bg_cale_heading_pane

0xb6f4,	// (0x000a22c6) bg_cale_pane_cp01

0x0fb6,	// (0x00097b88) cale_week_corner_pane

0x0fd5,	// (0x00097ba7) cale_week_day_heading_pane

0x0ff2,	// (0x00097bc4) cale_week_scroll_pane_g1

0x1005,	// (0x00097bd7) cale_week_scroll_pane_g2

0x101d,	// (0x00097bef) cale_week_scroll_pane_g3

0x1035,	// (0x00097c07) cale_week_scroll_pane_g4

0x104d,	// (0x00097c1f) cale_week_scroll_pane_g5

0x106d,	// (0x00097c3f) cale_week_scroll_pane_g6

0x108d,	// (0x00097c5f) cale_week_scroll_pane_g7

0x10ad,	// (0x00097c7f) cale_week_scroll_pane_g8

0x10d1,	// (0x00097ca3) cale_week_scroll_pane_g9

0x10e9,	// (0x00097cbb) cale_week_scroll_pane_g10

0x1101,	// (0x00097cd3) cale_week_scroll_pane_g11

0x1119,	// (0x00097ceb) cale_week_scroll_pane_g12

0x1131,	// (0x00097d03) cale_week_scroll_pane_g13

0x1131,	// (0x00097d03) cale_week_scroll_pane_g14

0x1131,	// (0x00097d03) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x000a5cd5) cale_week_scroll_pane_g

0x116d,	// (0x00097d3f) cale_week_time_pane

0x1191,	// (0x00097d63) grid_cale_week_pane

0xb723,	// (0x000a22f5) scroll_pane_cp08

0x11b7,	// (0x00097d89) cell_cale_week_pane_ParamLimits

0x11b7,	// (0x00097d89) cell_cale_week_pane

0x1245,	// (0x00097e17) cale_week_day_heading_pane_t1

0x126f,	// (0x00097e41) cale_week_day_heading_pane_t2

0x129e,	// (0x00097e70) cale_week_day_heading_pane_t3

0x12cd,	// (0x00097e9f) cale_week_day_heading_pane_t4

0x12fc,	// (0x00097ece) cale_week_day_heading_pane_t5

0x1333,	// (0x00097f05) cale_week_day_heading_pane_t6

0x136a,	// (0x00097f3c) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x000a5cf6) cale_week_day_heading_pane_t

0xb740,	// (0x000a2312) bg_cale_side_pane

0x1394,	// (0x00097f66) cale_week_time_pane_t1

0x13ae,	// (0x00097f80) cale_week_time_pane_t2

0x13c8,	// (0x00097f9a) cale_week_time_pane_t3

0x13e2,	// (0x00097fb4) cale_week_time_pane_t4

0x13fc,	// (0x00097fce) cale_week_time_pane_t5

0x1416,	// (0x00097fe8) cale_week_time_pane_t6

0x1430,	// (0x00098002) cale_week_time_pane_t7

0x144a,	// (0x0009801c) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x000a5d05) cale_week_time_pane_t

0x146a,	// (0x0009803c) cell_cale_week_pane_g2

0x148e,	// (0x00098060) cell_cale_week_pane_g3_ParamLimits

0x148e,	// (0x00098060) cell_cale_week_pane_g3

0xb74e,	// (0x000a2320) grid_highlight_pane_cp07

0xb756,	// (0x000a2328) listscroll_gms_pane

0xb760,	// (0x000a2332) grid_gms_pane

0xb769,	// (0x000a233b) listscroll_gms_pane_g1

0xb771,	// (0x000a2343) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x000a5d16) listscroll_gms_pane_g

0x14a6,	// (0x00098078) scroll_pane_cp010

0x14b1,	// (0x00098083) cell_gms_pane_ParamLimits

0x14b1,	// (0x00098083) cell_gms_pane

0x14c3,	// (0x00098095) cell_gms_pane_g1

0xb779,	// (0x000a234b) cell_gms_pane_g2

0xb6cc,	// (0x000a229e) cell_gms_pane_g3

0xb781,	// (0x000a2353) cell_gms_pane_g4

0x0003,

0xf149,	// (0x000a5d1b) cell_gms_pane_g

0xb78a,	// (0x000a235c) grid_highlight_pane_cp09

0x3162,	// (0x00099d34) phob_pre_status_pane_g1

0x316a,	// (0x00099d3c) phob_pre_status_pane_g2

0x3172,	// (0x00099d44) phob_pre_status_pane_g3

0x317a,	// (0x00099d4c) phob_pre_status_pane_g4

0x0004,

0xf483,	// (0x000a6055) phob_pre_status_pane_g

0x318a,	// (0x00099d5c) phob_pre_status_pane_t1

0x3198,	// (0x00099d6a) phob_pre_status_pane_t2

0x31a8,	// (0x00099d7a) phob_pre_status_pane_t3

0x0002,

0xf48e,	// (0x000a6060) phob_pre_status_pane_t

0xb792,	// (0x000a2364) bg_list_pane_cp05

0x14d3,	// (0x000980a5) grid_vorec_pane

0x14db,	// (0x000980ad) vorec_t1

0x14e9,	// (0x000980bb) vorec_t2

0x14f7,	// (0x000980c9) vorec_t3

0x1505,	// (0x000980d7) vorec_t4

0x9fbb,	// (0x000a0b8d) vorec_t5

0x8941,	// (0x0009f513) vorec_t6

0x0004,

0xf152,	// (0x000a5d24) vorec_t

0x894f,	// (0x0009f521) wait_bar_pane_cp01

0x1521,	// (0x000980f3) cell_vorec_pane_ParamLimits

0x1521,	// (0x000980f3) cell_vorec_pane

0x988e,	// (0x000a0460) cell_vorec_pane_g1

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp05

0xb487,	// (0x000a2059) cams_zoom_pane

0xb487,	// (0x000a2059) image_vga_pane

0xb4ee,	// (0x000a20c0) main_camera_pane_g1

0xb4ee,	// (0x000a20c0) main_camera_pane_g2

0xb4ee,	// (0x000a20c0) main_camera_pane_g3

0xb4ee,	// (0x000a20c0) main_camera_pane_g4

0xb4ee,	// (0x000a20c0) main_camera_pane_g5

0xb4ee,	// (0x000a20c0) main_camera_pane_g6

0xb4ee,	// (0x000a20c0) main_camera_pane_g7

0x0007,

0xf15d,	// (0x000a5d2f) main_camera_pane_g

0xb536,	// (0x000a2108) main_camera_pane_t1

0xb536,	// (0x000a2108) main_camera_pane_t2

0x0001,

0xf16e,	// (0x000a5d40) main_camera_pane_t

0x1548,	// (0x0009811a) cams_zoom_pane_cp_ParamLimits

0x1548,	// (0x0009811a) cams_zoom_pane_cp

0x157c,	// (0x0009814e) image_cif_pane_ParamLimits

0x157c,	// (0x0009814e) image_cif_pane

0xacbc,	// (0x000a188e) image_subqcif_pane

0x158e,	// (0x00098160) main_video_pane_g1_ParamLimits

0x158e,	// (0x00098160) main_video_pane_g1

0x15bc,	// (0x0009818e) main_video_pane_g2_ParamLimits

0x15bc,	// (0x0009818e) main_video_pane_g2

0x15f6,	// (0x000981c8) main_video_pane_g3_ParamLimits

0x15f6,	// (0x000981c8) main_video_pane_g3

0x15f6,	// (0x000981c8) main_video_pane_g4_ParamLimits

0x15f6,	// (0x000981c8) main_video_pane_g4

0x162a,	// (0x000981fc) main_video_pane_g5_ParamLimits

0x162a,	// (0x000981fc) main_video_pane_g5

0xb79a,	// (0x000a236c) main_video_pane_g6_ParamLimits

0xb79a,	// (0x000a236c) main_video_pane_g6

0x0006,

0xf173,	// (0x000a5d45) main_video_pane_g_ParamLimits

0xf173,	// (0x000a5d45) main_video_pane_g

0x1646,	// (0x00098218) main_video_pane_t1_ParamLimits

0x1646,	// (0x00098218) main_video_pane_t1

0xb52c,	// (0x000a20fe) cams_zoom_pane_g1

0xb52c,	// (0x000a20fe) cams_zoom_pane_g2

0xb52c,	// (0x000a20fe) cams_zoom_pane_g3

0xb52c,	// (0x000a20fe) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000a5d54) cams_zoom_pane_g

0xb487,	// (0x000a2059) grid_cams_pane

0xb487,	// (0x000a2059) linegrid_cams_pane

0x168a,	// (0x0009825c) cell_cams_pane_ParamLimits

0x168a,	// (0x0009825c) cell_cams_pane

0xacbc,	// (0x000a188e) cams_burst_image_pane

0xb52c,	// (0x000a20fe) cell_cams_pane_g1

0xacbc,	// (0x000a188e) grid_highlight_pane_cp03

0xb47d,	// (0x000a204f) mp_bg_pane_g1

0xacbc,	// (0x000a188e) bg_list_pane_cp03

0xacbc,	// (0x000a188e) bg_mp_pane

0xacbc,	// (0x000a188e) grid_mp_pane

0xb52c,	// (0x000a20fe) media_player_g1

0xbc90,	// (0x000a2862) media_player_t1

0xbc90,	// (0x000a2862) media_player_t2

0xbc90,	// (0x000a2862) media_player_t3

0xbc90,	// (0x000a2862) media_player_t4

0xbc90,	// (0x000a2862) media_player_t5

0xbc90,	// (0x000a2862) media_player_t6

0xbc90,	// (0x000a2862) media_player_t7

0x0006,

0xf474,	// (0x000a6046) media_player_t

0xacbc,	// (0x000a188e) wait_bar_pane_cp02

0xf467,	// (0x000a6039) main_usb_pane_t

0xbefb,	// (0x000a2acd) cell_mp_pane

0xb47d,	// (0x000a204f) cell_mp_pane_g1

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp06

0xb7b4,	// (0x000a2386) grid_skin_colour_pane

0xb7bc,	// (0x000a238e) list_highlight_pane_cp03

0x169f,	// (0x00098271) skin_g1

0xb7c4,	// (0x000a2396) skin_t1

0xb7d3,	// (0x000a23a5) skin_t2

0x0001,

0xf1b0,	// (0x000a5d82) skin_t

0x16a7,	// (0x00098279) cell_skin_colour_pane_ParamLimits

0x16a7,	// (0x00098279) cell_skin_colour_pane

0xb7e1,	// (0x000a23b3) cell_skin_colour_pane_g1

0x1720,	// (0x000982f2) call_video_g1_ParamLimits

0x1720,	// (0x000982f2) call_video_g1

0x173c,	// (0x0009830e) call_video_g2_ParamLimits

0x173c,	// (0x0009830e) call_video_g2

0x0001,

0xf1b5,	// (0x000a5d87) call_video_g_ParamLimits

0xf1b5,	// (0x000a5d87) call_video_g

0x178e,	// (0x00098360) call_video_uplink_pane_cp1_ParamLimits

0x178e,	// (0x00098360) call_video_uplink_pane_cp1

0xb7f3,	// (0x000a23c5) call_video_uplink_pane_cp2

0x182d,	// (0x000983ff) video_down_crop_pane_ParamLimits

0x182d,	// (0x000983ff) video_down_crop_pane

0x1916,	// (0x000984e8) video_down_pane_ParamLimits

0x1916,	// (0x000984e8) video_down_pane

0xb7fb,	// (0x000a23cd) video_down_subqcif_pane_ParamLimits

0xb7fb,	// (0x000a23cd) video_down_subqcif_pane

0xb813,	// (0x000a23e5) video_down_subqcif_pane_cp_ParamLimits

0xb813,	// (0x000a23e5) video_down_subqcif_pane_cp

0xb839,	// (0x000a240b) im_reading_pane_ParamLimits

0xb839,	// (0x000a240b) im_reading_pane

0x1a26,	// (0x000985f8) im_writing_pane_ParamLimits

0x1a26,	// (0x000985f8) im_writing_pane

0x1a3c,	// (0x0009860e) im_reading_pane_t1

0xb853,	// (0x000a2425) list_im_pane

0xb864,	// (0x000a2436) scroll_pane_cp07

0x1a76,	// (0x00098648) im_writing_pane_t1_ParamLimits

0x1a76,	// (0x00098648) im_writing_pane_t1

0xb87d,	// (0x000a244f) im_writing_pane_t2_ParamLimits

0xb87d,	// (0x000a244f) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000a5d91) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000a5d91) im_writing_pane_t

0xb20a,	// (0x000a1ddc) input_focus_pane_cp04

0xb20a,	// (0x000a1ddc) input_focus_pane_cp05

0x1a8b,	// (0x0009865d) list_im_single_pane_ParamLimits

0x1a8b,	// (0x0009865d) list_im_single_pane

0x1aa0,	// (0x00098672) list_single_im_pane_t1

0xb792,	// (0x000a2364) blid_accuracy_pane

0xb792,	// (0x000a2364) blid_compass_pane

0xd45b,	// (0x000a402d) main_location_t1

0xd45b,	// (0x000a402d) main_location_t2

0xd45b,	// (0x000a402d) main_location_t3

0x0002,

0x009b,	// (0x00096c6d) main_location_t

0xb20a,	// (0x000a1ddc) aid_levels_location

0xb47d,	// (0x000a204f) blid_accuracy_pane_g1

0xb47d,	// (0x000a204f) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x000a5de0) blid_accuracy_pane_g

0xb8c5,	// (0x000a2497) wml_content_pane

0xb903,	// (0x000a24d5) wml_button_pane_ParamLimits

0xb903,	// (0x000a24d5) wml_button_pane

0x1aaf,	// (0x00098681) wml_list_single_large_pane_ParamLimits

0x1aaf,	// (0x00098681) wml_list_single_large_pane

0x1ac4,	// (0x00098696) wml_list_single_medium_pane_ParamLimits

0x1ac4,	// (0x00098696) wml_list_single_medium_pane

0x1adb,	// (0x000986ad) wml_list_single_small_pane_ParamLimits

0x1adb,	// (0x000986ad) wml_list_single_small_pane

0xb917,	// (0x000a24e9) wml_selection_box_pane_ParamLimits

0xb917,	// (0x000a24e9) wml_selection_box_pane

0xb92a,	// (0x000a24fc) wml_list_single_pane_t1

0xb939,	// (0x000a250b) wml_list_single_medium_pane_t1

0xb948,	// (0x000a251a) wml_list_single_large_pane_t1

0xb957,	// (0x000a2529) input_focus_pane_cp02_ParamLimits

0xb957,	// (0x000a2529) input_focus_pane_cp02

0xb96a,	// (0x000a253c) wml_selection_box_pane_g1

0xb973,	// (0x000a2545) wml_selection_box_pane_t1_ParamLimits

0xb973,	// (0x000a2545) wml_selection_box_pane_t1

0xb465,	// (0x000a2037) bg_wml_button_pane_ParamLimits

0xb465,	// (0x000a2037) bg_wml_button_pane

0xb98b,	// (0x000a255d) wml_button_pane_g1

0xb993,	// (0x000a2565) wml_button_pane_t1

0xb98b,	// (0x000a255d) wml_button_bg_pane_g1

0xb9a3,	// (0x000a2575) wml_button_bg_pane_g2

0xb9ab,	// (0x000a257d) wml_button_bg_pane_g3

0xb9b3,	// (0x000a2585) wml_button_bg_pane_g4

0xb9bb,	// (0x000a258d) wml_button_bg_pane_g5

0xb9c3,	// (0x000a2595) wml_button_bg_pane_g6

0xb9cb,	// (0x000a259d) wml_button_bg_pane_g7

0xb9dc,	// (0x000a25ae) wml_button_bg_pane_g8

0xb9e4,	// (0x000a25b6) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000a5d96) wml_button_bg_pane_g

0x1af4,	// (0x000986c6) bg_list_pane_cp02

0xb9ec,	// (0x000a25be) mce_header_pane_ParamLimits

0xb9ec,	// (0x000a25be) mce_header_pane

0xba02,	// (0x000a25d4) mce_icon_pane

0xba02,	// (0x000a25d4) mce_image_pane

0xba0b,	// (0x000a25dd) mce_text_pane_ParamLimits

0xba0b,	// (0x000a25dd) mce_text_pane

0x1afc,	// (0x000986ce) scroll_pane_cp03

0xb8fb,	// (0x000a24cd) scroll_pane_cp04

0xba1e,	// (0x000a25f0) scroll_pane_cp05_ParamLimits

0xba1e,	// (0x000a25f0) scroll_pane_cp05

0x1b06,	// (0x000986d8) mce_header_field_pane_ParamLimits

0x1b06,	// (0x000986d8) mce_header_field_pane

0x1b1d,	// (0x000986ef) mce_header_field_pane_2_ParamLimits

0x1b1d,	// (0x000986ef) mce_header_field_pane_2

0x1b33,	// (0x00098705) mce_header_field_pane_3

0x1b3b,	// (0x0009870d) list_single_mce_message_pane_ParamLimits

0x1b3b,	// (0x0009870d) list_single_mce_message_pane

0x1b51,	// (0x00098723) list_single_mce_smart_pane_ParamLimits

0x1b51,	// (0x00098723) list_single_mce_smart_pane

0xba2a,	// (0x000a25fc) input_focus_pane_cp03

0xba33,	// (0x000a2605) list_header_data_pane

0x1b72,	// (0x00098744) mce_header_field_pane_t1

0x1b82,	// (0x00098754) list_single_mce_header_pane_ParamLimits

0x1b82,	// (0x00098754) list_single_mce_header_pane

0xba3b,	// (0x000a260d) list_single_mce_header_pane_t1

0xba4a,	// (0x000a261c) list_single_mce_message_pane_g1

0xba52,	// (0x000a2624) list_single_mce_message_pane_t1

0x1bbc,	// (0x0009878e) bg_cale_heading_pane_cp01_ParamLimits

0x1bbc,	// (0x0009878e) bg_cale_heading_pane_cp01

0xba60,	// (0x000a2632) bg_cale_pane_cp02_ParamLimits

0xba60,	// (0x000a2632) bg_cale_pane_cp02

0x1bf6,	// (0x000987c8) cale_month_corner_pane

0x1c15,	// (0x000987e7) cale_month_day_heading_pane_ParamLimits

0x1c15,	// (0x000987e7) cale_month_day_heading_pane

0x1c67,	// (0x00098839) cale_month_pane_g1_ParamLimits

0x1c67,	// (0x00098839) cale_month_pane_g1

0x1c96,	// (0x00098868) cale_month_pane_g2_ParamLimits

0x1c96,	// (0x00098868) cale_month_pane_g2

0x1cc6,	// (0x00098898) cale_month_pane_g3_ParamLimits

0x1cc6,	// (0x00098898) cale_month_pane_g3

0x1d02,	// (0x000988d4) cale_month_pane_g4_ParamLimits

0x1d02,	// (0x000988d4) cale_month_pane_g4

0x1d3e,	// (0x00098910) cale_month_pane_g5_ParamLimits

0x1d3e,	// (0x00098910) cale_month_pane_g5

0x1d86,	// (0x00098958) cale_month_pane_g6_ParamLimits

0x1d86,	// (0x00098958) cale_month_pane_g6

0x1dd2,	// (0x000989a4) cale_month_pane_g7_ParamLimits

0x1dd2,	// (0x000989a4) cale_month_pane_g7

0x1e22,	// (0x000989f4) cale_month_pane_g8_ParamLimits

0x1e22,	// (0x000989f4) cale_month_pane_g8

0x1e76,	// (0x00098a48) cale_month_pane_g9_ParamLimits

0x1e76,	// (0x00098a48) cale_month_pane_g9

0x1ec8,	// (0x00098a9a) cale_month_pane_g10_ParamLimits

0x1ec8,	// (0x00098a9a) cale_month_pane_g10

0x1f1a,	// (0x00098aec) cale_month_pane_g11_ParamLimits

0x1f1a,	// (0x00098aec) cale_month_pane_g11

0x1f6c,	// (0x00098b3e) cale_month_pane_g12_ParamLimits

0x1f6c,	// (0x00098b3e) cale_month_pane_g12

0x1fbe,	// (0x00098b90) cale_month_pane_g13_ParamLimits

0x1fbe,	// (0x00098b90) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000a5da9) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000a5da9) cale_month_pane_g

0x2010,	// (0x00098be2) cale_month_week_pane

0x2034,	// (0x00098c06) grid_cale_month_pane_ParamLimits

0x2034,	// (0x00098c06) grid_cale_month_pane

0x207d,	// (0x00098c4f) cale_month_day_heading_pane_t1

0x20bf,	// (0x00098c91) cale_month_day_heading_pane_t2

0x20f4,	// (0x00098cc6) cale_month_day_heading_pane_t3

0x2129,	// (0x00098cfb) cale_month_day_heading_pane_t4

0x2166,	// (0x00098d38) cale_month_day_heading_pane_t5

0x21ab,	// (0x00098d7d) cale_month_day_heading_pane_t6

0x21f0,	// (0x00098dc2) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000a5dc4) cale_month_day_heading_pane_t

0xb740,	// (0x000a2312) bg_cale_side_pane_cp01

0x223d,	// (0x00098e0f) cale_month_week_pane_t1

0x2256,	// (0x00098e28) cale_month_week_pane_t2

0x226f,	// (0x00098e41) cale_month_week_pane_t3

0x2288,	// (0x00098e5a) cale_month_week_pane_t4

0x22a1,	// (0x00098e73) cale_month_week_pane_t5

0x22ba,	// (0x00098e8c) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x000a5dd3) cale_month_week_pane_t

0x22d3,	// (0x00098ea5) cell_cale_month_pane_ParamLimits

0x22d3,	// (0x00098ea5) cell_cale_month_pane

0x9898,	// (0x000a046a) cell_cale_month_pane_g1

0x2401,	// (0x00098fd3) cell_cale_month_pane_t1_ParamLimits

0x2401,	// (0x00098fd3) cell_cale_month_pane_t1

0xb74e,	// (0x000a2320) grid_highlight_pane_cp08

0xb47d,	// (0x000a204f) main_smil_g1

0x242d,	// (0x00098fff) smil_status_pane

0xba9f,	// (0x000a2671) smil_text_pane

0xb6c4,	// (0x000a2296) bg_popup_call3_rect_pane_g8

0xb6bc,	// (0x000a228e) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x000a5de5) bg_popup_call3_rect_pane_g

0xd524,	// (0x000a40f6) smil_status_volume_pane_g1

0xbaa9,	// (0x000a267b) smil_status_pane_t1

0x99e6,	// (0x000a05b8) volume_smil_pane

0xbac0,	// (0x000a2692) list_smil_text_pane

0x2442,	// (0x00099014) scroll_pane_cp011

0x244d,	// (0x0009901f) smil_text_list_pane_t1_ParamLimits

0x244d,	// (0x0009901f) smil_text_list_pane_t1

0x98a4,	// (0x000a0476) aid_volume_smil_ParamLimits

0x98a4,	// (0x000a0476) aid_volume_smil

0xb47d,	// (0x000a204f) smil_volume_pane_g1

0xb47d,	// (0x000a204f) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x000a5de0) smil_volume_pane_g

0x2491,	// (0x00099063) listscroll_cale_day_pane

0xbaca,	// (0x000a269c) bg_cale_pane

0xbae2,	// (0x000a26b4) list_cale_pane

0xbb05,	// (0x000a26d7) scroll_pane_cp09

0xb694,	// (0x000a2266) cale_bg_pane_g1

0xb68c,	// (0x000a225e) cale_bg_pane_g2

0xb684,	// (0x000a2256) cale_bg_pane_g3

0xb6a4,	// (0x000a2276) cale_bg_pane_g4

0xb69c,	// (0x000a226e) cale_bg_pane_g5

0xb6ac,	// (0x000a227e) cale_bg_pane_g6

0xb6b4,	// (0x000a2286) cale_bg_pane_g7

0xb6c4,	// (0x000a2296) cale_bg_pane_g8

0xb6bc,	// (0x000a228e) cale_bg_pane_g9

0x0008,

0xf213,	// (0x000a5de5) cale_bg_pane_g

0x24ab,	// (0x0009907d) list_cale_time_pane_ParamLimits

0x24ab,	// (0x0009907d) list_cale_time_pane

0xbb16,	// (0x000a26e8) list_cale_time_pane_g1_ParamLimits

0xbb16,	// (0x000a26e8) list_cale_time_pane_g1

0xbb22,	// (0x000a26f4) list_cale_time_pane_g2_ParamLimits

0xbb22,	// (0x000a26f4) list_cale_time_pane_g2

0x24c1,	// (0x00099093) list_cale_time_pane_g3_ParamLimits

0x24c1,	// (0x00099093) list_cale_time_pane_g3

0x24cf,	// (0x000990a1) list_cale_time_pane_g4_ParamLimits

0x24cf,	// (0x000990a1) list_cale_time_pane_g4

0x24dd,	// (0x000990af) list_cale_time_pane_g5_ParamLimits

0x24dd,	// (0x000990af) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x000a5df8) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x000a5df8) list_cale_time_pane_g

0xbb3c,	// (0x000a270e) list_cale_time_pane_t1_ParamLimits

0xbb3c,	// (0x000a270e) list_cale_time_pane_t1

0xbb64,	// (0x000a2736) list_cale_time_pane_t2_ParamLimits

0xbb64,	// (0x000a2736) list_cale_time_pane_t2

0x2776,	// (0x00099348) aid_blid_cardinal_pane

0x27b4,	// (0x00099386) compass_pane_t4

0xbb8c,	// (0x000a275e) list_cale_time_pane_t4_ParamLimits

0xbb8c,	// (0x000a275e) list_cale_time_pane_t4

0x27c2,	// (0x00099394) compass_pane_t5

0x27d0,	// (0x000993a2) compass_pane_t6

0x27de,	// (0x000993b0) compass_pane_t7

0xc015,	// (0x000a2be7) navi_pane_cc_t1

0xc1f2,	// (0x000a2dc4) aid_phob_thumbnail_center_pane

0x2bb4,	// (0x00099786) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x000a5e05) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x000a5e05) list_cale_time_pane_t

0xad30,	// (0x000a1902) bg_popup_window_pane_cp02_ParamLimits

0xad30,	// (0x000a1902) bg_popup_window_pane_cp02

0xbbb4,	// (0x000a2786) heading_pane_cp01_ParamLimits

0xbbb4,	// (0x000a2786) heading_pane_cp01

0xbbc0,	// (0x000a2792) loc_req_pane_ParamLimits

0xbbc0,	// (0x000a2792) loc_req_pane

0xbbd2,	// (0x000a27a4) loc_type_pane_ParamLimits

0xbbd2,	// (0x000a27a4) loc_type_pane

0xbbe4,	// (0x000a27b6) loc_type_pane_t1_ParamLimits

0xbbe4,	// (0x000a27b6) loc_type_pane_t1

0xbbf6,	// (0x000a27c8) loc_type_pane_t2_ParamLimits

0xbbf6,	// (0x000a27c8) loc_type_pane_t2

0xbc08,	// (0x000a27da) loc_type_pane_t3_ParamLimits

0xbc08,	// (0x000a27da) loc_type_pane_t3

0x0002,

0xf23a,	// (0x000a5e0c) loc_type_pane_t_ParamLimits

0xf23a,	// (0x000a5e0c) loc_type_pane_t

0xbc1a,	// (0x000a27ec) list_loc_req_pane

0xbc24,	// (0x000a27f6) scroll_pane_cp012

0x24eb,	// (0x000990bd) list_single_loc_request_popup_menu_pane_ParamLimits

0x24eb,	// (0x000990bd) list_single_loc_request_popup_menu_pane

0xbc2f,	// (0x000a2801) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbc2f,	// (0x000a2801) list_single_loc_request_popup_menu_pane_g1

0xbc3b,	// (0x000a280d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbc3b,	// (0x000a280d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x000a5e13) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x000a5e13) list_single_loc_request_popup_menu_pane_g

0xbc47,	// (0x000a2819) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbc47,	// (0x000a2819) list_single_loc_request_popup_menu_pane_t1

0xb465,	// (0x000a2037) bg_popup_window_pane_cp03_ParamLimits

0xb465,	// (0x000a2037) bg_popup_window_pane_cp03

0xbc5d,	// (0x000a282f) heading_loc_req_pane_ParamLimits

0xbc5d,	// (0x000a282f) heading_loc_req_pane

0x24f8,	// (0x000990ca) popup_dyc_status_message_window_g1_ParamLimits

0x24f8,	// (0x000990ca) popup_dyc_status_message_window_g1

0x250c,	// (0x000990de) popup_dyc_status_message_window_t1_ParamLimits

0x250c,	// (0x000990de) popup_dyc_status_message_window_t1

0x2521,	// (0x000990f3) popup_dyc_status_message_window_t2_ParamLimits

0x2521,	// (0x000990f3) popup_dyc_status_message_window_t2

0x2536,	// (0x00099108) popup_dyc_status_message_window_t3_ParamLimits

0x2536,	// (0x00099108) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x000a5e18) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x000a5e18) popup_dyc_status_message_window_t

0xb20a,	// (0x000a1ddc) bg_heading_pane_cp01

0xbc69,	// (0x000a283b) heading_loc_req_pane_g1

0xbc71,	// (0x000a2843) heading_loc_req_pane_g2

0xbc79,	// (0x000a284b) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x000a5e1f) heading_loc_req_pane_g

0xbc81,	// (0x000a2853) heading_loc_req_pane_t1

0xbca0,	// (0x000a2872) bg_popup_sub_pane_cp01_ParamLimits

0xbca0,	// (0x000a2872) bg_popup_sub_pane_cp01

0xbcae,	// (0x000a2880) popup_cale_events_window_g1_ParamLimits

0xbcae,	// (0x000a2880) popup_cale_events_window_g1

0xbcce,	// (0x000a28a0) popup_cale_events_window_g2_ParamLimits

0xbcce,	// (0x000a28a0) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x000a5e41) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x000a5e41) popup_cale_events_window_g

0xbcee,	// (0x000a28c0) popup_cale_events_window_t1_ParamLimits

0xbcee,	// (0x000a28c0) popup_cale_events_window_t1

0xbd00,	// (0x000a28d2) popup_cale_events_window_t2_ParamLimits

0xbd00,	// (0x000a28d2) popup_cale_events_window_t2

0xbd3e,	// (0x000a2910) popup_cale_events_window_t3_ParamLimits

0xbd3e,	// (0x000a2910) popup_cale_events_window_t3

0xbd78,	// (0x000a294a) popup_cale_events_window_t4_ParamLimits

0xbd78,	// (0x000a294a) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x000a5e46) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x000a5e46) popup_cale_events_window_t

0x256a,	// (0x0009913c) call_type_pane

0x257a,	// (0x0009914c) popup_call_status_window_g1

0x258e,	// (0x00099160) popup_call_status_window_g2

0x25a2,	// (0x00099174) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x000a5e4f) popup_call_status_window_g

0xbdae,	// (0x000a2980) call_type_pane_g1

0xbdb7,	// (0x000a2989) call_type_pane_g2

0x0001,

0xf284,	// (0x000a5e56) call_type_pane_g

0xb20a,	// (0x000a1ddc) bg_popup_sub_pane_cp02

0xbdc0,	// (0x000a2992) listscroll_popup_wml_pane

0xbdc8,	// (0x000a299a) list_wml_pane

0xbdd2,	// (0x000a29a4) scroll_pane_cp013

0xbddd,	// (0x000a29af) list_single_graphic_popup_wml_pane_ParamLimits

0xbddd,	// (0x000a29af) list_single_graphic_popup_wml_pane

0xb47d,	// (0x000a204f) list_single_graphic_popup_wml_pane_g1

0xbdf1,	// (0x000a29c3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x000a5e5b) list_single_graphic_popup_wml_pane_g

0xbdf9,	// (0x000a29cb) list_single_graphic_popup_wml_pane_t1

0xbe0f,	// (0x000a29e1) aid_call_pane

0xb45d,	// (0x000a202f) popup_clock_analogue_window_g1

0xb45d,	// (0x000a202f) popup_clock_analogue_window_g2

0x98c6,	// (0x000a0498) popup_clock_analogue_window_g3

0x98c6,	// (0x000a0498) popup_clock_analogue_window_g4

0xb47d,	// (0x000a204f) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x000a5e60) popup_clock_analogue_window_g

0x98ce,	// (0x000a04a0) popup_clock_analogue_window_t1

0x98dc,	// (0x000a04ae) clock_digital_number_pane_ParamLimits

0x98dc,	// (0x000a04ae) clock_digital_number_pane

0x98e8,	// (0x000a04ba) clock_digital_number_pane_cp02_ParamLimits

0x98e8,	// (0x000a04ba) clock_digital_number_pane_cp02

0x98f4,	// (0x000a04c6) clock_digital_number_pane_cp03_ParamLimits

0x98f4,	// (0x000a04c6) clock_digital_number_pane_cp03

0x9900,	// (0x000a04d2) clock_digital_number_pane_cp04_ParamLimits

0x9900,	// (0x000a04d2) clock_digital_number_pane_cp04

0x990c,	// (0x000a04de) clock_digital_separator_pane_ParamLimits

0x990c,	// (0x000a04de) clock_digital_separator_pane

0x9918,	// (0x000a04ea) popup_clock_digital_window_t1

0xb47d,	// (0x000a204f) clock_digital_number_pane_g1

0xb47d,	// (0x000a204f) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x000a5de0) clock_digital_number_pane_g

0xb47d,	// (0x000a204f) clock_digital_separator_pane_g1

0xb47d,	// (0x000a204f) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x000a5de0) clock_digital_separator_pane_g

0xb20a,	// (0x000a1ddc) bg_popup_window_pane_cp04

0xbe17,	// (0x000a29e9) heading_pane_cp03

0xb792,	// (0x000a2364) listscroll_popup_gms_pane

0xb20a,	// (0x000a1ddc) grid_large_graphic_popup_pane

0xbe1f,	// (0x000a29f1) listscroll_popup_gms_pane_g1

0xbe28,	// (0x000a29fa) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x000a5e6b) listscroll_popup_gms_pane_g

0xbe31,	// (0x000a2a03) scroll_pane_cp014

0xb4e0,	// (0x000a20b2) cell_large_graphic_popup_pane_ParamLimits

0xb4e0,	// (0x000a20b2) cell_large_graphic_popup_pane

0xb4ee,	// (0x000a20c0) cell_large_graphic_popup_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_large_graphic_popup_pane_g1

0xbe3a,	// (0x000a2a0c) cell_large_graphic_popup_pane_g2_ParamLimits

0xbe3a,	// (0x000a2a0c) cell_large_graphic_popup_pane_g2

0xbe48,	// (0x000a2a1a) cell_large_graphic_popup_pane_g3_ParamLimits

0xbe48,	// (0x000a2a1a) cell_large_graphic_popup_pane_g3

0xbe56,	// (0x000a2a28) cell_large_graphic_popup_pane_g4_ParamLimits

0xbe56,	// (0x000a2a28) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x000a5e70) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x000a5e70) cell_large_graphic_popup_pane_g

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp010

0xb47d,	// (0x000a204f) bg_popup_call_pane_g1

0xbe67,	// (0x000a2a39) list_single_graphic_popup_conf_pane_ParamLimits

0xbe67,	// (0x000a2a39) list_single_graphic_popup_conf_pane

0xbe7a,	// (0x000a2a4c) list_highlight_pane_cp01

0xbe83,	// (0x000a2a55) list_single_graphic_popup_conf_pane_g1

0xbe8b,	// (0x000a2a5d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x000a5e79) list_single_graphic_popup_conf_pane_g

0xbe93,	// (0x000a2a65) list_single_graphic_popup_conf_pane_t1

0xbea1,	// (0x000a2a73) linegrid_cams_pane_g1

0x25b1,	// (0x00099183) linegrid_cams_pane_g2

0xb6cc,	// (0x000a229e) linegrid_cams_pane_g3

0xbeaa,	// (0x000a2a7c) linegrid_cams_pane_g4

0x25ba,	// (0x0009918c) linegrid_cams_pane_g5

0x25c3,	// (0x00099195) linegrid_cams_pane_g6

0xb781,	// (0x000a2353) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x000a5e7e) linegrid_cams_pane_g

0xbeb3,	// (0x000a2a85) popup_clock_analogue_window

0xbeb3,	// (0x000a2a85) popup_clock_digital_window

0xb20a,	// (0x000a1ddc) popup_phob_thumbnail_window

0xb47d,	// (0x000a204f) call_video_uplink_pane_g1

0xbebc,	// (0x000a2a8e) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x000a5e8d) call_video_uplink_pane_g

0xbec4,	// (0x000a2a96) video_uplink_pane

0xbecc,	// (0x000a2a9e) mce_image_pane_g1

0x25ce,	// (0x000991a0) mce_image_pane_g2

0x25d6,	// (0x000991a8) mce_image_pane_g3

0x25de,	// (0x000991b0) mce_image_pane_g4

0x25e8,	// (0x000991ba) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x000a5e92) mce_image_pane_g

0xbed6,	// (0x000a2aa8) control_top_pane_stacon_cp01_ParamLimits

0xbed6,	// (0x000a2aa8) control_top_pane_stacon_cp01

0xbeea,	// (0x000a2abc) uni_indicator_pane_stacon_cp01_ParamLimits

0xbeea,	// (0x000a2abc) uni_indicator_pane_stacon_cp01

0xbefb,	// (0x000a2acd) bg_popup_sub_pane_cp03

0x25f0,	// (0x000991c2) chi_dic_find_pane

0x25f8,	// (0x000991ca) listscroll_chi_dic_pane

0x2601,	// (0x000991d3) main_pane_chidic_g1

0x2614,	// (0x000991e6) chi_dic_find_pane_t1

0xbf05,	// (0x000a2ad7) find_chidic_pane

0xbf0e,	// (0x000a2ae0) chi_dic_list_pane_ParamLimits

0xbf0e,	// (0x000a2ae0) chi_dic_list_pane

0xbf1f,	// (0x000a2af1) scroll_pane_cp020

0x2622,	// (0x000991f4) find_chidic_pane_t1

0xb20a,	// (0x000a1ddc) input_focus_pane_cp06

0x2631,	// (0x00099203) list_chi_dic_pane_ParamLimits

0x2631,	// (0x00099203) list_chi_dic_pane

0x2643,	// (0x00099215) list_chi_dic_pane_t1_ParamLimits

0x2643,	// (0x00099215) list_chi_dic_pane_t1

0xb20a,	// (0x000a1ddc) list_highlight_pane_cp020

0xbf27,	// (0x000a2af9) bg_cale_heading_pane_g1

0x2656,	// (0x00099228) bg_cale_heading_pane_g2

0x265e,	// (0x00099230) bg_cale_heading_pane_g3

0x2666,	// (0x00099238) bg_cale_heading_pane_g4

0x2670,	// (0x00099242) bg_cale_heading_pane_g5

0x267a,	// (0x0009924c) bg_cale_heading_pane_g6

0x2682,	// (0x00099254) bg_cale_heading_pane_g7

0x268a,	// (0x0009925c) bg_cale_heading_pane_g8

0x2694,	// (0x00099266) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x000a5e9d) bg_cale_heading_pane_g

0xbf27,	// (0x000a2af9) bg_cale_side_pane_g1

0x269e,	// (0x00099270) bg_cale_side_pane_g2

0x26a6,	// (0x00099278) bg_cale_side_pane_g3

0x26ae,	// (0x00099280) bg_cale_side_pane_g4

0x26b6,	// (0x00099288) bg_cale_side_pane_g5

0x26be,	// (0x00099290) bg_cale_side_pane_g6

0x26c6,	// (0x00099298) bg_cale_side_pane_g7

0x26ce,	// (0x000992a0) bg_cale_side_pane_g8

0x26d6,	// (0x000992a8) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x000a5eb0) bg_cale_side_pane_g

0x26de,	// (0x000992b0) popup_call_status_window_ParamLimits

0x26de,	// (0x000992b0) popup_call_status_window

0xbf2f,	// (0x000a2b01) stacon_top_pane

0xbf37,	// (0x000a2b09) status_pane_ParamLimits

0xbf37,	// (0x000a2b09) status_pane

0xbf4c,	// (0x000a2b1e) status_small_pane

0xbf54,	// (0x000a2b26) control_pane

0xb20a,	// (0x000a1ddc) stacon_bottom_pane

0xbf5c,	// (0x000a2b2e) list_single_mce_smart_pane_t1_ParamLimits

0xbf5c,	// (0x000a2b2e) list_single_mce_smart_pane_t1

0xbf6f,	// (0x000a2b41) list_single_mce_smart_pane_t2_ParamLimits

0xbf6f,	// (0x000a2b41) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x000a5ec3) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x000a5ec3) list_single_mce_smart_pane_t

0x2725,	// (0x000992f7) compass_pane

0x272e,	// (0x00099300) main_location2_pane_t1

0x2740,	// (0x00099312) main_location2_pane_t2

0x2752,	// (0x00099324) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x000a5ec8) main_location2_pane_t

0xbf8e,	// (0x000a2b60) compass_pane_g1_ParamLimits

0xbf8e,	// (0x000a2b60) compass_pane_g1

0x2796,	// (0x00099368) compass_pane_t1

0x27a5,	// (0x00099377) compass_pane_t2

0x0005,

0xf2ff,	// (0x000a5ed1) compass_pane_t

0x27ec,	// (0x000993be) text_secondary_cp61

0xc00c,	// (0x000a2bde) navi_pane_cams_g5

0xc088,	// (0x000a2c5a) navi_pane_im_t1

0xc096,	// (0x000a2c68) navi_pane_mp_g1_ParamLimits

0xc096,	// (0x000a2c68) navi_pane_mp_g1

0xc0aa,	// (0x000a2c7c) navi_pane_mp_g2_ParamLimits

0xc0aa,	// (0x000a2c7c) navi_pane_mp_g2

0xc0b6,	// (0x000a2c88) navi_pane_mp_g3_ParamLimits

0xc0b6,	// (0x000a2c88) navi_pane_mp_g3

0x0002,

0xf313,	// (0x000a5ee5) navi_pane_mp_g_ParamLimits

0xf313,	// (0x000a5ee5) navi_pane_mp_g

0xc0c2,	// (0x000a2c94) navi_pane_mp_t1

0xc0d0,	// (0x000a2ca2) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x000a5eec) navi_pane_mp_t

0xc13b,	// (0x000a2d0d) navi_pane_vt_g1

0xc0c2,	// (0x000a2c94) navi_pane_vt_t1

0xc143,	// (0x000a2d15) navi_slider_pane

0xb792,	// (0x000a2364) zooming_pane

0xc153,	// (0x000a2d25) navi_slider_pane_g1

0x9935,	// (0x000a0507) navi_slider_pane_g2

0x0006,

0xf321,	// (0x000a5ef3) navi_slider_pane_g

0xc177,	// (0x000a2d49) aid_levels_zoom

0xc17f,	// (0x000a2d51) zooming_pane_g1

0xc187,	// (0x000a2d59) zooming_pane_g2

0xc187,	// (0x000a2d59) zooming_pane_g3

0x0002,

0xf330,	// (0x000a5f02) zooming_pane_g

0xc18f,	// (0x000a2d61) level_10_zoom

0xc198,	// (0x000a2d6a) level_11_zoom

0xc1a1,	// (0x000a2d73) level_1_zoom

0xc1aa,	// (0x000a2d7c) level_2_zoom

0xc1b3,	// (0x000a2d85) level_3_zoom

0xc1bc,	// (0x000a2d8e) level_4_zoom

0xc1c5,	// (0x000a2d97) level_5_zoom

0xc1ce,	// (0x000a2da0) level_6_zoom

0xc1d7,	// (0x000a2da9) level_7_zoom

0xc1e0,	// (0x000a2db2) level_8_zoom

0xc1e9,	// (0x000a2dbb) level_9_zoom

0xc1fa,	// (0x000a2dcc) popup_phob_thumbnail_window_g1

0xc202,	// (0x000a2dd4) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x000a5f09) popup_phob_thumbnail_window_g

0x31b8,	// (0x00099d8a) level_1_location

0x31c0,	// (0x00099d92) level_2_location

0x31c8,	// (0x00099d9a) level_3_location

0x31d0,	// (0x00099da2) level_4_location

0xb792,	// (0x000a2364) level_5_location

0x283d,	// (0x0009940f) mce_icon_pane_g1

0x2847,	// (0x00099419) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x000a5f0e) mce_icon_pane_g

0xc263,	// (0x000a2e35) main_mup_pane_g1_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g1

0xc263,	// (0x000a2e35) main_mup_pane_g2_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g2

0xc263,	// (0x000a2e35) main_mup_pane_g3_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g3

0xc263,	// (0x000a2e35) main_mup_pane_g4_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g4

0xc263,	// (0x000a2e35) main_mup_pane_g5_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g5

0xc263,	// (0x000a2e35) main_mup_pane_g6_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g6

0xc263,	// (0x000a2e35) main_mup_pane_g7_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g7

0xc263,	// (0x000a2e35) main_mup_pane_g8_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g8

0xc263,	// (0x000a2e35) main_mup_pane_g9_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g9

0xc263,	// (0x000a2e35) main_mup_pane_g10_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g10

0xc263,	// (0x000a2e35) main_mup_pane_g11_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g11

0xb4ee,	// (0x000a20c0) main_mup_pane_g12_ParamLimits

0xb4ee,	// (0x000a20c0) main_mup_pane_g12

0xc263,	// (0x000a2e35) main_mup_pane_g13_ParamLimits

0xc263,	// (0x000a2e35) main_mup_pane_g13

0x000c,

0xf341,	// (0x000a5f13) main_mup_pane_g_ParamLimits

0xf341,	// (0x000a5f13) main_mup_pane_g

0xc271,	// (0x000a2e43) main_mup_pane_t1_ParamLimits

0xc271,	// (0x000a2e43) main_mup_pane_t1

0xc271,	// (0x000a2e43) main_mup_pane_t2_ParamLimits

0xc271,	// (0x000a2e43) main_mup_pane_t2

0xc271,	// (0x000a2e43) main_mup_pane_t3_ParamLimits

0xc271,	// (0x000a2e43) main_mup_pane_t3

0xb536,	// (0x000a2108) main_mup_pane_t4_ParamLimits

0xb536,	// (0x000a2108) main_mup_pane_t4

0xb536,	// (0x000a2108) main_mup_pane_t5_ParamLimits

0xb536,	// (0x000a2108) main_mup_pane_t5

0xb54a,	// (0x000a211c) main_mup_pane_t6_ParamLimits

0xb54a,	// (0x000a211c) main_mup_pane_t6

0x0005,

0xf35c,	// (0x000a5f2e) main_mup_pane_t_ParamLimits

0xf35c,	// (0x000a5f2e) main_mup_pane_t

0xb4e0,	// (0x000a20b2) mup_progress_pane_ParamLimits

0xb4e0,	// (0x000a20b2) mup_progress_pane

0xc285,	// (0x000a2e57) mup_visualizer_pane_ParamLimits

0xc285,	// (0x000a2e57) mup_visualizer_pane

0xc285,	// (0x000a2e57) mup_volume_pane_ParamLimits

0xc285,	// (0x000a2e57) mup_volume_pane

0xb4fc,	// (0x000a20ce) mup_visualizer_pane_g1_ParamLimits

0xb4fc,	// (0x000a20ce) mup_visualizer_pane_g1

0xc20a,	// (0x000a2ddc) mup_visualizer_pane_g2_ParamLimits

0xc20a,	// (0x000a2ddc) mup_visualizer_pane_g2

0xb4ee,	// (0x000a20c0) mup_visualizer_pane_g3_ParamLimits

0xb4ee,	// (0x000a20c0) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x000a5f3b) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x000a5f3b) mup_visualizer_pane_g

0xb52c,	// (0x000a20fe) mup_volume_pane_g1

0xb52c,	// (0x000a20fe) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) mup_volume_pane_g

0xb52c,	// (0x000a20fe) mup_progress_pane_g1

0xb52c,	// (0x000a20fe) mup_progress_pane_g2

0xb52c,	// (0x000a20fe) mup_progress_pane_g3

0x0002,

0xf370,	// (0x000a5f42) mup_progress_pane_g

0xb20a,	// (0x000a1ddc) bg_popup_window_pane_cp05

0xc218,	// (0x000a2dea) heading_pane_cp02_ParamLimits

0xc218,	// (0x000a2dea) heading_pane_cp02

0xc232,	// (0x000a2e04) list_popup_blid_pane

0xc23a,	// (0x000a2e0c) list_blid_sat_info_pane_ParamLimits

0xc23a,	// (0x000a2e0c) list_blid_sat_info_pane

0xc24d,	// (0x000a2e1f) list_blid_sat_info_pane_g1

0xc255,	// (0x000a2e27) list_blid_sat_info_pane_t1

0x2947,	// (0x00099519) mup_equalizer_pane_ParamLimits

0x2947,	// (0x00099519) mup_equalizer_pane

0x2960,	// (0x00099532) mup_equalizer_pane_cp1_ParamLimits

0x2960,	// (0x00099532) mup_equalizer_pane_cp1

0x297d,	// (0x0009954f) mup_equalizer_pane_cp2_ParamLimits

0x297d,	// (0x0009954f) mup_equalizer_pane_cp2

0x299a,	// (0x0009956c) mup_equalizer_pane_cp3_ParamLimits

0x299a,	// (0x0009956c) mup_equalizer_pane_cp3

0x29bb,	// (0x0009958d) mup_equalizer_pane_cp4_ParamLimits

0x29bb,	// (0x0009958d) mup_equalizer_pane_cp4

0x29dc,	// (0x000995ae) mup_equalizer_pane_cp5

0x29f0,	// (0x000995c2) mup_equalizer_pane_cp6

0x2a04,	// (0x000995d6) mup_equalizer_pane_cp7

0xd3bb,	// (0x000a3f8d) bg_popup_call_poc_act_pane_g9

0xd3c3,	// (0x000a3f95) bg_popup_call_poc_act_pane_g10

0xd3cb,	// (0x000a3f9d) bg_popup_call_poc_act_pane_g11

0x000a,

0xb465,	// (0x000a2037) mup_scale_pane

0xb47d,	// (0x000a204f) mup_scale_pane_g1

0xc293,	// (0x000a2e65) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x000a5f5e) mup_scale_pane_g

0xc2b7,	// (0x000a2e89) msg_data_pane

0xc2bf,	// (0x000a2e91) scroll_pane_cp017

0x2a2a,	// (0x000995fc) bg_list_pane_cp04_ParamLimits

0x2a2a,	// (0x000995fc) bg_list_pane_cp04

0xc2cf,	// (0x000a2ea1) msg_data_pane_g1

0x2a48,	// (0x0009961a) msg_data_pane_g2

0x2a50,	// (0x00099622) msg_data_pane_g3

0x2a58,	// (0x0009962a) msg_data_pane_g4

0x2a60,	// (0x00099632) msg_data_pane_g5

0x2a68,	// (0x0009963a) msg_data_pane_g6

0x2a70,	// (0x00099642) msg_data_pane_g7

0x0006,

0xf39b,	// (0x000a5f6d) msg_data_pane_g

0x2a78,	// (0x0009964a) msg_text_pane_ParamLimits

0x2a78,	// (0x0009964a) msg_text_pane

0x2aac,	// (0x0009967e) qrid_highlight_pane_cp011_ParamLimits

0x2aac,	// (0x0009967e) qrid_highlight_pane_cp011

0xb20a,	// (0x000a1ddc) msg_body_pane

0xb465,	// (0x000a2037) msg_header_pane

0xc2eb,	// (0x000a2ebd) input_focus_pane_cp07

0xc30c,	// (0x000a2ede) msg_header_pane_t1_ParamLimits

0xc30c,	// (0x000a2ede) msg_header_pane_t1

0xc328,	// (0x000a2efa) msg_header_pane_t2_ParamLimits

0xc328,	// (0x000a2efa) msg_header_pane_t2

0x0001,

0xf3af,	// (0x000a5f81) msg_header_pane_t_ParamLimits

0xf3af,	// (0x000a5f81) msg_header_pane_t

0xc348,	// (0x000a2f1a) msg_body_pane_g1

0xc350,	// (0x000a2f22) msg_body_pane_t1_ParamLimits

0xc350,	// (0x000a2f22) msg_body_pane_t1

0xc381,	// (0x000a2f53) msg_body_pane_t2_ParamLimits

0xc381,	// (0x000a2f53) msg_body_pane_t2

0xc393,	// (0x000a2f65) msg_body_pane_t3_ParamLimits

0xc393,	// (0x000a2f65) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x000a5f86) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x000a5f86) msg_body_pane_t

0x2b0a,	// (0x000996dc) main_viewer_pane_g1_ParamLimits

0x2b0a,	// (0x000996dc) main_viewer_pane_g1

0x2b18,	// (0x000996ea) main_viewer_pane_g2_ParamLimits

0x2b18,	// (0x000996ea) main_viewer_pane_g2

0x2b26,	// (0x000996f8) main_viewer_pane_g3_ParamLimits

0x2b26,	// (0x000996f8) main_viewer_pane_g3

0x2b35,	// (0x00099707) main_viewer_pane_g4_ParamLimits

0x2b35,	// (0x00099707) main_viewer_pane_g4

0x995f,	// (0x000a0531) main_viewer_pane_g5_ParamLimits

0x995f,	// (0x000a0531) main_viewer_pane_g5

0x995f,	// (0x000a0531) main_viewer_pane_g7_ParamLimits

0x995f,	// (0x000a0531) main_viewer_pane_g7

0xbc2f,	// (0x000a2801) main_viewer_pane_g8_ParamLimits

0xbc2f,	// (0x000a2801) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x000a5f96) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x000a5f96) main_viewer_pane_g

0xc3a5,	// (0x000a2f77) viewer_content_pane_ParamLimits

0xc3a5,	// (0x000a2f77) viewer_content_pane

0x2b71,	// (0x00099743) main_postcard_pane_g1_ParamLimits

0x2b71,	// (0x00099743) main_postcard_pane_g1

0x2b87,	// (0x00099759) main_postcard_pane_g2_ParamLimits

0x2b87,	// (0x00099759) main_postcard_pane_g2

0x2b9d,	// (0x0009976f) main_postcard_pane_g3_ParamLimits

0x2b9d,	// (0x0009976f) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x000a5fa7) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x000a5fa7) main_postcard_pane_g

0x2bb4,	// (0x00099786) main_postcard_pane_g4

0xd537,	// (0x000a4109) smil_status_volume_pane_g2

0x2bf7,	// (0x000997c9) postcard_pane_ParamLimits

0x2bf7,	// (0x000997c9) postcard_pane

0xc3b3,	// (0x000a2f85) postcard_pane_g1_ParamLimits

0xc3b3,	// (0x000a2f85) postcard_pane_g1

0x2c39,	// (0x0009980b) postcard_pane_g2_ParamLimits

0x2c39,	// (0x0009980b) postcard_pane_g2

0x2c45,	// (0x00099817) postcard_pane_g3_ParamLimits

0x2c45,	// (0x00099817) postcard_pane_g3

0xc3c1,	// (0x000a2f93) postcard_pane_g4_ParamLimits

0xc3c1,	// (0x000a2f93) postcard_pane_g4

0x2c51,	// (0x00099823) postcard_pane_g5_ParamLimits

0x2c51,	// (0x00099823) postcard_pane_g5

0x2c66,	// (0x00099838) postcard_pane_g6_ParamLimits

0x2c66,	// (0x00099838) postcard_pane_g6

0xc3b3,	// (0x000a2f85) postcard_pane_g7_ParamLimits

0xc3b3,	// (0x000a2f85) postcard_pane_g7

0x0006,

0xf3e2,	// (0x000a5fb4) postcard_pane_g_ParamLimits

0xf3e2,	// (0x000a5fb4) postcard_pane_g

0x2c7a,	// (0x0009984c) main_mp2_pane_g1_ParamLimits

0x2c7a,	// (0x0009984c) main_mp2_pane_g1

0x2c86,	// (0x00099858) main_mp2_pane_g2_ParamLimits

0x2c86,	// (0x00099858) main_mp2_pane_g2

0x2c92,	// (0x00099864) main_mp2_pane_g3_ParamLimits

0x2c92,	// (0x00099864) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x000a5fc3) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x000a5fc3) main_mp2_pane_g

0x2c9e,	// (0x00099870) main_mp2_pane_t1_ParamLimits

0x2c9e,	// (0x00099870) main_mp2_pane_t1

0x2cb3,	// (0x00099885) main_mp2_pane_t2_ParamLimits

0x2cb3,	// (0x00099885) main_mp2_pane_t2

0x2cc5,	// (0x00099897) main_mp2_pane_t3_ParamLimits

0x2cc5,	// (0x00099897) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x000a5fca) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x000a5fca) main_mp2_pane_t

0xb487,	// (0x000a2059) pec_content_pane_ParamLimits

0xb487,	// (0x000a2059) pec_content_pane

0xacbc,	// (0x000a188e) scroll_pane_cp015

0xc285,	// (0x000a2e57) pec_attribute_pane_ParamLimits

0xc285,	// (0x000a2e57) pec_attribute_pane

0xb4ee,	// (0x000a20c0) pec_content_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) pec_content_pane_g1

0xc3cf,	// (0x000a2fa1) pec_content_pane_t1_ParamLimits

0xc3cf,	// (0x000a2fa1) pec_content_pane_t1

0xc3e3,	// (0x000a2fb5) pec_content_pane_t2_ParamLimits

0xc3e3,	// (0x000a2fb5) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x000a5fd1) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x000a5fd1) pec_content_pane_t

0xb4e0,	// (0x000a20b2) list_single_graphic_pane_cp01_ParamLimits

0xb4e0,	// (0x000a20b2) list_single_graphic_pane_cp01

0xb465,	// (0x000a2037) bg_popup_sub_pane_cp04

0xc3f7,	// (0x000a2fc9) popup_mup_playback_window_g1

0xc403,	// (0x000a2fd5) popup_mup_playback_window_t1

0xc418,	// (0x000a2fea) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x000a5fd6) popup_mup_playback_window_t

0xc44f,	// (0x000a3021) main_image_pane_g1_ParamLimits

0xc44f,	// (0x000a3021) main_image_pane_g1

0xc492,	// (0x000a3064) scroll_pane_cp018_ParamLimits

0xc492,	// (0x000a3064) scroll_pane_cp018

0xc4aa,	// (0x000a307c) scroll_pane_cp016_ParamLimits

0xc4aa,	// (0x000a307c) scroll_pane_cp016

0x2d8f,	// (0x00099961) smil2_image_pane_ParamLimits

0x2d8f,	// (0x00099961) smil2_image_pane

0x2dbf,	// (0x00099991) smil2_root_pane_ParamLimits

0x2dbf,	// (0x00099991) smil2_root_pane

0x2df7,	// (0x000999c9) smil2_text_pane_ParamLimits

0x2df7,	// (0x000999c9) smil2_text_pane

0xacbc,	// (0x000a188e) bg_list_pane_cp06

0xacbc,	// (0x000a188e) grid_radio_pane

0xb20a,	// (0x000a1ddc) bg_popup_window_pane_cp06

0xbc90,	// (0x000a2862) main_fmradio_pane_t1

0xbe17,	// (0x000a29e9) heading_pane_cp04

0xbc90,	// (0x000a2862) main_fmradio_pane_t2

0xd413,	// (0x000a3fe5) popup_cale_lunar_info_window_g1

0xbc90,	// (0x000a2862) main_fmradio_pane_t3

0xd41b,	// (0x000a3fed) popup_cale_lunar_info_window_g2

0xbc90,	// (0x000a2862) main_fmradio_pane_t4

0x0001,

0xbc90,	// (0x000a2862) main_fmradio_pane_t5

0x0004,

0x007e,	// (0x00096c50) popup_cale_lunar_info_window_g

0xf264,	// (0x000a5e36) main_fmradio_pane_t

0xacbc,	// (0x000a188e) wait_bar_pane_cp03

0xb4e0,	// (0x000a20b2) cell_fmradio_pane_ParamLimits

0xb4e0,	// (0x000a20b2) cell_fmradio_pane

0xb4ee,	// (0x000a20c0) cell_fmradio_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_fmradio_pane_g1

0xacbc,	// (0x000a188e) grid_highlight_pane_cp011

0xc4de,	// (0x000a30b0) poc_content_pane_ParamLimits

0xc4de,	// (0x000a30b0) poc_content_pane

0xc4f0,	// (0x000a30c2) scroll_pane_cp019

0x2e77,	// (0x00099a49) popup_call_poc_act_window_ParamLimits

0x2e77,	// (0x00099a49) popup_call_poc_act_window

0x2e9b,	// (0x00099a6d) popup_call_poc_inact_window_ParamLimits

0x2e9b,	// (0x00099a6d) popup_call_poc_inact_window

0x0042,	// (0x00096c14) bg_popup_call_poc_act_pane_g

0xd3d3,	// (0x000a3fa5) bg_popup_call_poc_inact_pane_g1

0xd3db,	// (0x000a3fad) bg_popup_call_poc_inact_pane_g2

0xc4f8,	// (0x000a30ca) popup_call_poc_act_window_g2

0xd3e3,	// (0x000a3fb5) bg_popup_call_poc_inact_pane_g3

0xd363,	// (0x000a3f35) bg_popup_call_poc_inact_pane_g4

0xd3eb,	// (0x000a3fbd) bg_popup_call_poc_inact_pane_g5

0xc500,	// (0x000a30d2) popup_call_poc_act_window_t1_ParamLimits

0xc500,	// (0x000a30d2) popup_call_poc_act_window_t1

0xc528,	// (0x000a30fa) popup_call_poc_act_window_t2_ParamLimits

0xc528,	// (0x000a30fa) popup_call_poc_act_window_t2

0xc550,	// (0x000a3122) popup_call_poc_act_window_t3_ParamLimits

0xc550,	// (0x000a3122) popup_call_poc_act_window_t3

0xc578,	// (0x000a314a) popup_call_poc_act_window_t4_ParamLimits

0xc578,	// (0x000a314a) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x000a5feb) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x000a5feb) popup_call_poc_act_window_t

0xd3f3,	// (0x000a3fc5) bg_popup_call_poc_inact_pane_g6

0xd3fb,	// (0x000a3fcd) bg_popup_call_poc_inact_pane_g7

0xd403,	// (0x000a3fd5) bg_popup_call_poc_inact_pane_g8

0xc58a,	// (0x000a315c) popup_call_poc_inact_window_g2

0xd40b,	// (0x000a3fdd) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0059,	// (0x00096c2b) bg_popup_call_poc_inact_pane_g

0xc592,	// (0x000a3164) popup_call_poc_inact_window_t1_ParamLimits

0xc592,	// (0x000a3164) popup_call_poc_inact_window_t1

0xc5a7,	// (0x000a3179) popup_call_poc_inact_window_t2_ParamLimits

0xc5a7,	// (0x000a3179) popup_call_poc_inact_window_t2

0xc5bc,	// (0x000a318e) popup_call_poc_inact_window_t3_ParamLimits

0xc5bc,	// (0x000a318e) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x000a5ff4) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x000a5ff4) popup_call_poc_inact_window_t

0xd4af,	// (0x000a4081) context_pane_ParamLimits

0x3682,	// (0x0009a254) signal_pane_ParamLimits

0xb792,	// (0x000a2364) main_call2_pane

0x99b2,	// (0x000a0584) popup_phob_thumbnail2_window_ParamLimits

0x99b2,	// (0x000a0584) popup_phob_thumbnail2_window

0x9947,	// (0x000a0519) aid_hotspot_pointer_arrow_pane

0x994f,	// (0x000a0521) aid_hotspot_pointer_hand_pane

0x3182,	// (0x00099d54) phob_pre_status_pane_g5

0xb487,	// (0x000a2059) cams_zoom_pane_ParamLimits

0xb487,	// (0x000a2059) image_vga_pane_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g2_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g3_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g4_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g5_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g6_ParamLimits

0xb4ee,	// (0x000a20c0) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x000a5d2f) main_camera_pane_g_ParamLimits

0xb536,	// (0x000a2108) main_camera_pane_t1_ParamLimits

0xb536,	// (0x000a2108) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x000a5d40) main_camera_pane_t_ParamLimits

0xb465,	// (0x000a2037) bg_popup_preview_window_pane_cp01_ParamLimits

0xb465,	// (0x000a2037) bg_popup_preview_window_pane_cp01

0xc5d1,	// (0x000a31a3) popup_phob_thumbnail2_window_g1_ParamLimits

0xc5d1,	// (0x000a31a3) popup_phob_thumbnail2_window_g1

0xb20a,	// (0x000a1ddc) call2_cli_visual_pane

0x2ecf,	// (0x00099aa1) popup_call2_audio_conf_window_ParamLimits

0x2ecf,	// (0x00099aa1) popup_call2_audio_conf_window

0x2eef,	// (0x00099ac1) popup_call2_audio_first_window_ParamLimits

0x2eef,	// (0x00099ac1) popup_call2_audio_first_window

0x2f85,	// (0x00099b57) popup_call2_audio_in_window_ParamLimits

0x2f85,	// (0x00099b57) popup_call2_audio_in_window

0x2fcd,	// (0x00099b9f) popup_call2_audio_out_window_ParamLimits

0x2fcd,	// (0x00099b9f) popup_call2_audio_out_window

0x3037,	// (0x00099c09) popup_call2_audio_second_window_ParamLimits

0x3037,	// (0x00099c09) popup_call2_audio_second_window

0x309d,	// (0x00099c6f) popup_call2_audio_wait_window_ParamLimits

0x309d,	// (0x00099c6f) popup_call2_audio_wait_window

0xb20a,	// (0x000a1ddc) bg_popup_call2_act_pane_cp03

0xb447,	// (0x000a2019) list_conf_pane_cp

0xc5dd,	// (0x000a31af) popup_call2_audio_conf_window_t1

0xc5eb,	// (0x000a31bd) list_single_graphic_popup_conf2_pane_ParamLimits

0xc5eb,	// (0x000a31bd) list_single_graphic_popup_conf2_pane

0xbe7a,	// (0x000a2a4c) list_highlight_pane_cp04

0xc5fe,	// (0x000a31d0) list_single_graphic_popup_conf2_pane_g1

0xbe8b,	// (0x000a2a5d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x000a5ffb) list_single_graphic_popup_conf2_pane_g

0xc608,	// (0x000a31da) list_single_graphic_popup_conf2_pane_t1

0xc616,	// (0x000a31e8) bg_popup_call2_act_pane_cp01_ParamLimits

0xc616,	// (0x000a31e8) bg_popup_call2_act_pane_cp01

0xc6a0,	// (0x000a3272) call_type_pane_cp05_ParamLimits

0xc6a0,	// (0x000a3272) call_type_pane_cp05

0xc6f4,	// (0x000a32c6) popup_call2_audio_second_window_g1_ParamLimits

0xc6f4,	// (0x000a32c6) popup_call2_audio_second_window_g1

0xc748,	// (0x000a331a) popup_call2_audio_second_window_g2_ParamLimits

0xc748,	// (0x000a331a) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x000a6000) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x000a6000) popup_call2_audio_second_window_g

0xc7ad,	// (0x000a337f) popup_call2_audio_second_window_t1_ParamLimits

0xc7ad,	// (0x000a337f) popup_call2_audio_second_window_t1

0xc868,	// (0x000a343a) popup_call2_audio_second_window_t2_ParamLimits

0xc868,	// (0x000a343a) popup_call2_audio_second_window_t2

0xc8bb,	// (0x000a348d) popup_call2_audio_second_window_t3_ParamLimits

0xc8bb,	// (0x000a348d) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x000a6007) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x000a6007) popup_call2_audio_second_window_t

0xb20a,	// (0x000a1ddc) bg_popup_call2_in_pane_cp02

0xb214,	// (0x000a1de6) call_type_pane_cp04

0x30d7,	// (0x00099ca9) popup_call2_audio_wait_window_g1

0x30df,	// (0x00099cb1) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x000a6010) popup_call2_audio_wait_window_g

0xb22c,	// (0x000a1dfe) popup_call2_audio_wait_window_t3

0xc9ae,	// (0x000a3580) bg_popup_call2_act_pane_ParamLimits

0xc9ae,	// (0x000a3580) bg_popup_call2_act_pane

0xca6e,	// (0x000a3640) call_type_pane_cp03_ParamLimits

0xca6e,	// (0x000a3640) call_type_pane_cp03

0xcad2,	// (0x000a36a4) popup_call2_audio_first_window_g1_ParamLimits

0xcad2,	// (0x000a36a4) popup_call2_audio_first_window_g1

0xcb50,	// (0x000a3722) popup_call2_audio_first_window_g2_ParamLimits

0xcb50,	// (0x000a3722) popup_call2_audio_first_window_g2

0xcb42,	// (0x000a3714) popup_call2_audio_first_window_g3_ParamLimits

0xcb42,	// (0x000a3714) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x000a6015) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x000a6015) popup_call2_audio_first_window_g

0xcc2e,	// (0x000a3800) popup_call2_audio_first_window_t1_ParamLimits

0xcc2e,	// (0x000a3800) popup_call2_audio_first_window_t1

0xcd31,	// (0x000a3903) popup_call2_audio_first_window_t4_ParamLimits

0xcd31,	// (0x000a3903) popup_call2_audio_first_window_t4

0xce14,	// (0x000a39e6) popup_call2_audio_first_window_t5_ParamLimits

0xce14,	// (0x000a39e6) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x000a6020) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x000a6020) popup_call2_audio_first_window_t

0xb45d,	// (0x000a202f) bg_popup_call2_act_pane_g1

0xd423,	// (0x000a3ff5) popup_cale_lunar_info_window_t1

0xd431,	// (0x000a4003) popup_cale_lunar_info_window_t2

0xd43f,	// (0x000a4011) popup_cale_lunar_info_window_t3

0xb20a,	// (0x000a1ddc) bg_popup_call2_bubble_pane

0xcf15,	// (0x000a3ae7) bg_popup_call2_in_pane_cp01_ParamLimits

0xcf15,	// (0x000a3ae7) bg_popup_call2_in_pane_cp01

0xadb5,	// (0x000a1987) call_type_pane_cp02

0x30e7,	// (0x00099cb9) popup_call2_audio_out_window_g1_ParamLimits

0x30e7,	// (0x00099cb9) popup_call2_audio_out_window_g1

0xcf5d,	// (0x000a3b2f) popup_call2_audio_out_window_g2_ParamLimits

0xcf5d,	// (0x000a3b2f) popup_call2_audio_out_window_g2

0x3113,	// (0x00099ce5) popup_call2_audio_out_window_g3_ParamLimits

0x3113,	// (0x00099ce5) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x000a6029) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x000a6029) popup_call2_audio_out_window_g

0xcf94,	// (0x000a3b66) popup_call2_audio_out_window_t1_ParamLimits

0xcf94,	// (0x000a3b66) popup_call2_audio_out_window_t1

0xcff3,	// (0x000a3bc5) popup_call2_audio_out_window_t2_ParamLimits

0xcff3,	// (0x000a3bc5) popup_call2_audio_out_window_t2

0xd047,	// (0x000a3c19) popup_call2_audio_out_window_t3_ParamLimits

0xd047,	// (0x000a3c19) popup_call2_audio_out_window_t3

0xd05d,	// (0x000a3c2f) popup_call2_audio_out_window_t4_ParamLimits

0xd05d,	// (0x000a3c2f) popup_call2_audio_out_window_t4

0xd073,	// (0x000a3c45) popup_call2_audio_out_window_t5_ParamLimits

0xd073,	// (0x000a3c45) popup_call2_audio_out_window_t5

0x0005,

0x0005,	// (0x00096bd7) popup_call2_audio_out_window_t_ParamLimits

0x0005,	// (0x00096bd7) popup_call2_audio_out_window_t

0xd0d7,	// (0x000a3ca9) bg_popup_call2_in_pane_ParamLimits

0xd0d7,	// (0x000a3ca9) bg_popup_call2_in_pane

0xd133,	// (0x000a3d05) popup_call2_audio_in_window_g1_ParamLimits

0xd133,	// (0x000a3d05) popup_call2_audio_in_window_g1

0xd16b,	// (0x000a3d3d) popup_call2_audio_in_window_g2_ParamLimits

0xd16b,	// (0x000a3d3d) popup_call2_audio_in_window_g2

0xd1a3,	// (0x000a3d75) popup_call2_audio_in_window_g3_ParamLimits

0xd1a3,	// (0x000a3d75) popup_call2_audio_in_window_g3

0x0003,

0x0012,	// (0x00096be4) popup_call2_audio_in_window_g_ParamLimits

0x0012,	// (0x00096be4) popup_call2_audio_in_window_g

0xd1fb,	// (0x000a3dcd) popup_call2_audio_in_window_t1_ParamLimits

0xd1fb,	// (0x000a3dcd) popup_call2_audio_in_window_t1

0xd27b,	// (0x000a3e4d) popup_call2_audio_in_window_t2_ParamLimits

0xd27b,	// (0x000a3e4d) popup_call2_audio_in_window_t2

0xd2fb,	// (0x000a3ecd) popup_call2_audio_in_window_t3_ParamLimits

0xd2fb,	// (0x000a3ecd) popup_call2_audio_in_window_t3

0xd315,	// (0x000a3ee7) popup_call2_audio_in_window_t4_ParamLimits

0xd315,	// (0x000a3ee7) popup_call2_audio_in_window_t4

0xd327,	// (0x000a3ef9) popup_call2_audio_in_window_t5_ParamLimits

0xd327,	// (0x000a3ef9) popup_call2_audio_in_window_t5

0xd339,	// (0x000a3f0b) popup_call2_audio_in_window_t6_ParamLimits

0xd339,	// (0x000a3f0b) popup_call2_audio_in_window_t6

0x0005,

0x001b,	// (0x00096bed) popup_call2_audio_in_window_t_ParamLimits

0x001b,	// (0x00096bed) popup_call2_audio_in_window_t

0xb45d,	// (0x000a202f) bg_popup_call2_in_pane_g1

0xd44d,	// (0x000a401f) popup_cale_lunar_info_window_t4

0x0003,

0x0083,	// (0x00096c55) popup_cale_lunar_info_window_t

0xb465,	// (0x000a2037) bg_popup_call2_rect_pane_ParamLimits

0xb465,	// (0x000a2037) bg_popup_call2_rect_pane

0xb20a,	// (0x000a1ddc) call2_cli_visual_graphic_pane

0xb20a,	// (0x000a1ddc) call2_cli_visual_text_pane

0x99d9,	// (0x000a05ab) smil_status_volume_pane_g3

0x0002,

0xb47d,	// (0x000a204f) call2_cli_visual_graphic_pane_g1

0xb47d,	// (0x000a204f) call2_cli_visual_graphic_pane_g2

0xb47d,	// (0x000a204f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf460,	// (0x000a6032) call2_cli_visual_graphic_pane_g

0xb694,	// (0x000a2266) bg_popup_call2_rect_pane_g1

0xb68c,	// (0x000a225e) bg_popup_call2_rect_pane_g2

0xb684,	// (0x000a2256) bg_popup_call2_rect_pane_g3

0xb6a4,	// (0x000a2276) bg_popup_call2_rect_pane_g4

0xb69c,	// (0x000a226e) bg_popup_call2_rect_pane_g5

0xb6ac,	// (0x000a227e) bg_popup_call2_rect_pane_g6

0xb6b4,	// (0x000a2286) bg_popup_call2_rect_pane_g7

0xb6c4,	// (0x000a2296) bg_popup_call2_rect_pane_g8

0xb6bc,	// (0x000a228e) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x000a5de5) bg_popup_call2_rect_pane_g

0xd34b,	// (0x000a3f1d) bg_popup_call2_bubble_pane_g1

0xd353,	// (0x000a3f25) bg_popup_call2_bubble_pane_g2

0xd35b,	// (0x000a3f2d) bg_popup_call2_bubble_pane_g3

0xd363,	// (0x000a3f35) bg_popup_call2_bubble_pane_g4

0xd36b,	// (0x000a3f3d) bg_popup_call2_bubble_pane_g5

0xd373,	// (0x000a3f45) bg_popup_call2_bubble_pane_g6

0xd37b,	// (0x000a3f4d) bg_popup_call2_bubble_pane_g7

0xd383,	// (0x000a3f55) bg_popup_call2_bubble_pane_g8

0xd38b,	// (0x000a3f5d) bg_popup_call2_bubble_pane_g9

0x0008,

0x002f,	// (0x00096c01) bg_popup_call2_bubble_pane_g

0x0f84,	// (0x00097b56) aid_cale_week_size_cell_pane

0x1534,	// (0x00098106) aid_cams_cif_uncrop_pane_ParamLimits

0x1534,	// (0x00098106) aid_cams_cif_uncrop_pane

0xb487,	// (0x000a2059) aid_cams_size_cell_ParamLimits

0xb487,	// (0x000a2059) aid_cams_size_cell

0xb487,	// (0x000a2059) grid_cams_pane_ParamLimits

0xb487,	// (0x000a2059) linegrid_cams_pane_ParamLimits

0x1752,	// (0x00098324) call_video_pane_t1

0x1770,	// (0x00098342) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000a5d8c) call_video_pane_t

0x1b96,	// (0x00098768) aid_cale_month_size_cell_pane_ParamLimits

0x1b96,	// (0x00098768) aid_cale_month_size_cell_pane

0xf49f,	// (0x000a6071) smil_status_volume_pane_g

0x99e6,	// (0x000a05b8) volume_smil_pane_ParamLimits

0x97c2,	// (0x000a0394) aid_popup2_width_pane

0x0ee9,	// (0x00097abb) cell_qdial_pane_g4_ParamLimits

0x0ee9,	// (0x00097abb) cell_qdial_pane_g4

0x2776,	// (0x00099348) aid_blid_cardinal_pane_ParamLimits

0x2782,	// (0x00099354) aid_blid_destination_pane_ParamLimits

0x2782,	// (0x00099354) aid_blid_destination_pane

0xb465,	// (0x000a2037) bg_popup_call_poc_act_pane_ParamLimits

0xb465,	// (0x000a2037) bg_popup_call_poc_act_pane

0xb465,	// (0x000a2037) bg_popup_call_poc_inact_pane_ParamLimits

0xb465,	// (0x000a2037) bg_popup_call_poc_inact_pane

0xd393,	// (0x000a3f65) bg_popup_call_poc_act_pane_g1

0xd39b,	// (0x000a3f6d) bg_popup_call_poc_act_pane_g2

0xd3a3,	// (0x000a3f75) bg_popup_call_poc_act_pane_g3

0xd363,	// (0x000a3f35) bg_popup_call_poc_act_pane_g4

0xd36b,	// (0x000a3f3d) bg_popup_call_poc_act_pane_g5

0xd3ab,	// (0x000a3f7d) bg_popup_call_poc_act_pane_g6

0xd37b,	// (0x000a3f4d) bg_popup_call_poc_act_pane_g7

0xd3b3,	// (0x000a3f85) bg_popup_call_poc_act_pane_g8

0xb20a,	// (0x000a1ddc) main_usb_pane

0x998d,	// (0x000a055f) popup_cale_lunar_info_window

0x1a3c,	// (0x0009860e) im_reading_pane_t1_ParamLimits

0xb853,	// (0x000a2425) list_im_pane_ParamLimits

0xb864,	// (0x000a2436) scroll_pane_cp07_ParamLimits

0xb20a,	// (0x000a1ddc) grid_highlight_pane_cp012

0xb465,	// (0x000a2037) mup_scale_pane_ParamLimits

0xb4ee,	// (0x000a20c0) main_usb_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) main_usb_pane_g1

0xb4ee,	// (0x000a20c0) main_usb_pane_g2_ParamLimits

0xb4ee,	// (0x000a20c0) main_usb_pane_g2

0x0001,

0xf199,	// (0x000a5d6b) main_usb_pane_g_ParamLimits

0xf199,	// (0x000a5d6b) main_usb_pane_g

0xb536,	// (0x000a2108) main_usb_pane_t1_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t1

0xb536,	// (0x000a2108) main_usb_pane_t2_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t2

0xb536,	// (0x000a2108) main_usb_pane_t3_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t3

0xb536,	// (0x000a2108) main_usb_pane_t4_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t4

0xb536,	// (0x000a2108) main_usb_pane_t5_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t5

0xb536,	// (0x000a2108) main_usb_pane_t6_ParamLimits

0xb536,	// (0x000a2108) main_usb_pane_t6

0x0005,

0xf467,	// (0x000a6039) main_usb_pane_t_ParamLimits

0x2725,	// (0x000992f7) aid_text_placing

0x272e,	// (0x00099300) main_location2_pane_t1_ParamLimits

0x2740,	// (0x00099312) main_location2_pane_t2_ParamLimits

0x2752,	// (0x00099324) main_location2_pane_t3_ParamLimits

0x2764,	// (0x00099336) main_location2_pane_t4_ParamLimits

0x2764,	// (0x00099336) main_location2_pane_t4

0xf2f6,	// (0x000a5ec8) main_location2_pane_t_ParamLimits

0xb4a1,	// (0x000a2073) find_pinb_pane_g2_ParamLimits

0xb4a1,	// (0x000a2073) find_pinb_pane_g2

0x0001,

0xf072,	// (0x000a5c44) find_pinb_pane_g_ParamLimits

0xf072,	// (0x000a5c44) find_pinb_pane_g

0xb4ad,	// (0x000a207f) find_pinb_pane_t1_ParamLimits

0xb4bf,	// (0x000a2091) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x000a5c49) find_pinb_pane_t_ParamLimits

0xb20a,	// (0x000a1ddc) main_call3_pane

0x207d,	// (0x00098c4f) cale_month_day_heading_pane_t1_ParamLimits

0x20bf,	// (0x00098c91) cale_month_day_heading_pane_t2_ParamLimits

0x20f4,	// (0x00098cc6) cale_month_day_heading_pane_t3_ParamLimits

0x2129,	// (0x00098cfb) cale_month_day_heading_pane_t4_ParamLimits

0x2166,	// (0x00098d38) cale_month_day_heading_pane_t5_ParamLimits

0x21ab,	// (0x00098d7d) cale_month_day_heading_pane_t6_ParamLimits

0x21f0,	// (0x00098dc2) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000a5dc4) cale_month_day_heading_pane_t_ParamLimits

0xbab7,	// (0x000a2689) smil_status_volume_pane

0x2c15,	// (0x000997e7) postcard_address_pane_ParamLimits

0x2c15,	// (0x000997e7) postcard_address_pane

0x2c27,	// (0x000997f9) postcard_message_pane_ParamLimits

0x2c27,	// (0x000997f9) postcard_message_pane

0x313f,	// (0x00099d11) call2_cli_visual_pane_t1_ParamLimits

0x313f,	// (0x00099d11) call2_cli_visual_pane_t1

0xd562,	// (0x000a4134) postcard_message_pane_t1_ParamLimits

0xd562,	// (0x000a4134) postcard_message_pane_t1

0xd54a,	// (0x000a411c) postcard_address_pane_t1_ParamLimits

0xd54a,	// (0x000a411c) postcard_address_pane_t1

0x3835,	// (0x0009a407) popup_call3_audio_in_window_ParamLimits

0x3835,	// (0x0009a407) popup_call3_audio_in_window

0x36c0,	// (0x0009a292) bg_popup_call3_in_pane_ParamLimits

0x36c0,	// (0x0009a292) bg_popup_call3_in_pane

0x3736,	// (0x0009a308) popup_call3_audio_in_window_g1_ParamLimits

0x3736,	// (0x0009a308) popup_call3_audio_in_window_g1

0x3756,	// (0x0009a328) popup_call3_audio_in_window_g2_ParamLimits

0x3756,	// (0x0009a328) popup_call3_audio_in_window_g2

0x3776,	// (0x0009a348) popup_call3_audio_in_window_g3_ParamLimits

0x3776,	// (0x0009a348) popup_call3_audio_in_window_g3

0x0003,

0xf4a6,	// (0x000a6078) popup_call3_audio_in_window_g_ParamLimits

0xf4a6,	// (0x000a6078) popup_call3_audio_in_window_g

0x37a7,	// (0x0009a379) popup_call3_audio_in_window_t1_ParamLimits

0x37a7,	// (0x0009a379) popup_call3_audio_in_window_t1

0x37e5,	// (0x0009a3b7) popup_call3_audio_in_window_t2_ParamLimits

0x37e5,	// (0x0009a3b7) popup_call3_audio_in_window_t2

0x3823,	// (0x0009a3f5) popup_call3_audio_in_window_t3_ParamLimits

0x3823,	// (0x0009a3f5) popup_call3_audio_in_window_t3

0x0002,

0xf4af,	// (0x000a6081) popup_call3_audio_in_window_t_ParamLimits

0xf4af,	// (0x000a6081) popup_call3_audio_in_window_t

0xb792,	// (0x000a2364) bg_popup_call3_rect_pane

0xb694,	// (0x000a2266) bg_popup_call3_rect_pane_g1

0xb68c,	// (0x000a225e) bg_popup_call3_rect_pane_g2

0xb684,	// (0x000a2256) bg_popup_call3_rect_pane_g3

0xb6a4,	// (0x000a2276) bg_popup_call3_rect_pane_g4

0xb69c,	// (0x000a226e) bg_popup_call3_rect_pane_g5

0xb6ac,	// (0x000a227e) bg_popup_call3_rect_pane_g6

0xb6b4,	// (0x000a2286) bg_popup_call3_rect_pane_g7

0xacbc,	// (0x000a188e) mup_visualizer_osc_pane

0xacbc,	// (0x000a188e) mup_visualizer_spec_pane

0x36f0,	// (0x0009a2c2) call3_video_qcif_pane_ParamLimits

0x36f0,	// (0x0009a2c2) call3_video_qcif_pane

0x3703,	// (0x0009a2d5) call3_video_qcif_uncrop_pane_ParamLimits

0x3703,	// (0x0009a2d5) call3_video_qcif_uncrop_pane

0x3711,	// (0x0009a2e3) call3_video_subqcif_pane_ParamLimits

0x3711,	// (0x0009a2e3) call3_video_subqcif_pane

0x3725,	// (0x0009a2f7) call3_video_subqcif_uncrop_pane_ParamLimits

0x3725,	// (0x0009a2f7) call3_video_subqcif_uncrop_pane

0x3796,	// (0x0009a368) popup_call3_audio_in_window_g4_ParamLimits

0x3796,	// (0x0009a368) popup_call3_audio_in_window_g4

0xacbc,	// (0x000a188e) mup_spec_half_pane

0xacbc,	// (0x000a188e) mup_spec_half_pane_cp

0xacbc,	// (0x000a188e) mup_osc_middle_pane

0xb52c,	// (0x000a20fe) mup_visualizer_osc_pane_g1

0xd4fd,	// (0x000a40cf) mup_spec_bar_pane_ParamLimits

0xd4fd,	// (0x000a40cf) mup_spec_bar_pane

0xb52c,	// (0x000a20fe) mup_spec_bar_pane_g1

0xb52c,	// (0x000a20fe) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) mup_spec_bar_pane_g

0x0f84,	// (0x00097b56) aid_cale_week_size_cell_pane_ParamLimits

0x0f9e,	// (0x00097b70) bg_cale_heading_pane_ParamLimits

0xb6f4,	// (0x000a22c6) bg_cale_pane_cp01_ParamLimits

0x0fb6,	// (0x00097b88) cale_week_corner_pane_ParamLimits

0x0fd5,	// (0x00097ba7) cale_week_day_heading_pane_ParamLimits

0x0ff2,	// (0x00097bc4) cale_week_scroll_pane_g1_ParamLimits

0x1005,	// (0x00097bd7) cale_week_scroll_pane_g2_ParamLimits

0x101d,	// (0x00097bef) cale_week_scroll_pane_g3_ParamLimits

0x1035,	// (0x00097c07) cale_week_scroll_pane_g4_ParamLimits

0x104d,	// (0x00097c1f) cale_week_scroll_pane_g5_ParamLimits

0x106d,	// (0x00097c3f) cale_week_scroll_pane_g6_ParamLimits

0x108d,	// (0x00097c5f) cale_week_scroll_pane_g7_ParamLimits

0x10ad,	// (0x00097c7f) cale_week_scroll_pane_g8_ParamLimits

0x10d1,	// (0x00097ca3) cale_week_scroll_pane_g9_ParamLimits

0x10e9,	// (0x00097cbb) cale_week_scroll_pane_g10_ParamLimits

0x1101,	// (0x00097cd3) cale_week_scroll_pane_g11_ParamLimits

0x1119,	// (0x00097ceb) cale_week_scroll_pane_g12_ParamLimits

0x1131,	// (0x00097d03) cale_week_scroll_pane_g13_ParamLimits

0x1131,	// (0x00097d03) cale_week_scroll_pane_g14_ParamLimits

0x1131,	// (0x00097d03) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x000a5cd5) cale_week_scroll_pane_g_ParamLimits

0x116d,	// (0x00097d3f) cale_week_time_pane_ParamLimits

0x1191,	// (0x00097d63) grid_cale_week_pane_ParamLimits

0xb711,	// (0x000a22e3) listscroll_cale_week_pane_t1

0xb723,	// (0x000a22f5) scroll_pane_cp08_ParamLimits

0x1bf6,	// (0x000987c8) cale_month_corner_pane_ParamLimits

0xba8d,	// (0x000a265f) cale_month_pane_t1

0x2010,	// (0x00098be2) cale_month_week_pane_ParamLimits

0x257a,	// (0x0009914c) popup_call_status_window_g1_ParamLimits

0x258e,	// (0x00099160) popup_call_status_window_g2_ParamLimits

0x25a2,	// (0x00099174) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x000a5e4f) popup_call_status_window_g_ParamLimits

0xbe07,	// (0x000a29d9) aid_call2_pane

0x2ac2,	// (0x00099694) msg_header_pane_g1

0x2c15,	// (0x000997e7) postcard_address2_pane_ParamLimits

0x2c15,	// (0x000997e7) postcard_address2_pane

0x2c27,	// (0x000997f9) postcard_message2_pane_ParamLimits

0x2c27,	// (0x000997f9) postcard_message2_pane

0x3690,	// (0x0009a262) message2_row_pane_ParamLimits

0x3690,	// (0x0009a262) message2_row_pane

0x36ad,	// (0x0009a27f) address2_row_pane_ParamLimits

0x36ad,	// (0x0009a27f) address2_row_pane

0xd4ca,	// (0x000a409c) postcard_message2_row_pane_g1

0xd4d2,	// (0x000a40a4) postcard_message2_row_pane_t1

0xd4ca,	// (0x000a409c) address2_row_pane_g1

0xd4d2,	// (0x000a40a4) address2_row_pane_t1

0x14cb,	// (0x0009809d) aid_size_cell_vorec

0xb20a,	// (0x000a1ddc) main_rss_pane

0xd4e0,	// (0x000a40b2) rss_list_single_pane_ParamLimits

0xd4e0,	// (0x000a40b2) rss_list_single_pane

0xd4ee,	// (0x000a40c0) rss_list_single_pane_t1

0xd4ee,	// (0x000a40c0) rss_list_single_pane_t2

0x0001,

0xf49a,	// (0x000a606c) rss_list_single_pane_t

0xb20a,	// (0x000a1ddc) main_camera2_pane

0xb20a,	// (0x000a1ddc) main_video2_pane

0x99fb,	// (0x000a05cd) cams_zoom_pane_cp2_ParamLimits

0x99fb,	// (0x000a05cd) cams_zoom_pane_cp2

0x99fb,	// (0x000a05cd) image2_vga_pane_ParamLimits

0x99fb,	// (0x000a05cd) image2_vga_pane

0x9a09,	// (0x000a05db) main_camera2_pane_g1_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g1

0x9a09,	// (0x000a05db) main_camera2_pane_g2_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g2

0x9a09,	// (0x000a05db) main_camera2_pane_g3_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g3

0x9a09,	// (0x000a05db) main_camera2_pane_g4_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g4

0x9a09,	// (0x000a05db) main_camera2_pane_g5_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g5

0x9a09,	// (0x000a05db) main_camera2_pane_g6_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g6

0x9a09,	// (0x000a05db) main_camera2_pane_g7_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g7

0x9a09,	// (0x000a05db) main_camera2_pane_g8_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g8

0x0008,

0xf4b6,	// (0x000a6088) main_camera2_pane_g_ParamLimits

0xf4b6,	// (0x000a6088) main_camera2_pane_g

0x3857,	// (0x0009a429) main_camera2_pane_t1_ParamLimits

0x3857,	// (0x0009a429) main_camera2_pane_t1

0x3857,	// (0x0009a429) main_camera2_pane_t2_ParamLimits

0x3857,	// (0x0009a429) main_camera2_pane_t2

0x3857,	// (0x0009a429) main_camera2_pane_t3_ParamLimits

0x3857,	// (0x0009a429) main_camera2_pane_t3

0x3857,	// (0x0009a429) main_camera2_pane_t4_ParamLimits

0x3857,	// (0x0009a429) main_camera2_pane_t4

0x0006,

0xf4c9,	// (0x000a609b) main_camera2_pane_t_ParamLimits

0xf4c9,	// (0x000a609b) main_camera2_pane_t

0x9a4d,	// (0x000a061f) cams_zoom_pane_cp4_ParamLimits

0x9a4d,	// (0x000a061f) cams_zoom_pane_cp4

0x386b,	// (0x0009a43d) image2_cif_pane_ParamLimits

0x386b,	// (0x0009a43d) image2_cif_pane

0x9827,	// (0x000a03f9) image2_subqcif_pane_ParamLimits

0x9827,	// (0x000a03f9) image2_subqcif_pane

0x3879,	// (0x0009a44b) main_video2_pane_g1_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g1

0x3879,	// (0x0009a44b) main_video2_pane_g2_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g2

0x3879,	// (0x0009a44b) main_video2_pane_g3_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g3

0x3879,	// (0x0009a44b) main_video2_pane_g4_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g4

0x3879,	// (0x0009a44b) main_video2_pane_g5_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g5

0x3879,	// (0x0009a44b) main_video2_pane_g6_ParamLimits

0x3879,	// (0x0009a44b) main_video2_pane_g6

0x0005,

0xf4d8,	// (0x000a60aa) main_video2_pane_g_ParamLimits

0xf4d8,	// (0x000a60aa) main_video2_pane_g

0x3887,	// (0x0009a459) main_video2_pane_t1_ParamLimits

0x3887,	// (0x0009a459) main_video2_pane_t1

0x3887,	// (0x0009a459) main_video2_pane_t2_ParamLimits

0x3887,	// (0x0009a459) main_video2_pane_t2

0x3887,	// (0x0009a459) main_video2_pane_t3_ParamLimits

0x3887,	// (0x0009a459) main_video2_pane_t3

0x0002,

0xf4e5,	// (0x000a60b7) main_video2_pane_t_ParamLimits

0xf4e5,	// (0x000a60b7) main_video2_pane_t

0x31e4,	// (0x00099db6) call_muted_g2

0x0001,

0xf495,	// (0x000a6067) call_muted_g

0xb20a,	// (0x000a1ddc) main_mup2_pane

0xc263,	// (0x000a2e35) main_mup2_pane_g1_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g1

0xc263,	// (0x000a2e35) main_mup2_pane_g2_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g2

0x9fc9,	// (0x000a0b9b) main_mup_pane_g13_cp1

0x9835,	// (0x000a0407) mup_volume_pane_cp1

0xc263,	// (0x000a2e35) main_mup2_pane_g4_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g4

0xc263,	// (0x000a2e35) main_mup2_pane_g5_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g5

0xc263,	// (0x000a2e35) main_mup2_pane_g6_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g6

0xc263,	// (0x000a2e35) main_mup2_pane_g7_ParamLimits

0xc263,	// (0x000a2e35) main_mup2_pane_g7

0x0006,

0xf4ec,	// (0x000a60be) main_mup2_pane_g_ParamLimits

0xf4ec,	// (0x000a60be) main_mup2_pane_g

0xc271,	// (0x000a2e43) main_mup2_pane_t1_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t1

0xc271,	// (0x000a2e43) main_mup2_pane_t2_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t2

0xc271,	// (0x000a2e43) main_mup2_pane_t3_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t3

0xc271,	// (0x000a2e43) main_mup2_pane_t4_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t4

0xc271,	// (0x000a2e43) main_mup2_pane_t5_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t5

0xc271,	// (0x000a2e43) main_mup2_pane_t6_ParamLimits

0xc271,	// (0x000a2e43) main_mup2_pane_t6

0x0005,

0xf4fb,	// (0x000a60cd) main_mup2_pane_t_ParamLimits

0xf4fb,	// (0x000a60cd) main_mup2_pane_t

0xc285,	// (0x000a2e57) mup2_visualizer_pane_ParamLimits

0xc285,	// (0x000a2e57) mup2_visualizer_pane

0xc285,	// (0x000a2e57) mup_progress_pane_cp_ParamLimits

0xc285,	// (0x000a2e57) mup_progress_pane_cp

0x9a71,	// (0x000a0643) mup_volume_pane_cp_ParamLimits

0x9a71,	// (0x000a0643) mup_volume_pane_cp

0xb4ee,	// (0x000a20c0) mup2_visualizer_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) mup2_visualizer_pane_g1

0xb4fc,	// (0x000a20ce) mup2_visualizer_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) mup2_visualizer_pane_g2

0xb4fc,	// (0x000a20ce) mup2_visualizer_pane_g3_ParamLimits

0xb4fc,	// (0x000a20ce) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x000a5c4e) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x000a5c4e) mup2_visualizer_pane_g

0xacbc,	// (0x000a188e) aid_size_cell_fmradio

0x3396,	// (0x00099f68) aid_height_parent_landcape

0xb8e2,	// (0x000a24b4) wml_content_pane_cp

0xb8ea,	// (0x000a24bc) wml_tabs_pane

0xb8f3,	// (0x000a24c5) popup_wml_miniature_window

0xb8fb,	// (0x000a24cd) scroll_pane_cp021

0xb90f,	// (0x000a24e1) wml_content_pane_comp8

0xb20a,	// (0x000a1ddc) bg_popup_sub_pane_cp05

0xd594,	// (0x000a4166) popup_wml_miniature_window_g1

0xd59c,	// (0x000a416e) wml_miniature_view_pane

0x389b,	// (0x0009a46d) aid_size_wml_view

0x38a3,	// (0x0009a475) wml_miniature_view_pane_g1

0x38ac,	// (0x0009a47e) wml_miniature_view_pane_g2

0x38b5,	// (0x0009a487) wml_miniature_view_pane_g3

0x38bd,	// (0x0009a48f) wml_miniature_view_pane_g4

0x38c5,	// (0x0009a497) wml_miniature_view_pane_g5

0x38cd,	// (0x0009a49f) wml_miniature_view_pane_g6

0x38d5,	// (0x0009a4a7) wml_miniature_view_pane_g7

0x38dd,	// (0x0009a4af) wml_miniature_view_pane_g8

0x0007,

0xf508,	// (0x000a60da) wml_miniature_view_pane_g

0xd5a4,	// (0x000a4176) background_graphic_ParamLimits

0xd5a4,	// (0x000a4176) background_graphic

0xd5b0,	// (0x000a4182) wml_tabs_2_pane

0xd5b9,	// (0x000a418b) wml_tabs_3_pane_ParamLimits

0xd5b9,	// (0x000a418b) wml_tabs_3_pane

0xd5cb,	// (0x000a419d) wml_tabs_4_pane_ParamLimits

0xd5cb,	// (0x000a419d) wml_tabs_4_pane

0xd5e1,	// (0x000a41b3) wml_tabs_5_pane_ParamLimits

0xd5e1,	// (0x000a41b3) wml_tabs_5_pane

0xd5fb,	// (0x000a41cd) wml_tabs_pane_g2_ParamLimits

0xd5fb,	// (0x000a41cd) wml_tabs_pane_g2

0xd610,	// (0x000a41e2) wml_tabs_pane_g3_ParamLimits

0xd610,	// (0x000a41e2) wml_tabs_pane_g3

0xd625,	// (0x000a41f7) wml_tabs_2_active_pane_ParamLimits

0xd625,	// (0x000a41f7) wml_tabs_2_active_pane

0xd625,	// (0x000a41f7) wml_tabs_2_passive_pane_ParamLimits

0xd625,	// (0x000a41f7) wml_tabs_2_passive_pane

0x38e5,	// (0x0009a4b7) wml_tabs_3_active_pane_cp_ParamLimits

0x38e5,	// (0x0009a4b7) wml_tabs_3_active_pane_cp

0x38fa,	// (0x0009a4cc) wml_tabs_3_passive_pane_ParamLimits

0x38fa,	// (0x0009a4cc) wml_tabs_3_passive_pane

0x390d,	// (0x0009a4df) wml_tabs_3_passive_pane_cp_ParamLimits

0x390d,	// (0x0009a4df) wml_tabs_3_passive_pane_cp

0x3924,	// (0x0009a4f6) tabs_4_active_pane

0x392c,	// (0x0009a4fe) tabs_4_passive_pane

0x3936,	// (0x0009a508) tabs_4_passive_pane_cp

0x393e,	// (0x0009a510) tabs_4_passive_pane_cp2

0x315a,	// (0x00099d2c) aid_height_text

0xc285,	// (0x000a2e57) mup_volume_cont_pane_ParamLimits

0xc285,	// (0x000a2e57) mup_volume_cont_pane

0xacbc,	// (0x000a188e) aid_size_cell_pinb

0xacbc,	// (0x000a188e) aid_size_list_pinb

0xc285,	// (0x000a2e57) mup2_volume_cont_pane_ParamLimits

0xc285,	// (0x000a2e57) mup2_volume_cont_pane

0x9a5b,	// (0x000a062d) mup2_volume_cont_pane_g1_ParamLimits

0x9a5b,	// (0x000a062d) mup2_volume_cont_pane_g1

0x0a42,	// (0x00097614) aid_size_cell_touch_ParamLimits

0x0a42,	// (0x00097614) aid_size_cell_touch

0x0c6e,	// (0x00097840) touch_pane_ParamLimits

0x0c6e,	// (0x00097840) touch_pane

0x9835,	// (0x000a0407) main_rss2_pane

0xd63c,	// (0x000a420e) listscroll_rss2_pane

0xd645,	// (0x000a4217) rss2_navigation_pane

0xd64d,	// (0x000a421f) list_rss2_pane

0xbf1f,	// (0x000a2af1) scroll_pane_cp22

0xd655,	// (0x000a4227) rss2_navigation_pane_g1

0xd65e,	// (0x000a4230) rss2_navigation_pane_g2

0xd666,	// (0x000a4238) rss2_navigation_pane_g3

0x0002,

0xf519,	// (0x000a60eb) rss2_navigation_pane_g

0xd66e,	// (0x000a4240) rss2_navigation_pane_t1

0x3948,	// (0x0009a51a) rss2_list_single_pane_ParamLimits

0x3948,	// (0x0009a51a) rss2_list_single_pane

0xd67c,	// (0x000a424e) rss2_list_single_pane_t2

0xd68a,	// (0x000a425c) rss2_list_single_pane_t3_ParamLimits

0xd68a,	// (0x000a425c) rss2_list_single_pane_t3

0xd6a7,	// (0x000a4279) rss2_list_single_pane_t4

0x2438,	// (0x0009900a) smil_status_pane_g1

0x9827,	// (0x000a03f9) main_image2_pane_ParamLimits

0x9827,	// (0x000a03f9) main_image2_pane

0x9a09,	// (0x000a05db) main_camera2_pane_g9_ParamLimits

0x9a09,	// (0x000a05db) main_camera2_pane_g9

0x3857,	// (0x0009a429) main_camera2_pane_t5_ParamLimits

0x3857,	// (0x0009a429) main_camera2_pane_t5

0x9a17,	// (0x000a05e9) main_camera2_pane_t6_ParamLimits

0x9a17,	// (0x000a05e9) main_camera2_pane_t6

0x395e,	// (0x0009a530) main_image2_pane_g1_ParamLimits

0x395e,	// (0x0009a530) main_image2_pane_g1

0x2e2d,	// (0x000999ff) smil2_video_pane_ParamLimits

0x2e2d,	// (0x000999ff) smil2_video_pane

0x97de,	// (0x000a03b0) aid_zoom_text_primary_cp

0x981d,	// (0x000a03ef) popup_preview_fixed_window

0xb84b,	// (0x000a241d) im_reading_pane_g1

0x3849,	// (0x0009a41b) cams2_bc_adjust_pane_cp_ParamLimits

0x3849,	// (0x0009a41b) cams2_bc_adjust_pane_cp

0x9a3f,	// (0x000a0611) cams2_bc_adjust_pane_ParamLimits

0x9a3f,	// (0x000a0611) cams2_bc_adjust_pane

0x9fc9,	// (0x000a0b9b) cams2_bc_adjust_pane_g1

0x9835,	// (0x000a0407) cams2_slider_pane

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g1

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g2

0x0006,

0x0148,	// (0x00096d1a) cams2_slider_pane_g

0x0d37,	// (0x00097909) calc_display_pane_ParamLimits

0x0d5c,	// (0x0009792e) calc_paper_pane_ParamLimits

0x0d7f,	// (0x00097951) grid_calc_pane_ParamLimits

0x9918,	// (0x000a04ea) popup_clock_digital_window_t1_ParamLimits

0xc47b,	// (0x000a304d) main_image_pane_t1

0x0d19,	// (0x000978eb) aid_size_cell_calc_ParamLimits

0x0d19,	// (0x000978eb) aid_size_cell_calc

0x33dc,	// (0x00099fae) popup_blid_sat_info2_window_ParamLimits

0x33dc,	// (0x00099fae) popup_blid_sat_info2_window

0xd6b5,	// (0x000a4287) aid_size_cell_blid

0xd6bd,	// (0x000a428f) bg_popup_window_pane_cp07

0xd6e0,	// (0x000a42b2) grid_popup_blid_pane

0xd6ea,	// (0x000a42bc) heading_pane_cp05_ParamLimits

0xd6ea,	// (0x000a42bc) heading_pane_cp05

0xd7b4,	// (0x000a4386) cell_popup_blid_pane_ParamLimits

0xd7b4,	// (0x000a4386) cell_popup_blid_pane

0xd7d8,	// (0x000a43aa) cell_popup_blid_pane_g1

0xd7e0,	// (0x000a43b2) cell_popup_blid_pane_t1

0xc285,	// (0x000a2e57) mup2_indicator_pane_ParamLimits

0xc285,	// (0x000a2e57) mup2_indicator_pane

0xacbc,	// (0x000a188e) mup2_visualizer_osc_pane

0xd57e,	// (0x000a4150) mup2_visualizer_spec_pane_ParamLimits

0xd57e,	// (0x000a4150) mup2_visualizer_spec_pane

0xacbc,	// (0x000a188e) mup2_spec_half_pane

0xacbc,	// (0x000a188e) mup2_spec_half_pane_cp

0xd7ee,	// (0x000a43c0) mup2_spec_bar_pane_ParamLimits

0xd7ee,	// (0x000a43c0) mup2_spec_bar_pane

0xb52c,	// (0x000a20fe) mup2_spec_bar_pane_g1

0xd82f,	// (0x000a4401) mup2_spec_bar_pane_g2

0x0001,

0x016e,	// (0x00096d40) mup2_spec_bar_pane_g

0xacbc,	// (0x000a188e) mup2_osc_middle_pane

0xb52c,	// (0x000a20fe) mup2_visualizer_osc_pane_g1

0xace6,	// (0x000a18b8) popup_number_entry_window_t1_ParamLimits

0xacf9,	// (0x000a18cb) popup_number_entry_window_t2_ParamLimits

0xad0b,	// (0x000a18dd) popup_number_entry_window_t3_ParamLimits

0x0cc0,	// (0x00097892) popup_number_entry_window_t5_ParamLimits

0x0cc0,	// (0x00097892) popup_number_entry_window_t5

0xf01d,	// (0x000a5bef) popup_number_entry_window_t_ParamLimits

0xad1d,	// (0x000a18ef) text_title_cp2_ParamLimits

0x9957,	// (0x000a0529) aid_hotspot_pointer_text2_pane

0x9971,	// (0x000a0543) main_viewer_pane_g9_ParamLimits

0x9971,	// (0x000a0543) main_viewer_pane_g9

0xba8d,	// (0x000a265f) cale_month_pane_t1_ParamLimits

0xbaca,	// (0x000a269c) bg_cale_pane_ParamLimits

0xbae2,	// (0x000a26b4) list_cale_pane_ParamLimits

0xbaf3,	// (0x000a26c5) listscroll_cale_day_pane_t1

0xbb05,	// (0x000a26d7) scroll_pane_cp09_ParamLimits

0x284f,	// (0x00099421) main_mup_eq_pane_t1_ParamLimits

0x284f,	// (0x00099421) main_mup_eq_pane_t1

0x2869,	// (0x0009943b) main_mup_eq_pane_t2_ParamLimits

0x2869,	// (0x0009943b) main_mup_eq_pane_t2

0x2883,	// (0x00099455) main_mup_eq_pane_t3_ParamLimits

0x2883,	// (0x00099455) main_mup_eq_pane_t3

0x289f,	// (0x00099471) main_mup_eq_pane_t4_ParamLimits

0x289f,	// (0x00099471) main_mup_eq_pane_t4

0x28bb,	// (0x0009948d) main_mup_eq_pane_t5_ParamLimits

0x28bb,	// (0x0009948d) main_mup_eq_pane_t5

0x28d7,	// (0x000994a9) main_mup_eq_pane_t6_ParamLimits

0x28d7,	// (0x000994a9) main_mup_eq_pane_t6

0x28eb,	// (0x000994bd) main_mup_eq_pane_t7_ParamLimits

0x28eb,	// (0x000994bd) main_mup_eq_pane_t7

0x28ff,	// (0x000994d1) main_mup_eq_pane_t8_ParamLimits

0x28ff,	// (0x000994d1) main_mup_eq_pane_t8

0x2913,	// (0x000994e5) main_mup_eq_pane_t9_ParamLimits

0x2913,	// (0x000994e5) main_mup_eq_pane_t9

0x292d,	// (0x000994ff) main_mup_eq_pane_t10_ParamLimits

0x292d,	// (0x000994ff) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x000a5f49) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x000a5f49) main_mup_eq_pane_t

0x29dc,	// (0x000995ae) mup_equalizer_pane_cp5_ParamLimits

0x29f0,	// (0x000995c2) mup_equalizer_pane_cp6_ParamLimits

0x2a04,	// (0x000995d6) mup_equalizer_pane_cp7_ParamLimits

0x9835,	// (0x000a0407) main_gallery_pane

0xd51c,	// (0x000a40ee) smil2_volume_pane

0xd524,	// (0x000a40f6) smil_status_volume_pane_g1_ParamLimits

0xd537,	// (0x000a4109) smil_status_volume_pane_g2_ParamLimits

0x99d9,	// (0x000a05ab) smil_status_volume_pane_g3_ParamLimits

0xf49f,	// (0x000a6071) smil_status_volume_pane_g_ParamLimits

0xd6bd,	// (0x000a428f) bg_popup_window_pane_cp07_ParamLimits

0xd6cb,	// (0x000a429d) blid_firmament_pane

0xb487,	// (0x000a2059) aid_size_cell_gallery_ParamLimits

0xb487,	// (0x000a2059) aid_size_cell_gallery

0xb487,	// (0x000a2059) grid_gallery_pane_ParamLimits

0xb487,	// (0x000a2059) grid_gallery_pane

0xd6bd,	// (0x000a428f) cell_gallery_pane_ParamLimits

0xd6bd,	// (0x000a428f) cell_gallery_pane

0xb487,	// (0x000a2059) bg_cell_gallery_focus_pane_ParamLimits

0xb487,	// (0x000a2059) bg_cell_gallery_focus_pane

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g1

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g2_ParamLimits

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g2

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g3_ParamLimits

0xb4ee,	// (0x000a20c0) cell_gallery_pane_g3

0xb4fc,	// (0x000a20ce) cell_gallery_pane_g4_ParamLimits

0xb4fc,	// (0x000a20ce) cell_gallery_pane_g4

0x0003,

0x0173,	// (0x00096d45) cell_gallery_pane_g_ParamLimits

0x0173,	// (0x00096d45) cell_gallery_pane_g

0xd839,	// (0x000a440b) bg_cell_gallery_focus_pane_g1

0xd841,	// (0x000a4413) bg_cell_gallery_focus_pane_g2

0xd849,	// (0x000a441b) bg_cell_gallery_focus_pane_g3

0xd851,	// (0x000a4423) bg_cell_gallery_focus_pane_g4

0xd859,	// (0x000a442b) bg_cell_gallery_focus_pane_g5

0xd861,	// (0x000a4433) bg_cell_gallery_focus_pane_g6

0xd869,	// (0x000a443b) bg_cell_gallery_focus_pane_g7

0xd871,	// (0x000a4443) bg_cell_gallery_focus_pane_g8

0x0007,

0x017c,	// (0x00096d4e) bg_cell_gallery_focus_pane_g

0xd879,	// (0x000a444b) aid_firma_cardinal

0xd88d,	// (0x000a445f) blid_firmament_pane_t1

0xd8a4,	// (0x000a4476) blid_firmament_pane_t2

0xd8bb,	// (0x000a448d) blid_firmament_pane_t3

0xd8d2,	// (0x000a44a4) blid_firmament_pane_t4

0x0003,

0x018d,	// (0x00096d5f) blid_firmament_pane_t

0xd8e9,	// (0x000a44bb) blid_sat_info_pane

0xb52c,	// (0x000a20fe) blid_sat_info_pane_g1

0xb52c,	// (0x000a20fe) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) blid_sat_info_pane_g

0xd8f9,	// (0x000a44cb) blid_sat_info_pane_t1

0xd907,	// (0x000a44d9) smil2_volume_content_pane

0xd910,	// (0x000a44e2) smil2_volume_pane_g1

0xb601,	// (0x000a21d3) smil2_volume_content_pane_g1

0xd918,	// (0x000a44ea) smil2_volume_content_pane_g2

0xd921,	// (0x000a44f3) smil2_volume_content_pane_g3

0xd92a,	// (0x000a44fc) smil2_volume_content_pane_g4

0xd933,	// (0x000a4505) smil2_volume_content_pane_g5

0xd93c,	// (0x000a450e) smil2_volume_content_pane_g6

0xd945,	// (0x000a4517) smil2_volume_content_pane_g7

0xd94e,	// (0x000a4520) smil2_volume_content_pane_g8

0xd957,	// (0x000a4529) smil2_volume_content_pane_g9

0xd960,	// (0x000a4532) smil2_volume_content_pane_g10

0x0009,

0xf537,	// (0x000a6109) smil2_volume_content_pane_g

0x1245,	// (0x00097e17) cale_week_day_heading_pane_t1_ParamLimits

0x126f,	// (0x00097e41) cale_week_day_heading_pane_t2_ParamLimits

0x129e,	// (0x00097e70) cale_week_day_heading_pane_t3_ParamLimits

0x12cd,	// (0x00097e9f) cale_week_day_heading_pane_t4_ParamLimits

0x12fc,	// (0x00097ece) cale_week_day_heading_pane_t5_ParamLimits

0x1333,	// (0x00097f05) cale_week_day_heading_pane_t6_ParamLimits

0x136a,	// (0x00097f3c) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x000a5cf6) cale_week_day_heading_pane_t_ParamLimits

0xb740,	// (0x000a2312) bg_cale_side_pane_ParamLimits

0x1394,	// (0x00097f66) cale_week_time_pane_t1_ParamLimits

0x13ae,	// (0x00097f80) cale_week_time_pane_t2_ParamLimits

0x13c8,	// (0x00097f9a) cale_week_time_pane_t3_ParamLimits

0x13e2,	// (0x00097fb4) cale_week_time_pane_t4_ParamLimits

0x13fc,	// (0x00097fce) cale_week_time_pane_t5_ParamLimits

0x1416,	// (0x00097fe8) cale_week_time_pane_t6_ParamLimits

0x1430,	// (0x00098002) cale_week_time_pane_t7_ParamLimits

0x144a,	// (0x0009801c) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x000a5d05) cale_week_time_pane_t_ParamLimits

0x146a,	// (0x0009803c) cell_cale_week_pane_g2_ParamLimits

0xb740,	// (0x000a2312) bg_cale_side_pane_cp01_ParamLimits

0x223d,	// (0x00098e0f) cale_month_week_pane_t1_ParamLimits

0x2256,	// (0x00098e28) cale_month_week_pane_t2_ParamLimits

0x226f,	// (0x00098e41) cale_month_week_pane_t3_ParamLimits

0x2288,	// (0x00098e5a) cale_month_week_pane_t4_ParamLimits

0x22a1,	// (0x00098e73) cale_month_week_pane_t5_ParamLimits

0x22ba,	// (0x00098e8c) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x000a5dd3) cale_month_week_pane_t_ParamLimits

0x9898,	// (0x000a046a) cell_cale_month_pane_g1_ParamLimits

0x9835,	// (0x000a0407) main_cale_event_viewer_pane

0xacbc,	// (0x000a188e) listscroll_cale_event_viewer_pane

0xd969,	// (0x000a453b) list_cale_ev_pane

0xd971,	// (0x000a4543) scroll_pane_cp023

0xd97d,	// (0x000a454f) field_cale_ev_pane_ParamLimits

0xd97d,	// (0x000a454f) field_cale_ev_pane

0xd99b,	// (0x000a456d) field_cale_ev_content_pane_ParamLimits

0xd99b,	// (0x000a456d) field_cale_ev_content_pane

0xd9a7,	// (0x000a4579) field_cale_ev_pane_g1_ParamLimits

0xd9a7,	// (0x000a4579) field_cale_ev_pane_g1

0xd9b3,	// (0x000a4585) field_cale_ev_pane_g2_ParamLimits

0xd9b3,	// (0x000a4585) field_cale_ev_pane_g2

0xd9cb,	// (0x000a459d) field_cale_ev_pane_g3_ParamLimits

0xd9cb,	// (0x000a459d) field_cale_ev_pane_g3

0x0002,

0x01ab,	// (0x00096d7d) field_cale_ev_pane_g_ParamLimits

0x01ab,	// (0x00096d7d) field_cale_ev_pane_g

0xd9e3,	// (0x000a45b5) field_cale_ev_pane_t1_ParamLimits

0xd9e3,	// (0x000a45b5) field_cale_ev_pane_t1

0xd9fa,	// (0x000a45cc) field_cale_ev_content_pane_t1_ParamLimits

0xd9fa,	// (0x000a45cc) field_cale_ev_content_pane_t1

0xc2d7,	// (0x000a2ea9) bg_button_pane_cp01

0x0f72,	// (0x00097b44) listscroll_cale_week_pane_ParamLimits

0x9885,	// (0x000a0457) popup_toolbar_window_cp01

0xb711,	// (0x000a22e3) listscroll_cale_week_pane_t1_ParamLimits

0x2491,	// (0x00099063) listscroll_cale_day_pane_ParamLimits

0xb9d3,	// (0x000a25a5) popup_toolbar_window_cp02

0xbaf3,	// (0x000a26c5) listscroll_cale_day_pane_t1_ParamLimits

0x0f72,	// (0x00097b44) main_cale_month_pane_ParamLimits

0x99c4,	// (0x000a0596) popup_toolbar_window_cp03_ParamLimits

0x99c4,	// (0x000a0596) popup_toolbar_window_cp03

0x2cf5,	// (0x000998c7) main_image_pane_g2_ParamLimits

0x2cf5,	// (0x000998c7) main_image_pane_g2

0x2d06,	// (0x000998d8) main_image_pane_g3_ParamLimits

0x2d06,	// (0x000998d8) main_image_pane_g3

0x0002,

0xf409,	// (0x000a5fdb) main_image_pane_g_ParamLimits

0xf409,	// (0x000a5fdb) main_image_pane_g

0xc47b,	// (0x000a304d) main_image_pane_t1_ParamLimits

0x2d17,	// (0x000998e9) main_image_pane_t2_ParamLimits

0x2d17,	// (0x000998e9) main_image_pane_t2

0x2d29,	// (0x000998fb) main_image_pane_t3_ParamLimits

0x2d29,	// (0x000998fb) main_image_pane_t3

0x2d51,	// (0x00099923) main_image_pane_t4_ParamLimits

0x2d51,	// (0x00099923) main_image_pane_t4

0x0003,

0xf410,	// (0x000a5fe2) main_image_pane_t_ParamLimits

0xf410,	// (0x000a5fe2) main_image_pane_t

0x2d71,	// (0x00099943) popup_image_details_window_cp01

0x2d7b,	// (0x0009994d) popup_toobar_trans_pane_cp01_ParamLimits

0x2d7b,	// (0x0009994d) popup_toobar_trans_pane_cp01

0x34ad,	// (0x0009a07f) popup_image_details_window_ParamLimits

0x34ad,	// (0x0009a07f) popup_image_details_window

0x9997,	// (0x000a0569) popup_image_focus_window

0x99fb,	// (0x000a05cd) camera2_autofocus_pane_ParamLimits

0x99fb,	// (0x000a05cd) camera2_autofocus_pane

0xacbc,	// (0x000a188e) bg_popup_sub_pane_cp06

0xda18,	// (0x000a45ea) popup_image_focus_window_g1

0xda20,	// (0x000a45f2) popup_image_focus_window_g2

0xda28,	// (0x000a45fa) popup_image_focus_window_g3

0xda30,	// (0x000a4602) popup_image_focus_window_g4

0x0003,

0x01b2,	// (0x00096d84) popup_image_focus_window_g

0xda38,	// (0x000a460a) popup_image_focus_window_t1

0xda46,	// (0x000a4618) popup_image_focus_window_t2

0xda56,	// (0x000a4628) popup_image_focus_window_t3

0x0002,

0x01bb,	// (0x00096d8d) popup_image_focus_window_t

0xb4ee,	// (0x000a20c0) camera2_autofocus_pane_g1

0xb487,	// (0x000a2059) bg_tb_trans_pane_cp01

0xda64,	// (0x000a4636) popup_image_details_window_g1

0xda77,	// (0x000a4649) popup_image_details_window_g2

0x0002,

0x01cd,	// (0x00096d9f) popup_image_details_window_g

0xdaa0,	// (0x000a4672) popup_image_details_window_t1

0xdab2,	// (0x000a4684) popup_image_details_window_t2

0xdacb,	// (0x000a469d) popup_image_details_window_t3

0xdadf,	// (0x000a46b1) popup_image_details_window_t4

0xdafa,	// (0x000a46cc) popup_image_details_window_t5

0x0004,

0x01d4,	// (0x00096da6) popup_image_details_window_t

0xb576,	// (0x000a2148) bg_calc_paper_pane_ParamLimits

0x9835,	// (0x000a0407) grid_highlight_pane_cp013

0x9847,	// (0x000a0419) list_calc_pane_ParamLimits

0x9859,	// (0x000a042b) scroll_pane_cp024

0xb58a,	// (0x000a215c) bg_calc_display_pane_ParamLimits

0x0dc1,	// (0x00097993) calc_display_pane_t1_ParamLimits

0x0dd3,	// (0x000979a5) calc_display_pane_t2_ParamLimits

0x9861,	// (0x000a0433) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000a5c76) calc_display_pane_t_ParamLimits

0x0e8d,	// (0x00097a5f) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000a5c93) cell_calc_pane_g

0x0e96,	// (0x00097a68) cell_calc_pane_t1

0xb5df,	// (0x000a21b1) grid_highlight_pane_cp02_ParamLimits

0xb5f5,	// (0x000a21c7) toolbar_button_pane_cp01_ParamLimits

0xb5f5,	// (0x000a21c7) toolbar_button_pane_cp01

0xc4c0,	// (0x000a3092) temp_image_control_pane_ParamLimits

0xc4c0,	// (0x000a3092) temp_image_control_pane

0x9827,	// (0x000a03f9) main_mp3_pane

0xdb14,	// (0x000a46e6) temp_image_control_pane_g1_ParamLimits

0xdb14,	// (0x000a46e6) temp_image_control_pane_g1

0xdb22,	// (0x000a46f4) temp_image_control_pane_g2_ParamLimits

0xdb22,	// (0x000a46f4) temp_image_control_pane_g2

0xdb34,	// (0x000a4706) temp_image_control_pane_g3_ParamLimits

0xdb34,	// (0x000a4706) temp_image_control_pane_g3

0x3974,	// (0x0009a546) temp_image_control_pane_g4_ParamLimits

0x3974,	// (0x0009a546) temp_image_control_pane_g4

0x0003,

0xf54c,	// (0x000a611e) temp_image_control_pane_g_ParamLimits

0xf54c,	// (0x000a611e) temp_image_control_pane_g

0xdb14,	// (0x000a46e6) main_mp3_pane_g1

0x3987,	// (0x0009a559) main_mp3_pane_g2

0x0007,

0xf555,	// (0x000a6127) main_mp3_pane_g

0xdb69,	// (0x000a473b) main_mp3_pane_t1

0xb4fc,	// (0x000a20ce) main_camera_pane_g8_ParamLimits

0xb4fc,	// (0x000a20ce) main_camera_pane_g8

0x1638,	// (0x0009820a) main_video_pane_g7_ParamLimits

0x1638,	// (0x0009820a) main_video_pane_g7

0x9a2b,	// (0x000a05fd) main_camera2_pane_t7_ParamLimits

0x9a2b,	// (0x000a05fd) main_camera2_pane_t7

0xb8a2,	// (0x000a2474) scroll_pane_cp025_ParamLimits

0xb8a2,	// (0x000a2474) scroll_pane_cp025

0xb8b6,	// (0x000a2488) scroll_pane_cp026_ParamLimits

0xb8b6,	// (0x000a2488) scroll_pane_cp026

0xb8c5,	// (0x000a2497) wml_content_pane_ParamLimits

0x9835,	// (0x000a0407) main_touch_calib_pane

0x3a5b,	// (0x0009a62d) main_touch_calib_pane_g1

0x3a6d,	// (0x0009a63f) main_touch_calib_pane_g2

0x3a7f,	// (0x0009a651) main_touch_calib_pane_g3

0x3a91,	// (0x0009a663) main_touch_calib_pane_g4

0x0003,

0xf573,	// (0x000a6145) main_touch_calib_pane_g

0x3aa3,	// (0x0009a675) main_touch_calib_pane_t1

0x3abd,	// (0x0009a68f) main_touch_calib_pane_t2

0x0004,

0xf57c,	// (0x000a614e) main_touch_calib_pane_t

0xbfee,	// (0x000a2bc0) mup_progress_pane_cp02

0xc023,	// (0x000a2bf5) navi_pane_g1

0xc0de,	// (0x000a2cb0) navi_pane_mp_t3

0x9827,	// (0x000a03f9) main_mp3_pane_ParamLimits

0x3638,	// (0x0009a20a) navi_pane_ParamLimits

0xdb14,	// (0x000a46e6) main_mp3_pane_g1_ParamLimits

0x3987,	// (0x0009a559) main_mp3_pane_g2_ParamLimits

0x3995,	// (0x0009a567) main_mp3_pane_g3_ParamLimits

0x3995,	// (0x0009a567) main_mp3_pane_g3

0x39a3,	// (0x0009a575) main_mp3_pane_g4_ParamLimits

0x39a3,	// (0x0009a575) main_mp3_pane_g4

0xb4ee,	// (0x000a20c0) main_mp3_pane_g5_ParamLimits

0xb4ee,	// (0x000a20c0) main_mp3_pane_g5

0xdb44,	// (0x000a4716) main_mp3_pane_g6_ParamLimits

0xdb44,	// (0x000a4716) main_mp3_pane_g6

0xdb51,	// (0x000a4723) main_mp3_pane_g7_ParamLimits

0xdb51,	// (0x000a4723) main_mp3_pane_g7

0xdb5d,	// (0x000a472f) main_mp3_pane_g8_ParamLimits

0xdb5d,	// (0x000a472f) main_mp3_pane_g8

0xf555,	// (0x000a6127) main_mp3_pane_g_ParamLimits

0x39af,	// (0x0009a581) main_mp3_pane_t2

0x39bd,	// (0x0009a58f) main_mp3_pane_t3

0xdb77,	// (0x000a4749) main_mp3_pane_t4

0xdb85,	// (0x000a4757) main_mp3_pane_t5

0x0005,

0xf566,	// (0x000a6138) main_mp3_pane_t

0xdb93,	// (0x000a4765) mup_progress_pane_cp01

0x997d,	// (0x000a054f) aid_zoom_text_secondary2

0xd969,	// (0x000a453b) list_cale_ev2_pane

0xd971,	// (0x000a4543) scroll_pane_cp023_ParamLimits

0x3b13,	// (0x0009a6e5) field_cale_ev2_pane_ParamLimits

0x3b13,	// (0x0009a6e5) field_cale_ev2_pane

0xdb9b,	// (0x000a476d) field_cale_ev2_pane_g1_ParamLimits

0xdb9b,	// (0x000a476d) field_cale_ev2_pane_g1

0xdba7,	// (0x000a4779) field_cale_ev2_pane_g2_ParamLimits

0xdba7,	// (0x000a4779) field_cale_ev2_pane_g2

0xdbbf,	// (0x000a4791) field_cale_ev2_pane_g3_ParamLimits

0xdbbf,	// (0x000a4791) field_cale_ev2_pane_g3

0x0003,

0x021a,	// (0x00096dec) field_cale_ev2_pane_g_ParamLimits

0x021a,	// (0x00096dec) field_cale_ev2_pane_g

0xdbe3,	// (0x000a47b5) field_cale_ev2_pane_t1_ParamLimits

0xdbe3,	// (0x000a47b5) field_cale_ev2_pane_t1

0xdbfa,	// (0x000a47cc) field_cale_ev2_pane_t2_ParamLimits

0xdbfa,	// (0x000a47cc) field_cale_ev2_pane_t2

0x0001,

0x0223,	// (0x00096df5) field_cale_ev2_pane_t_ParamLimits

0x0223,	// (0x00096df5) field_cale_ev2_pane_t

0x2bcb,	// (0x0009979d) main_postcard_pane_g5_ParamLimits

0x2bcb,	// (0x0009979d) main_postcard_pane_g5

0x2be1,	// (0x000997b3) main_postcard_pane_g6_ParamLimits

0x2be1,	// (0x000997b3) main_postcard_pane_g6

0xb487,	// (0x000a2059) camera2_autofocus_pane_cp_ParamLimits

0xb487,	// (0x000a2059) camera2_autofocus_pane_cp

0x9827,	// (0x000a03f9) main_mup3_pane

0x3b78,	// (0x0009a74a) main_mup3_pane_g1_ParamLimits

0x3b78,	// (0x0009a74a) main_mup3_pane_g1

0x3bca,	// (0x0009a79c) main_mup3_pane_g2_ParamLimits

0x3bca,	// (0x0009a79c) main_mup3_pane_g2

0x3c32,	// (0x0009a804) main_mup3_pane_g3_ParamLimits

0x3c32,	// (0x0009a804) main_mup3_pane_g3

0x3c96,	// (0x0009a868) main_mup3_pane_g4_ParamLimits

0x3c96,	// (0x0009a868) main_mup3_pane_g4

0x3cfa,	// (0x0009a8cc) main_mup3_pane_g5_ParamLimits

0x3cfa,	// (0x0009a8cc) main_mup3_pane_g5

0xb01e,	// (0x000a1bf0) main_mup3_pane_g6_ParamLimits

0xb01e,	// (0x000a1bf0) main_mup3_pane_g6

0xb4fc,	// (0x000a20ce) main_mup3_pane_g7_ParamLimits

0xb4fc,	// (0x000a20ce) main_mup3_pane_g7

0x0007,

0xf592,	// (0x000a6164) main_mup3_pane_g_ParamLimits

0xf592,	// (0x000a6164) main_mup3_pane_g

0x3dc7,	// (0x0009a999) main_mup3_pane_t1_ParamLimits

0x3dc7,	// (0x0009a999) main_mup3_pane_t1

0x3eb5,	// (0x0009aa87) main_mup3_pane_t2_ParamLimits

0x3eb5,	// (0x0009aa87) main_mup3_pane_t2

0x3fa3,	// (0x0009ab75) main_mup3_pane_t4_ParamLimits

0x3fa3,	// (0x0009ab75) main_mup3_pane_t4

0x3fb5,	// (0x0009ab87) main_mup3_pane_t5_ParamLimits

0x3fb5,	// (0x0009ab87) main_mup3_pane_t5

0x4087,	// (0x0009ac59) main_mup3_pane_t6_ParamLimits

0x4087,	// (0x0009ac59) main_mup3_pane_t6

0x0005,

0xf5a3,	// (0x000a6175) main_mup3_pane_t_ParamLimits

0xf5a3,	// (0x000a6175) main_mup3_pane_t

0x412f,	// (0x0009ad01) mup3_progress_pane_ParamLimits

0x412f,	// (0x0009ad01) mup3_progress_pane

0x4197,	// (0x0009ad69) popup_mup3_control_window_ParamLimits

0x4197,	// (0x0009ad69) popup_mup3_control_window

0xdc0f,	// (0x000a47e1) popup_mup3_text_window

0x41af,	// (0x0009ad81) mup3_progress_pane_t1

0x41ce,	// (0x0009ada0) mup3_progress_pane_t2

0xdc17,	// (0x000a47e9) mup3_progress_pane_t3

0x0002,

0xf5b0,	// (0x000a6182) mup3_progress_pane_t

0xdc34,	// (0x000a4806) mup_progress_pane_cp03

0xdc44,	// (0x000a4816) bg_tb_trans_pane_cp04

0xdc44,	// (0x000a4816) mup3_volume_pane

0xdc4c,	// (0x000a481e) popup_mup3_control_window_g1

0xdc4c,	// (0x000a481e) mup3_volume_pane_g1

0xdc4c,	// (0x000a481e) mup3_volume_pane_g2

0xdc4c,	// (0x000a481e) mup3_volume_pane_g3

0x0002,

0x0258,	// (0x00096e2a) mup3_volume_pane_g

0xacbc,	// (0x000a188e) bg_tb_trans_pane_cp03

0xdc54,	// (0x000a4826) popup_mup3_text_window_g1

0xdc5c,	// (0x000a482e) popup_mup3_text_window_t1

0xb5d2,	// (0x000a21a4) list_calc_item_pane_g1_ParamLimits

0xd633,	// (0x000a4205) mup_volume_pane_cp_g1

0x3ad7,	// (0x0009a6a9) main_touch_calib_pane_t3

0x3aeb,	// (0x0009a6bd) main_touch_calib_pane_t4

0x3aff,	// (0x0009a6d1) main_touch_calib_pane_t5

0x97ba,	// (0x000a038c) aid_cell_size_toolbar2

0x97c2,	// (0x000a0394) aid_popup3_width_pane

0x97ce,	// (0x000a03a0) aid_zoom_text_msg_primary

0x1513,	// (0x000980e5) vorec_t7

0xb596,	// (0x000a2168) bg_calc_paper_pane_g1_ParamLimits

0xb5a2,	// (0x000a2174) bg_calc_paper_pane_g2_ParamLimits

0xb5ae,	// (0x000a2180) bg_calc_paper_pane_g3_ParamLimits

0xb5ba,	// (0x000a218c) bg_calc_paper_pane_g4_ParamLimits

0xb5c6,	// (0x000a2198) bg_calc_paper_pane_g5_ParamLimits

0x0e1a,	// (0x000979ec) bg_calc_paper_pane_g6_ParamLimits

0x0e29,	// (0x000979fb) bg_calc_paper_pane_g7_ParamLimits

0x0e38,	// (0x00097a0a) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000a5c7d) bg_calc_paper_pane_g_ParamLimits

0x0e4b,	// (0x00097a1d) calc_bg_paper_pane_g9_ParamLimits

0xb487,	// (0x000a2059) image_qvga_pane_ParamLimits

0xb487,	// (0x000a2059) image_qvga_pane

0xb465,	// (0x000a2037) bg_popup_sub_pane_cp04_ParamLimits

0xc3f7,	// (0x000a2fc9) popup_mup_playback_window_g1_ParamLimits

0xc403,	// (0x000a2fd5) popup_mup_playback_window_t1_ParamLimits

0xc418,	// (0x000a2fea) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x000a5fd6) popup_mup_playback_window_t_ParamLimits

0xb4fc,	// (0x000a20ce) main_mup2_pane_g3_ParamLimits

0xb4fc,	// (0x000a20ce) main_mup2_pane_g3

0x17f3,	// (0x000983c5) popup_toolbar_window_cp04

0xc79c,	// (0x000a336e) popup_call2_audio_second_window_g3_ParamLimits

0xc79c,	// (0x000a336e) popup_call2_audio_second_window_g3

0xcbb4,	// (0x000a3786) popup_call2_audio_first_window_g4_ParamLimits

0xcbb4,	// (0x000a3786) popup_call2_audio_first_window_g4

0xd1db,	// (0x000a3dad) popup_call2_audio_in_window_g4_ParamLimits

0xd1db,	// (0x000a3dad) popup_call2_audio_in_window_g4

0x2cd7,	// (0x000998a9) aid_area_sk_bg_cut_ParamLimits

0x2cd7,	// (0x000998a9) aid_area_sk_bg_cut

0xc42d,	// (0x000a2fff) aid_area_sk_bg_cut_2_ParamLimits

0xc42d,	// (0x000a2fff) aid_area_sk_bg_cut_2

0xacbc,	// (0x000a188e) aid_placing_details_win

0xacbc,	// (0x000a188e) aid_placing_details_win_2

0xb4ee,	// (0x000a20c0) camera2_autofocus_pane_g1_ParamLimits

0x0c07,	// (0x000977d9) popup_fixed_preview_cale_window_ParamLimits

0x0c07,	// (0x000977d9) popup_fixed_preview_cale_window

0xc15c,	// (0x000a2d2e) navi_slider_pane_g3

0xc165,	// (0x000a2d37) navi_slider_pane_g4

0xc16e,	// (0x000a2d40) navi_slider_pane_g5

0xc15c,	// (0x000a2d2e) navi_slider_pane_g6

0x993e,	// (0x000a0510) navi_slider_pane_g7

0xc29c,	// (0x000a2e6e) mup_scale_pane_g3

0xc2a5,	// (0x000a2e77) mup_scale_pane_g4

0xc2ae,	// (0x000a2e80) mup_scale_pane_g5

0x2a18,	// (0x000995ea) mup_scale_pane_g6

0x2a21,	// (0x000995f3) mup_scale_pane_g7

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g3

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g4

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g5

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g6

0x9fc9,	// (0x000a0b9b) cams2_slider_pane_g7

0xb52c,	// (0x000a20fe) camera2_autofocus_pane_cp_g1

0xd4a3,	// (0x000a4075) bg_popup_preview_window_pane_cp02_ParamLimits

0xd4a3,	// (0x000a4075) bg_popup_preview_window_pane_cp02

0xdc6a,	// (0x000a483c) list_fp_cale_pane_ParamLimits

0xdc6a,	// (0x000a483c) list_fp_cale_pane

0xdc76,	// (0x000a4848) popup_fixed_preview_cale_window_t1_ParamLimits

0xdc76,	// (0x000a4848) popup_fixed_preview_cale_window_t1

0x41ed,	// (0x0009adbf) popup_fixed_preview_cale_window_t2_ParamLimits

0x41ed,	// (0x0009adbf) popup_fixed_preview_cale_window_t2

0x4202,	// (0x0009add4) popup_fixed_preview_cale_window_t3_ParamLimits

0x4202,	// (0x0009add4) popup_fixed_preview_cale_window_t3

0x0002,

0xf5b7,	// (0x000a6189) popup_fixed_preview_cale_window_t_ParamLimits

0xf5b7,	// (0x000a6189) popup_fixed_preview_cale_window_t

0x4217,	// (0x0009ade9) list_single_fp_cale_pane_ParamLimits

0x4217,	// (0x0009ade9) list_single_fp_cale_pane

0xdc94,	// (0x000a4866) list_single_fp_cale_pane_g1_ParamLimits

0xdc94,	// (0x000a4866) list_single_fp_cale_pane_g1

0xdca0,	// (0x000a4872) list_single_fp_cale_pane_g2_ParamLimits

0xdca0,	// (0x000a4872) list_single_fp_cale_pane_g2

0x0002,

0x0266,	// (0x00096e38) list_single_fp_cale_pane_g_ParamLimits

0x0266,	// (0x00096e38) list_single_fp_cale_pane_g

0xdcb9,	// (0x000a488b) list_single_fp_cale_pane_t1_ParamLimits

0xdcb9,	// (0x000a488b) list_single_fp_cale_pane_t1

0xdccb,	// (0x000a489d) list_single_fp_cale_pane_t2_ParamLimits

0xdccb,	// (0x000a489d) list_single_fp_cale_pane_t2

0x0001,

0x026d,	// (0x00096e3f) list_single_fp_cale_pane_t_ParamLimits

0x026d,	// (0x00096e3f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9835,	// (0x000a0407) main_dialer_pane

0xacbc,	// (0x000a188e) aid_cell_size_keypad

0xacbc,	// (0x000a188e) dialer_ne_pane

0xacbc,	// (0x000a188e) grid_dialer_command_1_pane

0xacbc,	// (0x000a188e) grid_dialer_command_2_pane

0xacbc,	// (0x000a188e) grid_dialer_keypad_pane

0x422d,	// (0x0009adff) bg_popup_call_pane_cp06_ParamLimits

0x422d,	// (0x0009adff) bg_popup_call_pane_cp06

0x422d,	// (0x0009adff) dialer_ne_clear_pane_ParamLimits

0x422d,	// (0x0009adff) dialer_ne_clear_pane

0xb52c,	// (0x000a20fe) dialer_ne_pane_g1

0xb54a,	// (0x000a211c) dialer_ne_pane_t1_ParamLimits

0xb54a,	// (0x000a211c) dialer_ne_pane_t1

0x423b,	// (0x0009ae0d) dialer_ne_pane_t2_ParamLimits

0x423b,	// (0x0009ae0d) dialer_ne_pane_t2

0x4263,	// (0x0009ae35) dialer_ne_pane_t3_ParamLimits

0x4263,	// (0x0009ae35) dialer_ne_pane_t3

0x0002,

0xf5be,	// (0x000a6190) dialer_ne_pane_t_ParamLimits

0xf5be,	// (0x000a6190) dialer_ne_pane_t

0x4263,	// (0x0009ae35) dialer_ne_pane_t3_copy1_ParamLimits

0x4263,	// (0x0009ae35) dialer_ne_pane_t3_copy1

0xdcfe,	// (0x000a48d0) cell_dialer_keypad_pane_ParamLimits

0xdcfe,	// (0x000a48d0) cell_dialer_keypad_pane

0xb487,	// (0x000a2059) cell_dialer_command_1_pane_ParamLimits

0xb487,	// (0x000a2059) cell_dialer_command_1_pane

0xdd15,	// (0x000a48e7) cell_dialer_command_2_pane_ParamLimits

0xdd15,	// (0x000a48e7) cell_dialer_command_2_pane

0xb487,	// (0x000a2059) bg_button_pane_cp02_ParamLimits

0xb487,	// (0x000a2059) bg_button_pane_cp02

0xb4ee,	// (0x000a20c0) cell_dialer_keypad_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_dialer_keypad_pane_g1

0xb487,	// (0x000a2059) bg_button_pane_cp03_ParamLimits

0xb487,	// (0x000a2059) bg_button_pane_cp03

0xb4ee,	// (0x000a20c0) cell_dialer_command_1_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_dialer_command_1_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp04

0xb52c,	// (0x000a20fe) cell_dialer_command_2_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp06

0xb52c,	// (0x000a20fe) dialer_ne_clear_pane_g1

0xc02f,	// (0x000a2c01) navi_pane_g2

0xc05d,	// (0x000a2c2f) navi_pane_g3

0x0002,

0xf30c,	// (0x000a5ede) navi_pane_g

0xc0ec,	// (0x000a2cbe) navi_pane_mv_g2

0xc113,	// (0x000a2ce5) navi_pane_mv_g5

0x27fb,	// (0x000993cd) navi_pane_mv_t1

0xb58a,	// (0x000a215c) main_clock2_pane

0xb487,	// (0x000a2059) main_clock2_list_pane_ParamLimits

0xb487,	// (0x000a2059) main_clock2_list_pane

0x42f9,	// (0x0009aecb) main_clock2_pane_t1_ParamLimits

0x42f9,	// (0x0009aecb) main_clock2_pane_t1

0x4334,	// (0x0009af06) main_clock2_pane_t2_ParamLimits

0x4334,	// (0x0009af06) main_clock2_pane_t2

0x0004,

0xf5c5,	// (0x000a6197) main_clock2_pane_t_ParamLimits

0xf5c5,	// (0x000a6197) main_clock2_pane_t

0x43d4,	// (0x0009afa6) popup_clock_analogue_window_cp03_ParamLimits

0x43d4,	// (0x0009afa6) popup_clock_analogue_window_cp03

0x43f9,	// (0x0009afcb) popup_clock_digital_window_cp02_ParamLimits

0x43f9,	// (0x0009afcb) popup_clock_digital_window_cp02

0x4472,	// (0x0009b044) main_clock2_list_single_pane_ParamLimits

0x4472,	// (0x0009b044) main_clock2_list_single_pane

0xb792,	// (0x000a2364) list_highlight_pane_cp05

0xdd58,	// (0x000a492a) main_clock2_list_single_pane_t1

0x17f3,	// (0x000983c5) popup_toolbar_window_cp04_ParamLimits

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g2

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g3_ParamLimits

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g3

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g4_ParamLimits

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g4

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g5_ParamLimits

0xb4fc,	// (0x000a20ce) camera2_autofocus_pane_g5

0x0004,

0x01c2,	// (0x00096d94) camera2_autofocus_pane_g_ParamLimits

0x01c2,	// (0x00096d94) camera2_autofocus_pane_g

0x3b34,	// (0x0009a706) camera2_autofocus_pane_cp_g2

0x3b3c,	// (0x0009a70e) camera2_autofocus_pane_cp_g3

0x3b44,	// (0x0009a716) camera2_autofocus_pane_cp_g4

0x3b4c,	// (0x0009a71e) camera2_autofocus_pane_cp_g5

0x0004,

0xf587,	// (0x000a6159) camera2_autofocus_pane_cp_g

0xacbc,	// (0x000a188e) popup_dialer_spcha_window

0xacbc,	// (0x000a188e) bg_popup_sub_pane_cp07

0xacbc,	// (0x000a188e) list_spcha_pane

0xdd66,	// (0x000a4938) list_single_spcha_pane_ParamLimits

0xdd66,	// (0x000a4938) list_single_spcha_pane

0xacbc,	// (0x000a188e) list_highlight_pane_cp06

0xbc90,	// (0x000a2862) list_single_spcha_pane_t1

0xcf85,	// (0x000a3b57) popup_call2_audio_out_window_g4_ParamLimits

0xcf85,	// (0x000a3b57) popup_call2_audio_out_window_g4

0x9835,	// (0x000a0407) main_imed2_pane

0x999f,	// (0x000a0571) popup_imed_adjust2_window

0x34c5,	// (0x0009a097) popup_imed_trans_window_ParamLimits

0x34c5,	// (0x0009a097) popup_imed_trans_window

0xd716,	// (0x000a42e8) popup_blid_sat_info2_window_t1

0xd724,	// (0x000a42f6) popup_blid_sat_info2_window_t2

0x000a,

0xf520,	// (0x000a60f2) popup_blid_sat_info2_window_t

0x4523,	// (0x0009b0f5) aid_size_cell_colour_35

0x4543,	// (0x0009b115) aid_size_cell_colour_112

0x4563,	// (0x0009b135) aid_size_cell_effect

0xc285,	// (0x000a2e57) bg_tb_trans_pane_cp02

0x4583,	// (0x0009b155) heading_imed_pane

0x458f,	// (0x0009b161) listscroll_imed_pane

0xdd78,	// (0x000a494a) heading_imed_pane_g1

0xdd80,	// (0x000a4952) heading_imed_pane_t1

0xdd8e,	// (0x000a4960) grid_imed_colour_35_pane_ParamLimits

0xdd8e,	// (0x000a4960) grid_imed_colour_35_pane

0x459b,	// (0x0009b16d) grid_imed_effect_pane

0xdda6,	// (0x000a4978) list_imed_aspect_pane

0x45b1,	// (0x0009b183) scroll_pane_cp027_ParamLimits

0x45b1,	// (0x0009b183) scroll_pane_cp027

0x45c2,	// (0x0009b194) cell_imed_effect_pane_ParamLimits

0x45c2,	// (0x0009b194) cell_imed_effect_pane

0xddae,	// (0x000a4980) cell_imed_colour_pane_ParamLimits

0xddae,	// (0x000a4980) cell_imed_colour_pane

0xddf0,	// (0x000a49c2) cell_imed_colour_pane_g1_ParamLimits

0xddf0,	// (0x000a49c2) cell_imed_colour_pane_g1

0xde01,	// (0x000a49d3) hgihlgiht_grid_pane_cp016_ParamLimits

0xde01,	// (0x000a49d3) hgihlgiht_grid_pane_cp016

0x45e9,	// (0x0009b1bb) cell_imed_effect_pane_g1

0x45f1,	// (0x0009b1c3) grid_highlight_pane_cp017

0xde12,	// (0x000a49e4) list_imed_single_pane_ParamLimits

0xde12,	// (0x000a49e4) list_imed_single_pane

0xacbc,	// (0x000a188e) list_highlight_pane_cp07

0xde27,	// (0x000a49f9) list_imed_aspect_pane_comp1_t1

0xc285,	// (0x000a2e57) bg_tb_trans_pane_cp05

0xde49,	// (0x000a4a1b) popup_imed_adjust2_window_g1

0xde70,	// (0x000a4a42) popup_imed_adjust2_window_t1

0xde88,	// (0x000a4a5a) slider_imed_adjust_pane

0xde9c,	// (0x000a4a6e) slider_imed_adjust_pane_g1

0xdeac,	// (0x000a4a7e) slider_imed_adjust_pane_g2

0xdebc,	// (0x000a4a8e) slider_imed_adjust_pane_g3

0xdecd,	// (0x000a4a9f) slider_imed_adjust_pane_g4

0x0003,

0x029b,	// (0x00096e6d) slider_imed_adjust_pane_g

0x45fa,	// (0x0009b1cc) aid_size_cell_clipart2

0x4606,	// (0x0009b1d8) grid_imed_clipart_pane

0xc2bf,	// (0x000a2e91) scroll_pane_cp031

0x4610,	// (0x0009b1e2) cell_imed_clipart_pane_ParamLimits

0x4610,	// (0x0009b1e2) cell_imed_clipart_pane

0x4632,	// (0x0009b204) cell_imed_clipart_pane_g1

0xacbc,	// (0x000a188e) grid_highlight_pane_cp014

0x42d5,	// (0x0009aea7) main_clock2_pane_g1_ParamLimits

0x42d5,	// (0x0009aea7) main_clock2_pane_g1

0x4419,	// (0x0009afeb) aid_call2_pane_cp10

0x442b,	// (0x0009affd) aid_call_pane_cp10

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g1

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g2

0x443d,	// (0x0009b00f) popup_clock_analogue_window_cp10_g3

0x443d,	// (0x0009b00f) popup_clock_analogue_window_cp10_g4

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g5

0x0004,

0xf5d0,	// (0x000a61a2) popup_clock_analogue_window_cp10_g

0x4453,	// (0x0009b025) popup_clock_analogue_window_cp10_t1

0x4484,	// (0x0009b056) clock_digital_number_pane_cp10_ParamLimits

0x4484,	// (0x0009b056) clock_digital_number_pane_cp10

0x449c,	// (0x0009b06e) clock_digital_number_pane_cp11_ParamLimits

0x449c,	// (0x0009b06e) clock_digital_number_pane_cp11

0x44b4,	// (0x0009b086) clock_digital_number_pane_cp12_ParamLimits

0x44b4,	// (0x0009b086) clock_digital_number_pane_cp12

0x44ce,	// (0x0009b0a0) clock_digital_number_pane_cp13_ParamLimits

0x44ce,	// (0x0009b0a0) clock_digital_number_pane_cp13

0x44e8,	// (0x0009b0ba) clock_digital_separator_pane_cp10_ParamLimits

0x44e8,	// (0x0009b0ba) clock_digital_separator_pane_cp10

0x4502,	// (0x0009b0d4) popup_clock_digital_window_cp02_t1_ParamLimits

0x4502,	// (0x0009b0d4) popup_clock_digital_window_cp02_t1

0xb45d,	// (0x000a202f) clock_digital_number_pane_cp10_g1

0xb45d,	// (0x000a202f) clock_digital_number_pane_cp10_g2

0x0001,

0xf5db,	// (0x000a61ad) clock_digital_number_pane_cp10_g

0xb45d,	// (0x000a202f) clock_digital_separator_pane_cp10_g1

0xb45d,	// (0x000a202f) clock_digital_separator_pane_g2_cp10

0xc11b,	// (0x000a2ced) navi_pane_vded_g4

0xc124,	// (0x000a2cf6) navi_pane_vded_g5

0xc12d,	// (0x000a2cff) navi_pane_vded_t1

0x9835,	// (0x000a0407) main_vded_pane

0x463b,	// (0x0009b20d) main_vded_pane_g1

0x4645,	// (0x0009b217) main_vded_pane_g2

0x464f,	// (0x0009b221) main_vded_pane_g3

0x0002,

0xf5e0,	// (0x000a61b2) main_vded_pane_g

0x4659,	// (0x0009b22b) main_vded_pane_t1

0x4667,	// (0x0009b239) main_vded_pane_t2

0x0001,

0xf5e7,	// (0x000a61b9) main_vded_pane_t

0x4675,	// (0x0009b247) vded_slider_pane

0x467d,	// (0x0009b24f) vded_video_pane

0xdede,	// (0x000a4ab0) vded_video_pane_g1

0x4685,	// (0x0009b257) vded_video_pane_g2

0xb52c,	// (0x000a20fe) vded_video_pane_g3

0x0002,

0xf5ec,	// (0x000a61be) vded_video_pane_g

0xdee8,	// (0x000a4aba) vded_slider_pane_g1

0xd633,	// (0x000a4205) vded_slider_pane_g2

0xdef1,	// (0x000a4ac3) vded_slider_pane_g3

0xdefa,	// (0x000a4acc) vded_slider_pane_g4

0xdf03,	// (0x000a4ad5) vded_slider_pane_g5

0x0004,

0xf5f3,	// (0x000a61c5) vded_slider_pane_g

0xb02a,	// (0x000a1bfc) mup3_rocker_pane_ParamLimits

0xb02a,	// (0x000a1bfc) mup3_rocker_pane

0xdc4c,	// (0x000a481e) mup3_control_keys_pane_g1

0xdf0c,	// (0x000a4ade) mup3_control_keys_pane_g2

0xdc4c,	// (0x000a481e) mup3_control_keys_pane_g3

0xdf14,	// (0x000a4ae6) mup3_control_keys_pane_g4

0x0003,

0xf5fe,	// (0x000a61d0) mup3_control_keys_pane_g

0x0c3e,	// (0x00097810) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c3e,	// (0x00097810) popup_toolbar2_fixed_window_cp01

0xb02a,	// (0x000a1bfc) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb02a,	// (0x000a1bfc) popup_toolbar2_fixed_window_cp02

0xc90e,	// (0x000a34e0) popup_call2_audio_second_window_t4_ParamLimits

0xc90e,	// (0x000a34e0) popup_call2_audio_second_window_t4

0xce4a,	// (0x000a3a1c) popup_call2_audio_first_window_t6_ParamLimits

0xce4a,	// (0x000a3a1c) popup_call2_audio_first_window_t6

0xd088,	// (0x000a3c5a) popup_call2_audio_out_window_t6_ParamLimits

0xd088,	// (0x000a3c5a) popup_call2_audio_out_window_t6

0x9835,	// (0x000a0407) main_vitu_pane

0xb487,	// (0x000a2059) aid_size_cell_itu_ParamLimits

0xb487,	// (0x000a2059) aid_size_cell_itu

0xb487,	// (0x000a2059) bg_popup_window_pane_cp08_ParamLimits

0xb487,	// (0x000a2059) bg_popup_window_pane_cp08

0xb487,	// (0x000a2059) field_vitu_entry_pane_ParamLimits

0xb487,	// (0x000a2059) field_vitu_entry_pane

0xb487,	// (0x000a2059) grid_vitu_function_pane_ParamLimits

0xb487,	// (0x000a2059) grid_vitu_function_pane

0xb487,	// (0x000a2059) grid_vitu_itu_pane_ParamLimits

0xb487,	// (0x000a2059) grid_vitu_itu_pane

0xb487,	// (0x000a2059) cell_vitu_itu_pane_ParamLimits

0xb487,	// (0x000a2059) cell_vitu_itu_pane

0xb487,	// (0x000a2059) cell_vitu_function_pane_ParamLimits

0xb487,	// (0x000a2059) cell_vitu_function_pane

0xb487,	// (0x000a2059) bg_popup_sub_pane_cp08_ParamLimits

0xb487,	// (0x000a2059) bg_popup_sub_pane_cp08

0xb536,	// (0x000a2108) field_vitu_entry_pane_t1_ParamLimits

0xb536,	// (0x000a2108) field_vitu_entry_pane_t1

0xdf1c,	// (0x000a4aee) field_vitu_entry_pane_t2_ParamLimits

0xdf1c,	// (0x000a4aee) field_vitu_entry_pane_t2

0x0001,

0xf607,	// (0x000a61d9) field_vitu_entry_pane_t_ParamLimits

0xf607,	// (0x000a61d9) field_vitu_entry_pane_t

0xd6bd,	// (0x000a428f) bg_button_pane_cp05_ParamLimits

0xd6bd,	// (0x000a428f) bg_button_pane_cp05

0xdf39,	// (0x000a4b0b) cell_vitu_itu_pane_g1

0xc271,	// (0x000a2e43) cell_vitu_itu_pane_t1_ParamLimits

0xc271,	// (0x000a2e43) cell_vitu_itu_pane_t1

0xc271,	// (0x000a2e43) cell_vitu_itu_pane_t2_ParamLimits

0xc271,	// (0x000a2e43) cell_vitu_itu_pane_t2

0x0002,

0xf60c,	// (0x000a61de) cell_vitu_itu_pane_t_ParamLimits

0xf60c,	// (0x000a61de) cell_vitu_itu_pane_t

0xacbc,	// (0x000a188e) bg_button_pane_cp07

0xb52c,	// (0x000a20fe) cell_vitu_function_pane_g1

0x983f,	// (0x000a0411) main_calc_pane_g1

0x0a66,	// (0x00097638) aid_visual_content_pane

0x9835,	// (0x000a0407) main_vradio_pane

0xb4ee,	// (0x000a20c0) main_vradio_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) main_vradio_pane_g1

0xb4fc,	// (0x000a20ce) main_vradio_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) main_vradio_pane_g2

0x0001,

0x0763,	// (0x00097335) main_vradio_pane_g_ParamLimits

0x0763,	// (0x00097335) main_vradio_pane_g

0xb536,	// (0x000a2108) main_vradio_pane_t1_ParamLimits

0xb536,	// (0x000a2108) main_vradio_pane_t1

0xb536,	// (0x000a2108) main_vradio_pane_t2_ParamLimits

0xb536,	// (0x000a2108) main_vradio_pane_t2

0xb54a,	// (0x000a211c) main_vradio_pane_t3_ParamLimits

0xb54a,	// (0x000a211c) main_vradio_pane_t3

0x0002,

0xf613,	// (0x000a61e5) main_vradio_pane_t_ParamLimits

0xf613,	// (0x000a61e5) main_vradio_pane_t

0xb487,	// (0x000a2059) vradio_rocker_control_pane_ParamLimits

0xb487,	// (0x000a2059) vradio_rocker_control_pane

0xb487,	// (0x000a2059) vradio_station_info_pane_ParamLimits

0xb487,	// (0x000a2059) vradio_station_info_pane

0xb487,	// (0x000a2059) vradio_frequency_info_pane_ParamLimits

0xb487,	// (0x000a2059) vradio_frequency_info_pane

0xb52c,	// (0x000a20fe) vradio_station_info_pane_g1

0xc271,	// (0x000a2e43) vradio_station_info_pane_t1_ParamLimits

0xc271,	// (0x000a2e43) vradio_station_info_pane_t1

0xb54a,	// (0x000a211c) vradio_station_info_pane_t2_ParamLimits

0xb54a,	// (0x000a211c) vradio_station_info_pane_t2

0x0001,

0xf61a,	// (0x000a61ec) vradio_station_info_pane_t_ParamLimits

0xf61a,	// (0x000a61ec) vradio_station_info_pane_t

0xacbc,	// (0x000a188e) vradio_tuning_pane

0x468e,	// (0x0009b260) vradio_rocker_control_pane_g1

0xdf55,	// (0x000a4b27) vradio_rocker_control_pane_g2

0x4698,	// (0x0009b26a) vradio_rocker_control_pane_g3

0x46a2,	// (0x0009b274) vradio_rocker_control_pane_g4

0x46ac,	// (0x0009b27e) vradio_rocker_control_pane_g5

0x0004,

0xf61f,	// (0x000a61f1) vradio_rocker_control_pane_g

0xb52c,	// (0x000a20fe) vradio_frequency_info_pane_g1

0xb536,	// (0x000a2108) vradio_frequency_info_pane_t1_ParamLimits

0xb536,	// (0x000a2108) vradio_frequency_info_pane_t1

0x46b6,	// (0x0009b288) vradio_tuning_pane_g1

0x46c1,	// (0x0009b293) vradio_tuning_pane_t1

0x97e6,	// (0x000a03b8) area_side_right_pane_ParamLimits

0x97e6,	// (0x000a03b8) area_side_right_pane

0xd46a,	// (0x000a403c) status_small_pane_g1

0xd472,	// (0x000a4044) status_small_pane_g2

0xd47b,	// (0x000a404d) status_small_pane_g3

0xd484,	// (0x000a4056) status_small_pane_g4

0x0003,

0x00b9,	// (0x00096c8b) status_small_pane_g

0xd48d,	// (0x000a405f) status_small_pane_t1

0x9835,	// (0x000a0407) main_video3_pane

0xacbc,	// (0x000a188e) cams_zoom_vslider_pane

0xdf5d,	// (0x000a4b2f) image3_wide_pane_ParamLimits

0xdf5d,	// (0x000a4b2f) image3_wide_pane

0xacbc,	// (0x000a188e) image3_wide_small_pane

0xdf77,	// (0x000a4b49) main_video3_pane_g1_ParamLimits

0xdf77,	// (0x000a4b49) main_video3_pane_g1

0xdf77,	// (0x000a4b49) main_video3_pane_g2_ParamLimits

0xdf77,	// (0x000a4b49) main_video3_pane_g2

0x0001,

0x02f3,	// (0x00096ec5) main_video3_pane_g_ParamLimits

0x02f3,	// (0x00096ec5) main_video3_pane_g

0xdf95,	// (0x000a4b67) main_video3_pane_t1_ParamLimits

0xdf95,	// (0x000a4b67) main_video3_pane_t1

0xdf95,	// (0x000a4b67) main_video3_pane_t2_ParamLimits

0xdf95,	// (0x000a4b67) main_video3_pane_t2

0xdf95,	// (0x000a4b67) main_video3_pane_t3_ParamLimits

0xdf95,	// (0x000a4b67) main_video3_pane_t3

0x0002,

0x02f8,	// (0x00096eca) main_video3_pane_t_ParamLimits

0x02f8,	// (0x00096eca) main_video3_pane_t

0xb52c,	// (0x000a20fe) cams_zoom_vslider_pane_g1

0xb52c,	// (0x000a20fe) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) cams_zoom_vslider_pane_g

0xacbc,	// (0x000a188e) small_slider_vertical_pane

0xb52c,	// (0x000a20fe) small_slider_vertical_pane_g1

0xb52c,	// (0x000a20fe) small_slider_vertical_pane_g2

0xdfbc,	// (0x000a4b8e) small_slider_vertical_pane_g3

0x0002,

0x02ff,	// (0x00096ed1) small_slider_vertical_pane_g

0x9835,	// (0x000a0407) main_hwr_training_pane

0xdfc5,	// (0x000a4b97) hwr_training_instruct_pane_ParamLimits

0xdfc5,	// (0x000a4b97) hwr_training_instruct_pane

0x46d0,	// (0x0009b2a2) hwr_training_navi_pane_ParamLimits

0x46d0,	// (0x0009b2a2) hwr_training_navi_pane

0x46ef,	// (0x0009b2c1) hwr_training_write_pane_ParamLimits

0x46ef,	// (0x0009b2c1) hwr_training_write_pane

0xacbc,	// (0x000a188e) bg_frame_shadow_pane

0xdffc,	// (0x000a4bce) hwr_training_write_pane_g1

0xe004,	// (0x000a4bd6) hwr_training_write_pane_g2

0xe00c,	// (0x000a4bde) hwr_training_write_pane_g3

0xe014,	// (0x000a4be6) hwr_training_write_pane_g4

0xe01c,	// (0x000a4bee) hwr_training_write_pane_g5

0xe024,	// (0x000a4bf6) hwr_training_write_pane_g6

0xe02c,	// (0x000a4bfe) hwr_training_write_pane_g7

0x0006,

0x0306,	// (0x00096ed8) hwr_training_write_pane_g

0x9a87,	// (0x000a0659) hwr_training_navi_pane_g1_ParamLimits

0x9a87,	// (0x000a0659) hwr_training_navi_pane_g1

0x9a99,	// (0x000a066b) hwr_training_navi_pane_g2_ParamLimits

0x9a99,	// (0x000a066b) hwr_training_navi_pane_g2

0x9aab,	// (0x000a067d) hwr_training_navi_pane_g3_ParamLimits

0x9aab,	// (0x000a067d) hwr_training_navi_pane_g3

0x9abb,	// (0x000a068d) hwr_training_navi_pane_g4_ParamLimits

0x9abb,	// (0x000a068d) hwr_training_navi_pane_g4

0x0004,

0xf62a,	// (0x000a61fc) hwr_training_navi_pane_g_ParamLimits

0xf62a,	// (0x000a61fc) hwr_training_navi_pane_g

0x9ac8,	// (0x000a069a) hwr_training_navi_pane_t1

0x4739,	// (0x0009b30b) list_single_hwr_training_instruct_pane_ParamLimits

0x4739,	// (0x0009b30b) list_single_hwr_training_instruct_pane

0xe034,	// (0x000a4c06) list_single_hwr_training_instruct_pane_t1

0xd839,	// (0x000a440b) bg_frame_shadow_pane_g1

0xe043,	// (0x000a4c15) bg_frame_shadow_pane_g2

0xe04b,	// (0x000a4c1d) bg_frame_shadow_pane_g3

0xe053,	// (0x000a4c25) bg_frame_shadow_pane_g4

0xe05b,	// (0x000a4c2d) bg_frame_shadow_pane_g5

0xe063,	// (0x000a4c35) bg_frame_shadow_pane_g6

0xe06b,	// (0x000a4c3d) bg_frame_shadow_pane_g7

0xb642,	// (0x000a2214) bg_frame_shadow_pane_g8

0x0007,

0xf635,	// (0x000a6207) bg_frame_shadow_pane_g

0x9835,	// (0x000a0407) main_video_tele_dialer_pane

0x474f,	// (0x0009b321) aid_size_cell_video_keypad_ParamLimits

0x474f,	// (0x0009b321) aid_size_cell_video_keypad

0x4769,	// (0x0009b33b) grid_video_dialer_keypad_pane_ParamLimits

0x4769,	// (0x0009b33b) grid_video_dialer_keypad_pane

0x47b7,	// (0x0009b389) video_down_pane_cp_ParamLimits

0x47b7,	// (0x0009b389) video_down_pane_cp

0x47e9,	// (0x0009b3bb) cell_video_dialer_keypad_pane_ParamLimits

0x47e9,	// (0x0009b3bb) cell_video_dialer_keypad_pane

0xe073,	// (0x000a4c45) bg_button_pane_cp08_ParamLimits

0xe073,	// (0x000a4c45) bg_button_pane_cp08

0x480b,	// (0x0009b3dd) cell_video_dialer_keypad_pane_g1_ParamLimits

0x480b,	// (0x0009b3dd) cell_video_dialer_keypad_pane_g1

0xb02a,	// (0x000a1bfc) mup3_rocker2_pane_ParamLimits

0xb02a,	// (0x000a1bfc) mup3_rocker2_pane

0xb52c,	// (0x000a20fe) mup3_rocker2_pane_g1

0x33b4,	// (0x00099f86) main_dialer2_pane

0x9835,	// (0x000a0407) main_mp4_pane

0x9af4,	// (0x000a06c6) main_mp4_pane_g1_ParamLimits

0x9af4,	// (0x000a06c6) main_mp4_pane_g1

0x9af4,	// (0x000a06c6) main_mp4_pane_g2_ParamLimits

0x9af4,	// (0x000a06c6) main_mp4_pane_g2

0x4845,	// (0x0009b417) main_mp4_pane_g3_ParamLimits

0x4845,	// (0x0009b417) main_mp4_pane_g3

0x9b12,	// (0x000a06e4) main_mp4_pane_g4_ParamLimits

0x9b12,	// (0x000a06e4) main_mp4_pane_g4

0x9b3a,	// (0x000a070c) main_mp4_pane_g5_ParamLimits

0x9b3a,	// (0x000a070c) main_mp4_pane_g5

0x0007,

0xf655,	// (0x000a6227) main_mp4_pane_g_ParamLimits

0xf655,	// (0x000a6227) main_mp4_pane_g

0x9ba2,	// (0x000a0774) main_mp4_pane_t1_ParamLimits

0x9ba2,	// (0x000a0774) main_mp4_pane_t1

0x9c04,	// (0x000a07d6) main_mp4_pane_t2_ParamLimits

0x9c04,	// (0x000a07d6) main_mp4_pane_t2

0x9c68,	// (0x000a083a) main_mp4_pane_t3_ParamLimits

0x9c68,	// (0x000a083a) main_mp4_pane_t3

0x9cc6,	// (0x000a0898) main_mp4_pane_t4_ParamLimits

0x9cc6,	// (0x000a0898) main_mp4_pane_t4

0x0003,

0xf666,	// (0x000a6238) main_mp4_pane_t_ParamLimits

0xf666,	// (0x000a6238) main_mp4_pane_t

0x9d24,	// (0x000a08f6) mp4_progress_pane_ParamLimits

0x9d24,	// (0x000a08f6) mp4_progress_pane

0x9d58,	// (0x000a092a) mp4_rocker_pane_ParamLimits

0x9d58,	// (0x000a092a) mp4_rocker_pane

0x487d,	// (0x0009b44f) mp4_progress_pane_t1

0x489c,	// (0x0009b46e) mp4_progress_pane_t2

0x0001,

0xf66f,	// (0x000a6241) mp4_progress_pane_t

0x48bb,	// (0x0009b48d) mup_progress_pane_cp04

0x9fc9,	// (0x000a0b9b) mp4_rocker_pane_g1

0x9827,	// (0x000a03f9) aid_cell_size_keypad2_ParamLimits

0x9827,	// (0x000a03f9) aid_cell_size_keypad2

0x9827,	// (0x000a03f9) dialer2_ne_pane_ParamLimits

0x9827,	// (0x000a03f9) dialer2_ne_pane

0x9827,	// (0x000a03f9) grid_dialer2_keypad_pane_ParamLimits

0x9827,	// (0x000a03f9) grid_dialer2_keypad_pane

0xd6bd,	// (0x000a428f) bg_popup_call_pane_cp07_ParamLimits

0xd6bd,	// (0x000a428f) bg_popup_call_pane_cp07

0x48ce,	// (0x0009b4a0) dialer2_ne_pane_t1_ParamLimits

0x48ce,	// (0x0009b4a0) dialer2_ne_pane_t1

0x491f,	// (0x0009b4f1) cell_dialer2_keypad_pane_ParamLimits

0x491f,	// (0x0009b4f1) cell_dialer2_keypad_pane

0xd6bd,	// (0x000a428f) bg_button_pane_pane_cp04_ParamLimits

0xd6bd,	// (0x000a428f) bg_button_pane_pane_cp04

0xb4ee,	// (0x000a20c0) cell_dialer2_keypad_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) cell_dialer2_keypad_pane_g1

0x16c7,	// (0x00098299) aid_placing_vt_set_content_ParamLimits

0x16c7,	// (0x00098299) aid_placing_vt_set_content

0x16ef,	// (0x000982c1) aid_placing_vt_set_title_ParamLimits

0x16ef,	// (0x000982c1) aid_placing_vt_set_title

0x9835,	// (0x000a0407) main_image3_pane

0x49b0,	// (0x0009b582) area_side_right_pane_cp01_ParamLimits

0x49b0,	// (0x0009b582) area_side_right_pane_cp01

0x49c7,	// (0x0009b599) main_image3_pane_g1_ParamLimits

0x49c7,	// (0x0009b599) main_image3_pane_g1

0x49d5,	// (0x0009b5a7) main_image3_pane_g2_ParamLimits

0x49d5,	// (0x0009b5a7) main_image3_pane_g2

0x49fd,	// (0x0009b5cf) main_image3_pane_g3_ParamLimits

0x49fd,	// (0x0009b5cf) main_image3_pane_g3

0x4a27,	// (0x0009b5f9) main_image3_pane_g4_ParamLimits

0x4a27,	// (0x0009b5f9) main_image3_pane_g4

0x0003,

0xf67e,	// (0x000a6250) main_image3_pane_g_ParamLimits

0xf67e,	// (0x000a6250) main_image3_pane_g

0x4a51,	// (0x0009b623) main_image3_pane_t1_ParamLimits

0x4a51,	// (0x0009b623) main_image3_pane_t1

0x4aa9,	// (0x0009b67b) main_image3_pane_t2_ParamLimits

0x4aa9,	// (0x0009b67b) main_image3_pane_t2

0x4afb,	// (0x0009b6cd) main_image3_pane_t3_ParamLimits

0x4afb,	// (0x0009b6cd) main_image3_pane_t3

0x0003,

0xf687,	// (0x000a6259) main_image3_pane_t_ParamLimits

0xf687,	// (0x000a6259) main_image3_pane_t

0xb487,	// (0x000a2059) grid_sctrl_middle_pane_cp01_ParamLimits

0xb487,	// (0x000a2059) grid_sctrl_middle_pane_cp01

0x4b83,	// (0x0009b755) cell_sctrl_middle_pane_cp01_ParamLimits

0x4b83,	// (0x0009b755) cell_sctrl_middle_pane_cp01

0x4ba0,	// (0x0009b772) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4ba0,	// (0x0009b772) cell_sctrl_middle_pane_cp01_g1

0x9835,	// (0x000a0407) main_call4_pane

0x4bb6,	// (0x0009b788) aid_size_button_call4_ParamLimits

0x4bb6,	// (0x0009b788) aid_size_button_call4

0x4be9,	// (0x0009b7bb) call4_windows_pane_ParamLimits

0x4be9,	// (0x0009b7bb) call4_windows_pane

0x4c08,	// (0x0009b7da) grid_call4_button_pane_ParamLimits

0x4c08,	// (0x0009b7da) grid_call4_button_pane

0x4c3b,	// (0x0009b80d) call4_windows_conf_pane

0x4c50,	// (0x0009b822) popup_call4_audio_first_window_ParamLimits

0x4c50,	// (0x0009b822) popup_call4_audio_first_window

0x4ca0,	// (0x0009b872) popup_call4_audio_second_window_ParamLimits

0x4ca0,	// (0x0009b872) popup_call4_audio_second_window

0x4cb7,	// (0x0009b889) popup_call4_audio_wait_window_ParamLimits

0x4cb7,	// (0x0009b889) popup_call4_audio_wait_window

0x4cc5,	// (0x0009b897) cell_call4_button_pane_ParamLimits

0x4cc5,	// (0x0009b897) cell_call4_button_pane

0x4cea,	// (0x0009b8bc) bg_button_pane_cp09_ParamLimits

0x4cea,	// (0x0009b8bc) bg_button_pane_cp09

0x4cf6,	// (0x0009b8c8) cell_call4_button_pane_g1_ParamLimits

0x4cf6,	// (0x0009b8c8) cell_call4_button_pane_g1

0x4d1c,	// (0x0009b8ee) cell_call4_button_pane_t1_ParamLimits

0x4d1c,	// (0x0009b8ee) cell_call4_button_pane_t1

0x4d4e,	// (0x0009b920) popup_call4_audio_conf_window_ParamLimits

0x4d4e,	// (0x0009b920) popup_call4_audio_conf_window

0x41af,	// (0x0009ad81) mup3_progress_pane_t1_ParamLimits

0x41ce,	// (0x0009ada0) mup3_progress_pane_t2_ParamLimits

0xdc17,	// (0x000a47e9) mup3_progress_pane_t3_ParamLimits

0xf5b0,	// (0x000a6182) mup3_progress_pane_t_ParamLimits

0xdc34,	// (0x000a4806) mup_progress_pane_cp03_ParamLimits

0xdc4c,	// (0x000a481e) mup3_control_keys_pane_g4_copy1

0x9d58,	// (0x000a092a) mp4_rocker2_pane_ParamLimits

0x9d58,	// (0x000a092a) mp4_rocker2_pane

0xdf0c,	// (0x000a4ade) mp4_rocker2_pane_g1

0xdf0c,	// (0x000a4ade) mp4_rocker2_pane_g2

0xdf0c,	// (0x000a4ade) mp4_rocker2_pane_g3

0xdf0c,	// (0x000a4ade) mp4_rocker2_pane_g4

0xdf0c,	// (0x000a4ade) mp4_rocker2_pane_g5

0x0004,

0xf690,	// (0x000a6262) mp4_rocker2_pane_g

0x9835,	// (0x000a0407) main_camera4_pane

0x9835,	// (0x000a0407) main_video4_pane

0x4785,	// (0x0009b357) main_video_tele_dialer_pane_t1_ParamLimits

0x4785,	// (0x0009b357) main_video_tele_dialer_pane_t1

0x479e,	// (0x0009b370) main_video_tele_dialer_pane_t2_ParamLimits

0x479e,	// (0x0009b370) main_video_tele_dialer_pane_t2

0x0001,

0xf646,	// (0x000a6218) main_video_tele_dialer_pane_t_ParamLimits

0xf646,	// (0x000a6218) main_video_tele_dialer_pane_t

0x4d7a,	// (0x0009b94c) cam4_autofocus_pane_ParamLimits

0x4d7a,	// (0x0009b94c) cam4_autofocus_pane

0x4d90,	// (0x0009b962) cam4_image_uncrop_pane_ParamLimits

0x4d90,	// (0x0009b962) cam4_image_uncrop_pane

0x4daa,	// (0x0009b97c) cam4_indicators_pane_ParamLimits

0x4daa,	// (0x0009b97c) cam4_indicators_pane

0x4dd5,	// (0x0009b9a7) main_camera4_pane_g1_ParamLimits

0x4dd5,	// (0x0009b9a7) main_camera4_pane_g1

0x4de7,	// (0x0009b9b9) main_camera4_pane_g2_ParamLimits

0x4de7,	// (0x0009b9b9) main_camera4_pane_g2

0x4dfa,	// (0x0009b9cc) main_camera4_pane_g3_ParamLimits

0x4dfa,	// (0x0009b9cc) main_camera4_pane_g3

0x4e0d,	// (0x0009b9df) main_camera4_pane_g4_ParamLimits

0x4e0d,	// (0x0009b9df) main_camera4_pane_g4

0x4e20,	// (0x0009b9f2) main_camera4_pane_g5_ParamLimits

0x4e20,	// (0x0009b9f2) main_camera4_pane_g5

0x0005,

0xf69b,	// (0x000a626d) main_camera4_pane_g_ParamLimits

0xf69b,	// (0x000a626d) main_camera4_pane_g

0x4e44,	// (0x0009ba16) main_camera4_pane_t1_ParamLimits

0x4e44,	// (0x0009ba16) main_camera4_pane_t1

0x9fd3,	// (0x000a0ba5) bg_tb_trans_pane_cp06

0x9df4,	// (0x000a09c6) cam4_indicators_pane_g1

0x9e05,	// (0x000a09d7) cam4_indicators_pane_g2

0x0002,

0xf6b6,	// (0x000a6288) cam4_indicators_pane_g

0x9e1d,	// (0x000a09ef) cam4_indicators_pane_t1

0x4ea8,	// (0x0009ba7a) main_video4_pane_g1_ParamLimits

0x4ea8,	// (0x0009ba7a) main_video4_pane_g1

0x4eb7,	// (0x0009ba89) main_video4_pane_g2_ParamLimits

0x4eb7,	// (0x0009ba89) main_video4_pane_g2

0x4ec6,	// (0x0009ba98) main_video4_pane_g3_ParamLimits

0x4ec6,	// (0x0009ba98) main_video4_pane_g3

0x4ed5,	// (0x0009baa7) main_video4_pane_g4_ParamLimits

0x4ed5,	// (0x0009baa7) main_video4_pane_g4

0x0004,

0xf6bd,	// (0x000a628f) main_video4_pane_g_ParamLimits

0xf6bd,	// (0x000a628f) main_video4_pane_g

0x4ef3,	// (0x0009bac5) vid4_indicators_pane_ParamLimits

0x4ef3,	// (0x0009bac5) vid4_indicators_pane

0x4f21,	// (0x0009baf3) video4_image_uncrop_cif_pane_ParamLimits

0x4f21,	// (0x0009baf3) video4_image_uncrop_cif_pane

0x4f3b,	// (0x0009bb0d) video4_image_uncrop_nhd_pane_ParamLimits

0x4f3b,	// (0x0009bb0d) video4_image_uncrop_nhd_pane

0x4d90,	// (0x0009b962) video4_image_uncrop_vga_pane_ParamLimits

0x4d90,	// (0x0009b962) video4_image_uncrop_vga_pane

0x9827,	// (0x000a03f9) bg_tb_trans_pane_cp07

0x9e47,	// (0x000a0a19) vid4_indicators_pane_g1

0x9e5b,	// (0x000a0a2d) vid4_indicators_pane_g2

0x9e6f,	// (0x000a0a41) vid4_indicators_pane_g3

0x0004,

0xf6c8,	// (0x000a629a) vid4_indicators_pane_g

0x9e9c,	// (0x000a0a6e) vid4_indicators_pane_t1

0x4f4f,	// (0x0009bb21) cam4_autofocus_pane_g1

0x4f57,	// (0x0009bb29) cam4_autofocus_pane_g2

0x4f5f,	// (0x0009bb31) cam4_autofocus_pane_g3

0x0002,

0xf6d3,	// (0x000a62a5) cam4_autofocus_pane_g

0x4f67,	// (0x0009bb39) cam4_autofocus_pane_g3_copy1

0x47cd,	// (0x0009b39f) video_down_pane_cp_t1

0x47db,	// (0x0009b3ad) video_down_pane_cp_t2

0x0001,

0xf64b,	// (0x000a621d) video_down_pane_cp_t

0x9827,	// (0x000a03f9) popup_vitu2_window_ParamLimits

0x9827,	// (0x000a03f9) popup_vitu2_window

0x4f6f,	// (0x0009bb41) aid_size_cell2_itu2_ParamLimits

0x4f6f,	// (0x0009bb41) aid_size_cell2_itu2

0x4f95,	// (0x0009bb67) aid_size_cell_itu2_ParamLimits

0x4f95,	// (0x0009bb67) aid_size_cell_itu2

0x4ff1,	// (0x0009bbc3) bg_popup_window_pane_cp09_ParamLimits

0x4ff1,	// (0x0009bbc3) bg_popup_window_pane_cp09

0x4fff,	// (0x0009bbd1) field_vitu2_entry_pane_ParamLimits

0x4fff,	// (0x0009bbd1) field_vitu2_entry_pane

0x5025,	// (0x0009bbf7) grid_vitu2_function_pane_ParamLimits

0x5025,	// (0x0009bbf7) grid_vitu2_function_pane

0x5072,	// (0x0009bc44) grid_vitu2_itu_pane_ParamLimits

0x5072,	// (0x0009bc44) grid_vitu2_itu_pane

0x5104,	// (0x0009bcd6) cell_vitu2_itu_pane_ParamLimits

0x5104,	// (0x0009bcd6) cell_vitu2_itu_pane

0x5130,	// (0x0009bd02) cell_vitu2_function_pane_ParamLimits

0x5130,	// (0x0009bd02) cell_vitu2_function_pane

0x516f,	// (0x0009bd41) bg_popup_call_pane_cp08_ParamLimits

0x516f,	// (0x0009bd41) bg_popup_call_pane_cp08

0x5186,	// (0x0009bd58) field_vitu2_entry_pane_g1

0x5192,	// (0x0009bd64) field_vitu2_entry_pane_g2

0x0002,

0xf6da,	// (0x000a62ac) field_vitu2_entry_pane_g

0x519e,	// (0x0009bd70) field_vitu2_entry_pane_t1_ParamLimits

0x519e,	// (0x0009bd70) field_vitu2_entry_pane_t1

0x51ce,	// (0x0009bda0) field_vitu2_entry_pane_t2_ParamLimits

0x51ce,	// (0x0009bda0) field_vitu2_entry_pane_t2

0x0001,

0xf6e1,	// (0x000a62b3) field_vitu2_entry_pane_t_ParamLimits

0xf6e1,	// (0x000a62b3) field_vitu2_entry_pane_t

0x51f3,	// (0x0009bdc5) bg_button_pane_cp010_ParamLimits

0x51f3,	// (0x0009bdc5) bg_button_pane_cp010

0x5201,	// (0x0009bdd3) cell_vitu2_itu_pane_g1

0x5227,	// (0x0009bdf9) cell_vitu2_itu_pane_t1_ParamLimits

0x5227,	// (0x0009bdf9) cell_vitu2_itu_pane_t1

0x5285,	// (0x0009be57) cell_vitu2_itu_pane_t2_ParamLimits

0x5285,	// (0x0009be57) cell_vitu2_itu_pane_t2

0x0002,

0xf6eb,	// (0x000a62bd) cell_vitu2_itu_pane_t_ParamLimits

0xf6eb,	// (0x000a62bd) cell_vitu2_itu_pane_t

0x9827,	// (0x000a03f9) bg_button_pane_cp011

0x5371,	// (0x0009bf43) cell_vitu2_function_pane_g1

0x9835,	// (0x000a0407) main_myfav_hc_pane

0x4b4b,	// (0x0009b71d) popup_image3_note_pane_ParamLimits

0x4b4b,	// (0x0009b71d) popup_image3_note_pane

0x4b67,	// (0x0009b739) popup_image3_tool_bar_pane_ParamLimits

0x4b67,	// (0x0009b739) popup_image3_tool_bar_pane

0x5313,	// (0x0009bee5) cell_vitu2_itu_pane_t3_ParamLimits

0x5313,	// (0x0009bee5) cell_vitu2_itu_pane_t3

0xacbc,	// (0x000a188e) bg_popup_trans_pane

0x5384,	// (0x0009bf56) grid_image3_tool_bar_pane

0x538e,	// (0x0009bf60) bg_popup_trans_pane_g1

0xb9ab,	// (0x000a257d) bg_popup_trans_pane_g2

0x5396,	// (0x0009bf68) bg_popup_trans_pane_g3

0x539e,	// (0x0009bf70) bg_popup_trans_pane_g4

0x53a6,	// (0x0009bf78) bg_popup_trans_pane_g5

0x53ae,	// (0x0009bf80) bg_popup_trans_pane_g6

0x53b6,	// (0x0009bf88) bg_popup_trans_pane_g7

0x53be,	// (0x0009bf90) bg_popup_trans_pane_g8

0xb98b,	// (0x000a255d) bg_popup_trans_pane_g9

0x0008,

0xf6f2,	// (0x000a62c4) bg_popup_trans_pane_g

0x53c6,	// (0x0009bf98) cell_image3_tool_bar_pane_ParamLimits

0x53c6,	// (0x0009bf98) cell_image3_tool_bar_pane

0xb52c,	// (0x000a20fe) cell_image3_tool_bar_pane_g1

0xacbc,	// (0x000a188e) bg_popup_trans_pane_cp1

0x53da,	// (0x0009bfac) popup_image3_note_pane_t1

0x53e8,	// (0x0009bfba) popup_image3_note_pane_t2

0x53f6,	// (0x0009bfc8) popup_image3_note_pane_t3

0x0002,

0xf705,	// (0x000a62d7) popup_image3_note_pane_t

0x5404,	// (0x0009bfd6) popup_image3_note_pane_t3_copy1

0x5412,	// (0x0009bfe4) bg_myfav_hc_instruction_pane_ParamLimits

0x5412,	// (0x0009bfe4) bg_myfav_hc_instruction_pane

0x5426,	// (0x0009bff8) cell_myfav_contact_pane_ParamLimits

0x5426,	// (0x0009bff8) cell_myfav_contact_pane

0x5444,	// (0x0009c016) cell_myfav_contact_pane_cp1_ParamLimits

0x5444,	// (0x0009c016) cell_myfav_contact_pane_cp1

0x545c,	// (0x0009c02e) cell_myfav_contact_pane_cp2_ParamLimits

0x545c,	// (0x0009c02e) cell_myfav_contact_pane_cp2

0x5474,	// (0x0009c046) cell_myfav_contact_pane_cp3_ParamLimits

0x5474,	// (0x0009c046) cell_myfav_contact_pane_cp3

0x548b,	// (0x0009c05d) cell_myfav_contact_pane_cp4_ParamLimits

0x548b,	// (0x0009c05d) cell_myfav_contact_pane_cp4

0x54a3,	// (0x0009c075) cell_myfav_contact_pane_cp5_ParamLimits

0x54a3,	// (0x0009c075) cell_myfav_contact_pane_cp5

0x54b7,	// (0x0009c089) cell_myfav_contact_pane_cp6_ParamLimits

0x54b7,	// (0x0009c089) cell_myfav_contact_pane_cp6

0x54cd,	// (0x0009c09f) cell_myfav_contact_pane_cp7_ParamLimits

0x54cd,	// (0x0009c09f) cell_myfav_contact_pane_cp7

0x54e7,	// (0x0009c0b9) listscroll_gen_pane_cp05

0x54f0,	// (0x0009c0c2) main_myfav_hc_pane_g1_ParamLimits

0x54f0,	// (0x0009c0c2) main_myfav_hc_pane_g1

0x550a,	// (0x0009c0dc) main_myfav_hc_pane_g2_ParamLimits

0x550a,	// (0x0009c0dc) main_myfav_hc_pane_g2

0x0002,

0xf70c,	// (0x000a62de) main_myfav_hc_pane_g_ParamLimits

0xf70c,	// (0x000a62de) main_myfav_hc_pane_g

0x553c,	// (0x0009c10e) main_myfav_hc_pane_t1_ParamLimits

0x553c,	// (0x0009c10e) main_myfav_hc_pane_t1

0x5553,	// (0x0009c125) main_myfav_hc_pane_t2_ParamLimits

0x5553,	// (0x0009c125) main_myfav_hc_pane_t2

0x5565,	// (0x0009c137) main_myfav_hc_pane_t3_ParamLimits

0x5565,	// (0x0009c137) main_myfav_hc_pane_t3

0x5577,	// (0x0009c149) main_myfav_hc_pane_t4_ParamLimits

0x5577,	// (0x0009c149) main_myfav_hc_pane_t4

0x0004,

0xf713,	// (0x000a62e5) main_myfav_hc_pane_t_ParamLimits

0xf713,	// (0x000a62e5) main_myfav_hc_pane_t

0xb52c,	// (0x000a20fe) bg_myfav_hc_instruction_pane_g1

0x559f,	// (0x0009c171) cell_myfav_contact_pane_g1_ParamLimits

0x559f,	// (0x0009c171) cell_myfav_contact_pane_g1

0x559f,	// (0x0009c171) cell_myfav_contact_pane_g2_ParamLimits

0x559f,	// (0x0009c171) cell_myfav_contact_pane_g2

0x55ab,	// (0x0009c17d) cell_myfav_contact_pane_g3_ParamLimits

0x55ab,	// (0x0009c17d) cell_myfav_contact_pane_g3

0xb4fc,	// (0x000a20ce) cell_myfav_contact_pane_g4_ParamLimits

0xb4fc,	// (0x000a20ce) cell_myfav_contact_pane_g4

0x55b8,	// (0x0009c18a) cell_myfav_contact_pane_g5_ParamLimits

0x55b8,	// (0x0009c18a) cell_myfav_contact_pane_g5

0x0004,

0xf71e,	// (0x000a62f0) cell_myfav_contact_pane_g_ParamLimits

0xf71e,	// (0x000a62f0) cell_myfav_contact_pane_g

0x5524,	// (0x0009c0f6) main_myfav_hc_pane_g3_ParamLimits

0x5524,	// (0x0009c0f6) main_myfav_hc_pane_g3

0x0ba1,	// (0x00097773) popup_adpt_find_window

0x55c4,	// (0x0009c196) afind_page_pane_ParamLimits

0x55c4,	// (0x0009c196) afind_page_pane

0x55da,	// (0x0009c1ac) aid_size_cell_afind_ParamLimits

0x55da,	// (0x0009c1ac) aid_size_cell_afind

0x55f8,	// (0x0009c1ca) bg_popup_sub_pane_cp09_ParamLimits

0x55f8,	// (0x0009c1ca) bg_popup_sub_pane_cp09

0x560a,	// (0x0009c1dc) find_pane_cp01_ParamLimits

0x560a,	// (0x0009c1dc) find_pane_cp01

0x561e,	// (0x0009c1f0) grid_afind_control_pane_ParamLimits

0x561e,	// (0x0009c1f0) grid_afind_control_pane

0x5632,	// (0x0009c204) grid_afind_pane_ParamLimits

0x5632,	// (0x0009c204) grid_afind_pane

0x5654,	// (0x0009c226) cell_afind_pane_ParamLimits

0x5654,	// (0x0009c226) cell_afind_pane

0xb52c,	// (0x000a20fe) afind_page_pane_g1

0x56bb,	// (0x0009c28d) afind_page_pane_g2

0x56c3,	// (0x0009c295) afind_page_pane_g3

0x0002,

0xf729,	// (0x000a62fb) afind_page_pane_g

0x56cb,	// (0x0009c29d) afind_page_pane_t1

0x56eb,	// (0x0009c2bd) cell_afind_grid_control_pane_ParamLimits

0x56eb,	// (0x0009c2bd) cell_afind_grid_control_pane

0x56fa,	// (0x0009c2cc) bg_button_pane_cp69_ParamLimits

0x56fa,	// (0x0009c2cc) bg_button_pane_cp69

0x5706,	// (0x0009c2d8) cell_afind_pane_g1_ParamLimits

0x5706,	// (0x0009c2d8) cell_afind_pane_g1

0x5713,	// (0x0009c2e5) cell_afind_pane_t1_ParamLimits

0x5713,	// (0x0009c2e5) cell_afind_pane_t1

0x5725,	// (0x0009c2f7) bg_button_pane_cp72

0x572d,	// (0x0009c2ff) cell_afind_grid_control_pane_g1

0x2eb4,	// (0x00099a86) aid_image_placing_area_ParamLimits

0x2eb4,	// (0x00099a86) aid_image_placing_area

0xb4ee,	// (0x000a20c0) field_vitu_entry_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) field_vitu_entry_pane_g1

0xb4ee,	// (0x000a20c0) field_vitu_entry_pane_g2_ParamLimits

0xb4ee,	// (0x000a20c0) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000a5d6b) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000a5d6b) field_vitu_entry_pane_g

0xdf39,	// (0x000a4b0b) cell_vitu_itu_pane_g1_ParamLimits

0xdf1c,	// (0x000a4aee) cell_vitu_itu_pane_t3_ParamLimits

0xdf1c,	// (0x000a4aee) cell_vitu_itu_pane_t3

0x487d,	// (0x0009b44f) mp4_progress_pane_t1_ParamLimits

0x489c,	// (0x0009b46e) mp4_progress_pane_t2_ParamLimits

0xf66f,	// (0x000a6241) mp4_progress_pane_t_ParamLimits

0x48bb,	// (0x0009b48d) mup_progress_pane_cp04_ParamLimits

0x558b,	// (0x0009c15d) main_myfav_hc_pane_t5_ParamLimits

0x558b,	// (0x0009c15d) main_myfav_hc_pane_t5

0x97d6,	// (0x000a03a8) aid_zoom_text_primary

0x0ba1,	// (0x00097773) popup_adpt_find_window_ParamLimits

0x9827,	// (0x000a03f9) main_cam_set_pane

0x4dc1,	// (0x0009b993) cam4_zoom_pane_ParamLimits

0x4dc1,	// (0x0009b993) cam4_zoom_pane

0x5736,	// (0x0009c308) main_cam_set_pane_g1_ParamLimits

0x5736,	// (0x0009c308) main_cam_set_pane_g1

0x5744,	// (0x0009c316) main_cam_set_pane_g2_ParamLimits

0x5744,	// (0x0009c316) main_cam_set_pane_g2

0x0001,

0xf730,	// (0x000a6302) main_cam_set_pane_g_ParamLimits

0xf730,	// (0x000a6302) main_cam_set_pane_g

0x5765,	// (0x0009c337) main_cam_set_pane_t1_ParamLimits

0x5765,	// (0x0009c337) main_cam_set_pane_t1

0x5780,	// (0x0009c352) main_cset_listscroll_pane_ParamLimits

0x5780,	// (0x0009c352) main_cset_listscroll_pane

0x57a6,	// (0x0009c378) main_cset_slider_pane_ParamLimits

0x57a6,	// (0x0009c378) main_cset_slider_pane

0x57d4,	// (0x0009c3a6) main_cset_list_pane_ParamLimits

0x57d4,	// (0x0009c3a6) main_cset_list_pane

0x57e4,	// (0x0009c3b6) scroll_pane_cp028

0x57ed,	// (0x0009c3bf) aid_area_touch_slider

0x5809,	// (0x0009c3db) cset_slider_pane

0x582c,	// (0x0009c3fe) main_cset_slider_pane_g1

0x5841,	// (0x0009c413) main_cset_slider_pane_g2

0x0011,

0xf735,	// (0x000a6307) main_cset_slider_pane_g

0x5915,	// (0x0009c4e7) main_cset_slider_pane_t1

0x593d,	// (0x0009c50f) main_cset_slider_pane_t2

0x5957,	// (0x0009c529) main_cset_slider_pane_t3

0x5971,	// (0x0009c543) main_cset_slider_pane_t4

0x598b,	// (0x0009c55d) main_cset_slider_pane_t5

0x59a5,	// (0x0009c577) main_cset_slider_pane_t6

0x59ba,	// (0x0009c58c) main_cset_slider_pane_t7

0x000e,

0xf75a,	// (0x000a632c) main_cset_slider_pane_t

0x5b30,	// (0x0009c702) cset_list_set_pane_ParamLimits

0x5b30,	// (0x0009c702) cset_list_set_pane

0x5b42,	// (0x0009c714) aid_position_infowindow_above

0x5b4a,	// (0x0009c71c) aid_position_infowindow_below

0x5b52,	// (0x0009c724) cset_list_set_pane_g1_ParamLimits

0x5b52,	// (0x0009c724) cset_list_set_pane_g1

0x5b5e,	// (0x0009c730) cset_list_set_pane_g3_ParamLimits

0x5b5e,	// (0x0009c730) cset_list_set_pane_g3

0x0001,

0xf779,	// (0x000a634b) cset_list_set_pane_g_ParamLimits

0xf779,	// (0x000a634b) cset_list_set_pane_g

0x5b6d,	// (0x0009c73f) cset_list_set_pane_t1_ParamLimits

0x5b6d,	// (0x0009c73f) cset_list_set_pane_t1

0xb487,	// (0x000a2059) list_highlight_pane_cp021_ParamLimits

0xb487,	// (0x000a2059) list_highlight_pane_cp021

0xc29c,	// (0x000a2e6e) cset_slider_pane_g1

0xc2ae,	// (0x000a2e80) cset_slider_pane_g2

0xc2a5,	// (0x000a2e77) cset_slider_pane_g3

0x0002,

0xf77e,	// (0x000a6350) cset_slider_pane_g

0x9eb3,	// (0x000a0a85) aid_area_touch_cam4_zoom

0x9ebb,	// (0x000a0a8d) cam4_zoom_cont_pane

0x9ec3,	// (0x000a0a95) cam4_zoom_pane_g1

0x9ecb,	// (0x000a0a9d) cam4_zoom_pane_g2

0x5b82,	// (0x0009c754) cam4_zoom_pane_g3

0x0002,

0xf785,	// (0x000a6357) cam4_zoom_pane_g

0x9ed3,	// (0x000a0aa5) cam4_zoom_cont_pane_g1

0x9edc,	// (0x000a0aae) cam4_zoom_cont_pane_g2

0x9ee5,	// (0x000a0ab7) cam4_zoom_cont_pane_g3

0x0002,

0xf78c,	// (0x000a635e) cam4_zoom_cont_pane_g

0x4bd4,	// (0x0009b7a6) call4_image_pane_ParamLimits

0x4bd4,	// (0x0009b7a6) call4_image_pane

0x4c3b,	// (0x0009b80d) call4_windows_conf_pane_ParamLimits

0x4c7e,	// (0x0009b850) popup_call4_audio_in_window_ParamLimits

0x4c7e,	// (0x0009b850) popup_call4_audio_in_window

0xacbc,	// (0x000a188e) bg_popup_call2_act_pane_cp02

0x4d46,	// (0x0009b918) call4_list_conf_pane

0xb52c,	// (0x000a20fe) call4_image_pane_g1

0xb52c,	// (0x000a20fe) call4_image_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) call4_image_pane_g

0x5b8a,	// (0x0009c75c) list_single_graphic_popup_conf4_pane_ParamLimits

0x5b8a,	// (0x0009c75c) list_single_graphic_popup_conf4_pane

0xacbc,	// (0x000a188e) list_highlight_pane_cp022

0x5b9d,	// (0x0009c76f) list_single_graphic_popup_conf4_pane_g1

0xbe8b,	// (0x000a2a5d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf793,	// (0x000a6365) list_single_graphic_popup_conf4_pane_g

0x5ba5,	// (0x0009c777) list_single_graphic_popup_conf4_pane_t1

0x1813,	// (0x000983e5) popup_vtel_slider_window_ParamLimits

0x1813,	// (0x000983e5) popup_vtel_slider_window

0x490d,	// (0x0009b4df) dialer2_ne_pane_t2_ParamLimits

0x490d,	// (0x0009b4df) dialer2_ne_pane_t2

0x0001,

0xf674,	// (0x000a6246) dialer2_ne_pane_t_ParamLimits

0xf674,	// (0x000a6246) dialer2_ne_pane_t

0xd6bd,	// (0x000a428f) bg_popup_sub_pane_cp010_ParamLimits

0xd6bd,	// (0x000a428f) bg_popup_sub_pane_cp010

0x5bbb,	// (0x0009c78d) popup_vtel_slider_window_g1_ParamLimits

0x5bbb,	// (0x0009c78d) popup_vtel_slider_window_g1

0x5bce,	// (0x0009c7a0) popup_vtel_slider_window_g2_ParamLimits

0x5bce,	// (0x0009c7a0) popup_vtel_slider_window_g2

0x0003,

0xf798,	// (0x000a636a) popup_vtel_slider_window_g_ParamLimits

0xf798,	// (0x000a636a) popup_vtel_slider_window_g

0x5c24,	// (0x0009c7f6) vtel_slider_pane_ParamLimits

0x5c24,	// (0x0009c7f6) vtel_slider_pane

0x5c46,	// (0x0009c818) vtel_slider_pane_g1_ParamLimits

0x5c46,	// (0x0009c818) vtel_slider_pane_g1

0x5c5a,	// (0x0009c82c) vtel_slider_pane_g2_ParamLimits

0x5c5a,	// (0x0009c82c) vtel_slider_pane_g2

0x5c72,	// (0x0009c844) vtel_slider_pane_g3_ParamLimits

0x5c72,	// (0x0009c844) vtel_slider_pane_g3

0x5c46,	// (0x0009c818) vtel_slider_pane_g4_ParamLimits

0x5c46,	// (0x0009c818) vtel_slider_pane_g4

0x5c88,	// (0x0009c85a) vtel_slider_pane_g5_ParamLimits

0x5c88,	// (0x0009c85a) vtel_slider_pane_g5

0x0004,

0xf7a1,	// (0x000a6373) vtel_slider_pane_g_ParamLimits

0xf7a1,	// (0x000a6373) vtel_slider_pane_g

0x9827,	// (0x000a03f9) main_gallery2_pane

0x4fc1,	// (0x0009bb93) aid_size_row_itut2_dropdow_list_ParamLimits

0x4fc1,	// (0x0009bb93) aid_size_row_itut2_dropdow_list

0x5049,	// (0x0009bc1b) grid_vitu2_function_top_pane_ParamLimits

0x5049,	// (0x0009bc1b) grid_vitu2_function_top_pane

0x50ad,	// (0x0009bc7f) popup_vitu2_dropdown_list_window_ParamLimits

0x50ad,	// (0x0009bc7f) popup_vitu2_dropdown_list_window

0x50d8,	// (0x0009bcaa) popup_vitu2_match_list_window

0x5c9e,	// (0x0009c870) cell_vitu2_function_top_pane_ParamLimits

0x5c9e,	// (0x0009c870) cell_vitu2_function_top_pane

0x5cb6,	// (0x0009c888) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5cb6,	// (0x0009c888) cell_vitu2_function_top_pane_cp01

0x5cd2,	// (0x0009c8a4) cell_vitu2_function_top_wide_pane_ParamLimits

0x5cd2,	// (0x0009c8a4) cell_vitu2_function_top_wide_pane

0x9827,	// (0x000a03f9) bg_button_pane_cp012

0x5cf0,	// (0x0009c8c2) cell_vitu2_function_top_pane_g1

0x9eee,	// (0x000a0ac0) bg_button_pane_cp013_ParamLimits

0x9eee,	// (0x000a0ac0) bg_button_pane_cp013

0x5d04,	// (0x0009c8d6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5d04,	// (0x0009c8d6) cell_vitu2_function_top_wide_pane_g1

0x9827,	// (0x000a03f9) bg_popup_sub_pane_cp20

0x5d1c,	// (0x0009c8ee) list_vitu2_match_list_pane

0x538e,	// (0x0009bf60) bg_popup_sub_pane_cp20_g1

0x5396,	// (0x0009bf68) bg_popup_sub_pane_cp20_g2

0xb9ab,	// (0x000a257d) bg_popup_sub_pane_cp20_g3

0x539e,	// (0x0009bf70) bg_popup_sub_pane_cp20_g4

0xb98b,	// (0x000a255d) bg_popup_sub_pane_cp20_g5

0x5d34,	// (0x0009c906) bg_popup_sub_pane_cp20_g6

0x53ae,	// (0x0009bf80) bg_popup_sub_pane_cp20_g7

0x53b6,	// (0x0009bf88) bg_popup_sub_pane_cp20_g8

0x53be,	// (0x0009bf90) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7ac,	// (0x000a637e) bg_popup_sub_pane_cp20_g

0x9f0a,	// (0x000a0adc) list_vitu2_match_list_item_pane_ParamLimits

0x9f0a,	// (0x000a0adc) list_vitu2_match_list_item_pane

0x9f1c,	// (0x000a0aee) list_vitu2_match_list_item_pane_t1

0x9835,	// (0x000a0407) bg_popup_sub_pane_cp21

0xb792,	// (0x000a2364) grid_vitu2_dropdown_list_pane

0x5d3c,	// (0x0009c90e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5d3c,	// (0x0009c90e) cell_vitu2_dropdown_list_char_pane

0x5d5c,	// (0x0009c92e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5d5c,	// (0x0009c92e) cell_vitu2_dropdown_list_ctrl_pane

0x5d84,	// (0x0009c956) cell_vitu2_dropdown_list_char_pane_g1

0x5d8d,	// (0x0009c95f) cell_vitu2_dropdown_list_char_pane_g2

0x5d96,	// (0x0009c968) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7bf,	// (0x000a6391) cell_vitu2_dropdown_list_char_pane_g

0x5d9f,	// (0x0009c971) cell_vitu2_dropdown_list_char_pane_t1

0x5dad,	// (0x0009c97f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5dad,	// (0x0009c97f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5dba,	// (0x0009c98c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5dba,	// (0x0009c98c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5dc7,	// (0x0009c999) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5dc7,	// (0x0009c999) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5dd4,	// (0x0009c9a6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5dd4,	// (0x0009c9a6) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9fd3,	// (0x000a0ba5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9fd3,	// (0x000a0ba5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7c6,	// (0x000a6398) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7c6,	// (0x000a6398) cell_vitu2_dropdown_list_ctrl_pane_g

0x5df0,	// (0x0009c9c2) aid_size_cell_gallery2_ParamLimits

0x5df0,	// (0x0009c9c2) aid_size_cell_gallery2

0x5e0e,	// (0x0009c9e0) grid_gallery2_pane_ParamLimits

0x5e0e,	// (0x0009c9e0) grid_gallery2_pane

0x5e28,	// (0x0009c9fa) scroll_pane_cp029_ParamLimits

0x5e28,	// (0x0009c9fa) scroll_pane_cp029

0x5e39,	// (0x0009ca0b) cell_gallery2_pane_ParamLimits

0x5e39,	// (0x0009ca0b) cell_gallery2_pane

0xb7e1,	// (0x000a23b3) cell_gallery2_pane_g2

0x5e98,	// (0x0009ca6a) cell_gallery2_pane_g3

0x5ea0,	// (0x0009ca72) cell_gallery2_pane_g4

0x5ea8,	// (0x0009ca7a) cell_gallery2_pane_g5

0xb792,	// (0x000a2364) grid_highlight_pane_cp10

0x50d8,	// (0x0009bcaa) popup_vitu2_match_list_window_ParamLimits

0x50ed,	// (0x0009bcbf) popup_vitu2_query_window_ParamLimits

0x50ed,	// (0x0009bcbf) popup_vitu2_query_window

0x9835,	// (0x000a0407) bg_vitu2_candi_button_pane

0x5d84,	// (0x0009c956) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5d8d,	// (0x0009c95f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5d96,	// (0x0009c968) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5eb0,	// (0x0009ca82) bg_button_pane_cp015

0x5ec1,	// (0x0009ca93) bg_button_pane_cp016

0x5ecd,	// (0x0009ca9f) bg_button_pane_cp017

0xc285,	// (0x000a2e57) bg_popup_sub_pane_cp22

0x5f0b,	// (0x0009cadd) popup_vitu2_query_window_g1

0x5f17,	// (0x0009cae9) popup_vitu2_query_window_g2

0x0002,

0xf7d1,	// (0x000a63a3) popup_vitu2_query_window_g

0x5f39,	// (0x0009cb0b) popup_vitu2_query_window_t1_ParamLimits

0x5f39,	// (0x0009cb0b) popup_vitu2_query_window_t1

0x5f6c,	// (0x0009cb3e) popup_vitu2_query_window_t2_ParamLimits

0x5f6c,	// (0x0009cb3e) popup_vitu2_query_window_t2

0x5f7e,	// (0x0009cb50) popup_vitu2_query_window_t3_ParamLimits

0x5f7e,	// (0x0009cb50) popup_vitu2_query_window_t3

0x5fa6,	// (0x0009cb78) popup_vitu2_query_window_t4_ParamLimits

0x5fa6,	// (0x0009cb78) popup_vitu2_query_window_t4

0x5fba,	// (0x0009cb8c) popup_vitu2_query_window_t5_ParamLimits

0x5fba,	// (0x0009cb8c) popup_vitu2_query_window_t5

0x0006,

0xf7d8,	// (0x000a63aa) popup_vitu2_query_window_t_ParamLimits

0xf7d8,	// (0x000a63aa) popup_vitu2_query_window_t

0x57cc,	// (0x0009c39e) main_cset_text_pane

0x57ed,	// (0x0009c3bf) aid_area_touch_slider_ParamLimits

0x5809,	// (0x0009c3db) cset_slider_pane_ParamLimits

0x582c,	// (0x0009c3fe) main_cset_slider_pane_g1_ParamLimits

0x5841,	// (0x0009c413) main_cset_slider_pane_g2_ParamLimits

0x5856,	// (0x0009c428) main_cset_slider_pane_g3_ParamLimits

0x5856,	// (0x0009c428) main_cset_slider_pane_g3

0x5862,	// (0x0009c434) main_cset_slider_pane_g4_ParamLimits

0x5862,	// (0x0009c434) main_cset_slider_pane_g4

0x5871,	// (0x0009c443) main_cset_slider_pane_g5_ParamLimits

0x5871,	// (0x0009c443) main_cset_slider_pane_g5

0x587d,	// (0x0009c44f) main_cset_slider_pane_g6_ParamLimits

0x587d,	// (0x0009c44f) main_cset_slider_pane_g6

0xf735,	// (0x000a6307) main_cset_slider_pane_g_ParamLimits

0x5915,	// (0x0009c4e7) main_cset_slider_pane_t1_ParamLimits

0x593d,	// (0x0009c50f) main_cset_slider_pane_t2_ParamLimits

0x5957,	// (0x0009c529) main_cset_slider_pane_t3_ParamLimits

0x5971,	// (0x0009c543) main_cset_slider_pane_t4_ParamLimits

0x598b,	// (0x0009c55d) main_cset_slider_pane_t5_ParamLimits

0x59a5,	// (0x0009c577) main_cset_slider_pane_t6_ParamLimits

0x59ba,	// (0x0009c58c) main_cset_slider_pane_t7_ParamLimits

0x59e4,	// (0x0009c5b6) main_cset_slider_pane_t8_ParamLimits

0x59e4,	// (0x0009c5b6) main_cset_slider_pane_t8

0x5a0c,	// (0x0009c5de) main_cset_slider_pane_t9_ParamLimits

0x5a0c,	// (0x0009c5de) main_cset_slider_pane_t9

0x5a34,	// (0x0009c606) main_cset_slider_pane_t10_ParamLimits

0x5a34,	// (0x0009c606) main_cset_slider_pane_t10

0x5a5c,	// (0x0009c62e) main_cset_slider_pane_t11_ParamLimits

0x5a5c,	// (0x0009c62e) main_cset_slider_pane_t11

0x5a84,	// (0x0009c656) main_cset_slider_pane_t12_ParamLimits

0x5a84,	// (0x0009c656) main_cset_slider_pane_t12

0x5aa1,	// (0x0009c673) main_cset_slider_pane_t13_ParamLimits

0x5aa1,	// (0x0009c673) main_cset_slider_pane_t13

0xf75a,	// (0x000a632c) main_cset_slider_pane_t_ParamLimits

0xacbc,	// (0x000a188e) bg_popup_sub_pane_cp011

0x6024,	// (0x0009cbf6) main_cset_text_pane_g1

0x602c,	// (0x0009cbfe) main_cset_text_pane_t1

0x603a,	// (0x0009cc0c) main_cset_text_pane_t2

0x6048,	// (0x0009cc1a) main_cset_text_pane_t3

0x6056,	// (0x0009cc28) main_cset_text_pane_t4

0x6064,	// (0x0009cc36) main_cset_text_pane_t5

0x6072,	// (0x0009cc44) main_cset_text_pane_t6

0x6080,	// (0x0009cc52) main_cset_text_pane_t7

0x0006,

0xf7e7,	// (0x000a63b9) main_cset_text_pane_t

0x9835,	// (0x000a0407) main_cam4_burst_pane

0x9835,	// (0x000a0407) main_cam5_pane

0x56d9,	// (0x0009c2ab) bg_button_pane_cp019

0x56e2,	// (0x0009c2b4) bg_button_pane_cp020

0x5891,	// (0x0009c463) main_cset_slider_pane_g7_ParamLimits

0x5891,	// (0x0009c463) main_cset_slider_pane_g7

0x589d,	// (0x0009c46f) main_cset_slider_pane_g8_ParamLimits

0x589d,	// (0x0009c46f) main_cset_slider_pane_g8

0x58a9,	// (0x0009c47b) main_cset_slider_pane_g9_ParamLimits

0x58a9,	// (0x0009c47b) main_cset_slider_pane_g9

0x58b5,	// (0x0009c487) main_cset_slider_pane_g10_ParamLimits

0x58b5,	// (0x0009c487) main_cset_slider_pane_g10

0x58c1,	// (0x0009c493) main_cset_slider_pane_g11_ParamLimits

0x58c1,	// (0x0009c493) main_cset_slider_pane_g11

0x58cd,	// (0x0009c49f) main_cset_slider_pane_g12_ParamLimits

0x58cd,	// (0x0009c49f) main_cset_slider_pane_g12

0x58d9,	// (0x0009c4ab) main_cset_slider_pane_g13_ParamLimits

0x58d9,	// (0x0009c4ab) main_cset_slider_pane_g13

0x58e5,	// (0x0009c4b7) main_cset_slider_pane_g14_ParamLimits

0x58e5,	// (0x0009c4b7) main_cset_slider_pane_g14

0x58f1,	// (0x0009c4c3) main_cset_slider_pane_g15_ParamLimits

0x58f1,	// (0x0009c4c3) main_cset_slider_pane_g15

0x5abe,	// (0x0009c690) main_cset_slider_pane_t14_ParamLimits

0x5abe,	// (0x0009c690) main_cset_slider_pane_t14

0x5af7,	// (0x0009c6c9) main_cset_slider_pane_t15_ParamLimits

0x5af7,	// (0x0009c6c9) main_cset_slider_pane_t15

0x608e,	// (0x0009cc60) aid_cam4_burst_size_cell_ParamLimits

0x608e,	// (0x0009cc60) aid_cam4_burst_size_cell

0x60ae,	// (0x0009cc80) grid_cam4_burst_pane_ParamLimits

0x60ae,	// (0x0009cc80) grid_cam4_burst_pane

0x60e6,	// (0x0009ccb8) linegrid_cam4_burst_pane_ParamLimits

0x60e6,	// (0x0009ccb8) linegrid_cam4_burst_pane

0xa41e,	// (0x000a0ff0) scroll_pane_cp30_ParamLimits

0xa41e,	// (0x000a0ff0) scroll_pane_cp30

0x610a,	// (0x0009ccdc) cell_cam4_burst_pane_ParamLimits

0x610a,	// (0x0009ccdc) cell_cam4_burst_pane

0x6157,	// (0x0009cd29) linegrid_cam4_burst_pane_g1_ParamLimits

0x6157,	// (0x0009cd29) linegrid_cam4_burst_pane_g1

0x6164,	// (0x0009cd36) linegrid_cam4_burst_pane_g2_ParamLimits

0x6164,	// (0x0009cd36) linegrid_cam4_burst_pane_g2

0x6175,	// (0x0009cd47) linegrid_cam4_burst_pane_g3_ParamLimits

0x6175,	// (0x0009cd47) linegrid_cam4_burst_pane_g3

0x0002,

0xf7f6,	// (0x000a63c8) linegrid_cam4_burst_pane_g_ParamLimits

0xf7f6,	// (0x000a63c8) linegrid_cam4_burst_pane_g

0x6182,	// (0x0009cd54) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6182,	// (0x0009cd54) linegrid_cam4_burst_pane_g3_copy1

0x619c,	// (0x0009cd6e) linegrid_cam4_burst_pane_g4_ParamLimits

0x619c,	// (0x0009cd6e) linegrid_cam4_burst_pane_g4

0x61a9,	// (0x0009cd7b) linegrid_cam4_burst_pane_g5_ParamLimits

0x61a9,	// (0x0009cd7b) linegrid_cam4_burst_pane_g5

0x61ba,	// (0x0009cd8c) linegrid_cam4_burst_pane_g6_ParamLimits

0x61ba,	// (0x0009cd8c) linegrid_cam4_burst_pane_g6

0x61d1,	// (0x0009cda3) linegrid_cam4_burst_pane_g7_ParamLimits

0x61d1,	// (0x0009cda3) linegrid_cam4_burst_pane_g7

0x61de,	// (0x0009cdb0) cell_cam4_burst_pane_g1

0x61fd,	// (0x0009cdcf) main_cam5_pane_t1_ParamLimits

0x61fd,	// (0x0009cdcf) main_cam5_pane_t1

0x620f,	// (0x0009cde1) main_cam5_pane_t2_ParamLimits

0x620f,	// (0x0009cde1) main_cam5_pane_t2

0x6221,	// (0x0009cdf3) main_cam5_pane_t3_ParamLimits

0x6221,	// (0x0009cdf3) main_cam5_pane_t3

0x6233,	// (0x0009ce05) main_cam5_pane_t4_ParamLimits

0x6233,	// (0x0009ce05) main_cam5_pane_t4

0x624b,	// (0x0009ce1d) main_cam5_pane_t5_ParamLimits

0x624b,	// (0x0009ce1d) main_cam5_pane_t5

0x625f,	// (0x0009ce31) main_cam5_pane_t6_ParamLimits

0x625f,	// (0x0009ce31) main_cam5_pane_t6

0x6273,	// (0x0009ce45) main_cam5_pane_t7_ParamLimits

0x6273,	// (0x0009ce45) main_cam5_pane_t7

0x6285,	// (0x0009ce57) main_cam5_pane_t8_ParamLimits

0x6285,	// (0x0009ce57) main_cam5_pane_t8

0x62a1,	// (0x0009ce73) main_cam5_pane_t9_ParamLimits

0x62a1,	// (0x0009ce73) main_cam5_pane_t9

0x62b3,	// (0x0009ce85) main_cam5_pane_t10_ParamLimits

0x62b3,	// (0x0009ce85) main_cam5_pane_t10

0x62c5,	// (0x0009ce97) main_cam5_pane_t11_ParamLimits

0x62c5,	// (0x0009ce97) main_cam5_pane_t11

0x62d7,	// (0x0009cea9) main_cam5_pane_t12_ParamLimits

0x62d7,	// (0x0009cea9) main_cam5_pane_t12

0x62ec,	// (0x0009cebe) main_cam5_pane_t13_ParamLimits

0x62ec,	// (0x0009cebe) main_cam5_pane_t13

0x000c,

0xf802,	// (0x000a63d4) main_cam5_pane_t_ParamLimits

0xf802,	// (0x000a63d4) main_cam5_pane_t

0x0c22,	// (0x000977f4) popup_scut_keymap_window_ParamLimits

0x0c22,	// (0x000977f4) popup_scut_keymap_window

0x6309,	// (0x0009cedb) aid_size_cell_brow_shortcut

0xb792,	// (0x000a2364) bg_popup_window_pane_cp010

0x6315,	// (0x0009cee7) grid_scut_pane

0x6321,	// (0x0009cef3) cell_scut_pane_ParamLimits

0x6321,	// (0x0009cef3) cell_scut_pane

0x6338,	// (0x0009cf0a) cell_scut_pane_g1

0x6341,	// (0x0009cf13) cell_scut_pane_t1

0x6350,	// (0x0009cf22) cell_scut_pane_t2

0x635f,	// (0x0009cf31) cell_scut_pane_t3

0x0002,

0xf81d,	// (0x000a63ef) cell_scut_pane_t

0x3d5e,	// (0x0009a930) main_mup3_pane_g8_ParamLimits

0x3d5e,	// (0x0009a930) main_mup3_pane_g8

0x4fdb,	// (0x0009bbad) area_vitu2_query_pane_ParamLimits

0x4fdb,	// (0x0009bbad) area_vitu2_query_pane

0x5ed9,	// (0x0009caab) input_focus_pane_cp08

0x636d,	// (0x0009cf3f) area_vitu2_query_pane_g1

0x6379,	// (0x0009cf4b) area_vitu2_query_pane_g2

0x0001,

0xf824,	// (0x000a63f6) area_vitu2_query_pane_g

0x6388,	// (0x0009cf5a) area_vitu2_query_pane_t1_ParamLimits

0x6388,	// (0x0009cf5a) area_vitu2_query_pane_t1

0x639c,	// (0x0009cf6e) area_vitu2_query_pane_t2_ParamLimits

0x639c,	// (0x0009cf6e) area_vitu2_query_pane_t2

0x63b0,	// (0x0009cf82) area_vitu2_query_pane_t3_ParamLimits

0x63b0,	// (0x0009cf82) area_vitu2_query_pane_t3

0x63d8,	// (0x0009cfaa) area_vitu2_query_pane_t4_ParamLimits

0x63d8,	// (0x0009cfaa) area_vitu2_query_pane_t4

0x6400,	// (0x0009cfd2) area_vitu2_query_pane_t5_ParamLimits

0x6400,	// (0x0009cfd2) area_vitu2_query_pane_t5

0x6428,	// (0x0009cffa) area_vitu2_query_pane_t6_ParamLimits

0x6428,	// (0x0009cffa) area_vitu2_query_pane_t6

0x0006,

0xf829,	// (0x000a63fb) area_vitu2_query_pane_t_ParamLimits

0xf829,	// (0x000a63fb) area_vitu2_query_pane_t

0x6474,	// (0x0009d046) bg_button_pane_cp018

0x6480,	// (0x0009d052) bg_button_pane_cp021

0x648c,	// (0x0009d05e) bg_button_pane_cp022

0x64ab,	// (0x0009d07d) input_focus_pane_cp09

0xbf9a,	// (0x000a2b6c) aid_size_touch_mv_arrow_left

0xbfc5,	// (0x000a2b97) aid_size_touch_mv_arrow_right

0x9fe1,	// (0x000a0bb3) main_cset_slider_pane_g16_ParamLimits

0x9fe1,	// (0x000a0bb3) main_cset_slider_pane_g16

0x9fed,	// (0x000a0bbf) main_cset_slider_pane_g17_ParamLimits

0x9fed,	// (0x000a0bbf) main_cset_slider_pane_g17

0x61de,	// (0x0009cdb0) cell_cam4_burst_pane_g1_ParamLimits

0xacbc,	// (0x000a188e) compa_mode_pane

0x5bde,	// (0x0009c7b0) popup_vtel_slider_window_g3_ParamLimits

0x5bde,	// (0x0009c7b0) popup_vtel_slider_window_g3

0x5bf5,	// (0x0009c7c7) popup_vtel_slider_window_g4_ParamLimits

0x5bf5,	// (0x0009c7c7) popup_vtel_slider_window_g4

0x5c0c,	// (0x0009c7de) popup_vtel_slider_window_t1_ParamLimits

0x5c0c,	// (0x0009c7de) popup_vtel_slider_window_t1

0x9835,	// (0x000a0407) main_cl_pane

0x999f,	// (0x000a0571) popup_imed_adjust2_window_ParamLimits

0xc285,	// (0x000a2e57) bg_tb_trans_pane_cp05_ParamLimits

0xde49,	// (0x000a4a1b) popup_imed_adjust2_window_g1_ParamLimits

0xde58,	// (0x000a4a2a) popup_imed_adjust2_window_g2_ParamLimits

0xde58,	// (0x000a4a2a) popup_imed_adjust2_window_g2

0xde64,	// (0x000a4a36) popup_imed_adjust2_window_g3_ParamLimits

0xde64,	// (0x000a4a36) popup_imed_adjust2_window_g3

0x0002,

0x0294,	// (0x00096e66) popup_imed_adjust2_window_g_ParamLimits

0x0294,	// (0x00096e66) popup_imed_adjust2_window_g

0xde70,	// (0x000a4a42) popup_imed_adjust2_window_t1_ParamLimits

0xde88,	// (0x000a4a5a) slider_imed_adjust_pane_ParamLimits

0xde9c,	// (0x000a4a6e) slider_imed_adjust_pane_g1_ParamLimits

0xdeac,	// (0x000a4a7e) slider_imed_adjust_pane_g2_ParamLimits

0xdebc,	// (0x000a4a8e) slider_imed_adjust_pane_g3_ParamLimits

0xdecd,	// (0x000a4a9f) slider_imed_adjust_pane_g4_ParamLimits

0x029b,	// (0x00096e6d) slider_imed_adjust_pane_g_ParamLimits

0x4d62,	// (0x0009b934) aid_touch_area_cam4_ParamLimits

0x4d62,	// (0x0009b934) aid_touch_area_cam4

0x9dd0,	// (0x000a09a2) battery_pane_cp01

0x4e31,	// (0x0009ba03) main_camera4_pane_g6_ParamLimits

0x4e31,	// (0x0009ba03) main_camera4_pane_g6

0x4e5b,	// (0x0009ba2d) main_camera4_pane_t2_ParamLimits

0x4e5b,	// (0x0009ba2d) main_camera4_pane_t2

0x0001,

0xf6a8,	// (0x000a627a) main_camera4_pane_t_ParamLimits

0xf6a8,	// (0x000a627a) main_camera4_pane_t

0x4e90,	// (0x0009ba62) aid_touch_area_vid4_ParamLimits

0x4e90,	// (0x0009ba62) aid_touch_area_vid4

0x4ee4,	// (0x0009bab6) main_video4_pane_g5_ParamLimits

0x4ee4,	// (0x0009bab6) main_video4_pane_g5

0x4f09,	// (0x0009badb) vid4_progress_pane_ParamLimits

0x4f09,	// (0x0009badb) vid4_progress_pane

0x5909,	// (0x0009c4db) main_cset_slider_pane_g18_ParamLimits

0x5909,	// (0x0009c4db) main_cset_slider_pane_g18

0x61f1,	// (0x0009cdc3) cell_cam4_burst_pane_g2_ParamLimits

0x61f1,	// (0x0009cdc3) cell_cam4_burst_pane_g2

0x0001,

0xf7fd,	// (0x000a63cf) cell_cam4_burst_pane_g_ParamLimits

0xf7fd,	// (0x000a63cf) cell_cam4_burst_pane_g

0xb58a,	// (0x000a215c) bg_cl_pane_ParamLimits

0xb58a,	// (0x000a215c) bg_cl_pane

0x64bb,	// (0x0009d08d) cl_header_pane_ParamLimits

0x64bb,	// (0x0009d08d) cl_header_pane

0x64cf,	// (0x0009d0a1) cl_listscroll_pane_ParamLimits

0x64cf,	// (0x0009d0a1) cl_listscroll_pane

0x64df,	// (0x0009d0b1) bg_cl_pane_g1

0x64e7,	// (0x0009d0b9) bg_cl_pane_g2

0x64ef,	// (0x0009d0c1) bg_cl_pane_g3

0x64f7,	// (0x0009d0c9) bg_cl_pane_g4

0x64ff,	// (0x0009d0d1) bg_cl_pane_g5

0x6507,	// (0x0009d0d9) bg_cl_pane_g6

0x650f,	// (0x0009d0e1) bg_cl_pane_g7

0x6517,	// (0x0009d0e9) bg_cl_pane_g8

0x651f,	// (0x0009d0f1) bg_cl_pane_g9

0x0008,

0xf838,	// (0x000a640a) bg_cl_pane_g

0x6527,	// (0x0009d0f9) aid_height_cl_leading_ParamLimits

0x6527,	// (0x0009d0f9) aid_height_cl_leading

0x6533,	// (0x0009d105) aid_height_cl_text_ParamLimits

0x6533,	// (0x0009d105) aid_height_cl_text

0xb487,	// (0x000a2059) bg_cl_header_pane_ParamLimits

0xb487,	// (0x000a2059) bg_cl_header_pane

0x6552,	// (0x0009d124) cl_header_pane_g1_ParamLimits

0x6552,	// (0x0009d124) cl_header_pane_g1

0x6568,	// (0x0009d13a) cl_header_pane_t1_ParamLimits

0x6568,	// (0x0009d13a) cl_header_pane_t1

0x6581,	// (0x0009d153) cl_list_pane

0x57e4,	// (0x0009c3b6) hc_scroll_pane_cp01

0xb98b,	// (0x000a255d) bg_cl_header_pane_g1

0x538e,	// (0x0009bf60) bg_cl_header_pane_g2

0xb9ab,	// (0x000a257d) bg_cl_header_pane_g3

0x539e,	// (0x0009bf70) bg_cl_header_pane_g4

0x5396,	// (0x0009bf68) bg_cl_header_pane_g5

0x5d34,	// (0x0009c906) bg_cl_header_pane_g6

0x53b6,	// (0x0009bf88) bg_cl_header_pane_g7

0x53be,	// (0x0009bf90) bg_cl_header_pane_g8

0x53ae,	// (0x0009bf80) bg_cl_header_pane_g9

0x0008,

0xf84b,	// (0x000a641d) bg_cl_header_pane_g

0x658a,	// (0x0009d15c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x658a,	// (0x0009d15c) hc_cl_list_double_graphic_heading_pane

0x659b,	// (0x0009d16d) hc_cl_list_single_graphic_pane_ParamLimits

0x659b,	// (0x0009d16d) hc_cl_list_single_graphic_pane

0x65b4,	// (0x0009d186) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x65b4,	// (0x0009d186) hc_cl_list_single_graphic_pane_g1

0x65c0,	// (0x0009d192) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x65c0,	// (0x0009d192) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf85e,	// (0x000a6430) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf85e,	// (0x000a6430) hc_cl_list_single_graphic_pane_g

0x65d4,	// (0x0009d1a6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x65d4,	// (0x0009d1a6) hc_cl_list_single_graphic_pane_t1

0x65b4,	// (0x0009d186) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x65b4,	// (0x0009d186) hc_cl_list_double_graphic_heading_pane_g1

0x65e9,	// (0x0009d1bb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x65e9,	// (0x0009d1bb) hc_cl_list_double_graphic_heading_pane_g2

0x65fd,	// (0x0009d1cf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x65fd,	// (0x0009d1cf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf863,	// (0x000a6435) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf863,	// (0x000a6435) hc_cl_list_double_graphic_heading_pane_g

0x6611,	// (0x0009d1e3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6611,	// (0x0009d1e3) hc_cl_list_double_graphic_heading_pane_t1

0x6626,	// (0x0009d1f8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6626,	// (0x0009d1f8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf86a,	// (0x000a643c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf86a,	// (0x000a643c) hc_cl_list_double_graphic_heading_pane_t

0x9f32,	// (0x000a0b04) vid4_progress_pane_g1

0x9f42,	// (0x000a0b14) vid4_progress_pane_g2

0x663b,	// (0x0009d20d) vid4_progress_pane_g3

0x9f52,	// (0x000a0b24) vid4_progress_pane_g4

0x0004,

0xf86f,	// (0x000a6441) vid4_progress_pane_g

0x664d,	// (0x0009d21f) vid4_progress_pane_t1

0x9f6a,	// (0x000a0b3c) vid4_progress_pane_t2

0x0002,

0xf87a,	// (0x000a644c) vid4_progress_pane_t

0x6663,	// (0x0009d235) wait_bar_pane_cp07

0xd6cb,	// (0x000a429d) blid_firmament_pane_ParamLimits

0xd70e,	// (0x000a42e0) popup_blid_sat_info2_window_g1

0xd732,	// (0x000a4304) popup_blid_sat_info2_window_t3

0xd740,	// (0x000a4312) popup_blid_sat_info2_window_t4

0xd74e,	// (0x000a4320) popup_blid_sat_info2_window_t5

0xd75c,	// (0x000a432e) popup_blid_sat_info2_window_t6

0xd76c,	// (0x000a433e) popup_blid_sat_info2_window_t7

0xd77a,	// (0x000a434c) popup_blid_sat_info2_window_t8

0xd788,	// (0x000a435a) popup_blid_sat_info2_window_t9

0xd796,	// (0x000a4368) popup_blid_sat_info2_window_t10

0xd879,	// (0x000a444b) aid_firma_cardinal_ParamLimits

0xd88d,	// (0x000a445f) blid_firmament_pane_t1_ParamLimits

0xd8a4,	// (0x000a4476) blid_firmament_pane_t2_ParamLimits

0xd8bb,	// (0x000a448d) blid_firmament_pane_t3_ParamLimits

0xd8d2,	// (0x000a44a4) blid_firmament_pane_t4_ParamLimits

0x018d,	// (0x00096d5f) blid_firmament_pane_t_ParamLimits

0xd8e9,	// (0x000a44bb) blid_sat_info_pane_ParamLimits

0x9827,	// (0x000a03f9) main_cam_set_pane_ParamLimits

0x4523,	// (0x0009b0f5) aid_size_cell_colour_35_ParamLimits

0x4543,	// (0x0009b115) aid_size_cell_colour_112_ParamLimits

0x4563,	// (0x0009b135) aid_size_cell_effect_ParamLimits

0xc285,	// (0x000a2e57) bg_tb_trans_pane_cp02_ParamLimits

0x4583,	// (0x0009b155) heading_imed_pane_ParamLimits

0x458f,	// (0x0009b161) listscroll_imed_pane_ParamLimits

0xcbc6,	// (0x000a3798) popup_call2_audio_first_window_g5_ParamLimits

0xcbc6,	// (0x000a3798) popup_call2_audio_first_window_g5

0x4952,	// (0x0009b524) aid_size_touch_image3_arrow_left_ParamLimits

0x4952,	// (0x0009b524) aid_size_touch_image3_arrow_left

0x497e,	// (0x0009b550) aid_size_touch_image3_arrow_right_ParamLimits

0x497e,	// (0x0009b550) aid_size_touch_image3_arrow_right

0x9f7f,	// (0x000a0b51) vid4_progress_pane_t3

0x470a,	// (0x0009b2dc) main_hwr_training_symbol_option_pane_ParamLimits

0x470a,	// (0x0009b2dc) main_hwr_training_symbol_option_pane

0xdfe7,	// (0x000a4bb9) popup_hwr_training_preview_window_ParamLimits

0xdfe7,	// (0x000a4bb9) popup_hwr_training_preview_window

0x472a,	// (0x0009b2fc) hwr_training_navi_pane_g5_ParamLimits

0x472a,	// (0x0009b2fc) hwr_training_navi_pane_g5

0x51eb,	// (0x0009bdbd) popup_char_count_window

0x9827,	// (0x000a03f9) bg_popup_sub_pane_cp20_ParamLimits

0x5d1c,	// (0x0009c8ee) list_vitu2_match_list_pane_ParamLimits

0x5d28,	// (0x0009c8fa) vitu2_page_scroll_pane_ParamLimits

0x5d28,	// (0x0009c8fa) vitu2_page_scroll_pane

0x6699,	// (0x0009d26b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6699,	// (0x0009d26b) list_single_hwr_training_symbol_option_pane

0x66ac,	// (0x0009d27e) list_single_hwr_training_symbol_option_pane_g1

0x66b4,	// (0x0009d286) list_single_hwr_training_symbol_option_pane_t1

0x66c2,	// (0x0009d294) bg_button_pane_cp023

0x66cb,	// (0x0009d29d) bg_button_pane_cp024

0xa00e,	// (0x000a0be0) vitu2_page_scroll_pane_g1

0xa016,	// (0x000a0be8) vitu2_page_scroll_pane_g2

0x0001,

0xf881,	// (0x000a6453) vitu2_page_scroll_pane_g

0xa01e,	// (0x000a0bf0) vitu2_page_scroll_pane_t1

0xb601,	// (0x000a21d3) popup_char_count_window_g1

0xa02d,	// (0x000a0bff) popup_char_count_window_g2

0xeda3,	// (0x000a5975) popup_char_count_window_g3

0x0002,

0xf886,	// (0x000a6458) popup_char_count_window_g

0xa036,	// (0x000a0c08) popup_char_count_window_t1

0x9835,	// (0x000a0407) main_vded2_pane

0xde35,	// (0x000a4a07) aid_size_cell_imed_line

0xde3f,	// (0x000a4a11) grid_imed_line_width_pane

0x9e80,	// (0x000a0a52) vid4_indicators_pane_g4

0xa044,	// (0x000a0c16) cell_imed_line_width_pane_ParamLimits

0xa044,	// (0x000a0c16) cell_imed_line_width_pane

0xa058,	// (0x000a0c2a) cell_imed_line_width_pane_g1

0xa061,	// (0x000a0c33) cell_imed_line_width_pane_g2

0x0001,

0xf88d,	// (0x000a645f) cell_imed_line_width_pane_g

0x66e9,	// (0x0009d2bb) main_vded2_pane_g1_ParamLimits

0x66e9,	// (0x0009d2bb) main_vded2_pane_g1

0x66ff,	// (0x0009d2d1) main_vded2_pane_g2_ParamLimits

0x66ff,	// (0x0009d2d1) main_vded2_pane_g2

0x0001,

0xf892,	// (0x000a6464) main_vded2_pane_g_ParamLimits

0xf892,	// (0x000a6464) main_vded2_pane_g

0x6711,	// (0x0009d2e3) vded2_slider_pane_ParamLimits

0x6711,	// (0x0009d2e3) vded2_slider_pane

0x6721,	// (0x0009d2f3) aid_size_touch_vded2_end

0x672b,	// (0x0009d2fd) aid_size_touch_vded2_playhead

0xa069,	// (0x000a0c3b) aid_size_touch_vded2_start

0xa071,	// (0x000a0c43) vded2_slider_bg_pane

0xa07a,	// (0x000a0c4c) vded2_slider_pane_g1

0xa083,	// (0x000a0c55) vded2_slider_pane_g2

0x6735,	// (0x0009d307) vded2_slider_pane_g3

0x0002,

0xf897,	// (0x000a6469) vded2_slider_pane_g

0xa08b,	// (0x000a0c5d) vded2_slider_bg_pane_g1

0xa094,	// (0x000a0c66) vded2_slider_bg_pane_g2

0xa09d,	// (0x000a0c6f) vded2_slider_bg_pane_g3

0x0002,

0xf89e,	// (0x000a6470) vded2_slider_bg_pane_g

0x2b44,	// (0x00099716) aid_postcard_touch_down_pane_ParamLimits

0x2b44,	// (0x00099716) aid_postcard_touch_down_pane

0x2b5a,	// (0x0009972c) aid_postcard_touch_up_pane_ParamLimits

0x2b5a,	// (0x0009972c) aid_postcard_touch_up_pane

0x9835,	// (0x000a0407) main_blid2_pane

0x9985,	// (0x000a0557) popup_blid2_search_window

0xacbc,	// (0x000a188e) blid2_gps_pane

0xacbc,	// (0x000a188e) blid2_navig_pane

0xacbc,	// (0x000a188e) blid2_search_pane

0xacbc,	// (0x000a188e) blid2_tripm_pane

0x6740,	// (0x0009d312) blid2_search_pane_g1_ParamLimits

0x6740,	// (0x0009d312) blid2_search_pane_g1

0x6758,	// (0x0009d32a) blid2_search_pane_t1_ParamLimits

0x6758,	// (0x0009d32a) blid2_search_pane_t1

0x676a,	// (0x0009d33c) aid_size_cell_blid2_gps_ParamLimits

0x676a,	// (0x0009d33c) aid_size_cell_blid2_gps

0x6782,	// (0x0009d354) blid2_gps_pane_g1_ParamLimits

0x6782,	// (0x0009d354) blid2_gps_pane_g1

0x6796,	// (0x0009d368) grid_blid2_satellite_pane_ParamLimits

0x6796,	// (0x0009d368) grid_blid2_satellite_pane

0x67b0,	// (0x0009d382) blid2_navig_pane_g1_ParamLimits

0x67b0,	// (0x0009d382) blid2_navig_pane_g1

0x67bc,	// (0x0009d38e) blid2_navig_pane_t1_ParamLimits

0x67bc,	// (0x0009d38e) blid2_navig_pane_t1

0x67d7,	// (0x0009d3a9) blid2_navig_pane_t2_ParamLimits

0x67d7,	// (0x0009d3a9) blid2_navig_pane_t2

0x0001,

0xf8a5,	// (0x000a6477) blid2_navig_pane_t_ParamLimits

0xf8a5,	// (0x000a6477) blid2_navig_pane_t

0x67f2,	// (0x0009d3c4) blid2_navig_ring_pane_ParamLimits

0x67f2,	// (0x0009d3c4) blid2_navig_ring_pane

0x680b,	// (0x0009d3dd) blid2_speed_pane_ParamLimits

0x680b,	// (0x0009d3dd) blid2_speed_pane

0x6817,	// (0x0009d3e9) blid2_tripm_pane_g1_ParamLimits

0x6817,	// (0x0009d3e9) blid2_tripm_pane_g1

0x6832,	// (0x0009d404) blid2_tripm_pane_g2_ParamLimits

0x6832,	// (0x0009d404) blid2_tripm_pane_g2

0x6846,	// (0x0009d418) blid2_tripm_pane_g3_ParamLimits

0x6846,	// (0x0009d418) blid2_tripm_pane_g3

0x685a,	// (0x0009d42c) blid2_tripm_pane_g4_ParamLimits

0x685a,	// (0x0009d42c) blid2_tripm_pane_g4

0x686e,	// (0x0009d440) blid2_tripm_pane_g5_ParamLimits

0x686e,	// (0x0009d440) blid2_tripm_pane_g5

0x0005,

0xf8aa,	// (0x000a647c) blid2_tripm_pane_g_ParamLimits

0xf8aa,	// (0x000a647c) blid2_tripm_pane_g

0x6894,	// (0x0009d466) blid2_tripm_pane_t1_ParamLimits

0x6894,	// (0x0009d466) blid2_tripm_pane_t1

0x68af,	// (0x0009d481) blid2_tripm_pane_t2_ParamLimits

0x68af,	// (0x0009d481) blid2_tripm_pane_t2

0x68c8,	// (0x0009d49a) blid2_tripm_pane_t3_ParamLimits

0x68c8,	// (0x0009d49a) blid2_tripm_pane_t3

0x0003,

0xf8b7,	// (0x000a6489) blid2_tripm_pane_t_ParamLimits

0xf8b7,	// (0x000a6489) blid2_tripm_pane_t

0x690f,	// (0x0009d4e1) cell_blid2_satellite_pane_ParamLimits

0x690f,	// (0x0009d4e1) cell_blid2_satellite_pane

0x692d,	// (0x0009d4ff) cell_blid2_satellite_pane_g1

0xa0a6,	// (0x000a0c78) cell_blid2_satellite_pane_t1

0xb52c,	// (0x000a20fe) blid2_speed_pane_g1

0xa0b4,	// (0x000a0c86) blid2_speed_pane_t1

0xa0c2,	// (0x000a0c94) blid2_speed_pane_t2

0x0001,

0xf8c0,	// (0x000a6492) blid2_speed_pane_t

0xb52c,	// (0x000a20fe) blid2_navig_ring_pane_g1

0x6936,	// (0x0009d508) blid2_navig_ring_pane_g2

0x693e,	// (0x0009d510) blid2_navig_ring_pane_g3

0x6946,	// (0x0009d518) blid2_navig_ring_pane_g4

0x694e,	// (0x0009d520) blid2_navig_ring_pane_g5

0x0004,

0xf8c5,	// (0x000a6497) blid2_navig_ring_pane_g

0xacbc,	// (0x000a188e) bg_popup_window_pane_cp011

0xa0d0,	// (0x000a0ca2) popup_blid2_search_window_g1

0xa0d8,	// (0x000a0caa) popup_blid2_search_window_t1

0xa0e6,	// (0x000a0cb8) popup_blid2_search_window_t2

0x0001,

0xf8d0,	// (0x000a64a2) popup_blid2_search_window_t

0xb89a,	// (0x000a246c) main_browser_pane_g1

0xb58a,	// (0x000a215c) main_browser_pane_ParamLimits

0x9827,	// (0x000a03f9) bg_button_pane_cp011_ParamLimits

0x5371,	// (0x0009bf43) cell_vitu2_function_pane_g1_ParamLimits

0xc285,	// (0x000a2e57) bg_popup_sub_pane_cp22_ParamLimits

0x5ed9,	// (0x0009caab) input_focus_pane_cp08_ParamLimits

0x5ef4,	// (0x0009cac6) popup_vitu2_query_button_pane_ParamLimits

0x5ef4,	// (0x0009cac6) popup_vitu2_query_button_pane

0x5f03,	// (0x0009cad5) popup_vitu2_query_input_button_pane

0x5f0b,	// (0x0009cadd) popup_vitu2_query_window_g1_ParamLimits

0x5f17,	// (0x0009cae9) popup_vitu2_query_window_g2_ParamLimits

0xf7d1,	// (0x000a63a3) popup_vitu2_query_window_g_ParamLimits

0xacbc,	// (0x000a188e) bg_button_pane_cp026

0x6956,	// (0x0009d528) popup_vitu2_query_input_button_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp025

0xa0f4,	// (0x000a0cc6) popup_vitu2_query_button_pane_t1

0x39cb,	// (0x0009a59d) main_mp3_pane_t6

0x39d9,	// (0x0009a5ab) popup_slider_window_cp01

0x9dec,	// (0x000a09be) cam4_battery_pane

0x9e3f,	// (0x000a0a11) cam4_battery_pane_cp02

0x9f2a,	// (0x000a0afc) cam4_battery_pane_cp01

0x9f2a,	// (0x000a0afc) cam4_battery_pane_cp03

0x9fc9,	// (0x000a0b9b) cam4_battery_pane_g1

0xb52c,	// (0x000a20fe) cam4_battery_pane_g2

0x0001,

0x05c0,	// (0x00097192) cam4_battery_pane_g

0xd7a4,	// (0x000a4376) popup_blid_sat_info2_window_t11

0xbf9a,	// (0x000a2b6c) aid_size_touch_mv_arrow_left_ParamLimits

0xbfc5,	// (0x000a2b97) aid_size_touch_mv_arrow_right_ParamLimits

0xc023,	// (0x000a2bf5) navi_pane_g1_ParamLimits

0xc02f,	// (0x000a2c01) navi_pane_g2_ParamLimits

0xc05d,	// (0x000a2c2f) navi_pane_g3_ParamLimits

0xf30c,	// (0x000a5ede) navi_pane_g_ParamLimits

0x27fb,	// (0x000993cd) navi_pane_mv_t1_ParamLimits

0x459b,	// (0x0009b16d) grid_imed_effect_pane_ParamLimits

0x1710,	// (0x000982e2) aid_placing_vt_slider_lsc

0xb7e9,	// (0x000a23bb) aid_placing_vt_slider_prt

0xb487,	// (0x000a2059) bg_tb_trans_pane_cp01_ParamLimits

0xda64,	// (0x000a4636) popup_image_details_window_g1_ParamLimits

0xda77,	// (0x000a4649) popup_image_details_window_g2_ParamLimits

0xda8c,	// (0x000a465e) popup_image_details_window_g3_ParamLimits

0xda8c,	// (0x000a465e) popup_image_details_window_g3

0x01cd,	// (0x00096d9f) popup_image_details_window_g_ParamLimits

0xdaa0,	// (0x000a4672) popup_image_details_window_t1_ParamLimits

0xdab2,	// (0x000a4684) popup_image_details_window_t2_ParamLimits

0xdacb,	// (0x000a469d) popup_image_details_window_t3_ParamLimits

0xdadf,	// (0x000a46b1) popup_image_details_window_t4_ParamLimits

0xdafa,	// (0x000a46cc) popup_image_details_window_t5_ParamLimits

0x01d4,	// (0x00096da6) popup_image_details_window_t_ParamLimits

0x653f,	// (0x0009d111) cl_header_name_pane_ParamLimits

0x653f,	// (0x0009d111) cl_header_name_pane

0x695e,	// (0x0009d530) cl_header_name_pane_t1_ParamLimits

0x695e,	// (0x0009d530) cl_header_name_pane_t1

0x697f,	// (0x0009d551) cl_header_name_pane_t2_ParamLimits

0x697f,	// (0x0009d551) cl_header_name_pane_t2

0x69c1,	// (0x0009d593) cl_header_name_pane_t3_ParamLimits

0x69c1,	// (0x0009d593) cl_header_name_pane_t3

0x0002,

0xf8d5,	// (0x000a64a7) cl_header_name_pane_t_ParamLimits

0xf8d5,	// (0x000a64a7) cl_header_name_pane_t

0xc0ec,	// (0x000a2cbe) navi_pane_mv_g2_ParamLimits

0x5186,	// (0x0009bd58) field_vitu2_entry_pane_g1_ParamLimits

0x5192,	// (0x0009bd64) field_vitu2_entry_pane_g2_ParamLimits

0xc263,	// (0x000a2e35) field_vitu2_entry_pane_g3_ParamLimits

0xc263,	// (0x000a2e35) field_vitu2_entry_pane_g3

0xf6da,	// (0x000a62ac) field_vitu2_entry_pane_g_ParamLimits

0x5201,	// (0x0009bdd3) cell_vitu2_itu_pane_g1_ParamLimits

0x5219,	// (0x0009bdeb) cell_vitu2_itu_pane_g2_ParamLimits

0x5219,	// (0x0009bdeb) cell_vitu2_itu_pane_g2

0x0001,

0xf6e6,	// (0x000a62b8) cell_vitu2_itu_pane_g_ParamLimits

0xf6e6,	// (0x000a62b8) cell_vitu2_itu_pane_g

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp05_ParamLimits

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp05

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp03

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp04

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp10_ParamLimits

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp10

0x649b,	// (0x0009d06d) bg_vkb2_func_pane_cp08

0x6474,	// (0x0009d046) bg_vkb2_func_pane_cp06

0x6480,	// (0x0009d052) bg_vkb2_func_pane_cp07

0x66d4,	// (0x0009d2a6) bg_vkb2_func_pane_cp11_ParamLimits

0x66d4,	// (0x0009d2a6) bg_vkb2_func_pane_cp11

0x9ff9,	// (0x000a0bcb) bg_vkb2_func_pane_cp12_ParamLimits

0x9ff9,	// (0x000a0bcb) bg_vkb2_func_pane_cp12

0xacbc,	// (0x000a188e) bg_vkb2_func_pane_cp09

0x538e,	// (0x0009bf60) bg_vkb2_func_pane_g1

0xb9ab,	// (0x000a257d) bg_vkb2_func_pane_g2

0x5396,	// (0x0009bf68) bg_vkb2_func_pane_g3

0x539e,	// (0x0009bf70) bg_vkb2_func_pane_g4

0x5d34,	// (0x0009c906) bg_vkb2_func_pane_g5

0x53b6,	// (0x0009bf88) bg_vkb2_func_pane_g6

0x53be,	// (0x0009bf90) bg_vkb2_func_pane_g7

0x53ae,	// (0x0009bf80) bg_vkb2_func_pane_g8

0xb98b,	// (0x000a255d) bg_vkb2_func_pane_g9

0x0008,

0xf8dc,	// (0x000a64ae) bg_vkb2_func_pane_g

0x6882,	// (0x0009d454) blid2_tripm_pane_g6_ParamLimits

0x6882,	// (0x0009d454) blid2_tripm_pane_g6

0x4875,	// (0x0009b447) mp4_progress_pane_g1

0x68fb,	// (0x0009d4cd) blid2_tripm_values_pane_ParamLimits

0x68fb,	// (0x0009d4cd) blid2_tripm_values_pane

0x69f2,	// (0x0009d5c4) blid2_tripm_values_pane_t1

0x6a00,	// (0x0009d5d2) blid2_tripm_values_pane_t2

0x6a0e,	// (0x0009d5e0) blid2_tripm_values_pane_t3

0x6a1c,	// (0x0009d5ee) blid2_tripm_values_pane_t4

0x6a2a,	// (0x0009d5fc) blid2_tripm_values_pane_t5

0x6a38,	// (0x0009d60a) blid2_tripm_values_pane_t6

0x6a46,	// (0x0009d618) blid2_tripm_values_pane_t7

0x6a54,	// (0x0009d626) blid2_tripm_values_pane_t8

0x6a62,	// (0x0009d634) blid2_tripm_values_pane_t9

0x0008,

0xf8ef,	// (0x000a64c1) blid2_tripm_values_pane_t

0x1752,	// (0x00098324) call_video_pane_t1_ParamLimits

0x1770,	// (0x00098342) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000a5d8c) call_video_pane_t_ParamLimits

0x2ac2,	// (0x00099694) msg_header_pane_g1_ParamLimits

0xc300,	// (0x000a2ed2) msg_header_pane_g2_ParamLimits

0xc300,	// (0x000a2ed2) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x000a5f7c) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x000a5f7c) msg_header_pane_g

0xb58a,	// (0x000a215c) main_clock2_pane_ParamLimits

0x4290,	// (0x0009ae62) grid_clock2_toolbar_pane_ParamLimits

0x4290,	// (0x0009ae62) grid_clock2_toolbar_pane

0x4290,	// (0x0009ae62) listscroll_clock2_pane_ParamLimits

0x4290,	// (0x0009ae62) listscroll_clock2_pane

0x4374,	// (0x0009af46) main_clock2_pane_t3_ParamLimits

0x4374,	// (0x0009af46) main_clock2_pane_t3

0x4398,	// (0x0009af6a) main_clock2_pane_t4_ParamLimits

0x4398,	// (0x0009af6a) main_clock2_pane_t4

0xa102,	// (0x000a0cd4) cell_clock2_toolbar_pane

0xa10a,	// (0x000a0cdc) cell_clock2_toolbar_pane_cp01

0xa10a,	// (0x000a0cdc) cell_clock2_toolbar_pane_cp02

0xa112,	// (0x000a0ce4) cell_clock2_toolbar_pane_cp03

0xa11a,	// (0x000a0cec) list_clock2_pane

0xbf1f,	// (0x000a2af1) scroll_pane_cp10

0xa122,	// (0x000a0cf4) list_single_clock2_pane_ParamLimits

0xa122,	// (0x000a0cf4) list_single_clock2_pane

0xb792,	// (0x000a2364) list_highlight_pane_cp08

0xa12f,	// (0x000a0d01) list_single_clock2_pane_t1

0xa13d,	// (0x000a0d0f) list_single_clock2_pane_t2

0x0001,

0xf902,	// (0x000a64d4) list_single_clock2_pane_t

0xacbc,	// (0x000a188e) bg_button_pane_cp10

0xa14b,	// (0x000a0d1d) cell_clock2_toolbar_pane_g1

0x2ad0,	// (0x000996a2) aid_main_viewer_pane_g1_ParamLimits

0x2ad0,	// (0x000996a2) aid_main_viewer_pane_g1

0x2ade,	// (0x000996b0) aid_main_viewer_pane_g2_ParamLimits

0x2ade,	// (0x000996b0) aid_main_viewer_pane_g2

0x2aec,	// (0x000996be) aid_main_viewer_pane_g3_ParamLimits

0x2aec,	// (0x000996be) aid_main_viewer_pane_g3

0x2afb,	// (0x000996cd) aid_main_viewer_pane_g4_ParamLimits

0x2afb,	// (0x000996cd) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x000a5f8d) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x000a5f8d) aid_main_viewer_pane_g

0x33a0,	// (0x00099f72) main_calc_pane_ParamLimits

0x33b4,	// (0x00099f86) main_dialer2_pane_ParamLimits

0x9835,	// (0x000a0407) main_cam6_pane

0x9835,	// (0x000a0407) main_vid6_pane

0x429c,	// (0x0009ae6e) listscroll_gen_pane_cp06_ParamLimits

0x429c,	// (0x0009ae6e) listscroll_gen_pane_cp06

0x43bb,	// (0x0009af8d) main_clock2_pane_t5_ParamLimits

0x43bb,	// (0x0009af8d) main_clock2_pane_t5

0x4419,	// (0x0009afeb) aid_call2_pane_cp10_ParamLimits

0x442b,	// (0x0009affd) aid_call_pane_cp10_ParamLimits

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g1_ParamLimits

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g2_ParamLimits

0x443d,	// (0x0009b00f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x443d,	// (0x0009b00f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xbf8e,	// (0x000a2b60) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf5d0,	// (0x000a61a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x4453,	// (0x0009b025) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4936,	// (0x0009b508) cell_dialer2_keypad_pane_g2_ParamLimits

0x4936,	// (0x0009b508) cell_dialer2_keypad_pane_g2

0x0001,

0xf679,	// (0x000a624b) cell_dialer2_keypad_pane_g_ParamLimits

0xf679,	// (0x000a624b) cell_dialer2_keypad_pane_g

0xb536,	// (0x000a2108) cell_dialer2_keypad_pane_t1

0x57be,	// (0x0009c390) main_cset_text2_pane_ParamLimits

0x57be,	// (0x0009c390) main_cset_text2_pane

0x636d,	// (0x0009cf3f) area_vitu2_query_pane_g1_ParamLimits

0x6379,	// (0x0009cf4b) area_vitu2_query_pane_g2_ParamLimits

0xf824,	// (0x000a63f6) area_vitu2_query_pane_g_ParamLimits

0x6450,	// (0x0009d022) area_vitu2_query_pane_t7_ParamLimits

0x6450,	// (0x0009d022) area_vitu2_query_pane_t7

0x6474,	// (0x0009d046) bg_button_pane_cp018_ParamLimits

0x6480,	// (0x0009d052) bg_button_pane_cp021_ParamLimits

0x648c,	// (0x0009d05e) bg_button_pane_cp022_ParamLimits

0x649b,	// (0x0009d06d) bg_vkb2_func_pane_cp08_ParamLimits

0x6474,	// (0x0009d046) bg_vkb2_func_pane_cp06_ParamLimits

0x6480,	// (0x0009d052) bg_vkb2_func_pane_cp07_ParamLimits

0x64ab,	// (0x0009d07d) input_focus_pane_cp09_ParamLimits

0x6a70,	// (0x0009d642) cam6_autofocus_pane_ParamLimits

0x6a70,	// (0x0009d642) cam6_autofocus_pane

0x6a7c,	// (0x0009d64e) cam6_image_uncrop_pane_ParamLimits

0x6a7c,	// (0x0009d64e) cam6_image_uncrop_pane

0x6a8c,	// (0x0009d65e) cam6_indi_pane_ParamLimits

0x6a8c,	// (0x0009d65e) cam6_indi_pane

0x6aa2,	// (0x0009d674) cam6_mode_pane_ParamLimits

0x6aa2,	// (0x0009d674) cam6_mode_pane

0x6ab4,	// (0x0009d686) cam6_timer_pane_ParamLimits

0x6ab4,	// (0x0009d686) cam6_timer_pane

0x6ac0,	// (0x0009d692) cam6_zoom_pane_ParamLimits

0x6ac0,	// (0x0009d692) cam6_zoom_pane

0x6acd,	// (0x0009d69f) cam6_mode_pane_g1_ParamLimits

0x6acd,	// (0x0009d69f) cam6_mode_pane_g1

0x6add,	// (0x0009d6af) cam6_mode_pane_g2_ParamLimits

0x6add,	// (0x0009d6af) cam6_mode_pane_g2

0x6aed,	// (0x0009d6bf) cam6_mode_pane_g3_ParamLimits

0x6aed,	// (0x0009d6bf) cam6_mode_pane_g3

0x6afd,	// (0x0009d6cf) cam6_mode_pane_g4_ParamLimits

0x6afd,	// (0x0009d6cf) cam6_mode_pane_g4

0x0003,

0xf907,	// (0x000a64d9) cam6_mode_pane_g_ParamLimits

0xf907,	// (0x000a64d9) cam6_mode_pane_g

0xd80d,	// (0x000a43df) bg_tb_trans_pane_cp08_ParamLimits

0xd80d,	// (0x000a43df) bg_tb_trans_pane_cp08

0xa153,	// (0x000a0d25) cam6_battery_pane_ParamLimits

0xa153,	// (0x000a0d25) cam6_battery_pane

0xa169,	// (0x000a0d3b) cam6_indi_pane_g1_ParamLimits

0xa169,	// (0x000a0d3b) cam6_indi_pane_g1

0xa17b,	// (0x000a0d4d) cam6_indi_pane_g2_ParamLimits

0xa17b,	// (0x000a0d4d) cam6_indi_pane_g2

0xa18d,	// (0x000a0d5f) cam6_indi_pane_g3_ParamLimits

0xa18d,	// (0x000a0d5f) cam6_indi_pane_g3

0x0002,

0xf910,	// (0x000a64e2) cam6_indi_pane_g_ParamLimits

0xf910,	// (0x000a64e2) cam6_indi_pane_g

0xa19f,	// (0x000a0d71) cam6_indi_pane_t1_ParamLimits

0xa19f,	// (0x000a0d71) cam6_indi_pane_t1

0x4f57,	// (0x0009bb29) cam6_autofocus_pane_g1

0x4f4f,	// (0x0009bb21) cam6_autofocus_pane_g2

0x4f67,	// (0x0009bb39) cam6_autofocus_pane_g3

0x4f5f,	// (0x0009bb31) cam6_autofocus_pane_g4

0x0003,

0xf917,	// (0x000a64e9) cam6_autofocus_pane_g

0xa1c5,	// (0x000a0d97) cam6_timer_pane_g1

0xa1cd,	// (0x000a0d9f) cam6_timer_pane_t1

0xa1db,	// (0x000a0dad) cam6_zoom_cont_pane

0xa1e3,	// (0x000a0db5) cam6_zoom_pane_g1

0xa1ec,	// (0x000a0dbe) cam6_zoom_pane_g2

0x6b0d,	// (0x0009d6df) cam6_zoom_pane_g3

0x0002,

0xf920,	// (0x000a64f2) cam6_zoom_pane_g

0xb52c,	// (0x000a20fe) cam6_battery_pane_g1

0xb52c,	// (0x000a20fe) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) cam6_battery_pane_g

0xa1e3,	// (0x000a0db5) cam6_zoom_cont_pane_g1

0xa1ec,	// (0x000a0dbe) cam6_zoom_cont_pane_g2

0xa1f5,	// (0x000a0dc7) cam6_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x000a64f9) cam6_zoom_cont_pane_g

0x6b2b,	// (0x0009d6fd) cam6_mode_pane_cp_ParamLimits

0x6b2b,	// (0x0009d6fd) cam6_mode_pane_cp

0x6b3d,	// (0x0009d70f) cam6_zoom_pane_cp_ParamLimits

0x6b3d,	// (0x0009d70f) cam6_zoom_pane_cp

0x6b49,	// (0x0009d71b) vid6_image_uncrop_cif_pane_ParamLimits

0x6b49,	// (0x0009d71b) vid6_image_uncrop_cif_pane

0x6b59,	// (0x0009d72b) vid6_image_uncrop_nhd_pane_ParamLimits

0x6b59,	// (0x0009d72b) vid6_image_uncrop_nhd_pane

0x6b68,	// (0x0009d73a) vid6_image_uncrop_vga_pane_ParamLimits

0x6b68,	// (0x0009d73a) vid6_image_uncrop_vga_pane

0x6b77,	// (0x0009d749) vid6_image_uncrop_wvga_pane_ParamLimits

0x6b77,	// (0x0009d749) vid6_image_uncrop_wvga_pane

0x6b86,	// (0x0009d758) vid6_indi_pane_ParamLimits

0x6b86,	// (0x0009d758) vid6_indi_pane

0xd80d,	// (0x000a43df) bg_tb_trans_pane_cp09_ParamLimits

0xd80d,	// (0x000a43df) bg_tb_trans_pane_cp09

0xa20d,	// (0x000a0ddf) cam6_battery_pane_cp_ParamLimits

0xa20d,	// (0x000a0ddf) cam6_battery_pane_cp

0xa219,	// (0x000a0deb) vid6_indi_pane_g1_ParamLimits

0xa219,	// (0x000a0deb) vid6_indi_pane_g1

0xa22b,	// (0x000a0dfd) vid6_indi_pane_g2_ParamLimits

0xa22b,	// (0x000a0dfd) vid6_indi_pane_g2

0xa23d,	// (0x000a0e0f) vid6_indi_pane_g3_ParamLimits

0xa23d,	// (0x000a0e0f) vid6_indi_pane_g3

0xa252,	// (0x000a0e24) vid6_indi_pane_g4_ParamLimits

0xa252,	// (0x000a0e24) vid6_indi_pane_g4

0xa267,	// (0x000a0e39) vid6_indi_pane_g5_ParamLimits

0xa267,	// (0x000a0e39) vid6_indi_pane_g5

0x0004,

0xf92e,	// (0x000a6500) vid6_indi_pane_g_ParamLimits

0xf92e,	// (0x000a6500) vid6_indi_pane_g

0xa281,	// (0x000a0e53) vid6_indi_pane_t1_ParamLimits

0xa281,	// (0x000a0e53) vid6_indi_pane_t1

0xa297,	// (0x000a0e69) vid6_indi_pane_t2_ParamLimits

0xa297,	// (0x000a0e69) vid6_indi_pane_t2

0xa2bf,	// (0x000a0e91) vid6_indi_pane_t3_ParamLimits

0xa2bf,	// (0x000a0e91) vid6_indi_pane_t3

0xa2e7,	// (0x000a0eb9) vid6_indi_pane_t4_ParamLimits

0xa2e7,	// (0x000a0eb9) vid6_indi_pane_t4

0x0003,

0xf939,	// (0x000a650b) vid6_indi_pane_t_ParamLimits

0xf939,	// (0x000a650b) vid6_indi_pane_t

0xa30b,	// (0x000a0edd) wait_bar_pane_cp08

0x6b9e,	// (0x0009d770) main_cset_text2_pane_t1_ParamLimits

0x6b9e,	// (0x0009d770) main_cset_text2_pane_t1

0x6b16,	// (0x0009d6e8) listscroll_gen_pane_cp06_t1_ParamLimits

0x6b16,	// (0x0009d6e8) listscroll_gen_pane_cp06_t1

0x9835,	// (0x000a0407) main_cam6_set_pane

0x9fd3,	// (0x000a0ba5) bg_tb_trans_pane_cp06_ParamLimits

0x9df4,	// (0x000a09c6) cam4_indicators_pane_g1_ParamLimits

0x9e05,	// (0x000a09d7) cam4_indicators_pane_g2_ParamLimits

0xf6b6,	// (0x000a6288) cam4_indicators_pane_g_ParamLimits

0x9e1d,	// (0x000a09ef) cam4_indicators_pane_t1_ParamLimits

0x9827,	// (0x000a03f9) bg_tb_trans_pane_cp07_ParamLimits

0x9e47,	// (0x000a0a19) vid4_indicators_pane_g1_ParamLimits

0x9e5b,	// (0x000a0a2d) vid4_indicators_pane_g2_ParamLimits

0x9e6f,	// (0x000a0a41) vid4_indicators_pane_g3_ParamLimits

0x9e80,	// (0x000a0a52) vid4_indicators_pane_g4_ParamLimits

0xf6c8,	// (0x000a629a) vid4_indicators_pane_g_ParamLimits

0x9e9c,	// (0x000a0a6e) vid4_indicators_pane_t1_ParamLimits

0x9f32,	// (0x000a0b04) vid4_progress_pane_g1_ParamLimits

0x9f42,	// (0x000a0b14) vid4_progress_pane_g2_ParamLimits

0x663b,	// (0x0009d20d) vid4_progress_pane_g3_ParamLimits

0x9f52,	// (0x000a0b24) vid4_progress_pane_g4_ParamLimits

0xf86f,	// (0x000a6441) vid4_progress_pane_g_ParamLimits

0x664d,	// (0x0009d21f) vid4_progress_pane_t1_ParamLimits

0x9f6a,	// (0x000a0b3c) vid4_progress_pane_t2_ParamLimits

0x9f7f,	// (0x000a0b51) vid4_progress_pane_t3_ParamLimits

0xf87a,	// (0x000a644c) vid4_progress_pane_t_ParamLimits

0x6663,	// (0x0009d235) wait_bar_pane_cp07_ParamLimits

0x6bbc,	// (0x0009d78e) main_cam6_set_pane_g2_ParamLimits

0x6bbc,	// (0x0009d78e) main_cam6_set_pane_g2

0x6be0,	// (0x0009d7b2) main_cset6_listscroll_pane_ParamLimits

0x6be0,	// (0x0009d7b2) main_cset6_listscroll_pane

0x6bfc,	// (0x0009d7ce) main_cset6_slider_pane_ParamLimits

0x6bfc,	// (0x0009d7ce) main_cset6_slider_pane

0x6c12,	// (0x0009d7e4) main_cset6_text2_pane_ParamLimits

0x6c12,	// (0x0009d7e4) main_cset6_text2_pane

0xa31a,	// (0x000a0eec) main_cset6_text_pane

0xa322,	// (0x000a0ef4) main_cset_list_pane_copy1_ParamLimits

0xa322,	// (0x000a0ef4) main_cset_list_pane_copy1

0xa332,	// (0x000a0f04) scroll_pane_cp028_copy1

0x6c20,	// (0x0009d7f2) cset_list_set_pane_copy1

0x6c32,	// (0x0009d804) aid_position_infowindow_above_copy1

0x6c3a,	// (0x0009d80c) aid_position_infowindow_below_copy1

0x6c42,	// (0x0009d814) cset_list_set_pane_g1_copy1

0xe090,	// (0x000a4c62) cset_list_set_pane_g3_copy1_ParamLimits

0xe090,	// (0x000a4c62) cset_list_set_pane_g3_copy1

0xe09f,	// (0x000a4c71) cset_list_set_pane_t1_copy1_ParamLimits

0xe09f,	// (0x000a4c71) cset_list_set_pane_t1_copy1

0xb487,	// (0x000a2059) list_highlight_pane_cp021_copy1_ParamLimits

0xb487,	// (0x000a2059) list_highlight_pane_cp021_copy1

0xa33b,	// (0x000a0f0d) cset6_slider_pane_ParamLimits

0xa33b,	// (0x000a0f0d) cset6_slider_pane

0xa367,	// (0x000a0f39) main_cset6_slider_pane_g1_ParamLimits

0xa367,	// (0x000a0f39) main_cset6_slider_pane_g1

0x6c4a,	// (0x0009d81c) main_cset6_slider_pane_g2_ParamLimits

0x6c4a,	// (0x0009d81c) main_cset6_slider_pane_g2

0xa38f,	// (0x000a0f61) main_cset6_slider_pane_g3_ParamLimits

0xa38f,	// (0x000a0f61) main_cset6_slider_pane_g3

0x6c72,	// (0x0009d844) main_cset6_slider_pane_g4_ParamLimits

0x6c72,	// (0x0009d844) main_cset6_slider_pane_g4

0xa39b,	// (0x000a0f6d) main_cset6_slider_pane_g5_ParamLimits

0xa39b,	// (0x000a0f6d) main_cset6_slider_pane_g5

0x5891,	// (0x0009c463) main_cset6_slider_pane_g7_ParamLimits

0x5891,	// (0x0009c463) main_cset6_slider_pane_g7

0x589d,	// (0x0009c46f) main_cset6_slider_pane_g8_ParamLimits

0x589d,	// (0x0009c46f) main_cset6_slider_pane_g8

0x58a9,	// (0x0009c47b) main_cset6_slider_pane_g9_ParamLimits

0x58a9,	// (0x0009c47b) main_cset6_slider_pane_g9

0x58b5,	// (0x0009c487) main_cset6_slider_pane_g10_ParamLimits

0x58b5,	// (0x0009c487) main_cset6_slider_pane_g10

0x58c1,	// (0x0009c493) main_cset6_slider_pane_g11_ParamLimits

0x58c1,	// (0x0009c493) main_cset6_slider_pane_g11

0x58cd,	// (0x0009c49f) main_cset6_slider_pane_g12_ParamLimits

0x58cd,	// (0x0009c49f) main_cset6_slider_pane_g12

0x58d9,	// (0x0009c4ab) main_cset6_slider_pane_g13_ParamLimits

0x58d9,	// (0x0009c4ab) main_cset6_slider_pane_g13

0x58e5,	// (0x0009c4b7) main_cset6_slider_pane_g14_ParamLimits

0x58e5,	// (0x0009c4b7) main_cset6_slider_pane_g14

0x6c7e,	// (0x0009d850) main_cset6_slider_pane_g15_ParamLimits

0x6c7e,	// (0x0009d850) main_cset6_slider_pane_g15

0x9fe1,	// (0x000a0bb3) main_cset6_slider_pane_g16_ParamLimits

0x9fe1,	// (0x000a0bb3) main_cset6_slider_pane_g16

0x9fed,	// (0x000a0bbf) main_cset6_slider_pane_g17_ParamLimits

0x9fed,	// (0x000a0bbf) main_cset6_slider_pane_g17

0x0011,

0xf942,	// (0x000a6514) main_cset6_slider_pane_g_ParamLimits

0xf942,	// (0x000a6514) main_cset6_slider_pane_g

0xa3a7,	// (0x000a0f79) main_cset6_slider_pane_t1_ParamLimits

0xa3a7,	// (0x000a0f79) main_cset6_slider_pane_t1

0x6cae,	// (0x0009d880) main_cset6_slider_pane_t2_ParamLimits

0x6cae,	// (0x0009d880) main_cset6_slider_pane_t2

0x6cd9,	// (0x0009d8ab) main_cset6_slider_pane_t3_ParamLimits

0x6cd9,	// (0x0009d8ab) main_cset6_slider_pane_t3

0x6d04,	// (0x0009d8d6) main_cset6_slider_pane_t4_ParamLimits

0x6d04,	// (0x0009d8d6) main_cset6_slider_pane_t4

0x6d2f,	// (0x0009d901) main_cset6_slider_pane_t5_ParamLimits

0x6d2f,	// (0x0009d901) main_cset6_slider_pane_t5

0xa3e8,	// (0x000a0fba) main_cset6_slider_pane_t7_ParamLimits

0xa3e8,	// (0x000a0fba) main_cset6_slider_pane_t7

0x6d5a,	// (0x0009d92c) main_cset6_slider_pane_t8_ParamLimits

0x6d5a,	// (0x0009d92c) main_cset6_slider_pane_t8

0x6d7e,	// (0x0009d950) main_cset6_slider_pane_t9_ParamLimits

0x6d7e,	// (0x0009d950) main_cset6_slider_pane_t9

0x6da2,	// (0x0009d974) main_cset6_slider_pane_t10_ParamLimits

0x6da2,	// (0x0009d974) main_cset6_slider_pane_t10

0x6dc6,	// (0x0009d998) main_cset6_slider_pane_t11_ParamLimits

0x6dc6,	// (0x0009d998) main_cset6_slider_pane_t11

0xa42a,	// (0x000a0ffc) main_cset6_slider_pane_t14_ParamLimits

0xa42a,	// (0x000a0ffc) main_cset6_slider_pane_t14

0xa463,	// (0x000a1035) main_cset6_slider_pane_t15_ParamLimits

0xa463,	// (0x000a1035) main_cset6_slider_pane_t15

0x000b,

0xf967,	// (0x000a6539) main_cset6_slider_pane_t_ParamLimits

0xf967,	// (0x000a6539) main_cset6_slider_pane_t

0x6dea,	// (0x0009d9bc) cset_slider_pane_g1_copy1

0x6df3,	// (0x0009d9c5) cset_slider_pane_g2_copy1

0x6dfc,	// (0x0009d9ce) cset_slider_pane_g3_copy1

0xacbc,	// (0x000a188e) bg_popup_sub_pane_cp011_copy1

0xa4a5,	// (0x000a1077) main_cset_text_pane_g1_copy1

0x602c,	// (0x0009cbfe) main_cset_text_pane_t1_copy1

0x603a,	// (0x0009cc0c) main_cset_text_pane_t2_copy1

0x6048,	// (0x0009cc1a) main_cset_text_pane_t3_copy1

0x6056,	// (0x0009cc28) main_cset_text_pane_t4_copy1

0x6064,	// (0x0009cc36) main_cset_text_pane_t5_copy1

0xa4ad,	// (0x000a107f) main_cset_text_pane_t6_copy1

0xa4bb,	// (0x000a108d) main_cset_text_pane_t7_copy1

0x6b9e,	// (0x0009d770) main_cset_text2_pane_t1_copy1

0x9827,	// (0x000a03f9) main_ncimui_pane

0x35f8,	// (0x0009a1ca) popup_query_ncimui_window_ParamLimits

0x35f8,	// (0x0009a1ca) popup_query_ncimui_window

0xdbd7,	// (0x000a47a9) field_cale_ev2_pane_g4_ParamLimits

0xdbd7,	// (0x000a47a9) field_cale_ev2_pane_g4

0x481f,	// (0x0009b3f1) cell_video_dialer_keypad_pane_g2_ParamLimits

0x481f,	// (0x0009b3f1) cell_video_dialer_keypad_pane_g2

0x0001,

0xf650,	// (0x000a6222) cell_video_dialer_keypad_pane_g_ParamLimits

0xf650,	// (0x000a6222) cell_video_dialer_keypad_pane_g

0x4837,	// (0x0009b409) cell_video_dialer_keypad_pane_t1

0xacbc,	// (0x000a188e) bg_popup_window_pane_cp012

0xbe17,	// (0x000a29e9) heading_pane_cp06

0xa4e7,	// (0x000a10b9) ncim_query_content_pane

0xacbc,	// (0x000a188e) bg_popup_heading_pane_cp01

0xa4ef,	// (0x000a10c1) ncim_heading_pane_t1

0xa4fd,	// (0x000a10cf) ncim_indicator_popup_pane

0xa50f,	// (0x000a10e1) ncim_query_button_pane

0xa523,	// (0x000a10f5) ncim_query_content_pane_t1

0xa535,	// (0x000a1107) ncim_query_content_pane_t2

0x0005,

0xf991,	// (0x000a6563) ncim_query_content_pane_t

0xa56f,	// (0x000a1141) ncim_query_list_pane

0xa581,	// (0x000a1153) ncim_query_popup_pane

0xa4fd,	// (0x000a10cf) ncim_indicator_popup_pane_ParamLimits

0x6f4b,	// (0x0009db1d) ncim_query_content_pane_g1_ParamLimits

0x6f4b,	// (0x0009db1d) ncim_query_content_pane_g1

0xa523,	// (0x000a10f5) ncim_query_content_pane_t1_ParamLimits

0xa535,	// (0x000a1107) ncim_query_content_pane_t2_ParamLimits

0x6f57,	// (0x0009db29) ncim_query_content_pane_t3_ParamLimits

0x6f57,	// (0x0009db29) ncim_query_content_pane_t3

0x6f7f,	// (0x0009db51) ncim_query_content_pane_t4_ParamLimits

0x6f7f,	// (0x0009db51) ncim_query_content_pane_t4

0x6fa7,	// (0x0009db79) ncim_query_content_pane_t5_ParamLimits

0x6fa7,	// (0x0009db79) ncim_query_content_pane_t5

0xa547,	// (0x000a1119) ncim_query_content_pane_t6_ParamLimits

0xa547,	// (0x000a1119) ncim_query_content_pane_t6

0xf991,	// (0x000a6563) ncim_query_content_pane_t_ParamLimits

0xa56f,	// (0x000a1141) ncim_query_list_pane_ParamLimits

0xa581,	// (0x000a1153) ncim_query_popup_pane_ParamLimits

0xa595,	// (0x000a1167) wait_bar_pane_cp04

0xacbc,	// (0x000a188e) input_focus_pane_cp011

0xa59d,	// (0x000a116f) ncim_query_popup_pane_t1

0xa5ab,	// (0x000a117d) ncim_list_query_list_pane_ParamLimits

0xa5ab,	// (0x000a117d) ncim_list_query_list_pane

0xacbc,	// (0x000a188e) bg_button_pane_cp027

0xa5b8,	// (0x000a118a) ncim_query_button_pane_g1

0xacbc,	// (0x000a188e) list_highlight_pane_cp012

0xa5c2,	// (0x000a1194) ncim_list_query_list_pane_g1

0xa5ca,	// (0x000a119c) ncim_list_query_list_pane_t1

0x9e11,	// (0x000a09e3) cam4_indicators_pane_g3_ParamLimits

0x9e11,	// (0x000a09e3) cam4_indicators_pane_g3

0x9e8c,	// (0x000a0a5e) vid4_indicators_pane_g5_ParamLimits

0x9e8c,	// (0x000a0a5e) vid4_indicators_pane_g5

0x9f5e,	// (0x000a0b30) vid4_progress_pane_g5_ParamLimits

0x9f5e,	// (0x000a0b30) vid4_progress_pane_g5

0x6e36,	// (0x0009da08) main_ncimui_pane_g1

0x6e9f,	// (0x0009da71) ncimui_group_query_pane_ParamLimits

0x6e9f,	// (0x0009da71) ncimui_group_query_pane

0x6ee7,	// (0x0009dab9) ncimui_list_pane_ParamLimits

0x6ee7,	// (0x0009dab9) ncimui_list_pane

0x6f0e,	// (0x0009dae0) ncimui_text_pane_ParamLimits

0x6f0e,	// (0x0009dae0) ncimui_text_pane

0x6fcf,	// (0x0009dba1) ncimui_text_pane_t1_ParamLimits

0x6fcf,	// (0x0009dba1) ncimui_text_pane_t1

0xa5d8,	// (0x000a11aa) ncimui_list_single_graphic_pane_ParamLimits

0xa5d8,	// (0x000a11aa) ncimui_list_single_graphic_pane

0x6fed,	// (0x0009dbbf) ncimui_query_pane_ParamLimits

0x6fed,	// (0x0009dbbf) ncimui_query_pane

0xacbc,	// (0x000a188e) list_highlight_pane_cp013

0xa5e8,	// (0x000a11ba) ncim_list_query_list_pane_t1_copy1

0xa5f6,	// (0x000a11c8) ncim_list_single_graphic_pane_g1

0x7000,	// (0x0009dbd2) ncim_query_button_pane_cp01

0x700c,	// (0x0009dbde) ncim_query_entry_pane_ParamLimits

0x700c,	// (0x0009dbde) ncim_query_entry_pane

0x701f,	// (0x0009dbf1) ncimui_query_pane_g1

0x702b,	// (0x0009dbfd) ncimui_query_pane_t1_ParamLimits

0x702b,	// (0x0009dbfd) ncimui_query_pane_t1

0xb487,	// (0x000a2059) input_focus_pane_cp012

0xa5fe,	// (0x000a11d0) ncim_query_entry_pane_t1

0xb58a,	// (0x000a215c) main_im_pane_ParamLimits

0x9827,	// (0x000a03f9) main_mobtv_pane_ParamLimits

0x9827,	// (0x000a03f9) main_mobtv_pane

0x6c96,	// (0x0009d868) main_cset6_slider_pane_g18_ParamLimits

0x6c96,	// (0x0009d868) main_cset6_slider_pane_g18

0x6ca2,	// (0x0009d874) main_cset6_slider_pane_g19_ParamLimits

0x6ca2,	// (0x0009d874) main_cset6_slider_pane_g19

0xb50a,	// (0x000a20dc) bg_main_mobtv_pane_ParamLimits

0xb50a,	// (0x000a20dc) bg_main_mobtv_pane

0x7044,	// (0x0009dc16) main_mobtv_info_pane

0x704d,	// (0x0009dc1f) main_mobtv_loading_pane_ParamLimits

0x704d,	// (0x0009dc1f) main_mobtv_loading_pane

0xa610,	// (0x000a11e2) main_mobtv_pg_channel_list_pane

0xa61a,	// (0x000a11ec) main_mobtv_pg_hdr_pane

0x705a,	// (0x0009dc2c) main_mobtv_programe_curr_pane_ParamLimits

0x705a,	// (0x0009dc2c) main_mobtv_programe_curr_pane

0x7067,	// (0x0009dc39) main_mobtv_programe_next_pane_ParamLimits

0x7067,	// (0x0009dc39) main_mobtv_programe_next_pane

0xa623,	// (0x000a11f5) popup_mobtv_noti_window

0xb52c,	// (0x000a20fe) main_tv_pg_hdr_pane_g1

0xa62b,	// (0x000a11fd) main_tv_pg_hdr_pane_g2

0xa633,	// (0x000a1205) main_tv_pg_hdr_pane_g3

0xa63b,	// (0x000a120d) main_tv_pg_hdr_pane_g4

0xa643,	// (0x000a1215) main_tv_pg_hdr_pane_g5

0xa64d,	// (0x000a121f) main_tv_pg_hdr_pane_g6

0xa657,	// (0x000a1229) main_tv_pg_hdr_pane_g7

0xa661,	// (0x000a1233) main_tv_pg_hdr_pane_g8

0xa66b,	// (0x000a123d) main_tv_pg_hdr_pane_g9

0xa675,	// (0x000a1247) main_tv_pg_hdr_pane_g10

0xa67f,	// (0x000a1251) main_tv_pg_hdr_pane_g11

0x000a,

0x06a8,	// (0x0009727a) main_tv_pg_hdr_pane_g

0xa689,	// (0x000a125b) main_tv_pg_hdr_pane_t1

0xa697,	// (0x000a1269) main_tv_pg_hdr_pane_t2

0xa6a5,	// (0x000a1277) main_tv_pg_hdr_pane_t3

0xa6b5,	// (0x000a1287) main_tv_pg_hdr_pane_t4

0xa6c5,	// (0x000a1297) main_tv_pg_hdr_pane_t5

0x0004,

0x06bf,	// (0x00097291) main_tv_pg_hdr_pane_t

0xa6d5,	// (0x000a12a7) single_mobtv_pg_channel_pane_ParamLimits

0xa6d5,	// (0x000a12a7) single_mobtv_pg_channel_pane

0xa6e7,	// (0x000a12b9) single_mobtv_pg_channel_table_pane

0xbab7,	// (0x000a2689) single_mobtv_pg_channel_thumb_pane

0xa6f0,	// (0x000a12c2) single_tv_pg_channel_pane_g1

0xa6f9,	// (0x000a12cb) single_tv_pg_channel_pane_g2

0x0001,

0x06ca,	// (0x0009729c) single_tv_pg_channel_pane_g

0xb4ee,	// (0x000a20c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xb4ee,	// (0x000a20c0) bg_single_mobtv_pg_channel_thumb_pane

0xa702,	// (0x000a12d4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa702,	// (0x000a12d4) single_mobtv_pg_channel_thumb_pane_g1

0xa710,	// (0x000a12e2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa710,	// (0x000a12e2) single_mobtv_pg_channel_thumb_pane_g2

0xa71c,	// (0x000a12ee) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa71c,	// (0x000a12ee) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x06cf,	// (0x000972a1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x06cf,	// (0x000972a1) single_mobtv_pg_channel_thumb_pane_g

0xa728,	// (0x000a12fa) single_mobtv_pg_channel_thumb_pane_t1

0xa736,	// (0x000a1308) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x06d6,	// (0x000972a8) single_mobtv_pg_channel_thumb_pane_t

0xb52c,	// (0x000a20fe) bg_single_mobtv_pg_channel_table_pane_g1

0xb52c,	// (0x000a20fe) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x000a5c5e) bg_single_mobtv_pg_channel_table_pane_g

0xa744,	// (0x000a1316) single_mobtv_pg_channel_table_pane_t1

0xa752,	// (0x000a1324) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x06db,	// (0x000972ad) single_mobtv_pg_channel_table_pane_t

0x707c,	// (0x0009dc4e) main_mobtv_info_pane_g1_ParamLimits

0x707c,	// (0x0009dc4e) main_mobtv_info_pane_g1

0x709a,	// (0x0009dc6c) main_mobtv_info_pane_t1_ParamLimits

0x709a,	// (0x0009dc6c) main_mobtv_info_pane_t1

0x7112,	// (0x0009dce4) main_mobtv_info_pane_t2_ParamLimits

0x7112,	// (0x0009dce4) main_mobtv_info_pane_t2

0x0002,

0xf9a3,	// (0x000a6575) main_mobtv_info_pane_t_ParamLimits

0xf9a3,	// (0x000a6575) main_mobtv_info_pane_t

0x71a1,	// (0x0009dd73) wait_bar_pane_cp05

0x71b3,	// (0x0009dd85) main_mobtv_loading_pane_g1_ParamLimits

0x71b3,	// (0x0009dd85) main_mobtv_loading_pane_g1

0x71c6,	// (0x0009dd98) main_mobtv_loading_pane_g2_ParamLimits

0x71c6,	// (0x0009dd98) main_mobtv_loading_pane_g2

0x71d2,	// (0x0009dda4) main_mobtv_loading_pane_g3_ParamLimits

0x71d2,	// (0x0009dda4) main_mobtv_loading_pane_g3

0x0002,

0xf9aa,	// (0x000a657c) main_mobtv_loading_pane_g_ParamLimits

0xf9aa,	// (0x000a657c) main_mobtv_loading_pane_g

0xa760,	// (0x000a1332) main_mobtv_loading_pane_t1_ParamLimits

0xa760,	// (0x000a1332) main_mobtv_loading_pane_t1

0xa778,	// (0x000a134a) main_mobtv_loading_pane_t2_ParamLimits

0xa778,	// (0x000a134a) main_mobtv_loading_pane_t2

0x0001,

0x06f3,	// (0x000972c5) main_mobtv_loading_pane_t_ParamLimits

0x06f3,	// (0x000972c5) main_mobtv_loading_pane_t

0x71e5,	// (0x0009ddb7) wait_bar_pane_cp06_ParamLimits

0x71e5,	// (0x0009ddb7) wait_bar_pane_cp06

0xa79c,	// (0x000a136e) main_mobtv_programe_curr_pane_t1

0xa7aa,	// (0x000a137c) main_mobtv_programe_curr_pane_t2

0x0001,

0x06f8,	// (0x000972ca) main_mobtv_programe_curr_pane_t

0xa7b8,	// (0x000a138a) main_mobtv_programe_next_pane_t1

0xa7c6,	// (0x000a1398) main_mobtv_programe_next_pane_t2

0xa7d4,	// (0x000a13a6) main_mobtv_programe_next_pane_t3

0x0002,

0x06fd,	// (0x000972cf) main_mobtv_programe_next_pane_t

0xacbc,	// (0x000a188e) bg_popup_mobtv_noti_window_pane

0xa7e2,	// (0x000a13b4) popup_mobtv_noti_window_g1

0xa7ea,	// (0x000a13bc) popup_mobtv_noti_window_t1

0xa7f8,	// (0x000a13ca) popup_mobtv_noti_window_t2

0x0001,

0x0704,	// (0x000972d6) popup_mobtv_noti_window_t

0xb52c,	// (0x000a20fe) bg_popup_mobtv_noti_window_pane_g1

0x9835,	// (0x000a0407) sc_clock_pane

0x9835,	// (0x000a0407) main_fs_bigclock_pane

0x68e5,	// (0x0009d4b7) blid2_tripm_pane_t4_ParamLimits

0x68e5,	// (0x0009d4b7) blid2_tripm_pane_t4

0xb4ee,	// (0x000a20c0) sc_clock_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) sc_clock_pane_g1

0xb536,	// (0x000a2108) sc_clock_pane_t1_ParamLimits

0xb536,	// (0x000a2108) sc_clock_pane_t1

0xb536,	// (0x000a2108) sc_clock_pane_t2_ParamLimits

0xb536,	// (0x000a2108) sc_clock_pane_t2

0xb536,	// (0x000a2108) sc_clock_pane_t3_ParamLimits

0xb536,	// (0x000a2108) sc_clock_pane_t3

0x0004,

0xf9b1,	// (0x000a6583) sc_clock_pane_t_ParamLimits

0xf9b1,	// (0x000a6583) sc_clock_pane_t

0x7d08,	// (0x0009e8da) main_fs_bigclock_indicator_pane_ParamLimits

0x7d08,	// (0x0009e8da) main_fs_bigclock_indicator_pane

0x7243,	// (0x0009de15) main_fs_bigclock_pane_g1_ParamLimits

0x7243,	// (0x0009de15) main_fs_bigclock_pane_g1

0x7d14,	// (0x0009e8e6) main_fs_bigclock_pane_t1_ParamLimits

0x7d14,	// (0x0009e8e6) main_fs_bigclock_pane_t1

0x7d26,	// (0x0009e8f8) main_fs_bigclock_pane_t2_ParamLimits

0x7d26,	// (0x0009e8f8) main_fs_bigclock_pane_t2

0x7d3a,	// (0x0009e90c) main_fs_bigclock_pane_t3_ParamLimits

0x7d3a,	// (0x0009e90c) main_fs_bigclock_pane_t3

0x0002,

0xfa69,	// (0x000a663b) main_fs_bigclock_pane_t_ParamLimits

0xfa69,	// (0x000a663b) main_fs_bigclock_pane_t

0xe600,	// (0x000a51d2) main_fs_bigclock_indicator_pane_g1

0xa517,	// (0x000a10e9) ncim_query_content_pane_g2_ParamLimits

0xa517,	// (0x000a10e9) ncim_query_content_pane_g2

0x0001,

0xf98c,	// (0x000a655e) ncim_query_content_pane_g_ParamLimits

0xf98c,	// (0x000a655e) ncim_query_content_pane_g

0xb536,	// (0x000a2108) sc_clock_pane_t4_ParamLimits

0xb536,	// (0x000a2108) sc_clock_pane_t4

0x9827,	// (0x000a03f9) main_radioblah_pane

0x9d9e,	// (0x000a0970) cell_call4_button_pane_t1_copy1_ParamLimits

0x9d9e,	// (0x000a0970) cell_call4_button_pane_t1_copy1

0x6e4e,	// (0x0009da20) main_ncimui_pane_t1_ParamLimits

0x6e4e,	// (0x0009da20) main_ncimui_pane_t1

0x6e68,	// (0x0009da3a) main_ncimui_pane_t2_ParamLimits

0x6e68,	// (0x0009da3a) main_ncimui_pane_t2

0x0002,

0xf985,	// (0x000a6557) main_ncimui_pane_t_ParamLimits

0xf985,	// (0x000a6557) main_ncimui_pane_t

0xc285,	// (0x000a2e57) main_radioblah_anim_pane_ParamLimits

0xc285,	// (0x000a2e57) main_radioblah_anim_pane

0xc285,	// (0x000a2e57) main_radioblah_info_pane_ParamLimits

0xc285,	// (0x000a2e57) main_radioblah_info_pane

0xc271,	// (0x000a2e43) main_radioblah_pane_t1_ParamLimits

0xc271,	// (0x000a2e43) main_radioblah_pane_t1

0xc271,	// (0x000a2e43) main_radioblah_pane_t2_ParamLimits

0xc271,	// (0x000a2e43) main_radioblah_pane_t2

0x0003,

0xf9bc,	// (0x000a658e) main_radioblah_pane_t_ParamLimits

0xf9bc,	// (0x000a658e) main_radioblah_pane_t

0xb487,	// (0x000a2059) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb487,	// (0x000a2059) main_radioblah_rocker_ctrl_pane

0xd81b,	// (0x000a43ed) main_radioblah_info_pane_t1_ParamLimits

0xd81b,	// (0x000a43ed) main_radioblah_info_pane_t1

0xa96e,	// (0x000a1540) main_radioblah_info_pane_t2_ParamLimits

0xa96e,	// (0x000a1540) main_radioblah_info_pane_t2

0x0003,

0xf9c5,	// (0x000a6597) main_radioblah_info_pane_t_ParamLimits

0xf9c5,	// (0x000a6597) main_radioblah_info_pane_t

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g1

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g2

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g3

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g4

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g5

0xb52c,	// (0x000a20fe) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x073c,	// (0x0009730e) main_radioblah_rocker_ctrl_pane_g

0x6b9e,	// (0x0009d770) main_cset_text2_pane_t1_copy1_ParamLimits

0x9de4,	// (0x000a09b6) cam4_image_uncrop_qvga_pane

0x9e37,	// (0x000a0a09) vid4_image_uncrop_qcif_pane

0x9f95,	// (0x000a0b67) cam6_image_uncrop_qvga_pane_ParamLimits

0x9f95,	// (0x000a0b67) cam6_image_uncrop_qvga_pane

0xa1fd,	// (0x000a0dcf) vid6_image_uncrop_qcif_pane_ParamLimits

0xa1fd,	// (0x000a0dcf) vid6_image_uncrop_qcif_pane

0xacbc,	// (0x000a188e) bg_popup_preview_window_pane_cp03

0xa4c9,	// (0x000a109b) list_cset_text2_pane

0xa4d1,	// (0x000a10a3) main_cset6_text2_pane_g1

0xa4d9,	// (0x000a10ab) main_cset6_text2_pane_t1

0xb048,	// (0x000a1c1a) list_cset_text2_pane_t1_ParamLimits

0xb048,	// (0x000a1c1a) list_cset_text2_pane_t1

0x9827,	// (0x000a03f9) main_radioblah_pane_ParamLimits

0x718d,	// (0x0009dd5f) main_mobtv_info_pane_t3_ParamLimits

0x718d,	// (0x0009dd5f) main_mobtv_info_pane_t3

0xc263,	// (0x000a2e35) main_radioblah_pane_g1

0xa93e,	// (0x000a1510) main_radioblah_info_pane_g1

0xb54a,	// (0x000a211c) main_radioblah_info_pane_t3_ParamLimits

0xb54a,	// (0x000a211c) main_radioblah_info_pane_t3

0x23db,	// (0x00098fad) highlight_cell_cale_month_pane_ParamLimits

0x23db,	// (0x00098fad) highlight_cell_cale_month_pane

0x9835,	// (0x000a0407) main_phob_fisheye_pane

0xdc88,	// (0x000a485a) scroll_pane_cp0031_ParamLimits

0xdc88,	// (0x000a485a) scroll_pane_cp0031

0xa30b,	// (0x000a0edd) wait_bar_pane_cp08_ParamLimits

0x6c20,	// (0x0009d7f2) cset_list_set_pane_copy1_ParamLimits

0xa9bd,	// (0x000a158f) highlight_cell_cale_month_pane_g1

0x7290,	// (0x0009de62) highlight_cell_cale_month_pane_t1

0x6581,	// (0x0009d153) list_gen_pane_cp01

0x57e4,	// (0x0009c3b6) scroll_pane_01

0x729e,	// (0x0009de70) list_single_double_fisheye_pane

0x72a7,	// (0x0009de79) list_double_fisheye_pane_g1_ParamLimits

0x72a7,	// (0x0009de79) list_double_fisheye_pane_g1

0x72b3,	// (0x0009de85) list_double_fisheye_pane_g2_ParamLimits

0x72b3,	// (0x0009de85) list_double_fisheye_pane_g2

0x72c7,	// (0x0009de99) list_double_fisheye_pane_g3_ParamLimits

0x72c7,	// (0x0009de99) list_double_fisheye_pane_g3

0x0004,

0xf9ce,	// (0x000a65a0) list_double_fisheye_pane_g_ParamLimits

0xf9ce,	// (0x000a65a0) list_double_fisheye_pane_g

0x72f0,	// (0x0009dec2) list_double_fisheye_pane_t1_ParamLimits

0x72f0,	// (0x0009dec2) list_double_fisheye_pane_t1

0x730b,	// (0x0009dedd) list_double_fisheye_pane_t2_ParamLimits

0x730b,	// (0x0009dedd) list_double_fisheye_pane_t2

0x0001,

0xf9d9,	// (0x000a65ab) list_double_fisheye_pane_t_ParamLimits

0xf9d9,	// (0x000a65ab) list_double_fisheye_pane_t

0x9835,	// (0x000a0407) main_call5_pane

0xb487,	// (0x000a2059) sc_swipe_pane_ParamLimits

0xb487,	// (0x000a2059) sc_swipe_pane

0x7340,	// (0x0009df12) call5_image_pane_ParamLimits

0x7340,	// (0x0009df12) call5_image_pane

0x735d,	// (0x0009df2f) call5_swipe_1_pane_ParamLimits

0x735d,	// (0x0009df2f) call5_swipe_1_pane

0x7370,	// (0x0009df42) call5_swipe_2_pane_ParamLimits

0x7370,	// (0x0009df42) call5_swipe_2_pane

0x739b,	// (0x0009df6d) popup_call5_audio_first_window_ParamLimits

0x739b,	// (0x0009df6d) popup_call5_audio_first_window

0xb4ee,	// (0x000a20c0) call5_swipe_1_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) call5_swipe_1_pane_g1

0xa9c5,	// (0x000a1597) call5_swipe_1_pane_g2_ParamLimits

0xa9c5,	// (0x000a1597) call5_swipe_1_pane_g2

0x0001,

0x0759,	// (0x0009732b) call5_swipe_1_pane_g_ParamLimits

0x0759,	// (0x0009732b) call5_swipe_1_pane_g

0xa9d1,	// (0x000a15a3) call5_swipe_1_pane_t1_ParamLimits

0xa9d1,	// (0x000a15a3) call5_swipe_1_pane_t1

0xb4ee,	// (0x000a20c0) call5_swipe_2_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) call5_swipe_2_pane_g1

0xa9e6,	// (0x000a15b8) call5_swipe_2_pane_g2_ParamLimits

0xa9e6,	// (0x000a15b8) call5_swipe_2_pane_g2

0x0001,

0x075e,	// (0x00097330) call5_swipe_2_pane_g_ParamLimits

0x075e,	// (0x00097330) call5_swipe_2_pane_g

0xa9f2,	// (0x000a15c4) call5_swipe_2_pane_t1_ParamLimits

0xa9f2,	// (0x000a15c4) call5_swipe_2_pane_t1

0xb4ee,	// (0x000a20c0) sc_swipe_pane_g1_ParamLimits

0xb4ee,	// (0x000a20c0) sc_swipe_pane_g1

0xb4fc,	// (0x000a20ce) sc_swipe_pane_g2_ParamLimits

0xb4fc,	// (0x000a20ce) sc_swipe_pane_g2

0x0001,

0x0763,	// (0x00097335) sc_swipe_pane_g_ParamLimits

0x0763,	// (0x00097335) sc_swipe_pane_g

0xb536,	// (0x000a2108) sc_swipe_pane_t1_ParamLimits

0xb536,	// (0x000a2108) sc_swipe_pane_t1

0x9835,	// (0x000a0407) main_cmail_launcher_pane

0x73ac,	// (0x0009df7e) aid_size_cell_cmail_l_ParamLimits

0x73ac,	// (0x0009df7e) aid_size_cell_cmail_l

0x73ba,	// (0x0009df8c) grid_cmail_l_pane_ParamLimits

0x73ba,	// (0x0009df8c) grid_cmail_l_pane

0x73d4,	// (0x0009dfa6) cell_cmail_l_pane_ParamLimits

0x73d4,	// (0x0009dfa6) cell_cmail_l_pane

0xaa07,	// (0x000a15d9) cell_cmail_l_pane_g1_ParamLimits

0xaa07,	// (0x000a15d9) cell_cmail_l_pane_g1

0xaa13,	// (0x000a15e5) cell_cmail_l_pane_t1_ParamLimits

0xaa13,	// (0x000a15e5) cell_cmail_l_pane_t1

0xaa29,	// (0x000a15fb) cell_cmail_l_pane_t2_ParamLimits

0xaa29,	// (0x000a15fb) cell_cmail_l_pane_t2

0x0001,

0x0768,	// (0x0009733a) cell_cmail_l_pane_t_ParamLimits

0x0768,	// (0x0009733a) cell_cmail_l_pane_t

0xb487,	// (0x000a2059) grid_highlight_pane_cp018_ParamLimits

0xb487,	// (0x000a2059) grid_highlight_pane_cp018

0x0b08,	// (0x000976da) main2_pane_ParamLimits

0x0b08,	// (0x000976da) main2_pane

0xb622,	// (0x000a21f4) popup_sp_fs_action_menu_bg_pane_g1

0xb62a,	// (0x000a21fc) popup_sp_fs_action_menu_bg_pane_g2

0xb632,	// (0x000a2204) popup_sp_fs_action_menu_bg_pane_g3

0xb63a,	// (0x000a220c) popup_sp_fs_action_menu_bg_pane_g4

0xb642,	// (0x000a2214) popup_sp_fs_action_menu_bg_pane_g5

0xb64a,	// (0x000a221c) popup_sp_fs_action_menu_bg_pane_g6

0xb652,	// (0x000a2224) popup_sp_fs_action_menu_bg_pane_g7

0xb65a,	// (0x000a222c) popup_sp_fs_action_menu_bg_pane_g8

0xb662,	// (0x000a2234) popup_sp_fs_action_menu_bg_pane_g9

0xb66a,	// (0x000a223c) popup_sp_fs_action_menu_bg_pane_g10

0xb66a,	// (0x000a223c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000a5caf) popup_sp_fs_action_menu_bg_pane_g

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000a5d5d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000a5d5d) list_medium_line_x2_t3_g3_g

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t2

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g3_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_x2_t3_g2_g

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t2

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g2_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g3

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000a5d70) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000a5d70) list_medium_line_x2_t4_g4_g

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t2

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t3

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a5d79) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a5d79) list_medium_line_x2_t4_g4_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g3

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000a5d70) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000a5d70) list_medium_line_x2_t2_g4_g

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g4_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g4_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000a5d5d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000a5d5d) list_medium_line_x2_t2_g3_g

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g3_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g3_t

0x2552,	// (0x00099124) main_sp_fs_list_pane_ParamLimits

0x2552,	// (0x00099124) main_sp_fs_list_pane

0x255e,	// (0x00099130) sp_fs_scroll_pane_ParamLimits

0x255e,	// (0x00099130) sp_fs_scroll_pane

0xbc90,	// (0x000a2862) list_medium_line_x2_t3_t1

0xbc90,	// (0x000a2862) list_medium_line_x2_t3_t2

0xbc90,	// (0x000a2862) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x000a5e26) list_medium_line_x2_t3_t

0xbc90,	// (0x000a2862) list_medium_line_x3_t4_t1

0xbc90,	// (0x000a2862) list_medium_line_x3_t4_t2

0xbc90,	// (0x000a2862) list_medium_line_x3_t4_t3

0xbc90,	// (0x000a2862) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x000a5e2d) list_medium_line_x3_t4_t

0xbc90,	// (0x000a2862) list_medium_line_x4_t5_t1

0xbc90,	// (0x000a2862) list_medium_line_x4_t5_t2

0xbc90,	// (0x000a2862) list_medium_line_x4_t5_t3

0xbc90,	// (0x000a2862) list_medium_line_x4_t5_t4

0xbc90,	// (0x000a2862) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x000a5e36) list_medium_line_x4_t5_t

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g1

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g2

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g3

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000a5d70) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000a5d70) list_medium_line_t4_g4_g

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t1

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t2

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t3

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t4_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a5d79) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a5d79) list_medium_line_t4_g4_t

0x2609,	// (0x000991db) chi_dic_find_pane_g1

0x33c8,	// (0x00099f9a) main_tport_pane

0xbc90,	// (0x000a2862) list_medium_line_plain_t1

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_t2_g2_g

0xb536,	// (0x000a2108) list_medium_line_t2_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_g2_t1

0xb536,	// (0x000a2108) list_medium_line_t2_g2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_t2_g2_t

0xe07f,	// (0x000a4c51) aid_sp_fs_list_icon_a_sm

0x6674,	// (0x0009d246) aid_sp_fs_list_icon_d

0xe087,	// (0x000a4c59) aid_sp_fs_text_primary

0x667c,	// (0x0009d24e) aid_sp_fs_text_secondary

0xacbc,	// (0x000a188e) list_medium_line

0xacbc,	// (0x000a188e) list_medium_line_g2

0xacbc,	// (0x000a188e) list_medium_line_g3

0xacbc,	// (0x000a188e) list_medium_line_plain

0xacbc,	// (0x000a188e) list_medium_line_plain_t2

0xacbc,	// (0x000a188e) list_medium_line_plain_t3

0xacbc,	// (0x000a188e) list_medium_line_right_icon

0xacbc,	// (0x000a188e) list_medium_line_right_iconx2

0xacbc,	// (0x000a188e) list_medium_line_t2

0xacbc,	// (0x000a188e) list_medium_line_t2_g2

0xacbc,	// (0x000a188e) list_medium_line_t2_g3

0xacbc,	// (0x000a188e) list_medium_line_t2_right_icon

0xacbc,	// (0x000a188e) list_medium_line_t2_right_iconx2

0xacbc,	// (0x000a188e) list_medium_line_t3

0xacbc,	// (0x000a188e) list_medium_line_t3_g2

0xacbc,	// (0x000a188e) list_medium_line_t3_g3

0xacbc,	// (0x000a188e) list_medium_line_t3_right_iconx2

0xacbc,	// (0x000a188e) list_medium_line_t4_g4

0xacbc,	// (0x000a188e) list_medium_line_x2

0xacbc,	// (0x000a188e) list_medium_line_x2_t2_g2

0xacbc,	// (0x000a188e) list_medium_line_x2_t2_g3

0xacbc,	// (0x000a188e) list_medium_line_x2_t2_g4

0xacbc,	// (0x000a188e) list_medium_line_x2_t3

0xacbc,	// (0x000a188e) list_medium_line_x2_t3_g2

0xacbc,	// (0x000a188e) list_medium_line_x2_t3_g3

0xacbc,	// (0x000a188e) list_medium_line_x2_t3_g4

0xacbc,	// (0x000a188e) list_medium_line_x2_t4_g2

0xacbc,	// (0x000a188e) list_medium_line_x2_t4_g4

0xacbc,	// (0x000a188e) list_medium_line_x3

0xacbc,	// (0x000a188e) list_medium_line_x3_t4

0xacbc,	// (0x000a188e) list_medium_line_x3_t4_g4

0xacbc,	// (0x000a188e) list_medium_line_x4_t4

0xacbc,	// (0x000a188e) list_medium_line_x4_t4_g7

0xacbc,	// (0x000a188e) list_medium_line_x4_t5

0x6685,	// (0x0009d257) list_single_fs_dyc_pane_ParamLimits

0x6685,	// (0x0009d257) list_single_fs_dyc_pane

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g3

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g4

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g5

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x4_t4_g7_g6

0xb4fc,	// (0x000a20ce) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb4fc,	// (0x000a20ce) list_medium_line_x4_t4_g7_g7

0x0006,

0x0670,	// (0x00097242) list_medium_line_x4_t4_g7_g_ParamLimits

0x0670,	// (0x00097242) list_medium_line_x4_t4_g7_g

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t1

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t2

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x4_t4_g7_t3

0xb54a,	// (0x000a211c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb54a,	// (0x000a211c) list_medium_line_x4_t4_g7_t4

0xb54a,	// (0x000a211c) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb54a,	// (0x000a211c) list_medium_line_x4_t4_g7_t5

0x0004,

0x067f,	// (0x00097251) list_medium_line_x4_t4_g7_t_ParamLimits

0x067f,	// (0x00097251) list_medium_line_x4_t4_g7_t

0x6e05,	// (0x0009d9d7) list_single_dyc_row_pane_ParamLimits

0x6e05,	// (0x0009d9d7) list_single_dyc_row_pane

0x732d,	// (0x0009deff) call5_gesture_pane_ParamLimits

0x732d,	// (0x0009deff) call5_gesture_pane

0x7383,	// (0x0009df55) call5_windows_pane_ParamLimits

0x7383,	// (0x0009df55) call5_windows_pane

0x73ee,	// (0x0009dfc0) call5_swipe_1_pane_cp_ParamLimits

0x73ee,	// (0x0009dfc0) call5_swipe_1_pane_cp

0x73fa,	// (0x0009dfcc) call5_swipe_2_pane_cp_ParamLimits

0x73fa,	// (0x0009dfcc) call5_swipe_2_pane_cp

0xb792,	// (0x000a2364) call5_image_pane_cp

0x7406,	// (0x0009dfd8) popup_call5_audio_first_window_cp_ParamLimits

0x7406,	// (0x0009dfd8) popup_call5_audio_first_window_cp

0xaa46,	// (0x000a1618) call5_swipe_1_pane_g1_cp_ParamLimits

0xaa46,	// (0x000a1618) call5_swipe_1_pane_g1_cp

0xaa53,	// (0x000a1625) call5_swipe_1_pane_g2_cp

0xaa5b,	// (0x000a162d) call5_swipe_1_pane_t1_cp_ParamLimits

0xaa5b,	// (0x000a162d) call5_swipe_1_pane_t1_cp

0xaa46,	// (0x000a1618) call5_swipe_2_pane_g1_cp_ParamLimits

0xaa46,	// (0x000a1618) call5_swipe_2_pane_g1_cp

0xaa70,	// (0x000a1642) call5_swipe_2_pane_g2_cp

0xaa78,	// (0x000a164a) call5_swipe_2_pane_t1_cp_ParamLimits

0xaa78,	// (0x000a164a) call5_swipe_2_pane_t1_cp

0xb487,	// (0x000a2059) main_sp_fs_email_pane

0xaa8d,	// (0x000a165f) main_sp_fs_listscroll_pane_te

0x7414,	// (0x0009dfe6) popup_sp_fs_action_menu_pane_ParamLimits

0x7414,	// (0x0009dfe6) popup_sp_fs_action_menu_pane

0xb52c,	// (0x000a20fe) bg_sp_fs_ctrlbar_pane_g1

0xaa96,	// (0x000a1668) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xaa9f,	// (0x000a1671) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd484,	// (0x000a4056) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb52c,	// (0x000a20fe) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x076d,	// (0x0009733f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd6bd,	// (0x000a428f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd6bd,	// (0x000a428f) bg_sp_fs_ctrlbar_ddmenu_pane

0xaaa8,	// (0x000a167a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xaaa8,	// (0x000a167a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xaab4,	// (0x000a1686) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xaab4,	// (0x000a1686) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0776,	// (0x00097348) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0776,	// (0x00097348) main_sp_fs_ctrlbar_ddmenu_pane_g

0xaac0,	// (0x000a1692) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xaac0,	// (0x000a1692) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb52c,	// (0x000a20fe) list_medium_line_t2_right_icon_g1

0xbc90,	// (0x000a2862) list_medium_line_t2_right_icon_t1

0xbc90,	// (0x000a2862) list_medium_line_t2_right_icon_t2

0x0001,

0xf9de,	// (0x000a65b0) list_medium_line_t2_right_icon_t

0xc285,	// (0x000a2e57) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc285,	// (0x000a2e57) bg_sp_fs_ctrlbar_pane

0x749e,	// (0x0009e070) main_sp_fs_ctrlbar_button_pane_cp01

0x74a8,	// (0x0009e07a) main_sp_fs_ctrlbar_ddmenu_pane

0xab12,	// (0x000a16e4) main_sp_fs_ctrlbar_pane_g1

0xab1e,	// (0x000a16f0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xf9e3,	// (0x000a65b5) main_sp_fs_ctrlbar_pane_g

0x74e6,	// (0x0009e0b8) main_sp_fs_ctrlbar_pane_t1

0x7525,	// (0x0009e0f7) main_sp_fs_ctrlbar_pane

0x7549,	// (0x0009e11b) main_sp_fs_listscroll_pane_te_cp01

0x7573,	// (0x0009e145) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7573,	// (0x0009e145) popup_sp_fs_action_menu_pane_cp01

0xb487,	// (0x000a2059) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xb487,	// (0x000a2059) bg_sp_fs_highlight_list_pane_cp01

0xe0b4,	// (0x000a4c86) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe0b4,	// (0x000a4c86) sp_fs_action_menu_list_gene_pane_g1

0xab45,	// (0x000a1717) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xab45,	// (0x000a1717) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x078e,	// (0x00097360) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x078e,	// (0x00097360) sp_fs_action_menu_list_gene_pane_g

0xe0c3,	// (0x000a4c95) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe0c3,	// (0x000a4c95) sp_fs_action_menu_list_gene_pane_t1

0xe0db,	// (0x000a4cad) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe0db,	// (0x000a4cad) sp_fs_action_menu_list_gene_pane

0xab52,	// (0x000a1724) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xab52,	// (0x000a1724) popup_sp_fs_action_menu_bg_pane

0xe0fa,	// (0x000a4ccc) sp_fs_action_menu_list_pane_ParamLimits

0xe0fa,	// (0x000a4ccc) sp_fs_action_menu_list_pane

0x7598,	// (0x0009e16a) sp_fs_scroll_pane_cp01_ParamLimits

0x7598,	// (0x0009e16a) sp_fs_scroll_pane_cp01

0xbc90,	// (0x000a2862) list_medium_line_plain_t2_t1

0xbc90,	// (0x000a2862) list_medium_line_plain_t2_t2

0x0001,

0xf9de,	// (0x000a65b0) list_medium_line_plain_t2_t

0xbc90,	// (0x000a2862) list_medium_line_plain_t3_t1

0xbc90,	// (0x000a2862) list_medium_line_plain_t3_t2

0xbc90,	// (0x000a2862) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x000a5e26) list_medium_line_plain_t3_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_x2_t2_g2_g

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g2_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_x2_t2_g2_t

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_x2_t4_g2_g

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t2

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t3

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000a5d79) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000a5d79) list_medium_line_x2_t4_g2_t

0xb52c,	// (0x000a20fe) list_medium_line_t3_right_iconx2_g1

0xb52c,	// (0x000a20fe) list_medium_line_t3_right_iconx2_g2

0xb52c,	// (0x000a20fe) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x000a5f42) list_medium_line_t3_right_iconx2_g

0xbc90,	// (0x000a2862) list_medium_line_t3_right_iconx2_t1

0xbc90,	// (0x000a2862) list_medium_line_t3_right_iconx2_t2

0x0001,

0xf9de,	// (0x000a65b0) list_medium_line_t3_right_iconx2_t

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g3

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000a5d70) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000a5d70) list_medium_line_x3_t4_g4_g

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t1

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t2

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t3

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000a5d79) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000a5d79) list_medium_line_x3_t4_g4_t

0x75be,	// (0x0009e190) list_single_dyc_row_text_pane_t1_ParamLimits

0x75be,	// (0x0009e190) list_single_dyc_row_text_pane_t1

0x7607,	// (0x0009e1d9) list_single_dyc_row_text_pane_t2_ParamLimits

0x7607,	// (0x0009e1d9) list_single_dyc_row_text_pane_t2

0xe11a,	// (0x000a4cec) list_single_dyc_row_text_pane_t3_ParamLimits

0xe11a,	// (0x000a4cec) list_single_dyc_row_text_pane_t3

0x0005,

0xf9ec,	// (0x000a65be) list_single_dyc_row_text_pane_t_ParamLimits

0xf9ec,	// (0x000a65be) list_single_dyc_row_text_pane_t

0xe13e,	// (0x000a4d10) list_single_dyc_row_pane_g1_ParamLimits

0xe13e,	// (0x000a4d10) list_single_dyc_row_pane_g1

0xe14a,	// (0x000a4d1c) list_single_dyc_row_pane_g2_ParamLimits

0xe14a,	// (0x000a4d1c) list_single_dyc_row_pane_g2

0xe156,	// (0x000a4d28) list_single_dyc_row_pane_g3_ParamLimits

0xe156,	// (0x000a4d28) list_single_dyc_row_pane_g3

0xe169,	// (0x000a4d3b) list_single_dyc_row_pane_g4_ParamLimits

0xe169,	// (0x000a4d3b) list_single_dyc_row_pane_g4

0x0006,

0x07a0,	// (0x00097372) list_single_dyc_row_pane_g_ParamLimits

0x07a0,	// (0x00097372) list_single_dyc_row_pane_g

0xe1bb,	// (0x000a4d8d) list_single_dyc_row_text_pane_ParamLimits

0xe1bb,	// (0x000a4d8d) list_single_dyc_row_text_pane

0xacbc,	// (0x000a188e) bg_sp_fs_scroll_pane

0xab60,	// (0x000a1732) thumb_sp_fs_scroll_pane

0xb4ee,	// (0x000a20c0) list_medium_line_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g1

0xb536,	// (0x000a2108) list_medium_line_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_x2_g

0xb536,	// (0x000a2108) list_medium_line_x2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t1

0xb4ee,	// (0x000a20c0) list_medium_line_x3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x3_g1

0x9fd3,	// (0x000a0ba5) list_medium_line_x3_g2_ParamLimits

0x9fd3,	// (0x000a0ba5) list_medium_line_x3_g2

0x0001,

0x07af,	// (0x00097381) list_medium_line_x3_g_ParamLimits

0x07af,	// (0x00097381) list_medium_line_x3_g

0xab69,	// (0x000a173b) list_medium_line_x3_t1_ParamLimits

0xab69,	// (0x000a173b) list_medium_line_x3_t1

0xab7d,	// (0x000a174f) thumb_sp_fs_scroll_pane_g1

0xab86,	// (0x000a1758) thumb_sp_fs_scroll_pane_g2

0xab8f,	// (0x000a1761) thumb_sp_fs_scroll_pane_g3

0x0002,

0x07b4,	// (0x00097386) thumb_sp_fs_scroll_pane_g

0xab7d,	// (0x000a174f) bg_sp_fs_scroll_pane_g1

0xab86,	// (0x000a1758) bg_sp_fs_scroll_pane_g2

0xab8f,	// (0x000a1761) bg_sp_fs_scroll_pane_g3

0x0002,

0x07b4,	// (0x00097386) bg_sp_fs_scroll_pane_g

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g1

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g2

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g3

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000a5d70) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000a5d70) list_medium_line_x2_t3_g4_g

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t1

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t2

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_x2_t3_g4_t

0xb4ee,	// (0x000a20c0) list_medium_line_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_g2_g

0xb536,	// (0x000a2108) list_medium_line_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_g2_t1

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g2_g1

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g2_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000a5d6b) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000a5d6b) list_medium_line_t3_g2_g

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t1

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t2

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_t3_g2_t

0xb52c,	// (0x000a20fe) list_medium_line_right_icon_g1

0xbc90,	// (0x000a2862) list_medium_line_right_icon_t1

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g1

0xb536,	// (0x000a2108) list_medium_line_t2_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_t1

0xb536,	// (0x000a2108) list_medium_line_t2_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_t2_t

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g1

0xb536,	// (0x000a2108) list_medium_line_t3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_t1

0xb536,	// (0x000a2108) list_medium_line_t3_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_t2

0xb536,	// (0x000a2108) list_medium_line_t3_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_t3_t

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g1

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g2

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000a5d5d) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000a5d5d) list_medium_line_g3_g

0xb536,	// (0x000a2108) list_medium_line_g3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_g3_t1

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g1

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g2

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000a5d5d) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000a5d5d) list_medium_line_t2_g3_g

0xb536,	// (0x000a2108) list_medium_line_t2_g3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_g3_t1

0xb536,	// (0x000a2108) list_medium_line_t2_g3_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x000a5d40) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x000a5d40) list_medium_line_t2_g3_t

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g1_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g1

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g2_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g2

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g3_ParamLimits

0xb4ee,	// (0x000a20c0) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000a5d5d) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000a5d5d) list_medium_line_t3_g3_g

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t1_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t1

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t2_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t2

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t3_ParamLimits

0xb536,	// (0x000a2108) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000a5d64) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000a5d64) list_medium_line_t3_g3_t

0xb52c,	// (0x000a20fe) list_medium_line_right_iconx2_g1

0xb52c,	// (0x000a20fe) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a5c5e) list_medium_line_right_iconx2_g

0xbc90,	// (0x000a2862) list_medium_line_right_iconx2_t1

0xb52c,	// (0x000a20fe) list_medium_line_t2_right_iconx2_g1

0xb52c,	// (0x000a20fe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x000a5c5e) list_medium_line_t2_right_iconx2_g

0xbc90,	// (0x000a2862) list_medium_line_t2_right_iconx2_t1

0xbc90,	// (0x000a2862) list_medium_line_t2_right_iconx2_t2

0x0001,

0xf9de,	// (0x000a65b0) list_medium_line_t2_right_iconx2_t

0xbc90,	// (0x000a2862) list_medium_line_x4_t4_t1

0xbc90,	// (0x000a2862) list_medium_line_x4_t4_t2

0xbc90,	// (0x000a2862) list_medium_line_x4_t4_t3

0xbc90,	// (0x000a2862) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x000a5e2d) list_medium_line_x4_t4_t

0x777f,	// (0x0009e351) tport_appsw_pane_ParamLimits

0x777f,	// (0x0009e351) tport_appsw_pane

0x7797,	// (0x0009e369) tport_contact_pane_ParamLimits

0x7797,	// (0x0009e369) tport_contact_pane

0x77af,	// (0x0009e381) tport_listscroll_pane_ParamLimits

0x77af,	// (0x0009e381) tport_listscroll_pane

0x77c9,	// (0x0009e39b) cell_tport_appsw_pane_ParamLimits

0x77c9,	// (0x0009e39b) cell_tport_appsw_pane

0xc263,	// (0x000a2e35) tport_appsw_pane_g1_ParamLimits

0xc263,	// (0x000a2e35) tport_appsw_pane_g1

0xab98,	// (0x000a176a) tport_contact_pane_g1

0xaba1,	// (0x000a1773) tport_contact_pane_t1

0xabaf,	// (0x000a1781) tport_contact_pane_t2

0x0001,

0x07bb,	// (0x0009738d) tport_contact_pane_t

0xabbd,	// (0x000a178f) list_tport_pane

0xabc6,	// (0x000a1798) scroll_pane_cp_030

0x7811,	// (0x0009e3e3) cell_tport_appsw_pane_g1

0x7821,	// (0x0009e3f3) cell_tport_appsw_pane_t1

0x782f,	// (0x0009e401) grid_highlight_pane_cp019

0x7837,	// (0x0009e409) list_tport_double_graphic_pane_ParamLimits

0x7837,	// (0x0009e409) list_tport_double_graphic_pane

0xb487,	// (0x000a2059) list_highlight_pane_cp023_ParamLimits

0xb487,	// (0x000a2059) list_highlight_pane_cp023

0x7844,	// (0x0009e416) list_tport_double_graphic_pane_g1_ParamLimits

0x7844,	// (0x0009e416) list_tport_double_graphic_pane_g1

0x7851,	// (0x0009e423) list_tport_double_graphic_pane_t1_ParamLimits

0x7851,	// (0x0009e423) list_tport_double_graphic_pane_t1

0x7866,	// (0x0009e438) list_tport_double_graphic_pane_t2_ParamLimits

0x7866,	// (0x0009e438) list_tport_double_graphic_pane_t2

0x0001,

0xfa00,	// (0x000a65d2) list_tport_double_graphic_pane_t_ParamLimits

0xfa00,	// (0x000a65d2) list_tport_double_graphic_pane_t

0xacbc,	// (0x000a188e) main_cale_note_pane

0x5155,	// (0x0009bd27) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5155,	// (0x0009bd27) cell_vitu2_function_top_wide_pane_cp01

0x71a1,	// (0x0009dd73) wait_bar_pane_cp05_ParamLimits

0xb487,	// (0x000a2059) listscroll_cmail_pane

0xabd7,	// (0x000a17a9) list_cmail_pane

0x7878,	// (0x0009e44a) list_cmail_body_pane

0x788e,	// (0x0009e460) list_single_cmail_header_caption_pane

0x78a5,	// (0x0009e477) list_single_cmail_header_detail_pane_ParamLimits

0x78a5,	// (0x0009e477) list_single_cmail_header_detail_pane

0xabee,	// (0x000a17c0) list_single_cmail_header_caption_pane_t1

0x78d3,	// (0x0009e4a5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x78d3,	// (0x0009e4a5) list_single_cmail_header_detail_pane_g1

0x78eb,	// (0x0009e4bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x78eb,	// (0x0009e4bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfa05,	// (0x000a65d7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfa05,	// (0x000a65d7) list_single_cmail_header_detail_pane_g

0x78f7,	// (0x0009e4c9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x78f7,	// (0x0009e4c9) list_single_cmail_header_detail_pane_t1

0x7935,	// (0x0009e507) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7935,	// (0x0009e507) list_single_cmail_header_editor_pane_bg

0xa6f9,	// (0x000a12cb) list_cmail_body_pane_g1

0xac12,	// (0x000a17e4) list_cmail_body_pane_t1

0x538e,	// (0x0009bf60) list_single_cmail_header_editor_pane_bg_g1

0xb9ab,	// (0x000a257d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x539e,	// (0x0009bf70) list_single_cmail_header_editor_pane_bg_g1_copy2

0x5396,	// (0x0009bf68) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5d34,	// (0x0009c906) list_single_cmail_header_editor_pane_bg_g1_copy4

0x53be,	// (0x0009bf90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x53ae,	// (0x0009bf80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x53b6,	// (0x0009bf88) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb98b,	// (0x000a255d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x794e,	// (0x0009e520) calenote_gesture_pane_ParamLimits

0x794e,	// (0x0009e520) calenote_gesture_pane

0x796e,	// (0x0009e540) calenote_window_pane_ParamLimits

0x796e,	// (0x0009e540) calenote_window_pane

0xac20,	// (0x000a17f2) popup_note_window_cp01

0x798a,	// (0x0009e55c) calenote_swipe_1_pane_ParamLimits

0x798a,	// (0x0009e55c) calenote_swipe_1_pane

0x73fa,	// (0x0009dfcc) calenote_swipe_2_pane_ParamLimits

0x73fa,	// (0x0009dfcc) calenote_swipe_2_pane

0xaa46,	// (0x000a1618) calenote_swipe_1_pane_g1_ParamLimits

0xaa46,	// (0x000a1618) calenote_swipe_1_pane_g1

0xac32,	// (0x000a1804) calenote_swipe_1_pane_g2_ParamLimits

0xac32,	// (0x000a1804) calenote_swipe_1_pane_g2

0x0001,

0x07d8,	// (0x000973aa) calenote_swipe_1_pane_g_ParamLimits

0x07d8,	// (0x000973aa) calenote_swipe_1_pane_g

0xac3e,	// (0x000a1810) calenote_swipe_1_pane_t1_ParamLimits

0xac3e,	// (0x000a1810) calenote_swipe_1_pane_t1

0xaa46,	// (0x000a1618) calenote_swipe_2_pane_g1_ParamLimits

0xaa46,	// (0x000a1618) calenote_swipe_2_pane_g1

0xac5d,	// (0x000a182f) calenote_swipe_2_pane_g2_ParamLimits

0xac5d,	// (0x000a182f) calenote_swipe_2_pane_g2

0x0001,

0x07dd,	// (0x000973af) calenote_swipe_2_pane_g_ParamLimits

0x07dd,	// (0x000973af) calenote_swipe_2_pane_g

0xac69,	// (0x000a183b) calenote_swipe_2_pane_t1_ParamLimits

0xac69,	// (0x000a183b) calenote_swipe_2_pane_t1

0xacbc,	// (0x000a188e) main_mup_navstr_pane

0x4099,	// (0x0009ac6b) main_mup3_pane_t7_ParamLimits

0x4099,	// (0x0009ac6b) main_mup3_pane_t7

0x9b62,	// (0x000a0734) main_mp4_pane_g6_ParamLimits

0x9b62,	// (0x000a0734) main_mp4_pane_g6

0x9d8c,	// (0x000a095e) main_image3_pane_t4_ParamLimits

0x9d8c,	// (0x000a095e) main_image3_pane_t4

0x799f,	// (0x0009e571) popup_navstr_preview_pane_ParamLimits

0x799f,	// (0x0009e571) popup_navstr_preview_pane

0x79b3,	// (0x0009e585) scroll_navstr_pane_ParamLimits

0x79b3,	// (0x0009e585) scroll_navstr_pane

0xacbc,	// (0x000a188e) bg_popup_preview_window_pane_cp04

0xac90,	// (0x000a1862) popup_navstr_preview_pane_t1

0x79c7,	// (0x0009e599) scroll_navstr_pane_g1_ParamLimits

0x79c7,	// (0x0009e599) scroll_navstr_pane_g1

0x79db,	// (0x0009e5ad) scroll_navstr_pane_t1_ParamLimits

0x79db,	// (0x0009e5ad) scroll_navstr_pane_t1

0xac29,	// (0x000a17fb) bg_button_pane_cp014

0xac29,	// (0x000a17fb) bg_button_pane_cp030

0x72d3,	// (0x0009dea5) list_double_fisheye_pane_g4_ParamLimits

0x72d3,	// (0x0009dea5) list_double_fisheye_pane_g4

0x72df,	// (0x0009deb1) list_double_fisheye_pane_g5_ParamLimits

0x72df,	// (0x0009deb1) list_double_fisheye_pane_g5

0x255e,	// (0x00099130) sp_fs_scroll_pane_cp03

0xab12,	// (0x000a16e4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xab1e,	// (0x000a16f0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xf9e3,	// (0x000a65b5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x74e6,	// (0x0009e0b8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xabe6,	// (0x000a17b8) sp_fs_scroll_pane_cp02

0xb6e3,	// (0x000a22b5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb6e3,	// (0x000a22b5) popup_sp_fs_calendar_preview_list_single_pane

0xacbc,	// (0x000a188e) main_cam6_pano_pane

0x9827,	// (0x000a03f9) main_mup3_pane_ParamLimits

0xacbc,	// (0x000a188e) main_phacti_pane

0x7074,	// (0x0009dc46) bg_button_pane_cp11

0x708e,	// (0x0009dc60) main_mobtv_info_pane_g2_ParamLimits

0x708e,	// (0x0009dc60) main_mobtv_info_pane_g2

0x0001,

0xf99e,	// (0x000a6570) main_mobtv_info_pane_g_ParamLimits

0xf99e,	// (0x000a6570) main_mobtv_info_pane_g

0xb536,	// (0x000a2108) sc_clock_pane_t5_ParamLimits

0xb536,	// (0x000a2108) sc_clock_pane_t5

0xc263,	// (0x000a2e35) main_radioblah_pane_g1_ParamLimits

0xc271,	// (0x000a2e43) main_radioblah_pane_t3_ParamLimits

0xc271,	// (0x000a2e43) main_radioblah_pane_t3

0xc271,	// (0x000a2e43) main_radioblah_pane_t4_ParamLimits

0xc271,	// (0x000a2e43) main_radioblah_pane_t4

0xb487,	// (0x000a2059) main_radioblah_text_pane_ParamLimits

0xb487,	// (0x000a2059) main_radioblah_text_pane

0xa93e,	// (0x000a1510) main_radioblah_info_pane_g1_ParamLimits

0xa982,	// (0x000a1554) main_radioblah_info_pane_t4_ParamLimits

0xa982,	// (0x000a1554) main_radioblah_info_pane_t4

0xb487,	// (0x000a2059) main_sp_fs_calendar_pane

0x79f2,	// (0x0009e5c4) main_phacti_pane_g1

0x79fa,	// (0x0009e5cc) phacti_note_pane_ParamLimits

0x79fa,	// (0x0009e5cc) phacti_note_pane

0xaca7,	// (0x000a1879) phacti_term_pane_ParamLimits

0xaca7,	// (0x000a1879) phacti_term_pane

0xb063,	// (0x000a1c35) phacti_note_pane_t1_ParamLimits

0xb063,	// (0x000a1c35) phacti_note_pane_t1

0xe204,	// (0x000a4dd6) phacti_term_pane_g1

0xe20c,	// (0x000a4dde) phacti_term_pane_t1_ParamLimits

0xe20c,	// (0x000a4dde) phacti_term_pane_t1

0xb07a,	// (0x000a1c4c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb082,	// (0x000a1c54) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfa11,	// (0x000a65e3) popup_sp_fs_calendar_preview_list_single_pane_g

0xb08a,	// (0x000a1c5c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb08a,	// (0x000a1c5c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb0a0,	// (0x000a1c72) aid_popup_sp_fs_bg_corner_pane

0xb52c,	// (0x000a20fe) popup_sp_fs_calendar_preview_bg_pane_g1

0xacbc,	// (0x000a188e) popup_sp_fs_calendar_preview_bg_pane

0xb0a8,	// (0x000a1c7a) popup_sp_fs_calendar_preview_list_pane

0xb0b0,	// (0x000a1c82) bg_main_sp_fs_cale_pane_ParamLimits

0xb0b0,	// (0x000a1c82) bg_main_sp_fs_cale_pane

0xb0c8,	// (0x000a1c9a) listscroll_cale_mrui_pane_ParamLimits

0xb0c8,	// (0x000a1c9a) listscroll_cale_mrui_pane

0xdc44,	// (0x000a4816) listscroll_sp_fs_schedule_track_pane

0xe23f,	// (0x000a4e11) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe23f,	// (0x000a4e11) main_sp_fs_ctrlbar_pane_cp01

0xdc44,	// (0x000a4816) main_sp_fs_ribbon_pane

0xe255,	// (0x000a4e27) popup_sp_fs_cale_preview_window

0x7a1a,	// (0x0009e5ec) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7a1a,	// (0x0009e5ec) list_single_sp_fs_schedule_track_pane

0xb02a,	// (0x000a1bfc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb02a,	// (0x000a1bfc) bg_sp_fs_highlight_list_pane_cp03

0xb01e,	// (0x000a1bf0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb01e,	// (0x000a1bf0) list_single_sp_fs_schedule_track_pane_g1

0xb01e,	// (0x000a1bf0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb01e,	// (0x000a1bf0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfa16,	// (0x000a65e8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfa16,	// (0x000a65e8) list_single_sp_fs_schedule_track_pane_g

0x7a26,	// (0x0009e5f8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7a26,	// (0x0009e5f8) list_single_sp_fs_schedule_track_pane_t1

0x7a38,	// (0x0009e60a) sp_fs_schedule_track_pane_ParamLimits

0x7a38,	// (0x0009e60a) sp_fs_schedule_track_pane

0xdc4c,	// (0x000a481e) sp_fs_schedule_track_pane_g1

0xdc4c,	// (0x000a481e) sp_fs_schedule_track_pane_g2

0xdc4c,	// (0x000a481e) sp_fs_schedule_track_pane_g3

0xdc4c,	// (0x000a481e) sp_fs_schedule_track_pane_g4

0xdc4c,	// (0x000a481e) sp_fs_schedule_track_pane_g5

0x0004,

0x07f1,	// (0x000973c3) sp_fs_schedule_track_pane_g

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g1

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g2

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g3

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g4

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g5

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g6

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g7

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g8

0xdc4c,	// (0x000a481e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x07fc,	// (0x000973ce) bg_sp_fs_schedule_viewer_highlight_g

0xdc44,	// (0x000a4816) bg_main_sp_fs_ribbon_pane

0xdc4c,	// (0x000a481e) main_sp_fs_ribbon_pane_g1

0xb0e0,	// (0x000a1cb2) main_sp_fs_ribbon_pane_t1

0xb0e0,	// (0x000a1cb2) main_sp_fs_ribbon_pane_t2

0xb0e0,	// (0x000a1cb2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfa1b,	// (0x000a65ed) main_sp_fs_ribbon_pane_t

0xdc44,	// (0x000a4816) main_sp_fs_ribbon_scheduler_pane

0xdc4c,	// (0x000a481e) bg_main_sp_fs_ribbon_pane_g1

0xdc4c,	// (0x000a481e) bg_main_sp_fs_ribbon_pane_g2

0xdc4c,	// (0x000a481e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0258,	// (0x00096e2a) bg_main_sp_fs_ribbon_pane_g

0xdc4c,	// (0x000a481e) main_sp_fs_ribbon_scheduler_pane_g1

0xdc4c,	// (0x000a481e) main_sp_fs_ribbon_scheduler_pane_g2

0xdc4c,	// (0x000a481e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0258,	// (0x00096e2a) main_sp_fs_ribbon_scheduler_pane_g

0xb0ee,	// (0x000a1cc0) list_cale_mrui_pane

0x7a44,	// (0x0009e616) sp_fs_scroll_pane_cp07_ParamLimits

0x7a44,	// (0x0009e616) sp_fs_scroll_pane_cp07

0xb02a,	// (0x000a1bfc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb02a,	// (0x000a1bfc) bg_sp_fs_schedule_viewer_highlight

0xdc44,	// (0x000a4816) list_single_sp_fs_schedule_track_pane_cp01

0xdc44,	// (0x000a4816) list_sp_fs_schedule_track_pane

0xb0fb,	// (0x000a1ccd) sp_fs_scroll_pane_cp06_ParamLimits

0xb0fb,	// (0x000a1ccd) sp_fs_scroll_pane_cp06

0xb52c,	// (0x000a20fe) bgmain_sp_fs_calendar_pane_g1

0x7a60,	// (0x0009e632) list_single_cale_mrui_pane_ParamLimits

0x7a60,	// (0x0009e632) list_single_cale_mrui_pane

0xe267,	// (0x000a4e39) list_single_cale_mrui_row_pane_ParamLimits

0xe267,	// (0x000a4e39) list_single_cale_mrui_row_pane

0xe274,	// (0x000a4e46) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe274,	// (0x000a4e46) list_single_cale_mrui_row_pane_g1

0xe2ac,	// (0x000a4e7e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe2ac,	// (0x000a4e7e) list_single_cale_mrui_row_pane_t1

0x7a81,	// (0x0009e653) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7a81,	// (0x0009e653) list_single_cale_mrui_row_pane_t2

0xe2be,	// (0x000a4e90) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe2be,	// (0x000a4e90) list_single_cale_mrui_row_pane_t3

0xe2ed,	// (0x000a4ebf) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe2ed,	// (0x000a4ebf) list_single_cale_mrui_row_pane_t4

0x0003,

0xfa29,	// (0x000a65fb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfa29,	// (0x000a65fb) list_single_cale_mrui_row_pane_t

0x7ae9,	// (0x0009e6bb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7ae9,	// (0x0009e6bb) list_single_cmail_header_editor_pane_bg_cp01

0x7b17,	// (0x0009e6e9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7b17,	// (0x0009e6e9) list_single_cmail_header_editor_pane_bg_cp02

0xb11c,	// (0x000a1cee) main_radioblah_text_pane_t1_ParamLimits

0xb11c,	// (0x000a1cee) main_radioblah_text_pane_t1

0xb136,	// (0x000a1d08) cam6_indi_pane_cp01

0xb13e,	// (0x000a1d10) cam6_mode_pane_cp01

0xb146,	// (0x000a1d18) cam6_pano_pane

0xe31c,	// (0x000a4eee) cam6_zoom_pane_cp01

0xe324,	// (0x000a4ef6) cam6_pano_image_pane

0xe32f,	// (0x000a4f01) cam6_pano_pane_g1

0xa6f9,	// (0x000a12cb) cam6_pano_pane_g2

0xe338,	// (0x000a4f0a) cam6_pano_pane_g3

0xe341,	// (0x000a4f13) cam6_pano_pane_g4

0xdede,	// (0x000a4ab0) cam6_pano_pane_g5

0xe34a,	// (0x000a4f1c) cam6_pano_pane_g6

0xe354,	// (0x000a4f26) cam6_pano_pane_g7

0xe35c,	// (0x000a4f2e) cam6_pano_pane_g8

0xe365,	// (0x000a4f37) cam6_pano_pane_g9

0x0008,

0x0826,	// (0x000973f8) cam6_pano_pane_g

0xacbc,	// (0x000a188e) main_browser_tag_pane

0xac88,	// (0x000a185a) grid_navstr_albumart_pane

0xe370,	// (0x000a4f42) cell_navstr_albumart_pane_ParamLimits

0xe370,	// (0x000a4f42) cell_navstr_albumart_pane

0xe390,	// (0x000a4f62) cell_navstr_albumart_pane_g1

0xe398,	// (0x000a4f6a) cell_navstr_albumart_pane_g2

0xe3a0,	// (0x000a4f72) cell_navstr_albumart_pane_g3

0xe3a8,	// (0x000a4f7a) cell_navstr_albumart_pane_g4

0x0003,

0x0839,	// (0x0009740b) cell_navstr_albumart_pane_g

0x7b37,	// (0x0009e709) bt_list_pane_ParamLimits

0x7b37,	// (0x0009e709) bt_list_pane

0x7b4b,	// (0x0009e71d) bt_list_pane_t1

0x7b5a,	// (0x0009e72c) bt_list_pane_t2

0x0001,

0xfa32,	// (0x000a6604) bt_list_pane_t

0xacbc,	// (0x000a188e) main_cale_prevew_pane

0x7b69,	// (0x0009e73b) popup_cale_preview_window_ParamLimits

0x7b69,	// (0x0009e73b) popup_cale_preview_window

0xb487,	// (0x000a2059) bg_popup_preview_window_pane_cp05_ParamLimits

0xb487,	// (0x000a2059) bg_popup_preview_window_pane_cp05

0xe3b0,	// (0x000a4f82) list_cale_preview_pane_ParamLimits

0xe3b0,	// (0x000a4f82) list_cale_preview_pane

0x7b82,	// (0x0009e754) list_double_cale_preview_pane_ParamLimits

0x7b82,	// (0x0009e754) list_double_cale_preview_pane

0x53c6,	// (0x0009bf98) list_single_cale_preview_pane_ParamLimits

0x53c6,	// (0x0009bf98) list_single_cale_preview_pane

0x7b94,	// (0x0009e766) list_single_cale_preview_pane_g1

0x7b9c,	// (0x0009e76e) list_single_cale_preview_pane_t1_ParamLimits

0x7b9c,	// (0x0009e76e) list_single_cale_preview_pane_t1

0x7bb1,	// (0x0009e783) list_double_cale_preview_pane_g1

0x7bb9,	// (0x0009e78b) list_double_cale_preview_pane_t1_ParamLimits

0x7bb9,	// (0x0009e78b) list_double_cale_preview_pane_t1

0x7bce,	// (0x0009e7a0) list_double_cale_preview_pane_t2_ParamLimits

0x7bce,	// (0x0009e7a0) list_double_cale_preview_pane_t2

0x0001,

0xfa37,	// (0x000a6609) list_double_cale_preview_pane_t_ParamLimits

0xfa37,	// (0x000a6609) list_double_cale_preview_pane_t

0xacbc,	// (0x000a188e) main_ezdial_pane

0xb487,	// (0x000a2059) main_sp_fs_email_pane_ParamLimits

0x7456,	// (0x0009e028) cmail_ddmenu_btn01_pane_ParamLimits

0x7456,	// (0x0009e028) cmail_ddmenu_btn01_pane

0x7469,	// (0x0009e03b) cmail_ddmenu_btn02_pane_ParamLimits

0x7469,	// (0x0009e03b) cmail_ddmenu_btn02_pane

0x748c,	// (0x0009e05e) cmail_ddmenu_btn03_pane_ParamLimits

0x748c,	// (0x0009e05e) cmail_ddmenu_btn03_pane

0x7525,	// (0x0009e0f7) main_sp_fs_ctrlbar_pane_ParamLimits

0x7549,	// (0x0009e11b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7878,	// (0x0009e44a) list_cmail_body_pane_ParamLimits

0xabfc,	// (0x000a17ce) bg_button_pane_cp12

0xac05,	// (0x000a17d7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xac05,	// (0x000a17d7) list_single_cmail_header_detail_pane_g3

0xe1e0,	// (0x000a4db2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe1e0,	// (0x000a4db2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfa0c,	// (0x000a65de) list_single_cmail_header_detail_pane_t_ParamLimits

0xfa0c,	// (0x000a65de) list_single_cmail_header_detail_pane_t

0xe221,	// (0x000a4df3) phacti_term_pane_t2_ParamLimits

0xe221,	// (0x000a4df3) phacti_term_pane_t2

0x0001,

0x07e2,	// (0x000973b4) phacti_term_pane_t_ParamLimits

0x07e2,	// (0x000973b4) phacti_term_pane_t

0xe3bc,	// (0x000a4f8e) aid_size_list_single_double

0x7be6,	// (0x0009e7b8) popup_ezdial_listscroll_window

0xe3c8,	// (0x000a4f9a) popup_number_entry_window_cp01

0xb792,	// (0x000a2364) bg_popup_call_pane_cp09

0xe3d5,	// (0x000a4fa7) ezdial_list_pane

0xe3dd,	// (0x000a4faf) scroll_pane_cp23

0xc285,	// (0x000a2e57) bg_button_pane_cp028_ParamLimits

0xc285,	// (0x000a2e57) bg_button_pane_cp028

0x7bfd,	// (0x0009e7cf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7bfd,	// (0x0009e7cf) cmail_ddmenu_btn01_pane_g1

0x7c09,	// (0x0009e7db) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7c09,	// (0x0009e7db) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfa3c,	// (0x000a660e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfa3c,	// (0x000a660e) cmail_ddmenu_btn01_pane_g

0xe3e5,	// (0x000a4fb7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe3e5,	// (0x000a4fb7) cmail_ddmenu_btn01_pane_t1

0xc285,	// (0x000a2e57) bg_button_pane_cp029_ParamLimits

0xc285,	// (0x000a2e57) bg_button_pane_cp029

0x7c15,	// (0x0009e7e7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7c15,	// (0x0009e7e7) cmail_ddmenu_btn02_pane_g1

0x7c2d,	// (0x0009e7ff) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7c2d,	// (0x0009e7ff) cmail_ddmenu_btn02_pane_t1

0xb487,	// (0x000a2059) bg_button_pane_cp031_ParamLimits

0xb487,	// (0x000a2059) bg_button_pane_cp031

0x7c15,	// (0x0009e7e7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7c15,	// (0x0009e7e7) cmail_ddmenu_btn03_pane_g1

0x7c2d,	// (0x0009e7ff) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7c2d,	// (0x0009e7ff) cmail_ddmenu_btn03_pane_t1

0xb536,	// (0x000a2108) cell_dialer2_keypad_pane_t1_ParamLimits

0xdf1c,	// (0x000a4aee) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xdf1c,	// (0x000a4aee) cell_dialer2_keypad_pane_t1_copy1

0x6e97,	// (0x0009da69) ncimui_group_button_pane

0xb487,	// (0x000a2059) main_sp_fs_calendar_pane_ParamLimits

0x788e,	// (0x0009e460) list_single_cmail_header_caption_pane_ParamLimits

0xe236,	// (0x000a4e08) aid_recal_txt_sm_pane

0xacbc,	// (0x000a188e) mian_recal_day_pane

0xe255,	// (0x000a4e27) popup_sp_fs_cale_preview_window_ParamLimits

0xe3fa,	// (0x000a4fcc) list_recal_day_pane

0xe43c,	// (0x000a500e) list_single_recal_day_pane_ParamLimits

0xe43c,	// (0x000a500e) list_single_recal_day_pane

0xe44e,	// (0x000a5020) list_single_recal_day_pane_g1_ParamLimits

0xe44e,	// (0x000a5020) list_single_recal_day_pane_g1

0xe45a,	// (0x000a502c) list_single_recal_day_pane_g2_ParamLimits

0xe45a,	// (0x000a502c) list_single_recal_day_pane_g2

0xe466,	// (0x000a5038) list_single_recal_day_pane_g3_ParamLimits

0xe466,	// (0x000a5038) list_single_recal_day_pane_g3

0x7c51,	// (0x0009e823) list_single_recal_day_pane_g4_ParamLimits

0x7c51,	// (0x0009e823) list_single_recal_day_pane_g4

0xe472,	// (0x000a5044) list_single_recal_day_pane_g5_ParamLimits

0xe472,	// (0x000a5044) list_single_recal_day_pane_g5

0xe47e,	// (0x000a5050) list_single_recal_day_pane_g6_ParamLimits

0xe47e,	// (0x000a5050) list_single_recal_day_pane_g6

0x0004,

0xfa4b,	// (0x000a661d) list_single_recal_day_pane_g_ParamLimits

0xfa4b,	// (0x000a661d) list_single_recal_day_pane_g

0xe492,	// (0x000a5064) list_single_recal_day_pane_t1

0xe4a4,	// (0x000a5076) list_single_recal_day_pane_t2

0x0001,

0x0866,	// (0x00097438) list_single_recal_day_pane_t

0x7c69,	// (0x0009e83b) ncimui_query_button_pane_ParamLimits

0x7c69,	// (0x0009e83b) ncimui_query_button_pane

0x7c79,	// (0x0009e84b) ncimui_query_button_pane_t1_ParamLimits

0x7c79,	// (0x0009e84b) ncimui_query_button_pane_t1

0xe4b6,	// (0x000a5088) ncimui_query_button_pane_t2_ParamLimits

0xe4b6,	// (0x000a5088) ncimui_query_button_pane_t2

0x0001,

0xfa56,	// (0x000a6628) ncimui_query_button_pane_t_ParamLimits

0xfa56,	// (0x000a6628) ncimui_query_button_pane_t

0x7c8c,	// (0x0009e85e) query_button_pane_ParamLimits

0x7c8c,	// (0x0009e85e) query_button_pane

0xacbc,	// (0x000a188e) bg_button_pane_cp0028

0xe4c9,	// (0x000a509b) query_button_pane_t1

0x33c8,	// (0x00099f9a) main_tport_pane_ParamLimits

0x773c,	// (0x0009e30e) bg_popup_window_pane_cp01_ParamLimits

0x773c,	// (0x0009e30e) bg_popup_window_pane_cp01

0x7757,	// (0x0009e329) heading_pane_cp08_ParamLimits

0x7757,	// (0x0009e329) heading_pane_cp08

0x776a,	// (0x0009e33c) heading_pane_cp07_ParamLimits

0x776a,	// (0x0009e33c) heading_pane_cp07

0x7811,	// (0x0009e3e3) cell_tport_appsw_pane_g2

0x0002,

0xf9f9,	// (0x000a65cb) cell_tport_appsw_pane_g

0xc2c7,	// (0x000a2e99) input_candi_list_open_g1

0xbb2f,	// (0x000a2701) list_cale_time_pane_g6_ParamLimits

0xbb2f,	// (0x000a2701) list_cale_time_pane_g6

0x39e3,	// (0x0009a5b5) aid_size_touch_calib_1_ParamLimits

0x39e3,	// (0x0009a5b5) aid_size_touch_calib_1

0x39f5,	// (0x0009a5c7) aid_size_touch_calib_2_ParamLimits

0x39f5,	// (0x0009a5c7) aid_size_touch_calib_2

0x3a0d,	// (0x0009a5df) aid_size_touch_calib_3_ParamLimits

0x3a0d,	// (0x0009a5df) aid_size_touch_calib_3

0x3a2b,	// (0x0009a5fd) aid_size_touch_calib_4_ParamLimits

0x3a2b,	// (0x0009a5fd) aid_size_touch_calib_4

0x3a43,	// (0x0009a615) main_touch_calib_button_group_pane_ParamLimits

0x3a43,	// (0x0009a615) main_touch_calib_button_group_pane

0x3a5b,	// (0x0009a62d) main_touch_calib_pane_g1_ParamLimits

0x3a6d,	// (0x0009a63f) main_touch_calib_pane_g2_ParamLimits

0x3a7f,	// (0x0009a651) main_touch_calib_pane_g3_ParamLimits

0x3a91,	// (0x0009a663) main_touch_calib_pane_g4_ParamLimits

0xf573,	// (0x000a6145) main_touch_calib_pane_g_ParamLimits

0x3aa3,	// (0x0009a675) main_touch_calib_pane_t1_ParamLimits

0x3abd,	// (0x0009a68f) main_touch_calib_pane_t2_ParamLimits

0x3ad7,	// (0x0009a6a9) main_touch_calib_pane_t3_ParamLimits

0x3aeb,	// (0x0009a6bd) main_touch_calib_pane_t4_ParamLimits

0x3aff,	// (0x0009a6d1) main_touch_calib_pane_t5_ParamLimits

0xf57c,	// (0x000a614e) main_touch_calib_pane_t_ParamLimits

0xdcac,	// (0x000a487e) list_single_fp_cale_pane_g3_ParamLimits

0xdcac,	// (0x000a487e) list_single_fp_cale_pane_g3

0x9827,	// (0x000a03f9) bg_button_pane_cp012_ParamLimits

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp03_ParamLimits

0x5cf0,	// (0x0009c8c2) cell_vitu2_function_top_pane_g1_ParamLimits

0x9827,	// (0x000a03f9) bg_vkb2_func_pane_cp04_ParamLimits

0x6e22,	// (0x0009d9f4) main_ncimui_button_group_pane_ParamLimits

0x6e22,	// (0x0009d9f4) main_ncimui_button_group_pane

0x6e82,	// (0x0009da54) main_ncimui_pane_t3_ParamLimits

0x6e82,	// (0x0009da54) main_ncimui_pane_t3

0xac9e,	// (0x000a1870) phacti_button_group_pane

0xe3bc,	// (0x000a4f8e) aid_size_list_single_double_ParamLimits

0x7be6,	// (0x0009e7b8) popup_ezdial_listscroll_window_ParamLimits

0xe3c8,	// (0x000a4f9a) popup_number_entry_window_cp01_ParamLimits

0x7c9f,	// (0x0009e871) phacti_button_pane_ParamLimits

0x7c9f,	// (0x0009e871) phacti_button_pane

0xacbc,	// (0x000a188e) bg_button_pane_cp14

0xe4d7,	// (0x000a50a9) phacti_button_pane_t1

0x7cb0,	// (0x0009e882) main_touch_calib_button_pane_ParamLimits

0x7cb0,	// (0x0009e882) main_touch_calib_button_pane

0xb58a,	// (0x000a215c) bg_button_pane_cp18_ParamLimits

0xb58a,	// (0x000a215c) bg_button_pane_cp18

0xe4e5,	// (0x000a50b7) main_touch_calib_button_pane_t1_ParamLimits

0xe4e5,	// (0x000a50b7) main_touch_calib_button_pane_t1

0xe4fb,	// (0x000a50cd) main_touch_calib_button_pane_t2_ParamLimits

0xe4fb,	// (0x000a50cd) main_touch_calib_button_pane_t2

0x0001,

0x0870,	// (0x00097442) main_touch_calib_button_pane_t_ParamLimits

0x0870,	// (0x00097442) main_touch_calib_button_pane_t

0xacbc,	// (0x000a188e) cell_ncimui_button_pane

0xacbc,	// (0x000a188e) bg_button_pane_cp032

0xe519,	// (0x000a50eb) cell_ncimui_button_pane_t1

0x9d6c,	// (0x000a093e) image3_infobar_pane_ParamLimits

0x9d6c,	// (0x000a093e) image3_infobar_pane

0x71f4,	// (0x0009ddc6) fs_bigclock_status_pane_ParamLimits

0x71f4,	// (0x0009ddc6) fs_bigclock_status_pane

0x7201,	// (0x0009ddd3) main_fs_bigclock_clock_pane_ParamLimits

0x7201,	// (0x0009ddd3) main_fs_bigclock_clock_pane

0x721f,	// (0x0009ddf1) main_fs_bigclock_indi_pane_ParamLimits

0x721f,	// (0x0009ddf1) main_fs_bigclock_indi_pane

0x7251,	// (0x0009de23) main_fs_bigclock_swipe_pane_ParamLimits

0x7251,	// (0x0009de23) main_fs_bigclock_swipe_pane

0xacbc,	// (0x000a188e) main_fs_clock_dumped_data

0xa806,	// (0x000a13d8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa806,	// (0x000a13d8) list_single_fs_bigclock_indicator_pane_g1

0xa822,	// (0x000a13f4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xa822,	// (0x000a13f4) list_single_fs_bigclock_indicator_pane_g2

0xa83c,	// (0x000a140e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xa83c,	// (0x000a140e) list_single_fs_bigclock_indicator_pane_g3

0xa856,	// (0x000a1428) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xa856,	// (0x000a1428) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0714,	// (0x000972e6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0714,	// (0x000972e6) list_single_fs_bigclock_indicator_pane_g

0xa881,	// (0x000a1453) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xa881,	// (0x000a1453) list_single_fs_bigclock_indicator_pane_t1

0xa8a9,	// (0x000a147b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xa8a9,	// (0x000a147b) list_single_fs_bigclock_indicator_pane_t2

0xa8d1,	// (0x000a14a3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xa8d1,	// (0x000a14a3) list_single_fs_bigclock_indicator_pane_t3

0xa8f9,	// (0x000a14cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xa8f9,	// (0x000a14cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x071f,	// (0x000972f1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x071f,	// (0x000972f1) list_single_fs_bigclock_indicator_pane_t

0xe527,	// (0x000a50f9) image3_infobar_fav_pane_ParamLimits

0xe527,	// (0x000a50f9) image3_infobar_fav_pane

0xe537,	// (0x000a5109) image3_infobar_loc_pane_ParamLimits

0xe537,	// (0x000a5109) image3_infobar_loc_pane

0xe54b,	// (0x000a511d) image3_infobar_time_pane_ParamLimits

0xe54b,	// (0x000a511d) image3_infobar_time_pane

0xb52c,	// (0x000a20fe) image3_infobar_time_pane_g1

0xe55b,	// (0x000a512d) image3_infobar_time_pane_t1

0xb52c,	// (0x000a20fe) image3_infobar_loc_pane_g1

0xe569,	// (0x000a513b) image3_infobar_loc_pane_g2

0x0001,

0x0875,	// (0x00097447) image3_infobar_loc_pane_g

0xe571,	// (0x000a5143) image3_infobar_loc_pane_t1

0xb52c,	// (0x000a20fe) image3_infobar_fav_pane_g1

0xe57f,	// (0x000a5151) image3_infobar_fav_pane_g2

0x0001,

0x087a,	// (0x0009744c) image3_infobar_fav_pane_g

0xe587,	// (0x000a5159) fs_bigclock_status_battery_pane

0xe590,	// (0x000a5162) fs_bigclock_status_signal_pane

0xe599,	// (0x000a516b) fs_bigclock_status_title_pane

0xe5a2,	// (0x000a5174) fs_bigclock_status_signal_pane_g1

0xe5ab,	// (0x000a517d) fs_bigclock_status_signal_pane_g2

0x0001,

0x087f,	// (0x00097451) fs_bigclock_status_signal_pane_g

0xe5b3,	// (0x000a5185) fs_bigclock_status_battery_pane_g1

0xe5bc,	// (0x000a518e) fs_bigclock_status_battery_pane_g2

0x0001,

0x0884,	// (0x00097456) fs_bigclock_status_battery_pane_g

0xe5c4,	// (0x000a5196) fs_bigclock_status_title_pane_t1

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g1

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g2

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g3

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g4

0x0003,

0xfa5b,	// (0x000a662d) main_fs_bigclock_clock_pane_g

0x7cd8,	// (0x0009e8aa) main_fs_bigclock_clock_pane_t1

0x7cf2,	// (0x0009e8c4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfa64,	// (0x000a6636) main_fs_bigclock_clock_pane_t

0xe5d2,	// (0x000a51a4) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe5d2,	// (0x000a51a4) list_single_fs_bigclock_indicator_pane

0xe5e3,	// (0x000a51b5) list_single_fs_bigclock_pane_ParamLimits

0xe5e3,	// (0x000a51b5) list_single_fs_bigclock_pane

0xe609,	// (0x000a51db) main_fs_bigclock_indicator_pane_t1

0xe618,	// (0x000a51ea) list_single_fs_bigclock_pane_g1

0xe620,	// (0x000a51f2) list_single_fs_bigclock_pane_t1

0xb52c,	// (0x000a20fe) main_fs_bigclock_swipe_pane_g1

0xe663,	// (0x000a5235) main_fs_bigclock_swipe_pane_g2

0x0001,

0x08a3,	// (0x00097475) main_fs_bigclock_swipe_pane_g

0xe66b,	// (0x000a523d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe66b,	// (0x000a523d) main_fs_bigclock_swipe_pane_t1

0x256a,	// (0x0009913c) call_type_pane_ParamLimits

0xacbc,	// (0x000a188e) main_btmg_pane

0xe2a0,	// (0x000a4e72) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2a0,	// (0x000a4e72) list_single_cale_mrui_row_pane_g2

0x0002,

0xfa22,	// (0x000a65f4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfa22,	// (0x000a65f4) list_single_cale_mrui_row_pane_g

0xe423,	// (0x000a4ff5) list_recal_vselct_arw_lo_pane

0xe42b,	// (0x000a4ffd) list_recal_vselct_arw_up_pane

0xe433,	// (0x000a5005) list_recal_vselct_pane

0x7d4c,	// (0x0009e91e) btmg_button_pane

0x7d56,	// (0x0009e928) main_btmg_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp044

0xe688,	// (0x000a525a) btmg_button_pane_t1

0xd49b,	// (0x000a406d) aid_listscroll_gen

0xb487,	// (0x000a2059) main_cntbar_detail_pane

0xabcf,	// (0x000a17a1) list_cmail_folder_pane

0x255e,	// (0x00099130) sp_fs_scroll_pane_cp03_ParamLimits

0x7d60,	// (0x0009e932) list_single_fs_dyc_pane_cp01_ParamLimits

0x7d60,	// (0x0009e932) list_single_fs_dyc_pane_cp01

0xe696,	// (0x000a5268) aid_size_cmail_indent

0xe69f,	// (0x000a5271) list_single_dyc_row_pane_cp01

0x7da8,	// (0x0009e97a) cntbar_detail_list_pane_ParamLimits

0x7da8,	// (0x0009e97a) cntbar_detail_list_pane

0x7df4,	// (0x0009e9c6) main_cntbar_detail_cont_pane_ParamLimits

0x7df4,	// (0x0009e9c6) main_cntbar_detail_cont_pane

0x255e,	// (0x00099130) scroll_pane_cp032_ParamLimits

0x255e,	// (0x00099130) scroll_pane_cp032

0x7e08,	// (0x0009e9da) cntbar_detail_list_event_pane_ParamLimits

0x7e08,	// (0x0009e9da) cntbar_detail_list_event_pane

0x7db8,	// (0x0009e98a) cntbar_detail_list_shct_pane

0xba02,	// (0x000a25d4) aid_list_gen

0xe6a8,	// (0x000a527a) aid_scroll

0xe6b1,	// (0x000a5283) aid_size_touch_scroll_bar

0x729e,	// (0x0009de70) aid_list_double

0x7e18,	// (0x0009e9ea) aid_list_single

0xe6ba,	// (0x000a528c) aid_list_single_lg

0x7e21,	// (0x0009e9f3) aid_list_z_g_a_sm

0x7e29,	// (0x0009e9fb) aid_list_z_g_d

0x7e31,	// (0x0009ea03) aid_txt_z_prm

0x7e3f,	// (0x0009ea11) aid_txt_z_prm_cp01

0x7e4d,	// (0x0009ea1f) aid_txt_z_sec

0x7e5b,	// (0x0009ea2d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7e5b,	// (0x0009ea2d) main_cntbar_detail_cont_pane_g1

0x7e6f,	// (0x0009ea41) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7e6f,	// (0x0009ea41) main_cntbar_detail_cont_pane_g2

0x0001,

0xfa70,	// (0x000a6642) main_cntbar_detail_cont_pane_g_ParamLimits

0xfa70,	// (0x000a6642) main_cntbar_detail_cont_pane_g

0xe6c3,	// (0x000a5295) main_cntbar_detail_cont_pane_t1

0xe6d1,	// (0x000a52a3) main_cntbar_detail_cont_pane_t2

0xe6df,	// (0x000a52b1) main_cntbar_detail_cont_pane_t3

0x0002,

0x08ad,	// (0x0009747f) main_cntbar_detail_cont_pane_t

0x7e7f,	// (0x0009ea51) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7e7f,	// (0x0009ea51) cell_cntbar_detail_list_shct_pane

0xe6ed,	// (0x000a52bf) cntbar_detail_list_shct_pane_g1

0xe6f6,	// (0x000a52c8) cntbar_detail_list_shct_pane_g2

0x0001,

0x08b4,	// (0x00097486) cntbar_detail_list_shct_pane_g

0x7e93,	// (0x0009ea65) cntbar_detail_list_event_pane_g1_ParamLimits

0x7e93,	// (0x0009ea65) cntbar_detail_list_event_pane_g1

0x7e9f,	// (0x0009ea71) cntbar_detail_list_event_pane_g2_ParamLimits

0x7e9f,	// (0x0009ea71) cntbar_detail_list_event_pane_g2

0x0005,

0xfa75,	// (0x000a6647) cntbar_detail_list_event_pane_g_ParamLimits

0xfa75,	// (0x000a6647) cntbar_detail_list_event_pane_g

0x7f0b,	// (0x0009eadd) cntbar_detail_list_event_pane_t1_ParamLimits

0x7f0b,	// (0x0009eadd) cntbar_detail_list_event_pane_t1

0x7f20,	// (0x0009eaf2) cntbar_detail_list_event_pane_t2_ParamLimits

0x7f20,	// (0x0009eaf2) cntbar_detail_list_event_pane_t2

0x0002,

0xfa82,	// (0x000a6654) cntbar_detail_list_event_pane_t_ParamLimits

0xfa82,	// (0x000a6654) cntbar_detail_list_event_pane_t

0xb52c,	// (0x000a20fe) cell_cntbar_detail_list_shct_pane_g1

0xc10b,	// (0x000a2cdd) navi_pane_mv_g3

0xb487,	// (0x000a2059) main_cntbar_detail_pane_ParamLimits

0xacbc,	// (0x000a188e) main_notif_wgt_pane

0x9aec,	// (0x000a06be) aid_tch_main_mp4_pane_g4

0x9d64,	// (0x000a0936) popup_slider_window_cp02

0xe419,	// (0x000a4feb) list_recal_day_event_pane

0x7d76,	// (0x0009e948) cntbar_detail_btn_pane_ParamLimits

0x7d76,	// (0x0009e948) cntbar_detail_btn_pane

0x7d8f,	// (0x0009e961) cntbar_detail_btn_pane_cp01_ParamLimits

0x7d8f,	// (0x0009e961) cntbar_detail_btn_pane_cp01

0x7db8,	// (0x0009e98a) cntbar_detail_list_shct_pane_ParamLimits

0x7dc8,	// (0x0009e99a) cntbar_detail_pane_g1_ParamLimits

0x7dc8,	// (0x0009e99a) cntbar_detail_pane_g1

0x7dd8,	// (0x0009e9aa) cntbar_detail_pane_t1_ParamLimits

0x7dd8,	// (0x0009e9aa) cntbar_detail_pane_t1

0x7eab,	// (0x0009ea7d) cntbar_detail_list_event_pane_g3_ParamLimits

0x7eab,	// (0x0009ea7d) cntbar_detail_list_event_pane_g3

0x7ec3,	// (0x0009ea95) cntbar_detail_list_event_pane_g4_ParamLimits

0x7ec3,	// (0x0009ea95) cntbar_detail_list_event_pane_g4

0x7edb,	// (0x0009eaad) cntbar_detail_list_event_pane_g5_ParamLimits

0x7edb,	// (0x0009eaad) cntbar_detail_list_event_pane_g5

0x7ef3,	// (0x0009eac5) cntbar_detail_list_event_pane_g6_ParamLimits

0x7ef3,	// (0x0009eac5) cntbar_detail_list_event_pane_g6

0x7f35,	// (0x0009eb07) cntbar_detail_list_event_pane_t3_ParamLimits

0x7f35,	// (0x0009eb07) cntbar_detail_list_event_pane_t3

0x7f47,	// (0x0009eb19) popup_notif_wgt_window_ParamLimits

0x7f47,	// (0x0009eb19) popup_notif_wgt_window

0x7f60,	// (0x0009eb32) popup_submenu_window_cp01_ParamLimits

0x7f60,	// (0x0009eb32) popup_submenu_window_cp01

0xb792,	// (0x000a2364) bg_popup_window_pane_cp10

0xe6ff,	// (0x000a52d1) listscroll_notif_wgt_pane

0xe711,	// (0x000a52e3) list_notif_wgt_window

0xe71a,	// (0x000a52ec) scroll_pane_cp033

0x7f72,	// (0x0009eb44) list_notif_wgt_row_pane_ParamLimits

0x7f72,	// (0x0009eb44) list_notif_wgt_row_pane

0xe723,	// (0x000a52f5) aid_size_list_notif_wgt_del

0xe730,	// (0x000a5302) list_notif_wgt_row_pane_g1

0xe73c,	// (0x000a530e) list_notif_wgt_row_pane_g2

0xe74b,	// (0x000a531d) list_notif_wgt_row_pane_g3

0x0002,

0x08cd,	// (0x0009749f) list_notif_wgt_row_pane_g

0xe758,	// (0x000a532a) list_notif_wgt_row_pane_t1

0xe76e,	// (0x000a5340) list_notif_wgt_row_pane_t2

0xe780,	// (0x000a5352) list_notif_wgt_row_pane_t3

0x0002,

0x08d4,	// (0x000974a6) list_notif_wgt_row_pane_t

0x5d96,	// (0x0009c968) list_recal_day_event_pane_g1

0xe792,	// (0x000a5364) list_recal_day_event_pane_t1

0xacbc,	// (0x000a188e) bg_button_pane_cp045

0x7f82,	// (0x0009eb54) cntbar_detail_btn_pane_t1

0xc285,	// (0x000a2e57) main_callh_pane_ParamLimits

0xc285,	// (0x000a2e57) main_callh_pane

0xacbc,	// (0x000a188e) main_coverflow0_pane

0xacbc,	// (0x000a188e) main_wgtman_pane

0x7269,	// (0x0009de3b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7269,	// (0x0009de3b) main_fs_bigclock_unlock_btn_pane

0x7809,	// (0x0009e3db) bg_button_pane_cp16

0x7819,	// (0x0009e3eb) cell_tport_appsw_pane_g3

0x7f90,	// (0x0009eb62) cf0_flow_pane_ParamLimits

0x7f90,	// (0x0009eb62) cf0_flow_pane

0xe7a1,	// (0x000a5373) listscroll_cf0_pane

0xe7ac,	// (0x000a537e) main_cf0_pane_g1

0x7fa5,	// (0x0009eb77) main_cf0_pane_t1_ParamLimits

0x7fa5,	// (0x0009eb77) main_cf0_pane_t1

0x7fbc,	// (0x0009eb8e) main_cf0_pane_t2_ParamLimits

0x7fbc,	// (0x0009eb8e) main_cf0_pane_t2

0x0001,

0xfa89,	// (0x000a665b) main_cf0_pane_t_ParamLimits

0xfa89,	// (0x000a665b) main_cf0_pane_t

0xe7be,	// (0x000a5390) scroll_pane_cp11

0x7fd3,	// (0x0009eba5) cf0_flow_pane_g1

0x7fdb,	// (0x0009ebad) cf0_flow_pane_g2

0x0001,

0xfa8e,	// (0x000a6660) cf0_flow_pane_g

0x7fe3,	// (0x0009ebb5) cf0_flow_pane_t1

0xacbc,	// (0x000a188e) main_call6_pane

0xacbc,	// (0x000a188e) main_calllock_pane

0x7ff1,	// (0x0009ebc3) call6_btn_grp_pane_ParamLimits

0x7ff1,	// (0x0009ebc3) call6_btn_grp_pane

0x800b,	// (0x0009ebdd) call6_pane_g1_ParamLimits

0x800b,	// (0x0009ebdd) call6_pane_g1

0x8021,	// (0x0009ebf3) popup_call6_1st_window_ParamLimits

0x8021,	// (0x0009ebf3) popup_call6_1st_window

0x8032,	// (0x0009ec04) popup_call6_2nd_window_ParamLimits

0x8032,	// (0x0009ec04) popup_call6_2nd_window

0x8043,	// (0x0009ec15) cell_call6_btn_pane_ParamLimits

0x8043,	// (0x0009ec15) cell_call6_btn_pane

0xb792,	// (0x000a2364) bg_popup_call2_in_pane_cp03

0xe7c9,	// (0x000a539b) popup_call6_1st_window_g1

0xe7d1,	// (0x000a53a3) popup_call6_1st_window_g2

0xe7d9,	// (0x000a53ab) popup_call6_1st_window_g3

0x0002,

0x08ea,	// (0x000974bc) popup_call6_1st_window_g

0xe7e1,	// (0x000a53b3) popup_call6_1st_window_t1

0xe7f0,	// (0x000a53c2) popup_call6_1st_window_t2

0xe7fe,	// (0x000a53d0) popup_call6_1st_window_t3

0x0002,

0x08f1,	// (0x000974c3) popup_call6_1st_window_t

0xb792,	// (0x000a2364) bg_popup_call2_in_pane_cp04

0xe80c,	// (0x000a53de) popup_call6_2nd_window_g1

0xe814,	// (0x000a53e6) popup_call6_2nd_window_g2

0xe81c,	// (0x000a53ee) popup_call6_2nd_window_g3

0x0002,

0x08f8,	// (0x000974ca) popup_call6_2nd_window_g

0xe824,	// (0x000a53f6) popup_call6_2nd_window_t1

0x9835,	// (0x000a0407) bg_button_pane_cp15

0x9fa3,	// (0x000a0b75) cell_call6_btn_pane_g1

0x9fac,	// (0x000a0b7e) cell_call6_btn_pane_t1

0x8057,	// (0x0009ec29) listscroll_wgtman_pane_ParamLimits

0x8057,	// (0x0009ec29) listscroll_wgtman_pane

0x8078,	// (0x0009ec4a) wgtman_btn_pane_ParamLimits

0x8078,	// (0x0009ec4a) wgtman_btn_pane

0xbf1f,	// (0x000a2af1) aid_scroll_copy1

0xe833,	// (0x000a5405) list_wgtman_pane

0x80bb,	// (0x0009ec8d) wgtman_btn_pane_g1_ParamLimits

0x80bb,	// (0x0009ec8d) wgtman_btn_pane_g1

0x80e7,	// (0x0009ecb9) wgtman_btn_pane_t1_ParamLimits

0x80e7,	// (0x0009ecb9) wgtman_btn_pane_t1

0xe83d,	// (0x000a540f) wgtman_btn_pane_t2_ParamLimits

0xe83d,	// (0x000a540f) wgtman_btn_pane_t2

0x0001,

0xfa93,	// (0x000a6665) wgtman_btn_pane_t_ParamLimits

0xfa93,	// (0x000a6665) wgtman_btn_pane_t

0x8124,	// (0x0009ecf6) listrow_wgtman_pane_ParamLimits

0x8124,	// (0x0009ecf6) listrow_wgtman_pane

0x8137,	// (0x0009ed09) listrow_wgtman_pane_g1

0x8144,	// (0x0009ed16) listrow_wgtman_pane_g2

0x0001,

0xfa98,	// (0x000a666a) listrow_wgtman_pane_g

0x8162,	// (0x0009ed34) listrow_wgtman_pane_t1

0x817a,	// (0x0009ed4c) listrow_wgtman_pane_t2

0x0001,

0xfa9d,	// (0x000a666f) listrow_wgtman_pane_t

0x81a0,	// (0x0009ed72) wait_bar_pane_cp09

0xe854,	// (0x000a5426) main_calllock_btn_pane

0xe85e,	// (0x000a5430) main_calllock_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp17

0xe866,	// (0x000a5438) main_calllock_btn_pane_g1

0xe86f,	// (0x000a5441) main_calllock_btn_pane_t1

0xacbc,	// (0x000a188e) main_dialer3_pane

0xacbc,	// (0x000a188e) main_fmrd2_pane

0xb52c,	// (0x000a20fe) main_fs_bigclock_unlock_btn_pane_g1

0x81ba,	// (0x0009ed8c) main_fs_bigclock_unlock_btn_pane_t1

0x81c8,	// (0x0009ed9a) area_fmrd2_info_pane_ParamLimits

0x81c8,	// (0x0009ed9a) area_fmrd2_info_pane

0x81d9,	// (0x0009edab) area_fmrd2_visual_pane_ParamLimits

0x81d9,	// (0x0009edab) area_fmrd2_visual_pane

0x81e7,	// (0x0009edb9) fmrd2_indi_pane_ParamLimits

0x81e7,	// (0x0009edb9) fmrd2_indi_pane

0x81f4,	// (0x0009edc6) area_fmrd2_visual_pane_g1

0x81fc,	// (0x0009edce) area_fmrd2_visual_pane_t1

0x820c,	// (0x0009edde) area_fmrd2_visual_pane_t2

0x821c,	// (0x0009edee) area_fmrd2_visual_pane_t3

0x0002,

0xfaa7,	// (0x000a6679) area_fmrd2_visual_pane_t

0x822c,	// (0x0009edfe) area_fmrd2_info_pane_g1

0x8234,	// (0x0009ee06) area_fmrd2_info_pane_t1

0x8244,	// (0x0009ee16) area_fmrd2_info_pane_t2

0x8254,	// (0x0009ee26) area_fmrd2_info_pane_t3

0x8264,	// (0x0009ee36) area_fmrd2_info_pane_t4

0x0003,

0xfaae,	// (0x000a6680) area_fmrd2_info_pane_t

0x8272,	// (0x0009ee44) fmrd2_indi_pane_t1

0x8282,	// (0x0009ee54) fmrd2_indi_pane_t2

0x8292,	// (0x0009ee64) fmrd2_indi_pane_t3

0x0002,

0xfab7,	// (0x000a6689) fmrd2_indi_pane_t

0xa865,	// (0x000a1437) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xa865,	// (0x000a1437) list_single_fs_bigclock_indicator_pane_g5

0xa916,	// (0x000a14e8) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xa916,	// (0x000a14e8) list_single_fs_bigclock_indicator_pane_t5

0x7a0e,	// (0x0009e5e0) aid_cell_bcale_month_pane_ParamLimits

0x7a0e,	// (0x0009e5e0) aid_cell_bcale_month_pane

0x7a0e,	// (0x0009e5e0) bcale_month_pane_ParamLimits

0x7a0e,	// (0x0009e5e0) bcale_month_pane

0xb02a,	// (0x000a1bfc) bcale_preview_pane_ParamLimits

0xb02a,	// (0x000a1bfc) bcale_preview_pane

0xe620,	// (0x000a51f2) list_single_fs_bigclock_pane_t1_ParamLimits

0xe63f,	// (0x000a5211) list_single_fs_bigclock_pane_t2_ParamLimits

0xe63f,	// (0x000a5211) list_single_fs_bigclock_pane_t2

0x0001,

0x089e,	// (0x00097470) list_single_fs_bigclock_pane_t_ParamLimits

0x089e,	// (0x00097470) list_single_fs_bigclock_pane_t

0x81b2,	// (0x0009ed84) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfaa2,	// (0x000a6674) main_fs_bigclock_unlock_btn_pane_g

0x82a2,	// (0x0009ee74) aid_dia3_key_size_ParamLimits

0x82a2,	// (0x0009ee74) aid_dia3_key_size

0x82b1,	// (0x0009ee83) aid_dia3_listrow_size_ParamLimits

0x82b1,	// (0x0009ee83) aid_dia3_listrow_size

0x82c6,	// (0x0009ee98) dia3_keypad_fun_pane_ParamLimits

0x82c6,	// (0x0009ee98) dia3_keypad_fun_pane

0x82e2,	// (0x0009eeb4) dia3_keypad_num_pane_ParamLimits

0x82e2,	// (0x0009eeb4) dia3_keypad_num_pane

0x82fd,	// (0x0009eecf) dia3_listscroll_pane_ParamLimits

0x82fd,	// (0x0009eecf) dia3_listscroll_pane

0x8310,	// (0x0009eee2) dia3_numentry_pane_ParamLimits

0x8310,	// (0x0009eee2) dia3_numentry_pane

0xe87e,	// (0x000a5450) dia3_list_pane

0xe889,	// (0x000a545b) scroll_pane_cp12

0xacbc,	// (0x000a188e) bg_dia3_numentry_pane

0x8328,	// (0x0009eefa) dia3_numentry_pane_t1

0x8337,	// (0x0009ef09) cell_dia3_key_num_pane

0x833f,	// (0x0009ef11) cell_dia3_key0_fun_pane_ParamLimits

0x833f,	// (0x0009ef11) cell_dia3_key0_fun_pane

0x8353,	// (0x0009ef25) cell_dia3_key1_fun_pane_ParamLimits

0x8353,	// (0x0009ef25) cell_dia3_key1_fun_pane

0x836b,	// (0x0009ef3d) dia3_listrow_pane

0xa5b8,	// (0x000a118a) bg_dia3_numentry_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp21

0xe894,	// (0x000a5466) cell_dia3_key_num_pane_t1

0xe8a2,	// (0x000a5474) cell_dia3_key_num_pane_t2

0xe8b1,	// (0x000a5483) cell_dia3_key_num_pane_t3

0xe8c0,	// (0x000a5492) cell_dia3_key_num_pane_t4

0x0003,

0x092a,	// (0x000974fc) cell_dia3_key_num_pane_t

0xacbc,	// (0x000a188e) bg_button_pane_cp19

0x837d,	// (0x0009ef4f) cell_dia3_key0_fun_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp20

0x8385,	// (0x0009ef57) cell_dia3_key1_fun_pane_g1

0xb02a,	// (0x000a1bfc) area_left_week_number_pane

0xb02a,	// (0x000a1bfc) area_top_day_name_pane

0xb02a,	// (0x000a1bfc) frame_month_view_pane

0xb02a,	// (0x000a1bfc) grid_month_view_pane

0xb02a,	// (0x000a1bfc) cell_top_day_name_pane_ParamLimits

0xb02a,	// (0x000a1bfc) cell_top_day_name_pane

0xb02a,	// (0x000a1bfc) cell_area_left_week_number_pane_ParamLimits

0xb02a,	// (0x000a1bfc) cell_area_left_week_number_pane

0xb02a,	// (0x000a1bfc) cell_month_view_pane_ParamLimits

0xb02a,	// (0x000a1bfc) cell_month_view_pane

0xb01e,	// (0x000a1bf0) frm_month_g1

0xb01e,	// (0x000a1bf0) frm_month_g2

0xb01e,	// (0x000a1bf0) frm_month_g3

0xb01e,	// (0x000a1bf0) frm_month_g4

0xb01e,	// (0x000a1bf0) frm_month_g5

0xb01e,	// (0x000a1bf0) frm_month_g6

0xb01e,	// (0x000a1bf0) frm_month_g7

0xb01e,	// (0x000a1bf0) frm_month_g8

0xb01e,	// (0x000a1bf0) frm_month_g9

0xb01e,	// (0x000a1bf0) frm_month_g10

0xb01e,	// (0x000a1bf0) frm_month_g11

0xb01e,	// (0x000a1bf0) frm_month_g12

0xb01e,	// (0x000a1bf0) frm_month_g13

0xb01e,	// (0x000a1bf0) frm_month_g14

0xb01e,	// (0x000a1bf0) frm_month_g15

0xb01e,	// (0x000a1bf0) frm_month_g16

0x000f,

0xfabe,	// (0x000a6690) frm_month_g

0xe8cf,	// (0x000a54a1) cell_top_day_name_pane_t1

0xb01e,	// (0x000a1bf0) cell_area_left_week_number_pane_g1

0xe8cf,	// (0x000a54a1) cell_area_left_week_number_pane_t1

0xb01e,	// (0x000a1bf0) cell_month_view_pane_g1

0xe8cf,	// (0x000a54a1) cell_month_view_pane_t1

0xacbc,	// (0x000a188e) main_fps_pane

0xaada,	// (0x000a16ac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xaada,	// (0x000a16ac) cmail_ddmenu_btn02_pane_cp1

0xaaf6,	// (0x000a16c8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xaaf6,	// (0x000a16c8) cmail_ddmenu_btn02_pane_cp2

0x7c21,	// (0x0009e7f3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7c21,	// (0x0009e7f3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfa41,	// (0x000a6613) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfa41,	// (0x000a6613) cmail_ddmenu_btn02_pane_g

0x7c3f,	// (0x0009e811) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x7c3f,	// (0x0009e811) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfa46,	// (0x000a6618) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfa46,	// (0x000a6618) cmail_ddmenu_btn02_pane_t

0x838d,	// (0x0009ef5f) fps_text_pane_ParamLimits

0x838d,	// (0x0009ef5f) fps_text_pane

0x83a4,	// (0x0009ef76) main_fps_pane_g1_ParamLimits

0x83a4,	// (0x0009ef76) main_fps_pane_g1

0x83be,	// (0x0009ef90) wait_bar_pane_cp010_ParamLimits

0x83be,	// (0x0009ef90) wait_bar_pane_cp010

0x83cf,	// (0x0009efa1) fps_text_pane_t1_ParamLimits

0x83cf,	// (0x0009efa1) fps_text_pane_t1

0xb036,	// (0x000a1c08) cam4_image_uncrop_pane_g1

0xb03f,	// (0x000a1c11) cam4_image_uncrop_pane_g2

0x4e7c,	// (0x0009ba4e) cam4_image_uncrop_pane_g3

0x4e85,	// (0x0009ba57) cam4_image_uncrop_pane_g4

0x0003,

0xf6ad,	// (0x000a627f) cam4_image_uncrop_pane_g

0x836b,	// (0x0009ef3d) dia3_listrow_pane_ParamLimits

0xacbc,	// (0x000a188e) main_phob2_pane

0x77da,	// (0x0009e3ac) cell_tport_appsw_pane_cp02_ParamLimits

0x77da,	// (0x0009e3ac) cell_tport_appsw_pane_cp02

0x77ee,	// (0x0009e3c0) cell_tport_appsw_pane_cp03_ParamLimits

0x77ee,	// (0x0009e3c0) cell_tport_appsw_pane_cp03

0xacbc,	// (0x000a188e) phob2_contact_card_pane

0xacbc,	// (0x000a188e) phob2_listscroll_pane

0xe8e1,	// (0x000a54b3) phob2_list_pane

0xe3dd,	// (0x000a4faf) scroll_pane_cp034

0x83e7,	// (0x0009efb9) phob2_cc_data_pane_ParamLimits

0x83e7,	// (0x0009efb9) phob2_cc_data_pane

0x8406,	// (0x0009efd8) phob2_cc_listscroll_pane_ParamLimits

0x8406,	// (0x0009efd8) phob2_cc_listscroll_pane

0x8424,	// (0x0009eff6) list_double_large_graphic_phob2_pane_ParamLimits

0x8424,	// (0x0009eff6) list_double_large_graphic_phob2_pane

0x8445,	// (0x0009f017) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8445,	// (0x0009f017) list_double_large_graphic_phob2_pane_g1

0x8457,	// (0x0009f029) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8457,	// (0x0009f029) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfadf,	// (0x000a66b1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfadf,	// (0x000a66b1) list_double_large_graphic_phob2_pane_g

0x848b,	// (0x0009f05d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x848b,	// (0x0009f05d) list_double_large_graphic_phob2_pane_t1

0x84af,	// (0x0009f081) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x84af,	// (0x0009f081) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfae8,	// (0x000a66ba) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfae8,	// (0x000a66ba) list_double_large_graphic_phob2_pane_t

0xb487,	// (0x000a2059) list_highlight_pane_cp024

0xe8e9,	// (0x000a54bb) phob2_cc_button_pane

0x84d0,	// (0x0009f0a2) phob2_cc_data_pane_g1_ParamLimits

0x84d0,	// (0x0009f0a2) phob2_cc_data_pane_g1

0x84e7,	// (0x0009f0b9) phob2_cc_data_pane_g2_ParamLimits

0x84e7,	// (0x0009f0b9) phob2_cc_data_pane_g2

0x0001,

0xfaed,	// (0x000a66bf) phob2_cc_data_pane_g_ParamLimits

0xfaed,	// (0x000a66bf) phob2_cc_data_pane_g

0x84f9,	// (0x0009f0cb) phob2_cc_data_pane_t1_ParamLimits

0x84f9,	// (0x0009f0cb) phob2_cc_data_pane_t1

0x8511,	// (0x0009f0e3) phob2_cc_data_pane_t2_ParamLimits

0x8511,	// (0x0009f0e3) phob2_cc_data_pane_t2

0x8529,	// (0x0009f0fb) phob2_cc_data_pane_t3_ParamLimits

0x8529,	// (0x0009f0fb) phob2_cc_data_pane_t3

0x0002,

0xfaf2,	// (0x000a66c4) phob2_cc_data_pane_t_ParamLimits

0xfaf2,	// (0x000a66c4) phob2_cc_data_pane_t

0xe8f1,	// (0x000a54c3) phob2_cc_list_pane_ParamLimits

0xe8f1,	// (0x000a54c3) phob2_cc_list_pane

0xa41e,	// (0x000a0ff0) scroll_pane_cp035_ParamLimits

0xa41e,	// (0x000a0ff0) scroll_pane_cp035

0xb487,	// (0x000a2059) bg_button_pane_cp033

0xe8fd,	// (0x000a54cf) phob2_cc_button_pane_g1

0xe909,	// (0x000a54db) phob2_cc_button_pane_t1

0xe91e,	// (0x000a54f0) phob2_cc_button_pane_t2

0x0001,

0xfaf9,	// (0x000a66cb) phob2_cc_button_pane_t

0x8541,	// (0x0009f113) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8541,	// (0x0009f113) list_double_large_graphic_phob2_cc_pane

0x8573,	// (0x0009f145) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8573,	// (0x0009f145) list_double_large_graphic_phob2_cc_pane_g1

0x857f,	// (0x0009f151) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x857f,	// (0x0009f151) list_double_large_graphic_phob2_cc_pane_g2

0x858b,	// (0x0009f15d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x858b,	// (0x0009f15d) list_double_large_graphic_phob2_cc_pane_g3

0x8597,	// (0x0009f169) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8597,	// (0x0009f169) list_double_large_graphic_phob2_cc_pane_g4

0x85a3,	// (0x0009f175) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x85a3,	// (0x0009f175) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfafe,	// (0x000a66d0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfafe,	// (0x000a66d0) list_double_large_graphic_phob2_cc_pane_g

0x85af,	// (0x0009f181) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x85af,	// (0x0009f181) list_double_large_graphic_phob2_cc_pane_t1

0x85d8,	// (0x0009f1aa) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x85d8,	// (0x0009f1aa) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfb09,	// (0x000a66db) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfb09,	// (0x000a66db) list_double_large_graphic_phob2_cc_pane_t

0xe930,	// (0x000a5502) list_highlight_pane_cp025_ParamLimits

0xe930,	// (0x000a5502) list_highlight_pane_cp025

0xb487,	// (0x000a2059) bg_button_pane_cp033_ParamLimits

0xe8fd,	// (0x000a54cf) phob2_cc_button_pane_g1_ParamLimits

0xe909,	// (0x000a54db) phob2_cc_button_pane_t1_ParamLimits

0xe91e,	// (0x000a54f0) phob2_cc_button_pane_t2_ParamLimits

0xfaf9,	// (0x000a66cb) phob2_cc_button_pane_t_ParamLimits

0x0c62,	// (0x00097834) popup_wgtman_window

0x57e4,	// (0x0009c3b6) scroll_pane_cp038

0x809d,	// (0x0009ec6f) wgtman_btn_pane_cp_01_ParamLimits

0x809d,	// (0x0009ec6f) wgtman_btn_pane_cp_01

0xe93e,	// (0x000a5510) wgtman_content_pane

0xe947,	// (0x000a5519) wgtman_heading_pane

0xacbc,	// (0x000a188e) bg_heading_pane_cp02

0xe95f,	// (0x000a5531) wgtman_heading_pane_g1

0xe967,	// (0x000a5539) wgtman_heading_pane_t1

0xe975,	// (0x000a5547) scroll_pane_cp036

0xe97d,	// (0x000a554f) wgtman_list_pane

0xb048,	// (0x000a1c1a) wgtman_list_pane_t1_ParamLimits

0xb048,	// (0x000a1c1a) wgtman_list_pane_t1

0x9dd8,	// (0x000a09aa) cam4_grid_pane

0x5eb0,	// (0x0009ca82) bg_button_pane_cp015_ParamLimits

0x5ec1,	// (0x0009ca93) bg_button_pane_cp016_ParamLimits

0x5ecd,	// (0x0009ca9f) bg_button_pane_cp017_ParamLimits

0x5f2d,	// (0x0009caff) popup_vitu2_query_window_g3_ParamLimits

0x5f2d,	// (0x0009caff) popup_vitu2_query_window_g3

0x5fce,	// (0x0009cba0) popup_vitu2_query_window_t6_ParamLimits

0x5fce,	// (0x0009cba0) popup_vitu2_query_window_t6

0x5ff9,	// (0x0009cbcb) popup_vitu2_query_window_t7_ParamLimits

0x5ff9,	// (0x0009cbcb) popup_vitu2_query_window_t7

0xb036,	// (0x000a1c08) cam4_grid_pane_g1

0xb03f,	// (0x000a1c11) cam4_grid_pane_g2

0xe985,	// (0x000a5557) cam4_grid_pane_g3

0xe98e,	// (0x000a5560) cam4_grid_pane_g4

0x0003,

0xfb0e,	// (0x000a66e0) cam4_grid_pane_g

0x1710,	// (0x000982e2) aid_placing_vt_slider_lsc_ParamLimits

0x1a0d,	// (0x000985df) vidtel_button_pane_ParamLimits

0x1a0d,	// (0x000985df) vidtel_button_pane

0xacbc,	// (0x000a188e) bg_button_pane_cp034

0xe999,	// (0x000a556b) vidtel_button_pane_g1

0xe9a1,	// (0x000a5573) vidtel_button_pane_t1

0x5bb3,	// (0x0009c785) aid_size_vtel_slider_touch

0xa41e,	// (0x000a0ff0) scroll_pane_cp039

0x7000,	// (0x0009dbd2) ncim_query_button_pane_cp01_ParamLimits

0x701f,	// (0x0009dbf1) ncimui_query_pane_g1_ParamLimits

0xb487,	// (0x000a2059) input_focus_pane_cp012_ParamLimits

0xa5fe,	// (0x000a11d0) ncim_query_entry_pane_t1_ParamLimits

0xa41e,	// (0x000a0ff0) scroll_pane_cp039_ParamLimits

0xbff6,	// (0x000a2bc8) navi_pane_bcale_mc_g1

0xbffe,	// (0x000a2bd0) navi_pane_bcale_mc_t1

0xab2a,	// (0x000a16fc) main_sp_fs_email_pane_g1

0xab36,	// (0x000a1708) main_sp_fs_email_pane_g2

0x0001,

0x0789,	// (0x0009735b) main_sp_fs_email_pane_g

0xb10f,	// (0x000a1ce1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb10f,	// (0x000a1ce1) list_single_cale_mrui_row_pane_g3

0x7c5f,	// (0x0009e831) list_single_recal_day_pane_g5_event_pane

0xe48a,	// (0x000a505c) list_single_recal_day_pane_g7

0xe9b7,	// (0x000a5589) list_recal_day_event_pane_cp01

0xe9c0,	// (0x000a5592) list_recal_vselct_arw_lo_pane_cp01

0xe9c8,	// (0x000a559a) list_recal_vselct_arw_up_pane_cp01

0xe9d0,	// (0x000a55a2) list_recal_vselct_pane_cp01

0x5d96,	// (0x0009c968) list_recal_day_event_pane_cp01_g1

0xe9da,	// (0x000a55ac) list_recal_day_event_pane_cp01_t1

0xe492,	// (0x000a5064) list_single_recal_day_pane_t1_ParamLimits

0xe4a4,	// (0x000a5076) list_single_recal_day_pane_t2_ParamLimits

0x0866,	// (0x00097438) list_single_recal_day_pane_t_ParamLimits

0xb465,	// (0x000a2037) bg_notes_pane_ParamLimits

0xb568,	// (0x000a213a) list_notes_pane_ParamLimits

0x0dad,	// (0x0009797f) scroll_pane_cp06_ParamLimits

0xb58a,	// (0x000a215c) main_notes_pane_ParamLimits

0xb487,	// (0x000a2059) main_welc_pane

0x863a,	// (0x0009f20c) main_welc_body_pane_ParamLimits

0x863a,	// (0x0009f20c) main_welc_body_pane

0x8657,	// (0x0009f229) main_welc_opti_pane_ParamLimits

0x8657,	// (0x0009f229) main_welc_opti_pane

0x86c7,	// (0x0009f299) main_welc_pane_t1_ParamLimits

0x86c7,	// (0x0009f299) main_welc_pane_t1

0x88d9,	// (0x0009f4ab) main_welc_body_row_pane_ParamLimits

0x88d9,	// (0x0009f4ab) main_welc_body_row_pane

0xb4e0,	// (0x000a20b2) main_welc_opti_row_pane_ParamLimits

0xb4e0,	// (0x000a20b2) main_welc_opti_row_pane

0xe9f0,	// (0x000a55c2) main_welc_opti_row_pane_g1

0x88ee,	// (0x0009f4c0) main_welc_opti_row_pane_t1

0xe9f8,	// (0x000a55ca) main_welc_body_row_pane_t1

0xe709,	// (0x000a52db) popup_notif_wgt_heading_pane

0xe723,	// (0x000a52f5) aid_size_list_notif_wgt_del_ParamLimits

0xe730,	// (0x000a5302) list_notif_wgt_row_pane_g1_ParamLimits

0xe73c,	// (0x000a530e) list_notif_wgt_row_pane_g2_ParamLimits

0xe74b,	// (0x000a531d) list_notif_wgt_row_pane_g3_ParamLimits

0x08cd,	// (0x0009749f) list_notif_wgt_row_pane_g_ParamLimits

0xe758,	// (0x000a532a) list_notif_wgt_row_pane_t1_ParamLimits

0xe76e,	// (0x000a5340) list_notif_wgt_row_pane_t2_ParamLimits

0xe780,	// (0x000a5352) list_notif_wgt_row_pane_t3_ParamLimits

0x08d4,	// (0x000974a6) list_notif_wgt_row_pane_t_ParamLimits

0x8137,	// (0x0009ed09) listrow_wgtman_pane_g1_ParamLimits

0x8144,	// (0x0009ed16) listrow_wgtman_pane_g2_ParamLimits

0xfa98,	// (0x000a666a) listrow_wgtman_pane_g_ParamLimits

0x8162,	// (0x0009ed34) listrow_wgtman_pane_t1_ParamLimits

0x817a,	// (0x0009ed4c) listrow_wgtman_pane_t2_ParamLimits

0xfa9d,	// (0x000a666f) listrow_wgtman_pane_t_ParamLimits

0x81a0,	// (0x0009ed72) wait_bar_pane_cp09_ParamLimits

0xacbc,	// (0x000a188e) bg_popup_heading_pane_cp02

0xea07,	// (0x000a55d9) popup_notif_wgt_heading_pane_g1

0xea0f,	// (0x000a55e1) popup_notif_wgt_heading_pane_t1

0xacbc,	// (0x000a188e) main_vids_pane

0xacbc,	// (0x000a188e) vids_listscroll_pane

0x88fd,	// (0x0009f4cf) scroll_pane_cp040

0xacbc,	// (0x000a188e) vids_list_pane

0x8908,	// (0x0009f4da) vids_list_double_pane_ParamLimits

0x8908,	// (0x0009f4da) vids_list_double_pane

0x8919,	// (0x0009f4eb) vids_list_double_pane_g1

0x8922,	// (0x0009f4f4) vids_list_double_pane_t1

0x8931,	// (0x0009f503) vids_list_double_pane_t2

0x0001,

0xfb2d,	// (0x000a66ff) vids_list_double_pane_t

0x9827,	// (0x000a03f9) main_ncimui_pane_ParamLimits

0x6e36,	// (0x0009da08) main_ncimui_pane_g1_ParamLimits

0x6e42,	// (0x0009da14) main_ncimui_pane_g2_ParamLimits

0x6e42,	// (0x0009da14) main_ncimui_pane_g2

0x0001,

0xf980,	// (0x000a6552) main_ncimui_pane_g_ParamLimits

0xf980,	// (0x000a6552) main_ncimui_pane_g

0x8672,	// (0x0009f244) main_welc_pane_g1_ParamLimits

0x8672,	// (0x0009f244) main_welc_pane_g1

0x8687,	// (0x0009f259) main_welc_pane_g2_ParamLimits

0x8687,	// (0x0009f259) main_welc_pane_g2

0x0003,

0xfb17,	// (0x000a66e9) main_welc_pane_g_ParamLimits

0xfb17,	// (0x000a66e9) main_welc_pane_g

0xb465,	// (0x000a2037) listscroll_mce_pane_ParamLimits

0xc14b,	// (0x000a2d1d) wait_bar_pane_cp10

0xd4a3,	// (0x000a4075) main_cale_day_pane_ParamLimits

0xd4a3,	// (0x000a4075) main_cale_week_pane_ParamLimits

0xb465,	// (0x000a2037) main_messa_pane_ParamLimits

0x42c1,	// (0x0009ae93) main_clock2_btn_pane_ParamLimits

0x42c1,	// (0x0009ae93) main_clock2_btn_pane

0xdd26,	// (0x000a48f8) main_clock2_btn_pane_cp01_ParamLimits

0xdd26,	// (0x000a48f8) main_clock2_btn_pane_cp01

0xb0ee,	// (0x000a1cc0) list_cale_mrui_pane_ParamLimits

0xe7b6,	// (0x000a5388) main_cf0_pane_g2

0x0001,

0x08db,	// (0x000974ad) main_cf0_pane_g

0xb02a,	// (0x000a1bfc) area_left_week_number_pane_ParamLimits

0xb02a,	// (0x000a1bfc) area_top_day_name_pane_ParamLimits

0xb02a,	// (0x000a1bfc) frame_month_view_pane_ParamLimits

0xb02a,	// (0x000a1bfc) grid_month_view_pane_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g1_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g2_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g3_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g4_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g5_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g6_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g7_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g8_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g9_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g10_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g11_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g12_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g13_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g14_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g15_ParamLimits

0xb01e,	// (0x000a1bf0) frm_month_g16_ParamLimits

0xfabe,	// (0x000a6690) frm_month_g_ParamLimits

0xe8cf,	// (0x000a54a1) cell_top_day_name_pane_t1_ParamLimits

0xb01e,	// (0x000a1bf0) cell_area_left_week_number_pane_g1_ParamLimits

0xe8cf,	// (0x000a54a1) cell_area_left_week_number_pane_t1_ParamLimits

0xb01e,	// (0x000a1bf0) cell_month_view_pane_g1_ParamLimits

0xe8cf,	// (0x000a54a1) cell_month_view_pane_t1_ParamLimits

0xb45d,	// (0x000a202f) main_clock2_btn_pane_g1

0xea1d,	// (0x000a55ef) main_clock2_btn_pane_t1

0xb487,	// (0x000a2059) listscroll_cmail_pane_ParamLimits

0xab2a,	// (0x000a16fc) main_sp_fs_email_pane_g1_ParamLimits

0xab36,	// (0x000a1708) main_sp_fs_email_pane_g2_ParamLimits

0x0789,	// (0x0009735b) main_sp_fs_email_pane_g_ParamLimits

0xe3fa,	// (0x000a4fcc) list_recal_day_pane_ParamLimits

0xe40b,	// (0x000a4fdd) mian_recal_day_pane_t1

0x767d,	// (0x0009e24f) list_single_dyc_row_text_pane_t4_ParamLimits

0x767d,	// (0x0009e24f) list_single_dyc_row_text_pane_t4

0x76c6,	// (0x0009e298) list_single_dyc_row_text_pane_t5_ParamLimits

0x76c6,	// (0x0009e298) list_single_dyc_row_text_pane_t5

0xe12c,	// (0x000a4cfe) list_single_dyc_row_text_pane_t6_ParamLimits

0xe12c,	// (0x000a4cfe) list_single_dyc_row_text_pane_t6

0x24a3,	// (0x00099075) aid_mgn_list_cale_time_pane

0x9827,	// (0x000a03f9) main_gallery2_pane_ParamLimits

0xdd3c,	// (0x000a490e) main_clock2_pane_cp01_t1

0xdd4a,	// (0x000a491c) main_clock2_pane_cp01_t3

0x0001,

0x0279,	// (0x00096e4b) main_clock2_pane_cp01_t

0x1149,	// (0x00097d1b) cale_week_scroll_pane_g16_ParamLimits

0x1149,	// (0x00097d1b) cale_week_scroll_pane_g16

0xb792,	// (0x000a2364) vorec_slider_pane

0xe9a1,	// (0x000a5573) vidtel_button_pane_t1_ParamLimits

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7cc5,	// (0x0009e897) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfa5b,	// (0x000a662d) main_fs_bigclock_clock_pane_g_ParamLimits

0x7cd8,	// (0x0009e8aa) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7cf2,	// (0x0009e8c4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfa64,	// (0x000a6636) main_fs_bigclock_clock_pane_t_ParamLimits

0x3b54,	// (0x0009a726) main_mup3_lyrics_pane_ParamLimits

0x3b54,	// (0x0009a726) main_mup3_lyrics_pane

0x8959,	// (0x0009f52b) main_mup3_lyrics_pane_t1_ParamLimits

0x8959,	// (0x0009f52b) main_mup3_lyrics_pane_t1

0x9ad6,	// (0x000a06a8) aid_main_mp4_pane_t1_area

0x9ae0,	// (0x000a06b2) aid_main_mp4_pane_t2_area

0x9b8a,	// (0x000a075c) main_mp4_pane_g7_ParamLimits

0x9b8a,	// (0x000a075c) main_mp4_pane_g7

0x9b96,	// (0x000a0768) main_mp4_pane_g8_ParamLimits

0x9b96,	// (0x000a0768) main_mp4_pane_g8

0x4c31,	// (0x0009b803) aid_call6_pane_g1_size

0x855c,	// (0x0009f12e) list_double_large_graphic_phob2_other_pane_ParamLimits

0x855c,	// (0x0009f12e) list_double_large_graphic_phob2_other_pane

0xbf27,	// (0x000a2af9) list_double_large_graphic_phob2_other_pane_g1

0xacbc,	// (0x000a188e) list_highlight_pane_cp026

0xb487,	// (0x000a2059) main_welc_pane_ParamLimits

0x74b2,	// (0x0009e084) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x74b2,	// (0x0009e084) main_sp_fs_ctrlbar_pane_g3

0x74cc,	// (0x0009e09e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x74cc,	// (0x0009e09e) main_sp_fs_ctrlbar_pane_g4

0x7500,	// (0x0009e0d2) toolbar2_fixed_button_pane_cp01

0x750b,	// (0x0009e0dd) toolbar2_fixed_button_pane_cp02

0x7518,	// (0x0009e0ea) toolbar2_fixed_button_pane_cp03

0x8614,	// (0x0009f1e6) list_welc_entry_pane_ParamLimits

0x8614,	// (0x0009f1e6) list_welc_entry_pane

0x869c,	// (0x0009f26e) main_welc_pane_g3_ParamLimits

0x869c,	// (0x0009f26e) main_welc_pane_g3

0x86e5,	// (0x0009f2b7) main_welc_pane_t2_ParamLimits

0x86e5,	// (0x0009f2b7) main_welc_pane_t2

0x8700,	// (0x0009f2d2) main_welc_pane_t3_ParamLimits

0x8700,	// (0x0009f2d2) main_welc_pane_t3

0x0005,

0xfb20,	// (0x000a66f2) main_welc_pane_t_ParamLimits

0xfb20,	// (0x000a66f2) main_welc_pane_t

0x8838,	// (0x0009f40a) welc_button_pane_ParamLimits

0x8838,	// (0x0009f40a) welc_button_pane

0x88c4,	// (0x0009f496) welc_service_logo_pane_ParamLimits

0x88c4,	// (0x0009f496) welc_service_logo_pane

0x8975,	// (0x0009f547) list_single_welc_entry_pane_ParamLimits

0x8975,	// (0x0009f547) list_single_welc_entry_pane

0x8986,	// (0x0009f558) list_single_welc_entry_pane_g1

0x898e,	// (0x0009f560) list_single_welc_entry_pane_t1

0x899c,	// (0x0009f56e) list_single_welc_entry_pane_t2

0x0001,

0xfb32,	// (0x000a6704) list_single_welc_entry_pane_t

0xacbc,	// (0x000a188e) bg_button_pane_cp035

0x89aa,	// (0x0009f57c) welc_button_pane_t1

0xea2b,	// (0x000a55fd) welc_service_logo_pane_g1

0xea34,	// (0x000a5606) welc_service_logo_pane_g2

0x0001,

0x09ac,	// (0x0009757e) welc_service_logo_pane_g

0x9835,	// (0x000a0407) main_int_radio_pane

0xa49c,	// (0x000a106e) list_single_fs_dyc_pane_g1

0x8466,	// (0x0009f038) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8466,	// (0x0009f038) list_double_large_graphic_phob2_pane_g3

0x8478,	// (0x0009f04a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8478,	// (0x0009f04a) list_double_large_graphic_phob2_pane_g4

0x89b8,	// (0x0009f58a) main_int_radio1_pane_ParamLimits

0x89b8,	// (0x0009f58a) main_int_radio1_pane

0xea3d,	// (0x000a560f) find_pane_cp02

0x89d5,	// (0x0009f5a7) input_focus_pane_cp12_ParamLimits

0x89d5,	// (0x0009f5a7) input_focus_pane_cp12

0x89e5,	// (0x0009f5b7) input_focus_pane_cp13_ParamLimits

0x89e5,	// (0x0009f5b7) input_focus_pane_cp13

0x89f9,	// (0x0009f5cb) input_focus_pane_cp14_ParamLimits

0x89f9,	// (0x0009f5cb) input_focus_pane_cp14

0xea46,	// (0x000a5618) int_radio1_listscroll_pane

0x8a0d,	// (0x0009f5df) main_int_radio1_pane_g1_ParamLimits

0x8a0d,	// (0x0009f5df) main_int_radio1_pane_g1

0x8a25,	// (0x0009f5f7) main_int_radio1_pane_t1_ParamLimits

0x8a25,	// (0x0009f5f7) main_int_radio1_pane_t1

0x8a40,	// (0x0009f612) main_int_radio1_pane_t2_ParamLimits

0x8a40,	// (0x0009f612) main_int_radio1_pane_t2

0x8a5b,	// (0x0009f62d) main_int_radio1_pane_t3_ParamLimits

0x8a5b,	// (0x0009f62d) main_int_radio1_pane_t3

0x8a76,	// (0x0009f648) main_int_radio1_pane_t4_ParamLimits

0x8a76,	// (0x0009f648) main_int_radio1_pane_t4

0xea50,	// (0x000a5622) main_int_radio1_pane_t5_ParamLimits

0xea50,	// (0x000a5622) main_int_radio1_pane_t5

0x8a88,	// (0x0009f65a) main_int_radio1_pane_t6_ParamLimits

0x8a88,	// (0x0009f65a) main_int_radio1_pane_t6

0x8a9d,	// (0x0009f66f) main_int_radio1_pane_t7_ParamLimits

0x8a9d,	// (0x0009f66f) main_int_radio1_pane_t7

0x8ab2,	// (0x0009f684) main_int_radio1_pane_t8_ParamLimits

0x8ab2,	// (0x0009f684) main_int_radio1_pane_t8

0x8ad1,	// (0x0009f6a3) main_int_radio1_pane_t9_ParamLimits

0x8ad1,	// (0x0009f6a3) main_int_radio1_pane_t9

0x8ae3,	// (0x0009f6b5) main_int_radio1_pane_t10_ParamLimits

0x8ae3,	// (0x0009f6b5) main_int_radio1_pane_t10

0x8b09,	// (0x0009f6db) main_int_radio1_pane_t11_ParamLimits

0x8b09,	// (0x0009f6db) main_int_radio1_pane_t11

0x8b2f,	// (0x0009f701) main_int_radio1_pane_t12_ParamLimits

0x8b2f,	// (0x0009f701) main_int_radio1_pane_t12

0x000b,

0xfb37,	// (0x000a6709) main_int_radio1_pane_t_ParamLimits

0xfb37,	// (0x000a6709) main_int_radio1_pane_t

0xea62,	// (0x000a5634) int_radio_list_pane

0xe3dd,	// (0x000a4faf) scroll_pane_cp037

0xea6a,	// (0x000a563c) list_double_large_graphic_int_radio_pane_ParamLimits

0xea6a,	// (0x000a563c) list_double_large_graphic_int_radio_pane

0xea83,	// (0x000a5655) list_double_large_graphic_int_radio_pane_g1

0xea8c,	// (0x000a565e) list_double_large_graphic_int_radio_pane_t1

0xea9a,	// (0x000a566c) list_double_large_graphic_int_radio_pane_t2

0x0001,

0x09ca,	// (0x0009759c) list_double_large_graphic_int_radio_pane_t

0xacbc,	// (0x000a188e) list_highlight_pane_cp027

0xe9e8,	// (0x000a55ba) main_button_pane_4

0x86af,	// (0x0009f281) main_welc_pane_g4_ParamLimits

0x86af,	// (0x0009f281) main_welc_pane_g4

0x8719,	// (0x0009f2eb) main_welc_pane_t4_ParamLimits

0x8719,	// (0x0009f2eb) main_welc_pane_t4

0x8734,	// (0x0009f306) main_welc_pane_t5_ParamLimits

0x8734,	// (0x0009f306) main_welc_pane_t5

0x8775,	// (0x0009f347) main_welc_pane_t6_ParamLimits

0x8775,	// (0x0009f347) main_welc_pane_t6

0x884f,	// (0x0009f421) welc_button_pane_2_ParamLimits

0x884f,	// (0x0009f421) welc_button_pane_2

0x8874,	// (0x0009f446) welc_button_pane_3_ParamLimits

0x8874,	// (0x0009f446) welc_button_pane_3

0xe9e8,	// (0x000a55ba) welc_button_pane_4

0x889c,	// (0x0009f46e) welc_button_pane_5_ParamLimits

0x889c,	// (0x0009f46e) welc_button_pane_5

0x0a66,	// (0x00097638) main_popup_welc_pane

0xeac0,	// (0x000a5692) main_welc_sk_g3

0xeaca,	// (0x000a569c) main_welc_sk_g4

0xead4,	// (0x000a56a6) main_welc_sk_t3

0xeae4,	// (0x000a56b6) main_welc_sk_t4

0xeaf4,	// (0x000a56c6) popup_welc_pane_t4

0xeb02,	// (0x000a56d4) popup_welc_pane_t5

0xeb10,	// (0x000a56e2) popup_welc_pane_t6

0x9835,	// (0x000a0407) main_acti_pane

0xacbc,	// (0x000a188e) main_sso_pane

0x8b41,	// (0x0009f713) sso_body_pane_ParamLimits

0x8b41,	// (0x0009f713) sso_body_pane

0x8b61,	// (0x0009f733) sso_logo_pane_ParamLimits

0x8b61,	// (0x0009f733) sso_logo_pane

0x8b9a,	// (0x0009f76c) sso_sk_pane_ParamLimits

0x8b9a,	// (0x0009f76c) sso_sk_pane

0xeb4e,	// (0x000a5720) main_sso_logo_pane_g1

0x8bac,	// (0x0009f77e) sso_sk_pane_t1_ParamLimits

0x8bac,	// (0x0009f77e) sso_sk_pane_t1

0x8bc6,	// (0x0009f798) sso_sk_pane_t2_ParamLimits

0x8bc6,	// (0x0009f798) sso_sk_pane_t2

0x0001,

0xfb50,	// (0x000a6722) sso_sk_pane_t_ParamLimits

0xfb50,	// (0x000a6722) sso_sk_pane_t

0xeb57,	// (0x000a5729) aid_sso_gap

0xeb60,	// (0x000a5732) aid_sso_txt1

0xeb6a,	// (0x000a573c) aid_sso_txt2

0xeb74,	// (0x000a5746) aid_sso_txt3

0x0002,

0x09d4,	// (0x000975a6) aid_sso_txt

0xeb7e,	// (0x000a5750) aid_sso_widget

0x8c30,	// (0x0009f802) sso_btn_pane_ParamLimits

0x8c30,	// (0x0009f802) sso_btn_pane

0x8cc4,	// (0x0009f896) sso_option_pane_ParamLimits

0x8cc4,	// (0x0009f896) sso_option_pane

0x8d78,	// (0x0009f94a) sso_query_pane_ParamLimits

0x8d78,	// (0x0009f94a) sso_query_pane

0x8dce,	// (0x0009f9a0) sso_query_pane_cp01_ParamLimits

0x8dce,	// (0x0009f9a0) sso_query_pane_cp01

0x8e26,	// (0x0009f9f8) sso_t_hdr_pane_ParamLimits

0x8e26,	// (0x0009f9f8) sso_t_hdr_pane

0x8e50,	// (0x0009fa22) sso_t_nml_pane_ParamLimits

0x8e50,	// (0x0009fa22) sso_t_nml_pane

0x8ea6,	// (0x0009fa78) sso_t_sub_pane

0x8b6e,	// (0x0009f740) sso_popup_window_ParamLimits

0x8b6e,	// (0x0009f740) sso_popup_window

0x8bdc,	// (0x0009f7ae) sso_apps_pane_ParamLimits

0x8bdc,	// (0x0009f7ae) sso_apps_pane

0x8c06,	// (0x0009f7d8) sso_body_pane_g1

0x8c10,	// (0x0009f7e2) sso_body_pane_t1

0x8c20,	// (0x0009f7f2) sso_body_pane_t2

0x0001,

0xfb55,	// (0x000a6727) sso_body_pane_t

0x8c7c,	// (0x0009f84e) sso_btn_pane_cp01_ParamLimits

0x8c7c,	// (0x0009f84e) sso_btn_pane_cp01

0x8d4c,	// (0x0009f91e) sso_prog_pane_ParamLimits

0x8d4c,	// (0x0009f91e) sso_prog_pane

0x8ed5,	// (0x0009faa7) sso_t_hdr_pane_t1_ParamLimits

0x8ed5,	// (0x0009faa7) sso_t_hdr_pane_t1

0xeb88,	// (0x000a575a) input_focus_pane_cp10_ParamLimits

0xeb88,	// (0x000a575a) input_focus_pane_cp10

0xeb9c,	// (0x000a576e) sso_query_pane_t1_ParamLimits

0xeb9c,	// (0x000a576e) sso_query_pane_t1

0xebaf,	// (0x000a5781) sso_query_pane_t2_ParamLimits

0xebaf,	// (0x000a5781) sso_query_pane_t2

0xebc8,	// (0x000a579a) sso_query_pane_t3_ParamLimits

0xebc8,	// (0x000a579a) sso_query_pane_t3

0xebf2,	// (0x000a57c4) sso_query_pane_t4_ParamLimits

0xebf2,	// (0x000a57c4) sso_query_pane_t4

0x0003,

0x09e0,	// (0x000975b2) sso_query_pane_t_ParamLimits

0x09e0,	// (0x000975b2) sso_query_pane_t

0xec16,	// (0x000a57e8) bg_button_pane_cp22

0xeaa8,	// (0x000a567a) sso_btn_pane_t1

0x8ee8,	// (0x0009faba) sso_t_nml_pane_t1_ParamLimits

0x8ee8,	// (0x0009faba) sso_t_nml_pane_t1

0xec1f,	// (0x000a57f1) sso_option_row_pane_ParamLimits

0xec1f,	// (0x000a57f1) sso_option_row_pane

0xec2c,	// (0x000a57fe) sso_t_sub_pane_t1_ParamLimits

0xec2c,	// (0x000a57fe) sso_t_sub_pane_t1

0xb487,	// (0x000a2059) bg_popup_window_pane_cp11_ParamLimits

0xb487,	// (0x000a2059) bg_popup_window_pane_cp11

0xec49,	// (0x000a581b) popup_sk_window_cp01_ParamLimits

0xec49,	// (0x000a581b) popup_sk_window_cp01

0xec56,	// (0x000a5828) sso_popup_body_pane_ParamLimits

0xec56,	// (0x000a5828) sso_popup_body_pane

0xec63,	// (0x000a5835) scroll_pane_cp21_ParamLimits

0xec63,	// (0x000a5835) scroll_pane_cp21

0xec70,	// (0x000a5842) sso_popup_body_t_pane_ParamLimits

0xec70,	// (0x000a5842) sso_popup_body_t_pane

0xec7d,	// (0x000a584f) sso_popup_body_t_hdr_pane_ParamLimits

0xec7d,	// (0x000a584f) sso_popup_body_t_hdr_pane

0x8f03,	// (0x0009fad5) sso_popup_body_t_nml_pane_ParamLimits

0x8f03,	// (0x0009fad5) sso_popup_body_t_nml_pane

0x8f2a,	// (0x0009fafc) sso_popup_body_t_sub_pane_ParamLimits

0x8f2a,	// (0x0009fafc) sso_popup_body_t_sub_pane

0xec8f,	// (0x000a5861) sso_popup_body_t_hdr_pane_t1

0x8f4d,	// (0x0009fb1f) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8f4d,	// (0x0009fb1f) sso_popup_body_t_nml_pane_t1

0xec9f,	// (0x000a5871) sso_popup_body_t_sub_pane_t1_ParamLimits

0xec9f,	// (0x000a5871) sso_popup_body_t_sub_pane_t1

0xb52c,	// (0x000a20fe) sso_prog_pane_g1

0x8f86,	// (0x0009fb58) sso_apps_pane_comp1_ParamLimits

0x8f86,	// (0x0009fb58) sso_apps_pane_comp1

0xecc4,	// (0x000a5896) sso_apps_pane_comp1_g1

0xeccc,	// (0x000a589e) sso_apps_pane_comp1_t1

0xece8,	// (0x000a58ba) sso_option_row_pane_g1

0xed00,	// (0x000a58d2) sso_option_row_pane_t1

0xabd7,	// (0x000a17a9) list_cmail_pane_ParamLimits

0xacbc,	// (0x000a188e) main_call7_pane

0x8601,	// (0x0009f1d3) bg_welc_area_ParamLimits

0x8601,	// (0x0009f1d3) bg_welc_area

0x87b3,	// (0x0009f385) sso_t_hdr_pane_a_t1_ParamLimits

0x87b3,	// (0x0009f385) sso_t_hdr_pane_a_t1

0x87ce,	// (0x0009f3a0) sso_t_nml_pane_a_t1_ParamLimits

0x87ce,	// (0x0009f3a0) sso_t_nml_pane_a_t1

0x87fd,	// (0x0009f3cf) sso_t_sub_pane_a_t1_ParamLimits

0x87fd,	// (0x0009f3cf) sso_t_sub_pane_a_t1

0x88b2,	// (0x0009f484) welc_button_pane_cp01_ParamLimits

0x88b2,	// (0x0009f484) welc_button_pane_cp01

0xeaa8,	// (0x000a567a) sso_btn_pane_t1_copy1

0xeab7,	// (0x000a5689) welc_button_pane_2_comp1

0xeb1e,	// (0x000a56f0) sso_t_hdr_pane_p_t1

0xeb2e,	// (0x000a5700) sso_t_nml_pane_p_t1

0xeb3e,	// (0x000a5710) sso_t_sub_pane_p_t1

0xacbc,	// (0x000a188e) main_att_pane

0xacbc,	// (0x000a188e) main_vod_pane

0x8ea6,	// (0x0009fa78) sso_t_sub_pane_ParamLimits

0xecda,	// (0x000a58ac) input_focus_pane_cp10_t1

0xed00,	// (0x000a58d2) sso_option_row_pane_t1_ParamLimits

0x8fa0,	// (0x0009fb72) main_att_body_pane_ParamLimits

0x8fa0,	// (0x0009fb72) main_att_body_pane

0x8fb6,	// (0x0009fb88) att_btn_emg_pane_ParamLimits

0x8fb6,	// (0x0009fb88) att_btn_emg_pane

0x8fd5,	// (0x0009fba7) att_btn_pane_ParamLimits

0x8fd5,	// (0x0009fba7) att_btn_pane

0x9044,	// (0x0009fc16) att_btn_pane_cp01_ParamLimits

0x9044,	// (0x0009fc16) att_btn_pane_cp01

0x9084,	// (0x0009fc56) att_li_srv_pane_ParamLimits

0x9084,	// (0x0009fc56) att_li_srv_pane

0x90a1,	// (0x0009fc73) att_opt_pane_ParamLimits

0x90a1,	// (0x0009fc73) att_opt_pane

0x90eb,	// (0x0009fcbd) att_query_pane_ParamLimits

0x90eb,	// (0x0009fcbd) att_query_pane

0x9164,	// (0x0009fd36) att_query_pane_cp01_ParamLimits

0x9164,	// (0x0009fd36) att_query_pane_cp01

0x91b0,	// (0x0009fd82) att_t_hdr_pane_ParamLimits

0x91b0,	// (0x0009fd82) att_t_hdr_pane

0x921c,	// (0x0009fdee) att_t_nml_pane_ParamLimits

0x921c,	// (0x0009fdee) att_t_nml_pane

0x928c,	// (0x0009fe5e) att_t_nml_pane_cp01_ParamLimits

0x928c,	// (0x0009fe5e) att_t_nml_pane_cp01

0x92b8,	// (0x0009fe8a) att_t_nmlb_pane_ParamLimits

0x92b8,	// (0x0009fe8a) att_t_nmlb_pane

0x9325,	// (0x0009fef7) att_term_pane_ParamLimits

0x9325,	// (0x0009fef7) att_term_pane

0x936f,	// (0x0009ff41) main_att_body_pane_g1_ParamLimits

0x936f,	// (0x0009ff41) main_att_body_pane_g1

0xed1c,	// (0x000a58ee) att_t_hdr_pane_t1_ParamLimits

0xed1c,	// (0x000a58ee) att_t_hdr_pane_t1

0xed35,	// (0x000a5907) att_t_nml_pane_t1_ParamLimits

0xed35,	// (0x000a5907) att_t_nml_pane_t1

0xed5a,	// (0x000a592c) att_btn_pane_t1

0xec16,	// (0x000a57e8) bg_button_pane_cp23

0x939b,	// (0x0009ff6d) att_li_srv_row_pane_ParamLimits

0x939b,	// (0x0009ff6d) att_li_srv_row_pane

0xed69,	// (0x000a593b) att_t_nmlb_pane_t1_ParamLimits

0xed69,	// (0x000a593b) att_t_nmlb_pane_t1

0xed85,	// (0x000a5957) att_query_pane_t1

0xed94,	// (0x000a5966) att_query_pane_t2

0xedac,	// (0x000a597e) att_query_pane_t3

0x0002,

0xfb5a,	// (0x000a672c) att_query_pane_t

0xedbb,	// (0x000a598d) input_focus_pane_cp11

0xedc4,	// (0x000a5996) att_term_pane_t1_ParamLimits

0xedc4,	// (0x000a5996) att_term_pane_t1

0xacbc,	// (0x000a188e) att_opt_row_pane

0xede1,	// (0x000a59b3) att_opt_row_pane_g1

0xede9,	// (0x000a59bb) att_opt_row_pane_t1_ParamLimits

0xede9,	// (0x000a59bb) att_opt_row_pane_t1

0x93ab,	// (0x0009ff7d) att_li_srv_row_pane_g1

0x93b3,	// (0x0009ff85) att_li_srv_row_pane_t1_ParamLimits

0x93b3,	// (0x0009ff85) att_li_srv_row_pane_t1

0x93b3,	// (0x0009ff85) att_li_srv_row_pane_t2_ParamLimits

0x93b3,	// (0x0009ff85) att_li_srv_row_pane_t2

0x0001,

0xfb61,	// (0x000a6733) att_li_srv_row_pane_t_ParamLimits

0xfb61,	// (0x000a6733) att_li_srv_row_pane_t

0xee02,	// (0x000a59d4) att_btn_close_pane_g1

0xacbc,	// (0x000a188e) bg_button_pane_cp24

0x93c8,	// (0x0009ff9a) main_vod_body_pane_ParamLimits

0x93c8,	// (0x0009ff9a) main_vod_body_pane

0x93dc,	// (0x0009ffae) main_vod_body_pane_g1_ParamLimits

0x93dc,	// (0x0009ffae) main_vod_body_pane_g1

0x9410,	// (0x0009ffe2) scroll_pane_cp24_ParamLimits

0x9410,	// (0x0009ffe2) scroll_pane_cp24

0x945e,	// (0x000a0030) vod_btn_pane_ParamLimits

0x945e,	// (0x000a0030) vod_btn_pane

0x94a4,	// (0x000a0076) vod_det_pane_ParamLimits

0x94a4,	// (0x000a0076) vod_det_pane

0x94d4,	// (0x000a00a6) vod_logo_g1_ParamLimits

0x94d4,	// (0x000a00a6) vod_logo_g1

0x9512,	// (0x000a00e4) vod_opt_pane_ParamLimits

0x9512,	// (0x000a00e4) vod_opt_pane

0x9545,	// (0x000a0117) vod_opt_pane_cp01_ParamLimits

0x9545,	// (0x000a0117) vod_opt_pane_cp01

0x9571,	// (0x000a0143) vod_query_pane_ParamLimits

0x9571,	// (0x000a0143) vod_query_pane

0x959c,	// (0x000a016e) vod_query_pane_cp01_ParamLimits

0x959c,	// (0x000a016e) vod_query_pane_cp01

0x95a8,	// (0x000a017a) vod_t_nml_pane_ParamLimits

0x95a8,	// (0x000a017a) vod_t_nml_pane

0x9651,	// (0x000a0223) vod_t_nml_pane_cp01_ParamLimits

0x9651,	// (0x000a0223) vod_t_nml_pane_cp01

0x968d,	// (0x000a025f) vod_t_sub_pane_ParamLimits

0x968d,	// (0x000a025f) vod_t_sub_pane

0x96be,	// (0x000a0290) vod_t_sub_pane_cp01_ParamLimits

0x96be,	// (0x000a0290) vod_t_sub_pane_cp01

0xedbb,	// (0x000a598d) vod_query_field_pane

0xee0a,	// (0x000a59dc) vod_query_pane_t1

0xee19,	// (0x000a59eb) bg_button_pane_cp25

0xeaa8,	// (0x000a567a) sso_btn_pane_t1_copy2

0x96ea,	// (0x000a02bc) vod_t_nml_pane_t1_ParamLimits

0x96ea,	// (0x000a02bc) vod_t_nml_pane_t1

0xee22,	// (0x000a59f4) vod_opt_row_pane_ParamLimits

0xee22,	// (0x000a59f4) vod_opt_row_pane

0xee34,	// (0x000a5a06) vod_t_sub_pane_t1_ParamLimits

0xee34,	// (0x000a5a06) vod_t_sub_pane_t1

0xee4d,	// (0x000a5a1f) vod_det_cell_pane_ParamLimits

0xee4d,	// (0x000a5a1f) vod_det_cell_pane

0xacbc,	// (0x000a188e) input_focus_pane_cp15

0xee5e,	// (0x000a5a30) vod_query_field_pane_t1

0xee6c,	// (0x000a5a3e) vod_opt_row_pane_g1_ParamLimits

0xee6c,	// (0x000a5a3e) vod_opt_row_pane_g1

0xee78,	// (0x000a5a4a) vod_opt_row_pane_t1_ParamLimits

0xee78,	// (0x000a5a4a) vod_opt_row_pane_t1

0xee98,	// (0x000a5a6a) vod_det_cell_field_pane

0xeea1,	// (0x000a5a73) vod_det_cell_pane_g1

0xeea9,	// (0x000a5a7b) vod_det_cell_pane_t1

0xacbc,	// (0x000a188e) input_focus_pane_cp16

0xeeb8,	// (0x000a5a8a) vod_det_cell_field_pane_t1

0x9719,	// (0x000a02eb) call7_btn_grp_pane_ParamLimits

0x9719,	// (0x000a02eb) call7_btn_grp_pane

0x9733,	// (0x000a0305) call7_bubble_pane_ParamLimits

0x9733,	// (0x000a0305) call7_bubble_pane

0x974a,	// (0x000a031c) cell_call7_btn_pane_ParamLimits

0x974a,	// (0x000a031c) cell_call7_btn_pane

0x975e,	// (0x000a0330) call7_pane_g1_ParamLimits

0x975e,	// (0x000a0330) call7_pane_g1

0x976d,	// (0x000a033f) call7_windows_conf_pane_ParamLimits

0x976d,	// (0x000a033f) call7_windows_conf_pane

0x9787,	// (0x000a0359) popup_call7_1st_window_ParamLimits

0x9787,	// (0x000a0359) popup_call7_1st_window

0x9798,	// (0x000a036a) popup_call7_2nd_window_ParamLimits

0x9798,	// (0x000a036a) popup_call7_2nd_window

0x97a9,	// (0x000a037b) popup_call7_3rd_window_ParamLimits

0x97a9,	// (0x000a037b) popup_call7_3rd_window

0xacbc,	// (0x000a188e) bg_button_pane_cp26

0xe866,	// (0x000a5438) cell_call7_btn_pane_g1

0xe950,	// (0x000a5522) cell_call7_btn_pane_t1

0xacbc,	// (0x000a188e) bg_popup_window_pane_cp12

0xeec6,	// (0x000a5a98) popup_call7_1st_window_g1

0xeece,	// (0x000a5aa0) popup_call7_1st_window_g2

0xeed6,	// (0x000a5aa8) popup_call7_1st_window_g3

0x0002,

0xfb66,	// (0x000a6738) popup_call7_1st_window_g

0xeede,	// (0x000a5ab0) popup_call7_1st_window_t1

0xeeed,	// (0x000a5abf) popup_call7_1st_window_t2

0xeefb,	// (0x000a5acd) popup_call7_1st_window_t3

0x0002,

0xfb6d,	// (0x000a673f) popup_call7_1st_window_t

0xacbc,	// (0x000a188e) bg_popup_window_pane_cp13

0xef09,	// (0x000a5adb) popup_call7_2nd_window_g1

0xef11,	// (0x000a5ae3) popup_call7_2nd_window_g2

0xef19,	// (0x000a5aeb) popup_call7_2nd_window_g3

0x0002,

0xfb74,	// (0x000a6746) popup_call7_2nd_window_g

0xef21,	// (0x000a5af3) popup_call7_2nd_window_t1

0xacbc,	// (0x000a188e) bg_popup_window_pane_cp14

0xef30,	// (0x000a5b02) call7_list_conf_pane

0xef38,	// (0x000a5b0a) call7_list_conf_row_pane_ParamLimits

0xef38,	// (0x000a5b0a) call7_list_conf_row_pane

0xef4b,	// (0x000a5b1d) call7_list_conf_row_pane_g1

0xef53,	// (0x000a5b25) call7_list_conf_row_pane_g2

0x0001,

0xfb7b,	// (0x000a674d) call7_list_conf_row_pane_g

0xef5b,	// (0x000a5b2d) call7_list_conf_row_pane_t1

0xacbc,	// (0x000a188e) list_highlight_pane_cp22

0x8d18,	// (0x0009f8ea) sso_option_pane_cp01_ParamLimits

0x8d18,	// (0x0009f8ea) sso_option_pane_cp01

0xb465,	// (0x000a2037) msg_header_pane_ParamLimits

0xc2d7,	// (0x000a2ea9) bg_button_pane_cp01_ParamLimits

0xc2eb,	// (0x000a2ebd) input_focus_pane_cp07_ParamLimits

0x7569,	// (0x0009e13b) popup_email_progress_window

0xb52c,	// (0x000a20fe) popup_email_progress_window_g1

0xef69,	// (0x000a5b3b) popup_email_progress_window_g2

0x0001,

0xfb80,	// (0x000a6752) popup_email_progress_window_g

0xef71,	// (0x000a5b43) popup_email_progress_window_t1

0xacbc,	// (0x000a188e) cmail_conv_pane

0xe17f,	// (0x000a4d51) list_single_dyc_row_pane_g5_ParamLimits

0xe17f,	// (0x000a4d51) list_single_dyc_row_pane_g5

0xe18b,	// (0x000a4d5d) list_single_dyc_row_pane_g6_ParamLimits

0xe18b,	// (0x000a4d5d) list_single_dyc_row_pane_g6

0xe1a3,	// (0x000a4d75) list_single_dyc_row_pane_g7_ParamLimits

0xe1a3,	// (0x000a4d75) list_single_dyc_row_pane_g7

0x862e,	// (0x0009f200) main_button_pane_5_ParamLimits

0x862e,	// (0x0009f200) main_button_pane_5

0x8b55,	// (0x0009f727) sso_emg_call_btn_pane_ParamLimits

0x8b55,	// (0x0009f727) sso_emg_call_btn_pane

0x8ebb,	// (0x0009fa8d) sso_t_sub_pane_cp01_ParamLimits

0x8ebb,	// (0x0009fa8d) sso_t_sub_pane_cp01

0xece8,	// (0x000a58ba) sso_option_row_pane_g1_ParamLimits

0xecf4,	// (0x000a58c6) sso_option_row_pane_g2_ParamLimits

0xecf4,	// (0x000a58c6) sso_option_row_pane_g2

0x0001,

0x09e9,	// (0x000975bb) sso_option_row_pane_g_ParamLimits

0x09e9,	// (0x000975bb) sso_option_row_pane_g

0x9062,	// (0x0009fc34) att_btn_pane_cp02_ParamLimits

0x9062,	// (0x0009fc34) att_btn_pane_cp02

0xef7f,	// (0x000a5b51) cmail_conv_hdr_pane

0xef88,	// (0x000a5b5a) list_cmail_conv_pane

0xef92,	// (0x000a5b64) scroll_pane_cp31

0xef9a,	// (0x000a5b6c) cmail_conv_hdr_pane_t1

0xefa8,	// (0x000a5b7a) cmail_conv_hdr_pane_t2

0x0001,

0xfb85,	// (0x000a6757) cmail_conv_hdr_pane_t

0xefb6,	// (0x000a5b88) bubble_cmail_conv_pane_ParamLimits

0xefb6,	// (0x000a5b88) bubble_cmail_conv_pane

0xb0a0,	// (0x000a1c72) aid_size_colorization_pane

0xb792,	// (0x000a2364) bg_bubble_cmail_conv_pane

0xefce,	// (0x000a5ba0) body_bubble_cmail_conv_pane

0xbc69,	// (0x000a283b) bubble_cmail_conv_pane_g1

0xefd6,	// (0x000a5ba8) bubble_cmail_conv_pane_g2

0xefde,	// (0x000a5bb0) bubble_cmail_conv_pane_g3

0x0002,

0xfb8a,	// (0x000a675c) bubble_cmail_conv_pane_g

0xefe6,	// (0x000a5bb8) bubble_cmail_conv_pane_t1

0xab7d,	// (0x000a174f) bg_bubble_cmail_conv_pane_g1

0xab86,	// (0x000a1758) bg_bubble_cmail_conv_pane_g2

0xab8f,	// (0x000a1761) bg_bubble_cmail_conv_pane_g3

0x0002,

0x07b4,	// (0x00097386) bg_bubble_cmail_conv_pane_g

0xeff4,	// (0x000a5bc6) body_bubble_cmail_conv_pane_t1_ParamLimits

0xeff4,	// (0x000a5bc6) body_bubble_cmail_conv_pane_t1

0xf00b,	// (0x000a5bdd) body_bubble_cmail_conv_pane_t2_ParamLimits

0xf00b,	// (0x000a5bdd) body_bubble_cmail_conv_pane_t2

0x0001,

0xfb91,	// (0x000a6763) body_bubble_cmail_conv_pane_t_ParamLimits

0xfb91,	// (0x000a6763) body_bubble_cmail_conv_pane_t

0xb487,	// (0x000a2059) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large

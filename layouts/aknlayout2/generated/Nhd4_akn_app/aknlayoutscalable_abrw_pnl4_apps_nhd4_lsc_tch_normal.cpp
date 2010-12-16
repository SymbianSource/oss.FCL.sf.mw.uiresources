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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00029b5b };

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
0x1ee5,	// (0x0002ba40) Screen

0x1ef1,	// (0x0002ba4c) application_window

0x1efd,	// (0x0002ba58) area_bottom_pane_ParamLimits

0x1efd,	// (0x0002ba58) area_bottom_pane

0x0a6a,	// (0x0002a5c5) area_top_pane_ParamLimits

0x0a6a,	// (0x0002a5c5) area_top_pane

0xb0ba,	// (0x00034c15) call_video_uplink_pane_ParamLimits

0xb0ba,	// (0x00034c15) call_video_uplink_pane

0x0af8,	// (0x0002a653) main_pane_ParamLimits

0x0af8,	// (0x0002a653) main_pane

0xe44d,	// (0x00037fa8) context_pane

0x4430,	// (0x0002df8b) navi_pane

0x4462,	// (0x0002dfbd) popup_cale_events_window_ParamLimits

0x4462,	// (0x0002dfbd) popup_cale_events_window

0xe460,	// (0x00037fbb) popup_mup_playback_window

0x447a,	// (0x0002dfd5) signal_pane

0xc5c1,	// (0x0003611c) main_browser_pane

0xc7c9,	// (0x00036324) main_burst_pane

0x0f06,	// (0x0002aa61) main_calc_pane

0xe441,	// (0x00037f9c) main_cale_day_pane

0x0db0,	// (0x0002a90b) main_cale_month_pane

0xe441,	// (0x00037f9c) main_cale_week_pane

0xc7c9,	// (0x00036324) main_call_pane

0xc241,	// (0x00035d9c) main_call_poc_pane

0xc7c9,	// (0x00036324) main_camera_pane

0xc7c9,	// (0x00036324) main_chi_dic_pane

0xcf32,	// (0x00036a8d) main_clock_pane

0xc241,	// (0x00035d9c) main_fmradio_pane

0xc7c9,	// (0x00036324) main_graph_messa_pane

0xc241,	// (0x00035d9c) main_help_pane

0xc5c1,	// (0x0003611c) main_im_pane

0xc4aa,	// (0x00036005) main_image_pane_ParamLimits

0xc4aa,	// (0x00036005) main_image_pane

0xc241,	// (0x00035d9c) main_location2_pane

0xc7c9,	// (0x00036324) main_location_pane

0xc4aa,	// (0x00036005) main_messa_pane

0xc241,	// (0x00035d9c) main_mp2_pane

0xc7c9,	// (0x00036324) main_mp_pane

0xc241,	// (0x00035d9c) main_msg_pane

0xc241,	// (0x00035d9c) main_mup_eq_pane

0xc241,	// (0x00035d9c) main_mup_pane

0xc5c1,	// (0x0003611c) main_notes_pane

0xc241,	// (0x00035d9c) main_pec_pane

0xc241,	// (0x00035d9c) main_phob_pane

0xc241,	// (0x00035d9c) main_pinb_pane

0xc241,	// (0x00035d9c) main_postcard_pane

0xc241,	// (0x00035d9c) main_qdial_pane

0xc7c9,	// (0x00036324) main_skin_pane

0xc241,	// (0x00035d9c) main_smil2_pane

0xc7c9,	// (0x00036324) main_smil_pane

0xc7c9,	// (0x00036324) main_video_pane

0xc7c9,	// (0x00036324) main_video_tele_pane

0xc4aa,	// (0x00036005) main_viewer_pane_ParamLimits

0xc4aa,	// (0x00036005) main_viewer_pane

0xc7c9,	// (0x00036324) main_vorec_pane

0x0f5a,	// (0x0002aab5) popup_blid_sat_info_window_ParamLimits

0x0f5a,	// (0x0002aab5) popup_blid_sat_info_window

0x0fb2,	// (0x0002ab0d) popup_dyc_status_message_window_ParamLimits

0x0fb2,	// (0x0002ab0d) popup_dyc_status_message_window

0x0fca,	// (0x0002ab25) popup_grid_large_graphic_window_ParamLimits

0x0fca,	// (0x0002ab25) popup_grid_large_graphic_window

0x107a,	// (0x0002abd5) popup_loc_request_window_ParamLimits

0x107a,	// (0x0002abd5) popup_loc_request_window

0x1176,	// (0x0002acd1) popup_wml_address_window_ParamLimits

0x1176,	// (0x0002acd1) popup_wml_address_window

0x4274,	// (0x0002ddcf) call_muted_g1

0x3f69,	// (0x0002dac4) popup_call_audio_conf_window_ParamLimits

0x3f69,	// (0x0002dac4) popup_call_audio_conf_window

0x4288,	// (0x0002dde3) popup_call_audio_first_window_ParamLimits

0x4288,	// (0x0002dde3) popup_call_audio_first_window

0x42fe,	// (0x0002de59) popup_call_audio_in_window_ParamLimits

0x42fe,	// (0x0002de59) popup_call_audio_in_window

0x433a,	// (0x0002de95) popup_call_audio_out_window_ParamLimits

0x433a,	// (0x0002de95) popup_call_audio_out_window

0x4374,	// (0x0002decf) popup_call_audio_second_window_ParamLimits

0x4374,	// (0x0002decf) popup_call_audio_second_window

0x43ca,	// (0x0002df25) popup_call_audio_wait_window_ParamLimits

0x43ca,	// (0x0002df25) popup_call_audio_wait_window

0x43ff,	// (0x0002df5a) popup_number_entry_window_ParamLimits

0x43ff,	// (0x0002df5a) popup_number_entry_window

0xbe2e,	// (0x00035989) bg_popup_call_pane_cp05_ParamLimits

0xbe2e,	// (0x00035989) bg_popup_call_pane_cp05

0xbe4e,	// (0x000359a9) popup_number_entry_window_t1

0xbe61,	// (0x000359bc) popup_number_entry_window_t2

0xbe73,	// (0x000359ce) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00038b78) popup_number_entry_window_t

0xbe85,	// (0x000359e0) text_title_cp2

0xbe98,	// (0x000359f3) bg_popup_call_pane_cp_ParamLimits

0xbe98,	// (0x000359f3) bg_popup_call_pane_cp

0xbea6,	// (0x00035a01) call_thumbnail_pane

0xbeae,	// (0x00035a09) popup_call_audio_in_window_g1_ParamLimits

0xbeae,	// (0x00035a09) popup_call_audio_in_window_g1

0xbeba,	// (0x00035a15) popup_call_audio_in_window_g2_ParamLimits

0xbeba,	// (0x00035a15) popup_call_audio_in_window_g2

0xbec6,	// (0x00035a21) popup_call_audio_in_window_g3_ParamLimits

0xbec6,	// (0x00035a21) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00038b81) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00038b81) popup_call_audio_in_window_g

0xbed2,	// (0x00035a2d) popup_call_audio_in_window_t1_ParamLimits

0xbed2,	// (0x00035a2d) popup_call_audio_in_window_t1

0xbeee,	// (0x00035a49) popup_call_audio_in_window_t2_ParamLimits

0xbeee,	// (0x00035a49) popup_call_audio_in_window_t2

0xbf0a,	// (0x00035a65) popup_call_audio_in_window_t3_ParamLimits

0xbf0a,	// (0x00035a65) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00038b88) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00038b88) popup_call_audio_in_window_t

0xbe98,	// (0x000359f3) bg_popup_call_pane_cp01_ParamLimits

0xbe98,	// (0x000359f3) bg_popup_call_pane_cp01

0xbea6,	// (0x00035a01) call_thumbnail_pane_cp02

0xbf1d,	// (0x00035a78) call_type_pane_cp022

0xbf25,	// (0x00035a80) popup_call_audio_out_window_g1_ParamLimits

0xbf25,	// (0x00035a80) popup_call_audio_out_window_g1

0xbf37,	// (0x00035a92) popup_call_audio_out_window_g2_ParamLimits

0xbf37,	// (0x00035a92) popup_call_audio_out_window_g2

0xbf43,	// (0x00035a9e) popup_call_audio_out_window_g3_ParamLimits

0xbf43,	// (0x00035a9e) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00038b8f) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00038b8f) popup_call_audio_out_window_g

0xbf55,	// (0x00035ab0) popup_call_audio_out_window_t1_ParamLimits

0xbf55,	// (0x00035ab0) popup_call_audio_out_window_t1

0xbf6d,	// (0x00035ac8) popup_call_audio_out_window_t2_ParamLimits

0xbf6d,	// (0x00035ac8) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00038b96) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00038b96) popup_call_audio_out_window_t

0xbf82,	// (0x00035add) bg_popup_call_pane_ParamLimits

0xbf82,	// (0x00035add) bg_popup_call_pane

0x1f77,	// (0x0002bad2) call_thumbnail_pane_cp_ParamLimits

0x1f77,	// (0x0002bad2) call_thumbnail_pane_cp

0xc006,	// (0x00035b61) call_type_pane_cp01_ParamLimits

0xc006,	// (0x00035b61) call_type_pane_cp01

0xc04a,	// (0x00035ba5) popup_call_audio_first_window_g1_ParamLimits

0xc04a,	// (0x00035ba5) popup_call_audio_first_window_g1

0xc096,	// (0x00035bf1) popup_call_audio_first_window_g2_ParamLimits

0xc096,	// (0x00035bf1) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00038b9b) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00038b9b) popup_call_audio_first_window_g

0xc0da,	// (0x00035c35) popup_call_audio_first_window_t1_ParamLimits

0xc0da,	// (0x00035c35) popup_call_audio_first_window_t1

0xc186,	// (0x00035ce1) popup_call_audio_first_window_t4_ParamLimits

0xc186,	// (0x00035ce1) popup_call_audio_first_window_t4

0xc212,	// (0x00035d6d) popup_call_audio_first_window_t5_ParamLimits

0xc212,	// (0x00035d6d) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00038ba0) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00038ba0) popup_call_audio_first_window_t

0xc241,	// (0x00035d9c) bg_popup_call_pane_cp02

0xc259,	// (0x00035db4) call_type_pane_cp023

0xc261,	// (0x00035dbc) popup_call_audio_wait_window_g1

0xc269,	// (0x00035dc4) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00038ba7) popup_call_audio_wait_window_g

0xc271,	// (0x00035dcc) popup_call_audio_wait_window_t3

0xc27f,	// (0x00035dda) bg_popup_call_pane_cp03_ParamLimits

0xc27f,	// (0x00035dda) bg_popup_call_pane_cp03

0xc2df,	// (0x00035e3a) call_thumbnail_pane_cp011_ParamLimits

0xc2df,	// (0x00035e3a) call_thumbnail_pane_cp011

0xc2eb,	// (0x00035e46) call_type_pane_cp034_ParamLimits

0xc2eb,	// (0x00035e46) call_type_pane_cp034

0xc327,	// (0x00035e82) popup_call_audio_second_window_g1_ParamLimits

0xc327,	// (0x00035e82) popup_call_audio_second_window_g1

0xc363,	// (0x00035ebe) popup_call_audio_second_window_g2_ParamLimits

0xc363,	// (0x00035ebe) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00038bac) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00038bac) popup_call_audio_second_window_g

0xc39f,	// (0x00035efa) popup_call_audio_second_window_t1_ParamLimits

0xc39f,	// (0x00035efa) popup_call_audio_second_window_t1

0xc420,	// (0x00035f7b) popup_call_audio_second_window_t2_ParamLimits

0xc420,	// (0x00035f7b) popup_call_audio_second_window_t2

0xc456,	// (0x00035fb1) popup_call_audio_second_window_t3_ParamLimits

0xc456,	// (0x00035fb1) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00038bb1) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00038bb1) popup_call_audio_second_window_t

0xc241,	// (0x00035d9c) bg_popup_call_pane_cp04

0xc48c,	// (0x00035fe7) list_conf_pane

0xc494,	// (0x00035fef) popup_call_audio_conf_window_t1

0xc4a2,	// (0x00035ffd) call_thumbnail_pane_g1

0xc4aa,	// (0x00036005) bg_pinb_pane_ParamLimits

0xc4aa,	// (0x00036005) bg_pinb_pane

0xc4b8,	// (0x00036013) find_pinb_pane

0xc4aa,	// (0x00036005) listscroll_pinb_pane_ParamLimits

0xc4aa,	// (0x00036005) listscroll_pinb_pane

0xc4c2,	// (0x0003601d) pinb_bg_pane_g1

0xc4c2,	// (0x0003601d) pinb_bg_pane_g2

0xc4c2,	// (0x0003601d) pinb_bg_pane_g3

0xc4c2,	// (0x0003601d) pinb_bg_pane_g4

0xc4c2,	// (0x0003601d) pinb_bg_pane_g5

0xc4c2,	// (0x0003601d) pinb_bg_pane_g6

0xc4c2,	// (0x0003601d) pinb_bg_pane_g7

0xc4c2,	// (0x0003601d) pinb_bg_pane_g8

0xc4c2,	// (0x0003601d) pinb_bg_pane_g9

0xc4c2,	// (0x0003601d) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00038bb8) pinb_bg_pane_g

0xbe24,	// (0x0003597f) grid_pinb_pane

0xbe24,	// (0x0003597f) list_pinb_pane

0xc24b,	// (0x00035da6) scroll_pane_cp01_ParamLimits

0xc24b,	// (0x00035da6) scroll_pane_cp01

0xc4cc,	// (0x00036027) find_pinb_pane_g1_ParamLimits

0xc4cc,	// (0x00036027) find_pinb_pane_g1

0xc4e4,	// (0x0003603f) find_pinb_pane_t1

0xc4f6,	// (0x00036051) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00038bd2) find_pinb_pane_t

0xc50b,	// (0x00036066) input_focus_pane_cp01_ParamLimits

0xc50b,	// (0x00036066) input_focus_pane_cp01

0xc517,	// (0x00036072) cell_pinb_pane_ParamLimits

0xc517,	// (0x00036072) cell_pinb_pane

0xc525,	// (0x00036080) cell_pinb_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_pinb_pane_g1

0xc533,	// (0x0003608e) cell_pinb_pane_g2_ParamLimits

0xc533,	// (0x0003608e) cell_pinb_pane_g2

0xc533,	// (0x0003608e) cell_pinb_pane_g3_ParamLimits

0xc533,	// (0x0003608e) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00038bd7) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00038bd7) cell_pinb_pane_g

0xc241,	// (0x00035d9c) grid_highlight_pane_cp01

0xc517,	// (0x00036072) list_pinb_item_pane_ParamLimits

0xc517,	// (0x00036072) list_pinb_item_pane

0xbe24,	// (0x0003597f) list_highlight_pane_cp02

0xc541,	// (0x0003609c) list_pinb_item_pane_g1_ParamLimits

0xc541,	// (0x0003609c) list_pinb_item_pane_g1

0xc533,	// (0x0003608e) list_pinb_item_pane_g2_ParamLimits

0xc533,	// (0x0003608e) list_pinb_item_pane_g2

0xc525,	// (0x00036080) list_pinb_item_pane_g3_ParamLimits

0xc525,	// (0x00036080) list_pinb_item_pane_g3

0xc533,	// (0x0003608e) list_pinb_item_pane_g4_ParamLimits

0xc533,	// (0x0003608e) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00038bde) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00038bde) list_pinb_item_pane_g

0xc54f,	// (0x000360aa) list_pinb_item_pane_t1_ParamLimits

0xc54f,	// (0x000360aa) list_pinb_item_pane_t1

0x0c91,	// (0x0002a7ec) calc_display_pane

0x0cb6,	// (0x0002a811) calc_paper_pane

0x0cd9,	// (0x0002a834) grid_calc_pane

0xbe24,	// (0x0003597f) bg_list_pane_cp01

0xc563,	// (0x000360be) clock_g1

0xc563,	// (0x000360be) clock_g2

0x0001,

0xf08c,	// (0x00038be7) clock_g

0xc56d,	// (0x000360c8) clock_t1_ParamLimits

0xc56d,	// (0x000360c8) clock_t1

0xc581,	// (0x000360dc) clock_t2_ParamLimits

0xc581,	// (0x000360dc) clock_t2

0xc581,	// (0x000360dc) clock_t3_ParamLimits

0xc581,	// (0x000360dc) clock_t3

0xc581,	// (0x000360dc) clock_t4_ParamLimits

0xc581,	// (0x000360dc) clock_t4

0xc56d,	// (0x000360c8) clock_t5_ParamLimits

0xc56d,	// (0x000360c8) clock_t5

0xc581,	// (0x000360dc) clock_t6_ParamLimits

0xc581,	// (0x000360dc) clock_t6

0xc581,	// (0x000360dc) clock_t7_ParamLimits

0xc581,	// (0x000360dc) clock_t7

0xc581,	// (0x000360dc) clock_t8_ParamLimits

0xc581,	// (0x000360dc) clock_t8

0xc581,	// (0x000360dc) clock_t9_ParamLimits

0xc581,	// (0x000360dc) clock_t9

0x0008,

0xf091,	// (0x00038bec) clock_t_ParamLimits

0xf091,	// (0x00038bec) clock_t

0xbe24,	// (0x0003597f) popup_clock_analogue_window_cp02

0xbe24,	// (0x0003597f) popup_clock_digital_window_cp01

0xc241,	// (0x00035d9c) listscroll_help_pane

0xc241,	// (0x00035d9c) phob_pre_status_pane

0xc595,	// (0x000360f0) grid_qdial_pane

0xc4aa,	// (0x00036005) listscroll_mce_pane

0xc4aa,	// (0x00036005) bg_notes_pane

0xc59f,	// (0x000360fa) list_notes_pane

0x1f9b,	// (0x0002baf6) scroll_pane_cp06

0xc5ad,	// (0x00036108) bg_calc_paper_pane

0xb0f8,	// (0x00034c53) list_calc_pane

0xc5c1,	// (0x0003611c) bg_calc_display_pane

0x0d07,	// (0x0002a862) calc_display_pane_t1

0x0d19,	// (0x0002a874) calc_display_pane_t2

0xb112,	// (0x00034c6d) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00038bff) calc_display_pane_t

0x0d2b,	// (0x0002a886) cell_calc_pane_ParamLimits

0x0d2b,	// (0x0002a886) cell_calc_pane

0xc5cd,	// (0x00036128) bg_calc_paper_pane_g1

0xc5d9,	// (0x00036134) bg_calc_paper_pane_g2

0xc5e5,	// (0x00036140) bg_calc_paper_pane_g3

0xc5f1,	// (0x0003614c) bg_calc_paper_pane_g4

0xc5fd,	// (0x00036158) bg_calc_paper_pane_g5

0x1faf,	// (0x0002bb0a) bg_calc_paper_pane_g6

0x1fbe,	// (0x0002bb19) bg_calc_paper_pane_g7

0x1fcd,	// (0x0002bb28) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00038c06) bg_calc_paper_pane_g

0x1fe0,	// (0x0002bb3b) calc_bg_paper_pane_g9

0x1ff3,	// (0x0002bb4e) list_calc_item_pane_ParamLimits

0x1ff3,	// (0x0002bb4e) list_calc_item_pane

0xc609,	// (0x00036164) list_calc_item_pane_g1

0xb124,	// (0x00034c7f) list_calc_item_pane_t1_ParamLimits

0xb124,	// (0x00034c7f) list_calc_item_pane_t1

0x0d60,	// (0x0002a8bb) list_calc_item_pane_t2_ParamLimits

0x0d60,	// (0x0002a8bb) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00038c17) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00038c17) list_calc_item_pane_t

0xc4c2,	// (0x0003601d) cell_calc_pane_g1

0xc616,	// (0x00036171) grid_highlight_pane_cp02

0x2008,	// (0x0002bb63) bg_calc_display_pane_g1

0x0d92,	// (0x0002a8ed) bg_calc_display_pane_g2

0xc690,	// (0x000361eb) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00038c21) bg_calc_display_pane_g

0x0d9c,	// (0x0002a8f7) cell_qdial_pane_ParamLimits

0x0d9c,	// (0x0002a8f7) cell_qdial_pane

0x2011,	// (0x0002bb6c) cell_qdial_pane_g1_ParamLimits

0x2011,	// (0x0002bb6c) cell_qdial_pane_g1

0x2027,	// (0x0002bb82) cell_qdial_pane_g2_ParamLimits

0x2027,	// (0x0002bb82) cell_qdial_pane_g2

0xc638,	// (0x00036193) cell_qdial_pane_g3_ParamLimits

0xc638,	// (0x00036193) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00038c28) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00038c28) cell_qdial_pane_g

0x204d,	// (0x0002bba8) cell_qdial_pane_t1_ParamLimits

0x204d,	// (0x0002bba8) cell_qdial_pane_t1

0x2065,	// (0x0002bbc0) cell_qdial_pane_t2_ParamLimits

0x2065,	// (0x0002bbc0) cell_qdial_pane_t2

0x2078,	// (0x0002bbd3) cell_qdial_pane_t3_ParamLimits

0x2078,	// (0x0002bbd3) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00038c31) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00038c31) cell_qdial_pane_t

0xc241,	// (0x00035d9c) grid_highlight_pane_cp04

0xc644,	// (0x0003619f) thumbnail_qdial_pane_ParamLimits

0xc644,	// (0x0003619f) thumbnail_qdial_pane

0xc6a9,	// (0x00036204) list_help_pane

0xc6b2,	// (0x0003620d) scroll_pane_cp02

0x208b,	// (0x0002bbe6) help_list_pane_t1_ParamLimits

0x208b,	// (0x0002bbe6) help_list_pane_t1

0xc6bb,	// (0x00036216) bg_notes_pane_g2

0xc6c3,	// (0x0003621e) bg_notes_pane_g3

0xc6cb,	// (0x00036226) notes_bg_pane_g1

0xc6d3,	// (0x0003622e) notes_bg_pane_g4

0xc6db,	// (0x00036236) notes_bg_pane_g5

0xc6e3,	// (0x0003623e) notes_bg_pane_g6

0xc6eb,	// (0x00036246) notes_bg_pane_g7

0xc6f3,	// (0x0003624e) notes_bg_pane_g8

0xc6fb,	// (0x00036256) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00038c4f) notes_bg_pane_g

0x20aa,	// (0x0002bc05) list_notes_text_pane_ParamLimits

0x20aa,	// (0x0002bc05) list_notes_text_pane

0xc703,	// (0x0003625e) list_notes_text_pane_g1

0xc70c,	// (0x00036267) list_notes_text_pane_t1

0x0db0,	// (0x0002a90b) listscroll_cale_week_pane

0x20da,	// (0x0002bc35) bg_cale_heading_pane

0xc72b,	// (0x00036286) bg_cale_pane_cp01

0x20f2,	// (0x0002bc4d) cale_week_corner_pane

0x2111,	// (0x0002bc6c) cale_week_day_heading_pane

0x212e,	// (0x0002bc89) cale_week_scroll_pane_g1

0x2141,	// (0x0002bc9c) cale_week_scroll_pane_g2

0x2159,	// (0x0002bcb4) cale_week_scroll_pane_g3

0x2171,	// (0x0002bccc) cale_week_scroll_pane_g4

0x2189,	// (0x0002bce4) cale_week_scroll_pane_g5

0x21a9,	// (0x0002bd04) cale_week_scroll_pane_g6

0x21c9,	// (0x0002bd24) cale_week_scroll_pane_g7

0x21e9,	// (0x0002bd44) cale_week_scroll_pane_g8

0x220d,	// (0x0002bd68) cale_week_scroll_pane_g9

0x2225,	// (0x0002bd80) cale_week_scroll_pane_g10

0x223d,	// (0x0002bd98) cale_week_scroll_pane_g11

0x2255,	// (0x0002bdb0) cale_week_scroll_pane_g12

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g13

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g14

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00038c5e) cale_week_scroll_pane_g

0x22a9,	// (0x0002be04) cale_week_time_pane

0x22cd,	// (0x0002be28) grid_cale_week_pane

0xc75a,	// (0x000362b5) scroll_pane_cp08

0x22f3,	// (0x0002be4e) cell_cale_week_pane_ParamLimits

0x22f3,	// (0x0002be4e) cell_cale_week_pane

0x2381,	// (0x0002bedc) cale_week_day_heading_pane_t1

0x23ab,	// (0x0002bf06) cale_week_day_heading_pane_t2

0x23da,	// (0x0002bf35) cale_week_day_heading_pane_t3

0x2409,	// (0x0002bf64) cale_week_day_heading_pane_t4

0x2438,	// (0x0002bf93) cale_week_day_heading_pane_t5

0x246f,	// (0x0002bfca) cale_week_day_heading_pane_t6

0x24a6,	// (0x0002c001) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00038c7f) cale_week_day_heading_pane_t

0xc777,	// (0x000362d2) bg_cale_side_pane

0x0dc2,	// (0x0002a91d) cale_week_time_pane_t1

0x0ddc,	// (0x0002a937) cale_week_time_pane_t2

0x0df6,	// (0x0002a951) cale_week_time_pane_t3

0x0e10,	// (0x0002a96b) cale_week_time_pane_t4

0x0e2a,	// (0x0002a985) cale_week_time_pane_t5

0x0e44,	// (0x0002a99f) cale_week_time_pane_t6

0x0e5e,	// (0x0002a9b9) cale_week_time_pane_t7

0x0e78,	// (0x0002a9d3) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00038c8e) cale_week_time_pane_t

0x24d0,	// (0x0002c02b) cell_cale_week_pane_g2

0x24f4,	// (0x0002c04f) cell_cale_week_pane_g3_ParamLimits

0x24f4,	// (0x0002c04f) cell_cale_week_pane_g3

0xc785,	// (0x000362e0) grid_highlight_pane_cp07

0xc78d,	// (0x000362e8) listscroll_gms_pane

0xc797,	// (0x000362f2) grid_gms_pane

0xc7a0,	// (0x000362fb) listscroll_gms_pane_g1

0xc7a8,	// (0x00036303) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00038c9f) listscroll_gms_pane_g

0x250c,	// (0x0002c067) scroll_pane_cp010

0x2517,	// (0x0002c072) cell_gms_pane_ParamLimits

0x2517,	// (0x0002c072) cell_gms_pane

0x2529,	// (0x0002c084) cell_gms_pane_g1

0xc7b0,	// (0x0003630b) cell_gms_pane_g2

0xc703,	// (0x0003625e) cell_gms_pane_g3

0xc7b8,	// (0x00036313) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00038ca4) cell_gms_pane_g

0xc7c1,	// (0x0003631c) grid_highlight_pane_cp09

0x41fc,	// (0x0002dd57) phob_pre_status_pane_g1

0x4204,	// (0x0002dd5f) phob_pre_status_pane_g2

0x420c,	// (0x0002dd67) phob_pre_status_pane_g3

0x4214,	// (0x0002dd6f) phob_pre_status_pane_g4

0x0004,

0xf473,	// (0x00038fce) phob_pre_status_pane_g

0x4224,	// (0x0002dd7f) phob_pre_status_pane_t1

0x4232,	// (0x0002dd8d) phob_pre_status_pane_t2

0x4242,	// (0x0002dd9d) phob_pre_status_pane_t3

0x0002,

0xf47e,	// (0x00038fd9) phob_pre_status_pane_t

0xc7c9,	// (0x00036324) bg_list_pane_cp05

0x2539,	// (0x0002c094) grid_vorec_pane

0x2541,	// (0x0002c09c) vorec_t1

0x254f,	// (0x0002c0aa) vorec_t2

0x255d,	// (0x0002c0b8) vorec_t3

0x256b,	// (0x0002c0c6) vorec_t4

0xb864,	// (0x000353bf) vorec_t5

0x1ecd,	// (0x0002ba28) vorec_t6

0x0004,

0xf152,	// (0x00038cad) vorec_t

0x1edb,	// (0x0002ba36) wait_bar_pane_cp01

0x2587,	// (0x0002c0e2) cell_vorec_pane_ParamLimits

0x2587,	// (0x0002c0e2) cell_vorec_pane

0xb13f,	// (0x00034c9a) cell_vorec_pane_g1

0xc241,	// (0x00035d9c) grid_highlight_pane_cp05

0xc24b,	// (0x00035da6) cams_zoom_pane

0xc24b,	// (0x00035da6) image_vga_pane

0xc525,	// (0x00036080) main_camera_pane_g1

0xc525,	// (0x00036080) main_camera_pane_g2

0xc525,	// (0x00036080) main_camera_pane_g3

0xc525,	// (0x00036080) main_camera_pane_g4

0xc525,	// (0x00036080) main_camera_pane_g5

0xc525,	// (0x00036080) main_camera_pane_g6

0xc525,	// (0x00036080) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00038cb8) main_camera_pane_g

0xc56d,	// (0x000360c8) main_camera_pane_t1

0xc56d,	// (0x000360c8) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00038cc9) main_camera_pane_t

0x25ae,	// (0x0002c109) cams_zoom_pane_cp_ParamLimits

0x25ae,	// (0x0002c109) cams_zoom_pane_cp

0x25e2,	// (0x0002c13d) image_cif_pane_ParamLimits

0x25e2,	// (0x0002c13d) image_cif_pane

0xbe24,	// (0x0003597f) image_subqcif_pane

0x25f4,	// (0x0002c14f) main_video_pane_g1_ParamLimits

0x25f4,	// (0x0002c14f) main_video_pane_g1

0x2622,	// (0x0002c17d) main_video_pane_g2_ParamLimits

0x2622,	// (0x0002c17d) main_video_pane_g2

0x265c,	// (0x0002c1b7) main_video_pane_g3_ParamLimits

0x265c,	// (0x0002c1b7) main_video_pane_g3

0x265c,	// (0x0002c1b7) main_video_pane_g4_ParamLimits

0x265c,	// (0x0002c1b7) main_video_pane_g4

0x2690,	// (0x0002c1eb) main_video_pane_g5_ParamLimits

0x2690,	// (0x0002c1eb) main_video_pane_g5

0xc7d1,	// (0x0003632c) main_video_pane_g6_ParamLimits

0xc7d1,	// (0x0003632c) main_video_pane_g6

0x0006,

0xf173,	// (0x00038cce) main_video_pane_g_ParamLimits

0xf173,	// (0x00038cce) main_video_pane_g

0x26ac,	// (0x0002c207) main_video_pane_t1_ParamLimits

0x26ac,	// (0x0002c207) main_video_pane_t1

0xc563,	// (0x000360be) cams_zoom_pane_g1

0xc563,	// (0x000360be) cams_zoom_pane_g2

0xc563,	// (0x000360be) cams_zoom_pane_g3

0xc563,	// (0x000360be) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00038cdd) cams_zoom_pane_g

0xc24b,	// (0x00035da6) grid_cams_pane

0xc24b,	// (0x00035da6) linegrid_cams_pane

0x26f0,	// (0x0002c24b) cell_cams_pane_ParamLimits

0x26f0,	// (0x0002c24b) cell_cams_pane

0xbe24,	// (0x0003597f) cams_burst_image_pane

0xc563,	// (0x000360be) cell_cams_pane_g1

0xbe24,	// (0x0003597f) grid_highlight_pane_cp03

0xc4c2,	// (0x0003601d) mp_bg_pane_g1

0xbe24,	// (0x0003597f) bg_list_pane_cp03

0xbe24,	// (0x0003597f) bg_mp_pane

0xbe24,	// (0x0003597f) grid_mp_pane

0xc563,	// (0x000360be) media_player_g1

0xccc7,	// (0x00036822) media_player_t1

0xccc7,	// (0x00036822) media_player_t2

0xccc7,	// (0x00036822) media_player_t3

0xccc7,	// (0x00036822) media_player_t4

0xccc7,	// (0x00036822) media_player_t5

0xccc7,	// (0x00036822) media_player_t6

0xccc7,	// (0x00036822) media_player_t7

0x0006,

0xf464,	// (0x00038fbf) media_player_t

0xbe24,	// (0x0003597f) wait_bar_pane_cp02

0xf457,	// (0x00038fb2) main_usb_pane_t

0xcf32,	// (0x00036a8d) cell_mp_pane

0xc4c2,	// (0x0003601d) cell_mp_pane_g1

0xc241,	// (0x00035d9c) grid_highlight_pane_cp06

0xc7eb,	// (0x00036346) grid_skin_colour_pane

0xc7f3,	// (0x0003634e) list_highlight_pane_cp03

0x2705,	// (0x0002c260) skin_g1

0xc7fb,	// (0x00036356) skin_t1

0xc80a,	// (0x00036365) skin_t2

0x0001,

0xf1b0,	// (0x00038d0b) skin_t

0x270d,	// (0x0002c268) cell_skin_colour_pane_ParamLimits

0x270d,	// (0x0002c268) cell_skin_colour_pane

0xc818,	// (0x00036373) cell_skin_colour_pane_g1

0x2786,	// (0x0002c2e1) call_video_g1_ParamLimits

0x2786,	// (0x0002c2e1) call_video_g1

0x27a2,	// (0x0002c2fd) call_video_g2_ParamLimits

0x27a2,	// (0x0002c2fd) call_video_g2

0x0001,

0xf1b5,	// (0x00038d10) call_video_g_ParamLimits

0xf1b5,	// (0x00038d10) call_video_g

0x27f4,	// (0x0002c34f) call_video_uplink_pane_cp1_ParamLimits

0x27f4,	// (0x0002c34f) call_video_uplink_pane_cp1

0xc82a,	// (0x00036385) call_video_uplink_pane_cp2

0x2893,	// (0x0002c3ee) video_down_crop_pane_ParamLimits

0x2893,	// (0x0002c3ee) video_down_crop_pane

0x297c,	// (0x0002c4d7) video_down_pane_ParamLimits

0x297c,	// (0x0002c4d7) video_down_pane

0xc832,	// (0x0003638d) video_down_subqcif_pane_ParamLimits

0xc832,	// (0x0003638d) video_down_subqcif_pane

0xc84a,	// (0x000363a5) video_down_subqcif_pane_cp_ParamLimits

0xc84a,	// (0x000363a5) video_down_subqcif_pane_cp

0xc870,	// (0x000363cb) im_reading_pane_ParamLimits

0xc870,	// (0x000363cb) im_reading_pane

0x2a8c,	// (0x0002c5e7) im_writing_pane_ParamLimits

0x2a8c,	// (0x0002c5e7) im_writing_pane

0x2aa2,	// (0x0002c5fd) im_reading_pane_t1

0xc88a,	// (0x000363e5) list_im_pane

0xc89b,	// (0x000363f6) scroll_pane_cp07

0x2adc,	// (0x0002c637) im_writing_pane_t1_ParamLimits

0x2adc,	// (0x0002c637) im_writing_pane_t1

0xc8b4,	// (0x0003640f) im_writing_pane_t2_ParamLimits

0xc8b4,	// (0x0003640f) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00038d1a) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00038d1a) im_writing_pane_t

0xc241,	// (0x00035d9c) input_focus_pane_cp04

0xc241,	// (0x00035d9c) input_focus_pane_cp05

0x2af1,	// (0x0002c64c) list_im_single_pane_ParamLimits

0x2af1,	// (0x0002c64c) list_im_single_pane

0x2b06,	// (0x0002c661) list_single_im_pane_t1

0xc7c9,	// (0x00036324) blid_accuracy_pane

0xc7c9,	// (0x00036324) blid_compass_pane

0xe3f9,	// (0x00037f54) main_location_t1

0xe3f9,	// (0x00037f54) main_location_t2

0xe3f9,	// (0x00037f54) main_location_t3

0x0002,

0x00ab,	// (0x00029c06) main_location_t

0xc241,	// (0x00035d9c) aid_levels_location

0xc4c2,	// (0x0003601d) blid_accuracy_pane_g1

0xc4c2,	// (0x0003601d) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x00038d69) blid_accuracy_pane_g

0xc8fc,	// (0x00036457) wml_content_pane

0xc93a,	// (0x00036495) wml_button_pane_ParamLimits

0xc93a,	// (0x00036495) wml_button_pane

0x2b15,	// (0x0002c670) wml_list_single_large_pane_ParamLimits

0x2b15,	// (0x0002c670) wml_list_single_large_pane

0x2b2a,	// (0x0002c685) wml_list_single_medium_pane_ParamLimits

0x2b2a,	// (0x0002c685) wml_list_single_medium_pane

0x2b41,	// (0x0002c69c) wml_list_single_small_pane_ParamLimits

0x2b41,	// (0x0002c69c) wml_list_single_small_pane

0xc94e,	// (0x000364a9) wml_selection_box_pane_ParamLimits

0xc94e,	// (0x000364a9) wml_selection_box_pane

0xc961,	// (0x000364bc) wml_list_single_pane_t1

0xc970,	// (0x000364cb) wml_list_single_medium_pane_t1

0xc97f,	// (0x000364da) wml_list_single_large_pane_t1

0xc98e,	// (0x000364e9) input_focus_pane_cp02_ParamLimits

0xc98e,	// (0x000364e9) input_focus_pane_cp02

0xc9a1,	// (0x000364fc) wml_selection_box_pane_g1

0xc9aa,	// (0x00036505) wml_selection_box_pane_t1_ParamLimits

0xc9aa,	// (0x00036505) wml_selection_box_pane_t1

0xc4aa,	// (0x00036005) bg_wml_button_pane_ParamLimits

0xc4aa,	// (0x00036005) bg_wml_button_pane

0xc9c2,	// (0x0003651d) wml_button_pane_g1

0xc9ca,	// (0x00036525) wml_button_pane_t1

0xc9c2,	// (0x0003651d) wml_button_bg_pane_g1

0xc9da,	// (0x00036535) wml_button_bg_pane_g2

0xc9e2,	// (0x0003653d) wml_button_bg_pane_g3

0xc9ea,	// (0x00036545) wml_button_bg_pane_g4

0xc9f2,	// (0x0003654d) wml_button_bg_pane_g5

0xc9fa,	// (0x00036555) wml_button_bg_pane_g6

0xca02,	// (0x0003655d) wml_button_bg_pane_g7

0xca0a,	// (0x00036565) wml_button_bg_pane_g8

0xca12,	// (0x0003656d) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00038d1f) wml_button_bg_pane_g

0x2b5a,	// (0x0002c6b5) bg_list_pane_cp02

0xca1a,	// (0x00036575) mce_header_pane_ParamLimits

0xca1a,	// (0x00036575) mce_header_pane

0xca30,	// (0x0003658b) mce_icon_pane

0xca30,	// (0x0003658b) mce_image_pane

0xca39,	// (0x00036594) mce_text_pane_ParamLimits

0xca39,	// (0x00036594) mce_text_pane

0x2b62,	// (0x0002c6bd) scroll_pane_cp03

0xc932,	// (0x0003648d) scroll_pane_cp04

0xca4c,	// (0x000365a7) scroll_pane_cp05_ParamLimits

0xca4c,	// (0x000365a7) scroll_pane_cp05

0x2b6c,	// (0x0002c6c7) mce_header_field_pane_ParamLimits

0x2b6c,	// (0x0002c6c7) mce_header_field_pane

0x2b83,	// (0x0002c6de) mce_header_field_pane_2_ParamLimits

0x2b83,	// (0x0002c6de) mce_header_field_pane_2

0x2b99,	// (0x0002c6f4) mce_header_field_pane_3

0x2ba1,	// (0x0002c6fc) list_single_mce_message_pane_ParamLimits

0x2ba1,	// (0x0002c6fc) list_single_mce_message_pane

0x2bb7,	// (0x0002c712) list_single_mce_smart_pane_ParamLimits

0x2bb7,	// (0x0002c712) list_single_mce_smart_pane

0xca58,	// (0x000365b3) input_focus_pane_cp03

0xca61,	// (0x000365bc) list_header_data_pane

0x2bd8,	// (0x0002c733) mce_header_field_pane_t1

0x2be8,	// (0x0002c743) list_single_mce_header_pane_ParamLimits

0x2be8,	// (0x0002c743) list_single_mce_header_pane

0xca69,	// (0x000365c4) list_single_mce_header_pane_t1

0xca78,	// (0x000365d3) list_single_mce_message_pane_g1

0xca80,	// (0x000365db) list_single_mce_message_pane_t1

0x2c22,	// (0x0002c77d) bg_cale_heading_pane_cp01_ParamLimits

0x2c22,	// (0x0002c77d) bg_cale_heading_pane_cp01

0xca8e,	// (0x000365e9) bg_cale_pane_cp02_ParamLimits

0xca8e,	// (0x000365e9) bg_cale_pane_cp02

0x2c5c,	// (0x0002c7b7) cale_month_corner_pane

0x2c7b,	// (0x0002c7d6) cale_month_day_heading_pane_ParamLimits

0x2c7b,	// (0x0002c7d6) cale_month_day_heading_pane

0x2ccd,	// (0x0002c828) cale_month_pane_g1_ParamLimits

0x2ccd,	// (0x0002c828) cale_month_pane_g1

0x2cfc,	// (0x0002c857) cale_month_pane_g2_ParamLimits

0x2cfc,	// (0x0002c857) cale_month_pane_g2

0x2d2c,	// (0x0002c887) cale_month_pane_g3_ParamLimits

0x2d2c,	// (0x0002c887) cale_month_pane_g3

0x2d68,	// (0x0002c8c3) cale_month_pane_g4_ParamLimits

0x2d68,	// (0x0002c8c3) cale_month_pane_g4

0x2da4,	// (0x0002c8ff) cale_month_pane_g5_ParamLimits

0x2da4,	// (0x0002c8ff) cale_month_pane_g5

0x2dec,	// (0x0002c947) cale_month_pane_g6_ParamLimits

0x2dec,	// (0x0002c947) cale_month_pane_g6

0x2e38,	// (0x0002c993) cale_month_pane_g7_ParamLimits

0x2e38,	// (0x0002c993) cale_month_pane_g7

0x2e88,	// (0x0002c9e3) cale_month_pane_g8_ParamLimits

0x2e88,	// (0x0002c9e3) cale_month_pane_g8

0x2edc,	// (0x0002ca37) cale_month_pane_g9_ParamLimits

0x2edc,	// (0x0002ca37) cale_month_pane_g9

0x2f2e,	// (0x0002ca89) cale_month_pane_g10_ParamLimits

0x2f2e,	// (0x0002ca89) cale_month_pane_g10

0x2f80,	// (0x0002cadb) cale_month_pane_g11_ParamLimits

0x2f80,	// (0x0002cadb) cale_month_pane_g11

0x2fd2,	// (0x0002cb2d) cale_month_pane_g12_ParamLimits

0x2fd2,	// (0x0002cb2d) cale_month_pane_g12

0x3024,	// (0x0002cb7f) cale_month_pane_g13_ParamLimits

0x3024,	// (0x0002cb7f) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00038d32) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00038d32) cale_month_pane_g

0x3076,	// (0x0002cbd1) cale_month_week_pane

0x309a,	// (0x0002cbf5) grid_cale_month_pane_ParamLimits

0x309a,	// (0x0002cbf5) grid_cale_month_pane

0x30e3,	// (0x0002cc3e) cale_month_day_heading_pane_t1

0x3125,	// (0x0002cc80) cale_month_day_heading_pane_t2

0x315a,	// (0x0002ccb5) cale_month_day_heading_pane_t3

0x318f,	// (0x0002ccea) cale_month_day_heading_pane_t4

0x31cc,	// (0x0002cd27) cale_month_day_heading_pane_t5

0x3211,	// (0x0002cd6c) cale_month_day_heading_pane_t6

0x3256,	// (0x0002cdb1) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00038d4d) cale_month_day_heading_pane_t

0xc777,	// (0x000362d2) bg_cale_side_pane_cp01

0x32a3,	// (0x0002cdfe) cale_month_week_pane_t1

0x32bc,	// (0x0002ce17) cale_month_week_pane_t2

0x32d5,	// (0x0002ce30) cale_month_week_pane_t3

0x32ee,	// (0x0002ce49) cale_month_week_pane_t4

0x3307,	// (0x0002ce62) cale_month_week_pane_t5

0x3320,	// (0x0002ce7b) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00038d5c) cale_month_week_pane_t

0x3339,	// (0x0002ce94) cell_cale_month_pane_ParamLimits

0x3339,	// (0x0002ce94) cell_cale_month_pane

0xb149,	// (0x00034ca4) cell_cale_month_pane_g1

0x0e98,	// (0x0002a9f3) cell_cale_month_pane_t1_ParamLimits

0x0e98,	// (0x0002a9f3) cell_cale_month_pane_t1

0xc785,	// (0x000362e0) grid_highlight_pane_cp08

0xc4c2,	// (0x0003601d) main_smil_g1

0x3467,	// (0x0002cfc2) smil_status_pane

0xcad6,	// (0x00036631) smil_text_pane

0xc6fb,	// (0x00036256) bg_popup_call3_rect_pane_g8

0xc6f3,	// (0x0003624e) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00038d6e) bg_popup_call3_rect_pane_g

0xe4c2,	// (0x0003801d) smil_status_volume_pane_g1

0xcae0,	// (0x0003663b) smil_status_pane_t1

0xb28f,	// (0x00034dea) volume_smil_pane

0xcaf7,	// (0x00036652) list_smil_text_pane

0x347c,	// (0x0002cfd7) scroll_pane_cp011

0x3487,	// (0x0002cfe2) smil_text_list_pane_t1_ParamLimits

0x3487,	// (0x0002cfe2) smil_text_list_pane_t1

0xb155,	// (0x00034cb0) aid_volume_smil_ParamLimits

0xb155,	// (0x00034cb0) aid_volume_smil

0xc4c2,	// (0x0003601d) smil_volume_pane_g1

0xc4c2,	// (0x0003601d) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x00038d69) smil_volume_pane_g

0x34cb,	// (0x0002d026) listscroll_cale_day_pane

0xcb01,	// (0x0003665c) bg_cale_pane

0xcb19,	// (0x00036674) list_cale_pane

0xcb3c,	// (0x00036697) scroll_pane_cp09

0xc6cb,	// (0x00036226) cale_bg_pane_g1

0xc6c3,	// (0x0003621e) cale_bg_pane_g2

0xc6bb,	// (0x00036216) cale_bg_pane_g3

0xc6db,	// (0x00036236) cale_bg_pane_g4

0xc6d3,	// (0x0003622e) cale_bg_pane_g5

0xc6e3,	// (0x0003623e) cale_bg_pane_g6

0xc6eb,	// (0x00036246) cale_bg_pane_g7

0xc6fb,	// (0x00036256) cale_bg_pane_g8

0xc6f3,	// (0x0003624e) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00038d6e) cale_bg_pane_g

0x34e5,	// (0x0002d040) list_cale_time_pane_ParamLimits

0x34e5,	// (0x0002d040) list_cale_time_pane

0xcb4d,	// (0x000366a8) list_cale_time_pane_g1_ParamLimits

0xcb4d,	// (0x000366a8) list_cale_time_pane_g1

0xcb59,	// (0x000366b4) list_cale_time_pane_g2_ParamLimits

0xcb59,	// (0x000366b4) list_cale_time_pane_g2

0x34fb,	// (0x0002d056) list_cale_time_pane_g3_ParamLimits

0x34fb,	// (0x0002d056) list_cale_time_pane_g3

0x3509,	// (0x0002d064) list_cale_time_pane_g4_ParamLimits

0x3509,	// (0x0002d064) list_cale_time_pane_g4

0x3517,	// (0x0002d072) list_cale_time_pane_g5_ParamLimits

0x3517,	// (0x0002d072) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x00038d81) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x00038d81) list_cale_time_pane_g

0xcb73,	// (0x000366ce) list_cale_time_pane_t1_ParamLimits

0xcb73,	// (0x000366ce) list_cale_time_pane_t1

0xcb9b,	// (0x000366f6) list_cale_time_pane_t2_ParamLimits

0xcb9b,	// (0x000366f6) list_cale_time_pane_t2

0x37b0,	// (0x0002d30b) aid_blid_cardinal_pane

0x37ee,	// (0x0002d349) compass_pane_t4

0xcbc3,	// (0x0003671e) list_cale_time_pane_t4_ParamLimits

0xcbc3,	// (0x0003671e) list_cale_time_pane_t4

0x37fc,	// (0x0002d357) compass_pane_t5

0x380a,	// (0x0002d365) compass_pane_t6

0x3818,	// (0x0002d373) compass_pane_t7

0xd04c,	// (0x00036ba7) navi_pane_cc_t1

0xd229,	// (0x00036d84) aid_phob_thumbnail_center_pane

0x3c4e,	// (0x0002d7a9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x00038d8e) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x00038d8e) list_cale_time_pane_t

0xbe98,	// (0x000359f3) bg_popup_window_pane_cp02_ParamLimits

0xbe98,	// (0x000359f3) bg_popup_window_pane_cp02

0xcbeb,	// (0x00036746) heading_pane_cp01_ParamLimits

0xcbeb,	// (0x00036746) heading_pane_cp01

0xcbf7,	// (0x00036752) loc_req_pane_ParamLimits

0xcbf7,	// (0x00036752) loc_req_pane

0xcc09,	// (0x00036764) loc_type_pane_ParamLimits

0xcc09,	// (0x00036764) loc_type_pane

0xcc1b,	// (0x00036776) loc_type_pane_t1_ParamLimits

0xcc1b,	// (0x00036776) loc_type_pane_t1

0xcc2d,	// (0x00036788) loc_type_pane_t2_ParamLimits

0xcc2d,	// (0x00036788) loc_type_pane_t2

0xcc3f,	// (0x0003679a) loc_type_pane_t3_ParamLimits

0xcc3f,	// (0x0003679a) loc_type_pane_t3

0x0002,

0xf23a,	// (0x00038d95) loc_type_pane_t_ParamLimits

0xf23a,	// (0x00038d95) loc_type_pane_t

0xcc51,	// (0x000367ac) list_loc_req_pane

0xcc5b,	// (0x000367b6) scroll_pane_cp012

0x3525,	// (0x0002d080) list_single_loc_request_popup_menu_pane_ParamLimits

0x3525,	// (0x0002d080) list_single_loc_request_popup_menu_pane

0xcc66,	// (0x000367c1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcc66,	// (0x000367c1) list_single_loc_request_popup_menu_pane_g1

0xcc72,	// (0x000367cd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcc72,	// (0x000367cd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x00038d9c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x00038d9c) list_single_loc_request_popup_menu_pane_g

0xcc7e,	// (0x000367d9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcc7e,	// (0x000367d9) list_single_loc_request_popup_menu_pane_t1

0xc4aa,	// (0x00036005) bg_popup_window_pane_cp03_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_window_pane_cp03

0xcc94,	// (0x000367ef) heading_loc_req_pane_ParamLimits

0xcc94,	// (0x000367ef) heading_loc_req_pane

0x3532,	// (0x0002d08d) popup_dyc_status_message_window_g1_ParamLimits

0x3532,	// (0x0002d08d) popup_dyc_status_message_window_g1

0x3546,	// (0x0002d0a1) popup_dyc_status_message_window_t1_ParamLimits

0x3546,	// (0x0002d0a1) popup_dyc_status_message_window_t1

0x355b,	// (0x0002d0b6) popup_dyc_status_message_window_t2_ParamLimits

0x355b,	// (0x0002d0b6) popup_dyc_status_message_window_t2

0x3570,	// (0x0002d0cb) popup_dyc_status_message_window_t3_ParamLimits

0x3570,	// (0x0002d0cb) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x00038da1) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x00038da1) popup_dyc_status_message_window_t

0xc241,	// (0x00035d9c) bg_heading_pane_cp01

0xcca0,	// (0x000367fb) heading_loc_req_pane_g1

0xcca8,	// (0x00036803) heading_loc_req_pane_g2

0xccb0,	// (0x0003680b) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x00038da8) heading_loc_req_pane_g

0xccb8,	// (0x00036813) heading_loc_req_pane_t1

0xccd7,	// (0x00036832) bg_popup_sub_pane_cp01_ParamLimits

0xccd7,	// (0x00036832) bg_popup_sub_pane_cp01

0xcce5,	// (0x00036840) popup_cale_events_window_g1_ParamLimits

0xcce5,	// (0x00036840) popup_cale_events_window_g1

0xcd05,	// (0x00036860) popup_cale_events_window_g2_ParamLimits

0xcd05,	// (0x00036860) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x00038dca) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x00038dca) popup_cale_events_window_g

0xcd25,	// (0x00036880) popup_cale_events_window_t1_ParamLimits

0xcd25,	// (0x00036880) popup_cale_events_window_t1

0xcd37,	// (0x00036892) popup_cale_events_window_t2_ParamLimits

0xcd37,	// (0x00036892) popup_cale_events_window_t2

0xcd75,	// (0x000368d0) popup_cale_events_window_t3_ParamLimits

0xcd75,	// (0x000368d0) popup_cale_events_window_t3

0xcdaf,	// (0x0003690a) popup_cale_events_window_t4_ParamLimits

0xcdaf,	// (0x0003690a) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x00038dcf) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x00038dcf) popup_cale_events_window_t

0x35a4,	// (0x0002d0ff) call_type_pane

0x35b4,	// (0x0002d10f) popup_call_status_window_g1

0x35c8,	// (0x0002d123) popup_call_status_window_g2

0x35dc,	// (0x0002d137) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x00038dd8) popup_call_status_window_g

0xcde5,	// (0x00036940) call_type_pane_g1

0xcdee,	// (0x00036949) call_type_pane_g2

0x0001,

0xf284,	// (0x00038ddf) call_type_pane_g

0xc241,	// (0x00035d9c) bg_popup_sub_pane_cp02

0xcdf7,	// (0x00036952) listscroll_popup_wml_pane

0xcdff,	// (0x0003695a) list_wml_pane

0xce09,	// (0x00036964) scroll_pane_cp013

0xce14,	// (0x0003696f) list_single_graphic_popup_wml_pane_ParamLimits

0xce14,	// (0x0003696f) list_single_graphic_popup_wml_pane

0xc4c2,	// (0x0003601d) list_single_graphic_popup_wml_pane_g1

0xce28,	// (0x00036983) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x00038de4) list_single_graphic_popup_wml_pane_g

0xce30,	// (0x0003698b) list_single_graphic_popup_wml_pane_t1

0xce46,	// (0x000369a1) aid_call_pane

0xc4a2,	// (0x00035ffd) popup_clock_analogue_window_g1

0xc4a2,	// (0x00035ffd) popup_clock_analogue_window_g2

0xb177,	// (0x00034cd2) popup_clock_analogue_window_g3

0xb177,	// (0x00034cd2) popup_clock_analogue_window_g4

0xc4c2,	// (0x0003601d) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x00038de9) popup_clock_analogue_window_g

0xb17f,	// (0x00034cda) popup_clock_analogue_window_t1

0xb18d,	// (0x00034ce8) clock_digital_number_pane_ParamLimits

0xb18d,	// (0x00034ce8) clock_digital_number_pane

0xb199,	// (0x00034cf4) clock_digital_number_pane_cp02_ParamLimits

0xb199,	// (0x00034cf4) clock_digital_number_pane_cp02

0xb1a5,	// (0x00034d00) clock_digital_number_pane_cp03_ParamLimits

0xb1a5,	// (0x00034d00) clock_digital_number_pane_cp03

0xb1b1,	// (0x00034d0c) clock_digital_number_pane_cp04_ParamLimits

0xb1b1,	// (0x00034d0c) clock_digital_number_pane_cp04

0xb1bd,	// (0x00034d18) clock_digital_separator_pane_ParamLimits

0xb1bd,	// (0x00034d18) clock_digital_separator_pane

0xb1c9,	// (0x00034d24) popup_clock_digital_window_t1

0xc4c2,	// (0x0003601d) clock_digital_number_pane_g1

0xc4c2,	// (0x0003601d) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x00038d69) clock_digital_number_pane_g

0xc4c2,	// (0x0003601d) clock_digital_separator_pane_g1

0xc4c2,	// (0x0003601d) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x00038d69) clock_digital_separator_pane_g

0xc241,	// (0x00035d9c) bg_popup_window_pane_cp04

0xce4e,	// (0x000369a9) heading_pane_cp03

0xc7c9,	// (0x00036324) listscroll_popup_gms_pane

0xc241,	// (0x00035d9c) grid_large_graphic_popup_pane

0xce56,	// (0x000369b1) listscroll_popup_gms_pane_g1

0xce5f,	// (0x000369ba) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x00038df4) listscroll_popup_gms_pane_g

0xce68,	// (0x000369c3) scroll_pane_cp014

0xc517,	// (0x00036072) cell_large_graphic_popup_pane_ParamLimits

0xc517,	// (0x00036072) cell_large_graphic_popup_pane

0xc525,	// (0x00036080) cell_large_graphic_popup_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_large_graphic_popup_pane_g1

0xce71,	// (0x000369cc) cell_large_graphic_popup_pane_g2_ParamLimits

0xce71,	// (0x000369cc) cell_large_graphic_popup_pane_g2

0xce7f,	// (0x000369da) cell_large_graphic_popup_pane_g3_ParamLimits

0xce7f,	// (0x000369da) cell_large_graphic_popup_pane_g3

0xce8d,	// (0x000369e8) cell_large_graphic_popup_pane_g4_ParamLimits

0xce8d,	// (0x000369e8) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x00038df9) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x00038df9) cell_large_graphic_popup_pane_g

0xc241,	// (0x00035d9c) grid_highlight_pane_cp010

0xc4c2,	// (0x0003601d) bg_popup_call_pane_g1

0xce9e,	// (0x000369f9) list_single_graphic_popup_conf_pane_ParamLimits

0xce9e,	// (0x000369f9) list_single_graphic_popup_conf_pane

0xceb1,	// (0x00036a0c) list_highlight_pane_cp01

0xceba,	// (0x00036a15) list_single_graphic_popup_conf_pane_g1

0xcec2,	// (0x00036a1d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x00038e02) list_single_graphic_popup_conf_pane_g

0xceca,	// (0x00036a25) list_single_graphic_popup_conf_pane_t1

0xced8,	// (0x00036a33) linegrid_cams_pane_g1

0x35eb,	// (0x0002d146) linegrid_cams_pane_g2

0xc703,	// (0x0003625e) linegrid_cams_pane_g3

0xcee1,	// (0x00036a3c) linegrid_cams_pane_g4

0x35f4,	// (0x0002d14f) linegrid_cams_pane_g5

0x35fd,	// (0x0002d158) linegrid_cams_pane_g6

0xc7b8,	// (0x00036313) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x00038e07) linegrid_cams_pane_g

0xceea,	// (0x00036a45) popup_clock_analogue_window

0xceea,	// (0x00036a45) popup_clock_digital_window

0xc241,	// (0x00035d9c) popup_phob_thumbnail_window

0xc4c2,	// (0x0003601d) call_video_uplink_pane_g1

0xcef3,	// (0x00036a4e) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x00038e16) call_video_uplink_pane_g

0xcefb,	// (0x00036a56) video_uplink_pane

0xcf03,	// (0x00036a5e) mce_image_pane_g1

0x3608,	// (0x0002d163) mce_image_pane_g2

0x3610,	// (0x0002d16b) mce_image_pane_g3

0x3618,	// (0x0002d173) mce_image_pane_g4

0x3622,	// (0x0002d17d) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x00038e1b) mce_image_pane_g

0xcf0d,	// (0x00036a68) control_top_pane_stacon_cp01_ParamLimits

0xcf0d,	// (0x00036a68) control_top_pane_stacon_cp01

0xcf21,	// (0x00036a7c) uni_indicator_pane_stacon_cp01_ParamLimits

0xcf21,	// (0x00036a7c) uni_indicator_pane_stacon_cp01

0xcf32,	// (0x00036a8d) bg_popup_sub_pane_cp03

0x362a,	// (0x0002d185) chi_dic_find_pane

0x3632,	// (0x0002d18d) listscroll_chi_dic_pane

0x363b,	// (0x0002d196) main_pane_chidic_g1

0x364e,	// (0x0002d1a9) chi_dic_find_pane_t1

0xcf3c,	// (0x00036a97) find_chidic_pane

0xcf45,	// (0x00036aa0) chi_dic_list_pane_ParamLimits

0xcf45,	// (0x00036aa0) chi_dic_list_pane

0xcf56,	// (0x00036ab1) scroll_pane_cp020

0x365c,	// (0x0002d1b7) find_chidic_pane_t1

0xc241,	// (0x00035d9c) input_focus_pane_cp06

0x366b,	// (0x0002d1c6) list_chi_dic_pane_ParamLimits

0x366b,	// (0x0002d1c6) list_chi_dic_pane

0x367d,	// (0x0002d1d8) list_chi_dic_pane_t1_ParamLimits

0x367d,	// (0x0002d1d8) list_chi_dic_pane_t1

0xc241,	// (0x00035d9c) list_highlight_pane_cp020

0xcf5e,	// (0x00036ab9) bg_cale_heading_pane_g1

0x3690,	// (0x0002d1eb) bg_cale_heading_pane_g2

0x3698,	// (0x0002d1f3) bg_cale_heading_pane_g3

0x36a0,	// (0x0002d1fb) bg_cale_heading_pane_g4

0x36aa,	// (0x0002d205) bg_cale_heading_pane_g5

0x36b4,	// (0x0002d20f) bg_cale_heading_pane_g6

0x36bc,	// (0x0002d217) bg_cale_heading_pane_g7

0x36c4,	// (0x0002d21f) bg_cale_heading_pane_g8

0x36ce,	// (0x0002d229) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x00038e26) bg_cale_heading_pane_g

0xcf5e,	// (0x00036ab9) bg_cale_side_pane_g1

0x36d8,	// (0x0002d233) bg_cale_side_pane_g2

0x36e0,	// (0x0002d23b) bg_cale_side_pane_g3

0x36e8,	// (0x0002d243) bg_cale_side_pane_g4

0x36f0,	// (0x0002d24b) bg_cale_side_pane_g5

0x36f8,	// (0x0002d253) bg_cale_side_pane_g6

0x3700,	// (0x0002d25b) bg_cale_side_pane_g7

0x3708,	// (0x0002d263) bg_cale_side_pane_g8

0x3710,	// (0x0002d26b) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x00038e39) bg_cale_side_pane_g

0x3718,	// (0x0002d273) popup_call_status_window_ParamLimits

0x3718,	// (0x0002d273) popup_call_status_window

0xcf66,	// (0x00036ac1) stacon_top_pane

0xcf6e,	// (0x00036ac9) status_pane_ParamLimits

0xcf6e,	// (0x00036ac9) status_pane

0xcf83,	// (0x00036ade) status_small_pane

0xcf8b,	// (0x00036ae6) control_pane

0xc241,	// (0x00035d9c) stacon_bottom_pane

0xcf93,	// (0x00036aee) list_single_mce_smart_pane_t1_ParamLimits

0xcf93,	// (0x00036aee) list_single_mce_smart_pane_t1

0xcfa6,	// (0x00036b01) list_single_mce_smart_pane_t2_ParamLimits

0xcfa6,	// (0x00036b01) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x00038e4c) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x00038e4c) list_single_mce_smart_pane_t

0x375f,	// (0x0002d2ba) compass_pane

0x3768,	// (0x0002d2c3) main_location2_pane_t1

0x377a,	// (0x0002d2d5) main_location2_pane_t2

0x378c,	// (0x0002d2e7) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x00038e51) main_location2_pane_t

0xcfc5,	// (0x00036b20) compass_pane_g1_ParamLimits

0xcfc5,	// (0x00036b20) compass_pane_g1

0x37d0,	// (0x0002d32b) compass_pane_t1

0x37df,	// (0x0002d33a) compass_pane_t2

0x0005,

0xf2ff,	// (0x00038e5a) compass_pane_t

0x3826,	// (0x0002d381) text_secondary_cp61

0xd043,	// (0x00036b9e) navi_pane_cams_g5

0xd0bf,	// (0x00036c1a) navi_pane_im_t1

0xd0cd,	// (0x00036c28) navi_pane_mp_g1_ParamLimits

0xd0cd,	// (0x00036c28) navi_pane_mp_g1

0xd0e1,	// (0x00036c3c) navi_pane_mp_g2_ParamLimits

0xd0e1,	// (0x00036c3c) navi_pane_mp_g2

0xd0ed,	// (0x00036c48) navi_pane_mp_g3_ParamLimits

0xd0ed,	// (0x00036c48) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00038e6e) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00038e6e) navi_pane_mp_g

0xd0f9,	// (0x00036c54) navi_pane_mp_t1

0xd107,	// (0x00036c62) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x00038e75) navi_pane_mp_t

0xd172,	// (0x00036ccd) navi_pane_vt_g1

0xd0f9,	// (0x00036c54) navi_pane_vt_t1

0xd17a,	// (0x00036cd5) navi_slider_pane

0xc7c9,	// (0x00036324) zooming_pane

0xd18a,	// (0x00036ce5) navi_slider_pane_g1

0xb1e6,	// (0x00034d41) navi_slider_pane_g2

0x0006,

0xf321,	// (0x00038e7c) navi_slider_pane_g

0xd1ae,	// (0x00036d09) aid_levels_zoom

0xd1b6,	// (0x00036d11) zooming_pane_g1

0xd1be,	// (0x00036d19) zooming_pane_g2

0xd1be,	// (0x00036d19) zooming_pane_g3

0x0002,

0xf330,	// (0x00038e8b) zooming_pane_g

0xd1c6,	// (0x00036d21) level_10_zoom

0xd1cf,	// (0x00036d2a) level_11_zoom

0xd1d8,	// (0x00036d33) level_1_zoom

0xd1e1,	// (0x00036d3c) level_2_zoom

0xd1ea,	// (0x00036d45) level_3_zoom

0xd1f3,	// (0x00036d4e) level_4_zoom

0xd1fc,	// (0x00036d57) level_5_zoom

0xd205,	// (0x00036d60) level_6_zoom

0xd20e,	// (0x00036d69) level_7_zoom

0xd217,	// (0x00036d72) level_8_zoom

0xd220,	// (0x00036d7b) level_9_zoom

0xd231,	// (0x00036d8c) popup_phob_thumbnail_window_g1

0xd239,	// (0x00036d94) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x00038e92) popup_phob_thumbnail_window_g

0x4252,	// (0x0002ddad) level_1_location

0x425a,	// (0x0002ddb5) level_2_location

0x4262,	// (0x0002ddbd) level_3_location

0x426a,	// (0x0002ddc5) level_4_location

0xc7c9,	// (0x00036324) level_5_location

0x3877,	// (0x0002d3d2) mce_icon_pane_g1

0x3881,	// (0x0002d3dc) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x00038e97) mce_icon_pane_g

0xd241,	// (0x00036d9c) main_mup_pane_g1_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g1

0xd241,	// (0x00036d9c) main_mup_pane_g2_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g2

0xd241,	// (0x00036d9c) main_mup_pane_g3_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g3

0xd241,	// (0x00036d9c) main_mup_pane_g4_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g4

0xd241,	// (0x00036d9c) main_mup_pane_g5_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g5

0xd241,	// (0x00036d9c) main_mup_pane_g6_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g6

0xd241,	// (0x00036d9c) main_mup_pane_g7_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g7

0xd241,	// (0x00036d9c) main_mup_pane_g8_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g8

0xd241,	// (0x00036d9c) main_mup_pane_g9_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g9

0xd241,	// (0x00036d9c) main_mup_pane_g10_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g10

0xd241,	// (0x00036d9c) main_mup_pane_g11_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g11

0xc525,	// (0x00036080) main_mup_pane_g12_ParamLimits

0xc525,	// (0x00036080) main_mup_pane_g12

0xd241,	// (0x00036d9c) main_mup_pane_g13_ParamLimits

0xd241,	// (0x00036d9c) main_mup_pane_g13

0x000c,

0xf341,	// (0x00038e9c) main_mup_pane_g_ParamLimits

0xf341,	// (0x00038e9c) main_mup_pane_g

0xd32f,	// (0x00036e8a) main_mup_pane_t1_ParamLimits

0xd32f,	// (0x00036e8a) main_mup_pane_t1

0xd32f,	// (0x00036e8a) main_mup_pane_t2_ParamLimits

0xd32f,	// (0x00036e8a) main_mup_pane_t2

0xd32f,	// (0x00036e8a) main_mup_pane_t3_ParamLimits

0xd32f,	// (0x00036e8a) main_mup_pane_t3

0xc56d,	// (0x000360c8) main_mup_pane_t4_ParamLimits

0xc56d,	// (0x000360c8) main_mup_pane_t4

0xc56d,	// (0x000360c8) main_mup_pane_t5_ParamLimits

0xc56d,	// (0x000360c8) main_mup_pane_t5

0xc581,	// (0x000360dc) main_mup_pane_t6_ParamLimits

0xc581,	// (0x000360dc) main_mup_pane_t6

0x0005,

0xf35c,	// (0x00038eb7) main_mup_pane_t_ParamLimits

0xf35c,	// (0x00038eb7) main_mup_pane_t

0xc517,	// (0x00036072) mup_progress_pane_ParamLimits

0xc517,	// (0x00036072) mup_progress_pane

0xd343,	// (0x00036e9e) mup_visualizer_pane_ParamLimits

0xd343,	// (0x00036e9e) mup_visualizer_pane

0xd343,	// (0x00036e9e) mup_volume_pane_ParamLimits

0xd343,	// (0x00036e9e) mup_volume_pane

0xc533,	// (0x0003608e) mup_visualizer_pane_g1_ParamLimits

0xc533,	// (0x0003608e) mup_visualizer_pane_g1

0xd24f,	// (0x00036daa) mup_visualizer_pane_g2_ParamLimits

0xd24f,	// (0x00036daa) mup_visualizer_pane_g2

0xc525,	// (0x00036080) mup_visualizer_pane_g3_ParamLimits

0xc525,	// (0x00036080) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x00038ec4) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x00038ec4) mup_visualizer_pane_g

0xc563,	// (0x000360be) mup_volume_pane_g1

0xc563,	// (0x000360be) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00038be7) mup_volume_pane_g

0xc563,	// (0x000360be) mup_progress_pane_g1

0xc563,	// (0x000360be) mup_progress_pane_g2

0xc563,	// (0x000360be) mup_progress_pane_g3

0x0002,

0xf370,	// (0x00038ecb) mup_progress_pane_g

0xc241,	// (0x00035d9c) bg_popup_window_pane_cp05

0xd25d,	// (0x00036db8) heading_pane_cp02_ParamLimits

0xd25d,	// (0x00036db8) heading_pane_cp02

0xd277,	// (0x00036dd2) list_popup_blid_pane

0xd27f,	// (0x00036dda) list_blid_sat_info_pane_ParamLimits

0xd27f,	// (0x00036dda) list_blid_sat_info_pane

0xd292,	// (0x00036ded) list_blid_sat_info_pane_g1

0xd29a,	// (0x00036df5) list_blid_sat_info_pane_t1

0x3981,	// (0x0002d4dc) mup_equalizer_pane_ParamLimits

0x3981,	// (0x0002d4dc) mup_equalizer_pane

0x399a,	// (0x0002d4f5) mup_equalizer_pane_cp1_ParamLimits

0x399a,	// (0x0002d4f5) mup_equalizer_pane_cp1

0x39b7,	// (0x0002d512) mup_equalizer_pane_cp2_ParamLimits

0x39b7,	// (0x0002d512) mup_equalizer_pane_cp2

0x39d4,	// (0x0002d52f) mup_equalizer_pane_cp3_ParamLimits

0x39d4,	// (0x0002d52f) mup_equalizer_pane_cp3

0x39f5,	// (0x0002d550) mup_equalizer_pane_cp4_ParamLimits

0x39f5,	// (0x0002d550) mup_equalizer_pane_cp4

0x3a16,	// (0x0002d571) mup_equalizer_pane_cp5

0x3a2a,	// (0x0002d585) mup_equalizer_pane_cp6

0x3a3e,	// (0x0002d599) mup_equalizer_pane_cp7

0xe359,	// (0x00037eb4) bg_popup_call_poc_act_pane_g9

0xe361,	// (0x00037ebc) bg_popup_call_poc_act_pane_g10

0xe369,	// (0x00037ec4) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4aa,	// (0x00036005) mup_scale_pane

0xc4c2,	// (0x0003601d) mup_scale_pane_g1

0xd2a8,	// (0x00036e03) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x00038ee7) mup_scale_pane_g

0xd2cc,	// (0x00036e27) msg_data_pane

0xd2d4,	// (0x00036e2f) scroll_pane_cp017

0x3a64,	// (0x0002d5bf) bg_list_pane_cp04_ParamLimits

0x3a64,	// (0x0002d5bf) bg_list_pane_cp04

0xd2dc,	// (0x00036e37) msg_data_pane_g1

0x3a88,	// (0x0002d5e3) msg_data_pane_g2

0x3a90,	// (0x0002d5eb) msg_data_pane_g3

0x3a98,	// (0x0002d5f3) msg_data_pane_g4

0x3aa0,	// (0x0002d5fb) msg_data_pane_g5

0x3aa8,	// (0x0002d603) msg_data_pane_g6

0x3ab0,	// (0x0002d60b) msg_data_pane_g7

0x0006,

0xf39b,	// (0x00038ef6) msg_data_pane_g

0x3ab8,	// (0x0002d613) msg_text_pane_ParamLimits

0x3ab8,	// (0x0002d613) msg_text_pane

0x3aed,	// (0x0002d648) qrid_highlight_pane_cp011_ParamLimits

0x3aed,	// (0x0002d648) qrid_highlight_pane_cp011

0xc241,	// (0x00035d9c) msg_body_pane

0xc4aa,	// (0x00036005) msg_header_pane

0xd2f8,	// (0x00036e53) input_focus_pane_cp07

0x3b11,	// (0x0002d66c) msg_header_pane_t1_ParamLimits

0x3b11,	// (0x0002d66c) msg_header_pane_t1

0x3b2d,	// (0x0002d688) msg_header_pane_t2_ParamLimits

0x3b2d,	// (0x0002d688) msg_header_pane_t2

0x0001,

0xf3af,	// (0x00038f0a) msg_header_pane_t_ParamLimits

0xf3af,	// (0x00038f0a) msg_header_pane_t

0xd319,	// (0x00036e74) msg_body_pane_g1

0x3b4d,	// (0x0002d6a8) msg_body_pane_t1_ParamLimits

0x3b4d,	// (0x0002d6a8) msg_body_pane_t1

0x3b7e,	// (0x0002d6d9) msg_body_pane_t2_ParamLimits

0x3b7e,	// (0x0002d6d9) msg_body_pane_t2

0x3b90,	// (0x0002d6eb) msg_body_pane_t3_ParamLimits

0x3b90,	// (0x0002d6eb) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00038f0f) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00038f0f) msg_body_pane_t

0x0ee0,	// (0x0002aa3b) main_viewer_pane_g1_ParamLimits

0x0ee0,	// (0x0002aa3b) main_viewer_pane_g1

0x0eee,	// (0x0002aa49) main_viewer_pane_g2_ParamLimits

0x0eee,	// (0x0002aa49) main_viewer_pane_g2

0x3bc0,	// (0x0002d71b) main_viewer_pane_g3_ParamLimits

0x3bc0,	// (0x0002d71b) main_viewer_pane_g3

0x3bcf,	// (0x0002d72a) main_viewer_pane_g4_ParamLimits

0x3bcf,	// (0x0002d72a) main_viewer_pane_g4

0xb210,	// (0x00034d6b) main_viewer_pane_g5_ParamLimits

0xb210,	// (0x00034d6b) main_viewer_pane_g5

0xb210,	// (0x00034d6b) main_viewer_pane_g7_ParamLimits

0xb210,	// (0x00034d6b) main_viewer_pane_g7

0xcc66,	// (0x000367c1) main_viewer_pane_g8_ParamLimits

0xcc66,	// (0x000367c1) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00038f1f) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00038f1f) main_viewer_pane_g

0xd321,	// (0x00036e7c) viewer_content_pane_ParamLimits

0xd321,	// (0x00036e7c) viewer_content_pane

0x3c0b,	// (0x0002d766) main_postcard_pane_g1_ParamLimits

0x3c0b,	// (0x0002d766) main_postcard_pane_g1

0x3c21,	// (0x0002d77c) main_postcard_pane_g2_ParamLimits

0x3c21,	// (0x0002d77c) main_postcard_pane_g2

0x3c37,	// (0x0002d792) main_postcard_pane_g3_ParamLimits

0x3c37,	// (0x0002d792) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00038f30) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00038f30) main_postcard_pane_g

0x3c4e,	// (0x0002d7a9) main_postcard_pane_g4

0xe4d5,	// (0x00038030) smil_status_volume_pane_g2

0x3c91,	// (0x0002d7ec) postcard_pane_ParamLimits

0x3c91,	// (0x0002d7ec) postcard_pane

0xd351,	// (0x00036eac) postcard_pane_g1_ParamLimits

0xd351,	// (0x00036eac) postcard_pane_g1

0x3cd3,	// (0x0002d82e) postcard_pane_g2_ParamLimits

0x3cd3,	// (0x0002d82e) postcard_pane_g2

0x3cdf,	// (0x0002d83a) postcard_pane_g3_ParamLimits

0x3cdf,	// (0x0002d83a) postcard_pane_g3

0xd35f,	// (0x00036eba) postcard_pane_g4_ParamLimits

0xd35f,	// (0x00036eba) postcard_pane_g4

0x3ceb,	// (0x0002d846) postcard_pane_g5_ParamLimits

0x3ceb,	// (0x0002d846) postcard_pane_g5

0x3d00,	// (0x0002d85b) postcard_pane_g6_ParamLimits

0x3d00,	// (0x0002d85b) postcard_pane_g6

0xd351,	// (0x00036eac) postcard_pane_g7_ParamLimits

0xd351,	// (0x00036eac) postcard_pane_g7

0x0006,

0xf3e2,	// (0x00038f3d) postcard_pane_g_ParamLimits

0xf3e2,	// (0x00038f3d) postcard_pane_g

0x3d14,	// (0x0002d86f) main_mp2_pane_g1_ParamLimits

0x3d14,	// (0x0002d86f) main_mp2_pane_g1

0x3d20,	// (0x0002d87b) main_mp2_pane_g2_ParamLimits

0x3d20,	// (0x0002d87b) main_mp2_pane_g2

0x3d2c,	// (0x0002d887) main_mp2_pane_g3_ParamLimits

0x3d2c,	// (0x0002d887) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x00038f4c) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x00038f4c) main_mp2_pane_g

0x3d38,	// (0x0002d893) main_mp2_pane_t1_ParamLimits

0x3d38,	// (0x0002d893) main_mp2_pane_t1

0x3d4d,	// (0x0002d8a8) main_mp2_pane_t2_ParamLimits

0x3d4d,	// (0x0002d8a8) main_mp2_pane_t2

0x3d5f,	// (0x0002d8ba) main_mp2_pane_t3_ParamLimits

0x3d5f,	// (0x0002d8ba) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x00038f53) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x00038f53) main_mp2_pane_t

0xc24b,	// (0x00035da6) pec_content_pane_ParamLimits

0xc24b,	// (0x00035da6) pec_content_pane

0xbe24,	// (0x0003597f) scroll_pane_cp015

0xd343,	// (0x00036e9e) pec_attribute_pane_ParamLimits

0xd343,	// (0x00036e9e) pec_attribute_pane

0xc525,	// (0x00036080) pec_content_pane_g1_ParamLimits

0xc525,	// (0x00036080) pec_content_pane_g1

0xd36d,	// (0x00036ec8) pec_content_pane_t1_ParamLimits

0xd36d,	// (0x00036ec8) pec_content_pane_t1

0xd381,	// (0x00036edc) pec_content_pane_t2_ParamLimits

0xd381,	// (0x00036edc) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x00038f5a) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x00038f5a) pec_content_pane_t

0xc517,	// (0x00036072) list_single_graphic_pane_cp01_ParamLimits

0xc517,	// (0x00036072) list_single_graphic_pane_cp01

0xc4aa,	// (0x00036005) bg_popup_sub_pane_cp04

0xd395,	// (0x00036ef0) popup_mup_playback_window_g1

0xd3a1,	// (0x00036efc) popup_mup_playback_window_t1

0xd3b6,	// (0x00036f11) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00038f5f) popup_mup_playback_window_t

0xd3ed,	// (0x00036f48) main_image_pane_g1_ParamLimits

0xd3ed,	// (0x00036f48) main_image_pane_g1

0xd430,	// (0x00036f8b) scroll_pane_cp018_ParamLimits

0xd430,	// (0x00036f8b) scroll_pane_cp018

0xd448,	// (0x00036fa3) scroll_pane_cp016_ParamLimits

0xd448,	// (0x00036fa3) scroll_pane_cp016

0x3e29,	// (0x0002d984) smil2_image_pane_ParamLimits

0x3e29,	// (0x0002d984) smil2_image_pane

0x3e59,	// (0x0002d9b4) smil2_root_pane_ParamLimits

0x3e59,	// (0x0002d9b4) smil2_root_pane

0x3e91,	// (0x0002d9ec) smil2_text_pane_ParamLimits

0x3e91,	// (0x0002d9ec) smil2_text_pane

0xbe24,	// (0x0003597f) bg_list_pane_cp06

0xbe24,	// (0x0003597f) grid_radio_pane

0xc241,	// (0x00035d9c) bg_popup_window_pane_cp06

0xccc7,	// (0x00036822) main_fmradio_pane_t1

0xce4e,	// (0x000369a9) heading_pane_cp04

0xccc7,	// (0x00036822) main_fmradio_pane_t2

0xe3b1,	// (0x00037f0c) popup_cale_lunar_info_window_g1

0xccc7,	// (0x00036822) main_fmradio_pane_t3

0xe3b9,	// (0x00037f14) popup_cale_lunar_info_window_g2

0xccc7,	// (0x00036822) main_fmradio_pane_t4

0x0001,

0xccc7,	// (0x00036822) main_fmradio_pane_t5

0x0004,

0x008e,	// (0x00029be9) popup_cale_lunar_info_window_g

0xf264,	// (0x00038dbf) main_fmradio_pane_t

0xbe24,	// (0x0003597f) wait_bar_pane_cp03

0xc517,	// (0x00036072) cell_fmradio_pane_ParamLimits

0xc517,	// (0x00036072) cell_fmradio_pane

0xc525,	// (0x00036080) cell_fmradio_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_fmradio_pane_g1

0xbe24,	// (0x0003597f) grid_highlight_pane_cp011

0xd47c,	// (0x00036fd7) poc_content_pane_ParamLimits

0xd47c,	// (0x00036fd7) poc_content_pane

0xd48e,	// (0x00036fe9) scroll_pane_cp019

0x3f11,	// (0x0002da6c) popup_call_poc_act_window_ParamLimits

0x3f11,	// (0x0002da6c) popup_call_poc_act_window

0x3f35,	// (0x0002da90) popup_call_poc_inact_window_ParamLimits

0x3f35,	// (0x0002da90) popup_call_poc_inact_window

0x0052,	// (0x00029bad) bg_popup_call_poc_act_pane_g

0xe371,	// (0x00037ecc) bg_popup_call_poc_inact_pane_g1

0xe379,	// (0x00037ed4) bg_popup_call_poc_inact_pane_g2

0xd496,	// (0x00036ff1) popup_call_poc_act_window_g2

0xe381,	// (0x00037edc) bg_popup_call_poc_inact_pane_g3

0xe301,	// (0x00037e5c) bg_popup_call_poc_inact_pane_g4

0xe389,	// (0x00037ee4) bg_popup_call_poc_inact_pane_g5

0xd49e,	// (0x00036ff9) popup_call_poc_act_window_t1_ParamLimits

0xd49e,	// (0x00036ff9) popup_call_poc_act_window_t1

0xd4c6,	// (0x00037021) popup_call_poc_act_window_t2_ParamLimits

0xd4c6,	// (0x00037021) popup_call_poc_act_window_t2

0xd4ee,	// (0x00037049) popup_call_poc_act_window_t3_ParamLimits

0xd4ee,	// (0x00037049) popup_call_poc_act_window_t3

0xd516,	// (0x00037071) popup_call_poc_act_window_t4_ParamLimits

0xd516,	// (0x00037071) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x00038f74) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x00038f74) popup_call_poc_act_window_t

0xe391,	// (0x00037eec) bg_popup_call_poc_inact_pane_g6

0xe399,	// (0x00037ef4) bg_popup_call_poc_inact_pane_g7

0xe3a1,	// (0x00037efc) bg_popup_call_poc_inact_pane_g8

0xd528,	// (0x00037083) popup_call_poc_inact_window_g2

0xe3a9,	// (0x00037f04) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0069,	// (0x00029bc4) bg_popup_call_poc_inact_pane_g

0xd530,	// (0x0003708b) popup_call_poc_inact_window_t1_ParamLimits

0xd530,	// (0x0003708b) popup_call_poc_inact_window_t1

0xd545,	// (0x000370a0) popup_call_poc_inact_window_t2_ParamLimits

0xd545,	// (0x000370a0) popup_call_poc_inact_window_t2

0xd55a,	// (0x000370b5) popup_call_poc_inact_window_t3_ParamLimits

0xd55a,	// (0x000370b5) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x00038f7d) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x00038f7d) popup_call_poc_inact_window_t

0xe44d,	// (0x00037fa8) context_pane_ParamLimits

0x447a,	// (0x0002dfd5) signal_pane_ParamLimits

0xc7c9,	// (0x00036324) main_call2_pane

0xb25b,	// (0x00034db6) popup_phob_thumbnail2_window_ParamLimits

0xb25b,	// (0x00034db6) popup_phob_thumbnail2_window

0xb1f8,	// (0x00034d53) aid_hotspot_pointer_arrow_pane

0xb200,	// (0x00034d5b) aid_hotspot_pointer_hand_pane

0x421c,	// (0x0002dd77) phob_pre_status_pane_g5

0xc24b,	// (0x00035da6) cams_zoom_pane_ParamLimits

0xc24b,	// (0x00035da6) image_vga_pane_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g1_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g2_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g3_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g4_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g5_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g6_ParamLimits

0xc525,	// (0x00036080) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00038cb8) main_camera_pane_g_ParamLimits

0xc56d,	// (0x000360c8) main_camera_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00038cc9) main_camera_pane_t_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_preview_window_pane_cp01

0xd56f,	// (0x000370ca) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56f,	// (0x000370ca) popup_phob_thumbnail2_window_g1

0xc241,	// (0x00035d9c) call2_cli_visual_pane

0x3f69,	// (0x0002dac4) popup_call2_audio_conf_window_ParamLimits

0x3f69,	// (0x0002dac4) popup_call2_audio_conf_window

0x3f89,	// (0x0002dae4) popup_call2_audio_first_window_ParamLimits

0x3f89,	// (0x0002dae4) popup_call2_audio_first_window

0x401f,	// (0x0002db7a) popup_call2_audio_in_window_ParamLimits

0x401f,	// (0x0002db7a) popup_call2_audio_in_window

0x4067,	// (0x0002dbc2) popup_call2_audio_out_window_ParamLimits

0x4067,	// (0x0002dbc2) popup_call2_audio_out_window

0x40d1,	// (0x0002dc2c) popup_call2_audio_second_window_ParamLimits

0x40d1,	// (0x0002dc2c) popup_call2_audio_second_window

0x4137,	// (0x0002dc92) popup_call2_audio_wait_window_ParamLimits

0x4137,	// (0x0002dc92) popup_call2_audio_wait_window

0xc241,	// (0x00035d9c) bg_popup_call2_act_pane_cp03

0xc48c,	// (0x00035fe7) list_conf_pane_cp

0xd57b,	// (0x000370d6) popup_call2_audio_conf_window_t1

0xd589,	// (0x000370e4) list_single_graphic_popup_conf2_pane_ParamLimits

0xd589,	// (0x000370e4) list_single_graphic_popup_conf2_pane

0xceb1,	// (0x00036a0c) list_highlight_pane_cp04

0xd59c,	// (0x000370f7) list_single_graphic_popup_conf2_pane_g1

0xcec2,	// (0x00036a1d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x00038f84) list_single_graphic_popup_conf2_pane_g

0xd5a6,	// (0x00037101) list_single_graphic_popup_conf2_pane_t1

0xd5b4,	// (0x0003710f) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5b4,	// (0x0003710f) bg_popup_call2_act_pane_cp01

0xd63e,	// (0x00037199) call_type_pane_cp05_ParamLimits

0xd63e,	// (0x00037199) call_type_pane_cp05

0xd692,	// (0x000371ed) popup_call2_audio_second_window_g1_ParamLimits

0xd692,	// (0x000371ed) popup_call2_audio_second_window_g1

0xd6e6,	// (0x00037241) popup_call2_audio_second_window_g2_ParamLimits

0xd6e6,	// (0x00037241) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x00038f89) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x00038f89) popup_call2_audio_second_window_g

0xd74b,	// (0x000372a6) popup_call2_audio_second_window_t1_ParamLimits

0xd74b,	// (0x000372a6) popup_call2_audio_second_window_t1

0xd806,	// (0x00037361) popup_call2_audio_second_window_t2_ParamLimits

0xd806,	// (0x00037361) popup_call2_audio_second_window_t2

0xd859,	// (0x000373b4) popup_call2_audio_second_window_t3_ParamLimits

0xd859,	// (0x000373b4) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x00038f90) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x00038f90) popup_call2_audio_second_window_t

0xc241,	// (0x00035d9c) bg_popup_call2_in_pane_cp02

0xc259,	// (0x00035db4) call_type_pane_cp04

0x4171,	// (0x0002dccc) popup_call2_audio_wait_window_g1

0x4179,	// (0x0002dcd4) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x00038f99) popup_call2_audio_wait_window_g

0xc271,	// (0x00035dcc) popup_call2_audio_wait_window_t3

0xd94c,	// (0x000374a7) bg_popup_call2_act_pane_ParamLimits

0xd94c,	// (0x000374a7) bg_popup_call2_act_pane

0xda0c,	// (0x00037567) call_type_pane_cp03_ParamLimits

0xda0c,	// (0x00037567) call_type_pane_cp03

0xda70,	// (0x000375cb) popup_call2_audio_first_window_g1_ParamLimits

0xda70,	// (0x000375cb) popup_call2_audio_first_window_g1

0xdae0,	// (0x0003763b) popup_call2_audio_first_window_g2_ParamLimits

0xdae0,	// (0x0003763b) popup_call2_audio_first_window_g2

0xdb44,	// (0x0003769f) popup_call2_audio_first_window_g3_ParamLimits

0xdb44,	// (0x0003769f) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x00038f9e) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x00038f9e) popup_call2_audio_first_window_g

0xdbcc,	// (0x00037727) popup_call2_audio_first_window_t1_ParamLimits

0xdbcc,	// (0x00037727) popup_call2_audio_first_window_t1

0xdccf,	// (0x0003782a) popup_call2_audio_first_window_t4_ParamLimits

0xdccf,	// (0x0003782a) popup_call2_audio_first_window_t4

0xddb2,	// (0x0003790d) popup_call2_audio_first_window_t5_ParamLimits

0xddb2,	// (0x0003790d) popup_call2_audio_first_window_t5

0x0003,

0x0003,	// (0x00029b5e) popup_call2_audio_first_window_t_ParamLimits

0x0003,	// (0x00029b5e) popup_call2_audio_first_window_t

0xc4a2,	// (0x00035ffd) bg_popup_call2_act_pane_g1

0xe3c1,	// (0x00037f1c) popup_cale_lunar_info_window_t1

0xe3cf,	// (0x00037f2a) popup_cale_lunar_info_window_t2

0xe3dd,	// (0x00037f38) popup_cale_lunar_info_window_t3

0xc241,	// (0x00035d9c) bg_popup_call2_bubble_pane

0xdeb3,	// (0x00037a0e) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeb3,	// (0x00037a0e) bg_popup_call2_in_pane_cp01

0xbf1d,	// (0x00035a78) call_type_pane_cp02

0x4181,	// (0x0002dcdc) popup_call2_audio_out_window_g1_ParamLimits

0x4181,	// (0x0002dcdc) popup_call2_audio_out_window_g1

0xdefb,	// (0x00037a56) popup_call2_audio_out_window_g2_ParamLimits

0xdefb,	// (0x00037a56) popup_call2_audio_out_window_g2

0x41ad,	// (0x0002dd08) popup_call2_audio_out_window_g3_ParamLimits

0x41ad,	// (0x0002dd08) popup_call2_audio_out_window_g3

0x0003,

0xf44e,	// (0x00038fa9) popup_call2_audio_out_window_g_ParamLimits

0xf44e,	// (0x00038fa9) popup_call2_audio_out_window_g

0xdf32,	// (0x00037a8d) popup_call2_audio_out_window_t1_ParamLimits

0xdf32,	// (0x00037a8d) popup_call2_audio_out_window_t1

0xdf91,	// (0x00037aec) popup_call2_audio_out_window_t2_ParamLimits

0xdf91,	// (0x00037aec) popup_call2_audio_out_window_t2

0xdfe5,	// (0x00037b40) popup_call2_audio_out_window_t3_ParamLimits

0xdfe5,	// (0x00037b40) popup_call2_audio_out_window_t3

0xdffb,	// (0x00037b56) popup_call2_audio_out_window_t4_ParamLimits

0xdffb,	// (0x00037b56) popup_call2_audio_out_window_t4

0xe011,	// (0x00037b6c) popup_call2_audio_out_window_t5_ParamLimits

0xe011,	// (0x00037b6c) popup_call2_audio_out_window_t5

0x0005,

0x0015,	// (0x00029b70) popup_call2_audio_out_window_t_ParamLimits

0x0015,	// (0x00029b70) popup_call2_audio_out_window_t

0xe075,	// (0x00037bd0) bg_popup_call2_in_pane_ParamLimits

0xe075,	// (0x00037bd0) bg_popup_call2_in_pane

0xe0d1,	// (0x00037c2c) popup_call2_audio_in_window_g1_ParamLimits

0xe0d1,	// (0x00037c2c) popup_call2_audio_in_window_g1

0xe109,	// (0x00037c64) popup_call2_audio_in_window_g2_ParamLimits

0xe109,	// (0x00037c64) popup_call2_audio_in_window_g2

0xe141,	// (0x00037c9c) popup_call2_audio_in_window_g3_ParamLimits

0xe141,	// (0x00037c9c) popup_call2_audio_in_window_g3

0x0003,

0x0022,	// (0x00029b7d) popup_call2_audio_in_window_g_ParamLimits

0x0022,	// (0x00029b7d) popup_call2_audio_in_window_g

0xe199,	// (0x00037cf4) popup_call2_audio_in_window_t1_ParamLimits

0xe199,	// (0x00037cf4) popup_call2_audio_in_window_t1

0xe219,	// (0x00037d74) popup_call2_audio_in_window_t2_ParamLimits

0xe219,	// (0x00037d74) popup_call2_audio_in_window_t2

0xe299,	// (0x00037df4) popup_call2_audio_in_window_t3_ParamLimits

0xe299,	// (0x00037df4) popup_call2_audio_in_window_t3

0xe2b3,	// (0x00037e0e) popup_call2_audio_in_window_t4_ParamLimits

0xe2b3,	// (0x00037e0e) popup_call2_audio_in_window_t4

0xe2c5,	// (0x00037e20) popup_call2_audio_in_window_t5_ParamLimits

0xe2c5,	// (0x00037e20) popup_call2_audio_in_window_t5

0xe2d7,	// (0x00037e32) popup_call2_audio_in_window_t6_ParamLimits

0xe2d7,	// (0x00037e32) popup_call2_audio_in_window_t6

0x0005,

0x002b,	// (0x00029b86) popup_call2_audio_in_window_t_ParamLimits

0x002b,	// (0x00029b86) popup_call2_audio_in_window_t

0xc4a2,	// (0x00035ffd) bg_popup_call2_in_pane_g1

0xe3eb,	// (0x00037f46) popup_cale_lunar_info_window_t4

0x0003,

0x0093,	// (0x00029bee) popup_cale_lunar_info_window_t

0xc4aa,	// (0x00036005) bg_popup_call2_rect_pane_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_call2_rect_pane

0xc241,	// (0x00035d9c) call2_cli_visual_graphic_pane

0xc241,	// (0x00035d9c) call2_cli_visual_text_pane

0xb282,	// (0x00034ddd) smil_status_volume_pane_g3

0x0002,

0xc4c2,	// (0x0003601d) call2_cli_visual_graphic_pane_g1

0xc4c2,	// (0x0003601d) call2_cli_visual_graphic_pane_g2

0xc4c2,	// (0x0003601d) call2_cli_visual_graphic_pane_g3

0x0002,

0x0038,	// (0x00029b93) call2_cli_visual_graphic_pane_g

0xc6cb,	// (0x00036226) bg_popup_call2_rect_pane_g1

0xc6c3,	// (0x0003621e) bg_popup_call2_rect_pane_g2

0xc6bb,	// (0x00036216) bg_popup_call2_rect_pane_g3

0xc6db,	// (0x00036236) bg_popup_call2_rect_pane_g4

0xc6d3,	// (0x0003622e) bg_popup_call2_rect_pane_g5

0xc6e3,	// (0x0003623e) bg_popup_call2_rect_pane_g6

0xc6eb,	// (0x00036246) bg_popup_call2_rect_pane_g7

0xc6fb,	// (0x00036256) bg_popup_call2_rect_pane_g8

0xc6f3,	// (0x0003624e) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00038d6e) bg_popup_call2_rect_pane_g

0xe2e9,	// (0x00037e44) bg_popup_call2_bubble_pane_g1

0xe2f1,	// (0x00037e4c) bg_popup_call2_bubble_pane_g2

0xe2f9,	// (0x00037e54) bg_popup_call2_bubble_pane_g3

0xe301,	// (0x00037e5c) bg_popup_call2_bubble_pane_g4

0xe309,	// (0x00037e64) bg_popup_call2_bubble_pane_g5

0xe311,	// (0x00037e6c) bg_popup_call2_bubble_pane_g6

0xe319,	// (0x00037e74) bg_popup_call2_bubble_pane_g7

0xe321,	// (0x00037e7c) bg_popup_call2_bubble_pane_g8

0xe329,	// (0x00037e84) bg_popup_call2_bubble_pane_g9

0x0008,

0x003f,	// (0x00029b9a) bg_popup_call2_bubble_pane_g

0x20c0,	// (0x0002bc1b) aid_cale_week_size_cell_pane

0x259a,	// (0x0002c0f5) aid_cams_cif_uncrop_pane_ParamLimits

0x259a,	// (0x0002c0f5) aid_cams_cif_uncrop_pane

0xc24b,	// (0x00035da6) aid_cams_size_cell_ParamLimits

0xc24b,	// (0x00035da6) aid_cams_size_cell

0xc24b,	// (0x00035da6) grid_cams_pane_ParamLimits

0xc24b,	// (0x00035da6) linegrid_cams_pane_ParamLimits

0x27b8,	// (0x0002c313) call_video_pane_t1

0x27d6,	// (0x0002c331) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00038d15) call_video_pane_t

0x2bfc,	// (0x0002c757) aid_cale_month_size_cell_pane_ParamLimits

0x2bfc,	// (0x0002c757) aid_cale_month_size_cell_pane

0xf48f,	// (0x00038fea) smil_status_volume_pane_g

0xb28f,	// (0x00034dea) volume_smil_pane_ParamLimits

0xb07b,	// (0x00034bd6) aid_popup2_width_pane

0x2037,	// (0x0002bb92) cell_qdial_pane_g4_ParamLimits

0x2037,	// (0x0002bb92) cell_qdial_pane_g4

0x37b0,	// (0x0002d30b) aid_blid_cardinal_pane_ParamLimits

0x37bc,	// (0x0002d317) aid_blid_destination_pane_ParamLimits

0x37bc,	// (0x0002d317) aid_blid_destination_pane

0xc4aa,	// (0x00036005) bg_popup_call_poc_act_pane_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_call_poc_act_pane

0xc4aa,	// (0x00036005) bg_popup_call_poc_inact_pane_ParamLimits

0xc4aa,	// (0x00036005) bg_popup_call_poc_inact_pane

0xe331,	// (0x00037e8c) bg_popup_call_poc_act_pane_g1

0xe339,	// (0x00037e94) bg_popup_call_poc_act_pane_g2

0xe341,	// (0x00037e9c) bg_popup_call_poc_act_pane_g3

0xe301,	// (0x00037e5c) bg_popup_call_poc_act_pane_g4

0xe309,	// (0x00037e64) bg_popup_call_poc_act_pane_g5

0xe349,	// (0x00037ea4) bg_popup_call_poc_act_pane_g6

0xe319,	// (0x00037e74) bg_popup_call_poc_act_pane_g7

0xe351,	// (0x00037eac) bg_popup_call_poc_act_pane_g8

0xc241,	// (0x00035d9c) main_usb_pane

0xb236,	// (0x00034d91) popup_cale_lunar_info_window

0x2aa2,	// (0x0002c5fd) im_reading_pane_t1_ParamLimits

0xc88a,	// (0x000363e5) list_im_pane_ParamLimits

0xc89b,	// (0x000363f6) scroll_pane_cp07_ParamLimits

0xc241,	// (0x00035d9c) grid_highlight_pane_cp012

0xc4aa,	// (0x00036005) mup_scale_pane_ParamLimits

0xc525,	// (0x00036080) main_usb_pane_g1_ParamLimits

0xc525,	// (0x00036080) main_usb_pane_g1

0xc525,	// (0x00036080) main_usb_pane_g2_ParamLimits

0xc525,	// (0x00036080) main_usb_pane_g2

0x0001,

0xf199,	// (0x00038cf4) main_usb_pane_g_ParamLimits

0xf199,	// (0x00038cf4) main_usb_pane_g

0xc56d,	// (0x000360c8) main_usb_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t1

0xc56d,	// (0x000360c8) main_usb_pane_t2_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t2

0xc56d,	// (0x000360c8) main_usb_pane_t3_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t3

0xc56d,	// (0x000360c8) main_usb_pane_t4_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t4

0xc56d,	// (0x000360c8) main_usb_pane_t5_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t5

0xc56d,	// (0x000360c8) main_usb_pane_t6_ParamLimits

0xc56d,	// (0x000360c8) main_usb_pane_t6

0x0005,

0xf457,	// (0x00038fb2) main_usb_pane_t_ParamLimits

0x375f,	// (0x0002d2ba) aid_text_placing

0x3768,	// (0x0002d2c3) main_location2_pane_t1_ParamLimits

0x377a,	// (0x0002d2d5) main_location2_pane_t2_ParamLimits

0x378c,	// (0x0002d2e7) main_location2_pane_t3_ParamLimits

0x379e,	// (0x0002d2f9) main_location2_pane_t4_ParamLimits

0x379e,	// (0x0002d2f9) main_location2_pane_t4

0xf2f6,	// (0x00038e51) main_location2_pane_t_ParamLimits

0xc4d8,	// (0x00036033) find_pinb_pane_g2_ParamLimits

0xc4d8,	// (0x00036033) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00038bcd) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00038bcd) find_pinb_pane_g

0xc4e4,	// (0x0003603f) find_pinb_pane_t1_ParamLimits

0xc4f6,	// (0x00036051) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00038bd2) find_pinb_pane_t_ParamLimits

0xc241,	// (0x00035d9c) main_call3_pane

0x30e3,	// (0x0002cc3e) cale_month_day_heading_pane_t1_ParamLimits

0x3125,	// (0x0002cc80) cale_month_day_heading_pane_t2_ParamLimits

0x315a,	// (0x0002ccb5) cale_month_day_heading_pane_t3_ParamLimits

0x318f,	// (0x0002ccea) cale_month_day_heading_pane_t4_ParamLimits

0x31cc,	// (0x0002cd27) cale_month_day_heading_pane_t5_ParamLimits

0x3211,	// (0x0002cd6c) cale_month_day_heading_pane_t6_ParamLimits

0x3256,	// (0x0002cdb1) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00038d4d) cale_month_day_heading_pane_t_ParamLimits

0xcaee,	// (0x00036649) smil_status_volume_pane

0x3caf,	// (0x0002d80a) postcard_address_pane_ParamLimits

0x3caf,	// (0x0002d80a) postcard_address_pane

0x3cc1,	// (0x0002d81c) postcard_message_pane_ParamLimits

0x3cc1,	// (0x0002d81c) postcard_message_pane

0x41d9,	// (0x0002dd34) call2_cli_visual_pane_t1_ParamLimits

0x41d9,	// (0x0002dd34) call2_cli_visual_pane_t1

0xe500,	// (0x0003805b) postcard_message_pane_t1_ParamLimits

0xe500,	// (0x0003805b) postcard_message_pane_t1

0xe4e8,	// (0x00038043) postcard_address_pane_t1_ParamLimits

0xe4e8,	// (0x00038043) postcard_address_pane_t1

0x462d,	// (0x0002e188) popup_call3_audio_in_window_ParamLimits

0x462d,	// (0x0002e188) popup_call3_audio_in_window

0x44b8,	// (0x0002e013) bg_popup_call3_in_pane_ParamLimits

0x44b8,	// (0x0002e013) bg_popup_call3_in_pane

0x452e,	// (0x0002e089) popup_call3_audio_in_window_g1_ParamLimits

0x452e,	// (0x0002e089) popup_call3_audio_in_window_g1

0x454e,	// (0x0002e0a9) popup_call3_audio_in_window_g2_ParamLimits

0x454e,	// (0x0002e0a9) popup_call3_audio_in_window_g2

0x456e,	// (0x0002e0c9) popup_call3_audio_in_window_g3_ParamLimits

0x456e,	// (0x0002e0c9) popup_call3_audio_in_window_g3

0x0003,

0xf496,	// (0x00038ff1) popup_call3_audio_in_window_g_ParamLimits

0xf496,	// (0x00038ff1) popup_call3_audio_in_window_g

0x459f,	// (0x0002e0fa) popup_call3_audio_in_window_t1_ParamLimits

0x459f,	// (0x0002e0fa) popup_call3_audio_in_window_t1

0x45dd,	// (0x0002e138) popup_call3_audio_in_window_t2_ParamLimits

0x45dd,	// (0x0002e138) popup_call3_audio_in_window_t2

0x461b,	// (0x0002e176) popup_call3_audio_in_window_t3_ParamLimits

0x461b,	// (0x0002e176) popup_call3_audio_in_window_t3

0x0002,

0xf49f,	// (0x00038ffa) popup_call3_audio_in_window_t_ParamLimits

0xf49f,	// (0x00038ffa) popup_call3_audio_in_window_t

0xc7c9,	// (0x00036324) bg_popup_call3_rect_pane

0xc6cb,	// (0x00036226) bg_popup_call3_rect_pane_g1

0xc6c3,	// (0x0003621e) bg_popup_call3_rect_pane_g2

0xc6bb,	// (0x00036216) bg_popup_call3_rect_pane_g3

0xc6db,	// (0x00036236) bg_popup_call3_rect_pane_g4

0xc6d3,	// (0x0003622e) bg_popup_call3_rect_pane_g5

0xc6e3,	// (0x0003623e) bg_popup_call3_rect_pane_g6

0xc6eb,	// (0x00036246) bg_popup_call3_rect_pane_g7

0xbe24,	// (0x0003597f) mup_visualizer_osc_pane

0xbe24,	// (0x0003597f) mup_visualizer_spec_pane

0x44e8,	// (0x0002e043) call3_video_qcif_pane_ParamLimits

0x44e8,	// (0x0002e043) call3_video_qcif_pane

0x44fb,	// (0x0002e056) call3_video_qcif_uncrop_pane_ParamLimits

0x44fb,	// (0x0002e056) call3_video_qcif_uncrop_pane

0x4509,	// (0x0002e064) call3_video_subqcif_pane_ParamLimits

0x4509,	// (0x0002e064) call3_video_subqcif_pane

0x451d,	// (0x0002e078) call3_video_subqcif_uncrop_pane_ParamLimits

0x451d,	// (0x0002e078) call3_video_subqcif_uncrop_pane

0x458e,	// (0x0002e0e9) popup_call3_audio_in_window_g4_ParamLimits

0x458e,	// (0x0002e0e9) popup_call3_audio_in_window_g4

0xbe24,	// (0x0003597f) mup_spec_half_pane

0xbe24,	// (0x0003597f) mup_spec_half_pane_cp

0xbe24,	// (0x0003597f) mup_osc_middle_pane

0xc563,	// (0x000360be) mup_visualizer_osc_pane_g1

0xe49b,	// (0x00037ff6) mup_spec_bar_pane_ParamLimits

0xe49b,	// (0x00037ff6) mup_spec_bar_pane

0xc563,	// (0x000360be) mup_spec_bar_pane_g1

0xc563,	// (0x000360be) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00038be7) mup_spec_bar_pane_g

0x20c0,	// (0x0002bc1b) aid_cale_week_size_cell_pane_ParamLimits

0x20da,	// (0x0002bc35) bg_cale_heading_pane_ParamLimits

0xc72b,	// (0x00036286) bg_cale_pane_cp01_ParamLimits

0x20f2,	// (0x0002bc4d) cale_week_corner_pane_ParamLimits

0x2111,	// (0x0002bc6c) cale_week_day_heading_pane_ParamLimits

0x212e,	// (0x0002bc89) cale_week_scroll_pane_g1_ParamLimits

0x2141,	// (0x0002bc9c) cale_week_scroll_pane_g2_ParamLimits

0x2159,	// (0x0002bcb4) cale_week_scroll_pane_g3_ParamLimits

0x2171,	// (0x0002bccc) cale_week_scroll_pane_g4_ParamLimits

0x2189,	// (0x0002bce4) cale_week_scroll_pane_g5_ParamLimits

0x21a9,	// (0x0002bd04) cale_week_scroll_pane_g6_ParamLimits

0x21c9,	// (0x0002bd24) cale_week_scroll_pane_g7_ParamLimits

0x21e9,	// (0x0002bd44) cale_week_scroll_pane_g8_ParamLimits

0x220d,	// (0x0002bd68) cale_week_scroll_pane_g9_ParamLimits

0x2225,	// (0x0002bd80) cale_week_scroll_pane_g10_ParamLimits

0x223d,	// (0x0002bd98) cale_week_scroll_pane_g11_ParamLimits

0x2255,	// (0x0002bdb0) cale_week_scroll_pane_g12_ParamLimits

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g13_ParamLimits

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g14_ParamLimits

0x226d,	// (0x0002bdc8) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00038c5e) cale_week_scroll_pane_g_ParamLimits

0x22a9,	// (0x0002be04) cale_week_time_pane_ParamLimits

0x22cd,	// (0x0002be28) grid_cale_week_pane_ParamLimits

0xc748,	// (0x000362a3) listscroll_cale_week_pane_t1

0xc75a,	// (0x000362b5) scroll_pane_cp08_ParamLimits

0x2c5c,	// (0x0002c7b7) cale_month_corner_pane_ParamLimits

0xcac4,	// (0x0003661f) cale_month_pane_t1

0x3076,	// (0x0002cbd1) cale_month_week_pane_ParamLimits

0x35b4,	// (0x0002d10f) popup_call_status_window_g1_ParamLimits

0x35c8,	// (0x0002d123) popup_call_status_window_g2_ParamLimits

0x35dc,	// (0x0002d137) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x00038dd8) popup_call_status_window_g_ParamLimits

0xce3e,	// (0x00036999) aid_call2_pane

0x3b03,	// (0x0002d65e) msg_header_pane_g1

0x3caf,	// (0x0002d80a) postcard_address2_pane_ParamLimits

0x3caf,	// (0x0002d80a) postcard_address2_pane

0x3cc1,	// (0x0002d81c) postcard_message2_pane_ParamLimits

0x3cc1,	// (0x0002d81c) postcard_message2_pane

0x4488,	// (0x0002dfe3) message2_row_pane_ParamLimits

0x4488,	// (0x0002dfe3) message2_row_pane

0x44a5,	// (0x0002e000) address2_row_pane_ParamLimits

0x44a5,	// (0x0002e000) address2_row_pane

0xe468,	// (0x00037fc3) postcard_message2_row_pane_g1

0xe470,	// (0x00037fcb) postcard_message2_row_pane_t1

0xe468,	// (0x00037fc3) address2_row_pane_g1

0xe470,	// (0x00037fcb) address2_row_pane_t1

0x2531,	// (0x0002c08c) aid_size_cell_vorec

0xc241,	// (0x00035d9c) main_rss_pane

0xe47e,	// (0x00037fd9) rss_list_single_pane_ParamLimits

0xe47e,	// (0x00037fd9) rss_list_single_pane

0xe48c,	// (0x00037fe7) rss_list_single_pane_t1

0xe48c,	// (0x00037fe7) rss_list_single_pane_t2

0x0001,

0xf48a,	// (0x00038fe5) rss_list_single_pane_t

0xc241,	// (0x00035d9c) main_camera2_pane

0xc241,	// (0x00035d9c) main_video2_pane

0xb2a4,	// (0x00034dff) cams_zoom_pane_cp2_ParamLimits

0xb2a4,	// (0x00034dff) cams_zoom_pane_cp2

0xb2a4,	// (0x00034dff) image2_vga_pane_ParamLimits

0xb2a4,	// (0x00034dff) image2_vga_pane

0xb2b2,	// (0x00034e0d) main_camera2_pane_g1_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g1

0xb2b2,	// (0x00034e0d) main_camera2_pane_g2_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g2

0xb2b2,	// (0x00034e0d) main_camera2_pane_g3_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g3

0xb2b2,	// (0x00034e0d) main_camera2_pane_g4_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g4

0xb2b2,	// (0x00034e0d) main_camera2_pane_g5_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g5

0xb2b2,	// (0x00034e0d) main_camera2_pane_g6_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g6

0xb2b2,	// (0x00034e0d) main_camera2_pane_g7_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g7

0xb2b2,	// (0x00034e0d) main_camera2_pane_g8_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g8

0x0008,

0xf4a6,	// (0x00039001) main_camera2_pane_g_ParamLimits

0xf4a6,	// (0x00039001) main_camera2_pane_g

0x11ac,	// (0x0002ad07) main_camera2_pane_t1_ParamLimits

0x11ac,	// (0x0002ad07) main_camera2_pane_t1

0x11ac,	// (0x0002ad07) main_camera2_pane_t2_ParamLimits

0x11ac,	// (0x0002ad07) main_camera2_pane_t2

0x11ac,	// (0x0002ad07) main_camera2_pane_t3_ParamLimits

0x11ac,	// (0x0002ad07) main_camera2_pane_t3

0x11ac,	// (0x0002ad07) main_camera2_pane_t4_ParamLimits

0x11ac,	// (0x0002ad07) main_camera2_pane_t4

0x0006,

0xf4b9,	// (0x00039014) main_camera2_pane_t_ParamLimits

0xf4b9,	// (0x00039014) main_camera2_pane_t

0xb2f6,	// (0x00034e51) cams_zoom_pane_cp4_ParamLimits

0xb2f6,	// (0x00034e51) cams_zoom_pane_cp4

0x11c0,	// (0x0002ad1b) image2_cif_pane_ParamLimits

0x11c0,	// (0x0002ad1b) image2_cif_pane

0xb0d8,	// (0x00034c33) image2_subqcif_pane_ParamLimits

0xb0d8,	// (0x00034c33) image2_subqcif_pane

0x11ce,	// (0x0002ad29) main_video2_pane_g1_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g1

0x11ce,	// (0x0002ad29) main_video2_pane_g2_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g2

0x11ce,	// (0x0002ad29) main_video2_pane_g3_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g3

0x11ce,	// (0x0002ad29) main_video2_pane_g4_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g4

0x11ce,	// (0x0002ad29) main_video2_pane_g5_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g5

0x11ce,	// (0x0002ad29) main_video2_pane_g6_ParamLimits

0x11ce,	// (0x0002ad29) main_video2_pane_g6

0x0005,

0xf4c8,	// (0x00039023) main_video2_pane_g_ParamLimits

0xf4c8,	// (0x00039023) main_video2_pane_g

0x11dc,	// (0x0002ad37) main_video2_pane_t1_ParamLimits

0x11dc,	// (0x0002ad37) main_video2_pane_t1

0x11dc,	// (0x0002ad37) main_video2_pane_t2_ParamLimits

0x11dc,	// (0x0002ad37) main_video2_pane_t2

0x11dc,	// (0x0002ad37) main_video2_pane_t3_ParamLimits

0x11dc,	// (0x0002ad37) main_video2_pane_t3

0x0002,

0xf4d5,	// (0x00039030) main_video2_pane_t_ParamLimits

0xf4d5,	// (0x00039030) main_video2_pane_t

0x427e,	// (0x0002ddd9) call_muted_g2

0x0001,

0xf485,	// (0x00038fe0) call_muted_g

0xc241,	// (0x00035d9c) main_mup2_pane

0xd241,	// (0x00036d9c) main_mup2_pane_g1_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g1

0xd241,	// (0x00036d9c) main_mup2_pane_g2_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g2

0x46ee,	// (0x0002e249) main_mup_pane_g13_cp1

0xb0e6,	// (0x00034c41) mup_volume_pane_cp1

0xd241,	// (0x00036d9c) main_mup2_pane_g4_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g4

0xd241,	// (0x00036d9c) main_mup2_pane_g5_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g5

0xd241,	// (0x00036d9c) main_mup2_pane_g6_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g6

0xd241,	// (0x00036d9c) main_mup2_pane_g7_ParamLimits

0xd241,	// (0x00036d9c) main_mup2_pane_g7

0x0006,

0xf4dc,	// (0x00039037) main_mup2_pane_g_ParamLimits

0xf4dc,	// (0x00039037) main_mup2_pane_g

0xd32f,	// (0x00036e8a) main_mup2_pane_t1_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t1

0xd32f,	// (0x00036e8a) main_mup2_pane_t2_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t2

0xd32f,	// (0x00036e8a) main_mup2_pane_t3_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t3

0xd32f,	// (0x00036e8a) main_mup2_pane_t4_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t4

0xd32f,	// (0x00036e8a) main_mup2_pane_t5_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t5

0xd32f,	// (0x00036e8a) main_mup2_pane_t6_ParamLimits

0xd32f,	// (0x00036e8a) main_mup2_pane_t6

0x0005,

0xf4eb,	// (0x00039046) main_mup2_pane_t_ParamLimits

0xf4eb,	// (0x00039046) main_mup2_pane_t

0xd343,	// (0x00036e9e) mup2_visualizer_pane_ParamLimits

0xd343,	// (0x00036e9e) mup2_visualizer_pane

0xd343,	// (0x00036e9e) mup_progress_pane_cp_ParamLimits

0xd343,	// (0x00036e9e) mup_progress_pane_cp

0xb31a,	// (0x00034e75) mup_volume_pane_cp_ParamLimits

0xb31a,	// (0x00034e75) mup_volume_pane_cp

0xc525,	// (0x00036080) mup2_visualizer_pane_g1_ParamLimits

0xc525,	// (0x00036080) mup2_visualizer_pane_g1

0xc533,	// (0x0003608e) mup2_visualizer_pane_g2_ParamLimits

0xc533,	// (0x0003608e) mup2_visualizer_pane_g2

0xc533,	// (0x0003608e) mup2_visualizer_pane_g3_ParamLimits

0xc533,	// (0x0003608e) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00038bd7) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00038bd7) mup2_visualizer_pane_g

0xbe24,	// (0x0003597f) aid_size_cell_fmradio

0x0efc,	// (0x0002aa57) aid_height_parent_landcape

0xc919,	// (0x00036474) wml_content_pane_cp

0xc921,	// (0x0003647c) wml_tabs_pane

0xc92a,	// (0x00036485) popup_wml_miniature_window

0xc932,	// (0x0003648d) scroll_pane_cp021

0xc946,	// (0x000364a1) wml_content_pane_comp8

0xc241,	// (0x00035d9c) bg_popup_sub_pane_cp05

0xe540,	// (0x0003809b) popup_wml_miniature_window_g1

0xe548,	// (0x000380a3) wml_miniature_view_pane

0x4641,	// (0x0002e19c) aid_size_wml_view

0x4649,	// (0x0002e1a4) wml_miniature_view_pane_g1

0x4652,	// (0x0002e1ad) wml_miniature_view_pane_g2

0x465b,	// (0x0002e1b6) wml_miniature_view_pane_g3

0x4663,	// (0x0002e1be) wml_miniature_view_pane_g4

0x466b,	// (0x0002e1c6) wml_miniature_view_pane_g5

0x4673,	// (0x0002e1ce) wml_miniature_view_pane_g6

0x467b,	// (0x0002e1d6) wml_miniature_view_pane_g7

0x4683,	// (0x0002e1de) wml_miniature_view_pane_g8

0x0007,

0xf4f8,	// (0x00039053) wml_miniature_view_pane_g

0xe550,	// (0x000380ab) background_graphic_ParamLimits

0xe550,	// (0x000380ab) background_graphic

0xe55c,	// (0x000380b7) wml_tabs_2_pane

0xe565,	// (0x000380c0) wml_tabs_3_pane_ParamLimits

0xe565,	// (0x000380c0) wml_tabs_3_pane

0xe577,	// (0x000380d2) wml_tabs_4_pane_ParamLimits

0xe577,	// (0x000380d2) wml_tabs_4_pane

0xe58d,	// (0x000380e8) wml_tabs_5_pane_ParamLimits

0xe58d,	// (0x000380e8) wml_tabs_5_pane

0xe5a7,	// (0x00038102) wml_tabs_pane_g2_ParamLimits

0xe5a7,	// (0x00038102) wml_tabs_pane_g2

0xe5bc,	// (0x00038117) wml_tabs_pane_g3_ParamLimits

0xe5bc,	// (0x00038117) wml_tabs_pane_g3

0xe5d1,	// (0x0003812c) wml_tabs_2_active_pane_ParamLimits

0xe5d1,	// (0x0003812c) wml_tabs_2_active_pane

0xe5d1,	// (0x0003812c) wml_tabs_2_passive_pane_ParamLimits

0xe5d1,	// (0x0003812c) wml_tabs_2_passive_pane

0x468b,	// (0x0002e1e6) wml_tabs_3_active_pane_cp_ParamLimits

0x468b,	// (0x0002e1e6) wml_tabs_3_active_pane_cp

0x46a0,	// (0x0002e1fb) wml_tabs_3_passive_pane_ParamLimits

0x46a0,	// (0x0002e1fb) wml_tabs_3_passive_pane

0x46b3,	// (0x0002e20e) wml_tabs_3_passive_pane_cp_ParamLimits

0x46b3,	// (0x0002e20e) wml_tabs_3_passive_pane_cp

0x46ca,	// (0x0002e225) tabs_4_active_pane

0x46d2,	// (0x0002e22d) tabs_4_passive_pane

0x46dc,	// (0x0002e237) tabs_4_passive_pane_cp

0x46e4,	// (0x0002e23f) tabs_4_passive_pane_cp2

0x41f4,	// (0x0002dd4f) aid_height_text

0xd343,	// (0x00036e9e) mup_volume_cont_pane_ParamLimits

0xd343,	// (0x00036e9e) mup_volume_cont_pane

0xbe24,	// (0x0003597f) aid_size_cell_pinb

0xbe24,	// (0x0003597f) aid_size_list_pinb

0xd343,	// (0x00036e9e) mup2_volume_cont_pane_ParamLimits

0xd343,	// (0x00036e9e) mup2_volume_cont_pane

0xb304,	// (0x00034e5f) mup2_volume_cont_pane_g1_ParamLimits

0xb304,	// (0x00034e5f) mup2_volume_cont_pane_g1

0x0a3a,	// (0x0002a595) aid_size_cell_touch_ParamLimits

0x0a3a,	// (0x0002a595) aid_size_cell_touch

0x0c21,	// (0x0002a77c) touch_pane_ParamLimits

0x0c21,	// (0x0002a77c) touch_pane

0xb0e6,	// (0x00034c41) main_rss2_pane

0xe5e8,	// (0x00038143) listscroll_rss2_pane

0xe5f1,	// (0x0003814c) rss2_navigation_pane

0xe5f9,	// (0x00038154) list_rss2_pane

0xcf56,	// (0x00036ab1) scroll_pane_cp22

0xe601,	// (0x0003815c) rss2_navigation_pane_g1

0xe60a,	// (0x00038165) rss2_navigation_pane_g2

0xe612,	// (0x0003816d) rss2_navigation_pane_g3

0x0002,

0xf509,	// (0x00039064) rss2_navigation_pane_g

0xe61a,	// (0x00038175) rss2_navigation_pane_t1

0x46f8,	// (0x0002e253) rss2_list_single_pane_ParamLimits

0x46f8,	// (0x0002e253) rss2_list_single_pane

0xe628,	// (0x00038183) rss2_list_single_pane_t2

0xe636,	// (0x00038191) rss2_list_single_pane_t3_ParamLimits

0xe636,	// (0x00038191) rss2_list_single_pane_t3

0xe653,	// (0x000381ae) rss2_list_single_pane_t4

0x3472,	// (0x0002cfcd) smil_status_pane_g1

0xb0d8,	// (0x00034c33) main_image2_pane_ParamLimits

0xb0d8,	// (0x00034c33) main_image2_pane

0xb2b2,	// (0x00034e0d) main_camera2_pane_g9_ParamLimits

0xb2b2,	// (0x00034e0d) main_camera2_pane_g9

0x11ac,	// (0x0002ad07) main_camera2_pane_t5_ParamLimits

0x11ac,	// (0x0002ad07) main_camera2_pane_t5

0xb2c0,	// (0x00034e1b) main_camera2_pane_t6_ParamLimits

0xb2c0,	// (0x00034e1b) main_camera2_pane_t6

0x470e,	// (0x0002e269) main_image2_pane_g1_ParamLimits

0x470e,	// (0x0002e269) main_image2_pane_g1

0x3ec7,	// (0x0002da22) smil2_video_pane_ParamLimits

0x3ec7,	// (0x0002da22) smil2_video_pane

0xb087,	// (0x00034be2) aid_zoom_text_primary_cp

0xb0ce,	// (0x00034c29) popup_preview_fixed_window

0xc882,	// (0x000363dd) im_reading_pane_g1

0x119e,	// (0x0002acf9) cams2_bc_adjust_pane_cp_ParamLimits

0x119e,	// (0x0002acf9) cams2_bc_adjust_pane_cp

0xb2e8,	// (0x00034e43) cams2_bc_adjust_pane_ParamLimits

0xb2e8,	// (0x00034e43) cams2_bc_adjust_pane

0x46ee,	// (0x0002e249) cams2_bc_adjust_pane_g1

0xb0e6,	// (0x00034c41) cams2_slider_pane

0x46ee,	// (0x0002e249) cams2_slider_pane_g1

0x46ee,	// (0x0002e249) cams2_slider_pane_g2

0x0006,

0xf510,	// (0x0003906b) cams2_slider_pane_g

0x0c91,	// (0x0002a7ec) calc_display_pane_ParamLimits

0x0cb6,	// (0x0002a811) calc_paper_pane_ParamLimits

0x0cd9,	// (0x0002a834) grid_calc_pane_ParamLimits

0xb1c9,	// (0x00034d24) popup_clock_digital_window_t1_ParamLimits

0xd419,	// (0x00036f74) main_image_pane_t1

0x0c73,	// (0x0002a7ce) aid_size_cell_calc_ParamLimits

0x0c73,	// (0x0002a7ce) aid_size_cell_calc

0x0f42,	// (0x0002aa9d) popup_blid_sat_info2_window_ParamLimits

0x0f42,	// (0x0002aa9d) popup_blid_sat_info2_window

0xe661,	// (0x000381bc) aid_size_cell_blid

0xe532,	// (0x0003808d) bg_popup_window_pane_cp07

0xe67e,	// (0x000381d9) grid_popup_blid_pane

0xe688,	// (0x000381e3) heading_pane_cp05_ParamLimits

0xe688,	// (0x000381e3) heading_pane_cp05

0xe752,	// (0x000382ad) cell_popup_blid_pane_ParamLimits

0xe752,	// (0x000382ad) cell_popup_blid_pane

0xe776,	// (0x000382d1) cell_popup_blid_pane_g1

0xe77e,	// (0x000382d9) cell_popup_blid_pane_t1

0xd343,	// (0x00036e9e) mup2_indicator_pane_ParamLimits

0xd343,	// (0x00036e9e) mup2_indicator_pane

0xbe24,	// (0x0003597f) mup2_visualizer_osc_pane

0xe51c,	// (0x00038077) mup2_visualizer_spec_pane_ParamLimits

0xe51c,	// (0x00038077) mup2_visualizer_spec_pane

0xbe24,	// (0x0003597f) mup2_spec_half_pane

0xbe24,	// (0x0003597f) mup2_spec_half_pane_cp

0xe78c,	// (0x000382e7) mup2_spec_bar_pane_ParamLimits

0xe78c,	// (0x000382e7) mup2_spec_bar_pane

0xc563,	// (0x000360be) mup2_spec_bar_pane_g1

0xe7ab,	// (0x00038306) mup2_spec_bar_pane_g2

0x0001,

0xf536,	// (0x00039091) mup2_spec_bar_pane_g

0xbe24,	// (0x0003597f) mup2_osc_middle_pane

0xc563,	// (0x000360be) mup2_visualizer_osc_pane_g1

0xbe4e,	// (0x000359a9) popup_number_entry_window_t1_ParamLimits

0xbe61,	// (0x000359bc) popup_number_entry_window_t2_ParamLimits

0xbe73,	// (0x000359ce) popup_number_entry_window_t3_ParamLimits

0x1f42,	// (0x0002ba9d) popup_number_entry_window_t5_ParamLimits

0x1f42,	// (0x0002ba9d) popup_number_entry_window_t5

0xf01d,	// (0x00038b78) popup_number_entry_window_t_ParamLimits

0xbe85,	// (0x000359e0) text_title_cp2_ParamLimits

0xb208,	// (0x00034d63) aid_hotspot_pointer_text2_pane

0xb222,	// (0x00034d7d) main_viewer_pane_g9_ParamLimits

0xb222,	// (0x00034d7d) main_viewer_pane_g9

0xcac4,	// (0x0003661f) cale_month_pane_t1_ParamLimits

0xcb01,	// (0x0003665c) bg_cale_pane_ParamLimits

0xcb19,	// (0x00036674) list_cale_pane_ParamLimits

0xcb2a,	// (0x00036685) listscroll_cale_day_pane_t1

0xcb3c,	// (0x00036697) scroll_pane_cp09_ParamLimits

0x3889,	// (0x0002d3e4) main_mup_eq_pane_t1_ParamLimits

0x3889,	// (0x0002d3e4) main_mup_eq_pane_t1

0x38a3,	// (0x0002d3fe) main_mup_eq_pane_t2_ParamLimits

0x38a3,	// (0x0002d3fe) main_mup_eq_pane_t2

0x38bd,	// (0x0002d418) main_mup_eq_pane_t3_ParamLimits

0x38bd,	// (0x0002d418) main_mup_eq_pane_t3

0x38d9,	// (0x0002d434) main_mup_eq_pane_t4_ParamLimits

0x38d9,	// (0x0002d434) main_mup_eq_pane_t4

0x38f5,	// (0x0002d450) main_mup_eq_pane_t5_ParamLimits

0x38f5,	// (0x0002d450) main_mup_eq_pane_t5

0x3911,	// (0x0002d46c) main_mup_eq_pane_t6_ParamLimits

0x3911,	// (0x0002d46c) main_mup_eq_pane_t6

0x3925,	// (0x0002d480) main_mup_eq_pane_t7_ParamLimits

0x3925,	// (0x0002d480) main_mup_eq_pane_t7

0x3939,	// (0x0002d494) main_mup_eq_pane_t8_ParamLimits

0x3939,	// (0x0002d494) main_mup_eq_pane_t8

0x394d,	// (0x0002d4a8) main_mup_eq_pane_t9_ParamLimits

0x394d,	// (0x0002d4a8) main_mup_eq_pane_t9

0x3967,	// (0x0002d4c2) main_mup_eq_pane_t10_ParamLimits

0x3967,	// (0x0002d4c2) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00038ed2) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00038ed2) main_mup_eq_pane_t

0x3a16,	// (0x0002d571) mup_equalizer_pane_cp5_ParamLimits

0x3a2a,	// (0x0002d585) mup_equalizer_pane_cp6_ParamLimits

0x3a3e,	// (0x0002d599) mup_equalizer_pane_cp7_ParamLimits

0xb0e6,	// (0x00034c41) main_gallery_pane

0xe4ba,	// (0x00038015) smil2_volume_pane

0xe4c2,	// (0x0003801d) smil_status_volume_pane_g1_ParamLimits

0xe4d5,	// (0x00038030) smil_status_volume_pane_g2_ParamLimits

0xb282,	// (0x00034ddd) smil_status_volume_pane_g3_ParamLimits

0xf48f,	// (0x00038fea) smil_status_volume_pane_g_ParamLimits

0xe532,	// (0x0003808d) bg_popup_window_pane_cp07_ParamLimits

0xe669,	// (0x000381c4) blid_firmament_pane

0xc24b,	// (0x00035da6) aid_size_cell_gallery_ParamLimits

0xc24b,	// (0x00035da6) aid_size_cell_gallery

0xc24b,	// (0x00035da6) grid_gallery_pane_ParamLimits

0xc24b,	// (0x00035da6) grid_gallery_pane

0xe532,	// (0x0003808d) cell_gallery_pane_ParamLimits

0xe532,	// (0x0003808d) cell_gallery_pane

0xc24b,	// (0x00035da6) bg_cell_gallery_focus_pane_ParamLimits

0xc24b,	// (0x00035da6) bg_cell_gallery_focus_pane

0xc525,	// (0x00036080) cell_gallery_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_gallery_pane_g1

0xc525,	// (0x00036080) cell_gallery_pane_g2_ParamLimits

0xc525,	// (0x00036080) cell_gallery_pane_g2

0xc525,	// (0x00036080) cell_gallery_pane_g3_ParamLimits

0xc525,	// (0x00036080) cell_gallery_pane_g3

0xc533,	// (0x0003608e) cell_gallery_pane_g4_ParamLimits

0xc533,	// (0x0003608e) cell_gallery_pane_g4

0x0003,

0x0183,	// (0x00029cde) cell_gallery_pane_g_ParamLimits

0x0183,	// (0x00029cde) cell_gallery_pane_g

0xe7b5,	// (0x00038310) bg_cell_gallery_focus_pane_g1

0xe7bd,	// (0x00038318) bg_cell_gallery_focus_pane_g2

0xe7c5,	// (0x00038320) bg_cell_gallery_focus_pane_g3

0xe7cd,	// (0x00038328) bg_cell_gallery_focus_pane_g4

0xe7d5,	// (0x00038330) bg_cell_gallery_focus_pane_g5

0xe7dd,	// (0x00038338) bg_cell_gallery_focus_pane_g6

0xe7e5,	// (0x00038340) bg_cell_gallery_focus_pane_g7

0xe7ed,	// (0x00038348) bg_cell_gallery_focus_pane_g8

0x0007,

0xf53b,	// (0x00039096) bg_cell_gallery_focus_pane_g

0xe7f5,	// (0x00038350) aid_firma_cardinal

0xe809,	// (0x00038364) blid_firmament_pane_t1

0xe820,	// (0x0003837b) blid_firmament_pane_t2

0xe837,	// (0x00038392) blid_firmament_pane_t3

0xe84e,	// (0x000383a9) blid_firmament_pane_t4

0x0003,

0xf54c,	// (0x000390a7) blid_firmament_pane_t

0xe865,	// (0x000383c0) blid_sat_info_pane

0xc563,	// (0x000360be) blid_sat_info_pane_g1

0xc563,	// (0x000360be) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00038be7) blid_sat_info_pane_g

0xe875,	// (0x000383d0) blid_sat_info_pane_t1

0xe883,	// (0x000383de) smil2_volume_content_pane

0xe88c,	// (0x000383e7) smil2_volume_pane_g1

0xc690,	// (0x000361eb) smil2_volume_content_pane_g1

0xe894,	// (0x000383ef) smil2_volume_content_pane_g2

0xe89d,	// (0x000383f8) smil2_volume_content_pane_g3

0xe8a6,	// (0x00038401) smil2_volume_content_pane_g4

0xe8af,	// (0x0003840a) smil2_volume_content_pane_g5

0xe8b8,	// (0x00038413) smil2_volume_content_pane_g6

0xe8c1,	// (0x0003841c) smil2_volume_content_pane_g7

0xe8ca,	// (0x00038425) smil2_volume_content_pane_g8

0xe8d3,	// (0x0003842e) smil2_volume_content_pane_g9

0xe8dc,	// (0x00038437) smil2_volume_content_pane_g10

0x0009,

0xf555,	// (0x000390b0) smil2_volume_content_pane_g

0x2381,	// (0x0002bedc) cale_week_day_heading_pane_t1_ParamLimits

0x23ab,	// (0x0002bf06) cale_week_day_heading_pane_t2_ParamLimits

0x23da,	// (0x0002bf35) cale_week_day_heading_pane_t3_ParamLimits

0x2409,	// (0x0002bf64) cale_week_day_heading_pane_t4_ParamLimits

0x2438,	// (0x0002bf93) cale_week_day_heading_pane_t5_ParamLimits

0x246f,	// (0x0002bfca) cale_week_day_heading_pane_t6_ParamLimits

0x24a6,	// (0x0002c001) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00038c7f) cale_week_day_heading_pane_t_ParamLimits

0xc777,	// (0x000362d2) bg_cale_side_pane_ParamLimits

0x0dc2,	// (0x0002a91d) cale_week_time_pane_t1_ParamLimits

0x0ddc,	// (0x0002a937) cale_week_time_pane_t2_ParamLimits

0x0df6,	// (0x0002a951) cale_week_time_pane_t3_ParamLimits

0x0e10,	// (0x0002a96b) cale_week_time_pane_t4_ParamLimits

0x0e2a,	// (0x0002a985) cale_week_time_pane_t5_ParamLimits

0x0e44,	// (0x0002a99f) cale_week_time_pane_t6_ParamLimits

0x0e5e,	// (0x0002a9b9) cale_week_time_pane_t7_ParamLimits

0x0e78,	// (0x0002a9d3) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00038c8e) cale_week_time_pane_t_ParamLimits

0x24d0,	// (0x0002c02b) cell_cale_week_pane_g2_ParamLimits

0xc777,	// (0x000362d2) bg_cale_side_pane_cp01_ParamLimits

0x32a3,	// (0x0002cdfe) cale_month_week_pane_t1_ParamLimits

0x32bc,	// (0x0002ce17) cale_month_week_pane_t2_ParamLimits

0x32d5,	// (0x0002ce30) cale_month_week_pane_t3_ParamLimits

0x32ee,	// (0x0002ce49) cale_month_week_pane_t4_ParamLimits

0x3307,	// (0x0002ce62) cale_month_week_pane_t5_ParamLimits

0x3320,	// (0x0002ce7b) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00038d5c) cale_month_week_pane_t_ParamLimits

0xb149,	// (0x00034ca4) cell_cale_month_pane_g1_ParamLimits

0xb0e6,	// (0x00034c41) main_cale_event_viewer_pane

0xbe24,	// (0x0003597f) listscroll_cale_event_viewer_pane

0xe8e5,	// (0x00038440) list_cale_ev_pane

0xe8ed,	// (0x00038448) scroll_pane_cp023

0xe8f9,	// (0x00038454) field_cale_ev_pane_ParamLimits

0xe8f9,	// (0x00038454) field_cale_ev_pane

0xe917,	// (0x00038472) field_cale_ev_content_pane_ParamLimits

0xe917,	// (0x00038472) field_cale_ev_content_pane

0xe923,	// (0x0003847e) field_cale_ev_pane_g1_ParamLimits

0xe923,	// (0x0003847e) field_cale_ev_pane_g1

0xe92f,	// (0x0003848a) field_cale_ev_pane_g2_ParamLimits

0xe92f,	// (0x0003848a) field_cale_ev_pane_g2

0xe947,	// (0x000384a2) field_cale_ev_pane_g3_ParamLimits

0xe947,	// (0x000384a2) field_cale_ev_pane_g3

0x0002,

0xf56a,	// (0x000390c5) field_cale_ev_pane_g_ParamLimits

0xf56a,	// (0x000390c5) field_cale_ev_pane_g

0xe981,	// (0x000384dc) field_cale_ev_pane_t1_ParamLimits

0xe981,	// (0x000384dc) field_cale_ev_pane_t1

0xe998,	// (0x000384f3) field_cale_ev_content_pane_t1_ParamLimits

0xe998,	// (0x000384f3) field_cale_ev_content_pane_t1

0xd2e4,	// (0x00036e3f) bg_button_pane_cp01

0x0db0,	// (0x0002a90b) listscroll_cale_week_pane_ParamLimits

0xb136,	// (0x00034c91) popup_toolbar_window_cp01

0xc748,	// (0x000362a3) listscroll_cale_week_pane_t1_ParamLimits

0x34cb,	// (0x0002d026) listscroll_cale_day_pane_ParamLimits

0xcabb,	// (0x00036616) popup_toolbar_window_cp02

0xcb2a,	// (0x00036685) listscroll_cale_day_pane_t1_ParamLimits

0x0db0,	// (0x0002a90b) main_cale_month_pane_ParamLimits

0xb26d,	// (0x00034dc8) popup_toolbar_window_cp03_ParamLimits

0xb26d,	// (0x00034dc8) popup_toolbar_window_cp03

0x3d8f,	// (0x0002d8ea) main_image_pane_g2_ParamLimits

0x3d8f,	// (0x0002d8ea) main_image_pane_g2

0x3da0,	// (0x0002d8fb) main_image_pane_g3_ParamLimits

0x3da0,	// (0x0002d8fb) main_image_pane_g3

0x0002,

0xf409,	// (0x00038f64) main_image_pane_g_ParamLimits

0xf409,	// (0x00038f64) main_image_pane_g

0xd419,	// (0x00036f74) main_image_pane_t1_ParamLimits

0x3db1,	// (0x0002d90c) main_image_pane_t2_ParamLimits

0x3db1,	// (0x0002d90c) main_image_pane_t2

0x3dc3,	// (0x0002d91e) main_image_pane_t3_ParamLimits

0x3dc3,	// (0x0002d91e) main_image_pane_t3

0x3deb,	// (0x0002d946) main_image_pane_t4_ParamLimits

0x3deb,	// (0x0002d946) main_image_pane_t4

0x0003,

0xf410,	// (0x00038f6b) main_image_pane_t_ParamLimits

0xf410,	// (0x00038f6b) main_image_pane_t

0x3e0b,	// (0x0002d966) popup_image_details_window_cp01

0x3e15,	// (0x0002d970) popup_toobar_trans_pane_cp01_ParamLimits

0x3e15,	// (0x0002d970) popup_toobar_trans_pane_cp01

0x1013,	// (0x0002ab6e) popup_image_details_window_ParamLimits

0x1013,	// (0x0002ab6e) popup_image_details_window

0xb240,	// (0x00034d9b) popup_image_focus_window

0xb2a4,	// (0x00034dff) camera2_autofocus_pane_ParamLimits

0xb2a4,	// (0x00034dff) camera2_autofocus_pane

0xbe24,	// (0x0003597f) bg_popup_sub_pane_cp06

0xe9b6,	// (0x00038511) popup_image_focus_window_g1

0xe9be,	// (0x00038519) popup_image_focus_window_g2

0xe9c6,	// (0x00038521) popup_image_focus_window_g3

0xe9ce,	// (0x00038529) popup_image_focus_window_g4

0x0003,

0x01c2,	// (0x00029d1d) popup_image_focus_window_g

0xe9d6,	// (0x00038531) popup_image_focus_window_t1

0xe9e4,	// (0x0003853f) popup_image_focus_window_t2

0xe9f4,	// (0x0003854f) popup_image_focus_window_t3

0x0002,

0x01cb,	// (0x00029d26) popup_image_focus_window_t

0xc525,	// (0x00036080) camera2_autofocus_pane_g1

0xc24b,	// (0x00035da6) bg_tb_trans_pane_cp01

0xea02,	// (0x0003855d) popup_image_details_window_g1

0xea15,	// (0x00038570) popup_image_details_window_g2

0x0002,

0x01dd,	// (0x00029d38) popup_image_details_window_g

0xea3e,	// (0x00038599) popup_image_details_window_t1

0xea50,	// (0x000385ab) popup_image_details_window_t2

0xea69,	// (0x000385c4) popup_image_details_window_t3

0xea7d,	// (0x000385d8) popup_image_details_window_t4

0xea98,	// (0x000385f3) popup_image_details_window_t5

0x0004,

0x01e4,	// (0x00029d3f) popup_image_details_window_t

0xc5ad,	// (0x00036108) bg_calc_paper_pane_ParamLimits

0xb0e6,	// (0x00034c41) grid_highlight_pane_cp013

0xb0f8,	// (0x00034c53) list_calc_pane_ParamLimits

0xb10a,	// (0x00034c65) scroll_pane_cp024

0xc5c1,	// (0x0003611c) bg_calc_display_pane_ParamLimits

0x0d07,	// (0x0002a862) calc_display_pane_t1_ParamLimits

0x0d19,	// (0x0002a874) calc_display_pane_t2_ParamLimits

0xb112,	// (0x00034c6d) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00038bff) calc_display_pane_t_ParamLimits

0x0d7a,	// (0x0002a8d5) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00038c1c) cell_calc_pane_g

0x0d83,	// (0x0002a8de) cell_calc_pane_t1

0xc616,	// (0x00036171) grid_highlight_pane_cp02_ParamLimits

0xc62c,	// (0x00036187) toolbar_button_pane_cp01_ParamLimits

0xc62c,	// (0x00036187) toolbar_button_pane_cp01

0xd45e,	// (0x00036fb9) temp_image_control_pane_ParamLimits

0xd45e,	// (0x00036fb9) temp_image_control_pane

0xb0d8,	// (0x00034c33) main_mp3_pane

0xeab2,	// (0x0003860d) temp_image_control_pane_g1_ParamLimits

0xeab2,	// (0x0003860d) temp_image_control_pane_g1

0xeac0,	// (0x0003861b) temp_image_control_pane_g2_ParamLimits

0xeac0,	// (0x0003861b) temp_image_control_pane_g2

0xead2,	// (0x0003862d) temp_image_control_pane_g3_ParamLimits

0xead2,	// (0x0003862d) temp_image_control_pane_g3

0x4724,	// (0x0002e27f) temp_image_control_pane_g4_ParamLimits

0x4724,	// (0x0002e27f) temp_image_control_pane_g4

0x0003,

0xf571,	// (0x000390cc) temp_image_control_pane_g_ParamLimits

0xf571,	// (0x000390cc) temp_image_control_pane_g

0xeab2,	// (0x0003860d) main_mp3_pane_g1

0x4737,	// (0x0002e292) main_mp3_pane_g2

0x0007,

0xf57a,	// (0x000390d5) main_mp3_pane_g

0xeb07,	// (0x00038662) main_mp3_pane_t1

0xc533,	// (0x0003608e) main_camera_pane_g8_ParamLimits

0xc533,	// (0x0003608e) main_camera_pane_g8

0x269e,	// (0x0002c1f9) main_video_pane_g7_ParamLimits

0x269e,	// (0x0002c1f9) main_video_pane_g7

0xb2d4,	// (0x00034e2f) main_camera2_pane_t7_ParamLimits

0xb2d4,	// (0x00034e2f) main_camera2_pane_t7

0xc8d9,	// (0x00036434) scroll_pane_cp025_ParamLimits

0xc8d9,	// (0x00036434) scroll_pane_cp025

0xc8ed,	// (0x00036448) scroll_pane_cp026_ParamLimits

0xc8ed,	// (0x00036448) scroll_pane_cp026

0xc8fc,	// (0x00036457) wml_content_pane_ParamLimits

0xb0e6,	// (0x00034c41) main_touch_calib_pane

0x480b,	// (0x0002e366) main_touch_calib_pane_g1

0x481d,	// (0x0002e378) main_touch_calib_pane_g2

0x482f,	// (0x0002e38a) main_touch_calib_pane_g3

0x4841,	// (0x0002e39c) main_touch_calib_pane_g4

0x0003,

0xf598,	// (0x000390f3) main_touch_calib_pane_g

0x4853,	// (0x0002e3ae) main_touch_calib_pane_t1

0x486d,	// (0x0002e3c8) main_touch_calib_pane_t2

0x0004,

0xf5a1,	// (0x000390fc) main_touch_calib_pane_t

0xd025,	// (0x00036b80) mup_progress_pane_cp02

0xd05a,	// (0x00036bb5) navi_pane_g1

0xd115,	// (0x00036c70) navi_pane_mp_t3

0xb0d8,	// (0x00034c33) main_mp3_pane_ParamLimits

0x4430,	// (0x0002df8b) navi_pane_ParamLimits

0xeab2,	// (0x0003860d) main_mp3_pane_g1_ParamLimits

0x4737,	// (0x0002e292) main_mp3_pane_g2_ParamLimits

0x4745,	// (0x0002e2a0) main_mp3_pane_g3_ParamLimits

0x4745,	// (0x0002e2a0) main_mp3_pane_g3

0x4753,	// (0x0002e2ae) main_mp3_pane_g4_ParamLimits

0x4753,	// (0x0002e2ae) main_mp3_pane_g4

0xc525,	// (0x00036080) main_mp3_pane_g5_ParamLimits

0xc525,	// (0x00036080) main_mp3_pane_g5

0xeae2,	// (0x0003863d) main_mp3_pane_g6_ParamLimits

0xeae2,	// (0x0003863d) main_mp3_pane_g6

0xeaef,	// (0x0003864a) main_mp3_pane_g7_ParamLimits

0xeaef,	// (0x0003864a) main_mp3_pane_g7

0xeafb,	// (0x00038656) main_mp3_pane_g8_ParamLimits

0xeafb,	// (0x00038656) main_mp3_pane_g8

0xf57a,	// (0x000390d5) main_mp3_pane_g_ParamLimits

0x475f,	// (0x0002e2ba) main_mp3_pane_t2

0x476d,	// (0x0002e2c8) main_mp3_pane_t3

0xeb15,	// (0x00038670) main_mp3_pane_t4

0xeb23,	// (0x0003867e) main_mp3_pane_t5

0x0005,

0xf58b,	// (0x000390e6) main_mp3_pane_t

0xeb31,	// (0x0003868c) mup_progress_pane_cp01

0xb087,	// (0x00034be2) aid_zoom_text_secondary2

0xe8e5,	// (0x00038440) list_cale_ev2_pane

0xe8ed,	// (0x00038448) scroll_pane_cp023_ParamLimits

0x48c3,	// (0x0002e41e) field_cale_ev2_pane_ParamLimits

0x48c3,	// (0x0002e41e) field_cale_ev2_pane

0xeb39,	// (0x00038694) field_cale_ev2_pane_g1_ParamLimits

0xeb39,	// (0x00038694) field_cale_ev2_pane_g1

0xeb45,	// (0x000386a0) field_cale_ev2_pane_g2_ParamLimits

0xeb45,	// (0x000386a0) field_cale_ev2_pane_g2

0xeb5d,	// (0x000386b8) field_cale_ev2_pane_g3_ParamLimits

0xeb5d,	// (0x000386b8) field_cale_ev2_pane_g3

0x0003,

0x022a,	// (0x00029d85) field_cale_ev2_pane_g_ParamLimits

0x022a,	// (0x00029d85) field_cale_ev2_pane_g

0xeb81,	// (0x000386dc) field_cale_ev2_pane_t1_ParamLimits

0xeb81,	// (0x000386dc) field_cale_ev2_pane_t1

0xeb98,	// (0x000386f3) field_cale_ev2_pane_t2_ParamLimits

0xeb98,	// (0x000386f3) field_cale_ev2_pane_t2

0x0001,

0x0233,	// (0x00029d8e) field_cale_ev2_pane_t_ParamLimits

0x0233,	// (0x00029d8e) field_cale_ev2_pane_t

0x3c65,	// (0x0002d7c0) main_postcard_pane_g5_ParamLimits

0x3c65,	// (0x0002d7c0) main_postcard_pane_g5

0x3c7b,	// (0x0002d7d6) main_postcard_pane_g6_ParamLimits

0x3c7b,	// (0x0002d7d6) main_postcard_pane_g6

0xc24b,	// (0x00035da6) camera2_autofocus_pane_cp_ParamLimits

0xc24b,	// (0x00035da6) camera2_autofocus_pane_cp

0xb0d8,	// (0x00034c33) main_mup3_pane

0x4928,	// (0x0002e483) main_mup3_pane_g1_ParamLimits

0x4928,	// (0x0002e483) main_mup3_pane_g1

0x497a,	// (0x0002e4d5) main_mup3_pane_g2_ParamLimits

0x497a,	// (0x0002e4d5) main_mup3_pane_g2

0x49e2,	// (0x0002e53d) main_mup3_pane_g3_ParamLimits

0x49e2,	// (0x0002e53d) main_mup3_pane_g3

0x4a46,	// (0x0002e5a1) main_mup3_pane_g4_ParamLimits

0x4a46,	// (0x0002e5a1) main_mup3_pane_g4

0x4aaa,	// (0x0002e605) main_mup3_pane_g5_ParamLimits

0x4aaa,	// (0x0002e605) main_mup3_pane_g5

0x4b0e,	// (0x0002e669) main_mup3_pane_g6_ParamLimits

0x4b0e,	// (0x0002e669) main_mup3_pane_g6

0xc533,	// (0x0003608e) main_mup3_pane_g7_ParamLimits

0xc533,	// (0x0003608e) main_mup3_pane_g7

0x0007,

0xf5b7,	// (0x00039112) main_mup3_pane_g_ParamLimits

0xf5b7,	// (0x00039112) main_mup3_pane_g

0x4b83,	// (0x0002e6de) main_mup3_pane_t1_ParamLimits

0x4b83,	// (0x0002e6de) main_mup3_pane_t1

0x4c71,	// (0x0002e7cc) main_mup3_pane_t2_ParamLimits

0x4c71,	// (0x0002e7cc) main_mup3_pane_t2

0x4d5f,	// (0x0002e8ba) main_mup3_pane_t4_ParamLimits

0x4d5f,	// (0x0002e8ba) main_mup3_pane_t4

0x4d71,	// (0x0002e8cc) main_mup3_pane_t5_ParamLimits

0x4d71,	// (0x0002e8cc) main_mup3_pane_t5

0x4e43,	// (0x0002e99e) main_mup3_pane_t6_ParamLimits

0x4e43,	// (0x0002e99e) main_mup3_pane_t6

0x0005,

0xf5c8,	// (0x00039123) main_mup3_pane_t_ParamLimits

0xf5c8,	// (0x00039123) main_mup3_pane_t

0x4eeb,	// (0x0002ea46) mup3_progress_pane_ParamLimits

0x4eeb,	// (0x0002ea46) mup3_progress_pane

0x4f5f,	// (0x0002eaba) popup_mup3_control_window_ParamLimits

0x4f5f,	// (0x0002eaba) popup_mup3_control_window

0xebad,	// (0x00038708) popup_mup3_text_window

0x4f77,	// (0x0002ead2) mup3_progress_pane_t1

0x4f96,	// (0x0002eaf1) mup3_progress_pane_t2

0xebb5,	// (0x00038710) mup3_progress_pane_t3

0x0002,

0xf5d5,	// (0x00039130) mup3_progress_pane_t

0xebd2,	// (0x0003872d) mup_progress_pane_cp03

0xebe2,	// (0x0003873d) bg_tb_trans_pane_cp04

0xebe2,	// (0x0003873d) mup3_volume_pane

0xebea,	// (0x00038745) popup_mup3_control_window_g1

0xebea,	// (0x00038745) mup3_volume_pane_g1

0xebea,	// (0x00038745) mup3_volume_pane_g2

0xebea,	// (0x00038745) mup3_volume_pane_g3

0x0002,

0x0268,	// (0x00029dc3) mup3_volume_pane_g

0xbe24,	// (0x0003597f) bg_tb_trans_pane_cp03

0xebf2,	// (0x0003874d) popup_mup3_text_window_g1

0xebfa,	// (0x00038755) popup_mup3_text_window_t1

0xc609,	// (0x00036164) list_calc_item_pane_g1_ParamLimits

0xe5df,	// (0x0003813a) mup_volume_pane_cp_g1

0x4887,	// (0x0002e3e2) main_touch_calib_pane_t3

0x489b,	// (0x0002e3f6) main_touch_calib_pane_t4

0x48af,	// (0x0002e40a) main_touch_calib_pane_t5

0xb073,	// (0x00034bce) aid_cell_size_toolbar2

0xb07b,	// (0x00034bd6) aid_popup3_width_pane

0xb087,	// (0x00034be2) aid_zoom_text_msg_primary

0x2579,	// (0x0002c0d4) vorec_t7

0xc5cd,	// (0x00036128) bg_calc_paper_pane_g1_ParamLimits

0xc5d9,	// (0x00036134) bg_calc_paper_pane_g2_ParamLimits

0xc5e5,	// (0x00036140) bg_calc_paper_pane_g3_ParamLimits

0xc5f1,	// (0x0003614c) bg_calc_paper_pane_g4_ParamLimits

0xc5fd,	// (0x00036158) bg_calc_paper_pane_g5_ParamLimits

0x1faf,	// (0x0002bb0a) bg_calc_paper_pane_g6_ParamLimits

0x1fbe,	// (0x0002bb19) bg_calc_paper_pane_g7_ParamLimits

0x1fcd,	// (0x0002bb28) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00038c06) bg_calc_paper_pane_g_ParamLimits

0x1fe0,	// (0x0002bb3b) calc_bg_paper_pane_g9_ParamLimits

0xc24b,	// (0x00035da6) image_qvga_pane_ParamLimits

0xc24b,	// (0x00035da6) image_qvga_pane

0xc4aa,	// (0x00036005) bg_popup_sub_pane_cp04_ParamLimits

0xd395,	// (0x00036ef0) popup_mup_playback_window_g1_ParamLimits

0xd3a1,	// (0x00036efc) popup_mup_playback_window_t1_ParamLimits

0xd3b6,	// (0x00036f11) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00038f5f) popup_mup_playback_window_t_ParamLimits

0xc533,	// (0x0003608e) main_mup2_pane_g3_ParamLimits

0xc533,	// (0x0003608e) main_mup2_pane_g3

0x2859,	// (0x0002c3b4) popup_toolbar_window_cp04

0xd73a,	// (0x00037295) popup_call2_audio_second_window_g3_ParamLimits

0xd73a,	// (0x00037295) popup_call2_audio_second_window_g3

0xdb52,	// (0x000376ad) popup_call2_audio_first_window_g4_ParamLimits

0xdb52,	// (0x000376ad) popup_call2_audio_first_window_g4

0xe179,	// (0x00037cd4) popup_call2_audio_in_window_g4_ParamLimits

0xe179,	// (0x00037cd4) popup_call2_audio_in_window_g4

0x3d71,	// (0x0002d8cc) aid_area_sk_bg_cut_ParamLimits

0x3d71,	// (0x0002d8cc) aid_area_sk_bg_cut

0xd3cb,	// (0x00036f26) aid_area_sk_bg_cut_2_ParamLimits

0xd3cb,	// (0x00036f26) aid_area_sk_bg_cut_2

0xbe24,	// (0x0003597f) aid_placing_details_win

0xbe24,	// (0x0003597f) aid_placing_details_win_2

0xc525,	// (0x00036080) camera2_autofocus_pane_g1_ParamLimits

0x0bc6,	// (0x0002a721) popup_fixed_preview_cale_window_ParamLimits

0x0bc6,	// (0x0002a721) popup_fixed_preview_cale_window

0xd193,	// (0x00036cee) navi_slider_pane_g3

0xd19c,	// (0x00036cf7) navi_slider_pane_g4

0xd1a5,	// (0x00036d00) navi_slider_pane_g5

0xd193,	// (0x00036cee) navi_slider_pane_g6

0xb1ef,	// (0x00034d4a) navi_slider_pane_g7

0xd2b1,	// (0x00036e0c) mup_scale_pane_g3

0xd2ba,	// (0x00036e15) mup_scale_pane_g4

0xd2c3,	// (0x00036e1e) mup_scale_pane_g5

0x3a52,	// (0x0002d5ad) mup_scale_pane_g6

0x3a5b,	// (0x0002d5b6) mup_scale_pane_g7

0x46ee,	// (0x0002e249) cams2_slider_pane_g3

0x46ee,	// (0x0002e249) cams2_slider_pane_g4

0x46ee,	// (0x0002e249) cams2_slider_pane_g5

0x46ee,	// (0x0002e249) cams2_slider_pane_g6

0x46ee,	// (0x0002e249) cams2_slider_pane_g7

0xc563,	// (0x000360be) camera2_autofocus_pane_cp_g1

0xe441,	// (0x00037f9c) bg_popup_preview_window_pane_cp02_ParamLimits

0xe441,	// (0x00037f9c) bg_popup_preview_window_pane_cp02

0xec08,	// (0x00038763) list_fp_cale_pane_ParamLimits

0xec08,	// (0x00038763) list_fp_cale_pane

0xec14,	// (0x0003876f) popup_fixed_preview_cale_window_t1_ParamLimits

0xec14,	// (0x0003876f) popup_fixed_preview_cale_window_t1

0x4fb5,	// (0x0002eb10) popup_fixed_preview_cale_window_t2_ParamLimits

0x4fb5,	// (0x0002eb10) popup_fixed_preview_cale_window_t2

0x4fca,	// (0x0002eb25) popup_fixed_preview_cale_window_t3_ParamLimits

0x4fca,	// (0x0002eb25) popup_fixed_preview_cale_window_t3

0x0002,

0xf5dc,	// (0x00039137) popup_fixed_preview_cale_window_t_ParamLimits

0xf5dc,	// (0x00039137) popup_fixed_preview_cale_window_t

0x4fdf,	// (0x0002eb3a) list_single_fp_cale_pane_ParamLimits

0x4fdf,	// (0x0002eb3a) list_single_fp_cale_pane

0xec32,	// (0x0003878d) list_single_fp_cale_pane_g1_ParamLimits

0xec32,	// (0x0003878d) list_single_fp_cale_pane_g1

0xec3e,	// (0x00038799) list_single_fp_cale_pane_g2_ParamLimits

0xec3e,	// (0x00038799) list_single_fp_cale_pane_g2

0x0002,

0x0276,	// (0x00029dd1) list_single_fp_cale_pane_g_ParamLimits

0x0276,	// (0x00029dd1) list_single_fp_cale_pane_g

0xec57,	// (0x000387b2) list_single_fp_cale_pane_t1_ParamLimits

0xec57,	// (0x000387b2) list_single_fp_cale_pane_t1

0xec69,	// (0x000387c4) list_single_fp_cale_pane_t2_ParamLimits

0xec69,	// (0x000387c4) list_single_fp_cale_pane_t2

0x0001,

0x027d,	// (0x00029dd8) list_single_fp_cale_pane_t_ParamLimits

0x027d,	// (0x00029dd8) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb0e6,	// (0x00034c41) main_dialer_pane

0xbe24,	// (0x0003597f) aid_cell_size_keypad

0xbe24,	// (0x0003597f) dialer_ne_pane

0xbe24,	// (0x0003597f) grid_dialer_command_1_pane

0xbe24,	// (0x0003597f) grid_dialer_command_2_pane

0xbe24,	// (0x0003597f) grid_dialer_keypad_pane

0x4ff5,	// (0x0002eb50) bg_popup_call_pane_cp06_ParamLimits

0x4ff5,	// (0x0002eb50) bg_popup_call_pane_cp06

0x4ff5,	// (0x0002eb50) dialer_ne_clear_pane_ParamLimits

0x4ff5,	// (0x0002eb50) dialer_ne_clear_pane

0xc563,	// (0x000360be) dialer_ne_pane_g1

0xc581,	// (0x000360dc) dialer_ne_pane_t1_ParamLimits

0xc581,	// (0x000360dc) dialer_ne_pane_t1

0x5003,	// (0x0002eb5e) dialer_ne_pane_t2_ParamLimits

0x5003,	// (0x0002eb5e) dialer_ne_pane_t2

0x502b,	// (0x0002eb86) dialer_ne_pane_t3_ParamLimits

0x502b,	// (0x0002eb86) dialer_ne_pane_t3

0x0002,

0xf5e3,	// (0x0003913e) dialer_ne_pane_t_ParamLimits

0xf5e3,	// (0x0003913e) dialer_ne_pane_t

0x502b,	// (0x0002eb86) dialer_ne_pane_t3_copy1_ParamLimits

0x502b,	// (0x0002eb86) dialer_ne_pane_t3_copy1

0xec9c,	// (0x000387f7) cell_dialer_keypad_pane_ParamLimits

0xec9c,	// (0x000387f7) cell_dialer_keypad_pane

0xc24b,	// (0x00035da6) cell_dialer_command_1_pane_ParamLimits

0xc24b,	// (0x00035da6) cell_dialer_command_1_pane

0xecb3,	// (0x0003880e) cell_dialer_command_2_pane_ParamLimits

0xecb3,	// (0x0003880e) cell_dialer_command_2_pane

0xc24b,	// (0x00035da6) bg_button_pane_cp02_ParamLimits

0xc24b,	// (0x00035da6) bg_button_pane_cp02

0xc525,	// (0x00036080) cell_dialer_keypad_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_dialer_keypad_pane_g1

0xc24b,	// (0x00035da6) bg_button_pane_cp03_ParamLimits

0xc24b,	// (0x00035da6) bg_button_pane_cp03

0xc525,	// (0x00036080) cell_dialer_command_1_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_dialer_command_1_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp04

0xc563,	// (0x000360be) cell_dialer_command_2_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp06

0xc563,	// (0x000360be) dialer_ne_clear_pane_g1

0xd066,	// (0x00036bc1) navi_pane_g2

0xd094,	// (0x00036bef) navi_pane_g3

0x0002,

0xf30c,	// (0x00038e67) navi_pane_g

0xd123,	// (0x00036c7e) navi_pane_mv_g2

0xd14a,	// (0x00036ca5) navi_pane_mv_g5

0x3835,	// (0x0002d390) navi_pane_mv_t1

0xc5c1,	// (0x0003611c) main_clock2_pane

0xc24b,	// (0x00035da6) main_clock2_list_pane_ParamLimits

0xc24b,	// (0x00035da6) main_clock2_list_pane

0x50c1,	// (0x0002ec1c) main_clock2_pane_t1_ParamLimits

0x50c1,	// (0x0002ec1c) main_clock2_pane_t1

0x50fc,	// (0x0002ec57) main_clock2_pane_t2_ParamLimits

0x50fc,	// (0x0002ec57) main_clock2_pane_t2

0x0004,

0xf5ea,	// (0x00039145) main_clock2_pane_t_ParamLimits

0xf5ea,	// (0x00039145) main_clock2_pane_t

0x519c,	// (0x0002ecf7) popup_clock_analogue_window_cp03_ParamLimits

0x519c,	// (0x0002ecf7) popup_clock_analogue_window_cp03

0x51c1,	// (0x0002ed1c) popup_clock_digital_window_cp02_ParamLimits

0x51c1,	// (0x0002ed1c) popup_clock_digital_window_cp02

0x5205,	// (0x0002ed60) main_clock2_list_single_pane_ParamLimits

0x5205,	// (0x0002ed60) main_clock2_list_single_pane

0xc7c9,	// (0x00036324) list_highlight_pane_cp05

0xecf6,	// (0x00038851) main_clock2_list_single_pane_t1

0x2859,	// (0x0002c3b4) popup_toolbar_window_cp04_ParamLimits

0xc533,	// (0x0003608e) camera2_autofocus_pane_g2_ParamLimits

0xc533,	// (0x0003608e) camera2_autofocus_pane_g2

0xc533,	// (0x0003608e) camera2_autofocus_pane_g3_ParamLimits

0xc533,	// (0x0003608e) camera2_autofocus_pane_g3

0xc533,	// (0x0003608e) camera2_autofocus_pane_g4_ParamLimits

0xc533,	// (0x0003608e) camera2_autofocus_pane_g4

0xc533,	// (0x0003608e) camera2_autofocus_pane_g5_ParamLimits

0xc533,	// (0x0003608e) camera2_autofocus_pane_g5

0x0004,

0x01d2,	// (0x00029d2d) camera2_autofocus_pane_g_ParamLimits

0x01d2,	// (0x00029d2d) camera2_autofocus_pane_g

0x48e4,	// (0x0002e43f) camera2_autofocus_pane_cp_g2

0x48ec,	// (0x0002e447) camera2_autofocus_pane_cp_g3

0x48f4,	// (0x0002e44f) camera2_autofocus_pane_cp_g4

0x48fc,	// (0x0002e457) camera2_autofocus_pane_cp_g5

0x0004,

0xf5ac,	// (0x00039107) camera2_autofocus_pane_cp_g

0xbe24,	// (0x0003597f) popup_dialer_spcha_window

0xbe24,	// (0x0003597f) bg_popup_sub_pane_cp07

0xbe24,	// (0x0003597f) list_spcha_pane

0xed04,	// (0x0003885f) list_single_spcha_pane_ParamLimits

0xed04,	// (0x0003885f) list_single_spcha_pane

0xbe24,	// (0x0003597f) list_highlight_pane_cp06

0xccc7,	// (0x00036822) list_single_spcha_pane_t1

0xdf23,	// (0x00037a7e) popup_call2_audio_out_window_g4_ParamLimits

0xdf23,	// (0x00037a7e) popup_call2_audio_out_window_g4

0xb0e6,	// (0x00034c41) main_imed2_pane

0xb248,	// (0x00034da3) popup_imed_adjust2_window

0x102b,	// (0x0002ab86) popup_imed_trans_window_ParamLimits

0x102b,	// (0x0002ab86) popup_imed_trans_window

0xe6b4,	// (0x0003820f) popup_blid_sat_info2_window_t1

0xe6c2,	// (0x0003821d) popup_blid_sat_info2_window_t2

0x000a,

0xf51f,	// (0x0003907a) popup_blid_sat_info2_window_t

0x5217,	// (0x0002ed72) aid_size_cell_colour_35

0x5237,	// (0x0002ed92) aid_size_cell_colour_112

0x5257,	// (0x0002edb2) aid_size_cell_effect

0xd343,	// (0x00036e9e) bg_tb_trans_pane_cp02

0x5277,	// (0x0002edd2) heading_imed_pane

0x5283,	// (0x0002edde) listscroll_imed_pane

0xed16,	// (0x00038871) heading_imed_pane_g1

0xed1e,	// (0x00038879) heading_imed_pane_t1

0xed2c,	// (0x00038887) grid_imed_colour_35_pane_ParamLimits

0xed2c,	// (0x00038887) grid_imed_colour_35_pane

0x528f,	// (0x0002edea) grid_imed_effect_pane

0xed44,	// (0x0003889f) list_imed_aspect_pane

0x52a5,	// (0x0002ee00) scroll_pane_cp027_ParamLimits

0x52a5,	// (0x0002ee00) scroll_pane_cp027

0x52b6,	// (0x0002ee11) cell_imed_effect_pane_ParamLimits

0x52b6,	// (0x0002ee11) cell_imed_effect_pane

0xed4c,	// (0x000388a7) cell_imed_colour_pane_ParamLimits

0xed4c,	// (0x000388a7) cell_imed_colour_pane

0xed8e,	// (0x000388e9) cell_imed_colour_pane_g1_ParamLimits

0xed8e,	// (0x000388e9) cell_imed_colour_pane_g1

0xed9f,	// (0x000388fa) hgihlgiht_grid_pane_cp016_ParamLimits

0xed9f,	// (0x000388fa) hgihlgiht_grid_pane_cp016

0x52dd,	// (0x0002ee38) cell_imed_effect_pane_g1

0x52e5,	// (0x0002ee40) grid_highlight_pane_cp017

0xedb0,	// (0x0003890b) list_imed_single_pane_ParamLimits

0xedb0,	// (0x0003890b) list_imed_single_pane

0xbe24,	// (0x0003597f) list_highlight_pane_cp07

0xedc5,	// (0x00038920) list_imed_aspect_pane_comp1_t1

0xd343,	// (0x00036e9e) bg_tb_trans_pane_cp05

0xede7,	// (0x00038942) popup_imed_adjust2_window_g1

0xee0e,	// (0x00038969) popup_imed_adjust2_window_t1

0xee26,	// (0x00038981) slider_imed_adjust_pane

0xee3a,	// (0x00038995) slider_imed_adjust_pane_g1

0xee4a,	// (0x000389a5) slider_imed_adjust_pane_g2

0xee5a,	// (0x000389b5) slider_imed_adjust_pane_g3

0xee6b,	// (0x000389c6) slider_imed_adjust_pane_g4

0x0003,

0xf607,	// (0x00039162) slider_imed_adjust_pane_g

0x52ee,	// (0x0002ee49) aid_size_cell_clipart2

0x52fa,	// (0x0002ee55) grid_imed_clipart_pane

0xd2d4,	// (0x00036e2f) scroll_pane_cp031

0x5304,	// (0x0002ee5f) cell_imed_clipart_pane_ParamLimits

0x5304,	// (0x0002ee5f) cell_imed_clipart_pane

0x5326,	// (0x0002ee81) cell_imed_clipart_pane_g1

0xbe24,	// (0x0003597f) grid_highlight_pane_cp014

0x509d,	// (0x0002ebf8) main_clock2_pane_g1_ParamLimits

0x509d,	// (0x0002ebf8) main_clock2_pane_g1

0x51e1,	// (0x0002ed3c) aid_call2_pane_cp10

0x51f3,	// (0x0002ed4e) aid_call_pane_cp10

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g1

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g2

0x11f0,	// (0x0002ad4b) popup_clock_analogue_window_cp10_g3

0x11f0,	// (0x0002ad4b) popup_clock_analogue_window_cp10_g4

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g5

0x0004,

0xf5f5,	// (0x00039150) popup_clock_analogue_window_cp10_g

0x1206,	// (0x0002ad61) popup_clock_analogue_window_cp10_t1

0x1225,	// (0x0002ad80) clock_digital_number_pane_cp10_ParamLimits

0x1225,	// (0x0002ad80) clock_digital_number_pane_cp10

0x123d,	// (0x0002ad98) clock_digital_number_pane_cp11_ParamLimits

0x123d,	// (0x0002ad98) clock_digital_number_pane_cp11

0x1255,	// (0x0002adb0) clock_digital_number_pane_cp12_ParamLimits

0x1255,	// (0x0002adb0) clock_digital_number_pane_cp12

0x126f,	// (0x0002adca) clock_digital_number_pane_cp13_ParamLimits

0x126f,	// (0x0002adca) clock_digital_number_pane_cp13

0x1289,	// (0x0002ade4) clock_digital_separator_pane_cp10_ParamLimits

0x1289,	// (0x0002ade4) clock_digital_separator_pane_cp10

0x12a3,	// (0x0002adfe) popup_clock_digital_window_cp02_t1_ParamLimits

0x12a3,	// (0x0002adfe) popup_clock_digital_window_cp02_t1

0xc4a2,	// (0x00035ffd) clock_digital_number_pane_cp10_g1

0xc4a2,	// (0x00035ffd) clock_digital_number_pane_cp10_g2

0x0001,

0x02b4,	// (0x00029e0f) clock_digital_number_pane_cp10_g

0xc4a2,	// (0x00035ffd) clock_digital_separator_pane_cp10_g1

0xc4a2,	// (0x00035ffd) clock_digital_separator_pane_g2_cp10

0xd152,	// (0x00036cad) navi_pane_vded_g4

0xd15b,	// (0x00036cb6) navi_pane_vded_g5

0xd164,	// (0x00036cbf) navi_pane_vded_t1

0xb0e6,	// (0x00034c41) main_vded_pane

0x532f,	// (0x0002ee8a) main_vded_pane_g1

0x5339,	// (0x0002ee94) main_vded_pane_g2

0x5343,	// (0x0002ee9e) main_vded_pane_g3

0x0002,

0xf610,	// (0x0003916b) main_vded_pane_g

0x534d,	// (0x0002eea8) main_vded_pane_t1

0x535b,	// (0x0002eeb6) main_vded_pane_t2

0x0001,

0xf617,	// (0x00039172) main_vded_pane_t

0x5369,	// (0x0002eec4) vded_slider_pane

0x5371,	// (0x0002eecc) vded_video_pane

0xee7c,	// (0x000389d7) vded_video_pane_g1

0x5379,	// (0x0002eed4) vded_video_pane_g2

0xc563,	// (0x000360be) vded_video_pane_g3

0x0002,

0xf61c,	// (0x00039177) vded_video_pane_g

0xee86,	// (0x000389e1) vded_slider_pane_g1

0xe5df,	// (0x0003813a) vded_slider_pane_g2

0xee8f,	// (0x000389ea) vded_slider_pane_g3

0xee98,	// (0x000389f3) vded_slider_pane_g4

0xeea1,	// (0x000389fc) vded_slider_pane_g5

0x0004,

0xf623,	// (0x0003917e) vded_slider_pane_g

0x4f53,	// (0x0002eaae) mup3_rocker_pane_ParamLimits

0x4f53,	// (0x0002eaae) mup3_rocker_pane

0xebea,	// (0x00038745) mup3_control_keys_pane_g1

0xeeaa,	// (0x00038a05) mup3_control_keys_pane_g2

0xebea,	// (0x00038745) mup3_control_keys_pane_g3

0xeeb2,	// (0x00038a0d) mup3_control_keys_pane_g4

0x0003,

0xf62e,	// (0x00039189) mup3_control_keys_pane_g

0x0bfd,	// (0x0002a758) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bfd,	// (0x0002a758) popup_toolbar2_fixed_window_cp01

0x4f53,	// (0x0002eaae) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4f53,	// (0x0002eaae) popup_toolbar2_fixed_window_cp02

0xd8ac,	// (0x00037407) popup_call2_audio_second_window_t4_ParamLimits

0xd8ac,	// (0x00037407) popup_call2_audio_second_window_t4

0xdde8,	// (0x00037943) popup_call2_audio_first_window_t6_ParamLimits

0xdde8,	// (0x00037943) popup_call2_audio_first_window_t6

0xe026,	// (0x00037b81) popup_call2_audio_out_window_t6_ParamLimits

0xe026,	// (0x00037b81) popup_call2_audio_out_window_t6

0xb0e6,	// (0x00034c41) main_vitu_pane

0xc24b,	// (0x00035da6) aid_size_cell_itu_ParamLimits

0xc24b,	// (0x00035da6) aid_size_cell_itu

0xc24b,	// (0x00035da6) bg_popup_window_pane_cp08_ParamLimits

0xc24b,	// (0x00035da6) bg_popup_window_pane_cp08

0xc24b,	// (0x00035da6) field_vitu_entry_pane_ParamLimits

0xc24b,	// (0x00035da6) field_vitu_entry_pane

0xc24b,	// (0x00035da6) grid_vitu_function_pane_ParamLimits

0xc24b,	// (0x00035da6) grid_vitu_function_pane

0xc24b,	// (0x00035da6) grid_vitu_itu_pane_ParamLimits

0xc24b,	// (0x00035da6) grid_vitu_itu_pane

0xc24b,	// (0x00035da6) cell_vitu_itu_pane_ParamLimits

0xc24b,	// (0x00035da6) cell_vitu_itu_pane

0xc24b,	// (0x00035da6) cell_vitu_function_pane_ParamLimits

0xc24b,	// (0x00035da6) cell_vitu_function_pane

0xc24b,	// (0x00035da6) bg_popup_sub_pane_cp08_ParamLimits

0xc24b,	// (0x00035da6) bg_popup_sub_pane_cp08

0xc56d,	// (0x000360c8) field_vitu_entry_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) field_vitu_entry_pane_t1

0xeeba,	// (0x00038a15) field_vitu_entry_pane_t2_ParamLimits

0xeeba,	// (0x00038a15) field_vitu_entry_pane_t2

0x0001,

0xf637,	// (0x00039192) field_vitu_entry_pane_t_ParamLimits

0xf637,	// (0x00039192) field_vitu_entry_pane_t

0xe532,	// (0x0003808d) bg_button_pane_cp05_ParamLimits

0xe532,	// (0x0003808d) bg_button_pane_cp05

0xeed7,	// (0x00038a32) cell_vitu_itu_pane_g1

0xd32f,	// (0x00036e8a) cell_vitu_itu_pane_t1_ParamLimits

0xd32f,	// (0x00036e8a) cell_vitu_itu_pane_t1

0xd32f,	// (0x00036e8a) cell_vitu_itu_pane_t2_ParamLimits

0xd32f,	// (0x00036e8a) cell_vitu_itu_pane_t2

0x0002,

0xf63c,	// (0x00039197) cell_vitu_itu_pane_t_ParamLimits

0xf63c,	// (0x00039197) cell_vitu_itu_pane_t

0xbe24,	// (0x0003597f) bg_button_pane_cp07

0xc563,	// (0x000360be) cell_vitu_function_pane_g1

0xb0f0,	// (0x00034c4b) main_calc_pane_g1

0x0a5e,	// (0x0002a5b9) aid_visual_content_pane

0xb0e6,	// (0x00034c41) main_vradio_pane

0xc525,	// (0x00036080) main_vradio_pane_g1_ParamLimits

0xc525,	// (0x00036080) main_vradio_pane_g1

0xc533,	// (0x0003608e) main_vradio_pane_g2_ParamLimits

0xc533,	// (0x0003608e) main_vradio_pane_g2

0x0001,

0x0773,	// (0x0002a2ce) main_vradio_pane_g_ParamLimits

0x0773,	// (0x0002a2ce) main_vradio_pane_g

0xc56d,	// (0x000360c8) main_vradio_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) main_vradio_pane_t1

0xc56d,	// (0x000360c8) main_vradio_pane_t2_ParamLimits

0xc56d,	// (0x000360c8) main_vradio_pane_t2

0xc581,	// (0x000360dc) main_vradio_pane_t3_ParamLimits

0xc581,	// (0x000360dc) main_vradio_pane_t3

0x0002,

0xf643,	// (0x0003919e) main_vradio_pane_t_ParamLimits

0xf643,	// (0x0003919e) main_vradio_pane_t

0xc24b,	// (0x00035da6) vradio_rocker_control_pane_ParamLimits

0xc24b,	// (0x00035da6) vradio_rocker_control_pane

0xc24b,	// (0x00035da6) vradio_station_info_pane_ParamLimits

0xc24b,	// (0x00035da6) vradio_station_info_pane

0xc24b,	// (0x00035da6) vradio_frequency_info_pane_ParamLimits

0xc24b,	// (0x00035da6) vradio_frequency_info_pane

0xc563,	// (0x000360be) vradio_station_info_pane_g1

0xd32f,	// (0x00036e8a) vradio_station_info_pane_t1_ParamLimits

0xd32f,	// (0x00036e8a) vradio_station_info_pane_t1

0xc581,	// (0x000360dc) vradio_station_info_pane_t2_ParamLimits

0xc581,	// (0x000360dc) vradio_station_info_pane_t2

0x0001,

0xf64a,	// (0x000391a5) vradio_station_info_pane_t_ParamLimits

0xf64a,	// (0x000391a5) vradio_station_info_pane_t

0xbe24,	// (0x0003597f) vradio_tuning_pane

0x5382,	// (0x0002eedd) vradio_rocker_control_pane_g1

0xeef3,	// (0x00038a4e) vradio_rocker_control_pane_g2

0x538c,	// (0x0002eee7) vradio_rocker_control_pane_g3

0x5396,	// (0x0002eef1) vradio_rocker_control_pane_g4

0x53a0,	// (0x0002eefb) vradio_rocker_control_pane_g5

0x0004,

0xf64f,	// (0x000391aa) vradio_rocker_control_pane_g

0xc563,	// (0x000360be) vradio_frequency_info_pane_g1

0xc56d,	// (0x000360c8) vradio_frequency_info_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) vradio_frequency_info_pane_t1

0x53aa,	// (0x0002ef05) vradio_tuning_pane_g1

0x53b5,	// (0x0002ef10) vradio_tuning_pane_t1

0xb097,	// (0x00034bf2) area_side_right_pane_ParamLimits

0xb097,	// (0x00034bf2) area_side_right_pane

0xe408,	// (0x00037f63) status_small_pane_g1

0xe410,	// (0x00037f6b) status_small_pane_g2

0xe419,	// (0x00037f74) status_small_pane_g3

0xe422,	// (0x00037f7d) status_small_pane_g4

0x0003,

0x00c9,	// (0x00029c24) status_small_pane_g

0xe42b,	// (0x00037f86) status_small_pane_t1

0xb0e6,	// (0x00034c41) main_video3_pane

0xbe24,	// (0x0003597f) cams_zoom_vslider_pane

0xeefb,	// (0x00038a56) image3_wide_pane_ParamLimits

0xeefb,	// (0x00038a56) image3_wide_pane

0xbe24,	// (0x0003597f) image3_wide_small_pane

0xef15,	// (0x00038a70) main_video3_pane_g1_ParamLimits

0xef15,	// (0x00038a70) main_video3_pane_g1

0xef15,	// (0x00038a70) main_video3_pane_g2_ParamLimits

0xef15,	// (0x00038a70) main_video3_pane_g2

0x0001,

0x0303,	// (0x00029e5e) main_video3_pane_g_ParamLimits

0x0303,	// (0x00029e5e) main_video3_pane_g

0xef33,	// (0x00038a8e) main_video3_pane_t1_ParamLimits

0xef33,	// (0x00038a8e) main_video3_pane_t1

0xef33,	// (0x00038a8e) main_video3_pane_t2_ParamLimits

0xef33,	// (0x00038a8e) main_video3_pane_t2

0xef33,	// (0x00038a8e) main_video3_pane_t3_ParamLimits

0xef33,	// (0x00038a8e) main_video3_pane_t3

0x0002,

0x0308,	// (0x00029e63) main_video3_pane_t_ParamLimits

0x0308,	// (0x00029e63) main_video3_pane_t

0xc563,	// (0x000360be) cams_zoom_vslider_pane_g1

0xc563,	// (0x000360be) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00038be7) cams_zoom_vslider_pane_g

0xbe24,	// (0x0003597f) small_slider_vertical_pane

0xc563,	// (0x000360be) small_slider_vertical_pane_g1

0xc563,	// (0x000360be) small_slider_vertical_pane_g2

0xef5a,	// (0x00038ab5) small_slider_vertical_pane_g3

0x0002,

0x030f,	// (0x00029e6a) small_slider_vertical_pane_g

0xb0e6,	// (0x00034c41) main_hwr_training_pane

0xef63,	// (0x00038abe) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x00038abe) hwr_training_instruct_pane

0x53c4,	// (0x0002ef1f) hwr_training_navi_pane_ParamLimits

0x53c4,	// (0x0002ef1f) hwr_training_navi_pane

0x53e3,	// (0x0002ef3e) hwr_training_write_pane_ParamLimits

0x53e3,	// (0x0002ef3e) hwr_training_write_pane

0xbe24,	// (0x0003597f) bg_frame_shadow_pane

0xef9a,	// (0x00038af5) hwr_training_write_pane_g1

0xefa2,	// (0x00038afd) hwr_training_write_pane_g2

0xefaa,	// (0x00038b05) hwr_training_write_pane_g3

0xefb2,	// (0x00038b0d) hwr_training_write_pane_g4

0xefba,	// (0x00038b15) hwr_training_write_pane_g5

0xefc2,	// (0x00038b1d) hwr_training_write_pane_g6

0xefca,	// (0x00038b25) hwr_training_write_pane_g7

0x0006,

0x0316,	// (0x00029e71) hwr_training_write_pane_g

0xb330,	// (0x00034e8b) hwr_training_navi_pane_g1_ParamLimits

0xb330,	// (0x00034e8b) hwr_training_navi_pane_g1

0xb342,	// (0x00034e9d) hwr_training_navi_pane_g2_ParamLimits

0xb342,	// (0x00034e9d) hwr_training_navi_pane_g2

0xb354,	// (0x00034eaf) hwr_training_navi_pane_g3_ParamLimits

0xb354,	// (0x00034eaf) hwr_training_navi_pane_g3

0xb364,	// (0x00034ebf) hwr_training_navi_pane_g4_ParamLimits

0xb364,	// (0x00034ebf) hwr_training_navi_pane_g4

0x0004,

0xf65a,	// (0x000391b5) hwr_training_navi_pane_g_ParamLimits

0xf65a,	// (0x000391b5) hwr_training_navi_pane_g

0xb371,	// (0x00034ecc) hwr_training_navi_pane_t1

0x541e,	// (0x0002ef79) list_single_hwr_training_instruct_pane_ParamLimits

0x541e,	// (0x0002ef79) list_single_hwr_training_instruct_pane

0xefd2,	// (0x00038b2d) list_single_hwr_training_instruct_pane_t1

0xe7b5,	// (0x00038310) bg_frame_shadow_pane_g1

0xefe1,	// (0x00038b3c) bg_frame_shadow_pane_g2

0xefe9,	// (0x00038b44) bg_frame_shadow_pane_g3

0xeff1,	// (0x00038b4c) bg_frame_shadow_pane_g4

0xeff9,	// (0x00038b54) bg_frame_shadow_pane_g5

0xf001,	// (0x00038b5c) bg_frame_shadow_pane_g6

0xf009,	// (0x00038b64) bg_frame_shadow_pane_g7

0xc670,	// (0x000361cb) bg_frame_shadow_pane_g8

0x0007,

0xf665,	// (0x000391c0) bg_frame_shadow_pane_g

0xb0e6,	// (0x00034c41) main_video_tele_dialer_pane

0x12d3,	// (0x0002ae2e) aid_size_cell_video_keypad_ParamLimits

0x12d3,	// (0x0002ae2e) aid_size_cell_video_keypad

0x12ed,	// (0x0002ae48) grid_video_dialer_keypad_pane_ParamLimits

0x12ed,	// (0x0002ae48) grid_video_dialer_keypad_pane

0x133b,	// (0x0002ae96) video_down_pane_cp_ParamLimits

0x133b,	// (0x0002ae96) video_down_pane_cp

0x1351,	// (0x0002aeac) cell_video_dialer_keypad_pane_ParamLimits

0x1351,	// (0x0002aeac) cell_video_dialer_keypad_pane

0xf011,	// (0x00038b6c) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00038b6c) bg_button_pane_cp08

0x5450,	// (0x0002efab) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5450,	// (0x0002efab) cell_video_dialer_keypad_pane_g1

0x4f53,	// (0x0002eaae) mup3_rocker2_pane_ParamLimits

0x4f53,	// (0x0002eaae) mup3_rocker2_pane

0xc563,	// (0x000360be) mup3_rocker2_pane_g1

0x0f1a,	// (0x0002aa75) main_dialer2_pane

0xb0e6,	// (0x00034c41) main_mp4_pane

0xb39d,	// (0x00034ef8) main_mp4_pane_g1_ParamLimits

0xb39d,	// (0x00034ef8) main_mp4_pane_g1

0xb39d,	// (0x00034ef8) main_mp4_pane_g2_ParamLimits

0xb39d,	// (0x00034ef8) main_mp4_pane_g2

0x1373,	// (0x0002aece) main_mp4_pane_g3_ParamLimits

0x1373,	// (0x0002aece) main_mp4_pane_g3

0xb3bb,	// (0x00034f16) main_mp4_pane_g4_ParamLimits

0xb3bb,	// (0x00034f16) main_mp4_pane_g4

0xb3e3,	// (0x00034f3e) main_mp4_pane_g5_ParamLimits

0xb3e3,	// (0x00034f3e) main_mp4_pane_g5

0x0007,

0xf685,	// (0x000391e0) main_mp4_pane_g_ParamLimits

0xf685,	// (0x000391e0) main_mp4_pane_g

0xb44b,	// (0x00034fa6) main_mp4_pane_t1_ParamLimits

0xb44b,	// (0x00034fa6) main_mp4_pane_t1

0xb4ad,	// (0x00035008) main_mp4_pane_t2_ParamLimits

0xb4ad,	// (0x00035008) main_mp4_pane_t2

0xb511,	// (0x0003506c) main_mp4_pane_t3_ParamLimits

0xb511,	// (0x0003506c) main_mp4_pane_t3

0xb56f,	// (0x000350ca) main_mp4_pane_t4_ParamLimits

0xb56f,	// (0x000350ca) main_mp4_pane_t4

0x0003,

0xf696,	// (0x000391f1) main_mp4_pane_t_ParamLimits

0xf696,	// (0x000391f1) main_mp4_pane_t

0xb5cd,	// (0x00035128) mp4_progress_pane_ParamLimits

0xb5cd,	// (0x00035128) mp4_progress_pane

0xb601,	// (0x0003515c) mp4_rocker_pane_ParamLimits

0xb601,	// (0x0003515c) mp4_rocker_pane

0x5492,	// (0x0002efed) mp4_progress_pane_t1

0x54b1,	// (0x0002f00c) mp4_progress_pane_t2

0x0001,

0xf69f,	// (0x000391fa) mp4_progress_pane_t

0x54d0,	// (0x0002f02b) mup_progress_pane_cp04

0x46ee,	// (0x0002e249) mp4_rocker_pane_g1

0xb0d8,	// (0x00034c33) aid_cell_size_keypad2_ParamLimits

0xb0d8,	// (0x00034c33) aid_cell_size_keypad2

0xb0d8,	// (0x00034c33) dialer2_ne_pane_ParamLimits

0xb0d8,	// (0x00034c33) dialer2_ne_pane

0xb0d8,	// (0x00034c33) grid_dialer2_keypad_pane_ParamLimits

0xb0d8,	// (0x00034c33) grid_dialer2_keypad_pane

0xe532,	// (0x0003808d) bg_popup_call_pane_cp07_ParamLimits

0xe532,	// (0x0003808d) bg_popup_call_pane_cp07

0x54e3,	// (0x0002f03e) dialer2_ne_pane_t1_ParamLimits

0x54e3,	// (0x0002f03e) dialer2_ne_pane_t1

0x13a3,	// (0x0002aefe) cell_dialer2_keypad_pane_ParamLimits

0x13a3,	// (0x0002aefe) cell_dialer2_keypad_pane

0xe532,	// (0x0003808d) bg_button_pane_pane_cp04_ParamLimits

0xe532,	// (0x0003808d) bg_button_pane_pane_cp04

0xc525,	// (0x00036080) cell_dialer2_keypad_pane_g1_ParamLimits

0xc525,	// (0x00036080) cell_dialer2_keypad_pane_g1

0x272d,	// (0x0002c288) aid_placing_vt_set_content_ParamLimits

0x272d,	// (0x0002c288) aid_placing_vt_set_content

0x2755,	// (0x0002c2b0) aid_placing_vt_set_title_ParamLimits

0x2755,	// (0x0002c2b0) aid_placing_vt_set_title

0xb0e6,	// (0x00034c41) main_image3_pane

0x1418,	// (0x0002af73) area_side_right_pane_cp01_ParamLimits

0x1418,	// (0x0002af73) area_side_right_pane_cp01

0x142f,	// (0x0002af8a) main_image3_pane_g1_ParamLimits

0x142f,	// (0x0002af8a) main_image3_pane_g1

0x143d,	// (0x0002af98) main_image3_pane_g2_ParamLimits

0x143d,	// (0x0002af98) main_image3_pane_g2

0x1465,	// (0x0002afc0) main_image3_pane_g3_ParamLimits

0x1465,	// (0x0002afc0) main_image3_pane_g3

0x148f,	// (0x0002afea) main_image3_pane_g4_ParamLimits

0x148f,	// (0x0002afea) main_image3_pane_g4

0x0003,

0xf6ae,	// (0x00039209) main_image3_pane_g_ParamLimits

0xf6ae,	// (0x00039209) main_image3_pane_g

0x14b9,	// (0x0002b014) main_image3_pane_t1_ParamLimits

0x14b9,	// (0x0002b014) main_image3_pane_t1

0x1511,	// (0x0002b06c) main_image3_pane_t2_ParamLimits

0x1511,	// (0x0002b06c) main_image3_pane_t2

0x1563,	// (0x0002b0be) main_image3_pane_t3_ParamLimits

0x1563,	// (0x0002b0be) main_image3_pane_t3

0x0003,

0xf6b7,	// (0x00039212) main_image3_pane_t_ParamLimits

0xf6b7,	// (0x00039212) main_image3_pane_t

0xc24b,	// (0x00035da6) grid_sctrl_middle_pane_cp01_ParamLimits

0xc24b,	// (0x00035da6) grid_sctrl_middle_pane_cp01

0x5550,	// (0x0002f0ab) cell_sctrl_middle_pane_cp01_ParamLimits

0x5550,	// (0x0002f0ab) cell_sctrl_middle_pane_cp01

0x556d,	// (0x0002f0c8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x556d,	// (0x0002f0c8) cell_sctrl_middle_pane_cp01_g1

0xb0e6,	// (0x00034c41) main_call4_pane

0x15eb,	// (0x0002b146) aid_size_button_call4_ParamLimits

0x15eb,	// (0x0002b146) aid_size_button_call4

0x161e,	// (0x0002b179) call4_windows_pane_ParamLimits

0x161e,	// (0x0002b179) call4_windows_pane

0x163d,	// (0x0002b198) grid_call4_button_pane_ParamLimits

0x163d,	// (0x0002b198) grid_call4_button_pane

0x1670,	// (0x0002b1cb) call4_windows_conf_pane

0x1685,	// (0x0002b1e0) popup_call4_audio_first_window_ParamLimits

0x1685,	// (0x0002b1e0) popup_call4_audio_first_window

0x16d5,	// (0x0002b230) popup_call4_audio_second_window_ParamLimits

0x16d5,	// (0x0002b230) popup_call4_audio_second_window

0x16ec,	// (0x0002b247) popup_call4_audio_wait_window_ParamLimits

0x16ec,	// (0x0002b247) popup_call4_audio_wait_window

0x16fa,	// (0x0002b255) cell_call4_button_pane_ParamLimits

0x16fa,	// (0x0002b255) cell_call4_button_pane

0x5583,	// (0x0002f0de) bg_button_pane_cp09_ParamLimits

0x5583,	// (0x0002f0de) bg_button_pane_cp09

0x171f,	// (0x0002b27a) cell_call4_button_pane_g1_ParamLimits

0x171f,	// (0x0002b27a) cell_call4_button_pane_g1

0x1745,	// (0x0002b2a0) cell_call4_button_pane_t1_ParamLimits

0x1745,	// (0x0002b2a0) cell_call4_button_pane_t1

0x5597,	// (0x0002f0f2) popup_call4_audio_conf_window_ParamLimits

0x5597,	// (0x0002f0f2) popup_call4_audio_conf_window

0x4f77,	// (0x0002ead2) mup3_progress_pane_t1_ParamLimits

0x4f96,	// (0x0002eaf1) mup3_progress_pane_t2_ParamLimits

0xebb5,	// (0x00038710) mup3_progress_pane_t3_ParamLimits

0xf5d5,	// (0x00039130) mup3_progress_pane_t_ParamLimits

0xebd2,	// (0x0003872d) mup_progress_pane_cp03_ParamLimits

0xebea,	// (0x00038745) mup3_control_keys_pane_g4_copy1

0xb601,	// (0x0003515c) mp4_rocker2_pane_ParamLimits

0xb601,	// (0x0003515c) mp4_rocker2_pane

0xeeaa,	// (0x00038a05) mp4_rocker2_pane_g1

0xeeaa,	// (0x00038a05) mp4_rocker2_pane_g2

0xeeaa,	// (0x00038a05) mp4_rocker2_pane_g3

0xeeaa,	// (0x00038a05) mp4_rocker2_pane_g4

0xeeaa,	// (0x00038a05) mp4_rocker2_pane_g5

0x0004,

0xf6c0,	// (0x0003921b) mp4_rocker2_pane_g

0xb0e6,	// (0x00034c41) main_camera4_pane

0xb0e6,	// (0x00034c41) main_video4_pane

0x1309,	// (0x0002ae64) main_video_tele_dialer_pane_t1_ParamLimits

0x1309,	// (0x0002ae64) main_video_tele_dialer_pane_t1

0x1322,	// (0x0002ae7d) main_video_tele_dialer_pane_t2_ParamLimits

0x1322,	// (0x0002ae7d) main_video_tele_dialer_pane_t2

0x0001,

0xf676,	// (0x000391d1) main_video_tele_dialer_pane_t_ParamLimits

0xf676,	// (0x000391d1) main_video_tele_dialer_pane_t

0x1787,	// (0x0002b2e2) cam4_autofocus_pane_ParamLimits

0x1787,	// (0x0002b2e2) cam4_autofocus_pane

0x179d,	// (0x0002b2f8) cam4_image_uncrop_pane_ParamLimits

0x179d,	// (0x0002b2f8) cam4_image_uncrop_pane

0x17b7,	// (0x0002b312) cam4_indicators_pane_ParamLimits

0x17b7,	// (0x0002b312) cam4_indicators_pane

0x17e2,	// (0x0002b33d) main_camera4_pane_g1_ParamLimits

0x17e2,	// (0x0002b33d) main_camera4_pane_g1

0x17f4,	// (0x0002b34f) main_camera4_pane_g2_ParamLimits

0x17f4,	// (0x0002b34f) main_camera4_pane_g2

0x1807,	// (0x0002b362) main_camera4_pane_g3_ParamLimits

0x1807,	// (0x0002b362) main_camera4_pane_g3

0x181a,	// (0x0002b375) main_camera4_pane_g4_ParamLimits

0x181a,	// (0x0002b375) main_camera4_pane_g4

0x182d,	// (0x0002b388) main_camera4_pane_g5_ParamLimits

0x182d,	// (0x0002b388) main_camera4_pane_g5

0x0005,

0xf6cb,	// (0x00039226) main_camera4_pane_g_ParamLimits

0xf6cb,	// (0x00039226) main_camera4_pane_g

0x1851,	// (0x0002b3ac) main_camera4_pane_t1_ParamLimits

0x1851,	// (0x0002b3ac) main_camera4_pane_t1

0x55d1,	// (0x0002f12c) bg_tb_trans_pane_cp06

0xb69d,	// (0x000351f8) cam4_indicators_pane_g1

0xb6ae,	// (0x00035209) cam4_indicators_pane_g2

0x0002,

0xf6e6,	// (0x00039241) cam4_indicators_pane_g

0xb6c6,	// (0x00035221) cam4_indicators_pane_t1

0x18a1,	// (0x0002b3fc) main_video4_pane_g1_ParamLimits

0x18a1,	// (0x0002b3fc) main_video4_pane_g1

0x18b0,	// (0x0002b40b) main_video4_pane_g2_ParamLimits

0x18b0,	// (0x0002b40b) main_video4_pane_g2

0x18bf,	// (0x0002b41a) main_video4_pane_g3_ParamLimits

0x18bf,	// (0x0002b41a) main_video4_pane_g3

0x18ce,	// (0x0002b429) main_video4_pane_g4_ParamLimits

0x18ce,	// (0x0002b429) main_video4_pane_g4

0x0004,

0xf6ed,	// (0x00039248) main_video4_pane_g_ParamLimits

0xf6ed,	// (0x00039248) main_video4_pane_g

0x18ec,	// (0x0002b447) vid4_indicators_pane_ParamLimits

0x18ec,	// (0x0002b447) vid4_indicators_pane

0x191a,	// (0x0002b475) video4_image_uncrop_cif_pane_ParamLimits

0x191a,	// (0x0002b475) video4_image_uncrop_cif_pane

0x1934,	// (0x0002b48f) video4_image_uncrop_nhd_pane_ParamLimits

0x1934,	// (0x0002b48f) video4_image_uncrop_nhd_pane

0x179d,	// (0x0002b2f8) video4_image_uncrop_vga_pane_ParamLimits

0x179d,	// (0x0002b2f8) video4_image_uncrop_vga_pane

0xb0d8,	// (0x00034c33) bg_tb_trans_pane_cp07

0xb6f0,	// (0x0003524b) vid4_indicators_pane_g1

0xb704,	// (0x0003525f) vid4_indicators_pane_g2

0xb718,	// (0x00035273) vid4_indicators_pane_g3

0x0004,

0xf6f8,	// (0x00039253) vid4_indicators_pane_g

0xb745,	// (0x000352a0) vid4_indicators_pane_t1

0x55df,	// (0x0002f13a) cam4_autofocus_pane_g1

0x55e7,	// (0x0002f142) cam4_autofocus_pane_g2

0x55ef,	// (0x0002f14a) cam4_autofocus_pane_g3

0x0002,

0xf703,	// (0x0003925e) cam4_autofocus_pane_g

0x55f7,	// (0x0002f152) cam4_autofocus_pane_g3_copy1

0x5434,	// (0x0002ef8f) video_down_pane_cp_t1

0x5442,	// (0x0002ef9d) video_down_pane_cp_t2

0x0001,

0xf67b,	// (0x000391d6) video_down_pane_cp_t

0xb0d8,	// (0x00034c33) popup_vitu2_window_ParamLimits

0xb0d8,	// (0x00034c33) popup_vitu2_window

0x1948,	// (0x0002b4a3) aid_size_cell2_itu2_ParamLimits

0x1948,	// (0x0002b4a3) aid_size_cell2_itu2

0x196e,	// (0x0002b4c9) aid_size_cell_itu2_ParamLimits

0x196e,	// (0x0002b4c9) aid_size_cell_itu2

0x19ca,	// (0x0002b525) bg_popup_window_pane_cp09_ParamLimits

0x19ca,	// (0x0002b525) bg_popup_window_pane_cp09

0x19d8,	// (0x0002b533) field_vitu2_entry_pane_ParamLimits

0x19d8,	// (0x0002b533) field_vitu2_entry_pane

0x19fe,	// (0x0002b559) grid_vitu2_function_pane_ParamLimits

0x19fe,	// (0x0002b559) grid_vitu2_function_pane

0x1a4b,	// (0x0002b5a6) grid_vitu2_itu_pane_ParamLimits

0x1a4b,	// (0x0002b5a6) grid_vitu2_itu_pane

0x1add,	// (0x0002b638) cell_vitu2_itu_pane_ParamLimits

0x1add,	// (0x0002b638) cell_vitu2_itu_pane

0x1b09,	// (0x0002b664) cell_vitu2_function_pane_ParamLimits

0x1b09,	// (0x0002b664) cell_vitu2_function_pane

0x55ff,	// (0x0002f15a) bg_popup_call_pane_cp08_ParamLimits

0x55ff,	// (0x0002f15a) bg_popup_call_pane_cp08

0x5616,	// (0x0002f171) field_vitu2_entry_pane_g1

0x5622,	// (0x0002f17d) field_vitu2_entry_pane_g2

0x0002,

0xf70a,	// (0x00039265) field_vitu2_entry_pane_g

0x562e,	// (0x0002f189) field_vitu2_entry_pane_t1_ParamLimits

0x562e,	// (0x0002f189) field_vitu2_entry_pane_t1

0x565e,	// (0x0002f1b9) field_vitu2_entry_pane_t2_ParamLimits

0x565e,	// (0x0002f1b9) field_vitu2_entry_pane_t2

0x0001,

0xf711,	// (0x0003926c) field_vitu2_entry_pane_t_ParamLimits

0xf711,	// (0x0003926c) field_vitu2_entry_pane_t

0x1b48,	// (0x0002b6a3) bg_button_pane_cp010_ParamLimits

0x1b48,	// (0x0002b6a3) bg_button_pane_cp010

0x1b56,	// (0x0002b6b1) cell_vitu2_itu_pane_g1

0x1b7c,	// (0x0002b6d7) cell_vitu2_itu_pane_t1_ParamLimits

0x1b7c,	// (0x0002b6d7) cell_vitu2_itu_pane_t1

0x1bda,	// (0x0002b735) cell_vitu2_itu_pane_t2_ParamLimits

0x1bda,	// (0x0002b735) cell_vitu2_itu_pane_t2

0x0002,

0xf71b,	// (0x00039276) cell_vitu2_itu_pane_t_ParamLimits

0xf71b,	// (0x00039276) cell_vitu2_itu_pane_t

0xb0d8,	// (0x00034c33) bg_button_pane_cp011

0x1cc6,	// (0x0002b821) cell_vitu2_function_pane_g1

0xb0e6,	// (0x00034c41) main_myfav_hc_pane

0x15b3,	// (0x0002b10e) popup_image3_note_pane_ParamLimits

0x15b3,	// (0x0002b10e) popup_image3_note_pane

0x15cf,	// (0x0002b12a) popup_image3_tool_bar_pane_ParamLimits

0x15cf,	// (0x0002b12a) popup_image3_tool_bar_pane

0x1c68,	// (0x0002b7c3) cell_vitu2_itu_pane_t3_ParamLimits

0x1c68,	// (0x0002b7c3) cell_vitu2_itu_pane_t3

0xbe24,	// (0x0003597f) bg_popup_trans_pane

0x5683,	// (0x0002f1de) grid_image3_tool_bar_pane

0x568d,	// (0x0002f1e8) bg_popup_trans_pane_g1

0xc9e2,	// (0x0003653d) bg_popup_trans_pane_g2

0x5695,	// (0x0002f1f0) bg_popup_trans_pane_g3

0x569d,	// (0x0002f1f8) bg_popup_trans_pane_g4

0x56a5,	// (0x0002f200) bg_popup_trans_pane_g5

0x56ad,	// (0x0002f208) bg_popup_trans_pane_g6

0x56b5,	// (0x0002f210) bg_popup_trans_pane_g7

0x56bd,	// (0x0002f218) bg_popup_trans_pane_g8

0xc9c2,	// (0x0003651d) bg_popup_trans_pane_g9

0x0008,

0xf722,	// (0x0003927d) bg_popup_trans_pane_g

0x56c5,	// (0x0002f220) cell_image3_tool_bar_pane_ParamLimits

0x56c5,	// (0x0002f220) cell_image3_tool_bar_pane

0xc563,	// (0x000360be) cell_image3_tool_bar_pane_g1

0xbe24,	// (0x0003597f) bg_popup_trans_pane_cp1

0x56d9,	// (0x0002f234) popup_image3_note_pane_t1

0x56e7,	// (0x0002f242) popup_image3_note_pane_t2

0x56f5,	// (0x0002f250) popup_image3_note_pane_t3

0x0002,

0xf735,	// (0x00039290) popup_image3_note_pane_t

0x5703,	// (0x0002f25e) popup_image3_note_pane_t3_copy1

0x5711,	// (0x0002f26c) bg_myfav_hc_instruction_pane_ParamLimits

0x5711,	// (0x0002f26c) bg_myfav_hc_instruction_pane

0x5725,	// (0x0002f280) cell_myfav_contact_pane_ParamLimits

0x5725,	// (0x0002f280) cell_myfav_contact_pane

0x5743,	// (0x0002f29e) cell_myfav_contact_pane_cp1_ParamLimits

0x5743,	// (0x0002f29e) cell_myfav_contact_pane_cp1

0x575b,	// (0x0002f2b6) cell_myfav_contact_pane_cp2_ParamLimits

0x575b,	// (0x0002f2b6) cell_myfav_contact_pane_cp2

0x5773,	// (0x0002f2ce) cell_myfav_contact_pane_cp3_ParamLimits

0x5773,	// (0x0002f2ce) cell_myfav_contact_pane_cp3

0x578a,	// (0x0002f2e5) cell_myfav_contact_pane_cp4_ParamLimits

0x578a,	// (0x0002f2e5) cell_myfav_contact_pane_cp4

0x57a2,	// (0x0002f2fd) cell_myfav_contact_pane_cp5_ParamLimits

0x57a2,	// (0x0002f2fd) cell_myfav_contact_pane_cp5

0x57b6,	// (0x0002f311) cell_myfav_contact_pane_cp6_ParamLimits

0x57b6,	// (0x0002f311) cell_myfav_contact_pane_cp6

0x57cc,	// (0x0002f327) cell_myfav_contact_pane_cp7_ParamLimits

0x57cc,	// (0x0002f327) cell_myfav_contact_pane_cp7

0x57e6,	// (0x0002f341) listscroll_gen_pane_cp05

0x57ef,	// (0x0002f34a) main_myfav_hc_pane_g1_ParamLimits

0x57ef,	// (0x0002f34a) main_myfav_hc_pane_g1

0x5809,	// (0x0002f364) main_myfav_hc_pane_g2_ParamLimits

0x5809,	// (0x0002f364) main_myfav_hc_pane_g2

0x0002,

0xf73c,	// (0x00039297) main_myfav_hc_pane_g_ParamLimits

0xf73c,	// (0x00039297) main_myfav_hc_pane_g

0x583b,	// (0x0002f396) main_myfav_hc_pane_t1_ParamLimits

0x583b,	// (0x0002f396) main_myfav_hc_pane_t1

0x5852,	// (0x0002f3ad) main_myfav_hc_pane_t2_ParamLimits

0x5852,	// (0x0002f3ad) main_myfav_hc_pane_t2

0x5864,	// (0x0002f3bf) main_myfav_hc_pane_t3_ParamLimits

0x5864,	// (0x0002f3bf) main_myfav_hc_pane_t3

0x5876,	// (0x0002f3d1) main_myfav_hc_pane_t4_ParamLimits

0x5876,	// (0x0002f3d1) main_myfav_hc_pane_t4

0x0004,

0xf743,	// (0x0003929e) main_myfav_hc_pane_t_ParamLimits

0xf743,	// (0x0003929e) main_myfav_hc_pane_t

0xc563,	// (0x000360be) bg_myfav_hc_instruction_pane_g1

0x589e,	// (0x0002f3f9) cell_myfav_contact_pane_g1_ParamLimits

0x589e,	// (0x0002f3f9) cell_myfav_contact_pane_g1

0x589e,	// (0x0002f3f9) cell_myfav_contact_pane_g2_ParamLimits

0x589e,	// (0x0002f3f9) cell_myfav_contact_pane_g2

0x58aa,	// (0x0002f405) cell_myfav_contact_pane_g3_ParamLimits

0x58aa,	// (0x0002f405) cell_myfav_contact_pane_g3

0xc533,	// (0x0003608e) cell_myfav_contact_pane_g4_ParamLimits

0xc533,	// (0x0003608e) cell_myfav_contact_pane_g4

0x58b7,	// (0x0002f412) cell_myfav_contact_pane_g5_ParamLimits

0x58b7,	// (0x0002f412) cell_myfav_contact_pane_g5

0x0004,

0xf74e,	// (0x000392a9) cell_myfav_contact_pane_g_ParamLimits

0xf74e,	// (0x000392a9) cell_myfav_contact_pane_g

0x5823,	// (0x0002f37e) main_myfav_hc_pane_g3_ParamLimits

0x5823,	// (0x0002f37e) main_myfav_hc_pane_g3

0x0b60,	// (0x0002a6bb) popup_adpt_find_window

0x58c3,	// (0x0002f41e) afind_page_pane_ParamLimits

0x58c3,	// (0x0002f41e) afind_page_pane

0x58d9,	// (0x0002f434) aid_size_cell_afind_ParamLimits

0x58d9,	// (0x0002f434) aid_size_cell_afind

0x58f7,	// (0x0002f452) bg_popup_sub_pane_cp09_ParamLimits

0x58f7,	// (0x0002f452) bg_popup_sub_pane_cp09

0x5909,	// (0x0002f464) find_pane_cp01_ParamLimits

0x5909,	// (0x0002f464) find_pane_cp01

0x591d,	// (0x0002f478) grid_afind_control_pane_ParamLimits

0x591d,	// (0x0002f478) grid_afind_control_pane

0x5931,	// (0x0002f48c) grid_afind_pane_ParamLimits

0x5931,	// (0x0002f48c) grid_afind_pane

0x5953,	// (0x0002f4ae) cell_afind_pane_ParamLimits

0x5953,	// (0x0002f4ae) cell_afind_pane

0xc563,	// (0x000360be) afind_page_pane_g1

0x59ba,	// (0x0002f515) afind_page_pane_g2

0x59c2,	// (0x0002f51d) afind_page_pane_g3

0x0002,

0xf759,	// (0x000392b4) afind_page_pane_g

0x59ca,	// (0x0002f525) afind_page_pane_t1

0x59ea,	// (0x0002f545) cell_afind_grid_control_pane_ParamLimits

0x59ea,	// (0x0002f545) cell_afind_grid_control_pane

0x59f9,	// (0x0002f554) bg_button_pane_cp69_ParamLimits

0x59f9,	// (0x0002f554) bg_button_pane_cp69

0x5a05,	// (0x0002f560) cell_afind_pane_g1_ParamLimits

0x5a05,	// (0x0002f560) cell_afind_pane_g1

0x5a12,	// (0x0002f56d) cell_afind_pane_t1_ParamLimits

0x5a12,	// (0x0002f56d) cell_afind_pane_t1

0x5a24,	// (0x0002f57f) bg_button_pane_cp72

0x5a2c,	// (0x0002f587) cell_afind_grid_control_pane_g1

0x3f4e,	// (0x0002daa9) aid_image_placing_area_ParamLimits

0x3f4e,	// (0x0002daa9) aid_image_placing_area

0xc525,	// (0x00036080) field_vitu_entry_pane_g1_ParamLimits

0xc525,	// (0x00036080) field_vitu_entry_pane_g1

0xc525,	// (0x00036080) field_vitu_entry_pane_g2_ParamLimits

0xc525,	// (0x00036080) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00038cf4) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00038cf4) field_vitu_entry_pane_g

0xeed7,	// (0x00038a32) cell_vitu_itu_pane_g1_ParamLimits

0xeeba,	// (0x00038a15) cell_vitu_itu_pane_t3_ParamLimits

0xeeba,	// (0x00038a15) cell_vitu_itu_pane_t3

0x5492,	// (0x0002efed) mp4_progress_pane_t1_ParamLimits

0x54b1,	// (0x0002f00c) mp4_progress_pane_t2_ParamLimits

0xf69f,	// (0x000391fa) mp4_progress_pane_t_ParamLimits

0x54d0,	// (0x0002f02b) mup_progress_pane_cp04_ParamLimits

0x588a,	// (0x0002f3e5) main_myfav_hc_pane_t5_ParamLimits

0x588a,	// (0x0002f3e5) main_myfav_hc_pane_t5

0xb08f,	// (0x00034bea) aid_zoom_text_primary

0x0b60,	// (0x0002a6bb) popup_adpt_find_window_ParamLimits

0xb0d8,	// (0x00034c33) main_cam_set_pane

0x17ce,	// (0x0002b329) cam4_zoom_pane_ParamLimits

0x17ce,	// (0x0002b329) cam4_zoom_pane

0x5a35,	// (0x0002f590) main_cam_set_pane_g1_ParamLimits

0x5a35,	// (0x0002f590) main_cam_set_pane_g1

0x5a43,	// (0x0002f59e) main_cam_set_pane_g2_ParamLimits

0x5a43,	// (0x0002f59e) main_cam_set_pane_g2

0x0001,

0xf760,	// (0x000392bb) main_cam_set_pane_g_ParamLimits

0xf760,	// (0x000392bb) main_cam_set_pane_g

0x5a64,	// (0x0002f5bf) main_cam_set_pane_t1_ParamLimits

0x5a64,	// (0x0002f5bf) main_cam_set_pane_t1

0x5a7f,	// (0x0002f5da) main_cset_listscroll_pane_ParamLimits

0x5a7f,	// (0x0002f5da) main_cset_listscroll_pane

0x5aa5,	// (0x0002f600) main_cset_slider_pane_ParamLimits

0x5aa5,	// (0x0002f600) main_cset_slider_pane

0x5ad3,	// (0x0002f62e) main_cset_list_pane_ParamLimits

0x5ad3,	// (0x0002f62e) main_cset_list_pane

0x5ae3,	// (0x0002f63e) scroll_pane_cp028

0x5aec,	// (0x0002f647) aid_area_touch_slider

0x5b08,	// (0x0002f663) cset_slider_pane

0x5b2b,	// (0x0002f686) main_cset_slider_pane_g1

0x5b40,	// (0x0002f69b) main_cset_slider_pane_g2

0x0011,

0xf765,	// (0x000392c0) main_cset_slider_pane_g

0x5c2c,	// (0x0002f787) main_cset_slider_pane_t1

0x5c54,	// (0x0002f7af) main_cset_slider_pane_t2

0x5c6e,	// (0x0002f7c9) main_cset_slider_pane_t3

0x5c88,	// (0x0002f7e3) main_cset_slider_pane_t4

0x5ca2,	// (0x0002f7fd) main_cset_slider_pane_t5

0x5cbc,	// (0x0002f817) main_cset_slider_pane_t6

0x5cd1,	// (0x0002f82c) main_cset_slider_pane_t7

0x000e,

0xf78a,	// (0x000392e5) main_cset_slider_pane_t

0x5e47,	// (0x0002f9a2) cset_list_set_pane_ParamLimits

0x5e47,	// (0x0002f9a2) cset_list_set_pane

0x5e59,	// (0x0002f9b4) aid_position_infowindow_above

0x5e61,	// (0x0002f9bc) aid_position_infowindow_below

0x5e69,	// (0x0002f9c4) cset_list_set_pane_g1_ParamLimits

0x5e69,	// (0x0002f9c4) cset_list_set_pane_g1

0x5e75,	// (0x0002f9d0) cset_list_set_pane_g3_ParamLimits

0x5e75,	// (0x0002f9d0) cset_list_set_pane_g3

0x0001,

0xf7a9,	// (0x00039304) cset_list_set_pane_g_ParamLimits

0xf7a9,	// (0x00039304) cset_list_set_pane_g

0x5e84,	// (0x0002f9df) cset_list_set_pane_t1_ParamLimits

0x5e84,	// (0x0002f9df) cset_list_set_pane_t1

0xc24b,	// (0x00035da6) list_highlight_pane_cp021_ParamLimits

0xc24b,	// (0x00035da6) list_highlight_pane_cp021

0xd2b1,	// (0x00036e0c) cset_slider_pane_g1

0xd2c3,	// (0x00036e1e) cset_slider_pane_g2

0xd2ba,	// (0x00036e15) cset_slider_pane_g3

0x0002,

0x0479,	// (0x00029fd4) cset_slider_pane_g

0xb75c,	// (0x000352b7) aid_area_touch_cam4_zoom

0xb764,	// (0x000352bf) cam4_zoom_cont_pane

0xb76c,	// (0x000352c7) cam4_zoom_pane_g1

0xb774,	// (0x000352cf) cam4_zoom_pane_g2

0x1cd9,	// (0x0002b834) cam4_zoom_pane_g3

0x0002,

0xf7ae,	// (0x00039309) cam4_zoom_pane_g

0xb77c,	// (0x000352d7) cam4_zoom_cont_pane_g1

0xb785,	// (0x000352e0) cam4_zoom_cont_pane_g2

0xb78e,	// (0x000352e9) cam4_zoom_cont_pane_g3

0x0002,

0xf7b5,	// (0x00039310) cam4_zoom_cont_pane_g

0x1609,	// (0x0002b164) call4_image_pane_ParamLimits

0x1609,	// (0x0002b164) call4_image_pane

0x1670,	// (0x0002b1cb) call4_windows_conf_pane_ParamLimits

0x16b3,	// (0x0002b20e) popup_call4_audio_in_window_ParamLimits

0x16b3,	// (0x0002b20e) popup_call4_audio_in_window

0xbe24,	// (0x0003597f) bg_popup_call2_act_pane_cp02

0x558f,	// (0x0002f0ea) call4_list_conf_pane

0xc563,	// (0x000360be) call4_image_pane_g1

0xc563,	// (0x000360be) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00038be7) call4_image_pane_g

0x5e99,	// (0x0002f9f4) list_single_graphic_popup_conf4_pane_ParamLimits

0x5e99,	// (0x0002f9f4) list_single_graphic_popup_conf4_pane

0xbe24,	// (0x0003597f) list_highlight_pane_cp022

0x5eac,	// (0x0002fa07) list_single_graphic_popup_conf4_pane_g1

0xcec2,	// (0x00036a1d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7bc,	// (0x00039317) list_single_graphic_popup_conf4_pane_g

0x5eb4,	// (0x0002fa0f) list_single_graphic_popup_conf4_pane_t1

0x2879,	// (0x0002c3d4) popup_vtel_slider_window_ParamLimits

0x2879,	// (0x0002c3d4) popup_vtel_slider_window

0x5522,	// (0x0002f07d) dialer2_ne_pane_t2_ParamLimits

0x5522,	// (0x0002f07d) dialer2_ne_pane_t2

0x0001,

0xf6a4,	// (0x000391ff) dialer2_ne_pane_t_ParamLimits

0xf6a4,	// (0x000391ff) dialer2_ne_pane_t

0xe532,	// (0x0003808d) bg_popup_sub_pane_cp010_ParamLimits

0xe532,	// (0x0003808d) bg_popup_sub_pane_cp010

0x5eca,	// (0x0002fa25) popup_vtel_slider_window_g1_ParamLimits

0x5eca,	// (0x0002fa25) popup_vtel_slider_window_g1

0x5edd,	// (0x0002fa38) popup_vtel_slider_window_g2_ParamLimits

0x5edd,	// (0x0002fa38) popup_vtel_slider_window_g2

0x0003,

0xf7c1,	// (0x0003931c) popup_vtel_slider_window_g_ParamLimits

0xf7c1,	// (0x0003931c) popup_vtel_slider_window_g

0x5f33,	// (0x0002fa8e) vtel_slider_pane_ParamLimits

0x5f33,	// (0x0002fa8e) vtel_slider_pane

0x5f55,	// (0x0002fab0) vtel_slider_pane_g1_ParamLimits

0x5f55,	// (0x0002fab0) vtel_slider_pane_g1

0x5f69,	// (0x0002fac4) vtel_slider_pane_g2_ParamLimits

0x5f69,	// (0x0002fac4) vtel_slider_pane_g2

0x5f81,	// (0x0002fadc) vtel_slider_pane_g3_ParamLimits

0x5f81,	// (0x0002fadc) vtel_slider_pane_g3

0x5f55,	// (0x0002fab0) vtel_slider_pane_g4_ParamLimits

0x5f55,	// (0x0002fab0) vtel_slider_pane_g4

0x5f97,	// (0x0002faf2) vtel_slider_pane_g5_ParamLimits

0x5f97,	// (0x0002faf2) vtel_slider_pane_g5

0x0004,

0xf7ca,	// (0x00039325) vtel_slider_pane_g_ParamLimits

0xf7ca,	// (0x00039325) vtel_slider_pane_g

0xb0d8,	// (0x00034c33) main_gallery2_pane

0x199a,	// (0x0002b4f5) aid_size_row_itut2_dropdow_list_ParamLimits

0x199a,	// (0x0002b4f5) aid_size_row_itut2_dropdow_list

0x1a22,	// (0x0002b57d) grid_vitu2_function_top_pane_ParamLimits

0x1a22,	// (0x0002b57d) grid_vitu2_function_top_pane

0x1a86,	// (0x0002b5e1) popup_vitu2_dropdown_list_window_ParamLimits

0x1a86,	// (0x0002b5e1) popup_vitu2_dropdown_list_window

0x1ab1,	// (0x0002b60c) popup_vitu2_match_list_window

0x1ce1,	// (0x0002b83c) cell_vitu2_function_top_pane_ParamLimits

0x1ce1,	// (0x0002b83c) cell_vitu2_function_top_pane

0x1cf9,	// (0x0002b854) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1cf9,	// (0x0002b854) cell_vitu2_function_top_pane_cp01

0x1d15,	// (0x0002b870) cell_vitu2_function_top_wide_pane_ParamLimits

0x1d15,	// (0x0002b870) cell_vitu2_function_top_wide_pane

0xb0d8,	// (0x00034c33) bg_button_pane_cp012

0x1d33,	// (0x0002b88e) cell_vitu2_function_top_pane_g1

0xb797,	// (0x000352f2) bg_button_pane_cp013_ParamLimits

0xb797,	// (0x000352f2) bg_button_pane_cp013

0x5fad,	// (0x0002fb08) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5fad,	// (0x0002fb08) cell_vitu2_function_top_wide_pane_g1

0xb0d8,	// (0x00034c33) bg_popup_sub_pane_cp20

0x1d47,	// (0x0002b8a2) list_vitu2_match_list_pane

0x568d,	// (0x0002f1e8) bg_popup_sub_pane_cp20_g1

0x5695,	// (0x0002f1f0) bg_popup_sub_pane_cp20_g2

0xc9e2,	// (0x0003653d) bg_popup_sub_pane_cp20_g3

0x569d,	// (0x0002f1f8) bg_popup_sub_pane_cp20_g4

0xc9c2,	// (0x0003651d) bg_popup_sub_pane_cp20_g5

0x5fc5,	// (0x0002fb20) bg_popup_sub_pane_cp20_g6

0x56ad,	// (0x0002f208) bg_popup_sub_pane_cp20_g7

0x56b5,	// (0x0002f210) bg_popup_sub_pane_cp20_g8

0x56bd,	// (0x0002f218) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7d5,	// (0x00039330) bg_popup_sub_pane_cp20_g

0xb7b3,	// (0x0003530e) list_vitu2_match_list_item_pane_ParamLimits

0xb7b3,	// (0x0003530e) list_vitu2_match_list_item_pane

0xb7c5,	// (0x00035320) list_vitu2_match_list_item_pane_t1

0xb0e6,	// (0x00034c41) bg_popup_sub_pane_cp21

0xc7c9,	// (0x00036324) grid_vitu2_dropdown_list_pane

0x1d5f,	// (0x0002b8ba) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1d5f,	// (0x0002b8ba) cell_vitu2_dropdown_list_char_pane

0x1d7f,	// (0x0002b8da) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1d7f,	// (0x0002b8da) cell_vitu2_dropdown_list_ctrl_pane

0x5fcd,	// (0x0002fb28) cell_vitu2_dropdown_list_char_pane_g1

0x5fd6,	// (0x0002fb31) cell_vitu2_dropdown_list_char_pane_g2

0x5fdf,	// (0x0002fb3a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7e8,	// (0x00039343) cell_vitu2_dropdown_list_char_pane_g

0x1da7,	// (0x0002b902) cell_vitu2_dropdown_list_char_pane_t1

0x5fe8,	// (0x0002fb43) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5fe8,	// (0x0002fb43) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ff5,	// (0x0002fb50) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ff5,	// (0x0002fb50) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6002,	// (0x0002fb5d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6002,	// (0x0002fb5d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1db5,	// (0x0002b910) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1db5,	// (0x0002b910) cell_vitu2_dropdown_list_ctrl_pane_g4

0x55d1,	// (0x0002f12c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x55d1,	// (0x0002f12c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7ef,	// (0x0003934a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7ef,	// (0x0003934a) cell_vitu2_dropdown_list_ctrl_pane_g

0x600f,	// (0x0002fb6a) aid_size_cell_gallery2_ParamLimits

0x600f,	// (0x0002fb6a) aid_size_cell_gallery2

0x602d,	// (0x0002fb88) grid_gallery2_pane_ParamLimits

0x602d,	// (0x0002fb88) grid_gallery2_pane

0x6047,	// (0x0002fba2) scroll_pane_cp029_ParamLimits

0x6047,	// (0x0002fba2) scroll_pane_cp029

0x6058,	// (0x0002fbb3) cell_gallery2_pane_ParamLimits

0x6058,	// (0x0002fbb3) cell_gallery2_pane

0xc818,	// (0x00036373) cell_gallery2_pane_g2

0x60b7,	// (0x0002fc12) cell_gallery2_pane_g3

0x60bf,	// (0x0002fc1a) cell_gallery2_pane_g4

0x60c7,	// (0x0002fc22) cell_gallery2_pane_g5

0xc7c9,	// (0x00036324) grid_highlight_pane_cp10

0x1ab1,	// (0x0002b60c) popup_vitu2_match_list_window_ParamLimits

0x1ac6,	// (0x0002b621) popup_vitu2_query_window_ParamLimits

0x1ac6,	// (0x0002b621) popup_vitu2_query_window

0xb0e6,	// (0x00034c41) bg_vitu2_candi_button_pane

0x5fcd,	// (0x0002fb28) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5fd6,	// (0x0002fb31) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5fdf,	// (0x0002fb3a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x60cf,	// (0x0002fc2a) bg_button_pane_cp015

0x60e0,	// (0x0002fc3b) bg_button_pane_cp016

0x60ec,	// (0x0002fc47) bg_button_pane_cp017

0xd343,	// (0x00036e9e) bg_popup_sub_pane_cp22

0x612a,	// (0x0002fc85) popup_vitu2_query_window_g1

0x6136,	// (0x0002fc91) popup_vitu2_query_window_g2

0x0002,

0xf7fa,	// (0x00039355) popup_vitu2_query_window_g

0x6158,	// (0x0002fcb3) popup_vitu2_query_window_t1_ParamLimits

0x6158,	// (0x0002fcb3) popup_vitu2_query_window_t1

0x618b,	// (0x0002fce6) popup_vitu2_query_window_t2_ParamLimits

0x618b,	// (0x0002fce6) popup_vitu2_query_window_t2

0x619d,	// (0x0002fcf8) popup_vitu2_query_window_t3_ParamLimits

0x619d,	// (0x0002fcf8) popup_vitu2_query_window_t3

0x61c5,	// (0x0002fd20) popup_vitu2_query_window_t4_ParamLimits

0x61c5,	// (0x0002fd20) popup_vitu2_query_window_t4

0x61d9,	// (0x0002fd34) popup_vitu2_query_window_t5_ParamLimits

0x61d9,	// (0x0002fd34) popup_vitu2_query_window_t5

0x0006,

0xf801,	// (0x0003935c) popup_vitu2_query_window_t_ParamLimits

0xf801,	// (0x0003935c) popup_vitu2_query_window_t

0x5acb,	// (0x0002f626) main_cset_text_pane

0x5aec,	// (0x0002f647) aid_area_touch_slider_ParamLimits

0x5b08,	// (0x0002f663) cset_slider_pane_ParamLimits

0x5b2b,	// (0x0002f686) main_cset_slider_pane_g1_ParamLimits

0x5b40,	// (0x0002f69b) main_cset_slider_pane_g2_ParamLimits

0x5b55,	// (0x0002f6b0) main_cset_slider_pane_g3_ParamLimits

0x5b55,	// (0x0002f6b0) main_cset_slider_pane_g3

0x5b61,	// (0x0002f6bc) main_cset_slider_pane_g4_ParamLimits

0x5b61,	// (0x0002f6bc) main_cset_slider_pane_g4

0x5b70,	// (0x0002f6cb) main_cset_slider_pane_g5_ParamLimits

0x5b70,	// (0x0002f6cb) main_cset_slider_pane_g5

0x5b7c,	// (0x0002f6d7) main_cset_slider_pane_g6_ParamLimits

0x5b7c,	// (0x0002f6d7) main_cset_slider_pane_g6

0xf765,	// (0x000392c0) main_cset_slider_pane_g_ParamLimits

0x5c2c,	// (0x0002f787) main_cset_slider_pane_t1_ParamLimits

0x5c54,	// (0x0002f7af) main_cset_slider_pane_t2_ParamLimits

0x5c6e,	// (0x0002f7c9) main_cset_slider_pane_t3_ParamLimits

0x5c88,	// (0x0002f7e3) main_cset_slider_pane_t4_ParamLimits

0x5ca2,	// (0x0002f7fd) main_cset_slider_pane_t5_ParamLimits

0x5cbc,	// (0x0002f817) main_cset_slider_pane_t6_ParamLimits

0x5cd1,	// (0x0002f82c) main_cset_slider_pane_t7_ParamLimits

0x5cfb,	// (0x0002f856) main_cset_slider_pane_t8_ParamLimits

0x5cfb,	// (0x0002f856) main_cset_slider_pane_t8

0x5d23,	// (0x0002f87e) main_cset_slider_pane_t9_ParamLimits

0x5d23,	// (0x0002f87e) main_cset_slider_pane_t9

0x5d4b,	// (0x0002f8a6) main_cset_slider_pane_t10_ParamLimits

0x5d4b,	// (0x0002f8a6) main_cset_slider_pane_t10

0x5d73,	// (0x0002f8ce) main_cset_slider_pane_t11_ParamLimits

0x5d73,	// (0x0002f8ce) main_cset_slider_pane_t11

0x5d9b,	// (0x0002f8f6) main_cset_slider_pane_t12_ParamLimits

0x5d9b,	// (0x0002f8f6) main_cset_slider_pane_t12

0x5db8,	// (0x0002f913) main_cset_slider_pane_t13_ParamLimits

0x5db8,	// (0x0002f913) main_cset_slider_pane_t13

0xf78a,	// (0x000392e5) main_cset_slider_pane_t_ParamLimits

0xbe24,	// (0x0003597f) bg_popup_sub_pane_cp011

0x6243,	// (0x0002fd9e) main_cset_text_pane_g1

0x624b,	// (0x0002fda6) main_cset_text_pane_t1

0x6259,	// (0x0002fdb4) main_cset_text_pane_t2

0x6267,	// (0x0002fdc2) main_cset_text_pane_t3

0x6275,	// (0x0002fdd0) main_cset_text_pane_t4

0x6283,	// (0x0002fdde) main_cset_text_pane_t5

0x6291,	// (0x0002fdec) main_cset_text_pane_t6

0x629f,	// (0x0002fdfa) main_cset_text_pane_t7

0x0006,

0xf810,	// (0x0003936b) main_cset_text_pane_t

0xb0e6,	// (0x00034c41) main_cam4_burst_pane

0xb0e6,	// (0x00034c41) main_cam5_pane

0x59d8,	// (0x0002f533) bg_button_pane_cp019

0x59e1,	// (0x0002f53c) bg_button_pane_cp020

0x5b90,	// (0x0002f6eb) main_cset_slider_pane_g7_ParamLimits

0x5b90,	// (0x0002f6eb) main_cset_slider_pane_g7

0x5b9c,	// (0x0002f6f7) main_cset_slider_pane_g8_ParamLimits

0x5b9c,	// (0x0002f6f7) main_cset_slider_pane_g8

0x5ba8,	// (0x0002f703) main_cset_slider_pane_g9_ParamLimits

0x5ba8,	// (0x0002f703) main_cset_slider_pane_g9

0x5bb4,	// (0x0002f70f) main_cset_slider_pane_g10_ParamLimits

0x5bb4,	// (0x0002f70f) main_cset_slider_pane_g10

0x5bc0,	// (0x0002f71b) main_cset_slider_pane_g11_ParamLimits

0x5bc0,	// (0x0002f71b) main_cset_slider_pane_g11

0x5bcc,	// (0x0002f727) main_cset_slider_pane_g12_ParamLimits

0x5bcc,	// (0x0002f727) main_cset_slider_pane_g12

0x5bd8,	// (0x0002f733) main_cset_slider_pane_g13_ParamLimits

0x5bd8,	// (0x0002f733) main_cset_slider_pane_g13

0x5be4,	// (0x0002f73f) main_cset_slider_pane_g14_ParamLimits

0x5be4,	// (0x0002f73f) main_cset_slider_pane_g14

0x5bf0,	// (0x0002f74b) main_cset_slider_pane_g15_ParamLimits

0x5bf0,	// (0x0002f74b) main_cset_slider_pane_g15

0x5dd5,	// (0x0002f930) main_cset_slider_pane_t14_ParamLimits

0x5dd5,	// (0x0002f930) main_cset_slider_pane_t14

0x5e0e,	// (0x0002f969) main_cset_slider_pane_t15_ParamLimits

0x5e0e,	// (0x0002f969) main_cset_slider_pane_t15

0x62ad,	// (0x0002fe08) aid_cam4_burst_size_cell_ParamLimits

0x62ad,	// (0x0002fe08) aid_cam4_burst_size_cell

0x62cd,	// (0x0002fe28) grid_cam4_burst_pane_ParamLimits

0x62cd,	// (0x0002fe28) grid_cam4_burst_pane

0x6305,	// (0x0002fe60) linegrid_cam4_burst_pane_ParamLimits

0x6305,	// (0x0002fe60) linegrid_cam4_burst_pane

0x6329,	// (0x0002fe84) scroll_pane_cp30_ParamLimits

0x6329,	// (0x0002fe84) scroll_pane_cp30

0x6335,	// (0x0002fe90) cell_cam4_burst_pane_ParamLimits

0x6335,	// (0x0002fe90) cell_cam4_burst_pane

0x6382,	// (0x0002fedd) linegrid_cam4_burst_pane_g1_ParamLimits

0x6382,	// (0x0002fedd) linegrid_cam4_burst_pane_g1

0x638f,	// (0x0002feea) linegrid_cam4_burst_pane_g2_ParamLimits

0x638f,	// (0x0002feea) linegrid_cam4_burst_pane_g2

0x63a0,	// (0x0002fefb) linegrid_cam4_burst_pane_g3_ParamLimits

0x63a0,	// (0x0002fefb) linegrid_cam4_burst_pane_g3

0x0002,

0xf81f,	// (0x0003937a) linegrid_cam4_burst_pane_g_ParamLimits

0xf81f,	// (0x0003937a) linegrid_cam4_burst_pane_g

0x63ad,	// (0x0002ff08) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x63ad,	// (0x0002ff08) linegrid_cam4_burst_pane_g3_copy1

0x63c7,	// (0x0002ff22) linegrid_cam4_burst_pane_g4_ParamLimits

0x63c7,	// (0x0002ff22) linegrid_cam4_burst_pane_g4

0x63d4,	// (0x0002ff2f) linegrid_cam4_burst_pane_g5_ParamLimits

0x63d4,	// (0x0002ff2f) linegrid_cam4_burst_pane_g5

0x63e5,	// (0x0002ff40) linegrid_cam4_burst_pane_g6_ParamLimits

0x63e5,	// (0x0002ff40) linegrid_cam4_burst_pane_g6

0x63fc,	// (0x0002ff57) linegrid_cam4_burst_pane_g7_ParamLimits

0x63fc,	// (0x0002ff57) linegrid_cam4_burst_pane_g7

0x6409,	// (0x0002ff64) cell_cam4_burst_pane_g1

0x6428,	// (0x0002ff83) main_cam5_pane_t1_ParamLimits

0x6428,	// (0x0002ff83) main_cam5_pane_t1

0x643a,	// (0x0002ff95) main_cam5_pane_t2_ParamLimits

0x643a,	// (0x0002ff95) main_cam5_pane_t2

0x644c,	// (0x0002ffa7) main_cam5_pane_t3_ParamLimits

0x644c,	// (0x0002ffa7) main_cam5_pane_t3

0x645e,	// (0x0002ffb9) main_cam5_pane_t4_ParamLimits

0x645e,	// (0x0002ffb9) main_cam5_pane_t4

0x6476,	// (0x0002ffd1) main_cam5_pane_t5_ParamLimits

0x6476,	// (0x0002ffd1) main_cam5_pane_t5

0x648a,	// (0x0002ffe5) main_cam5_pane_t6_ParamLimits

0x648a,	// (0x0002ffe5) main_cam5_pane_t6

0x649e,	// (0x0002fff9) main_cam5_pane_t7_ParamLimits

0x649e,	// (0x0002fff9) main_cam5_pane_t7

0x64b0,	// (0x0003000b) main_cam5_pane_t8_ParamLimits

0x64b0,	// (0x0003000b) main_cam5_pane_t8

0x64cc,	// (0x00030027) main_cam5_pane_t9_ParamLimits

0x64cc,	// (0x00030027) main_cam5_pane_t9

0x64de,	// (0x00030039) main_cam5_pane_t10_ParamLimits

0x64de,	// (0x00030039) main_cam5_pane_t10

0x64f0,	// (0x0003004b) main_cam5_pane_t11_ParamLimits

0x64f0,	// (0x0003004b) main_cam5_pane_t11

0x6502,	// (0x0003005d) main_cam5_pane_t12_ParamLimits

0x6502,	// (0x0003005d) main_cam5_pane_t12

0x6517,	// (0x00030072) main_cam5_pane_t13_ParamLimits

0x6517,	// (0x00030072) main_cam5_pane_t13

0x000c,

0xf82b,	// (0x00039386) main_cam5_pane_t_ParamLimits

0xf82b,	// (0x00039386) main_cam5_pane_t

0x0be1,	// (0x0002a73c) popup_scut_keymap_window_ParamLimits

0x0be1,	// (0x0002a73c) popup_scut_keymap_window

0x6534,	// (0x0003008f) aid_size_cell_brow_shortcut

0xc7c9,	// (0x00036324) bg_popup_window_pane_cp010

0x6540,	// (0x0003009b) grid_scut_pane

0x654c,	// (0x000300a7) cell_scut_pane_ParamLimits

0x654c,	// (0x000300a7) cell_scut_pane

0x6563,	// (0x000300be) cell_scut_pane_g1

0x656c,	// (0x000300c7) cell_scut_pane_t1

0x657b,	// (0x000300d6) cell_scut_pane_t2

0x658a,	// (0x000300e5) cell_scut_pane_t3

0x0002,

0xf846,	// (0x000393a1) cell_scut_pane_t

0x4b1a,	// (0x0002e675) main_mup3_pane_g8_ParamLimits

0x4b1a,	// (0x0002e675) main_mup3_pane_g8

0x19b4,	// (0x0002b50f) area_vitu2_query_pane_ParamLimits

0x19b4,	// (0x0002b50f) area_vitu2_query_pane

0x60f8,	// (0x0002fc53) input_focus_pane_cp08

0x6598,	// (0x000300f3) area_vitu2_query_pane_g1

0x65a4,	// (0x000300ff) area_vitu2_query_pane_g2

0x0001,

0xf84d,	// (0x000393a8) area_vitu2_query_pane_g

0x65b3,	// (0x0003010e) area_vitu2_query_pane_t1_ParamLimits

0x65b3,	// (0x0003010e) area_vitu2_query_pane_t1

0x65c7,	// (0x00030122) area_vitu2_query_pane_t2_ParamLimits

0x65c7,	// (0x00030122) area_vitu2_query_pane_t2

0x65db,	// (0x00030136) area_vitu2_query_pane_t3_ParamLimits

0x65db,	// (0x00030136) area_vitu2_query_pane_t3

0x6603,	// (0x0003015e) area_vitu2_query_pane_t4_ParamLimits

0x6603,	// (0x0003015e) area_vitu2_query_pane_t4

0x662b,	// (0x00030186) area_vitu2_query_pane_t5_ParamLimits

0x662b,	// (0x00030186) area_vitu2_query_pane_t5

0x6653,	// (0x000301ae) area_vitu2_query_pane_t6_ParamLimits

0x6653,	// (0x000301ae) area_vitu2_query_pane_t6

0x0006,

0xf852,	// (0x000393ad) area_vitu2_query_pane_t_ParamLimits

0xf852,	// (0x000393ad) area_vitu2_query_pane_t

0x669f,	// (0x000301fa) bg_button_pane_cp018

0x66ab,	// (0x00030206) bg_button_pane_cp021

0x66b7,	// (0x00030212) bg_button_pane_cp022

0x66d6,	// (0x00030231) input_focus_pane_cp09

0xcfd1,	// (0x00036b2c) aid_size_touch_mv_arrow_left

0xcffc,	// (0x00036b57) aid_size_touch_mv_arrow_right

0x5c08,	// (0x0002f763) main_cset_slider_pane_g16_ParamLimits

0x5c08,	// (0x0002f763) main_cset_slider_pane_g16

0x5c14,	// (0x0002f76f) main_cset_slider_pane_g17_ParamLimits

0x5c14,	// (0x0002f76f) main_cset_slider_pane_g17

0x6409,	// (0x0002ff64) cell_cam4_burst_pane_g1_ParamLimits

0xbe24,	// (0x0003597f) compa_mode_pane

0x5eed,	// (0x0002fa48) popup_vtel_slider_window_g3_ParamLimits

0x5eed,	// (0x0002fa48) popup_vtel_slider_window_g3

0x5f04,	// (0x0002fa5f) popup_vtel_slider_window_g4_ParamLimits

0x5f04,	// (0x0002fa5f) popup_vtel_slider_window_g4

0x5f1b,	// (0x0002fa76) popup_vtel_slider_window_t1_ParamLimits

0x5f1b,	// (0x0002fa76) popup_vtel_slider_window_t1

0xb0e6,	// (0x00034c41) main_cl_pane

0xb248,	// (0x00034da3) popup_imed_adjust2_window_ParamLimits

0xd343,	// (0x00036e9e) bg_tb_trans_pane_cp05_ParamLimits

0xede7,	// (0x00038942) popup_imed_adjust2_window_g1_ParamLimits

0xedf6,	// (0x00038951) popup_imed_adjust2_window_g2_ParamLimits

0xedf6,	// (0x00038951) popup_imed_adjust2_window_g2

0xee02,	// (0x0003895d) popup_imed_adjust2_window_g3_ParamLimits

0xee02,	// (0x0003895d) popup_imed_adjust2_window_g3

0x0002,

0xf600,	// (0x0003915b) popup_imed_adjust2_window_g_ParamLimits

0xf600,	// (0x0003915b) popup_imed_adjust2_window_g

0xee0e,	// (0x00038969) popup_imed_adjust2_window_t1_ParamLimits

0xee26,	// (0x00038981) slider_imed_adjust_pane_ParamLimits

0xee3a,	// (0x00038995) slider_imed_adjust_pane_g1_ParamLimits

0xee4a,	// (0x000389a5) slider_imed_adjust_pane_g2_ParamLimits

0xee5a,	// (0x000389b5) slider_imed_adjust_pane_g3_ParamLimits

0xee6b,	// (0x000389c6) slider_imed_adjust_pane_g4_ParamLimits

0xf607,	// (0x00039162) slider_imed_adjust_pane_g_ParamLimits

0x176f,	// (0x0002b2ca) aid_touch_area_cam4_ParamLimits

0x176f,	// (0x0002b2ca) aid_touch_area_cam4

0xb679,	// (0x000351d4) battery_pane_cp01

0x183e,	// (0x0002b399) main_camera4_pane_g6_ParamLimits

0x183e,	// (0x0002b399) main_camera4_pane_g6

0x1868,	// (0x0002b3c3) main_camera4_pane_t2_ParamLimits

0x1868,	// (0x0002b3c3) main_camera4_pane_t2

0x0001,

0xf6d8,	// (0x00039233) main_camera4_pane_t_ParamLimits

0xf6d8,	// (0x00039233) main_camera4_pane_t

0x1889,	// (0x0002b3e4) aid_touch_area_vid4_ParamLimits

0x1889,	// (0x0002b3e4) aid_touch_area_vid4

0x18dd,	// (0x0002b438) main_video4_pane_g5_ParamLimits

0x18dd,	// (0x0002b438) main_video4_pane_g5

0x1902,	// (0x0002b45d) vid4_progress_pane_ParamLimits

0x1902,	// (0x0002b45d) vid4_progress_pane

0x5c20,	// (0x0002f77b) main_cset_slider_pane_g18_ParamLimits

0x5c20,	// (0x0002f77b) main_cset_slider_pane_g18

0x641c,	// (0x0002ff77) cell_cam4_burst_pane_g2_ParamLimits

0x641c,	// (0x0002ff77) cell_cam4_burst_pane_g2

0x0001,

0xf826,	// (0x00039381) cell_cam4_burst_pane_g_ParamLimits

0xf826,	// (0x00039381) cell_cam4_burst_pane_g

0xc5c1,	// (0x0003611c) bg_cl_pane_ParamLimits

0xc5c1,	// (0x0003611c) bg_cl_pane

0x66e6,	// (0x00030241) cl_header_pane_ParamLimits

0x66e6,	// (0x00030241) cl_header_pane

0x66fa,	// (0x00030255) cl_listscroll_pane_ParamLimits

0x66fa,	// (0x00030255) cl_listscroll_pane

0x670a,	// (0x00030265) bg_cl_pane_g1

0x6712,	// (0x0003026d) bg_cl_pane_g2

0x671a,	// (0x00030275) bg_cl_pane_g3

0x6722,	// (0x0003027d) bg_cl_pane_g4

0x672a,	// (0x00030285) bg_cl_pane_g5

0x6732,	// (0x0003028d) bg_cl_pane_g6

0x673a,	// (0x00030295) bg_cl_pane_g7

0x6742,	// (0x0003029d) bg_cl_pane_g8

0x674a,	// (0x000302a5) bg_cl_pane_g9

0x0008,

0xf861,	// (0x000393bc) bg_cl_pane_g

0x6752,	// (0x000302ad) aid_height_cl_leading_ParamLimits

0x6752,	// (0x000302ad) aid_height_cl_leading

0x675e,	// (0x000302b9) aid_height_cl_text_ParamLimits

0x675e,	// (0x000302b9) aid_height_cl_text

0xc24b,	// (0x00035da6) bg_cl_header_pane_ParamLimits

0xc24b,	// (0x00035da6) bg_cl_header_pane

0x677d,	// (0x000302d8) cl_header_pane_g1_ParamLimits

0x677d,	// (0x000302d8) cl_header_pane_g1

0x6793,	// (0x000302ee) cl_header_pane_t1_ParamLimits

0x6793,	// (0x000302ee) cl_header_pane_t1

0x67ac,	// (0x00030307) cl_list_pane

0x5ae3,	// (0x0002f63e) hc_scroll_pane_cp01

0xc9c2,	// (0x0003651d) bg_cl_header_pane_g1

0x568d,	// (0x0002f1e8) bg_cl_header_pane_g2

0xc9e2,	// (0x0003653d) bg_cl_header_pane_g3

0x569d,	// (0x0002f1f8) bg_cl_header_pane_g4

0x5695,	// (0x0002f1f0) bg_cl_header_pane_g5

0x5fc5,	// (0x0002fb20) bg_cl_header_pane_g6

0x56b5,	// (0x0002f210) bg_cl_header_pane_g7

0x56bd,	// (0x0002f218) bg_cl_header_pane_g8

0x56ad,	// (0x0002f208) bg_cl_header_pane_g9

0x0008,

0xf874,	// (0x000393cf) bg_cl_header_pane_g

0x67b5,	// (0x00030310) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x67b5,	// (0x00030310) hc_cl_list_double_graphic_heading_pane

0x67c6,	// (0x00030321) hc_cl_list_single_graphic_pane_ParamLimits

0x67c6,	// (0x00030321) hc_cl_list_single_graphic_pane

0x67df,	// (0x0003033a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x67df,	// (0x0003033a) hc_cl_list_single_graphic_pane_g1

0x67eb,	// (0x00030346) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x67eb,	// (0x00030346) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf887,	// (0x000393e2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf887,	// (0x000393e2) hc_cl_list_single_graphic_pane_g

0x67ff,	// (0x0003035a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x67ff,	// (0x0003035a) hc_cl_list_single_graphic_pane_t1

0x67df,	// (0x0003033a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x67df,	// (0x0003033a) hc_cl_list_double_graphic_heading_pane_g1

0x6814,	// (0x0003036f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6814,	// (0x0003036f) hc_cl_list_double_graphic_heading_pane_g2

0x6828,	// (0x00030383) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6828,	// (0x00030383) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf88c,	// (0x000393e7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf88c,	// (0x000393e7) hc_cl_list_double_graphic_heading_pane_g

0x683c,	// (0x00030397) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x683c,	// (0x00030397) hc_cl_list_double_graphic_heading_pane_t1

0x6851,	// (0x000303ac) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6851,	// (0x000303ac) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf893,	// (0x000393ee) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf893,	// (0x000393ee) hc_cl_list_double_graphic_heading_pane_t

0xb7db,	// (0x00035336) vid4_progress_pane_g1

0xb7eb,	// (0x00035346) vid4_progress_pane_g2

0x1dd1,	// (0x0002b92c) vid4_progress_pane_g3

0xb7fb,	// (0x00035356) vid4_progress_pane_g4

0x0004,

0xf898,	// (0x000393f3) vid4_progress_pane_g

0x1de3,	// (0x0002b93e) vid4_progress_pane_t1

0xb813,	// (0x0003536e) vid4_progress_pane_t2

0x0002,

0xf8a3,	// (0x000393fe) vid4_progress_pane_t

0x1df9,	// (0x0002b954) wait_bar_pane_cp07

0xe669,	// (0x000381c4) blid_firmament_pane_ParamLimits

0xe6ac,	// (0x00038207) popup_blid_sat_info2_window_g1

0xe6d0,	// (0x0003822b) popup_blid_sat_info2_window_t3

0xe6de,	// (0x00038239) popup_blid_sat_info2_window_t4

0xe6ec,	// (0x00038247) popup_blid_sat_info2_window_t5

0xe6fa,	// (0x00038255) popup_blid_sat_info2_window_t6

0xe70a,	// (0x00038265) popup_blid_sat_info2_window_t7

0xe718,	// (0x00038273) popup_blid_sat_info2_window_t8

0xe726,	// (0x00038281) popup_blid_sat_info2_window_t9

0xe734,	// (0x0003828f) popup_blid_sat_info2_window_t10

0xe7f5,	// (0x00038350) aid_firma_cardinal_ParamLimits

0xe809,	// (0x00038364) blid_firmament_pane_t1_ParamLimits

0xe820,	// (0x0003837b) blid_firmament_pane_t2_ParamLimits

0xe837,	// (0x00038392) blid_firmament_pane_t3_ParamLimits

0xe84e,	// (0x000383a9) blid_firmament_pane_t4_ParamLimits

0xf54c,	// (0x000390a7) blid_firmament_pane_t_ParamLimits

0xe865,	// (0x000383c0) blid_sat_info_pane_ParamLimits

0xb0d8,	// (0x00034c33) main_cam_set_pane_ParamLimits

0x5217,	// (0x0002ed72) aid_size_cell_colour_35_ParamLimits

0x5237,	// (0x0002ed92) aid_size_cell_colour_112_ParamLimits

0x5257,	// (0x0002edb2) aid_size_cell_effect_ParamLimits

0xd343,	// (0x00036e9e) bg_tb_trans_pane_cp02_ParamLimits

0x5277,	// (0x0002edd2) heading_imed_pane_ParamLimits

0x5283,	// (0x0002edde) listscroll_imed_pane_ParamLimits

0xdb64,	// (0x000376bf) popup_call2_audio_first_window_g5_ParamLimits

0xdb64,	// (0x000376bf) popup_call2_audio_first_window_g5

0x13ba,	// (0x0002af15) aid_size_touch_image3_arrow_left_ParamLimits

0x13ba,	// (0x0002af15) aid_size_touch_image3_arrow_left

0x13e6,	// (0x0002af41) aid_size_touch_image3_arrow_right_ParamLimits

0x13e6,	// (0x0002af41) aid_size_touch_image3_arrow_right

0xb828,	// (0x00035383) vid4_progress_pane_t3

0x53fe,	// (0x0002ef59) main_hwr_training_symbol_option_pane_ParamLimits

0x53fe,	// (0x0002ef59) main_hwr_training_symbol_option_pane

0xef85,	// (0x00038ae0) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x00038ae0) popup_hwr_training_preview_window

0x12c4,	// (0x0002ae1f) hwr_training_navi_pane_g5_ParamLimits

0x12c4,	// (0x0002ae1f) hwr_training_navi_pane_g5

0x567b,	// (0x0002f1d6) popup_char_count_window

0xb0d8,	// (0x00034c33) bg_popup_sub_pane_cp20_ParamLimits

0x1d47,	// (0x0002b8a2) list_vitu2_match_list_pane_ParamLimits

0x1d53,	// (0x0002b8ae) vitu2_page_scroll_pane_ParamLimits

0x1d53,	// (0x0002b8ae) vitu2_page_scroll_pane

0x689c,	// (0x000303f7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x689c,	// (0x000303f7) list_single_hwr_training_symbol_option_pane

0x68af,	// (0x0003040a) list_single_hwr_training_symbol_option_pane_g1

0x68b7,	// (0x00030412) list_single_hwr_training_symbol_option_pane_t1

0x68c5,	// (0x00030420) bg_button_pane_cp023

0x68ce,	// (0x00030429) bg_button_pane_cp024

0x6901,	// (0x0003045c) vitu2_page_scroll_pane_g1

0x6909,	// (0x00030464) vitu2_page_scroll_pane_g2

0x0001,

0xf8aa,	// (0x00039405) vitu2_page_scroll_pane_g

0x6911,	// (0x0003046c) vitu2_page_scroll_pane_t1

0xc690,	// (0x000361eb) popup_char_count_window_g1

0x6920,	// (0x0003047b) popup_char_count_window_g2

0x2008,	// (0x0002bb63) popup_char_count_window_g3

0x0002,

0xf8af,	// (0x0003940a) popup_char_count_window_g

0x6929,	// (0x00030484) popup_char_count_window_t1

0xb0e6,	// (0x00034c41) main_vded2_pane

0xedd3,	// (0x0003892e) aid_size_cell_imed_line

0xeddd,	// (0x00038938) grid_imed_line_width_pane

0xb729,	// (0x00035284) vid4_indicators_pane_g4

0x6937,	// (0x00030492) cell_imed_line_width_pane_ParamLimits

0x6937,	// (0x00030492) cell_imed_line_width_pane

0x694b,	// (0x000304a6) cell_imed_line_width_pane_g1

0x6954,	// (0x000304af) cell_imed_line_width_pane_g2

0x0001,

0xf8b6,	// (0x00039411) cell_imed_line_width_pane_g

0x695c,	// (0x000304b7) main_vded2_pane_g1_ParamLimits

0x695c,	// (0x000304b7) main_vded2_pane_g1

0x6972,	// (0x000304cd) main_vded2_pane_g2_ParamLimits

0x6972,	// (0x000304cd) main_vded2_pane_g2

0x0001,

0xf8bb,	// (0x00039416) main_vded2_pane_g_ParamLimits

0xf8bb,	// (0x00039416) main_vded2_pane_g

0x6984,	// (0x000304df) vded2_slider_pane_ParamLimits

0x6984,	// (0x000304df) vded2_slider_pane

0x6994,	// (0x000304ef) aid_size_touch_vded2_end

0x699e,	// (0x000304f9) aid_size_touch_vded2_playhead

0x69a8,	// (0x00030503) aid_size_touch_vded2_start

0x69b0,	// (0x0003050b) vded2_slider_bg_pane

0x69b9,	// (0x00030514) vded2_slider_pane_g1

0x69c2,	// (0x0003051d) vded2_slider_pane_g2

0x69ca,	// (0x00030525) vded2_slider_pane_g3

0x0002,

0xf8c0,	// (0x0003941b) vded2_slider_pane_g

0x69d5,	// (0x00030530) vded2_slider_bg_pane_g1

0x69de,	// (0x00030539) vded2_slider_bg_pane_g2

0x69e7,	// (0x00030542) vded2_slider_bg_pane_g3

0x0002,

0xf8c7,	// (0x00039422) vded2_slider_bg_pane_g

0x3bde,	// (0x0002d739) aid_postcard_touch_down_pane_ParamLimits

0x3bde,	// (0x0002d739) aid_postcard_touch_down_pane

0x3bf4,	// (0x0002d74f) aid_postcard_touch_up_pane_ParamLimits

0x3bf4,	// (0x0002d74f) aid_postcard_touch_up_pane

0xb0e6,	// (0x00034c41) main_blid2_pane

0xb22e,	// (0x00034d89) popup_blid2_search_window

0xbe24,	// (0x0003597f) blid2_gps_pane

0xbe24,	// (0x0003597f) blid2_navig_pane

0xbe24,	// (0x0003597f) blid2_search_pane

0xbe24,	// (0x0003597f) blid2_tripm_pane

0x69f0,	// (0x0003054b) blid2_search_pane_g1_ParamLimits

0x69f0,	// (0x0003054b) blid2_search_pane_g1

0x6a08,	// (0x00030563) blid2_search_pane_t1_ParamLimits

0x6a08,	// (0x00030563) blid2_search_pane_t1

0x6a1a,	// (0x00030575) aid_size_cell_blid2_gps_ParamLimits

0x6a1a,	// (0x00030575) aid_size_cell_blid2_gps

0x6a32,	// (0x0003058d) blid2_gps_pane_g1_ParamLimits

0x6a32,	// (0x0003058d) blid2_gps_pane_g1

0x6a46,	// (0x000305a1) grid_blid2_satellite_pane_ParamLimits

0x6a46,	// (0x000305a1) grid_blid2_satellite_pane

0x6a60,	// (0x000305bb) blid2_navig_pane_g1_ParamLimits

0x6a60,	// (0x000305bb) blid2_navig_pane_g1

0x6a6c,	// (0x000305c7) blid2_navig_pane_t1_ParamLimits

0x6a6c,	// (0x000305c7) blid2_navig_pane_t1

0x6a87,	// (0x000305e2) blid2_navig_pane_t2_ParamLimits

0x6a87,	// (0x000305e2) blid2_navig_pane_t2

0x0001,

0xf8ce,	// (0x00039429) blid2_navig_pane_t_ParamLimits

0xf8ce,	// (0x00039429) blid2_navig_pane_t

0x6aa2,	// (0x000305fd) blid2_navig_ring_pane_ParamLimits

0x6aa2,	// (0x000305fd) blid2_navig_ring_pane

0x6abb,	// (0x00030616) blid2_speed_pane_ParamLimits

0x6abb,	// (0x00030616) blid2_speed_pane

0x6ac7,	// (0x00030622) blid2_tripm_pane_g1_ParamLimits

0x6ac7,	// (0x00030622) blid2_tripm_pane_g1

0x6ae2,	// (0x0003063d) blid2_tripm_pane_g2_ParamLimits

0x6ae2,	// (0x0003063d) blid2_tripm_pane_g2

0x6af6,	// (0x00030651) blid2_tripm_pane_g3_ParamLimits

0x6af6,	// (0x00030651) blid2_tripm_pane_g3

0x6b0a,	// (0x00030665) blid2_tripm_pane_g4_ParamLimits

0x6b0a,	// (0x00030665) blid2_tripm_pane_g4

0x6b1e,	// (0x00030679) blid2_tripm_pane_g5_ParamLimits

0x6b1e,	// (0x00030679) blid2_tripm_pane_g5

0x0005,

0xf8d3,	// (0x0003942e) blid2_tripm_pane_g_ParamLimits

0xf8d3,	// (0x0003942e) blid2_tripm_pane_g

0x6b44,	// (0x0003069f) blid2_tripm_pane_t1_ParamLimits

0x6b44,	// (0x0003069f) blid2_tripm_pane_t1

0x6b5f,	// (0x000306ba) blid2_tripm_pane_t2_ParamLimits

0x6b5f,	// (0x000306ba) blid2_tripm_pane_t2

0x6b78,	// (0x000306d3) blid2_tripm_pane_t3_ParamLimits

0x6b78,	// (0x000306d3) blid2_tripm_pane_t3

0x0003,

0xf8e0,	// (0x0003943b) blid2_tripm_pane_t_ParamLimits

0xf8e0,	// (0x0003943b) blid2_tripm_pane_t

0x6bbf,	// (0x0003071a) cell_blid2_satellite_pane_ParamLimits

0x6bbf,	// (0x0003071a) cell_blid2_satellite_pane

0x6bdd,	// (0x00030738) cell_blid2_satellite_pane_g1

0x6be6,	// (0x00030741) cell_blid2_satellite_pane_t1

0xc563,	// (0x000360be) blid2_speed_pane_g1

0x6bf4,	// (0x0003074f) blid2_speed_pane_t1

0x6c02,	// (0x0003075d) blid2_speed_pane_t2

0x0001,

0xf8e9,	// (0x00039444) blid2_speed_pane_t

0xc563,	// (0x000360be) blid2_navig_ring_pane_g1

0x6c10,	// (0x0003076b) blid2_navig_ring_pane_g2

0x6c18,	// (0x00030773) blid2_navig_ring_pane_g3

0x6c20,	// (0x0003077b) blid2_navig_ring_pane_g4

0x6c28,	// (0x00030783) blid2_navig_ring_pane_g5

0x0004,

0xf8ee,	// (0x00039449) blid2_navig_ring_pane_g

0xbe24,	// (0x0003597f) bg_popup_window_pane_cp011

0x6c30,	// (0x0003078b) popup_blid2_search_window_g1

0x6c38,	// (0x00030793) popup_blid2_search_window_t1

0x6c46,	// (0x000307a1) popup_blid2_search_window_t2

0x0001,

0xf8f9,	// (0x00039454) popup_blid2_search_window_t

0xc8d1,	// (0x0003642c) main_browser_pane_g1

0xc5c1,	// (0x0003611c) main_browser_pane_ParamLimits

0xb0d8,	// (0x00034c33) bg_button_pane_cp011_ParamLimits

0x1cc6,	// (0x0002b821) cell_vitu2_function_pane_g1_ParamLimits

0xd343,	// (0x00036e9e) bg_popup_sub_pane_cp22_ParamLimits

0x60f8,	// (0x0002fc53) input_focus_pane_cp08_ParamLimits

0x6113,	// (0x0002fc6e) popup_vitu2_query_button_pane_ParamLimits

0x6113,	// (0x0002fc6e) popup_vitu2_query_button_pane

0x6122,	// (0x0002fc7d) popup_vitu2_query_input_button_pane

0x612a,	// (0x0002fc85) popup_vitu2_query_window_g1_ParamLimits

0x6136,	// (0x0002fc91) popup_vitu2_query_window_g2_ParamLimits

0xf7fa,	// (0x00039355) popup_vitu2_query_window_g_ParamLimits

0xbe24,	// (0x0003597f) bg_button_pane_cp026

0x6c54,	// (0x000307af) popup_vitu2_query_input_button_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp025

0x6c5c,	// (0x000307b7) popup_vitu2_query_button_pane_t1

0x477b,	// (0x0002e2d6) main_mp3_pane_t6

0x4789,	// (0x0002e2e4) popup_slider_window_cp01

0xb695,	// (0x000351f0) cam4_battery_pane

0xb6e8,	// (0x00035243) cam4_battery_pane_cp02

0xb7d3,	// (0x0003532e) cam4_battery_pane_cp01

0xb7d3,	// (0x0003532e) cam4_battery_pane_cp03

0x46ee,	// (0x0002e249) cam4_battery_pane_g1

0xc563,	// (0x000360be) cam4_battery_pane_g2

0x0001,

0xf8fe,	// (0x00039459) cam4_battery_pane_g

0xe742,	// (0x0003829d) popup_blid_sat_info2_window_t11

0xcfd1,	// (0x00036b2c) aid_size_touch_mv_arrow_left_ParamLimits

0xcffc,	// (0x00036b57) aid_size_touch_mv_arrow_right_ParamLimits

0xd05a,	// (0x00036bb5) navi_pane_g1_ParamLimits

0xd066,	// (0x00036bc1) navi_pane_g2_ParamLimits

0xd094,	// (0x00036bef) navi_pane_g3_ParamLimits

0xf30c,	// (0x00038e67) navi_pane_g_ParamLimits

0x3835,	// (0x0002d390) navi_pane_mv_t1_ParamLimits

0x528f,	// (0x0002edea) grid_imed_effect_pane_ParamLimits

0x2776,	// (0x0002c2d1) aid_placing_vt_slider_lsc

0xc820,	// (0x0003637b) aid_placing_vt_slider_prt

0xc24b,	// (0x00035da6) bg_tb_trans_pane_cp01_ParamLimits

0xea02,	// (0x0003855d) popup_image_details_window_g1_ParamLimits

0xea15,	// (0x00038570) popup_image_details_window_g2_ParamLimits

0xea2a,	// (0x00038585) popup_image_details_window_g3_ParamLimits

0xea2a,	// (0x00038585) popup_image_details_window_g3

0x01dd,	// (0x00029d38) popup_image_details_window_g_ParamLimits

0xea3e,	// (0x00038599) popup_image_details_window_t1_ParamLimits

0xea50,	// (0x000385ab) popup_image_details_window_t2_ParamLimits

0xea69,	// (0x000385c4) popup_image_details_window_t3_ParamLimits

0xea7d,	// (0x000385d8) popup_image_details_window_t4_ParamLimits

0xea98,	// (0x000385f3) popup_image_details_window_t5_ParamLimits

0x01e4,	// (0x00029d3f) popup_image_details_window_t_ParamLimits

0x676a,	// (0x000302c5) cl_header_name_pane_ParamLimits

0x676a,	// (0x000302c5) cl_header_name_pane

0x6c6a,	// (0x000307c5) cl_header_name_pane_t1_ParamLimits

0x6c6a,	// (0x000307c5) cl_header_name_pane_t1

0x6c8b,	// (0x000307e6) cl_header_name_pane_t2_ParamLimits

0x6c8b,	// (0x000307e6) cl_header_name_pane_t2

0x6ccd,	// (0x00030828) cl_header_name_pane_t3_ParamLimits

0x6ccd,	// (0x00030828) cl_header_name_pane_t3

0x0002,

0xf903,	// (0x0003945e) cl_header_name_pane_t_ParamLimits

0xf903,	// (0x0003945e) cl_header_name_pane_t

0xd123,	// (0x00036c7e) navi_pane_mv_g2_ParamLimits

0x5616,	// (0x0002f171) field_vitu2_entry_pane_g1_ParamLimits

0x5622,	// (0x0002f17d) field_vitu2_entry_pane_g2_ParamLimits

0xd241,	// (0x00036d9c) field_vitu2_entry_pane_g3_ParamLimits

0xd241,	// (0x00036d9c) field_vitu2_entry_pane_g3

0xf70a,	// (0x00039265) field_vitu2_entry_pane_g_ParamLimits

0x1b56,	// (0x0002b6b1) cell_vitu2_itu_pane_g1_ParamLimits

0x1b6e,	// (0x0002b6c9) cell_vitu2_itu_pane_g2_ParamLimits

0x1b6e,	// (0x0002b6c9) cell_vitu2_itu_pane_g2

0x0001,

0xf716,	// (0x00039271) cell_vitu2_itu_pane_g_ParamLimits

0xf716,	// (0x00039271) cell_vitu2_itu_pane_g

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp05_ParamLimits

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp05

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp03

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp04

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp10_ParamLimits

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp10

0x66c6,	// (0x00030221) bg_vkb2_func_pane_cp08

0x669f,	// (0x000301fa) bg_vkb2_func_pane_cp06

0x66ab,	// (0x00030206) bg_vkb2_func_pane_cp07

0x68d7,	// (0x00030432) bg_vkb2_func_pane_cp11_ParamLimits

0x68d7,	// (0x00030432) bg_vkb2_func_pane_cp11

0x68ec,	// (0x00030447) bg_vkb2_func_pane_cp12_ParamLimits

0x68ec,	// (0x00030447) bg_vkb2_func_pane_cp12

0xbe24,	// (0x0003597f) bg_vkb2_func_pane_cp09

0x568d,	// (0x0002f1e8) bg_vkb2_func_pane_g1

0xc9e2,	// (0x0003653d) bg_vkb2_func_pane_g2

0x5695,	// (0x0002f1f0) bg_vkb2_func_pane_g3

0x569d,	// (0x0002f1f8) bg_vkb2_func_pane_g4

0x5fc5,	// (0x0002fb20) bg_vkb2_func_pane_g5

0x56b5,	// (0x0002f210) bg_vkb2_func_pane_g6

0x56bd,	// (0x0002f218) bg_vkb2_func_pane_g7

0x56ad,	// (0x0002f208) bg_vkb2_func_pane_g8

0xc9c2,	// (0x0003651d) bg_vkb2_func_pane_g9

0x0008,

0xf90a,	// (0x00039465) bg_vkb2_func_pane_g

0x6b32,	// (0x0003068d) blid2_tripm_pane_g6_ParamLimits

0x6b32,	// (0x0003068d) blid2_tripm_pane_g6

0x548a,	// (0x0002efe5) mp4_progress_pane_g1

0x6bab,	// (0x00030706) blid2_tripm_values_pane_ParamLimits

0x6bab,	// (0x00030706) blid2_tripm_values_pane

0x6cfe,	// (0x00030859) blid2_tripm_values_pane_t1

0x6d0c,	// (0x00030867) blid2_tripm_values_pane_t2

0x6d1a,	// (0x00030875) blid2_tripm_values_pane_t3

0x6d28,	// (0x00030883) blid2_tripm_values_pane_t4

0x6d36,	// (0x00030891) blid2_tripm_values_pane_t5

0x6d44,	// (0x0003089f) blid2_tripm_values_pane_t6

0x6d52,	// (0x000308ad) blid2_tripm_values_pane_t7

0x6d60,	// (0x000308bb) blid2_tripm_values_pane_t8

0x6d6e,	// (0x000308c9) blid2_tripm_values_pane_t9

0x0008,

0xf91d,	// (0x00039478) blid2_tripm_values_pane_t

0x27b8,	// (0x0002c313) call_video_pane_t1_ParamLimits

0x27d6,	// (0x0002c331) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00038d15) call_video_pane_t_ParamLimits

0x3b03,	// (0x0002d65e) msg_header_pane_g1_ParamLimits

0xd30d,	// (0x00036e68) msg_header_pane_g2_ParamLimits

0xd30d,	// (0x00036e68) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x00038f05) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x00038f05) msg_header_pane_g

0xc5c1,	// (0x0003611c) main_clock2_pane_ParamLimits

0x5058,	// (0x0002ebb3) grid_clock2_toolbar_pane_ParamLimits

0x5058,	// (0x0002ebb3) grid_clock2_toolbar_pane

0x5058,	// (0x0002ebb3) listscroll_clock2_pane_ParamLimits

0x5058,	// (0x0002ebb3) listscroll_clock2_pane

0x513c,	// (0x0002ec97) main_clock2_pane_t3_ParamLimits

0x513c,	// (0x0002ec97) main_clock2_pane_t3

0x5160,	// (0x0002ecbb) main_clock2_pane_t4_ParamLimits

0x5160,	// (0x0002ecbb) main_clock2_pane_t4

0x6d7c,	// (0x000308d7) cell_clock2_toolbar_pane

0x6d84,	// (0x000308df) cell_clock2_toolbar_pane_cp01

0x6d84,	// (0x000308df) cell_clock2_toolbar_pane_cp02

0x6d8c,	// (0x000308e7) cell_clock2_toolbar_pane_cp03

0x6d94,	// (0x000308ef) list_clock2_pane

0xcf56,	// (0x00036ab1) scroll_pane_cp10

0x6d9c,	// (0x000308f7) list_single_clock2_pane_ParamLimits

0x6d9c,	// (0x000308f7) list_single_clock2_pane

0xc7c9,	// (0x00036324) list_highlight_pane_cp08

0x6da9,	// (0x00030904) list_single_clock2_pane_t1

0x6db7,	// (0x00030912) list_single_clock2_pane_t2

0x0001,

0xf930,	// (0x0003948b) list_single_clock2_pane_t

0xbe24,	// (0x0003597f) bg_button_pane_cp10

0x6dc5,	// (0x00030920) cell_clock2_toolbar_pane_g1

0x0ec4,	// (0x0002aa1f) aid_main_viewer_pane_g1_ParamLimits

0x0ec4,	// (0x0002aa1f) aid_main_viewer_pane_g1

0x0ed2,	// (0x0002aa2d) aid_main_viewer_pane_g2_ParamLimits

0x0ed2,	// (0x0002aa2d) aid_main_viewer_pane_g2

0x3ba2,	// (0x0002d6fd) aid_main_viewer_pane_g3_ParamLimits

0x3ba2,	// (0x0002d6fd) aid_main_viewer_pane_g3

0x3bb1,	// (0x0002d70c) aid_main_viewer_pane_g4_ParamLimits

0x3bb1,	// (0x0002d70c) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x00038f16) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x00038f16) aid_main_viewer_pane_g

0x0f06,	// (0x0002aa61) main_calc_pane_ParamLimits

0x0f1a,	// (0x0002aa75) main_dialer2_pane_ParamLimits

0xb0e6,	// (0x00034c41) main_cam6_pane

0xb0e6,	// (0x00034c41) main_vid6_pane

0x5064,	// (0x0002ebbf) listscroll_gen_pane_cp06_ParamLimits

0x5064,	// (0x0002ebbf) listscroll_gen_pane_cp06

0x5183,	// (0x0002ecde) main_clock2_pane_t5_ParamLimits

0x5183,	// (0x0002ecde) main_clock2_pane_t5

0x51e1,	// (0x0002ed3c) aid_call2_pane_cp10_ParamLimits

0x51f3,	// (0x0002ed4e) aid_call_pane_cp10_ParamLimits

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g2_ParamLimits

0x11f0,	// (0x0002ad4b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x11f0,	// (0x0002ad4b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcfc5,	// (0x00036b20) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf5f5,	// (0x00039150) popup_clock_analogue_window_cp10_g_ParamLimits

0x1206,	// (0x0002ad61) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5534,	// (0x0002f08f) cell_dialer2_keypad_pane_g2_ParamLimits

0x5534,	// (0x0002f08f) cell_dialer2_keypad_pane_g2

0x0001,

0xf6a9,	// (0x00039204) cell_dialer2_keypad_pane_g_ParamLimits

0xf6a9,	// (0x00039204) cell_dialer2_keypad_pane_g

0xc56d,	// (0x000360c8) cell_dialer2_keypad_pane_t1

0x5abd,	// (0x0002f618) main_cset_text2_pane_ParamLimits

0x5abd,	// (0x0002f618) main_cset_text2_pane

0x6598,	// (0x000300f3) area_vitu2_query_pane_g1_ParamLimits

0x65a4,	// (0x000300ff) area_vitu2_query_pane_g2_ParamLimits

0xf84d,	// (0x000393a8) area_vitu2_query_pane_g_ParamLimits

0x667b,	// (0x000301d6) area_vitu2_query_pane_t7_ParamLimits

0x667b,	// (0x000301d6) area_vitu2_query_pane_t7

0x669f,	// (0x000301fa) bg_button_pane_cp018_ParamLimits

0x66ab,	// (0x00030206) bg_button_pane_cp021_ParamLimits

0x66b7,	// (0x00030212) bg_button_pane_cp022_ParamLimits

0x66c6,	// (0x00030221) bg_vkb2_func_pane_cp08_ParamLimits

0x669f,	// (0x000301fa) bg_vkb2_func_pane_cp06_ParamLimits

0x66ab,	// (0x00030206) bg_vkb2_func_pane_cp07_ParamLimits

0x66d6,	// (0x00030231) input_focus_pane_cp09_ParamLimits

0x1e0a,	// (0x0002b965) cam6_autofocus_pane_ParamLimits

0x1e0a,	// (0x0002b965) cam6_autofocus_pane

0x1e16,	// (0x0002b971) cam6_image_uncrop_pane_ParamLimits

0x1e16,	// (0x0002b971) cam6_image_uncrop_pane

0x1e26,	// (0x0002b981) cam6_indi_pane_ParamLimits

0x1e26,	// (0x0002b981) cam6_indi_pane

0x1e3c,	// (0x0002b997) cam6_mode_pane_ParamLimits

0x1e3c,	// (0x0002b997) cam6_mode_pane

0x1e4e,	// (0x0002b9a9) cam6_timer_pane_ParamLimits

0x1e4e,	// (0x0002b9a9) cam6_timer_pane

0x1e5a,	// (0x0002b9b5) cam6_zoom_pane_ParamLimits

0x1e5a,	// (0x0002b9b5) cam6_zoom_pane

0x6dcd,	// (0x00030928) cam6_mode_pane_g1_ParamLimits

0x6dcd,	// (0x00030928) cam6_mode_pane_g1

0x6ddd,	// (0x00030938) cam6_mode_pane_g2_ParamLimits

0x6ddd,	// (0x00030938) cam6_mode_pane_g2

0x6ded,	// (0x00030948) cam6_mode_pane_g3_ParamLimits

0x6ded,	// (0x00030948) cam6_mode_pane_g3

0x6dfd,	// (0x00030958) cam6_mode_pane_g4_ParamLimits

0x6dfd,	// (0x00030958) cam6_mode_pane_g4

0x0003,

0xf935,	// (0x00039490) cam6_mode_pane_g_ParamLimits

0xf935,	// (0x00039490) cam6_mode_pane_g

0xe95f,	// (0x000384ba) bg_tb_trans_pane_cp08_ParamLimits

0xe95f,	// (0x000384ba) bg_tb_trans_pane_cp08

0x6e0d,	// (0x00030968) cam6_battery_pane_ParamLimits

0x6e0d,	// (0x00030968) cam6_battery_pane

0x6e23,	// (0x0003097e) cam6_indi_pane_g1_ParamLimits

0x6e23,	// (0x0003097e) cam6_indi_pane_g1

0x6e35,	// (0x00030990) cam6_indi_pane_g2_ParamLimits

0x6e35,	// (0x00030990) cam6_indi_pane_g2

0x6e47,	// (0x000309a2) cam6_indi_pane_g3_ParamLimits

0x6e47,	// (0x000309a2) cam6_indi_pane_g3

0x0002,

0xf93e,	// (0x00039499) cam6_indi_pane_g_ParamLimits

0xf93e,	// (0x00039499) cam6_indi_pane_g

0x6e59,	// (0x000309b4) cam6_indi_pane_t1_ParamLimits

0x6e59,	// (0x000309b4) cam6_indi_pane_t1

0x55e7,	// (0x0002f142) cam6_autofocus_pane_g1

0x55df,	// (0x0002f13a) cam6_autofocus_pane_g2

0x55f7,	// (0x0002f152) cam6_autofocus_pane_g3

0x55ef,	// (0x0002f14a) cam6_autofocus_pane_g4

0x0003,

0xf945,	// (0x000394a0) cam6_autofocus_pane_g

0x6e7f,	// (0x000309da) cam6_timer_pane_g1

0x6e87,	// (0x000309e2) cam6_timer_pane_t1

0x6e95,	// (0x000309f0) cam6_zoom_cont_pane

0x6e9d,	// (0x000309f8) cam6_zoom_pane_g1

0x6ea6,	// (0x00030a01) cam6_zoom_pane_g2

0x6eaf,	// (0x00030a0a) cam6_zoom_pane_g3

0x0002,

0xf94e,	// (0x000394a9) cam6_zoom_pane_g

0xc563,	// (0x000360be) cam6_battery_pane_g1

0xc563,	// (0x000360be) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00038be7) cam6_battery_pane_g

0x6e9d,	// (0x000309f8) cam6_zoom_cont_pane_g1

0x6ea6,	// (0x00030a01) cam6_zoom_cont_pane_g2

0x6eb8,	// (0x00030a13) cam6_zoom_cont_pane_g3

0x0002,

0xf955,	// (0x000394b0) cam6_zoom_cont_pane_g

0x6ed5,	// (0x00030a30) cam6_mode_pane_cp_ParamLimits

0x6ed5,	// (0x00030a30) cam6_mode_pane_cp

0x6ee7,	// (0x00030a42) cam6_zoom_pane_cp_ParamLimits

0x6ee7,	// (0x00030a42) cam6_zoom_pane_cp

0x6ef3,	// (0x00030a4e) vid6_image_uncrop_cif_pane_ParamLimits

0x6ef3,	// (0x00030a4e) vid6_image_uncrop_cif_pane

0x6f03,	// (0x00030a5e) vid6_image_uncrop_nhd_pane_ParamLimits

0x6f03,	// (0x00030a5e) vid6_image_uncrop_nhd_pane

0x6f22,	// (0x00030a7d) vid6_image_uncrop_vga_pane_ParamLimits

0x6f22,	// (0x00030a7d) vid6_image_uncrop_vga_pane

0x6f31,	// (0x00030a8c) vid6_image_uncrop_wvga_pane_ParamLimits

0x6f31,	// (0x00030a8c) vid6_image_uncrop_wvga_pane

0x6f40,	// (0x00030a9b) vid6_indi_pane_ParamLimits

0x6f40,	// (0x00030a9b) vid6_indi_pane

0xe95f,	// (0x000384ba) bg_tb_trans_pane_cp09_ParamLimits

0xe95f,	// (0x000384ba) bg_tb_trans_pane_cp09

0x6f58,	// (0x00030ab3) cam6_battery_pane_cp_ParamLimits

0x6f58,	// (0x00030ab3) cam6_battery_pane_cp

0x6f64,	// (0x00030abf) vid6_indi_pane_g1_ParamLimits

0x6f64,	// (0x00030abf) vid6_indi_pane_g1

0x6f76,	// (0x00030ad1) vid6_indi_pane_g2_ParamLimits

0x6f76,	// (0x00030ad1) vid6_indi_pane_g2

0x6f88,	// (0x00030ae3) vid6_indi_pane_g3_ParamLimits

0x6f88,	// (0x00030ae3) vid6_indi_pane_g3

0x6f9d,	// (0x00030af8) vid6_indi_pane_g4_ParamLimits

0x6f9d,	// (0x00030af8) vid6_indi_pane_g4

0x6fb2,	// (0x00030b0d) vid6_indi_pane_g5_ParamLimits

0x6fb2,	// (0x00030b0d) vid6_indi_pane_g5

0x0004,

0xf95c,	// (0x000394b7) vid6_indi_pane_g_ParamLimits

0xf95c,	// (0x000394b7) vid6_indi_pane_g

0x6fcc,	// (0x00030b27) vid6_indi_pane_t1_ParamLimits

0x6fcc,	// (0x00030b27) vid6_indi_pane_t1

0x6fe2,	// (0x00030b3d) vid6_indi_pane_t2_ParamLimits

0x6fe2,	// (0x00030b3d) vid6_indi_pane_t2

0x700a,	// (0x00030b65) vid6_indi_pane_t3_ParamLimits

0x700a,	// (0x00030b65) vid6_indi_pane_t3

0x7032,	// (0x00030b8d) vid6_indi_pane_t4_ParamLimits

0x7032,	// (0x00030b8d) vid6_indi_pane_t4

0x0003,

0xf967,	// (0x000394c2) vid6_indi_pane_t_ParamLimits

0xf967,	// (0x000394c2) vid6_indi_pane_t

0x7056,	// (0x00030bb1) wait_bar_pane_cp08

0x7065,	// (0x00030bc0) main_cset_text2_pane_t1_ParamLimits

0x7065,	// (0x00030bc0) main_cset_text2_pane_t1

0x6ec0,	// (0x00030a1b) listscroll_gen_pane_cp06_t1_ParamLimits

0x6ec0,	// (0x00030a1b) listscroll_gen_pane_cp06_t1

0xb0e6,	// (0x00034c41) main_cam6_set_pane

0x55d1,	// (0x0002f12c) bg_tb_trans_pane_cp06_ParamLimits

0xb69d,	// (0x000351f8) cam4_indicators_pane_g1_ParamLimits

0xb6ae,	// (0x00035209) cam4_indicators_pane_g2_ParamLimits

0xf6e6,	// (0x00039241) cam4_indicators_pane_g_ParamLimits

0xb6c6,	// (0x00035221) cam4_indicators_pane_t1_ParamLimits

0xb0d8,	// (0x00034c33) bg_tb_trans_pane_cp07_ParamLimits

0xb6f0,	// (0x0003524b) vid4_indicators_pane_g1_ParamLimits

0xb704,	// (0x0003525f) vid4_indicators_pane_g2_ParamLimits

0xb718,	// (0x00035273) vid4_indicators_pane_g3_ParamLimits

0xb729,	// (0x00035284) vid4_indicators_pane_g4_ParamLimits

0xf6f8,	// (0x00039253) vid4_indicators_pane_g_ParamLimits

0xb745,	// (0x000352a0) vid4_indicators_pane_t1_ParamLimits

0xb7db,	// (0x00035336) vid4_progress_pane_g1_ParamLimits

0xb7eb,	// (0x00035346) vid4_progress_pane_g2_ParamLimits

0x1dd1,	// (0x0002b92c) vid4_progress_pane_g3_ParamLimits

0xb7fb,	// (0x00035356) vid4_progress_pane_g4_ParamLimits

0xf898,	// (0x000393f3) vid4_progress_pane_g_ParamLimits

0x1de3,	// (0x0002b93e) vid4_progress_pane_t1_ParamLimits

0xb813,	// (0x0003536e) vid4_progress_pane_t2_ParamLimits

0xb828,	// (0x00035383) vid4_progress_pane_t3_ParamLimits

0xf8a3,	// (0x000393fe) vid4_progress_pane_t_ParamLimits

0x1df9,	// (0x0002b954) wait_bar_pane_cp07_ParamLimits

0x7083,	// (0x00030bde) main_cam6_set_pane_g2_ParamLimits

0x7083,	// (0x00030bde) main_cam6_set_pane_g2

0x70a7,	// (0x00030c02) main_cset6_listscroll_pane_ParamLimits

0x70a7,	// (0x00030c02) main_cset6_listscroll_pane

0x70c3,	// (0x00030c1e) main_cset6_slider_pane_ParamLimits

0x70c3,	// (0x00030c1e) main_cset6_slider_pane

0x70d9,	// (0x00030c34) main_cset6_text2_pane_ParamLimits

0x70d9,	// (0x00030c34) main_cset6_text2_pane

0x70e7,	// (0x00030c42) main_cset6_text_pane

0x70ef,	// (0x00030c4a) main_cset_list_pane_copy1_ParamLimits

0x70ef,	// (0x00030c4a) main_cset_list_pane_copy1

0x70ff,	// (0x00030c5a) scroll_pane_cp028_copy1

0x7108,	// (0x00030c63) cset_list_set_pane_copy1

0x711a,	// (0x00030c75) aid_position_infowindow_above_copy1

0x7122,	// (0x00030c7d) aid_position_infowindow_below_copy1

0x712a,	// (0x00030c85) cset_list_set_pane_g1_copy1

0x7132,	// (0x00030c8d) cset_list_set_pane_g3_copy1_ParamLimits

0x7132,	// (0x00030c8d) cset_list_set_pane_g3_copy1

0x7141,	// (0x00030c9c) cset_list_set_pane_t1_copy1_ParamLimits

0x7141,	// (0x00030c9c) cset_list_set_pane_t1_copy1

0xc24b,	// (0x00035da6) list_highlight_pane_cp021_copy1_ParamLimits

0xc24b,	// (0x00035da6) list_highlight_pane_cp021_copy1

0x7156,	// (0x00030cb1) cset6_slider_pane_ParamLimits

0x7156,	// (0x00030cb1) cset6_slider_pane

0x7182,	// (0x00030cdd) main_cset6_slider_pane_g1_ParamLimits

0x7182,	// (0x00030cdd) main_cset6_slider_pane_g1

0x71aa,	// (0x00030d05) main_cset6_slider_pane_g2_ParamLimits

0x71aa,	// (0x00030d05) main_cset6_slider_pane_g2

0x71d2,	// (0x00030d2d) main_cset6_slider_pane_g3_ParamLimits

0x71d2,	// (0x00030d2d) main_cset6_slider_pane_g3

0x71de,	// (0x00030d39) main_cset6_slider_pane_g4_ParamLimits

0x71de,	// (0x00030d39) main_cset6_slider_pane_g4

0x71ea,	// (0x00030d45) main_cset6_slider_pane_g5_ParamLimits

0x71ea,	// (0x00030d45) main_cset6_slider_pane_g5

0x5b90,	// (0x0002f6eb) main_cset6_slider_pane_g7_ParamLimits

0x5b90,	// (0x0002f6eb) main_cset6_slider_pane_g7

0x5b9c,	// (0x0002f6f7) main_cset6_slider_pane_g8_ParamLimits

0x5b9c,	// (0x0002f6f7) main_cset6_slider_pane_g8

0x5ba8,	// (0x0002f703) main_cset6_slider_pane_g9_ParamLimits

0x5ba8,	// (0x0002f703) main_cset6_slider_pane_g9

0x5bb4,	// (0x0002f70f) main_cset6_slider_pane_g10_ParamLimits

0x5bb4,	// (0x0002f70f) main_cset6_slider_pane_g10

0x5bc0,	// (0x0002f71b) main_cset6_slider_pane_g11_ParamLimits

0x5bc0,	// (0x0002f71b) main_cset6_slider_pane_g11

0x5bcc,	// (0x0002f727) main_cset6_slider_pane_g12_ParamLimits

0x5bcc,	// (0x0002f727) main_cset6_slider_pane_g12

0x5bd8,	// (0x0002f733) main_cset6_slider_pane_g13_ParamLimits

0x5bd8,	// (0x0002f733) main_cset6_slider_pane_g13

0x5be4,	// (0x0002f73f) main_cset6_slider_pane_g14_ParamLimits

0x5be4,	// (0x0002f73f) main_cset6_slider_pane_g14

0x71f6,	// (0x00030d51) main_cset6_slider_pane_g15_ParamLimits

0x71f6,	// (0x00030d51) main_cset6_slider_pane_g15

0x5c08,	// (0x0002f763) main_cset6_slider_pane_g16_ParamLimits

0x5c08,	// (0x0002f763) main_cset6_slider_pane_g16

0x5c14,	// (0x0002f76f) main_cset6_slider_pane_g17_ParamLimits

0x5c14,	// (0x0002f76f) main_cset6_slider_pane_g17

0x0011,

0xf970,	// (0x000394cb) main_cset6_slider_pane_g_ParamLimits

0xf970,	// (0x000394cb) main_cset6_slider_pane_g

0x7226,	// (0x00030d81) main_cset6_slider_pane_t1_ParamLimits

0x7226,	// (0x00030d81) main_cset6_slider_pane_t1

0x7267,	// (0x00030dc2) main_cset6_slider_pane_t2_ParamLimits

0x7267,	// (0x00030dc2) main_cset6_slider_pane_t2

0x7292,	// (0x00030ded) main_cset6_slider_pane_t3_ParamLimits

0x7292,	// (0x00030ded) main_cset6_slider_pane_t3

0x72bd,	// (0x00030e18) main_cset6_slider_pane_t4_ParamLimits

0x72bd,	// (0x00030e18) main_cset6_slider_pane_t4

0x72e8,	// (0x00030e43) main_cset6_slider_pane_t5_ParamLimits

0x72e8,	// (0x00030e43) main_cset6_slider_pane_t5

0x7313,	// (0x00030e6e) main_cset6_slider_pane_t7_ParamLimits

0x7313,	// (0x00030e6e) main_cset6_slider_pane_t7

0x7349,	// (0x00030ea4) main_cset6_slider_pane_t8_ParamLimits

0x7349,	// (0x00030ea4) main_cset6_slider_pane_t8

0x736d,	// (0x00030ec8) main_cset6_slider_pane_t9_ParamLimits

0x736d,	// (0x00030ec8) main_cset6_slider_pane_t9

0x7391,	// (0x00030eec) main_cset6_slider_pane_t10_ParamLimits

0x7391,	// (0x00030eec) main_cset6_slider_pane_t10

0x73b5,	// (0x00030f10) main_cset6_slider_pane_t11_ParamLimits

0x73b5,	// (0x00030f10) main_cset6_slider_pane_t11

0x73d9,	// (0x00030f34) main_cset6_slider_pane_t14_ParamLimits

0x73d9,	// (0x00030f34) main_cset6_slider_pane_t14

0x7412,	// (0x00030f6d) main_cset6_slider_pane_t15_ParamLimits

0x7412,	// (0x00030f6d) main_cset6_slider_pane_t15

0x000b,

0xf995,	// (0x000394f0) main_cset6_slider_pane_t_ParamLimits

0xf995,	// (0x000394f0) main_cset6_slider_pane_t

0x744b,	// (0x00030fa6) cset_slider_pane_g1_copy1

0x7454,	// (0x00030faf) cset_slider_pane_g2_copy1

0x745d,	// (0x00030fb8) cset_slider_pane_g3_copy1

0xbe24,	// (0x0003597f) bg_popup_sub_pane_cp011_copy1

0x748c,	// (0x00030fe7) main_cset_text_pane_g1_copy1

0x624b,	// (0x0002fda6) main_cset_text_pane_t1_copy1

0x6259,	// (0x0002fdb4) main_cset_text_pane_t2_copy1

0x6267,	// (0x0002fdc2) main_cset_text_pane_t3_copy1

0x6275,	// (0x0002fdd0) main_cset_text_pane_t4_copy1

0x6283,	// (0x0002fdde) main_cset_text_pane_t5_copy1

0x7494,	// (0x00030fef) main_cset_text_pane_t6_copy1

0x74a2,	// (0x00030ffd) main_cset_text_pane_t7_copy1

0x7065,	// (0x00030bc0) main_cset_text2_pane_t1_copy1

0xb0d8,	// (0x00034c33) main_ncimui_pane

0x115e,	// (0x0002acb9) popup_query_ncimui_window_ParamLimits

0x115e,	// (0x0002acb9) popup_query_ncimui_window

0xeb75,	// (0x000386d0) field_cale_ev2_pane_g4_ParamLimits

0xeb75,	// (0x000386d0) field_cale_ev2_pane_g4

0x5464,	// (0x0002efbf) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5464,	// (0x0002efbf) cell_video_dialer_keypad_pane_g2

0x0001,

0xf680,	// (0x000391db) cell_video_dialer_keypad_pane_g_ParamLimits

0xf680,	// (0x000391db) cell_video_dialer_keypad_pane_g

0x547c,	// (0x0002efd7) cell_video_dialer_keypad_pane_t1

0xbe24,	// (0x0003597f) bg_popup_window_pane_cp012

0xce4e,	// (0x000369a9) heading_pane_cp06

0x75f7,	// (0x00031152) ncim_query_content_pane

0xbe24,	// (0x0003597f) bg_popup_heading_pane_cp01

0x75ff,	// (0x0003115a) ncim_heading_pane_t1

0x760d,	// (0x00031168) ncim_indicator_popup_pane

0x761f,	// (0x0003117a) ncim_query_button_pane

0x763f,	// (0x0003119a) ncim_query_content_pane_t1

0x7651,	// (0x000311ac) ncim_query_content_pane_t2

0x0005,

0xf9bf,	// (0x0003951a) ncim_query_content_pane_t

0x7703,	// (0x0003125e) ncim_query_list_pane

0x7715,	// (0x00031270) ncim_query_popup_pane

0x760d,	// (0x00031168) ncim_indicator_popup_pane_ParamLimits

0x7627,	// (0x00031182) ncim_query_content_pane_g1_ParamLimits

0x7627,	// (0x00031182) ncim_query_content_pane_g1

0x763f,	// (0x0003119a) ncim_query_content_pane_t1_ParamLimits

0x7651,	// (0x000311ac) ncim_query_content_pane_t2_ParamLimits

0x7663,	// (0x000311be) ncim_query_content_pane_t3_ParamLimits

0x7663,	// (0x000311be) ncim_query_content_pane_t3

0x768b,	// (0x000311e6) ncim_query_content_pane_t4_ParamLimits

0x768b,	// (0x000311e6) ncim_query_content_pane_t4

0x76b3,	// (0x0003120e) ncim_query_content_pane_t5_ParamLimits

0x76b3,	// (0x0003120e) ncim_query_content_pane_t5

0x76db,	// (0x00031236) ncim_query_content_pane_t6_ParamLimits

0x76db,	// (0x00031236) ncim_query_content_pane_t6

0xf9bf,	// (0x0003951a) ncim_query_content_pane_t_ParamLimits

0x7703,	// (0x0003125e) ncim_query_list_pane_ParamLimits

0x7715,	// (0x00031270) ncim_query_popup_pane_ParamLimits

0x7729,	// (0x00031284) wait_bar_pane_cp04

0xbe24,	// (0x0003597f) input_focus_pane_cp011

0x7731,	// (0x0003128c) ncim_query_popup_pane_t1

0x773f,	// (0x0003129a) ncim_list_query_list_pane_ParamLimits

0x773f,	// (0x0003129a) ncim_list_query_list_pane

0xbe24,	// (0x0003597f) bg_button_pane_cp027

0x774c,	// (0x000312a7) ncim_query_button_pane_g1

0xbe24,	// (0x0003597f) list_highlight_pane_cp012

0x7756,	// (0x000312b1) ncim_list_query_list_pane_g1

0x775e,	// (0x000312b9) ncim_list_query_list_pane_t1

0xb6ba,	// (0x00035215) cam4_indicators_pane_g3_ParamLimits

0xb6ba,	// (0x00035215) cam4_indicators_pane_g3

0xb735,	// (0x00035290) vid4_indicators_pane_g5_ParamLimits

0xb735,	// (0x00035290) vid4_indicators_pane_g5

0xb807,	// (0x00035362) vid4_progress_pane_g5_ParamLimits

0xb807,	// (0x00035362) vid4_progress_pane_g5

0x74e2,	// (0x0003103d) main_ncimui_pane_g1

0x754b,	// (0x000310a6) ncimui_group_query_pane_ParamLimits

0x754b,	// (0x000310a6) ncimui_group_query_pane

0x7593,	// (0x000310ee) ncimui_list_pane_ParamLimits

0x7593,	// (0x000310ee) ncimui_list_pane

0x75ba,	// (0x00031115) ncimui_text_pane_ParamLimits

0x75ba,	// (0x00031115) ncimui_text_pane

0x776c,	// (0x000312c7) ncimui_text_pane_t1_ParamLimits

0x776c,	// (0x000312c7) ncimui_text_pane_t1

0x778a,	// (0x000312e5) ncimui_list_single_graphic_pane_ParamLimits

0x778a,	// (0x000312e5) ncimui_list_single_graphic_pane

0x779a,	// (0x000312f5) ncimui_query_pane_ParamLimits

0x779a,	// (0x000312f5) ncimui_query_pane

0xbe24,	// (0x0003597f) list_highlight_pane_cp013

0x77ad,	// (0x00031308) ncim_list_query_list_pane_t1_copy1

0x77bb,	// (0x00031316) ncim_list_single_graphic_pane_g1

0x77c3,	// (0x0003131e) ncim_query_button_pane_cp01

0x77cf,	// (0x0003132a) ncim_query_entry_pane_ParamLimits

0x77cf,	// (0x0003132a) ncim_query_entry_pane

0x77e2,	// (0x0003133d) ncimui_query_pane_g1

0x77ee,	// (0x00031349) ncimui_query_pane_t1_ParamLimits

0x77ee,	// (0x00031349) ncimui_query_pane_t1

0xc24b,	// (0x00035da6) input_focus_pane_cp012

0x7807,	// (0x00031362) ncim_query_entry_pane_t1

0xc5c1,	// (0x0003611c) main_im_pane_ParamLimits

0xb0d8,	// (0x00034c33) main_mobtv_pane_ParamLimits

0xb0d8,	// (0x00034c33) main_mobtv_pane

0x720e,	// (0x00030d69) main_cset6_slider_pane_g18_ParamLimits

0x720e,	// (0x00030d69) main_cset6_slider_pane_g18

0x721a,	// (0x00030d75) main_cset6_slider_pane_g19_ParamLimits

0x721a,	// (0x00030d75) main_cset6_slider_pane_g19

0xc541,	// (0x0003609c) bg_main_mobtv_pane_ParamLimits

0xc541,	// (0x0003609c) bg_main_mobtv_pane

0x7819,	// (0x00031374) main_mobtv_info_pane

0x7822,	// (0x0003137d) main_mobtv_loading_pane_ParamLimits

0x7822,	// (0x0003137d) main_mobtv_loading_pane

0x782f,	// (0x0003138a) main_mobtv_pg_channel_list_pane

0x7839,	// (0x00031394) main_mobtv_pg_hdr_pane

0x7842,	// (0x0003139d) main_mobtv_programe_curr_pane_ParamLimits

0x7842,	// (0x0003139d) main_mobtv_programe_curr_pane

0x784f,	// (0x000313aa) main_mobtv_programe_next_pane_ParamLimits

0x784f,	// (0x000313aa) main_mobtv_programe_next_pane

0x785c,	// (0x000313b7) popup_mobtv_noti_window

0xc563,	// (0x000360be) main_tv_pg_hdr_pane_g1

0x7864,	// (0x000313bf) main_tv_pg_hdr_pane_g2

0x786c,	// (0x000313c7) main_tv_pg_hdr_pane_g3

0x7874,	// (0x000313cf) main_tv_pg_hdr_pane_g4

0x787c,	// (0x000313d7) main_tv_pg_hdr_pane_g5

0x7886,	// (0x000313e1) main_tv_pg_hdr_pane_g6

0x7890,	// (0x000313eb) main_tv_pg_hdr_pane_g7

0x789a,	// (0x000313f5) main_tv_pg_hdr_pane_g8

0x78a4,	// (0x000313ff) main_tv_pg_hdr_pane_g9

0x78ae,	// (0x00031409) main_tv_pg_hdr_pane_g10

0x78b8,	// (0x00031413) main_tv_pg_hdr_pane_g11

0x000a,

0xf9cc,	// (0x00039527) main_tv_pg_hdr_pane_g

0x78c2,	// (0x0003141d) main_tv_pg_hdr_pane_t1

0x78d0,	// (0x0003142b) main_tv_pg_hdr_pane_t2

0x78de,	// (0x00031439) main_tv_pg_hdr_pane_t3

0x78ee,	// (0x00031449) main_tv_pg_hdr_pane_t4

0x78fe,	// (0x00031459) main_tv_pg_hdr_pane_t5

0x0004,

0xf9e3,	// (0x0003953e) main_tv_pg_hdr_pane_t

0x790e,	// (0x00031469) single_mobtv_pg_channel_pane_ParamLimits

0x790e,	// (0x00031469) single_mobtv_pg_channel_pane

0x7920,	// (0x0003147b) single_mobtv_pg_channel_table_pane

0xcaee,	// (0x00036649) single_mobtv_pg_channel_thumb_pane

0x7929,	// (0x00031484) single_tv_pg_channel_pane_g1

0x7932,	// (0x0003148d) single_tv_pg_channel_pane_g2

0x0001,

0xf9ee,	// (0x00039549) single_tv_pg_channel_pane_g

0xc525,	// (0x00036080) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc525,	// (0x00036080) bg_single_mobtv_pg_channel_thumb_pane

0x793b,	// (0x00031496) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x793b,	// (0x00031496) single_mobtv_pg_channel_thumb_pane_g1

0x7949,	// (0x000314a4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x7949,	// (0x000314a4) single_mobtv_pg_channel_thumb_pane_g2

0x7955,	// (0x000314b0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x7955,	// (0x000314b0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf9f3,	// (0x0003954e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf9f3,	// (0x0003954e) single_mobtv_pg_channel_thumb_pane_g

0x7961,	// (0x000314bc) single_mobtv_pg_channel_thumb_pane_t1

0x796f,	// (0x000314ca) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf9fa,	// (0x00039555) single_mobtv_pg_channel_thumb_pane_t

0xc563,	// (0x000360be) bg_single_mobtv_pg_channel_table_pane_g1

0xc563,	// (0x000360be) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00038be7) bg_single_mobtv_pg_channel_table_pane_g

0x797d,	// (0x000314d8) single_mobtv_pg_channel_table_pane_t1

0x798b,	// (0x000314e6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9ff,	// (0x0003955a) single_mobtv_pg_channel_table_pane_t

0x79a1,	// (0x000314fc) main_mobtv_info_pane_g1_ParamLimits

0x79a1,	// (0x000314fc) main_mobtv_info_pane_g1

0x79bf,	// (0x0003151a) main_mobtv_info_pane_t1_ParamLimits

0x79bf,	// (0x0003151a) main_mobtv_info_pane_t1

0x7a37,	// (0x00031592) main_mobtv_info_pane_t2_ParamLimits

0x7a37,	// (0x00031592) main_mobtv_info_pane_t2

0x0002,

0xfa09,	// (0x00039564) main_mobtv_info_pane_t_ParamLimits

0xfa09,	// (0x00039564) main_mobtv_info_pane_t

0x7ac6,	// (0x00031621) wait_bar_pane_cp05

0x7ad8,	// (0x00031633) main_mobtv_loading_pane_g1_ParamLimits

0x7ad8,	// (0x00031633) main_mobtv_loading_pane_g1

0x7aeb,	// (0x00031646) main_mobtv_loading_pane_g2_ParamLimits

0x7aeb,	// (0x00031646) main_mobtv_loading_pane_g2

0x7af7,	// (0x00031652) main_mobtv_loading_pane_g3_ParamLimits

0x7af7,	// (0x00031652) main_mobtv_loading_pane_g3

0x0002,

0xfa10,	// (0x0003956b) main_mobtv_loading_pane_g_ParamLimits

0xfa10,	// (0x0003956b) main_mobtv_loading_pane_g

0x7b0a,	// (0x00031665) main_mobtv_loading_pane_t1_ParamLimits

0x7b0a,	// (0x00031665) main_mobtv_loading_pane_t1

0x7b22,	// (0x0003167d) main_mobtv_loading_pane_t2_ParamLimits

0x7b22,	// (0x0003167d) main_mobtv_loading_pane_t2

0x0001,

0xfa17,	// (0x00039572) main_mobtv_loading_pane_t_ParamLimits

0xfa17,	// (0x00039572) main_mobtv_loading_pane_t

0x7b46,	// (0x000316a1) wait_bar_pane_cp06_ParamLimits

0x7b46,	// (0x000316a1) wait_bar_pane_cp06

0x7b55,	// (0x000316b0) main_mobtv_programe_curr_pane_t1

0x7b63,	// (0x000316be) main_mobtv_programe_curr_pane_t2

0x0001,

0xfa1c,	// (0x00039577) main_mobtv_programe_curr_pane_t

0x7b71,	// (0x000316cc) main_mobtv_programe_next_pane_t1

0x7b7f,	// (0x000316da) main_mobtv_programe_next_pane_t2

0x7b8d,	// (0x000316e8) main_mobtv_programe_next_pane_t3

0x0002,

0xfa21,	// (0x0003957c) main_mobtv_programe_next_pane_t

0xbe24,	// (0x0003597f) bg_popup_mobtv_noti_window_pane

0x7b9b,	// (0x000316f6) popup_mobtv_noti_window_g1

0x7ba3,	// (0x000316fe) popup_mobtv_noti_window_t1

0x7bb1,	// (0x0003170c) popup_mobtv_noti_window_t2

0x0001,

0xfa28,	// (0x00039583) popup_mobtv_noti_window_t

0xc563,	// (0x000360be) bg_popup_mobtv_noti_window_pane_g1

0xb0e6,	// (0x00034c41) sc_clock_pane

0xb0e6,	// (0x00034c41) main_fs_bigclock_pane

0x6b95,	// (0x000306f0) blid2_tripm_pane_t4_ParamLimits

0x6b95,	// (0x000306f0) blid2_tripm_pane_t4

0xc525,	// (0x00036080) sc_clock_pane_g1_ParamLimits

0xc525,	// (0x00036080) sc_clock_pane_g1

0xc56d,	// (0x000360c8) sc_clock_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) sc_clock_pane_t1

0xc56d,	// (0x000360c8) sc_clock_pane_t2_ParamLimits

0xc56d,	// (0x000360c8) sc_clock_pane_t2

0xc56d,	// (0x000360c8) sc_clock_pane_t3_ParamLimits

0xc56d,	// (0x000360c8) sc_clock_pane_t3

0x0004,

0xfa2d,	// (0x00039588) sc_clock_pane_t_ParamLimits

0xfa2d,	// (0x00039588) sc_clock_pane_t

0x91dc,	// (0x00032d37) main_fs_bigclock_indicator_pane_ParamLimits

0x91dc,	// (0x00032d37) main_fs_bigclock_indicator_pane

0x7c0e,	// (0x00031769) main_fs_bigclock_pane_g1_ParamLimits

0x7c0e,	// (0x00031769) main_fs_bigclock_pane_g1

0x91e8,	// (0x00032d43) main_fs_bigclock_pane_t1_ParamLimits

0x91e8,	// (0x00032d43) main_fs_bigclock_pane_t1

0x91fa,	// (0x00032d55) main_fs_bigclock_pane_t2_ParamLimits

0x91fa,	// (0x00032d55) main_fs_bigclock_pane_t2

0x920e,	// (0x00032d69) main_fs_bigclock_pane_t3_ParamLimits

0x920e,	// (0x00032d69) main_fs_bigclock_pane_t3

0x0002,

0xfb8b,	// (0x000396e6) main_fs_bigclock_pane_t_ParamLimits

0xfb8b,	// (0x000396e6) main_fs_bigclock_pane_t

0x9220,	// (0x00032d7b) main_fs_bigclock_indicator_pane_g1

0x7633,	// (0x0003118e) ncim_query_content_pane_g2_ParamLimits

0x7633,	// (0x0003118e) ncim_query_content_pane_g2

0x0001,

0xf9ba,	// (0x00039515) ncim_query_content_pane_g_ParamLimits

0xf9ba,	// (0x00039515) ncim_query_content_pane_g

0xc56d,	// (0x000360c8) sc_clock_pane_t4_ParamLimits

0xc56d,	// (0x000360c8) sc_clock_pane_t4

0xb0d8,	// (0x00034c33) main_radioblah_pane

0xb647,	// (0x000351a2) cell_call4_button_pane_t1_copy1_ParamLimits

0xb647,	// (0x000351a2) cell_call4_button_pane_t1_copy1

0x74fa,	// (0x00031055) main_ncimui_pane_t1_ParamLimits

0x74fa,	// (0x00031055) main_ncimui_pane_t1

0x7514,	// (0x0003106f) main_ncimui_pane_t2_ParamLimits

0x7514,	// (0x0003106f) main_ncimui_pane_t2

0x0002,

0xf9b3,	// (0x0003950e) main_ncimui_pane_t_ParamLimits

0xf9b3,	// (0x0003950e) main_ncimui_pane_t

0xd343,	// (0x00036e9e) main_radioblah_anim_pane_ParamLimits

0xd343,	// (0x00036e9e) main_radioblah_anim_pane

0xd343,	// (0x00036e9e) main_radioblah_info_pane_ParamLimits

0xd343,	// (0x00036e9e) main_radioblah_info_pane

0xd32f,	// (0x00036e8a) main_radioblah_pane_t1_ParamLimits

0xd32f,	// (0x00036e8a) main_radioblah_pane_t1

0xd32f,	// (0x00036e8a) main_radioblah_pane_t2_ParamLimits

0xd32f,	// (0x00036e8a) main_radioblah_pane_t2

0x0003,

0xfa4e,	// (0x000395a9) main_radioblah_pane_t_ParamLimits

0xfa4e,	// (0x000395a9) main_radioblah_pane_t

0xc24b,	// (0x00035da6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc24b,	// (0x00035da6) main_radioblah_rocker_ctrl_pane

0xe96d,	// (0x000384c8) main_radioblah_info_pane_t1_ParamLimits

0xe96d,	// (0x000384c8) main_radioblah_info_pane_t1

0x7dc3,	// (0x0003191e) main_radioblah_info_pane_t2_ParamLimits

0x7dc3,	// (0x0003191e) main_radioblah_info_pane_t2

0x0003,

0xfa57,	// (0x000395b2) main_radioblah_info_pane_t_ParamLimits

0xfa57,	// (0x000395b2) main_radioblah_info_pane_t

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g1

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g2

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g3

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g4

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g5

0xc563,	// (0x000360be) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x074c,	// (0x0002a2a7) main_radioblah_rocker_ctrl_pane_g

0x7065,	// (0x00030bc0) main_cset_text2_pane_t1_copy1_ParamLimits

0xb68d,	// (0x000351e8) cam4_image_uncrop_qvga_pane

0xb6e0,	// (0x0003523b) vid4_image_uncrop_qcif_pane

0xb83e,	// (0x00035399) cam6_image_uncrop_qvga_pane_ParamLimits

0xb83e,	// (0x00035399) cam6_image_uncrop_qvga_pane

0x6f12,	// (0x00030a6d) vid6_image_uncrop_qcif_pane_ParamLimits

0x6f12,	// (0x00030a6d) vid6_image_uncrop_qcif_pane

0xbe24,	// (0x0003597f) bg_popup_preview_window_pane_cp03

0x74b0,	// (0x0003100b) list_cset_text2_pane

0x74b8,	// (0x00031013) main_cset6_text2_pane_g1

0x74c0,	// (0x0003101b) main_cset6_text2_pane_t1

0x7e12,	// (0x0003196d) list_cset_text2_pane_t1_ParamLimits

0x7e12,	// (0x0003196d) list_cset_text2_pane_t1

0xb0d8,	// (0x00034c33) main_radioblah_pane_ParamLimits

0x7ab2,	// (0x0003160d) main_mobtv_info_pane_t3_ParamLimits

0x7ab2,	// (0x0003160d) main_mobtv_info_pane_t3

0xd241,	// (0x00036d9c) main_radioblah_pane_g1

0x7d93,	// (0x000318ee) main_radioblah_info_pane_g1

0xc581,	// (0x000360dc) main_radioblah_info_pane_t3_ParamLimits

0xc581,	// (0x000360dc) main_radioblah_info_pane_t3

0x3441,	// (0x0002cf9c) highlight_cell_cale_month_pane_ParamLimits

0x3441,	// (0x0002cf9c) highlight_cell_cale_month_pane

0xb0e6,	// (0x00034c41) main_phob_fisheye_pane

0xec26,	// (0x00038781) scroll_pane_cp0031_ParamLimits

0xec26,	// (0x00038781) scroll_pane_cp0031

0x7056,	// (0x00030bb1) wait_bar_pane_cp08_ParamLimits

0x7108,	// (0x00030c63) cset_list_set_pane_copy1_ParamLimits

0x7e2d,	// (0x00031988) highlight_cell_cale_month_pane_g1

0x7e35,	// (0x00031990) highlight_cell_cale_month_pane_t1

0x67ac,	// (0x00030307) list_gen_pane_cp01

0x5ae3,	// (0x0002f63e) scroll_pane_01

0x7e43,	// (0x0003199e) list_single_double_fisheye_pane

0x7e4c,	// (0x000319a7) list_double_fisheye_pane_g1_ParamLimits

0x7e4c,	// (0x000319a7) list_double_fisheye_pane_g1

0x7e58,	// (0x000319b3) list_double_fisheye_pane_g2_ParamLimits

0x7e58,	// (0x000319b3) list_double_fisheye_pane_g2

0x7e6c,	// (0x000319c7) list_double_fisheye_pane_g3_ParamLimits

0x7e6c,	// (0x000319c7) list_double_fisheye_pane_g3

0x0004,

0xfa60,	// (0x000395bb) list_double_fisheye_pane_g_ParamLimits

0xfa60,	// (0x000395bb) list_double_fisheye_pane_g

0x7e95,	// (0x000319f0) list_double_fisheye_pane_t1_ParamLimits

0x7e95,	// (0x000319f0) list_double_fisheye_pane_t1

0x7eb0,	// (0x00031a0b) list_double_fisheye_pane_t2_ParamLimits

0x7eb0,	// (0x00031a0b) list_double_fisheye_pane_t2

0x0001,

0xfa6b,	// (0x000395c6) list_double_fisheye_pane_t_ParamLimits

0xfa6b,	// (0x000395c6) list_double_fisheye_pane_t

0xb0e6,	// (0x00034c41) main_call5_pane

0xc24b,	// (0x00035da6) sc_swipe_pane_ParamLimits

0xc24b,	// (0x00035da6) sc_swipe_pane

0x7ee5,	// (0x00031a40) call5_image_pane_ParamLimits

0x7ee5,	// (0x00031a40) call5_image_pane

0x7f02,	// (0x00031a5d) call5_swipe_1_pane_ParamLimits

0x7f02,	// (0x00031a5d) call5_swipe_1_pane

0x7f15,	// (0x00031a70) call5_swipe_2_pane_ParamLimits

0x7f15,	// (0x00031a70) call5_swipe_2_pane

0x7f40,	// (0x00031a9b) popup_call5_audio_first_window_ParamLimits

0x7f40,	// (0x00031a9b) popup_call5_audio_first_window

0xc525,	// (0x00036080) call5_swipe_1_pane_g1_ParamLimits

0xc525,	// (0x00036080) call5_swipe_1_pane_g1

0x7f51,	// (0x00031aac) call5_swipe_1_pane_g2_ParamLimits

0x7f51,	// (0x00031aac) call5_swipe_1_pane_g2

0x0001,

0xfa70,	// (0x000395cb) call5_swipe_1_pane_g_ParamLimits

0xfa70,	// (0x000395cb) call5_swipe_1_pane_g

0x7f5d,	// (0x00031ab8) call5_swipe_1_pane_t1_ParamLimits

0x7f5d,	// (0x00031ab8) call5_swipe_1_pane_t1

0xc525,	// (0x00036080) call5_swipe_2_pane_g1_ParamLimits

0xc525,	// (0x00036080) call5_swipe_2_pane_g1

0x7f72,	// (0x00031acd) call5_swipe_2_pane_g2_ParamLimits

0x7f72,	// (0x00031acd) call5_swipe_2_pane_g2

0x0001,

0xfa75,	// (0x000395d0) call5_swipe_2_pane_g_ParamLimits

0xfa75,	// (0x000395d0) call5_swipe_2_pane_g

0x7f7e,	// (0x00031ad9) call5_swipe_2_pane_t1_ParamLimits

0x7f7e,	// (0x00031ad9) call5_swipe_2_pane_t1

0xc525,	// (0x00036080) sc_swipe_pane_g1_ParamLimits

0xc525,	// (0x00036080) sc_swipe_pane_g1

0xc533,	// (0x0003608e) sc_swipe_pane_g2_ParamLimits

0xc533,	// (0x0003608e) sc_swipe_pane_g2

0x0001,

0x0773,	// (0x0002a2ce) sc_swipe_pane_g_ParamLimits

0x0773,	// (0x0002a2ce) sc_swipe_pane_g

0xc56d,	// (0x000360c8) sc_swipe_pane_t1_ParamLimits

0xc56d,	// (0x000360c8) sc_swipe_pane_t1

0xb0e6,	// (0x00034c41) main_cmail_launcher_pane

0x7f93,	// (0x00031aee) aid_size_cell_cmail_l_ParamLimits

0x7f93,	// (0x00031aee) aid_size_cell_cmail_l

0x7fa1,	// (0x00031afc) grid_cmail_l_pane_ParamLimits

0x7fa1,	// (0x00031afc) grid_cmail_l_pane

0x7fbb,	// (0x00031b16) cell_cmail_l_pane_ParamLimits

0x7fbb,	// (0x00031b16) cell_cmail_l_pane

0x7fd5,	// (0x00031b30) cell_cmail_l_pane_g1_ParamLimits

0x7fd5,	// (0x00031b30) cell_cmail_l_pane_g1

0x7fe1,	// (0x00031b3c) cell_cmail_l_pane_t1_ParamLimits

0x7fe1,	// (0x00031b3c) cell_cmail_l_pane_t1

0x7ff7,	// (0x00031b52) cell_cmail_l_pane_t2_ParamLimits

0x7ff7,	// (0x00031b52) cell_cmail_l_pane_t2

0x0001,

0xfa7a,	// (0x000395d5) cell_cmail_l_pane_t_ParamLimits

0xfa7a,	// (0x000395d5) cell_cmail_l_pane_t

0xc24b,	// (0x00035da6) grid_highlight_pane_cp018_ParamLimits

0xc24b,	// (0x00035da6) grid_highlight_pane_cp018

0x0ac7,	// (0x0002a622) main2_pane_ParamLimits

0x0ac7,	// (0x0002a622) main2_pane

0xc650,	// (0x000361ab) popup_sp_fs_action_menu_bg_pane_g1

0xc658,	// (0x000361b3) popup_sp_fs_action_menu_bg_pane_g2

0xc660,	// (0x000361bb) popup_sp_fs_action_menu_bg_pane_g3

0xc668,	// (0x000361c3) popup_sp_fs_action_menu_bg_pane_g4

0xc670,	// (0x000361cb) popup_sp_fs_action_menu_bg_pane_g5

0xc678,	// (0x000361d3) popup_sp_fs_action_menu_bg_pane_g6

0xc680,	// (0x000361db) popup_sp_fs_action_menu_bg_pane_g7

0xc688,	// (0x000361e3) popup_sp_fs_action_menu_bg_pane_g8

0xc699,	// (0x000361f4) popup_sp_fs_action_menu_bg_pane_g9

0xc6a1,	// (0x000361fc) popup_sp_fs_action_menu_bg_pane_g10

0xc6a1,	// (0x000361fc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00038c38) popup_sp_fs_action_menu_bg_pane_g

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g1

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g2

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00038ce6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00038ce6) list_medium_line_x2_t3_g3_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t2

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g3_t

0xc525,	// (0x00036080) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g2_g1

0xc525,	// (0x00036080) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_x2_t3_g2_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t2

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g2_t

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g1

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g2

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g3

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00038cf9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00038cf9) list_medium_line_x2_t4_g4_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t2

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t3

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038d02) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038d02) list_medium_line_x2_t4_g4_t

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g1

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g2

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g3

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00038cf9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00038cf9) list_medium_line_x2_t2_g4_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g4_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g4_t

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g1

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g2

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00038ce6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00038ce6) list_medium_line_x2_t2_g3_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g3_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g3_t

0x358c,	// (0x0002d0e7) main_sp_fs_list_pane_ParamLimits

0x358c,	// (0x0002d0e7) main_sp_fs_list_pane

0x3598,	// (0x0002d0f3) sp_fs_scroll_pane_ParamLimits

0x3598,	// (0x0002d0f3) sp_fs_scroll_pane

0xccc7,	// (0x00036822) list_medium_line_x2_t3_t1

0xccc7,	// (0x00036822) list_medium_line_x2_t3_t2

0xccc7,	// (0x00036822) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x00038daf) list_medium_line_x2_t3_t

0xccc7,	// (0x00036822) list_medium_line_x3_t4_t1

0xccc7,	// (0x00036822) list_medium_line_x3_t4_t2

0xccc7,	// (0x00036822) list_medium_line_x3_t4_t3

0xccc7,	// (0x00036822) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x00038db6) list_medium_line_x3_t4_t

0xccc7,	// (0x00036822) list_medium_line_x4_t5_t1

0xccc7,	// (0x00036822) list_medium_line_x4_t5_t2

0xccc7,	// (0x00036822) list_medium_line_x4_t5_t3

0xccc7,	// (0x00036822) list_medium_line_x4_t5_t4

0xccc7,	// (0x00036822) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x00038dbf) list_medium_line_x4_t5_t

0xc525,	// (0x00036080) list_medium_line_t4_g4_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t4_g4_g1

0xc525,	// (0x00036080) list_medium_line_t4_g4_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t4_g4_g2

0xc525,	// (0x00036080) list_medium_line_t4_g4_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t4_g4_g3

0xc525,	// (0x00036080) list_medium_line_t4_g4_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00038cf9) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00038cf9) list_medium_line_t4_g4_g

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t1

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t2

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t3

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t4_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038d02) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038d02) list_medium_line_t4_g4_t

0x3643,	// (0x0002d19e) chi_dic_find_pane_g1

0x0f2e,	// (0x0002aa89) main_tport_pane

0xccc7,	// (0x00036822) list_medium_line_plain_t1

0xc525,	// (0x00036080) list_medium_line_t2_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g2_g1

0xc525,	// (0x00036080) list_medium_line_t2_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_t2_g2_g

0xc56d,	// (0x000360c8) list_medium_line_t2_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_g2_t1

0xc56d,	// (0x000360c8) list_medium_line_t2_g2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_t2_g2_t

0x6866,	// (0x000303c1) aid_sp_fs_list_icon_a_sm

0x686e,	// (0x000303c9) aid_sp_fs_list_icon_d

0x6876,	// (0x000303d1) aid_sp_fs_text_primary

0x687f,	// (0x000303da) aid_sp_fs_text_secondary

0xbe24,	// (0x0003597f) list_medium_line

0xbe24,	// (0x0003597f) list_medium_line_g2

0xbe24,	// (0x0003597f) list_medium_line_g3

0xbe24,	// (0x0003597f) list_medium_line_plain

0xbe24,	// (0x0003597f) list_medium_line_plain_t2

0xbe24,	// (0x0003597f) list_medium_line_plain_t3

0xbe24,	// (0x0003597f) list_medium_line_right_icon

0xbe24,	// (0x0003597f) list_medium_line_right_iconx2

0xbe24,	// (0x0003597f) list_medium_line_t2

0xbe24,	// (0x0003597f) list_medium_line_t2_g2

0xbe24,	// (0x0003597f) list_medium_line_t2_g3

0xbe24,	// (0x0003597f) list_medium_line_t2_right_icon

0xbe24,	// (0x0003597f) list_medium_line_t2_right_iconx2

0xbe24,	// (0x0003597f) list_medium_line_t3

0xbe24,	// (0x0003597f) list_medium_line_t3_g2

0xbe24,	// (0x0003597f) list_medium_line_t3_g3

0xbe24,	// (0x0003597f) list_medium_line_t3_right_iconx2

0xbe24,	// (0x0003597f) list_medium_line_t4_g4

0xbe24,	// (0x0003597f) list_medium_line_x2

0xbe24,	// (0x0003597f) list_medium_line_x2_t2_g2

0xbe24,	// (0x0003597f) list_medium_line_x2_t2_g3

0xbe24,	// (0x0003597f) list_medium_line_x2_t2_g4

0xbe24,	// (0x0003597f) list_medium_line_x2_t3

0xbe24,	// (0x0003597f) list_medium_line_x2_t3_g2

0xbe24,	// (0x0003597f) list_medium_line_x2_t3_g3

0xbe24,	// (0x0003597f) list_medium_line_x2_t3_g4

0xbe24,	// (0x0003597f) list_medium_line_x2_t4_g2

0xbe24,	// (0x0003597f) list_medium_line_x2_t4_g4

0xbe24,	// (0x0003597f) list_medium_line_x3

0xbe24,	// (0x0003597f) list_medium_line_x3_t4

0xbe24,	// (0x0003597f) list_medium_line_x3_t4_g4

0xbe24,	// (0x0003597f) list_medium_line_x4_t4

0xbe24,	// (0x0003597f) list_medium_line_x4_t4_g7

0xbe24,	// (0x0003597f) list_medium_line_x4_t5

0x6888,	// (0x000303e3) list_single_fs_dyc_pane_ParamLimits

0x6888,	// (0x000303e3) list_single_fs_dyc_pane

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g1

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g2

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g3

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g4

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g5

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x4_t4_g7_g6

0xc533,	// (0x0003608e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc533,	// (0x0003608e) list_medium_line_x4_t4_g7_g7

0x0006,

0x0680,	// (0x0002a1db) list_medium_line_x4_t4_g7_g_ParamLimits

0x0680,	// (0x0002a1db) list_medium_line_x4_t4_g7_g

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t1

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t2

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x4_t4_g7_t3

0xc581,	// (0x000360dc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc581,	// (0x000360dc) list_medium_line_x4_t4_g7_t4

0xc581,	// (0x000360dc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc581,	// (0x000360dc) list_medium_line_x4_t4_g7_t5

0x0004,

0x068f,	// (0x0002a1ea) list_medium_line_x4_t4_g7_t_ParamLimits

0x068f,	// (0x0002a1ea) list_medium_line_x4_t4_g7_t

0x7466,	// (0x00030fc1) list_single_dyc_row_pane_ParamLimits

0x7466,	// (0x00030fc1) list_single_dyc_row_pane

0x7ed2,	// (0x00031a2d) call5_gesture_pane_ParamLimits

0x7ed2,	// (0x00031a2d) call5_gesture_pane

0x7f28,	// (0x00031a83) call5_windows_pane_ParamLimits

0x7f28,	// (0x00031a83) call5_windows_pane

0x8014,	// (0x00031b6f) call5_swipe_1_pane_cp_ParamLimits

0x8014,	// (0x00031b6f) call5_swipe_1_pane_cp

0x8020,	// (0x00031b7b) call5_swipe_2_pane_cp_ParamLimits

0x8020,	// (0x00031b7b) call5_swipe_2_pane_cp

0xc7c9,	// (0x00036324) call5_image_pane_cp

0x802c,	// (0x00031b87) popup_call5_audio_first_window_cp_ParamLimits

0x802c,	// (0x00031b87) popup_call5_audio_first_window_cp

0x803a,	// (0x00031b95) call5_swipe_1_pane_g1_cp_ParamLimits

0x803a,	// (0x00031b95) call5_swipe_1_pane_g1_cp

0x8047,	// (0x00031ba2) call5_swipe_1_pane_g2_cp

0x804f,	// (0x00031baa) call5_swipe_1_pane_t1_cp_ParamLimits

0x804f,	// (0x00031baa) call5_swipe_1_pane_t1_cp

0x803a,	// (0x00031b95) call5_swipe_2_pane_g1_cp_ParamLimits

0x803a,	// (0x00031b95) call5_swipe_2_pane_g1_cp

0x8064,	// (0x00031bbf) call5_swipe_2_pane_g2_cp

0x806c,	// (0x00031bc7) call5_swipe_2_pane_t1_cp_ParamLimits

0x806c,	// (0x00031bc7) call5_swipe_2_pane_t1_cp

0xc24b,	// (0x00035da6) main_sp_fs_email_pane

0x8081,	// (0x00031bdc) main_sp_fs_listscroll_pane_te

0x808a,	// (0x00031be5) popup_sp_fs_action_menu_pane_ParamLimits

0x808a,	// (0x00031be5) popup_sp_fs_action_menu_pane

0xc563,	// (0x000360be) bg_sp_fs_ctrlbar_pane_g1

0x80cc,	// (0x00031c27) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x80d5,	// (0x00031c30) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe422,	// (0x00037f7d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc563,	// (0x000360be) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa7f,	// (0x000395da) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe532,	// (0x0003808d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe532,	// (0x0003808d) bg_sp_fs_ctrlbar_ddmenu_pane

0x80de,	// (0x00031c39) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x80de,	// (0x00031c39) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x80ea,	// (0x00031c45) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x80ea,	// (0x00031c45) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa88,	// (0x000395e3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa88,	// (0x000395e3) main_sp_fs_ctrlbar_ddmenu_pane_g

0x80f6,	// (0x00031c51) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x80f6,	// (0x00031c51) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc563,	// (0x000360be) list_medium_line_t2_right_icon_g1

0xccc7,	// (0x00036822) list_medium_line_t2_right_icon_t1

0xccc7,	// (0x00036822) list_medium_line_t2_right_icon_t2

0x0001,

0xfa8d,	// (0x000395e8) list_medium_line_t2_right_icon_t

0xd343,	// (0x00036e9e) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd343,	// (0x00036e9e) bg_sp_fs_ctrlbar_pane

0x8190,	// (0x00031ceb) main_sp_fs_ctrlbar_button_pane_cp01

0x819a,	// (0x00031cf5) main_sp_fs_ctrlbar_ddmenu_pane

0x81a4,	// (0x00031cff) main_sp_fs_ctrlbar_pane_g1

0x81b0,	// (0x00031d0b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfa92,	// (0x000395ed) main_sp_fs_ctrlbar_pane_g

0x81f0,	// (0x00031d4b) main_sp_fs_ctrlbar_pane_t1

0x822f,	// (0x00031d8a) main_sp_fs_ctrlbar_pane

0x826e,	// (0x00031dc9) main_sp_fs_listscroll_pane_te_cp01

0x8298,	// (0x00031df3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8298,	// (0x00031df3) popup_sp_fs_action_menu_pane_cp01

0xc24b,	// (0x00035da6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc24b,	// (0x00035da6) bg_sp_fs_highlight_list_pane_cp01

0x82bd,	// (0x00031e18) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x82bd,	// (0x00031e18) sp_fs_action_menu_list_gene_pane_g1

0x82cc,	// (0x00031e27) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x82cc,	// (0x00031e27) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfaa0,	// (0x000395fb) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfaa0,	// (0x000395fb) sp_fs_action_menu_list_gene_pane_g

0x82d9,	// (0x00031e34) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x82d9,	// (0x00031e34) sp_fs_action_menu_list_gene_pane_t1

0x82f1,	// (0x00031e4c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x82f1,	// (0x00031e4c) sp_fs_action_menu_list_gene_pane

0x8310,	// (0x00031e6b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x8310,	// (0x00031e6b) popup_sp_fs_action_menu_bg_pane

0x831e,	// (0x00031e79) sp_fs_action_menu_list_pane_ParamLimits

0x831e,	// (0x00031e79) sp_fs_action_menu_list_pane

0x833e,	// (0x00031e99) sp_fs_scroll_pane_cp01_ParamLimits

0x833e,	// (0x00031e99) sp_fs_scroll_pane_cp01

0xccc7,	// (0x00036822) list_medium_line_plain_t2_t1

0xccc7,	// (0x00036822) list_medium_line_plain_t2_t2

0x0001,

0xfa8d,	// (0x000395e8) list_medium_line_plain_t2_t

0xccc7,	// (0x00036822) list_medium_line_plain_t3_t1

0xccc7,	// (0x00036822) list_medium_line_plain_t3_t2

0xccc7,	// (0x00036822) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x00038daf) list_medium_line_plain_t3_t

0xc525,	// (0x00036080) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g2_g1

0xc525,	// (0x00036080) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_x2_t2_g2_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g2_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_x2_t2_g2_t

0xc525,	// (0x00036080) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g2_g1

0xc525,	// (0x00036080) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_x2_t4_g2_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t2

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t3

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00038d02) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00038d02) list_medium_line_x2_t4_g2_t

0xc563,	// (0x000360be) list_medium_line_t3_right_iconx2_g1

0xc563,	// (0x000360be) list_medium_line_t3_right_iconx2_g2

0xc563,	// (0x000360be) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x00038ecb) list_medium_line_t3_right_iconx2_g

0xccc7,	// (0x00036822) list_medium_line_t3_right_iconx2_t1

0xccc7,	// (0x00036822) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa8d,	// (0x000395e8) list_medium_line_t3_right_iconx2_t

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g1

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g2

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g3

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00038cf9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00038cf9) list_medium_line_x3_t4_g4_g

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t1

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t2

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t3

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00038d02) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00038d02) list_medium_line_x3_t4_g4_t

0x8364,	// (0x00031ebf) list_single_dyc_row_text_pane_t1_ParamLimits

0x8364,	// (0x00031ebf) list_single_dyc_row_text_pane_t1

0x83ad,	// (0x00031f08) list_single_dyc_row_text_pane_t2_ParamLimits

0x83ad,	// (0x00031f08) list_single_dyc_row_text_pane_t2

0x8423,	// (0x00031f7e) list_single_dyc_row_text_pane_t3_ParamLimits

0x8423,	// (0x00031f7e) list_single_dyc_row_text_pane_t3

0x0005,

0xfaa5,	// (0x00039600) list_single_dyc_row_text_pane_t_ParamLimits

0xfaa5,	// (0x00039600) list_single_dyc_row_text_pane_t

0x8506,	// (0x00032061) list_single_dyc_row_pane_g1_ParamLimits

0x8506,	// (0x00032061) list_single_dyc_row_pane_g1

0x8512,	// (0x0003206d) list_single_dyc_row_pane_g2_ParamLimits

0x8512,	// (0x0003206d) list_single_dyc_row_pane_g2

0x851e,	// (0x00032079) list_single_dyc_row_pane_g3_ParamLimits

0x851e,	// (0x00032079) list_single_dyc_row_pane_g3

0x8531,	// (0x0003208c) list_single_dyc_row_pane_g4_ParamLimits

0x8531,	// (0x0003208c) list_single_dyc_row_pane_g4

0x0006,

0xfab2,	// (0x0003960d) list_single_dyc_row_pane_g_ParamLimits

0xfab2,	// (0x0003960d) list_single_dyc_row_pane_g

0x8583,	// (0x000320de) list_single_dyc_row_text_pane_ParamLimits

0x8583,	// (0x000320de) list_single_dyc_row_text_pane

0xbe24,	// (0x0003597f) bg_sp_fs_scroll_pane

0x85a8,	// (0x00032103) thumb_sp_fs_scroll_pane

0xc525,	// (0x00036080) list_medium_line_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g1

0xc56d,	// (0x000360c8) list_medium_line_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t1

0xc525,	// (0x00036080) list_medium_line_x2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_g1

0xc525,	// (0x00036080) list_medium_line_x2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_x2_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t1

0xc525,	// (0x00036080) list_medium_line_x3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x3_g1

0x55d1,	// (0x0002f12c) list_medium_line_x3_g2_ParamLimits

0x55d1,	// (0x0002f12c) list_medium_line_x3_g2

0x0001,

0xfac1,	// (0x0003961c) list_medium_line_x3_g_ParamLimits

0xfac1,	// (0x0003961c) list_medium_line_x3_g

0x85b1,	// (0x0003210c) list_medium_line_x3_t1_ParamLimits

0x85b1,	// (0x0003210c) list_medium_line_x3_t1

0x85c5,	// (0x00032120) thumb_sp_fs_scroll_pane_g1

0x85ce,	// (0x00032129) thumb_sp_fs_scroll_pane_g2

0x85d7,	// (0x00032132) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfac6,	// (0x00039621) thumb_sp_fs_scroll_pane_g

0x85c5,	// (0x00032120) bg_sp_fs_scroll_pane_g1

0x85ce,	// (0x00032129) bg_sp_fs_scroll_pane_g2

0x85d7,	// (0x00032132) bg_sp_fs_scroll_pane_g3

0x0002,

0xfac6,	// (0x00039621) bg_sp_fs_scroll_pane_g

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g1

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g2

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g3

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc525,	// (0x00036080) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00038cf9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00038cf9) list_medium_line_x2_t3_g4_g

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t1

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t2

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_x2_t3_g4_t

0xc525,	// (0x00036080) list_medium_line_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g2_g1

0xc525,	// (0x00036080) list_medium_line_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_g2_g

0xc56d,	// (0x000360c8) list_medium_line_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_g2_t1

0xc525,	// (0x00036080) list_medium_line_t3_g2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g2_g1

0xc525,	// (0x00036080) list_medium_line_t3_g2_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00038cf4) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00038cf4) list_medium_line_t3_g2_g

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t1

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t2

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_t3_g2_t

0xc563,	// (0x000360be) list_medium_line_right_icon_g1

0xccc7,	// (0x00036822) list_medium_line_right_icon_t1

0xc525,	// (0x00036080) list_medium_line_t2_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g1

0xc56d,	// (0x000360c8) list_medium_line_t2_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_t1

0xc56d,	// (0x000360c8) list_medium_line_t2_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_t2_t

0xc525,	// (0x00036080) list_medium_line_t3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g1

0xc56d,	// (0x000360c8) list_medium_line_t3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_t1

0xc56d,	// (0x000360c8) list_medium_line_t3_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_t2

0xc56d,	// (0x000360c8) list_medium_line_t3_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_t3_t

0xc525,	// (0x00036080) list_medium_line_g3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g3_g1

0xc525,	// (0x00036080) list_medium_line_g3_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g3_g2

0xc525,	// (0x00036080) list_medium_line_g3_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00038ce6) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00038ce6) list_medium_line_g3_g

0xc56d,	// (0x000360c8) list_medium_line_g3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_g3_t1

0xc525,	// (0x00036080) list_medium_line_t2_g3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g3_g1

0xc525,	// (0x00036080) list_medium_line_t2_g3_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g3_g2

0xc525,	// (0x00036080) list_medium_line_t2_g3_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00038ce6) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00038ce6) list_medium_line_t2_g3_g

0xc56d,	// (0x000360c8) list_medium_line_t2_g3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_g3_t1

0xc56d,	// (0x000360c8) list_medium_line_t2_g3_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x00038cc9) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x00038cc9) list_medium_line_t2_g3_t

0xc525,	// (0x00036080) list_medium_line_t3_g3_g1_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g3_g1

0xc525,	// (0x00036080) list_medium_line_t3_g3_g2_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g3_g2

0xc525,	// (0x00036080) list_medium_line_t3_g3_g3_ParamLimits

0xc525,	// (0x00036080) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00038ce6) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00038ce6) list_medium_line_t3_g3_g

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t1_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t1

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t2_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t2

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t3_ParamLimits

0xc56d,	// (0x000360c8) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00038ced) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00038ced) list_medium_line_t3_g3_t

0xc563,	// (0x000360be) list_medium_line_right_iconx2_g1

0xc563,	// (0x000360be) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00038be7) list_medium_line_right_iconx2_g

0xccc7,	// (0x00036822) list_medium_line_right_iconx2_t1

0xc563,	// (0x000360be) list_medium_line_t2_right_iconx2_g1

0xc563,	// (0x000360be) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00038be7) list_medium_line_t2_right_iconx2_g

0xccc7,	// (0x00036822) list_medium_line_t2_right_iconx2_t1

0xccc7,	// (0x00036822) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa8d,	// (0x000395e8) list_medium_line_t2_right_iconx2_t

0xccc7,	// (0x00036822) list_medium_line_x4_t4_t1

0xccc7,	// (0x00036822) list_medium_line_x4_t4_t2

0xccc7,	// (0x00036822) list_medium_line_x4_t4_t3

0xccc7,	// (0x00036822) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x00038db6) list_medium_line_x4_t4_t

0x8623,	// (0x0003217e) tport_appsw_pane_ParamLimits

0x8623,	// (0x0003217e) tport_appsw_pane

0x863b,	// (0x00032196) tport_contact_pane_ParamLimits

0x863b,	// (0x00032196) tport_contact_pane

0x8653,	// (0x000321ae) tport_listscroll_pane_ParamLimits

0x8653,	// (0x000321ae) tport_listscroll_pane

0x866d,	// (0x000321c8) cell_tport_appsw_pane_ParamLimits

0x866d,	// (0x000321c8) cell_tport_appsw_pane

0xd241,	// (0x00036d9c) tport_appsw_pane_g1_ParamLimits

0xd241,	// (0x00036d9c) tport_appsw_pane_g1

0x86ad,	// (0x00032208) tport_contact_pane_g1

0x86b6,	// (0x00032211) tport_contact_pane_t1

0x86c4,	// (0x0003221f) tport_contact_pane_t2

0x0001,

0xfacd,	// (0x00039628) tport_contact_pane_t

0x86d2,	// (0x0003222d) list_tport_pane

0x86db,	// (0x00032236) scroll_pane_cp_030

0x86ec,	// (0x00032247) cell_tport_appsw_pane_g1

0x86fc,	// (0x00032257) cell_tport_appsw_pane_t1

0x870a,	// (0x00032265) grid_highlight_pane_cp019

0x8712,	// (0x0003226d) list_tport_double_graphic_pane_ParamLimits

0x8712,	// (0x0003226d) list_tport_double_graphic_pane

0xc24b,	// (0x00035da6) list_highlight_pane_cp023_ParamLimits

0xc24b,	// (0x00035da6) list_highlight_pane_cp023

0x871f,	// (0x0003227a) list_tport_double_graphic_pane_g1_ParamLimits

0x871f,	// (0x0003227a) list_tport_double_graphic_pane_g1

0x872c,	// (0x00032287) list_tport_double_graphic_pane_t1_ParamLimits

0x872c,	// (0x00032287) list_tport_double_graphic_pane_t1

0x8741,	// (0x0003229c) list_tport_double_graphic_pane_t2_ParamLimits

0x8741,	// (0x0003229c) list_tport_double_graphic_pane_t2

0x0001,

0xfad9,	// (0x00039634) list_tport_double_graphic_pane_t_ParamLimits

0xfad9,	// (0x00039634) list_tport_double_graphic_pane_t

0xbe24,	// (0x0003597f) main_cale_note_pane

0x1b2e,	// (0x0002b689) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1b2e,	// (0x0002b689) cell_vitu2_function_top_wide_pane_cp01

0x7ac6,	// (0x00031621) wait_bar_pane_cp05_ParamLimits

0xc24b,	// (0x00035da6) listscroll_cmail_pane

0x875b,	// (0x000322b6) list_cmail_pane

0x8772,	// (0x000322cd) list_cmail_body_pane

0x8788,	// (0x000322e3) list_single_cmail_header_caption_pane

0x879f,	// (0x000322fa) list_single_cmail_header_detail_pane_ParamLimits

0x879f,	// (0x000322fa) list_single_cmail_header_detail_pane

0x87cd,	// (0x00032328) list_single_cmail_header_caption_pane_t1

0x87e4,	// (0x0003233f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x87e4,	// (0x0003233f) list_single_cmail_header_detail_pane_g1

0x87fc,	// (0x00032357) list_single_cmail_header_detail_pane_g2_ParamLimits

0x87fc,	// (0x00032357) list_single_cmail_header_detail_pane_g2

0x0002,

0xfade,	// (0x00039639) list_single_cmail_header_detail_pane_g_ParamLimits

0xfade,	// (0x00039639) list_single_cmail_header_detail_pane_g

0x8815,	// (0x00032370) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8815,	// (0x00032370) list_single_cmail_header_detail_pane_t1

0x8877,	// (0x000323d2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8877,	// (0x000323d2) list_single_cmail_header_editor_pane_bg

0x7932,	// (0x0003148d) list_cmail_body_pane_g1

0x8890,	// (0x000323eb) list_cmail_body_pane_t1

0x568d,	// (0x0002f1e8) list_single_cmail_header_editor_pane_bg_g1

0xc9e2,	// (0x0003653d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x569d,	// (0x0002f1f8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x5695,	// (0x0002f1f0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5fc5,	// (0x0002fb20) list_single_cmail_header_editor_pane_bg_g1_copy4

0x56bd,	// (0x0002f218) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x56ad,	// (0x0002f208) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x56b5,	// (0x0002f210) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc9c2,	// (0x0003651d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x889e,	// (0x000323f9) calenote_gesture_pane_ParamLimits

0x889e,	// (0x000323f9) calenote_gesture_pane

0x88be,	// (0x00032419) calenote_window_pane_ParamLimits

0x88be,	// (0x00032419) calenote_window_pane

0x88da,	// (0x00032435) popup_note_window_cp01

0x88e3,	// (0x0003243e) calenote_swipe_1_pane_ParamLimits

0x88e3,	// (0x0003243e) calenote_swipe_1_pane

0x8020,	// (0x00031b7b) calenote_swipe_2_pane_ParamLimits

0x8020,	// (0x00031b7b) calenote_swipe_2_pane

0x803a,	// (0x00031b95) calenote_swipe_1_pane_g1_ParamLimits

0x803a,	// (0x00031b95) calenote_swipe_1_pane_g1

0x8901,	// (0x0003245c) calenote_swipe_1_pane_g2_ParamLimits

0x8901,	// (0x0003245c) calenote_swipe_1_pane_g2

0x0001,

0xfaea,	// (0x00039645) calenote_swipe_1_pane_g_ParamLimits

0xfaea,	// (0x00039645) calenote_swipe_1_pane_g

0x890d,	// (0x00032468) calenote_swipe_1_pane_t1_ParamLimits

0x890d,	// (0x00032468) calenote_swipe_1_pane_t1

0x803a,	// (0x00031b95) calenote_swipe_2_pane_g1_ParamLimits

0x803a,	// (0x00031b95) calenote_swipe_2_pane_g1

0x892c,	// (0x00032487) calenote_swipe_2_pane_g2_ParamLimits

0x892c,	// (0x00032487) calenote_swipe_2_pane_g2

0x0001,

0xfaef,	// (0x0003964a) calenote_swipe_2_pane_g_ParamLimits

0xfaef,	// (0x0003964a) calenote_swipe_2_pane_g

0x8938,	// (0x00032493) calenote_swipe_2_pane_t1_ParamLimits

0x8938,	// (0x00032493) calenote_swipe_2_pane_t1

0xbe24,	// (0x0003597f) main_mup_navstr_pane

0x4e55,	// (0x0002e9b0) main_mup3_pane_t7_ParamLimits

0x4e55,	// (0x0002e9b0) main_mup3_pane_t7

0xb40b,	// (0x00034f66) main_mp4_pane_g6_ParamLimits

0xb40b,	// (0x00034f66) main_mp4_pane_g6

0xb635,	// (0x00035190) main_image3_pane_t4_ParamLimits

0xb635,	// (0x00035190) main_image3_pane_t4

0x895f,	// (0x000324ba) popup_navstr_preview_pane_ParamLimits

0x895f,	// (0x000324ba) popup_navstr_preview_pane

0x8973,	// (0x000324ce) scroll_navstr_pane_ParamLimits

0x8973,	// (0x000324ce) scroll_navstr_pane

0xbe24,	// (0x0003597f) bg_popup_preview_window_pane_cp04

0x8987,	// (0x000324e2) popup_navstr_preview_pane_t1

0x8995,	// (0x000324f0) scroll_navstr_pane_g1_ParamLimits

0x8995,	// (0x000324f0) scroll_navstr_pane_g1

0x89a9,	// (0x00032504) scroll_navstr_pane_t1_ParamLimits

0x89a9,	// (0x00032504) scroll_navstr_pane_t1

0x88f8,	// (0x00032453) bg_button_pane_cp014

0x88f8,	// (0x00032453) bg_button_pane_cp030

0x7e78,	// (0x000319d3) list_double_fisheye_pane_g4_ParamLimits

0x7e78,	// (0x000319d3) list_double_fisheye_pane_g4

0x7e84,	// (0x000319df) list_double_fisheye_pane_g5_ParamLimits

0x7e84,	// (0x000319df) list_double_fisheye_pane_g5

0x3598,	// (0x0002d0f3) sp_fs_scroll_pane_cp03

0x81a4,	// (0x00031cff) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x81b0,	// (0x00031d0b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa92,	// (0x000395ed) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x81f0,	// (0x00031d4b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x876a,	// (0x000322c5) sp_fs_scroll_pane_cp02

0xc71a,	// (0x00036275) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc71a,	// (0x00036275) popup_sp_fs_calendar_preview_list_single_pane

0xbe24,	// (0x0003597f) main_cam6_pano_pane

0xb0d8,	// (0x00034c33) main_mup3_pane_ParamLimits

0xbe24,	// (0x0003597f) main_phacti_pane

0x7999,	// (0x000314f4) bg_button_pane_cp11

0x79b3,	// (0x0003150e) main_mobtv_info_pane_g2_ParamLimits

0x79b3,	// (0x0003150e) main_mobtv_info_pane_g2

0x0001,

0xfa04,	// (0x0003955f) main_mobtv_info_pane_g_ParamLimits

0xfa04,	// (0x0003955f) main_mobtv_info_pane_g

0xc56d,	// (0x000360c8) sc_clock_pane_t5_ParamLimits

0xc56d,	// (0x000360c8) sc_clock_pane_t5

0xd241,	// (0x00036d9c) main_radioblah_pane_g1_ParamLimits

0xd32f,	// (0x00036e8a) main_radioblah_pane_t3_ParamLimits

0xd32f,	// (0x00036e8a) main_radioblah_pane_t3

0xd32f,	// (0x00036e8a) main_radioblah_pane_t4_ParamLimits

0xd32f,	// (0x00036e8a) main_radioblah_pane_t4

0xc24b,	// (0x00035da6) main_radioblah_text_pane_ParamLimits

0xc24b,	// (0x00035da6) main_radioblah_text_pane

0x7d93,	// (0x000318ee) main_radioblah_info_pane_g1_ParamLimits

0x7dd7,	// (0x00031932) main_radioblah_info_pane_t4_ParamLimits

0x7dd7,	// (0x00031932) main_radioblah_info_pane_t4

0xc24b,	// (0x00035da6) main_sp_fs_calendar_pane

0x89c0,	// (0x0003251b) main_phacti_pane_g1

0x89d1,	// (0x0003252c) phacti_note_pane_ParamLimits

0x89d1,	// (0x0003252c) phacti_note_pane

0x89e5,	// (0x00032540) phacti_term_pane_ParamLimits

0x89e5,	// (0x00032540) phacti_term_pane

0x89fa,	// (0x00032555) phacti_note_pane_t1_ParamLimits

0x89fa,	// (0x00032555) phacti_note_pane_t1

0x8a11,	// (0x0003256c) phacti_term_pane_g1

0x8a19,	// (0x00032574) phacti_term_pane_t1_ParamLimits

0x8a19,	// (0x00032574) phacti_term_pane_t1

0x8a43,	// (0x0003259e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x8a4b,	// (0x000325a6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfaf9,	// (0x00039654) popup_sp_fs_calendar_preview_list_single_pane_g

0x8a53,	// (0x000325ae) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x8a53,	// (0x000325ae) popup_sp_fs_calendar_preview_list_single_pane_t1

0x8a69,	// (0x000325c4) aid_popup_sp_fs_bg_corner_pane

0xc563,	// (0x000360be) popup_sp_fs_calendar_preview_bg_pane_g1

0xbe24,	// (0x0003597f) popup_sp_fs_calendar_preview_bg_pane

0x8a71,	// (0x000325cc) popup_sp_fs_calendar_preview_list_pane

0x8a8e,	// (0x000325e9) bg_main_sp_fs_cale_pane_ParamLimits

0x8a8e,	// (0x000325e9) bg_main_sp_fs_cale_pane

0x8aa6,	// (0x00032601) listscroll_cale_mrui_pane_ParamLimits

0x8aa6,	// (0x00032601) listscroll_cale_mrui_pane

0xebe2,	// (0x0003873d) listscroll_sp_fs_schedule_track_pane

0x8abe,	// (0x00032619) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8abe,	// (0x00032619) main_sp_fs_ctrlbar_pane_cp01

0xebe2,	// (0x0003873d) main_sp_fs_ribbon_pane

0x8ad4,	// (0x0003262f) popup_sp_fs_cale_preview_window

0x8ae6,	// (0x00032641) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ae6,	// (0x00032641) list_single_sp_fs_schedule_track_pane

0x4f53,	// (0x0002eaae) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4f53,	// (0x0002eaae) bg_sp_fs_highlight_list_pane_cp03

0x4b0e,	// (0x0002e669) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x4b0e,	// (0x0002e669) list_single_sp_fs_schedule_track_pane_g1

0x4b0e,	// (0x0002e669) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x4b0e,	// (0x0002e669) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfafe,	// (0x00039659) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfafe,	// (0x00039659) list_single_sp_fs_schedule_track_pane_g

0x8af2,	// (0x0003264d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8af2,	// (0x0003264d) list_single_sp_fs_schedule_track_pane_t1

0x8b04,	// (0x0003265f) sp_fs_schedule_track_pane_ParamLimits

0x8b04,	// (0x0003265f) sp_fs_schedule_track_pane

0xebea,	// (0x00038745) sp_fs_schedule_track_pane_g1

0xebea,	// (0x00038745) sp_fs_schedule_track_pane_g2

0xebea,	// (0x00038745) sp_fs_schedule_track_pane_g3

0xebea,	// (0x00038745) sp_fs_schedule_track_pane_g4

0xebea,	// (0x00038745) sp_fs_schedule_track_pane_g5

0x0004,

0x0801,	// (0x0002a35c) sp_fs_schedule_track_pane_g

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g1

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g2

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g3

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g4

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g5

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g6

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g7

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g8

0xebea,	// (0x00038745) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0x080c,	// (0x0002a367) bg_sp_fs_schedule_viewer_highlight_g

0xebe2,	// (0x0003873d) bg_main_sp_fs_ribbon_pane

0xebea,	// (0x00038745) main_sp_fs_ribbon_pane_g1

0x8b10,	// (0x0003266b) main_sp_fs_ribbon_pane_t1

0x8b10,	// (0x0003266b) main_sp_fs_ribbon_pane_t2

0x8b10,	// (0x0003266b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb03,	// (0x0003965e) main_sp_fs_ribbon_pane_t

0xebe2,	// (0x0003873d) main_sp_fs_ribbon_scheduler_pane

0xebea,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g1

0xebea,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g2

0xebea,	// (0x00038745) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0268,	// (0x00029dc3) bg_main_sp_fs_ribbon_pane_g

0xebea,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g1

0xebea,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g2

0xebea,	// (0x00038745) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0268,	// (0x00029dc3) main_sp_fs_ribbon_scheduler_pane_g

0x8b1e,	// (0x00032679) list_cale_mrui_pane

0x8b2b,	// (0x00032686) sp_fs_scroll_pane_cp07_ParamLimits

0x8b2b,	// (0x00032686) sp_fs_scroll_pane_cp07

0x4f53,	// (0x0002eaae) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x4f53,	// (0x0002eaae) bg_sp_fs_schedule_viewer_highlight

0xebe2,	// (0x0003873d) list_single_sp_fs_schedule_track_pane_cp01

0xebe2,	// (0x0003873d) list_sp_fs_schedule_track_pane

0x8b47,	// (0x000326a2) sp_fs_scroll_pane_cp06_ParamLimits

0x8b47,	// (0x000326a2) sp_fs_scroll_pane_cp06

0xc563,	// (0x000360be) bgmain_sp_fs_calendar_pane_g1

0x8b5b,	// (0x000326b6) list_single_cale_mrui_pane_ParamLimits

0x8b5b,	// (0x000326b6) list_single_cale_mrui_pane

0x8b7c,	// (0x000326d7) list_single_cale_mrui_row_pane_ParamLimits

0x8b7c,	// (0x000326d7) list_single_cale_mrui_row_pane

0x8b89,	// (0x000326e4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b89,	// (0x000326e4) list_single_cale_mrui_row_pane_g1

0x8bce,	// (0x00032729) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8bce,	// (0x00032729) list_single_cale_mrui_row_pane_t1

0x8be0,	// (0x0003273b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8be0,	// (0x0003273b) list_single_cale_mrui_row_pane_t2

0x8c48,	// (0x000327a3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c48,	// (0x000327a3) list_single_cale_mrui_row_pane_t3

0x8c77,	// (0x000327d2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8c77,	// (0x000327d2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb11,	// (0x0003966c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb11,	// (0x0003966c) list_single_cale_mrui_row_pane_t

0x8ca6,	// (0x00032801) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8ca6,	// (0x00032801) list_single_cmail_header_editor_pane_bg_cp01

0x8cd4,	// (0x0003282f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8cd4,	// (0x0003282f) list_single_cmail_header_editor_pane_bg_cp02

0x8cf4,	// (0x0003284f) main_radioblah_text_pane_t1_ParamLimits

0x8cf4,	// (0x0003284f) main_radioblah_text_pane_t1

0x8d0e,	// (0x00032869) cam6_indi_pane_cp01

0x8d16,	// (0x00032871) cam6_mode_pane_cp01

0x8d1e,	// (0x00032879) cam6_pano_pane

0x8d27,	// (0x00032882) cam6_zoom_pane_cp01

0x8d2f,	// (0x0003288a) cam6_pano_image_pane

0x8d3a,	// (0x00032895) cam6_pano_pane_g1

0x7932,	// (0x0003148d) cam6_pano_pane_g2

0x8d43,	// (0x0003289e) cam6_pano_pane_g3

0x8d4c,	// (0x000328a7) cam6_pano_pane_g4

0xee7c,	// (0x000389d7) cam6_pano_pane_g5

0x8d55,	// (0x000328b0) cam6_pano_pane_g6

0x8d5f,	// (0x000328ba) cam6_pano_pane_g7

0x8d67,	// (0x000328c2) cam6_pano_pane_g8

0x8d70,	// (0x000328cb) cam6_pano_pane_g9

0x0008,

0xfb1a,	// (0x00039675) cam6_pano_pane_g

0xbe24,	// (0x0003597f) main_browser_tag_pane

0x8957,	// (0x000324b2) grid_navstr_albumart_pane

0x8d7b,	// (0x000328d6) cell_navstr_albumart_pane_ParamLimits

0x8d7b,	// (0x000328d6) cell_navstr_albumart_pane

0x8d9b,	// (0x000328f6) cell_navstr_albumart_pane_g1

0x8da3,	// (0x000328fe) cell_navstr_albumart_pane_g2

0x8dab,	// (0x00032906) cell_navstr_albumart_pane_g3

0x8db3,	// (0x0003290e) cell_navstr_albumart_pane_g4

0x0003,

0xfb2d,	// (0x00039688) cell_navstr_albumart_pane_g

0x8dbb,	// (0x00032916) bt_list_pane_ParamLimits

0x8dbb,	// (0x00032916) bt_list_pane

0x8dcf,	// (0x0003292a) bt_list_pane_t1

0x8dde,	// (0x00032939) bt_list_pane_t2

0x0001,

0xfb36,	// (0x00039691) bt_list_pane_t

0xbe24,	// (0x0003597f) main_cale_prevew_pane

0x8ded,	// (0x00032948) popup_cale_preview_window_ParamLimits

0x8ded,	// (0x00032948) popup_cale_preview_window

0xc24b,	// (0x00035da6) bg_popup_preview_window_pane_cp05_ParamLimits

0xc24b,	// (0x00035da6) bg_popup_preview_window_pane_cp05

0x8e06,	// (0x00032961) list_cale_preview_pane_ParamLimits

0x8e06,	// (0x00032961) list_cale_preview_pane

0x8e12,	// (0x0003296d) list_double_cale_preview_pane_ParamLimits

0x8e12,	// (0x0003296d) list_double_cale_preview_pane

0x56c5,	// (0x0002f220) list_single_cale_preview_pane_ParamLimits

0x56c5,	// (0x0002f220) list_single_cale_preview_pane

0x8e24,	// (0x0003297f) list_single_cale_preview_pane_g1

0x8e2c,	// (0x00032987) list_single_cale_preview_pane_t1_ParamLimits

0x8e2c,	// (0x00032987) list_single_cale_preview_pane_t1

0x8e41,	// (0x0003299c) list_double_cale_preview_pane_g1

0x8e49,	// (0x000329a4) list_double_cale_preview_pane_t1_ParamLimits

0x8e49,	// (0x000329a4) list_double_cale_preview_pane_t1

0x8e5e,	// (0x000329b9) list_double_cale_preview_pane_t2_ParamLimits

0x8e5e,	// (0x000329b9) list_double_cale_preview_pane_t2

0x0001,

0xfb3b,	// (0x00039696) list_double_cale_preview_pane_t_ParamLimits

0xfb3b,	// (0x00039696) list_double_cale_preview_pane_t

0xbe24,	// (0x0003597f) main_ezdial_pane

0xc24b,	// (0x00035da6) main_sp_fs_email_pane_ParamLimits

0x8110,	// (0x00031c6b) cmail_ddmenu_btn01_pane_ParamLimits

0x8110,	// (0x00031c6b) cmail_ddmenu_btn01_pane

0x8123,	// (0x00031c7e) cmail_ddmenu_btn02_pane_ParamLimits

0x8123,	// (0x00031c7e) cmail_ddmenu_btn02_pane

0x817e,	// (0x00031cd9) cmail_ddmenu_btn03_pane_ParamLimits

0x817e,	// (0x00031cd9) cmail_ddmenu_btn03_pane

0x822f,	// (0x00031d8a) main_sp_fs_ctrlbar_pane_ParamLimits

0x826e,	// (0x00031dc9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8772,	// (0x000322cd) list_cmail_body_pane_ParamLimits

0x87db,	// (0x00032336) bg_button_pane_cp12

0x8808,	// (0x00032363) list_single_cmail_header_detail_pane_g3_ParamLimits

0x8808,	// (0x00032363) list_single_cmail_header_detail_pane_g3

0x8853,	// (0x000323ae) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8853,	// (0x000323ae) list_single_cmail_header_detail_pane_t2

0x0001,

0xfae5,	// (0x00039640) list_single_cmail_header_detail_pane_t_ParamLimits

0xfae5,	// (0x00039640) list_single_cmail_header_detail_pane_t

0x8a2e,	// (0x00032589) phacti_term_pane_t2_ParamLimits

0x8a2e,	// (0x00032589) phacti_term_pane_t2

0x0001,

0xfaf4,	// (0x0003964f) phacti_term_pane_t_ParamLimits

0xfaf4,	// (0x0003964f) phacti_term_pane_t

0x8e76,	// (0x000329d1) aid_size_list_single_double

0x8e82,	// (0x000329dd) popup_ezdial_listscroll_window

0x8e99,	// (0x000329f4) popup_number_entry_window_cp01

0xc7c9,	// (0x00036324) bg_popup_call_pane_cp09

0x8ea6,	// (0x00032a01) ezdial_list_pane

0x8eae,	// (0x00032a09) scroll_pane_cp23

0xd343,	// (0x00036e9e) bg_button_pane_cp028_ParamLimits

0xd343,	// (0x00036e9e) bg_button_pane_cp028

0x8eb6,	// (0x00032a11) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8eb6,	// (0x00032a11) cmail_ddmenu_btn01_pane_g1

0x8ec2,	// (0x00032a1d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8ec2,	// (0x00032a1d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb40,	// (0x0003969b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb40,	// (0x0003969b) cmail_ddmenu_btn01_pane_g

0x8ece,	// (0x00032a29) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x8ece,	// (0x00032a29) cmail_ddmenu_btn01_pane_t1

0xd343,	// (0x00036e9e) bg_button_pane_cp029_ParamLimits

0xd343,	// (0x00036e9e) bg_button_pane_cp029

0x8ee3,	// (0x00032a3e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8ee3,	// (0x00032a3e) cmail_ddmenu_btn02_pane_g1

0x8efb,	// (0x00032a56) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8efb,	// (0x00032a56) cmail_ddmenu_btn02_pane_t1

0xc24b,	// (0x00035da6) bg_button_pane_cp031_ParamLimits

0xc24b,	// (0x00035da6) bg_button_pane_cp031

0x8ee3,	// (0x00032a3e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8ee3,	// (0x00032a3e) cmail_ddmenu_btn03_pane_g1

0x8efb,	// (0x00032a56) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8efb,	// (0x00032a56) cmail_ddmenu_btn03_pane_t1

0xc56d,	// (0x000360c8) cell_dialer2_keypad_pane_t1_ParamLimits

0xeeba,	// (0x00038a15) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeeba,	// (0x00038a15) cell_dialer2_keypad_pane_t1_copy1

0x7543,	// (0x0003109e) ncimui_group_button_pane

0xc24b,	// (0x00035da6) main_sp_fs_calendar_pane_ParamLimits

0x8788,	// (0x000322e3) list_single_cmail_header_caption_pane_ParamLimits

0x8a85,	// (0x000325e0) aid_recal_txt_sm_pane

0xbe24,	// (0x0003597f) mian_recal_day_pane

0x8ad4,	// (0x0003262f) popup_sp_fs_cale_preview_window_ParamLimits

0x8f1f,	// (0x00032a7a) list_recal_day_pane

0x8f61,	// (0x00032abc) list_single_recal_day_pane_ParamLimits

0x8f61,	// (0x00032abc) list_single_recal_day_pane

0x8f73,	// (0x00032ace) list_single_recal_day_pane_g1_ParamLimits

0x8f73,	// (0x00032ace) list_single_recal_day_pane_g1

0x8f7f,	// (0x00032ada) list_single_recal_day_pane_g2_ParamLimits

0x8f7f,	// (0x00032ada) list_single_recal_day_pane_g2

0x8f8b,	// (0x00032ae6) list_single_recal_day_pane_g3_ParamLimits

0x8f8b,	// (0x00032ae6) list_single_recal_day_pane_g3

0x8f97,	// (0x00032af2) list_single_recal_day_pane_g4_ParamLimits

0x8f97,	// (0x00032af2) list_single_recal_day_pane_g4

0x8fa5,	// (0x00032b00) list_single_recal_day_pane_g5_ParamLimits

0x8fa5,	// (0x00032b00) list_single_recal_day_pane_g5

0x8fbb,	// (0x00032b16) list_single_recal_day_pane_g6_ParamLimits

0x8fbb,	// (0x00032b16) list_single_recal_day_pane_g6

0x0004,

0xfb4f,	// (0x000396aa) list_single_recal_day_pane_g_ParamLimits

0xfb4f,	// (0x000396aa) list_single_recal_day_pane_g

0x8fcf,	// (0x00032b2a) list_single_recal_day_pane_t1

0x8fe1,	// (0x00032b3c) list_single_recal_day_pane_t2

0x0001,

0xfb5a,	// (0x000396b5) list_single_recal_day_pane_t

0x8ff3,	// (0x00032b4e) ncimui_query_button_pane_ParamLimits

0x8ff3,	// (0x00032b4e) ncimui_query_button_pane

0x9003,	// (0x00032b5e) ncimui_query_button_pane_t1_ParamLimits

0x9003,	// (0x00032b5e) ncimui_query_button_pane_t1

0x9016,	// (0x00032b71) ncimui_query_button_pane_t2_ParamLimits

0x9016,	// (0x00032b71) ncimui_query_button_pane_t2

0x0001,

0xfb5f,	// (0x000396ba) ncimui_query_button_pane_t_ParamLimits

0xfb5f,	// (0x000396ba) ncimui_query_button_pane_t

0x9029,	// (0x00032b84) query_button_pane_ParamLimits

0x9029,	// (0x00032b84) query_button_pane

0xbe24,	// (0x0003597f) bg_button_pane_cp0028

0x903c,	// (0x00032b97) query_button_pane_t1

0x0f2e,	// (0x0002aa89) main_tport_pane_ParamLimits

0x85e0,	// (0x0003213b) bg_popup_window_pane_cp01_ParamLimits

0x85e0,	// (0x0003213b) bg_popup_window_pane_cp01

0x85fb,	// (0x00032156) heading_pane_cp08_ParamLimits

0x85fb,	// (0x00032156) heading_pane_cp08

0x860e,	// (0x00032169) heading_pane_cp07_ParamLimits

0x860e,	// (0x00032169) heading_pane_cp07

0x86ec,	// (0x00032247) cell_tport_appsw_pane_g2

0x0002,

0xfad2,	// (0x0003962d) cell_tport_appsw_pane_g

0x3a80,	// (0x0002d5db) input_candi_list_open_g1

0xcb66,	// (0x000366c1) list_cale_time_pane_g6_ParamLimits

0xcb66,	// (0x000366c1) list_cale_time_pane_g6

0x4793,	// (0x0002e2ee) aid_size_touch_calib_1_ParamLimits

0x4793,	// (0x0002e2ee) aid_size_touch_calib_1

0x47a5,	// (0x0002e300) aid_size_touch_calib_2_ParamLimits

0x47a5,	// (0x0002e300) aid_size_touch_calib_2

0x47bd,	// (0x0002e318) aid_size_touch_calib_3_ParamLimits

0x47bd,	// (0x0002e318) aid_size_touch_calib_3

0x47db,	// (0x0002e336) aid_size_touch_calib_4_ParamLimits

0x47db,	// (0x0002e336) aid_size_touch_calib_4

0x47f3,	// (0x0002e34e) main_touch_calib_button_group_pane_ParamLimits

0x47f3,	// (0x0002e34e) main_touch_calib_button_group_pane

0x480b,	// (0x0002e366) main_touch_calib_pane_g1_ParamLimits

0x481d,	// (0x0002e378) main_touch_calib_pane_g2_ParamLimits

0x482f,	// (0x0002e38a) main_touch_calib_pane_g3_ParamLimits

0x4841,	// (0x0002e39c) main_touch_calib_pane_g4_ParamLimits

0xf598,	// (0x000390f3) main_touch_calib_pane_g_ParamLimits

0x4853,	// (0x0002e3ae) main_touch_calib_pane_t1_ParamLimits

0x486d,	// (0x0002e3c8) main_touch_calib_pane_t2_ParamLimits

0x4887,	// (0x0002e3e2) main_touch_calib_pane_t3_ParamLimits

0x489b,	// (0x0002e3f6) main_touch_calib_pane_t4_ParamLimits

0x48af,	// (0x0002e40a) main_touch_calib_pane_t5_ParamLimits

0xf5a1,	// (0x000390fc) main_touch_calib_pane_t_ParamLimits

0xec4a,	// (0x000387a5) list_single_fp_cale_pane_g3_ParamLimits

0xec4a,	// (0x000387a5) list_single_fp_cale_pane_g3

0xb0d8,	// (0x00034c33) bg_button_pane_cp012_ParamLimits

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp03_ParamLimits

0x1d33,	// (0x0002b88e) cell_vitu2_function_top_pane_g1_ParamLimits

0xb0d8,	// (0x00034c33) bg_vkb2_func_pane_cp04_ParamLimits

0x74ce,	// (0x00031029) main_ncimui_button_group_pane_ParamLimits

0x74ce,	// (0x00031029) main_ncimui_button_group_pane

0x752e,	// (0x00031089) main_ncimui_pane_t3_ParamLimits

0x752e,	// (0x00031089) main_ncimui_pane_t3

0x89c8,	// (0x00032523) phacti_button_group_pane

0x8e76,	// (0x000329d1) aid_size_list_single_double_ParamLimits

0x8e82,	// (0x000329dd) popup_ezdial_listscroll_window_ParamLimits

0x8e99,	// (0x000329f4) popup_number_entry_window_cp01_ParamLimits

0x904a,	// (0x00032ba5) phacti_button_pane_ParamLimits

0x904a,	// (0x00032ba5) phacti_button_pane

0xbe24,	// (0x0003597f) bg_button_pane_cp14

0x905b,	// (0x00032bb6) phacti_button_pane_t1

0x9069,	// (0x00032bc4) main_touch_calib_button_pane_ParamLimits

0x9069,	// (0x00032bc4) main_touch_calib_button_pane

0xc5c1,	// (0x0003611c) bg_button_pane_cp18_ParamLimits

0xc5c1,	// (0x0003611c) bg_button_pane_cp18

0x907e,	// (0x00032bd9) main_touch_calib_button_pane_t1_ParamLimits

0x907e,	// (0x00032bd9) main_touch_calib_button_pane_t1

0x9094,	// (0x00032bef) main_touch_calib_button_pane_t2_ParamLimits

0x9094,	// (0x00032bef) main_touch_calib_button_pane_t2

0x0001,

0xfb64,	// (0x000396bf) main_touch_calib_button_pane_t_ParamLimits

0xfb64,	// (0x000396bf) main_touch_calib_button_pane_t

0xbe24,	// (0x0003597f) cell_ncimui_button_pane

0xbe24,	// (0x0003597f) bg_button_pane_cp032

0x90b2,	// (0x00032c0d) cell_ncimui_button_pane_t1

0xb615,	// (0x00035170) image3_infobar_pane_ParamLimits

0xb615,	// (0x00035170) image3_infobar_pane

0x7bbf,	// (0x0003171a) fs_bigclock_status_pane_ParamLimits

0x7bbf,	// (0x0003171a) fs_bigclock_status_pane

0x7bcc,	// (0x00031727) main_fs_bigclock_clock_pane_ParamLimits

0x7bcc,	// (0x00031727) main_fs_bigclock_clock_pane

0x7bea,	// (0x00031745) main_fs_bigclock_indi_pane_ParamLimits

0x7bea,	// (0x00031745) main_fs_bigclock_indi_pane

0x7c1c,	// (0x00031777) main_fs_bigclock_swipe_pane_ParamLimits

0x7c1c,	// (0x00031777) main_fs_bigclock_swipe_pane

0xbe24,	// (0x0003597f) main_fs_clock_dumped_data

0x7c5b,	// (0x000317b6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7c5b,	// (0x000317b6) list_single_fs_bigclock_indicator_pane_g1

0x7c77,	// (0x000317d2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7c77,	// (0x000317d2) list_single_fs_bigclock_indicator_pane_g2

0x7c91,	// (0x000317ec) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7c91,	// (0x000317ec) list_single_fs_bigclock_indicator_pane_g3

0x7cab,	// (0x00031806) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7cab,	// (0x00031806) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa38,	// (0x00039593) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa38,	// (0x00039593) list_single_fs_bigclock_indicator_pane_g

0x7cd6,	// (0x00031831) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7cd6,	// (0x00031831) list_single_fs_bigclock_indicator_pane_t1

0x7cfe,	// (0x00031859) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7cfe,	// (0x00031859) list_single_fs_bigclock_indicator_pane_t2

0x7d26,	// (0x00031881) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7d26,	// (0x00031881) list_single_fs_bigclock_indicator_pane_t3

0x7d4e,	// (0x000318a9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7d4e,	// (0x000318a9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa43,	// (0x0003959e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa43,	// (0x0003959e) list_single_fs_bigclock_indicator_pane_t

0x90c0,	// (0x00032c1b) image3_infobar_fav_pane_ParamLimits

0x90c0,	// (0x00032c1b) image3_infobar_fav_pane

0x90d0,	// (0x00032c2b) image3_infobar_loc_pane_ParamLimits

0x90d0,	// (0x00032c2b) image3_infobar_loc_pane

0x90e4,	// (0x00032c3f) image3_infobar_time_pane_ParamLimits

0x90e4,	// (0x00032c3f) image3_infobar_time_pane

0xc563,	// (0x000360be) image3_infobar_time_pane_g1

0x90f4,	// (0x00032c4f) image3_infobar_time_pane_t1

0xc563,	// (0x000360be) image3_infobar_loc_pane_g1

0x9102,	// (0x00032c5d) image3_infobar_loc_pane_g2

0x0001,

0xfb69,	// (0x000396c4) image3_infobar_loc_pane_g

0x910a,	// (0x00032c65) image3_infobar_loc_pane_t1

0xc563,	// (0x000360be) image3_infobar_fav_pane_g1

0x9118,	// (0x00032c73) image3_infobar_fav_pane_g2

0x0001,

0xfb6e,	// (0x000396c9) image3_infobar_fav_pane_g

0x9120,	// (0x00032c7b) fs_bigclock_status_battery_pane

0x9129,	// (0x00032c84) fs_bigclock_status_signal_pane

0x9132,	// (0x00032c8d) fs_bigclock_status_title_pane

0x913b,	// (0x00032c96) fs_bigclock_status_signal_pane_g1

0x9144,	// (0x00032c9f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb73,	// (0x000396ce) fs_bigclock_status_signal_pane_g

0x914c,	// (0x00032ca7) fs_bigclock_status_battery_pane_g1

0x9155,	// (0x00032cb0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb78,	// (0x000396d3) fs_bigclock_status_battery_pane_g

0x915d,	// (0x00032cb8) fs_bigclock_status_title_pane_t1

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g1

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g2

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g3

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb7d,	// (0x000396d8) main_fs_bigclock_clock_pane_g

0x917e,	// (0x00032cd9) main_fs_bigclock_clock_pane_t1

0x9198,	// (0x00032cf3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb86,	// (0x000396e1) main_fs_bigclock_clock_pane_t

0x91ae,	// (0x00032d09) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91ae,	// (0x00032d09) list_single_fs_bigclock_indicator_pane

0x91bf,	// (0x00032d1a) list_single_fs_bigclock_pane_ParamLimits

0x91bf,	// (0x00032d1a) list_single_fs_bigclock_pane

0x9229,	// (0x00032d84) main_fs_bigclock_indicator_pane_t1

0x9238,	// (0x00032d93) list_single_fs_bigclock_pane_g1

0x9240,	// (0x00032d9b) list_single_fs_bigclock_pane_t1

0xc563,	// (0x000360be) main_fs_bigclock_swipe_pane_g1

0x9283,	// (0x00032dde) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb97,	// (0x000396f2) main_fs_bigclock_swipe_pane_g

0x928b,	// (0x00032de6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x928b,	// (0x00032de6) main_fs_bigclock_swipe_pane_t1

0x35a4,	// (0x0002d0ff) call_type_pane_ParamLimits

0xbe24,	// (0x0003597f) main_btmg_pane

0x8bb5,	// (0x00032710) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8bb5,	// (0x00032710) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb0a,	// (0x00039665) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb0a,	// (0x00039665) list_single_cale_mrui_row_pane_g

0x8f48,	// (0x00032aa3) list_recal_vselct_arw_lo_pane

0x8f50,	// (0x00032aab) list_recal_vselct_arw_up_pane

0x8f58,	// (0x00032ab3) list_recal_vselct_pane

0x92a8,	// (0x00032e03) btmg_button_pane

0x92b2,	// (0x00032e0d) main_btmg_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp044

0x92bc,	// (0x00032e17) btmg_button_pane_t1

0xe439,	// (0x00037f94) aid_listscroll_gen

0xc24b,	// (0x00035da6) main_cntbar_detail_pane

0x8753,	// (0x000322ae) list_cmail_folder_pane

0x3598,	// (0x0002d0f3) sp_fs_scroll_pane_cp03_ParamLimits

0x92ca,	// (0x00032e25) list_single_fs_dyc_pane_cp01_ParamLimits

0x92ca,	// (0x00032e25) list_single_fs_dyc_pane_cp01

0x92e1,	// (0x00032e3c) aid_size_cmail_indent

0x92ea,	// (0x00032e45) list_single_dyc_row_pane_cp01

0x9325,	// (0x00032e80) cntbar_detail_list_pane_ParamLimits

0x9325,	// (0x00032e80) cntbar_detail_list_pane

0x9371,	// (0x00032ecc) main_cntbar_detail_cont_pane_ParamLimits

0x9371,	// (0x00032ecc) main_cntbar_detail_cont_pane

0x3598,	// (0x0002d0f3) scroll_pane_cp032_ParamLimits

0x3598,	// (0x0002d0f3) scroll_pane_cp032

0x9385,	// (0x00032ee0) cntbar_detail_list_event_pane_ParamLimits

0x9385,	// (0x00032ee0) cntbar_detail_list_event_pane

0x9335,	// (0x00032e90) cntbar_detail_list_shct_pane

0xca30,	// (0x0003658b) aid_list_gen

0x9395,	// (0x00032ef0) aid_scroll

0x939e,	// (0x00032ef9) aid_size_touch_scroll_bar

0x93a7,	// (0x00032f02) aid_list_double

0x93b0,	// (0x00032f0b) aid_list_single

0x93a7,	// (0x00032f02) aid_list_single_lg

0x93b9,	// (0x00032f14) aid_list_z_g_a_sm

0x93c1,	// (0x00032f1c) aid_list_z_g_d

0x93c9,	// (0x00032f24) aid_txt_z_prm

0x93d7,	// (0x00032f32) aid_txt_z_prm_cp01

0x93e5,	// (0x00032f40) aid_txt_z_sec

0x93f3,	// (0x00032f4e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x93f3,	// (0x00032f4e) main_cntbar_detail_cont_pane_g1

0x9407,	// (0x00032f62) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9407,	// (0x00032f62) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb9c,	// (0x000396f7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb9c,	// (0x000396f7) main_cntbar_detail_cont_pane_g

0x9417,	// (0x00032f72) main_cntbar_detail_cont_pane_t1

0x9425,	// (0x00032f80) main_cntbar_detail_cont_pane_t2

0x9433,	// (0x00032f8e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfba1,	// (0x000396fc) main_cntbar_detail_cont_pane_t

0x9441,	// (0x00032f9c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9441,	// (0x00032f9c) cell_cntbar_detail_list_shct_pane

0x9455,	// (0x00032fb0) cntbar_detail_list_shct_pane_g1

0x945e,	// (0x00032fb9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfba8,	// (0x00039703) cntbar_detail_list_shct_pane_g

0x9467,	// (0x00032fc2) cntbar_detail_list_event_pane_g1_ParamLimits

0x9467,	// (0x00032fc2) cntbar_detail_list_event_pane_g1

0x9473,	// (0x00032fce) cntbar_detail_list_event_pane_g2_ParamLimits

0x9473,	// (0x00032fce) cntbar_detail_list_event_pane_g2

0x0005,

0xfbad,	// (0x00039708) cntbar_detail_list_event_pane_g_ParamLimits

0xfbad,	// (0x00039708) cntbar_detail_list_event_pane_g

0x94df,	// (0x0003303a) cntbar_detail_list_event_pane_t1_ParamLimits

0x94df,	// (0x0003303a) cntbar_detail_list_event_pane_t1

0x94f4,	// (0x0003304f) cntbar_detail_list_event_pane_t2_ParamLimits

0x94f4,	// (0x0003304f) cntbar_detail_list_event_pane_t2

0x0002,

0xfbba,	// (0x00039715) cntbar_detail_list_event_pane_t_ParamLimits

0xfbba,	// (0x00039715) cntbar_detail_list_event_pane_t

0xc563,	// (0x000360be) cell_cntbar_detail_list_shct_pane_g1

0xd142,	// (0x00036c9d) navi_pane_mv_g3

0xc24b,	// (0x00035da6) main_cntbar_detail_pane_ParamLimits

0xbe24,	// (0x0003597f) main_notif_wgt_pane

0xb395,	// (0x00034ef0) aid_tch_main_mp4_pane_g4

0xb60d,	// (0x00035168) popup_slider_window_cp02

0x8f3e,	// (0x00032a99) list_recal_day_event_pane

0x92f3,	// (0x00032e4e) cntbar_detail_btn_pane_ParamLimits

0x92f3,	// (0x00032e4e) cntbar_detail_btn_pane

0x930c,	// (0x00032e67) cntbar_detail_btn_pane_cp01_ParamLimits

0x930c,	// (0x00032e67) cntbar_detail_btn_pane_cp01

0x9335,	// (0x00032e90) cntbar_detail_list_shct_pane_ParamLimits

0x9345,	// (0x00032ea0) cntbar_detail_pane_g1_ParamLimits

0x9345,	// (0x00032ea0) cntbar_detail_pane_g1

0x9355,	// (0x00032eb0) cntbar_detail_pane_t1_ParamLimits

0x9355,	// (0x00032eb0) cntbar_detail_pane_t1

0x947f,	// (0x00032fda) cntbar_detail_list_event_pane_g3_ParamLimits

0x947f,	// (0x00032fda) cntbar_detail_list_event_pane_g3

0x9497,	// (0x00032ff2) cntbar_detail_list_event_pane_g4_ParamLimits

0x9497,	// (0x00032ff2) cntbar_detail_list_event_pane_g4

0x94af,	// (0x0003300a) cntbar_detail_list_event_pane_g5_ParamLimits

0x94af,	// (0x0003300a) cntbar_detail_list_event_pane_g5

0x94c7,	// (0x00033022) cntbar_detail_list_event_pane_g6_ParamLimits

0x94c7,	// (0x00033022) cntbar_detail_list_event_pane_g6

0x9509,	// (0x00033064) cntbar_detail_list_event_pane_t3_ParamLimits

0x9509,	// (0x00033064) cntbar_detail_list_event_pane_t3

0x951b,	// (0x00033076) popup_notif_wgt_window_ParamLimits

0x951b,	// (0x00033076) popup_notif_wgt_window

0x9534,	// (0x0003308f) popup_submenu_window_cp01_ParamLimits

0x9534,	// (0x0003308f) popup_submenu_window_cp01

0xc7c9,	// (0x00036324) bg_popup_window_pane_cp10

0x9546,	// (0x000330a1) listscroll_notif_wgt_pane

0x9558,	// (0x000330b3) list_notif_wgt_window

0x9561,	// (0x000330bc) scroll_pane_cp033

0x956a,	// (0x000330c5) list_notif_wgt_row_pane_ParamLimits

0x956a,	// (0x000330c5) list_notif_wgt_row_pane

0x957a,	// (0x000330d5) aid_size_list_notif_wgt_del

0x9587,	// (0x000330e2) list_notif_wgt_row_pane_g1

0x9593,	// (0x000330ee) list_notif_wgt_row_pane_g2

0x95a2,	// (0x000330fd) list_notif_wgt_row_pane_g3

0x0002,

0xfbc1,	// (0x0003971c) list_notif_wgt_row_pane_g

0x95af,	// (0x0003310a) list_notif_wgt_row_pane_t1

0x95c5,	// (0x00033120) list_notif_wgt_row_pane_t2

0x95d7,	// (0x00033132) list_notif_wgt_row_pane_t3

0x0002,

0xfbc8,	// (0x00039723) list_notif_wgt_row_pane_t

0x5fdf,	// (0x0002fb3a) list_recal_day_event_pane_g1

0x95e9,	// (0x00033144) list_recal_day_event_pane_t1

0xbe24,	// (0x0003597f) bg_button_pane_cp045

0x95f8,	// (0x00033153) cntbar_detail_btn_pane_t1

0xd343,	// (0x00036e9e) main_callh_pane_ParamLimits

0xd343,	// (0x00036e9e) main_callh_pane

0xbe24,	// (0x0003597f) main_coverflow0_pane

0xbe24,	// (0x0003597f) main_wgtman_pane

0x7c34,	// (0x0003178f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c34,	// (0x0003178f) main_fs_bigclock_unlock_btn_pane

0x86e4,	// (0x0003223f) bg_button_pane_cp16

0x86f4,	// (0x0003224f) cell_tport_appsw_pane_g3

0x9606,	// (0x00033161) cf0_flow_pane_ParamLimits

0x9606,	// (0x00033161) cf0_flow_pane

0x961b,	// (0x00033176) listscroll_cf0_pane

0x9626,	// (0x00033181) main_cf0_pane_g1

0x9638,	// (0x00033193) main_cf0_pane_t1_ParamLimits

0x9638,	// (0x00033193) main_cf0_pane_t1

0x964f,	// (0x000331aa) main_cf0_pane_t2_ParamLimits

0x964f,	// (0x000331aa) main_cf0_pane_t2

0x0001,

0xfbd4,	// (0x0003972f) main_cf0_pane_t_ParamLimits

0xfbd4,	// (0x0003972f) main_cf0_pane_t

0x9666,	// (0x000331c1) scroll_pane_cp11

0x9671,	// (0x000331cc) cf0_flow_pane_g1

0x9679,	// (0x000331d4) cf0_flow_pane_g2

0x0001,

0xfbd9,	// (0x00039734) cf0_flow_pane_g

0x9681,	// (0x000331dc) cf0_flow_pane_t1

0xbe24,	// (0x0003597f) main_call6_pane

0xbe24,	// (0x0003597f) main_calllock_pane

0x1e67,	// (0x0002b9c2) call6_btn_grp_pane_ParamLimits

0x1e67,	// (0x0002b9c2) call6_btn_grp_pane

0x1e81,	// (0x0002b9dc) call6_pane_g1_ParamLimits

0x1e81,	// (0x0002b9dc) call6_pane_g1

0x1e97,	// (0x0002b9f2) popup_call6_1st_window_ParamLimits

0x1e97,	// (0x0002b9f2) popup_call6_1st_window

0x1ea8,	// (0x0002ba03) popup_call6_2nd_window_ParamLimits

0x1ea8,	// (0x0002ba03) popup_call6_2nd_window

0x1eb9,	// (0x0002ba14) cell_call6_btn_pane_ParamLimits

0x1eb9,	// (0x0002ba14) cell_call6_btn_pane

0xc7c9,	// (0x00036324) bg_popup_call2_in_pane_cp03

0x968f,	// (0x000331ea) popup_call6_1st_window_g1

0x9697,	// (0x000331f2) popup_call6_1st_window_g2

0x969f,	// (0x000331fa) popup_call6_1st_window_g3

0x0002,

0xfbde,	// (0x00039739) popup_call6_1st_window_g

0x96a7,	// (0x00033202) popup_call6_1st_window_t1

0x96b6,	// (0x00033211) popup_call6_1st_window_t2

0x96c4,	// (0x0003321f) popup_call6_1st_window_t3

0x0002,

0xfbe5,	// (0x00039740) popup_call6_1st_window_t

0xc7c9,	// (0x00036324) bg_popup_call2_in_pane_cp04

0x96d2,	// (0x0003322d) popup_call6_2nd_window_g1

0x96da,	// (0x00033235) popup_call6_2nd_window_g2

0x96e2,	// (0x0003323d) popup_call6_2nd_window_g3

0x0002,

0xfbec,	// (0x00039747) popup_call6_2nd_window_g

0x96ea,	// (0x00033245) popup_call6_2nd_window_t1

0xb0e6,	// (0x00034c41) bg_button_pane_cp15

0xb84c,	// (0x000353a7) cell_call6_btn_pane_g1

0xb855,	// (0x000353b0) cell_call6_btn_pane_t1

0x96f9,	// (0x00033254) listscroll_wgtman_pane_ParamLimits

0x96f9,	// (0x00033254) listscroll_wgtman_pane

0x971a,	// (0x00033275) wgtman_btn_pane_ParamLimits

0x971a,	// (0x00033275) wgtman_btn_pane

0xcf56,	// (0x00036ab1) aid_scroll_copy1

0x975d,	// (0x000332b8) list_wgtman_pane

0x9767,	// (0x000332c2) wgtman_btn_pane_g1_ParamLimits

0x9767,	// (0x000332c2) wgtman_btn_pane_g1

0x9793,	// (0x000332ee) wgtman_btn_pane_t1_ParamLimits

0x9793,	// (0x000332ee) wgtman_btn_pane_t1

0x97d0,	// (0x0003332b) wgtman_btn_pane_t2_ParamLimits

0x97d0,	// (0x0003332b) wgtman_btn_pane_t2

0x0001,

0xfbf3,	// (0x0003974e) wgtman_btn_pane_t_ParamLimits

0xfbf3,	// (0x0003974e) wgtman_btn_pane_t

0x97e7,	// (0x00033342) listrow_wgtman_pane_ParamLimits

0x97e7,	// (0x00033342) listrow_wgtman_pane

0x97fa,	// (0x00033355) listrow_wgtman_pane_g1

0x9807,	// (0x00033362) listrow_wgtman_pane_g2

0x0001,

0xfbf8,	// (0x00039753) listrow_wgtman_pane_g

0x9825,	// (0x00033380) listrow_wgtman_pane_t1

0x983d,	// (0x00033398) listrow_wgtman_pane_t2

0x0001,

0xfbfd,	// (0x00039758) listrow_wgtman_pane_t

0x9863,	// (0x000333be) wait_bar_pane_cp09

0x9875,	// (0x000333d0) main_calllock_btn_pane

0x987f,	// (0x000333da) main_calllock_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp17

0x9887,	// (0x000333e2) main_calllock_btn_pane_g1

0x9890,	// (0x000333eb) main_calllock_btn_pane_t1

0xbe24,	// (0x0003597f) main_dialer3_pane

0xbe24,	// (0x0003597f) main_fmrd2_pane

0xc563,	// (0x000360be) main_fs_bigclock_unlock_btn_pane_g1

0x98a7,	// (0x00033402) main_fs_bigclock_unlock_btn_pane_t1

0x98b5,	// (0x00033410) area_fmrd2_info_pane_ParamLimits

0x98b5,	// (0x00033410) area_fmrd2_info_pane

0x98c6,	// (0x00033421) area_fmrd2_visual_pane_ParamLimits

0x98c6,	// (0x00033421) area_fmrd2_visual_pane

0x98d4,	// (0x0003342f) fmrd2_indi_pane_ParamLimits

0x98d4,	// (0x0003342f) fmrd2_indi_pane

0x98e1,	// (0x0003343c) area_fmrd2_visual_pane_g1

0x98e9,	// (0x00033444) area_fmrd2_visual_pane_t1

0x98f9,	// (0x00033454) area_fmrd2_visual_pane_t2

0x9909,	// (0x00033464) area_fmrd2_visual_pane_t3

0x0002,

0xfc07,	// (0x00039762) area_fmrd2_visual_pane_t

0x9919,	// (0x00033474) area_fmrd2_info_pane_g1

0x9921,	// (0x0003347c) area_fmrd2_info_pane_t1

0x9931,	// (0x0003348c) area_fmrd2_info_pane_t2

0x9941,	// (0x0003349c) area_fmrd2_info_pane_t3

0x9951,	// (0x000334ac) area_fmrd2_info_pane_t4

0x0003,

0xfc0e,	// (0x00039769) area_fmrd2_info_pane_t

0x995f,	// (0x000334ba) fmrd2_indi_pane_t1

0x996f,	// (0x000334ca) fmrd2_indi_pane_t2

0x997f,	// (0x000334da) fmrd2_indi_pane_t3

0x0002,

0xfc17,	// (0x00039772) fmrd2_indi_pane_t

0x7cba,	// (0x00031815) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7cba,	// (0x00031815) list_single_fs_bigclock_indicator_pane_g5

0x7d6b,	// (0x000318c6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7d6b,	// (0x000318c6) list_single_fs_bigclock_indicator_pane_t5

0x8a79,	// (0x000325d4) aid_cell_bcale_month_pane_ParamLimits

0x8a79,	// (0x000325d4) aid_cell_bcale_month_pane

0x8a79,	// (0x000325d4) bcale_month_pane_ParamLimits

0x8a79,	// (0x000325d4) bcale_month_pane

0x4f53,	// (0x0002eaae) bcale_preview_pane_ParamLimits

0x4f53,	// (0x0002eaae) bcale_preview_pane

0x9240,	// (0x00032d9b) list_single_fs_bigclock_pane_t1_ParamLimits

0x925f,	// (0x00032dba) list_single_fs_bigclock_pane_t2_ParamLimits

0x925f,	// (0x00032dba) list_single_fs_bigclock_pane_t2

0x0001,

0xfb92,	// (0x000396ed) list_single_fs_bigclock_pane_t_ParamLimits

0xfb92,	// (0x000396ed) list_single_fs_bigclock_pane_t

0x989f,	// (0x000333fa) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc02,	// (0x0003975d) main_fs_bigclock_unlock_btn_pane_g

0x998f,	// (0x000334ea) aid_dia3_key_size_ParamLimits

0x998f,	// (0x000334ea) aid_dia3_key_size

0x999e,	// (0x000334f9) aid_dia3_listrow_size_ParamLimits

0x999e,	// (0x000334f9) aid_dia3_listrow_size

0x99b3,	// (0x0003350e) dia3_keypad_fun_pane_ParamLimits

0x99b3,	// (0x0003350e) dia3_keypad_fun_pane

0x99cf,	// (0x0003352a) dia3_keypad_num_pane_ParamLimits

0x99cf,	// (0x0003352a) dia3_keypad_num_pane

0x99ea,	// (0x00033545) dia3_listscroll_pane_ParamLimits

0x99ea,	// (0x00033545) dia3_listscroll_pane

0x99fd,	// (0x00033558) dia3_numentry_pane_ParamLimits

0x99fd,	// (0x00033558) dia3_numentry_pane

0x9a15,	// (0x00033570) dia3_list_pane

0x9a20,	// (0x0003357b) scroll_pane_cp12

0xbe24,	// (0x0003597f) bg_dia3_numentry_pane

0x9a2b,	// (0x00033586) dia3_numentry_pane_t1

0x9a3a,	// (0x00033595) cell_dia3_key_num_pane

0x9a42,	// (0x0003359d) cell_dia3_key0_fun_pane_ParamLimits

0x9a42,	// (0x0003359d) cell_dia3_key0_fun_pane

0x9a56,	// (0x000335b1) cell_dia3_key1_fun_pane_ParamLimits

0x9a56,	// (0x000335b1) cell_dia3_key1_fun_pane

0x9a6e,	// (0x000335c9) dia3_listrow_pane

0x774c,	// (0x000312a7) bg_dia3_numentry_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp21

0x9a80,	// (0x000335db) cell_dia3_key_num_pane_t1

0x9a8e,	// (0x000335e9) cell_dia3_key_num_pane_t2

0x9a9d,	// (0x000335f8) cell_dia3_key_num_pane_t3

0x9aac,	// (0x00033607) cell_dia3_key_num_pane_t4

0x0003,

0xfc1e,	// (0x00039779) cell_dia3_key_num_pane_t

0xbe24,	// (0x0003597f) bg_button_pane_cp19

0x9abb,	// (0x00033616) cell_dia3_key0_fun_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp20

0x9ac3,	// (0x0003361e) cell_dia3_key1_fun_pane_g1

0x4f53,	// (0x0002eaae) area_left_week_number_pane

0x4f53,	// (0x0002eaae) area_top_day_name_pane

0x4f53,	// (0x0002eaae) frame_month_view_pane

0x4f53,	// (0x0002eaae) grid_month_view_pane

0x4f53,	// (0x0002eaae) cell_top_day_name_pane_ParamLimits

0x4f53,	// (0x0002eaae) cell_top_day_name_pane

0x4f53,	// (0x0002eaae) cell_area_left_week_number_pane_ParamLimits

0x4f53,	// (0x0002eaae) cell_area_left_week_number_pane

0x4f53,	// (0x0002eaae) cell_month_view_pane_ParamLimits

0x4f53,	// (0x0002eaae) cell_month_view_pane

0x4b0e,	// (0x0002e669) frm_month_g1

0x4b0e,	// (0x0002e669) frm_month_g2

0x4b0e,	// (0x0002e669) frm_month_g3

0x4b0e,	// (0x0002e669) frm_month_g4

0x4b0e,	// (0x0002e669) frm_month_g5

0x4b0e,	// (0x0002e669) frm_month_g6

0x4b0e,	// (0x0002e669) frm_month_g7

0x4b0e,	// (0x0002e669) frm_month_g8

0x4b0e,	// (0x0002e669) frm_month_g9

0x4b0e,	// (0x0002e669) frm_month_g10

0x4b0e,	// (0x0002e669) frm_month_g11

0x4b0e,	// (0x0002e669) frm_month_g12

0x4b0e,	// (0x0002e669) frm_month_g13

0x4b0e,	// (0x0002e669) frm_month_g14

0x4b0e,	// (0x0002e669) frm_month_g15

0x4b0e,	// (0x0002e669) frm_month_g16

0x000f,

0xfc27,	// (0x00039782) frm_month_g

0x9acb,	// (0x00033626) cell_top_day_name_pane_t1

0x4b0e,	// (0x0002e669) cell_area_left_week_number_pane_g1

0x9acb,	// (0x00033626) cell_area_left_week_number_pane_t1

0x4b0e,	// (0x0002e669) cell_month_view_pane_g1

0x9acb,	// (0x00033626) cell_month_view_pane_t1

0xbe24,	// (0x0003597f) main_fps_pane

0x8146,	// (0x00031ca1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x8146,	// (0x00031ca1) cmail_ddmenu_btn02_pane_cp1

0x8162,	// (0x00031cbd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x8162,	// (0x00031cbd) cmail_ddmenu_btn02_pane_cp2

0x8eef,	// (0x00032a4a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8eef,	// (0x00032a4a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb45,	// (0x000396a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb45,	// (0x000396a0) cmail_ddmenu_btn02_pane_g

0x8f0d,	// (0x00032a68) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f0d,	// (0x00032a68) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb4a,	// (0x000396a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb4a,	// (0x000396a5) cmail_ddmenu_btn02_pane_t

0x9add,	// (0x00033638) fps_text_pane_ParamLimits

0x9add,	// (0x00033638) fps_text_pane

0x9af4,	// (0x0003364f) main_fps_pane_g1_ParamLimits

0x9af4,	// (0x0003364f) main_fps_pane_g1

0x9b0e,	// (0x00033669) wait_bar_pane_cp010_ParamLimits

0x9b0e,	// (0x00033669) wait_bar_pane_cp010

0x9b1f,	// (0x0003367a) fps_text_pane_t1_ParamLimits

0x9b1f,	// (0x0003367a) fps_text_pane_t1

0x55ab,	// (0x0002f106) cam4_image_uncrop_pane_g1

0x55b4,	// (0x0002f10f) cam4_image_uncrop_pane_g2

0x55bd,	// (0x0002f118) cam4_image_uncrop_pane_g3

0x55c6,	// (0x0002f121) cam4_image_uncrop_pane_g4

0x0003,

0xf6dd,	// (0x00039238) cam4_image_uncrop_pane_g

0x9a6e,	// (0x000335c9) dia3_listrow_pane_ParamLimits

0xbe24,	// (0x0003597f) main_phob2_pane

0x867e,	// (0x000321d9) cell_tport_appsw_pane_cp02_ParamLimits

0x867e,	// (0x000321d9) cell_tport_appsw_pane_cp02

0x8692,	// (0x000321ed) cell_tport_appsw_pane_cp03_ParamLimits

0x8692,	// (0x000321ed) cell_tport_appsw_pane_cp03

0xbe24,	// (0x0003597f) phob2_contact_card_pane

0xbe24,	// (0x0003597f) phob2_listscroll_pane

0x9b37,	// (0x00033692) phob2_list_pane

0x8eae,	// (0x00032a09) scroll_pane_cp034

0x9b3f,	// (0x0003369a) phob2_cc_data_pane_ParamLimits

0x9b3f,	// (0x0003369a) phob2_cc_data_pane

0x9b5e,	// (0x000336b9) phob2_cc_listscroll_pane_ParamLimits

0x9b5e,	// (0x000336b9) phob2_cc_listscroll_pane

0x9b7c,	// (0x000336d7) list_double_large_graphic_phob2_pane_ParamLimits

0x9b7c,	// (0x000336d7) list_double_large_graphic_phob2_pane

0x9b9d,	// (0x000336f8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b9d,	// (0x000336f8) list_double_large_graphic_phob2_pane_g1

0x9baf,	// (0x0003370a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9baf,	// (0x0003370a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc48,	// (0x000397a3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc48,	// (0x000397a3) list_double_large_graphic_phob2_pane_g

0x9be3,	// (0x0003373e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9be3,	// (0x0003373e) list_double_large_graphic_phob2_pane_t1

0x9c07,	// (0x00033762) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9c07,	// (0x00033762) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc51,	// (0x000397ac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc51,	// (0x000397ac) list_double_large_graphic_phob2_pane_t

0xc24b,	// (0x00035da6) list_highlight_pane_cp024

0x9c28,	// (0x00033783) phob2_cc_button_pane

0x9c30,	// (0x0003378b) phob2_cc_data_pane_g1_ParamLimits

0x9c30,	// (0x0003378b) phob2_cc_data_pane_g1

0x9c47,	// (0x000337a2) phob2_cc_data_pane_g2_ParamLimits

0x9c47,	// (0x000337a2) phob2_cc_data_pane_g2

0x0001,

0xfc56,	// (0x000397b1) phob2_cc_data_pane_g_ParamLimits

0xfc56,	// (0x000397b1) phob2_cc_data_pane_g

0x9c59,	// (0x000337b4) phob2_cc_data_pane_t1_ParamLimits

0x9c59,	// (0x000337b4) phob2_cc_data_pane_t1

0x9c71,	// (0x000337cc) phob2_cc_data_pane_t2_ParamLimits

0x9c71,	// (0x000337cc) phob2_cc_data_pane_t2

0x9c89,	// (0x000337e4) phob2_cc_data_pane_t3_ParamLimits

0x9c89,	// (0x000337e4) phob2_cc_data_pane_t3

0x0002,

0xfc5b,	// (0x000397b6) phob2_cc_data_pane_t_ParamLimits

0xfc5b,	// (0x000397b6) phob2_cc_data_pane_t

0x9ca1,	// (0x000337fc) phob2_cc_list_pane_ParamLimits

0x9ca1,	// (0x000337fc) phob2_cc_list_pane

0x6329,	// (0x0002fe84) scroll_pane_cp035_ParamLimits

0x6329,	// (0x0002fe84) scroll_pane_cp035

0xc24b,	// (0x00035da6) bg_button_pane_cp033

0x9cad,	// (0x00033808) phob2_cc_button_pane_g1

0x9cb9,	// (0x00033814) phob2_cc_button_pane_t1

0x9cce,	// (0x00033829) phob2_cc_button_pane_t2

0x0001,

0xfc62,	// (0x000397bd) phob2_cc_button_pane_t

0x9ce0,	// (0x0003383b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ce0,	// (0x0003383b) list_double_large_graphic_phob2_cc_pane

0x9d12,	// (0x0003386d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9d12,	// (0x0003386d) list_double_large_graphic_phob2_cc_pane_g1

0x9d1e,	// (0x00033879) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9d1e,	// (0x00033879) list_double_large_graphic_phob2_cc_pane_g2

0x9d2a,	// (0x00033885) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9d2a,	// (0x00033885) list_double_large_graphic_phob2_cc_pane_g3

0x9d36,	// (0x00033891) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9d36,	// (0x00033891) list_double_large_graphic_phob2_cc_pane_g4

0x9d42,	// (0x0003389d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9d42,	// (0x0003389d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc67,	// (0x000397c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc67,	// (0x000397c2) list_double_large_graphic_phob2_cc_pane_g

0x9d4e,	// (0x000338a9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9d4e,	// (0x000338a9) list_double_large_graphic_phob2_cc_pane_t1

0x9d77,	// (0x000338d2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d77,	// (0x000338d2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc72,	// (0x000397cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc72,	// (0x000397cd) list_double_large_graphic_phob2_cc_pane_t

0x9da0,	// (0x000338fb) list_highlight_pane_cp025_ParamLimits

0x9da0,	// (0x000338fb) list_highlight_pane_cp025

0xc24b,	// (0x00035da6) bg_button_pane_cp033_ParamLimits

0x9cad,	// (0x00033808) phob2_cc_button_pane_g1_ParamLimits

0x9cb9,	// (0x00033814) phob2_cc_button_pane_t1_ParamLimits

0x9cce,	// (0x00033829) phob2_cc_button_pane_t2_ParamLimits

0xfc62,	// (0x000397bd) phob2_cc_button_pane_t_ParamLimits

0x1f36,	// (0x0002ba91) popup_wgtman_window

0x5ae3,	// (0x0002f63e) scroll_pane_cp038

0x973f,	// (0x0003329a) wgtman_btn_pane_cp_01_ParamLimits

0x973f,	// (0x0003329a) wgtman_btn_pane_cp_01

0x9dae,	// (0x00033909) wgtman_content_pane

0x9db7,	// (0x00033912) wgtman_heading_pane

0xbe24,	// (0x0003597f) bg_heading_pane_cp02

0x9dc0,	// (0x0003391b) wgtman_heading_pane_g1

0x9dc8,	// (0x00033923) wgtman_heading_pane_t1

0x9dd6,	// (0x00033931) scroll_pane_cp036

0x9dde,	// (0x00033939) wgtman_list_pane

0x7e12,	// (0x0003196d) wgtman_list_pane_t1_ParamLimits

0x7e12,	// (0x0003196d) wgtman_list_pane_t1

0xb681,	// (0x000351dc) cam4_grid_pane

0x60cf,	// (0x0002fc2a) bg_button_pane_cp015_ParamLimits

0x60e0,	// (0x0002fc3b) bg_button_pane_cp016_ParamLimits

0x60ec,	// (0x0002fc47) bg_button_pane_cp017_ParamLimits

0x614c,	// (0x0002fca7) popup_vitu2_query_window_g3_ParamLimits

0x614c,	// (0x0002fca7) popup_vitu2_query_window_g3

0x61ed,	// (0x0002fd48) popup_vitu2_query_window_t6_ParamLimits

0x61ed,	// (0x0002fd48) popup_vitu2_query_window_t6

0x6218,	// (0x0002fd73) popup_vitu2_query_window_t7_ParamLimits

0x6218,	// (0x0002fd73) popup_vitu2_query_window_t7

0x55ab,	// (0x0002f106) cam4_grid_pane_g1

0x55b4,	// (0x0002f10f) cam4_grid_pane_g2

0x9de6,	// (0x00033941) cam4_grid_pane_g3

0x9def,	// (0x0003394a) cam4_grid_pane_g4

0x0003,

0xfc77,	// (0x000397d2) cam4_grid_pane_g

0x2776,	// (0x0002c2d1) aid_placing_vt_slider_lsc_ParamLimits

0x2a73,	// (0x0002c5ce) vidtel_button_pane_ParamLimits

0x2a73,	// (0x0002c5ce) vidtel_button_pane

0xbe24,	// (0x0003597f) bg_button_pane_cp034

0x9dfa,	// (0x00033955) vidtel_button_pane_g1

0x9e02,	// (0x0003395d) vidtel_button_pane_t1

0x5ec2,	// (0x0002fa1d) aid_size_vtel_slider_touch

0x6329,	// (0x0002fe84) scroll_pane_cp039

0x77c3,	// (0x0003131e) ncim_query_button_pane_cp01_ParamLimits

0x77e2,	// (0x0003133d) ncimui_query_pane_g1_ParamLimits

0xc24b,	// (0x00035da6) input_focus_pane_cp012_ParamLimits

0x7807,	// (0x00031362) ncim_query_entry_pane_t1_ParamLimits

0x6329,	// (0x0002fe84) scroll_pane_cp039_ParamLimits

0xd02d,	// (0x00036b88) navi_pane_bcale_mc_g1

0xd035,	// (0x00036b90) navi_pane_bcale_mc_t1

0x8253,	// (0x00031dae) main_sp_fs_email_pane_g1

0x825f,	// (0x00031dba) main_sp_fs_email_pane_g2

0x0001,

0xfa9b,	// (0x000395f6) main_sp_fs_email_pane_g

0x8bc1,	// (0x0003271c) list_single_cale_mrui_row_pane_g3_ParamLimits

0x8bc1,	// (0x0003271c) list_single_cale_mrui_row_pane_g3

0x8fb1,	// (0x00032b0c) list_single_recal_day_pane_g5_event_pane

0x8fc7,	// (0x00032b22) list_single_recal_day_pane_g7

0x9e18,	// (0x00033973) list_recal_day_event_pane_cp01

0x9e21,	// (0x0003397c) list_recal_vselct_arw_lo_pane_cp01

0x9e29,	// (0x00033984) list_recal_vselct_arw_up_pane_cp01

0x9e31,	// (0x0003398c) list_recal_vselct_pane_cp01

0x5fdf,	// (0x0002fb3a) list_recal_day_event_pane_cp01_g1

0x9e3b,	// (0x00033996) list_recal_day_event_pane_cp01_t1

0x8fcf,	// (0x00032b2a) list_single_recal_day_pane_t1_ParamLimits

0x8fe1,	// (0x00032b3c) list_single_recal_day_pane_t2_ParamLimits

0xfb5a,	// (0x000396b5) list_single_recal_day_pane_t_ParamLimits

0xc4aa,	// (0x00036005) bg_notes_pane_ParamLimits

0xc59f,	// (0x000360fa) list_notes_pane_ParamLimits

0x1f9b,	// (0x0002baf6) scroll_pane_cp06_ParamLimits

0xc5c1,	// (0x0003611c) main_notes_pane_ParamLimits

0xc24b,	// (0x00035da6) main_welc_pane

0x9e8a,	// (0x000339e5) main_welc_body_pane_ParamLimits

0x9e8a,	// (0x000339e5) main_welc_body_pane

0x9ea7,	// (0x00033a02) main_welc_opti_pane_ParamLimits

0x9ea7,	// (0x00033a02) main_welc_opti_pane

0x9f17,	// (0x00033a72) main_welc_pane_t1_ParamLimits

0x9f17,	// (0x00033a72) main_welc_pane_t1

0xa129,	// (0x00033c84) main_welc_body_row_pane_ParamLimits

0xa129,	// (0x00033c84) main_welc_body_row_pane

0xc517,	// (0x00036072) main_welc_opti_row_pane_ParamLimits

0xc517,	// (0x00036072) main_welc_opti_row_pane

0xa13e,	// (0x00033c99) main_welc_opti_row_pane_g1

0xa146,	// (0x00033ca1) main_welc_opti_row_pane_t1

0xa155,	// (0x00033cb0) main_welc_body_row_pane_t1

0x9550,	// (0x000330ab) popup_notif_wgt_heading_pane

0x957a,	// (0x000330d5) aid_size_list_notif_wgt_del_ParamLimits

0x9587,	// (0x000330e2) list_notif_wgt_row_pane_g1_ParamLimits

0x9593,	// (0x000330ee) list_notif_wgt_row_pane_g2_ParamLimits

0x95a2,	// (0x000330fd) list_notif_wgt_row_pane_g3_ParamLimits

0xfbc1,	// (0x0003971c) list_notif_wgt_row_pane_g_ParamLimits

0x95af,	// (0x0003310a) list_notif_wgt_row_pane_t1_ParamLimits

0x95c5,	// (0x00033120) list_notif_wgt_row_pane_t2_ParamLimits

0x95d7,	// (0x00033132) list_notif_wgt_row_pane_t3_ParamLimits

0xfbc8,	// (0x00039723) list_notif_wgt_row_pane_t_ParamLimits

0x97fa,	// (0x00033355) listrow_wgtman_pane_g1_ParamLimits

0x9807,	// (0x00033362) listrow_wgtman_pane_g2_ParamLimits

0xfbf8,	// (0x00039753) listrow_wgtman_pane_g_ParamLimits

0x9825,	// (0x00033380) listrow_wgtman_pane_t1_ParamLimits

0x983d,	// (0x00033398) listrow_wgtman_pane_t2_ParamLimits

0xfbfd,	// (0x00039758) listrow_wgtman_pane_t_ParamLimits

0x9863,	// (0x000333be) wait_bar_pane_cp09_ParamLimits

0xbe24,	// (0x0003597f) bg_popup_heading_pane_cp02

0xa164,	// (0x00033cbf) popup_notif_wgt_heading_pane_g1

0xa16c,	// (0x00033cc7) popup_notif_wgt_heading_pane_t1

0xbe24,	// (0x0003597f) main_vids_pane

0xbe24,	// (0x0003597f) vids_listscroll_pane

0xa17a,	// (0x00033cd5) scroll_pane_cp040

0xbe24,	// (0x0003597f) vids_list_pane

0xa185,	// (0x00033ce0) vids_list_double_pane_ParamLimits

0xa185,	// (0x00033ce0) vids_list_double_pane

0xa196,	// (0x00033cf1) vids_list_double_pane_g1

0xa19f,	// (0x00033cfa) vids_list_double_pane_t1

0xa1ae,	// (0x00033d09) vids_list_double_pane_t2

0x0001,

0xfc96,	// (0x000397f1) vids_list_double_pane_t

0xb0d8,	// (0x00034c33) main_ncimui_pane_ParamLimits

0x74e2,	// (0x0003103d) main_ncimui_pane_g1_ParamLimits

0x74ee,	// (0x00031049) main_ncimui_pane_g2_ParamLimits

0x74ee,	// (0x00031049) main_ncimui_pane_g2

0x0001,

0xf9ae,	// (0x00039509) main_ncimui_pane_g_ParamLimits

0xf9ae,	// (0x00039509) main_ncimui_pane_g

0x9ec2,	// (0x00033a1d) main_welc_pane_g1_ParamLimits

0x9ec2,	// (0x00033a1d) main_welc_pane_g1

0x9ed7,	// (0x00033a32) main_welc_pane_g2_ParamLimits

0x9ed7,	// (0x00033a32) main_welc_pane_g2

0x0003,

0xfc80,	// (0x000397db) main_welc_pane_g_ParamLimits

0xfc80,	// (0x000397db) main_welc_pane_g

0xc4aa,	// (0x00036005) listscroll_mce_pane_ParamLimits

0xd182,	// (0x00036cdd) wait_bar_pane_cp10

0xe441,	// (0x00037f9c) main_cale_day_pane_ParamLimits

0xe441,	// (0x00037f9c) main_cale_week_pane_ParamLimits

0xc4aa,	// (0x00036005) main_messa_pane_ParamLimits

0x5089,	// (0x0002ebe4) main_clock2_btn_pane_ParamLimits

0x5089,	// (0x0002ebe4) main_clock2_btn_pane

0xecc4,	// (0x0003881f) main_clock2_btn_pane_cp01_ParamLimits

0xecc4,	// (0x0003881f) main_clock2_btn_pane_cp01

0x8b1e,	// (0x00032679) list_cale_mrui_pane_ParamLimits

0x9630,	// (0x0003318b) main_cf0_pane_g2

0x0001,

0xfbcf,	// (0x0003972a) main_cf0_pane_g

0x4f53,	// (0x0002eaae) area_left_week_number_pane_ParamLimits

0x4f53,	// (0x0002eaae) area_top_day_name_pane_ParamLimits

0x4f53,	// (0x0002eaae) frame_month_view_pane_ParamLimits

0x4f53,	// (0x0002eaae) grid_month_view_pane_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g1_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g2_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g3_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g4_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g5_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g6_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g7_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g8_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g9_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g10_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g11_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g12_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g13_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g14_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g15_ParamLimits

0x4b0e,	// (0x0002e669) frm_month_g16_ParamLimits

0xfc27,	// (0x00039782) frm_month_g_ParamLimits

0x9acb,	// (0x00033626) cell_top_day_name_pane_t1_ParamLimits

0x4b0e,	// (0x0002e669) cell_area_left_week_number_pane_g1_ParamLimits

0x9acb,	// (0x00033626) cell_area_left_week_number_pane_t1_ParamLimits

0x4b0e,	// (0x0002e669) cell_month_view_pane_g1_ParamLimits

0x9acb,	// (0x00033626) cell_month_view_pane_t1_ParamLimits

0xc4a2,	// (0x00035ffd) main_clock2_btn_pane_g1

0xa1be,	// (0x00033d19) main_clock2_btn_pane_t1

0xc24b,	// (0x00035da6) listscroll_cmail_pane_ParamLimits

0x8253,	// (0x00031dae) main_sp_fs_email_pane_g1_ParamLimits

0x825f,	// (0x00031dba) main_sp_fs_email_pane_g2_ParamLimits

0xfa9b,	// (0x000395f6) main_sp_fs_email_pane_g_ParamLimits

0x8f1f,	// (0x00032a7a) list_recal_day_pane_ParamLimits

0x8f30,	// (0x00032a8b) mian_recal_day_pane_t1

0x8435,	// (0x00031f90) list_single_dyc_row_text_pane_t4_ParamLimits

0x8435,	// (0x00031f90) list_single_dyc_row_text_pane_t4

0x847e,	// (0x00031fd9) list_single_dyc_row_text_pane_t5_ParamLimits

0x847e,	// (0x00031fd9) list_single_dyc_row_text_pane_t5

0x84f4,	// (0x0003204f) list_single_dyc_row_text_pane_t6_ParamLimits

0x84f4,	// (0x0003204f) list_single_dyc_row_text_pane_t6

0x34dd,	// (0x0002d038) aid_mgn_list_cale_time_pane

0xb0d8,	// (0x00034c33) main_gallery2_pane_ParamLimits

0xecda,	// (0x00038835) main_clock2_pane_cp01_t1

0xece8,	// (0x00038843) main_clock2_pane_cp01_t3

0x0001,

0x0289,	// (0x00029de4) main_clock2_pane_cp01_t

0x2285,	// (0x0002bde0) cale_week_scroll_pane_g16_ParamLimits

0x2285,	// (0x0002bde0) cale_week_scroll_pane_g16

0xc7c9,	// (0x00036324) vorec_slider_pane

0x9e02,	// (0x0003395d) vidtel_button_pane_t1_ParamLimits

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g3_ParamLimits

0x916b,	// (0x00032cc6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb7d,	// (0x000396d8) main_fs_bigclock_clock_pane_g_ParamLimits

0x917e,	// (0x00032cd9) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9198,	// (0x00032cf3) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb86,	// (0x000396e1) main_fs_bigclock_clock_pane_t_ParamLimits

0x4904,	// (0x0002e45f) main_mup3_lyrics_pane_ParamLimits

0x4904,	// (0x0002e45f) main_mup3_lyrics_pane

0xa1cc,	// (0x00033d27) main_mup3_lyrics_pane_t1_ParamLimits

0xa1cc,	// (0x00033d27) main_mup3_lyrics_pane_t1

0xb37f,	// (0x00034eda) aid_main_mp4_pane_t1_area

0xb389,	// (0x00034ee4) aid_main_mp4_pane_t2_area

0xb433,	// (0x00034f8e) main_mp4_pane_g7_ParamLimits

0xb433,	// (0x00034f8e) main_mp4_pane_g7

0xb43f,	// (0x00034f9a) main_mp4_pane_g8_ParamLimits

0xb43f,	// (0x00034f9a) main_mp4_pane_g8

0x1666,	// (0x0002b1c1) aid_call6_pane_g1_size

0x9cfb,	// (0x00033856) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9cfb,	// (0x00033856) list_double_large_graphic_phob2_other_pane

0xcf5e,	// (0x00036ab9) list_double_large_graphic_phob2_other_pane_g1

0xbe24,	// (0x0003597f) list_highlight_pane_cp026

0xc24b,	// (0x00035da6) main_welc_pane_ParamLimits

0x81bc,	// (0x00031d17) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x81bc,	// (0x00031d17) main_sp_fs_ctrlbar_pane_g3

0x81d6,	// (0x00031d31) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x81d6,	// (0x00031d31) main_sp_fs_ctrlbar_pane_g4

0x820a,	// (0x00031d65) toolbar2_fixed_button_pane_cp01

0x8215,	// (0x00031d70) toolbar2_fixed_button_pane_cp02

0x8222,	// (0x00031d7d) toolbar2_fixed_button_pane_cp03

0x9e5c,	// (0x000339b7) list_welc_entry_pane_ParamLimits

0x9e5c,	// (0x000339b7) list_welc_entry_pane

0x9eec,	// (0x00033a47) main_welc_pane_g3_ParamLimits

0x9eec,	// (0x00033a47) main_welc_pane_g3

0x9f35,	// (0x00033a90) main_welc_pane_t2_ParamLimits

0x9f35,	// (0x00033a90) main_welc_pane_t2

0x9f50,	// (0x00033aab) main_welc_pane_t3_ParamLimits

0x9f50,	// (0x00033aab) main_welc_pane_t3

0x0005,

0xfc89,	// (0x000397e4) main_welc_pane_t_ParamLimits

0xfc89,	// (0x000397e4) main_welc_pane_t

0xa088,	// (0x00033be3) welc_button_pane_ParamLimits

0xa088,	// (0x00033be3) welc_button_pane

0xa114,	// (0x00033c6f) welc_service_logo_pane_ParamLimits

0xa114,	// (0x00033c6f) welc_service_logo_pane

0xa1e8,	// (0x00033d43) list_single_welc_entry_pane_ParamLimits

0xa1e8,	// (0x00033d43) list_single_welc_entry_pane

0xa1f9,	// (0x00033d54) list_single_welc_entry_pane_g1

0xa201,	// (0x00033d5c) list_single_welc_entry_pane_t1

0xa20f,	// (0x00033d6a) list_single_welc_entry_pane_t2

0x0001,

0xfc9b,	// (0x000397f6) list_single_welc_entry_pane_t

0xbe24,	// (0x0003597f) bg_button_pane_cp035

0xa21d,	// (0x00033d78) welc_button_pane_t1

0xa22b,	// (0x00033d86) welc_service_logo_pane_g1

0xa234,	// (0x00033d8f) welc_service_logo_pane_g2

0x0001,

0xfca0,	// (0x000397fb) welc_service_logo_pane_g

0xb0e6,	// (0x00034c41) main_int_radio_pane

0x7483,	// (0x00030fde) list_single_fs_dyc_pane_g1

0x9bbe,	// (0x00033719) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9bbe,	// (0x00033719) list_double_large_graphic_phob2_pane_g3

0x9bd0,	// (0x0003372b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9bd0,	// (0x0003372b) list_double_large_graphic_phob2_pane_g4

0xa23d,	// (0x00033d98) main_int_radio1_pane_ParamLimits

0xa23d,	// (0x00033d98) main_int_radio1_pane

0xa25a,	// (0x00033db5) find_pane_cp02

0xa263,	// (0x00033dbe) input_focus_pane_cp12_ParamLimits

0xa263,	// (0x00033dbe) input_focus_pane_cp12

0xa273,	// (0x00033dce) input_focus_pane_cp13_ParamLimits

0xa273,	// (0x00033dce) input_focus_pane_cp13

0xa287,	// (0x00033de2) input_focus_pane_cp14_ParamLimits

0xa287,	// (0x00033de2) input_focus_pane_cp14

0xa29b,	// (0x00033df6) int_radio1_listscroll_pane

0xa2a5,	// (0x00033e00) main_int_radio1_pane_g1_ParamLimits

0xa2a5,	// (0x00033e00) main_int_radio1_pane_g1

0xa2bd,	// (0x00033e18) main_int_radio1_pane_t1_ParamLimits

0xa2bd,	// (0x00033e18) main_int_radio1_pane_t1

0xa2d8,	// (0x00033e33) main_int_radio1_pane_t2_ParamLimits

0xa2d8,	// (0x00033e33) main_int_radio1_pane_t2

0xa2f3,	// (0x00033e4e) main_int_radio1_pane_t3_ParamLimits

0xa2f3,	// (0x00033e4e) main_int_radio1_pane_t3

0xa30e,	// (0x00033e69) main_int_radio1_pane_t4_ParamLimits

0xa30e,	// (0x00033e69) main_int_radio1_pane_t4

0xa320,	// (0x00033e7b) main_int_radio1_pane_t5_ParamLimits

0xa320,	// (0x00033e7b) main_int_radio1_pane_t5

0xa332,	// (0x00033e8d) main_int_radio1_pane_t6_ParamLimits

0xa332,	// (0x00033e8d) main_int_radio1_pane_t6

0xa347,	// (0x00033ea2) main_int_radio1_pane_t7_ParamLimits

0xa347,	// (0x00033ea2) main_int_radio1_pane_t7

0xa35c,	// (0x00033eb7) main_int_radio1_pane_t8_ParamLimits

0xa35c,	// (0x00033eb7) main_int_radio1_pane_t8

0xa37b,	// (0x00033ed6) main_int_radio1_pane_t9_ParamLimits

0xa37b,	// (0x00033ed6) main_int_radio1_pane_t9

0xa38d,	// (0x00033ee8) main_int_radio1_pane_t10_ParamLimits

0xa38d,	// (0x00033ee8) main_int_radio1_pane_t10

0xa3b3,	// (0x00033f0e) main_int_radio1_pane_t11_ParamLimits

0xa3b3,	// (0x00033f0e) main_int_radio1_pane_t11

0xa3d9,	// (0x00033f34) main_int_radio1_pane_t12_ParamLimits

0xa3d9,	// (0x00033f34) main_int_radio1_pane_t12

0x000b,

0xfca5,	// (0x00039800) main_int_radio1_pane_t_ParamLimits

0xfca5,	// (0x00039800) main_int_radio1_pane_t

0xb872,	// (0x000353cd) int_radio_list_pane

0x8eae,	// (0x00032a09) scroll_pane_cp037

0xb87a,	// (0x000353d5) list_double_large_graphic_int_radio_pane_ParamLimits

0xb87a,	// (0x000353d5) list_double_large_graphic_int_radio_pane

0xb893,	// (0x000353ee) list_double_large_graphic_int_radio_pane_g1

0xb89c,	// (0x000353f7) list_double_large_graphic_int_radio_pane_t1

0xb8aa,	// (0x00035405) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfcbe,	// (0x00039819) list_double_large_graphic_int_radio_pane_t

0xbe24,	// (0x0003597f) list_highlight_pane_cp027

0x9e76,	// (0x000339d1) main_button_pane_4

0x9eff,	// (0x00033a5a) main_welc_pane_g4_ParamLimits

0x9eff,	// (0x00033a5a) main_welc_pane_g4

0x9f69,	// (0x00033ac4) main_welc_pane_t4_ParamLimits

0x9f69,	// (0x00033ac4) main_welc_pane_t4

0x9f84,	// (0x00033adf) main_welc_pane_t5_ParamLimits

0x9f84,	// (0x00033adf) main_welc_pane_t5

0x9fc5,	// (0x00033b20) main_welc_pane_t6_ParamLimits

0x9fc5,	// (0x00033b20) main_welc_pane_t6

0xa09f,	// (0x00033bfa) welc_button_pane_2_ParamLimits

0xa09f,	// (0x00033bfa) welc_button_pane_2

0xa0c4,	// (0x00033c1f) welc_button_pane_3_ParamLimits

0xa0c4,	// (0x00033c1f) welc_button_pane_3

0x9e76,	// (0x000339d1) welc_button_pane_4

0xa0ec,	// (0x00033c47) welc_button_pane_5_ParamLimits

0xa0ec,	// (0x00033c47) welc_button_pane_5

0x0a5e,	// (0x0002a5b9) main_popup_welc_pane

0xb8d0,	// (0x0003542b) main_welc_sk_g3

0xb8da,	// (0x00035435) main_welc_sk_g4

0xb8e4,	// (0x0003543f) main_welc_sk_t3

0xb8f4,	// (0x0003544f) main_welc_sk_t4

0xb904,	// (0x0003545f) popup_welc_pane_t4

0xb912,	// (0x0003546d) popup_welc_pane_t5

0xb920,	// (0x0003547b) popup_welc_pane_t6

0xb0e6,	// (0x00034c41) main_acti_pane

0xbe24,	// (0x0003597f) main_sso_pane

0xa3eb,	// (0x00033f46) sso_body_pane_ParamLimits

0xa3eb,	// (0x00033f46) sso_body_pane

0xa40b,	// (0x00033f66) sso_logo_pane_ParamLimits

0xa40b,	// (0x00033f66) sso_logo_pane

0xa444,	// (0x00033f9f) sso_sk_pane_ParamLimits

0xa444,	// (0x00033f9f) sso_sk_pane

0xb95e,	// (0x000354b9) main_sso_logo_pane_g1

0xa456,	// (0x00033fb1) sso_sk_pane_t1_ParamLimits

0xa456,	// (0x00033fb1) sso_sk_pane_t1

0xa470,	// (0x00033fcb) sso_sk_pane_t2_ParamLimits

0xa470,	// (0x00033fcb) sso_sk_pane_t2

0x0001,

0xfcc3,	// (0x0003981e) sso_sk_pane_t_ParamLimits

0xfcc3,	// (0x0003981e) sso_sk_pane_t

0xb967,	// (0x000354c2) aid_sso_gap

0xb970,	// (0x000354cb) aid_sso_txt1

0xb97a,	// (0x000354d5) aid_sso_txt2

0xb984,	// (0x000354df) aid_sso_txt3

0x0002,

0xfcc8,	// (0x00039823) aid_sso_txt

0xb98e,	// (0x000354e9) aid_sso_widget

0xa4da,	// (0x00034035) sso_btn_pane_ParamLimits

0xa4da,	// (0x00034035) sso_btn_pane

0xa56e,	// (0x000340c9) sso_option_pane_ParamLimits

0xa56e,	// (0x000340c9) sso_option_pane

0xa622,	// (0x0003417d) sso_query_pane_ParamLimits

0xa622,	// (0x0003417d) sso_query_pane

0xa678,	// (0x000341d3) sso_query_pane_cp01_ParamLimits

0xa678,	// (0x000341d3) sso_query_pane_cp01

0xa6d0,	// (0x0003422b) sso_t_hdr_pane_ParamLimits

0xa6d0,	// (0x0003422b) sso_t_hdr_pane

0xa6fa,	// (0x00034255) sso_t_nml_pane_ParamLimits

0xa6fa,	// (0x00034255) sso_t_nml_pane

0xa750,	// (0x000342ab) sso_t_sub_pane

0xa418,	// (0x00033f73) sso_popup_window_ParamLimits

0xa418,	// (0x00033f73) sso_popup_window

0xa486,	// (0x00033fe1) sso_apps_pane_ParamLimits

0xa486,	// (0x00033fe1) sso_apps_pane

0xa4b0,	// (0x0003400b) sso_body_pane_g1

0xa4ba,	// (0x00034015) sso_body_pane_t1

0xa4ca,	// (0x00034025) sso_body_pane_t2

0x0001,

0xfccf,	// (0x0003982a) sso_body_pane_t

0xa526,	// (0x00034081) sso_btn_pane_cp01_ParamLimits

0xa526,	// (0x00034081) sso_btn_pane_cp01

0xa5f6,	// (0x00034151) sso_prog_pane_ParamLimits

0xa5f6,	// (0x00034151) sso_prog_pane

0xa77f,	// (0x000342da) sso_t_hdr_pane_t1_ParamLimits

0xa77f,	// (0x000342da) sso_t_hdr_pane_t1

0xb998,	// (0x000354f3) input_focus_pane_cp10_ParamLimits

0xb998,	// (0x000354f3) input_focus_pane_cp10

0xb9ac,	// (0x00035507) sso_query_pane_t1_ParamLimits

0xb9ac,	// (0x00035507) sso_query_pane_t1

0xb9bf,	// (0x0003551a) sso_query_pane_t2_ParamLimits

0xb9bf,	// (0x0003551a) sso_query_pane_t2

0xb9d8,	// (0x00035533) sso_query_pane_t3_ParamLimits

0xb9d8,	// (0x00035533) sso_query_pane_t3

0xba02,	// (0x0003555d) sso_query_pane_t4_ParamLimits

0xba02,	// (0x0003555d) sso_query_pane_t4

0x0003,

0xfcd4,	// (0x0003982f) sso_query_pane_t_ParamLimits

0xfcd4,	// (0x0003982f) sso_query_pane_t

0xba26,	// (0x00035581) bg_button_pane_cp22

0xb8b8,	// (0x00035413) sso_btn_pane_t1

0xa792,	// (0x000342ed) sso_t_nml_pane_t1_ParamLimits

0xa792,	// (0x000342ed) sso_t_nml_pane_t1

0xba2f,	// (0x0003558a) sso_option_row_pane_ParamLimits

0xba2f,	// (0x0003558a) sso_option_row_pane

0xba3c,	// (0x00035597) sso_t_sub_pane_t1_ParamLimits

0xba3c,	// (0x00035597) sso_t_sub_pane_t1

0xc24b,	// (0x00035da6) bg_popup_window_pane_cp11_ParamLimits

0xc24b,	// (0x00035da6) bg_popup_window_pane_cp11

0xba59,	// (0x000355b4) popup_sk_window_cp01_ParamLimits

0xba59,	// (0x000355b4) popup_sk_window_cp01

0xba66,	// (0x000355c1) sso_popup_body_pane_ParamLimits

0xba66,	// (0x000355c1) sso_popup_body_pane

0xba73,	// (0x000355ce) scroll_pane_cp21_ParamLimits

0xba73,	// (0x000355ce) scroll_pane_cp21

0xba80,	// (0x000355db) sso_popup_body_t_pane_ParamLimits

0xba80,	// (0x000355db) sso_popup_body_t_pane

0xba8d,	// (0x000355e8) sso_popup_body_t_hdr_pane_ParamLimits

0xba8d,	// (0x000355e8) sso_popup_body_t_hdr_pane

0xa7ad,	// (0x00034308) sso_popup_body_t_nml_pane_ParamLimits

0xa7ad,	// (0x00034308) sso_popup_body_t_nml_pane

0xa7d4,	// (0x0003432f) sso_popup_body_t_sub_pane_ParamLimits

0xa7d4,	// (0x0003432f) sso_popup_body_t_sub_pane

0xba9f,	// (0x000355fa) sso_popup_body_t_hdr_pane_t1

0xa7f7,	// (0x00034352) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa7f7,	// (0x00034352) sso_popup_body_t_nml_pane_t1

0xbaaf,	// (0x0003560a) sso_popup_body_t_sub_pane_t1_ParamLimits

0xbaaf,	// (0x0003560a) sso_popup_body_t_sub_pane_t1

0xc563,	// (0x000360be) sso_prog_pane_g1

0xa830,	// (0x0003438b) sso_apps_pane_comp1_ParamLimits

0xa830,	// (0x0003438b) sso_apps_pane_comp1

0xbad4,	// (0x0003562f) sso_apps_pane_comp1_g1

0xbadc,	// (0x00035637) sso_apps_pane_comp1_t1

0xbaf8,	// (0x00035653) sso_option_row_pane_g1

0xbb10,	// (0x0003566b) sso_option_row_pane_t1

0x875b,	// (0x000322b6) list_cmail_pane_ParamLimits

0xbe24,	// (0x0003597f) main_call7_pane

0x9e49,	// (0x000339a4) bg_welc_area_ParamLimits

0x9e49,	// (0x000339a4) bg_welc_area

0xa003,	// (0x00033b5e) sso_t_hdr_pane_a_t1_ParamLimits

0xa003,	// (0x00033b5e) sso_t_hdr_pane_a_t1

0xa01e,	// (0x00033b79) sso_t_nml_pane_a_t1_ParamLimits

0xa01e,	// (0x00033b79) sso_t_nml_pane_a_t1

0xa04d,	// (0x00033ba8) sso_t_sub_pane_a_t1_ParamLimits

0xa04d,	// (0x00033ba8) sso_t_sub_pane_a_t1

0xa102,	// (0x00033c5d) welc_button_pane_cp01_ParamLimits

0xa102,	// (0x00033c5d) welc_button_pane_cp01

0xb8b8,	// (0x00035413) sso_btn_pane_t1_copy1

0xb8c7,	// (0x00035422) welc_button_pane_2_comp1

0xb92e,	// (0x00035489) sso_t_hdr_pane_p_t1

0xb93e,	// (0x00035499) sso_t_nml_pane_p_t1

0xb94e,	// (0x000354a9) sso_t_sub_pane_p_t1

0xbe24,	// (0x0003597f) main_att_pane

0xbe24,	// (0x0003597f) main_vod_pane

0xa750,	// (0x000342ab) sso_t_sub_pane_ParamLimits

0xbaea,	// (0x00035645) input_focus_pane_cp10_t1

0xbb10,	// (0x0003566b) sso_option_row_pane_t1_ParamLimits

0xa84a,	// (0x000343a5) main_att_body_pane_ParamLimits

0xa84a,	// (0x000343a5) main_att_body_pane

0xa860,	// (0x000343bb) att_btn_emg_pane_ParamLimits

0xa860,	// (0x000343bb) att_btn_emg_pane

0xa87f,	// (0x000343da) att_btn_pane_ParamLimits

0xa87f,	// (0x000343da) att_btn_pane

0xa8ee,	// (0x00034449) att_btn_pane_cp01_ParamLimits

0xa8ee,	// (0x00034449) att_btn_pane_cp01

0xa92e,	// (0x00034489) att_li_srv_pane_ParamLimits

0xa92e,	// (0x00034489) att_li_srv_pane

0xa94b,	// (0x000344a6) att_opt_pane_ParamLimits

0xa94b,	// (0x000344a6) att_opt_pane

0xa995,	// (0x000344f0) att_query_pane_ParamLimits

0xa995,	// (0x000344f0) att_query_pane

0xaa0e,	// (0x00034569) att_query_pane_cp01_ParamLimits

0xaa0e,	// (0x00034569) att_query_pane_cp01

0xaa5a,	// (0x000345b5) att_t_hdr_pane_ParamLimits

0xaa5a,	// (0x000345b5) att_t_hdr_pane

0xaac6,	// (0x00034621) att_t_nml_pane_ParamLimits

0xaac6,	// (0x00034621) att_t_nml_pane

0xab36,	// (0x00034691) att_t_nml_pane_cp01_ParamLimits

0xab36,	// (0x00034691) att_t_nml_pane_cp01

0xab62,	// (0x000346bd) att_t_nmlb_pane_ParamLimits

0xab62,	// (0x000346bd) att_t_nmlb_pane

0xabcf,	// (0x0003472a) att_term_pane_ParamLimits

0xabcf,	// (0x0003472a) att_term_pane

0xac19,	// (0x00034774) main_att_body_pane_g1_ParamLimits

0xac19,	// (0x00034774) main_att_body_pane_g1

0xbb2c,	// (0x00035687) att_t_hdr_pane_t1_ParamLimits

0xbb2c,	// (0x00035687) att_t_hdr_pane_t1

0xbb45,	// (0x000356a0) att_t_nml_pane_t1_ParamLimits

0xbb45,	// (0x000356a0) att_t_nml_pane_t1

0xbb6a,	// (0x000356c5) att_btn_pane_t1

0xba26,	// (0x00035581) bg_button_pane_cp23

0xac45,	// (0x000347a0) att_li_srv_row_pane_ParamLimits

0xac45,	// (0x000347a0) att_li_srv_row_pane

0xbb79,	// (0x000356d4) att_t_nmlb_pane_t1_ParamLimits

0xbb79,	// (0x000356d4) att_t_nmlb_pane_t1

0xbb95,	// (0x000356f0) att_query_pane_t1

0xbba4,	// (0x000356ff) att_query_pane_t2

0xbbb3,	// (0x0003570e) att_query_pane_t3

0x0002,

0xfce2,	// (0x0003983d) att_query_pane_t

0xbbc2,	// (0x0003571d) input_focus_pane_cp11

0xbbcb,	// (0x00035726) att_term_pane_t1_ParamLimits

0xbbcb,	// (0x00035726) att_term_pane_t1

0xbe24,	// (0x0003597f) att_opt_row_pane

0xbbe8,	// (0x00035743) att_opt_row_pane_g1

0xbbf0,	// (0x0003574b) att_opt_row_pane_t1_ParamLimits

0xbbf0,	// (0x0003574b) att_opt_row_pane_t1

0xac55,	// (0x000347b0) att_li_srv_row_pane_g1

0xac5d,	// (0x000347b8) att_li_srv_row_pane_t1_ParamLimits

0xac5d,	// (0x000347b8) att_li_srv_row_pane_t1

0xac5d,	// (0x000347b8) att_li_srv_row_pane_t2_ParamLimits

0xac5d,	// (0x000347b8) att_li_srv_row_pane_t2

0x0001,

0xfce9,	// (0x00039844) att_li_srv_row_pane_t_ParamLimits

0xfce9,	// (0x00039844) att_li_srv_row_pane_t

0xbc09,	// (0x00035764) att_btn_close_pane_g1

0xbe24,	// (0x0003597f) bg_button_pane_cp24

0xac72,	// (0x000347cd) main_vod_body_pane_ParamLimits

0xac72,	// (0x000347cd) main_vod_body_pane

0xac86,	// (0x000347e1) main_vod_body_pane_g1_ParamLimits

0xac86,	// (0x000347e1) main_vod_body_pane_g1

0xacba,	// (0x00034815) scroll_pane_cp24_ParamLimits

0xacba,	// (0x00034815) scroll_pane_cp24

0xad08,	// (0x00034863) vod_btn_pane_ParamLimits

0xad08,	// (0x00034863) vod_btn_pane

0xad4e,	// (0x000348a9) vod_det_pane_ParamLimits

0xad4e,	// (0x000348a9) vod_det_pane

0xad7e,	// (0x000348d9) vod_logo_g1_ParamLimits

0xad7e,	// (0x000348d9) vod_logo_g1

0xadbc,	// (0x00034917) vod_opt_pane_ParamLimits

0xadbc,	// (0x00034917) vod_opt_pane

0xadef,	// (0x0003494a) vod_opt_pane_cp01_ParamLimits

0xadef,	// (0x0003494a) vod_opt_pane_cp01

0xae1b,	// (0x00034976) vod_query_pane_ParamLimits

0xae1b,	// (0x00034976) vod_query_pane

0xae46,	// (0x000349a1) vod_query_pane_cp01_ParamLimits

0xae46,	// (0x000349a1) vod_query_pane_cp01

0xae52,	// (0x000349ad) vod_t_nml_pane_ParamLimits

0xae52,	// (0x000349ad) vod_t_nml_pane

0xaefb,	// (0x00034a56) vod_t_nml_pane_cp01_ParamLimits

0xaefb,	// (0x00034a56) vod_t_nml_pane_cp01

0xaf37,	// (0x00034a92) vod_t_sub_pane_ParamLimits

0xaf37,	// (0x00034a92) vod_t_sub_pane

0xaf68,	// (0x00034ac3) vod_t_sub_pane_cp01_ParamLimits

0xaf68,	// (0x00034ac3) vod_t_sub_pane_cp01

0xbbc2,	// (0x0003571d) vod_query_field_pane

0xbc11,	// (0x0003576c) vod_query_pane_t1

0xbc20,	// (0x0003577b) bg_button_pane_cp25

0xb8b8,	// (0x00035413) sso_btn_pane_t1_copy2

0xaf94,	// (0x00034aef) vod_t_nml_pane_t1_ParamLimits

0xaf94,	// (0x00034aef) vod_t_nml_pane_t1

0xbc29,	// (0x00035784) vod_opt_row_pane_ParamLimits

0xbc29,	// (0x00035784) vod_opt_row_pane

0xbc3b,	// (0x00035796) vod_t_sub_pane_t1_ParamLimits

0xbc3b,	// (0x00035796) vod_t_sub_pane_t1

0xbc54,	// (0x000357af) vod_det_cell_pane_ParamLimits

0xbc54,	// (0x000357af) vod_det_cell_pane

0xbe24,	// (0x0003597f) input_focus_pane_cp15

0xbc65,	// (0x000357c0) vod_query_field_pane_t1

0xbc73,	// (0x000357ce) vod_opt_row_pane_g1_ParamLimits

0xbc73,	// (0x000357ce) vod_opt_row_pane_g1

0xbc7f,	// (0x000357da) vod_opt_row_pane_t1_ParamLimits

0xbc7f,	// (0x000357da) vod_opt_row_pane_t1

0xbc9f,	// (0x000357fa) vod_det_cell_field_pane

0xbca8,	// (0x00035803) vod_det_cell_pane_g1

0xbcb0,	// (0x0003580b) vod_det_cell_pane_t1

0xbe24,	// (0x0003597f) input_focus_pane_cp16

0xbcbf,	// (0x0003581a) vod_det_cell_field_pane_t1

0xafc3,	// (0x00034b1e) call7_btn_grp_pane_ParamLimits

0xafc3,	// (0x00034b1e) call7_btn_grp_pane

0xafdd,	// (0x00034b38) call7_bubble_pane_ParamLimits

0xafdd,	// (0x00034b38) call7_bubble_pane

0xaff4,	// (0x00034b4f) cell_call7_btn_pane_ParamLimits

0xaff4,	// (0x00034b4f) cell_call7_btn_pane

0xb008,	// (0x00034b63) call7_pane_g1_ParamLimits

0xb008,	// (0x00034b63) call7_pane_g1

0xb017,	// (0x00034b72) call7_windows_conf_pane_ParamLimits

0xb017,	// (0x00034b72) call7_windows_conf_pane

0xb031,	// (0x00034b8c) popup_call7_1st_window_ParamLimits

0xb031,	// (0x00034b8c) popup_call7_1st_window

0xb042,	// (0x00034b9d) popup_call7_2nd_window_ParamLimits

0xb042,	// (0x00034b9d) popup_call7_2nd_window

0xb053,	// (0x00034bae) popup_call7_3rd_window_ParamLimits

0xb053,	// (0x00034bae) popup_call7_3rd_window

0xbe24,	// (0x0003597f) bg_button_pane_cp26

0x9887,	// (0x000333e2) cell_call7_btn_pane_g1

0xb064,	// (0x00034bbf) cell_call7_btn_pane_t1

0xbe24,	// (0x0003597f) bg_popup_window_pane_cp12

0xbccd,	// (0x00035828) popup_call7_1st_window_g1

0xbcd5,	// (0x00035830) popup_call7_1st_window_g2

0xbcdd,	// (0x00035838) popup_call7_1st_window_g3

0x0002,

0xfcee,	// (0x00039849) popup_call7_1st_window_g

0xbce5,	// (0x00035840) popup_call7_1st_window_t1

0xbcf4,	// (0x0003584f) popup_call7_1st_window_t2

0xbd02,	// (0x0003585d) popup_call7_1st_window_t3

0x0002,

0xfcf5,	// (0x00039850) popup_call7_1st_window_t

0xbe24,	// (0x0003597f) bg_popup_window_pane_cp13

0xbd10,	// (0x0003586b) popup_call7_2nd_window_g1

0xbd18,	// (0x00035873) popup_call7_2nd_window_g2

0xbd20,	// (0x0003587b) popup_call7_2nd_window_g3

0x0002,

0xfcfc,	// (0x00039857) popup_call7_2nd_window_g

0xbd28,	// (0x00035883) popup_call7_2nd_window_t1

0xbe24,	// (0x0003597f) bg_popup_window_pane_cp14

0xbd37,	// (0x00035892) call7_list_conf_pane

0xbd3f,	// (0x0003589a) call7_list_conf_row_pane_ParamLimits

0xbd3f,	// (0x0003589a) call7_list_conf_row_pane

0xbd52,	// (0x000358ad) call7_list_conf_row_pane_g1

0xbd5a,	// (0x000358b5) call7_list_conf_row_pane_g2

0x0001,

0xfd03,	// (0x0003985e) call7_list_conf_row_pane_g

0xbd62,	// (0x000358bd) call7_list_conf_row_pane_t1

0xbe24,	// (0x0003597f) list_highlight_pane_cp22

0xa5c2,	// (0x0003411d) sso_option_pane_cp01_ParamLimits

0xa5c2,	// (0x0003411d) sso_option_pane_cp01

0xc4aa,	// (0x00036005) msg_header_pane_ParamLimits

0xd2e4,	// (0x00036e3f) bg_button_pane_cp01_ParamLimits

0xd2f8,	// (0x00036e53) input_focus_pane_cp07_ParamLimits

0x828e,	// (0x00031de9) popup_email_progress_window

0xc563,	// (0x000360be) popup_email_progress_window_g1

0xbd70,	// (0x000358cb) popup_email_progress_window_g2

0x0001,

0xfd08,	// (0x00039863) popup_email_progress_window_g

0xbd78,	// (0x000358d3) popup_email_progress_window_t1

0xbe24,	// (0x0003597f) cmail_conv_pane

0x8547,	// (0x000320a2) list_single_dyc_row_pane_g5_ParamLimits

0x8547,	// (0x000320a2) list_single_dyc_row_pane_g5

0x8553,	// (0x000320ae) list_single_dyc_row_pane_g6_ParamLimits

0x8553,	// (0x000320ae) list_single_dyc_row_pane_g6

0x856b,	// (0x000320c6) list_single_dyc_row_pane_g7_ParamLimits

0x856b,	// (0x000320c6) list_single_dyc_row_pane_g7

0x9e7e,	// (0x000339d9) main_button_pane_5_ParamLimits

0x9e7e,	// (0x000339d9) main_button_pane_5

0xa3ff,	// (0x00033f5a) sso_emg_call_btn_pane_ParamLimits

0xa3ff,	// (0x00033f5a) sso_emg_call_btn_pane

0xa765,	// (0x000342c0) sso_t_sub_pane_cp01_ParamLimits

0xa765,	// (0x000342c0) sso_t_sub_pane_cp01

0xbaf8,	// (0x00035653) sso_option_row_pane_g1_ParamLimits

0xbb04,	// (0x0003565f) sso_option_row_pane_g2_ParamLimits

0xbb04,	// (0x0003565f) sso_option_row_pane_g2

0x0001,

0xfcdd,	// (0x00039838) sso_option_row_pane_g_ParamLimits

0xfcdd,	// (0x00039838) sso_option_row_pane_g

0xa90c,	// (0x00034467) att_btn_pane_cp02_ParamLimits

0xa90c,	// (0x00034467) att_btn_pane_cp02

0xbd86,	// (0x000358e1) cmail_conv_hdr_pane

0xbd8f,	// (0x000358ea) list_cmail_conv_pane

0xbd99,	// (0x000358f4) scroll_pane_cp31

0xbda1,	// (0x000358fc) cmail_conv_hdr_pane_t1

0xbdaf,	// (0x0003590a) cmail_conv_hdr_pane_t2

0x0001,

0xfd0d,	// (0x00039868) cmail_conv_hdr_pane_t

0xbdbd,	// (0x00035918) bubble_cmail_conv_pane_ParamLimits

0xbdbd,	// (0x00035918) bubble_cmail_conv_pane

0x8a69,	// (0x000325c4) aid_size_colorization_pane

0xc7c9,	// (0x00036324) bg_bubble_cmail_conv_pane

0xbdd5,	// (0x00035930) body_bubble_cmail_conv_pane

0xcca0,	// (0x000367fb) bubble_cmail_conv_pane_g1

0xbddd,	// (0x00035938) bubble_cmail_conv_pane_g2

0xbde5,	// (0x00035940) bubble_cmail_conv_pane_g3

0x0002,

0xfd12,	// (0x0003986d) bubble_cmail_conv_pane_g

0xbded,	// (0x00035948) bubble_cmail_conv_pane_t1

0x85c5,	// (0x00032120) bg_bubble_cmail_conv_pane_g1

0x85ce,	// (0x00032129) bg_bubble_cmail_conv_pane_g2

0x85d7,	// (0x00032132) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfac6,	// (0x00039621) bg_bubble_cmail_conv_pane_g

0xbdfb,	// (0x00035956) body_bubble_cmail_conv_pane_t1_ParamLimits

0xbdfb,	// (0x00035956) body_bubble_cmail_conv_pane_t1

0xbe12,	// (0x0003596d) body_bubble_cmail_conv_pane_t2_ParamLimits

0xbe12,	// (0x0003596d) body_bubble_cmail_conv_pane_t2

0x0001,

0xfd19,	// (0x00039874) body_bubble_cmail_conv_pane_t_ParamLimits

0xfd19,	// (0x00039874) body_bubble_cmail_conv_pane_t

0xc24b,	// (0x00035da6) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal

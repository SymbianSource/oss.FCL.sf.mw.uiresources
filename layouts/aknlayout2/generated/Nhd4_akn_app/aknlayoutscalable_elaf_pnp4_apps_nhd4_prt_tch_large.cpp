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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000753ad };

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
0x6db3,	// (0x0007c160) Screen

0x6dbf,	// (0x0007c16c) application_window

0x6e1b,	// (0x0007c1c8) area_bottom_pane_ParamLimits

0x6e1b,	// (0x0007c1c8) area_bottom_pane

0x6e74,	// (0x0007c221) area_top_pane_ParamLimits

0x6e74,	// (0x0007c221) area_top_pane

0x6ed8,	// (0x0007c285) call_video_uplink_pane_ParamLimits

0x6ed8,	// (0x0007c285) call_video_uplink_pane

0x6f17,	// (0x0007c2c4) main_pane_ParamLimits

0x6f17,	// (0x0007c2c4) main_pane

0x24ba,	// (0x00077867) context_pane

0xa158,	// (0x0007f505) navi_pane

0xa17e,	// (0x0007f52b) popup_cale_events_window_ParamLimits

0xa17e,	// (0x0007f52b) popup_cale_events_window

0x24cd,	// (0x0007787a) popup_mup_playback_window

0xa196,	// (0x0007f543) signal_pane

0x042b,	// (0x000757d8) main_browser_pane

0x0620,	// (0x000759cd) main_burst_pane

0x9fe8,	// (0x0007f395) main_calc_pane

0x24a0,	// (0x0007784d) main_cale_day_pane

0x7650,	// (0x0007c9fd) main_cale_month_pane

0x24a0,	// (0x0007784d) main_cale_week_pane

0x0620,	// (0x000759cd) main_call_pane

0x00ff,	// (0x000754ac) main_call_poc_pane

0x0620,	// (0x000759cd) main_camera_pane

0x0620,	// (0x000759cd) main_chi_dic_pane

0x0e03,	// (0x000761b0) main_clock_pane

0x00ff,	// (0x000754ac) main_fmradio_pane

0x0620,	// (0x000759cd) main_graph_messa_pane

0x00ff,	// (0x000754ac) main_help_pane

0x042b,	// (0x000757d8) main_im_pane

0x035a,	// (0x00075707) main_image_pane_ParamLimits

0x035a,	// (0x00075707) main_image_pane

0x00ff,	// (0x000754ac) main_location2_pane

0x0620,	// (0x000759cd) main_location_pane

0x035a,	// (0x00075707) main_messa_pane

0x00ff,	// (0x000754ac) main_mp2_pane

0x0620,	// (0x000759cd) main_mp_pane

0x00ff,	// (0x000754ac) main_msg_pane

0x00ff,	// (0x000754ac) main_mup_eq_pane

0x00ff,	// (0x000754ac) main_mup_pane

0x042b,	// (0x000757d8) main_notes_pane

0x00ff,	// (0x000754ac) main_pec_pane

0x00ff,	// (0x000754ac) main_phob_pane

0x00ff,	// (0x000754ac) main_pinb_pane

0x00ff,	// (0x000754ac) main_postcard_pane

0x00ff,	// (0x000754ac) main_qdial_pane

0x0620,	// (0x000759cd) main_skin_pane

0x00ff,	// (0x000754ac) main_smil2_pane

0x0620,	// (0x000759cd) main_smil_pane

0x0620,	// (0x000759cd) main_video_pane

0x0620,	// (0x000759cd) main_video_tele_pane

0x035a,	// (0x00075707) main_viewer_pane_ParamLimits

0x035a,	// (0x00075707) main_viewer_pane

0x0620,	// (0x000759cd) main_vorec_pane

0xa026,	// (0x0007f3d3) popup_blid_sat_info_window_ParamLimits

0xa026,	// (0x0007f3d3) popup_blid_sat_info_window

0xa046,	// (0x0007f3f3) popup_dyc_status_message_window_ParamLimits

0xa046,	// (0x0007f3f3) popup_dyc_status_message_window

0xa054,	// (0x0007f401) popup_grid_large_graphic_window_ParamLimits

0xa054,	// (0x0007f401) popup_grid_large_graphic_window

0xa0e3,	// (0x0007f490) popup_loc_request_window_ParamLimits

0xa0e3,	// (0x0007f490) popup_loc_request_window

0xa130,	// (0x0007f4dd) popup_wml_address_window_ParamLimits

0xa130,	// (0x0007f4dd) popup_wml_address_window

0x9ec0,	// (0x0007f26d) call_muted_g1

0x9b7c,	// (0x0007ef29) popup_call_audio_conf_window_ParamLimits

0x9b7c,	// (0x0007ef29) popup_call_audio_conf_window

0x9ed0,	// (0x0007f27d) popup_call_audio_first_window_ParamLimits

0x9ed0,	// (0x0007f27d) popup_call_audio_first_window

0x9f10,	// (0x0007f2bd) popup_call_audio_in_window_ParamLimits

0x9f10,	// (0x0007f2bd) popup_call_audio_in_window

0x9f34,	// (0x0007f2e1) popup_call_audio_out_window_ParamLimits

0x9f34,	// (0x0007f2e1) popup_call_audio_out_window

0x9f56,	// (0x0007f303) popup_call_audio_second_window_ParamLimits

0x9f56,	// (0x0007f303) popup_call_audio_second_window

0x9f86,	// (0x0007f333) popup_call_audio_wait_window_ParamLimits

0x9f86,	// (0x0007f333) popup_call_audio_wait_window

0x9fa7,	// (0x0007f354) popup_number_entry_window_ParamLimits

0x9fa7,	// (0x0007f354) popup_number_entry_window

0xed27,	// (0x000840d4) bg_popup_call_pane_cp05_ParamLimits

0xed27,	// (0x000840d4) bg_popup_call_pane_cp05

0xed47,	// (0x000840f4) popup_number_entry_window_t1

0xed5a,	// (0x00084107) popup_number_entry_window_t2

0xed6c,	// (0x00084119) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00084477) popup_number_entry_window_t

0xed7e,	// (0x0008412b) text_title_cp2

0xed91,	// (0x0008413e) bg_popup_call_pane_cp_ParamLimits

0xed91,	// (0x0008413e) bg_popup_call_pane_cp

0xed9f,	// (0x0008414c) call_thumbnail_pane

0xeda7,	// (0x00084154) popup_call_audio_in_window_g1_ParamLimits

0xeda7,	// (0x00084154) popup_call_audio_in_window_g1

0xedb3,	// (0x00084160) popup_call_audio_in_window_g2_ParamLimits

0xedb3,	// (0x00084160) popup_call_audio_in_window_g2

0xedbf,	// (0x0008416c) popup_call_audio_in_window_g3_ParamLimits

0xedbf,	// (0x0008416c) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00084480) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00084480) popup_call_audio_in_window_g

0xedcb,	// (0x00084178) popup_call_audio_in_window_t1_ParamLimits

0xedcb,	// (0x00084178) popup_call_audio_in_window_t1

0xede7,	// (0x00084194) popup_call_audio_in_window_t2_ParamLimits

0xede7,	// (0x00084194) popup_call_audio_in_window_t2

0xee03,	// (0x000841b0) popup_call_audio_in_window_t3_ParamLimits

0xee03,	// (0x000841b0) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00084487) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00084487) popup_call_audio_in_window_t

0xed91,	// (0x0008413e) bg_popup_call_pane_cp01_ParamLimits

0xed91,	// (0x0008413e) bg_popup_call_pane_cp01

0xed9f,	// (0x0008414c) call_thumbnail_pane_cp02

0xee16,	// (0x000841c3) call_type_pane_cp022

0xee1e,	// (0x000841cb) popup_call_audio_out_window_g1_ParamLimits

0xee1e,	// (0x000841cb) popup_call_audio_out_window_g1

0xee30,	// (0x000841dd) popup_call_audio_out_window_g2_ParamLimits

0xee30,	// (0x000841dd) popup_call_audio_out_window_g2

0xee3c,	// (0x000841e9) popup_call_audio_out_window_g3_ParamLimits

0xee3c,	// (0x000841e9) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0008448e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0008448e) popup_call_audio_out_window_g

0xee4e,	// (0x000841fb) popup_call_audio_out_window_t1_ParamLimits

0xee4e,	// (0x000841fb) popup_call_audio_out_window_t1

0xee66,	// (0x00084213) popup_call_audio_out_window_t2_ParamLimits

0xee66,	// (0x00084213) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00084495) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00084495) popup_call_audio_out_window_t

0xee7b,	// (0x00084228) bg_popup_call_pane_ParamLimits

0xee7b,	// (0x00084228) bg_popup_call_pane

0x711b,	// (0x0007c4c8) call_thumbnail_pane_cp_ParamLimits

0x711b,	// (0x0007c4c8) call_thumbnail_pane_cp

0xeeff,	// (0x000842ac) call_type_pane_cp01_ParamLimits

0xeeff,	// (0x000842ac) call_type_pane_cp01

0xef43,	// (0x000842f0) popup_call_audio_first_window_g1_ParamLimits

0xef43,	// (0x000842f0) popup_call_audio_first_window_g1

0xef8f,	// (0x0008433c) popup_call_audio_first_window_g2_ParamLimits

0xef8f,	// (0x0008433c) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008449a) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008449a) popup_call_audio_first_window_g

0xefd3,	// (0x00084380) popup_call_audio_first_window_t1_ParamLimits

0xefd3,	// (0x00084380) popup_call_audio_first_window_t1

0x0044,	// (0x000753f1) popup_call_audio_first_window_t4_ParamLimits

0x0044,	// (0x000753f1) popup_call_audio_first_window_t4

0x00d0,	// (0x0007547d) popup_call_audio_first_window_t5_ParamLimits

0x00d0,	// (0x0007547d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0008449f) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0008449f) popup_call_audio_first_window_t

0x00ff,	// (0x000754ac) bg_popup_call_pane_cp02

0x0109,	// (0x000754b6) call_type_pane_cp023

0x0111,	// (0x000754be) popup_call_audio_wait_window_g1

0x0119,	// (0x000754c6) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000844a6) popup_call_audio_wait_window_g

0x0121,	// (0x000754ce) popup_call_audio_wait_window_t3

0x012f,	// (0x000754dc) bg_popup_call_pane_cp03_ParamLimits

0x012f,	// (0x000754dc) bg_popup_call_pane_cp03

0x018f,	// (0x0007553c) call_thumbnail_pane_cp011_ParamLimits

0x018f,	// (0x0007553c) call_thumbnail_pane_cp011

0x019b,	// (0x00075548) call_type_pane_cp034_ParamLimits

0x019b,	// (0x00075548) call_type_pane_cp034

0x01d7,	// (0x00075584) popup_call_audio_second_window_g1_ParamLimits

0x01d7,	// (0x00075584) popup_call_audio_second_window_g1

0x0213,	// (0x000755c0) popup_call_audio_second_window_g2_ParamLimits

0x0213,	// (0x000755c0) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000844ab) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000844ab) popup_call_audio_second_window_g

0x024f,	// (0x000755fc) popup_call_audio_second_window_t1_ParamLimits

0x024f,	// (0x000755fc) popup_call_audio_second_window_t1

0x02d0,	// (0x0007567d) popup_call_audio_second_window_t2_ParamLimits

0x02d0,	// (0x0007567d) popup_call_audio_second_window_t2

0x0306,	// (0x000756b3) popup_call_audio_second_window_t3_ParamLimits

0x0306,	// (0x000756b3) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000844b0) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000844b0) popup_call_audio_second_window_t

0x00ff,	// (0x000754ac) bg_popup_call_pane_cp04

0x033c,	// (0x000756e9) list_conf_pane

0x0344,	// (0x000756f1) popup_call_audio_conf_window_t1

0x0352,	// (0x000756ff) call_thumbnail_pane_g1

0x035a,	// (0x00075707) bg_pinb_pane_ParamLimits

0x035a,	// (0x00075707) bg_pinb_pane

0x0368,	// (0x00075715) find_pinb_pane

0x0371,	// (0x0007571e) listscroll_pinb_pane_ParamLimits

0x0371,	// (0x0007571e) listscroll_pinb_pane

0x0380,	// (0x0007572d) pinb_bg_pane_g1

0x713f,	// (0x0007c4ec) pinb_bg_pane_g2

0x714b,	// (0x0007c4f8) pinb_bg_pane_g3

0x7157,	// (0x0007c504) pinb_bg_pane_g4

0x7163,	// (0x0007c510) pinb_bg_pane_g5

0x716f,	// (0x0007c51c) pinb_bg_pane_g6

0x717a,	// (0x0007c527) pinb_bg_pane_g7

0x7185,	// (0x0007c532) pinb_bg_pane_g8

0x7190,	// (0x0007c53d) pinb_bg_pane_g9

0x719a,	// (0x0007c547) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000844b7) pinb_bg_pane_g

0x71b7,	// (0x0007c564) grid_pinb_pane

0x71c2,	// (0x0007c56f) list_pinb_pane

0x71cd,	// (0x0007c57a) scroll_pane_cp01_ParamLimits

0x71cd,	// (0x0007c57a) scroll_pane_cp01

0x038a,	// (0x00075737) find_pinb_pane_g1_ParamLimits

0x038a,	// (0x00075737) find_pinb_pane_g1

0x03a2,	// (0x0007574f) find_pinb_pane_t1

0x03b4,	// (0x00075761) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000844d1) find_pinb_pane_t

0x03c9,	// (0x00075776) input_focus_pane_cp01_ParamLimits

0x03c9,	// (0x00075776) input_focus_pane_cp01

0x71df,	// (0x0007c58c) cell_pinb_pane_ParamLimits

0x71df,	// (0x0007c58c) cell_pinb_pane

0x720a,	// (0x0007c5b7) cell_pinb_pane_g1_ParamLimits

0x720a,	// (0x0007c5b7) cell_pinb_pane_g1

0x03d5,	// (0x00075782) cell_pinb_pane_g2_ParamLimits

0x03d5,	// (0x00075782) cell_pinb_pane_g2

0x03e1,	// (0x0007578e) cell_pinb_pane_g3_ParamLimits

0x03e1,	// (0x0007578e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000844d6) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000844d6) cell_pinb_pane_g

0x00ff,	// (0x000754ac) grid_highlight_pane_cp01

0x721f,	// (0x0007c5cc) list_pinb_item_pane_ParamLimits

0x721f,	// (0x0007c5cc) list_pinb_item_pane

0x00ff,	// (0x000754ac) list_highlight_pane_cp02

0x7248,	// (0x0007c5f5) list_pinb_item_pane_g1_ParamLimits

0x7248,	// (0x0007c5f5) list_pinb_item_pane_g1

0x7255,	// (0x0007c602) list_pinb_item_pane_g2_ParamLimits

0x7255,	// (0x0007c602) list_pinb_item_pane_g2

0x7261,	// (0x0007c60e) list_pinb_item_pane_g3_ParamLimits

0x7261,	// (0x0007c60e) list_pinb_item_pane_g3

0x7272,	// (0x0007c61f) list_pinb_item_pane_g4_ParamLimits

0x7272,	// (0x0007c61f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000844dd) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000844dd) list_pinb_item_pane_g

0x727e,	// (0x0007c62b) list_pinb_item_pane_t1_ParamLimits

0x727e,	// (0x0007c62b) list_pinb_item_pane_t1

0x72af,	// (0x0007c65c) calc_display_pane

0x72cd,	// (0x0007c67a) calc_paper_pane

0x72e9,	// (0x0007c696) grid_calc_pane

0x00ff,	// (0x000754ac) bg_list_pane_cp01

0x7315,	// (0x0007c6c2) clock_g1

0x731d,	// (0x0007c6ca) clock_g2

0x0001,

0xf139,	// (0x000844e6) clock_g

0x7327,	// (0x0007c6d4) clock_t1_ParamLimits

0x7327,	// (0x0007c6d4) clock_t1

0x733c,	// (0x0007c6e9) clock_t2_ParamLimits

0x733c,	// (0x0007c6e9) clock_t2

0x734e,	// (0x0007c6fb) clock_t3_ParamLimits

0x734e,	// (0x0007c6fb) clock_t3

0x7360,	// (0x0007c70d) clock_t4_ParamLimits

0x7360,	// (0x0007c70d) clock_t4

0x7372,	// (0x0007c71f) clock_t5_ParamLimits

0x7372,	// (0x0007c71f) clock_t5

0x7387,	// (0x0007c734) clock_t6_ParamLimits

0x7387,	// (0x0007c734) clock_t6

0x7399,	// (0x0007c746) clock_t7_ParamLimits

0x7399,	// (0x0007c746) clock_t7

0x73ab,	// (0x0007c758) clock_t8_ParamLimits

0x73ab,	// (0x0007c758) clock_t8

0x73c1,	// (0x0007c76e) clock_t9_ParamLimits

0x73c1,	// (0x0007c76e) clock_t9

0x0008,

0xf13e,	// (0x000844eb) clock_t_ParamLimits

0xf13e,	// (0x000844eb) clock_t

0x03ed,	// (0x0007579a) popup_clock_analogue_window_cp02

0x03ed,	// (0x0007579a) popup_clock_digital_window_cp01

0x03f5,	// (0x000757a2) listscroll_help_pane

0x00ff,	// (0x000754ac) phob_pre_status_pane

0x03ff,	// (0x000757ac) grid_qdial_pane

0x035a,	// (0x00075707) listscroll_mce_pane

0x035a,	// (0x00075707) bg_notes_pane

0x0409,	// (0x000757b6) list_notes_pane

0x73d7,	// (0x0007c784) scroll_pane_cp06

0x0417,	// (0x000757c4) bg_calc_paper_pane

0x73e6,	// (0x0007c793) list_calc_pane

0x042b,	// (0x000757d8) bg_calc_display_pane

0x7400,	// (0x0007c7ad) calc_display_pane_t1

0x7415,	// (0x0007c7c2) calc_display_pane_t2

0x742a,	// (0x0007c7d7) calc_display_pane_t3

0x0002,

0xf151,	// (0x000844fe) calc_display_pane_t

0x743c,	// (0x0007c7e9) cell_calc_pane_ParamLimits

0x743c,	// (0x0007c7e9) cell_calc_pane

0x0437,	// (0x000757e4) bg_calc_paper_pane_g1

0x044f,	// (0x000757fc) bg_calc_paper_pane_g2

0x0443,	// (0x000757f0) bg_calc_paper_pane_g3

0x0467,	// (0x00075814) bg_calc_paper_pane_g4

0x045b,	// (0x00075808) bg_calc_paper_pane_g5

0x7469,	// (0x0007c816) bg_calc_paper_pane_g6

0x747a,	// (0x0007c827) bg_calc_paper_pane_g7

0x748b,	// (0x0007c838) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00084505) bg_calc_paper_pane_g

0x749c,	// (0x0007c849) calc_bg_paper_pane_g9

0x74ad,	// (0x0007c85a) list_calc_item_pane_ParamLimits

0x74ad,	// (0x0007c85a) list_calc_item_pane

0x0473,	// (0x00075820) list_calc_item_pane_g1

0x74dd,	// (0x0007c88a) list_calc_item_pane_t1_ParamLimits

0x74dd,	// (0x0007c88a) list_calc_item_pane_t1

0x74ef,	// (0x0007c89c) list_calc_item_pane_t2_ParamLimits

0x74ef,	// (0x0007c89c) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00084516) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00084516) list_calc_item_pane_t

0x0480,	// (0x0007582d) cell_calc_pane_g1

0x048a,	// (0x00075837) grid_highlight_pane_cp02

0x04b5,	// (0x00075862) bg_calc_display_pane_g1

0x751f,	// (0x0007c8cc) bg_calc_display_pane_g2

0x04ac,	// (0x00075859) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00084520) bg_calc_display_pane_g

0x7529,	// (0x0007c8d6) cell_qdial_pane_ParamLimits

0x7529,	// (0x0007c8d6) cell_qdial_pane

0x753d,	// (0x0007c8ea) cell_qdial_pane_g1_ParamLimits

0x753d,	// (0x0007c8ea) cell_qdial_pane_g1

0x754a,	// (0x0007c8f7) cell_qdial_pane_g2_ParamLimits

0x754a,	// (0x0007c8f7) cell_qdial_pane_g2

0x04be,	// (0x0007586b) cell_qdial_pane_g3_ParamLimits

0x04be,	// (0x0007586b) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00084527) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00084527) cell_qdial_pane_g

0x7567,	// (0x0007c914) cell_qdial_pane_t1_ParamLimits

0x7567,	// (0x0007c914) cell_qdial_pane_t1

0x757f,	// (0x0007c92c) cell_qdial_pane_t2_ParamLimits

0x757f,	// (0x0007c92c) cell_qdial_pane_t2

0x7592,	// (0x0007c93f) cell_qdial_pane_t3_ParamLimits

0x7592,	// (0x0007c93f) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00084530) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00084530) cell_qdial_pane_t

0x00ff,	// (0x000754ac) grid_highlight_pane_cp04

0x04ca,	// (0x00075877) thumbnail_qdial_pane_ParamLimits

0x04ca,	// (0x00075877) thumbnail_qdial_pane

0x0526,	// (0x000758d3) list_help_pane

0x052f,	// (0x000758dc) scroll_pane_cp02

0x75a5,	// (0x0007c952) help_list_pane_t1_ParamLimits

0x75a5,	// (0x0007c952) help_list_pane_t1

0x75dc,	// (0x0007c989) bg_notes_pane_g2

0x75e4,	// (0x0007c991) bg_notes_pane_g3

0x75ec,	// (0x0007c999) notes_bg_pane_g1

0x75f4,	// (0x0007c9a1) notes_bg_pane_g4

0x75fc,	// (0x0007c9a9) notes_bg_pane_g5

0x7604,	// (0x0007c9b1) notes_bg_pane_g6

0x760c,	// (0x0007c9b9) notes_bg_pane_g7

0x7614,	// (0x0007c9c1) notes_bg_pane_g8

0x761c,	// (0x0007c9c9) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0008454e) notes_bg_pane_g

0x7624,	// (0x0007c9d1) list_notes_text_pane_ParamLimits

0x7624,	// (0x0007c9d1) list_notes_text_pane

0x0556,	// (0x00075903) list_notes_text_pane_g1

0x5ae7,	// (0x0007ae94) list_notes_text_pane_t1

0x7650,	// (0x0007c9fd) listscroll_cale_week_pane

0x7675,	// (0x0007ca22) bg_cale_heading_pane

0x0579,	// (0x00075926) bg_cale_pane_cp01

0x7697,	// (0x0007ca44) cale_week_corner_pane

0x76b1,	// (0x0007ca5e) cale_week_day_heading_pane

0x76d3,	// (0x0007ca80) cale_week_scroll_pane_g1

0x76f0,	// (0x0007ca9d) cale_week_scroll_pane_g2

0x7703,	// (0x0007cab0) cale_week_scroll_pane_g3

0x7716,	// (0x0007cac3) cale_week_scroll_pane_g4

0x7729,	// (0x0007cad6) cale_week_scroll_pane_g5

0x773c,	// (0x0007cae9) cale_week_scroll_pane_g6

0x774f,	// (0x0007cafc) cale_week_scroll_pane_g7

0x7764,	// (0x0007cb11) cale_week_scroll_pane_g8

0x7779,	// (0x0007cb26) cale_week_scroll_pane_g9

0x778c,	// (0x0007cb39) cale_week_scroll_pane_g10

0x779f,	// (0x0007cb4c) cale_week_scroll_pane_g11

0x77b2,	// (0x0007cb5f) cale_week_scroll_pane_g12

0x77c9,	// (0x0007cb76) cale_week_scroll_pane_g13

0x77e4,	// (0x0007cb91) cale_week_scroll_pane_g14

0x77ff,	// (0x0007cbac) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0008455d) cale_week_scroll_pane_g

0x782f,	// (0x0007cbdc) cale_week_time_pane

0x7844,	// (0x0007cbf1) grid_cale_week_pane

0x05a8,	// (0x00075955) scroll_pane_cp08

0x7863,	// (0x0007cc10) cell_cale_week_pane_ParamLimits

0x7863,	// (0x0007cc10) cell_cale_week_pane

0x78c5,	// (0x0007cc72) cale_week_day_heading_pane_t1

0x78e0,	// (0x0007cc8d) cale_week_day_heading_pane_t2

0x78fb,	// (0x0007cca8) cale_week_day_heading_pane_t3

0x7916,	// (0x0007ccc3) cale_week_day_heading_pane_t4

0x7931,	// (0x0007ccde) cale_week_day_heading_pane_t5

0x794c,	// (0x0007ccf9) cale_week_day_heading_pane_t6

0x7967,	// (0x0007cd14) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0008457e) cale_week_day_heading_pane_t

0x05c5,	// (0x00075972) bg_cale_side_pane

0x7982,	// (0x0007cd2f) cale_week_time_pane_t1

0x799c,	// (0x0007cd49) cale_week_time_pane_t2

0x79b6,	// (0x0007cd63) cale_week_time_pane_t3

0x79d0,	// (0x0007cd7d) cale_week_time_pane_t4

0x79ea,	// (0x0007cd97) cale_week_time_pane_t5

0x7a04,	// (0x0007cdb1) cale_week_time_pane_t6

0x7a24,	// (0x0007cdd1) cale_week_time_pane_t7

0x7a46,	// (0x0007cdf3) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0008458d) cale_week_time_pane_t

0x7a6a,	// (0x0007ce17) cell_cale_week_pane_g2

0x7a8e,	// (0x0007ce3b) cell_cale_week_pane_g3_ParamLimits

0x7a8e,	// (0x0007ce3b) cell_cale_week_pane_g3

0x05d3,	// (0x00075980) grid_highlight_pane_cp07

0x05db,	// (0x00075988) listscroll_gms_pane

0x05e5,	// (0x00075992) grid_gms_pane

0x05ee,	// (0x0007599b) listscroll_gms_pane_g1

0x05f6,	// (0x000759a3) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0008459e) listscroll_gms_pane_g

0x7aa6,	// (0x0007ce53) scroll_pane_cp010

0x7ab1,	// (0x0007ce5e) cell_gms_pane_ParamLimits

0x7ab1,	// (0x0007ce5e) cell_gms_pane

0x7ac1,	// (0x0007ce6e) cell_gms_pane_g1

0x05fe,	// (0x000759ab) cell_gms_pane_g2

0x0606,	// (0x000759b3) cell_gms_pane_g3

0x060f,	// (0x000759bc) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000845a3) cell_gms_pane_g

0x0618,	// (0x000759c5) grid_highlight_pane_cp09

0x9e68,	// (0x0007f215) phob_pre_status_pane_g1

0x9e70,	// (0x0007f21d) phob_pre_status_pane_g2

0x9e78,	// (0x0007f225) phob_pre_status_pane_g3

0x9e80,	// (0x0007f22d) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x000849a1) phob_pre_status_pane_g

0x9e90,	// (0x0007f23d) phob_pre_status_pane_t1

0x9ea0,	// (0x0007f24d) phob_pre_status_pane_t2

0x9eb0,	// (0x0007f25d) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x000849ac) phob_pre_status_pane_t

0x0620,	// (0x000759cd) bg_list_pane_cp05

0x7ad1,	// (0x0007ce7e) grid_vorec_pane

0x7adb,	// (0x0007ce88) vorec_t1

0x7ae9,	// (0x0007ce96) vorec_t2

0x7af7,	// (0x0007cea4) vorec_t3

0x7b05,	// (0x0007ceb2) vorec_t4

0xecf7,	// (0x000840a4) vorec_t5

0xed05,	// (0x000840b2) vorec_t6

0x0004,

0xf1ff,	// (0x000845ac) vorec_t

0xed13,	// (0x000840c0) wait_bar_pane_cp01

0x7b21,	// (0x0007cece) cell_vorec_pane_ParamLimits

0x7b21,	// (0x0007cece) cell_vorec_pane

0x7b34,	// (0x0007cee1) cell_vorec_pane_g1

0x00ff,	// (0x000754ac) grid_highlight_pane_cp05

0x7b4e,	// (0x0007cefb) cams_zoom_pane

0x7b5a,	// (0x0007cf07) image_vga_pane

0x7b69,	// (0x0007cf16) main_camera_pane_g1

0x7b77,	// (0x0007cf24) main_camera_pane_g2

0x7b83,	// (0x0007cf30) main_camera_pane_g3

0x7b8f,	// (0x0007cf3c) main_camera_pane_g4

0x7b9b,	// (0x0007cf48) main_camera_pane_g5

0x7ba7,	// (0x0007cf54) main_camera_pane_g6

0x7bb3,	// (0x0007cf60) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000845b7) main_camera_pane_g

0x7bbf,	// (0x0007cf6c) main_camera_pane_t1

0x7bd1,	// (0x0007cf7e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000845c8) main_camera_pane_t

0x7bf2,	// (0x0007cf9f) cams_zoom_pane_cp_ParamLimits

0x7bf2,	// (0x0007cf9f) cams_zoom_pane_cp

0x7c16,	// (0x0007cfc3) image_cif_pane_ParamLimits

0x7c16,	// (0x0007cfc3) image_cif_pane

0x7c34,	// (0x0007cfe1) image_subqcif_pane

0x7c3c,	// (0x0007cfe9) main_video_pane_g1_ParamLimits

0x7c3c,	// (0x0007cfe9) main_video_pane_g1

0x7c5c,	// (0x0007d009) main_video_pane_g2_ParamLimits

0x7c5c,	// (0x0007d009) main_video_pane_g2

0x7c8c,	// (0x0007d039) main_video_pane_g3_ParamLimits

0x7c8c,	// (0x0007d039) main_video_pane_g3

0x7cb5,	// (0x0007d062) main_video_pane_g4_ParamLimits

0x7cb5,	// (0x0007d062) main_video_pane_g4

0x7cde,	// (0x0007d08b) main_video_pane_g5_ParamLimits

0x7cde,	// (0x0007d08b) main_video_pane_g5

0x0634,	// (0x000759e1) main_video_pane_g6_ParamLimits

0x0634,	// (0x000759e1) main_video_pane_g6

0x0006,

0xf220,	// (0x000845cd) main_video_pane_g_ParamLimits

0xf220,	// (0x000845cd) main_video_pane_g

0x7d00,	// (0x0007d0ad) main_video_pane_t1_ParamLimits

0x7d00,	// (0x0007d0ad) main_video_pane_t1

0x064e,	// (0x000759fb) cams_zoom_pane_g1

0x0657,	// (0x00075a04) cams_zoom_pane_g2

0x0660,	// (0x00075a0d) cams_zoom_pane_g3

0x0669,	// (0x00075a16) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000845dc) cams_zoom_pane_g

0x7d4a,	// (0x0007d0f7) grid_cams_pane

0x7d58,	// (0x0007d105) linegrid_cams_pane

0x7d66,	// (0x0007d113) cell_cams_pane_ParamLimits

0x7d66,	// (0x0007d113) cell_cams_pane

0x0672,	// (0x00075a1f) cams_burst_image_pane

0x067a,	// (0x00075a27) cell_cams_pane_g1

0x00ff,	// (0x000754ac) grid_highlight_pane_cp03

0x0480,	// (0x0007582d) mp_bg_pane_g1

0x00ff,	// (0x000754ac) bg_list_pane_cp03

0x23c5,	// (0x00077772) bg_mp_pane

0x23cd,	// (0x0007777a) grid_mp_pane

0x23d5,	// (0x00077782) media_player_g1

0x23dd,	// (0x0007778a) media_player_t1

0x23eb,	// (0x00077798) media_player_t2

0x23f9,	// (0x000777a6) media_player_t3

0x2407,	// (0x000777b4) media_player_t4

0x2415,	// (0x000777c2) media_player_t5

0x2423,	// (0x000777d0) media_player_t6

0x2431,	// (0x000777de) media_player_t7

0x0006,

0xf5de,	// (0x0008498b) media_player_t

0x243f,	// (0x000777ec) wait_bar_pane_cp02

0xf5c3,	// (0x00084970) main_usb_pane_t

0x9e5f,	// (0x0007f20c) cell_mp_pane

0x0480,	// (0x0007582d) cell_mp_pane_g1

0x00ff,	// (0x000754ac) grid_highlight_pane_cp06

0x0682,	// (0x00075a2f) grid_skin_colour_pane

0x068a,	// (0x00075a37) list_highlight_pane_cp03

0x7d79,	// (0x0007d126) skin_g1

0x0692,	// (0x00075a3f) skin_t1

0x06a1,	// (0x00075a4e) skin_t2

0x0001,

0xf264,	// (0x00084611) skin_t

0x7d83,	// (0x0007d130) cell_skin_colour_pane_ParamLimits

0x7d83,	// (0x0007d130) cell_skin_colour_pane

0x06af,	// (0x00075a5c) cell_skin_colour_pane_g1

0x7e07,	// (0x0007d1b4) call_video_g1_ParamLimits

0x7e07,	// (0x0007d1b4) call_video_g1

0x7e17,	// (0x0007d1c4) call_video_g2_ParamLimits

0x7e17,	// (0x0007d1c4) call_video_g2

0x0001,

0xf269,	// (0x00084616) call_video_g_ParamLimits

0xf269,	// (0x00084616) call_video_g

0x7e71,	// (0x0007d21e) call_video_uplink_pane_cp1_ParamLimits

0x7e71,	// (0x0007d21e) call_video_uplink_pane_cp1

0x06c1,	// (0x00075a6e) call_video_uplink_pane_cp2

0x7f3d,	// (0x0007d2ea) video_down_crop_pane_ParamLimits

0x7f3d,	// (0x0007d2ea) video_down_crop_pane

0x802f,	// (0x0007d3dc) video_down_pane_ParamLimits

0x802f,	// (0x0007d3dc) video_down_pane

0x06c9,	// (0x00075a76) video_down_subqcif_pane_ParamLimits

0x06c9,	// (0x00075a76) video_down_subqcif_pane

0x06e1,	// (0x00075a8e) video_down_subqcif_pane_cp_ParamLimits

0x06e1,	// (0x00075a8e) video_down_subqcif_pane_cp

0x0707,	// (0x00075ab4) im_reading_pane_ParamLimits

0x0707,	// (0x00075ab4) im_reading_pane

0x814f,	// (0x0007d4fc) im_writing_pane_ParamLimits

0x814f,	// (0x0007d4fc) im_writing_pane

0x816d,	// (0x0007d51a) im_reading_pane_t1

0x0721,	// (0x00075ace) list_im_pane

0x0732,	// (0x00075adf) scroll_pane_cp07

0x81c5,	// (0x0007d572) im_writing_pane_t1_ParamLimits

0x81c5,	// (0x0007d572) im_writing_pane_t1

0x074b,	// (0x00075af8) im_writing_pane_t2_ParamLimits

0x074b,	// (0x00075af8) im_writing_pane_t2

0x0001,

0xf273,	// (0x00084620) im_writing_pane_t_ParamLimits

0xf273,	// (0x00084620) im_writing_pane_t

0x00ff,	// (0x000754ac) input_focus_pane_cp04

0x00ff,	// (0x000754ac) input_focus_pane_cp05

0x81d7,	// (0x0007d584) list_im_single_pane_ParamLimits

0x81d7,	// (0x0007d584) list_im_single_pane

0x81fe,	// (0x0007d5ab) list_single_im_pane_t1

0x9e23,	// (0x0007f1d0) blid_accuracy_pane

0x9e2b,	// (0x0007f1d8) blid_compass_pane

0x9e35,	// (0x0007f1e2) main_location_t1

0x9e43,	// (0x0007f1f0) main_location_t2

0x9e51,	// (0x0007f1fe) main_location_t3

0x0002,

0xf5ed,	// (0x0008499a) main_location_t

0x00ff,	// (0x000754ac) aid_levels_location

0x0480,	// (0x0007582d) blid_accuracy_pane_g1

0x0480,	// (0x0007582d) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00084682) blid_accuracy_pane_g

0x0793,	// (0x00075b40) wml_content_pane

0x07d1,	// (0x00075b7e) wml_button_pane_ParamLimits

0x07d1,	// (0x00075b7e) wml_button_pane

0x820d,	// (0x0007d5ba) wml_list_single_large_pane_ParamLimits

0x820d,	// (0x0007d5ba) wml_list_single_large_pane

0x8238,	// (0x0007d5e5) wml_list_single_medium_pane_ParamLimits

0x8238,	// (0x0007d5e5) wml_list_single_medium_pane

0x826a,	// (0x0007d617) wml_list_single_small_pane_ParamLimits

0x826a,	// (0x0007d617) wml_list_single_small_pane

0x07e5,	// (0x00075b92) wml_selection_box_pane_ParamLimits

0x07e5,	// (0x00075b92) wml_selection_box_pane

0x07f8,	// (0x00075ba5) wml_list_single_pane_t1

0x0807,	// (0x00075bb4) wml_list_single_medium_pane_t1

0x0816,	// (0x00075bc3) wml_list_single_large_pane_t1

0x0825,	// (0x00075bd2) input_focus_pane_cp02_ParamLimits

0x0825,	// (0x00075bd2) input_focus_pane_cp02

0x0838,	// (0x00075be5) wml_selection_box_pane_g1

0x0841,	// (0x00075bee) wml_selection_box_pane_t1_ParamLimits

0x0841,	// (0x00075bee) wml_selection_box_pane_t1

0x035a,	// (0x00075707) bg_wml_button_pane_ParamLimits

0x035a,	// (0x00075707) bg_wml_button_pane

0x0859,	// (0x00075c06) wml_button_pane_g1

0x0861,	// (0x00075c0e) wml_button_pane_t1

0x0859,	// (0x00075c06) wml_button_bg_pane_g1

0x0871,	// (0x00075c1e) wml_button_bg_pane_g2

0x0879,	// (0x00075c26) wml_button_bg_pane_g3

0x0881,	// (0x00075c2e) wml_button_bg_pane_g4

0x0889,	// (0x00075c36) wml_button_bg_pane_g5

0x0891,	// (0x00075c3e) wml_button_bg_pane_g6

0x0899,	// (0x00075c46) wml_button_bg_pane_g7

0x08a1,	// (0x00075c4e) wml_button_bg_pane_g8

0x08a9,	// (0x00075c56) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00084625) wml_button_bg_pane_g

0x82a7,	// (0x0007d654) bg_list_pane_cp02

0x08b1,	// (0x00075c5e) mce_header_pane_ParamLimits

0x08b1,	// (0x00075c5e) mce_header_pane

0x08c7,	// (0x00075c74) mce_icon_pane

0x08c7,	// (0x00075c74) mce_image_pane

0x08d0,	// (0x00075c7d) mce_text_pane_ParamLimits

0x08d0,	// (0x00075c7d) mce_text_pane

0x82b1,	// (0x0007d65e) scroll_pane_cp03

0x07c9,	// (0x00075b76) scroll_pane_cp04

0x08e3,	// (0x00075c90) scroll_pane_cp05_ParamLimits

0x08e3,	// (0x00075c90) scroll_pane_cp05

0x82bb,	// (0x0007d668) mce_header_field_pane_ParamLimits

0x82bb,	// (0x0007d668) mce_header_field_pane

0x82db,	// (0x0007d688) mce_header_field_pane_2_ParamLimits

0x82db,	// (0x0007d688) mce_header_field_pane_2

0x82f1,	// (0x0007d69e) mce_header_field_pane_3

0x82f9,	// (0x0007d6a6) list_single_mce_message_pane_ParamLimits

0x82f9,	// (0x0007d6a6) list_single_mce_message_pane

0x8327,	// (0x0007d6d4) list_single_mce_smart_pane_ParamLimits

0x8327,	// (0x0007d6d4) list_single_mce_smart_pane

0x08ef,	// (0x00075c9c) input_focus_pane_cp03

0x08f8,	// (0x00075ca5) list_header_data_pane

0x8360,	// (0x0007d70d) mce_header_field_pane_t1

0x836e,	// (0x0007d71b) list_single_mce_header_pane_ParamLimits

0x836e,	// (0x0007d71b) list_single_mce_header_pane

0x0900,	// (0x00075cad) list_single_mce_header_pane_t1

0x090f,	// (0x00075cbc) list_single_mce_message_pane_g1

0x0917,	// (0x00075cc4) list_single_mce_message_pane_t1

0x83c4,	// (0x0007d771) bg_cale_heading_pane_cp01_ParamLimits

0x83c4,	// (0x0007d771) bg_cale_heading_pane_cp01

0x0925,	// (0x00075cd2) bg_cale_pane_cp02_ParamLimits

0x0925,	// (0x00075cd2) bg_cale_pane_cp02

0x8412,	// (0x0007d7bf) cale_month_corner_pane

0x8431,	// (0x0007d7de) cale_month_day_heading_pane_ParamLimits

0x8431,	// (0x0007d7de) cale_month_day_heading_pane

0x8497,	// (0x0007d844) cale_month_pane_g1_ParamLimits

0x8497,	// (0x0007d844) cale_month_pane_g1

0x84da,	// (0x0007d887) cale_month_pane_g2_ParamLimits

0x84da,	// (0x0007d887) cale_month_pane_g2

0x8514,	// (0x0007d8c1) cale_month_pane_g3_ParamLimits

0x8514,	// (0x0007d8c1) cale_month_pane_g3

0x8564,	// (0x0007d911) cale_month_pane_g4_ParamLimits

0x8564,	// (0x0007d911) cale_month_pane_g4

0x85b4,	// (0x0007d961) cale_month_pane_g5_ParamLimits

0x85b4,	// (0x0007d961) cale_month_pane_g5

0x8604,	// (0x0007d9b1) cale_month_pane_g6_ParamLimits

0x8604,	// (0x0007d9b1) cale_month_pane_g6

0x8654,	// (0x0007da01) cale_month_pane_g7_ParamLimits

0x8654,	// (0x0007da01) cale_month_pane_g7

0x86bc,	// (0x0007da69) cale_month_pane_g8_ParamLimits

0x86bc,	// (0x0007da69) cale_month_pane_g8

0x8724,	// (0x0007dad1) cale_month_pane_g9_ParamLimits

0x8724,	// (0x0007dad1) cale_month_pane_g9

0x8782,	// (0x0007db2f) cale_month_pane_g10_ParamLimits

0x8782,	// (0x0007db2f) cale_month_pane_g10

0x87e0,	// (0x0007db8d) cale_month_pane_g11_ParamLimits

0x87e0,	// (0x0007db8d) cale_month_pane_g11

0x8834,	// (0x0007dbe1) cale_month_pane_g12_ParamLimits

0x8834,	// (0x0007dbe1) cale_month_pane_g12

0x888a,	// (0x0007dc37) cale_month_pane_g13_ParamLimits

0x888a,	// (0x0007dc37) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00084638) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00084638) cale_month_pane_g

0x88e0,	// (0x0007dc8d) cale_month_week_pane

0x8904,	// (0x0007dcb1) grid_cale_month_pane_ParamLimits

0x8904,	// (0x0007dcb1) grid_cale_month_pane

0x8961,	// (0x0007dd0e) cale_month_day_heading_pane_t1

0x89e7,	// (0x0007dd94) cale_month_day_heading_pane_t2

0x8a60,	// (0x0007de0d) cale_month_day_heading_pane_t3

0x8ad9,	// (0x0007de86) cale_month_day_heading_pane_t4

0x8b52,	// (0x0007deff) cale_month_day_heading_pane_t5

0x8bcb,	// (0x0007df78) cale_month_day_heading_pane_t6

0x8c44,	// (0x0007dff1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00084653) cale_month_day_heading_pane_t

0x05c5,	// (0x00075972) bg_cale_side_pane_cp01

0x8cd5,	// (0x0007e082) cale_month_week_pane_t1

0x8cee,	// (0x0007e09b) cale_month_week_pane_t2

0x8d07,	// (0x0007e0b4) cale_month_week_pane_t3

0x8d20,	// (0x0007e0cd) cale_month_week_pane_t4

0x8d3b,	// (0x0007e0e8) cale_month_week_pane_t5

0x8d5c,	// (0x0007e109) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00084662) cale_month_week_pane_t

0x8d7d,	// (0x0007e12a) cell_cale_month_pane_ParamLimits

0x8d7d,	// (0x0007e12a) cell_cale_month_pane

0x8ea3,	// (0x0007e250) cell_cale_month_pane_g1

0x8eaf,	// (0x0007e25c) cell_cale_month_pane_t1_ParamLimits

0x8eaf,	// (0x0007e25c) cell_cale_month_pane_t1

0x05d3,	// (0x00075980) grid_highlight_pane_cp08

0x0480,	// (0x0007582d) main_smil_g1

0x8edb,	// (0x0007e288) smil_status_pane

0x0964,	// (0x00075d11) smil_text_pane

0x22a5,	// (0x00077652) bg_popup_call3_rect_pane_g8

0x22ad,	// (0x0007765a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0008491b) bg_popup_call3_rect_pane_g

0x2547,	// (0x000778f4) smil_status_volume_pane_g1

0x096e,	// (0x00075d1b) smil_status_pane_t1

0xa24c,	// (0x0007f5f9) volume_smil_pane

0x0985,	// (0x00075d32) list_smil_text_pane

0x8eee,	// (0x0007e29b) scroll_pane_cp011

0x8ef9,	// (0x0007e2a6) smil_text_list_pane_t1_ParamLimits

0x8ef9,	// (0x0007e2a6) smil_text_list_pane_t1

0x8f86,	// (0x0007e333) aid_volume_smil_ParamLimits

0x8f86,	// (0x0007e333) aid_volume_smil

0x0480,	// (0x0007582d) smil_volume_pane_g1

0x0480,	// (0x0007582d) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00084682) smil_volume_pane_g

0x7650,	// (0x0007c9fd) listscroll_cale_day_pane

0x098f,	// (0x00075d3c) bg_cale_pane

0x09a7,	// (0x00075d54) list_cale_pane

0x09ca,	// (0x00075d77) scroll_pane_cp09

0x09db,	// (0x00075d88) cale_bg_pane_g1

0x09e3,	// (0x00075d90) cale_bg_pane_g2

0x09eb,	// (0x00075d98) cale_bg_pane_g3

0x09f3,	// (0x00075da0) cale_bg_pane_g4

0x09fb,	// (0x00075da8) cale_bg_pane_g5

0x0a03,	// (0x00075db0) cale_bg_pane_g6

0x0a0b,	// (0x00075db8) cale_bg_pane_g7

0x0a13,	// (0x00075dc0) cale_bg_pane_g8

0x0a1b,	// (0x00075dc8) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00084687) cale_bg_pane_g

0x8fb0,	// (0x0007e35d) list_cale_time_pane_ParamLimits

0x8fb0,	// (0x0007e35d) list_cale_time_pane

0x0a23,	// (0x00075dd0) list_cale_time_pane_g1_ParamLimits

0x0a23,	// (0x00075dd0) list_cale_time_pane_g1

0x0a2f,	// (0x00075ddc) list_cale_time_pane_g2_ParamLimits

0x0a2f,	// (0x00075ddc) list_cale_time_pane_g2

0x8fd8,	// (0x0007e385) list_cale_time_pane_g3_ParamLimits

0x8fd8,	// (0x0007e385) list_cale_time_pane_g3

0x8fe6,	// (0x0007e393) list_cale_time_pane_g4_ParamLimits

0x8fe6,	// (0x0007e393) list_cale_time_pane_g4

0x8ff4,	// (0x0007e3a1) list_cale_time_pane_g5_ParamLimits

0x8ff4,	// (0x0007e3a1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0008469a) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0008469a) list_cale_time_pane_g

0x0a49,	// (0x00075df6) list_cale_time_pane_t1_ParamLimits

0x0a49,	// (0x00075df6) list_cale_time_pane_t1

0x0a71,	// (0x00075e1e) list_cale_time_pane_t2_ParamLimits

0x0a71,	// (0x00075e1e) list_cale_time_pane_t2

0x92d3,	// (0x0007e680) aid_blid_cardinal_pane

0x9315,	// (0x0007e6c2) compass_pane_t4

0x0a99,	// (0x00075e46) list_cale_time_pane_t4_ParamLimits

0x0a99,	// (0x00075e46) list_cale_time_pane_t4

0x9323,	// (0x0007e6d0) compass_pane_t5

0x9333,	// (0x0007e6e0) compass_pane_t6

0x9341,	// (0x0007e6ee) compass_pane_t7

0x0f1d,	// (0x000762ca) navi_pane_cc_t1

0x10fa,	// (0x000764a7) aid_phob_thumbnail_center_pane

0x9924,	// (0x0007ecd1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000846a7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000846a7) list_cale_time_pane_t

0xed91,	// (0x0008413e) bg_popup_window_pane_cp02_ParamLimits

0xed91,	// (0x0008413e) bg_popup_window_pane_cp02

0x0ac1,	// (0x00075e6e) heading_pane_cp01_ParamLimits

0x0ac1,	// (0x00075e6e) heading_pane_cp01

0x0acd,	// (0x00075e7a) loc_req_pane_ParamLimits

0x0acd,	// (0x00075e7a) loc_req_pane

0x0add,	// (0x00075e8a) loc_type_pane_ParamLimits

0x0add,	// (0x00075e8a) loc_type_pane

0x0aef,	// (0x00075e9c) loc_type_pane_t1_ParamLimits

0x0aef,	// (0x00075e9c) loc_type_pane_t1

0x0b01,	// (0x00075eae) loc_type_pane_t2_ParamLimits

0x0b01,	// (0x00075eae) loc_type_pane_t2

0x0b13,	// (0x00075ec0) loc_type_pane_t3_ParamLimits

0x0b13,	// (0x00075ec0) loc_type_pane_t3

0x0002,

0xf301,	// (0x000846ae) loc_type_pane_t_ParamLimits

0xf301,	// (0x000846ae) loc_type_pane_t

0x0b25,	// (0x00075ed2) list_loc_req_pane

0x0b2f,	// (0x00075edc) scroll_pane_cp012

0x5c16,	// (0x0007afc3) list_single_loc_request_popup_menu_pane_ParamLimits

0x5c16,	// (0x0007afc3) list_single_loc_request_popup_menu_pane

0x0b3a,	// (0x00075ee7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0b3a,	// (0x00075ee7) list_single_loc_request_popup_menu_pane_g1

0x0b46,	// (0x00075ef3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0b46,	// (0x00075ef3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000846b5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000846b5) list_single_loc_request_popup_menu_pane_g

0x0b52,	// (0x00075eff) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0b52,	// (0x00075eff) list_single_loc_request_popup_menu_pane_t1

0x9002,	// (0x0007e3af) bg_popup_window_pane_cp03_ParamLimits

0x9002,	// (0x0007e3af) bg_popup_window_pane_cp03

0x9010,	// (0x0007e3bd) heading_loc_req_pane_ParamLimits

0x9010,	// (0x0007e3bd) heading_loc_req_pane

0x901c,	// (0x0007e3c9) popup_dyc_status_message_window_g1_ParamLimits

0x901c,	// (0x0007e3c9) popup_dyc_status_message_window_g1

0x9028,	// (0x0007e3d5) popup_dyc_status_message_window_t1_ParamLimits

0x9028,	// (0x0007e3d5) popup_dyc_status_message_window_t1

0x903a,	// (0x0007e3e7) popup_dyc_status_message_window_t2_ParamLimits

0x903a,	// (0x0007e3e7) popup_dyc_status_message_window_t2

0x904c,	// (0x0007e3f9) popup_dyc_status_message_window_t3_ParamLimits

0x904c,	// (0x0007e3f9) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000846ba) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000846ba) popup_dyc_status_message_window_t

0x00ff,	// (0x000754ac) bg_heading_pane_cp01

0x0b74,	// (0x00075f21) heading_loc_req_pane_g1

0x0b7c,	// (0x00075f29) heading_loc_req_pane_g2

0x0b84,	// (0x00075f31) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000846c1) heading_loc_req_pane_g

0x0b8c,	// (0x00075f39) heading_loc_req_pane_t1

0x0b9b,	// (0x00075f48) bg_popup_sub_pane_cp01_ParamLimits

0x0b9b,	// (0x00075f48) bg_popup_sub_pane_cp01

0x0ba9,	// (0x00075f56) popup_cale_events_window_g1_ParamLimits

0x0ba9,	// (0x00075f56) popup_cale_events_window_g1

0x0bc9,	// (0x00075f76) popup_cale_events_window_g2_ParamLimits

0x0bc9,	// (0x00075f76) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000846f5) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000846f5) popup_cale_events_window_g

0x0be9,	// (0x00075f96) popup_cale_events_window_t1_ParamLimits

0x0be9,	// (0x00075f96) popup_cale_events_window_t1

0x0bfb,	// (0x00075fa8) popup_cale_events_window_t2_ParamLimits

0x0bfb,	// (0x00075fa8) popup_cale_events_window_t2

0x0c39,	// (0x00075fe6) popup_cale_events_window_t3_ParamLimits

0x0c39,	// (0x00075fe6) popup_cale_events_window_t3

0x0c73,	// (0x00076020) popup_cale_events_window_t4_ParamLimits

0x0c73,	// (0x00076020) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000846fa) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000846fa) popup_cale_events_window_t

0x9076,	// (0x0007e423) call_type_pane

0x1112,	// (0x000764bf) popup_call_status_window_g1

0x9082,	// (0x0007e42f) popup_call_status_window_g2

0x908e,	// (0x0007e43b) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00084703) popup_call_status_window_g

0x0ca9,	// (0x00076056) call_type_pane_g1

0x0cb2,	// (0x0007605f) call_type_pane_g2

0x0001,

0xf35d,	// (0x0008470a) call_type_pane_g

0x00ff,	// (0x000754ac) bg_popup_sub_pane_cp02

0x0cbb,	// (0x00076068) listscroll_popup_wml_pane

0x0cc3,	// (0x00076070) list_wml_pane

0x0ccd,	// (0x0007607a) scroll_pane_cp013

0x0cd8,	// (0x00076085) list_single_graphic_popup_wml_pane_ParamLimits

0x0cd8,	// (0x00076085) list_single_graphic_popup_wml_pane

0x0480,	// (0x0007582d) list_single_graphic_popup_wml_pane_g1

0x0cec,	// (0x00076099) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0008470f) list_single_graphic_popup_wml_pane_g

0x0cf4,	// (0x000760a1) list_single_graphic_popup_wml_pane_t1

0x0d02,	// (0x000760af) aid_call_pane

0x0352,	// (0x000756ff) popup_clock_analogue_window_g1

0x0352,	// (0x000756ff) popup_clock_analogue_window_g2

0x909a,	// (0x0007e447) popup_clock_analogue_window_g3

0x909a,	// (0x0007e447) popup_clock_analogue_window_g4

0x0480,	// (0x0007582d) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00084714) popup_clock_analogue_window_g

0x90a2,	// (0x0007e44f) popup_clock_analogue_window_t1

0x90b0,	// (0x0007e45d) clock_digital_number_pane_ParamLimits

0x90b0,	// (0x0007e45d) clock_digital_number_pane

0x90bc,	// (0x0007e469) clock_digital_number_pane_cp02_ParamLimits

0x90bc,	// (0x0007e469) clock_digital_number_pane_cp02

0x90c8,	// (0x0007e475) clock_digital_number_pane_cp03_ParamLimits

0x90c8,	// (0x0007e475) clock_digital_number_pane_cp03

0x90d4,	// (0x0007e481) clock_digital_number_pane_cp04_ParamLimits

0x90d4,	// (0x0007e481) clock_digital_number_pane_cp04

0x90e0,	// (0x0007e48d) clock_digital_separator_pane_ParamLimits

0x90e0,	// (0x0007e48d) clock_digital_separator_pane

0x90ec,	// (0x0007e499) popup_clock_digital_window_t1

0x0480,	// (0x0007582d) clock_digital_number_pane_g1

0x0480,	// (0x0007582d) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00084682) clock_digital_number_pane_g

0x0480,	// (0x0007582d) clock_digital_separator_pane_g1

0x0480,	// (0x0007582d) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00084682) clock_digital_separator_pane_g

0x00ff,	// (0x000754ac) bg_popup_window_pane_cp04

0x0d12,	// (0x000760bf) heading_pane_cp03

0x0d1a,	// (0x000760c7) listscroll_popup_gms_pane

0x0d22,	// (0x000760cf) grid_large_graphic_popup_pane

0x0d2c,	// (0x000760d9) listscroll_popup_gms_pane_g1

0x0d34,	// (0x000760e1) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0008471f) listscroll_popup_gms_pane_g

0x07c9,	// (0x00075b76) scroll_pane_cp014

0x9109,	// (0x0007e4b6) cell_large_graphic_popup_pane_ParamLimits

0x9109,	// (0x0007e4b6) cell_large_graphic_popup_pane

0x9121,	// (0x0007e4ce) cell_large_graphic_popup_pane_g1_ParamLimits

0x9121,	// (0x0007e4ce) cell_large_graphic_popup_pane_g1

0x0d3c,	// (0x000760e9) cell_large_graphic_popup_pane_g2_ParamLimits

0x0d3c,	// (0x000760e9) cell_large_graphic_popup_pane_g2

0x0d48,	// (0x000760f5) cell_large_graphic_popup_pane_g3_ParamLimits

0x0d48,	// (0x000760f5) cell_large_graphic_popup_pane_g3

0x0d55,	// (0x00076102) cell_large_graphic_popup_pane_g4_ParamLimits

0x0d55,	// (0x00076102) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00084724) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00084724) cell_large_graphic_popup_pane_g

0x0d65,	// (0x00076112) grid_highlight_pane_cp010

0x0480,	// (0x0007582d) bg_popup_call_pane_g1

0x0d6f,	// (0x0007611c) list_single_graphic_popup_conf_pane_ParamLimits

0x0d6f,	// (0x0007611c) list_single_graphic_popup_conf_pane

0x0d82,	// (0x0007612f) list_highlight_pane_cp01

0x0d8b,	// (0x00076138) list_single_graphic_popup_conf_pane_g1

0x0d93,	// (0x00076140) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0008472d) list_single_graphic_popup_conf_pane_g

0x0d9b,	// (0x00076148) list_single_graphic_popup_conf_pane_t1

0x0da9,	// (0x00076156) linegrid_cams_pane_g1

0x912d,	// (0x0007e4da) linegrid_cams_pane_g2

0x0606,	// (0x000759b3) linegrid_cams_pane_g3

0x0db2,	// (0x0007615f) linegrid_cams_pane_g4

0x9136,	// (0x0007e4e3) linegrid_cams_pane_g5

0x913f,	// (0x0007e4ec) linegrid_cams_pane_g6

0x060f,	// (0x000759bc) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00084732) linegrid_cams_pane_g

0x0dbb,	// (0x00076168) popup_clock_analogue_window

0x0dbb,	// (0x00076168) popup_clock_digital_window

0x00ff,	// (0x000754ac) popup_phob_thumbnail_window

0x0480,	// (0x0007582d) call_video_uplink_pane_g1

0x0dc4,	// (0x00076171) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00084741) call_video_uplink_pane_g

0x0dcc,	// (0x00076179) video_uplink_pane

0x0dd4,	// (0x00076181) mce_image_pane_g1

0x9148,	// (0x0007e4f5) mce_image_pane_g2

0x9150,	// (0x0007e4fd) mce_image_pane_g3

0x9158,	// (0x0007e505) mce_image_pane_g4

0x9160,	// (0x0007e50d) mce_image_pane_g5

0x0004,

0xf399,	// (0x00084746) mce_image_pane_g

0x0dde,	// (0x0007618b) control_top_pane_stacon_cp01_ParamLimits

0x0dde,	// (0x0007618b) control_top_pane_stacon_cp01

0x0df2,	// (0x0007619f) uni_indicator_pane_stacon_cp01_ParamLimits

0x0df2,	// (0x0007619f) uni_indicator_pane_stacon_cp01

0x0e03,	// (0x000761b0) bg_popup_sub_pane_cp03

0x9168,	// (0x0007e515) chi_dic_find_pane

0x9170,	// (0x0007e51d) listscroll_chi_dic_pane

0x9179,	// (0x0007e526) main_pane_chidic_g1

0x918c,	// (0x0007e539) chi_dic_find_pane_t1

0x0e0d,	// (0x000761ba) find_chidic_pane

0x0e16,	// (0x000761c3) chi_dic_list_pane_ParamLimits

0x0e16,	// (0x000761c3) chi_dic_list_pane

0x0e27,	// (0x000761d4) scroll_pane_cp020

0x919a,	// (0x0007e547) find_chidic_pane_t1

0x00ff,	// (0x000754ac) input_focus_pane_cp06

0x91a9,	// (0x0007e556) list_chi_dic_pane_ParamLimits

0x91a9,	// (0x0007e556) list_chi_dic_pane

0x91c6,	// (0x0007e573) list_chi_dic_pane_t1_ParamLimits

0x91c6,	// (0x0007e573) list_chi_dic_pane_t1

0x00ff,	// (0x000754ac) list_highlight_pane_cp020

0x0e2f,	// (0x000761dc) bg_cale_heading_pane_g1

0x91d9,	// (0x0007e586) bg_cale_heading_pane_g2

0x91e1,	// (0x0007e58e) bg_cale_heading_pane_g3

0x91e9,	// (0x0007e596) bg_cale_heading_pane_g4

0x91f3,	// (0x0007e5a0) bg_cale_heading_pane_g5

0x91fd,	// (0x0007e5aa) bg_cale_heading_pane_g6

0x9205,	// (0x0007e5b2) bg_cale_heading_pane_g7

0x920d,	// (0x0007e5ba) bg_cale_heading_pane_g8

0x9217,	// (0x0007e5c4) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00084751) bg_cale_heading_pane_g

0x0e2f,	// (0x000761dc) bg_cale_side_pane_g1

0x9221,	// (0x0007e5ce) bg_cale_side_pane_g2

0x922b,	// (0x0007e5d8) bg_cale_side_pane_g3

0x9235,	// (0x0007e5e2) bg_cale_side_pane_g4

0x923f,	// (0x0007e5ec) bg_cale_side_pane_g5

0x9249,	// (0x0007e5f6) bg_cale_side_pane_g6

0x9253,	// (0x0007e600) bg_cale_side_pane_g7

0x925d,	// (0x0007e60a) bg_cale_side_pane_g8

0x9265,	// (0x0007e612) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00084764) bg_cale_side_pane_g

0x926d,	// (0x0007e61a) popup_call_status_window_ParamLimits

0x926d,	// (0x0007e61a) popup_call_status_window

0x0e37,	// (0x000761e4) stacon_top_pane

0x0e3f,	// (0x000761ec) status_pane_ParamLimits

0x0e3f,	// (0x000761ec) status_pane

0x0e54,	// (0x00076201) status_small_pane

0x0e5c,	// (0x00076209) control_pane

0x00ff,	// (0x000754ac) stacon_bottom_pane

0x0e64,	// (0x00076211) list_single_mce_smart_pane_t1_ParamLimits

0x0e64,	// (0x00076211) list_single_mce_smart_pane_t1

0x0e77,	// (0x00076224) list_single_mce_smart_pane_t2_ParamLimits

0x0e77,	// (0x00076224) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00084777) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00084777) list_single_mce_smart_pane_t

0x9279,	// (0x0007e626) compass_pane

0x9285,	// (0x0007e632) main_location2_pane_t1

0x9299,	// (0x0007e646) main_location2_pane_t2

0x92ad,	// (0x0007e65a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0008477c) main_location2_pane_t

0x0e96,	// (0x00076243) compass_pane_g1_ParamLimits

0x0e96,	// (0x00076243) compass_pane_g1

0x92f7,	// (0x0007e6a4) compass_pane_t1

0x9306,	// (0x0007e6b3) compass_pane_t2

0x0005,

0xf3d8,	// (0x00084785) compass_pane_t

0x9351,	// (0x0007e6fe) text_secondary_cp61

0x0f14,	// (0x000762c1) navi_pane_cams_g5

0x0f90,	// (0x0007633d) navi_pane_im_t1

0x0f9e,	// (0x0007634b) navi_pane_mp_g1_ParamLimits

0x0f9e,	// (0x0007634b) navi_pane_mp_g1

0x0fb2,	// (0x0007635f) navi_pane_mp_g2_ParamLimits

0x0fb2,	// (0x0007635f) navi_pane_mp_g2

0x0fbe,	// (0x0007636b) navi_pane_mp_g3_ParamLimits

0x0fbe,	// (0x0007636b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00084799) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00084799) navi_pane_mp_g

0x0fca,	// (0x00076377) navi_pane_mp_t1

0x0fd8,	// (0x00076385) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000847a0) navi_pane_mp_t

0x1043,	// (0x000763f0) navi_pane_vt_g1

0x0fca,	// (0x00076377) navi_pane_vt_t1

0x104b,	// (0x000763f8) navi_slider_pane

0x0620,	// (0x000759cd) zooming_pane

0x105b,	// (0x00076408) navi_slider_pane_g1

0x938c,	// (0x0007e739) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000847a7) navi_slider_pane_g

0x107f,	// (0x0007642c) aid_levels_zoom

0x1087,	// (0x00076434) zooming_pane_g1

0x108f,	// (0x0007643c) zooming_pane_g2

0x108f,	// (0x0007643c) zooming_pane_g3

0x0002,

0xf409,	// (0x000847b6) zooming_pane_g

0x1097,	// (0x00076444) level_10_zoom

0x10a0,	// (0x0007644d) level_11_zoom

0x10a9,	// (0x00076456) level_1_zoom

0x10b2,	// (0x0007645f) level_2_zoom

0x10bb,	// (0x00076468) level_3_zoom

0x10c4,	// (0x00076471) level_4_zoom

0x10cd,	// (0x0007647a) level_5_zoom

0x10d6,	// (0x00076483) level_6_zoom

0x10df,	// (0x0007648c) level_7_zoom

0x10e8,	// (0x00076495) level_8_zoom

0x10f1,	// (0x0007649e) level_9_zoom

0x1102,	// (0x000764af) popup_phob_thumbnail_window_g1

0x110a,	// (0x000764b7) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000847bd) popup_phob_thumbnail_window_g

0x2447,	// (0x000777f4) level_1_location

0x244f,	// (0x000777fc) level_2_location

0x2457,	// (0x00077804) level_3_location

0x245f,	// (0x0007780c) level_4_location

0x0620,	// (0x000759cd) level_5_location

0x939e,	// (0x0007e74b) mce_icon_pane_g1

0x93a6,	// (0x0007e753) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000847c2) mce_icon_pane_g

0x93ae,	// (0x0007e75b) main_mup_pane_g1_ParamLimits

0x93ae,	// (0x0007e75b) main_mup_pane_g1

0x93c6,	// (0x0007e773) main_mup_pane_g2_ParamLimits

0x93c6,	// (0x0007e773) main_mup_pane_g2

0x93da,	// (0x0007e787) main_mup_pane_g3_ParamLimits

0x93da,	// (0x0007e787) main_mup_pane_g3

0x93ee,	// (0x0007e79b) main_mup_pane_g4_ParamLimits

0x93ee,	// (0x0007e79b) main_mup_pane_g4

0x940a,	// (0x0007e7b7) main_mup_pane_g5_ParamLimits

0x940a,	// (0x0007e7b7) main_mup_pane_g5

0x942b,	// (0x0007e7d8) main_mup_pane_g6_ParamLimits

0x942b,	// (0x0007e7d8) main_mup_pane_g6

0x9447,	// (0x0007e7f4) main_mup_pane_g7_ParamLimits

0x9447,	// (0x0007e7f4) main_mup_pane_g7

0x9463,	// (0x0007e810) main_mup_pane_g8_ParamLimits

0x9463,	// (0x0007e810) main_mup_pane_g8

0x947f,	// (0x0007e82c) main_mup_pane_g9_ParamLimits

0x947f,	// (0x0007e82c) main_mup_pane_g9

0x949e,	// (0x0007e84b) main_mup_pane_g10_ParamLimits

0x949e,	// (0x0007e84b) main_mup_pane_g10

0x94bd,	// (0x0007e86a) main_mup_pane_g11_ParamLimits

0x94bd,	// (0x0007e86a) main_mup_pane_g11

0x94d5,	// (0x0007e882) main_mup_pane_g12_ParamLimits

0x94d5,	// (0x0007e882) main_mup_pane_g12

0x94e3,	// (0x0007e890) main_mup_pane_g13_ParamLimits

0x94e3,	// (0x0007e890) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000847c7) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000847c7) main_mup_pane_g

0x94f9,	// (0x0007e8a6) main_mup_pane_t1_ParamLimits

0x94f9,	// (0x0007e8a6) main_mup_pane_t1

0x9516,	// (0x0007e8c3) main_mup_pane_t2_ParamLimits

0x9516,	// (0x0007e8c3) main_mup_pane_t2

0x9530,	// (0x0007e8dd) main_mup_pane_t3_ParamLimits

0x9530,	// (0x0007e8dd) main_mup_pane_t3

0x954a,	// (0x0007e8f7) main_mup_pane_t4_ParamLimits

0x954a,	// (0x0007e8f7) main_mup_pane_t4

0x955c,	// (0x0007e909) main_mup_pane_t5_ParamLimits

0x955c,	// (0x0007e909) main_mup_pane_t5

0x956e,	// (0x0007e91b) main_mup_pane_t6_ParamLimits

0x956e,	// (0x0007e91b) main_mup_pane_t6

0x0005,

0xf435,	// (0x000847e2) main_mup_pane_t_ParamLimits

0xf435,	// (0x000847e2) main_mup_pane_t

0x9584,	// (0x0007e931) mup_progress_pane_ParamLimits

0x9584,	// (0x0007e931) mup_progress_pane

0x9590,	// (0x0007e93d) mup_visualizer_pane_ParamLimits

0x9590,	// (0x0007e93d) mup_visualizer_pane

0x95ce,	// (0x0007e97b) mup_volume_pane_ParamLimits

0x95ce,	// (0x0007e97b) mup_volume_pane

0x1112,	// (0x000764bf) mup_visualizer_pane_g1_ParamLimits

0x1112,	// (0x000764bf) mup_visualizer_pane_g1

0x1112,	// (0x000764bf) mup_visualizer_pane_g2_ParamLimits

0x1112,	// (0x000764bf) mup_visualizer_pane_g2

0x0e96,	// (0x00076243) mup_visualizer_pane_g3_ParamLimits

0x0e96,	// (0x00076243) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000847ef) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000847ef) mup_visualizer_pane_g

0x0480,	// (0x0007582d) mup_volume_pane_g1

0x1128,	// (0x000764d5) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000847f6) mup_volume_pane_g

0x0480,	// (0x0007582d) mup_progress_pane_g1

0x1131,	// (0x000764de) mup_progress_pane_g2

0x113a,	// (0x000764e7) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000847fb) mup_progress_pane_g

0x00ff,	// (0x000754ac) bg_popup_window_pane_cp05

0x1143,	// (0x000764f0) heading_pane_cp02_ParamLimits

0x1143,	// (0x000764f0) heading_pane_cp02

0x115d,	// (0x0007650a) list_popup_blid_pane

0x1165,	// (0x00076512) list_blid_sat_info_pane_ParamLimits

0x1165,	// (0x00076512) list_blid_sat_info_pane

0x1178,	// (0x00076525) list_blid_sat_info_pane_g1

0x1180,	// (0x0007652d) list_blid_sat_info_pane_t1

0x96d9,	// (0x0007ea86) mup_equalizer_pane_ParamLimits

0x96d9,	// (0x0007ea86) mup_equalizer_pane

0x96fa,	// (0x0007eaa7) mup_equalizer_pane_cp1_ParamLimits

0x96fa,	// (0x0007eaa7) mup_equalizer_pane_cp1

0x971b,	// (0x0007eac8) mup_equalizer_pane_cp2_ParamLimits

0x971b,	// (0x0007eac8) mup_equalizer_pane_cp2

0x973c,	// (0x0007eae9) mup_equalizer_pane_cp3_ParamLimits

0x973c,	// (0x0007eae9) mup_equalizer_pane_cp3

0x975d,	// (0x0007eb0a) mup_equalizer_pane_cp4_ParamLimits

0x975d,	// (0x0007eb0a) mup_equalizer_pane_cp4

0x977e,	// (0x0007eb2b) mup_equalizer_pane_cp5

0x9794,	// (0x0007eb41) mup_equalizer_pane_cp6

0x97ac,	// (0x0007eb59) mup_equalizer_pane_cp7

0x2325,	// (0x000776d2) bg_popup_call_poc_act_pane_g9

0x232d,	// (0x000776da) bg_popup_call_poc_act_pane_g10

0x2335,	// (0x000776e2) bg_popup_call_poc_act_pane_g11

0x000a,

0x035a,	// (0x00075707) mup_scale_pane

0x0480,	// (0x0007582d) mup_scale_pane_g1

0x118e,	// (0x0007653b) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00084817) mup_scale_pane_g

0x11b2,	// (0x0007655f) msg_data_pane

0x11ba,	// (0x00076567) scroll_pane_cp017

0x5cff,	// (0x0007b0ac) bg_list_pane_cp04_ParamLimits

0x5cff,	// (0x0007b0ac) bg_list_pane_cp04

0x11c2,	// (0x0007656f) msg_data_pane_g1

0x97d6,	// (0x0007eb83) msg_data_pane_g2

0x97de,	// (0x0007eb8b) msg_data_pane_g3

0x97e6,	// (0x0007eb93) msg_data_pane_g4

0x97ee,	// (0x0007eb9b) msg_data_pane_g5

0x97f6,	// (0x0007eba3) msg_data_pane_g6

0x97fe,	// (0x0007ebab) msg_data_pane_g7

0x0006,

0xf479,	// (0x00084826) msg_data_pane_g

0x5d23,	// (0x0007b0d0) msg_text_pane_ParamLimits

0x5d23,	// (0x0007b0d0) msg_text_pane

0x9806,	// (0x0007ebb3) qrid_highlight_pane_cp011_ParamLimits

0x9806,	// (0x0007ebb3) qrid_highlight_pane_cp011

0x00ff,	// (0x000754ac) msg_body_pane

0x00ff,	// (0x000754ac) msg_header_pane

0x11d3,	// (0x00076580) input_focus_pane_cp07

0x5d7f,	// (0x0007b12c) msg_header_pane_t1_ParamLimits

0x5d7f,	// (0x0007b12c) msg_header_pane_t1

0x5d91,	// (0x0007b13e) msg_header_pane_t2_ParamLimits

0x5d91,	// (0x0007b13e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0008483a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0008483a) msg_header_pane_t

0x11e8,	// (0x00076595) msg_body_pane_g1

0x5da3,	// (0x0007b150) msg_body_pane_t1_ParamLimits

0x5da3,	// (0x0007b150) msg_body_pane_t1

0x5dd4,	// (0x0007b181) msg_body_pane_t2_ParamLimits

0x5dd4,	// (0x0007b181) msg_body_pane_t2

0x5de6,	// (0x0007b193) msg_body_pane_t3_ParamLimits

0x5de6,	// (0x0007b193) msg_body_pane_t3

0x0002,

0xf492,	// (0x0008483f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0008483f) msg_body_pane_t

0x9874,	// (0x0007ec21) main_viewer_pane_g1_ParamLimits

0x9874,	// (0x0007ec21) main_viewer_pane_g1

0x9880,	// (0x0007ec2d) main_viewer_pane_g2_ParamLimits

0x9880,	// (0x0007ec2d) main_viewer_pane_g2

0x988c,	// (0x0007ec39) main_viewer_pane_g3_ParamLimits

0x988c,	// (0x0007ec39) main_viewer_pane_g3

0x989d,	// (0x0007ec4a) main_viewer_pane_g4_ParamLimits

0x989d,	// (0x0007ec4a) main_viewer_pane_g4

0x98ae,	// (0x0007ec5b) main_viewer_pane_g5_ParamLimits

0x98ae,	// (0x0007ec5b) main_viewer_pane_g5

0x98ae,	// (0x0007ec5b) main_viewer_pane_g7_ParamLimits

0x98ae,	// (0x0007ec5b) main_viewer_pane_g7

0x98c0,	// (0x0007ec6d) main_viewer_pane_g8_ParamLimits

0x98c0,	// (0x0007ec6d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0008484f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0008484f) main_viewer_pane_g

0x11f0,	// (0x0007659d) viewer_content_pane_ParamLimits

0x11f0,	// (0x0007659d) viewer_content_pane

0x98f8,	// (0x0007eca5) main_postcard_pane_g1_ParamLimits

0x98f8,	// (0x0007eca5) main_postcard_pane_g1

0x9906,	// (0x0007ecb3) main_postcard_pane_g2_ParamLimits

0x9906,	// (0x0007ecb3) main_postcard_pane_g2

0x9914,	// (0x0007ecc1) main_postcard_pane_g3_ParamLimits

0x9914,	// (0x0007ecc1) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00084860) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00084860) main_postcard_pane_g

0x9924,	// (0x0007ecd1) main_postcard_pane_g4

0x2534,	// (0x000778e1) smil_status_volume_pane_g2

0x9950,	// (0x0007ecfd) postcard_pane_ParamLimits

0x9950,	// (0x0007ecfd) postcard_pane

0x1112,	// (0x000764bf) postcard_pane_g1_ParamLimits

0x1112,	// (0x000764bf) postcard_pane_g1

0x9982,	// (0x0007ed2f) postcard_pane_g2_ParamLimits

0x9982,	// (0x0007ed2f) postcard_pane_g2

0x998e,	// (0x0007ed3b) postcard_pane_g3_ParamLimits

0x998e,	// (0x0007ed3b) postcard_pane_g3

0x120c,	// (0x000765b9) postcard_pane_g4_ParamLimits

0x120c,	// (0x000765b9) postcard_pane_g4

0x999a,	// (0x0007ed47) postcard_pane_g5_ParamLimits

0x999a,	// (0x0007ed47) postcard_pane_g5

0x99a6,	// (0x0007ed53) postcard_pane_g6_ParamLimits

0x99a6,	// (0x0007ed53) postcard_pane_g6

0x11fe,	// (0x000765ab) postcard_pane_g7_ParamLimits

0x11fe,	// (0x000765ab) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0008486d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0008486d) postcard_pane_g

0x99b2,	// (0x0007ed5f) main_mp2_pane_g1_ParamLimits

0x99b2,	// (0x0007ed5f) main_mp2_pane_g1

0x99be,	// (0x0007ed6b) main_mp2_pane_g2_ParamLimits

0x99be,	// (0x0007ed6b) main_mp2_pane_g2

0x99ca,	// (0x0007ed77) main_mp2_pane_g3_ParamLimits

0x99ca,	// (0x0007ed77) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0008487c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0008487c) main_mp2_pane_g

0x99d6,	// (0x0007ed83) main_mp2_pane_t1_ParamLimits

0x99d6,	// (0x0007ed83) main_mp2_pane_t1

0x99ed,	// (0x0007ed9a) main_mp2_pane_t2_ParamLimits

0x99ed,	// (0x0007ed9a) main_mp2_pane_t2

0x99ff,	// (0x0007edac) main_mp2_pane_t3_ParamLimits

0x99ff,	// (0x0007edac) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00084883) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00084883) main_mp2_pane_t

0x121a,	// (0x000765c7) pec_content_pane_ParamLimits

0x121a,	// (0x000765c7) pec_content_pane

0x07c9,	// (0x00075b76) scroll_pane_cp015

0x122c,	// (0x000765d9) pec_attribute_pane_ParamLimits

0x122c,	// (0x000765d9) pec_attribute_pane

0x9a11,	// (0x0007edbe) pec_content_pane_g1_ParamLimits

0x9a11,	// (0x0007edbe) pec_content_pane_g1

0x123c,	// (0x000765e9) pec_content_pane_t1_ParamLimits

0x123c,	// (0x000765e9) pec_content_pane_t1

0x124e,	// (0x000765fb) pec_content_pane_t2_ParamLimits

0x124e,	// (0x000765fb) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0008488a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0008488a) pec_content_pane_t

0x9a1d,	// (0x0007edca) list_single_graphic_pane_cp01_ParamLimits

0x9a1d,	// (0x0007edca) list_single_graphic_pane_cp01

0x035a,	// (0x00075707) bg_popup_sub_pane_cp04

0x1260,	// (0x0007660d) popup_mup_playback_window_g1

0x126c,	// (0x00076619) popup_mup_playback_window_t1

0x1281,	// (0x0007662e) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0008488f) popup_mup_playback_window_t

0x12b8,	// (0x00076665) main_image_pane_g1_ParamLimits

0x12b8,	// (0x00076665) main_image_pane_g1

0x12fb,	// (0x000766a8) scroll_pane_cp018_ParamLimits

0x12fb,	// (0x000766a8) scroll_pane_cp018

0x1313,	// (0x000766c0) scroll_pane_cp016_ParamLimits

0x1313,	// (0x000766c0) scroll_pane_cp016

0x9ab7,	// (0x0007ee64) smil2_image_pane_ParamLimits

0x9ab7,	// (0x0007ee64) smil2_image_pane

0x9ae7,	// (0x0007ee94) smil2_root_pane_ParamLimits

0x9ae7,	// (0x0007ee94) smil2_root_pane

0x9b13,	// (0x0007eec0) smil2_text_pane_ParamLimits

0x9b13,	// (0x0007eec0) smil2_text_pane

0x00ff,	// (0x000754ac) bg_list_pane_cp06

0x134f,	// (0x000766fc) grid_radio_pane

0x00ff,	// (0x000754ac) bg_popup_window_pane_cp06

0x1357,	// (0x00076704) main_fmradio_pane_t1

0x0d12,	// (0x000760bf) heading_pane_cp04

0x1365,	// (0x00076712) main_fmradio_pane_t2

0x237d,	// (0x0007772a) popup_cale_lunar_info_window_g1

0x1373,	// (0x00076720) main_fmradio_pane_t3

0x2385,	// (0x00077732) popup_cale_lunar_info_window_g2

0x1381,	// (0x0007672e) main_fmradio_pane_t4

0x0001,

0x138f,	// (0x0007673c) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0008497d) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000848a4) main_fmradio_pane_t

0x139d,	// (0x0007674a) wait_bar_pane_cp03

0x13a5,	// (0x00076752) cell_fmradio_pane_ParamLimits

0x13a5,	// (0x00076752) cell_fmradio_pane

0x11fe,	// (0x000765ab) cell_fmradio_pane_g1_ParamLimits

0x11fe,	// (0x000765ab) cell_fmradio_pane_g1

0x00ff,	// (0x000754ac) grid_highlight_pane_cp011

0x13b8,	// (0x00076765) poc_content_pane_ParamLimits

0x13b8,	// (0x00076765) poc_content_pane

0x13ca,	// (0x00076777) scroll_pane_cp019

0x9b53,	// (0x0007ef00) popup_call_poc_act_window_ParamLimits

0x9b53,	// (0x0007ef00) popup_call_poc_act_window

0x9b60,	// (0x0007ef0d) popup_call_poc_inact_window_ParamLimits

0x9b60,	// (0x0007ef0d) popup_call_poc_inact_window

0xf594,	// (0x00084941) bg_popup_call_poc_act_pane_g

0x233d,	// (0x000776ea) bg_popup_call_poc_inact_pane_g1

0x2345,	// (0x000776f2) bg_popup_call_poc_inact_pane_g2

0x13d2,	// (0x0007677f) popup_call_poc_act_window_g2

0x234d,	// (0x000776fa) bg_popup_call_poc_inact_pane_g3

0x22cd,	// (0x0007767a) bg_popup_call_poc_inact_pane_g4

0x2355,	// (0x00077702) bg_popup_call_poc_inact_pane_g5

0x13da,	// (0x00076787) popup_call_poc_act_window_t1_ParamLimits

0x13da,	// (0x00076787) popup_call_poc_act_window_t1

0x1402,	// (0x000767af) popup_call_poc_act_window_t2_ParamLimits

0x1402,	// (0x000767af) popup_call_poc_act_window_t2

0x142a,	// (0x000767d7) popup_call_poc_act_window_t3_ParamLimits

0x142a,	// (0x000767d7) popup_call_poc_act_window_t3

0x1452,	// (0x000767ff) popup_call_poc_act_window_t4_ParamLimits

0x1452,	// (0x000767ff) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000848af) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000848af) popup_call_poc_act_window_t

0x235d,	// (0x0007770a) bg_popup_call_poc_inact_pane_g6

0x2365,	// (0x00077712) bg_popup_call_poc_inact_pane_g7

0x236d,	// (0x0007771a) bg_popup_call_poc_inact_pane_g8

0x1464,	// (0x00076811) popup_call_poc_inact_window_g2

0x2375,	// (0x00077722) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00084958) bg_popup_call_poc_inact_pane_g

0x146c,	// (0x00076819) popup_call_poc_inact_window_t1_ParamLimits

0x146c,	// (0x00076819) popup_call_poc_inact_window_t1

0x1481,	// (0x0007682e) popup_call_poc_inact_window_t2_ParamLimits

0x1481,	// (0x0007682e) popup_call_poc_inact_window_t2

0x1496,	// (0x00076843) popup_call_poc_inact_window_t3_ParamLimits

0x1496,	// (0x00076843) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000848b8) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000848b8) popup_call_poc_inact_window_t

0x24ba,	// (0x00077867) context_pane_ParamLimits

0xa196,	// (0x0007f543) signal_pane_ParamLimits

0x0620,	// (0x000759cd) main_call2_pane

0xa109,	// (0x0007f4b6) popup_phob_thumbnail2_window_ParamLimits

0xa109,	// (0x0007f4b6) popup_phob_thumbnail2_window

0x9822,	// (0x0007ebcf) aid_hotspot_pointer_arrow_pane

0x982a,	// (0x0007ebd7) aid_hotspot_pointer_hand_pane

0x9e88,	// (0x0007f235) phob_pre_status_pane_g5

0x7b4e,	// (0x0007cefb) cams_zoom_pane_ParamLimits

0x7b5a,	// (0x0007cf07) image_vga_pane_ParamLimits

0x7b69,	// (0x0007cf16) main_camera_pane_g1_ParamLimits

0x7b77,	// (0x0007cf24) main_camera_pane_g2_ParamLimits

0x7b83,	// (0x0007cf30) main_camera_pane_g3_ParamLimits

0x7b8f,	// (0x0007cf3c) main_camera_pane_g4_ParamLimits

0x7b9b,	// (0x0007cf48) main_camera_pane_g5_ParamLimits

0x7ba7,	// (0x0007cf54) main_camera_pane_g6_ParamLimits

0x7bb3,	// (0x0007cf60) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000845b7) main_camera_pane_g_ParamLimits

0x7bbf,	// (0x0007cf6c) main_camera_pane_t1_ParamLimits

0x7bd1,	// (0x0007cf7e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000845c8) main_camera_pane_t_ParamLimits

0x035a,	// (0x00075707) bg_popup_preview_window_pane_cp01_ParamLimits

0x035a,	// (0x00075707) bg_popup_preview_window_pane_cp01

0x14ab,	// (0x00076858) popup_phob_thumbnail2_window_g1_ParamLimits

0x14ab,	// (0x00076858) popup_phob_thumbnail2_window_g1

0x00ff,	// (0x000754ac) call2_cli_visual_pane

0x9b7c,	// (0x0007ef29) popup_call2_audio_conf_window_ParamLimits

0x9b7c,	// (0x0007ef29) popup_call2_audio_conf_window

0x9b91,	// (0x0007ef3e) popup_call2_audio_first_window_ParamLimits

0x9b91,	// (0x0007ef3e) popup_call2_audio_first_window

0x9c2f,	// (0x0007efdc) popup_call2_audio_in_window_ParamLimits

0x9c2f,	// (0x0007efdc) popup_call2_audio_in_window

0x9c71,	// (0x0007f01e) popup_call2_audio_out_window_ParamLimits

0x9c71,	// (0x0007f01e) popup_call2_audio_out_window

0x9cd3,	// (0x0007f080) popup_call2_audio_second_window_ParamLimits

0x9cd3,	// (0x0007f080) popup_call2_audio_second_window

0x9d31,	// (0x0007f0de) popup_call2_audio_wait_window_ParamLimits

0x9d31,	// (0x0007f0de) popup_call2_audio_wait_window

0x00ff,	// (0x000754ac) bg_popup_call2_act_pane_cp03

0x033c,	// (0x000756e9) list_conf_pane_cp

0x14b7,	// (0x00076864) popup_call2_audio_conf_window_t1

0x14c5,	// (0x00076872) list_single_graphic_popup_conf2_pane_ParamLimits

0x14c5,	// (0x00076872) list_single_graphic_popup_conf2_pane

0x0d82,	// (0x0007612f) list_highlight_pane_cp04

0x14d8,	// (0x00076885) list_single_graphic_popup_conf2_pane_g1

0x0d93,	// (0x00076140) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000848bf) list_single_graphic_popup_conf2_pane_g

0x14e2,	// (0x0007688f) list_single_graphic_popup_conf2_pane_t1

0x14f0,	// (0x0007689d) bg_popup_call2_act_pane_cp01_ParamLimits

0x14f0,	// (0x0007689d) bg_popup_call2_act_pane_cp01

0x157a,	// (0x00076927) call_type_pane_cp05_ParamLimits

0x157a,	// (0x00076927) call_type_pane_cp05

0x15ce,	// (0x0007697b) popup_call2_audio_second_window_g1_ParamLimits

0x15ce,	// (0x0007697b) popup_call2_audio_second_window_g1

0x1622,	// (0x000769cf) popup_call2_audio_second_window_g2_ParamLimits

0x1622,	// (0x000769cf) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000848c4) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000848c4) popup_call2_audio_second_window_g

0x1687,	// (0x00076a34) popup_call2_audio_second_window_t1_ParamLimits

0x1687,	// (0x00076a34) popup_call2_audio_second_window_t1

0x1742,	// (0x00076aef) popup_call2_audio_second_window_t2_ParamLimits

0x1742,	// (0x00076aef) popup_call2_audio_second_window_t2

0x1795,	// (0x00076b42) popup_call2_audio_second_window_t3_ParamLimits

0x1795,	// (0x00076b42) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000848cb) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000848cb) popup_call2_audio_second_window_t

0x00ff,	// (0x000754ac) bg_popup_call2_in_pane_cp02

0x0109,	// (0x000754b6) call_type_pane_cp04

0x0111,	// (0x000754be) popup_call2_audio_wait_window_g1

0x0119,	// (0x000754c6) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000844a6) popup_call2_audio_wait_window_g

0x0121,	// (0x000754ce) popup_call2_audio_wait_window_t3

0x1888,	// (0x00076c35) bg_popup_call2_act_pane_ParamLimits

0x1888,	// (0x00076c35) bg_popup_call2_act_pane

0x1948,	// (0x00076cf5) call_type_pane_cp03_ParamLimits

0x1948,	// (0x00076cf5) call_type_pane_cp03

0x19ac,	// (0x00076d59) popup_call2_audio_first_window_g1_ParamLimits

0x19ac,	// (0x00076d59) popup_call2_audio_first_window_g1

0x1a1c,	// (0x00076dc9) popup_call2_audio_first_window_g2_ParamLimits

0x1a1c,	// (0x00076dc9) popup_call2_audio_first_window_g2

0x1112,	// (0x000764bf) popup_call2_audio_first_window_g3_ParamLimits

0x1112,	// (0x000764bf) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000848d4) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000848d4) popup_call2_audio_first_window_g

0x1afa,	// (0x00076ea7) popup_call2_audio_first_window_t1_ParamLimits

0x1afa,	// (0x00076ea7) popup_call2_audio_first_window_t1

0x1bfd,	// (0x00076faa) popup_call2_audio_first_window_t4_ParamLimits

0x1bfd,	// (0x00076faa) popup_call2_audio_first_window_t4

0x1ce0,	// (0x0007708d) popup_call2_audio_first_window_t5_ParamLimits

0x1ce0,	// (0x0007708d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000848df) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000848df) popup_call2_audio_first_window_t

0x0352,	// (0x000756ff) bg_popup_call2_act_pane_g1

0x238d,	// (0x0007773a) popup_cale_lunar_info_window_t1

0x239b,	// (0x00077748) popup_cale_lunar_info_window_t2

0x23a9,	// (0x00077756) popup_cale_lunar_info_window_t3

0x00ff,	// (0x000754ac) bg_popup_call2_bubble_pane

0x1de1,	// (0x0007718e) bg_popup_call2_in_pane_cp01_ParamLimits

0x1de1,	// (0x0007718e) bg_popup_call2_in_pane_cp01

0xee16,	// (0x000841c3) call_type_pane_cp02

0x1e29,	// (0x000771d6) popup_call2_audio_out_window_g1_ParamLimits

0x1e29,	// (0x000771d6) popup_call2_audio_out_window_g1

0x1e55,	// (0x00077202) popup_call2_audio_out_window_g2_ParamLimits

0x1e55,	// (0x00077202) popup_call2_audio_out_window_g2

0x1e7d,	// (0x0007722a) popup_call2_audio_out_window_g3_ParamLimits

0x1e7d,	// (0x0007722a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000848e8) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000848e8) popup_call2_audio_out_window_g

0x1eb8,	// (0x00077265) popup_call2_audio_out_window_t1_ParamLimits

0x1eb8,	// (0x00077265) popup_call2_audio_out_window_t1

0x1f17,	// (0x000772c4) popup_call2_audio_out_window_t2_ParamLimits

0x1f17,	// (0x000772c4) popup_call2_audio_out_window_t2

0x1f6b,	// (0x00077318) popup_call2_audio_out_window_t3_ParamLimits

0x1f6b,	// (0x00077318) popup_call2_audio_out_window_t3

0x1f81,	// (0x0007732e) popup_call2_audio_out_window_t4_ParamLimits

0x1f81,	// (0x0007732e) popup_call2_audio_out_window_t4

0x1f97,	// (0x00077344) popup_call2_audio_out_window_t5_ParamLimits

0x1f97,	// (0x00077344) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000848f1) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000848f1) popup_call2_audio_out_window_t

0x1ffb,	// (0x000773a8) bg_popup_call2_in_pane_ParamLimits

0x1ffb,	// (0x000773a8) bg_popup_call2_in_pane

0x2057,	// (0x00077404) popup_call2_audio_in_window_g1_ParamLimits

0x2057,	// (0x00077404) popup_call2_audio_in_window_g1

0x208f,	// (0x0007743c) popup_call2_audio_in_window_g2_ParamLimits

0x208f,	// (0x0007743c) popup_call2_audio_in_window_g2

0x20c7,	// (0x00077474) popup_call2_audio_in_window_g3_ParamLimits

0x20c7,	// (0x00077474) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000848fe) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000848fe) popup_call2_audio_in_window_g

0x211f,	// (0x000774cc) popup_call2_audio_in_window_t1_ParamLimits

0x211f,	// (0x000774cc) popup_call2_audio_in_window_t1

0x219f,	// (0x0007754c) popup_call2_audio_in_window_t2_ParamLimits

0x219f,	// (0x0007754c) popup_call2_audio_in_window_t2

0x221f,	// (0x000775cc) popup_call2_audio_in_window_t3_ParamLimits

0x221f,	// (0x000775cc) popup_call2_audio_in_window_t3

0x2239,	// (0x000775e6) popup_call2_audio_in_window_t4_ParamLimits

0x2239,	// (0x000775e6) popup_call2_audio_in_window_t4

0x224b,	// (0x000775f8) popup_call2_audio_in_window_t5_ParamLimits

0x224b,	// (0x000775f8) popup_call2_audio_in_window_t5

0x2260,	// (0x0007760d) popup_call2_audio_in_window_t6_ParamLimits

0x2260,	// (0x0007760d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00084907) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00084907) popup_call2_audio_in_window_t

0x0352,	// (0x000756ff) bg_popup_call2_in_pane_g1

0x23b7,	// (0x00077764) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x00084982) popup_cale_lunar_info_window_t

0x035a,	// (0x00075707) bg_popup_call2_rect_pane_ParamLimits

0x035a,	// (0x00075707) bg_popup_call2_rect_pane

0x00ff,	// (0x000754ac) call2_cli_visual_graphic_pane

0x00ff,	// (0x000754ac) call2_cli_visual_text_pane

0xa23f,	// (0x0007f5ec) smil_status_volume_pane_g3

0x0002,

0x0480,	// (0x0007582d) call2_cli_visual_graphic_pane_g1

0x0480,	// (0x0007582d) call2_cli_visual_graphic_pane_g2

0x0480,	// (0x0007582d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00084914) call2_cli_visual_graphic_pane_g

0x2275,	// (0x00077622) bg_popup_call2_rect_pane_g1

0x051e,	// (0x000758cb) bg_popup_call2_rect_pane_g2

0x227d,	// (0x0007762a) bg_popup_call2_rect_pane_g3

0x2285,	// (0x00077632) bg_popup_call2_rect_pane_g4

0x228d,	// (0x0007763a) bg_popup_call2_rect_pane_g5

0x2295,	// (0x00077642) bg_popup_call2_rect_pane_g6

0x229d,	// (0x0007764a) bg_popup_call2_rect_pane_g7

0x22a5,	// (0x00077652) bg_popup_call2_rect_pane_g8

0x22ad,	// (0x0007765a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0008491b) bg_popup_call2_rect_pane_g

0x22b5,	// (0x00077662) bg_popup_call2_bubble_pane_g1

0x22bd,	// (0x0007766a) bg_popup_call2_bubble_pane_g2

0x22c5,	// (0x00077672) bg_popup_call2_bubble_pane_g3

0x22cd,	// (0x0007767a) bg_popup_call2_bubble_pane_g4

0x22d5,	// (0x00077682) bg_popup_call2_bubble_pane_g5

0x22dd,	// (0x0007768a) bg_popup_call2_bubble_pane_g6

0x22e5,	// (0x00077692) bg_popup_call2_bubble_pane_g7

0x22ed,	// (0x0007769a) bg_popup_call2_bubble_pane_g8

0x22f5,	// (0x000776a2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0008492e) bg_popup_call2_bubble_pane_g

0x7660,	// (0x0007ca0d) aid_cale_week_size_cell_pane

0x7be3,	// (0x0007cf90) aid_cams_cif_uncrop_pane_ParamLimits

0x7be3,	// (0x0007cf90) aid_cams_cif_uncrop_pane

0x7d3e,	// (0x0007d0eb) aid_cams_size_cell_ParamLimits

0x7d3e,	// (0x0007d0eb) aid_cams_size_cell

0x7d4a,	// (0x0007d0f7) grid_cams_pane_ParamLimits

0x7d58,	// (0x0007d105) linegrid_cams_pane_ParamLimits

0x7e2f,	// (0x0007d1dc) call_video_pane_t1

0x7e50,	// (0x0007d1fd) call_video_pane_t2

0x0001,

0xf26e,	// (0x0008461b) call_video_pane_t

0x839e,	// (0x0007d74b) aid_cale_month_size_cell_pane_ParamLimits

0x839e,	// (0x0007d74b) aid_cale_month_size_cell_pane

0xf61e,	// (0x000849cb) smil_status_volume_pane_g

0xa24c,	// (0x0007f5f9) volume_smil_pane_ParamLimits

0x6dd3,	// (0x0007c180) aid_popup2_width_pane

0x755a,	// (0x0007c907) cell_qdial_pane_g4_ParamLimits

0x755a,	// (0x0007c907) cell_qdial_pane_g4

0x92d3,	// (0x0007e680) aid_blid_cardinal_pane_ParamLimits

0x92e3,	// (0x0007e690) aid_blid_destination_pane_ParamLimits

0x92e3,	// (0x0007e690) aid_blid_destination_pane

0x035a,	// (0x00075707) bg_popup_call_poc_act_pane_ParamLimits

0x035a,	// (0x00075707) bg_popup_call_poc_act_pane

0x035a,	// (0x00075707) bg_popup_call_poc_inact_pane_ParamLimits

0x035a,	// (0x00075707) bg_popup_call_poc_inact_pane

0x22fd,	// (0x000776aa) bg_popup_call_poc_act_pane_g1

0x2305,	// (0x000776b2) bg_popup_call_poc_act_pane_g2

0x230d,	// (0x000776ba) bg_popup_call_poc_act_pane_g3

0x22cd,	// (0x0007767a) bg_popup_call_poc_act_pane_g4

0x22d5,	// (0x00077682) bg_popup_call_poc_act_pane_g5

0x2315,	// (0x000776c2) bg_popup_call_poc_act_pane_g6

0x22e5,	// (0x00077692) bg_popup_call_poc_act_pane_g7

0x231d,	// (0x000776ca) bg_popup_call_poc_act_pane_g8

0x00ff,	// (0x000754ac) main_usb_pane

0xa03c,	// (0x0007f3e9) popup_cale_lunar_info_window

0x816d,	// (0x0007d51a) im_reading_pane_t1_ParamLimits

0x0721,	// (0x00075ace) list_im_pane_ParamLimits

0x0732,	// (0x00075adf) scroll_pane_cp07_ParamLimits

0x00ff,	// (0x000754ac) grid_highlight_pane_cp012

0x035a,	// (0x00075707) mup_scale_pane_ParamLimits

0x1112,	// (0x000764bf) main_usb_pane_g1_ParamLimits

0x1112,	// (0x000764bf) main_usb_pane_g1

0x9dab,	// (0x0007f158) main_usb_pane_g2_ParamLimits

0x9dab,	// (0x0007f158) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0008496b) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0008496b) main_usb_pane_g

0x9db7,	// (0x0007f164) main_usb_pane_t1_ParamLimits

0x9db7,	// (0x0007f164) main_usb_pane_t1

0x9dc9,	// (0x0007f176) main_usb_pane_t2_ParamLimits

0x9dc9,	// (0x0007f176) main_usb_pane_t2

0x9ddb,	// (0x0007f188) main_usb_pane_t3_ParamLimits

0x9ddb,	// (0x0007f188) main_usb_pane_t3

0x9ded,	// (0x0007f19a) main_usb_pane_t4_ParamLimits

0x9ded,	// (0x0007f19a) main_usb_pane_t4

0x9dff,	// (0x0007f1ac) main_usb_pane_t5_ParamLimits

0x9dff,	// (0x0007f1ac) main_usb_pane_t5

0x9e11,	// (0x0007f1be) main_usb_pane_t6_ParamLimits

0x9e11,	// (0x0007f1be) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00084970) main_usb_pane_t_ParamLimits

0x9279,	// (0x0007e626) aid_text_placing

0x9285,	// (0x0007e632) main_location2_pane_t1_ParamLimits

0x9299,	// (0x0007e646) main_location2_pane_t2_ParamLimits

0x92ad,	// (0x0007e65a) main_location2_pane_t3_ParamLimits

0x92c1,	// (0x0007e66e) main_location2_pane_t4_ParamLimits

0x92c1,	// (0x0007e66e) main_location2_pane_t4

0xf3cf,	// (0x0008477c) main_location2_pane_t_ParamLimits

0x0396,	// (0x00075743) find_pinb_pane_g2_ParamLimits

0x0396,	// (0x00075743) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000844cc) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000844cc) find_pinb_pane_g

0x03a2,	// (0x0007574f) find_pinb_pane_t1_ParamLimits

0x03b4,	// (0x00075761) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000844d1) find_pinb_pane_t_ParamLimits

0x00ff,	// (0x000754ac) main_call3_pane

0x8961,	// (0x0007dd0e) cale_month_day_heading_pane_t1_ParamLimits

0x89e7,	// (0x0007dd94) cale_month_day_heading_pane_t2_ParamLimits

0x8a60,	// (0x0007de0d) cale_month_day_heading_pane_t3_ParamLimits

0x8ad9,	// (0x0007de86) cale_month_day_heading_pane_t4_ParamLimits

0x8b52,	// (0x0007deff) cale_month_day_heading_pane_t5_ParamLimits

0x8bcb,	// (0x0007df78) cale_month_day_heading_pane_t6_ParamLimits

0x8c44,	// (0x0007dff1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00084653) cale_month_day_heading_pane_t_ParamLimits

0x097c,	// (0x00075d29) smil_status_volume_pane

0x996a,	// (0x0007ed17) postcard_address_pane_ParamLimits

0x996a,	// (0x0007ed17) postcard_address_pane

0x9976,	// (0x0007ed23) postcard_message_pane_ParamLimits

0x9976,	// (0x0007ed23) postcard_message_pane

0x9d70,	// (0x0007f11d) call2_cli_visual_pane_t1_ParamLimits

0x9d70,	// (0x0007f11d) call2_cli_visual_pane_t1

0xa3a3,	// (0x0007f750) postcard_message_pane_t1_ParamLimits

0xa3a3,	// (0x0007f750) postcard_message_pane_t1

0xa38c,	// (0x0007f739) postcard_address_pane_t1_ParamLimits

0xa38c,	// (0x0007f739) postcard_address_pane_t1

0xa37d,	// (0x0007f72a) popup_call3_audio_in_window_ParamLimits

0xa37d,	// (0x0007f72a) popup_call3_audio_in_window

0xa261,	// (0x0007f60e) bg_popup_call3_in_pane_ParamLimits

0xa261,	// (0x0007f60e) bg_popup_call3_in_pane

0xa2c3,	// (0x0007f670) popup_call3_audio_in_window_g1_ParamLimits

0xa2c3,	// (0x0007f670) popup_call3_audio_in_window_g1

0xa2db,	// (0x0007f688) popup_call3_audio_in_window_g2_ParamLimits

0xa2db,	// (0x0007f688) popup_call3_audio_in_window_g2

0xa2f3,	// (0x0007f6a0) popup_call3_audio_in_window_g3_ParamLimits

0xa2f3,	// (0x0007f6a0) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x000849d2) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x000849d2) popup_call3_audio_in_window_g

0xa31b,	// (0x0007f6c8) popup_call3_audio_in_window_t1_ParamLimits

0xa31b,	// (0x0007f6c8) popup_call3_audio_in_window_t1

0xa343,	// (0x0007f6f0) popup_call3_audio_in_window_t2_ParamLimits

0xa343,	// (0x0007f6f0) popup_call3_audio_in_window_t2

0xa36b,	// (0x0007f718) popup_call3_audio_in_window_t3_ParamLimits

0xa36b,	// (0x0007f718) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x000849db) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x000849db) popup_call3_audio_in_window_t

0x0620,	// (0x000759cd) bg_popup_call3_rect_pane

0x2275,	// (0x00077622) bg_popup_call3_rect_pane_g1

0x051e,	// (0x000758cb) bg_popup_call3_rect_pane_g2

0x227d,	// (0x0007762a) bg_popup_call3_rect_pane_g3

0x2285,	// (0x00077632) bg_popup_call3_rect_pane_g4

0x228d,	// (0x0007763a) bg_popup_call3_rect_pane_g5

0x2295,	// (0x00077642) bg_popup_call3_rect_pane_g6

0x229d,	// (0x0007764a) bg_popup_call3_rect_pane_g7

0x95e9,	// (0x0007e996) mup_visualizer_osc_pane

0x1120,	// (0x000764cd) mup_visualizer_spec_pane

0xa281,	// (0x0007f62e) call3_video_qcif_pane_ParamLimits

0xa281,	// (0x0007f62e) call3_video_qcif_pane

0xa293,	// (0x0007f640) call3_video_qcif_uncrop_pane_ParamLimits

0xa293,	// (0x0007f640) call3_video_qcif_uncrop_pane

0xa2a1,	// (0x0007f64e) call3_video_subqcif_pane_ParamLimits

0xa2a1,	// (0x0007f64e) call3_video_subqcif_pane

0xa2b3,	// (0x0007f660) call3_video_subqcif_uncrop_pane_ParamLimits

0xa2b3,	// (0x0007f660) call3_video_subqcif_uncrop_pane

0xa30b,	// (0x0007f6b8) popup_call3_audio_in_window_g4_ParamLimits

0xa30b,	// (0x0007f6b8) popup_call3_audio_in_window_g4

0xa22c,	// (0x0007f5d9) mup_spec_half_pane

0xa235,	// (0x0007f5e2) mup_spec_half_pane_cp

0x251a,	// (0x000778c7) mup_osc_middle_pane

0x2523,	// (0x000778d0) mup_visualizer_osc_pane_g1

0xa20d,	// (0x0007f5ba) mup_spec_bar_pane_ParamLimits

0xa20d,	// (0x0007f5ba) mup_spec_bar_pane

0x2507,	// (0x000778b4) mup_spec_bar_pane_g1

0x2511,	// (0x000778be) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000849c6) mup_spec_bar_pane_g

0x7660,	// (0x0007ca0d) aid_cale_week_size_cell_pane_ParamLimits

0x7675,	// (0x0007ca22) bg_cale_heading_pane_ParamLimits

0x0579,	// (0x00075926) bg_cale_pane_cp01_ParamLimits

0x7697,	// (0x0007ca44) cale_week_corner_pane_ParamLimits

0x76b1,	// (0x0007ca5e) cale_week_day_heading_pane_ParamLimits

0x76d3,	// (0x0007ca80) cale_week_scroll_pane_g1_ParamLimits

0x76f0,	// (0x0007ca9d) cale_week_scroll_pane_g2_ParamLimits

0x7703,	// (0x0007cab0) cale_week_scroll_pane_g3_ParamLimits

0x7716,	// (0x0007cac3) cale_week_scroll_pane_g4_ParamLimits

0x7729,	// (0x0007cad6) cale_week_scroll_pane_g5_ParamLimits

0x773c,	// (0x0007cae9) cale_week_scroll_pane_g6_ParamLimits

0x774f,	// (0x0007cafc) cale_week_scroll_pane_g7_ParamLimits

0x7764,	// (0x0007cb11) cale_week_scroll_pane_g8_ParamLimits

0x7779,	// (0x0007cb26) cale_week_scroll_pane_g9_ParamLimits

0x778c,	// (0x0007cb39) cale_week_scroll_pane_g10_ParamLimits

0x779f,	// (0x0007cb4c) cale_week_scroll_pane_g11_ParamLimits

0x77b2,	// (0x0007cb5f) cale_week_scroll_pane_g12_ParamLimits

0x77c9,	// (0x0007cb76) cale_week_scroll_pane_g13_ParamLimits

0x77e4,	// (0x0007cb91) cale_week_scroll_pane_g14_ParamLimits

0x77ff,	// (0x0007cbac) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0008455d) cale_week_scroll_pane_g_ParamLimits

0x782f,	// (0x0007cbdc) cale_week_time_pane_ParamLimits

0x7844,	// (0x0007cbf1) grid_cale_week_pane_ParamLimits

0x0596,	// (0x00075943) listscroll_cale_week_pane_t1

0x05a8,	// (0x00075955) scroll_pane_cp08_ParamLimits

0x8412,	// (0x0007d7bf) cale_month_corner_pane_ParamLimits

0x0952,	// (0x00075cff) cale_month_pane_t1

0x88e0,	// (0x0007dc8d) cale_month_week_pane_ParamLimits

0x1112,	// (0x000764bf) popup_call_status_window_g1_ParamLimits

0x9082,	// (0x0007e42f) popup_call_status_window_g2_ParamLimits

0x908e,	// (0x0007e43b) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00084703) popup_call_status_window_g_ParamLimits

0x0d0a,	// (0x000760b7) aid_call2_pane

0x5d73,	// (0x0007b120) msg_header_pane_g1

0x996a,	// (0x0007ed17) postcard_address2_pane_ParamLimits

0x996a,	// (0x0007ed17) postcard_address2_pane

0x9976,	// (0x0007ed23) postcard_message2_pane_ParamLimits

0x9976,	// (0x0007ed23) postcard_message2_pane

0xa1a4,	// (0x0007f551) message2_row_pane_ParamLimits

0xa1a4,	// (0x0007f551) message2_row_pane

0xa1bf,	// (0x0007f56c) address2_row_pane_ParamLimits

0xa1bf,	// (0x0007f56c) address2_row_pane

0x24d5,	// (0x00077882) postcard_message2_row_pane_g1

0x24dd,	// (0x0007788a) postcard_message2_row_pane_t1

0x24d5,	// (0x00077882) address2_row_pane_g1

0x24dd,	// (0x0007788a) address2_row_pane_t1

0x7ac9,	// (0x0007ce76) aid_size_cell_vorec

0x00ff,	// (0x000754ac) main_rss_pane

0xa1d2,	// (0x0007f57f) rss_list_single_pane_ParamLimits

0xa1d2,	// (0x0007f57f) rss_list_single_pane

0x24eb,	// (0x00077898) rss_list_single_pane_t1

0x24f9,	// (0x000778a6) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x000849c1) rss_list_single_pane_t

0x00ff,	// (0x000754ac) main_camera2_pane

0x00ff,	// (0x000754ac) main_video2_pane

0xa407,	// (0x0007f7b4) cams_zoom_pane_cp2_ParamLimits

0xa407,	// (0x0007f7b4) cams_zoom_pane_cp2

0xa413,	// (0x0007f7c0) image2_vga_pane_ParamLimits

0xa413,	// (0x0007f7c0) image2_vga_pane

0xa422,	// (0x0007f7cf) main_camera2_pane_g1_ParamLimits

0xa422,	// (0x0007f7cf) main_camera2_pane_g1

0xa42e,	// (0x0007f7db) main_camera2_pane_g2_ParamLimits

0xa42e,	// (0x0007f7db) main_camera2_pane_g2

0xa43a,	// (0x0007f7e7) main_camera2_pane_g3_ParamLimits

0xa43a,	// (0x0007f7e7) main_camera2_pane_g3

0xa446,	// (0x0007f7f3) main_camera2_pane_g4_ParamLimits

0xa446,	// (0x0007f7f3) main_camera2_pane_g4

0xa452,	// (0x0007f7ff) main_camera2_pane_g5_ParamLimits

0xa452,	// (0x0007f7ff) main_camera2_pane_g5

0xa45e,	// (0x0007f80b) main_camera2_pane_g6_ParamLimits

0xa45e,	// (0x0007f80b) main_camera2_pane_g6

0xa46a,	// (0x0007f817) main_camera2_pane_g7_ParamLimits

0xa46a,	// (0x0007f817) main_camera2_pane_g7

0xa476,	// (0x0007f823) main_camera2_pane_g8_ParamLimits

0xa476,	// (0x0007f823) main_camera2_pane_g8

0x0008,

0xf635,	// (0x000849e2) main_camera2_pane_g_ParamLimits

0xf635,	// (0x000849e2) main_camera2_pane_g

0xa48e,	// (0x0007f83b) main_camera2_pane_t1_ParamLimits

0xa48e,	// (0x0007f83b) main_camera2_pane_t1

0xa4a0,	// (0x0007f84d) main_camera2_pane_t2_ParamLimits

0xa4a0,	// (0x0007f84d) main_camera2_pane_t2

0xa4b2,	// (0x0007f85f) main_camera2_pane_t3_ParamLimits

0xa4b2,	// (0x0007f85f) main_camera2_pane_t3

0xa4c4,	// (0x0007f871) main_camera2_pane_t4_ParamLimits

0xa4c4,	// (0x0007f871) main_camera2_pane_t4

0x0006,

0xf648,	// (0x000849f5) main_camera2_pane_t_ParamLimits

0xf648,	// (0x000849f5) main_camera2_pane_t

0xa526,	// (0x0007f8d3) cams_zoom_pane_cp4_ParamLimits

0xa526,	// (0x0007f8d3) cams_zoom_pane_cp4

0xa536,	// (0x0007f8e3) image2_cif_pane_ParamLimits

0xa536,	// (0x0007f8e3) image2_cif_pane

0xa54b,	// (0x0007f8f8) image2_subqcif_pane_ParamLimits

0xa54b,	// (0x0007f8f8) image2_subqcif_pane

0xa55a,	// (0x0007f907) main_video2_pane_g1_ParamLimits

0xa55a,	// (0x0007f907) main_video2_pane_g1

0xa56c,	// (0x0007f919) main_video2_pane_g2_ParamLimits

0xa56c,	// (0x0007f919) main_video2_pane_g2

0xa57c,	// (0x0007f929) main_video2_pane_g3_ParamLimits

0xa57c,	// (0x0007f929) main_video2_pane_g3

0xa58c,	// (0x0007f939) main_video2_pane_g4_ParamLimits

0xa58c,	// (0x0007f939) main_video2_pane_g4

0xa59c,	// (0x0007f949) main_video2_pane_g5_ParamLimits

0xa59c,	// (0x0007f949) main_video2_pane_g5

0xa5ac,	// (0x0007f959) main_video2_pane_g6_ParamLimits

0xa5ac,	// (0x0007f959) main_video2_pane_g6

0x0005,

0xf657,	// (0x00084a04) main_video2_pane_g_ParamLimits

0xf657,	// (0x00084a04) main_video2_pane_g

0xa5be,	// (0x0007f96b) main_video2_pane_t1_ParamLimits

0xa5be,	// (0x0007f96b) main_video2_pane_t1

0xa5d8,	// (0x0007f985) main_video2_pane_t2_ParamLimits

0xa5d8,	// (0x0007f985) main_video2_pane_t2

0xa5fe,	// (0x0007f9ab) main_video2_pane_t3_ParamLimits

0xa5fe,	// (0x0007f9ab) main_video2_pane_t3

0x0002,

0xf664,	// (0x00084a11) main_video2_pane_t_ParamLimits

0xf664,	// (0x00084a11) main_video2_pane_t

0x9ec8,	// (0x0007f275) call_muted_g2

0x0001,

0xf606,	// (0x000849b3) call_muted_g

0x00ff,	// (0x000754ac) main_mup2_pane

0x2588,	// (0x00077935) main_mup2_pane_g1_ParamLimits

0x2588,	// (0x00077935) main_mup2_pane_g1

0xa624,	// (0x0007f9d1) main_mup2_pane_g2_ParamLimits

0xa624,	// (0x0007f9d1) main_mup2_pane_g2

0xa8a6,	// (0x0007fc53) main_mup_pane_g13_cp1

0xa8ae,	// (0x0007fc5b) mup_volume_pane_cp1

0xa644,	// (0x0007f9f1) main_mup2_pane_g4_ParamLimits

0xa644,	// (0x0007f9f1) main_mup2_pane_g4

0xa659,	// (0x0007fa06) main_mup2_pane_g5_ParamLimits

0xa659,	// (0x0007fa06) main_mup2_pane_g5

0xa66e,	// (0x0007fa1b) main_mup2_pane_g6_ParamLimits

0xa66e,	// (0x0007fa1b) main_mup2_pane_g6

0xa683,	// (0x0007fa30) main_mup2_pane_g7_ParamLimits

0xa683,	// (0x0007fa30) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00084a18) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00084a18) main_mup2_pane_g

0xa69f,	// (0x0007fa4c) main_mup2_pane_t1_ParamLimits

0xa69f,	// (0x0007fa4c) main_mup2_pane_t1

0xa6b6,	// (0x0007fa63) main_mup2_pane_t2_ParamLimits

0xa6b6,	// (0x0007fa63) main_mup2_pane_t2

0xa6cd,	// (0x0007fa7a) main_mup2_pane_t3_ParamLimits

0xa6cd,	// (0x0007fa7a) main_mup2_pane_t3

0xa6e4,	// (0x0007fa91) main_mup2_pane_t4_ParamLimits

0xa6e4,	// (0x0007fa91) main_mup2_pane_t4

0xa6fe,	// (0x0007faab) main_mup2_pane_t5_ParamLimits

0xa6fe,	// (0x0007faab) main_mup2_pane_t5

0xa718,	// (0x0007fac5) main_mup2_pane_t6_ParamLimits

0xa718,	// (0x0007fac5) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00084a27) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00084a27) main_mup2_pane_t

0xa750,	// (0x0007fafd) mup2_visualizer_pane_ParamLimits

0xa750,	// (0x0007fafd) mup2_visualizer_pane

0xa786,	// (0x0007fb33) mup_progress_pane_cp_ParamLimits

0xa786,	// (0x0007fb33) mup_progress_pane_cp

0xa891,	// (0x0007fc3e) mup_volume_pane_cp_ParamLimits

0xa891,	// (0x0007fc3e) mup_volume_pane_cp

0xa79d,	// (0x0007fb4a) mup2_visualizer_pane_g1_ParamLimits

0xa79d,	// (0x0007fb4a) mup2_visualizer_pane_g1

0x255a,	// (0x00077907) mup2_visualizer_pane_g2_ParamLimits

0x255a,	// (0x00077907) mup2_visualizer_pane_g2

0xa7b2,	// (0x0007fb5f) mup2_visualizer_pane_g3_ParamLimits

0xa7b2,	// (0x0007fb5f) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00084a34) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00084a34) mup2_visualizer_pane_g

0x1347,	// (0x000766f4) aid_size_cell_fmradio

0x9fde,	// (0x0007f38b) aid_height_parent_landcape

0x07b0,	// (0x00075b5d) wml_content_pane_cp

0x07b8,	// (0x00075b65) wml_tabs_pane

0x07c1,	// (0x00075b6e) popup_wml_miniature_window

0x07c9,	// (0x00075b76) scroll_pane_cp021

0x07dd,	// (0x00075b8a) wml_content_pane_comp8

0x00ff,	// (0x000754ac) bg_popup_sub_pane_cp05

0x2578,	// (0x00077925) popup_wml_miniature_window_g1

0x2580,	// (0x0007792d) wml_miniature_view_pane

0xa7c0,	// (0x0007fb6d) aid_size_wml_view

0xa7c8,	// (0x0007fb75) wml_miniature_view_pane_g1

0xa7d1,	// (0x0007fb7e) wml_miniature_view_pane_g2

0xa7da,	// (0x0007fb87) wml_miniature_view_pane_g3

0xa7e2,	// (0x0007fb8f) wml_miniature_view_pane_g4

0xa7ea,	// (0x0007fb97) wml_miniature_view_pane_g5

0xa7f2,	// (0x0007fb9f) wml_miniature_view_pane_g6

0xa7fa,	// (0x0007fba7) wml_miniature_view_pane_g7

0xa802,	// (0x0007fbaf) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00084a3b) wml_miniature_view_pane_g

0x2588,	// (0x00077935) background_graphic_ParamLimits

0x2588,	// (0x00077935) background_graphic

0x2594,	// (0x00077941) wml_tabs_2_pane

0x259d,	// (0x0007794a) wml_tabs_3_pane_ParamLimits

0x259d,	// (0x0007794a) wml_tabs_3_pane

0x25af,	// (0x0007795c) wml_tabs_4_pane_ParamLimits

0x25af,	// (0x0007795c) wml_tabs_4_pane

0x25c5,	// (0x00077972) wml_tabs_5_pane_ParamLimits

0x25c5,	// (0x00077972) wml_tabs_5_pane

0x25df,	// (0x0007798c) wml_tabs_pane_g2_ParamLimits

0x25df,	// (0x0007798c) wml_tabs_pane_g2

0x25f3,	// (0x000779a0) wml_tabs_pane_g3_ParamLimits

0x25f3,	// (0x000779a0) wml_tabs_pane_g3

0xa80a,	// (0x0007fbb7) wml_tabs_2_active_pane_ParamLimits

0xa80a,	// (0x0007fbb7) wml_tabs_2_active_pane

0xa81a,	// (0x0007fbc7) wml_tabs_2_passive_pane_ParamLimits

0xa81a,	// (0x0007fbc7) wml_tabs_2_passive_pane

0xa82a,	// (0x0007fbd7) wml_tabs_3_active_pane_cp_ParamLimits

0xa82a,	// (0x0007fbd7) wml_tabs_3_active_pane_cp

0xa83b,	// (0x0007fbe8) wml_tabs_3_passive_pane_ParamLimits

0xa83b,	// (0x0007fbe8) wml_tabs_3_passive_pane

0xa84c,	// (0x0007fbf9) wml_tabs_3_passive_pane_cp_ParamLimits

0xa84c,	// (0x0007fbf9) wml_tabs_3_passive_pane_cp

0xa85d,	// (0x0007fc0a) tabs_4_active_pane

0xa865,	// (0x0007fc12) tabs_4_passive_pane

0xa86d,	// (0x0007fc1a) tabs_4_passive_pane_cp

0xa875,	// (0x0007fc22) tabs_4_passive_pane_cp2

0x9da3,	// (0x0007f150) aid_height_text

0x95b2,	// (0x0007e95f) mup_volume_cont_pane_ParamLimits

0x95b2,	// (0x0007e95f) mup_volume_cont_pane

0x71a5,	// (0x0007c552) aid_size_cell_pinb

0x71af,	// (0x0007c55c) aid_size_list_pinb

0xa76f,	// (0x0007fb1c) mup2_volume_cont_pane_ParamLimits

0xa76f,	// (0x0007fb1c) mup2_volume_cont_pane

0xa87d,	// (0x0007fc2a) mup2_volume_cont_pane_g1_ParamLimits

0xa87d,	// (0x0007fc2a) mup2_volume_cont_pane_g1

0x6ddf,	// (0x0007c18c) aid_size_cell_touch_ParamLimits

0x6ddf,	// (0x0007c18c) aid_size_cell_touch

0x7088,	// (0x0007c435) touch_pane_ParamLimits

0x7088,	// (0x0007c435) touch_pane

0xed1d,	// (0x000840ca) main_rss2_pane

0x2610,	// (0x000779bd) listscroll_rss2_pane

0x2619,	// (0x000779c6) rss2_navigation_pane

0x2621,	// (0x000779ce) list_rss2_pane

0x0e27,	// (0x000761d4) scroll_pane_cp22

0x2629,	// (0x000779d6) rss2_navigation_pane_g1

0x2632,	// (0x000779df) rss2_navigation_pane_g2

0x263a,	// (0x000779e7) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00084a4c) rss2_navigation_pane_g

0x2642,	// (0x000779ef) rss2_navigation_pane_t1

0xa8b6,	// (0x0007fc63) rss2_list_single_pane_ParamLimits

0xa8b6,	// (0x0007fc63) rss2_list_single_pane

0x2650,	// (0x000779fd) rss2_list_single_pane_t2

0x265e,	// (0x00077a0b) rss2_list_single_pane_t3_ParamLimits

0x265e,	// (0x00077a0b) rss2_list_single_pane_t3

0x267b,	// (0x00077a28) rss2_list_single_pane_t4

0x8ee6,	// (0x0007e293) smil_status_pane_g1

0xf07f,	// (0x0008442c) main_image2_pane_ParamLimits

0xf07f,	// (0x0008442c) main_image2_pane

0xa482,	// (0x0007f82f) main_camera2_pane_g9_ParamLimits

0xa482,	// (0x0007f82f) main_camera2_pane_g9

0xa4d6,	// (0x0007f883) main_camera2_pane_t5_ParamLimits

0xa4d6,	// (0x0007f883) main_camera2_pane_t5

0xa4e8,	// (0x0007f895) main_camera2_pane_t6_ParamLimits

0xa4e8,	// (0x0007f895) main_camera2_pane_t6

0xa8ea,	// (0x0007fc97) main_image2_pane_g1_ParamLimits

0xa8ea,	// (0x0007fc97) main_image2_pane_g1

0x9b3d,	// (0x0007eeea) smil2_video_pane_ParamLimits

0x9b3d,	// (0x0007eeea) smil2_video_pane

0x6e13,	// (0x0007c1c0) aid_zoom_text_primary_cp

0x7031,	// (0x0007c3de) popup_preview_fixed_window

0x0719,	// (0x00075ac6) im_reading_pane_g1

0xa3cc,	// (0x0007f779) cams2_bc_adjust_pane_cp_ParamLimits

0xa3cc,	// (0x0007f779) cams2_bc_adjust_pane_cp

0xa518,	// (0x0007f8c5) cams2_bc_adjust_pane_ParamLimits

0xa518,	// (0x0007f8c5) cams2_bc_adjust_pane

0xa8f6,	// (0x0007fca3) cams2_bc_adjust_pane_g1

0xa8fe,	// (0x0007fcab) cams2_slider_pane

0xa907,	// (0x0007fcb4) cams2_slider_pane_g1

0xa910,	// (0x0007fcbd) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00084a53) cams2_slider_pane_g

0x72af,	// (0x0007c65c) calc_display_pane_ParamLimits

0x72cd,	// (0x0007c67a) calc_paper_pane_ParamLimits

0x72e9,	// (0x0007c696) grid_calc_pane_ParamLimits

0x90ec,	// (0x0007e499) popup_clock_digital_window_t1_ParamLimits

0x12e4,	// (0x00076691) main_image_pane_t1

0x7295,	// (0x0007c642) aid_size_cell_calc_ParamLimits

0x7295,	// (0x0007c642) aid_size_cell_calc

0xa018,	// (0x0007f3c5) popup_blid_sat_info2_window_ParamLimits

0xa018,	// (0x0007f3c5) popup_blid_sat_info2_window

0x2691,	// (0x00077a3e) aid_size_cell_blid

0x2699,	// (0x00077a46) bg_popup_window_pane_cp07

0x26bc,	// (0x00077a69) grid_popup_blid_pane

0x26c6,	// (0x00077a73) heading_pane_cp05_ParamLimits

0x26c6,	// (0x00077a73) heading_pane_cp05

0x2790,	// (0x00077b3d) cell_popup_blid_pane_ParamLimits

0x2790,	// (0x00077b3d) cell_popup_blid_pane

0x27b4,	// (0x00077b61) cell_popup_blid_pane_g1

0x27bc,	// (0x00077b69) cell_popup_blid_pane_t1

0xa735,	// (0x0007fae2) mup2_indicator_pane_ParamLimits

0xa735,	// (0x0007fae2) mup2_indicator_pane

0x0620,	// (0x000759cd) mup2_visualizer_osc_pane

0x2566,	// (0x00077913) mup2_visualizer_spec_pane_ParamLimits

0x2566,	// (0x00077913) mup2_visualizer_spec_pane

0xa92a,	// (0x0007fcd7) mup2_spec_half_pane

0xa933,	// (0x0007fce0) mup2_spec_half_pane_cp

0xa93d,	// (0x0007fcea) mup2_spec_bar_pane_ParamLimits

0xa93d,	// (0x0007fcea) mup2_spec_bar_pane

0x2507,	// (0x000778b4) mup2_spec_bar_pane_g1

0x2511,	// (0x000778be) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x000849c6) mup2_spec_bar_pane_g

0xa95c,	// (0x0007fd09) mup2_osc_middle_pane

0x2523,	// (0x000778d0) mup2_visualizer_osc_pane_g1

0xed47,	// (0x000840f4) popup_number_entry_window_t1_ParamLimits

0xed5a,	// (0x00084107) popup_number_entry_window_t2_ParamLimits

0xed6c,	// (0x00084119) popup_number_entry_window_t3_ParamLimits

0x70df,	// (0x0007c48c) popup_number_entry_window_t5_ParamLimits

0x70df,	// (0x0007c48c) popup_number_entry_window_t5

0xf0ca,	// (0x00084477) popup_number_entry_window_t_ParamLimits

0xed7e,	// (0x0008412b) text_title_cp2_ParamLimits

0x9832,	// (0x0007ebdf) aid_hotspot_pointer_text2_pane

0x98cc,	// (0x0007ec79) main_viewer_pane_g9_ParamLimits

0x98cc,	// (0x0007ec79) main_viewer_pane_g9

0x0952,	// (0x00075cff) cale_month_pane_t1_ParamLimits

0x098f,	// (0x00075d3c) bg_cale_pane_ParamLimits

0x09a7,	// (0x00075d54) list_cale_pane_ParamLimits

0x09b8,	// (0x00075d65) listscroll_cale_day_pane_t1

0x09ca,	// (0x00075d77) scroll_pane_cp09_ParamLimits

0x95f1,	// (0x0007e99e) main_mup_eq_pane_t1_ParamLimits

0x95f1,	// (0x0007e99e) main_mup_eq_pane_t1

0x960b,	// (0x0007e9b8) main_mup_eq_pane_t2_ParamLimits

0x960b,	// (0x0007e9b8) main_mup_eq_pane_t2

0x9623,	// (0x0007e9d0) main_mup_eq_pane_t3_ParamLimits

0x9623,	// (0x0007e9d0) main_mup_eq_pane_t3

0x963b,	// (0x0007e9e8) main_mup_eq_pane_t4_ParamLimits

0x963b,	// (0x0007e9e8) main_mup_eq_pane_t4

0x9653,	// (0x0007ea00) main_mup_eq_pane_t5_ParamLimits

0x9653,	// (0x0007ea00) main_mup_eq_pane_t5

0x966b,	// (0x0007ea18) main_mup_eq_pane_t6_ParamLimits

0x966b,	// (0x0007ea18) main_mup_eq_pane_t6

0x967f,	// (0x0007ea2c) main_mup_eq_pane_t7_ParamLimits

0x967f,	// (0x0007ea2c) main_mup_eq_pane_t7

0x9693,	// (0x0007ea40) main_mup_eq_pane_t8_ParamLimits

0x9693,	// (0x0007ea40) main_mup_eq_pane_t8

0x96a9,	// (0x0007ea56) main_mup_eq_pane_t9_ParamLimits

0x96a9,	// (0x0007ea56) main_mup_eq_pane_t9

0x96c1,	// (0x0007ea6e) main_mup_eq_pane_t10_ParamLimits

0x96c1,	// (0x0007ea6e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00084802) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00084802) main_mup_eq_pane_t

0x977e,	// (0x0007eb2b) mup_equalizer_pane_cp5_ParamLimits

0x9794,	// (0x0007eb41) mup_equalizer_pane_cp6_ParamLimits

0x97ac,	// (0x0007eb59) mup_equalizer_pane_cp7_ParamLimits

0xed1d,	// (0x000840ca) main_gallery_pane

0x252c,	// (0x000778d9) smil2_volume_pane

0x2547,	// (0x000778f4) smil_status_volume_pane_g1_ParamLimits

0x2534,	// (0x000778e1) smil_status_volume_pane_g2_ParamLimits

0xa23f,	// (0x0007f5ec) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x000849cb) smil_status_volume_pane_g_ParamLimits

0x2699,	// (0x00077a46) bg_popup_window_pane_cp07_ParamLimits

0x26a7,	// (0x00077a54) blid_firmament_pane

0xa965,	// (0x0007fd12) aid_size_cell_gallery_ParamLimits

0xa965,	// (0x0007fd12) aid_size_cell_gallery

0xa973,	// (0x0007fd20) grid_gallery_pane_ParamLimits

0xa973,	// (0x0007fd20) grid_gallery_pane

0xa983,	// (0x0007fd30) cell_gallery_pane_ParamLimits

0xa983,	// (0x0007fd30) cell_gallery_pane

0x27ca,	// (0x00077b77) bg_cell_gallery_focus_pane_ParamLimits

0x27ca,	// (0x00077b77) bg_cell_gallery_focus_pane

0x27dc,	// (0x00077b89) cell_gallery_pane_g1_ParamLimits

0x27dc,	// (0x00077b89) cell_gallery_pane_g1

0xa9d1,	// (0x0007fd7e) cell_gallery_pane_g2_ParamLimits

0xa9d1,	// (0x0007fd7e) cell_gallery_pane_g2

0xa9de,	// (0x0007fd8b) cell_gallery_pane_g3_ParamLimits

0xa9de,	// (0x0007fd8b) cell_gallery_pane_g3

0x27e8,	// (0x00077b95) cell_gallery_pane_g4_ParamLimits

0x27e8,	// (0x00077b95) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00084a79) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00084a79) cell_gallery_pane_g

0x27f4,	// (0x00077ba1) bg_cell_gallery_focus_pane_g1

0x27fc,	// (0x00077ba9) bg_cell_gallery_focus_pane_g2

0x2804,	// (0x00077bb1) bg_cell_gallery_focus_pane_g3

0x280c,	// (0x00077bb9) bg_cell_gallery_focus_pane_g4

0x2814,	// (0x00077bc1) bg_cell_gallery_focus_pane_g5

0x281c,	// (0x00077bc9) bg_cell_gallery_focus_pane_g6

0x2824,	// (0x00077bd1) bg_cell_gallery_focus_pane_g7

0x282c,	// (0x00077bd9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00084a82) bg_cell_gallery_focus_pane_g

0x2834,	// (0x00077be1) aid_firma_cardinal

0x2848,	// (0x00077bf5) blid_firmament_pane_t1

0x285f,	// (0x00077c0c) blid_firmament_pane_t2

0x2876,	// (0x00077c23) blid_firmament_pane_t3

0x288d,	// (0x00077c3a) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00084a93) blid_firmament_pane_t

0x28b0,	// (0x00077c5d) blid_sat_info_pane

0x28c0,	// (0x00077c6d) blid_sat_info_pane_g1

0x28c0,	// (0x00077c6d) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00084a9c) blid_sat_info_pane_g

0x28ca,	// (0x00077c77) blid_sat_info_pane_t1

0x28d8,	// (0x00077c85) smil2_volume_content_pane

0x28e1,	// (0x00077c8e) smil2_volume_pane_g1

0x28e9,	// (0x00077c96) smil2_volume_content_pane_g1

0x28f2,	// (0x00077c9f) smil2_volume_content_pane_g2

0x28fb,	// (0x00077ca8) smil2_volume_content_pane_g3

0x2904,	// (0x00077cb1) smil2_volume_content_pane_g4

0x290d,	// (0x00077cba) smil2_volume_content_pane_g5

0x2916,	// (0x00077cc3) smil2_volume_content_pane_g6

0x291f,	// (0x00077ccc) smil2_volume_content_pane_g7

0x2928,	// (0x00077cd5) smil2_volume_content_pane_g8

0x2931,	// (0x00077cde) smil2_volume_content_pane_g9

0x293a,	// (0x00077ce7) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00084aa1) smil2_volume_content_pane_g

0x78c5,	// (0x0007cc72) cale_week_day_heading_pane_t1_ParamLimits

0x78e0,	// (0x0007cc8d) cale_week_day_heading_pane_t2_ParamLimits

0x78fb,	// (0x0007cca8) cale_week_day_heading_pane_t3_ParamLimits

0x7916,	// (0x0007ccc3) cale_week_day_heading_pane_t4_ParamLimits

0x7931,	// (0x0007ccde) cale_week_day_heading_pane_t5_ParamLimits

0x794c,	// (0x0007ccf9) cale_week_day_heading_pane_t6_ParamLimits

0x7967,	// (0x0007cd14) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0008457e) cale_week_day_heading_pane_t_ParamLimits

0x05c5,	// (0x00075972) bg_cale_side_pane_ParamLimits

0x7982,	// (0x0007cd2f) cale_week_time_pane_t1_ParamLimits

0x799c,	// (0x0007cd49) cale_week_time_pane_t2_ParamLimits

0x79b6,	// (0x0007cd63) cale_week_time_pane_t3_ParamLimits

0x79d0,	// (0x0007cd7d) cale_week_time_pane_t4_ParamLimits

0x79ea,	// (0x0007cd97) cale_week_time_pane_t5_ParamLimits

0x7a04,	// (0x0007cdb1) cale_week_time_pane_t6_ParamLimits

0x7a24,	// (0x0007cdd1) cale_week_time_pane_t7_ParamLimits

0x7a46,	// (0x0007cdf3) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0008458d) cale_week_time_pane_t_ParamLimits

0x7a6a,	// (0x0007ce17) cell_cale_week_pane_g2_ParamLimits

0x05c5,	// (0x00075972) bg_cale_side_pane_cp01_ParamLimits

0x8cd5,	// (0x0007e082) cale_month_week_pane_t1_ParamLimits

0x8cee,	// (0x0007e09b) cale_month_week_pane_t2_ParamLimits

0x8d07,	// (0x0007e0b4) cale_month_week_pane_t3_ParamLimits

0x8d20,	// (0x0007e0cd) cale_month_week_pane_t4_ParamLimits

0x8d3b,	// (0x0007e0e8) cale_month_week_pane_t5_ParamLimits

0x8d5c,	// (0x0007e109) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00084662) cale_month_week_pane_t_ParamLimits

0x8ea3,	// (0x0007e250) cell_cale_month_pane_g1_ParamLimits

0xed1d,	// (0x000840ca) main_cale_event_viewer_pane

0xed1d,	// (0x000840ca) listscroll_cale_event_viewer_pane

0x2943,	// (0x00077cf0) list_cale_ev_pane

0x294b,	// (0x00077cf8) scroll_pane_cp023

0x2957,	// (0x00077d04) field_cale_ev_pane_ParamLimits

0x2957,	// (0x00077d04) field_cale_ev_pane

0x2975,	// (0x00077d22) field_cale_ev_content_pane_ParamLimits

0x2975,	// (0x00077d22) field_cale_ev_content_pane

0x2981,	// (0x00077d2e) field_cale_ev_pane_g1_ParamLimits

0x2981,	// (0x00077d2e) field_cale_ev_pane_g1

0x298d,	// (0x00077d3a) field_cale_ev_pane_g2_ParamLimits

0x298d,	// (0x00077d3a) field_cale_ev_pane_g2

0x29a5,	// (0x00077d52) field_cale_ev_pane_g3_ParamLimits

0x29a5,	// (0x00077d52) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00084ab6) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00084ab6) field_cale_ev_pane_g

0x29bd,	// (0x00077d6a) field_cale_ev_pane_t1_ParamLimits

0x29bd,	// (0x00077d6a) field_cale_ev_pane_t1

0x0538,	// (0x000758e5) field_cale_ev_content_pane_t1_ParamLimits

0x0538,	// (0x000758e5) field_cale_ev_content_pane_t1

0x11ca,	// (0x00076577) bg_button_pane_cp01

0x7650,	// (0x0007c9fd) listscroll_cale_week_pane_ParamLimits

0x0570,	// (0x0007591d) popup_toolbar_window_cp01

0x0596,	// (0x00075943) listscroll_cale_week_pane_t1_ParamLimits

0x7650,	// (0x0007c9fd) listscroll_cale_day_pane_ParamLimits

0x0570,	// (0x0007591d) popup_toolbar_window_cp02

0x09b8,	// (0x00075d65) listscroll_cale_day_pane_t1_ParamLimits

0x7650,	// (0x0007c9fd) main_cale_month_pane_ParamLimits

0xa11b,	// (0x0007f4c8) popup_toolbar_window_cp03_ParamLimits

0xa11b,	// (0x0007f4c8) popup_toolbar_window_cp03

0x9a53,	// (0x0007ee00) main_image_pane_g2_ParamLimits

0x9a53,	// (0x0007ee00) main_image_pane_g2

0x9a5f,	// (0x0007ee0c) main_image_pane_g3_ParamLimits

0x9a5f,	// (0x0007ee0c) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00084894) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00084894) main_image_pane_g

0x12e4,	// (0x00076691) main_image_pane_t1_ParamLimits

0x9a6b,	// (0x0007ee18) main_image_pane_t2_ParamLimits

0x9a6b,	// (0x0007ee18) main_image_pane_t2

0x9a7d,	// (0x0007ee2a) main_image_pane_t3_ParamLimits

0x9a7d,	// (0x0007ee2a) main_image_pane_t3

0x9a8f,	// (0x0007ee3c) main_image_pane_t4_ParamLimits

0x9a8f,	// (0x0007ee3c) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0008489b) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0008489b) main_image_pane_t

0x9aa1,	// (0x0007ee4e) popup_image_details_window_cp01

0x9aab,	// (0x0007ee58) popup_toobar_trans_pane_cp01_ParamLimits

0x9aab,	// (0x0007ee58) popup_toobar_trans_pane_cp01

0xa06b,	// (0x0007f418) popup_image_details_window_ParamLimits

0xa06b,	// (0x0007f418) popup_image_details_window

0xa079,	// (0x0007f426) popup_image_focus_window

0xa3be,	// (0x0007f76b) camera2_autofocus_pane_ParamLimits

0xa3be,	// (0x0007f76b) camera2_autofocus_pane

0xed1d,	// (0x000840ca) bg_popup_sub_pane_cp06

0x29d4,	// (0x00077d81) popup_image_focus_window_g1

0x29dc,	// (0x00077d89) popup_image_focus_window_g2

0x29e4,	// (0x00077d91) popup_image_focus_window_g3

0x29ec,	// (0x00077d99) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00084abd) popup_image_focus_window_g

0x29f4,	// (0x00077da1) popup_image_focus_window_t1

0x2a02,	// (0x00077daf) popup_image_focus_window_t2

0x2a12,	// (0x00077dbf) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00084ac6) popup_image_focus_window_t

0x2a20,	// (0x00077dcd) camera2_autofocus_pane_g1

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp01

0x2a2e,	// (0x00077ddb) popup_image_details_window_g1

0x2a41,	// (0x00077dee) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00084ad8) popup_image_details_window_g

0x2a6a,	// (0x00077e17) popup_image_details_window_t1

0x2a7c,	// (0x00077e29) popup_image_details_window_t2

0x2a95,	// (0x00077e42) popup_image_details_window_t3

0x2aa9,	// (0x00077e56) popup_image_details_window_t4

0x2ac4,	// (0x00077e71) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00084adf) popup_image_details_window_t

0x0417,	// (0x000757c4) bg_calc_paper_pane_ParamLimits

0xed1d,	// (0x000840ca) grid_highlight_pane_cp013

0x73e6,	// (0x0007c793) list_calc_pane_ParamLimits

0x73f8,	// (0x0007c7a5) scroll_pane_cp024

0x042b,	// (0x000757d8) bg_calc_display_pane_ParamLimits

0x7400,	// (0x0007c7ad) calc_display_pane_t1_ParamLimits

0x7415,	// (0x0007c7c2) calc_display_pane_t2_ParamLimits

0x742a,	// (0x0007c7d7) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000844fe) calc_display_pane_t_ParamLimits

0x7507,	// (0x0007c8b4) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0008451b) cell_calc_pane_g

0x7510,	// (0x0007c8bd) cell_calc_pane_t1

0x048a,	// (0x00075837) grid_highlight_pane_cp02_ParamLimits

0x04a0,	// (0x0007584d) toolbar_button_pane_cp01_ParamLimits

0x04a0,	// (0x0007584d) toolbar_button_pane_cp01

0x1329,	// (0x000766d6) temp_image_control_pane_ParamLimits

0x1329,	// (0x000766d6) temp_image_control_pane

0xf07f,	// (0x0008442c) main_mp3_pane

0x2ade,	// (0x00077e8b) temp_image_control_pane_g1_ParamLimits

0x2ade,	// (0x00077e8b) temp_image_control_pane_g1

0x2aec,	// (0x00077e99) temp_image_control_pane_g2_ParamLimits

0x2aec,	// (0x00077e99) temp_image_control_pane_g2

0x2afe,	// (0x00077eab) temp_image_control_pane_g3_ParamLimits

0x2afe,	// (0x00077eab) temp_image_control_pane_g3

0xaa1b,	// (0x0007fdc8) temp_image_control_pane_g4_ParamLimits

0xaa1b,	// (0x0007fdc8) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00084aea) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00084aea) temp_image_control_pane_g

0x2ade,	// (0x00077e8b) main_mp3_pane_g1

0xaa2c,	// (0x0007fdd9) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00084af3) main_mp3_pane_g

0x2b41,	// (0x00077eee) main_mp3_pane_t1

0x0628,	// (0x000759d5) main_camera_pane_g8_ParamLimits

0x0628,	// (0x000759d5) main_camera_pane_g8

0x7cf4,	// (0x0007d0a1) main_video_pane_g7_ParamLimits

0x7cf4,	// (0x0007d0a1) main_video_pane_g7

0xa506,	// (0x0007f8b3) main_camera2_pane_t7_ParamLimits

0xa506,	// (0x0007f8b3) main_camera2_pane_t7

0x0770,	// (0x00075b1d) scroll_pane_cp025_ParamLimits

0x0770,	// (0x00075b1d) scroll_pane_cp025

0x0784,	// (0x00075b31) scroll_pane_cp026_ParamLimits

0x0784,	// (0x00075b31) scroll_pane_cp026

0x0793,	// (0x00075b40) wml_content_pane_ParamLimits

0xed1d,	// (0x000840ca) main_touch_calib_pane

0xaad0,	// (0x0007fe7d) main_touch_calib_pane_g1

0xaadc,	// (0x0007fe89) main_touch_calib_pane_g2

0xaae8,	// (0x0007fe95) main_touch_calib_pane_g3

0xaaf4,	// (0x0007fea1) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00084b11) main_touch_calib_pane_g

0xab00,	// (0x0007fead) main_touch_calib_pane_t1

0xab19,	// (0x0007fec6) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00084b1a) main_touch_calib_pane_t

0x0ef6,	// (0x000762a3) mup_progress_pane_cp02

0x0f2b,	// (0x000762d8) navi_pane_g1

0x0fe6,	// (0x00076393) navi_pane_mp_t3

0xf07f,	// (0x0008442c) main_mp3_pane_ParamLimits

0xa158,	// (0x0007f505) navi_pane_ParamLimits

0x2ade,	// (0x00077e8b) main_mp3_pane_g1_ParamLimits

0xaa2c,	// (0x0007fdd9) main_mp3_pane_g2_ParamLimits

0xaa38,	// (0x0007fde5) main_mp3_pane_g3_ParamLimits

0xaa38,	// (0x0007fde5) main_mp3_pane_g3

0xaa44,	// (0x0007fdf1) main_mp3_pane_g4_ParamLimits

0xaa44,	// (0x0007fdf1) main_mp3_pane_g4

0x2b0e,	// (0x00077ebb) main_mp3_pane_g5_ParamLimits

0x2b0e,	// (0x00077ebb) main_mp3_pane_g5

0x2b1c,	// (0x00077ec9) main_mp3_pane_g6_ParamLimits

0x2b1c,	// (0x00077ec9) main_mp3_pane_g6

0x2b29,	// (0x00077ed6) main_mp3_pane_g7_ParamLimits

0x2b29,	// (0x00077ed6) main_mp3_pane_g7

0x2b35,	// (0x00077ee2) main_mp3_pane_g8_ParamLimits

0x2b35,	// (0x00077ee2) main_mp3_pane_g8

0xf746,	// (0x00084af3) main_mp3_pane_g_ParamLimits

0xaa50,	// (0x0007fdfd) main_mp3_pane_t2

0xaa60,	// (0x0007fe0d) main_mp3_pane_t3

0x2b4f,	// (0x00077efc) main_mp3_pane_t4

0x2b5d,	// (0x00077f0a) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00084b04) main_mp3_pane_t

0x2b6b,	// (0x00077f18) mup_progress_pane_cp01

0x6e13,	// (0x0007c1c0) aid_zoom_text_secondary2

0x2943,	// (0x00077cf0) list_cale_ev2_pane

0x294b,	// (0x00077cf8) scroll_pane_cp023_ParamLimits

0xab74,	// (0x0007ff21) field_cale_ev2_pane_ParamLimits

0xab74,	// (0x0007ff21) field_cale_ev2_pane

0xab9e,	// (0x0007ff4b) field_cale_ev2_pane_g1_ParamLimits

0xab9e,	// (0x0007ff4b) field_cale_ev2_pane_g1

0xabaa,	// (0x0007ff57) field_cale_ev2_pane_g2_ParamLimits

0xabaa,	// (0x0007ff57) field_cale_ev2_pane_g2

0xabc2,	// (0x0007ff6f) field_cale_ev2_pane_g3_ParamLimits

0xabc2,	// (0x0007ff6f) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00084b25) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00084b25) field_cale_ev2_pane_g

0x5df8,	// (0x0007b1a5) field_cale_ev2_pane_t1_ParamLimits

0x5df8,	// (0x0007b1a5) field_cale_ev2_pane_t1

0x5e0f,	// (0x0007b1bc) field_cale_ev2_pane_t2_ParamLimits

0x5e0f,	// (0x0007b1bc) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00084b2e) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00084b2e) field_cale_ev2_pane_t

0x9934,	// (0x0007ece1) main_postcard_pane_g5_ParamLimits

0x9934,	// (0x0007ece1) main_postcard_pane_g5

0x9942,	// (0x0007ecef) main_postcard_pane_g6_ParamLimits

0x9942,	// (0x0007ecef) main_postcard_pane_g6

0x7b3e,	// (0x0007ceeb) camera2_autofocus_pane_cp_ParamLimits

0x7b3e,	// (0x0007ceeb) camera2_autofocus_pane_cp

0xf07f,	// (0x0008442c) main_mup3_pane

0xac06,	// (0x0007ffb3) main_mup3_pane_g1_ParamLimits

0xac06,	// (0x0007ffb3) main_mup3_pane_g1

0xac27,	// (0x0007ffd4) main_mup3_pane_g2_ParamLimits

0xac27,	// (0x0007ffd4) main_mup3_pane_g2

0xaca1,	// (0x0008004e) main_mup3_pane_g3_ParamLimits

0xaca1,	// (0x0008004e) main_mup3_pane_g3

0xace4,	// (0x00080091) main_mup3_pane_g4_ParamLimits

0xace4,	// (0x00080091) main_mup3_pane_g4

0xad27,	// (0x000800d4) main_mup3_pane_g5_ParamLimits

0xad27,	// (0x000800d4) main_mup3_pane_g5

0xad6a,	// (0x00080117) main_mup3_pane_g6_ParamLimits

0xad6a,	// (0x00080117) main_mup3_pane_g6

0x2b73,	// (0x00077f20) main_mup3_pane_g7_ParamLimits

0x2b73,	// (0x00077f20) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00084b3e) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00084b3e) main_mup3_pane_g

0xade0,	// (0x0008018d) main_mup3_pane_t1_ParamLimits

0xade0,	// (0x0008018d) main_mup3_pane_t1

0xae4f,	// (0x000801fc) main_mup3_pane_t2_ParamLimits

0xae4f,	// (0x000801fc) main_mup3_pane_t2

0xaf18,	// (0x000802c5) main_mup3_pane_t4_ParamLimits

0xaf18,	// (0x000802c5) main_mup3_pane_t4

0xaf66,	// (0x00080313) main_mup3_pane_t5_ParamLimits

0xaf66,	// (0x00080313) main_mup3_pane_t5

0xb016,	// (0x000803c3) main_mup3_pane_t6_ParamLimits

0xb016,	// (0x000803c3) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00084b4f) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00084b4f) main_mup3_pane_t

0xb0c2,	// (0x0008046f) mup3_progress_pane_ParamLimits

0xb0c2,	// (0x0008046f) mup3_progress_pane

0xb136,	// (0x000804e3) popup_mup3_control_window_ParamLimits

0xb136,	// (0x000804e3) popup_mup3_control_window

0x2b81,	// (0x00077f2e) popup_mup3_text_window

0xb14f,	// (0x000804fc) mup3_progress_pane_t1

0xb16e,	// (0x0008051b) mup3_progress_pane_t2

0x2b89,	// (0x00077f36) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00084b5c) mup3_progress_pane_t

0x2ba6,	// (0x00077f53) mup_progress_pane_cp03

0xed1d,	// (0x000840ca) bg_tb_trans_pane_cp04

0xb18d,	// (0x0008053a) mup3_volume_pane

0xb195,	// (0x00080542) popup_mup3_control_window_g1

0xb19e,	// (0x0008054b) mup3_volume_pane_g1

0xb1a7,	// (0x00080554) mup3_volume_pane_g2

0xb1b0,	// (0x0008055d) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00084b63) mup3_volume_pane_g

0xed1d,	// (0x000840ca) bg_tb_trans_pane_cp03

0x2bb6,	// (0x00077f63) popup_mup3_text_window_g1

0x2bbe,	// (0x00077f6b) popup_mup3_text_window_t1

0x0473,	// (0x00075820) list_calc_item_pane_g1_ParamLimits

0x2607,	// (0x000779b4) mup_volume_pane_cp_g1

0xab32,	// (0x0007fedf) main_touch_calib_pane_t3

0xab48,	// (0x0007fef5) main_touch_calib_pane_t4

0xab5e,	// (0x0007ff0b) main_touch_calib_pane_t5

0x6dcb,	// (0x0007c178) aid_cell_size_toolbar2

0x6dd3,	// (0x0007c180) aid_popup3_width_pane

0x5ad7,	// (0x0007ae84) aid_zoom_text_msg_primary

0x7b13,	// (0x0007cec0) vorec_t7

0x0437,	// (0x000757e4) bg_calc_paper_pane_g1_ParamLimits

0x044f,	// (0x000757fc) bg_calc_paper_pane_g2_ParamLimits

0x0443,	// (0x000757f0) bg_calc_paper_pane_g3_ParamLimits

0x0467,	// (0x00075814) bg_calc_paper_pane_g4_ParamLimits

0x045b,	// (0x00075808) bg_calc_paper_pane_g5_ParamLimits

0x7469,	// (0x0007c816) bg_calc_paper_pane_g6_ParamLimits

0x747a,	// (0x0007c827) bg_calc_paper_pane_g7_ParamLimits

0x748b,	// (0x0007c838) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00084505) bg_calc_paper_pane_g_ParamLimits

0x749c,	// (0x0007c849) calc_bg_paper_pane_g9_ParamLimits

0x7c25,	// (0x0007cfd2) image_qvga_pane_ParamLimits

0x7c25,	// (0x0007cfd2) image_qvga_pane

0x035a,	// (0x00075707) bg_popup_sub_pane_cp04_ParamLimits

0x1260,	// (0x0007660d) popup_mup_playback_window_g1_ParamLimits

0x126c,	// (0x00076619) popup_mup_playback_window_t1_ParamLimits

0x1281,	// (0x0007662e) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0008488f) popup_mup_playback_window_t_ParamLimits

0xa635,	// (0x0007f9e2) main_mup2_pane_g3_ParamLimits

0xa635,	// (0x0007f9e2) main_mup2_pane_g3

0x7edd,	// (0x0007d28a) popup_toolbar_window_cp04

0x1676,	// (0x00076a23) popup_call2_audio_second_window_g3_ParamLimits

0x1676,	// (0x00076a23) popup_call2_audio_second_window_g3

0x1a80,	// (0x00076e2d) popup_call2_audio_first_window_g4_ParamLimits

0x1a80,	// (0x00076e2d) popup_call2_audio_first_window_g4

0x20ff,	// (0x000774ac) popup_call2_audio_in_window_g4_ParamLimits

0x20ff,	// (0x000774ac) popup_call2_audio_in_window_g4

0x9a46,	// (0x0007edf3) aid_area_sk_bg_cut_ParamLimits

0x9a46,	// (0x0007edf3) aid_area_sk_bg_cut

0x1296,	// (0x00076643) aid_area_sk_bg_cut_2_ParamLimits

0x1296,	// (0x00076643) aid_area_sk_bg_cut_2

0xa9c1,	// (0x0007fd6e) aid_placing_details_win

0xa9c9,	// (0x0007fd76) aid_placing_details_win_2

0x2a20,	// (0x00077dcd) camera2_autofocus_pane_g1_ParamLimits

0x7022,	// (0x0007c3cf) popup_fixed_preview_cale_window_ParamLimits

0x7022,	// (0x0007c3cf) popup_fixed_preview_cale_window

0x1076,	// (0x00076423) navi_slider_pane_g3

0x106d,	// (0x0007641a) navi_slider_pane_g4

0x1064,	// (0x00076411) navi_slider_pane_g5

0x1076,	// (0x00076423) navi_slider_pane_g6

0x9395,	// (0x0007e742) navi_slider_pane_g7

0x1197,	// (0x00076544) mup_scale_pane_g3

0x11a0,	// (0x0007654d) mup_scale_pane_g4

0x11a9,	// (0x00076556) mup_scale_pane_g5

0x97c4,	// (0x0007eb71) mup_scale_pane_g6

0x97cd,	// (0x0007eb7a) mup_scale_pane_g7

0x1076,	// (0x00076423) cams2_slider_pane_g3

0x2689,	// (0x00077a36) cams2_slider_pane_g4

0xa919,	// (0x0007fcc6) cams2_slider_pane_g5

0x1076,	// (0x00076423) cams2_slider_pane_g6

0xa921,	// (0x0007fcce) cams2_slider_pane_g7

0x28c0,	// (0x00077c6d) camera2_autofocus_pane_cp_g1

0x24a0,	// (0x0007784d) bg_popup_preview_window_pane_cp02_ParamLimits

0x24a0,	// (0x0007784d) bg_popup_preview_window_pane_cp02

0x2bcc,	// (0x00077f79) list_fp_cale_pane_ParamLimits

0x2bcc,	// (0x00077f79) list_fp_cale_pane

0x2bd8,	// (0x00077f85) popup_fixed_preview_cale_window_t1_ParamLimits

0x2bd8,	// (0x00077f85) popup_fixed_preview_cale_window_t1

0xb1b9,	// (0x00080566) popup_fixed_preview_cale_window_t2_ParamLimits

0xb1b9,	// (0x00080566) popup_fixed_preview_cale_window_t2

0xb1ce,	// (0x0008057b) popup_fixed_preview_cale_window_t3_ParamLimits

0xb1ce,	// (0x0008057b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x00084b6a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x00084b6a) popup_fixed_preview_cale_window_t

0xb1e3,	// (0x00080590) list_single_fp_cale_pane_ParamLimits

0xb1e3,	// (0x00080590) list_single_fp_cale_pane

0x2bf6,	// (0x00077fa3) list_single_fp_cale_pane_g1_ParamLimits

0x2bf6,	// (0x00077fa3) list_single_fp_cale_pane_g1

0x2c02,	// (0x00077faf) list_single_fp_cale_pane_g2_ParamLimits

0x2c02,	// (0x00077faf) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00084b71) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00084b71) list_single_fp_cale_pane_g

0x2c1b,	// (0x00077fc8) list_single_fp_cale_pane_t1_ParamLimits

0x2c1b,	// (0x00077fc8) list_single_fp_cale_pane_t1

0x2c2d,	// (0x00077fda) list_single_fp_cale_pane_t2_ParamLimits

0x2c2d,	// (0x00077fda) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x00084b78) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x00084b78) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xed1d,	// (0x000840ca) main_dialer_pane

0xb1f6,	// (0x000805a3) aid_cell_size_keypad

0xb200,	// (0x000805ad) dialer_ne_pane

0xb20a,	// (0x000805b7) grid_dialer_command_1_pane

0xb212,	// (0x000805bf) grid_dialer_command_2_pane

0xb21a,	// (0x000805c7) grid_dialer_keypad_pane

0xb22e,	// (0x000805db) bg_popup_call_pane_cp06_ParamLimits

0xb22e,	// (0x000805db) bg_popup_call_pane_cp06

0xb23a,	// (0x000805e7) dialer_ne_clear_pane_ParamLimits

0xb23a,	// (0x000805e7) dialer_ne_clear_pane

0x2c60,	// (0x0007800d) dialer_ne_pane_g1

0x2c68,	// (0x00078015) dialer_ne_pane_t1_ParamLimits

0x2c68,	// (0x00078015) dialer_ne_pane_t1

0xb246,	// (0x000805f3) dialer_ne_pane_t2_ParamLimits

0xb246,	// (0x000805f3) dialer_ne_pane_t2

0xb263,	// (0x00080610) dialer_ne_pane_t3_ParamLimits

0xb263,	// (0x00080610) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00084b7d) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00084b7d) dialer_ne_pane_t

0xb287,	// (0x00080634) dialer_ne_pane_t3_copy1_ParamLimits

0xb287,	// (0x00080634) dialer_ne_pane_t3_copy1

0xb2ab,	// (0x00080658) cell_dialer_keypad_pane_ParamLimits

0xb2ab,	// (0x00080658) cell_dialer_keypad_pane

0xb2c2,	// (0x0008066f) cell_dialer_command_1_pane_ParamLimits

0xb2c2,	// (0x0008066f) cell_dialer_command_1_pane

0xb2d8,	// (0x00080685) cell_dialer_command_2_pane_ParamLimits

0xb2d8,	// (0x00080685) cell_dialer_command_2_pane

0x2c7a,	// (0x00078027) bg_button_pane_cp02_ParamLimits

0x2c7a,	// (0x00078027) bg_button_pane_cp02

0xb2e7,	// (0x00080694) cell_dialer_keypad_pane_g1_ParamLimits

0xb2e7,	// (0x00080694) cell_dialer_keypad_pane_g1

0x2c7a,	// (0x00078027) bg_button_pane_cp03_ParamLimits

0x2c7a,	// (0x00078027) bg_button_pane_cp03

0xb2fc,	// (0x000806a9) cell_dialer_command_1_pane_g1_ParamLimits

0xb2fc,	// (0x000806a9) cell_dialer_command_1_pane_g1

0x2c86,	// (0x00078033) bg_button_pane_cp04

0xb310,	// (0x000806bd) cell_dialer_command_2_pane_g1

0x0620,	// (0x000759cd) bg_button_pane_cp06

0x2c8e,	// (0x0007803b) dialer_ne_clear_pane_g1

0x0f37,	// (0x000762e4) navi_pane_g2

0x0f65,	// (0x00076312) navi_pane_g3

0x0002,

0xf3e5,	// (0x00084792) navi_pane_g

0x0ff4,	// (0x000763a1) navi_pane_mv_g2

0x101b,	// (0x000763c8) navi_pane_mv_g5

0x9360,	// (0x0007e70d) navi_pane_mv_t1

0x042b,	// (0x000757d8) main_clock2_pane

0xb350,	// (0x000806fd) main_clock2_list_pane_ParamLimits

0xb350,	// (0x000806fd) main_clock2_list_pane

0xb37a,	// (0x00080727) main_clock2_pane_t1_ParamLimits

0xb37a,	// (0x00080727) main_clock2_pane_t1

0xb39e,	// (0x0008074b) main_clock2_pane_t2_ParamLimits

0xb39e,	// (0x0008074b) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x00084b89) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x00084b89) main_clock2_pane_t

0xb3f9,	// (0x000807a6) popup_clock_analogue_window_cp03_ParamLimits

0xb3f9,	// (0x000807a6) popup_clock_analogue_window_cp03

0xb417,	// (0x000807c4) popup_clock_digital_window_cp02_ParamLimits

0xb417,	// (0x000807c4) popup_clock_digital_window_cp02

0xb484,	// (0x00080831) main_clock2_list_single_pane_ParamLimits

0xb484,	// (0x00080831) main_clock2_list_single_pane

0x0620,	// (0x000759cd) list_highlight_pane_cp05

0x2cc8,	// (0x00078075) main_clock2_list_single_pane_t1

0x7edd,	// (0x0007d28a) popup_toolbar_window_cp04_ParamLimits

0xa9eb,	// (0x0007fd98) camera2_autofocus_pane_g2_ParamLimits

0xa9eb,	// (0x0007fd98) camera2_autofocus_pane_g2

0xa9f7,	// (0x0007fda4) camera2_autofocus_pane_g3_ParamLimits

0xa9f7,	// (0x0007fda4) camera2_autofocus_pane_g3

0xaa03,	// (0x0007fdb0) camera2_autofocus_pane_g4_ParamLimits

0xaa03,	// (0x0007fdb0) camera2_autofocus_pane_g4

0xaa0f,	// (0x0007fdbc) camera2_autofocus_pane_g5_ParamLimits

0xaa0f,	// (0x0007fdbc) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00084acd) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00084acd) camera2_autofocus_pane_g

0xabe6,	// (0x0007ff93) camera2_autofocus_pane_cp_g2

0xabee,	// (0x0007ff9b) camera2_autofocus_pane_cp_g3

0xabf6,	// (0x0007ffa3) camera2_autofocus_pane_cp_g4

0xabfe,	// (0x0007ffab) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00084b33) camera2_autofocus_pane_cp_g

0xb226,	// (0x000805d3) popup_dialer_spcha_window

0xed1d,	// (0x000840ca) bg_popup_sub_pane_cp07

0x2cd6,	// (0x00078083) list_spcha_pane

0x2cde,	// (0x0007808b) list_single_spcha_pane_ParamLimits

0x2cde,	// (0x0007808b) list_single_spcha_pane

0xed1d,	// (0x000840ca) list_highlight_pane_cp06

0x2cef,	// (0x0007809c) list_single_spcha_pane_t1

0x1ea9,	// (0x00077256) popup_call2_audio_out_window_g4_ParamLimits

0x1ea9,	// (0x00077256) popup_call2_audio_out_window_g4

0xed1d,	// (0x000840ca) main_imed2_pane

0xa081,	// (0x0007f42e) popup_imed_adjust2_window

0xa094,	// (0x0007f441) popup_imed_trans_window_ParamLimits

0xa094,	// (0x0007f441) popup_imed_trans_window

0x26f2,	// (0x00077a9f) popup_blid_sat_info2_window_t1

0x2700,	// (0x00077aad) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00084a62) popup_blid_sat_info2_window_t

0xb52d,	// (0x000808da) aid_size_cell_colour_35

0xb547,	// (0x000808f4) aid_size_cell_colour_112

0xb55e,	// (0x0008090b) aid_size_cell_effect

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp02

0x0b68,	// (0x00075f15) heading_imed_pane

0xb578,	// (0x00080925) listscroll_imed_pane

0x2cfd,	// (0x000780aa) heading_imed_pane_g1

0x2d05,	// (0x000780b2) heading_imed_pane_t1

0x2d13,	// (0x000780c0) grid_imed_colour_35_pane_ParamLimits

0x2d13,	// (0x000780c0) grid_imed_colour_35_pane

0xb584,	// (0x00080931) grid_imed_effect_pane

0x2d2b,	// (0x000780d8) list_imed_aspect_pane

0xb594,	// (0x00080941) scroll_pane_cp027_ParamLimits

0xb594,	// (0x00080941) scroll_pane_cp027

0xb5a0,	// (0x0008094d) cell_imed_effect_pane_ParamLimits

0xb5a0,	// (0x0008094d) cell_imed_effect_pane

0x2d33,	// (0x000780e0) cell_imed_colour_pane_ParamLimits

0x2d33,	// (0x000780e0) cell_imed_colour_pane

0x2d75,	// (0x00078122) cell_imed_colour_pane_g1_ParamLimits

0x2d75,	// (0x00078122) cell_imed_colour_pane_g1

0x2d86,	// (0x00078133) hgihlgiht_grid_pane_cp016_ParamLimits

0x2d86,	// (0x00078133) hgihlgiht_grid_pane_cp016

0xb5b8,	// (0x00080965) cell_imed_effect_pane_g1

0xb5c0,	// (0x0008096d) grid_highlight_pane_cp017

0x2d97,	// (0x00078144) list_imed_single_pane_ParamLimits

0x2d97,	// (0x00078144) list_imed_single_pane

0xed1d,	// (0x000840ca) list_highlight_pane_cp07

0x2dac,	// (0x00078159) list_imed_aspect_pane_comp1_t1

0x24ac,	// (0x00077859) bg_tb_trans_pane_cp05

0x2dce,	// (0x0007817b) popup_imed_adjust2_window_g1

0x2df5,	// (0x000781a2) popup_imed_adjust2_window_t1

0x2e0d,	// (0x000781ba) slider_imed_adjust_pane

0x2e21,	// (0x000781ce) slider_imed_adjust_pane_g1

0x2e31,	// (0x000781de) slider_imed_adjust_pane_g2

0x2e41,	// (0x000781ee) slider_imed_adjust_pane_g3

0x2e52,	// (0x000781ff) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x00084ba6) slider_imed_adjust_pane_g

0xb5c9,	// (0x00080976) aid_size_cell_clipart2

0xb5d5,	// (0x00080982) grid_imed_clipart_pane

0x2e63,	// (0x00078210) scroll_pane_cp031

0xb5df,	// (0x0008098c) cell_imed_clipart_pane_ParamLimits

0xb5df,	// (0x0008098c) cell_imed_clipart_pane

0xb602,	// (0x000809af) cell_imed_clipart_pane_g1

0xed1d,	// (0x000840ca) grid_highlight_pane_cp014

0xb35c,	// (0x00080709) main_clock2_pane_g1_ParamLimits

0xb35c,	// (0x00080709) main_clock2_pane_g1

0xb42f,	// (0x000807dc) aid_call2_pane_cp10

0xb441,	// (0x000807ee) aid_call_pane_cp10

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g1

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g2

0xb453,	// (0x00080800) popup_clock_analogue_window_cp10_g3

0xb453,	// (0x00080800) popup_clock_analogue_window_cp10_g4

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00084b94) popup_clock_analogue_window_cp10_g

0xb465,	// (0x00080812) popup_clock_analogue_window_cp10_t1

0xb496,	// (0x00080843) clock_digital_number_pane_cp10_ParamLimits

0xb496,	// (0x00080843) clock_digital_number_pane_cp10

0xb4ae,	// (0x0008085b) clock_digital_number_pane_cp11_ParamLimits

0xb4ae,	// (0x0008085b) clock_digital_number_pane_cp11

0xb4c6,	// (0x00080873) clock_digital_number_pane_cp12_ParamLimits

0xb4c6,	// (0x00080873) clock_digital_number_pane_cp12

0xb4de,	// (0x0008088b) clock_digital_number_pane_cp13_ParamLimits

0xb4de,	// (0x0008088b) clock_digital_number_pane_cp13

0xb4f6,	// (0x000808a3) clock_digital_separator_pane_cp10_ParamLimits

0xb4f6,	// (0x000808a3) clock_digital_separator_pane_cp10

0xb50e,	// (0x000808bb) popup_clock_digital_window_cp02_t1_ParamLimits

0xb50e,	// (0x000808bb) popup_clock_digital_window_cp02_t1

0x0352,	// (0x000756ff) clock_digital_number_pane_cp10_g1

0x0352,	// (0x000756ff) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00084baf) clock_digital_number_pane_cp10_g

0x0352,	// (0x000756ff) clock_digital_separator_pane_cp10_g1

0x0352,	// (0x000756ff) clock_digital_separator_pane_g2_cp10

0x1023,	// (0x000763d0) navi_pane_vded_g4

0x102c,	// (0x000763d9) navi_pane_vded_g5

0x1035,	// (0x000763e2) navi_pane_vded_t1

0xed1d,	// (0x000840ca) main_vded_pane

0xb60b,	// (0x000809b8) main_vded_pane_g1

0xb617,	// (0x000809c4) main_vded_pane_g2

0xb621,	// (0x000809ce) main_vded_pane_g3

0x0002,

0xf807,	// (0x00084bb4) main_vded_pane_g

0xb62b,	// (0x000809d8) main_vded_pane_t1

0xb639,	// (0x000809e6) main_vded_pane_t2

0x0001,

0xf80e,	// (0x00084bbb) main_vded_pane_t

0xb647,	// (0x000809f4) vded_slider_pane

0xb651,	// (0x000809fe) vded_video_pane

0x2e6b,	// (0x00078218) vded_video_pane_g1

0xb65b,	// (0x00080a08) vded_video_pane_g2

0x28c0,	// (0x00077c6d) vded_video_pane_g3

0x0002,

0xf813,	// (0x00084bc0) vded_video_pane_g

0x2e75,	// (0x00078222) vded_slider_pane_g1

0x2607,	// (0x000779b4) vded_slider_pane_g2

0x2e7e,	// (0x0007822b) vded_slider_pane_g3

0x2e87,	// (0x00078234) vded_slider_pane_g4

0x2e90,	// (0x0007823d) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x00084bc7) vded_slider_pane_g

0xb128,	// (0x000804d5) mup3_rocker_pane_ParamLimits

0xb128,	// (0x000804d5) mup3_rocker_pane

0xb664,	// (0x00080a11) mup3_control_keys_pane_g1

0xb66c,	// (0x00080a19) mup3_control_keys_pane_g2

0xb674,	// (0x00080a21) mup3_control_keys_pane_g3

0xb67c,	// (0x00080a29) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00084bd2) mup3_control_keys_pane_g

0x704a,	// (0x0007c3f7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x704a,	// (0x0007c3f7) popup_toolbar2_fixed_window_cp01

0xb142,	// (0x000804ef) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb142,	// (0x000804ef) popup_toolbar2_fixed_window_cp02

0x17e8,	// (0x00076b95) popup_call2_audio_second_window_t4_ParamLimits

0x17e8,	// (0x00076b95) popup_call2_audio_second_window_t4

0x1d16,	// (0x000770c3) popup_call2_audio_first_window_t6_ParamLimits

0x1d16,	// (0x000770c3) popup_call2_audio_first_window_t6

0x1fac,	// (0x00077359) popup_call2_audio_out_window_t6_ParamLimits

0x1fac,	// (0x00077359) popup_call2_audio_out_window_t6

0xed1d,	// (0x000840ca) main_vitu_pane

0xb68c,	// (0x00080a39) aid_size_cell_itu_ParamLimits

0xb68c,	// (0x00080a39) aid_size_cell_itu

0x40cb,	// (0x00079478) bg_popup_window_pane_cp08_ParamLimits

0x40cb,	// (0x00079478) bg_popup_window_pane_cp08

0xb69a,	// (0x00080a47) field_vitu_entry_pane_ParamLimits

0xb69a,	// (0x00080a47) field_vitu_entry_pane

0xb6a9,	// (0x00080a56) grid_vitu_function_pane_ParamLimits

0xb6a9,	// (0x00080a56) grid_vitu_function_pane

0xb6b9,	// (0x00080a66) grid_vitu_itu_pane_ParamLimits

0xb6b9,	// (0x00080a66) grid_vitu_itu_pane

0xb6c9,	// (0x00080a76) cell_vitu_itu_pane_ParamLimits

0xb6c9,	// (0x00080a76) cell_vitu_itu_pane

0xb6de,	// (0x00080a8b) cell_vitu_function_pane_ParamLimits

0xb6de,	// (0x00080a8b) cell_vitu_function_pane

0xf07f,	// (0x0008442c) bg_popup_sub_pane_cp08_ParamLimits

0xf07f,	// (0x0008442c) bg_popup_sub_pane_cp08

0xb6f0,	// (0x00080a9d) field_vitu_entry_pane_t1_ParamLimits

0xb6f0,	// (0x00080a9d) field_vitu_entry_pane_t1

0x2eb1,	// (0x0007825e) field_vitu_entry_pane_t2_ParamLimits

0x2eb1,	// (0x0007825e) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00084be0) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00084be0) field_vitu_entry_pane_t

0x2ece,	// (0x0007827b) bg_button_pane_cp05_ParamLimits

0x2ece,	// (0x0007827b) bg_button_pane_cp05

0xb70d,	// (0x00080aba) cell_vitu_itu_pane_g1

0xb725,	// (0x00080ad2) cell_vitu_itu_pane_t1_ParamLimits

0xb725,	// (0x00080ad2) cell_vitu_itu_pane_t1

0xb737,	// (0x00080ae4) cell_vitu_itu_pane_t2_ParamLimits

0xb737,	// (0x00080ae4) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00084be5) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00084be5) cell_vitu_itu_pane_t

0x2edc,	// (0x00078289) bg_button_pane_cp07

0xb76c,	// (0x00080b19) cell_vitu_function_pane_g1

0x730d,	// (0x0007c6ba) main_calc_pane_g1

0x6e07,	// (0x0007c1b4) aid_visual_content_pane

0xed1d,	// (0x000840ca) main_vradio_pane

0xb775,	// (0x00080b22) main_vradio_pane_g1_ParamLimits

0xb775,	// (0x00080b22) main_vradio_pane_g1

0x2ee6,	// (0x00078293) main_vradio_pane_g2_ParamLimits

0x2ee6,	// (0x00078293) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x00084bec) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x00084bec) main_vradio_pane_g

0xb785,	// (0x00080b32) main_vradio_pane_t1_ParamLimits

0xb785,	// (0x00080b32) main_vradio_pane_t1

0xb797,	// (0x00080b44) main_vradio_pane_t2_ParamLimits

0xb797,	// (0x00080b44) main_vradio_pane_t2

0x2ef3,	// (0x000782a0) main_vradio_pane_t3_ParamLimits

0x2ef3,	// (0x000782a0) main_vradio_pane_t3

0x0002,

0xf844,	// (0x00084bf1) main_vradio_pane_t_ParamLimits

0xf844,	// (0x00084bf1) main_vradio_pane_t

0xb7a9,	// (0x00080b56) vradio_rocker_control_pane_ParamLimits

0xb7a9,	// (0x00080b56) vradio_rocker_control_pane

0xb7b5,	// (0x00080b62) vradio_station_info_pane_ParamLimits

0xb7b5,	// (0x00080b62) vradio_station_info_pane

0x2f07,	// (0x000782b4) vradio_frequency_info_pane_ParamLimits

0x2f07,	// (0x000782b4) vradio_frequency_info_pane

0x28c0,	// (0x00077c6d) vradio_station_info_pane_g1

0x2f16,	// (0x000782c3) vradio_station_info_pane_t1_ParamLimits

0x2f16,	// (0x000782c3) vradio_station_info_pane_t1

0x2f38,	// (0x000782e5) vradio_station_info_pane_t2_ParamLimits

0x2f38,	// (0x000782e5) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x00084bf8) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x00084bf8) vradio_station_info_pane_t

0x2f4a,	// (0x000782f7) vradio_tuning_pane

0x2f52,	// (0x000782ff) vradio_rocker_control_pane_g1

0x2f5a,	// (0x00078307) vradio_rocker_control_pane_g2

0x2f62,	// (0x0007830f) vradio_rocker_control_pane_g3

0x2f6a,	// (0x00078317) vradio_rocker_control_pane_g4

0x2f72,	// (0x0007831f) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x00084bfd) vradio_rocker_control_pane_g

0xb7c4,	// (0x00080b71) vradio_frequency_info_pane_g1

0x2f7a,	// (0x00078327) vradio_frequency_info_pane_t1_ParamLimits

0x2f7a,	// (0x00078327) vradio_frequency_info_pane_t1

0xb7ce,	// (0x00080b7b) vradio_tuning_pane_g1

0xb7d7,	// (0x00080b84) vradio_tuning_pane_t1

0x6e50,	// (0x0007c1fd) area_side_right_pane_ParamLimits

0x6e50,	// (0x0007c1fd) area_side_right_pane

0x2467,	// (0x00077814) status_small_pane_g1

0x246f,	// (0x0007781c) status_small_pane_g2

0x2478,	// (0x00077825) status_small_pane_g3

0x2481,	// (0x0007782e) status_small_pane_g4

0x0003,

0xf60b,	// (0x000849b8) status_small_pane_g

0x248a,	// (0x00077837) status_small_pane_t1

0xed1d,	// (0x000840ca) main_video3_pane

0x2f8e,	// (0x0007833b) cams_zoom_vslider_pane

0x2f96,	// (0x00078343) image3_wide_pane_ParamLimits

0x2f96,	// (0x00078343) image3_wide_pane

0x2fb0,	// (0x0007835d) image3_wide_small_pane

0x2fbc,	// (0x00078369) main_video3_pane_g1_ParamLimits

0x2fbc,	// (0x00078369) main_video3_pane_g1

0x2fd8,	// (0x00078385) main_video3_pane_g2_ParamLimits

0x2fd8,	// (0x00078385) main_video3_pane_g2

0x0001,

0xf85b,	// (0x00084c08) main_video3_pane_g_ParamLimits

0xf85b,	// (0x00084c08) main_video3_pane_g

0x2ff4,	// (0x000783a1) main_video3_pane_t1_ParamLimits

0x2ff4,	// (0x000783a1) main_video3_pane_t1

0x301f,	// (0x000783cc) main_video3_pane_t2_ParamLimits

0x301f,	// (0x000783cc) main_video3_pane_t2

0x304a,	// (0x000783f7) main_video3_pane_t3_ParamLimits

0x304a,	// (0x000783f7) main_video3_pane_t3

0x0002,

0xf860,	// (0x00084c0d) main_video3_pane_t_ParamLimits

0xf860,	// (0x00084c0d) main_video3_pane_t

0x3077,	// (0x00078424) cams_zoom_vslider_pane_g1

0x3080,	// (0x0007842d) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x00084c14) cams_zoom_vslider_pane_g

0x3088,	// (0x00078435) small_slider_vertical_pane

0x28c0,	// (0x00077c6d) small_slider_vertical_pane_g1

0x28c0,	// (0x00077c6d) small_slider_vertical_pane_g2

0x3090,	// (0x0007843d) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x00084c19) small_slider_vertical_pane_g

0xed1d,	// (0x000840ca) main_hwr_training_pane

0x3099,	// (0x00078446) hwr_training_instruct_pane_ParamLimits

0x3099,	// (0x00078446) hwr_training_instruct_pane

0xb7e6,	// (0x00080b93) hwr_training_navi_pane_ParamLimits

0xb7e6,	// (0x00080b93) hwr_training_navi_pane

0xb800,	// (0x00080bad) hwr_training_write_pane_ParamLimits

0xb800,	// (0x00080bad) hwr_training_write_pane

0xed1d,	// (0x000840ca) bg_frame_shadow_pane

0x30d8,	// (0x00078485) hwr_training_write_pane_g1

0x30e0,	// (0x0007848d) hwr_training_write_pane_g2

0x30e8,	// (0x00078495) hwr_training_write_pane_g3

0x30f0,	// (0x0007849d) hwr_training_write_pane_g4

0x30f8,	// (0x000784a5) hwr_training_write_pane_g5

0x3100,	// (0x000784ad) hwr_training_write_pane_g6

0x3108,	// (0x000784b5) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x00084c20) hwr_training_write_pane_g

0xb838,	// (0x00080be5) hwr_training_navi_pane_g1_ParamLimits

0xb838,	// (0x00080be5) hwr_training_navi_pane_g1

0xb84a,	// (0x00080bf7) hwr_training_navi_pane_g2_ParamLimits

0xb84a,	// (0x00080bf7) hwr_training_navi_pane_g2

0xb85c,	// (0x00080c09) hwr_training_navi_pane_g3_ParamLimits

0xb85c,	// (0x00080c09) hwr_training_navi_pane_g3

0xb86c,	// (0x00080c19) hwr_training_navi_pane_g4_ParamLimits

0xb86c,	// (0x00080c19) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x00084c2f) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x00084c2f) hwr_training_navi_pane_g

0xb886,	// (0x00080c33) hwr_training_navi_pane_t1

0xb894,	// (0x00080c41) list_single_hwr_training_instruct_pane_ParamLimits

0xb894,	// (0x00080c41) list_single_hwr_training_instruct_pane

0x3110,	// (0x000784bd) list_single_hwr_training_instruct_pane_t1

0x27f4,	// (0x00077ba1) bg_frame_shadow_pane_g1

0x311f,	// (0x000784cc) bg_frame_shadow_pane_g2

0x3127,	// (0x000784d4) bg_frame_shadow_pane_g3

0x312f,	// (0x000784dc) bg_frame_shadow_pane_g4

0x3137,	// (0x000784e4) bg_frame_shadow_pane_g5

0x313f,	// (0x000784ec) bg_frame_shadow_pane_g6

0x3147,	// (0x000784f4) bg_frame_shadow_pane_g7

0x04f6,	// (0x000758a3) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x00084c3a) bg_frame_shadow_pane_g

0xed1d,	// (0x000840ca) main_video_tele_dialer_pane

0xb8bd,	// (0x00080c6a) aid_size_cell_video_keypad_ParamLimits

0xb8bd,	// (0x00080c6a) aid_size_cell_video_keypad

0xb8cd,	// (0x00080c7a) grid_video_dialer_keypad_pane_ParamLimits

0xb8cd,	// (0x00080c7a) grid_video_dialer_keypad_pane

0xb901,	// (0x00080cae) video_down_pane_cp_ParamLimits

0xb901,	// (0x00080cae) video_down_pane_cp

0xb92b,	// (0x00080cd8) cell_video_dialer_keypad_pane_ParamLimits

0xb92b,	// (0x00080cd8) cell_video_dialer_keypad_pane

0x314f,	// (0x000784fc) bg_button_pane_cp08_ParamLimits

0x314f,	// (0x000784fc) bg_button_pane_cp08

0xb940,	// (0x00080ced) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb940,	// (0x00080ced) cell_video_dialer_keypad_pane_g1

0xb11c,	// (0x000804c9) mup3_rocker2_pane_ParamLimits

0xb11c,	// (0x000804c9) mup3_rocker2_pane

0x28c0,	// (0x00077c6d) mup3_rocker2_pane_g1

0x9ff5,	// (0x0007f3a2) main_dialer2_pane

0xed1d,	// (0x000840ca) main_mp4_pane

0xb982,	// (0x00080d2f) main_mp4_pane_g1_ParamLimits

0xb982,	// (0x00080d2f) main_mp4_pane_g1

0xb990,	// (0x00080d3d) main_mp4_pane_g2_ParamLimits

0xb990,	// (0x00080d3d) main_mp4_pane_g2

0xb99e,	// (0x00080d4b) main_mp4_pane_g3_ParamLimits

0xb99e,	// (0x00080d4b) main_mp4_pane_g3

0xb9e3,	// (0x00080d90) main_mp4_pane_g4_ParamLimits

0xb9e3,	// (0x00080d90) main_mp4_pane_g4

0xba0b,	// (0x00080db8) main_mp4_pane_g5_ParamLimits

0xba0b,	// (0x00080db8) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x00084c5a) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x00084c5a) main_mp4_pane_g

0xba5b,	// (0x00080e08) main_mp4_pane_t1_ParamLimits

0xba5b,	// (0x00080e08) main_mp4_pane_t1

0xbab7,	// (0x00080e64) main_mp4_pane_t2_ParamLimits

0xbab7,	// (0x00080e64) main_mp4_pane_t2

0x315b,	// (0x00078508) main_mp4_pane_t3_ParamLimits

0x315b,	// (0x00078508) main_mp4_pane_t3

0xbb09,	// (0x00080eb6) main_mp4_pane_t4_ParamLimits

0xbb09,	// (0x00080eb6) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x00084c67) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x00084c67) main_mp4_pane_t

0xbb4d,	// (0x00080efa) mp4_progress_pane_ParamLimits

0xbb4d,	// (0x00080efa) mp4_progress_pane

0xbb97,	// (0x00080f44) mp4_rocker_pane_ParamLimits

0xbb97,	// (0x00080f44) mp4_rocker_pane

0x3183,	// (0x00078530) mp4_progress_pane_t1

0x319c,	// (0x00078549) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00084c70) mp4_progress_pane_t

0x31b5,	// (0x00078562) mup_progress_pane_cp04

0x28c0,	// (0x00077c6d) mp4_rocker_pane_g1

0xbbb7,	// (0x00080f64) aid_cell_size_keypad2_ParamLimits

0xbbb7,	// (0x00080f64) aid_cell_size_keypad2

0xbbc7,	// (0x00080f74) dialer2_ne_pane_ParamLimits

0xbbc7,	// (0x00080f74) dialer2_ne_pane

0xbbd5,	// (0x00080f82) grid_dialer2_keypad_pane_ParamLimits

0xbbd5,	// (0x00080f82) grid_dialer2_keypad_pane

0x3994,	// (0x00078d41) bg_popup_call_pane_cp07_ParamLimits

0x3994,	// (0x00078d41) bg_popup_call_pane_cp07

0xbbe5,	// (0x00080f92) dialer2_ne_pane_t1_ParamLimits

0xbbe5,	// (0x00080f92) dialer2_ne_pane_t1

0xbc0a,	// (0x00080fb7) cell_dialer2_keypad_pane_ParamLimits

0xbc0a,	// (0x00080fb7) cell_dialer2_keypad_pane

0x31d3,	// (0x00078580) bg_button_pane_pane_cp04_ParamLimits

0x31d3,	// (0x00078580) bg_button_pane_pane_cp04

0xbc1f,	// (0x00080fcc) cell_dialer2_keypad_pane_g1_ParamLimits

0xbc1f,	// (0x00080fcc) cell_dialer2_keypad_pane_g1

0x7d9f,	// (0x0007d14c) aid_placing_vt_set_content_ParamLimits

0x7d9f,	// (0x0007d14c) aid_placing_vt_set_content

0x7dcb,	// (0x0007d178) aid_placing_vt_set_title_ParamLimits

0x7dcb,	// (0x0007d178) aid_placing_vt_set_title

0xed1d,	// (0x000840ca) main_image3_pane

0xbcb9,	// (0x00081066) area_side_right_pane_cp01_ParamLimits

0xbcb9,	// (0x00081066) area_side_right_pane_cp01

0xf08d,	// (0x0008443a) main_image3_pane_g1_ParamLimits

0xf08d,	// (0x0008443a) main_image3_pane_g1

0xbce6,	// (0x00081093) main_image3_pane_g2_ParamLimits

0xbce6,	// (0x00081093) main_image3_pane_g2

0xbcff,	// (0x000810ac) main_image3_pane_g3_ParamLimits

0xbcff,	// (0x000810ac) main_image3_pane_g3

0xbd18,	// (0x000810c5) main_image3_pane_g4_ParamLimits

0xbd18,	// (0x000810c5) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00084c7f) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00084c7f) main_image3_pane_g

0xbd31,	// (0x000810de) main_image3_pane_t1_ParamLimits

0xbd31,	// (0x000810de) main_image3_pane_t1

0xbd56,	// (0x00081103) main_image3_pane_t2_ParamLimits

0xbd56,	// (0x00081103) main_image3_pane_t2

0xbd75,	// (0x00081122) main_image3_pane_t3_ParamLimits

0xbd75,	// (0x00081122) main_image3_pane_t3

0x0003,

0xf8db,	// (0x00084c88) main_image3_pane_t_ParamLimits

0xf8db,	// (0x00084c88) main_image3_pane_t

0x40cb,	// (0x00079478) grid_sctrl_middle_pane_cp01_ParamLimits

0x40cb,	// (0x00079478) grid_sctrl_middle_pane_cp01

0xbdd6,	// (0x00081183) cell_sctrl_middle_pane_cp01_ParamLimits

0xbdd6,	// (0x00081183) cell_sctrl_middle_pane_cp01

0xbde7,	// (0x00081194) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbde7,	// (0x00081194) cell_sctrl_middle_pane_cp01_g1

0xed1d,	// (0x000840ca) main_call4_pane

0xbdf4,	// (0x000811a1) aid_size_button_call4_ParamLimits

0xbdf4,	// (0x000811a1) aid_size_button_call4

0xbe24,	// (0x000811d1) call4_windows_pane_ParamLimits

0xbe24,	// (0x000811d1) call4_windows_pane

0xbe3e,	// (0x000811eb) grid_call4_button_pane_ParamLimits

0xbe3e,	// (0x000811eb) grid_call4_button_pane

0x31df,	// (0x0007858c) call4_windows_conf_pane

0x31f6,	// (0x000785a3) popup_call4_audio_first_window_ParamLimits

0x31f6,	// (0x000785a3) popup_call4_audio_first_window

0x3242,	// (0x000785ef) popup_call4_audio_second_window_ParamLimits

0x3242,	// (0x000785ef) popup_call4_audio_second_window

0x3256,	// (0x00078603) popup_call4_audio_wait_window_ParamLimits

0x3256,	// (0x00078603) popup_call4_audio_wait_window

0xbe62,	// (0x0008120f) cell_call4_button_pane_ParamLimits

0xbe62,	// (0x0008120f) cell_call4_button_pane

0xbe87,	// (0x00081234) bg_button_pane_cp09_ParamLimits

0xbe87,	// (0x00081234) bg_button_pane_cp09

0xbe93,	// (0x00081240) cell_call4_button_pane_g1_ParamLimits

0xbe93,	// (0x00081240) cell_call4_button_pane_g1

0xbea0,	// (0x0008124d) cell_call4_button_pane_t1_ParamLimits

0xbea0,	// (0x0008124d) cell_call4_button_pane_t1

0x329e,	// (0x0007864b) popup_call4_audio_conf_window_ParamLimits

0x329e,	// (0x0007864b) popup_call4_audio_conf_window

0xb14f,	// (0x000804fc) mup3_progress_pane_t1_ParamLimits

0xb16e,	// (0x0008051b) mup3_progress_pane_t2_ParamLimits

0x2b89,	// (0x00077f36) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00084b5c) mup3_progress_pane_t_ParamLimits

0x2ba6,	// (0x00077f53) mup_progress_pane_cp03_ParamLimits

0xb684,	// (0x00080a31) mup3_control_keys_pane_g4_copy1

0xbb7b,	// (0x00080f28) mp4_rocker2_pane_ParamLimits

0xbb7b,	// (0x00080f28) mp4_rocker2_pane

0x32ba,	// (0x00078667) mp4_rocker2_pane_g1

0x32b2,	// (0x0007865f) mp4_rocker2_pane_g2

0xbeb2,	// (0x0008125f) mp4_rocker2_pane_g3

0xbeba,	// (0x00081267) mp4_rocker2_pane_g4

0xbec2,	// (0x0008126f) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00084c91) mp4_rocker2_pane_g

0xed1d,	// (0x000840ca) main_camera4_pane

0xed1d,	// (0x000840ca) main_video4_pane

0xb8dd,	// (0x00080c8a) main_video_tele_dialer_pane_t1_ParamLimits

0xb8dd,	// (0x00080c8a) main_video_tele_dialer_pane_t1

0xb8ef,	// (0x00080c9c) main_video_tele_dialer_pane_t2_ParamLimits

0xb8ef,	// (0x00080c9c) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x00084c4b) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x00084c4b) main_video_tele_dialer_pane_t

0xbee2,	// (0x0008128f) cam4_autofocus_pane_ParamLimits

0xbee2,	// (0x0008128f) cam4_autofocus_pane

0xbefc,	// (0x000812a9) cam4_image_uncrop_pane_ParamLimits

0xbefc,	// (0x000812a9) cam4_image_uncrop_pane

0xbf13,	// (0x000812c0) cam4_indicators_pane_ParamLimits

0xbf13,	// (0x000812c0) cam4_indicators_pane

0xbf2f,	// (0x000812dc) main_camera4_pane_g1_ParamLimits

0xbf2f,	// (0x000812dc) main_camera4_pane_g1

0xbf3b,	// (0x000812e8) main_camera4_pane_g2_ParamLimits

0xbf3b,	// (0x000812e8) main_camera4_pane_g2

0xbf3b,	// (0x000812e8) main_camera4_pane_g3_ParamLimits

0xbf3b,	// (0x000812e8) main_camera4_pane_g3

0xbf47,	// (0x000812f4) main_camera4_pane_g4_ParamLimits

0xbf47,	// (0x000812f4) main_camera4_pane_g4

0xbf53,	// (0x00081300) main_camera4_pane_g5_ParamLimits

0xbf53,	// (0x00081300) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00084c9c) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00084c9c) main_camera4_pane_g

0xbf6d,	// (0x0008131a) main_camera4_pane_t1_ParamLimits

0xbf6d,	// (0x0008131a) main_camera4_pane_t1

0x2b0e,	// (0x00077ebb) bg_tb_trans_pane_cp06

0xbfbd,	// (0x0008136a) cam4_indicators_pane_g1

0xbfce,	// (0x0008137b) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x00084cb7) cam4_indicators_pane_g

0xbfe6,	// (0x00081393) cam4_indicators_pane_t1

0xc010,	// (0x000813bd) main_video4_pane_g1_ParamLimits

0xc010,	// (0x000813bd) main_video4_pane_g1

0xc01c,	// (0x000813c9) main_video4_pane_g2_ParamLimits

0xc01c,	// (0x000813c9) main_video4_pane_g2

0xc028,	// (0x000813d5) main_video4_pane_g3_ParamLimits

0xc028,	// (0x000813d5) main_video4_pane_g3

0xc034,	// (0x000813e1) main_video4_pane_g4_ParamLimits

0xc034,	// (0x000813e1) main_video4_pane_g4

0x0004,

0xf911,	// (0x00084cbe) main_video4_pane_g_ParamLimits

0xf911,	// (0x00084cbe) main_video4_pane_g

0xc054,	// (0x00081401) vid4_indicators_pane_ParamLimits

0xc054,	// (0x00081401) vid4_indicators_pane

0xc073,	// (0x00081420) video4_image_uncrop_cif_pane_ParamLimits

0xc073,	// (0x00081420) video4_image_uncrop_cif_pane

0xc082,	// (0x0008142f) video4_image_uncrop_nhd_pane_ParamLimits

0xc082,	// (0x0008142f) video4_image_uncrop_nhd_pane

0xbefc,	// (0x000812a9) video4_image_uncrop_vga_pane_ParamLimits

0xbefc,	// (0x000812a9) video4_image_uncrop_vga_pane

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp07

0xc097,	// (0x00081444) vid4_indicators_pane_g1

0xc0ab,	// (0x00081458) vid4_indicators_pane_g2

0xc0bf,	// (0x0008146c) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x00084cc9) vid4_indicators_pane_g

0xc0ec,	// (0x00081499) vid4_indicators_pane_t1

0xc103,	// (0x000814b0) cam4_autofocus_pane_g1

0xc10b,	// (0x000814b8) cam4_autofocus_pane_g2

0xc113,	// (0x000814c0) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x00084cd4) cam4_autofocus_pane_g

0xc11b,	// (0x000814c8) cam4_autofocus_pane_g3_copy1

0xb90f,	// (0x00080cbc) video_down_pane_cp_t1

0xb91d,	// (0x00080cca) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00084c50) video_down_pane_cp_t

0x40cb,	// (0x00079478) popup_vitu2_window_ParamLimits

0x40cb,	// (0x00079478) popup_vitu2_window

0xc123,	// (0x000814d0) aid_size_cell2_itu2_ParamLimits

0xc123,	// (0x000814d0) aid_size_cell2_itu2

0xc145,	// (0x000814f2) aid_size_cell_itu2_ParamLimits

0xc145,	// (0x000814f2) aid_size_cell_itu2

0x3994,	// (0x00078d41) bg_popup_window_pane_cp09_ParamLimits

0x3994,	// (0x00078d41) bg_popup_window_pane_cp09

0xc189,	// (0x00081536) field_vitu2_entry_pane_ParamLimits

0xc189,	// (0x00081536) field_vitu2_entry_pane

0xc1a9,	// (0x00081556) grid_vitu2_function_pane_ParamLimits

0xc1a9,	// (0x00081556) grid_vitu2_function_pane

0xc1ed,	// (0x0008159a) grid_vitu2_itu_pane_ParamLimits

0xc1ed,	// (0x0008159a) grid_vitu2_itu_pane

0xc267,	// (0x00081614) cell_vitu2_itu_pane_ParamLimits

0xc267,	// (0x00081614) cell_vitu2_itu_pane

0xc280,	// (0x0008162d) cell_vitu2_function_pane_ParamLimits

0xc280,	// (0x0008162d) cell_vitu2_function_pane

0x32c2,	// (0x0007866f) bg_popup_call_pane_cp08_ParamLimits

0x32c2,	// (0x0007866f) bg_popup_call_pane_cp08

0x32d9,	// (0x00078686) field_vitu2_entry_pane_g1

0x32e5,	// (0x00078692) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x00084cdb) field_vitu2_entry_pane_g

0x5e24,	// (0x0007b1d1) field_vitu2_entry_pane_t1_ParamLimits

0x5e24,	// (0x0007b1d1) field_vitu2_entry_pane_t1

0x5e54,	// (0x0007b201) field_vitu2_entry_pane_t2_ParamLimits

0x5e54,	// (0x0007b201) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x00084ce2) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x00084ce2) field_vitu2_entry_pane_t

0xc2c1,	// (0x0008166e) bg_button_pane_cp010_ParamLimits

0xc2c1,	// (0x0008166e) bg_button_pane_cp010

0xc2cf,	// (0x0008167c) cell_vitu2_itu_pane_g1

0xc2ef,	// (0x0008169c) cell_vitu2_itu_pane_t1_ParamLimits

0xc2ef,	// (0x0008169c) cell_vitu2_itu_pane_t1

0x5e71,	// (0x0007b21e) cell_vitu2_itu_pane_t2_ParamLimits

0x5e71,	// (0x0007b21e) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x00084cec) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x00084cec) cell_vitu2_itu_pane_t

0xf07f,	// (0x0008442c) bg_button_pane_cp011

0xc33b,	// (0x000816e8) cell_vitu2_function_pane_g1

0xed1d,	// (0x000840ca) main_myfav_hc_pane

0xbdb7,	// (0x00081164) popup_image3_note_pane_ParamLimits

0xbdb7,	// (0x00081164) popup_image3_note_pane

0xbdc5,	// (0x00081172) popup_image3_tool_bar_pane_ParamLimits

0xbdc5,	// (0x00081172) popup_image3_tool_bar_pane

0x5ee7,	// (0x0007b294) cell_vitu2_itu_pane_t3_ParamLimits

0x5ee7,	// (0x0007b294) cell_vitu2_itu_pane_t3

0xed1d,	// (0x000840ca) bg_popup_trans_pane

0x3307,	// (0x000786b4) grid_image3_tool_bar_pane

0x3311,	// (0x000786be) bg_popup_trans_pane_g1

0x0879,	// (0x00075c26) bg_popup_trans_pane_g2

0x3319,	// (0x000786c6) bg_popup_trans_pane_g3

0x3321,	// (0x000786ce) bg_popup_trans_pane_g4

0x3329,	// (0x000786d6) bg_popup_trans_pane_g5

0x3331,	// (0x000786de) bg_popup_trans_pane_g6

0x3339,	// (0x000786e6) bg_popup_trans_pane_g7

0x3341,	// (0x000786ee) bg_popup_trans_pane_g8

0x0859,	// (0x00075c06) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x00084cf3) bg_popup_trans_pane_g

0x3349,	// (0x000786f6) cell_image3_tool_bar_pane_ParamLimits

0x3349,	// (0x000786f6) cell_image3_tool_bar_pane

0x28c0,	// (0x00077c6d) cell_image3_tool_bar_pane_g1

0xed1d,	// (0x000840ca) bg_popup_trans_pane_cp1

0x335d,	// (0x0007870a) popup_image3_note_pane_t1

0x336b,	// (0x00078718) popup_image3_note_pane_t2

0x3379,	// (0x00078726) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x00084d06) popup_image3_note_pane_t

0x3387,	// (0x00078734) popup_image3_note_pane_t3_copy1

0xc34f,	// (0x000816fc) bg_myfav_hc_instruction_pane_ParamLimits

0xc34f,	// (0x000816fc) bg_myfav_hc_instruction_pane

0xc367,	// (0x00081714) cell_myfav_contact_pane_ParamLimits

0xc367,	// (0x00081714) cell_myfav_contact_pane

0xc381,	// (0x0008172e) cell_myfav_contact_pane_cp1_ParamLimits

0xc381,	// (0x0008172e) cell_myfav_contact_pane_cp1

0xc399,	// (0x00081746) cell_myfav_contact_pane_cp2_ParamLimits

0xc399,	// (0x00081746) cell_myfav_contact_pane_cp2

0xc3b1,	// (0x0008175e) cell_myfav_contact_pane_cp3_ParamLimits

0xc3b1,	// (0x0008175e) cell_myfav_contact_pane_cp3

0xc3c8,	// (0x00081775) cell_myfav_contact_pane_cp4_ParamLimits

0xc3c8,	// (0x00081775) cell_myfav_contact_pane_cp4

0xc3de,	// (0x0008178b) cell_myfav_contact_pane_cp5_ParamLimits

0xc3de,	// (0x0008178b) cell_myfav_contact_pane_cp5

0xc3f2,	// (0x0008179f) cell_myfav_contact_pane_cp6_ParamLimits

0xc3f2,	// (0x0008179f) cell_myfav_contact_pane_cp6

0xc406,	// (0x000817b3) cell_myfav_contact_pane_cp7_ParamLimits

0xc406,	// (0x000817b3) cell_myfav_contact_pane_cp7

0x3395,	// (0x00078742) listscroll_gen_pane_cp05

0xc41e,	// (0x000817cb) main_myfav_hc_pane_g1_ParamLimits

0xc41e,	// (0x000817cb) main_myfav_hc_pane_g1

0xc434,	// (0x000817e1) main_myfav_hc_pane_g2_ParamLimits

0xc434,	// (0x000817e1) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x00084d0d) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x00084d0d) main_myfav_hc_pane_g

0xc464,	// (0x00081811) main_myfav_hc_pane_t1_ParamLimits

0xc464,	// (0x00081811) main_myfav_hc_pane_t1

0x339e,	// (0x0007874b) main_myfav_hc_pane_t2_ParamLimits

0x339e,	// (0x0007874b) main_myfav_hc_pane_t2

0x33b0,	// (0x0007875d) main_myfav_hc_pane_t3_ParamLimits

0x33b0,	// (0x0007875d) main_myfav_hc_pane_t3

0xc47b,	// (0x00081828) main_myfav_hc_pane_t4_ParamLimits

0xc47b,	// (0x00081828) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x00084d14) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x00084d14) main_myfav_hc_pane_t

0x28c0,	// (0x00077c6d) bg_myfav_hc_instruction_pane_g1

0x33c2,	// (0x0007876f) cell_myfav_contact_pane_g1_ParamLimits

0x33c2,	// (0x0007876f) cell_myfav_contact_pane_g1

0x33c2,	// (0x0007876f) cell_myfav_contact_pane_g2_ParamLimits

0x33c2,	// (0x0007876f) cell_myfav_contact_pane_g2

0x33ce,	// (0x0007877b) cell_myfav_contact_pane_g3_ParamLimits

0x33ce,	// (0x0007877b) cell_myfav_contact_pane_g3

0x2b73,	// (0x00077f20) cell_myfav_contact_pane_g4_ParamLimits

0x2b73,	// (0x00077f20) cell_myfav_contact_pane_g4

0x33db,	// (0x00078788) cell_myfav_contact_pane_g5_ParamLimits

0x33db,	// (0x00078788) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x00084d1f) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x00084d1f) cell_myfav_contact_pane_g

0xc44c,	// (0x000817f9) main_myfav_hc_pane_g3_ParamLimits

0xc44c,	// (0x000817f9) main_myfav_hc_pane_g3

0x6f85,	// (0x0007c332) popup_adpt_find_window

0xc4a5,	// (0x00081852) afind_page_pane_ParamLimits

0xc4a5,	// (0x00081852) afind_page_pane

0xc4b2,	// (0x0008185f) aid_size_cell_afind_ParamLimits

0xc4b2,	// (0x0008185f) aid_size_cell_afind

0xc4cc,	// (0x00081879) bg_popup_sub_pane_cp09_ParamLimits

0xc4cc,	// (0x00081879) bg_popup_sub_pane_cp09

0xc4d9,	// (0x00081886) find_pane_cp01_ParamLimits

0xc4d9,	// (0x00081886) find_pane_cp01

0x33e7,	// (0x00078794) grid_afind_control_pane_ParamLimits

0x33e7,	// (0x00078794) grid_afind_control_pane

0xc4e6,	// (0x00081893) grid_afind_pane_ParamLimits

0xc4e6,	// (0x00081893) grid_afind_pane

0xc500,	// (0x000818ad) cell_afind_pane_ParamLimits

0xc500,	// (0x000818ad) cell_afind_pane

0x28c0,	// (0x00077c6d) afind_page_pane_g1

0xc548,	// (0x000818f5) afind_page_pane_g2

0xc551,	// (0x000818fe) afind_page_pane_g3

0x0002,

0xf97d,	// (0x00084d2a) afind_page_pane_g

0xc55a,	// (0x00081907) afind_page_pane_t1

0x33fb,	// (0x000787a8) cell_afind_grid_control_pane_ParamLimits

0x33fb,	// (0x000787a8) cell_afind_grid_control_pane

0x31d3,	// (0x00078580) bg_button_pane_cp69_ParamLimits

0x31d3,	// (0x00078580) bg_button_pane_cp69

0xc57a,	// (0x00081927) cell_afind_pane_g1_ParamLimits

0xc57a,	// (0x00081927) cell_afind_pane_g1

0xc587,	// (0x00081934) cell_afind_pane_t1_ParamLimits

0xc587,	// (0x00081934) cell_afind_pane_t1

0x0672,	// (0x00075a1f) bg_button_pane_cp72

0x340a,	// (0x000787b7) cell_afind_grid_control_pane_g1

0x9b6d,	// (0x0007ef1a) aid_image_placing_area_ParamLimits

0x9b6d,	// (0x0007ef1a) aid_image_placing_area

0x2e99,	// (0x00078246) field_vitu_entry_pane_g1_ParamLimits

0x2e99,	// (0x00078246) field_vitu_entry_pane_g1

0x2ea5,	// (0x00078252) field_vitu_entry_pane_g2_ParamLimits

0x2ea5,	// (0x00078252) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x00084bdb) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x00084bdb) field_vitu_entry_pane_g

0xb70d,	// (0x00080aba) cell_vitu_itu_pane_g1_ParamLimits

0xb74f,	// (0x00080afc) cell_vitu_itu_pane_t3_ParamLimits

0xb74f,	// (0x00080afc) cell_vitu_itu_pane_t3

0x3183,	// (0x00078530) mp4_progress_pane_t1_ParamLimits

0x319c,	// (0x00078549) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00084c70) mp4_progress_pane_t_ParamLimits

0x31b5,	// (0x00078562) mup_progress_pane_cp04_ParamLimits

0xc48f,	// (0x0008183c) main_myfav_hc_pane_t5_ParamLimits

0xc48f,	// (0x0008183c) main_myfav_hc_pane_t5

0x5adf,	// (0x0007ae8c) aid_zoom_text_primary

0x6f85,	// (0x0007c332) popup_adpt_find_window_ParamLimits

0xf07f,	// (0x0008442c) main_cam_set_pane

0xbf21,	// (0x000812ce) cam4_zoom_pane_ParamLimits

0xbf21,	// (0x000812ce) cam4_zoom_pane

0xc599,	// (0x00081946) main_cam_set_pane_g1_ParamLimits

0xc599,	// (0x00081946) main_cam_set_pane_g1

0xc5a7,	// (0x00081954) main_cam_set_pane_g2_ParamLimits

0xc5a7,	// (0x00081954) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x00084d31) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x00084d31) main_cam_set_pane_g

0xc5b3,	// (0x00081960) main_cam_set_pane_t1_ParamLimits

0xc5b3,	// (0x00081960) main_cam_set_pane_t1

0xc5cf,	// (0x0008197c) main_cset_listscroll_pane_ParamLimits

0xc5cf,	// (0x0008197c) main_cset_listscroll_pane

0xc5fa,	// (0x000819a7) main_cset_slider_pane_ParamLimits

0xc5fa,	// (0x000819a7) main_cset_slider_pane

0x341b,	// (0x000787c8) main_cset_list_pane_ParamLimits

0x341b,	// (0x000787c8) main_cset_list_pane

0x342b,	// (0x000787d8) scroll_pane_cp028

0xc619,	// (0x000819c6) aid_area_touch_slider

0xc635,	// (0x000819e2) cset_slider_pane

0xc65f,	// (0x00081a0c) main_cset_slider_pane_g1

0xc674,	// (0x00081a21) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x00084d36) main_cset_slider_pane_g

0x347c,	// (0x00078829) main_cset_slider_pane_t1

0xc73a,	// (0x00081ae7) main_cset_slider_pane_t2

0xc754,	// (0x00081b01) main_cset_slider_pane_t3

0xc76e,	// (0x00081b1b) main_cset_slider_pane_t4

0xc78c,	// (0x00081b39) main_cset_slider_pane_t5

0xc7aa,	// (0x00081b57) main_cset_slider_pane_t6

0xc7c1,	// (0x00081b6e) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x00084d5b) main_cset_slider_pane_t

0xc8cf,	// (0x00081c7c) cset_list_set_pane_ParamLimits

0xc8cf,	// (0x00081c7c) cset_list_set_pane

0xc8e8,	// (0x00081c95) aid_position_infowindow_above

0xc8f0,	// (0x00081c9d) aid_position_infowindow_below

0xc8f8,	// (0x00081ca5) cset_list_set_pane_g1_ParamLimits

0xc8f8,	// (0x00081ca5) cset_list_set_pane_g1

0x5f39,	// (0x0007b2e6) cset_list_set_pane_g3_ParamLimits

0x5f39,	// (0x0007b2e6) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x00084d7a) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x00084d7a) cset_list_set_pane_g

0x5f48,	// (0x0007b2f5) cset_list_set_pane_t1_ParamLimits

0x5f48,	// (0x0007b2f5) cset_list_set_pane_t1

0xf07f,	// (0x0008442c) list_highlight_pane_cp021_ParamLimits

0xf07f,	// (0x0008442c) list_highlight_pane_cp021

0x1197,	// (0x00076544) cset_slider_pane_g1

0x11a9,	// (0x00076556) cset_slider_pane_g2

0x11a0,	// (0x0007654d) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x00084d7f) cset_slider_pane_g

0xc904,	// (0x00081cb1) aid_area_touch_cam4_zoom

0xc90c,	// (0x00081cb9) cam4_zoom_cont_pane

0xc914,	// (0x00081cc1) cam4_zoom_pane_g1

0xc91c,	// (0x00081cc9) cam4_zoom_pane_g2

0xc924,	// (0x00081cd1) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x00084d86) cam4_zoom_pane_g

0x3090,	// (0x0007843d) cam4_zoom_cont_pane_g1

0x38b0,	// (0x00078c5d) cam4_zoom_cont_pane_g2

0x38b9,	// (0x00078c66) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x00084d8d) cam4_zoom_cont_pane_g

0xbe0e,	// (0x000811bb) call4_image_pane_ParamLimits

0xbe0e,	// (0x000811bb) call4_image_pane

0x31df,	// (0x0007858c) call4_windows_conf_pane_ParamLimits

0x3220,	// (0x000785cd) popup_call4_audio_in_window_ParamLimits

0x3220,	// (0x000785cd) popup_call4_audio_in_window

0xed1d,	// (0x000840ca) bg_popup_call2_act_pane_cp02

0x3296,	// (0x00078643) call4_list_conf_pane

0x28c0,	// (0x00077c6d) call4_image_pane_g1

0x28c0,	// (0x00077c6d) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00084a9c) call4_image_pane_g

0x351c,	// (0x000788c9) list_single_graphic_popup_conf4_pane_ParamLimits

0x351c,	// (0x000788c9) list_single_graphic_popup_conf4_pane

0xed1d,	// (0x000840ca) list_highlight_pane_cp022

0x352f,	// (0x000788dc) list_single_graphic_popup_conf4_pane_g1

0x0d93,	// (0x00076140) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x00084d94) list_single_graphic_popup_conf4_pane_g

0x3537,	// (0x000788e4) list_single_graphic_popup_conf4_pane_t1

0x7f2f,	// (0x0007d2dc) popup_vtel_slider_window_ParamLimits

0x7f2f,	// (0x0007d2dc) popup_vtel_slider_window

0x31c1,	// (0x0007856e) dialer2_ne_pane_t2_ParamLimits

0x31c1,	// (0x0007856e) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00084c75) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00084c75) dialer2_ne_pane_t

0xf07f,	// (0x0008442c) bg_popup_sub_pane_cp010_ParamLimits

0xf07f,	// (0x0008442c) bg_popup_sub_pane_cp010

0xc92c,	// (0x00081cd9) popup_vtel_slider_window_g1_ParamLimits

0xc92c,	// (0x00081cd9) popup_vtel_slider_window_g1

0xc938,	// (0x00081ce5) popup_vtel_slider_window_g2_ParamLimits

0xc938,	// (0x00081ce5) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x00084d99) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x00084d99) popup_vtel_slider_window_g

0xc980,	// (0x00081d2d) vtel_slider_pane_ParamLimits

0xc980,	// (0x00081d2d) vtel_slider_pane

0xc98f,	// (0x00081d3c) vtel_slider_pane_g1_ParamLimits

0xc98f,	// (0x00081d3c) vtel_slider_pane_g1

0xc99c,	// (0x00081d49) vtel_slider_pane_g2_ParamLimits

0xc99c,	// (0x00081d49) vtel_slider_pane_g2

0xc9a9,	// (0x00081d56) vtel_slider_pane_g3_ParamLimits

0xc9a9,	// (0x00081d56) vtel_slider_pane_g3

0xc98f,	// (0x00081d3c) vtel_slider_pane_g4_ParamLimits

0xc98f,	// (0x00081d3c) vtel_slider_pane_g4

0xc9b6,	// (0x00081d63) vtel_slider_pane_g5_ParamLimits

0xc9b6,	// (0x00081d63) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x00084da2) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x00084da2) vtel_slider_pane_g

0xf07f,	// (0x0008442c) main_gallery2_pane

0xc16b,	// (0x00081518) aid_size_row_itut2_dropdow_list_ParamLimits

0xc16b,	// (0x00081518) aid_size_row_itut2_dropdow_list

0xc1cb,	// (0x00081578) grid_vitu2_function_top_pane_ParamLimits

0xc1cb,	// (0x00081578) grid_vitu2_function_top_pane

0xc225,	// (0x000815d2) popup_vitu2_dropdown_list_window_ParamLimits

0xc225,	// (0x000815d2) popup_vitu2_dropdown_list_window

0xc245,	// (0x000815f2) popup_vitu2_match_list_window

0xc9c3,	// (0x00081d70) cell_vitu2_function_top_pane_ParamLimits

0xc9c3,	// (0x00081d70) cell_vitu2_function_top_pane

0xc9dd,	// (0x00081d8a) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc9dd,	// (0x00081d8a) cell_vitu2_function_top_pane_cp01

0xc9f9,	// (0x00081da6) cell_vitu2_function_top_wide_pane_ParamLimits

0xc9f9,	// (0x00081da6) cell_vitu2_function_top_wide_pane

0xf07f,	// (0x0008442c) bg_button_pane_cp012

0xca15,	// (0x00081dc2) cell_vitu2_function_top_pane_g1

0xca29,	// (0x00081dd6) bg_button_pane_cp013_ParamLimits

0xca29,	// (0x00081dd6) bg_button_pane_cp013

0xca45,	// (0x00081df2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xca45,	// (0x00081df2) cell_vitu2_function_top_wide_pane_g1

0x40cb,	// (0x00079478) bg_popup_sub_pane_cp20

0xca5d,	// (0x00081e0a) list_vitu2_match_list_pane

0x3311,	// (0x000786be) bg_popup_sub_pane_cp20_g1

0x3319,	// (0x000786c6) bg_popup_sub_pane_cp20_g2

0x0879,	// (0x00075c26) bg_popup_sub_pane_cp20_g3

0x3321,	// (0x000786ce) bg_popup_sub_pane_cp20_g4

0x0859,	// (0x00075c06) bg_popup_sub_pane_cp20_g5

0x354d,	// (0x000788fa) bg_popup_sub_pane_cp20_g6

0x3331,	// (0x000786de) bg_popup_sub_pane_cp20_g7

0x3339,	// (0x000786e6) bg_popup_sub_pane_cp20_g8

0x3341,	// (0x000786ee) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x00084dad) bg_popup_sub_pane_cp20_g

0xca75,	// (0x00081e22) list_vitu2_match_list_item_pane_ParamLimits

0xca75,	// (0x00081e22) list_vitu2_match_list_item_pane

0xca87,	// (0x00081e34) list_vitu2_match_list_item_pane_t1

0xed1d,	// (0x000840ca) bg_popup_sub_pane_cp21

0x0cbb,	// (0x00076068) grid_vitu2_dropdown_list_pane

0xcaa1,	// (0x00081e4e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcaa1,	// (0x00081e4e) cell_vitu2_dropdown_list_char_pane

0xcac2,	// (0x00081e6f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcac2,	// (0x00081e6f) cell_vitu2_dropdown_list_ctrl_pane

0x3567,	// (0x00078914) cell_vitu2_dropdown_list_char_pane_g1

0x355e,	// (0x0007890b) cell_vitu2_dropdown_list_char_pane_g2

0x3555,	// (0x00078902) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x00084dca) cell_vitu2_dropdown_list_char_pane_g

0xcaee,	// (0x00081e9b) cell_vitu2_dropdown_list_char_pane_t1

0xcafc,	// (0x00081ea9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcafc,	// (0x00081ea9) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcb0c,	// (0x00081eb9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcb0c,	// (0x00081eb9) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcb1d,	// (0x00081eca) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcb1d,	// (0x00081eca) cell_vitu2_dropdown_list_ctrl_pane_g3

0xcb2d,	// (0x00081eda) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xcb2d,	// (0x00081eda) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2b0e,	// (0x00077ebb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2b0e,	// (0x00077ebb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x00084dd1) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x00084dd1) cell_vitu2_dropdown_list_ctrl_pane_g

0xcb49,	// (0x00081ef6) aid_size_cell_gallery2_ParamLimits

0xcb49,	// (0x00081ef6) aid_size_cell_gallery2

0xcb63,	// (0x00081f10) grid_gallery2_pane_ParamLimits

0xcb63,	// (0x00081f10) grid_gallery2_pane

0xb594,	// (0x00080941) scroll_pane_cp029_ParamLimits

0xb594,	// (0x00080941) scroll_pane_cp029

0xcb7a,	// (0x00081f27) cell_gallery2_pane_ParamLimits

0xcb7a,	// (0x00081f27) cell_gallery2_pane

0x3570,	// (0x0007891d) cell_gallery2_pane_g2

0xcbcc,	// (0x00081f79) cell_gallery2_pane_g3

0x3578,	// (0x00078925) cell_gallery2_pane_g4

0x3580,	// (0x0007892d) cell_gallery2_pane_g5

0x0620,	// (0x000759cd) grid_highlight_pane_cp10

0xc245,	// (0x000815f2) popup_vitu2_match_list_window_ParamLimits

0xc257,	// (0x00081604) popup_vitu2_query_window_ParamLimits

0xc257,	// (0x00081604) popup_vitu2_query_window

0xed1d,	// (0x000840ca) bg_vitu2_candi_button_pane

0x3567,	// (0x00078914) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x355e,	// (0x0007890b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3555,	// (0x00078902) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5fa7,	// (0x0007b354) bg_button_pane_cp015

0xcbd4,	// (0x00081f81) bg_button_pane_cp016

0xcbe7,	// (0x00081f94) bg_button_pane_cp017

0x24ac,	// (0x00077859) bg_popup_sub_pane_cp22

0x3588,	// (0x00078935) popup_vitu2_query_window_g1

0x5fda,	// (0x0007b387) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x00084ddc) popup_vitu2_query_window_g

0x5ff7,	// (0x0007b3a4) popup_vitu2_query_window_t1_ParamLimits

0x5ff7,	// (0x0007b3a4) popup_vitu2_query_window_t1

0x602a,	// (0x0007b3d7) popup_vitu2_query_window_t2_ParamLimits

0x602a,	// (0x0007b3d7) popup_vitu2_query_window_t2

0x603c,	// (0x0007b3e9) popup_vitu2_query_window_t3_ParamLimits

0x603c,	// (0x0007b3e9) popup_vitu2_query_window_t3

0xcc0b,	// (0x00081fb8) popup_vitu2_query_window_t4_ParamLimits

0xcc0b,	// (0x00081fb8) popup_vitu2_query_window_t4

0xcc2c,	// (0x00081fd9) popup_vitu2_query_window_t5_ParamLimits

0xcc2c,	// (0x00081fd9) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x00084de3) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x00084de3) popup_vitu2_query_window_t

0x3413,	// (0x000787c0) main_cset_text_pane

0xc619,	// (0x000819c6) aid_area_touch_slider_ParamLimits

0xc635,	// (0x000819e2) cset_slider_pane_ParamLimits

0xc65f,	// (0x00081a0c) main_cset_slider_pane_g1_ParamLimits

0xc674,	// (0x00081a21) main_cset_slider_pane_g2_ParamLimits

0x3434,	// (0x000787e1) main_cset_slider_pane_g3_ParamLimits

0x3434,	// (0x000787e1) main_cset_slider_pane_g3

0xc689,	// (0x00081a36) main_cset_slider_pane_g4_ParamLimits

0xc689,	// (0x00081a36) main_cset_slider_pane_g4

0xc698,	// (0x00081a45) main_cset_slider_pane_g5_ParamLimits

0xc698,	// (0x00081a45) main_cset_slider_pane_g5

0xc6a6,	// (0x00081a53) main_cset_slider_pane_g6_ParamLimits

0xc6a6,	// (0x00081a53) main_cset_slider_pane_g6

0xf989,	// (0x00084d36) main_cset_slider_pane_g_ParamLimits

0x347c,	// (0x00078829) main_cset_slider_pane_t1_ParamLimits

0xc73a,	// (0x00081ae7) main_cset_slider_pane_t2_ParamLimits

0xc754,	// (0x00081b01) main_cset_slider_pane_t3_ParamLimits

0xc76e,	// (0x00081b1b) main_cset_slider_pane_t4_ParamLimits

0xc78c,	// (0x00081b39) main_cset_slider_pane_t5_ParamLimits

0xc7aa,	// (0x00081b57) main_cset_slider_pane_t6_ParamLimits

0xc7c1,	// (0x00081b6e) main_cset_slider_pane_t7_ParamLimits

0xc7ef,	// (0x00081b9c) main_cset_slider_pane_t8_ParamLimits

0xc7ef,	// (0x00081b9c) main_cset_slider_pane_t8

0xc817,	// (0x00081bc4) main_cset_slider_pane_t9_ParamLimits

0xc817,	// (0x00081bc4) main_cset_slider_pane_t9

0xc83f,	// (0x00081bec) main_cset_slider_pane_t10_ParamLimits

0xc83f,	// (0x00081bec) main_cset_slider_pane_t10

0xc867,	// (0x00081c14) main_cset_slider_pane_t11_ParamLimits

0xc867,	// (0x00081c14) main_cset_slider_pane_t11

0xc891,	// (0x00081c3e) main_cset_slider_pane_t12_ParamLimits

0xc891,	// (0x00081c3e) main_cset_slider_pane_t12

0xc8b0,	// (0x00081c5d) main_cset_slider_pane_t13_ParamLimits

0xc8b0,	// (0x00081c5d) main_cset_slider_pane_t13

0xf9ae,	// (0x00084d5b) main_cset_slider_pane_t_ParamLimits

0xed1d,	// (0x000840ca) bg_popup_sub_pane_cp011

0x3594,	// (0x00078941) main_cset_text_pane_g1

0x359c,	// (0x00078949) main_cset_text_pane_t1

0x35aa,	// (0x00078957) main_cset_text_pane_t2

0x35b8,	// (0x00078965) main_cset_text_pane_t3

0x35c6,	// (0x00078973) main_cset_text_pane_t4

0x35d4,	// (0x00078981) main_cset_text_pane_t5

0x35e2,	// (0x0007898f) main_cset_text_pane_t6

0x35f0,	// (0x0007899d) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x00084df2) main_cset_text_pane_t

0xed1d,	// (0x000840ca) main_cam4_burst_pane

0xed1d,	// (0x000840ca) main_cam5_pane

0xc568,	// (0x00081915) bg_button_pane_cp019

0xc571,	// (0x0008191e) bg_button_pane_cp020

0x3440,	// (0x000787ed) main_cset_slider_pane_g7_ParamLimits

0x3440,	// (0x000787ed) main_cset_slider_pane_g7

0x344c,	// (0x000787f9) main_cset_slider_pane_g8_ParamLimits

0x344c,	// (0x000787f9) main_cset_slider_pane_g8

0xc6ba,	// (0x00081a67) main_cset_slider_pane_g9_ParamLimits

0xc6ba,	// (0x00081a67) main_cset_slider_pane_g9

0xc6c6,	// (0x00081a73) main_cset_slider_pane_g10_ParamLimits

0xc6c6,	// (0x00081a73) main_cset_slider_pane_g10

0xc6d2,	// (0x00081a7f) main_cset_slider_pane_g11_ParamLimits

0xc6d2,	// (0x00081a7f) main_cset_slider_pane_g11

0xc6de,	// (0x00081a8b) main_cset_slider_pane_g12_ParamLimits

0xc6de,	// (0x00081a8b) main_cset_slider_pane_g12

0xc6ea,	// (0x00081a97) main_cset_slider_pane_g13_ParamLimits

0xc6ea,	// (0x00081a97) main_cset_slider_pane_g13

0xc6f8,	// (0x00081aa5) main_cset_slider_pane_g14_ParamLimits

0xc6f8,	// (0x00081aa5) main_cset_slider_pane_g14

0xc706,	// (0x00081ab3) main_cset_slider_pane_g15_ParamLimits

0xc706,	// (0x00081ab3) main_cset_slider_pane_g15

0x34aa,	// (0x00078857) main_cset_slider_pane_t14_ParamLimits

0x34aa,	// (0x00078857) main_cset_slider_pane_t14

0x34e3,	// (0x00078890) main_cset_slider_pane_t15_ParamLimits

0x34e3,	// (0x00078890) main_cset_slider_pane_t15

0xcc4d,	// (0x00081ffa) aid_cam4_burst_size_cell_ParamLimits

0xcc4d,	// (0x00081ffa) aid_cam4_burst_size_cell

0xcc69,	// (0x00082016) grid_cam4_burst_pane_ParamLimits

0xcc69,	// (0x00082016) grid_cam4_burst_pane

0xcc99,	// (0x00082046) linegrid_cam4_burst_pane_ParamLimits

0xcc99,	// (0x00082046) linegrid_cam4_burst_pane

0xccb9,	// (0x00082066) scroll_pane_cp30_ParamLimits

0xccb9,	// (0x00082066) scroll_pane_cp30

0xccc5,	// (0x00082072) cell_cam4_burst_pane_ParamLimits

0xccc5,	// (0x00082072) cell_cam4_burst_pane

0x360a,	// (0x000789b7) linegrid_cam4_burst_pane_g1_ParamLimits

0x360a,	// (0x000789b7) linegrid_cam4_burst_pane_g1

0xcd01,	// (0x000820ae) linegrid_cam4_burst_pane_g2_ParamLimits

0xcd01,	// (0x000820ae) linegrid_cam4_burst_pane_g2

0x3617,	// (0x000789c4) linegrid_cam4_burst_pane_g3_ParamLimits

0x3617,	// (0x000789c4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x00084e01) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x00084e01) linegrid_cam4_burst_pane_g

0xcd12,	// (0x000820bf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcd12,	// (0x000820bf) linegrid_cam4_burst_pane_g3_copy1

0x3624,	// (0x000789d1) linegrid_cam4_burst_pane_g4_ParamLimits

0x3624,	// (0x000789d1) linegrid_cam4_burst_pane_g4

0xcd2c,	// (0x000820d9) linegrid_cam4_burst_pane_g5_ParamLimits

0xcd2c,	// (0x000820d9) linegrid_cam4_burst_pane_g5

0xcd3d,	// (0x000820ea) linegrid_cam4_burst_pane_g6_ParamLimits

0xcd3d,	// (0x000820ea) linegrid_cam4_burst_pane_g6

0x3631,	// (0x000789de) linegrid_cam4_burst_pane_g7_ParamLimits

0x3631,	// (0x000789de) linegrid_cam4_burst_pane_g7

0xcd4e,	// (0x000820fb) cell_cam4_burst_pane_g1

0x364a,	// (0x000789f7) main_cam5_pane_t1_ParamLimits

0x364a,	// (0x000789f7) main_cam5_pane_t1

0x365c,	// (0x00078a09) main_cam5_pane_t2_ParamLimits

0x365c,	// (0x00078a09) main_cam5_pane_t2

0x366e,	// (0x00078a1b) main_cam5_pane_t3_ParamLimits

0x366e,	// (0x00078a1b) main_cam5_pane_t3

0x3680,	// (0x00078a2d) main_cam5_pane_t4_ParamLimits

0x3680,	// (0x00078a2d) main_cam5_pane_t4

0x3698,	// (0x00078a45) main_cam5_pane_t5_ParamLimits

0x3698,	// (0x00078a45) main_cam5_pane_t5

0x36ac,	// (0x00078a59) main_cam5_pane_t6_ParamLimits

0x36ac,	// (0x00078a59) main_cam5_pane_t6

0x36c0,	// (0x00078a6d) main_cam5_pane_t7_ParamLimits

0x36c0,	// (0x00078a6d) main_cam5_pane_t7

0x36d2,	// (0x00078a7f) main_cam5_pane_t8_ParamLimits

0x36d2,	// (0x00078a7f) main_cam5_pane_t8

0x36ee,	// (0x00078a9b) main_cam5_pane_t9_ParamLimits

0x36ee,	// (0x00078a9b) main_cam5_pane_t9

0x3700,	// (0x00078aad) main_cam5_pane_t10_ParamLimits

0x3700,	// (0x00078aad) main_cam5_pane_t10

0x3712,	// (0x00078abf) main_cam5_pane_t11_ParamLimits

0x3712,	// (0x00078abf) main_cam5_pane_t11

0x3724,	// (0x00078ad1) main_cam5_pane_t12_ParamLimits

0x3724,	// (0x00078ad1) main_cam5_pane_t12

0x3739,	// (0x00078ae6) main_cam5_pane_t13_ParamLimits

0x3739,	// (0x00078ae6) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x00084e0d) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x00084e0d) main_cam5_pane_t

0x703b,	// (0x0007c3e8) popup_scut_keymap_window_ParamLimits

0x703b,	// (0x0007c3e8) popup_scut_keymap_window

0xcd61,	// (0x0008210e) aid_size_cell_brow_shortcut

0x0620,	// (0x000759cd) bg_popup_window_pane_cp010

0xcd6d,	// (0x0008211a) grid_scut_pane

0xcd79,	// (0x00082126) cell_scut_pane_ParamLimits

0xcd79,	// (0x00082126) cell_scut_pane

0xcd90,	// (0x0008213d) cell_scut_pane_g1

0x3756,	// (0x00078b03) cell_scut_pane_t1

0x3765,	// (0x00078b12) cell_scut_pane_t2

0xcd99,	// (0x00082146) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x00084e28) cell_scut_pane_t

0xad78,	// (0x00080125) main_mup3_pane_g8_ParamLimits

0xad78,	// (0x00080125) main_mup3_pane_g8

0xc179,	// (0x00081526) area_vitu2_query_pane_ParamLimits

0xc179,	// (0x00081526) area_vitu2_query_pane

0x5fb9,	// (0x0007b366) input_focus_pane_cp08

0x3774,	// (0x00078b21) area_vitu2_query_pane_g1

0x60ba,	// (0x0007b467) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x00084e2f) area_vitu2_query_pane_g

0xcda7,	// (0x00082154) area_vitu2_query_pane_t1_ParamLimits

0xcda7,	// (0x00082154) area_vitu2_query_pane_t1

0xcdbb,	// (0x00082168) area_vitu2_query_pane_t2_ParamLimits

0xcdbb,	// (0x00082168) area_vitu2_query_pane_t2

0x60cb,	// (0x0007b478) area_vitu2_query_pane_t3_ParamLimits

0x60cb,	// (0x0007b478) area_vitu2_query_pane_t3

0x60f3,	// (0x0007b4a0) area_vitu2_query_pane_t4_ParamLimits

0x60f3,	// (0x0007b4a0) area_vitu2_query_pane_t4

0x611b,	// (0x0007b4c8) area_vitu2_query_pane_t5_ParamLimits

0x611b,	// (0x0007b4c8) area_vitu2_query_pane_t5

0x6143,	// (0x0007b4f0) area_vitu2_query_pane_t6_ParamLimits

0x6143,	// (0x0007b4f0) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x00084e34) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x00084e34) area_vitu2_query_pane_t

0xcdcf,	// (0x0008217c) bg_button_pane_cp018

0xcddd,	// (0x0008218a) bg_button_pane_cp021

0x618f,	// (0x0007b53c) bg_button_pane_cp022

0x61a0,	// (0x0007b54d) input_focus_pane_cp09

0x0ea2,	// (0x0007624f) aid_size_touch_mv_arrow_left

0x0ecd,	// (0x0007627a) aid_size_touch_mv_arrow_right

0xc71e,	// (0x00081acb) main_cset_slider_pane_g16_ParamLimits

0xc71e,	// (0x00081acb) main_cset_slider_pane_g16

0xc72c,	// (0x00081ad9) main_cset_slider_pane_g17_ParamLimits

0xc72c,	// (0x00081ad9) main_cset_slider_pane_g17

0xcd4e,	// (0x000820fb) cell_cam4_burst_pane_g1_ParamLimits

0xed1d,	// (0x000840ca) compa_mode_pane

0xc944,	// (0x00081cf1) popup_vtel_slider_window_g3_ParamLimits

0xc944,	// (0x00081cf1) popup_vtel_slider_window_g3

0xc958,	// (0x00081d05) popup_vtel_slider_window_g4_ParamLimits

0xc958,	// (0x00081d05) popup_vtel_slider_window_g4

0xc96c,	// (0x00081d19) popup_vtel_slider_window_t1_ParamLimits

0xc96c,	// (0x00081d19) popup_vtel_slider_window_t1

0xed1d,	// (0x000840ca) main_cl_pane

0xa081,	// (0x0007f42e) popup_imed_adjust2_window_ParamLimits

0x24ac,	// (0x00077859) bg_tb_trans_pane_cp05_ParamLimits

0x2dce,	// (0x0007817b) popup_imed_adjust2_window_g1_ParamLimits

0x2ddd,	// (0x0007818a) popup_imed_adjust2_window_g2_ParamLimits

0x2ddd,	// (0x0007818a) popup_imed_adjust2_window_g2

0x2de9,	// (0x00078196) popup_imed_adjust2_window_g3_ParamLimits

0x2de9,	// (0x00078196) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00084b9f) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00084b9f) popup_imed_adjust2_window_g

0x2df5,	// (0x000781a2) popup_imed_adjust2_window_t1_ParamLimits

0x2e0d,	// (0x000781ba) slider_imed_adjust_pane_ParamLimits

0x2e21,	// (0x000781ce) slider_imed_adjust_pane_g1_ParamLimits

0x2e31,	// (0x000781de) slider_imed_adjust_pane_g2_ParamLimits

0x2e41,	// (0x000781ee) slider_imed_adjust_pane_g3_ParamLimits

0x2e52,	// (0x000781ff) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x00084ba6) slider_imed_adjust_pane_g_ParamLimits

0xbeca,	// (0x00081277) aid_touch_area_cam4_ParamLimits

0xbeca,	// (0x00081277) aid_touch_area_cam4

0xbeda,	// (0x00081287) battery_pane_cp01

0xbf61,	// (0x0008130e) main_camera4_pane_g6_ParamLimits

0xbf61,	// (0x0008130e) main_camera4_pane_g6

0xbf7f,	// (0x0008132c) main_camera4_pane_t2_ParamLimits

0xbf7f,	// (0x0008132c) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x00084ca9) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x00084ca9) main_camera4_pane_t

0xc000,	// (0x000813ad) aid_touch_area_vid4_ParamLimits

0xc000,	// (0x000813ad) aid_touch_area_vid4

0xc040,	// (0x000813ed) main_video4_pane_g5_ParamLimits

0xc040,	// (0x000813ed) main_video4_pane_g5

0xc064,	// (0x00081411) vid4_progress_pane_ParamLimits

0xc064,	// (0x00081411) vid4_progress_pane

0x3470,	// (0x0007881d) main_cset_slider_pane_g18_ParamLimits

0x3470,	// (0x0007881d) main_cset_slider_pane_g18

0x363e,	// (0x000789eb) cell_cam4_burst_pane_g2_ParamLimits

0x363e,	// (0x000789eb) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x00084e08) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x00084e08) cell_cam4_burst_pane_g

0xcde9,	// (0x00082196) bg_cl_pane_ParamLimits

0xcde9,	// (0x00082196) bg_cl_pane

0xcdf5,	// (0x000821a2) cl_header_pane_ParamLimits

0xcdf5,	// (0x000821a2) cl_header_pane

0xce01,	// (0x000821ae) cl_listscroll_pane_ParamLimits

0xce01,	// (0x000821ae) cl_listscroll_pane

0x3780,	// (0x00078b2d) bg_cl_pane_g1

0x3788,	// (0x00078b35) bg_cl_pane_g2

0x3790,	// (0x00078b3d) bg_cl_pane_g3

0x3798,	// (0x00078b45) bg_cl_pane_g4

0x37a0,	// (0x00078b4d) bg_cl_pane_g5

0x37a8,	// (0x00078b55) bg_cl_pane_g6

0x37b0,	// (0x00078b5d) bg_cl_pane_g7

0x37b8,	// (0x00078b65) bg_cl_pane_g8

0x37c0,	// (0x00078b6d) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x00084e43) bg_cl_pane_g

0xce0d,	// (0x000821ba) aid_height_cl_leading_ParamLimits

0xce0d,	// (0x000821ba) aid_height_cl_leading

0xce19,	// (0x000821c6) aid_height_cl_text_ParamLimits

0xce19,	// (0x000821c6) aid_height_cl_text

0x40cb,	// (0x00079478) bg_cl_header_pane_ParamLimits

0x40cb,	// (0x00079478) bg_cl_header_pane

0xce31,	// (0x000821de) cl_header_pane_g1_ParamLimits

0xce31,	// (0x000821de) cl_header_pane_g1

0xce3e,	// (0x000821eb) cl_header_pane_t1_ParamLimits

0xce3e,	// (0x000821eb) cl_header_pane_t1

0x37c8,	// (0x00078b75) cl_list_pane

0x342b,	// (0x000787d8) hc_scroll_pane_cp01

0x0859,	// (0x00075c06) bg_cl_header_pane_g1

0x3311,	// (0x000786be) bg_cl_header_pane_g2

0x0879,	// (0x00075c26) bg_cl_header_pane_g3

0x3321,	// (0x000786ce) bg_cl_header_pane_g4

0x3319,	// (0x000786c6) bg_cl_header_pane_g5

0x354d,	// (0x000788fa) bg_cl_header_pane_g6

0x3339,	// (0x000786e6) bg_cl_header_pane_g7

0x3341,	// (0x000786ee) bg_cl_header_pane_g8

0x3331,	// (0x000786de) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x00084e56) bg_cl_header_pane_g

0xce50,	// (0x000821fd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xce50,	// (0x000821fd) hc_cl_list_double_graphic_heading_pane

0xce64,	// (0x00082211) hc_cl_list_single_graphic_pane_ParamLimits

0xce64,	// (0x00082211) hc_cl_list_single_graphic_pane

0xce7e,	// (0x0008222b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xce7e,	// (0x0008222b) hc_cl_list_single_graphic_pane_g1

0xce8a,	// (0x00082237) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xce8a,	// (0x00082237) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x00084e69) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x00084e69) hc_cl_list_single_graphic_pane_g

0xce9e,	// (0x0008224b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xce9e,	// (0x0008224b) hc_cl_list_single_graphic_pane_t1

0xce7e,	// (0x0008222b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xce7e,	// (0x0008222b) hc_cl_list_double_graphic_heading_pane_g1

0xceb3,	// (0x00082260) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xceb3,	// (0x00082260) hc_cl_list_double_graphic_heading_pane_g2

0xcec7,	// (0x00082274) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcec7,	// (0x00082274) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x00084e6e) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x00084e6e) hc_cl_list_double_graphic_heading_pane_g

0xcedb,	// (0x00082288) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcedb,	// (0x00082288) hc_cl_list_double_graphic_heading_pane_t1

0xcef0,	// (0x0008229d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcef0,	// (0x0008229d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x00084e75) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x00084e75) hc_cl_list_double_graphic_heading_pane_t

0xcf0d,	// (0x000822ba) vid4_progress_pane_g1

0xcf1d,	// (0x000822ca) vid4_progress_pane_g2

0xcf2d,	// (0x000822da) vid4_progress_pane_g3

0xcf3f,	// (0x000822ec) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x00084e7a) vid4_progress_pane_g

0xcf57,	// (0x00082304) vid4_progress_pane_t1

0xcf6d,	// (0x0008231a) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x00084e85) vid4_progress_pane_t

0xcf98,	// (0x00082345) wait_bar_pane_cp07

0x26a7,	// (0x00077a54) blid_firmament_pane_ParamLimits

0x26ea,	// (0x00077a97) popup_blid_sat_info2_window_g1

0x270e,	// (0x00077abb) popup_blid_sat_info2_window_t3

0x271c,	// (0x00077ac9) popup_blid_sat_info2_window_t4

0x272a,	// (0x00077ad7) popup_blid_sat_info2_window_t5

0x2738,	// (0x00077ae5) popup_blid_sat_info2_window_t6

0x2748,	// (0x00077af5) popup_blid_sat_info2_window_t7

0x2756,	// (0x00077b03) popup_blid_sat_info2_window_t8

0x2764,	// (0x00077b11) popup_blid_sat_info2_window_t9

0x2772,	// (0x00077b1f) popup_blid_sat_info2_window_t10

0x2834,	// (0x00077be1) aid_firma_cardinal_ParamLimits

0x2848,	// (0x00077bf5) blid_firmament_pane_t1_ParamLimits

0x285f,	// (0x00077c0c) blid_firmament_pane_t2_ParamLimits

0x2876,	// (0x00077c23) blid_firmament_pane_t3_ParamLimits

0x288d,	// (0x00077c3a) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00084a93) blid_firmament_pane_t_ParamLimits

0x28b0,	// (0x00077c5d) blid_sat_info_pane_ParamLimits

0xf07f,	// (0x0008442c) main_cam_set_pane_ParamLimits

0xb52d,	// (0x000808da) aid_size_cell_colour_35_ParamLimits

0xb547,	// (0x000808f4) aid_size_cell_colour_112_ParamLimits

0xb55e,	// (0x0008090b) aid_size_cell_effect_ParamLimits

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp02_ParamLimits

0x0b68,	// (0x00075f15) heading_imed_pane_ParamLimits

0xb578,	// (0x00080925) listscroll_imed_pane_ParamLimits

0x1a92,	// (0x00076e3f) popup_call2_audio_first_window_g5_ParamLimits

0x1a92,	// (0x00076e3f) popup_call2_audio_first_window_g5

0xbc87,	// (0x00081034) aid_size_touch_image3_arrow_left_ParamLimits

0xbc87,	// (0x00081034) aid_size_touch_image3_arrow_left

0xbc9d,	// (0x0008104a) aid_size_touch_image3_arrow_right_ParamLimits

0xbc9d,	// (0x0008104a) aid_size_touch_image3_arrow_right

0xcf82,	// (0x0008232f) vid4_progress_pane_t3

0xb818,	// (0x00080bc5) main_hwr_training_symbol_option_pane_ParamLimits

0xb818,	// (0x00080bc5) main_hwr_training_symbol_option_pane

0x30c3,	// (0x00078470) popup_hwr_training_preview_window_ParamLimits

0x30c3,	// (0x00078470) popup_hwr_training_preview_window

0xb879,	// (0x00080c26) hwr_training_navi_pane_g5_ParamLimits

0xb879,	// (0x00080c26) hwr_training_navi_pane_g5

0x32ff,	// (0x000786ac) popup_char_count_window

0x40cb,	// (0x00079478) bg_popup_sub_pane_cp20_ParamLimits

0xca5d,	// (0x00081e0a) list_vitu2_match_list_pane_ParamLimits

0xca69,	// (0x00081e16) vitu2_page_scroll_pane_ParamLimits

0xca69,	// (0x00081e16) vitu2_page_scroll_pane

0x37d1,	// (0x00078b7e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x37d1,	// (0x00078b7e) list_single_hwr_training_symbol_option_pane

0x37e4,	// (0x00078b91) list_single_hwr_training_symbol_option_pane_g1

0x37ec,	// (0x00078b99) list_single_hwr_training_symbol_option_pane_t1

0x37fa,	// (0x00078ba7) bg_button_pane_cp023

0x3803,	// (0x00078bb0) bg_button_pane_cp024

0xcfba,	// (0x00082367) vitu2_page_scroll_pane_g1

0xcfc2,	// (0x0008236f) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x00084e8c) vitu2_page_scroll_pane_g

0xcfca,	// (0x00082377) vitu2_page_scroll_pane_t1

0x28e9,	// (0x00077c96) popup_char_count_window_g1

0x3836,	// (0x00078be3) popup_char_count_window_g2

0x383f,	// (0x00078bec) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x00084e91) popup_char_count_window_g

0x3848,	// (0x00078bf5) popup_char_count_window_t1

0xed1d,	// (0x000840ca) main_vded2_pane

0x2dba,	// (0x00078167) aid_size_cell_imed_line

0x2dc4,	// (0x00078171) grid_imed_line_width_pane

0xc0d0,	// (0x0008147d) vid4_indicators_pane_g4

0x3856,	// (0x00078c03) cell_imed_line_width_pane_ParamLimits

0x3856,	// (0x00078c03) cell_imed_line_width_pane

0x386a,	// (0x00078c17) cell_imed_line_width_pane_g1

0x30bb,	// (0x00078468) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x00084e98) cell_imed_line_width_pane_g

0xcfd9,	// (0x00082386) main_vded2_pane_g1_ParamLimits

0xcfd9,	// (0x00082386) main_vded2_pane_g1

0xcfe6,	// (0x00082393) main_vded2_pane_g2_ParamLimits

0xcfe6,	// (0x00082393) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x00084e9d) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x00084e9d) main_vded2_pane_g

0xcff4,	// (0x000823a1) vded2_slider_pane_ParamLimits

0xcff4,	// (0x000823a1) vded2_slider_pane

0xd001,	// (0x000823ae) aid_size_touch_vded2_end

0xd00b,	// (0x000823b8) aid_size_touch_vded2_playhead

0x3873,	// (0x00078c20) aid_size_touch_vded2_start

0x387b,	// (0x00078c28) vded2_slider_bg_pane

0x3884,	// (0x00078c31) vded2_slider_pane_g1

0x388d,	// (0x00078c3a) vded2_slider_pane_g2

0xd013,	// (0x000823c0) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x00084ea2) vded2_slider_pane_g

0x3895,	// (0x00078c42) vded2_slider_bg_pane_g1

0x389e,	// (0x00078c4b) vded2_slider_bg_pane_g2

0x38a7,	// (0x00078c54) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x00084ea9) vded2_slider_bg_pane_g

0x98d8,	// (0x0007ec85) aid_postcard_touch_down_pane_ParamLimits

0x98d8,	// (0x0007ec85) aid_postcard_touch_down_pane

0x98e8,	// (0x0007ec95) aid_postcard_touch_up_pane_ParamLimits

0x98e8,	// (0x0007ec95) aid_postcard_touch_up_pane

0xed1d,	// (0x000840ca) main_blid2_pane

0xa010,	// (0x0007f3bd) popup_blid2_search_window

0xed1d,	// (0x000840ca) blid2_gps_pane

0xed1d,	// (0x000840ca) blid2_navig_pane

0xed1d,	// (0x000840ca) blid2_search_pane

0xed1d,	// (0x000840ca) blid2_tripm_pane

0xd01c,	// (0x000823c9) blid2_search_pane_g1_ParamLimits

0xd01c,	// (0x000823c9) blid2_search_pane_g1

0xd02c,	// (0x000823d9) blid2_search_pane_t1_ParamLimits

0xd02c,	// (0x000823d9) blid2_search_pane_t1

0xd03e,	// (0x000823eb) aid_size_cell_blid2_gps_ParamLimits

0xd03e,	// (0x000823eb) aid_size_cell_blid2_gps

0xd04e,	// (0x000823fb) blid2_gps_pane_g1_ParamLimits

0xd04e,	// (0x000823fb) blid2_gps_pane_g1

0xd05a,	// (0x00082407) grid_blid2_satellite_pane_ParamLimits

0xd05a,	// (0x00082407) grid_blid2_satellite_pane

0xd06a,	// (0x00082417) blid2_navig_pane_g1_ParamLimits

0xd06a,	// (0x00082417) blid2_navig_pane_g1

0xd076,	// (0x00082423) blid2_navig_pane_t1_ParamLimits

0xd076,	// (0x00082423) blid2_navig_pane_t1

0xd088,	// (0x00082435) blid2_navig_pane_t2_ParamLimits

0xd088,	// (0x00082435) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x00084eb0) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x00084eb0) blid2_navig_pane_t

0xd09a,	// (0x00082447) blid2_navig_ring_pane_ParamLimits

0xd09a,	// (0x00082447) blid2_navig_ring_pane

0xd0aa,	// (0x00082457) blid2_speed_pane_ParamLimits

0xd0aa,	// (0x00082457) blid2_speed_pane

0xd0b6,	// (0x00082463) blid2_tripm_pane_g1_ParamLimits

0xd0b6,	// (0x00082463) blid2_tripm_pane_g1

0xd0c6,	// (0x00082473) blid2_tripm_pane_g2_ParamLimits

0xd0c6,	// (0x00082473) blid2_tripm_pane_g2

0xd0d2,	// (0x0008247f) blid2_tripm_pane_g3_ParamLimits

0xd0d2,	// (0x0008247f) blid2_tripm_pane_g3

0xd0de,	// (0x0008248b) blid2_tripm_pane_g4_ParamLimits

0xd0de,	// (0x0008248b) blid2_tripm_pane_g4

0xd0ea,	// (0x00082497) blid2_tripm_pane_g5_ParamLimits

0xd0ea,	// (0x00082497) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x00084eb5) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x00084eb5) blid2_tripm_pane_g

0xd106,	// (0x000824b3) blid2_tripm_pane_t1_ParamLimits

0xd106,	// (0x000824b3) blid2_tripm_pane_t1

0xd11a,	// (0x000824c7) blid2_tripm_pane_t2_ParamLimits

0xd11a,	// (0x000824c7) blid2_tripm_pane_t2

0xd12c,	// (0x000824d9) blid2_tripm_pane_t3_ParamLimits

0xd12c,	// (0x000824d9) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x00084ec2) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x00084ec2) blid2_tripm_pane_t

0xd15e,	// (0x0008250b) cell_blid2_satellite_pane_ParamLimits

0xd15e,	// (0x0008250b) cell_blid2_satellite_pane

0xd178,	// (0x00082525) cell_blid2_satellite_pane_g1

0x38e7,	// (0x00078c94) cell_blid2_satellite_pane_t1

0x28c0,	// (0x00077c6d) blid2_speed_pane_g1

0x38f5,	// (0x00078ca2) blid2_speed_pane_t1

0x3903,	// (0x00078cb0) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x00084ecb) blid2_speed_pane_t

0x28c0,	// (0x00077c6d) blid2_navig_ring_pane_g1

0xd181,	// (0x0008252e) blid2_navig_ring_pane_g2

0xd189,	// (0x00082536) blid2_navig_ring_pane_g3

0xd191,	// (0x0008253e) blid2_navig_ring_pane_g4

0xd199,	// (0x00082546) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x00084ed0) blid2_navig_ring_pane_g

0xed1d,	// (0x000840ca) bg_popup_window_pane_cp011

0x3911,	// (0x00078cbe) popup_blid2_search_window_g1

0x3919,	// (0x00078cc6) popup_blid2_search_window_t1

0x3927,	// (0x00078cd4) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x00084edb) popup_blid2_search_window_t

0x0768,	// (0x00075b15) main_browser_pane_g1

0x042b,	// (0x000757d8) main_browser_pane_ParamLimits

0xf07f,	// (0x0008442c) bg_button_pane_cp011_ParamLimits

0xc33b,	// (0x000816e8) cell_vitu2_function_pane_g1_ParamLimits

0x24ac,	// (0x00077859) bg_popup_sub_pane_cp22_ParamLimits

0x5fb9,	// (0x0007b366) input_focus_pane_cp08_ParamLimits

0xcbfa,	// (0x00081fa7) popup_vitu2_query_button_pane_ParamLimits

0xcbfa,	// (0x00081fa7) popup_vitu2_query_button_pane

0x5fd0,	// (0x0007b37d) popup_vitu2_query_input_button_pane

0x3588,	// (0x00078935) popup_vitu2_query_window_g1_ParamLimits

0x5fda,	// (0x0007b387) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x00084ddc) popup_vitu2_query_window_g_ParamLimits

0xed1d,	// (0x000840ca) bg_button_pane_cp026

0xd1a1,	// (0x0008254e) popup_vitu2_query_input_button_pane_g1

0xed1d,	// (0x000840ca) bg_button_pane_cp025

0x3935,	// (0x00078ce2) popup_vitu2_query_button_pane_t1

0xaa70,	// (0x0007fe1d) main_mp3_pane_t6

0xaa80,	// (0x0007fe2d) popup_slider_window_cp01

0xbfb5,	// (0x00081362) cam4_battery_pane

0xc08f,	// (0x0008143c) cam4_battery_pane_cp02

0xcf05,	// (0x000822b2) cam4_battery_pane_cp01

0xcf05,	// (0x000822b2) cam4_battery_pane_cp03

0x28c0,	// (0x00077c6d) cam4_battery_pane_g1

0x38c2,	// (0x00078c6f) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x00084ee0) cam4_battery_pane_g

0x2780,	// (0x00077b2d) popup_blid_sat_info2_window_t11

0x0ea2,	// (0x0007624f) aid_size_touch_mv_arrow_left_ParamLimits

0x0ecd,	// (0x0007627a) aid_size_touch_mv_arrow_right_ParamLimits

0x0f2b,	// (0x000762d8) navi_pane_g1_ParamLimits

0x0f37,	// (0x000762e4) navi_pane_g2_ParamLimits

0x0f65,	// (0x00076312) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00084792) navi_pane_g_ParamLimits

0x9360,	// (0x0007e70d) navi_pane_mv_t1_ParamLimits

0xb584,	// (0x00080931) grid_imed_effect_pane_ParamLimits

0x7def,	// (0x0007d19c) aid_placing_vt_slider_lsc

0x06b7,	// (0x00075a64) aid_placing_vt_slider_prt

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp01_ParamLimits

0x2a2e,	// (0x00077ddb) popup_image_details_window_g1_ParamLimits

0x2a41,	// (0x00077dee) popup_image_details_window_g2_ParamLimits

0x2a56,	// (0x00077e03) popup_image_details_window_g3_ParamLimits

0x2a56,	// (0x00077e03) popup_image_details_window_g3

0xf72b,	// (0x00084ad8) popup_image_details_window_g_ParamLimits

0x2a6a,	// (0x00077e17) popup_image_details_window_t1_ParamLimits

0x2a7c,	// (0x00077e29) popup_image_details_window_t2_ParamLimits

0x2a95,	// (0x00077e42) popup_image_details_window_t3_ParamLimits

0x2aa9,	// (0x00077e56) popup_image_details_window_t4_ParamLimits

0x2ac4,	// (0x00077e71) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00084adf) popup_image_details_window_t_ParamLimits

0xce25,	// (0x000821d2) cl_header_name_pane_ParamLimits

0xce25,	// (0x000821d2) cl_header_name_pane

0xd1a9,	// (0x00082556) cl_header_name_pane_t1_ParamLimits

0xd1a9,	// (0x00082556) cl_header_name_pane_t1

0xd1c0,	// (0x0008256d) cl_header_name_pane_t2_ParamLimits

0xd1c0,	// (0x0008256d) cl_header_name_pane_t2

0xd1ea,	// (0x00082597) cl_header_name_pane_t3_ParamLimits

0xd1ea,	// (0x00082597) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x00084ee5) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x00084ee5) cl_header_name_pane_t

0x0ff4,	// (0x000763a1) navi_pane_mv_g2_ParamLimits

0x32d9,	// (0x00078686) field_vitu2_entry_pane_g1_ParamLimits

0x32e5,	// (0x00078692) field_vitu2_entry_pane_g2_ParamLimits

0x32f1,	// (0x0007869e) field_vitu2_entry_pane_g3_ParamLimits

0x32f1,	// (0x0007869e) field_vitu2_entry_pane_g3

0xf92e,	// (0x00084cdb) field_vitu2_entry_pane_g_ParamLimits

0xc2cf,	// (0x0008167c) cell_vitu2_itu_pane_g1_ParamLimits

0xc2e1,	// (0x0008168e) cell_vitu2_itu_pane_g2_ParamLimits

0xc2e1,	// (0x0008168e) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x00084ce7) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x00084ce7) cell_vitu2_itu_pane_g

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp05_ParamLimits

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp05

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp03

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp04

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp10_ParamLimits

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp10

0x618f,	// (0x0007b53c) bg_vkb2_func_pane_cp08

0xcdcf,	// (0x0008217c) bg_vkb2_func_pane_cp06

0xcddd,	// (0x0008218a) bg_vkb2_func_pane_cp07

0x380c,	// (0x00078bb9) bg_vkb2_func_pane_cp11_ParamLimits

0x380c,	// (0x00078bb9) bg_vkb2_func_pane_cp11

0x3821,	// (0x00078bce) bg_vkb2_func_pane_cp12_ParamLimits

0x3821,	// (0x00078bce) bg_vkb2_func_pane_cp12

0xed1d,	// (0x000840ca) bg_vkb2_func_pane_cp09

0x3311,	// (0x000786be) bg_vkb2_func_pane_g1

0x0879,	// (0x00075c26) bg_vkb2_func_pane_g2

0x3319,	// (0x000786c6) bg_vkb2_func_pane_g3

0x3321,	// (0x000786ce) bg_vkb2_func_pane_g4

0x354d,	// (0x000788fa) bg_vkb2_func_pane_g5

0x3339,	// (0x000786e6) bg_vkb2_func_pane_g6

0x3341,	// (0x000786ee) bg_vkb2_func_pane_g7

0x3331,	// (0x000786de) bg_vkb2_func_pane_g8

0x0859,	// (0x00075c06) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x00084eec) bg_vkb2_func_pane_g

0xd0f8,	// (0x000824a5) blid2_tripm_pane_g6_ParamLimits

0xd0f8,	// (0x000824a5) blid2_tripm_pane_g6

0x317b,	// (0x00078528) mp4_progress_pane_g1

0xd152,	// (0x000824ff) blid2_tripm_values_pane_ParamLimits

0xd152,	// (0x000824ff) blid2_tripm_values_pane

0xd20f,	// (0x000825bc) blid2_tripm_values_pane_t1

0xd21d,	// (0x000825ca) blid2_tripm_values_pane_t2

0xd22b,	// (0x000825d8) blid2_tripm_values_pane_t3

0xd239,	// (0x000825e6) blid2_tripm_values_pane_t4

0xd247,	// (0x000825f4) blid2_tripm_values_pane_t5

0xd255,	// (0x00082602) blid2_tripm_values_pane_t6

0xd263,	// (0x00082610) blid2_tripm_values_pane_t7

0xd271,	// (0x0008261e) blid2_tripm_values_pane_t8

0xd27f,	// (0x0008262c) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x00084eff) blid2_tripm_values_pane_t

0x7e2f,	// (0x0007d1dc) call_video_pane_t1_ParamLimits

0x7e50,	// (0x0007d1fd) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0008461b) call_video_pane_t_ParamLimits

0x5d73,	// (0x0007b120) msg_header_pane_g1_ParamLimits

0x11dc,	// (0x00076589) msg_header_pane_g2_ParamLimits

0x11dc,	// (0x00076589) msg_header_pane_g2

0x0001,

0xf488,	// (0x00084835) msg_header_pane_g_ParamLimits

0xf488,	// (0x00084835) msg_header_pane_g

0x042b,	// (0x000757d8) main_clock2_pane_ParamLimits

0xb318,	// (0x000806c5) grid_clock2_toolbar_pane_ParamLimits

0xb318,	// (0x000806c5) grid_clock2_toolbar_pane

0xb318,	// (0x000806c5) listscroll_clock2_pane_ParamLimits

0xb318,	// (0x000806c5) listscroll_clock2_pane

0xb3c2,	// (0x0008076f) main_clock2_pane_t3_ParamLimits

0xb3c2,	// (0x0008076f) main_clock2_pane_t3

0xb3d4,	// (0x00080781) main_clock2_pane_t4_ParamLimits

0xb3d4,	// (0x00080781) main_clock2_pane_t4

0x3943,	// (0x00078cf0) cell_clock2_toolbar_pane

0x394b,	// (0x00078cf8) cell_clock2_toolbar_pane_cp01

0x394b,	// (0x00078cf8) cell_clock2_toolbar_pane_cp02

0x3953,	// (0x00078d00) cell_clock2_toolbar_pane_cp03

0x395b,	// (0x00078d08) list_clock2_pane

0x0e27,	// (0x000761d4) scroll_pane_cp10

0x3963,	// (0x00078d10) list_single_clock2_pane_ParamLimits

0x3963,	// (0x00078d10) list_single_clock2_pane

0x0620,	// (0x000759cd) list_highlight_pane_cp08

0x3970,	// (0x00078d1d) list_single_clock2_pane_t1

0x397e,	// (0x00078d2b) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x00084f12) list_single_clock2_pane_t

0xed1d,	// (0x000840ca) bg_button_pane_cp10

0x398c,	// (0x00078d39) cell_clock2_toolbar_pane_g1

0x983a,	// (0x0007ebe7) aid_main_viewer_pane_g1_ParamLimits

0x983a,	// (0x0007ebe7) aid_main_viewer_pane_g1

0x9846,	// (0x0007ebf3) aid_main_viewer_pane_g2_ParamLimits

0x9846,	// (0x0007ebf3) aid_main_viewer_pane_g2

0x9852,	// (0x0007ebff) aid_main_viewer_pane_g3_ParamLimits

0x9852,	// (0x0007ebff) aid_main_viewer_pane_g3

0x9863,	// (0x0007ec10) aid_main_viewer_pane_g4_ParamLimits

0x9863,	// (0x0007ec10) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00084846) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00084846) aid_main_viewer_pane_g

0x9fe8,	// (0x0007f395) main_calc_pane_ParamLimits

0x9ff5,	// (0x0007f3a2) main_dialer2_pane_ParamLimits

0xed1d,	// (0x000840ca) main_cam6_pane

0xed1d,	// (0x000840ca) main_vid6_pane

0xb324,	// (0x000806d1) listscroll_gen_pane_cp06_ParamLimits

0xb324,	// (0x000806d1) listscroll_gen_pane_cp06

0xb3e6,	// (0x00080793) main_clock2_pane_t5_ParamLimits

0xb3e6,	// (0x00080793) main_clock2_pane_t5

0xb42f,	// (0x000807dc) aid_call2_pane_cp10_ParamLimits

0xb441,	// (0x000807ee) aid_call_pane_cp10_ParamLimits

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb453,	// (0x00080800) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb453,	// (0x00080800) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0e96,	// (0x00076243) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00084b94) popup_clock_analogue_window_cp10_g_ParamLimits

0xb465,	// (0x00080812) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbc34,	// (0x00080fe1) cell_dialer2_keypad_pane_g2_ParamLimits

0xbc34,	// (0x00080fe1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x00084c7a) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x00084c7a) cell_dialer2_keypad_pane_g

0xbc50,	// (0x00080ffd) cell_dialer2_keypad_pane_t1

0xc606,	// (0x000819b3) main_cset_text2_pane_ParamLimits

0xc606,	// (0x000819b3) main_cset_text2_pane

0x3774,	// (0x00078b21) area_vitu2_query_pane_g1_ParamLimits

0x60ba,	// (0x0007b467) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x00084e2f) area_vitu2_query_pane_g_ParamLimits

0x616b,	// (0x0007b518) area_vitu2_query_pane_t7_ParamLimits

0x616b,	// (0x0007b518) area_vitu2_query_pane_t7

0xcdcf,	// (0x0008217c) bg_button_pane_cp018_ParamLimits

0xcddd,	// (0x0008218a) bg_button_pane_cp021_ParamLimits

0x618f,	// (0x0007b53c) bg_button_pane_cp022_ParamLimits

0x618f,	// (0x0007b53c) bg_vkb2_func_pane_cp08_ParamLimits

0xcdcf,	// (0x0008217c) bg_vkb2_func_pane_cp06_ParamLimits

0xcddd,	// (0x0008218a) bg_vkb2_func_pane_cp07_ParamLimits

0x61a0,	// (0x0007b54d) input_focus_pane_cp09_ParamLimits

0xd28d,	// (0x0008263a) cam6_autofocus_pane_ParamLimits

0xd28d,	// (0x0008263a) cam6_autofocus_pane

0xd2af,	// (0x0008265c) cam6_image_uncrop_pane_ParamLimits

0xd2af,	// (0x0008265c) cam6_image_uncrop_pane

0xd2dc,	// (0x00082689) cam6_indi_pane_ParamLimits

0xd2dc,	// (0x00082689) cam6_indi_pane

0xd2f6,	// (0x000826a3) cam6_mode_pane_ParamLimits

0xd2f6,	// (0x000826a3) cam6_mode_pane

0xd30a,	// (0x000826b7) cam6_timer_pane_ParamLimits

0xd30a,	// (0x000826b7) cam6_timer_pane

0xd31b,	// (0x000826c8) cam6_zoom_pane_ParamLimits

0xd31b,	// (0x000826c8) cam6_zoom_pane

0xd333,	// (0x000826e0) cam6_mode_pane_g1_ParamLimits

0xd333,	// (0x000826e0) cam6_mode_pane_g1

0xd33f,	// (0x000826ec) cam6_mode_pane_g2_ParamLimits

0xd33f,	// (0x000826ec) cam6_mode_pane_g2

0xd34b,	// (0x000826f8) cam6_mode_pane_g3_ParamLimits

0xd34b,	// (0x000826f8) cam6_mode_pane_g3

0xd357,	// (0x00082704) cam6_mode_pane_g4_ParamLimits

0xd357,	// (0x00082704) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x00084f17) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x00084f17) cam6_mode_pane_g

0x3994,	// (0x00078d41) bg_tb_trans_pane_cp08_ParamLimits

0x3994,	// (0x00078d41) bg_tb_trans_pane_cp08

0x39a2,	// (0x00078d4f) cam6_battery_pane_ParamLimits

0x39a2,	// (0x00078d4f) cam6_battery_pane

0x39b8,	// (0x00078d65) cam6_indi_pane_g1_ParamLimits

0x39b8,	// (0x00078d65) cam6_indi_pane_g1

0x39ca,	// (0x00078d77) cam6_indi_pane_g2_ParamLimits

0x39ca,	// (0x00078d77) cam6_indi_pane_g2

0x39dc,	// (0x00078d89) cam6_indi_pane_g3_ParamLimits

0x39dc,	// (0x00078d89) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x00084f20) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x00084f20) cam6_indi_pane_g

0x39ee,	// (0x00078d9b) cam6_indi_pane_t1_ParamLimits

0x39ee,	// (0x00078d9b) cam6_indi_pane_t1

0xc103,	// (0x000814b0) cam6_autofocus_pane_g1

0xc10b,	// (0x000814b8) cam6_autofocus_pane_g2

0xc113,	// (0x000814c0) cam6_autofocus_pane_g3

0xc11b,	// (0x000814c8) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x00084f27) cam6_autofocus_pane_g

0x3a14,	// (0x00078dc1) cam6_timer_pane_g1

0x3a1c,	// (0x00078dc9) cam6_timer_pane_t1

0x3a2a,	// (0x00078dd7) cam6_zoom_cont_pane

0x3a32,	// (0x00078ddf) cam6_zoom_pane_g1

0x3a3a,	// (0x00078de7) cam6_zoom_pane_g2

0xd363,	// (0x00082710) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x00084f30) cam6_zoom_pane_g

0x28c0,	// (0x00077c6d) cam6_battery_pane_g1

0x28c0,	// (0x00077c6d) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00084a9c) cam6_battery_pane_g

0x3a42,	// (0x00078def) cam6_zoom_cont_pane_g1

0x3a4b,	// (0x00078df8) cam6_zoom_cont_pane_g2

0x3a54,	// (0x00078e01) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x00084f37) cam6_zoom_cont_pane_g

0xd380,	// (0x0008272d) cam6_mode_pane_cp_ParamLimits

0xd380,	// (0x0008272d) cam6_mode_pane_cp

0xd31b,	// (0x000826c8) cam6_zoom_pane_cp_ParamLimits

0xd31b,	// (0x000826c8) cam6_zoom_pane_cp

0xd394,	// (0x00082741) vid6_image_uncrop_cif_pane_ParamLimits

0xd394,	// (0x00082741) vid6_image_uncrop_cif_pane

0xd3c0,	// (0x0008276d) vid6_image_uncrop_nhd_pane_ParamLimits

0xd3c0,	// (0x0008276d) vid6_image_uncrop_nhd_pane

0xd2af,	// (0x0008265c) vid6_image_uncrop_vga_pane_ParamLimits

0xd2af,	// (0x0008265c) vid6_image_uncrop_vga_pane

0xd3dd,	// (0x0008278a) vid6_image_uncrop_wvga_pane_ParamLimits

0xd3dd,	// (0x0008278a) vid6_image_uncrop_wvga_pane

0xd3fa,	// (0x000827a7) vid6_indi_pane_ParamLimits

0xd3fa,	// (0x000827a7) vid6_indi_pane

0x3994,	// (0x00078d41) bg_tb_trans_pane_cp09_ParamLimits

0x3994,	// (0x00078d41) bg_tb_trans_pane_cp09

0x3a6c,	// (0x00078e19) cam6_battery_pane_cp_ParamLimits

0x3a6c,	// (0x00078e19) cam6_battery_pane_cp

0x3a78,	// (0x00078e25) vid6_indi_pane_g1_ParamLimits

0x3a78,	// (0x00078e25) vid6_indi_pane_g1

0x3a8a,	// (0x00078e37) vid6_indi_pane_g2_ParamLimits

0x3a8a,	// (0x00078e37) vid6_indi_pane_g2

0x3a9c,	// (0x00078e49) vid6_indi_pane_g3_ParamLimits

0x3a9c,	// (0x00078e49) vid6_indi_pane_g3

0x3ab1,	// (0x00078e5e) vid6_indi_pane_g4_ParamLimits

0x3ab1,	// (0x00078e5e) vid6_indi_pane_g4

0x3ac6,	// (0x00078e73) vid6_indi_pane_g5_ParamLimits

0x3ac6,	// (0x00078e73) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x00084f3e) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x00084f3e) vid6_indi_pane_g

0x3ae0,	// (0x00078e8d) vid6_indi_pane_t1_ParamLimits

0x3ae0,	// (0x00078e8d) vid6_indi_pane_t1

0x3af6,	// (0x00078ea3) vid6_indi_pane_t2_ParamLimits

0x3af6,	// (0x00078ea3) vid6_indi_pane_t2

0x3b1e,	// (0x00078ecb) vid6_indi_pane_t3_ParamLimits

0x3b1e,	// (0x00078ecb) vid6_indi_pane_t3

0x3b46,	// (0x00078ef3) vid6_indi_pane_t4_ParamLimits

0x3b46,	// (0x00078ef3) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x00084f49) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x00084f49) vid6_indi_pane_t

0x3b6a,	// (0x00078f17) wait_bar_pane_cp08

0xd41d,	// (0x000827ca) main_cset_text2_pane_t1_ParamLimits

0xd41d,	// (0x000827ca) main_cset_text2_pane_t1

0xd36b,	// (0x00082718) listscroll_gen_pane_cp06_t1_ParamLimits

0xd36b,	// (0x00082718) listscroll_gen_pane_cp06_t1

0xed1d,	// (0x000840ca) main_cam6_set_pane

0x2b0e,	// (0x00077ebb) bg_tb_trans_pane_cp06_ParamLimits

0xbfbd,	// (0x0008136a) cam4_indicators_pane_g1_ParamLimits

0xbfce,	// (0x0008137b) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x00084cb7) cam4_indicators_pane_g_ParamLimits

0xbfe6,	// (0x00081393) cam4_indicators_pane_t1_ParamLimits

0xf07f,	// (0x0008442c) bg_tb_trans_pane_cp07_ParamLimits

0xc097,	// (0x00081444) vid4_indicators_pane_g1_ParamLimits

0xc0ab,	// (0x00081458) vid4_indicators_pane_g2_ParamLimits

0xc0bf,	// (0x0008146c) vid4_indicators_pane_g3_ParamLimits

0xc0d0,	// (0x0008147d) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x00084cc9) vid4_indicators_pane_g_ParamLimits

0xc0ec,	// (0x00081499) vid4_indicators_pane_t1_ParamLimits

0xcf0d,	// (0x000822ba) vid4_progress_pane_g1_ParamLimits

0xcf1d,	// (0x000822ca) vid4_progress_pane_g2_ParamLimits

0xcf2d,	// (0x000822da) vid4_progress_pane_g3_ParamLimits

0xcf3f,	// (0x000822ec) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x00084e7a) vid4_progress_pane_g_ParamLimits

0xcf57,	// (0x00082304) vid4_progress_pane_t1_ParamLimits

0xcf6d,	// (0x0008231a) vid4_progress_pane_t2_ParamLimits

0xcf82,	// (0x0008232f) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x00084e85) vid4_progress_pane_t_ParamLimits

0xcf98,	// (0x00082345) wait_bar_pane_cp07_ParamLimits

0xd454,	// (0x00082801) main_cam6_set_pane_g2_ParamLimits

0xd454,	// (0x00082801) main_cam6_set_pane_g2

0xd460,	// (0x0008280d) main_cset6_listscroll_pane_ParamLimits

0xd460,	// (0x0008280d) main_cset6_listscroll_pane

0xd48b,	// (0x00082838) main_cset6_slider_pane_ParamLimits

0xd48b,	// (0x00082838) main_cset6_slider_pane

0xd497,	// (0x00082844) main_cset6_text2_pane_ParamLimits

0xd497,	// (0x00082844) main_cset6_text2_pane

0x3b79,	// (0x00078f26) main_cset6_text_pane

0x3b81,	// (0x00078f2e) main_cset_list_pane_copy1_ParamLimits

0x3b81,	// (0x00078f2e) main_cset_list_pane_copy1

0x3b91,	// (0x00078f3e) scroll_pane_cp028_copy1

0xd4aa,	// (0x00082857) cset_list_set_pane_copy1

0xd4c0,	// (0x0008286d) aid_position_infowindow_above_copy1

0xd4c8,	// (0x00082875) aid_position_infowindow_below_copy1

0xd4d0,	// (0x0008287d) cset_list_set_pane_g1_copy1

0x61e8,	// (0x0007b595) cset_list_set_pane_g3_copy1_ParamLimits

0x61e8,	// (0x0007b595) cset_list_set_pane_g3_copy1

0x61f7,	// (0x0007b5a4) cset_list_set_pane_t1_copy1_ParamLimits

0x61f7,	// (0x0007b5a4) cset_list_set_pane_t1_copy1

0xf07f,	// (0x0008442c) list_highlight_pane_cp021_copy1_ParamLimits

0xf07f,	// (0x0008442c) list_highlight_pane_cp021_copy1

0x3b9a,	// (0x00078f47) cset6_slider_pane_ParamLimits

0x3b9a,	// (0x00078f47) cset6_slider_pane

0x3bc6,	// (0x00078f73) main_cset6_slider_pane_g1_ParamLimits

0x3bc6,	// (0x00078f73) main_cset6_slider_pane_g1

0xd4d8,	// (0x00082885) main_cset6_slider_pane_g2_ParamLimits

0xd4d8,	// (0x00082885) main_cset6_slider_pane_g2

0x3bee,	// (0x00078f9b) main_cset6_slider_pane_g3_ParamLimits

0x3bee,	// (0x00078f9b) main_cset6_slider_pane_g3

0xd500,	// (0x000828ad) main_cset6_slider_pane_g4_ParamLimits

0xd500,	// (0x000828ad) main_cset6_slider_pane_g4

0xd50c,	// (0x000828b9) main_cset6_slider_pane_g5_ParamLimits

0xd50c,	// (0x000828b9) main_cset6_slider_pane_g5

0x3440,	// (0x000787ed) main_cset6_slider_pane_g7_ParamLimits

0x3440,	// (0x000787ed) main_cset6_slider_pane_g7

0x344c,	// (0x000787f9) main_cset6_slider_pane_g8_ParamLimits

0x344c,	// (0x000787f9) main_cset6_slider_pane_g8

0xd51a,	// (0x000828c7) main_cset6_slider_pane_g9_ParamLimits

0xd51a,	// (0x000828c7) main_cset6_slider_pane_g9

0xd526,	// (0x000828d3) main_cset6_slider_pane_g10_ParamLimits

0xd526,	// (0x000828d3) main_cset6_slider_pane_g10

0xd532,	// (0x000828df) main_cset6_slider_pane_g11_ParamLimits

0xd532,	// (0x000828df) main_cset6_slider_pane_g11

0xd53e,	// (0x000828eb) main_cset6_slider_pane_g12_ParamLimits

0xd53e,	// (0x000828eb) main_cset6_slider_pane_g12

0x3458,	// (0x00078805) main_cset6_slider_pane_g13_ParamLimits

0x3458,	// (0x00078805) main_cset6_slider_pane_g13

0x3464,	// (0x00078811) main_cset6_slider_pane_g14_ParamLimits

0x3464,	// (0x00078811) main_cset6_slider_pane_g14

0xd54a,	// (0x000828f7) main_cset6_slider_pane_g15_ParamLimits

0xd54a,	// (0x000828f7) main_cset6_slider_pane_g15

0xd562,	// (0x0008290f) main_cset6_slider_pane_g16_ParamLimits

0xd562,	// (0x0008290f) main_cset6_slider_pane_g16

0xd570,	// (0x0008291d) main_cset6_slider_pane_g17_ParamLimits

0xd570,	// (0x0008291d) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x00084f52) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x00084f52) main_cset6_slider_pane_g

0x3c06,	// (0x00078fb3) main_cset6_slider_pane_t1_ParamLimits

0x3c06,	// (0x00078fb3) main_cset6_slider_pane_t1

0xd58a,	// (0x00082937) main_cset6_slider_pane_t2_ParamLimits

0xd58a,	// (0x00082937) main_cset6_slider_pane_t2

0xd5b5,	// (0x00082962) main_cset6_slider_pane_t3_ParamLimits

0xd5b5,	// (0x00082962) main_cset6_slider_pane_t3

0xd5e0,	// (0x0008298d) main_cset6_slider_pane_t4_ParamLimits

0xd5e0,	// (0x0008298d) main_cset6_slider_pane_t4

0xd60b,	// (0x000829b8) main_cset6_slider_pane_t5_ParamLimits

0xd60b,	// (0x000829b8) main_cset6_slider_pane_t5

0x3c47,	// (0x00078ff4) main_cset6_slider_pane_t7_ParamLimits

0x3c47,	// (0x00078ff4) main_cset6_slider_pane_t7

0xd638,	// (0x000829e5) main_cset6_slider_pane_t8_ParamLimits

0xd638,	// (0x000829e5) main_cset6_slider_pane_t8

0xd65c,	// (0x00082a09) main_cset6_slider_pane_t9_ParamLimits

0xd65c,	// (0x00082a09) main_cset6_slider_pane_t9

0xd680,	// (0x00082a2d) main_cset6_slider_pane_t10_ParamLimits

0xd680,	// (0x00082a2d) main_cset6_slider_pane_t10

0xd6a4,	// (0x00082a51) main_cset6_slider_pane_t11_ParamLimits

0xd6a4,	// (0x00082a51) main_cset6_slider_pane_t11

0x3c7d,	// (0x0007902a) main_cset6_slider_pane_t14_ParamLimits

0x3c7d,	// (0x0007902a) main_cset6_slider_pane_t14

0x3cb6,	// (0x00079063) main_cset6_slider_pane_t15_ParamLimits

0x3cb6,	// (0x00079063) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x00084f77) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x00084f77) main_cset6_slider_pane_t

0x3090,	// (0x0007843d) cset_slider_pane_g1_copy1

0x38b0,	// (0x00078c5d) cset_slider_pane_g2_copy1

0x38b9,	// (0x00078c66) cset_slider_pane_g3_copy1

0xed1d,	// (0x000840ca) bg_popup_sub_pane_cp011_copy1

0x3cef,	// (0x0007909c) main_cset_text_pane_g1_copy1

0x359c,	// (0x00078949) main_cset_text_pane_t1_copy1

0x35aa,	// (0x00078957) main_cset_text_pane_t2_copy1

0x35b8,	// (0x00078965) main_cset_text_pane_t3_copy1

0x35c6,	// (0x00078973) main_cset_text_pane_t4_copy1

0x35d4,	// (0x00078981) main_cset_text_pane_t5_copy1

0x3cf7,	// (0x000790a4) main_cset_text_pane_t6_copy1

0x3d05,	// (0x000790b2) main_cset_text_pane_t7_copy1

0xd6ca,	// (0x00082a77) main_cset_text2_pane_t1_copy1

0xf07f,	// (0x0008442c) main_ncimui_pane

0xa046,	// (0x0007f3f3) popup_query_ncimui_window_ParamLimits

0xa046,	// (0x0007f3f3) popup_query_ncimui_window

0xabda,	// (0x0007ff87) field_cale_ev2_pane_g4_ParamLimits

0xabda,	// (0x0007ff87) field_cale_ev2_pane_g4

0xb954,	// (0x00080d01) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb954,	// (0x00080d01) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00084c55) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00084c55) cell_video_dialer_keypad_pane_g

0xb96c,	// (0x00080d19) cell_video_dialer_keypad_pane_t1

0xed1d,	// (0x000840ca) bg_popup_window_pane_cp012

0x0d12,	// (0x000760bf) heading_pane_cp06

0x3d31,	// (0x000790de) ncim_query_content_pane

0xed1d,	// (0x000840ca) bg_popup_heading_pane_cp01

0x3d39,	// (0x000790e6) ncim_heading_pane_t1

0x3d47,	// (0x000790f4) ncim_indicator_popup_pane

0x3d59,	// (0x00079106) ncim_query_button_pane

0x3d6d,	// (0x0007911a) ncim_query_content_pane_t1

0x3d7f,	// (0x0007912c) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00084fbb) ncim_query_content_pane_t

0x3db9,	// (0x00079166) ncim_query_list_pane

0x3dcb,	// (0x00079178) ncim_query_popup_pane

0x3d47,	// (0x000790f4) ncim_indicator_popup_pane_ParamLimits

0xd81e,	// (0x00082bcb) ncim_query_content_pane_g1_ParamLimits

0xd81e,	// (0x00082bcb) ncim_query_content_pane_g1

0x3d6d,	// (0x0007911a) ncim_query_content_pane_t1_ParamLimits

0x3d7f,	// (0x0007912c) ncim_query_content_pane_t2_ParamLimits

0xd82a,	// (0x00082bd7) ncim_query_content_pane_t3_ParamLimits

0xd82a,	// (0x00082bd7) ncim_query_content_pane_t3

0xd847,	// (0x00082bf4) ncim_query_content_pane_t4_ParamLimits

0xd847,	// (0x00082bf4) ncim_query_content_pane_t4

0xd864,	// (0x00082c11) ncim_query_content_pane_t5_ParamLimits

0xd864,	// (0x00082c11) ncim_query_content_pane_t5

0x3d91,	// (0x0007913e) ncim_query_content_pane_t6_ParamLimits

0x3d91,	// (0x0007913e) ncim_query_content_pane_t6

0xfc0e,	// (0x00084fbb) ncim_query_content_pane_t_ParamLimits

0x3db9,	// (0x00079166) ncim_query_list_pane_ParamLimits

0x3dcb,	// (0x00079178) ncim_query_popup_pane_ParamLimits

0x3ddf,	// (0x0007918c) wait_bar_pane_cp04

0xed1d,	// (0x000840ca) input_focus_pane_cp011

0x3de7,	// (0x00079194) ncim_query_popup_pane_t1

0x3df5,	// (0x000791a2) ncim_list_query_list_pane_ParamLimits

0x3df5,	// (0x000791a2) ncim_list_query_list_pane

0xed1d,	// (0x000840ca) bg_button_pane_cp027

0x3e02,	// (0x000791af) ncim_query_button_pane_g1

0xed1d,	// (0x000840ca) list_highlight_pane_cp012

0x3e0c,	// (0x000791b9) ncim_list_query_list_pane_g1

0x3e14,	// (0x000791c1) ncim_list_query_list_pane_t1

0xbfda,	// (0x00081387) cam4_indicators_pane_g3_ParamLimits

0xbfda,	// (0x00081387) cam4_indicators_pane_g3

0xc0dc,	// (0x00081489) vid4_indicators_pane_g5_ParamLimits

0xc0dc,	// (0x00081489) vid4_indicators_pane_g5

0xcf4b,	// (0x000822f8) vid4_progress_pane_g5_ParamLimits

0xcf4b,	// (0x000822f8) vid4_progress_pane_g5

0xd70a,	// (0x00082ab7) main_ncimui_pane_g1

0xd772,	// (0x00082b1f) ncimui_group_query_pane_ParamLimits

0xd772,	// (0x00082b1f) ncimui_group_query_pane

0xd7ba,	// (0x00082b67) ncimui_list_pane_ParamLimits

0xd7ba,	// (0x00082b67) ncimui_list_pane

0xd7e1,	// (0x00082b8e) ncimui_text_pane_ParamLimits

0xd7e1,	// (0x00082b8e) ncimui_text_pane

0xd881,	// (0x00082c2e) ncimui_text_pane_t1_ParamLimits

0xd881,	// (0x00082c2e) ncimui_text_pane_t1

0x3e22,	// (0x000791cf) ncimui_list_single_graphic_pane_ParamLimits

0x3e22,	// (0x000791cf) ncimui_list_single_graphic_pane

0xd8a0,	// (0x00082c4d) ncimui_query_pane_ParamLimits

0xd8a0,	// (0x00082c4d) ncimui_query_pane

0xed1d,	// (0x000840ca) list_highlight_pane_cp013

0x3e32,	// (0x000791df) ncim_list_query_list_pane_t1_copy1

0x3e40,	// (0x000791ed) ncim_list_single_graphic_pane_g1

0xd8b3,	// (0x00082c60) ncim_query_button_pane_cp01

0xd8bf,	// (0x00082c6c) ncim_query_entry_pane_ParamLimits

0xd8bf,	// (0x00082c6c) ncim_query_entry_pane

0xd8d2,	// (0x00082c7f) ncimui_query_pane_g1

0xd8de,	// (0x00082c8b) ncimui_query_pane_t1_ParamLimits

0xd8de,	// (0x00082c8b) ncimui_query_pane_t1

0xf07f,	// (0x0008442c) input_focus_pane_cp012

0x3e48,	// (0x000791f5) ncim_query_entry_pane_t1

0x042b,	// (0x000757d8) main_im_pane_ParamLimits

0xf07f,	// (0x0008442c) main_mobtv_pane_ParamLimits

0xf07f,	// (0x0008442c) main_mobtv_pane

0xd57e,	// (0x0008292b) main_cset6_slider_pane_g18_ParamLimits

0xd57e,	// (0x0008292b) main_cset6_slider_pane_g18

0x3bfa,	// (0x00078fa7) main_cset6_slider_pane_g19_ParamLimits

0x3bfa,	// (0x00078fa7) main_cset6_slider_pane_g19

0x32f1,	// (0x0007869e) bg_main_mobtv_pane_ParamLimits

0x32f1,	// (0x0007869e) bg_main_mobtv_pane

0xd8f7,	// (0x00082ca4) main_mobtv_info_pane

0xd902,	// (0x00082caf) main_mobtv_loading_pane_ParamLimits

0xd902,	// (0x00082caf) main_mobtv_loading_pane

0x3e5a,	// (0x00079207) main_mobtv_pg_channel_list_pane

0x3e64,	// (0x00079211) main_mobtv_pg_hdr_pane

0xd90f,	// (0x00082cbc) main_mobtv_programe_curr_pane_ParamLimits

0xd90f,	// (0x00082cbc) main_mobtv_programe_curr_pane

0xd91c,	// (0x00082cc9) main_mobtv_programe_next_pane_ParamLimits

0xd91c,	// (0x00082cc9) main_mobtv_programe_next_pane

0x3e6d,	// (0x0007921a) popup_mobtv_noti_window

0x28c0,	// (0x00077c6d) main_tv_pg_hdr_pane_g1

0x3e75,	// (0x00079222) main_tv_pg_hdr_pane_g2

0x3e7d,	// (0x0007922a) main_tv_pg_hdr_pane_g3

0x3e85,	// (0x00079232) main_tv_pg_hdr_pane_g4

0x3e8d,	// (0x0007923a) main_tv_pg_hdr_pane_g5

0x3e97,	// (0x00079244) main_tv_pg_hdr_pane_g6

0x3ea1,	// (0x0007924e) main_tv_pg_hdr_pane_g7

0x3eab,	// (0x00079258) main_tv_pg_hdr_pane_g8

0x3eb5,	// (0x00079262) main_tv_pg_hdr_pane_g9

0x3ebf,	// (0x0007926c) main_tv_pg_hdr_pane_g10

0x3ec9,	// (0x00079276) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00084fc8) main_tv_pg_hdr_pane_g

0x3ed3,	// (0x00079280) main_tv_pg_hdr_pane_t1

0x3ee1,	// (0x0007928e) main_tv_pg_hdr_pane_t2

0x3eef,	// (0x0007929c) main_tv_pg_hdr_pane_t3

0x3eff,	// (0x000792ac) main_tv_pg_hdr_pane_t4

0x3f0f,	// (0x000792bc) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00084fdf) main_tv_pg_hdr_pane_t

0x3f1f,	// (0x000792cc) single_mobtv_pg_channel_pane_ParamLimits

0x3f1f,	// (0x000792cc) single_mobtv_pg_channel_pane

0x3f31,	// (0x000792de) single_mobtv_pg_channel_table_pane

0x097c,	// (0x00075d29) single_mobtv_pg_channel_thumb_pane

0x3f3a,	// (0x000792e7) single_tv_pg_channel_pane_g1

0x3f43,	// (0x000792f0) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00084fea) single_tv_pg_channel_pane_g

0x2b0e,	// (0x00077ebb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2b0e,	// (0x00077ebb) bg_single_mobtv_pg_channel_thumb_pane

0x3f4c,	// (0x000792f9) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3f4c,	// (0x000792f9) single_mobtv_pg_channel_thumb_pane_g1

0x3f5a,	// (0x00079307) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3f5a,	// (0x00079307) single_mobtv_pg_channel_thumb_pane_g2

0x3f66,	// (0x00079313) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3f66,	// (0x00079313) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00084fef) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00084fef) single_mobtv_pg_channel_thumb_pane_g

0x3f72,	// (0x0007931f) single_mobtv_pg_channel_thumb_pane_t1

0x3f80,	// (0x0007932d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00084ff6) single_mobtv_pg_channel_thumb_pane_t

0x28c0,	// (0x00077c6d) bg_single_mobtv_pg_channel_table_pane_g1

0x28c0,	// (0x00077c6d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00084a9c) bg_single_mobtv_pg_channel_table_pane_g

0x3f8e,	// (0x0007933b) single_mobtv_pg_channel_table_pane_t1

0x3f9c,	// (0x00079349) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00084ffb) single_mobtv_pg_channel_table_pane_t

0xd931,	// (0x00082cde) main_mobtv_info_pane_g1_ParamLimits

0xd931,	// (0x00082cde) main_mobtv_info_pane_g1

0xd94d,	// (0x00082cfa) main_mobtv_info_pane_t1_ParamLimits

0xd94d,	// (0x00082cfa) main_mobtv_info_pane_t1

0xd9c5,	// (0x00082d72) main_mobtv_info_pane_t2_ParamLimits

0xd9c5,	// (0x00082d72) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00085005) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00085005) main_mobtv_info_pane_t

0xda54,	// (0x00082e01) wait_bar_pane_cp05

0xda66,	// (0x00082e13) main_mobtv_loading_pane_g1_ParamLimits

0xda66,	// (0x00082e13) main_mobtv_loading_pane_g1

0xda74,	// (0x00082e21) main_mobtv_loading_pane_g2_ParamLimits

0xda74,	// (0x00082e21) main_mobtv_loading_pane_g2

0xda80,	// (0x00082e2d) main_mobtv_loading_pane_g3_ParamLimits

0xda80,	// (0x00082e2d) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0008500c) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0008500c) main_mobtv_loading_pane_g

0x3faa,	// (0x00079357) main_mobtv_loading_pane_t1_ParamLimits

0x3faa,	// (0x00079357) main_mobtv_loading_pane_t1

0x3fc2,	// (0x0007936f) main_mobtv_loading_pane_t2_ParamLimits

0x3fc2,	// (0x0007936f) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00085013) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00085013) main_mobtv_loading_pane_t

0xda8e,	// (0x00082e3b) wait_bar_pane_cp06_ParamLimits

0xda8e,	// (0x00082e3b) wait_bar_pane_cp06

0x3fe6,	// (0x00079393) main_mobtv_programe_curr_pane_t1

0x3ff4,	// (0x000793a1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00085018) main_mobtv_programe_curr_pane_t

0x4002,	// (0x000793af) main_mobtv_programe_next_pane_t1

0x4010,	// (0x000793bd) main_mobtv_programe_next_pane_t2

0x401e,	// (0x000793cb) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0008501d) main_mobtv_programe_next_pane_t

0xed1d,	// (0x000840ca) bg_popup_mobtv_noti_window_pane

0x402c,	// (0x000793d9) popup_mobtv_noti_window_g1

0x4034,	// (0x000793e1) popup_mobtv_noti_window_t1

0x4042,	// (0x000793ef) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00085024) popup_mobtv_noti_window_t

0x28c0,	// (0x00077c6d) bg_popup_mobtv_noti_window_pane_g1

0xed1d,	// (0x000840ca) sc_clock_pane

0xed1d,	// (0x000840ca) main_fs_bigclock_pane

0xd140,	// (0x000824ed) blid2_tripm_pane_t4_ParamLimits

0xd140,	// (0x000824ed) blid2_tripm_pane_t4

0xda9a,	// (0x00082e47) sc_clock_pane_g1_ParamLimits

0xda9a,	// (0x00082e47) sc_clock_pane_g1

0xdaa8,	// (0x00082e55) sc_clock_pane_t1_ParamLimits

0xdaa8,	// (0x00082e55) sc_clock_pane_t1

0xdabb,	// (0x00082e68) sc_clock_pane_t2_ParamLimits

0xdabb,	// (0x00082e68) sc_clock_pane_t2

0xdacd,	// (0x00082e7a) sc_clock_pane_t3_ParamLimits

0xdacd,	// (0x00082e7a) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00085029) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00085029) sc_clock_pane_t

0xe3ee,	// (0x0008379b) main_fs_bigclock_indicator_pane_ParamLimits

0xe3ee,	// (0x0008379b) main_fs_bigclock_indicator_pane

0xdb50,	// (0x00082efd) main_fs_bigclock_pane_g1_ParamLimits

0xdb50,	// (0x00082efd) main_fs_bigclock_pane_g1

0xe3fa,	// (0x000837a7) main_fs_bigclock_pane_t1_ParamLimits

0xe3fa,	// (0x000837a7) main_fs_bigclock_pane_t1

0xe40c,	// (0x000837b9) main_fs_bigclock_pane_t2_ParamLimits

0xe40c,	// (0x000837b9) main_fs_bigclock_pane_t2

0xe420,	// (0x000837cd) main_fs_bigclock_pane_t3_ParamLimits

0xe420,	// (0x000837cd) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x00085233) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x00085233) main_fs_bigclock_pane_t

0x489c,	// (0x00079c49) main_fs_bigclock_indicator_pane_g1

0x3d61,	// (0x0007910e) ncim_query_content_pane_g2_ParamLimits

0x3d61,	// (0x0007910e) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00084fb6) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00084fb6) ncim_query_content_pane_g

0xdae1,	// (0x00082e8e) sc_clock_pane_t4_ParamLimits

0xdae1,	// (0x00082e8e) sc_clock_pane_t4

0xf07f,	// (0x0008442c) main_radioblah_pane

0x3264,	// (0x00078611) cell_call4_button_pane_t1_copy1_ParamLimits

0x3264,	// (0x00078611) cell_call4_button_pane_t1_copy1

0xd724,	// (0x00082ad1) main_ncimui_pane_t1_ParamLimits

0xd724,	// (0x00082ad1) main_ncimui_pane_t1

0xd73e,	// (0x00082aeb) main_ncimui_pane_t2_ParamLimits

0xd73e,	// (0x00082aeb) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00084faf) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00084faf) main_ncimui_pane_t

0x4196,	// (0x00079543) main_radioblah_anim_pane_ParamLimits

0x4196,	// (0x00079543) main_radioblah_anim_pane

0x41a7,	// (0x00079554) main_radioblah_info_pane_ParamLimits

0x41a7,	// (0x00079554) main_radioblah_info_pane

0x41bb,	// (0x00079568) main_radioblah_pane_t1_ParamLimits

0x41bb,	// (0x00079568) main_radioblah_pane_t1

0x41d7,	// (0x00079584) main_radioblah_pane_t2_ParamLimits

0x41d7,	// (0x00079584) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0008504a) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0008504a) main_radioblah_pane_t

0xdba6,	// (0x00082f53) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdba6,	// (0x00082f53) main_radioblah_rocker_ctrl_pane

0x421f,	// (0x000795cc) main_radioblah_info_pane_t1_ParamLimits

0x421f,	// (0x000795cc) main_radioblah_info_pane_t1

0xdbeb,	// (0x00082f98) main_radioblah_info_pane_t2_ParamLimits

0xdbeb,	// (0x00082f98) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00085053) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00085053) main_radioblah_info_pane_t

0x28c0,	// (0x00077c6d) main_radioblah_rocker_ctrl_pane_g1

0xdc9b,	// (0x00083048) main_radioblah_rocker_ctrl_pane_g2

0xdca3,	// (0x00083050) main_radioblah_rocker_ctrl_pane_g3

0xdcab,	// (0x00083058) main_radioblah_rocker_ctrl_pane_g4

0xdcb3,	// (0x00083060) main_radioblah_rocker_ctrl_pane_g5

0xdcbb,	// (0x00083068) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0008505c) main_radioblah_rocker_ctrl_pane_g

0xd6ca,	// (0x00082a77) main_cset_text2_pane_t1_copy1_ParamLimits

0xbf0b,	// (0x000812b8) cam4_image_uncrop_qvga_pane

0xc04c,	// (0x000813f9) vid4_image_uncrop_qcif_pane

0xd2ce,	// (0x0008267b) cam6_image_uncrop_qvga_pane_ParamLimits

0xd2ce,	// (0x0008267b) cam6_image_uncrop_qvga_pane

0x3a5c,	// (0x00078e09) vid6_image_uncrop_qcif_pane_ParamLimits

0x3a5c,	// (0x00078e09) vid6_image_uncrop_qcif_pane

0xed1d,	// (0x000840ca) bg_popup_preview_window_pane_cp03

0x3d13,	// (0x000790c0) list_cset_text2_pane

0x3d1b,	// (0x000790c8) main_cset6_text2_pane_g1

0x3d23,	// (0x000790d0) main_cset6_text2_pane_t1

0xdcc3,	// (0x00083070) list_cset_text2_pane_t1_ParamLimits

0xdcc3,	// (0x00083070) list_cset_text2_pane_t1

0xf07f,	// (0x0008442c) main_radioblah_pane_ParamLimits

0xda40,	// (0x00082ded) main_mobtv_info_pane_t3_ParamLimits

0xda40,	// (0x00082ded) main_mobtv_info_pane_t3

0xdb94,	// (0x00082f41) main_radioblah_pane_g1

0xdbbf,	// (0x00082f6c) main_radioblah_info_pane_g1

0xdc40,	// (0x00082fed) main_radioblah_info_pane_t3_ParamLimits

0xdc40,	// (0x00082fed) main_radioblah_info_pane_t3

0x8e7d,	// (0x0007e22a) highlight_cell_cale_month_pane_ParamLimits

0x8e7d,	// (0x0007e22a) highlight_cell_cale_month_pane

0xed1d,	// (0x000840ca) main_phob_fisheye_pane

0x2bea,	// (0x00077f97) scroll_pane_cp0031_ParamLimits

0x2bea,	// (0x00077f97) scroll_pane_cp0031

0x3b6a,	// (0x00078f17) wait_bar_pane_cp08_ParamLimits

0xd4aa,	// (0x00082857) cset_list_set_pane_copy1_ParamLimits

0x4274,	// (0x00079621) highlight_cell_cale_month_pane_g1

0xdce4,	// (0x00083091) highlight_cell_cale_month_pane_t1

0x37c8,	// (0x00078b75) list_gen_pane_cp01

0x342b,	// (0x000787d8) scroll_pane_01

0x62db,	// (0x0007b688) list_single_double_fisheye_pane

0x62e4,	// (0x0007b691) list_double_fisheye_pane_g1_ParamLimits

0x62e4,	// (0x0007b691) list_double_fisheye_pane_g1

0xdcf2,	// (0x0008309f) list_double_fisheye_pane_g2_ParamLimits

0xdcf2,	// (0x0008309f) list_double_fisheye_pane_g2

0x62f0,	// (0x0007b69d) list_double_fisheye_pane_g3_ParamLimits

0x62f0,	// (0x0007b69d) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00085069) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00085069) list_double_fisheye_pane_g

0x6308,	// (0x0007b6b5) list_double_fisheye_pane_t1_ParamLimits

0x6308,	// (0x0007b6b5) list_double_fisheye_pane_t1

0x6323,	// (0x0007b6d0) list_double_fisheye_pane_t2_ParamLimits

0x6323,	// (0x0007b6d0) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00085074) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00085074) list_double_fisheye_pane_t

0xed1d,	// (0x000840ca) main_call5_pane

0xdb07,	// (0x00082eb4) sc_swipe_pane_ParamLimits

0xdb07,	// (0x00082eb4) sc_swipe_pane

0xdd23,	// (0x000830d0) call5_image_pane_ParamLimits

0xdd23,	// (0x000830d0) call5_image_pane

0xdd33,	// (0x000830e0) call5_swipe_1_pane_ParamLimits

0xdd33,	// (0x000830e0) call5_swipe_1_pane

0xdd3f,	// (0x000830ec) call5_swipe_2_pane_ParamLimits

0xdd3f,	// (0x000830ec) call5_swipe_2_pane

0xdd59,	// (0x00083106) popup_call5_audio_first_window_ParamLimits

0xdd59,	// (0x00083106) popup_call5_audio_first_window

0x2b0e,	// (0x00077ebb) call5_swipe_1_pane_g1_ParamLimits

0x2b0e,	// (0x00077ebb) call5_swipe_1_pane_g1

0x427c,	// (0x00079629) call5_swipe_1_pane_g2_ParamLimits

0x427c,	// (0x00079629) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00085079) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00085079) call5_swipe_1_pane_g

0x4288,	// (0x00079635) call5_swipe_1_pane_t1_ParamLimits

0x4288,	// (0x00079635) call5_swipe_1_pane_t1

0x2b0e,	// (0x00077ebb) call5_swipe_2_pane_g1_ParamLimits

0x2b0e,	// (0x00077ebb) call5_swipe_2_pane_g1

0x429d,	// (0x0007964a) call5_swipe_2_pane_g2_ParamLimits

0x429d,	// (0x0007964a) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0008507e) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0008507e) call5_swipe_2_pane_g

0x42a9,	// (0x00079656) call5_swipe_2_pane_t1_ParamLimits

0x42a9,	// (0x00079656) call5_swipe_2_pane_t1

0x42be,	// (0x0007966b) sc_swipe_pane_g1_ParamLimits

0x42be,	// (0x0007966b) sc_swipe_pane_g1

0x42cb,	// (0x00079678) sc_swipe_pane_g2_ParamLimits

0x42cb,	// (0x00079678) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00085083) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00085083) sc_swipe_pane_g

0x42d7,	// (0x00079684) sc_swipe_pane_t1_ParamLimits

0x42d7,	// (0x00079684) sc_swipe_pane_t1

0xed1d,	// (0x000840ca) main_cmail_launcher_pane

0xdd67,	// (0x00083114) aid_size_cell_cmail_l_ParamLimits

0xdd67,	// (0x00083114) aid_size_cell_cmail_l

0xdd77,	// (0x00083124) grid_cmail_l_pane_ParamLimits

0xdd77,	// (0x00083124) grid_cmail_l_pane

0xdd87,	// (0x00083134) cell_cmail_l_pane_ParamLimits

0xdd87,	// (0x00083134) cell_cmail_l_pane

0xdd9b,	// (0x00083148) cell_cmail_l_pane_g1_ParamLimits

0xdd9b,	// (0x00083148) cell_cmail_l_pane_g1

0xddac,	// (0x00083159) cell_cmail_l_pane_t1_ParamLimits

0xddac,	// (0x00083159) cell_cmail_l_pane_t1

0x42ec,	// (0x00079699) cell_cmail_l_pane_t2_ParamLimits

0x42ec,	// (0x00079699) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00085088) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00085088) cell_cmail_l_pane_t

0xf07f,	// (0x0008442c) grid_highlight_pane_cp018_ParamLimits

0xf07f,	// (0x0008442c) grid_highlight_pane_cp018

0x6eec,	// (0x0007c299) main2_pane_ParamLimits

0x6eec,	// (0x0007c299) main2_pane

0x04d6,	// (0x00075883) popup_sp_fs_action_menu_bg_pane_g1

0x04de,	// (0x0007588b) popup_sp_fs_action_menu_bg_pane_g2

0x04e6,	// (0x00075893) popup_sp_fs_action_menu_bg_pane_g3

0x04ee,	// (0x0007589b) popup_sp_fs_action_menu_bg_pane_g4

0x04f6,	// (0x000758a3) popup_sp_fs_action_menu_bg_pane_g5

0x04fe,	// (0x000758ab) popup_sp_fs_action_menu_bg_pane_g6

0x0506,	// (0x000758b3) popup_sp_fs_action_menu_bg_pane_g7

0x050e,	// (0x000758bb) popup_sp_fs_action_menu_bg_pane_g8

0x0516,	// (0x000758c3) popup_sp_fs_action_menu_bg_pane_g9

0x051e,	// (0x000758cb) popup_sp_fs_action_menu_bg_pane_g10

0x051e,	// (0x000758cb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00084537) popup_sp_fs_action_menu_bg_pane_g

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g3_g1

0x5b01,	// (0x0007aeae) list_medium_line_x2_t3_g3_g2_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_t3_g3_g2

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000845e5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000845e5) list_medium_line_x2_t3_g3_g

0x5b19,	// (0x0007aec6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x5b19,	// (0x0007aec6) list_medium_line_x2_t3_g3_t1

0x5b2e,	// (0x0007aedb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5b2e,	// (0x0007aedb) list_medium_line_x2_t3_g3_t2

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000845ec) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000845ec) list_medium_line_x2_t3_g3_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g2_g1

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000845f3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000845f3) list_medium_line_x2_t3_g2_g

0x5b55,	// (0x0007af02) list_medium_line_x2_t3_g2_t1_ParamLimits

0x5b55,	// (0x0007af02) list_medium_line_x2_t3_g2_t1

0x5b6b,	// (0x0007af18) list_medium_line_x2_t3_g2_t2_ParamLimits

0x5b6b,	// (0x0007af18) list_medium_line_x2_t3_g2_t2

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000845f8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000845f8) list_medium_line_x2_t3_g2_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t4_g4_g1

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t4_g4_g2

0x5b01,	// (0x0007aeae) list_medium_line_x2_t4_g4_g3_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_t4_g4_g3

0x5b89,	// (0x0007af36) list_medium_line_x2_t4_g4_g4_ParamLimits

0x5b89,	// (0x0007af36) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000845ff) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000845ff) list_medium_line_x2_t4_g4_g

0x5b95,	// (0x0007af42) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5b95,	// (0x0007af42) list_medium_line_x2_t4_g4_t1

0x5baf,	// (0x0007af5c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5baf,	// (0x0007af5c) list_medium_line_x2_t4_g4_t2

0x5bc5,	// (0x0007af72) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5bc5,	// (0x0007af72) list_medium_line_x2_t4_g4_t3

0x5bda,	// (0x0007af87) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5bda,	// (0x0007af87) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00084608) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00084608) list_medium_line_x2_t4_g4_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g4_g1

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t2_g4_g2

0x5b01,	// (0x0007aeae) list_medium_line_x2_t2_g4_g3_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_t2_g4_g3

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0008466f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0008466f) list_medium_line_x2_t2_g4_g

0x5bec,	// (0x0007af99) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5bec,	// (0x0007af99) list_medium_line_x2_t2_g4_t1

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00084678) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00084678) list_medium_line_x2_t2_g4_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g3_g1

0x5b01,	// (0x0007aeae) list_medium_line_x2_t2_g3_g2_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_t2_g3_g2

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000845e5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000845e5) list_medium_line_x2_t2_g3_g

0x5c01,	// (0x0007afae) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5c01,	// (0x0007afae) list_medium_line_x2_t2_g3_t1

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0008467d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0008467d) list_medium_line_x2_t2_g3_t

0x905e,	// (0x0007e40b) main_sp_fs_list_pane_ParamLimits

0x905e,	// (0x0007e40b) main_sp_fs_list_pane

0x906a,	// (0x0007e417) sp_fs_scroll_pane_ParamLimits

0x906a,	// (0x0007e417) sp_fs_scroll_pane

0x5c30,	// (0x0007afdd) list_medium_line_x2_t3_t1

0x5c40,	// (0x0007afed) list_medium_line_x2_t3_t2

0x5c4e,	// (0x0007affb) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000846c8) list_medium_line_x2_t3_t

0x5c5c,	// (0x0007b009) list_medium_line_x3_t4_t1

0x5c6c,	// (0x0007b019) list_medium_line_x3_t4_t2

0x5c7a,	// (0x0007b027) list_medium_line_x3_t4_t3

0x5c4e,	// (0x0007affb) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000846cf) list_medium_line_x3_t4_t

0x5c88,	// (0x0007b035) list_medium_line_x4_t5_t1

0x5c98,	// (0x0007b045) list_medium_line_x4_t5_t2

0x5c7a,	// (0x0007b027) list_medium_line_x4_t5_t3

0x5ca6,	// (0x0007b053) list_medium_line_x4_t5_t4

0x5c4e,	// (0x0007affb) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000846d8) list_medium_line_x4_t5_t

0x5af5,	// (0x0007aea2) list_medium_line_t4_g4_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_t4_g4_g1

0x5b89,	// (0x0007af36) list_medium_line_t4_g4_g2_ParamLimits

0x5b89,	// (0x0007af36) list_medium_line_t4_g4_g2

0x5cb4,	// (0x0007b061) list_medium_line_t4_g4_g3_ParamLimits

0x5cb4,	// (0x0007b061) list_medium_line_t4_g4_g3

0x5b0d,	// (0x0007aeba) list_medium_line_t4_g4_g4_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000846e3) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000846e3) list_medium_line_t4_g4_g

0x5cc0,	// (0x0007b06d) list_medium_line_t4_g4_t1_ParamLimits

0x5cc0,	// (0x0007b06d) list_medium_line_t4_g4_t1

0x5cd5,	// (0x0007b082) list_medium_line_t4_g4_t2_ParamLimits

0x5cd5,	// (0x0007b082) list_medium_line_t4_g4_t2

0x5cea,	// (0x0007b097) list_medium_line_t4_g4_t3_ParamLimits

0x5cea,	// (0x0007b097) list_medium_line_t4_g4_t3

0x5b40,	// (0x0007aeed) list_medium_line_t4_g4_t4_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000846ec) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000846ec) list_medium_line_t4_g4_t

0x9181,	// (0x0007e52e) chi_dic_find_pane_g1

0xa003,	// (0x0007f3b0) main_tport_pane

0x5f5d,	// (0x0007b30a) list_medium_line_plain_t1

0x5f6b,	// (0x0007b318) list_medium_line_t2_g2_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t2_g2_g1

0xca95,	// (0x00081e42) list_medium_line_t2_g2_g2_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x00084dc0) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x00084dc0) list_medium_line_t2_g2_g

0x5f77,	// (0x0007b324) list_medium_line_t2_g2_t1_ParamLimits

0x5f77,	// (0x0007b324) list_medium_line_t2_g2_t1

0x5f91,	// (0x0007b33e) list_medium_line_t2_g2_t2_ParamLimits

0x5f91,	// (0x0007b33e) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x00084dc5) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x00084dc5) list_medium_line_t2_g2_t

0x61b1,	// (0x0007b55e) aid_sp_fs_list_icon_a_sm

0xcfa9,	// (0x00082356) aid_sp_fs_list_icon_d

0x0006,	// (0x000753b3) aid_sp_fs_text_primary

0xf09b,	// (0x00084448) aid_sp_fs_text_secondary

0xcfb1,	// (0x0008235e) list_medium_line

0xcfb1,	// (0x0008235e) list_medium_line_g2

0xcfb1,	// (0x0008235e) list_medium_line_g3

0xcfb1,	// (0x0008235e) list_medium_line_plain

0xcfb1,	// (0x0008235e) list_medium_line_plain_t2

0xcfb1,	// (0x0008235e) list_medium_line_plain_t3

0xcfb1,	// (0x0008235e) list_medium_line_right_icon

0xcfb1,	// (0x0008235e) list_medium_line_right_iconx2

0xcfb1,	// (0x0008235e) list_medium_line_t2

0xcfb1,	// (0x0008235e) list_medium_line_t2_g2

0xcfb1,	// (0x0008235e) list_medium_line_t2_g3

0xcfb1,	// (0x0008235e) list_medium_line_t2_right_icon

0xcfb1,	// (0x0008235e) list_medium_line_t2_right_iconx2

0xcfb1,	// (0x0008235e) list_medium_line_t3

0xcfb1,	// (0x0008235e) list_medium_line_t3_g2

0xcfb1,	// (0x0008235e) list_medium_line_t3_g3

0xcfb1,	// (0x0008235e) list_medium_line_t3_right_iconx2

0x61b9,	// (0x0007b566) list_medium_line_t4_g4

0x61c2,	// (0x0007b56f) list_medium_line_x2

0x61c2,	// (0x0007b56f) list_medium_line_x2_t2_g2

0x61c2,	// (0x0007b56f) list_medium_line_x2_t2_g3

0x61c2,	// (0x0007b56f) list_medium_line_x2_t2_g4

0x61c2,	// (0x0007b56f) list_medium_line_x2_t3

0x61c2,	// (0x0007b56f) list_medium_line_x2_t3_g2

0x61c2,	// (0x0007b56f) list_medium_line_x2_t3_g3

0x61c2,	// (0x0007b56f) list_medium_line_x2_t3_g4

0x61c2,	// (0x0007b56f) list_medium_line_x2_t4_g2

0x61c2,	// (0x0007b56f) list_medium_line_x2_t4_g4

0x61cb,	// (0x0007b578) list_medium_line_x3

0x61cb,	// (0x0007b578) list_medium_line_x3_t4

0x61cb,	// (0x0007b578) list_medium_line_x3_t4_g4

0x61b9,	// (0x0007b566) list_medium_line_x4_t4

0x61b9,	// (0x0007b566) list_medium_line_x4_t4_g7

0x61b9,	// (0x0007b566) list_medium_line_x4_t5

0x61d4,	// (0x0007b581) list_single_fs_dyc_pane_ParamLimits

0x61d4,	// (0x0007b581) list_single_fs_dyc_pane

0x5af5,	// (0x0007aea2) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x4_t4_g7_g1

0x620c,	// (0x0007b5b9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x620c,	// (0x0007b5b9) list_medium_line_x4_t4_g7_g2

0x6218,	// (0x0007b5c5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6218,	// (0x0007b5c5) list_medium_line_x4_t4_g7_g3

0x6227,	// (0x0007b5d4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6227,	// (0x0007b5d4) list_medium_line_x4_t4_g7_g4

0x6233,	// (0x0007b5e0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6233,	// (0x0007b5e0) list_medium_line_x4_t4_g7_g5

0x6242,	// (0x0007b5ef) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6242,	// (0x0007b5ef) list_medium_line_x4_t4_g7_g6

0x6251,	// (0x0007b5fe) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6251,	// (0x0007b5fe) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x00084f90) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x00084f90) list_medium_line_x4_t4_g7_g

0x625d,	// (0x0007b60a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x625d,	// (0x0007b60a) list_medium_line_x4_t4_g7_t1

0x6272,	// (0x0007b61f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6272,	// (0x0007b61f) list_medium_line_x4_t4_g7_t2

0x6287,	// (0x0007b634) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6287,	// (0x0007b634) list_medium_line_x4_t4_g7_t3

0x629c,	// (0x0007b649) list_medium_line_x4_t4_g7_t4_ParamLimits

0x629c,	// (0x0007b649) list_medium_line_x4_t4_g7_t4

0x62ae,	// (0x0007b65b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x62ae,	// (0x0007b65b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x00084f9f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x00084f9f) list_medium_line_x4_t4_g7_t

0x62c0,	// (0x0007b66d) list_single_dyc_row_pane_ParamLimits

0x62c0,	// (0x0007b66d) list_single_dyc_row_pane

0xdd17,	// (0x000830c4) call5_gesture_pane_ParamLimits

0xdd17,	// (0x000830c4) call5_gesture_pane

0xdd4b,	// (0x000830f8) call5_windows_pane_ParamLimits

0xdd4b,	// (0x000830f8) call5_windows_pane

0xddc2,	// (0x0008316f) call5_swipe_1_pane_cp_ParamLimits

0xddc2,	// (0x0008316f) call5_swipe_1_pane_cp

0xddce,	// (0x0008317b) call5_swipe_2_pane_cp_ParamLimits

0xddce,	// (0x0008317b) call5_swipe_2_pane_cp

0x0620,	// (0x000759cd) call5_image_pane_cp

0xddda,	// (0x00083187) popup_call5_audio_first_window_cp_ParamLimits

0xddda,	// (0x00083187) popup_call5_audio_first_window_cp

0x42be,	// (0x0007966b) call5_swipe_1_pane_g1_cp_ParamLimits

0x42be,	// (0x0007966b) call5_swipe_1_pane_g1_cp

0x42fe,	// (0x000796ab) call5_swipe_1_pane_g2_cp

0x42d7,	// (0x00079684) call5_swipe_1_pane_t1_cp_ParamLimits

0x42d7,	// (0x00079684) call5_swipe_1_pane_t1_cp

0x42be,	// (0x0007966b) call5_swipe_2_pane_g1_cp_ParamLimits

0x42be,	// (0x0007966b) call5_swipe_2_pane_g1_cp

0x4306,	// (0x000796b3) call5_swipe_2_pane_g2_cp

0x430e,	// (0x000796bb) call5_swipe_2_pane_t1_cp_ParamLimits

0x430e,	// (0x000796bb) call5_swipe_2_pane_t1_cp

0xf07f,	// (0x0008442c) main_sp_fs_email_pane

0x4323,	// (0x000796d0) main_sp_fs_listscroll_pane_te

0xdde8,	// (0x00083195) popup_sp_fs_action_menu_pane_ParamLimits

0xdde8,	// (0x00083195) popup_sp_fs_action_menu_pane

0x28c0,	// (0x00077c6d) bg_sp_fs_ctrlbar_pane_g1

0x432c,	// (0x000796d9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x4335,	// (0x000796e2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x433e,	// (0x000796eb) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x28c0,	// (0x00077c6d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0008508d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2699,	// (0x00077a46) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2699,	// (0x00077a46) bg_sp_fs_ctrlbar_ddmenu_pane

0x4347,	// (0x000796f4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x4347,	// (0x000796f4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x4353,	// (0x00079700) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x4353,	// (0x00079700) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00085096) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00085096) main_sp_fs_ctrlbar_ddmenu_pane_g

0x435f,	// (0x0007970c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x435f,	// (0x0007970c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde2c,	// (0x000831d9) list_medium_line_t2_right_icon_g1

0x6345,	// (0x0007b6f2) list_medium_line_t2_right_icon_t1

0x6355,	// (0x0007b702) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0008509b) list_medium_line_t2_right_icon_t

0x24ac,	// (0x00077859) bg_sp_fs_ctrlbar_pane_ParamLimits

0x24ac,	// (0x00077859) bg_sp_fs_ctrlbar_pane

0xde77,	// (0x00083224) main_sp_fs_ctrlbar_button_pane_cp01

0xde7f,	// (0x0008322c) main_sp_fs_ctrlbar_ddmenu_pane

0x43b1,	// (0x0007975e) main_sp_fs_ctrlbar_pane_g1

0x43bd,	// (0x0007976a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x000850a0) main_sp_fs_ctrlbar_pane_g

0x43c9,	// (0x00079776) main_sp_fs_ctrlbar_pane_t1

0xde89,	// (0x00083236) main_sp_fs_ctrlbar_pane

0xde9f,	// (0x0008324c) main_sp_fs_listscroll_pane_te_cp01

0x6363,	// (0x0007b710) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6363,	// (0x0007b710) popup_sp_fs_action_menu_pane_cp01

0xf07f,	// (0x0008442c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf07f,	// (0x0008442c) bg_sp_fs_highlight_list_pane_cp01

0x638d,	// (0x0007b73a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x638d,	// (0x0007b73a) sp_fs_action_menu_list_gene_pane_g1

0x43f9,	// (0x000797a6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x43f9,	// (0x000797a6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x000850aa) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x000850aa) sp_fs_action_menu_list_gene_pane_g

0x639c,	// (0x0007b749) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x639c,	// (0x0007b749) sp_fs_action_menu_list_gene_pane_t1

0x63b4,	// (0x0007b761) sp_fs_action_menu_list_gene_pane_ParamLimits

0x63b4,	// (0x0007b761) sp_fs_action_menu_list_gene_pane

0x4406,	// (0x000797b3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x4406,	// (0x000797b3) popup_sp_fs_action_menu_bg_pane

0x63d3,	// (0x0007b780) sp_fs_action_menu_list_pane_ParamLimits

0x63d3,	// (0x0007b780) sp_fs_action_menu_list_pane

0xf0a4,	// (0x00084451) sp_fs_scroll_pane_cp01_ParamLimits

0xf0a4,	// (0x00084451) sp_fs_scroll_pane_cp01

0x63f3,	// (0x0007b7a0) list_medium_line_plain_t2_t1

0x6403,	// (0x0007b7b0) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x000850af) list_medium_line_plain_t2_t

0x6411,	// (0x0007b7be) list_medium_line_plain_t3_t1

0x6421,	// (0x0007b7ce) list_medium_line_plain_t3_t2

0x642f,	// (0x0007b7dc) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x000850b4) list_medium_line_plain_t3_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t2_g2_g1

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000845f3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000845f3) list_medium_line_x2_t2_g2_g

0x5cc0,	// (0x0007b06d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5cc0,	// (0x0007b06d) list_medium_line_x2_t2_g2_t1

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x000850bb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x000850bb) list_medium_line_x2_t2_g2_t

0x5af5,	// (0x0007aea2) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t4_g2_g1

0x643d,	// (0x0007b7ea) list_medium_line_x2_t4_g2_g2_ParamLimits

0x643d,	// (0x0007b7ea) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x000850c0) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x000850c0) list_medium_line_x2_t4_g2_g

0x644f,	// (0x0007b7fc) list_medium_line_x2_t4_g2_t1_ParamLimits

0x644f,	// (0x0007b7fc) list_medium_line_x2_t4_g2_t1

0x6469,	// (0x0007b816) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6469,	// (0x0007b816) list_medium_line_x2_t4_g2_t2

0x647f,	// (0x0007b82c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x647f,	// (0x0007b82c) list_medium_line_x2_t4_g2_t3

0x5b40,	// (0x0007aeed) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x000850c5) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x000850c5) list_medium_line_x2_t4_g2_t

0xdeb0,	// (0x0008325d) list_medium_line_t3_right_iconx2_g1

0xde2c,	// (0x000831d9) list_medium_line_t3_right_iconx2_g2

0x6494,	// (0x0007b841) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x000850ce) list_medium_line_t3_right_iconx2_g

0x649c,	// (0x0007b849) list_medium_line_t3_right_iconx2_t1

0x64ac,	// (0x0007b859) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x000850d5) list_medium_line_t3_right_iconx2_t

0x5af5,	// (0x0007aea2) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x3_t4_g4_g1

0x5b01,	// (0x0007aeae) list_medium_line_x3_t4_g4_g2_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x3_t4_g4_g2

0x5b89,	// (0x0007af36) list_medium_line_x3_t4_g4_g3_ParamLimits

0x5b89,	// (0x0007af36) list_medium_line_x3_t4_g4_g3

0x64ba,	// (0x0007b867) list_medium_line_x3_t4_g4_g4_ParamLimits

0x64ba,	// (0x0007b867) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x000850da) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x000850da) list_medium_line_x3_t4_g4_g

0x64c6,	// (0x0007b873) list_medium_line_x3_t4_g4_t1_ParamLimits

0x64c6,	// (0x0007b873) list_medium_line_x3_t4_g4_t1

0x64dd,	// (0x0007b88a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x64dd,	// (0x0007b88a) list_medium_line_x3_t4_g4_t2

0x5cd5,	// (0x0007b082) list_medium_line_x3_t4_g4_t3_ParamLimits

0x5cd5,	// (0x0007b082) list_medium_line_x3_t4_g4_t3

0x64f2,	// (0x0007b89f) list_medium_line_x3_t4_g4_t4_ParamLimits

0x64f2,	// (0x0007b89f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x000850e3) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x000850e3) list_medium_line_x3_t4_g4_t

0x650f,	// (0x0007b8bc) list_single_dyc_row_text_pane_t1_ParamLimits

0x650f,	// (0x0007b8bc) list_single_dyc_row_text_pane_t1

0x6546,	// (0x0007b8f3) list_single_dyc_row_text_pane_t2_ParamLimits

0x6546,	// (0x0007b8f3) list_single_dyc_row_text_pane_t2

0x65bc,	// (0x0007b969) list_single_dyc_row_text_pane_t3_ParamLimits

0x65bc,	// (0x0007b969) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x000850ec) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x000850ec) list_single_dyc_row_text_pane_t

0x668d,	// (0x0007ba3a) list_single_dyc_row_pane_g1_ParamLimits

0x668d,	// (0x0007ba3a) list_single_dyc_row_pane_g1

0x6699,	// (0x0007ba46) list_single_dyc_row_pane_g2_ParamLimits

0x6699,	// (0x0007ba46) list_single_dyc_row_pane_g2

0x66a5,	// (0x0007ba52) list_single_dyc_row_pane_g3_ParamLimits

0x66a5,	// (0x0007ba52) list_single_dyc_row_pane_g3

0x66b1,	// (0x0007ba5e) list_single_dyc_row_pane_g4_ParamLimits

0x66b1,	// (0x0007ba5e) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x000850f9) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x000850f9) list_single_dyc_row_pane_g

0x66bd,	// (0x0007ba6a) list_single_dyc_row_text_pane_ParamLimits

0x66bd,	// (0x0007ba6a) list_single_dyc_row_text_pane

0xed1d,	// (0x000840ca) bg_sp_fs_scroll_pane

0x4414,	// (0x000797c1) thumb_sp_fs_scroll_pane

0x5f6b,	// (0x0007b318) list_medium_line_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_g1

0x66dc,	// (0x0007ba89) list_medium_line_t1_ParamLimits

0x66dc,	// (0x0007ba89) list_medium_line_t1

0x5af5,	// (0x0007aea2) list_medium_line_x2_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_g1

0x5b01,	// (0x0007aeae) list_medium_line_x2_g2_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x00085102) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x00085102) list_medium_line_x2_g

0x66f1,	// (0x0007ba9e) list_medium_line_x2_t1_ParamLimits

0x66f1,	// (0x0007ba9e) list_medium_line_x2_t1

0x5af5,	// (0x0007aea2) list_medium_line_x3_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x3_g1

0x5b01,	// (0x0007aeae) list_medium_line_x3_g2_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x00085102) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x00085102) list_medium_line_x3_g

0x66f1,	// (0x0007ba9e) list_medium_line_x3_t1_ParamLimits

0x66f1,	// (0x0007ba9e) list_medium_line_x3_t1

0x441d,	// (0x000797ca) thumb_sp_fs_scroll_pane_g1

0x4426,	// (0x000797d3) thumb_sp_fs_scroll_pane_g2

0x442f,	// (0x000797dc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00085107) thumb_sp_fs_scroll_pane_g

0x441d,	// (0x000797ca) bg_sp_fs_scroll_pane_g1

0x4426,	// (0x000797d3) bg_sp_fs_scroll_pane_g2

0x442f,	// (0x000797dc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x00085107) bg_sp_fs_scroll_pane_g

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5af5,	// (0x0007aea2) list_medium_line_x2_t3_g4_g1

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x5b7d,	// (0x0007af2a) list_medium_line_x2_t3_g4_g2

0x5b01,	// (0x0007aeae) list_medium_line_x2_t3_g4_g3_ParamLimits

0x5b01,	// (0x0007aeae) list_medium_line_x2_t3_g4_g3

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5b0d,	// (0x0007aeba) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0008466f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0008466f) list_medium_line_x2_t3_g4_g

0x6707,	// (0x0007bab4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6707,	// (0x0007bab4) list_medium_line_x2_t3_g4_t1

0x671d,	// (0x0007baca) list_medium_line_x2_t3_g4_t2_ParamLimits

0x671d,	// (0x0007baca) list_medium_line_x2_t3_g4_t2

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5b40,	// (0x0007aeed) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0008510e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0008510e) list_medium_line_x2_t3_g4_t

0x5f6b,	// (0x0007b318) list_medium_line_g2_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_g2_g1

0xca95,	// (0x00081e42) list_medium_line_g2_g2_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x00084dc0) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x00084dc0) list_medium_line_g2_g

0x6737,	// (0x0007bae4) list_medium_line_g2_t1_ParamLimits

0x6737,	// (0x0007bae4) list_medium_line_g2_t1

0x5f6b,	// (0x0007b318) list_medium_line_t3_g2_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t3_g2_g1

0xca95,	// (0x00081e42) list_medium_line_t3_g2_g2_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x00084dc0) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x00084dc0) list_medium_line_t3_g2_g

0x674c,	// (0x0007baf9) list_medium_line_t3_g2_t1_ParamLimits

0x674c,	// (0x0007baf9) list_medium_line_t3_g2_t1

0x6766,	// (0x0007bb13) list_medium_line_t3_g2_t2_ParamLimits

0x6766,	// (0x0007bb13) list_medium_line_t3_g2_t2

0x677c,	// (0x0007bb29) list_medium_line_t3_g2_t3_ParamLimits

0x677c,	// (0x0007bb29) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x00085115) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x00085115) list_medium_line_t3_g2_t

0xde2c,	// (0x000831d9) list_medium_line_right_icon_g1

0x6792,	// (0x0007bb3f) list_medium_line_right_icon_t1

0x5f6b,	// (0x0007b318) list_medium_line_t2_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t2_g1

0x67a0,	// (0x0007bb4d) list_medium_line_t2_t1_ParamLimits

0x67a0,	// (0x0007bb4d) list_medium_line_t2_t1

0x67ba,	// (0x0007bb67) list_medium_line_t2_t2_ParamLimits

0x67ba,	// (0x0007bb67) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0008511c) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0008511c) list_medium_line_t2_t

0x5f6b,	// (0x0007b318) list_medium_line_t3_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t3_g1

0x67cf,	// (0x0007bb7c) list_medium_line_t3_t1_ParamLimits

0x67cf,	// (0x0007bb7c) list_medium_line_t3_t1

0x67e9,	// (0x0007bb96) list_medium_line_t3_t2_ParamLimits

0x67e9,	// (0x0007bb96) list_medium_line_t3_t2

0x67ff,	// (0x0007bbac) list_medium_line_t3_t3_ParamLimits

0x67ff,	// (0x0007bbac) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x00085121) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x00085121) list_medium_line_t3_t

0x5f6b,	// (0x0007b318) list_medium_line_g3_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_g3_g1

0xdeb8,	// (0x00083265) list_medium_line_g3_g2_ParamLimits

0xdeb8,	// (0x00083265) list_medium_line_g3_g2

0xca95,	// (0x00081e42) list_medium_line_g3_g3_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x00085128) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x00085128) list_medium_line_g3_g

0x6814,	// (0x0007bbc1) list_medium_line_g3_t1_ParamLimits

0x6814,	// (0x0007bbc1) list_medium_line_g3_t1

0x5f6b,	// (0x0007b318) list_medium_line_t2_g3_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t2_g3_g1

0xdeb8,	// (0x00083265) list_medium_line_t2_g3_g2_ParamLimits

0xdeb8,	// (0x00083265) list_medium_line_t2_g3_g2

0xca95,	// (0x00081e42) list_medium_line_t2_g3_g3_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x00085128) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x00085128) list_medium_line_t2_g3_g

0x6829,	// (0x0007bbd6) list_medium_line_t2_g3_t1_ParamLimits

0x6829,	// (0x0007bbd6) list_medium_line_t2_g3_t1

0x6843,	// (0x0007bbf0) list_medium_line_t2_g3_t2_ParamLimits

0x6843,	// (0x0007bbf0) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0008512f) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0008512f) list_medium_line_t2_g3_t

0x5f6b,	// (0x0007b318) list_medium_line_t3_g3_g1_ParamLimits

0x5f6b,	// (0x0007b318) list_medium_line_t3_g3_g1

0xdeb8,	// (0x00083265) list_medium_line_t3_g3_g2_ParamLimits

0xdeb8,	// (0x00083265) list_medium_line_t3_g3_g2

0xca95,	// (0x00081e42) list_medium_line_t3_g3_g3_ParamLimits

0xca95,	// (0x00081e42) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x00085128) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x00085128) list_medium_line_t3_g3_g

0x6859,	// (0x0007bc06) list_medium_line_t3_g3_t1_ParamLimits

0x6859,	// (0x0007bc06) list_medium_line_t3_g3_t1

0x6872,	// (0x0007bc1f) list_medium_line_t3_g3_t2_ParamLimits

0x6872,	// (0x0007bc1f) list_medium_line_t3_g3_t2

0x6888,	// (0x0007bc35) list_medium_line_t3_g3_t3_ParamLimits

0x6888,	// (0x0007bc35) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x00085134) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x00085134) list_medium_line_t3_g3_t

0xdeb0,	// (0x0008325d) list_medium_line_right_iconx2_g1

0xde2c,	// (0x000831d9) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008513b) list_medium_line_right_iconx2_g

0xdec4,	// (0x00083271) list_medium_line_right_iconx2_t1

0xdeb0,	// (0x0008325d) list_medium_line_t2_right_iconx2_g1

0xde2c,	// (0x000831d9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0008513b) list_medium_line_t2_right_iconx2_g

0x689e,	// (0x0007bc4b) list_medium_line_t2_right_iconx2_t1

0x68ae,	// (0x0007bc5b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x00085140) list_medium_line_t2_right_iconx2_t

0x68bc,	// (0x0007bc69) list_medium_line_x4_t4_t1

0x68ca,	// (0x0007bc77) list_medium_line_x4_t4_t2

0x68da,	// (0x0007bc87) list_medium_line_x4_t4_t3

0x68ea,	// (0x0007bc97) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x00085145) list_medium_line_x4_t4_t

0xdefc,	// (0x000832a9) tport_appsw_pane_ParamLimits

0xdefc,	// (0x000832a9) tport_appsw_pane

0xdf0a,	// (0x000832b7) tport_contact_pane_ParamLimits

0xdf0a,	// (0x000832b7) tport_contact_pane

0xdf1a,	// (0x000832c7) tport_listscroll_pane_ParamLimits

0xdf1a,	// (0x000832c7) tport_listscroll_pane

0xdf2a,	// (0x000832d7) cell_tport_appsw_pane_ParamLimits

0xdf2a,	// (0x000832d7) cell_tport_appsw_pane

0x2b73,	// (0x00077f20) tport_appsw_pane_g1_ParamLimits

0x2b73,	// (0x00077f20) tport_appsw_pane_g1

0x4438,	// (0x000797e5) tport_contact_pane_g1

0x4441,	// (0x000797ee) tport_contact_pane_t1

0x444f,	// (0x000797fc) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0008514e) tport_contact_pane_t

0x445d,	// (0x0007980a) list_tport_pane

0x4466,	// (0x00079813) scroll_pane_cp_030

0xdf5d,	// (0x0008330a) cell_tport_appsw_pane_g1

0xdf6d,	// (0x0008331a) cell_tport_appsw_pane_t1

0xdf7b,	// (0x00083328) grid_highlight_pane_cp019

0xdf83,	// (0x00083330) list_tport_double_graphic_pane_ParamLimits

0xdf83,	// (0x00083330) list_tport_double_graphic_pane

0xf07f,	// (0x0008442c) list_highlight_pane_cp023_ParamLimits

0xf07f,	// (0x0008442c) list_highlight_pane_cp023

0xdf94,	// (0x00083341) list_tport_double_graphic_pane_g1_ParamLimits

0xdf94,	// (0x00083341) list_tport_double_graphic_pane_g1

0xdfa1,	// (0x0008334e) list_tport_double_graphic_pane_t1_ParamLimits

0xdfa1,	// (0x0008334e) list_tport_double_graphic_pane_t1

0xdfb6,	// (0x00083363) list_tport_double_graphic_pane_t2_ParamLimits

0xdfb6,	// (0x00083363) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0008515a) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0008515a) list_tport_double_graphic_pane_t

0xed1d,	// (0x000840ca) main_cale_note_pane

0xc2a7,	// (0x00081654) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc2a7,	// (0x00081654) cell_vitu2_function_top_wide_pane_cp01

0xda54,	// (0x00082e01) wait_bar_pane_cp05_ParamLimits

0xf07f,	// (0x0008442c) listscroll_cmail_pane

0x446f,	// (0x0007981c) list_cmail_pane

0xdfc8,	// (0x00083375) list_cmail_body_pane

0xdff0,	// (0x0008339d) list_single_cmail_header_caption_pane

0xe01c,	// (0x000833c9) list_single_cmail_header_detail_pane_ParamLimits

0xe01c,	// (0x000833c9) list_single_cmail_header_detail_pane

0x447f,	// (0x0007982c) list_single_cmail_header_caption_pane_t1

0x68fa,	// (0x0007bca7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x68fa,	// (0x0007bca7) list_single_cmail_header_detail_pane_g1

0xe055,	// (0x00083402) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe055,	// (0x00083402) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0008515f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0008515f) list_single_cmail_header_detail_pane_g

0x6910,	// (0x0007bcbd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6910,	// (0x0007bcbd) list_single_cmail_header_detail_pane_t1

0x6970,	// (0x0007bd1d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6970,	// (0x0007bd1d) list_single_cmail_header_editor_pane_bg

0x3f43,	// (0x000792f0) list_cmail_body_pane_g1

0x44a3,	// (0x00079850) list_cmail_body_pane_t1

0x3311,	// (0x000786be) list_single_cmail_header_editor_pane_bg_g1

0x0879,	// (0x00075c26) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3321,	// (0x000786ce) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3319,	// (0x000786c6) list_single_cmail_header_editor_pane_bg_g1_copy3

0x354d,	// (0x000788fa) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3341,	// (0x000786ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3331,	// (0x000786de) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3339,	// (0x000786e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0859,	// (0x00075c06) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe061,	// (0x0008340e) calenote_gesture_pane_ParamLimits

0xe061,	// (0x0008340e) calenote_gesture_pane

0xe07b,	// (0x00083428) calenote_window_pane_ParamLimits

0xe07b,	// (0x00083428) calenote_window_pane

0x44b1,	// (0x0007985e) popup_note_window_cp01

0xe093,	// (0x00083440) calenote_swipe_1_pane_ParamLimits

0xe093,	// (0x00083440) calenote_swipe_1_pane

0xddce,	// (0x0008317b) calenote_swipe_2_pane_ParamLimits

0xddce,	// (0x0008317b) calenote_swipe_2_pane

0x42be,	// (0x0007966b) calenote_swipe_1_pane_g1_ParamLimits

0x42be,	// (0x0007966b) calenote_swipe_1_pane_g1

0x42cb,	// (0x00079678) calenote_swipe_1_pane_g2_ParamLimits

0x42cb,	// (0x00079678) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00085083) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00085083) calenote_swipe_1_pane_g

0x44c3,	// (0x00079870) calenote_swipe_1_pane_t1_ParamLimits

0x44c3,	// (0x00079870) calenote_swipe_1_pane_t1

0x42be,	// (0x0007966b) calenote_swipe_2_pane_g1_ParamLimits

0x42be,	// (0x0007966b) calenote_swipe_2_pane_g1

0x44e2,	// (0x0007988f) calenote_swipe_2_pane_g2_ParamLimits

0x44e2,	// (0x0007988f) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0008516b) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0008516b) calenote_swipe_2_pane_g

0x44ee,	// (0x0007989b) calenote_swipe_2_pane_t1_ParamLimits

0x44ee,	// (0x0007989b) calenote_swipe_2_pane_t1

0xed1d,	// (0x000840ca) main_mup_navstr_pane

0xb028,	// (0x000803d5) main_mup3_pane_t7_ParamLimits

0xb028,	// (0x000803d5) main_mup3_pane_t7

0xba33,	// (0x00080de0) main_mp4_pane_g6_ParamLimits

0xba33,	// (0x00080de0) main_mp4_pane_g6

0xbda5,	// (0x00081152) main_image3_pane_t4_ParamLimits

0xbda5,	// (0x00081152) main_image3_pane_t4

0xe0a6,	// (0x00083453) popup_navstr_preview_pane_ParamLimits

0xe0a6,	// (0x00083453) popup_navstr_preview_pane

0xe0b2,	// (0x0008345f) scroll_navstr_pane_ParamLimits

0xe0b2,	// (0x0008345f) scroll_navstr_pane

0xed1d,	// (0x000840ca) bg_popup_preview_window_pane_cp04

0x4515,	// (0x000798c2) popup_navstr_preview_pane_t1

0xe0be,	// (0x0008346b) scroll_navstr_pane_g1_ParamLimits

0xe0be,	// (0x0008346b) scroll_navstr_pane_g1

0xe0cb,	// (0x00083478) scroll_navstr_pane_t1_ParamLimits

0xe0cb,	// (0x00083478) scroll_navstr_pane_t1

0x44ba,	// (0x00079867) bg_button_pane_cp014

0x44ba,	// (0x00079867) bg_button_pane_cp030

0x62fc,	// (0x0007b6a9) list_double_fisheye_pane_g4_ParamLimits

0x62fc,	// (0x0007b6a9) list_double_fisheye_pane_g4

0xdd06,	// (0x000830b3) list_double_fisheye_pane_g5_ParamLimits

0xdd06,	// (0x000830b3) list_double_fisheye_pane_g5

0x28a4,	// (0x00077c51) sp_fs_scroll_pane_cp03

0x43b1,	// (0x0007975e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x43bd,	// (0x0007976a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x000850a0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x43c9,	// (0x00079776) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4477,	// (0x00079824) sp_fs_scroll_pane_cp02

0x055f,	// (0x0007590c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x055f,	// (0x0007590c) popup_sp_fs_calendar_preview_list_single_pane

0xed1d,	// (0x000840ca) main_cam6_pano_pane

0xf07f,	// (0x0008442c) main_mup3_pane_ParamLimits

0xed1d,	// (0x000840ca) main_phacti_pane

0xd929,	// (0x00082cd6) bg_button_pane_cp11

0xd941,	// (0x00082cee) main_mobtv_info_pane_g2_ParamLimits

0xd941,	// (0x00082cee) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00085000) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00085000) main_mobtv_info_pane_g

0xdaf3,	// (0x00082ea0) sc_clock_pane_t5_ParamLimits

0xdaf3,	// (0x00082ea0) sc_clock_pane_t5

0xdb94,	// (0x00082f41) main_radioblah_pane_g1_ParamLimits

0x41ef,	// (0x0007959c) main_radioblah_pane_t3_ParamLimits

0x41ef,	// (0x0007959c) main_radioblah_pane_t3

0x4207,	// (0x000795b4) main_radioblah_pane_t4_ParamLimits

0x4207,	// (0x000795b4) main_radioblah_pane_t4

0xdbb2,	// (0x00082f5f) main_radioblah_text_pane_ParamLimits

0xdbb2,	// (0x00082f5f) main_radioblah_text_pane

0xdbbf,	// (0x00082f6c) main_radioblah_info_pane_g1_ParamLimits

0xdc54,	// (0x00083001) main_radioblah_info_pane_t4_ParamLimits

0xdc54,	// (0x00083001) main_radioblah_info_pane_t4

0xf07f,	// (0x0008442c) main_sp_fs_calendar_pane

0xe0dd,	// (0x0008348a) main_phacti_pane_g1

0xe0e5,	// (0x00083492) phacti_note_pane_ParamLimits

0xe0e5,	// (0x00083492) phacti_note_pane

0x452c,	// (0x000798d9) phacti_term_pane_ParamLimits

0x452c,	// (0x000798d9) phacti_term_pane

0x4541,	// (0x000798ee) phacti_note_pane_t1_ParamLimits

0x4541,	// (0x000798ee) phacti_note_pane_t1

0x6987,	// (0x0007bd34) phacti_term_pane_g1

0x698f,	// (0x0007bd3c) phacti_term_pane_t1_ParamLimits

0x698f,	// (0x0007bd3c) phacti_term_pane_t1

0x4558,	// (0x00079905) popup_sp_fs_calendar_preview_list_single_pane_g1

0x4560,	// (0x0007990d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x00085175) popup_sp_fs_calendar_preview_list_single_pane_g

0x4568,	// (0x00079915) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4568,	// (0x00079915) popup_sp_fs_calendar_preview_list_single_pane_t1

0x457e,	// (0x0007992b) aid_popup_sp_fs_bg_corner_pane

0x28c0,	// (0x00077c6d) popup_sp_fs_calendar_preview_bg_pane_g1

0xed1d,	// (0x000840ca) popup_sp_fs_calendar_preview_bg_pane

0xe0fb,	// (0x000834a8) popup_sp_fs_calendar_preview_list_pane

0x24ac,	// (0x00077859) bg_main_sp_fs_cale_pane_ParamLimits

0x24ac,	// (0x00077859) bg_main_sp_fs_cale_pane

0x69c2,	// (0x0007bd6f) listscroll_cale_mrui_pane_ParamLimits

0x69c2,	// (0x0007bd6f) listscroll_cale_mrui_pane

0x69d7,	// (0x0007bd84) listscroll_sp_fs_schedule_track_pane

0x69e0,	// (0x0007bd8d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x69e0,	// (0x0007bd8d) main_sp_fs_ctrlbar_pane_cp01

0x4586,	// (0x00079933) main_sp_fs_ribbon_pane

0x69f3,	// (0x0007bda0) popup_sp_fs_cale_preview_window

0xe150,	// (0x000834fd) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe150,	// (0x000834fd) list_single_sp_fs_schedule_track_pane

0x40cb,	// (0x00079478) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x40cb,	// (0x00079478) bg_sp_fs_highlight_list_pane_cp03

0xe173,	// (0x00083520) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe173,	// (0x00083520) list_single_sp_fs_schedule_track_pane_g1

0xe17f,	// (0x0008352c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe17f,	// (0x0008352c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0008517a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0008517a) list_single_sp_fs_schedule_track_pane_g

0xe18b,	// (0x00083538) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe18b,	// (0x00083538) list_single_sp_fs_schedule_track_pane_t1

0xe1a3,	// (0x00083550) sp_fs_schedule_track_pane_ParamLimits

0xe1a3,	// (0x00083550) sp_fs_schedule_track_pane

0x458e,	// (0x0007993b) sp_fs_schedule_track_pane_g1

0x4596,	// (0x00079943) sp_fs_schedule_track_pane_g2

0x459e,	// (0x0007994b) sp_fs_schedule_track_pane_g3

0x45a6,	// (0x00079953) sp_fs_schedule_track_pane_g4

0x45ae,	// (0x0007995b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0008517f) sp_fs_schedule_track_pane_g

0x3311,	// (0x000786be) bg_sp_fs_schedule_viewer_highlight_g1

0x0879,	// (0x00075c26) bg_sp_fs_schedule_viewer_highlight_g2

0x3319,	// (0x000786c6) bg_sp_fs_schedule_viewer_highlight_g3

0x3321,	// (0x000786ce) bg_sp_fs_schedule_viewer_highlight_g4

0x354d,	// (0x000788fa) bg_sp_fs_schedule_viewer_highlight_g5

0x3331,	// (0x000786de) bg_sp_fs_schedule_viewer_highlight_g6

0x3339,	// (0x000786e6) bg_sp_fs_schedule_viewer_highlight_g7

0x3341,	// (0x000786ee) bg_sp_fs_schedule_viewer_highlight_g8

0x0859,	// (0x00075c06) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0008518a) bg_sp_fs_schedule_viewer_highlight_g

0xed1d,	// (0x000840ca) bg_main_sp_fs_ribbon_pane

0xe1b3,	// (0x00083560) main_sp_fs_ribbon_pane_g1

0x45b6,	// (0x00079963) main_sp_fs_ribbon_pane_t1

0xe1bc,	// (0x00083569) main_sp_fs_ribbon_pane_t2

0x45c5,	// (0x00079972) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0008519d) main_sp_fs_ribbon_pane_t

0x45d4,	// (0x00079981) main_sp_fs_ribbon_scheduler_pane

0x45dc,	// (0x00079989) bg_main_sp_fs_ribbon_pane_g1

0x45e5,	// (0x00079992) bg_main_sp_fs_ribbon_pane_g2

0x45ee,	// (0x0007999b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x000851a4) bg_main_sp_fs_ribbon_pane_g

0x45f6,	// (0x000799a3) main_sp_fs_ribbon_scheduler_pane_g1

0x45ff,	// (0x000799ac) main_sp_fs_ribbon_scheduler_pane_g2

0x4608,	// (0x000799b5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x000851ab) main_sp_fs_ribbon_scheduler_pane_g

0x4611,	// (0x000799be) list_cale_mrui_pane

0xe1cb,	// (0x00083578) sp_fs_scroll_pane_cp07_ParamLimits

0xe1cb,	// (0x00083578) sp_fs_scroll_pane_cp07

0xe1e7,	// (0x00083594) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe1e7,	// (0x00083594) bg_sp_fs_schedule_viewer_highlight

0x461e,	// (0x000799cb) list_single_sp_fs_schedule_track_pane_cp01

0x4626,	// (0x000799d3) list_sp_fs_schedule_track_pane

0x462e,	// (0x000799db) sp_fs_scroll_pane_cp06_ParamLimits

0x462e,	// (0x000799db) sp_fs_scroll_pane_cp06

0x28c0,	// (0x00077c6d) bgmain_sp_fs_calendar_pane_g1

0x6a05,	// (0x0007bdb2) list_single_cale_mrui_pane_ParamLimits

0x6a05,	// (0x0007bdb2) list_single_cale_mrui_pane

0x6a33,	// (0x0007bde0) list_single_cale_mrui_row_pane_ParamLimits

0x6a33,	// (0x0007bde0) list_single_cale_mrui_row_pane

0x6a40,	// (0x0007bded) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6a40,	// (0x0007bded) list_single_cale_mrui_row_pane_g1

0x6a78,	// (0x0007be25) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6a78,	// (0x0007be25) list_single_cale_mrui_row_pane_t1

0x6a8a,	// (0x0007be37) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6a8a,	// (0x0007be37) list_single_cale_mrui_row_pane_t2

0x6af0,	// (0x0007be9d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x6af0,	// (0x0007be9d) list_single_cale_mrui_row_pane_t3

0x6b1f,	// (0x0007becc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6b1f,	// (0x0007becc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x000851b9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x000851b9) list_single_cale_mrui_row_pane_t

0x6b4e,	// (0x0007befb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6b4e,	// (0x0007befb) list_single_cmail_header_editor_pane_bg_cp01

0x6b6e,	// (0x0007bf1b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6b6e,	// (0x0007bf1b) list_single_cmail_header_editor_pane_bg_cp02

0xe1f4,	// (0x000835a1) main_radioblah_text_pane_t1_ParamLimits

0xe1f4,	// (0x000835a1) main_radioblah_text_pane_t1

0x464d,	// (0x000799fa) cam6_indi_pane_cp01

0x4655,	// (0x00079a02) cam6_mode_pane_cp01

0x465d,	// (0x00079a0a) cam6_pano_pane

0x4666,	// (0x00079a13) cam6_zoom_pane_cp01

0x466e,	// (0x00079a1b) cam6_pano_image_pane

0x4679,	// (0x00079a26) cam6_pano_pane_g1

0x3f43,	// (0x000792f0) cam6_pano_pane_g2

0x4682,	// (0x00079a2f) cam6_pano_pane_g3

0x468b,	// (0x00079a38) cam6_pano_pane_g4

0x2e6b,	// (0x00078218) cam6_pano_pane_g5

0x4694,	// (0x00079a41) cam6_pano_pane_g6

0x469e,	// (0x00079a4b) cam6_pano_pane_g7

0x46a6,	// (0x00079a53) cam6_pano_pane_g8

0x46af,	// (0x00079a5c) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x000851c2) cam6_pano_pane_g

0xed1d,	// (0x000840ca) main_browser_tag_pane

0x450d,	// (0x000798ba) grid_navstr_albumart_pane

0x46ba,	// (0x00079a67) cell_navstr_albumart_pane_ParamLimits

0x46ba,	// (0x00079a67) cell_navstr_albumart_pane

0x46da,	// (0x00079a87) cell_navstr_albumart_pane_g1

0x227d,	// (0x0007762a) cell_navstr_albumart_pane_g2

0x228d,	// (0x0007763a) cell_navstr_albumart_pane_g3

0x2285,	// (0x00077632) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x000851d5) cell_navstr_albumart_pane_g

0xe20f,	// (0x000835bc) bt_list_pane_ParamLimits

0xe20f,	// (0x000835bc) bt_list_pane

0xe230,	// (0x000835dd) bt_list_pane_t1

0xe23f,	// (0x000835ec) bt_list_pane_t2

0x0001,

0xfe31,	// (0x000851de) bt_list_pane_t

0xed1d,	// (0x000840ca) main_cale_prevew_pane

0xe24e,	// (0x000835fb) popup_cale_preview_window_ParamLimits

0xe24e,	// (0x000835fb) popup_cale_preview_window

0xf07f,	// (0x0008442c) bg_popup_preview_window_pane_cp05_ParamLimits

0xf07f,	// (0x0008442c) bg_popup_preview_window_pane_cp05

0x46e2,	// (0x00079a8f) list_cale_preview_pane_ParamLimits

0x46e2,	// (0x00079a8f) list_cale_preview_pane

0xe267,	// (0x00083614) list_double_cale_preview_pane_ParamLimits

0xe267,	// (0x00083614) list_double_cale_preview_pane

0xe279,	// (0x00083626) list_single_cale_preview_pane_ParamLimits

0xe279,	// (0x00083626) list_single_cale_preview_pane

0xe28d,	// (0x0008363a) list_single_cale_preview_pane_g1

0xe295,	// (0x00083642) list_single_cale_preview_pane_t1_ParamLimits

0xe295,	// (0x00083642) list_single_cale_preview_pane_t1

0xe2aa,	// (0x00083657) list_double_cale_preview_pane_g1

0xe2b2,	// (0x0008365f) list_double_cale_preview_pane_t1_ParamLimits

0xe2b2,	// (0x0008365f) list_double_cale_preview_pane_t1

0xe2c7,	// (0x00083674) list_double_cale_preview_pane_t2_ParamLimits

0xe2c7,	// (0x00083674) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x000851e3) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x000851e3) list_double_cale_preview_pane_t

0xed1d,	// (0x000840ca) main_ezdial_pane

0xf07f,	// (0x0008442c) main_sp_fs_email_pane_ParamLimits

0xde34,	// (0x000831e1) cmail_ddmenu_btn01_pane_ParamLimits

0xde34,	// (0x000831e1) cmail_ddmenu_btn01_pane

0xde49,	// (0x000831f6) cmail_ddmenu_btn02_pane_ParamLimits

0xde49,	// (0x000831f6) cmail_ddmenu_btn02_pane

0xde61,	// (0x0008320e) cmail_ddmenu_btn03_pane_ParamLimits

0xde61,	// (0x0008320e) cmail_ddmenu_btn03_pane

0xde89,	// (0x00083236) main_sp_fs_ctrlbar_pane_ParamLimits

0xde9f,	// (0x0008324c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdfc8,	// (0x00083375) list_cmail_body_pane_ParamLimits

0x448d,	// (0x0007983a) bg_button_pane_cp12

0x4496,	// (0x00079843) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4496,	// (0x00079843) list_single_cmail_header_detail_pane_g3

0x694c,	// (0x0007bcf9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x694c,	// (0x0007bcf9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x00085166) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x00085166) list_single_cmail_header_detail_pane_t

0x69a4,	// (0x0007bd51) phacti_term_pane_t2_ParamLimits

0x69a4,	// (0x0007bd51) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x00085170) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x00085170) phacti_term_pane_t

0x46ee,	// (0x00079a9b) aid_size_list_single_double

0xe2df,	// (0x0008368c) popup_ezdial_listscroll_window

0xe303,	// (0x000836b0) popup_number_entry_window_cp01

0x0620,	// (0x000759cd) bg_popup_call_pane_cp09

0x46fa,	// (0x00079aa7) ezdial_list_pane

0x4702,	// (0x00079aaf) scroll_pane_cp23

0x2699,	// (0x00077a46) bg_button_pane_cp028_ParamLimits

0x2699,	// (0x00077a46) bg_button_pane_cp028

0xe311,	// (0x000836be) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe311,	// (0x000836be) cmail_ddmenu_btn01_pane_g1

0xe321,	// (0x000836ce) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe321,	// (0x000836ce) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x000851e8) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x000851e8) cmail_ddmenu_btn01_pane_g

0x470a,	// (0x00079ab7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x470a,	// (0x00079ab7) cmail_ddmenu_btn01_pane_t1

0x24ac,	// (0x00077859) bg_button_pane_cp029_ParamLimits

0x24ac,	// (0x00077859) bg_button_pane_cp029

0xe321,	// (0x000836ce) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe321,	// (0x000836ce) cmail_ddmenu_btn02_pane_g1

0xe33a,	// (0x000836e7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe33a,	// (0x000836e7) cmail_ddmenu_btn02_pane_t1

0x40cb,	// (0x00079478) bg_button_pane_cp031_ParamLimits

0x40cb,	// (0x00079478) bg_button_pane_cp031

0xe321,	// (0x000836ce) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe321,	// (0x000836ce) cmail_ddmenu_btn03_pane_g1

0xe33a,	// (0x000836e7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe33a,	// (0x000836e7) cmail_ddmenu_btn03_pane_t1

0xbc50,	// (0x00080ffd) cell_dialer2_keypad_pane_t1_ParamLimits

0xbc6a,	// (0x00081017) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbc6a,	// (0x00081017) cell_dialer2_keypad_pane_t1_copy1

0xd76a,	// (0x00082b17) ncimui_group_button_pane

0xf07f,	// (0x0008442c) main_sp_fs_calendar_pane_ParamLimits

0xdff0,	// (0x0008339d) list_single_cmail_header_caption_pane_ParamLimits

0x69b9,	// (0x0007bd66) aid_recal_txt_sm_pane

0xed1d,	// (0x000840ca) mian_recal_day_pane

0x69f3,	// (0x0007bda0) popup_sp_fs_cale_preview_window_ParamLimits

0x471f,	// (0x00079acc) list_recal_day_pane

0x6ba5,	// (0x0007bf52) list_single_recal_day_pane_ParamLimits

0x6ba5,	// (0x0007bf52) list_single_recal_day_pane

0x4746,	// (0x00079af3) list_single_recal_day_pane_g1_ParamLimits

0x4746,	// (0x00079af3) list_single_recal_day_pane_g1

0x6bb7,	// (0x0007bf64) list_single_recal_day_pane_g2_ParamLimits

0x6bb7,	// (0x0007bf64) list_single_recal_day_pane_g2

0x6bc3,	// (0x0007bf70) list_single_recal_day_pane_g3_ParamLimits

0x6bc3,	// (0x0007bf70) list_single_recal_day_pane_g3

0x6bcf,	// (0x0007bf7c) list_single_recal_day_pane_g4_ParamLimits

0x6bcf,	// (0x0007bf7c) list_single_recal_day_pane_g4

0x6bdd,	// (0x0007bf8a) list_single_recal_day_pane_g5_ParamLimits

0x6bdd,	// (0x0007bf8a) list_single_recal_day_pane_g5

0x6bf3,	// (0x0007bfa0) list_single_recal_day_pane_g6_ParamLimits

0x6bf3,	// (0x0007bfa0) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x000851f7) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x000851f7) list_single_recal_day_pane_g

0x6c07,	// (0x0007bfb4) list_single_recal_day_pane_t1

0x6c19,	// (0x0007bfc6) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x00085202) list_single_recal_day_pane_t

0xe35e,	// (0x0008370b) ncimui_query_button_pane_ParamLimits

0xe35e,	// (0x0008370b) ncimui_query_button_pane

0xe36e,	// (0x0008371b) ncimui_query_button_pane_t1_ParamLimits

0xe36e,	// (0x0008371b) ncimui_query_button_pane_t1

0x4752,	// (0x00079aff) ncimui_query_button_pane_t2_ParamLimits

0x4752,	// (0x00079aff) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x00085207) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x00085207) ncimui_query_button_pane_t

0xe381,	// (0x0008372e) query_button_pane_ParamLimits

0xe381,	// (0x0008372e) query_button_pane

0xed1d,	// (0x000840ca) bg_button_pane_cp0028

0x4765,	// (0x00079b12) query_button_pane_t1

0xa003,	// (0x0007f3b0) main_tport_pane_ParamLimits

0xded2,	// (0x0008327f) bg_popup_window_pane_cp01_ParamLimits

0xded2,	// (0x0008327f) bg_popup_window_pane_cp01

0xdee0,	// (0x0008328d) heading_pane_cp08_ParamLimits

0xdee0,	// (0x0008328d) heading_pane_cp08

0xdeee,	// (0x0008329b) heading_pane_cp07_ParamLimits

0xdeee,	// (0x0008329b) heading_pane_cp07

0xdf5d,	// (0x0008330a) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x00085153) cell_tport_appsw_pane_g

0x5d1b,	// (0x0007b0c8) input_candi_list_open_g1

0x0a3c,	// (0x00075de9) list_cale_time_pane_g6_ParamLimits

0x0a3c,	// (0x00075de9) list_cale_time_pane_g6

0xaa8a,	// (0x0007fe37) aid_size_touch_calib_1_ParamLimits

0xaa8a,	// (0x0007fe37) aid_size_touch_calib_1

0xaa96,	// (0x0007fe43) aid_size_touch_calib_2_ParamLimits

0xaa96,	// (0x0007fe43) aid_size_touch_calib_2

0xaaa4,	// (0x0007fe51) aid_size_touch_calib_3_ParamLimits

0xaaa4,	// (0x0007fe51) aid_size_touch_calib_3

0xaab4,	// (0x0007fe61) aid_size_touch_calib_4_ParamLimits

0xaab4,	// (0x0007fe61) aid_size_touch_calib_4

0xaac2,	// (0x0007fe6f) main_touch_calib_button_group_pane_ParamLimits

0xaac2,	// (0x0007fe6f) main_touch_calib_button_group_pane

0xaad0,	// (0x0007fe7d) main_touch_calib_pane_g1_ParamLimits

0xaadc,	// (0x0007fe89) main_touch_calib_pane_g2_ParamLimits

0xaae8,	// (0x0007fe95) main_touch_calib_pane_g3_ParamLimits

0xaaf4,	// (0x0007fea1) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00084b11) main_touch_calib_pane_g_ParamLimits

0xab00,	// (0x0007fead) main_touch_calib_pane_t1_ParamLimits

0xab19,	// (0x0007fec6) main_touch_calib_pane_t2_ParamLimits

0xab32,	// (0x0007fedf) main_touch_calib_pane_t3_ParamLimits

0xab48,	// (0x0007fef5) main_touch_calib_pane_t4_ParamLimits

0xab5e,	// (0x0007ff0b) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00084b1a) main_touch_calib_pane_t_ParamLimits

0x2c0e,	// (0x00077fbb) list_single_fp_cale_pane_g3_ParamLimits

0x2c0e,	// (0x00077fbb) list_single_fp_cale_pane_g3

0xf07f,	// (0x0008442c) bg_button_pane_cp012_ParamLimits

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp03_ParamLimits

0xca15,	// (0x00081dc2) cell_vitu2_function_top_pane_g1_ParamLimits

0xf07f,	// (0x0008442c) bg_vkb2_func_pane_cp04_ParamLimits

0xd6f2,	// (0x00082a9f) main_ncimui_button_group_pane_ParamLimits

0xd6f2,	// (0x00082a9f) main_ncimui_button_group_pane

0xd758,	// (0x00082b05) main_ncimui_pane_t3_ParamLimits

0xd758,	// (0x00082b05) main_ncimui_pane_t3

0x4523,	// (0x000798d0) phacti_button_group_pane

0x46ee,	// (0x00079a9b) aid_size_list_single_double_ParamLimits

0xe2df,	// (0x0008368c) popup_ezdial_listscroll_window_ParamLimits

0xe303,	// (0x000836b0) popup_number_entry_window_cp01_ParamLimits

0xe38e,	// (0x0008373b) phacti_button_pane_ParamLimits

0xe38e,	// (0x0008373b) phacti_button_pane

0xed1d,	// (0x000840ca) bg_button_pane_cp14

0x4773,	// (0x00079b20) phacti_button_pane_t1

0xe39f,	// (0x0008374c) main_touch_calib_button_pane_ParamLimits

0xe39f,	// (0x0008374c) main_touch_calib_button_pane

0x042b,	// (0x000757d8) bg_button_pane_cp18_ParamLimits

0x042b,	// (0x000757d8) bg_button_pane_cp18

0x4781,	// (0x00079b2e) main_touch_calib_button_pane_t1_ParamLimits

0x4781,	// (0x00079b2e) main_touch_calib_button_pane_t1

0x4797,	// (0x00079b44) main_touch_calib_button_pane_t2_ParamLimits

0x4797,	// (0x00079b44) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0008520c) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0008520c) main_touch_calib_button_pane_t

0xed1d,	// (0x000840ca) cell_ncimui_button_pane

0xed1d,	// (0x000840ca) bg_button_pane_cp032

0x47b5,	// (0x00079b62) cell_ncimui_button_pane_t1

0xbcc6,	// (0x00081073) image3_infobar_pane_ParamLimits

0xbcc6,	// (0x00081073) image3_infobar_pane

0xdb15,	// (0x00082ec2) fs_bigclock_status_pane_ParamLimits

0xdb15,	// (0x00082ec2) fs_bigclock_status_pane

0xdb22,	// (0x00082ecf) main_fs_bigclock_clock_pane_ParamLimits

0xdb22,	// (0x00082ecf) main_fs_bigclock_clock_pane

0xdb36,	// (0x00082ee3) main_fs_bigclock_indi_pane_ParamLimits

0xdb36,	// (0x00082ee3) main_fs_bigclock_indi_pane

0xdb5e,	// (0x00082f0b) main_fs_bigclock_swipe_pane_ParamLimits

0xdb5e,	// (0x00082f0b) main_fs_bigclock_swipe_pane

0xed1d,	// (0x000840ca) main_fs_clock_dumped_data

0x4050,	// (0x000793fd) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4050,	// (0x000793fd) list_single_fs_bigclock_indicator_pane_g1

0x406c,	// (0x00079419) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x406c,	// (0x00079419) list_single_fs_bigclock_indicator_pane_g2

0x4086,	// (0x00079433) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4086,	// (0x00079433) list_single_fs_bigclock_indicator_pane_g3

0x40a0,	// (0x0007944d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x40a0,	// (0x0007944d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00085034) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00085034) list_single_fs_bigclock_indicator_pane_g

0x40d9,	// (0x00079486) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x40d9,	// (0x00079486) list_single_fs_bigclock_indicator_pane_t1

0x4101,	// (0x000794ae) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4101,	// (0x000794ae) list_single_fs_bigclock_indicator_pane_t2

0x4129,	// (0x000794d6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x4129,	// (0x000794d6) list_single_fs_bigclock_indicator_pane_t3

0x4151,	// (0x000794fe) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x4151,	// (0x000794fe) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0008503f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0008503f) list_single_fs_bigclock_indicator_pane_t

0x47c3,	// (0x00079b70) image3_infobar_fav_pane_ParamLimits

0x47c3,	// (0x00079b70) image3_infobar_fav_pane

0x47d3,	// (0x00079b80) image3_infobar_loc_pane_ParamLimits

0x47d3,	// (0x00079b80) image3_infobar_loc_pane

0x47e7,	// (0x00079b94) image3_infobar_time_pane_ParamLimits

0x47e7,	// (0x00079b94) image3_infobar_time_pane

0x28c0,	// (0x00077c6d) image3_infobar_time_pane_g1

0x47f7,	// (0x00079ba4) image3_infobar_time_pane_t1

0x28c0,	// (0x00077c6d) image3_infobar_loc_pane_g1

0x4805,	// (0x00079bb2) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x00085211) image3_infobar_loc_pane_g

0x480d,	// (0x00079bba) image3_infobar_loc_pane_t1

0x28c0,	// (0x00077c6d) image3_infobar_fav_pane_g1

0x481b,	// (0x00079bc8) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x00085216) image3_infobar_fav_pane_g

0x4823,	// (0x00079bd0) fs_bigclock_status_battery_pane

0x482c,	// (0x00079bd9) fs_bigclock_status_signal_pane

0x4835,	// (0x00079be2) fs_bigclock_status_title_pane

0x483e,	// (0x00079beb) fs_bigclock_status_signal_pane_g1

0x4847,	// (0x00079bf4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0008521b) fs_bigclock_status_signal_pane_g

0x484f,	// (0x00079bfc) fs_bigclock_status_battery_pane_g1

0x4858,	// (0x00079c05) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x00085220) fs_bigclock_status_battery_pane_g

0x4860,	// (0x00079c0d) fs_bigclock_status_title_pane_t1

0xe3af,	// (0x0008375c) main_fs_bigclock_clock_pane_g1

0xe3af,	// (0x0008375c) main_fs_bigclock_clock_pane_g2

0xe3bc,	// (0x00083769) main_fs_bigclock_clock_pane_g3

0xe3bc,	// (0x00083769) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x00085225) main_fs_bigclock_clock_pane_g

0xe3c8,	// (0x00083775) main_fs_bigclock_clock_pane_t1

0xe3db,	// (0x00083788) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0008522e) main_fs_bigclock_clock_pane_t

0x486e,	// (0x00079c1b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x486e,	// (0x00079c1b) list_single_fs_bigclock_indicator_pane

0x487f,	// (0x00079c2c) list_single_fs_bigclock_pane_ParamLimits

0x487f,	// (0x00079c2c) list_single_fs_bigclock_pane

0x48a5,	// (0x00079c52) main_fs_bigclock_indicator_pane_t1

0x48b4,	// (0x00079c61) list_single_fs_bigclock_pane_g1

0x48bc,	// (0x00079c69) list_single_fs_bigclock_pane_t1

0x28c0,	// (0x00077c6d) main_fs_bigclock_swipe_pane_g1

0x48ff,	// (0x00079cac) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0008523f) main_fs_bigclock_swipe_pane_g

0x4907,	// (0x00079cb4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4907,	// (0x00079cb4) main_fs_bigclock_swipe_pane_t1

0x9076,	// (0x0007e423) call_type_pane_ParamLimits

0xed1d,	// (0x000840ca) main_btmg_pane

0x6a6c,	// (0x0007be19) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6a6c,	// (0x0007be19) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x000851b2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x000851b2) list_single_cale_mrui_row_pane_g

0x6b94,	// (0x0007bf41) list_recal_vselct_arw_lo_pane

0x473e,	// (0x00079aeb) list_recal_vselct_arw_up_pane

0x6b9c,	// (0x0007bf49) list_recal_vselct_pane

0xe432,	// (0x000837df) btmg_button_pane

0xe43e,	// (0x000837eb) main_btmg_pane_g1

0xed1d,	// (0x000840ca) bg_button_pane_cp044

0x4924,	// (0x00079cd1) btmg_button_pane_t1

0x2498,	// (0x00077845) aid_listscroll_gen

0xf07f,	// (0x0008442c) main_cntbar_detail_pane

0x446f,	// (0x0007981c) list_cmail_folder_pane

0x28a4,	// (0x00077c51) sp_fs_scroll_pane_cp03_ParamLimits

0x6c2b,	// (0x0007bfd8) list_single_fs_dyc_pane_cp01_ParamLimits

0x6c2b,	// (0x0007bfd8) list_single_fs_dyc_pane_cp01

0x4932,	// (0x00079cdf) aid_size_cmail_indent

0x6c53,	// (0x0007c000) list_single_dyc_row_pane_cp01

0xe466,	// (0x00083813) cntbar_detail_list_pane_ParamLimits

0xe466,	// (0x00083813) cntbar_detail_list_pane

0xe4a0,	// (0x0008384d) main_cntbar_detail_cont_pane_ParamLimits

0xe4a0,	// (0x0008384d) main_cntbar_detail_cont_pane

0x906a,	// (0x0007e417) scroll_pane_cp032_ParamLimits

0x906a,	// (0x0007e417) scroll_pane_cp032

0xe4ac,	// (0x00083859) cntbar_detail_list_event_pane_ParamLimits

0xe4ac,	// (0x00083859) cntbar_detail_list_event_pane

0xe472,	// (0x0008381f) cntbar_detail_list_shct_pane

0x08c7,	// (0x00075c74) aid_list_gen

0x493b,	// (0x00079ce8) aid_scroll

0x4944,	// (0x00079cf1) aid_size_touch_scroll_bar

0x61c2,	// (0x0007b56f) aid_list_double

0xe4c0,	// (0x0008386d) aid_list_single

0xcfb1,	// (0x0008235e) aid_list_single_lg

0x6c5c,	// (0x0007c009) aid_list_z_g_a_sm

0xe4c9,	// (0x00083876) aid_list_z_g_d

0x6c64,	// (0x0007c011) aid_txt_z_prm

0x6c72,	// (0x0007c01f) aid_txt_z_prm_cp01

0x6c80,	// (0x0007c02d) aid_txt_z_sec

0xe4d1,	// (0x0008387e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe4d1,	// (0x0008387e) main_cntbar_detail_cont_pane_g1

0xe4de,	// (0x0008388b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe4de,	// (0x0008388b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x00085244) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x00085244) main_cntbar_detail_cont_pane_g

0x494d,	// (0x00079cfa) main_cntbar_detail_cont_pane_t1

0x495b,	// (0x00079d08) main_cntbar_detail_cont_pane_t2

0x4969,	// (0x00079d16) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x00085249) main_cntbar_detail_cont_pane_t

0xe4ea,	// (0x00083897) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe4ea,	// (0x00083897) cell_cntbar_detail_list_shct_pane

0x4977,	// (0x00079d24) cntbar_detail_list_shct_pane_g1

0x4980,	// (0x00079d2d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x00085250) cntbar_detail_list_shct_pane_g

0xe4fe,	// (0x000838ab) cntbar_detail_list_event_pane_g1_ParamLimits

0xe4fe,	// (0x000838ab) cntbar_detail_list_event_pane_g1

0xe50a,	// (0x000838b7) cntbar_detail_list_event_pane_g2_ParamLimits

0xe50a,	// (0x000838b7) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x00085255) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x00085255) cntbar_detail_list_event_pane_g

0xe576,	// (0x00083923) cntbar_detail_list_event_pane_t1_ParamLimits

0xe576,	// (0x00083923) cntbar_detail_list_event_pane_t1

0xe58b,	// (0x00083938) cntbar_detail_list_event_pane_t2_ParamLimits

0xe58b,	// (0x00083938) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x00085262) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x00085262) cntbar_detail_list_event_pane_t

0x28c0,	// (0x00077c6d) cell_cntbar_detail_list_shct_pane_g1

0x1013,	// (0x000763c0) navi_pane_mv_g3

0xf07f,	// (0x0008442c) main_cntbar_detail_pane_ParamLimits

0xed1d,	// (0x000840ca) main_notif_wgt_pane

0xb97a,	// (0x00080d27) aid_tch_main_mp4_pane_g4

0xbbaf,	// (0x00080f5c) popup_slider_window_cp02

0x6b8a,	// (0x0007bf37) list_recal_day_event_pane

0xe446,	// (0x000837f3) cntbar_detail_btn_pane_ParamLimits

0xe446,	// (0x000837f3) cntbar_detail_btn_pane

0xe456,	// (0x00083803) cntbar_detail_btn_pane_cp01_ParamLimits

0xe456,	// (0x00083803) cntbar_detail_btn_pane_cp01

0xe472,	// (0x0008381f) cntbar_detail_list_shct_pane_ParamLimits

0xe47e,	// (0x0008382b) cntbar_detail_pane_g1_ParamLimits

0xe47e,	// (0x0008382b) cntbar_detail_pane_g1

0xe48a,	// (0x00083837) cntbar_detail_pane_t1_ParamLimits

0xe48a,	// (0x00083837) cntbar_detail_pane_t1

0xe516,	// (0x000838c3) cntbar_detail_list_event_pane_g3_ParamLimits

0xe516,	// (0x000838c3) cntbar_detail_list_event_pane_g3

0xe52e,	// (0x000838db) cntbar_detail_list_event_pane_g4_ParamLimits

0xe52e,	// (0x000838db) cntbar_detail_list_event_pane_g4

0xe546,	// (0x000838f3) cntbar_detail_list_event_pane_g5_ParamLimits

0xe546,	// (0x000838f3) cntbar_detail_list_event_pane_g5

0xe55e,	// (0x0008390b) cntbar_detail_list_event_pane_g6_ParamLimits

0xe55e,	// (0x0008390b) cntbar_detail_list_event_pane_g6

0xe5a0,	// (0x0008394d) cntbar_detail_list_event_pane_t3_ParamLimits

0xe5a0,	// (0x0008394d) cntbar_detail_list_event_pane_t3

0xe5b2,	// (0x0008395f) popup_notif_wgt_window_ParamLimits

0xe5b2,	// (0x0008395f) popup_notif_wgt_window

0xe5c2,	// (0x0008396f) popup_submenu_window_cp01_ParamLimits

0xe5c2,	// (0x0008396f) popup_submenu_window_cp01

0x0620,	// (0x000759cd) bg_popup_window_pane_cp10

0x4989,	// (0x00079d36) listscroll_notif_wgt_pane

0x499b,	// (0x00079d48) list_notif_wgt_window

0x49a4,	// (0x00079d51) scroll_pane_cp033

0xe5d0,	// (0x0008397d) list_notif_wgt_row_pane_ParamLimits

0xe5d0,	// (0x0008397d) list_notif_wgt_row_pane

0x49ad,	// (0x00079d5a) aid_size_list_notif_wgt_del

0x49ba,	// (0x00079d67) list_notif_wgt_row_pane_g1

0x49c6,	// (0x00079d73) list_notif_wgt_row_pane_g2

0x49d5,	// (0x00079d82) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x00085269) list_notif_wgt_row_pane_g

0x49e2,	// (0x00079d8f) list_notif_wgt_row_pane_t1

0x49f8,	// (0x00079da5) list_notif_wgt_row_pane_t2

0x4a0a,	// (0x00079db7) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x00085270) list_notif_wgt_row_pane_t

0x3567,	// (0x00078914) list_recal_day_event_pane_g1

0x4a1c,	// (0x00079dc9) list_recal_day_event_pane_t1

0xed1d,	// (0x000840ca) bg_button_pane_cp045

0xe5e2,	// (0x0008398f) cntbar_detail_btn_pane_t1

0x24ac,	// (0x00077859) main_callh_pane_ParamLimits

0x24ac,	// (0x00077859) main_callh_pane

0xed1d,	// (0x000840ca) main_coverflow0_pane

0xed1d,	// (0x000840ca) main_wgtman_pane

0xdb76,	// (0x00082f23) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdb76,	// (0x00082f23) main_fs_bigclock_unlock_btn_pane

0xdf55,	// (0x00083302) bg_button_pane_cp16

0xdf65,	// (0x00083312) cell_tport_appsw_pane_g3

0xe5f0,	// (0x0008399d) cf0_flow_pane_ParamLimits

0xe5f0,	// (0x0008399d) cf0_flow_pane

0x4a2b,	// (0x00079dd8) listscroll_cf0_pane

0x4a36,	// (0x00079de3) main_cf0_pane_g1

0xe5ff,	// (0x000839ac) main_cf0_pane_t1_ParamLimits

0xe5ff,	// (0x000839ac) main_cf0_pane_t1

0xe613,	// (0x000839c0) main_cf0_pane_t2_ParamLimits

0xe613,	// (0x000839c0) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0008527c) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0008527c) main_cf0_pane_t

0x4a48,	// (0x00079df5) scroll_pane_cp11

0xe627,	// (0x000839d4) cf0_flow_pane_g1

0xe62f,	// (0x000839dc) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00085281) cf0_flow_pane_g

0xe637,	// (0x000839e4) cf0_flow_pane_t1

0xed1d,	// (0x000840ca) main_call6_pane

0xed1d,	// (0x000840ca) main_calllock_pane

0xe645,	// (0x000839f2) call6_btn_grp_pane_ParamLimits

0xe645,	// (0x000839f2) call6_btn_grp_pane

0xe654,	// (0x00083a01) call6_pane_g1_ParamLimits

0xe654,	// (0x00083a01) call6_pane_g1

0xe663,	// (0x00083a10) popup_call6_1st_window_ParamLimits

0xe663,	// (0x00083a10) popup_call6_1st_window

0xe671,	// (0x00083a1e) popup_call6_2nd_window_ParamLimits

0xe671,	// (0x00083a1e) popup_call6_2nd_window

0xe67f,	// (0x00083a2c) cell_call6_btn_pane_ParamLimits

0xe67f,	// (0x00083a2c) cell_call6_btn_pane

0x0620,	// (0x000759cd) bg_popup_call2_in_pane_cp03

0x4a53,	// (0x00079e00) popup_call6_1st_window_g1

0x4a5b,	// (0x00079e08) popup_call6_1st_window_g2

0x4a63,	// (0x00079e10) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00085286) popup_call6_1st_window_g

0x4a6b,	// (0x00079e18) popup_call6_1st_window_t1

0x4a7a,	// (0x00079e27) popup_call6_1st_window_t2

0x4a8a,	// (0x00079e37) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0008528d) popup_call6_1st_window_t

0x0620,	// (0x000759cd) bg_popup_call2_in_pane_cp04

0x4a53,	// (0x00079e00) popup_call6_2nd_window_g1

0x4a5b,	// (0x00079e08) popup_call6_2nd_window_g2

0x4a63,	// (0x00079e10) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00085286) popup_call6_2nd_window_g

0x4a6b,	// (0x00079e18) popup_call6_2nd_window_t1

0xed1d,	// (0x000840ca) bg_button_pane_cp15

0x4a9a,	// (0x00079e47) cell_call6_btn_pane_g1

0x4aa3,	// (0x00079e50) cell_call6_btn_pane_t1

0xe68e,	// (0x00083a3b) listscroll_wgtman_pane_ParamLimits

0xe68e,	// (0x00083a3b) listscroll_wgtman_pane

0xe6aa,	// (0x00083a57) wgtman_btn_pane_ParamLimits

0xe6aa,	// (0x00083a57) wgtman_btn_pane

0x0e27,	// (0x000761d4) aid_scroll_copy1

0x4ab2,	// (0x00079e5f) list_wgtman_pane

0xe6df,	// (0x00083a8c) wgtman_btn_pane_g1_ParamLimits

0xe6df,	// (0x00083a8c) wgtman_btn_pane_g1

0xe707,	// (0x00083ab4) wgtman_btn_pane_t1_ParamLimits

0xe707,	// (0x00083ab4) wgtman_btn_pane_t1

0x4abc,	// (0x00079e69) wgtman_btn_pane_t2_ParamLimits

0x4abc,	// (0x00079e69) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00085294) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00085294) wgtman_btn_pane_t

0xe73e,	// (0x00083aeb) listrow_wgtman_pane_ParamLimits

0xe73e,	// (0x00083aeb) listrow_wgtman_pane

0xe75a,	// (0x00083b07) listrow_wgtman_pane_g1

0xe767,	// (0x00083b14) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00085299) listrow_wgtman_pane_g

0x6c8e,	// (0x0007c03b) listrow_wgtman_pane_t1

0x6ca6,	// (0x0007c053) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0008529e) listrow_wgtman_pane_t

0x6ccc,	// (0x0007c079) wait_bar_pane_cp09

0x4ad3,	// (0x00079e80) main_calllock_btn_pane

0x4add,	// (0x00079e8a) main_calllock_pane_g1

0xed1d,	// (0x000840ca) bg_button_pane_cp17

0x4ae8,	// (0x00079e95) main_calllock_btn_pane_g1

0x4af1,	// (0x00079e9e) main_calllock_btn_pane_t1

0xed1d,	// (0x000840ca) main_dialer3_pane

0xed1d,	// (0x000840ca) main_fmrd2_pane

0x28c0,	// (0x00077c6d) main_fs_bigclock_unlock_btn_pane_g1

0xe78d,	// (0x00083b3a) main_fs_bigclock_unlock_btn_pane_t1

0xe79b,	// (0x00083b48) area_fmrd2_info_pane_ParamLimits

0xe79b,	// (0x00083b48) area_fmrd2_info_pane

0xe7a9,	// (0x00083b56) area_fmrd2_visual_pane_ParamLimits

0xe7a9,	// (0x00083b56) area_fmrd2_visual_pane

0xe7b7,	// (0x00083b64) fmrd2_indi_pane_ParamLimits

0xe7b7,	// (0x00083b64) fmrd2_indi_pane

0xe7c4,	// (0x00083b71) area_fmrd2_visual_pane_g1

0xe7cc,	// (0x00083b79) area_fmrd2_visual_pane_t1

0xe7dc,	// (0x00083b89) area_fmrd2_visual_pane_t2

0xe7ec,	// (0x00083b99) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000852a8) area_fmrd2_visual_pane_t

0xe7fc,	// (0x00083ba9) area_fmrd2_info_pane_g1

0xe804,	// (0x00083bb1) area_fmrd2_info_pane_t1

0xe814,	// (0x00083bc1) area_fmrd2_info_pane_t2

0xe824,	// (0x00083bd1) area_fmrd2_info_pane_t3

0xe834,	// (0x00083be1) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000852af) area_fmrd2_info_pane_t

0xe842,	// (0x00083bef) fmrd2_indi_pane_t1

0xe852,	// (0x00083bff) fmrd2_indi_pane_t2

0xe862,	// (0x00083c0f) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000852b8) fmrd2_indi_pane_t

0x40af,	// (0x0007945c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x40af,	// (0x0007945c) list_single_fs_bigclock_indicator_pane_g5

0x416e,	// (0x0007951b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x416e,	// (0x0007951b) list_single_fs_bigclock_indicator_pane_t5

0xe103,	// (0x000834b0) aid_cell_bcale_month_pane_ParamLimits

0xe103,	// (0x000834b0) aid_cell_bcale_month_pane

0xe121,	// (0x000834ce) bcale_month_pane_ParamLimits

0xe121,	// (0x000834ce) bcale_month_pane

0xe13f,	// (0x000834ec) bcale_preview_pane_ParamLimits

0xe13f,	// (0x000834ec) bcale_preview_pane

0x48bc,	// (0x00079c69) list_single_fs_bigclock_pane_t1_ParamLimits

0x48db,	// (0x00079c88) list_single_fs_bigclock_pane_t2_ParamLimits

0x48db,	// (0x00079c88) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0008523a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0008523a) list_single_fs_bigclock_pane_t

0xe785,	// (0x00083b32) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x000852a3) main_fs_bigclock_unlock_btn_pane_g

0xe870,	// (0x00083c1d) aid_dia3_key_size_ParamLimits

0xe870,	// (0x00083c1d) aid_dia3_key_size

0xe87c,	// (0x00083c29) aid_dia3_listrow_size_ParamLimits

0xe87c,	// (0x00083c29) aid_dia3_listrow_size

0xe88c,	// (0x00083c39) dia3_keypad_fun_pane_ParamLimits

0xe88c,	// (0x00083c39) dia3_keypad_fun_pane

0xe89e,	// (0x00083c4b) dia3_keypad_num_pane_ParamLimits

0xe89e,	// (0x00083c4b) dia3_keypad_num_pane

0xe8b0,	// (0x00083c5d) dia3_listscroll_pane_ParamLimits

0xe8b0,	// (0x00083c5d) dia3_listscroll_pane

0xe8be,	// (0x00083c6b) dia3_numentry_pane_ParamLimits

0xe8be,	// (0x00083c6b) dia3_numentry_pane

0x4b00,	// (0x00079ead) dia3_list_pane

0x4b0b,	// (0x00079eb8) scroll_pane_cp12

0xed1d,	// (0x000840ca) bg_dia3_numentry_pane

0xe8cc,	// (0x00083c79) dia3_numentry_pane_t1

0xe8db,	// (0x00083c88) cell_dia3_key_num_pane

0xe8e3,	// (0x00083c90) cell_dia3_key0_fun_pane_ParamLimits

0xe8e3,	// (0x00083c90) cell_dia3_key0_fun_pane

0xe8f0,	// (0x00083c9d) cell_dia3_key1_fun_pane_ParamLimits

0xe8f0,	// (0x00083c9d) cell_dia3_key1_fun_pane

0xe8fd,	// (0x00083caa) dia3_listrow_pane

0x3e02,	// (0x000791af) bg_dia3_numentry_pane_g1

0xed1d,	// (0x000840ca) bg_button_pane_cp21

0x4b16,	// (0x00079ec3) cell_dia3_key_num_pane_t1

0x4b24,	// (0x00079ed1) cell_dia3_key_num_pane_t2

0x4b33,	// (0x00079ee0) cell_dia3_key_num_pane_t3

0x4b42,	// (0x00079eef) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x000852bf) cell_dia3_key_num_pane_t

0xed1d,	// (0x000840ca) bg_button_pane_cp19

0xe90a,	// (0x00083cb7) cell_dia3_key0_fun_pane_g1

0xed1d,	// (0x000840ca) bg_button_pane_cp20

0xe912,	// (0x00083cbf) cell_dia3_key1_fun_pane_g1

0xe91a,	// (0x00083cc7) area_left_week_number_pane

0xe92d,	// (0x00083cda) area_top_day_name_pane

0xe93b,	// (0x00083ce8) frame_month_view_pane

0x4b51,	// (0x00079efe) grid_month_view_pane

0xe950,	// (0x00083cfd) cell_top_day_name_pane_ParamLimits

0xe950,	// (0x00083cfd) cell_top_day_name_pane

0xe96a,	// (0x00083d17) cell_area_left_week_number_pane_ParamLimits

0xe96a,	// (0x00083d17) cell_area_left_week_number_pane

0xe98d,	// (0x00083d3a) cell_month_view_pane_ParamLimits

0xe98d,	// (0x00083d3a) cell_month_view_pane

0x4b5f,	// (0x00079f0c) frm_month_g1

0xe9b9,	// (0x00083d66) frm_month_g2

0xe9ca,	// (0x00083d77) frm_month_g3

0xe9db,	// (0x00083d88) frm_month_g4

0xe9ec,	// (0x00083d99) frm_month_g5

0xe9ff,	// (0x00083dac) frm_month_g6

0xea12,	// (0x00083dbf) frm_month_g7

0x4b6c,	// (0x00079f19) frm_month_g8

0xea25,	// (0x00083dd2) frm_month_g9

0xea32,	// (0x00083ddf) frm_month_g10

0xea3f,	// (0x00083dec) frm_month_g11

0xea4c,	// (0x00083df9) frm_month_g12

0xea59,	// (0x00083e06) frm_month_g13

0xea66,	// (0x00083e13) frm_month_g14

0xea75,	// (0x00083e22) frm_month_g15

0xea84,	// (0x00083e31) frm_month_g16

0x000f,

0xff1b,	// (0x000852c8) frm_month_g

0x4b79,	// (0x00079f26) cell_top_day_name_pane_t1

0xea93,	// (0x00083e40) cell_area_left_week_number_pane_g1

0xeaa2,	// (0x00083e4f) cell_area_left_week_number_pane_t1

0x2b0e,	// (0x00077ebb) cell_month_view_pane_g1

0xeab8,	// (0x00083e65) cell_month_view_pane_t1

0xed1d,	// (0x000840ca) main_fps_pane

0x4379,	// (0x00079726) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x4379,	// (0x00079726) cmail_ddmenu_btn02_pane_cp1

0x4395,	// (0x00079742) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x4395,	// (0x00079742) cmail_ddmenu_btn02_pane_cp2

0xe32d,	// (0x000836da) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe32d,	// (0x000836da) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x000851ed) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x000851ed) cmail_ddmenu_btn02_pane_g

0xe34c,	// (0x000836f9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe34c,	// (0x000836f9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x000851f2) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x000851f2) cmail_ddmenu_btn02_pane_t

0xeace,	// (0x00083e7b) fps_text_pane_ParamLimits

0xeace,	// (0x00083e7b) fps_text_pane

0xeadb,	// (0x00083e88) main_fps_pane_g1_ParamLimits

0xeadb,	// (0x00083e88) main_fps_pane_g1

0xeae9,	// (0x00083e96) wait_bar_pane_cp010_ParamLimits

0xeae9,	// (0x00083e96) wait_bar_pane_cp010

0xeaf5,	// (0x00083ea2) fps_text_pane_t1_ParamLimits

0xeaf5,	// (0x00083ea2) fps_text_pane_t1

0xbf91,	// (0x0008133e) cam4_image_uncrop_pane_g1

0xbf9a,	// (0x00081347) cam4_image_uncrop_pane_g2

0xbfa3,	// (0x00081350) cam4_image_uncrop_pane_g3

0xbfac,	// (0x00081359) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00084cae) cam4_image_uncrop_pane_g

0xe8fd,	// (0x00083caa) dia3_listrow_pane_ParamLimits

0xed1d,	// (0x000840ca) main_phob2_pane

0xdf37,	// (0x000832e4) cell_tport_appsw_pane_cp02_ParamLimits

0xdf37,	// (0x000832e4) cell_tport_appsw_pane_cp02

0xdf46,	// (0x000832f3) cell_tport_appsw_pane_cp03_ParamLimits

0xdf46,	// (0x000832f3) cell_tport_appsw_pane_cp03

0xed1d,	// (0x000840ca) phob2_contact_card_pane

0xed1d,	// (0x000840ca) phob2_listscroll_pane

0x4b8c,	// (0x00079f39) phob2_list_pane

0x4b94,	// (0x00079f41) scroll_pane_cp034

0xeb0e,	// (0x00083ebb) phob2_cc_data_pane_ParamLimits

0xeb0e,	// (0x00083ebb) phob2_cc_data_pane

0xeb28,	// (0x00083ed5) phob2_cc_listscroll_pane_ParamLimits

0xeb28,	// (0x00083ed5) phob2_cc_listscroll_pane

0xeb42,	// (0x00083eef) list_double_large_graphic_phob2_pane_ParamLimits

0xeb42,	// (0x00083eef) list_double_large_graphic_phob2_pane

0xeb61,	// (0x00083f0e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeb61,	// (0x00083f0e) list_double_large_graphic_phob2_pane_g1

0x6cde,	// (0x0007c08b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x6cde,	// (0x0007c08b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000852e9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000852e9) list_double_large_graphic_phob2_pane_g

0x6cea,	// (0x0007c097) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6cea,	// (0x0007c097) list_double_large_graphic_phob2_pane_t1

0x6d00,	// (0x0007c0ad) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6d00,	// (0x0007c0ad) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000852ee) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000852ee) list_double_large_graphic_phob2_pane_t

0xed1d,	// (0x000840ca) list_highlight_pane_cp024

0xeb77,	// (0x00083f24) phob2_cc_button_pane

0xeb7f,	// (0x00083f2c) phob2_cc_data_pane_g1_ParamLimits

0xeb7f,	// (0x00083f2c) phob2_cc_data_pane_g1

0xeb8b,	// (0x00083f38) phob2_cc_data_pane_g2_ParamLimits

0xeb8b,	// (0x00083f38) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000852f3) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000852f3) phob2_cc_data_pane_g

0xeb97,	// (0x00083f44) phob2_cc_data_pane_t1_ParamLimits

0xeb97,	// (0x00083f44) phob2_cc_data_pane_t1

0xeba9,	// (0x00083f56) phob2_cc_data_pane_t2_ParamLimits

0xeba9,	// (0x00083f56) phob2_cc_data_pane_t2

0xebbb,	// (0x00083f68) phob2_cc_data_pane_t3_ParamLimits

0xebbb,	// (0x00083f68) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000852f8) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000852f8) phob2_cc_data_pane_t

0x4b9c,	// (0x00079f49) phob2_cc_list_pane_ParamLimits

0x4b9c,	// (0x00079f49) phob2_cc_list_pane

0x35fe,	// (0x000789ab) scroll_pane_cp035_ParamLimits

0x35fe,	// (0x000789ab) scroll_pane_cp035

0xf07f,	// (0x0008442c) bg_button_pane_cp033

0x4ba8,	// (0x00079f55) phob2_cc_button_pane_g1

0x4bb4,	// (0x00079f61) phob2_cc_button_pane_t1

0x4bc9,	// (0x00079f76) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000852ff) phob2_cc_button_pane_t

0xebcd,	// (0x00083f7a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xebcd,	// (0x00083f7a) list_double_large_graphic_phob2_cc_pane

0xebf6,	// (0x00083fa3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xebf6,	// (0x00083fa3) list_double_large_graphic_phob2_cc_pane_g1

0x6d15,	// (0x0007c0c2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6d15,	// (0x0007c0c2) list_double_large_graphic_phob2_cc_pane_g2

0x6d24,	// (0x0007c0d1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6d24,	// (0x0007c0d1) list_double_large_graphic_phob2_cc_pane_g3

0x6d33,	// (0x0007c0e0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6d33,	// (0x0007c0e0) list_double_large_graphic_phob2_cc_pane_g4

0x6d44,	// (0x0007c0f1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6d44,	// (0x0007c0f1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00085304) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00085304) list_double_large_graphic_phob2_cc_pane_g

0x6d53,	// (0x0007c100) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6d53,	// (0x0007c100) list_double_large_graphic_phob2_cc_pane_t1

0x6d7c,	// (0x0007c129) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6d7c,	// (0x0007c129) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0008530f) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0008530f) list_double_large_graphic_phob2_cc_pane_t

0x4bdb,	// (0x00079f88) list_highlight_pane_cp025_ParamLimits

0x4bdb,	// (0x00079f88) list_highlight_pane_cp025

0xf07f,	// (0x0008442c) bg_button_pane_cp033_ParamLimits

0x4ba8,	// (0x00079f55) phob2_cc_button_pane_g1_ParamLimits

0x4bb4,	// (0x00079f61) phob2_cc_button_pane_t1_ParamLimits

0x4bc9,	// (0x00079f76) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000852ff) phob2_cc_button_pane_t_ParamLimits

0x707c,	// (0x0007c429) popup_wgtman_window

0x342b,	// (0x000787d8) scroll_pane_cp038

0xe6c7,	// (0x00083a74) wgtman_btn_pane_cp_01_ParamLimits

0xe6c7,	// (0x00083a74) wgtman_btn_pane_cp_01

0x4be9,	// (0x00079f96) wgtman_content_pane

0x4bf2,	// (0x00079f9f) wgtman_heading_pane

0xed1d,	// (0x000840ca) bg_heading_pane_cp02

0x4bfb,	// (0x00079fa8) wgtman_heading_pane_g1

0x4c03,	// (0x00079fb0) wgtman_heading_pane_t1

0x4c11,	// (0x00079fbe) scroll_pane_cp036

0x4c19,	// (0x00079fc6) wgtman_list_pane

0x4259,	// (0x00079606) wgtman_list_pane_t1_ParamLimits

0x4259,	// (0x00079606) wgtman_list_pane_t1

0xbef0,	// (0x0008129d) cam4_grid_pane

0x5fa7,	// (0x0007b354) bg_button_pane_cp015_ParamLimits

0xcbd4,	// (0x00081f81) bg_button_pane_cp016_ParamLimits

0xcbe7,	// (0x00081f94) bg_button_pane_cp017_ParamLimits

0x5feb,	// (0x0007b398) popup_vitu2_query_window_g3_ParamLimits

0x5feb,	// (0x0007b398) popup_vitu2_query_window_g3

0x6064,	// (0x0007b411) popup_vitu2_query_window_t6_ParamLimits

0x6064,	// (0x0007b411) popup_vitu2_query_window_t6

0x608f,	// (0x0007b43c) popup_vitu2_query_window_t7_ParamLimits

0x608f,	// (0x0007b43c) popup_vitu2_query_window_t7

0x38cc,	// (0x00078c79) cam4_grid_pane_g1

0x38d5,	// (0x00078c82) cam4_grid_pane_g2

0x4c21,	// (0x00079fce) cam4_grid_pane_g3

0x4c2a,	// (0x00079fd7) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x00085314) cam4_grid_pane_g

0x7def,	// (0x0007d19c) aid_placing_vt_slider_lsc_ParamLimits

0x812f,	// (0x0007d4dc) vidtel_button_pane_ParamLimits

0x812f,	// (0x0007d4dc) vidtel_button_pane

0xed1d,	// (0x000840ca) bg_button_pane_cp034

0xec07,	// (0x00083fb4) vidtel_button_pane_g1

0x4c35,	// (0x00079fe2) vidtel_button_pane_t1

0x3545,	// (0x000788f2) aid_size_vtel_slider_touch

0x35fe,	// (0x000789ab) scroll_pane_cp039

0xd8b3,	// (0x00082c60) ncim_query_button_pane_cp01_ParamLimits

0xd8d2,	// (0x00082c7f) ncimui_query_pane_g1_ParamLimits

0xf07f,	// (0x0008442c) input_focus_pane_cp012_ParamLimits

0x3e48,	// (0x000791f5) ncim_query_entry_pane_t1_ParamLimits

0x35fe,	// (0x000789ab) scroll_pane_cp039_ParamLimits

0x0efe,	// (0x000762ab) navi_pane_bcale_mc_g1

0x0f06,	// (0x000762b3) navi_pane_bcale_mc_t1

0x43de,	// (0x0007978b) main_sp_fs_email_pane_g1

0x43ea,	// (0x00079797) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x000850a5) main_sp_fs_email_pane_g

0x4640,	// (0x000799ed) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4640,	// (0x000799ed) list_single_cale_mrui_row_pane_g3

0x6be9,	// (0x0007bf96) list_single_recal_day_pane_g5_event_pane

0x6bff,	// (0x0007bfac) list_single_recal_day_pane_g7

0x4c4b,	// (0x00079ff8) list_recal_day_event_pane_cp01

0x4c54,	// (0x0007a001) list_recal_vselct_arw_lo_pane_cp01

0x4c5c,	// (0x0007a009) list_recal_vselct_arw_up_pane_cp01

0x4c64,	// (0x0007a011) list_recal_vselct_pane_cp01

0x3567,	// (0x00078914) list_recal_day_event_pane_cp01_g1

0x6da5,	// (0x0007c152) list_recal_day_event_pane_cp01_t1

0x6c07,	// (0x0007bfb4) list_single_recal_day_pane_t1_ParamLimits

0x6c19,	// (0x0007bfc6) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x00085202) list_single_recal_day_pane_t_ParamLimits

0x035a,	// (0x00075707) bg_notes_pane_ParamLimits

0x0409,	// (0x000757b6) list_notes_pane_ParamLimits

0x73d7,	// (0x0007c784) scroll_pane_cp06_ParamLimits

0x042b,	// (0x000757d8) main_notes_pane_ParamLimits

0xed1d,	// (0x000840ca) main_welc_pane

0xec0f,	// (0x00083fbc) main_welc_body_pane_ParamLimits

0xec0f,	// (0x00083fbc) main_welc_body_pane

0xec28,	// (0x00083fd5) main_welc_opti_pane_ParamLimits

0xec28,	// (0x00083fd5) main_welc_opti_pane

0xec5b,	// (0x00084008) main_welc_pane_t1_ParamLimits

0xec5b,	// (0x00084008) main_welc_pane_t1

0xec75,	// (0x00084022) main_welc_body_row_pane_ParamLimits

0xec75,	// (0x00084022) main_welc_body_row_pane

0x40cb,	// (0x00079478) main_welc_opti_row_pane_ParamLimits

0x40cb,	// (0x00079478) main_welc_opti_row_pane

0x4c6e,	// (0x0007a01b) main_welc_opti_row_pane_g1

0xec9e,	// (0x0008404b) main_welc_opti_row_pane_t1

0x4c76,	// (0x0007a023) main_welc_body_row_pane_t1

0x4993,	// (0x00079d40) popup_notif_wgt_heading_pane

0x49ad,	// (0x00079d5a) aid_size_list_notif_wgt_del_ParamLimits

0x49ba,	// (0x00079d67) list_notif_wgt_row_pane_g1_ParamLimits

0x49c6,	// (0x00079d73) list_notif_wgt_row_pane_g2_ParamLimits

0x49d5,	// (0x00079d82) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x00085269) list_notif_wgt_row_pane_g_ParamLimits

0x49e2,	// (0x00079d8f) list_notif_wgt_row_pane_t1_ParamLimits

0x49f8,	// (0x00079da5) list_notif_wgt_row_pane_t2_ParamLimits

0x4a0a,	// (0x00079db7) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x00085270) list_notif_wgt_row_pane_t_ParamLimits

0xe75a,	// (0x00083b07) listrow_wgtman_pane_g1_ParamLimits

0xe767,	// (0x00083b14) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x00085299) listrow_wgtman_pane_g_ParamLimits

0x6c8e,	// (0x0007c03b) listrow_wgtman_pane_t1_ParamLimits

0x6ca6,	// (0x0007c053) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0008529e) listrow_wgtman_pane_t_ParamLimits

0x6ccc,	// (0x0007c079) wait_bar_pane_cp09_ParamLimits

0xed1d,	// (0x000840ca) bg_popup_heading_pane_cp02

0x4c85,	// (0x0007a032) popup_notif_wgt_heading_pane_g1

0x4c8d,	// (0x0007a03a) popup_notif_wgt_heading_pane_t1

0xed1d,	// (0x000840ca) main_vids_pane

0xed1d,	// (0x000840ca) vids_listscroll_pane

0xecad,	// (0x0008405a) scroll_pane_cp040

0xed1d,	// (0x000840ca) vids_list_pane

0xecb8,	// (0x00084065) vids_list_double_pane_ParamLimits

0xecb8,	// (0x00084065) vids_list_double_pane

0xecd0,	// (0x0008407d) vids_list_double_pane_g1

0xecd9,	// (0x00084086) vids_list_double_pane_t1

0xece9,	// (0x00084096) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x00085322) vids_list_double_pane_t

0xf07f,	// (0x0008442c) main_ncimui_pane_ParamLimits

0xd70a,	// (0x00082ab7) main_ncimui_pane_g1_ParamLimits

0xd716,	// (0x00082ac3) main_ncimui_pane_g2_ParamLimits

0xd716,	// (0x00082ac3) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x00084faa) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x00084faa) main_ncimui_pane_g

0xec41,	// (0x00083fee) main_welc_pane_g1_ParamLimits

0xec41,	// (0x00083fee) main_welc_pane_g1

0xec4d,	// (0x00083ffa) main_welc_pane_g2_ParamLimits

0xec4d,	// (0x00083ffa) main_welc_pane_g2

0x0001,

0xff70,	// (0x0008531d) main_welc_pane_g_ParamLimits

0xff70,	// (0x0008531d) main_welc_pane_g

0x035a,	// (0x00075707) listscroll_mce_pane_ParamLimits

0x1053,	// (0x00076400) wait_bar_pane_cp10

0x24a0,	// (0x0007784d) main_cale_day_pane_ParamLimits

0x24a0,	// (0x0007784d) main_cale_week_pane_ParamLimits

0x035a,	// (0x00075707) main_messa_pane_ParamLimits

0xb344,	// (0x000806f1) main_clock2_btn_pane_ParamLimits

0xb344,	// (0x000806f1) main_clock2_btn_pane

0x2c96,	// (0x00078043) main_clock2_btn_pane_cp01_ParamLimits

0x2c96,	// (0x00078043) main_clock2_btn_pane_cp01

0x4611,	// (0x000799be) list_cale_mrui_pane_ParamLimits

0x4a40,	// (0x00079ded) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x00085277) main_cf0_pane_g

0xe91a,	// (0x00083cc7) area_left_week_number_pane_ParamLimits

0xe92d,	// (0x00083cda) area_top_day_name_pane_ParamLimits

0xe93b,	// (0x00083ce8) frame_month_view_pane_ParamLimits

0x4b51,	// (0x00079efe) grid_month_view_pane_ParamLimits

0x4b5f,	// (0x00079f0c) frm_month_g1_ParamLimits

0xe9b9,	// (0x00083d66) frm_month_g2_ParamLimits

0xe9ca,	// (0x00083d77) frm_month_g3_ParamLimits

0xe9db,	// (0x00083d88) frm_month_g4_ParamLimits

0xe9ec,	// (0x00083d99) frm_month_g5_ParamLimits

0xe9ff,	// (0x00083dac) frm_month_g6_ParamLimits

0xea12,	// (0x00083dbf) frm_month_g7_ParamLimits

0x4b6c,	// (0x00079f19) frm_month_g8_ParamLimits

0xea25,	// (0x00083dd2) frm_month_g9_ParamLimits

0xea32,	// (0x00083ddf) frm_month_g10_ParamLimits

0xea3f,	// (0x00083dec) frm_month_g11_ParamLimits

0xea4c,	// (0x00083df9) frm_month_g12_ParamLimits

0xea59,	// (0x00083e06) frm_month_g13_ParamLimits

0xea66,	// (0x00083e13) frm_month_g14_ParamLimits

0xea75,	// (0x00083e22) frm_month_g15_ParamLimits

0xea84,	// (0x00083e31) frm_month_g16_ParamLimits

0xff1b,	// (0x000852c8) frm_month_g_ParamLimits

0x4b79,	// (0x00079f26) cell_top_day_name_pane_t1_ParamLimits

0xea93,	// (0x00083e40) cell_area_left_week_number_pane_g1_ParamLimits

0xeaa2,	// (0x00083e4f) cell_area_left_week_number_pane_t1_ParamLimits

0x2b0e,	// (0x00077ebb) cell_month_view_pane_g1_ParamLimits

0xeab8,	// (0x00083e65) cell_month_view_pane_t1_ParamLimits

0x0352,	// (0x000756ff) main_clock2_btn_pane_g1

0x4c9b,	// (0x0007a048) main_clock2_btn_pane_t1

0xf07f,	// (0x0008442c) listscroll_cmail_pane_ParamLimits

0x43de,	// (0x0007978b) main_sp_fs_email_pane_g1_ParamLimits

0x43ea,	// (0x00079797) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x000850a5) main_sp_fs_email_pane_g_ParamLimits

0x471f,	// (0x00079acc) list_recal_day_pane_ParamLimits

0x4730,	// (0x00079add) mian_recal_day_pane_t1

0x65ce,	// (0x0007b97b) list_single_dyc_row_text_pane_t4_ParamLimits

0x65ce,	// (0x0007b97b) list_single_dyc_row_text_pane_t4

0x6605,	// (0x0007b9b2) list_single_dyc_row_text_pane_t5_ParamLimits

0x6605,	// (0x0007b9b2) list_single_dyc_row_text_pane_t5

0x667b,	// (0x0007ba28) list_single_dyc_row_text_pane_t6_ParamLimits

0x667b,	// (0x0007ba28) list_single_dyc_row_text_pane_t6

0x8fa8,	// (0x0007e355) aid_mgn_list_cale_time_pane

0xf07f,	// (0x0008442c) main_gallery2_pane_ParamLimits

0x2cac,	// (0x00078059) main_clock2_pane_cp01_t1

0x2cba,	// (0x00078067) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00084b84) main_clock2_pane_cp01_t

0x781a,	// (0x0007cbc7) cale_week_scroll_pane_g16_ParamLimits

0x781a,	// (0x0007cbc7) cale_week_scroll_pane_g16

0x0620,	// (0x000759cd) vorec_slider_pane

0x4c35,	// (0x00079fe2) vidtel_button_pane_t1_ParamLimits

0xe3af,	// (0x0008375c) main_fs_bigclock_clock_pane_g1_ParamLimits

0xe3af,	// (0x0008375c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xe3bc,	// (0x00083769) main_fs_bigclock_clock_pane_g3_ParamLimits

0xe3bc,	// (0x00083769) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x00085225) main_fs_bigclock_clock_pane_g_ParamLimits

0xe3c8,	// (0x00083775) main_fs_bigclock_clock_pane_t1_ParamLimits

0xe3db,	// (0x00083788) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0008522e) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

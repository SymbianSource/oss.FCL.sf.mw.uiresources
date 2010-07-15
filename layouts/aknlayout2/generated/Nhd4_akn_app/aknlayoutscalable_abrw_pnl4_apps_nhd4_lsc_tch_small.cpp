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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006c1d6 };

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
0x028f,	// (0x0006c465) Screen

0x029b,	// (0x0006c471) application_window

0x0303,	// (0x0006c4d9) area_bottom_pane_ParamLimits

0x0303,	// (0x0006c4d9) area_bottom_pane

0x0360,	// (0x0006c536) area_top_pane_ParamLimits

0x0360,	// (0x0006c536) area_top_pane

0x93eb,	// (0x000755c1) call_video_uplink_pane_ParamLimits

0x93eb,	// (0x000755c1) call_video_uplink_pane

0x03ee,	// (0x0006c5c4) main_pane_ParamLimits

0x03ee,	// (0x0006c5c4) main_pane

0xc919,	// (0x00078aef) context_pane

0x36f3,	// (0x0006f8c9) navi_pane

0x3725,	// (0x0006f8fb) popup_cale_events_window_ParamLimits

0x3725,	// (0x0006f8fb) popup_cale_events_window

0xc92c,	// (0x00078b02) popup_mup_playback_window

0x373d,	// (0x0006f913) signal_pane

0xa2f0,	// (0x000764c6) main_browser_pane

0xaa85,	// (0x00076c5b) main_burst_pane

0x3449,	// (0x0006f61f) main_calc_pane

0xc8ff,	// (0x00078ad5) main_cale_day_pane

0x345d,	// (0x0006f633) main_cale_month_pane

0xc8ff,	// (0x00078ad5) main_cale_week_pane

0xaa85,	// (0x00076c5b) main_call_pane

0x9fc4,	// (0x0007619a) main_call_poc_pane

0xaa85,	// (0x00076c5b) main_camera_pane

0xaa85,	// (0x00076c5b) main_chi_dic_pane

0xb268,	// (0x0007743e) main_clock_pane

0x9fc4,	// (0x0007619a) main_fmradio_pane

0xaa85,	// (0x00076c5b) main_graph_messa_pane

0x9fc4,	// (0x0007619a) main_help_pane

0xa2f0,	// (0x000764c6) main_im_pane

0xa21f,	// (0x000763f5) main_image_pane_ParamLimits

0xa21f,	// (0x000763f5) main_image_pane

0x9fc4,	// (0x0007619a) main_location2_pane

0xaa85,	// (0x00076c5b) main_location_pane

0xa21f,	// (0x000763f5) main_messa_pane

0x9fc4,	// (0x0007619a) main_mp2_pane

0xaa85,	// (0x00076c5b) main_mp_pane

0x9fc4,	// (0x0007619a) main_msg_pane

0x9fc4,	// (0x0007619a) main_mup_eq_pane

0x9fc4,	// (0x0007619a) main_mup_pane

0xa2f0,	// (0x000764c6) main_notes_pane

0x9fc4,	// (0x0007619a) main_pec_pane

0x9fc4,	// (0x0007619a) main_phob_pane

0x9fc4,	// (0x0007619a) main_pinb_pane

0x9fc4,	// (0x0007619a) main_postcard_pane

0x9fc4,	// (0x0007619a) main_qdial_pane

0xaa85,	// (0x00076c5b) main_skin_pane

0x9fc4,	// (0x0007619a) main_smil2_pane

0xaa85,	// (0x00076c5b) main_smil_pane

0xaa85,	// (0x00076c5b) main_video_pane

0xaa85,	// (0x00076c5b) main_video_tele_pane

0xa21f,	// (0x000763f5) main_viewer_pane_ParamLimits

0xa21f,	// (0x000763f5) main_viewer_pane

0xaa85,	// (0x00076c5b) main_vorec_pane

0x34af,	// (0x0006f685) popup_blid_sat_info_window_ParamLimits

0x34af,	// (0x0006f685) popup_blid_sat_info_window

0x3507,	// (0x0006f6dd) popup_dyc_status_message_window_ParamLimits

0x3507,	// (0x0006f6dd) popup_dyc_status_message_window

0x351f,	// (0x0006f6f5) popup_grid_large_graphic_window_ParamLimits

0x351f,	// (0x0006f6f5) popup_grid_large_graphic_window

0x35cf,	// (0x0006f7a5) popup_loc_request_window_ParamLimits

0x35cf,	// (0x0006f7a5) popup_loc_request_window

0x36cb,	// (0x0006f8a1) popup_wml_address_window_ParamLimits

0x36cb,	// (0x0006f8a1) popup_wml_address_window

0x3283,	// (0x0006f459) call_muted_g1

0x2f37,	// (0x0006f10d) popup_call_audio_conf_window_ParamLimits

0x2f37,	// (0x0006f10d) popup_call_audio_conf_window

0x3297,	// (0x0006f46d) popup_call_audio_first_window_ParamLimits

0x3297,	// (0x0006f46d) popup_call_audio_first_window

0x330d,	// (0x0006f4e3) popup_call_audio_in_window_ParamLimits

0x330d,	// (0x0006f4e3) popup_call_audio_in_window

0x3349,	// (0x0006f51f) popup_call_audio_out_window_ParamLimits

0x3349,	// (0x0006f51f) popup_call_audio_out_window

0x3383,	// (0x0006f559) popup_call_audio_second_window_ParamLimits

0x3383,	// (0x0006f559) popup_call_audio_second_window

0x33d9,	// (0x0006f5af) popup_call_audio_wait_window_ParamLimits

0x33d9,	// (0x0006f5af) popup_call_audio_wait_window

0x340e,	// (0x0006f5e4) popup_number_entry_window_ParamLimits

0x340e,	// (0x0006f5e4) popup_number_entry_window

0x9421,	// (0x000755f7) bg_popup_call_pane_cp05_ParamLimits

0x9421,	// (0x000755f7) bg_popup_call_pane_cp05

0x9441,	// (0x00075617) popup_number_entry_window_t1

0x9454,	// (0x0007562a) popup_number_entry_window_t2

0x9466,	// (0x0007563c) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0007b285) popup_number_entry_window_t

0x9478,	// (0x0007564e) text_title_cp2

0x948b,	// (0x00075661) bg_popup_call_pane_cp_ParamLimits

0x948b,	// (0x00075661) bg_popup_call_pane_cp

0x9499,	// (0x0007566f) call_thumbnail_pane

0x94a1,	// (0x00075677) popup_call_audio_in_window_g1_ParamLimits

0x94a1,	// (0x00075677) popup_call_audio_in_window_g1

0x94ad,	// (0x00075683) popup_call_audio_in_window_g2_ParamLimits

0x94ad,	// (0x00075683) popup_call_audio_in_window_g2

0x94b9,	// (0x0007568f) popup_call_audio_in_window_g3_ParamLimits

0x94b9,	// (0x0007568f) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0007b28e) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0007b28e) popup_call_audio_in_window_g

0x94c5,	// (0x0007569b) popup_call_audio_in_window_t1_ParamLimits

0x94c5,	// (0x0007569b) popup_call_audio_in_window_t1

0x94e1,	// (0x000756b7) popup_call_audio_in_window_t2_ParamLimits

0x94e1,	// (0x000756b7) popup_call_audio_in_window_t2

0x94fd,	// (0x000756d3) popup_call_audio_in_window_t3_ParamLimits

0x94fd,	// (0x000756d3) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0007b295) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0007b295) popup_call_audio_in_window_t

0x948b,	// (0x00075661) bg_popup_call_pane_cp01_ParamLimits

0x948b,	// (0x00075661) bg_popup_call_pane_cp01

0x9499,	// (0x0007566f) call_thumbnail_pane_cp02

0x9510,	// (0x000756e6) call_type_pane_cp022

0x9518,	// (0x000756ee) popup_call_audio_out_window_g1_ParamLimits

0x9518,	// (0x000756ee) popup_call_audio_out_window_g1

0x952a,	// (0x00075700) popup_call_audio_out_window_g2_ParamLimits

0x952a,	// (0x00075700) popup_call_audio_out_window_g2

0x9536,	// (0x0007570c) popup_call_audio_out_window_g3_ParamLimits

0x9536,	// (0x0007570c) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0007b29c) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0007b29c) popup_call_audio_out_window_g

0x9548,	// (0x0007571e) popup_call_audio_out_window_t1_ParamLimits

0x9548,	// (0x0007571e) popup_call_audio_out_window_t1

0x9560,	// (0x00075736) popup_call_audio_out_window_t2_ParamLimits

0x9560,	// (0x00075736) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0007b2a3) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0007b2a3) popup_call_audio_out_window_t

0x9575,	// (0x0007574b) bg_popup_call_pane_ParamLimits

0x9575,	// (0x0007574b) bg_popup_call_pane

0x05ab,	// (0x0006c781) call_thumbnail_pane_cp_ParamLimits

0x05ab,	// (0x0006c781) call_thumbnail_pane_cp

0x95f9,	// (0x000757cf) call_type_pane_cp01_ParamLimits

0x95f9,	// (0x000757cf) call_type_pane_cp01

0x963d,	// (0x00075813) popup_call_audio_first_window_g1_ParamLimits

0x963d,	// (0x00075813) popup_call_audio_first_window_g1

0x9689,	// (0x0007585f) popup_call_audio_first_window_g2_ParamLimits

0x9689,	// (0x0007585f) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0007b2a8) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0007b2a8) popup_call_audio_first_window_g

0x96cd,	// (0x000758a3) popup_call_audio_first_window_t1_ParamLimits

0x96cd,	// (0x000758a3) popup_call_audio_first_window_t1

0x9f09,	// (0x000760df) popup_call_audio_first_window_t4_ParamLimits

0x9f09,	// (0x000760df) popup_call_audio_first_window_t4

0x9f95,	// (0x0007616b) popup_call_audio_first_window_t5_ParamLimits

0x9f95,	// (0x0007616b) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0007b2ad) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0007b2ad) popup_call_audio_first_window_t

0x9fc4,	// (0x0007619a) bg_popup_call_pane_cp02

0x9fce,	// (0x000761a4) call_type_pane_cp023

0x9fd6,	// (0x000761ac) popup_call_audio_wait_window_g1

0x9fde,	// (0x000761b4) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007b2b4) popup_call_audio_wait_window_g

0x9fe6,	// (0x000761bc) popup_call_audio_wait_window_t3

0x9ff4,	// (0x000761ca) bg_popup_call_pane_cp03_ParamLimits

0x9ff4,	// (0x000761ca) bg_popup_call_pane_cp03

0xa054,	// (0x0007622a) call_thumbnail_pane_cp011_ParamLimits

0xa054,	// (0x0007622a) call_thumbnail_pane_cp011

0xa060,	// (0x00076236) call_type_pane_cp034_ParamLimits

0xa060,	// (0x00076236) call_type_pane_cp034

0xa09c,	// (0x00076272) popup_call_audio_second_window_g1_ParamLimits

0xa09c,	// (0x00076272) popup_call_audio_second_window_g1

0xa0d8,	// (0x000762ae) popup_call_audio_second_window_g2_ParamLimits

0xa0d8,	// (0x000762ae) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0007b2b9) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0007b2b9) popup_call_audio_second_window_g

0xa114,	// (0x000762ea) popup_call_audio_second_window_t1_ParamLimits

0xa114,	// (0x000762ea) popup_call_audio_second_window_t1

0xa195,	// (0x0007636b) popup_call_audio_second_window_t2_ParamLimits

0xa195,	// (0x0007636b) popup_call_audio_second_window_t2

0xa1cb,	// (0x000763a1) popup_call_audio_second_window_t3_ParamLimits

0xa1cb,	// (0x000763a1) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0007b2be) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0007b2be) popup_call_audio_second_window_t

0x9fc4,	// (0x0007619a) bg_popup_call_pane_cp04

0xa201,	// (0x000763d7) list_conf_pane

0xa209,	// (0x000763df) popup_call_audio_conf_window_t1

0xa217,	// (0x000763ed) call_thumbnail_pane_g1

0xa21f,	// (0x000763f5) bg_pinb_pane_ParamLimits

0xa21f,	// (0x000763f5) bg_pinb_pane

0xa22d,	// (0x00076403) find_pinb_pane

0xa236,	// (0x0007640c) listscroll_pinb_pane_ParamLimits

0xa236,	// (0x0007640c) listscroll_pinb_pane

0xa245,	// (0x0007641b) pinb_bg_pane_g1

0x05cf,	// (0x0006c7a5) pinb_bg_pane_g2

0x05db,	// (0x0006c7b1) pinb_bg_pane_g3

0x05e7,	// (0x0006c7bd) pinb_bg_pane_g4

0x05f3,	// (0x0006c7c9) pinb_bg_pane_g5

0x05ff,	// (0x0006c7d5) pinb_bg_pane_g6

0x060a,	// (0x0006c7e0) pinb_bg_pane_g7

0x0615,	// (0x0006c7eb) pinb_bg_pane_g8

0x0620,	// (0x0006c7f6) pinb_bg_pane_g9

0x062a,	// (0x0006c800) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0007b2c5) pinb_bg_pane_g

0x0647,	// (0x0006c81d) grid_pinb_pane

0x0650,	// (0x0006c826) list_pinb_pane

0x0659,	// (0x0006c82f) scroll_pane_cp01_ParamLimits

0x0659,	// (0x0006c82f) scroll_pane_cp01

0xa24f,	// (0x00076425) find_pinb_pane_g1_ParamLimits

0xa24f,	// (0x00076425) find_pinb_pane_g1

0xa267,	// (0x0007643d) find_pinb_pane_t1

0xa279,	// (0x0007644f) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0007b2df) find_pinb_pane_t

0xa28e,	// (0x00076464) input_focus_pane_cp01_ParamLimits

0xa28e,	// (0x00076464) input_focus_pane_cp01

0x066b,	// (0x0006c841) cell_pinb_pane_ParamLimits

0x066b,	// (0x0006c841) cell_pinb_pane

0x0696,	// (0x0006c86c) cell_pinb_pane_g1_ParamLimits

0x0696,	// (0x0006c86c) cell_pinb_pane_g1

0xa29a,	// (0x00076470) cell_pinb_pane_g2_ParamLimits

0xa29a,	// (0x00076470) cell_pinb_pane_g2

0xa2a6,	// (0x0007647c) cell_pinb_pane_g3_ParamLimits

0xa2a6,	// (0x0007647c) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0007b2e4) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0007b2e4) cell_pinb_pane_g

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp01

0x06a9,	// (0x0006c87f) list_pinb_item_pane_ParamLimits

0x06a9,	// (0x0006c87f) list_pinb_item_pane

0x9fc4,	// (0x0007619a) list_highlight_pane_cp02

0x06bc,	// (0x0006c892) list_pinb_item_pane_g1_ParamLimits

0x06bc,	// (0x0006c892) list_pinb_item_pane_g1

0x06c9,	// (0x0006c89f) list_pinb_item_pane_g2_ParamLimits

0x06c9,	// (0x0006c89f) list_pinb_item_pane_g2

0x06d5,	// (0x0006c8ab) list_pinb_item_pane_g3_ParamLimits

0x06d5,	// (0x0006c8ab) list_pinb_item_pane_g3

0x06e6,	// (0x0006c8bc) list_pinb_item_pane_g4_ParamLimits

0x06e6,	// (0x0006c8bc) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0007b2eb) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0007b2eb) list_pinb_item_pane_g

0x06f2,	// (0x0006c8c8) list_pinb_item_pane_t1_ParamLimits

0x06f2,	// (0x0006c8c8) list_pinb_item_pane_t1

0x0727,	// (0x0006c8fd) calc_display_pane

0x074c,	// (0x0006c922) calc_paper_pane

0x076f,	// (0x0006c945) grid_calc_pane

0x9fc4,	// (0x0007619a) bg_list_pane_cp01

0x079d,	// (0x0006c973) clock_g1

0x07a5,	// (0x0006c97b) clock_g2

0x0001,

0xf11e,	// (0x0007b2f4) clock_g

0x07ad,	// (0x0006c983) clock_t1_ParamLimits

0x07ad,	// (0x0006c983) clock_t1

0x07c2,	// (0x0006c998) clock_t2_ParamLimits

0x07c2,	// (0x0006c998) clock_t2

0x07d4,	// (0x0006c9aa) clock_t3_ParamLimits

0x07d4,	// (0x0006c9aa) clock_t3

0x07e6,	// (0x0006c9bc) clock_t4_ParamLimits

0x07e6,	// (0x0006c9bc) clock_t4

0x07f8,	// (0x0006c9ce) clock_t5_ParamLimits

0x07f8,	// (0x0006c9ce) clock_t5

0x080d,	// (0x0006c9e3) clock_t6_ParamLimits

0x080d,	// (0x0006c9e3) clock_t6

0x081f,	// (0x0006c9f5) clock_t7_ParamLimits

0x081f,	// (0x0006c9f5) clock_t7

0x0831,	// (0x0006ca07) clock_t8_ParamLimits

0x0831,	// (0x0006ca07) clock_t8

0x0845,	// (0x0006ca1b) clock_t9_ParamLimits

0x0845,	// (0x0006ca1b) clock_t9

0x0008,

0xf123,	// (0x0007b2f9) clock_t_ParamLimits

0xf123,	// (0x0007b2f9) clock_t

0xa2b2,	// (0x00076488) popup_clock_analogue_window_cp02

0xa2b2,	// (0x00076488) popup_clock_digital_window_cp01

0xa2ba,	// (0x00076490) listscroll_help_pane

0x9fc4,	// (0x0007619a) phob_pre_status_pane

0xa2c4,	// (0x0007649a) grid_qdial_pane

0xa21f,	// (0x000763f5) listscroll_mce_pane

0xa21f,	// (0x000763f5) bg_notes_pane

0xa2ce,	// (0x000764a4) list_notes_pane

0x0859,	// (0x0006ca2f) scroll_pane_cp06

0xa2dc,	// (0x000764b2) bg_calc_paper_pane

0x9781,	// (0x00075957) list_calc_pane

0xa2f0,	// (0x000764c6) bg_calc_display_pane

0x086d,	// (0x0006ca43) calc_display_pane_t1

0x087f,	// (0x0006ca55) calc_display_pane_t2

0x979b,	// (0x00075971) calc_display_pane_t3

0x0002,

0xf136,	// (0x0007b30c) calc_display_pane_t

0x0891,	// (0x0006ca67) cell_calc_pane_ParamLimits

0x0891,	// (0x0006ca67) cell_calc_pane

0xa2fc,	// (0x000764d2) bg_calc_paper_pane_g1

0xa308,	// (0x000764de) bg_calc_paper_pane_g2

0xa314,	// (0x000764ea) bg_calc_paper_pane_g3

0xa320,	// (0x000764f6) bg_calc_paper_pane_g4

0xa32c,	// (0x00076502) bg_calc_paper_pane_g5

0x08c6,	// (0x0006ca9c) bg_calc_paper_pane_g6

0x08d5,	// (0x0006caab) bg_calc_paper_pane_g7

0x08e4,	// (0x0006caba) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0007b313) bg_calc_paper_pane_g

0x08f7,	// (0x0006cacd) calc_bg_paper_pane_g9

0x090a,	// (0x0006cae0) list_calc_item_pane_ParamLimits

0x090a,	// (0x0006cae0) list_calc_item_pane

0xa338,	// (0x0007650e) list_calc_item_pane_g1

0x97ad,	// (0x00075983) list_calc_item_pane_t1_ParamLimits

0x97ad,	// (0x00075983) list_calc_item_pane_t1

0x091f,	// (0x0006caf5) list_calc_item_pane_t2_ParamLimits

0x091f,	// (0x0006caf5) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0007b324) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0007b324) list_calc_item_pane_t

0xa345,	// (0x0007651b) cell_calc_pane_g1

0xa34f,	// (0x00076525) grid_highlight_pane_cp02

0xd422,	// (0x000795f8) bg_calc_display_pane_g1

0x0951,	// (0x0006cb27) bg_calc_display_pane_g2

0xa99d,	// (0x00076b73) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0007b32e) bg_calc_display_pane_g

0x095b,	// (0x0006cb31) cell_qdial_pane_ParamLimits

0x095b,	// (0x0006cb31) cell_qdial_pane

0x096f,	// (0x0006cb45) cell_qdial_pane_g1_ParamLimits

0x096f,	// (0x0006cb45) cell_qdial_pane_g1

0x0985,	// (0x0006cb5b) cell_qdial_pane_g2_ParamLimits

0x0985,	// (0x0006cb5b) cell_qdial_pane_g2

0xa371,	// (0x00076547) cell_qdial_pane_g3_ParamLimits

0xa371,	// (0x00076547) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0007b335) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0007b335) cell_qdial_pane_g

0x09ab,	// (0x0006cb81) cell_qdial_pane_t1_ParamLimits

0x09ab,	// (0x0006cb81) cell_qdial_pane_t1

0x09c3,	// (0x0006cb99) cell_qdial_pane_t2_ParamLimits

0x09c3,	// (0x0006cb99) cell_qdial_pane_t2

0x09d6,	// (0x0006cbac) cell_qdial_pane_t3_ParamLimits

0x09d6,	// (0x0006cbac) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0007b33e) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0007b33e) cell_qdial_pane_t

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp04

0xa37d,	// (0x00076553) thumbnail_qdial_pane_ParamLimits

0xa37d,	// (0x00076553) thumbnail_qdial_pane

0xa3d9,	// (0x000765af) list_help_pane

0xa3e2,	// (0x000765b8) scroll_pane_cp02

0xa9a6,	// (0x00076b7c) help_list_pane_t1_ParamLimits

0xa9a6,	// (0x00076b7c) help_list_pane_t1

0x97bf,	// (0x00075995) bg_notes_pane_g2

0x97c7,	// (0x0007599d) bg_notes_pane_g3

0x97cf,	// (0x000759a5) notes_bg_pane_g1

0x97d7,	// (0x000759ad) notes_bg_pane_g4

0x97df,	// (0x000759b5) notes_bg_pane_g5

0x97e7,	// (0x000759bd) notes_bg_pane_g6

0x97ef,	// (0x000759c5) notes_bg_pane_g7

0x97f7,	// (0x000759cd) notes_bg_pane_g8

0x97ff,	// (0x000759d5) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0007b35c) notes_bg_pane_g

0x09e9,	// (0x0006cbbf) list_notes_text_pane_ParamLimits

0x09e9,	// (0x0006cbbf) list_notes_text_pane

0xa3eb,	// (0x000765c1) list_notes_text_pane_g1

0x09ff,	// (0x0006cbd5) list_notes_text_pane_t1

0x0a0d,	// (0x0006cbe3) listscroll_cale_week_pane

0x0a39,	// (0x0006cc0f) bg_cale_heading_pane

0xa9de,	// (0x00076bb4) bg_cale_pane_cp01

0x0a51,	// (0x0006cc27) cale_week_corner_pane

0x0a70,	// (0x0006cc46) cale_week_day_heading_pane

0x0a8d,	// (0x0006cc63) cale_week_scroll_pane_g1

0x0aa0,	// (0x0006cc76) cale_week_scroll_pane_g2

0x0ab8,	// (0x0006cc8e) cale_week_scroll_pane_g3

0x0ad0,	// (0x0006cca6) cale_week_scroll_pane_g4

0x0ae8,	// (0x0006ccbe) cale_week_scroll_pane_g5

0x0b08,	// (0x0006ccde) cale_week_scroll_pane_g6

0x0b28,	// (0x0006ccfe) cale_week_scroll_pane_g7

0x0b48,	// (0x0006cd1e) cale_week_scroll_pane_g8

0x0b6c,	// (0x0006cd42) cale_week_scroll_pane_g9

0x0b84,	// (0x0006cd5a) cale_week_scroll_pane_g10

0x0b9c,	// (0x0006cd72) cale_week_scroll_pane_g11

0x0bb4,	// (0x0006cd8a) cale_week_scroll_pane_g12

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g13

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g14

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0007b36b) cale_week_scroll_pane_g

0x0c08,	// (0x0006cdde) cale_week_time_pane

0x0c2c,	// (0x0006ce02) grid_cale_week_pane

0xaa0d,	// (0x00076be3) scroll_pane_cp08

0x0c52,	// (0x0006ce28) cell_cale_week_pane_ParamLimits

0x0c52,	// (0x0006ce28) cell_cale_week_pane

0x0ce0,	// (0x0006ceb6) cale_week_day_heading_pane_t1

0x0d0a,	// (0x0006cee0) cale_week_day_heading_pane_t2

0x0d39,	// (0x0006cf0f) cale_week_day_heading_pane_t3

0x0d68,	// (0x0006cf3e) cale_week_day_heading_pane_t4

0x0d97,	// (0x0006cf6d) cale_week_day_heading_pane_t5

0x0dce,	// (0x0006cfa4) cale_week_day_heading_pane_t6

0x0e05,	// (0x0006cfdb) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0007b38c) cale_week_day_heading_pane_t

0xaa2a,	// (0x00076c00) bg_cale_side_pane

0x0e2f,	// (0x0006d005) cale_week_time_pane_t1

0x0e49,	// (0x0006d01f) cale_week_time_pane_t2

0x0e63,	// (0x0006d039) cale_week_time_pane_t3

0x0e7d,	// (0x0006d053) cale_week_time_pane_t4

0x0e97,	// (0x0006d06d) cale_week_time_pane_t5

0x0eb1,	// (0x0006d087) cale_week_time_pane_t6

0x0ecb,	// (0x0006d0a1) cale_week_time_pane_t7

0x0ee5,	// (0x0006d0bb) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0007b39b) cale_week_time_pane_t

0x0f05,	// (0x0006d0db) cell_cale_week_pane_g2

0x0f29,	// (0x0006d0ff) cell_cale_week_pane_g3_ParamLimits

0x0f29,	// (0x0006d0ff) cell_cale_week_pane_g3

0xaa38,	// (0x00076c0e) grid_highlight_pane_cp07

0xaa40,	// (0x00076c16) listscroll_gms_pane

0xaa4a,	// (0x00076c20) grid_gms_pane

0xaa53,	// (0x00076c29) listscroll_gms_pane_g1

0xaa5b,	// (0x00076c31) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0007b3ac) listscroll_gms_pane_g

0x0f41,	// (0x0006d117) scroll_pane_cp010

0x0f4c,	// (0x0006d122) cell_gms_pane_ParamLimits

0x0f4c,	// (0x0006d122) cell_gms_pane

0x0f5e,	// (0x0006d134) cell_gms_pane_g1

0xaa63,	// (0x00076c39) cell_gms_pane_g2

0xaa6b,	// (0x00076c41) cell_gms_pane_g3

0xaa74,	// (0x00076c4a) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0007b3b1) cell_gms_pane_g

0xaa7d,	// (0x00076c53) grid_highlight_pane_cp09

0x322d,	// (0x0006f403) phob_pre_status_pane_g1

0x3235,	// (0x0006f40b) phob_pre_status_pane_g2

0x323d,	// (0x0006f413) phob_pre_status_pane_g3

0x3245,	// (0x0006f41b) phob_pre_status_pane_g4

0x0004,

0xf5d9,	// (0x0007b7af) phob_pre_status_pane_g

0x3255,	// (0x0006f42b) phob_pre_status_pane_t1

0x3263,	// (0x0006f439) phob_pre_status_pane_t2

0x3273,	// (0x0006f449) phob_pre_status_pane_t3

0x0002,

0xf5e4,	// (0x0007b7ba) phob_pre_status_pane_t

0xaa85,	// (0x00076c5b) bg_list_pane_cp05

0x0f6e,	// (0x0006d144) grid_vorec_pane

0x0f76,	// (0x0006d14c) vorec_t1

0x0f84,	// (0x0006d15a) vorec_t2

0x0f92,	// (0x0006d168) vorec_t3

0x0fa0,	// (0x0006d176) vorec_t4

0x939f,	// (0x00075575) vorec_t5

0x93ad,	// (0x00075583) vorec_t6

0x0004,

0xf1e4,	// (0x0007b3ba) vorec_t

0x93bb,	// (0x00075591) wait_bar_pane_cp01

0x0fbc,	// (0x0006d192) cell_vorec_pane_ParamLimits

0x0fbc,	// (0x0006d192) cell_vorec_pane

0x9807,	// (0x000759dd) cell_vorec_pane_g1

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp05

0x0fe7,	// (0x0006d1bd) cams_zoom_pane

0x0ff6,	// (0x0006d1cc) image_vga_pane

0x1010,	// (0x0006d1e6) main_camera_pane_g1

0x1022,	// (0x0006d1f8) main_camera_pane_g2

0x1032,	// (0x0006d208) main_camera_pane_g3

0x1042,	// (0x0006d218) main_camera_pane_g4

0x1052,	// (0x0006d228) main_camera_pane_g5

0x1062,	// (0x0006d238) main_camera_pane_g6

0x1072,	// (0x0006d248) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0007b3c5) main_camera_pane_g

0x1082,	// (0x0006d258) main_camera_pane_t1

0x1098,	// (0x0006d26e) main_camera_pane_t2

0x0001,

0xf200,	// (0x0007b3d6) main_camera_pane_t

0x10d2,	// (0x0006d2a8) cams_zoom_pane_cp_ParamLimits

0x10d2,	// (0x0006d2a8) cams_zoom_pane_cp

0x10fa,	// (0x0006d2d0) image_cif_pane_ParamLimits

0x10fa,	// (0x0006d2d0) image_cif_pane

0x1135,	// (0x0006d30b) image_subqcif_pane

0x113d,	// (0x0006d313) main_video_pane_g1_ParamLimits

0x113d,	// (0x0006d313) main_video_pane_g1

0x1161,	// (0x0006d337) main_video_pane_g2_ParamLimits

0x1161,	// (0x0006d337) main_video_pane_g2

0x1195,	// (0x0006d36b) main_video_pane_g3_ParamLimits

0x1195,	// (0x0006d36b) main_video_pane_g3

0x11c3,	// (0x0006d399) main_video_pane_g4_ParamLimits

0x11c3,	// (0x0006d399) main_video_pane_g4

0x11f1,	// (0x0006d3c7) main_video_pane_g5_ParamLimits

0x11f1,	// (0x0006d3c7) main_video_pane_g5

0xaa99,	// (0x00076c6f) main_video_pane_g6_ParamLimits

0xaa99,	// (0x00076c6f) main_video_pane_g6

0x0006,

0xf205,	// (0x0007b3db) main_video_pane_g_ParamLimits

0xf205,	// (0x0007b3db) main_video_pane_g

0x121a,	// (0x0006d3f0) main_video_pane_t1_ParamLimits

0x121a,	// (0x0006d3f0) main_video_pane_t1

0xaab3,	// (0x00076c89) cams_zoom_pane_g1

0xaabc,	// (0x00076c92) cams_zoom_pane_g2

0xaac5,	// (0x00076c9b) cams_zoom_pane_g3

0xaace,	// (0x00076ca4) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0007b3ea) cams_zoom_pane_g

0x1277,	// (0x0006d44d) grid_cams_pane

0x1291,	// (0x0006d467) linegrid_cams_pane

0x12a4,	// (0x0006d47a) cell_cams_pane_ParamLimits

0x12a4,	// (0x0006d47a) cell_cams_pane

0xaad7,	// (0x00076cad) cams_burst_image_pane

0xaadf,	// (0x00076cb5) cell_cams_pane_g1

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp03

0xa345,	// (0x0007651b) mp_bg_pane_g1

0x9fc4,	// (0x0007619a) bg_list_pane_cp03

0xc824,	// (0x000789fa) bg_mp_pane

0xc82c,	// (0x00078a02) grid_mp_pane

0xc834,	// (0x00078a0a) media_player_g1

0xc83c,	// (0x00078a12) media_player_t1

0xc84a,	// (0x00078a20) media_player_t2

0xc858,	// (0x00078a2e) media_player_t3

0xc866,	// (0x00078a3c) media_player_t4

0xc874,	// (0x00078a4a) media_player_t5

0xc882,	// (0x00078a58) media_player_t6

0xc890,	// (0x00078a66) media_player_t7

0x0006,

0xf5c3,	// (0x0007b799) media_player_t

0xc89e,	// (0x00078a74) wait_bar_pane_cp02

0xf5a8,	// (0x0007b77e) main_usb_pane_t

0x3224,	// (0x0006f3fa) cell_mp_pane

0xa345,	// (0x0007651b) cell_mp_pane_g1

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp06

0xaae7,	// (0x00076cbd) grid_skin_colour_pane

0xaaef,	// (0x00076cc5) list_highlight_pane_cp03

0x13da,	// (0x0006d5b0) skin_g1

0xaaf7,	// (0x00076ccd) skin_t1

0xab06,	// (0x00076cdc) skin_t2

0x0001,

0xf249,	// (0x0007b41f) skin_t

0x13e2,	// (0x0006d5b8) cell_skin_colour_pane_ParamLimits

0x13e2,	// (0x0006d5b8) cell_skin_colour_pane

0xab14,	// (0x00076cea) cell_skin_colour_pane_g1

0x145b,	// (0x0006d631) call_video_g1_ParamLimits

0x145b,	// (0x0006d631) call_video_g1

0x1477,	// (0x0006d64d) call_video_g2_ParamLimits

0x1477,	// (0x0006d64d) call_video_g2

0x0001,

0xf24e,	// (0x0007b424) call_video_g_ParamLimits

0xf24e,	// (0x0007b424) call_video_g

0x14c9,	// (0x0006d69f) call_video_uplink_pane_cp1_ParamLimits

0x14c9,	// (0x0006d69f) call_video_uplink_pane_cp1

0xab26,	// (0x00076cfc) call_video_uplink_pane_cp2

0x1568,	// (0x0006d73e) video_down_crop_pane_ParamLimits

0x1568,	// (0x0006d73e) video_down_crop_pane

0x1651,	// (0x0006d827) video_down_pane_ParamLimits

0x1651,	// (0x0006d827) video_down_pane

0xab2e,	// (0x00076d04) video_down_subqcif_pane_ParamLimits

0xab2e,	// (0x00076d04) video_down_subqcif_pane

0xab46,	// (0x00076d1c) video_down_subqcif_pane_cp_ParamLimits

0xab46,	// (0x00076d1c) video_down_subqcif_pane_cp

0xab6c,	// (0x00076d42) im_reading_pane_ParamLimits

0xab6c,	// (0x00076d42) im_reading_pane

0x1761,	// (0x0006d937) im_writing_pane_ParamLimits

0x1761,	// (0x0006d937) im_writing_pane

0x1777,	// (0x0006d94d) im_reading_pane_t1

0xab86,	// (0x00076d5c) list_im_pane

0xab97,	// (0x00076d6d) scroll_pane_cp07

0x17b1,	// (0x0006d987) im_writing_pane_t1_ParamLimits

0x17b1,	// (0x0006d987) im_writing_pane_t1

0xabb0,	// (0x00076d86) im_writing_pane_t2_ParamLimits

0xabb0,	// (0x00076d86) im_writing_pane_t2

0x0001,

0xf258,	// (0x0007b42e) im_writing_pane_t_ParamLimits

0xf258,	// (0x0007b42e) im_writing_pane_t

0x9fc4,	// (0x0007619a) input_focus_pane_cp04

0x9fc4,	// (0x0007619a) input_focus_pane_cp05

0x17c6,	// (0x0006d99c) list_im_single_pane_ParamLimits

0x17c6,	// (0x0006d99c) list_im_single_pane

0x17db,	// (0x0006d9b1) list_single_im_pane_t1

0x31e4,	// (0x0006f3ba) blid_accuracy_pane

0x31ec,	// (0x0006f3c2) blid_compass_pane

0x31f6,	// (0x0006f3cc) main_location_t1

0x3206,	// (0x0006f3dc) main_location_t2

0x3216,	// (0x0006f3ec) main_location_t3

0x0002,

0xf5d2,	// (0x0007b7a8) main_location_t

0x9fc4,	// (0x0007619a) aid_levels_location

0xa345,	// (0x0007651b) blid_accuracy_pane_g1

0xa345,	// (0x0007651b) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0007b490) blid_accuracy_pane_g

0xabf8,	// (0x00076dce) wml_content_pane

0xac36,	// (0x00076e0c) wml_button_pane_ParamLimits

0xac36,	// (0x00076e0c) wml_button_pane

0x17ea,	// (0x0006d9c0) wml_list_single_large_pane_ParamLimits

0x17ea,	// (0x0006d9c0) wml_list_single_large_pane

0x17ff,	// (0x0006d9d5) wml_list_single_medium_pane_ParamLimits

0x17ff,	// (0x0006d9d5) wml_list_single_medium_pane

0x1816,	// (0x0006d9ec) wml_list_single_small_pane_ParamLimits

0x1816,	// (0x0006d9ec) wml_list_single_small_pane

0xac4a,	// (0x00076e20) wml_selection_box_pane_ParamLimits

0xac4a,	// (0x00076e20) wml_selection_box_pane

0xac5d,	// (0x00076e33) wml_list_single_pane_t1

0xac6c,	// (0x00076e42) wml_list_single_medium_pane_t1

0xac7b,	// (0x00076e51) wml_list_single_large_pane_t1

0xac8a,	// (0x00076e60) input_focus_pane_cp02_ParamLimits

0xac8a,	// (0x00076e60) input_focus_pane_cp02

0xac9d,	// (0x00076e73) wml_selection_box_pane_g1

0xaca6,	// (0x00076e7c) wml_selection_box_pane_t1_ParamLimits

0xaca6,	// (0x00076e7c) wml_selection_box_pane_t1

0xa21f,	// (0x000763f5) bg_wml_button_pane_ParamLimits

0xa21f,	// (0x000763f5) bg_wml_button_pane

0xacbe,	// (0x00076e94) wml_button_pane_g1

0xacc6,	// (0x00076e9c) wml_button_pane_t1

0xacbe,	// (0x00076e94) wml_button_bg_pane_g1

0xacd6,	// (0x00076eac) wml_button_bg_pane_g2

0xacde,	// (0x00076eb4) wml_button_bg_pane_g3

0xace6,	// (0x00076ebc) wml_button_bg_pane_g4

0xacee,	// (0x00076ec4) wml_button_bg_pane_g5

0xacf6,	// (0x00076ecc) wml_button_bg_pane_g6

0xacfe,	// (0x00076ed4) wml_button_bg_pane_g7

0xad06,	// (0x00076edc) wml_button_bg_pane_g8

0xad0e,	// (0x00076ee4) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0007b433) wml_button_bg_pane_g

0x182f,	// (0x0006da05) bg_list_pane_cp02

0xad16,	// (0x00076eec) mce_header_pane_ParamLimits

0xad16,	// (0x00076eec) mce_header_pane

0xad2c,	// (0x00076f02) mce_icon_pane

0xad2c,	// (0x00076f02) mce_image_pane

0xad35,	// (0x00076f0b) mce_text_pane_ParamLimits

0xad35,	// (0x00076f0b) mce_text_pane

0x1837,	// (0x0006da0d) scroll_pane_cp03

0xac2e,	// (0x00076e04) scroll_pane_cp04

0xad48,	// (0x00076f1e) scroll_pane_cp05_ParamLimits

0xad48,	// (0x00076f1e) scroll_pane_cp05

0x1841,	// (0x0006da17) mce_header_field_pane_ParamLimits

0x1841,	// (0x0006da17) mce_header_field_pane

0x1858,	// (0x0006da2e) mce_header_field_pane_2_ParamLimits

0x1858,	// (0x0006da2e) mce_header_field_pane_2

0x186e,	// (0x0006da44) mce_header_field_pane_3

0x1876,	// (0x0006da4c) list_single_mce_message_pane_ParamLimits

0x1876,	// (0x0006da4c) list_single_mce_message_pane

0x188c,	// (0x0006da62) list_single_mce_smart_pane_ParamLimits

0x188c,	// (0x0006da62) list_single_mce_smart_pane

0xad54,	// (0x00076f2a) input_focus_pane_cp03

0xad5d,	// (0x00076f33) list_header_data_pane

0x18ad,	// (0x0006da83) mce_header_field_pane_t1

0x18bd,	// (0x0006da93) list_single_mce_header_pane_ParamLimits

0x18bd,	// (0x0006da93) list_single_mce_header_pane

0xad65,	// (0x00076f3b) list_single_mce_header_pane_t1

0xad74,	// (0x00076f4a) list_single_mce_message_pane_g1

0xad7c,	// (0x00076f52) list_single_mce_message_pane_t1

0x18f7,	// (0x0006dacd) bg_cale_heading_pane_cp01_ParamLimits

0x18f7,	// (0x0006dacd) bg_cale_heading_pane_cp01

0xad8a,	// (0x00076f60) bg_cale_pane_cp02_ParamLimits

0xad8a,	// (0x00076f60) bg_cale_pane_cp02

0x1931,	// (0x0006db07) cale_month_corner_pane

0x1950,	// (0x0006db26) cale_month_day_heading_pane_ParamLimits

0x1950,	// (0x0006db26) cale_month_day_heading_pane

0x19a2,	// (0x0006db78) cale_month_pane_g1_ParamLimits

0x19a2,	// (0x0006db78) cale_month_pane_g1

0x19d1,	// (0x0006dba7) cale_month_pane_g2_ParamLimits

0x19d1,	// (0x0006dba7) cale_month_pane_g2

0x1a01,	// (0x0006dbd7) cale_month_pane_g3_ParamLimits

0x1a01,	// (0x0006dbd7) cale_month_pane_g3

0x1a3d,	// (0x0006dc13) cale_month_pane_g4_ParamLimits

0x1a3d,	// (0x0006dc13) cale_month_pane_g4

0x1a79,	// (0x0006dc4f) cale_month_pane_g5_ParamLimits

0x1a79,	// (0x0006dc4f) cale_month_pane_g5

0x1ac1,	// (0x0006dc97) cale_month_pane_g6_ParamLimits

0x1ac1,	// (0x0006dc97) cale_month_pane_g6

0x1b0d,	// (0x0006dce3) cale_month_pane_g7_ParamLimits

0x1b0d,	// (0x0006dce3) cale_month_pane_g7

0x1b5d,	// (0x0006dd33) cale_month_pane_g8_ParamLimits

0x1b5d,	// (0x0006dd33) cale_month_pane_g8

0x1bb1,	// (0x0006dd87) cale_month_pane_g9_ParamLimits

0x1bb1,	// (0x0006dd87) cale_month_pane_g9

0x1c03,	// (0x0006ddd9) cale_month_pane_g10_ParamLimits

0x1c03,	// (0x0006ddd9) cale_month_pane_g10

0x1c55,	// (0x0006de2b) cale_month_pane_g11_ParamLimits

0x1c55,	// (0x0006de2b) cale_month_pane_g11

0x1ca7,	// (0x0006de7d) cale_month_pane_g12_ParamLimits

0x1ca7,	// (0x0006de7d) cale_month_pane_g12

0x1cf9,	// (0x0006decf) cale_month_pane_g13_ParamLimits

0x1cf9,	// (0x0006decf) cale_month_pane_g13

0x000c,

0xf270,	// (0x0007b446) cale_month_pane_g_ParamLimits

0xf270,	// (0x0007b446) cale_month_pane_g

0x1d4b,	// (0x0006df21) cale_month_week_pane

0x1d6f,	// (0x0006df45) grid_cale_month_pane_ParamLimits

0x1d6f,	// (0x0006df45) grid_cale_month_pane

0x1db8,	// (0x0006df8e) cale_month_day_heading_pane_t1

0x1dfa,	// (0x0006dfd0) cale_month_day_heading_pane_t2

0x1e2f,	// (0x0006e005) cale_month_day_heading_pane_t3

0x1e64,	// (0x0006e03a) cale_month_day_heading_pane_t4

0x1ea1,	// (0x0006e077) cale_month_day_heading_pane_t5

0x1ee6,	// (0x0006e0bc) cale_month_day_heading_pane_t6

0x1f2b,	// (0x0006e101) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0007b461) cale_month_day_heading_pane_t

0xaa2a,	// (0x00076c00) bg_cale_side_pane_cp01

0x1f78,	// (0x0006e14e) cale_month_week_pane_t1

0x1f91,	// (0x0006e167) cale_month_week_pane_t2

0x1faa,	// (0x0006e180) cale_month_week_pane_t3

0x1fc3,	// (0x0006e199) cale_month_week_pane_t4

0x1fdc,	// (0x0006e1b2) cale_month_week_pane_t5

0x1ff5,	// (0x0006e1cb) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0007b470) cale_month_week_pane_t

0x200e,	// (0x0006e1e4) cell_cale_month_pane_ParamLimits

0x200e,	// (0x0006e1e4) cell_cale_month_pane

0x9811,	// (0x000759e7) cell_cale_month_pane_g1

0x2166,	// (0x0006e33c) cell_cale_month_pane_t1_ParamLimits

0x2166,	// (0x0006e33c) cell_cale_month_pane_t1

0xaa38,	// (0x00076c0e) grid_highlight_pane_cp08

0xa345,	// (0x0007651b) main_smil_g1

0x2192,	// (0x0006e368) smil_status_pane

0xadc9,	// (0x00076f9f) smil_text_pane

0xc704,	// (0x000788da) bg_popup_call3_rect_pane_g8

0xc70c,	// (0x000788e2) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0007b729) bg_popup_call3_rect_pane_g

0xc993,	// (0x00078b69) smil_status_volume_pane_g1

0xadd3,	// (0x00076fa9) smil_status_pane_t1

0x9957,	// (0x00075b2d) volume_smil_pane

0xadea,	// (0x00076fc0) list_smil_text_pane

0x21a7,	// (0x0006e37d) scroll_pane_cp011

0x21b2,	// (0x0006e388) smil_text_list_pane_t1_ParamLimits

0x21b2,	// (0x0006e388) smil_text_list_pane_t1

0x981d,	// (0x000759f3) aid_volume_smil_ParamLimits

0x981d,	// (0x000759f3) aid_volume_smil

0xa345,	// (0x0007651b) smil_volume_pane_g1

0xa345,	// (0x0007651b) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0007b490) smil_volume_pane_g

0x0a0d,	// (0x0006cbe3) listscroll_cale_day_pane

0xadf4,	// (0x00076fca) bg_cale_pane

0xae0c,	// (0x00076fe2) list_cale_pane

0xae2f,	// (0x00077005) scroll_pane_cp09

0xae40,	// (0x00077016) cale_bg_pane_g1

0xae48,	// (0x0007701e) cale_bg_pane_g2

0xae50,	// (0x00077026) cale_bg_pane_g3

0xae58,	// (0x0007702e) cale_bg_pane_g4

0xae60,	// (0x00077036) cale_bg_pane_g5

0xae68,	// (0x0007703e) cale_bg_pane_g6

0xae70,	// (0x00077046) cale_bg_pane_g7

0xae78,	// (0x0007704e) cale_bg_pane_g8

0xae80,	// (0x00077056) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0007b495) cale_bg_pane_g

0x21fe,	// (0x0006e3d4) list_cale_time_pane_ParamLimits

0x21fe,	// (0x0006e3d4) list_cale_time_pane

0xae88,	// (0x0007705e) list_cale_time_pane_g1_ParamLimits

0xae88,	// (0x0007705e) list_cale_time_pane_g1

0xae94,	// (0x0007706a) list_cale_time_pane_g2_ParamLimits

0xae94,	// (0x0007706a) list_cale_time_pane_g2

0x2214,	// (0x0006e3ea) list_cale_time_pane_g3_ParamLimits

0x2214,	// (0x0006e3ea) list_cale_time_pane_g3

0x2222,	// (0x0006e3f8) list_cale_time_pane_g4_ParamLimits

0x2222,	// (0x0006e3f8) list_cale_time_pane_g4

0x2230,	// (0x0006e406) list_cale_time_pane_g5_ParamLimits

0x2230,	// (0x0006e406) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0007b4a8) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0007b4a8) list_cale_time_pane_g

0xaeae,	// (0x00077084) list_cale_time_pane_t1_ParamLimits

0xaeae,	// (0x00077084) list_cale_time_pane_t1

0xaed6,	// (0x000770ac) list_cale_time_pane_t2_ParamLimits

0xaed6,	// (0x000770ac) list_cale_time_pane_t2

0x25b2,	// (0x0006e788) aid_blid_cardinal_pane

0x25f0,	// (0x0006e7c6) compass_pane_t4

0xaefe,	// (0x000770d4) list_cale_time_pane_t4_ParamLimits

0xaefe,	// (0x000770d4) list_cale_time_pane_t4

0x25fe,	// (0x0006e7d4) compass_pane_t5

0x260c,	// (0x0006e7e2) compass_pane_t6

0x261a,	// (0x0006e7f0) compass_pane_t7

0xb382,	// (0x00077558) navi_pane_cc_t1

0xb56d,	// (0x00077743) aid_phob_thumbnail_center_pane

0x2bfa,	// (0x0006edd0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0007b4b5) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0007b4b5) list_cale_time_pane_t

0x948b,	// (0x00075661) bg_popup_window_pane_cp02_ParamLimits

0x948b,	// (0x00075661) bg_popup_window_pane_cp02

0xaf26,	// (0x000770fc) heading_pane_cp01_ParamLimits

0xaf26,	// (0x000770fc) heading_pane_cp01

0xaf32,	// (0x00077108) loc_req_pane_ParamLimits

0xaf32,	// (0x00077108) loc_req_pane

0xaf42,	// (0x00077118) loc_type_pane_ParamLimits

0xaf42,	// (0x00077118) loc_type_pane

0xaf54,	// (0x0007712a) loc_type_pane_t1_ParamLimits

0xaf54,	// (0x0007712a) loc_type_pane_t1

0xaf66,	// (0x0007713c) loc_type_pane_t2_ParamLimits

0xaf66,	// (0x0007713c) loc_type_pane_t2

0xaf78,	// (0x0007714e) loc_type_pane_t3_ParamLimits

0xaf78,	// (0x0007714e) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0007b4bc) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0007b4bc) loc_type_pane_t

0xaf8a,	// (0x00077160) list_loc_req_pane

0xaf94,	// (0x0007716a) scroll_pane_cp012

0x223e,	// (0x0006e414) list_single_loc_request_popup_menu_pane_ParamLimits

0x223e,	// (0x0006e414) list_single_loc_request_popup_menu_pane

0xaf9f,	// (0x00077175) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9f,	// (0x00077175) list_single_loc_request_popup_menu_pane_g1

0xafab,	// (0x00077181) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafab,	// (0x00077181) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0007b4c3) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0007b4c3) list_single_loc_request_popup_menu_pane_g

0xafb7,	// (0x0007718d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb7,	// (0x0007718d) list_single_loc_request_popup_menu_pane_t1

0xa21f,	// (0x000763f5) bg_popup_window_pane_cp03_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_window_pane_cp03

0xafcd,	// (0x000771a3) heading_loc_req_pane_ParamLimits

0xafcd,	// (0x000771a3) heading_loc_req_pane

0x224b,	// (0x0006e421) popup_dyc_status_message_window_g1_ParamLimits

0x224b,	// (0x0006e421) popup_dyc_status_message_window_g1

0x225f,	// (0x0006e435) popup_dyc_status_message_window_t1_ParamLimits

0x225f,	// (0x0006e435) popup_dyc_status_message_window_t1

0x2274,	// (0x0006e44a) popup_dyc_status_message_window_t2_ParamLimits

0x2274,	// (0x0006e44a) popup_dyc_status_message_window_t2

0x2289,	// (0x0006e45f) popup_dyc_status_message_window_t3_ParamLimits

0x2289,	// (0x0006e45f) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0007b4c8) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0007b4c8) popup_dyc_status_message_window_t

0x9fc4,	// (0x0007619a) bg_heading_pane_cp01

0xafd9,	// (0x000771af) heading_loc_req_pane_g1

0xafe1,	// (0x000771b7) heading_loc_req_pane_g2

0xafe9,	// (0x000771bf) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0007b4cf) heading_loc_req_pane_g

0xaff1,	// (0x000771c7) heading_loc_req_pane_t1

0xb000,	// (0x000771d6) bg_popup_sub_pane_cp01_ParamLimits

0xb000,	// (0x000771d6) bg_popup_sub_pane_cp01

0xb00e,	// (0x000771e4) popup_cale_events_window_g1_ParamLimits

0xb00e,	// (0x000771e4) popup_cale_events_window_g1

0xb02e,	// (0x00077204) popup_cale_events_window_g2_ParamLimits

0xb02e,	// (0x00077204) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0007b503) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0007b503) popup_cale_events_window_g

0xb04e,	// (0x00077224) popup_cale_events_window_t1_ParamLimits

0xb04e,	// (0x00077224) popup_cale_events_window_t1

0xb060,	// (0x00077236) popup_cale_events_window_t2_ParamLimits

0xb060,	// (0x00077236) popup_cale_events_window_t2

0xb09e,	// (0x00077274) popup_cale_events_window_t3_ParamLimits

0xb09e,	// (0x00077274) popup_cale_events_window_t3

0xb0d8,	// (0x000772ae) popup_cale_events_window_t4_ParamLimits

0xb0d8,	// (0x000772ae) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0007b508) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0007b508) popup_cale_events_window_t

0x2382,	// (0x0006e558) call_type_pane

0x2392,	// (0x0006e568) popup_call_status_window_g1

0x23a6,	// (0x0006e57c) popup_call_status_window_g2

0x23ba,	// (0x0006e590) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0007b511) popup_call_status_window_g

0xb10e,	// (0x000772e4) call_type_pane_g1

0xb117,	// (0x000772ed) call_type_pane_g2

0x0001,

0xf342,	// (0x0007b518) call_type_pane_g

0x9fc4,	// (0x0007619a) bg_popup_sub_pane_cp02

0xb120,	// (0x000772f6) listscroll_popup_wml_pane

0xb128,	// (0x000772fe) list_wml_pane

0xb132,	// (0x00077308) scroll_pane_cp013

0xb13d,	// (0x00077313) list_single_graphic_popup_wml_pane_ParamLimits

0xb13d,	// (0x00077313) list_single_graphic_popup_wml_pane

0xa345,	// (0x0007651b) list_single_graphic_popup_wml_pane_g1

0xb151,	// (0x00077327) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0007b51d) list_single_graphic_popup_wml_pane_g

0xb159,	// (0x0007732f) list_single_graphic_popup_wml_pane_t1

0xb16f,	// (0x00077345) aid_call_pane

0xa217,	// (0x000763ed) popup_clock_analogue_window_g1

0xa217,	// (0x000763ed) popup_clock_analogue_window_g2

0x983f,	// (0x00075a15) popup_clock_analogue_window_g3

0x983f,	// (0x00075a15) popup_clock_analogue_window_g4

0xa345,	// (0x0007651b) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0007b522) popup_clock_analogue_window_g

0x9847,	// (0x00075a1d) popup_clock_analogue_window_t1

0x9855,	// (0x00075a2b) clock_digital_number_pane_ParamLimits

0x9855,	// (0x00075a2b) clock_digital_number_pane

0x9861,	// (0x00075a37) clock_digital_number_pane_cp02_ParamLimits

0x9861,	// (0x00075a37) clock_digital_number_pane_cp02

0x986d,	// (0x00075a43) clock_digital_number_pane_cp03_ParamLimits

0x986d,	// (0x00075a43) clock_digital_number_pane_cp03

0x9879,	// (0x00075a4f) clock_digital_number_pane_cp04_ParamLimits

0x9879,	// (0x00075a4f) clock_digital_number_pane_cp04

0x9885,	// (0x00075a5b) clock_digital_separator_pane_ParamLimits

0x9885,	// (0x00075a5b) clock_digital_separator_pane

0x9891,	// (0x00075a67) popup_clock_digital_window_t1

0xa345,	// (0x0007651b) clock_digital_number_pane_g1

0xa345,	// (0x0007651b) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0007b490) clock_digital_number_pane_g

0xa345,	// (0x0007651b) clock_digital_separator_pane_g1

0xa345,	// (0x0007651b) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0007b490) clock_digital_separator_pane_g

0x9fc4,	// (0x0007619a) bg_popup_window_pane_cp04

0xb177,	// (0x0007734d) heading_pane_cp03

0xb17f,	// (0x00077355) listscroll_popup_gms_pane

0xb187,	// (0x0007735d) grid_large_graphic_popup_pane

0xb191,	// (0x00077367) listscroll_popup_gms_pane_g1

0xb199,	// (0x0007736f) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0007b52d) listscroll_popup_gms_pane_g

0xac2e,	// (0x00076e04) scroll_pane_cp014

0x23c9,	// (0x0006e59f) cell_large_graphic_popup_pane_ParamLimits

0x23c9,	// (0x0006e59f) cell_large_graphic_popup_pane

0x23e1,	// (0x0006e5b7) cell_large_graphic_popup_pane_g1_ParamLimits

0x23e1,	// (0x0006e5b7) cell_large_graphic_popup_pane_g1

0xb1a1,	// (0x00077377) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1a1,	// (0x00077377) cell_large_graphic_popup_pane_g2

0xb1ad,	// (0x00077383) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1ad,	// (0x00077383) cell_large_graphic_popup_pane_g3

0xb1ba,	// (0x00077390) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1ba,	// (0x00077390) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0007b532) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0007b532) cell_large_graphic_popup_pane_g

0xb1ca,	// (0x000773a0) grid_highlight_pane_cp010

0xa345,	// (0x0007651b) bg_popup_call_pane_g1

0xb1d4,	// (0x000773aa) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d4,	// (0x000773aa) list_single_graphic_popup_conf_pane

0xb1e7,	// (0x000773bd) list_highlight_pane_cp01

0xb1f0,	// (0x000773c6) list_single_graphic_popup_conf_pane_g1

0xb1f8,	// (0x000773ce) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0007b53b) list_single_graphic_popup_conf_pane_g

0xb200,	// (0x000773d6) list_single_graphic_popup_conf_pane_t1

0xb20e,	// (0x000773e4) linegrid_cams_pane_g1

0x23ed,	// (0x0006e5c3) linegrid_cams_pane_g2

0xaa6b,	// (0x00076c41) linegrid_cams_pane_g3

0xb217,	// (0x000773ed) linegrid_cams_pane_g4

0x23f6,	// (0x0006e5cc) linegrid_cams_pane_g5

0x23ff,	// (0x0006e5d5) linegrid_cams_pane_g6

0xaa74,	// (0x00076c4a) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0007b540) linegrid_cams_pane_g

0xb220,	// (0x000773f6) popup_clock_analogue_window

0xb220,	// (0x000773f6) popup_clock_digital_window

0x9fc4,	// (0x0007619a) popup_phob_thumbnail_window

0xa345,	// (0x0007651b) call_video_uplink_pane_g1

0xb229,	// (0x000773ff) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0007b54f) call_video_uplink_pane_g

0xb231,	// (0x00077407) video_uplink_pane

0xb239,	// (0x0007740f) mce_image_pane_g1

0x240a,	// (0x0006e5e0) mce_image_pane_g2

0x2412,	// (0x0006e5e8) mce_image_pane_g3

0x241a,	// (0x0006e5f0) mce_image_pane_g4

0x2424,	// (0x0006e5fa) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0007b554) mce_image_pane_g

0xb243,	// (0x00077419) control_top_pane_stacon_cp01_ParamLimits

0xb243,	// (0x00077419) control_top_pane_stacon_cp01

0xb257,	// (0x0007742d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb257,	// (0x0007742d) uni_indicator_pane_stacon_cp01

0xb268,	// (0x0007743e) bg_popup_sub_pane_cp03

0x242c,	// (0x0006e602) chi_dic_find_pane

0x2434,	// (0x0006e60a) listscroll_chi_dic_pane

0x243d,	// (0x0006e613) main_pane_chidic_g1

0x2450,	// (0x0006e626) chi_dic_find_pane_t1

0xb272,	// (0x00077448) find_chidic_pane

0xb27b,	// (0x00077451) chi_dic_list_pane_ParamLimits

0xb27b,	// (0x00077451) chi_dic_list_pane

0xb28c,	// (0x00077462) scroll_pane_cp020

0x245e,	// (0x0006e634) find_chidic_pane_t1

0x9fc4,	// (0x0007619a) input_focus_pane_cp06

0x246d,	// (0x0006e643) list_chi_dic_pane_ParamLimits

0x246d,	// (0x0006e643) list_chi_dic_pane

0x247f,	// (0x0006e655) list_chi_dic_pane_t1_ParamLimits

0x247f,	// (0x0006e655) list_chi_dic_pane_t1

0x9fc4,	// (0x0007619a) list_highlight_pane_cp020

0xb294,	// (0x0007746a) bg_cale_heading_pane_g1

0x2492,	// (0x0006e668) bg_cale_heading_pane_g2

0x249a,	// (0x0006e670) bg_cale_heading_pane_g3

0x24a2,	// (0x0006e678) bg_cale_heading_pane_g4

0x24ac,	// (0x0006e682) bg_cale_heading_pane_g5

0x24b6,	// (0x0006e68c) bg_cale_heading_pane_g6

0x24be,	// (0x0006e694) bg_cale_heading_pane_g7

0x24c6,	// (0x0006e69c) bg_cale_heading_pane_g8

0x24d0,	// (0x0006e6a6) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0007b55f) bg_cale_heading_pane_g

0xb294,	// (0x0007746a) bg_cale_side_pane_g1

0x24da,	// (0x0006e6b0) bg_cale_side_pane_g2

0x24e2,	// (0x0006e6b8) bg_cale_side_pane_g3

0x24ea,	// (0x0006e6c0) bg_cale_side_pane_g4

0x24f2,	// (0x0006e6c8) bg_cale_side_pane_g5

0x24fa,	// (0x0006e6d0) bg_cale_side_pane_g6

0x2502,	// (0x0006e6d8) bg_cale_side_pane_g7

0x250a,	// (0x0006e6e0) bg_cale_side_pane_g8

0x2512,	// (0x0006e6e8) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0007b572) bg_cale_side_pane_g

0x251a,	// (0x0006e6f0) popup_call_status_window_ParamLimits

0x251a,	// (0x0006e6f0) popup_call_status_window

0xb29c,	// (0x00077472) stacon_top_pane

0xb2a4,	// (0x0007747a) status_pane_ParamLimits

0xb2a4,	// (0x0007747a) status_pane

0xb2b9,	// (0x0007748f) status_small_pane

0xb2c1,	// (0x00077497) control_pane

0x9fc4,	// (0x0007619a) stacon_bottom_pane

0xb2c9,	// (0x0007749f) list_single_mce_smart_pane_t1_ParamLimits

0xb2c9,	// (0x0007749f) list_single_mce_smart_pane_t1

0xb2dc,	// (0x000774b2) list_single_mce_smart_pane_t2_ParamLimits

0xb2dc,	// (0x000774b2) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0007b585) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0007b585) list_single_mce_smart_pane_t

0x2561,	// (0x0006e737) compass_pane

0x256a,	// (0x0006e740) main_location2_pane_t1

0x257c,	// (0x0006e752) main_location2_pane_t2

0x258e,	// (0x0006e764) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0007b58a) main_location2_pane_t

0xb2fb,	// (0x000774d1) compass_pane_g1_ParamLimits

0xb2fb,	// (0x000774d1) compass_pane_g1

0x25d2,	// (0x0006e7a8) compass_pane_t1

0x25e1,	// (0x0006e7b7) compass_pane_t2

0x0005,

0xf3bd,	// (0x0007b593) compass_pane_t

0x2628,	// (0x0006e7fe) text_secondary_cp61

0xb379,	// (0x0007754f) navi_pane_cams_g5

0xb3f5,	// (0x000775cb) navi_pane_im_t1

0xb403,	// (0x000775d9) navi_pane_mp_g1_ParamLimits

0xb403,	// (0x000775d9) navi_pane_mp_g1

0xb417,	// (0x000775ed) navi_pane_mp_g2_ParamLimits

0xb417,	// (0x000775ed) navi_pane_mp_g2

0xb431,	// (0x00077607) navi_pane_mp_g3_ParamLimits

0xb431,	// (0x00077607) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0007b5a7) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0007b5a7) navi_pane_mp_g

0xb43d,	// (0x00077613) navi_pane_mp_t1

0xb44b,	// (0x00077621) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0007b5ae) navi_pane_mp_t

0xb4b6,	// (0x0007768c) navi_pane_vt_g1

0xb43d,	// (0x00077613) navi_pane_vt_t1

0xb4be,	// (0x00077694) navi_slider_pane

0xaa85,	// (0x00076c5b) zooming_pane

0xb4ce,	// (0x000776a4) navi_slider_pane_g1

0x98ae,	// (0x00075a84) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0007b5b5) navi_slider_pane_g

0xb4f2,	// (0x000776c8) aid_levels_zoom

0xb4fa,	// (0x000776d0) zooming_pane_g1

0xb502,	// (0x000776d8) zooming_pane_g2

0xb502,	// (0x000776d8) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0007b5c4) zooming_pane_g

0xb50a,	// (0x000776e0) level_10_zoom

0xb513,	// (0x000776e9) level_11_zoom

0xb51c,	// (0x000776f2) level_1_zoom

0xb525,	// (0x000776fb) level_2_zoom

0xb52e,	// (0x00077704) level_3_zoom

0xb537,	// (0x0007770d) level_4_zoom

0xb540,	// (0x00077716) level_5_zoom

0xb549,	// (0x0007771f) level_6_zoom

0xb552,	// (0x00077728) level_7_zoom

0xb55b,	// (0x00077731) level_8_zoom

0xb564,	// (0x0007773a) level_9_zoom

0xb575,	// (0x0007774b) popup_phob_thumbnail_window_g1

0xb57d,	// (0x00077753) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0007b5cb) popup_phob_thumbnail_window_g

0xc8a6,	// (0x00078a7c) level_1_location

0xc8ae,	// (0x00078a84) level_2_location

0xc8b6,	// (0x00078a8c) level_3_location

0xc8be,	// (0x00078a94) level_4_location

0xaa85,	// (0x00076c5b) level_5_location

0x2679,	// (0x0006e84f) mce_icon_pane_g1

0x2683,	// (0x0006e859) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0007b5d0) mce_icon_pane_g

0x268b,	// (0x0006e861) main_mup_pane_g1_ParamLimits

0x268b,	// (0x0006e861) main_mup_pane_g1

0x26a1,	// (0x0006e877) main_mup_pane_g2_ParamLimits

0x26a1,	// (0x0006e877) main_mup_pane_g2

0x26b3,	// (0x0006e889) main_mup_pane_g3_ParamLimits

0x26b3,	// (0x0006e889) main_mup_pane_g3

0x26c5,	// (0x0006e89b) main_mup_pane_g4_ParamLimits

0x26c5,	// (0x0006e89b) main_mup_pane_g4

0x26dd,	// (0x0006e8b3) main_mup_pane_g5_ParamLimits

0x26dd,	// (0x0006e8b3) main_mup_pane_g5

0x26f9,	// (0x0006e8cf) main_mup_pane_g6_ParamLimits

0x26f9,	// (0x0006e8cf) main_mup_pane_g6

0x2711,	// (0x0006e8e7) main_mup_pane_g7_ParamLimits

0x2711,	// (0x0006e8e7) main_mup_pane_g7

0x2729,	// (0x0006e8ff) main_mup_pane_g8_ParamLimits

0x2729,	// (0x0006e8ff) main_mup_pane_g8

0x2741,	// (0x0006e917) main_mup_pane_g9_ParamLimits

0x2741,	// (0x0006e917) main_mup_pane_g9

0x275b,	// (0x0006e931) main_mup_pane_g10_ParamLimits

0x275b,	// (0x0006e931) main_mup_pane_g10

0x2775,	// (0x0006e94b) main_mup_pane_g11_ParamLimits

0x2775,	// (0x0006e94b) main_mup_pane_g11

0x2789,	// (0x0006e95f) main_mup_pane_g12_ParamLimits

0x2789,	// (0x0006e95f) main_mup_pane_g12

0x279f,	// (0x0006e975) main_mup_pane_g13_ParamLimits

0x279f,	// (0x0006e975) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0007b5d5) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0007b5d5) main_mup_pane_g

0x27b3,	// (0x0006e989) main_mup_pane_t1_ParamLimits

0x27b3,	// (0x0006e989) main_mup_pane_t1

0x27cd,	// (0x0006e9a3) main_mup_pane_t2_ParamLimits

0x27cd,	// (0x0006e9a3) main_mup_pane_t2

0x27e5,	// (0x0006e9bb) main_mup_pane_t3_ParamLimits

0x27e5,	// (0x0006e9bb) main_mup_pane_t3

0x27fd,	// (0x0006e9d3) main_mup_pane_t4_ParamLimits

0x27fd,	// (0x0006e9d3) main_mup_pane_t4

0x281b,	// (0x0006e9f1) main_mup_pane_t5_ParamLimits

0x281b,	// (0x0006e9f1) main_mup_pane_t5

0x2830,	// (0x0006ea06) main_mup_pane_t6_ParamLimits

0x2830,	// (0x0006ea06) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0007b5f0) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0007b5f0) main_mup_pane_t

0x2842,	// (0x0006ea18) mup_progress_pane_ParamLimits

0x2842,	// (0x0006ea18) mup_progress_pane

0x284e,	// (0x0006ea24) mup_visualizer_pane_ParamLimits

0x284e,	// (0x0006ea24) mup_visualizer_pane

0x2882,	// (0x0006ea58) mup_volume_pane_ParamLimits

0x2882,	// (0x0006ea58) mup_volume_pane

0xb423,	// (0x000775f9) mup_visualizer_pane_g1_ParamLimits

0xb423,	// (0x000775f9) mup_visualizer_pane_g1

0xb423,	// (0x000775f9) mup_visualizer_pane_g2_ParamLimits

0xb423,	// (0x000775f9) mup_visualizer_pane_g2

0xb2fb,	// (0x000774d1) mup_visualizer_pane_g3_ParamLimits

0xb2fb,	// (0x000774d1) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0007b5fd) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0007b5fd) mup_visualizer_pane_g

0xa345,	// (0x0007651b) mup_volume_pane_g1

0xb58d,	// (0x00077763) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0007b604) mup_volume_pane_g

0xa345,	// (0x0007651b) mup_progress_pane_g1

0xb596,	// (0x0007776c) mup_progress_pane_g2

0xb59f,	// (0x00077775) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0007b609) mup_progress_pane_g

0x9fc4,	// (0x0007619a) bg_popup_window_pane_cp05

0xb5a8,	// (0x0007777e) heading_pane_cp02_ParamLimits

0xb5a8,	// (0x0007777e) heading_pane_cp02

0xb5c2,	// (0x00077798) list_popup_blid_pane

0xb5ca,	// (0x000777a0) list_blid_sat_info_pane_ParamLimits

0xb5ca,	// (0x000777a0) list_blid_sat_info_pane

0xb5dd,	// (0x000777b3) list_blid_sat_info_pane_g1

0xb5e5,	// (0x000777bb) list_blid_sat_info_pane_t1

0x2998,	// (0x0006eb6e) mup_equalizer_pane_ParamLimits

0x2998,	// (0x0006eb6e) mup_equalizer_pane

0x29b1,	// (0x0006eb87) mup_equalizer_pane_cp1_ParamLimits

0x29b1,	// (0x0006eb87) mup_equalizer_pane_cp1

0x29ce,	// (0x0006eba4) mup_equalizer_pane_cp2_ParamLimits

0x29ce,	// (0x0006eba4) mup_equalizer_pane_cp2

0x29eb,	// (0x0006ebc1) mup_equalizer_pane_cp3_ParamLimits

0x29eb,	// (0x0006ebc1) mup_equalizer_pane_cp3

0x2a0c,	// (0x0006ebe2) mup_equalizer_pane_cp4_ParamLimits

0x2a0c,	// (0x0006ebe2) mup_equalizer_pane_cp4

0x2a2d,	// (0x0006ec03) mup_equalizer_pane_cp5

0x2a41,	// (0x0006ec17) mup_equalizer_pane_cp6

0x2a55,	// (0x0006ec2b) mup_equalizer_pane_cp7

0xc784,	// (0x0007895a) bg_popup_call_poc_act_pane_g9

0xc78c,	// (0x00078962) bg_popup_call_poc_act_pane_g10

0xc794,	// (0x0007896a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa21f,	// (0x000763f5) mup_scale_pane

0xa345,	// (0x0007651b) mup_scale_pane_g1

0xb5f3,	// (0x000777c9) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0007b625) mup_scale_pane_g

0xb617,	// (0x000777ed) msg_data_pane

0xb61f,	// (0x000777f5) scroll_pane_cp017

0x2a7b,	// (0x0006ec51) bg_list_pane_cp04_ParamLimits

0x2a7b,	// (0x0006ec51) bg_list_pane_cp04

0xb627,	// (0x000777fd) msg_data_pane_g1

0x2a93,	// (0x0006ec69) msg_data_pane_g2

0x2a9b,	// (0x0006ec71) msg_data_pane_g3

0x2aa3,	// (0x0006ec79) msg_data_pane_g4

0x2aab,	// (0x0006ec81) msg_data_pane_g5

0x2ab3,	// (0x0006ec89) msg_data_pane_g6

0x2abb,	// (0x0006ec91) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0007b634) msg_data_pane_g

0x2ac3,	// (0x0006ec99) msg_text_pane_ParamLimits

0x2ac3,	// (0x0006ec99) msg_text_pane

0x2af2,	// (0x0006ecc8) qrid_highlight_pane_cp011_ParamLimits

0x2af2,	// (0x0006ecc8) qrid_highlight_pane_cp011

0x9fc4,	// (0x0007619a) msg_body_pane

0x9fc4,	// (0x0007619a) msg_header_pane

0xb638,	// (0x0007780e) input_focus_pane_cp07

0xa3fc,	// (0x000765d2) msg_header_pane_t1_ParamLimits

0xa3fc,	// (0x000765d2) msg_header_pane_t1

0xa40e,	// (0x000765e4) msg_header_pane_t2_ParamLimits

0xa40e,	// (0x000765e4) msg_header_pane_t2

0x0001,

0xf472,	// (0x0007b648) msg_header_pane_t_ParamLimits

0xf472,	// (0x0007b648) msg_header_pane_t

0xb64d,	// (0x00077823) msg_body_pane_g1

0xa420,	// (0x000765f6) msg_body_pane_t1_ParamLimits

0xa420,	// (0x000765f6) msg_body_pane_t1

0xa451,	// (0x00076627) msg_body_pane_t2_ParamLimits

0xa451,	// (0x00076627) msg_body_pane_t2

0xa463,	// (0x00076639) msg_body_pane_t3_ParamLimits

0xa463,	// (0x00076639) msg_body_pane_t3

0x0002,

0xf477,	// (0x0007b64d) msg_body_pane_t_ParamLimits

0xf477,	// (0x0007b64d) msg_body_pane_t

0x2b50,	// (0x0006ed26) main_viewer_pane_g1_ParamLimits

0x2b50,	// (0x0006ed26) main_viewer_pane_g1

0x2b5e,	// (0x0006ed34) main_viewer_pane_g2_ParamLimits

0x2b5e,	// (0x0006ed34) main_viewer_pane_g2

0x2b6c,	// (0x0006ed42) main_viewer_pane_g3_ParamLimits

0x2b6c,	// (0x0006ed42) main_viewer_pane_g3

0x2b7b,	// (0x0006ed51) main_viewer_pane_g4_ParamLimits

0x2b7b,	// (0x0006ed51) main_viewer_pane_g4

0x98d8,	// (0x00075aae) main_viewer_pane_g5_ParamLimits

0x98d8,	// (0x00075aae) main_viewer_pane_g5

0x98d8,	// (0x00075aae) main_viewer_pane_g7_ParamLimits

0x98d8,	// (0x00075aae) main_viewer_pane_g7

0xaf9f,	// (0x00077175) main_viewer_pane_g8_ParamLimits

0xaf9f,	// (0x00077175) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0007b65d) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0007b65d) main_viewer_pane_g

0xb655,	// (0x0007782b) viewer_content_pane_ParamLimits

0xb655,	// (0x0007782b) viewer_content_pane

0x2bb7,	// (0x0006ed8d) main_postcard_pane_g1_ParamLimits

0x2bb7,	// (0x0006ed8d) main_postcard_pane_g1

0x2bcd,	// (0x0006eda3) main_postcard_pane_g2_ParamLimits

0x2bcd,	// (0x0006eda3) main_postcard_pane_g2

0x2be3,	// (0x0006edb9) main_postcard_pane_g3_ParamLimits

0x2be3,	// (0x0006edb9) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0007b66e) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0007b66e) main_postcard_pane_g

0x2bfa,	// (0x0006edd0) main_postcard_pane_g4

0xc9a6,	// (0x00078b7c) smil_status_volume_pane_g2

0x2c3d,	// (0x0006ee13) postcard_pane_ParamLimits

0x2c3d,	// (0x0006ee13) postcard_pane

0xb663,	// (0x00077839) postcard_pane_g1_ParamLimits

0xb663,	// (0x00077839) postcard_pane_g1

0x2c7f,	// (0x0006ee55) postcard_pane_g2_ParamLimits

0x2c7f,	// (0x0006ee55) postcard_pane_g2

0x2c8b,	// (0x0006ee61) postcard_pane_g3_ParamLimits

0x2c8b,	// (0x0006ee61) postcard_pane_g3

0xb671,	// (0x00077847) postcard_pane_g4_ParamLimits

0xb671,	// (0x00077847) postcard_pane_g4

0x2c97,	// (0x0006ee6d) postcard_pane_g5_ParamLimits

0x2c97,	// (0x0006ee6d) postcard_pane_g5

0x2cac,	// (0x0006ee82) postcard_pane_g6_ParamLimits

0x2cac,	// (0x0006ee82) postcard_pane_g6

0xb663,	// (0x00077839) postcard_pane_g7_ParamLimits

0xb663,	// (0x00077839) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0007b67b) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0007b67b) postcard_pane_g

0x2cc0,	// (0x0006ee96) main_mp2_pane_g1_ParamLimits

0x2cc0,	// (0x0006ee96) main_mp2_pane_g1

0x2ccc,	// (0x0006eea2) main_mp2_pane_g2_ParamLimits

0x2ccc,	// (0x0006eea2) main_mp2_pane_g2

0x2cd8,	// (0x0006eeae) main_mp2_pane_g3_ParamLimits

0x2cd8,	// (0x0006eeae) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0007b68a) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0007b68a) main_mp2_pane_g

0x2ce4,	// (0x0006eeba) main_mp2_pane_t1_ParamLimits

0x2ce4,	// (0x0006eeba) main_mp2_pane_t1

0x2cf9,	// (0x0006eecf) main_mp2_pane_t2_ParamLimits

0x2cf9,	// (0x0006eecf) main_mp2_pane_t2

0x2d0b,	// (0x0006eee1) main_mp2_pane_t3_ParamLimits

0x2d0b,	// (0x0006eee1) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0007b691) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0007b691) main_mp2_pane_t

0xb67f,	// (0x00077855) pec_content_pane_ParamLimits

0xb67f,	// (0x00077855) pec_content_pane

0xac2e,	// (0x00076e04) scroll_pane_cp015

0xb691,	// (0x00077867) pec_attribute_pane_ParamLimits

0xb691,	// (0x00077867) pec_attribute_pane

0x2d1d,	// (0x0006eef3) pec_content_pane_g1_ParamLimits

0x2d1d,	// (0x0006eef3) pec_content_pane_g1

0xb6a1,	// (0x00077877) pec_content_pane_t1_ParamLimits

0xb6a1,	// (0x00077877) pec_content_pane_t1

0xb6b3,	// (0x00077889) pec_content_pane_t2_ParamLimits

0xb6b3,	// (0x00077889) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0007b698) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0007b698) pec_content_pane_t

0x2d29,	// (0x0006eeff) list_single_graphic_pane_cp01_ParamLimits

0x2d29,	// (0x0006eeff) list_single_graphic_pane_cp01

0xa21f,	// (0x000763f5) bg_popup_sub_pane_cp04

0xb6c5,	// (0x0007789b) popup_mup_playback_window_g1

0xb6d1,	// (0x000778a7) popup_mup_playback_window_t1

0xb6e6,	// (0x000778bc) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0007b69d) popup_mup_playback_window_t

0xb71d,	// (0x000778f3) main_image_pane_g1_ParamLimits

0xb71d,	// (0x000778f3) main_image_pane_g1

0xb760,	// (0x00077936) scroll_pane_cp018_ParamLimits

0xb760,	// (0x00077936) scroll_pane_cp018

0xb778,	// (0x0007794e) scroll_pane_cp016_ParamLimits

0xb778,	// (0x0007794e) scroll_pane_cp016

0x2df7,	// (0x0006efcd) smil2_image_pane_ParamLimits

0x2df7,	// (0x0006efcd) smil2_image_pane

0x2e27,	// (0x0006effd) smil2_root_pane_ParamLimits

0x2e27,	// (0x0006effd) smil2_root_pane

0x2e5f,	// (0x0006f035) smil2_text_pane_ParamLimits

0x2e5f,	// (0x0006f035) smil2_text_pane

0x9fc4,	// (0x0007619a) bg_list_pane_cp06

0xb7b4,	// (0x0007798a) grid_radio_pane

0x9fc4,	// (0x0007619a) bg_popup_window_pane_cp06

0xb7bc,	// (0x00077992) main_fmradio_pane_t1

0xb177,	// (0x0007734d) heading_pane_cp04

0xb7ca,	// (0x000779a0) main_fmradio_pane_t2

0xc7dc,	// (0x000789b2) popup_cale_lunar_info_window_g1

0xb7d8,	// (0x000779ae) main_fmradio_pane_t3

0xc7e4,	// (0x000789ba) popup_cale_lunar_info_window_g2

0xb7e6,	// (0x000779bc) main_fmradio_pane_t4

0x0001,

0xb7f4,	// (0x000779ca) main_fmradio_pane_t5

0x0004,

0xf5b5,	// (0x0007b78b) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0007b6b2) main_fmradio_pane_t

0xb802,	// (0x000779d8) wait_bar_pane_cp03

0xb80a,	// (0x000779e0) cell_fmradio_pane_ParamLimits

0xb80a,	// (0x000779e0) cell_fmradio_pane

0xb663,	// (0x00077839) cell_fmradio_pane_g1_ParamLimits

0xb663,	// (0x00077839) cell_fmradio_pane_g1

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp011

0xb81d,	// (0x000779f3) poc_content_pane_ParamLimits

0xb81d,	// (0x000779f3) poc_content_pane

0xb82f,	// (0x00077a05) scroll_pane_cp019

0x2edf,	// (0x0006f0b5) popup_call_poc_act_window_ParamLimits

0x2edf,	// (0x0006f0b5) popup_call_poc_act_window

0x2f03,	// (0x0006f0d9) popup_call_poc_inact_window_ParamLimits

0x2f03,	// (0x0006f0d9) popup_call_poc_inact_window

0xf579,	// (0x0007b74f) bg_popup_call_poc_act_pane_g

0xc79c,	// (0x00078972) bg_popup_call_poc_inact_pane_g1

0xc7a4,	// (0x0007897a) bg_popup_call_poc_inact_pane_g2

0xb837,	// (0x00077a0d) popup_call_poc_act_window_g2

0xc7ac,	// (0x00078982) bg_popup_call_poc_inact_pane_g3

0xc72c,	// (0x00078902) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x0007898a) bg_popup_call_poc_inact_pane_g5

0xb83f,	// (0x00077a15) popup_call_poc_act_window_t1_ParamLimits

0xb83f,	// (0x00077a15) popup_call_poc_act_window_t1

0xb867,	// (0x00077a3d) popup_call_poc_act_window_t2_ParamLimits

0xb867,	// (0x00077a3d) popup_call_poc_act_window_t2

0xb88f,	// (0x00077a65) popup_call_poc_act_window_t3_ParamLimits

0xb88f,	// (0x00077a65) popup_call_poc_act_window_t3

0xb8b7,	// (0x00077a8d) popup_call_poc_act_window_t4_ParamLimits

0xb8b7,	// (0x00077a8d) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0007b6bd) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0007b6bd) popup_call_poc_act_window_t

0xc7bc,	// (0x00078992) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x0007899a) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x000789a2) bg_popup_call_poc_inact_pane_g8

0xb8c9,	// (0x00077a9f) popup_call_poc_inact_window_g2

0xc7d4,	// (0x000789aa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf590,	// (0x0007b766) bg_popup_call_poc_inact_pane_g

0xb8d1,	// (0x00077aa7) popup_call_poc_inact_window_t1_ParamLimits

0xb8d1,	// (0x00077aa7) popup_call_poc_inact_window_t1

0xb8e6,	// (0x00077abc) popup_call_poc_inact_window_t2_ParamLimits

0xb8e6,	// (0x00077abc) popup_call_poc_inact_window_t2

0xb8fb,	// (0x00077ad1) popup_call_poc_inact_window_t3_ParamLimits

0xb8fb,	// (0x00077ad1) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0007b6c6) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0007b6c6) popup_call_poc_inact_window_t

0xc919,	// (0x00078aef) context_pane_ParamLimits

0x373d,	// (0x0006f913) signal_pane_ParamLimits

0xaa85,	// (0x00076c5b) main_call2_pane

0x9923,	// (0x00075af9) popup_phob_thumbnail2_window_ParamLimits

0x9923,	// (0x00075af9) popup_phob_thumbnail2_window

0x98c0,	// (0x00075a96) aid_hotspot_pointer_arrow_pane

0x98c8,	// (0x00075a9e) aid_hotspot_pointer_hand_pane

0x324d,	// (0x0006f423) phob_pre_status_pane_g5

0x0fe7,	// (0x0006d1bd) cams_zoom_pane_ParamLimits

0x0ff6,	// (0x0006d1cc) image_vga_pane_ParamLimits

0x1010,	// (0x0006d1e6) main_camera_pane_g1_ParamLimits

0x1022,	// (0x0006d1f8) main_camera_pane_g2_ParamLimits

0x1032,	// (0x0006d208) main_camera_pane_g3_ParamLimits

0x1042,	// (0x0006d218) main_camera_pane_g4_ParamLimits

0x1052,	// (0x0006d228) main_camera_pane_g5_ParamLimits

0x1062,	// (0x0006d238) main_camera_pane_g6_ParamLimits

0x1072,	// (0x0006d248) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0007b3c5) main_camera_pane_g_ParamLimits

0x1082,	// (0x0006d258) main_camera_pane_t1_ParamLimits

0x1098,	// (0x0006d26e) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0007b3d6) main_camera_pane_t_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_preview_window_pane_cp01_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_preview_window_pane_cp01

0xb910,	// (0x00077ae6) popup_phob_thumbnail2_window_g1_ParamLimits

0xb910,	// (0x00077ae6) popup_phob_thumbnail2_window_g1

0x9fc4,	// (0x0007619a) call2_cli_visual_pane

0x2f37,	// (0x0006f10d) popup_call2_audio_conf_window_ParamLimits

0x2f37,	// (0x0006f10d) popup_call2_audio_conf_window

0x2f57,	// (0x0006f12d) popup_call2_audio_first_window_ParamLimits

0x2f57,	// (0x0006f12d) popup_call2_audio_first_window

0x2fed,	// (0x0006f1c3) popup_call2_audio_in_window_ParamLimits

0x2fed,	// (0x0006f1c3) popup_call2_audio_in_window

0x3035,	// (0x0006f20b) popup_call2_audio_out_window_ParamLimits

0x3035,	// (0x0006f20b) popup_call2_audio_out_window

0x309f,	// (0x0006f275) popup_call2_audio_second_window_ParamLimits

0x309f,	// (0x0006f275) popup_call2_audio_second_window

0x3105,	// (0x0006f2db) popup_call2_audio_wait_window_ParamLimits

0x3105,	// (0x0006f2db) popup_call2_audio_wait_window

0x9fc4,	// (0x0007619a) bg_popup_call2_act_pane_cp03

0xa201,	// (0x000763d7) list_conf_pane_cp

0xb91c,	// (0x00077af2) popup_call2_audio_conf_window_t1

0xb92a,	// (0x00077b00) list_single_graphic_popup_conf2_pane_ParamLimits

0xb92a,	// (0x00077b00) list_single_graphic_popup_conf2_pane

0xb1e7,	// (0x000773bd) list_highlight_pane_cp04

0xb93d,	// (0x00077b13) list_single_graphic_popup_conf2_pane_g1

0xb1f8,	// (0x000773ce) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0007b6cd) list_single_graphic_popup_conf2_pane_g

0xb947,	// (0x00077b1d) list_single_graphic_popup_conf2_pane_t1

0xb955,	// (0x00077b2b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb955,	// (0x00077b2b) bg_popup_call2_act_pane_cp01

0xb9df,	// (0x00077bb5) call_type_pane_cp05_ParamLimits

0xb9df,	// (0x00077bb5) call_type_pane_cp05

0xba33,	// (0x00077c09) popup_call2_audio_second_window_g1_ParamLimits

0xba33,	// (0x00077c09) popup_call2_audio_second_window_g1

0xba87,	// (0x00077c5d) popup_call2_audio_second_window_g2_ParamLimits

0xba87,	// (0x00077c5d) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0007b6d2) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0007b6d2) popup_call2_audio_second_window_g

0xbaec,	// (0x00077cc2) popup_call2_audio_second_window_t1_ParamLimits

0xbaec,	// (0x00077cc2) popup_call2_audio_second_window_t1

0xbba7,	// (0x00077d7d) popup_call2_audio_second_window_t2_ParamLimits

0xbba7,	// (0x00077d7d) popup_call2_audio_second_window_t2

0xbbfa,	// (0x00077dd0) popup_call2_audio_second_window_t3_ParamLimits

0xbbfa,	// (0x00077dd0) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0007b6d9) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0007b6d9) popup_call2_audio_second_window_t

0x9fc4,	// (0x0007619a) bg_popup_call2_in_pane_cp02

0x9fce,	// (0x000761a4) call_type_pane_cp04

0x9fd6,	// (0x000761ac) popup_call2_audio_wait_window_g1

0x9fde,	// (0x000761b4) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007b2b4) popup_call2_audio_wait_window_g

0x9fe6,	// (0x000761bc) popup_call2_audio_wait_window_t3

0xbced,	// (0x00077ec3) bg_popup_call2_act_pane_ParamLimits

0xbced,	// (0x00077ec3) bg_popup_call2_act_pane

0xbdad,	// (0x00077f83) call_type_pane_cp03_ParamLimits

0xbdad,	// (0x00077f83) call_type_pane_cp03

0xbe11,	// (0x00077fe7) popup_call2_audio_first_window_g1_ParamLimits

0xbe11,	// (0x00077fe7) popup_call2_audio_first_window_g1

0xbe81,	// (0x00078057) popup_call2_audio_first_window_g2_ParamLimits

0xbe81,	// (0x00078057) popup_call2_audio_first_window_g2

0xb423,	// (0x000775f9) popup_call2_audio_first_window_g3_ParamLimits

0xb423,	// (0x000775f9) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0007b6e2) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0007b6e2) popup_call2_audio_first_window_g

0xbf5f,	// (0x00078135) popup_call2_audio_first_window_t1_ParamLimits

0xbf5f,	// (0x00078135) popup_call2_audio_first_window_t1

0xc062,	// (0x00078238) popup_call2_audio_first_window_t4_ParamLimits

0xc062,	// (0x00078238) popup_call2_audio_first_window_t4

0xc145,	// (0x0007831b) popup_call2_audio_first_window_t5_ParamLimits

0xc145,	// (0x0007831b) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0007b6ed) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0007b6ed) popup_call2_audio_first_window_t

0xa217,	// (0x000763ed) bg_popup_call2_act_pane_g1

0xc7ec,	// (0x000789c2) popup_cale_lunar_info_window_t1

0xc7fa,	// (0x000789d0) popup_cale_lunar_info_window_t2

0xc808,	// (0x000789de) popup_cale_lunar_info_window_t3

0x9fc4,	// (0x0007619a) bg_popup_call2_bubble_pane

0xc246,	// (0x0007841c) bg_popup_call2_in_pane_cp01_ParamLimits

0xc246,	// (0x0007841c) bg_popup_call2_in_pane_cp01

0x9510,	// (0x000756e6) call_type_pane_cp02

0xc28e,	// (0x00078464) popup_call2_audio_out_window_g1_ParamLimits

0xc28e,	// (0x00078464) popup_call2_audio_out_window_g1

0xc2ba,	// (0x00078490) popup_call2_audio_out_window_g2_ParamLimits

0xc2ba,	// (0x00078490) popup_call2_audio_out_window_g2

0xc2e2,	// (0x000784b8) popup_call2_audio_out_window_g3_ParamLimits

0xc2e2,	// (0x000784b8) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0007b6f6) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0007b6f6) popup_call2_audio_out_window_g

0xc31d,	// (0x000784f3) popup_call2_audio_out_window_t1_ParamLimits

0xc31d,	// (0x000784f3) popup_call2_audio_out_window_t1

0xc37c,	// (0x00078552) popup_call2_audio_out_window_t2_ParamLimits

0xc37c,	// (0x00078552) popup_call2_audio_out_window_t2

0xc3d0,	// (0x000785a6) popup_call2_audio_out_window_t3_ParamLimits

0xc3d0,	// (0x000785a6) popup_call2_audio_out_window_t3

0xc3e6,	// (0x000785bc) popup_call2_audio_out_window_t4_ParamLimits

0xc3e6,	// (0x000785bc) popup_call2_audio_out_window_t4

0xc3fc,	// (0x000785d2) popup_call2_audio_out_window_t5_ParamLimits

0xc3fc,	// (0x000785d2) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0007b6ff) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0007b6ff) popup_call2_audio_out_window_t

0xc460,	// (0x00078636) bg_popup_call2_in_pane_ParamLimits

0xc460,	// (0x00078636) bg_popup_call2_in_pane

0xc4bc,	// (0x00078692) popup_call2_audio_in_window_g1_ParamLimits

0xc4bc,	// (0x00078692) popup_call2_audio_in_window_g1

0xc4f4,	// (0x000786ca) popup_call2_audio_in_window_g2_ParamLimits

0xc4f4,	// (0x000786ca) popup_call2_audio_in_window_g2

0xc52c,	// (0x00078702) popup_call2_audio_in_window_g3_ParamLimits

0xc52c,	// (0x00078702) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0007b70c) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0007b70c) popup_call2_audio_in_window_g

0xc584,	// (0x0007875a) popup_call2_audio_in_window_t1_ParamLimits

0xc584,	// (0x0007875a) popup_call2_audio_in_window_t1

0xc604,	// (0x000787da) popup_call2_audio_in_window_t2_ParamLimits

0xc604,	// (0x000787da) popup_call2_audio_in_window_t2

0xc684,	// (0x0007885a) popup_call2_audio_in_window_t3_ParamLimits

0xc684,	// (0x0007885a) popup_call2_audio_in_window_t3

0xc69e,	// (0x00078874) popup_call2_audio_in_window_t4_ParamLimits

0xc69e,	// (0x00078874) popup_call2_audio_in_window_t4

0xc6b0,	// (0x00078886) popup_call2_audio_in_window_t5_ParamLimits

0xc6b0,	// (0x00078886) popup_call2_audio_in_window_t5

0xc6c2,	// (0x00078898) popup_call2_audio_in_window_t6_ParamLimits

0xc6c2,	// (0x00078898) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0007b715) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0007b715) popup_call2_audio_in_window_t

0xa217,	// (0x000763ed) bg_popup_call2_in_pane_g1

0xc816,	// (0x000789ec) popup_cale_lunar_info_window_t4

0x0003,

0xf5ba,	// (0x0007b790) popup_cale_lunar_info_window_t

0xa21f,	// (0x000763f5) bg_popup_call2_rect_pane_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_call2_rect_pane

0x9fc4,	// (0x0007619a) call2_cli_visual_graphic_pane

0x9fc4,	// (0x0007619a) call2_cli_visual_text_pane

0x994a,	// (0x00075b20) smil_status_volume_pane_g3

0x0002,

0xa345,	// (0x0007651b) call2_cli_visual_graphic_pane_g1

0xa345,	// (0x0007651b) call2_cli_visual_graphic_pane_g2

0xa345,	// (0x0007651b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0007b722) call2_cli_visual_graphic_pane_g

0xc6d4,	// (0x000788aa) bg_popup_call2_rect_pane_g1

0xa3d1,	// (0x000765a7) bg_popup_call2_rect_pane_g2

0xc6dc,	// (0x000788b2) bg_popup_call2_rect_pane_g3

0xc6e4,	// (0x000788ba) bg_popup_call2_rect_pane_g4

0xc6ec,	// (0x000788c2) bg_popup_call2_rect_pane_g5

0xc6f4,	// (0x000788ca) bg_popup_call2_rect_pane_g6

0xc6fc,	// (0x000788d2) bg_popup_call2_rect_pane_g7

0xc704,	// (0x000788da) bg_popup_call2_rect_pane_g8

0xc70c,	// (0x000788e2) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0007b729) bg_popup_call2_rect_pane_g

0xc714,	// (0x000788ea) bg_popup_call2_bubble_pane_g1

0xc71c,	// (0x000788f2) bg_popup_call2_bubble_pane_g2

0xc724,	// (0x000788fa) bg_popup_call2_bubble_pane_g3

0xc72c,	// (0x00078902) bg_popup_call2_bubble_pane_g4

0xc734,	// (0x0007890a) bg_popup_call2_bubble_pane_g5

0xc73c,	// (0x00078912) bg_popup_call2_bubble_pane_g6

0xc744,	// (0x0007891a) bg_popup_call2_bubble_pane_g7

0xc74c,	// (0x00078922) bg_popup_call2_bubble_pane_g8

0xc754,	// (0x0007892a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0007b73c) bg_popup_call2_bubble_pane_g

0x0a1f,	// (0x0006cbf5) aid_cale_week_size_cell_pane

0x10ae,	// (0x0006d284) aid_cams_cif_uncrop_pane_ParamLimits

0x10ae,	// (0x0006d284) aid_cams_cif_uncrop_pane

0x1263,	// (0x0006d439) aid_cams_size_cell_ParamLimits

0x1263,	// (0x0006d439) aid_cams_size_cell

0x1277,	// (0x0006d44d) grid_cams_pane_ParamLimits

0x1291,	// (0x0006d467) linegrid_cams_pane_ParamLimits

0x148d,	// (0x0006d663) call_video_pane_t1

0x14ab,	// (0x0006d681) call_video_pane_t2

0x0001,

0xf253,	// (0x0007b429) call_video_pane_t

0x18d1,	// (0x0006daa7) aid_cale_month_size_cell_pane_ParamLimits

0x18d1,	// (0x0006daa7) aid_cale_month_size_cell_pane

0xf603,	// (0x0007b7d9) smil_status_volume_pane_g

0x9957,	// (0x00075b2d) volume_smil_pane_ParamLimits

0x02af,	// (0x0006c485) aid_popup2_width_pane

0x0995,	// (0x0006cb6b) cell_qdial_pane_g4_ParamLimits

0x0995,	// (0x0006cb6b) cell_qdial_pane_g4

0x25b2,	// (0x0006e788) aid_blid_cardinal_pane_ParamLimits

0x25be,	// (0x0006e794) aid_blid_destination_pane_ParamLimits

0x25be,	// (0x0006e794) aid_blid_destination_pane

0xa21f,	// (0x000763f5) bg_popup_call_poc_act_pane_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_call_poc_act_pane

0xa21f,	// (0x000763f5) bg_popup_call_poc_inact_pane_ParamLimits

0xa21f,	// (0x000763f5) bg_popup_call_poc_inact_pane

0xc75c,	// (0x00078932) bg_popup_call_poc_act_pane_g1

0xc764,	// (0x0007893a) bg_popup_call_poc_act_pane_g2

0xc76c,	// (0x00078942) bg_popup_call_poc_act_pane_g3

0xc72c,	// (0x00078902) bg_popup_call_poc_act_pane_g4

0xc734,	// (0x0007890a) bg_popup_call_poc_act_pane_g5

0xc774,	// (0x0007894a) bg_popup_call_poc_act_pane_g6

0xc744,	// (0x0007891a) bg_popup_call_poc_act_pane_g7

0xc77c,	// (0x00078952) bg_popup_call_poc_act_pane_g8

0x9fc4,	// (0x0007619a) main_usb_pane

0x98fe,	// (0x00075ad4) popup_cale_lunar_info_window

0x1777,	// (0x0006d94d) im_reading_pane_t1_ParamLimits

0xab86,	// (0x00076d5c) list_im_pane_ParamLimits

0xab97,	// (0x00076d6d) scroll_pane_cp07_ParamLimits

0x9fc4,	// (0x0007619a) grid_highlight_pane_cp012

0xa21f,	// (0x000763f5) mup_scale_pane_ParamLimits

0xb663,	// (0x00077839) main_usb_pane_g1_ParamLimits

0xb663,	// (0x00077839) main_usb_pane_g1

0x3162,	// (0x0006f338) main_usb_pane_g2_ParamLimits

0x3162,	// (0x0006f338) main_usb_pane_g2

0x0001,

0xf5a3,	// (0x0007b779) main_usb_pane_g_ParamLimits

0xf5a3,	// (0x0007b779) main_usb_pane_g

0x3178,	// (0x0006f34e) main_usb_pane_t1_ParamLimits

0x3178,	// (0x0006f34e) main_usb_pane_t1

0x318a,	// (0x0006f360) main_usb_pane_t2_ParamLimits

0x318a,	// (0x0006f360) main_usb_pane_t2

0x319c,	// (0x0006f372) main_usb_pane_t3_ParamLimits

0x319c,	// (0x0006f372) main_usb_pane_t3

0x31ae,	// (0x0006f384) main_usb_pane_t4_ParamLimits

0x31ae,	// (0x0006f384) main_usb_pane_t4

0x31c0,	// (0x0006f396) main_usb_pane_t5_ParamLimits

0x31c0,	// (0x0006f396) main_usb_pane_t5

0x31d2,	// (0x0006f3a8) main_usb_pane_t6_ParamLimits

0x31d2,	// (0x0006f3a8) main_usb_pane_t6

0x0005,

0xf5a8,	// (0x0007b77e) main_usb_pane_t_ParamLimits

0x2561,	// (0x0006e737) aid_text_placing

0x256a,	// (0x0006e740) main_location2_pane_t1_ParamLimits

0x257c,	// (0x0006e752) main_location2_pane_t2_ParamLimits

0x258e,	// (0x0006e764) main_location2_pane_t3_ParamLimits

0x25a0,	// (0x0006e776) main_location2_pane_t4_ParamLimits

0x25a0,	// (0x0006e776) main_location2_pane_t4

0xf3b4,	// (0x0007b58a) main_location2_pane_t_ParamLimits

0xa25b,	// (0x00076431) find_pinb_pane_g2_ParamLimits

0xa25b,	// (0x00076431) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0007b2da) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0007b2da) find_pinb_pane_g

0xa267,	// (0x0007643d) find_pinb_pane_t1_ParamLimits

0xa279,	// (0x0007644f) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0007b2df) find_pinb_pane_t_ParamLimits

0x9fc4,	// (0x0007619a) main_call3_pane

0x1db8,	// (0x0006df8e) cale_month_day_heading_pane_t1_ParamLimits

0x1dfa,	// (0x0006dfd0) cale_month_day_heading_pane_t2_ParamLimits

0x1e2f,	// (0x0006e005) cale_month_day_heading_pane_t3_ParamLimits

0x1e64,	// (0x0006e03a) cale_month_day_heading_pane_t4_ParamLimits

0x1ea1,	// (0x0006e077) cale_month_day_heading_pane_t5_ParamLimits

0x1ee6,	// (0x0006e0bc) cale_month_day_heading_pane_t6_ParamLimits

0x1f2b,	// (0x0006e101) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0007b461) cale_month_day_heading_pane_t_ParamLimits

0xade1,	// (0x00076fb7) smil_status_volume_pane

0x2c5b,	// (0x0006ee31) postcard_address_pane_ParamLimits

0x2c5b,	// (0x0006ee31) postcard_address_pane

0x2c6d,	// (0x0006ee43) postcard_message_pane_ParamLimits

0x2c6d,	// (0x0006ee43) postcard_message_pane

0x313f,	// (0x0006f315) call2_cli_visual_pane_t1_ParamLimits

0x313f,	// (0x0006f315) call2_cli_visual_pane_t1

0x396c,	// (0x0006fb42) postcard_message_pane_t1_ParamLimits

0x396c,	// (0x0006fb42) postcard_message_pane_t1

0x3955,	// (0x0006fb2b) postcard_address_pane_t1_ParamLimits

0x3955,	// (0x0006fb2b) postcard_address_pane_t1

0x3941,	// (0x0006fb17) popup_call3_audio_in_window_ParamLimits

0x3941,	// (0x0006fb17) popup_call3_audio_in_window

0x37cc,	// (0x0006f9a2) bg_popup_call3_in_pane_ParamLimits

0x37cc,	// (0x0006f9a2) bg_popup_call3_in_pane

0x3842,	// (0x0006fa18) popup_call3_audio_in_window_g1_ParamLimits

0x3842,	// (0x0006fa18) popup_call3_audio_in_window_g1

0x3862,	// (0x0006fa38) popup_call3_audio_in_window_g2_ParamLimits

0x3862,	// (0x0006fa38) popup_call3_audio_in_window_g2

0x3882,	// (0x0006fa58) popup_call3_audio_in_window_g3_ParamLimits

0x3882,	// (0x0006fa58) popup_call3_audio_in_window_g3

0x0003,

0xf60a,	// (0x0007b7e0) popup_call3_audio_in_window_g_ParamLimits

0xf60a,	// (0x0007b7e0) popup_call3_audio_in_window_g

0x38b3,	// (0x0006fa89) popup_call3_audio_in_window_t1_ParamLimits

0x38b3,	// (0x0006fa89) popup_call3_audio_in_window_t1

0x38f1,	// (0x0006fac7) popup_call3_audio_in_window_t2_ParamLimits

0x38f1,	// (0x0006fac7) popup_call3_audio_in_window_t2

0x392f,	// (0x0006fb05) popup_call3_audio_in_window_t3_ParamLimits

0x392f,	// (0x0006fb05) popup_call3_audio_in_window_t3

0x0002,

0xf613,	// (0x0007b7e9) popup_call3_audio_in_window_t_ParamLimits

0xf613,	// (0x0007b7e9) popup_call3_audio_in_window_t

0xaa85,	// (0x00076c5b) bg_popup_call3_rect_pane

0xc6d4,	// (0x000788aa) bg_popup_call3_rect_pane_g1

0xa3d1,	// (0x000765a7) bg_popup_call3_rect_pane_g2

0xc6dc,	// (0x000788b2) bg_popup_call3_rect_pane_g3

0xc6e4,	// (0x000788ba) bg_popup_call3_rect_pane_g4

0xc6ec,	// (0x000788c2) bg_popup_call3_rect_pane_g5

0xc6f4,	// (0x000788ca) bg_popup_call3_rect_pane_g6

0xc6fc,	// (0x000788d2) bg_popup_call3_rect_pane_g7

0x2898,	// (0x0006ea6e) mup_visualizer_osc_pane

0xb585,	// (0x0007775b) mup_visualizer_spec_pane

0x37fc,	// (0x0006f9d2) call3_video_qcif_pane_ParamLimits

0x37fc,	// (0x0006f9d2) call3_video_qcif_pane

0x380f,	// (0x0006f9e5) call3_video_qcif_uncrop_pane_ParamLimits

0x380f,	// (0x0006f9e5) call3_video_qcif_uncrop_pane

0x381d,	// (0x0006f9f3) call3_video_subqcif_pane_ParamLimits

0x381d,	// (0x0006f9f3) call3_video_subqcif_pane

0x3831,	// (0x0006fa07) call3_video_subqcif_uncrop_pane_ParamLimits

0x3831,	// (0x0006fa07) call3_video_subqcif_uncrop_pane

0x38a2,	// (0x0006fa78) popup_call3_audio_in_window_g4_ParamLimits

0x38a2,	// (0x0006fa78) popup_call3_audio_in_window_g4

0x37bb,	// (0x0006f991) mup_spec_half_pane

0x37c4,	// (0x0006f99a) mup_spec_half_pane_cp

0xc979,	// (0x00078b4f) mup_osc_middle_pane

0xc982,	// (0x00078b58) mup_visualizer_osc_pane_g1

0x379b,	// (0x0006f971) mup_spec_bar_pane_ParamLimits

0x379b,	// (0x0006f971) mup_spec_bar_pane

0xc966,	// (0x00078b3c) mup_spec_bar_pane_g1

0xc970,	// (0x00078b46) mup_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0007b7d4) mup_spec_bar_pane_g

0x0a1f,	// (0x0006cbf5) aid_cale_week_size_cell_pane_ParamLimits

0x0a39,	// (0x0006cc0f) bg_cale_heading_pane_ParamLimits

0xa9de,	// (0x00076bb4) bg_cale_pane_cp01_ParamLimits

0x0a51,	// (0x0006cc27) cale_week_corner_pane_ParamLimits

0x0a70,	// (0x0006cc46) cale_week_day_heading_pane_ParamLimits

0x0a8d,	// (0x0006cc63) cale_week_scroll_pane_g1_ParamLimits

0x0aa0,	// (0x0006cc76) cale_week_scroll_pane_g2_ParamLimits

0x0ab8,	// (0x0006cc8e) cale_week_scroll_pane_g3_ParamLimits

0x0ad0,	// (0x0006cca6) cale_week_scroll_pane_g4_ParamLimits

0x0ae8,	// (0x0006ccbe) cale_week_scroll_pane_g5_ParamLimits

0x0b08,	// (0x0006ccde) cale_week_scroll_pane_g6_ParamLimits

0x0b28,	// (0x0006ccfe) cale_week_scroll_pane_g7_ParamLimits

0x0b48,	// (0x0006cd1e) cale_week_scroll_pane_g8_ParamLimits

0x0b6c,	// (0x0006cd42) cale_week_scroll_pane_g9_ParamLimits

0x0b84,	// (0x0006cd5a) cale_week_scroll_pane_g10_ParamLimits

0x0b9c,	// (0x0006cd72) cale_week_scroll_pane_g11_ParamLimits

0x0bb4,	// (0x0006cd8a) cale_week_scroll_pane_g12_ParamLimits

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g13_ParamLimits

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g14_ParamLimits

0x0bcc,	// (0x0006cda2) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0007b36b) cale_week_scroll_pane_g_ParamLimits

0x0c08,	// (0x0006cdde) cale_week_time_pane_ParamLimits

0x0c2c,	// (0x0006ce02) grid_cale_week_pane_ParamLimits

0xa9fb,	// (0x00076bd1) listscroll_cale_week_pane_t1

0xaa0d,	// (0x00076be3) scroll_pane_cp08_ParamLimits

0x1931,	// (0x0006db07) cale_month_corner_pane_ParamLimits

0xadb7,	// (0x00076f8d) cale_month_pane_t1

0x1d4b,	// (0x0006df21) cale_month_week_pane_ParamLimits

0x2392,	// (0x0006e568) popup_call_status_window_g1_ParamLimits

0x23a6,	// (0x0006e57c) popup_call_status_window_g2_ParamLimits

0x23ba,	// (0x0006e590) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0007b511) popup_call_status_window_g_ParamLimits

0xb167,	// (0x0007733d) aid_call2_pane

0x2b08,	// (0x0006ecde) msg_header_pane_g1

0x2c5b,	// (0x0006ee31) postcard_address2_pane_ParamLimits

0x2c5b,	// (0x0006ee31) postcard_address2_pane

0x2c6d,	// (0x0006ee43) postcard_message2_pane_ParamLimits

0x2c6d,	// (0x0006ee43) postcard_message2_pane

0x374b,	// (0x0006f921) message2_row_pane_ParamLimits

0x374b,	// (0x0006f921) message2_row_pane

0x3768,	// (0x0006f93e) address2_row_pane_ParamLimits

0x3768,	// (0x0006f93e) address2_row_pane

0xc934,	// (0x00078b0a) postcard_message2_row_pane_g1

0xc93c,	// (0x00078b12) postcard_message2_row_pane_t1

0xc934,	// (0x00078b0a) address2_row_pane_g1

0xc93c,	// (0x00078b12) address2_row_pane_t1

0x0f66,	// (0x0006d13c) aid_size_cell_vorec

0x9fc4,	// (0x0007619a) main_rss_pane

0x377b,	// (0x0006f951) rss_list_single_pane_ParamLimits

0x377b,	// (0x0006f951) rss_list_single_pane

0xc94a,	// (0x00078b20) rss_list_single_pane_t1

0xc958,	// (0x00078b2e) rss_list_single_pane_t2

0x0001,

0xf5f9,	// (0x0007b7cf) rss_list_single_pane_t

0x9fc4,	// (0x0007619a) main_camera2_pane

0x9fc4,	// (0x0007619a) main_video2_pane

0x39e5,	// (0x0006fbbb) cams_zoom_pane_cp2_ParamLimits

0x39e5,	// (0x0006fbbb) cams_zoom_pane_cp2

0x3a05,	// (0x0006fbdb) image2_vga_pane_ParamLimits

0x3a05,	// (0x0006fbdb) image2_vga_pane

0x3a56,	// (0x0006fc2c) main_camera2_pane_g1_ParamLimits

0x3a56,	// (0x0006fc2c) main_camera2_pane_g1

0x3a76,	// (0x0006fc4c) main_camera2_pane_g2_ParamLimits

0x3a76,	// (0x0006fc4c) main_camera2_pane_g2

0x3a96,	// (0x0006fc6c) main_camera2_pane_g3_ParamLimits

0x3a96,	// (0x0006fc6c) main_camera2_pane_g3

0x3ab6,	// (0x0006fc8c) main_camera2_pane_g4_ParamLimits

0x3ab6,	// (0x0006fc8c) main_camera2_pane_g4

0x3ad6,	// (0x0006fcac) main_camera2_pane_g5_ParamLimits

0x3ad6,	// (0x0006fcac) main_camera2_pane_g5

0x3af6,	// (0x0006fccc) main_camera2_pane_g6_ParamLimits

0x3af6,	// (0x0006fccc) main_camera2_pane_g6

0x3b16,	// (0x0006fcec) main_camera2_pane_g7_ParamLimits

0x3b16,	// (0x0006fcec) main_camera2_pane_g7

0x3b36,	// (0x0006fd0c) main_camera2_pane_g8_ParamLimits

0x3b36,	// (0x0006fd0c) main_camera2_pane_g8

0x0008,

0xf61a,	// (0x0007b7f0) main_camera2_pane_g_ParamLimits

0xf61a,	// (0x0007b7f0) main_camera2_pane_g

0x3b76,	// (0x0006fd4c) main_camera2_pane_t1_ParamLimits

0x3b76,	// (0x0006fd4c) main_camera2_pane_t1

0x3bab,	// (0x0006fd81) main_camera2_pane_t2_ParamLimits

0x3bab,	// (0x0006fd81) main_camera2_pane_t2

0x3bd1,	// (0x0006fda7) main_camera2_pane_t3_ParamLimits

0x3bd1,	// (0x0006fda7) main_camera2_pane_t3

0x3c2f,	// (0x0006fe05) main_camera2_pane_t4_ParamLimits

0x3c2f,	// (0x0006fe05) main_camera2_pane_t4

0x0006,

0xf62d,	// (0x0007b803) main_camera2_pane_t_ParamLimits

0xf62d,	// (0x0007b803) main_camera2_pane_t

0x3cc1,	// (0x0006fe97) cams_zoom_pane_cp4_ParamLimits

0x3cc1,	// (0x0006fe97) cams_zoom_pane_cp4

0x3cd7,	// (0x0006fead) image2_cif_pane_ParamLimits

0x3cd7,	// (0x0006fead) image2_cif_pane

0x3d02,	// (0x0006fed8) image2_subqcif_pane_ParamLimits

0x3d02,	// (0x0006fed8) image2_subqcif_pane

0x3d1c,	// (0x0006fef2) main_video2_pane_g1_ParamLimits

0x3d1c,	// (0x0006fef2) main_video2_pane_g1

0x3d36,	// (0x0006ff0c) main_video2_pane_g2_ParamLimits

0x3d36,	// (0x0006ff0c) main_video2_pane_g2

0x3d4c,	// (0x0006ff22) main_video2_pane_g3_ParamLimits

0x3d4c,	// (0x0006ff22) main_video2_pane_g3

0x3d62,	// (0x0006ff38) main_video2_pane_g4_ParamLimits

0x3d62,	// (0x0006ff38) main_video2_pane_g4

0x3d78,	// (0x0006ff4e) main_video2_pane_g5_ParamLimits

0x3d78,	// (0x0006ff4e) main_video2_pane_g5

0x3d8e,	// (0x0006ff64) main_video2_pane_g6_ParamLimits

0x3d8e,	// (0x0006ff64) main_video2_pane_g6

0x0005,

0xf63c,	// (0x0007b812) main_video2_pane_g_ParamLimits

0xf63c,	// (0x0007b812) main_video2_pane_g

0x3da8,	// (0x0006ff7e) main_video2_pane_t1_ParamLimits

0x3da8,	// (0x0006ff7e) main_video2_pane_t1

0x3dcc,	// (0x0006ffa2) main_video2_pane_t2_ParamLimits

0x3dcc,	// (0x0006ffa2) main_video2_pane_t2

0x3e1a,	// (0x0006fff0) main_video2_pane_t3_ParamLimits

0x3e1a,	// (0x0006fff0) main_video2_pane_t3

0x0002,

0xf649,	// (0x0007b81f) main_video2_pane_t_ParamLimits

0xf649,	// (0x0007b81f) main_video2_pane_t

0x328d,	// (0x0006f463) call_muted_g2

0x0001,

0xf5eb,	// (0x0007b7c1) call_muted_g

0x9fc4,	// (0x0007619a) main_mup2_pane

0x3e62,	// (0x00070038) main_mup2_pane_g1_ParamLimits

0x3e62,	// (0x00070038) main_mup2_pane_g1

0x3e6e,	// (0x00070044) main_mup2_pane_g2_ParamLimits

0x3e6e,	// (0x00070044) main_mup2_pane_g2

0x99c5,	// (0x00075b9b) main_mup_pane_g13_cp1

0x99cd,	// (0x00075ba3) mup_volume_pane_cp1

0x3e8a,	// (0x00070060) main_mup2_pane_g4_ParamLimits

0x3e8a,	// (0x00070060) main_mup2_pane_g4

0x3e9c,	// (0x00070072) main_mup2_pane_g5_ParamLimits

0x3e9c,	// (0x00070072) main_mup2_pane_g5

0x3eae,	// (0x00070084) main_mup2_pane_g6_ParamLimits

0x3eae,	// (0x00070084) main_mup2_pane_g6

0x3ec0,	// (0x00070096) main_mup2_pane_g7_ParamLimits

0x3ec0,	// (0x00070096) main_mup2_pane_g7

0x0006,

0xf650,	// (0x0007b826) main_mup2_pane_g_ParamLimits

0xf650,	// (0x0007b826) main_mup2_pane_g

0x3ed8,	// (0x000700ae) main_mup2_pane_t1_ParamLimits

0x3ed8,	// (0x000700ae) main_mup2_pane_t1

0x3eee,	// (0x000700c4) main_mup2_pane_t2_ParamLimits

0x3eee,	// (0x000700c4) main_mup2_pane_t2

0x3f04,	// (0x000700da) main_mup2_pane_t3_ParamLimits

0x3f04,	// (0x000700da) main_mup2_pane_t3

0x3f1a,	// (0x000700f0) main_mup2_pane_t4_ParamLimits

0x3f1a,	// (0x000700f0) main_mup2_pane_t4

0x3f32,	// (0x00070108) main_mup2_pane_t5_ParamLimits

0x3f32,	// (0x00070108) main_mup2_pane_t5

0x3f4a,	// (0x00070120) main_mup2_pane_t6_ParamLimits

0x3f4a,	// (0x00070120) main_mup2_pane_t6

0x0005,

0xf65f,	// (0x0007b835) main_mup2_pane_t_ParamLimits

0xf65f,	// (0x0007b835) main_mup2_pane_t

0x3f7a,	// (0x00070150) mup2_visualizer_pane_ParamLimits

0x3f7a,	// (0x00070150) mup2_visualizer_pane

0x3fa8,	// (0x0007017e) mup_progress_pane_cp_ParamLimits

0x3fa8,	// (0x0007017e) mup_progress_pane_cp

0x99b0,	// (0x00075b86) mup_volume_pane_cp_ParamLimits

0x99b0,	// (0x00075b86) mup_volume_pane_cp

0x3fbc,	// (0x00070192) mup2_visualizer_pane_g1_ParamLimits

0x3fbc,	// (0x00070192) mup2_visualizer_pane_g1

0xc9b9,	// (0x00078b8f) mup2_visualizer_pane_g2_ParamLimits

0xc9b9,	// (0x00078b8f) mup2_visualizer_pane_g2

0x3fd3,	// (0x000701a9) mup2_visualizer_pane_g3_ParamLimits

0x3fd3,	// (0x000701a9) mup2_visualizer_pane_g3

0x0002,

0xf66c,	// (0x0007b842) mup2_visualizer_pane_g_ParamLimits

0xf66c,	// (0x0007b842) mup2_visualizer_pane_g

0xb7ac,	// (0x00077982) aid_size_cell_fmradio

0x343f,	// (0x0006f615) aid_height_parent_landcape

0xac15,	// (0x00076deb) wml_content_pane_cp

0xac1d,	// (0x00076df3) wml_tabs_pane

0xac26,	// (0x00076dfc) popup_wml_miniature_window

0xac2e,	// (0x00076e04) scroll_pane_cp021

0xac42,	// (0x00076e18) wml_content_pane_comp8

0x9fc4,	// (0x0007619a) bg_popup_sub_pane_cp05

0xc9d7,	// (0x00078bad) popup_wml_miniature_window_g1

0xc9df,	// (0x00078bb5) wml_miniature_view_pane

0x3fdf,	// (0x000701b5) aid_size_wml_view

0x3fe7,	// (0x000701bd) wml_miniature_view_pane_g1

0x3ff0,	// (0x000701c6) wml_miniature_view_pane_g2

0x3ff9,	// (0x000701cf) wml_miniature_view_pane_g3

0x4001,	// (0x000701d7) wml_miniature_view_pane_g4

0x4009,	// (0x000701df) wml_miniature_view_pane_g5

0x4011,	// (0x000701e7) wml_miniature_view_pane_g6

0x4019,	// (0x000701ef) wml_miniature_view_pane_g7

0x4021,	// (0x000701f7) wml_miniature_view_pane_g8

0x0007,

0xf673,	// (0x0007b849) wml_miniature_view_pane_g

0xc9e7,	// (0x00078bbd) background_graphic_ParamLimits

0xc9e7,	// (0x00078bbd) background_graphic

0xc9f3,	// (0x00078bc9) wml_tabs_2_pane

0xc9fc,	// (0x00078bd2) wml_tabs_3_pane_ParamLimits

0xc9fc,	// (0x00078bd2) wml_tabs_3_pane

0xca0e,	// (0x00078be4) wml_tabs_4_pane_ParamLimits

0xca0e,	// (0x00078be4) wml_tabs_4_pane

0xca24,	// (0x00078bfa) wml_tabs_5_pane_ParamLimits

0xca24,	// (0x00078bfa) wml_tabs_5_pane

0xca3e,	// (0x00078c14) wml_tabs_pane_g2_ParamLimits

0xca3e,	// (0x00078c14) wml_tabs_pane_g2

0xca52,	// (0x00078c28) wml_tabs_pane_g3_ParamLimits

0xca52,	// (0x00078c28) wml_tabs_pane_g3

0x4029,	// (0x000701ff) wml_tabs_2_active_pane_ParamLimits

0x4029,	// (0x000701ff) wml_tabs_2_active_pane

0x403d,	// (0x00070213) wml_tabs_2_passive_pane_ParamLimits

0x403d,	// (0x00070213) wml_tabs_2_passive_pane

0x4051,	// (0x00070227) wml_tabs_3_active_pane_cp_ParamLimits

0x4051,	// (0x00070227) wml_tabs_3_active_pane_cp

0x4066,	// (0x0007023c) wml_tabs_3_passive_pane_ParamLimits

0x4066,	// (0x0007023c) wml_tabs_3_passive_pane

0x4079,	// (0x0007024f) wml_tabs_3_passive_pane_cp_ParamLimits

0x4079,	// (0x0007024f) wml_tabs_3_passive_pane_cp

0x4090,	// (0x00070266) tabs_4_active_pane

0x4098,	// (0x0007026e) tabs_4_passive_pane

0x40a2,	// (0x00070278) tabs_4_passive_pane_cp

0x40aa,	// (0x00070280) tabs_4_passive_pane_cp2

0x315a,	// (0x0006f330) aid_height_text

0x286a,	// (0x0006ea40) mup_volume_cont_pane_ParamLimits

0x286a,	// (0x0006ea40) mup_volume_cont_pane

0x0635,	// (0x0006c80b) aid_size_cell_pinb

0x063f,	// (0x0006c815) aid_size_list_pinb

0x3f94,	// (0x0007016a) mup2_volume_cont_pane_ParamLimits

0x3f94,	// (0x0007016a) mup2_volume_cont_pane

0x999c,	// (0x00075b72) mup2_volume_cont_pane_g1_ParamLimits

0x999c,	// (0x00075b72) mup2_volume_cont_pane_g1

0x02bb,	// (0x0006c491) aid_size_cell_touch_ParamLimits

0x02bb,	// (0x0006c491) aid_size_cell_touch

0x0524,	// (0x0006c6fa) touch_pane_ParamLimits

0x0524,	// (0x0006c6fa) touch_pane

0x9417,	// (0x000755ed) main_rss2_pane

0xca6f,	// (0x00078c45) listscroll_rss2_pane

0xca78,	// (0x00078c4e) rss2_navigation_pane

0xca80,	// (0x00078c56) list_rss2_pane

0xb28c,	// (0x00077462) scroll_pane_cp22

0xca88,	// (0x00078c5e) rss2_navigation_pane_g1

0xca91,	// (0x00078c67) rss2_navigation_pane_g2

0xca99,	// (0x00078c6f) rss2_navigation_pane_g3

0x0002,

0xf684,	// (0x0007b85a) rss2_navigation_pane_g

0xcaa1,	// (0x00078c77) rss2_navigation_pane_t1

0x40b4,	// (0x0007028a) rss2_list_single_pane_ParamLimits

0x40b4,	// (0x0007028a) rss2_list_single_pane

0xcaaf,	// (0x00078c85) rss2_list_single_pane_t2

0xcabd,	// (0x00078c93) rss2_list_single_pane_t3_ParamLimits

0xcabd,	// (0x00078c93) rss2_list_single_pane_t3

0xcada,	// (0x00078cb0) rss2_list_single_pane_t4

0x219d,	// (0x0006e373) smil_status_pane_g1

0x9409,	// (0x000755df) main_image2_pane_ParamLimits

0x9409,	// (0x000755df) main_image2_pane

0x3b56,	// (0x0006fd2c) main_camera2_pane_g9_ParamLimits

0x3b56,	// (0x0006fd2c) main_camera2_pane_g9

0x3c84,	// (0x0006fe5a) main_camera2_pane_t5_ParamLimits

0x3c84,	// (0x0006fe5a) main_camera2_pane_t5

0x996c,	// (0x00075b42) main_camera2_pane_t6_ParamLimits

0x996c,	// (0x00075b42) main_camera2_pane_t6

0x40ca,	// (0x000702a0) main_image2_pane_g1_ParamLimits

0x40ca,	// (0x000702a0) main_image2_pane_g1

0x2e95,	// (0x0006f06b) smil2_video_pane_ParamLimits

0x2e95,	// (0x0006f06b) smil2_video_pane

0x02fb,	// (0x0006c4d1) aid_zoom_text_primary_cp

0x93ff,	// (0x000755d5) popup_preview_fixed_window

0xab7e,	// (0x00076d54) im_reading_pane_g1

0x39cd,	// (0x0006fba3) cams2_bc_adjust_pane_cp_ParamLimits

0x39cd,	// (0x0006fba3) cams2_bc_adjust_pane_cp

0x3cb3,	// (0x0006fe89) cams2_bc_adjust_pane_ParamLimits

0x3cb3,	// (0x0006fe89) cams2_bc_adjust_pane

0xd437,	// (0x0007960d) cams2_bc_adjust_pane_g1

0x99d5,	// (0x00075bab) cams2_slider_pane

0x99de,	// (0x00075bb4) cams2_slider_pane_g1

0x99e7,	// (0x00075bbd) cams2_slider_pane_g2

0x0006,

0xf68b,	// (0x0007b861) cams2_slider_pane_g

0x0727,	// (0x0006c8fd) calc_display_pane_ParamLimits

0x074c,	// (0x0006c922) calc_paper_pane_ParamLimits

0x076f,	// (0x0006c945) grid_calc_pane_ParamLimits

0x9891,	// (0x00075a67) popup_clock_digital_window_t1_ParamLimits

0xb749,	// (0x0007791f) main_image_pane_t1

0x0709,	// (0x0006c8df) aid_size_cell_calc_ParamLimits

0x0709,	// (0x0006c8df) aid_size_cell_calc

0x3497,	// (0x0006f66d) popup_blid_sat_info2_window_ParamLimits

0x3497,	// (0x0006f66d) popup_blid_sat_info2_window

0xcaf0,	// (0x00078cc6) aid_size_cell_blid

0xcaf8,	// (0x00078cce) bg_popup_window_pane_cp07

0xcb1b,	// (0x00078cf1) grid_popup_blid_pane

0xcb25,	// (0x00078cfb) heading_pane_cp05_ParamLimits

0xcb25,	// (0x00078cfb) heading_pane_cp05

0xcbef,	// (0x00078dc5) cell_popup_blid_pane_ParamLimits

0xcbef,	// (0x00078dc5) cell_popup_blid_pane

0xcc13,	// (0x00078de9) cell_popup_blid_pane_g1

0xcc1b,	// (0x00078df1) cell_popup_blid_pane_t1

0x3f64,	// (0x0007013a) mup2_indicator_pane_ParamLimits

0x3f64,	// (0x0007013a) mup2_indicator_pane

0xaa85,	// (0x00076c5b) mup2_visualizer_osc_pane

0xc9c5,	// (0x00078b9b) mup2_visualizer_spec_pane_ParamLimits

0xc9c5,	// (0x00078b9b) mup2_visualizer_spec_pane

0x40e0,	// (0x000702b6) mup2_spec_half_pane

0x40e9,	// (0x000702bf) mup2_spec_half_pane_cp

0x40f1,	// (0x000702c7) mup2_spec_bar_pane_ParamLimits

0x40f1,	// (0x000702c7) mup2_spec_bar_pane

0xc966,	// (0x00078b3c) mup2_spec_bar_pane_g1

0xc970,	// (0x00078b46) mup2_spec_bar_pane_g2

0x0001,

0xf5fe,	// (0x0007b7d4) mup2_spec_bar_pane_g

0x4111,	// (0x000702e7) mup2_osc_middle_pane

0xc982,	// (0x00078b58) mup2_visualizer_osc_pane_g1

0x9441,	// (0x00075617) popup_number_entry_window_t1_ParamLimits

0x9454,	// (0x0007562a) popup_number_entry_window_t2_ParamLimits

0x9466,	// (0x0007563c) popup_number_entry_window_t3_ParamLimits

0x0576,	// (0x0006c74c) popup_number_entry_window_t5_ParamLimits

0x0576,	// (0x0006c74c) popup_number_entry_window_t5

0xf0af,	// (0x0007b285) popup_number_entry_window_t_ParamLimits

0x9478,	// (0x0007564e) text_title_cp2_ParamLimits

0x98d0,	// (0x00075aa6) aid_hotspot_pointer_text2_pane

0x98ea,	// (0x00075ac0) main_viewer_pane_g9_ParamLimits

0x98ea,	// (0x00075ac0) main_viewer_pane_g9

0xadb7,	// (0x00076f8d) cale_month_pane_t1_ParamLimits

0xadf4,	// (0x00076fca) bg_cale_pane_ParamLimits

0xae0c,	// (0x00076fe2) list_cale_pane_ParamLimits

0xae1d,	// (0x00076ff3) listscroll_cale_day_pane_t1

0xae2f,	// (0x00077005) scroll_pane_cp09_ParamLimits

0x28a0,	// (0x0006ea76) main_mup_eq_pane_t1_ParamLimits

0x28a0,	// (0x0006ea76) main_mup_eq_pane_t1

0x28ba,	// (0x0006ea90) main_mup_eq_pane_t2_ParamLimits

0x28ba,	// (0x0006ea90) main_mup_eq_pane_t2

0x28d4,	// (0x0006eaaa) main_mup_eq_pane_t3_ParamLimits

0x28d4,	// (0x0006eaaa) main_mup_eq_pane_t3

0x28f0,	// (0x0006eac6) main_mup_eq_pane_t4_ParamLimits

0x28f0,	// (0x0006eac6) main_mup_eq_pane_t4

0x290c,	// (0x0006eae2) main_mup_eq_pane_t5_ParamLimits

0x290c,	// (0x0006eae2) main_mup_eq_pane_t5

0x2928,	// (0x0006eafe) main_mup_eq_pane_t6_ParamLimits

0x2928,	// (0x0006eafe) main_mup_eq_pane_t6

0x293c,	// (0x0006eb12) main_mup_eq_pane_t7_ParamLimits

0x293c,	// (0x0006eb12) main_mup_eq_pane_t7

0x2950,	// (0x0006eb26) main_mup_eq_pane_t8_ParamLimits

0x2950,	// (0x0006eb26) main_mup_eq_pane_t8

0x2964,	// (0x0006eb3a) main_mup_eq_pane_t9_ParamLimits

0x2964,	// (0x0006eb3a) main_mup_eq_pane_t9

0x297e,	// (0x0006eb54) main_mup_eq_pane_t10_ParamLimits

0x297e,	// (0x0006eb54) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0007b610) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0007b610) main_mup_eq_pane_t

0x2a2d,	// (0x0006ec03) mup_equalizer_pane_cp5_ParamLimits

0x2a41,	// (0x0006ec17) mup_equalizer_pane_cp6_ParamLimits

0x2a55,	// (0x0006ec2b) mup_equalizer_pane_cp7_ParamLimits

0x9417,	// (0x000755ed) main_gallery_pane

0xc98b,	// (0x00078b61) smil2_volume_pane

0xc993,	// (0x00078b69) smil_status_volume_pane_g1_ParamLimits

0xc9a6,	// (0x00078b7c) smil_status_volume_pane_g2_ParamLimits

0x994a,	// (0x00075b20) smil_status_volume_pane_g3_ParamLimits

0xf603,	// (0x0007b7d9) smil_status_volume_pane_g_ParamLimits

0xcaf8,	// (0x00078cce) bg_popup_window_pane_cp07_ParamLimits

0xcb06,	// (0x00078cdc) blid_firmament_pane

0x411a,	// (0x000702f0) aid_size_cell_gallery_ParamLimits

0x411a,	// (0x000702f0) aid_size_cell_gallery

0x4130,	// (0x00070306) grid_gallery_pane_ParamLimits

0x4130,	// (0x00070306) grid_gallery_pane

0x4149,	// (0x0007031f) cell_gallery_pane_ParamLimits

0x4149,	// (0x0007031f) cell_gallery_pane

0xcc29,	// (0x00078dff) bg_cell_gallery_focus_pane_ParamLimits

0xcc29,	// (0x00078dff) bg_cell_gallery_focus_pane

0xcc3b,	// (0x00078e11) cell_gallery_pane_g1_ParamLimits

0xcc3b,	// (0x00078e11) cell_gallery_pane_g1

0x4192,	// (0x00070368) cell_gallery_pane_g2_ParamLimits

0x4192,	// (0x00070368) cell_gallery_pane_g2

0x419f,	// (0x00070375) cell_gallery_pane_g3_ParamLimits

0x419f,	// (0x00070375) cell_gallery_pane_g3

0xcc47,	// (0x00078e1d) cell_gallery_pane_g4_ParamLimits

0xcc47,	// (0x00078e1d) cell_gallery_pane_g4

0x0003,

0xf6b1,	// (0x0007b887) cell_gallery_pane_g_ParamLimits

0xf6b1,	// (0x0007b887) cell_gallery_pane_g

0xcc53,	// (0x00078e29) bg_cell_gallery_focus_pane_g1

0xcc5b,	// (0x00078e31) bg_cell_gallery_focus_pane_g2

0xcc63,	// (0x00078e39) bg_cell_gallery_focus_pane_g3

0xcc6b,	// (0x00078e41) bg_cell_gallery_focus_pane_g4

0xcc73,	// (0x00078e49) bg_cell_gallery_focus_pane_g5

0xcc7b,	// (0x00078e51) bg_cell_gallery_focus_pane_g6

0xcc83,	// (0x00078e59) bg_cell_gallery_focus_pane_g7

0xcc8b,	// (0x00078e61) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6ba,	// (0x0007b890) bg_cell_gallery_focus_pane_g

0xcc93,	// (0x00078e69) aid_firma_cardinal

0xcca7,	// (0x00078e7d) blid_firmament_pane_t1

0xccbe,	// (0x00078e94) blid_firmament_pane_t2

0xccd5,	// (0x00078eab) blid_firmament_pane_t3

0xccec,	// (0x00078ec2) blid_firmament_pane_t4

0x0003,

0xf6cb,	// (0x0007b8a1) blid_firmament_pane_t

0xcd03,	// (0x00078ed9) blid_sat_info_pane

0xcd13,	// (0x00078ee9) blid_sat_info_pane_g1

0xcd13,	// (0x00078ee9) blid_sat_info_pane_g2

0x0001,

0xf6d4,	// (0x0007b8aa) blid_sat_info_pane_g

0xcd1d,	// (0x00078ef3) blid_sat_info_pane_t1

0xcd2b,	// (0x00078f01) smil2_volume_content_pane

0xcd34,	// (0x00078f0a) smil2_volume_pane_g1

0xa99d,	// (0x00076b73) smil2_volume_content_pane_g1

0xcd3c,	// (0x00078f12) smil2_volume_content_pane_g2

0xcd45,	// (0x00078f1b) smil2_volume_content_pane_g3

0xcd4e,	// (0x00078f24) smil2_volume_content_pane_g4

0xcd57,	// (0x00078f2d) smil2_volume_content_pane_g5

0xcd60,	// (0x00078f36) smil2_volume_content_pane_g6

0xcd69,	// (0x00078f3f) smil2_volume_content_pane_g7

0xcd72,	// (0x00078f48) smil2_volume_content_pane_g8

0xcd7b,	// (0x00078f51) smil2_volume_content_pane_g9

0xcd84,	// (0x00078f5a) smil2_volume_content_pane_g10

0x0009,

0xf6d9,	// (0x0007b8af) smil2_volume_content_pane_g

0x0ce0,	// (0x0006ceb6) cale_week_day_heading_pane_t1_ParamLimits

0x0d0a,	// (0x0006cee0) cale_week_day_heading_pane_t2_ParamLimits

0x0d39,	// (0x0006cf0f) cale_week_day_heading_pane_t3_ParamLimits

0x0d68,	// (0x0006cf3e) cale_week_day_heading_pane_t4_ParamLimits

0x0d97,	// (0x0006cf6d) cale_week_day_heading_pane_t5_ParamLimits

0x0dce,	// (0x0006cfa4) cale_week_day_heading_pane_t6_ParamLimits

0x0e05,	// (0x0006cfdb) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0007b38c) cale_week_day_heading_pane_t_ParamLimits

0xaa2a,	// (0x00076c00) bg_cale_side_pane_ParamLimits

0x0e2f,	// (0x0006d005) cale_week_time_pane_t1_ParamLimits

0x0e49,	// (0x0006d01f) cale_week_time_pane_t2_ParamLimits

0x0e63,	// (0x0006d039) cale_week_time_pane_t3_ParamLimits

0x0e7d,	// (0x0006d053) cale_week_time_pane_t4_ParamLimits

0x0e97,	// (0x0006d06d) cale_week_time_pane_t5_ParamLimits

0x0eb1,	// (0x0006d087) cale_week_time_pane_t6_ParamLimits

0x0ecb,	// (0x0006d0a1) cale_week_time_pane_t7_ParamLimits

0x0ee5,	// (0x0006d0bb) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0007b39b) cale_week_time_pane_t_ParamLimits

0x0f05,	// (0x0006d0db) cell_cale_week_pane_g2_ParamLimits

0xaa2a,	// (0x00076c00) bg_cale_side_pane_cp01_ParamLimits

0x1f78,	// (0x0006e14e) cale_month_week_pane_t1_ParamLimits

0x1f91,	// (0x0006e167) cale_month_week_pane_t2_ParamLimits

0x1faa,	// (0x0006e180) cale_month_week_pane_t3_ParamLimits

0x1fc3,	// (0x0006e199) cale_month_week_pane_t4_ParamLimits

0x1fdc,	// (0x0006e1b2) cale_month_week_pane_t5_ParamLimits

0x1ff5,	// (0x0006e1cb) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0007b470) cale_month_week_pane_t_ParamLimits

0x9811,	// (0x000759e7) cell_cale_month_pane_g1_ParamLimits

0x9417,	// (0x000755ed) main_cale_event_viewer_pane

0x93e1,	// (0x000755b7) listscroll_cale_event_viewer_pane

0xcd8d,	// (0x00078f63) list_cale_ev_pane

0xcd95,	// (0x00078f6b) scroll_pane_cp023

0xcda1,	// (0x00078f77) field_cale_ev_pane_ParamLimits

0xcda1,	// (0x00078f77) field_cale_ev_pane

0xcdbf,	// (0x00078f95) field_cale_ev_content_pane_ParamLimits

0xcdbf,	// (0x00078f95) field_cale_ev_content_pane

0xcdcb,	// (0x00078fa1) field_cale_ev_pane_g1_ParamLimits

0xcdcb,	// (0x00078fa1) field_cale_ev_pane_g1

0xcdd7,	// (0x00078fad) field_cale_ev_pane_g2_ParamLimits

0xcdd7,	// (0x00078fad) field_cale_ev_pane_g2

0xcdef,	// (0x00078fc5) field_cale_ev_pane_g3_ParamLimits

0xcdef,	// (0x00078fc5) field_cale_ev_pane_g3

0x0002,

0xf6ee,	// (0x0007b8c4) field_cale_ev_pane_g_ParamLimits

0xf6ee,	// (0x0007b8c4) field_cale_ev_pane_g

0xce07,	// (0x00078fdd) field_cale_ev_pane_t1_ParamLimits

0xce07,	// (0x00078fdd) field_cale_ev_pane_t1

0xa9a6,	// (0x00076b7c) field_cale_ev_content_pane_t1_ParamLimits

0xa9a6,	// (0x00076b7c) field_cale_ev_content_pane_t1

0xb62f,	// (0x00077805) bg_button_pane_cp01

0x0a0d,	// (0x0006cbe3) listscroll_cale_week_pane_ParamLimits

0xa9d5,	// (0x00076bab) popup_toolbar_window_cp01

0xa9fb,	// (0x00076bd1) listscroll_cale_week_pane_t1_ParamLimits

0x0a0d,	// (0x0006cbe3) listscroll_cale_day_pane_ParamLimits

0xa9d5,	// (0x00076bab) popup_toolbar_window_cp02

0xae1d,	// (0x00076ff3) listscroll_cale_day_pane_t1_ParamLimits

0x345d,	// (0x0006f633) main_cale_month_pane_ParamLimits

0x9935,	// (0x00075b0b) popup_toolbar_window_cp03_ParamLimits

0x9935,	// (0x00075b0b) popup_toolbar_window_cp03

0x2d5d,	// (0x0006ef33) main_image_pane_g2_ParamLimits

0x2d5d,	// (0x0006ef33) main_image_pane_g2

0x2d6e,	// (0x0006ef44) main_image_pane_g3_ParamLimits

0x2d6e,	// (0x0006ef44) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0007b6a2) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0007b6a2) main_image_pane_g

0xb749,	// (0x0007791f) main_image_pane_t1_ParamLimits

0x2d7f,	// (0x0006ef55) main_image_pane_t2_ParamLimits

0x2d7f,	// (0x0006ef55) main_image_pane_t2

0x2d91,	// (0x0006ef67) main_image_pane_t3_ParamLimits

0x2d91,	// (0x0006ef67) main_image_pane_t3

0x2db9,	// (0x0006ef8f) main_image_pane_t4_ParamLimits

0x2db9,	// (0x0006ef8f) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0007b6a9) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0007b6a9) main_image_pane_t

0x2dd9,	// (0x0006efaf) popup_image_details_window_cp01

0x2de3,	// (0x0006efb9) popup_toobar_trans_pane_cp01_ParamLimits

0x2de3,	// (0x0006efb9) popup_toobar_trans_pane_cp01

0x3568,	// (0x0006f73e) popup_image_details_window_ParamLimits

0x3568,	// (0x0006f73e) popup_image_details_window

0x9908,	// (0x00075ade) popup_image_focus_window

0x3987,	// (0x0006fb5d) camera2_autofocus_pane_ParamLimits

0x3987,	// (0x0006fb5d) camera2_autofocus_pane

0x93e1,	// (0x000755b7) bg_popup_sub_pane_cp06

0xce1e,	// (0x00078ff4) popup_image_focus_window_g1

0xce26,	// (0x00078ffc) popup_image_focus_window_g2

0xce2e,	// (0x00079004) popup_image_focus_window_g3

0xce36,	// (0x0007900c) popup_image_focus_window_g4

0x0003,

0xf6f5,	// (0x0007b8cb) popup_image_focus_window_g

0xce3e,	// (0x00079014) popup_image_focus_window_t1

0xce4c,	// (0x00079022) popup_image_focus_window_t2

0xce5c,	// (0x00079032) popup_image_focus_window_t3

0x0002,

0xf6fe,	// (0x0007b8d4) popup_image_focus_window_t

0xce6a,	// (0x00079040) camera2_autofocus_pane_g1

0xa475,	// (0x0007664b) bg_tb_trans_pane_cp01

0xce78,	// (0x0007904e) popup_image_details_window_g1

0xce8b,	// (0x00079061) popup_image_details_window_g2

0x0002,

0xf710,	// (0x0007b8e6) popup_image_details_window_g

0xceb4,	// (0x0007908a) popup_image_details_window_t1

0xcec6,	// (0x0007909c) popup_image_details_window_t2

0xcedf,	// (0x000790b5) popup_image_details_window_t3

0xcef3,	// (0x000790c9) popup_image_details_window_t4

0xcf0e,	// (0x000790e4) popup_image_details_window_t5

0x0004,

0xf717,	// (0x0007b8ed) popup_image_details_window_t

0xa2dc,	// (0x000764b2) bg_calc_paper_pane_ParamLimits

0x9417,	// (0x000755ed) grid_highlight_pane_cp013

0x9781,	// (0x00075957) list_calc_pane_ParamLimits

0x9793,	// (0x00075969) scroll_pane_cp024

0xa2f0,	// (0x000764c6) bg_calc_display_pane_ParamLimits

0x086d,	// (0x0006ca43) calc_display_pane_t1_ParamLimits

0x087f,	// (0x0006ca55) calc_display_pane_t2_ParamLimits

0x979b,	// (0x00075971) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0007b30c) calc_display_pane_t_ParamLimits

0x0939,	// (0x0006cb0f) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0007b329) cell_calc_pane_g

0x0942,	// (0x0006cb18) cell_calc_pane_t1

0xa34f,	// (0x00076525) grid_highlight_pane_cp02_ParamLimits

0xa365,	// (0x0007653b) toolbar_button_pane_cp01_ParamLimits

0xa365,	// (0x0007653b) toolbar_button_pane_cp01

0xb78e,	// (0x00077964) temp_image_control_pane_ParamLimits

0xb78e,	// (0x00077964) temp_image_control_pane

0x9409,	// (0x000755df) main_mp3_pane

0xcf28,	// (0x000790fe) temp_image_control_pane_g1_ParamLimits

0xcf28,	// (0x000790fe) temp_image_control_pane_g1

0xcf36,	// (0x0007910c) temp_image_control_pane_g2_ParamLimits

0xcf36,	// (0x0007910c) temp_image_control_pane_g2

0xcf48,	// (0x0007911e) temp_image_control_pane_g3_ParamLimits

0xcf48,	// (0x0007911e) temp_image_control_pane_g3

0x41dc,	// (0x000703b2) temp_image_control_pane_g4_ParamLimits

0x41dc,	// (0x000703b2) temp_image_control_pane_g4

0x0003,

0xf722,	// (0x0007b8f8) temp_image_control_pane_g_ParamLimits

0xf722,	// (0x0007b8f8) temp_image_control_pane_g

0xcf28,	// (0x000790fe) main_mp3_pane_g1

0x41ef,	// (0x000703c5) main_mp3_pane_g2

0x0007,

0xf72b,	// (0x0007b901) main_mp3_pane_g

0xcf8b,	// (0x00079161) main_mp3_pane_t1

0xaa8d,	// (0x00076c63) main_camera_pane_g8_ParamLimits

0xaa8d,	// (0x00076c63) main_camera_pane_g8

0x1209,	// (0x0006d3df) main_video_pane_g7_ParamLimits

0x1209,	// (0x0006d3df) main_video_pane_g7

0x998a,	// (0x00075b60) main_camera2_pane_t7_ParamLimits

0x998a,	// (0x00075b60) main_camera2_pane_t7

0xabd5,	// (0x00076dab) scroll_pane_cp025_ParamLimits

0xabd5,	// (0x00076dab) scroll_pane_cp025

0xabe9,	// (0x00076dbf) scroll_pane_cp026_ParamLimits

0xabe9,	// (0x00076dbf) scroll_pane_cp026

0xabf8,	// (0x00076dce) wml_content_pane_ParamLimits

0x9417,	// (0x000755ed) main_touch_calib_pane

0x42c3,	// (0x00070499) main_touch_calib_pane_g1

0x42d5,	// (0x000704ab) main_touch_calib_pane_g2

0x42e7,	// (0x000704bd) main_touch_calib_pane_g3

0x42f9,	// (0x000704cf) main_touch_calib_pane_g4

0x0003,

0xf749,	// (0x0007b91f) main_touch_calib_pane_g

0x430b,	// (0x000704e1) main_touch_calib_pane_t1

0x4325,	// (0x000704fb) main_touch_calib_pane_t2

0x0004,

0xf752,	// (0x0007b928) main_touch_calib_pane_t

0xb35b,	// (0x00077531) mup_progress_pane_cp02

0xb390,	// (0x00077566) navi_pane_g1

0xb459,	// (0x0007762f) navi_pane_mp_t3

0x9409,	// (0x000755df) main_mp3_pane_ParamLimits

0x36f3,	// (0x0006f8c9) navi_pane_ParamLimits

0xcf28,	// (0x000790fe) main_mp3_pane_g1_ParamLimits

0x41ef,	// (0x000703c5) main_mp3_pane_g2_ParamLimits

0x41fd,	// (0x000703d3) main_mp3_pane_g3_ParamLimits

0x41fd,	// (0x000703d3) main_mp3_pane_g3

0x420b,	// (0x000703e1) main_mp3_pane_g4_ParamLimits

0x420b,	// (0x000703e1) main_mp3_pane_g4

0xcf58,	// (0x0007912e) main_mp3_pane_g5_ParamLimits

0xcf58,	// (0x0007912e) main_mp3_pane_g5

0xcf66,	// (0x0007913c) main_mp3_pane_g6_ParamLimits

0xcf66,	// (0x0007913c) main_mp3_pane_g6

0xcf73,	// (0x00079149) main_mp3_pane_g7_ParamLimits

0xcf73,	// (0x00079149) main_mp3_pane_g7

0xcf7f,	// (0x00079155) main_mp3_pane_g8_ParamLimits

0xcf7f,	// (0x00079155) main_mp3_pane_g8

0xf72b,	// (0x0007b901) main_mp3_pane_g_ParamLimits

0x4217,	// (0x000703ed) main_mp3_pane_t2

0x4225,	// (0x000703fb) main_mp3_pane_t3

0xcf99,	// (0x0007916f) main_mp3_pane_t4

0xcfa7,	// (0x0007917d) main_mp3_pane_t5

0x0005,

0xf73c,	// (0x0007b912) main_mp3_pane_t

0xcfb5,	// (0x0007918b) mup_progress_pane_cp01

0x02fb,	// (0x0006c4d1) aid_zoom_text_secondary2

0xcd8d,	// (0x00078f63) list_cale_ev2_pane

0xcd95,	// (0x00078f6b) scroll_pane_cp023_ParamLimits

0x437b,	// (0x00070551) field_cale_ev2_pane_ParamLimits

0x437b,	// (0x00070551) field_cale_ev2_pane

0xa483,	// (0x00076659) field_cale_ev2_pane_g1_ParamLimits

0xa483,	// (0x00076659) field_cale_ev2_pane_g1

0xa48f,	// (0x00076665) field_cale_ev2_pane_g2_ParamLimits

0xa48f,	// (0x00076665) field_cale_ev2_pane_g2

0xa4a7,	// (0x0007667d) field_cale_ev2_pane_g3_ParamLimits

0xa4a7,	// (0x0007667d) field_cale_ev2_pane_g3

0x0003,

0xf75d,	// (0x0007b933) field_cale_ev2_pane_g_ParamLimits

0xf75d,	// (0x0007b933) field_cale_ev2_pane_g

0xa4cb,	// (0x000766a1) field_cale_ev2_pane_t1_ParamLimits

0xa4cb,	// (0x000766a1) field_cale_ev2_pane_t1

0xa4e2,	// (0x000766b8) field_cale_ev2_pane_t2_ParamLimits

0xa4e2,	// (0x000766b8) field_cale_ev2_pane_t2

0x0001,

0xf766,	// (0x0007b93c) field_cale_ev2_pane_t_ParamLimits

0xf766,	// (0x0007b93c) field_cale_ev2_pane_t

0x2c11,	// (0x0006ede7) main_postcard_pane_g5_ParamLimits

0x2c11,	// (0x0006ede7) main_postcard_pane_g5

0x2c27,	// (0x0006edfd) main_postcard_pane_g6_ParamLimits

0x2c27,	// (0x0006edfd) main_postcard_pane_g6

0x0fcf,	// (0x0006d1a5) camera2_autofocus_pane_cp_ParamLimits

0x0fcf,	// (0x0006d1a5) camera2_autofocus_pane_cp

0x9409,	// (0x000755df) main_mup3_pane

0x43e0,	// (0x000705b6) main_mup3_pane_g1_ParamLimits

0x43e0,	// (0x000705b6) main_mup3_pane_g1

0x4402,	// (0x000705d8) main_mup3_pane_g2_ParamLimits

0x4402,	// (0x000705d8) main_mup3_pane_g2

0x4482,	// (0x00070658) main_mup3_pane_g3_ParamLimits

0x4482,	// (0x00070658) main_mup3_pane_g3

0x44c8,	// (0x0007069e) main_mup3_pane_g4_ParamLimits

0x44c8,	// (0x0007069e) main_mup3_pane_g4

0x450e,	// (0x000706e4) main_mup3_pane_g5_ParamLimits

0x450e,	// (0x000706e4) main_mup3_pane_g5

0x4554,	// (0x0007072a) main_mup3_pane_g6_ParamLimits

0x4554,	// (0x0007072a) main_mup3_pane_g6

0xcfbd,	// (0x00079193) main_mup3_pane_g7_ParamLimits

0xcfbd,	// (0x00079193) main_mup3_pane_g7

0x0007,

0xf776,	// (0x0007b94c) main_mup3_pane_g_ParamLimits

0xf776,	// (0x0007b94c) main_mup3_pane_g

0x45d2,	// (0x000707a8) main_mup3_pane_t1_ParamLimits

0x45d2,	// (0x000707a8) main_mup3_pane_t1

0x4646,	// (0x0007081c) main_mup3_pane_t2_ParamLimits

0x4646,	// (0x0007081c) main_mup3_pane_t2

0x471a,	// (0x000708f0) main_mup3_pane_t4_ParamLimits

0x471a,	// (0x000708f0) main_mup3_pane_t4

0x4770,	// (0x00070946) main_mup3_pane_t5_ParamLimits

0x4770,	// (0x00070946) main_mup3_pane_t5

0x482c,	// (0x00070a02) main_mup3_pane_t6_ParamLimits

0x482c,	// (0x00070a02) main_mup3_pane_t6

0x0005,

0xf787,	// (0x0007b95d) main_mup3_pane_t_ParamLimits

0xf787,	// (0x0007b95d) main_mup3_pane_t

0x48e4,	// (0x00070aba) mup3_progress_pane_ParamLimits

0x48e4,	// (0x00070aba) mup3_progress_pane

0x4970,	// (0x00070b46) popup_mup3_control_window_ParamLimits

0x4970,	// (0x00070b46) popup_mup3_control_window

0xcfcb,	// (0x000791a1) popup_mup3_text_window

0x49a2,	// (0x00070b78) mup3_progress_pane_t1

0x49c1,	// (0x00070b97) mup3_progress_pane_t2

0xcfd3,	// (0x000791a9) mup3_progress_pane_t3

0x0002,

0xf794,	// (0x0007b96a) mup3_progress_pane_t

0xcff0,	// (0x000791c6) mup_progress_pane_cp03

0x93e1,	// (0x000755b7) bg_tb_trans_pane_cp04

0x49e0,	// (0x00070bb6) mup3_volume_pane

0x49e8,	// (0x00070bbe) popup_mup3_control_window_g1

0x49f1,	// (0x00070bc7) mup3_volume_pane_g1

0x49fa,	// (0x00070bd0) mup3_volume_pane_g2

0x4a03,	// (0x00070bd9) mup3_volume_pane_g3

0x0002,

0xf79b,	// (0x0007b971) mup3_volume_pane_g

0x93e1,	// (0x000755b7) bg_tb_trans_pane_cp03

0xd000,	// (0x000791d6) popup_mup3_text_window_g1

0xd008,	// (0x000791de) popup_mup3_text_window_t1

0xa338,	// (0x0007650e) list_calc_item_pane_g1_ParamLimits

0xca66,	// (0x00078c3c) mup_volume_pane_cp_g1

0x433f,	// (0x00070515) main_touch_calib_pane_t3

0x4353,	// (0x00070529) main_touch_calib_pane_t4

0x4367,	// (0x0007053d) main_touch_calib_pane_t5

0x02a7,	// (0x0006c47d) aid_cell_size_toolbar2

0x02af,	// (0x0006c485) aid_popup3_width_pane

0x02eb,	// (0x0006c4c1) aid_zoom_text_msg_primary

0x0fae,	// (0x0006d184) vorec_t7

0xa2fc,	// (0x000764d2) bg_calc_paper_pane_g1_ParamLimits

0xa308,	// (0x000764de) bg_calc_paper_pane_g2_ParamLimits

0xa314,	// (0x000764ea) bg_calc_paper_pane_g3_ParamLimits

0xa320,	// (0x000764f6) bg_calc_paper_pane_g4_ParamLimits

0xa32c,	// (0x00076502) bg_calc_paper_pane_g5_ParamLimits

0x08c6,	// (0x0006ca9c) bg_calc_paper_pane_g6_ParamLimits

0x08d5,	// (0x0006caab) bg_calc_paper_pane_g7_ParamLimits

0x08e4,	// (0x0006caba) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0007b313) bg_calc_paper_pane_g_ParamLimits

0x08f7,	// (0x0006cacd) calc_bg_paper_pane_g9_ParamLimits

0x111b,	// (0x0006d2f1) image_qvga_pane_ParamLimits

0x111b,	// (0x0006d2f1) image_qvga_pane

0xa21f,	// (0x000763f5) bg_popup_sub_pane_cp04_ParamLimits

0xb6c5,	// (0x0007789b) popup_mup_playback_window_g1_ParamLimits

0xb6d1,	// (0x000778a7) popup_mup_playback_window_t1_ParamLimits

0xb6e6,	// (0x000778bc) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0007b69d) popup_mup_playback_window_t_ParamLimits

0x3e7e,	// (0x00070054) main_mup2_pane_g3_ParamLimits

0x3e7e,	// (0x00070054) main_mup2_pane_g3

0x152e,	// (0x0006d704) popup_toolbar_window_cp04

0xbadb,	// (0x00077cb1) popup_call2_audio_second_window_g3_ParamLimits

0xbadb,	// (0x00077cb1) popup_call2_audio_second_window_g3

0xbee5,	// (0x000780bb) popup_call2_audio_first_window_g4_ParamLimits

0xbee5,	// (0x000780bb) popup_call2_audio_first_window_g4

0xc564,	// (0x0007873a) popup_call2_audio_in_window_g4_ParamLimits

0xc564,	// (0x0007873a) popup_call2_audio_in_window_g4

0x2d3f,	// (0x0006ef15) aid_area_sk_bg_cut_ParamLimits

0x2d3f,	// (0x0006ef15) aid_area_sk_bg_cut

0xb6fb,	// (0x000778d1) aid_area_sk_bg_cut_2_ParamLimits

0xb6fb,	// (0x000778d1) aid_area_sk_bg_cut_2

0x4182,	// (0x00070358) aid_placing_details_win

0x418a,	// (0x00070360) aid_placing_details_win_2

0xce6a,	// (0x00079040) camera2_autofocus_pane_g1_ParamLimits

0x04bd,	// (0x0006c693) popup_fixed_preview_cale_window_ParamLimits

0x04bd,	// (0x0006c693) popup_fixed_preview_cale_window

0xb4d7,	// (0x000776ad) navi_slider_pane_g3

0xb4e0,	// (0x000776b6) navi_slider_pane_g4

0xb4e9,	// (0x000776bf) navi_slider_pane_g5

0xb4d7,	// (0x000776ad) navi_slider_pane_g6

0x98b7,	// (0x00075a8d) navi_slider_pane_g7

0xb5fc,	// (0x000777d2) mup_scale_pane_g3

0xb605,	// (0x000777db) mup_scale_pane_g4

0xb60e,	// (0x000777e4) mup_scale_pane_g5

0x2a69,	// (0x0006ec3f) mup_scale_pane_g6

0x2a72,	// (0x0006ec48) mup_scale_pane_g7

0xb4d7,	// (0x000776ad) cams2_slider_pane_g3

0xcae8,	// (0x00078cbe) cams2_slider_pane_g4

0x99f0,	// (0x00075bc6) cams2_slider_pane_g5

0xb4d7,	// (0x000776ad) cams2_slider_pane_g6

0x99f8,	// (0x00075bce) cams2_slider_pane_g7

0xcd13,	// (0x00078ee9) camera2_autofocus_pane_cp_g1

0xc8ff,	// (0x00078ad5) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ff,	// (0x00078ad5) bg_popup_preview_window_pane_cp02

0xd016,	// (0x000791ec) list_fp_cale_pane_ParamLimits

0xd016,	// (0x000791ec) list_fp_cale_pane

0xd022,	// (0x000791f8) popup_fixed_preview_cale_window_t1_ParamLimits

0xd022,	// (0x000791f8) popup_fixed_preview_cale_window_t1

0x4a0c,	// (0x00070be2) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a0c,	// (0x00070be2) popup_fixed_preview_cale_window_t2

0x4a21,	// (0x00070bf7) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a21,	// (0x00070bf7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a2,	// (0x0007b978) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a2,	// (0x0007b978) popup_fixed_preview_cale_window_t

0x4a36,	// (0x00070c0c) list_single_fp_cale_pane_ParamLimits

0x4a36,	// (0x00070c0c) list_single_fp_cale_pane

0xd040,	// (0x00079216) list_single_fp_cale_pane_g1_ParamLimits

0xd040,	// (0x00079216) list_single_fp_cale_pane_g1

0xd04c,	// (0x00079222) list_single_fp_cale_pane_g2_ParamLimits

0xd04c,	// (0x00079222) list_single_fp_cale_pane_g2

0x0002,

0xf7a9,	// (0x0007b97f) list_single_fp_cale_pane_g_ParamLimits

0xf7a9,	// (0x0007b97f) list_single_fp_cale_pane_g

0xd065,	// (0x0007923b) list_single_fp_cale_pane_t1_ParamLimits

0xd065,	// (0x0007923b) list_single_fp_cale_pane_t1

0xd077,	// (0x0007924d) list_single_fp_cale_pane_t2_ParamLimits

0xd077,	// (0x0007924d) list_single_fp_cale_pane_t2

0x0001,

0xf7b0,	// (0x0007b986) list_single_fp_cale_pane_t_ParamLimits

0xf7b0,	// (0x0007b986) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9417,	// (0x000755ed) main_dialer_pane

0x4a4c,	// (0x00070c22) aid_cell_size_keypad

0x4a56,	// (0x00070c2c) dialer_ne_pane

0x4a5e,	// (0x00070c34) grid_dialer_command_1_pane

0x4a66,	// (0x00070c3c) grid_dialer_command_2_pane

0x4a6e,	// (0x00070c44) grid_dialer_keypad_pane

0x4a80,	// (0x00070c56) bg_popup_call_pane_cp06_ParamLimits

0x4a80,	// (0x00070c56) bg_popup_call_pane_cp06

0x4a8c,	// (0x00070c62) dialer_ne_clear_pane_ParamLimits

0x4a8c,	// (0x00070c62) dialer_ne_clear_pane

0xd0aa,	// (0x00079280) dialer_ne_pane_g1

0xd0b2,	// (0x00079288) dialer_ne_pane_t1_ParamLimits

0xd0b2,	// (0x00079288) dialer_ne_pane_t1

0x4a98,	// (0x00070c6e) dialer_ne_pane_t2_ParamLimits

0x4a98,	// (0x00070c6e) dialer_ne_pane_t2

0x4ac2,	// (0x00070c98) dialer_ne_pane_t3_ParamLimits

0x4ac2,	// (0x00070c98) dialer_ne_pane_t3

0x0002,

0xf7b5,	// (0x0007b98b) dialer_ne_pane_t_ParamLimits

0xf7b5,	// (0x0007b98b) dialer_ne_pane_t

0x4af2,	// (0x00070cc8) dialer_ne_pane_t3_copy1_ParamLimits

0x4af2,	// (0x00070cc8) dialer_ne_pane_t3_copy1

0x4b21,	// (0x00070cf7) cell_dialer_keypad_pane_ParamLimits

0x4b21,	// (0x00070cf7) cell_dialer_keypad_pane

0x4b38,	// (0x00070d0e) cell_dialer_command_1_pane_ParamLimits

0x4b38,	// (0x00070d0e) cell_dialer_command_1_pane

0x4b4e,	// (0x00070d24) cell_dialer_command_2_pane_ParamLimits

0x4b4e,	// (0x00070d24) cell_dialer_command_2_pane

0xd0c4,	// (0x0007929a) bg_button_pane_cp02_ParamLimits

0xd0c4,	// (0x0007929a) bg_button_pane_cp02

0x4b5d,	// (0x00070d33) cell_dialer_keypad_pane_g1_ParamLimits

0x4b5d,	// (0x00070d33) cell_dialer_keypad_pane_g1

0xd0c4,	// (0x0007929a) bg_button_pane_cp03_ParamLimits

0xd0c4,	// (0x0007929a) bg_button_pane_cp03

0x4b71,	// (0x00070d47) cell_dialer_command_1_pane_g1_ParamLimits

0x4b71,	// (0x00070d47) cell_dialer_command_1_pane_g1

0xd0d0,	// (0x000792a6) bg_button_pane_cp04

0x4b85,	// (0x00070d5b) cell_dialer_command_2_pane_g1

0xaa85,	// (0x00076c5b) bg_button_pane_cp06

0xd0d8,	// (0x000792ae) dialer_ne_clear_pane_g1

0xb39c,	// (0x00077572) navi_pane_g2

0xb3ca,	// (0x000775a0) navi_pane_g3

0x0002,

0xf3ca,	// (0x0007b5a0) navi_pane_g

0xb467,	// (0x0007763d) navi_pane_mv_g2

0xb48e,	// (0x00077664) navi_pane_mv_g5

0x2637,	// (0x0006e80d) navi_pane_mv_t1

0xa2f0,	// (0x000764c6) main_clock2_pane

0xa475,	// (0x0007664b) main_clock2_list_pane_ParamLimits

0xa475,	// (0x0007664b) main_clock2_list_pane

0x4bf6,	// (0x00070dcc) main_clock2_pane_t1_ParamLimits

0x4bf6,	// (0x00070dcc) main_clock2_pane_t1

0x4c31,	// (0x00070e07) main_clock2_pane_t2_ParamLimits

0x4c31,	// (0x00070e07) main_clock2_pane_t2

0x0004,

0xf7c1,	// (0x0007b997) main_clock2_pane_t_ParamLimits

0xf7c1,	// (0x0007b997) main_clock2_pane_t

0x4cd1,	// (0x00070ea7) popup_clock_analogue_window_cp03_ParamLimits

0x4cd1,	// (0x00070ea7) popup_clock_analogue_window_cp03

0x4cf6,	// (0x00070ecc) popup_clock_digital_window_cp02_ParamLimits

0x4cf6,	// (0x00070ecc) popup_clock_digital_window_cp02

0x4d6f,	// (0x00070f45) main_clock2_list_single_pane_ParamLimits

0x4d6f,	// (0x00070f45) main_clock2_list_single_pane

0xaa85,	// (0x00076c5b) list_highlight_pane_cp05

0xd112,	// (0x000792e8) main_clock2_list_single_pane_t1

0x152e,	// (0x0006d704) popup_toolbar_window_cp04_ParamLimits

0x41ac,	// (0x00070382) camera2_autofocus_pane_g2_ParamLimits

0x41ac,	// (0x00070382) camera2_autofocus_pane_g2

0x41b8,	// (0x0007038e) camera2_autofocus_pane_g3_ParamLimits

0x41b8,	// (0x0007038e) camera2_autofocus_pane_g3

0x41c4,	// (0x0007039a) camera2_autofocus_pane_g4_ParamLimits

0x41c4,	// (0x0007039a) camera2_autofocus_pane_g4

0x41d0,	// (0x000703a6) camera2_autofocus_pane_g5_ParamLimits

0x41d0,	// (0x000703a6) camera2_autofocus_pane_g5

0x0004,

0xf705,	// (0x0007b8db) camera2_autofocus_pane_g_ParamLimits

0xf705,	// (0x0007b8db) camera2_autofocus_pane_g

0x439c,	// (0x00070572) camera2_autofocus_pane_cp_g2

0x43a4,	// (0x0007057a) camera2_autofocus_pane_cp_g3

0x43ac,	// (0x00070582) camera2_autofocus_pane_cp_g4

0x43b4,	// (0x0007058a) camera2_autofocus_pane_cp_g5

0x0004,

0xf76b,	// (0x0007b941) camera2_autofocus_pane_cp_g

0x4a78,	// (0x00070c4e) popup_dialer_spcha_window

0x93e1,	// (0x000755b7) bg_popup_sub_pane_cp07

0xd120,	// (0x000792f6) list_spcha_pane

0xd128,	// (0x000792fe) list_single_spcha_pane_ParamLimits

0xd128,	// (0x000792fe) list_single_spcha_pane

0x93e1,	// (0x000755b7) list_highlight_pane_cp06

0xd139,	// (0x0007930f) list_single_spcha_pane_t1

0xc30e,	// (0x000784e4) popup_call2_audio_out_window_g4_ParamLimits

0xc30e,	// (0x000784e4) popup_call2_audio_out_window_g4

0x9417,	// (0x000755ed) main_imed2_pane

0x9910,	// (0x00075ae6) popup_imed_adjust2_window

0x3580,	// (0x0006f756) popup_imed_trans_window_ParamLimits

0x3580,	// (0x0006f756) popup_imed_trans_window

0xcb51,	// (0x00078d27) popup_blid_sat_info2_window_t1

0xcb5f,	// (0x00078d35) popup_blid_sat_info2_window_t2

0x000a,

0xf69a,	// (0x0007b870) popup_blid_sat_info2_window_t

0x4e20,	// (0x00070ff6) aid_size_cell_colour_35

0x4e40,	// (0x00071016) aid_size_cell_colour_112

0x4e60,	// (0x00071036) aid_size_cell_effect

0xc90b,	// (0x00078ae1) bg_tb_trans_pane_cp02

0xaf26,	// (0x000770fc) heading_imed_pane

0x4e80,	// (0x00071056) listscroll_imed_pane

0xd147,	// (0x0007931d) heading_imed_pane_g1

0xd14f,	// (0x00079325) heading_imed_pane_t1

0xd15d,	// (0x00079333) grid_imed_colour_35_pane_ParamLimits

0xd15d,	// (0x00079333) grid_imed_colour_35_pane

0x4e8c,	// (0x00071062) grid_imed_effect_pane

0xd175,	// (0x0007934b) list_imed_aspect_pane

0x4ea2,	// (0x00071078) scroll_pane_cp027_ParamLimits

0x4ea2,	// (0x00071078) scroll_pane_cp027

0x4eb3,	// (0x00071089) cell_imed_effect_pane_ParamLimits

0x4eb3,	// (0x00071089) cell_imed_effect_pane

0xd17d,	// (0x00079353) cell_imed_colour_pane_ParamLimits

0xd17d,	// (0x00079353) cell_imed_colour_pane

0xd1bf,	// (0x00079395) cell_imed_colour_pane_g1_ParamLimits

0xd1bf,	// (0x00079395) cell_imed_colour_pane_g1

0xd1d0,	// (0x000793a6) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d0,	// (0x000793a6) hgihlgiht_grid_pane_cp016

0x4eda,	// (0x000710b0) cell_imed_effect_pane_g1

0x4ee2,	// (0x000710b8) grid_highlight_pane_cp017

0xd1e1,	// (0x000793b7) list_imed_single_pane_ParamLimits

0xd1e1,	// (0x000793b7) list_imed_single_pane

0x93e1,	// (0x000755b7) list_highlight_pane_cp07

0xd1f6,	// (0x000793cc) list_imed_aspect_pane_comp1_t1

0xc90b,	// (0x00078ae1) bg_tb_trans_pane_cp05

0xd218,	// (0x000793ee) popup_imed_adjust2_window_g1

0xd23f,	// (0x00079415) popup_imed_adjust2_window_t1

0xd257,	// (0x0007942d) slider_imed_adjust_pane

0xd26b,	// (0x00079441) slider_imed_adjust_pane_g1

0xd27b,	// (0x00079451) slider_imed_adjust_pane_g2

0xd28b,	// (0x00079461) slider_imed_adjust_pane_g3

0xd29c,	// (0x00079472) slider_imed_adjust_pane_g4

0x0003,

0xf7de,	// (0x0007b9b4) slider_imed_adjust_pane_g

0x4eeb,	// (0x000710c1) aid_size_cell_clipart2

0x4ef7,	// (0x000710cd) grid_imed_clipart_pane

0xd2ad,	// (0x00079483) scroll_pane_cp031

0x4f01,	// (0x000710d7) cell_imed_clipart_pane_ParamLimits

0x4f01,	// (0x000710d7) cell_imed_clipart_pane

0x4f23,	// (0x000710f9) cell_imed_clipart_pane_g1

0x93e1,	// (0x000755b7) grid_highlight_pane_cp014

0x4bd2,	// (0x00070da8) main_clock2_pane_g1_ParamLimits

0x4bd2,	// (0x00070da8) main_clock2_pane_g1

0x4d16,	// (0x00070eec) aid_call2_pane_cp10

0x4d28,	// (0x00070efe) aid_call_pane_cp10

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g1

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g2

0x4d3a,	// (0x00070f10) popup_clock_analogue_window_cp10_g3

0x4d3a,	// (0x00070f10) popup_clock_analogue_window_cp10_g4

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7cc,	// (0x0007b9a2) popup_clock_analogue_window_cp10_g

0x4d50,	// (0x00070f26) popup_clock_analogue_window_cp10_t1

0x4d81,	// (0x00070f57) clock_digital_number_pane_cp10_ParamLimits

0x4d81,	// (0x00070f57) clock_digital_number_pane_cp10

0x4d99,	// (0x00070f6f) clock_digital_number_pane_cp11_ParamLimits

0x4d99,	// (0x00070f6f) clock_digital_number_pane_cp11

0x4db1,	// (0x00070f87) clock_digital_number_pane_cp12_ParamLimits

0x4db1,	// (0x00070f87) clock_digital_number_pane_cp12

0x4dcb,	// (0x00070fa1) clock_digital_number_pane_cp13_ParamLimits

0x4dcb,	// (0x00070fa1) clock_digital_number_pane_cp13

0x4de5,	// (0x00070fbb) clock_digital_separator_pane_cp10_ParamLimits

0x4de5,	// (0x00070fbb) clock_digital_separator_pane_cp10

0x4dff,	// (0x00070fd5) popup_clock_digital_window_cp02_t1_ParamLimits

0x4dff,	// (0x00070fd5) popup_clock_digital_window_cp02_t1

0xa217,	// (0x000763ed) clock_digital_number_pane_cp10_g1

0xa217,	// (0x000763ed) clock_digital_number_pane_cp10_g2

0x0001,

0xf7e7,	// (0x0007b9bd) clock_digital_number_pane_cp10_g

0xa217,	// (0x000763ed) clock_digital_separator_pane_cp10_g1

0xa217,	// (0x000763ed) clock_digital_separator_pane_g2_cp10

0xb496,	// (0x0007766c) navi_pane_vded_g4

0xb49f,	// (0x00077675) navi_pane_vded_g5

0xb4a8,	// (0x0007767e) navi_pane_vded_t1

0x9417,	// (0x000755ed) main_vded_pane

0x4f2c,	// (0x00071102) main_vded_pane_g1

0x4f36,	// (0x0007110c) main_vded_pane_g2

0x4f40,	// (0x00071116) main_vded_pane_g3

0x0002,

0xf7ec,	// (0x0007b9c2) main_vded_pane_g

0x4f4a,	// (0x00071120) main_vded_pane_t1

0x4f58,	// (0x0007112e) main_vded_pane_t2

0x0001,

0xf7f3,	// (0x0007b9c9) main_vded_pane_t

0x4f66,	// (0x0007113c) vded_slider_pane

0x4f6e,	// (0x00071144) vded_video_pane

0xd2b5,	// (0x0007948b) vded_video_pane_g1

0x4f76,	// (0x0007114c) vded_video_pane_g2

0xcd13,	// (0x00078ee9) vded_video_pane_g3

0x0002,

0xf7f8,	// (0x0007b9ce) vded_video_pane_g

0xd2bf,	// (0x00079495) vded_slider_pane_g1

0xca66,	// (0x00078c3c) vded_slider_pane_g2

0xd2c8,	// (0x0007949e) vded_slider_pane_g3

0xd2d1,	// (0x000794a7) vded_slider_pane_g4

0xd2da,	// (0x000794b0) vded_slider_pane_g5

0x0004,

0xf7ff,	// (0x0007b9d5) vded_slider_pane_g

0x4958,	// (0x00070b2e) mup3_rocker_pane_ParamLimits

0x4958,	// (0x00070b2e) mup3_rocker_pane

0x4f7f,	// (0x00071155) mup3_control_keys_pane_g1

0x4f87,	// (0x0007115d) mup3_control_keys_pane_g2

0x4f8f,	// (0x00071165) mup3_control_keys_pane_g3

0x4f97,	// (0x0007116d) mup3_control_keys_pane_g4

0x0003,

0xf80a,	// (0x0007b9e0) mup3_control_keys_pane_g

0x04f4,	// (0x0006c6ca) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04f4,	// (0x0006c6ca) popup_toolbar2_fixed_window_cp01

0x498c,	// (0x00070b62) popup_toolbar2_fixed_window_cp02_ParamLimits

0x498c,	// (0x00070b62) popup_toolbar2_fixed_window_cp02

0xbc4d,	// (0x00077e23) popup_call2_audio_second_window_t4_ParamLimits

0xbc4d,	// (0x00077e23) popup_call2_audio_second_window_t4

0xc17b,	// (0x00078351) popup_call2_audio_first_window_t6_ParamLimits

0xc17b,	// (0x00078351) popup_call2_audio_first_window_t6

0xc411,	// (0x000785e7) popup_call2_audio_out_window_t6_ParamLimits

0xc411,	// (0x000785e7) popup_call2_audio_out_window_t6

0x9417,	// (0x000755ed) main_vitu_pane

0x4fa7,	// (0x0007117d) aid_size_cell_itu_ParamLimits

0x4fa7,	// (0x0007117d) aid_size_cell_itu

0xa475,	// (0x0007664b) bg_popup_window_pane_cp08_ParamLimits

0xa475,	// (0x0007664b) bg_popup_window_pane_cp08

0x4fbd,	// (0x00071193) field_vitu_entry_pane_ParamLimits

0x4fbd,	// (0x00071193) field_vitu_entry_pane

0x4fd5,	// (0x000711ab) grid_vitu_function_pane_ParamLimits

0x4fd5,	// (0x000711ab) grid_vitu_function_pane

0x4ff0,	// (0x000711c6) grid_vitu_itu_pane_ParamLimits

0x4ff0,	// (0x000711c6) grid_vitu_itu_pane

0x500e,	// (0x000711e4) cell_vitu_itu_pane_ParamLimits

0x500e,	// (0x000711e4) cell_vitu_itu_pane

0x5030,	// (0x00071206) cell_vitu_function_pane_ParamLimits

0x5030,	// (0x00071206) cell_vitu_function_pane

0xa475,	// (0x0007664b) bg_popup_sub_pane_cp08_ParamLimits

0xa475,	// (0x0007664b) bg_popup_sub_pane_cp08

0x5049,	// (0x0007121f) field_vitu_entry_pane_t1_ParamLimits

0x5049,	// (0x0007121f) field_vitu_entry_pane_t1

0xd2fb,	// (0x000794d1) field_vitu_entry_pane_t2_ParamLimits

0xd2fb,	// (0x000794d1) field_vitu_entry_pane_t2

0x0001,

0xf818,	// (0x0007b9ee) field_vitu_entry_pane_t_ParamLimits

0xf818,	// (0x0007b9ee) field_vitu_entry_pane_t

0xd318,	// (0x000794ee) bg_button_pane_cp05_ParamLimits

0xd318,	// (0x000794ee) bg_button_pane_cp05

0x5068,	// (0x0007123e) cell_vitu_itu_pane_g1

0x5080,	// (0x00071256) cell_vitu_itu_pane_t1_ParamLimits

0x5080,	// (0x00071256) cell_vitu_itu_pane_t1

0x5092,	// (0x00071268) cell_vitu_itu_pane_t2_ParamLimits

0x5092,	// (0x00071268) cell_vitu_itu_pane_t2

0x0002,

0xf81d,	// (0x0007b9f3) cell_vitu_itu_pane_t_ParamLimits

0xf81d,	// (0x0007b9f3) cell_vitu_itu_pane_t

0xd326,	// (0x000794fc) bg_button_pane_cp07

0x50c7,	// (0x0007129d) cell_vitu_function_pane_g1

0x9779,	// (0x0007594f) main_calc_pane_g1

0x02df,	// (0x0006c4b5) aid_visual_content_pane

0x9417,	// (0x000755ed) main_vradio_pane

0x50d0,	// (0x000712a6) main_vradio_pane_g1_ParamLimits

0x50d0,	// (0x000712a6) main_vradio_pane_g1

0xd330,	// (0x00079506) main_vradio_pane_g2_ParamLimits

0xd330,	// (0x00079506) main_vradio_pane_g2

0x0001,

0xf824,	// (0x0007b9fa) main_vradio_pane_g_ParamLimits

0xf824,	// (0x0007b9fa) main_vradio_pane_g

0x50e9,	// (0x000712bf) main_vradio_pane_t1_ParamLimits

0x50e9,	// (0x000712bf) main_vradio_pane_t1

0x50fe,	// (0x000712d4) main_vradio_pane_t2_ParamLimits

0x50fe,	// (0x000712d4) main_vradio_pane_t2

0xd33d,	// (0x00079513) main_vradio_pane_t3_ParamLimits

0xd33d,	// (0x00079513) main_vradio_pane_t3

0x0002,

0xf829,	// (0x0007b9ff) main_vradio_pane_t_ParamLimits

0xf829,	// (0x0007b9ff) main_vradio_pane_t

0x5113,	// (0x000712e9) vradio_rocker_control_pane_ParamLimits

0x5113,	// (0x000712e9) vradio_rocker_control_pane

0x5125,	// (0x000712fb) vradio_station_info_pane_ParamLimits

0x5125,	// (0x000712fb) vradio_station_info_pane

0xd351,	// (0x00079527) vradio_frequency_info_pane_ParamLimits

0xd351,	// (0x00079527) vradio_frequency_info_pane

0xcd13,	// (0x00078ee9) vradio_station_info_pane_g1

0xd360,	// (0x00079536) vradio_station_info_pane_t1_ParamLimits

0xd360,	// (0x00079536) vradio_station_info_pane_t1

0xd382,	// (0x00079558) vradio_station_info_pane_t2_ParamLimits

0xd382,	// (0x00079558) vradio_station_info_pane_t2

0x0001,

0xf830,	// (0x0007ba06) vradio_station_info_pane_t_ParamLimits

0xf830,	// (0x0007ba06) vradio_station_info_pane_t

0xd394,	// (0x0007956a) vradio_tuning_pane

0xd39c,	// (0x00079572) vradio_rocker_control_pane_g1

0xd3a4,	// (0x0007957a) vradio_rocker_control_pane_g2

0xd3ac,	// (0x00079582) vradio_rocker_control_pane_g3

0xd3b4,	// (0x0007958a) vradio_rocker_control_pane_g4

0xd3bc,	// (0x00079592) vradio_rocker_control_pane_g5

0x0004,

0xf835,	// (0x0007ba0b) vradio_rocker_control_pane_g

0x5137,	// (0x0007130d) vradio_frequency_info_pane_g1

0xd3c4,	// (0x0007959a) vradio_frequency_info_pane_t1_ParamLimits

0xd3c4,	// (0x0007959a) vradio_frequency_info_pane_t1

0x5141,	// (0x00071317) vradio_tuning_pane_g1

0x514c,	// (0x00071322) vradio_tuning_pane_t1

0x033c,	// (0x0006c512) area_side_right_pane_ParamLimits

0x033c,	// (0x0006c512) area_side_right_pane

0xc8c6,	// (0x00078a9c) status_small_pane_g1

0xc8ce,	// (0x00078aa4) status_small_pane_g2

0xc8d7,	// (0x00078aad) status_small_pane_g3

0xc8e0,	// (0x00078ab6) status_small_pane_g4

0x0003,

0xf5f0,	// (0x0007b7c6) status_small_pane_g

0xc8e9,	// (0x00078abf) status_small_pane_t1

0x9417,	// (0x000755ed) main_video3_pane

0xd3d8,	// (0x000795ae) cams_zoom_vslider_pane

0xd3e0,	// (0x000795b6) image3_wide_pane_ParamLimits

0xd3e0,	// (0x000795b6) image3_wide_pane

0xd3fa,	// (0x000795d0) image3_wide_small_pane

0xd406,	// (0x000795dc) main_video3_pane_g1_ParamLimits

0xd406,	// (0x000795dc) main_video3_pane_g1

0xd43f,	// (0x00079615) main_video3_pane_g2_ParamLimits

0xd43f,	// (0x00079615) main_video3_pane_g2

0x0001,

0xf840,	// (0x0007ba16) main_video3_pane_g_ParamLimits

0xf840,	// (0x0007ba16) main_video3_pane_g

0xd45b,	// (0x00079631) main_video3_pane_t1_ParamLimits

0xd45b,	// (0x00079631) main_video3_pane_t1

0xd486,	// (0x0007965c) main_video3_pane_t2_ParamLimits

0xd486,	// (0x0007965c) main_video3_pane_t2

0xd4b1,	// (0x00079687) main_video3_pane_t3_ParamLimits

0xd4b1,	// (0x00079687) main_video3_pane_t3

0x0002,

0xf845,	// (0x0007ba1b) main_video3_pane_t_ParamLimits

0xf845,	// (0x0007ba1b) main_video3_pane_t

0xd4de,	// (0x000796b4) cams_zoom_vslider_pane_g1

0xd4e7,	// (0x000796bd) cams_zoom_vslider_pane_g2

0x0001,

0xf84c,	// (0x0007ba22) cams_zoom_vslider_pane_g

0xd4ef,	// (0x000796c5) small_slider_vertical_pane

0xcd13,	// (0x00078ee9) small_slider_vertical_pane_g1

0xcd13,	// (0x00078ee9) small_slider_vertical_pane_g2

0xd4f7,	// (0x000796cd) small_slider_vertical_pane_g3

0x0002,

0xf851,	// (0x0007ba27) small_slider_vertical_pane_g

0x9417,	// (0x000755ed) main_hwr_training_pane

0xd500,	// (0x000796d6) hwr_training_instruct_pane_ParamLimits

0xd500,	// (0x000796d6) hwr_training_instruct_pane

0x515b,	// (0x00071331) hwr_training_navi_pane_ParamLimits

0x515b,	// (0x00071331) hwr_training_navi_pane

0x517a,	// (0x00071350) hwr_training_write_pane_ParamLimits

0x517a,	// (0x00071350) hwr_training_write_pane

0x93e1,	// (0x000755b7) bg_frame_shadow_pane

0xd537,	// (0x0007970d) hwr_training_write_pane_g1

0xd53f,	// (0x00079715) hwr_training_write_pane_g2

0xd547,	// (0x0007971d) hwr_training_write_pane_g3

0xd54f,	// (0x00079725) hwr_training_write_pane_g4

0xd557,	// (0x0007972d) hwr_training_write_pane_g5

0xd55f,	// (0x00079735) hwr_training_write_pane_g6

0xd567,	// (0x0007973d) hwr_training_write_pane_g7

0x0006,

0xf858,	// (0x0007ba2e) hwr_training_write_pane_g

0x9a01,	// (0x00075bd7) hwr_training_navi_pane_g1_ParamLimits

0x9a01,	// (0x00075bd7) hwr_training_navi_pane_g1

0x9a13,	// (0x00075be9) hwr_training_navi_pane_g2_ParamLimits

0x9a13,	// (0x00075be9) hwr_training_navi_pane_g2

0x9a25,	// (0x00075bfb) hwr_training_navi_pane_g3_ParamLimits

0x9a25,	// (0x00075bfb) hwr_training_navi_pane_g3

0x9a35,	// (0x00075c0b) hwr_training_navi_pane_g4_ParamLimits

0x9a35,	// (0x00075c0b) hwr_training_navi_pane_g4

0x0004,

0xf867,	// (0x0007ba3d) hwr_training_navi_pane_g_ParamLimits

0xf867,	// (0x0007ba3d) hwr_training_navi_pane_g

0x9a42,	// (0x00075c18) hwr_training_navi_pane_t1

0x51c4,	// (0x0007139a) list_single_hwr_training_instruct_pane_ParamLimits

0x51c4,	// (0x0007139a) list_single_hwr_training_instruct_pane

0xd56f,	// (0x00079745) list_single_hwr_training_instruct_pane_t1

0xcc53,	// (0x00078e29) bg_frame_shadow_pane_g1

0xd57e,	// (0x00079754) bg_frame_shadow_pane_g2

0xd586,	// (0x0007975c) bg_frame_shadow_pane_g3

0xd58e,	// (0x00079764) bg_frame_shadow_pane_g4

0xd596,	// (0x0007976c) bg_frame_shadow_pane_g5

0xd59e,	// (0x00079774) bg_frame_shadow_pane_g6

0xd5a6,	// (0x0007977c) bg_frame_shadow_pane_g7

0xa3a9,	// (0x0007657f) bg_frame_shadow_pane_g8

0x0007,

0xf872,	// (0x0007ba48) bg_frame_shadow_pane_g

0x9417,	// (0x000755ed) main_video_tele_dialer_pane

0x51da,	// (0x000713b0) aid_size_cell_video_keypad_ParamLimits

0x51da,	// (0x000713b0) aid_size_cell_video_keypad

0x51f4,	// (0x000713ca) grid_video_dialer_keypad_pane_ParamLimits

0x51f4,	// (0x000713ca) grid_video_dialer_keypad_pane

0x5242,	// (0x00071418) video_down_pane_cp_ParamLimits

0x5242,	// (0x00071418) video_down_pane_cp

0x5274,	// (0x0007144a) cell_video_dialer_keypad_pane_ParamLimits

0x5274,	// (0x0007144a) cell_video_dialer_keypad_pane

0xd5ae,	// (0x00079784) bg_button_pane_cp08_ParamLimits

0xd5ae,	// (0x00079784) bg_button_pane_cp08

0x5296,	// (0x0007146c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5296,	// (0x0007146c) cell_video_dialer_keypad_pane_g1

0x4942,	// (0x00070b18) mup3_rocker2_pane_ParamLimits

0x4942,	// (0x00070b18) mup3_rocker2_pane

0xcd13,	// (0x00078ee9) mup3_rocker2_pane_g1

0x346f,	// (0x0006f645) main_dialer2_pane

0x9417,	// (0x000755ed) main_mp4_pane

0x9a6e,	// (0x00075c44) main_mp4_pane_g1_ParamLimits

0x9a6e,	// (0x00075c44) main_mp4_pane_g1

0x9a6e,	// (0x00075c44) main_mp4_pane_g2_ParamLimits

0x9a6e,	// (0x00075c44) main_mp4_pane_g2

0x52d0,	// (0x000714a6) main_mp4_pane_g3_ParamLimits

0x52d0,	// (0x000714a6) main_mp4_pane_g3

0x9a7c,	// (0x00075c52) main_mp4_pane_g4_ParamLimits

0x9a7c,	// (0x00075c52) main_mp4_pane_g4

0x9aaa,	// (0x00075c80) main_mp4_pane_g5_ParamLimits

0x9aaa,	// (0x00075c80) main_mp4_pane_g5

0x0007,

0xf892,	// (0x0007ba68) main_mp4_pane_g_ParamLimits

0xf892,	// (0x0007ba68) main_mp4_pane_g

0x9b1e,	// (0x00075cf4) main_mp4_pane_t1_ParamLimits

0x9b1e,	// (0x00075cf4) main_mp4_pane_t1

0x9b7a,	// (0x00075d50) main_mp4_pane_t2_ParamLimits

0x9b7a,	// (0x00075d50) main_mp4_pane_t2

0xd5ba,	// (0x00079790) main_mp4_pane_t3_ParamLimits

0xd5ba,	// (0x00079790) main_mp4_pane_t3

0x9bcc,	// (0x00075da2) main_mp4_pane_t4_ParamLimits

0x9bcc,	// (0x00075da2) main_mp4_pane_t4

0x0003,

0xf8a3,	// (0x0007ba79) main_mp4_pane_t_ParamLimits

0xf8a3,	// (0x0007ba79) main_mp4_pane_t

0x9c10,	// (0x00075de6) mp4_progress_pane_ParamLimits

0x9c10,	// (0x00075de6) mp4_progress_pane

0x9c5a,	// (0x00075e30) mp4_rocker_pane_ParamLimits

0x9c5a,	// (0x00075e30) mp4_rocker_pane

0xd5e8,	// (0x000797be) mp4_progress_pane_t1

0xd601,	// (0x000797d7) mp4_progress_pane_t2

0x0001,

0xf8ac,	// (0x0007ba82) mp4_progress_pane_t

0xd61a,	// (0x000797f0) mup_progress_pane_cp04

0xd62d,	// (0x00079803) mp4_rocker_pane_g1

0x530c,	// (0x000714e2) aid_cell_size_keypad2_ParamLimits

0x530c,	// (0x000714e2) aid_cell_size_keypad2

0x5322,	// (0x000714f8) dialer2_ne_pane_ParamLimits

0x5322,	// (0x000714f8) dialer2_ne_pane

0x533c,	// (0x00071512) grid_dialer2_keypad_pane_ParamLimits

0x533c,	// (0x00071512) grid_dialer2_keypad_pane

0xcaf8,	// (0x00078cce) bg_popup_call_pane_cp07_ParamLimits

0xcaf8,	// (0x00078cce) bg_popup_call_pane_cp07

0x5358,	// (0x0007152e) dialer2_ne_pane_t1_ParamLimits

0x5358,	// (0x0007152e) dialer2_ne_pane_t1

0x5394,	// (0x0007156a) cell_dialer2_keypad_pane_ParamLimits

0x5394,	// (0x0007156a) cell_dialer2_keypad_pane

0xd649,	// (0x0007981f) bg_button_pane_pane_cp04_ParamLimits

0xd649,	// (0x0007981f) bg_button_pane_pane_cp04

0x53b6,	// (0x0007158c) cell_dialer2_keypad_pane_g1_ParamLimits

0x53b6,	// (0x0007158c) cell_dialer2_keypad_pane_g1

0x1402,	// (0x0006d5d8) aid_placing_vt_set_content_ParamLimits

0x1402,	// (0x0006d5d8) aid_placing_vt_set_content

0x142a,	// (0x0006d600) aid_placing_vt_set_title_ParamLimits

0x142a,	// (0x0006d600) aid_placing_vt_set_title

0x9417,	// (0x000755ed) main_image3_pane

0x547c,	// (0x00071652) area_side_right_pane_cp01_ParamLimits

0x547c,	// (0x00071652) area_side_right_pane_cp01

0x9a6e,	// (0x00075c44) main_image3_pane_g1_ParamLimits

0x9a6e,	// (0x00075c44) main_image3_pane_g1

0x5493,	// (0x00071669) main_image3_pane_g2_ParamLimits

0x5493,	// (0x00071669) main_image3_pane_g2

0x54bb,	// (0x00071691) main_image3_pane_g3_ParamLimits

0x54bb,	// (0x00071691) main_image3_pane_g3

0x54e5,	// (0x000716bb) main_image3_pane_g4_ParamLimits

0x54e5,	// (0x000716bb) main_image3_pane_g4

0x0003,

0xf8bb,	// (0x0007ba91) main_image3_pane_g_ParamLimits

0xf8bb,	// (0x0007ba91) main_image3_pane_g

0x550f,	// (0x000716e5) main_image3_pane_t1_ParamLimits

0x550f,	// (0x000716e5) main_image3_pane_t1

0x5567,	// (0x0007173d) main_image3_pane_t2_ParamLimits

0x5567,	// (0x0007173d) main_image3_pane_t2

0x55b9,	// (0x0007178f) main_image3_pane_t3_ParamLimits

0x55b9,	// (0x0007178f) main_image3_pane_t3

0x0003,

0xf8c4,	// (0x0007ba9a) main_image3_pane_t_ParamLimits

0xf8c4,	// (0x0007ba9a) main_image3_pane_t

0xa475,	// (0x0007664b) grid_sctrl_middle_pane_cp01_ParamLimits

0xa475,	// (0x0007664b) grid_sctrl_middle_pane_cp01

0x5641,	// (0x00071817) cell_sctrl_middle_pane_cp01_ParamLimits

0x5641,	// (0x00071817) cell_sctrl_middle_pane_cp01

0x565e,	// (0x00071834) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x565e,	// (0x00071834) cell_sctrl_middle_pane_cp01_g1

0x9417,	// (0x000755ed) main_call4_pane

0x5674,	// (0x0007184a) aid_size_button_call4_ParamLimits

0x5674,	// (0x0007184a) aid_size_button_call4

0x56a7,	// (0x0007187d) call4_windows_pane_ParamLimits

0x56a7,	// (0x0007187d) call4_windows_pane

0x56c6,	// (0x0007189c) grid_call4_button_pane_ParamLimits

0x56c6,	// (0x0007189c) grid_call4_button_pane

0x56f9,	// (0x000718cf) call4_windows_conf_pane

0x5710,	// (0x000718e6) popup_call4_audio_first_window_ParamLimits

0x5710,	// (0x000718e6) popup_call4_audio_first_window

0x5760,	// (0x00071936) popup_call4_audio_second_window_ParamLimits

0x5760,	// (0x00071936) popup_call4_audio_second_window

0x5777,	// (0x0007194d) popup_call4_audio_wait_window_ParamLimits

0x5777,	// (0x0007194d) popup_call4_audio_wait_window

0x5785,	// (0x0007195b) cell_call4_button_pane_ParamLimits

0x5785,	// (0x0007195b) cell_call4_button_pane

0x57aa,	// (0x00071980) bg_button_pane_cp09_ParamLimits

0x57aa,	// (0x00071980) bg_button_pane_cp09

0x57b6,	// (0x0007198c) cell_call4_button_pane_g1_ParamLimits

0x57b6,	// (0x0007198c) cell_call4_button_pane_g1

0x57dc,	// (0x000719b2) cell_call4_button_pane_t1_ParamLimits

0x57dc,	// (0x000719b2) cell_call4_button_pane_t1

0xd65d,	// (0x00079833) popup_call4_audio_conf_window_ParamLimits

0xd65d,	// (0x00079833) popup_call4_audio_conf_window

0x49a2,	// (0x00070b78) mup3_progress_pane_t1_ParamLimits

0x49c1,	// (0x00070b97) mup3_progress_pane_t2_ParamLimits

0xcfd3,	// (0x000791a9) mup3_progress_pane_t3_ParamLimits

0xf794,	// (0x0007b96a) mup3_progress_pane_t_ParamLimits

0xcff0,	// (0x000791c6) mup_progress_pane_cp03_ParamLimits

0x4f9f,	// (0x00071175) mup3_control_keys_pane_g4_copy1

0x9c3e,	// (0x00075e14) mp4_rocker2_pane_ParamLimits

0x9c3e,	// (0x00075e14) mp4_rocker2_pane

0xd671,	// (0x00079847) mp4_rocker2_pane_g1

0xd679,	// (0x0007984f) mp4_rocker2_pane_g2

0x9cde,	// (0x00075eb4) mp4_rocker2_pane_g3

0x9ce6,	// (0x00075ebc) mp4_rocker2_pane_g4

0x9cee,	// (0x00075ec4) mp4_rocker2_pane_g5

0x0004,

0xf8cd,	// (0x0007baa3) mp4_rocker2_pane_g

0x9417,	// (0x000755ed) main_camera4_pane

0x9417,	// (0x000755ed) main_video4_pane

0x5210,	// (0x000713e6) main_video_tele_dialer_pane_t1_ParamLimits

0x5210,	// (0x000713e6) main_video_tele_dialer_pane_t1

0x5229,	// (0x000713ff) main_video_tele_dialer_pane_t2_ParamLimits

0x5229,	// (0x000713ff) main_video_tele_dialer_pane_t2

0x0001,

0xf883,	// (0x0007ba59) main_video_tele_dialer_pane_t_ParamLimits

0xf883,	// (0x0007ba59) main_video_tele_dialer_pane_t

0x581e,	// (0x000719f4) cam4_autofocus_pane_ParamLimits

0x581e,	// (0x000719f4) cam4_autofocus_pane

0x5834,	// (0x00071a0a) cam4_image_uncrop_pane_ParamLimits

0x5834,	// (0x00071a0a) cam4_image_uncrop_pane

0x584e,	// (0x00071a24) cam4_indicators_pane_ParamLimits

0x584e,	// (0x00071a24) cam4_indicators_pane

0x5879,	// (0x00071a4f) main_camera4_pane_g1_ParamLimits

0x5879,	// (0x00071a4f) main_camera4_pane_g1

0x588b,	// (0x00071a61) main_camera4_pane_g2_ParamLimits

0x588b,	// (0x00071a61) main_camera4_pane_g2

0x589e,	// (0x00071a74) main_camera4_pane_g3_ParamLimits

0x589e,	// (0x00071a74) main_camera4_pane_g3

0x58b1,	// (0x00071a87) main_camera4_pane_g4_ParamLimits

0x58b1,	// (0x00071a87) main_camera4_pane_g4

0x58c4,	// (0x00071a9a) main_camera4_pane_g5_ParamLimits

0x58c4,	// (0x00071a9a) main_camera4_pane_g5

0x0005,

0xf8d8,	// (0x0007baae) main_camera4_pane_g_ParamLimits

0xf8d8,	// (0x0007baae) main_camera4_pane_g

0x58e8,	// (0x00071abe) main_camera4_pane_t1_ParamLimits

0x58e8,	// (0x00071abe) main_camera4_pane_t1

0x9d12,	// (0x00075ee8) bg_tb_trans_pane_cp06

0x9d28,	// (0x00075efe) cam4_indicators_pane_g1

0x9d39,	// (0x00075f0f) cam4_indicators_pane_g2

0x0002,

0xf8f3,	// (0x0007bac9) cam4_indicators_pane_g

0x9d51,	// (0x00075f27) cam4_indicators_pane_t1

0x594c,	// (0x00071b22) main_video4_pane_g1_ParamLimits

0x594c,	// (0x00071b22) main_video4_pane_g1

0x595b,	// (0x00071b31) main_video4_pane_g2_ParamLimits

0x595b,	// (0x00071b31) main_video4_pane_g2

0x596a,	// (0x00071b40) main_video4_pane_g3_ParamLimits

0x596a,	// (0x00071b40) main_video4_pane_g3

0x5979,	// (0x00071b4f) main_video4_pane_g4_ParamLimits

0x5979,	// (0x00071b4f) main_video4_pane_g4

0x0004,

0xf8fa,	// (0x0007bad0) main_video4_pane_g_ParamLimits

0xf8fa,	// (0x0007bad0) main_video4_pane_g

0x5997,	// (0x00071b6d) vid4_indicators_pane_ParamLimits

0x5997,	// (0x00071b6d) vid4_indicators_pane

0x59c5,	// (0x00071b9b) video4_image_uncrop_cif_pane_ParamLimits

0x59c5,	// (0x00071b9b) video4_image_uncrop_cif_pane

0x59df,	// (0x00071bb5) video4_image_uncrop_nhd_pane_ParamLimits

0x59df,	// (0x00071bb5) video4_image_uncrop_nhd_pane

0x5834,	// (0x00071a0a) video4_image_uncrop_vga_pane_ParamLimits

0x5834,	// (0x00071a0a) video4_image_uncrop_vga_pane

0x9409,	// (0x000755df) bg_tb_trans_pane_cp07

0x9d7b,	// (0x00075f51) vid4_indicators_pane_g1

0x9d8f,	// (0x00075f65) vid4_indicators_pane_g2

0x9da3,	// (0x00075f79) vid4_indicators_pane_g3

0x0004,

0xf905,	// (0x0007badb) vid4_indicators_pane_g

0x9dd0,	// (0x00075fa6) vid4_indicators_pane_t1

0x59f3,	// (0x00071bc9) cam4_autofocus_pane_g1

0x59fb,	// (0x00071bd1) cam4_autofocus_pane_g2

0x5a03,	// (0x00071bd9) cam4_autofocus_pane_g3

0x0002,

0xf910,	// (0x0007bae6) cam4_autofocus_pane_g

0x5a0b,	// (0x00071be1) cam4_autofocus_pane_g3_copy1

0x5258,	// (0x0007142e) video_down_pane_cp_t1

0x5266,	// (0x0007143c) video_down_pane_cp_t2

0x0001,

0xf888,	// (0x0007ba5e) video_down_pane_cp_t

0x9409,	// (0x000755df) popup_vitu2_window_ParamLimits

0x9409,	// (0x000755df) popup_vitu2_window

0x5a13,	// (0x00071be9) aid_size_cell2_itu2_ParamLimits

0x5a13,	// (0x00071be9) aid_size_cell2_itu2

0x5a39,	// (0x00071c0f) aid_size_cell_itu2_ParamLimits

0x5a39,	// (0x00071c0f) aid_size_cell_itu2

0x5a95,	// (0x00071c6b) bg_popup_window_pane_cp09_ParamLimits

0x5a95,	// (0x00071c6b) bg_popup_window_pane_cp09

0x5aa3,	// (0x00071c79) field_vitu2_entry_pane_ParamLimits

0x5aa3,	// (0x00071c79) field_vitu2_entry_pane

0x5ac9,	// (0x00071c9f) grid_vitu2_function_pane_ParamLimits

0x5ac9,	// (0x00071c9f) grid_vitu2_function_pane

0x5b1a,	// (0x00071cf0) grid_vitu2_itu_pane_ParamLimits

0x5b1a,	// (0x00071cf0) grid_vitu2_itu_pane

0x5bb0,	// (0x00071d86) cell_vitu2_itu_pane_ParamLimits

0x5bb0,	// (0x00071d86) cell_vitu2_itu_pane

0x5bdc,	// (0x00071db2) cell_vitu2_function_pane_ParamLimits

0x5bdc,	// (0x00071db2) cell_vitu2_function_pane

0xd681,	// (0x00079857) bg_popup_call_pane_cp08_ParamLimits

0xd681,	// (0x00079857) bg_popup_call_pane_cp08

0xd698,	// (0x0007986e) field_vitu2_entry_pane_g1

0xd6a4,	// (0x0007987a) field_vitu2_entry_pane_g2

0x0002,

0xf917,	// (0x0007baed) field_vitu2_entry_pane_g

0x5c1b,	// (0x00071df1) field_vitu2_entry_pane_t1_ParamLimits

0x5c1b,	// (0x00071df1) field_vitu2_entry_pane_t1

0xa4f7,	// (0x000766cd) field_vitu2_entry_pane_t2_ParamLimits

0xa4f7,	// (0x000766cd) field_vitu2_entry_pane_t2

0x0001,

0xf91e,	// (0x0007baf4) field_vitu2_entry_pane_t_ParamLimits

0xf91e,	// (0x0007baf4) field_vitu2_entry_pane_t

0x5c4b,	// (0x00071e21) bg_button_pane_cp010_ParamLimits

0x5c4b,	// (0x00071e21) bg_button_pane_cp010

0x9de7,	// (0x00075fbd) cell_vitu2_itu_pane_g1

0x5c67,	// (0x00071e3d) cell_vitu2_itu_pane_t1_ParamLimits

0x5c67,	// (0x00071e3d) cell_vitu2_itu_pane_t1

0x01a3,	// (0x0006c379) cell_vitu2_itu_pane_t2_ParamLimits

0x01a3,	// (0x0006c379) cell_vitu2_itu_pane_t2

0x0002,

0xf928,	// (0x0007bafe) cell_vitu2_itu_pane_t_ParamLimits

0xf928,	// (0x0007bafe) cell_vitu2_itu_pane_t

0x9409,	// (0x000755df) bg_button_pane_cp011

0x5cc5,	// (0x00071e9b) cell_vitu2_function_pane_g1

0x9417,	// (0x000755ed) main_myfav_hc_pane

0x5609,	// (0x000717df) popup_image3_note_pane_ParamLimits

0x5609,	// (0x000717df) popup_image3_note_pane

0x5625,	// (0x000717fb) popup_image3_tool_bar_pane_ParamLimits

0x5625,	// (0x000717fb) popup_image3_tool_bar_pane

0x0231,	// (0x0006c407) cell_vitu2_itu_pane_t3_ParamLimits

0x0231,	// (0x0006c407) cell_vitu2_itu_pane_t3

0x93e1,	// (0x000755b7) bg_popup_trans_pane

0xd6c6,	// (0x0007989c) grid_image3_tool_bar_pane

0xd6d0,	// (0x000798a6) bg_popup_trans_pane_g1

0xacde,	// (0x00076eb4) bg_popup_trans_pane_g2

0xd6d8,	// (0x000798ae) bg_popup_trans_pane_g3

0xd6e0,	// (0x000798b6) bg_popup_trans_pane_g4

0xd6e8,	// (0x000798be) bg_popup_trans_pane_g5

0xd6f0,	// (0x000798c6) bg_popup_trans_pane_g6

0xd6f8,	// (0x000798ce) bg_popup_trans_pane_g7

0xd700,	// (0x000798d6) bg_popup_trans_pane_g8

0xacbe,	// (0x00076e94) bg_popup_trans_pane_g9

0x0008,

0xf92f,	// (0x0007bb05) bg_popup_trans_pane_g

0xd708,	// (0x000798de) cell_image3_tool_bar_pane_ParamLimits

0xd708,	// (0x000798de) cell_image3_tool_bar_pane

0xcd13,	// (0x00078ee9) cell_image3_tool_bar_pane_g1

0x93e1,	// (0x000755b7) bg_popup_trans_pane_cp1

0xd71c,	// (0x000798f2) popup_image3_note_pane_t1

0xd72a,	// (0x00079900) popup_image3_note_pane_t2

0xd738,	// (0x0007990e) popup_image3_note_pane_t3

0x0002,

0xf942,	// (0x0007bb18) popup_image3_note_pane_t

0xd746,	// (0x0007991c) popup_image3_note_pane_t3_copy1

0x5cd9,	// (0x00071eaf) bg_myfav_hc_instruction_pane_ParamLimits

0x5cd9,	// (0x00071eaf) bg_myfav_hc_instruction_pane

0x5ced,	// (0x00071ec3) cell_myfav_contact_pane_ParamLimits

0x5ced,	// (0x00071ec3) cell_myfav_contact_pane

0x5d0b,	// (0x00071ee1) cell_myfav_contact_pane_cp1_ParamLimits

0x5d0b,	// (0x00071ee1) cell_myfav_contact_pane_cp1

0x5d23,	// (0x00071ef9) cell_myfav_contact_pane_cp2_ParamLimits

0x5d23,	// (0x00071ef9) cell_myfav_contact_pane_cp2

0x5d3b,	// (0x00071f11) cell_myfav_contact_pane_cp3_ParamLimits

0x5d3b,	// (0x00071f11) cell_myfav_contact_pane_cp3

0x5d52,	// (0x00071f28) cell_myfav_contact_pane_cp4_ParamLimits

0x5d52,	// (0x00071f28) cell_myfav_contact_pane_cp4

0x5d6a,	// (0x00071f40) cell_myfav_contact_pane_cp5_ParamLimits

0x5d6a,	// (0x00071f40) cell_myfav_contact_pane_cp5

0x5d7e,	// (0x00071f54) cell_myfav_contact_pane_cp6_ParamLimits

0x5d7e,	// (0x00071f54) cell_myfav_contact_pane_cp6

0x5d94,	// (0x00071f6a) cell_myfav_contact_pane_cp7_ParamLimits

0x5d94,	// (0x00071f6a) cell_myfav_contact_pane_cp7

0xd754,	// (0x0007992a) listscroll_gen_pane_cp05

0x5dae,	// (0x00071f84) main_myfav_hc_pane_g1_ParamLimits

0x5dae,	// (0x00071f84) main_myfav_hc_pane_g1

0x5dc8,	// (0x00071f9e) main_myfav_hc_pane_g2_ParamLimits

0x5dc8,	// (0x00071f9e) main_myfav_hc_pane_g2

0x0002,

0xf949,	// (0x0007bb1f) main_myfav_hc_pane_g_ParamLimits

0xf949,	// (0x0007bb1f) main_myfav_hc_pane_g

0x5dfa,	// (0x00071fd0) main_myfav_hc_pane_t1_ParamLimits

0x5dfa,	// (0x00071fd0) main_myfav_hc_pane_t1

0xd75d,	// (0x00079933) main_myfav_hc_pane_t2_ParamLimits

0xd75d,	// (0x00079933) main_myfav_hc_pane_t2

0xd76f,	// (0x00079945) main_myfav_hc_pane_t3_ParamLimits

0xd76f,	// (0x00079945) main_myfav_hc_pane_t3

0x5e11,	// (0x00071fe7) main_myfav_hc_pane_t4_ParamLimits

0x5e11,	// (0x00071fe7) main_myfav_hc_pane_t4

0x0004,

0xf950,	// (0x0007bb26) main_myfav_hc_pane_t_ParamLimits

0xf950,	// (0x0007bb26) main_myfav_hc_pane_t

0xcd13,	// (0x00078ee9) bg_myfav_hc_instruction_pane_g1

0xd781,	// (0x00079957) cell_myfav_contact_pane_g1_ParamLimits

0xd781,	// (0x00079957) cell_myfav_contact_pane_g1

0xd781,	// (0x00079957) cell_myfav_contact_pane_g2_ParamLimits

0xd781,	// (0x00079957) cell_myfav_contact_pane_g2

0xd78d,	// (0x00079963) cell_myfav_contact_pane_g3_ParamLimits

0xd78d,	// (0x00079963) cell_myfav_contact_pane_g3

0xcfbd,	// (0x00079193) cell_myfav_contact_pane_g4_ParamLimits

0xcfbd,	// (0x00079193) cell_myfav_contact_pane_g4

0xd79a,	// (0x00079970) cell_myfav_contact_pane_g5_ParamLimits

0xd79a,	// (0x00079970) cell_myfav_contact_pane_g5

0x0004,

0xf95b,	// (0x0007bb31) cell_myfav_contact_pane_g_ParamLimits

0xf95b,	// (0x0007bb31) cell_myfav_contact_pane_g

0x5de2,	// (0x00071fb8) main_myfav_hc_pane_g3_ParamLimits

0x5de2,	// (0x00071fb8) main_myfav_hc_pane_g3

0x0456,	// (0x0006c62c) popup_adpt_find_window

0x5e39,	// (0x0007200f) afind_page_pane_ParamLimits

0x5e39,	// (0x0007200f) afind_page_pane

0x5e4e,	// (0x00072024) aid_size_cell_afind_ParamLimits

0x5e4e,	// (0x00072024) aid_size_cell_afind

0x5e6c,	// (0x00072042) bg_popup_sub_pane_cp09_ParamLimits

0x5e6c,	// (0x00072042) bg_popup_sub_pane_cp09

0x5e79,	// (0x0007204f) find_pane_cp01_ParamLimits

0x5e79,	// (0x0007204f) find_pane_cp01

0xd7a6,	// (0x0007997c) grid_afind_control_pane_ParamLimits

0xd7a6,	// (0x0007997c) grid_afind_control_pane

0x5e86,	// (0x0007205c) grid_afind_pane_ParamLimits

0x5e86,	// (0x0007205c) grid_afind_pane

0x5ea5,	// (0x0007207b) cell_afind_pane_ParamLimits

0x5ea5,	// (0x0007207b) cell_afind_pane

0xcd13,	// (0x00078ee9) afind_page_pane_g1

0x5f0c,	// (0x000720e2) afind_page_pane_g2

0x5f15,	// (0x000720eb) afind_page_pane_g3

0x0002,

0xf966,	// (0x0007bb3c) afind_page_pane_g

0x5f1e,	// (0x000720f4) afind_page_pane_t1

0xd7ba,	// (0x00079990) cell_afind_grid_control_pane_ParamLimits

0xd7ba,	// (0x00079990) cell_afind_grid_control_pane

0xd649,	// (0x0007981f) bg_button_pane_cp69_ParamLimits

0xd649,	// (0x0007981f) bg_button_pane_cp69

0x5f3e,	// (0x00072114) cell_afind_pane_g1_ParamLimits

0x5f3e,	// (0x00072114) cell_afind_pane_g1

0x5f4b,	// (0x00072121) cell_afind_pane_t1_ParamLimits

0x5f4b,	// (0x00072121) cell_afind_pane_t1

0xaad7,	// (0x00076cad) bg_button_pane_cp72

0xd7c9,	// (0x0007999f) cell_afind_grid_control_pane_g1

0x2f1c,	// (0x0006f0f2) aid_image_placing_area_ParamLimits

0x2f1c,	// (0x0006f0f2) aid_image_placing_area

0xd2e3,	// (0x000794b9) field_vitu_entry_pane_g1_ParamLimits

0xd2e3,	// (0x000794b9) field_vitu_entry_pane_g1

0xd2ef,	// (0x000794c5) field_vitu_entry_pane_g2_ParamLimits

0xd2ef,	// (0x000794c5) field_vitu_entry_pane_g2

0x0001,

0xf813,	// (0x0007b9e9) field_vitu_entry_pane_g_ParamLimits

0xf813,	// (0x0007b9e9) field_vitu_entry_pane_g

0x5068,	// (0x0007123e) cell_vitu_itu_pane_g1_ParamLimits

0x50aa,	// (0x00071280) cell_vitu_itu_pane_t3_ParamLimits

0x50aa,	// (0x00071280) cell_vitu_itu_pane_t3

0xd5e8,	// (0x000797be) mp4_progress_pane_t1_ParamLimits

0xd601,	// (0x000797d7) mp4_progress_pane_t2_ParamLimits

0xf8ac,	// (0x0007ba82) mp4_progress_pane_t_ParamLimits

0xd61a,	// (0x000797f0) mup_progress_pane_cp04_ParamLimits

0x5e25,	// (0x00071ffb) main_myfav_hc_pane_t5_ParamLimits

0x5e25,	// (0x00071ffb) main_myfav_hc_pane_t5

0x02f3,	// (0x0006c4c9) aid_zoom_text_primary

0x0456,	// (0x0006c62c) popup_adpt_find_window_ParamLimits

0x9409,	// (0x000755df) main_cam_set_pane

0x5865,	// (0x00071a3b) cam4_zoom_pane_ParamLimits

0x5865,	// (0x00071a3b) cam4_zoom_pane

0x5f5d,	// (0x00072133) main_cam_set_pane_g1_ParamLimits

0x5f5d,	// (0x00072133) main_cam_set_pane_g1

0x5f6b,	// (0x00072141) main_cam_set_pane_g2_ParamLimits

0x5f6b,	// (0x00072141) main_cam_set_pane_g2

0x0001,

0xf96d,	// (0x0007bb43) main_cam_set_pane_g_ParamLimits

0xf96d,	// (0x0007bb43) main_cam_set_pane_g

0x5f8c,	// (0x00072162) main_cam_set_pane_t1_ParamLimits

0x5f8c,	// (0x00072162) main_cam_set_pane_t1

0x5fa7,	// (0x0007217d) main_cset_listscroll_pane_ParamLimits

0x5fa7,	// (0x0007217d) main_cset_listscroll_pane

0x5fc7,	// (0x0007219d) main_cset_slider_pane_ParamLimits

0x5fc7,	// (0x0007219d) main_cset_slider_pane

0xd7da,	// (0x000799b0) main_cset_list_pane_ParamLimits

0xd7da,	// (0x000799b0) main_cset_list_pane

0xd7ea,	// (0x000799c0) scroll_pane_cp028

0x5fed,	// (0x000721c3) aid_area_touch_slider

0x6009,	// (0x000721df) cset_slider_pane

0x6033,	// (0x00072209) main_cset_slider_pane_g1

0x6048,	// (0x0007221e) main_cset_slider_pane_g2

0x0011,

0xf972,	// (0x0007bb48) main_cset_slider_pane_g

0xd83b,	// (0x00079a11) main_cset_slider_pane_t1

0x60ec,	// (0x000722c2) main_cset_slider_pane_t2

0x6106,	// (0x000722dc) main_cset_slider_pane_t3

0x6120,	// (0x000722f6) main_cset_slider_pane_t4

0x613a,	// (0x00072310) main_cset_slider_pane_t5

0x6154,	// (0x0007232a) main_cset_slider_pane_t6

0x6169,	// (0x0007233f) main_cset_slider_pane_t7

0x000e,

0xf997,	// (0x0007bb6d) main_cset_slider_pane_t

0x626d,	// (0x00072443) cset_list_set_pane_ParamLimits

0x626d,	// (0x00072443) cset_list_set_pane

0x627f,	// (0x00072455) aid_position_infowindow_above

0x6287,	// (0x0007245d) aid_position_infowindow_below

0x628f,	// (0x00072465) cset_list_set_pane_g1_ParamLimits

0x628f,	// (0x00072465) cset_list_set_pane_g1

0x629b,	// (0x00072471) cset_list_set_pane_g3_ParamLimits

0x629b,	// (0x00072471) cset_list_set_pane_g3

0x0001,

0xf9b6,	// (0x0007bb8c) cset_list_set_pane_g_ParamLimits

0xf9b6,	// (0x0007bb8c) cset_list_set_pane_g

0x62aa,	// (0x00072480) cset_list_set_pane_t1_ParamLimits

0x62aa,	// (0x00072480) cset_list_set_pane_t1

0xa475,	// (0x0007664b) list_highlight_pane_cp021_ParamLimits

0xa475,	// (0x0007664b) list_highlight_pane_cp021

0xb5fc,	// (0x000777d2) cset_slider_pane_g1

0xb60e,	// (0x000777e4) cset_slider_pane_g2

0xb605,	// (0x000777db) cset_slider_pane_g3

0x0002,

0xf9bb,	// (0x0007bb91) cset_slider_pane_g

0x9df9,	// (0x00075fcf) aid_area_touch_cam4_zoom

0x9e01,	// (0x00075fd7) cam4_zoom_cont_pane

0x9e09,	// (0x00075fdf) cam4_zoom_pane_g1

0x9e11,	// (0x00075fe7) cam4_zoom_pane_g2

0x62bf,	// (0x00072495) cam4_zoom_pane_g3

0x0002,

0xf9c2,	// (0x0007bb98) cam4_zoom_pane_g

0x9e19,	// (0x00075fef) cam4_zoom_cont_pane_g1

0x9e22,	// (0x00075ff8) cam4_zoom_cont_pane_g2

0x9e2b,	// (0x00076001) cam4_zoom_cont_pane_g3

0x0002,

0xf9c9,	// (0x0007bb9f) cam4_zoom_cont_pane_g

0x5692,	// (0x00071868) call4_image_pane_ParamLimits

0x5692,	// (0x00071868) call4_image_pane

0x56f9,	// (0x000718cf) call4_windows_conf_pane_ParamLimits

0x573e,	// (0x00071914) popup_call4_audio_in_window_ParamLimits

0x573e,	// (0x00071914) popup_call4_audio_in_window

0x93e1,	// (0x000755b7) bg_popup_call2_act_pane_cp02

0xd655,	// (0x0007982b) call4_list_conf_pane

0xcd13,	// (0x00078ee9) call4_image_pane_g1

0xcd13,	// (0x00078ee9) call4_image_pane_g2

0x0001,

0xf6d4,	// (0x0007b8aa) call4_image_pane_g

0xd8db,	// (0x00079ab1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8db,	// (0x00079ab1) list_single_graphic_popup_conf4_pane

0x93e1,	// (0x000755b7) list_highlight_pane_cp022

0xd8ee,	// (0x00079ac4) list_single_graphic_popup_conf4_pane_g1

0xb1f8,	// (0x000773ce) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d0,	// (0x0007bba6) list_single_graphic_popup_conf4_pane_g

0xd8f6,	// (0x00079acc) list_single_graphic_popup_conf4_pane_t1

0x154e,	// (0x0006d724) popup_vtel_slider_window_ParamLimits

0x154e,	// (0x0006d724) popup_vtel_slider_window

0xd637,	// (0x0007980d) dialer2_ne_pane_t2_ParamLimits

0xd637,	// (0x0007980d) dialer2_ne_pane_t2

0x0001,

0xf8b1,	// (0x0007ba87) dialer2_ne_pane_t_ParamLimits

0xf8b1,	// (0x0007ba87) dialer2_ne_pane_t

0xcaf8,	// (0x00078cce) bg_popup_sub_pane_cp010_ParamLimits

0xcaf8,	// (0x00078cce) bg_popup_sub_pane_cp010

0x62c7,	// (0x0007249d) popup_vtel_slider_window_g1_ParamLimits

0x62c7,	// (0x0007249d) popup_vtel_slider_window_g1

0x62da,	// (0x000724b0) popup_vtel_slider_window_g2_ParamLimits

0x62da,	// (0x000724b0) popup_vtel_slider_window_g2

0x0003,

0xf9d5,	// (0x0007bbab) popup_vtel_slider_window_g_ParamLimits

0xf9d5,	// (0x0007bbab) popup_vtel_slider_window_g

0x6330,	// (0x00072506) vtel_slider_pane_ParamLimits

0x6330,	// (0x00072506) vtel_slider_pane

0x6352,	// (0x00072528) vtel_slider_pane_g1_ParamLimits

0x6352,	// (0x00072528) vtel_slider_pane_g1

0x6366,	// (0x0007253c) vtel_slider_pane_g2_ParamLimits

0x6366,	// (0x0007253c) vtel_slider_pane_g2

0x637e,	// (0x00072554) vtel_slider_pane_g3_ParamLimits

0x637e,	// (0x00072554) vtel_slider_pane_g3

0x6352,	// (0x00072528) vtel_slider_pane_g4_ParamLimits

0x6352,	// (0x00072528) vtel_slider_pane_g4

0x6394,	// (0x0007256a) vtel_slider_pane_g5_ParamLimits

0x6394,	// (0x0007256a) vtel_slider_pane_g5

0x0004,

0xf9de,	// (0x0007bbb4) vtel_slider_pane_g_ParamLimits

0xf9de,	// (0x0007bbb4) vtel_slider_pane_g

0x9409,	// (0x000755df) main_gallery2_pane

0x5a65,	// (0x00071c3b) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a65,	// (0x00071c3b) aid_size_row_itut2_dropdow_list

0x5af1,	// (0x00071cc7) grid_vitu2_function_top_pane_ParamLimits

0x5af1,	// (0x00071cc7) grid_vitu2_function_top_pane

0x5b5b,	// (0x00071d31) popup_vitu2_dropdown_list_window_ParamLimits

0x5b5b,	// (0x00071d31) popup_vitu2_dropdown_list_window

0x5b84,	// (0x00071d5a) popup_vitu2_match_list_window

0x63b8,	// (0x0007258e) cell_vitu2_function_top_pane_ParamLimits

0x63b8,	// (0x0007258e) cell_vitu2_function_top_pane

0x63d0,	// (0x000725a6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x63d0,	// (0x000725a6) cell_vitu2_function_top_pane_cp01

0x63ec,	// (0x000725c2) cell_vitu2_function_top_wide_pane_ParamLimits

0x63ec,	// (0x000725c2) cell_vitu2_function_top_wide_pane

0x9409,	// (0x000755df) bg_button_pane_cp012

0x6408,	// (0x000725de) cell_vitu2_function_top_pane_g1

0x9e34,	// (0x0007600a) bg_button_pane_cp013_ParamLimits

0x9e34,	// (0x0007600a) bg_button_pane_cp013

0x641c,	// (0x000725f2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x641c,	// (0x000725f2) cell_vitu2_function_top_wide_pane_g1

0x9409,	// (0x000755df) bg_popup_sub_pane_cp20

0x6434,	// (0x0007260a) list_vitu2_match_list_pane

0xd6d0,	// (0x000798a6) bg_popup_sub_pane_cp20_g1

0xd6d8,	// (0x000798ae) bg_popup_sub_pane_cp20_g2

0xacde,	// (0x00076eb4) bg_popup_sub_pane_cp20_g3

0xd6e0,	// (0x000798b6) bg_popup_sub_pane_cp20_g4

0xacbe,	// (0x00076e94) bg_popup_sub_pane_cp20_g5

0xd90c,	// (0x00079ae2) bg_popup_sub_pane_cp20_g6

0xd6f0,	// (0x000798c6) bg_popup_sub_pane_cp20_g7

0xd6f8,	// (0x000798ce) bg_popup_sub_pane_cp20_g8

0xd700,	// (0x000798d6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9e9,	// (0x0007bbbf) bg_popup_sub_pane_cp20_g

0x9e50,	// (0x00076026) list_vitu2_match_list_item_pane_ParamLimits

0x9e50,	// (0x00076026) list_vitu2_match_list_item_pane

0x9e62,	// (0x00076038) list_vitu2_match_list_item_pane_t1

0x9417,	// (0x000755ed) bg_popup_sub_pane_cp21

0x9e70,	// (0x00076046) grid_vitu2_dropdown_list_pane

0x64a2,	// (0x00072678) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x64a2,	// (0x00072678) cell_vitu2_dropdown_list_char_pane

0x64c3,	// (0x00072699) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x64c3,	// (0x00072699) cell_vitu2_dropdown_list_ctrl_pane

0xd914,	// (0x00079aea) cell_vitu2_dropdown_list_char_pane_g1

0xd91d,	// (0x00079af3) cell_vitu2_dropdown_list_char_pane_g2

0xd926,	// (0x00079afc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa06,	// (0x0007bbdc) cell_vitu2_dropdown_list_char_pane_g

0x64ef,	// (0x000726c5) cell_vitu2_dropdown_list_char_pane_t1

0x64fd,	// (0x000726d3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x64fd,	// (0x000726d3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x650a,	// (0x000726e0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x650a,	// (0x000726e0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6517,	// (0x000726ed) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6517,	// (0x000726ed) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6524,	// (0x000726fa) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6524,	// (0x000726fa) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9d12,	// (0x00075ee8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9d12,	// (0x00075ee8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0d,	// (0x0007bbe3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0d,	// (0x0007bbe3) cell_vitu2_dropdown_list_ctrl_pane_g

0x6540,	// (0x00072716) aid_size_cell_gallery2_ParamLimits

0x6540,	// (0x00072716) aid_size_cell_gallery2

0x655e,	// (0x00072734) grid_gallery2_pane_ParamLimits

0x655e,	// (0x00072734) grid_gallery2_pane

0x6578,	// (0x0007274e) scroll_pane_cp029_ParamLimits

0x6578,	// (0x0007274e) scroll_pane_cp029

0x6589,	// (0x0007275f) cell_gallery2_pane_ParamLimits

0x6589,	// (0x0007275f) cell_gallery2_pane

0xd92f,	// (0x00079b05) cell_gallery2_pane_g2

0x65e8,	// (0x000727be) cell_gallery2_pane_g3

0xd937,	// (0x00079b0d) cell_gallery2_pane_g4

0xd93f,	// (0x00079b15) cell_gallery2_pane_g5

0xaa85,	// (0x00076c5b) grid_highlight_pane_cp10

0x5b84,	// (0x00071d5a) popup_vitu2_match_list_window_ParamLimits

0x5b99,	// (0x00071d6f) popup_vitu2_query_window_ParamLimits

0x5b99,	// (0x00071d6f) popup_vitu2_query_window

0x9417,	// (0x000755ed) bg_vitu2_candi_button_pane

0xd914,	// (0x00079aea) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91d,	// (0x00079af3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd926,	// (0x00079afc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65f0,	// (0x000727c6) bg_button_pane_cp015

0x6604,	// (0x000727da) bg_button_pane_cp016

0x6617,	// (0x000727ed) bg_button_pane_cp017

0xc90b,	// (0x00078ae1) bg_popup_sub_pane_cp22

0xd947,	// (0x00079b1d) popup_vitu2_query_window_g1

0x665c,	// (0x00072832) popup_vitu2_query_window_g2

0x0002,

0xfa18,	// (0x0007bbee) popup_vitu2_query_window_g

0x667b,	// (0x00072851) popup_vitu2_query_window_t1_ParamLimits

0x667b,	// (0x00072851) popup_vitu2_query_window_t1

0x66b0,	// (0x00072886) popup_vitu2_query_window_t2_ParamLimits

0x66b0,	// (0x00072886) popup_vitu2_query_window_t2

0x66c2,	// (0x00072898) popup_vitu2_query_window_t3_ParamLimits

0x66c2,	// (0x00072898) popup_vitu2_query_window_t3

0x66ea,	// (0x000728c0) popup_vitu2_query_window_t4_ParamLimits

0x66ea,	// (0x000728c0) popup_vitu2_query_window_t4

0x670b,	// (0x000728e1) popup_vitu2_query_window_t5_ParamLimits

0x670b,	// (0x000728e1) popup_vitu2_query_window_t5

0x0006,

0xfa1f,	// (0x0007bbf5) popup_vitu2_query_window_t_ParamLimits

0xfa1f,	// (0x0007bbf5) popup_vitu2_query_window_t

0xd7d2,	// (0x000799a8) main_cset_text_pane

0x5fed,	// (0x000721c3) aid_area_touch_slider_ParamLimits

0x6009,	// (0x000721df) cset_slider_pane_ParamLimits

0x6033,	// (0x00072209) main_cset_slider_pane_g1_ParamLimits

0x6048,	// (0x0007221e) main_cset_slider_pane_g2_ParamLimits

0xd7f3,	// (0x000799c9) main_cset_slider_pane_g3_ParamLimits

0xd7f3,	// (0x000799c9) main_cset_slider_pane_g3

0x605d,	// (0x00072233) main_cset_slider_pane_g4_ParamLimits

0x605d,	// (0x00072233) main_cset_slider_pane_g4

0x606c,	// (0x00072242) main_cset_slider_pane_g5_ParamLimits

0x606c,	// (0x00072242) main_cset_slider_pane_g5

0x6078,	// (0x0007224e) main_cset_slider_pane_g6_ParamLimits

0x6078,	// (0x0007224e) main_cset_slider_pane_g6

0xf972,	// (0x0007bb48) main_cset_slider_pane_g_ParamLimits

0xd83b,	// (0x00079a11) main_cset_slider_pane_t1_ParamLimits

0x60ec,	// (0x000722c2) main_cset_slider_pane_t2_ParamLimits

0x6106,	// (0x000722dc) main_cset_slider_pane_t3_ParamLimits

0x6120,	// (0x000722f6) main_cset_slider_pane_t4_ParamLimits

0x613a,	// (0x00072310) main_cset_slider_pane_t5_ParamLimits

0x6154,	// (0x0007232a) main_cset_slider_pane_t6_ParamLimits

0x6169,	// (0x0007233f) main_cset_slider_pane_t7_ParamLimits

0x6193,	// (0x00072369) main_cset_slider_pane_t8_ParamLimits

0x6193,	// (0x00072369) main_cset_slider_pane_t8

0x61bb,	// (0x00072391) main_cset_slider_pane_t9_ParamLimits

0x61bb,	// (0x00072391) main_cset_slider_pane_t9

0x61e3,	// (0x000723b9) main_cset_slider_pane_t10_ParamLimits

0x61e3,	// (0x000723b9) main_cset_slider_pane_t10

0x620b,	// (0x000723e1) main_cset_slider_pane_t11_ParamLimits

0x620b,	// (0x000723e1) main_cset_slider_pane_t11

0x6233,	// (0x00072409) main_cset_slider_pane_t12_ParamLimits

0x6233,	// (0x00072409) main_cset_slider_pane_t12

0x6250,	// (0x00072426) main_cset_slider_pane_t13_ParamLimits

0x6250,	// (0x00072426) main_cset_slider_pane_t13

0xf997,	// (0x0007bb6d) main_cset_slider_pane_t_ParamLimits

0x93e1,	// (0x000755b7) bg_popup_sub_pane_cp011

0xd953,	// (0x00079b29) main_cset_text_pane_g1

0xd95b,	// (0x00079b31) main_cset_text_pane_t1

0xd969,	// (0x00079b3f) main_cset_text_pane_t2

0xd977,	// (0x00079b4d) main_cset_text_pane_t3

0xd985,	// (0x00079b5b) main_cset_text_pane_t4

0xd993,	// (0x00079b69) main_cset_text_pane_t5

0xd9a1,	// (0x00079b77) main_cset_text_pane_t6

0xd9af,	// (0x00079b85) main_cset_text_pane_t7

0x0006,

0xfa2e,	// (0x0007bc04) main_cset_text_pane_t

0x9417,	// (0x000755ed) main_cam4_burst_pane

0x9417,	// (0x000755ed) main_cam5_pane

0x5f2c,	// (0x00072102) bg_button_pane_cp019

0x5f35,	// (0x0007210b) bg_button_pane_cp020

0xd7ff,	// (0x000799d5) main_cset_slider_pane_g7_ParamLimits

0xd7ff,	// (0x000799d5) main_cset_slider_pane_g7

0xd80b,	// (0x000799e1) main_cset_slider_pane_g8_ParamLimits

0xd80b,	// (0x000799e1) main_cset_slider_pane_g8

0x608c,	// (0x00072262) main_cset_slider_pane_g9_ParamLimits

0x608c,	// (0x00072262) main_cset_slider_pane_g9

0x6098,	// (0x0007226e) main_cset_slider_pane_g10_ParamLimits

0x6098,	// (0x0007226e) main_cset_slider_pane_g10

0x60a4,	// (0x0007227a) main_cset_slider_pane_g11_ParamLimits

0x60a4,	// (0x0007227a) main_cset_slider_pane_g11

0x60b0,	// (0x00072286) main_cset_slider_pane_g12_ParamLimits

0x60b0,	// (0x00072286) main_cset_slider_pane_g12

0x60bc,	// (0x00072292) main_cset_slider_pane_g13_ParamLimits

0x60bc,	// (0x00072292) main_cset_slider_pane_g13

0x60c8,	// (0x0007229e) main_cset_slider_pane_g14_ParamLimits

0x60c8,	// (0x0007229e) main_cset_slider_pane_g14

0x60d4,	// (0x000722aa) main_cset_slider_pane_g15_ParamLimits

0x60d4,	// (0x000722aa) main_cset_slider_pane_g15

0xd869,	// (0x00079a3f) main_cset_slider_pane_t14_ParamLimits

0xd869,	// (0x00079a3f) main_cset_slider_pane_t14

0xd8a2,	// (0x00079a78) main_cset_slider_pane_t15_ParamLimits

0xd8a2,	// (0x00079a78) main_cset_slider_pane_t15

0x6782,	// (0x00072958) aid_cam4_burst_size_cell_ParamLimits

0x6782,	// (0x00072958) aid_cam4_burst_size_cell

0x67a2,	// (0x00072978) grid_cam4_burst_pane_ParamLimits

0x67a2,	// (0x00072978) grid_cam4_burst_pane

0x67da,	// (0x000729b0) linegrid_cam4_burst_pane_ParamLimits

0x67da,	// (0x000729b0) linegrid_cam4_burst_pane

0xd9bd,	// (0x00079b93) scroll_pane_cp30_ParamLimits

0xd9bd,	// (0x00079b93) scroll_pane_cp30

0x67fe,	// (0x000729d4) cell_cam4_burst_pane_ParamLimits

0x67fe,	// (0x000729d4) cell_cam4_burst_pane

0xd9c9,	// (0x00079b9f) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c9,	// (0x00079b9f) linegrid_cam4_burst_pane_g1

0x684b,	// (0x00072a21) linegrid_cam4_burst_pane_g2_ParamLimits

0x684b,	// (0x00072a21) linegrid_cam4_burst_pane_g2

0xd9d6,	// (0x00079bac) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d6,	// (0x00079bac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa3d,	// (0x0007bc13) linegrid_cam4_burst_pane_g_ParamLimits

0xfa3d,	// (0x0007bc13) linegrid_cam4_burst_pane_g

0x685c,	// (0x00072a32) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x685c,	// (0x00072a32) linegrid_cam4_burst_pane_g3_copy1

0xd9e3,	// (0x00079bb9) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e3,	// (0x00079bb9) linegrid_cam4_burst_pane_g4

0x6876,	// (0x00072a4c) linegrid_cam4_burst_pane_g5_ParamLimits

0x6876,	// (0x00072a4c) linegrid_cam4_burst_pane_g5

0x6887,	// (0x00072a5d) linegrid_cam4_burst_pane_g6_ParamLimits

0x6887,	// (0x00072a5d) linegrid_cam4_burst_pane_g6

0xd9f0,	// (0x00079bc6) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f0,	// (0x00079bc6) linegrid_cam4_burst_pane_g7

0x689e,	// (0x00072a74) cell_cam4_burst_pane_g1

0xda09,	// (0x00079bdf) main_cam5_pane_t1_ParamLimits

0xda09,	// (0x00079bdf) main_cam5_pane_t1

0xda1b,	// (0x00079bf1) main_cam5_pane_t2_ParamLimits

0xda1b,	// (0x00079bf1) main_cam5_pane_t2

0xda2d,	// (0x00079c03) main_cam5_pane_t3_ParamLimits

0xda2d,	// (0x00079c03) main_cam5_pane_t3

0xda3f,	// (0x00079c15) main_cam5_pane_t4_ParamLimits

0xda3f,	// (0x00079c15) main_cam5_pane_t4

0xda57,	// (0x00079c2d) main_cam5_pane_t5_ParamLimits

0xda57,	// (0x00079c2d) main_cam5_pane_t5

0xda6b,	// (0x00079c41) main_cam5_pane_t6_ParamLimits

0xda6b,	// (0x00079c41) main_cam5_pane_t6

0xda7f,	// (0x00079c55) main_cam5_pane_t7_ParamLimits

0xda7f,	// (0x00079c55) main_cam5_pane_t7

0xda91,	// (0x00079c67) main_cam5_pane_t8_ParamLimits

0xda91,	// (0x00079c67) main_cam5_pane_t8

0xdaad,	// (0x00079c83) main_cam5_pane_t9_ParamLimits

0xdaad,	// (0x00079c83) main_cam5_pane_t9

0xdabf,	// (0x00079c95) main_cam5_pane_t10_ParamLimits

0xdabf,	// (0x00079c95) main_cam5_pane_t10

0xdad1,	// (0x00079ca7) main_cam5_pane_t11_ParamLimits

0xdad1,	// (0x00079ca7) main_cam5_pane_t11

0xdae3,	// (0x00079cb9) main_cam5_pane_t12_ParamLimits

0xdae3,	// (0x00079cb9) main_cam5_pane_t12

0xdaf8,	// (0x00079cce) main_cam5_pane_t13_ParamLimits

0xdaf8,	// (0x00079cce) main_cam5_pane_t13

0x000c,

0xfa49,	// (0x0007bc1f) main_cam5_pane_t_ParamLimits

0xfa49,	// (0x0007bc1f) main_cam5_pane_t

0x04d8,	// (0x0006c6ae) popup_scut_keymap_window_ParamLimits

0x04d8,	// (0x0006c6ae) popup_scut_keymap_window

0x68b1,	// (0x00072a87) aid_size_cell_brow_shortcut

0xaa85,	// (0x00076c5b) bg_popup_window_pane_cp010

0x68bd,	// (0x00072a93) grid_scut_pane

0x68c9,	// (0x00072a9f) cell_scut_pane_ParamLimits

0x68c9,	// (0x00072a9f) cell_scut_pane

0x68e0,	// (0x00072ab6) cell_scut_pane_g1

0xdb15,	// (0x00079ceb) cell_scut_pane_t1

0xdb24,	// (0x00079cfa) cell_scut_pane_t2

0x68e9,	// (0x00072abf) cell_scut_pane_t3

0x0002,

0xfa64,	// (0x0007bc3a) cell_scut_pane_t

0x4565,	// (0x0007073b) main_mup3_pane_g8_ParamLimits

0x4565,	// (0x0007073b) main_mup3_pane_g8

0x5a7d,	// (0x00071c53) area_vitu2_query_pane_ParamLimits

0x5a7d,	// (0x00071c53) area_vitu2_query_pane

0x662a,	// (0x00072800) input_focus_pane_cp08

0xdb33,	// (0x00079d09) area_vitu2_query_pane_g1

0x68f7,	// (0x00072acd) area_vitu2_query_pane_g2

0x0001,

0xfa6b,	// (0x0007bc41) area_vitu2_query_pane_g

0x6908,	// (0x00072ade) area_vitu2_query_pane_t1_ParamLimits

0x6908,	// (0x00072ade) area_vitu2_query_pane_t1

0x691c,	// (0x00072af2) area_vitu2_query_pane_t2_ParamLimits

0x691c,	// (0x00072af2) area_vitu2_query_pane_t2

0x6930,	// (0x00072b06) area_vitu2_query_pane_t3_ParamLimits

0x6930,	// (0x00072b06) area_vitu2_query_pane_t3

0xa514,	// (0x000766ea) area_vitu2_query_pane_t4_ParamLimits

0xa514,	// (0x000766ea) area_vitu2_query_pane_t4

0xa53c,	// (0x00076712) area_vitu2_query_pane_t5_ParamLimits

0xa53c,	// (0x00076712) area_vitu2_query_pane_t5

0xa564,	// (0x0007673a) area_vitu2_query_pane_t6_ParamLimits

0xa564,	// (0x0007673a) area_vitu2_query_pane_t6

0x0006,

0xfa70,	// (0x0007bc46) area_vitu2_query_pane_t_ParamLimits

0xfa70,	// (0x0007bc46) area_vitu2_query_pane_t

0x6958,	// (0x00072b2e) bg_button_pane_cp018

0x6966,	// (0x00072b3c) bg_button_pane_cp021

0x6972,	// (0x00072b48) bg_button_pane_cp022

0x6983,	// (0x00072b59) input_focus_pane_cp09

0xb307,	// (0x000774dd) aid_size_touch_mv_arrow_left

0xb332,	// (0x00077508) aid_size_touch_mv_arrow_right

0xd817,	// (0x000799ed) main_cset_slider_pane_g16_ParamLimits

0xd817,	// (0x000799ed) main_cset_slider_pane_g16

0xd823,	// (0x000799f9) main_cset_slider_pane_g17_ParamLimits

0xd823,	// (0x000799f9) main_cset_slider_pane_g17

0x689e,	// (0x00072a74) cell_cam4_burst_pane_g1_ParamLimits

0x93e1,	// (0x000755b7) compa_mode_pane

0x62ea,	// (0x000724c0) popup_vtel_slider_window_g3_ParamLimits

0x62ea,	// (0x000724c0) popup_vtel_slider_window_g3

0x6301,	// (0x000724d7) popup_vtel_slider_window_g4_ParamLimits

0x6301,	// (0x000724d7) popup_vtel_slider_window_g4

0x6318,	// (0x000724ee) popup_vtel_slider_window_t1_ParamLimits

0x6318,	// (0x000724ee) popup_vtel_slider_window_t1

0x9417,	// (0x000755ed) main_cl_pane

0x9910,	// (0x00075ae6) popup_imed_adjust2_window_ParamLimits

0xc90b,	// (0x00078ae1) bg_tb_trans_pane_cp05_ParamLimits

0xd218,	// (0x000793ee) popup_imed_adjust2_window_g1_ParamLimits

0xd227,	// (0x000793fd) popup_imed_adjust2_window_g2_ParamLimits

0xd227,	// (0x000793fd) popup_imed_adjust2_window_g2

0xd233,	// (0x00079409) popup_imed_adjust2_window_g3_ParamLimits

0xd233,	// (0x00079409) popup_imed_adjust2_window_g3

0x0002,

0xf7d7,	// (0x0007b9ad) popup_imed_adjust2_window_g_ParamLimits

0xf7d7,	// (0x0007b9ad) popup_imed_adjust2_window_g

0xd23f,	// (0x00079415) popup_imed_adjust2_window_t1_ParamLimits

0xd257,	// (0x0007942d) slider_imed_adjust_pane_ParamLimits

0xd26b,	// (0x00079441) slider_imed_adjust_pane_g1_ParamLimits

0xd27b,	// (0x00079451) slider_imed_adjust_pane_g2_ParamLimits

0xd28b,	// (0x00079461) slider_imed_adjust_pane_g3_ParamLimits

0xd29c,	// (0x00079472) slider_imed_adjust_pane_g4_ParamLimits

0xf7de,	// (0x0007b9b4) slider_imed_adjust_pane_g_ParamLimits

0x5806,	// (0x000719dc) aid_touch_area_cam4_ParamLimits

0x5806,	// (0x000719dc) aid_touch_area_cam4

0x9cf6,	// (0x00075ecc) battery_pane_cp01

0x58d5,	// (0x00071aab) main_camera4_pane_g6_ParamLimits

0x58d5,	// (0x00071aab) main_camera4_pane_g6

0x58ff,	// (0x00071ad5) main_camera4_pane_t2_ParamLimits

0x58ff,	// (0x00071ad5) main_camera4_pane_t2

0x0001,

0xf8e5,	// (0x0007babb) main_camera4_pane_t_ParamLimits

0xf8e5,	// (0x0007babb) main_camera4_pane_t

0x5934,	// (0x00071b0a) aid_touch_area_vid4_ParamLimits

0x5934,	// (0x00071b0a) aid_touch_area_vid4

0x5988,	// (0x00071b5e) main_video4_pane_g5_ParamLimits

0x5988,	// (0x00071b5e) main_video4_pane_g5

0x59ad,	// (0x00071b83) vid4_progress_pane_ParamLimits

0x59ad,	// (0x00071b83) vid4_progress_pane

0xd82f,	// (0x00079a05) main_cset_slider_pane_g18_ParamLimits

0xd82f,	// (0x00079a05) main_cset_slider_pane_g18

0xd9fd,	// (0x00079bd3) cell_cam4_burst_pane_g2_ParamLimits

0xd9fd,	// (0x00079bd3) cell_cam4_burst_pane_g2

0x0001,

0xfa44,	// (0x0007bc1a) cell_cam4_burst_pane_g_ParamLimits

0xfa44,	// (0x0007bc1a) cell_cam4_burst_pane_g

0xa2f0,	// (0x000764c6) bg_cl_pane_ParamLimits

0xa2f0,	// (0x000764c6) bg_cl_pane

0x6994,	// (0x00072b6a) cl_header_pane_ParamLimits

0x6994,	// (0x00072b6a) cl_header_pane

0x69a8,	// (0x00072b7e) cl_listscroll_pane_ParamLimits

0x69a8,	// (0x00072b7e) cl_listscroll_pane

0xdb3f,	// (0x00079d15) bg_cl_pane_g1

0xdb47,	// (0x00079d1d) bg_cl_pane_g2

0xdb4f,	// (0x00079d25) bg_cl_pane_g3

0xdb57,	// (0x00079d2d) bg_cl_pane_g4

0xdb5f,	// (0x00079d35) bg_cl_pane_g5

0xdb67,	// (0x00079d3d) bg_cl_pane_g6

0xdb6f,	// (0x00079d45) bg_cl_pane_g7

0xdb77,	// (0x00079d4d) bg_cl_pane_g8

0xdb7f,	// (0x00079d55) bg_cl_pane_g9

0x0008,

0xfa7f,	// (0x0007bc55) bg_cl_pane_g

0x69b8,	// (0x00072b8e) aid_height_cl_leading_ParamLimits

0x69b8,	// (0x00072b8e) aid_height_cl_leading

0x69c4,	// (0x00072b9a) aid_height_cl_text_ParamLimits

0x69c4,	// (0x00072b9a) aid_height_cl_text

0xa475,	// (0x0007664b) bg_cl_header_pane_ParamLimits

0xa475,	// (0x0007664b) bg_cl_header_pane

0x69e3,	// (0x00072bb9) cl_header_pane_g1_ParamLimits

0x69e3,	// (0x00072bb9) cl_header_pane_g1

0x69f9,	// (0x00072bcf) cl_header_pane_t1_ParamLimits

0x69f9,	// (0x00072bcf) cl_header_pane_t1

0xdb87,	// (0x00079d5d) cl_list_pane

0xd7ea,	// (0x000799c0) hc_scroll_pane_cp01

0xacbe,	// (0x00076e94) bg_cl_header_pane_g1

0xd6d0,	// (0x000798a6) bg_cl_header_pane_g2

0xacde,	// (0x00076eb4) bg_cl_header_pane_g3

0xd6e0,	// (0x000798b6) bg_cl_header_pane_g4

0xd6d8,	// (0x000798ae) bg_cl_header_pane_g5

0xd90c,	// (0x00079ae2) bg_cl_header_pane_g6

0xd6f8,	// (0x000798ce) bg_cl_header_pane_g7

0xd700,	// (0x000798d6) bg_cl_header_pane_g8

0xd6f0,	// (0x000798c6) bg_cl_header_pane_g9

0x0008,

0xfa92,	// (0x0007bc68) bg_cl_header_pane_g

0x6a12,	// (0x00072be8) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6a12,	// (0x00072be8) hc_cl_list_double_graphic_heading_pane

0x6a23,	// (0x00072bf9) hc_cl_list_single_graphic_pane_ParamLimits

0x6a23,	// (0x00072bf9) hc_cl_list_single_graphic_pane

0x6a3c,	// (0x00072c12) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6a3c,	// (0x00072c12) hc_cl_list_single_graphic_pane_g1

0x6a48,	// (0x00072c1e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a48,	// (0x00072c1e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa5,	// (0x0007bc7b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa5,	// (0x0007bc7b) hc_cl_list_single_graphic_pane_g

0x6a5c,	// (0x00072c32) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a5c,	// (0x00072c32) hc_cl_list_single_graphic_pane_t1

0x6a3c,	// (0x00072c12) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6a3c,	// (0x00072c12) hc_cl_list_double_graphic_heading_pane_g1

0x6a71,	// (0x00072c47) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a71,	// (0x00072c47) hc_cl_list_double_graphic_heading_pane_g2

0x6a85,	// (0x00072c5b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a85,	// (0x00072c5b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaaa,	// (0x0007bc80) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaaa,	// (0x0007bc80) hc_cl_list_double_graphic_heading_pane_g

0x6a99,	// (0x00072c6f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a99,	// (0x00072c6f) hc_cl_list_double_graphic_heading_pane_t1

0x6aae,	// (0x00072c84) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6aae,	// (0x00072c84) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab1,	// (0x0007bc87) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab1,	// (0x0007bc87) hc_cl_list_double_graphic_heading_pane_t

0x9e80,	// (0x00076056) vid4_progress_pane_g1

0x9e90,	// (0x00076066) vid4_progress_pane_g2

0x6ac3,	// (0x00072c99) vid4_progress_pane_g3

0x9ea0,	// (0x00076076) vid4_progress_pane_g4

0x0004,

0xfab6,	// (0x0007bc8c) vid4_progress_pane_g

0x6ad5,	// (0x00072cab) vid4_progress_pane_t1

0x9eb8,	// (0x0007608e) vid4_progress_pane_t2

0x0002,

0xfac1,	// (0x0007bc97) vid4_progress_pane_t

0x6aeb,	// (0x00072cc1) wait_bar_pane_cp07

0xcb06,	// (0x00078cdc) blid_firmament_pane_ParamLimits

0xcb49,	// (0x00078d1f) popup_blid_sat_info2_window_g1

0xcb6d,	// (0x00078d43) popup_blid_sat_info2_window_t3

0xcb7b,	// (0x00078d51) popup_blid_sat_info2_window_t4

0xcb89,	// (0x00078d5f) popup_blid_sat_info2_window_t5

0xcb97,	// (0x00078d6d) popup_blid_sat_info2_window_t6

0xcba7,	// (0x00078d7d) popup_blid_sat_info2_window_t7

0xcbb5,	// (0x00078d8b) popup_blid_sat_info2_window_t8

0xcbc3,	// (0x00078d99) popup_blid_sat_info2_window_t9

0xcbd1,	// (0x00078da7) popup_blid_sat_info2_window_t10

0xcc93,	// (0x00078e69) aid_firma_cardinal_ParamLimits

0xcca7,	// (0x00078e7d) blid_firmament_pane_t1_ParamLimits

0xccbe,	// (0x00078e94) blid_firmament_pane_t2_ParamLimits

0xccd5,	// (0x00078eab) blid_firmament_pane_t3_ParamLimits

0xccec,	// (0x00078ec2) blid_firmament_pane_t4_ParamLimits

0xf6cb,	// (0x0007b8a1) blid_firmament_pane_t_ParamLimits

0xcd03,	// (0x00078ed9) blid_sat_info_pane_ParamLimits

0x9409,	// (0x000755df) main_cam_set_pane_ParamLimits

0x4e20,	// (0x00070ff6) aid_size_cell_colour_35_ParamLimits

0x4e40,	// (0x00071016) aid_size_cell_colour_112_ParamLimits

0x4e60,	// (0x00071036) aid_size_cell_effect_ParamLimits

0xc90b,	// (0x00078ae1) bg_tb_trans_pane_cp02_ParamLimits

0xaf26,	// (0x000770fc) heading_imed_pane_ParamLimits

0x4e80,	// (0x00071056) listscroll_imed_pane_ParamLimits

0xbef7,	// (0x000780cd) popup_call2_audio_first_window_g5_ParamLimits

0xbef7,	// (0x000780cd) popup_call2_audio_first_window_g5

0x541e,	// (0x000715f4) aid_size_touch_image3_arrow_left_ParamLimits

0x541e,	// (0x000715f4) aid_size_touch_image3_arrow_left

0x544a,	// (0x00071620) aid_size_touch_image3_arrow_right_ParamLimits

0x544a,	// (0x00071620) aid_size_touch_image3_arrow_right

0x9ecd,	// (0x000760a3) vid4_progress_pane_t3

0x5195,	// (0x0007136b) main_hwr_training_symbol_option_pane_ParamLimits

0x5195,	// (0x0007136b) main_hwr_training_symbol_option_pane

0xd522,	// (0x000796f8) popup_hwr_training_preview_window_ParamLimits

0xd522,	// (0x000796f8) popup_hwr_training_preview_window

0x51b5,	// (0x0007138b) hwr_training_navi_pane_g5_ParamLimits

0x51b5,	// (0x0007138b) hwr_training_navi_pane_g5

0xd6be,	// (0x00079894) popup_char_count_window

0x9409,	// (0x000755df) bg_popup_sub_pane_cp20_ParamLimits

0x6434,	// (0x0007260a) list_vitu2_match_list_pane_ParamLimits

0x6443,	// (0x00072619) vitu2_page_scroll_pane_ParamLimits

0x6443,	// (0x00072619) vitu2_page_scroll_pane

0xdb90,	// (0x00079d66) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb90,	// (0x00079d66) list_single_hwr_training_symbol_option_pane

0xdba3,	// (0x00079d79) list_single_hwr_training_symbol_option_pane_g1

0xdbab,	// (0x00079d81) list_single_hwr_training_symbol_option_pane_t1

0xdbb9,	// (0x00079d8f) bg_button_pane_cp023

0xdbc2,	// (0x00079d98) bg_button_pane_cp024

0x6b2b,	// (0x00072d01) vitu2_page_scroll_pane_g1

0x6b33,	// (0x00072d09) vitu2_page_scroll_pane_g2

0x0001,

0xfac8,	// (0x0007bc9e) vitu2_page_scroll_pane_g

0x6b3b,	// (0x00072d11) vitu2_page_scroll_pane_t1

0xa99d,	// (0x00076b73) popup_char_count_window_g1

0xdbf5,	// (0x00079dcb) popup_char_count_window_g2

0xd422,	// (0x000795f8) popup_char_count_window_g3

0x0002,

0xfacd,	// (0x0007bca3) popup_char_count_window_g

0xdbfe,	// (0x00079dd4) popup_char_count_window_t1

0x9417,	// (0x000755ed) main_vded2_pane

0xd204,	// (0x000793da) aid_size_cell_imed_line

0xd20e,	// (0x000793e4) grid_imed_line_width_pane

0x9db4,	// (0x00075f8a) vid4_indicators_pane_g4

0xdc0c,	// (0x00079de2) cell_imed_line_width_pane_ParamLimits

0xdc0c,	// (0x00079de2) cell_imed_line_width_pane

0xdc20,	// (0x00079df6) cell_imed_line_width_pane_g1

0xd437,	// (0x0007960d) cell_imed_line_width_pane_g2

0x0001,

0xfad4,	// (0x0007bcaa) cell_imed_line_width_pane_g

0x6b4a,	// (0x00072d20) main_vded2_pane_g1_ParamLimits

0x6b4a,	// (0x00072d20) main_vded2_pane_g1

0x6b60,	// (0x00072d36) main_vded2_pane_g2_ParamLimits

0x6b60,	// (0x00072d36) main_vded2_pane_g2

0x0001,

0xfad9,	// (0x0007bcaf) main_vded2_pane_g_ParamLimits

0xfad9,	// (0x0007bcaf) main_vded2_pane_g

0x6b72,	// (0x00072d48) vded2_slider_pane_ParamLimits

0x6b72,	// (0x00072d48) vded2_slider_pane

0x6b82,	// (0x00072d58) aid_size_touch_vded2_end

0x6b8c,	// (0x00072d62) aid_size_touch_vded2_playhead

0xdc29,	// (0x00079dff) aid_size_touch_vded2_start

0xdc31,	// (0x00079e07) vded2_slider_bg_pane

0xdc3a,	// (0x00079e10) vded2_slider_pane_g1

0xdc43,	// (0x00079e19) vded2_slider_pane_g2

0x6b96,	// (0x00072d6c) vded2_slider_pane_g3

0x0002,

0xfade,	// (0x0007bcb4) vded2_slider_pane_g

0xdc4b,	// (0x00079e21) vded2_slider_bg_pane_g1

0xdc54,	// (0x00079e2a) vded2_slider_bg_pane_g2

0xdc5d,	// (0x00079e33) vded2_slider_bg_pane_g3

0x0002,

0xfae5,	// (0x0007bcbb) vded2_slider_bg_pane_g

0x2b8a,	// (0x0006ed60) aid_postcard_touch_down_pane_ParamLimits

0x2b8a,	// (0x0006ed60) aid_postcard_touch_down_pane

0x2ba0,	// (0x0006ed76) aid_postcard_touch_up_pane_ParamLimits

0x2ba0,	// (0x0006ed76) aid_postcard_touch_up_pane

0x9417,	// (0x000755ed) main_blid2_pane

0x98f6,	// (0x00075acc) popup_blid2_search_window

0x93e1,	// (0x000755b7) blid2_gps_pane

0x93e1,	// (0x000755b7) blid2_navig_pane

0x93e1,	// (0x000755b7) blid2_search_pane

0x93e1,	// (0x000755b7) blid2_tripm_pane

0x6ba1,	// (0x00072d77) blid2_search_pane_g1_ParamLimits

0x6ba1,	// (0x00072d77) blid2_search_pane_g1

0x6bb9,	// (0x00072d8f) blid2_search_pane_t1_ParamLimits

0x6bb9,	// (0x00072d8f) blid2_search_pane_t1

0x6bcb,	// (0x00072da1) aid_size_cell_blid2_gps_ParamLimits

0x6bcb,	// (0x00072da1) aid_size_cell_blid2_gps

0x6be3,	// (0x00072db9) blid2_gps_pane_g1_ParamLimits

0x6be3,	// (0x00072db9) blid2_gps_pane_g1

0x6bf7,	// (0x00072dcd) grid_blid2_satellite_pane_ParamLimits

0x6bf7,	// (0x00072dcd) grid_blid2_satellite_pane

0x6c11,	// (0x00072de7) blid2_navig_pane_g1_ParamLimits

0x6c11,	// (0x00072de7) blid2_navig_pane_g1

0x6c1d,	// (0x00072df3) blid2_navig_pane_t1_ParamLimits

0x6c1d,	// (0x00072df3) blid2_navig_pane_t1

0x6c38,	// (0x00072e0e) blid2_navig_pane_t2_ParamLimits

0x6c38,	// (0x00072e0e) blid2_navig_pane_t2

0x0001,

0xfaec,	// (0x0007bcc2) blid2_navig_pane_t_ParamLimits

0xfaec,	// (0x0007bcc2) blid2_navig_pane_t

0x6c53,	// (0x00072e29) blid2_navig_ring_pane_ParamLimits

0x6c53,	// (0x00072e29) blid2_navig_ring_pane

0x6c6c,	// (0x00072e42) blid2_speed_pane_ParamLimits

0x6c6c,	// (0x00072e42) blid2_speed_pane

0x6c78,	// (0x00072e4e) blid2_tripm_pane_g1_ParamLimits

0x6c78,	// (0x00072e4e) blid2_tripm_pane_g1

0x6c93,	// (0x00072e69) blid2_tripm_pane_g2_ParamLimits

0x6c93,	// (0x00072e69) blid2_tripm_pane_g2

0x6ca7,	// (0x00072e7d) blid2_tripm_pane_g3_ParamLimits

0x6ca7,	// (0x00072e7d) blid2_tripm_pane_g3

0x6cbb,	// (0x00072e91) blid2_tripm_pane_g4_ParamLimits

0x6cbb,	// (0x00072e91) blid2_tripm_pane_g4

0x6ccf,	// (0x00072ea5) blid2_tripm_pane_g5_ParamLimits

0x6ccf,	// (0x00072ea5) blid2_tripm_pane_g5

0x0005,

0xfaf1,	// (0x0007bcc7) blid2_tripm_pane_g_ParamLimits

0xfaf1,	// (0x0007bcc7) blid2_tripm_pane_g

0x6cf5,	// (0x00072ecb) blid2_tripm_pane_t1_ParamLimits

0x6cf5,	// (0x00072ecb) blid2_tripm_pane_t1

0x6d10,	// (0x00072ee6) blid2_tripm_pane_t2_ParamLimits

0x6d10,	// (0x00072ee6) blid2_tripm_pane_t2

0x6d29,	// (0x00072eff) blid2_tripm_pane_t3_ParamLimits

0x6d29,	// (0x00072eff) blid2_tripm_pane_t3

0x0003,

0xfafe,	// (0x0007bcd4) blid2_tripm_pane_t_ParamLimits

0xfafe,	// (0x0007bcd4) blid2_tripm_pane_t

0x6d70,	// (0x00072f46) cell_blid2_satellite_pane_ParamLimits

0x6d70,	// (0x00072f46) cell_blid2_satellite_pane

0x6d8e,	// (0x00072f64) cell_blid2_satellite_pane_g1

0xdc66,	// (0x00079e3c) cell_blid2_satellite_pane_t1

0xcd13,	// (0x00078ee9) blid2_speed_pane_g1

0xdc74,	// (0x00079e4a) blid2_speed_pane_t1

0xdc82,	// (0x00079e58) blid2_speed_pane_t2

0x0001,

0xfb07,	// (0x0007bcdd) blid2_speed_pane_t

0xcd13,	// (0x00078ee9) blid2_navig_ring_pane_g1

0x6d97,	// (0x00072f6d) blid2_navig_ring_pane_g2

0x6d9f,	// (0x00072f75) blid2_navig_ring_pane_g3

0x6da7,	// (0x00072f7d) blid2_navig_ring_pane_g4

0x6daf,	// (0x00072f85) blid2_navig_ring_pane_g5

0x0004,

0xfb0c,	// (0x0007bce2) blid2_navig_ring_pane_g

0x93e1,	// (0x000755b7) bg_popup_window_pane_cp011

0xdc90,	// (0x00079e66) popup_blid2_search_window_g1

0xdc98,	// (0x00079e6e) popup_blid2_search_window_t1

0xdca6,	// (0x00079e7c) popup_blid2_search_window_t2

0x0001,

0xfb17,	// (0x0007bced) popup_blid2_search_window_t

0xabcd,	// (0x00076da3) main_browser_pane_g1

0xa2f0,	// (0x000764c6) main_browser_pane_ParamLimits

0x9409,	// (0x000755df) bg_button_pane_cp011_ParamLimits

0x5cc5,	// (0x00071e9b) cell_vitu2_function_pane_g1_ParamLimits

0xc90b,	// (0x00078ae1) bg_popup_sub_pane_cp22_ParamLimits

0x662a,	// (0x00072800) input_focus_pane_cp08_ParamLimits

0x6641,	// (0x00072817) popup_vitu2_query_button_pane_ParamLimits

0x6641,	// (0x00072817) popup_vitu2_query_button_pane

0x6652,	// (0x00072828) popup_vitu2_query_input_button_pane

0xd947,	// (0x00079b1d) popup_vitu2_query_window_g1_ParamLimits

0x665c,	// (0x00072832) popup_vitu2_query_window_g2_ParamLimits

0xfa18,	// (0x0007bbee) popup_vitu2_query_window_g_ParamLimits

0x93e1,	// (0x000755b7) bg_button_pane_cp026

0x6db7,	// (0x00072f8d) popup_vitu2_query_input_button_pane_g1

0x93e1,	// (0x000755b7) bg_button_pane_cp025

0xdcb4,	// (0x00079e8a) popup_vitu2_query_button_pane_t1

0x4233,	// (0x00070409) main_mp3_pane_t6

0x4241,	// (0x00070417) popup_slider_window_cp01

0x9d20,	// (0x00075ef6) cam4_battery_pane

0x9d73,	// (0x00075f49) cam4_battery_pane_cp02

0x9e78,	// (0x0007604e) cam4_battery_pane_cp01

0x9e78,	// (0x0007604e) cam4_battery_pane_cp03

0xd62d,	// (0x00079803) cam4_battery_pane_g1

0xcd13,	// (0x00078ee9) cam4_battery_pane_g2

0x0001,

0xfb1c,	// (0x0007bcf2) cam4_battery_pane_g

0xcbdf,	// (0x00078db5) popup_blid_sat_info2_window_t11

0xb307,	// (0x000774dd) aid_size_touch_mv_arrow_left_ParamLimits

0xb332,	// (0x00077508) aid_size_touch_mv_arrow_right_ParamLimits

0xb390,	// (0x00077566) navi_pane_g1_ParamLimits

0xb39c,	// (0x00077572) navi_pane_g2_ParamLimits

0xb3ca,	// (0x000775a0) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0007b5a0) navi_pane_g_ParamLimits

0x2637,	// (0x0006e80d) navi_pane_mv_t1_ParamLimits

0x4e8c,	// (0x00071062) grid_imed_effect_pane_ParamLimits

0x144b,	// (0x0006d621) aid_placing_vt_slider_lsc

0xab1c,	// (0x00076cf2) aid_placing_vt_slider_prt

0xa475,	// (0x0007664b) bg_tb_trans_pane_cp01_ParamLimits

0xce78,	// (0x0007904e) popup_image_details_window_g1_ParamLimits

0xce8b,	// (0x00079061) popup_image_details_window_g2_ParamLimits

0xcea0,	// (0x00079076) popup_image_details_window_g3_ParamLimits

0xcea0,	// (0x00079076) popup_image_details_window_g3

0xf710,	// (0x0007b8e6) popup_image_details_window_g_ParamLimits

0xceb4,	// (0x0007908a) popup_image_details_window_t1_ParamLimits

0xcec6,	// (0x0007909c) popup_image_details_window_t2_ParamLimits

0xcedf,	// (0x000790b5) popup_image_details_window_t3_ParamLimits

0xcef3,	// (0x000790c9) popup_image_details_window_t4_ParamLimits

0xcf0e,	// (0x000790e4) popup_image_details_window_t5_ParamLimits

0xf717,	// (0x0007b8ed) popup_image_details_window_t_ParamLimits

0x69d0,	// (0x00072ba6) cl_header_name_pane_ParamLimits

0x69d0,	// (0x00072ba6) cl_header_name_pane

0x6dbf,	// (0x00072f95) cl_header_name_pane_t1_ParamLimits

0x6dbf,	// (0x00072f95) cl_header_name_pane_t1

0x6de0,	// (0x00072fb6) cl_header_name_pane_t2_ParamLimits

0x6de0,	// (0x00072fb6) cl_header_name_pane_t2

0x6e22,	// (0x00072ff8) cl_header_name_pane_t3_ParamLimits

0x6e22,	// (0x00072ff8) cl_header_name_pane_t3

0x0002,

0xfb21,	// (0x0007bcf7) cl_header_name_pane_t_ParamLimits

0xfb21,	// (0x0007bcf7) cl_header_name_pane_t

0xb467,	// (0x0007763d) navi_pane_mv_g2_ParamLimits

0xd698,	// (0x0007986e) field_vitu2_entry_pane_g1_ParamLimits

0xd6a4,	// (0x0007987a) field_vitu2_entry_pane_g2_ParamLimits

0xd6b0,	// (0x00079886) field_vitu2_entry_pane_g3_ParamLimits

0xd6b0,	// (0x00079886) field_vitu2_entry_pane_g3

0xf917,	// (0x0007baed) field_vitu2_entry_pane_g_ParamLimits

0x9de7,	// (0x00075fbd) cell_vitu2_itu_pane_g1_ParamLimits

0x5c59,	// (0x00071e2f) cell_vitu2_itu_pane_g2_ParamLimits

0x5c59,	// (0x00071e2f) cell_vitu2_itu_pane_g2

0x0001,

0xf923,	// (0x0007baf9) cell_vitu2_itu_pane_g_ParamLimits

0xf923,	// (0x0007baf9) cell_vitu2_itu_pane_g

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp05_ParamLimits

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp05

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp03

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp04

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp10_ParamLimits

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp10

0x6972,	// (0x00072b48) bg_vkb2_func_pane_cp08

0x6958,	// (0x00072b2e) bg_vkb2_func_pane_cp06

0x6966,	// (0x00072b3c) bg_vkb2_func_pane_cp07

0xdbcb,	// (0x00079da1) bg_vkb2_func_pane_cp11_ParamLimits

0xdbcb,	// (0x00079da1) bg_vkb2_func_pane_cp11

0xdbe0,	// (0x00079db6) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe0,	// (0x00079db6) bg_vkb2_func_pane_cp12

0x93e1,	// (0x000755b7) bg_vkb2_func_pane_cp09

0xd6d0,	// (0x000798a6) bg_vkb2_func_pane_g1

0xacde,	// (0x00076eb4) bg_vkb2_func_pane_g2

0xd6d8,	// (0x000798ae) bg_vkb2_func_pane_g3

0xd6e0,	// (0x000798b6) bg_vkb2_func_pane_g4

0xd90c,	// (0x00079ae2) bg_vkb2_func_pane_g5

0xd6f8,	// (0x000798ce) bg_vkb2_func_pane_g6

0xd700,	// (0x000798d6) bg_vkb2_func_pane_g7

0xd6f0,	// (0x000798c6) bg_vkb2_func_pane_g8

0xacbe,	// (0x00076e94) bg_vkb2_func_pane_g9

0x0008,

0xfb28,	// (0x0007bcfe) bg_vkb2_func_pane_g

0x6ce3,	// (0x00072eb9) blid2_tripm_pane_g6_ParamLimits

0x6ce3,	// (0x00072eb9) blid2_tripm_pane_g6

0xd5e0,	// (0x000797b6) mp4_progress_pane_g1

0x6d5c,	// (0x00072f32) blid2_tripm_values_pane_ParamLimits

0x6d5c,	// (0x00072f32) blid2_tripm_values_pane

0x6e53,	// (0x00073029) blid2_tripm_values_pane_t1

0x6e61,	// (0x00073037) blid2_tripm_values_pane_t2

0x6e6f,	// (0x00073045) blid2_tripm_values_pane_t3

0x6e7d,	// (0x00073053) blid2_tripm_values_pane_t4

0x6e8b,	// (0x00073061) blid2_tripm_values_pane_t5

0x6e99,	// (0x0007306f) blid2_tripm_values_pane_t6

0x6ea7,	// (0x0007307d) blid2_tripm_values_pane_t7

0x6eb5,	// (0x0007308b) blid2_tripm_values_pane_t8

0x6ec3,	// (0x00073099) blid2_tripm_values_pane_t9

0x0008,

0xfb3b,	// (0x0007bd11) blid2_tripm_values_pane_t

0x148d,	// (0x0006d663) call_video_pane_t1_ParamLimits

0x14ab,	// (0x0006d681) call_video_pane_t2_ParamLimits

0xf253,	// (0x0007b429) call_video_pane_t_ParamLimits

0x2b08,	// (0x0006ecde) msg_header_pane_g1_ParamLimits

0xb641,	// (0x00077817) msg_header_pane_g2_ParamLimits

0xb641,	// (0x00077817) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0007b643) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0007b643) msg_header_pane_g

0xa2f0,	// (0x000764c6) main_clock2_pane_ParamLimits

0x4b8d,	// (0x00070d63) grid_clock2_toolbar_pane_ParamLimits

0x4b8d,	// (0x00070d63) grid_clock2_toolbar_pane

0x4b8d,	// (0x00070d63) listscroll_clock2_pane_ParamLimits

0x4b8d,	// (0x00070d63) listscroll_clock2_pane

0x4c71,	// (0x00070e47) main_clock2_pane_t3_ParamLimits

0x4c71,	// (0x00070e47) main_clock2_pane_t3

0x4c95,	// (0x00070e6b) main_clock2_pane_t4_ParamLimits

0x4c95,	// (0x00070e6b) main_clock2_pane_t4

0xdcc2,	// (0x00079e98) cell_clock2_toolbar_pane

0xdcca,	// (0x00079ea0) cell_clock2_toolbar_pane_cp01

0xdcca,	// (0x00079ea0) cell_clock2_toolbar_pane_cp02

0xdcd2,	// (0x00079ea8) cell_clock2_toolbar_pane_cp03

0xdcda,	// (0x00079eb0) list_clock2_pane

0xb28c,	// (0x00077462) scroll_pane_cp10

0xdce2,	// (0x00079eb8) list_single_clock2_pane_ParamLimits

0xdce2,	// (0x00079eb8) list_single_clock2_pane

0xaa85,	// (0x00076c5b) list_highlight_pane_cp08

0xdcef,	// (0x00079ec5) list_single_clock2_pane_t1

0xdcfd,	// (0x00079ed3) list_single_clock2_pane_t2

0x0001,

0xfb4e,	// (0x0007bd24) list_single_clock2_pane_t

0x93e1,	// (0x000755b7) bg_button_pane_cp10

0xdd0b,	// (0x00079ee1) cell_clock2_toolbar_pane_g1

0x2b16,	// (0x0006ecec) aid_main_viewer_pane_g1_ParamLimits

0x2b16,	// (0x0006ecec) aid_main_viewer_pane_g1

0x2b24,	// (0x0006ecfa) aid_main_viewer_pane_g2_ParamLimits

0x2b24,	// (0x0006ecfa) aid_main_viewer_pane_g2

0x2b32,	// (0x0006ed08) aid_main_viewer_pane_g3_ParamLimits

0x2b32,	// (0x0006ed08) aid_main_viewer_pane_g3

0x2b41,	// (0x0006ed17) aid_main_viewer_pane_g4_ParamLimits

0x2b41,	// (0x0006ed17) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0007b654) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0007b654) aid_main_viewer_pane_g

0x3449,	// (0x0006f61f) main_calc_pane_ParamLimits

0x346f,	// (0x0006f645) main_dialer2_pane_ParamLimits

0x9417,	// (0x000755ed) main_cam6_pane

0x9417,	// (0x000755ed) main_vid6_pane

0x4b99,	// (0x00070d6f) listscroll_gen_pane_cp06_ParamLimits

0x4b99,	// (0x00070d6f) listscroll_gen_pane_cp06

0x4cb8,	// (0x00070e8e) main_clock2_pane_t5_ParamLimits

0x4cb8,	// (0x00070e8e) main_clock2_pane_t5

0x4d16,	// (0x00070eec) aid_call2_pane_cp10_ParamLimits

0x4d28,	// (0x00070efe) aid_call_pane_cp10_ParamLimits

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d3a,	// (0x00070f10) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d3a,	// (0x00070f10) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2fb,	// (0x000774d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7cc,	// (0x0007b9a2) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d50,	// (0x00070f26) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53cb,	// (0x000715a1) cell_dialer2_keypad_pane_g2_ParamLimits

0x53cb,	// (0x000715a1) cell_dialer2_keypad_pane_g2

0x0001,

0xf8b6,	// (0x0007ba8c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8b6,	// (0x0007ba8c) cell_dialer2_keypad_pane_g

0x53e7,	// (0x000715bd) cell_dialer2_keypad_pane_t1

0x5fdf,	// (0x000721b5) main_cset_text2_pane_ParamLimits

0x5fdf,	// (0x000721b5) main_cset_text2_pane

0xdb33,	// (0x00079d09) area_vitu2_query_pane_g1_ParamLimits

0x68f7,	// (0x00072acd) area_vitu2_query_pane_g2_ParamLimits

0xfa6b,	// (0x0007bc41) area_vitu2_query_pane_g_ParamLimits

0xa58c,	// (0x00076762) area_vitu2_query_pane_t7_ParamLimits

0xa58c,	// (0x00076762) area_vitu2_query_pane_t7

0x6958,	// (0x00072b2e) bg_button_pane_cp018_ParamLimits

0x6966,	// (0x00072b3c) bg_button_pane_cp021_ParamLimits

0x6972,	// (0x00072b48) bg_button_pane_cp022_ParamLimits

0x6972,	// (0x00072b48) bg_vkb2_func_pane_cp08_ParamLimits

0x6958,	// (0x00072b2e) bg_vkb2_func_pane_cp06_ParamLimits

0x6966,	// (0x00072b3c) bg_vkb2_func_pane_cp07_ParamLimits

0x6983,	// (0x00072b59) input_focus_pane_cp09_ParamLimits

0x9ee3,	// (0x000760b9) cam6_autofocus_pane_ParamLimits

0x9ee3,	// (0x000760b9) cam6_autofocus_pane

0x6ed1,	// (0x000730a7) cam6_image_uncrop_pane_ParamLimits

0x6ed1,	// (0x000730a7) cam6_image_uncrop_pane

0x6ee0,	// (0x000730b6) cam6_indi_pane_ParamLimits

0x6ee0,	// (0x000730b6) cam6_indi_pane

0x6ef6,	// (0x000730cc) cam6_mode_pane_ParamLimits

0x6ef6,	// (0x000730cc) cam6_mode_pane

0x6f08,	// (0x000730de) cam6_timer_pane_ParamLimits

0x6f08,	// (0x000730de) cam6_timer_pane

0x6f18,	// (0x000730ee) cam6_zoom_pane_ParamLimits

0x6f18,	// (0x000730ee) cam6_zoom_pane

0x6f24,	// (0x000730fa) cam6_mode_pane_g1_ParamLimits

0x6f24,	// (0x000730fa) cam6_mode_pane_g1

0x6f34,	// (0x0007310a) cam6_mode_pane_g2_ParamLimits

0x6f34,	// (0x0007310a) cam6_mode_pane_g2

0x6f44,	// (0x0007311a) cam6_mode_pane_g3_ParamLimits

0x6f44,	// (0x0007311a) cam6_mode_pane_g3

0x6f54,	// (0x0007312a) cam6_mode_pane_g4_ParamLimits

0x6f54,	// (0x0007312a) cam6_mode_pane_g4

0x0003,

0xfb53,	// (0x0007bd29) cam6_mode_pane_g_ParamLimits

0xfb53,	// (0x0007bd29) cam6_mode_pane_g

0xdd13,	// (0x00079ee9) bg_tb_trans_pane_cp08_ParamLimits

0xdd13,	// (0x00079ee9) bg_tb_trans_pane_cp08

0xdd21,	// (0x00079ef7) cam6_battery_pane_ParamLimits

0xdd21,	// (0x00079ef7) cam6_battery_pane

0xdd37,	// (0x00079f0d) cam6_indi_pane_g1_ParamLimits

0xdd37,	// (0x00079f0d) cam6_indi_pane_g1

0xdd49,	// (0x00079f1f) cam6_indi_pane_g2_ParamLimits

0xdd49,	// (0x00079f1f) cam6_indi_pane_g2

0xdd5b,	// (0x00079f31) cam6_indi_pane_g3_ParamLimits

0xdd5b,	// (0x00079f31) cam6_indi_pane_g3

0x0002,

0xfb5c,	// (0x0007bd32) cam6_indi_pane_g_ParamLimits

0xfb5c,	// (0x0007bd32) cam6_indi_pane_g

0xdd6d,	// (0x00079f43) cam6_indi_pane_t1_ParamLimits

0xdd6d,	// (0x00079f43) cam6_indi_pane_t1

0x6f64,	// (0x0007313a) cam6_autofocus_pane_g1

0x6f6c,	// (0x00073142) cam6_autofocus_pane_g2

0x6f74,	// (0x0007314a) cam6_autofocus_pane_g3

0x6f7c,	// (0x00073152) cam6_autofocus_pane_g4

0x0003,

0xfb63,	// (0x0007bd39) cam6_autofocus_pane_g

0xdd93,	// (0x00079f69) cam6_timer_pane_g1

0xdd9b,	// (0x00079f71) cam6_timer_pane_t1

0xdda9,	// (0x00079f7f) cam6_zoom_cont_pane

0xddb1,	// (0x00079f87) cam6_zoom_pane_g1

0xddb9,	// (0x00079f8f) cam6_zoom_pane_g2

0x6f84,	// (0x0007315a) cam6_zoom_pane_g3

0x0002,

0xfb6c,	// (0x0007bd42) cam6_zoom_pane_g

0xcd13,	// (0x00078ee9) cam6_battery_pane_g1

0xcd13,	// (0x00078ee9) cam6_battery_pane_g2

0x0001,

0xf6d4,	// (0x0007b8aa) cam6_battery_pane_g

0xddc1,	// (0x00079f97) cam6_zoom_cont_pane_g1

0xddca,	// (0x00079fa0) cam6_zoom_cont_pane_g2

0xddd3,	// (0x00079fa9) cam6_zoom_cont_pane_g3

0x0002,

0xfb73,	// (0x0007bd49) cam6_zoom_cont_pane_g

0x6fa1,	// (0x00073177) cam6_mode_pane_cp_ParamLimits

0x6fa1,	// (0x00073177) cam6_mode_pane_cp

0x6fb3,	// (0x00073189) cam6_zoom_pane_cp_ParamLimits

0x6fb3,	// (0x00073189) cam6_zoom_pane_cp

0x6fbf,	// (0x00073195) vid6_image_uncrop_cif_pane_ParamLimits

0x6fbf,	// (0x00073195) vid6_image_uncrop_cif_pane

0x6fcf,	// (0x000731a5) vid6_image_uncrop_nhd_pane_ParamLimits

0x6fcf,	// (0x000731a5) vid6_image_uncrop_nhd_pane

0x6fde,	// (0x000731b4) vid6_image_uncrop_vga_pane_ParamLimits

0x6fde,	// (0x000731b4) vid6_image_uncrop_vga_pane

0x6fed,	// (0x000731c3) vid6_image_uncrop_wvga_pane_ParamLimits

0x6fed,	// (0x000731c3) vid6_image_uncrop_wvga_pane

0x6ffc,	// (0x000731d2) vid6_indi_pane_ParamLimits

0x6ffc,	// (0x000731d2) vid6_indi_pane

0xdd13,	// (0x00079ee9) bg_tb_trans_pane_cp09_ParamLimits

0xdd13,	// (0x00079ee9) bg_tb_trans_pane_cp09

0xddeb,	// (0x00079fc1) cam6_battery_pane_cp_ParamLimits

0xddeb,	// (0x00079fc1) cam6_battery_pane_cp

0xddf7,	// (0x00079fcd) vid6_indi_pane_g1_ParamLimits

0xddf7,	// (0x00079fcd) vid6_indi_pane_g1

0xde09,	// (0x00079fdf) vid6_indi_pane_g2_ParamLimits

0xde09,	// (0x00079fdf) vid6_indi_pane_g2

0xde1b,	// (0x00079ff1) vid6_indi_pane_g3_ParamLimits

0xde1b,	// (0x00079ff1) vid6_indi_pane_g3

0xde30,	// (0x0007a006) vid6_indi_pane_g4_ParamLimits

0xde30,	// (0x0007a006) vid6_indi_pane_g4

0xde45,	// (0x0007a01b) vid6_indi_pane_g5_ParamLimits

0xde45,	// (0x0007a01b) vid6_indi_pane_g5

0x0004,

0xfb7a,	// (0x0007bd50) vid6_indi_pane_g_ParamLimits

0xfb7a,	// (0x0007bd50) vid6_indi_pane_g

0xde5f,	// (0x0007a035) vid6_indi_pane_t1_ParamLimits

0xde5f,	// (0x0007a035) vid6_indi_pane_t1

0xde75,	// (0x0007a04b) vid6_indi_pane_t2_ParamLimits

0xde75,	// (0x0007a04b) vid6_indi_pane_t2

0xde9d,	// (0x0007a073) vid6_indi_pane_t3_ParamLimits

0xde9d,	// (0x0007a073) vid6_indi_pane_t3

0xdef2,	// (0x0007a0c8) vid6_indi_pane_t4_ParamLimits

0xdef2,	// (0x0007a0c8) vid6_indi_pane_t4

0x0003,

0xfb85,	// (0x0007bd5b) vid6_indi_pane_t_ParamLimits

0xfb85,	// (0x0007bd5b) vid6_indi_pane_t

0xdf16,	// (0x0007a0ec) wait_bar_pane_cp08

0x7014,	// (0x000731ea) main_cset_text2_pane_t1_ParamLimits

0x7014,	// (0x000731ea) main_cset_text2_pane_t1

0x6f8c,	// (0x00073162) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f8c,	// (0x00073162) listscroll_gen_pane_cp06_t1

0x9417,	// (0x000755ed) main_cam6_set_pane

0x9d12,	// (0x00075ee8) bg_tb_trans_pane_cp06_ParamLimits

0x9d28,	// (0x00075efe) cam4_indicators_pane_g1_ParamLimits

0x9d39,	// (0x00075f0f) cam4_indicators_pane_g2_ParamLimits

0xf8f3,	// (0x0007bac9) cam4_indicators_pane_g_ParamLimits

0x9d51,	// (0x00075f27) cam4_indicators_pane_t1_ParamLimits

0x9409,	// (0x000755df) bg_tb_trans_pane_cp07_ParamLimits

0x9d7b,	// (0x00075f51) vid4_indicators_pane_g1_ParamLimits

0x9d8f,	// (0x00075f65) vid4_indicators_pane_g2_ParamLimits

0x9da3,	// (0x00075f79) vid4_indicators_pane_g3_ParamLimits

0x9db4,	// (0x00075f8a) vid4_indicators_pane_g4_ParamLimits

0xf905,	// (0x0007badb) vid4_indicators_pane_g_ParamLimits

0x9dd0,	// (0x00075fa6) vid4_indicators_pane_t1_ParamLimits

0x9e80,	// (0x00076056) vid4_progress_pane_g1_ParamLimits

0x9e90,	// (0x00076066) vid4_progress_pane_g2_ParamLimits

0x6ac3,	// (0x00072c99) vid4_progress_pane_g3_ParamLimits

0x9ea0,	// (0x00076076) vid4_progress_pane_g4_ParamLimits

0xfab6,	// (0x0007bc8c) vid4_progress_pane_g_ParamLimits

0x6ad5,	// (0x00072cab) vid4_progress_pane_t1_ParamLimits

0x9eb8,	// (0x0007608e) vid4_progress_pane_t2_ParamLimits

0x9ecd,	// (0x000760a3) vid4_progress_pane_t3_ParamLimits

0xfac1,	// (0x0007bc97) vid4_progress_pane_t_ParamLimits

0x6aeb,	// (0x00072cc1) wait_bar_pane_cp07_ParamLimits

0x7032,	// (0x00073208) main_cam6_set_pane_g2_ParamLimits

0x7032,	// (0x00073208) main_cam6_set_pane_g2

0x7056,	// (0x0007322c) main_cset6_listscroll_pane_ParamLimits

0x7056,	// (0x0007322c) main_cset6_listscroll_pane

0x7072,	// (0x00073248) main_cset6_slider_pane_ParamLimits

0x7072,	// (0x00073248) main_cset6_slider_pane

0x7088,	// (0x0007325e) main_cset6_text2_pane_ParamLimits

0x7088,	// (0x0007325e) main_cset6_text2_pane

0xdf25,	// (0x0007a0fb) main_cset6_text_pane

0xdf2d,	// (0x0007a103) main_cset_list_pane_copy1_ParamLimits

0xdf2d,	// (0x0007a103) main_cset_list_pane_copy1

0xdf3d,	// (0x0007a113) scroll_pane_cp028_copy1

0x7096,	// (0x0007326c) cset_list_set_pane_copy1

0x70a8,	// (0x0007327e) aid_position_infowindow_above_copy1

0x70b0,	// (0x00073286) aid_position_infowindow_below_copy1

0x70b8,	// (0x0007328e) cset_list_set_pane_g1_copy1

0x70c0,	// (0x00073296) cset_list_set_pane_g3_copy1_ParamLimits

0x70c0,	// (0x00073296) cset_list_set_pane_g3_copy1

0x70cf,	// (0x000732a5) cset_list_set_pane_t1_copy1_ParamLimits

0x70cf,	// (0x000732a5) cset_list_set_pane_t1_copy1

0xa475,	// (0x0007664b) list_highlight_pane_cp021_copy1_ParamLimits

0xa475,	// (0x0007664b) list_highlight_pane_cp021_copy1

0xdf46,	// (0x0007a11c) cset6_slider_pane_ParamLimits

0xdf46,	// (0x0007a11c) cset6_slider_pane

0xdf72,	// (0x0007a148) main_cset6_slider_pane_g1_ParamLimits

0xdf72,	// (0x0007a148) main_cset6_slider_pane_g1

0x70e4,	// (0x000732ba) main_cset6_slider_pane_g2_ParamLimits

0x70e4,	// (0x000732ba) main_cset6_slider_pane_g2

0xdf9a,	// (0x0007a170) main_cset6_slider_pane_g3_ParamLimits

0xdf9a,	// (0x0007a170) main_cset6_slider_pane_g3

0x710c,	// (0x000732e2) main_cset6_slider_pane_g4_ParamLimits

0x710c,	// (0x000732e2) main_cset6_slider_pane_g4

0xdfa6,	// (0x0007a17c) main_cset6_slider_pane_g5_ParamLimits

0xdfa6,	// (0x0007a17c) main_cset6_slider_pane_g5

0xd7ff,	// (0x000799d5) main_cset6_slider_pane_g7_ParamLimits

0xd7ff,	// (0x000799d5) main_cset6_slider_pane_g7

0xd80b,	// (0x000799e1) main_cset6_slider_pane_g8_ParamLimits

0xd80b,	// (0x000799e1) main_cset6_slider_pane_g8

0x608c,	// (0x00072262) main_cset6_slider_pane_g9_ParamLimits

0x608c,	// (0x00072262) main_cset6_slider_pane_g9

0x6098,	// (0x0007226e) main_cset6_slider_pane_g10_ParamLimits

0x6098,	// (0x0007226e) main_cset6_slider_pane_g10

0x60a4,	// (0x0007227a) main_cset6_slider_pane_g11_ParamLimits

0x60a4,	// (0x0007227a) main_cset6_slider_pane_g11

0x60b0,	// (0x00072286) main_cset6_slider_pane_g12_ParamLimits

0x60b0,	// (0x00072286) main_cset6_slider_pane_g12

0x60bc,	// (0x00072292) main_cset6_slider_pane_g13_ParamLimits

0x60bc,	// (0x00072292) main_cset6_slider_pane_g13

0x60c8,	// (0x0007229e) main_cset6_slider_pane_g14_ParamLimits

0x60c8,	// (0x0007229e) main_cset6_slider_pane_g14

0x7118,	// (0x000732ee) main_cset6_slider_pane_g15_ParamLimits

0x7118,	// (0x000732ee) main_cset6_slider_pane_g15

0xd817,	// (0x000799ed) main_cset6_slider_pane_g16_ParamLimits

0xd817,	// (0x000799ed) main_cset6_slider_pane_g16

0xd823,	// (0x000799f9) main_cset6_slider_pane_g17_ParamLimits

0xd823,	// (0x000799f9) main_cset6_slider_pane_g17

0x0011,

0xfb8e,	// (0x0007bd64) main_cset6_slider_pane_g_ParamLimits

0xfb8e,	// (0x0007bd64) main_cset6_slider_pane_g

0xdfb2,	// (0x0007a188) main_cset6_slider_pane_t1_ParamLimits

0xdfb2,	// (0x0007a188) main_cset6_slider_pane_t1

0x7148,	// (0x0007331e) main_cset6_slider_pane_t2_ParamLimits

0x7148,	// (0x0007331e) main_cset6_slider_pane_t2

0x7173,	// (0x00073349) main_cset6_slider_pane_t3_ParamLimits

0x7173,	// (0x00073349) main_cset6_slider_pane_t3

0x719e,	// (0x00073374) main_cset6_slider_pane_t4_ParamLimits

0x719e,	// (0x00073374) main_cset6_slider_pane_t4

0x71c9,	// (0x0007339f) main_cset6_slider_pane_t5_ParamLimits

0x71c9,	// (0x0007339f) main_cset6_slider_pane_t5

0xdff3,	// (0x0007a1c9) main_cset6_slider_pane_t7_ParamLimits

0xdff3,	// (0x0007a1c9) main_cset6_slider_pane_t7

0x71f4,	// (0x000733ca) main_cset6_slider_pane_t8_ParamLimits

0x71f4,	// (0x000733ca) main_cset6_slider_pane_t8

0x7218,	// (0x000733ee) main_cset6_slider_pane_t9_ParamLimits

0x7218,	// (0x000733ee) main_cset6_slider_pane_t9

0x723c,	// (0x00073412) main_cset6_slider_pane_t10_ParamLimits

0x723c,	// (0x00073412) main_cset6_slider_pane_t10

0x7260,	// (0x00073436) main_cset6_slider_pane_t11_ParamLimits

0x7260,	// (0x00073436) main_cset6_slider_pane_t11

0xe029,	// (0x0007a1ff) main_cset6_slider_pane_t14_ParamLimits

0xe029,	// (0x0007a1ff) main_cset6_slider_pane_t14

0xe062,	// (0x0007a238) main_cset6_slider_pane_t15_ParamLimits

0xe062,	// (0x0007a238) main_cset6_slider_pane_t15

0x000b,

0xfbb3,	// (0x0007bd89) main_cset6_slider_pane_t_ParamLimits

0xfbb3,	// (0x0007bd89) main_cset6_slider_pane_t

0xd4f7,	// (0x000796cd) cset_slider_pane_g1_copy1

0xdec5,	// (0x0007a09b) cset_slider_pane_g2_copy1

0xdece,	// (0x0007a0a4) cset_slider_pane_g3_copy1

0x93e1,	// (0x000755b7) bg_popup_sub_pane_cp011_copy1

0xe09b,	// (0x0007a271) main_cset_text_pane_g1_copy1

0xd95b,	// (0x00079b31) main_cset_text_pane_t1_copy1

0xd969,	// (0x00079b3f) main_cset_text_pane_t2_copy1

0xd977,	// (0x00079b4d) main_cset_text_pane_t3_copy1

0xd985,	// (0x00079b5b) main_cset_text_pane_t4_copy1

0xd993,	// (0x00079b69) main_cset_text_pane_t5_copy1

0xe0a3,	// (0x0007a279) main_cset_text_pane_t6_copy1

0xe0b1,	// (0x0007a287) main_cset_text_pane_t7_copy1

0x7014,	// (0x000731ea) main_cset_text2_pane_t1_copy1

0x9409,	// (0x000755df) main_ncimui_pane

0x36b3,	// (0x0006f889) popup_query_ncimui_window_ParamLimits

0x36b3,	// (0x0006f889) popup_query_ncimui_window

0xa4bf,	// (0x00076695) field_cale_ev2_pane_g4_ParamLimits

0xa4bf,	// (0x00076695) field_cale_ev2_pane_g4

0x52aa,	// (0x00071480) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52aa,	// (0x00071480) cell_video_dialer_keypad_pane_g2

0x0001,

0xf88d,	// (0x0007ba63) cell_video_dialer_keypad_pane_g_ParamLimits

0xf88d,	// (0x0007ba63) cell_video_dialer_keypad_pane_g

0x52c2,	// (0x00071498) cell_video_dialer_keypad_pane_t1

0x93e1,	// (0x000755b7) bg_popup_window_pane_cp012

0xb177,	// (0x0007734d) heading_pane_cp06

0xe0dd,	// (0x0007a2b3) ncim_query_content_pane

0x93e1,	// (0x000755b7) bg_popup_heading_pane_cp01

0xe0e5,	// (0x0007a2bb) ncim_heading_pane_t1

0xe0f3,	// (0x0007a2c9) ncim_indicator_popup_pane

0xe105,	// (0x0007a2db) ncim_query_button_pane

0xe119,	// (0x0007a2ef) ncim_query_content_pane_t1

0xe12b,	// (0x0007a301) ncim_query_content_pane_t2

0x0005,

0xfbf7,	// (0x0007bdcd) ncim_query_content_pane_t

0xe165,	// (0x0007a33b) ncim_query_list_pane

0xe177,	// (0x0007a34d) ncim_query_popup_pane

0xe0f3,	// (0x0007a2c9) ncim_indicator_popup_pane_ParamLimits

0x7483,	// (0x00073659) ncim_query_content_pane_g1_ParamLimits

0x7483,	// (0x00073659) ncim_query_content_pane_g1

0xe119,	// (0x0007a2ef) ncim_query_content_pane_t1_ParamLimits

0xe12b,	// (0x0007a301) ncim_query_content_pane_t2_ParamLimits

0x748f,	// (0x00073665) ncim_query_content_pane_t3_ParamLimits

0x748f,	// (0x00073665) ncim_query_content_pane_t3

0x74b7,	// (0x0007368d) ncim_query_content_pane_t4_ParamLimits

0x74b7,	// (0x0007368d) ncim_query_content_pane_t4

0x74df,	// (0x000736b5) ncim_query_content_pane_t5_ParamLimits

0x74df,	// (0x000736b5) ncim_query_content_pane_t5

0xe13d,	// (0x0007a313) ncim_query_content_pane_t6_ParamLimits

0xe13d,	// (0x0007a313) ncim_query_content_pane_t6

0xfbf7,	// (0x0007bdcd) ncim_query_content_pane_t_ParamLimits

0xe165,	// (0x0007a33b) ncim_query_list_pane_ParamLimits

0xe177,	// (0x0007a34d) ncim_query_popup_pane_ParamLimits

0xe18b,	// (0x0007a361) wait_bar_pane_cp04

0x93e1,	// (0x000755b7) input_focus_pane_cp011

0xe193,	// (0x0007a369) ncim_query_popup_pane_t1

0xe1a1,	// (0x0007a377) ncim_list_query_list_pane_ParamLimits

0xe1a1,	// (0x0007a377) ncim_list_query_list_pane

0x93e1,	// (0x000755b7) bg_button_pane_cp027

0xe1ae,	// (0x0007a384) ncim_query_button_pane_g1

0x93e1,	// (0x000755b7) list_highlight_pane_cp012

0xe1b8,	// (0x0007a38e) ncim_list_query_list_pane_g1

0xe1c0,	// (0x0007a396) ncim_list_query_list_pane_t1

0x9d45,	// (0x00075f1b) cam4_indicators_pane_g3_ParamLimits

0x9d45,	// (0x00075f1b) cam4_indicators_pane_g3

0x9dc0,	// (0x00075f96) vid4_indicators_pane_g5_ParamLimits

0x9dc0,	// (0x00075f96) vid4_indicators_pane_g5

0x9eac,	// (0x00076082) vid4_progress_pane_g5_ParamLimits

0x9eac,	// (0x00076082) vid4_progress_pane_g5

0x736e,	// (0x00073544) main_ncimui_pane_g1

0x73d7,	// (0x000735ad) ncimui_group_query_pane_ParamLimits

0x73d7,	// (0x000735ad) ncimui_group_query_pane

0x741f,	// (0x000735f5) ncimui_list_pane_ParamLimits

0x741f,	// (0x000735f5) ncimui_list_pane

0x7446,	// (0x0007361c) ncimui_text_pane_ParamLimits

0x7446,	// (0x0007361c) ncimui_text_pane

0x7507,	// (0x000736dd) ncimui_text_pane_t1_ParamLimits

0x7507,	// (0x000736dd) ncimui_text_pane_t1

0xe1ce,	// (0x0007a3a4) ncimui_list_single_graphic_pane_ParamLimits

0xe1ce,	// (0x0007a3a4) ncimui_list_single_graphic_pane

0x7525,	// (0x000736fb) ncimui_query_pane_ParamLimits

0x7525,	// (0x000736fb) ncimui_query_pane

0x93e1,	// (0x000755b7) list_highlight_pane_cp013

0xe1de,	// (0x0007a3b4) ncim_list_query_list_pane_t1_copy1

0xe1ec,	// (0x0007a3c2) ncim_list_single_graphic_pane_g1

0x7538,	// (0x0007370e) ncim_query_button_pane_cp01

0x7544,	// (0x0007371a) ncim_query_entry_pane_ParamLimits

0x7544,	// (0x0007371a) ncim_query_entry_pane

0x7557,	// (0x0007372d) ncimui_query_pane_g1

0x7563,	// (0x00073739) ncimui_query_pane_t1_ParamLimits

0x7563,	// (0x00073739) ncimui_query_pane_t1

0xa475,	// (0x0007664b) input_focus_pane_cp012

0xe1f4,	// (0x0007a3ca) ncim_query_entry_pane_t1

0xa2f0,	// (0x000764c6) main_im_pane_ParamLimits

0x9409,	// (0x000755df) main_mobtv_pane_ParamLimits

0x9409,	// (0x000755df) main_mobtv_pane

0x7130,	// (0x00073306) main_cset6_slider_pane_g18_ParamLimits

0x7130,	// (0x00073306) main_cset6_slider_pane_g18

0x713c,	// (0x00073312) main_cset6_slider_pane_g19_ParamLimits

0x713c,	// (0x00073312) main_cset6_slider_pane_g19

0x757c,	// (0x00073752) bg_main_mobtv_pane_ParamLimits

0x757c,	// (0x00073752) bg_main_mobtv_pane

0x758a,	// (0x00073760) main_mobtv_info_pane

0x7593,	// (0x00073769) main_mobtv_loading_pane_ParamLimits

0x7593,	// (0x00073769) main_mobtv_loading_pane

0xe206,	// (0x0007a3dc) main_mobtv_pg_channel_list_pane

0xe210,	// (0x0007a3e6) main_mobtv_pg_hdr_pane

0x75a0,	// (0x00073776) main_mobtv_programe_curr_pane_ParamLimits

0x75a0,	// (0x00073776) main_mobtv_programe_curr_pane

0x75ad,	// (0x00073783) main_mobtv_programe_next_pane_ParamLimits

0x75ad,	// (0x00073783) main_mobtv_programe_next_pane

0xe219,	// (0x0007a3ef) popup_mobtv_noti_window

0xcd13,	// (0x00078ee9) main_tv_pg_hdr_pane_g1

0xe221,	// (0x0007a3f7) main_tv_pg_hdr_pane_g2

0xe229,	// (0x0007a3ff) main_tv_pg_hdr_pane_g3

0xe231,	// (0x0007a407) main_tv_pg_hdr_pane_g4

0xe239,	// (0x0007a40f) main_tv_pg_hdr_pane_g5

0xe243,	// (0x0007a419) main_tv_pg_hdr_pane_g6

0xe24d,	// (0x0007a423) main_tv_pg_hdr_pane_g7

0xe257,	// (0x0007a42d) main_tv_pg_hdr_pane_g8

0xe261,	// (0x0007a437) main_tv_pg_hdr_pane_g9

0xe26b,	// (0x0007a441) main_tv_pg_hdr_pane_g10

0xe275,	// (0x0007a44b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc04,	// (0x0007bdda) main_tv_pg_hdr_pane_g

0xe27f,	// (0x0007a455) main_tv_pg_hdr_pane_t1

0xe28d,	// (0x0007a463) main_tv_pg_hdr_pane_t2

0xe29b,	// (0x0007a471) main_tv_pg_hdr_pane_t3

0xe2ab,	// (0x0007a481) main_tv_pg_hdr_pane_t4

0xe2bb,	// (0x0007a491) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1b,	// (0x0007bdf1) main_tv_pg_hdr_pane_t

0xe2cb,	// (0x0007a4a1) single_mobtv_pg_channel_pane_ParamLimits

0xe2cb,	// (0x0007a4a1) single_mobtv_pg_channel_pane

0xe2dd,	// (0x0007a4b3) single_mobtv_pg_channel_table_pane

0xade1,	// (0x00076fb7) single_mobtv_pg_channel_thumb_pane

0xe2e6,	// (0x0007a4bc) single_tv_pg_channel_pane_g1

0xe2ef,	// (0x0007a4c5) single_tv_pg_channel_pane_g2

0x0001,

0xfc26,	// (0x0007bdfc) single_tv_pg_channel_pane_g

0xcf58,	// (0x0007912e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf58,	// (0x0007912e) bg_single_mobtv_pg_channel_thumb_pane

0xe2f8,	// (0x0007a4ce) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f8,	// (0x0007a4ce) single_mobtv_pg_channel_thumb_pane_g1

0xe306,	// (0x0007a4dc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe306,	// (0x0007a4dc) single_mobtv_pg_channel_thumb_pane_g2

0xe312,	// (0x0007a4e8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe312,	// (0x0007a4e8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2b,	// (0x0007be01) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2b,	// (0x0007be01) single_mobtv_pg_channel_thumb_pane_g

0xe31e,	// (0x0007a4f4) single_mobtv_pg_channel_thumb_pane_t1

0xe32c,	// (0x0007a502) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc32,	// (0x0007be08) single_mobtv_pg_channel_thumb_pane_t

0xcd13,	// (0x00078ee9) bg_single_mobtv_pg_channel_table_pane_g1

0xcd13,	// (0x00078ee9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d4,	// (0x0007b8aa) bg_single_mobtv_pg_channel_table_pane_g

0xe33a,	// (0x0007a510) single_mobtv_pg_channel_table_pane_t1

0xe348,	// (0x0007a51e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc37,	// (0x0007be0d) single_mobtv_pg_channel_table_pane_t

0x75c2,	// (0x00073798) main_mobtv_info_pane_g1_ParamLimits

0x75c2,	// (0x00073798) main_mobtv_info_pane_g1

0x75e0,	// (0x000737b6) main_mobtv_info_pane_t1_ParamLimits

0x75e0,	// (0x000737b6) main_mobtv_info_pane_t1

0x7658,	// (0x0007382e) main_mobtv_info_pane_t2_ParamLimits

0x7658,	// (0x0007382e) main_mobtv_info_pane_t2

0x0002,

0xfc41,	// (0x0007be17) main_mobtv_info_pane_t_ParamLimits

0xfc41,	// (0x0007be17) main_mobtv_info_pane_t

0x76e7,	// (0x000738bd) wait_bar_pane_cp05

0x76f9,	// (0x000738cf) main_mobtv_loading_pane_g1_ParamLimits

0x76f9,	// (0x000738cf) main_mobtv_loading_pane_g1

0x770c,	// (0x000738e2) main_mobtv_loading_pane_g2_ParamLimits

0x770c,	// (0x000738e2) main_mobtv_loading_pane_g2

0x7718,	// (0x000738ee) main_mobtv_loading_pane_g3_ParamLimits

0x7718,	// (0x000738ee) main_mobtv_loading_pane_g3

0x0002,

0xfc48,	// (0x0007be1e) main_mobtv_loading_pane_g_ParamLimits

0xfc48,	// (0x0007be1e) main_mobtv_loading_pane_g

0xe356,	// (0x0007a52c) main_mobtv_loading_pane_t1_ParamLimits

0xe356,	// (0x0007a52c) main_mobtv_loading_pane_t1

0xe36e,	// (0x0007a544) main_mobtv_loading_pane_t2_ParamLimits

0xe36e,	// (0x0007a544) main_mobtv_loading_pane_t2

0x0001,

0xfc4f,	// (0x0007be25) main_mobtv_loading_pane_t_ParamLimits

0xfc4f,	// (0x0007be25) main_mobtv_loading_pane_t

0x772b,	// (0x00073901) wait_bar_pane_cp06_ParamLimits

0x772b,	// (0x00073901) wait_bar_pane_cp06

0xe392,	// (0x0007a568) main_mobtv_programe_curr_pane_t1

0xe3a0,	// (0x0007a576) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc54,	// (0x0007be2a) main_mobtv_programe_curr_pane_t

0xe3ae,	// (0x0007a584) main_mobtv_programe_next_pane_t1

0xe3bc,	// (0x0007a592) main_mobtv_programe_next_pane_t2

0xe3ca,	// (0x0007a5a0) main_mobtv_programe_next_pane_t3

0x0002,

0xfc59,	// (0x0007be2f) main_mobtv_programe_next_pane_t

0x93e1,	// (0x000755b7) bg_popup_mobtv_noti_window_pane

0xe3d8,	// (0x0007a5ae) popup_mobtv_noti_window_g1

0xe3e0,	// (0x0007a5b6) popup_mobtv_noti_window_t1

0xe3ee,	// (0x0007a5c4) popup_mobtv_noti_window_t2

0x0001,

0xfc60,	// (0x0007be36) popup_mobtv_noti_window_t

0xcd13,	// (0x00078ee9) bg_popup_mobtv_noti_window_pane_g1

0x9417,	// (0x000755ed) sc_clock_pane

0x9417,	// (0x000755ed) main_fs_bigclock_pane

0x6d46,	// (0x00072f1c) blid2_tripm_pane_t4_ParamLimits

0x6d46,	// (0x00072f1c) blid2_tripm_pane_t4

0x773a,	// (0x00073910) sc_clock_pane_g1_ParamLimits

0x773a,	// (0x00073910) sc_clock_pane_g1

0x774c,	// (0x00073922) sc_clock_pane_t1_ParamLimits

0x774c,	// (0x00073922) sc_clock_pane_t1

0x776e,	// (0x00073944) sc_clock_pane_t2_ParamLimits

0x776e,	// (0x00073944) sc_clock_pane_t2

0x7786,	// (0x0007395c) sc_clock_pane_t3_ParamLimits

0x7786,	// (0x0007395c) sc_clock_pane_t3

0x0004,

0xfc65,	// (0x0007be3b) sc_clock_pane_t_ParamLimits

0xfc65,	// (0x0007be3b) sc_clock_pane_t

0x87ed,	// (0x000749c3) main_fs_bigclock_indicator_pane_ParamLimits

0x87ed,	// (0x000749c3) main_fs_bigclock_indicator_pane

0x782c,	// (0x00073a02) main_fs_bigclock_pane_g1_ParamLimits

0x782c,	// (0x00073a02) main_fs_bigclock_pane_g1

0x87f9,	// (0x000749cf) main_fs_bigclock_pane_t1_ParamLimits

0x87f9,	// (0x000749cf) main_fs_bigclock_pane_t1

0x880b,	// (0x000749e1) main_fs_bigclock_pane_t2_ParamLimits

0x880b,	// (0x000749e1) main_fs_bigclock_pane_t2

0x881f,	// (0x000749f5) main_fs_bigclock_pane_t3_ParamLimits

0x881f,	// (0x000749f5) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007c049) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007c049) main_fs_bigclock_pane_t

0xec60,	// (0x0007ae36) main_fs_bigclock_indicator_pane_g1

0xe10d,	// (0x0007a2e3) ncim_query_content_pane_g2_ParamLimits

0xe10d,	// (0x0007a2e3) ncim_query_content_pane_g2

0x0001,

0xfbf2,	// (0x0007bdc8) ncim_query_content_pane_g_ParamLimits

0xfbf2,	// (0x0007bdc8) ncim_query_content_pane_g

0x779f,	// (0x00073975) sc_clock_pane_t4_ParamLimits

0x779f,	// (0x00073975) sc_clock_pane_t4

0x9409,	// (0x000755df) main_radioblah_pane

0x9cac,	// (0x00075e82) cell_call4_button_pane_t1_copy1_ParamLimits

0x9cac,	// (0x00075e82) cell_call4_button_pane_t1_copy1

0x7386,	// (0x0007355c) main_ncimui_pane_t1_ParamLimits

0x7386,	// (0x0007355c) main_ncimui_pane_t1

0x73a0,	// (0x00073576) main_ncimui_pane_t2_ParamLimits

0x73a0,	// (0x00073576) main_ncimui_pane_t2

0x0002,

0xfbeb,	// (0x0007bdc1) main_ncimui_pane_t_ParamLimits

0xfbeb,	// (0x0007bdc1) main_ncimui_pane_t

0xe534,	// (0x0007a70a) main_radioblah_anim_pane_ParamLimits

0xe534,	// (0x0007a70a) main_radioblah_anim_pane

0xe545,	// (0x0007a71b) main_radioblah_info_pane_ParamLimits

0xe545,	// (0x0007a71b) main_radioblah_info_pane

0xe559,	// (0x0007a72f) main_radioblah_pane_t1_ParamLimits

0xe559,	// (0x0007a72f) main_radioblah_pane_t1

0xe575,	// (0x0007a74b) main_radioblah_pane_t2_ParamLimits

0xe575,	// (0x0007a74b) main_radioblah_pane_t2

0x0003,

0xfc86,	// (0x0007be5c) main_radioblah_pane_t_ParamLimits

0xfc86,	// (0x0007be5c) main_radioblah_pane_t

0x788b,	// (0x00073a61) main_radioblah_rocker_ctrl_pane_ParamLimits

0x788b,	// (0x00073a61) main_radioblah_rocker_ctrl_pane

0xe5bd,	// (0x0007a793) main_radioblah_info_pane_t1_ParamLimits

0xe5bd,	// (0x0007a793) main_radioblah_info_pane_t1

0x78e3,	// (0x00073ab9) main_radioblah_info_pane_t2_ParamLimits

0x78e3,	// (0x00073ab9) main_radioblah_info_pane_t2

0x0003,

0xfc8f,	// (0x0007be65) main_radioblah_info_pane_t_ParamLimits

0xfc8f,	// (0x0007be65) main_radioblah_info_pane_t

0xcd13,	// (0x00078ee9) main_radioblah_rocker_ctrl_pane_g1

0x7993,	// (0x00073b69) main_radioblah_rocker_ctrl_pane_g2

0x799b,	// (0x00073b71) main_radioblah_rocker_ctrl_pane_g3

0x79a3,	// (0x00073b79) main_radioblah_rocker_ctrl_pane_g4

0x79ab,	// (0x00073b81) main_radioblah_rocker_ctrl_pane_g5

0x79b3,	// (0x00073b89) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc98,	// (0x0007be6e) main_radioblah_rocker_ctrl_pane_g

0x7014,	// (0x000731ea) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d0a,	// (0x00075ee0) cam4_image_uncrop_qvga_pane

0x9d6b,	// (0x00075f41) vid4_image_uncrop_qcif_pane

0x9ee3,	// (0x000760b9) cam6_image_uncrop_qvga_pane_ParamLimits

0x9ee3,	// (0x000760b9) cam6_image_uncrop_qvga_pane

0xdddb,	// (0x00079fb1) vid6_image_uncrop_qcif_pane_ParamLimits

0xdddb,	// (0x00079fb1) vid6_image_uncrop_qcif_pane

0x93e1,	// (0x000755b7) bg_popup_preview_window_pane_cp03

0xe0bf,	// (0x0007a295) list_cset_text2_pane

0xe0c7,	// (0x0007a29d) main_cset6_text2_pane_g1

0xe0cf,	// (0x0007a2a5) main_cset6_text2_pane_t1

0xe5f7,	// (0x0007a7cd) list_cset_text2_pane_t1_ParamLimits

0xe5f7,	// (0x0007a7cd) list_cset_text2_pane_t1

0x9409,	// (0x000755df) main_radioblah_pane_ParamLimits

0x76d3,	// (0x000738a9) main_mobtv_info_pane_t3_ParamLimits

0x76d3,	// (0x000738a9) main_mobtv_info_pane_t3

0x7879,	// (0x00073a4f) main_radioblah_pane_g1

0x78b3,	// (0x00073a89) main_radioblah_info_pane_g1

0x7938,	// (0x00073b0e) main_radioblah_info_pane_t3_ParamLimits

0x7938,	// (0x00073b0e) main_radioblah_info_pane_t3

0x2116,	// (0x0006e2ec) highlight_cell_cale_month_pane_ParamLimits

0x2116,	// (0x0006e2ec) highlight_cell_cale_month_pane

0x9417,	// (0x000755ed) main_phob_fisheye_pane

0xd034,	// (0x0007920a) scroll_pane_cp0031_ParamLimits

0xd034,	// (0x0007920a) scroll_pane_cp0031

0xdf16,	// (0x0007a0ec) wait_bar_pane_cp08_ParamLimits

0x7096,	// (0x0007326c) cset_list_set_pane_copy1_ParamLimits

0xe612,	// (0x0007a7e8) highlight_cell_cale_month_pane_g1

0x79bb,	// (0x00073b91) highlight_cell_cale_month_pane_t1

0xdb87,	// (0x00079d5d) list_gen_pane_cp01

0xd7ea,	// (0x000799c0) scroll_pane_01

0x79c9,	// (0x00073b9f) list_single_double_fisheye_pane

0x79d2,	// (0x00073ba8) list_double_fisheye_pane_g1_ParamLimits

0x79d2,	// (0x00073ba8) list_double_fisheye_pane_g1

0x79de,	// (0x00073bb4) list_double_fisheye_pane_g2_ParamLimits

0x79de,	// (0x00073bb4) list_double_fisheye_pane_g2

0x79f2,	// (0x00073bc8) list_double_fisheye_pane_g3_ParamLimits

0x79f2,	// (0x00073bc8) list_double_fisheye_pane_g3

0x0004,

0xfca5,	// (0x0007be7b) list_double_fisheye_pane_g_ParamLimits

0xfca5,	// (0x0007be7b) list_double_fisheye_pane_g

0x7a1b,	// (0x00073bf1) list_double_fisheye_pane_t1_ParamLimits

0x7a1b,	// (0x00073bf1) list_double_fisheye_pane_t1

0x7a36,	// (0x00073c0c) list_double_fisheye_pane_t2_ParamLimits

0x7a36,	// (0x00073c0c) list_double_fisheye_pane_t2

0x0001,

0xfcb0,	// (0x0007be86) list_double_fisheye_pane_t_ParamLimits

0xfcb0,	// (0x0007be86) list_double_fisheye_pane_t

0x9417,	// (0x000755ed) main_call5_pane

0x77ca,	// (0x000739a0) sc_swipe_pane_ParamLimits

0x77ca,	// (0x000739a0) sc_swipe_pane

0x7a6b,	// (0x00073c41) call5_image_pane_ParamLimits

0x7a6b,	// (0x00073c41) call5_image_pane

0x7a88,	// (0x00073c5e) call5_swipe_1_pane_ParamLimits

0x7a88,	// (0x00073c5e) call5_swipe_1_pane

0x7a9b,	// (0x00073c71) call5_swipe_2_pane_ParamLimits

0x7a9b,	// (0x00073c71) call5_swipe_2_pane

0x7ac6,	// (0x00073c9c) popup_call5_audio_first_window_ParamLimits

0x7ac6,	// (0x00073c9c) popup_call5_audio_first_window

0xcf58,	// (0x0007912e) call5_swipe_1_pane_g1_ParamLimits

0xcf58,	// (0x0007912e) call5_swipe_1_pane_g1

0xe61a,	// (0x0007a7f0) call5_swipe_1_pane_g2_ParamLimits

0xe61a,	// (0x0007a7f0) call5_swipe_1_pane_g2

0x0001,

0xfcb5,	// (0x0007be8b) call5_swipe_1_pane_g_ParamLimits

0xfcb5,	// (0x0007be8b) call5_swipe_1_pane_g

0xe626,	// (0x0007a7fc) call5_swipe_1_pane_t1_ParamLimits

0xe626,	// (0x0007a7fc) call5_swipe_1_pane_t1

0xcf58,	// (0x0007912e) call5_swipe_2_pane_g1_ParamLimits

0xcf58,	// (0x0007912e) call5_swipe_2_pane_g1

0xe63b,	// (0x0007a811) call5_swipe_2_pane_g2_ParamLimits

0xe63b,	// (0x0007a811) call5_swipe_2_pane_g2

0x0001,

0xfcba,	// (0x0007be90) call5_swipe_2_pane_g_ParamLimits

0xfcba,	// (0x0007be90) call5_swipe_2_pane_g

0xe647,	// (0x0007a81d) call5_swipe_2_pane_t1_ParamLimits

0xe647,	// (0x0007a81d) call5_swipe_2_pane_t1

0xe65c,	// (0x0007a832) sc_swipe_pane_g1_ParamLimits

0xe65c,	// (0x0007a832) sc_swipe_pane_g1

0xe669,	// (0x0007a83f) sc_swipe_pane_g2_ParamLimits

0xe669,	// (0x0007a83f) sc_swipe_pane_g2

0x0001,

0xfcbf,	// (0x0007be95) sc_swipe_pane_g_ParamLimits

0xfcbf,	// (0x0007be95) sc_swipe_pane_g

0xe675,	// (0x0007a84b) sc_swipe_pane_t1_ParamLimits

0xe675,	// (0x0007a84b) sc_swipe_pane_t1

0x9417,	// (0x000755ed) main_cmail_launcher_pane

0x7ad7,	// (0x00073cad) aid_size_cell_cmail_l_ParamLimits

0x7ad7,	// (0x00073cad) aid_size_cell_cmail_l

0x7ae5,	// (0x00073cbb) grid_cmail_l_pane_ParamLimits

0x7ae5,	// (0x00073cbb) grid_cmail_l_pane

0x7aff,	// (0x00073cd5) cell_cmail_l_pane_ParamLimits

0x7aff,	// (0x00073cd5) cell_cmail_l_pane

0xe68a,	// (0x0007a860) cell_cmail_l_pane_g1_ParamLimits

0xe68a,	// (0x0007a860) cell_cmail_l_pane_g1

0xe696,	// (0x0007a86c) cell_cmail_l_pane_t1_ParamLimits

0xe696,	// (0x0007a86c) cell_cmail_l_pane_t1

0xe6ac,	// (0x0007a882) cell_cmail_l_pane_t2_ParamLimits

0xe6ac,	// (0x0007a882) cell_cmail_l_pane_t2

0x0001,

0xfcc4,	// (0x0007be9a) cell_cmail_l_pane_t_ParamLimits

0xfcc4,	// (0x0007be9a) cell_cmail_l_pane_t

0xa475,	// (0x0007664b) grid_highlight_pane_cp018_ParamLimits

0xa475,	// (0x0007664b) grid_highlight_pane_cp018

0x03bd,	// (0x0006c593) main2_pane_ParamLimits

0x03bd,	// (0x0006c593) main2_pane

0xa389,	// (0x0007655f) popup_sp_fs_action_menu_bg_pane_g1

0xa391,	// (0x00076567) popup_sp_fs_action_menu_bg_pane_g2

0xa399,	// (0x0007656f) popup_sp_fs_action_menu_bg_pane_g3

0xa3a1,	// (0x00076577) popup_sp_fs_action_menu_bg_pane_g4

0xa3a9,	// (0x0007657f) popup_sp_fs_action_menu_bg_pane_g5

0xa3b1,	// (0x00076587) popup_sp_fs_action_menu_bg_pane_g6

0xa3b9,	// (0x0007658f) popup_sp_fs_action_menu_bg_pane_g7

0xa3c1,	// (0x00076597) popup_sp_fs_action_menu_bg_pane_g8

0xa3c9,	// (0x0007659f) popup_sp_fs_action_menu_bg_pane_g9

0xa3d1,	// (0x000765a7) popup_sp_fs_action_menu_bg_pane_g10

0xa3d1,	// (0x000765a7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0007b345) popup_sp_fs_action_menu_bg_pane_g

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g3_g1

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t3_g3_g2

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0007b3f3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0007b3f3) list_medium_line_x2_t3_g3_g

0x12e8,	// (0x0006d4be) list_medium_line_x2_t3_g3_t1_ParamLimits

0x12e8,	// (0x0006d4be) list_medium_line_x2_t3_g3_t1

0x12fd,	// (0x0006d4d3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12fd,	// (0x0006d4d3) list_medium_line_x2_t3_g3_t2

0x1311,	// (0x0006d4e7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0007b3fa) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0007b3fa) list_medium_line_x2_t3_g3_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g2_g1

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0007b401) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0007b401) list_medium_line_x2_t3_g2_g

0x1326,	// (0x0006d4fc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1326,	// (0x0006d4fc) list_medium_line_x2_t3_g2_t1

0x133b,	// (0x0006d511) list_medium_line_x2_t3_g2_t2_ParamLimits

0x133b,	// (0x0006d511) list_medium_line_x2_t3_g2_t2

0x134d,	// (0x0006d523) list_medium_line_x2_t3_g2_t3_ParamLimits

0x134d,	// (0x0006d523) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0007b406) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0007b406) list_medium_line_x2_t3_g2_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t4_g4_g1

0x136b,	// (0x0006d541) list_medium_line_x2_t4_g4_g2_ParamLimits

0x136b,	// (0x0006d541) list_medium_line_x2_t4_g4_g2

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t4_g4_g3

0x1377,	// (0x0006d54d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1377,	// (0x0006d54d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0007b40d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0007b40d) list_medium_line_x2_t4_g4_g

0x1383,	// (0x0006d559) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1383,	// (0x0006d559) list_medium_line_x2_t4_g4_t1

0x139d,	// (0x0006d573) list_medium_line_x2_t4_g4_t2_ParamLimits

0x139d,	// (0x0006d573) list_medium_line_x2_t4_g4_t2

0x13b3,	// (0x0006d589) list_medium_line_x2_t4_g4_t3_ParamLimits

0x13b3,	// (0x0006d589) list_medium_line_x2_t4_g4_t3

0x13c8,	// (0x0006d59e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x13c8,	// (0x0006d59e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0007b416) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0007b416) list_medium_line_x2_t4_g4_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g4_g1

0x136b,	// (0x0006d541) list_medium_line_x2_t2_g4_g2_ParamLimits

0x136b,	// (0x0006d541) list_medium_line_x2_t2_g4_g2

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t2_g4_g3

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0007b47d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0007b47d) list_medium_line_x2_t2_g4_g

0x213c,	// (0x0006e312) list_medium_line_x2_t2_g4_t1_ParamLimits

0x213c,	// (0x0006e312) list_medium_line_x2_t2_g4_t1

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0007b486) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0007b486) list_medium_line_x2_t2_g4_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g3_g1

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t2_g3_g2

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0007b3f3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0007b3f3) list_medium_line_x2_t2_g3_g

0x2151,	// (0x0006e327) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2151,	// (0x0006e327) list_medium_line_x2_t2_g3_t1

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0007b48b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0007b48b) list_medium_line_x2_t2_g3_t

0x22a5,	// (0x0006e47b) main_sp_fs_list_pane_ParamLimits

0x22a5,	// (0x0006e47b) main_sp_fs_list_pane

0xd42b,	// (0x00079601) sp_fs_scroll_pane_ParamLimits

0xd42b,	// (0x00079601) sp_fs_scroll_pane

0x22b1,	// (0x0006e487) list_medium_line_x2_t3_t1

0x22c1,	// (0x0006e497) list_medium_line_x2_t3_t2

0x22cf,	// (0x0006e4a5) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0007b4d6) list_medium_line_x2_t3_t

0x22dd,	// (0x0006e4b3) list_medium_line_x3_t4_t1

0x22ed,	// (0x0006e4c3) list_medium_line_x3_t4_t2

0x22fb,	// (0x0006e4d1) list_medium_line_x3_t4_t3

0x22cf,	// (0x0006e4a5) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0007b4dd) list_medium_line_x3_t4_t

0x2309,	// (0x0006e4df) list_medium_line_x4_t5_t1

0x2319,	// (0x0006e4ef) list_medium_line_x4_t5_t2

0x22fb,	// (0x0006e4d1) list_medium_line_x4_t5_t3

0x2327,	// (0x0006e4fd) list_medium_line_x4_t5_t4

0x22cf,	// (0x0006e4a5) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0007b4e6) list_medium_line_x4_t5_t

0x12c4,	// (0x0006d49a) list_medium_line_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_t4_g4_g1

0x1377,	// (0x0006d54d) list_medium_line_t4_g4_g2_ParamLimits

0x1377,	// (0x0006d54d) list_medium_line_t4_g4_g2

0x2335,	// (0x0006e50b) list_medium_line_t4_g4_g3_ParamLimits

0x2335,	// (0x0006e50b) list_medium_line_t4_g4_g3

0x12dc,	// (0x0006d4b2) list_medium_line_t4_g4_g4_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0007b4f1) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0007b4f1) list_medium_line_t4_g4_g

0x2341,	// (0x0006e517) list_medium_line_t4_g4_t1_ParamLimits

0x2341,	// (0x0006e517) list_medium_line_t4_g4_t1

0x2356,	// (0x0006e52c) list_medium_line_t4_g4_t2_ParamLimits

0x2356,	// (0x0006e52c) list_medium_line_t4_g4_t2

0x236c,	// (0x0006e542) list_medium_line_t4_g4_t3_ParamLimits

0x236c,	// (0x0006e542) list_medium_line_t4_g4_t3

0x1311,	// (0x0006d4e7) list_medium_line_t4_g4_t4_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0007b4fa) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0007b4fa) list_medium_line_t4_g4_t

0x2445,	// (0x0006e61b) chi_dic_find_pane_g1

0x3483,	// (0x0006f659) main_tport_pane

0x63aa,	// (0x00072580) list_medium_line_plain_t1

0x6452,	// (0x00072628) list_medium_line_t2_g2_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t2_g2_g1

0x645e,	// (0x00072634) list_medium_line_t2_g2_g2_ParamLimits

0x645e,	// (0x00072634) list_medium_line_t2_g2_g2

0x0001,

0xf9fc,	// (0x0007bbd2) list_medium_line_t2_g2_g_ParamLimits

0xf9fc,	// (0x0007bbd2) list_medium_line_t2_g2_g

0x646a,	// (0x00072640) list_medium_line_t2_g2_t1_ParamLimits

0x646a,	// (0x00072640) list_medium_line_t2_g2_t1

0x6484,	// (0x0007265a) list_medium_line_t2_g2_t2_ParamLimits

0x6484,	// (0x0007265a) list_medium_line_t2_g2_t2

0x0001,

0xfa01,	// (0x0007bbd7) list_medium_line_t2_g2_t_ParamLimits

0xfa01,	// (0x0007bbd7) list_medium_line_t2_g2_t

0xa5b0,	// (0x00076786) aid_sp_fs_list_icon_a_sm

0xa5b8,	// (0x0007678e) aid_sp_fs_list_icon_d

0xa5c0,	// (0x00076796) aid_sp_fs_text_primary

0xdee9,	// (0x0007a0bf) aid_sp_fs_text_secondary

0x6afc,	// (0x00072cd2) list_medium_line

0x6afc,	// (0x00072cd2) list_medium_line_g2

0x6afc,	// (0x00072cd2) list_medium_line_g3

0x6afc,	// (0x00072cd2) list_medium_line_plain

0x6afc,	// (0x00072cd2) list_medium_line_plain_t2

0x6afc,	// (0x00072cd2) list_medium_line_plain_t3

0x6afc,	// (0x00072cd2) list_medium_line_right_icon

0x6afc,	// (0x00072cd2) list_medium_line_right_iconx2

0x6afc,	// (0x00072cd2) list_medium_line_t2

0x6afc,	// (0x00072cd2) list_medium_line_t2_g2

0x6afc,	// (0x00072cd2) list_medium_line_t2_g3

0x6afc,	// (0x00072cd2) list_medium_line_t2_right_icon

0x6afc,	// (0x00072cd2) list_medium_line_t2_right_iconx2

0x6afc,	// (0x00072cd2) list_medium_line_t3

0x6afc,	// (0x00072cd2) list_medium_line_t3_g2

0x6afc,	// (0x00072cd2) list_medium_line_t3_g3

0x6afc,	// (0x00072cd2) list_medium_line_t3_right_iconx2

0x6b05,	// (0x00072cdb) list_medium_line_t4_g4

0x6afc,	// (0x00072cd2) list_medium_line_x2

0x6afc,	// (0x00072cd2) list_medium_line_x2_t2_g2

0x6afc,	// (0x00072cd2) list_medium_line_x2_t2_g3

0x6afc,	// (0x00072cd2) list_medium_line_x2_t2_g4

0x6afc,	// (0x00072cd2) list_medium_line_x2_t3

0x6afc,	// (0x00072cd2) list_medium_line_x2_t3_g2

0x6afc,	// (0x00072cd2) list_medium_line_x2_t3_g3

0x6afc,	// (0x00072cd2) list_medium_line_x2_t3_g4

0x6afc,	// (0x00072cd2) list_medium_line_x2_t4_g2

0x6afc,	// (0x00072cd2) list_medium_line_x2_t4_g4

0x6b0e,	// (0x00072ce4) list_medium_line_x3

0x6b0e,	// (0x00072ce4) list_medium_line_x3_t4

0x6b0e,	// (0x00072ce4) list_medium_line_x3_t4_g4

0x6b05,	// (0x00072cdb) list_medium_line_x4_t4

0x6b05,	// (0x00072cdb) list_medium_line_x4_t4_g7

0x6b05,	// (0x00072cdb) list_medium_line_x4_t5

0x6b17,	// (0x00072ced) list_single_fs_dyc_pane_ParamLimits

0x6b17,	// (0x00072ced) list_single_fs_dyc_pane

0x12c4,	// (0x0006d49a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x4_t4_g7_g1

0x7284,	// (0x0007345a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7284,	// (0x0007345a) list_medium_line_x4_t4_g7_g2

0x7290,	// (0x00073466) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7290,	// (0x00073466) list_medium_line_x4_t4_g7_g3

0x729f,	// (0x00073475) list_medium_line_x4_t4_g7_g4_ParamLimits

0x729f,	// (0x00073475) list_medium_line_x4_t4_g7_g4

0x72ab,	// (0x00073481) list_medium_line_x4_t4_g7_g5_ParamLimits

0x72ab,	// (0x00073481) list_medium_line_x4_t4_g7_g5

0x72ba,	// (0x00073490) list_medium_line_x4_t4_g7_g6_ParamLimits

0x72ba,	// (0x00073490) list_medium_line_x4_t4_g7_g6

0x72c9,	// (0x0007349f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x72c9,	// (0x0007349f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbcc,	// (0x0007bda2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbcc,	// (0x0007bda2) list_medium_line_x4_t4_g7_g

0x72d5,	// (0x000734ab) list_medium_line_x4_t4_g7_t1_ParamLimits

0x72d5,	// (0x000734ab) list_medium_line_x4_t4_g7_t1

0x72ea,	// (0x000734c0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x72ea,	// (0x000734c0) list_medium_line_x4_t4_g7_t2

0x72ff,	// (0x000734d5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x72ff,	// (0x000734d5) list_medium_line_x4_t4_g7_t3

0x7314,	// (0x000734ea) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7314,	// (0x000734ea) list_medium_line_x4_t4_g7_t4

0x7326,	// (0x000734fc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7326,	// (0x000734fc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdb,	// (0x0007bdb1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdb,	// (0x0007bdb1) list_medium_line_x4_t4_g7_t

0x7338,	// (0x0007350e) list_single_dyc_row_pane_ParamLimits

0x7338,	// (0x0007350e) list_single_dyc_row_pane

0x7a58,	// (0x00073c2e) call5_gesture_pane_ParamLimits

0x7a58,	// (0x00073c2e) call5_gesture_pane

0x7aae,	// (0x00073c84) call5_windows_pane_ParamLimits

0x7aae,	// (0x00073c84) call5_windows_pane

0x7b19,	// (0x00073cef) call5_swipe_1_pane_cp_ParamLimits

0x7b19,	// (0x00073cef) call5_swipe_1_pane_cp

0x7b25,	// (0x00073cfb) call5_swipe_2_pane_cp_ParamLimits

0x7b25,	// (0x00073cfb) call5_swipe_2_pane_cp

0xaa85,	// (0x00076c5b) call5_image_pane_cp

0x7b31,	// (0x00073d07) popup_call5_audio_first_window_cp_ParamLimits

0x7b31,	// (0x00073d07) popup_call5_audio_first_window_cp

0xe65c,	// (0x0007a832) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65c,	// (0x0007a832) call5_swipe_1_pane_g1_cp

0xe6c9,	// (0x0007a89f) call5_swipe_1_pane_g2_cp

0xe675,	// (0x0007a84b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe675,	// (0x0007a84b) call5_swipe_1_pane_t1_cp

0xe65c,	// (0x0007a832) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65c,	// (0x0007a832) call5_swipe_2_pane_g1_cp

0xe6d1,	// (0x0007a8a7) call5_swipe_2_pane_g2_cp

0xe6d9,	// (0x0007a8af) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6d9,	// (0x0007a8af) call5_swipe_2_pane_t1_cp

0xa475,	// (0x0007664b) main_sp_fs_email_pane

0xe6ee,	// (0x0007a8c4) main_sp_fs_listscroll_pane_te

0xa5c9,	// (0x0007679f) popup_sp_fs_action_menu_pane_ParamLimits

0xa5c9,	// (0x0007679f) popup_sp_fs_action_menu_pane

0xcd13,	// (0x00078ee9) bg_sp_fs_ctrlbar_pane_g1

0xe6f7,	// (0x0007a8cd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe700,	// (0x0007a8d6) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe709,	// (0x0007a8df) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd13,	// (0x00078ee9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc9,	// (0x0007be9f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf8,	// (0x00078cce) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf8,	// (0x00078cce) bg_sp_fs_ctrlbar_ddmenu_pane

0xe712,	// (0x0007a8e8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe712,	// (0x0007a8e8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe71e,	// (0x0007a8f4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe71e,	// (0x0007a8f4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd2,	// (0x0007bea8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd2,	// (0x0007bea8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe72a,	// (0x0007a900) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe72a,	// (0x0007a900) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7b3f,	// (0x00073d15) list_medium_line_t2_right_icon_g1

0x7b47,	// (0x00073d1d) list_medium_line_t2_right_icon_t1

0x7b57,	// (0x00073d2d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd7,	// (0x0007bead) list_medium_line_t2_right_icon_t

0xc90b,	// (0x00078ae1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc90b,	// (0x00078ae1) bg_sp_fs_ctrlbar_pane

0x7bb1,	// (0x00073d87) main_sp_fs_ctrlbar_button_pane_cp01

0x7bbb,	// (0x00073d91) main_sp_fs_ctrlbar_ddmenu_pane

0xe77c,	// (0x0007a952) main_sp_fs_ctrlbar_pane_g1

0xe788,	// (0x0007a95e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcdc,	// (0x0007beb2) main_sp_fs_ctrlbar_pane_g

0x7bf9,	// (0x00073dcf) main_sp_fs_ctrlbar_pane_t1

0x7c38,	// (0x00073e0e) main_sp_fs_ctrlbar_pane

0x7c5c,	// (0x00073e32) main_sp_fs_listscroll_pane_te_cp01

0x7c7c,	// (0x00073e52) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7c7c,	// (0x00073e52) popup_sp_fs_action_menu_pane_cp01

0xa475,	// (0x0007664b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa475,	// (0x0007664b) bg_sp_fs_highlight_list_pane_cp01

0xa60b,	// (0x000767e1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa60b,	// (0x000767e1) sp_fs_action_menu_list_gene_pane_g1

0xe7af,	// (0x0007a985) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7af,	// (0x0007a985) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007bec0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007bec0) sp_fs_action_menu_list_gene_pane_g

0xa61a,	// (0x000767f0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa61a,	// (0x000767f0) sp_fs_action_menu_list_gene_pane_t1

0xa632,	// (0x00076808) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa632,	// (0x00076808) sp_fs_action_menu_list_gene_pane

0xe7bc,	// (0x0007a992) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7bc,	// (0x0007a992) popup_sp_fs_action_menu_bg_pane

0xa651,	// (0x00076827) sp_fs_action_menu_list_pane_ParamLimits

0xa651,	// (0x00076827) sp_fs_action_menu_list_pane

0xa671,	// (0x00076847) sp_fs_scroll_pane_cp01_ParamLimits

0xa671,	// (0x00076847) sp_fs_scroll_pane_cp01

0x7cac,	// (0x00073e82) list_medium_line_plain_t2_t1

0x7cbc,	// (0x00073e92) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007bec5) list_medium_line_plain_t2_t

0x7ccc,	// (0x00073ea2) list_medium_line_plain_t3_t1

0x7cdc,	// (0x00073eb2) list_medium_line_plain_t3_t2

0x7cea,	// (0x00073ec0) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007beca) list_medium_line_plain_t3_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t2_g2_g1

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0007b401) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0007b401) list_medium_line_x2_t2_g2_g

0x2341,	// (0x0006e517) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2341,	// (0x0006e517) list_medium_line_x2_t2_g2_t1

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007bed1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007bed1) list_medium_line_x2_t2_g2_t

0x12c4,	// (0x0006d49a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t4_g2_g1

0x7cf8,	// (0x00073ece) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7cf8,	// (0x00073ece) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007bed6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007bed6) list_medium_line_x2_t4_g2_g

0x7d0a,	// (0x00073ee0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7d0a,	// (0x00073ee0) list_medium_line_x2_t4_g2_t1

0x7d24,	// (0x00073efa) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7d24,	// (0x00073efa) list_medium_line_x2_t4_g2_t2

0x7d3a,	// (0x00073f10) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7d3a,	// (0x00073f10) list_medium_line_x2_t4_g2_t3

0x1311,	// (0x0006d4e7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007bedb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007bedb) list_medium_line_x2_t4_g2_t

0x7d4f,	// (0x00073f25) list_medium_line_t3_right_iconx2_g1

0x7b3f,	// (0x00073d15) list_medium_line_t3_right_iconx2_g2

0x7d57,	// (0x00073f2d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007bee4) list_medium_line_t3_right_iconx2_g

0x7d61,	// (0x00073f37) list_medium_line_t3_right_iconx2_t1

0x7d71,	// (0x00073f47) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007beeb) list_medium_line_t3_right_iconx2_t

0x12c4,	// (0x0006d49a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x3_t4_g4_g1

0x12d0,	// (0x0006d4a6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x3_t4_g4_g2

0x1377,	// (0x0006d54d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1377,	// (0x0006d54d) list_medium_line_x3_t4_g4_g3

0x7d7f,	// (0x00073f55) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7d7f,	// (0x00073f55) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007bef0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007bef0) list_medium_line_x3_t4_g4_g

0x7d8b,	// (0x00073f61) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7d8b,	// (0x00073f61) list_medium_line_x3_t4_g4_t1

0x7da2,	// (0x00073f78) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7da2,	// (0x00073f78) list_medium_line_x3_t4_g4_t2

0x7dbd,	// (0x00073f93) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7dbd,	// (0x00073f93) list_medium_line_x3_t4_g4_t3

0x7dd2,	// (0x00073fa8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7dd2,	// (0x00073fa8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007bef9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007bef9) list_medium_line_x3_t4_g4_t

0x7def,	// (0x00073fc5) list_single_dyc_row_text_pane_t1_ParamLimits

0x7def,	// (0x00073fc5) list_single_dyc_row_text_pane_t1

0x7e38,	// (0x0007400e) list_single_dyc_row_text_pane_t2_ParamLimits

0x7e38,	// (0x0007400e) list_single_dyc_row_text_pane_t2

0xa697,	// (0x0007686d) list_single_dyc_row_text_pane_t3_ParamLimits

0xa697,	// (0x0007686d) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007bf02) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007bf02) list_single_dyc_row_text_pane_t

0xa6bb,	// (0x00076891) list_single_dyc_row_pane_g1_ParamLimits

0xa6bb,	// (0x00076891) list_single_dyc_row_pane_g1

0xa6c7,	// (0x0007689d) list_single_dyc_row_pane_g2_ParamLimits

0xa6c7,	// (0x0007689d) list_single_dyc_row_pane_g2

0xa6d3,	// (0x000768a9) list_single_dyc_row_pane_g3_ParamLimits

0xa6d3,	// (0x000768a9) list_single_dyc_row_pane_g3

0xa6df,	// (0x000768b5) list_single_dyc_row_pane_g4_ParamLimits

0xa6df,	// (0x000768b5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007bf0f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007bf0f) list_single_dyc_row_pane_g

0xa6eb,	// (0x000768c1) list_single_dyc_row_text_pane_ParamLimits

0xa6eb,	// (0x000768c1) list_single_dyc_row_text_pane

0x93e1,	// (0x000755b7) bg_sp_fs_scroll_pane

0xe7ca,	// (0x0007a9a0) thumb_sp_fs_scroll_pane

0x6452,	// (0x00072628) list_medium_line_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_g1

0x7f6d,	// (0x00074143) list_medium_line_t1_ParamLimits

0x7f6d,	// (0x00074143) list_medium_line_t1

0x12c4,	// (0x0006d49a) list_medium_line_x2_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_g1

0x12d0,	// (0x0006d4a6) list_medium_line_x2_g2_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007bf18) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007bf18) list_medium_line_x2_g

0xa70a,	// (0x000768e0) list_medium_line_x2_t1_ParamLimits

0xa70a,	// (0x000768e0) list_medium_line_x2_t1

0x12c4,	// (0x0006d49a) list_medium_line_x3_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x3_g1

0x12d0,	// (0x0006d4a6) list_medium_line_x3_g2_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007bf18) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007bf18) list_medium_line_x3_g

0xa70a,	// (0x000768e0) list_medium_line_x3_t1_ParamLimits

0xa70a,	// (0x000768e0) list_medium_line_x3_t1

0xe7d3,	// (0x0007a9a9) thumb_sp_fs_scroll_pane_g1

0xe7dc,	// (0x0007a9b2) thumb_sp_fs_scroll_pane_g2

0xe7e5,	// (0x0007a9bb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007bf1d) thumb_sp_fs_scroll_pane_g

0xe7d3,	// (0x0007a9a9) bg_sp_fs_scroll_pane_g1

0xe7dc,	// (0x0007a9b2) bg_sp_fs_scroll_pane_g2

0xe7e5,	// (0x0007a9bb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007bf1d) bg_sp_fs_scroll_pane_g

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x12c4,	// (0x0006d49a) list_medium_line_x2_t3_g4_g1

0x136b,	// (0x0006d541) list_medium_line_x2_t3_g4_g2_ParamLimits

0x136b,	// (0x0006d541) list_medium_line_x2_t3_g4_g2

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x12d0,	// (0x0006d4a6) list_medium_line_x2_t3_g4_g3

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x12dc,	// (0x0006d4b2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0007b47d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0007b47d) list_medium_line_x2_t3_g4_g

0x7f82,	// (0x00074158) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7f82,	// (0x00074158) list_medium_line_x2_t3_g4_t1

0x7f9c,	// (0x00074172) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7f9c,	// (0x00074172) list_medium_line_x2_t3_g4_t2

0x1311,	// (0x0006d4e7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1311,	// (0x0006d4e7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007bf24) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007bf24) list_medium_line_x2_t3_g4_t

0x6452,	// (0x00072628) list_medium_line_g2_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_g2_g1

0x645e,	// (0x00072634) list_medium_line_g2_g2_ParamLimits

0x645e,	// (0x00072634) list_medium_line_g2_g2

0x0001,

0xf9fc,	// (0x0007bbd2) list_medium_line_g2_g_ParamLimits

0xf9fc,	// (0x0007bbd2) list_medium_line_g2_g

0x7fb6,	// (0x0007418c) list_medium_line_g2_t1_ParamLimits

0x7fb6,	// (0x0007418c) list_medium_line_g2_t1

0x6452,	// (0x00072628) list_medium_line_t3_g2_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t3_g2_g1

0x645e,	// (0x00072634) list_medium_line_t3_g2_g2_ParamLimits

0x645e,	// (0x00072634) list_medium_line_t3_g2_g2

0x0001,

0xf9fc,	// (0x0007bbd2) list_medium_line_t3_g2_g_ParamLimits

0xf9fc,	// (0x0007bbd2) list_medium_line_t3_g2_g

0x7fcb,	// (0x000741a1) list_medium_line_t3_g2_t1_ParamLimits

0x7fcb,	// (0x000741a1) list_medium_line_t3_g2_t1

0x7fe5,	// (0x000741bb) list_medium_line_t3_g2_t2_ParamLimits

0x7fe5,	// (0x000741bb) list_medium_line_t3_g2_t2

0x7ffb,	// (0x000741d1) list_medium_line_t3_g2_t3_ParamLimits

0x7ffb,	// (0x000741d1) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007bf2b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007bf2b) list_medium_line_t3_g2_t

0x7b3f,	// (0x00073d15) list_medium_line_right_icon_g1

0x8015,	// (0x000741eb) list_medium_line_right_icon_t1

0x6452,	// (0x00072628) list_medium_line_t2_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t2_g1

0x8023,	// (0x000741f9) list_medium_line_t2_t1_ParamLimits

0x8023,	// (0x000741f9) list_medium_line_t2_t1

0x803d,	// (0x00074213) list_medium_line_t2_t2_ParamLimits

0x803d,	// (0x00074213) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007bf32) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007bf32) list_medium_line_t2_t

0x6452,	// (0x00072628) list_medium_line_t3_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t3_g1

0x8056,	// (0x0007422c) list_medium_line_t3_t1_ParamLimits

0x8056,	// (0x0007422c) list_medium_line_t3_t1

0x8070,	// (0x00074246) list_medium_line_t3_t2_ParamLimits

0x8070,	// (0x00074246) list_medium_line_t3_t2

0x8086,	// (0x0007425c) list_medium_line_t3_t3_ParamLimits

0x8086,	// (0x0007425c) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007bf37) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007bf37) list_medium_line_t3_t

0x6452,	// (0x00072628) list_medium_line_g3_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_g3_g1

0x809b,	// (0x00074271) list_medium_line_g3_g2_ParamLimits

0x809b,	// (0x00074271) list_medium_line_g3_g2

0x645e,	// (0x00072634) list_medium_line_g3_g3_ParamLimits

0x645e,	// (0x00072634) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007bf3e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007bf3e) list_medium_line_g3_g

0x80a7,	// (0x0007427d) list_medium_line_g3_t1_ParamLimits

0x80a7,	// (0x0007427d) list_medium_line_g3_t1

0x6452,	// (0x00072628) list_medium_line_t2_g3_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t2_g3_g1

0x809b,	// (0x00074271) list_medium_line_t2_g3_g2_ParamLimits

0x809b,	// (0x00074271) list_medium_line_t2_g3_g2

0x645e,	// (0x00072634) list_medium_line_t2_g3_g3_ParamLimits

0x645e,	// (0x00072634) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007bf3e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007bf3e) list_medium_line_t2_g3_g

0x80bc,	// (0x00074292) list_medium_line_t2_g3_t1_ParamLimits

0x80bc,	// (0x00074292) list_medium_line_t2_g3_t1

0x80d6,	// (0x000742ac) list_medium_line_t2_g3_t2_ParamLimits

0x80d6,	// (0x000742ac) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007bf45) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007bf45) list_medium_line_t2_g3_t

0x6452,	// (0x00072628) list_medium_line_t3_g3_g1_ParamLimits

0x6452,	// (0x00072628) list_medium_line_t3_g3_g1

0x809b,	// (0x00074271) list_medium_line_t3_g3_g2_ParamLimits

0x809b,	// (0x00074271) list_medium_line_t3_g3_g2

0x645e,	// (0x00072634) list_medium_line_t3_g3_g3_ParamLimits

0x645e,	// (0x00072634) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007bf3e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007bf3e) list_medium_line_t3_g3_g

0x80f4,	// (0x000742ca) list_medium_line_t3_g3_t1_ParamLimits

0x80f4,	// (0x000742ca) list_medium_line_t3_g3_t1

0x810d,	// (0x000742e3) list_medium_line_t3_g3_t2_ParamLimits

0x810d,	// (0x000742e3) list_medium_line_t3_g3_t2

0x8123,	// (0x000742f9) list_medium_line_t3_g3_t3_ParamLimits

0x8123,	// (0x000742f9) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007bf4a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007bf4a) list_medium_line_t3_g3_t

0x7d4f,	// (0x00073f25) list_medium_line_right_iconx2_g1

0x7b3f,	// (0x00073d15) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007bf51) list_medium_line_right_iconx2_g

0x813d,	// (0x00074313) list_medium_line_right_iconx2_t1

0x7d4f,	// (0x00073f25) list_medium_line_t2_right_iconx2_g1

0x7b3f,	// (0x00073d15) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007bf51) list_medium_line_t2_right_iconx2_g

0x814b,	// (0x00074321) list_medium_line_t2_right_iconx2_t1

0x815b,	// (0x00074331) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007bf56) list_medium_line_t2_right_iconx2_t

0x816d,	// (0x00074343) list_medium_line_x4_t4_t1

0x817b,	// (0x00074351) list_medium_line_x4_t4_t2

0x818b,	// (0x00074361) list_medium_line_x4_t4_t3

0x819b,	// (0x00074371) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007bf5b) list_medium_line_x4_t4_t

0x81ee,	// (0x000743c4) tport_appsw_pane_ParamLimits

0x81ee,	// (0x000743c4) tport_appsw_pane

0x8206,	// (0x000743dc) tport_contact_pane_ParamLimits

0x8206,	// (0x000743dc) tport_contact_pane

0x821e,	// (0x000743f4) tport_listscroll_pane_ParamLimits

0x821e,	// (0x000743f4) tport_listscroll_pane

0x8238,	// (0x0007440e) cell_tport_appsw_pane_ParamLimits

0x8238,	// (0x0007440e) cell_tport_appsw_pane

0xd6b0,	// (0x00079886) tport_appsw_pane_g1_ParamLimits

0xd6b0,	// (0x00079886) tport_appsw_pane_g1

0xe7ee,	// (0x0007a9c4) tport_contact_pane_g1

0xe7f7,	// (0x0007a9cd) tport_contact_pane_t1

0xe805,	// (0x0007a9db) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007bf64) tport_contact_pane_t

0xe813,	// (0x0007a9e9) list_tport_pane

0xe81c,	// (0x0007a9f2) scroll_pane_cp_030

0x8280,	// (0x00074456) cell_tport_appsw_pane_g1

0x8290,	// (0x00074466) cell_tport_appsw_pane_t1

0x829e,	// (0x00074474) grid_highlight_pane_cp019

0x82a6,	// (0x0007447c) list_tport_double_graphic_pane_ParamLimits

0x82a6,	// (0x0007447c) list_tport_double_graphic_pane

0xa475,	// (0x0007664b) list_highlight_pane_cp023_ParamLimits

0xa475,	// (0x0007664b) list_highlight_pane_cp023

0x82b3,	// (0x00074489) list_tport_double_graphic_pane_g1_ParamLimits

0x82b3,	// (0x00074489) list_tport_double_graphic_pane_g1

0x82c0,	// (0x00074496) list_tport_double_graphic_pane_t1_ParamLimits

0x82c0,	// (0x00074496) list_tport_double_graphic_pane_t1

0x82d5,	// (0x000744ab) list_tport_double_graphic_pane_t2_ParamLimits

0x82d5,	// (0x000744ab) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007bf70) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007bf70) list_tport_double_graphic_pane_t

0x93e1,	// (0x000755b7) main_cale_note_pane

0x5c01,	// (0x00071dd7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c01,	// (0x00071dd7) cell_vitu2_function_top_wide_pane_cp01

0x76e7,	// (0x000738bd) wait_bar_pane_cp05_ParamLimits

0xa475,	// (0x0007664b) listscroll_cmail_pane

0xe825,	// (0x0007a9fb) list_cmail_pane

0x82e7,	// (0x000744bd) list_cmail_body_pane

0x82fc,	// (0x000744d2) list_single_cmail_header_caption_pane

0x8313,	// (0x000744e9) list_single_cmail_header_detail_pane_ParamLimits

0x8313,	// (0x000744e9) list_single_cmail_header_detail_pane

0xe835,	// (0x0007aa0b) list_single_cmail_header_caption_pane_t1

0x833d,	// (0x00074513) list_single_cmail_header_detail_pane_g1_ParamLimits

0x833d,	// (0x00074513) list_single_cmail_header_detail_pane_g1

0xa720,	// (0x000768f6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa720,	// (0x000768f6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007bf75) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007bf75) list_single_cmail_header_detail_pane_g

0xa72c,	// (0x00076902) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa72c,	// (0x00076902) list_single_cmail_header_detail_pane_t1

0xa78c,	// (0x00076962) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa78c,	// (0x00076962) list_single_cmail_header_editor_pane_bg

0xe2ef,	// (0x0007a4c5) list_cmail_body_pane_g1

0xe859,	// (0x0007aa2f) list_cmail_body_pane_t1

0xd6d0,	// (0x000798a6) list_single_cmail_header_editor_pane_bg_g1

0xacde,	// (0x00076eb4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6e0,	// (0x000798b6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6d8,	// (0x000798ae) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90c,	// (0x00079ae2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd700,	// (0x000798d6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6f0,	// (0x000798c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6f8,	// (0x000798ce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacbe,	// (0x00076e94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8355,	// (0x0007452b) calenote_gesture_pane_ParamLimits

0x8355,	// (0x0007452b) calenote_gesture_pane

0x8375,	// (0x0007454b) calenote_window_pane_ParamLimits

0x8375,	// (0x0007454b) calenote_window_pane

0xe867,	// (0x0007aa3d) popup_note_window_cp01

0x8391,	// (0x00074567) calenote_swipe_1_pane_ParamLimits

0x8391,	// (0x00074567) calenote_swipe_1_pane

0x7b25,	// (0x00073cfb) calenote_swipe_2_pane_ParamLimits

0x7b25,	// (0x00073cfb) calenote_swipe_2_pane

0xe65c,	// (0x0007a832) calenote_swipe_1_pane_g1_ParamLimits

0xe65c,	// (0x0007a832) calenote_swipe_1_pane_g1

0xe669,	// (0x0007a83f) calenote_swipe_1_pane_g2_ParamLimits

0xe669,	// (0x0007a83f) calenote_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0007be95) calenote_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0007be95) calenote_swipe_1_pane_g

0xe879,	// (0x0007aa4f) calenote_swipe_1_pane_t1_ParamLimits

0xe879,	// (0x0007aa4f) calenote_swipe_1_pane_t1

0xe65c,	// (0x0007a832) calenote_swipe_2_pane_g1_ParamLimits

0xe65c,	// (0x0007a832) calenote_swipe_2_pane_g1

0xe898,	// (0x0007aa6e) calenote_swipe_2_pane_g2_ParamLimits

0xe898,	// (0x0007aa6e) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007bf81) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007bf81) calenote_swipe_2_pane_g

0xe8a4,	// (0x0007aa7a) calenote_swipe_2_pane_t1_ParamLimits

0xe8a4,	// (0x0007aa7a) calenote_swipe_2_pane_t1

0x93e1,	// (0x000755b7) main_mup_navstr_pane

0x483e,	// (0x00070a14) main_mup3_pane_t7_ParamLimits

0x483e,	// (0x00070a14) main_mup3_pane_t7

0x9ad8,	// (0x00075cae) main_mp4_pane_g6_ParamLimits

0x9ad8,	// (0x00075cae) main_mp4_pane_g6

0x9c9a,	// (0x00075e70) main_image3_pane_t4_ParamLimits

0x9c9a,	// (0x00075e70) main_image3_pane_t4

0x83a6,	// (0x0007457c) popup_navstr_preview_pane_ParamLimits

0x83a6,	// (0x0007457c) popup_navstr_preview_pane

0x83ba,	// (0x00074590) scroll_navstr_pane_ParamLimits

0x83ba,	// (0x00074590) scroll_navstr_pane

0x93e1,	// (0x000755b7) bg_popup_preview_window_pane_cp04

0xe8cb,	// (0x0007aaa1) popup_navstr_preview_pane_t1

0x83ce,	// (0x000745a4) scroll_navstr_pane_g1_ParamLimits

0x83ce,	// (0x000745a4) scroll_navstr_pane_g1

0x83e2,	// (0x000745b8) scroll_navstr_pane_t1_ParamLimits

0x83e2,	// (0x000745b8) scroll_navstr_pane_t1

0xe870,	// (0x0007aa46) bg_button_pane_cp014

0xe870,	// (0x0007aa46) bg_button_pane_cp030

0x79fe,	// (0x00073bd4) list_double_fisheye_pane_g4_ParamLimits

0x79fe,	// (0x00073bd4) list_double_fisheye_pane_g4

0x7a0a,	// (0x00073be0) list_double_fisheye_pane_g5_ParamLimits

0x7a0a,	// (0x00073be0) list_double_fisheye_pane_g5

0xd42b,	// (0x00079601) sp_fs_scroll_pane_cp03

0xe77c,	// (0x0007a952) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe788,	// (0x0007a95e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcdc,	// (0x0007beb2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7bf9,	// (0x00073dcf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe82d,	// (0x0007aa03) sp_fs_scroll_pane_cp02

0xa9c4,	// (0x00076b9a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9c4,	// (0x00076b9a) popup_sp_fs_calendar_preview_list_single_pane

0x93e1,	// (0x000755b7) main_cam6_pano_pane

0x9409,	// (0x000755df) main_mup3_pane_ParamLimits

0x93e1,	// (0x000755b7) main_phacti_pane

0x75ba,	// (0x00073790) bg_button_pane_cp11

0x75d4,	// (0x000737aa) main_mobtv_info_pane_g2_ParamLimits

0x75d4,	// (0x000737aa) main_mobtv_info_pane_g2

0x0001,

0xfc3c,	// (0x0007be12) main_mobtv_info_pane_g_ParamLimits

0xfc3c,	// (0x0007be12) main_mobtv_info_pane_g

0x77b1,	// (0x00073987) sc_clock_pane_t5_ParamLimits

0x77b1,	// (0x00073987) sc_clock_pane_t5

0x7879,	// (0x00073a4f) main_radioblah_pane_g1_ParamLimits

0xe58d,	// (0x0007a763) main_radioblah_pane_t3_ParamLimits

0xe58d,	// (0x0007a763) main_radioblah_pane_t3

0xe5a5,	// (0x0007a77b) main_radioblah_pane_t4_ParamLimits

0xe5a5,	// (0x0007a77b) main_radioblah_pane_t4

0x78a1,	// (0x00073a77) main_radioblah_text_pane_ParamLimits

0x78a1,	// (0x00073a77) main_radioblah_text_pane

0x78b3,	// (0x00073a89) main_radioblah_info_pane_g1_ParamLimits

0x794c,	// (0x00073b22) main_radioblah_info_pane_t4_ParamLimits

0x794c,	// (0x00073b22) main_radioblah_info_pane_t4

0xa475,	// (0x0007664b) main_sp_fs_calendar_pane

0x83f9,	// (0x000745cf) main_phacti_pane_g1

0x8401,	// (0x000745d7) phacti_note_pane_ParamLimits

0x8401,	// (0x000745d7) phacti_note_pane

0xe8e2,	// (0x0007aab8) phacti_term_pane_ParamLimits

0xe8e2,	// (0x0007aab8) phacti_term_pane

0xe8f7,	// (0x0007aacd) phacti_note_pane_t1_ParamLimits

0xe8f7,	// (0x0007aacd) phacti_note_pane_t1

0xa7a3,	// (0x00076979) phacti_term_pane_g1

0xa7ab,	// (0x00076981) phacti_term_pane_t1_ParamLimits

0xa7ab,	// (0x00076981) phacti_term_pane_t1

0xe90e,	// (0x0007aae4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe916,	// (0x0007aaec) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007bf8b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91e,	// (0x0007aaf4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91e,	// (0x0007aaf4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe934,	// (0x0007ab0a) aid_popup_sp_fs_bg_corner_pane

0xcd13,	// (0x00078ee9) popup_sp_fs_calendar_preview_bg_pane_g1

0x93e1,	// (0x000755b7) popup_sp_fs_calendar_preview_bg_pane

0x114d,	// (0x0006d323) popup_sp_fs_calendar_preview_list_pane

0xc90b,	// (0x00078ae1) bg_main_sp_fs_cale_pane_ParamLimits

0xc90b,	// (0x00078ae1) bg_main_sp_fs_cale_pane

0xa7de,	// (0x000769b4) listscroll_cale_mrui_pane_ParamLimits

0xa7de,	// (0x000769b4) listscroll_cale_mrui_pane

0xa7f3,	// (0x000769c9) listscroll_sp_fs_schedule_track_pane

0xa7fc,	// (0x000769d2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7fc,	// (0x000769d2) main_sp_fs_ctrlbar_pane_cp01

0xe93c,	// (0x0007ab12) main_sp_fs_ribbon_pane

0xa80f,	// (0x000769e5) popup_sp_fs_cale_preview_window

0x8476,	// (0x0007464c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8476,	// (0x0007464c) list_single_sp_fs_schedule_track_pane

0xa475,	// (0x0007664b) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa475,	// (0x0007664b) bg_sp_fs_highlight_list_pane_cp03

0x848a,	// (0x00074660) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x848a,	// (0x00074660) list_single_sp_fs_schedule_track_pane_g1

0x8496,	// (0x0007466c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8496,	// (0x0007466c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007bf90) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007bf90) list_single_sp_fs_schedule_track_pane_g

0x84a2,	// (0x00074678) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x84a2,	// (0x00074678) list_single_sp_fs_schedule_track_pane_t1

0x84bc,	// (0x00074692) sp_fs_schedule_track_pane_ParamLimits

0x84bc,	// (0x00074692) sp_fs_schedule_track_pane

0xe944,	// (0x0007ab1a) sp_fs_schedule_track_pane_g1

0xe94c,	// (0x0007ab22) sp_fs_schedule_track_pane_g2

0xe954,	// (0x0007ab2a) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x0007ab40) sp_fs_schedule_track_pane_g4

0xe972,	// (0x0007ab48) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007bf95) sp_fs_schedule_track_pane_g

0xd6d0,	// (0x000798a6) bg_sp_fs_schedule_viewer_highlight_g1

0xacde,	// (0x00076eb4) bg_sp_fs_schedule_viewer_highlight_g2

0xd6d8,	// (0x000798ae) bg_sp_fs_schedule_viewer_highlight_g3

0xd6e0,	// (0x000798b6) bg_sp_fs_schedule_viewer_highlight_g4

0xd90c,	// (0x00079ae2) bg_sp_fs_schedule_viewer_highlight_g5

0xd6f0,	// (0x000798c6) bg_sp_fs_schedule_viewer_highlight_g6

0xd6f8,	// (0x000798ce) bg_sp_fs_schedule_viewer_highlight_g7

0xd700,	// (0x000798d6) bg_sp_fs_schedule_viewer_highlight_g8

0xacbe,	// (0x00076e94) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007bfa0) bg_sp_fs_schedule_viewer_highlight_g

0x93e1,	// (0x000755b7) bg_main_sp_fs_ribbon_pane

0x84cd,	// (0x000746a3) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0007ab50) main_sp_fs_ribbon_pane_t1

0x84d6,	// (0x000746ac) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x0007ab5f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007bfb3) main_sp_fs_ribbon_pane_t

0xe998,	// (0x0007ab6e) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x0007ab76) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x0007ab7f) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x0007ab88) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007bfba) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x0007ab90) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x0007ab99) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x0007aba2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007bfc1) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x0007abab) list_cale_mrui_pane

0x84e5,	// (0x000746bb) sp_fs_scroll_pane_cp07_ParamLimits

0x84e5,	// (0x000746bb) sp_fs_scroll_pane_cp07

0x8501,	// (0x000746d7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8501,	// (0x000746d7) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x0007abb8) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x0007abc0) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x0007abc8) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x0007abc8) sp_fs_scroll_pane_cp06

0xcd13,	// (0x00078ee9) bgmain_sp_fs_calendar_pane_g1

0x8511,	// (0x000746e7) list_single_cale_mrui_pane_ParamLimits

0x8511,	// (0x000746e7) list_single_cale_mrui_pane

0xa821,	// (0x000769f7) list_single_cale_mrui_row_pane_ParamLimits

0xa821,	// (0x000769f7) list_single_cale_mrui_row_pane

0xa82e,	// (0x00076a04) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa82e,	// (0x00076a04) list_single_cale_mrui_row_pane_g1

0xa866,	// (0x00076a3c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa866,	// (0x00076a3c) list_single_cale_mrui_row_pane_t1

0x8533,	// (0x00074709) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8533,	// (0x00074709) list_single_cale_mrui_row_pane_t2

0xa878,	// (0x00076a4e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa878,	// (0x00076a4e) list_single_cale_mrui_row_pane_t3

0xa8a7,	// (0x00076a7d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8a7,	// (0x00076a7d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007bfcf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007bfcf) list_single_cale_mrui_row_pane_t

0x859b,	// (0x00074771) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x859b,	// (0x00074771) list_single_cmail_header_editor_pane_bg_cp01

0x85c1,	// (0x00074797) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x85c1,	// (0x00074797) list_single_cmail_header_editor_pane_bg_cp02

0x85e1,	// (0x000747b7) main_radioblah_text_pane_t1_ParamLimits

0x85e1,	// (0x000747b7) main_radioblah_text_pane_t1

0xea11,	// (0x0007abe7) cam6_indi_pane_cp01

0xea19,	// (0x0007abef) cam6_mode_pane_cp01

0xea21,	// (0x0007abf7) cam6_pano_pane

0xea2a,	// (0x0007ac00) cam6_zoom_pane_cp01

0xea32,	// (0x0007ac08) cam6_pano_image_pane

0xea3d,	// (0x0007ac13) cam6_pano_pane_g1

0xe2ef,	// (0x0007a4c5) cam6_pano_pane_g2

0xea46,	// (0x0007ac1c) cam6_pano_pane_g3

0xea4f,	// (0x0007ac25) cam6_pano_pane_g4

0xd2b5,	// (0x0007948b) cam6_pano_pane_g5

0xea58,	// (0x0007ac2e) cam6_pano_pane_g6

0xea62,	// (0x0007ac38) cam6_pano_pane_g7

0xea6a,	// (0x0007ac40) cam6_pano_pane_g8

0xea73,	// (0x0007ac49) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007bfd8) cam6_pano_pane_g

0x93e1,	// (0x000755b7) main_browser_tag_pane

0xe8c3,	// (0x0007aa99) grid_navstr_albumart_pane

0xea7e,	// (0x0007ac54) cell_navstr_albumart_pane_ParamLimits

0xea7e,	// (0x0007ac54) cell_navstr_albumart_pane

0xea9e,	// (0x0007ac74) cell_navstr_albumart_pane_g1

0xc6dc,	// (0x000788b2) cell_navstr_albumart_pane_g2

0xc6ec,	// (0x000788c2) cell_navstr_albumart_pane_g3

0xc6e4,	// (0x000788ba) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007bfeb) cell_navstr_albumart_pane_g

0x85fc,	// (0x000747d2) bt_list_pane_ParamLimits

0x85fc,	// (0x000747d2) bt_list_pane

0x8610,	// (0x000747e6) bt_list_pane_t1

0x861f,	// (0x000747f5) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007bff4) bt_list_pane_t

0x93e1,	// (0x000755b7) main_cale_prevew_pane

0x862e,	// (0x00074804) popup_cale_preview_window_ParamLimits

0x862e,	// (0x00074804) popup_cale_preview_window

0xa475,	// (0x0007664b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa475,	// (0x0007664b) bg_popup_preview_window_pane_cp05

0xeaa6,	// (0x0007ac7c) list_cale_preview_pane_ParamLimits

0xeaa6,	// (0x0007ac7c) list_cale_preview_pane

0x8647,	// (0x0007481d) list_double_cale_preview_pane_ParamLimits

0x8647,	// (0x0007481d) list_double_cale_preview_pane

0xd708,	// (0x000798de) list_single_cale_preview_pane_ParamLimits

0xd708,	// (0x000798de) list_single_cale_preview_pane

0x8659,	// (0x0007482f) list_single_cale_preview_pane_g1

0x8661,	// (0x00074837) list_single_cale_preview_pane_t1_ParamLimits

0x8661,	// (0x00074837) list_single_cale_preview_pane_t1

0x8676,	// (0x0007484c) list_double_cale_preview_pane_g1

0x867e,	// (0x00074854) list_double_cale_preview_pane_t1_ParamLimits

0x867e,	// (0x00074854) list_double_cale_preview_pane_t1

0x8693,	// (0x00074869) list_double_cale_preview_pane_t2_ParamLimits

0x8693,	// (0x00074869) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007bff9) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007bff9) list_double_cale_preview_pane_t

0x93e1,	// (0x000755b7) main_ezdial_pane

0xa475,	// (0x0007664b) main_sp_fs_email_pane_ParamLimits

0x7b69,	// (0x00073d3f) cmail_ddmenu_btn01_pane_ParamLimits

0x7b69,	// (0x00073d3f) cmail_ddmenu_btn01_pane

0x7b7c,	// (0x00073d52) cmail_ddmenu_btn02_pane_ParamLimits

0x7b7c,	// (0x00073d52) cmail_ddmenu_btn02_pane

0x7b9f,	// (0x00073d75) cmail_ddmenu_btn03_pane_ParamLimits

0x7b9f,	// (0x00073d75) cmail_ddmenu_btn03_pane

0x7c38,	// (0x00073e0e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7c5c,	// (0x00073e32) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x82e7,	// (0x000744bd) list_cmail_body_pane_ParamLimits

0xe843,	// (0x0007aa19) bg_button_pane_cp12

0xe84c,	// (0x0007aa22) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84c,	// (0x0007aa22) list_single_cmail_header_detail_pane_g3

0xa768,	// (0x0007693e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa768,	// (0x0007693e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007bf7c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007bf7c) list_single_cmail_header_detail_pane_t

0xa7c0,	// (0x00076996) phacti_term_pane_t2_ParamLimits

0xa7c0,	// (0x00076996) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007bf86) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007bf86) phacti_term_pane_t

0xeab2,	// (0x0007ac88) aid_size_list_single_double

0x86ab,	// (0x00074881) popup_ezdial_listscroll_window

0x86c7,	// (0x0007489d) popup_number_entry_window_cp01

0xaa85,	// (0x00076c5b) bg_popup_call_pane_cp09

0xeabe,	// (0x0007ac94) ezdial_list_pane

0xeac6,	// (0x0007ac9c) scroll_pane_cp23

0xc90b,	// (0x00078ae1) bg_button_pane_cp028_ParamLimits

0xc90b,	// (0x00078ae1) bg_button_pane_cp028

0x86d5,	// (0x000748ab) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x86d5,	// (0x000748ab) cmail_ddmenu_btn01_pane_g1

0x86e1,	// (0x000748b7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x86e1,	// (0x000748b7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007bffe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007bffe) cmail_ddmenu_btn01_pane_g

0xeace,	// (0x0007aca4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeace,	// (0x0007aca4) cmail_ddmenu_btn01_pane_t1

0xc90b,	// (0x00078ae1) bg_button_pane_cp029_ParamLimits

0xc90b,	// (0x00078ae1) bg_button_pane_cp029

0x86ed,	// (0x000748c3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x86ed,	// (0x000748c3) cmail_ddmenu_btn02_pane_g1

0x8705,	// (0x000748db) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8705,	// (0x000748db) cmail_ddmenu_btn02_pane_t1

0xa475,	// (0x0007664b) bg_button_pane_cp031_ParamLimits

0xa475,	// (0x0007664b) bg_button_pane_cp031

0x86ed,	// (0x000748c3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x86ed,	// (0x000748c3) cmail_ddmenu_btn03_pane_g1

0x8705,	// (0x000748db) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8705,	// (0x000748db) cmail_ddmenu_btn03_pane_t1

0x53e7,	// (0x000715bd) cell_dialer2_keypad_pane_t1_ParamLimits

0x5401,	// (0x000715d7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5401,	// (0x000715d7) cell_dialer2_keypad_pane_t1_copy1

0x73cf,	// (0x000735a5) ncimui_group_button_pane

0xa475,	// (0x0007664b) main_sp_fs_calendar_pane_ParamLimits

0x82fc,	// (0x000744d2) list_single_cmail_header_caption_pane_ParamLimits

0xa7d5,	// (0x000769ab) aid_recal_txt_sm_pane

0x93e1,	// (0x000755b7) mian_recal_day_pane

0xa80f,	// (0x000769e5) popup_sp_fs_cale_preview_window_ParamLimits

0xeae3,	// (0x0007acb9) list_recal_day_pane

0xa8f1,	// (0x00076ac7) list_single_recal_day_pane_ParamLimits

0xa8f1,	// (0x00076ac7) list_single_recal_day_pane

0xeb0a,	// (0x0007ace0) list_single_recal_day_pane_g1_ParamLimits

0xeb0a,	// (0x0007ace0) list_single_recal_day_pane_g1

0xa903,	// (0x00076ad9) list_single_recal_day_pane_g2_ParamLimits

0xa903,	// (0x00076ad9) list_single_recal_day_pane_g2

0xa90f,	// (0x00076ae5) list_single_recal_day_pane_g3_ParamLimits

0xa90f,	// (0x00076ae5) list_single_recal_day_pane_g3

0x8729,	// (0x000748ff) list_single_recal_day_pane_g4_ParamLimits

0x8729,	// (0x000748ff) list_single_recal_day_pane_g4

0xa91b,	// (0x00076af1) list_single_recal_day_pane_g5_ParamLimits

0xa91b,	// (0x00076af1) list_single_recal_day_pane_g5

0xa927,	// (0x00076afd) list_single_recal_day_pane_g6_ParamLimits

0xa927,	// (0x00076afd) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007c00d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007c00d) list_single_recal_day_pane_g

0xa93b,	// (0x00076b11) list_single_recal_day_pane_t1

0xa94d,	// (0x00076b23) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007c018) list_single_recal_day_pane_t

0x8741,	// (0x00074917) ncimui_query_button_pane_ParamLimits

0x8741,	// (0x00074917) ncimui_query_button_pane

0x8751,	// (0x00074927) ncimui_query_button_pane_t1_ParamLimits

0x8751,	// (0x00074927) ncimui_query_button_pane_t1

0xeb16,	// (0x0007acec) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x0007acec) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007c01d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007c01d) ncimui_query_button_pane_t

0x8764,	// (0x0007493a) query_button_pane_ParamLimits

0x8764,	// (0x0007493a) query_button_pane

0x93e1,	// (0x000755b7) bg_button_pane_cp0028

0xeb29,	// (0x0007acff) query_button_pane_t1

0x3483,	// (0x0006f659) main_tport_pane_ParamLimits

0x81ab,	// (0x00074381) bg_popup_window_pane_cp01_ParamLimits

0x81ab,	// (0x00074381) bg_popup_window_pane_cp01

0x81c6,	// (0x0007439c) heading_pane_cp08_ParamLimits

0x81c6,	// (0x0007439c) heading_pane_cp08

0x81d9,	// (0x000743af) heading_pane_cp07_ParamLimits

0x81d9,	// (0x000743af) heading_pane_cp07

0x8280,	// (0x00074456) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007bf69) cell_tport_appsw_pane_g

0xa3f4,	// (0x000765ca) input_candi_list_open_g1

0xaea1,	// (0x00077077) list_cale_time_pane_g6_ParamLimits

0xaea1,	// (0x00077077) list_cale_time_pane_g6

0x424b,	// (0x00070421) aid_size_touch_calib_1_ParamLimits

0x424b,	// (0x00070421) aid_size_touch_calib_1

0x425d,	// (0x00070433) aid_size_touch_calib_2_ParamLimits

0x425d,	// (0x00070433) aid_size_touch_calib_2

0x4275,	// (0x0007044b) aid_size_touch_calib_3_ParamLimits

0x4275,	// (0x0007044b) aid_size_touch_calib_3

0x4293,	// (0x00070469) aid_size_touch_calib_4_ParamLimits

0x4293,	// (0x00070469) aid_size_touch_calib_4

0x42ab,	// (0x00070481) main_touch_calib_button_group_pane_ParamLimits

0x42ab,	// (0x00070481) main_touch_calib_button_group_pane

0x42c3,	// (0x00070499) main_touch_calib_pane_g1_ParamLimits

0x42d5,	// (0x000704ab) main_touch_calib_pane_g2_ParamLimits

0x42e7,	// (0x000704bd) main_touch_calib_pane_g3_ParamLimits

0x42f9,	// (0x000704cf) main_touch_calib_pane_g4_ParamLimits

0xf749,	// (0x0007b91f) main_touch_calib_pane_g_ParamLimits

0x430b,	// (0x000704e1) main_touch_calib_pane_t1_ParamLimits

0x4325,	// (0x000704fb) main_touch_calib_pane_t2_ParamLimits

0x433f,	// (0x00070515) main_touch_calib_pane_t3_ParamLimits

0x4353,	// (0x00070529) main_touch_calib_pane_t4_ParamLimits

0x4367,	// (0x0007053d) main_touch_calib_pane_t5_ParamLimits

0xf752,	// (0x0007b928) main_touch_calib_pane_t_ParamLimits

0xd058,	// (0x0007922e) list_single_fp_cale_pane_g3_ParamLimits

0xd058,	// (0x0007922e) list_single_fp_cale_pane_g3

0x9409,	// (0x000755df) bg_button_pane_cp012_ParamLimits

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp03_ParamLimits

0x6408,	// (0x000725de) cell_vitu2_function_top_pane_g1_ParamLimits

0x9409,	// (0x000755df) bg_vkb2_func_pane_cp04_ParamLimits

0x735a,	// (0x00073530) main_ncimui_button_group_pane_ParamLimits

0x735a,	// (0x00073530) main_ncimui_button_group_pane

0x73ba,	// (0x00073590) main_ncimui_pane_t3_ParamLimits

0x73ba,	// (0x00073590) main_ncimui_pane_t3

0xe8d9,	// (0x0007aaaf) phacti_button_group_pane

0xeab2,	// (0x0007ac88) aid_size_list_single_double_ParamLimits

0x86ab,	// (0x00074881) popup_ezdial_listscroll_window_ParamLimits

0x86c7,	// (0x0007489d) popup_number_entry_window_cp01_ParamLimits

0x8777,	// (0x0007494d) phacti_button_pane_ParamLimits

0x8777,	// (0x0007494d) phacti_button_pane

0x93e1,	// (0x000755b7) bg_button_pane_cp14

0xeb37,	// (0x0007ad0d) phacti_button_pane_t1

0x8788,	// (0x0007495e) main_touch_calib_button_pane_ParamLimits

0x8788,	// (0x0007495e) main_touch_calib_button_pane

0xa2f0,	// (0x000764c6) bg_button_pane_cp18_ParamLimits

0xa2f0,	// (0x000764c6) bg_button_pane_cp18

0xeb45,	// (0x0007ad1b) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0007ad1b) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0007ad31) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0007ad31) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007c022) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007c022) main_touch_calib_button_pane_t

0x93e1,	// (0x000755b7) cell_ncimui_button_pane

0x93e1,	// (0x000755b7) bg_button_pane_cp032

0xeb79,	// (0x0007ad4f) cell_ncimui_button_pane_t1

0x9c7a,	// (0x00075e50) image3_infobar_pane_ParamLimits

0x9c7a,	// (0x00075e50) image3_infobar_pane

0x77dd,	// (0x000739b3) fs_bigclock_status_pane_ParamLimits

0x77dd,	// (0x000739b3) fs_bigclock_status_pane

0x77ea,	// (0x000739c0) main_fs_bigclock_clock_pane_ParamLimits

0x77ea,	// (0x000739c0) main_fs_bigclock_clock_pane

0x7808,	// (0x000739de) main_fs_bigclock_indi_pane_ParamLimits

0x7808,	// (0x000739de) main_fs_bigclock_indi_pane

0x783a,	// (0x00073a10) main_fs_bigclock_swipe_pane_ParamLimits

0x783a,	// (0x00073a10) main_fs_bigclock_swipe_pane

0x93e1,	// (0x000755b7) main_fs_clock_dumped_data

0xe3fc,	// (0x0007a5d2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3fc,	// (0x0007a5d2) list_single_fs_bigclock_indicator_pane_g1

0xe418,	// (0x0007a5ee) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe418,	// (0x0007a5ee) list_single_fs_bigclock_indicator_pane_g2

0xe432,	// (0x0007a608) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe432,	// (0x0007a608) list_single_fs_bigclock_indicator_pane_g3

0xe44c,	// (0x0007a622) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe44c,	// (0x0007a622) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc70,	// (0x0007be46) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc70,	// (0x0007be46) list_single_fs_bigclock_indicator_pane_g

0xe477,	// (0x0007a64d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe477,	// (0x0007a64d) list_single_fs_bigclock_indicator_pane_t1

0xe49f,	// (0x0007a675) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49f,	// (0x0007a675) list_single_fs_bigclock_indicator_pane_t2

0xe4c7,	// (0x0007a69d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c7,	// (0x0007a69d) list_single_fs_bigclock_indicator_pane_t3

0xe4ef,	// (0x0007a6c5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4ef,	// (0x0007a6c5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7b,	// (0x0007be51) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7b,	// (0x0007be51) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0007ad5d) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0007ad5d) image3_infobar_fav_pane

0xeb97,	// (0x0007ad6d) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0007ad6d) image3_infobar_loc_pane

0xebab,	// (0x0007ad81) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0007ad81) image3_infobar_time_pane

0xcd13,	// (0x00078ee9) image3_infobar_time_pane_g1

0xebbb,	// (0x0007ad91) image3_infobar_time_pane_t1

0xcd13,	// (0x00078ee9) image3_infobar_loc_pane_g1

0xebc9,	// (0x0007ad9f) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007c027) image3_infobar_loc_pane_g

0xebd1,	// (0x0007ada7) image3_infobar_loc_pane_t1

0xcd13,	// (0x00078ee9) image3_infobar_fav_pane_g1

0xebdf,	// (0x0007adb5) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007c02c) image3_infobar_fav_pane_g

0xebe7,	// (0x0007adbd) fs_bigclock_status_battery_pane

0xebf0,	// (0x0007adc6) fs_bigclock_status_signal_pane

0xebf9,	// (0x0007adcf) fs_bigclock_status_title_pane

0xec02,	// (0x0007add8) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0007ade1) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007c031) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0007ade9) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0007adf2) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007c036) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0007adfa) fs_bigclock_status_title_pane_t1

0x879d,	// (0x00074973) main_fs_bigclock_clock_pane_g1

0x879d,	// (0x00074973) main_fs_bigclock_clock_pane_g2

0x87ae,	// (0x00074984) main_fs_bigclock_clock_pane_g3

0x87ae,	// (0x00074984) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007c03b) main_fs_bigclock_clock_pane_g

0x87c1,	// (0x00074997) main_fs_bigclock_clock_pane_t1

0x87d7,	// (0x000749ad) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007c044) main_fs_bigclock_clock_pane_t

0xec32,	// (0x0007ae08) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x0007ae08) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x0007ae19) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x0007ae19) list_single_fs_bigclock_pane

0xec69,	// (0x0007ae3f) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x0007ae4e) list_single_fs_bigclock_pane_g1

0xec80,	// (0x0007ae56) list_single_fs_bigclock_pane_t1

0xcd13,	// (0x00078ee9) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x0007ae99) main_fs_bigclock_swipe_pane_g2

0x0001,

0x00b2,	// (0x0006c288) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x0007aea1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x0007aea1) main_fs_bigclock_swipe_pane_t1

0x2382,	// (0x0006e558) call_type_pane_ParamLimits

0x93e1,	// (0x000755b7) main_btmg_pane

0xa85a,	// (0x00076a30) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa85a,	// (0x00076a30) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007bfc8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007bfc8) list_single_cale_mrui_row_pane_g

0xa8e0,	// (0x00076ab6) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x0007acd8) list_recal_vselct_arw_up_pane

0xa8e8,	// (0x00076abe) list_recal_vselct_pane

0x8831,	// (0x00074a07) btmg_button_pane

0x883b,	// (0x00074a11) main_btmg_pane_g1

0x93e1,	// (0x000755b7) bg_button_pane_cp044

0xece8,	// (0x0007aebe) btmg_button_pane_t1

0xc8f7,	// (0x00078acd) aid_listscroll_gen

0xa475,	// (0x0007664b) main_cntbar_detail_pane

0xe825,	// (0x0007a9fb) list_cmail_folder_pane

0xd42b,	// (0x00079601) sp_fs_scroll_pane_cp03_ParamLimits

0x8845,	// (0x00074a1b) list_single_fs_dyc_pane_cp01_ParamLimits

0x8845,	// (0x00074a1b) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x0007aecc) aid_size_cmail_indent

0xa95f,	// (0x00076b35) list_single_dyc_row_pane_cp01

0x888e,	// (0x00074a64) cntbar_detail_list_pane_ParamLimits

0x888e,	// (0x00074a64) cntbar_detail_list_pane

0x88da,	// (0x00074ab0) main_cntbar_detail_cont_pane_ParamLimits

0x88da,	// (0x00074ab0) main_cntbar_detail_cont_pane

0xd42b,	// (0x00079601) scroll_pane_cp032_ParamLimits

0xd42b,	// (0x00079601) scroll_pane_cp032

0x88ee,	// (0x00074ac4) cntbar_detail_list_event_pane_ParamLimits

0x88ee,	// (0x00074ac4) cntbar_detail_list_event_pane

0x889e,	// (0x00074a74) cntbar_detail_list_shct_pane

0xad2c,	// (0x00076f02) aid_list_gen

0xecff,	// (0x0007aed5) aid_scroll

0xed08,	// (0x0007aede) aid_size_touch_scroll_bar

0x6afc,	// (0x00072cd2) aid_list_double

0xa968,	// (0x00076b3e) aid_list_single

0x6afc,	// (0x00072cd2) aid_list_single_lg

0xa971,	// (0x00076b47) aid_list_z_g_a_sm

0xa979,	// (0x00076b4f) aid_list_z_g_d

0xa981,	// (0x00076b57) aid_txt_z_prm

0x88fe,	// (0x00074ad4) aid_txt_z_prm_cp01

0x890c,	// (0x00074ae2) aid_txt_z_sec

0x891a,	// (0x00074af0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x891a,	// (0x00074af0) main_cntbar_detail_cont_pane_g1

0x892e,	// (0x00074b04) main_cntbar_detail_cont_pane_g2_ParamLimits

0x892e,	// (0x00074b04) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7a,	// (0x0007c050) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7a,	// (0x0007c050) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0007aee7) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0007aef5) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0007af03) main_cntbar_detail_cont_pane_t3

0x0002,

0x00bc,	// (0x0006c292) main_cntbar_detail_cont_pane_t

0x893e,	// (0x00074b14) cell_cntbar_detail_list_shct_pane_ParamLimits

0x893e,	// (0x00074b14) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0007af11) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0007af1a) cntbar_detail_list_shct_pane_g2

0x0001,

0x00c3,	// (0x0006c299) cntbar_detail_list_shct_pane_g

0x8952,	// (0x00074b28) cntbar_detail_list_event_pane_g1_ParamLimits

0x8952,	// (0x00074b28) cntbar_detail_list_event_pane_g1

0x895e,	// (0x00074b34) cntbar_detail_list_event_pane_g2_ParamLimits

0x895e,	// (0x00074b34) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7f,	// (0x0007c055) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7f,	// (0x0007c055) cntbar_detail_list_event_pane_g

0x89ca,	// (0x00074ba0) cntbar_detail_list_event_pane_t1_ParamLimits

0x89ca,	// (0x00074ba0) cntbar_detail_list_event_pane_t1

0x89df,	// (0x00074bb5) cntbar_detail_list_event_pane_t2_ParamLimits

0x89df,	// (0x00074bb5) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8c,	// (0x0007c062) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8c,	// (0x0007c062) cntbar_detail_list_event_pane_t

0xcd13,	// (0x00078ee9) cell_cntbar_detail_list_shct_pane_g1

0xb486,	// (0x0007765c) navi_pane_mv_g3

0xa475,	// (0x0007664b) main_cntbar_detail_pane_ParamLimits

0x93e1,	// (0x000755b7) main_notif_wgt_pane

0x9a66,	// (0x00075c3c) aid_tch_main_mp4_pane_g4

0x9c72,	// (0x00075e48) popup_slider_window_cp02

0xa8d6,	// (0x00076aac) list_recal_day_event_pane

0x885c,	// (0x00074a32) cntbar_detail_btn_pane_ParamLimits

0x885c,	// (0x00074a32) cntbar_detail_btn_pane

0x8875,	// (0x00074a4b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8875,	// (0x00074a4b) cntbar_detail_btn_pane_cp01

0x889e,	// (0x00074a74) cntbar_detail_list_shct_pane_ParamLimits

0x88ae,	// (0x00074a84) cntbar_detail_pane_g1_ParamLimits

0x88ae,	// (0x00074a84) cntbar_detail_pane_g1

0x88be,	// (0x00074a94) cntbar_detail_pane_t1_ParamLimits

0x88be,	// (0x00074a94) cntbar_detail_pane_t1

0x896a,	// (0x00074b40) cntbar_detail_list_event_pane_g3_ParamLimits

0x896a,	// (0x00074b40) cntbar_detail_list_event_pane_g3

0x8982,	// (0x00074b58) cntbar_detail_list_event_pane_g4_ParamLimits

0x8982,	// (0x00074b58) cntbar_detail_list_event_pane_g4

0x899a,	// (0x00074b70) cntbar_detail_list_event_pane_g5_ParamLimits

0x899a,	// (0x00074b70) cntbar_detail_list_event_pane_g5

0x89b2,	// (0x00074b88) cntbar_detail_list_event_pane_g6_ParamLimits

0x89b2,	// (0x00074b88) cntbar_detail_list_event_pane_g6

0x89f4,	// (0x00074bca) cntbar_detail_list_event_pane_t3_ParamLimits

0x89f4,	// (0x00074bca) cntbar_detail_list_event_pane_t3

0x8a06,	// (0x00074bdc) popup_notif_wgt_window_ParamLimits

0x8a06,	// (0x00074bdc) popup_notif_wgt_window

0x8a1f,	// (0x00074bf5) popup_submenu_window_cp01_ParamLimits

0x8a1f,	// (0x00074bf5) popup_submenu_window_cp01

0xaa85,	// (0x00076c5b) bg_popup_window_pane_cp10

0xed4d,	// (0x0007af23) listscroll_notif_wgt_pane

0xed5f,	// (0x0007af35) list_notif_wgt_window

0xed68,	// (0x0007af3e) scroll_pane_cp033

0x8a31,	// (0x00074c07) list_notif_wgt_row_pane_ParamLimits

0x8a31,	// (0x00074c07) list_notif_wgt_row_pane

0xed71,	// (0x0007af47) aid_size_list_notif_wgt_del

0xed7e,	// (0x0007af54) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0007af60) list_notif_wgt_row_pane_g2

0xed99,	// (0x0007af6f) list_notif_wgt_row_pane_g3

0x0002,

0x00dc,	// (0x0006c2b2) list_notif_wgt_row_pane_g

0xeda6,	// (0x0007af7c) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0007af92) list_notif_wgt_row_pane_t2

0xedce,	// (0x0007afa4) list_notif_wgt_row_pane_t3

0x0002,

0x00e3,	// (0x0006c2b9) list_notif_wgt_row_pane_t

0xd926,	// (0x00079afc) list_recal_day_event_pane_g1

0xede0,	// (0x0007afb6) list_recal_day_event_pane_t1

0x93e1,	// (0x000755b7) bg_button_pane_cp045

0x8a41,	// (0x00074c17) cntbar_detail_btn_pane_t1

0xc90b,	// (0x00078ae1) main_callh_pane_ParamLimits

0xc90b,	// (0x00078ae1) main_callh_pane

0x93e1,	// (0x000755b7) main_coverflow0_pane

0x93e1,	// (0x000755b7) main_wgtman_pane

0x7852,	// (0x00073a28) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7852,	// (0x00073a28) main_fs_bigclock_unlock_btn_pane

0x8278,	// (0x0007444e) bg_button_pane_cp16

0x8288,	// (0x0007445e) cell_tport_appsw_pane_g3

0x8a4f,	// (0x00074c25) cf0_flow_pane_ParamLimits

0x8a4f,	// (0x00074c25) cf0_flow_pane

0xedef,	// (0x0007afc5) listscroll_cf0_pane

0xedfa,	// (0x0007afd0) main_cf0_pane_g1

0x8a64,	// (0x00074c3a) main_cf0_pane_t1_ParamLimits

0x8a64,	// (0x00074c3a) main_cf0_pane_t1

0x8a7b,	// (0x00074c51) main_cf0_pane_t2_ParamLimits

0x8a7b,	// (0x00074c51) main_cf0_pane_t2

0x0001,

0xfe93,	// (0x0007c069) main_cf0_pane_t_ParamLimits

0xfe93,	// (0x0007c069) main_cf0_pane_t

0xee0c,	// (0x0007afe2) scroll_pane_cp11

0x8a92,	// (0x00074c68) cf0_flow_pane_g1

0x8a9a,	// (0x00074c70) cf0_flow_pane_g2

0x0001,

0xfe98,	// (0x0007c06e) cf0_flow_pane_g

0x8aa2,	// (0x00074c78) cf0_flow_pane_t1

0x93e1,	// (0x000755b7) main_call6_pane

0x93e1,	// (0x000755b7) main_calllock_pane

0x8ab0,	// (0x00074c86) call6_btn_grp_pane_ParamLimits

0x8ab0,	// (0x00074c86) call6_btn_grp_pane

0x8aca,	// (0x00074ca0) call6_pane_g1_ParamLimits

0x8aca,	// (0x00074ca0) call6_pane_g1

0x8ae0,	// (0x00074cb6) popup_call6_1st_window_ParamLimits

0x8ae0,	// (0x00074cb6) popup_call6_1st_window

0x8af1,	// (0x00074cc7) popup_call6_2nd_window_ParamLimits

0x8af1,	// (0x00074cc7) popup_call6_2nd_window

0x8b02,	// (0x00074cd8) cell_call6_btn_pane_ParamLimits

0x8b02,	// (0x00074cd8) cell_call6_btn_pane

0xaa85,	// (0x00076c5b) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0007afed) popup_call6_1st_window_g1

0xee1f,	// (0x0007aff5) popup_call6_1st_window_g2

0xee27,	// (0x0007affd) popup_call6_1st_window_g3

0x0002,

0x00f9,	// (0x0006c2cf) popup_call6_1st_window_g

0xee2f,	// (0x0007b005) popup_call6_1st_window_t1

0xee3e,	// (0x0007b014) popup_call6_1st_window_t2

0xee4c,	// (0x0007b022) popup_call6_1st_window_t3

0x0002,

0x0100,	// (0x0006c2d6) popup_call6_1st_window_t

0xaa85,	// (0x00076c5b) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0007afed) popup_call6_2nd_window_g1

0xee1f,	// (0x0007aff5) popup_call6_2nd_window_g2

0xee27,	// (0x0007affd) popup_call6_2nd_window_g3

0x0002,

0x00f9,	// (0x0006c2cf) popup_call6_2nd_window_g

0xee2f,	// (0x0007b005) popup_call6_2nd_window_t1

0x9417,	// (0x000755ed) bg_button_pane_cp15

0x9ef1,	// (0x000760c7) cell_call6_btn_pane_g1

0x9efa,	// (0x000760d0) cell_call6_btn_pane_t1

0x8b16,	// (0x00074cec) listscroll_wgtman_pane_ParamLimits

0x8b16,	// (0x00074cec) listscroll_wgtman_pane

0x8b37,	// (0x00074d0d) wgtman_btn_pane_ParamLimits

0x8b37,	// (0x00074d0d) wgtman_btn_pane

0xb28c,	// (0x00077462) aid_scroll_copy1

0xee5a,	// (0x0007b030) list_wgtman_pane

0x8b7a,	// (0x00074d50) wgtman_btn_pane_g1_ParamLimits

0x8b7a,	// (0x00074d50) wgtman_btn_pane_g1

0x8ba6,	// (0x00074d7c) wgtman_btn_pane_t1_ParamLimits

0x8ba6,	// (0x00074d7c) wgtman_btn_pane_t1

0xee64,	// (0x0007b03a) wgtman_btn_pane_t2_ParamLimits

0xee64,	// (0x0007b03a) wgtman_btn_pane_t2

0x0001,

0xfe9d,	// (0x0007c073) wgtman_btn_pane_t_ParamLimits

0xfe9d,	// (0x0007c073) wgtman_btn_pane_t

0x8be3,	// (0x00074db9) listrow_wgtman_pane_ParamLimits

0x8be3,	// (0x00074db9) listrow_wgtman_pane

0x8bf5,	// (0x00074dcb) listrow_wgtman_pane_g1

0x8c02,	// (0x00074dd8) listrow_wgtman_pane_g2

0x0001,

0xfea2,	// (0x0007c078) listrow_wgtman_pane_g

0x8c20,	// (0x00074df6) listrow_wgtman_pane_t1

0x8c38,	// (0x00074e0e) listrow_wgtman_pane_t2

0x0001,

0xfea7,	// (0x0007c07d) listrow_wgtman_pane_t

0x8c5e,	// (0x00074e34) wait_bar_pane_cp09

0xee7b,	// (0x0007b051) main_calllock_btn_pane

0xee85,	// (0x0007b05b) main_calllock_pane_g1

0x93e1,	// (0x000755b7) bg_button_pane_cp17

0xee91,	// (0x0007b067) main_calllock_btn_pane_g1

0xee9a,	// (0x0007b070) main_calllock_btn_pane_t1

0x93e1,	// (0x000755b7) main_dialer3_pane

0x93e1,	// (0x000755b7) main_fmrd2_pane

0xcd13,	// (0x00078ee9) main_fs_bigclock_unlock_btn_pane_g1

0x8c78,	// (0x00074e4e) main_fs_bigclock_unlock_btn_pane_t1

0x8c86,	// (0x00074e5c) area_fmrd2_info_pane_ParamLimits

0x8c86,	// (0x00074e5c) area_fmrd2_info_pane

0x8c97,	// (0x00074e6d) area_fmrd2_visual_pane_ParamLimits

0x8c97,	// (0x00074e6d) area_fmrd2_visual_pane

0x8ca5,	// (0x00074e7b) fmrd2_indi_pane_ParamLimits

0x8ca5,	// (0x00074e7b) fmrd2_indi_pane

0x8cb2,	// (0x00074e88) area_fmrd2_visual_pane_g1

0x8cba,	// (0x00074e90) area_fmrd2_visual_pane_t1

0x8cca,	// (0x00074ea0) area_fmrd2_visual_pane_t2

0x8cda,	// (0x00074eb0) area_fmrd2_visual_pane_t3

0x0002,

0xfeb1,	// (0x0007c087) area_fmrd2_visual_pane_t

0x8cea,	// (0x00074ec0) area_fmrd2_info_pane_g1

0x8cf2,	// (0x00074ec8) area_fmrd2_info_pane_t1

0x8d02,	// (0x00074ed8) area_fmrd2_info_pane_t2

0x8d12,	// (0x00074ee8) area_fmrd2_info_pane_t3

0x8d22,	// (0x00074ef8) area_fmrd2_info_pane_t4

0x0003,

0xfeb8,	// (0x0007c08e) area_fmrd2_info_pane_t

0x8d30,	// (0x00074f06) fmrd2_indi_pane_t1

0x8d40,	// (0x00074f16) fmrd2_indi_pane_t2

0x8d50,	// (0x00074f26) fmrd2_indi_pane_t3

0x0002,

0xfec1,	// (0x0007c097) fmrd2_indi_pane_t

0xe45b,	// (0x0007a631) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe45b,	// (0x0007a631) list_single_fs_bigclock_indicator_pane_g5

0xe50c,	// (0x0007a6e2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe50c,	// (0x0007a6e2) list_single_fs_bigclock_indicator_pane_t5

0x8415,	// (0x000745eb) aid_cell_bcale_month_pane_ParamLimits

0x8415,	// (0x000745eb) aid_cell_bcale_month_pane

0x8433,	// (0x00074609) bcale_month_pane_ParamLimits

0x8433,	// (0x00074609) bcale_month_pane

0x8457,	// (0x0007462d) bcale_preview_pane_ParamLimits

0x8457,	// (0x0007462d) bcale_preview_pane

0xec80,	// (0x0007ae56) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x0007ae75) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x0007ae75) list_single_fs_bigclock_pane_t2

0x0001,

0x00ad,	// (0x0006c283) list_single_fs_bigclock_pane_t_ParamLimits

0x00ad,	// (0x0006c283) list_single_fs_bigclock_pane_t

0x8c70,	// (0x00074e46) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeac,	// (0x0007c082) main_fs_bigclock_unlock_btn_pane_g

0x8d60,	// (0x00074f36) aid_dia3_key_size_ParamLimits

0x8d60,	// (0x00074f36) aid_dia3_key_size

0x8d6f,	// (0x00074f45) aid_dia3_listrow_size_ParamLimits

0x8d6f,	// (0x00074f45) aid_dia3_listrow_size

0x8d84,	// (0x00074f5a) dia3_keypad_fun_pane_ParamLimits

0x8d84,	// (0x00074f5a) dia3_keypad_fun_pane

0x8da0,	// (0x00074f76) dia3_keypad_num_pane_ParamLimits

0x8da0,	// (0x00074f76) dia3_keypad_num_pane

0x8dbb,	// (0x00074f91) dia3_listscroll_pane_ParamLimits

0x8dbb,	// (0x00074f91) dia3_listscroll_pane

0x8dce,	// (0x00074fa4) dia3_numentry_pane_ParamLimits

0x8dce,	// (0x00074fa4) dia3_numentry_pane

0xeea9,	// (0x0007b07f) dia3_list_pane

0xeeb4,	// (0x0007b08a) scroll_pane_cp12

0x93e1,	// (0x000755b7) bg_dia3_numentry_pane

0x8de2,	// (0x00074fb8) dia3_numentry_pane_t1

0x8df1,	// (0x00074fc7) cell_dia3_key_num_pane

0x8df9,	// (0x00074fcf) cell_dia3_key0_fun_pane_ParamLimits

0x8df9,	// (0x00074fcf) cell_dia3_key0_fun_pane

0x8e0d,	// (0x00074fe3) cell_dia3_key1_fun_pane_ParamLimits

0x8e0d,	// (0x00074fe3) cell_dia3_key1_fun_pane

0x8e25,	// (0x00074ffb) dia3_listrow_pane

0xe1ae,	// (0x0007a384) bg_dia3_numentry_pane_g1

0x93e1,	// (0x000755b7) bg_button_pane_cp21

0xeebf,	// (0x0007b095) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0007b0a3) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0007b0b2) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0007b0c1) cell_dia3_key_num_pane_t4

0x0003,

0x0132,	// (0x0006c308) cell_dia3_key_num_pane_t

0x93e1,	// (0x000755b7) bg_button_pane_cp19

0x8e37,	// (0x0007500d) cell_dia3_key0_fun_pane_g1

0x93e1,	// (0x000755b7) bg_button_pane_cp20

0x8e3f,	// (0x00075015) cell_dia3_key1_fun_pane_g1

0x8e47,	// (0x0007501d) area_left_week_number_pane

0x8e53,	// (0x00075029) area_top_day_name_pane

0x8e66,	// (0x0007503c) frame_month_view_pane

0xeefa,	// (0x0007b0d0) grid_month_view_pane

0x8e79,	// (0x0007504f) cell_top_day_name_pane_ParamLimits

0x8e79,	// (0x0007504f) cell_top_day_name_pane

0x8ea6,	// (0x0007507c) cell_area_left_week_number_pane_ParamLimits

0x8ea6,	// (0x0007507c) cell_area_left_week_number_pane

0x8eba,	// (0x00075090) cell_month_view_pane_ParamLimits

0x8eba,	// (0x00075090) cell_month_view_pane

0xef08,	// (0x0007b0de) frm_month_g1

0x8ee7,	// (0x000750bd) frm_month_g2

0x8efa,	// (0x000750d0) frm_month_g3

0x8f0d,	// (0x000750e3) frm_month_g4

0x8f20,	// (0x000750f6) frm_month_g5

0x8f33,	// (0x00075109) frm_month_g6

0x8f46,	// (0x0007511c) frm_month_g7

0xef15,	// (0x0007b0eb) frm_month_g8

0x8f59,	// (0x0007512f) frm_month_g9

0x8f69,	// (0x0007513f) frm_month_g10

0x8f79,	// (0x0007514f) frm_month_g11

0x8f89,	// (0x0007515f) frm_month_g12

0x8f9b,	// (0x00075171) frm_month_g13

0x8fad,	// (0x00075183) frm_month_g14

0x8fc1,	// (0x00075197) frm_month_g15

0x8fd5,	// (0x000751ab) frm_month_g16

0x000f,

0xfec8,	// (0x0007c09e) frm_month_g

0xef22,	// (0x0007b0f8) cell_top_day_name_pane_t1

0x8fe9,	// (0x000751bf) cell_area_left_week_number_pane_g1

0x8ff5,	// (0x000751cb) cell_area_left_week_number_pane_t1

0xcf58,	// (0x0007912e) cell_month_view_pane_g1

0x9008,	// (0x000751de) cell_month_view_pane_t1

0x93e1,	// (0x000755b7) main_fps_pane

0xe744,	// (0x0007a91a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe744,	// (0x0007a91a) cmail_ddmenu_btn02_pane_cp1

0xe760,	// (0x0007a936) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe760,	// (0x0007a936) cmail_ddmenu_btn02_pane_cp2

0x86f9,	// (0x000748cf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x86f9,	// (0x000748cf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007c003) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007c003) cmail_ddmenu_btn02_pane_g

0x8717,	// (0x000748ed) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8717,	// (0x000748ed) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007c008) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007c008) cmail_ddmenu_btn02_pane_t

0x901b,	// (0x000751f1) fps_text_pane_ParamLimits

0x901b,	// (0x000751f1) fps_text_pane

0x9032,	// (0x00075208) main_fps_pane_g1_ParamLimits

0x9032,	// (0x00075208) main_fps_pane_g1

0x904c,	// (0x00075222) wait_bar_pane_cp010_ParamLimits

0x904c,	// (0x00075222) wait_bar_pane_cp010

0x905d,	// (0x00075233) fps_text_pane_t1_ParamLimits

0x905d,	// (0x00075233) fps_text_pane_t1

0xded7,	// (0x0007a0ad) cam4_image_uncrop_pane_g1

0xdee0,	// (0x0007a0b6) cam4_image_uncrop_pane_g2

0x5920,	// (0x00071af6) cam4_image_uncrop_pane_g3

0x5929,	// (0x00071aff) cam4_image_uncrop_pane_g4

0x0003,

0xf8ea,	// (0x0007bac0) cam4_image_uncrop_pane_g

0x8e25,	// (0x00074ffb) dia3_listrow_pane_ParamLimits

0x93e1,	// (0x000755b7) main_phob2_pane

0x8249,	// (0x0007441f) cell_tport_appsw_pane_cp02_ParamLimits

0x8249,	// (0x0007441f) cell_tport_appsw_pane_cp02

0x825d,	// (0x00074433) cell_tport_appsw_pane_cp03_ParamLimits

0x825d,	// (0x00074433) cell_tport_appsw_pane_cp03

0x93e1,	// (0x000755b7) phob2_contact_card_pane

0x93e1,	// (0x000755b7) phob2_listscroll_pane

0xef35,	// (0x0007b10b) phob2_list_pane

0xef3d,	// (0x0007b113) scroll_pane_cp034

0x9075,	// (0x0007524b) phob2_cc_data_pane_ParamLimits

0x9075,	// (0x0007524b) phob2_cc_data_pane

0x9094,	// (0x0007526a) phob2_cc_listscroll_pane_ParamLimits

0x9094,	// (0x0007526a) phob2_cc_listscroll_pane

0x8be3,	// (0x00074db9) list_double_large_graphic_phob2_pane_ParamLimits

0x8be3,	// (0x00074db9) list_double_large_graphic_phob2_pane

0x90b2,	// (0x00075288) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x90b2,	// (0x00075288) list_double_large_graphic_phob2_pane_g1

0x90c8,	// (0x0007529e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x90c8,	// (0x0007529e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee9,	// (0x0007c0bf) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee9,	// (0x0007c0bf) list_double_large_graphic_phob2_pane_g

0x90d4,	// (0x000752aa) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x90d4,	// (0x000752aa) list_double_large_graphic_phob2_pane_t1

0x90ea,	// (0x000752c0) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90ea,	// (0x000752c0) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeee,	// (0x0007c0c4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeee,	// (0x0007c0c4) list_double_large_graphic_phob2_pane_t

0x93e1,	// (0x000755b7) list_highlight_pane_cp024

0x90ff,	// (0x000752d5) phob2_cc_button_pane

0x9107,	// (0x000752dd) phob2_cc_data_pane_g1_ParamLimits

0x9107,	// (0x000752dd) phob2_cc_data_pane_g1

0x911c,	// (0x000752f2) phob2_cc_data_pane_g2_ParamLimits

0x911c,	// (0x000752f2) phob2_cc_data_pane_g2

0x0001,

0xfef3,	// (0x0007c0c9) phob2_cc_data_pane_g_ParamLimits

0xfef3,	// (0x0007c0c9) phob2_cc_data_pane_g

0x912c,	// (0x00075302) phob2_cc_data_pane_t1_ParamLimits

0x912c,	// (0x00075302) phob2_cc_data_pane_t1

0x9144,	// (0x0007531a) phob2_cc_data_pane_t2_ParamLimits

0x9144,	// (0x0007531a) phob2_cc_data_pane_t2

0x915c,	// (0x00075332) phob2_cc_data_pane_t3_ParamLimits

0x915c,	// (0x00075332) phob2_cc_data_pane_t3

0x0002,

0xfef8,	// (0x0007c0ce) phob2_cc_data_pane_t_ParamLimits

0xfef8,	// (0x0007c0ce) phob2_cc_data_pane_t

0xef45,	// (0x0007b11b) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0007b11b) phob2_cc_list_pane

0xd9bd,	// (0x00079b93) scroll_pane_cp035_ParamLimits

0xd9bd,	// (0x00079b93) scroll_pane_cp035

0xa475,	// (0x0007664b) bg_button_pane_cp033

0xef51,	// (0x0007b127) phob2_cc_button_pane_g1

0xef5d,	// (0x0007b133) phob2_cc_button_pane_t1

0xef72,	// (0x0007b148) phob2_cc_button_pane_t2

0x0001,

0x0172,	// (0x0006c348) phob2_cc_button_pane_t

0x9174,	// (0x0007534a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9174,	// (0x0007534a) list_double_large_graphic_phob2_cc_pane

0x91a6,	// (0x0007537c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x91a6,	// (0x0007537c) list_double_large_graphic_phob2_cc_pane_g1

0x91b2,	// (0x00075388) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x91b2,	// (0x00075388) list_double_large_graphic_phob2_cc_pane_g2

0x91be,	// (0x00075394) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x91be,	// (0x00075394) list_double_large_graphic_phob2_cc_pane_g3

0x91ca,	// (0x000753a0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x91ca,	// (0x000753a0) list_double_large_graphic_phob2_cc_pane_g4

0x91d6,	// (0x000753ac) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x91d6,	// (0x000753ac) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeff,	// (0x0007c0d5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeff,	// (0x0007c0d5) list_double_large_graphic_phob2_cc_pane_g

0x91e2,	// (0x000753b8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x91e2,	// (0x000753b8) list_double_large_graphic_phob2_cc_pane_t1

0x920b,	// (0x000753e1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x920b,	// (0x000753e1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff0a,	// (0x0007c0e0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff0a,	// (0x0007c0e0) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0007b15a) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0007b15a) list_highlight_pane_cp025

0xa475,	// (0x0007664b) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0007b127) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0007b133) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0007b148) phob2_cc_button_pane_t2_ParamLimits

0x0172,	// (0x0006c348) phob2_cc_button_pane_t_ParamLimits

0x0518,	// (0x0006c6ee) popup_wgtman_window

0xd7ea,	// (0x000799c0) scroll_pane_cp038

0x8b5c,	// (0x00074d32) wgtman_btn_pane_cp_01_ParamLimits

0x8b5c,	// (0x00074d32) wgtman_btn_pane_cp_01

0xef92,	// (0x0007b168) wgtman_content_pane

0xef9b,	// (0x0007b171) wgtman_heading_pane

0x93e1,	// (0x000755b7) bg_heading_pane_cp02

0xefa4,	// (0x0007b17a) wgtman_heading_pane_g1

0xefac,	// (0x0007b182) wgtman_heading_pane_t1

0xefba,	// (0x0007b190) scroll_pane_cp036

0xefc2,	// (0x0007b198) wgtman_list_pane

0xe5f7,	// (0x0007a7cd) wgtman_list_pane_t1_ParamLimits

0xe5f7,	// (0x0007a7cd) wgtman_list_pane_t1

0x9cfe,	// (0x00075ed4) cam4_grid_pane

0x65f0,	// (0x000727c6) bg_button_pane_cp015_ParamLimits

0x6604,	// (0x000727da) bg_button_pane_cp016_ParamLimits

0x6617,	// (0x000727ed) bg_button_pane_cp017_ParamLimits

0x666f,	// (0x00072845) popup_vitu2_query_window_g3_ParamLimits

0x666f,	// (0x00072845) popup_vitu2_query_window_g3

0x672c,	// (0x00072902) popup_vitu2_query_window_t6_ParamLimits

0x672c,	// (0x00072902) popup_vitu2_query_window_t6

0x6757,	// (0x0007292d) popup_vitu2_query_window_t7_ParamLimits

0x6757,	// (0x0007292d) popup_vitu2_query_window_t7

0xded7,	// (0x0007a0ad) cam4_grid_pane_g1

0xdee0,	// (0x0007a0b6) cam4_grid_pane_g2

0xefca,	// (0x0007b1a0) cam4_grid_pane_g3

0xefd3,	// (0x0007b1a9) cam4_grid_pane_g4

0x0003,

0xff0f,	// (0x0007c0e5) cam4_grid_pane_g

0x144b,	// (0x0006d621) aid_placing_vt_slider_lsc_ParamLimits

0x1748,	// (0x0006d91e) vidtel_button_pane_ParamLimits

0x1748,	// (0x0006d91e) vidtel_button_pane

0x93e1,	// (0x000755b7) bg_button_pane_cp034

0xefde,	// (0x0007b1b4) vidtel_button_pane_g1

0xefe6,	// (0x0007b1bc) vidtel_button_pane_t1

0xd904,	// (0x00079ada) aid_size_vtel_slider_touch

0xd9bd,	// (0x00079b93) scroll_pane_cp039

0x7538,	// (0x0007370e) ncim_query_button_pane_cp01_ParamLimits

0x7557,	// (0x0007372d) ncimui_query_pane_g1_ParamLimits

0xa475,	// (0x0007664b) input_focus_pane_cp012_ParamLimits

0xe1f4,	// (0x0007a3ca) ncim_query_entry_pane_t1_ParamLimits

0xd9bd,	// (0x00079b93) scroll_pane_cp039_ParamLimits

0xb363,	// (0x00077539) navi_pane_bcale_mc_g1

0xb36b,	// (0x00077541) navi_pane_bcale_mc_t1

0xe794,	// (0x0007a96a) main_sp_fs_email_pane_g1

0xe7a0,	// (0x0007a976) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007bebb) main_sp_fs_email_pane_g

0xea04,	// (0x0007abda) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x0007abda) list_single_cale_mrui_row_pane_g3

0x8737,	// (0x0007490d) list_single_recal_day_pane_g5_event_pane

0xa933,	// (0x00076b09) list_single_recal_day_pane_g7

0xeffc,	// (0x0007b1d2) list_recal_day_event_pane_cp01

0xf005,	// (0x0007b1db) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0007b1e3) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0007b1eb) list_recal_vselct_pane_cp01

0xd926,	// (0x00079afc) list_recal_day_event_pane_cp01_g1

0xa98f,	// (0x00076b65) list_recal_day_event_pane_cp01_t1

0xa93b,	// (0x00076b11) list_single_recal_day_pane_t1_ParamLimits

0xa94d,	// (0x00076b23) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007c018) list_single_recal_day_pane_t_ParamLimits

0xa21f,	// (0x000763f5) bg_notes_pane_ParamLimits

0xa2ce,	// (0x000764a4) list_notes_pane_ParamLimits

0x0859,	// (0x0006ca2f) scroll_pane_cp06_ParamLimits

0xa2f0,	// (0x000764c6) main_notes_pane_ParamLimits

0xa475,	// (0x0007664b) main_welc_pane

0x924b,	// (0x00075421) main_welc_body_pane_ParamLimits

0x924b,	// (0x00075421) main_welc_body_pane

0x9268,	// (0x0007543e) main_welc_opti_pane_ParamLimits

0x9268,	// (0x0007543e) main_welc_opti_pane

0x92bc,	// (0x00075492) main_welc_pane_t1_ParamLimits

0x92bc,	// (0x00075492) main_welc_pane_t1

0x9336,	// (0x0007550c) main_welc_body_row_pane_ParamLimits

0x9336,	// (0x0007550c) main_welc_body_row_pane

0xe95c,	// (0x0007ab32) main_welc_opti_row_pane_ParamLimits

0xe95c,	// (0x0007ab32) main_welc_opti_row_pane

0xf01f,	// (0x0007b1f5) main_welc_opti_row_pane_g1

0x934b,	// (0x00075521) main_welc_opti_row_pane_t1

0xf027,	// (0x0007b1fd) main_welc_body_row_pane_t1

0xed57,	// (0x0007af2d) popup_notif_wgt_heading_pane

0xed71,	// (0x0007af47) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0007af54) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0007af60) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x0007af6f) list_notif_wgt_row_pane_g3_ParamLimits

0x00dc,	// (0x0006c2b2) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x0007af7c) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0007af92) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0007afa4) list_notif_wgt_row_pane_t3_ParamLimits

0x00e3,	// (0x0006c2b9) list_notif_wgt_row_pane_t_ParamLimits

0x8bf5,	// (0x00074dcb) listrow_wgtman_pane_g1_ParamLimits

0x8c02,	// (0x00074dd8) listrow_wgtman_pane_g2_ParamLimits

0xfea2,	// (0x0007c078) listrow_wgtman_pane_g_ParamLimits

0x8c20,	// (0x00074df6) listrow_wgtman_pane_t1_ParamLimits

0x8c38,	// (0x00074e0e) listrow_wgtman_pane_t2_ParamLimits

0xfea7,	// (0x0007c07d) listrow_wgtman_pane_t_ParamLimits

0x8c5e,	// (0x00074e34) wait_bar_pane_cp09_ParamLimits

0x93e1,	// (0x000755b7) bg_popup_heading_pane_cp02

0xf036,	// (0x0007b20c) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0007b214) popup_notif_wgt_heading_pane_t1

0x93e1,	// (0x000755b7) main_vids_pane

0x93e1,	// (0x000755b7) vids_listscroll_pane

0x935a,	// (0x00075530) scroll_pane_cp040

0x93e1,	// (0x000755b7) vids_list_pane

0x9365,	// (0x0007553b) vids_list_double_pane_ParamLimits

0x9365,	// (0x0007553b) vids_list_double_pane

0x9376,	// (0x0007554c) vids_list_double_pane_g1

0x937f,	// (0x00075555) vids_list_double_pane_t1

0x938f,	// (0x00075565) vids_list_double_pane_t2

0x0001,

0xff26,	// (0x0007c0fc) vids_list_double_pane_t

0x9409,	// (0x000755df) main_ncimui_pane_ParamLimits

0x736e,	// (0x00073544) main_ncimui_pane_g1_ParamLimits

0x737a,	// (0x00073550) main_ncimui_pane_g2_ParamLimits

0x737a,	// (0x00073550) main_ncimui_pane_g2

0x0001,

0xfbe6,	// (0x0007bdbc) main_ncimui_pane_g_ParamLimits

0xfbe6,	// (0x0007bdbc) main_ncimui_pane_g

0x9283,	// (0x00075459) main_welc_pane_g1_ParamLimits

0x9283,	// (0x00075459) main_welc_pane_g1

0x9298,	// (0x0007546e) main_welc_pane_g2_ParamLimits

0x9298,	// (0x0007546e) main_welc_pane_g2

0x0002,

0xff18,	// (0x0007c0ee) main_welc_pane_g_ParamLimits

0xff18,	// (0x0007c0ee) main_welc_pane_g

0xa21f,	// (0x000763f5) listscroll_mce_pane_ParamLimits

0xb4c6,	// (0x0007769c) wait_bar_pane_cp10

0xc8ff,	// (0x00078ad5) main_cale_day_pane_ParamLimits

0xc8ff,	// (0x00078ad5) main_cale_week_pane_ParamLimits

0xa21f,	// (0x000763f5) main_messa_pane_ParamLimits

0x4bbe,	// (0x00070d94) main_clock2_btn_pane_ParamLimits

0x4bbe,	// (0x00070d94) main_clock2_btn_pane

0xd0e0,	// (0x000792b6) main_clock2_btn_pane_cp01_ParamLimits

0xd0e0,	// (0x000792b6) main_clock2_btn_pane_cp01

0xe9d5,	// (0x0007abab) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0007afda) main_cf0_pane_g2

0x0001,

0x00ea,	// (0x0006c2c0) main_cf0_pane_g

0x8e47,	// (0x0007501d) area_left_week_number_pane_ParamLimits

0x8e53,	// (0x00075029) area_top_day_name_pane_ParamLimits

0x8e66,	// (0x0007503c) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0007b0d0) grid_month_view_pane_ParamLimits

0xef08,	// (0x0007b0de) frm_month_g1_ParamLimits

0x8ee7,	// (0x000750bd) frm_month_g2_ParamLimits

0x8efa,	// (0x000750d0) frm_month_g3_ParamLimits

0x8f0d,	// (0x000750e3) frm_month_g4_ParamLimits

0x8f20,	// (0x000750f6) frm_month_g5_ParamLimits

0x8f33,	// (0x00075109) frm_month_g6_ParamLimits

0x8f46,	// (0x0007511c) frm_month_g7_ParamLimits

0xef15,	// (0x0007b0eb) frm_month_g8_ParamLimits

0x8f59,	// (0x0007512f) frm_month_g9_ParamLimits

0x8f69,	// (0x0007513f) frm_month_g10_ParamLimits

0x8f79,	// (0x0007514f) frm_month_g11_ParamLimits

0x8f89,	// (0x0007515f) frm_month_g12_ParamLimits

0x8f9b,	// (0x00075171) frm_month_g13_ParamLimits

0x8fad,	// (0x00075183) frm_month_g14_ParamLimits

0x8fc1,	// (0x00075197) frm_month_g15_ParamLimits

0x8fd5,	// (0x000751ab) frm_month_g16_ParamLimits

0xfec8,	// (0x0007c09e) frm_month_g_ParamLimits

0xef22,	// (0x0007b0f8) cell_top_day_name_pane_t1_ParamLimits

0x8fe9,	// (0x000751bf) cell_area_left_week_number_pane_g1_ParamLimits

0x8ff5,	// (0x000751cb) cell_area_left_week_number_pane_t1_ParamLimits

0xcf58,	// (0x0007912e) cell_month_view_pane_g1_ParamLimits

0x9008,	// (0x000751de) cell_month_view_pane_t1_ParamLimits

0xa217,	// (0x000763ed) main_clock2_btn_pane_g1

0xf04c,	// (0x0007b222) main_clock2_btn_pane_t1

0xa475,	// (0x0007664b) listscroll_cmail_pane_ParamLimits

0xe794,	// (0x0007a96a) main_sp_fs_email_pane_g1_ParamLimits

0xe7a0,	// (0x0007a976) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007bebb) main_sp_fs_email_pane_g_ParamLimits

0xeae3,	// (0x0007acb9) list_recal_day_pane_ParamLimits

0xeaf4,	// (0x0007acca) mian_recal_day_pane_t1

0x7eae,	// (0x00074084) list_single_dyc_row_text_pane_t4_ParamLimits

0x7eae,	// (0x00074084) list_single_dyc_row_text_pane_t4

0x7ef7,	// (0x000740cd) list_single_dyc_row_text_pane_t5_ParamLimits

0x7ef7,	// (0x000740cd) list_single_dyc_row_text_pane_t5

0xa6a9,	// (0x0007687f) list_single_dyc_row_text_pane_t6_ParamLimits

0xa6a9,	// (0x0007687f) list_single_dyc_row_text_pane_t6

0x21f6,	// (0x0006e3cc) aid_mgn_list_cale_time_pane

0x9409,	// (0x000755df) main_gallery2_pane_ParamLimits

0xd0f6,	// (0x000792cc) main_clock2_pane_cp01_t1

0xd104,	// (0x000792da) main_clock2_pane_cp01_t3

0x0001,

0xf7bc,	// (0x0007b992) main_clock2_pane_cp01_t

0x0be4,	// (0x0006cdba) cale_week_scroll_pane_g16_ParamLimits

0x0be4,	// (0x0006cdba) cale_week_scroll_pane_g16

0xaa85,	// (0x00076c5b) vorec_slider_pane

0xefe6,	// (0x0007b1bc) vidtel_button_pane_t1_ParamLimits

0x879d,	// (0x00074973) main_fs_bigclock_clock_pane_g1_ParamLimits

0x879d,	// (0x00074973) main_fs_bigclock_clock_pane_g2_ParamLimits

0x87ae,	// (0x00074984) main_fs_bigclock_clock_pane_g3_ParamLimits

0x87ae,	// (0x00074984) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0007c03b) main_fs_bigclock_clock_pane_g_ParamLimits

0x87c1,	// (0x00074997) main_fs_bigclock_clock_pane_t1_ParamLimits

0x87d7,	// (0x000749ad) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0007c044) main_fs_bigclock_clock_pane_t_ParamLimits

0x43bc,	// (0x00070592) main_mup3_lyrics_pane_ParamLimits

0x43bc,	// (0x00070592) main_mup3_lyrics_pane

0x93c5,	// (0x0007559b) main_mup3_lyrics_pane_t1_ParamLimits

0x93c5,	// (0x0007559b) main_mup3_lyrics_pane_t1

0x9a50,	// (0x00075c26) aid_main_mp4_pane_t1_area

0x9a5a,	// (0x00075c30) aid_main_mp4_pane_t2_area

0x9b06,	// (0x00075cdc) main_mp4_pane_g7_ParamLimits

0x9b06,	// (0x00075cdc) main_mp4_pane_g7

0x9b12,	// (0x00075ce8) main_mp4_pane_g8_ParamLimits

0x9b12,	// (0x00075ce8) main_mp4_pane_g8

0x56ef,	// (0x000718c5) aid_call6_pane_g1_size

0x918f,	// (0x00075365) list_double_large_graphic_phob2_other_pane_ParamLimits

0x918f,	// (0x00075365) list_double_large_graphic_phob2_other_pane

0xb294,	// (0x0007746a) list_double_large_graphic_phob2_other_pane_g1

0x93e1,	// (0x000755b7) list_highlight_pane_cp026

0xa475,	// (0x0007664b) main_welc_pane_ParamLimits

0x7bc5,	// (0x00073d9b) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7bc5,	// (0x00073d9b) main_sp_fs_ctrlbar_pane_g3

0x7bdf,	// (0x00073db5) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7bdf,	// (0x00073db5) main_sp_fs_ctrlbar_pane_g4

0x7c13,	// (0x00073de9) toolbar2_fixed_button_pane_cp01

0x7c1e,	// (0x00073df4) toolbar2_fixed_button_pane_cp02

0x7c2b,	// (0x00073e01) toolbar2_fixed_button_pane_cp03

0x9234,	// (0x0007540a) list_welc_entry_pane_ParamLimits

0x9234,	// (0x0007540a) list_welc_entry_pane

0x92ad,	// (0x00075483) main_welc_pane_g3_ParamLimits

0x92ad,	// (0x00075483) main_welc_pane_g3

0x92da,	// (0x000754b0) main_welc_pane_t2_ParamLimits

0x92da,	// (0x000754b0) main_welc_pane_t2

0x92f4,	// (0x000754ca) main_welc_pane_t3_ParamLimits

0x92f4,	// (0x000754ca) main_welc_pane_t3

0x0002,

0xff1f,	// (0x0007c0f5) main_welc_pane_t_ParamLimits

0xff1f,	// (0x0007c0f5) main_welc_pane_t

0x930b,	// (0x000754e1) welc_button_pane_ParamLimits

0x930b,	// (0x000754e1) welc_button_pane

0x9322,	// (0x000754f8) welc_service_logo_pane_ParamLimits

0x9322,	// (0x000754f8) welc_service_logo_pane

0xf05a,	// (0x0007b230) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0007b230) list_single_welc_entry_pane

0xf06b,	// (0x0007b241) list_single_welc_entry_pane_g1

0xf073,	// (0x0007b249) list_single_welc_entry_pane_t1

0xf081,	// (0x0007b257) list_single_welc_entry_pane_t2

0x0001,

0xff2b,	// (0x0007c101) list_single_welc_entry_pane_t

0x93e1,	// (0x000755b7) bg_button_pane_cp035

0xf08f,	// (0x0007b265) welc_button_pane_t1

0xf09d,	// (0x0007b273) welc_service_logo_pane_g1

0xf0a6,	// (0x0007b27c) welc_service_logo_pane_g2

0x0001,

0xff30,	// (0x0007c106) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small

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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00016c68 };

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
0x82b0,	// (0x0001ef18) Screen

0x82bc,	// (0x0001ef24) application_window

0x82fc,	// (0x0001ef64) area_bottom_pane_ParamLimits

0x82fc,	// (0x0001ef64) area_bottom_pane

0x8331,	// (0x0001ef99) area_top_pane_ParamLimits

0x8331,	// (0x0001ef99) area_top_pane

0x027b,	// (0x00016ee3) call_video_uplink_pane_ParamLimits

0x027b,	// (0x00016ee3) call_video_uplink_pane

0x83be,	// (0x0001f026) main_pane_ParamLimits

0x83be,	// (0x0001f026) main_pane

0x2ca9,	// (0x00019911) context_pane

0xb019,	// (0x00021c81) navi_pane

0xb039,	// (0x00021ca1) popup_cale_events_window_ParamLimits

0xb039,	// (0x00021ca1) popup_cale_events_window

0x2cbc,	// (0x00019924) popup_mup_playback_window

0xb051,	// (0x00021cb9) signal_pane

0x0a0a,	// (0x00017672) main_browser_pane

0x179f,	// (0x00018407) main_burst_pane

0xaee3,	// (0x00021b4b) main_calc_pane

0x179f,	// (0x00018407) main_cale_day_pane

0x0a0a,	// (0x00017672) main_cale_month_pane

0x179f,	// (0x00018407) main_cale_week_pane

0x179f,	// (0x00018407) main_call_pane

0x06ba,	// (0x00017322) main_call_poc_pane

0x179f,	// (0x00018407) main_camera_pane

0x179f,	// (0x00018407) main_chi_dic_pane

0x1624,	// (0x0001828c) main_clock_pane

0x06ba,	// (0x00017322) main_fmradio_pane

0x179f,	// (0x00018407) main_graph_messa_pane

0x06ba,	// (0x00017322) main_help_pane

0x0a0a,	// (0x00017672) main_im_pane

0x0915,	// (0x0001757d) main_image_pane_ParamLimits

0x0915,	// (0x0001757d) main_image_pane

0x06ba,	// (0x00017322) main_location2_pane

0x179f,	// (0x00018407) main_location_pane

0x06ba,	// (0x00017322) main_messa_pane

0x06ba,	// (0x00017322) main_mp2_pane

0x179f,	// (0x00018407) main_mp_pane

0x06ba,	// (0x00017322) main_msg_pane

0x06ba,	// (0x00017322) main_mup_eq_pane

0x06ba,	// (0x00017322) main_mup_pane

0x0a0a,	// (0x00017672) main_notes_pane

0x06ba,	// (0x00017322) main_pec_pane

0x06ba,	// (0x00017322) main_phob_pane

0x06ba,	// (0x00017322) main_pinb_pane

0x06ba,	// (0x00017322) main_postcard_pane

0x06ba,	// (0x00017322) main_qdial_pane

0x179f,	// (0x00018407) main_skin_pane

0x06ba,	// (0x00017322) main_smil2_pane

0x179f,	// (0x00018407) main_smil_pane

0x179f,	// (0x00018407) main_video_pane

0x179f,	// (0x00018407) main_video_tele_pane

0x0915,	// (0x0001757d) main_viewer_pane_ParamLimits

0x0915,	// (0x0001757d) main_viewer_pane

0x179f,	// (0x00018407) main_vorec_pane

0xaf19,	// (0x00021b81) popup_blid_sat_info_window_ParamLimits

0xaf19,	// (0x00021b81) popup_blid_sat_info_window

0xaf2f,	// (0x00021b97) popup_dyc_status_message_window_ParamLimits

0xaf2f,	// (0x00021b97) popup_dyc_status_message_window

0xaf3f,	// (0x00021ba7) popup_grid_large_graphic_window_ParamLimits

0xaf3f,	// (0x00021ba7) popup_grid_large_graphic_window

0xafb5,	// (0x00021c1d) popup_loc_request_window_ParamLimits

0xafb5,	// (0x00021c1d) popup_loc_request_window

0xaff1,	// (0x00021c59) popup_wml_address_window_ParamLimits

0xaff1,	// (0x00021c59) popup_wml_address_window

0xadbb,	// (0x00021a23) call_muted_g1

0xaa7d,	// (0x000216e5) popup_call_audio_conf_window_ParamLimits

0xaa7d,	// (0x000216e5) popup_call_audio_conf_window

0xadcb,	// (0x00021a33) popup_call_audio_first_window_ParamLimits

0xadcb,	// (0x00021a33) popup_call_audio_first_window

0xae0b,	// (0x00021a73) popup_call_audio_in_window_ParamLimits

0xae0b,	// (0x00021a73) popup_call_audio_in_window

0xae2f,	// (0x00021a97) popup_call_audio_out_window_ParamLimits

0xae2f,	// (0x00021a97) popup_call_audio_out_window

0xae51,	// (0x00021ab9) popup_call_audio_second_window_ParamLimits

0xae51,	// (0x00021ab9) popup_call_audio_second_window

0xae81,	// (0x00021ae9) popup_call_audio_wait_window_ParamLimits

0xae81,	// (0x00021ae9) popup_call_audio_wait_window

0xaea2,	// (0x00021b0a) popup_number_entry_window_ParamLimits

0xaea2,	// (0x00021b0a) popup_number_entry_window

0x02a7,	// (0x00016f0f) bg_popup_call_pane_cp05_ParamLimits

0x02a7,	// (0x00016f0f) bg_popup_call_pane_cp05

0x02c7,	// (0x00016f2f) popup_number_entry_window_t1

0x02da,	// (0x00016f42) popup_number_entry_window_t2

0x02ec,	// (0x00016f54) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00025d4f) popup_number_entry_window_t

0x02fe,	// (0x00016f66) text_title_cp2

0x0311,	// (0x00016f79) bg_popup_call_pane_cp_ParamLimits

0x0311,	// (0x00016f79) bg_popup_call_pane_cp

0x031f,	// (0x00016f87) call_thumbnail_pane

0x0327,	// (0x00016f8f) popup_call_audio_in_window_g1_ParamLimits

0x0327,	// (0x00016f8f) popup_call_audio_in_window_g1

0x0333,	// (0x00016f9b) popup_call_audio_in_window_g2_ParamLimits

0x0333,	// (0x00016f9b) popup_call_audio_in_window_g2

0x033f,	// (0x00016fa7) popup_call_audio_in_window_g3_ParamLimits

0x033f,	// (0x00016fa7) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00025d58) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00025d58) popup_call_audio_in_window_g

0x034b,	// (0x00016fb3) popup_call_audio_in_window_t1_ParamLimits

0x034b,	// (0x00016fb3) popup_call_audio_in_window_t1

0x0367,	// (0x00016fcf) popup_call_audio_in_window_t2_ParamLimits

0x0367,	// (0x00016fcf) popup_call_audio_in_window_t2

0x0383,	// (0x00016feb) popup_call_audio_in_window_t3_ParamLimits

0x0383,	// (0x00016feb) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00025d5f) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00025d5f) popup_call_audio_in_window_t

0x0311,	// (0x00016f79) bg_popup_call_pane_cp01_ParamLimits

0x0311,	// (0x00016f79) bg_popup_call_pane_cp01

0x031f,	// (0x00016f87) call_thumbnail_pane_cp02

0x0396,	// (0x00016ffe) call_type_pane_cp022

0x039e,	// (0x00017006) popup_call_audio_out_window_g1_ParamLimits

0x039e,	// (0x00017006) popup_call_audio_out_window_g1

0x03b0,	// (0x00017018) popup_call_audio_out_window_g2_ParamLimits

0x03b0,	// (0x00017018) popup_call_audio_out_window_g2

0x03bc,	// (0x00017024) popup_call_audio_out_window_g3_ParamLimits

0x03bc,	// (0x00017024) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00025d66) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00025d66) popup_call_audio_out_window_g

0x03ce,	// (0x00017036) popup_call_audio_out_window_t1_ParamLimits

0x03ce,	// (0x00017036) popup_call_audio_out_window_t1

0x03e6,	// (0x0001704e) popup_call_audio_out_window_t2_ParamLimits

0x03e6,	// (0x0001704e) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00025d6d) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00025d6d) popup_call_audio_out_window_t

0x03fb,	// (0x00017063) bg_popup_call_pane_ParamLimits

0x03fb,	// (0x00017063) bg_popup_call_pane

0x85ab,	// (0x0001f213) call_thumbnail_pane_cp_ParamLimits

0x85ab,	// (0x0001f213) call_thumbnail_pane_cp

0x047f,	// (0x000170e7) call_type_pane_cp01_ParamLimits

0x047f,	// (0x000170e7) call_type_pane_cp01

0x04c3,	// (0x0001712b) popup_call_audio_first_window_g1_ParamLimits

0x04c3,	// (0x0001712b) popup_call_audio_first_window_g1

0x050f,	// (0x00017177) popup_call_audio_first_window_g2_ParamLimits

0x050f,	// (0x00017177) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00025d72) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00025d72) popup_call_audio_first_window_g

0x0553,	// (0x000171bb) popup_call_audio_first_window_t1_ParamLimits

0x0553,	// (0x000171bb) popup_call_audio_first_window_t1

0x05ff,	// (0x00017267) popup_call_audio_first_window_t4_ParamLimits

0x05ff,	// (0x00017267) popup_call_audio_first_window_t4

0x068b,	// (0x000172f3) popup_call_audio_first_window_t5_ParamLimits

0x068b,	// (0x000172f3) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00025d77) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00025d77) popup_call_audio_first_window_t

0x06ba,	// (0x00017322) bg_popup_call_pane_cp02

0x06c4,	// (0x0001732c) call_type_pane_cp023

0x06cc,	// (0x00017334) popup_call_audio_wait_window_g1

0x06d4,	// (0x0001733c) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00025d7e) popup_call_audio_wait_window_g

0x06dc,	// (0x00017344) popup_call_audio_wait_window_t3

0x06ea,	// (0x00017352) bg_popup_call_pane_cp03_ParamLimits

0x06ea,	// (0x00017352) bg_popup_call_pane_cp03

0x074a,	// (0x000173b2) call_thumbnail_pane_cp011_ParamLimits

0x074a,	// (0x000173b2) call_thumbnail_pane_cp011

0x0756,	// (0x000173be) call_type_pane_cp034_ParamLimits

0x0756,	// (0x000173be) call_type_pane_cp034

0x0792,	// (0x000173fa) popup_call_audio_second_window_g1_ParamLimits

0x0792,	// (0x000173fa) popup_call_audio_second_window_g1

0x07ce,	// (0x00017436) popup_call_audio_second_window_g2_ParamLimits

0x07ce,	// (0x00017436) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00025d83) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00025d83) popup_call_audio_second_window_g

0x080a,	// (0x00017472) popup_call_audio_second_window_t1_ParamLimits

0x080a,	// (0x00017472) popup_call_audio_second_window_t1

0x088b,	// (0x000174f3) popup_call_audio_second_window_t2_ParamLimits

0x088b,	// (0x000174f3) popup_call_audio_second_window_t2

0x08c1,	// (0x00017529) popup_call_audio_second_window_t3_ParamLimits

0x08c1,	// (0x00017529) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00025d88) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00025d88) popup_call_audio_second_window_t

0x06ba,	// (0x00017322) bg_popup_call_pane_cp04

0x08f7,	// (0x0001755f) list_conf_pane

0x08ff,	// (0x00017567) popup_call_audio_conf_window_t1

0x090d,	// (0x00017575) call_thumbnail_pane_g1

0x0915,	// (0x0001757d) bg_pinb_pane_ParamLimits

0x0915,	// (0x0001757d) bg_pinb_pane

0x0923,	// (0x0001758b) find_pinb_pane

0x092c,	// (0x00017594) listscroll_pinb_pane_ParamLimits

0x092c,	// (0x00017594) listscroll_pinb_pane

0x093b,	// (0x000175a3) pinb_bg_pane_g1

0x85cf,	// (0x0001f237) pinb_bg_pane_g2

0x85db,	// (0x0001f243) pinb_bg_pane_g3

0x85e7,	// (0x0001f24f) pinb_bg_pane_g4

0x85f3,	// (0x0001f25b) pinb_bg_pane_g5

0x85ff,	// (0x0001f267) pinb_bg_pane_g6

0x860a,	// (0x0001f272) pinb_bg_pane_g7

0x8615,	// (0x0001f27d) pinb_bg_pane_g8

0x8620,	// (0x0001f288) pinb_bg_pane_g9

0x862a,	// (0x0001f292) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00025d8f) pinb_bg_pane_g

0x8647,	// (0x0001f2af) grid_pinb_pane

0x8652,	// (0x0001f2ba) list_pinb_pane

0x865d,	// (0x0001f2c5) scroll_pane_cp01_ParamLimits

0x865d,	// (0x0001f2c5) scroll_pane_cp01

0x0945,	// (0x000175ad) find_pinb_pane_g1_ParamLimits

0x0945,	// (0x000175ad) find_pinb_pane_g1

0x095d,	// (0x000175c5) find_pinb_pane_t1

0x096f,	// (0x000175d7) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00025da9) find_pinb_pane_t

0x0984,	// (0x000175ec) input_focus_pane_cp01_ParamLimits

0x0984,	// (0x000175ec) input_focus_pane_cp01

0x866f,	// (0x0001f2d7) cell_pinb_pane_ParamLimits

0x866f,	// (0x0001f2d7) cell_pinb_pane

0x8697,	// (0x0001f2ff) cell_pinb_pane_g1_ParamLimits

0x8697,	// (0x0001f2ff) cell_pinb_pane_g1

0x86ac,	// (0x0001f314) cell_pinb_pane_g2_ParamLimits

0x86ac,	// (0x0001f314) cell_pinb_pane_g2

0x0990,	// (0x000175f8) cell_pinb_pane_g3_ParamLimits

0x0990,	// (0x000175f8) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00025dae) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00025dae) cell_pinb_pane_g

0x06ba,	// (0x00017322) grid_highlight_pane_cp01

0x86b8,	// (0x0001f320) list_pinb_item_pane_ParamLimits

0x86b8,	// (0x0001f320) list_pinb_item_pane

0x06ba,	// (0x00017322) list_highlight_pane_cp02

0x86de,	// (0x0001f346) list_pinb_item_pane_g1_ParamLimits

0x86de,	// (0x0001f346) list_pinb_item_pane_g1

0x86eb,	// (0x0001f353) list_pinb_item_pane_g2_ParamLimits

0x86eb,	// (0x0001f353) list_pinb_item_pane_g2

0x86f7,	// (0x0001f35f) list_pinb_item_pane_g3_ParamLimits

0x86f7,	// (0x0001f35f) list_pinb_item_pane_g3

0x8708,	// (0x0001f370) list_pinb_item_pane_g4_ParamLimits

0x8708,	// (0x0001f370) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00025db5) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00025db5) list_pinb_item_pane_g

0x8714,	// (0x0001f37c) list_pinb_item_pane_t1_ParamLimits

0x8714,	// (0x0001f37c) list_pinb_item_pane_t1

0x6eb2,	// (0x0001db1a) calc_display_pane

0x6ed0,	// (0x0001db38) calc_paper_pane

0x6eec,	// (0x0001db54) grid_calc_pane

0x06ba,	// (0x00017322) bg_list_pane_cp01

0x872b,	// (0x0001f393) clock_g1

0x8733,	// (0x0001f39b) clock_g2

0x0001,

0xf156,	// (0x00025dbe) clock_g

0x873d,	// (0x0001f3a5) clock_t1_ParamLimits

0x873d,	// (0x0001f3a5) clock_t1

0x8752,	// (0x0001f3ba) clock_t2_ParamLimits

0x8752,	// (0x0001f3ba) clock_t2

0x8764,	// (0x0001f3cc) clock_t3_ParamLimits

0x8764,	// (0x0001f3cc) clock_t3

0x8776,	// (0x0001f3de) clock_t4_ParamLimits

0x8776,	// (0x0001f3de) clock_t4

0x8788,	// (0x0001f3f0) clock_t5_ParamLimits

0x8788,	// (0x0001f3f0) clock_t5

0x879d,	// (0x0001f405) clock_t6_ParamLimits

0x879d,	// (0x0001f405) clock_t6

0x87af,	// (0x0001f417) clock_t7_ParamLimits

0x87af,	// (0x0001f417) clock_t7

0x87c1,	// (0x0001f429) clock_t8_ParamLimits

0x87c1,	// (0x0001f429) clock_t8

0x87d7,	// (0x0001f43f) clock_t9_ParamLimits

0x87d7,	// (0x0001f43f) clock_t9

0x0008,

0xf15b,	// (0x00025dc3) clock_t_ParamLimits

0xf15b,	// (0x00025dc3) clock_t

0x09a4,	// (0x0001760c) popup_clock_analogue_window_cp02

0x09a4,	// (0x0001760c) popup_clock_digital_window_cp01

0x09ac,	// (0x00017614) listscroll_help_pane

0x06ba,	// (0x00017322) phob_pre_status_pane

0x09b6,	// (0x0001761e) grid_qdial_pane

0x06ba,	// (0x00017322) listscroll_mce_pane

0x09c0,	// (0x00017628) bg_notes_pane

0x09ce,	// (0x00017636) list_notes_pane

0x87ed,	// (0x0001f455) scroll_pane_cp06

0x09dc,	// (0x00017644) bg_calc_paper_pane

0x6f22,	// (0x0001db8a) list_calc_pane

0x0a0a,	// (0x00017672) bg_calc_display_pane

0x6f3c,	// (0x0001dba4) calc_display_pane_t1

0x6f51,	// (0x0001dbb9) calc_display_pane_t2

0x6f66,	// (0x0001dbce) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00025dd6) calc_display_pane_t

0x6f78,	// (0x0001dbe0) cell_calc_pane_ParamLimits

0x6f78,	// (0x0001dbe0) cell_calc_pane

0x0a28,	// (0x00017690) bg_calc_paper_pane_g1

0x0a40,	// (0x000176a8) bg_calc_paper_pane_g2

0x0a34,	// (0x0001769c) bg_calc_paper_pane_g3

0x0a58,	// (0x000176c0) bg_calc_paper_pane_g4

0x0a4c,	// (0x000176b4) bg_calc_paper_pane_g5

0x87fc,	// (0x0001f464) bg_calc_paper_pane_g6

0x880d,	// (0x0001f475) bg_calc_paper_pane_g7

0x881e,	// (0x0001f486) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00025ddd) bg_calc_paper_pane_g

0x882f,	// (0x0001f497) calc_bg_paper_pane_g9

0x8840,	// (0x0001f4a8) list_calc_item_pane_ParamLimits

0x8840,	// (0x0001f4a8) list_calc_item_pane

0x0a64,	// (0x000176cc) list_calc_item_pane_g1

0x6fa5,	// (0x0001dc0d) list_calc_item_pane_t1_ParamLimits

0x6fa5,	// (0x0001dc0d) list_calc_item_pane_t1

0x6fb7,	// (0x0001dc1f) list_calc_item_pane_t2_ParamLimits

0x6fb7,	// (0x0001dc1f) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00025dee) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00025dee) list_calc_item_pane_t

0x0a83,	// (0x000176eb) cell_calc_pane_g1

0x0a8d,	// (0x000176f5) grid_highlight_pane_cp02

0x886f,	// (0x0001f4d7) bg_calc_display_pane_g1

0x6fe7,	// (0x0001dc4f) bg_calc_display_pane_g2

0x318b,	// (0x00019df3) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00025df8) bg_calc_display_pane_g

0x6ff1,	// (0x0001dc59) cell_qdial_pane_ParamLimits

0x6ff1,	// (0x0001dc59) cell_qdial_pane

0x8878,	// (0x0001f4e0) cell_qdial_pane_g1_ParamLimits

0x8878,	// (0x0001f4e0) cell_qdial_pane_g1

0x8885,	// (0x0001f4ed) cell_qdial_pane_g2_ParamLimits

0x8885,	// (0x0001f4ed) cell_qdial_pane_g2

0x0aaf,	// (0x00017717) cell_qdial_pane_g3_ParamLimits

0x0aaf,	// (0x00017717) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00025dff) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00025dff) cell_qdial_pane_g

0x88a3,	// (0x0001f50b) cell_qdial_pane_t1_ParamLimits

0x88a3,	// (0x0001f50b) cell_qdial_pane_t1

0x88bb,	// (0x0001f523) cell_qdial_pane_t2_ParamLimits

0x88bb,	// (0x0001f523) cell_qdial_pane_t2

0x88ce,	// (0x0001f536) cell_qdial_pane_t3_ParamLimits

0x88ce,	// (0x0001f536) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00025e08) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00025e08) cell_qdial_pane_t

0x06ba,	// (0x00017322) grid_highlight_pane_cp04

0x0abb,	// (0x00017723) thumbnail_qdial_pane_ParamLimits

0x0abb,	// (0x00017723) thumbnail_qdial_pane

0x0b17,	// (0x0001777f) list_help_pane

0x0b20,	// (0x00017788) scroll_pane_cp02

0x88e1,	// (0x0001f549) help_list_pane_t1_ParamLimits

0x88e1,	// (0x0001f549) help_list_pane_t1

0x7005,	// (0x0001dc6d) bg_notes_pane_g2

0x700d,	// (0x0001dc75) bg_notes_pane_g3

0x7015,	// (0x0001dc7d) notes_bg_pane_g1

0x701d,	// (0x0001dc85) notes_bg_pane_g4

0x7025,	// (0x0001dc8d) notes_bg_pane_g5

0x702d,	// (0x0001dc95) notes_bg_pane_g6

0x7035,	// (0x0001dc9d) notes_bg_pane_g7

0x703d,	// (0x0001dca5) notes_bg_pane_g8

0x7045,	// (0x0001dcad) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00025e26) notes_bg_pane_g

0x8914,	// (0x0001f57c) list_notes_text_pane_ParamLimits

0x8914,	// (0x0001f57c) list_notes_text_pane

0x0b71,	// (0x000177d9) list_notes_text_pane_g1

0x893c,	// (0x0001f5a4) list_notes_text_pane_t1

0x0a0a,	// (0x00017672) listscroll_cale_week_pane

0x8967,	// (0x0001f5cf) bg_cale_heading_pane

0x0b8b,	// (0x000177f3) bg_cale_pane_cp01

0x8983,	// (0x0001f5eb) cale_week_corner_pane

0x8999,	// (0x0001f601) cale_week_day_heading_pane

0x89b5,	// (0x0001f61d) cale_week_scroll_pane_g1

0x89ce,	// (0x0001f636) cale_week_scroll_pane_g2

0x89df,	// (0x0001f647) cale_week_scroll_pane_g3

0x89f0,	// (0x0001f658) cale_week_scroll_pane_g4

0x8a01,	// (0x0001f669) cale_week_scroll_pane_g5

0x8a12,	// (0x0001f67a) cale_week_scroll_pane_g6

0x8a23,	// (0x0001f68b) cale_week_scroll_pane_g7

0x8a36,	// (0x0001f69e) cale_week_scroll_pane_g8

0x8a49,	// (0x0001f6b1) cale_week_scroll_pane_g9

0x8a5a,	// (0x0001f6c2) cale_week_scroll_pane_g10

0x8a6b,	// (0x0001f6d3) cale_week_scroll_pane_g11

0x8a7c,	// (0x0001f6e4) cale_week_scroll_pane_g12

0x8a8d,	// (0x0001f6f5) cale_week_scroll_pane_g13

0x8aa6,	// (0x0001f70e) cale_week_scroll_pane_g14

0x8abf,	// (0x0001f727) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00025e35) cale_week_scroll_pane_g

0x8ad8,	// (0x0001f740) cale_week_time_pane

0x8aeb,	// (0x0001f753) grid_cale_week_pane

0x8b08,	// (0x0001f770) scroll_pane_cp08

0x8b22,	// (0x0001f78a) cell_cale_week_pane_ParamLimits

0x8b22,	// (0x0001f78a) cell_cale_week_pane

0x8b6e,	// (0x0001f7d6) cale_week_day_heading_pane_t1

0x8b87,	// (0x0001f7ef) cale_week_day_heading_pane_t2

0x8ba0,	// (0x0001f808) cale_week_day_heading_pane_t3

0x8bb9,	// (0x0001f821) cale_week_day_heading_pane_t4

0x8bd2,	// (0x0001f83a) cale_week_day_heading_pane_t5

0x8beb,	// (0x0001f853) cale_week_day_heading_pane_t6

0x8c04,	// (0x0001f86c) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00025e54) cale_week_day_heading_pane_t

0x0bb6,	// (0x0001781e) bg_cale_side_pane

0x704d,	// (0x0001dcb5) cale_week_time_pane_t1

0x7065,	// (0x0001dccd) cale_week_time_pane_t2

0x707d,	// (0x0001dce5) cale_week_time_pane_t3

0x7095,	// (0x0001dcfd) cale_week_time_pane_t4

0x70ad,	// (0x0001dd15) cale_week_time_pane_t5

0x70c5,	// (0x0001dd2d) cale_week_time_pane_t6

0x70dd,	// (0x0001dd45) cale_week_time_pane_t7

0x70fd,	// (0x0001dd65) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00025e63) cale_week_time_pane_t

0x8c1d,	// (0x0001f885) cell_cale_week_pane_g2

0x8c2e,	// (0x0001f896) cell_cale_week_pane_g3_ParamLimits

0x8c2e,	// (0x0001f896) cell_cale_week_pane_g3

0x0bc4,	// (0x0001782c) grid_highlight_pane_cp07

0x0bcc,	// (0x00017834) listscroll_gms_pane

0x0bd6,	// (0x0001783e) grid_gms_pane

0x0bdf,	// (0x00017847) listscroll_gms_pane_g1

0x0be7,	// (0x0001784f) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00025e74) listscroll_gms_pane_g

0x8c46,	// (0x0001f8ae) scroll_pane_cp010

0x8c51,	// (0x0001f8b9) cell_gms_pane_ParamLimits

0x8c51,	// (0x0001f8b9) cell_gms_pane

0x8c64,	// (0x0001f8cc) cell_gms_pane_g1

0x0bef,	// (0x00017857) cell_gms_pane_g2

0x0bf7,	// (0x0001785f) cell_gms_pane_g3

0x0c00,	// (0x00017868) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00025e79) cell_gms_pane_g

0x0c09,	// (0x00017871) grid_highlight_pane_cp09

0xad63,	// (0x000219cb) phob_pre_status_pane_g1

0xad6b,	// (0x000219d3) phob_pre_status_pane_g2

0xad73,	// (0x000219db) phob_pre_status_pane_g3

0xad7b,	// (0x000219e3) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00026268) phob_pre_status_pane_g

0xad8b,	// (0x000219f3) phob_pre_status_pane_t1

0xad9b,	// (0x00021a03) phob_pre_status_pane_t2

0xadab,	// (0x00021a13) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x00026273) phob_pre_status_pane_t

0x06ba,	// (0x00017322) bg_list_pane_cp05

0x7125,	// (0x0001dd8d) grid_vorec_pane

0x712f,	// (0x0001dd97) vorec_t1

0x713d,	// (0x0001dda5) vorec_t2

0x714b,	// (0x0001ddb3) vorec_t3

0x7159,	// (0x0001ddc1) vorec_t4

0x7167,	// (0x0001ddcf) vorec_t5

0x7175,	// (0x0001dddd) vorec_t6

0x0006,

0xf21a,	// (0x00025e82) vorec_t

0x7191,	// (0x0001ddf9) wait_bar_pane_cp01

0x8c6c,	// (0x0001f8d4) cell_vorec_pane_ParamLimits

0x8c6c,	// (0x0001f8d4) cell_vorec_pane

0x0c7b,	// (0x000178e3) cell_vorec_pane_g1

0x06ba,	// (0x00017322) grid_highlight_pane_cp05

0x8c8f,	// (0x0001f8f7) cams_zoom_pane

0x8c9b,	// (0x0001f903) image_vga_pane

0x8caa,	// (0x0001f912) main_camera_pane_g1

0x8cb8,	// (0x0001f920) main_camera_pane_g2

0x8cc4,	// (0x0001f92c) main_camera_pane_g3

0x8cd0,	// (0x0001f938) main_camera_pane_g4

0x8cdc,	// (0x0001f944) main_camera_pane_g5

0x8ce8,	// (0x0001f950) main_camera_pane_g6

0x8cf4,	// (0x0001f95c) main_camera_pane_g7

0x0007,

0xf229,	// (0x00025e91) main_camera_pane_g

0x8d00,	// (0x0001f968) main_camera_pane_t1

0x8d12,	// (0x0001f97a) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00025ea2) main_camera_pane_t

0x8d33,	// (0x0001f99b) cams_zoom_pane_cp_ParamLimits

0x8d33,	// (0x0001f99b) cams_zoom_pane_cp

0x8d57,	// (0x0001f9bf) image_cif_pane_ParamLimits

0x8d57,	// (0x0001f9bf) image_cif_pane

0x8d75,	// (0x0001f9dd) image_subqcif_pane

0x8d7d,	// (0x0001f9e5) main_video_pane_g1_ParamLimits

0x8d7d,	// (0x0001f9e5) main_video_pane_g1

0x8d9d,	// (0x0001fa05) main_video_pane_g2_ParamLimits

0x8d9d,	// (0x0001fa05) main_video_pane_g2

0x8dcd,	// (0x0001fa35) main_video_pane_g3_ParamLimits

0x8dcd,	// (0x0001fa35) main_video_pane_g3

0x8df6,	// (0x0001fa5e) main_video_pane_g4_ParamLimits

0x8df6,	// (0x0001fa5e) main_video_pane_g4

0x8e1f,	// (0x0001fa87) main_video_pane_g5_ParamLimits

0x8e1f,	// (0x0001fa87) main_video_pane_g5

0x0c91,	// (0x000178f9) main_video_pane_g6_ParamLimits

0x0c91,	// (0x000178f9) main_video_pane_g6

0x0006,

0xf23f,	// (0x00025ea7) main_video_pane_g_ParamLimits

0xf23f,	// (0x00025ea7) main_video_pane_g

0x8e41,	// (0x0001faa9) main_video_pane_t1_ParamLimits

0x8e41,	// (0x0001faa9) main_video_pane_t1

0x0cab,	// (0x00017913) cams_zoom_pane_g1

0x0cb4,	// (0x0001791c) cams_zoom_pane_g2

0x0cbd,	// (0x00017925) cams_zoom_pane_g3

0x0cc6,	// (0x0001792e) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00025eb6) cams_zoom_pane_g

0x8e8b,	// (0x0001faf3) grid_cams_pane

0x8e99,	// (0x0001fb01) linegrid_cams_pane

0x8ea7,	// (0x0001fb0f) cell_cams_pane_ParamLimits

0x8ea7,	// (0x0001fb0f) cell_cams_pane

0x0ccf,	// (0x00017937) cams_burst_image_pane

0x0cd7,	// (0x0001793f) cell_cams_pane_g1

0x06ba,	// (0x00017322) grid_highlight_pane_cp03

0x0a83,	// (0x000176eb) mp_bg_pane_g1

0x06ba,	// (0x00017322) bg_list_pane_cp03

0x2b81,	// (0x000197e9) bg_mp_pane

0x2b89,	// (0x000197f1) grid_mp_pane

0x2b91,	// (0x000197f9) media_player_g1

0x2b99,	// (0x00019801) media_player_t1

0x2ba7,	// (0x0001980f) media_player_t2

0x2bb5,	// (0x0001981d) media_player_t3

0x2bc3,	// (0x0001982b) media_player_t4

0x2bd1,	// (0x00019839) media_player_t5

0x2bdf,	// (0x00019847) media_player_t6

0x2bed,	// (0x00019855) media_player_t7

0x0006,

0xf5ea,	// (0x00026252) media_player_t

0x2bfb,	// (0x00019863) wait_bar_pane_cp02

0xf5cf,	// (0x00026237) main_usb_pane_t

0xad5a,	// (0x000219c2) cell_mp_pane

0x0a83,	// (0x000176eb) cell_mp_pane_g1

0x06ba,	// (0x00017322) grid_highlight_pane_cp06

0x0d7f,	// (0x000179e7) grid_skin_colour_pane

0x0d87,	// (0x000179ef) list_highlight_pane_cp03

0x8f11,	// (0x0001fb79) skin_g1

0x0d8f,	// (0x000179f7) skin_t1

0x0d9e,	// (0x00017a06) skin_t2

0x0001,

0xf283,	// (0x00025eeb) skin_t

0x8f1b,	// (0x0001fb83) cell_skin_colour_pane_ParamLimits

0x8f1b,	// (0x0001fb83) cell_skin_colour_pane

0x0dac,	// (0x00017a14) cell_skin_colour_pane_g1

0x8f9f,	// (0x0001fc07) call_video_g1_ParamLimits

0x8f9f,	// (0x0001fc07) call_video_g1

0x8faf,	// (0x0001fc17) call_video_g2_ParamLimits

0x8faf,	// (0x0001fc17) call_video_g2

0x0001,

0xf288,	// (0x00025ef0) call_video_g_ParamLimits

0xf288,	// (0x00025ef0) call_video_g

0x9009,	// (0x0001fc71) call_video_uplink_pane_cp1_ParamLimits

0x9009,	// (0x0001fc71) call_video_uplink_pane_cp1

0x0dbe,	// (0x00017a26) call_video_uplink_pane_cp2

0x90d5,	// (0x0001fd3d) video_down_crop_pane_ParamLimits

0x90d5,	// (0x0001fd3d) video_down_crop_pane

0x91d3,	// (0x0001fe3b) video_down_pane_ParamLimits

0x91d3,	// (0x0001fe3b) video_down_pane

0x0dc6,	// (0x00017a2e) video_down_subqcif_pane_ParamLimits

0x0dc6,	// (0x00017a2e) video_down_subqcif_pane

0x0dde,	// (0x00017a46) video_down_subqcif_pane_cp_ParamLimits

0x0dde,	// (0x00017a46) video_down_subqcif_pane_cp

0x0e04,	// (0x00017a6c) im_reading_pane_ParamLimits

0x0e04,	// (0x00017a6c) im_reading_pane

0x92f5,	// (0x0001ff5d) im_writing_pane_ParamLimits

0x92f5,	// (0x0001ff5d) im_writing_pane

0x9313,	// (0x0001ff7b) im_reading_pane_t1

0x0e1e,	// (0x00017a86) list_im_pane

0x0e2f,	// (0x00017a97) scroll_pane_cp07

0x9367,	// (0x0001ffcf) im_writing_pane_t1_ParamLimits

0x9367,	// (0x0001ffcf) im_writing_pane_t1

0x0e48,	// (0x00017ab0) im_writing_pane_t2_ParamLimits

0x0e48,	// (0x00017ab0) im_writing_pane_t2

0x0001,

0xf292,	// (0x00025efa) im_writing_pane_t_ParamLimits

0xf292,	// (0x00025efa) im_writing_pane_t

0x06ba,	// (0x00017322) input_focus_pane_cp04

0x06ba,	// (0x00017322) input_focus_pane_cp05

0x937c,	// (0x0001ffe4) list_im_single_pane_ParamLimits

0x937c,	// (0x0001ffe4) list_im_single_pane

0x93a0,	// (0x00020008) list_single_im_pane_t1

0xad1e,	// (0x00021986) blid_accuracy_pane

0xad26,	// (0x0002198e) blid_compass_pane

0xad30,	// (0x00021998) main_location_t1

0xad3e,	// (0x000219a6) main_location_t2

0xad4c,	// (0x000219b4) main_location_t3

0x0002,

0xf5f9,	// (0x00026261) main_location_t

0x06ba,	// (0x00017322) aid_levels_location

0x0a83,	// (0x000176eb) blid_accuracy_pane_g1

0x0a83,	// (0x000176eb) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00025f5c) blid_accuracy_pane_g

0x0e90,	// (0x00017af8) wml_content_pane

0x0ece,	// (0x00017b36) wml_button_pane_ParamLimits

0x0ece,	// (0x00017b36) wml_button_pane

0x93af,	// (0x00020017) wml_list_single_large_pane_ParamLimits

0x93af,	// (0x00020017) wml_list_single_large_pane

0x93d9,	// (0x00020041) wml_list_single_medium_pane_ParamLimits

0x93d9,	// (0x00020041) wml_list_single_medium_pane

0x940a,	// (0x00020072) wml_list_single_small_pane_ParamLimits

0x940a,	// (0x00020072) wml_list_single_small_pane

0x0ee2,	// (0x00017b4a) wml_selection_box_pane_ParamLimits

0x0ee2,	// (0x00017b4a) wml_selection_box_pane

0x0ef5,	// (0x00017b5d) wml_list_single_pane_t1

0x0f04,	// (0x00017b6c) wml_list_single_medium_pane_t1

0x0f13,	// (0x00017b7b) wml_list_single_large_pane_t1

0x0f22,	// (0x00017b8a) input_focus_pane_cp02_ParamLimits

0x0f22,	// (0x00017b8a) input_focus_pane_cp02

0x0f35,	// (0x00017b9d) wml_selection_box_pane_g1

0x0f3e,	// (0x00017ba6) wml_selection_box_pane_t1_ParamLimits

0x0f3e,	// (0x00017ba6) wml_selection_box_pane_t1

0x0915,	// (0x0001757d) bg_wml_button_pane_ParamLimits

0x0915,	// (0x0001757d) bg_wml_button_pane

0x0f56,	// (0x00017bbe) wml_button_pane_g1

0x0f5e,	// (0x00017bc6) wml_button_pane_t1

0x0f56,	// (0x00017bbe) wml_button_bg_pane_g1

0x0f6e,	// (0x00017bd6) wml_button_bg_pane_g2

0x0f76,	// (0x00017bde) wml_button_bg_pane_g3

0x0f7e,	// (0x00017be6) wml_button_bg_pane_g4

0x0f86,	// (0x00017bee) wml_button_bg_pane_g5

0x0f8e,	// (0x00017bf6) wml_button_bg_pane_g6

0x0f96,	// (0x00017bfe) wml_button_bg_pane_g7

0x0f9e,	// (0x00017c06) wml_button_bg_pane_g8

0x0fa6,	// (0x00017c0e) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00025eff) wml_button_bg_pane_g

0x9444,	// (0x000200ac) bg_list_pane_cp02

0x0fae,	// (0x00017c16) mce_header_pane_ParamLimits

0x0fae,	// (0x00017c16) mce_header_pane

0x0fc4,	// (0x00017c2c) mce_icon_pane

0x0fc4,	// (0x00017c2c) mce_image_pane

0x0fcd,	// (0x00017c35) mce_text_pane_ParamLimits

0x0fcd,	// (0x00017c35) mce_text_pane

0x944e,	// (0x000200b6) scroll_pane_cp03

0x0ec6,	// (0x00017b2e) scroll_pane_cp04

0x0fe0,	// (0x00017c48) scroll_pane_cp05_ParamLimits

0x0fe0,	// (0x00017c48) scroll_pane_cp05

0x9458,	// (0x000200c0) mce_header_field_pane_ParamLimits

0x9458,	// (0x000200c0) mce_header_field_pane

0x9478,	// (0x000200e0) mce_header_field_pane_2_ParamLimits

0x9478,	// (0x000200e0) mce_header_field_pane_2

0x948e,	// (0x000200f6) mce_header_field_pane_3

0x9496,	// (0x000200fe) list_single_mce_message_pane_ParamLimits

0x9496,	// (0x000200fe) list_single_mce_message_pane

0x94bb,	// (0x00020123) list_single_mce_smart_pane_ParamLimits

0x94bb,	// (0x00020123) list_single_mce_smart_pane

0x0fec,	// (0x00017c54) input_focus_pane_cp03

0x0ff5,	// (0x00017c5d) list_header_data_pane

0x94eb,	// (0x00020153) mce_header_field_pane_t1

0x94f9,	// (0x00020161) list_single_mce_header_pane_ParamLimits

0x94f9,	// (0x00020161) list_single_mce_header_pane

0x0ffd,	// (0x00017c65) list_single_mce_header_pane_t1

0x100c,	// (0x00017c74) list_single_mce_message_pane_g1

0x1014,	// (0x00017c7c) list_single_mce_message_pane_t1

0x953d,	// (0x000201a5) bg_cale_heading_pane_cp01_ParamLimits

0x953d,	// (0x000201a5) bg_cale_heading_pane_cp01

0x1022,	// (0x00017c8a) bg_cale_pane_cp02_ParamLimits

0x1022,	// (0x00017c8a) bg_cale_pane_cp02

0x9570,	// (0x000201d8) cale_month_corner_pane

0x9586,	// (0x000201ee) cale_month_day_heading_pane_ParamLimits

0x9586,	// (0x000201ee) cale_month_day_heading_pane

0x95c9,	// (0x00020231) cale_month_pane_g1_ParamLimits

0x95c9,	// (0x00020231) cale_month_pane_g1

0x95f5,	// (0x0002025d) cale_month_pane_g2_ParamLimits

0x95f5,	// (0x0002025d) cale_month_pane_g2

0x9618,	// (0x00020280) cale_month_pane_g3_ParamLimits

0x9618,	// (0x00020280) cale_month_pane_g3

0x9654,	// (0x000202bc) cale_month_pane_g4_ParamLimits

0x9654,	// (0x000202bc) cale_month_pane_g4

0x9690,	// (0x000202f8) cale_month_pane_g5_ParamLimits

0x9690,	// (0x000202f8) cale_month_pane_g5

0x96cc,	// (0x00020334) cale_month_pane_g6_ParamLimits

0x96cc,	// (0x00020334) cale_month_pane_g6

0x9708,	// (0x00020370) cale_month_pane_g7_ParamLimits

0x9708,	// (0x00020370) cale_month_pane_g7

0x9754,	// (0x000203bc) cale_month_pane_g8_ParamLimits

0x9754,	// (0x000203bc) cale_month_pane_g8

0x97a0,	// (0x00020408) cale_month_pane_g9_ParamLimits

0x97a0,	// (0x00020408) cale_month_pane_g9

0x97e6,	// (0x0002044e) cale_month_pane_g10_ParamLimits

0x97e6,	// (0x0002044e) cale_month_pane_g10

0x9820,	// (0x00020488) cale_month_pane_g11_ParamLimits

0x9820,	// (0x00020488) cale_month_pane_g11

0x985e,	// (0x000204c6) cale_month_pane_g12_ParamLimits

0x985e,	// (0x000204c6) cale_month_pane_g12

0x989c,	// (0x00020504) cale_month_pane_g13_ParamLimits

0x989c,	// (0x00020504) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00025f12) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00025f12) cale_month_pane_g

0x98da,	// (0x00020542) cale_month_week_pane

0x98ed,	// (0x00020555) grid_cale_month_pane_ParamLimits

0x98ed,	// (0x00020555) grid_cale_month_pane

0x992b,	// (0x00020593) cale_month_day_heading_pane_t1

0x9989,	// (0x000205f1) cale_month_day_heading_pane_t2

0x99ee,	// (0x00020656) cale_month_day_heading_pane_t3

0x9a53,	// (0x000206bb) cale_month_day_heading_pane_t4

0x9ab8,	// (0x00020720) cale_month_day_heading_pane_t5

0x9b1d,	// (0x00020785) cale_month_day_heading_pane_t6

0x9b82,	// (0x000207ea) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00025f2d) cale_month_day_heading_pane_t

0x0bb6,	// (0x0001781e) bg_cale_side_pane_cp01

0x9bf7,	// (0x0002085f) cale_month_week_pane_t1

0x9c0e,	// (0x00020876) cale_month_week_pane_t2

0x9c25,	// (0x0002088d) cale_month_week_pane_t3

0x9c3c,	// (0x000208a4) cale_month_week_pane_t4

0x9c53,	// (0x000208bb) cale_month_week_pane_t5

0x9c6e,	// (0x000208d6) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00025f3c) cale_month_week_pane_t

0x9c8d,	// (0x000208f5) cell_cale_month_pane_ParamLimits

0x9c8d,	// (0x000208f5) cell_cale_month_pane

0x7199,	// (0x0001de01) cell_cale_month_pane_g1

0x71a5,	// (0x0001de0d) cell_cale_month_pane_t1_ParamLimits

0x71a5,	// (0x0001de0d) cell_cale_month_pane_t1

0x0bc4,	// (0x0001782c) grid_highlight_pane_cp08

0x0a83,	// (0x000176eb) main_smil_g1

0x9d53,	// (0x000209bb) smil_status_pane

0x108d,	// (0x00017cf5) smil_text_pane

0x2aa1,	// (0x00019709) bg_popup_call3_rect_pane_g8

0x2aa9,	// (0x00019711) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000261f5) bg_popup_call3_rect_pane_g

0x2d36,	// (0x0001999e) smil_status_volume_pane_g1

0x1097,	// (0x00017cff) smil_status_pane_t1

0x72db,	// (0x0001df43) volume_smil_pane

0x10ae,	// (0x00017d16) list_smil_text_pane

0x9d66,	// (0x000209ce) scroll_pane_cp011

0x9d71,	// (0x000209d9) smil_text_list_pane_t1_ParamLimits

0x9d71,	// (0x000209d9) smil_text_list_pane_t1

0x71c1,	// (0x0001de29) aid_volume_smil_ParamLimits

0x71c1,	// (0x0001de29) aid_volume_smil

0x0a83,	// (0x000176eb) smil_volume_pane_g1

0x0a83,	// (0x000176eb) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00025f5c) smil_volume_pane_g

0x0a0a,	// (0x00017672) listscroll_cale_day_pane

0x10da,	// (0x00017d42) bg_cale_pane

0x10f2,	// (0x00017d5a) list_cale_pane

0x1103,	// (0x00017d6b) scroll_pane_cp09

0x1114,	// (0x00017d7c) cale_bg_pane_g1

0x111c,	// (0x00017d84) cale_bg_pane_g2

0x1124,	// (0x00017d8c) cale_bg_pane_g3

0x112c,	// (0x00017d94) cale_bg_pane_g4

0x1134,	// (0x00017d9c) cale_bg_pane_g5

0x113c,	// (0x00017da4) cale_bg_pane_g6

0x1144,	// (0x00017dac) cale_bg_pane_g7

0x114c,	// (0x00017db4) cale_bg_pane_g8

0x1154,	// (0x00017dbc) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00025f61) cale_bg_pane_g

0x9de9,	// (0x00020a51) list_cale_time_pane_ParamLimits

0x9de9,	// (0x00020a51) list_cale_time_pane

0x115c,	// (0x00017dc4) list_cale_time_pane_g1_ParamLimits

0x115c,	// (0x00017dc4) list_cale_time_pane_g1

0x1168,	// (0x00017dd0) list_cale_time_pane_g2_ParamLimits

0x1168,	// (0x00017dd0) list_cale_time_pane_g2

0x9e05,	// (0x00020a6d) list_cale_time_pane_g3_ParamLimits

0x9e05,	// (0x00020a6d) list_cale_time_pane_g3

0x9e13,	// (0x00020a7b) list_cale_time_pane_g4_ParamLimits

0x9e13,	// (0x00020a7b) list_cale_time_pane_g4

0x9e21,	// (0x00020a89) list_cale_time_pane_g5_ParamLimits

0x9e21,	// (0x00020a89) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00025f74) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00025f74) list_cale_time_pane_g

0x1182,	// (0x00017dea) list_cale_time_pane_t1_ParamLimits

0x1182,	// (0x00017dea) list_cale_time_pane_t1

0x11aa,	// (0x00017e12) list_cale_time_pane_t2_ParamLimits

0x11aa,	// (0x00017e12) list_cale_time_pane_t2

0xa0df,	// (0x00020d47) aid_blid_cardinal_pane

0xa121,	// (0x00020d89) compass_pane_t4

0x11d2,	// (0x00017e3a) list_cale_time_pane_t4_ParamLimits

0x11d2,	// (0x00017e3a) list_cale_time_pane_t4

0xa12f,	// (0x00020d97) compass_pane_t5

0xa13f,	// (0x00020da7) compass_pane_t6

0xa14d,	// (0x00020db5) compass_pane_t7

0x16f1,	// (0x00018359) navi_pane_cc_t1

0x1858,	// (0x000184c0) aid_phob_thumbnail_center_pane

0xa824,	// (0x0002148c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00025f81) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00025f81) list_cale_time_pane_t

0x0311,	// (0x00016f79) bg_popup_window_pane_cp02_ParamLimits

0x0311,	// (0x00016f79) bg_popup_window_pane_cp02

0x11fa,	// (0x00017e62) heading_pane_cp01_ParamLimits

0x11fa,	// (0x00017e62) heading_pane_cp01

0x1206,	// (0x00017e6e) loc_req_pane_ParamLimits

0x1206,	// (0x00017e6e) loc_req_pane

0x1216,	// (0x00017e7e) loc_type_pane_ParamLimits

0x1216,	// (0x00017e7e) loc_type_pane

0x1228,	// (0x00017e90) loc_type_pane_t1_ParamLimits

0x1228,	// (0x00017e90) loc_type_pane_t1

0x123a,	// (0x00017ea2) loc_type_pane_t2_ParamLimits

0x123a,	// (0x00017ea2) loc_type_pane_t2

0x124c,	// (0x00017eb4) loc_type_pane_t3_ParamLimits

0x124c,	// (0x00017eb4) loc_type_pane_t3

0x0002,

0xf320,	// (0x00025f88) loc_type_pane_t_ParamLimits

0xf320,	// (0x00025f88) loc_type_pane_t

0x125e,	// (0x00017ec6) list_loc_req_pane

0x1268,	// (0x00017ed0) scroll_pane_cp012

0x9e2f,	// (0x00020a97) list_single_loc_request_popup_menu_pane_ParamLimits

0x9e2f,	// (0x00020a97) list_single_loc_request_popup_menu_pane

0x1273,	// (0x00017edb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1273,	// (0x00017edb) list_single_loc_request_popup_menu_pane_g1

0x127f,	// (0x00017ee7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x127f,	// (0x00017ee7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00025f8f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00025f8f) list_single_loc_request_popup_menu_pane_g

0x128b,	// (0x00017ef3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x128b,	// (0x00017ef3) list_single_loc_request_popup_menu_pane_t1

0x9e41,	// (0x00020aa9) bg_popup_window_pane_cp03_ParamLimits

0x9e41,	// (0x00020aa9) bg_popup_window_pane_cp03

0x9e4f,	// (0x00020ab7) heading_loc_req_pane_ParamLimits

0x9e4f,	// (0x00020ab7) heading_loc_req_pane

0x9e5b,	// (0x00020ac3) popup_dyc_status_message_window_g1_ParamLimits

0x9e5b,	// (0x00020ac3) popup_dyc_status_message_window_g1

0x9e67,	// (0x00020acf) popup_dyc_status_message_window_t1_ParamLimits

0x9e67,	// (0x00020acf) popup_dyc_status_message_window_t1

0x9e79,	// (0x00020ae1) popup_dyc_status_message_window_t2_ParamLimits

0x9e79,	// (0x00020ae1) popup_dyc_status_message_window_t2

0x9e8b,	// (0x00020af3) popup_dyc_status_message_window_t3_ParamLimits

0x9e8b,	// (0x00020af3) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00025f94) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00025f94) popup_dyc_status_message_window_t

0x06ba,	// (0x00017322) bg_heading_pane_cp01

0x12ad,	// (0x00017f15) heading_loc_req_pane_g1

0x12b5,	// (0x00017f1d) heading_loc_req_pane_g2

0x12bd,	// (0x00017f25) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00025f9b) heading_loc_req_pane_g

0x12c5,	// (0x00017f2d) heading_loc_req_pane_t1

0x1349,	// (0x00017fb1) bg_popup_sub_pane_cp01_ParamLimits

0x1349,	// (0x00017fb1) bg_popup_sub_pane_cp01

0x1357,	// (0x00017fbf) popup_cale_events_window_g1_ParamLimits

0x1357,	// (0x00017fbf) popup_cale_events_window_g1

0x1377,	// (0x00017fdf) popup_cale_events_window_g2_ParamLimits

0x1377,	// (0x00017fdf) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00025fcf) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00025fcf) popup_cale_events_window_g

0x1397,	// (0x00017fff) popup_cale_events_window_t1_ParamLimits

0x1397,	// (0x00017fff) popup_cale_events_window_t1

0x13a9,	// (0x00018011) popup_cale_events_window_t2_ParamLimits

0x13a9,	// (0x00018011) popup_cale_events_window_t2

0x13e7,	// (0x0001804f) popup_cale_events_window_t3_ParamLimits

0x13e7,	// (0x0001804f) popup_cale_events_window_t3

0x1421,	// (0x00018089) popup_cale_events_window_t4_ParamLimits

0x1421,	// (0x00018089) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00025fd4) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00025fd4) popup_cale_events_window_t

0x9f0f,	// (0x00020b77) call_type_pane

0x1870,	// (0x000184d8) popup_call_status_window_g1

0x9f1b,	// (0x00020b83) popup_call_status_window_g2

0x9f27,	// (0x00020b8f) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00025fdd) popup_call_status_window_g

0x1457,	// (0x000180bf) call_type_pane_g1

0x1460,	// (0x000180c8) call_type_pane_g2

0x0001,

0xf37c,	// (0x00025fe4) call_type_pane_g

0x06ba,	// (0x00017322) bg_popup_sub_pane_cp02

0x1469,	// (0x000180d1) listscroll_popup_wml_pane

0x1471,	// (0x000180d9) list_wml_pane

0x147b,	// (0x000180e3) scroll_pane_cp013

0x1486,	// (0x000180ee) list_single_graphic_popup_wml_pane_ParamLimits

0x1486,	// (0x000180ee) list_single_graphic_popup_wml_pane

0x0a83,	// (0x000176eb) list_single_graphic_popup_wml_pane_g1

0x149a,	// (0x00018102) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00025fe9) list_single_graphic_popup_wml_pane_g

0x14a2,	// (0x0001810a) list_single_graphic_popup_wml_pane_t1

0x14b0,	// (0x00018118) aid_call_pane

0x090d,	// (0x00017575) popup_clock_analogue_window_g1

0x090d,	// (0x00017575) popup_clock_analogue_window_g2

0x71e3,	// (0x0001de4b) popup_clock_analogue_window_g3

0x71e3,	// (0x0001de4b) popup_clock_analogue_window_g4

0x0a83,	// (0x000176eb) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00025fee) popup_clock_analogue_window_g

0x71eb,	// (0x0001de53) popup_clock_analogue_window_t1

0x71f9,	// (0x0001de61) clock_digital_number_pane_ParamLimits

0x71f9,	// (0x0001de61) clock_digital_number_pane

0x7205,	// (0x0001de6d) clock_digital_number_pane_cp02_ParamLimits

0x7205,	// (0x0001de6d) clock_digital_number_pane_cp02

0x7211,	// (0x0001de79) clock_digital_number_pane_cp03_ParamLimits

0x7211,	// (0x0001de79) clock_digital_number_pane_cp03

0x721d,	// (0x0001de85) clock_digital_number_pane_cp04_ParamLimits

0x721d,	// (0x0001de85) clock_digital_number_pane_cp04

0x722d,	// (0x0001de95) clock_digital_separator_pane_ParamLimits

0x722d,	// (0x0001de95) clock_digital_separator_pane

0x7239,	// (0x0001dea1) popup_clock_digital_window_t1

0x0a83,	// (0x000176eb) clock_digital_number_pane_g1

0x0a83,	// (0x000176eb) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00025f5c) clock_digital_number_pane_g

0x0a83,	// (0x000176eb) clock_digital_separator_pane_g1

0x0a83,	// (0x000176eb) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00025f5c) clock_digital_separator_pane_g

0x06ba,	// (0x00017322) bg_popup_window_pane_cp04

0x1533,	// (0x0001819b) heading_pane_cp03

0x153b,	// (0x000181a3) listscroll_popup_gms_pane

0x1543,	// (0x000181ab) grid_large_graphic_popup_pane

0x154d,	// (0x000181b5) listscroll_popup_gms_pane_g1

0x1555,	// (0x000181bd) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00025ff9) listscroll_popup_gms_pane_g

0x0ec6,	// (0x00017b2e) scroll_pane_cp014

0x9f33,	// (0x00020b9b) cell_large_graphic_popup_pane_ParamLimits

0x9f33,	// (0x00020b9b) cell_large_graphic_popup_pane

0x9f4b,	// (0x00020bb3) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f4b,	// (0x00020bb3) cell_large_graphic_popup_pane_g1

0x155d,	// (0x000181c5) cell_large_graphic_popup_pane_g2_ParamLimits

0x155d,	// (0x000181c5) cell_large_graphic_popup_pane_g2

0x1569,	// (0x000181d1) cell_large_graphic_popup_pane_g3_ParamLimits

0x1569,	// (0x000181d1) cell_large_graphic_popup_pane_g3

0x1576,	// (0x000181de) cell_large_graphic_popup_pane_g4_ParamLimits

0x1576,	// (0x000181de) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00025ffe) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00025ffe) cell_large_graphic_popup_pane_g

0x1586,	// (0x000181ee) grid_highlight_pane_cp010

0x0a83,	// (0x000176eb) bg_popup_call_pane_g1

0x1590,	// (0x000181f8) list_single_graphic_popup_conf_pane_ParamLimits

0x1590,	// (0x000181f8) list_single_graphic_popup_conf_pane

0x15a3,	// (0x0001820b) list_highlight_pane_cp01

0x15ac,	// (0x00018214) list_single_graphic_popup_conf_pane_g1

0x15b4,	// (0x0001821c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00026007) list_single_graphic_popup_conf_pane_g

0x15bc,	// (0x00018224) list_single_graphic_popup_conf_pane_t1

0x15ca,	// (0x00018232) linegrid_cams_pane_g1

0x9f57,	// (0x00020bbf) linegrid_cams_pane_g2

0x0bf7,	// (0x0001785f) linegrid_cams_pane_g3

0x15d3,	// (0x0001823b) linegrid_cams_pane_g4

0x9f60,	// (0x00020bc8) linegrid_cams_pane_g5

0x9f69,	// (0x00020bd1) linegrid_cams_pane_g6

0x0c00,	// (0x00017868) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0002600c) linegrid_cams_pane_g

0x15dc,	// (0x00018244) popup_clock_analogue_window

0x15dc,	// (0x00018244) popup_clock_digital_window

0x06ba,	// (0x00017322) popup_phob_thumbnail_window

0x0a83,	// (0x000176eb) call_video_uplink_pane_g1

0x15e5,	// (0x0001824d) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0002601b) call_video_uplink_pane_g

0x15ed,	// (0x00018255) video_uplink_pane

0x15f5,	// (0x0001825d) mce_image_pane_g1

0x9f72,	// (0x00020bda) mce_image_pane_g2

0x9f7c,	// (0x00020be4) mce_image_pane_g3

0x9f84,	// (0x00020bec) mce_image_pane_g4

0x9f8c,	// (0x00020bf4) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00026020) mce_image_pane_g

0x15ff,	// (0x00018267) control_top_pane_stacon_cp01_ParamLimits

0x15ff,	// (0x00018267) control_top_pane_stacon_cp01

0x1613,	// (0x0001827b) uni_indicator_pane_stacon_cp01_ParamLimits

0x1613,	// (0x0001827b) uni_indicator_pane_stacon_cp01

0x1624,	// (0x0001828c) bg_popup_sub_pane_cp03

0x9f94,	// (0x00020bfc) chi_dic_find_pane

0x9f9c,	// (0x00020c04) listscroll_chi_dic_pane

0x9fa5,	// (0x00020c0d) main_pane_chidic_g1

0x162e,	// (0x00018296) chi_dic_find_pane_t1

0x163c,	// (0x000182a4) find_chidic_pane

0x1645,	// (0x000182ad) chi_dic_list_pane_ParamLimits

0x1645,	// (0x000182ad) chi_dic_list_pane

0x1656,	// (0x000182be) scroll_pane_cp020

0x165e,	// (0x000182c6) find_chidic_pane_t1

0x06ba,	// (0x00017322) input_focus_pane_cp06

0x9fb8,	// (0x00020c20) list_chi_dic_pane_ParamLimits

0x9fb8,	// (0x00020c20) list_chi_dic_pane

0x9fd2,	// (0x00020c3a) list_chi_dic_pane_t1_ParamLimits

0x9fd2,	// (0x00020c3a) list_chi_dic_pane_t1

0x06ba,	// (0x00017322) list_highlight_pane_cp020

0x166d,	// (0x000182d5) bg_cale_heading_pane_g1

0x9fe5,	// (0x00020c4d) bg_cale_heading_pane_g2

0x9fed,	// (0x00020c55) bg_cale_heading_pane_g3

0x9ff5,	// (0x00020c5d) bg_cale_heading_pane_g4

0x9fff,	// (0x00020c67) bg_cale_heading_pane_g5

0xa009,	// (0x00020c71) bg_cale_heading_pane_g6

0xa011,	// (0x00020c79) bg_cale_heading_pane_g7

0xa019,	// (0x00020c81) bg_cale_heading_pane_g8

0xa023,	// (0x00020c8b) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0002602b) bg_cale_heading_pane_g

0x166d,	// (0x000182d5) bg_cale_side_pane_g1

0xa02d,	// (0x00020c95) bg_cale_side_pane_g2

0xa037,	// (0x00020c9f) bg_cale_side_pane_g3

0xa041,	// (0x00020ca9) bg_cale_side_pane_g4

0xa04b,	// (0x00020cb3) bg_cale_side_pane_g5

0xa055,	// (0x00020cbd) bg_cale_side_pane_g6

0xa05f,	// (0x00020cc7) bg_cale_side_pane_g7

0xa069,	// (0x00020cd1) bg_cale_side_pane_g8

0xa071,	// (0x00020cd9) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0002603e) bg_cale_side_pane_g

0xa079,	// (0x00020ce1) popup_call_status_window_ParamLimits

0xa079,	// (0x00020ce1) popup_call_status_window

0x1675,	// (0x000182dd) stacon_top_pane

0x167d,	// (0x000182e5) status_pane_ParamLimits

0x167d,	// (0x000182e5) status_pane

0x1692,	// (0x000182fa) status_small_pane

0x169a,	// (0x00018302) control_pane

0x06ba,	// (0x00017322) stacon_bottom_pane

0x16a2,	// (0x0001830a) list_single_mce_smart_pane_t1_ParamLimits

0x16a2,	// (0x0001830a) list_single_mce_smart_pane_t1

0x16b5,	// (0x0001831d) list_single_mce_smart_pane_t2_ParamLimits

0x16b5,	// (0x0001831d) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00026051) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00026051) list_single_mce_smart_pane_t

0xa085,	// (0x00020ced) compass_pane

0xa091,	// (0x00020cf9) main_location2_pane_t1

0xa0a5,	// (0x00020d0d) main_location2_pane_t2

0xa0b9,	// (0x00020d21) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00026056) main_location2_pane_t

0x16d4,	// (0x0001833c) compass_pane_g1_ParamLimits

0x16d4,	// (0x0001833c) compass_pane_g1

0xa103,	// (0x00020d6b) compass_pane_t1

0xa112,	// (0x00020d7a) compass_pane_t2

0x0005,

0xf3f7,	// (0x0002605f) compass_pane_t

0xa15d,	// (0x00020dc5) text_secondary_cp61

0x16e8,	// (0x00018350) navi_pane_cams_g5

0x170b,	// (0x00018373) navi_pane_im_t1

0x1719,	// (0x00018381) navi_pane_mp_g1_ParamLimits

0x1719,	// (0x00018381) navi_pane_mp_g1

0x172d,	// (0x00018395) navi_pane_mp_g2_ParamLimits

0x172d,	// (0x00018395) navi_pane_mp_g2

0x1739,	// (0x000183a1) navi_pane_mp_g3_ParamLimits

0x1739,	// (0x000183a1) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00026073) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00026073) navi_pane_mp_g

0x1745,	// (0x000183ad) navi_pane_mp_t1

0x1753,	// (0x000183bb) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0002607a) navi_pane_mp_t

0x178f,	// (0x000183f7) navi_pane_vt_g1

0x1745,	// (0x000183ad) navi_pane_vt_t1

0x1797,	// (0x000183ff) navi_slider_pane

0x179f,	// (0x00018407) zooming_pane

0x17a7,	// (0x0001840f) navi_slider_pane_g1

0x7256,	// (0x0001debe) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00026081) navi_slider_pane_g

0x17dd,	// (0x00018445) aid_levels_zoom

0x17e5,	// (0x0001844d) zooming_pane_g1

0x17ed,	// (0x00018455) zooming_pane_g2

0x17ed,	// (0x00018455) zooming_pane_g3

0x0002,

0xf428,	// (0x00026090) zooming_pane_g

0x17f5,	// (0x0001845d) level_10_zoom

0x17fe,	// (0x00018466) level_11_zoom

0x1807,	// (0x0001846f) level_1_zoom

0x1810,	// (0x00018478) level_2_zoom

0x1819,	// (0x00018481) level_3_zoom

0x1822,	// (0x0001848a) level_4_zoom

0x182b,	// (0x00018493) level_5_zoom

0x1834,	// (0x0001849c) level_6_zoom

0x183d,	// (0x000184a5) level_7_zoom

0x1846,	// (0x000184ae) level_8_zoom

0x184f,	// (0x000184b7) level_9_zoom

0x1860,	// (0x000184c8) popup_phob_thumbnail_window_g1

0x1868,	// (0x000184d0) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00026097) popup_phob_thumbnail_window_g

0x2c03,	// (0x0001986b) level_1_location

0x2c0b,	// (0x00019873) level_2_location

0x2c13,	// (0x0001987b) level_3_location

0x2c1b,	// (0x00019883) level_4_location

0x179f,	// (0x00018407) level_5_location

0xa288,	// (0x00020ef0) mce_icon_pane_g1

0xa290,	// (0x00020ef8) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0002609c) mce_icon_pane_g

0xa298,	// (0x00020f00) main_mup_pane_g1_ParamLimits

0xa298,	// (0x00020f00) main_mup_pane_g1

0xa2b0,	// (0x00020f18) main_mup_pane_g2_ParamLimits

0xa2b0,	// (0x00020f18) main_mup_pane_g2

0xa2cc,	// (0x00020f34) main_mup_pane_g3_ParamLimits

0xa2cc,	// (0x00020f34) main_mup_pane_g3

0xa2e8,	// (0x00020f50) main_mup_pane_g4_ParamLimits

0xa2e8,	// (0x00020f50) main_mup_pane_g4

0xa304,	// (0x00020f6c) main_mup_pane_g5_ParamLimits

0xa304,	// (0x00020f6c) main_mup_pane_g5

0xa325,	// (0x00020f8d) main_mup_pane_g6_ParamLimits

0xa325,	// (0x00020f8d) main_mup_pane_g6

0xa341,	// (0x00020fa9) main_mup_pane_g7_ParamLimits

0xa341,	// (0x00020fa9) main_mup_pane_g7

0xa35d,	// (0x00020fc5) main_mup_pane_g8_ParamLimits

0xa35d,	// (0x00020fc5) main_mup_pane_g8

0xa37d,	// (0x00020fe5) main_mup_pane_g9_ParamLimits

0xa37d,	// (0x00020fe5) main_mup_pane_g9

0xa39c,	// (0x00021004) main_mup_pane_g10_ParamLimits

0xa39c,	// (0x00021004) main_mup_pane_g10

0xa3bb,	// (0x00021023) main_mup_pane_g11_ParamLimits

0xa3bb,	// (0x00021023) main_mup_pane_g11

0xa3d3,	// (0x0002103b) main_mup_pane_g12_ParamLimits

0xa3d3,	// (0x0002103b) main_mup_pane_g12

0xa3e1,	// (0x00021049) main_mup_pane_g13_ParamLimits

0xa3e1,	// (0x00021049) main_mup_pane_g13

0x000c,

0xf439,	// (0x000260a1) main_mup_pane_g_ParamLimits

0xf439,	// (0x000260a1) main_mup_pane_g

0xa3f7,	// (0x0002105f) main_mup_pane_t1_ParamLimits

0xa3f7,	// (0x0002105f) main_mup_pane_t1

0xa414,	// (0x0002107c) main_mup_pane_t2_ParamLimits

0xa414,	// (0x0002107c) main_mup_pane_t2

0xa42e,	// (0x00021096) main_mup_pane_t3_ParamLimits

0xa42e,	// (0x00021096) main_mup_pane_t3

0xa448,	// (0x000210b0) main_mup_pane_t4_ParamLimits

0xa448,	// (0x000210b0) main_mup_pane_t4

0xa45a,	// (0x000210c2) main_mup_pane_t5_ParamLimits

0xa45a,	// (0x000210c2) main_mup_pane_t5

0xa46c,	// (0x000210d4) main_mup_pane_t6_ParamLimits

0xa46c,	// (0x000210d4) main_mup_pane_t6

0x0005,

0xf454,	// (0x000260bc) main_mup_pane_t_ParamLimits

0xf454,	// (0x000260bc) main_mup_pane_t

0xa482,	// (0x000210ea) mup_progress_pane_ParamLimits

0xa482,	// (0x000210ea) mup_progress_pane

0xa48e,	// (0x000210f6) mup_visualizer_pane_ParamLimits

0xa48e,	// (0x000210f6) mup_visualizer_pane

0xa4c8,	// (0x00021130) mup_volume_pane_ParamLimits

0xa4c8,	// (0x00021130) mup_volume_pane

0x1870,	// (0x000184d8) mup_visualizer_pane_g1_ParamLimits

0x1870,	// (0x000184d8) mup_visualizer_pane_g1

0x1870,	// (0x000184d8) mup_visualizer_pane_g2_ParamLimits

0x1870,	// (0x000184d8) mup_visualizer_pane_g2

0x16d4,	// (0x0001833c) mup_visualizer_pane_g3_ParamLimits

0x16d4,	// (0x0001833c) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x000260c9) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x000260c9) mup_visualizer_pane_g

0x0a83,	// (0x000176eb) mup_volume_pane_g1

0x1886,	// (0x000184ee) mup_volume_pane_g2

0x0001,

0xf468,	// (0x000260d0) mup_volume_pane_g

0x0a83,	// (0x000176eb) mup_progress_pane_g1

0x188f,	// (0x000184f7) mup_progress_pane_g2

0x1898,	// (0x00018500) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000260d5) mup_progress_pane_g

0x06ba,	// (0x00017322) bg_popup_window_pane_cp05

0x18a1,	// (0x00018509) heading_pane_cp02_ParamLimits

0x18a1,	// (0x00018509) heading_pane_cp02

0x18bb,	// (0x00018523) list_popup_blid_pane

0x18c3,	// (0x0001852b) list_blid_sat_info_pane_ParamLimits

0x18c3,	// (0x0001852b) list_blid_sat_info_pane

0x18d6,	// (0x0001853e) list_blid_sat_info_pane_g1

0x18de,	// (0x00018546) list_blid_sat_info_pane_t1

0xa5d5,	// (0x0002123d) mup_equalizer_pane_ParamLimits

0xa5d5,	// (0x0002123d) mup_equalizer_pane

0xa5f6,	// (0x0002125e) mup_equalizer_pane_cp1_ParamLimits

0xa5f6,	// (0x0002125e) mup_equalizer_pane_cp1

0xa617,	// (0x0002127f) mup_equalizer_pane_cp2_ParamLimits

0xa617,	// (0x0002127f) mup_equalizer_pane_cp2

0xa638,	// (0x000212a0) mup_equalizer_pane_cp3_ParamLimits

0xa638,	// (0x000212a0) mup_equalizer_pane_cp3

0xa659,	// (0x000212c1) mup_equalizer_pane_cp4_ParamLimits

0xa659,	// (0x000212c1) mup_equalizer_pane_cp4

0xa67a,	// (0x000212e2) mup_equalizer_pane_cp5

0xa690,	// (0x000212f8) mup_equalizer_pane_cp6

0xa6a8,	// (0x00021310) mup_equalizer_pane_cp7

0x2b21,	// (0x00019789) bg_popup_call_poc_act_pane_g9

0x2b29,	// (0x00019791) bg_popup_call_poc_act_pane_g10

0x2b31,	// (0x00019799) bg_popup_call_poc_act_pane_g11

0x000a,

0x0915,	// (0x0001757d) mup_scale_pane

0x0a83,	// (0x000176eb) mup_scale_pane_g1

0x18ec,	// (0x00018554) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000260f1) mup_scale_pane_g

0x1910,	// (0x00018578) msg_data_pane

0x1918,	// (0x00018580) scroll_pane_cp017

0xa6d2,	// (0x0002133a) bg_list_pane_cp04_ParamLimits

0xa6d2,	// (0x0002133a) bg_list_pane_cp04

0x1928,	// (0x00018590) msg_data_pane_g1

0xa6ee,	// (0x00021356) msg_data_pane_g2

0xa6f8,	// (0x00021360) msg_data_pane_g3

0xa700,	// (0x00021368) msg_data_pane_g4

0xa708,	// (0x00021370) msg_data_pane_g5

0xa710,	// (0x00021378) msg_data_pane_g6

0xa718,	// (0x00021380) msg_data_pane_g7

0x0006,

0xf498,	// (0x00026100) msg_data_pane_g

0xa720,	// (0x00021388) msg_text_pane_ParamLimits

0xa720,	// (0x00021388) msg_text_pane

0xa75c,	// (0x000213c4) qrid_highlight_pane_cp011_ParamLimits

0xa75c,	// (0x000213c4) qrid_highlight_pane_cp011

0x06ba,	// (0x00017322) msg_body_pane

0x06ba,	// (0x00017322) msg_header_pane

0x1939,	// (0x000185a1) input_focus_pane_cp07

0xa782,	// (0x000213ea) msg_header_pane_t1_ParamLimits

0xa782,	// (0x000213ea) msg_header_pane_t1

0x194e,	// (0x000185b6) msg_header_pane_t2_ParamLimits

0x194e,	// (0x000185b6) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x00026114) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x00026114) msg_header_pane_t

0x1960,	// (0x000185c8) msg_body_pane_g1

0x1968,	// (0x000185d0) msg_body_pane_t1_ParamLimits

0x1968,	// (0x000185d0) msg_body_pane_t1

0x1999,	// (0x00018601) msg_body_pane_t2_ParamLimits

0x1999,	// (0x00018601) msg_body_pane_t2

0x19ab,	// (0x00018613) msg_body_pane_t3_ParamLimits

0x19ab,	// (0x00018613) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00026119) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00026119) msg_body_pane_t

0x7298,	// (0x0001df00) main_viewer_pane_g1_ParamLimits

0x7298,	// (0x0001df00) main_viewer_pane_g1

0x72a4,	// (0x0001df0c) main_viewer_pane_g2_ParamLimits

0x72a4,	// (0x0001df0c) main_viewer_pane_g2

0xa7b6,	// (0x0002141e) main_viewer_pane_g3_ParamLimits

0xa7b6,	// (0x0002141e) main_viewer_pane_g3

0xa7c7,	// (0x0002142f) main_viewer_pane_g4_ParamLimits

0xa7c7,	// (0x0002142f) main_viewer_pane_g4

0x72b0,	// (0x0001df18) main_viewer_pane_g5_ParamLimits

0x72b0,	// (0x0001df18) main_viewer_pane_g5

0x72b0,	// (0x0001df18) main_viewer_pane_g7_ParamLimits

0x72b0,	// (0x0001df18) main_viewer_pane_g7

0x1273,	// (0x00017edb) main_viewer_pane_g8_ParamLimits

0x1273,	// (0x00017edb) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00026129) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00026129) main_viewer_pane_g

0x19ff,	// (0x00018667) viewer_content_pane_ParamLimits

0x19ff,	// (0x00018667) viewer_content_pane

0xa7f8,	// (0x00021460) main_postcard_pane_g1_ParamLimits

0xa7f8,	// (0x00021460) main_postcard_pane_g1

0xa806,	// (0x0002146e) main_postcard_pane_g2_ParamLimits

0xa806,	// (0x0002146e) main_postcard_pane_g2

0xa814,	// (0x0002147c) main_postcard_pane_g3_ParamLimits

0xa814,	// (0x0002147c) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0002613a) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0002613a) main_postcard_pane_g

0xa824,	// (0x0002148c) main_postcard_pane_g4

0x2d23,	// (0x0001998b) smil_status_volume_pane_g2

0xa850,	// (0x000214b8) postcard_pane_ParamLimits

0xa850,	// (0x000214b8) postcard_pane

0x1870,	// (0x000184d8) postcard_pane_g1_ParamLimits

0x1870,	// (0x000184d8) postcard_pane_g1

0xa882,	// (0x000214ea) postcard_pane_g2_ParamLimits

0xa882,	// (0x000214ea) postcard_pane_g2

0xa88e,	// (0x000214f6) postcard_pane_g3_ParamLimits

0xa88e,	// (0x000214f6) postcard_pane_g3

0x1a1b,	// (0x00018683) postcard_pane_g4_ParamLimits

0x1a1b,	// (0x00018683) postcard_pane_g4

0xa89a,	// (0x00021502) postcard_pane_g5_ParamLimits

0xa89a,	// (0x00021502) postcard_pane_g5

0xa8a6,	// (0x0002150e) postcard_pane_g6_ParamLimits

0xa8a6,	// (0x0002150e) postcard_pane_g6

0x1a0d,	// (0x00018675) postcard_pane_g7_ParamLimits

0x1a0d,	// (0x00018675) postcard_pane_g7

0x0006,

0xf4df,	// (0x00026147) postcard_pane_g_ParamLimits

0xf4df,	// (0x00026147) postcard_pane_g

0xa8b2,	// (0x0002151a) main_mp2_pane_g1_ParamLimits

0xa8b2,	// (0x0002151a) main_mp2_pane_g1

0xa8be,	// (0x00021526) main_mp2_pane_g2_ParamLimits

0xa8be,	// (0x00021526) main_mp2_pane_g2

0xa8ca,	// (0x00021532) main_mp2_pane_g3_ParamLimits

0xa8ca,	// (0x00021532) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00026156) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00026156) main_mp2_pane_g

0xa8d6,	// (0x0002153e) main_mp2_pane_t1_ParamLimits

0xa8d6,	// (0x0002153e) main_mp2_pane_t1

0xa8ed,	// (0x00021555) main_mp2_pane_t2_ParamLimits

0xa8ed,	// (0x00021555) main_mp2_pane_t2

0xa901,	// (0x00021569) main_mp2_pane_t3_ParamLimits

0xa901,	// (0x00021569) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0002615d) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0002615d) main_mp2_pane_t

0x1a29,	// (0x00018691) pec_content_pane_ParamLimits

0x1a29,	// (0x00018691) pec_content_pane

0x0ec6,	// (0x00017b2e) scroll_pane_cp015

0x1a3b,	// (0x000186a3) pec_attribute_pane_ParamLimits

0x1a3b,	// (0x000186a3) pec_attribute_pane

0xa913,	// (0x0002157b) pec_content_pane_g1_ParamLimits

0xa913,	// (0x0002157b) pec_content_pane_g1

0x1a4b,	// (0x000186b3) pec_content_pane_t1_ParamLimits

0x1a4b,	// (0x000186b3) pec_content_pane_t1

0x1a5d,	// (0x000186c5) pec_content_pane_t2_ParamLimits

0x1a5d,	// (0x000186c5) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00026164) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00026164) pec_content_pane_t

0xa91f,	// (0x00021587) list_single_graphic_pane_cp01_ParamLimits

0xa91f,	// (0x00021587) list_single_graphic_pane_cp01

0x0915,	// (0x0001757d) bg_popup_sub_pane_cp04

0x1a6f,	// (0x000186d7) popup_mup_playback_window_g1

0x1a7b,	// (0x000186e3) popup_mup_playback_window_t1

0x1a90,	// (0x000186f8) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00026169) popup_mup_playback_window_t

0x1ac7,	// (0x0001872f) main_image_pane_g1_ParamLimits

0x1ac7,	// (0x0001872f) main_image_pane_g1

0x1b0a,	// (0x00018772) scroll_pane_cp018_ParamLimits

0x1b0a,	// (0x00018772) scroll_pane_cp018

0x1b22,	// (0x0001878a) scroll_pane_cp016_ParamLimits

0x1b22,	// (0x0001878a) scroll_pane_cp016

0xa9b8,	// (0x00021620) smil2_image_pane_ParamLimits

0xa9b8,	// (0x00021620) smil2_image_pane

0xa9e8,	// (0x00021650) smil2_root_pane_ParamLimits

0xa9e8,	// (0x00021650) smil2_root_pane

0xaa14,	// (0x0002167c) smil2_text_pane_ParamLimits

0xaa14,	// (0x0002167c) smil2_text_pane

0x06ba,	// (0x00017322) bg_list_pane_cp06

0x1b5e,	// (0x000187c6) grid_radio_pane

0x06ba,	// (0x00017322) bg_popup_window_pane_cp06

0x1b66,	// (0x000187ce) main_fmradio_pane_t1

0x1533,	// (0x0001819b) heading_pane_cp04

0x1b74,	// (0x000187dc) main_fmradio_pane_t2

0x2b39,	// (0x000197a1) popup_cale_lunar_info_window_g1

0x1b82,	// (0x000187ea) main_fmradio_pane_t3

0x2b41,	// (0x000197a9) popup_cale_lunar_info_window_g2

0x1b90,	// (0x000187f8) main_fmradio_pane_t4

0x0001,

0x1b9e,	// (0x00018806) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00026244) popup_cale_lunar_info_window_g

0xf516,	// (0x0002617e) main_fmradio_pane_t

0x1bac,	// (0x00018814) wait_bar_pane_cp03

0x1bb4,	// (0x0001881c) cell_fmradio_pane_ParamLimits

0x1bb4,	// (0x0001881c) cell_fmradio_pane

0x1a0d,	// (0x00018675) cell_fmradio_pane_g1_ParamLimits

0x1a0d,	// (0x00018675) cell_fmradio_pane_g1

0x06ba,	// (0x00017322) grid_highlight_pane_cp011

0x1bc7,	// (0x0001882f) poc_content_pane_ParamLimits

0x1bc7,	// (0x0001882f) poc_content_pane

0x1bd9,	// (0x00018841) scroll_pane_cp019

0xaa54,	// (0x000216bc) popup_call_poc_act_window_ParamLimits

0xaa54,	// (0x000216bc) popup_call_poc_act_window

0xaa61,	// (0x000216c9) popup_call_poc_inact_window_ParamLimits

0xaa61,	// (0x000216c9) popup_call_poc_inact_window

0xf5b3,	// (0x0002621b) bg_popup_call_poc_act_pane_g

0x2ab1,	// (0x00019719) bg_popup_call_poc_inact_pane_g1

0x2ab9,	// (0x00019721) bg_popup_call_poc_inact_pane_g2

0x1be1,	// (0x00018849) popup_call_poc_act_window_g2

0x2ac1,	// (0x00019729) bg_popup_call_poc_inact_pane_g3

0x2ac9,	// (0x00019731) bg_popup_call_poc_inact_pane_g4

0x2ad1,	// (0x00019739) bg_popup_call_poc_inact_pane_g5

0x1be9,	// (0x00018851) popup_call_poc_act_window_t1_ParamLimits

0x1be9,	// (0x00018851) popup_call_poc_act_window_t1

0x1c11,	// (0x00018879) popup_call_poc_act_window_t2_ParamLimits

0x1c11,	// (0x00018879) popup_call_poc_act_window_t2

0x1c39,	// (0x000188a1) popup_call_poc_act_window_t3_ParamLimits

0x1c39,	// (0x000188a1) popup_call_poc_act_window_t3

0x1c61,	// (0x000188c9) popup_call_poc_act_window_t4_ParamLimits

0x1c61,	// (0x000188c9) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00026189) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00026189) popup_call_poc_act_window_t

0x2ad9,	// (0x00019741) bg_popup_call_poc_inact_pane_g6

0x2ae1,	// (0x00019749) bg_popup_call_poc_inact_pane_g7

0x2ae9,	// (0x00019751) bg_popup_call_poc_inact_pane_g8

0x1c73,	// (0x000188db) popup_call_poc_inact_window_g2

0x2af1,	// (0x00019759) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x00026208) bg_popup_call_poc_inact_pane_g

0x1c7b,	// (0x000188e3) popup_call_poc_inact_window_t1_ParamLimits

0x1c7b,	// (0x000188e3) popup_call_poc_inact_window_t1

0x1c90,	// (0x000188f8) popup_call_poc_inact_window_t2_ParamLimits

0x1c90,	// (0x000188f8) popup_call_poc_inact_window_t2

0x1ca5,	// (0x0001890d) popup_call_poc_inact_window_t3_ParamLimits

0x1ca5,	// (0x0001890d) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x00026192) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x00026192) popup_call_poc_inact_window_t

0x2ca9,	// (0x00019911) context_pane_ParamLimits

0xb051,	// (0x00021cb9) signal_pane_ParamLimits

0x179f,	// (0x00018407) main_call2_pane

0x2c97,	// (0x000198ff) popup_phob_thumbnail2_window_ParamLimits

0x2c97,	// (0x000198ff) popup_phob_thumbnail2_window

0x7268,	// (0x0001ded0) aid_hotspot_pointer_arrow_pane

0x7270,	// (0x0001ded8) aid_hotspot_pointer_hand_pane

0xad83,	// (0x000219eb) phob_pre_status_pane_g5

0x8c8f,	// (0x0001f8f7) cams_zoom_pane_ParamLimits

0x8c9b,	// (0x0001f903) image_vga_pane_ParamLimits

0x8caa,	// (0x0001f912) main_camera_pane_g1_ParamLimits

0x8cb8,	// (0x0001f920) main_camera_pane_g2_ParamLimits

0x8cc4,	// (0x0001f92c) main_camera_pane_g3_ParamLimits

0x8cd0,	// (0x0001f938) main_camera_pane_g4_ParamLimits

0x8cdc,	// (0x0001f944) main_camera_pane_g5_ParamLimits

0x8ce8,	// (0x0001f950) main_camera_pane_g6_ParamLimits

0x8cf4,	// (0x0001f95c) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00025e91) main_camera_pane_g_ParamLimits

0x8d00,	// (0x0001f968) main_camera_pane_t1_ParamLimits

0x8d12,	// (0x0001f97a) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00025ea2) main_camera_pane_t_ParamLimits

0x0915,	// (0x0001757d) bg_popup_preview_window_pane_cp01_ParamLimits

0x0915,	// (0x0001757d) bg_popup_preview_window_pane_cp01

0x1cba,	// (0x00018922) popup_phob_thumbnail2_window_g1_ParamLimits

0x1cba,	// (0x00018922) popup_phob_thumbnail2_window_g1

0x06ba,	// (0x00017322) call2_cli_visual_pane

0xaa7d,	// (0x000216e5) popup_call2_audio_conf_window_ParamLimits

0xaa7d,	// (0x000216e5) popup_call2_audio_conf_window

0xaa92,	// (0x000216fa) popup_call2_audio_first_window_ParamLimits

0xaa92,	// (0x000216fa) popup_call2_audio_first_window

0xab30,	// (0x00021798) popup_call2_audio_in_window_ParamLimits

0xab30,	// (0x00021798) popup_call2_audio_in_window

0xab72,	// (0x000217da) popup_call2_audio_out_window_ParamLimits

0xab72,	// (0x000217da) popup_call2_audio_out_window

0xabd4,	// (0x0002183c) popup_call2_audio_second_window_ParamLimits

0xabd4,	// (0x0002183c) popup_call2_audio_second_window

0xac32,	// (0x0002189a) popup_call2_audio_wait_window_ParamLimits

0xac32,	// (0x0002189a) popup_call2_audio_wait_window

0x06ba,	// (0x00017322) bg_popup_call2_act_pane_cp03

0x08f7,	// (0x0001755f) list_conf_pane_cp

0x1cc6,	// (0x0001892e) popup_call2_audio_conf_window_t1

0x1590,	// (0x000181f8) list_single_graphic_popup_conf2_pane_ParamLimits

0x1590,	// (0x000181f8) list_single_graphic_popup_conf2_pane

0x15a3,	// (0x0001820b) list_highlight_pane_cp04

0x1cd4,	// (0x0001893c) list_single_graphic_popup_conf2_pane_g1

0x15b4,	// (0x0001821c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00026199) list_single_graphic_popup_conf2_pane_g

0x1cde,	// (0x00018946) list_single_graphic_popup_conf2_pane_t1

0x1cec,	// (0x00018954) bg_popup_call2_act_pane_cp01_ParamLimits

0x1cec,	// (0x00018954) bg_popup_call2_act_pane_cp01

0x1d76,	// (0x000189de) call_type_pane_cp05_ParamLimits

0x1d76,	// (0x000189de) call_type_pane_cp05

0x1dca,	// (0x00018a32) popup_call2_audio_second_window_g1_ParamLimits

0x1dca,	// (0x00018a32) popup_call2_audio_second_window_g1

0x1e1e,	// (0x00018a86) popup_call2_audio_second_window_g2_ParamLimits

0x1e1e,	// (0x00018a86) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0002619e) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0002619e) popup_call2_audio_second_window_g

0x1e83,	// (0x00018aeb) popup_call2_audio_second_window_t1_ParamLimits

0x1e83,	// (0x00018aeb) popup_call2_audio_second_window_t1

0x1f3e,	// (0x00018ba6) popup_call2_audio_second_window_t2_ParamLimits

0x1f3e,	// (0x00018ba6) popup_call2_audio_second_window_t2

0x1f91,	// (0x00018bf9) popup_call2_audio_second_window_t3_ParamLimits

0x1f91,	// (0x00018bf9) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x000261a5) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x000261a5) popup_call2_audio_second_window_t

0x06ba,	// (0x00017322) bg_popup_call2_in_pane_cp02

0x06c4,	// (0x0001732c) call_type_pane_cp04

0x06cc,	// (0x00017334) popup_call2_audio_wait_window_g1

0x06d4,	// (0x0001733c) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00025d7e) popup_call2_audio_wait_window_g

0x06dc,	// (0x00017344) popup_call2_audio_wait_window_t3

0x2084,	// (0x00018cec) bg_popup_call2_act_pane_ParamLimits

0x2084,	// (0x00018cec) bg_popup_call2_act_pane

0x2144,	// (0x00018dac) call_type_pane_cp03_ParamLimits

0x2144,	// (0x00018dac) call_type_pane_cp03

0x21a8,	// (0x00018e10) popup_call2_audio_first_window_g1_ParamLimits

0x21a8,	// (0x00018e10) popup_call2_audio_first_window_g1

0x2218,	// (0x00018e80) popup_call2_audio_first_window_g2_ParamLimits

0x2218,	// (0x00018e80) popup_call2_audio_first_window_g2

0x1870,	// (0x000184d8) popup_call2_audio_first_window_g3_ParamLimits

0x1870,	// (0x000184d8) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x000261ae) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x000261ae) popup_call2_audio_first_window_g

0x22f6,	// (0x00018f5e) popup_call2_audio_first_window_t1_ParamLimits

0x22f6,	// (0x00018f5e) popup_call2_audio_first_window_t1

0x23f9,	// (0x00019061) popup_call2_audio_first_window_t4_ParamLimits

0x23f9,	// (0x00019061) popup_call2_audio_first_window_t4

0x24dc,	// (0x00019144) popup_call2_audio_first_window_t5_ParamLimits

0x24dc,	// (0x00019144) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x000261b9) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x000261b9) popup_call2_audio_first_window_t

0x090d,	// (0x00017575) bg_popup_call2_act_pane_g1

0x2b49,	// (0x000197b1) popup_cale_lunar_info_window_t1

0x2b57,	// (0x000197bf) popup_cale_lunar_info_window_t2

0x2b65,	// (0x000197cd) popup_cale_lunar_info_window_t3

0x06ba,	// (0x00017322) bg_popup_call2_bubble_pane

0x25dd,	// (0x00019245) bg_popup_call2_in_pane_cp01_ParamLimits

0x25dd,	// (0x00019245) bg_popup_call2_in_pane_cp01

0x0396,	// (0x00016ffe) call_type_pane_cp02

0x2625,	// (0x0001928d) popup_call2_audio_out_window_g1_ParamLimits

0x2625,	// (0x0001928d) popup_call2_audio_out_window_g1

0x2651,	// (0x000192b9) popup_call2_audio_out_window_g2_ParamLimits

0x2651,	// (0x000192b9) popup_call2_audio_out_window_g2

0x2679,	// (0x000192e1) popup_call2_audio_out_window_g3_ParamLimits

0x2679,	// (0x000192e1) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x000261c2) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x000261c2) popup_call2_audio_out_window_g

0x26b4,	// (0x0001931c) popup_call2_audio_out_window_t1_ParamLimits

0x26b4,	// (0x0001931c) popup_call2_audio_out_window_t1

0x2713,	// (0x0001937b) popup_call2_audio_out_window_t2_ParamLimits

0x2713,	// (0x0001937b) popup_call2_audio_out_window_t2

0x2767,	// (0x000193cf) popup_call2_audio_out_window_t3_ParamLimits

0x2767,	// (0x000193cf) popup_call2_audio_out_window_t3

0x277d,	// (0x000193e5) popup_call2_audio_out_window_t4_ParamLimits

0x277d,	// (0x000193e5) popup_call2_audio_out_window_t4

0x2793,	// (0x000193fb) popup_call2_audio_out_window_t5_ParamLimits

0x2793,	// (0x000193fb) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x000261cb) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x000261cb) popup_call2_audio_out_window_t

0x27f7,	// (0x0001945f) bg_popup_call2_in_pane_ParamLimits

0x27f7,	// (0x0001945f) bg_popup_call2_in_pane

0x2853,	// (0x000194bb) popup_call2_audio_in_window_g1_ParamLimits

0x2853,	// (0x000194bb) popup_call2_audio_in_window_g1

0x288b,	// (0x000194f3) popup_call2_audio_in_window_g2_ParamLimits

0x288b,	// (0x000194f3) popup_call2_audio_in_window_g2

0x28c3,	// (0x0001952b) popup_call2_audio_in_window_g3_ParamLimits

0x28c3,	// (0x0001952b) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000261d8) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000261d8) popup_call2_audio_in_window_g

0x291b,	// (0x00019583) popup_call2_audio_in_window_t1_ParamLimits

0x291b,	// (0x00019583) popup_call2_audio_in_window_t1

0x299b,	// (0x00019603) popup_call2_audio_in_window_t2_ParamLimits

0x299b,	// (0x00019603) popup_call2_audio_in_window_t2

0x2a1b,	// (0x00019683) popup_call2_audio_in_window_t3_ParamLimits

0x2a1b,	// (0x00019683) popup_call2_audio_in_window_t3

0x2a35,	// (0x0001969d) popup_call2_audio_in_window_t4_ParamLimits

0x2a35,	// (0x0001969d) popup_call2_audio_in_window_t4

0x2a47,	// (0x000196af) popup_call2_audio_in_window_t5_ParamLimits

0x2a47,	// (0x000196af) popup_call2_audio_in_window_t5

0x2a5c,	// (0x000196c4) popup_call2_audio_in_window_t6_ParamLimits

0x2a5c,	// (0x000196c4) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000261e1) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000261e1) popup_call2_audio_in_window_t

0x090d,	// (0x00017575) bg_popup_call2_in_pane_g1

0x2b73,	// (0x000197db) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00026249) popup_cale_lunar_info_window_t

0x0915,	// (0x0001757d) bg_popup_call2_rect_pane_ParamLimits

0x0915,	// (0x0001757d) bg_popup_call2_rect_pane

0x06ba,	// (0x00017322) call2_cli_visual_graphic_pane

0x06ba,	// (0x00017322) call2_cli_visual_text_pane

0x72ce,	// (0x0001df36) smil_status_volume_pane_g3

0x0002,

0x0a83,	// (0x000176eb) call2_cli_visual_graphic_pane_g1

0x0a83,	// (0x000176eb) call2_cli_visual_graphic_pane_g2

0x0a83,	// (0x000176eb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000261ee) call2_cli_visual_graphic_pane_g

0x2a71,	// (0x000196d9) bg_popup_call2_rect_pane_g1

0x0b0f,	// (0x00017777) bg_popup_call2_rect_pane_g2

0x2a79,	// (0x000196e1) bg_popup_call2_rect_pane_g3

0x2a81,	// (0x000196e9) bg_popup_call2_rect_pane_g4

0x2a89,	// (0x000196f1) bg_popup_call2_rect_pane_g5

0x2a91,	// (0x000196f9) bg_popup_call2_rect_pane_g6

0x2a99,	// (0x00019701) bg_popup_call2_rect_pane_g7

0x2aa1,	// (0x00019709) bg_popup_call2_rect_pane_g8

0x2aa9,	// (0x00019711) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000261f5) bg_popup_call2_rect_pane_g

0x2ab1,	// (0x00019719) bg_popup_call2_bubble_pane_g1

0x2ab9,	// (0x00019721) bg_popup_call2_bubble_pane_g2

0x2ac1,	// (0x00019729) bg_popup_call2_bubble_pane_g3

0x2ac9,	// (0x00019731) bg_popup_call2_bubble_pane_g4

0x2ad1,	// (0x00019739) bg_popup_call2_bubble_pane_g5

0x2ad9,	// (0x00019741) bg_popup_call2_bubble_pane_g6

0x2ae1,	// (0x00019749) bg_popup_call2_bubble_pane_g7

0x2ae9,	// (0x00019751) bg_popup_call2_bubble_pane_g8

0x2af1,	// (0x00019759) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x00026208) bg_popup_call2_bubble_pane_g

0x8954,	// (0x0001f5bc) aid_cale_week_size_cell_pane

0x8d24,	// (0x0001f98c) aid_cams_cif_uncrop_pane_ParamLimits

0x8d24,	// (0x0001f98c) aid_cams_cif_uncrop_pane

0x8e7f,	// (0x0001fae7) aid_cams_size_cell_ParamLimits

0x8e7f,	// (0x0001fae7) aid_cams_size_cell

0x8e8b,	// (0x0001faf3) grid_cams_pane_ParamLimits

0x8e99,	// (0x0001fb01) linegrid_cams_pane_ParamLimits

0x8fc7,	// (0x0001fc2f) call_video_pane_t1

0x8fe8,	// (0x0001fc50) call_video_pane_t2

0x0001,

0xf28d,	// (0x00025ef5) call_video_pane_t

0x951f,	// (0x00020187) aid_cale_month_size_cell_pane_ParamLimits

0x951f,	// (0x00020187) aid_cale_month_size_cell_pane

0xf62a,	// (0x00026292) smil_status_volume_pane_g

0x72db,	// (0x0001df43) volume_smil_pane_ParamLimits

0x023b,	// (0x00016ea3) aid_popup2_width_pane

0x8896,	// (0x0001f4fe) cell_qdial_pane_g4_ParamLimits

0x8896,	// (0x0001f4fe) cell_qdial_pane_g4

0xa0df,	// (0x00020d47) aid_blid_cardinal_pane_ParamLimits

0xa0ef,	// (0x00020d57) aid_blid_destination_pane_ParamLimits

0xa0ef,	// (0x00020d57) aid_blid_destination_pane

0x0915,	// (0x0001757d) bg_popup_call_poc_act_pane_ParamLimits

0x0915,	// (0x0001757d) bg_popup_call_poc_act_pane

0x0915,	// (0x0001757d) bg_popup_call_poc_inact_pane_ParamLimits

0x0915,	// (0x0001757d) bg_popup_call_poc_inact_pane

0x2af9,	// (0x00019761) bg_popup_call_poc_act_pane_g1

0x2b01,	// (0x00019769) bg_popup_call_poc_act_pane_g2

0x2b09,	// (0x00019771) bg_popup_call_poc_act_pane_g3

0x2ac9,	// (0x00019731) bg_popup_call_poc_act_pane_g4

0x2ad1,	// (0x00019739) bg_popup_call_poc_act_pane_g5

0x2b11,	// (0x00019779) bg_popup_call_poc_act_pane_g6

0x2ae1,	// (0x00019749) bg_popup_call_poc_act_pane_g7

0x2b19,	// (0x00019781) bg_popup_call_poc_act_pane_g8

0x06ba,	// (0x00017322) main_usb_pane

0x2c72,	// (0x000198da) popup_cale_lunar_info_window

0x9313,	// (0x0001ff7b) im_reading_pane_t1_ParamLimits

0x0e1e,	// (0x00017a86) list_im_pane_ParamLimits

0x0e2f,	// (0x00017a97) scroll_pane_cp07_ParamLimits

0x06ba,	// (0x00017322) grid_highlight_pane_cp012

0x0915,	// (0x0001757d) mup_scale_pane_ParamLimits

0x1870,	// (0x000184d8) main_usb_pane_g1_ParamLimits

0x1870,	// (0x000184d8) main_usb_pane_g1

0xaca6,	// (0x0002190e) main_usb_pane_g2_ParamLimits

0xaca6,	// (0x0002190e) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00026232) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00026232) main_usb_pane_g

0xacb2,	// (0x0002191a) main_usb_pane_t1_ParamLimits

0xacb2,	// (0x0002191a) main_usb_pane_t1

0xacc4,	// (0x0002192c) main_usb_pane_t2_ParamLimits

0xacc4,	// (0x0002192c) main_usb_pane_t2

0xacd6,	// (0x0002193e) main_usb_pane_t3_ParamLimits

0xacd6,	// (0x0002193e) main_usb_pane_t3

0xace8,	// (0x00021950) main_usb_pane_t4_ParamLimits

0xace8,	// (0x00021950) main_usb_pane_t4

0xacfa,	// (0x00021962) main_usb_pane_t5_ParamLimits

0xacfa,	// (0x00021962) main_usb_pane_t5

0xad0c,	// (0x00021974) main_usb_pane_t6_ParamLimits

0xad0c,	// (0x00021974) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00026237) main_usb_pane_t_ParamLimits

0xa085,	// (0x00020ced) aid_text_placing

0xa091,	// (0x00020cf9) main_location2_pane_t1_ParamLimits

0xa0a5,	// (0x00020d0d) main_location2_pane_t2_ParamLimits

0xa0b9,	// (0x00020d21) main_location2_pane_t3_ParamLimits

0xa0cd,	// (0x00020d35) main_location2_pane_t4_ParamLimits

0xa0cd,	// (0x00020d35) main_location2_pane_t4

0xf3ee,	// (0x00026056) main_location2_pane_t_ParamLimits

0x0951,	// (0x000175b9) find_pinb_pane_g2_ParamLimits

0x0951,	// (0x000175b9) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00025da4) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00025da4) find_pinb_pane_g

0x095d,	// (0x000175c5) find_pinb_pane_t1_ParamLimits

0x096f,	// (0x000175d7) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00025da9) find_pinb_pane_t_ParamLimits

0x06ba,	// (0x00017322) main_call3_pane

0x992b,	// (0x00020593) cale_month_day_heading_pane_t1_ParamLimits

0x9989,	// (0x000205f1) cale_month_day_heading_pane_t2_ParamLimits

0x99ee,	// (0x00020656) cale_month_day_heading_pane_t3_ParamLimits

0x9a53,	// (0x000206bb) cale_month_day_heading_pane_t4_ParamLimits

0x9ab8,	// (0x00020720) cale_month_day_heading_pane_t5_ParamLimits

0x9b1d,	// (0x00020785) cale_month_day_heading_pane_t6_ParamLimits

0x9b82,	// (0x000207ea) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00025f2d) cale_month_day_heading_pane_t_ParamLimits

0x10a5,	// (0x00017d0d) smil_status_volume_pane

0xa86a,	// (0x000214d2) postcard_address_pane_ParamLimits

0xa86a,	// (0x000214d2) postcard_address_pane

0xa876,	// (0x000214de) postcard_message_pane_ParamLimits

0xa876,	// (0x000214de) postcard_message_pane

0xac71,	// (0x000218d9) call2_cli_visual_pane_t1_ParamLimits

0xac71,	// (0x000218d9) call2_cli_visual_pane_t1

0xb239,	// (0x00021ea1) postcard_message_pane_t1_ParamLimits

0xb239,	// (0x00021ea1) postcard_message_pane_t1

0xb222,	// (0x00021e8a) postcard_address_pane_t1_ParamLimits

0xb222,	// (0x00021e8a) postcard_address_pane_t1

0xb213,	// (0x00021e7b) popup_call3_audio_in_window_ParamLimits

0xb213,	// (0x00021e7b) popup_call3_audio_in_window

0xb0f7,	// (0x00021d5f) bg_popup_call3_in_pane_ParamLimits

0xb0f7,	// (0x00021d5f) bg_popup_call3_in_pane

0xb159,	// (0x00021dc1) popup_call3_audio_in_window_g1_ParamLimits

0xb159,	// (0x00021dc1) popup_call3_audio_in_window_g1

0xb171,	// (0x00021dd9) popup_call3_audio_in_window_g2_ParamLimits

0xb171,	// (0x00021dd9) popup_call3_audio_in_window_g2

0xb189,	// (0x00021df1) popup_call3_audio_in_window_g3_ParamLimits

0xb189,	// (0x00021df1) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00026299) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00026299) popup_call3_audio_in_window_g

0xb1b1,	// (0x00021e19) popup_call3_audio_in_window_t1_ParamLimits

0xb1b1,	// (0x00021e19) popup_call3_audio_in_window_t1

0xb1d9,	// (0x00021e41) popup_call3_audio_in_window_t2_ParamLimits

0xb1d9,	// (0x00021e41) popup_call3_audio_in_window_t2

0xb201,	// (0x00021e69) popup_call3_audio_in_window_t3_ParamLimits

0xb201,	// (0x00021e69) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x000262a2) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x000262a2) popup_call3_audio_in_window_t

0x179f,	// (0x00018407) bg_popup_call3_rect_pane

0x2a71,	// (0x000196d9) bg_popup_call3_rect_pane_g1

0x0b0f,	// (0x00017777) bg_popup_call3_rect_pane_g2

0x2a79,	// (0x000196e1) bg_popup_call3_rect_pane_g3

0x2a81,	// (0x000196e9) bg_popup_call3_rect_pane_g4

0x2a89,	// (0x000196f1) bg_popup_call3_rect_pane_g5

0x2a91,	// (0x000196f9) bg_popup_call3_rect_pane_g6

0x2a99,	// (0x00019701) bg_popup_call3_rect_pane_g7

0xa4e3,	// (0x0002114b) mup_visualizer_osc_pane

0x187e,	// (0x000184e6) mup_visualizer_spec_pane

0xb117,	// (0x00021d7f) call3_video_qcif_pane_ParamLimits

0xb117,	// (0x00021d7f) call3_video_qcif_pane

0xb129,	// (0x00021d91) call3_video_qcif_uncrop_pane_ParamLimits

0xb129,	// (0x00021d91) call3_video_qcif_uncrop_pane

0xb137,	// (0x00021d9f) call3_video_subqcif_pane_ParamLimits

0xb137,	// (0x00021d9f) call3_video_subqcif_pane

0xb149,	// (0x00021db1) call3_video_subqcif_uncrop_pane_ParamLimits

0xb149,	// (0x00021db1) call3_video_subqcif_uncrop_pane

0xb1a1,	// (0x00021e09) popup_call3_audio_in_window_g4_ParamLimits

0xb1a1,	// (0x00021e09) popup_call3_audio_in_window_g4

0xb0e6,	// (0x00021d4e) mup_spec_half_pane

0xb0ef,	// (0x00021d57) mup_spec_half_pane_cp

0x2d09,	// (0x00019971) mup_osc_middle_pane

0x2d12,	// (0x0001997a) mup_visualizer_osc_pane_g1

0xb0c7,	// (0x00021d2f) mup_spec_bar_pane_ParamLimits

0xb0c7,	// (0x00021d2f) mup_spec_bar_pane

0x2cf6,	// (0x0001995e) mup_spec_bar_pane_g1

0x2d00,	// (0x00019968) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002628d) mup_spec_bar_pane_g

0x8954,	// (0x0001f5bc) aid_cale_week_size_cell_pane_ParamLimits

0x8967,	// (0x0001f5cf) bg_cale_heading_pane_ParamLimits

0x0b8b,	// (0x000177f3) bg_cale_pane_cp01_ParamLimits

0x8983,	// (0x0001f5eb) cale_week_corner_pane_ParamLimits

0x8999,	// (0x0001f601) cale_week_day_heading_pane_ParamLimits

0x89b5,	// (0x0001f61d) cale_week_scroll_pane_g1_ParamLimits

0x89ce,	// (0x0001f636) cale_week_scroll_pane_g2_ParamLimits

0x89df,	// (0x0001f647) cale_week_scroll_pane_g3_ParamLimits

0x89f0,	// (0x0001f658) cale_week_scroll_pane_g4_ParamLimits

0x8a01,	// (0x0001f669) cale_week_scroll_pane_g5_ParamLimits

0x8a12,	// (0x0001f67a) cale_week_scroll_pane_g6_ParamLimits

0x8a23,	// (0x0001f68b) cale_week_scroll_pane_g7_ParamLimits

0x8a36,	// (0x0001f69e) cale_week_scroll_pane_g8_ParamLimits

0x8a49,	// (0x0001f6b1) cale_week_scroll_pane_g9_ParamLimits

0x8a5a,	// (0x0001f6c2) cale_week_scroll_pane_g10_ParamLimits

0x8a6b,	// (0x0001f6d3) cale_week_scroll_pane_g11_ParamLimits

0x8a7c,	// (0x0001f6e4) cale_week_scroll_pane_g12_ParamLimits

0x8a8d,	// (0x0001f6f5) cale_week_scroll_pane_g13_ParamLimits

0x8aa6,	// (0x0001f70e) cale_week_scroll_pane_g14_ParamLimits

0x8abf,	// (0x0001f727) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00025e35) cale_week_scroll_pane_g_ParamLimits

0x8ad8,	// (0x0001f740) cale_week_time_pane_ParamLimits

0x8aeb,	// (0x0001f753) grid_cale_week_pane_ParamLimits

0x0ba4,	// (0x0001780c) listscroll_cale_week_pane_t1

0x8b08,	// (0x0001f770) scroll_pane_cp08_ParamLimits

0x9570,	// (0x000201d8) cale_month_corner_pane_ParamLimits

0x1045,	// (0x00017cad) cale_month_pane_t1

0x98da,	// (0x00020542) cale_month_week_pane_ParamLimits

0x1870,	// (0x000184d8) popup_call_status_window_g1_ParamLimits

0x9f1b,	// (0x00020b83) popup_call_status_window_g2_ParamLimits

0x9f27,	// (0x00020b8f) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00025fdd) popup_call_status_window_g_ParamLimits

0x14b8,	// (0x00018120) aid_call2_pane

0xa776,	// (0x000213de) msg_header_pane_g1

0xa86a,	// (0x000214d2) postcard_address2_pane_ParamLimits

0xa86a,	// (0x000214d2) postcard_address2_pane

0xa876,	// (0x000214de) postcard_message2_pane_ParamLimits

0xa876,	// (0x000214de) postcard_message2_pane

0xb05f,	// (0x00021cc7) message2_row_pane_ParamLimits

0xb05f,	// (0x00021cc7) message2_row_pane

0xb07a,	// (0x00021ce2) address2_row_pane_ParamLimits

0xb07a,	// (0x00021ce2) address2_row_pane

0x2cc4,	// (0x0001992c) postcard_message2_row_pane_g1

0x2ccc,	// (0x00019934) postcard_message2_row_pane_t1

0x2cc4,	// (0x0001992c) address2_row_pane_g1

0x2ccc,	// (0x00019934) address2_row_pane_t1

0x711d,	// (0x0001dd85) aid_size_cell_vorec

0x06ba,	// (0x00017322) main_rss_pane

0xb08d,	// (0x00021cf5) rss_list_single_pane_ParamLimits

0xb08d,	// (0x00021cf5) rss_list_single_pane

0x2cda,	// (0x00019942) rss_list_single_pane_t1

0x2ce8,	// (0x00019950) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00026288) rss_list_single_pane_t

0x06ba,	// (0x00017322) main_camera2_pane

0x06ba,	// (0x00017322) main_video2_pane

0x7339,	// (0x0001dfa1) cams_zoom_pane_cp2_ParamLimits

0x7339,	// (0x0001dfa1) cams_zoom_pane_cp2

0x7345,	// (0x0001dfad) image2_vga_pane_ParamLimits

0x7345,	// (0x0001dfad) image2_vga_pane

0x7354,	// (0x0001dfbc) main_camera2_pane_g1_ParamLimits

0x7354,	// (0x0001dfbc) main_camera2_pane_g1

0x7360,	// (0x0001dfc8) main_camera2_pane_g2_ParamLimits

0x7360,	// (0x0001dfc8) main_camera2_pane_g2

0x736c,	// (0x0001dfd4) main_camera2_pane_g3_ParamLimits

0x736c,	// (0x0001dfd4) main_camera2_pane_g3

0x7378,	// (0x0001dfe0) main_camera2_pane_g4_ParamLimits

0x7378,	// (0x0001dfe0) main_camera2_pane_g4

0x7384,	// (0x0001dfec) main_camera2_pane_g5_ParamLimits

0x7384,	// (0x0001dfec) main_camera2_pane_g5

0x7390,	// (0x0001dff8) main_camera2_pane_g6_ParamLimits

0x7390,	// (0x0001dff8) main_camera2_pane_g6

0x739c,	// (0x0001e004) main_camera2_pane_g7_ParamLimits

0x739c,	// (0x0001e004) main_camera2_pane_g7

0x73a8,	// (0x0001e010) main_camera2_pane_g8_ParamLimits

0x73a8,	// (0x0001e010) main_camera2_pane_g8

0x0008,

0xf641,	// (0x000262a9) main_camera2_pane_g_ParamLimits

0xf641,	// (0x000262a9) main_camera2_pane_g

0x73c0,	// (0x0001e028) main_camera2_pane_t1_ParamLimits

0x73c0,	// (0x0001e028) main_camera2_pane_t1

0x73d2,	// (0x0001e03a) main_camera2_pane_t2_ParamLimits

0x73d2,	// (0x0001e03a) main_camera2_pane_t2

0x73e4,	// (0x0001e04c) main_camera2_pane_t3_ParamLimits

0x73e4,	// (0x0001e04c) main_camera2_pane_t3

0x73f6,	// (0x0001e05e) main_camera2_pane_t4_ParamLimits

0x73f6,	// (0x0001e05e) main_camera2_pane_t4

0x0006,

0xf654,	// (0x000262bc) main_camera2_pane_t_ParamLimits

0xf654,	// (0x000262bc) main_camera2_pane_t

0x7458,	// (0x0001e0c0) cams_zoom_pane_cp4_ParamLimits

0x7458,	// (0x0001e0c0) cams_zoom_pane_cp4

0x7468,	// (0x0001e0d0) image2_cif_pane_ParamLimits

0x7468,	// (0x0001e0d0) image2_cif_pane

0x747d,	// (0x0001e0e5) image2_subqcif_pane_ParamLimits

0x747d,	// (0x0001e0e5) image2_subqcif_pane

0x748c,	// (0x0001e0f4) main_video2_pane_g1_ParamLimits

0x748c,	// (0x0001e0f4) main_video2_pane_g1

0x749e,	// (0x0001e106) main_video2_pane_g2_ParamLimits

0x749e,	// (0x0001e106) main_video2_pane_g2

0x74ae,	// (0x0001e116) main_video2_pane_g3_ParamLimits

0x74ae,	// (0x0001e116) main_video2_pane_g3

0x74be,	// (0x0001e126) main_video2_pane_g4_ParamLimits

0x74be,	// (0x0001e126) main_video2_pane_g4

0x74ce,	// (0x0001e136) main_video2_pane_g5_ParamLimits

0x74ce,	// (0x0001e136) main_video2_pane_g5

0x74de,	// (0x0001e146) main_video2_pane_g6_ParamLimits

0x74de,	// (0x0001e146) main_video2_pane_g6

0x0005,

0xf663,	// (0x000262cb) main_video2_pane_g_ParamLimits

0xf663,	// (0x000262cb) main_video2_pane_g

0x74f0,	// (0x0001e158) main_video2_pane_t1_ParamLimits

0x74f0,	// (0x0001e158) main_video2_pane_t1

0x750a,	// (0x0001e172) main_video2_pane_t2_ParamLimits

0x750a,	// (0x0001e172) main_video2_pane_t2

0x7530,	// (0x0001e198) main_video2_pane_t3_ParamLimits

0x7530,	// (0x0001e198) main_video2_pane_t3

0x0002,

0xf670,	// (0x000262d8) main_video2_pane_t_ParamLimits

0xf670,	// (0x000262d8) main_video2_pane_t

0xadc3,	// (0x00021a2b) call_muted_g2

0x0001,

0xf612,	// (0x0002627a) call_muted_g

0x06ba,	// (0x00017322) main_mup2_pane

0x2dc9,	// (0x00019a31) main_mup2_pane_g1_ParamLimits

0x2dc9,	// (0x00019a31) main_mup2_pane_g1

0xb254,	// (0x00021ebc) main_mup2_pane_g2_ParamLimits

0xb254,	// (0x00021ebc) main_mup2_pane_g2

0x757f,	// (0x0001e1e7) main_mup_pane_g13_cp1

0x7587,	// (0x0001e1ef) mup_volume_pane_cp1

0xb274,	// (0x00021edc) main_mup2_pane_g4_ParamLimits

0xb274,	// (0x00021edc) main_mup2_pane_g4

0xb289,	// (0x00021ef1) main_mup2_pane_g5_ParamLimits

0xb289,	// (0x00021ef1) main_mup2_pane_g5

0xb29e,	// (0x00021f06) main_mup2_pane_g6_ParamLimits

0xb29e,	// (0x00021f06) main_mup2_pane_g6

0xb2b3,	// (0x00021f1b) main_mup2_pane_g7_ParamLimits

0xb2b3,	// (0x00021f1b) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000262df) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000262df) main_mup2_pane_g

0xb2cf,	// (0x00021f37) main_mup2_pane_t1_ParamLimits

0xb2cf,	// (0x00021f37) main_mup2_pane_t1

0xb2e6,	// (0x00021f4e) main_mup2_pane_t2_ParamLimits

0xb2e6,	// (0x00021f4e) main_mup2_pane_t2

0xb2fd,	// (0x00021f65) main_mup2_pane_t3_ParamLimits

0xb2fd,	// (0x00021f65) main_mup2_pane_t3

0xb314,	// (0x00021f7c) main_mup2_pane_t4_ParamLimits

0xb314,	// (0x00021f7c) main_mup2_pane_t4

0xb32e,	// (0x00021f96) main_mup2_pane_t5_ParamLimits

0xb32e,	// (0x00021f96) main_mup2_pane_t5

0xb348,	// (0x00021fb0) main_mup2_pane_t6_ParamLimits

0xb348,	// (0x00021fb0) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000262ee) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000262ee) main_mup2_pane_t

0xb380,	// (0x00021fe8) mup2_visualizer_pane_ParamLimits

0xb380,	// (0x00021fe8) mup2_visualizer_pane

0xb3b6,	// (0x0002201e) mup_progress_pane_cp_ParamLimits

0xb3b6,	// (0x0002201e) mup_progress_pane_cp

0x756a,	// (0x0001e1d2) mup_volume_pane_cp_ParamLimits

0x756a,	// (0x0001e1d2) mup_volume_pane_cp

0xb3cd,	// (0x00022035) mup2_visualizer_pane_g1_ParamLimits

0xb3cd,	// (0x00022035) mup2_visualizer_pane_g1

0x2d9b,	// (0x00019a03) mup2_visualizer_pane_g2_ParamLimits

0x2d9b,	// (0x00019a03) mup2_visualizer_pane_g2

0xb3e2,	// (0x0002204a) mup2_visualizer_pane_g3_ParamLimits

0xb3e2,	// (0x0002204a) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000262fb) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000262fb) mup2_visualizer_pane_g

0x1b56,	// (0x000187be) aid_size_cell_fmradio

0xaed9,	// (0x00021b41) aid_height_parent_landcape

0x0ead,	// (0x00017b15) wml_content_pane_cp

0x0eb5,	// (0x00017b1d) wml_tabs_pane

0x0ebe,	// (0x00017b26) popup_wml_miniature_window

0x0ec6,	// (0x00017b2e) scroll_pane_cp021

0x0eda,	// (0x00017b42) wml_content_pane_comp8

0x06ba,	// (0x00017322) bg_popup_sub_pane_cp05

0x2db9,	// (0x00019a21) popup_wml_miniature_window_g1

0x2dc1,	// (0x00019a29) wml_miniature_view_pane

0xb3f0,	// (0x00022058) aid_size_wml_view

0xb3f8,	// (0x00022060) wml_miniature_view_pane_g1

0xb401,	// (0x00022069) wml_miniature_view_pane_g2

0xb40a,	// (0x00022072) wml_miniature_view_pane_g3

0xb412,	// (0x0002207a) wml_miniature_view_pane_g4

0xb41a,	// (0x00022082) wml_miniature_view_pane_g5

0xb422,	// (0x0002208a) wml_miniature_view_pane_g6

0xb42a,	// (0x00022092) wml_miniature_view_pane_g7

0xb432,	// (0x0002209a) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00026302) wml_miniature_view_pane_g

0x2dc9,	// (0x00019a31) background_graphic_ParamLimits

0x2dc9,	// (0x00019a31) background_graphic

0x2dd5,	// (0x00019a3d) wml_tabs_2_pane

0x2dde,	// (0x00019a46) wml_tabs_3_pane_ParamLimits

0x2dde,	// (0x00019a46) wml_tabs_3_pane

0x2df0,	// (0x00019a58) wml_tabs_4_pane_ParamLimits

0x2df0,	// (0x00019a58) wml_tabs_4_pane

0x2e06,	// (0x00019a6e) wml_tabs_5_pane_ParamLimits

0x2e06,	// (0x00019a6e) wml_tabs_5_pane

0x2e20,	// (0x00019a88) wml_tabs_pane_g2_ParamLimits

0x2e20,	// (0x00019a88) wml_tabs_pane_g2

0x2e34,	// (0x00019a9c) wml_tabs_pane_g3_ParamLimits

0x2e34,	// (0x00019a9c) wml_tabs_pane_g3

0xb43a,	// (0x000220a2) wml_tabs_2_active_pane_ParamLimits

0xb43a,	// (0x000220a2) wml_tabs_2_active_pane

0xb44a,	// (0x000220b2) wml_tabs_2_passive_pane_ParamLimits

0xb44a,	// (0x000220b2) wml_tabs_2_passive_pane

0xb45a,	// (0x000220c2) wml_tabs_3_active_pane_cp_ParamLimits

0xb45a,	// (0x000220c2) wml_tabs_3_active_pane_cp

0xb46b,	// (0x000220d3) wml_tabs_3_passive_pane_ParamLimits

0xb46b,	// (0x000220d3) wml_tabs_3_passive_pane

0xb47c,	// (0x000220e4) wml_tabs_3_passive_pane_cp_ParamLimits

0xb47c,	// (0x000220e4) wml_tabs_3_passive_pane_cp

0xb48d,	// (0x000220f5) tabs_4_active_pane

0xb495,	// (0x000220fd) tabs_4_passive_pane

0xb49d,	// (0x00022105) tabs_4_passive_pane_cp

0xb4a5,	// (0x0002210d) tabs_4_passive_pane_cp2

0xac9e,	// (0x00021906) aid_height_text

0xa4b0,	// (0x00021118) mup_volume_cont_pane_ParamLimits

0xa4b0,	// (0x00021118) mup_volume_cont_pane

0x8635,	// (0x0001f29d) aid_size_cell_pinb

0x863f,	// (0x0001f2a7) aid_size_list_pinb

0xb39f,	// (0x00022007) mup2_volume_cont_pane_ParamLimits

0xb39f,	// (0x00022007) mup2_volume_cont_pane

0x7556,	// (0x0001e1be) mup2_volume_cont_pane_g1_ParamLimits

0x7556,	// (0x0001e1be) mup2_volume_cont_pane_g1

0x82c8,	// (0x0001ef30) aid_size_cell_touch_ParamLimits

0x82c8,	// (0x0001ef30) aid_size_cell_touch

0x851b,	// (0x0001f183) touch_pane_ParamLimits

0x851b,	// (0x0001f183) touch_pane

0x0229,	// (0x00016e91) main_rss2_pane

0x2e8a,	// (0x00019af2) listscroll_rss2_pane

0x2e93,	// (0x00019afb) rss2_navigation_pane

0x2e9b,	// (0x00019b03) list_rss2_pane

0x1656,	// (0x000182be) scroll_pane_cp22

0x2ea3,	// (0x00019b0b) rss2_navigation_pane_g1

0x2eac,	// (0x00019b14) rss2_navigation_pane_g2

0x2eb4,	// (0x00019b1c) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x00026313) rss2_navigation_pane_g

0x2ebc,	// (0x00019b24) rss2_navigation_pane_t1

0xb4ad,	// (0x00022115) rss2_list_single_pane_ParamLimits

0xb4ad,	// (0x00022115) rss2_list_single_pane

0x2eca,	// (0x00019b32) rss2_list_single_pane_t2

0x2ed8,	// (0x00019b40) rss2_list_single_pane_t3_ParamLimits

0x2ed8,	// (0x00019b40) rss2_list_single_pane_t3

0x2ef5,	// (0x00019b5d) rss2_list_single_pane_t4

0x9d5e,	// (0x000209c6) smil_status_pane_g1

0x0299,	// (0x00016f01) main_image2_pane_ParamLimits

0x0299,	// (0x00016f01) main_image2_pane

0x73b4,	// (0x0001e01c) main_camera2_pane_g9_ParamLimits

0x73b4,	// (0x0001e01c) main_camera2_pane_g9

0x7408,	// (0x0001e070) main_camera2_pane_t5_ParamLimits

0x7408,	// (0x0001e070) main_camera2_pane_t5

0x741a,	// (0x0001e082) main_camera2_pane_t6_ParamLimits

0x741a,	// (0x0001e082) main_camera2_pane_t6

0xb4de,	// (0x00022146) main_image2_pane_g1_ParamLimits

0xb4de,	// (0x00022146) main_image2_pane_g1

0xaa3e,	// (0x000216a6) smil2_video_pane_ParamLimits

0xaa3e,	// (0x000216a6) smil2_video_pane

0x0247,	// (0x00016eaf) aid_zoom_text_primary_cp

0x028f,	// (0x00016ef7) popup_preview_fixed_window

0x0e16,	// (0x00017a7e) im_reading_pane_g1

0x72fe,	// (0x0001df66) cams2_bc_adjust_pane_cp_ParamLimits

0x72fe,	// (0x0001df66) cams2_bc_adjust_pane_cp

0x744a,	// (0x0001e0b2) cams2_bc_adjust_pane_ParamLimits

0x744a,	// (0x0001e0b2) cams2_bc_adjust_pane

0x46d8,	// (0x0001b340) cams2_bc_adjust_pane_g1

0x758f,	// (0x0001e1f7) cams2_slider_pane

0x7598,	// (0x0001e200) cams2_slider_pane_g1

0x75a1,	// (0x0001e209) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0002631a) cams2_slider_pane_g

0x6eb2,	// (0x0001db1a) calc_display_pane_ParamLimits

0x6ed0,	// (0x0001db38) calc_paper_pane_ParamLimits

0x6eec,	// (0x0001db54) grid_calc_pane_ParamLimits

0x7239,	// (0x0001dea1) popup_clock_digital_window_t1_ParamLimits

0x1af3,	// (0x0001875b) main_image_pane_t1

0x6e98,	// (0x0001db00) aid_size_cell_calc_ParamLimits

0x6e98,	// (0x0001db00) aid_size_cell_calc

0xaf0b,	// (0x00021b73) popup_blid_sat_info2_window_ParamLimits

0xaf0b,	// (0x00021b73) popup_blid_sat_info2_window

0x2f3f,	// (0x00019ba7) aid_size_cell_blid

0x2f47,	// (0x00019baf) bg_popup_window_pane_cp07

0x2f6a,	// (0x00019bd2) grid_popup_blid_pane

0x2f74,	// (0x00019bdc) heading_pane_cp05_ParamLimits

0x2f74,	// (0x00019bdc) heading_pane_cp05

0x303e,	// (0x00019ca6) cell_popup_blid_pane_ParamLimits

0x303e,	// (0x00019ca6) cell_popup_blid_pane

0x3062,	// (0x00019cca) cell_popup_blid_pane_g1

0x306a,	// (0x00019cd2) cell_popup_blid_pane_t1

0xb365,	// (0x00021fcd) mup2_indicator_pane_ParamLimits

0xb365,	// (0x00021fcd) mup2_indicator_pane

0x179f,	// (0x00018407) mup2_visualizer_osc_pane

0x2da7,	// (0x00019a0f) mup2_visualizer_spec_pane_ParamLimits

0x2da7,	// (0x00019a0f) mup2_visualizer_spec_pane

0xb4ea,	// (0x00022152) mup2_spec_half_pane

0xb4f3,	// (0x0002215b) mup2_spec_half_pane_cp

0xb4fd,	// (0x00022165) mup2_spec_bar_pane_ParamLimits

0xb4fd,	// (0x00022165) mup2_spec_bar_pane

0x2cf6,	// (0x0001995e) mup2_spec_bar_pane_g1

0x2d00,	// (0x00019968) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0002628d) mup2_spec_bar_pane_g

0xb51c,	// (0x00022184) mup2_osc_middle_pane

0x2d12,	// (0x0001997a) mup2_visualizer_osc_pane_g1

0x02c7,	// (0x00016f2f) popup_number_entry_window_t1_ParamLimits

0x02da,	// (0x00016f42) popup_number_entry_window_t2_ParamLimits

0x02ec,	// (0x00016f54) popup_number_entry_window_t3_ParamLimits

0x8572,	// (0x0001f1da) popup_number_entry_window_t5_ParamLimits

0x8572,	// (0x0001f1da) popup_number_entry_window_t5

0xf0e7,	// (0x00025d4f) popup_number_entry_window_t_ParamLimits

0x02fe,	// (0x00016f66) text_title_cp2_ParamLimits

0x7278,	// (0x0001dee0) aid_hotspot_pointer_text2_pane

0x72c2,	// (0x0001df2a) main_viewer_pane_g9_ParamLimits

0x72c2,	// (0x0001df2a) main_viewer_pane_g9

0x1045,	// (0x00017cad) cale_month_pane_t1_ParamLimits

0x10da,	// (0x00017d42) bg_cale_pane_ParamLimits

0x10f2,	// (0x00017d5a) list_cale_pane_ParamLimits

0x0ba4,	// (0x0001780c) listscroll_cale_day_pane_t1

0x1103,	// (0x00017d6b) scroll_pane_cp09_ParamLimits

0xa4eb,	// (0x00021153) main_mup_eq_pane_t1_ParamLimits

0xa4eb,	// (0x00021153) main_mup_eq_pane_t1

0xa505,	// (0x0002116d) main_mup_eq_pane_t2_ParamLimits

0xa505,	// (0x0002116d) main_mup_eq_pane_t2

0xa51f,	// (0x00021187) main_mup_eq_pane_t3_ParamLimits

0xa51f,	// (0x00021187) main_mup_eq_pane_t3

0xa537,	// (0x0002119f) main_mup_eq_pane_t4_ParamLimits

0xa537,	// (0x0002119f) main_mup_eq_pane_t4

0xa54f,	// (0x000211b7) main_mup_eq_pane_t5_ParamLimits

0xa54f,	// (0x000211b7) main_mup_eq_pane_t5

0xa567,	// (0x000211cf) main_mup_eq_pane_t6_ParamLimits

0xa567,	// (0x000211cf) main_mup_eq_pane_t6

0xa57b,	// (0x000211e3) main_mup_eq_pane_t7_ParamLimits

0xa57b,	// (0x000211e3) main_mup_eq_pane_t7

0xa58f,	// (0x000211f7) main_mup_eq_pane_t8_ParamLimits

0xa58f,	// (0x000211f7) main_mup_eq_pane_t8

0xa5a5,	// (0x0002120d) main_mup_eq_pane_t9_ParamLimits

0xa5a5,	// (0x0002120d) main_mup_eq_pane_t9

0xa5bd,	// (0x00021225) main_mup_eq_pane_t10_ParamLimits

0xa5bd,	// (0x00021225) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000260dc) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000260dc) main_mup_eq_pane_t

0xa67a,	// (0x000212e2) mup_equalizer_pane_cp5_ParamLimits

0xa690,	// (0x000212f8) mup_equalizer_pane_cp6_ParamLimits

0xa6a8,	// (0x00021310) mup_equalizer_pane_cp7_ParamLimits

0x0229,	// (0x00016e91) main_gallery_pane

0x2d1b,	// (0x00019983) smil2_volume_pane

0x2d36,	// (0x0001999e) smil_status_volume_pane_g1_ParamLimits

0x2d23,	// (0x0001998b) smil_status_volume_pane_g2_ParamLimits

0x72ce,	// (0x0001df36) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x00026292) smil_status_volume_pane_g_ParamLimits

0x2f47,	// (0x00019baf) bg_popup_window_pane_cp07_ParamLimits

0x2f55,	// (0x00019bbd) blid_firmament_pane

0xb525,	// (0x0002218d) aid_size_cell_gallery_ParamLimits

0xb525,	// (0x0002218d) aid_size_cell_gallery

0xb533,	// (0x0002219b) grid_gallery_pane_ParamLimits

0xb533,	// (0x0002219b) grid_gallery_pane

0xb543,	// (0x000221ab) cell_gallery_pane_ParamLimits

0xb543,	// (0x000221ab) cell_gallery_pane

0x3078,	// (0x00019ce0) bg_cell_gallery_focus_pane_ParamLimits

0x3078,	// (0x00019ce0) bg_cell_gallery_focus_pane

0x308a,	// (0x00019cf2) cell_gallery_pane_g1_ParamLimits

0x308a,	// (0x00019cf2) cell_gallery_pane_g1

0xb591,	// (0x000221f9) cell_gallery_pane_g2_ParamLimits

0xb591,	// (0x000221f9) cell_gallery_pane_g2

0xb59e,	// (0x00022206) cell_gallery_pane_g3_ParamLimits

0xb59e,	// (0x00022206) cell_gallery_pane_g3

0x3096,	// (0x00019cfe) cell_gallery_pane_g4_ParamLimits

0x3096,	// (0x00019cfe) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x00026340) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x00026340) cell_gallery_pane_g

0x30a2,	// (0x00019d0a) bg_cell_gallery_focus_pane_g1

0x30aa,	// (0x00019d12) bg_cell_gallery_focus_pane_g2

0x30b2,	// (0x00019d1a) bg_cell_gallery_focus_pane_g3

0x30ba,	// (0x00019d22) bg_cell_gallery_focus_pane_g4

0x30c2,	// (0x00019d2a) bg_cell_gallery_focus_pane_g5

0x30ca,	// (0x00019d32) bg_cell_gallery_focus_pane_g6

0x30d2,	// (0x00019d3a) bg_cell_gallery_focus_pane_g7

0x30da,	// (0x00019d42) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00026349) bg_cell_gallery_focus_pane_g

0x30e2,	// (0x00019d4a) aid_firma_cardinal

0x30f6,	// (0x00019d5e) blid_firmament_pane_t1

0x310d,	// (0x00019d75) blid_firmament_pane_t2

0x3124,	// (0x00019d8c) blid_firmament_pane_t3

0x313b,	// (0x00019da3) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0002635a) blid_firmament_pane_t

0x3152,	// (0x00019dba) blid_sat_info_pane

0x3162,	// (0x00019dca) blid_sat_info_pane_g1

0x3162,	// (0x00019dca) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x00026363) blid_sat_info_pane_g

0x316c,	// (0x00019dd4) blid_sat_info_pane_t1

0x317a,	// (0x00019de2) smil2_volume_content_pane

0x3183,	// (0x00019deb) smil2_volume_pane_g1

0x318b,	// (0x00019df3) smil2_volume_content_pane_g1

0x3194,	// (0x00019dfc) smil2_volume_content_pane_g2

0x319d,	// (0x00019e05) smil2_volume_content_pane_g3

0x31a6,	// (0x00019e0e) smil2_volume_content_pane_g4

0x31af,	// (0x00019e17) smil2_volume_content_pane_g5

0x31b8,	// (0x00019e20) smil2_volume_content_pane_g6

0x31c1,	// (0x00019e29) smil2_volume_content_pane_g7

0x31ca,	// (0x00019e32) smil2_volume_content_pane_g8

0x31d3,	// (0x00019e3b) smil2_volume_content_pane_g9

0x31dc,	// (0x00019e44) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00026368) smil2_volume_content_pane_g

0x8b6e,	// (0x0001f7d6) cale_week_day_heading_pane_t1_ParamLimits

0x8b87,	// (0x0001f7ef) cale_week_day_heading_pane_t2_ParamLimits

0x8ba0,	// (0x0001f808) cale_week_day_heading_pane_t3_ParamLimits

0x8bb9,	// (0x0001f821) cale_week_day_heading_pane_t4_ParamLimits

0x8bd2,	// (0x0001f83a) cale_week_day_heading_pane_t5_ParamLimits

0x8beb,	// (0x0001f853) cale_week_day_heading_pane_t6_ParamLimits

0x8c04,	// (0x0001f86c) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00025e54) cale_week_day_heading_pane_t_ParamLimits

0x0bb6,	// (0x0001781e) bg_cale_side_pane_ParamLimits

0x704d,	// (0x0001dcb5) cale_week_time_pane_t1_ParamLimits

0x7065,	// (0x0001dccd) cale_week_time_pane_t2_ParamLimits

0x707d,	// (0x0001dce5) cale_week_time_pane_t3_ParamLimits

0x7095,	// (0x0001dcfd) cale_week_time_pane_t4_ParamLimits

0x70ad,	// (0x0001dd15) cale_week_time_pane_t5_ParamLimits

0x70c5,	// (0x0001dd2d) cale_week_time_pane_t6_ParamLimits

0x70dd,	// (0x0001dd45) cale_week_time_pane_t7_ParamLimits

0x70fd,	// (0x0001dd65) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00025e63) cale_week_time_pane_t_ParamLimits

0x8c1d,	// (0x0001f885) cell_cale_week_pane_g2_ParamLimits

0x0bb6,	// (0x0001781e) bg_cale_side_pane_cp01_ParamLimits

0x9bf7,	// (0x0002085f) cale_month_week_pane_t1_ParamLimits

0x9c0e,	// (0x00020876) cale_month_week_pane_t2_ParamLimits

0x9c25,	// (0x0002088d) cale_month_week_pane_t3_ParamLimits

0x9c3c,	// (0x000208a4) cale_month_week_pane_t4_ParamLimits

0x9c53,	// (0x000208bb) cale_month_week_pane_t5_ParamLimits

0x9c6e,	// (0x000208d6) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00025f3c) cale_month_week_pane_t_ParamLimits

0x7199,	// (0x0001de01) cell_cale_month_pane_g1_ParamLimits

0x0229,	// (0x00016e91) main_cale_event_viewer_pane

0x0229,	// (0x00016e91) listscroll_cale_event_viewer_pane

0x31e5,	// (0x00019e4d) list_cale_ev_pane

0x31ed,	// (0x00019e55) scroll_pane_cp023

0x31f9,	// (0x00019e61) field_cale_ev_pane_ParamLimits

0x31f9,	// (0x00019e61) field_cale_ev_pane

0x3217,	// (0x00019e7f) field_cale_ev_content_pane_ParamLimits

0x3217,	// (0x00019e7f) field_cale_ev_content_pane

0x3223,	// (0x00019e8b) field_cale_ev_pane_g1_ParamLimits

0x3223,	// (0x00019e8b) field_cale_ev_pane_g1

0x322f,	// (0x00019e97) field_cale_ev_pane_g2_ParamLimits

0x322f,	// (0x00019e97) field_cale_ev_pane_g2

0x3247,	// (0x00019eaf) field_cale_ev_pane_g3_ParamLimits

0x3247,	// (0x00019eaf) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0002637d) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0002637d) field_cale_ev_pane_g

0x325f,	// (0x00019ec7) field_cale_ev_pane_t1_ParamLimits

0x325f,	// (0x00019ec7) field_cale_ev_pane_t1

0x3276,	// (0x00019ede) field_cale_ev_content_pane_t1_ParamLimits

0x3276,	// (0x00019ede) field_cale_ev_content_pane_t1

0x1930,	// (0x00018598) bg_button_pane_cp01

0x0a0a,	// (0x00017672) listscroll_cale_week_pane_ParamLimits

0x894a,	// (0x0001f5b2) popup_toolbar_window_cp01

0x0ba4,	// (0x0001780c) listscroll_cale_week_pane_t1_ParamLimits

0x0a0a,	// (0x00017672) listscroll_cale_day_pane_ParamLimits

0x894a,	// (0x0001f5b2) popup_toolbar_window_cp02

0x0ba4,	// (0x0001780c) listscroll_cale_day_pane_t1_ParamLimits

0x0a0a,	// (0x00017672) main_cale_month_pane_ParamLimits

0xafdb,	// (0x00021c43) popup_toolbar_window_cp03_ParamLimits

0xafdb,	// (0x00021c43) popup_toolbar_window_cp03

0xa954,	// (0x000215bc) main_image_pane_g2_ParamLimits

0xa954,	// (0x000215bc) main_image_pane_g2

0xa960,	// (0x000215c8) main_image_pane_g3_ParamLimits

0xa960,	// (0x000215c8) main_image_pane_g3

0x0002,

0xf506,	// (0x0002616e) main_image_pane_g_ParamLimits

0xf506,	// (0x0002616e) main_image_pane_g

0x1af3,	// (0x0001875b) main_image_pane_t1_ParamLimits

0xa96c,	// (0x000215d4) main_image_pane_t2_ParamLimits

0xa96c,	// (0x000215d4) main_image_pane_t2

0xa97e,	// (0x000215e6) main_image_pane_t3_ParamLimits

0xa97e,	// (0x000215e6) main_image_pane_t3

0xa990,	// (0x000215f8) main_image_pane_t4_ParamLimits

0xa990,	// (0x000215f8) main_image_pane_t4

0x0003,

0xf50d,	// (0x00026175) main_image_pane_t_ParamLimits

0xf50d,	// (0x00026175) main_image_pane_t

0xa9a2,	// (0x0002160a) popup_image_details_window_cp01

0xa9ac,	// (0x00021614) popup_toobar_trans_pane_cp01_ParamLimits

0xa9ac,	// (0x00021614) popup_toobar_trans_pane_cp01

0xaf58,	// (0x00021bc0) popup_image_details_window_ParamLimits

0xaf58,	// (0x00021bc0) popup_image_details_window

0x2c7c,	// (0x000198e4) popup_image_focus_window

0x72f0,	// (0x0001df58) camera2_autofocus_pane_ParamLimits

0x72f0,	// (0x0001df58) camera2_autofocus_pane

0x0229,	// (0x00016e91) bg_popup_sub_pane_cp06

0x3294,	// (0x00019efc) popup_image_focus_window_g1

0x329c,	// (0x00019f04) popup_image_focus_window_g2

0x32a4,	// (0x00019f0c) popup_image_focus_window_g3

0x32ac,	// (0x00019f14) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00026384) popup_image_focus_window_g

0x32b4,	// (0x00019f1c) popup_image_focus_window_t1

0x32c2,	// (0x00019f2a) popup_image_focus_window_t2

0x32d2,	// (0x00019f3a) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0002638d) popup_image_focus_window_t

0x32e0,	// (0x00019f48) camera2_autofocus_pane_g1

0x0299,	// (0x00016f01) bg_tb_trans_pane_cp01

0x32ee,	// (0x00019f56) popup_image_details_window_g1

0x3301,	// (0x00019f69) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0002639f) popup_image_details_window_g

0x332a,	// (0x00019f92) popup_image_details_window_t1

0x333c,	// (0x00019fa4) popup_image_details_window_t2

0x3355,	// (0x00019fbd) popup_image_details_window_t3

0x3369,	// (0x00019fd1) popup_image_details_window_t4

0x3384,	// (0x00019fec) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x000263a6) popup_image_details_window_t

0x09dc,	// (0x00017644) bg_calc_paper_pane_ParamLimits

0x6f18,	// (0x0001db80) grid_highlight_pane_cp013

0x6f22,	// (0x0001db8a) list_calc_pane_ParamLimits

0x6f34,	// (0x0001db9c) scroll_pane_cp024

0x0a0a,	// (0x00017672) bg_calc_display_pane_ParamLimits

0x6f3c,	// (0x0001dba4) calc_display_pane_t1_ParamLimits

0x6f51,	// (0x0001dbb9) calc_display_pane_t2_ParamLimits

0x6f66,	// (0x0001dbce) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00025dd6) calc_display_pane_t_ParamLimits

0x6fcf,	// (0x0001dc37) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00025df3) cell_calc_pane_g

0x6fd8,	// (0x0001dc40) cell_calc_pane_t1

0x0a8d,	// (0x000176f5) grid_highlight_pane_cp02_ParamLimits

0x0aa3,	// (0x0001770b) toolbar_button_pane_cp01_ParamLimits

0x0aa3,	// (0x0001770b) toolbar_button_pane_cp01

0x1b38,	// (0x000187a0) temp_image_control_pane_ParamLimits

0x1b38,	// (0x000187a0) temp_image_control_pane

0x0299,	// (0x00016f01) main_mp3_pane

0x339e,	// (0x0001a006) temp_image_control_pane_g1_ParamLimits

0x339e,	// (0x0001a006) temp_image_control_pane_g1

0x33ac,	// (0x0001a014) temp_image_control_pane_g2_ParamLimits

0x33ac,	// (0x0001a014) temp_image_control_pane_g2

0x33be,	// (0x0001a026) temp_image_control_pane_g3_ParamLimits

0x33be,	// (0x0001a026) temp_image_control_pane_g3

0xb5db,	// (0x00022243) temp_image_control_pane_g4_ParamLimits

0xb5db,	// (0x00022243) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x000263b1) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x000263b1) temp_image_control_pane_g

0x339e,	// (0x0001a006) main_mp3_pane_g1

0xb5ec,	// (0x00022254) main_mp3_pane_g2

0x0007,

0xf752,	// (0x000263ba) main_mp3_pane_g

0x3401,	// (0x0001a069) main_mp3_pane_t1

0x0c85,	// (0x000178ed) main_camera_pane_g8_ParamLimits

0x0c85,	// (0x000178ed) main_camera_pane_g8

0x8e35,	// (0x0001fa9d) main_video_pane_g7_ParamLimits

0x8e35,	// (0x0001fa9d) main_video_pane_g7

0x7438,	// (0x0001e0a0) main_camera2_pane_t7_ParamLimits

0x7438,	// (0x0001e0a0) main_camera2_pane_t7

0x0e6d,	// (0x00017ad5) scroll_pane_cp025_ParamLimits

0x0e6d,	// (0x00017ad5) scroll_pane_cp025

0x0e81,	// (0x00017ae9) scroll_pane_cp026_ParamLimits

0x0e81,	// (0x00017ae9) scroll_pane_cp026

0x0e90,	// (0x00017af8) wml_content_pane_ParamLimits

0x0229,	// (0x00016e91) main_touch_calib_pane

0xb690,	// (0x000222f8) main_touch_calib_pane_g1

0xb69c,	// (0x00022304) main_touch_calib_pane_g2

0xb6a8,	// (0x00022310) main_touch_calib_pane_g3

0xb6b4,	// (0x0002231c) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000263d8) main_touch_calib_pane_g

0xb6c0,	// (0x00022328) main_touch_calib_pane_t1

0xb6d7,	// (0x0002233f) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000263e1) main_touch_calib_pane_t

0x16e0,	// (0x00018348) mup_progress_pane_cp02

0x16ff,	// (0x00018367) navi_pane_g1

0x1761,	// (0x000183c9) navi_pane_mp_t3

0x0299,	// (0x00016f01) main_mp3_pane_ParamLimits

0xb019,	// (0x00021c81) navi_pane_ParamLimits

0x339e,	// (0x0001a006) main_mp3_pane_g1_ParamLimits

0xb5ec,	// (0x00022254) main_mp3_pane_g2_ParamLimits

0xb5f8,	// (0x00022260) main_mp3_pane_g3_ParamLimits

0xb5f8,	// (0x00022260) main_mp3_pane_g3

0xb604,	// (0x0002226c) main_mp3_pane_g4_ParamLimits

0xb604,	// (0x0002226c) main_mp3_pane_g4

0x33ce,	// (0x0001a036) main_mp3_pane_g5_ParamLimits

0x33ce,	// (0x0001a036) main_mp3_pane_g5

0x33dc,	// (0x0001a044) main_mp3_pane_g6_ParamLimits

0x33dc,	// (0x0001a044) main_mp3_pane_g6

0x33e9,	// (0x0001a051) main_mp3_pane_g7_ParamLimits

0x33e9,	// (0x0001a051) main_mp3_pane_g7

0x33f5,	// (0x0001a05d) main_mp3_pane_g8_ParamLimits

0x33f5,	// (0x0001a05d) main_mp3_pane_g8

0xf752,	// (0x000263ba) main_mp3_pane_g_ParamLimits

0xb610,	// (0x00022278) main_mp3_pane_t2

0xb620,	// (0x00022288) main_mp3_pane_t3

0x340f,	// (0x0001a077) main_mp3_pane_t4

0x341d,	// (0x0001a085) main_mp3_pane_t5

0x0005,

0xf763,	// (0x000263cb) main_mp3_pane_t

0x342b,	// (0x0001a093) mup_progress_pane_cp01

0x0247,	// (0x00016eaf) aid_zoom_text_secondary2

0x31e5,	// (0x00019e4d) list_cale_ev2_pane

0x31ed,	// (0x00019e55) scroll_pane_cp023_ParamLimits

0xb72c,	// (0x00022394) field_cale_ev2_pane_ParamLimits

0xb72c,	// (0x00022394) field_cale_ev2_pane

0xb755,	// (0x000223bd) field_cale_ev2_pane_g1_ParamLimits

0xb755,	// (0x000223bd) field_cale_ev2_pane_g1

0xb761,	// (0x000223c9) field_cale_ev2_pane_g2_ParamLimits

0xb761,	// (0x000223c9) field_cale_ev2_pane_g2

0xb779,	// (0x000223e1) field_cale_ev2_pane_g3_ParamLimits

0xb779,	// (0x000223e1) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000263ec) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000263ec) field_cale_ev2_pane_g

0xb791,	// (0x000223f9) field_cale_ev2_pane_t1_ParamLimits

0xb791,	// (0x000223f9) field_cale_ev2_pane_t1

0xb7a8,	// (0x00022410) field_cale_ev2_pane_t2_ParamLimits

0xb7a8,	// (0x00022410) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000263f5) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000263f5) field_cale_ev2_pane_t

0xa834,	// (0x0002149c) main_postcard_pane_g5_ParamLimits

0xa834,	// (0x0002149c) main_postcard_pane_g5

0xa842,	// (0x000214aa) main_postcard_pane_g6_ParamLimits

0xa842,	// (0x000214aa) main_postcard_pane_g6

0x8c7f,	// (0x0001f8e7) camera2_autofocus_pane_cp_ParamLimits

0x8c7f,	// (0x0001f8e7) camera2_autofocus_pane_cp

0x0299,	// (0x00016f01) main_mup3_pane

0xb7dd,	// (0x00022445) main_mup3_pane_g1_ParamLimits

0xb7dd,	// (0x00022445) main_mup3_pane_g1

0xb7fe,	// (0x00022466) main_mup3_pane_g2_ParamLimits

0xb7fe,	// (0x00022466) main_mup3_pane_g2

0xb876,	// (0x000224de) main_mup3_pane_g3_ParamLimits

0xb876,	// (0x000224de) main_mup3_pane_g3

0xb8b9,	// (0x00022521) main_mup3_pane_g4_ParamLimits

0xb8b9,	// (0x00022521) main_mup3_pane_g4

0xb8fc,	// (0x00022564) main_mup3_pane_g5_ParamLimits

0xb8fc,	// (0x00022564) main_mup3_pane_g5

0xb93f,	// (0x000225a7) main_mup3_pane_g6_ParamLimits

0xb93f,	// (0x000225a7) main_mup3_pane_g6

0x343f,	// (0x0001a0a7) main_mup3_pane_g7_ParamLimits

0x343f,	// (0x0001a0a7) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x00026405) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x00026405) main_mup3_pane_g

0xb9b5,	// (0x0002261d) main_mup3_pane_t1_ParamLimits

0xb9b5,	// (0x0002261d) main_mup3_pane_t1

0xba24,	// (0x0002268c) main_mup3_pane_t2_ParamLimits

0xba24,	// (0x0002268c) main_mup3_pane_t2

0xbaed,	// (0x00022755) main_mup3_pane_t4_ParamLimits

0xbaed,	// (0x00022755) main_mup3_pane_t4

0xbb3b,	// (0x000227a3) main_mup3_pane_t5_ParamLimits

0xbb3b,	// (0x000227a3) main_mup3_pane_t5

0xbbeb,	// (0x00022853) main_mup3_pane_t6_ParamLimits

0xbbeb,	// (0x00022853) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x00026416) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x00026416) main_mup3_pane_t

0xbc97,	// (0x000228ff) mup3_progress_pane_ParamLimits

0xbc97,	// (0x000228ff) mup3_progress_pane

0xbd15,	// (0x0002297d) popup_mup3_control_window_ParamLimits

0xbd15,	// (0x0002297d) popup_mup3_control_window

0x344d,	// (0x0001a0b5) popup_mup3_text_window

0xbd2e,	// (0x00022996) mup3_progress_pane_t1

0xbd4d,	// (0x000229b5) mup3_progress_pane_t2

0x3455,	// (0x0001a0bd) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x00026423) mup3_progress_pane_t

0x3472,	// (0x0001a0da) mup_progress_pane_cp03

0x0229,	// (0x00016e91) bg_tb_trans_pane_cp04

0xbd6c,	// (0x000229d4) mup3_volume_pane

0xbd74,	// (0x000229dc) popup_mup3_control_window_g1

0xbd7d,	// (0x000229e5) mup3_volume_pane_g1

0xbd86,	// (0x000229ee) mup3_volume_pane_g2

0xbd8f,	// (0x000229f7) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0002642a) mup3_volume_pane_g

0x0229,	// (0x00016e91) bg_tb_trans_pane_cp03

0x3482,	// (0x0001a0ea) popup_mup3_text_window_g1

0x348a,	// (0x0001a0f2) popup_mup3_text_window_t1

0x0a64,	// (0x000176cc) list_calc_item_pane_g1_ParamLimits

0x2e71,	// (0x00019ad9) mup_volume_pane_cp_g1

0xb6ee,	// (0x00022356) main_touch_calib_pane_t3

0xb702,	// (0x0002236a) main_touch_calib_pane_t4

0xb716,	// (0x0002237e) main_touch_calib_pane_t5

0x0233,	// (0x00016e9b) aid_cell_size_toolbar2

0x023b,	// (0x00016ea3) aid_popup3_width_pane

0x0247,	// (0x00016eaf) aid_zoom_text_msg_primary

0x7183,	// (0x0001ddeb) vorec_t7

0x0a28,	// (0x00017690) bg_calc_paper_pane_g1_ParamLimits

0x0a40,	// (0x000176a8) bg_calc_paper_pane_g2_ParamLimits

0x0a34,	// (0x0001769c) bg_calc_paper_pane_g3_ParamLimits

0x0a58,	// (0x000176c0) bg_calc_paper_pane_g4_ParamLimits

0x0a4c,	// (0x000176b4) bg_calc_paper_pane_g5_ParamLimits

0x87fc,	// (0x0001f464) bg_calc_paper_pane_g6_ParamLimits

0x880d,	// (0x0001f475) bg_calc_paper_pane_g7_ParamLimits

0x881e,	// (0x0001f486) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00025ddd) bg_calc_paper_pane_g_ParamLimits

0x882f,	// (0x0001f497) calc_bg_paper_pane_g9_ParamLimits

0x8d66,	// (0x0001f9ce) image_qvga_pane_ParamLimits

0x8d66,	// (0x0001f9ce) image_qvga_pane

0x0915,	// (0x0001757d) bg_popup_sub_pane_cp04_ParamLimits

0x1a6f,	// (0x000186d7) popup_mup_playback_window_g1_ParamLimits

0x1a7b,	// (0x000186e3) popup_mup_playback_window_t1_ParamLimits

0x1a90,	// (0x000186f8) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00026169) popup_mup_playback_window_t_ParamLimits

0xb265,	// (0x00021ecd) main_mup2_pane_g3_ParamLimits

0xb265,	// (0x00021ecd) main_mup2_pane_g3

0x9075,	// (0x0001fcdd) popup_toolbar_window_cp04

0x1e72,	// (0x00018ada) popup_call2_audio_second_window_g3_ParamLimits

0x1e72,	// (0x00018ada) popup_call2_audio_second_window_g3

0x227c,	// (0x00018ee4) popup_call2_audio_first_window_g4_ParamLimits

0x227c,	// (0x00018ee4) popup_call2_audio_first_window_g4

0x28fb,	// (0x00019563) popup_call2_audio_in_window_g4_ParamLimits

0x28fb,	// (0x00019563) popup_call2_audio_in_window_g4

0xa947,	// (0x000215af) aid_area_sk_bg_cut_ParamLimits

0xa947,	// (0x000215af) aid_area_sk_bg_cut

0x1aa5,	// (0x0001870d) aid_area_sk_bg_cut_2_ParamLimits

0x1aa5,	// (0x0001870d) aid_area_sk_bg_cut_2

0xb581,	// (0x000221e9) aid_placing_details_win

0xb589,	// (0x000221f1) aid_placing_details_win_2

0x32e0,	// (0x00019f48) camera2_autofocus_pane_g1_ParamLimits

0x84c9,	// (0x0001f131) popup_fixed_preview_cale_window_ParamLimits

0x84c9,	// (0x0001f131) popup_fixed_preview_cale_window

0x17cb,	// (0x00018433) navi_slider_pane_g3

0x17c2,	// (0x0001842a) navi_slider_pane_g4

0x17b9,	// (0x00018421) navi_slider_pane_g5

0x17cb,	// (0x00018433) navi_slider_pane_g6

0x725f,	// (0x0001dec7) navi_slider_pane_g7

0x18f5,	// (0x0001855d) mup_scale_pane_g3

0x18fe,	// (0x00018566) mup_scale_pane_g4

0x1907,	// (0x0001856f) mup_scale_pane_g5

0xa6c0,	// (0x00021328) mup_scale_pane_g6

0xa6c9,	// (0x00021331) mup_scale_pane_g7

0x17cb,	// (0x00018433) cams2_slider_pane_g3

0x2f26,	// (0x00019b8e) cams2_slider_pane_g4

0x75aa,	// (0x0001e212) cams2_slider_pane_g5

0x17cb,	// (0x00018433) cams2_slider_pane_g6

0x75b2,	// (0x0001e21a) cams2_slider_pane_g7

0x3162,	// (0x00019dca) camera2_autofocus_pane_cp_g1

0x3498,	// (0x0001a100) bg_popup_preview_window_pane_cp02_ParamLimits

0x3498,	// (0x0001a100) bg_popup_preview_window_pane_cp02

0x34a4,	// (0x0001a10c) list_fp_cale_pane_ParamLimits

0x34a4,	// (0x0001a10c) list_fp_cale_pane

0x34b0,	// (0x0001a118) popup_fixed_preview_cale_window_t1_ParamLimits

0x34b0,	// (0x0001a118) popup_fixed_preview_cale_window_t1

0xbd98,	// (0x00022a00) popup_fixed_preview_cale_window_t2_ParamLimits

0xbd98,	// (0x00022a00) popup_fixed_preview_cale_window_t2

0xbdad,	// (0x00022a15) popup_fixed_preview_cale_window_t3_ParamLimits

0xbdad,	// (0x00022a15) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00026431) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00026431) popup_fixed_preview_cale_window_t

0xbdc2,	// (0x00022a2a) list_single_fp_cale_pane_ParamLimits

0xbdc2,	// (0x00022a2a) list_single_fp_cale_pane

0x34ce,	// (0x0001a136) list_single_fp_cale_pane_g1_ParamLimits

0x34ce,	// (0x0001a136) list_single_fp_cale_pane_g1

0x34da,	// (0x0001a142) list_single_fp_cale_pane_g2_ParamLimits

0x34da,	// (0x0001a142) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00026438) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00026438) list_single_fp_cale_pane_g

0x34f3,	// (0x0001a15b) list_single_fp_cale_pane_t1_ParamLimits

0x34f3,	// (0x0001a15b) list_single_fp_cale_pane_t1

0x3505,	// (0x0001a16d) list_single_fp_cale_pane_t2_ParamLimits

0x3505,	// (0x0001a16d) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0002643f) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0002643f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0229,	// (0x00016e91) main_dialer_pane

0xbdd4,	// (0x00022a3c) aid_cell_size_keypad

0xbdde,	// (0x00022a46) dialer_ne_pane

0xbde8,	// (0x00022a50) grid_dialer_command_1_pane

0xbdf0,	// (0x00022a58) grid_dialer_command_2_pane

0xbdf8,	// (0x00022a60) grid_dialer_keypad_pane

0xbe0a,	// (0x00022a72) bg_popup_call_pane_cp06_ParamLimits

0xbe0a,	// (0x00022a72) bg_popup_call_pane_cp06

0xbe16,	// (0x00022a7e) dialer_ne_clear_pane_ParamLimits

0xbe16,	// (0x00022a7e) dialer_ne_clear_pane

0x3538,	// (0x0001a1a0) dialer_ne_pane_g1

0x3540,	// (0x0001a1a8) dialer_ne_pane_t1_ParamLimits

0x3540,	// (0x0001a1a8) dialer_ne_pane_t1

0xbe22,	// (0x00022a8a) dialer_ne_pane_t2_ParamLimits

0xbe22,	// (0x00022a8a) dialer_ne_pane_t2

0xbe3f,	// (0x00022aa7) dialer_ne_pane_t3_ParamLimits

0xbe3f,	// (0x00022aa7) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00026444) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00026444) dialer_ne_pane_t

0xbe63,	// (0x00022acb) dialer_ne_pane_t3_copy1_ParamLimits

0xbe63,	// (0x00022acb) dialer_ne_pane_t3_copy1

0xbe87,	// (0x00022aef) cell_dialer_keypad_pane_ParamLimits

0xbe87,	// (0x00022aef) cell_dialer_keypad_pane

0xbe9e,	// (0x00022b06) cell_dialer_command_1_pane_ParamLimits

0xbe9e,	// (0x00022b06) cell_dialer_command_1_pane

0xbeb4,	// (0x00022b1c) cell_dialer_command_2_pane_ParamLimits

0xbeb4,	// (0x00022b1c) cell_dialer_command_2_pane

0x3552,	// (0x0001a1ba) bg_button_pane_cp02_ParamLimits

0x3552,	// (0x0001a1ba) bg_button_pane_cp02

0xbec3,	// (0x00022b2b) cell_dialer_keypad_pane_g1_ParamLimits

0xbec3,	// (0x00022b2b) cell_dialer_keypad_pane_g1

0x3552,	// (0x0001a1ba) bg_button_pane_cp03_ParamLimits

0x3552,	// (0x0001a1ba) bg_button_pane_cp03

0xbed8,	// (0x00022b40) cell_dialer_command_1_pane_g1_ParamLimits

0xbed8,	// (0x00022b40) cell_dialer_command_1_pane_g1

0x355e,	// (0x0001a1c6) bg_button_pane_cp04

0xbeec,	// (0x00022b54) cell_dialer_command_2_pane_g1

0x179f,	// (0x00018407) bg_button_pane_cp06

0x3566,	// (0x0001a1ce) dialer_ne_clear_pane_g1

0xa1d4,	// (0x00020e3c) navi_pane_g2

0xa202,	// (0x00020e6a) navi_pane_g3

0x0002,

0xf404,	// (0x0002606c) navi_pane_g

0xa22d,	// (0x00020e95) navi_pane_mv_g2

0xa254,	// (0x00020ebc) navi_pane_mv_g5

0xa25c,	// (0x00020ec4) navi_pane_mv_t1

0x0a0a,	// (0x00017672) main_clock2_pane

0xbf1d,	// (0x00022b85) main_clock2_list_pane_ParamLimits

0xbf1d,	// (0x00022b85) main_clock2_list_pane

0xbf45,	// (0x00022bad) main_clock2_pane_t1_ParamLimits

0xbf45,	// (0x00022bad) main_clock2_pane_t1

0xbf67,	// (0x00022bcf) main_clock2_pane_t2_ParamLimits

0xbf67,	// (0x00022bcf) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0002644b) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0002644b) main_clock2_pane_t

0xbfc2,	// (0x00022c2a) popup_clock_analogue_window_cp03_ParamLimits

0xbfc2,	// (0x00022c2a) popup_clock_analogue_window_cp03

0xbfe0,	// (0x00022c48) popup_clock_digital_window_cp02_ParamLimits

0xbfe0,	// (0x00022c48) popup_clock_digital_window_cp02

0xc04d,	// (0x00022cb5) main_clock2_list_single_pane_ParamLimits

0xc04d,	// (0x00022cb5) main_clock2_list_single_pane

0x179f,	// (0x00018407) list_highlight_pane_cp05

0x356e,	// (0x0001a1d6) main_clock2_list_single_pane_t1

0x9075,	// (0x0001fcdd) popup_toolbar_window_cp04_ParamLimits

0xb5ab,	// (0x00022213) camera2_autofocus_pane_g2_ParamLimits

0xb5ab,	// (0x00022213) camera2_autofocus_pane_g2

0xb5b7,	// (0x0002221f) camera2_autofocus_pane_g3_ParamLimits

0xb5b7,	// (0x0002221f) camera2_autofocus_pane_g3

0xb5c3,	// (0x0002222b) camera2_autofocus_pane_g4_ParamLimits

0xb5c3,	// (0x0002222b) camera2_autofocus_pane_g4

0xb5cf,	// (0x00022237) camera2_autofocus_pane_g5_ParamLimits

0xb5cf,	// (0x00022237) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00026394) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00026394) camera2_autofocus_pane_g

0xb7bd,	// (0x00022425) camera2_autofocus_pane_cp_g2

0xb7c5,	// (0x0002242d) camera2_autofocus_pane_cp_g3

0xb7cd,	// (0x00022435) camera2_autofocus_pane_cp_g4

0xb7d5,	// (0x0002243d) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000263fa) camera2_autofocus_pane_cp_g

0xbe02,	// (0x00022a6a) popup_dialer_spcha_window

0x0229,	// (0x00016e91) bg_popup_sub_pane_cp07

0x357c,	// (0x0001a1e4) list_spcha_pane

0x3584,	// (0x0001a1ec) list_single_spcha_pane_ParamLimits

0x3584,	// (0x0001a1ec) list_single_spcha_pane

0x0229,	// (0x00016e91) list_highlight_pane_cp06

0x3595,	// (0x0001a1fd) list_single_spcha_pane_t1

0x26a5,	// (0x0001930d) popup_call2_audio_out_window_g4_ParamLimits

0x26a5,	// (0x0001930d) popup_call2_audio_out_window_g4

0x0229,	// (0x00016e91) main_imed2_pane

0x2c84,	// (0x000198ec) popup_imed_adjust2_window

0xaf66,	// (0x00021bce) popup_imed_trans_window_ParamLimits

0xaf66,	// (0x00021bce) popup_imed_trans_window

0x2fa0,	// (0x00019c08) popup_blid_sat_info2_window_t1

0x2fae,	// (0x00019c16) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00026329) popup_blid_sat_info2_window_t

0xc07f,	// (0x00022ce7) aid_size_cell_colour_35

0xc099,	// (0x00022d01) aid_size_cell_colour_112

0xc0b0,	// (0x00022d18) aid_size_cell_effect

0x0299,	// (0x00016f01) bg_tb_trans_pane_cp02

0x12a1,	// (0x00017f09) heading_imed_pane

0xc0ca,	// (0x00022d32) listscroll_imed_pane

0x35a3,	// (0x0001a20b) heading_imed_pane_g1

0x35ab,	// (0x0001a213) heading_imed_pane_t1

0x35b9,	// (0x0001a221) grid_imed_colour_35_pane_ParamLimits

0x35b9,	// (0x0001a221) grid_imed_colour_35_pane

0xc0d6,	// (0x00022d3e) grid_imed_effect_pane

0x35d0,	// (0x0001a238) list_imed_aspect_pane

0xc0e6,	// (0x00022d4e) scroll_pane_cp027_ParamLimits

0xc0e6,	// (0x00022d4e) scroll_pane_cp027

0xc0f2,	// (0x00022d5a) cell_imed_effect_pane_ParamLimits

0xc0f2,	// (0x00022d5a) cell_imed_effect_pane

0x35d8,	// (0x0001a240) cell_imed_colour_pane_ParamLimits

0x35d8,	// (0x0001a240) cell_imed_colour_pane

0x361a,	// (0x0001a282) cell_imed_colour_pane_g1_ParamLimits

0x361a,	// (0x0001a282) cell_imed_colour_pane_g1

0x362b,	// (0x0001a293) hgihlgiht_grid_pane_cp016_ParamLimits

0x362b,	// (0x0001a293) hgihlgiht_grid_pane_cp016

0xc10a,	// (0x00022d72) cell_imed_effect_pane_g1

0xc112,	// (0x00022d7a) grid_highlight_pane_cp017

0x363c,	// (0x0001a2a4) list_imed_single_pane_ParamLimits

0x363c,	// (0x0001a2a4) list_imed_single_pane

0x0229,	// (0x00016e91) list_highlight_pane_cp07

0x3651,	// (0x0001a2b9) list_imed_aspect_pane_comp1_t1

0x2c5c,	// (0x000198c4) bg_tb_trans_pane_cp05

0x3673,	// (0x0001a2db) popup_imed_adjust2_window_g1

0x369a,	// (0x0001a302) popup_imed_adjust2_window_t1

0x36b2,	// (0x0001a31a) slider_imed_adjust_pane

0x36c6,	// (0x0001a32e) slider_imed_adjust_pane_g1

0x36d6,	// (0x0001a33e) slider_imed_adjust_pane_g2

0x36e6,	// (0x0001a34e) slider_imed_adjust_pane_g3

0x36f7,	// (0x0001a35f) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00026468) slider_imed_adjust_pane_g

0xc11b,	// (0x00022d83) aid_size_cell_clipart2

0xc127,	// (0x00022d8f) grid_imed_clipart_pane

0x3708,	// (0x0001a370) scroll_pane_cp031

0xc131,	// (0x00022d99) cell_imed_clipart_pane_ParamLimits

0xc131,	// (0x00022d99) cell_imed_clipart_pane

0xc153,	// (0x00022dbb) cell_imed_clipart_pane_g1

0x0229,	// (0x00016e91) grid_highlight_pane_cp014

0xbf29,	// (0x00022b91) main_clock2_pane_g1_ParamLimits

0xbf29,	// (0x00022b91) main_clock2_pane_g1

0xbff8,	// (0x00022c60) aid_call2_pane_cp10

0xc00a,	// (0x00022c72) aid_call_pane_cp10

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g1

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g2

0xc01c,	// (0x00022c84) popup_clock_analogue_window_cp10_g3

0xc01c,	// (0x00022c84) popup_clock_analogue_window_cp10_g4

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00026456) popup_clock_analogue_window_cp10_g

0xc02e,	// (0x00022c96) popup_clock_analogue_window_cp10_t1

0x75bb,	// (0x0001e223) clock_digital_number_pane_cp10_ParamLimits

0x75bb,	// (0x0001e223) clock_digital_number_pane_cp10

0x75d3,	// (0x0001e23b) clock_digital_number_pane_cp11_ParamLimits

0x75d3,	// (0x0001e23b) clock_digital_number_pane_cp11

0x75eb,	// (0x0001e253) clock_digital_number_pane_cp12_ParamLimits

0x75eb,	// (0x0001e253) clock_digital_number_pane_cp12

0x7603,	// (0x0001e26b) clock_digital_number_pane_cp13_ParamLimits

0x7603,	// (0x0001e26b) clock_digital_number_pane_cp13

0x761b,	// (0x0001e283) clock_digital_separator_pane_cp10_ParamLimits

0x761b,	// (0x0001e283) clock_digital_separator_pane_cp10

0xc05f,	// (0x00022cc7) popup_clock_digital_window_cp02_t1_ParamLimits

0xc05f,	// (0x00022cc7) popup_clock_digital_window_cp02_t1

0x090d,	// (0x00017575) clock_digital_number_pane_cp10_g1

0x090d,	// (0x00017575) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x00026471) clock_digital_number_pane_cp10_g

0x090d,	// (0x00017575) clock_digital_separator_pane_cp10_g1

0x090d,	// (0x00017575) clock_digital_separator_pane_g2_cp10

0x176f,	// (0x000183d7) navi_pane_vded_g4

0x1778,	// (0x000183e0) navi_pane_vded_g5

0x1781,	// (0x000183e9) navi_pane_vded_t1

0x0229,	// (0x00016e91) main_vded_pane

0xc15c,	// (0x00022dc4) main_vded_pane_g1

0xc168,	// (0x00022dd0) main_vded_pane_g2

0xc172,	// (0x00022dda) main_vded_pane_g3

0x0002,

0xf80e,	// (0x00026476) main_vded_pane_g

0xc17c,	// (0x00022de4) main_vded_pane_t1

0xc18a,	// (0x00022df2) main_vded_pane_t2

0x0001,

0xf815,	// (0x0002647d) main_vded_pane_t

0xc198,	// (0x00022e00) vded_slider_pane

0xc1a2,	// (0x00022e0a) vded_video_pane

0x3710,	// (0x0001a378) vded_video_pane_g1

0xc1ac,	// (0x00022e14) vded_video_pane_g2

0x3162,	// (0x00019dca) vded_video_pane_g3

0x0002,

0xf81a,	// (0x00026482) vded_video_pane_g

0x371a,	// (0x0001a382) vded_slider_pane_g1

0x2e71,	// (0x00019ad9) vded_slider_pane_g2

0x3723,	// (0x0001a38b) vded_slider_pane_g3

0x372c,	// (0x0001a394) vded_slider_pane_g4

0x3735,	// (0x0001a39d) vded_slider_pane_g5

0x0004,

0xf821,	// (0x00026489) vded_slider_pane_g

0xbd07,	// (0x0002296f) mup3_rocker_pane_ParamLimits

0xbd07,	// (0x0002296f) mup3_rocker_pane

0xc1b5,	// (0x00022e1d) mup3_control_keys_pane_g1

0xc1bd,	// (0x00022e25) mup3_control_keys_pane_g2

0xc1c5,	// (0x00022e2d) mup3_control_keys_pane_g3

0xc1cd,	// (0x00022e35) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x00026494) mup3_control_keys_pane_g

0x84e7,	// (0x0001f14f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x84e7,	// (0x0001f14f) popup_toolbar2_fixed_window_cp01

0xbd21,	// (0x00022989) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbd21,	// (0x00022989) popup_toolbar2_fixed_window_cp02

0x1fe4,	// (0x00018c4c) popup_call2_audio_second_window_t4_ParamLimits

0x1fe4,	// (0x00018c4c) popup_call2_audio_second_window_t4

0x2512,	// (0x0001917a) popup_call2_audio_first_window_t6_ParamLimits

0x2512,	// (0x0001917a) popup_call2_audio_first_window_t6

0x27a8,	// (0x00019410) popup_call2_audio_out_window_t6_ParamLimits

0x27a8,	// (0x00019410) popup_call2_audio_out_window_t6

0x0229,	// (0x00016e91) main_vitu_pane

0xc1dd,	// (0x00022e45) aid_size_cell_itu_ParamLimits

0xc1dd,	// (0x00022e45) aid_size_cell_itu

0x39ee,	// (0x0001a656) bg_popup_window_pane_cp08_ParamLimits

0x39ee,	// (0x0001a656) bg_popup_window_pane_cp08

0xc1eb,	// (0x00022e53) field_vitu_entry_pane_ParamLimits

0xc1eb,	// (0x00022e53) field_vitu_entry_pane

0xc1fa,	// (0x00022e62) grid_vitu_function_pane_ParamLimits

0xc1fa,	// (0x00022e62) grid_vitu_function_pane

0xc20a,	// (0x00022e72) grid_vitu_itu_pane_ParamLimits

0xc20a,	// (0x00022e72) grid_vitu_itu_pane

0xc21a,	// (0x00022e82) cell_vitu_itu_pane_ParamLimits

0xc21a,	// (0x00022e82) cell_vitu_itu_pane

0xc22f,	// (0x00022e97) cell_vitu_function_pane_ParamLimits

0xc22f,	// (0x00022e97) cell_vitu_function_pane

0x0299,	// (0x00016f01) bg_popup_sub_pane_cp08_ParamLimits

0x0299,	// (0x00016f01) bg_popup_sub_pane_cp08

0xc241,	// (0x00022ea9) field_vitu_entry_pane_t1_ParamLimits

0xc241,	// (0x00022ea9) field_vitu_entry_pane_t1

0x3756,	// (0x0001a3be) field_vitu_entry_pane_t2_ParamLimits

0x3756,	// (0x0001a3be) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x000264a2) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x000264a2) field_vitu_entry_pane_t

0x3773,	// (0x0001a3db) bg_button_pane_cp05_ParamLimits

0x3773,	// (0x0001a3db) bg_button_pane_cp05

0xc25d,	// (0x00022ec5) cell_vitu_itu_pane_g1

0xc275,	// (0x00022edd) cell_vitu_itu_pane_t1_ParamLimits

0xc275,	// (0x00022edd) cell_vitu_itu_pane_t1

0xc287,	// (0x00022eef) cell_vitu_itu_pane_t2_ParamLimits

0xc287,	// (0x00022eef) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x000264a7) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x000264a7) cell_vitu_itu_pane_t

0x3781,	// (0x0001a3e9) bg_button_pane_cp07

0xc2bc,	// (0x00022f24) cell_vitu_function_pane_g1

0x6f10,	// (0x0001db78) main_calc_pane_g1

0x82f0,	// (0x0001ef58) aid_visual_content_pane

0x0229,	// (0x00016e91) main_vradio_pane

0xc2c5,	// (0x00022f2d) main_vradio_pane_g1_ParamLimits

0xc2c5,	// (0x00022f2d) main_vradio_pane_g1

0x378b,	// (0x0001a3f3) main_vradio_pane_g2_ParamLimits

0x378b,	// (0x0001a3f3) main_vradio_pane_g2

0x0001,

0xf846,	// (0x000264ae) main_vradio_pane_g_ParamLimits

0xf846,	// (0x000264ae) main_vradio_pane_g

0xc2d5,	// (0x00022f3d) main_vradio_pane_t1_ParamLimits

0xc2d5,	// (0x00022f3d) main_vradio_pane_t1

0xc2e7,	// (0x00022f4f) main_vradio_pane_t2_ParamLimits

0xc2e7,	// (0x00022f4f) main_vradio_pane_t2

0x3798,	// (0x0001a400) main_vradio_pane_t3_ParamLimits

0x3798,	// (0x0001a400) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x000264b3) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x000264b3) main_vradio_pane_t

0xc2f9,	// (0x00022f61) vradio_rocker_control_pane_ParamLimits

0xc2f9,	// (0x00022f61) vradio_rocker_control_pane

0xc305,	// (0x00022f6d) vradio_station_info_pane_ParamLimits

0xc305,	// (0x00022f6d) vradio_station_info_pane

0x37ac,	// (0x0001a414) vradio_frequency_info_pane_ParamLimits

0x37ac,	// (0x0001a414) vradio_frequency_info_pane

0x3162,	// (0x00019dca) vradio_station_info_pane_g1

0x37bb,	// (0x0001a423) vradio_station_info_pane_t1_ParamLimits

0x37bb,	// (0x0001a423) vradio_station_info_pane_t1

0x37dd,	// (0x0001a445) vradio_station_info_pane_t2_ParamLimits

0x37dd,	// (0x0001a445) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x000264ba) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x000264ba) vradio_station_info_pane_t

0x37ef,	// (0x0001a457) vradio_tuning_pane

0x37f7,	// (0x0001a45f) vradio_rocker_control_pane_g1

0x37ff,	// (0x0001a467) vradio_rocker_control_pane_g2

0x3807,	// (0x0001a46f) vradio_rocker_control_pane_g3

0x380f,	// (0x0001a477) vradio_rocker_control_pane_g4

0x3817,	// (0x0001a47f) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x000264bf) vradio_rocker_control_pane_g

0xc314,	// (0x00022f7c) vradio_frequency_info_pane_g1

0x381f,	// (0x0001a487) vradio_frequency_info_pane_t1_ParamLimits

0x381f,	// (0x0001a487) vradio_frequency_info_pane_t1

0xc31e,	// (0x00022f86) vradio_tuning_pane_g1

0xc327,	// (0x00022f8f) vradio_tuning_pane_t1

0x0257,	// (0x00016ebf) area_side_right_pane_ParamLimits

0x0257,	// (0x00016ebf) area_side_right_pane

0x2c23,	// (0x0001988b) status_small_pane_g1

0x2c2b,	// (0x00019893) status_small_pane_g2

0x2c34,	// (0x0001989c) status_small_pane_g3

0x2c3d,	// (0x000198a5) status_small_pane_g4

0x0003,

0xf617,	// (0x0002627f) status_small_pane_g

0x2c46,	// (0x000198ae) status_small_pane_t1

0x0229,	// (0x00016e91) main_video3_pane

0x3833,	// (0x0001a49b) cams_zoom_vslider_pane

0x383b,	// (0x0001a4a3) image3_wide_pane_ParamLimits

0x383b,	// (0x0001a4a3) image3_wide_pane

0x3855,	// (0x0001a4bd) image3_wide_small_pane

0x3861,	// (0x0001a4c9) main_video3_pane_g1_ParamLimits

0x3861,	// (0x0001a4c9) main_video3_pane_g1

0x387d,	// (0x0001a4e5) main_video3_pane_g2_ParamLimits

0x387d,	// (0x0001a4e5) main_video3_pane_g2

0x0001,

0xf862,	// (0x000264ca) main_video3_pane_g_ParamLimits

0xf862,	// (0x000264ca) main_video3_pane_g

0x3899,	// (0x0001a501) main_video3_pane_t1_ParamLimits

0x3899,	// (0x0001a501) main_video3_pane_t1

0x38c4,	// (0x0001a52c) main_video3_pane_t2_ParamLimits

0x38c4,	// (0x0001a52c) main_video3_pane_t2

0x38ef,	// (0x0001a557) main_video3_pane_t3_ParamLimits

0x38ef,	// (0x0001a557) main_video3_pane_t3

0x0002,

0xf867,	// (0x000264cf) main_video3_pane_t_ParamLimits

0xf867,	// (0x000264cf) main_video3_pane_t

0x391c,	// (0x0001a584) cams_zoom_vslider_pane_g1

0x3925,	// (0x0001a58d) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x000264d6) cams_zoom_vslider_pane_g

0x392d,	// (0x0001a595) small_slider_vertical_pane

0x3162,	// (0x00019dca) small_slider_vertical_pane_g1

0x3162,	// (0x00019dca) small_slider_vertical_pane_g2

0x3935,	// (0x0001a59d) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x000264db) small_slider_vertical_pane_g

0x0229,	// (0x00016e91) main_hwr_training_pane

0x393e,	// (0x0001a5a6) hwr_training_instruct_pane_ParamLimits

0x393e,	// (0x0001a5a6) hwr_training_instruct_pane

0xc336,	// (0x00022f9e) hwr_training_navi_pane_ParamLimits

0xc336,	// (0x00022f9e) hwr_training_navi_pane

0xc350,	// (0x00022fb8) hwr_training_write_pane_ParamLimits

0xc350,	// (0x00022fb8) hwr_training_write_pane

0x0229,	// (0x00016e91) bg_frame_shadow_pane

0x3975,	// (0x0001a5dd) hwr_training_write_pane_g1

0x397d,	// (0x0001a5e5) hwr_training_write_pane_g2

0x3985,	// (0x0001a5ed) hwr_training_write_pane_g3

0x398d,	// (0x0001a5f5) hwr_training_write_pane_g4

0x3995,	// (0x0001a5fd) hwr_training_write_pane_g5

0x399d,	// (0x0001a605) hwr_training_write_pane_g6

0x39a5,	// (0x0001a60d) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x000264e2) hwr_training_write_pane_g

0x7633,	// (0x0001e29b) hwr_training_navi_pane_g1_ParamLimits

0x7633,	// (0x0001e29b) hwr_training_navi_pane_g1

0x7645,	// (0x0001e2ad) hwr_training_navi_pane_g2_ParamLimits

0x7645,	// (0x0001e2ad) hwr_training_navi_pane_g2

0x7657,	// (0x0001e2bf) hwr_training_navi_pane_g3_ParamLimits

0x7657,	// (0x0001e2bf) hwr_training_navi_pane_g3

0x7667,	// (0x0001e2cf) hwr_training_navi_pane_g4_ParamLimits

0x7667,	// (0x0001e2cf) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x000264f1) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x000264f1) hwr_training_navi_pane_g

0x7681,	// (0x0001e2e9) hwr_training_navi_pane_t1

0xc388,	// (0x00022ff0) list_single_hwr_training_instruct_pane_ParamLimits

0xc388,	// (0x00022ff0) list_single_hwr_training_instruct_pane

0x3a0a,	// (0x0001a672) list_single_hwr_training_instruct_pane_t1

0x30a2,	// (0x00019d0a) bg_frame_shadow_pane_g1

0x3a19,	// (0x0001a681) bg_frame_shadow_pane_g2

0x3a21,	// (0x0001a689) bg_frame_shadow_pane_g3

0x3a29,	// (0x0001a691) bg_frame_shadow_pane_g4

0x3a31,	// (0x0001a699) bg_frame_shadow_pane_g5

0x3a39,	// (0x0001a6a1) bg_frame_shadow_pane_g6

0x3a41,	// (0x0001a6a9) bg_frame_shadow_pane_g7

0x0ae7,	// (0x0001774f) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x000264fc) bg_frame_shadow_pane_g

0x0229,	// (0x00016e91) main_video_tele_dialer_pane

0x768f,	// (0x0001e2f7) aid_size_cell_video_keypad_ParamLimits

0x768f,	// (0x0001e2f7) aid_size_cell_video_keypad

0x769f,	// (0x0001e307) grid_video_dialer_keypad_pane_ParamLimits

0x769f,	// (0x0001e307) grid_video_dialer_keypad_pane

0x76ad,	// (0x0001e315) video_down_pane_cp_ParamLimits

0x76ad,	// (0x0001e315) video_down_pane_cp

0x76b9,	// (0x0001e321) cell_video_dialer_keypad_pane_ParamLimits

0x76b9,	// (0x0001e321) cell_video_dialer_keypad_pane

0x3a65,	// (0x0001a6cd) bg_button_pane_cp08_ParamLimits

0x3a65,	// (0x0001a6cd) bg_button_pane_cp08

0xc3d1,	// (0x00023039) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc3d1,	// (0x00023039) cell_video_dialer_keypad_pane_g1

0xbcfb,	// (0x00022963) mup3_rocker2_pane_ParamLimits

0xbcfb,	// (0x00022963) mup3_rocker2_pane

0x3162,	// (0x00019dca) mup3_rocker2_pane_g1

0xaef0,	// (0x00021b58) main_dialer2_pane

0x0229,	// (0x00016e91) main_mp4_pane

0x76d6,	// (0x0001e33e) main_mp4_pane_g1_ParamLimits

0x76d6,	// (0x0001e33e) main_mp4_pane_g1

0x76e4,	// (0x0001e34c) main_mp4_pane_g2_ParamLimits

0x76e4,	// (0x0001e34c) main_mp4_pane_g2

0x76f2,	// (0x0001e35a) main_mp4_pane_g3_ParamLimits

0x76f2,	// (0x0001e35a) main_mp4_pane_g3

0x7737,	// (0x0001e39f) main_mp4_pane_g4_ParamLimits

0x7737,	// (0x0001e39f) main_mp4_pane_g4

0x775f,	// (0x0001e3c7) main_mp4_pane_g5_ParamLimits

0x775f,	// (0x0001e3c7) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0002651c) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0002651c) main_mp4_pane_g

0x77af,	// (0x0001e417) main_mp4_pane_t1_ParamLimits

0x77af,	// (0x0001e417) main_mp4_pane_t1

0x780b,	// (0x0001e473) main_mp4_pane_t2_ParamLimits

0x780b,	// (0x0001e473) main_mp4_pane_t2

0x3bad,	// (0x0001a815) main_mp4_pane_t3_ParamLimits

0x3bad,	// (0x0001a815) main_mp4_pane_t3

0x785d,	// (0x0001e4c5) main_mp4_pane_t4_ParamLimits

0x785d,	// (0x0001e4c5) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00026529) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00026529) main_mp4_pane_t

0x78a1,	// (0x0001e509) mp4_progress_pane_ParamLimits

0x78a1,	// (0x0001e509) mp4_progress_pane

0x78eb,	// (0x0001e553) mp4_rocker_pane_ParamLimits

0x78eb,	// (0x0001e553) mp4_rocker_pane

0x3c83,	// (0x0001a8eb) mp4_progress_pane_t1

0x3c9c,	// (0x0001a904) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00026532) mp4_progress_pane_t

0x3cb5,	// (0x0001a91d) mup_progress_pane_cp04

0x4779,	// (0x0001b3e1) mp4_rocker_pane_g1

0x790b,	// (0x0001e573) aid_cell_size_keypad2_ParamLimits

0x790b,	// (0x0001e573) aid_cell_size_keypad2

0x791b,	// (0x0001e583) dialer2_ne_pane_ParamLimits

0x791b,	// (0x0001e583) dialer2_ne_pane

0x7929,	// (0x0001e591) grid_dialer2_keypad_pane_ParamLimits

0x7929,	// (0x0001e591) grid_dialer2_keypad_pane

0x47e2,	// (0x0001b44a) bg_popup_call_pane_cp07_ParamLimits

0x47e2,	// (0x0001b44a) bg_popup_call_pane_cp07

0xc40b,	// (0x00023073) dialer2_ne_pane_t1_ParamLimits

0xc40b,	// (0x00023073) dialer2_ne_pane_t1

0x7939,	// (0x0001e5a1) cell_dialer2_keypad_pane_ParamLimits

0x7939,	// (0x0001e5a1) cell_dialer2_keypad_pane

0x3cd3,	// (0x0001a93b) bg_button_pane_pane_cp04_ParamLimits

0x3cd3,	// (0x0001a93b) bg_button_pane_pane_cp04

0xc430,	// (0x00023098) cell_dialer2_keypad_pane_g1_ParamLimits

0xc430,	// (0x00023098) cell_dialer2_keypad_pane_g1

0x8f37,	// (0x0001fb9f) aid_placing_vt_set_content_ParamLimits

0x8f37,	// (0x0001fb9f) aid_placing_vt_set_content

0x8f63,	// (0x0001fbcb) aid_placing_vt_set_title_ParamLimits

0x8f63,	// (0x0001fbcb) aid_placing_vt_set_title

0x0229,	// (0x00016e91) main_image3_pane

0x7980,	// (0x0001e5e8) area_side_right_pane_cp01_ParamLimits

0x7980,	// (0x0001e5e8) area_side_right_pane_cp01

0x79ad,	// (0x0001e615) main_image3_pane_g1_ParamLimits

0x79ad,	// (0x0001e615) main_image3_pane_g1

0x79bb,	// (0x0001e623) main_image3_pane_g2_ParamLimits

0x79bb,	// (0x0001e623) main_image3_pane_g2

0x79d4,	// (0x0001e63c) main_image3_pane_g3_ParamLimits

0x79d4,	// (0x0001e63c) main_image3_pane_g3

0x79ed,	// (0x0001e655) main_image3_pane_g4_ParamLimits

0x79ed,	// (0x0001e655) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x00026541) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x00026541) main_image3_pane_g

0x7a06,	// (0x0001e66e) main_image3_pane_t1_ParamLimits

0x7a06,	// (0x0001e66e) main_image3_pane_t1

0x7a2b,	// (0x0001e693) main_image3_pane_t2_ParamLimits

0x7a2b,	// (0x0001e693) main_image3_pane_t2

0x7a4a,	// (0x0001e6b2) main_image3_pane_t3_ParamLimits

0x7a4a,	// (0x0001e6b2) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0002654a) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0002654a) main_image3_pane_t

0x39ee,	// (0x0001a656) grid_sctrl_middle_pane_cp01_ParamLimits

0x39ee,	// (0x0001a656) grid_sctrl_middle_pane_cp01

0xc498,	// (0x00023100) cell_sctrl_middle_pane_cp01_ParamLimits

0xc498,	// (0x00023100) cell_sctrl_middle_pane_cp01

0xc4a9,	// (0x00023111) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc4a9,	// (0x00023111) cell_sctrl_middle_pane_cp01_g1

0x0229,	// (0x00016e91) main_call4_pane

0xc4b6,	// (0x0002311e) aid_size_button_call4_ParamLimits

0xc4b6,	// (0x0002311e) aid_size_button_call4

0xc4e6,	// (0x0002314e) call4_windows_pane_ParamLimits

0xc4e6,	// (0x0002314e) call4_windows_pane

0xc500,	// (0x00023168) grid_call4_button_pane_ParamLimits

0xc500,	// (0x00023168) grid_call4_button_pane

0x3d11,	// (0x0001a979) call4_windows_conf_pane

0x3d28,	// (0x0001a990) popup_call4_audio_first_window_ParamLimits

0x3d28,	// (0x0001a990) popup_call4_audio_first_window

0x3d74,	// (0x0001a9dc) popup_call4_audio_second_window_ParamLimits

0x3d74,	// (0x0001a9dc) popup_call4_audio_second_window

0x3d88,	// (0x0001a9f0) popup_call4_audio_wait_window_ParamLimits

0x3d88,	// (0x0001a9f0) popup_call4_audio_wait_window

0xc524,	// (0x0002318c) cell_call4_button_pane_ParamLimits

0xc524,	// (0x0002318c) cell_call4_button_pane

0xc549,	// (0x000231b1) bg_button_pane_cp09_ParamLimits

0xc549,	// (0x000231b1) bg_button_pane_cp09

0xc555,	// (0x000231bd) cell_call4_button_pane_g1_ParamLimits

0xc555,	// (0x000231bd) cell_call4_button_pane_g1

0xc562,	// (0x000231ca) cell_call4_button_pane_t1_ParamLimits

0xc562,	// (0x000231ca) cell_call4_button_pane_t1

0x3dd0,	// (0x0001aa38) popup_call4_audio_conf_window_ParamLimits

0x3dd0,	// (0x0001aa38) popup_call4_audio_conf_window

0xbd2e,	// (0x00022996) mup3_progress_pane_t1_ParamLimits

0xbd4d,	// (0x000229b5) mup3_progress_pane_t2_ParamLimits

0x3455,	// (0x0001a0bd) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x00026423) mup3_progress_pane_t_ParamLimits

0x3472,	// (0x0001a0da) mup_progress_pane_cp03_ParamLimits

0xc1d5,	// (0x00022e3d) mup3_control_keys_pane_g4_copy1

0x78cf,	// (0x0001e537) mp4_rocker2_pane_ParamLimits

0x78cf,	// (0x0001e537) mp4_rocker2_pane

0x3dec,	// (0x0001aa54) mp4_rocker2_pane_g1

0x3de4,	// (0x0001aa4c) mp4_rocker2_pane_g2

0x7aab,	// (0x0001e713) mp4_rocker2_pane_g3

0x7ab3,	// (0x0001e71b) mp4_rocker2_pane_g4

0x7abb,	// (0x0001e723) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x00026553) mp4_rocker2_pane_g

0x0229,	// (0x00016e91) main_camera4_pane

0x0229,	// (0x00016e91) main_video4_pane

0xc3ad,	// (0x00023015) main_video_tele_dialer_pane_t1_ParamLimits

0xc3ad,	// (0x00023015) main_video_tele_dialer_pane_t1

0xc3bf,	// (0x00023027) main_video_tele_dialer_pane_t2_ParamLimits

0xc3bf,	// (0x00023027) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0002650d) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0002650d) main_video_tele_dialer_pane_t

0x7adb,	// (0x0001e743) cam4_autofocus_pane_ParamLimits

0x7adb,	// (0x0001e743) cam4_autofocus_pane

0x7af5,	// (0x0001e75d) cam4_image_uncrop_pane_ParamLimits

0x7af5,	// (0x0001e75d) cam4_image_uncrop_pane

0x7b0c,	// (0x0001e774) cam4_indicators_pane_ParamLimits

0x7b0c,	// (0x0001e774) cam4_indicators_pane

0x7b28,	// (0x0001e790) main_camera4_pane_g1_ParamLimits

0x7b28,	// (0x0001e790) main_camera4_pane_g1

0x7b34,	// (0x0001e79c) main_camera4_pane_g2_ParamLimits

0x7b34,	// (0x0001e79c) main_camera4_pane_g2

0x7b34,	// (0x0001e79c) main_camera4_pane_g3_ParamLimits

0x7b34,	// (0x0001e79c) main_camera4_pane_g3

0x7b40,	// (0x0001e7a8) main_camera4_pane_g4_ParamLimits

0x7b40,	// (0x0001e7a8) main_camera4_pane_g4

0x7b4c,	// (0x0001e7b4) main_camera4_pane_g5_ParamLimits

0x7b4c,	// (0x0001e7b4) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0002655e) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0002655e) main_camera4_pane_g

0x7b66,	// (0x0001e7ce) main_camera4_pane_t1_ParamLimits

0x7b66,	// (0x0001e7ce) main_camera4_pane_t1

0x7b8a,	// (0x0001e7f2) bg_tb_trans_pane_cp06

0x7ba0,	// (0x0001e808) cam4_indicators_pane_g1

0x7bb1,	// (0x0001e819) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x00026579) cam4_indicators_pane_g

0x7bcf,	// (0x0001e837) cam4_indicators_pane_t1

0x7bf9,	// (0x0001e861) main_video4_pane_g1_ParamLimits

0x7bf9,	// (0x0001e861) main_video4_pane_g1

0x7c05,	// (0x0001e86d) main_video4_pane_g2_ParamLimits

0x7c05,	// (0x0001e86d) main_video4_pane_g2

0x7c11,	// (0x0001e879) main_video4_pane_g3_ParamLimits

0x7c11,	// (0x0001e879) main_video4_pane_g3

0x7c1d,	// (0x0001e885) main_video4_pane_g4_ParamLimits

0x7c1d,	// (0x0001e885) main_video4_pane_g4

0x0004,

0xf918,	// (0x00026580) main_video4_pane_g_ParamLimits

0xf918,	// (0x00026580) main_video4_pane_g

0x7c3d,	// (0x0001e8a5) vid4_indicators_pane_ParamLimits

0x7c3d,	// (0x0001e8a5) vid4_indicators_pane

0x7c5b,	// (0x0001e8c3) video4_image_uncrop_cif_pane_ParamLimits

0x7c5b,	// (0x0001e8c3) video4_image_uncrop_cif_pane

0x7c6a,	// (0x0001e8d2) video4_image_uncrop_nhd_pane_ParamLimits

0x7c6a,	// (0x0001e8d2) video4_image_uncrop_nhd_pane

0x7af5,	// (0x0001e75d) video4_image_uncrop_vga_pane_ParamLimits

0x7af5,	// (0x0001e75d) video4_image_uncrop_vga_pane

0x7c77,	// (0x0001e8df) bg_tb_trans_pane_cp07

0x7c8f,	// (0x0001e8f7) vid4_indicators_pane_g1

0x7ca0,	// (0x0001e908) vid4_indicators_pane_g2

0x7cb1,	// (0x0001e919) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0002658b) vid4_indicators_pane_g

0x7cde,	// (0x0001e946) vid4_indicators_pane_t1

0xc598,	// (0x00023200) cam4_autofocus_pane_g1

0xc5a0,	// (0x00023208) cam4_autofocus_pane_g2

0xc5a8,	// (0x00023210) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x00026596) cam4_autofocus_pane_g

0xc5b0,	// (0x00023218) cam4_autofocus_pane_g3_copy1

0x3a49,	// (0x0001a6b1) video_down_pane_cp_t1

0x3a57,	// (0x0001a6bf) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00026512) video_down_pane_cp_t

0x39ee,	// (0x0001a656) popup_vitu2_window_ParamLimits

0x39ee,	// (0x0001a656) popup_vitu2_window

0x7cf7,	// (0x0001e95f) aid_size_cell2_itu2_ParamLimits

0x7cf7,	// (0x0001e95f) aid_size_cell2_itu2

0x7d19,	// (0x0001e981) aid_size_cell_itu2_ParamLimits

0x7d19,	// (0x0001e981) aid_size_cell_itu2

0x7d5d,	// (0x0001e9c5) bg_popup_window_pane_cp09_ParamLimits

0x7d5d,	// (0x0001e9c5) bg_popup_window_pane_cp09

0x7d6b,	// (0x0001e9d3) field_vitu2_entry_pane_ParamLimits

0x7d6b,	// (0x0001e9d3) field_vitu2_entry_pane

0x7d8b,	// (0x0001e9f3) grid_vitu2_function_pane_ParamLimits

0x7d8b,	// (0x0001e9f3) grid_vitu2_function_pane

0x7dcf,	// (0x0001ea37) grid_vitu2_itu_pane_ParamLimits

0x7dcf,	// (0x0001ea37) grid_vitu2_itu_pane

0x7e47,	// (0x0001eaaf) cell_vitu2_itu_pane_ParamLimits

0x7e47,	// (0x0001eaaf) cell_vitu2_itu_pane

0x7e5c,	// (0x0001eac4) cell_vitu2_function_pane_ParamLimits

0x7e5c,	// (0x0001eac4) cell_vitu2_function_pane

0x3e8b,	// (0x0001aaf3) bg_popup_call_pane_cp08_ParamLimits

0x3e8b,	// (0x0001aaf3) bg_popup_call_pane_cp08

0x3ea4,	// (0x0001ab0c) field_vitu2_entry_pane_g1

0x3eb0,	// (0x0001ab18) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0002659d) field_vitu2_entry_pane_g

0x3eca,	// (0x0001ab32) field_vitu2_entry_pane_t1_ParamLimits

0x3eca,	// (0x0001ab32) field_vitu2_entry_pane_t1

0x3ef9,	// (0x0001ab61) field_vitu2_entry_pane_t2_ParamLimits

0x3ef9,	// (0x0001ab61) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x000265a4) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x000265a4) field_vitu2_entry_pane_t

0x7e9b,	// (0x0001eb03) bg_button_pane_cp010_ParamLimits

0x7e9b,	// (0x0001eb03) bg_button_pane_cp010

0x7ea9,	// (0x0001eb11) cell_vitu2_itu_pane_g1

0x7ec7,	// (0x0001eb2f) cell_vitu2_itu_pane_t1_ParamLimits

0x7ec7,	// (0x0001eb2f) cell_vitu2_itu_pane_t1

0x7f19,	// (0x0001eb81) cell_vitu2_itu_pane_t2_ParamLimits

0x7f19,	// (0x0001eb81) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x000265ae) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x000265ae) cell_vitu2_itu_pane_t

0x7c77,	// (0x0001e8df) bg_button_pane_cp011

0x7fd4,	// (0x0001ec3c) cell_vitu2_function_pane_g1

0x0229,	// (0x00016e91) main_myfav_hc_pane

0x7a8c,	// (0x0001e6f4) popup_image3_note_pane_ParamLimits

0x7a8c,	// (0x0001e6f4) popup_image3_note_pane

0x7a9a,	// (0x0001e702) popup_image3_tool_bar_pane_ParamLimits

0x7a9a,	// (0x0001e702) popup_image3_tool_bar_pane

0x7f87,	// (0x0001ebef) cell_vitu2_itu_pane_t3_ParamLimits

0x7f87,	// (0x0001ebef) cell_vitu2_itu_pane_t3

0x0229,	// (0x00016e91) bg_popup_trans_pane

0x3f1e,	// (0x0001ab86) grid_image3_tool_bar_pane

0x3f28,	// (0x0001ab90) bg_popup_trans_pane_g1

0x0f76,	// (0x00017bde) bg_popup_trans_pane_g2

0x3f30,	// (0x0001ab98) bg_popup_trans_pane_g3

0x3f38,	// (0x0001aba0) bg_popup_trans_pane_g4

0x3f40,	// (0x0001aba8) bg_popup_trans_pane_g5

0x3f48,	// (0x0001abb0) bg_popup_trans_pane_g6

0x3f50,	// (0x0001abb8) bg_popup_trans_pane_g7

0x3f58,	// (0x0001abc0) bg_popup_trans_pane_g8

0x0f56,	// (0x00017bbe) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x000265b5) bg_popup_trans_pane_g

0x3f60,	// (0x0001abc8) cell_image3_tool_bar_pane_ParamLimits

0x3f60,	// (0x0001abc8) cell_image3_tool_bar_pane

0x3162,	// (0x00019dca) cell_image3_tool_bar_pane_g1

0x0229,	// (0x00016e91) bg_popup_trans_pane_cp1

0x3f74,	// (0x0001abdc) popup_image3_note_pane_t1

0x3f82,	// (0x0001abea) popup_image3_note_pane_t2

0x3f90,	// (0x0001abf8) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x000265c8) popup_image3_note_pane_t

0x3f9e,	// (0x0001ac06) popup_image3_note_pane_t3_copy1

0xc5b8,	// (0x00023220) bg_myfav_hc_instruction_pane_ParamLimits

0xc5b8,	// (0x00023220) bg_myfav_hc_instruction_pane

0xc5d0,	// (0x00023238) cell_myfav_contact_pane_ParamLimits

0xc5d0,	// (0x00023238) cell_myfav_contact_pane

0xc5ea,	// (0x00023252) cell_myfav_contact_pane_cp1_ParamLimits

0xc5ea,	// (0x00023252) cell_myfav_contact_pane_cp1

0xc602,	// (0x0002326a) cell_myfav_contact_pane_cp2_ParamLimits

0xc602,	// (0x0002326a) cell_myfav_contact_pane_cp2

0xc61a,	// (0x00023282) cell_myfav_contact_pane_cp3_ParamLimits

0xc61a,	// (0x00023282) cell_myfav_contact_pane_cp3

0xc631,	// (0x00023299) cell_myfav_contact_pane_cp4_ParamLimits

0xc631,	// (0x00023299) cell_myfav_contact_pane_cp4

0xc647,	// (0x000232af) cell_myfav_contact_pane_cp5_ParamLimits

0xc647,	// (0x000232af) cell_myfav_contact_pane_cp5

0xc65b,	// (0x000232c3) cell_myfav_contact_pane_cp6_ParamLimits

0xc65b,	// (0x000232c3) cell_myfav_contact_pane_cp6

0xc66f,	// (0x000232d7) cell_myfav_contact_pane_cp7_ParamLimits

0xc66f,	// (0x000232d7) cell_myfav_contact_pane_cp7

0x3fac,	// (0x0001ac14) listscroll_gen_pane_cp05

0xc687,	// (0x000232ef) main_myfav_hc_pane_g1_ParamLimits

0xc687,	// (0x000232ef) main_myfav_hc_pane_g1

0xc69d,	// (0x00023305) main_myfav_hc_pane_g2_ParamLimits

0xc69d,	// (0x00023305) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x000265cf) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x000265cf) main_myfav_hc_pane_g

0xc6cb,	// (0x00023333) main_myfav_hc_pane_t1_ParamLimits

0xc6cb,	// (0x00023333) main_myfav_hc_pane_t1

0x3fb5,	// (0x0001ac1d) main_myfav_hc_pane_t2_ParamLimits

0x3fb5,	// (0x0001ac1d) main_myfav_hc_pane_t2

0x3fc7,	// (0x0001ac2f) main_myfav_hc_pane_t3_ParamLimits

0x3fc7,	// (0x0001ac2f) main_myfav_hc_pane_t3

0xc6e2,	// (0x0002334a) main_myfav_hc_pane_t4_ParamLimits

0xc6e2,	// (0x0002334a) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x000265d6) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x000265d6) main_myfav_hc_pane_t

0x3162,	// (0x00019dca) bg_myfav_hc_instruction_pane_g1

0x3fd9,	// (0x0001ac41) cell_myfav_contact_pane_g1_ParamLimits

0x3fd9,	// (0x0001ac41) cell_myfav_contact_pane_g1

0x3fd9,	// (0x0001ac41) cell_myfav_contact_pane_g2_ParamLimits

0x3fd9,	// (0x0001ac41) cell_myfav_contact_pane_g2

0x3fe5,	// (0x0001ac4d) cell_myfav_contact_pane_g3_ParamLimits

0x3fe5,	// (0x0001ac4d) cell_myfav_contact_pane_g3

0x343f,	// (0x0001a0a7) cell_myfav_contact_pane_g4_ParamLimits

0x343f,	// (0x0001a0a7) cell_myfav_contact_pane_g4

0x3ff2,	// (0x0001ac5a) cell_myfav_contact_pane_g5_ParamLimits

0x3ff2,	// (0x0001ac5a) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x000265e1) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x000265e1) cell_myfav_contact_pane_g

0xc6b3,	// (0x0002331b) main_myfav_hc_pane_g3_ParamLimits

0xc6b3,	// (0x0002331b) main_myfav_hc_pane_g3

0x842c,	// (0x0001f094) popup_adpt_find_window

0xc70c,	// (0x00023374) afind_page_pane_ParamLimits

0xc70c,	// (0x00023374) afind_page_pane

0xc719,	// (0x00023381) aid_size_cell_afind_ParamLimits

0xc719,	// (0x00023381) aid_size_cell_afind

0xc733,	// (0x0002339b) bg_popup_sub_pane_cp09_ParamLimits

0xc733,	// (0x0002339b) bg_popup_sub_pane_cp09

0xc740,	// (0x000233a8) find_pane_cp01_ParamLimits

0xc740,	// (0x000233a8) find_pane_cp01

0x3ffe,	// (0x0001ac66) grid_afind_control_pane_ParamLimits

0x3ffe,	// (0x0001ac66) grid_afind_control_pane

0xc74d,	// (0x000233b5) grid_afind_pane_ParamLimits

0xc74d,	// (0x000233b5) grid_afind_pane

0xc769,	// (0x000233d1) cell_afind_pane_ParamLimits

0xc769,	// (0x000233d1) cell_afind_pane

0x3162,	// (0x00019dca) afind_page_pane_g1

0xc7b1,	// (0x00023419) afind_page_pane_g2

0xc7ba,	// (0x00023422) afind_page_pane_g3

0x0002,

0xf984,	// (0x000265ec) afind_page_pane_g

0xc7c3,	// (0x0002342b) afind_page_pane_t1

0x4012,	// (0x0001ac7a) cell_afind_grid_control_pane_ParamLimits

0x4012,	// (0x0001ac7a) cell_afind_grid_control_pane

0x3cd3,	// (0x0001a93b) bg_button_pane_cp69_ParamLimits

0x3cd3,	// (0x0001a93b) bg_button_pane_cp69

0xc7e3,	// (0x0002344b) cell_afind_pane_g1_ParamLimits

0xc7e3,	// (0x0002344b) cell_afind_pane_g1

0xc7f0,	// (0x00023458) cell_afind_pane_t1_ParamLimits

0xc7f0,	// (0x00023458) cell_afind_pane_t1

0x0ccf,	// (0x00017937) bg_button_pane_cp72

0x4021,	// (0x0001ac89) cell_afind_grid_control_pane_g1

0xaa6e,	// (0x000216d6) aid_image_placing_area_ParamLimits

0xaa6e,	// (0x000216d6) aid_image_placing_area

0x373e,	// (0x0001a3a6) field_vitu_entry_pane_g1_ParamLimits

0x373e,	// (0x0001a3a6) field_vitu_entry_pane_g1

0x374a,	// (0x0001a3b2) field_vitu_entry_pane_g2_ParamLimits

0x374a,	// (0x0001a3b2) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0002649d) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0002649d) field_vitu_entry_pane_g

0xc25d,	// (0x00022ec5) cell_vitu_itu_pane_g1_ParamLimits

0xc29f,	// (0x00022f07) cell_vitu_itu_pane_t3_ParamLimits

0xc29f,	// (0x00022f07) cell_vitu_itu_pane_t3

0x3c83,	// (0x0001a8eb) mp4_progress_pane_t1_ParamLimits

0x3c9c,	// (0x0001a904) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00026532) mp4_progress_pane_t_ParamLimits

0x3cb5,	// (0x0001a91d) mup_progress_pane_cp04_ParamLimits

0xc6f6,	// (0x0002335e) main_myfav_hc_pane_t5_ParamLimits

0xc6f6,	// (0x0002335e) main_myfav_hc_pane_t5

0x024f,	// (0x00016eb7) aid_zoom_text_primary

0x842c,	// (0x0001f094) popup_adpt_find_window_ParamLimits

0x0299,	// (0x00016f01) main_cam_set_pane

0x7b1a,	// (0x0001e782) cam4_zoom_pane_ParamLimits

0x7b1a,	// (0x0001e782) cam4_zoom_pane

0xc802,	// (0x0002346a) main_cam_set_pane_g1_ParamLimits

0xc802,	// (0x0002346a) main_cam_set_pane_g1

0xc810,	// (0x00023478) main_cam_set_pane_g2_ParamLimits

0xc810,	// (0x00023478) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x000265f3) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x000265f3) main_cam_set_pane_g

0xc81c,	// (0x00023484) main_cam_set_pane_t1_ParamLimits

0xc81c,	// (0x00023484) main_cam_set_pane_t1

0xc838,	// (0x000234a0) main_cset_listscroll_pane_ParamLimits

0xc838,	// (0x000234a0) main_cset_listscroll_pane

0xc863,	// (0x000234cb) main_cset_slider_pane_ParamLimits

0xc863,	// (0x000234cb) main_cset_slider_pane

0x4032,	// (0x0001ac9a) main_cset_list_pane_ParamLimits

0x4032,	// (0x0001ac9a) main_cset_list_pane

0x4042,	// (0x0001acaa) scroll_pane_cp028

0xc882,	// (0x000234ea) aid_area_touch_slider

0xc89e,	// (0x00023506) cset_slider_pane

0xc8c8,	// (0x00023530) main_cset_slider_pane_g1

0xc8dd,	// (0x00023545) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x000265f8) main_cset_slider_pane_g

0x407b,	// (0x0001ace3) main_cset_slider_pane_t1

0xc99f,	// (0x00023607) main_cset_slider_pane_t2

0xc9b9,	// (0x00023621) main_cset_slider_pane_t3

0xc9d3,	// (0x0002363b) main_cset_slider_pane_t4

0xc9ed,	// (0x00023655) main_cset_slider_pane_t5

0xca0b,	// (0x00023673) main_cset_slider_pane_t6

0xca22,	// (0x0002368a) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0002661d) main_cset_slider_pane_t

0xcb2e,	// (0x00023796) cset_list_set_pane_ParamLimits

0xcb2e,	// (0x00023796) cset_list_set_pane

0xcb44,	// (0x000237ac) aid_position_infowindow_above

0xcb4c,	// (0x000237b4) aid_position_infowindow_below

0x411b,	// (0x0001ad83) cset_list_set_pane_g1_ParamLimits

0x411b,	// (0x0001ad83) cset_list_set_pane_g1

0x4127,	// (0x0001ad8f) cset_list_set_pane_g3_ParamLimits

0x4127,	// (0x0001ad8f) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0002663c) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0002663c) cset_list_set_pane_g

0x4136,	// (0x0001ad9e) cset_list_set_pane_t1_ParamLimits

0x4136,	// (0x0001ad9e) cset_list_set_pane_t1

0x0299,	// (0x00016f01) list_highlight_pane_cp021_ParamLimits

0x0299,	// (0x00016f01) list_highlight_pane_cp021

0x18f5,	// (0x0001855d) cset_slider_pane_g1

0x1907,	// (0x0001856f) cset_slider_pane_g2

0x18fe,	// (0x00018566) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x00026641) cset_slider_pane_g

0x7fe8,	// (0x0001ec50) aid_area_touch_cam4_zoom

0x7ff0,	// (0x0001ec58) cam4_zoom_cont_pane

0x7ff8,	// (0x0001ec60) cam4_zoom_pane_g1

0x8000,	// (0x0001ec68) cam4_zoom_pane_g2

0x8008,	// (0x0001ec70) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x00026648) cam4_zoom_pane_g

0x8010,	// (0x0001ec78) cam4_zoom_cont_pane_g1

0x8019,	// (0x0001ec81) cam4_zoom_cont_pane_g2

0x8022,	// (0x0001ec8a) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x0002664f) cam4_zoom_cont_pane_g

0xc4d0,	// (0x00023138) call4_image_pane_ParamLimits

0xc4d0,	// (0x00023138) call4_image_pane

0x3d11,	// (0x0001a979) call4_windows_conf_pane_ParamLimits

0x3d52,	// (0x0001a9ba) popup_call4_audio_in_window_ParamLimits

0x3d52,	// (0x0001a9ba) popup_call4_audio_in_window

0x0229,	// (0x00016e91) bg_popup_call2_act_pane_cp02

0x3dc8,	// (0x0001aa30) call4_list_conf_pane

0x3162,	// (0x00019dca) call4_image_pane_g1

0x3162,	// (0x00019dca) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x00026363) call4_image_pane_g

0x4186,	// (0x0001adee) list_single_graphic_popup_conf4_pane_ParamLimits

0x4186,	// (0x0001adee) list_single_graphic_popup_conf4_pane

0x0229,	// (0x00016e91) list_highlight_pane_cp022

0x4199,	// (0x0001ae01) list_single_graphic_popup_conf4_pane_g1

0x15b4,	// (0x0001821c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x00026656) list_single_graphic_popup_conf4_pane_g

0x41a1,	// (0x0001ae09) list_single_graphic_popup_conf4_pane_t1

0x90c7,	// (0x0001fd2f) popup_vtel_slider_window_ParamLimits

0x90c7,	// (0x0001fd2f) popup_vtel_slider_window

0x3cc1,	// (0x0001a929) dialer2_ne_pane_t2_ParamLimits

0x3cc1,	// (0x0001a929) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x00026537) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x00026537) dialer2_ne_pane_t

0x0299,	// (0x00016f01) bg_popup_sub_pane_cp010_ParamLimits

0x0299,	// (0x00016f01) bg_popup_sub_pane_cp010

0xcb54,	// (0x000237bc) popup_vtel_slider_window_g1_ParamLimits

0xcb54,	// (0x000237bc) popup_vtel_slider_window_g1

0xcb60,	// (0x000237c8) popup_vtel_slider_window_g2_ParamLimits

0xcb60,	// (0x000237c8) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x0002665b) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x0002665b) popup_vtel_slider_window_g

0xcba8,	// (0x00023810) vtel_slider_pane_ParamLimits

0xcba8,	// (0x00023810) vtel_slider_pane

0xcbb7,	// (0x0002381f) vtel_slider_pane_g1_ParamLimits

0xcbb7,	// (0x0002381f) vtel_slider_pane_g1

0xcbc4,	// (0x0002382c) vtel_slider_pane_g2_ParamLimits

0xcbc4,	// (0x0002382c) vtel_slider_pane_g2

0xcbd1,	// (0x00023839) vtel_slider_pane_g3_ParamLimits

0xcbd1,	// (0x00023839) vtel_slider_pane_g3

0xcbb7,	// (0x0002381f) vtel_slider_pane_g4_ParamLimits

0xcbb7,	// (0x0002381f) vtel_slider_pane_g4

0xcbde,	// (0x00023846) vtel_slider_pane_g5_ParamLimits

0xcbde,	// (0x00023846) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x00026664) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x00026664) vtel_slider_pane_g

0x0229,	// (0x00016e91) main_gallery2_pane

0x7d3f,	// (0x0001e9a7) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d3f,	// (0x0001e9a7) aid_size_row_itut2_dropdow_list

0x7dad,	// (0x0001ea15) grid_vitu2_function_top_pane_ParamLimits

0x7dad,	// (0x0001ea15) grid_vitu2_function_top_pane

0x7e03,	// (0x0001ea6b) popup_vitu2_dropdown_list_window_ParamLimits

0x7e03,	// (0x0001ea6b) popup_vitu2_dropdown_list_window

0x7e23,	// (0x0001ea8b) popup_vitu2_match_list_window

0x802b,	// (0x0001ec93) cell_vitu2_function_top_pane_ParamLimits

0x802b,	// (0x0001ec93) cell_vitu2_function_top_pane

0x804b,	// (0x0001ecb3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x804b,	// (0x0001ecb3) cell_vitu2_function_top_pane_cp01

0x8069,	// (0x0001ecd1) cell_vitu2_function_top_wide_pane_ParamLimits

0x8069,	// (0x0001ecd1) cell_vitu2_function_top_wide_pane

0x7c77,	// (0x0001e8df) bg_button_pane_cp012

0x8087,	// (0x0001ecef) cell_vitu2_function_top_pane_g1

0x8096,	// (0x0001ecfe) bg_button_pane_cp013_ParamLimits

0x8096,	// (0x0001ecfe) bg_button_pane_cp013

0xcbeb,	// (0x00023853) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbeb,	// (0x00023853) cell_vitu2_function_top_wide_pane_g1

0x80b2,	// (0x0001ed1a) bg_popup_sub_pane_cp20

0x80c0,	// (0x0001ed28) list_vitu2_match_list_pane

0x3f28,	// (0x0001ab90) bg_popup_sub_pane_cp20_g1

0x3f30,	// (0x0001ab98) bg_popup_sub_pane_cp20_g2

0x0f76,	// (0x00017bde) bg_popup_sub_pane_cp20_g3

0x3f38,	// (0x0001aba0) bg_popup_sub_pane_cp20_g4

0x0f56,	// (0x00017bbe) bg_popup_sub_pane_cp20_g5

0x41e1,	// (0x0001ae49) bg_popup_sub_pane_cp20_g6

0x3f48,	// (0x0001abb0) bg_popup_sub_pane_cp20_g7

0x3f50,	// (0x0001abb8) bg_popup_sub_pane_cp20_g8

0x3f58,	// (0x0001abc0) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x0002666f) bg_popup_sub_pane_cp20_g

0x80d8,	// (0x0001ed40) list_vitu2_match_list_item_pane_ParamLimits

0x80d8,	// (0x0001ed40) list_vitu2_match_list_item_pane

0x80ea,	// (0x0001ed52) list_vitu2_match_list_item_pane_t1

0x6f18,	// (0x0001db80) bg_popup_sub_pane_cp21

0x80f8,	// (0x0001ed60) grid_vitu2_dropdown_list_pane

0x8100,	// (0x0001ed68) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8100,	// (0x0001ed68) cell_vitu2_dropdown_list_char_pane

0x8121,	// (0x0001ed89) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8121,	// (0x0001ed89) cell_vitu2_dropdown_list_ctrl_pane

0x4233,	// (0x0001ae9b) cell_vitu2_dropdown_list_char_pane_g1

0x422a,	// (0x0001ae92) cell_vitu2_dropdown_list_char_pane_g2

0x4221,	// (0x0001ae89) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x0002668c) cell_vitu2_dropdown_list_char_pane_g

0x814d,	// (0x0001edb5) cell_vitu2_dropdown_list_char_pane_t1

0xcc32,	// (0x0002389a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc32,	// (0x0002389a) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc42,	// (0x000238aa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc42,	// (0x000238aa) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc53,	// (0x000238bb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc53,	// (0x000238bb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x815b,	// (0x0001edc3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x815b,	// (0x0001edc3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7b8a,	// (0x0001e7f2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7b8a,	// (0x0001e7f2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x00026693) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x00026693) cell_vitu2_dropdown_list_ctrl_pane_g

0xcc63,	// (0x000238cb) aid_size_cell_gallery2_ParamLimits

0xcc63,	// (0x000238cb) aid_size_cell_gallery2

0xcc71,	// (0x000238d9) grid_gallery2_pane_ParamLimits

0xcc71,	// (0x000238d9) grid_gallery2_pane

0xcc80,	// (0x000238e8) scroll_pane_cp029_ParamLimits

0xcc80,	// (0x000238e8) scroll_pane_cp029

0xcc8c,	// (0x000238f4) cell_gallery2_pane_ParamLimits

0xcc8c,	// (0x000238f4) cell_gallery2_pane

0x423c,	// (0x0001aea4) cell_gallery2_pane_g2

0x513b,	// (0x0001bda3) cell_gallery2_pane_g3

0x4246,	// (0x0001aeae) cell_gallery2_pane_g4

0x424e,	// (0x0001aeb6) cell_gallery2_pane_g5

0x179f,	// (0x00018407) grid_highlight_pane_cp10

0x7e23,	// (0x0001ea8b) popup_vitu2_match_list_window_ParamLimits

0x7e37,	// (0x0001ea9f) popup_vitu2_query_window_ParamLimits

0x7e37,	// (0x0001ea9f) popup_vitu2_query_window

0x6f18,	// (0x0001db80) bg_vitu2_candi_button_pane

0x4233,	// (0x0001ae9b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x422a,	// (0x0001ae92) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4221,	// (0x0001ae89) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xccba,	// (0x00023922) bg_button_pane_cp015

0xcccc,	// (0x00023934) bg_button_pane_cp016

0xccdf,	// (0x00023947) bg_button_pane_cp017

0x2c5c,	// (0x000198c4) bg_popup_sub_pane_cp22

0x4256,	// (0x0001aebe) popup_vitu2_query_window_g1

0xcd24,	// (0x0002398c) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x0002669e) popup_vitu2_query_window_g

0xcd41,	// (0x000239a9) popup_vitu2_query_window_t1_ParamLimits

0xcd41,	// (0x000239a9) popup_vitu2_query_window_t1

0xcd74,	// (0x000239dc) popup_vitu2_query_window_t2_ParamLimits

0xcd74,	// (0x000239dc) popup_vitu2_query_window_t2

0xcd86,	// (0x000239ee) popup_vitu2_query_window_t3_ParamLimits

0xcd86,	// (0x000239ee) popup_vitu2_query_window_t3

0xcdae,	// (0x00023a16) popup_vitu2_query_window_t4_ParamLimits

0xcdae,	// (0x00023a16) popup_vitu2_query_window_t4

0xcdcf,	// (0x00023a37) popup_vitu2_query_window_t5_ParamLimits

0xcdcf,	// (0x00023a37) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x000266a5) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x000266a5) popup_vitu2_query_window_t

0x402a,	// (0x0001ac92) main_cset_text_pane

0xc882,	// (0x000234ea) aid_area_touch_slider_ParamLimits

0xc89e,	// (0x00023506) cset_slider_pane_ParamLimits

0xc8c8,	// (0x00023530) main_cset_slider_pane_g1_ParamLimits

0xc8dd,	// (0x00023545) main_cset_slider_pane_g2_ParamLimits

0x404b,	// (0x0001acb3) main_cset_slider_pane_g3_ParamLimits

0x404b,	// (0x0001acb3) main_cset_slider_pane_g3

0xc8f2,	// (0x0002355a) main_cset_slider_pane_g4_ParamLimits

0xc8f2,	// (0x0002355a) main_cset_slider_pane_g4

0xc901,	// (0x00023569) main_cset_slider_pane_g5_ParamLimits

0xc901,	// (0x00023569) main_cset_slider_pane_g5

0xc90f,	// (0x00023577) main_cset_slider_pane_g6_ParamLimits

0xc90f,	// (0x00023577) main_cset_slider_pane_g6

0xf990,	// (0x000265f8) main_cset_slider_pane_g_ParamLimits

0x407b,	// (0x0001ace3) main_cset_slider_pane_t1_ParamLimits

0xc99f,	// (0x00023607) main_cset_slider_pane_t2_ParamLimits

0xc9b9,	// (0x00023621) main_cset_slider_pane_t3_ParamLimits

0xc9d3,	// (0x0002363b) main_cset_slider_pane_t4_ParamLimits

0xc9ed,	// (0x00023655) main_cset_slider_pane_t5_ParamLimits

0xca0b,	// (0x00023673) main_cset_slider_pane_t6_ParamLimits

0xca22,	// (0x0002368a) main_cset_slider_pane_t7_ParamLimits

0xca50,	// (0x000236b8) main_cset_slider_pane_t8_ParamLimits

0xca50,	// (0x000236b8) main_cset_slider_pane_t8

0xca78,	// (0x000236e0) main_cset_slider_pane_t9_ParamLimits

0xca78,	// (0x000236e0) main_cset_slider_pane_t9

0xcaa0,	// (0x00023708) main_cset_slider_pane_t10_ParamLimits

0xcaa0,	// (0x00023708) main_cset_slider_pane_t10

0xcac8,	// (0x00023730) main_cset_slider_pane_t11_ParamLimits

0xcac8,	// (0x00023730) main_cset_slider_pane_t11

0xcaf2,	// (0x0002375a) main_cset_slider_pane_t12_ParamLimits

0xcaf2,	// (0x0002375a) main_cset_slider_pane_t12

0xcb0f,	// (0x00023777) main_cset_slider_pane_t13_ParamLimits

0xcb0f,	// (0x00023777) main_cset_slider_pane_t13

0xf9b5,	// (0x0002661d) main_cset_slider_pane_t_ParamLimits

0x0229,	// (0x00016e91) bg_popup_sub_pane_cp011

0x4262,	// (0x0001aeca) main_cset_text_pane_g1

0x426a,	// (0x0001aed2) main_cset_text_pane_t1

0x4278,	// (0x0001aee0) main_cset_text_pane_t2

0x4286,	// (0x0001aeee) main_cset_text_pane_t3

0x4294,	// (0x0001aefc) main_cset_text_pane_t4

0x42a2,	// (0x0001af0a) main_cset_text_pane_t5

0x42b0,	// (0x0001af18) main_cset_text_pane_t6

0x42be,	// (0x0001af26) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x000266b4) main_cset_text_pane_t

0x0229,	// (0x00016e91) main_cam4_burst_pane

0x0229,	// (0x00016e91) main_cam5_pane

0xc7d1,	// (0x00023439) bg_button_pane_cp019

0xc7da,	// (0x00023442) bg_button_pane_cp020

0x4057,	// (0x0001acbf) main_cset_slider_pane_g7_ParamLimits

0x4057,	// (0x0001acbf) main_cset_slider_pane_g7

0x4063,	// (0x0001accb) main_cset_slider_pane_g8_ParamLimits

0x4063,	// (0x0001accb) main_cset_slider_pane_g8

0xc923,	// (0x0002358b) main_cset_slider_pane_g9_ParamLimits

0xc923,	// (0x0002358b) main_cset_slider_pane_g9

0xc92f,	// (0x00023597) main_cset_slider_pane_g10_ParamLimits

0xc92f,	// (0x00023597) main_cset_slider_pane_g10

0xc93b,	// (0x000235a3) main_cset_slider_pane_g11_ParamLimits

0xc93b,	// (0x000235a3) main_cset_slider_pane_g11

0xc947,	// (0x000235af) main_cset_slider_pane_g12_ParamLimits

0xc947,	// (0x000235af) main_cset_slider_pane_g12

0xc953,	// (0x000235bb) main_cset_slider_pane_g13_ParamLimits

0xc953,	// (0x000235bb) main_cset_slider_pane_g13

0xc95f,	// (0x000235c7) main_cset_slider_pane_g14_ParamLimits

0xc95f,	// (0x000235c7) main_cset_slider_pane_g14

0xc96b,	// (0x000235d3) main_cset_slider_pane_g15_ParamLimits

0xc96b,	// (0x000235d3) main_cset_slider_pane_g15

0x40a9,	// (0x0001ad11) main_cset_slider_pane_t14_ParamLimits

0x40a9,	// (0x0001ad11) main_cset_slider_pane_t14

0x40e2,	// (0x0001ad4a) main_cset_slider_pane_t15_ParamLimits

0x40e2,	// (0x0001ad4a) main_cset_slider_pane_t15

0xce46,	// (0x00023aae) aid_cam4_burst_size_cell_ParamLimits

0xce46,	// (0x00023aae) aid_cam4_burst_size_cell

0xce62,	// (0x00023aca) grid_cam4_burst_pane_ParamLimits

0xce62,	// (0x00023aca) grid_cam4_burst_pane

0xce92,	// (0x00023afa) linegrid_cam4_burst_pane_ParamLimits

0xce92,	// (0x00023afa) linegrid_cam4_burst_pane

0xceb2,	// (0x00023b1a) scroll_pane_cp30_ParamLimits

0xceb2,	// (0x00023b1a) scroll_pane_cp30

0xcebe,	// (0x00023b26) cell_cam4_burst_pane_ParamLimits

0xcebe,	// (0x00023b26) cell_cam4_burst_pane

0x42d8,	// (0x0001af40) linegrid_cam4_burst_pane_g1_ParamLimits

0x42d8,	// (0x0001af40) linegrid_cam4_burst_pane_g1

0xcefa,	// (0x00023b62) linegrid_cam4_burst_pane_g2_ParamLimits

0xcefa,	// (0x00023b62) linegrid_cam4_burst_pane_g2

0x42e5,	// (0x0001af4d) linegrid_cam4_burst_pane_g3_ParamLimits

0x42e5,	// (0x0001af4d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x000266c3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x000266c3) linegrid_cam4_burst_pane_g

0xcf0b,	// (0x00023b73) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcf0b,	// (0x00023b73) linegrid_cam4_burst_pane_g3_copy1

0x42f2,	// (0x0001af5a) linegrid_cam4_burst_pane_g4_ParamLimits

0x42f2,	// (0x0001af5a) linegrid_cam4_burst_pane_g4

0xcf25,	// (0x00023b8d) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf25,	// (0x00023b8d) linegrid_cam4_burst_pane_g5

0xcf36,	// (0x00023b9e) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf36,	// (0x00023b9e) linegrid_cam4_burst_pane_g6

0x42ff,	// (0x0001af67) linegrid_cam4_burst_pane_g7_ParamLimits

0x42ff,	// (0x0001af67) linegrid_cam4_burst_pane_g7

0xcf47,	// (0x00023baf) cell_cam4_burst_pane_g1

0x4318,	// (0x0001af80) main_cam5_pane_t1_ParamLimits

0x4318,	// (0x0001af80) main_cam5_pane_t1

0x432a,	// (0x0001af92) main_cam5_pane_t2_ParamLimits

0x432a,	// (0x0001af92) main_cam5_pane_t2

0x433c,	// (0x0001afa4) main_cam5_pane_t3_ParamLimits

0x433c,	// (0x0001afa4) main_cam5_pane_t3

0x434e,	// (0x0001afb6) main_cam5_pane_t4_ParamLimits

0x434e,	// (0x0001afb6) main_cam5_pane_t4

0x4366,	// (0x0001afce) main_cam5_pane_t5_ParamLimits

0x4366,	// (0x0001afce) main_cam5_pane_t5

0x437a,	// (0x0001afe2) main_cam5_pane_t6_ParamLimits

0x437a,	// (0x0001afe2) main_cam5_pane_t6

0x438e,	// (0x0001aff6) main_cam5_pane_t7_ParamLimits

0x438e,	// (0x0001aff6) main_cam5_pane_t7

0x43a0,	// (0x0001b008) main_cam5_pane_t8_ParamLimits

0x43a0,	// (0x0001b008) main_cam5_pane_t8

0x43bc,	// (0x0001b024) main_cam5_pane_t9_ParamLimits

0x43bc,	// (0x0001b024) main_cam5_pane_t9

0x43ce,	// (0x0001b036) main_cam5_pane_t10_ParamLimits

0x43ce,	// (0x0001b036) main_cam5_pane_t10

0x43e0,	// (0x0001b048) main_cam5_pane_t11_ParamLimits

0x43e0,	// (0x0001b048) main_cam5_pane_t11

0x43f2,	// (0x0001b05a) main_cam5_pane_t12_ParamLimits

0x43f2,	// (0x0001b05a) main_cam5_pane_t12

0x4407,	// (0x0001b06f) main_cam5_pane_t13_ParamLimits

0x4407,	// (0x0001b06f) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x000266cf) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x000266cf) main_cam5_pane_t

0x84d8,	// (0x0001f140) popup_scut_keymap_window_ParamLimits

0x84d8,	// (0x0001f140) popup_scut_keymap_window

0xcf5a,	// (0x00023bc2) aid_size_cell_brow_shortcut

0x179f,	// (0x00018407) bg_popup_window_pane_cp010

0xcf66,	// (0x00023bce) grid_scut_pane

0xcf72,	// (0x00023bda) cell_scut_pane_ParamLimits

0xcf72,	// (0x00023bda) cell_scut_pane

0xcf89,	// (0x00023bf1) cell_scut_pane_g1

0x4424,	// (0x0001b08c) cell_scut_pane_t1

0x4433,	// (0x0001b09b) cell_scut_pane_t2

0xcf92,	// (0x00023bfa) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x000266ea) cell_scut_pane_t

0xb94d,	// (0x000225b5) main_mup3_pane_g8_ParamLimits

0xb94d,	// (0x000225b5) main_mup3_pane_g8

0x7d4d,	// (0x0001e9b5) area_vitu2_query_pane_ParamLimits

0x7d4d,	// (0x0001e9b5) area_vitu2_query_pane

0xccf2,	// (0x0002395a) input_focus_pane_cp08

0x4442,	// (0x0001b0aa) area_vitu2_query_pane_g1

0xcfa0,	// (0x00023c08) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x000266f1) area_vitu2_query_pane_g

0xcfb1,	// (0x00023c19) area_vitu2_query_pane_t1_ParamLimits

0xcfb1,	// (0x00023c19) area_vitu2_query_pane_t1

0xcfc5,	// (0x00023c2d) area_vitu2_query_pane_t2_ParamLimits

0xcfc5,	// (0x00023c2d) area_vitu2_query_pane_t2

0xcfd9,	// (0x00023c41) area_vitu2_query_pane_t3_ParamLimits

0xcfd9,	// (0x00023c41) area_vitu2_query_pane_t3

0x444e,	// (0x0001b0b6) area_vitu2_query_pane_t4_ParamLimits

0x444e,	// (0x0001b0b6) area_vitu2_query_pane_t4

0x4476,	// (0x0001b0de) area_vitu2_query_pane_t5_ParamLimits

0x4476,	// (0x0001b0de) area_vitu2_query_pane_t5

0x449e,	// (0x0001b106) area_vitu2_query_pane_t6_ParamLimits

0x449e,	// (0x0001b106) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x000266f6) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x000266f6) area_vitu2_query_pane_t

0xd001,	// (0x00023c69) bg_button_pane_cp018

0xd00f,	// (0x00023c77) bg_button_pane_cp021

0xd01b,	// (0x00023c83) bg_button_pane_cp022

0xd02c,	// (0x00023c94) input_focus_pane_cp09

0xa16c,	// (0x00020dd4) aid_size_touch_mv_arrow_left

0xa195,	// (0x00020dfd) aid_size_touch_mv_arrow_right

0xc983,	// (0x000235eb) main_cset_slider_pane_g16_ParamLimits

0xc983,	// (0x000235eb) main_cset_slider_pane_g16

0xc991,	// (0x000235f9) main_cset_slider_pane_g17_ParamLimits

0xc991,	// (0x000235f9) main_cset_slider_pane_g17

0xcf47,	// (0x00023baf) cell_cam4_burst_pane_g1_ParamLimits

0x0229,	// (0x00016e91) compa_mode_pane

0xcb6c,	// (0x000237d4) popup_vtel_slider_window_g3_ParamLimits

0xcb6c,	// (0x000237d4) popup_vtel_slider_window_g3

0xcb80,	// (0x000237e8) popup_vtel_slider_window_g4_ParamLimits

0xcb80,	// (0x000237e8) popup_vtel_slider_window_g4

0xcb94,	// (0x000237fc) popup_vtel_slider_window_t1_ParamLimits

0xcb94,	// (0x000237fc) popup_vtel_slider_window_t1

0x0229,	// (0x00016e91) main_cl_pane

0x2c84,	// (0x000198ec) popup_imed_adjust2_window_ParamLimits

0x2c5c,	// (0x000198c4) bg_tb_trans_pane_cp05_ParamLimits

0x3673,	// (0x0001a2db) popup_imed_adjust2_window_g1_ParamLimits

0x3682,	// (0x0001a2ea) popup_imed_adjust2_window_g2_ParamLimits

0x3682,	// (0x0001a2ea) popup_imed_adjust2_window_g2

0x368e,	// (0x0001a2f6) popup_imed_adjust2_window_g3_ParamLimits

0x368e,	// (0x0001a2f6) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x00026461) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x00026461) popup_imed_adjust2_window_g

0x369a,	// (0x0001a302) popup_imed_adjust2_window_t1_ParamLimits

0x36b2,	// (0x0001a31a) slider_imed_adjust_pane_ParamLimits

0x36c6,	// (0x0001a32e) slider_imed_adjust_pane_g1_ParamLimits

0x36d6,	// (0x0001a33e) slider_imed_adjust_pane_g2_ParamLimits

0x36e6,	// (0x0001a34e) slider_imed_adjust_pane_g3_ParamLimits

0x36f7,	// (0x0001a35f) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00026468) slider_imed_adjust_pane_g_ParamLimits

0x7ac3,	// (0x0001e72b) aid_touch_area_cam4_ParamLimits

0x7ac3,	// (0x0001e72b) aid_touch_area_cam4

0x7ad3,	// (0x0001e73b) battery_pane_cp01

0x7b5a,	// (0x0001e7c2) main_camera4_pane_g6_ParamLimits

0x7b5a,	// (0x0001e7c2) main_camera4_pane_g6

0x7b78,	// (0x0001e7e0) main_camera4_pane_t2_ParamLimits

0x7b78,	// (0x0001e7e0) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0002656b) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0002656b) main_camera4_pane_t

0x7be9,	// (0x0001e851) aid_touch_area_vid4_ParamLimits

0x7be9,	// (0x0001e851) aid_touch_area_vid4

0x7c29,	// (0x0001e891) main_video4_pane_g5_ParamLimits

0x7c29,	// (0x0001e891) main_video4_pane_g5

0x7c4b,	// (0x0001e8b3) vid4_progress_pane_ParamLimits

0x7c4b,	// (0x0001e8b3) vid4_progress_pane

0x406f,	// (0x0001acd7) main_cset_slider_pane_g18_ParamLimits

0x406f,	// (0x0001acd7) main_cset_slider_pane_g18

0x430c,	// (0x0001af74) cell_cam4_burst_pane_g2_ParamLimits

0x430c,	// (0x0001af74) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x000266ca) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x000266ca) cell_cam4_burst_pane_g

0xd03d,	// (0x00023ca5) bg_cl_pane_ParamLimits

0xd03d,	// (0x00023ca5) bg_cl_pane

0xd049,	// (0x00023cb1) cl_header_pane_ParamLimits

0xd049,	// (0x00023cb1) cl_header_pane

0xd055,	// (0x00023cbd) cl_listscroll_pane_ParamLimits

0xd055,	// (0x00023cbd) cl_listscroll_pane

0x44ea,	// (0x0001b152) bg_cl_pane_g1

0x44f2,	// (0x0001b15a) bg_cl_pane_g2

0x44fa,	// (0x0001b162) bg_cl_pane_g3

0x4502,	// (0x0001b16a) bg_cl_pane_g4

0x450a,	// (0x0001b172) bg_cl_pane_g5

0x4512,	// (0x0001b17a) bg_cl_pane_g6

0x451a,	// (0x0001b182) bg_cl_pane_g7

0x4522,	// (0x0001b18a) bg_cl_pane_g8

0x452a,	// (0x0001b192) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x00026705) bg_cl_pane_g

0xd061,	// (0x00023cc9) aid_height_cl_leading_ParamLimits

0xd061,	// (0x00023cc9) aid_height_cl_leading

0xd06d,	// (0x00023cd5) aid_height_cl_text_ParamLimits

0xd06d,	// (0x00023cd5) aid_height_cl_text

0x39ee,	// (0x0001a656) bg_cl_header_pane_ParamLimits

0x39ee,	// (0x0001a656) bg_cl_header_pane

0xd085,	// (0x00023ced) cl_header_pane_g1_ParamLimits

0xd085,	// (0x00023ced) cl_header_pane_g1

0xd092,	// (0x00023cfa) cl_header_pane_t1_ParamLimits

0xd092,	// (0x00023cfa) cl_header_pane_t1

0x4532,	// (0x0001b19a) cl_list_pane

0x4042,	// (0x0001acaa) hc_scroll_pane_cp01

0x0f56,	// (0x00017bbe) bg_cl_header_pane_g1

0x3f28,	// (0x0001ab90) bg_cl_header_pane_g2

0x0f76,	// (0x00017bde) bg_cl_header_pane_g3

0x3f38,	// (0x0001aba0) bg_cl_header_pane_g4

0x3f30,	// (0x0001ab98) bg_cl_header_pane_g5

0x41e1,	// (0x0001ae49) bg_cl_header_pane_g6

0x3f50,	// (0x0001abb8) bg_cl_header_pane_g7

0x3f58,	// (0x0001abc0) bg_cl_header_pane_g8

0x3f48,	// (0x0001abb0) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x00026718) bg_cl_header_pane_g

0xd0a4,	// (0x00023d0c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd0a4,	// (0x00023d0c) hc_cl_list_double_graphic_heading_pane

0xd0b5,	// (0x00023d1d) hc_cl_list_single_graphic_pane_ParamLimits

0xd0b5,	// (0x00023d1d) hc_cl_list_single_graphic_pane

0xd0ce,	// (0x00023d36) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd0ce,	// (0x00023d36) hc_cl_list_single_graphic_pane_g1

0xd0da,	// (0x00023d42) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd0da,	// (0x00023d42) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x0002672b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x0002672b) hc_cl_list_single_graphic_pane_g

0xd0ee,	// (0x00023d56) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd0ee,	// (0x00023d56) hc_cl_list_single_graphic_pane_t1

0xd0ce,	// (0x00023d36) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd0ce,	// (0x00023d36) hc_cl_list_double_graphic_heading_pane_g1

0xd103,	// (0x00023d6b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd103,	// (0x00023d6b) hc_cl_list_double_graphic_heading_pane_g2

0xd117,	// (0x00023d7f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd117,	// (0x00023d7f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00026730) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00026730) hc_cl_list_double_graphic_heading_pane_g

0xd12b,	// (0x00023d93) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd12b,	// (0x00023d93) hc_cl_list_double_graphic_heading_pane_t1

0xd140,	// (0x00023da8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd140,	// (0x00023da8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x00026737) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x00026737) hc_cl_list_double_graphic_heading_pane_t

0x817f,	// (0x0001ede7) vid4_progress_pane_g1

0x818f,	// (0x0001edf7) vid4_progress_pane_g2

0x1273,	// (0x00017edb) vid4_progress_pane_g3

0x819f,	// (0x0001ee07) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x0002673c) vid4_progress_pane_g

0x81bd,	// (0x0001ee25) vid4_progress_pane_t1

0x81d2,	// (0x0001ee3a) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x00026747) vid4_progress_pane_t

0x81fd,	// (0x0001ee65) wait_bar_pane_cp07

0x2f55,	// (0x00019bbd) blid_firmament_pane_ParamLimits

0x2f98,	// (0x00019c00) popup_blid_sat_info2_window_g1

0x2fbc,	// (0x00019c24) popup_blid_sat_info2_window_t3

0x2fca,	// (0x00019c32) popup_blid_sat_info2_window_t4

0x2fd8,	// (0x00019c40) popup_blid_sat_info2_window_t5

0x2fe6,	// (0x00019c4e) popup_blid_sat_info2_window_t6

0x2ff6,	// (0x00019c5e) popup_blid_sat_info2_window_t7

0x3004,	// (0x00019c6c) popup_blid_sat_info2_window_t8

0x3012,	// (0x00019c7a) popup_blid_sat_info2_window_t9

0x3020,	// (0x00019c88) popup_blid_sat_info2_window_t10

0x30e2,	// (0x00019d4a) aid_firma_cardinal_ParamLimits

0x30f6,	// (0x00019d5e) blid_firmament_pane_t1_ParamLimits

0x310d,	// (0x00019d75) blid_firmament_pane_t2_ParamLimits

0x3124,	// (0x00019d8c) blid_firmament_pane_t3_ParamLimits

0x313b,	// (0x00019da3) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0002635a) blid_firmament_pane_t_ParamLimits

0x3152,	// (0x00019dba) blid_sat_info_pane_ParamLimits

0x0299,	// (0x00016f01) main_cam_set_pane_ParamLimits

0xc07f,	// (0x00022ce7) aid_size_cell_colour_35_ParamLimits

0xc099,	// (0x00022d01) aid_size_cell_colour_112_ParamLimits

0xc0b0,	// (0x00022d18) aid_size_cell_effect_ParamLimits

0x0299,	// (0x00016f01) bg_tb_trans_pane_cp02_ParamLimits

0x12a1,	// (0x00017f09) heading_imed_pane_ParamLimits

0xc0ca,	// (0x00022d32) listscroll_imed_pane_ParamLimits

0x228e,	// (0x00018ef6) popup_call2_audio_first_window_g5_ParamLimits

0x228e,	// (0x00018ef6) popup_call2_audio_first_window_g5

0x794e,	// (0x0001e5b6) aid_size_touch_image3_arrow_left_ParamLimits

0x794e,	// (0x0001e5b6) aid_size_touch_image3_arrow_left

0x7964,	// (0x0001e5cc) aid_size_touch_image3_arrow_right_ParamLimits

0x7964,	// (0x0001e5cc) aid_size_touch_image3_arrow_right

0x81e8,	// (0x0001ee50) vid4_progress_pane_t3

0xc368,	// (0x00022fd0) main_hwr_training_symbol_option_pane_ParamLimits

0xc368,	// (0x00022fd0) main_hwr_training_symbol_option_pane

0x3960,	// (0x0001a5c8) popup_hwr_training_preview_window_ParamLimits

0x3960,	// (0x0001a5c8) popup_hwr_training_preview_window

0x7674,	// (0x0001e2dc) hwr_training_navi_pane_g5_ParamLimits

0x7674,	// (0x0001e2dc) hwr_training_navi_pane_g5

0x3f16,	// (0x0001ab7e) popup_char_count_window

0x80b2,	// (0x0001ed1a) bg_popup_sub_pane_cp20_ParamLimits

0x80c0,	// (0x0001ed28) list_vitu2_match_list_pane_ParamLimits

0x80cc,	// (0x0001ed34) vitu2_page_scroll_pane_ParamLimits

0x80cc,	// (0x0001ed34) vitu2_page_scroll_pane

0x462d,	// (0x0001b295) list_single_hwr_training_symbol_option_pane_ParamLimits

0x462d,	// (0x0001b295) list_single_hwr_training_symbol_option_pane

0x4640,	// (0x0001b2a8) list_single_hwr_training_symbol_option_pane_g1

0x4648,	// (0x0001b2b0) list_single_hwr_training_symbol_option_pane_t1

0x4656,	// (0x0001b2be) bg_button_pane_cp023

0x465f,	// (0x0001b2c7) bg_button_pane_cp024

0xd155,	// (0x00023dbd) vitu2_page_scroll_pane_g1

0xd15d,	// (0x00023dc5) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x0002674e) vitu2_page_scroll_pane_g

0xd165,	// (0x00023dcd) vitu2_page_scroll_pane_t1

0x4692,	// (0x0001b2fa) popup_char_count_window_g1

0x469b,	// (0x0001b303) popup_char_count_window_g2

0x46a4,	// (0x0001b30c) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x00026753) popup_char_count_window_g

0x46ad,	// (0x0001b315) popup_char_count_window_t1

0x0229,	// (0x00016e91) main_vded2_pane

0x365f,	// (0x0001a2c7) aid_size_cell_imed_line

0x3669,	// (0x0001a2d1) grid_imed_line_width_pane

0x7cc2,	// (0x0001e92a) vid4_indicators_pane_g4

0x46bb,	// (0x0001b323) cell_imed_line_width_pane_ParamLimits

0x46bb,	// (0x0001b323) cell_imed_line_width_pane

0x46cf,	// (0x0001b337) cell_imed_line_width_pane_g1

0x46d8,	// (0x0001b340) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x0002675a) cell_imed_line_width_pane_g

0xd174,	// (0x00023ddc) main_vded2_pane_g1_ParamLimits

0xd174,	// (0x00023ddc) main_vded2_pane_g1

0xd181,	// (0x00023de9) main_vded2_pane_g2_ParamLimits

0xd181,	// (0x00023de9) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x0002675f) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x0002675f) main_vded2_pane_g

0xd18f,	// (0x00023df7) vded2_slider_pane_ParamLimits

0xd18f,	// (0x00023df7) vded2_slider_pane

0xd19c,	// (0x00023e04) aid_size_touch_vded2_end

0xd1a6,	// (0x00023e0e) aid_size_touch_vded2_playhead

0x46e0,	// (0x0001b348) aid_size_touch_vded2_start

0x46e8,	// (0x0001b350) vded2_slider_bg_pane

0x46f1,	// (0x0001b359) vded2_slider_pane_g1

0x46fa,	// (0x0001b362) vded2_slider_pane_g2

0xd1ae,	// (0x00023e16) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x00026764) vded2_slider_pane_g

0x4702,	// (0x0001b36a) vded2_slider_bg_pane_g1

0x470b,	// (0x0001b373) vded2_slider_bg_pane_g2

0x4714,	// (0x0001b37c) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x0002676b) vded2_slider_bg_pane_g

0xa7d8,	// (0x00021440) aid_postcard_touch_down_pane_ParamLimits

0xa7d8,	// (0x00021440) aid_postcard_touch_down_pane

0xa7e8,	// (0x00021450) aid_postcard_touch_up_pane_ParamLimits

0xa7e8,	// (0x00021450) aid_postcard_touch_up_pane

0x0229,	// (0x00016e91) main_blid2_pane

0x2c6a,	// (0x000198d2) popup_blid2_search_window

0x0229,	// (0x00016e91) blid2_gps_pane

0x0229,	// (0x00016e91) blid2_navig_pane

0x0229,	// (0x00016e91) blid2_search_pane

0x0229,	// (0x00016e91) blid2_tripm_pane

0xd1b7,	// (0x00023e1f) blid2_search_pane_g1_ParamLimits

0xd1b7,	// (0x00023e1f) blid2_search_pane_g1

0xd1c7,	// (0x00023e2f) blid2_search_pane_t1_ParamLimits

0xd1c7,	// (0x00023e2f) blid2_search_pane_t1

0xd1d9,	// (0x00023e41) aid_size_cell_blid2_gps_ParamLimits

0xd1d9,	// (0x00023e41) aid_size_cell_blid2_gps

0xd1e9,	// (0x00023e51) blid2_gps_pane_g1_ParamLimits

0xd1e9,	// (0x00023e51) blid2_gps_pane_g1

0xd1f5,	// (0x00023e5d) grid_blid2_satellite_pane_ParamLimits

0xd1f5,	// (0x00023e5d) grid_blid2_satellite_pane

0xd205,	// (0x00023e6d) blid2_navig_pane_g1_ParamLimits

0xd205,	// (0x00023e6d) blid2_navig_pane_g1

0xd211,	// (0x00023e79) blid2_navig_pane_t1_ParamLimits

0xd211,	// (0x00023e79) blid2_navig_pane_t1

0xd223,	// (0x00023e8b) blid2_navig_pane_t2_ParamLimits

0xd223,	// (0x00023e8b) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x00026772) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x00026772) blid2_navig_pane_t

0xd235,	// (0x00023e9d) blid2_navig_ring_pane_ParamLimits

0xd235,	// (0x00023e9d) blid2_navig_ring_pane

0xd245,	// (0x00023ead) blid2_speed_pane_ParamLimits

0xd245,	// (0x00023ead) blid2_speed_pane

0xd251,	// (0x00023eb9) blid2_tripm_pane_g1_ParamLimits

0xd251,	// (0x00023eb9) blid2_tripm_pane_g1

0xd261,	// (0x00023ec9) blid2_tripm_pane_g2_ParamLimits

0xd261,	// (0x00023ec9) blid2_tripm_pane_g2

0xd26d,	// (0x00023ed5) blid2_tripm_pane_g3_ParamLimits

0xd26d,	// (0x00023ed5) blid2_tripm_pane_g3

0xd279,	// (0x00023ee1) blid2_tripm_pane_g4_ParamLimits

0xd279,	// (0x00023ee1) blid2_tripm_pane_g4

0xd285,	// (0x00023eed) blid2_tripm_pane_g5_ParamLimits

0xd285,	// (0x00023eed) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x00026777) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x00026777) blid2_tripm_pane_g

0xd2a1,	// (0x00023f09) blid2_tripm_pane_t1_ParamLimits

0xd2a1,	// (0x00023f09) blid2_tripm_pane_t1

0xd2b5,	// (0x00023f1d) blid2_tripm_pane_t2_ParamLimits

0xd2b5,	// (0x00023f1d) blid2_tripm_pane_t2

0xd2c7,	// (0x00023f2f) blid2_tripm_pane_t3_ParamLimits

0xd2c7,	// (0x00023f2f) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x00026784) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x00026784) blid2_tripm_pane_t

0xd2f9,	// (0x00023f61) cell_blid2_satellite_pane_ParamLimits

0xd2f9,	// (0x00023f61) cell_blid2_satellite_pane

0xd313,	// (0x00023f7b) cell_blid2_satellite_pane_g1

0x471d,	// (0x0001b385) cell_blid2_satellite_pane_t1

0x3162,	// (0x00019dca) blid2_speed_pane_g1

0x472b,	// (0x0001b393) blid2_speed_pane_t1

0x4739,	// (0x0001b3a1) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x0002678d) blid2_speed_pane_t

0x3162,	// (0x00019dca) blid2_navig_ring_pane_g1

0xd31c,	// (0x00023f84) blid2_navig_ring_pane_g2

0xd324,	// (0x00023f8c) blid2_navig_ring_pane_g3

0xd32c,	// (0x00023f94) blid2_navig_ring_pane_g4

0xd334,	// (0x00023f9c) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x00026792) blid2_navig_ring_pane_g

0x0229,	// (0x00016e91) bg_popup_window_pane_cp011

0x4747,	// (0x0001b3af) popup_blid2_search_window_g1

0x474f,	// (0x0001b3b7) popup_blid2_search_window_t1

0x475d,	// (0x0001b3c5) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x0002679d) popup_blid2_search_window_t

0x0e65,	// (0x00017acd) main_browser_pane_g1

0x0a0a,	// (0x00017672) main_browser_pane_ParamLimits

0x7c77,	// (0x0001e8df) bg_button_pane_cp011_ParamLimits

0x7fd4,	// (0x0001ec3c) cell_vitu2_function_pane_g1_ParamLimits

0x2c5c,	// (0x000198c4) bg_popup_sub_pane_cp22_ParamLimits

0xccf2,	// (0x0002395a) input_focus_pane_cp08_ParamLimits

0xcd09,	// (0x00023971) popup_vitu2_query_button_pane_ParamLimits

0xcd09,	// (0x00023971) popup_vitu2_query_button_pane

0xcd1a,	// (0x00023982) popup_vitu2_query_input_button_pane

0x4256,	// (0x0001aebe) popup_vitu2_query_window_g1_ParamLimits

0xcd24,	// (0x0002398c) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x0002669e) popup_vitu2_query_window_g_ParamLimits

0x0229,	// (0x00016e91) bg_button_pane_cp026

0xd33c,	// (0x00023fa4) popup_vitu2_query_input_button_pane_g1

0x0229,	// (0x00016e91) bg_button_pane_cp025

0x476b,	// (0x0001b3d3) popup_vitu2_query_button_pane_t1

0xb630,	// (0x00022298) main_mp3_pane_t6

0xb640,	// (0x000222a8) popup_slider_window_cp01

0x7b98,	// (0x0001e800) cam4_battery_pane

0x7c85,	// (0x0001e8ed) cam4_battery_pane_cp02

0x8177,	// (0x0001eddf) cam4_battery_pane_cp01

0x8177,	// (0x0001eddf) cam4_battery_pane_cp03

0x4779,	// (0x0001b3e1) cam4_battery_pane_g1

0x3162,	// (0x00019dca) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x000267a2) cam4_battery_pane_g

0x302e,	// (0x00019c96) popup_blid_sat_info2_window_t11

0xa16c,	// (0x00020dd4) aid_size_touch_mv_arrow_left_ParamLimits

0xa195,	// (0x00020dfd) aid_size_touch_mv_arrow_right_ParamLimits

0x16ff,	// (0x00018367) navi_pane_g1_ParamLimits

0xa1d4,	// (0x00020e3c) navi_pane_g2_ParamLimits

0xa202,	// (0x00020e6a) navi_pane_g3_ParamLimits

0xf404,	// (0x0002606c) navi_pane_g_ParamLimits

0xa25c,	// (0x00020ec4) navi_pane_mv_t1_ParamLimits

0xc0d6,	// (0x00022d3e) grid_imed_effect_pane_ParamLimits

0x8f87,	// (0x0001fbef) aid_placing_vt_slider_lsc

0x0db4,	// (0x00017a1c) aid_placing_vt_slider_prt

0x0299,	// (0x00016f01) bg_tb_trans_pane_cp01_ParamLimits

0x32ee,	// (0x00019f56) popup_image_details_window_g1_ParamLimits

0x3301,	// (0x00019f69) popup_image_details_window_g2_ParamLimits

0x3316,	// (0x00019f7e) popup_image_details_window_g3_ParamLimits

0x3316,	// (0x00019f7e) popup_image_details_window_g3

0xf737,	// (0x0002639f) popup_image_details_window_g_ParamLimits

0x332a,	// (0x00019f92) popup_image_details_window_t1_ParamLimits

0x333c,	// (0x00019fa4) popup_image_details_window_t2_ParamLimits

0x3355,	// (0x00019fbd) popup_image_details_window_t3_ParamLimits

0x3369,	// (0x00019fd1) popup_image_details_window_t4_ParamLimits

0x3384,	// (0x00019fec) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x000263a6) popup_image_details_window_t_ParamLimits

0xd079,	// (0x00023ce1) cl_header_name_pane_ParamLimits

0xd079,	// (0x00023ce1) cl_header_name_pane

0xd344,	// (0x00023fac) cl_header_name_pane_t1_ParamLimits

0xd344,	// (0x00023fac) cl_header_name_pane_t1

0xd35b,	// (0x00023fc3) cl_header_name_pane_t2_ParamLimits

0xd35b,	// (0x00023fc3) cl_header_name_pane_t2

0xd385,	// (0x00023fed) cl_header_name_pane_t3_ParamLimits

0xd385,	// (0x00023fed) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x000267a7) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x000267a7) cl_header_name_pane_t

0xa22d,	// (0x00020e95) navi_pane_mv_g2_ParamLimits

0x3ea4,	// (0x0001ab0c) field_vitu2_entry_pane_g1_ParamLimits

0x3eb0,	// (0x0001ab18) field_vitu2_entry_pane_g2_ParamLimits

0x3ebc,	// (0x0001ab24) field_vitu2_entry_pane_g3_ParamLimits

0x3ebc,	// (0x0001ab24) field_vitu2_entry_pane_g3

0xf935,	// (0x0002659d) field_vitu2_entry_pane_g_ParamLimits

0x7ea9,	// (0x0001eb11) cell_vitu2_itu_pane_g1_ParamLimits

0x7eb9,	// (0x0001eb21) cell_vitu2_itu_pane_g2_ParamLimits

0x7eb9,	// (0x0001eb21) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x000265a9) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x000265a9) cell_vitu2_itu_pane_g

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp05_ParamLimits

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp05

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp03

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp04

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp10_ParamLimits

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp10

0xd01b,	// (0x00023c83) bg_vkb2_func_pane_cp08

0xd001,	// (0x00023c69) bg_vkb2_func_pane_cp06

0xd00f,	// (0x00023c77) bg_vkb2_func_pane_cp07

0x4668,	// (0x0001b2d0) bg_vkb2_func_pane_cp11_ParamLimits

0x4668,	// (0x0001b2d0) bg_vkb2_func_pane_cp11

0x467d,	// (0x0001b2e5) bg_vkb2_func_pane_cp12_ParamLimits

0x467d,	// (0x0001b2e5) bg_vkb2_func_pane_cp12

0x0229,	// (0x00016e91) bg_vkb2_func_pane_cp09

0x3f28,	// (0x0001ab90) bg_vkb2_func_pane_g1

0x0f76,	// (0x00017bde) bg_vkb2_func_pane_g2

0x3f30,	// (0x0001ab98) bg_vkb2_func_pane_g3

0x3f38,	// (0x0001aba0) bg_vkb2_func_pane_g4

0x41e1,	// (0x0001ae49) bg_vkb2_func_pane_g5

0x3f50,	// (0x0001abb8) bg_vkb2_func_pane_g6

0x3f58,	// (0x0001abc0) bg_vkb2_func_pane_g7

0x3f48,	// (0x0001abb0) bg_vkb2_func_pane_g8

0x0f56,	// (0x00017bbe) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x000267ae) bg_vkb2_func_pane_g

0xd293,	// (0x00023efb) blid2_tripm_pane_g6_ParamLimits

0xd293,	// (0x00023efb) blid2_tripm_pane_g6

0x3c7b,	// (0x0001a8e3) mp4_progress_pane_g1

0xd2ed,	// (0x00023f55) blid2_tripm_values_pane_ParamLimits

0xd2ed,	// (0x00023f55) blid2_tripm_values_pane

0xd3aa,	// (0x00024012) blid2_tripm_values_pane_t1

0xd3b8,	// (0x00024020) blid2_tripm_values_pane_t2

0xd3c6,	// (0x0002402e) blid2_tripm_values_pane_t3

0xd3d4,	// (0x0002403c) blid2_tripm_values_pane_t4

0xd3e2,	// (0x0002404a) blid2_tripm_values_pane_t5

0xd3f0,	// (0x00024058) blid2_tripm_values_pane_t6

0xd3fe,	// (0x00024066) blid2_tripm_values_pane_t7

0xd40c,	// (0x00024074) blid2_tripm_values_pane_t8

0xd41a,	// (0x00024082) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x000267c1) blid2_tripm_values_pane_t

0x8fc7,	// (0x0001fc2f) call_video_pane_t1_ParamLimits

0x8fe8,	// (0x0001fc50) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00025ef5) call_video_pane_t_ParamLimits

0xa776,	// (0x000213de) msg_header_pane_g1_ParamLimits

0x1942,	// (0x000185aa) msg_header_pane_g2_ParamLimits

0x1942,	// (0x000185aa) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0002610f) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0002610f) msg_header_pane_g

0x0a0a,	// (0x00017672) main_clock2_pane_ParamLimits

0xbef4,	// (0x00022b5c) grid_clock2_toolbar_pane_ParamLimits

0xbef4,	// (0x00022b5c) grid_clock2_toolbar_pane

0xbef4,	// (0x00022b5c) listscroll_clock2_pane_ParamLimits

0xbef4,	// (0x00022b5c) listscroll_clock2_pane

0xbf8b,	// (0x00022bf3) main_clock2_pane_t3_ParamLimits

0xbf8b,	// (0x00022bf3) main_clock2_pane_t3

0xbf9d,	// (0x00022c05) main_clock2_pane_t4_ParamLimits

0xbf9d,	// (0x00022c05) main_clock2_pane_t4

0x4783,	// (0x0001b3eb) cell_clock2_toolbar_pane

0x478b,	// (0x0001b3f3) cell_clock2_toolbar_pane_cp01

0x478b,	// (0x0001b3f3) cell_clock2_toolbar_pane_cp02

0x4793,	// (0x0001b3fb) cell_clock2_toolbar_pane_cp03

0x479b,	// (0x0001b403) list_clock2_pane

0x1656,	// (0x000182be) scroll_pane_cp10

0x47a3,	// (0x0001b40b) list_single_clock2_pane_ParamLimits

0x47a3,	// (0x0001b40b) list_single_clock2_pane

0x179f,	// (0x00018407) list_highlight_pane_cp08

0x47b0,	// (0x0001b418) list_single_clock2_pane_t1

0x47be,	// (0x0001b426) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x000267d4) list_single_clock2_pane_t

0x0229,	// (0x00016e91) bg_button_pane_cp10

0x47cc,	// (0x0001b434) cell_clock2_toolbar_pane_g1

0x7280,	// (0x0001dee8) aid_main_viewer_pane_g1_ParamLimits

0x7280,	// (0x0001dee8) aid_main_viewer_pane_g1

0x728c,	// (0x0001def4) aid_main_viewer_pane_g2_ParamLimits

0x728c,	// (0x0001def4) aid_main_viewer_pane_g2

0xa794,	// (0x000213fc) aid_main_viewer_pane_g3_ParamLimits

0xa794,	// (0x000213fc) aid_main_viewer_pane_g3

0xa7a5,	// (0x0002140d) aid_main_viewer_pane_g4_ParamLimits

0xa7a5,	// (0x0002140d) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00026120) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00026120) aid_main_viewer_pane_g

0xaee3,	// (0x00021b4b) main_calc_pane_ParamLimits

0xaef0,	// (0x00021b58) main_dialer2_pane_ParamLimits

0x0229,	// (0x00016e91) main_cam6_pane

0x0229,	// (0x00016e91) main_vid6_pane

0xbf00,	// (0x00022b68) listscroll_gen_pane_cp06_ParamLimits

0xbf00,	// (0x00022b68) listscroll_gen_pane_cp06

0xbfaf,	// (0x00022c17) main_clock2_pane_t5_ParamLimits

0xbfaf,	// (0x00022c17) main_clock2_pane_t5

0xbff8,	// (0x00022c60) aid_call2_pane_cp10_ParamLimits

0xc00a,	// (0x00022c72) aid_call_pane_cp10_ParamLimits

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc01c,	// (0x00022c84) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc01c,	// (0x00022c84) popup_clock_analogue_window_cp10_g4_ParamLimits

0x16d4,	// (0x0001833c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00026456) popup_clock_analogue_window_cp10_g_ParamLimits

0xc02e,	// (0x00022c96) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc445,	// (0x000230ad) cell_dialer2_keypad_pane_g2_ParamLimits

0xc445,	// (0x000230ad) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0002653c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0002653c) cell_dialer2_keypad_pane_g

0xc461,	// (0x000230c9) cell_dialer2_keypad_pane_t1

0xc86f,	// (0x000234d7) main_cset_text2_pane_ParamLimits

0xc86f,	// (0x000234d7) main_cset_text2_pane

0x4442,	// (0x0001b0aa) area_vitu2_query_pane_g1_ParamLimits

0xcfa0,	// (0x00023c08) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x000266f1) area_vitu2_query_pane_g_ParamLimits

0x44c6,	// (0x0001b12e) area_vitu2_query_pane_t7_ParamLimits

0x44c6,	// (0x0001b12e) area_vitu2_query_pane_t7

0xd001,	// (0x00023c69) bg_button_pane_cp018_ParamLimits

0xd00f,	// (0x00023c77) bg_button_pane_cp021_ParamLimits

0xd01b,	// (0x00023c83) bg_button_pane_cp022_ParamLimits

0xd01b,	// (0x00023c83) bg_vkb2_func_pane_cp08_ParamLimits

0xd001,	// (0x00023c69) bg_vkb2_func_pane_cp06_ParamLimits

0xd00f,	// (0x00023c77) bg_vkb2_func_pane_cp07_ParamLimits

0xd02c,	// (0x00023c94) input_focus_pane_cp09_ParamLimits

0x820f,	// (0x0001ee77) cam6_autofocus_pane_ParamLimits

0x820f,	// (0x0001ee77) cam6_autofocus_pane

0x8231,	// (0x0001ee99) cam6_image_uncrop_pane_ParamLimits

0x8231,	// (0x0001ee99) cam6_image_uncrop_pane

0x825e,	// (0x0001eec6) cam6_indi_pane_ParamLimits

0x825e,	// (0x0001eec6) cam6_indi_pane

0x8278,	// (0x0001eee0) cam6_mode_pane_ParamLimits

0x8278,	// (0x0001eee0) cam6_mode_pane

0x828c,	// (0x0001eef4) cam6_timer_pane_ParamLimits

0x828c,	// (0x0001eef4) cam6_timer_pane

0x8298,	// (0x0001ef00) cam6_zoom_pane_ParamLimits

0x8298,	// (0x0001ef00) cam6_zoom_pane

0xd428,	// (0x00024090) cam6_mode_pane_g1_ParamLimits

0xd428,	// (0x00024090) cam6_mode_pane_g1

0xd434,	// (0x0002409c) cam6_mode_pane_g2_ParamLimits

0xd434,	// (0x0002409c) cam6_mode_pane_g2

0xd440,	// (0x000240a8) cam6_mode_pane_g3_ParamLimits

0xd440,	// (0x000240a8) cam6_mode_pane_g3

0xd44c,	// (0x000240b4) cam6_mode_pane_g4_ParamLimits

0xd44c,	// (0x000240b4) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x000267d9) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x000267d9) cam6_mode_pane_g

0x47e2,	// (0x0001b44a) bg_tb_trans_pane_cp08_ParamLimits

0x47e2,	// (0x0001b44a) bg_tb_trans_pane_cp08

0x47f0,	// (0x0001b458) cam6_battery_pane_ParamLimits

0x47f0,	// (0x0001b458) cam6_battery_pane

0x4806,	// (0x0001b46e) cam6_indi_pane_g1_ParamLimits

0x4806,	// (0x0001b46e) cam6_indi_pane_g1

0x4818,	// (0x0001b480) cam6_indi_pane_g2_ParamLimits

0x4818,	// (0x0001b480) cam6_indi_pane_g2

0x482a,	// (0x0001b492) cam6_indi_pane_g3_ParamLimits

0x482a,	// (0x0001b492) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x000267e2) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x000267e2) cam6_indi_pane_g

0x483c,	// (0x0001b4a4) cam6_indi_pane_t1_ParamLimits

0x483c,	// (0x0001b4a4) cam6_indi_pane_t1

0xc5a0,	// (0x00023208) cam6_autofocus_pane_g1

0xc598,	// (0x00023200) cam6_autofocus_pane_g2

0xc5b0,	// (0x00023218) cam6_autofocus_pane_g3

0xc5a8,	// (0x00023210) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x000267e9) cam6_autofocus_pane_g

0x4862,	// (0x0001b4ca) cam6_timer_pane_g1

0x486a,	// (0x0001b4d2) cam6_timer_pane_t1

0x4878,	// (0x0001b4e0) cam6_zoom_cont_pane

0x4880,	// (0x0001b4e8) cam6_zoom_pane_g1

0x4888,	// (0x0001b4f0) cam6_zoom_pane_g2

0xd458,	// (0x000240c0) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x000267f2) cam6_zoom_pane_g

0x3162,	// (0x00019dca) cam6_battery_pane_g1

0x3162,	// (0x00019dca) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x00026363) cam6_battery_pane_g

0x4890,	// (0x0001b4f8) cam6_zoom_cont_pane_g1

0x4899,	// (0x0001b501) cam6_zoom_cont_pane_g2

0x48a2,	// (0x0001b50a) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x000267f9) cam6_zoom_cont_pane_g

0xd475,	// (0x000240dd) cam6_mode_pane_cp_ParamLimits

0xd475,	// (0x000240dd) cam6_mode_pane_cp

0xd489,	// (0x000240f1) cam6_zoom_pane_cp_ParamLimits

0xd489,	// (0x000240f1) cam6_zoom_pane_cp

0xd4a1,	// (0x00024109) vid6_image_uncrop_cif_pane_ParamLimits

0xd4a1,	// (0x00024109) vid6_image_uncrop_cif_pane

0xd4cd,	// (0x00024135) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4cd,	// (0x00024135) vid6_image_uncrop_nhd_pane

0xd4ea,	// (0x00024152) vid6_image_uncrop_vga_pane_ParamLimits

0xd4ea,	// (0x00024152) vid6_image_uncrop_vga_pane

0xd509,	// (0x00024171) vid6_image_uncrop_wvga_pane_ParamLimits

0xd509,	// (0x00024171) vid6_image_uncrop_wvga_pane

0xd526,	// (0x0002418e) vid6_indi_pane_ParamLimits

0xd526,	// (0x0002418e) vid6_indi_pane

0x47e2,	// (0x0001b44a) bg_tb_trans_pane_cp09_ParamLimits

0x47e2,	// (0x0001b44a) bg_tb_trans_pane_cp09

0x48ba,	// (0x0001b522) cam6_battery_pane_cp_ParamLimits

0x48ba,	// (0x0001b522) cam6_battery_pane_cp

0x48c6,	// (0x0001b52e) vid6_indi_pane_g1_ParamLimits

0x48c6,	// (0x0001b52e) vid6_indi_pane_g1

0x48d8,	// (0x0001b540) vid6_indi_pane_g2_ParamLimits

0x48d8,	// (0x0001b540) vid6_indi_pane_g2

0x48ea,	// (0x0001b552) vid6_indi_pane_g3_ParamLimits

0x48ea,	// (0x0001b552) vid6_indi_pane_g3

0x48ff,	// (0x0001b567) vid6_indi_pane_g4_ParamLimits

0x48ff,	// (0x0001b567) vid6_indi_pane_g4

0x4914,	// (0x0001b57c) vid6_indi_pane_g5_ParamLimits

0x4914,	// (0x0001b57c) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00026800) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00026800) vid6_indi_pane_g

0x492e,	// (0x0001b596) vid6_indi_pane_t1_ParamLimits

0x492e,	// (0x0001b596) vid6_indi_pane_t1

0x4944,	// (0x0001b5ac) vid6_indi_pane_t2_ParamLimits

0x4944,	// (0x0001b5ac) vid6_indi_pane_t2

0x496c,	// (0x0001b5d4) vid6_indi_pane_t3_ParamLimits

0x496c,	// (0x0001b5d4) vid6_indi_pane_t3

0x4994,	// (0x0001b5fc) vid6_indi_pane_t4_ParamLimits

0x4994,	// (0x0001b5fc) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x0002680b) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x0002680b) vid6_indi_pane_t

0x49b8,	// (0x0001b620) wait_bar_pane_cp08

0xd54b,	// (0x000241b3) main_cset_text2_pane_t1_ParamLimits

0xd54b,	// (0x000241b3) main_cset_text2_pane_t1

0xd460,	// (0x000240c8) listscroll_gen_pane_cp06_t1_ParamLimits

0xd460,	// (0x000240c8) listscroll_gen_pane_cp06_t1

0x0229,	// (0x00016e91) main_cam6_set_pane

0x7b8a,	// (0x0001e7f2) bg_tb_trans_pane_cp06_ParamLimits

0x7ba0,	// (0x0001e808) cam4_indicators_pane_g1_ParamLimits

0x7bb1,	// (0x0001e819) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x00026579) cam4_indicators_pane_g_ParamLimits

0x7bcf,	// (0x0001e837) cam4_indicators_pane_t1_ParamLimits

0x7c77,	// (0x0001e8df) bg_tb_trans_pane_cp07_ParamLimits

0x7c8f,	// (0x0001e8f7) vid4_indicators_pane_g1_ParamLimits

0x7ca0,	// (0x0001e908) vid4_indicators_pane_g2_ParamLimits

0x7cb1,	// (0x0001e919) vid4_indicators_pane_g3_ParamLimits

0x7cc2,	// (0x0001e92a) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0002658b) vid4_indicators_pane_g_ParamLimits

0x7cde,	// (0x0001e946) vid4_indicators_pane_t1_ParamLimits

0x817f,	// (0x0001ede7) vid4_progress_pane_g1_ParamLimits

0x818f,	// (0x0001edf7) vid4_progress_pane_g2_ParamLimits

0x1273,	// (0x00017edb) vid4_progress_pane_g3_ParamLimits

0x819f,	// (0x0001ee07) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x0002673c) vid4_progress_pane_g_ParamLimits

0x81bd,	// (0x0001ee25) vid4_progress_pane_t1_ParamLimits

0x81d2,	// (0x0001ee3a) vid4_progress_pane_t2_ParamLimits

0x81e8,	// (0x0001ee50) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x00026747) vid4_progress_pane_t_ParamLimits

0x81fd,	// (0x0001ee65) wait_bar_pane_cp07_ParamLimits

0xd57e,	// (0x000241e6) main_cam6_set_pane_g2_ParamLimits

0xd57e,	// (0x000241e6) main_cam6_set_pane_g2

0xd58a,	// (0x000241f2) main_cset6_listscroll_pane_ParamLimits

0xd58a,	// (0x000241f2) main_cset6_listscroll_pane

0xd5b5,	// (0x0002421d) main_cset6_slider_pane_ParamLimits

0xd5b5,	// (0x0002421d) main_cset6_slider_pane

0xd5c1,	// (0x00024229) main_cset6_text2_pane_ParamLimits

0xd5c1,	// (0x00024229) main_cset6_text2_pane

0x49c7,	// (0x0001b62f) main_cset6_text_pane

0x49cf,	// (0x0001b637) main_cset_list_pane_copy1_ParamLimits

0x49cf,	// (0x0001b637) main_cset_list_pane_copy1

0x49df,	// (0x0001b647) scroll_pane_cp028_copy1

0xd5d4,	// (0x0002423c) cset_list_set_pane_copy1

0xd5e7,	// (0x0002424f) aid_position_infowindow_above_copy1

0xd5ef,	// (0x00024257) aid_position_infowindow_below_copy1

0xd5f7,	// (0x0002425f) cset_list_set_pane_g1_copy1

0x4127,	// (0x0001ad8f) cset_list_set_pane_g3_copy1_ParamLimits

0x4127,	// (0x0001ad8f) cset_list_set_pane_g3_copy1

0x4136,	// (0x0001ad9e) cset_list_set_pane_t1_copy1_ParamLimits

0x4136,	// (0x0001ad9e) cset_list_set_pane_t1_copy1

0x0299,	// (0x00016f01) list_highlight_pane_cp021_copy1_ParamLimits

0x0299,	// (0x00016f01) list_highlight_pane_cp021_copy1

0x49e8,	// (0x0001b650) cset6_slider_pane_ParamLimits

0x49e8,	// (0x0001b650) cset6_slider_pane

0x4a14,	// (0x0001b67c) main_cset6_slider_pane_g1_ParamLimits

0x4a14,	// (0x0001b67c) main_cset6_slider_pane_g1

0xd5ff,	// (0x00024267) main_cset6_slider_pane_g2_ParamLimits

0xd5ff,	// (0x00024267) main_cset6_slider_pane_g2

0x4a3c,	// (0x0001b6a4) main_cset6_slider_pane_g3_ParamLimits

0x4a3c,	// (0x0001b6a4) main_cset6_slider_pane_g3

0xd627,	// (0x0002428f) main_cset6_slider_pane_g4_ParamLimits

0xd627,	// (0x0002428f) main_cset6_slider_pane_g4

0xd633,	// (0x0002429b) main_cset6_slider_pane_g5_ParamLimits

0xd633,	// (0x0002429b) main_cset6_slider_pane_g5

0x4057,	// (0x0001acbf) main_cset6_slider_pane_g7_ParamLimits

0x4057,	// (0x0001acbf) main_cset6_slider_pane_g7

0x4063,	// (0x0001accb) main_cset6_slider_pane_g8_ParamLimits

0x4063,	// (0x0001accb) main_cset6_slider_pane_g8

0xd641,	// (0x000242a9) main_cset6_slider_pane_g9_ParamLimits

0xd641,	// (0x000242a9) main_cset6_slider_pane_g9

0xd64d,	// (0x000242b5) main_cset6_slider_pane_g10_ParamLimits

0xd64d,	// (0x000242b5) main_cset6_slider_pane_g10

0xd659,	// (0x000242c1) main_cset6_slider_pane_g11_ParamLimits

0xd659,	// (0x000242c1) main_cset6_slider_pane_g11

0xd665,	// (0x000242cd) main_cset6_slider_pane_g12_ParamLimits

0xd665,	// (0x000242cd) main_cset6_slider_pane_g12

0xd671,	// (0x000242d9) main_cset6_slider_pane_g13_ParamLimits

0xd671,	// (0x000242d9) main_cset6_slider_pane_g13

0xd67d,	// (0x000242e5) main_cset6_slider_pane_g14_ParamLimits

0xd67d,	// (0x000242e5) main_cset6_slider_pane_g14

0xd689,	// (0x000242f1) main_cset6_slider_pane_g15_ParamLimits

0xd689,	// (0x000242f1) main_cset6_slider_pane_g15

0xd6a1,	// (0x00024309) main_cset6_slider_pane_g16_ParamLimits

0xd6a1,	// (0x00024309) main_cset6_slider_pane_g16

0xd6af,	// (0x00024317) main_cset6_slider_pane_g17_ParamLimits

0xd6af,	// (0x00024317) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x00026814) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x00026814) main_cset6_slider_pane_g

0x4a48,	// (0x0001b6b0) main_cset6_slider_pane_t1_ParamLimits

0x4a48,	// (0x0001b6b0) main_cset6_slider_pane_t1

0xd6d5,	// (0x0002433d) main_cset6_slider_pane_t2_ParamLimits

0xd6d5,	// (0x0002433d) main_cset6_slider_pane_t2

0xd700,	// (0x00024368) main_cset6_slider_pane_t3_ParamLimits

0xd700,	// (0x00024368) main_cset6_slider_pane_t3

0xd72b,	// (0x00024393) main_cset6_slider_pane_t4_ParamLimits

0xd72b,	// (0x00024393) main_cset6_slider_pane_t4

0xd756,	// (0x000243be) main_cset6_slider_pane_t5_ParamLimits

0xd756,	// (0x000243be) main_cset6_slider_pane_t5

0x4a89,	// (0x0001b6f1) main_cset6_slider_pane_t7_ParamLimits

0x4a89,	// (0x0001b6f1) main_cset6_slider_pane_t7

0xd783,	// (0x000243eb) main_cset6_slider_pane_t8_ParamLimits

0xd783,	// (0x000243eb) main_cset6_slider_pane_t8

0xd7a7,	// (0x0002440f) main_cset6_slider_pane_t9_ParamLimits

0xd7a7,	// (0x0002440f) main_cset6_slider_pane_t9

0xd7cb,	// (0x00024433) main_cset6_slider_pane_t10_ParamLimits

0xd7cb,	// (0x00024433) main_cset6_slider_pane_t10

0xd7ef,	// (0x00024457) main_cset6_slider_pane_t11_ParamLimits

0xd7ef,	// (0x00024457) main_cset6_slider_pane_t11

0x4abf,	// (0x0001b727) main_cset6_slider_pane_t14_ParamLimits

0x4abf,	// (0x0001b727) main_cset6_slider_pane_t14

0x4af8,	// (0x0001b760) main_cset6_slider_pane_t15_ParamLimits

0x4af8,	// (0x0001b760) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x00026839) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x00026839) main_cset6_slider_pane_t

0x416b,	// (0x0001add3) cset_slider_pane_g1_copy1

0x4174,	// (0x0001addc) cset_slider_pane_g2_copy1

0x417d,	// (0x0001ade5) cset_slider_pane_g3_copy1

0x0229,	// (0x00016e91) bg_popup_sub_pane_cp011_copy1

0x4262,	// (0x0001aeca) main_cset_text_pane_g1_copy1

0x426a,	// (0x0001aed2) main_cset_text_pane_t1_copy1

0x4278,	// (0x0001aee0) main_cset_text_pane_t2_copy1

0x4286,	// (0x0001aeee) main_cset_text_pane_t3_copy1

0x4294,	// (0x0001aefc) main_cset_text_pane_t4_copy1

0x42a2,	// (0x0001af0a) main_cset_text_pane_t5_copy1

0x42b0,	// (0x0001af18) main_cset_text_pane_t6_copy1

0x42be,	// (0x0001af26) main_cset_text_pane_t7_copy1

0xd813,	// (0x0002447b) main_cset_text2_pane_t1_copy1

0x0229,	// (0x00016e91) main_ncimui_pane

0xaf2f,	// (0x00021b97) popup_query_ncimui_window_ParamLimits

0xaf2f,	// (0x00021b97) popup_query_ncimui_window

0x3433,	// (0x0001a09b) field_cale_ev2_pane_g4_ParamLimits

0x3433,	// (0x0001a09b) field_cale_ev2_pane_g4

0xc3e5,	// (0x0002304d) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc3e5,	// (0x0002304d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x00026517) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x00026517) cell_video_dialer_keypad_pane_g

0xc3fd,	// (0x00023065) cell_video_dialer_keypad_pane_t1

0x0229,	// (0x00016e91) bg_popup_window_pane_cp012

0x1533,	// (0x0001819b) heading_pane_cp06

0x4c20,	// (0x0001b888) ncim_query_content_pane

0x0229,	// (0x00016e91) bg_popup_heading_pane_cp01

0x4c28,	// (0x0001b890) ncim_heading_pane_t1

0x4c36,	// (0x0001b89e) ncim_indicator_popup_pane

0x4c48,	// (0x0001b8b0) ncim_query_button_pane

0x4c5c,	// (0x0001b8c4) ncim_query_content_pane_t1

0x4c6e,	// (0x0001b8d6) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x00026878) ncim_query_content_pane_t

0x4ca8,	// (0x0001b910) ncim_query_list_pane

0x4cba,	// (0x0001b922) ncim_query_popup_pane

0x4c36,	// (0x0001b89e) ncim_indicator_popup_pane_ParamLimits

0xd935,	// (0x0002459d) ncim_query_content_pane_g1_ParamLimits

0xd935,	// (0x0002459d) ncim_query_content_pane_g1

0x4c5c,	// (0x0001b8c4) ncim_query_content_pane_t1_ParamLimits

0x4c6e,	// (0x0001b8d6) ncim_query_content_pane_t2_ParamLimits

0xd941,	// (0x000245a9) ncim_query_content_pane_t3_ParamLimits

0xd941,	// (0x000245a9) ncim_query_content_pane_t3

0xd95e,	// (0x000245c6) ncim_query_content_pane_t4_ParamLimits

0xd95e,	// (0x000245c6) ncim_query_content_pane_t4

0xd97b,	// (0x000245e3) ncim_query_content_pane_t5_ParamLimits

0xd97b,	// (0x000245e3) ncim_query_content_pane_t5

0x4c80,	// (0x0001b8e8) ncim_query_content_pane_t6_ParamLimits

0x4c80,	// (0x0001b8e8) ncim_query_content_pane_t6

0xfc10,	// (0x00026878) ncim_query_content_pane_t_ParamLimits

0x4ca8,	// (0x0001b910) ncim_query_list_pane_ParamLimits

0x4cba,	// (0x0001b922) ncim_query_popup_pane_ParamLimits

0x4cce,	// (0x0001b936) wait_bar_pane_cp04

0x0229,	// (0x00016e91) input_focus_pane_cp011

0x4cd6,	// (0x0001b93e) ncim_query_popup_pane_t1

0x4ce4,	// (0x0001b94c) ncim_list_query_list_pane_ParamLimits

0x4ce4,	// (0x0001b94c) ncim_list_query_list_pane

0x0229,	// (0x00016e91) bg_button_pane_cp027

0x4cf1,	// (0x0001b959) ncim_query_button_pane_g1

0x0229,	// (0x00016e91) list_highlight_pane_cp012

0x4cfb,	// (0x0001b963) ncim_list_query_list_pane_g1

0x4d03,	// (0x0001b96b) ncim_list_query_list_pane_t1

0x7bc0,	// (0x0001e828) cam4_indicators_pane_g3_ParamLimits

0x7bc0,	// (0x0001e828) cam4_indicators_pane_g3

0x7cce,	// (0x0001e936) vid4_indicators_pane_g5_ParamLimits

0x7cce,	// (0x0001e936) vid4_indicators_pane_g5

0x81ae,	// (0x0001ee16) vid4_progress_pane_g5_ParamLimits

0x81ae,	// (0x0001ee16) vid4_progress_pane_g5

0xd84e,	// (0x000244b6) main_ncimui_pane_g1

0xd8a4,	// (0x0002450c) ncimui_group_query_pane_ParamLimits

0xd8a4,	// (0x0002450c) ncimui_group_query_pane

0xd8e0,	// (0x00024548) ncimui_list_pane_ParamLimits

0xd8e0,	// (0x00024548) ncimui_list_pane

0xd901,	// (0x00024569) ncimui_text_pane_ParamLimits

0xd901,	// (0x00024569) ncimui_text_pane

0xd998,	// (0x00024600) ncimui_text_pane_t1_ParamLimits

0xd998,	// (0x00024600) ncimui_text_pane_t1

0x4d11,	// (0x0001b979) ncimui_list_single_graphic_pane_ParamLimits

0x4d11,	// (0x0001b979) ncimui_list_single_graphic_pane

0xd9b7,	// (0x0002461f) ncimui_query_pane_ParamLimits

0xd9b7,	// (0x0002461f) ncimui_query_pane

0x0229,	// (0x00016e91) list_highlight_pane_cp013

0x4d21,	// (0x0001b989) ncim_list_query_list_pane_t1_copy1

0x4cfb,	// (0x0001b963) ncim_list_single_graphic_pane_g1

0x4d2f,	// (0x0001b997) ncim_query_button_pane_cp01

0x4d3b,	// (0x0001b9a3) ncim_query_entry_pane_ParamLimits

0x4d3b,	// (0x0001b9a3) ncim_query_entry_pane

0x4d4e,	// (0x0001b9b6) ncimui_query_pane_g1

0x4d5a,	// (0x0001b9c2) ncimui_query_pane_t1_ParamLimits

0x4d5a,	// (0x0001b9c2) ncimui_query_pane_t1

0x0299,	// (0x00016f01) input_focus_pane_cp012

0x4d73,	// (0x0001b9db) ncim_query_entry_pane_t1

0x0a0a,	// (0x00017672) main_im_pane_ParamLimits

0x0299,	// (0x00016f01) main_mobtv_pane_ParamLimits

0x0299,	// (0x00016f01) main_mobtv_pane

0xd6bd,	// (0x00024325) main_cset6_slider_pane_g18_ParamLimits

0xd6bd,	// (0x00024325) main_cset6_slider_pane_g18

0xd6c9,	// (0x00024331) main_cset6_slider_pane_g19_ParamLimits

0xd6c9,	// (0x00024331) main_cset6_slider_pane_g19

0x3ebc,	// (0x0001ab24) bg_main_mobtv_pane_ParamLimits

0x3ebc,	// (0x0001ab24) bg_main_mobtv_pane

0xd9ca,	// (0x00024632) main_mobtv_info_pane

0xd9d5,	// (0x0002463d) main_mobtv_loading_pane_ParamLimits

0xd9d5,	// (0x0002463d) main_mobtv_loading_pane

0x4d93,	// (0x0001b9fb) main_mobtv_pg_channel_list_pane

0x4d9d,	// (0x0001ba05) main_mobtv_pg_hdr_pane

0xd9e2,	// (0x0002464a) main_mobtv_programe_curr_pane_ParamLimits

0xd9e2,	// (0x0002464a) main_mobtv_programe_curr_pane

0xd9ef,	// (0x00024657) main_mobtv_programe_next_pane_ParamLimits

0xd9ef,	// (0x00024657) main_mobtv_programe_next_pane

0x4da6,	// (0x0001ba0e) popup_mobtv_noti_window

0x3162,	// (0x00019dca) main_tv_pg_hdr_pane_g1

0x4dae,	// (0x0001ba16) main_tv_pg_hdr_pane_g2

0x4db6,	// (0x0001ba1e) main_tv_pg_hdr_pane_g3

0x4dbe,	// (0x0001ba26) main_tv_pg_hdr_pane_g4

0x4dc6,	// (0x0001ba2e) main_tv_pg_hdr_pane_g5

0x4dd0,	// (0x0001ba38) main_tv_pg_hdr_pane_g6

0x4dda,	// (0x0001ba42) main_tv_pg_hdr_pane_g7

0x4de4,	// (0x0001ba4c) main_tv_pg_hdr_pane_g8

0x4dee,	// (0x0001ba56) main_tv_pg_hdr_pane_g9

0x4df8,	// (0x0001ba60) main_tv_pg_hdr_pane_g10

0x4e02,	// (0x0001ba6a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x00026885) main_tv_pg_hdr_pane_g

0x4e0c,	// (0x0001ba74) main_tv_pg_hdr_pane_t1

0x4e1a,	// (0x0001ba82) main_tv_pg_hdr_pane_t2

0x4e28,	// (0x0001ba90) main_tv_pg_hdr_pane_t3

0x4e38,	// (0x0001baa0) main_tv_pg_hdr_pane_t4

0x4e48,	// (0x0001bab0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x0002689c) main_tv_pg_hdr_pane_t

0x4e58,	// (0x0001bac0) single_mobtv_pg_channel_pane_ParamLimits

0x4e58,	// (0x0001bac0) single_mobtv_pg_channel_pane

0x4e6a,	// (0x0001bad2) single_mobtv_pg_channel_table_pane

0x4e73,	// (0x0001badb) single_mobtv_pg_channel_thumb_pane

0x4e7c,	// (0x0001bae4) single_tv_pg_channel_pane_g1

0x4e85,	// (0x0001baed) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x000268a7) single_tv_pg_channel_pane_g

0x33ce,	// (0x0001a036) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x33ce,	// (0x0001a036) bg_single_mobtv_pg_channel_thumb_pane

0x4e8e,	// (0x0001baf6) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4e8e,	// (0x0001baf6) single_mobtv_pg_channel_thumb_pane_g1

0x4e9c,	// (0x0001bb04) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4e9c,	// (0x0001bb04) single_mobtv_pg_channel_thumb_pane_g2

0x4ea8,	// (0x0001bb10) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4ea8,	// (0x0001bb10) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x000268ac) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x000268ac) single_mobtv_pg_channel_thumb_pane_g

0x4eb4,	// (0x0001bb1c) single_mobtv_pg_channel_thumb_pane_t1

0x4ec2,	// (0x0001bb2a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x000268b3) single_mobtv_pg_channel_thumb_pane_t

0x3162,	// (0x00019dca) bg_single_mobtv_pg_channel_table_pane_g1

0x3162,	// (0x00019dca) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x00026363) bg_single_mobtv_pg_channel_table_pane_g

0x4ed0,	// (0x0001bb38) single_mobtv_pg_channel_table_pane_t1

0x4ede,	// (0x0001bb46) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x000268b8) single_mobtv_pg_channel_table_pane_t

0xda04,	// (0x0002466c) main_mobtv_info_pane_g1_ParamLimits

0xda04,	// (0x0002466c) main_mobtv_info_pane_g1

0xda20,	// (0x00024688) main_mobtv_info_pane_t1_ParamLimits

0xda20,	// (0x00024688) main_mobtv_info_pane_t1

0xda98,	// (0x00024700) main_mobtv_info_pane_t2_ParamLimits

0xda98,	// (0x00024700) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x000268c2) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x000268c2) main_mobtv_info_pane_t

0xdb27,	// (0x0002478f) wait_bar_pane_cp05

0xdb39,	// (0x000247a1) main_mobtv_loading_pane_g1_ParamLimits

0xdb39,	// (0x000247a1) main_mobtv_loading_pane_g1

0xdb47,	// (0x000247af) main_mobtv_loading_pane_g2_ParamLimits

0xdb47,	// (0x000247af) main_mobtv_loading_pane_g2

0xdb53,	// (0x000247bb) main_mobtv_loading_pane_g3_ParamLimits

0xdb53,	// (0x000247bb) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x000268c9) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x000268c9) main_mobtv_loading_pane_g

0x4eec,	// (0x0001bb54) main_mobtv_loading_pane_t1_ParamLimits

0x4eec,	// (0x0001bb54) main_mobtv_loading_pane_t1

0x4f04,	// (0x0001bb6c) main_mobtv_loading_pane_t2_ParamLimits

0x4f04,	// (0x0001bb6c) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x000268d0) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x000268d0) main_mobtv_loading_pane_t

0xdb61,	// (0x000247c9) wait_bar_pane_cp06_ParamLimits

0xdb61,	// (0x000247c9) wait_bar_pane_cp06

0x4f28,	// (0x0001bb90) main_mobtv_programe_curr_pane_t1

0x4f36,	// (0x0001bb9e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x000268d5) main_mobtv_programe_curr_pane_t

0x4f44,	// (0x0001bbac) main_mobtv_programe_next_pane_t1

0x4f52,	// (0x0001bbba) main_mobtv_programe_next_pane_t2

0x4f60,	// (0x0001bbc8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x000268da) main_mobtv_programe_next_pane_t

0x0229,	// (0x00016e91) bg_popup_mobtv_noti_window_pane

0x4f6e,	// (0x0001bbd6) popup_mobtv_noti_window_g1

0x4f76,	// (0x0001bbde) popup_mobtv_noti_window_t1

0x4f84,	// (0x0001bbec) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x000268e1) popup_mobtv_noti_window_t

0x3162,	// (0x00019dca) bg_popup_mobtv_noti_window_pane_g1

0x0229,	// (0x00016e91) sc_clock_pane

0x0229,	// (0x00016e91) main_fs_bigclock_pane

0xd2db,	// (0x00023f43) blid2_tripm_pane_t4_ParamLimits

0xd2db,	// (0x00023f43) blid2_tripm_pane_t4

0xdb6d,	// (0x000247d5) sc_clock_pane_g1_ParamLimits

0xdb6d,	// (0x000247d5) sc_clock_pane_g1

0xdb7b,	// (0x000247e3) sc_clock_pane_t1_ParamLimits

0xdb7b,	// (0x000247e3) sc_clock_pane_t1

0xdb8e,	// (0x000247f6) sc_clock_pane_t2_ParamLimits

0xdb8e,	// (0x000247f6) sc_clock_pane_t2

0xdba0,	// (0x00024808) sc_clock_pane_t3_ParamLimits

0xdba0,	// (0x00024808) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x000268e6) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x000268e6) sc_clock_pane_t

0xe875,	// (0x000254dd) main_fs_bigclock_indicator_pane_ParamLimits

0xe875,	// (0x000254dd) main_fs_bigclock_indicator_pane

0xdc2d,	// (0x00024895) main_fs_bigclock_pane_g1_ParamLimits

0xdc2d,	// (0x00024895) main_fs_bigclock_pane_g1

0xe881,	// (0x000254e9) main_fs_bigclock_pane_t1_ParamLimits

0xe881,	// (0x000254e9) main_fs_bigclock_pane_t1

0xe893,	// (0x000254fb) main_fs_bigclock_pane_t2_ParamLimits

0xe893,	// (0x000254fb) main_fs_bigclock_pane_t2

0xe8a7,	// (0x0002550f) main_fs_bigclock_pane_t3_ParamLimits

0xe8a7,	// (0x0002550f) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00026ae5) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00026ae5) main_fs_bigclock_pane_t

0x5bbf,	// (0x0001c827) main_fs_bigclock_indicator_pane_g1

0x4c50,	// (0x0001b8b8) ncim_query_content_pane_g2_ParamLimits

0x4c50,	// (0x0001b8b8) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x00026873) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x00026873) ncim_query_content_pane_g

0xdbb4,	// (0x0002481c) sc_clock_pane_t4_ParamLimits

0xdbb4,	// (0x0002481c) sc_clock_pane_t4

0x0299,	// (0x00016f01) main_radioblah_pane

0x3d96,	// (0x0001a9fe) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d96,	// (0x0001a9fe) cell_call4_button_pane_t1_copy1

0xd856,	// (0x000244be) main_ncimui_pane_t1_ParamLimits

0xd856,	// (0x000244be) main_ncimui_pane_t1

0xd870,	// (0x000244d8) main_ncimui_pane_t2_ParamLimits

0xd870,	// (0x000244d8) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x0002686c) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x0002686c) main_ncimui_pane_t

0x50ca,	// (0x0001bd32) main_radioblah_anim_pane_ParamLimits

0x50ca,	// (0x0001bd32) main_radioblah_anim_pane

0x50db,	// (0x0001bd43) main_radioblah_info_pane_ParamLimits

0x50db,	// (0x0001bd43) main_radioblah_info_pane

0x50ef,	// (0x0001bd57) main_radioblah_pane_t1_ParamLimits

0x50ef,	// (0x0001bd57) main_radioblah_pane_t1

0x510b,	// (0x0001bd73) main_radioblah_pane_t2_ParamLimits

0x510b,	// (0x0001bd73) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x00026907) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x00026907) main_radioblah_pane_t

0xdc7f,	// (0x000248e7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc7f,	// (0x000248e7) main_radioblah_rocker_ctrl_pane

0x515b,	// (0x0001bdc3) main_radioblah_info_pane_t1_ParamLimits

0x515b,	// (0x0001bdc3) main_radioblah_info_pane_t1

0xdcc4,	// (0x0002492c) main_radioblah_info_pane_t2_ParamLimits

0xdcc4,	// (0x0002492c) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00026910) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00026910) main_radioblah_info_pane_t

0x3162,	// (0x00019dca) main_radioblah_rocker_ctrl_pane_g1

0xdd74,	// (0x000249dc) main_radioblah_rocker_ctrl_pane_g2

0xdd7c,	// (0x000249e4) main_radioblah_rocker_ctrl_pane_g3

0xdd84,	// (0x000249ec) main_radioblah_rocker_ctrl_pane_g4

0xdd8c,	// (0x000249f4) main_radioblah_rocker_ctrl_pane_g5

0xdd94,	// (0x000249fc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00026919) main_radioblah_rocker_ctrl_pane_g

0xd813,	// (0x0002447b) main_cset_text2_pane_t1_copy1_ParamLimits

0x7b04,	// (0x0001e76c) cam4_image_uncrop_qvga_pane

0x7c35,	// (0x0001e89d) vid4_image_uncrop_qcif_pane

0x8250,	// (0x0001eeb8) cam6_image_uncrop_qvga_pane_ParamLimits

0x8250,	// (0x0001eeb8) cam6_image_uncrop_qvga_pane

0x48aa,	// (0x0001b512) vid6_image_uncrop_qcif_pane_ParamLimits

0x48aa,	// (0x0001b512) vid6_image_uncrop_qcif_pane

0x0229,	// (0x00016e91) bg_popup_preview_window_pane_cp03

0x4c02,	// (0x0001b86a) list_cset_text2_pane

0x4c0a,	// (0x0001b872) main_cset6_text2_pane_g1

0x4c12,	// (0x0001b87a) main_cset6_text2_pane_t1

0x5c34,	// (0x0001c89c) list_cset_text2_pane_t1_ParamLimits

0x5c34,	// (0x0001c89c) list_cset_text2_pane_t1

0x0299,	// (0x00016f01) main_radioblah_pane_ParamLimits

0xdb13,	// (0x0002477b) main_mobtv_info_pane_t3_ParamLimits

0xdb13,	// (0x0002477b) main_mobtv_info_pane_t3

0xdc6d,	// (0x000248d5) main_radioblah_pane_g1

0xdc98,	// (0x00024900) main_radioblah_info_pane_g1

0xdd19,	// (0x00024981) main_radioblah_info_pane_t3_ParamLimits

0xdd19,	// (0x00024981) main_radioblah_info_pane_t3

0x9d35,	// (0x0002099d) highlight_cell_cale_month_pane_ParamLimits

0x9d35,	// (0x0002099d) highlight_cell_cale_month_pane

0x0229,	// (0x00016e91) main_phob_fisheye_pane

0x34c2,	// (0x0001a12a) scroll_pane_cp0031_ParamLimits

0x34c2,	// (0x0001a12a) scroll_pane_cp0031

0x49b8,	// (0x0001b620) wait_bar_pane_cp08_ParamLimits

0xd5d4,	// (0x0002423c) cset_list_set_pane_copy1_ParamLimits

0x5195,	// (0x0001bdfd) highlight_cell_cale_month_pane_g1

0xdd9c,	// (0x00024a04) highlight_cell_cale_month_pane_t1

0x4532,	// (0x0001b19a) list_gen_pane_cp01

0x4042,	// (0x0001acaa) scroll_pane_01

0xddaa,	// (0x00024a12) list_single_double_fisheye_pane

0xddb3,	// (0x00024a1b) list_double_fisheye_pane_g1_ParamLimits

0xddb3,	// (0x00024a1b) list_double_fisheye_pane_g1

0xddbf,	// (0x00024a27) list_double_fisheye_pane_g2_ParamLimits

0xddbf,	// (0x00024a27) list_double_fisheye_pane_g2

0xddd3,	// (0x00024a3b) list_double_fisheye_pane_g3_ParamLimits

0xddd3,	// (0x00024a3b) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x00026926) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x00026926) list_double_fisheye_pane_g

0xddfc,	// (0x00024a64) list_double_fisheye_pane_t1_ParamLimits

0xddfc,	// (0x00024a64) list_double_fisheye_pane_t1

0xde17,	// (0x00024a7f) list_double_fisheye_pane_t2_ParamLimits

0xde17,	// (0x00024a7f) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00026931) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00026931) list_double_fisheye_pane_t

0x0229,	// (0x00016e91) main_call5_pane

0xdbda,	// (0x00024842) sc_swipe_pane_ParamLimits

0xdbda,	// (0x00024842) sc_swipe_pane

0xde45,	// (0x00024aad) call5_image_pane_ParamLimits

0xde45,	// (0x00024aad) call5_image_pane

0xde55,	// (0x00024abd) call5_swipe_1_pane_ParamLimits

0xde55,	// (0x00024abd) call5_swipe_1_pane

0xde61,	// (0x00024ac9) call5_swipe_2_pane_ParamLimits

0xde61,	// (0x00024ac9) call5_swipe_2_pane

0xde7b,	// (0x00024ae3) popup_call5_audio_first_window_ParamLimits

0xde7b,	// (0x00024ae3) popup_call5_audio_first_window

0x33ce,	// (0x0001a036) call5_swipe_1_pane_g1_ParamLimits

0x33ce,	// (0x0001a036) call5_swipe_1_pane_g1

0x519d,	// (0x0001be05) call5_swipe_1_pane_g2_ParamLimits

0x519d,	// (0x0001be05) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00026936) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00026936) call5_swipe_1_pane_g

0x51a9,	// (0x0001be11) call5_swipe_1_pane_t1_ParamLimits

0x51a9,	// (0x0001be11) call5_swipe_1_pane_t1

0x33ce,	// (0x0001a036) call5_swipe_2_pane_g1_ParamLimits

0x33ce,	// (0x0001a036) call5_swipe_2_pane_g1

0x51be,	// (0x0001be26) call5_swipe_2_pane_g2_ParamLimits

0x51be,	// (0x0001be26) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x0002693b) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x0002693b) call5_swipe_2_pane_g

0x51ca,	// (0x0001be32) call5_swipe_2_pane_t1_ParamLimits

0x51ca,	// (0x0001be32) call5_swipe_2_pane_t1

0x51df,	// (0x0001be47) sc_swipe_pane_g1_ParamLimits

0x51df,	// (0x0001be47) sc_swipe_pane_g1

0x51ec,	// (0x0001be54) sc_swipe_pane_g2_ParamLimits

0x51ec,	// (0x0001be54) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x00026940) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x00026940) sc_swipe_pane_g

0x51f8,	// (0x0001be60) sc_swipe_pane_t1_ParamLimits

0x51f8,	// (0x0001be60) sc_swipe_pane_t1

0x0229,	// (0x00016e91) main_cmail_launcher_pane

0xde89,	// (0x00024af1) aid_size_cell_cmail_l_ParamLimits

0xde89,	// (0x00024af1) aid_size_cell_cmail_l

0xde99,	// (0x00024b01) grid_cmail_l_pane_ParamLimits

0xde99,	// (0x00024b01) grid_cmail_l_pane

0xdea9,	// (0x00024b11) cell_cmail_l_pane_ParamLimits

0xdea9,	// (0x00024b11) cell_cmail_l_pane

0xdebd,	// (0x00024b25) cell_cmail_l_pane_g1_ParamLimits

0xdebd,	// (0x00024b25) cell_cmail_l_pane_g1

0xdec9,	// (0x00024b31) cell_cmail_l_pane_t1_ParamLimits

0xdec9,	// (0x00024b31) cell_cmail_l_pane_t1

0x520d,	// (0x0001be75) cell_cmail_l_pane_t2_ParamLimits

0x520d,	// (0x0001be75) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x00026945) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x00026945) cell_cmail_l_pane_t

0x0299,	// (0x00016f01) grid_highlight_pane_cp018_ParamLimits

0x0299,	// (0x00016f01) grid_highlight_pane_cp018

0x8395,	// (0x0001effd) main2_pane_ParamLimits

0x8395,	// (0x0001effd) main2_pane

0x0ac7,	// (0x0001772f) popup_sp_fs_action_menu_bg_pane_g1

0x0acf,	// (0x00017737) popup_sp_fs_action_menu_bg_pane_g2

0x0ad7,	// (0x0001773f) popup_sp_fs_action_menu_bg_pane_g3

0x0adf,	// (0x00017747) popup_sp_fs_action_menu_bg_pane_g4

0x0ae7,	// (0x0001774f) popup_sp_fs_action_menu_bg_pane_g5

0x0aef,	// (0x00017757) popup_sp_fs_action_menu_bg_pane_g6

0x0af7,	// (0x0001775f) popup_sp_fs_action_menu_bg_pane_g7

0x0aff,	// (0x00017767) popup_sp_fs_action_menu_bg_pane_g8

0x0b07,	// (0x0001776f) popup_sp_fs_action_menu_bg_pane_g9

0x0b0f,	// (0x00017777) popup_sp_fs_action_menu_bg_pane_g10

0x0b0f,	// (0x00017777) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00025e0f) popup_sp_fs_action_menu_bg_pane_g

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g3_g1

0x0ceb,	// (0x00017953) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_t3_g3_g2

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00025ebf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00025ebf) list_medium_line_x2_t3_g3_g

0x0d03,	// (0x0001796b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d03,	// (0x0001796b) list_medium_line_x2_t3_g3_t1

0x8eba,	// (0x0001fb22) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8eba,	// (0x0001fb22) list_medium_line_x2_t3_g3_t2

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00025ec6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00025ec6) list_medium_line_x2_t3_g3_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g2_g1

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00025ecd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00025ecd) list_medium_line_x2_t3_g2_g

0x0d2d,	// (0x00017995) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d2d,	// (0x00017995) list_medium_line_x2_t3_g2_t1

0x0d43,	// (0x000179ab) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d43,	// (0x000179ab) list_medium_line_x2_t3_g2_t2

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00025ed2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00025ed2) list_medium_line_x2_t3_g2_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t4_g4_g1

0x0d55,	// (0x000179bd) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d55,	// (0x000179bd) list_medium_line_x2_t4_g4_g2

0x0ceb,	// (0x00017953) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_t4_g4_g3

0x0d61,	// (0x000179c9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d61,	// (0x000179c9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00025ed9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00025ed9) list_medium_line_x2_t4_g4_g

0x8ecc,	// (0x0001fb34) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8ecc,	// (0x0001fb34) list_medium_line_x2_t4_g4_t1

0x8ee6,	// (0x0001fb4e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8ee6,	// (0x0001fb4e) list_medium_line_x2_t4_g4_t2

0x8efc,	// (0x0001fb64) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8efc,	// (0x0001fb64) list_medium_line_x2_t4_g4_t3

0x0d6d,	// (0x000179d5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d6d,	// (0x000179d5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00025ee2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00025ee2) list_medium_line_x2_t4_g4_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g4_g1

0x0d55,	// (0x000179bd) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d55,	// (0x000179bd) list_medium_line_x2_t2_g4_g2

0x0ceb,	// (0x00017953) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_t2_g4_g3

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00025f49) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00025f49) list_medium_line_x2_t2_g4_g

0x1057,	// (0x00017cbf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1057,	// (0x00017cbf) list_medium_line_x2_t2_g4_t1

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00025f52) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00025f52) list_medium_line_x2_t2_g4_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g3_g1

0x0ceb,	// (0x00017953) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_t2_g3_g2

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00025ebf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00025ebf) list_medium_line_x2_t2_g3_g

0x106c,	// (0x00017cd4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x106c,	// (0x00017cd4) list_medium_line_x2_t2_g3_t1

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00025f57) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00025f57) list_medium_line_x2_t2_g3_t

0x9e9d,	// (0x00020b05) main_sp_fs_list_pane_ParamLimits

0x9e9d,	// (0x00020b05) main_sp_fs_list_pane

0x9ea9,	// (0x00020b11) sp_fs_scroll_pane_ParamLimits

0x9ea9,	// (0x00020b11) sp_fs_scroll_pane

0x9eb5,	// (0x00020b1d) list_medium_line_x2_t3_t1

0x9ec5,	// (0x00020b2d) list_medium_line_x2_t3_t2

0x12d4,	// (0x00017f3c) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00025fa2) list_medium_line_x2_t3_t

0x9ed3,	// (0x00020b3b) list_medium_line_x3_t4_t1

0x9ee3,	// (0x00020b4b) list_medium_line_x3_t4_t2

0x12e2,	// (0x00017f4a) list_medium_line_x3_t4_t3

0x12d4,	// (0x00017f3c) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00025fa9) list_medium_line_x3_t4_t

0x9ef1,	// (0x00020b59) list_medium_line_x4_t5_t1

0x9f01,	// (0x00020b69) list_medium_line_x4_t5_t2

0x12e2,	// (0x00017f4a) list_medium_line_x4_t5_t3

0x12f0,	// (0x00017f58) list_medium_line_x4_t5_t4

0x12d4,	// (0x00017f3c) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00025fb2) list_medium_line_x4_t5_t

0x0cdf,	// (0x00017947) list_medium_line_t4_g4_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_t4_g4_g1

0x0d61,	// (0x000179c9) list_medium_line_t4_g4_g2_ParamLimits

0x0d61,	// (0x000179c9) list_medium_line_t4_g4_g2

0x12fe,	// (0x00017f66) list_medium_line_t4_g4_g3_ParamLimits

0x12fe,	// (0x00017f66) list_medium_line_t4_g4_g3

0x0cf7,	// (0x0001795f) list_medium_line_t4_g4_g4_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00025fbd) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00025fbd) list_medium_line_t4_g4_g

0x130a,	// (0x00017f72) list_medium_line_t4_g4_t1_ParamLimits

0x130a,	// (0x00017f72) list_medium_line_t4_g4_t1

0x131f,	// (0x00017f87) list_medium_line_t4_g4_t2_ParamLimits

0x131f,	// (0x00017f87) list_medium_line_t4_g4_t2

0x1334,	// (0x00017f9c) list_medium_line_t4_g4_t3_ParamLimits

0x1334,	// (0x00017f9c) list_medium_line_t4_g4_t3

0x0d18,	// (0x00017980) list_medium_line_t4_g4_t4_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00025fc6) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00025fc6) list_medium_line_t4_g4_t

0x9fad,	// (0x00020c15) chi_dic_find_pane_g1

0xaefe,	// (0x00021b66) main_tport_pane

0x41b7,	// (0x0001ae1f) list_medium_line_plain_t1

0x4209,	// (0x0001ae71) list_medium_line_t2_g2_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t2_g2_g1

0x4215,	// (0x0001ae7d) list_medium_line_t2_g2_g2_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x00026682) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x00026682) list_medium_line_t2_g2_g

0xcc03,	// (0x0002386b) list_medium_line_t2_g2_t1_ParamLimits

0xcc03,	// (0x0002386b) list_medium_line_t2_g2_t1

0xcc1d,	// (0x00023885) list_medium_line_t2_g2_t2_ParamLimits

0xcc1d,	// (0x00023885) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x00026687) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x00026687) list_medium_line_t2_g2_t

0x45d3,	// (0x0001b23b) aid_sp_fs_list_icon_a_sm

0x45db,	// (0x0001b243) aid_sp_fs_list_icon_d

0x45e3,	// (0x0001b24b) aid_sp_fs_text_primary

0x45ec,	// (0x0001b254) aid_sp_fs_text_secondary

0x45f5,	// (0x0001b25d) list_medium_line

0x45f5,	// (0x0001b25d) list_medium_line_g2

0x45f5,	// (0x0001b25d) list_medium_line_g3

0x45f5,	// (0x0001b25d) list_medium_line_plain

0x45f5,	// (0x0001b25d) list_medium_line_plain_t2

0x45f5,	// (0x0001b25d) list_medium_line_plain_t3

0x45f5,	// (0x0001b25d) list_medium_line_right_icon

0x45f5,	// (0x0001b25d) list_medium_line_right_iconx2

0x45f5,	// (0x0001b25d) list_medium_line_t2

0x45f5,	// (0x0001b25d) list_medium_line_t2_g2

0x45f5,	// (0x0001b25d) list_medium_line_t2_g3

0x45f5,	// (0x0001b25d) list_medium_line_t2_right_icon

0x45f5,	// (0x0001b25d) list_medium_line_t2_right_iconx2

0x45f5,	// (0x0001b25d) list_medium_line_t3

0x45f5,	// (0x0001b25d) list_medium_line_t3_g2

0x45f5,	// (0x0001b25d) list_medium_line_t3_g3

0x45f5,	// (0x0001b25d) list_medium_line_t3_right_iconx2

0x45fe,	// (0x0001b266) list_medium_line_t4_g4

0x4607,	// (0x0001b26f) list_medium_line_x2

0x4607,	// (0x0001b26f) list_medium_line_x2_t2_g2

0x4607,	// (0x0001b26f) list_medium_line_x2_t2_g3

0x4607,	// (0x0001b26f) list_medium_line_x2_t2_g4

0x4607,	// (0x0001b26f) list_medium_line_x2_t3

0x4607,	// (0x0001b26f) list_medium_line_x2_t3_g2

0x4607,	// (0x0001b26f) list_medium_line_x2_t3_g3

0x4607,	// (0x0001b26f) list_medium_line_x2_t3_g4

0x4607,	// (0x0001b26f) list_medium_line_x2_t4_g2

0x4607,	// (0x0001b26f) list_medium_line_x2_t4_g4

0x4610,	// (0x0001b278) list_medium_line_x3

0x4610,	// (0x0001b278) list_medium_line_x3_t4

0x4610,	// (0x0001b278) list_medium_line_x3_t4_g4

0x45fe,	// (0x0001b266) list_medium_line_x4_t4

0x45fe,	// (0x0001b266) list_medium_line_x4_t4_g7

0x45fe,	// (0x0001b266) list_medium_line_x4_t5

0x4619,	// (0x0001b281) list_single_fs_dyc_pane_ParamLimits

0x4619,	// (0x0001b281) list_single_fs_dyc_pane

0x0cdf,	// (0x00017947) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x4_t4_g7_g1

0x4b31,	// (0x0001b799) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4b31,	// (0x0001b799) list_medium_line_x4_t4_g7_g2

0x4b3d,	// (0x0001b7a5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4b3d,	// (0x0001b7a5) list_medium_line_x4_t4_g7_g3

0x4b4c,	// (0x0001b7b4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4b4c,	// (0x0001b7b4) list_medium_line_x4_t4_g7_g4

0x4b58,	// (0x0001b7c0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4b58,	// (0x0001b7c0) list_medium_line_x4_t4_g7_g5

0x4b67,	// (0x0001b7cf) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4b67,	// (0x0001b7cf) list_medium_line_x4_t4_g7_g6

0x4b76,	// (0x0001b7de) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4b76,	// (0x0001b7de) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x00026852) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x00026852) list_medium_line_x4_t4_g7_g

0x4b82,	// (0x0001b7ea) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4b82,	// (0x0001b7ea) list_medium_line_x4_t4_g7_t1

0x4b97,	// (0x0001b7ff) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4b97,	// (0x0001b7ff) list_medium_line_x4_t4_g7_t2

0x4bac,	// (0x0001b814) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4bac,	// (0x0001b814) list_medium_line_x4_t4_g7_t3

0x4bc1,	// (0x0001b829) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4bc1,	// (0x0001b829) list_medium_line_x4_t4_g7_t4

0x4bd3,	// (0x0001b83b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4bd3,	// (0x0001b83b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x00026861) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x00026861) list_medium_line_x4_t4_g7_t

0x4be5,	// (0x0001b84d) list_single_dyc_row_pane_ParamLimits

0x4be5,	// (0x0001b84d) list_single_dyc_row_pane

0xde39,	// (0x00024aa1) call5_gesture_pane_ParamLimits

0xde39,	// (0x00024aa1) call5_gesture_pane

0xde6d,	// (0x00024ad5) call5_windows_pane_ParamLimits

0xde6d,	// (0x00024ad5) call5_windows_pane

0xdedf,	// (0x00024b47) call5_swipe_1_pane_cp_ParamLimits

0xdedf,	// (0x00024b47) call5_swipe_1_pane_cp

0xdeeb,	// (0x00024b53) call5_swipe_2_pane_cp_ParamLimits

0xdeeb,	// (0x00024b53) call5_swipe_2_pane_cp

0x179f,	// (0x00018407) call5_image_pane_cp

0xdef7,	// (0x00024b5f) popup_call5_audio_first_window_cp_ParamLimits

0xdef7,	// (0x00024b5f) popup_call5_audio_first_window_cp

0x51df,	// (0x0001be47) call5_swipe_1_pane_g1_cp_ParamLimits

0x51df,	// (0x0001be47) call5_swipe_1_pane_g1_cp

0x521f,	// (0x0001be87) call5_swipe_1_pane_g2_cp

0x51f8,	// (0x0001be60) call5_swipe_1_pane_t1_cp_ParamLimits

0x51f8,	// (0x0001be60) call5_swipe_1_pane_t1_cp

0x51df,	// (0x0001be47) call5_swipe_2_pane_g1_cp_ParamLimits

0x51df,	// (0x0001be47) call5_swipe_2_pane_g1_cp

0x5227,	// (0x0001be8f) call5_swipe_2_pane_g2_cp

0x522f,	// (0x0001be97) call5_swipe_2_pane_t1_cp_ParamLimits

0x522f,	// (0x0001be97) call5_swipe_2_pane_t1_cp

0x0299,	// (0x00016f01) main_sp_fs_email_pane

0x5244,	// (0x0001beac) main_sp_fs_listscroll_pane_te

0x524d,	// (0x0001beb5) popup_sp_fs_action_menu_pane_ParamLimits

0x524d,	// (0x0001beb5) popup_sp_fs_action_menu_pane

0x3162,	// (0x00019dca) bg_sp_fs_ctrlbar_pane_g1

0x5291,	// (0x0001bef9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x529a,	// (0x0001bf02) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x52a3,	// (0x0001bf0b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3162,	// (0x00019dca) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x0002694a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2f47,	// (0x00019baf) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2f47,	// (0x00019baf) bg_sp_fs_ctrlbar_ddmenu_pane

0x52ac,	// (0x0001bf14) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x52ac,	// (0x0001bf14) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x52b8,	// (0x0001bf20) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x52b8,	// (0x0001bf20) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x00026953) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x00026953) main_sp_fs_ctrlbar_ddmenu_pane_g

0x52c4,	// (0x0001bf2c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x52c4,	// (0x0001bf2c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x52de,	// (0x0001bf46) list_medium_line_t2_right_icon_g1

0xdf05,	// (0x00024b6d) list_medium_line_t2_right_icon_t1

0xdf15,	// (0x00024b7d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x00026958) list_medium_line_t2_right_icon_t

0x2c5c,	// (0x000198c4) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2c5c,	// (0x000198c4) bg_sp_fs_ctrlbar_pane

0xdf7a,	// (0x00024be2) main_sp_fs_ctrlbar_button_pane_cp01

0xdf82,	// (0x00024bea) main_sp_fs_ctrlbar_ddmenu_pane

0x531e,	// (0x0001bf86) main_sp_fs_ctrlbar_pane_g1

0x532a,	// (0x0001bf92) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x0002695d) main_sp_fs_ctrlbar_pane_g

0x5336,	// (0x0001bf9e) main_sp_fs_ctrlbar_pane_t1

0xdf8c,	// (0x00024bf4) main_sp_fs_ctrlbar_pane

0xdfa6,	// (0x00024c0e) main_sp_fs_listscroll_pane_te_cp01

0xdfb7,	// (0x00024c1f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfb7,	// (0x00024c1f) popup_sp_fs_action_menu_pane_cp01

0x0299,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0299,	// (0x00016f01) bg_sp_fs_highlight_list_pane_cp01

0x535b,	// (0x0001bfc3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x535b,	// (0x0001bfc3) sp_fs_action_menu_list_gene_pane_g1

0x536a,	// (0x0001bfd2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x536a,	// (0x0001bfd2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00026967) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00026967) sp_fs_action_menu_list_gene_pane_g

0x5377,	// (0x0001bfdf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5377,	// (0x0001bfdf) sp_fs_action_menu_list_gene_pane_t1

0x538f,	// (0x0001bff7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x538f,	// (0x0001bff7) sp_fs_action_menu_list_gene_pane

0x53b0,	// (0x0001c018) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x53b0,	// (0x0001c018) popup_sp_fs_action_menu_bg_pane

0x53be,	// (0x0001c026) sp_fs_action_menu_list_pane_ParamLimits

0x53be,	// (0x0001c026) sp_fs_action_menu_list_pane

0x53e0,	// (0x0001c048) sp_fs_scroll_pane_cp01_ParamLimits

0x53e0,	// (0x0001c048) sp_fs_scroll_pane_cp01

0xdfcf,	// (0x00024c37) list_medium_line_plain_t2_t1

0xdfdf,	// (0x00024c47) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0002696c) list_medium_line_plain_t2_t

0xdfed,	// (0x00024c55) list_medium_line_plain_t3_t1

0xdffd,	// (0x00024c65) list_medium_line_plain_t3_t2

0xe00b,	// (0x00024c73) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x00026971) list_medium_line_plain_t3_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t2_g2_g1

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00025ecd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00025ecd) list_medium_line_x2_t2_g2_g

0x130a,	// (0x00017f72) list_medium_line_x2_t2_g2_t1_ParamLimits

0x130a,	// (0x00017f72) list_medium_line_x2_t2_g2_t1

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00026978) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00026978) list_medium_line_x2_t2_g2_t

0x0cdf,	// (0x00017947) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t4_g2_g1

0x0cf7,	// (0x0001795f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf265,	// (0x00025ecd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf265,	// (0x00025ecd) list_medium_line_x2_t4_g2_g

0xe019,	// (0x00024c81) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe019,	// (0x00024c81) list_medium_line_x2_t4_g2_t1

0xe033,	// (0x00024c9b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe033,	// (0x00024c9b) list_medium_line_x2_t4_g2_t2

0xe048,	// (0x00024cb0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe048,	// (0x00024cb0) list_medium_line_x2_t4_g2_t3

0x0d18,	// (0x00017980) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0002697d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0002697d) list_medium_line_x2_t4_g2_t

0x5406,	// (0x0001c06e) list_medium_line_t3_right_iconx2_g1

0x52de,	// (0x0001bf46) list_medium_line_t3_right_iconx2_g2

0xe05d,	// (0x00024cc5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00026986) list_medium_line_t3_right_iconx2_g

0xe065,	// (0x00024ccd) list_medium_line_t3_right_iconx2_t1

0xe075,	// (0x00024cdd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0002698d) list_medium_line_t3_right_iconx2_t

0x0cdf,	// (0x00017947) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x3_t4_g4_g1

0x0ceb,	// (0x00017953) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x3_t4_g4_g2

0x0d61,	// (0x000179c9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d61,	// (0x000179c9) list_medium_line_x3_t4_g4_g3

0x540e,	// (0x0001c076) list_medium_line_x3_t4_g4_g4_ParamLimits

0x540e,	// (0x0001c076) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00026992) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00026992) list_medium_line_x3_t4_g4_g

0xe083,	// (0x00024ceb) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe083,	// (0x00024ceb) list_medium_line_x3_t4_g4_t1

0xe09a,	// (0x00024d02) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe09a,	// (0x00024d02) list_medium_line_x3_t4_g4_t2

0x131f,	// (0x00017f87) list_medium_line_x3_t4_g4_t3_ParamLimits

0x131f,	// (0x00017f87) list_medium_line_x3_t4_g4_t3

0x541a,	// (0x0001c082) list_medium_line_x3_t4_g4_t4_ParamLimits

0x541a,	// (0x0001c082) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0002699b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0002699b) list_medium_line_x3_t4_g4_t

0xe0af,	// (0x00024d17) list_single_dyc_row_text_pane_t1_ParamLimits

0xe0af,	// (0x00024d17) list_single_dyc_row_text_pane_t1

0xe0e6,	// (0x00024d4e) list_single_dyc_row_text_pane_t2_ParamLimits

0xe0e6,	// (0x00024d4e) list_single_dyc_row_text_pane_t2

0x5437,	// (0x0001c09f) list_single_dyc_row_text_pane_t3_ParamLimits

0x5437,	// (0x0001c09f) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x000269a4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x000269a4) list_single_dyc_row_text_pane_t

0x5449,	// (0x0001c0b1) list_single_dyc_row_pane_g1_ParamLimits

0x5449,	// (0x0001c0b1) list_single_dyc_row_pane_g1

0x5455,	// (0x0001c0bd) list_single_dyc_row_pane_g2_ParamLimits

0x5455,	// (0x0001c0bd) list_single_dyc_row_pane_g2

0x5461,	// (0x0001c0c9) list_single_dyc_row_pane_g3_ParamLimits

0x5461,	// (0x0001c0c9) list_single_dyc_row_pane_g3

0x546d,	// (0x0001c0d5) list_single_dyc_row_pane_g4_ParamLimits

0x546d,	// (0x0001c0d5) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x000269ab) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x000269ab) list_single_dyc_row_pane_g

0x5479,	// (0x0001c0e1) list_single_dyc_row_text_pane_ParamLimits

0x5479,	// (0x0001c0e1) list_single_dyc_row_text_pane

0x0229,	// (0x00016e91) bg_sp_fs_scroll_pane

0x5498,	// (0x0001c100) thumb_sp_fs_scroll_pane

0x4209,	// (0x0001ae71) list_medium_line_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_g1

0x54a1,	// (0x0001c109) list_medium_line_t1_ParamLimits

0x54a1,	// (0x0001c109) list_medium_line_t1

0x0cdf,	// (0x00017947) list_medium_line_x2_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_g1

0x0ceb,	// (0x00017953) list_medium_line_x2_g2_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x000269b4) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x000269b4) list_medium_line_x2_g

0x54b6,	// (0x0001c11e) list_medium_line_x2_t1_ParamLimits

0x54b6,	// (0x0001c11e) list_medium_line_x2_t1

0x0cdf,	// (0x00017947) list_medium_line_x3_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x3_g1

0x0ceb,	// (0x00017953) list_medium_line_x3_g2_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x000269b4) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x000269b4) list_medium_line_x3_g

0x54b6,	// (0x0001c11e) list_medium_line_x3_t1_ParamLimits

0x54b6,	// (0x0001c11e) list_medium_line_x3_t1

0x54cc,	// (0x0001c134) thumb_sp_fs_scroll_pane_g1

0x54d5,	// (0x0001c13d) thumb_sp_fs_scroll_pane_g2

0x54de,	// (0x0001c146) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000269b9) thumb_sp_fs_scroll_pane_g

0x54cc,	// (0x0001c134) bg_sp_fs_scroll_pane_g1

0x54d5,	// (0x0001c13d) bg_sp_fs_scroll_pane_g2

0x54de,	// (0x0001c146) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x000269b9) bg_sp_fs_scroll_pane_g

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0cdf,	// (0x00017947) list_medium_line_x2_t3_g4_g1

0x0d55,	// (0x000179bd) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d55,	// (0x000179bd) list_medium_line_x2_t3_g4_g2

0x0ceb,	// (0x00017953) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0ceb,	// (0x00017953) list_medium_line_x2_t3_g4_g3

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cf7,	// (0x0001795f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00025f49) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00025f49) list_medium_line_x2_t3_g4_g

0xe140,	// (0x00024da8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe140,	// (0x00024da8) list_medium_line_x2_t3_g4_t1

0xe156,	// (0x00024dbe) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe156,	// (0x00024dbe) list_medium_line_x2_t3_g4_t2

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d18,	// (0x00017980) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x000269c0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x000269c0) list_medium_line_x2_t3_g4_t

0x4209,	// (0x0001ae71) list_medium_line_g2_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_g2_g1

0x4215,	// (0x0001ae7d) list_medium_line_g2_g2_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x00026682) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x00026682) list_medium_line_g2_g

0x54e7,	// (0x0001c14f) list_medium_line_g2_t1_ParamLimits

0x54e7,	// (0x0001c14f) list_medium_line_g2_t1

0x4209,	// (0x0001ae71) list_medium_line_t3_g2_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t3_g2_g1

0x4215,	// (0x0001ae7d) list_medium_line_t3_g2_g2_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x00026682) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x00026682) list_medium_line_t3_g2_g

0xe170,	// (0x00024dd8) list_medium_line_t3_g2_t1_ParamLimits

0xe170,	// (0x00024dd8) list_medium_line_t3_g2_t1

0xe187,	// (0x00024def) list_medium_line_t3_g2_t2_ParamLimits

0xe187,	// (0x00024def) list_medium_line_t3_g2_t2

0xe19c,	// (0x00024e04) list_medium_line_t3_g2_t3_ParamLimits

0xe19c,	// (0x00024e04) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000269c7) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000269c7) list_medium_line_t3_g2_t

0x52de,	// (0x0001bf46) list_medium_line_right_icon_g1

0x54fc,	// (0x0001c164) list_medium_line_right_icon_t1

0x4209,	// (0x0001ae71) list_medium_line_t2_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t2_g1

0xe1b1,	// (0x00024e19) list_medium_line_t2_t1_ParamLimits

0xe1b1,	// (0x00024e19) list_medium_line_t2_t1

0xe1cb,	// (0x00024e33) list_medium_line_t2_t2_ParamLimits

0xe1cb,	// (0x00024e33) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000269ce) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000269ce) list_medium_line_t2_t

0x4209,	// (0x0001ae71) list_medium_line_t3_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t3_g1

0xe1e0,	// (0x00024e48) list_medium_line_t3_t1_ParamLimits

0xe1e0,	// (0x00024e48) list_medium_line_t3_t1

0xe1fa,	// (0x00024e62) list_medium_line_t3_t2_ParamLimits

0xe1fa,	// (0x00024e62) list_medium_line_t3_t2

0xe20f,	// (0x00024e77) list_medium_line_t3_t3_ParamLimits

0xe20f,	// (0x00024e77) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000269d3) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000269d3) list_medium_line_t3_t

0x4209,	// (0x0001ae71) list_medium_line_g3_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_g3_g1

0x550a,	// (0x0001c172) list_medium_line_g3_g2_ParamLimits

0x550a,	// (0x0001c172) list_medium_line_g3_g2

0x4215,	// (0x0001ae7d) list_medium_line_g3_g3_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000269da) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000269da) list_medium_line_g3_g

0x5516,	// (0x0001c17e) list_medium_line_g3_t1_ParamLimits

0x5516,	// (0x0001c17e) list_medium_line_g3_t1

0x4209,	// (0x0001ae71) list_medium_line_t2_g3_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t2_g3_g1

0x550a,	// (0x0001c172) list_medium_line_t2_g3_g2_ParamLimits

0x550a,	// (0x0001c172) list_medium_line_t2_g3_g2

0x4215,	// (0x0001ae7d) list_medium_line_t2_g3_g3_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000269da) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000269da) list_medium_line_t2_g3_g

0xe224,	// (0x00024e8c) list_medium_line_t2_g3_t1_ParamLimits

0xe224,	// (0x00024e8c) list_medium_line_t2_g3_t1

0xe23e,	// (0x00024ea6) list_medium_line_t2_g3_t2_ParamLimits

0xe23e,	// (0x00024ea6) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000269e1) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000269e1) list_medium_line_t2_g3_t

0x4209,	// (0x0001ae71) list_medium_line_t3_g3_g1_ParamLimits

0x4209,	// (0x0001ae71) list_medium_line_t3_g3_g1

0x550a,	// (0x0001c172) list_medium_line_t3_g3_g2_ParamLimits

0x550a,	// (0x0001c172) list_medium_line_t3_g3_g2

0x4215,	// (0x0001ae7d) list_medium_line_t3_g3_g3_ParamLimits

0x4215,	// (0x0001ae7d) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000269da) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000269da) list_medium_line_t3_g3_g

0xe253,	// (0x00024ebb) list_medium_line_t3_g3_t1_ParamLimits

0xe253,	// (0x00024ebb) list_medium_line_t3_g3_t1

0xe267,	// (0x00024ecf) list_medium_line_t3_g3_t2_ParamLimits

0xe267,	// (0x00024ecf) list_medium_line_t3_g3_t2

0xe279,	// (0x00024ee1) list_medium_line_t3_g3_t3_ParamLimits

0xe279,	// (0x00024ee1) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000269e6) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000269e6) list_medium_line_t3_g3_t

0x5406,	// (0x0001c06e) list_medium_line_right_iconx2_g1

0x52de,	// (0x0001bf46) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000269ed) list_medium_line_right_iconx2_g

0x552b,	// (0x0001c193) list_medium_line_right_iconx2_t1

0x5406,	// (0x0001c06e) list_medium_line_t2_right_iconx2_g1

0x52de,	// (0x0001bf46) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000269ed) list_medium_line_t2_right_iconx2_g

0xe28b,	// (0x00024ef3) list_medium_line_t2_right_iconx2_t1

0xe29b,	// (0x00024f03) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000269f2) list_medium_line_t2_right_iconx2_t

0x5539,	// (0x0001c1a1) list_medium_line_x4_t4_t1

0xe2a9,	// (0x00024f11) list_medium_line_x4_t4_t2

0xe2b9,	// (0x00024f21) list_medium_line_x4_t4_t3

0xe2c9,	// (0x00024f31) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000269f7) list_medium_line_x4_t4_t

0xe302,	// (0x00024f6a) tport_appsw_pane_ParamLimits

0xe302,	// (0x00024f6a) tport_appsw_pane

0xe30e,	// (0x00024f76) tport_contact_pane_ParamLimits

0xe30e,	// (0x00024f76) tport_contact_pane

0xe31e,	// (0x00024f86) tport_listscroll_pane_ParamLimits

0xe31e,	// (0x00024f86) tport_listscroll_pane

0xe32e,	// (0x00024f96) cell_tport_appsw_pane_ParamLimits

0xe32e,	// (0x00024f96) cell_tport_appsw_pane

0x343f,	// (0x0001a0a7) tport_appsw_pane_g1_ParamLimits

0x343f,	// (0x0001a0a7) tport_appsw_pane_g1

0x5547,	// (0x0001c1af) tport_contact_pane_g1

0x4cd6,	// (0x0001b93e) tport_contact_pane_t1

0x5550,	// (0x0001c1b8) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00026a00) tport_contact_pane_t

0x555e,	// (0x0001c1c6) list_tport_pane

0x5567,	// (0x0001c1cf) scroll_pane_cp_030

0x5578,	// (0x0001c1e0) cell_tport_appsw_pane_g1

0x5588,	// (0x0001c1f0) cell_tport_appsw_pane_t1

0x0229,	// (0x00016e91) grid_highlight_pane_cp019

0xe359,	// (0x00024fc1) list_tport_double_graphic_pane_ParamLimits

0xe359,	// (0x00024fc1) list_tport_double_graphic_pane

0x0299,	// (0x00016f01) list_highlight_pane_cp023_ParamLimits

0x0299,	// (0x00016f01) list_highlight_pane_cp023

0xe36b,	// (0x00024fd3) list_tport_double_graphic_pane_g1_ParamLimits

0xe36b,	// (0x00024fd3) list_tport_double_graphic_pane_g1

0xe378,	// (0x00024fe0) list_tport_double_graphic_pane_t1_ParamLimits

0xe378,	// (0x00024fe0) list_tport_double_graphic_pane_t1

0xe38d,	// (0x00024ff5) list_tport_double_graphic_pane_t2_ParamLimits

0xe38d,	// (0x00024ff5) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00026a0c) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00026a0c) list_tport_double_graphic_pane_t

0x0229,	// (0x00016e91) main_cale_note_pane

0x7e81,	// (0x0001eae9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7e81,	// (0x0001eae9) cell_vitu2_function_top_wide_pane_cp01

0xdb27,	// (0x0002478f) wait_bar_pane_cp05_ParamLimits

0x0229,	// (0x00016e91) listscroll_cmail_pane

0x559e,	// (0x0001c206) list_cmail_pane

0xe3a9,	// (0x00025011) list_cmail_body_pane

0xe3c3,	// (0x0002502b) list_single_cmail_header_caption_pane

0xe3e8,	// (0x00025050) list_single_cmail_header_detail_pane_ParamLimits

0xe3e8,	// (0x00025050) list_single_cmail_header_detail_pane

0xe418,	// (0x00025080) list_single_cmail_header_caption_pane_t1

0xe426,	// (0x0002508e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe426,	// (0x0002508e) list_single_cmail_header_detail_pane_g1

0x55bf,	// (0x0001c227) list_single_cmail_header_detail_pane_g2_ParamLimits

0x55bf,	// (0x0001c227) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00026a11) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00026a11) list_single_cmail_header_detail_pane_g

0x55d8,	// (0x0001c240) list_single_cmail_header_detail_pane_t1_ParamLimits

0x55d8,	// (0x0001c240) list_single_cmail_header_detail_pane_t1

0x560e,	// (0x0001c276) list_single_cmail_header_editor_pane_bg_ParamLimits

0x560e,	// (0x0001c276) list_single_cmail_header_editor_pane_bg

0x4e85,	// (0x0001baed) list_cmail_body_pane_g1

0x5620,	// (0x0001c288) list_cmail_body_pane_t1

0x3f28,	// (0x0001ab90) list_single_cmail_header_editor_pane_bg_g1

0x0f76,	// (0x00017bde) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f38,	// (0x0001aba0) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3f30,	// (0x0001ab98) list_single_cmail_header_editor_pane_bg_g1_copy3

0x41e1,	// (0x0001ae49) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f58,	// (0x0001abc0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f48,	// (0x0001abb0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f50,	// (0x0001abb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0f56,	// (0x00017bbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe460,	// (0x000250c8) calenote_gesture_pane_ParamLimits

0xe460,	// (0x000250c8) calenote_gesture_pane

0xe47a,	// (0x000250e2) calenote_window_pane_ParamLimits

0xe47a,	// (0x000250e2) calenote_window_pane

0x562e,	// (0x0001c296) popup_note_window_cp01

0xe492,	// (0x000250fa) calenote_swipe_1_pane_ParamLimits

0xe492,	// (0x000250fa) calenote_swipe_1_pane

0xdeeb,	// (0x00024b53) calenote_swipe_2_pane_ParamLimits

0xdeeb,	// (0x00024b53) calenote_swipe_2_pane

0x51df,	// (0x0001be47) calenote_swipe_1_pane_g1_ParamLimits

0x51df,	// (0x0001be47) calenote_swipe_1_pane_g1

0x51ec,	// (0x0001be54) calenote_swipe_1_pane_g2_ParamLimits

0x51ec,	// (0x0001be54) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x00026940) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x00026940) calenote_swipe_1_pane_g

0x5640,	// (0x0001c2a8) calenote_swipe_1_pane_t1_ParamLimits

0x5640,	// (0x0001c2a8) calenote_swipe_1_pane_t1

0x51df,	// (0x0001be47) calenote_swipe_2_pane_g1_ParamLimits

0x51df,	// (0x0001be47) calenote_swipe_2_pane_g1

0x565f,	// (0x0001c2c7) calenote_swipe_2_pane_g2_ParamLimits

0x565f,	// (0x0001c2c7) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00026a1d) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00026a1d) calenote_swipe_2_pane_g

0x566b,	// (0x0001c2d3) calenote_swipe_2_pane_t1_ParamLimits

0x566b,	// (0x0001c2d3) calenote_swipe_2_pane_t1

0x0229,	// (0x00016e91) main_mup_navstr_pane

0xbbfd,	// (0x00022865) main_mup3_pane_t7_ParamLimits

0xbbfd,	// (0x00022865) main_mup3_pane_t7

0x7787,	// (0x0001e3ef) main_mp4_pane_g6_ParamLimits

0x7787,	// (0x0001e3ef) main_mp4_pane_g6

0x7a7a,	// (0x0001e6e2) main_image3_pane_t4_ParamLimits

0x7a7a,	// (0x0001e6e2) main_image3_pane_t4

0xe4a5,	// (0x0002510d) popup_navstr_preview_pane_ParamLimits

0xe4a5,	// (0x0002510d) popup_navstr_preview_pane

0xe4b1,	// (0x00025119) scroll_navstr_pane_ParamLimits

0xe4b1,	// (0x00025119) scroll_navstr_pane

0x0229,	// (0x00016e91) bg_popup_preview_window_pane_cp04

0x5692,	// (0x0001c2fa) popup_navstr_preview_pane_t1

0xe4bd,	// (0x00025125) scroll_navstr_pane_g1_ParamLimits

0xe4bd,	// (0x00025125) scroll_navstr_pane_g1

0xe4ca,	// (0x00025132) scroll_navstr_pane_t1_ParamLimits

0xe4ca,	// (0x00025132) scroll_navstr_pane_t1

0x5637,	// (0x0001c29f) bg_button_pane_cp014

0x5637,	// (0x0001c29f) bg_button_pane_cp030

0xdddf,	// (0x00024a47) list_double_fisheye_pane_g4_ParamLimits

0xdddf,	// (0x00024a47) list_double_fisheye_pane_g4

0xddeb,	// (0x00024a53) list_double_fisheye_pane_g5_ParamLimits

0xddeb,	// (0x00024a53) list_double_fisheye_pane_g5

0x55a6,	// (0x0001c20e) sp_fs_scroll_pane_cp03

0x531e,	// (0x0001bf86) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x532a,	// (0x0001bf92) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x0002695d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5336,	// (0x0001bf9e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe39f,	// (0x00025007) sp_fs_scroll_pane_cp02

0x0b7a,	// (0x000177e2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0b7a,	// (0x000177e2) popup_sp_fs_calendar_preview_list_single_pane

0x0229,	// (0x00016e91) main_cam6_pano_pane

0x0299,	// (0x00016f01) main_mup3_pane_ParamLimits

0x0229,	// (0x00016e91) main_phacti_pane

0xd9fc,	// (0x00024664) bg_button_pane_cp11

0xda14,	// (0x0002467c) main_mobtv_info_pane_g2_ParamLimits

0xda14,	// (0x0002467c) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x000268bd) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x000268bd) main_mobtv_info_pane_g

0xdbc6,	// (0x0002482e) sc_clock_pane_t5_ParamLimits

0xdbc6,	// (0x0002482e) sc_clock_pane_t5

0xdc6d,	// (0x000248d5) main_radioblah_pane_g1_ParamLimits

0x5123,	// (0x0001bd8b) main_radioblah_pane_t3_ParamLimits

0x5123,	// (0x0001bd8b) main_radioblah_pane_t3

0x5143,	// (0x0001bdab) main_radioblah_pane_t4_ParamLimits

0x5143,	// (0x0001bdab) main_radioblah_pane_t4

0xdc8b,	// (0x000248f3) main_radioblah_text_pane_ParamLimits

0xdc8b,	// (0x000248f3) main_radioblah_text_pane

0xdc98,	// (0x00024900) main_radioblah_info_pane_g1_ParamLimits

0xdd2d,	// (0x00024995) main_radioblah_info_pane_t4_ParamLimits

0xdd2d,	// (0x00024995) main_radioblah_info_pane_t4

0x0299,	// (0x00016f01) main_sp_fs_calendar_pane

0xe4dc,	// (0x00025144) main_phacti_pane_g1

0xe4e4,	// (0x0002514c) phacti_note_pane_ParamLimits

0xe4e4,	// (0x0002514c) phacti_note_pane

0x56a9,	// (0x0001c311) phacti_term_pane_ParamLimits

0x56a9,	// (0x0001c311) phacti_term_pane

0x56be,	// (0x0001c326) phacti_note_pane_t1_ParamLimits

0x56be,	// (0x0001c326) phacti_note_pane_t1

0x56d5,	// (0x0001c33d) phacti_term_pane_g1

0x56dd,	// (0x0001c345) phacti_term_pane_t1_ParamLimits

0x56dd,	// (0x0001c345) phacti_term_pane_t1

0x5707,	// (0x0001c36f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0cd7,	// (0x0001793f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00026a27) popup_sp_fs_calendar_preview_list_single_pane_g

0x570f,	// (0x0001c377) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x570f,	// (0x0001c377) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5724,	// (0x0001c38c) aid_popup_sp_fs_bg_corner_pane

0x3162,	// (0x00019dca) popup_sp_fs_calendar_preview_bg_pane_g1

0x0229,	// (0x00016e91) popup_sp_fs_calendar_preview_bg_pane

0x572c,	// (0x0001c394) popup_sp_fs_calendar_preview_list_pane

0x0299,	// (0x00016f01) bg_main_sp_fs_cale_pane_ParamLimits

0x0299,	// (0x00016f01) bg_main_sp_fs_cale_pane

0x573d,	// (0x0001c3a5) listscroll_cale_mrui_pane_ParamLimits

0x573d,	// (0x0001c3a5) listscroll_cale_mrui_pane

0x5751,	// (0x0001c3b9) listscroll_sp_fs_schedule_track_pane

0x575a,	// (0x0001c3c2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x575a,	// (0x0001c3c2) main_sp_fs_ctrlbar_pane_cp01

0x576b,	// (0x0001c3d3) main_sp_fs_ribbon_pane

0x5773,	// (0x0001c3db) popup_sp_fs_cale_preview_window

0xe527,	// (0x0002518f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe527,	// (0x0002518f) list_single_sp_fs_schedule_track_pane

0x39ee,	// (0x0001a656) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x39ee,	// (0x0001a656) bg_sp_fs_highlight_list_pane_cp03

0xe546,	// (0x000251ae) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe546,	// (0x000251ae) list_single_sp_fs_schedule_track_pane_g1

0xe552,	// (0x000251ba) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe552,	// (0x000251ba) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00026a2c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00026a2c) list_single_sp_fs_schedule_track_pane_g

0xe55e,	// (0x000251c6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe55e,	// (0x000251c6) list_single_sp_fs_schedule_track_pane_t1

0xe576,	// (0x000251de) sp_fs_schedule_track_pane_ParamLimits

0xe576,	// (0x000251de) sp_fs_schedule_track_pane

0x5785,	// (0x0001c3ed) sp_fs_schedule_track_pane_g1

0x578d,	// (0x0001c3f5) sp_fs_schedule_track_pane_g2

0x5795,	// (0x0001c3fd) sp_fs_schedule_track_pane_g3

0x579d,	// (0x0001c405) sp_fs_schedule_track_pane_g4

0x57a5,	// (0x0001c40d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00026a31) sp_fs_schedule_track_pane_g

0x3f28,	// (0x0001ab90) bg_sp_fs_schedule_viewer_highlight_g1

0x0f76,	// (0x00017bde) bg_sp_fs_schedule_viewer_highlight_g2

0x3f30,	// (0x0001ab98) bg_sp_fs_schedule_viewer_highlight_g3

0x3f38,	// (0x0001aba0) bg_sp_fs_schedule_viewer_highlight_g4

0x41e1,	// (0x0001ae49) bg_sp_fs_schedule_viewer_highlight_g5

0x3f48,	// (0x0001abb0) bg_sp_fs_schedule_viewer_highlight_g6

0x3f50,	// (0x0001abb8) bg_sp_fs_schedule_viewer_highlight_g7

0x3f58,	// (0x0001abc0) bg_sp_fs_schedule_viewer_highlight_g8

0x0f56,	// (0x00017bbe) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00026a3c) bg_sp_fs_schedule_viewer_highlight_g

0x0229,	// (0x00016e91) bg_main_sp_fs_ribbon_pane

0xe586,	// (0x000251ee) main_sp_fs_ribbon_pane_g1

0x57ad,	// (0x0001c415) main_sp_fs_ribbon_pane_t1

0xe58f,	// (0x000251f7) main_sp_fs_ribbon_pane_t2

0x57bc,	// (0x0001c424) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00026a4f) main_sp_fs_ribbon_pane_t

0x57cb,	// (0x0001c433) main_sp_fs_ribbon_scheduler_pane

0x57d3,	// (0x0001c43b) bg_main_sp_fs_ribbon_pane_g1

0x57dc,	// (0x0001c444) bg_main_sp_fs_ribbon_pane_g2

0x57e5,	// (0x0001c44d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00026a56) bg_main_sp_fs_ribbon_pane_g

0x57ed,	// (0x0001c455) main_sp_fs_ribbon_scheduler_pane_g1

0x57f6,	// (0x0001c45e) main_sp_fs_ribbon_scheduler_pane_g2

0x57ff,	// (0x0001c467) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00026a5d) main_sp_fs_ribbon_scheduler_pane_g

0x5808,	// (0x0001c470) list_cale_mrui_pane

0xe59e,	// (0x00025206) sp_fs_scroll_pane_cp07_ParamLimits

0xe59e,	// (0x00025206) sp_fs_scroll_pane_cp07

0xe5b4,	// (0x0002521c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe5b4,	// (0x0002521c) bg_sp_fs_schedule_viewer_highlight

0x5811,	// (0x0001c479) list_single_sp_fs_schedule_track_pane_cp01

0x5819,	// (0x0001c481) list_sp_fs_schedule_track_pane

0x5821,	// (0x0001c489) sp_fs_scroll_pane_cp06_ParamLimits

0x5821,	// (0x0001c489) sp_fs_scroll_pane_cp06

0x3162,	// (0x00019dca) bgmain_sp_fs_calendar_pane_g1

0xe5c1,	// (0x00025229) list_single_cale_mrui_pane_ParamLimits

0xe5c1,	// (0x00025229) list_single_cale_mrui_pane

0x5833,	// (0x0001c49b) list_single_cale_mrui_row_pane_ParamLimits

0x5833,	// (0x0001c49b) list_single_cale_mrui_row_pane

0x5840,	// (0x0001c4a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5840,	// (0x0001c4a8) list_single_cale_mrui_row_pane_g1

0x5885,	// (0x0001c4ed) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5885,	// (0x0001c4ed) list_single_cale_mrui_row_pane_t1

0xe5ec,	// (0x00025254) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe5ec,	// (0x00025254) list_single_cale_mrui_row_pane_t2

0x5897,	// (0x0001c4ff) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5897,	// (0x0001c4ff) list_single_cale_mrui_row_pane_t3

0x58c6,	// (0x0001c52e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x58c6,	// (0x0001c52e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00026a6b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00026a6b) list_single_cale_mrui_row_pane_t

0xe652,	// (0x000252ba) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe652,	// (0x000252ba) list_single_cmail_header_editor_pane_bg_cp01

0xe672,	// (0x000252da) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe672,	// (0x000252da) list_single_cmail_header_editor_pane_bg_cp02

0xe68e,	// (0x000252f6) main_radioblah_text_pane_t1_ParamLimits

0xe68e,	// (0x000252f6) main_radioblah_text_pane_t1

0x58f5,	// (0x0001c55d) cam6_indi_pane_cp01

0x58fd,	// (0x0001c565) cam6_mode_pane_cp01

0x5905,	// (0x0001c56d) cam6_pano_pane

0x590e,	// (0x0001c576) cam6_zoom_pane_cp01

0x5916,	// (0x0001c57e) cam6_pano_image_pane

0x5921,	// (0x0001c589) cam6_pano_pane_g1

0x4e85,	// (0x0001baed) cam6_pano_pane_g2

0x592a,	// (0x0001c592) cam6_pano_pane_g3

0x5933,	// (0x0001c59b) cam6_pano_pane_g4

0x3710,	// (0x0001a378) cam6_pano_pane_g5

0x593c,	// (0x0001c5a4) cam6_pano_pane_g6

0x513b,	// (0x0001bda3) cam6_pano_pane_g7

0x5946,	// (0x0001c5ae) cam6_pano_pane_g8

0x594f,	// (0x0001c5b7) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00026a74) cam6_pano_pane_g

0x0229,	// (0x00016e91) main_browser_tag_pane

0x568a,	// (0x0001c2f2) grid_navstr_albumart_pane

0x595a,	// (0x0001c5c2) cell_navstr_albumart_pane_ParamLimits

0x595a,	// (0x0001c5c2) cell_navstr_albumart_pane

0x597d,	// (0x0001c5e5) cell_navstr_albumart_pane_g1

0x2a79,	// (0x000196e1) cell_navstr_albumart_pane_g2

0x2a89,	// (0x000196f1) cell_navstr_albumart_pane_g3

0x2a81,	// (0x000196e9) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x00026a87) cell_navstr_albumart_pane_g

0xe6a9,	// (0x00025311) bt_list_pane_ParamLimits

0xe6a9,	// (0x00025311) bt_list_pane

0xe6c9,	// (0x00025331) bt_list_pane_t1

0xe6d8,	// (0x00025340) bt_list_pane_t2

0x0001,

0xfe28,	// (0x00026a90) bt_list_pane_t

0x0229,	// (0x00016e91) main_cale_prevew_pane

0xe6e7,	// (0x0002534f) popup_cale_preview_window_ParamLimits

0xe6e7,	// (0x0002534f) popup_cale_preview_window

0x0299,	// (0x00016f01) bg_popup_preview_window_pane_cp05_ParamLimits

0x0299,	// (0x00016f01) bg_popup_preview_window_pane_cp05

0x5985,	// (0x0001c5ed) list_cale_preview_pane_ParamLimits

0x5985,	// (0x0001c5ed) list_cale_preview_pane

0x5c22,	// (0x0001c88a) list_double_cale_preview_pane_ParamLimits

0x5c22,	// (0x0001c88a) list_double_cale_preview_pane

0xe700,	// (0x00025368) list_single_cale_preview_pane_ParamLimits

0xe700,	// (0x00025368) list_single_cale_preview_pane

0xe716,	// (0x0002537e) list_single_cale_preview_pane_g1

0xe71e,	// (0x00025386) list_single_cale_preview_pane_t1_ParamLimits

0xe71e,	// (0x00025386) list_single_cale_preview_pane_t1

0xe733,	// (0x0002539b) list_double_cale_preview_pane_g1

0xe73b,	// (0x000253a3) list_double_cale_preview_pane_t1_ParamLimits

0xe73b,	// (0x000253a3) list_double_cale_preview_pane_t1

0xe750,	// (0x000253b8) list_double_cale_preview_pane_t2_ParamLimits

0xe750,	// (0x000253b8) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00026a95) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00026a95) list_double_cale_preview_pane_t

0x0229,	// (0x00016e91) main_ezdial_pane

0x0299,	// (0x00016f01) main_sp_fs_email_pane_ParamLimits

0xdf23,	// (0x00024b8b) cmail_ddmenu_btn01_pane_ParamLimits

0xdf23,	// (0x00024b8b) cmail_ddmenu_btn01_pane

0xdf40,	// (0x00024ba8) cmail_ddmenu_btn02_pane_ParamLimits

0xdf40,	// (0x00024ba8) cmail_ddmenu_btn02_pane

0xdf5e,	// (0x00024bc6) cmail_ddmenu_btn03_pane_ParamLimits

0xdf5e,	// (0x00024bc6) cmail_ddmenu_btn03_pane

0xdf8c,	// (0x00024bf4) main_sp_fs_ctrlbar_pane_ParamLimits

0xdfa6,	// (0x00024c0e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe3a9,	// (0x00025011) list_cmail_body_pane_ParamLimits

0x55b6,	// (0x0001c21e) bg_button_pane_cp12

0x55cb,	// (0x0001c233) list_single_cmail_header_detail_pane_g3_ParamLimits

0x55cb,	// (0x0001c233) list_single_cmail_header_detail_pane_g3

0xe43c,	// (0x000250a4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe43c,	// (0x000250a4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00026a18) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00026a18) list_single_cmail_header_detail_pane_t

0x56f2,	// (0x0001c35a) phacti_term_pane_t2_ParamLimits

0x56f2,	// (0x0001c35a) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00026a22) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00026a22) phacti_term_pane_t

0x5991,	// (0x0001c5f9) aid_size_list_single_double

0xe768,	// (0x000253d0) popup_ezdial_listscroll_window

0xe789,	// (0x000253f1) popup_number_entry_window_cp01

0x179f,	// (0x00018407) bg_popup_call_pane_cp09

0x599d,	// (0x0001c605) ezdial_list_pane

0x59a5,	// (0x0001c60d) scroll_pane_cp23

0x2f47,	// (0x00019baf) bg_button_pane_cp028_ParamLimits

0x2f47,	// (0x00019baf) bg_button_pane_cp028

0xe797,	// (0x000253ff) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe797,	// (0x000253ff) cmail_ddmenu_btn01_pane_g1

0xe7a9,	// (0x00025411) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe7a9,	// (0x00025411) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x00026a9a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x00026a9a) cmail_ddmenu_btn01_pane_g

0x59ad,	// (0x0001c615) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x59ad,	// (0x0001c615) cmail_ddmenu_btn01_pane_t1

0x2c5c,	// (0x000198c4) bg_button_pane_cp029_ParamLimits

0x2c5c,	// (0x000198c4) bg_button_pane_cp029

0xe7a9,	// (0x00025411) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe7a9,	// (0x00025411) cmail_ddmenu_btn02_pane_g1

0xe7c1,	// (0x00025429) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe7c1,	// (0x00025429) cmail_ddmenu_btn02_pane_t1

0x39ee,	// (0x0001a656) bg_button_pane_cp031_ParamLimits

0x39ee,	// (0x0001a656) bg_button_pane_cp031

0xe7a9,	// (0x00025411) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe7a9,	// (0x00025411) cmail_ddmenu_btn03_pane_g1

0xe7c1,	// (0x00025429) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe7c1,	// (0x00025429) cmail_ddmenu_btn03_pane_t1

0xc461,	// (0x000230c9) cell_dialer2_keypad_pane_t1_ParamLimits

0xc47b,	// (0x000230e3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc47b,	// (0x000230e3) cell_dialer2_keypad_pane_t1_copy1

0xd89c,	// (0x00024504) ncimui_group_button_pane

0x0299,	// (0x00016f01) main_sp_fs_calendar_pane_ParamLimits

0xe3c3,	// (0x0002502b) list_single_cmail_header_caption_pane_ParamLimits

0x5734,	// (0x0001c39c) aid_recal_txt_sm_pane

0x0229,	// (0x00016e91) mian_recal_day_pane

0x5773,	// (0x0001c3db) popup_sp_fs_cale_preview_window_ParamLimits

0x0229,	// (0x00016e91) list_recal_day_pane

0x59e5,	// (0x0001c64d) list_single_recal_day_pane_ParamLimits

0x59e5,	// (0x0001c64d) list_single_recal_day_pane

0x59f7,	// (0x0001c65f) list_single_recal_day_pane_g1_ParamLimits

0x59f7,	// (0x0001c65f) list_single_recal_day_pane_g1

0x5a03,	// (0x0001c66b) list_single_recal_day_pane_g2_ParamLimits

0x5a03,	// (0x0001c66b) list_single_recal_day_pane_g2

0x5a13,	// (0x0001c67b) list_single_recal_day_pane_g3_ParamLimits

0x5a13,	// (0x0001c67b) list_single_recal_day_pane_g3

0xe7e5,	// (0x0002544d) list_single_recal_day_pane_g4_ParamLimits

0xe7e5,	// (0x0002544d) list_single_recal_day_pane_g4

0x5a1f,	// (0x0001c687) list_single_recal_day_pane_g5_ParamLimits

0x5a1f,	// (0x0001c687) list_single_recal_day_pane_g5

0x5a2f,	// (0x0001c697) list_single_recal_day_pane_g6_ParamLimits

0x5a2f,	// (0x0001c697) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x00026aa9) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x00026aa9) list_single_recal_day_pane_g

0x5a46,	// (0x0001c6ae) list_single_recal_day_pane_t1

0x5a58,	// (0x0001c6c0) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00026ab4) list_single_recal_day_pane_t

0xe805,	// (0x0002546d) ncimui_query_button_pane_ParamLimits

0xe805,	// (0x0002546d) ncimui_query_button_pane

0xe815,	// (0x0002547d) ncimui_query_button_pane_t1_ParamLimits

0xe815,	// (0x0002547d) ncimui_query_button_pane_t1

0x5a6d,	// (0x0001c6d5) ncimui_query_button_pane_t2_ParamLimits

0x5a6d,	// (0x0001c6d5) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026ab9) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026ab9) ncimui_query_button_pane_t

0xe828,	// (0x00025490) query_button_pane_ParamLimits

0xe828,	// (0x00025490) query_button_pane

0x0229,	// (0x00016e91) bg_button_pane_cp0028

0x5a80,	// (0x0001c6e8) query_button_pane_t1

0xaefe,	// (0x00021b66) main_tport_pane_ParamLimits

0xe2d9,	// (0x00024f41) bg_popup_window_pane_cp01_ParamLimits

0xe2d9,	// (0x00024f41) bg_popup_window_pane_cp01

0xe2e6,	// (0x00024f4e) heading_pane_cp08_ParamLimits

0xe2e6,	// (0x00024f4e) heading_pane_cp08

0xe2f4,	// (0x00024f5c) heading_pane_cp07_ParamLimits

0xe2f4,	// (0x00024f5c) heading_pane_cp07

0x5578,	// (0x0001c1e0) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00026a05) cell_tport_appsw_pane_g

0x1920,	// (0x00018588) input_candi_list_open_g1

0x1175,	// (0x00017ddd) list_cale_time_pane_g6_ParamLimits

0x1175,	// (0x00017ddd) list_cale_time_pane_g6

0xb64a,	// (0x000222b2) aid_size_touch_calib_1_ParamLimits

0xb64a,	// (0x000222b2) aid_size_touch_calib_1

0xb656,	// (0x000222be) aid_size_touch_calib_2_ParamLimits

0xb656,	// (0x000222be) aid_size_touch_calib_2

0xb664,	// (0x000222cc) aid_size_touch_calib_3_ParamLimits

0xb664,	// (0x000222cc) aid_size_touch_calib_3

0xb674,	// (0x000222dc) aid_size_touch_calib_4_ParamLimits

0xb674,	// (0x000222dc) aid_size_touch_calib_4

0xb682,	// (0x000222ea) main_touch_calib_button_group_pane_ParamLimits

0xb682,	// (0x000222ea) main_touch_calib_button_group_pane

0xb690,	// (0x000222f8) main_touch_calib_pane_g1_ParamLimits

0xb69c,	// (0x00022304) main_touch_calib_pane_g2_ParamLimits

0xb6a8,	// (0x00022310) main_touch_calib_pane_g3_ParamLimits

0xb6b4,	// (0x0002231c) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000263d8) main_touch_calib_pane_g_ParamLimits

0xb6c0,	// (0x00022328) main_touch_calib_pane_t1_ParamLimits

0xb6d7,	// (0x0002233f) main_touch_calib_pane_t2_ParamLimits

0xb6ee,	// (0x00022356) main_touch_calib_pane_t3_ParamLimits

0xb702,	// (0x0002236a) main_touch_calib_pane_t4_ParamLimits

0xb716,	// (0x0002237e) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000263e1) main_touch_calib_pane_t_ParamLimits

0x34e6,	// (0x0001a14e) list_single_fp_cale_pane_g3_ParamLimits

0x34e6,	// (0x0001a14e) list_single_fp_cale_pane_g3

0x7c77,	// (0x0001e8df) bg_button_pane_cp012_ParamLimits

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp03_ParamLimits

0x8087,	// (0x0001ecef) cell_vitu2_function_top_pane_g1_ParamLimits

0x7c77,	// (0x0001e8df) bg_vkb2_func_pane_cp04_ParamLimits

0xd83a,	// (0x000244a2) main_ncimui_button_group_pane_ParamLimits

0xd83a,	// (0x000244a2) main_ncimui_button_group_pane

0xd88a,	// (0x000244f2) main_ncimui_pane_t3_ParamLimits

0xd88a,	// (0x000244f2) main_ncimui_pane_t3

0x56a0,	// (0x0001c308) phacti_button_group_pane

0x5991,	// (0x0001c5f9) aid_size_list_single_double_ParamLimits

0xe768,	// (0x000253d0) popup_ezdial_listscroll_window_ParamLimits

0xe789,	// (0x000253f1) popup_number_entry_window_cp01_ParamLimits

0xe835,	// (0x0002549d) phacti_button_pane_ParamLimits

0xe835,	// (0x0002549d) phacti_button_pane

0x0229,	// (0x00016e91) bg_button_pane_cp14

0x5a8e,	// (0x0001c6f6) phacti_button_pane_t1

0xe846,	// (0x000254ae) main_touch_calib_button_pane_ParamLimits

0xe846,	// (0x000254ae) main_touch_calib_button_pane

0x0a0a,	// (0x00017672) bg_button_pane_cp18_ParamLimits

0x0a0a,	// (0x00017672) bg_button_pane_cp18

0x5a9c,	// (0x0001c704) main_touch_calib_button_pane_t1_ParamLimits

0x5a9c,	// (0x0001c704) main_touch_calib_button_pane_t1

0x5ab2,	// (0x0001c71a) main_touch_calib_button_pane_t2_ParamLimits

0x5ab2,	// (0x0001c71a) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00026abe) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00026abe) main_touch_calib_button_pane_t

0x0229,	// (0x00016e91) cell_ncimui_button_pane

0x0229,	// (0x00016e91) bg_button_pane_cp032

0x5ad0,	// (0x0001c738) cell_ncimui_button_pane_t1

0x798d,	// (0x0001e5f5) image3_infobar_pane_ParamLimits

0x798d,	// (0x0001e5f5) image3_infobar_pane

0xdbe8,	// (0x00024850) fs_bigclock_status_pane_ParamLimits

0xdbe8,	// (0x00024850) fs_bigclock_status_pane

0xdbf5,	// (0x0002485d) main_fs_bigclock_clock_pane_ParamLimits

0xdbf5,	// (0x0002485d) main_fs_bigclock_clock_pane

0xdc0b,	// (0x00024873) main_fs_bigclock_indi_pane_ParamLimits

0xdc0b,	// (0x00024873) main_fs_bigclock_indi_pane

0xdc3b,	// (0x000248a3) main_fs_bigclock_swipe_pane_ParamLimits

0xdc3b,	// (0x000248a3) main_fs_bigclock_swipe_pane

0x0229,	// (0x00016e91) main_fs_clock_dumped_data

0x4f92,	// (0x0001bbfa) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4f92,	// (0x0001bbfa) list_single_fs_bigclock_indicator_pane_g1

0x4fb8,	// (0x0001bc20) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4fb8,	// (0x0001bc20) list_single_fs_bigclock_indicator_pane_g2

0x4fd2,	// (0x0001bc3a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4fd2,	// (0x0001bc3a) list_single_fs_bigclock_indicator_pane_g3

0x4fec,	// (0x0001bc54) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4fec,	// (0x0001bc54) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x000268f1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x000268f1) list_single_fs_bigclock_indicator_pane_g

0x5015,	// (0x0001bc7d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5015,	// (0x0001bc7d) list_single_fs_bigclock_indicator_pane_t1

0x503d,	// (0x0001bca5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x503d,	// (0x0001bca5) list_single_fs_bigclock_indicator_pane_t2

0x5065,	// (0x0001bccd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5065,	// (0x0001bccd) list_single_fs_bigclock_indicator_pane_t3

0x508d,	// (0x0001bcf5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x508d,	// (0x0001bcf5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x000268fc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x000268fc) list_single_fs_bigclock_indicator_pane_t

0x5ade,	// (0x0001c746) image3_infobar_fav_pane_ParamLimits

0x5ade,	// (0x0001c746) image3_infobar_fav_pane

0x5aee,	// (0x0001c756) image3_infobar_loc_pane_ParamLimits

0x5aee,	// (0x0001c756) image3_infobar_loc_pane

0x5b02,	// (0x0001c76a) image3_infobar_time_pane_ParamLimits

0x5b02,	// (0x0001c76a) image3_infobar_time_pane

0x3162,	// (0x00019dca) image3_infobar_time_pane_g1

0x5b12,	// (0x0001c77a) image3_infobar_time_pane_t1

0x3162,	// (0x00019dca) image3_infobar_loc_pane_g1

0x5b20,	// (0x0001c788) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00026ac3) image3_infobar_loc_pane_g

0x5b28,	// (0x0001c790) image3_infobar_loc_pane_t1

0x3162,	// (0x00019dca) image3_infobar_fav_pane_g1

0x5b36,	// (0x0001c79e) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00026ac8) image3_infobar_fav_pane_g

0x5b3e,	// (0x0001c7a6) fs_bigclock_status_battery_pane

0x5b47,	// (0x0001c7af) fs_bigclock_status_signal_pane

0x5b50,	// (0x0001c7b8) fs_bigclock_status_title_pane

0x5b59,	// (0x0001c7c1) fs_bigclock_status_signal_pane_g1

0x5b62,	// (0x0001c7ca) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00026acd) fs_bigclock_status_signal_pane_g

0x5b6a,	// (0x0001c7d2) fs_bigclock_status_battery_pane_g1

0x5b73,	// (0x0001c7db) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00026ad2) fs_bigclock_status_battery_pane_g

0x5b7b,	// (0x0001c7e3) fs_bigclock_status_title_pane_t1

0x3162,	// (0x00019dca) main_fs_bigclock_clock_pane_g1

0x5b89,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g2

0x5b89,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g3

0x5b89,	// (0x0001c7f1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00026ad7) main_fs_bigclock_clock_pane_g

0x5b91,	// (0x0001c7f9) main_fs_bigclock_clock_pane_t1

0x5b9f,	// (0x0001c807) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00026ae0) main_fs_bigclock_clock_pane_t

0x5bae,	// (0x0001c816) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5bae,	// (0x0001c816) list_single_fs_bigclock_indicator_pane

0xe858,	// (0x000254c0) list_single_fs_bigclock_pane_ParamLimits

0xe858,	// (0x000254c0) list_single_fs_bigclock_pane

0x5bc8,	// (0x0001c830) main_fs_bigclock_indicator_pane_t1

0x5bd7,	// (0x0001c83f) list_single_fs_bigclock_pane_g1

0x5bdf,	// (0x0001c847) list_single_fs_bigclock_pane_t1

0x3162,	// (0x00019dca) main_fs_bigclock_swipe_pane_g1

0x5c63,	// (0x0001c8cb) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00026af1) main_fs_bigclock_swipe_pane_g

0x5c6b,	// (0x0001c8d3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5c6b,	// (0x0001c8d3) main_fs_bigclock_swipe_pane_t1

0x9f0f,	// (0x00020b77) call_type_pane_ParamLimits

0x0229,	// (0x00016e91) main_btmg_pane

0x586c,	// (0x0001c4d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x586c,	// (0x0001c4d4) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00026a64) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00026a64) list_single_cale_mrui_row_pane_g

0x59cc,	// (0x0001c634) list_recal_vselct_arw_lo_pane

0x59d4,	// (0x0001c63c) list_recal_vselct_arw_up_pane

0x59dc,	// (0x0001c644) list_recal_vselct_pane

0x5c88,	// (0x0001c8f0) btmg_button_pane

0xe8b9,	// (0x00025521) main_btmg_pane_g1

0x0229,	// (0x00016e91) bg_button_pane_cp044

0x5c92,	// (0x0001c8fa) btmg_button_pane_t1

0x2c54,	// (0x000198bc) aid_listscroll_gen

0x0299,	// (0x00016f01) main_cntbar_detail_pane

0x5596,	// (0x0001c1fe) list_cmail_folder_pane

0x55a6,	// (0x0001c20e) sp_fs_scroll_pane_cp03_ParamLimits

0xe3c3,	// (0x0002502b) list_single_fs_dyc_pane_cp01_ParamLimits

0xe3c3,	// (0x0002502b) list_single_fs_dyc_pane_cp01

0x5ca0,	// (0x0001c908) aid_size_cmail_indent

0x5ca9,	// (0x0001c911) list_single_dyc_row_pane_cp01

0xe8e1,	// (0x00025549) cntbar_detail_list_pane_ParamLimits

0xe8e1,	// (0x00025549) cntbar_detail_list_pane

0xe91b,	// (0x00025583) main_cntbar_detail_cont_pane_ParamLimits

0xe91b,	// (0x00025583) main_cntbar_detail_cont_pane

0x9ea9,	// (0x00020b11) scroll_pane_cp032_ParamLimits

0x9ea9,	// (0x00020b11) scroll_pane_cp032

0xe927,	// (0x0002558f) cntbar_detail_list_event_pane_ParamLimits

0xe927,	// (0x0002558f) cntbar_detail_list_event_pane

0xe8ed,	// (0x00025555) cntbar_detail_list_shct_pane

0x0fc4,	// (0x00017c2c) aid_list_gen

0x5cb2,	// (0x0001c91a) aid_scroll

0x5cbb,	// (0x0001c923) aid_size_touch_scroll_bar

0xe93b,	// (0x000255a3) aid_list_double

0x5cc4,	// (0x0001c92c) aid_list_single

0xe944,	// (0x000255ac) aid_list_single_lg

0x5ccd,	// (0x0001c935) aid_list_z_g_a_sm

0x5cd5,	// (0x0001c93d) aid_list_z_g_d

0x5cdd,	// (0x0001c945) aid_txt_z_prm

0xe94d,	// (0x000255b5) aid_txt_z_prm_cp01

0xe95b,	// (0x000255c3) aid_txt_z_sec

0xe969,	// (0x000255d1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe969,	// (0x000255d1) main_cntbar_detail_cont_pane_g1

0xe976,	// (0x000255de) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe976,	// (0x000255de) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00026af6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00026af6) main_cntbar_detail_cont_pane_g

0x5ceb,	// (0x0001c953) main_cntbar_detail_cont_pane_t1

0x5cf9,	// (0x0001c961) main_cntbar_detail_cont_pane_t2

0x5d07,	// (0x0001c96f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00026afb) main_cntbar_detail_cont_pane_t

0xe982,	// (0x000255ea) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe982,	// (0x000255ea) cell_cntbar_detail_list_shct_pane

0x5d15,	// (0x0001c97d) cntbar_detail_list_shct_pane_g1

0x5d1e,	// (0x0001c986) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00026b02) cntbar_detail_list_shct_pane_g

0xe996,	// (0x000255fe) cntbar_detail_list_event_pane_g1_ParamLimits

0xe996,	// (0x000255fe) cntbar_detail_list_event_pane_g1

0xe9a2,	// (0x0002560a) cntbar_detail_list_event_pane_g2_ParamLimits

0xe9a2,	// (0x0002560a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00026b07) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00026b07) cntbar_detail_list_event_pane_g

0xea0e,	// (0x00025676) cntbar_detail_list_event_pane_t1_ParamLimits

0xea0e,	// (0x00025676) cntbar_detail_list_event_pane_t1

0xea23,	// (0x0002568b) cntbar_detail_list_event_pane_t2_ParamLimits

0xea23,	// (0x0002568b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00026b14) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00026b14) cntbar_detail_list_event_pane_t

0x3162,	// (0x00019dca) cell_cntbar_detail_list_shct_pane_g1

0xa24c,	// (0x00020eb4) navi_pane_mv_g3

0x0299,	// (0x00016f01) main_cntbar_detail_pane_ParamLimits

0x0229,	// (0x00016e91) main_notif_wgt_pane

0x76ce,	// (0x0001e336) aid_tch_main_mp4_pane_g4

0x7903,	// (0x0001e56b) popup_slider_window_cp02

0x59c2,	// (0x0001c62a) list_recal_day_event_pane

0xe8c1,	// (0x00025529) cntbar_detail_btn_pane_ParamLimits

0xe8c1,	// (0x00025529) cntbar_detail_btn_pane

0xe8d1,	// (0x00025539) cntbar_detail_btn_pane_cp01_ParamLimits

0xe8d1,	// (0x00025539) cntbar_detail_btn_pane_cp01

0xe8ed,	// (0x00025555) cntbar_detail_list_shct_pane_ParamLimits

0xe8f9,	// (0x00025561) cntbar_detail_pane_g1_ParamLimits

0xe8f9,	// (0x00025561) cntbar_detail_pane_g1

0xe905,	// (0x0002556d) cntbar_detail_pane_t1_ParamLimits

0xe905,	// (0x0002556d) cntbar_detail_pane_t1

0xe9ae,	// (0x00025616) cntbar_detail_list_event_pane_g3_ParamLimits

0xe9ae,	// (0x00025616) cntbar_detail_list_event_pane_g3

0xe9c6,	// (0x0002562e) cntbar_detail_list_event_pane_g4_ParamLimits

0xe9c6,	// (0x0002562e) cntbar_detail_list_event_pane_g4

0xe9de,	// (0x00025646) cntbar_detail_list_event_pane_g5_ParamLimits

0xe9de,	// (0x00025646) cntbar_detail_list_event_pane_g5

0xe9f6,	// (0x0002565e) cntbar_detail_list_event_pane_g6_ParamLimits

0xe9f6,	// (0x0002565e) cntbar_detail_list_event_pane_g6

0xea38,	// (0x000256a0) cntbar_detail_list_event_pane_t3_ParamLimits

0xea38,	// (0x000256a0) cntbar_detail_list_event_pane_t3

0xea4a,	// (0x000256b2) popup_notif_wgt_window_ParamLimits

0xea4a,	// (0x000256b2) popup_notif_wgt_window

0xea5a,	// (0x000256c2) popup_submenu_window_cp01_ParamLimits

0xea5a,	// (0x000256c2) popup_submenu_window_cp01

0x179f,	// (0x00018407) bg_popup_window_pane_cp10

0x5d27,	// (0x0001c98f) listscroll_notif_wgt_pane

0x5d31,	// (0x0001c999) list_notif_wgt_window

0x5d3a,	// (0x0001c9a2) scroll_pane_cp033

0x5c22,	// (0x0001c88a) list_notif_wgt_row_pane_ParamLimits

0x5c22,	// (0x0001c88a) list_notif_wgt_row_pane

0x5d43,	// (0x0001c9ab) aid_size_list_notif_wgt_del

0x5d4c,	// (0x0001c9b4) list_notif_wgt_row_pane_g1

0x5d54,	// (0x0001c9bc) list_notif_wgt_row_pane_g2

0x5d5c,	// (0x0001c9c4) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00026b1b) list_notif_wgt_row_pane_g

0x5d65,	// (0x0001c9cd) list_notif_wgt_row_pane_t1

0x5d73,	// (0x0001c9db) list_notif_wgt_row_pane_t2

0x5d81,	// (0x0001c9e9) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00026b22) list_notif_wgt_row_pane_t

0x4221,	// (0x0001ae89) list_recal_day_event_pane_g1

0x5d8f,	// (0x0001c9f7) list_recal_day_event_pane_t1

0x0229,	// (0x00016e91) bg_button_pane_cp045

0x5d9e,	// (0x0001ca06) cntbar_detail_btn_pane_t1

0x2c5c,	// (0x000198c4) main_callh_pane_ParamLimits

0x2c5c,	// (0x000198c4) main_callh_pane

0x0229,	// (0x00016e91) main_coverflow0_pane

0x0229,	// (0x00016e91) main_wgtman_pane

0xdc53,	// (0x000248bb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc53,	// (0x000248bb) main_fs_bigclock_unlock_btn_pane

0x5570,	// (0x0001c1d8) bg_button_pane_cp16

0x5580,	// (0x0001c1e8) cell_tport_appsw_pane_g3

0xea68,	// (0x000256d0) cf0_flow_pane_ParamLimits

0xea68,	// (0x000256d0) cf0_flow_pane

0x5dac,	// (0x0001ca14) listscroll_cf0_pane

0x5db5,	// (0x0001ca1d) main_cf0_pane_g1

0xea77,	// (0x000256df) main_cf0_pane_t1_ParamLimits

0xea77,	// (0x000256df) main_cf0_pane_t1

0xea8b,	// (0x000256f3) main_cf0_pane_t2_ParamLimits

0xea8b,	// (0x000256f3) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00026b29) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00026b29) main_cf0_pane_t

0x5dbf,	// (0x0001ca27) scroll_pane_cp11

0xea9f,	// (0x00025707) cf0_flow_pane_g1

0xeaa7,	// (0x0002570f) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00026b2e) cf0_flow_pane_g

0xeaaf,	// (0x00025717) cf0_flow_pane_t1

0x0229,	// (0x00016e91) main_call6_pane

0x0229,	// (0x00016e91) main_calllock_pane

0xeabd,	// (0x00025725) call6_btn_grp_pane_ParamLimits

0xeabd,	// (0x00025725) call6_btn_grp_pane

0xeacc,	// (0x00025734) call6_pane_g1_ParamLimits

0xeacc,	// (0x00025734) call6_pane_g1

0xeadb,	// (0x00025743) popup_call6_1st_window_ParamLimits

0xeadb,	// (0x00025743) popup_call6_1st_window

0xeae9,	// (0x00025751) popup_call6_2nd_window_ParamLimits

0xeae9,	// (0x00025751) popup_call6_2nd_window

0xeaf7,	// (0x0002575f) cell_call6_btn_pane_ParamLimits

0xeaf7,	// (0x0002575f) cell_call6_btn_pane

0x179f,	// (0x00018407) bg_popup_call2_in_pane_cp03

0x5dca,	// (0x0001ca32) popup_call6_1st_window_g1

0x5dd2,	// (0x0001ca3a) popup_call6_1st_window_g2

0x5dda,	// (0x0001ca42) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00026b33) popup_call6_1st_window_g

0x5de2,	// (0x0001ca4a) popup_call6_1st_window_t1

0x5df1,	// (0x0001ca59) popup_call6_1st_window_t2

0x5e01,	// (0x0001ca69) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00026b3a) popup_call6_1st_window_t

0x179f,	// (0x00018407) bg_popup_call2_in_pane_cp04

0x5dca,	// (0x0001ca32) popup_call6_2nd_window_g1

0x5dd2,	// (0x0001ca3a) popup_call6_2nd_window_g2

0x5dda,	// (0x0001ca42) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00026b33) popup_call6_2nd_window_g

0x5de2,	// (0x0001ca4a) popup_call6_2nd_window_t1

0x0229,	// (0x00016e91) bg_button_pane_cp15

0x5e11,	// (0x0001ca79) cell_call6_btn_pane_g1

0x5e1a,	// (0x0001ca82) cell_call6_btn_pane_t1

0xeb06,	// (0x0002576e) listscroll_wgtman_pane_ParamLimits

0xeb06,	// (0x0002576e) listscroll_wgtman_pane

0xeb24,	// (0x0002578c) wgtman_btn_pane_ParamLimits

0xeb24,	// (0x0002578c) wgtman_btn_pane

0x1656,	// (0x000182be) aid_scroll_copy1

0x5e29,	// (0x0001ca91) list_wgtman_pane

0xeb59,	// (0x000257c1) wgtman_btn_pane_g1_ParamLimits

0xeb59,	// (0x000257c1) wgtman_btn_pane_g1

0xeb81,	// (0x000257e9) wgtman_btn_pane_t1_ParamLimits

0xeb81,	// (0x000257e9) wgtman_btn_pane_t1

0x5e33,	// (0x0001ca9b) wgtman_btn_pane_t2_ParamLimits

0x5e33,	// (0x0001ca9b) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00026b41) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00026b41) wgtman_btn_pane_t

0xebb8,	// (0x00025820) listrow_wgtman_pane_ParamLimits

0xebb8,	// (0x00025820) listrow_wgtman_pane

0xebd3,	// (0x0002583b) listrow_wgtman_pane_g1

0xebdc,	// (0x00025844) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00026b46) listrow_wgtman_pane_g

0xebe6,	// (0x0002584e) listrow_wgtman_pane_t1

0xebf4,	// (0x0002585c) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00026b4b) listrow_wgtman_pane_t

0xec02,	// (0x0002586a) wait_bar_pane_cp09

0x5e4a,	// (0x0001cab2) main_calllock_btn_pane

0x5e54,	// (0x0001cabc) main_calllock_pane_g1

0x0229,	// (0x00016e91) bg_button_pane_cp17

0x5e60,	// (0x0001cac8) main_calllock_btn_pane_g1

0x5e69,	// (0x0001cad1) main_calllock_btn_pane_t1

0x0229,	// (0x00016e91) main_dialer3_pane

0x0229,	// (0x00016e91) main_fmrd2_pane

0x3162,	// (0x00019dca) main_fs_bigclock_unlock_btn_pane_g1

0x5e80,	// (0x0001cae8) main_fs_bigclock_unlock_btn_pane_t1

0xec0a,	// (0x00025872) area_fmrd2_info_pane_ParamLimits

0xec0a,	// (0x00025872) area_fmrd2_info_pane

0xec18,	// (0x00025880) area_fmrd2_visual_pane_ParamLimits

0xec18,	// (0x00025880) area_fmrd2_visual_pane

0xec26,	// (0x0002588e) fmrd2_indi_pane_ParamLimits

0xec26,	// (0x0002588e) fmrd2_indi_pane

0xec33,	// (0x0002589b) area_fmrd2_visual_pane_g1

0xec3b,	// (0x000258a3) area_fmrd2_visual_pane_t1

0xec4b,	// (0x000258b3) area_fmrd2_visual_pane_t2

0xec5b,	// (0x000258c3) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00026b55) area_fmrd2_visual_pane_t

0xec6b,	// (0x000258d3) area_fmrd2_info_pane_g1

0xec73,	// (0x000258db) area_fmrd2_info_pane_t1

0xec83,	// (0x000258eb) area_fmrd2_info_pane_t2

0xec93,	// (0x000258fb) area_fmrd2_info_pane_t3

0xeca3,	// (0x0002590b) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026b5c) area_fmrd2_info_pane_t

0xecb1,	// (0x00025919) fmrd2_indi_pane_t1

0xecc1,	// (0x00025929) fmrd2_indi_pane_t2

0xecd1,	// (0x00025939) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00026b65) fmrd2_indi_pane_t

0x4ffb,	// (0x0001bc63) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4ffb,	// (0x0001bc63) list_single_fs_bigclock_indicator_pane_g5

0x50a2,	// (0x0001bd0a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x50a2,	// (0x0001bd0a) list_single_fs_bigclock_indicator_pane_t5

0xe4fa,	// (0x00025162) aid_cell_bcale_month_pane_ParamLimits

0xe4fa,	// (0x00025162) aid_cell_bcale_month_pane

0xe506,	// (0x0002516e) bcale_month_pane_ParamLimits

0xe506,	// (0x0002516e) bcale_month_pane

0xe516,	// (0x0002517e) bcale_preview_pane_ParamLimits

0xe516,	// (0x0002517e) bcale_preview_pane

0x5bdf,	// (0x0001c847) list_single_fs_bigclock_pane_t1_ParamLimits

0x5bfe,	// (0x0001c866) list_single_fs_bigclock_pane_t2_ParamLimits

0x5bfe,	// (0x0001c866) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00026aec) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00026aec) list_single_fs_bigclock_pane_t

0x5e78,	// (0x0001cae0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00026b50) main_fs_bigclock_unlock_btn_pane_g

0xecdf,	// (0x00025947) aid_dia3_key_size_ParamLimits

0xecdf,	// (0x00025947) aid_dia3_key_size

0xeceb,	// (0x00025953) aid_dia3_listrow_size_ParamLimits

0xeceb,	// (0x00025953) aid_dia3_listrow_size

0xecfb,	// (0x00025963) dia3_keypad_fun_pane_ParamLimits

0xecfb,	// (0x00025963) dia3_keypad_fun_pane

0xed0d,	// (0x00025975) dia3_keypad_num_pane_ParamLimits

0xed0d,	// (0x00025975) dia3_keypad_num_pane

0xed1f,	// (0x00025987) dia3_listscroll_pane_ParamLimits

0xed1f,	// (0x00025987) dia3_listscroll_pane

0xed2d,	// (0x00025995) dia3_numentry_pane_ParamLimits

0xed2d,	// (0x00025995) dia3_numentry_pane

0x5e8e,	// (0x0001caf6) dia3_list_pane

0x5e99,	// (0x0001cb01) scroll_pane_cp12

0x0229,	// (0x00016e91) bg_dia3_numentry_pane

0xed3b,	// (0x000259a3) dia3_numentry_pane_t1

0xed4a,	// (0x000259b2) cell_dia3_key_num_pane

0xed52,	// (0x000259ba) cell_dia3_key0_fun_pane_ParamLimits

0xed52,	// (0x000259ba) cell_dia3_key0_fun_pane

0xed5f,	// (0x000259c7) cell_dia3_key1_fun_pane_ParamLimits

0xed5f,	// (0x000259c7) cell_dia3_key1_fun_pane

0xed6c,	// (0x000259d4) dia3_listrow_pane

0x4cf1,	// (0x0001b959) bg_dia3_numentry_pane_g1

0x0229,	// (0x00016e91) bg_button_pane_cp21

0x5ea4,	// (0x0001cb0c) cell_dia3_key_num_pane_t1

0x5eb2,	// (0x0001cb1a) cell_dia3_key_num_pane_t2

0x5ec1,	// (0x0001cb29) cell_dia3_key_num_pane_t3

0x5ed0,	// (0x0001cb38) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026b6c) cell_dia3_key_num_pane_t

0x0229,	// (0x00016e91) bg_button_pane_cp19

0xed79,	// (0x000259e1) cell_dia3_key0_fun_pane_g1

0x0229,	// (0x00016e91) bg_button_pane_cp20

0xed81,	// (0x000259e9) cell_dia3_key1_fun_pane_g1

0xed89,	// (0x000259f1) area_left_week_number_pane

0xed92,	// (0x000259fa) area_top_day_name_pane

0xed9b,	// (0x00025a03) frame_month_view_pane

0xeda5,	// (0x00025a0d) grid_month_view_pane

0xedaf,	// (0x00025a17) cell_top_day_name_pane_ParamLimits

0xedaf,	// (0x00025a17) cell_top_day_name_pane

0xedc9,	// (0x00025a31) cell_area_left_week_number_pane_ParamLimits

0xedc9,	// (0x00025a31) cell_area_left_week_number_pane

0xeddd,	// (0x00025a45) cell_month_view_pane_ParamLimits

0xeddd,	// (0x00025a45) cell_month_view_pane

0x5edf,	// (0x0001cb47) frm_month_g1

0xedfa,	// (0x00025a62) frm_month_g2

0xee04,	// (0x00025a6c) frm_month_g3

0xee0e,	// (0x00025a76) frm_month_g4

0xee18,	// (0x00025a80) frm_month_g5

0xee22,	// (0x00025a8a) frm_month_g6

0xee2c,	// (0x00025a94) frm_month_g7

0x5ee8,	// (0x0001cb50) frm_month_g8

0xee36,	// (0x00025a9e) frm_month_g9

0xee3f,	// (0x00025aa7) frm_month_g10

0xee48,	// (0x00025ab0) frm_month_g11

0xee51,	// (0x00025ab9) frm_month_g12

0xee5a,	// (0x00025ac2) frm_month_g13

0xee63,	// (0x00025acb) frm_month_g14

0xee6c,	// (0x00025ad4) frm_month_g15

0xee77,	// (0x00025adf) frm_month_g16

0x000f,

0xff0d,	// (0x00026b75) frm_month_g

0xee82,	// (0x00025aea) cell_top_day_name_pane_t1

0xee91,	// (0x00025af9) cell_area_left_week_number_pane_g1

0xee82,	// (0x00025aea) cell_area_left_week_number_pane_t1

0x3162,	// (0x00019dca) cell_month_view_pane_g1

0xee99,	// (0x00025b01) cell_month_view_pane_t1

0x0229,	// (0x00016e91) main_fps_pane

0x52e6,	// (0x0001bf4e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x52e6,	// (0x0001bf4e) cmail_ddmenu_btn02_pane_cp1

0x5302,	// (0x0001bf6a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5302,	// (0x0001bf6a) cmail_ddmenu_btn02_pane_cp2

0xe7b5,	// (0x0002541d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe7b5,	// (0x0002541d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x00026a9f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x00026a9f) cmail_ddmenu_btn02_pane_g

0xe7d3,	// (0x0002543b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe7d3,	// (0x0002543b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00026aa4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00026aa4) cmail_ddmenu_btn02_pane_t

0xeea8,	// (0x00025b10) fps_text_pane_ParamLimits

0xeea8,	// (0x00025b10) fps_text_pane

0xeeb5,	// (0x00025b1d) main_fps_pane_g1_ParamLimits

0xeeb5,	// (0x00025b1d) main_fps_pane_g1

0xeec3,	// (0x00025b2b) wait_bar_pane_cp010_ParamLimits

0xeec3,	// (0x00025b2b) wait_bar_pane_cp010

0xeecf,	// (0x00025b37) fps_text_pane_t1_ParamLimits

0xeecf,	// (0x00025b37) fps_text_pane_t1

0xc574,	// (0x000231dc) cam4_image_uncrop_pane_g1

0xc57d,	// (0x000231e5) cam4_image_uncrop_pane_g2

0xc586,	// (0x000231ee) cam4_image_uncrop_pane_g3

0xc58f,	// (0x000231f7) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x00026570) cam4_image_uncrop_pane_g

0xed6c,	// (0x000259d4) dia3_listrow_pane_ParamLimits

0x0229,	// (0x00016e91) main_phob2_pane

0xe33b,	// (0x00024fa3) cell_tport_appsw_pane_cp02_ParamLimits

0xe33b,	// (0x00024fa3) cell_tport_appsw_pane_cp02

0xe34a,	// (0x00024fb2) cell_tport_appsw_pane_cp03_ParamLimits

0xe34a,	// (0x00024fb2) cell_tport_appsw_pane_cp03

0x0229,	// (0x00016e91) phob2_contact_card_pane

0x0229,	// (0x00016e91) phob2_listscroll_pane

0x5ef1,	// (0x0001cb59) phob2_list_pane

0x5ef9,	// (0x0001cb61) scroll_pane_cp034

0xeee8,	// (0x00025b50) phob2_cc_data_pane_ParamLimits

0xeee8,	// (0x00025b50) phob2_cc_data_pane

0xef02,	// (0x00025b6a) phob2_cc_listscroll_pane_ParamLimits

0xef02,	// (0x00025b6a) phob2_cc_listscroll_pane

0xef1c,	// (0x00025b84) list_double_large_graphic_phob2_pane_ParamLimits

0xef1c,	// (0x00025b84) list_double_large_graphic_phob2_pane

0xef3a,	// (0x00025ba2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef3a,	// (0x00025ba2) list_double_large_graphic_phob2_pane_g1

0x5f01,	// (0x0001cb69) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5f01,	// (0x0001cb69) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00026b96) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00026b96) list_double_large_graphic_phob2_pane_g

0xef47,	// (0x00025baf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef47,	// (0x00025baf) list_double_large_graphic_phob2_pane_t1

0xef5c,	// (0x00025bc4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xef5c,	// (0x00025bc4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026b9b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026b9b) list_double_large_graphic_phob2_pane_t

0x0229,	// (0x00016e91) list_highlight_pane_cp024

0x5f0d,	// (0x0001cb75) phob2_cc_button_pane

0xef6e,	// (0x00025bd6) phob2_cc_data_pane_g1_ParamLimits

0xef6e,	// (0x00025bd6) phob2_cc_data_pane_g1

0xef7a,	// (0x00025be2) phob2_cc_data_pane_g2_ParamLimits

0xef7a,	// (0x00025be2) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026ba0) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026ba0) phob2_cc_data_pane_g

0xef86,	// (0x00025bee) phob2_cc_data_pane_t1_ParamLimits

0xef86,	// (0x00025bee) phob2_cc_data_pane_t1

0xef98,	// (0x00025c00) phob2_cc_data_pane_t2_ParamLimits

0xef98,	// (0x00025c00) phob2_cc_data_pane_t2

0xefaa,	// (0x00025c12) phob2_cc_data_pane_t3_ParamLimits

0xefaa,	// (0x00025c12) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00026ba5) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00026ba5) phob2_cc_data_pane_t

0x5f15,	// (0x0001cb7d) phob2_cc_list_pane_ParamLimits

0x5f15,	// (0x0001cb7d) phob2_cc_list_pane

0x42cc,	// (0x0001af34) scroll_pane_cp035_ParamLimits

0x42cc,	// (0x0001af34) scroll_pane_cp035

0x0299,	// (0x00016f01) bg_button_pane_cp033

0x5f21,	// (0x0001cb89) phob2_cc_button_pane_g1

0x5f2d,	// (0x0001cb95) phob2_cc_button_pane_t1

0x5f42,	// (0x0001cbaa) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026bac) phob2_cc_button_pane_t

0xefbc,	// (0x00025c24) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xefbc,	// (0x00025c24) list_double_large_graphic_phob2_cc_pane

0xefe3,	// (0x00025c4b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xefe3,	// (0x00025c4b) list_double_large_graphic_phob2_cc_pane_g1

0xeff4,	// (0x00025c5c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeff4,	// (0x00025c5c) list_double_large_graphic_phob2_cc_pane_g2

0xf000,	// (0x00025c68) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf000,	// (0x00025c68) list_double_large_graphic_phob2_cc_pane_g3

0xf00c,	// (0x00025c74) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf00c,	// (0x00025c74) list_double_large_graphic_phob2_cc_pane_g4

0xf018,	// (0x00025c80) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf018,	// (0x00025c80) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00026bb1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00026bb1) list_double_large_graphic_phob2_cc_pane_g

0xf024,	// (0x00025c8c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf024,	// (0x00025c8c) list_double_large_graphic_phob2_cc_pane_t1

0xf04d,	// (0x00025cb5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf04d,	// (0x00025cb5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026bbc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026bbc) list_double_large_graphic_phob2_cc_pane_t

0x5f54,	// (0x0001cbbc) list_highlight_pane_cp025_ParamLimits

0x5f54,	// (0x0001cbbc) list_highlight_pane_cp025

0x0299,	// (0x00016f01) bg_button_pane_cp033_ParamLimits

0x5f21,	// (0x0001cb89) phob2_cc_button_pane_g1_ParamLimits

0x5f2d,	// (0x0001cb95) phob2_cc_button_pane_t1_ParamLimits

0x5f42,	// (0x0001cbaa) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026bac) phob2_cc_button_pane_t_ParamLimits

0x850f,	// (0x0001f177) popup_wgtman_window

0x4042,	// (0x0001acaa) scroll_pane_cp038

0xeb41,	// (0x000257a9) wgtman_btn_pane_cp_01_ParamLimits

0xeb41,	// (0x000257a9) wgtman_btn_pane_cp_01

0x5f62,	// (0x0001cbca) wgtman_content_pane

0x5f6b,	// (0x0001cbd3) wgtman_heading_pane

0x0229,	// (0x00016e91) bg_heading_pane_cp02

0x5f74,	// (0x0001cbdc) wgtman_heading_pane_g1

0x5f7c,	// (0x0001cbe4) wgtman_heading_pane_t1

0x5f8a,	// (0x0001cbf2) scroll_pane_cp036

0x5f92,	// (0x0001cbfa) wgtman_list_pane

0x5c34,	// (0x0001c89c) wgtman_list_pane_t1_ParamLimits

0x5c34,	// (0x0001c89c) wgtman_list_pane_t1

0x7ae9,	// (0x0001e751) cam4_grid_pane

0xccba,	// (0x00023922) bg_button_pane_cp015_ParamLimits

0xcccc,	// (0x00023934) bg_button_pane_cp016_ParamLimits

0xccdf,	// (0x00023947) bg_button_pane_cp017_ParamLimits

0xcd35,	// (0x0002399d) popup_vitu2_query_window_g3_ParamLimits

0xcd35,	// (0x0002399d) popup_vitu2_query_window_g3

0xcdf0,	// (0x00023a58) popup_vitu2_query_window_t6_ParamLimits

0xcdf0,	// (0x00023a58) popup_vitu2_query_window_t6

0xce1b,	// (0x00023a83) popup_vitu2_query_window_t7_ParamLimits

0xce1b,	// (0x00023a83) popup_vitu2_query_window_t7

0x5c51,	// (0x0001c8b9) cam4_grid_pane_g1

0x5c5a,	// (0x0001c8c2) cam4_grid_pane_g2

0x5f9a,	// (0x0001cc02) cam4_grid_pane_g3

0x5fa3,	// (0x0001cc0b) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00026bc1) cam4_grid_pane_g

0x8f87,	// (0x0001fbef) aid_placing_vt_slider_lsc_ParamLimits

0x92d3,	// (0x0001ff3b) vidtel_button_pane_ParamLimits

0x92d3,	// (0x0001ff3b) vidtel_button_pane

0x5fae,	// (0x0001cc16) bg_button_pane_cp034

0xf076,	// (0x00025cde) vidtel_button_pane_g1

0x5fb8,	// (0x0001cc20) vidtel_button_pane_t1

0x41af,	// (0x0001ae17) aid_size_vtel_slider_touch

0x42cc,	// (0x0001af34) scroll_pane_cp039

0x4d2f,	// (0x0001b997) ncim_query_button_pane_cp01_ParamLimits

0x4d4e,	// (0x0001b9b6) ncimui_query_pane_g1_ParamLimits

0x0299,	// (0x00016f01) input_focus_pane_cp012_ParamLimits

0x4d73,	// (0x0001b9db) ncim_query_entry_pane_t1_ParamLimits

0x42cc,	// (0x0001af34) scroll_pane_cp039_ParamLimits

0xa1be,	// (0x00020e26) navi_pane_bcale_mc_g1

0xa1c6,	// (0x00020e2e) navi_pane_bcale_mc_t1

0x534b,	// (0x0001bfb3) main_sp_fs_email_pane_g1

0x5353,	// (0x0001bfbb) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x00026962) main_sp_fs_email_pane_g

0x5878,	// (0x0001c4e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0x5878,	// (0x0001c4e0) list_single_cale_mrui_row_pane_g3

0xe7fb,	// (0x00025463) list_single_recal_day_pane_g5_event_pane

0x5a3e,	// (0x0001c6a6) list_single_recal_day_pane_g7

0x5fc6,	// (0x0001cc2e) list_recal_day_event_pane_cp01

0x5fcf,	// (0x0001cc37) list_recal_vselct_arw_lo_pane_cp01

0x5fd7,	// (0x0001cc3f) list_recal_vselct_arw_up_pane_cp01

0x5fdf,	// (0x0001cc47) list_recal_vselct_pane_cp01

0x4221,	// (0x0001ae89) list_recal_day_event_pane_cp01_g1

0x5fe9,	// (0x0001cc51) list_recal_day_event_pane_cp01_t1

0x5a46,	// (0x0001c6ae) list_single_recal_day_pane_t1_ParamLimits

0x5a58,	// (0x0001c6c0) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00026ab4) list_single_recal_day_pane_t_ParamLimits

0x09c0,	// (0x00017628) bg_notes_pane_ParamLimits

0x09ce,	// (0x00017636) list_notes_pane_ParamLimits

0x87ed,	// (0x0001f455) scroll_pane_cp06_ParamLimits

0x0a0a,	// (0x00017672) main_notes_pane_ParamLimits

0x0229,	// (0x00016e91) main_welc_pane

0xf07e,	// (0x00025ce6) main_welc_body_pane_ParamLimits

0xf07e,	// (0x00025ce6) main_welc_body_pane

0xf08d,	// (0x00025cf5) main_welc_opti_pane_ParamLimits

0xf08d,	// (0x00025cf5) main_welc_opti_pane

0xf09c,	// (0x00025d04) main_welc_pane_t1_ParamLimits

0xf09c,	// (0x00025d04) main_welc_pane_t1

0xf0ae,	// (0x00025d16) main_welc_body_row_pane_ParamLimits

0xf0ae,	// (0x00025d16) main_welc_body_row_pane

0xf0d6,	// (0x00025d3e) main_welc_opti_row_pane_ParamLimits

0xf0d6,	// (0x00025d3e) main_welc_opti_row_pane

0x5ff7,	// (0x0001cc5f) main_welc_opti_row_pane_g1

0x5fff,	// (0x0001cc67) main_welc_opti_row_pane_t1

0x600e,	// (0x0001cc76) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal

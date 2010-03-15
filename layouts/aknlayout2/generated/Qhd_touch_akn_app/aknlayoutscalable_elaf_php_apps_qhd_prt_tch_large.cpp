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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006ec16 };

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
0x61ad,	// (0x00074dc3) Screen

0x61b9,	// (0x00074dcf) application_window

0x6215,	// (0x00074e2b) area_bottom_pane_ParamLimits

0x6215,	// (0x00074e2b) area_bottom_pane

0x626e,	// (0x00074e84) area_top_pane_ParamLimits

0x626e,	// (0x00074e84) area_top_pane

0x62d2,	// (0x00074ee8) call_video_uplink_pane_ParamLimits

0x62d2,	// (0x00074ee8) call_video_uplink_pane

0x6311,	// (0x00074f27) main_pane_ParamLimits

0x6311,	// (0x00074f27) main_pane

0x3364,	// (0x00071f7a) context_pane

0x9720,	// (0x00078336) navi_pane

0x9740,	// (0x00078356) popup_cale_events_window_ParamLimits

0x9740,	// (0x00078356) popup_cale_events_window

0x3377,	// (0x00071f8d) popup_mup_playback_window

0x9758,	// (0x0007836e) signal_pane

0x13d7,	// (0x0006ffed) main_browser_pane

0x1f01,	// (0x00070b17) main_burst_pane

0x95ac,	// (0x000781c2) main_calc_pane

0x334a,	// (0x00071f60) main_cale_day_pane

0x6a4e,	// (0x00075664) main_cale_month_pane

0x334a,	// (0x00071f60) main_cale_week_pane

0x1f01,	// (0x00070b17) main_call_pane

0x10b7,	// (0x0006fccd) main_call_poc_pane

0x1f01,	// (0x00070b17) main_camera_pane

0x1f01,	// (0x00070b17) main_chi_dic_pane

0x1d76,	// (0x0007098c) main_clock_pane

0x10b7,	// (0x0006fccd) main_fmradio_pane

0x1f01,	// (0x00070b17) main_graph_messa_pane

0x10b7,	// (0x0006fccd) main_help_pane

0x13d7,	// (0x0006ffed) main_im_pane

0x1312,	// (0x0006ff28) main_image_pane_ParamLimits

0x1312,	// (0x0006ff28) main_image_pane

0x10b7,	// (0x0006fccd) main_location2_pane

0x1f01,	// (0x00070b17) main_location_pane

0x1312,	// (0x0006ff28) main_messa_pane

0x10b7,	// (0x0006fccd) main_mp2_pane

0x1f01,	// (0x00070b17) main_mp_pane

0x10b7,	// (0x0006fccd) main_msg_pane

0x10b7,	// (0x0006fccd) main_mup_eq_pane

0x10b7,	// (0x0006fccd) main_mup_pane

0x13d7,	// (0x0006ffed) main_notes_pane

0x10b7,	// (0x0006fccd) main_pec_pane

0x10b7,	// (0x0006fccd) main_phob_pane

0x10b7,	// (0x0006fccd) main_pinb_pane

0x10b7,	// (0x0006fccd) main_postcard_pane

0x10b7,	// (0x0006fccd) main_qdial_pane

0x1f01,	// (0x00070b17) main_skin_pane

0x10b7,	// (0x0006fccd) main_smil2_pane

0x1f01,	// (0x00070b17) main_smil_pane

0x1f01,	// (0x00070b17) main_video_pane

0x1f01,	// (0x00070b17) main_video_tele_pane

0x1312,	// (0x0006ff28) main_viewer_pane_ParamLimits

0x1312,	// (0x0006ff28) main_viewer_pane

0x1f01,	// (0x00070b17) main_vorec_pane

0x95ea,	// (0x00078200) popup_blid_sat_info_window_ParamLimits

0x95ea,	// (0x00078200) popup_blid_sat_info_window

0x960a,	// (0x00078220) popup_dyc_status_message_window_ParamLimits

0x960a,	// (0x00078220) popup_dyc_status_message_window

0x961a,	// (0x00078230) popup_grid_large_graphic_window_ParamLimits

0x961a,	// (0x00078230) popup_grid_large_graphic_window

0x96ab,	// (0x000782c1) popup_loc_request_window_ParamLimits

0x96ab,	// (0x000782c1) popup_loc_request_window

0x96f8,	// (0x0007830e) popup_wml_address_window_ParamLimits

0x96f8,	// (0x0007830e) popup_wml_address_window

0x9484,	// (0x0007809a) call_muted_g1

0x9146,	// (0x00077d5c) popup_call_audio_conf_window_ParamLimits

0x9146,	// (0x00077d5c) popup_call_audio_conf_window

0x9494,	// (0x000780aa) popup_call_audio_first_window_ParamLimits

0x9494,	// (0x000780aa) popup_call_audio_first_window

0x94d4,	// (0x000780ea) popup_call_audio_in_window_ParamLimits

0x94d4,	// (0x000780ea) popup_call_audio_in_window

0x94f8,	// (0x0007810e) popup_call_audio_out_window_ParamLimits

0x94f8,	// (0x0007810e) popup_call_audio_out_window

0x951a,	// (0x00078130) popup_call_audio_second_window_ParamLimits

0x951a,	// (0x00078130) popup_call_audio_second_window

0x954a,	// (0x00078160) popup_call_audio_wait_window_ParamLimits

0x954a,	// (0x00078160) popup_call_audio_wait_window

0x956b,	// (0x00078181) popup_number_entry_window_ParamLimits

0x956b,	// (0x00078181) popup_number_entry_window

0xecd1,	// (0x0007d8e7) bg_popup_call_pane_cp05_ParamLimits

0xecd1,	// (0x0007d8e7) bg_popup_call_pane_cp05

0xecf1,	// (0x0007d907) popup_number_entry_window_t1

0xed04,	// (0x0007d91a) popup_number_entry_window_t2

0xed16,	// (0x0007d92c) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0007dce9) popup_number_entry_window_t

0xed28,	// (0x0007d93e) text_title_cp2

0xed3b,	// (0x0007d951) bg_popup_call_pane_cp_ParamLimits

0xed3b,	// (0x0007d951) bg_popup_call_pane_cp

0xed49,	// (0x0007d95f) call_thumbnail_pane

0xed51,	// (0x0007d967) popup_call_audio_in_window_g1_ParamLimits

0xed51,	// (0x0007d967) popup_call_audio_in_window_g1

0xed5d,	// (0x0007d973) popup_call_audio_in_window_g2_ParamLimits

0xed5d,	// (0x0007d973) popup_call_audio_in_window_g2

0xed69,	// (0x0007d97f) popup_call_audio_in_window_g3_ParamLimits

0xed69,	// (0x0007d97f) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0007dcf2) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0007dcf2) popup_call_audio_in_window_g

0xed75,	// (0x0007d98b) popup_call_audio_in_window_t1_ParamLimits

0xed75,	// (0x0007d98b) popup_call_audio_in_window_t1

0xed91,	// (0x0007d9a7) popup_call_audio_in_window_t2_ParamLimits

0xed91,	// (0x0007d9a7) popup_call_audio_in_window_t2

0xedad,	// (0x0007d9c3) popup_call_audio_in_window_t3_ParamLimits

0xedad,	// (0x0007d9c3) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0007dcf9) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0007dcf9) popup_call_audio_in_window_t

0xed3b,	// (0x0007d951) bg_popup_call_pane_cp01_ParamLimits

0xed3b,	// (0x0007d951) bg_popup_call_pane_cp01

0xed49,	// (0x0007d95f) call_thumbnail_pane_cp02

0xedc0,	// (0x0007d9d6) call_type_pane_cp022

0xedc8,	// (0x0007d9de) popup_call_audio_out_window_g1_ParamLimits

0xedc8,	// (0x0007d9de) popup_call_audio_out_window_g1

0xedda,	// (0x0007d9f0) popup_call_audio_out_window_g2_ParamLimits

0xedda,	// (0x0007d9f0) popup_call_audio_out_window_g2

0xede6,	// (0x0007d9fc) popup_call_audio_out_window_g3_ParamLimits

0xede6,	// (0x0007d9fc) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0007dd00) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0007dd00) popup_call_audio_out_window_g

0xedf8,	// (0x0007da0e) popup_call_audio_out_window_t1_ParamLimits

0xedf8,	// (0x0007da0e) popup_call_audio_out_window_t1

0xee10,	// (0x0007da26) popup_call_audio_out_window_t2_ParamLimits

0xee10,	// (0x0007da26) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0007dd07) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0007dd07) popup_call_audio_out_window_t

0xee25,	// (0x0007da3b) bg_popup_call_pane_ParamLimits

0xee25,	// (0x0007da3b) bg_popup_call_pane

0x6512,	// (0x00075128) call_thumbnail_pane_cp_ParamLimits

0x6512,	// (0x00075128) call_thumbnail_pane_cp

0xeea9,	// (0x0007dabf) call_type_pane_cp01_ParamLimits

0xeea9,	// (0x0007dabf) call_type_pane_cp01

0xeeed,	// (0x0007db03) popup_call_audio_first_window_g1_ParamLimits

0xeeed,	// (0x0007db03) popup_call_audio_first_window_g1

0xef39,	// (0x0007db4f) popup_call_audio_first_window_g2_ParamLimits

0xef39,	// (0x0007db4f) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0007dd0c) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0007dd0c) popup_call_audio_first_window_g

0xef7d,	// (0x0007db93) popup_call_audio_first_window_t1_ParamLimits

0xef7d,	// (0x0007db93) popup_call_audio_first_window_t1

0xf029,	// (0x0007dc3f) popup_call_audio_first_window_t4_ParamLimits

0xf029,	// (0x0007dc3f) popup_call_audio_first_window_t4

0x1088,	// (0x0006fc9e) popup_call_audio_first_window_t5_ParamLimits

0x1088,	// (0x0006fc9e) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0007dd11) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0007dd11) popup_call_audio_first_window_t

0x10b7,	// (0x0006fccd) bg_popup_call_pane_cp02

0x10c1,	// (0x0006fcd7) call_type_pane_cp023

0x10c9,	// (0x0006fcdf) popup_call_audio_wait_window_g1

0x10d1,	// (0x0006fce7) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007dd18) popup_call_audio_wait_window_g

0x10d9,	// (0x0006fcef) popup_call_audio_wait_window_t3

0x10e7,	// (0x0006fcfd) bg_popup_call_pane_cp03_ParamLimits

0x10e7,	// (0x0006fcfd) bg_popup_call_pane_cp03

0x1147,	// (0x0006fd5d) call_thumbnail_pane_cp011_ParamLimits

0x1147,	// (0x0006fd5d) call_thumbnail_pane_cp011

0x1153,	// (0x0006fd69) call_type_pane_cp034_ParamLimits

0x1153,	// (0x0006fd69) call_type_pane_cp034

0x118f,	// (0x0006fda5) popup_call_audio_second_window_g1_ParamLimits

0x118f,	// (0x0006fda5) popup_call_audio_second_window_g1

0x11cb,	// (0x0006fde1) popup_call_audio_second_window_g2_ParamLimits

0x11cb,	// (0x0006fde1) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0007dd1d) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0007dd1d) popup_call_audio_second_window_g

0x1207,	// (0x0006fe1d) popup_call_audio_second_window_t1_ParamLimits

0x1207,	// (0x0006fe1d) popup_call_audio_second_window_t1

0x1288,	// (0x0006fe9e) popup_call_audio_second_window_t2_ParamLimits

0x1288,	// (0x0006fe9e) popup_call_audio_second_window_t2

0x12be,	// (0x0006fed4) popup_call_audio_second_window_t3_ParamLimits

0x12be,	// (0x0006fed4) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0007dd22) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0007dd22) popup_call_audio_second_window_t

0x10b7,	// (0x0006fccd) bg_popup_call_pane_cp04

0x12f4,	// (0x0006ff0a) list_conf_pane

0x12fc,	// (0x0006ff12) popup_call_audio_conf_window_t1

0x130a,	// (0x0006ff20) call_thumbnail_pane_g1

0x1312,	// (0x0006ff28) bg_pinb_pane_ParamLimits

0x1312,	// (0x0006ff28) bg_pinb_pane

0x1320,	// (0x0006ff36) find_pinb_pane

0x1329,	// (0x0006ff3f) listscroll_pinb_pane_ParamLimits

0x1329,	// (0x0006ff3f) listscroll_pinb_pane

0x1338,	// (0x0006ff4e) pinb_bg_pane_g1

0x6536,	// (0x0007514c) pinb_bg_pane_g2

0x6542,	// (0x00075158) pinb_bg_pane_g3

0x654e,	// (0x00075164) pinb_bg_pane_g4

0x655a,	// (0x00075170) pinb_bg_pane_g5

0x6566,	// (0x0007517c) pinb_bg_pane_g6

0x6571,	// (0x00075187) pinb_bg_pane_g7

0x657c,	// (0x00075192) pinb_bg_pane_g8

0x6587,	// (0x0007519d) pinb_bg_pane_g9

0x6591,	// (0x000751a7) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0007dd29) pinb_bg_pane_g

0x65ae,	// (0x000751c4) grid_pinb_pane

0x65b9,	// (0x000751cf) list_pinb_pane

0x65c4,	// (0x000751da) scroll_pane_cp01_ParamLimits

0x65c4,	// (0x000751da) scroll_pane_cp01

0x1342,	// (0x0006ff58) find_pinb_pane_g1_ParamLimits

0x1342,	// (0x0006ff58) find_pinb_pane_g1

0x135a,	// (0x0006ff70) find_pinb_pane_t1

0x136c,	// (0x0006ff82) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0007dd43) find_pinb_pane_t

0x1381,	// (0x0006ff97) input_focus_pane_cp01_ParamLimits

0x1381,	// (0x0006ff97) input_focus_pane_cp01

0x65d6,	// (0x000751ec) cell_pinb_pane_ParamLimits

0x65d6,	// (0x000751ec) cell_pinb_pane

0x65fe,	// (0x00075214) cell_pinb_pane_g1_ParamLimits

0x65fe,	// (0x00075214) cell_pinb_pane_g1

0x6613,	// (0x00075229) cell_pinb_pane_g2_ParamLimits

0x6613,	// (0x00075229) cell_pinb_pane_g2

0x138d,	// (0x0006ffa3) cell_pinb_pane_g3_ParamLimits

0x138d,	// (0x0006ffa3) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0007dd48) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0007dd48) cell_pinb_pane_g

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp01

0x661f,	// (0x00075235) list_pinb_item_pane_ParamLimits

0x661f,	// (0x00075235) list_pinb_item_pane

0x10b7,	// (0x0006fccd) list_highlight_pane_cp02

0x6645,	// (0x0007525b) list_pinb_item_pane_g1_ParamLimits

0x6645,	// (0x0007525b) list_pinb_item_pane_g1

0x6652,	// (0x00075268) list_pinb_item_pane_g2_ParamLimits

0x6652,	// (0x00075268) list_pinb_item_pane_g2

0x665e,	// (0x00075274) list_pinb_item_pane_g3_ParamLimits

0x665e,	// (0x00075274) list_pinb_item_pane_g3

0x666f,	// (0x00075285) list_pinb_item_pane_g4_ParamLimits

0x666f,	// (0x00075285) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0007dd4f) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0007dd4f) list_pinb_item_pane_g

0x667b,	// (0x00075291) list_pinb_item_pane_t1_ParamLimits

0x667b,	// (0x00075291) list_pinb_item_pane_t1

0x66ac,	// (0x000752c2) calc_display_pane

0x66ca,	// (0x000752e0) calc_paper_pane

0x66e6,	// (0x000752fc) grid_calc_pane

0x10b7,	// (0x0006fccd) bg_list_pane_cp01

0x6712,	// (0x00075328) clock_g1

0x671a,	// (0x00075330) clock_g2

0x0001,

0xf142,	// (0x0007dd58) clock_g

0x6724,	// (0x0007533a) clock_t1_ParamLimits

0x6724,	// (0x0007533a) clock_t1

0x6739,	// (0x0007534f) clock_t2_ParamLimits

0x6739,	// (0x0007534f) clock_t2

0x674b,	// (0x00075361) clock_t3_ParamLimits

0x674b,	// (0x00075361) clock_t3

0x675d,	// (0x00075373) clock_t4_ParamLimits

0x675d,	// (0x00075373) clock_t4

0x676f,	// (0x00075385) clock_t5_ParamLimits

0x676f,	// (0x00075385) clock_t5

0x6784,	// (0x0007539a) clock_t6_ParamLimits

0x6784,	// (0x0007539a) clock_t6

0x6796,	// (0x000753ac) clock_t7_ParamLimits

0x6796,	// (0x000753ac) clock_t7

0x67a8,	// (0x000753be) clock_t8_ParamLimits

0x67a8,	// (0x000753be) clock_t8

0x67be,	// (0x000753d4) clock_t9_ParamLimits

0x67be,	// (0x000753d4) clock_t9

0x0008,

0xf147,	// (0x0007dd5d) clock_t_ParamLimits

0xf147,	// (0x0007dd5d) clock_t

0x1399,	// (0x0006ffaf) popup_clock_analogue_window_cp02

0x1399,	// (0x0006ffaf) popup_clock_digital_window_cp01

0x13a1,	// (0x0006ffb7) listscroll_help_pane

0x10b7,	// (0x0006fccd) phob_pre_status_pane

0x13ab,	// (0x0006ffc1) grid_qdial_pane

0x1312,	// (0x0006ff28) listscroll_mce_pane

0x1312,	// (0x0006ff28) bg_notes_pane

0x13b5,	// (0x0006ffcb) list_notes_pane

0x67d4,	// (0x000753ea) scroll_pane_cp06

0x13c3,	// (0x0006ffd9) bg_calc_paper_pane

0x67e3,	// (0x000753f9) list_calc_pane

0x13d7,	// (0x0006ffed) bg_calc_display_pane

0x67fd,	// (0x00075413) calc_display_pane_t1

0x6812,	// (0x00075428) calc_display_pane_t2

0x6827,	// (0x0007543d) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0007dd70) calc_display_pane_t

0x6839,	// (0x0007544f) cell_calc_pane_ParamLimits

0x6839,	// (0x0007544f) cell_calc_pane

0x13e3,	// (0x0006fff9) bg_calc_paper_pane_g1

0x13fb,	// (0x00070011) bg_calc_paper_pane_g2

0x13ef,	// (0x00070005) bg_calc_paper_pane_g3

0x1413,	// (0x00070029) bg_calc_paper_pane_g4

0x1407,	// (0x0007001d) bg_calc_paper_pane_g5

0x6866,	// (0x0007547c) bg_calc_paper_pane_g6

0x6877,	// (0x0007548d) bg_calc_paper_pane_g7

0x6888,	// (0x0007549e) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0007dd77) bg_calc_paper_pane_g

0x6899,	// (0x000754af) calc_bg_paper_pane_g9

0x68aa,	// (0x000754c0) list_calc_item_pane_ParamLimits

0x68aa,	// (0x000754c0) list_calc_item_pane

0x141f,	// (0x00070035) list_calc_item_pane_g1

0x68d9,	// (0x000754ef) list_calc_item_pane_t1_ParamLimits

0x68d9,	// (0x000754ef) list_calc_item_pane_t1

0x68eb,	// (0x00075501) list_calc_item_pane_t2_ParamLimits

0x68eb,	// (0x00075501) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0007dd88) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0007dd88) list_calc_item_pane_t

0x142c,	// (0x00070042) cell_calc_pane_g1

0x1436,	// (0x0007004c) grid_highlight_pane_cp02

0x3787,	// (0x0007239d) bg_calc_display_pane_g1

0x691b,	// (0x00075531) bg_calc_display_pane_g2

0x6925,	// (0x0007553b) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0007dd92) bg_calc_display_pane_g

0x692e,	// (0x00075544) cell_qdial_pane_ParamLimits

0x692e,	// (0x00075544) cell_qdial_pane

0x6942,	// (0x00075558) cell_qdial_pane_g1_ParamLimits

0x6942,	// (0x00075558) cell_qdial_pane_g1

0x694f,	// (0x00075565) cell_qdial_pane_g2_ParamLimits

0x694f,	// (0x00075565) cell_qdial_pane_g2

0x1458,	// (0x0007006e) cell_qdial_pane_g3_ParamLimits

0x1458,	// (0x0007006e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0007dd99) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0007dd99) cell_qdial_pane_g

0x696d,	// (0x00075583) cell_qdial_pane_t1_ParamLimits

0x696d,	// (0x00075583) cell_qdial_pane_t1

0x6985,	// (0x0007559b) cell_qdial_pane_t2_ParamLimits

0x6985,	// (0x0007559b) cell_qdial_pane_t2

0x6998,	// (0x000755ae) cell_qdial_pane_t3_ParamLimits

0x6998,	// (0x000755ae) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0007dda2) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0007dda2) cell_qdial_pane_t

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp04

0x1464,	// (0x0007007a) thumbnail_qdial_pane_ParamLimits

0x1464,	// (0x0007007a) thumbnail_qdial_pane

0x14c0,	// (0x000700d6) list_help_pane

0x14c9,	// (0x000700df) scroll_pane_cp02

0x69ab,	// (0x000755c1) help_list_pane_t1_ParamLimits

0x69ab,	// (0x000755c1) help_list_pane_t1

0x69de,	// (0x000755f4) bg_notes_pane_g2

0x69e6,	// (0x000755fc) bg_notes_pane_g3

0x69ee,	// (0x00075604) notes_bg_pane_g1

0x69f6,	// (0x0007560c) notes_bg_pane_g4

0x69fe,	// (0x00075614) notes_bg_pane_g5

0x6a06,	// (0x0007561c) notes_bg_pane_g6

0x6a0e,	// (0x00075624) notes_bg_pane_g7

0x6a16,	// (0x0007562c) notes_bg_pane_g8

0x6a1e,	// (0x00075634) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0007ddc0) notes_bg_pane_g

0x6a26,	// (0x0007563c) list_notes_text_pane_ParamLimits

0x6a26,	// (0x0007563c) list_notes_text_pane

0x14d2,	// (0x000700e8) list_notes_text_pane_g1

0x5065,	// (0x00073c7b) list_notes_text_pane_t1

0x6a4e,	// (0x00075664) listscroll_cale_week_pane

0x6a73,	// (0x00075689) bg_cale_heading_pane

0x14f5,	// (0x0007010b) bg_cale_pane_cp01

0x6a95,	// (0x000756ab) cale_week_corner_pane

0x6aaf,	// (0x000756c5) cale_week_day_heading_pane

0x6ad1,	// (0x000756e7) cale_week_scroll_pane_g1

0x6aee,	// (0x00075704) cale_week_scroll_pane_g2

0x6b01,	// (0x00075717) cale_week_scroll_pane_g3

0x6b14,	// (0x0007572a) cale_week_scroll_pane_g4

0x6b27,	// (0x0007573d) cale_week_scroll_pane_g5

0x6b3a,	// (0x00075750) cale_week_scroll_pane_g6

0x6b4d,	// (0x00075763) cale_week_scroll_pane_g7

0x6b60,	// (0x00075776) cale_week_scroll_pane_g8

0x6b75,	// (0x0007578b) cale_week_scroll_pane_g9

0x6b88,	// (0x0007579e) cale_week_scroll_pane_g10

0x6b9b,	// (0x000757b1) cale_week_scroll_pane_g11

0x6bae,	// (0x000757c4) cale_week_scroll_pane_g12

0x6bc5,	// (0x000757db) cale_week_scroll_pane_g13

0x6be0,	// (0x000757f6) cale_week_scroll_pane_g14

0x6bfb,	// (0x00075811) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0007ddcf) cale_week_scroll_pane_g

0x6c16,	// (0x0007582c) cale_week_time_pane

0x6c2b,	// (0x00075841) grid_cale_week_pane

0x1525,	// (0x0007013b) scroll_pane_cp08

0x6c4a,	// (0x00075860) cell_cale_week_pane_ParamLimits

0x6c4a,	// (0x00075860) cell_cale_week_pane

0x6cac,	// (0x000758c2) cale_week_day_heading_pane_t1

0x6ce7,	// (0x000758fd) cale_week_day_heading_pane_t2

0x6d22,	// (0x00075938) cale_week_day_heading_pane_t3

0x6d5d,	// (0x00075973) cale_week_day_heading_pane_t4

0x6d98,	// (0x000759ae) cale_week_day_heading_pane_t5

0x6dd3,	// (0x000759e9) cale_week_day_heading_pane_t6

0x6e0e,	// (0x00075a24) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0007ddee) cale_week_day_heading_pane_t

0x1542,	// (0x00070158) bg_cale_side_pane

0x6e49,	// (0x00075a5f) cale_week_time_pane_t1

0x6e63,	// (0x00075a79) cale_week_time_pane_t2

0x6e7d,	// (0x00075a93) cale_week_time_pane_t3

0x6e97,	// (0x00075aad) cale_week_time_pane_t4

0x6eb1,	// (0x00075ac7) cale_week_time_pane_t5

0x6ecb,	// (0x00075ae1) cale_week_time_pane_t6

0x6eeb,	// (0x00075b01) cale_week_time_pane_t7

0x6f0d,	// (0x00075b23) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0007ddfd) cale_week_time_pane_t

0x6f31,	// (0x00075b47) cell_cale_week_pane_g2

0x6f44,	// (0x00075b5a) cell_cale_week_pane_g3_ParamLimits

0x6f44,	// (0x00075b5a) cell_cale_week_pane_g3

0x1550,	// (0x00070166) grid_highlight_pane_cp07

0x1558,	// (0x0007016e) listscroll_gms_pane

0x1562,	// (0x00070178) grid_gms_pane

0x156b,	// (0x00070181) listscroll_gms_pane_g1

0x1573,	// (0x00070189) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0007de0e) listscroll_gms_pane_g

0x6f5c,	// (0x00075b72) scroll_pane_cp010

0x6f67,	// (0x00075b7d) cell_gms_pane_ParamLimits

0x6f67,	// (0x00075b7d) cell_gms_pane

0x6f7a,	// (0x00075b90) cell_gms_pane_g1

0x157b,	// (0x00070191) cell_gms_pane_g2

0x1583,	// (0x00070199) cell_gms_pane_g3

0x158c,	// (0x000701a2) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0007de13) cell_gms_pane_g

0x1595,	// (0x000701ab) grid_highlight_pane_cp09

0x942c,	// (0x00078042) phob_pre_status_pane_g1

0x9434,	// (0x0007804a) phob_pre_status_pane_g2

0x943c,	// (0x00078052) phob_pre_status_pane_g3

0x9444,	// (0x0007805a) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0007e202) phob_pre_status_pane_g

0x9454,	// (0x0007806a) phob_pre_status_pane_t1

0x9464,	// (0x0007807a) phob_pre_status_pane_t2

0x9474,	// (0x0007808a) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0007e20d) phob_pre_status_pane_t

0x10b7,	// (0x0006fccd) bg_list_pane_cp05

0x6f8a,	// (0x00075ba0) grid_vorec_pane

0x6f96,	// (0x00075bac) vorec_t1

0x6fa4,	// (0x00075bba) vorec_t2

0x6fb2,	// (0x00075bc8) vorec_t3

0x6fc0,	// (0x00075bd6) vorec_t4

0x6fce,	// (0x00075be4) vorec_t5

0x6fdc,	// (0x00075bf2) vorec_t6

0x0006,

0xf206,	// (0x0007de1c) vorec_t

0x6ff8,	// (0x00075c0e) wait_bar_pane_cp01

0x7000,	// (0x00075c16) cell_vorec_pane_ParamLimits

0x7000,	// (0x00075c16) cell_vorec_pane

0x159d,	// (0x000701b3) cell_vorec_pane_g1

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp05

0x7023,	// (0x00075c39) cams_zoom_pane

0x702f,	// (0x00075c45) image_vga_pane

0x703e,	// (0x00075c54) main_camera_pane_g1

0x704c,	// (0x00075c62) main_camera_pane_g2

0x7058,	// (0x00075c6e) main_camera_pane_g3

0x7064,	// (0x00075c7a) main_camera_pane_g4

0x7070,	// (0x00075c86) main_camera_pane_g5

0x707c,	// (0x00075c92) main_camera_pane_g6

0x7088,	// (0x00075c9e) main_camera_pane_g7

0x0007,

0xf215,	// (0x0007de2b) main_camera_pane_g

0x7094,	// (0x00075caa) main_camera_pane_t1

0x70a6,	// (0x00075cbc) main_camera_pane_t2

0x0001,

0xf226,	// (0x0007de3c) main_camera_pane_t

0x70c7,	// (0x00075cdd) cams_zoom_pane_cp_ParamLimits

0x70c7,	// (0x00075cdd) cams_zoom_pane_cp

0x70eb,	// (0x00075d01) image_cif_pane_ParamLimits

0x70eb,	// (0x00075d01) image_cif_pane

0x7109,	// (0x00075d1f) image_subqcif_pane

0x7111,	// (0x00075d27) main_video_pane_g1_ParamLimits

0x7111,	// (0x00075d27) main_video_pane_g1

0x7131,	// (0x00075d47) main_video_pane_g2_ParamLimits

0x7131,	// (0x00075d47) main_video_pane_g2

0x7161,	// (0x00075d77) main_video_pane_g3_ParamLimits

0x7161,	// (0x00075d77) main_video_pane_g3

0x718a,	// (0x00075da0) main_video_pane_g4_ParamLimits

0x718a,	// (0x00075da0) main_video_pane_g4

0x71b3,	// (0x00075dc9) main_video_pane_g5_ParamLimits

0x71b3,	// (0x00075dc9) main_video_pane_g5

0x15b3,	// (0x000701c9) main_video_pane_g6_ParamLimits

0x15b3,	// (0x000701c9) main_video_pane_g6

0x0006,

0xf22b,	// (0x0007de41) main_video_pane_g_ParamLimits

0xf22b,	// (0x0007de41) main_video_pane_g

0x71d5,	// (0x00075deb) main_video_pane_t1_ParamLimits

0x71d5,	// (0x00075deb) main_video_pane_t1

0x15cd,	// (0x000701e3) cams_zoom_pane_g1

0x15d6,	// (0x000701ec) cams_zoom_pane_g2

0x15df,	// (0x000701f5) cams_zoom_pane_g3

0x15e8,	// (0x000701fe) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0007de50) cams_zoom_pane_g

0x721f,	// (0x00075e35) grid_cams_pane

0x722d,	// (0x00075e43) linegrid_cams_pane

0x723b,	// (0x00075e51) cell_cams_pane_ParamLimits

0x723b,	// (0x00075e51) cell_cams_pane

0x15f1,	// (0x00070207) cams_burst_image_pane

0x15f9,	// (0x0007020f) cell_cams_pane_g1

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp03

0x142c,	// (0x00070042) mp_bg_pane_g1

0x10b7,	// (0x0006fccd) bg_list_pane_cp03

0x3261,	// (0x00071e77) bg_mp_pane

0x3269,	// (0x00071e7f) grid_mp_pane

0x3271,	// (0x00071e87) media_player_g1

0x3279,	// (0x00071e8f) media_player_t1

0x3287,	// (0x00071e9d) media_player_t2

0x3295,	// (0x00071eab) media_player_t3

0x32a3,	// (0x00071eb9) media_player_t4

0x32b1,	// (0x00071ec7) media_player_t5

0x32bf,	// (0x00071ed5) media_player_t6

0x32cd,	// (0x00071ee3) media_player_t7

0x0006,

0xf5d6,	// (0x0007e1ec) media_player_t

0x32db,	// (0x00071ef1) wait_bar_pane_cp02

0xf5bb,	// (0x0007e1d1) main_usb_pane_t

0x9423,	// (0x00078039) cell_mp_pane

0x142c,	// (0x00070042) cell_mp_pane_g1

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp06

0x1601,	// (0x00070217) grid_skin_colour_pane

0x1609,	// (0x0007021f) list_highlight_pane_cp03

0x7266,	// (0x00075e7c) skin_g1

0x1611,	// (0x00070227) skin_t1

0x1620,	// (0x00070236) skin_t2

0x0001,

0xf26f,	// (0x0007de85) skin_t

0x7270,	// (0x00075e86) cell_skin_colour_pane_ParamLimits

0x7270,	// (0x00075e86) cell_skin_colour_pane

0x162e,	// (0x00070244) cell_skin_colour_pane_g1

0x72f4,	// (0x00075f0a) call_video_g1_ParamLimits

0x72f4,	// (0x00075f0a) call_video_g1

0x7304,	// (0x00075f1a) call_video_g2_ParamLimits

0x7304,	// (0x00075f1a) call_video_g2

0x0001,

0xf274,	// (0x0007de8a) call_video_g_ParamLimits

0xf274,	// (0x0007de8a) call_video_g

0x735e,	// (0x00075f74) call_video_uplink_pane_cp1_ParamLimits

0x735e,	// (0x00075f74) call_video_uplink_pane_cp1

0x1640,	// (0x00070256) call_video_uplink_pane_cp2

0x742a,	// (0x00076040) video_down_crop_pane_ParamLimits

0x742a,	// (0x00076040) video_down_crop_pane

0x7528,	// (0x0007613e) video_down_pane_ParamLimits

0x7528,	// (0x0007613e) video_down_pane

0x1648,	// (0x0007025e) video_down_subqcif_pane_ParamLimits

0x1648,	// (0x0007025e) video_down_subqcif_pane

0x1660,	// (0x00070276) video_down_subqcif_pane_cp_ParamLimits

0x1660,	// (0x00070276) video_down_subqcif_pane_cp

0x1686,	// (0x0007029c) im_reading_pane_ParamLimits

0x1686,	// (0x0007029c) im_reading_pane

0x764a,	// (0x00076260) im_writing_pane_ParamLimits

0x764a,	// (0x00076260) im_writing_pane

0x7668,	// (0x0007627e) im_reading_pane_t1

0x16a0,	// (0x000702b6) list_im_pane

0x16b1,	// (0x000702c7) scroll_pane_cp07

0x76bc,	// (0x000762d2) im_writing_pane_t1_ParamLimits

0x76bc,	// (0x000762d2) im_writing_pane_t1

0x16ca,	// (0x000702e0) im_writing_pane_t2_ParamLimits

0x16ca,	// (0x000702e0) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0007de94) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0007de94) im_writing_pane_t

0x10b7,	// (0x0006fccd) input_focus_pane_cp04

0x10b7,	// (0x0006fccd) input_focus_pane_cp05

0x76d1,	// (0x000762e7) list_im_single_pane_ParamLimits

0x76d1,	// (0x000762e7) list_im_single_pane

0x76f5,	// (0x0007630b) list_single_im_pane_t1

0x93e7,	// (0x00077ffd) blid_accuracy_pane

0x93ef,	// (0x00078005) blid_compass_pane

0x93f9,	// (0x0007800f) main_location_t1

0x9407,	// (0x0007801d) main_location_t2

0x9415,	// (0x0007802b) main_location_t3

0x0002,

0xf5e5,	// (0x0007e1fb) main_location_t

0x10b7,	// (0x0006fccd) aid_levels_location

0x142c,	// (0x00070042) blid_accuracy_pane_g1

0x142c,	// (0x00070042) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0007def6) blid_accuracy_pane_g

0x1712,	// (0x00070328) wml_content_pane

0x1750,	// (0x00070366) wml_button_pane_ParamLimits

0x1750,	// (0x00070366) wml_button_pane

0x7704,	// (0x0007631a) wml_list_single_large_pane_ParamLimits

0x7704,	// (0x0007631a) wml_list_single_large_pane

0x772e,	// (0x00076344) wml_list_single_medium_pane_ParamLimits

0x772e,	// (0x00076344) wml_list_single_medium_pane

0x775f,	// (0x00076375) wml_list_single_small_pane_ParamLimits

0x775f,	// (0x00076375) wml_list_single_small_pane

0x1764,	// (0x0007037a) wml_selection_box_pane_ParamLimits

0x1764,	// (0x0007037a) wml_selection_box_pane

0x1777,	// (0x0007038d) wml_list_single_pane_t1

0x1786,	// (0x0007039c) wml_list_single_medium_pane_t1

0x1795,	// (0x000703ab) wml_list_single_large_pane_t1

0x17a4,	// (0x000703ba) input_focus_pane_cp02_ParamLimits

0x17a4,	// (0x000703ba) input_focus_pane_cp02

0x17b7,	// (0x000703cd) wml_selection_box_pane_g1

0x17c0,	// (0x000703d6) wml_selection_box_pane_t1_ParamLimits

0x17c0,	// (0x000703d6) wml_selection_box_pane_t1

0x1312,	// (0x0006ff28) bg_wml_button_pane_ParamLimits

0x1312,	// (0x0006ff28) bg_wml_button_pane

0x17d8,	// (0x000703ee) wml_button_pane_g1

0x17e0,	// (0x000703f6) wml_button_pane_t1

0x17d8,	// (0x000703ee) wml_button_bg_pane_g1

0x17f0,	// (0x00070406) wml_button_bg_pane_g2

0x17f8,	// (0x0007040e) wml_button_bg_pane_g3

0x1800,	// (0x00070416) wml_button_bg_pane_g4

0x1808,	// (0x0007041e) wml_button_bg_pane_g5

0x1810,	// (0x00070426) wml_button_bg_pane_g6

0x1818,	// (0x0007042e) wml_button_bg_pane_g7

0x1820,	// (0x00070436) wml_button_bg_pane_g8

0x1828,	// (0x0007043e) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0007de99) wml_button_bg_pane_g

0x7799,	// (0x000763af) bg_list_pane_cp02

0x1830,	// (0x00070446) mce_header_pane_ParamLimits

0x1830,	// (0x00070446) mce_header_pane

0x1846,	// (0x0007045c) mce_icon_pane

0x1846,	// (0x0007045c) mce_image_pane

0x184f,	// (0x00070465) mce_text_pane_ParamLimits

0x184f,	// (0x00070465) mce_text_pane

0x77a3,	// (0x000763b9) scroll_pane_cp03

0x1748,	// (0x0007035e) scroll_pane_cp04

0x1862,	// (0x00070478) scroll_pane_cp05_ParamLimits

0x1862,	// (0x00070478) scroll_pane_cp05

0x77ad,	// (0x000763c3) mce_header_field_pane_ParamLimits

0x77ad,	// (0x000763c3) mce_header_field_pane

0x77cd,	// (0x000763e3) mce_header_field_pane_2_ParamLimits

0x77cd,	// (0x000763e3) mce_header_field_pane_2

0x77e3,	// (0x000763f9) mce_header_field_pane_3

0x77eb,	// (0x00076401) list_single_mce_message_pane_ParamLimits

0x77eb,	// (0x00076401) list_single_mce_message_pane

0x7816,	// (0x0007642c) list_single_mce_smart_pane_ParamLimits

0x7816,	// (0x0007642c) list_single_mce_smart_pane

0x186e,	// (0x00070484) input_focus_pane_cp03

0x1877,	// (0x0007048d) list_header_data_pane

0x784c,	// (0x00076462) mce_header_field_pane_t1

0x785a,	// (0x00076470) list_single_mce_header_pane_ParamLimits

0x785a,	// (0x00076470) list_single_mce_header_pane

0x187f,	// (0x00070495) list_single_mce_header_pane_t1

0x188e,	// (0x000704a4) list_single_mce_message_pane_g1

0x1896,	// (0x000704ac) list_single_mce_message_pane_t1

0x78ac,	// (0x000764c2) bg_cale_heading_pane_cp01_ParamLimits

0x78ac,	// (0x000764c2) bg_cale_heading_pane_cp01

0x18a4,	// (0x000704ba) bg_cale_pane_cp02_ParamLimits

0x18a4,	// (0x000704ba) bg_cale_pane_cp02

0x78ef,	// (0x00076505) cale_month_corner_pane

0x7909,	// (0x0007651f) cale_month_day_heading_pane_ParamLimits

0x7909,	// (0x0007651f) cale_month_day_heading_pane

0x7964,	// (0x0007657a) cale_month_pane_g1_ParamLimits

0x7964,	// (0x0007657a) cale_month_pane_g1

0x799c,	// (0x000765b2) cale_month_pane_g2_ParamLimits

0x799c,	// (0x000765b2) cale_month_pane_g2

0x79c5,	// (0x000765db) cale_month_pane_g3_ParamLimits

0x79c5,	// (0x000765db) cale_month_pane_g3

0x7a11,	// (0x00076627) cale_month_pane_g4_ParamLimits

0x7a11,	// (0x00076627) cale_month_pane_g4

0x7a5d,	// (0x00076673) cale_month_pane_g5_ParamLimits

0x7a5d,	// (0x00076673) cale_month_pane_g5

0x7aa9,	// (0x000766bf) cale_month_pane_g6_ParamLimits

0x7aa9,	// (0x000766bf) cale_month_pane_g6

0x7af5,	// (0x0007670b) cale_month_pane_g7_ParamLimits

0x7af5,	// (0x0007670b) cale_month_pane_g7

0x7b59,	// (0x0007676f) cale_month_pane_g8_ParamLimits

0x7b59,	// (0x0007676f) cale_month_pane_g8

0x7bbd,	// (0x000767d3) cale_month_pane_g9_ParamLimits

0x7bbd,	// (0x000767d3) cale_month_pane_g9

0x7c1b,	// (0x00076831) cale_month_pane_g10_ParamLimits

0x7c1b,	// (0x00076831) cale_month_pane_g10

0x7c77,	// (0x0007688d) cale_month_pane_g11_ParamLimits

0x7c77,	// (0x0007688d) cale_month_pane_g11

0x7ccb,	// (0x000768e1) cale_month_pane_g12_ParamLimits

0x7ccb,	// (0x000768e1) cale_month_pane_g12

0x7d21,	// (0x00076937) cale_month_pane_g13_ParamLimits

0x7d21,	// (0x00076937) cale_month_pane_g13

0x000c,

0xf296,	// (0x0007deac) cale_month_pane_g_ParamLimits

0xf296,	// (0x0007deac) cale_month_pane_g

0x7d77,	// (0x0007698d) cale_month_week_pane

0x7d8c,	// (0x000769a2) grid_cale_month_pane_ParamLimits

0x7d8c,	// (0x000769a2) grid_cale_month_pane

0x7dda,	// (0x000769f0) cale_month_day_heading_pane_t1

0x7e60,	// (0x00076a76) cale_month_day_heading_pane_t2

0x7ef1,	// (0x00076b07) cale_month_day_heading_pane_t3

0x7f82,	// (0x00076b98) cale_month_day_heading_pane_t4

0x8013,	// (0x00076c29) cale_month_day_heading_pane_t5

0x80a4,	// (0x00076cba) cale_month_day_heading_pane_t6

0x8135,	// (0x00076d4b) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0007dec7) cale_month_day_heading_pane_t

0x1542,	// (0x00070158) bg_cale_side_pane_cp01

0x81de,	// (0x00076df4) cale_month_week_pane_t1

0x81f7,	// (0x00076e0d) cale_month_week_pane_t2

0x8210,	// (0x00076e26) cale_month_week_pane_t3

0x8229,	// (0x00076e3f) cale_month_week_pane_t4

0x8242,	// (0x00076e58) cale_month_week_pane_t5

0x8263,	// (0x00076e79) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0007ded6) cale_month_week_pane_t

0x8284,	// (0x00076e9a) cell_cale_month_pane_ParamLimits

0x8284,	// (0x00076e9a) cell_cale_month_pane

0x83a6,	// (0x00076fbc) cell_cale_month_pane_g1

0x83b2,	// (0x00076fc8) cell_cale_month_pane_t1_ParamLimits

0x83b2,	// (0x00076fc8) cell_cale_month_pane_t1

0x1550,	// (0x00070166) grid_highlight_pane_cp08

0x142c,	// (0x00070042) main_smil_g1

0x83d2,	// (0x00076fe8) smil_status_pane

0x18e3,	// (0x000704f9) smil_text_pane

0x3181,	// (0x00071d97) bg_popup_call3_rect_pane_g8

0x3189,	// (0x00071d9f) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0007e18f) bg_popup_call3_rect_pane_g

0x33f1,	// (0x00072007) smil_status_volume_pane_g1

0x18ed,	// (0x00070503) smil_status_pane_t1

0x980b,	// (0x00078421) volume_smil_pane

0x1904,	// (0x0007051a) list_smil_text_pane

0x83e5,	// (0x00076ffb) scroll_pane_cp011

0x83f0,	// (0x00077006) smil_text_list_pane_t1_ParamLimits

0x83f0,	// (0x00077006) smil_text_list_pane_t1

0x8468,	// (0x0007707e) aid_volume_smil_ParamLimits

0x8468,	// (0x0007707e) aid_volume_smil

0x142c,	// (0x00070042) smil_volume_pane_g1

0x142c,	// (0x00070042) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0007def6) smil_volume_pane_g

0x6a4e,	// (0x00075664) listscroll_cale_day_pane

0x190e,	// (0x00070524) bg_cale_pane

0x1926,	// (0x0007053c) list_cale_pane

0x1949,	// (0x0007055f) scroll_pane_cp09

0x195a,	// (0x00070570) cale_bg_pane_g1

0x1962,	// (0x00070578) cale_bg_pane_g2

0x196a,	// (0x00070580) cale_bg_pane_g3

0x1972,	// (0x00070588) cale_bg_pane_g4

0x197a,	// (0x00070590) cale_bg_pane_g5

0x1982,	// (0x00070598) cale_bg_pane_g6

0x198a,	// (0x000705a0) cale_bg_pane_g7

0x1992,	// (0x000705a8) cale_bg_pane_g8

0x199a,	// (0x000705b0) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0007defb) cale_bg_pane_g

0x848a,	// (0x000770a0) list_cale_time_pane_ParamLimits

0x848a,	// (0x000770a0) list_cale_time_pane

0x19a2,	// (0x000705b8) list_cale_time_pane_g1_ParamLimits

0x19a2,	// (0x000705b8) list_cale_time_pane_g1

0x19ae,	// (0x000705c4) list_cale_time_pane_g2_ParamLimits

0x19ae,	// (0x000705c4) list_cale_time_pane_g2

0x84a6,	// (0x000770bc) list_cale_time_pane_g3_ParamLimits

0x84a6,	// (0x000770bc) list_cale_time_pane_g3

0x84b4,	// (0x000770ca) list_cale_time_pane_g4_ParamLimits

0x84b4,	// (0x000770ca) list_cale_time_pane_g4

0x84c2,	// (0x000770d8) list_cale_time_pane_g5_ParamLimits

0x84c2,	// (0x000770d8) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0007df0e) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0007df0e) list_cale_time_pane_g

0x19c8,	// (0x000705de) list_cale_time_pane_t1_ParamLimits

0x19c8,	// (0x000705de) list_cale_time_pane_t1

0x19f0,	// (0x00070606) list_cale_time_pane_t2_ParamLimits

0x19f0,	// (0x00070606) list_cale_time_pane_t2

0x8789,	// (0x0007739f) aid_blid_cardinal_pane

0x87cb,	// (0x000773e1) compass_pane_t4

0x1a18,	// (0x0007062e) list_cale_time_pane_t4_ParamLimits

0x1a18,	// (0x0007062e) list_cale_time_pane_t4

0x87d9,	// (0x000773ef) compass_pane_t5

0x87e9,	// (0x000773ff) compass_pane_t6

0x87f7,	// (0x0007740d) compass_pane_t7

0x1e53,	// (0x00070a69) navi_pane_cc_t1

0x1fa8,	// (0x00070bbe) aid_phob_thumbnail_center_pane

0x8eed,	// (0x00077b03) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0007df1b) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0007df1b) list_cale_time_pane_t

0xed3b,	// (0x0007d951) bg_popup_window_pane_cp02_ParamLimits

0xed3b,	// (0x0007d951) bg_popup_window_pane_cp02

0x1a40,	// (0x00070656) heading_pane_cp01_ParamLimits

0x1a40,	// (0x00070656) heading_pane_cp01

0x1a4c,	// (0x00070662) loc_req_pane_ParamLimits

0x1a4c,	// (0x00070662) loc_req_pane

0x1a5c,	// (0x00070672) loc_type_pane_ParamLimits

0x1a5c,	// (0x00070672) loc_type_pane

0x1a6e,	// (0x00070684) loc_type_pane_t1_ParamLimits

0x1a6e,	// (0x00070684) loc_type_pane_t1

0x1a80,	// (0x00070696) loc_type_pane_t2_ParamLimits

0x1a80,	// (0x00070696) loc_type_pane_t2

0x1a92,	// (0x000706a8) loc_type_pane_t3_ParamLimits

0x1a92,	// (0x000706a8) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0007df22) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0007df22) loc_type_pane_t

0x1aa4,	// (0x000706ba) list_loc_req_pane

0x1aae,	// (0x000706c4) scroll_pane_cp012

0x84d0,	// (0x000770e6) list_single_loc_request_popup_menu_pane_ParamLimits

0x84d0,	// (0x000770e6) list_single_loc_request_popup_menu_pane

0x1ab9,	// (0x000706cf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1ab9,	// (0x000706cf) list_single_loc_request_popup_menu_pane_g1

0x1ac5,	// (0x000706db) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1ac5,	// (0x000706db) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0007df29) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0007df29) list_single_loc_request_popup_menu_pane_g

0x1ad1,	// (0x000706e7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1ad1,	// (0x000706e7) list_single_loc_request_popup_menu_pane_t1

0x84e2,	// (0x000770f8) bg_popup_window_pane_cp03_ParamLimits

0x84e2,	// (0x000770f8) bg_popup_window_pane_cp03

0x84f0,	// (0x00077106) heading_loc_req_pane_ParamLimits

0x84f0,	// (0x00077106) heading_loc_req_pane

0x84fc,	// (0x00077112) popup_dyc_status_message_window_g1_ParamLimits

0x84fc,	// (0x00077112) popup_dyc_status_message_window_g1

0x8508,	// (0x0007711e) popup_dyc_status_message_window_t1_ParamLimits

0x8508,	// (0x0007711e) popup_dyc_status_message_window_t1

0x851a,	// (0x00077130) popup_dyc_status_message_window_t2_ParamLimits

0x851a,	// (0x00077130) popup_dyc_status_message_window_t2

0x852c,	// (0x00077142) popup_dyc_status_message_window_t3_ParamLimits

0x852c,	// (0x00077142) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0007df2e) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0007df2e) popup_dyc_status_message_window_t

0x10b7,	// (0x0006fccd) bg_heading_pane_cp01

0x1ae7,	// (0x000706fd) heading_loc_req_pane_g1

0x1aef,	// (0x00070705) heading_loc_req_pane_g2

0x1af7,	// (0x0007070d) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0007df35) heading_loc_req_pane_g

0x1aff,	// (0x00070715) heading_loc_req_pane_t1

0x1b0e,	// (0x00070724) bg_popup_sub_pane_cp01_ParamLimits

0x1b0e,	// (0x00070724) bg_popup_sub_pane_cp01

0x1b1c,	// (0x00070732) popup_cale_events_window_g1_ParamLimits

0x1b1c,	// (0x00070732) popup_cale_events_window_g1

0x1b3c,	// (0x00070752) popup_cale_events_window_g2_ParamLimits

0x1b3c,	// (0x00070752) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0007df69) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0007df69) popup_cale_events_window_g

0x1b5c,	// (0x00070772) popup_cale_events_window_t1_ParamLimits

0x1b5c,	// (0x00070772) popup_cale_events_window_t1

0x1b6e,	// (0x00070784) popup_cale_events_window_t2_ParamLimits

0x1b6e,	// (0x00070784) popup_cale_events_window_t2

0x1bac,	// (0x000707c2) popup_cale_events_window_t3_ParamLimits

0x1bac,	// (0x000707c2) popup_cale_events_window_t3

0x1be6,	// (0x000707fc) popup_cale_events_window_t4_ParamLimits

0x1be6,	// (0x000707fc) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0007df6e) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0007df6e) popup_cale_events_window_t

0x8556,	// (0x0007716c) call_type_pane

0x1fc0,	// (0x00070bd6) popup_call_status_window_g1

0x8562,	// (0x00077178) popup_call_status_window_g2

0x856e,	// (0x00077184) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0007df77) popup_call_status_window_g

0x1c1c,	// (0x00070832) call_type_pane_g1

0x1c25,	// (0x0007083b) call_type_pane_g2

0x0001,

0xf368,	// (0x0007df7e) call_type_pane_g

0x10b7,	// (0x0006fccd) bg_popup_sub_pane_cp02

0x1c2e,	// (0x00070844) listscroll_popup_wml_pane

0x1c36,	// (0x0007084c) list_wml_pane

0x1c40,	// (0x00070856) scroll_pane_cp013

0x1c4b,	// (0x00070861) list_single_graphic_popup_wml_pane_ParamLimits

0x1c4b,	// (0x00070861) list_single_graphic_popup_wml_pane

0x142c,	// (0x00070042) list_single_graphic_popup_wml_pane_g1

0x1c5f,	// (0x00070875) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0007df83) list_single_graphic_popup_wml_pane_g

0x1c67,	// (0x0007087d) list_single_graphic_popup_wml_pane_t1

0x1c75,	// (0x0007088b) aid_call_pane

0x130a,	// (0x0006ff20) popup_clock_analogue_window_g1

0x130a,	// (0x0006ff20) popup_clock_analogue_window_g2

0x857a,	// (0x00077190) popup_clock_analogue_window_g3

0x857a,	// (0x00077190) popup_clock_analogue_window_g4

0x142c,	// (0x00070042) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0007df88) popup_clock_analogue_window_g

0x8582,	// (0x00077198) popup_clock_analogue_window_t1

0x8590,	// (0x000771a6) clock_digital_number_pane_ParamLimits

0x8590,	// (0x000771a6) clock_digital_number_pane

0x859c,	// (0x000771b2) clock_digital_number_pane_cp02_ParamLimits

0x859c,	// (0x000771b2) clock_digital_number_pane_cp02

0x85a8,	// (0x000771be) clock_digital_number_pane_cp03_ParamLimits

0x85a8,	// (0x000771be) clock_digital_number_pane_cp03

0x85b4,	// (0x000771ca) clock_digital_number_pane_cp04_ParamLimits

0x85b4,	// (0x000771ca) clock_digital_number_pane_cp04

0x85c4,	// (0x000771da) clock_digital_separator_pane_ParamLimits

0x85c4,	// (0x000771da) clock_digital_separator_pane

0x85d0,	// (0x000771e6) popup_clock_digital_window_t1

0x142c,	// (0x00070042) clock_digital_number_pane_g1

0x142c,	// (0x00070042) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0007def6) clock_digital_number_pane_g

0x142c,	// (0x00070042) clock_digital_separator_pane_g1

0x142c,	// (0x00070042) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0007def6) clock_digital_separator_pane_g

0x10b7,	// (0x0006fccd) bg_popup_window_pane_cp04

0x1c85,	// (0x0007089b) heading_pane_cp03

0x1c8d,	// (0x000708a3) listscroll_popup_gms_pane

0x1c95,	// (0x000708ab) grid_large_graphic_popup_pane

0x1c9f,	// (0x000708b5) listscroll_popup_gms_pane_g1

0x1ca7,	// (0x000708bd) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0007df93) listscroll_popup_gms_pane_g

0x1748,	// (0x0007035e) scroll_pane_cp014

0x85ed,	// (0x00077203) cell_large_graphic_popup_pane_ParamLimits

0x85ed,	// (0x00077203) cell_large_graphic_popup_pane

0x8605,	// (0x0007721b) cell_large_graphic_popup_pane_g1_ParamLimits

0x8605,	// (0x0007721b) cell_large_graphic_popup_pane_g1

0x1caf,	// (0x000708c5) cell_large_graphic_popup_pane_g2_ParamLimits

0x1caf,	// (0x000708c5) cell_large_graphic_popup_pane_g2

0x1cbb,	// (0x000708d1) cell_large_graphic_popup_pane_g3_ParamLimits

0x1cbb,	// (0x000708d1) cell_large_graphic_popup_pane_g3

0x1cc8,	// (0x000708de) cell_large_graphic_popup_pane_g4_ParamLimits

0x1cc8,	// (0x000708de) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0007df98) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0007df98) cell_large_graphic_popup_pane_g

0x1cd8,	// (0x000708ee) grid_highlight_pane_cp010

0x142c,	// (0x00070042) bg_popup_call_pane_g1

0x1ce2,	// (0x000708f8) list_single_graphic_popup_conf_pane_ParamLimits

0x1ce2,	// (0x000708f8) list_single_graphic_popup_conf_pane

0x1cf5,	// (0x0007090b) list_highlight_pane_cp01

0x1cfe,	// (0x00070914) list_single_graphic_popup_conf_pane_g1

0x1d06,	// (0x0007091c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0007dfa1) list_single_graphic_popup_conf_pane_g

0x1d0e,	// (0x00070924) list_single_graphic_popup_conf_pane_t1

0x1d1c,	// (0x00070932) linegrid_cams_pane_g1

0x8611,	// (0x00077227) linegrid_cams_pane_g2

0x1583,	// (0x00070199) linegrid_cams_pane_g3

0x1d25,	// (0x0007093b) linegrid_cams_pane_g4

0x861a,	// (0x00077230) linegrid_cams_pane_g5

0x8623,	// (0x00077239) linegrid_cams_pane_g6

0x158c,	// (0x000701a2) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0007dfa6) linegrid_cams_pane_g

0x1d2e,	// (0x00070944) popup_clock_analogue_window

0x1d2e,	// (0x00070944) popup_clock_digital_window

0x10b7,	// (0x0006fccd) popup_phob_thumbnail_window

0x142c,	// (0x00070042) call_video_uplink_pane_g1

0x1d37,	// (0x0007094d) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0007dfb5) call_video_uplink_pane_g

0x1d3f,	// (0x00070955) video_uplink_pane

0x1d47,	// (0x0007095d) mce_image_pane_g1

0x862c,	// (0x00077242) mce_image_pane_g2

0x8636,	// (0x0007724c) mce_image_pane_g3

0x863e,	// (0x00077254) mce_image_pane_g4

0x8646,	// (0x0007725c) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0007dfba) mce_image_pane_g

0x1d51,	// (0x00070967) control_top_pane_stacon_cp01_ParamLimits

0x1d51,	// (0x00070967) control_top_pane_stacon_cp01

0x1d65,	// (0x0007097b) uni_indicator_pane_stacon_cp01_ParamLimits

0x1d65,	// (0x0007097b) uni_indicator_pane_stacon_cp01

0x1d76,	// (0x0007098c) bg_popup_sub_pane_cp03

0x1d80,	// (0x00070996) chi_dic_find_pane

0x864e,	// (0x00077264) listscroll_chi_dic_pane

0x1d88,	// (0x0007099e) main_pane_chidic_g1

0x1d90,	// (0x000709a6) chi_dic_find_pane_t1

0x1d9e,	// (0x000709b4) find_chidic_pane

0x1da7,	// (0x000709bd) chi_dic_list_pane_ParamLimits

0x1da7,	// (0x000709bd) chi_dic_list_pane

0x1db8,	// (0x000709ce) scroll_pane_cp020

0x1dc0,	// (0x000709d6) find_chidic_pane_t1

0x10b7,	// (0x0006fccd) input_focus_pane_cp06

0x8662,	// (0x00077278) list_chi_dic_pane_ParamLimits

0x8662,	// (0x00077278) list_chi_dic_pane

0x867c,	// (0x00077292) list_chi_dic_pane_t1_ParamLimits

0x867c,	// (0x00077292) list_chi_dic_pane_t1

0x10b7,	// (0x0006fccd) list_highlight_pane_cp020

0x1dcf,	// (0x000709e5) bg_cale_heading_pane_g1

0x868f,	// (0x000772a5) bg_cale_heading_pane_g2

0x8697,	// (0x000772ad) bg_cale_heading_pane_g3

0x869f,	// (0x000772b5) bg_cale_heading_pane_g4

0x86a9,	// (0x000772bf) bg_cale_heading_pane_g5

0x86b3,	// (0x000772c9) bg_cale_heading_pane_g6

0x86bb,	// (0x000772d1) bg_cale_heading_pane_g7

0x86c3,	// (0x000772d9) bg_cale_heading_pane_g8

0x86cd,	// (0x000772e3) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0007dfc5) bg_cale_heading_pane_g

0x1dcf,	// (0x000709e5) bg_cale_side_pane_g1

0x86d7,	// (0x000772ed) bg_cale_side_pane_g2

0x86e1,	// (0x000772f7) bg_cale_side_pane_g3

0x86eb,	// (0x00077301) bg_cale_side_pane_g4

0x86f5,	// (0x0007730b) bg_cale_side_pane_g5

0x86ff,	// (0x00077315) bg_cale_side_pane_g6

0x8709,	// (0x0007731f) bg_cale_side_pane_g7

0x8713,	// (0x00077329) bg_cale_side_pane_g8

0x871b,	// (0x00077331) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0007dfd8) bg_cale_side_pane_g

0x8723,	// (0x00077339) popup_call_status_window_ParamLimits

0x8723,	// (0x00077339) popup_call_status_window

0x1dd7,	// (0x000709ed) stacon_top_pane

0x1ddf,	// (0x000709f5) status_pane_ParamLimits

0x1ddf,	// (0x000709f5) status_pane

0x1df4,	// (0x00070a0a) status_small_pane

0x1dfc,	// (0x00070a12) control_pane

0x10b7,	// (0x0006fccd) stacon_bottom_pane

0x1e04,	// (0x00070a1a) list_single_mce_smart_pane_t1_ParamLimits

0x1e04,	// (0x00070a1a) list_single_mce_smart_pane_t1

0x1e17,	// (0x00070a2d) list_single_mce_smart_pane_t2_ParamLimits

0x1e17,	// (0x00070a2d) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0007dfeb) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0007dfeb) list_single_mce_smart_pane_t

0x872f,	// (0x00077345) compass_pane

0x873b,	// (0x00077351) main_location2_pane_t1

0x874f,	// (0x00077365) main_location2_pane_t2

0x8763,	// (0x00077379) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0007dff0) main_location2_pane_t

0x1e36,	// (0x00070a4c) compass_pane_g1_ParamLimits

0x1e36,	// (0x00070a4c) compass_pane_g1

0x87ad,	// (0x000773c3) compass_pane_t1

0x87bc,	// (0x000773d2) compass_pane_t2

0x0005,

0xf3e3,	// (0x0007dff9) compass_pane_t

0x8807,	// (0x0007741d) text_secondary_cp61

0x1e4a,	// (0x00070a60) navi_pane_cams_g5

0x1e6d,	// (0x00070a83) navi_pane_im_t1

0x1e7b,	// (0x00070a91) navi_pane_mp_g1_ParamLimits

0x1e7b,	// (0x00070a91) navi_pane_mp_g1

0x1e8f,	// (0x00070aa5) navi_pane_mp_g2_ParamLimits

0x1e8f,	// (0x00070aa5) navi_pane_mp_g2

0x1e9b,	// (0x00070ab1) navi_pane_mp_g3_ParamLimits

0x1e9b,	// (0x00070ab1) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0007e00d) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0007e00d) navi_pane_mp_g

0x1ea7,	// (0x00070abd) navi_pane_mp_t1

0x1eb5,	// (0x00070acb) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0007e014) navi_pane_mp_t

0x1ef1,	// (0x00070b07) navi_pane_vt_g1

0x1ea7,	// (0x00070abd) navi_pane_vt_t1

0x1ef9,	// (0x00070b0f) navi_slider_pane

0x1f01,	// (0x00070b17) zooming_pane

0x1f09,	// (0x00070b1f) navi_slider_pane_g1

0x893a,	// (0x00077550) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0007e01b) navi_slider_pane_g

0x1f2d,	// (0x00070b43) aid_levels_zoom

0x1f35,	// (0x00070b4b) zooming_pane_g1

0x1f3d,	// (0x00070b53) zooming_pane_g2

0x1f3d,	// (0x00070b53) zooming_pane_g3

0x0002,

0xf414,	// (0x0007e02a) zooming_pane_g

0x1f45,	// (0x00070b5b) level_10_zoom

0x1f4e,	// (0x00070b64) level_11_zoom

0x1f57,	// (0x00070b6d) level_1_zoom

0x1f60,	// (0x00070b76) level_2_zoom

0x1f69,	// (0x00070b7f) level_3_zoom

0x1f72,	// (0x00070b88) level_4_zoom

0x1f7b,	// (0x00070b91) level_5_zoom

0x1f84,	// (0x00070b9a) level_6_zoom

0x1f8d,	// (0x00070ba3) level_7_zoom

0x1f96,	// (0x00070bac) level_8_zoom

0x1f9f,	// (0x00070bb5) level_9_zoom

0x1fb0,	// (0x00070bc6) popup_phob_thumbnail_window_g1

0x1fb8,	// (0x00070bce) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0007e031) popup_phob_thumbnail_window_g

0x32e3,	// (0x00071ef9) level_1_location

0x32eb,	// (0x00071f01) level_2_location

0x32f3,	// (0x00071f09) level_3_location

0x32fb,	// (0x00071f11) level_4_location

0x1f01,	// (0x00070b17) level_5_location

0x894c,	// (0x00077562) mce_icon_pane_g1

0x8954,	// (0x0007756a) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0007e036) mce_icon_pane_g

0x895c,	// (0x00077572) main_mup_pane_g1_ParamLimits

0x895c,	// (0x00077572) main_mup_pane_g1

0x8974,	// (0x0007758a) main_mup_pane_g2_ParamLimits

0x8974,	// (0x0007758a) main_mup_pane_g2

0x8990,	// (0x000775a6) main_mup_pane_g3_ParamLimits

0x8990,	// (0x000775a6) main_mup_pane_g3

0x89ac,	// (0x000775c2) main_mup_pane_g4_ParamLimits

0x89ac,	// (0x000775c2) main_mup_pane_g4

0x89c8,	// (0x000775de) main_mup_pane_g5_ParamLimits

0x89c8,	// (0x000775de) main_mup_pane_g5

0x89e9,	// (0x000775ff) main_mup_pane_g6_ParamLimits

0x89e9,	// (0x000775ff) main_mup_pane_g6

0x8a05,	// (0x0007761b) main_mup_pane_g7_ParamLimits

0x8a05,	// (0x0007761b) main_mup_pane_g7

0x8a21,	// (0x00077637) main_mup_pane_g8_ParamLimits

0x8a21,	// (0x00077637) main_mup_pane_g8

0x8a41,	// (0x00077657) main_mup_pane_g9_ParamLimits

0x8a41,	// (0x00077657) main_mup_pane_g9

0x8a60,	// (0x00077676) main_mup_pane_g10_ParamLimits

0x8a60,	// (0x00077676) main_mup_pane_g10

0x8a7f,	// (0x00077695) main_mup_pane_g11_ParamLimits

0x8a7f,	// (0x00077695) main_mup_pane_g11

0x8a97,	// (0x000776ad) main_mup_pane_g12_ParamLimits

0x8a97,	// (0x000776ad) main_mup_pane_g12

0x8aa5,	// (0x000776bb) main_mup_pane_g13_ParamLimits

0x8aa5,	// (0x000776bb) main_mup_pane_g13

0x000c,

0xf425,	// (0x0007e03b) main_mup_pane_g_ParamLimits

0xf425,	// (0x0007e03b) main_mup_pane_g

0x8abb,	// (0x000776d1) main_mup_pane_t1_ParamLimits

0x8abb,	// (0x000776d1) main_mup_pane_t1

0x8ad8,	// (0x000776ee) main_mup_pane_t2_ParamLimits

0x8ad8,	// (0x000776ee) main_mup_pane_t2

0x8af2,	// (0x00077708) main_mup_pane_t3_ParamLimits

0x8af2,	// (0x00077708) main_mup_pane_t3

0x8b0c,	// (0x00077722) main_mup_pane_t4_ParamLimits

0x8b0c,	// (0x00077722) main_mup_pane_t4

0x8b1e,	// (0x00077734) main_mup_pane_t5_ParamLimits

0x8b1e,	// (0x00077734) main_mup_pane_t5

0x8b30,	// (0x00077746) main_mup_pane_t6_ParamLimits

0x8b30,	// (0x00077746) main_mup_pane_t6

0x0005,

0xf440,	// (0x0007e056) main_mup_pane_t_ParamLimits

0xf440,	// (0x0007e056) main_mup_pane_t

0x8b46,	// (0x0007775c) mup_progress_pane_ParamLimits

0x8b46,	// (0x0007775c) mup_progress_pane

0x8b52,	// (0x00077768) mup_visualizer_pane_ParamLimits

0x8b52,	// (0x00077768) mup_visualizer_pane

0x8b8c,	// (0x000777a2) mup_volume_pane_ParamLimits

0x8b8c,	// (0x000777a2) mup_volume_pane

0x1fc0,	// (0x00070bd6) mup_visualizer_pane_g1_ParamLimits

0x1fc0,	// (0x00070bd6) mup_visualizer_pane_g1

0x1fc0,	// (0x00070bd6) mup_visualizer_pane_g2_ParamLimits

0x1fc0,	// (0x00070bd6) mup_visualizer_pane_g2

0x1e36,	// (0x00070a4c) mup_visualizer_pane_g3_ParamLimits

0x1e36,	// (0x00070a4c) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0007e063) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0007e063) mup_visualizer_pane_g

0x142c,	// (0x00070042) mup_volume_pane_g1

0x1fd6,	// (0x00070bec) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0007e06a) mup_volume_pane_g

0x142c,	// (0x00070042) mup_progress_pane_g1

0x1fdf,	// (0x00070bf5) mup_progress_pane_g2

0x1fe8,	// (0x00070bfe) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0007e06f) mup_progress_pane_g

0x10b7,	// (0x0006fccd) bg_popup_window_pane_cp05

0x1ff1,	// (0x00070c07) heading_pane_cp02_ParamLimits

0x1ff1,	// (0x00070c07) heading_pane_cp02

0x200b,	// (0x00070c21) list_popup_blid_pane

0x2013,	// (0x00070c29) list_blid_sat_info_pane_ParamLimits

0x2013,	// (0x00070c29) list_blid_sat_info_pane

0x2026,	// (0x00070c3c) list_blid_sat_info_pane_g1

0x202e,	// (0x00070c44) list_blid_sat_info_pane_t1

0x8c99,	// (0x000778af) mup_equalizer_pane_ParamLimits

0x8c99,	// (0x000778af) mup_equalizer_pane

0x8cba,	// (0x000778d0) mup_equalizer_pane_cp1_ParamLimits

0x8cba,	// (0x000778d0) mup_equalizer_pane_cp1

0x8cdb,	// (0x000778f1) mup_equalizer_pane_cp2_ParamLimits

0x8cdb,	// (0x000778f1) mup_equalizer_pane_cp2

0x8cfc,	// (0x00077912) mup_equalizer_pane_cp3_ParamLimits

0x8cfc,	// (0x00077912) mup_equalizer_pane_cp3

0x8d1d,	// (0x00077933) mup_equalizer_pane_cp4_ParamLimits

0x8d1d,	// (0x00077933) mup_equalizer_pane_cp4

0x8d3e,	// (0x00077954) mup_equalizer_pane_cp5

0x8d54,	// (0x0007796a) mup_equalizer_pane_cp6

0x8d6c,	// (0x00077982) mup_equalizer_pane_cp7

0x3201,	// (0x00071e17) bg_popup_call_poc_act_pane_g9

0x3209,	// (0x00071e1f) bg_popup_call_poc_act_pane_g10

0x3211,	// (0x00071e27) bg_popup_call_poc_act_pane_g11

0x000a,

0x1312,	// (0x0006ff28) mup_scale_pane

0x142c,	// (0x00070042) mup_scale_pane_g1

0x203c,	// (0x00070c52) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0007e08b) mup_scale_pane_g

0x2060,	// (0x00070c76) msg_data_pane

0x2068,	// (0x00070c7e) scroll_pane_cp017

0x5268,	// (0x00073e7e) bg_list_pane_cp04_ParamLimits

0x5268,	// (0x00073e7e) bg_list_pane_cp04

0x2070,	// (0x00070c86) msg_data_pane_g1

0x8d96,	// (0x000779ac) msg_data_pane_g2

0x8da0,	// (0x000779b6) msg_data_pane_g3

0x8da8,	// (0x000779be) msg_data_pane_g4

0x8db0,	// (0x000779c6) msg_data_pane_g5

0x8db8,	// (0x000779ce) msg_data_pane_g6

0x8dc0,	// (0x000779d6) msg_data_pane_g7

0x0006,

0xf484,	// (0x0007e09a) msg_data_pane_g

0x528e,	// (0x00073ea4) msg_text_pane_ParamLimits

0x528e,	// (0x00073ea4) msg_text_pane

0x8dc8,	// (0x000779de) qrid_highlight_pane_cp011_ParamLimits

0x8dc8,	// (0x000779de) qrid_highlight_pane_cp011

0x10b7,	// (0x0006fccd) msg_body_pane

0x10b7,	// (0x0006fccd) msg_header_pane

0x2078,	// (0x00070c8e) input_focus_pane_cp07

0x52d1,	// (0x00073ee7) msg_header_pane_t1_ParamLimits

0x52d1,	// (0x00073ee7) msg_header_pane_t1

0x52e3,	// (0x00073ef9) msg_header_pane_t2_ParamLimits

0x52e3,	// (0x00073ef9) msg_header_pane_t2

0x0001,

0xf498,	// (0x0007e0ae) msg_header_pane_t_ParamLimits

0xf498,	// (0x0007e0ae) msg_header_pane_t

0x208d,	// (0x00070ca3) msg_body_pane_g1

0x52f5,	// (0x00073f0b) msg_body_pane_t1_ParamLimits

0x52f5,	// (0x00073f0b) msg_body_pane_t1

0x5326,	// (0x00073f3c) msg_body_pane_t2_ParamLimits

0x5326,	// (0x00073f3c) msg_body_pane_t2

0x5338,	// (0x00073f4e) msg_body_pane_t3_ParamLimits

0x5338,	// (0x00073f4e) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0007e0b3) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0007e0b3) msg_body_pane_t

0x8e3d,	// (0x00077a53) main_viewer_pane_g1_ParamLimits

0x8e3d,	// (0x00077a53) main_viewer_pane_g1

0x8e49,	// (0x00077a5f) main_viewer_pane_g2_ParamLimits

0x8e49,	// (0x00077a5f) main_viewer_pane_g2

0x8e55,	// (0x00077a6b) main_viewer_pane_g3_ParamLimits

0x8e55,	// (0x00077a6b) main_viewer_pane_g3

0x8e66,	// (0x00077a7c) main_viewer_pane_g4_ParamLimits

0x8e66,	// (0x00077a7c) main_viewer_pane_g4

0x8e77,	// (0x00077a8d) main_viewer_pane_g5_ParamLimits

0x8e77,	// (0x00077a8d) main_viewer_pane_g5

0x8e77,	// (0x00077a8d) main_viewer_pane_g7_ParamLimits

0x8e77,	// (0x00077a8d) main_viewer_pane_g7

0x8e89,	// (0x00077a9f) main_viewer_pane_g8_ParamLimits

0x8e89,	// (0x00077a9f) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0007e0c3) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0007e0c3) main_viewer_pane_g

0x2095,	// (0x00070cab) viewer_content_pane_ParamLimits

0x2095,	// (0x00070cab) viewer_content_pane

0x8ec1,	// (0x00077ad7) main_postcard_pane_g1_ParamLimits

0x8ec1,	// (0x00077ad7) main_postcard_pane_g1

0x8ecf,	// (0x00077ae5) main_postcard_pane_g2_ParamLimits

0x8ecf,	// (0x00077ae5) main_postcard_pane_g2

0x8edd,	// (0x00077af3) main_postcard_pane_g3_ParamLimits

0x8edd,	// (0x00077af3) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0007e0d4) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0007e0d4) main_postcard_pane_g

0x8eed,	// (0x00077b03) main_postcard_pane_g4

0x33de,	// (0x00071ff4) smil_status_volume_pane_g2

0x8f19,	// (0x00077b2f) postcard_pane_ParamLimits

0x8f19,	// (0x00077b2f) postcard_pane

0x1fc0,	// (0x00070bd6) postcard_pane_g1_ParamLimits

0x1fc0,	// (0x00070bd6) postcard_pane_g1

0x8f4b,	// (0x00077b61) postcard_pane_g2_ParamLimits

0x8f4b,	// (0x00077b61) postcard_pane_g2

0x8f57,	// (0x00077b6d) postcard_pane_g3_ParamLimits

0x8f57,	// (0x00077b6d) postcard_pane_g3

0x20b1,	// (0x00070cc7) postcard_pane_g4_ParamLimits

0x20b1,	// (0x00070cc7) postcard_pane_g4

0x8f63,	// (0x00077b79) postcard_pane_g5_ParamLimits

0x8f63,	// (0x00077b79) postcard_pane_g5

0x8f6f,	// (0x00077b85) postcard_pane_g6_ParamLimits

0x8f6f,	// (0x00077b85) postcard_pane_g6

0x20a3,	// (0x00070cb9) postcard_pane_g7_ParamLimits

0x20a3,	// (0x00070cb9) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0007e0e1) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0007e0e1) postcard_pane_g

0x8f7b,	// (0x00077b91) main_mp2_pane_g1_ParamLimits

0x8f7b,	// (0x00077b91) main_mp2_pane_g1

0x8f87,	// (0x00077b9d) main_mp2_pane_g2_ParamLimits

0x8f87,	// (0x00077b9d) main_mp2_pane_g2

0x8f93,	// (0x00077ba9) main_mp2_pane_g3_ParamLimits

0x8f93,	// (0x00077ba9) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0007e0f0) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0007e0f0) main_mp2_pane_g

0x8f9f,	// (0x00077bb5) main_mp2_pane_t1_ParamLimits

0x8f9f,	// (0x00077bb5) main_mp2_pane_t1

0x8fb6,	// (0x00077bcc) main_mp2_pane_t2_ParamLimits

0x8fb6,	// (0x00077bcc) main_mp2_pane_t2

0x8fca,	// (0x00077be0) main_mp2_pane_t3_ParamLimits

0x8fca,	// (0x00077be0) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0007e0f7) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0007e0f7) main_mp2_pane_t

0x20bf,	// (0x00070cd5) pec_content_pane_ParamLimits

0x20bf,	// (0x00070cd5) pec_content_pane

0x1748,	// (0x0007035e) scroll_pane_cp015

0x20d1,	// (0x00070ce7) pec_attribute_pane_ParamLimits

0x20d1,	// (0x00070ce7) pec_attribute_pane

0x8fdc,	// (0x00077bf2) pec_content_pane_g1_ParamLimits

0x8fdc,	// (0x00077bf2) pec_content_pane_g1

0x20e1,	// (0x00070cf7) pec_content_pane_t1_ParamLimits

0x20e1,	// (0x00070cf7) pec_content_pane_t1

0x20f3,	// (0x00070d09) pec_content_pane_t2_ParamLimits

0x20f3,	// (0x00070d09) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0007e0fe) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0007e0fe) pec_content_pane_t

0x8fe8,	// (0x00077bfe) list_single_graphic_pane_cp01_ParamLimits

0x8fe8,	// (0x00077bfe) list_single_graphic_pane_cp01

0x1312,	// (0x0006ff28) bg_popup_sub_pane_cp04

0x2105,	// (0x00070d1b) popup_mup_playback_window_g1

0x2111,	// (0x00070d27) popup_mup_playback_window_t1

0x2126,	// (0x00070d3c) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0007e103) popup_mup_playback_window_t

0x215d,	// (0x00070d73) main_image_pane_g1_ParamLimits

0x215d,	// (0x00070d73) main_image_pane_g1

0x21a0,	// (0x00070db6) scroll_pane_cp018_ParamLimits

0x21a0,	// (0x00070db6) scroll_pane_cp018

0x21b8,	// (0x00070dce) scroll_pane_cp016_ParamLimits

0x21b8,	// (0x00070dce) scroll_pane_cp016

0x9081,	// (0x00077c97) smil2_image_pane_ParamLimits

0x9081,	// (0x00077c97) smil2_image_pane

0x90b1,	// (0x00077cc7) smil2_root_pane_ParamLimits

0x90b1,	// (0x00077cc7) smil2_root_pane

0x90dd,	// (0x00077cf3) smil2_text_pane_ParamLimits

0x90dd,	// (0x00077cf3) smil2_text_pane

0x10b7,	// (0x0006fccd) bg_list_pane_cp06

0x21f4,	// (0x00070e0a) grid_radio_pane

0x10b7,	// (0x0006fccd) bg_popup_window_pane_cp06

0x21fc,	// (0x00070e12) main_fmradio_pane_t1

0x1c85,	// (0x0007089b) heading_pane_cp04

0x220a,	// (0x00070e20) main_fmradio_pane_t2

0x3219,	// (0x00071e2f) popup_cale_lunar_info_window_g1

0x2218,	// (0x00070e2e) main_fmradio_pane_t3

0x3221,	// (0x00071e37) popup_cale_lunar_info_window_g2

0x2226,	// (0x00070e3c) main_fmradio_pane_t4

0x0001,

0x2234,	// (0x00070e4a) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0007e1de) popup_cale_lunar_info_window_g

0xf502,	// (0x0007e118) main_fmradio_pane_t

0x2242,	// (0x00070e58) wait_bar_pane_cp03

0x224a,	// (0x00070e60) cell_fmradio_pane_ParamLimits

0x224a,	// (0x00070e60) cell_fmradio_pane

0x20a3,	// (0x00070cb9) cell_fmradio_pane_g1_ParamLimits

0x20a3,	// (0x00070cb9) cell_fmradio_pane_g1

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp011

0x225d,	// (0x00070e73) poc_content_pane_ParamLimits

0x225d,	// (0x00070e73) poc_content_pane

0x226f,	// (0x00070e85) scroll_pane_cp019

0x911d,	// (0x00077d33) popup_call_poc_act_window_ParamLimits

0x911d,	// (0x00077d33) popup_call_poc_act_window

0x912a,	// (0x00077d40) popup_call_poc_inact_window_ParamLimits

0x912a,	// (0x00077d40) popup_call_poc_inact_window

0xf59f,	// (0x0007e1b5) bg_popup_call_poc_act_pane_g

0x3191,	// (0x00071da7) bg_popup_call_poc_inact_pane_g1

0x3199,	// (0x00071daf) bg_popup_call_poc_inact_pane_g2

0x2277,	// (0x00070e8d) popup_call_poc_act_window_g2

0x31a1,	// (0x00071db7) bg_popup_call_poc_inact_pane_g3

0x31a9,	// (0x00071dbf) bg_popup_call_poc_inact_pane_g4

0x31b1,	// (0x00071dc7) bg_popup_call_poc_inact_pane_g5

0x227f,	// (0x00070e95) popup_call_poc_act_window_t1_ParamLimits

0x227f,	// (0x00070e95) popup_call_poc_act_window_t1

0x22a7,	// (0x00070ebd) popup_call_poc_act_window_t2_ParamLimits

0x22a7,	// (0x00070ebd) popup_call_poc_act_window_t2

0x22cf,	// (0x00070ee5) popup_call_poc_act_window_t3_ParamLimits

0x22cf,	// (0x00070ee5) popup_call_poc_act_window_t3

0x22f7,	// (0x00070f0d) popup_call_poc_act_window_t4_ParamLimits

0x22f7,	// (0x00070f0d) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0007e123) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0007e123) popup_call_poc_act_window_t

0x31b9,	// (0x00071dcf) bg_popup_call_poc_inact_pane_g6

0x31c1,	// (0x00071dd7) bg_popup_call_poc_inact_pane_g7

0x31c9,	// (0x00071ddf) bg_popup_call_poc_inact_pane_g8

0x2309,	// (0x00070f1f) popup_call_poc_inact_window_g2

0x31d1,	// (0x00071de7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0007e1a2) bg_popup_call_poc_inact_pane_g

0x2311,	// (0x00070f27) popup_call_poc_inact_window_t1_ParamLimits

0x2311,	// (0x00070f27) popup_call_poc_inact_window_t1

0x2326,	// (0x00070f3c) popup_call_poc_inact_window_t2_ParamLimits

0x2326,	// (0x00070f3c) popup_call_poc_inact_window_t2

0x233b,	// (0x00070f51) popup_call_poc_inact_window_t3_ParamLimits

0x233b,	// (0x00070f51) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0007e12c) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0007e12c) popup_call_poc_inact_window_t

0x3364,	// (0x00071f7a) context_pane_ParamLimits

0x9758,	// (0x0007836e) signal_pane_ParamLimits

0x1f01,	// (0x00070b17) main_call2_pane

0x96d1,	// (0x000782e7) popup_phob_thumbnail2_window_ParamLimits

0x96d1,	// (0x000782e7) popup_phob_thumbnail2_window

0x8deb,	// (0x00077a01) aid_hotspot_pointer_arrow_pane

0x8df3,	// (0x00077a09) aid_hotspot_pointer_hand_pane

0x944c,	// (0x00078062) phob_pre_status_pane_g5

0x7023,	// (0x00075c39) cams_zoom_pane_ParamLimits

0x702f,	// (0x00075c45) image_vga_pane_ParamLimits

0x703e,	// (0x00075c54) main_camera_pane_g1_ParamLimits

0x704c,	// (0x00075c62) main_camera_pane_g2_ParamLimits

0x7058,	// (0x00075c6e) main_camera_pane_g3_ParamLimits

0x7064,	// (0x00075c7a) main_camera_pane_g4_ParamLimits

0x7070,	// (0x00075c86) main_camera_pane_g5_ParamLimits

0x707c,	// (0x00075c92) main_camera_pane_g6_ParamLimits

0x7088,	// (0x00075c9e) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0007de2b) main_camera_pane_g_ParamLimits

0x7094,	// (0x00075caa) main_camera_pane_t1_ParamLimits

0x70a6,	// (0x00075cbc) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0007de3c) main_camera_pane_t_ParamLimits

0x1312,	// (0x0006ff28) bg_popup_preview_window_pane_cp01_ParamLimits

0x1312,	// (0x0006ff28) bg_popup_preview_window_pane_cp01

0x2350,	// (0x00070f66) popup_phob_thumbnail2_window_g1_ParamLimits

0x2350,	// (0x00070f66) popup_phob_thumbnail2_window_g1

0x10b7,	// (0x0006fccd) call2_cli_visual_pane

0x9146,	// (0x00077d5c) popup_call2_audio_conf_window_ParamLimits

0x9146,	// (0x00077d5c) popup_call2_audio_conf_window

0x915b,	// (0x00077d71) popup_call2_audio_first_window_ParamLimits

0x915b,	// (0x00077d71) popup_call2_audio_first_window

0x91f9,	// (0x00077e0f) popup_call2_audio_in_window_ParamLimits

0x91f9,	// (0x00077e0f) popup_call2_audio_in_window

0x923b,	// (0x00077e51) popup_call2_audio_out_window_ParamLimits

0x923b,	// (0x00077e51) popup_call2_audio_out_window

0x929d,	// (0x00077eb3) popup_call2_audio_second_window_ParamLimits

0x929d,	// (0x00077eb3) popup_call2_audio_second_window

0x92fb,	// (0x00077f11) popup_call2_audio_wait_window_ParamLimits

0x92fb,	// (0x00077f11) popup_call2_audio_wait_window

0x10b7,	// (0x0006fccd) bg_popup_call2_act_pane_cp03

0x12f4,	// (0x0006ff0a) list_conf_pane_cp

0x235c,	// (0x00070f72) popup_call2_audio_conf_window_t1

0x1ce2,	// (0x000708f8) list_single_graphic_popup_conf2_pane_ParamLimits

0x1ce2,	// (0x000708f8) list_single_graphic_popup_conf2_pane

0x1cf5,	// (0x0007090b) list_highlight_pane_cp04

0x236a,	// (0x00070f80) list_single_graphic_popup_conf2_pane_g1

0x1d06,	// (0x0007091c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0007e133) list_single_graphic_popup_conf2_pane_g

0x2374,	// (0x00070f8a) list_single_graphic_popup_conf2_pane_t1

0x2382,	// (0x00070f98) bg_popup_call2_act_pane_cp01_ParamLimits

0x2382,	// (0x00070f98) bg_popup_call2_act_pane_cp01

0x240c,	// (0x00071022) call_type_pane_cp05_ParamLimits

0x240c,	// (0x00071022) call_type_pane_cp05

0x2460,	// (0x00071076) popup_call2_audio_second_window_g1_ParamLimits

0x2460,	// (0x00071076) popup_call2_audio_second_window_g1

0x24b4,	// (0x000710ca) popup_call2_audio_second_window_g2_ParamLimits

0x24b4,	// (0x000710ca) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0007e138) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0007e138) popup_call2_audio_second_window_g

0x2519,	// (0x0007112f) popup_call2_audio_second_window_t1_ParamLimits

0x2519,	// (0x0007112f) popup_call2_audio_second_window_t1

0x25d4,	// (0x000711ea) popup_call2_audio_second_window_t2_ParamLimits

0x25d4,	// (0x000711ea) popup_call2_audio_second_window_t2

0x2627,	// (0x0007123d) popup_call2_audio_second_window_t3_ParamLimits

0x2627,	// (0x0007123d) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0007e13f) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0007e13f) popup_call2_audio_second_window_t

0x10b7,	// (0x0006fccd) bg_popup_call2_in_pane_cp02

0x10c1,	// (0x0006fcd7) call_type_pane_cp04

0x10c9,	// (0x0006fcdf) popup_call2_audio_wait_window_g1

0x10d1,	// (0x0006fce7) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007dd18) popup_call2_audio_wait_window_g

0x10d9,	// (0x0006fcef) popup_call2_audio_wait_window_t3

0x271a,	// (0x00071330) bg_popup_call2_act_pane_ParamLimits

0x271a,	// (0x00071330) bg_popup_call2_act_pane

0x2824,	// (0x0007143a) call_type_pane_cp03_ParamLimits

0x2824,	// (0x0007143a) call_type_pane_cp03

0x2888,	// (0x0007149e) popup_call2_audio_first_window_g1_ParamLimits

0x2888,	// (0x0007149e) popup_call2_audio_first_window_g1

0x28f8,	// (0x0007150e) popup_call2_audio_first_window_g2_ParamLimits

0x28f8,	// (0x0007150e) popup_call2_audio_first_window_g2

0x1fc0,	// (0x00070bd6) popup_call2_audio_first_window_g3_ParamLimits

0x1fc0,	// (0x00070bd6) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0007e148) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0007e148) popup_call2_audio_first_window_g

0x29d6,	// (0x000715ec) popup_call2_audio_first_window_t1_ParamLimits

0x29d6,	// (0x000715ec) popup_call2_audio_first_window_t1

0x2ad9,	// (0x000716ef) popup_call2_audio_first_window_t4_ParamLimits

0x2ad9,	// (0x000716ef) popup_call2_audio_first_window_t4

0x2bbc,	// (0x000717d2) popup_call2_audio_first_window_t5_ParamLimits

0x2bbc,	// (0x000717d2) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0007e153) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0007e153) popup_call2_audio_first_window_t

0x130a,	// (0x0006ff20) bg_popup_call2_act_pane_g1

0x3229,	// (0x00071e3f) popup_cale_lunar_info_window_t1

0x3237,	// (0x00071e4d) popup_cale_lunar_info_window_t2

0x3245,	// (0x00071e5b) popup_cale_lunar_info_window_t3

0x10b7,	// (0x0006fccd) bg_popup_call2_bubble_pane

0x2cbd,	// (0x000718d3) bg_popup_call2_in_pane_cp01_ParamLimits

0x2cbd,	// (0x000718d3) bg_popup_call2_in_pane_cp01

0xedc0,	// (0x0007d9d6) call_type_pane_cp02

0x2d05,	// (0x0007191b) popup_call2_audio_out_window_g1_ParamLimits

0x2d05,	// (0x0007191b) popup_call2_audio_out_window_g1

0x2d31,	// (0x00071947) popup_call2_audio_out_window_g2_ParamLimits

0x2d31,	// (0x00071947) popup_call2_audio_out_window_g2

0x2d59,	// (0x0007196f) popup_call2_audio_out_window_g3_ParamLimits

0x2d59,	// (0x0007196f) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0007e15c) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0007e15c) popup_call2_audio_out_window_g

0x2d94,	// (0x000719aa) popup_call2_audio_out_window_t1_ParamLimits

0x2d94,	// (0x000719aa) popup_call2_audio_out_window_t1

0x2df3,	// (0x00071a09) popup_call2_audio_out_window_t2_ParamLimits

0x2df3,	// (0x00071a09) popup_call2_audio_out_window_t2

0x2e47,	// (0x00071a5d) popup_call2_audio_out_window_t3_ParamLimits

0x2e47,	// (0x00071a5d) popup_call2_audio_out_window_t3

0x2e5d,	// (0x00071a73) popup_call2_audio_out_window_t4_ParamLimits

0x2e5d,	// (0x00071a73) popup_call2_audio_out_window_t4

0x2e73,	// (0x00071a89) popup_call2_audio_out_window_t5_ParamLimits

0x2e73,	// (0x00071a89) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0007e165) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0007e165) popup_call2_audio_out_window_t

0x2ed7,	// (0x00071aed) bg_popup_call2_in_pane_ParamLimits

0x2ed7,	// (0x00071aed) bg_popup_call2_in_pane

0x2f33,	// (0x00071b49) popup_call2_audio_in_window_g1_ParamLimits

0x2f33,	// (0x00071b49) popup_call2_audio_in_window_g1

0x2f6b,	// (0x00071b81) popup_call2_audio_in_window_g2_ParamLimits

0x2f6b,	// (0x00071b81) popup_call2_audio_in_window_g2

0x2fa3,	// (0x00071bb9) popup_call2_audio_in_window_g3_ParamLimits

0x2fa3,	// (0x00071bb9) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0007e172) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0007e172) popup_call2_audio_in_window_g

0x2ffb,	// (0x00071c11) popup_call2_audio_in_window_t1_ParamLimits

0x2ffb,	// (0x00071c11) popup_call2_audio_in_window_t1

0x307b,	// (0x00071c91) popup_call2_audio_in_window_t2_ParamLimits

0x307b,	// (0x00071c91) popup_call2_audio_in_window_t2

0x30fb,	// (0x00071d11) popup_call2_audio_in_window_t3_ParamLimits

0x30fb,	// (0x00071d11) popup_call2_audio_in_window_t3

0x3115,	// (0x00071d2b) popup_call2_audio_in_window_t4_ParamLimits

0x3115,	// (0x00071d2b) popup_call2_audio_in_window_t4

0x3127,	// (0x00071d3d) popup_call2_audio_in_window_t5_ParamLimits

0x3127,	// (0x00071d3d) popup_call2_audio_in_window_t5

0x313c,	// (0x00071d52) popup_call2_audio_in_window_t6_ParamLimits

0x313c,	// (0x00071d52) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0007e17b) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0007e17b) popup_call2_audio_in_window_t

0x130a,	// (0x0006ff20) bg_popup_call2_in_pane_g1

0x3253,	// (0x00071e69) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0007e1e3) popup_cale_lunar_info_window_t

0x1312,	// (0x0006ff28) bg_popup_call2_rect_pane_ParamLimits

0x1312,	// (0x0006ff28) bg_popup_call2_rect_pane

0x10b7,	// (0x0006fccd) call2_cli_visual_graphic_pane

0x10b7,	// (0x0006fccd) call2_cli_visual_text_pane

0x97fe,	// (0x00078414) smil_status_volume_pane_g3

0x0002,

0x142c,	// (0x00070042) call2_cli_visual_graphic_pane_g1

0x142c,	// (0x00070042) call2_cli_visual_graphic_pane_g2

0x142c,	// (0x00070042) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0007e188) call2_cli_visual_graphic_pane_g

0x3151,	// (0x00071d67) bg_popup_call2_rect_pane_g1

0x14b8,	// (0x000700ce) bg_popup_call2_rect_pane_g2

0x3159,	// (0x00071d6f) bg_popup_call2_rect_pane_g3

0x3161,	// (0x00071d77) bg_popup_call2_rect_pane_g4

0x3169,	// (0x00071d7f) bg_popup_call2_rect_pane_g5

0x3171,	// (0x00071d87) bg_popup_call2_rect_pane_g6

0x3179,	// (0x00071d8f) bg_popup_call2_rect_pane_g7

0x3181,	// (0x00071d97) bg_popup_call2_rect_pane_g8

0x3189,	// (0x00071d9f) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0007e18f) bg_popup_call2_rect_pane_g

0x3191,	// (0x00071da7) bg_popup_call2_bubble_pane_g1

0x3199,	// (0x00071daf) bg_popup_call2_bubble_pane_g2

0x31a1,	// (0x00071db7) bg_popup_call2_bubble_pane_g3

0x31a9,	// (0x00071dbf) bg_popup_call2_bubble_pane_g4

0x31b1,	// (0x00071dc7) bg_popup_call2_bubble_pane_g5

0x31b9,	// (0x00071dcf) bg_popup_call2_bubble_pane_g6

0x31c1,	// (0x00071dd7) bg_popup_call2_bubble_pane_g7

0x31c9,	// (0x00071ddf) bg_popup_call2_bubble_pane_g8

0x31d1,	// (0x00071de7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0007e1a2) bg_popup_call2_bubble_pane_g

0x6a5e,	// (0x00075674) aid_cale_week_size_cell_pane

0x70b8,	// (0x00075cce) aid_cams_cif_uncrop_pane_ParamLimits

0x70b8,	// (0x00075cce) aid_cams_cif_uncrop_pane

0x7213,	// (0x00075e29) aid_cams_size_cell_ParamLimits

0x7213,	// (0x00075e29) aid_cams_size_cell

0x721f,	// (0x00075e35) grid_cams_pane_ParamLimits

0x722d,	// (0x00075e43) linegrid_cams_pane_ParamLimits

0x731c,	// (0x00075f32) call_video_pane_t1

0x733d,	// (0x00075f53) call_video_pane_t2

0x0001,

0xf279,	// (0x0007de8f) call_video_pane_t

0x7886,	// (0x0007649c) aid_cale_month_size_cell_pane_ParamLimits

0x7886,	// (0x0007649c) aid_cale_month_size_cell_pane

0xf616,	// (0x0007e22c) smil_status_volume_pane_g

0x980b,	// (0x00078421) volume_smil_pane_ParamLimits

0x61cd,	// (0x00074de3) aid_popup2_width_pane

0x6960,	// (0x00075576) cell_qdial_pane_g4_ParamLimits

0x6960,	// (0x00075576) cell_qdial_pane_g4

0x8789,	// (0x0007739f) aid_blid_cardinal_pane_ParamLimits

0x8799,	// (0x000773af) aid_blid_destination_pane_ParamLimits

0x8799,	// (0x000773af) aid_blid_destination_pane

0x1312,	// (0x0006ff28) bg_popup_call_poc_act_pane_ParamLimits

0x1312,	// (0x0006ff28) bg_popup_call_poc_act_pane

0x1312,	// (0x0006ff28) bg_popup_call_poc_inact_pane_ParamLimits

0x1312,	// (0x0006ff28) bg_popup_call_poc_inact_pane

0x31d9,	// (0x00071def) bg_popup_call_poc_act_pane_g1

0x31e1,	// (0x00071df7) bg_popup_call_poc_act_pane_g2

0x31e9,	// (0x00071dff) bg_popup_call_poc_act_pane_g3

0x31a9,	// (0x00071dbf) bg_popup_call_poc_act_pane_g4

0x31b1,	// (0x00071dc7) bg_popup_call_poc_act_pane_g5

0x31f1,	// (0x00071e07) bg_popup_call_poc_act_pane_g6

0x31c1,	// (0x00071dd7) bg_popup_call_poc_act_pane_g7

0x31f9,	// (0x00071e0f) bg_popup_call_poc_act_pane_g8

0x10b7,	// (0x0006fccd) main_usb_pane

0x9600,	// (0x00078216) popup_cale_lunar_info_window

0x7668,	// (0x0007627e) im_reading_pane_t1_ParamLimits

0x16a0,	// (0x000702b6) list_im_pane_ParamLimits

0x16b1,	// (0x000702c7) scroll_pane_cp07_ParamLimits

0x10b7,	// (0x0006fccd) grid_highlight_pane_cp012

0x1312,	// (0x0006ff28) mup_scale_pane_ParamLimits

0x1fc0,	// (0x00070bd6) main_usb_pane_g1_ParamLimits

0x1fc0,	// (0x00070bd6) main_usb_pane_g1

0x936f,	// (0x00077f85) main_usb_pane_g2_ParamLimits

0x936f,	// (0x00077f85) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0007e1cc) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0007e1cc) main_usb_pane_g

0x937b,	// (0x00077f91) main_usb_pane_t1_ParamLimits

0x937b,	// (0x00077f91) main_usb_pane_t1

0x938d,	// (0x00077fa3) main_usb_pane_t2_ParamLimits

0x938d,	// (0x00077fa3) main_usb_pane_t2

0x939f,	// (0x00077fb5) main_usb_pane_t3_ParamLimits

0x939f,	// (0x00077fb5) main_usb_pane_t3

0x93b1,	// (0x00077fc7) main_usb_pane_t4_ParamLimits

0x93b1,	// (0x00077fc7) main_usb_pane_t4

0x93c3,	// (0x00077fd9) main_usb_pane_t5_ParamLimits

0x93c3,	// (0x00077fd9) main_usb_pane_t5

0x93d5,	// (0x00077feb) main_usb_pane_t6_ParamLimits

0x93d5,	// (0x00077feb) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0007e1d1) main_usb_pane_t_ParamLimits

0x872f,	// (0x00077345) aid_text_placing

0x873b,	// (0x00077351) main_location2_pane_t1_ParamLimits

0x874f,	// (0x00077365) main_location2_pane_t2_ParamLimits

0x8763,	// (0x00077379) main_location2_pane_t3_ParamLimits

0x8777,	// (0x0007738d) main_location2_pane_t4_ParamLimits

0x8777,	// (0x0007738d) main_location2_pane_t4

0xf3da,	// (0x0007dff0) main_location2_pane_t_ParamLimits

0x134e,	// (0x0006ff64) find_pinb_pane_g2_ParamLimits

0x134e,	// (0x0006ff64) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0007dd3e) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0007dd3e) find_pinb_pane_g

0x135a,	// (0x0006ff70) find_pinb_pane_t1_ParamLimits

0x136c,	// (0x0006ff82) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0007dd43) find_pinb_pane_t_ParamLimits

0x10b7,	// (0x0006fccd) main_call3_pane

0x7dda,	// (0x000769f0) cale_month_day_heading_pane_t1_ParamLimits

0x7e60,	// (0x00076a76) cale_month_day_heading_pane_t2_ParamLimits

0x7ef1,	// (0x00076b07) cale_month_day_heading_pane_t3_ParamLimits

0x7f82,	// (0x00076b98) cale_month_day_heading_pane_t4_ParamLimits

0x8013,	// (0x00076c29) cale_month_day_heading_pane_t5_ParamLimits

0x80a4,	// (0x00076cba) cale_month_day_heading_pane_t6_ParamLimits

0x8135,	// (0x00076d4b) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0007dec7) cale_month_day_heading_pane_t_ParamLimits

0x18fb,	// (0x00070511) smil_status_volume_pane

0x8f33,	// (0x00077b49) postcard_address_pane_ParamLimits

0x8f33,	// (0x00077b49) postcard_address_pane

0x8f3f,	// (0x00077b55) postcard_message_pane_ParamLimits

0x8f3f,	// (0x00077b55) postcard_message_pane

0x933a,	// (0x00077f50) call2_cli_visual_pane_t1_ParamLimits

0x933a,	// (0x00077f50) call2_cli_visual_pane_t1

0x9962,	// (0x00078578) postcard_message_pane_t1_ParamLimits

0x9962,	// (0x00078578) postcard_message_pane_t1

0x994b,	// (0x00078561) postcard_address_pane_t1_ParamLimits

0x994b,	// (0x00078561) postcard_address_pane_t1

0x993c,	// (0x00078552) popup_call3_audio_in_window_ParamLimits

0x993c,	// (0x00078552) popup_call3_audio_in_window

0x9820,	// (0x00078436) bg_popup_call3_in_pane_ParamLimits

0x9820,	// (0x00078436) bg_popup_call3_in_pane

0x9882,	// (0x00078498) popup_call3_audio_in_window_g1_ParamLimits

0x9882,	// (0x00078498) popup_call3_audio_in_window_g1

0x989a,	// (0x000784b0) popup_call3_audio_in_window_g2_ParamLimits

0x989a,	// (0x000784b0) popup_call3_audio_in_window_g2

0x98b2,	// (0x000784c8) popup_call3_audio_in_window_g3_ParamLimits

0x98b2,	// (0x000784c8) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0007e233) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0007e233) popup_call3_audio_in_window_g

0x98da,	// (0x000784f0) popup_call3_audio_in_window_t1_ParamLimits

0x98da,	// (0x000784f0) popup_call3_audio_in_window_t1

0x9902,	// (0x00078518) popup_call3_audio_in_window_t2_ParamLimits

0x9902,	// (0x00078518) popup_call3_audio_in_window_t2

0x992a,	// (0x00078540) popup_call3_audio_in_window_t3_ParamLimits

0x992a,	// (0x00078540) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0007e23c) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0007e23c) popup_call3_audio_in_window_t

0x1f01,	// (0x00070b17) bg_popup_call3_rect_pane

0x3151,	// (0x00071d67) bg_popup_call3_rect_pane_g1

0x14b8,	// (0x000700ce) bg_popup_call3_rect_pane_g2

0x3159,	// (0x00071d6f) bg_popup_call3_rect_pane_g3

0x3161,	// (0x00071d77) bg_popup_call3_rect_pane_g4

0x3169,	// (0x00071d7f) bg_popup_call3_rect_pane_g5

0x3171,	// (0x00071d87) bg_popup_call3_rect_pane_g6

0x3179,	// (0x00071d8f) bg_popup_call3_rect_pane_g7

0x8ba7,	// (0x000777bd) mup_visualizer_osc_pane

0x1fce,	// (0x00070be4) mup_visualizer_spec_pane

0x9840,	// (0x00078456) call3_video_qcif_pane_ParamLimits

0x9840,	// (0x00078456) call3_video_qcif_pane

0x9852,	// (0x00078468) call3_video_qcif_uncrop_pane_ParamLimits

0x9852,	// (0x00078468) call3_video_qcif_uncrop_pane

0x9860,	// (0x00078476) call3_video_subqcif_pane_ParamLimits

0x9860,	// (0x00078476) call3_video_subqcif_pane

0x9872,	// (0x00078488) call3_video_subqcif_uncrop_pane_ParamLimits

0x9872,	// (0x00078488) call3_video_subqcif_uncrop_pane

0x98ca,	// (0x000784e0) popup_call3_audio_in_window_g4_ParamLimits

0x98ca,	// (0x000784e0) popup_call3_audio_in_window_g4

0x97ed,	// (0x00078403) mup_spec_half_pane

0x97f6,	// (0x0007840c) mup_spec_half_pane_cp

0x33c4,	// (0x00071fda) mup_osc_middle_pane

0x33cd,	// (0x00071fe3) mup_visualizer_osc_pane_g1

0x97ce,	// (0x000783e4) mup_spec_bar_pane_ParamLimits

0x97ce,	// (0x000783e4) mup_spec_bar_pane

0x33b1,	// (0x00071fc7) mup_spec_bar_pane_g1

0x33bb,	// (0x00071fd1) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007e227) mup_spec_bar_pane_g

0x6a5e,	// (0x00075674) aid_cale_week_size_cell_pane_ParamLimits

0x6a73,	// (0x00075689) bg_cale_heading_pane_ParamLimits

0x14f5,	// (0x0007010b) bg_cale_pane_cp01_ParamLimits

0x6a95,	// (0x000756ab) cale_week_corner_pane_ParamLimits

0x6aaf,	// (0x000756c5) cale_week_day_heading_pane_ParamLimits

0x6ad1,	// (0x000756e7) cale_week_scroll_pane_g1_ParamLimits

0x6aee,	// (0x00075704) cale_week_scroll_pane_g2_ParamLimits

0x6b01,	// (0x00075717) cale_week_scroll_pane_g3_ParamLimits

0x6b14,	// (0x0007572a) cale_week_scroll_pane_g4_ParamLimits

0x6b27,	// (0x0007573d) cale_week_scroll_pane_g5_ParamLimits

0x6b3a,	// (0x00075750) cale_week_scroll_pane_g6_ParamLimits

0x6b4d,	// (0x00075763) cale_week_scroll_pane_g7_ParamLimits

0x6b60,	// (0x00075776) cale_week_scroll_pane_g8_ParamLimits

0x6b75,	// (0x0007578b) cale_week_scroll_pane_g9_ParamLimits

0x6b88,	// (0x0007579e) cale_week_scroll_pane_g10_ParamLimits

0x6b9b,	// (0x000757b1) cale_week_scroll_pane_g11_ParamLimits

0x6bae,	// (0x000757c4) cale_week_scroll_pane_g12_ParamLimits

0x6bc5,	// (0x000757db) cale_week_scroll_pane_g13_ParamLimits

0x6be0,	// (0x000757f6) cale_week_scroll_pane_g14_ParamLimits

0x6bfb,	// (0x00075811) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0007ddcf) cale_week_scroll_pane_g_ParamLimits

0x6c16,	// (0x0007582c) cale_week_time_pane_ParamLimits

0x6c2b,	// (0x00075841) grid_cale_week_pane_ParamLimits

0x1513,	// (0x00070129) listscroll_cale_week_pane_t1

0x1525,	// (0x0007013b) scroll_pane_cp08_ParamLimits

0x78ef,	// (0x00076505) cale_month_corner_pane_ParamLimits

0x18d1,	// (0x000704e7) cale_month_pane_t1

0x7d77,	// (0x0007698d) cale_month_week_pane_ParamLimits

0x1fc0,	// (0x00070bd6) popup_call_status_window_g1_ParamLimits

0x8562,	// (0x00077178) popup_call_status_window_g2_ParamLimits

0x856e,	// (0x00077184) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0007df77) popup_call_status_window_g_ParamLimits

0x1c7d,	// (0x00070893) aid_call2_pane

0x52c5,	// (0x00073edb) msg_header_pane_g1

0x8f33,	// (0x00077b49) postcard_address2_pane_ParamLimits

0x8f33,	// (0x00077b49) postcard_address2_pane

0x8f3f,	// (0x00077b55) postcard_message2_pane_ParamLimits

0x8f3f,	// (0x00077b55) postcard_message2_pane

0x9766,	// (0x0007837c) message2_row_pane_ParamLimits

0x9766,	// (0x0007837c) message2_row_pane

0x9781,	// (0x00078397) address2_row_pane_ParamLimits

0x9781,	// (0x00078397) address2_row_pane

0x337f,	// (0x00071f95) postcard_message2_row_pane_g1

0x3387,	// (0x00071f9d) postcard_message2_row_pane_t1

0x337f,	// (0x00071f95) address2_row_pane_g1

0x3387,	// (0x00071f9d) address2_row_pane_t1

0x6f82,	// (0x00075b98) aid_size_cell_vorec

0x10b7,	// (0x0006fccd) main_rss_pane

0x9794,	// (0x000783aa) rss_list_single_pane_ParamLimits

0x9794,	// (0x000783aa) rss_list_single_pane

0x3395,	// (0x00071fab) rss_list_single_pane_t1

0x33a3,	// (0x00071fb9) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0007e222) rss_list_single_pane_t

0x10b7,	// (0x0006fccd) main_camera2_pane

0x10b7,	// (0x0006fccd) main_video2_pane

0x99c6,	// (0x000785dc) cams_zoom_pane_cp2_ParamLimits

0x99c6,	// (0x000785dc) cams_zoom_pane_cp2

0x99d2,	// (0x000785e8) image2_vga_pane_ParamLimits

0x99d2,	// (0x000785e8) image2_vga_pane

0x99e1,	// (0x000785f7) main_camera2_pane_g1_ParamLimits

0x99e1,	// (0x000785f7) main_camera2_pane_g1

0x99ed,	// (0x00078603) main_camera2_pane_g2_ParamLimits

0x99ed,	// (0x00078603) main_camera2_pane_g2

0x99f9,	// (0x0007860f) main_camera2_pane_g3_ParamLimits

0x99f9,	// (0x0007860f) main_camera2_pane_g3

0x9a05,	// (0x0007861b) main_camera2_pane_g4_ParamLimits

0x9a05,	// (0x0007861b) main_camera2_pane_g4

0x9a11,	// (0x00078627) main_camera2_pane_g5_ParamLimits

0x9a11,	// (0x00078627) main_camera2_pane_g5

0x9a1d,	// (0x00078633) main_camera2_pane_g6_ParamLimits

0x9a1d,	// (0x00078633) main_camera2_pane_g6

0x9a29,	// (0x0007863f) main_camera2_pane_g7_ParamLimits

0x9a29,	// (0x0007863f) main_camera2_pane_g7

0x9a35,	// (0x0007864b) main_camera2_pane_g8_ParamLimits

0x9a35,	// (0x0007864b) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0007e243) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0007e243) main_camera2_pane_g

0x9a4d,	// (0x00078663) main_camera2_pane_t1_ParamLimits

0x9a4d,	// (0x00078663) main_camera2_pane_t1

0x9a5f,	// (0x00078675) main_camera2_pane_t2_ParamLimits

0x9a5f,	// (0x00078675) main_camera2_pane_t2

0x9a71,	// (0x00078687) main_camera2_pane_t3_ParamLimits

0x9a71,	// (0x00078687) main_camera2_pane_t3

0x9a83,	// (0x00078699) main_camera2_pane_t4_ParamLimits

0x9a83,	// (0x00078699) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0007e256) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0007e256) main_camera2_pane_t

0x9ae5,	// (0x000786fb) cams_zoom_pane_cp4_ParamLimits

0x9ae5,	// (0x000786fb) cams_zoom_pane_cp4

0x9af5,	// (0x0007870b) image2_cif_pane_ParamLimits

0x9af5,	// (0x0007870b) image2_cif_pane

0x9b0a,	// (0x00078720) image2_subqcif_pane_ParamLimits

0x9b0a,	// (0x00078720) image2_subqcif_pane

0x9b19,	// (0x0007872f) main_video2_pane_g1_ParamLimits

0x9b19,	// (0x0007872f) main_video2_pane_g1

0x9b2b,	// (0x00078741) main_video2_pane_g2_ParamLimits

0x9b2b,	// (0x00078741) main_video2_pane_g2

0x9b3b,	// (0x00078751) main_video2_pane_g3_ParamLimits

0x9b3b,	// (0x00078751) main_video2_pane_g3

0x9b4b,	// (0x00078761) main_video2_pane_g4_ParamLimits

0x9b4b,	// (0x00078761) main_video2_pane_g4

0x9b5b,	// (0x00078771) main_video2_pane_g5_ParamLimits

0x9b5b,	// (0x00078771) main_video2_pane_g5

0x9b6b,	// (0x00078781) main_video2_pane_g6_ParamLimits

0x9b6b,	// (0x00078781) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0007e265) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0007e265) main_video2_pane_g

0x9b7d,	// (0x00078793) main_video2_pane_t1_ParamLimits

0x9b7d,	// (0x00078793) main_video2_pane_t1

0x9b97,	// (0x000787ad) main_video2_pane_t2_ParamLimits

0x9b97,	// (0x000787ad) main_video2_pane_t2

0x9bbd,	// (0x000787d3) main_video2_pane_t3_ParamLimits

0x9bbd,	// (0x000787d3) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0007e272) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0007e272) main_video2_pane_t

0x948c,	// (0x000780a2) call_muted_g2

0x0001,

0xf5fe,	// (0x0007e214) call_muted_g

0x10b7,	// (0x0006fccd) main_mup2_pane

0x3432,	// (0x00072048) main_mup2_pane_g1_ParamLimits

0x3432,	// (0x00072048) main_mup2_pane_g1

0x9be3,	// (0x000787f9) main_mup2_pane_g2_ParamLimits

0x9be3,	// (0x000787f9) main_mup2_pane_g2

0x9e65,	// (0x00078a7b) main_mup_pane_g13_cp1

0x9e6d,	// (0x00078a83) mup_volume_pane_cp1

0x9c03,	// (0x00078819) main_mup2_pane_g4_ParamLimits

0x9c03,	// (0x00078819) main_mup2_pane_g4

0x9c18,	// (0x0007882e) main_mup2_pane_g5_ParamLimits

0x9c18,	// (0x0007882e) main_mup2_pane_g5

0x9c2d,	// (0x00078843) main_mup2_pane_g6_ParamLimits

0x9c2d,	// (0x00078843) main_mup2_pane_g6

0x9c42,	// (0x00078858) main_mup2_pane_g7_ParamLimits

0x9c42,	// (0x00078858) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0007e279) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0007e279) main_mup2_pane_g

0x9c5e,	// (0x00078874) main_mup2_pane_t1_ParamLimits

0x9c5e,	// (0x00078874) main_mup2_pane_t1

0x9c75,	// (0x0007888b) main_mup2_pane_t2_ParamLimits

0x9c75,	// (0x0007888b) main_mup2_pane_t2

0x9c8c,	// (0x000788a2) main_mup2_pane_t3_ParamLimits

0x9c8c,	// (0x000788a2) main_mup2_pane_t3

0x9ca3,	// (0x000788b9) main_mup2_pane_t4_ParamLimits

0x9ca3,	// (0x000788b9) main_mup2_pane_t4

0x9cbd,	// (0x000788d3) main_mup2_pane_t5_ParamLimits

0x9cbd,	// (0x000788d3) main_mup2_pane_t5

0x9cd7,	// (0x000788ed) main_mup2_pane_t6_ParamLimits

0x9cd7,	// (0x000788ed) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0007e288) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0007e288) main_mup2_pane_t

0x9d0f,	// (0x00078925) mup2_visualizer_pane_ParamLimits

0x9d0f,	// (0x00078925) mup2_visualizer_pane

0x9d45,	// (0x0007895b) mup_progress_pane_cp_ParamLimits

0x9d45,	// (0x0007895b) mup_progress_pane_cp

0x9e50,	// (0x00078a66) mup_volume_pane_cp_ParamLimits

0x9e50,	// (0x00078a66) mup_volume_pane_cp

0x9d5c,	// (0x00078972) mup2_visualizer_pane_g1_ParamLimits

0x9d5c,	// (0x00078972) mup2_visualizer_pane_g1

0x3404,	// (0x0007201a) mup2_visualizer_pane_g2_ParamLimits

0x3404,	// (0x0007201a) mup2_visualizer_pane_g2

0x9d71,	// (0x00078987) mup2_visualizer_pane_g3_ParamLimits

0x9d71,	// (0x00078987) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0007e295) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0007e295) mup2_visualizer_pane_g

0x21ec,	// (0x00070e02) aid_size_cell_fmradio

0x95a2,	// (0x000781b8) aid_height_parent_landcape

0x172f,	// (0x00070345) wml_content_pane_cp

0x1737,	// (0x0007034d) wml_tabs_pane

0x1740,	// (0x00070356) popup_wml_miniature_window

0x1748,	// (0x0007035e) scroll_pane_cp021

0x175c,	// (0x00070372) wml_content_pane_comp8

0x10b7,	// (0x0006fccd) bg_popup_sub_pane_cp05

0x3422,	// (0x00072038) popup_wml_miniature_window_g1

0x342a,	// (0x00072040) wml_miniature_view_pane

0x9d7f,	// (0x00078995) aid_size_wml_view

0x9d87,	// (0x0007899d) wml_miniature_view_pane_g1

0x9d90,	// (0x000789a6) wml_miniature_view_pane_g2

0x9d99,	// (0x000789af) wml_miniature_view_pane_g3

0x9da1,	// (0x000789b7) wml_miniature_view_pane_g4

0x9da9,	// (0x000789bf) wml_miniature_view_pane_g5

0x9db1,	// (0x000789c7) wml_miniature_view_pane_g6

0x9db9,	// (0x000789cf) wml_miniature_view_pane_g7

0x9dc1,	// (0x000789d7) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0007e29c) wml_miniature_view_pane_g

0x3432,	// (0x00072048) background_graphic_ParamLimits

0x3432,	// (0x00072048) background_graphic

0x343e,	// (0x00072054) wml_tabs_2_pane

0x3447,	// (0x0007205d) wml_tabs_3_pane_ParamLimits

0x3447,	// (0x0007205d) wml_tabs_3_pane

0x3459,	// (0x0007206f) wml_tabs_4_pane_ParamLimits

0x3459,	// (0x0007206f) wml_tabs_4_pane

0x346f,	// (0x00072085) wml_tabs_5_pane_ParamLimits

0x346f,	// (0x00072085) wml_tabs_5_pane

0x3489,	// (0x0007209f) wml_tabs_pane_g2_ParamLimits

0x3489,	// (0x0007209f) wml_tabs_pane_g2

0x349d,	// (0x000720b3) wml_tabs_pane_g3_ParamLimits

0x349d,	// (0x000720b3) wml_tabs_pane_g3

0x9dc9,	// (0x000789df) wml_tabs_2_active_pane_ParamLimits

0x9dc9,	// (0x000789df) wml_tabs_2_active_pane

0x9dd9,	// (0x000789ef) wml_tabs_2_passive_pane_ParamLimits

0x9dd9,	// (0x000789ef) wml_tabs_2_passive_pane

0x9de9,	// (0x000789ff) wml_tabs_3_active_pane_cp_ParamLimits

0x9de9,	// (0x000789ff) wml_tabs_3_active_pane_cp

0x9dfa,	// (0x00078a10) wml_tabs_3_passive_pane_ParamLimits

0x9dfa,	// (0x00078a10) wml_tabs_3_passive_pane

0x9e0b,	// (0x00078a21) wml_tabs_3_passive_pane_cp_ParamLimits

0x9e0b,	// (0x00078a21) wml_tabs_3_passive_pane_cp

0x9e1c,	// (0x00078a32) tabs_4_active_pane

0x9e24,	// (0x00078a3a) tabs_4_passive_pane

0x9e2c,	// (0x00078a42) tabs_4_passive_pane_cp

0x9e34,	// (0x00078a4a) tabs_4_passive_pane_cp2

0x9367,	// (0x00077f7d) aid_height_text

0x8b74,	// (0x0007778a) mup_volume_cont_pane_ParamLimits

0x8b74,	// (0x0007778a) mup_volume_cont_pane

0x659c,	// (0x000751b2) aid_size_cell_pinb

0x65a6,	// (0x000751bc) aid_size_list_pinb

0x9d2e,	// (0x00078944) mup2_volume_cont_pane_ParamLimits

0x9d2e,	// (0x00078944) mup2_volume_cont_pane

0x9e3c,	// (0x00078a52) mup2_volume_cont_pane_g1_ParamLimits

0x9e3c,	// (0x00078a52) mup2_volume_cont_pane_g1

0x61d9,	// (0x00074def) aid_size_cell_touch_ParamLimits

0x61d9,	// (0x00074def) aid_size_cell_touch

0x6482,	// (0x00075098) touch_pane_ParamLimits

0x6482,	// (0x00075098) touch_pane

0xecc7,	// (0x0007d8dd) main_rss2_pane

0x34ba,	// (0x000720d0) listscroll_rss2_pane

0x34c3,	// (0x000720d9) rss2_navigation_pane

0x34cb,	// (0x000720e1) list_rss2_pane

0x1db8,	// (0x000709ce) scroll_pane_cp22

0x34d3,	// (0x000720e9) rss2_navigation_pane_g1

0x34dc,	// (0x000720f2) rss2_navigation_pane_g2

0x34e4,	// (0x000720fa) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0007e2ad) rss2_navigation_pane_g

0x34ec,	// (0x00072102) rss2_navigation_pane_t1

0x9e75,	// (0x00078a8b) rss2_list_single_pane_ParamLimits

0x9e75,	// (0x00078a8b) rss2_list_single_pane

0x34fa,	// (0x00072110) rss2_list_single_pane_t2

0x3508,	// (0x0007211e) rss2_list_single_pane_t3_ParamLimits

0x3508,	// (0x0007211e) rss2_list_single_pane_t3

0x3525,	// (0x0007213b) rss2_list_single_pane_t4

0x83dd,	// (0x00076ff3) smil_status_pane_g1

0x333c,	// (0x00071f52) main_image2_pane_ParamLimits

0x333c,	// (0x00071f52) main_image2_pane

0x9a41,	// (0x00078657) main_camera2_pane_g9_ParamLimits

0x9a41,	// (0x00078657) main_camera2_pane_g9

0x9a95,	// (0x000786ab) main_camera2_pane_t5_ParamLimits

0x9a95,	// (0x000786ab) main_camera2_pane_t5

0x9aa7,	// (0x000786bd) main_camera2_pane_t6_ParamLimits

0x9aa7,	// (0x000786bd) main_camera2_pane_t6

0x9ea6,	// (0x00078abc) main_image2_pane_g1_ParamLimits

0x9ea6,	// (0x00078abc) main_image2_pane_g1

0x9107,	// (0x00077d1d) smil2_video_pane_ParamLimits

0x9107,	// (0x00077d1d) smil2_video_pane

0x620d,	// (0x00074e23) aid_zoom_text_primary_cp

0x642b,	// (0x00075041) popup_preview_fixed_window

0x1698,	// (0x000702ae) im_reading_pane_g1

0x998b,	// (0x000785a1) cams2_bc_adjust_pane_cp_ParamLimits

0x998b,	// (0x000785a1) cams2_bc_adjust_pane_cp

0x9ad7,	// (0x000786ed) cams2_bc_adjust_pane_ParamLimits

0x9ad7,	// (0x000786ed) cams2_bc_adjust_pane

0x9eb2,	// (0x00078ac8) cams2_bc_adjust_pane_g1

0x9eba,	// (0x00078ad0) cams2_slider_pane

0x9ec3,	// (0x00078ad9) cams2_slider_pane_g1

0x9ecc,	// (0x00078ae2) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0007e2b4) cams2_slider_pane_g

0x66ac,	// (0x000752c2) calc_display_pane_ParamLimits

0x66ca,	// (0x000752e0) calc_paper_pane_ParamLimits

0x66e6,	// (0x000752fc) grid_calc_pane_ParamLimits

0x85d0,	// (0x000771e6) popup_clock_digital_window_t1_ParamLimits

0x2189,	// (0x00070d9f) main_image_pane_t1

0x6692,	// (0x000752a8) aid_size_cell_calc_ParamLimits

0x6692,	// (0x000752a8) aid_size_cell_calc

0x95dc,	// (0x000781f2) popup_blid_sat_info2_window_ParamLimits

0x95dc,	// (0x000781f2) popup_blid_sat_info2_window

0x353b,	// (0x00072151) aid_size_cell_blid

0x3543,	// (0x00072159) bg_popup_window_pane_cp07

0x3566,	// (0x0007217c) grid_popup_blid_pane

0x3570,	// (0x00072186) heading_pane_cp05_ParamLimits

0x3570,	// (0x00072186) heading_pane_cp05

0x363a,	// (0x00072250) cell_popup_blid_pane_ParamLimits

0x363a,	// (0x00072250) cell_popup_blid_pane

0x365e,	// (0x00072274) cell_popup_blid_pane_g1

0x3666,	// (0x0007227c) cell_popup_blid_pane_t1

0x9cf4,	// (0x0007890a) mup2_indicator_pane_ParamLimits

0x9cf4,	// (0x0007890a) mup2_indicator_pane

0x1f01,	// (0x00070b17) mup2_visualizer_osc_pane

0x3410,	// (0x00072026) mup2_visualizer_spec_pane_ParamLimits

0x3410,	// (0x00072026) mup2_visualizer_spec_pane

0x9ee6,	// (0x00078afc) mup2_spec_half_pane

0x9eef,	// (0x00078b05) mup2_spec_half_pane_cp

0x9ef9,	// (0x00078b0f) mup2_spec_bar_pane_ParamLimits

0x9ef9,	// (0x00078b0f) mup2_spec_bar_pane

0x33b1,	// (0x00071fc7) mup2_spec_bar_pane_g1

0x33bb,	// (0x00071fd1) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007e227) mup2_spec_bar_pane_g

0x9f18,	// (0x00078b2e) mup2_osc_middle_pane

0x33cd,	// (0x00071fe3) mup2_visualizer_osc_pane_g1

0xecf1,	// (0x0007d907) popup_number_entry_window_t1_ParamLimits

0xed04,	// (0x0007d91a) popup_number_entry_window_t2_ParamLimits

0xed16,	// (0x0007d92c) popup_number_entry_window_t3_ParamLimits

0x64d9,	// (0x000750ef) popup_number_entry_window_t5_ParamLimits

0x64d9,	// (0x000750ef) popup_number_entry_window_t5

0xf0d3,	// (0x0007dce9) popup_number_entry_window_t_ParamLimits

0xed28,	// (0x0007d93e) text_title_cp2_ParamLimits

0x8dfb,	// (0x00077a11) aid_hotspot_pointer_text2_pane

0x8e95,	// (0x00077aab) main_viewer_pane_g9_ParamLimits

0x8e95,	// (0x00077aab) main_viewer_pane_g9

0x18d1,	// (0x000704e7) cale_month_pane_t1_ParamLimits

0x190e,	// (0x00070524) bg_cale_pane_ParamLimits

0x1926,	// (0x0007053c) list_cale_pane_ParamLimits

0x1937,	// (0x0007054d) listscroll_cale_day_pane_t1

0x1949,	// (0x0007055f) scroll_pane_cp09_ParamLimits

0x8baf,	// (0x000777c5) main_mup_eq_pane_t1_ParamLimits

0x8baf,	// (0x000777c5) main_mup_eq_pane_t1

0x8bc9,	// (0x000777df) main_mup_eq_pane_t2_ParamLimits

0x8bc9,	// (0x000777df) main_mup_eq_pane_t2

0x8be3,	// (0x000777f9) main_mup_eq_pane_t3_ParamLimits

0x8be3,	// (0x000777f9) main_mup_eq_pane_t3

0x8bfb,	// (0x00077811) main_mup_eq_pane_t4_ParamLimits

0x8bfb,	// (0x00077811) main_mup_eq_pane_t4

0x8c13,	// (0x00077829) main_mup_eq_pane_t5_ParamLimits

0x8c13,	// (0x00077829) main_mup_eq_pane_t5

0x8c2b,	// (0x00077841) main_mup_eq_pane_t6_ParamLimits

0x8c2b,	// (0x00077841) main_mup_eq_pane_t6

0x8c3f,	// (0x00077855) main_mup_eq_pane_t7_ParamLimits

0x8c3f,	// (0x00077855) main_mup_eq_pane_t7

0x8c53,	// (0x00077869) main_mup_eq_pane_t8_ParamLimits

0x8c53,	// (0x00077869) main_mup_eq_pane_t8

0x8c69,	// (0x0007787f) main_mup_eq_pane_t9_ParamLimits

0x8c69,	// (0x0007787f) main_mup_eq_pane_t9

0x8c81,	// (0x00077897) main_mup_eq_pane_t10_ParamLimits

0x8c81,	// (0x00077897) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0007e076) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0007e076) main_mup_eq_pane_t

0x8d3e,	// (0x00077954) mup_equalizer_pane_cp5_ParamLimits

0x8d54,	// (0x0007796a) mup_equalizer_pane_cp6_ParamLimits

0x8d6c,	// (0x00077982) mup_equalizer_pane_cp7_ParamLimits

0xecc7,	// (0x0007d8dd) main_gallery_pane

0x33d6,	// (0x00071fec) smil2_volume_pane

0x33f1,	// (0x00072007) smil_status_volume_pane_g1_ParamLimits

0x33de,	// (0x00071ff4) smil_status_volume_pane_g2_ParamLimits

0x97fe,	// (0x00078414) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0007e22c) smil_status_volume_pane_g_ParamLimits

0x3543,	// (0x00072159) bg_popup_window_pane_cp07_ParamLimits

0x3551,	// (0x00072167) blid_firmament_pane

0x9f21,	// (0x00078b37) aid_size_cell_gallery_ParamLimits

0x9f21,	// (0x00078b37) aid_size_cell_gallery

0x9f2f,	// (0x00078b45) grid_gallery_pane_ParamLimits

0x9f2f,	// (0x00078b45) grid_gallery_pane

0x9f3f,	// (0x00078b55) cell_gallery_pane_ParamLimits

0x9f3f,	// (0x00078b55) cell_gallery_pane

0x3674,	// (0x0007228a) bg_cell_gallery_focus_pane_ParamLimits

0x3674,	// (0x0007228a) bg_cell_gallery_focus_pane

0x3686,	// (0x0007229c) cell_gallery_pane_g1_ParamLimits

0x3686,	// (0x0007229c) cell_gallery_pane_g1

0x9f8d,	// (0x00078ba3) cell_gallery_pane_g2_ParamLimits

0x9f8d,	// (0x00078ba3) cell_gallery_pane_g2

0x9f9a,	// (0x00078bb0) cell_gallery_pane_g3_ParamLimits

0x9f9a,	// (0x00078bb0) cell_gallery_pane_g3

0x3692,	// (0x000722a8) cell_gallery_pane_g4_ParamLimits

0x3692,	// (0x000722a8) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0007e2da) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0007e2da) cell_gallery_pane_g

0x369e,	// (0x000722b4) bg_cell_gallery_focus_pane_g1

0x36a6,	// (0x000722bc) bg_cell_gallery_focus_pane_g2

0x36ae,	// (0x000722c4) bg_cell_gallery_focus_pane_g3

0x36b6,	// (0x000722cc) bg_cell_gallery_focus_pane_g4

0x36be,	// (0x000722d4) bg_cell_gallery_focus_pane_g5

0x36c6,	// (0x000722dc) bg_cell_gallery_focus_pane_g6

0x36ce,	// (0x000722e4) bg_cell_gallery_focus_pane_g7

0x36d6,	// (0x000722ec) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0007e2e3) bg_cell_gallery_focus_pane_g

0x36de,	// (0x000722f4) aid_firma_cardinal

0x36f2,	// (0x00072308) blid_firmament_pane_t1

0x3709,	// (0x0007231f) blid_firmament_pane_t2

0x3720,	// (0x00072336) blid_firmament_pane_t3

0x3737,	// (0x0007234d) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0007e2f4) blid_firmament_pane_t

0x374e,	// (0x00072364) blid_sat_info_pane

0x375e,	// (0x00072374) blid_sat_info_pane_g1

0x375e,	// (0x00072374) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0007e2fd) blid_sat_info_pane_g

0x3768,	// (0x0007237e) blid_sat_info_pane_t1

0x3776,	// (0x0007238c) smil2_volume_content_pane

0x377f,	// (0x00072395) smil2_volume_pane_g1

0x3787,	// (0x0007239d) smil2_volume_content_pane_g1

0x3790,	// (0x000723a6) smil2_volume_content_pane_g2

0x3799,	// (0x000723af) smil2_volume_content_pane_g3

0x37a2,	// (0x000723b8) smil2_volume_content_pane_g4

0x37ab,	// (0x000723c1) smil2_volume_content_pane_g5

0x37b4,	// (0x000723ca) smil2_volume_content_pane_g6

0x37bd,	// (0x000723d3) smil2_volume_content_pane_g7

0x37c6,	// (0x000723dc) smil2_volume_content_pane_g8

0x37cf,	// (0x000723e5) smil2_volume_content_pane_g9

0x37d8,	// (0x000723ee) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0007e302) smil2_volume_content_pane_g

0x6cac,	// (0x000758c2) cale_week_day_heading_pane_t1_ParamLimits

0x6ce7,	// (0x000758fd) cale_week_day_heading_pane_t2_ParamLimits

0x6d22,	// (0x00075938) cale_week_day_heading_pane_t3_ParamLimits

0x6d5d,	// (0x00075973) cale_week_day_heading_pane_t4_ParamLimits

0x6d98,	// (0x000759ae) cale_week_day_heading_pane_t5_ParamLimits

0x6dd3,	// (0x000759e9) cale_week_day_heading_pane_t6_ParamLimits

0x6e0e,	// (0x00075a24) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0007ddee) cale_week_day_heading_pane_t_ParamLimits

0x1542,	// (0x00070158) bg_cale_side_pane_ParamLimits

0x6e49,	// (0x00075a5f) cale_week_time_pane_t1_ParamLimits

0x6e63,	// (0x00075a79) cale_week_time_pane_t2_ParamLimits

0x6e7d,	// (0x00075a93) cale_week_time_pane_t3_ParamLimits

0x6e97,	// (0x00075aad) cale_week_time_pane_t4_ParamLimits

0x6eb1,	// (0x00075ac7) cale_week_time_pane_t5_ParamLimits

0x6ecb,	// (0x00075ae1) cale_week_time_pane_t6_ParamLimits

0x6eeb,	// (0x00075b01) cale_week_time_pane_t7_ParamLimits

0x6f0d,	// (0x00075b23) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0007ddfd) cale_week_time_pane_t_ParamLimits

0x6f31,	// (0x00075b47) cell_cale_week_pane_g2_ParamLimits

0x1542,	// (0x00070158) bg_cale_side_pane_cp01_ParamLimits

0x81de,	// (0x00076df4) cale_month_week_pane_t1_ParamLimits

0x81f7,	// (0x00076e0d) cale_month_week_pane_t2_ParamLimits

0x8210,	// (0x00076e26) cale_month_week_pane_t3_ParamLimits

0x8229,	// (0x00076e3f) cale_month_week_pane_t4_ParamLimits

0x8242,	// (0x00076e58) cale_month_week_pane_t5_ParamLimits

0x8263,	// (0x00076e79) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0007ded6) cale_month_week_pane_t_ParamLimits

0x83a6,	// (0x00076fbc) cell_cale_month_pane_g1_ParamLimits

0xecc7,	// (0x0007d8dd) main_cale_event_viewer_pane

0xecc7,	// (0x0007d8dd) listscroll_cale_event_viewer_pane

0x37e1,	// (0x000723f7) list_cale_ev_pane

0x37e9,	// (0x000723ff) scroll_pane_cp023

0x37f5,	// (0x0007240b) field_cale_ev_pane_ParamLimits

0x37f5,	// (0x0007240b) field_cale_ev_pane

0x3813,	// (0x00072429) field_cale_ev_content_pane_ParamLimits

0x3813,	// (0x00072429) field_cale_ev_content_pane

0x381f,	// (0x00072435) field_cale_ev_pane_g1_ParamLimits

0x381f,	// (0x00072435) field_cale_ev_pane_g1

0x382b,	// (0x00072441) field_cale_ev_pane_g2_ParamLimits

0x382b,	// (0x00072441) field_cale_ev_pane_g2

0x3843,	// (0x00072459) field_cale_ev_pane_g3_ParamLimits

0x3843,	// (0x00072459) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0007e317) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0007e317) field_cale_ev_pane_g

0x385b,	// (0x00072471) field_cale_ev_pane_t1_ParamLimits

0x385b,	// (0x00072471) field_cale_ev_pane_t1

0x3872,	// (0x00072488) field_cale_ev_content_pane_t1_ParamLimits

0x3872,	// (0x00072488) field_cale_ev_content_pane_t1

0x8de2,	// (0x000779f8) bg_button_pane_cp01

0x6a4e,	// (0x00075664) listscroll_cale_week_pane_ParamLimits

0x14ec,	// (0x00070102) popup_toolbar_window_cp01

0x1513,	// (0x00070129) listscroll_cale_week_pane_t1_ParamLimits

0x6a4e,	// (0x00075664) listscroll_cale_day_pane_ParamLimits

0x14ec,	// (0x00070102) popup_toolbar_window_cp02

0x1937,	// (0x0007054d) listscroll_cale_day_pane_t1_ParamLimits

0x6a4e,	// (0x00075664) main_cale_month_pane_ParamLimits

0x96e3,	// (0x000782f9) popup_toolbar_window_cp03_ParamLimits

0x96e3,	// (0x000782f9) popup_toolbar_window_cp03

0x901d,	// (0x00077c33) main_image_pane_g2_ParamLimits

0x901d,	// (0x00077c33) main_image_pane_g2

0x9029,	// (0x00077c3f) main_image_pane_g3_ParamLimits

0x9029,	// (0x00077c3f) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0007e108) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0007e108) main_image_pane_g

0x2189,	// (0x00070d9f) main_image_pane_t1_ParamLimits

0x9035,	// (0x00077c4b) main_image_pane_t2_ParamLimits

0x9035,	// (0x00077c4b) main_image_pane_t2

0x9047,	// (0x00077c5d) main_image_pane_t3_ParamLimits

0x9047,	// (0x00077c5d) main_image_pane_t3

0x9059,	// (0x00077c6f) main_image_pane_t4_ParamLimits

0x9059,	// (0x00077c6f) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0007e10f) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0007e10f) main_image_pane_t

0x906b,	// (0x00077c81) popup_image_details_window_cp01

0x9075,	// (0x00077c8b) popup_toobar_trans_pane_cp01_ParamLimits

0x9075,	// (0x00077c8b) popup_toobar_trans_pane_cp01

0x9633,	// (0x00078249) popup_image_details_window_ParamLimits

0x9633,	// (0x00078249) popup_image_details_window

0x9641,	// (0x00078257) popup_image_focus_window

0x997d,	// (0x00078593) camera2_autofocus_pane_ParamLimits

0x997d,	// (0x00078593) camera2_autofocus_pane

0xecc7,	// (0x0007d8dd) bg_popup_sub_pane_cp06

0x3890,	// (0x000724a6) popup_image_focus_window_g1

0x3898,	// (0x000724ae) popup_image_focus_window_g2

0x38a0,	// (0x000724b6) popup_image_focus_window_g3

0x38a8,	// (0x000724be) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0007e31e) popup_image_focus_window_g

0x38b0,	// (0x000724c6) popup_image_focus_window_t1

0x38be,	// (0x000724d4) popup_image_focus_window_t2

0x38ce,	// (0x000724e4) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0007e327) popup_image_focus_window_t

0x38dc,	// (0x000724f2) camera2_autofocus_pane_g1

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp01

0x38ea,	// (0x00072500) popup_image_details_window_g1

0x38fd,	// (0x00072513) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0007e339) popup_image_details_window_g

0x3926,	// (0x0007253c) popup_image_details_window_t1

0x3938,	// (0x0007254e) popup_image_details_window_t2

0x3951,	// (0x00072567) popup_image_details_window_t3

0x3965,	// (0x0007257b) popup_image_details_window_t4

0x3980,	// (0x00072596) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0007e340) popup_image_details_window_t

0x13c3,	// (0x0006ffd9) bg_calc_paper_pane_ParamLimits

0xecc7,	// (0x0007d8dd) grid_highlight_pane_cp013

0x67e3,	// (0x000753f9) list_calc_pane_ParamLimits

0x67f5,	// (0x0007540b) scroll_pane_cp024

0x13d7,	// (0x0006ffed) bg_calc_display_pane_ParamLimits

0x67fd,	// (0x00075413) calc_display_pane_t1_ParamLimits

0x6812,	// (0x00075428) calc_display_pane_t2_ParamLimits

0x6827,	// (0x0007543d) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0007dd70) calc_display_pane_t_ParamLimits

0x6903,	// (0x00075519) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0007dd8d) cell_calc_pane_g

0x690c,	// (0x00075522) cell_calc_pane_t1

0x1436,	// (0x0007004c) grid_highlight_pane_cp02_ParamLimits

0x144c,	// (0x00070062) toolbar_button_pane_cp01_ParamLimits

0x144c,	// (0x00070062) toolbar_button_pane_cp01

0x21ce,	// (0x00070de4) temp_image_control_pane_ParamLimits

0x21ce,	// (0x00070de4) temp_image_control_pane

0x333c,	// (0x00071f52) main_mp3_pane

0x399a,	// (0x000725b0) temp_image_control_pane_g1_ParamLimits

0x399a,	// (0x000725b0) temp_image_control_pane_g1

0x39a8,	// (0x000725be) temp_image_control_pane_g2_ParamLimits

0x39a8,	// (0x000725be) temp_image_control_pane_g2

0x39ba,	// (0x000725d0) temp_image_control_pane_g3_ParamLimits

0x39ba,	// (0x000725d0) temp_image_control_pane_g3

0x9fd7,	// (0x00078bed) temp_image_control_pane_g4_ParamLimits

0x9fd7,	// (0x00078bed) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0007e34b) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0007e34b) temp_image_control_pane_g

0x399a,	// (0x000725b0) main_mp3_pane_g1

0x9fe8,	// (0x00078bfe) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0007e354) main_mp3_pane_g

0x39fd,	// (0x00072613) main_mp3_pane_t1

0x15a7,	// (0x000701bd) main_camera_pane_g8_ParamLimits

0x15a7,	// (0x000701bd) main_camera_pane_g8

0x71c9,	// (0x00075ddf) main_video_pane_g7_ParamLimits

0x71c9,	// (0x00075ddf) main_video_pane_g7

0x9ac5,	// (0x000786db) main_camera2_pane_t7_ParamLimits

0x9ac5,	// (0x000786db) main_camera2_pane_t7

0x16ef,	// (0x00070305) scroll_pane_cp025_ParamLimits

0x16ef,	// (0x00070305) scroll_pane_cp025

0x1703,	// (0x00070319) scroll_pane_cp026_ParamLimits

0x1703,	// (0x00070319) scroll_pane_cp026

0x1712,	// (0x00070328) wml_content_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_touch_calib_pane

0xa08c,	// (0x00078ca2) main_touch_calib_pane_g1

0xa098,	// (0x00078cae) main_touch_calib_pane_g2

0xa0a4,	// (0x00078cba) main_touch_calib_pane_g3

0xa0b0,	// (0x00078cc6) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0007e372) main_touch_calib_pane_g

0xa0bc,	// (0x00078cd2) main_touch_calib_pane_t1

0xa0d5,	// (0x00078ceb) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0007e37b) main_touch_calib_pane_t

0x1e42,	// (0x00070a58) mup_progress_pane_cp02

0x1e61,	// (0x00070a77) navi_pane_g1

0x1ec3,	// (0x00070ad9) navi_pane_mp_t3

0x333c,	// (0x00071f52) main_mp3_pane_ParamLimits

0x9720,	// (0x00078336) navi_pane_ParamLimits

0x399a,	// (0x000725b0) main_mp3_pane_g1_ParamLimits

0x9fe8,	// (0x00078bfe) main_mp3_pane_g2_ParamLimits

0x9ff4,	// (0x00078c0a) main_mp3_pane_g3_ParamLimits

0x9ff4,	// (0x00078c0a) main_mp3_pane_g3

0xa000,	// (0x00078c16) main_mp3_pane_g4_ParamLimits

0xa000,	// (0x00078c16) main_mp3_pane_g4

0x39ca,	// (0x000725e0) main_mp3_pane_g5_ParamLimits

0x39ca,	// (0x000725e0) main_mp3_pane_g5

0x39d8,	// (0x000725ee) main_mp3_pane_g6_ParamLimits

0x39d8,	// (0x000725ee) main_mp3_pane_g6

0x39e5,	// (0x000725fb) main_mp3_pane_g7_ParamLimits

0x39e5,	// (0x000725fb) main_mp3_pane_g7

0x39f1,	// (0x00072607) main_mp3_pane_g8_ParamLimits

0x39f1,	// (0x00072607) main_mp3_pane_g8

0xf73e,	// (0x0007e354) main_mp3_pane_g_ParamLimits

0xa00c,	// (0x00078c22) main_mp3_pane_t2

0xa01c,	// (0x00078c32) main_mp3_pane_t3

0x3a0b,	// (0x00072621) main_mp3_pane_t4

0x3a19,	// (0x0007262f) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0007e365) main_mp3_pane_t

0x3a27,	// (0x0007263d) mup_progress_pane_cp01

0x620d,	// (0x00074e23) aid_zoom_text_secondary2

0x37e1,	// (0x000723f7) list_cale_ev2_pane

0x37e9,	// (0x000723ff) scroll_pane_cp023_ParamLimits

0xa130,	// (0x00078d46) field_cale_ev2_pane_ParamLimits

0xa130,	// (0x00078d46) field_cale_ev2_pane

0xa159,	// (0x00078d6f) field_cale_ev2_pane_g1_ParamLimits

0xa159,	// (0x00078d6f) field_cale_ev2_pane_g1

0xa165,	// (0x00078d7b) field_cale_ev2_pane_g2_ParamLimits

0xa165,	// (0x00078d7b) field_cale_ev2_pane_g2

0xa17d,	// (0x00078d93) field_cale_ev2_pane_g3_ParamLimits

0xa17d,	// (0x00078d93) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0007e386) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0007e386) field_cale_ev2_pane_g

0x534a,	// (0x00073f60) field_cale_ev2_pane_t1_ParamLimits

0x534a,	// (0x00073f60) field_cale_ev2_pane_t1

0x5361,	// (0x00073f77) field_cale_ev2_pane_t2_ParamLimits

0x5361,	// (0x00073f77) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0007e38f) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0007e38f) field_cale_ev2_pane_t

0x8efd,	// (0x00077b13) main_postcard_pane_g5_ParamLimits

0x8efd,	// (0x00077b13) main_postcard_pane_g5

0x8f0b,	// (0x00077b21) main_postcard_pane_g6_ParamLimits

0x8f0b,	// (0x00077b21) main_postcard_pane_g6

0x7013,	// (0x00075c29) camera2_autofocus_pane_cp_ParamLimits

0x7013,	// (0x00075c29) camera2_autofocus_pane_cp

0x333c,	// (0x00071f52) main_mup3_pane

0xa1a1,	// (0x00078db7) main_mup3_pane_g1_ParamLimits

0xa1a1,	// (0x00078db7) main_mup3_pane_g1

0xa1c2,	// (0x00078dd8) main_mup3_pane_g2_ParamLimits

0xa1c2,	// (0x00078dd8) main_mup3_pane_g2

0xa23a,	// (0x00078e50) main_mup3_pane_g3_ParamLimits

0xa23a,	// (0x00078e50) main_mup3_pane_g3

0xa27d,	// (0x00078e93) main_mup3_pane_g4_ParamLimits

0xa27d,	// (0x00078e93) main_mup3_pane_g4

0xa2c0,	// (0x00078ed6) main_mup3_pane_g5_ParamLimits

0xa2c0,	// (0x00078ed6) main_mup3_pane_g5

0xa303,	// (0x00078f19) main_mup3_pane_g6_ParamLimits

0xa303,	// (0x00078f19) main_mup3_pane_g6

0x3a97,	// (0x000726ad) main_mup3_pane_g7_ParamLimits

0x3a97,	// (0x000726ad) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0007e39f) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0007e39f) main_mup3_pane_g

0xa379,	// (0x00078f8f) main_mup3_pane_t1_ParamLimits

0xa379,	// (0x00078f8f) main_mup3_pane_t1

0xa3e8,	// (0x00078ffe) main_mup3_pane_t2_ParamLimits

0xa3e8,	// (0x00078ffe) main_mup3_pane_t2

0xa4b1,	// (0x000790c7) main_mup3_pane_t4_ParamLimits

0xa4b1,	// (0x000790c7) main_mup3_pane_t4

0xa4ff,	// (0x00079115) main_mup3_pane_t5_ParamLimits

0xa4ff,	// (0x00079115) main_mup3_pane_t5

0xa5af,	// (0x000791c5) main_mup3_pane_t6_ParamLimits

0xa5af,	// (0x000791c5) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0007e3b0) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0007e3b0) main_mup3_pane_t

0xa65b,	// (0x00079271) mup3_progress_pane_ParamLimits

0xa65b,	// (0x00079271) mup3_progress_pane

0xa6d9,	// (0x000792ef) popup_mup3_control_window_ParamLimits

0xa6d9,	// (0x000792ef) popup_mup3_control_window

0x3aa5,	// (0x000726bb) popup_mup3_text_window

0xa6f2,	// (0x00079308) mup3_progress_pane_t1

0xa711,	// (0x00079327) mup3_progress_pane_t2

0x3aad,	// (0x000726c3) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0007e3bd) mup3_progress_pane_t

0x3aca,	// (0x000726e0) mup_progress_pane_cp03

0xecc7,	// (0x0007d8dd) bg_tb_trans_pane_cp04

0xa730,	// (0x00079346) mup3_volume_pane

0xa738,	// (0x0007934e) popup_mup3_control_window_g1

0xa741,	// (0x00079357) mup3_volume_pane_g1

0xa74a,	// (0x00079360) mup3_volume_pane_g2

0xa753,	// (0x00079369) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0007e3c4) mup3_volume_pane_g

0xecc7,	// (0x0007d8dd) bg_tb_trans_pane_cp03

0x3ada,	// (0x000726f0) popup_mup3_text_window_g1

0x3ae2,	// (0x000726f8) popup_mup3_text_window_t1

0x141f,	// (0x00070035) list_calc_item_pane_g1_ParamLimits

0x34b1,	// (0x000720c7) mup_volume_pane_cp_g1

0xa0ee,	// (0x00078d04) main_touch_calib_pane_t3

0xa104,	// (0x00078d1a) main_touch_calib_pane_t4

0xa11a,	// (0x00078d30) main_touch_calib_pane_t5

0x61c5,	// (0x00074ddb) aid_cell_size_toolbar2

0x61cd,	// (0x00074de3) aid_popup3_width_pane

0x5055,	// (0x00073c6b) aid_zoom_text_msg_primary

0x6fea,	// (0x00075c00) vorec_t7

0x13e3,	// (0x0006fff9) bg_calc_paper_pane_g1_ParamLimits

0x13fb,	// (0x00070011) bg_calc_paper_pane_g2_ParamLimits

0x13ef,	// (0x00070005) bg_calc_paper_pane_g3_ParamLimits

0x1413,	// (0x00070029) bg_calc_paper_pane_g4_ParamLimits

0x1407,	// (0x0007001d) bg_calc_paper_pane_g5_ParamLimits

0x6866,	// (0x0007547c) bg_calc_paper_pane_g6_ParamLimits

0x6877,	// (0x0007548d) bg_calc_paper_pane_g7_ParamLimits

0x6888,	// (0x0007549e) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0007dd77) bg_calc_paper_pane_g_ParamLimits

0x6899,	// (0x000754af) calc_bg_paper_pane_g9_ParamLimits

0x70fa,	// (0x00075d10) image_qvga_pane_ParamLimits

0x70fa,	// (0x00075d10) image_qvga_pane

0x1312,	// (0x0006ff28) bg_popup_sub_pane_cp04_ParamLimits

0x2105,	// (0x00070d1b) popup_mup_playback_window_g1_ParamLimits

0x2111,	// (0x00070d27) popup_mup_playback_window_t1_ParamLimits

0x2126,	// (0x00070d3c) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0007e103) popup_mup_playback_window_t_ParamLimits

0x9bf4,	// (0x0007880a) main_mup2_pane_g3_ParamLimits

0x9bf4,	// (0x0007880a) main_mup2_pane_g3

0x73ca,	// (0x00075fe0) popup_toolbar_window_cp04

0x2508,	// (0x0007111e) popup_call2_audio_second_window_g3_ParamLimits

0x2508,	// (0x0007111e) popup_call2_audio_second_window_g3

0x295c,	// (0x00071572) popup_call2_audio_first_window_g4_ParamLimits

0x295c,	// (0x00071572) popup_call2_audio_first_window_g4

0x2fdb,	// (0x00071bf1) popup_call2_audio_in_window_g4_ParamLimits

0x2fdb,	// (0x00071bf1) popup_call2_audio_in_window_g4

0x9010,	// (0x00077c26) aid_area_sk_bg_cut_ParamLimits

0x9010,	// (0x00077c26) aid_area_sk_bg_cut

0x213b,	// (0x00070d51) aid_area_sk_bg_cut_2_ParamLimits

0x213b,	// (0x00070d51) aid_area_sk_bg_cut_2

0x9f7d,	// (0x00078b93) aid_placing_details_win

0x9f85,	// (0x00078b9b) aid_placing_details_win_2

0x38dc,	// (0x000724f2) camera2_autofocus_pane_g1_ParamLimits

0x641c,	// (0x00075032) popup_fixed_preview_cale_window_ParamLimits

0x641c,	// (0x00075032) popup_fixed_preview_cale_window

0x1f24,	// (0x00070b3a) navi_slider_pane_g3

0x1f1b,	// (0x00070b31) navi_slider_pane_g4

0x1f12,	// (0x00070b28) navi_slider_pane_g5

0x1f24,	// (0x00070b3a) navi_slider_pane_g6

0x8943,	// (0x00077559) navi_slider_pane_g7

0x2045,	// (0x00070c5b) mup_scale_pane_g3

0x204e,	// (0x00070c64) mup_scale_pane_g4

0x2057,	// (0x00070c6d) mup_scale_pane_g5

0x8d84,	// (0x0007799a) mup_scale_pane_g6

0x8d8d,	// (0x000779a3) mup_scale_pane_g7

0x1f24,	// (0x00070b3a) cams2_slider_pane_g3

0x3533,	// (0x00072149) cams2_slider_pane_g4

0x9ed5,	// (0x00078aeb) cams2_slider_pane_g5

0x1f24,	// (0x00070b3a) cams2_slider_pane_g6

0x9edd,	// (0x00078af3) cams2_slider_pane_g7

0x375e,	// (0x00072374) camera2_autofocus_pane_cp_g1

0x334a,	// (0x00071f60) bg_popup_preview_window_pane_cp02_ParamLimits

0x334a,	// (0x00071f60) bg_popup_preview_window_pane_cp02

0x3af0,	// (0x00072706) list_fp_cale_pane_ParamLimits

0x3af0,	// (0x00072706) list_fp_cale_pane

0x3afc,	// (0x00072712) popup_fixed_preview_cale_window_t1_ParamLimits

0x3afc,	// (0x00072712) popup_fixed_preview_cale_window_t1

0xa75c,	// (0x00079372) popup_fixed_preview_cale_window_t2_ParamLimits

0xa75c,	// (0x00079372) popup_fixed_preview_cale_window_t2

0xa771,	// (0x00079387) popup_fixed_preview_cale_window_t3_ParamLimits

0xa771,	// (0x00079387) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0007e3cb) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0007e3cb) popup_fixed_preview_cale_window_t

0xa786,	// (0x0007939c) list_single_fp_cale_pane_ParamLimits

0xa786,	// (0x0007939c) list_single_fp_cale_pane

0x3b1a,	// (0x00072730) list_single_fp_cale_pane_g1_ParamLimits

0x3b1a,	// (0x00072730) list_single_fp_cale_pane_g1

0x3b26,	// (0x0007273c) list_single_fp_cale_pane_g2_ParamLimits

0x3b26,	// (0x0007273c) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0007e3d2) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0007e3d2) list_single_fp_cale_pane_g

0x3b3f,	// (0x00072755) list_single_fp_cale_pane_t1_ParamLimits

0x3b3f,	// (0x00072755) list_single_fp_cale_pane_t1

0x3b51,	// (0x00072767) list_single_fp_cale_pane_t2_ParamLimits

0x3b51,	// (0x00072767) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0007e3d9) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0007e3d9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xecc7,	// (0x0007d8dd) main_dialer_pane

0xa799,	// (0x000793af) aid_cell_size_keypad

0xa7a3,	// (0x000793b9) dialer_ne_pane

0xa7ad,	// (0x000793c3) grid_dialer_command_1_pane

0xa7b5,	// (0x000793cb) grid_dialer_command_2_pane

0xa7bd,	// (0x000793d3) grid_dialer_keypad_pane

0xa7cf,	// (0x000793e5) bg_popup_call_pane_cp06_ParamLimits

0xa7cf,	// (0x000793e5) bg_popup_call_pane_cp06

0xa7db,	// (0x000793f1) dialer_ne_clear_pane_ParamLimits

0xa7db,	// (0x000793f1) dialer_ne_clear_pane

0x3b84,	// (0x0007279a) dialer_ne_pane_g1

0x3b8c,	// (0x000727a2) dialer_ne_pane_t1_ParamLimits

0x3b8c,	// (0x000727a2) dialer_ne_pane_t1

0xa7e7,	// (0x000793fd) dialer_ne_pane_t2_ParamLimits

0xa7e7,	// (0x000793fd) dialer_ne_pane_t2

0xa804,	// (0x0007941a) dialer_ne_pane_t3_ParamLimits

0xa804,	// (0x0007941a) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0007e3de) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0007e3de) dialer_ne_pane_t

0xa828,	// (0x0007943e) dialer_ne_pane_t3_copy1_ParamLimits

0xa828,	// (0x0007943e) dialer_ne_pane_t3_copy1

0xa84c,	// (0x00079462) cell_dialer_keypad_pane_ParamLimits

0xa84c,	// (0x00079462) cell_dialer_keypad_pane

0xa863,	// (0x00079479) cell_dialer_command_1_pane_ParamLimits

0xa863,	// (0x00079479) cell_dialer_command_1_pane

0xa879,	// (0x0007948f) cell_dialer_command_2_pane_ParamLimits

0xa879,	// (0x0007948f) cell_dialer_command_2_pane

0x3b9e,	// (0x000727b4) bg_button_pane_cp02_ParamLimits

0x3b9e,	// (0x000727b4) bg_button_pane_cp02

0xa888,	// (0x0007949e) cell_dialer_keypad_pane_g1_ParamLimits

0xa888,	// (0x0007949e) cell_dialer_keypad_pane_g1

0x3b9e,	// (0x000727b4) bg_button_pane_cp03_ParamLimits

0x3b9e,	// (0x000727b4) bg_button_pane_cp03

0xa89d,	// (0x000794b3) cell_dialer_command_1_pane_g1_ParamLimits

0xa89d,	// (0x000794b3) cell_dialer_command_1_pane_g1

0x3baa,	// (0x000727c0) bg_button_pane_cp04

0xa8b1,	// (0x000794c7) cell_dialer_command_2_pane_g1

0x1f01,	// (0x00070b17) bg_button_pane_cp06

0x3bb2,	// (0x000727c8) dialer_ne_clear_pane_g1

0x887e,	// (0x00077494) navi_pane_g2

0x88ac,	// (0x000774c2) navi_pane_g3

0x0002,

0xf3f0,	// (0x0007e006) navi_pane_g

0x88d7,	// (0x000774ed) navi_pane_mv_g2

0x88fe,	// (0x00077514) navi_pane_mv_g5

0x8906,	// (0x0007751c) navi_pane_mv_t1

0x13d7,	// (0x0006ffed) main_clock2_pane

0xa8ef,	// (0x00079505) main_clock2_list_pane_ParamLimits

0xa8ef,	// (0x00079505) main_clock2_list_pane

0xa917,	// (0x0007952d) main_clock2_pane_t1_ParamLimits

0xa917,	// (0x0007952d) main_clock2_pane_t1

0xa939,	// (0x0007954f) main_clock2_pane_t2_ParamLimits

0xa939,	// (0x0007954f) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0007e3e5) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0007e3e5) main_clock2_pane_t

0xa994,	// (0x000795aa) popup_clock_analogue_window_cp03_ParamLimits

0xa994,	// (0x000795aa) popup_clock_analogue_window_cp03

0xa9b2,	// (0x000795c8) popup_clock_digital_window_cp02_ParamLimits

0xa9b2,	// (0x000795c8) popup_clock_digital_window_cp02

0xaa1f,	// (0x00079635) main_clock2_list_single_pane_ParamLimits

0xaa1f,	// (0x00079635) main_clock2_list_single_pane

0x1f01,	// (0x00070b17) list_highlight_pane_cp05

0x3bd0,	// (0x000727e6) main_clock2_list_single_pane_t1

0x73ca,	// (0x00075fe0) popup_toolbar_window_cp04_ParamLimits

0x9fa7,	// (0x00078bbd) camera2_autofocus_pane_g2_ParamLimits

0x9fa7,	// (0x00078bbd) camera2_autofocus_pane_g2

0x9fb3,	// (0x00078bc9) camera2_autofocus_pane_g3_ParamLimits

0x9fb3,	// (0x00078bc9) camera2_autofocus_pane_g3

0x9fbf,	// (0x00078bd5) camera2_autofocus_pane_g4_ParamLimits

0x9fbf,	// (0x00078bd5) camera2_autofocus_pane_g4

0x9fcb,	// (0x00078be1) camera2_autofocus_pane_g5_ParamLimits

0x9fcb,	// (0x00078be1) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0007e32e) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0007e32e) camera2_autofocus_pane_g

0x3a77,	// (0x0007268d) camera2_autofocus_pane_cp_g2

0x3a7f,	// (0x00072695) camera2_autofocus_pane_cp_g3

0x3a87,	// (0x0007269d) camera2_autofocus_pane_cp_g4

0x3a8f,	// (0x000726a5) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0007e394) camera2_autofocus_pane_cp_g

0xa7c7,	// (0x000793dd) popup_dialer_spcha_window

0xecc7,	// (0x0007d8dd) bg_popup_sub_pane_cp07

0x3bde,	// (0x000727f4) list_spcha_pane

0x3be6,	// (0x000727fc) list_single_spcha_pane_ParamLimits

0x3be6,	// (0x000727fc) list_single_spcha_pane

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp06

0x3bf7,	// (0x0007280d) list_single_spcha_pane_t1

0x2d85,	// (0x0007199b) popup_call2_audio_out_window_g4_ParamLimits

0x2d85,	// (0x0007199b) popup_call2_audio_out_window_g4

0xecc7,	// (0x0007d8dd) main_imed2_pane

0x9649,	// (0x0007825f) popup_imed_adjust2_window

0x965c,	// (0x00078272) popup_imed_trans_window_ParamLimits

0x965c,	// (0x00078272) popup_imed_trans_window

0x359c,	// (0x000721b2) popup_blid_sat_info2_window_t1

0x35aa,	// (0x000721c0) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0007e2c3) popup_blid_sat_info2_window_t

0xaac9,	// (0x000796df) aid_size_cell_colour_35

0xaae3,	// (0x000796f9) aid_size_cell_colour_112

0xaafa,	// (0x00079710) aid_size_cell_effect

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp02

0x27da,	// (0x000713f0) heading_imed_pane

0xab14,	// (0x0007972a) listscroll_imed_pane

0x3c05,	// (0x0007281b) heading_imed_pane_g1

0x3c0d,	// (0x00072823) heading_imed_pane_t1

0x3c1b,	// (0x00072831) grid_imed_colour_35_pane_ParamLimits

0x3c1b,	// (0x00072831) grid_imed_colour_35_pane

0xab20,	// (0x00079736) grid_imed_effect_pane

0x3c32,	// (0x00072848) list_imed_aspect_pane

0xab30,	// (0x00079746) scroll_pane_cp027_ParamLimits

0xab30,	// (0x00079746) scroll_pane_cp027

0xab3c,	// (0x00079752) cell_imed_effect_pane_ParamLimits

0xab3c,	// (0x00079752) cell_imed_effect_pane

0x3c3a,	// (0x00072850) cell_imed_colour_pane_ParamLimits

0x3c3a,	// (0x00072850) cell_imed_colour_pane

0x3c7c,	// (0x00072892) cell_imed_colour_pane_g1_ParamLimits

0x3c7c,	// (0x00072892) cell_imed_colour_pane_g1

0x3c8d,	// (0x000728a3) hgihlgiht_grid_pane_cp016_ParamLimits

0x3c8d,	// (0x000728a3) hgihlgiht_grid_pane_cp016

0xab54,	// (0x0007976a) cell_imed_effect_pane_g1

0xab5c,	// (0x00079772) grid_highlight_pane_cp017

0x3c9e,	// (0x000728b4) list_imed_single_pane_ParamLimits

0x3c9e,	// (0x000728b4) list_imed_single_pane

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp07

0x3cb3,	// (0x000728c9) list_imed_aspect_pane_comp1_t1

0x3356,	// (0x00071f6c) bg_tb_trans_pane_cp05

0x3cd5,	// (0x000728eb) popup_imed_adjust2_window_g1

0x3cfc,	// (0x00072912) popup_imed_adjust2_window_t1

0x3d14,	// (0x0007292a) slider_imed_adjust_pane

0x3d28,	// (0x0007293e) slider_imed_adjust_pane_g1

0x3d38,	// (0x0007294e) slider_imed_adjust_pane_g2

0x3d48,	// (0x0007295e) slider_imed_adjust_pane_g3

0x3d59,	// (0x0007296f) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0007e402) slider_imed_adjust_pane_g

0xab65,	// (0x0007977b) aid_size_cell_clipart2

0xab71,	// (0x00079787) grid_imed_clipart_pane

0x3d6a,	// (0x00072980) scroll_pane_cp031

0xab7b,	// (0x00079791) cell_imed_clipart_pane_ParamLimits

0xab7b,	// (0x00079791) cell_imed_clipart_pane

0xab9d,	// (0x000797b3) cell_imed_clipart_pane_g1

0xecc7,	// (0x0007d8dd) grid_highlight_pane_cp014

0xa8fb,	// (0x00079511) main_clock2_pane_g1_ParamLimits

0xa8fb,	// (0x00079511) main_clock2_pane_g1

0xa9ca,	// (0x000795e0) aid_call2_pane_cp10

0xa9dc,	// (0x000795f2) aid_call_pane_cp10

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g1

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g2

0xa9ee,	// (0x00079604) popup_clock_analogue_window_cp10_g3

0xa9ee,	// (0x00079604) popup_clock_analogue_window_cp10_g4

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0007e3f0) popup_clock_analogue_window_cp10_g

0xaa00,	// (0x00079616) popup_clock_analogue_window_cp10_t1

0xaa31,	// (0x00079647) clock_digital_number_pane_cp10_ParamLimits

0xaa31,	// (0x00079647) clock_digital_number_pane_cp10

0xaa49,	// (0x0007965f) clock_digital_number_pane_cp11_ParamLimits

0xaa49,	// (0x0007965f) clock_digital_number_pane_cp11

0xaa61,	// (0x00079677) clock_digital_number_pane_cp12_ParamLimits

0xaa61,	// (0x00079677) clock_digital_number_pane_cp12

0xaa79,	// (0x0007968f) clock_digital_number_pane_cp13_ParamLimits

0xaa79,	// (0x0007968f) clock_digital_number_pane_cp13

0xaa91,	// (0x000796a7) clock_digital_separator_pane_cp10_ParamLimits

0xaa91,	// (0x000796a7) clock_digital_separator_pane_cp10

0xaaa9,	// (0x000796bf) popup_clock_digital_window_cp02_t1_ParamLimits

0xaaa9,	// (0x000796bf) popup_clock_digital_window_cp02_t1

0x130a,	// (0x0006ff20) clock_digital_number_pane_cp10_g1

0x130a,	// (0x0006ff20) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0007e40b) clock_digital_number_pane_cp10_g

0x130a,	// (0x0006ff20) clock_digital_separator_pane_cp10_g1

0x130a,	// (0x0006ff20) clock_digital_separator_pane_g2_cp10

0x1ed1,	// (0x00070ae7) navi_pane_vded_g4

0x1eda,	// (0x00070af0) navi_pane_vded_g5

0x1ee3,	// (0x00070af9) navi_pane_vded_t1

0xecc7,	// (0x0007d8dd) main_vded_pane

0xaba6,	// (0x000797bc) main_vded_pane_g1

0xabb2,	// (0x000797c8) main_vded_pane_g2

0xabbc,	// (0x000797d2) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0007e410) main_vded_pane_g

0xabc6,	// (0x000797dc) main_vded_pane_t1

0xabd4,	// (0x000797ea) main_vded_pane_t2

0x0001,

0xf801,	// (0x0007e417) main_vded_pane_t

0xabe2,	// (0x000797f8) vded_slider_pane

0xabec,	// (0x00079802) vded_video_pane

0x3d72,	// (0x00072988) vded_video_pane_g1

0xabf6,	// (0x0007980c) vded_video_pane_g2

0x375e,	// (0x00072374) vded_video_pane_g3

0x0002,

0xf806,	// (0x0007e41c) vded_video_pane_g

0x3d7c,	// (0x00072992) vded_slider_pane_g1

0x34b1,	// (0x000720c7) vded_slider_pane_g2

0x3d85,	// (0x0007299b) vded_slider_pane_g3

0x3d8e,	// (0x000729a4) vded_slider_pane_g4

0x3d97,	// (0x000729ad) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0007e423) vded_slider_pane_g

0xa6cb,	// (0x000792e1) mup3_rocker_pane_ParamLimits

0xa6cb,	// (0x000792e1) mup3_rocker_pane

0xabff,	// (0x00079815) mup3_control_keys_pane_g1

0xac07,	// (0x0007981d) mup3_control_keys_pane_g2

0xac0f,	// (0x00079825) mup3_control_keys_pane_g3

0xac17,	// (0x0007982d) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0007e42e) mup3_control_keys_pane_g

0x6444,	// (0x0007505a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6444,	// (0x0007505a) popup_toolbar2_fixed_window_cp01

0xa6e5,	// (0x000792fb) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa6e5,	// (0x000792fb) popup_toolbar2_fixed_window_cp02

0x267a,	// (0x00071290) popup_call2_audio_second_window_t4_ParamLimits

0x267a,	// (0x00071290) popup_call2_audio_second_window_t4

0x2bf2,	// (0x00071808) popup_call2_audio_first_window_t6_ParamLimits

0x2bf2,	// (0x00071808) popup_call2_audio_first_window_t6

0x2e88,	// (0x00071a9e) popup_call2_audio_out_window_t6_ParamLimits

0x2e88,	// (0x00071a9e) popup_call2_audio_out_window_t6

0xecc7,	// (0x0007d8dd) main_vitu_pane

0xac27,	// (0x0007983d) aid_size_cell_itu_ParamLimits

0xac27,	// (0x0007983d) aid_size_cell_itu

0x102f,	// (0x0006fc45) bg_popup_window_pane_cp08_ParamLimits

0x102f,	// (0x0006fc45) bg_popup_window_pane_cp08

0xac35,	// (0x0007984b) field_vitu_entry_pane_ParamLimits

0xac35,	// (0x0007984b) field_vitu_entry_pane

0xac44,	// (0x0007985a) grid_vitu_function_pane_ParamLimits

0xac44,	// (0x0007985a) grid_vitu_function_pane

0xac54,	// (0x0007986a) grid_vitu_itu_pane_ParamLimits

0xac54,	// (0x0007986a) grid_vitu_itu_pane

0xac64,	// (0x0007987a) cell_vitu_itu_pane_ParamLimits

0xac64,	// (0x0007987a) cell_vitu_itu_pane

0xac79,	// (0x0007988f) cell_vitu_function_pane_ParamLimits

0xac79,	// (0x0007988f) cell_vitu_function_pane

0x333c,	// (0x00071f52) bg_popup_sub_pane_cp08_ParamLimits

0x333c,	// (0x00071f52) bg_popup_sub_pane_cp08

0xac8b,	// (0x000798a1) field_vitu_entry_pane_t1_ParamLimits

0xac8b,	// (0x000798a1) field_vitu_entry_pane_t1

0x3db8,	// (0x000729ce) field_vitu_entry_pane_t2_ParamLimits

0x3db8,	// (0x000729ce) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0007e43c) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0007e43c) field_vitu_entry_pane_t

0x3dd5,	// (0x000729eb) bg_button_pane_cp05_ParamLimits

0x3dd5,	// (0x000729eb) bg_button_pane_cp05

0xaca7,	// (0x000798bd) cell_vitu_itu_pane_g1

0xacbf,	// (0x000798d5) cell_vitu_itu_pane_t1_ParamLimits

0xacbf,	// (0x000798d5) cell_vitu_itu_pane_t1

0xacd1,	// (0x000798e7) cell_vitu_itu_pane_t2_ParamLimits

0xacd1,	// (0x000798e7) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0007e441) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0007e441) cell_vitu_itu_pane_t

0x3de3,	// (0x000729f9) bg_button_pane_cp07

0xad06,	// (0x0007991c) cell_vitu_function_pane_g1

0x670a,	// (0x00075320) main_calc_pane_g1

0x6201,	// (0x00074e17) aid_visual_content_pane

0xecc7,	// (0x0007d8dd) main_vradio_pane

0xad0f,	// (0x00079925) main_vradio_pane_g1_ParamLimits

0xad0f,	// (0x00079925) main_vradio_pane_g1

0x3ded,	// (0x00072a03) main_vradio_pane_g2_ParamLimits

0x3ded,	// (0x00072a03) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0007e448) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0007e448) main_vradio_pane_g

0xad1f,	// (0x00079935) main_vradio_pane_t1_ParamLimits

0xad1f,	// (0x00079935) main_vradio_pane_t1

0xad31,	// (0x00079947) main_vradio_pane_t2_ParamLimits

0xad31,	// (0x00079947) main_vradio_pane_t2

0x3dfa,	// (0x00072a10) main_vradio_pane_t3_ParamLimits

0x3dfa,	// (0x00072a10) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0007e44d) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0007e44d) main_vradio_pane_t

0xad43,	// (0x00079959) vradio_rocker_control_pane_ParamLimits

0xad43,	// (0x00079959) vradio_rocker_control_pane

0xad4f,	// (0x00079965) vradio_station_info_pane_ParamLimits

0xad4f,	// (0x00079965) vradio_station_info_pane

0x3e0e,	// (0x00072a24) vradio_frequency_info_pane_ParamLimits

0x3e0e,	// (0x00072a24) vradio_frequency_info_pane

0x375e,	// (0x00072374) vradio_station_info_pane_g1

0x3e1d,	// (0x00072a33) vradio_station_info_pane_t1_ParamLimits

0x3e1d,	// (0x00072a33) vradio_station_info_pane_t1

0x3e3f,	// (0x00072a55) vradio_station_info_pane_t2_ParamLimits

0x3e3f,	// (0x00072a55) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0007e454) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0007e454) vradio_station_info_pane_t

0x3e51,	// (0x00072a67) vradio_tuning_pane

0x3e59,	// (0x00072a6f) vradio_rocker_control_pane_g1

0x3e61,	// (0x00072a77) vradio_rocker_control_pane_g2

0x3e69,	// (0x00072a7f) vradio_rocker_control_pane_g3

0x3e71,	// (0x00072a87) vradio_rocker_control_pane_g4

0x3e79,	// (0x00072a8f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0007e459) vradio_rocker_control_pane_g

0xad5e,	// (0x00079974) vradio_frequency_info_pane_g1

0x3e81,	// (0x00072a97) vradio_frequency_info_pane_t1_ParamLimits

0x3e81,	// (0x00072a97) vradio_frequency_info_pane_t1

0xad68,	// (0x0007997e) vradio_tuning_pane_g1

0xad71,	// (0x00079987) vradio_tuning_pane_t1

0x624a,	// (0x00074e60) area_side_right_pane_ParamLimits

0x624a,	// (0x00074e60) area_side_right_pane

0x3303,	// (0x00071f19) status_small_pane_g1

0x330b,	// (0x00071f21) status_small_pane_g2

0x3314,	// (0x00071f2a) status_small_pane_g3

0x331d,	// (0x00071f33) status_small_pane_g4

0x0003,

0xf603,	// (0x0007e219) status_small_pane_g

0x3326,	// (0x00071f3c) status_small_pane_t1

0xecc7,	// (0x0007d8dd) main_video3_pane

0x3e95,	// (0x00072aab) cams_zoom_vslider_pane

0x3e9d,	// (0x00072ab3) image3_wide_pane_ParamLimits

0x3e9d,	// (0x00072ab3) image3_wide_pane

0x3eb7,	// (0x00072acd) image3_wide_small_pane

0x3ec3,	// (0x00072ad9) main_video3_pane_g1_ParamLimits

0x3ec3,	// (0x00072ad9) main_video3_pane_g1

0x3edf,	// (0x00072af5) main_video3_pane_g2_ParamLimits

0x3edf,	// (0x00072af5) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0007e464) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0007e464) main_video3_pane_g

0x3efb,	// (0x00072b11) main_video3_pane_t1_ParamLimits

0x3efb,	// (0x00072b11) main_video3_pane_t1

0x3f26,	// (0x00072b3c) main_video3_pane_t2_ParamLimits

0x3f26,	// (0x00072b3c) main_video3_pane_t2

0x3f51,	// (0x00072b67) main_video3_pane_t3_ParamLimits

0x3f51,	// (0x00072b67) main_video3_pane_t3

0x0002,

0xf853,	// (0x0007e469) main_video3_pane_t_ParamLimits

0xf853,	// (0x0007e469) main_video3_pane_t

0x3f7e,	// (0x00072b94) cams_zoom_vslider_pane_g1

0x3f87,	// (0x00072b9d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0007e470) cams_zoom_vslider_pane_g

0x3f8f,	// (0x00072ba5) small_slider_vertical_pane

0x375e,	// (0x00072374) small_slider_vertical_pane_g1

0x375e,	// (0x00072374) small_slider_vertical_pane_g2

0x3f97,	// (0x00072bad) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0007e475) small_slider_vertical_pane_g

0xecc7,	// (0x0007d8dd) main_hwr_training_pane

0x3fa0,	// (0x00072bb6) hwr_training_instruct_pane_ParamLimits

0x3fa0,	// (0x00072bb6) hwr_training_instruct_pane

0xad80,	// (0x00079996) hwr_training_navi_pane_ParamLimits

0xad80,	// (0x00079996) hwr_training_navi_pane

0xad9a,	// (0x000799b0) hwr_training_write_pane_ParamLimits

0xad9a,	// (0x000799b0) hwr_training_write_pane

0xecc7,	// (0x0007d8dd) bg_frame_shadow_pane

0x3fd7,	// (0x00072bed) hwr_training_write_pane_g1

0x3fdf,	// (0x00072bf5) hwr_training_write_pane_g2

0x3fe7,	// (0x00072bfd) hwr_training_write_pane_g3

0x3fef,	// (0x00072c05) hwr_training_write_pane_g4

0x3ff7,	// (0x00072c0d) hwr_training_write_pane_g5

0x3fff,	// (0x00072c15) hwr_training_write_pane_g6

0x4007,	// (0x00072c1d) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0007e47c) hwr_training_write_pane_g

0xadd2,	// (0x000799e8) hwr_training_navi_pane_g1_ParamLimits

0xadd2,	// (0x000799e8) hwr_training_navi_pane_g1

0xade4,	// (0x000799fa) hwr_training_navi_pane_g2_ParamLimits

0xade4,	// (0x000799fa) hwr_training_navi_pane_g2

0xadf6,	// (0x00079a0c) hwr_training_navi_pane_g3_ParamLimits

0xadf6,	// (0x00079a0c) hwr_training_navi_pane_g3

0xae06,	// (0x00079a1c) hwr_training_navi_pane_g4_ParamLimits

0xae06,	// (0x00079a1c) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0007e48b) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0007e48b) hwr_training_navi_pane_g

0xae20,	// (0x00079a36) hwr_training_navi_pane_t1

0xae2e,	// (0x00079a44) list_single_hwr_training_instruct_pane_ParamLimits

0xae2e,	// (0x00079a44) list_single_hwr_training_instruct_pane

0x400f,	// (0x00072c25) list_single_hwr_training_instruct_pane_t1

0x369e,	// (0x000722b4) bg_frame_shadow_pane_g1

0x401e,	// (0x00072c34) bg_frame_shadow_pane_g2

0x4026,	// (0x00072c3c) bg_frame_shadow_pane_g3

0x402e,	// (0x00072c44) bg_frame_shadow_pane_g4

0x4036,	// (0x00072c4c) bg_frame_shadow_pane_g5

0x403e,	// (0x00072c54) bg_frame_shadow_pane_g6

0x4046,	// (0x00072c5c) bg_frame_shadow_pane_g7

0x1490,	// (0x000700a6) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0007e496) bg_frame_shadow_pane_g

0xecc7,	// (0x0007d8dd) main_video_tele_dialer_pane

0xae53,	// (0x00079a69) aid_size_cell_video_keypad_ParamLimits

0xae53,	// (0x00079a69) aid_size_cell_video_keypad

0xae63,	// (0x00079a79) grid_video_dialer_keypad_pane_ParamLimits

0xae63,	// (0x00079a79) grid_video_dialer_keypad_pane

0xae97,	// (0x00079aad) video_down_pane_cp_ParamLimits

0xae97,	// (0x00079aad) video_down_pane_cp

0xaec1,	// (0x00079ad7) cell_video_dialer_keypad_pane_ParamLimits

0xaec1,	// (0x00079ad7) cell_video_dialer_keypad_pane

0x404e,	// (0x00072c64) bg_button_pane_cp08_ParamLimits

0x404e,	// (0x00072c64) bg_button_pane_cp08

0xaed6,	// (0x00079aec) cell_video_dialer_keypad_pane_g1_ParamLimits

0xaed6,	// (0x00079aec) cell_video_dialer_keypad_pane_g1

0xa6bf,	// (0x000792d5) mup3_rocker2_pane_ParamLimits

0xa6bf,	// (0x000792d5) mup3_rocker2_pane

0x375e,	// (0x00072374) mup3_rocker2_pane_g1

0x95b9,	// (0x000781cf) main_dialer2_pane

0xecc7,	// (0x0007d8dd) main_mp4_pane

0xaf15,	// (0x00079b2b) main_mp4_pane_g1_ParamLimits

0xaf15,	// (0x00079b2b) main_mp4_pane_g1

0xaf23,	// (0x00079b39) main_mp4_pane_g2_ParamLimits

0xaf23,	// (0x00079b39) main_mp4_pane_g2

0xaf31,	// (0x00079b47) main_mp4_pane_g3_ParamLimits

0xaf31,	// (0x00079b47) main_mp4_pane_g3

0xaf76,	// (0x00079b8c) main_mp4_pane_g4_ParamLimits

0xaf76,	// (0x00079b8c) main_mp4_pane_g4

0xaf9e,	// (0x00079bb4) main_mp4_pane_g5_ParamLimits

0xaf9e,	// (0x00079bb4) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0007e4b6) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0007e4b6) main_mp4_pane_g

0xafee,	// (0x00079c04) main_mp4_pane_t1_ParamLimits

0xafee,	// (0x00079c04) main_mp4_pane_t1

0xb04a,	// (0x00079c60) main_mp4_pane_t2_ParamLimits

0xb04a,	// (0x00079c60) main_mp4_pane_t2

0x405a,	// (0x00072c70) main_mp4_pane_t3_ParamLimits

0x405a,	// (0x00072c70) main_mp4_pane_t3

0xb09c,	// (0x00079cb2) main_mp4_pane_t4_ParamLimits

0xb09c,	// (0x00079cb2) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0007e4c3) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0007e4c3) main_mp4_pane_t

0xb0e0,	// (0x00079cf6) mp4_progress_pane_ParamLimits

0xb0e0,	// (0x00079cf6) mp4_progress_pane

0xb12a,	// (0x00079d40) mp4_rocker_pane_ParamLimits

0xb12a,	// (0x00079d40) mp4_rocker_pane

0x4082,	// (0x00072c98) mp4_progress_pane_t1

0x409b,	// (0x00072cb1) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0007e4cc) mp4_progress_pane_t

0x40b4,	// (0x00072cca) mup_progress_pane_cp04

0x375e,	// (0x00072374) mp4_rocker_pane_g1

0xb14a,	// (0x00079d60) aid_cell_size_keypad2_ParamLimits

0xb14a,	// (0x00079d60) aid_cell_size_keypad2

0xb15a,	// (0x00079d70) dialer2_ne_pane_ParamLimits

0xb15a,	// (0x00079d70) dialer2_ne_pane

0xb168,	// (0x00079d7e) grid_dialer2_keypad_pane_ParamLimits

0xb168,	// (0x00079d7e) grid_dialer2_keypad_pane

0xe245,	// (0x0007ce5b) bg_popup_call_pane_cp07_ParamLimits

0xe245,	// (0x0007ce5b) bg_popup_call_pane_cp07

0xb178,	// (0x00079d8e) dialer2_ne_pane_t1_ParamLimits

0xb178,	// (0x00079d8e) dialer2_ne_pane_t1

0xb19d,	// (0x00079db3) cell_dialer2_keypad_pane_ParamLimits

0xb19d,	// (0x00079db3) cell_dialer2_keypad_pane

0x40d2,	// (0x00072ce8) bg_button_pane_pane_cp04_ParamLimits

0x40d2,	// (0x00072ce8) bg_button_pane_pane_cp04

0xb1b2,	// (0x00079dc8) cell_dialer2_keypad_pane_g1_ParamLimits

0xb1b2,	// (0x00079dc8) cell_dialer2_keypad_pane_g1

0x728c,	// (0x00075ea2) aid_placing_vt_set_content_ParamLimits

0x728c,	// (0x00075ea2) aid_placing_vt_set_content

0x72b8,	// (0x00075ece) aid_placing_vt_set_title_ParamLimits

0x72b8,	// (0x00075ece) aid_placing_vt_set_title

0xecc7,	// (0x0007d8dd) main_image3_pane

0xb24c,	// (0x00079e62) area_side_right_pane_cp01_ParamLimits

0xb24c,	// (0x00079e62) area_side_right_pane_cp01

0x0237,	// (0x0006ee4d) main_image3_pane_g1_ParamLimits

0x0237,	// (0x0006ee4d) main_image3_pane_g1

0xb279,	// (0x00079e8f) main_image3_pane_g2_ParamLimits

0xb279,	// (0x00079e8f) main_image3_pane_g2

0xb292,	// (0x00079ea8) main_image3_pane_g3_ParamLimits

0xb292,	// (0x00079ea8) main_image3_pane_g3

0xb2ab,	// (0x00079ec1) main_image3_pane_g4_ParamLimits

0xb2ab,	// (0x00079ec1) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0007e4db) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0007e4db) main_image3_pane_g

0xb2c4,	// (0x00079eda) main_image3_pane_t1_ParamLimits

0xb2c4,	// (0x00079eda) main_image3_pane_t1

0xb2e9,	// (0x00079eff) main_image3_pane_t2_ParamLimits

0xb2e9,	// (0x00079eff) main_image3_pane_t2

0xb308,	// (0x00079f1e) main_image3_pane_t3_ParamLimits

0xb308,	// (0x00079f1e) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0007e4e4) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0007e4e4) main_image3_pane_t

0x102f,	// (0x0006fc45) grid_sctrl_middle_pane_cp01_ParamLimits

0x102f,	// (0x0006fc45) grid_sctrl_middle_pane_cp01

0xb369,	// (0x00079f7f) cell_sctrl_middle_pane_cp01_ParamLimits

0xb369,	// (0x00079f7f) cell_sctrl_middle_pane_cp01

0xb37a,	// (0x00079f90) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb37a,	// (0x00079f90) cell_sctrl_middle_pane_cp01_g1

0xecc7,	// (0x0007d8dd) main_call4_pane

0xb387,	// (0x00079f9d) aid_size_button_call4_ParamLimits

0xb387,	// (0x00079f9d) aid_size_button_call4

0xb3b7,	// (0x00079fcd) call4_windows_pane_ParamLimits

0xb3b7,	// (0x00079fcd) call4_windows_pane

0xb3d1,	// (0x00079fe7) grid_call4_button_pane_ParamLimits

0xb3d1,	// (0x00079fe7) grid_call4_button_pane

0x40de,	// (0x00072cf4) call4_windows_conf_pane

0x40f5,	// (0x00072d0b) popup_call4_audio_first_window_ParamLimits

0x40f5,	// (0x00072d0b) popup_call4_audio_first_window

0x4141,	// (0x00072d57) popup_call4_audio_second_window_ParamLimits

0x4141,	// (0x00072d57) popup_call4_audio_second_window

0x4155,	// (0x00072d6b) popup_call4_audio_wait_window_ParamLimits

0x4155,	// (0x00072d6b) popup_call4_audio_wait_window

0xb3f5,	// (0x0007a00b) cell_call4_button_pane_ParamLimits

0xb3f5,	// (0x0007a00b) cell_call4_button_pane

0xb41a,	// (0x0007a030) bg_button_pane_cp09_ParamLimits

0xb41a,	// (0x0007a030) bg_button_pane_cp09

0xb426,	// (0x0007a03c) cell_call4_button_pane_g1_ParamLimits

0xb426,	// (0x0007a03c) cell_call4_button_pane_g1

0xb433,	// (0x0007a049) cell_call4_button_pane_t1_ParamLimits

0xb433,	// (0x0007a049) cell_call4_button_pane_t1

0x419d,	// (0x00072db3) popup_call4_audio_conf_window_ParamLimits

0x419d,	// (0x00072db3) popup_call4_audio_conf_window

0xa6f2,	// (0x00079308) mup3_progress_pane_t1_ParamLimits

0xa711,	// (0x00079327) mup3_progress_pane_t2_ParamLimits

0x3aad,	// (0x000726c3) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0007e3bd) mup3_progress_pane_t_ParamLimits

0x3aca,	// (0x000726e0) mup_progress_pane_cp03_ParamLimits

0xac1f,	// (0x00079835) mup3_control_keys_pane_g4_copy1

0xb10e,	// (0x00079d24) mp4_rocker2_pane_ParamLimits

0xb10e,	// (0x00079d24) mp4_rocker2_pane

0x41b9,	// (0x00072dcf) mp4_rocker2_pane_g1

0x41b1,	// (0x00072dc7) mp4_rocker2_pane_g2

0xb445,	// (0x0007a05b) mp4_rocker2_pane_g3

0xb44d,	// (0x0007a063) mp4_rocker2_pane_g4

0xb455,	// (0x0007a06b) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0007e4ed) mp4_rocker2_pane_g

0xecc7,	// (0x0007d8dd) main_camera4_pane

0xecc7,	// (0x0007d8dd) main_video4_pane

0xae73,	// (0x00079a89) main_video_tele_dialer_pane_t1_ParamLimits

0xae73,	// (0x00079a89) main_video_tele_dialer_pane_t1

0xae85,	// (0x00079a9b) main_video_tele_dialer_pane_t2_ParamLimits

0xae85,	// (0x00079a9b) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0007e4a7) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0007e4a7) main_video_tele_dialer_pane_t

0xb475,	// (0x0007a08b) cam4_autofocus_pane_ParamLimits

0xb475,	// (0x0007a08b) cam4_autofocus_pane

0xb48f,	// (0x0007a0a5) cam4_image_uncrop_pane_ParamLimits

0xb48f,	// (0x0007a0a5) cam4_image_uncrop_pane

0xb4a6,	// (0x0007a0bc) cam4_indicators_pane_ParamLimits

0xb4a6,	// (0x0007a0bc) cam4_indicators_pane

0xb4c2,	// (0x0007a0d8) main_camera4_pane_g1_ParamLimits

0xb4c2,	// (0x0007a0d8) main_camera4_pane_g1

0xb4ce,	// (0x0007a0e4) main_camera4_pane_g2_ParamLimits

0xb4ce,	// (0x0007a0e4) main_camera4_pane_g2

0xb4ce,	// (0x0007a0e4) main_camera4_pane_g3_ParamLimits

0xb4ce,	// (0x0007a0e4) main_camera4_pane_g3

0xb4da,	// (0x0007a0f0) main_camera4_pane_g4_ParamLimits

0xb4da,	// (0x0007a0f0) main_camera4_pane_g4

0xb4e6,	// (0x0007a0fc) main_camera4_pane_g5_ParamLimits

0xb4e6,	// (0x0007a0fc) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0007e4f8) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0007e4f8) main_camera4_pane_g

0xb500,	// (0x0007a116) main_camera4_pane_t1_ParamLimits

0xb500,	// (0x0007a116) main_camera4_pane_t1

0x39ca,	// (0x000725e0) bg_tb_trans_pane_cp06

0xb550,	// (0x0007a166) cam4_indicators_pane_g1

0xb561,	// (0x0007a177) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0007e513) cam4_indicators_pane_g

0xb57f,	// (0x0007a195) cam4_indicators_pane_t1

0xb5a9,	// (0x0007a1bf) main_video4_pane_g1_ParamLimits

0xb5a9,	// (0x0007a1bf) main_video4_pane_g1

0xb5b5,	// (0x0007a1cb) main_video4_pane_g2_ParamLimits

0xb5b5,	// (0x0007a1cb) main_video4_pane_g2

0xb5c1,	// (0x0007a1d7) main_video4_pane_g3_ParamLimits

0xb5c1,	// (0x0007a1d7) main_video4_pane_g3

0xb5cd,	// (0x0007a1e3) main_video4_pane_g4_ParamLimits

0xb5cd,	// (0x0007a1e3) main_video4_pane_g4

0x0004,

0xf904,	// (0x0007e51a) main_video4_pane_g_ParamLimits

0xf904,	// (0x0007e51a) main_video4_pane_g

0xb5ed,	// (0x0007a203) vid4_indicators_pane_ParamLimits

0xb5ed,	// (0x0007a203) vid4_indicators_pane

0xb60c,	// (0x0007a222) video4_image_uncrop_cif_pane_ParamLimits

0xb60c,	// (0x0007a222) video4_image_uncrop_cif_pane

0xb61b,	// (0x0007a231) video4_image_uncrop_nhd_pane_ParamLimits

0xb61b,	// (0x0007a231) video4_image_uncrop_nhd_pane

0xb48f,	// (0x0007a0a5) video4_image_uncrop_vga_pane_ParamLimits

0xb48f,	// (0x0007a0a5) video4_image_uncrop_vga_pane

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp07

0xb632,	// (0x0007a248) vid4_indicators_pane_g1

0xb646,	// (0x0007a25c) vid4_indicators_pane_g2

0xb65a,	// (0x0007a270) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0007e525) vid4_indicators_pane_g

0xb689,	// (0x0007a29f) vid4_indicators_pane_t1

0xb6a0,	// (0x0007a2b6) cam4_autofocus_pane_g1

0xb6a8,	// (0x0007a2be) cam4_autofocus_pane_g2

0xb6b0,	// (0x0007a2c6) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0007e530) cam4_autofocus_pane_g

0xb6b8,	// (0x0007a2ce) cam4_autofocus_pane_g3_copy1

0xaea5,	// (0x00079abb) video_down_pane_cp_t1

0xaeb3,	// (0x00079ac9) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0007e4ac) video_down_pane_cp_t

0x102f,	// (0x0006fc45) popup_vitu2_window_ParamLimits

0x102f,	// (0x0006fc45) popup_vitu2_window

0xb6c0,	// (0x0007a2d6) aid_size_cell2_itu2_ParamLimits

0xb6c0,	// (0x0007a2d6) aid_size_cell2_itu2

0xb6e2,	// (0x0007a2f8) aid_size_cell_itu2_ParamLimits

0xb6e2,	// (0x0007a2f8) aid_size_cell_itu2

0xe245,	// (0x0007ce5b) bg_popup_window_pane_cp09_ParamLimits

0xe245,	// (0x0007ce5b) bg_popup_window_pane_cp09

0xb726,	// (0x0007a33c) field_vitu2_entry_pane_ParamLimits

0xb726,	// (0x0007a33c) field_vitu2_entry_pane

0xb746,	// (0x0007a35c) grid_vitu2_function_pane_ParamLimits

0xb746,	// (0x0007a35c) grid_vitu2_function_pane

0xb78a,	// (0x0007a3a0) grid_vitu2_itu_pane_ParamLimits

0xb78a,	// (0x0007a3a0) grid_vitu2_itu_pane

0xb802,	// (0x0007a418) cell_vitu2_itu_pane_ParamLimits

0xb802,	// (0x0007a418) cell_vitu2_itu_pane

0xb817,	// (0x0007a42d) cell_vitu2_function_pane_ParamLimits

0xb817,	// (0x0007a42d) cell_vitu2_function_pane

0xe253,	// (0x0007ce69) bg_popup_call_pane_cp08_ParamLimits

0xe253,	// (0x0007ce69) bg_popup_call_pane_cp08

0xe26c,	// (0x0007ce82) field_vitu2_entry_pane_g1

0xe278,	// (0x0007ce8e) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0007e537) field_vitu2_entry_pane_g

0x5376,	// (0x00073f8c) field_vitu2_entry_pane_t1_ParamLimits

0x5376,	// (0x00073f8c) field_vitu2_entry_pane_t1

0x53a5,	// (0x00073fbb) field_vitu2_entry_pane_t2_ParamLimits

0x53a5,	// (0x00073fbb) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0007e53e) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0007e53e) field_vitu2_entry_pane_t

0xb856,	// (0x0007a46c) bg_button_pane_cp010_ParamLimits

0xb856,	// (0x0007a46c) bg_button_pane_cp010

0xb864,	// (0x0007a47a) cell_vitu2_itu_pane_g1

0xb882,	// (0x0007a498) cell_vitu2_itu_pane_t1_ParamLimits

0xb882,	// (0x0007a498) cell_vitu2_itu_pane_t1

0x53c2,	// (0x00073fd8) cell_vitu2_itu_pane_t2_ParamLimits

0x53c2,	// (0x00073fd8) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0007e548) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0007e548) cell_vitu2_itu_pane_t

0x333c,	// (0x00071f52) bg_button_pane_cp011

0xb8d4,	// (0x0007a4ea) cell_vitu2_function_pane_g1

0xecc7,	// (0x0007d8dd) main_myfav_hc_pane

0xb34a,	// (0x00079f60) popup_image3_note_pane_ParamLimits

0xb34a,	// (0x00079f60) popup_image3_note_pane

0xb358,	// (0x00079f6e) popup_image3_tool_bar_pane_ParamLimits

0xb358,	// (0x00079f6e) popup_image3_tool_bar_pane

0x5430,	// (0x00074046) cell_vitu2_itu_pane_t3_ParamLimits

0x5430,	// (0x00074046) cell_vitu2_itu_pane_t3

0xecc7,	// (0x0007d8dd) bg_popup_trans_pane

0xe29a,	// (0x0007ceb0) grid_image3_tool_bar_pane

0xe2a4,	// (0x0007ceba) bg_popup_trans_pane_g1

0x17f8,	// (0x0007040e) bg_popup_trans_pane_g2

0xe2ac,	// (0x0007cec2) bg_popup_trans_pane_g3

0xe2b4,	// (0x0007ceca) bg_popup_trans_pane_g4

0xe2bc,	// (0x0007ced2) bg_popup_trans_pane_g5

0xe2c4,	// (0x0007ceda) bg_popup_trans_pane_g6

0xe2cc,	// (0x0007cee2) bg_popup_trans_pane_g7

0xe2d4,	// (0x0007ceea) bg_popup_trans_pane_g8

0x17d8,	// (0x000703ee) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0007e54f) bg_popup_trans_pane_g

0xe2dc,	// (0x0007cef2) cell_image3_tool_bar_pane_ParamLimits

0xe2dc,	// (0x0007cef2) cell_image3_tool_bar_pane

0x375e,	// (0x00072374) cell_image3_tool_bar_pane_g1

0xecc7,	// (0x0007d8dd) bg_popup_trans_pane_cp1

0xe2f0,	// (0x0007cf06) popup_image3_note_pane_t1

0xe2fe,	// (0x0007cf14) popup_image3_note_pane_t2

0xe30c,	// (0x0007cf22) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0007e562) popup_image3_note_pane_t

0xe31a,	// (0x0007cf30) popup_image3_note_pane_t3_copy1

0xb8e8,	// (0x0007a4fe) bg_myfav_hc_instruction_pane_ParamLimits

0xb8e8,	// (0x0007a4fe) bg_myfav_hc_instruction_pane

0xb900,	// (0x0007a516) cell_myfav_contact_pane_ParamLimits

0xb900,	// (0x0007a516) cell_myfav_contact_pane

0xb91a,	// (0x0007a530) cell_myfav_contact_pane_cp1_ParamLimits

0xb91a,	// (0x0007a530) cell_myfav_contact_pane_cp1

0xb932,	// (0x0007a548) cell_myfav_contact_pane_cp2_ParamLimits

0xb932,	// (0x0007a548) cell_myfav_contact_pane_cp2

0xb94a,	// (0x0007a560) cell_myfav_contact_pane_cp3_ParamLimits

0xb94a,	// (0x0007a560) cell_myfav_contact_pane_cp3

0xb961,	// (0x0007a577) cell_myfav_contact_pane_cp4_ParamLimits

0xb961,	// (0x0007a577) cell_myfav_contact_pane_cp4

0xb977,	// (0x0007a58d) cell_myfav_contact_pane_cp5_ParamLimits

0xb977,	// (0x0007a58d) cell_myfav_contact_pane_cp5

0xb98b,	// (0x0007a5a1) cell_myfav_contact_pane_cp6_ParamLimits

0xb98b,	// (0x0007a5a1) cell_myfav_contact_pane_cp6

0xb99f,	// (0x0007a5b5) cell_myfav_contact_pane_cp7_ParamLimits

0xb99f,	// (0x0007a5b5) cell_myfav_contact_pane_cp7

0xe328,	// (0x0007cf3e) listscroll_gen_pane_cp05

0xb9b7,	// (0x0007a5cd) main_myfav_hc_pane_g1_ParamLimits

0xb9b7,	// (0x0007a5cd) main_myfav_hc_pane_g1

0xb9cd,	// (0x0007a5e3) main_myfav_hc_pane_g2_ParamLimits

0xb9cd,	// (0x0007a5e3) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0007e569) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0007e569) main_myfav_hc_pane_g

0xb9fb,	// (0x0007a611) main_myfav_hc_pane_t1_ParamLimits

0xb9fb,	// (0x0007a611) main_myfav_hc_pane_t1

0xe331,	// (0x0007cf47) main_myfav_hc_pane_t2_ParamLimits

0xe331,	// (0x0007cf47) main_myfav_hc_pane_t2

0xe343,	// (0x0007cf59) main_myfav_hc_pane_t3_ParamLimits

0xe343,	// (0x0007cf59) main_myfav_hc_pane_t3

0xba12,	// (0x0007a628) main_myfav_hc_pane_t4_ParamLimits

0xba12,	// (0x0007a628) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0007e570) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0007e570) main_myfav_hc_pane_t

0x375e,	// (0x00072374) bg_myfav_hc_instruction_pane_g1

0xe355,	// (0x0007cf6b) cell_myfav_contact_pane_g1_ParamLimits

0xe355,	// (0x0007cf6b) cell_myfav_contact_pane_g1

0xe355,	// (0x0007cf6b) cell_myfav_contact_pane_g2_ParamLimits

0xe355,	// (0x0007cf6b) cell_myfav_contact_pane_g2

0xe361,	// (0x0007cf77) cell_myfav_contact_pane_g3_ParamLimits

0xe361,	// (0x0007cf77) cell_myfav_contact_pane_g3

0x3a97,	// (0x000726ad) cell_myfav_contact_pane_g4_ParamLimits

0x3a97,	// (0x000726ad) cell_myfav_contact_pane_g4

0xe36e,	// (0x0007cf84) cell_myfav_contact_pane_g5_ParamLimits

0xe36e,	// (0x0007cf84) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0007e57b) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0007e57b) cell_myfav_contact_pane_g

0xb9e3,	// (0x0007a5f9) main_myfav_hc_pane_g3_ParamLimits

0xb9e3,	// (0x0007a5f9) main_myfav_hc_pane_g3

0x637f,	// (0x00074f95) popup_adpt_find_window

0xba3c,	// (0x0007a652) afind_page_pane_ParamLimits

0xba3c,	// (0x0007a652) afind_page_pane

0xba49,	// (0x0007a65f) aid_size_cell_afind_ParamLimits

0xba49,	// (0x0007a65f) aid_size_cell_afind

0xba63,	// (0x0007a679) bg_popup_sub_pane_cp09_ParamLimits

0xba63,	// (0x0007a679) bg_popup_sub_pane_cp09

0xba70,	// (0x0007a686) find_pane_cp01_ParamLimits

0xba70,	// (0x0007a686) find_pane_cp01

0xe37a,	// (0x0007cf90) grid_afind_control_pane_ParamLimits

0xe37a,	// (0x0007cf90) grid_afind_control_pane

0xba7d,	// (0x0007a693) grid_afind_pane_ParamLimits

0xba7d,	// (0x0007a693) grid_afind_pane

0xba99,	// (0x0007a6af) cell_afind_pane_ParamLimits

0xba99,	// (0x0007a6af) cell_afind_pane

0x375e,	// (0x00072374) afind_page_pane_g1

0xbae1,	// (0x0007a6f7) afind_page_pane_g2

0xbaea,	// (0x0007a700) afind_page_pane_g3

0x0002,

0xf970,	// (0x0007e586) afind_page_pane_g

0xbaf3,	// (0x0007a709) afind_page_pane_t1

0xe38e,	// (0x0007cfa4) cell_afind_grid_control_pane_ParamLimits

0xe38e,	// (0x0007cfa4) cell_afind_grid_control_pane

0x40d2,	// (0x00072ce8) bg_button_pane_cp69_ParamLimits

0x40d2,	// (0x00072ce8) bg_button_pane_cp69

0xbb13,	// (0x0007a729) cell_afind_pane_g1_ParamLimits

0xbb13,	// (0x0007a729) cell_afind_pane_g1

0xbb20,	// (0x0007a736) cell_afind_pane_t1_ParamLimits

0xbb20,	// (0x0007a736) cell_afind_pane_t1

0x15f1,	// (0x00070207) bg_button_pane_cp72

0xe39d,	// (0x0007cfb3) cell_afind_grid_control_pane_g1

0x9137,	// (0x00077d4d) aid_image_placing_area_ParamLimits

0x9137,	// (0x00077d4d) aid_image_placing_area

0x3da0,	// (0x000729b6) field_vitu_entry_pane_g1_ParamLimits

0x3da0,	// (0x000729b6) field_vitu_entry_pane_g1

0x3dac,	// (0x000729c2) field_vitu_entry_pane_g2_ParamLimits

0x3dac,	// (0x000729c2) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0007e437) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0007e437) field_vitu_entry_pane_g

0xaca7,	// (0x000798bd) cell_vitu_itu_pane_g1_ParamLimits

0xace9,	// (0x000798ff) cell_vitu_itu_pane_t3_ParamLimits

0xace9,	// (0x000798ff) cell_vitu_itu_pane_t3

0x4082,	// (0x00072c98) mp4_progress_pane_t1_ParamLimits

0x409b,	// (0x00072cb1) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0007e4cc) mp4_progress_pane_t_ParamLimits

0x40b4,	// (0x00072cca) mup_progress_pane_cp04_ParamLimits

0xba26,	// (0x0007a63c) main_myfav_hc_pane_t5_ParamLimits

0xba26,	// (0x0007a63c) main_myfav_hc_pane_t5

0x505d,	// (0x00073c73) aid_zoom_text_primary

0x637f,	// (0x00074f95) popup_adpt_find_window_ParamLimits

0x333c,	// (0x00071f52) main_cam_set_pane

0xb4b4,	// (0x0007a0ca) cam4_zoom_pane_ParamLimits

0xb4b4,	// (0x0007a0ca) cam4_zoom_pane

0xbb32,	// (0x0007a748) main_cam_set_pane_g1_ParamLimits

0xbb32,	// (0x0007a748) main_cam_set_pane_g1

0xbb40,	// (0x0007a756) main_cam_set_pane_g2_ParamLimits

0xbb40,	// (0x0007a756) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0007e58d) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0007e58d) main_cam_set_pane_g

0xbb4c,	// (0x0007a762) main_cam_set_pane_t1_ParamLimits

0xbb4c,	// (0x0007a762) main_cam_set_pane_t1

0xbb68,	// (0x0007a77e) main_cset_listscroll_pane_ParamLimits

0xbb68,	// (0x0007a77e) main_cset_listscroll_pane

0xbb93,	// (0x0007a7a9) main_cset_slider_pane_ParamLimits

0xbb93,	// (0x0007a7a9) main_cset_slider_pane

0xe3ae,	// (0x0007cfc4) main_cset_list_pane_ParamLimits

0xe3ae,	// (0x0007cfc4) main_cset_list_pane

0xe3be,	// (0x0007cfd4) scroll_pane_cp028

0xbbb2,	// (0x0007a7c8) aid_area_touch_slider

0xbbce,	// (0x0007a7e4) cset_slider_pane

0xbbf8,	// (0x0007a80e) main_cset_slider_pane_g1

0xbc0d,	// (0x0007a823) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0007e592) main_cset_slider_pane_g

0xe3f7,	// (0x0007d00d) main_cset_slider_pane_t1

0xbccf,	// (0x0007a8e5) main_cset_slider_pane_t2

0xbce9,	// (0x0007a8ff) main_cset_slider_pane_t3

0xbd03,	// (0x0007a919) main_cset_slider_pane_t4

0xbd1d,	// (0x0007a933) main_cset_slider_pane_t5

0xbd3b,	// (0x0007a951) main_cset_slider_pane_t6

0xbd52,	// (0x0007a968) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0007e5b7) main_cset_slider_pane_t

0xbe5e,	// (0x0007aa74) cset_list_set_pane_ParamLimits

0xbe5e,	// (0x0007aa74) cset_list_set_pane

0xbe74,	// (0x0007aa8a) aid_position_infowindow_above

0xbe7c,	// (0x0007aa92) aid_position_infowindow_below

0xbe84,	// (0x0007aa9a) cset_list_set_pane_g1_ParamLimits

0xbe84,	// (0x0007aa9a) cset_list_set_pane_g1

0x547d,	// (0x00074093) cset_list_set_pane_g3_ParamLimits

0x547d,	// (0x00074093) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0007e5d6) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0007e5d6) cset_list_set_pane_g

0x548c,	// (0x000740a2) cset_list_set_pane_t1_ParamLimits

0x548c,	// (0x000740a2) cset_list_set_pane_t1

0x333c,	// (0x00071f52) list_highlight_pane_cp021_ParamLimits

0x333c,	// (0x00071f52) list_highlight_pane_cp021

0x2045,	// (0x00070c5b) cset_slider_pane_g1

0x2057,	// (0x00070c6d) cset_slider_pane_g2

0x204e,	// (0x00070c64) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0007e5db) cset_slider_pane_g

0xbe90,	// (0x0007aaa6) aid_area_touch_cam4_zoom

0xbe98,	// (0x0007aaae) cam4_zoom_cont_pane

0xbea0,	// (0x0007aab6) cam4_zoom_pane_g1

0xbea8,	// (0x0007aabe) cam4_zoom_pane_g2

0xbeb0,	// (0x0007aac6) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0007e5e2) cam4_zoom_pane_g

0xe497,	// (0x0007d0ad) cam4_zoom_cont_pane_g1

0xe4a0,	// (0x0007d0b6) cam4_zoom_cont_pane_g2

0xe4a9,	// (0x0007d0bf) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0007e5e9) cam4_zoom_cont_pane_g

0xb3a1,	// (0x00079fb7) call4_image_pane_ParamLimits

0xb3a1,	// (0x00079fb7) call4_image_pane

0x40de,	// (0x00072cf4) call4_windows_conf_pane_ParamLimits

0x411f,	// (0x00072d35) popup_call4_audio_in_window_ParamLimits

0x411f,	// (0x00072d35) popup_call4_audio_in_window

0xecc7,	// (0x0007d8dd) bg_popup_call2_act_pane_cp02

0x4195,	// (0x00072dab) call4_list_conf_pane

0x375e,	// (0x00072374) call4_image_pane_g1

0x375e,	// (0x00072374) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0007e2fd) call4_image_pane_g

0xe4b2,	// (0x0007d0c8) list_single_graphic_popup_conf4_pane_ParamLimits

0xe4b2,	// (0x0007d0c8) list_single_graphic_popup_conf4_pane

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp022

0xe4c5,	// (0x0007d0db) list_single_graphic_popup_conf4_pane_g1

0x1d06,	// (0x0007091c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0007e5f0) list_single_graphic_popup_conf4_pane_g

0xe4cd,	// (0x0007d0e3) list_single_graphic_popup_conf4_pane_t1

0x741c,	// (0x00076032) popup_vtel_slider_window_ParamLimits

0x741c,	// (0x00076032) popup_vtel_slider_window

0x40c0,	// (0x00072cd6) dialer2_ne_pane_t2_ParamLimits

0x40c0,	// (0x00072cd6) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0007e4d1) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0007e4d1) dialer2_ne_pane_t

0x333c,	// (0x00071f52) bg_popup_sub_pane_cp010_ParamLimits

0x333c,	// (0x00071f52) bg_popup_sub_pane_cp010

0xbeb8,	// (0x0007aace) popup_vtel_slider_window_g1_ParamLimits

0xbeb8,	// (0x0007aace) popup_vtel_slider_window_g1

0xbec4,	// (0x0007aada) popup_vtel_slider_window_g2_ParamLimits

0xbec4,	// (0x0007aada) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0007e5f5) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0007e5f5) popup_vtel_slider_window_g

0xbf0c,	// (0x0007ab22) vtel_slider_pane_ParamLimits

0xbf0c,	// (0x0007ab22) vtel_slider_pane

0xbf1b,	// (0x0007ab31) vtel_slider_pane_g1_ParamLimits

0xbf1b,	// (0x0007ab31) vtel_slider_pane_g1

0xbf28,	// (0x0007ab3e) vtel_slider_pane_g2_ParamLimits

0xbf28,	// (0x0007ab3e) vtel_slider_pane_g2

0xbf35,	// (0x0007ab4b) vtel_slider_pane_g3_ParamLimits

0xbf35,	// (0x0007ab4b) vtel_slider_pane_g3

0xbf1b,	// (0x0007ab31) vtel_slider_pane_g4_ParamLimits

0xbf1b,	// (0x0007ab31) vtel_slider_pane_g4

0xbf42,	// (0x0007ab58) vtel_slider_pane_g5_ParamLimits

0xbf42,	// (0x0007ab58) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0007e5fe) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0007e5fe) vtel_slider_pane_g

0xecc7,	// (0x0007d8dd) main_gallery2_pane

0xb708,	// (0x0007a31e) aid_size_row_itut2_dropdow_list_ParamLimits

0xb708,	// (0x0007a31e) aid_size_row_itut2_dropdow_list

0xb768,	// (0x0007a37e) grid_vitu2_function_top_pane_ParamLimits

0xb768,	// (0x0007a37e) grid_vitu2_function_top_pane

0xb7be,	// (0x0007a3d4) popup_vitu2_dropdown_list_window_ParamLimits

0xb7be,	// (0x0007a3d4) popup_vitu2_dropdown_list_window

0xb7de,	// (0x0007a3f4) popup_vitu2_match_list_window

0xbf4f,	// (0x0007ab65) cell_vitu2_function_top_pane_ParamLimits

0xbf4f,	// (0x0007ab65) cell_vitu2_function_top_pane

0xbf6f,	// (0x0007ab85) cell_vitu2_function_top_pane_cp01_ParamLimits

0xbf6f,	// (0x0007ab85) cell_vitu2_function_top_pane_cp01

0xbf8d,	// (0x0007aba3) cell_vitu2_function_top_wide_pane_ParamLimits

0xbf8d,	// (0x0007aba3) cell_vitu2_function_top_wide_pane

0x333c,	// (0x00071f52) bg_button_pane_cp012

0xbfab,	// (0x0007abc1) cell_vitu2_function_top_pane_g1

0xbfba,	// (0x0007abd0) bg_button_pane_cp013_ParamLimits

0xbfba,	// (0x0007abd0) bg_button_pane_cp013

0xbfd6,	// (0x0007abec) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xbfd6,	// (0x0007abec) cell_vitu2_function_top_wide_pane_g1

0x102f,	// (0x0006fc45) bg_popup_sub_pane_cp20

0xbfee,	// (0x0007ac04) list_vitu2_match_list_pane

0xe2a4,	// (0x0007ceba) bg_popup_sub_pane_cp20_g1

0xe2ac,	// (0x0007cec2) bg_popup_sub_pane_cp20_g2

0x17f8,	// (0x0007040e) bg_popup_sub_pane_cp20_g3

0xe2b4,	// (0x0007ceca) bg_popup_sub_pane_cp20_g4

0x17d8,	// (0x000703ee) bg_popup_sub_pane_cp20_g5

0xe4e3,	// (0x0007d0f9) bg_popup_sub_pane_cp20_g6

0xe2c4,	// (0x0007ceda) bg_popup_sub_pane_cp20_g7

0xe2cc,	// (0x0007cee2) bg_popup_sub_pane_cp20_g8

0xe2d4,	// (0x0007ceea) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0007e609) bg_popup_sub_pane_cp20_g

0xc006,	// (0x0007ac1c) list_vitu2_match_list_item_pane_ParamLimits

0xc006,	// (0x0007ac1c) list_vitu2_match_list_item_pane

0xc018,	// (0x0007ac2e) list_vitu2_match_list_item_pane_t1

0xecc7,	// (0x0007d8dd) bg_popup_sub_pane_cp21

0x1c2e,	// (0x00070844) grid_vitu2_dropdown_list_pane

0xc032,	// (0x0007ac48) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc032,	// (0x0007ac48) cell_vitu2_dropdown_list_char_pane

0xc053,	// (0x0007ac69) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc053,	// (0x0007ac69) cell_vitu2_dropdown_list_ctrl_pane

0xe4eb,	// (0x0007d101) cell_vitu2_dropdown_list_char_pane_g1

0xe4f4,	// (0x0007d10a) cell_vitu2_dropdown_list_char_pane_g2

0xe4fd,	// (0x0007d113) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0007e626) cell_vitu2_dropdown_list_char_pane_g

0xc07f,	// (0x0007ac95) cell_vitu2_dropdown_list_char_pane_t1

0xc08d,	// (0x0007aca3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc08d,	// (0x0007aca3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc09d,	// (0x0007acb3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc09d,	// (0x0007acb3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc0ae,	// (0x0007acc4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc0ae,	// (0x0007acc4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc0be,	// (0x0007acd4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc0be,	// (0x0007acd4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x39ca,	// (0x000725e0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x39ca,	// (0x000725e0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0007e62d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0007e62d) cell_vitu2_dropdown_list_ctrl_pane_g

0xc0da,	// (0x0007acf0) aid_size_cell_gallery2_ParamLimits

0xc0da,	// (0x0007acf0) aid_size_cell_gallery2

0xc0e8,	// (0x0007acfe) grid_gallery2_pane_ParamLimits

0xc0e8,	// (0x0007acfe) grid_gallery2_pane

0xc0f7,	// (0x0007ad0d) scroll_pane_cp029_ParamLimits

0xc0f7,	// (0x0007ad0d) scroll_pane_cp029

0xc103,	// (0x0007ad19) cell_gallery2_pane_ParamLimits

0xc103,	// (0x0007ad19) cell_gallery2_pane

0xe506,	// (0x0007d11c) cell_gallery2_pane_g2

0x0a45,	// (0x0006f65b) cell_gallery2_pane_g3

0xe510,	// (0x0007d126) cell_gallery2_pane_g4

0xe518,	// (0x0007d12e) cell_gallery2_pane_g5

0x1f01,	// (0x00070b17) grid_highlight_pane_cp10

0xb7de,	// (0x0007a3f4) popup_vitu2_match_list_window_ParamLimits

0xb7f2,	// (0x0007a408) popup_vitu2_query_window_ParamLimits

0xb7f2,	// (0x0007a408) popup_vitu2_query_window

0xecc7,	// (0x0007d8dd) bg_vitu2_candi_button_pane

0xe4eb,	// (0x0007d101) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe4f4,	// (0x0007d10a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe4fd,	// (0x0007d113) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x54ea,	// (0x00074100) bg_button_pane_cp015

0xc131,	// (0x0007ad47) bg_button_pane_cp016

0xc144,	// (0x0007ad5a) bg_button_pane_cp017

0x3356,	// (0x00071f6c) bg_popup_sub_pane_cp22

0xe520,	// (0x0007d136) popup_vitu2_query_window_g1

0x551d,	// (0x00074133) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0007e638) popup_vitu2_query_window_g

0x553a,	// (0x00074150) popup_vitu2_query_window_t1_ParamLimits

0x553a,	// (0x00074150) popup_vitu2_query_window_t1

0x556d,	// (0x00074183) popup_vitu2_query_window_t2_ParamLimits

0x556d,	// (0x00074183) popup_vitu2_query_window_t2

0x557f,	// (0x00074195) popup_vitu2_query_window_t3_ParamLimits

0x557f,	// (0x00074195) popup_vitu2_query_window_t3

0xc168,	// (0x0007ad7e) popup_vitu2_query_window_t4_ParamLimits

0xc168,	// (0x0007ad7e) popup_vitu2_query_window_t4

0xc189,	// (0x0007ad9f) popup_vitu2_query_window_t5_ParamLimits

0xc189,	// (0x0007ad9f) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0007e63f) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0007e63f) popup_vitu2_query_window_t

0xe3a6,	// (0x0007cfbc) main_cset_text_pane

0xbbb2,	// (0x0007a7c8) aid_area_touch_slider_ParamLimits

0xbbce,	// (0x0007a7e4) cset_slider_pane_ParamLimits

0xbbf8,	// (0x0007a80e) main_cset_slider_pane_g1_ParamLimits

0xbc0d,	// (0x0007a823) main_cset_slider_pane_g2_ParamLimits

0xe3c7,	// (0x0007cfdd) main_cset_slider_pane_g3_ParamLimits

0xe3c7,	// (0x0007cfdd) main_cset_slider_pane_g3

0xbc22,	// (0x0007a838) main_cset_slider_pane_g4_ParamLimits

0xbc22,	// (0x0007a838) main_cset_slider_pane_g4

0xbc31,	// (0x0007a847) main_cset_slider_pane_g5_ParamLimits

0xbc31,	// (0x0007a847) main_cset_slider_pane_g5

0xbc3f,	// (0x0007a855) main_cset_slider_pane_g6_ParamLimits

0xbc3f,	// (0x0007a855) main_cset_slider_pane_g6

0xf97c,	// (0x0007e592) main_cset_slider_pane_g_ParamLimits

0xe3f7,	// (0x0007d00d) main_cset_slider_pane_t1_ParamLimits

0xbccf,	// (0x0007a8e5) main_cset_slider_pane_t2_ParamLimits

0xbce9,	// (0x0007a8ff) main_cset_slider_pane_t3_ParamLimits

0xbd03,	// (0x0007a919) main_cset_slider_pane_t4_ParamLimits

0xbd1d,	// (0x0007a933) main_cset_slider_pane_t5_ParamLimits

0xbd3b,	// (0x0007a951) main_cset_slider_pane_t6_ParamLimits

0xbd52,	// (0x0007a968) main_cset_slider_pane_t7_ParamLimits

0xbd80,	// (0x0007a996) main_cset_slider_pane_t8_ParamLimits

0xbd80,	// (0x0007a996) main_cset_slider_pane_t8

0xbda8,	// (0x0007a9be) main_cset_slider_pane_t9_ParamLimits

0xbda8,	// (0x0007a9be) main_cset_slider_pane_t9

0xbdd0,	// (0x0007a9e6) main_cset_slider_pane_t10_ParamLimits

0xbdd0,	// (0x0007a9e6) main_cset_slider_pane_t10

0xbdf8,	// (0x0007aa0e) main_cset_slider_pane_t11_ParamLimits

0xbdf8,	// (0x0007aa0e) main_cset_slider_pane_t11

0xbe22,	// (0x0007aa38) main_cset_slider_pane_t12_ParamLimits

0xbe22,	// (0x0007aa38) main_cset_slider_pane_t12

0xbe3f,	// (0x0007aa55) main_cset_slider_pane_t13_ParamLimits

0xbe3f,	// (0x0007aa55) main_cset_slider_pane_t13

0xf9a1,	// (0x0007e5b7) main_cset_slider_pane_t_ParamLimits

0xecc7,	// (0x0007d8dd) bg_popup_sub_pane_cp011

0xe52c,	// (0x0007d142) main_cset_text_pane_g1

0xe534,	// (0x0007d14a) main_cset_text_pane_t1

0xe542,	// (0x0007d158) main_cset_text_pane_t2

0xe550,	// (0x0007d166) main_cset_text_pane_t3

0xe55e,	// (0x0007d174) main_cset_text_pane_t4

0xe56c,	// (0x0007d182) main_cset_text_pane_t5

0xe57a,	// (0x0007d190) main_cset_text_pane_t6

0xe588,	// (0x0007d19e) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0007e64e) main_cset_text_pane_t

0xecc7,	// (0x0007d8dd) main_cam4_burst_pane

0xecc7,	// (0x0007d8dd) main_cam5_pane

0xbb01,	// (0x0007a717) bg_button_pane_cp019

0xbb0a,	// (0x0007a720) bg_button_pane_cp020

0xe3d3,	// (0x0007cfe9) main_cset_slider_pane_g7_ParamLimits

0xe3d3,	// (0x0007cfe9) main_cset_slider_pane_g7

0xe3df,	// (0x0007cff5) main_cset_slider_pane_g8_ParamLimits

0xe3df,	// (0x0007cff5) main_cset_slider_pane_g8

0xbc53,	// (0x0007a869) main_cset_slider_pane_g9_ParamLimits

0xbc53,	// (0x0007a869) main_cset_slider_pane_g9

0xbc5f,	// (0x0007a875) main_cset_slider_pane_g10_ParamLimits

0xbc5f,	// (0x0007a875) main_cset_slider_pane_g10

0xbc6b,	// (0x0007a881) main_cset_slider_pane_g11_ParamLimits

0xbc6b,	// (0x0007a881) main_cset_slider_pane_g11

0xbc77,	// (0x0007a88d) main_cset_slider_pane_g12_ParamLimits

0xbc77,	// (0x0007a88d) main_cset_slider_pane_g12

0xbc83,	// (0x0007a899) main_cset_slider_pane_g13_ParamLimits

0xbc83,	// (0x0007a899) main_cset_slider_pane_g13

0xbc8f,	// (0x0007a8a5) main_cset_slider_pane_g14_ParamLimits

0xbc8f,	// (0x0007a8a5) main_cset_slider_pane_g14

0xbc9b,	// (0x0007a8b1) main_cset_slider_pane_g15_ParamLimits

0xbc9b,	// (0x0007a8b1) main_cset_slider_pane_g15

0xe425,	// (0x0007d03b) main_cset_slider_pane_t14_ParamLimits

0xe425,	// (0x0007d03b) main_cset_slider_pane_t14

0xe45e,	// (0x0007d074) main_cset_slider_pane_t15_ParamLimits

0xe45e,	// (0x0007d074) main_cset_slider_pane_t15

0xc1aa,	// (0x0007adc0) aid_cam4_burst_size_cell_ParamLimits

0xc1aa,	// (0x0007adc0) aid_cam4_burst_size_cell

0xc1c6,	// (0x0007addc) grid_cam4_burst_pane_ParamLimits

0xc1c6,	// (0x0007addc) grid_cam4_burst_pane

0xc1f6,	// (0x0007ae0c) linegrid_cam4_burst_pane_ParamLimits

0xc1f6,	// (0x0007ae0c) linegrid_cam4_burst_pane

0xc216,	// (0x0007ae2c) scroll_pane_cp30_ParamLimits

0xc216,	// (0x0007ae2c) scroll_pane_cp30

0xc222,	// (0x0007ae38) cell_cam4_burst_pane_ParamLimits

0xc222,	// (0x0007ae38) cell_cam4_burst_pane

0xe596,	// (0x0007d1ac) linegrid_cam4_burst_pane_g1_ParamLimits

0xe596,	// (0x0007d1ac) linegrid_cam4_burst_pane_g1

0xc25e,	// (0x0007ae74) linegrid_cam4_burst_pane_g2_ParamLimits

0xc25e,	// (0x0007ae74) linegrid_cam4_burst_pane_g2

0xe5a3,	// (0x0007d1b9) linegrid_cam4_burst_pane_g3_ParamLimits

0xe5a3,	// (0x0007d1b9) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0007e65d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0007e65d) linegrid_cam4_burst_pane_g

0xc26f,	// (0x0007ae85) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc26f,	// (0x0007ae85) linegrid_cam4_burst_pane_g3_copy1

0xe5b0,	// (0x0007d1c6) linegrid_cam4_burst_pane_g4_ParamLimits

0xe5b0,	// (0x0007d1c6) linegrid_cam4_burst_pane_g4

0xc289,	// (0x0007ae9f) linegrid_cam4_burst_pane_g5_ParamLimits

0xc289,	// (0x0007ae9f) linegrid_cam4_burst_pane_g5

0xc29a,	// (0x0007aeb0) linegrid_cam4_burst_pane_g6_ParamLimits

0xc29a,	// (0x0007aeb0) linegrid_cam4_burst_pane_g6

0xe5bd,	// (0x0007d1d3) linegrid_cam4_burst_pane_g7_ParamLimits

0xe5bd,	// (0x0007d1d3) linegrid_cam4_burst_pane_g7

0xc2ab,	// (0x0007aec1) cell_cam4_burst_pane_g1

0xe5d6,	// (0x0007d1ec) main_cam5_pane_t1_ParamLimits

0xe5d6,	// (0x0007d1ec) main_cam5_pane_t1

0xe5e8,	// (0x0007d1fe) main_cam5_pane_t2_ParamLimits

0xe5e8,	// (0x0007d1fe) main_cam5_pane_t2

0xe5fa,	// (0x0007d210) main_cam5_pane_t3_ParamLimits

0xe5fa,	// (0x0007d210) main_cam5_pane_t3

0xe60c,	// (0x0007d222) main_cam5_pane_t4_ParamLimits

0xe60c,	// (0x0007d222) main_cam5_pane_t4

0xe624,	// (0x0007d23a) main_cam5_pane_t5_ParamLimits

0xe624,	// (0x0007d23a) main_cam5_pane_t5

0xe638,	// (0x0007d24e) main_cam5_pane_t6_ParamLimits

0xe638,	// (0x0007d24e) main_cam5_pane_t6

0xe64c,	// (0x0007d262) main_cam5_pane_t7_ParamLimits

0xe64c,	// (0x0007d262) main_cam5_pane_t7

0xe65e,	// (0x0007d274) main_cam5_pane_t8_ParamLimits

0xe65e,	// (0x0007d274) main_cam5_pane_t8

0xe67a,	// (0x0007d290) main_cam5_pane_t9_ParamLimits

0xe67a,	// (0x0007d290) main_cam5_pane_t9

0xe68c,	// (0x0007d2a2) main_cam5_pane_t10_ParamLimits

0xe68c,	// (0x0007d2a2) main_cam5_pane_t10

0xe69e,	// (0x0007d2b4) main_cam5_pane_t11_ParamLimits

0xe69e,	// (0x0007d2b4) main_cam5_pane_t11

0xe6b0,	// (0x0007d2c6) main_cam5_pane_t12_ParamLimits

0xe6b0,	// (0x0007d2c6) main_cam5_pane_t12

0xe6c5,	// (0x0007d2db) main_cam5_pane_t13_ParamLimits

0xe6c5,	// (0x0007d2db) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0007e669) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0007e669) main_cam5_pane_t

0x6435,	// (0x0007504b) popup_scut_keymap_window_ParamLimits

0x6435,	// (0x0007504b) popup_scut_keymap_window

0xc2be,	// (0x0007aed4) aid_size_cell_brow_shortcut

0x1f01,	// (0x00070b17) bg_popup_window_pane_cp010

0xc2ca,	// (0x0007aee0) grid_scut_pane

0xc2d6,	// (0x0007aeec) cell_scut_pane_ParamLimits

0xc2d6,	// (0x0007aeec) cell_scut_pane

0xc2ed,	// (0x0007af03) cell_scut_pane_g1

0xe6e2,	// (0x0007d2f8) cell_scut_pane_t1

0xe6f1,	// (0x0007d307) cell_scut_pane_t2

0xc2f6,	// (0x0007af0c) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0007e684) cell_scut_pane_t

0xa311,	// (0x00078f27) main_mup3_pane_g8_ParamLimits

0xa311,	// (0x00078f27) main_mup3_pane_g8

0xb716,	// (0x0007a32c) area_vitu2_query_pane_ParamLimits

0xb716,	// (0x0007a32c) area_vitu2_query_pane

0x54fc,	// (0x00074112) input_focus_pane_cp08

0xe700,	// (0x0007d316) area_vitu2_query_pane_g1

0x55fd,	// (0x00074213) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0007e68b) area_vitu2_query_pane_g

0xc304,	// (0x0007af1a) area_vitu2_query_pane_t1_ParamLimits

0xc304,	// (0x0007af1a) area_vitu2_query_pane_t1

0xc318,	// (0x0007af2e) area_vitu2_query_pane_t2_ParamLimits

0xc318,	// (0x0007af2e) area_vitu2_query_pane_t2

0x560e,	// (0x00074224) area_vitu2_query_pane_t3_ParamLimits

0x560e,	// (0x00074224) area_vitu2_query_pane_t3

0x5636,	// (0x0007424c) area_vitu2_query_pane_t4_ParamLimits

0x5636,	// (0x0007424c) area_vitu2_query_pane_t4

0x565e,	// (0x00074274) area_vitu2_query_pane_t5_ParamLimits

0x565e,	// (0x00074274) area_vitu2_query_pane_t5

0x5686,	// (0x0007429c) area_vitu2_query_pane_t6_ParamLimits

0x5686,	// (0x0007429c) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0007e690) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0007e690) area_vitu2_query_pane_t

0xc32c,	// (0x0007af42) bg_button_pane_cp018

0xc33a,	// (0x0007af50) bg_button_pane_cp021

0x56d2,	// (0x000742e8) bg_button_pane_cp022

0x56e3,	// (0x000742f9) input_focus_pane_cp09

0x8816,	// (0x0007742c) aid_size_touch_mv_arrow_left

0x883f,	// (0x00077455) aid_size_touch_mv_arrow_right

0xbcb3,	// (0x0007a8c9) main_cset_slider_pane_g16_ParamLimits

0xbcb3,	// (0x0007a8c9) main_cset_slider_pane_g16

0xbcc1,	// (0x0007a8d7) main_cset_slider_pane_g17_ParamLimits

0xbcc1,	// (0x0007a8d7) main_cset_slider_pane_g17

0xc2ab,	// (0x0007aec1) cell_cam4_burst_pane_g1_ParamLimits

0xecc7,	// (0x0007d8dd) compa_mode_pane

0xbed0,	// (0x0007aae6) popup_vtel_slider_window_g3_ParamLimits

0xbed0,	// (0x0007aae6) popup_vtel_slider_window_g3

0xbee4,	// (0x0007aafa) popup_vtel_slider_window_g4_ParamLimits

0xbee4,	// (0x0007aafa) popup_vtel_slider_window_g4

0xbef8,	// (0x0007ab0e) popup_vtel_slider_window_t1_ParamLimits

0xbef8,	// (0x0007ab0e) popup_vtel_slider_window_t1

0xecc7,	// (0x0007d8dd) main_cl_pane

0x9649,	// (0x0007825f) popup_imed_adjust2_window_ParamLimits

0x3356,	// (0x00071f6c) bg_tb_trans_pane_cp05_ParamLimits

0x3cd5,	// (0x000728eb) popup_imed_adjust2_window_g1_ParamLimits

0x3ce4,	// (0x000728fa) popup_imed_adjust2_window_g2_ParamLimits

0x3ce4,	// (0x000728fa) popup_imed_adjust2_window_g2

0x3cf0,	// (0x00072906) popup_imed_adjust2_window_g3_ParamLimits

0x3cf0,	// (0x00072906) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0007e3fb) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0007e3fb) popup_imed_adjust2_window_g

0x3cfc,	// (0x00072912) popup_imed_adjust2_window_t1_ParamLimits

0x3d14,	// (0x0007292a) slider_imed_adjust_pane_ParamLimits

0x3d28,	// (0x0007293e) slider_imed_adjust_pane_g1_ParamLimits

0x3d38,	// (0x0007294e) slider_imed_adjust_pane_g2_ParamLimits

0x3d48,	// (0x0007295e) slider_imed_adjust_pane_g3_ParamLimits

0x3d59,	// (0x0007296f) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0007e402) slider_imed_adjust_pane_g_ParamLimits

0xb45d,	// (0x0007a073) aid_touch_area_cam4_ParamLimits

0xb45d,	// (0x0007a073) aid_touch_area_cam4

0xb46d,	// (0x0007a083) battery_pane_cp01

0xb4f4,	// (0x0007a10a) main_camera4_pane_g6_ParamLimits

0xb4f4,	// (0x0007a10a) main_camera4_pane_g6

0xb512,	// (0x0007a128) main_camera4_pane_t2_ParamLimits

0xb512,	// (0x0007a128) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0007e505) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0007e505) main_camera4_pane_t

0xb599,	// (0x0007a1af) aid_touch_area_vid4_ParamLimits

0xb599,	// (0x0007a1af) aid_touch_area_vid4

0xb5d9,	// (0x0007a1ef) main_video4_pane_g5_ParamLimits

0xb5d9,	// (0x0007a1ef) main_video4_pane_g5

0xb5fd,	// (0x0007a213) vid4_progress_pane_ParamLimits

0xb5fd,	// (0x0007a213) vid4_progress_pane

0xe3eb,	// (0x0007d001) main_cset_slider_pane_g18_ParamLimits

0xe3eb,	// (0x0007d001) main_cset_slider_pane_g18

0xe5ca,	// (0x0007d1e0) cell_cam4_burst_pane_g2_ParamLimits

0xe5ca,	// (0x0007d1e0) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0007e664) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0007e664) cell_cam4_burst_pane_g

0xc346,	// (0x0007af5c) bg_cl_pane_ParamLimits

0xc346,	// (0x0007af5c) bg_cl_pane

0xc352,	// (0x0007af68) cl_header_pane_ParamLimits

0xc352,	// (0x0007af68) cl_header_pane

0xc35e,	// (0x0007af74) cl_listscroll_pane_ParamLimits

0xc35e,	// (0x0007af74) cl_listscroll_pane

0xe70c,	// (0x0007d322) bg_cl_pane_g1

0xe714,	// (0x0007d32a) bg_cl_pane_g2

0xe71c,	// (0x0007d332) bg_cl_pane_g3

0xe724,	// (0x0007d33a) bg_cl_pane_g4

0xe72c,	// (0x0007d342) bg_cl_pane_g5

0xe734,	// (0x0007d34a) bg_cl_pane_g6

0xe73c,	// (0x0007d352) bg_cl_pane_g7

0xe744,	// (0x0007d35a) bg_cl_pane_g8

0xe74c,	// (0x0007d362) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0007e69f) bg_cl_pane_g

0xc36a,	// (0x0007af80) aid_height_cl_leading_ParamLimits

0xc36a,	// (0x0007af80) aid_height_cl_leading

0xc376,	// (0x0007af8c) aid_height_cl_text_ParamLimits

0xc376,	// (0x0007af8c) aid_height_cl_text

0x102f,	// (0x0006fc45) bg_cl_header_pane_ParamLimits

0x102f,	// (0x0006fc45) bg_cl_header_pane

0xc38e,	// (0x0007afa4) cl_header_pane_g1_ParamLimits

0xc38e,	// (0x0007afa4) cl_header_pane_g1

0xc39b,	// (0x0007afb1) cl_header_pane_t1_ParamLimits

0xc39b,	// (0x0007afb1) cl_header_pane_t1

0xe754,	// (0x0007d36a) cl_list_pane

0xe3be,	// (0x0007cfd4) hc_scroll_pane_cp01

0x17d8,	// (0x000703ee) bg_cl_header_pane_g1

0xe2a4,	// (0x0007ceba) bg_cl_header_pane_g2

0x17f8,	// (0x0007040e) bg_cl_header_pane_g3

0xe2b4,	// (0x0007ceca) bg_cl_header_pane_g4

0xe2ac,	// (0x0007cec2) bg_cl_header_pane_g5

0xe4e3,	// (0x0007d0f9) bg_cl_header_pane_g6

0xe2cc,	// (0x0007cee2) bg_cl_header_pane_g7

0xe2d4,	// (0x0007ceea) bg_cl_header_pane_g8

0xe2c4,	// (0x0007ceda) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0007e6b2) bg_cl_header_pane_g

0xc3ad,	// (0x0007afc3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc3ad,	// (0x0007afc3) hc_cl_list_double_graphic_heading_pane

0xc3be,	// (0x0007afd4) hc_cl_list_single_graphic_pane_ParamLimits

0xc3be,	// (0x0007afd4) hc_cl_list_single_graphic_pane

0xc3d7,	// (0x0007afed) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc3d7,	// (0x0007afed) hc_cl_list_single_graphic_pane_g1

0xc3e3,	// (0x0007aff9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc3e3,	// (0x0007aff9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0007e6c5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0007e6c5) hc_cl_list_single_graphic_pane_g

0xc3f7,	// (0x0007b00d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc3f7,	// (0x0007b00d) hc_cl_list_single_graphic_pane_t1

0xc3d7,	// (0x0007afed) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc3d7,	// (0x0007afed) hc_cl_list_double_graphic_heading_pane_g1

0xc40c,	// (0x0007b022) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc40c,	// (0x0007b022) hc_cl_list_double_graphic_heading_pane_g2

0xc420,	// (0x0007b036) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc420,	// (0x0007b036) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0007e6ca) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0007e6ca) hc_cl_list_double_graphic_heading_pane_g

0xc434,	// (0x0007b04a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc434,	// (0x0007b04a) hc_cl_list_double_graphic_heading_pane_t1

0xc449,	// (0x0007b05f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc449,	// (0x0007b05f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0007e6d1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0007e6d1) hc_cl_list_double_graphic_heading_pane_t

0xc466,	// (0x0007b07c) vid4_progress_pane_g1

0xc478,	// (0x0007b08e) vid4_progress_pane_g2

0x8e89,	// (0x00077a9f) vid4_progress_pane_g3

0xc488,	// (0x0007b09e) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0007e6d6) vid4_progress_pane_g

0xc4a6,	// (0x0007b0bc) vid4_progress_pane_t1

0xc4bb,	// (0x0007b0d1) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0007e6e1) vid4_progress_pane_t

0xc4e6,	// (0x0007b0fc) wait_bar_pane_cp07

0x3551,	// (0x00072167) blid_firmament_pane_ParamLimits

0x3594,	// (0x000721aa) popup_blid_sat_info2_window_g1

0x35b8,	// (0x000721ce) popup_blid_sat_info2_window_t3

0x35c6,	// (0x000721dc) popup_blid_sat_info2_window_t4

0x35d4,	// (0x000721ea) popup_blid_sat_info2_window_t5

0x35e2,	// (0x000721f8) popup_blid_sat_info2_window_t6

0x35f2,	// (0x00072208) popup_blid_sat_info2_window_t7

0x3600,	// (0x00072216) popup_blid_sat_info2_window_t8

0x360e,	// (0x00072224) popup_blid_sat_info2_window_t9

0x361c,	// (0x00072232) popup_blid_sat_info2_window_t10

0x36de,	// (0x000722f4) aid_firma_cardinal_ParamLimits

0x36f2,	// (0x00072308) blid_firmament_pane_t1_ParamLimits

0x3709,	// (0x0007231f) blid_firmament_pane_t2_ParamLimits

0x3720,	// (0x00072336) blid_firmament_pane_t3_ParamLimits

0x3737,	// (0x0007234d) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0007e2f4) blid_firmament_pane_t_ParamLimits

0x374e,	// (0x00072364) blid_sat_info_pane_ParamLimits

0x333c,	// (0x00071f52) main_cam_set_pane_ParamLimits

0xaac9,	// (0x000796df) aid_size_cell_colour_35_ParamLimits

0xaae3,	// (0x000796f9) aid_size_cell_colour_112_ParamLimits

0xaafa,	// (0x00079710) aid_size_cell_effect_ParamLimits

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp02_ParamLimits

0x27da,	// (0x000713f0) heading_imed_pane_ParamLimits

0xab14,	// (0x0007972a) listscroll_imed_pane_ParamLimits

0x296e,	// (0x00071584) popup_call2_audio_first_window_g5_ParamLimits

0x296e,	// (0x00071584) popup_call2_audio_first_window_g5

0xb21a,	// (0x00079e30) aid_size_touch_image3_arrow_left_ParamLimits

0xb21a,	// (0x00079e30) aid_size_touch_image3_arrow_left

0xb230,	// (0x00079e46) aid_size_touch_image3_arrow_right_ParamLimits

0xb230,	// (0x00079e46) aid_size_touch_image3_arrow_right

0xc4d1,	// (0x0007b0e7) vid4_progress_pane_t3

0xadb2,	// (0x000799c8) main_hwr_training_symbol_option_pane_ParamLimits

0xadb2,	// (0x000799c8) main_hwr_training_symbol_option_pane

0x3fc2,	// (0x00072bd8) popup_hwr_training_preview_window_ParamLimits

0x3fc2,	// (0x00072bd8) popup_hwr_training_preview_window

0xae13,	// (0x00079a29) hwr_training_navi_pane_g5_ParamLimits

0xae13,	// (0x00079a29) hwr_training_navi_pane_g5

0xe292,	// (0x0007cea8) popup_char_count_window

0x102f,	// (0x0006fc45) bg_popup_sub_pane_cp20_ParamLimits

0xbfee,	// (0x0007ac04) list_vitu2_match_list_pane_ParamLimits

0xbffa,	// (0x0007ac10) vitu2_page_scroll_pane_ParamLimits

0xbffa,	// (0x0007ac10) vitu2_page_scroll_pane

0xe76f,	// (0x0007d385) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe76f,	// (0x0007d385) list_single_hwr_training_symbol_option_pane

0xe782,	// (0x0007d398) list_single_hwr_training_symbol_option_pane_g1

0xe78a,	// (0x0007d3a0) list_single_hwr_training_symbol_option_pane_t1

0xe798,	// (0x0007d3ae) bg_button_pane_cp023

0xe7a1,	// (0x0007d3b7) bg_button_pane_cp024

0xc51b,	// (0x0007b131) vitu2_page_scroll_pane_g1

0xc523,	// (0x0007b139) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0007e6e8) vitu2_page_scroll_pane_g

0xc52b,	// (0x0007b141) vitu2_page_scroll_pane_t1

0xe7d4,	// (0x0007d3ea) popup_char_count_window_g1

0xe7dd,	// (0x0007d3f3) popup_char_count_window_g2

0xe7e6,	// (0x0007d3fc) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0007e6ed) popup_char_count_window_g

0xe7ef,	// (0x0007d405) popup_char_count_window_t1

0xecc7,	// (0x0007d8dd) main_vded2_pane

0x3cc1,	// (0x000728d7) aid_size_cell_imed_line

0x3ccb,	// (0x000728e1) grid_imed_line_width_pane

0xb66b,	// (0x0007a281) vid4_indicators_pane_g4

0xe7fd,	// (0x0007d413) cell_imed_line_width_pane_ParamLimits

0xe7fd,	// (0x0007d413) cell_imed_line_width_pane

0xe811,	// (0x0007d427) cell_imed_line_width_pane_g1

0xe81a,	// (0x0007d430) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0007e6f4) cell_imed_line_width_pane_g

0xc53a,	// (0x0007b150) main_vded2_pane_g1_ParamLimits

0xc53a,	// (0x0007b150) main_vded2_pane_g1

0xc547,	// (0x0007b15d) main_vded2_pane_g2_ParamLimits

0xc547,	// (0x0007b15d) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0007e6f9) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0007e6f9) main_vded2_pane_g

0xc555,	// (0x0007b16b) vded2_slider_pane_ParamLimits

0xc555,	// (0x0007b16b) vded2_slider_pane

0xc562,	// (0x0007b178) aid_size_touch_vded2_end

0xc56c,	// (0x0007b182) aid_size_touch_vded2_playhead

0xe822,	// (0x0007d438) aid_size_touch_vded2_start

0xe82a,	// (0x0007d440) vded2_slider_bg_pane

0xe833,	// (0x0007d449) vded2_slider_pane_g1

0xe83c,	// (0x0007d452) vded2_slider_pane_g2

0xc574,	// (0x0007b18a) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0007e6fe) vded2_slider_pane_g

0xe844,	// (0x0007d45a) vded2_slider_bg_pane_g1

0xe84d,	// (0x0007d463) vded2_slider_bg_pane_g2

0xe856,	// (0x0007d46c) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0007e705) vded2_slider_bg_pane_g

0x8ea1,	// (0x00077ab7) aid_postcard_touch_down_pane_ParamLimits

0x8ea1,	// (0x00077ab7) aid_postcard_touch_down_pane

0x8eb1,	// (0x00077ac7) aid_postcard_touch_up_pane_ParamLimits

0x8eb1,	// (0x00077ac7) aid_postcard_touch_up_pane

0xecc7,	// (0x0007d8dd) main_blid2_pane

0x95d4,	// (0x000781ea) popup_blid2_search_window

0xecc7,	// (0x0007d8dd) blid2_gps_pane

0xecc7,	// (0x0007d8dd) blid2_navig_pane

0xecc7,	// (0x0007d8dd) blid2_search_pane

0xecc7,	// (0x0007d8dd) blid2_tripm_pane

0xc57d,	// (0x0007b193) blid2_search_pane_g1_ParamLimits

0xc57d,	// (0x0007b193) blid2_search_pane_g1

0xc58d,	// (0x0007b1a3) blid2_search_pane_t1_ParamLimits

0xc58d,	// (0x0007b1a3) blid2_search_pane_t1

0xc59f,	// (0x0007b1b5) aid_size_cell_blid2_gps_ParamLimits

0xc59f,	// (0x0007b1b5) aid_size_cell_blid2_gps

0xc5af,	// (0x0007b1c5) blid2_gps_pane_g1_ParamLimits

0xc5af,	// (0x0007b1c5) blid2_gps_pane_g1

0xc5bb,	// (0x0007b1d1) grid_blid2_satellite_pane_ParamLimits

0xc5bb,	// (0x0007b1d1) grid_blid2_satellite_pane

0xc5cb,	// (0x0007b1e1) blid2_navig_pane_g1_ParamLimits

0xc5cb,	// (0x0007b1e1) blid2_navig_pane_g1

0xc5d7,	// (0x0007b1ed) blid2_navig_pane_t1_ParamLimits

0xc5d7,	// (0x0007b1ed) blid2_navig_pane_t1

0xc5e9,	// (0x0007b1ff) blid2_navig_pane_t2_ParamLimits

0xc5e9,	// (0x0007b1ff) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0007e70c) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0007e70c) blid2_navig_pane_t

0xc5fb,	// (0x0007b211) blid2_navig_ring_pane_ParamLimits

0xc5fb,	// (0x0007b211) blid2_navig_ring_pane

0xc60b,	// (0x0007b221) blid2_speed_pane_ParamLimits

0xc60b,	// (0x0007b221) blid2_speed_pane

0xc617,	// (0x0007b22d) blid2_tripm_pane_g1_ParamLimits

0xc617,	// (0x0007b22d) blid2_tripm_pane_g1

0xc627,	// (0x0007b23d) blid2_tripm_pane_g2_ParamLimits

0xc627,	// (0x0007b23d) blid2_tripm_pane_g2

0xc633,	// (0x0007b249) blid2_tripm_pane_g3_ParamLimits

0xc633,	// (0x0007b249) blid2_tripm_pane_g3

0xc63f,	// (0x0007b255) blid2_tripm_pane_g4_ParamLimits

0xc63f,	// (0x0007b255) blid2_tripm_pane_g4

0xc64b,	// (0x0007b261) blid2_tripm_pane_g5_ParamLimits

0xc64b,	// (0x0007b261) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0007e711) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0007e711) blid2_tripm_pane_g

0xc667,	// (0x0007b27d) blid2_tripm_pane_t1_ParamLimits

0xc667,	// (0x0007b27d) blid2_tripm_pane_t1

0xc67b,	// (0x0007b291) blid2_tripm_pane_t2_ParamLimits

0xc67b,	// (0x0007b291) blid2_tripm_pane_t2

0xc68d,	// (0x0007b2a3) blid2_tripm_pane_t3_ParamLimits

0xc68d,	// (0x0007b2a3) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0007e71e) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0007e71e) blid2_tripm_pane_t

0xc6bf,	// (0x0007b2d5) cell_blid2_satellite_pane_ParamLimits

0xc6bf,	// (0x0007b2d5) cell_blid2_satellite_pane

0xc6d9,	// (0x0007b2ef) cell_blid2_satellite_pane_g1

0xe85f,	// (0x0007d475) cell_blid2_satellite_pane_t1

0x375e,	// (0x00072374) blid2_speed_pane_g1

0xe86d,	// (0x0007d483) blid2_speed_pane_t1

0xe87b,	// (0x0007d491) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0007e727) blid2_speed_pane_t

0x375e,	// (0x00072374) blid2_navig_ring_pane_g1

0xc6e2,	// (0x0007b2f8) blid2_navig_ring_pane_g2

0xc6ea,	// (0x0007b300) blid2_navig_ring_pane_g3

0xc6f2,	// (0x0007b308) blid2_navig_ring_pane_g4

0xc6fa,	// (0x0007b310) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0007e72c) blid2_navig_ring_pane_g

0xecc7,	// (0x0007d8dd) bg_popup_window_pane_cp011

0xe889,	// (0x0007d49f) popup_blid2_search_window_g1

0xe891,	// (0x0007d4a7) popup_blid2_search_window_t1

0xe89f,	// (0x0007d4b5) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0007e737) popup_blid2_search_window_t

0x16e7,	// (0x000702fd) main_browser_pane_g1

0x13d7,	// (0x0006ffed) main_browser_pane_ParamLimits

0x333c,	// (0x00071f52) bg_button_pane_cp011_ParamLimits

0xb8d4,	// (0x0007a4ea) cell_vitu2_function_pane_g1_ParamLimits

0x3356,	// (0x00071f6c) bg_popup_sub_pane_cp22_ParamLimits

0x54fc,	// (0x00074112) input_focus_pane_cp08_ParamLimits

0xc157,	// (0x0007ad6d) popup_vitu2_query_button_pane_ParamLimits

0xc157,	// (0x0007ad6d) popup_vitu2_query_button_pane

0x5513,	// (0x00074129) popup_vitu2_query_input_button_pane

0xe520,	// (0x0007d136) popup_vitu2_query_window_g1_ParamLimits

0x551d,	// (0x00074133) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0007e638) popup_vitu2_query_window_g_ParamLimits

0xecc7,	// (0x0007d8dd) bg_button_pane_cp026

0xc702,	// (0x0007b318) popup_vitu2_query_input_button_pane_g1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp025

0xe8ad,	// (0x0007d4c3) popup_vitu2_query_button_pane_t1

0xa02c,	// (0x00078c42) main_mp3_pane_t6

0xa03c,	// (0x00078c52) popup_slider_window_cp01

0xb548,	// (0x0007a15e) cam4_battery_pane

0xb628,	// (0x0007a23e) cam4_battery_pane_cp02

0xc45e,	// (0x0007b074) cam4_battery_pane_cp01

0xc45e,	// (0x0007b074) cam4_battery_pane_cp03

0x375e,	// (0x00072374) cam4_battery_pane_g1

0xe8bb,	// (0x0007d4d1) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0007e73c) cam4_battery_pane_g

0x362a,	// (0x00072240) popup_blid_sat_info2_window_t11

0x8816,	// (0x0007742c) aid_size_touch_mv_arrow_left_ParamLimits

0x883f,	// (0x00077455) aid_size_touch_mv_arrow_right_ParamLimits

0x1e61,	// (0x00070a77) navi_pane_g1_ParamLimits

0x887e,	// (0x00077494) navi_pane_g2_ParamLimits

0x88ac,	// (0x000774c2) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0007e006) navi_pane_g_ParamLimits

0x8906,	// (0x0007751c) navi_pane_mv_t1_ParamLimits

0xab20,	// (0x00079736) grid_imed_effect_pane_ParamLimits

0x72dc,	// (0x00075ef2) aid_placing_vt_slider_lsc

0x1636,	// (0x0007024c) aid_placing_vt_slider_prt

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp01_ParamLimits

0x38ea,	// (0x00072500) popup_image_details_window_g1_ParamLimits

0x38fd,	// (0x00072513) popup_image_details_window_g2_ParamLimits

0x3912,	// (0x00072528) popup_image_details_window_g3_ParamLimits

0x3912,	// (0x00072528) popup_image_details_window_g3

0xf723,	// (0x0007e339) popup_image_details_window_g_ParamLimits

0x3926,	// (0x0007253c) popup_image_details_window_t1_ParamLimits

0x3938,	// (0x0007254e) popup_image_details_window_t2_ParamLimits

0x3951,	// (0x00072567) popup_image_details_window_t3_ParamLimits

0x3965,	// (0x0007257b) popup_image_details_window_t4_ParamLimits

0x3980,	// (0x00072596) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0007e340) popup_image_details_window_t_ParamLimits

0xc382,	// (0x0007af98) cl_header_name_pane_ParamLimits

0xc382,	// (0x0007af98) cl_header_name_pane

0xc70a,	// (0x0007b320) cl_header_name_pane_t1_ParamLimits

0xc70a,	// (0x0007b320) cl_header_name_pane_t1

0xc721,	// (0x0007b337) cl_header_name_pane_t2_ParamLimits

0xc721,	// (0x0007b337) cl_header_name_pane_t2

0xc74b,	// (0x0007b361) cl_header_name_pane_t3_ParamLimits

0xc74b,	// (0x0007b361) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0007e741) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0007e741) cl_header_name_pane_t

0x88d7,	// (0x000774ed) navi_pane_mv_g2_ParamLimits

0xe26c,	// (0x0007ce82) field_vitu2_entry_pane_g1_ParamLimits

0xe278,	// (0x0007ce8e) field_vitu2_entry_pane_g2_ParamLimits

0xe284,	// (0x0007ce9a) field_vitu2_entry_pane_g3_ParamLimits

0xe284,	// (0x0007ce9a) field_vitu2_entry_pane_g3

0xf921,	// (0x0007e537) field_vitu2_entry_pane_g_ParamLimits

0xb864,	// (0x0007a47a) cell_vitu2_itu_pane_g1_ParamLimits

0xb874,	// (0x0007a48a) cell_vitu2_itu_pane_g2_ParamLimits

0xb874,	// (0x0007a48a) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0007e543) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0007e543) cell_vitu2_itu_pane_g

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp05_ParamLimits

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp05

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp03

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp04

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp10_ParamLimits

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp10

0x56d2,	// (0x000742e8) bg_vkb2_func_pane_cp08

0xc32c,	// (0x0007af42) bg_vkb2_func_pane_cp06

0xc33a,	// (0x0007af50) bg_vkb2_func_pane_cp07

0xe7aa,	// (0x0007d3c0) bg_vkb2_func_pane_cp11_ParamLimits

0xe7aa,	// (0x0007d3c0) bg_vkb2_func_pane_cp11

0xe7bf,	// (0x0007d3d5) bg_vkb2_func_pane_cp12_ParamLimits

0xe7bf,	// (0x0007d3d5) bg_vkb2_func_pane_cp12

0xecc7,	// (0x0007d8dd) bg_vkb2_func_pane_cp09

0xe2a4,	// (0x0007ceba) bg_vkb2_func_pane_g1

0x17f8,	// (0x0007040e) bg_vkb2_func_pane_g2

0xe2ac,	// (0x0007cec2) bg_vkb2_func_pane_g3

0xe2b4,	// (0x0007ceca) bg_vkb2_func_pane_g4

0xe4e3,	// (0x0007d0f9) bg_vkb2_func_pane_g5

0xe2cc,	// (0x0007cee2) bg_vkb2_func_pane_g6

0xe2d4,	// (0x0007ceea) bg_vkb2_func_pane_g7

0xe2c4,	// (0x0007ceda) bg_vkb2_func_pane_g8

0x17d8,	// (0x000703ee) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0007e748) bg_vkb2_func_pane_g

0xc659,	// (0x0007b26f) blid2_tripm_pane_g6_ParamLimits

0xc659,	// (0x0007b26f) blid2_tripm_pane_g6

0x407a,	// (0x00072c90) mp4_progress_pane_g1

0xc6b3,	// (0x0007b2c9) blid2_tripm_values_pane_ParamLimits

0xc6b3,	// (0x0007b2c9) blid2_tripm_values_pane

0xc770,	// (0x0007b386) blid2_tripm_values_pane_t1

0xc77e,	// (0x0007b394) blid2_tripm_values_pane_t2

0xc78c,	// (0x0007b3a2) blid2_tripm_values_pane_t3

0xc79a,	// (0x0007b3b0) blid2_tripm_values_pane_t4

0xc7a8,	// (0x0007b3be) blid2_tripm_values_pane_t5

0xc7b6,	// (0x0007b3cc) blid2_tripm_values_pane_t6

0xc7c4,	// (0x0007b3da) blid2_tripm_values_pane_t7

0xc7d2,	// (0x0007b3e8) blid2_tripm_values_pane_t8

0xc7e0,	// (0x0007b3f6) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0007e75b) blid2_tripm_values_pane_t

0x731c,	// (0x00075f32) call_video_pane_t1_ParamLimits

0x733d,	// (0x00075f53) call_video_pane_t2_ParamLimits

0xf279,	// (0x0007de8f) call_video_pane_t_ParamLimits

0x52c5,	// (0x00073edb) msg_header_pane_g1_ParamLimits

0x2081,	// (0x00070c97) msg_header_pane_g2_ParamLimits

0x2081,	// (0x00070c97) msg_header_pane_g2

0x0001,

0xf493,	// (0x0007e0a9) msg_header_pane_g_ParamLimits

0xf493,	// (0x0007e0a9) msg_header_pane_g

0x13d7,	// (0x0006ffed) main_clock2_pane_ParamLimits

0xa8b9,	// (0x000794cf) grid_clock2_toolbar_pane_ParamLimits

0xa8b9,	// (0x000794cf) grid_clock2_toolbar_pane

0xa8b9,	// (0x000794cf) listscroll_clock2_pane_ParamLimits

0xa8b9,	// (0x000794cf) listscroll_clock2_pane

0xa95d,	// (0x00079573) main_clock2_pane_t3_ParamLimits

0xa95d,	// (0x00079573) main_clock2_pane_t3

0xa96f,	// (0x00079585) main_clock2_pane_t4_ParamLimits

0xa96f,	// (0x00079585) main_clock2_pane_t4

0xe8c5,	// (0x0007d4db) cell_clock2_toolbar_pane

0xe8cd,	// (0x0007d4e3) cell_clock2_toolbar_pane_cp01

0xe8cd,	// (0x0007d4e3) cell_clock2_toolbar_pane_cp02

0xe8d5,	// (0x0007d4eb) cell_clock2_toolbar_pane_cp03

0xe8dd,	// (0x0007d4f3) list_clock2_pane

0x1db8,	// (0x000709ce) scroll_pane_cp10

0xe8e5,	// (0x0007d4fb) list_single_clock2_pane_ParamLimits

0xe8e5,	// (0x0007d4fb) list_single_clock2_pane

0x1f01,	// (0x00070b17) list_highlight_pane_cp08

0xe8f2,	// (0x0007d508) list_single_clock2_pane_t1

0xe900,	// (0x0007d516) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0007e76e) list_single_clock2_pane_t

0xecc7,	// (0x0007d8dd) bg_button_pane_cp10

0xe90e,	// (0x0007d524) cell_clock2_toolbar_pane_g1

0x8e03,	// (0x00077a19) aid_main_viewer_pane_g1_ParamLimits

0x8e03,	// (0x00077a19) aid_main_viewer_pane_g1

0x8e0f,	// (0x00077a25) aid_main_viewer_pane_g2_ParamLimits

0x8e0f,	// (0x00077a25) aid_main_viewer_pane_g2

0x8e1b,	// (0x00077a31) aid_main_viewer_pane_g3_ParamLimits

0x8e1b,	// (0x00077a31) aid_main_viewer_pane_g3

0x8e2c,	// (0x00077a42) aid_main_viewer_pane_g4_ParamLimits

0x8e2c,	// (0x00077a42) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0007e0ba) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0007e0ba) aid_main_viewer_pane_g

0x95ac,	// (0x000781c2) main_calc_pane_ParamLimits

0x95b9,	// (0x000781cf) main_dialer2_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_cam6_pane

0xecc7,	// (0x0007d8dd) main_vid6_pane

0xa8c5,	// (0x000794db) listscroll_gen_pane_cp06_ParamLimits

0xa8c5,	// (0x000794db) listscroll_gen_pane_cp06

0xa981,	// (0x00079597) main_clock2_pane_t5_ParamLimits

0xa981,	// (0x00079597) main_clock2_pane_t5

0xa9ca,	// (0x000795e0) aid_call2_pane_cp10_ParamLimits

0xa9dc,	// (0x000795f2) aid_call_pane_cp10_ParamLimits

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa9ee,	// (0x00079604) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa9ee,	// (0x00079604) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1e36,	// (0x00070a4c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0007e3f0) popup_clock_analogue_window_cp10_g_ParamLimits

0xaa00,	// (0x00079616) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb1c7,	// (0x00079ddd) cell_dialer2_keypad_pane_g2_ParamLimits

0xb1c7,	// (0x00079ddd) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0007e4d6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0007e4d6) cell_dialer2_keypad_pane_g

0xb1e3,	// (0x00079df9) cell_dialer2_keypad_pane_t1

0xbb9f,	// (0x0007a7b5) main_cset_text2_pane_ParamLimits

0xbb9f,	// (0x0007a7b5) main_cset_text2_pane

0xe700,	// (0x0007d316) area_vitu2_query_pane_g1_ParamLimits

0x55fd,	// (0x00074213) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0007e68b) area_vitu2_query_pane_g_ParamLimits

0x56ae,	// (0x000742c4) area_vitu2_query_pane_t7_ParamLimits

0x56ae,	// (0x000742c4) area_vitu2_query_pane_t7

0xc32c,	// (0x0007af42) bg_button_pane_cp018_ParamLimits

0xc33a,	// (0x0007af50) bg_button_pane_cp021_ParamLimits

0x56d2,	// (0x000742e8) bg_button_pane_cp022_ParamLimits

0x56d2,	// (0x000742e8) bg_vkb2_func_pane_cp08_ParamLimits

0xc32c,	// (0x0007af42) bg_vkb2_func_pane_cp06_ParamLimits

0xc33a,	// (0x0007af50) bg_vkb2_func_pane_cp07_ParamLimits

0x56e3,	// (0x000742f9) input_focus_pane_cp09_ParamLimits

0xc7ee,	// (0x0007b404) cam6_autofocus_pane_ParamLimits

0xc7ee,	// (0x0007b404) cam6_autofocus_pane

0xc810,	// (0x0007b426) cam6_image_uncrop_pane_ParamLimits

0xc810,	// (0x0007b426) cam6_image_uncrop_pane

0xc83d,	// (0x0007b453) cam6_indi_pane_ParamLimits

0xc83d,	// (0x0007b453) cam6_indi_pane

0xc857,	// (0x0007b46d) cam6_mode_pane_ParamLimits

0xc857,	// (0x0007b46d) cam6_mode_pane

0xc86b,	// (0x0007b481) cam6_timer_pane_ParamLimits

0xc86b,	// (0x0007b481) cam6_timer_pane

0xc877,	// (0x0007b48d) cam6_zoom_pane_ParamLimits

0xc877,	// (0x0007b48d) cam6_zoom_pane

0xc88f,	// (0x0007b4a5) cam6_mode_pane_g1_ParamLimits

0xc88f,	// (0x0007b4a5) cam6_mode_pane_g1

0xc89b,	// (0x0007b4b1) cam6_mode_pane_g2_ParamLimits

0xc89b,	// (0x0007b4b1) cam6_mode_pane_g2

0xc8a7,	// (0x0007b4bd) cam6_mode_pane_g3_ParamLimits

0xc8a7,	// (0x0007b4bd) cam6_mode_pane_g3

0xc8b3,	// (0x0007b4c9) cam6_mode_pane_g4_ParamLimits

0xc8b3,	// (0x0007b4c9) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0007e773) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0007e773) cam6_mode_pane_g

0xe245,	// (0x0007ce5b) bg_tb_trans_pane_cp08_ParamLimits

0xe245,	// (0x0007ce5b) bg_tb_trans_pane_cp08

0xe916,	// (0x0007d52c) cam6_battery_pane_ParamLimits

0xe916,	// (0x0007d52c) cam6_battery_pane

0xe92c,	// (0x0007d542) cam6_indi_pane_g1_ParamLimits

0xe92c,	// (0x0007d542) cam6_indi_pane_g1

0xe93e,	// (0x0007d554) cam6_indi_pane_g2_ParamLimits

0xe93e,	// (0x0007d554) cam6_indi_pane_g2

0xe950,	// (0x0007d566) cam6_indi_pane_g3_ParamLimits

0xe950,	// (0x0007d566) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0007e77c) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0007e77c) cam6_indi_pane_g

0xe962,	// (0x0007d578) cam6_indi_pane_t1_ParamLimits

0xe962,	// (0x0007d578) cam6_indi_pane_t1

0xb6a0,	// (0x0007a2b6) cam6_autofocus_pane_g1

0xb6a8,	// (0x0007a2be) cam6_autofocus_pane_g2

0xb6b0,	// (0x0007a2c6) cam6_autofocus_pane_g3

0xb6b8,	// (0x0007a2ce) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0007e783) cam6_autofocus_pane_g

0xe988,	// (0x0007d59e) cam6_timer_pane_g1

0xe990,	// (0x0007d5a6) cam6_timer_pane_t1

0xe99e,	// (0x0007d5b4) cam6_zoom_cont_pane

0xe9a6,	// (0x0007d5bc) cam6_zoom_pane_g1

0xe9ae,	// (0x0007d5c4) cam6_zoom_pane_g2

0xc8bf,	// (0x0007b4d5) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0007e78c) cam6_zoom_pane_g

0x375e,	// (0x00072374) cam6_battery_pane_g1

0x375e,	// (0x00072374) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0007e2fd) cam6_battery_pane_g

0xe9b6,	// (0x0007d5cc) cam6_zoom_cont_pane_g1

0xe9bf,	// (0x0007d5d5) cam6_zoom_cont_pane_g2

0xe9c8,	// (0x0007d5de) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0007e793) cam6_zoom_cont_pane_g

0xc8dc,	// (0x0007b4f2) cam6_mode_pane_cp_ParamLimits

0xc8dc,	// (0x0007b4f2) cam6_mode_pane_cp

0xc877,	// (0x0007b48d) cam6_zoom_pane_cp_ParamLimits

0xc877,	// (0x0007b48d) cam6_zoom_pane_cp

0xc8f0,	// (0x0007b506) vid6_image_uncrop_cif_pane_ParamLimits

0xc8f0,	// (0x0007b506) vid6_image_uncrop_cif_pane

0xc91c,	// (0x0007b532) vid6_image_uncrop_nhd_pane_ParamLimits

0xc91c,	// (0x0007b532) vid6_image_uncrop_nhd_pane

0xc810,	// (0x0007b426) vid6_image_uncrop_vga_pane_ParamLimits

0xc810,	// (0x0007b426) vid6_image_uncrop_vga_pane

0xc939,	// (0x0007b54f) vid6_image_uncrop_wvga_pane_ParamLimits

0xc939,	// (0x0007b54f) vid6_image_uncrop_wvga_pane

0xc956,	// (0x0007b56c) vid6_indi_pane_ParamLimits

0xc956,	// (0x0007b56c) vid6_indi_pane

0xe245,	// (0x0007ce5b) bg_tb_trans_pane_cp09_ParamLimits

0xe245,	// (0x0007ce5b) bg_tb_trans_pane_cp09

0xe9e0,	// (0x0007d5f6) cam6_battery_pane_cp_ParamLimits

0xe9e0,	// (0x0007d5f6) cam6_battery_pane_cp

0xe9ec,	// (0x0007d602) vid6_indi_pane_g1_ParamLimits

0xe9ec,	// (0x0007d602) vid6_indi_pane_g1

0xe9fe,	// (0x0007d614) vid6_indi_pane_g2_ParamLimits

0xe9fe,	// (0x0007d614) vid6_indi_pane_g2

0xea10,	// (0x0007d626) vid6_indi_pane_g3_ParamLimits

0xea10,	// (0x0007d626) vid6_indi_pane_g3

0xea25,	// (0x0007d63b) vid6_indi_pane_g4_ParamLimits

0xea25,	// (0x0007d63b) vid6_indi_pane_g4

0xea3a,	// (0x0007d650) vid6_indi_pane_g5_ParamLimits

0xea3a,	// (0x0007d650) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0007e79a) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0007e79a) vid6_indi_pane_g

0xea54,	// (0x0007d66a) vid6_indi_pane_t1_ParamLimits

0xea54,	// (0x0007d66a) vid6_indi_pane_t1

0xea6a,	// (0x0007d680) vid6_indi_pane_t2_ParamLimits

0xea6a,	// (0x0007d680) vid6_indi_pane_t2

0xea92,	// (0x0007d6a8) vid6_indi_pane_t3_ParamLimits

0xea92,	// (0x0007d6a8) vid6_indi_pane_t3

0xeaba,	// (0x0007d6d0) vid6_indi_pane_t4_ParamLimits

0xeaba,	// (0x0007d6d0) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0007e7a5) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0007e7a5) vid6_indi_pane_t

0xeade,	// (0x0007d6f4) wait_bar_pane_cp08

0xc97b,	// (0x0007b591) main_cset_text2_pane_t1_ParamLimits

0xc97b,	// (0x0007b591) main_cset_text2_pane_t1

0xc8c7,	// (0x0007b4dd) listscroll_gen_pane_cp06_t1_ParamLimits

0xc8c7,	// (0x0007b4dd) listscroll_gen_pane_cp06_t1

0xecc7,	// (0x0007d8dd) main_cam6_set_pane

0x39ca,	// (0x000725e0) bg_tb_trans_pane_cp06_ParamLimits

0xb550,	// (0x0007a166) cam4_indicators_pane_g1_ParamLimits

0xb561,	// (0x0007a177) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0007e513) cam4_indicators_pane_g_ParamLimits

0xb57f,	// (0x0007a195) cam4_indicators_pane_t1_ParamLimits

0x333c,	// (0x00071f52) bg_tb_trans_pane_cp07_ParamLimits

0xb632,	// (0x0007a248) vid4_indicators_pane_g1_ParamLimits

0xb646,	// (0x0007a25c) vid4_indicators_pane_g2_ParamLimits

0xb65a,	// (0x0007a270) vid4_indicators_pane_g3_ParamLimits

0xb66b,	// (0x0007a281) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0007e525) vid4_indicators_pane_g_ParamLimits

0xb689,	// (0x0007a29f) vid4_indicators_pane_t1_ParamLimits

0xc466,	// (0x0007b07c) vid4_progress_pane_g1_ParamLimits

0xc478,	// (0x0007b08e) vid4_progress_pane_g2_ParamLimits

0x8e89,	// (0x00077a9f) vid4_progress_pane_g3_ParamLimits

0xc488,	// (0x0007b09e) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0007e6d6) vid4_progress_pane_g_ParamLimits

0xc4a6,	// (0x0007b0bc) vid4_progress_pane_t1_ParamLimits

0xc4bb,	// (0x0007b0d1) vid4_progress_pane_t2_ParamLimits

0xc4d1,	// (0x0007b0e7) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0007e6e1) vid4_progress_pane_t_ParamLimits

0xc4e6,	// (0x0007b0fc) wait_bar_pane_cp07_ParamLimits

0xc9ae,	// (0x0007b5c4) main_cam6_set_pane_g2_ParamLimits

0xc9ae,	// (0x0007b5c4) main_cam6_set_pane_g2

0xc9ba,	// (0x0007b5d0) main_cset6_listscroll_pane_ParamLimits

0xc9ba,	// (0x0007b5d0) main_cset6_listscroll_pane

0xc9e5,	// (0x0007b5fb) main_cset6_slider_pane_ParamLimits

0xc9e5,	// (0x0007b5fb) main_cset6_slider_pane

0xc9f1,	// (0x0007b607) main_cset6_text2_pane_ParamLimits

0xc9f1,	// (0x0007b607) main_cset6_text2_pane

0xeaed,	// (0x0007d703) main_cset6_text_pane

0xeaf5,	// (0x0007d70b) main_cset_list_pane_copy1_ParamLimits

0xeaf5,	// (0x0007d70b) main_cset_list_pane_copy1

0xeb05,	// (0x0007d71b) scroll_pane_cp028_copy1

0xca04,	// (0x0007b61a) cset_list_set_pane_copy1

0xca17,	// (0x0007b62d) aid_position_infowindow_above_copy1

0xca1f,	// (0x0007b635) aid_position_infowindow_below_copy1

0xca27,	// (0x0007b63d) cset_list_set_pane_g1_copy1

0x547d,	// (0x00074093) cset_list_set_pane_g3_copy1_ParamLimits

0x547d,	// (0x00074093) cset_list_set_pane_g3_copy1

0x548c,	// (0x000740a2) cset_list_set_pane_t1_copy1_ParamLimits

0x548c,	// (0x000740a2) cset_list_set_pane_t1_copy1

0x333c,	// (0x00071f52) list_highlight_pane_cp021_copy1_ParamLimits

0x333c,	// (0x00071f52) list_highlight_pane_cp021_copy1

0xeb0e,	// (0x0007d724) cset6_slider_pane_ParamLimits

0xeb0e,	// (0x0007d724) cset6_slider_pane

0xeb3a,	// (0x0007d750) main_cset6_slider_pane_g1_ParamLimits

0xeb3a,	// (0x0007d750) main_cset6_slider_pane_g1

0xca2f,	// (0x0007b645) main_cset6_slider_pane_g2_ParamLimits

0xca2f,	// (0x0007b645) main_cset6_slider_pane_g2

0xeb62,	// (0x0007d778) main_cset6_slider_pane_g3_ParamLimits

0xeb62,	// (0x0007d778) main_cset6_slider_pane_g3

0xca57,	// (0x0007b66d) main_cset6_slider_pane_g4_ParamLimits

0xca57,	// (0x0007b66d) main_cset6_slider_pane_g4

0xca63,	// (0x0007b679) main_cset6_slider_pane_g5_ParamLimits

0xca63,	// (0x0007b679) main_cset6_slider_pane_g5

0xe3d3,	// (0x0007cfe9) main_cset6_slider_pane_g7_ParamLimits

0xe3d3,	// (0x0007cfe9) main_cset6_slider_pane_g7

0xe3df,	// (0x0007cff5) main_cset6_slider_pane_g8_ParamLimits

0xe3df,	// (0x0007cff5) main_cset6_slider_pane_g8

0xca71,	// (0x0007b687) main_cset6_slider_pane_g9_ParamLimits

0xca71,	// (0x0007b687) main_cset6_slider_pane_g9

0xca7d,	// (0x0007b693) main_cset6_slider_pane_g10_ParamLimits

0xca7d,	// (0x0007b693) main_cset6_slider_pane_g10

0xca89,	// (0x0007b69f) main_cset6_slider_pane_g11_ParamLimits

0xca89,	// (0x0007b69f) main_cset6_slider_pane_g11

0xca95,	// (0x0007b6ab) main_cset6_slider_pane_g12_ParamLimits

0xca95,	// (0x0007b6ab) main_cset6_slider_pane_g12

0xcaa1,	// (0x0007b6b7) main_cset6_slider_pane_g13_ParamLimits

0xcaa1,	// (0x0007b6b7) main_cset6_slider_pane_g13

0xcaad,	// (0x0007b6c3) main_cset6_slider_pane_g14_ParamLimits

0xcaad,	// (0x0007b6c3) main_cset6_slider_pane_g14

0xcab9,	// (0x0007b6cf) main_cset6_slider_pane_g15_ParamLimits

0xcab9,	// (0x0007b6cf) main_cset6_slider_pane_g15

0xcad1,	// (0x0007b6e7) main_cset6_slider_pane_g16_ParamLimits

0xcad1,	// (0x0007b6e7) main_cset6_slider_pane_g16

0xcadf,	// (0x0007b6f5) main_cset6_slider_pane_g17_ParamLimits

0xcadf,	// (0x0007b6f5) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0007e7ae) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0007e7ae) main_cset6_slider_pane_g

0xeb6e,	// (0x0007d784) main_cset6_slider_pane_t1_ParamLimits

0xeb6e,	// (0x0007d784) main_cset6_slider_pane_t1

0xcb05,	// (0x0007b71b) main_cset6_slider_pane_t2_ParamLimits

0xcb05,	// (0x0007b71b) main_cset6_slider_pane_t2

0xcb30,	// (0x0007b746) main_cset6_slider_pane_t3_ParamLimits

0xcb30,	// (0x0007b746) main_cset6_slider_pane_t3

0xcb5b,	// (0x0007b771) main_cset6_slider_pane_t4_ParamLimits

0xcb5b,	// (0x0007b771) main_cset6_slider_pane_t4

0xcb86,	// (0x0007b79c) main_cset6_slider_pane_t5_ParamLimits

0xcb86,	// (0x0007b79c) main_cset6_slider_pane_t5

0xebaf,	// (0x0007d7c5) main_cset6_slider_pane_t7_ParamLimits

0xebaf,	// (0x0007d7c5) main_cset6_slider_pane_t7

0xcbb3,	// (0x0007b7c9) main_cset6_slider_pane_t8_ParamLimits

0xcbb3,	// (0x0007b7c9) main_cset6_slider_pane_t8

0xcbd7,	// (0x0007b7ed) main_cset6_slider_pane_t9_ParamLimits

0xcbd7,	// (0x0007b7ed) main_cset6_slider_pane_t9

0xcbfb,	// (0x0007b811) main_cset6_slider_pane_t10_ParamLimits

0xcbfb,	// (0x0007b811) main_cset6_slider_pane_t10

0xcc1f,	// (0x0007b835) main_cset6_slider_pane_t11_ParamLimits

0xcc1f,	// (0x0007b835) main_cset6_slider_pane_t11

0xebe5,	// (0x0007d7fb) main_cset6_slider_pane_t14_ParamLimits

0xebe5,	// (0x0007d7fb) main_cset6_slider_pane_t14

0xec1e,	// (0x0007d834) main_cset6_slider_pane_t15_ParamLimits

0xec1e,	// (0x0007d834) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0007e7d3) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0007e7d3) main_cset6_slider_pane_t

0xe497,	// (0x0007d0ad) cset_slider_pane_g1_copy1

0xe4a0,	// (0x0007d0b6) cset_slider_pane_g2_copy1

0xe4a9,	// (0x0007d0bf) cset_slider_pane_g3_copy1

0xecc7,	// (0x0007d8dd) bg_popup_sub_pane_cp011_copy1

0xec57,	// (0x0007d86d) main_cset_text_pane_g1_copy1

0xe534,	// (0x0007d14a) main_cset_text_pane_t1_copy1

0xe542,	// (0x0007d158) main_cset_text_pane_t2_copy1

0xe550,	// (0x0007d166) main_cset_text_pane_t3_copy1

0xe55e,	// (0x0007d174) main_cset_text_pane_t4_copy1

0xe56c,	// (0x0007d182) main_cset_text_pane_t5_copy1

0xec5f,	// (0x0007d875) main_cset_text_pane_t6_copy1

0xe588,	// (0x0007d19e) main_cset_text_pane_t7_copy1

0xcc5e,	// (0x0007b874) main_cset_text2_pane_t1_copy1

0x333c,	// (0x00071f52) main_ncimui_pane

0x960a,	// (0x00078220) popup_query_ncimui_window_ParamLimits

0x960a,	// (0x00078220) popup_query_ncimui_window

0xa195,	// (0x00078dab) field_cale_ev2_pane_g4_ParamLimits

0xa195,	// (0x00078dab) field_cale_ev2_pane_g4

0xaee7,	// (0x00079afd) cell_video_dialer_keypad_pane_g2_ParamLimits

0xaee7,	// (0x00079afd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0007e4b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0007e4b1) cell_video_dialer_keypad_pane_g

0xaeff,	// (0x00079b15) cell_video_dialer_keypad_pane_t1

0xecc7,	// (0x0007d8dd) bg_popup_window_pane_cp012

0x1c85,	// (0x0007089b) heading_pane_cp06

0xec97,	// (0x0007d8ad) ncim_query_content_pane

0xecc7,	// (0x0007d8dd) bg_popup_heading_pane_cp01

0xec9f,	// (0x0007d8b5) ncim_heading_pane_t1

0xecad,	// (0x0007d8c3) ncim_indicator_popup_pane

0xecbf,	// (0x0007d8d5) ncim_query_button_pane

0x010e,	// (0x0006ed24) ncim_query_content_pane_t1

0x0120,	// (0x0006ed36) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0007e817) ncim_query_content_pane_t

0x015a,	// (0x0006ed70) ncim_query_list_pane

0x016c,	// (0x0006ed82) ncim_query_popup_pane

0xecad,	// (0x0007d8c3) ncim_indicator_popup_pane_ParamLimits

0xcdb1,	// (0x0007b9c7) ncim_query_content_pane_g1_ParamLimits

0xcdb1,	// (0x0007b9c7) ncim_query_content_pane_g1

0x010e,	// (0x0006ed24) ncim_query_content_pane_t1_ParamLimits

0x0120,	// (0x0006ed36) ncim_query_content_pane_t2_ParamLimits

0xcdbd,	// (0x0007b9d3) ncim_query_content_pane_t3_ParamLimits

0xcdbd,	// (0x0007b9d3) ncim_query_content_pane_t3

0xcdda,	// (0x0007b9f0) ncim_query_content_pane_t4_ParamLimits

0xcdda,	// (0x0007b9f0) ncim_query_content_pane_t4

0xcdf7,	// (0x0007ba0d) ncim_query_content_pane_t5_ParamLimits

0xcdf7,	// (0x0007ba0d) ncim_query_content_pane_t5

0x0132,	// (0x0006ed48) ncim_query_content_pane_t6_ParamLimits

0x0132,	// (0x0006ed48) ncim_query_content_pane_t6

0xfc01,	// (0x0007e817) ncim_query_content_pane_t_ParamLimits

0x015a,	// (0x0006ed70) ncim_query_list_pane_ParamLimits

0x016c,	// (0x0006ed82) ncim_query_popup_pane_ParamLimits

0x0180,	// (0x0006ed96) wait_bar_pane_cp04

0xecc7,	// (0x0007d8dd) input_focus_pane_cp011

0x0188,	// (0x0006ed9e) ncim_query_popup_pane_t1

0x0196,	// (0x0006edac) ncim_list_query_list_pane_ParamLimits

0x0196,	// (0x0006edac) ncim_list_query_list_pane

0xecc7,	// (0x0007d8dd) bg_button_pane_cp027

0x01a3,	// (0x0006edb9) ncim_query_button_pane_g1

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp012

0x01ad,	// (0x0006edc3) ncim_list_query_list_pane_g1

0x01b5,	// (0x0006edcb) ncim_list_query_list_pane_t1

0xb570,	// (0x0007a186) cam4_indicators_pane_g3_ParamLimits

0xb570,	// (0x0007a186) cam4_indicators_pane_g3

0xb677,	// (0x0007a28d) vid4_indicators_pane_g5_ParamLimits

0xb677,	// (0x0007a28d) vid4_indicators_pane_g5

0xc497,	// (0x0007b0ad) vid4_progress_pane_g5_ParamLimits

0xc497,	// (0x0007b0ad) vid4_progress_pane_g5

0xcc9d,	// (0x0007b8b3) main_ncimui_pane_g1

0xcd05,	// (0x0007b91b) ncimui_group_query_pane_ParamLimits

0xcd05,	// (0x0007b91b) ncimui_group_query_pane

0xcd4d,	// (0x0007b963) ncimui_list_pane_ParamLimits

0xcd4d,	// (0x0007b963) ncimui_list_pane

0xcd74,	// (0x0007b98a) ncimui_text_pane_ParamLimits

0xcd74,	// (0x0007b98a) ncimui_text_pane

0xce14,	// (0x0007ba2a) ncimui_text_pane_t1_ParamLimits

0xce14,	// (0x0007ba2a) ncimui_text_pane_t1

0x01c3,	// (0x0006edd9) ncimui_list_single_graphic_pane_ParamLimits

0x01c3,	// (0x0006edd9) ncimui_list_single_graphic_pane

0xce33,	// (0x0007ba49) ncimui_query_pane_ParamLimits

0xce33,	// (0x0007ba49) ncimui_query_pane

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp013

0x01d3,	// (0x0006ede9) ncim_list_query_list_pane_t1_copy1

0x01ad,	// (0x0006edc3) ncim_list_single_graphic_pane_g1

0x01e1,	// (0x0006edf7) ncim_query_button_pane_cp01

0x01ed,	// (0x0006ee03) ncim_query_entry_pane_ParamLimits

0x01ed,	// (0x0006ee03) ncim_query_entry_pane

0x0200,	// (0x0006ee16) ncimui_query_pane_g1

0x020c,	// (0x0006ee22) ncimui_query_pane_t1_ParamLimits

0x020c,	// (0x0006ee22) ncimui_query_pane_t1

0x333c,	// (0x00071f52) input_focus_pane_cp012

0x0225,	// (0x0006ee3b) ncim_query_entry_pane_t1

0x13d7,	// (0x0006ffed) main_im_pane_ParamLimits

0x333c,	// (0x00071f52) main_mobtv_pane_ParamLimits

0x333c,	// (0x00071f52) main_mobtv_pane

0xcaed,	// (0x0007b703) main_cset6_slider_pane_g18_ParamLimits

0xcaed,	// (0x0007b703) main_cset6_slider_pane_g18

0xcaf9,	// (0x0007b70f) main_cset6_slider_pane_g19_ParamLimits

0xcaf9,	// (0x0007b70f) main_cset6_slider_pane_g19

0xe284,	// (0x0007ce9a) bg_main_mobtv_pane_ParamLimits

0xe284,	// (0x0007ce9a) bg_main_mobtv_pane

0xce46,	// (0x0007ba5c) main_mobtv_info_pane

0xce51,	// (0x0007ba67) main_mobtv_loading_pane_ParamLimits

0xce51,	// (0x0007ba67) main_mobtv_loading_pane

0x0245,	// (0x0006ee5b) main_mobtv_pg_channel_list_pane

0x024f,	// (0x0006ee65) main_mobtv_pg_hdr_pane

0xce5e,	// (0x0007ba74) main_mobtv_programe_curr_pane_ParamLimits

0xce5e,	// (0x0007ba74) main_mobtv_programe_curr_pane

0xce6b,	// (0x0007ba81) main_mobtv_programe_next_pane_ParamLimits

0xce6b,	// (0x0007ba81) main_mobtv_programe_next_pane

0x0258,	// (0x0006ee6e) popup_mobtv_noti_window

0x375e,	// (0x00072374) main_tv_pg_hdr_pane_g1

0x0260,	// (0x0006ee76) main_tv_pg_hdr_pane_g2

0x0268,	// (0x0006ee7e) main_tv_pg_hdr_pane_g3

0x0270,	// (0x0006ee86) main_tv_pg_hdr_pane_g4

0x0278,	// (0x0006ee8e) main_tv_pg_hdr_pane_g5

0x0282,	// (0x0006ee98) main_tv_pg_hdr_pane_g6

0x028c,	// (0x0006eea2) main_tv_pg_hdr_pane_g7

0x0296,	// (0x0006eeac) main_tv_pg_hdr_pane_g8

0x02a0,	// (0x0006eeb6) main_tv_pg_hdr_pane_g9

0x02aa,	// (0x0006eec0) main_tv_pg_hdr_pane_g10

0x02b4,	// (0x0006eeca) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0007e824) main_tv_pg_hdr_pane_g

0x02be,	// (0x0006eed4) main_tv_pg_hdr_pane_t1

0x02cc,	// (0x0006eee2) main_tv_pg_hdr_pane_t2

0x02da,	// (0x0006eef0) main_tv_pg_hdr_pane_t3

0x02ea,	// (0x0006ef00) main_tv_pg_hdr_pane_t4

0x02fa,	// (0x0006ef10) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0007e83b) main_tv_pg_hdr_pane_t

0x030a,	// (0x0006ef20) single_mobtv_pg_channel_pane_ParamLimits

0x030a,	// (0x0006ef20) single_mobtv_pg_channel_pane

0x031c,	// (0x0006ef32) single_mobtv_pg_channel_table_pane

0x0325,	// (0x0006ef3b) single_mobtv_pg_channel_thumb_pane

0x032e,	// (0x0006ef44) single_tv_pg_channel_pane_g1

0x0337,	// (0x0006ef4d) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0007e846) single_tv_pg_channel_pane_g

0x39ca,	// (0x000725e0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x39ca,	// (0x000725e0) bg_single_mobtv_pg_channel_thumb_pane

0x0340,	// (0x0006ef56) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0340,	// (0x0006ef56) single_mobtv_pg_channel_thumb_pane_g1

0x034e,	// (0x0006ef64) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x034e,	// (0x0006ef64) single_mobtv_pg_channel_thumb_pane_g2

0x035a,	// (0x0006ef70) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x035a,	// (0x0006ef70) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0007e84b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0007e84b) single_mobtv_pg_channel_thumb_pane_g

0x0366,	// (0x0006ef7c) single_mobtv_pg_channel_thumb_pane_t1

0x0374,	// (0x0006ef8a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0007e852) single_mobtv_pg_channel_thumb_pane_t

0x375e,	// (0x00072374) bg_single_mobtv_pg_channel_table_pane_g1

0x375e,	// (0x00072374) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0007e2fd) bg_single_mobtv_pg_channel_table_pane_g

0x0382,	// (0x0006ef98) single_mobtv_pg_channel_table_pane_t1

0x0390,	// (0x0006efa6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0007e857) single_mobtv_pg_channel_table_pane_t

0xce80,	// (0x0007ba96) main_mobtv_info_pane_g1_ParamLimits

0xce80,	// (0x0007ba96) main_mobtv_info_pane_g1

0xce9c,	// (0x0007bab2) main_mobtv_info_pane_t1_ParamLimits

0xce9c,	// (0x0007bab2) main_mobtv_info_pane_t1

0xcf14,	// (0x0007bb2a) main_mobtv_info_pane_t2_ParamLimits

0xcf14,	// (0x0007bb2a) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0007e861) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0007e861) main_mobtv_info_pane_t

0xcfa3,	// (0x0007bbb9) wait_bar_pane_cp05

0xcfb5,	// (0x0007bbcb) main_mobtv_loading_pane_g1_ParamLimits

0xcfb5,	// (0x0007bbcb) main_mobtv_loading_pane_g1

0xcfc3,	// (0x0007bbd9) main_mobtv_loading_pane_g2_ParamLimits

0xcfc3,	// (0x0007bbd9) main_mobtv_loading_pane_g2

0xcfcf,	// (0x0007bbe5) main_mobtv_loading_pane_g3_ParamLimits

0xcfcf,	// (0x0007bbe5) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0007e868) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0007e868) main_mobtv_loading_pane_g

0x039e,	// (0x0006efb4) main_mobtv_loading_pane_t1_ParamLimits

0x039e,	// (0x0006efb4) main_mobtv_loading_pane_t1

0x03b6,	// (0x0006efcc) main_mobtv_loading_pane_t2_ParamLimits

0x03b6,	// (0x0006efcc) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0007e86f) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0007e86f) main_mobtv_loading_pane_t

0xcfdd,	// (0x0007bbf3) wait_bar_pane_cp06_ParamLimits

0xcfdd,	// (0x0007bbf3) wait_bar_pane_cp06

0x03da,	// (0x0006eff0) main_mobtv_programe_curr_pane_t1

0x03e8,	// (0x0006effe) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0007e874) main_mobtv_programe_curr_pane_t

0x03f6,	// (0x0006f00c) main_mobtv_programe_next_pane_t1

0x0404,	// (0x0006f01a) main_mobtv_programe_next_pane_t2

0x0412,	// (0x0006f028) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0007e879) main_mobtv_programe_next_pane_t

0xecc7,	// (0x0007d8dd) bg_popup_mobtv_noti_window_pane

0x0420,	// (0x0006f036) popup_mobtv_noti_window_g1

0x0428,	// (0x0006f03e) popup_mobtv_noti_window_t1

0x0436,	// (0x0006f04c) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0007e880) popup_mobtv_noti_window_t

0x375e,	// (0x00072374) bg_popup_mobtv_noti_window_pane_g1

0xecc7,	// (0x0007d8dd) sc_clock_pane

0xecc7,	// (0x0007d8dd) main_fs_bigclock_pane

0xc6a1,	// (0x0007b2b7) blid2_tripm_pane_t4_ParamLimits

0xc6a1,	// (0x0007b2b7) blid2_tripm_pane_t4

0xcfe9,	// (0x0007bbff) sc_clock_pane_g1_ParamLimits

0xcfe9,	// (0x0007bbff) sc_clock_pane_g1

0xcff7,	// (0x0007bc0d) sc_clock_pane_t1_ParamLimits

0xcff7,	// (0x0007bc0d) sc_clock_pane_t1

0xd00a,	// (0x0007bc20) sc_clock_pane_t2_ParamLimits

0xd00a,	// (0x0007bc20) sc_clock_pane_t2

0xd01c,	// (0x0007bc32) sc_clock_pane_t3_ParamLimits

0xd01c,	// (0x0007bc32) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0007e885) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0007e885) sc_clock_pane_t

0xd960,	// (0x0007c576) main_fs_bigclock_indicator_pane_ParamLimits

0xd960,	// (0x0007c576) main_fs_bigclock_indicator_pane

0xd0b7,	// (0x0007bccd) main_fs_bigclock_pane_g1_ParamLimits

0xd0b7,	// (0x0007bccd) main_fs_bigclock_pane_g1

0xd96c,	// (0x0007c582) main_fs_bigclock_pane_t1_ParamLimits

0xd96c,	// (0x0007c582) main_fs_bigclock_pane_t1

0xd97e,	// (0x0007c594) main_fs_bigclock_pane_t2_ParamLimits

0xd97e,	// (0x0007c594) main_fs_bigclock_pane_t2

0xd992,	// (0x0007c5a8) main_fs_bigclock_pane_t3_ParamLimits

0xd992,	// (0x0007c5a8) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007ea89) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007ea89) main_fs_bigclock_pane_t

0x0c26,	// (0x0006f83c) main_fs_bigclock_indicator_pane_g1

0x0102,	// (0x0006ed18) ncim_query_content_pane_g2_ParamLimits

0x0102,	// (0x0006ed18) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0007e812) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0007e812) ncim_query_content_pane_g

0xd030,	// (0x0007bc46) sc_clock_pane_t4_ParamLimits

0xd030,	// (0x0007bc46) sc_clock_pane_t4

0x333c,	// (0x00071f52) main_radioblah_pane

0x4163,	// (0x00072d79) cell_call4_button_pane_t1_copy1_ParamLimits

0x4163,	// (0x00072d79) cell_call4_button_pane_t1_copy1

0xccb7,	// (0x0007b8cd) main_ncimui_pane_t1_ParamLimits

0xccb7,	// (0x0007b8cd) main_ncimui_pane_t1

0xccd1,	// (0x0007b8e7) main_ncimui_pane_t2_ParamLimits

0xccd1,	// (0x0007b8e7) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0007e80b) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0007e80b) main_ncimui_pane_t

0x0570,	// (0x0006f186) main_radioblah_anim_pane_ParamLimits

0x0570,	// (0x0006f186) main_radioblah_anim_pane

0x0581,	// (0x0006f197) main_radioblah_info_pane_ParamLimits

0x0581,	// (0x0006f197) main_radioblah_info_pane

0x0595,	// (0x0006f1ab) main_radioblah_pane_t1_ParamLimits

0x0595,	// (0x0006f1ab) main_radioblah_pane_t1

0x05b1,	// (0x0006f1c7) main_radioblah_pane_t2_ParamLimits

0x05b1,	// (0x0006f1c7) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0007e8a6) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0007e8a6) main_radioblah_pane_t

0xd109,	// (0x0007bd1f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd109,	// (0x0007bd1f) main_radioblah_rocker_ctrl_pane

0x05f9,	// (0x0006f20f) main_radioblah_info_pane_t1_ParamLimits

0x05f9,	// (0x0006f20f) main_radioblah_info_pane_t1

0xd14e,	// (0x0007bd64) main_radioblah_info_pane_t2_ParamLimits

0xd14e,	// (0x0007bd64) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0007e8af) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0007e8af) main_radioblah_info_pane_t

0x375e,	// (0x00072374) main_radioblah_rocker_ctrl_pane_g1

0xd1fe,	// (0x0007be14) main_radioblah_rocker_ctrl_pane_g2

0xd206,	// (0x0007be1c) main_radioblah_rocker_ctrl_pane_g3

0xd20e,	// (0x0007be24) main_radioblah_rocker_ctrl_pane_g4

0xd216,	// (0x0007be2c) main_radioblah_rocker_ctrl_pane_g5

0xd21e,	// (0x0007be34) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0007e8b8) main_radioblah_rocker_ctrl_pane_g

0xcc5e,	// (0x0007b874) main_cset_text2_pane_t1_copy1_ParamLimits

0xb49e,	// (0x0007a0b4) cam4_image_uncrop_qvga_pane

0xb5e5,	// (0x0007a1fb) vid4_image_uncrop_qcif_pane

0xc82f,	// (0x0007b445) cam6_image_uncrop_qvga_pane_ParamLimits

0xc82f,	// (0x0007b445) cam6_image_uncrop_qvga_pane

0xe9d0,	// (0x0007d5e6) vid6_image_uncrop_qcif_pane_ParamLimits

0xe9d0,	// (0x0007d5e6) vid6_image_uncrop_qcif_pane

0xecc7,	// (0x0007d8dd) bg_popup_preview_window_pane_cp03

0xec6d,	// (0x0007d883) list_cset_text2_pane

0xec75,	// (0x0007d88b) main_cset6_text2_pane_g1

0xec7d,	// (0x0007d893) main_cset6_text2_pane_t1

0xd226,	// (0x0007be3c) list_cset_text2_pane_t1_ParamLimits

0xd226,	// (0x0007be3c) list_cset_text2_pane_t1

0x333c,	// (0x00071f52) main_radioblah_pane_ParamLimits

0xcf8f,	// (0x0007bba5) main_mobtv_info_pane_t3_ParamLimits

0xcf8f,	// (0x0007bba5) main_mobtv_info_pane_t3

0xd0f7,	// (0x0007bd0d) main_radioblah_pane_g1

0xd122,	// (0x0007bd38) main_radioblah_info_pane_g1

0xd1a3,	// (0x0007bdb9) main_radioblah_info_pane_t3_ParamLimits

0xd1a3,	// (0x0007bdb9) main_radioblah_info_pane_t3

0x8380,	// (0x00076f96) highlight_cell_cale_month_pane_ParamLimits

0x8380,	// (0x00076f96) highlight_cell_cale_month_pane

0xecc7,	// (0x0007d8dd) main_phob_fisheye_pane

0x3b0e,	// (0x00072724) scroll_pane_cp0031_ParamLimits

0x3b0e,	// (0x00072724) scroll_pane_cp0031

0xeade,	// (0x0007d6f4) wait_bar_pane_cp08_ParamLimits

0xca04,	// (0x0007b61a) cset_list_set_pane_copy1_ParamLimits

0x0633,	// (0x0006f249) highlight_cell_cale_month_pane_g1

0xd243,	// (0x0007be59) highlight_cell_cale_month_pane_t1

0xe754,	// (0x0007d36a) list_gen_pane_cp01

0xe3be,	// (0x0007cfd4) scroll_pane_01

0x57ce,	// (0x000743e4) list_single_double_fisheye_pane

0x57d7,	// (0x000743ed) list_double_fisheye_pane_g1_ParamLimits

0x57d7,	// (0x000743ed) list_double_fisheye_pane_g1

0x57e3,	// (0x000743f9) list_double_fisheye_pane_g2_ParamLimits

0x57e3,	// (0x000743f9) list_double_fisheye_pane_g2

0x57f7,	// (0x0007440d) list_double_fisheye_pane_g3_ParamLimits

0x57f7,	// (0x0007440d) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0007e8c5) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0007e8c5) list_double_fisheye_pane_g

0x5820,	// (0x00074436) list_double_fisheye_pane_t1_ParamLimits

0x5820,	// (0x00074436) list_double_fisheye_pane_t1

0x583b,	// (0x00074451) list_double_fisheye_pane_t2_ParamLimits

0x583b,	// (0x00074451) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0007e8d0) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0007e8d0) list_double_fisheye_pane_t

0xecc7,	// (0x0007d8dd) main_call5_pane

0xd056,	// (0x0007bc6c) sc_swipe_pane_ParamLimits

0xd056,	// (0x0007bc6c) sc_swipe_pane

0xd25d,	// (0x0007be73) call5_image_pane_ParamLimits

0xd25d,	// (0x0007be73) call5_image_pane

0xd26d,	// (0x0007be83) call5_swipe_1_pane_ParamLimits

0xd26d,	// (0x0007be83) call5_swipe_1_pane

0xd279,	// (0x0007be8f) call5_swipe_2_pane_ParamLimits

0xd279,	// (0x0007be8f) call5_swipe_2_pane

0xd293,	// (0x0007bea9) popup_call5_audio_first_window_ParamLimits

0xd293,	// (0x0007bea9) popup_call5_audio_first_window

0x39ca,	// (0x000725e0) call5_swipe_1_pane_g1_ParamLimits

0x39ca,	// (0x000725e0) call5_swipe_1_pane_g1

0x063b,	// (0x0006f251) call5_swipe_1_pane_g2_ParamLimits

0x063b,	// (0x0006f251) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0007e8d5) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0007e8d5) call5_swipe_1_pane_g

0x0647,	// (0x0006f25d) call5_swipe_1_pane_t1_ParamLimits

0x0647,	// (0x0006f25d) call5_swipe_1_pane_t1

0x39ca,	// (0x000725e0) call5_swipe_2_pane_g1_ParamLimits

0x39ca,	// (0x000725e0) call5_swipe_2_pane_g1

0x065c,	// (0x0006f272) call5_swipe_2_pane_g2_ParamLimits

0x065c,	// (0x0006f272) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0007e8da) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0007e8da) call5_swipe_2_pane_g

0x0668,	// (0x0006f27e) call5_swipe_2_pane_t1_ParamLimits

0x0668,	// (0x0006f27e) call5_swipe_2_pane_t1

0x067d,	// (0x0006f293) sc_swipe_pane_g1_ParamLimits

0x067d,	// (0x0006f293) sc_swipe_pane_g1

0x068a,	// (0x0006f2a0) sc_swipe_pane_g2_ParamLimits

0x068a,	// (0x0006f2a0) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0007e8df) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0007e8df) sc_swipe_pane_g

0x0696,	// (0x0006f2ac) sc_swipe_pane_t1_ParamLimits

0x0696,	// (0x0006f2ac) sc_swipe_pane_t1

0xecc7,	// (0x0007d8dd) main_cmail_launcher_pane

0xd2a1,	// (0x0007beb7) aid_size_cell_cmail_l_ParamLimits

0xd2a1,	// (0x0007beb7) aid_size_cell_cmail_l

0xd2b1,	// (0x0007bec7) grid_cmail_l_pane_ParamLimits

0xd2b1,	// (0x0007bec7) grid_cmail_l_pane

0xd2c1,	// (0x0007bed7) cell_cmail_l_pane_ParamLimits

0xd2c1,	// (0x0007bed7) cell_cmail_l_pane

0xd2d5,	// (0x0007beeb) cell_cmail_l_pane_g1_ParamLimits

0xd2d5,	// (0x0007beeb) cell_cmail_l_pane_g1

0xd2e1,	// (0x0007bef7) cell_cmail_l_pane_t1_ParamLimits

0xd2e1,	// (0x0007bef7) cell_cmail_l_pane_t1

0x06ab,	// (0x0006f2c1) cell_cmail_l_pane_t2_ParamLimits

0x06ab,	// (0x0006f2c1) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0007e8e4) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0007e8e4) cell_cmail_l_pane_t

0x333c,	// (0x00071f52) grid_highlight_pane_cp018_ParamLimits

0x333c,	// (0x00071f52) grid_highlight_pane_cp018

0x62e6,	// (0x00074efc) main2_pane_ParamLimits

0x62e6,	// (0x00074efc) main2_pane

0x1470,	// (0x00070086) popup_sp_fs_action_menu_bg_pane_g1

0x1478,	// (0x0007008e) popup_sp_fs_action_menu_bg_pane_g2

0x1480,	// (0x00070096) popup_sp_fs_action_menu_bg_pane_g3

0x1488,	// (0x0007009e) popup_sp_fs_action_menu_bg_pane_g4

0x1490,	// (0x000700a6) popup_sp_fs_action_menu_bg_pane_g5

0x1498,	// (0x000700ae) popup_sp_fs_action_menu_bg_pane_g6

0x14a0,	// (0x000700b6) popup_sp_fs_action_menu_bg_pane_g7

0x14a8,	// (0x000700be) popup_sp_fs_action_menu_bg_pane_g8

0x14b0,	// (0x000700c6) popup_sp_fs_action_menu_bg_pane_g9

0x14b8,	// (0x000700ce) popup_sp_fs_action_menu_bg_pane_g10

0x14b8,	// (0x000700ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0007dda9) popup_sp_fs_action_menu_bg_pane_g

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g3_g1

0x724e,	// (0x00075e64) list_medium_line_x2_t3_g3_g2_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_t3_g3_g2

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g3_g3_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0007de59) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0007de59) list_medium_line_x2_t3_g3_g

0x508b,	// (0x00073ca1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x508b,	// (0x00073ca1) list_medium_line_x2_t3_g3_t1

0x50a0,	// (0x00073cb6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x50a0,	// (0x00073cb6) list_medium_line_x2_t3_g3_t2

0x50b2,	// (0x00073cc8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0007de60) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0007de60) list_medium_line_x2_t3_g3_t

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g2_g1

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g2_g2_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0007de67) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0007de67) list_medium_line_x2_t3_g2_g

0x50c7,	// (0x00073cdd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x50c7,	// (0x00073cdd) list_medium_line_x2_t3_g2_t1

0x50dd,	// (0x00073cf3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x50dd,	// (0x00073cf3) list_medium_line_x2_t3_g2_t2

0x50ef,	// (0x00073d05) list_medium_line_x2_t3_g2_t3_ParamLimits

0x50ef,	// (0x00073d05) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0007de6c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0007de6c) list_medium_line_x2_t3_g2_t

0x5073,	// (0x00073c89) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t4_g4_g1

0x725a,	// (0x00075e70) list_medium_line_x2_t4_g4_g2_ParamLimits

0x725a,	// (0x00075e70) list_medium_line_x2_t4_g4_g2

0x724e,	// (0x00075e64) list_medium_line_x2_t4_g4_g3_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_t4_g4_g3

0x510c,	// (0x00073d22) list_medium_line_x2_t4_g4_g4_ParamLimits

0x510c,	// (0x00073d22) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0007de73) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0007de73) list_medium_line_x2_t4_g4_g

0x5118,	// (0x00073d2e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5118,	// (0x00073d2e) list_medium_line_x2_t4_g4_t1

0x5132,	// (0x00073d48) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5132,	// (0x00073d48) list_medium_line_x2_t4_g4_t2

0x5148,	// (0x00073d5e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5148,	// (0x00073d5e) list_medium_line_x2_t4_g4_t3

0x515d,	// (0x00073d73) list_medium_line_x2_t4_g4_t4_ParamLimits

0x515d,	// (0x00073d73) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0007de7c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0007de7c) list_medium_line_x2_t4_g4_t

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g4_g1

0x725a,	// (0x00075e70) list_medium_line_x2_t2_g4_g2_ParamLimits

0x725a,	// (0x00075e70) list_medium_line_x2_t2_g4_g2

0x724e,	// (0x00075e64) list_medium_line_x2_t2_g4_g3_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_t2_g4_g3

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g4_g4_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0007dee3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0007dee3) list_medium_line_x2_t2_g4_g

0x516f,	// (0x00073d85) list_medium_line_x2_t2_g4_t1_ParamLimits

0x516f,	// (0x00073d85) list_medium_line_x2_t2_g4_t1

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0007deec) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0007deec) list_medium_line_x2_t2_g4_t

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g3_g1

0x724e,	// (0x00075e64) list_medium_line_x2_t2_g3_g2_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_t2_g3_g2

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g3_g3_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0007de59) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0007de59) list_medium_line_x2_t2_g3_g

0x5184,	// (0x00073d9a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5184,	// (0x00073d9a) list_medium_line_x2_t2_g3_t1

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0007def1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0007def1) list_medium_line_x2_t2_g3_t

0x853e,	// (0x00077154) main_sp_fs_list_pane_ParamLimits

0x853e,	// (0x00077154) main_sp_fs_list_pane

0x854a,	// (0x00077160) sp_fs_scroll_pane_ParamLimits

0x854a,	// (0x00077160) sp_fs_scroll_pane

0x5199,	// (0x00073daf) list_medium_line_x2_t3_t1

0x51a9,	// (0x00073dbf) list_medium_line_x2_t3_t2

0x51b7,	// (0x00073dcd) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0007df3c) list_medium_line_x2_t3_t

0x51c5,	// (0x00073ddb) list_medium_line_x3_t4_t1

0x51d5,	// (0x00073deb) list_medium_line_x3_t4_t2

0x51e3,	// (0x00073df9) list_medium_line_x3_t4_t3

0x51b7,	// (0x00073dcd) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0007df43) list_medium_line_x3_t4_t

0x51f1,	// (0x00073e07) list_medium_line_x4_t5_t1

0x5201,	// (0x00073e17) list_medium_line_x4_t5_t2

0x51e3,	// (0x00073df9) list_medium_line_x4_t5_t3

0x520f,	// (0x00073e25) list_medium_line_x4_t5_t4

0x51b7,	// (0x00073dcd) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0007df4c) list_medium_line_x4_t5_t

0x5073,	// (0x00073c89) list_medium_line_t4_g4_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_t4_g4_g1

0x510c,	// (0x00073d22) list_medium_line_t4_g4_g2_ParamLimits

0x510c,	// (0x00073d22) list_medium_line_t4_g4_g2

0x521d,	// (0x00073e33) list_medium_line_t4_g4_g3_ParamLimits

0x521d,	// (0x00073e33) list_medium_line_t4_g4_g3

0x507f,	// (0x00073c95) list_medium_line_t4_g4_g4_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0007df57) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0007df57) list_medium_line_t4_g4_g

0x5229,	// (0x00073e3f) list_medium_line_t4_g4_t1_ParamLimits

0x5229,	// (0x00073e3f) list_medium_line_t4_g4_t1

0x523e,	// (0x00073e54) list_medium_line_t4_g4_t2_ParamLimits

0x523e,	// (0x00073e54) list_medium_line_t4_g4_t2

0x5253,	// (0x00073e69) list_medium_line_t4_g4_t3_ParamLimits

0x5253,	// (0x00073e69) list_medium_line_t4_g4_t3

0x50b2,	// (0x00073cc8) list_medium_line_t4_g4_t4_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0007df60) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0007df60) list_medium_line_t4_g4_t

0x8657,	// (0x0007726d) chi_dic_find_pane_g1

0x95c7,	// (0x000781dd) main_tport_pane

0x54a1,	// (0x000740b7) list_medium_line_plain_t1

0x54af,	// (0x000740c5) list_medium_line_t2_g2_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t2_g2_g1

0xc026,	// (0x0007ac3c) list_medium_line_t2_g2_g2_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0007e61c) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0007e61c) list_medium_line_t2_g2_g

0x54bb,	// (0x000740d1) list_medium_line_t2_g2_t1_ParamLimits

0x54bb,	// (0x000740d1) list_medium_line_t2_g2_t1

0x54d5,	// (0x000740eb) list_medium_line_t2_g2_t2_ParamLimits

0x54d5,	// (0x000740eb) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0007e621) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0007e621) list_medium_line_t2_g2_t

0x56f4,	// (0x0007430a) aid_sp_fs_list_icon_a_sm

0xc4f8,	// (0x0007b10e) aid_sp_fs_list_icon_d

0xe75d,	// (0x0007d373) aid_sp_fs_text_primary

0x56fc,	// (0x00074312) aid_sp_fs_text_secondary

0xc500,	// (0x0007b116) list_medium_line

0xc500,	// (0x0007b116) list_medium_line_g2

0xc500,	// (0x0007b116) list_medium_line_g3

0xc500,	// (0x0007b116) list_medium_line_plain

0xc500,	// (0x0007b116) list_medium_line_plain_t2

0xc500,	// (0x0007b116) list_medium_line_plain_t3

0xc500,	// (0x0007b116) list_medium_line_right_icon

0xc500,	// (0x0007b116) list_medium_line_right_iconx2

0xc500,	// (0x0007b116) list_medium_line_t2

0xc500,	// (0x0007b116) list_medium_line_t2_g2

0xc500,	// (0x0007b116) list_medium_line_t2_g3

0xc500,	// (0x0007b116) list_medium_line_t2_right_icon

0xc500,	// (0x0007b116) list_medium_line_t2_right_iconx2

0xc500,	// (0x0007b116) list_medium_line_t3

0xc500,	// (0x0007b116) list_medium_line_t3_g2

0xc500,	// (0x0007b116) list_medium_line_t3_g3

0xc500,	// (0x0007b116) list_medium_line_t3_right_iconx2

0xc509,	// (0x0007b11f) list_medium_line_t4_g4

0xe766,	// (0x0007d37c) list_medium_line_x2

0xe766,	// (0x0007d37c) list_medium_line_x2_t2_g2

0xe766,	// (0x0007d37c) list_medium_line_x2_t2_g3

0xe766,	// (0x0007d37c) list_medium_line_x2_t2_g4

0xe766,	// (0x0007d37c) list_medium_line_x2_t3

0xe766,	// (0x0007d37c) list_medium_line_x2_t3_g2

0xe766,	// (0x0007d37c) list_medium_line_x2_t3_g3

0xe766,	// (0x0007d37c) list_medium_line_x2_t3_g4

0xe766,	// (0x0007d37c) list_medium_line_x2_t4_g2

0xe766,	// (0x0007d37c) list_medium_line_x2_t4_g4

0xc512,	// (0x0007b128) list_medium_line_x3

0xc512,	// (0x0007b128) list_medium_line_x3_t4

0xc512,	// (0x0007b128) list_medium_line_x3_t4_g4

0xc509,	// (0x0007b11f) list_medium_line_x4_t4

0xc509,	// (0x0007b11f) list_medium_line_x4_t4_g7

0xc509,	// (0x0007b11f) list_medium_line_x4_t5

0x5705,	// (0x0007431b) list_single_fs_dyc_pane_ParamLimits

0x5705,	// (0x0007431b) list_single_fs_dyc_pane

0x5073,	// (0x00073c89) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x4_t4_g7_g1

0x5719,	// (0x0007432f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5719,	// (0x0007432f) list_medium_line_x4_t4_g7_g2

0xcc43,	// (0x0007b859) list_medium_line_x4_t4_g7_g3_ParamLimits

0xcc43,	// (0x0007b859) list_medium_line_x4_t4_g7_g3

0xcc52,	// (0x0007b868) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcc52,	// (0x0007b868) list_medium_line_x4_t4_g7_g4

0x5725,	// (0x0007433b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5725,	// (0x0007433b) list_medium_line_x4_t4_g7_g5

0x5734,	// (0x0007434a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5734,	// (0x0007434a) list_medium_line_x4_t4_g7_g6

0x5743,	// (0x00074359) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5743,	// (0x00074359) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0007e7ec) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0007e7ec) list_medium_line_x4_t4_g7_g

0x574f,	// (0x00074365) list_medium_line_x4_t4_g7_t1_ParamLimits

0x574f,	// (0x00074365) list_medium_line_x4_t4_g7_t1

0x5764,	// (0x0007437a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5764,	// (0x0007437a) list_medium_line_x4_t4_g7_t2

0x5779,	// (0x0007438f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5779,	// (0x0007438f) list_medium_line_x4_t4_g7_t3

0x578e,	// (0x000743a4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x578e,	// (0x000743a4) list_medium_line_x4_t4_g7_t4

0x57a0,	// (0x000743b6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x57a0,	// (0x000743b6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0007e7fb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0007e7fb) list_medium_line_x4_t4_g7_t

0x57b2,	// (0x000743c8) list_single_dyc_row_pane_ParamLimits

0x57b2,	// (0x000743c8) list_single_dyc_row_pane

0xd251,	// (0x0007be67) call5_gesture_pane_ParamLimits

0xd251,	// (0x0007be67) call5_gesture_pane

0xd285,	// (0x0007be9b) call5_windows_pane_ParamLimits

0xd285,	// (0x0007be9b) call5_windows_pane

0xd2f7,	// (0x0007bf0d) call5_swipe_1_pane_cp_ParamLimits

0xd2f7,	// (0x0007bf0d) call5_swipe_1_pane_cp

0xd303,	// (0x0007bf19) call5_swipe_2_pane_cp_ParamLimits

0xd303,	// (0x0007bf19) call5_swipe_2_pane_cp

0x1f01,	// (0x00070b17) call5_image_pane_cp

0xd30f,	// (0x0007bf25) popup_call5_audio_first_window_cp_ParamLimits

0xd30f,	// (0x0007bf25) popup_call5_audio_first_window_cp

0x067d,	// (0x0006f293) call5_swipe_1_pane_g1_cp_ParamLimits

0x067d,	// (0x0006f293) call5_swipe_1_pane_g1_cp

0x06bd,	// (0x0006f2d3) call5_swipe_1_pane_g2_cp

0x0696,	// (0x0006f2ac) call5_swipe_1_pane_t1_cp_ParamLimits

0x0696,	// (0x0006f2ac) call5_swipe_1_pane_t1_cp

0x067d,	// (0x0006f293) call5_swipe_2_pane_g1_cp_ParamLimits

0x067d,	// (0x0006f293) call5_swipe_2_pane_g1_cp

0x06c5,	// (0x0006f2db) call5_swipe_2_pane_g2_cp

0x06cd,	// (0x0006f2e3) call5_swipe_2_pane_t1_cp_ParamLimits

0x06cd,	// (0x0006f2e3) call5_swipe_2_pane_t1_cp

0x333c,	// (0x00071f52) main_sp_fs_email_pane

0x06e2,	// (0x0006f2f8) main_sp_fs_listscroll_pane_te

0xd31d,	// (0x0007bf33) popup_sp_fs_action_menu_pane_ParamLimits

0xd31d,	// (0x0007bf33) popup_sp_fs_action_menu_pane

0x375e,	// (0x00072374) bg_sp_fs_ctrlbar_pane_g1

0x06eb,	// (0x0006f301) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x06f4,	// (0x0006f30a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x06fd,	// (0x0006f313) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x375e,	// (0x00072374) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0007e8e9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3543,	// (0x00072159) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3543,	// (0x00072159) bg_sp_fs_ctrlbar_ddmenu_pane

0x0706,	// (0x0006f31c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0706,	// (0x0006f31c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0712,	// (0x0006f328) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0712,	// (0x0006f328) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0007e8f2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0007e8f2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x071e,	// (0x0006f334) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x071e,	// (0x0006f334) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd361,	// (0x0007bf77) list_medium_line_t2_right_icon_g1

0x585d,	// (0x00074473) list_medium_line_t2_right_icon_t1

0x586d,	// (0x00074483) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0007e8f7) list_medium_line_t2_right_icon_t

0x3356,	// (0x00071f6c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3356,	// (0x00071f6c) bg_sp_fs_ctrlbar_pane

0xd3c0,	// (0x0007bfd6) main_sp_fs_ctrlbar_button_pane_cp01

0xd3c8,	// (0x0007bfde) main_sp_fs_ctrlbar_ddmenu_pane

0x0770,	// (0x0006f386) main_sp_fs_ctrlbar_pane_g1

0x077c,	// (0x0006f392) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0007e8fc) main_sp_fs_ctrlbar_pane_g

0x0788,	// (0x0006f39e) main_sp_fs_ctrlbar_pane_t1

0xd3d2,	// (0x0007bfe8) main_sp_fs_ctrlbar_pane

0xd3e8,	// (0x0007bffe) main_sp_fs_listscroll_pane_te_cp01

0x587b,	// (0x00074491) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x587b,	// (0x00074491) popup_sp_fs_action_menu_pane_cp01

0x333c,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x333c,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp01

0x58a5,	// (0x000744bb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x58a5,	// (0x000744bb) sp_fs_action_menu_list_gene_pane_g1

0x07b8,	// (0x0006f3ce) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x07b8,	// (0x0006f3ce) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0007e906) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0007e906) sp_fs_action_menu_list_gene_pane_g

0x58b4,	// (0x000744ca) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x58b4,	// (0x000744ca) sp_fs_action_menu_list_gene_pane_t1

0x58cc,	// (0x000744e2) sp_fs_action_menu_list_gene_pane_ParamLimits

0x58cc,	// (0x000744e2) sp_fs_action_menu_list_gene_pane

0x07c5,	// (0x0006f3db) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x07c5,	// (0x0006f3db) popup_sp_fs_action_menu_bg_pane

0x58ed,	// (0x00074503) sp_fs_action_menu_list_pane_ParamLimits

0x58ed,	// (0x00074503) sp_fs_action_menu_list_pane

0xd3f9,	// (0x0007c00f) sp_fs_scroll_pane_cp01_ParamLimits

0xd3f9,	// (0x0007c00f) sp_fs_scroll_pane_cp01

0x590f,	// (0x00074525) list_medium_line_plain_t2_t1

0x591f,	// (0x00074535) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0007e90b) list_medium_line_plain_t2_t

0x592d,	// (0x00074543) list_medium_line_plain_t3_t1

0x593d,	// (0x00074553) list_medium_line_plain_t3_t2

0x594b,	// (0x00074561) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0007e910) list_medium_line_plain_t3_t

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t2_g2_g1

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g2_g2_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0007de67) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0007de67) list_medium_line_x2_t2_g2_g

0x5229,	// (0x00073e3f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x5229,	// (0x00073e3f) list_medium_line_x2_t2_g2_t1

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0007e917) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0007e917) list_medium_line_x2_t2_g2_t

0x5073,	// (0x00073c89) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t4_g2_g1

0x5959,	// (0x0007456f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5959,	// (0x0007456f) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0007e91c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0007e91c) list_medium_line_x2_t4_g2_g

0x596b,	// (0x00074581) list_medium_line_x2_t4_g2_t1_ParamLimits

0x596b,	// (0x00074581) list_medium_line_x2_t4_g2_t1

0x5982,	// (0x00074598) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5982,	// (0x00074598) list_medium_line_x2_t4_g2_t2

0x5997,	// (0x000745ad) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5997,	// (0x000745ad) list_medium_line_x2_t4_g2_t3

0x50b2,	// (0x00073cc8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0007e921) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0007e921) list_medium_line_x2_t4_g2_t

0xd41f,	// (0x0007c035) list_medium_line_t3_right_iconx2_g1

0xd361,	// (0x0007bf77) list_medium_line_t3_right_iconx2_g2

0x59a9,	// (0x000745bf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0007e92a) list_medium_line_t3_right_iconx2_g

0x59b1,	// (0x000745c7) list_medium_line_t3_right_iconx2_t1

0x59c1,	// (0x000745d7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0007e931) list_medium_line_t3_right_iconx2_t

0x5073,	// (0x00073c89) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x3_t4_g4_g1

0x724e,	// (0x00075e64) list_medium_line_x3_t4_g4_g2_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x3_t4_g4_g2

0x510c,	// (0x00073d22) list_medium_line_x3_t4_g4_g3_ParamLimits

0x510c,	// (0x00073d22) list_medium_line_x3_t4_g4_g3

0xd427,	// (0x0007c03d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd427,	// (0x0007c03d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0007e936) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0007e936) list_medium_line_x3_t4_g4_g

0x59cf,	// (0x000745e5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x59cf,	// (0x000745e5) list_medium_line_x3_t4_g4_t1

0x59e6,	// (0x000745fc) list_medium_line_x3_t4_g4_t2_ParamLimits

0x59e6,	// (0x000745fc) list_medium_line_x3_t4_g4_t2

0x523e,	// (0x00073e54) list_medium_line_x3_t4_g4_t3_ParamLimits

0x523e,	// (0x00073e54) list_medium_line_x3_t4_g4_t3

0x59fb,	// (0x00074611) list_medium_line_x3_t4_g4_t4_ParamLimits

0x59fb,	// (0x00074611) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0007e93f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0007e93f) list_medium_line_x3_t4_g4_t

0x5a18,	// (0x0007462e) list_single_dyc_row_text_pane_t1_ParamLimits

0x5a18,	// (0x0007462e) list_single_dyc_row_text_pane_t1

0x5a4f,	// (0x00074665) list_single_dyc_row_text_pane_t2_ParamLimits

0x5a4f,	// (0x00074665) list_single_dyc_row_text_pane_t2

0x5aa9,	// (0x000746bf) list_single_dyc_row_text_pane_t3_ParamLimits

0x5aa9,	// (0x000746bf) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0007e948) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0007e948) list_single_dyc_row_text_pane_t

0x5abb,	// (0x000746d1) list_single_dyc_row_pane_g1_ParamLimits

0x5abb,	// (0x000746d1) list_single_dyc_row_pane_g1

0x5ac7,	// (0x000746dd) list_single_dyc_row_pane_g2_ParamLimits

0x5ac7,	// (0x000746dd) list_single_dyc_row_pane_g2

0x5ad3,	// (0x000746e9) list_single_dyc_row_pane_g3_ParamLimits

0x5ad3,	// (0x000746e9) list_single_dyc_row_pane_g3

0x5adf,	// (0x000746f5) list_single_dyc_row_pane_g4_ParamLimits

0x5adf,	// (0x000746f5) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007e94f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007e94f) list_single_dyc_row_pane_g

0x5aeb,	// (0x00074701) list_single_dyc_row_text_pane_ParamLimits

0x5aeb,	// (0x00074701) list_single_dyc_row_text_pane

0xecc7,	// (0x0007d8dd) bg_sp_fs_scroll_pane

0x07d3,	// (0x0006f3e9) thumb_sp_fs_scroll_pane

0x54af,	// (0x000740c5) list_medium_line_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_g1

0x5b0a,	// (0x00074720) list_medium_line_t1_ParamLimits

0x5b0a,	// (0x00074720) list_medium_line_t1

0x5073,	// (0x00073c89) list_medium_line_x2_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_g1

0x724e,	// (0x00075e64) list_medium_line_x2_g2_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007e958) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007e958) list_medium_line_x2_g

0x5b1f,	// (0x00074735) list_medium_line_x2_t1_ParamLimits

0x5b1f,	// (0x00074735) list_medium_line_x2_t1

0x5073,	// (0x00073c89) list_medium_line_x3_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x3_g1

0x724e,	// (0x00075e64) list_medium_line_x3_g2_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007e958) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007e958) list_medium_line_x3_g

0x5b1f,	// (0x00074735) list_medium_line_x3_t1_ParamLimits

0x5b1f,	// (0x00074735) list_medium_line_x3_t1

0x07dc,	// (0x0006f3f2) thumb_sp_fs_scroll_pane_g1

0x07e5,	// (0x0006f3fb) thumb_sp_fs_scroll_pane_g2

0x07ee,	// (0x0006f404) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007e95d) thumb_sp_fs_scroll_pane_g

0x07dc,	// (0x0006f3f2) bg_sp_fs_scroll_pane_g1

0x07e5,	// (0x0006f3fb) bg_sp_fs_scroll_pane_g2

0x07ee,	// (0x0006f404) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007e95d) bg_sp_fs_scroll_pane_g

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5073,	// (0x00073c89) list_medium_line_x2_t3_g4_g1

0x725a,	// (0x00075e70) list_medium_line_x2_t3_g4_g2_ParamLimits

0x725a,	// (0x00075e70) list_medium_line_x2_t3_g4_g2

0x724e,	// (0x00075e64) list_medium_line_x2_t3_g4_g3_ParamLimits

0x724e,	// (0x00075e64) list_medium_line_x2_t3_g4_g3

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g4_g4_ParamLimits

0x507f,	// (0x00073c95) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0007dee3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0007dee3) list_medium_line_x2_t3_g4_g

0x5b35,	// (0x0007474b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5b35,	// (0x0007474b) list_medium_line_x2_t3_g4_t1

0x5b4b,	// (0x00074761) list_medium_line_x2_t3_g4_t2_ParamLimits

0x5b4b,	// (0x00074761) list_medium_line_x2_t3_g4_t2

0x50b2,	// (0x00073cc8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x50b2,	// (0x00073cc8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007e964) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007e964) list_medium_line_x2_t3_g4_t

0x54af,	// (0x000740c5) list_medium_line_g2_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_g2_g1

0xc026,	// (0x0007ac3c) list_medium_line_g2_g2_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0007e61c) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0007e61c) list_medium_line_g2_g

0x5b65,	// (0x0007477b) list_medium_line_g2_t1_ParamLimits

0x5b65,	// (0x0007477b) list_medium_line_g2_t1

0x54af,	// (0x000740c5) list_medium_line_t3_g2_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t3_g2_g1

0xc026,	// (0x0007ac3c) list_medium_line_t3_g2_g2_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0007e61c) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0007e61c) list_medium_line_t3_g2_g

0x5b7a,	// (0x00074790) list_medium_line_t3_g2_t1_ParamLimits

0x5b7a,	// (0x00074790) list_medium_line_t3_g2_t1

0x5b91,	// (0x000747a7) list_medium_line_t3_g2_t2_ParamLimits

0x5b91,	// (0x000747a7) list_medium_line_t3_g2_t2

0x5ba6,	// (0x000747bc) list_medium_line_t3_g2_t3_ParamLimits

0x5ba6,	// (0x000747bc) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007e96b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007e96b) list_medium_line_t3_g2_t

0xd361,	// (0x0007bf77) list_medium_line_right_icon_g1

0x5bbb,	// (0x000747d1) list_medium_line_right_icon_t1

0x54af,	// (0x000740c5) list_medium_line_t2_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t2_g1

0x5bc9,	// (0x000747df) list_medium_line_t2_t1_ParamLimits

0x5bc9,	// (0x000747df) list_medium_line_t2_t1

0x5be3,	// (0x000747f9) list_medium_line_t2_t2_ParamLimits

0x5be3,	// (0x000747f9) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007e972) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007e972) list_medium_line_t2_t

0x54af,	// (0x000740c5) list_medium_line_t3_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t3_g1

0x5bf8,	// (0x0007480e) list_medium_line_t3_t1_ParamLimits

0x5bf8,	// (0x0007480e) list_medium_line_t3_t1

0x5c0f,	// (0x00074825) list_medium_line_t3_t2_ParamLimits

0x5c0f,	// (0x00074825) list_medium_line_t3_t2

0x5c24,	// (0x0007483a) list_medium_line_t3_t3_ParamLimits

0x5c24,	// (0x0007483a) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007e977) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007e977) list_medium_line_t3_t

0x54af,	// (0x000740c5) list_medium_line_g3_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_g3_g1

0xd433,	// (0x0007c049) list_medium_line_g3_g2_ParamLimits

0xd433,	// (0x0007c049) list_medium_line_g3_g2

0xc026,	// (0x0007ac3c) list_medium_line_g3_g3_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007e97e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007e97e) list_medium_line_g3_g

0x5c36,	// (0x0007484c) list_medium_line_g3_t1_ParamLimits

0x5c36,	// (0x0007484c) list_medium_line_g3_t1

0x54af,	// (0x000740c5) list_medium_line_t2_g3_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t2_g3_g1

0xd433,	// (0x0007c049) list_medium_line_t2_g3_g2_ParamLimits

0xd433,	// (0x0007c049) list_medium_line_t2_g3_g2

0xc026,	// (0x0007ac3c) list_medium_line_t2_g3_g3_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007e97e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007e97e) list_medium_line_t2_g3_g

0x5c4b,	// (0x00074861) list_medium_line_t2_g3_t1_ParamLimits

0x5c4b,	// (0x00074861) list_medium_line_t2_g3_t1

0x5c65,	// (0x0007487b) list_medium_line_t2_g3_t2_ParamLimits

0x5c65,	// (0x0007487b) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007e985) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007e985) list_medium_line_t2_g3_t

0x54af,	// (0x000740c5) list_medium_line_t3_g3_g1_ParamLimits

0x54af,	// (0x000740c5) list_medium_line_t3_g3_g1

0xd433,	// (0x0007c049) list_medium_line_t3_g3_g2_ParamLimits

0xd433,	// (0x0007c049) list_medium_line_t3_g3_g2

0xc026,	// (0x0007ac3c) list_medium_line_t3_g3_g3_ParamLimits

0xc026,	// (0x0007ac3c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007e97e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007e97e) list_medium_line_t3_g3_g

0x5c7a,	// (0x00074890) list_medium_line_t3_g3_t1_ParamLimits

0x5c7a,	// (0x00074890) list_medium_line_t3_g3_t1

0x5c8e,	// (0x000748a4) list_medium_line_t3_g3_t2_ParamLimits

0x5c8e,	// (0x000748a4) list_medium_line_t3_g3_t2

0x5ca0,	// (0x000748b6) list_medium_line_t3_g3_t3_ParamLimits

0x5ca0,	// (0x000748b6) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007e98a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007e98a) list_medium_line_t3_g3_t

0xd41f,	// (0x0007c035) list_medium_line_right_iconx2_g1

0xd361,	// (0x0007bf77) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007e991) list_medium_line_right_iconx2_g

0xd43f,	// (0x0007c055) list_medium_line_right_iconx2_t1

0xd41f,	// (0x0007c035) list_medium_line_t2_right_iconx2_g1

0xd361,	// (0x0007bf77) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007e991) list_medium_line_t2_right_iconx2_g

0x5cb2,	// (0x000748c8) list_medium_line_t2_right_iconx2_t1

0x5cc2,	// (0x000748d8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007e996) list_medium_line_t2_right_iconx2_t

0x5cd0,	// (0x000748e6) list_medium_line_x4_t4_t1

0x5cde,	// (0x000748f4) list_medium_line_x4_t4_t2

0x5cee,	// (0x00074904) list_medium_line_x4_t4_t3

0x5cfe,	// (0x00074914) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007e99b) list_medium_line_x4_t4_t

0xd477,	// (0x0007c08d) tport_appsw_pane_ParamLimits

0xd477,	// (0x0007c08d) tport_appsw_pane

0xd485,	// (0x0007c09b) tport_contact_pane_ParamLimits

0xd485,	// (0x0007c09b) tport_contact_pane

0xd495,	// (0x0007c0ab) tport_listscroll_pane_ParamLimits

0xd495,	// (0x0007c0ab) tport_listscroll_pane

0xd4a5,	// (0x0007c0bb) cell_tport_appsw_pane_ParamLimits

0xd4a5,	// (0x0007c0bb) cell_tport_appsw_pane

0x3a97,	// (0x000726ad) tport_appsw_pane_g1_ParamLimits

0x3a97,	// (0x000726ad) tport_appsw_pane_g1

0x07f7,	// (0x0006f40d) tport_contact_pane_g1

0x0188,	// (0x0006ed9e) tport_contact_pane_t1

0x0800,	// (0x0006f416) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007e9a4) tport_contact_pane_t

0x080e,	// (0x0006f424) list_tport_pane

0x0817,	// (0x0006f42d) scroll_pane_cp_030

0xd4d8,	// (0x0007c0ee) cell_tport_appsw_pane_g1

0xd4e8,	// (0x0007c0fe) cell_tport_appsw_pane_t1

0xecc7,	// (0x0007d8dd) grid_highlight_pane_cp019

0xd4f6,	// (0x0007c10c) list_tport_double_graphic_pane_ParamLimits

0xd4f6,	// (0x0007c10c) list_tport_double_graphic_pane

0x333c,	// (0x00071f52) list_highlight_pane_cp023_ParamLimits

0x333c,	// (0x00071f52) list_highlight_pane_cp023

0xd507,	// (0x0007c11d) list_tport_double_graphic_pane_g1_ParamLimits

0xd507,	// (0x0007c11d) list_tport_double_graphic_pane_g1

0xd514,	// (0x0007c12a) list_tport_double_graphic_pane_t1_ParamLimits

0xd514,	// (0x0007c12a) list_tport_double_graphic_pane_t1

0xd529,	// (0x0007c13f) list_tport_double_graphic_pane_t2_ParamLimits

0xd529,	// (0x0007c13f) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007e9b0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007e9b0) list_tport_double_graphic_pane_t

0xecc7,	// (0x0007d8dd) main_cale_note_pane

0xb83c,	// (0x0007a452) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb83c,	// (0x0007a452) cell_vitu2_function_top_wide_pane_cp01

0xcfa3,	// (0x0007bbb9) wait_bar_pane_cp05_ParamLimits

0x333c,	// (0x00071f52) listscroll_cmail_pane

0x0820,	// (0x0006f436) list_cmail_pane

0xd53b,	// (0x0007c151) list_cmail_body_pane

0xd55b,	// (0x0007c171) list_single_cmail_header_caption_pane

0xd586,	// (0x0007c19c) list_single_cmail_header_detail_pane_ParamLimits

0xd586,	// (0x0007c19c) list_single_cmail_header_detail_pane

0x0830,	// (0x0006f446) list_single_cmail_header_caption_pane_t1

0x5d0e,	// (0x00074924) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5d0e,	// (0x00074924) list_single_cmail_header_detail_pane_g1

0xd5c5,	// (0x0007c1db) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd5c5,	// (0x0007c1db) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007e9b5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007e9b5) list_single_cmail_header_detail_pane_g

0x5d24,	// (0x0007493a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5d24,	// (0x0007493a) list_single_cmail_header_detail_pane_t1

0x5d84,	// (0x0007499a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5d84,	// (0x0007499a) list_single_cmail_header_editor_pane_bg

0x0337,	// (0x0006ef4d) list_cmail_body_pane_g1

0x084b,	// (0x0006f461) list_cmail_body_pane_t1

0xe2a4,	// (0x0007ceba) list_single_cmail_header_editor_pane_bg_g1

0x17f8,	// (0x0007040e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe2b4,	// (0x0007ceca) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe2ac,	// (0x0007cec2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe4e3,	// (0x0007d0f9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe2d4,	// (0x0007ceea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe2c4,	// (0x0007ceda) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe2cc,	// (0x0007cee2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x17d8,	// (0x000703ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd5d1,	// (0x0007c1e7) calenote_gesture_pane_ParamLimits

0xd5d1,	// (0x0007c1e7) calenote_gesture_pane

0xd5eb,	// (0x0007c201) calenote_window_pane_ParamLimits

0xd5eb,	// (0x0007c201) calenote_window_pane

0x0859,	// (0x0006f46f) popup_note_window_cp01

0xd603,	// (0x0007c219) calenote_swipe_1_pane_ParamLimits

0xd603,	// (0x0007c219) calenote_swipe_1_pane

0xd303,	// (0x0007bf19) calenote_swipe_2_pane_ParamLimits

0xd303,	// (0x0007bf19) calenote_swipe_2_pane

0x067d,	// (0x0006f293) calenote_swipe_1_pane_g1_ParamLimits

0x067d,	// (0x0006f293) calenote_swipe_1_pane_g1

0x068a,	// (0x0006f2a0) calenote_swipe_1_pane_g2_ParamLimits

0x068a,	// (0x0006f2a0) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0007e8df) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0007e8df) calenote_swipe_1_pane_g

0x086b,	// (0x0006f481) calenote_swipe_1_pane_t1_ParamLimits

0x086b,	// (0x0006f481) calenote_swipe_1_pane_t1

0x067d,	// (0x0006f293) calenote_swipe_2_pane_g1_ParamLimits

0x067d,	// (0x0006f293) calenote_swipe_2_pane_g1

0x088a,	// (0x0006f4a0) calenote_swipe_2_pane_g2_ParamLimits

0x088a,	// (0x0006f4a0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007e9c1) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007e9c1) calenote_swipe_2_pane_g

0x0896,	// (0x0006f4ac) calenote_swipe_2_pane_t1_ParamLimits

0x0896,	// (0x0006f4ac) calenote_swipe_2_pane_t1

0xecc7,	// (0x0007d8dd) main_mup_navstr_pane

0xa5c1,	// (0x000791d7) main_mup3_pane_t7_ParamLimits

0xa5c1,	// (0x000791d7) main_mup3_pane_t7

0xafc6,	// (0x00079bdc) main_mp4_pane_g6_ParamLimits

0xafc6,	// (0x00079bdc) main_mp4_pane_g6

0xb338,	// (0x00079f4e) main_image3_pane_t4_ParamLimits

0xb338,	// (0x00079f4e) main_image3_pane_t4

0xd616,	// (0x0007c22c) popup_navstr_preview_pane_ParamLimits

0xd616,	// (0x0007c22c) popup_navstr_preview_pane

0xd622,	// (0x0007c238) scroll_navstr_pane_ParamLimits

0xd622,	// (0x0007c238) scroll_navstr_pane

0xecc7,	// (0x0007d8dd) bg_popup_preview_window_pane_cp04

0x08bd,	// (0x0006f4d3) popup_navstr_preview_pane_t1

0xd62e,	// (0x0007c244) scroll_navstr_pane_g1_ParamLimits

0xd62e,	// (0x0007c244) scroll_navstr_pane_g1

0xd63b,	// (0x0007c251) scroll_navstr_pane_t1_ParamLimits

0xd63b,	// (0x0007c251) scroll_navstr_pane_t1

0x0862,	// (0x0006f478) bg_button_pane_cp014

0x0862,	// (0x0006f478) bg_button_pane_cp030

0x5803,	// (0x00074419) list_double_fisheye_pane_g4_ParamLimits

0x5803,	// (0x00074419) list_double_fisheye_pane_g4

0x580f,	// (0x00074425) list_double_fisheye_pane_g5_ParamLimits

0x580f,	// (0x00074425) list_double_fisheye_pane_g5

0xf0b5,	// (0x0007dccb) sp_fs_scroll_pane_cp03

0x0770,	// (0x0006f386) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x077c,	// (0x0006f392) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0007e8fc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x0788,	// (0x0006f39e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0828,	// (0x0006f43e) sp_fs_scroll_pane_cp02

0x14db,	// (0x000700f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x14db,	// (0x000700f1) popup_sp_fs_calendar_preview_list_single_pane

0xecc7,	// (0x0007d8dd) main_cam6_pano_pane

0x333c,	// (0x00071f52) main_mup3_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_phacti_pane

0xce78,	// (0x0007ba8e) bg_button_pane_cp11

0xce90,	// (0x0007baa6) main_mobtv_info_pane_g2_ParamLimits

0xce90,	// (0x0007baa6) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0007e85c) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0007e85c) main_mobtv_info_pane_g

0xd042,	// (0x0007bc58) sc_clock_pane_t5_ParamLimits

0xd042,	// (0x0007bc58) sc_clock_pane_t5

0xd0f7,	// (0x0007bd0d) main_radioblah_pane_g1_ParamLimits

0x05c9,	// (0x0006f1df) main_radioblah_pane_t3_ParamLimits

0x05c9,	// (0x0006f1df) main_radioblah_pane_t3

0x05e1,	// (0x0006f1f7) main_radioblah_pane_t4_ParamLimits

0x05e1,	// (0x0006f1f7) main_radioblah_pane_t4

0xd115,	// (0x0007bd2b) main_radioblah_text_pane_ParamLimits

0xd115,	// (0x0007bd2b) main_radioblah_text_pane

0xd122,	// (0x0007bd38) main_radioblah_info_pane_g1_ParamLimits

0xd1b7,	// (0x0007bdcd) main_radioblah_info_pane_t4_ParamLimits

0xd1b7,	// (0x0007bdcd) main_radioblah_info_pane_t4

0x333c,	// (0x00071f52) main_sp_fs_calendar_pane

0xd64d,	// (0x0007c263) main_phacti_pane_g1

0xd655,	// (0x0007c26b) phacti_note_pane_ParamLimits

0xd655,	// (0x0007c26b) phacti_note_pane

0x08d4,	// (0x0006f4ea) phacti_term_pane_ParamLimits

0x08d4,	// (0x0006f4ea) phacti_term_pane

0x08e9,	// (0x0006f4ff) phacti_note_pane_t1_ParamLimits

0x08e9,	// (0x0006f4ff) phacti_note_pane_t1

0x5d9b,	// (0x000749b1) phacti_term_pane_g1

0x5da3,	// (0x000749b9) phacti_term_pane_t1_ParamLimits

0x5da3,	// (0x000749b9) phacti_term_pane_t1

0x0900,	// (0x0006f516) popup_sp_fs_calendar_preview_list_single_pane_g1

0x15f9,	// (0x0007020f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007e9cb) popup_sp_fs_calendar_preview_list_single_pane_g

0x0908,	// (0x0006f51e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0908,	// (0x0006f51e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x091d,	// (0x0006f533) aid_popup_sp_fs_bg_corner_pane

0x375e,	// (0x00072374) popup_sp_fs_calendar_preview_bg_pane_g1

0xecc7,	// (0x0007d8dd) popup_sp_fs_calendar_preview_bg_pane

0x0925,	// (0x0006f53b) popup_sp_fs_calendar_preview_list_pane

0x3356,	// (0x00071f6c) bg_main_sp_fs_cale_pane_ParamLimits

0x3356,	// (0x00071f6c) bg_main_sp_fs_cale_pane

0x5dcd,	// (0x000749e3) listscroll_cale_mrui_pane_ParamLimits

0x5dcd,	// (0x000749e3) listscroll_cale_mrui_pane

0x5de2,	// (0x000749f8) listscroll_sp_fs_schedule_track_pane

0x5deb,	// (0x00074a01) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5deb,	// (0x00074a01) main_sp_fs_ctrlbar_pane_cp01

0x092d,	// (0x0006f543) main_sp_fs_ribbon_pane

0x5dfe,	// (0x00074a14) popup_sp_fs_cale_preview_window

0xd6c1,	// (0x0007c2d7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd6c1,	// (0x0007c2d7) list_single_sp_fs_schedule_track_pane

0x102f,	// (0x0006fc45) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x102f,	// (0x0006fc45) bg_sp_fs_highlight_list_pane_cp03

0xd6e3,	// (0x0007c2f9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd6e3,	// (0x0007c2f9) list_single_sp_fs_schedule_track_pane_g1

0xd6ef,	// (0x0007c305) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd6ef,	// (0x0007c305) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007e9d0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007e9d0) list_single_sp_fs_schedule_track_pane_g

0xd6fb,	// (0x0007c311) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd6fb,	// (0x0007c311) list_single_sp_fs_schedule_track_pane_t1

0xd713,	// (0x0007c329) sp_fs_schedule_track_pane_ParamLimits

0xd713,	// (0x0007c329) sp_fs_schedule_track_pane

0x0935,	// (0x0006f54b) sp_fs_schedule_track_pane_g1

0x093d,	// (0x0006f553) sp_fs_schedule_track_pane_g2

0x0945,	// (0x0006f55b) sp_fs_schedule_track_pane_g3

0x094d,	// (0x0006f563) sp_fs_schedule_track_pane_g4

0x0955,	// (0x0006f56b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007e9d5) sp_fs_schedule_track_pane_g

0xe2a4,	// (0x0007ceba) bg_sp_fs_schedule_viewer_highlight_g1

0x17f8,	// (0x0007040e) bg_sp_fs_schedule_viewer_highlight_g2

0xe2ac,	// (0x0007cec2) bg_sp_fs_schedule_viewer_highlight_g3

0xe2b4,	// (0x0007ceca) bg_sp_fs_schedule_viewer_highlight_g4

0xe4e3,	// (0x0007d0f9) bg_sp_fs_schedule_viewer_highlight_g5

0xe2c4,	// (0x0007ceda) bg_sp_fs_schedule_viewer_highlight_g6

0xe2cc,	// (0x0007cee2) bg_sp_fs_schedule_viewer_highlight_g7

0xe2d4,	// (0x0007ceea) bg_sp_fs_schedule_viewer_highlight_g8

0x17d8,	// (0x000703ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007e9e0) bg_sp_fs_schedule_viewer_highlight_g

0xecc7,	// (0x0007d8dd) bg_main_sp_fs_ribbon_pane

0xd723,	// (0x0007c339) main_sp_fs_ribbon_pane_g1

0x095d,	// (0x0006f573) main_sp_fs_ribbon_pane_t1

0xd72c,	// (0x0007c342) main_sp_fs_ribbon_pane_t2

0x096c,	// (0x0006f582) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007e9f3) main_sp_fs_ribbon_pane_t

0x097b,	// (0x0006f591) main_sp_fs_ribbon_scheduler_pane

0x0983,	// (0x0006f599) bg_main_sp_fs_ribbon_pane_g1

0x098c,	// (0x0006f5a2) bg_main_sp_fs_ribbon_pane_g2

0x0995,	// (0x0006f5ab) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007e9fa) bg_main_sp_fs_ribbon_pane_g

0x099d,	// (0x0006f5b3) main_sp_fs_ribbon_scheduler_pane_g1

0x09a6,	// (0x0006f5bc) main_sp_fs_ribbon_scheduler_pane_g2

0x09af,	// (0x0006f5c5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007ea01) main_sp_fs_ribbon_scheduler_pane_g

0x09b8,	// (0x0006f5ce) list_cale_mrui_pane

0xd73b,	// (0x0007c351) sp_fs_scroll_pane_cp07_ParamLimits

0xd73b,	// (0x0007c351) sp_fs_scroll_pane_cp07

0xd757,	// (0x0007c36d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd757,	// (0x0007c36d) bg_sp_fs_schedule_viewer_highlight

0x09c5,	// (0x0006f5db) list_single_sp_fs_schedule_track_pane_cp01

0x09cd,	// (0x0006f5e3) list_sp_fs_schedule_track_pane

0x09d5,	// (0x0006f5eb) sp_fs_scroll_pane_cp06_ParamLimits

0x09d5,	// (0x0006f5eb) sp_fs_scroll_pane_cp06

0x375e,	// (0x00072374) bgmain_sp_fs_calendar_pane_g1

0x5e10,	// (0x00074a26) list_single_cale_mrui_pane_ParamLimits

0x5e10,	// (0x00074a26) list_single_cale_mrui_pane

0x5e3d,	// (0x00074a53) list_single_cale_mrui_row_pane_ParamLimits

0x5e3d,	// (0x00074a53) list_single_cale_mrui_row_pane

0x5e4a,	// (0x00074a60) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5e4a,	// (0x00074a60) list_single_cale_mrui_row_pane_g1

0x5e82,	// (0x00074a98) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5e82,	// (0x00074a98) list_single_cale_mrui_row_pane_t1

0x5e94,	// (0x00074aaa) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5e94,	// (0x00074aaa) list_single_cale_mrui_row_pane_t2

0x5efa,	// (0x00074b10) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5efa,	// (0x00074b10) list_single_cale_mrui_row_pane_t3

0x5f29,	// (0x00074b3f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5f29,	// (0x00074b3f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007ea0f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007ea0f) list_single_cale_mrui_row_pane_t

0x5f58,	// (0x00074b6e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5f58,	// (0x00074b6e) list_single_cmail_header_editor_pane_bg_cp01

0x5f78,	// (0x00074b8e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5f78,	// (0x00074b8e) list_single_cmail_header_editor_pane_bg_cp02

0xd764,	// (0x0007c37a) main_radioblah_text_pane_t1_ParamLimits

0xd764,	// (0x0007c37a) main_radioblah_text_pane_t1

0x09f4,	// (0x0006f60a) cam6_indi_pane_cp01

0x09fc,	// (0x0006f612) cam6_mode_pane_cp01

0x0a04,	// (0x0006f61a) cam6_pano_pane

0x0a0d,	// (0x0006f623) cam6_zoom_pane_cp01

0x0a15,	// (0x0006f62b) cam6_pano_image_pane

0x0a20,	// (0x0006f636) cam6_pano_pane_g1

0x0337,	// (0x0006ef4d) cam6_pano_pane_g2

0x0a29,	// (0x0006f63f) cam6_pano_pane_g3

0x0a32,	// (0x0006f648) cam6_pano_pane_g4

0x3d72,	// (0x00072988) cam6_pano_pane_g5

0x0a3b,	// (0x0006f651) cam6_pano_pane_g6

0x0a45,	// (0x0006f65b) cam6_pano_pane_g7

0x0a4d,	// (0x0006f663) cam6_pano_pane_g8

0x0a56,	// (0x0006f66c) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007ea18) cam6_pano_pane_g

0xecc7,	// (0x0007d8dd) main_browser_tag_pane

0x08b5,	// (0x0006f4cb) grid_navstr_albumart_pane

0x0a61,	// (0x0006f677) cell_navstr_albumart_pane_ParamLimits

0x0a61,	// (0x0006f677) cell_navstr_albumart_pane

0x0a81,	// (0x0006f697) cell_navstr_albumart_pane_g1

0x3159,	// (0x00071d6f) cell_navstr_albumart_pane_g2

0x3169,	// (0x00071d7f) cell_navstr_albumart_pane_g3

0x3161,	// (0x00071d77) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007ea2b) cell_navstr_albumart_pane_g

0xd77f,	// (0x0007c395) bt_list_pane_ParamLimits

0xd77f,	// (0x0007c395) bt_list_pane

0xd79f,	// (0x0007c3b5) bt_list_pane_t1

0xd7ae,	// (0x0007c3c4) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007ea34) bt_list_pane_t

0xecc7,	// (0x0007d8dd) main_cale_prevew_pane

0xd7bd,	// (0x0007c3d3) popup_cale_preview_window_ParamLimits

0xd7bd,	// (0x0007c3d3) popup_cale_preview_window

0x333c,	// (0x00071f52) bg_popup_preview_window_pane_cp05_ParamLimits

0x333c,	// (0x00071f52) bg_popup_preview_window_pane_cp05

0x0a89,	// (0x0006f69f) list_cale_preview_pane_ParamLimits

0x0a89,	// (0x0006f69f) list_cale_preview_pane

0xd7d6,	// (0x0007c3ec) list_double_cale_preview_pane_ParamLimits

0xd7d6,	// (0x0007c3ec) list_double_cale_preview_pane

0xd7e8,	// (0x0007c3fe) list_single_cale_preview_pane_ParamLimits

0xd7e8,	// (0x0007c3fe) list_single_cale_preview_pane

0xd7fe,	// (0x0007c414) list_single_cale_preview_pane_g1

0xd806,	// (0x0007c41c) list_single_cale_preview_pane_t1_ParamLimits

0xd806,	// (0x0007c41c) list_single_cale_preview_pane_t1

0xd81b,	// (0x0007c431) list_double_cale_preview_pane_g1

0xd823,	// (0x0007c439) list_double_cale_preview_pane_t1_ParamLimits

0xd823,	// (0x0007c439) list_double_cale_preview_pane_t1

0xd838,	// (0x0007c44e) list_double_cale_preview_pane_t2_ParamLimits

0xd838,	// (0x0007c44e) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007ea39) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007ea39) list_double_cale_preview_pane_t

0xecc7,	// (0x0007d8dd) main_ezdial_pane

0x333c,	// (0x00071f52) main_sp_fs_email_pane_ParamLimits

0xd369,	// (0x0007bf7f) cmail_ddmenu_btn01_pane_ParamLimits

0xd369,	// (0x0007bf7f) cmail_ddmenu_btn01_pane

0xd386,	// (0x0007bf9c) cmail_ddmenu_btn02_pane_ParamLimits

0xd386,	// (0x0007bf9c) cmail_ddmenu_btn02_pane

0xd3a4,	// (0x0007bfba) cmail_ddmenu_btn03_pane_ParamLimits

0xd3a4,	// (0x0007bfba) cmail_ddmenu_btn03_pane

0xd3d2,	// (0x0007bfe8) main_sp_fs_ctrlbar_pane_ParamLimits

0xd3e8,	// (0x0007bffe) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd53b,	// (0x0007c151) list_cmail_body_pane_ParamLimits

0xd5bc,	// (0x0007c1d2) bg_button_pane_cp12

0x083e,	// (0x0006f454) list_single_cmail_header_detail_pane_g3_ParamLimits

0x083e,	// (0x0006f454) list_single_cmail_header_detail_pane_g3

0x5d60,	// (0x00074976) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5d60,	// (0x00074976) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007e9bc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007e9bc) list_single_cmail_header_detail_pane_t

0x5db8,	// (0x000749ce) phacti_term_pane_t2_ParamLimits

0x5db8,	// (0x000749ce) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007e9c6) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007e9c6) phacti_term_pane_t

0x0a95,	// (0x0006f6ab) aid_size_list_single_double

0xd850,	// (0x0007c466) popup_ezdial_listscroll_window

0xd871,	// (0x0007c487) popup_number_entry_window_cp01

0x1f01,	// (0x00070b17) bg_popup_call_pane_cp09

0x0aa1,	// (0x0006f6b7) ezdial_list_pane

0x0aa9,	// (0x0006f6bf) scroll_pane_cp23

0x3543,	// (0x00072159) bg_button_pane_cp028_ParamLimits

0x3543,	// (0x00072159) bg_button_pane_cp028

0xd87f,	// (0x0007c495) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd87f,	// (0x0007c495) cmail_ddmenu_btn01_pane_g1

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007ea3e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007ea3e) cmail_ddmenu_btn01_pane_g

0x0ab1,	// (0x0006f6c7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0ab1,	// (0x0006f6c7) cmail_ddmenu_btn01_pane_t1

0x3356,	// (0x00071f6c) bg_button_pane_cp029_ParamLimits

0x3356,	// (0x00071f6c) bg_button_pane_cp029

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn02_pane_g1

0xd8a9,	// (0x0007c4bf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd8a9,	// (0x0007c4bf) cmail_ddmenu_btn02_pane_t1

0x102f,	// (0x0006fc45) bg_button_pane_cp031_ParamLimits

0x102f,	// (0x0006fc45) bg_button_pane_cp031

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd891,	// (0x0007c4a7) cmail_ddmenu_btn03_pane_g1

0xd8a9,	// (0x0007c4bf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd8a9,	// (0x0007c4bf) cmail_ddmenu_btn03_pane_t1

0xb1e3,	// (0x00079df9) cell_dialer2_keypad_pane_t1_ParamLimits

0xb1fd,	// (0x00079e13) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb1fd,	// (0x00079e13) cell_dialer2_keypad_pane_t1_copy1

0xccfd,	// (0x0007b913) ncimui_group_button_pane

0x333c,	// (0x00071f52) main_sp_fs_calendar_pane_ParamLimits

0xd55b,	// (0x0007c171) list_single_cmail_header_caption_pane_ParamLimits

0xd689,	// (0x0007c29f) aid_recal_txt_sm_pane

0xecc7,	// (0x0007d8dd) mian_recal_day_pane

0x5dfe,	// (0x00074a14) popup_sp_fs_cale_preview_window_ParamLimits

0x0ac6,	// (0x0006f6dc) list_recal_day_pane

0x5fb0,	// (0x00074bc6) list_single_recal_day_pane_ParamLimits

0x5fb0,	// (0x00074bc6) list_single_recal_day_pane

0x0aed,	// (0x0006f703) list_single_recal_day_pane_g1_ParamLimits

0x0aed,	// (0x0006f703) list_single_recal_day_pane_g1

0x5fc2,	// (0x00074bd8) list_single_recal_day_pane_g2_ParamLimits

0x5fc2,	// (0x00074bd8) list_single_recal_day_pane_g2

0x5fd2,	// (0x00074be8) list_single_recal_day_pane_g3_ParamLimits

0x5fd2,	// (0x00074be8) list_single_recal_day_pane_g3

0x5fde,	// (0x00074bf4) list_single_recal_day_pane_g4_ParamLimits

0x5fde,	// (0x00074bf4) list_single_recal_day_pane_g4

0x5ff4,	// (0x00074c0a) list_single_recal_day_pane_g5_ParamLimits

0x5ff4,	// (0x00074c0a) list_single_recal_day_pane_g5

0x600e,	// (0x00074c24) list_single_recal_day_pane_g6_ParamLimits

0x600e,	// (0x00074c24) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007ea4d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007ea4d) list_single_recal_day_pane_g

0x6022,	// (0x00074c38) list_single_recal_day_pane_t1

0x6034,	// (0x00074c4a) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007ea58) list_single_recal_day_pane_t

0xd8cd,	// (0x0007c4e3) ncimui_query_button_pane_ParamLimits

0xd8cd,	// (0x0007c4e3) ncimui_query_button_pane

0xd8dd,	// (0x0007c4f3) ncimui_query_button_pane_t1_ParamLimits

0xd8dd,	// (0x0007c4f3) ncimui_query_button_pane_t1

0x0af9,	// (0x0006f70f) ncimui_query_button_pane_t2_ParamLimits

0x0af9,	// (0x0006f70f) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007ea5d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007ea5d) ncimui_query_button_pane_t

0xd8f0,	// (0x0007c506) query_button_pane_ParamLimits

0xd8f0,	// (0x0007c506) query_button_pane

0xecc7,	// (0x0007d8dd) bg_button_pane_cp0028

0x0b0c,	// (0x0006f722) query_button_pane_t1

0x95c7,	// (0x000781dd) main_tport_pane_ParamLimits

0xd44d,	// (0x0007c063) bg_popup_window_pane_cp01_ParamLimits

0xd44d,	// (0x0007c063) bg_popup_window_pane_cp01

0xd45b,	// (0x0007c071) heading_pane_cp08_ParamLimits

0xd45b,	// (0x0007c071) heading_pane_cp08

0xd469,	// (0x0007c07f) heading_pane_cp07_ParamLimits

0xd469,	// (0x0007c07f) heading_pane_cp07

0xd4d8,	// (0x0007c0ee) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007e9a9) cell_tport_appsw_pane_g

0x5286,	// (0x00073e9c) input_candi_list_open_g1

0x19bb,	// (0x000705d1) list_cale_time_pane_g6_ParamLimits

0x19bb,	// (0x000705d1) list_cale_time_pane_g6

0xa046,	// (0x00078c5c) aid_size_touch_calib_1_ParamLimits

0xa046,	// (0x00078c5c) aid_size_touch_calib_1

0xa052,	// (0x00078c68) aid_size_touch_calib_2_ParamLimits

0xa052,	// (0x00078c68) aid_size_touch_calib_2

0xa060,	// (0x00078c76) aid_size_touch_calib_3_ParamLimits

0xa060,	// (0x00078c76) aid_size_touch_calib_3

0xa070,	// (0x00078c86) aid_size_touch_calib_4_ParamLimits

0xa070,	// (0x00078c86) aid_size_touch_calib_4

0xa07e,	// (0x00078c94) main_touch_calib_button_group_pane_ParamLimits

0xa07e,	// (0x00078c94) main_touch_calib_button_group_pane

0xa08c,	// (0x00078ca2) main_touch_calib_pane_g1_ParamLimits

0xa098,	// (0x00078cae) main_touch_calib_pane_g2_ParamLimits

0xa0a4,	// (0x00078cba) main_touch_calib_pane_g3_ParamLimits

0xa0b0,	// (0x00078cc6) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0007e372) main_touch_calib_pane_g_ParamLimits

0xa0bc,	// (0x00078cd2) main_touch_calib_pane_t1_ParamLimits

0xa0d5,	// (0x00078ceb) main_touch_calib_pane_t2_ParamLimits

0xa0ee,	// (0x00078d04) main_touch_calib_pane_t3_ParamLimits

0xa104,	// (0x00078d1a) main_touch_calib_pane_t4_ParamLimits

0xa11a,	// (0x00078d30) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0007e37b) main_touch_calib_pane_t_ParamLimits

0x3b32,	// (0x00072748) list_single_fp_cale_pane_g3_ParamLimits

0x3b32,	// (0x00072748) list_single_fp_cale_pane_g3

0x333c,	// (0x00071f52) bg_button_pane_cp012_ParamLimits

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp03_ParamLimits

0xbfab,	// (0x0007abc1) cell_vitu2_function_top_pane_g1_ParamLimits

0x333c,	// (0x00071f52) bg_vkb2_func_pane_cp04_ParamLimits

0xcc85,	// (0x0007b89b) main_ncimui_button_group_pane_ParamLimits

0xcc85,	// (0x0007b89b) main_ncimui_button_group_pane

0xcceb,	// (0x0007b901) main_ncimui_pane_t3_ParamLimits

0xcceb,	// (0x0007b901) main_ncimui_pane_t3

0x08cb,	// (0x0006f4e1) phacti_button_group_pane

0x0a95,	// (0x0006f6ab) aid_size_list_single_double_ParamLimits

0xd850,	// (0x0007c466) popup_ezdial_listscroll_window_ParamLimits

0xd871,	// (0x0007c487) popup_number_entry_window_cp01_ParamLimits

0xd8fd,	// (0x0007c513) phacti_button_pane_ParamLimits

0xd8fd,	// (0x0007c513) phacti_button_pane

0xecc7,	// (0x0007d8dd) bg_button_pane_cp14

0x0b1a,	// (0x0006f730) phacti_button_pane_t1

0xd90e,	// (0x0007c524) main_touch_calib_button_pane_ParamLimits

0xd90e,	// (0x0007c524) main_touch_calib_button_pane

0x13d7,	// (0x0006ffed) bg_button_pane_cp18_ParamLimits

0x13d7,	// (0x0006ffed) bg_button_pane_cp18

0x0b28,	// (0x0006f73e) main_touch_calib_button_pane_t1_ParamLimits

0x0b28,	// (0x0006f73e) main_touch_calib_button_pane_t1

0x0b3e,	// (0x0006f754) main_touch_calib_button_pane_t2_ParamLimits

0x0b3e,	// (0x0006f754) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007ea62) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007ea62) main_touch_calib_button_pane_t

0xecc7,	// (0x0007d8dd) cell_ncimui_button_pane

0xecc7,	// (0x0007d8dd) bg_button_pane_cp032

0x0b5c,	// (0x0006f772) cell_ncimui_button_pane_t1

0xb259,	// (0x00079e6f) image3_infobar_pane_ParamLimits

0xb259,	// (0x00079e6f) image3_infobar_pane

0xd064,	// (0x0007bc7a) fs_bigclock_status_pane_ParamLimits

0xd064,	// (0x0007bc7a) fs_bigclock_status_pane

0xd071,	// (0x0007bc87) main_fs_bigclock_clock_pane_ParamLimits

0xd071,	// (0x0007bc87) main_fs_bigclock_clock_pane

0xd095,	// (0x0007bcab) main_fs_bigclock_indi_pane_ParamLimits

0xd095,	// (0x0007bcab) main_fs_bigclock_indi_pane

0xd0c5,	// (0x0007bcdb) main_fs_bigclock_swipe_pane_ParamLimits

0xd0c5,	// (0x0007bcdb) main_fs_bigclock_swipe_pane

0xecc7,	// (0x0007d8dd) main_fs_clock_dumped_data

0x0444,	// (0x0006f05a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0444,	// (0x0006f05a) list_single_fs_bigclock_indicator_pane_g1

0x045e,	// (0x0006f074) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x045e,	// (0x0006f074) list_single_fs_bigclock_indicator_pane_g2

0x0478,	// (0x0006f08e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0478,	// (0x0006f08e) list_single_fs_bigclock_indicator_pane_g3

0x0492,	// (0x0006f0a8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0492,	// (0x0006f0a8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0007e890) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0007e890) list_single_fs_bigclock_indicator_pane_g

0x04bb,	// (0x0006f0d1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x04bb,	// (0x0006f0d1) list_single_fs_bigclock_indicator_pane_t1

0x04e3,	// (0x0006f0f9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x04e3,	// (0x0006f0f9) list_single_fs_bigclock_indicator_pane_t2

0x050b,	// (0x0006f121) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x050b,	// (0x0006f121) list_single_fs_bigclock_indicator_pane_t3

0x0533,	// (0x0006f149) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0533,	// (0x0006f149) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0007e89b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0007e89b) list_single_fs_bigclock_indicator_pane_t

0x0b6a,	// (0x0006f780) image3_infobar_fav_pane_ParamLimits

0x0b6a,	// (0x0006f780) image3_infobar_fav_pane

0x0b7a,	// (0x0006f790) image3_infobar_loc_pane_ParamLimits

0x0b7a,	// (0x0006f790) image3_infobar_loc_pane

0x0b8e,	// (0x0006f7a4) image3_infobar_time_pane_ParamLimits

0x0b8e,	// (0x0006f7a4) image3_infobar_time_pane

0x375e,	// (0x00072374) image3_infobar_time_pane_g1

0x0b9e,	// (0x0006f7b4) image3_infobar_time_pane_t1

0x375e,	// (0x00072374) image3_infobar_loc_pane_g1

0x0bac,	// (0x0006f7c2) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007ea67) image3_infobar_loc_pane_g

0x0bb4,	// (0x0006f7ca) image3_infobar_loc_pane_t1

0x375e,	// (0x00072374) image3_infobar_fav_pane_g1

0x0bc2,	// (0x0006f7d8) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007ea6c) image3_infobar_fav_pane_g

0x0bca,	// (0x0006f7e0) fs_bigclock_status_battery_pane

0x0bd3,	// (0x0006f7e9) fs_bigclock_status_signal_pane

0x0bdc,	// (0x0006f7f2) fs_bigclock_status_title_pane

0x0be5,	// (0x0006f7fb) fs_bigclock_status_signal_pane_g1

0x0bee,	// (0x0006f804) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007ea71) fs_bigclock_status_signal_pane_g

0x0bf6,	// (0x0006f80c) fs_bigclock_status_battery_pane_g1

0x0bff,	// (0x0006f815) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007ea76) fs_bigclock_status_battery_pane_g

0x0c07,	// (0x0006f81d) fs_bigclock_status_title_pane_t1

0x375e,	// (0x00072374) main_fs_bigclock_clock_pane_g1

0xd91e,	// (0x0007c534) main_fs_bigclock_clock_pane_g2

0xd91e,	// (0x0007c534) main_fs_bigclock_clock_pane_g3

0xd91e,	// (0x0007c534) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007ea7b) main_fs_bigclock_clock_pane_g

0xd926,	// (0x0007c53c) main_fs_bigclock_clock_pane_t1

0xd934,	// (0x0007c54a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007ea84) main_fs_bigclock_clock_pane_t

0x0c15,	// (0x0006f82b) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0c15,	// (0x0006f82b) list_single_fs_bigclock_indicator_pane

0xd943,	// (0x0007c559) list_single_fs_bigclock_pane_ParamLimits

0xd943,	// (0x0007c559) list_single_fs_bigclock_pane

0x0c2f,	// (0x0006f845) main_fs_bigclock_indicator_pane_t1

0x0c3e,	// (0x0006f854) list_single_fs_bigclock_pane_g1

0x0c46,	// (0x0006f85c) list_single_fs_bigclock_pane_t1

0x375e,	// (0x00072374) main_fs_bigclock_swipe_pane_g1

0x0c89,	// (0x0006f89f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007ea95) main_fs_bigclock_swipe_pane_g

0x0c91,	// (0x0006f8a7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0c91,	// (0x0006f8a7) main_fs_bigclock_swipe_pane_t1

0x8556,	// (0x0007716c) call_type_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_btmg_pane

0x5e76,	// (0x00074a8c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5e76,	// (0x00074a8c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007ea08) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007ea08) list_single_cale_mrui_row_pane_g

0x5f9e,	// (0x00074bb4) list_recal_vselct_arw_lo_pane

0x0ae5,	// (0x0006f6fb) list_recal_vselct_arw_up_pane

0x5fa6,	// (0x00074bbc) list_recal_vselct_pane

0xd9a4,	// (0x0007c5ba) btmg_button_pane

0xd9b0,	// (0x0007c5c6) main_btmg_pane_g1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp044

0x0cae,	// (0x0006f8c4) btmg_button_pane_t1

0x3334,	// (0x00071f4a) aid_listscroll_gen

0x333c,	// (0x00071f52) main_cntbar_detail_pane

0x0820,	// (0x0006f436) list_cmail_folder_pane

0xf0b5,	// (0x0007dccb) sp_fs_scroll_pane_cp03_ParamLimits

0x6046,	// (0x00074c5c) list_single_fs_dyc_pane_cp01_ParamLimits

0x6046,	// (0x00074c5c) list_single_fs_dyc_pane_cp01

0x0cbc,	// (0x0006f8d2) aid_size_cmail_indent

0x606b,	// (0x00074c81) list_single_dyc_row_pane_cp01

0xd9d8,	// (0x0007c5ee) cntbar_detail_list_pane_ParamLimits

0xd9d8,	// (0x0007c5ee) cntbar_detail_list_pane

0xda12,	// (0x0007c628) main_cntbar_detail_cont_pane_ParamLimits

0xda12,	// (0x0007c628) main_cntbar_detail_cont_pane

0x854a,	// (0x00077160) scroll_pane_cp032_ParamLimits

0x854a,	// (0x00077160) scroll_pane_cp032

0xda1e,	// (0x0007c634) cntbar_detail_list_event_pane_ParamLimits

0xda1e,	// (0x0007c634) cntbar_detail_list_event_pane

0xd9e4,	// (0x0007c5fa) cntbar_detail_list_shct_pane

0x1846,	// (0x0007045c) aid_list_gen

0x0cc5,	// (0x0006f8db) aid_scroll

0x0cce,	// (0x0006f8e4) aid_size_touch_scroll_bar

0xe766,	// (0x0007d37c) aid_list_double

0xda32,	// (0x0007c648) aid_list_single

0xc500,	// (0x0007b116) aid_list_single_lg

0x6074,	// (0x00074c8a) aid_list_z_g_a_sm

0xda3b,	// (0x0007c651) aid_list_z_g_d

0x607c,	// (0x00074c92) aid_txt_z_prm

0x608a,	// (0x00074ca0) aid_txt_z_prm_cp01

0x6098,	// (0x00074cae) aid_txt_z_sec

0xda43,	// (0x0007c659) main_cntbar_detail_cont_pane_g1_ParamLimits

0xda43,	// (0x0007c659) main_cntbar_detail_cont_pane_g1

0xda50,	// (0x0007c666) main_cntbar_detail_cont_pane_g2_ParamLimits

0xda50,	// (0x0007c666) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007ea9a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007ea9a) main_cntbar_detail_cont_pane_g

0x0cd7,	// (0x0006f8ed) main_cntbar_detail_cont_pane_t1

0x0ce5,	// (0x0006f8fb) main_cntbar_detail_cont_pane_t2

0x0cf3,	// (0x0006f909) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007ea9f) main_cntbar_detail_cont_pane_t

0xda5c,	// (0x0007c672) cell_cntbar_detail_list_shct_pane_ParamLimits

0xda5c,	// (0x0007c672) cell_cntbar_detail_list_shct_pane

0x0d01,	// (0x0006f917) cntbar_detail_list_shct_pane_g1

0x0d0a,	// (0x0006f920) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007eaa6) cntbar_detail_list_shct_pane_g

0xda70,	// (0x0007c686) cntbar_detail_list_event_pane_g1_ParamLimits

0xda70,	// (0x0007c686) cntbar_detail_list_event_pane_g1

0xda7c,	// (0x0007c692) cntbar_detail_list_event_pane_g2_ParamLimits

0xda7c,	// (0x0007c692) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007eaab) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007eaab) cntbar_detail_list_event_pane_g

0xdae8,	// (0x0007c6fe) cntbar_detail_list_event_pane_t1_ParamLimits

0xdae8,	// (0x0007c6fe) cntbar_detail_list_event_pane_t1

0xdafd,	// (0x0007c713) cntbar_detail_list_event_pane_t2_ParamLimits

0xdafd,	// (0x0007c713) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007eab8) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007eab8) cntbar_detail_list_event_pane_t

0x375e,	// (0x00072374) cell_cntbar_detail_list_shct_pane_g1

0x88f6,	// (0x0007750c) navi_pane_mv_g3

0x333c,	// (0x00071f52) main_cntbar_detail_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_notif_wgt_pane

0xaf0d,	// (0x00079b23) aid_tch_main_mp4_pane_g4

0xb142,	// (0x00079d58) popup_slider_window_cp02

0x5f94,	// (0x00074baa) list_recal_day_event_pane

0xd9b8,	// (0x0007c5ce) cntbar_detail_btn_pane_ParamLimits

0xd9b8,	// (0x0007c5ce) cntbar_detail_btn_pane

0xd9c8,	// (0x0007c5de) cntbar_detail_btn_pane_cp01_ParamLimits

0xd9c8,	// (0x0007c5de) cntbar_detail_btn_pane_cp01

0xd9e4,	// (0x0007c5fa) cntbar_detail_list_shct_pane_ParamLimits

0xd9f0,	// (0x0007c606) cntbar_detail_pane_g1_ParamLimits

0xd9f0,	// (0x0007c606) cntbar_detail_pane_g1

0xd9fc,	// (0x0007c612) cntbar_detail_pane_t1_ParamLimits

0xd9fc,	// (0x0007c612) cntbar_detail_pane_t1

0xda88,	// (0x0007c69e) cntbar_detail_list_event_pane_g3_ParamLimits

0xda88,	// (0x0007c69e) cntbar_detail_list_event_pane_g3

0xdaa0,	// (0x0007c6b6) cntbar_detail_list_event_pane_g4_ParamLimits

0xdaa0,	// (0x0007c6b6) cntbar_detail_list_event_pane_g4

0xdab8,	// (0x0007c6ce) cntbar_detail_list_event_pane_g5_ParamLimits

0xdab8,	// (0x0007c6ce) cntbar_detail_list_event_pane_g5

0xdad0,	// (0x0007c6e6) cntbar_detail_list_event_pane_g6_ParamLimits

0xdad0,	// (0x0007c6e6) cntbar_detail_list_event_pane_g6

0xdb12,	// (0x0007c728) cntbar_detail_list_event_pane_t3_ParamLimits

0xdb12,	// (0x0007c728) cntbar_detail_list_event_pane_t3

0xdb24,	// (0x0007c73a) popup_notif_wgt_window_ParamLimits

0xdb24,	// (0x0007c73a) popup_notif_wgt_window

0xdb34,	// (0x0007c74a) popup_submenu_window_cp01_ParamLimits

0xdb34,	// (0x0007c74a) popup_submenu_window_cp01

0x1f01,	// (0x00070b17) bg_popup_window_pane_cp10

0x0d13,	// (0x0006f929) listscroll_notif_wgt_pane

0x0d25,	// (0x0006f93b) list_notif_wgt_window

0x0d2e,	// (0x0006f944) scroll_pane_cp033

0xdb46,	// (0x0007c75c) list_notif_wgt_row_pane_ParamLimits

0xdb46,	// (0x0007c75c) list_notif_wgt_row_pane

0x0d37,	// (0x0006f94d) aid_size_list_notif_wgt_del

0x0d44,	// (0x0006f95a) list_notif_wgt_row_pane_g1

0x0d50,	// (0x0006f966) list_notif_wgt_row_pane_g2

0x0d5c,	// (0x0006f972) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007eabf) list_notif_wgt_row_pane_g

0x0d69,	// (0x0006f97f) list_notif_wgt_row_pane_t1

0x0d7e,	// (0x0006f994) list_notif_wgt_row_pane_t2

0x0d90,	// (0x0006f9a6) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007eac6) list_notif_wgt_row_pane_t

0xe4eb,	// (0x0007d101) list_recal_day_event_pane_g1

0x0da2,	// (0x0006f9b8) list_recal_day_event_pane_t1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp045

0xdb57,	// (0x0007c76d) cntbar_detail_btn_pane_t1

0x3356,	// (0x00071f6c) main_callh_pane_ParamLimits

0x3356,	// (0x00071f6c) main_callh_pane

0xecc7,	// (0x0007d8dd) main_coverflow0_pane

0xecc7,	// (0x0007d8dd) main_wgtman_pane

0xd0dd,	// (0x0007bcf3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd0dd,	// (0x0007bcf3) main_fs_bigclock_unlock_btn_pane

0xd4d0,	// (0x0007c0e6) bg_button_pane_cp16

0xd4e0,	// (0x0007c0f6) cell_tport_appsw_pane_g3

0xdb65,	// (0x0007c77b) cf0_flow_pane_ParamLimits

0xdb65,	// (0x0007c77b) cf0_flow_pane

0x0db1,	// (0x0006f9c7) listscroll_cf0_pane

0x0dbc,	// (0x0006f9d2) main_cf0_pane_g1

0xdb74,	// (0x0007c78a) main_cf0_pane_t1_ParamLimits

0xdb74,	// (0x0007c78a) main_cf0_pane_t1

0xdb88,	// (0x0007c79e) main_cf0_pane_t2_ParamLimits

0xdb88,	// (0x0007c79e) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007ead2) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007ead2) main_cf0_pane_t

0x0dce,	// (0x0006f9e4) scroll_pane_cp11

0xdb9c,	// (0x0007c7b2) cf0_flow_pane_g1

0xdba4,	// (0x0007c7ba) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007ead7) cf0_flow_pane_g

0xdbac,	// (0x0007c7c2) cf0_flow_pane_t1

0xecc7,	// (0x0007d8dd) main_call6_pane

0xecc7,	// (0x0007d8dd) main_calllock_pane

0xdbba,	// (0x0007c7d0) call6_btn_grp_pane_ParamLimits

0xdbba,	// (0x0007c7d0) call6_btn_grp_pane

0xdbc9,	// (0x0007c7df) call6_pane_g1_ParamLimits

0xdbc9,	// (0x0007c7df) call6_pane_g1

0xdbd8,	// (0x0007c7ee) popup_call6_1st_window_ParamLimits

0xdbd8,	// (0x0007c7ee) popup_call6_1st_window

0xdbe6,	// (0x0007c7fc) popup_call6_2nd_window_ParamLimits

0xdbe6,	// (0x0007c7fc) popup_call6_2nd_window

0xdbf4,	// (0x0007c80a) cell_call6_btn_pane_ParamLimits

0xdbf4,	// (0x0007c80a) cell_call6_btn_pane

0x1f01,	// (0x00070b17) bg_popup_call2_in_pane_cp03

0x0dd9,	// (0x0006f9ef) popup_call6_1st_window_g1

0x0de1,	// (0x0006f9f7) popup_call6_1st_window_g2

0x0de9,	// (0x0006f9ff) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007eadc) popup_call6_1st_window_g

0x0df1,	// (0x0006fa07) popup_call6_1st_window_t1

0x0e00,	// (0x0006fa16) popup_call6_1st_window_t2

0x0e10,	// (0x0006fa26) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007eae3) popup_call6_1st_window_t

0x1f01,	// (0x00070b17) bg_popup_call2_in_pane_cp04

0x0dd9,	// (0x0006f9ef) popup_call6_2nd_window_g1

0x0de1,	// (0x0006f9f7) popup_call6_2nd_window_g2

0x0de9,	// (0x0006f9ff) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007eadc) popup_call6_2nd_window_g

0x0df1,	// (0x0006fa07) popup_call6_2nd_window_t1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp15

0x0e20,	// (0x0006fa36) cell_call6_btn_pane_g1

0x0e29,	// (0x0006fa3f) cell_call6_btn_pane_t1

0xdc03,	// (0x0007c819) listscroll_wgtman_pane_ParamLimits

0xdc03,	// (0x0007c819) listscroll_wgtman_pane

0xdc21,	// (0x0007c837) wgtman_btn_pane_ParamLimits

0xdc21,	// (0x0007c837) wgtman_btn_pane

0x1db8,	// (0x000709ce) aid_scroll_copy1

0x0e38,	// (0x0006fa4e) list_wgtman_pane

0xdc56,	// (0x0007c86c) wgtman_btn_pane_g1_ParamLimits

0xdc56,	// (0x0007c86c) wgtman_btn_pane_g1

0xdc7e,	// (0x0007c894) wgtman_btn_pane_t1_ParamLimits

0xdc7e,	// (0x0007c894) wgtman_btn_pane_t1

0x0e42,	// (0x0006fa58) wgtman_btn_pane_t2_ParamLimits

0x0e42,	// (0x0006fa58) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007eaea) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007eaea) wgtman_btn_pane_t

0xdcb5,	// (0x0007c8cb) listrow_wgtman_pane_ParamLimits

0xdcb5,	// (0x0007c8cb) listrow_wgtman_pane

0xdccd,	// (0x0007c8e3) listrow_wgtman_pane_g1

0xdcda,	// (0x0007c8f0) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007eaef) listrow_wgtman_pane_g

0x60a6,	// (0x00074cbc) listrow_wgtman_pane_t1

0x60be,	// (0x00074cd4) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007eaf4) listrow_wgtman_pane_t

0x60e4,	// (0x00074cfa) wait_bar_pane_cp09

0x0e59,	// (0x0006fa6f) main_calllock_btn_pane

0x0e63,	// (0x0006fa79) main_calllock_pane_g1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp17

0x0e6f,	// (0x0006fa85) main_calllock_btn_pane_g1

0x0e78,	// (0x0006fa8e) main_calllock_btn_pane_t1

0xecc7,	// (0x0007d8dd) main_dialer3_pane

0xecc7,	// (0x0007d8dd) main_fmrd2_pane

0x375e,	// (0x00072374) main_fs_bigclock_unlock_btn_pane_g1

0x0e8f,	// (0x0006faa5) main_fs_bigclock_unlock_btn_pane_t1

0xdcf8,	// (0x0007c90e) area_fmrd2_info_pane_ParamLimits

0xdcf8,	// (0x0007c90e) area_fmrd2_info_pane

0xdd06,	// (0x0007c91c) area_fmrd2_visual_pane_ParamLimits

0xdd06,	// (0x0007c91c) area_fmrd2_visual_pane

0xdd14,	// (0x0007c92a) fmrd2_indi_pane_ParamLimits

0xdd14,	// (0x0007c92a) fmrd2_indi_pane

0xdd21,	// (0x0007c937) area_fmrd2_visual_pane_g1

0xdd29,	// (0x0007c93f) area_fmrd2_visual_pane_t1

0xdd39,	// (0x0007c94f) area_fmrd2_visual_pane_t2

0xdd49,	// (0x0007c95f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007eafe) area_fmrd2_visual_pane_t

0xdd59,	// (0x0007c96f) area_fmrd2_info_pane_g1

0xdd61,	// (0x0007c977) area_fmrd2_info_pane_t1

0xdd71,	// (0x0007c987) area_fmrd2_info_pane_t2

0xdd81,	// (0x0007c997) area_fmrd2_info_pane_t3

0xdd91,	// (0x0007c9a7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007eb05) area_fmrd2_info_pane_t

0xdd9f,	// (0x0007c9b5) fmrd2_indi_pane_t1

0xddaf,	// (0x0007c9c5) fmrd2_indi_pane_t2

0xddbf,	// (0x0007c9d5) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007eb0e) fmrd2_indi_pane_t

0x04a1,	// (0x0006f0b7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x04a1,	// (0x0006f0b7) list_single_fs_bigclock_indicator_pane_g5

0x0548,	// (0x0006f15e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0548,	// (0x0006f15e) list_single_fs_bigclock_indicator_pane_t5

0xd66b,	// (0x0007c281) aid_cell_bcale_month_pane_ParamLimits

0xd66b,	// (0x0007c281) aid_cell_bcale_month_pane

0xd692,	// (0x0007c2a8) bcale_month_pane_ParamLimits

0xd692,	// (0x0007c2a8) bcale_month_pane

0xd6b0,	// (0x0007c2c6) bcale_preview_pane_ParamLimits

0xd6b0,	// (0x0007c2c6) bcale_preview_pane

0x0c46,	// (0x0006f85c) list_single_fs_bigclock_pane_t1_ParamLimits

0x0c65,	// (0x0006f87b) list_single_fs_bigclock_pane_t2_ParamLimits

0x0c65,	// (0x0006f87b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007ea90) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007ea90) list_single_fs_bigclock_pane_t

0x0e87,	// (0x0006fa9d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007eaf9) main_fs_bigclock_unlock_btn_pane_g

0xddcd,	// (0x0007c9e3) aid_dia3_key_size_ParamLimits

0xddcd,	// (0x0007c9e3) aid_dia3_key_size

0xddd9,	// (0x0007c9ef) aid_dia3_listrow_size_ParamLimits

0xddd9,	// (0x0007c9ef) aid_dia3_listrow_size

0xdde9,	// (0x0007c9ff) dia3_keypad_fun_pane_ParamLimits

0xdde9,	// (0x0007c9ff) dia3_keypad_fun_pane

0xddfb,	// (0x0007ca11) dia3_keypad_num_pane_ParamLimits

0xddfb,	// (0x0007ca11) dia3_keypad_num_pane

0xde0d,	// (0x0007ca23) dia3_listscroll_pane_ParamLimits

0xde0d,	// (0x0007ca23) dia3_listscroll_pane

0xde1b,	// (0x0007ca31) dia3_numentry_pane_ParamLimits

0xde1b,	// (0x0007ca31) dia3_numentry_pane

0x0e9d,	// (0x0006fab3) dia3_list_pane

0x0ea8,	// (0x0006fabe) scroll_pane_cp12

0xecc7,	// (0x0007d8dd) bg_dia3_numentry_pane

0xde29,	// (0x0007ca3f) dia3_numentry_pane_t1

0xde38,	// (0x0007ca4e) cell_dia3_key_num_pane

0xde40,	// (0x0007ca56) cell_dia3_key0_fun_pane_ParamLimits

0xde40,	// (0x0007ca56) cell_dia3_key0_fun_pane

0xde4d,	// (0x0007ca63) cell_dia3_key1_fun_pane_ParamLimits

0xde4d,	// (0x0007ca63) cell_dia3_key1_fun_pane

0xde5a,	// (0x0007ca70) dia3_listrow_pane

0x01a3,	// (0x0006edb9) bg_dia3_numentry_pane_g1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp21

0x0eb3,	// (0x0006fac9) cell_dia3_key_num_pane_t1

0x0ec1,	// (0x0006fad7) cell_dia3_key_num_pane_t2

0x0ed0,	// (0x0006fae6) cell_dia3_key_num_pane_t3

0x0edf,	// (0x0006faf5) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007eb15) cell_dia3_key_num_pane_t

0xecc7,	// (0x0007d8dd) bg_button_pane_cp19

0xde67,	// (0x0007ca7d) cell_dia3_key0_fun_pane_g1

0xecc7,	// (0x0007d8dd) bg_button_pane_cp20

0xde6f,	// (0x0007ca85) cell_dia3_key1_fun_pane_g1

0xde77,	// (0x0007ca8d) area_left_week_number_pane

0xde8a,	// (0x0007caa0) area_top_day_name_pane

0xde98,	// (0x0007caae) frame_month_view_pane

0x0eee,	// (0x0006fb04) grid_month_view_pane

0xdead,	// (0x0007cac3) cell_top_day_name_pane_ParamLimits

0xdead,	// (0x0007cac3) cell_top_day_name_pane

0xdec7,	// (0x0007cadd) cell_area_left_week_number_pane_ParamLimits

0xdec7,	// (0x0007cadd) cell_area_left_week_number_pane

0xdeea,	// (0x0007cb00) cell_month_view_pane_ParamLimits

0xdeea,	// (0x0007cb00) cell_month_view_pane

0x0efc,	// (0x0006fb12) frm_month_g1

0xdf16,	// (0x0007cb2c) frm_month_g2

0xdf27,	// (0x0007cb3d) frm_month_g3

0xdf38,	// (0x0007cb4e) frm_month_g4

0xdf49,	// (0x0007cb5f) frm_month_g5

0xdf5c,	// (0x0007cb72) frm_month_g6

0xdf6f,	// (0x0007cb85) frm_month_g7

0x0f09,	// (0x0006fb1f) frm_month_g8

0xdf82,	// (0x0007cb98) frm_month_g9

0xdf8f,	// (0x0007cba5) frm_month_g10

0xdf9c,	// (0x0007cbb2) frm_month_g11

0xdfa9,	// (0x0007cbbf) frm_month_g12

0xdfb6,	// (0x0007cbcc) frm_month_g13

0xdfc3,	// (0x0007cbd9) frm_month_g14

0xdfd2,	// (0x0007cbe8) frm_month_g15

0xdfe1,	// (0x0007cbf7) frm_month_g16

0x000f,

0xff08,	// (0x0007eb1e) frm_month_g

0x0f16,	// (0x0006fb2c) cell_top_day_name_pane_t1

0xdff0,	// (0x0007cc06) cell_area_left_week_number_pane_g1

0xdfff,	// (0x0007cc15) cell_area_left_week_number_pane_t1

0x39ca,	// (0x000725e0) cell_month_view_pane_g1

0xe015,	// (0x0007cc2b) cell_month_view_pane_t1

0xecc7,	// (0x0007d8dd) main_fps_pane

0x0738,	// (0x0006f34e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0738,	// (0x0006f34e) cmail_ddmenu_btn02_pane_cp1

0x0754,	// (0x0006f36a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0754,	// (0x0006f36a) cmail_ddmenu_btn02_pane_cp2

0xd89d,	// (0x0007c4b3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd89d,	// (0x0007c4b3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007ea43) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007ea43) cmail_ddmenu_btn02_pane_g

0xd8bb,	// (0x0007c4d1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd8bb,	// (0x0007c4d1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007ea48) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007ea48) cmail_ddmenu_btn02_pane_t

0xe02b,	// (0x0007cc41) fps_text_pane_ParamLimits

0xe02b,	// (0x0007cc41) fps_text_pane

0xe038,	// (0x0007cc4e) main_fps_pane_g1_ParamLimits

0xe038,	// (0x0007cc4e) main_fps_pane_g1

0xe046,	// (0x0007cc5c) wait_bar_pane_cp010_ParamLimits

0xe046,	// (0x0007cc5c) wait_bar_pane_cp010

0xe052,	// (0x0007cc68) fps_text_pane_t1_ParamLimits

0xe052,	// (0x0007cc68) fps_text_pane_t1

0xb524,	// (0x0007a13a) cam4_image_uncrop_pane_g1

0xb52d,	// (0x0007a143) cam4_image_uncrop_pane_g2

0xb536,	// (0x0007a14c) cam4_image_uncrop_pane_g3

0xb53f,	// (0x0007a155) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0007e50a) cam4_image_uncrop_pane_g

0xde5a,	// (0x0007ca70) dia3_listrow_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_phob2_pane

0xd4b2,	// (0x0007c0c8) cell_tport_appsw_pane_cp02_ParamLimits

0xd4b2,	// (0x0007c0c8) cell_tport_appsw_pane_cp02

0xd4c1,	// (0x0007c0d7) cell_tport_appsw_pane_cp03_ParamLimits

0xd4c1,	// (0x0007c0d7) cell_tport_appsw_pane_cp03

0xecc7,	// (0x0007d8dd) phob2_contact_card_pane

0xecc7,	// (0x0007d8dd) phob2_listscroll_pane

0x0f29,	// (0x0006fb3f) phob2_list_pane

0x0f31,	// (0x0006fb47) scroll_pane_cp034

0xe06b,	// (0x0007cc81) phob2_cc_data_pane_ParamLimits

0xe06b,	// (0x0007cc81) phob2_cc_data_pane

0xe085,	// (0x0007cc9b) phob2_cc_listscroll_pane_ParamLimits

0xe085,	// (0x0007cc9b) phob2_cc_listscroll_pane

0xe09f,	// (0x0007ccb5) list_double_large_graphic_phob2_pane_ParamLimits

0xe09f,	// (0x0007ccb5) list_double_large_graphic_phob2_pane

0xe0bd,	// (0x0007ccd3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe0bd,	// (0x0007ccd3) list_double_large_graphic_phob2_pane_g1

0x60f6,	// (0x00074d0c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x60f6,	// (0x00074d0c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007eb3f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007eb3f) list_double_large_graphic_phob2_pane_g

0x6102,	// (0x00074d18) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x6102,	// (0x00074d18) list_double_large_graphic_phob2_pane_t1

0x6117,	// (0x00074d2d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x6117,	// (0x00074d2d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007eb44) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007eb44) list_double_large_graphic_phob2_pane_t

0xecc7,	// (0x0007d8dd) list_highlight_pane_cp024

0x0f39,	// (0x0006fb4f) phob2_cc_button_pane

0xe0d3,	// (0x0007cce9) phob2_cc_data_pane_g1_ParamLimits

0xe0d3,	// (0x0007cce9) phob2_cc_data_pane_g1

0xe0df,	// (0x0007ccf5) phob2_cc_data_pane_g2_ParamLimits

0xe0df,	// (0x0007ccf5) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007eb49) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007eb49) phob2_cc_data_pane_g

0xe0eb,	// (0x0007cd01) phob2_cc_data_pane_t1_ParamLimits

0xe0eb,	// (0x0007cd01) phob2_cc_data_pane_t1

0xe0fd,	// (0x0007cd13) phob2_cc_data_pane_t2_ParamLimits

0xe0fd,	// (0x0007cd13) phob2_cc_data_pane_t2

0xe10f,	// (0x0007cd25) phob2_cc_data_pane_t3_ParamLimits

0xe10f,	// (0x0007cd25) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007eb4e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007eb4e) phob2_cc_data_pane_t

0x0f41,	// (0x0006fb57) phob2_cc_list_pane_ParamLimits

0x0f41,	// (0x0006fb57) phob2_cc_list_pane

0xec8b,	// (0x0007d8a1) scroll_pane_cp035_ParamLimits

0xec8b,	// (0x0007d8a1) scroll_pane_cp035

0x333c,	// (0x00071f52) bg_button_pane_cp033

0x0f4d,	// (0x0006fb63) phob2_cc_button_pane_g1

0x0f59,	// (0x0006fb6f) phob2_cc_button_pane_t1

0x0f6e,	// (0x0006fb84) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007eb55) phob2_cc_button_pane_t

0xe121,	// (0x0007cd37) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe121,	// (0x0007cd37) list_double_large_graphic_phob2_cc_pane

0xe148,	// (0x0007cd5e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe148,	// (0x0007cd5e) list_double_large_graphic_phob2_cc_pane_g1

0xe159,	// (0x0007cd6f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe159,	// (0x0007cd6f) list_double_large_graphic_phob2_cc_pane_g2

0x6129,	// (0x00074d3f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6129,	// (0x00074d3f) list_double_large_graphic_phob2_cc_pane_g3

0x6135,	// (0x00074d4b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6135,	// (0x00074d4b) list_double_large_graphic_phob2_cc_pane_g4

0x6141,	// (0x00074d57) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6141,	// (0x00074d57) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007eb5a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007eb5a) list_double_large_graphic_phob2_cc_pane_g

0x614d,	// (0x00074d63) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x614d,	// (0x00074d63) list_double_large_graphic_phob2_cc_pane_t1

0x6176,	// (0x00074d8c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6176,	// (0x00074d8c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007eb65) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007eb65) list_double_large_graphic_phob2_cc_pane_t

0x0f80,	// (0x0006fb96) list_highlight_pane_cp025_ParamLimits

0x0f80,	// (0x0006fb96) list_highlight_pane_cp025

0x333c,	// (0x00071f52) bg_button_pane_cp033_ParamLimits

0x0f4d,	// (0x0006fb63) phob2_cc_button_pane_g1_ParamLimits

0x0f59,	// (0x0006fb6f) phob2_cc_button_pane_t1_ParamLimits

0x0f6e,	// (0x0006fb84) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007eb55) phob2_cc_button_pane_t_ParamLimits

0x6476,	// (0x0007508c) popup_wgtman_window

0xe3be,	// (0x0007cfd4) scroll_pane_cp038

0xdc3e,	// (0x0007c854) wgtman_btn_pane_cp_01_ParamLimits

0xdc3e,	// (0x0007c854) wgtman_btn_pane_cp_01

0x0f8e,	// (0x0006fba4) wgtman_content_pane

0x0f97,	// (0x0006fbad) wgtman_heading_pane

0xecc7,	// (0x0007d8dd) bg_heading_pane_cp02

0x0fa0,	// (0x0006fbb6) wgtman_heading_pane_g1

0x0fa8,	// (0x0006fbbe) wgtman_heading_pane_t1

0x0fb6,	// (0x0006fbcc) scroll_pane_cp036

0x0fbe,	// (0x0006fbd4) wgtman_list_pane

0x0fc6,	// (0x0006fbdc) wgtman_list_pane_t1_ParamLimits

0x0fc6,	// (0x0006fbdc) wgtman_list_pane_t1

0xb483,	// (0x0007a099) cam4_grid_pane

0x54ea,	// (0x00074100) bg_button_pane_cp015_ParamLimits

0xc131,	// (0x0007ad47) bg_button_pane_cp016_ParamLimits

0xc144,	// (0x0007ad5a) bg_button_pane_cp017_ParamLimits

0x552e,	// (0x00074144) popup_vitu2_query_window_g3_ParamLimits

0x552e,	// (0x00074144) popup_vitu2_query_window_g3

0x55a7,	// (0x000741bd) popup_vitu2_query_window_t6_ParamLimits

0x55a7,	// (0x000741bd) popup_vitu2_query_window_t6

0x55d2,	// (0x000741e8) popup_vitu2_query_window_t7_ParamLimits

0x55d2,	// (0x000741e8) popup_vitu2_query_window_t7

0xf0c1,	// (0x0007dcd7) cam4_grid_pane_g1

0xf0ca,	// (0x0007dce0) cam4_grid_pane_g2

0x0fe0,	// (0x0006fbf6) cam4_grid_pane_g3

0x0fe9,	// (0x0006fbff) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007eb6a) cam4_grid_pane_g

0x72dc,	// (0x00075ef2) aid_placing_vt_slider_lsc_ParamLimits

0x7628,	// (0x0007623e) vidtel_button_pane_ParamLimits

0x7628,	// (0x0007623e) vidtel_button_pane

0x0ff4,	// (0x0006fc0a) bg_button_pane_cp034

0xe165,	// (0x0007cd7b) vidtel_button_pane_g1

0x0ffe,	// (0x0006fc14) vidtel_button_pane_t1

0xe4db,	// (0x0007d0f1) aid_size_vtel_slider_touch

0xec8b,	// (0x0007d8a1) scroll_pane_cp039

0x01e1,	// (0x0006edf7) ncim_query_button_pane_cp01_ParamLimits

0x0200,	// (0x0006ee16) ncimui_query_pane_g1_ParamLimits

0x333c,	// (0x00071f52) input_focus_pane_cp012_ParamLimits

0x0225,	// (0x0006ee3b) ncim_query_entry_pane_t1_ParamLimits

0xec8b,	// (0x0007d8a1) scroll_pane_cp039_ParamLimits

0x8868,	// (0x0007747e) navi_pane_bcale_mc_g1

0x8870,	// (0x00077486) navi_pane_bcale_mc_t1

0x079d,	// (0x0006f3b3) main_sp_fs_email_pane_g1

0x07a9,	// (0x0006f3bf) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0007e901) main_sp_fs_email_pane_g

0x09e7,	// (0x0006f5fd) list_single_cale_mrui_row_pane_g3_ParamLimits

0x09e7,	// (0x0006f5fd) list_single_cale_mrui_row_pane_g3

0x6004,	// (0x00074c1a) list_single_recal_day_pane_g5_event_pane

0x601a,	// (0x00074c30) list_single_recal_day_pane_g7

0x100c,	// (0x0006fc22) list_recal_day_event_pane_cp01

0x1015,	// (0x0006fc2b) list_recal_vselct_arw_lo_pane_cp01

0x101d,	// (0x0006fc33) list_recal_vselct_arw_up_pane_cp01

0x1025,	// (0x0006fc3b) list_recal_vselct_pane_cp01

0xe4eb,	// (0x0007d101) list_recal_day_event_pane_cp01_g1

0x619f,	// (0x00074db5) list_recal_day_event_pane_cp01_t1

0x6022,	// (0x00074c38) list_single_recal_day_pane_t1_ParamLimits

0x6034,	// (0x00074c4a) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007ea58) list_single_recal_day_pane_t_ParamLimits

0x1312,	// (0x0006ff28) bg_notes_pane_ParamLimits

0x13b5,	// (0x0006ffcb) list_notes_pane_ParamLimits

0x67d4,	// (0x000753ea) scroll_pane_cp06_ParamLimits

0x13d7,	// (0x0006ffed) main_notes_pane_ParamLimits

0xecc7,	// (0x0007d8dd) main_welc_pane

0xe16d,	// (0x0007cd83) main_welc_body_pane_ParamLimits

0xe16d,	// (0x0007cd83) main_welc_body_pane

0xe187,	// (0x0007cd9d) main_welc_opti_pane_ParamLimits

0xe187,	// (0x0007cd9d) main_welc_opti_pane

0xe1ba,	// (0x0007cdd0) main_welc_pane_t1_ParamLimits

0xe1ba,	// (0x0007cdd0) main_welc_pane_t1

0xe1d4,	// (0x0007cdea) main_welc_body_row_pane_ParamLimits

0xe1d4,	// (0x0007cdea) main_welc_body_row_pane

0x102f,	// (0x0006fc45) main_welc_opti_row_pane_ParamLimits

0x102f,	// (0x0006fc45) main_welc_opti_row_pane

0x103d,	// (0x0006fc53) main_welc_opti_row_pane_g1

0x1045,	// (0x0006fc5b) main_welc_opti_row_pane_t1

0x1055,	// (0x0006fc6b) main_welc_body_row_pane_t1

0x0d1d,	// (0x0006f933) popup_notif_wgt_heading_pane

0x0d37,	// (0x0006f94d) aid_size_list_notif_wgt_del_ParamLimits

0x0d44,	// (0x0006f95a) list_notif_wgt_row_pane_g1_ParamLimits

0x0d50,	// (0x0006f966) list_notif_wgt_row_pane_g2_ParamLimits

0x0d5c,	// (0x0006f972) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007eabf) list_notif_wgt_row_pane_g_ParamLimits

0x0d69,	// (0x0006f97f) list_notif_wgt_row_pane_t1_ParamLimits

0x0d7e,	// (0x0006f994) list_notif_wgt_row_pane_t2_ParamLimits

0x0d90,	// (0x0006f9a6) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007eac6) list_notif_wgt_row_pane_t_ParamLimits

0xdccd,	// (0x0007c8e3) listrow_wgtman_pane_g1_ParamLimits

0xdcda,	// (0x0007c8f0) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007eaef) listrow_wgtman_pane_g_ParamLimits

0x60a6,	// (0x00074cbc) listrow_wgtman_pane_t1_ParamLimits

0x60be,	// (0x00074cd4) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007eaf4) listrow_wgtman_pane_t_ParamLimits

0x60e4,	// (0x00074cfa) wait_bar_pane_cp09_ParamLimits

0xecc7,	// (0x0007d8dd) bg_popup_heading_pane_cp02

0x1064,	// (0x0006fc7a) popup_notif_wgt_heading_pane_g1

0x106c,	// (0x0006fc82) popup_notif_wgt_heading_pane_t1

0xecc7,	// (0x0007d8dd) main_vids_pane

0xecc7,	// (0x0007d8dd) vids_listscroll_pane

0xe1f9,	// (0x0007ce0f) scroll_pane_cp040

0xecc7,	// (0x0007d8dd) vids_list_pane

0xe204,	// (0x0007ce1a) vids_list_double_pane_ParamLimits

0xe204,	// (0x0007ce1a) vids_list_double_pane

0xe21e,	// (0x0007ce34) vids_list_double_pane_g1

0xe227,	// (0x0007ce3d) vids_list_double_pane_t1

0xe237,	// (0x0007ce4d) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007eb78) vids_list_double_pane_t

0x333c,	// (0x00071f52) main_ncimui_pane_ParamLimits

0xcc9d,	// (0x0007b8b3) main_ncimui_pane_g1_ParamLimits

0xcca9,	// (0x0007b8bf) main_ncimui_pane_g2_ParamLimits

0xcca9,	// (0x0007b8bf) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0007e806) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0007e806) main_ncimui_pane_g

0xe1a0,	// (0x0007cdb6) main_welc_pane_g1_ParamLimits

0xe1a0,	// (0x0007cdb6) main_welc_pane_g1

0xe1ac,	// (0x0007cdc2) main_welc_pane_g2_ParamLimits

0xe1ac,	// (0x0007cdc2) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007eb73) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007eb73) main_welc_pane_g

0x1312,	// (0x0006ff28) listscroll_mce_pane_ParamLimits

0x8932,	// (0x00077548) wait_bar_pane_cp10

0x334a,	// (0x00071f60) main_cale_day_pane_ParamLimits

0x334a,	// (0x00071f60) main_cale_week_pane_ParamLimits

0x1312,	// (0x0006ff28) main_messa_pane_ParamLimits

0xa8e3,	// (0x000794f9) main_clock2_btn_pane_ParamLimits

0xa8e3,	// (0x000794f9) main_clock2_btn_pane

0x3bba,	// (0x000727d0) main_clock2_btn_pane_cp01_ParamLimits

0x3bba,	// (0x000727d0) main_clock2_btn_pane_cp01

0x09b8,	// (0x0006f5ce) list_cale_mrui_pane_ParamLimits

0x0dc6,	// (0x0006f9dc) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007eacd) main_cf0_pane_g

0xde77,	// (0x0007ca8d) area_left_week_number_pane_ParamLimits

0xde8a,	// (0x0007caa0) area_top_day_name_pane_ParamLimits

0xde98,	// (0x0007caae) frame_month_view_pane_ParamLimits

0x0eee,	// (0x0006fb04) grid_month_view_pane_ParamLimits

0x0efc,	// (0x0006fb12) frm_month_g1_ParamLimits

0xdf16,	// (0x0007cb2c) frm_month_g2_ParamLimits

0xdf27,	// (0x0007cb3d) frm_month_g3_ParamLimits

0xdf38,	// (0x0007cb4e) frm_month_g4_ParamLimits

0xdf49,	// (0x0007cb5f) frm_month_g5_ParamLimits

0xdf5c,	// (0x0007cb72) frm_month_g6_ParamLimits

0xdf6f,	// (0x0007cb85) frm_month_g7_ParamLimits

0x0f09,	// (0x0006fb1f) frm_month_g8_ParamLimits

0xdf82,	// (0x0007cb98) frm_month_g9_ParamLimits

0xdf8f,	// (0x0007cba5) frm_month_g10_ParamLimits

0xdf9c,	// (0x0007cbb2) frm_month_g11_ParamLimits

0xdfa9,	// (0x0007cbbf) frm_month_g12_ParamLimits

0xdfb6,	// (0x0007cbcc) frm_month_g13_ParamLimits

0xdfc3,	// (0x0007cbd9) frm_month_g14_ParamLimits

0xdfd2,	// (0x0007cbe8) frm_month_g15_ParamLimits

0xdfe1,	// (0x0007cbf7) frm_month_g16_ParamLimits

0xff08,	// (0x0007eb1e) frm_month_g_ParamLimits

0x0f16,	// (0x0006fb2c) cell_top_day_name_pane_t1_ParamLimits

0xdff0,	// (0x0007cc06) cell_area_left_week_number_pane_g1_ParamLimits

0xdfff,	// (0x0007cc15) cell_area_left_week_number_pane_t1_ParamLimits

0x39ca,	// (0x000725e0) cell_month_view_pane_g1_ParamLimits

0xe015,	// (0x0007cc2b) cell_month_view_pane_t1_ParamLimits

0x130a,	// (0x0006ff20) main_clock2_btn_pane_g1

0x107a,	// (0x0006fc90) main_clock2_btn_pane_t1

0x333c,	// (0x00071f52) listscroll_cmail_pane_ParamLimits

0x079d,	// (0x0006f3b3) main_sp_fs_email_pane_g1_ParamLimits

0x07a9,	// (0x0006f3bf) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0007e901) main_sp_fs_email_pane_g_ParamLimits

0x0ac6,	// (0x0006f6dc) list_recal_day_pane_ParamLimits

0x0ad7,	// (0x0006f6ed) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

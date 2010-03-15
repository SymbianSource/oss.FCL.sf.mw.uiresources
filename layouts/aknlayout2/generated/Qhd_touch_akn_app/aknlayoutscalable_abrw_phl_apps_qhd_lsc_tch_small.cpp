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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00063d04 };

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
0x0403,	// (0x00064107) Screen

0x040f,	// (0x00064113) application_window

0x044b,	// (0x0006414f) area_bottom_pane_ParamLimits

0x044b,	// (0x0006414f) area_bottom_pane

0x0484,	// (0x00064188) area_top_pane_ParamLimits

0x0484,	// (0x00064188) area_top_pane

0xa4c9,	// (0x0006e1cd) call_video_uplink_pane_ParamLimits

0xa4c9,	// (0x0006e1cd) call_video_uplink_pane

0x0512,	// (0x00064216) main_pane_ParamLimits

0x0512,	// (0x00064216) main_pane

0xe276,	// (0x00071f7a) context_pane

0x3c15,	// (0x00067919) navi_pane

0x3c3d,	// (0x00067941) popup_cale_events_window_ParamLimits

0x3c3d,	// (0x00067941) popup_cale_events_window

0xe289,	// (0x00071f8d) popup_mup_playback_window

0x3c55,	// (0x00067959) signal_pane

0xc2e9,	// (0x0006ffed) main_browser_pane

0xce13,	// (0x00070b17) main_burst_pane

0x3963,	// (0x00067667) main_calc_pane

0xe25c,	// (0x00071f60) main_cale_day_pane

0x3977,	// (0x0006767b) main_cale_month_pane

0xe25c,	// (0x00071f60) main_cale_week_pane

0xce13,	// (0x00070b17) main_call_pane

0xbfc9,	// (0x0006fccd) main_call_poc_pane

0xce13,	// (0x00070b17) main_camera_pane

0xce13,	// (0x00070b17) main_chi_dic_pane

0xcc88,	// (0x0007098c) main_clock_pane

0xbfc9,	// (0x0006fccd) main_fmradio_pane

0xce13,	// (0x00070b17) main_graph_messa_pane

0xbfc9,	// (0x0006fccd) main_help_pane

0xc2e9,	// (0x0006ffed) main_im_pane

0xc224,	// (0x0006ff28) main_image_pane_ParamLimits

0xc224,	// (0x0006ff28) main_image_pane

0xbfc9,	// (0x0006fccd) main_location2_pane

0xce13,	// (0x00070b17) main_location_pane

0xc224,	// (0x0006ff28) main_messa_pane

0xbfc9,	// (0x0006fccd) main_mp2_pane

0xce13,	// (0x00070b17) main_mp_pane

0xbfc9,	// (0x0006fccd) main_msg_pane

0xbfc9,	// (0x0006fccd) main_mup_eq_pane

0xbfc9,	// (0x0006fccd) main_mup_pane

0xc2e9,	// (0x0006ffed) main_notes_pane

0xbfc9,	// (0x0006fccd) main_pec_pane

0xbfc9,	// (0x0006fccd) main_phob_pane

0xbfc9,	// (0x0006fccd) main_pinb_pane

0xbfc9,	// (0x0006fccd) main_postcard_pane

0xbfc9,	// (0x0006fccd) main_qdial_pane

0xce13,	// (0x00070b17) main_skin_pane

0xbfc9,	// (0x0006fccd) main_smil2_pane

0xce13,	// (0x00070b17) main_smil_pane

0xce13,	// (0x00070b17) main_video_pane

0xce13,	// (0x00070b17) main_video_tele_pane

0xc224,	// (0x0006ff28) main_viewer_pane_ParamLimits

0xc224,	// (0x0006ff28) main_viewer_pane

0xce13,	// (0x00070b17) main_vorec_pane

0x39c9,	// (0x000676cd) popup_blid_sat_info_window_ParamLimits

0x39c9,	// (0x000676cd) popup_blid_sat_info_window

0x3a21,	// (0x00067725) popup_dyc_status_message_window_ParamLimits

0x3a21,	// (0x00067725) popup_dyc_status_message_window

0x3a3b,	// (0x0006773f) popup_grid_large_graphic_window_ParamLimits

0x3a3b,	// (0x0006773f) popup_grid_large_graphic_window

0x3af7,	// (0x000677fb) popup_loc_request_window_ParamLimits

0x3af7,	// (0x000677fb) popup_loc_request_window

0x3bed,	// (0x000678f1) popup_wml_address_window_ParamLimits

0x3bed,	// (0x000678f1) popup_wml_address_window

0x379d,	// (0x000674a1) call_muted_g1

0x3452,	// (0x00067156) popup_call_audio_conf_window_ParamLimits

0x3452,	// (0x00067156) popup_call_audio_conf_window

0x37b1,	// (0x000674b5) popup_call_audio_first_window_ParamLimits

0x37b1,	// (0x000674b5) popup_call_audio_first_window

0x3827,	// (0x0006752b) popup_call_audio_in_window_ParamLimits

0x3827,	// (0x0006752b) popup_call_audio_in_window

0x3863,	// (0x00067567) popup_call_audio_out_window_ParamLimits

0x3863,	// (0x00067567) popup_call_audio_out_window

0x389d,	// (0x000675a1) popup_call_audio_second_window_ParamLimits

0x389d,	// (0x000675a1) popup_call_audio_second_window

0x38f3,	// (0x000675f7) popup_call_audio_wait_window_ParamLimits

0x38f3,	// (0x000675f7) popup_call_audio_wait_window

0x3928,	// (0x0006762c) popup_number_entry_window_ParamLimits

0x3928,	// (0x0006762c) popup_number_entry_window

0xa4ff,	// (0x0006e203) bg_popup_call_pane_cp05_ParamLimits

0xa4ff,	// (0x0006e203) bg_popup_call_pane_cp05

0xa51f,	// (0x0006e223) popup_number_entry_window_t1

0xa532,	// (0x0006e236) popup_number_entry_window_t2

0xa544,	// (0x0006e248) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x00072dd7) popup_number_entry_window_t

0xa556,	// (0x0006e25a) text_title_cp2

0xa569,	// (0x0006e26d) bg_popup_call_pane_cp_ParamLimits

0xa569,	// (0x0006e26d) bg_popup_call_pane_cp

0xa577,	// (0x0006e27b) call_thumbnail_pane

0xa57f,	// (0x0006e283) popup_call_audio_in_window_g1_ParamLimits

0xa57f,	// (0x0006e283) popup_call_audio_in_window_g1

0xa58b,	// (0x0006e28f) popup_call_audio_in_window_g2_ParamLimits

0xa58b,	// (0x0006e28f) popup_call_audio_in_window_g2

0xa597,	// (0x0006e29b) popup_call_audio_in_window_g3_ParamLimits

0xa597,	// (0x0006e29b) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x00072de0) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x00072de0) popup_call_audio_in_window_g

0xa5a3,	// (0x0006e2a7) popup_call_audio_in_window_t1_ParamLimits

0xa5a3,	// (0x0006e2a7) popup_call_audio_in_window_t1

0xa5bf,	// (0x0006e2c3) popup_call_audio_in_window_t2_ParamLimits

0xa5bf,	// (0x0006e2c3) popup_call_audio_in_window_t2

0xa5db,	// (0x0006e2df) popup_call_audio_in_window_t3_ParamLimits

0xa5db,	// (0x0006e2df) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x00072de7) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x00072de7) popup_call_audio_in_window_t

0xa569,	// (0x0006e26d) bg_popup_call_pane_cp01_ParamLimits

0xa569,	// (0x0006e26d) bg_popup_call_pane_cp01

0xa577,	// (0x0006e27b) call_thumbnail_pane_cp02

0xa5ee,	// (0x0006e2f2) call_type_pane_cp022

0xa5f6,	// (0x0006e2fa) popup_call_audio_out_window_g1_ParamLimits

0xa5f6,	// (0x0006e2fa) popup_call_audio_out_window_g1

0xa608,	// (0x0006e30c) popup_call_audio_out_window_g2_ParamLimits

0xa608,	// (0x0006e30c) popup_call_audio_out_window_g2

0xa614,	// (0x0006e318) popup_call_audio_out_window_g3_ParamLimits

0xa614,	// (0x0006e318) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x00072dee) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x00072dee) popup_call_audio_out_window_g

0xa626,	// (0x0006e32a) popup_call_audio_out_window_t1_ParamLimits

0xa626,	// (0x0006e32a) popup_call_audio_out_window_t1

0xa63e,	// (0x0006e342) popup_call_audio_out_window_t2_ParamLimits

0xa63e,	// (0x0006e342) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x00072df5) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x00072df5) popup_call_audio_out_window_t

0xa653,	// (0x0006e357) bg_popup_call_pane_ParamLimits

0xa653,	// (0x0006e357) bg_popup_call_pane

0x06ce,	// (0x000643d2) call_thumbnail_pane_cp_ParamLimits

0x06ce,	// (0x000643d2) call_thumbnail_pane_cp

0xa6d7,	// (0x0006e3db) call_type_pane_cp01_ParamLimits

0xa6d7,	// (0x0006e3db) call_type_pane_cp01

0xa71b,	// (0x0006e41f) popup_call_audio_first_window_g1_ParamLimits

0xa71b,	// (0x0006e41f) popup_call_audio_first_window_g1

0xa767,	// (0x0006e46b) popup_call_audio_first_window_g2_ParamLimits

0xa767,	// (0x0006e46b) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x00072dfa) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x00072dfa) popup_call_audio_first_window_g

0xa7ab,	// (0x0006e4af) popup_call_audio_first_window_t1_ParamLimits

0xa7ab,	// (0x0006e4af) popup_call_audio_first_window_t1

0xa857,	// (0x0006e55b) popup_call_audio_first_window_t4_ParamLimits

0xa857,	// (0x0006e55b) popup_call_audio_first_window_t4

0xbf9a,	// (0x0006fc9e) popup_call_audio_first_window_t5_ParamLimits

0xbf9a,	// (0x0006fc9e) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x00072dff) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x00072dff) popup_call_audio_first_window_t

0xbfc9,	// (0x0006fccd) bg_popup_call_pane_cp02

0xbfd3,	// (0x0006fcd7) call_type_pane_cp023

0xbfdb,	// (0x0006fcdf) popup_call_audio_wait_window_g1

0xbfe3,	// (0x0006fce7) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x00072e06) popup_call_audio_wait_window_g

0xbfeb,	// (0x0006fcef) popup_call_audio_wait_window_t3

0xbff9,	// (0x0006fcfd) bg_popup_call_pane_cp03_ParamLimits

0xbff9,	// (0x0006fcfd) bg_popup_call_pane_cp03

0xc059,	// (0x0006fd5d) call_thumbnail_pane_cp011_ParamLimits

0xc059,	// (0x0006fd5d) call_thumbnail_pane_cp011

0xc065,	// (0x0006fd69) call_type_pane_cp034_ParamLimits

0xc065,	// (0x0006fd69) call_type_pane_cp034

0xc0a1,	// (0x0006fda5) popup_call_audio_second_window_g1_ParamLimits

0xc0a1,	// (0x0006fda5) popup_call_audio_second_window_g1

0xc0dd,	// (0x0006fde1) popup_call_audio_second_window_g2_ParamLimits

0xc0dd,	// (0x0006fde1) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x00072e0b) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x00072e0b) popup_call_audio_second_window_g

0xc119,	// (0x0006fe1d) popup_call_audio_second_window_t1_ParamLimits

0xc119,	// (0x0006fe1d) popup_call_audio_second_window_t1

0xc19a,	// (0x0006fe9e) popup_call_audio_second_window_t2_ParamLimits

0xc19a,	// (0x0006fe9e) popup_call_audio_second_window_t2

0xc1d0,	// (0x0006fed4) popup_call_audio_second_window_t3_ParamLimits

0xc1d0,	// (0x0006fed4) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x00072e10) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x00072e10) popup_call_audio_second_window_t

0xbfc9,	// (0x0006fccd) bg_popup_call_pane_cp04

0xc206,	// (0x0006ff0a) list_conf_pane

0xc20e,	// (0x0006ff12) popup_call_audio_conf_window_t1

0xc21c,	// (0x0006ff20) call_thumbnail_pane_g1

0xc224,	// (0x0006ff28) bg_pinb_pane_ParamLimits

0xc224,	// (0x0006ff28) bg_pinb_pane

0xc232,	// (0x0006ff36) find_pinb_pane

0xc23b,	// (0x0006ff3f) listscroll_pinb_pane_ParamLimits

0xc23b,	// (0x0006ff3f) listscroll_pinb_pane

0xc24a,	// (0x0006ff4e) pinb_bg_pane_g1

0x06f2,	// (0x000643f6) pinb_bg_pane_g2

0x06fe,	// (0x00064402) pinb_bg_pane_g3

0x070a,	// (0x0006440e) pinb_bg_pane_g4

0x0716,	// (0x0006441a) pinb_bg_pane_g5

0x0722,	// (0x00064426) pinb_bg_pane_g6

0x072d,	// (0x00064431) pinb_bg_pane_g7

0x0738,	// (0x0006443c) pinb_bg_pane_g8

0x0743,	// (0x00064447) pinb_bg_pane_g9

0x074d,	// (0x00064451) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x00072e17) pinb_bg_pane_g

0x076a,	// (0x0006446e) grid_pinb_pane

0x0773,	// (0x00064477) list_pinb_pane

0x077c,	// (0x00064480) scroll_pane_cp01_ParamLimits

0x077c,	// (0x00064480) scroll_pane_cp01

0xc254,	// (0x0006ff58) find_pinb_pane_g1_ParamLimits

0xc254,	// (0x0006ff58) find_pinb_pane_g1

0xc26c,	// (0x0006ff70) find_pinb_pane_t1

0xc27e,	// (0x0006ff82) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x00072e31) find_pinb_pane_t

0xc293,	// (0x0006ff97) input_focus_pane_cp01_ParamLimits

0xc293,	// (0x0006ff97) input_focus_pane_cp01

0x078e,	// (0x00064492) cell_pinb_pane_ParamLimits

0x078e,	// (0x00064492) cell_pinb_pane

0x07b7,	// (0x000644bb) cell_pinb_pane_g1_ParamLimits

0x07b7,	// (0x000644bb) cell_pinb_pane_g1

0x07c7,	// (0x000644cb) cell_pinb_pane_g2_ParamLimits

0x07c7,	// (0x000644cb) cell_pinb_pane_g2

0xc29f,	// (0x0006ffa3) cell_pinb_pane_g3_ParamLimits

0xc29f,	// (0x0006ffa3) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x00072e36) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x00072e36) cell_pinb_pane_g

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp01

0x07d3,	// (0x000644d7) list_pinb_item_pane_ParamLimits

0x07d3,	// (0x000644d7) list_pinb_item_pane

0xbfc9,	// (0x0006fccd) list_highlight_pane_cp02

0x07e5,	// (0x000644e9) list_pinb_item_pane_g1_ParamLimits

0x07e5,	// (0x000644e9) list_pinb_item_pane_g1

0x07f2,	// (0x000644f6) list_pinb_item_pane_g2_ParamLimits

0x07f2,	// (0x000644f6) list_pinb_item_pane_g2

0x07fe,	// (0x00064502) list_pinb_item_pane_g3_ParamLimits

0x07fe,	// (0x00064502) list_pinb_item_pane_g3

0x080f,	// (0x00064513) list_pinb_item_pane_g4_ParamLimits

0x080f,	// (0x00064513) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x00072e3d) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x00072e3d) list_pinb_item_pane_g

0x081b,	// (0x0006451f) list_pinb_item_pane_t1_ParamLimits

0x081b,	// (0x0006451f) list_pinb_item_pane_t1

0x0850,	// (0x00064554) calc_display_pane

0x0878,	// (0x0006457c) calc_paper_pane

0x089b,	// (0x0006459f) grid_calc_pane

0xbfc9,	// (0x0006fccd) bg_list_pane_cp01

0x08c9,	// (0x000645cd) clock_g1

0x08d1,	// (0x000645d5) clock_g2

0x0001,

0xf142,	// (0x00072e46) clock_g

0x08d9,	// (0x000645dd) clock_t1_ParamLimits

0x08d9,	// (0x000645dd) clock_t1

0x08ee,	// (0x000645f2) clock_t2_ParamLimits

0x08ee,	// (0x000645f2) clock_t2

0x0900,	// (0x00064604) clock_t3_ParamLimits

0x0900,	// (0x00064604) clock_t3

0x0912,	// (0x00064616) clock_t4_ParamLimits

0x0912,	// (0x00064616) clock_t4

0x0924,	// (0x00064628) clock_t5_ParamLimits

0x0924,	// (0x00064628) clock_t5

0x0939,	// (0x0006463d) clock_t6_ParamLimits

0x0939,	// (0x0006463d) clock_t6

0x094b,	// (0x0006464f) clock_t7_ParamLimits

0x094b,	// (0x0006464f) clock_t7

0x095d,	// (0x00064661) clock_t8_ParamLimits

0x095d,	// (0x00064661) clock_t8

0x0971,	// (0x00064675) clock_t9_ParamLimits

0x0971,	// (0x00064675) clock_t9

0x0008,

0xf147,	// (0x00072e4b) clock_t_ParamLimits

0xf147,	// (0x00072e4b) clock_t

0xc2ab,	// (0x0006ffaf) popup_clock_analogue_window_cp02

0xc2ab,	// (0x0006ffaf) popup_clock_digital_window_cp01

0xc2b3,	// (0x0006ffb7) listscroll_help_pane

0xbfc9,	// (0x0006fccd) phob_pre_status_pane

0xc2bd,	// (0x0006ffc1) grid_qdial_pane

0xc224,	// (0x0006ff28) listscroll_mce_pane

0xc224,	// (0x0006ff28) bg_notes_pane

0xc2c7,	// (0x0006ffcb) list_notes_pane

0x0985,	// (0x00064689) scroll_pane_cp06

0xc2d5,	// (0x0006ffd9) bg_calc_paper_pane

0xa8eb,	// (0x0006e5ef) list_calc_pane

0xc2e9,	// (0x0006ffed) bg_calc_display_pane

0x0999,	// (0x0006469d) calc_display_pane_t1

0x09ab,	// (0x000646af) calc_display_pane_t2

0xa905,	// (0x0006e609) calc_display_pane_t3

0x0002,

0xf15a,	// (0x00072e5e) calc_display_pane_t

0x09bd,	// (0x000646c1) cell_calc_pane_ParamLimits

0x09bd,	// (0x000646c1) cell_calc_pane

0xc2f5,	// (0x0006fff9) bg_calc_paper_pane_g1

0xc301,	// (0x00070005) bg_calc_paper_pane_g2

0xc30d,	// (0x00070011) bg_calc_paper_pane_g3

0xc319,	// (0x0007001d) bg_calc_paper_pane_g4

0xc325,	// (0x00070029) bg_calc_paper_pane_g5

0x09f2,	// (0x000646f6) bg_calc_paper_pane_g6

0x0a01,	// (0x00064705) bg_calc_paper_pane_g7

0x0a10,	// (0x00064714) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x00072e65) bg_calc_paper_pane_g

0x0a23,	// (0x00064727) calc_bg_paper_pane_g9

0x0a36,	// (0x0006473a) list_calc_item_pane_ParamLimits

0x0a36,	// (0x0006473a) list_calc_item_pane

0xc331,	// (0x00070035) list_calc_item_pane_g1

0xa917,	// (0x0006e61b) list_calc_item_pane_t1_ParamLimits

0xa917,	// (0x0006e61b) list_calc_item_pane_t1

0x0a4b,	// (0x0006474f) list_calc_item_pane_t2_ParamLimits

0x0a4b,	// (0x0006474f) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x00072e76) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x00072e76) list_calc_item_pane_t

0xc33e,	// (0x00070042) cell_calc_pane_g1

0xc348,	// (0x0007004c) grid_highlight_pane_cp02

0x0a7d,	// (0x00064781) bg_calc_display_pane_g1

0x0a86,	// (0x0006478a) bg_calc_display_pane_g2

0x0a90,	// (0x00064794) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x00072e80) bg_calc_display_pane_g

0x0a99,	// (0x0006479d) cell_qdial_pane_ParamLimits

0x0a99,	// (0x0006479d) cell_qdial_pane

0x0aad,	// (0x000647b1) cell_qdial_pane_g1_ParamLimits

0x0aad,	// (0x000647b1) cell_qdial_pane_g1

0x0ac3,	// (0x000647c7) cell_qdial_pane_g2_ParamLimits

0x0ac3,	// (0x000647c7) cell_qdial_pane_g2

0xc36a,	// (0x0007006e) cell_qdial_pane_g3_ParamLimits

0xc36a,	// (0x0007006e) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x00072e87) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x00072e87) cell_qdial_pane_g

0x0aea,	// (0x000647ee) cell_qdial_pane_t1_ParamLimits

0x0aea,	// (0x000647ee) cell_qdial_pane_t1

0x0b02,	// (0x00064806) cell_qdial_pane_t2_ParamLimits

0x0b02,	// (0x00064806) cell_qdial_pane_t2

0x0b15,	// (0x00064819) cell_qdial_pane_t3_ParamLimits

0x0b15,	// (0x00064819) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x00072e90) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x00072e90) cell_qdial_pane_t

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp04

0xc376,	// (0x0007007a) thumbnail_qdial_pane_ParamLimits

0xc376,	// (0x0007007a) thumbnail_qdial_pane

0xc3d2,	// (0x000700d6) list_help_pane

0xc3db,	// (0x000700df) scroll_pane_cp02

0x0b28,	// (0x0006482c) help_list_pane_t1_ParamLimits

0x0b28,	// (0x0006482c) help_list_pane_t1

0xa929,	// (0x0006e62d) bg_notes_pane_g2

0xa931,	// (0x0006e635) bg_notes_pane_g3

0xa939,	// (0x0006e63d) notes_bg_pane_g1

0xa941,	// (0x0006e645) notes_bg_pane_g4

0xa949,	// (0x0006e64d) notes_bg_pane_g5

0xa951,	// (0x0006e655) notes_bg_pane_g6

0xa959,	// (0x0006e65d) notes_bg_pane_g7

0xa961,	// (0x0006e665) notes_bg_pane_g8

0xa969,	// (0x0006e66d) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x00072eae) notes_bg_pane_g

0x0b45,	// (0x00064849) list_notes_text_pane_ParamLimits

0x0b45,	// (0x00064849) list_notes_text_pane

0xc3e4,	// (0x000700e8) list_notes_text_pane_g1

0x0b5a,	// (0x0006485e) list_notes_text_pane_t1

0x0b68,	// (0x0006486c) listscroll_cale_week_pane

0x0b94,	// (0x00064898) bg_cale_heading_pane

0xc407,	// (0x0007010b) bg_cale_pane_cp01

0x0bac,	// (0x000648b0) cale_week_corner_pane

0x0bcb,	// (0x000648cf) cale_week_day_heading_pane

0x0be8,	// (0x000648ec) cale_week_scroll_pane_g1

0x0bfb,	// (0x000648ff) cale_week_scroll_pane_g2

0x0c13,	// (0x00064917) cale_week_scroll_pane_g3

0x0c2b,	// (0x0006492f) cale_week_scroll_pane_g4

0x0c43,	// (0x00064947) cale_week_scroll_pane_g5

0x0c63,	// (0x00064967) cale_week_scroll_pane_g6

0x0c83,	// (0x00064987) cale_week_scroll_pane_g7

0x0ca3,	// (0x000649a7) cale_week_scroll_pane_g8

0x0cc7,	// (0x000649cb) cale_week_scroll_pane_g9

0x0cdf,	// (0x000649e3) cale_week_scroll_pane_g10

0x0cf7,	// (0x000649fb) cale_week_scroll_pane_g11

0x0d0f,	// (0x00064a13) cale_week_scroll_pane_g12

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g13

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g14

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x00072ebd) cale_week_scroll_pane_g

0x0d3f,	// (0x00064a43) cale_week_time_pane

0x0d63,	// (0x00064a67) grid_cale_week_pane

0xc437,	// (0x0007013b) scroll_pane_cp08

0x0d89,	// (0x00064a8d) cell_cale_week_pane_ParamLimits

0x0d89,	// (0x00064a8d) cell_cale_week_pane

0x0e17,	// (0x00064b1b) cale_week_day_heading_pane_t1

0x0e5c,	// (0x00064b60) cale_week_day_heading_pane_t2

0x0ea6,	// (0x00064baa) cale_week_day_heading_pane_t3

0x0ef0,	// (0x00064bf4) cale_week_day_heading_pane_t4

0x0f3a,	// (0x00064c3e) cale_week_day_heading_pane_t5

0x0f8c,	// (0x00064c90) cale_week_day_heading_pane_t6

0x0fde,	// (0x00064ce2) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x00072edc) cale_week_day_heading_pane_t

0xc454,	// (0x00070158) bg_cale_side_pane

0x1023,	// (0x00064d27) cale_week_time_pane_t1

0x103d,	// (0x00064d41) cale_week_time_pane_t2

0x1057,	// (0x00064d5b) cale_week_time_pane_t3

0x1071,	// (0x00064d75) cale_week_time_pane_t4

0x108b,	// (0x00064d8f) cale_week_time_pane_t5

0x10a5,	// (0x00064da9) cale_week_time_pane_t6

0x10bf,	// (0x00064dc3) cale_week_time_pane_t7

0x10d9,	// (0x00064ddd) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x00072eeb) cale_week_time_pane_t

0x10f9,	// (0x00064dfd) cell_cale_week_pane_g2

0x1118,	// (0x00064e1c) cell_cale_week_pane_g3_ParamLimits

0x1118,	// (0x00064e1c) cell_cale_week_pane_g3

0xc462,	// (0x00070166) grid_highlight_pane_cp07

0xc46a,	// (0x0007016e) listscroll_gms_pane

0xc474,	// (0x00070178) grid_gms_pane

0xc47d,	// (0x00070181) listscroll_gms_pane_g1

0xc485,	// (0x00070189) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x00072efc) listscroll_gms_pane_g

0x1130,	// (0x00064e34) scroll_pane_cp010

0x113b,	// (0x00064e3f) cell_gms_pane_ParamLimits

0x113b,	// (0x00064e3f) cell_gms_pane

0x114e,	// (0x00064e52) cell_gms_pane_g1

0xc48d,	// (0x00070191) cell_gms_pane_g2

0xc495,	// (0x00070199) cell_gms_pane_g3

0xc49e,	// (0x000701a2) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x00072f01) cell_gms_pane_g

0xc4a7,	// (0x000701ab) grid_highlight_pane_cp09

0x3747,	// (0x0006744b) phob_pre_status_pane_g1

0x374f,	// (0x00067453) phob_pre_status_pane_g2

0x3757,	// (0x0006745b) phob_pre_status_pane_g3

0x375f,	// (0x00067463) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x000732f0) phob_pre_status_pane_g

0x376f,	// (0x00067473) phob_pre_status_pane_t1

0x377d,	// (0x00067481) phob_pre_status_pane_t2

0x378d,	// (0x00067491) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x000732fb) phob_pre_status_pane_t

0xbfc9,	// (0x0006fccd) bg_list_pane_cp05

0x115e,	// (0x00064e62) grid_vorec_pane

0x1168,	// (0x00064e6c) vorec_t1

0x1176,	// (0x00064e7a) vorec_t2

0x1184,	// (0x00064e88) vorec_t3

0x1192,	// (0x00064e96) vorec_t4

0x11a0,	// (0x00064ea4) vorec_t5

0xa971,	// (0x0006e675) vorec_t6

0x0006,

0xf206,	// (0x00072f0a) vorec_t

0x11bc,	// (0x00064ec0) wait_bar_pane_cp01

0x11c4,	// (0x00064ec8) cell_vorec_pane_ParamLimits

0x11c4,	// (0x00064ec8) cell_vorec_pane

0xc4af,	// (0x000701b3) cell_vorec_pane_g1

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp05

0x11ec,	// (0x00064ef0) cams_zoom_pane

0x11fb,	// (0x00064eff) image_vga_pane

0x1215,	// (0x00064f19) main_camera_pane_g1

0x1227,	// (0x00064f2b) main_camera_pane_g2

0x1237,	// (0x00064f3b) main_camera_pane_g3

0x1247,	// (0x00064f4b) main_camera_pane_g4

0x1257,	// (0x00064f5b) main_camera_pane_g5

0x1267,	// (0x00064f6b) main_camera_pane_g6

0x1279,	// (0x00064f7d) main_camera_pane_g7

0x0007,

0xf215,	// (0x00072f19) main_camera_pane_g

0x1289,	// (0x00064f8d) main_camera_pane_t1

0x129f,	// (0x00064fa3) main_camera_pane_t2

0x0001,

0xf226,	// (0x00072f2a) main_camera_pane_t

0x12d9,	// (0x00064fdd) cams_zoom_pane_cp_ParamLimits

0x12d9,	// (0x00064fdd) cams_zoom_pane_cp

0x1301,	// (0x00065005) image_cif_pane_ParamLimits

0x1301,	// (0x00065005) image_cif_pane

0x1337,	// (0x0006503b) image_subqcif_pane

0x133f,	// (0x00065043) main_video_pane_g1_ParamLimits

0x133f,	// (0x00065043) main_video_pane_g1

0x1363,	// (0x00065067) main_video_pane_g2_ParamLimits

0x1363,	// (0x00065067) main_video_pane_g2

0x1397,	// (0x0006509b) main_video_pane_g3_ParamLimits

0x1397,	// (0x0006509b) main_video_pane_g3

0x13c5,	// (0x000650c9) main_video_pane_g4_ParamLimits

0x13c5,	// (0x000650c9) main_video_pane_g4

0x13f3,	// (0x000650f7) main_video_pane_g5_ParamLimits

0x13f3,	// (0x000650f7) main_video_pane_g5

0xc4c5,	// (0x000701c9) main_video_pane_g6_ParamLimits

0xc4c5,	// (0x000701c9) main_video_pane_g6

0x0006,

0xf22b,	// (0x00072f2f) main_video_pane_g_ParamLimits

0xf22b,	// (0x00072f2f) main_video_pane_g

0x141c,	// (0x00065120) main_video_pane_t1_ParamLimits

0x141c,	// (0x00065120) main_video_pane_t1

0xc4df,	// (0x000701e3) cams_zoom_pane_g1

0xc4e8,	// (0x000701ec) cams_zoom_pane_g2

0xc4f1,	// (0x000701f5) cams_zoom_pane_g3

0xc4fa,	// (0x000701fe) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x00072f3e) cams_zoom_pane_g

0x1479,	// (0x0006517d) grid_cams_pane

0x1493,	// (0x00065197) linegrid_cams_pane

0x14a7,	// (0x000651ab) cell_cams_pane_ParamLimits

0x14a7,	// (0x000651ab) cell_cams_pane

0xc503,	// (0x00070207) cams_burst_image_pane

0xc50b,	// (0x0007020f) cell_cams_pane_g1

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp03

0xc33e,	// (0x00070042) mp_bg_pane_g1

0xbfc9,	// (0x0006fccd) bg_list_pane_cp03

0xe173,	// (0x00071e77) bg_mp_pane

0xe17b,	// (0x00071e7f) grid_mp_pane

0xe183,	// (0x00071e87) media_player_g1

0xe18b,	// (0x00071e8f) media_player_t1

0xe199,	// (0x00071e9d) media_player_t2

0xe1a7,	// (0x00071eab) media_player_t3

0xe1b5,	// (0x00071eb9) media_player_t4

0xe1c3,	// (0x00071ec7) media_player_t5

0xe1d1,	// (0x00071ed5) media_player_t6

0xe1df,	// (0x00071ee3) media_player_t7

0x0006,

0xf5d6,	// (0x000732da) media_player_t

0xe1ed,	// (0x00071ef1) wait_bar_pane_cp02

0xf5bb,	// (0x000732bf) main_usb_pane_t

0x373e,	// (0x00067442) cell_mp_pane

0xc33e,	// (0x00070042) cell_mp_pane_g1

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp06

0xc513,	// (0x00070217) grid_skin_colour_pane

0xc51b,	// (0x0007021f) list_highlight_pane_cp03

0x15c0,	// (0x000652c4) skin_g1

0xc523,	// (0x00070227) skin_t1

0xc532,	// (0x00070236) skin_t2

0x0001,

0xf26f,	// (0x00072f73) skin_t

0x15c8,	// (0x000652cc) cell_skin_colour_pane_ParamLimits

0x15c8,	// (0x000652cc) cell_skin_colour_pane

0xc540,	// (0x00070244) cell_skin_colour_pane_g1

0x1641,	// (0x00065345) call_video_g1_ParamLimits

0x1641,	// (0x00065345) call_video_g1

0x165d,	// (0x00065361) call_video_g2_ParamLimits

0x165d,	// (0x00065361) call_video_g2

0x0001,

0xf274,	// (0x00072f78) call_video_g_ParamLimits

0xf274,	// (0x00072f78) call_video_g

0x16af,	// (0x000653b3) call_video_uplink_pane_cp1_ParamLimits

0x16af,	// (0x000653b3) call_video_uplink_pane_cp1

0xc552,	// (0x00070256) call_video_uplink_pane_cp2

0x174e,	// (0x00065452) video_down_crop_pane_ParamLimits

0x174e,	// (0x00065452) video_down_crop_pane

0x1845,	// (0x00065549) video_down_pane_ParamLimits

0x1845,	// (0x00065549) video_down_pane

0xc55a,	// (0x0007025e) video_down_subqcif_pane_ParamLimits

0xc55a,	// (0x0007025e) video_down_subqcif_pane

0xc572,	// (0x00070276) video_down_subqcif_pane_cp_ParamLimits

0xc572,	// (0x00070276) video_down_subqcif_pane_cp

0xc598,	// (0x0007029c) im_reading_pane_ParamLimits

0xc598,	// (0x0007029c) im_reading_pane

0x1953,	// (0x00065657) im_writing_pane_ParamLimits

0x1953,	// (0x00065657) im_writing_pane

0x1969,	// (0x0006566d) im_reading_pane_t1

0xc5b2,	// (0x000702b6) list_im_pane

0xc5c3,	// (0x000702c7) scroll_pane_cp07

0x19a2,	// (0x000656a6) im_writing_pane_t1_ParamLimits

0x19a2,	// (0x000656a6) im_writing_pane_t1

0xc5dc,	// (0x000702e0) im_writing_pane_t2_ParamLimits

0xc5dc,	// (0x000702e0) im_writing_pane_t2

0x0001,

0xf27e,	// (0x00072f82) im_writing_pane_t_ParamLimits

0xf27e,	// (0x00072f82) im_writing_pane_t

0xbfc9,	// (0x0006fccd) input_focus_pane_cp04

0xbfc9,	// (0x0006fccd) input_focus_pane_cp05

0x19b7,	// (0x000656bb) list_im_single_pane_ParamLimits

0x19b7,	// (0x000656bb) list_im_single_pane

0x19cb,	// (0x000656cf) list_single_im_pane_t1

0x36fe,	// (0x00067402) blid_accuracy_pane

0x3706,	// (0x0006740a) blid_compass_pane

0x3710,	// (0x00067414) main_location_t1

0x3720,	// (0x00067424) main_location_t2

0x3730,	// (0x00067434) main_location_t3

0x0002,

0xf5e5,	// (0x000732e9) main_location_t

0xbfc9,	// (0x0006fccd) aid_levels_location

0xc33e,	// (0x00070042) blid_accuracy_pane_g1

0xc33e,	// (0x00070042) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x00072fe4) blid_accuracy_pane_g

0xc624,	// (0x00070328) wml_content_pane

0xc662,	// (0x00070366) wml_button_pane_ParamLimits

0xc662,	// (0x00070366) wml_button_pane

0x19da,	// (0x000656de) wml_list_single_large_pane_ParamLimits

0x19da,	// (0x000656de) wml_list_single_large_pane

0x19ef,	// (0x000656f3) wml_list_single_medium_pane_ParamLimits

0x19ef,	// (0x000656f3) wml_list_single_medium_pane

0x1a05,	// (0x00065709) wml_list_single_small_pane_ParamLimits

0x1a05,	// (0x00065709) wml_list_single_small_pane

0xc676,	// (0x0007037a) wml_selection_box_pane_ParamLimits

0xc676,	// (0x0007037a) wml_selection_box_pane

0xc689,	// (0x0007038d) wml_list_single_pane_t1

0xc698,	// (0x0007039c) wml_list_single_medium_pane_t1

0xc6a7,	// (0x000703ab) wml_list_single_large_pane_t1

0xc6b6,	// (0x000703ba) input_focus_pane_cp02_ParamLimits

0xc6b6,	// (0x000703ba) input_focus_pane_cp02

0xc6c9,	// (0x000703cd) wml_selection_box_pane_g1

0xc6d2,	// (0x000703d6) wml_selection_box_pane_t1_ParamLimits

0xc6d2,	// (0x000703d6) wml_selection_box_pane_t1

0xc224,	// (0x0006ff28) bg_wml_button_pane_ParamLimits

0xc224,	// (0x0006ff28) bg_wml_button_pane

0xc6ea,	// (0x000703ee) wml_button_pane_g1

0xc6f2,	// (0x000703f6) wml_button_pane_t1

0xc6ea,	// (0x000703ee) wml_button_bg_pane_g1

0xc702,	// (0x00070406) wml_button_bg_pane_g2

0xc70a,	// (0x0007040e) wml_button_bg_pane_g3

0xc712,	// (0x00070416) wml_button_bg_pane_g4

0xc71a,	// (0x0007041e) wml_button_bg_pane_g5

0xc722,	// (0x00070426) wml_button_bg_pane_g6

0xc72a,	// (0x0007042e) wml_button_bg_pane_g7

0xc732,	// (0x00070436) wml_button_bg_pane_g8

0xc73a,	// (0x0007043e) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x00072f87) wml_button_bg_pane_g

0x1a1d,	// (0x00065721) bg_list_pane_cp02

0xc742,	// (0x00070446) mce_header_pane_ParamLimits

0xc742,	// (0x00070446) mce_header_pane

0xc758,	// (0x0007045c) mce_icon_pane

0xc758,	// (0x0007045c) mce_image_pane

0xc761,	// (0x00070465) mce_text_pane_ParamLimits

0xc761,	// (0x00070465) mce_text_pane

0x1a25,	// (0x00065729) scroll_pane_cp03

0xc65a,	// (0x0007035e) scroll_pane_cp04

0xc774,	// (0x00070478) scroll_pane_cp05_ParamLimits

0xc774,	// (0x00070478) scroll_pane_cp05

0x1a2f,	// (0x00065733) mce_header_field_pane_ParamLimits

0x1a2f,	// (0x00065733) mce_header_field_pane

0x1a46,	// (0x0006574a) mce_header_field_pane_2_ParamLimits

0x1a46,	// (0x0006574a) mce_header_field_pane_2

0x1a5c,	// (0x00065760) mce_header_field_pane_3

0x1a64,	// (0x00065768) list_single_mce_message_pane_ParamLimits

0x1a64,	// (0x00065768) list_single_mce_message_pane

0x1a79,	// (0x0006577d) list_single_mce_smart_pane_ParamLimits

0x1a79,	// (0x0006577d) list_single_mce_smart_pane

0xc780,	// (0x00070484) input_focus_pane_cp03

0xc789,	// (0x0007048d) list_header_data_pane

0x1a99,	// (0x0006579d) mce_header_field_pane_t1

0x1aa9,	// (0x000657ad) list_single_mce_header_pane_ParamLimits

0x1aa9,	// (0x000657ad) list_single_mce_header_pane

0xc791,	// (0x00070495) list_single_mce_header_pane_t1

0xc7a0,	// (0x000704a4) list_single_mce_message_pane_g1

0xc7a8,	// (0x000704ac) list_single_mce_message_pane_t1

0x1ae3,	// (0x000657e7) bg_cale_heading_pane_cp01_ParamLimits

0x1ae3,	// (0x000657e7) bg_cale_heading_pane_cp01

0xc7b6,	// (0x000704ba) bg_cale_pane_cp02_ParamLimits

0xc7b6,	// (0x000704ba) bg_cale_pane_cp02

0x1b12,	// (0x00065816) cale_month_corner_pane

0x1b31,	// (0x00065835) cale_month_day_heading_pane_ParamLimits

0x1b31,	// (0x00065835) cale_month_day_heading_pane

0x1b78,	// (0x0006587c) cale_month_pane_g1_ParamLimits

0x1b78,	// (0x0006587c) cale_month_pane_g1

0x1b9c,	// (0x000658a0) cale_month_pane_g2_ParamLimits

0x1b9c,	// (0x000658a0) cale_month_pane_g2

0x1bcc,	// (0x000658d0) cale_month_pane_g3_ParamLimits

0x1bcc,	// (0x000658d0) cale_month_pane_g3

0x1c08,	// (0x0006590c) cale_month_pane_g4_ParamLimits

0x1c08,	// (0x0006590c) cale_month_pane_g4

0x1c44,	// (0x00065948) cale_month_pane_g5_ParamLimits

0x1c44,	// (0x00065948) cale_month_pane_g5

0x1c8c,	// (0x00065990) cale_month_pane_g6_ParamLimits

0x1c8c,	// (0x00065990) cale_month_pane_g6

0x1cd8,	// (0x000659dc) cale_month_pane_g7_ParamLimits

0x1cd8,	// (0x000659dc) cale_month_pane_g7

0x1d2c,	// (0x00065a30) cale_month_pane_g8_ParamLimits

0x1d2c,	// (0x00065a30) cale_month_pane_g8

0x1d80,	// (0x00065a84) cale_month_pane_g9_ParamLimits

0x1d80,	// (0x00065a84) cale_month_pane_g9

0x1dd2,	// (0x00065ad6) cale_month_pane_g10_ParamLimits

0x1dd2,	// (0x00065ad6) cale_month_pane_g10

0x1e24,	// (0x00065b28) cale_month_pane_g11_ParamLimits

0x1e24,	// (0x00065b28) cale_month_pane_g11

0x1e76,	// (0x00065b7a) cale_month_pane_g12_ParamLimits

0x1e76,	// (0x00065b7a) cale_month_pane_g12

0x1ec8,	// (0x00065bcc) cale_month_pane_g13_ParamLimits

0x1ec8,	// (0x00065bcc) cale_month_pane_g13

0x000c,

0xf296,	// (0x00072f9a) cale_month_pane_g_ParamLimits

0xf296,	// (0x00072f9a) cale_month_pane_g

0x1f1a,	// (0x00065c1e) cale_month_week_pane

0x1f3e,	// (0x00065c42) grid_cale_month_pane_ParamLimits

0x1f3e,	// (0x00065c42) grid_cale_month_pane

0x1f7c,	// (0x00065c80) cale_month_day_heading_pane_t1

0x2002,	// (0x00065d06) cale_month_day_heading_pane_t2

0x2093,	// (0x00065d97) cale_month_day_heading_pane_t3

0x2124,	// (0x00065e28) cale_month_day_heading_pane_t4

0x21b9,	// (0x00065ebd) cale_month_day_heading_pane_t5

0x225a,	// (0x00065f5e) cale_month_day_heading_pane_t6

0x22fb,	// (0x00065fff) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x00072fb5) cale_month_day_heading_pane_t

0xc454,	// (0x00070158) bg_cale_side_pane_cp01

0x23a4,	// (0x000660a8) cale_month_week_pane_t1

0x23bd,	// (0x000660c1) cale_month_week_pane_t2

0x23d6,	// (0x000660da) cale_month_week_pane_t3

0x23ef,	// (0x000660f3) cale_month_week_pane_t4

0x2408,	// (0x0006610c) cale_month_week_pane_t5

0x2421,	// (0x00066125) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x00072fc4) cale_month_week_pane_t

0x243a,	// (0x0006613e) cell_cale_month_pane_ParamLimits

0x243a,	// (0x0006613e) cell_cale_month_pane

0xa97f,	// (0x0006e683) cell_cale_month_pane_g1

0x258e,	// (0x00066292) cell_cale_month_pane_t1_ParamLimits

0x258e,	// (0x00066292) cell_cale_month_pane_t1

0xc462,	// (0x00070166) grid_highlight_pane_cp08

0xc33e,	// (0x00070042) main_smil_g1

0x25ae,	// (0x000662b2) smil_status_pane

0xc7f5,	// (0x000704f9) smil_text_pane

0xe093,	// (0x00071d97) bg_popup_call3_rect_pane_g8

0xe09b,	// (0x00071d9f) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0007327d) bg_popup_call3_rect_pane_g

0xe2f0,	// (0x00071ff4) smil_status_volume_pane_g1

0xc7ff,	// (0x00070503) smil_status_pane_t1

0xaad5,	// (0x0006e7d9) volume_smil_pane

0xc816,	// (0x0007051a) list_smil_text_pane

0x25c1,	// (0x000662c5) scroll_pane_cp011

0x25cc,	// (0x000662d0) smil_text_list_pane_t1_ParamLimits

0x25cc,	// (0x000662d0) smil_text_list_pane_t1

0xa98b,	// (0x0006e68f) aid_volume_smil_ParamLimits

0xa98b,	// (0x0006e68f) aid_volume_smil

0xc33e,	// (0x00070042) smil_volume_pane_g1

0xc33e,	// (0x00070042) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x00072fe4) smil_volume_pane_g

0x0b68,	// (0x0006486c) listscroll_cale_day_pane

0xc820,	// (0x00070524) bg_cale_pane

0xc838,	// (0x0007053c) list_cale_pane

0xc85b,	// (0x0007055f) scroll_pane_cp09

0xc86c,	// (0x00070570) cale_bg_pane_g1

0xc874,	// (0x00070578) cale_bg_pane_g2

0xc87c,	// (0x00070580) cale_bg_pane_g3

0xc884,	// (0x00070588) cale_bg_pane_g4

0xc88c,	// (0x00070590) cale_bg_pane_g5

0xc894,	// (0x00070598) cale_bg_pane_g6

0xc89c,	// (0x000705a0) cale_bg_pane_g7

0xc8a4,	// (0x000705a8) cale_bg_pane_g8

0xc8ac,	// (0x000705b0) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x00072fe9) cale_bg_pane_g

0x2608,	// (0x0006630c) list_cale_time_pane_ParamLimits

0x2608,	// (0x0006630c) list_cale_time_pane

0xc8b4,	// (0x000705b8) list_cale_time_pane_g1_ParamLimits

0xc8b4,	// (0x000705b8) list_cale_time_pane_g1

0xc8c0,	// (0x000705c4) list_cale_time_pane_g2_ParamLimits

0xc8c0,	// (0x000705c4) list_cale_time_pane_g2

0x261b,	// (0x0006631f) list_cale_time_pane_g3_ParamLimits

0x261b,	// (0x0006631f) list_cale_time_pane_g3

0x2629,	// (0x0006632d) list_cale_time_pane_g4_ParamLimits

0x2629,	// (0x0006632d) list_cale_time_pane_g4

0x2637,	// (0x0006633b) list_cale_time_pane_g5_ParamLimits

0x2637,	// (0x0006633b) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x00072ffc) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x00072ffc) list_cale_time_pane_g

0xc8da,	// (0x000705de) list_cale_time_pane_t1_ParamLimits

0xc8da,	// (0x000705de) list_cale_time_pane_t1

0xc902,	// (0x00070606) list_cale_time_pane_t2_ParamLimits

0xc902,	// (0x00070606) list_cale_time_pane_t2

0x298c,	// (0x00066690) aid_blid_cardinal_pane

0x29ca,	// (0x000666ce) compass_pane_t4

0xc92a,	// (0x0007062e) list_cale_time_pane_t4_ParamLimits

0xc92a,	// (0x0007062e) list_cale_time_pane_t4

0x29d8,	// (0x000666dc) compass_pane_t5

0x29e6,	// (0x000666ea) compass_pane_t6

0x29f4,	// (0x000666f8) compass_pane_t7

0xcd65,	// (0x00070a69) navi_pane_cc_t1

0xceba,	// (0x00070bbe) aid_phob_thumbnail_center_pane

0x3116,	// (0x00066e1a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x00073009) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x00073009) list_cale_time_pane_t

0xa569,	// (0x0006e26d) bg_popup_window_pane_cp02_ParamLimits

0xa569,	// (0x0006e26d) bg_popup_window_pane_cp02

0xc952,	// (0x00070656) heading_pane_cp01_ParamLimits

0xc952,	// (0x00070656) heading_pane_cp01

0xc95e,	// (0x00070662) loc_req_pane_ParamLimits

0xc95e,	// (0x00070662) loc_req_pane

0xc96e,	// (0x00070672) loc_type_pane_ParamLimits

0xc96e,	// (0x00070672) loc_type_pane

0xc980,	// (0x00070684) loc_type_pane_t1_ParamLimits

0xc980,	// (0x00070684) loc_type_pane_t1

0xc992,	// (0x00070696) loc_type_pane_t2_ParamLimits

0xc992,	// (0x00070696) loc_type_pane_t2

0xc9a4,	// (0x000706a8) loc_type_pane_t3_ParamLimits

0xc9a4,	// (0x000706a8) loc_type_pane_t3

0x0002,

0xf30c,	// (0x00073010) loc_type_pane_t_ParamLimits

0xf30c,	// (0x00073010) loc_type_pane_t

0xc9b6,	// (0x000706ba) list_loc_req_pane

0xc9c0,	// (0x000706c4) scroll_pane_cp012

0x2645,	// (0x00066349) list_single_loc_request_popup_menu_pane_ParamLimits

0x2645,	// (0x00066349) list_single_loc_request_popup_menu_pane

0xc9cb,	// (0x000706cf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc9cb,	// (0x000706cf) list_single_loc_request_popup_menu_pane_g1

0xc9d7,	// (0x000706db) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc9d7,	// (0x000706db) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x00073017) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x00073017) list_single_loc_request_popup_menu_pane_g

0xc9e3,	// (0x000706e7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc9e3,	// (0x000706e7) list_single_loc_request_popup_menu_pane_t1

0xc224,	// (0x0006ff28) bg_popup_window_pane_cp03_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_window_pane_cp03

0xd6ec,	// (0x000713f0) heading_loc_req_pane_ParamLimits

0xd6ec,	// (0x000713f0) heading_loc_req_pane

0x2652,	// (0x00066356) popup_dyc_status_message_window_g1_ParamLimits

0x2652,	// (0x00066356) popup_dyc_status_message_window_g1

0x2666,	// (0x0006636a) popup_dyc_status_message_window_t1_ParamLimits

0x2666,	// (0x0006636a) popup_dyc_status_message_window_t1

0x267b,	// (0x0006637f) popup_dyc_status_message_window_t2_ParamLimits

0x267b,	// (0x0006637f) popup_dyc_status_message_window_t2

0x2690,	// (0x00066394) popup_dyc_status_message_window_t3_ParamLimits

0x2690,	// (0x00066394) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0007301c) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0007301c) popup_dyc_status_message_window_t

0xbfc9,	// (0x0006fccd) bg_heading_pane_cp01

0xc9f9,	// (0x000706fd) heading_loc_req_pane_g1

0xca01,	// (0x00070705) heading_loc_req_pane_g2

0xca09,	// (0x0007070d) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x00073023) heading_loc_req_pane_g

0xca11,	// (0x00070715) heading_loc_req_pane_t1

0xca20,	// (0x00070724) bg_popup_sub_pane_cp01_ParamLimits

0xca20,	// (0x00070724) bg_popup_sub_pane_cp01

0xca2e,	// (0x00070732) popup_cale_events_window_g1_ParamLimits

0xca2e,	// (0x00070732) popup_cale_events_window_g1

0xca4e,	// (0x00070752) popup_cale_events_window_g2_ParamLimits

0xca4e,	// (0x00070752) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x00073057) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x00073057) popup_cale_events_window_g

0xca6e,	// (0x00070772) popup_cale_events_window_t1_ParamLimits

0xca6e,	// (0x00070772) popup_cale_events_window_t1

0xca80,	// (0x00070784) popup_cale_events_window_t2_ParamLimits

0xca80,	// (0x00070784) popup_cale_events_window_t2

0xcabe,	// (0x000707c2) popup_cale_events_window_t3_ParamLimits

0xcabe,	// (0x000707c2) popup_cale_events_window_t3

0xcaf8,	// (0x000707fc) popup_cale_events_window_t4_ParamLimits

0xcaf8,	// (0x000707fc) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0007305c) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0007305c) popup_cale_events_window_t

0x2787,	// (0x0006648b) call_type_pane

0x2797,	// (0x0006649b) popup_call_status_window_g1

0x27ab,	// (0x000664af) popup_call_status_window_g2

0x27bf,	// (0x000664c3) popup_call_status_window_g3

0x0002,

0xf361,	// (0x00073065) popup_call_status_window_g

0xcb2e,	// (0x00070832) call_type_pane_g1

0xcb37,	// (0x0007083b) call_type_pane_g2

0x0001,

0xf368,	// (0x0007306c) call_type_pane_g

0xbfc9,	// (0x0006fccd) bg_popup_sub_pane_cp02

0xcb40,	// (0x00070844) listscroll_popup_wml_pane

0xcb48,	// (0x0007084c) list_wml_pane

0xcb52,	// (0x00070856) scroll_pane_cp013

0xcb5d,	// (0x00070861) list_single_graphic_popup_wml_pane_ParamLimits

0xcb5d,	// (0x00070861) list_single_graphic_popup_wml_pane

0xc33e,	// (0x00070042) list_single_graphic_popup_wml_pane_g1

0xcb71,	// (0x00070875) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x00073071) list_single_graphic_popup_wml_pane_g

0xcb79,	// (0x0007087d) list_single_graphic_popup_wml_pane_t1

0xcb8f,	// (0x00070893) aid_call_pane

0xc21c,	// (0x0006ff20) popup_clock_analogue_window_g1

0xc21c,	// (0x0006ff20) popup_clock_analogue_window_g2

0xa9b9,	// (0x0006e6bd) popup_clock_analogue_window_g3

0xa9b9,	// (0x0006e6bd) popup_clock_analogue_window_g4

0xc33e,	// (0x00070042) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x00073076) popup_clock_analogue_window_g

0xa9c1,	// (0x0006e6c5) popup_clock_analogue_window_t1

0xa9cf,	// (0x0006e6d3) clock_digital_number_pane_ParamLimits

0xa9cf,	// (0x0006e6d3) clock_digital_number_pane

0xa9db,	// (0x0006e6df) clock_digital_number_pane_cp02_ParamLimits

0xa9db,	// (0x0006e6df) clock_digital_number_pane_cp02

0xa9e7,	// (0x0006e6eb) clock_digital_number_pane_cp03_ParamLimits

0xa9e7,	// (0x0006e6eb) clock_digital_number_pane_cp03

0xa9f3,	// (0x0006e6f7) clock_digital_number_pane_cp04_ParamLimits

0xa9f3,	// (0x0006e6f7) clock_digital_number_pane_cp04

0xaa03,	// (0x0006e707) clock_digital_separator_pane_ParamLimits

0xaa03,	// (0x0006e707) clock_digital_separator_pane

0xaa0f,	// (0x0006e713) popup_clock_digital_window_t1

0xc33e,	// (0x00070042) clock_digital_number_pane_g1

0xc33e,	// (0x00070042) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x00072fe4) clock_digital_number_pane_g

0xc33e,	// (0x00070042) clock_digital_separator_pane_g1

0xc33e,	// (0x00070042) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x00072fe4) clock_digital_separator_pane_g

0xbfc9,	// (0x0006fccd) bg_popup_window_pane_cp04

0xcb97,	// (0x0007089b) heading_pane_cp03

0xcb9f,	// (0x000708a3) listscroll_popup_gms_pane

0xcba7,	// (0x000708ab) grid_large_graphic_popup_pane

0xcbb1,	// (0x000708b5) listscroll_popup_gms_pane_g1

0xcbb9,	// (0x000708bd) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x00073081) listscroll_popup_gms_pane_g

0xc65a,	// (0x0007035e) scroll_pane_cp014

0x27ce,	// (0x000664d2) cell_large_graphic_popup_pane_ParamLimits

0x27ce,	// (0x000664d2) cell_large_graphic_popup_pane

0x27e6,	// (0x000664ea) cell_large_graphic_popup_pane_g1_ParamLimits

0x27e6,	// (0x000664ea) cell_large_graphic_popup_pane_g1

0xcbc1,	// (0x000708c5) cell_large_graphic_popup_pane_g2_ParamLimits

0xcbc1,	// (0x000708c5) cell_large_graphic_popup_pane_g2

0xcbcd,	// (0x000708d1) cell_large_graphic_popup_pane_g3_ParamLimits

0xcbcd,	// (0x000708d1) cell_large_graphic_popup_pane_g3

0xcbda,	// (0x000708de) cell_large_graphic_popup_pane_g4_ParamLimits

0xcbda,	// (0x000708de) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x00073086) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x00073086) cell_large_graphic_popup_pane_g

0xcbea,	// (0x000708ee) grid_highlight_pane_cp010

0xc33e,	// (0x00070042) bg_popup_call_pane_g1

0xcbf4,	// (0x000708f8) list_single_graphic_popup_conf_pane_ParamLimits

0xcbf4,	// (0x000708f8) list_single_graphic_popup_conf_pane

0xcc07,	// (0x0007090b) list_highlight_pane_cp01

0xcc10,	// (0x00070914) list_single_graphic_popup_conf_pane_g1

0xcc18,	// (0x0007091c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0007308f) list_single_graphic_popup_conf_pane_g

0xcc20,	// (0x00070924) list_single_graphic_popup_conf_pane_t1

0xcc2e,	// (0x00070932) linegrid_cams_pane_g1

0x27f2,	// (0x000664f6) linegrid_cams_pane_g2

0xc495,	// (0x00070199) linegrid_cams_pane_g3

0xcc37,	// (0x0007093b) linegrid_cams_pane_g4

0x27fb,	// (0x000664ff) linegrid_cams_pane_g5

0x2804,	// (0x00066508) linegrid_cams_pane_g6

0xc49e,	// (0x000701a2) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x00073094) linegrid_cams_pane_g

0xcc40,	// (0x00070944) popup_clock_analogue_window

0xcc40,	// (0x00070944) popup_clock_digital_window

0xbfc9,	// (0x0006fccd) popup_phob_thumbnail_window

0xc33e,	// (0x00070042) call_video_uplink_pane_g1

0xcc49,	// (0x0007094d) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x000730a3) call_video_uplink_pane_g

0xcc51,	// (0x00070955) video_uplink_pane

0xcc59,	// (0x0007095d) mce_image_pane_g1

0x280f,	// (0x00066513) mce_image_pane_g2

0x2819,	// (0x0006651d) mce_image_pane_g3

0x2821,	// (0x00066525) mce_image_pane_g4

0x2829,	// (0x0006652d) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x000730a8) mce_image_pane_g

0xcc63,	// (0x00070967) control_top_pane_stacon_cp01_ParamLimits

0xcc63,	// (0x00070967) control_top_pane_stacon_cp01

0xcc77,	// (0x0007097b) uni_indicator_pane_stacon_cp01_ParamLimits

0xcc77,	// (0x0007097b) uni_indicator_pane_stacon_cp01

0xcc88,	// (0x0007098c) bg_popup_sub_pane_cp03

0xcc92,	// (0x00070996) chi_dic_find_pane

0x2831,	// (0x00066535) listscroll_chi_dic_pane

0xcc9a,	// (0x0007099e) main_pane_chidic_g1

0xcca2,	// (0x000709a6) chi_dic_find_pane_t1

0xccb0,	// (0x000709b4) find_chidic_pane

0xccb9,	// (0x000709bd) chi_dic_list_pane_ParamLimits

0xccb9,	// (0x000709bd) chi_dic_list_pane

0xccca,	// (0x000709ce) scroll_pane_cp020

0xccd2,	// (0x000709d6) find_chidic_pane_t1

0xbfc9,	// (0x0006fccd) input_focus_pane_cp06

0x2845,	// (0x00066549) list_chi_dic_pane_ParamLimits

0x2845,	// (0x00066549) list_chi_dic_pane

0x2857,	// (0x0006655b) list_chi_dic_pane_t1_ParamLimits

0x2857,	// (0x0006655b) list_chi_dic_pane_t1

0xbfc9,	// (0x0006fccd) list_highlight_pane_cp020

0xcce1,	// (0x000709e5) bg_cale_heading_pane_g1

0x286a,	// (0x0006656e) bg_cale_heading_pane_g2

0x2872,	// (0x00066576) bg_cale_heading_pane_g3

0x287a,	// (0x0006657e) bg_cale_heading_pane_g4

0x2884,	// (0x00066588) bg_cale_heading_pane_g5

0x288e,	// (0x00066592) bg_cale_heading_pane_g6

0x2896,	// (0x0006659a) bg_cale_heading_pane_g7

0x289e,	// (0x000665a2) bg_cale_heading_pane_g8

0x28a8,	// (0x000665ac) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x000730b3) bg_cale_heading_pane_g

0xcce1,	// (0x000709e5) bg_cale_side_pane_g1

0x28b2,	// (0x000665b6) bg_cale_side_pane_g2

0x28ba,	// (0x000665be) bg_cale_side_pane_g3

0x28c2,	// (0x000665c6) bg_cale_side_pane_g4

0x28ca,	// (0x000665ce) bg_cale_side_pane_g5

0x28d2,	// (0x000665d6) bg_cale_side_pane_g6

0x28da,	// (0x000665de) bg_cale_side_pane_g7

0x28e2,	// (0x000665e6) bg_cale_side_pane_g8

0x28ea,	// (0x000665ee) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x000730c6) bg_cale_side_pane_g

0x28f2,	// (0x000665f6) popup_call_status_window_ParamLimits

0x28f2,	// (0x000665f6) popup_call_status_window

0xcce9,	// (0x000709ed) stacon_top_pane

0xccf1,	// (0x000709f5) status_pane_ParamLimits

0xccf1,	// (0x000709f5) status_pane

0xcd06,	// (0x00070a0a) status_small_pane

0xcd0e,	// (0x00070a12) control_pane

0xbfc9,	// (0x0006fccd) stacon_bottom_pane

0xcd16,	// (0x00070a1a) list_single_mce_smart_pane_t1_ParamLimits

0xcd16,	// (0x00070a1a) list_single_mce_smart_pane_t1

0xcd29,	// (0x00070a2d) list_single_mce_smart_pane_t2_ParamLimits

0xcd29,	// (0x00070a2d) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x000730d9) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x000730d9) list_single_mce_smart_pane_t

0x293b,	// (0x0006663f) compass_pane

0x2944,	// (0x00066648) main_location2_pane_t1

0x2956,	// (0x0006665a) main_location2_pane_t2

0x2968,	// (0x0006666c) main_location2_pane_t3

0x0003,

0xf3da,	// (0x000730de) main_location2_pane_t

0xcd48,	// (0x00070a4c) compass_pane_g1_ParamLimits

0xcd48,	// (0x00070a4c) compass_pane_g1

0x29ac,	// (0x000666b0) compass_pane_t1

0x29bb,	// (0x000666bf) compass_pane_t2

0x0005,

0xf3e3,	// (0x000730e7) compass_pane_t

0x2a02,	// (0x00066706) text_secondary_cp61

0xcd5c,	// (0x00070a60) navi_pane_cams_g5

0xcd7f,	// (0x00070a83) navi_pane_im_t1

0xcd8d,	// (0x00070a91) navi_pane_mp_g1_ParamLimits

0xcd8d,	// (0x00070a91) navi_pane_mp_g1

0xcda1,	// (0x00070aa5) navi_pane_mp_g2_ParamLimits

0xcda1,	// (0x00070aa5) navi_pane_mp_g2

0xcdad,	// (0x00070ab1) navi_pane_mp_g3_ParamLimits

0xcdad,	// (0x00070ab1) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x000730fb) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x000730fb) navi_pane_mp_g

0xcdb9,	// (0x00070abd) navi_pane_mp_t1

0xcdc7,	// (0x00070acb) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x00073102) navi_pane_mp_t

0xce03,	// (0x00070b07) navi_pane_vt_g1

0xcdb9,	// (0x00070abd) navi_pane_vt_t1

0xce0b,	// (0x00070b0f) navi_slider_pane

0xce13,	// (0x00070b17) zooming_pane

0xce1b,	// (0x00070b1f) navi_slider_pane_g1

0xaa2c,	// (0x0006e730) navi_slider_pane_g2

0x0006,

0xf405,	// (0x00073109) navi_slider_pane_g

0xce3f,	// (0x00070b43) aid_levels_zoom

0xce47,	// (0x00070b4b) zooming_pane_g1

0xce4f,	// (0x00070b53) zooming_pane_g2

0xce4f,	// (0x00070b53) zooming_pane_g3

0x0002,

0xf414,	// (0x00073118) zooming_pane_g

0xce57,	// (0x00070b5b) level_10_zoom

0xce60,	// (0x00070b64) level_11_zoom

0xce69,	// (0x00070b6d) level_1_zoom

0xce72,	// (0x00070b76) level_2_zoom

0xce7b,	// (0x00070b7f) level_3_zoom

0xce84,	// (0x00070b88) level_4_zoom

0xce8d,	// (0x00070b91) level_5_zoom

0xce96,	// (0x00070b9a) level_6_zoom

0xce9f,	// (0x00070ba3) level_7_zoom

0xcea8,	// (0x00070bac) level_8_zoom

0xceb1,	// (0x00070bb5) level_9_zoom

0xcec2,	// (0x00070bc6) popup_phob_thumbnail_window_g1

0xceca,	// (0x00070bce) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0007311f) popup_phob_thumbnail_window_g

0xe1f5,	// (0x00071ef9) level_1_location

0xe1fd,	// (0x00071f01) level_2_location

0xe205,	// (0x00071f09) level_3_location

0xe20d,	// (0x00071f11) level_4_location

0xce13,	// (0x00070b17) level_5_location

0x2b45,	// (0x00066849) mce_icon_pane_g1

0x2b4f,	// (0x00066853) mce_icon_pane_g2

0x0001,

0xf420,	// (0x00073124) mce_icon_pane_g

0x2b57,	// (0x0006685b) main_mup_pane_g1_ParamLimits

0x2b57,	// (0x0006685b) main_mup_pane_g1

0x2b6d,	// (0x00066871) main_mup_pane_g2_ParamLimits

0x2b6d,	// (0x00066871) main_mup_pane_g2

0x2b85,	// (0x00066889) main_mup_pane_g3_ParamLimits

0x2b85,	// (0x00066889) main_mup_pane_g3

0x2b9d,	// (0x000668a1) main_mup_pane_g4_ParamLimits

0x2b9d,	// (0x000668a1) main_mup_pane_g4

0x2bb5,	// (0x000668b9) main_mup_pane_g5_ParamLimits

0x2bb5,	// (0x000668b9) main_mup_pane_g5

0x2bd1,	// (0x000668d5) main_mup_pane_g6_ParamLimits

0x2bd1,	// (0x000668d5) main_mup_pane_g6

0x2be9,	// (0x000668ed) main_mup_pane_g7_ParamLimits

0x2be9,	// (0x000668ed) main_mup_pane_g7

0x2c01,	// (0x00066905) main_mup_pane_g8_ParamLimits

0x2c01,	// (0x00066905) main_mup_pane_g8

0x2c1b,	// (0x0006691f) main_mup_pane_g9_ParamLimits

0x2c1b,	// (0x0006691f) main_mup_pane_g9

0x2c35,	// (0x00066939) main_mup_pane_g10_ParamLimits

0x2c35,	// (0x00066939) main_mup_pane_g10

0x2c4f,	// (0x00066953) main_mup_pane_g11_ParamLimits

0x2c4f,	// (0x00066953) main_mup_pane_g11

0x2c63,	// (0x00066967) main_mup_pane_g12_ParamLimits

0x2c63,	// (0x00066967) main_mup_pane_g12

0x2c79,	// (0x0006697d) main_mup_pane_g13_ParamLimits

0x2c79,	// (0x0006697d) main_mup_pane_g13

0x000c,

0xf425,	// (0x00073129) main_mup_pane_g_ParamLimits

0xf425,	// (0x00073129) main_mup_pane_g

0x2c8d,	// (0x00066991) main_mup_pane_t1_ParamLimits

0x2c8d,	// (0x00066991) main_mup_pane_t1

0x2ca7,	// (0x000669ab) main_mup_pane_t2_ParamLimits

0x2ca7,	// (0x000669ab) main_mup_pane_t2

0x2cbf,	// (0x000669c3) main_mup_pane_t3_ParamLimits

0x2cbf,	// (0x000669c3) main_mup_pane_t3

0x2cd7,	// (0x000669db) main_mup_pane_t4_ParamLimits

0x2cd7,	// (0x000669db) main_mup_pane_t4

0x2cf5,	// (0x000669f9) main_mup_pane_t5_ParamLimits

0x2cf5,	// (0x000669f9) main_mup_pane_t5

0x2d0a,	// (0x00066a0e) main_mup_pane_t6_ParamLimits

0x2d0a,	// (0x00066a0e) main_mup_pane_t6

0x0005,

0xf440,	// (0x00073144) main_mup_pane_t_ParamLimits

0xf440,	// (0x00073144) main_mup_pane_t

0x2d1c,	// (0x00066a20) mup_progress_pane_ParamLimits

0x2d1c,	// (0x00066a20) mup_progress_pane

0x2d28,	// (0x00066a2c) mup_visualizer_pane_ParamLimits

0x2d28,	// (0x00066a2c) mup_visualizer_pane

0x2d58,	// (0x00066a5c) mup_volume_pane_ParamLimits

0x2d58,	// (0x00066a5c) mup_volume_pane

0xced2,	// (0x00070bd6) mup_visualizer_pane_g1_ParamLimits

0xced2,	// (0x00070bd6) mup_visualizer_pane_g1

0xced2,	// (0x00070bd6) mup_visualizer_pane_g2_ParamLimits

0xced2,	// (0x00070bd6) mup_visualizer_pane_g2

0xcd48,	// (0x00070a4c) mup_visualizer_pane_g3_ParamLimits

0xcd48,	// (0x00070a4c) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x00073151) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x00073151) mup_visualizer_pane_g

0xc33e,	// (0x00070042) mup_volume_pane_g1

0xcee8,	// (0x00070bec) mup_volume_pane_g2

0x0001,

0xf454,	// (0x00073158) mup_volume_pane_g

0xc33e,	// (0x00070042) mup_progress_pane_g1

0xcef1,	// (0x00070bf5) mup_progress_pane_g2

0xcefa,	// (0x00070bfe) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0007315d) mup_progress_pane_g

0xbfc9,	// (0x0006fccd) bg_popup_window_pane_cp05

0xcf03,	// (0x00070c07) heading_pane_cp02_ParamLimits

0xcf03,	// (0x00070c07) heading_pane_cp02

0xcf1d,	// (0x00070c21) list_popup_blid_pane

0xcf25,	// (0x00070c29) list_blid_sat_info_pane_ParamLimits

0xcf25,	// (0x00070c29) list_blid_sat_info_pane

0xcf38,	// (0x00070c3c) list_blid_sat_info_pane_g1

0xcf40,	// (0x00070c44) list_blid_sat_info_pane_t1

0x2e6e,	// (0x00066b72) mup_equalizer_pane_ParamLimits

0x2e6e,	// (0x00066b72) mup_equalizer_pane

0x2e87,	// (0x00066b8b) mup_equalizer_pane_cp1_ParamLimits

0x2e87,	// (0x00066b8b) mup_equalizer_pane_cp1

0x2ea4,	// (0x00066ba8) mup_equalizer_pane_cp2_ParamLimits

0x2ea4,	// (0x00066ba8) mup_equalizer_pane_cp2

0x2ec1,	// (0x00066bc5) mup_equalizer_pane_cp3_ParamLimits

0x2ec1,	// (0x00066bc5) mup_equalizer_pane_cp3

0x2ee2,	// (0x00066be6) mup_equalizer_pane_cp4_ParamLimits

0x2ee2,	// (0x00066be6) mup_equalizer_pane_cp4

0x2f03,	// (0x00066c07) mup_equalizer_pane_cp5

0x2f17,	// (0x00066c1b) mup_equalizer_pane_cp6

0x2f2b,	// (0x00066c2f) mup_equalizer_pane_cp7

0xe113,	// (0x00071e17) bg_popup_call_poc_act_pane_g9

0xe11b,	// (0x00071e1f) bg_popup_call_poc_act_pane_g10

0xe123,	// (0x00071e27) bg_popup_call_poc_act_pane_g11

0x000a,

0xc224,	// (0x0006ff28) mup_scale_pane

0xc33e,	// (0x00070042) mup_scale_pane_g1

0xcf4e,	// (0x00070c52) mup_scale_pane_g2

0x0006,

0xf475,	// (0x00073179) mup_scale_pane_g

0xcf72,	// (0x00070c76) msg_data_pane

0xcf7a,	// (0x00070c7e) scroll_pane_cp017

0x2f51,	// (0x00066c55) bg_list_pane_cp04_ParamLimits

0x2f51,	// (0x00066c55) bg_list_pane_cp04

0xcf82,	// (0x00070c86) msg_data_pane_g1

0x2f69,	// (0x00066c6d) msg_data_pane_g2

0x2f73,	// (0x00066c77) msg_data_pane_g3

0x2f7b,	// (0x00066c7f) msg_data_pane_g4

0x2f83,	// (0x00066c87) msg_data_pane_g5

0x2f8b,	// (0x00066c8f) msg_data_pane_g6

0x2f93,	// (0x00066c97) msg_data_pane_g7

0x0006,

0xf484,	// (0x00073188) msg_data_pane_g

0x2f9b,	// (0x00066c9f) msg_text_pane_ParamLimits

0x2f9b,	// (0x00066c9f) msg_text_pane

0x2fc0,	// (0x00066cc4) qrid_highlight_pane_cp011_ParamLimits

0x2fc0,	// (0x00066cc4) qrid_highlight_pane_cp011

0xbfc9,	// (0x0006fccd) msg_body_pane

0xbfc9,	// (0x0006fccd) msg_header_pane

0xcf8a,	// (0x00070c8e) input_focus_pane_cp07

0x2fef,	// (0x00066cf3) msg_header_pane_t1_ParamLimits

0x2fef,	// (0x00066cf3) msg_header_pane_t1

0xd700,	// (0x00071404) msg_header_pane_t2_ParamLimits

0xd700,	// (0x00071404) msg_header_pane_t2

0x0001,

0xf498,	// (0x0007319c) msg_header_pane_t_ParamLimits

0xf498,	// (0x0007319c) msg_header_pane_t

0xcf9f,	// (0x00070ca3) msg_body_pane_g1

0x3001,	// (0x00066d05) msg_body_pane_t1_ParamLimits

0x3001,	// (0x00066d05) msg_body_pane_t1

0xd712,	// (0x00071416) msg_body_pane_t2_ParamLimits

0xd712,	// (0x00071416) msg_body_pane_t2

0xd724,	// (0x00071428) msg_body_pane_t3_ParamLimits

0xd724,	// (0x00071428) msg_body_pane_t3

0x0002,

0xf49d,	// (0x000731a1) msg_body_pane_t_ParamLimits

0xf49d,	// (0x000731a1) msg_body_pane_t

0x306c,	// (0x00066d70) main_viewer_pane_g1_ParamLimits

0x306c,	// (0x00066d70) main_viewer_pane_g1

0x307a,	// (0x00066d7e) main_viewer_pane_g2_ParamLimits

0x307a,	// (0x00066d7e) main_viewer_pane_g2

0x3088,	// (0x00066d8c) main_viewer_pane_g3_ParamLimits

0x3088,	// (0x00066d8c) main_viewer_pane_g3

0x3097,	// (0x00066d9b) main_viewer_pane_g4_ParamLimits

0x3097,	// (0x00066d9b) main_viewer_pane_g4

0xaa56,	// (0x0006e75a) main_viewer_pane_g5_ParamLimits

0xaa56,	// (0x0006e75a) main_viewer_pane_g5

0xaa56,	// (0x0006e75a) main_viewer_pane_g7_ParamLimits

0xaa56,	// (0x0006e75a) main_viewer_pane_g7

0xc9cb,	// (0x000706cf) main_viewer_pane_g8_ParamLimits

0xc9cb,	// (0x000706cf) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x000731b1) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x000731b1) main_viewer_pane_g

0xcfa7,	// (0x00070cab) viewer_content_pane_ParamLimits

0xcfa7,	// (0x00070cab) viewer_content_pane

0x30d3,	// (0x00066dd7) main_postcard_pane_g1_ParamLimits

0x30d3,	// (0x00066dd7) main_postcard_pane_g1

0x30e9,	// (0x00066ded) main_postcard_pane_g2_ParamLimits

0x30e9,	// (0x00066ded) main_postcard_pane_g2

0x30ff,	// (0x00066e03) main_postcard_pane_g3_ParamLimits

0x30ff,	// (0x00066e03) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x000731c2) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x000731c2) main_postcard_pane_g

0x3116,	// (0x00066e1a) main_postcard_pane_g4

0xe303,	// (0x00072007) smil_status_volume_pane_g2

0x3159,	// (0x00066e5d) postcard_pane_ParamLimits

0x3159,	// (0x00066e5d) postcard_pane

0xcfb5,	// (0x00070cb9) postcard_pane_g1_ParamLimits

0xcfb5,	// (0x00070cb9) postcard_pane_g1

0x319b,	// (0x00066e9f) postcard_pane_g2_ParamLimits

0x319b,	// (0x00066e9f) postcard_pane_g2

0x31a7,	// (0x00066eab) postcard_pane_g3_ParamLimits

0x31a7,	// (0x00066eab) postcard_pane_g3

0xcfc3,	// (0x00070cc7) postcard_pane_g4_ParamLimits

0xcfc3,	// (0x00070cc7) postcard_pane_g4

0x31b3,	// (0x00066eb7) postcard_pane_g5_ParamLimits

0x31b3,	// (0x00066eb7) postcard_pane_g5

0x31c8,	// (0x00066ecc) postcard_pane_g6_ParamLimits

0x31c8,	// (0x00066ecc) postcard_pane_g6

0xcfb5,	// (0x00070cb9) postcard_pane_g7_ParamLimits

0xcfb5,	// (0x00070cb9) postcard_pane_g7

0x0006,

0xf4cb,	// (0x000731cf) postcard_pane_g_ParamLimits

0xf4cb,	// (0x000731cf) postcard_pane_g

0x31dc,	// (0x00066ee0) main_mp2_pane_g1_ParamLimits

0x31dc,	// (0x00066ee0) main_mp2_pane_g1

0x31e8,	// (0x00066eec) main_mp2_pane_g2_ParamLimits

0x31e8,	// (0x00066eec) main_mp2_pane_g2

0x31f4,	// (0x00066ef8) main_mp2_pane_g3_ParamLimits

0x31f4,	// (0x00066ef8) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x000731de) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x000731de) main_mp2_pane_g

0x3200,	// (0x00066f04) main_mp2_pane_t1_ParamLimits

0x3200,	// (0x00066f04) main_mp2_pane_t1

0x3215,	// (0x00066f19) main_mp2_pane_t2_ParamLimits

0x3215,	// (0x00066f19) main_mp2_pane_t2

0x3227,	// (0x00066f2b) main_mp2_pane_t3_ParamLimits

0x3227,	// (0x00066f2b) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x000731e5) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x000731e5) main_mp2_pane_t

0xcfd1,	// (0x00070cd5) pec_content_pane_ParamLimits

0xcfd1,	// (0x00070cd5) pec_content_pane

0xc65a,	// (0x0007035e) scroll_pane_cp015

0xcfe3,	// (0x00070ce7) pec_attribute_pane_ParamLimits

0xcfe3,	// (0x00070ce7) pec_attribute_pane

0x3239,	// (0x00066f3d) pec_content_pane_g1_ParamLimits

0x3239,	// (0x00066f3d) pec_content_pane_g1

0xcff3,	// (0x00070cf7) pec_content_pane_t1_ParamLimits

0xcff3,	// (0x00070cf7) pec_content_pane_t1

0xd005,	// (0x00070d09) pec_content_pane_t2_ParamLimits

0xd005,	// (0x00070d09) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x000731ec) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x000731ec) pec_content_pane_t

0x3245,	// (0x00066f49) list_single_graphic_pane_cp01_ParamLimits

0x3245,	// (0x00066f49) list_single_graphic_pane_cp01

0xc224,	// (0x0006ff28) bg_popup_sub_pane_cp04

0xd017,	// (0x00070d1b) popup_mup_playback_window_g1

0xd023,	// (0x00070d27) popup_mup_playback_window_t1

0xd038,	// (0x00070d3c) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x000731f1) popup_mup_playback_window_t

0xd06f,	// (0x00070d73) main_image_pane_g1_ParamLimits

0xd06f,	// (0x00070d73) main_image_pane_g1

0xd0b2,	// (0x00070db6) scroll_pane_cp018_ParamLimits

0xd0b2,	// (0x00070db6) scroll_pane_cp018

0xd0ca,	// (0x00070dce) scroll_pane_cp016_ParamLimits

0xd0ca,	// (0x00070dce) scroll_pane_cp016

0x3312,	// (0x00067016) smil2_image_pane_ParamLimits

0x3312,	// (0x00067016) smil2_image_pane

0x3342,	// (0x00067046) smil2_root_pane_ParamLimits

0x3342,	// (0x00067046) smil2_root_pane

0x337a,	// (0x0006707e) smil2_text_pane_ParamLimits

0x337a,	// (0x0006707e) smil2_text_pane

0xbfc9,	// (0x0006fccd) bg_list_pane_cp06

0xd106,	// (0x00070e0a) grid_radio_pane

0xbfc9,	// (0x0006fccd) bg_popup_window_pane_cp06

0xd10e,	// (0x00070e12) main_fmradio_pane_t1

0xcb97,	// (0x0007089b) heading_pane_cp04

0xd11c,	// (0x00070e20) main_fmradio_pane_t2

0xe12b,	// (0x00071e2f) popup_cale_lunar_info_window_g1

0xd12a,	// (0x00070e2e) main_fmradio_pane_t3

0xe133,	// (0x00071e37) popup_cale_lunar_info_window_g2

0xd138,	// (0x00070e3c) main_fmradio_pane_t4

0x0001,

0xd146,	// (0x00070e4a) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x000732cc) popup_cale_lunar_info_window_g

0xf502,	// (0x00073206) main_fmradio_pane_t

0xd154,	// (0x00070e58) wait_bar_pane_cp03

0xd15c,	// (0x00070e60) cell_fmradio_pane_ParamLimits

0xd15c,	// (0x00070e60) cell_fmradio_pane

0xcfb5,	// (0x00070cb9) cell_fmradio_pane_g1_ParamLimits

0xcfb5,	// (0x00070cb9) cell_fmradio_pane_g1

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp011

0xd16f,	// (0x00070e73) poc_content_pane_ParamLimits

0xd16f,	// (0x00070e73) poc_content_pane

0xd181,	// (0x00070e85) scroll_pane_cp019

0x33fa,	// (0x000670fe) popup_call_poc_act_window_ParamLimits

0x33fa,	// (0x000670fe) popup_call_poc_act_window

0x341e,	// (0x00067122) popup_call_poc_inact_window_ParamLimits

0x341e,	// (0x00067122) popup_call_poc_inact_window

0xf59f,	// (0x000732a3) bg_popup_call_poc_act_pane_g

0xe0a3,	// (0x00071da7) bg_popup_call_poc_inact_pane_g1

0xe0ab,	// (0x00071daf) bg_popup_call_poc_inact_pane_g2

0xd189,	// (0x00070e8d) popup_call_poc_act_window_g2

0xe0b3,	// (0x00071db7) bg_popup_call_poc_inact_pane_g3

0xe0bb,	// (0x00071dbf) bg_popup_call_poc_inact_pane_g4

0xe0c3,	// (0x00071dc7) bg_popup_call_poc_inact_pane_g5

0xd191,	// (0x00070e95) popup_call_poc_act_window_t1_ParamLimits

0xd191,	// (0x00070e95) popup_call_poc_act_window_t1

0xd1b9,	// (0x00070ebd) popup_call_poc_act_window_t2_ParamLimits

0xd1b9,	// (0x00070ebd) popup_call_poc_act_window_t2

0xd1e1,	// (0x00070ee5) popup_call_poc_act_window_t3_ParamLimits

0xd1e1,	// (0x00070ee5) popup_call_poc_act_window_t3

0xd209,	// (0x00070f0d) popup_call_poc_act_window_t4_ParamLimits

0xd209,	// (0x00070f0d) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x00073211) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x00073211) popup_call_poc_act_window_t

0xe0cb,	// (0x00071dcf) bg_popup_call_poc_inact_pane_g6

0xe0d3,	// (0x00071dd7) bg_popup_call_poc_inact_pane_g7

0xe0db,	// (0x00071ddf) bg_popup_call_poc_inact_pane_g8

0xd21b,	// (0x00070f1f) popup_call_poc_inact_window_g2

0xe0e3,	// (0x00071de7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x00073290) bg_popup_call_poc_inact_pane_g

0xd223,	// (0x00070f27) popup_call_poc_inact_window_t1_ParamLimits

0xd223,	// (0x00070f27) popup_call_poc_inact_window_t1

0xd238,	// (0x00070f3c) popup_call_poc_inact_window_t2_ParamLimits

0xd238,	// (0x00070f3c) popup_call_poc_inact_window_t2

0xd24d,	// (0x00070f51) popup_call_poc_inact_window_t3_ParamLimits

0xd24d,	// (0x00070f51) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0007321a) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0007321a) popup_call_poc_inact_window_t

0xe276,	// (0x00071f7a) context_pane_ParamLimits

0x3c55,	// (0x00067959) signal_pane_ParamLimits

0xce13,	// (0x00070b17) main_call2_pane

0xaaa1,	// (0x0006e7a5) popup_phob_thumbnail2_window_ParamLimits

0xaaa1,	// (0x0006e7a5) popup_phob_thumbnail2_window

0xaa3e,	// (0x0006e742) aid_hotspot_pointer_arrow_pane

0xaa46,	// (0x0006e74a) aid_hotspot_pointer_hand_pane

0x3767,	// (0x0006746b) phob_pre_status_pane_g5

0x11ec,	// (0x00064ef0) cams_zoom_pane_ParamLimits

0x11fb,	// (0x00064eff) image_vga_pane_ParamLimits

0x1215,	// (0x00064f19) main_camera_pane_g1_ParamLimits

0x1227,	// (0x00064f2b) main_camera_pane_g2_ParamLimits

0x1237,	// (0x00064f3b) main_camera_pane_g3_ParamLimits

0x1247,	// (0x00064f4b) main_camera_pane_g4_ParamLimits

0x1257,	// (0x00064f5b) main_camera_pane_g5_ParamLimits

0x1267,	// (0x00064f6b) main_camera_pane_g6_ParamLimits

0x1279,	// (0x00064f7d) main_camera_pane_g7_ParamLimits

0xf215,	// (0x00072f19) main_camera_pane_g_ParamLimits

0x1289,	// (0x00064f8d) main_camera_pane_t1_ParamLimits

0x129f,	// (0x00064fa3) main_camera_pane_t2_ParamLimits

0xf226,	// (0x00072f2a) main_camera_pane_t_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_preview_window_pane_cp01_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_preview_window_pane_cp01

0xd262,	// (0x00070f66) popup_phob_thumbnail2_window_g1_ParamLimits

0xd262,	// (0x00070f66) popup_phob_thumbnail2_window_g1

0xbfc9,	// (0x0006fccd) call2_cli_visual_pane

0x3452,	// (0x00067156) popup_call2_audio_conf_window_ParamLimits

0x3452,	// (0x00067156) popup_call2_audio_conf_window

0x3472,	// (0x00067176) popup_call2_audio_first_window_ParamLimits

0x3472,	// (0x00067176) popup_call2_audio_first_window

0x3508,	// (0x0006720c) popup_call2_audio_in_window_ParamLimits

0x3508,	// (0x0006720c) popup_call2_audio_in_window

0x3550,	// (0x00067254) popup_call2_audio_out_window_ParamLimits

0x3550,	// (0x00067254) popup_call2_audio_out_window

0x35ba,	// (0x000672be) popup_call2_audio_second_window_ParamLimits

0x35ba,	// (0x000672be) popup_call2_audio_second_window

0x3620,	// (0x00067324) popup_call2_audio_wait_window_ParamLimits

0x3620,	// (0x00067324) popup_call2_audio_wait_window

0xbfc9,	// (0x0006fccd) bg_popup_call2_act_pane_cp03

0xc206,	// (0x0006ff0a) list_conf_pane_cp

0xd26e,	// (0x00070f72) popup_call2_audio_conf_window_t1

0xcbf4,	// (0x000708f8) list_single_graphic_popup_conf2_pane_ParamLimits

0xcbf4,	// (0x000708f8) list_single_graphic_popup_conf2_pane

0xcc07,	// (0x0007090b) list_highlight_pane_cp04

0xd27c,	// (0x00070f80) list_single_graphic_popup_conf2_pane_g1

0xcc18,	// (0x0007091c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x00073221) list_single_graphic_popup_conf2_pane_g

0xd286,	// (0x00070f8a) list_single_graphic_popup_conf2_pane_t1

0xd294,	// (0x00070f98) bg_popup_call2_act_pane_cp01_ParamLimits

0xd294,	// (0x00070f98) bg_popup_call2_act_pane_cp01

0xd31e,	// (0x00071022) call_type_pane_cp05_ParamLimits

0xd31e,	// (0x00071022) call_type_pane_cp05

0xd372,	// (0x00071076) popup_call2_audio_second_window_g1_ParamLimits

0xd372,	// (0x00071076) popup_call2_audio_second_window_g1

0xd3c6,	// (0x000710ca) popup_call2_audio_second_window_g2_ParamLimits

0xd3c6,	// (0x000710ca) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x00073226) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x00073226) popup_call2_audio_second_window_g

0xd42b,	// (0x0007112f) popup_call2_audio_second_window_t1_ParamLimits

0xd42b,	// (0x0007112f) popup_call2_audio_second_window_t1

0xd4e6,	// (0x000711ea) popup_call2_audio_second_window_t2_ParamLimits

0xd4e6,	// (0x000711ea) popup_call2_audio_second_window_t2

0xd539,	// (0x0007123d) popup_call2_audio_second_window_t3_ParamLimits

0xd539,	// (0x0007123d) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0007322d) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0007322d) popup_call2_audio_second_window_t

0xbfc9,	// (0x0006fccd) bg_popup_call2_in_pane_cp02

0xbfd3,	// (0x0006fcd7) call_type_pane_cp04

0xbfdb,	// (0x0006fcdf) popup_call2_audio_wait_window_g1

0xbfe3,	// (0x0006fce7) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x00072e06) popup_call2_audio_wait_window_g

0xbfeb,	// (0x0006fcef) popup_call2_audio_wait_window_t3

0xd62c,	// (0x00071330) bg_popup_call2_act_pane_ParamLimits

0xd62c,	// (0x00071330) bg_popup_call2_act_pane

0xd736,	// (0x0007143a) call_type_pane_cp03_ParamLimits

0xd736,	// (0x0007143a) call_type_pane_cp03

0xd79a,	// (0x0007149e) popup_call2_audio_first_window_g1_ParamLimits

0xd79a,	// (0x0007149e) popup_call2_audio_first_window_g1

0xd80a,	// (0x0007150e) popup_call2_audio_first_window_g2_ParamLimits

0xd80a,	// (0x0007150e) popup_call2_audio_first_window_g2

0xced2,	// (0x00070bd6) popup_call2_audio_first_window_g3_ParamLimits

0xced2,	// (0x00070bd6) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x00073236) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x00073236) popup_call2_audio_first_window_g

0xd8e8,	// (0x000715ec) popup_call2_audio_first_window_t1_ParamLimits

0xd8e8,	// (0x000715ec) popup_call2_audio_first_window_t1

0xd9eb,	// (0x000716ef) popup_call2_audio_first_window_t4_ParamLimits

0xd9eb,	// (0x000716ef) popup_call2_audio_first_window_t4

0xdace,	// (0x000717d2) popup_call2_audio_first_window_t5_ParamLimits

0xdace,	// (0x000717d2) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x00073241) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x00073241) popup_call2_audio_first_window_t

0xc21c,	// (0x0006ff20) bg_popup_call2_act_pane_g1

0xe13b,	// (0x00071e3f) popup_cale_lunar_info_window_t1

0xe149,	// (0x00071e4d) popup_cale_lunar_info_window_t2

0xe157,	// (0x00071e5b) popup_cale_lunar_info_window_t3

0xbfc9,	// (0x0006fccd) bg_popup_call2_bubble_pane

0xdbcf,	// (0x000718d3) bg_popup_call2_in_pane_cp01_ParamLimits

0xdbcf,	// (0x000718d3) bg_popup_call2_in_pane_cp01

0xa5ee,	// (0x0006e2f2) call_type_pane_cp02

0xdc17,	// (0x0007191b) popup_call2_audio_out_window_g1_ParamLimits

0xdc17,	// (0x0007191b) popup_call2_audio_out_window_g1

0xdc43,	// (0x00071947) popup_call2_audio_out_window_g2_ParamLimits

0xdc43,	// (0x00071947) popup_call2_audio_out_window_g2

0xdc6b,	// (0x0007196f) popup_call2_audio_out_window_g3_ParamLimits

0xdc6b,	// (0x0007196f) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0007324a) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0007324a) popup_call2_audio_out_window_g

0xdca6,	// (0x000719aa) popup_call2_audio_out_window_t1_ParamLimits

0xdca6,	// (0x000719aa) popup_call2_audio_out_window_t1

0xdd05,	// (0x00071a09) popup_call2_audio_out_window_t2_ParamLimits

0xdd05,	// (0x00071a09) popup_call2_audio_out_window_t2

0xdd59,	// (0x00071a5d) popup_call2_audio_out_window_t3_ParamLimits

0xdd59,	// (0x00071a5d) popup_call2_audio_out_window_t3

0xdd6f,	// (0x00071a73) popup_call2_audio_out_window_t4_ParamLimits

0xdd6f,	// (0x00071a73) popup_call2_audio_out_window_t4

0xdd85,	// (0x00071a89) popup_call2_audio_out_window_t5_ParamLimits

0xdd85,	// (0x00071a89) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x00073253) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x00073253) popup_call2_audio_out_window_t

0xdde9,	// (0x00071aed) bg_popup_call2_in_pane_ParamLimits

0xdde9,	// (0x00071aed) bg_popup_call2_in_pane

0xde45,	// (0x00071b49) popup_call2_audio_in_window_g1_ParamLimits

0xde45,	// (0x00071b49) popup_call2_audio_in_window_g1

0xde7d,	// (0x00071b81) popup_call2_audio_in_window_g2_ParamLimits

0xde7d,	// (0x00071b81) popup_call2_audio_in_window_g2

0xdeb5,	// (0x00071bb9) popup_call2_audio_in_window_g3_ParamLimits

0xdeb5,	// (0x00071bb9) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x00073260) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x00073260) popup_call2_audio_in_window_g

0xdf0d,	// (0x00071c11) popup_call2_audio_in_window_t1_ParamLimits

0xdf0d,	// (0x00071c11) popup_call2_audio_in_window_t1

0xdf8d,	// (0x00071c91) popup_call2_audio_in_window_t2_ParamLimits

0xdf8d,	// (0x00071c91) popup_call2_audio_in_window_t2

0xe00d,	// (0x00071d11) popup_call2_audio_in_window_t3_ParamLimits

0xe00d,	// (0x00071d11) popup_call2_audio_in_window_t3

0xe027,	// (0x00071d2b) popup_call2_audio_in_window_t4_ParamLimits

0xe027,	// (0x00071d2b) popup_call2_audio_in_window_t4

0xe039,	// (0x00071d3d) popup_call2_audio_in_window_t5_ParamLimits

0xe039,	// (0x00071d3d) popup_call2_audio_in_window_t5

0xe04e,	// (0x00071d52) popup_call2_audio_in_window_t6_ParamLimits

0xe04e,	// (0x00071d52) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x00073269) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x00073269) popup_call2_audio_in_window_t

0xc21c,	// (0x0006ff20) bg_popup_call2_in_pane_g1

0xe165,	// (0x00071e69) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x000732d1) popup_cale_lunar_info_window_t

0xc224,	// (0x0006ff28) bg_popup_call2_rect_pane_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_call2_rect_pane

0xbfc9,	// (0x0006fccd) call2_cli_visual_graphic_pane

0xbfc9,	// (0x0006fccd) call2_cli_visual_text_pane

0xaac8,	// (0x0006e7cc) smil_status_volume_pane_g3

0x0002,

0xc33e,	// (0x00070042) call2_cli_visual_graphic_pane_g1

0xc33e,	// (0x00070042) call2_cli_visual_graphic_pane_g2

0xc33e,	// (0x00070042) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x00073276) call2_cli_visual_graphic_pane_g

0xe063,	// (0x00071d67) bg_popup_call2_rect_pane_g1

0xc3ca,	// (0x000700ce) bg_popup_call2_rect_pane_g2

0xe06b,	// (0x00071d6f) bg_popup_call2_rect_pane_g3

0xe073,	// (0x00071d77) bg_popup_call2_rect_pane_g4

0xe07b,	// (0x00071d7f) bg_popup_call2_rect_pane_g5

0xe083,	// (0x00071d87) bg_popup_call2_rect_pane_g6

0xe08b,	// (0x00071d8f) bg_popup_call2_rect_pane_g7

0xe093,	// (0x00071d97) bg_popup_call2_rect_pane_g8

0xe09b,	// (0x00071d9f) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0007327d) bg_popup_call2_rect_pane_g

0xe0a3,	// (0x00071da7) bg_popup_call2_bubble_pane_g1

0xe0ab,	// (0x00071daf) bg_popup_call2_bubble_pane_g2

0xe0b3,	// (0x00071db7) bg_popup_call2_bubble_pane_g3

0xe0bb,	// (0x00071dbf) bg_popup_call2_bubble_pane_g4

0xe0c3,	// (0x00071dc7) bg_popup_call2_bubble_pane_g5

0xe0cb,	// (0x00071dcf) bg_popup_call2_bubble_pane_g6

0xe0d3,	// (0x00071dd7) bg_popup_call2_bubble_pane_g7

0xe0db,	// (0x00071ddf) bg_popup_call2_bubble_pane_g8

0xe0e3,	// (0x00071de7) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x00073290) bg_popup_call2_bubble_pane_g

0x0b7a,	// (0x0006487e) aid_cale_week_size_cell_pane

0x12b5,	// (0x00064fb9) aid_cams_cif_uncrop_pane_ParamLimits

0x12b5,	// (0x00064fb9) aid_cams_cif_uncrop_pane

0x1465,	// (0x00065169) aid_cams_size_cell_ParamLimits

0x1465,	// (0x00065169) aid_cams_size_cell

0x1479,	// (0x0006517d) grid_cams_pane_ParamLimits

0x1493,	// (0x00065197) linegrid_cams_pane_ParamLimits

0x1673,	// (0x00065377) call_video_pane_t1

0x1691,	// (0x00065395) call_video_pane_t2

0x0001,

0xf279,	// (0x00072f7d) call_video_pane_t

0x1abd,	// (0x000657c1) aid_cale_month_size_cell_pane_ParamLimits

0x1abd,	// (0x000657c1) aid_cale_month_size_cell_pane

0xf616,	// (0x0007331a) smil_status_volume_pane_g

0xaad5,	// (0x0006e7d9) volume_smil_pane_ParamLimits

0xa481,	// (0x0006e185) aid_popup2_width_pane

0x0ad4,	// (0x000647d8) cell_qdial_pane_g4_ParamLimits

0x0ad4,	// (0x000647d8) cell_qdial_pane_g4

0x298c,	// (0x00066690) aid_blid_cardinal_pane_ParamLimits

0x2998,	// (0x0006669c) aid_blid_destination_pane_ParamLimits

0x2998,	// (0x0006669c) aid_blid_destination_pane

0xc224,	// (0x0006ff28) bg_popup_call_poc_act_pane_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_call_poc_act_pane

0xc224,	// (0x0006ff28) bg_popup_call_poc_inact_pane_ParamLimits

0xc224,	// (0x0006ff28) bg_popup_call_poc_inact_pane

0xe0eb,	// (0x00071def) bg_popup_call_poc_act_pane_g1

0xe0f3,	// (0x00071df7) bg_popup_call_poc_act_pane_g2

0xe0fb,	// (0x00071dff) bg_popup_call_poc_act_pane_g3

0xe0bb,	// (0x00071dbf) bg_popup_call_poc_act_pane_g4

0xe0c3,	// (0x00071dc7) bg_popup_call_poc_act_pane_g5

0xe103,	// (0x00071e07) bg_popup_call_poc_act_pane_g6

0xe0d3,	// (0x00071dd7) bg_popup_call_poc_act_pane_g7

0xe10b,	// (0x00071e0f) bg_popup_call_poc_act_pane_g8

0xbfc9,	// (0x0006fccd) main_usb_pane

0xaa7c,	// (0x0006e780) popup_cale_lunar_info_window

0x1969,	// (0x0006566d) im_reading_pane_t1_ParamLimits

0xc5b2,	// (0x000702b6) list_im_pane_ParamLimits

0xc5c3,	// (0x000702c7) scroll_pane_cp07_ParamLimits

0xbfc9,	// (0x0006fccd) grid_highlight_pane_cp012

0xc224,	// (0x0006ff28) mup_scale_pane_ParamLimits

0xcfb5,	// (0x00070cb9) main_usb_pane_g1_ParamLimits

0xcfb5,	// (0x00070cb9) main_usb_pane_g1

0x367c,	// (0x00067380) main_usb_pane_g2_ParamLimits

0x367c,	// (0x00067380) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x000732ba) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x000732ba) main_usb_pane_g

0x3692,	// (0x00067396) main_usb_pane_t1_ParamLimits

0x3692,	// (0x00067396) main_usb_pane_t1

0x36a4,	// (0x000673a8) main_usb_pane_t2_ParamLimits

0x36a4,	// (0x000673a8) main_usb_pane_t2

0x36b6,	// (0x000673ba) main_usb_pane_t3_ParamLimits

0x36b6,	// (0x000673ba) main_usb_pane_t3

0x36c8,	// (0x000673cc) main_usb_pane_t4_ParamLimits

0x36c8,	// (0x000673cc) main_usb_pane_t4

0x36da,	// (0x000673de) main_usb_pane_t5_ParamLimits

0x36da,	// (0x000673de) main_usb_pane_t5

0x36ec,	// (0x000673f0) main_usb_pane_t6_ParamLimits

0x36ec,	// (0x000673f0) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x000732bf) main_usb_pane_t_ParamLimits

0x293b,	// (0x0006663f) aid_text_placing

0x2944,	// (0x00066648) main_location2_pane_t1_ParamLimits

0x2956,	// (0x0006665a) main_location2_pane_t2_ParamLimits

0x2968,	// (0x0006666c) main_location2_pane_t3_ParamLimits

0x297a,	// (0x0006667e) main_location2_pane_t4_ParamLimits

0x297a,	// (0x0006667e) main_location2_pane_t4

0xf3da,	// (0x000730de) main_location2_pane_t_ParamLimits

0xc260,	// (0x0006ff64) find_pinb_pane_g2_ParamLimits

0xc260,	// (0x0006ff64) find_pinb_pane_g2

0x0001,

0xf128,	// (0x00072e2c) find_pinb_pane_g_ParamLimits

0xf128,	// (0x00072e2c) find_pinb_pane_g

0xc26c,	// (0x0006ff70) find_pinb_pane_t1_ParamLimits

0xc27e,	// (0x0006ff82) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x00072e31) find_pinb_pane_t_ParamLimits

0xbfc9,	// (0x0006fccd) main_call3_pane

0x1f7c,	// (0x00065c80) cale_month_day_heading_pane_t1_ParamLimits

0x2002,	// (0x00065d06) cale_month_day_heading_pane_t2_ParamLimits

0x2093,	// (0x00065d97) cale_month_day_heading_pane_t3_ParamLimits

0x2124,	// (0x00065e28) cale_month_day_heading_pane_t4_ParamLimits

0x21b9,	// (0x00065ebd) cale_month_day_heading_pane_t5_ParamLimits

0x225a,	// (0x00065f5e) cale_month_day_heading_pane_t6_ParamLimits

0x22fb,	// (0x00065fff) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x00072fb5) cale_month_day_heading_pane_t_ParamLimits

0xc80d,	// (0x00070511) smil_status_volume_pane

0x3177,	// (0x00066e7b) postcard_address_pane_ParamLimits

0x3177,	// (0x00066e7b) postcard_address_pane

0x3189,	// (0x00066e8d) postcard_message_pane_ParamLimits

0x3189,	// (0x00066e8d) postcard_message_pane

0x365a,	// (0x0006735e) call2_cli_visual_pane_t1_ParamLimits

0x365a,	// (0x0006735e) call2_cli_visual_pane_t1

0x3e82,	// (0x00067b86) postcard_message_pane_t1_ParamLimits

0x3e82,	// (0x00067b86) postcard_message_pane_t1

0x3e6b,	// (0x00067b6f) postcard_address_pane_t1_ParamLimits

0x3e6b,	// (0x00067b6f) postcard_address_pane_t1

0x3e57,	// (0x00067b5b) popup_call3_audio_in_window_ParamLimits

0x3e57,	// (0x00067b5b) popup_call3_audio_in_window

0x3ce2,	// (0x000679e6) bg_popup_call3_in_pane_ParamLimits

0x3ce2,	// (0x000679e6) bg_popup_call3_in_pane

0x3d58,	// (0x00067a5c) popup_call3_audio_in_window_g1_ParamLimits

0x3d58,	// (0x00067a5c) popup_call3_audio_in_window_g1

0x3d78,	// (0x00067a7c) popup_call3_audio_in_window_g2_ParamLimits

0x3d78,	// (0x00067a7c) popup_call3_audio_in_window_g2

0x3d98,	// (0x00067a9c) popup_call3_audio_in_window_g3_ParamLimits

0x3d98,	// (0x00067a9c) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x00073321) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x00073321) popup_call3_audio_in_window_g

0x3dc9,	// (0x00067acd) popup_call3_audio_in_window_t1_ParamLimits

0x3dc9,	// (0x00067acd) popup_call3_audio_in_window_t1

0x3e07,	// (0x00067b0b) popup_call3_audio_in_window_t2_ParamLimits

0x3e07,	// (0x00067b0b) popup_call3_audio_in_window_t2

0x3e45,	// (0x00067b49) popup_call3_audio_in_window_t3_ParamLimits

0x3e45,	// (0x00067b49) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0007332a) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0007332a) popup_call3_audio_in_window_t

0xce13,	// (0x00070b17) bg_popup_call3_rect_pane

0xe063,	// (0x00071d67) bg_popup_call3_rect_pane_g1

0xc3ca,	// (0x000700ce) bg_popup_call3_rect_pane_g2

0xe06b,	// (0x00071d6f) bg_popup_call3_rect_pane_g3

0xe073,	// (0x00071d77) bg_popup_call3_rect_pane_g4

0xe07b,	// (0x00071d7f) bg_popup_call3_rect_pane_g5

0xe083,	// (0x00071d87) bg_popup_call3_rect_pane_g6

0xe08b,	// (0x00071d8f) bg_popup_call3_rect_pane_g7

0x2d6e,	// (0x00066a72) mup_visualizer_osc_pane

0xcee0,	// (0x00070be4) mup_visualizer_spec_pane

0x3d12,	// (0x00067a16) call3_video_qcif_pane_ParamLimits

0x3d12,	// (0x00067a16) call3_video_qcif_pane

0x3d25,	// (0x00067a29) call3_video_qcif_uncrop_pane_ParamLimits

0x3d25,	// (0x00067a29) call3_video_qcif_uncrop_pane

0x3d33,	// (0x00067a37) call3_video_subqcif_pane_ParamLimits

0x3d33,	// (0x00067a37) call3_video_subqcif_pane

0x3d47,	// (0x00067a4b) call3_video_subqcif_uncrop_pane_ParamLimits

0x3d47,	// (0x00067a4b) call3_video_subqcif_uncrop_pane

0x3db8,	// (0x00067abc) popup_call3_audio_in_window_g4_ParamLimits

0x3db8,	// (0x00067abc) popup_call3_audio_in_window_g4

0x3cd1,	// (0x000679d5) mup_spec_half_pane

0x3cda,	// (0x000679de) mup_spec_half_pane_cp

0xe2d6,	// (0x00071fda) mup_osc_middle_pane

0xe2df,	// (0x00071fe3) mup_visualizer_osc_pane_g1

0x3cb1,	// (0x000679b5) mup_spec_bar_pane_ParamLimits

0x3cb1,	// (0x000679b5) mup_spec_bar_pane

0xe2c3,	// (0x00071fc7) mup_spec_bar_pane_g1

0xe2cd,	// (0x00071fd1) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00073315) mup_spec_bar_pane_g

0x0b7a,	// (0x0006487e) aid_cale_week_size_cell_pane_ParamLimits

0x0b94,	// (0x00064898) bg_cale_heading_pane_ParamLimits

0xc407,	// (0x0007010b) bg_cale_pane_cp01_ParamLimits

0x0bac,	// (0x000648b0) cale_week_corner_pane_ParamLimits

0x0bcb,	// (0x000648cf) cale_week_day_heading_pane_ParamLimits

0x0be8,	// (0x000648ec) cale_week_scroll_pane_g1_ParamLimits

0x0bfb,	// (0x000648ff) cale_week_scroll_pane_g2_ParamLimits

0x0c13,	// (0x00064917) cale_week_scroll_pane_g3_ParamLimits

0x0c2b,	// (0x0006492f) cale_week_scroll_pane_g4_ParamLimits

0x0c43,	// (0x00064947) cale_week_scroll_pane_g5_ParamLimits

0x0c63,	// (0x00064967) cale_week_scroll_pane_g6_ParamLimits

0x0c83,	// (0x00064987) cale_week_scroll_pane_g7_ParamLimits

0x0ca3,	// (0x000649a7) cale_week_scroll_pane_g8_ParamLimits

0x0cc7,	// (0x000649cb) cale_week_scroll_pane_g9_ParamLimits

0x0cdf,	// (0x000649e3) cale_week_scroll_pane_g10_ParamLimits

0x0cf7,	// (0x000649fb) cale_week_scroll_pane_g11_ParamLimits

0x0d0f,	// (0x00064a13) cale_week_scroll_pane_g12_ParamLimits

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g13_ParamLimits

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g14_ParamLimits

0x0d27,	// (0x00064a2b) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x00072ebd) cale_week_scroll_pane_g_ParamLimits

0x0d3f,	// (0x00064a43) cale_week_time_pane_ParamLimits

0x0d63,	// (0x00064a67) grid_cale_week_pane_ParamLimits

0xc425,	// (0x00070129) listscroll_cale_week_pane_t1

0xc437,	// (0x0007013b) scroll_pane_cp08_ParamLimits

0x1b12,	// (0x00065816) cale_month_corner_pane_ParamLimits

0xc7e3,	// (0x000704e7) cale_month_pane_t1

0x1f1a,	// (0x00065c1e) cale_month_week_pane_ParamLimits

0x2797,	// (0x0006649b) popup_call_status_window_g1_ParamLimits

0x27ab,	// (0x000664af) popup_call_status_window_g2_ParamLimits

0x27bf,	// (0x000664c3) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x00073065) popup_call_status_window_g_ParamLimits

0xcb87,	// (0x0007088b) aid_call2_pane

0x2fe1,	// (0x00066ce5) msg_header_pane_g1

0x3177,	// (0x00066e7b) postcard_address2_pane_ParamLimits

0x3177,	// (0x00066e7b) postcard_address2_pane

0x3189,	// (0x00066e8d) postcard_message2_pane_ParamLimits

0x3189,	// (0x00066e8d) postcard_message2_pane

0x3c63,	// (0x00067967) message2_row_pane_ParamLimits

0x3c63,	// (0x00067967) message2_row_pane

0x3c7f,	// (0x00067983) address2_row_pane_ParamLimits

0x3c7f,	// (0x00067983) address2_row_pane

0xe291,	// (0x00071f95) postcard_message2_row_pane_g1

0xe299,	// (0x00071f9d) postcard_message2_row_pane_t1

0xe291,	// (0x00071f95) address2_row_pane_g1

0xe299,	// (0x00071f9d) address2_row_pane_t1

0x1156,	// (0x00064e5a) aid_size_cell_vorec

0xbfc9,	// (0x0006fccd) main_rss_pane

0x3c92,	// (0x00067996) rss_list_single_pane_ParamLimits

0x3c92,	// (0x00067996) rss_list_single_pane

0xe2a7,	// (0x00071fab) rss_list_single_pane_t1

0xe2b5,	// (0x00071fb9) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x00073310) rss_list_single_pane_t

0xbfc9,	// (0x0006fccd) main_camera2_pane

0xbfc9,	// (0x0006fccd) main_video2_pane

0x3efb,	// (0x00067bff) cams_zoom_pane_cp2_ParamLimits

0x3efb,	// (0x00067bff) cams_zoom_pane_cp2

0x3f1b,	// (0x00067c1f) image2_vga_pane_ParamLimits

0x3f1b,	// (0x00067c1f) image2_vga_pane

0x3f6c,	// (0x00067c70) main_camera2_pane_g1_ParamLimits

0x3f6c,	// (0x00067c70) main_camera2_pane_g1

0x3f8c,	// (0x00067c90) main_camera2_pane_g2_ParamLimits

0x3f8c,	// (0x00067c90) main_camera2_pane_g2

0x3fac,	// (0x00067cb0) main_camera2_pane_g3_ParamLimits

0x3fac,	// (0x00067cb0) main_camera2_pane_g3

0x3fcc,	// (0x00067cd0) main_camera2_pane_g4_ParamLimits

0x3fcc,	// (0x00067cd0) main_camera2_pane_g4

0x3fec,	// (0x00067cf0) main_camera2_pane_g5_ParamLimits

0x3fec,	// (0x00067cf0) main_camera2_pane_g5

0x400c,	// (0x00067d10) main_camera2_pane_g6_ParamLimits

0x400c,	// (0x00067d10) main_camera2_pane_g6

0x402c,	// (0x00067d30) main_camera2_pane_g7_ParamLimits

0x402c,	// (0x00067d30) main_camera2_pane_g7

0x404c,	// (0x00067d50) main_camera2_pane_g8_ParamLimits

0x404c,	// (0x00067d50) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x00073331) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x00073331) main_camera2_pane_g

0x408c,	// (0x00067d90) main_camera2_pane_t1_ParamLimits

0x408c,	// (0x00067d90) main_camera2_pane_t1

0x40c1,	// (0x00067dc5) main_camera2_pane_t2_ParamLimits

0x40c1,	// (0x00067dc5) main_camera2_pane_t2

0x40e7,	// (0x00067deb) main_camera2_pane_t3_ParamLimits

0x40e7,	// (0x00067deb) main_camera2_pane_t3

0x4145,	// (0x00067e49) main_camera2_pane_t4_ParamLimits

0x4145,	// (0x00067e49) main_camera2_pane_t4

0x0006,

0xf640,	// (0x00073344) main_camera2_pane_t_ParamLimits

0xf640,	// (0x00073344) main_camera2_pane_t

0x41d7,	// (0x00067edb) cams_zoom_pane_cp4_ParamLimits

0x41d7,	// (0x00067edb) cams_zoom_pane_cp4

0x41ed,	// (0x00067ef1) image2_cif_pane_ParamLimits

0x41ed,	// (0x00067ef1) image2_cif_pane

0x4218,	// (0x00067f1c) image2_subqcif_pane_ParamLimits

0x4218,	// (0x00067f1c) image2_subqcif_pane

0x4232,	// (0x00067f36) main_video2_pane_g1_ParamLimits

0x4232,	// (0x00067f36) main_video2_pane_g1

0x424c,	// (0x00067f50) main_video2_pane_g2_ParamLimits

0x424c,	// (0x00067f50) main_video2_pane_g2

0x4262,	// (0x00067f66) main_video2_pane_g3_ParamLimits

0x4262,	// (0x00067f66) main_video2_pane_g3

0x4278,	// (0x00067f7c) main_video2_pane_g4_ParamLimits

0x4278,	// (0x00067f7c) main_video2_pane_g4

0x428e,	// (0x00067f92) main_video2_pane_g5_ParamLimits

0x428e,	// (0x00067f92) main_video2_pane_g5

0x42a4,	// (0x00067fa8) main_video2_pane_g6_ParamLimits

0x42a4,	// (0x00067fa8) main_video2_pane_g6

0x0005,

0xf64f,	// (0x00073353) main_video2_pane_g_ParamLimits

0xf64f,	// (0x00073353) main_video2_pane_g

0x42be,	// (0x00067fc2) main_video2_pane_t1_ParamLimits

0x42be,	// (0x00067fc2) main_video2_pane_t1

0x42e2,	// (0x00067fe6) main_video2_pane_t2_ParamLimits

0x42e2,	// (0x00067fe6) main_video2_pane_t2

0x4330,	// (0x00068034) main_video2_pane_t3_ParamLimits

0x4330,	// (0x00068034) main_video2_pane_t3

0x0002,

0xf65c,	// (0x00073360) main_video2_pane_t_ParamLimits

0xf65c,	// (0x00073360) main_video2_pane_t

0x37a7,	// (0x000674ab) call_muted_g2

0x0001,

0xf5fe,	// (0x00073302) call_muted_g

0xbfc9,	// (0x0006fccd) main_mup2_pane

0x4374,	// (0x00068078) main_mup2_pane_g1_ParamLimits

0x4374,	// (0x00068078) main_mup2_pane_g1

0x4380,	// (0x00068084) main_mup2_pane_g2_ParamLimits

0x4380,	// (0x00068084) main_mup2_pane_g2

0xab43,	// (0x0006e847) main_mup_pane_g13_cp1

0xab4b,	// (0x0006e84f) mup_volume_pane_cp1

0x439c,	// (0x000680a0) main_mup2_pane_g4_ParamLimits

0x439c,	// (0x000680a0) main_mup2_pane_g4

0x43ae,	// (0x000680b2) main_mup2_pane_g5_ParamLimits

0x43ae,	// (0x000680b2) main_mup2_pane_g5

0x43c0,	// (0x000680c4) main_mup2_pane_g6_ParamLimits

0x43c0,	// (0x000680c4) main_mup2_pane_g6

0x43d2,	// (0x000680d6) main_mup2_pane_g7_ParamLimits

0x43d2,	// (0x000680d6) main_mup2_pane_g7

0x0006,

0xf663,	// (0x00073367) main_mup2_pane_g_ParamLimits

0xf663,	// (0x00073367) main_mup2_pane_g

0x43ea,	// (0x000680ee) main_mup2_pane_t1_ParamLimits

0x43ea,	// (0x000680ee) main_mup2_pane_t1

0x4400,	// (0x00068104) main_mup2_pane_t2_ParamLimits

0x4400,	// (0x00068104) main_mup2_pane_t2

0x4416,	// (0x0006811a) main_mup2_pane_t3_ParamLimits

0x4416,	// (0x0006811a) main_mup2_pane_t3

0x442c,	// (0x00068130) main_mup2_pane_t4_ParamLimits

0x442c,	// (0x00068130) main_mup2_pane_t4

0x4444,	// (0x00068148) main_mup2_pane_t5_ParamLimits

0x4444,	// (0x00068148) main_mup2_pane_t5

0x445c,	// (0x00068160) main_mup2_pane_t6_ParamLimits

0x445c,	// (0x00068160) main_mup2_pane_t6

0x0005,

0xf672,	// (0x00073376) main_mup2_pane_t_ParamLimits

0xf672,	// (0x00073376) main_mup2_pane_t

0x448c,	// (0x00068190) mup2_visualizer_pane_ParamLimits

0x448c,	// (0x00068190) mup2_visualizer_pane

0x44ba,	// (0x000681be) mup_progress_pane_cp_ParamLimits

0x44ba,	// (0x000681be) mup_progress_pane_cp

0xab2e,	// (0x0006e832) mup_volume_pane_cp_ParamLimits

0xab2e,	// (0x0006e832) mup_volume_pane_cp

0x44ce,	// (0x000681d2) mup2_visualizer_pane_g1_ParamLimits

0x44ce,	// (0x000681d2) mup2_visualizer_pane_g1

0xe316,	// (0x0007201a) mup2_visualizer_pane_g2_ParamLimits

0xe316,	// (0x0007201a) mup2_visualizer_pane_g2

0x44e5,	// (0x000681e9) mup2_visualizer_pane_g3_ParamLimits

0x44e5,	// (0x000681e9) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x00073383) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x00073383) mup2_visualizer_pane_g

0xd0fe,	// (0x00070e02) aid_size_cell_fmradio

0x3959,	// (0x0006765d) aid_height_parent_landcape

0xc641,	// (0x00070345) wml_content_pane_cp

0xc649,	// (0x0007034d) wml_tabs_pane

0xc652,	// (0x00070356) popup_wml_miniature_window

0xc65a,	// (0x0007035e) scroll_pane_cp021

0xc66e,	// (0x00070372) wml_content_pane_comp8

0xbfc9,	// (0x0006fccd) bg_popup_sub_pane_cp05

0xe334,	// (0x00072038) popup_wml_miniature_window_g1

0xe33c,	// (0x00072040) wml_miniature_view_pane

0x44f1,	// (0x000681f5) aid_size_wml_view

0x44f9,	// (0x000681fd) wml_miniature_view_pane_g1

0x4502,	// (0x00068206) wml_miniature_view_pane_g2

0x450b,	// (0x0006820f) wml_miniature_view_pane_g3

0x4513,	// (0x00068217) wml_miniature_view_pane_g4

0x451b,	// (0x0006821f) wml_miniature_view_pane_g5

0x4523,	// (0x00068227) wml_miniature_view_pane_g6

0x452b,	// (0x0006822f) wml_miniature_view_pane_g7

0x4533,	// (0x00068237) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0007338a) wml_miniature_view_pane_g

0xe344,	// (0x00072048) background_graphic_ParamLimits

0xe344,	// (0x00072048) background_graphic

0xe350,	// (0x00072054) wml_tabs_2_pane

0xe359,	// (0x0007205d) wml_tabs_3_pane_ParamLimits

0xe359,	// (0x0007205d) wml_tabs_3_pane

0xe36b,	// (0x0007206f) wml_tabs_4_pane_ParamLimits

0xe36b,	// (0x0007206f) wml_tabs_4_pane

0xe381,	// (0x00072085) wml_tabs_5_pane_ParamLimits

0xe381,	// (0x00072085) wml_tabs_5_pane

0xe39b,	// (0x0007209f) wml_tabs_pane_g2_ParamLimits

0xe39b,	// (0x0007209f) wml_tabs_pane_g2

0xe3af,	// (0x000720b3) wml_tabs_pane_g3_ParamLimits

0xe3af,	// (0x000720b3) wml_tabs_pane_g3

0x453b,	// (0x0006823f) wml_tabs_2_active_pane_ParamLimits

0x453b,	// (0x0006823f) wml_tabs_2_active_pane

0x454f,	// (0x00068253) wml_tabs_2_passive_pane_ParamLimits

0x454f,	// (0x00068253) wml_tabs_2_passive_pane

0x4563,	// (0x00068267) wml_tabs_3_active_pane_cp_ParamLimits

0x4563,	// (0x00068267) wml_tabs_3_active_pane_cp

0x4578,	// (0x0006827c) wml_tabs_3_passive_pane_ParamLimits

0x4578,	// (0x0006827c) wml_tabs_3_passive_pane

0x458b,	// (0x0006828f) wml_tabs_3_passive_pane_cp_ParamLimits

0x458b,	// (0x0006828f) wml_tabs_3_passive_pane_cp

0x45a2,	// (0x000682a6) tabs_4_active_pane

0x45aa,	// (0x000682ae) tabs_4_passive_pane

0x45b4,	// (0x000682b8) tabs_4_passive_pane_cp

0x45bc,	// (0x000682c0) tabs_4_passive_pane_cp2

0x3674,	// (0x00067378) aid_height_text

0x2d44,	// (0x00066a48) mup_volume_cont_pane_ParamLimits

0x2d44,	// (0x00066a48) mup_volume_cont_pane

0x0758,	// (0x0006445c) aid_size_cell_pinb

0x0762,	// (0x00064466) aid_size_list_pinb

0x44a6,	// (0x000681aa) mup2_volume_cont_pane_ParamLimits

0x44a6,	// (0x000681aa) mup2_volume_cont_pane

0xab1a,	// (0x0006e81e) mup2_volume_cont_pane_g1_ParamLimits

0xab1a,	// (0x0006e81e) mup2_volume_cont_pane_g1

0x041b,	// (0x0006411f) aid_size_cell_touch_ParamLimits

0x041b,	// (0x0006411f) aid_size_cell_touch

0x0648,	// (0x0006434c) touch_pane_ParamLimits

0x0648,	// (0x0006434c) touch_pane

0xa4f5,	// (0x0006e1f9) main_rss2_pane

0xe3cc,	// (0x000720d0) listscroll_rss2_pane

0xe3d5,	// (0x000720d9) rss2_navigation_pane

0xe3dd,	// (0x000720e1) list_rss2_pane

0xccca,	// (0x000709ce) scroll_pane_cp22

0xe3e5,	// (0x000720e9) rss2_navigation_pane_g1

0xe3ee,	// (0x000720f2) rss2_navigation_pane_g2

0xe3f6,	// (0x000720fa) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0007339b) rss2_navigation_pane_g

0xe3fe,	// (0x00072102) rss2_navigation_pane_t1

0x45c6,	// (0x000682ca) rss2_list_single_pane_ParamLimits

0x45c6,	// (0x000682ca) rss2_list_single_pane

0xe40c,	// (0x00072110) rss2_list_single_pane_t2

0xe41a,	// (0x0007211e) rss2_list_single_pane_t3_ParamLimits

0xe41a,	// (0x0007211e) rss2_list_single_pane_t3

0xe437,	// (0x0007213b) rss2_list_single_pane_t4

0x25b7,	// (0x000662bb) smil_status_pane_g1

0xa4e7,	// (0x0006e1eb) main_image2_pane_ParamLimits

0xa4e7,	// (0x0006e1eb) main_image2_pane

0x406c,	// (0x00067d70) main_camera2_pane_g9_ParamLimits

0x406c,	// (0x00067d70) main_camera2_pane_g9

0x419a,	// (0x00067e9e) main_camera2_pane_t5_ParamLimits

0x419a,	// (0x00067e9e) main_camera2_pane_t5

0xaaea,	// (0x0006e7ee) main_camera2_pane_t6_ParamLimits

0xaaea,	// (0x0006e7ee) main_camera2_pane_t6

0x45db,	// (0x000682df) main_image2_pane_g1_ParamLimits

0x45db,	// (0x000682df) main_image2_pane_g1

0x33b0,	// (0x000670b4) smil2_video_pane_ParamLimits

0x33b0,	// (0x000670b4) smil2_video_pane

0xa49d,	// (0x0006e1a1) aid_zoom_text_primary_cp

0xa4dd,	// (0x0006e1e1) popup_preview_fixed_window

0xc5aa,	// (0x000702ae) im_reading_pane_g1

0x3ee3,	// (0x00067be7) cams2_bc_adjust_pane_cp_ParamLimits

0x3ee3,	// (0x00067be7) cams2_bc_adjust_pane_cp

0x41c9,	// (0x00067ecd) cams2_bc_adjust_pane_ParamLimits

0x41c9,	// (0x00067ecd) cams2_bc_adjust_pane

0x45f1,	// (0x000682f5) cams2_bc_adjust_pane_g1

0xab53,	// (0x0006e857) cams2_slider_pane

0xab5c,	// (0x0006e860) cams2_slider_pane_g1

0xab65,	// (0x0006e869) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x000733a2) cams2_slider_pane_g

0x0850,	// (0x00064554) calc_display_pane_ParamLimits

0x0878,	// (0x0006457c) calc_paper_pane_ParamLimits

0x089b,	// (0x0006459f) grid_calc_pane_ParamLimits

0xaa0f,	// (0x0006e713) popup_clock_digital_window_t1_ParamLimits

0xd09b,	// (0x00070d9f) main_image_pane_t1

0x0832,	// (0x00064536) aid_size_cell_calc_ParamLimits

0x0832,	// (0x00064536) aid_size_cell_calc

0x39b1,	// (0x000676b5) popup_blid_sat_info2_window_ParamLimits

0x39b1,	// (0x000676b5) popup_blid_sat_info2_window

0xe44d,	// (0x00072151) aid_size_cell_blid

0xe455,	// (0x00072159) bg_popup_window_pane_cp07

0xe478,	// (0x0007217c) grid_popup_blid_pane

0xe482,	// (0x00072186) heading_pane_cp05_ParamLimits

0xe482,	// (0x00072186) heading_pane_cp05

0xe54c,	// (0x00072250) cell_popup_blid_pane_ParamLimits

0xe54c,	// (0x00072250) cell_popup_blid_pane

0xe570,	// (0x00072274) cell_popup_blid_pane_g1

0xe578,	// (0x0007227c) cell_popup_blid_pane_t1

0x4476,	// (0x0006817a) mup2_indicator_pane_ParamLimits

0x4476,	// (0x0006817a) mup2_indicator_pane

0xce13,	// (0x00070b17) mup2_visualizer_osc_pane

0xe322,	// (0x00072026) mup2_visualizer_spec_pane_ParamLimits

0xe322,	// (0x00072026) mup2_visualizer_spec_pane

0x45f9,	// (0x000682fd) mup2_spec_half_pane

0x4602,	// (0x00068306) mup2_spec_half_pane_cp

0x460a,	// (0x0006830e) mup2_spec_bar_pane_ParamLimits

0x460a,	// (0x0006830e) mup2_spec_bar_pane

0xe2c3,	// (0x00071fc7) mup2_spec_bar_pane_g1

0xe2cd,	// (0x00071fd1) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x00073315) mup2_spec_bar_pane_g

0x462a,	// (0x0006832e) mup2_osc_middle_pane

0xe2df,	// (0x00071fe3) mup2_visualizer_osc_pane_g1

0xa51f,	// (0x0006e223) popup_number_entry_window_t1_ParamLimits

0xa532,	// (0x0006e236) popup_number_entry_window_t2_ParamLimits

0xa544,	// (0x0006e248) popup_number_entry_window_t3_ParamLimits

0x069a,	// (0x0006439e) popup_number_entry_window_t5_ParamLimits

0x069a,	// (0x0006439e) popup_number_entry_window_t5

0xf0d3,	// (0x00072dd7) popup_number_entry_window_t_ParamLimits

0xa556,	// (0x0006e25a) text_title_cp2_ParamLimits

0xaa4e,	// (0x0006e752) aid_hotspot_pointer_text2_pane

0xaa68,	// (0x0006e76c) main_viewer_pane_g9_ParamLimits

0xaa68,	// (0x0006e76c) main_viewer_pane_g9

0xc7e3,	// (0x000704e7) cale_month_pane_t1_ParamLimits

0xc820,	// (0x00070524) bg_cale_pane_ParamLimits

0xc838,	// (0x0007053c) list_cale_pane_ParamLimits

0xc849,	// (0x0007054d) listscroll_cale_day_pane_t1

0xc85b,	// (0x0007055f) scroll_pane_cp09_ParamLimits

0x2d76,	// (0x00066a7a) main_mup_eq_pane_t1_ParamLimits

0x2d76,	// (0x00066a7a) main_mup_eq_pane_t1

0x2d90,	// (0x00066a94) main_mup_eq_pane_t2_ParamLimits

0x2d90,	// (0x00066a94) main_mup_eq_pane_t2

0x2daa,	// (0x00066aae) main_mup_eq_pane_t3_ParamLimits

0x2daa,	// (0x00066aae) main_mup_eq_pane_t3

0x2dc6,	// (0x00066aca) main_mup_eq_pane_t4_ParamLimits

0x2dc6,	// (0x00066aca) main_mup_eq_pane_t4

0x2de2,	// (0x00066ae6) main_mup_eq_pane_t5_ParamLimits

0x2de2,	// (0x00066ae6) main_mup_eq_pane_t5

0x2dfe,	// (0x00066b02) main_mup_eq_pane_t6_ParamLimits

0x2dfe,	// (0x00066b02) main_mup_eq_pane_t6

0x2e12,	// (0x00066b16) main_mup_eq_pane_t7_ParamLimits

0x2e12,	// (0x00066b16) main_mup_eq_pane_t7

0x2e26,	// (0x00066b2a) main_mup_eq_pane_t8_ParamLimits

0x2e26,	// (0x00066b2a) main_mup_eq_pane_t8

0x2e3a,	// (0x00066b3e) main_mup_eq_pane_t9_ParamLimits

0x2e3a,	// (0x00066b3e) main_mup_eq_pane_t9

0x2e54,	// (0x00066b58) main_mup_eq_pane_t10_ParamLimits

0x2e54,	// (0x00066b58) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x00073164) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x00073164) main_mup_eq_pane_t

0x2f03,	// (0x00066c07) mup_equalizer_pane_cp5_ParamLimits

0x2f17,	// (0x00066c1b) mup_equalizer_pane_cp6_ParamLimits

0x2f2b,	// (0x00066c2f) mup_equalizer_pane_cp7_ParamLimits

0xa4f5,	// (0x0006e1f9) main_gallery_pane

0xe2e8,	// (0x00071fec) smil2_volume_pane

0xe2f0,	// (0x00071ff4) smil_status_volume_pane_g1_ParamLimits

0xe303,	// (0x00072007) smil_status_volume_pane_g2_ParamLimits

0xaac8,	// (0x0006e7cc) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0007331a) smil_status_volume_pane_g_ParamLimits

0xe455,	// (0x00072159) bg_popup_window_pane_cp07_ParamLimits

0xe463,	// (0x00072167) blid_firmament_pane

0x4633,	// (0x00068337) aid_size_cell_gallery_ParamLimits

0x4633,	// (0x00068337) aid_size_cell_gallery

0x4649,	// (0x0006834d) grid_gallery_pane_ParamLimits

0x4649,	// (0x0006834d) grid_gallery_pane

0x4662,	// (0x00068366) cell_gallery_pane_ParamLimits

0x4662,	// (0x00068366) cell_gallery_pane

0xe586,	// (0x0007228a) bg_cell_gallery_focus_pane_ParamLimits

0xe586,	// (0x0007228a) bg_cell_gallery_focus_pane

0xe598,	// (0x0007229c) cell_gallery_pane_g1_ParamLimits

0xe598,	// (0x0007229c) cell_gallery_pane_g1

0x46ab,	// (0x000683af) cell_gallery_pane_g2_ParamLimits

0x46ab,	// (0x000683af) cell_gallery_pane_g2

0x46b8,	// (0x000683bc) cell_gallery_pane_g3_ParamLimits

0x46b8,	// (0x000683bc) cell_gallery_pane_g3

0xe5a4,	// (0x000722a8) cell_gallery_pane_g4_ParamLimits

0xe5a4,	// (0x000722a8) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x000733c8) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x000733c8) cell_gallery_pane_g

0xe5b0,	// (0x000722b4) bg_cell_gallery_focus_pane_g1

0xe5b8,	// (0x000722bc) bg_cell_gallery_focus_pane_g2

0xe5c0,	// (0x000722c4) bg_cell_gallery_focus_pane_g3

0xe5c8,	// (0x000722cc) bg_cell_gallery_focus_pane_g4

0xe5d0,	// (0x000722d4) bg_cell_gallery_focus_pane_g5

0xe5d8,	// (0x000722dc) bg_cell_gallery_focus_pane_g6

0xe5e0,	// (0x000722e4) bg_cell_gallery_focus_pane_g7

0xe5e8,	// (0x000722ec) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x000733d1) bg_cell_gallery_focus_pane_g

0xe5f0,	// (0x000722f4) aid_firma_cardinal

0xe604,	// (0x00072308) blid_firmament_pane_t1

0xe61b,	// (0x0007231f) blid_firmament_pane_t2

0xe632,	// (0x00072336) blid_firmament_pane_t3

0xe649,	// (0x0007234d) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x000733e2) blid_firmament_pane_t

0xe660,	// (0x00072364) blid_sat_info_pane

0xe670,	// (0x00072374) blid_sat_info_pane_g1

0xe670,	// (0x00072374) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x000733eb) blid_sat_info_pane_g

0xe67a,	// (0x0007237e) blid_sat_info_pane_t1

0xe688,	// (0x0007238c) smil2_volume_content_pane

0xe691,	// (0x00072395) smil2_volume_pane_g1

0xe699,	// (0x0007239d) smil2_volume_content_pane_g1

0xe6a2,	// (0x000723a6) smil2_volume_content_pane_g2

0xe6ab,	// (0x000723af) smil2_volume_content_pane_g3

0xe6b4,	// (0x000723b8) smil2_volume_content_pane_g4

0xe6bd,	// (0x000723c1) smil2_volume_content_pane_g5

0xe6c6,	// (0x000723ca) smil2_volume_content_pane_g6

0xe6cf,	// (0x000723d3) smil2_volume_content_pane_g7

0xe6d8,	// (0x000723dc) smil2_volume_content_pane_g8

0xe6e1,	// (0x000723e5) smil2_volume_content_pane_g9

0xe6ea,	// (0x000723ee) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x000733f0) smil2_volume_content_pane_g

0x0e17,	// (0x00064b1b) cale_week_day_heading_pane_t1_ParamLimits

0x0e5c,	// (0x00064b60) cale_week_day_heading_pane_t2_ParamLimits

0x0ea6,	// (0x00064baa) cale_week_day_heading_pane_t3_ParamLimits

0x0ef0,	// (0x00064bf4) cale_week_day_heading_pane_t4_ParamLimits

0x0f3a,	// (0x00064c3e) cale_week_day_heading_pane_t5_ParamLimits

0x0f8c,	// (0x00064c90) cale_week_day_heading_pane_t6_ParamLimits

0x0fde,	// (0x00064ce2) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x00072edc) cale_week_day_heading_pane_t_ParamLimits

0xc454,	// (0x00070158) bg_cale_side_pane_ParamLimits

0x1023,	// (0x00064d27) cale_week_time_pane_t1_ParamLimits

0x103d,	// (0x00064d41) cale_week_time_pane_t2_ParamLimits

0x1057,	// (0x00064d5b) cale_week_time_pane_t3_ParamLimits

0x1071,	// (0x00064d75) cale_week_time_pane_t4_ParamLimits

0x108b,	// (0x00064d8f) cale_week_time_pane_t5_ParamLimits

0x10a5,	// (0x00064da9) cale_week_time_pane_t6_ParamLimits

0x10bf,	// (0x00064dc3) cale_week_time_pane_t7_ParamLimits

0x10d9,	// (0x00064ddd) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x00072eeb) cale_week_time_pane_t_ParamLimits

0x10f9,	// (0x00064dfd) cell_cale_week_pane_g2_ParamLimits

0xc454,	// (0x00070158) bg_cale_side_pane_cp01_ParamLimits

0x23a4,	// (0x000660a8) cale_month_week_pane_t1_ParamLimits

0x23bd,	// (0x000660c1) cale_month_week_pane_t2_ParamLimits

0x23d6,	// (0x000660da) cale_month_week_pane_t3_ParamLimits

0x23ef,	// (0x000660f3) cale_month_week_pane_t4_ParamLimits

0x2408,	// (0x0006610c) cale_month_week_pane_t5_ParamLimits

0x2421,	// (0x00066125) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x00072fc4) cale_month_week_pane_t_ParamLimits

0xa97f,	// (0x0006e683) cell_cale_month_pane_g1_ParamLimits

0xa4f5,	// (0x0006e1f9) main_cale_event_viewer_pane

0xa46f,	// (0x0006e173) listscroll_cale_event_viewer_pane

0xe6f3,	// (0x000723f7) list_cale_ev_pane

0xe6fb,	// (0x000723ff) scroll_pane_cp023

0xe707,	// (0x0007240b) field_cale_ev_pane_ParamLimits

0xe707,	// (0x0007240b) field_cale_ev_pane

0xe725,	// (0x00072429) field_cale_ev_content_pane_ParamLimits

0xe725,	// (0x00072429) field_cale_ev_content_pane

0xe731,	// (0x00072435) field_cale_ev_pane_g1_ParamLimits

0xe731,	// (0x00072435) field_cale_ev_pane_g1

0xe73d,	// (0x00072441) field_cale_ev_pane_g2_ParamLimits

0xe73d,	// (0x00072441) field_cale_ev_pane_g2

0xe755,	// (0x00072459) field_cale_ev_pane_g3_ParamLimits

0xe755,	// (0x00072459) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x00073405) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x00073405) field_cale_ev_pane_g

0xe76d,	// (0x00072471) field_cale_ev_pane_t1_ParamLimits

0xe76d,	// (0x00072471) field_cale_ev_pane_t1

0xe784,	// (0x00072488) field_cale_ev_content_pane_t1_ParamLimits

0xe784,	// (0x00072488) field_cale_ev_content_pane_t1

0x2fd6,	// (0x00066cda) bg_button_pane_cp01

0x0b68,	// (0x0006486c) listscroll_cale_week_pane_ParamLimits

0xc3fe,	// (0x00070102) popup_toolbar_window_cp01

0xc425,	// (0x00070129) listscroll_cale_week_pane_t1_ParamLimits

0x0b68,	// (0x0006486c) listscroll_cale_day_pane_ParamLimits

0xc3fe,	// (0x00070102) popup_toolbar_window_cp02

0xc849,	// (0x0007054d) listscroll_cale_day_pane_t1_ParamLimits

0x3977,	// (0x0006767b) main_cale_month_pane_ParamLimits

0xaab3,	// (0x0006e7b7) popup_toolbar_window_cp03_ParamLimits

0xaab3,	// (0x0006e7b7) popup_toolbar_window_cp03

0x3278,	// (0x00066f7c) main_image_pane_g2_ParamLimits

0x3278,	// (0x00066f7c) main_image_pane_g2

0x3289,	// (0x00066f8d) main_image_pane_g3_ParamLimits

0x3289,	// (0x00066f8d) main_image_pane_g3

0x0002,

0xf4f2,	// (0x000731f6) main_image_pane_g_ParamLimits

0xf4f2,	// (0x000731f6) main_image_pane_g

0xd09b,	// (0x00070d9f) main_image_pane_t1_ParamLimits

0x329a,	// (0x00066f9e) main_image_pane_t2_ParamLimits

0x329a,	// (0x00066f9e) main_image_pane_t2

0x32ac,	// (0x00066fb0) main_image_pane_t3_ParamLimits

0x32ac,	// (0x00066fb0) main_image_pane_t3

0x32d4,	// (0x00066fd8) main_image_pane_t4_ParamLimits

0x32d4,	// (0x00066fd8) main_image_pane_t4

0x0003,

0xf4f9,	// (0x000731fd) main_image_pane_t_ParamLimits

0xf4f9,	// (0x000731fd) main_image_pane_t

0x32f4,	// (0x00066ff8) popup_image_details_window_cp01

0x32fe,	// (0x00067002) popup_toobar_trans_pane_cp01_ParamLimits

0x32fe,	// (0x00067002) popup_toobar_trans_pane_cp01

0x3a90,	// (0x00067794) popup_image_details_window_ParamLimits

0x3a90,	// (0x00067794) popup_image_details_window

0xaa86,	// (0x0006e78a) popup_image_focus_window

0x3e9d,	// (0x00067ba1) camera2_autofocus_pane_ParamLimits

0x3e9d,	// (0x00067ba1) camera2_autofocus_pane

0xa46f,	// (0x0006e173) bg_popup_sub_pane_cp06

0xe7a2,	// (0x000724a6) popup_image_focus_window_g1

0xe7aa,	// (0x000724ae) popup_image_focus_window_g2

0xe7b2,	// (0x000724b6) popup_image_focus_window_g3

0xe7ba,	// (0x000724be) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0007340c) popup_image_focus_window_g

0xe7c2,	// (0x000724c6) popup_image_focus_window_t1

0xe7d0,	// (0x000724d4) popup_image_focus_window_t2

0xe7e0,	// (0x000724e4) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x00073415) popup_image_focus_window_t

0xe7ee,	// (0x000724f2) camera2_autofocus_pane_g1

0xe24e,	// (0x00071f52) bg_tb_trans_pane_cp01

0xe7fc,	// (0x00072500) popup_image_details_window_g1

0xe80f,	// (0x00072513) popup_image_details_window_g2

0x0002,

0xf723,	// (0x00073427) popup_image_details_window_g

0xe838,	// (0x0007253c) popup_image_details_window_t1

0xe84a,	// (0x0007254e) popup_image_details_window_t2

0xe863,	// (0x00072567) popup_image_details_window_t3

0xe877,	// (0x0007257b) popup_image_details_window_t4

0xe892,	// (0x00072596) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0007342e) popup_image_details_window_t

0xc2d5,	// (0x0006ffd9) bg_calc_paper_pane_ParamLimits

0xa4f5,	// (0x0006e1f9) grid_highlight_pane_cp013

0xa8eb,	// (0x0006e5ef) list_calc_pane_ParamLimits

0xa8fd,	// (0x0006e601) scroll_pane_cp024

0xc2e9,	// (0x0006ffed) bg_calc_display_pane_ParamLimits

0x0999,	// (0x0006469d) calc_display_pane_t1_ParamLimits

0x09ab,	// (0x000646af) calc_display_pane_t2_ParamLimits

0xa905,	// (0x0006e609) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x00072e5e) calc_display_pane_t_ParamLimits

0x0a65,	// (0x00064769) cell_calc_pane_g2

0x0001,

0xf177,	// (0x00072e7b) cell_calc_pane_g

0x0a6e,	// (0x00064772) cell_calc_pane_t1

0xc348,	// (0x0007004c) grid_highlight_pane_cp02_ParamLimits

0xc35e,	// (0x00070062) toolbar_button_pane_cp01_ParamLimits

0xc35e,	// (0x00070062) toolbar_button_pane_cp01

0xd0e0,	// (0x00070de4) temp_image_control_pane_ParamLimits

0xd0e0,	// (0x00070de4) temp_image_control_pane

0xa4e7,	// (0x0006e1eb) main_mp3_pane

0xe8ac,	// (0x000725b0) temp_image_control_pane_g1_ParamLimits

0xe8ac,	// (0x000725b0) temp_image_control_pane_g1

0xe8ba,	// (0x000725be) temp_image_control_pane_g2_ParamLimits

0xe8ba,	// (0x000725be) temp_image_control_pane_g2

0xe8cc,	// (0x000725d0) temp_image_control_pane_g3_ParamLimits

0xe8cc,	// (0x000725d0) temp_image_control_pane_g3

0x46f5,	// (0x000683f9) temp_image_control_pane_g4_ParamLimits

0x46f5,	// (0x000683f9) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x00073439) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x00073439) temp_image_control_pane_g

0xe8ac,	// (0x000725b0) main_mp3_pane_g1

0x4708,	// (0x0006840c) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x00073442) main_mp3_pane_g

0xe90f,	// (0x00072613) main_mp3_pane_t1

0xc4b9,	// (0x000701bd) main_camera_pane_g8_ParamLimits

0xc4b9,	// (0x000701bd) main_camera_pane_g8

0x140b,	// (0x0006510f) main_video_pane_g7_ParamLimits

0x140b,	// (0x0006510f) main_video_pane_g7

0xab08,	// (0x0006e80c) main_camera2_pane_t7_ParamLimits

0xab08,	// (0x0006e80c) main_camera2_pane_t7

0xc601,	// (0x00070305) scroll_pane_cp025_ParamLimits

0xc601,	// (0x00070305) scroll_pane_cp025

0xc615,	// (0x00070319) scroll_pane_cp026_ParamLimits

0xc615,	// (0x00070319) scroll_pane_cp026

0xc624,	// (0x00070328) wml_content_pane_ParamLimits

0xa4f5,	// (0x0006e1f9) main_touch_calib_pane

0x47dc,	// (0x000684e0) main_touch_calib_pane_g1

0x47ee,	// (0x000684f2) main_touch_calib_pane_g2

0x4800,	// (0x00068504) main_touch_calib_pane_g3

0x4812,	// (0x00068516) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x00073460) main_touch_calib_pane_g

0x4824,	// (0x00068528) main_touch_calib_pane_t1

0x483e,	// (0x00068542) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x00073469) main_touch_calib_pane_t

0xcd54,	// (0x00070a58) mup_progress_pane_cp02

0xcd73,	// (0x00070a77) navi_pane_g1

0xcdd5,	// (0x00070ad9) navi_pane_mp_t3

0xa4e7,	// (0x0006e1eb) main_mp3_pane_ParamLimits

0x3c15,	// (0x00067919) navi_pane_ParamLimits

0xe8ac,	// (0x000725b0) main_mp3_pane_g1_ParamLimits

0x4708,	// (0x0006840c) main_mp3_pane_g2_ParamLimits

0x4716,	// (0x0006841a) main_mp3_pane_g3_ParamLimits

0x4716,	// (0x0006841a) main_mp3_pane_g3

0x4724,	// (0x00068428) main_mp3_pane_g4_ParamLimits

0x4724,	// (0x00068428) main_mp3_pane_g4

0xe8dc,	// (0x000725e0) main_mp3_pane_g5_ParamLimits

0xe8dc,	// (0x000725e0) main_mp3_pane_g5

0xe8ea,	// (0x000725ee) main_mp3_pane_g6_ParamLimits

0xe8ea,	// (0x000725ee) main_mp3_pane_g6

0xe8f7,	// (0x000725fb) main_mp3_pane_g7_ParamLimits

0xe8f7,	// (0x000725fb) main_mp3_pane_g7

0xe903,	// (0x00072607) main_mp3_pane_g8_ParamLimits

0xe903,	// (0x00072607) main_mp3_pane_g8

0xf73e,	// (0x00073442) main_mp3_pane_g_ParamLimits

0x4730,	// (0x00068434) main_mp3_pane_t2

0x473e,	// (0x00068442) main_mp3_pane_t3

0xe91d,	// (0x00072621) main_mp3_pane_t4

0xe92b,	// (0x0007262f) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x00073453) main_mp3_pane_t

0xe939,	// (0x0007263d) mup_progress_pane_cp01

0xa49d,	// (0x0006e1a1) aid_zoom_text_secondary2

0xe6f3,	// (0x000723f7) list_cale_ev2_pane

0xe6fb,	// (0x000723ff) scroll_pane_cp023_ParamLimits

0x4894,	// (0x00068598) field_cale_ev2_pane_ParamLimits

0x4894,	// (0x00068598) field_cale_ev2_pane

0xe941,	// (0x00072645) field_cale_ev2_pane_g1_ParamLimits

0xe941,	// (0x00072645) field_cale_ev2_pane_g1

0xe94d,	// (0x00072651) field_cale_ev2_pane_g2_ParamLimits

0xe94d,	// (0x00072651) field_cale_ev2_pane_g2

0xe965,	// (0x00072669) field_cale_ev2_pane_g3_ParamLimits

0xe965,	// (0x00072669) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x00073474) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x00073474) field_cale_ev2_pane_g

0x48b4,	// (0x000685b8) field_cale_ev2_pane_t1_ParamLimits

0x48b4,	// (0x000685b8) field_cale_ev2_pane_t1

0x48cb,	// (0x000685cf) field_cale_ev2_pane_t2_ParamLimits

0x48cb,	// (0x000685cf) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0007347d) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0007347d) field_cale_ev2_pane_t

0x312d,	// (0x00066e31) main_postcard_pane_g5_ParamLimits

0x312d,	// (0x00066e31) main_postcard_pane_g5

0x3143,	// (0x00066e47) main_postcard_pane_g6_ParamLimits

0x3143,	// (0x00066e47) main_postcard_pane_g6

0x11d7,	// (0x00064edb) camera2_autofocus_pane_cp_ParamLimits

0x11d7,	// (0x00064edb) camera2_autofocus_pane_cp

0xa4e7,	// (0x0006e1eb) main_mup3_pane

0x48e0,	// (0x000685e4) main_mup3_pane_g1_ParamLimits

0x48e0,	// (0x000685e4) main_mup3_pane_g1

0x4902,	// (0x00068606) main_mup3_pane_g2_ParamLimits

0x4902,	// (0x00068606) main_mup3_pane_g2

0x4980,	// (0x00068684) main_mup3_pane_g3_ParamLimits

0x4980,	// (0x00068684) main_mup3_pane_g3

0x49c6,	// (0x000686ca) main_mup3_pane_g4_ParamLimits

0x49c6,	// (0x000686ca) main_mup3_pane_g4

0x4a0c,	// (0x00068710) main_mup3_pane_g5_ParamLimits

0x4a0c,	// (0x00068710) main_mup3_pane_g5

0x4a52,	// (0x00068756) main_mup3_pane_g6_ParamLimits

0x4a52,	// (0x00068756) main_mup3_pane_g6

0xe9a9,	// (0x000726ad) main_mup3_pane_g7_ParamLimits

0xe9a9,	// (0x000726ad) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0007348d) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0007348d) main_mup3_pane_g

0x4ad0,	// (0x000687d4) main_mup3_pane_t1_ParamLimits

0x4ad0,	// (0x000687d4) main_mup3_pane_t1

0x4b44,	// (0x00068848) main_mup3_pane_t2_ParamLimits

0x4b44,	// (0x00068848) main_mup3_pane_t2

0x4c18,	// (0x0006891c) main_mup3_pane_t4_ParamLimits

0x4c18,	// (0x0006891c) main_mup3_pane_t4

0x4c6e,	// (0x00068972) main_mup3_pane_t5_ParamLimits

0x4c6e,	// (0x00068972) main_mup3_pane_t5

0x4d2a,	// (0x00068a2e) main_mup3_pane_t6_ParamLimits

0x4d2a,	// (0x00068a2e) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0007349e) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0007349e) main_mup3_pane_t

0x4de2,	// (0x00068ae6) mup3_progress_pane_ParamLimits

0x4de2,	// (0x00068ae6) mup3_progress_pane

0x4e78,	// (0x00068b7c) popup_mup3_control_window_ParamLimits

0x4e78,	// (0x00068b7c) popup_mup3_control_window

0xe9b7,	// (0x000726bb) popup_mup3_text_window

0x4eaa,	// (0x00068bae) mup3_progress_pane_t1

0x4ec9,	// (0x00068bcd) mup3_progress_pane_t2

0xe9bf,	// (0x000726c3) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x000734ab) mup3_progress_pane_t

0xe9dc,	// (0x000726e0) mup_progress_pane_cp03

0xa46f,	// (0x0006e173) bg_tb_trans_pane_cp04

0x4ee8,	// (0x00068bec) mup3_volume_pane

0x4ef0,	// (0x00068bf4) popup_mup3_control_window_g1

0x4ef9,	// (0x00068bfd) mup3_volume_pane_g1

0x4f02,	// (0x00068c06) mup3_volume_pane_g2

0x4f0b,	// (0x00068c0f) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x000734b2) mup3_volume_pane_g

0xa46f,	// (0x0006e173) bg_tb_trans_pane_cp03

0xe9ec,	// (0x000726f0) popup_mup3_text_window_g1

0xe9f4,	// (0x000726f8) popup_mup3_text_window_t1

0xc331,	// (0x00070035) list_calc_item_pane_g1_ParamLimits

0xe3c3,	// (0x000720c7) mup_volume_pane_cp_g1

0x4858,	// (0x0006855c) main_touch_calib_pane_t3

0x486c,	// (0x00068570) main_touch_calib_pane_t4

0x4880,	// (0x00068584) main_touch_calib_pane_t5

0xa479,	// (0x0006e17d) aid_cell_size_toolbar2

0xa481,	// (0x0006e185) aid_popup3_width_pane

0xa48d,	// (0x0006e191) aid_zoom_text_msg_primary

0x11ae,	// (0x00064eb2) vorec_t7

0xc2f5,	// (0x0006fff9) bg_calc_paper_pane_g1_ParamLimits

0xc301,	// (0x00070005) bg_calc_paper_pane_g2_ParamLimits

0xc30d,	// (0x00070011) bg_calc_paper_pane_g3_ParamLimits

0xc319,	// (0x0007001d) bg_calc_paper_pane_g4_ParamLimits

0xc325,	// (0x00070029) bg_calc_paper_pane_g5_ParamLimits

0x09f2,	// (0x000646f6) bg_calc_paper_pane_g6_ParamLimits

0x0a01,	// (0x00064705) bg_calc_paper_pane_g7_ParamLimits

0x0a10,	// (0x00064714) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x00072e65) bg_calc_paper_pane_g_ParamLimits

0x0a23,	// (0x00064727) calc_bg_paper_pane_g9_ParamLimits

0x1322,	// (0x00065026) image_qvga_pane_ParamLimits

0x1322,	// (0x00065026) image_qvga_pane

0xc224,	// (0x0006ff28) bg_popup_sub_pane_cp04_ParamLimits

0xd017,	// (0x00070d1b) popup_mup_playback_window_g1_ParamLimits

0xd023,	// (0x00070d27) popup_mup_playback_window_t1_ParamLimits

0xd038,	// (0x00070d3c) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x000731f1) popup_mup_playback_window_t_ParamLimits

0x4390,	// (0x00068094) main_mup2_pane_g3_ParamLimits

0x4390,	// (0x00068094) main_mup2_pane_g3

0x1714,	// (0x00065418) popup_toolbar_window_cp04

0xd41a,	// (0x0007111e) popup_call2_audio_second_window_g3_ParamLimits

0xd41a,	// (0x0007111e) popup_call2_audio_second_window_g3

0xd86e,	// (0x00071572) popup_call2_audio_first_window_g4_ParamLimits

0xd86e,	// (0x00071572) popup_call2_audio_first_window_g4

0xdeed,	// (0x00071bf1) popup_call2_audio_in_window_g4_ParamLimits

0xdeed,	// (0x00071bf1) popup_call2_audio_in_window_g4

0x325a,	// (0x00066f5e) aid_area_sk_bg_cut_ParamLimits

0x325a,	// (0x00066f5e) aid_area_sk_bg_cut

0xd04d,	// (0x00070d51) aid_area_sk_bg_cut_2_ParamLimits

0xd04d,	// (0x00070d51) aid_area_sk_bg_cut_2

0x469b,	// (0x0006839f) aid_placing_details_win

0x46a3,	// (0x000683a7) aid_placing_details_win_2

0xe7ee,	// (0x000724f2) camera2_autofocus_pane_g1_ParamLimits

0x05e1,	// (0x000642e5) popup_fixed_preview_cale_window_ParamLimits

0x05e1,	// (0x000642e5) popup_fixed_preview_cale_window

0xce24,	// (0x00070b28) navi_slider_pane_g3

0xce2d,	// (0x00070b31) navi_slider_pane_g4

0xce36,	// (0x00070b3a) navi_slider_pane_g5

0xce24,	// (0x00070b28) navi_slider_pane_g6

0xaa35,	// (0x0006e739) navi_slider_pane_g7

0xcf57,	// (0x00070c5b) mup_scale_pane_g3

0xcf60,	// (0x00070c64) mup_scale_pane_g4

0xcf69,	// (0x00070c6d) mup_scale_pane_g5

0x2f3f,	// (0x00066c43) mup_scale_pane_g6

0x2f48,	// (0x00066c4c) mup_scale_pane_g7

0xce24,	// (0x00070b28) cams2_slider_pane_g3

0xe445,	// (0x00072149) cams2_slider_pane_g4

0xab6e,	// (0x0006e872) cams2_slider_pane_g5

0xce24,	// (0x00070b28) cams2_slider_pane_g6

0xab76,	// (0x0006e87a) cams2_slider_pane_g7

0xe670,	// (0x00072374) camera2_autofocus_pane_cp_g1

0xe25c,	// (0x00071f60) bg_popup_preview_window_pane_cp02_ParamLimits

0xe25c,	// (0x00071f60) bg_popup_preview_window_pane_cp02

0xea02,	// (0x00072706) list_fp_cale_pane_ParamLimits

0xea02,	// (0x00072706) list_fp_cale_pane

0xea0e,	// (0x00072712) popup_fixed_preview_cale_window_t1_ParamLimits

0xea0e,	// (0x00072712) popup_fixed_preview_cale_window_t1

0x4f14,	// (0x00068c18) popup_fixed_preview_cale_window_t2_ParamLimits

0x4f14,	// (0x00068c18) popup_fixed_preview_cale_window_t2

0x4f29,	// (0x00068c2d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f29,	// (0x00068c2d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x000734b9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x000734b9) popup_fixed_preview_cale_window_t

0x4f3e,	// (0x00068c42) list_single_fp_cale_pane_ParamLimits

0x4f3e,	// (0x00068c42) list_single_fp_cale_pane

0xea2c,	// (0x00072730) list_single_fp_cale_pane_g1_ParamLimits

0xea2c,	// (0x00072730) list_single_fp_cale_pane_g1

0xea38,	// (0x0007273c) list_single_fp_cale_pane_g2_ParamLimits

0xea38,	// (0x0007273c) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x000734c0) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x000734c0) list_single_fp_cale_pane_g

0xea51,	// (0x00072755) list_single_fp_cale_pane_t1_ParamLimits

0xea51,	// (0x00072755) list_single_fp_cale_pane_t1

0xea63,	// (0x00072767) list_single_fp_cale_pane_t2_ParamLimits

0xea63,	// (0x00072767) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x000734c7) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x000734c7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa4f5,	// (0x0006e1f9) main_dialer_pane

0x4f53,	// (0x00068c57) aid_cell_size_keypad

0x4f5d,	// (0x00068c61) dialer_ne_pane

0x4f65,	// (0x00068c69) grid_dialer_command_1_pane

0x4f6d,	// (0x00068c71) grid_dialer_command_2_pane

0x4f75,	// (0x00068c79) grid_dialer_keypad_pane

0x4f87,	// (0x00068c8b) bg_popup_call_pane_cp06_ParamLimits

0x4f87,	// (0x00068c8b) bg_popup_call_pane_cp06

0x4f93,	// (0x00068c97) dialer_ne_clear_pane_ParamLimits

0x4f93,	// (0x00068c97) dialer_ne_clear_pane

0xea96,	// (0x0007279a) dialer_ne_pane_g1

0xea9e,	// (0x000727a2) dialer_ne_pane_t1_ParamLimits

0xea9e,	// (0x000727a2) dialer_ne_pane_t1

0x4f9f,	// (0x00068ca3) dialer_ne_pane_t2_ParamLimits

0x4f9f,	// (0x00068ca3) dialer_ne_pane_t2

0x4fc9,	// (0x00068ccd) dialer_ne_pane_t3_ParamLimits

0x4fc9,	// (0x00068ccd) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x000734cc) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x000734cc) dialer_ne_pane_t

0x4ff9,	// (0x00068cfd) dialer_ne_pane_t3_copy1_ParamLimits

0x4ff9,	// (0x00068cfd) dialer_ne_pane_t3_copy1

0x5028,	// (0x00068d2c) cell_dialer_keypad_pane_ParamLimits

0x5028,	// (0x00068d2c) cell_dialer_keypad_pane

0x503f,	// (0x00068d43) cell_dialer_command_1_pane_ParamLimits

0x503f,	// (0x00068d43) cell_dialer_command_1_pane

0x5055,	// (0x00068d59) cell_dialer_command_2_pane_ParamLimits

0x5055,	// (0x00068d59) cell_dialer_command_2_pane

0xeab0,	// (0x000727b4) bg_button_pane_cp02_ParamLimits

0xeab0,	// (0x000727b4) bg_button_pane_cp02

0x5064,	// (0x00068d68) cell_dialer_keypad_pane_g1_ParamLimits

0x5064,	// (0x00068d68) cell_dialer_keypad_pane_g1

0xeab0,	// (0x000727b4) bg_button_pane_cp03_ParamLimits

0xeab0,	// (0x000727b4) bg_button_pane_cp03

0x5078,	// (0x00068d7c) cell_dialer_command_1_pane_g1_ParamLimits

0x5078,	// (0x00068d7c) cell_dialer_command_1_pane_g1

0xeabc,	// (0x000727c0) bg_button_pane_cp04

0x508c,	// (0x00068d90) cell_dialer_command_2_pane_g1

0xce13,	// (0x00070b17) bg_button_pane_cp06

0xeac4,	// (0x000727c8) dialer_ne_clear_pane_g1

0x2a79,	// (0x0006677d) navi_pane_g2

0x2aa7,	// (0x000667ab) navi_pane_g3

0x0002,

0xf3f0,	// (0x000730f4) navi_pane_g

0x2ad0,	// (0x000667d4) navi_pane_mv_g2

0x2af7,	// (0x000667fb) navi_pane_mv_g5

0x2aff,	// (0x00066803) navi_pane_mv_t1

0xc2e9,	// (0x0006ffed) main_clock2_pane

0x50d7,	// (0x00068ddb) main_clock2_list_pane_ParamLimits

0x50d7,	// (0x00068ddb) main_clock2_list_pane

0x510f,	// (0x00068e13) main_clock2_pane_t1_ParamLimits

0x510f,	// (0x00068e13) main_clock2_pane_t1

0x514b,	// (0x00068e4f) main_clock2_pane_t2_ParamLimits

0x514b,	// (0x00068e4f) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x000734d3) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x000734d3) main_clock2_pane_t

0x51e9,	// (0x00068eed) popup_clock_analogue_window_cp03_ParamLimits

0x51e9,	// (0x00068eed) popup_clock_analogue_window_cp03

0x520e,	// (0x00068f12) popup_clock_digital_window_cp02_ParamLimits

0x520e,	// (0x00068f12) popup_clock_digital_window_cp02

0x527f,	// (0x00068f83) main_clock2_list_single_pane_ParamLimits

0x527f,	// (0x00068f83) main_clock2_list_single_pane

0xce13,	// (0x00070b17) list_highlight_pane_cp05

0xeae2,	// (0x000727e6) main_clock2_list_single_pane_t1

0x1714,	// (0x00065418) popup_toolbar_window_cp04_ParamLimits

0x46c5,	// (0x000683c9) camera2_autofocus_pane_g2_ParamLimits

0x46c5,	// (0x000683c9) camera2_autofocus_pane_g2

0x46d1,	// (0x000683d5) camera2_autofocus_pane_g3_ParamLimits

0x46d1,	// (0x000683d5) camera2_autofocus_pane_g3

0x46dd,	// (0x000683e1) camera2_autofocus_pane_g4_ParamLimits

0x46dd,	// (0x000683e1) camera2_autofocus_pane_g4

0x46e9,	// (0x000683ed) camera2_autofocus_pane_g5_ParamLimits

0x46e9,	// (0x000683ed) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0007341c) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0007341c) camera2_autofocus_pane_g

0xe989,	// (0x0007268d) camera2_autofocus_pane_cp_g2

0xe991,	// (0x00072695) camera2_autofocus_pane_cp_g3

0xe999,	// (0x0007269d) camera2_autofocus_pane_cp_g4

0xe9a1,	// (0x000726a5) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x00073482) camera2_autofocus_pane_cp_g

0x4f7f,	// (0x00068c83) popup_dialer_spcha_window

0xa46f,	// (0x0006e173) bg_popup_sub_pane_cp07

0xeaf0,	// (0x000727f4) list_spcha_pane

0xeaf8,	// (0x000727fc) list_single_spcha_pane_ParamLimits

0xeaf8,	// (0x000727fc) list_single_spcha_pane

0xa46f,	// (0x0006e173) list_highlight_pane_cp06

0xeb09,	// (0x0007280d) list_single_spcha_pane_t1

0xdc97,	// (0x0007199b) popup_call2_audio_out_window_g4_ParamLimits

0xdc97,	// (0x0007199b) popup_call2_audio_out_window_g4

0xa4f5,	// (0x0006e1f9) main_imed2_pane

0xaa8e,	// (0x0006e792) popup_imed_adjust2_window

0x3aa8,	// (0x000677ac) popup_imed_trans_window_ParamLimits

0x3aa8,	// (0x000677ac) popup_imed_trans_window

0xe4ae,	// (0x000721b2) popup_blid_sat_info2_window_t1

0xe4bc,	// (0x000721c0) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x000733b1) popup_blid_sat_info2_window_t

0x5329,	// (0x0006902d) aid_size_cell_colour_35

0x5349,	// (0x0006904d) aid_size_cell_colour_112

0x5369,	// (0x0006906d) aid_size_cell_effect

0xe268,	// (0x00071f6c) bg_tb_trans_pane_cp02

0xc952,	// (0x00070656) heading_imed_pane

0x5389,	// (0x0006908d) listscroll_imed_pane

0xeb17,	// (0x0007281b) heading_imed_pane_g1

0xeb1f,	// (0x00072823) heading_imed_pane_t1

0xeb2d,	// (0x00072831) grid_imed_colour_35_pane_ParamLimits

0xeb2d,	// (0x00072831) grid_imed_colour_35_pane

0x5395,	// (0x00069099) grid_imed_effect_pane

0xeb44,	// (0x00072848) list_imed_aspect_pane

0x53ab,	// (0x000690af) scroll_pane_cp027_ParamLimits

0x53ab,	// (0x000690af) scroll_pane_cp027

0x53bc,	// (0x000690c0) cell_imed_effect_pane_ParamLimits

0x53bc,	// (0x000690c0) cell_imed_effect_pane

0xeb4c,	// (0x00072850) cell_imed_colour_pane_ParamLimits

0xeb4c,	// (0x00072850) cell_imed_colour_pane

0xeb8e,	// (0x00072892) cell_imed_colour_pane_g1_ParamLimits

0xeb8e,	// (0x00072892) cell_imed_colour_pane_g1

0xeb9f,	// (0x000728a3) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb9f,	// (0x000728a3) hgihlgiht_grid_pane_cp016

0x53e3,	// (0x000690e7) cell_imed_effect_pane_g1

0x53eb,	// (0x000690ef) grid_highlight_pane_cp017

0xebb0,	// (0x000728b4) list_imed_single_pane_ParamLimits

0xebb0,	// (0x000728b4) list_imed_single_pane

0xa46f,	// (0x0006e173) list_highlight_pane_cp07

0xebc5,	// (0x000728c9) list_imed_aspect_pane_comp1_t1

0xe268,	// (0x00071f6c) bg_tb_trans_pane_cp05

0xebe7,	// (0x000728eb) popup_imed_adjust2_window_g1

0xec0e,	// (0x00072912) popup_imed_adjust2_window_t1

0xec26,	// (0x0007292a) slider_imed_adjust_pane

0xec3a,	// (0x0007293e) slider_imed_adjust_pane_g1

0xec4a,	// (0x0007294e) slider_imed_adjust_pane_g2

0xec5a,	// (0x0007295e) slider_imed_adjust_pane_g3

0xec6b,	// (0x0007296f) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x000734f0) slider_imed_adjust_pane_g

0x53f4,	// (0x000690f8) aid_size_cell_clipart2

0x5400,	// (0x00069104) grid_imed_clipart_pane

0xec7c,	// (0x00072980) scroll_pane_cp031

0x540a,	// (0x0006910e) cell_imed_clipart_pane_ParamLimits

0x540a,	// (0x0006910e) cell_imed_clipart_pane

0x542c,	// (0x00069130) cell_imed_clipart_pane_g1

0xa46f,	// (0x0006e173) grid_highlight_pane_cp014

0x50ec,	// (0x00068df0) main_clock2_pane_g1_ParamLimits

0x50ec,	// (0x00068df0) main_clock2_pane_g1

0x522a,	// (0x00068f2e) aid_call2_pane_cp10

0x523c,	// (0x00068f40) aid_call_pane_cp10

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g1

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g2

0x524e,	// (0x00068f52) popup_clock_analogue_window_cp10_g3

0x524e,	// (0x00068f52) popup_clock_analogue_window_cp10_g4

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x000734de) popup_clock_analogue_window_cp10_g

0x5260,	// (0x00068f64) popup_clock_analogue_window_cp10_t1

0x5291,	// (0x00068f95) clock_digital_number_pane_cp10_ParamLimits

0x5291,	// (0x00068f95) clock_digital_number_pane_cp10

0x52a9,	// (0x00068fad) clock_digital_number_pane_cp11_ParamLimits

0x52a9,	// (0x00068fad) clock_digital_number_pane_cp11

0x52c1,	// (0x00068fc5) clock_digital_number_pane_cp12_ParamLimits

0x52c1,	// (0x00068fc5) clock_digital_number_pane_cp12

0x52d9,	// (0x00068fdd) clock_digital_number_pane_cp13_ParamLimits

0x52d9,	// (0x00068fdd) clock_digital_number_pane_cp13

0x52f1,	// (0x00068ff5) clock_digital_separator_pane_cp10_ParamLimits

0x52f1,	// (0x00068ff5) clock_digital_separator_pane_cp10

0x5309,	// (0x0006900d) popup_clock_digital_window_cp02_t1_ParamLimits

0x5309,	// (0x0006900d) popup_clock_digital_window_cp02_t1

0xc21c,	// (0x0006ff20) clock_digital_number_pane_cp10_g1

0xc21c,	// (0x0006ff20) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x000734f9) clock_digital_number_pane_cp10_g

0xc21c,	// (0x0006ff20) clock_digital_separator_pane_cp10_g1

0xc21c,	// (0x0006ff20) clock_digital_separator_pane_g2_cp10

0xcde3,	// (0x00070ae7) navi_pane_vded_g4

0xcdec,	// (0x00070af0) navi_pane_vded_g5

0xcdf5,	// (0x00070af9) navi_pane_vded_t1

0xa4f5,	// (0x0006e1f9) main_vded_pane

0x5435,	// (0x00069139) main_vded_pane_g1

0x543f,	// (0x00069143) main_vded_pane_g2

0x5449,	// (0x0006914d) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x000734fe) main_vded_pane_g

0x5453,	// (0x00069157) main_vded_pane_t1

0x5461,	// (0x00069165) main_vded_pane_t2

0x0001,

0xf801,	// (0x00073505) main_vded_pane_t

0x546f,	// (0x00069173) vded_slider_pane

0x5477,	// (0x0006917b) vded_video_pane

0xec84,	// (0x00072988) vded_video_pane_g1

0x547f,	// (0x00069183) vded_video_pane_g2

0xe670,	// (0x00072374) vded_video_pane_g3

0x0002,

0xf806,	// (0x0007350a) vded_video_pane_g

0xec8e,	// (0x00072992) vded_slider_pane_g1

0xe3c3,	// (0x000720c7) vded_slider_pane_g2

0xec97,	// (0x0007299b) vded_slider_pane_g3

0xeca0,	// (0x000729a4) vded_slider_pane_g4

0xeca9,	// (0x000729ad) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x00073511) vded_slider_pane_g

0x4e60,	// (0x00068b64) mup3_rocker_pane_ParamLimits

0x4e60,	// (0x00068b64) mup3_rocker_pane

0x5488,	// (0x0006918c) mup3_control_keys_pane_g1

0x5490,	// (0x00069194) mup3_control_keys_pane_g2

0x5498,	// (0x0006919c) mup3_control_keys_pane_g3

0x54a0,	// (0x000691a4) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0007351c) mup3_control_keys_pane_g

0x0618,	// (0x0006431c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0618,	// (0x0006431c) popup_toolbar2_fixed_window_cp01

0x4e94,	// (0x00068b98) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4e94,	// (0x00068b98) popup_toolbar2_fixed_window_cp02

0xd58c,	// (0x00071290) popup_call2_audio_second_window_t4_ParamLimits

0xd58c,	// (0x00071290) popup_call2_audio_second_window_t4

0xdb04,	// (0x00071808) popup_call2_audio_first_window_t6_ParamLimits

0xdb04,	// (0x00071808) popup_call2_audio_first_window_t6

0xdd9a,	// (0x00071a9e) popup_call2_audio_out_window_t6_ParamLimits

0xdd9a,	// (0x00071a9e) popup_call2_audio_out_window_t6

0xa4f5,	// (0x0006e1f9) main_vitu_pane

0x54b0,	// (0x000691b4) aid_size_cell_itu_ParamLimits

0x54b0,	// (0x000691b4) aid_size_cell_itu

0xe24e,	// (0x00071f52) bg_popup_window_pane_cp08_ParamLimits

0xe24e,	// (0x00071f52) bg_popup_window_pane_cp08

0x54c6,	// (0x000691ca) field_vitu_entry_pane_ParamLimits

0x54c6,	// (0x000691ca) field_vitu_entry_pane

0x54dd,	// (0x000691e1) grid_vitu_function_pane_ParamLimits

0x54dd,	// (0x000691e1) grid_vitu_function_pane

0x54f8,	// (0x000691fc) grid_vitu_itu_pane_ParamLimits

0x54f8,	// (0x000691fc) grid_vitu_itu_pane

0x5516,	// (0x0006921a) cell_vitu_itu_pane_ParamLimits

0x5516,	// (0x0006921a) cell_vitu_itu_pane

0x5538,	// (0x0006923c) cell_vitu_function_pane_ParamLimits

0x5538,	// (0x0006923c) cell_vitu_function_pane

0xe24e,	// (0x00071f52) bg_popup_sub_pane_cp08_ParamLimits

0xe24e,	// (0x00071f52) bg_popup_sub_pane_cp08

0x5551,	// (0x00069255) field_vitu_entry_pane_t1_ParamLimits

0x5551,	// (0x00069255) field_vitu_entry_pane_t1

0xecca,	// (0x000729ce) field_vitu_entry_pane_t2_ParamLimits

0xecca,	// (0x000729ce) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0007352a) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0007352a) field_vitu_entry_pane_t

0xece7,	// (0x000729eb) bg_button_pane_cp05_ParamLimits

0xece7,	// (0x000729eb) bg_button_pane_cp05

0x556f,	// (0x00069273) cell_vitu_itu_pane_g1

0x5587,	// (0x0006928b) cell_vitu_itu_pane_t1_ParamLimits

0x5587,	// (0x0006928b) cell_vitu_itu_pane_t1

0x5599,	// (0x0006929d) cell_vitu_itu_pane_t2_ParamLimits

0x5599,	// (0x0006929d) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0007352f) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0007352f) cell_vitu_itu_pane_t

0xecf5,	// (0x000729f9) bg_button_pane_cp07

0x55ce,	// (0x000692d2) cell_vitu_function_pane_g1

0xa8e3,	// (0x0006e5e7) main_calc_pane_g1

0x043f,	// (0x00064143) aid_visual_content_pane

0xa4f5,	// (0x0006e1f9) main_vradio_pane

0x55d7,	// (0x000692db) main_vradio_pane_g1_ParamLimits

0x55d7,	// (0x000692db) main_vradio_pane_g1

0xecff,	// (0x00072a03) main_vradio_pane_g2_ParamLimits

0xecff,	// (0x00072a03) main_vradio_pane_g2

0x0001,

0xf832,	// (0x00073536) main_vradio_pane_g_ParamLimits

0xf832,	// (0x00073536) main_vradio_pane_g

0x55f0,	// (0x000692f4) main_vradio_pane_t1_ParamLimits

0x55f0,	// (0x000692f4) main_vradio_pane_t1

0x5605,	// (0x00069309) main_vradio_pane_t2_ParamLimits

0x5605,	// (0x00069309) main_vradio_pane_t2

0xed0c,	// (0x00072a10) main_vradio_pane_t3_ParamLimits

0xed0c,	// (0x00072a10) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0007353b) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0007353b) main_vradio_pane_t

0x561a,	// (0x0006931e) vradio_rocker_control_pane_ParamLimits

0x561a,	// (0x0006931e) vradio_rocker_control_pane

0x562c,	// (0x00069330) vradio_station_info_pane_ParamLimits

0x562c,	// (0x00069330) vradio_station_info_pane

0xed20,	// (0x00072a24) vradio_frequency_info_pane_ParamLimits

0xed20,	// (0x00072a24) vradio_frequency_info_pane

0xe670,	// (0x00072374) vradio_station_info_pane_g1

0xed2f,	// (0x00072a33) vradio_station_info_pane_t1_ParamLimits

0xed2f,	// (0x00072a33) vradio_station_info_pane_t1

0xed51,	// (0x00072a55) vradio_station_info_pane_t2_ParamLimits

0xed51,	// (0x00072a55) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x00073542) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x00073542) vradio_station_info_pane_t

0xed63,	// (0x00072a67) vradio_tuning_pane

0xed6b,	// (0x00072a6f) vradio_rocker_control_pane_g1

0xed73,	// (0x00072a77) vradio_rocker_control_pane_g2

0xed7b,	// (0x00072a7f) vradio_rocker_control_pane_g3

0xed83,	// (0x00072a87) vradio_rocker_control_pane_g4

0xed8b,	// (0x00072a8f) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x00073547) vradio_rocker_control_pane_g

0x563e,	// (0x00069342) vradio_frequency_info_pane_g1

0xed93,	// (0x00072a97) vradio_frequency_info_pane_t1_ParamLimits

0xed93,	// (0x00072a97) vradio_frequency_info_pane_t1

0x5648,	// (0x0006934c) vradio_tuning_pane_g1

0x5653,	// (0x00069357) vradio_tuning_pane_t1

0xa4a5,	// (0x0006e1a9) area_side_right_pane_ParamLimits

0xa4a5,	// (0x0006e1a9) area_side_right_pane

0xe215,	// (0x00071f19) status_small_pane_g1

0xe21d,	// (0x00071f21) status_small_pane_g2

0xe226,	// (0x00071f2a) status_small_pane_g3

0xe22f,	// (0x00071f33) status_small_pane_g4

0x0003,

0xf603,	// (0x00073307) status_small_pane_g

0xe238,	// (0x00071f3c) status_small_pane_t1

0xa4f5,	// (0x0006e1f9) main_video3_pane

0xeda7,	// (0x00072aab) cams_zoom_vslider_pane

0xedaf,	// (0x00072ab3) image3_wide_pane_ParamLimits

0xedaf,	// (0x00072ab3) image3_wide_pane

0xedc9,	// (0x00072acd) image3_wide_small_pane

0xedd5,	// (0x00072ad9) main_video3_pane_g1_ParamLimits

0xedd5,	// (0x00072ad9) main_video3_pane_g1

0xedf1,	// (0x00072af5) main_video3_pane_g2_ParamLimits

0xedf1,	// (0x00072af5) main_video3_pane_g2

0x0001,

0xf84e,	// (0x00073552) main_video3_pane_g_ParamLimits

0xf84e,	// (0x00073552) main_video3_pane_g

0xee0d,	// (0x00072b11) main_video3_pane_t1_ParamLimits

0xee0d,	// (0x00072b11) main_video3_pane_t1

0xee38,	// (0x00072b3c) main_video3_pane_t2_ParamLimits

0xee38,	// (0x00072b3c) main_video3_pane_t2

0xee63,	// (0x00072b67) main_video3_pane_t3_ParamLimits

0xee63,	// (0x00072b67) main_video3_pane_t3

0x0002,

0xf853,	// (0x00073557) main_video3_pane_t_ParamLimits

0xf853,	// (0x00073557) main_video3_pane_t

0xee90,	// (0x00072b94) cams_zoom_vslider_pane_g1

0xee99,	// (0x00072b9d) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0007355e) cams_zoom_vslider_pane_g

0xeea1,	// (0x00072ba5) small_slider_vertical_pane

0xe670,	// (0x00072374) small_slider_vertical_pane_g1

0xe670,	// (0x00072374) small_slider_vertical_pane_g2

0xeea9,	// (0x00072bad) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x00073563) small_slider_vertical_pane_g

0xa4f5,	// (0x0006e1f9) main_hwr_training_pane

0xeeb2,	// (0x00072bb6) hwr_training_instruct_pane_ParamLimits

0xeeb2,	// (0x00072bb6) hwr_training_instruct_pane

0x5662,	// (0x00069366) hwr_training_navi_pane_ParamLimits

0x5662,	// (0x00069366) hwr_training_navi_pane

0x5681,	// (0x00069385) hwr_training_write_pane_ParamLimits

0x5681,	// (0x00069385) hwr_training_write_pane

0xa46f,	// (0x0006e173) bg_frame_shadow_pane

0xeee9,	// (0x00072bed) hwr_training_write_pane_g1

0xeef1,	// (0x00072bf5) hwr_training_write_pane_g2

0xeef9,	// (0x00072bfd) hwr_training_write_pane_g3

0xef01,	// (0x00072c05) hwr_training_write_pane_g4

0xef09,	// (0x00072c0d) hwr_training_write_pane_g5

0xef11,	// (0x00072c15) hwr_training_write_pane_g6

0xef19,	// (0x00072c1d) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0007356a) hwr_training_write_pane_g

0xab7f,	// (0x0006e883) hwr_training_navi_pane_g1_ParamLimits

0xab7f,	// (0x0006e883) hwr_training_navi_pane_g1

0xab91,	// (0x0006e895) hwr_training_navi_pane_g2_ParamLimits

0xab91,	// (0x0006e895) hwr_training_navi_pane_g2

0xaba3,	// (0x0006e8a7) hwr_training_navi_pane_g3_ParamLimits

0xaba3,	// (0x0006e8a7) hwr_training_navi_pane_g3

0xabb3,	// (0x0006e8b7) hwr_training_navi_pane_g4_ParamLimits

0xabb3,	// (0x0006e8b7) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x00073579) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x00073579) hwr_training_navi_pane_g

0xabc0,	// (0x0006e8c4) hwr_training_navi_pane_t1

0x56c9,	// (0x000693cd) list_single_hwr_training_instruct_pane_ParamLimits

0x56c9,	// (0x000693cd) list_single_hwr_training_instruct_pane

0xef21,	// (0x00072c25) list_single_hwr_training_instruct_pane_t1

0xe5b0,	// (0x000722b4) bg_frame_shadow_pane_g1

0xef30,	// (0x00072c34) bg_frame_shadow_pane_g2

0xef38,	// (0x00072c3c) bg_frame_shadow_pane_g3

0xef40,	// (0x00072c44) bg_frame_shadow_pane_g4

0xef48,	// (0x00072c4c) bg_frame_shadow_pane_g5

0xef50,	// (0x00072c54) bg_frame_shadow_pane_g6

0xef58,	// (0x00072c5c) bg_frame_shadow_pane_g7

0xc3a2,	// (0x000700a6) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x00073584) bg_frame_shadow_pane_g

0xa4f5,	// (0x0006e1f9) main_video_tele_dialer_pane

0x56de,	// (0x000693e2) aid_size_cell_video_keypad_ParamLimits

0x56de,	// (0x000693e2) aid_size_cell_video_keypad

0x56f8,	// (0x000693fc) grid_video_dialer_keypad_pane_ParamLimits

0x56f8,	// (0x000693fc) grid_video_dialer_keypad_pane

0x5744,	// (0x00069448) video_down_pane_cp_ParamLimits

0x5744,	// (0x00069448) video_down_pane_cp

0x5776,	// (0x0006947a) cell_video_dialer_keypad_pane_ParamLimits

0x5776,	// (0x0006947a) cell_video_dialer_keypad_pane

0xef60,	// (0x00072c64) bg_button_pane_cp08_ParamLimits

0xef60,	// (0x00072c64) bg_button_pane_cp08

0x5798,	// (0x0006949c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5798,	// (0x0006949c) cell_video_dialer_keypad_pane_g1

0x4e4a,	// (0x00068b4e) mup3_rocker2_pane_ParamLimits

0x4e4a,	// (0x00068b4e) mup3_rocker2_pane

0xe670,	// (0x00072374) mup3_rocker2_pane_g1

0x3989,	// (0x0006768d) main_dialer2_pane

0xa4f5,	// (0x0006e1f9) main_mp4_pane

0xabd6,	// (0x0006e8da) main_mp4_pane_g1_ParamLimits

0xabd6,	// (0x0006e8da) main_mp4_pane_g1

0xabd6,	// (0x0006e8da) main_mp4_pane_g2_ParamLimits

0xabd6,	// (0x0006e8da) main_mp4_pane_g2

0x57cf,	// (0x000694d3) main_mp4_pane_g3_ParamLimits

0x57cf,	// (0x000694d3) main_mp4_pane_g3

0xabe4,	// (0x0006e8e8) main_mp4_pane_g4_ParamLimits

0xabe4,	// (0x0006e8e8) main_mp4_pane_g4

0xac0c,	// (0x0006e910) main_mp4_pane_g5_ParamLimits

0xac0c,	// (0x0006e910) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x000735a4) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x000735a4) main_mp4_pane_g

0xac5c,	// (0x0006e960) main_mp4_pane_t1_ParamLimits

0xac5c,	// (0x0006e960) main_mp4_pane_t1

0xacb8,	// (0x0006e9bc) main_mp4_pane_t2_ParamLimits

0xacb8,	// (0x0006e9bc) main_mp4_pane_t2

0xef6c,	// (0x00072c70) main_mp4_pane_t3_ParamLimits

0xef6c,	// (0x00072c70) main_mp4_pane_t3

0xad0a,	// (0x0006ea0e) main_mp4_pane_t4_ParamLimits

0xad0a,	// (0x0006ea0e) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x000735b1) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x000735b1) main_mp4_pane_t

0xad4e,	// (0x0006ea52) mp4_progress_pane_ParamLimits

0xad4e,	// (0x0006ea52) mp4_progress_pane

0xad98,	// (0x0006ea9c) mp4_rocker_pane_ParamLimits

0xad98,	// (0x0006ea9c) mp4_rocker_pane

0xef94,	// (0x00072c98) mp4_progress_pane_t1

0xefad,	// (0x00072cb1) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x000735ba) mp4_progress_pane_t

0xefc6,	// (0x00072cca) mup_progress_pane_cp04

0x580b,	// (0x0006950f) mp4_rocker_pane_g1

0x5815,	// (0x00069519) aid_cell_size_keypad2_ParamLimits

0x5815,	// (0x00069519) aid_cell_size_keypad2

0x582b,	// (0x0006952f) dialer2_ne_pane_ParamLimits

0x582b,	// (0x0006952f) dialer2_ne_pane

0x5845,	// (0x00069549) grid_dialer2_keypad_pane_ParamLimits

0x5845,	// (0x00069549) grid_dialer2_keypad_pane

0xe455,	// (0x00072159) bg_popup_call_pane_cp07_ParamLimits

0xe455,	// (0x00072159) bg_popup_call_pane_cp07

0x5861,	// (0x00069565) dialer2_ne_pane_t1_ParamLimits

0x5861,	// (0x00069565) dialer2_ne_pane_t1

0x589c,	// (0x000695a0) cell_dialer2_keypad_pane_ParamLimits

0x589c,	// (0x000695a0) cell_dialer2_keypad_pane

0xefe4,	// (0x00072ce8) bg_button_pane_pane_cp04_ParamLimits

0xefe4,	// (0x00072ce8) bg_button_pane_pane_cp04

0x58be,	// (0x000695c2) cell_dialer2_keypad_pane_g1_ParamLimits

0x58be,	// (0x000695c2) cell_dialer2_keypad_pane_g1

0x15e8,	// (0x000652ec) aid_placing_vt_set_content_ParamLimits

0x15e8,	// (0x000652ec) aid_placing_vt_set_content

0x1610,	// (0x00065314) aid_placing_vt_set_title_ParamLimits

0x1610,	// (0x00065314) aid_placing_vt_set_title

0xa4f5,	// (0x0006e1f9) main_image3_pane

0x5984,	// (0x00069688) area_side_right_pane_cp01_ParamLimits

0x5984,	// (0x00069688) area_side_right_pane_cp01

0xabd6,	// (0x0006e8da) main_image3_pane_g1_ParamLimits

0xabd6,	// (0x0006e8da) main_image3_pane_g1

0x599b,	// (0x0006969f) main_image3_pane_g2_ParamLimits

0x599b,	// (0x0006969f) main_image3_pane_g2

0x59c3,	// (0x000696c7) main_image3_pane_g3_ParamLimits

0x59c3,	// (0x000696c7) main_image3_pane_g3

0x59ed,	// (0x000696f1) main_image3_pane_g4_ParamLimits

0x59ed,	// (0x000696f1) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x000735c9) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x000735c9) main_image3_pane_g

0x5a17,	// (0x0006971b) main_image3_pane_t1_ParamLimits

0x5a17,	// (0x0006971b) main_image3_pane_t1

0x5a6f,	// (0x00069773) main_image3_pane_t2_ParamLimits

0x5a6f,	// (0x00069773) main_image3_pane_t2

0x5ac1,	// (0x000697c5) main_image3_pane_t3_ParamLimits

0x5ac1,	// (0x000697c5) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x000735d2) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x000735d2) main_image3_pane_t

0xe24e,	// (0x00071f52) grid_sctrl_middle_pane_cp01_ParamLimits

0xe24e,	// (0x00071f52) grid_sctrl_middle_pane_cp01

0x5b49,	// (0x0006984d) cell_sctrl_middle_pane_cp01_ParamLimits

0x5b49,	// (0x0006984d) cell_sctrl_middle_pane_cp01

0x5b66,	// (0x0006986a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5b66,	// (0x0006986a) cell_sctrl_middle_pane_cp01_g1

0xa4f5,	// (0x0006e1f9) main_call4_pane

0x5b7c,	// (0x00069880) aid_size_button_call4_ParamLimits

0x5b7c,	// (0x00069880) aid_size_button_call4

0x5bad,	// (0x000698b1) call4_windows_pane_ParamLimits

0x5bad,	// (0x000698b1) call4_windows_pane

0x5bcd,	// (0x000698d1) grid_call4_button_pane_ParamLimits

0x5bcd,	// (0x000698d1) grid_call4_button_pane

0xeff0,	// (0x00072cf4) call4_windows_conf_pane

0xf007,	// (0x00072d0b) popup_call4_audio_first_window_ParamLimits

0xf007,	// (0x00072d0b) popup_call4_audio_first_window

0xf053,	// (0x00072d57) popup_call4_audio_second_window_ParamLimits

0xf053,	// (0x00072d57) popup_call4_audio_second_window

0xf067,	// (0x00072d6b) popup_call4_audio_wait_window_ParamLimits

0xf067,	// (0x00072d6b) popup_call4_audio_wait_window

0x5bfa,	// (0x000698fe) cell_call4_button_pane_ParamLimits

0x5bfa,	// (0x000698fe) cell_call4_button_pane

0x5c23,	// (0x00069927) bg_button_pane_cp09_ParamLimits

0x5c23,	// (0x00069927) bg_button_pane_cp09

0x5c2f,	// (0x00069933) cell_call4_button_pane_g1_ParamLimits

0x5c2f,	// (0x00069933) cell_call4_button_pane_g1

0x5c55,	// (0x00069959) cell_call4_button_pane_t1_ParamLimits

0x5c55,	// (0x00069959) cell_call4_button_pane_t1

0xf0af,	// (0x00072db3) popup_call4_audio_conf_window_ParamLimits

0xf0af,	// (0x00072db3) popup_call4_audio_conf_window

0x4eaa,	// (0x00068bae) mup3_progress_pane_t1_ParamLimits

0x4ec9,	// (0x00068bcd) mup3_progress_pane_t2_ParamLimits

0xe9bf,	// (0x000726c3) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x000734ab) mup3_progress_pane_t_ParamLimits

0xe9dc,	// (0x000726e0) mup_progress_pane_cp03_ParamLimits

0x54a8,	// (0x000691ac) mup3_control_keys_pane_g4_copy1

0xad7c,	// (0x0006ea80) mp4_rocker2_pane_ParamLimits

0xad7c,	// (0x0006ea80) mp4_rocker2_pane

0xf0c3,	// (0x00072dc7) mp4_rocker2_pane_g1

0xf0cb,	// (0x00072dcf) mp4_rocker2_pane_g2

0xadea,	// (0x0006eaee) mp4_rocker2_pane_g3

0xadf2,	// (0x0006eaf6) mp4_rocker2_pane_g4

0xadfa,	// (0x0006eafe) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x000735db) mp4_rocker2_pane_g

0xa4f5,	// (0x0006e1f9) main_camera4_pane

0xa4f5,	// (0x0006e1f9) main_video4_pane

0x5712,	// (0x00069416) main_video_tele_dialer_pane_t1_ParamLimits

0x5712,	// (0x00069416) main_video_tele_dialer_pane_t1

0x572b,	// (0x0006942f) main_video_tele_dialer_pane_t2_ParamLimits

0x572b,	// (0x0006942f) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x00073595) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x00073595) main_video_tele_dialer_pane_t

0x5c93,	// (0x00069997) cam4_autofocus_pane_ParamLimits

0x5c93,	// (0x00069997) cam4_autofocus_pane

0x5ca9,	// (0x000699ad) cam4_image_uncrop_pane_ParamLimits

0x5ca9,	// (0x000699ad) cam4_image_uncrop_pane

0x5cc3,	// (0x000699c7) cam4_indicators_pane_ParamLimits

0x5cc3,	// (0x000699c7) cam4_indicators_pane

0x5cee,	// (0x000699f2) main_camera4_pane_g1_ParamLimits

0x5cee,	// (0x000699f2) main_camera4_pane_g1

0x5d00,	// (0x00069a04) main_camera4_pane_g2_ParamLimits

0x5d00,	// (0x00069a04) main_camera4_pane_g2

0x5d13,	// (0x00069a17) main_camera4_pane_g3_ParamLimits

0x5d13,	// (0x00069a17) main_camera4_pane_g3

0x5d26,	// (0x00069a2a) main_camera4_pane_g4_ParamLimits

0x5d26,	// (0x00069a2a) main_camera4_pane_g4

0x5d39,	// (0x00069a3d) main_camera4_pane_g5_ParamLimits

0x5d39,	// (0x00069a3d) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x000735e6) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x000735e6) main_camera4_pane_g

0x5d5d,	// (0x00069a61) main_camera4_pane_t1_ParamLimits

0x5d5d,	// (0x00069a61) main_camera4_pane_t1

0xae30,	// (0x0006eb34) bg_tb_trans_pane_cp06

0xae46,	// (0x0006eb4a) cam4_indicators_pane_g1

0xae57,	// (0x0006eb5b) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x00073601) cam4_indicators_pane_g

0xae75,	// (0x0006eb79) cam4_indicators_pane_t1

0x5dc1,	// (0x00069ac5) main_video4_pane_g1_ParamLimits

0x5dc1,	// (0x00069ac5) main_video4_pane_g1

0x5dd0,	// (0x00069ad4) main_video4_pane_g2_ParamLimits

0x5dd0,	// (0x00069ad4) main_video4_pane_g2

0x5ddf,	// (0x00069ae3) main_video4_pane_g3_ParamLimits

0x5ddf,	// (0x00069ae3) main_video4_pane_g3

0x5dee,	// (0x00069af2) main_video4_pane_g4_ParamLimits

0x5dee,	// (0x00069af2) main_video4_pane_g4

0x0004,

0xf904,	// (0x00073608) main_video4_pane_g_ParamLimits

0xf904,	// (0x00073608) main_video4_pane_g

0x5e0c,	// (0x00069b10) vid4_indicators_pane_ParamLimits

0x5e0c,	// (0x00069b10) vid4_indicators_pane

0x5e3a,	// (0x00069b3e) video4_image_uncrop_cif_pane_ParamLimits

0x5e3a,	// (0x00069b3e) video4_image_uncrop_cif_pane

0x5e54,	// (0x00069b58) video4_image_uncrop_nhd_pane_ParamLimits

0x5e54,	// (0x00069b58) video4_image_uncrop_nhd_pane

0x5ca9,	// (0x000699ad) video4_image_uncrop_vga_pane_ParamLimits

0x5ca9,	// (0x000699ad) video4_image_uncrop_vga_pane

0xa4e7,	// (0x0006e1eb) bg_tb_trans_pane_cp07

0xaea1,	// (0x0006eba5) vid4_indicators_pane_g1

0xaeb5,	// (0x0006ebb9) vid4_indicators_pane_g2

0xaec9,	// (0x0006ebcd) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x00073613) vid4_indicators_pane_g

0xaef8,	// (0x0006ebfc) vid4_indicators_pane_t1

0x5e68,	// (0x00069b6c) cam4_autofocus_pane_g1

0x5e70,	// (0x00069b74) cam4_autofocus_pane_g2

0x5e78,	// (0x00069b7c) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0007361e) cam4_autofocus_pane_g

0x5e80,	// (0x00069b84) cam4_autofocus_pane_g3_copy1

0x575a,	// (0x0006945e) video_down_pane_cp_t1

0x5768,	// (0x0006946c) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0007359a) video_down_pane_cp_t

0xa4e7,	// (0x0006e1eb) popup_vitu2_window_ParamLimits

0xa4e7,	// (0x0006e1eb) popup_vitu2_window

0x5e88,	// (0x00069b8c) aid_size_cell2_itu2_ParamLimits

0x5e88,	// (0x00069b8c) aid_size_cell2_itu2

0x5eae,	// (0x00069bb2) aid_size_cell_itu2_ParamLimits

0x5eae,	// (0x00069bb2) aid_size_cell_itu2

0x5f0a,	// (0x00069c0e) bg_popup_window_pane_cp09_ParamLimits

0x5f0a,	// (0x00069c0e) bg_popup_window_pane_cp09

0x5f18,	// (0x00069c1c) field_vitu2_entry_pane_ParamLimits

0x5f18,	// (0x00069c1c) field_vitu2_entry_pane

0x5f3e,	// (0x00069c42) grid_vitu2_function_pane_ParamLimits

0x5f3e,	// (0x00069c42) grid_vitu2_function_pane

0x5f8f,	// (0x00069c93) grid_vitu2_itu_pane_ParamLimits

0x5f8f,	// (0x00069c93) grid_vitu2_itu_pane

0x6022,	// (0x00069d26) cell_vitu2_itu_pane_ParamLimits

0x6022,	// (0x00069d26) cell_vitu2_itu_pane

0x6046,	// (0x00069d4a) cell_vitu2_function_pane_ParamLimits

0x6046,	// (0x00069d4a) cell_vitu2_function_pane

0x6085,	// (0x00069d89) bg_popup_call_pane_cp08_ParamLimits

0x6085,	// (0x00069d89) bg_popup_call_pane_cp08

0x609e,	// (0x00069da2) field_vitu2_entry_pane_g1

0x60aa,	// (0x00069dae) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x00073625) field_vitu2_entry_pane_g

0x60c4,	// (0x00069dc8) field_vitu2_entry_pane_t1_ParamLimits

0x60c4,	// (0x00069dc8) field_vitu2_entry_pane_t1

0x60f3,	// (0x00069df7) field_vitu2_entry_pane_t2_ParamLimits

0x60f3,	// (0x00069df7) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0007362c) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0007362c) field_vitu2_entry_pane_t

0x6118,	// (0x00069e1c) bg_button_pane_cp010_ParamLimits

0x6118,	// (0x00069e1c) bg_button_pane_cp010

0x6126,	// (0x00069e2a) cell_vitu2_itu_pane_g1

0x6144,	// (0x00069e48) cell_vitu2_itu_pane_t1_ParamLimits

0x6144,	// (0x00069e48) cell_vitu2_itu_pane_t1

0x0327,	// (0x0006402b) cell_vitu2_itu_pane_t2_ParamLimits

0x0327,	// (0x0006402b) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x00073636) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x00073636) cell_vitu2_itu_pane_t

0xa4e7,	// (0x0006e1eb) bg_button_pane_cp011

0x61aa,	// (0x00069eae) cell_vitu2_function_pane_g1

0xa4f5,	// (0x0006e1f9) main_myfav_hc_pane

0x5b11,	// (0x00069815) popup_image3_note_pane_ParamLimits

0x5b11,	// (0x00069815) popup_image3_note_pane

0x5b2d,	// (0x00069831) popup_image3_tool_bar_pane_ParamLimits

0x5b2d,	// (0x00069831) popup_image3_tool_bar_pane

0x03ab,	// (0x000640af) cell_vitu2_itu_pane_t3_ParamLimits

0x03ab,	// (0x000640af) cell_vitu2_itu_pane_t3

0xa46f,	// (0x0006e173) bg_popup_trans_pane

0x61be,	// (0x00069ec2) grid_image3_tool_bar_pane

0x61c8,	// (0x00069ecc) bg_popup_trans_pane_g1

0xc70a,	// (0x0007040e) bg_popup_trans_pane_g2

0x61d0,	// (0x00069ed4) bg_popup_trans_pane_g3

0x61d8,	// (0x00069edc) bg_popup_trans_pane_g4

0x61e0,	// (0x00069ee4) bg_popup_trans_pane_g5

0x61e8,	// (0x00069eec) bg_popup_trans_pane_g6

0x61f0,	// (0x00069ef4) bg_popup_trans_pane_g7

0x61f8,	// (0x00069efc) bg_popup_trans_pane_g8

0xc6ea,	// (0x000703ee) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0007363d) bg_popup_trans_pane_g

0x6200,	// (0x00069f04) cell_image3_tool_bar_pane_ParamLimits

0x6200,	// (0x00069f04) cell_image3_tool_bar_pane

0xe670,	// (0x00072374) cell_image3_tool_bar_pane_g1

0xa46f,	// (0x0006e173) bg_popup_trans_pane_cp1

0x6214,	// (0x00069f18) popup_image3_note_pane_t1

0x6222,	// (0x00069f26) popup_image3_note_pane_t2

0x6230,	// (0x00069f34) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x00073650) popup_image3_note_pane_t

0x623e,	// (0x00069f42) popup_image3_note_pane_t3_copy1

0x624c,	// (0x00069f50) bg_myfav_hc_instruction_pane_ParamLimits

0x624c,	// (0x00069f50) bg_myfav_hc_instruction_pane

0x6260,	// (0x00069f64) cell_myfav_contact_pane_ParamLimits

0x6260,	// (0x00069f64) cell_myfav_contact_pane

0x627e,	// (0x00069f82) cell_myfav_contact_pane_cp1_ParamLimits

0x627e,	// (0x00069f82) cell_myfav_contact_pane_cp1

0x6296,	// (0x00069f9a) cell_myfav_contact_pane_cp2_ParamLimits

0x6296,	// (0x00069f9a) cell_myfav_contact_pane_cp2

0x62ae,	// (0x00069fb2) cell_myfav_contact_pane_cp3_ParamLimits

0x62ae,	// (0x00069fb2) cell_myfav_contact_pane_cp3

0x62c5,	// (0x00069fc9) cell_myfav_contact_pane_cp4_ParamLimits

0x62c5,	// (0x00069fc9) cell_myfav_contact_pane_cp4

0x62dd,	// (0x00069fe1) cell_myfav_contact_pane_cp5_ParamLimits

0x62dd,	// (0x00069fe1) cell_myfav_contact_pane_cp5

0x62f1,	// (0x00069ff5) cell_myfav_contact_pane_cp6_ParamLimits

0x62f1,	// (0x00069ff5) cell_myfav_contact_pane_cp6

0x6307,	// (0x0006a00b) cell_myfav_contact_pane_cp7_ParamLimits

0x6307,	// (0x0006a00b) cell_myfav_contact_pane_cp7

0x6321,	// (0x0006a025) listscroll_gen_pane_cp05

0x632a,	// (0x0006a02e) main_myfav_hc_pane_g1_ParamLimits

0x632a,	// (0x0006a02e) main_myfav_hc_pane_g1

0x6344,	// (0x0006a048) main_myfav_hc_pane_g2_ParamLimits

0x6344,	// (0x0006a048) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x00073657) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x00073657) main_myfav_hc_pane_g

0x6376,	// (0x0006a07a) main_myfav_hc_pane_t1_ParamLimits

0x6376,	// (0x0006a07a) main_myfav_hc_pane_t1

0x638d,	// (0x0006a091) main_myfav_hc_pane_t2_ParamLimits

0x638d,	// (0x0006a091) main_myfav_hc_pane_t2

0x639f,	// (0x0006a0a3) main_myfav_hc_pane_t3_ParamLimits

0x639f,	// (0x0006a0a3) main_myfav_hc_pane_t3

0x63b1,	// (0x0006a0b5) main_myfav_hc_pane_t4_ParamLimits

0x63b1,	// (0x0006a0b5) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0007365e) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0007365e) main_myfav_hc_pane_t

0xe670,	// (0x00072374) bg_myfav_hc_instruction_pane_g1

0x63d9,	// (0x0006a0dd) cell_myfav_contact_pane_g1_ParamLimits

0x63d9,	// (0x0006a0dd) cell_myfav_contact_pane_g1

0x63d9,	// (0x0006a0dd) cell_myfav_contact_pane_g2_ParamLimits

0x63d9,	// (0x0006a0dd) cell_myfav_contact_pane_g2

0x63e5,	// (0x0006a0e9) cell_myfav_contact_pane_g3_ParamLimits

0x63e5,	// (0x0006a0e9) cell_myfav_contact_pane_g3

0xe9a9,	// (0x000726ad) cell_myfav_contact_pane_g4_ParamLimits

0xe9a9,	// (0x000726ad) cell_myfav_contact_pane_g4

0x63f2,	// (0x0006a0f6) cell_myfav_contact_pane_g5_ParamLimits

0x63f2,	// (0x0006a0f6) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x00073669) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x00073669) cell_myfav_contact_pane_g

0x635e,	// (0x0006a062) main_myfav_hc_pane_g3_ParamLimits

0x635e,	// (0x0006a062) main_myfav_hc_pane_g3

0x057a,	// (0x0006427e) popup_adpt_find_window

0x63fe,	// (0x0006a102) afind_page_pane_ParamLimits

0x63fe,	// (0x0006a102) afind_page_pane

0x6413,	// (0x0006a117) aid_size_cell_afind_ParamLimits

0x6413,	// (0x0006a117) aid_size_cell_afind

0x6431,	// (0x0006a135) bg_popup_sub_pane_cp09_ParamLimits

0x6431,	// (0x0006a135) bg_popup_sub_pane_cp09

0x643e,	// (0x0006a142) find_pane_cp01_ParamLimits

0x643e,	// (0x0006a142) find_pane_cp01

0x644b,	// (0x0006a14f) grid_afind_control_pane_ParamLimits

0x644b,	// (0x0006a14f) grid_afind_control_pane

0x645f,	// (0x0006a163) grid_afind_pane_ParamLimits

0x645f,	// (0x0006a163) grid_afind_pane

0x6481,	// (0x0006a185) cell_afind_pane_ParamLimits

0x6481,	// (0x0006a185) cell_afind_pane

0xe670,	// (0x00072374) afind_page_pane_g1

0x64e2,	// (0x0006a1e6) afind_page_pane_g2

0x64eb,	// (0x0006a1ef) afind_page_pane_g3

0x0002,

0xf970,	// (0x00073674) afind_page_pane_g

0x64f4,	// (0x0006a1f8) afind_page_pane_t1

0x6514,	// (0x0006a218) cell_afind_grid_control_pane_ParamLimits

0x6514,	// (0x0006a218) cell_afind_grid_control_pane

0xefe4,	// (0x00072ce8) bg_button_pane_cp69_ParamLimits

0xefe4,	// (0x00072ce8) bg_button_pane_cp69

0x6523,	// (0x0006a227) cell_afind_pane_g1_ParamLimits

0x6523,	// (0x0006a227) cell_afind_pane_g1

0x6530,	// (0x0006a234) cell_afind_pane_t1_ParamLimits

0x6530,	// (0x0006a234) cell_afind_pane_t1

0xc503,	// (0x00070207) bg_button_pane_cp72

0x6542,	// (0x0006a246) cell_afind_grid_control_pane_g1

0x3437,	// (0x0006713b) aid_image_placing_area_ParamLimits

0x3437,	// (0x0006713b) aid_image_placing_area

0xecb2,	// (0x000729b6) field_vitu_entry_pane_g1_ParamLimits

0xecb2,	// (0x000729b6) field_vitu_entry_pane_g1

0xecbe,	// (0x000729c2) field_vitu_entry_pane_g2_ParamLimits

0xecbe,	// (0x000729c2) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x00073525) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x00073525) field_vitu_entry_pane_g

0x556f,	// (0x00069273) cell_vitu_itu_pane_g1_ParamLimits

0x55b1,	// (0x000692b5) cell_vitu_itu_pane_t3_ParamLimits

0x55b1,	// (0x000692b5) cell_vitu_itu_pane_t3

0xef94,	// (0x00072c98) mp4_progress_pane_t1_ParamLimits

0xefad,	// (0x00072cb1) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x000735ba) mp4_progress_pane_t_ParamLimits

0xefc6,	// (0x00072cca) mup_progress_pane_cp04_ParamLimits

0x63c5,	// (0x0006a0c9) main_myfav_hc_pane_t5_ParamLimits

0x63c5,	// (0x0006a0c9) main_myfav_hc_pane_t5

0xa495,	// (0x0006e199) aid_zoom_text_primary

0x057a,	// (0x0006427e) popup_adpt_find_window_ParamLimits

0xa4e7,	// (0x0006e1eb) main_cam_set_pane

0x5cda,	// (0x000699de) cam4_zoom_pane_ParamLimits

0x5cda,	// (0x000699de) cam4_zoom_pane

0x654b,	// (0x0006a24f) main_cam_set_pane_g1_ParamLimits

0x654b,	// (0x0006a24f) main_cam_set_pane_g1

0x6559,	// (0x0006a25d) main_cam_set_pane_g2_ParamLimits

0x6559,	// (0x0006a25d) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0007367b) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0007367b) main_cam_set_pane_g

0x657a,	// (0x0006a27e) main_cam_set_pane_t1_ParamLimits

0x657a,	// (0x0006a27e) main_cam_set_pane_t1

0x6595,	// (0x0006a299) main_cset_listscroll_pane_ParamLimits

0x6595,	// (0x0006a299) main_cset_listscroll_pane

0x65b5,	// (0x0006a2b9) main_cset_slider_pane_ParamLimits

0x65b5,	// (0x0006a2b9) main_cset_slider_pane

0x65e3,	// (0x0006a2e7) main_cset_list_pane_ParamLimits

0x65e3,	// (0x0006a2e7) main_cset_list_pane

0x65f3,	// (0x0006a2f7) scroll_pane_cp028

0x65fc,	// (0x0006a300) aid_area_touch_slider

0x6618,	// (0x0006a31c) cset_slider_pane

0x6642,	// (0x0006a346) main_cset_slider_pane_g1

0x6657,	// (0x0006a35b) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x00073680) main_cset_slider_pane_g

0x6743,	// (0x0006a447) main_cset_slider_pane_t1

0x6771,	// (0x0006a475) main_cset_slider_pane_t2

0x678b,	// (0x0006a48f) main_cset_slider_pane_t3

0x67a5,	// (0x0006a4a9) main_cset_slider_pane_t4

0x67bf,	// (0x0006a4c3) main_cset_slider_pane_t5

0x67d9,	// (0x0006a4dd) main_cset_slider_pane_t6

0x67ee,	// (0x0006a4f2) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x000736a5) main_cset_slider_pane_t

0x6964,	// (0x0006a668) cset_list_set_pane_ParamLimits

0x6964,	// (0x0006a668) cset_list_set_pane

0x6976,	// (0x0006a67a) aid_position_infowindow_above

0x697e,	// (0x0006a682) aid_position_infowindow_below

0x6986,	// (0x0006a68a) cset_list_set_pane_g1_ParamLimits

0x6986,	// (0x0006a68a) cset_list_set_pane_g1

0x6992,	// (0x0006a696) cset_list_set_pane_g3_ParamLimits

0x6992,	// (0x0006a696) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x000736c4) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x000736c4) cset_list_set_pane_g

0x69a1,	// (0x0006a6a5) cset_list_set_pane_t1_ParamLimits

0x69a1,	// (0x0006a6a5) cset_list_set_pane_t1

0xe24e,	// (0x00071f52) list_highlight_pane_cp021_ParamLimits

0xe24e,	// (0x00071f52) list_highlight_pane_cp021

0xcf57,	// (0x00070c5b) cset_slider_pane_g1

0xcf69,	// (0x00070c6d) cset_slider_pane_g2

0xcf60,	// (0x00070c64) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x000736c9) cset_slider_pane_g

0xaf0f,	// (0x0006ec13) aid_area_touch_cam4_zoom

0xaf17,	// (0x0006ec1b) cam4_zoom_cont_pane

0xaf1f,	// (0x0006ec23) cam4_zoom_pane_g1

0xaf27,	// (0x0006ec2b) cam4_zoom_pane_g2

0x69b6,	// (0x0006a6ba) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x000736d0) cam4_zoom_pane_g

0xaf2f,	// (0x0006ec33) cam4_zoom_cont_pane_g1

0xaf38,	// (0x0006ec3c) cam4_zoom_cont_pane_g2

0xaf41,	// (0x0006ec45) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x000736d7) cam4_zoom_cont_pane_g

0x5b9a,	// (0x0006989e) call4_image_pane_ParamLimits

0x5b9a,	// (0x0006989e) call4_image_pane

0xeff0,	// (0x00072cf4) call4_windows_conf_pane_ParamLimits

0xf031,	// (0x00072d35) popup_call4_audio_in_window_ParamLimits

0xf031,	// (0x00072d35) popup_call4_audio_in_window

0xa46f,	// (0x0006e173) bg_popup_call2_act_pane_cp02

0xf0a7,	// (0x00072dab) call4_list_conf_pane

0xe670,	// (0x00072374) call4_image_pane_g1

0xe670,	// (0x00072374) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x000733eb) call4_image_pane_g

0x69be,	// (0x0006a6c2) list_single_graphic_popup_conf4_pane_ParamLimits

0x69be,	// (0x0006a6c2) list_single_graphic_popup_conf4_pane

0xa46f,	// (0x0006e173) list_highlight_pane_cp022

0x69d1,	// (0x0006a6d5) list_single_graphic_popup_conf4_pane_g1

0xcc18,	// (0x0007091c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x000736de) list_single_graphic_popup_conf4_pane_g

0x69d9,	// (0x0006a6dd) list_single_graphic_popup_conf4_pane_t1

0x1734,	// (0x00065438) popup_vtel_slider_window_ParamLimits

0x1734,	// (0x00065438) popup_vtel_slider_window

0xefd2,	// (0x00072cd6) dialer2_ne_pane_t2_ParamLimits

0xefd2,	// (0x00072cd6) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x000735bf) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x000735bf) dialer2_ne_pane_t

0xe455,	// (0x00072159) bg_popup_sub_pane_cp010_ParamLimits

0xe455,	// (0x00072159) bg_popup_sub_pane_cp010

0x69ef,	// (0x0006a6f3) popup_vtel_slider_window_g1_ParamLimits

0x69ef,	// (0x0006a6f3) popup_vtel_slider_window_g1

0x6a02,	// (0x0006a706) popup_vtel_slider_window_g2_ParamLimits

0x6a02,	// (0x0006a706) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x000736e3) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x000736e3) popup_vtel_slider_window_g

0x6a58,	// (0x0006a75c) vtel_slider_pane_ParamLimits

0x6a58,	// (0x0006a75c) vtel_slider_pane

0x6a7a,	// (0x0006a77e) vtel_slider_pane_g1_ParamLimits

0x6a7a,	// (0x0006a77e) vtel_slider_pane_g1

0x6a8e,	// (0x0006a792) vtel_slider_pane_g2_ParamLimits

0x6a8e,	// (0x0006a792) vtel_slider_pane_g2

0x6aa6,	// (0x0006a7aa) vtel_slider_pane_g3_ParamLimits

0x6aa6,	// (0x0006a7aa) vtel_slider_pane_g3

0x6a7a,	// (0x0006a77e) vtel_slider_pane_g4_ParamLimits

0x6a7a,	// (0x0006a77e) vtel_slider_pane_g4

0x6abc,	// (0x0006a7c0) vtel_slider_pane_g5_ParamLimits

0x6abc,	// (0x0006a7c0) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x000736ec) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x000736ec) vtel_slider_pane_g

0xa4f5,	// (0x0006e1f9) main_gallery2_pane

0x5eda,	// (0x00069bde) aid_size_row_itut2_dropdow_list_ParamLimits

0x5eda,	// (0x00069bde) aid_size_row_itut2_dropdow_list

0x5f66,	// (0x00069c6a) grid_vitu2_function_top_pane_ParamLimits

0x5f66,	// (0x00069c6a) grid_vitu2_function_top_pane

0x5fcb,	// (0x00069ccf) popup_vitu2_dropdown_list_window_ParamLimits

0x5fcb,	// (0x00069ccf) popup_vitu2_dropdown_list_window

0x5ff4,	// (0x00069cf8) popup_vitu2_match_list_window

0x6ae0,	// (0x0006a7e4) cell_vitu2_function_top_pane_ParamLimits

0x6ae0,	// (0x0006a7e4) cell_vitu2_function_top_pane

0x6afe,	// (0x0006a802) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6afe,	// (0x0006a802) cell_vitu2_function_top_pane_cp01

0x6b1c,	// (0x0006a820) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b1c,	// (0x0006a820) cell_vitu2_function_top_wide_pane

0xa4e7,	// (0x0006e1eb) bg_button_pane_cp012

0x6b3a,	// (0x0006a83e) cell_vitu2_function_top_pane_g1

0xaf4a,	// (0x0006ec4e) bg_button_pane_cp013_ParamLimits

0xaf4a,	// (0x0006ec4e) bg_button_pane_cp013

0x6b4e,	// (0x0006a852) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6b4e,	// (0x0006a852) cell_vitu2_function_top_wide_pane_g1

0xa4e7,	// (0x0006e1eb) bg_popup_sub_pane_cp20

0x6b66,	// (0x0006a86a) list_vitu2_match_list_pane

0x61c8,	// (0x00069ecc) bg_popup_sub_pane_cp20_g1

0x61d0,	// (0x00069ed4) bg_popup_sub_pane_cp20_g2

0xc70a,	// (0x0007040e) bg_popup_sub_pane_cp20_g3

0x61d8,	// (0x00069edc) bg_popup_sub_pane_cp20_g4

0xc6ea,	// (0x000703ee) bg_popup_sub_pane_cp20_g5

0x6b84,	// (0x0006a888) bg_popup_sub_pane_cp20_g6

0x61e8,	// (0x00069eec) bg_popup_sub_pane_cp20_g7

0x61f0,	// (0x00069ef4) bg_popup_sub_pane_cp20_g8

0x61f8,	// (0x00069efc) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x000736f7) bg_popup_sub_pane_cp20_g

0xaf66,	// (0x0006ec6a) list_vitu2_match_list_item_pane_ParamLimits

0xaf66,	// (0x0006ec6a) list_vitu2_match_list_item_pane

0xaf78,	// (0x0006ec7c) list_vitu2_match_list_item_pane_t1

0xa4f5,	// (0x0006e1f9) bg_popup_sub_pane_cp21

0xaf86,	// (0x0006ec8a) grid_vitu2_dropdown_list_pane

0x6bd9,	// (0x0006a8dd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6bd9,	// (0x0006a8dd) cell_vitu2_dropdown_list_char_pane

0x6bfa,	// (0x0006a8fe) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6bfa,	// (0x0006a8fe) cell_vitu2_dropdown_list_ctrl_pane

0x6c26,	// (0x0006a92a) cell_vitu2_dropdown_list_char_pane_g1

0x6c2f,	// (0x0006a933) cell_vitu2_dropdown_list_char_pane_g2

0x6c38,	// (0x0006a93c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x00073714) cell_vitu2_dropdown_list_char_pane_g

0x6c41,	// (0x0006a945) cell_vitu2_dropdown_list_char_pane_t1

0x6c4f,	// (0x0006a953) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6c4f,	// (0x0006a953) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6c5c,	// (0x0006a960) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6c5c,	// (0x0006a960) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6c69,	// (0x0006a96d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6c69,	// (0x0006a96d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6c76,	// (0x0006a97a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6c76,	// (0x0006a97a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xae30,	// (0x0006eb34) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xae30,	// (0x0006eb34) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0007371b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0007371b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c92,	// (0x0006a996) aid_size_cell_gallery2_ParamLimits

0x6c92,	// (0x0006a996) aid_size_cell_gallery2

0x6ca8,	// (0x0006a9ac) grid_gallery2_pane_ParamLimits

0x6ca8,	// (0x0006a9ac) grid_gallery2_pane

0x6cbc,	// (0x0006a9c0) scroll_pane_cp029_ParamLimits

0x6cbc,	// (0x0006a9c0) scroll_pane_cp029

0x6cc8,	// (0x0006a9cc) cell_gallery2_pane_ParamLimits

0x6cc8,	// (0x0006a9cc) cell_gallery2_pane

0x6cfe,	// (0x0006aa02) cell_gallery2_pane_g2

0x6d08,	// (0x0006aa0c) cell_gallery2_pane_g3

0x6d10,	// (0x0006aa14) cell_gallery2_pane_g4

0x6d18,	// (0x0006aa1c) cell_gallery2_pane_g5

0xce13,	// (0x00070b17) grid_highlight_pane_cp10

0x5ff4,	// (0x00069cf8) popup_vitu2_match_list_window_ParamLimits

0x600b,	// (0x00069d0f) popup_vitu2_query_window_ParamLimits

0x600b,	// (0x00069d0f) popup_vitu2_query_window

0xa4f5,	// (0x0006e1f9) bg_vitu2_candi_button_pane

0x6c26,	// (0x0006a92a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x6c2f,	// (0x0006a933) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x6c38,	// (0x0006a93c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d20,	// (0x0006aa24) bg_button_pane_cp015

0x6d32,	// (0x0006aa36) bg_button_pane_cp016

0x6d45,	// (0x0006aa49) bg_button_pane_cp017

0xe268,	// (0x00071f6c) bg_popup_sub_pane_cp22

0x6d8a,	// (0x0006aa8e) popup_vitu2_query_window_g1

0x6d96,	// (0x0006aa9a) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x00073726) popup_vitu2_query_window_g

0x6db5,	// (0x0006aab9) popup_vitu2_query_window_t1_ParamLimits

0x6db5,	// (0x0006aab9) popup_vitu2_query_window_t1

0x6dea,	// (0x0006aaee) popup_vitu2_query_window_t2_ParamLimits

0x6dea,	// (0x0006aaee) popup_vitu2_query_window_t2

0x6dfc,	// (0x0006ab00) popup_vitu2_query_window_t3_ParamLimits

0x6dfc,	// (0x0006ab00) popup_vitu2_query_window_t3

0x6e24,	// (0x0006ab28) popup_vitu2_query_window_t4_ParamLimits

0x6e24,	// (0x0006ab28) popup_vitu2_query_window_t4

0x6e45,	// (0x0006ab49) popup_vitu2_query_window_t5_ParamLimits

0x6e45,	// (0x0006ab49) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0007372d) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0007372d) popup_vitu2_query_window_t

0x65db,	// (0x0006a2df) main_cset_text_pane

0x65fc,	// (0x0006a300) aid_area_touch_slider_ParamLimits

0x6618,	// (0x0006a31c) cset_slider_pane_ParamLimits

0x6642,	// (0x0006a346) main_cset_slider_pane_g1_ParamLimits

0x6657,	// (0x0006a35b) main_cset_slider_pane_g2_ParamLimits

0x666c,	// (0x0006a370) main_cset_slider_pane_g3_ParamLimits

0x666c,	// (0x0006a370) main_cset_slider_pane_g3

0x6678,	// (0x0006a37c) main_cset_slider_pane_g4_ParamLimits

0x6678,	// (0x0006a37c) main_cset_slider_pane_g4

0x6687,	// (0x0006a38b) main_cset_slider_pane_g5_ParamLimits

0x6687,	// (0x0006a38b) main_cset_slider_pane_g5

0x6693,	// (0x0006a397) main_cset_slider_pane_g6_ParamLimits

0x6693,	// (0x0006a397) main_cset_slider_pane_g6

0xf97c,	// (0x00073680) main_cset_slider_pane_g_ParamLimits

0x6743,	// (0x0006a447) main_cset_slider_pane_t1_ParamLimits

0x6771,	// (0x0006a475) main_cset_slider_pane_t2_ParamLimits

0x678b,	// (0x0006a48f) main_cset_slider_pane_t3_ParamLimits

0x67a5,	// (0x0006a4a9) main_cset_slider_pane_t4_ParamLimits

0x67bf,	// (0x0006a4c3) main_cset_slider_pane_t5_ParamLimits

0x67d9,	// (0x0006a4dd) main_cset_slider_pane_t6_ParamLimits

0x67ee,	// (0x0006a4f2) main_cset_slider_pane_t7_ParamLimits

0x6818,	// (0x0006a51c) main_cset_slider_pane_t8_ParamLimits

0x6818,	// (0x0006a51c) main_cset_slider_pane_t8

0x6840,	// (0x0006a544) main_cset_slider_pane_t9_ParamLimits

0x6840,	// (0x0006a544) main_cset_slider_pane_t9

0x6868,	// (0x0006a56c) main_cset_slider_pane_t10_ParamLimits

0x6868,	// (0x0006a56c) main_cset_slider_pane_t10

0x6890,	// (0x0006a594) main_cset_slider_pane_t11_ParamLimits

0x6890,	// (0x0006a594) main_cset_slider_pane_t11

0x68b8,	// (0x0006a5bc) main_cset_slider_pane_t12_ParamLimits

0x68b8,	// (0x0006a5bc) main_cset_slider_pane_t12

0x68d5,	// (0x0006a5d9) main_cset_slider_pane_t13_ParamLimits

0x68d5,	// (0x0006a5d9) main_cset_slider_pane_t13

0xf9a1,	// (0x000736a5) main_cset_slider_pane_t_ParamLimits

0xa46f,	// (0x0006e173) bg_popup_sub_pane_cp011

0x6ebc,	// (0x0006abc0) main_cset_text_pane_g1

0x6ec4,	// (0x0006abc8) main_cset_text_pane_t1

0x6ed2,	// (0x0006abd6) main_cset_text_pane_t2

0x6ee0,	// (0x0006abe4) main_cset_text_pane_t3

0x6eee,	// (0x0006abf2) main_cset_text_pane_t4

0x6efc,	// (0x0006ac00) main_cset_text_pane_t5

0x6f0a,	// (0x0006ac0e) main_cset_text_pane_t6

0x6f18,	// (0x0006ac1c) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0007373c) main_cset_text_pane_t

0xa4f5,	// (0x0006e1f9) main_cam4_burst_pane

0xa4f5,	// (0x0006e1f9) main_cam5_pane

0x6502,	// (0x0006a206) bg_button_pane_cp019

0x650b,	// (0x0006a20f) bg_button_pane_cp020

0x66a7,	// (0x0006a3ab) main_cset_slider_pane_g7_ParamLimits

0x66a7,	// (0x0006a3ab) main_cset_slider_pane_g7

0x66b3,	// (0x0006a3b7) main_cset_slider_pane_g8_ParamLimits

0x66b3,	// (0x0006a3b7) main_cset_slider_pane_g8

0x66bf,	// (0x0006a3c3) main_cset_slider_pane_g9_ParamLimits

0x66bf,	// (0x0006a3c3) main_cset_slider_pane_g9

0x66cb,	// (0x0006a3cf) main_cset_slider_pane_g10_ParamLimits

0x66cb,	// (0x0006a3cf) main_cset_slider_pane_g10

0x66d7,	// (0x0006a3db) main_cset_slider_pane_g11_ParamLimits

0x66d7,	// (0x0006a3db) main_cset_slider_pane_g11

0x66e3,	// (0x0006a3e7) main_cset_slider_pane_g12_ParamLimits

0x66e3,	// (0x0006a3e7) main_cset_slider_pane_g12

0x66ef,	// (0x0006a3f3) main_cset_slider_pane_g13_ParamLimits

0x66ef,	// (0x0006a3f3) main_cset_slider_pane_g13

0x66fb,	// (0x0006a3ff) main_cset_slider_pane_g14_ParamLimits

0x66fb,	// (0x0006a3ff) main_cset_slider_pane_g14

0x6707,	// (0x0006a40b) main_cset_slider_pane_g15_ParamLimits

0x6707,	// (0x0006a40b) main_cset_slider_pane_g15

0x68f2,	// (0x0006a5f6) main_cset_slider_pane_t14_ParamLimits

0x68f2,	// (0x0006a5f6) main_cset_slider_pane_t14

0x692b,	// (0x0006a62f) main_cset_slider_pane_t15_ParamLimits

0x692b,	// (0x0006a62f) main_cset_slider_pane_t15

0x6f26,	// (0x0006ac2a) aid_cam4_burst_size_cell_ParamLimits

0x6f26,	// (0x0006ac2a) aid_cam4_burst_size_cell

0x6f46,	// (0x0006ac4a) grid_cam4_burst_pane_ParamLimits

0x6f46,	// (0x0006ac4a) grid_cam4_burst_pane

0x6f7e,	// (0x0006ac82) linegrid_cam4_burst_pane_ParamLimits

0x6f7e,	// (0x0006ac82) linegrid_cam4_burst_pane

0x6fa2,	// (0x0006aca6) scroll_pane_cp30_ParamLimits

0x6fa2,	// (0x0006aca6) scroll_pane_cp30

0x6fae,	// (0x0006acb2) cell_cam4_burst_pane_ParamLimits

0x6fae,	// (0x0006acb2) cell_cam4_burst_pane

0x6ffb,	// (0x0006acff) linegrid_cam4_burst_pane_g1_ParamLimits

0x6ffb,	// (0x0006acff) linegrid_cam4_burst_pane_g1

0x7008,	// (0x0006ad0c) linegrid_cam4_burst_pane_g2_ParamLimits

0x7008,	// (0x0006ad0c) linegrid_cam4_burst_pane_g2

0x7019,	// (0x0006ad1d) linegrid_cam4_burst_pane_g3_ParamLimits

0x7019,	// (0x0006ad1d) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0007374b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0007374b) linegrid_cam4_burst_pane_g

0x7026,	// (0x0006ad2a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7026,	// (0x0006ad2a) linegrid_cam4_burst_pane_g3_copy1

0x7040,	// (0x0006ad44) linegrid_cam4_burst_pane_g4_ParamLimits

0x7040,	// (0x0006ad44) linegrid_cam4_burst_pane_g4

0x704d,	// (0x0006ad51) linegrid_cam4_burst_pane_g5_ParamLimits

0x704d,	// (0x0006ad51) linegrid_cam4_burst_pane_g5

0x705e,	// (0x0006ad62) linegrid_cam4_burst_pane_g6_ParamLimits

0x705e,	// (0x0006ad62) linegrid_cam4_burst_pane_g6

0x7075,	// (0x0006ad79) linegrid_cam4_burst_pane_g7_ParamLimits

0x7075,	// (0x0006ad79) linegrid_cam4_burst_pane_g7

0x7082,	// (0x0006ad86) cell_cam4_burst_pane_g1

0x70a1,	// (0x0006ada5) main_cam5_pane_t1_ParamLimits

0x70a1,	// (0x0006ada5) main_cam5_pane_t1

0x70b3,	// (0x0006adb7) main_cam5_pane_t2_ParamLimits

0x70b3,	// (0x0006adb7) main_cam5_pane_t2

0x70c5,	// (0x0006adc9) main_cam5_pane_t3_ParamLimits

0x70c5,	// (0x0006adc9) main_cam5_pane_t3

0x70d7,	// (0x0006addb) main_cam5_pane_t4_ParamLimits

0x70d7,	// (0x0006addb) main_cam5_pane_t4

0x70ef,	// (0x0006adf3) main_cam5_pane_t5_ParamLimits

0x70ef,	// (0x0006adf3) main_cam5_pane_t5

0x7103,	// (0x0006ae07) main_cam5_pane_t6_ParamLimits

0x7103,	// (0x0006ae07) main_cam5_pane_t6

0x7117,	// (0x0006ae1b) main_cam5_pane_t7_ParamLimits

0x7117,	// (0x0006ae1b) main_cam5_pane_t7

0x7129,	// (0x0006ae2d) main_cam5_pane_t8_ParamLimits

0x7129,	// (0x0006ae2d) main_cam5_pane_t8

0x7145,	// (0x0006ae49) main_cam5_pane_t9_ParamLimits

0x7145,	// (0x0006ae49) main_cam5_pane_t9

0x7157,	// (0x0006ae5b) main_cam5_pane_t10_ParamLimits

0x7157,	// (0x0006ae5b) main_cam5_pane_t10

0x7169,	// (0x0006ae6d) main_cam5_pane_t11_ParamLimits

0x7169,	// (0x0006ae6d) main_cam5_pane_t11

0x717b,	// (0x0006ae7f) main_cam5_pane_t12_ParamLimits

0x717b,	// (0x0006ae7f) main_cam5_pane_t12

0x7190,	// (0x0006ae94) main_cam5_pane_t13_ParamLimits

0x7190,	// (0x0006ae94) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x00073757) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x00073757) main_cam5_pane_t

0x05fc,	// (0x00064300) popup_scut_keymap_window_ParamLimits

0x05fc,	// (0x00064300) popup_scut_keymap_window

0x71ad,	// (0x0006aeb1) aid_size_cell_brow_shortcut

0xce13,	// (0x00070b17) bg_popup_window_pane_cp010

0x71b9,	// (0x0006aebd) grid_scut_pane

0x71c5,	// (0x0006aec9) cell_scut_pane_ParamLimits

0x71c5,	// (0x0006aec9) cell_scut_pane

0x71dc,	// (0x0006aee0) cell_scut_pane_g1

0x71e5,	// (0x0006aee9) cell_scut_pane_t1

0x71f4,	// (0x0006aef8) cell_scut_pane_t2

0x7203,	// (0x0006af07) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x00073772) cell_scut_pane_t

0x4a63,	// (0x00068767) main_mup3_pane_g8_ParamLimits

0x4a63,	// (0x00068767) main_mup3_pane_g8

0x5ef2,	// (0x00069bf6) area_vitu2_query_pane_ParamLimits

0x5ef2,	// (0x00069bf6) area_vitu2_query_pane

0x6d58,	// (0x0006aa5c) input_focus_pane_cp08

0x7211,	// (0x0006af15) area_vitu2_query_pane_g1

0x721d,	// (0x0006af21) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x00073779) area_vitu2_query_pane_g

0x722e,	// (0x0006af32) area_vitu2_query_pane_t1_ParamLimits

0x722e,	// (0x0006af32) area_vitu2_query_pane_t1

0x7242,	// (0x0006af46) area_vitu2_query_pane_t2_ParamLimits

0x7242,	// (0x0006af46) area_vitu2_query_pane_t2

0x7256,	// (0x0006af5a) area_vitu2_query_pane_t3_ParamLimits

0x7256,	// (0x0006af5a) area_vitu2_query_pane_t3

0x727e,	// (0x0006af82) area_vitu2_query_pane_t4_ParamLimits

0x727e,	// (0x0006af82) area_vitu2_query_pane_t4

0x72a6,	// (0x0006afaa) area_vitu2_query_pane_t5_ParamLimits

0x72a6,	// (0x0006afaa) area_vitu2_query_pane_t5

0x72ce,	// (0x0006afd2) area_vitu2_query_pane_t6_ParamLimits

0x72ce,	// (0x0006afd2) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0007377e) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0007377e) area_vitu2_query_pane_t

0x731a,	// (0x0006b01e) bg_button_pane_cp018

0x7328,	// (0x0006b02c) bg_button_pane_cp021

0x7334,	// (0x0006b038) bg_button_pane_cp022

0x7343,	// (0x0006b047) input_focus_pane_cp09

0x2a11,	// (0x00066715) aid_size_touch_mv_arrow_left

0x2a3a,	// (0x0006673e) aid_size_touch_mv_arrow_right

0x671f,	// (0x0006a423) main_cset_slider_pane_g16_ParamLimits

0x671f,	// (0x0006a423) main_cset_slider_pane_g16

0x672b,	// (0x0006a42f) main_cset_slider_pane_g17_ParamLimits

0x672b,	// (0x0006a42f) main_cset_slider_pane_g17

0x7082,	// (0x0006ad86) cell_cam4_burst_pane_g1_ParamLimits

0xa46f,	// (0x0006e173) compa_mode_pane

0x6a12,	// (0x0006a716) popup_vtel_slider_window_g3_ParamLimits

0x6a12,	// (0x0006a716) popup_vtel_slider_window_g3

0x6a29,	// (0x0006a72d) popup_vtel_slider_window_g4_ParamLimits

0x6a29,	// (0x0006a72d) popup_vtel_slider_window_g4

0x6a40,	// (0x0006a744) popup_vtel_slider_window_t1_ParamLimits

0x6a40,	// (0x0006a744) popup_vtel_slider_window_t1

0xa4f5,	// (0x0006e1f9) main_cl_pane

0xaa8e,	// (0x0006e792) popup_imed_adjust2_window_ParamLimits

0xe268,	// (0x00071f6c) bg_tb_trans_pane_cp05_ParamLimits

0xebe7,	// (0x000728eb) popup_imed_adjust2_window_g1_ParamLimits

0xebf6,	// (0x000728fa) popup_imed_adjust2_window_g2_ParamLimits

0xebf6,	// (0x000728fa) popup_imed_adjust2_window_g2

0xec02,	// (0x00072906) popup_imed_adjust2_window_g3_ParamLimits

0xec02,	// (0x00072906) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x000734e9) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x000734e9) popup_imed_adjust2_window_g

0xec0e,	// (0x00072912) popup_imed_adjust2_window_t1_ParamLimits

0xec26,	// (0x0007292a) slider_imed_adjust_pane_ParamLimits

0xec3a,	// (0x0007293e) slider_imed_adjust_pane_g1_ParamLimits

0xec4a,	// (0x0007294e) slider_imed_adjust_pane_g2_ParamLimits

0xec5a,	// (0x0007295e) slider_imed_adjust_pane_g3_ParamLimits

0xec6b,	// (0x0007296f) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x000734f0) slider_imed_adjust_pane_g_ParamLimits

0x5c7b,	// (0x0006997f) aid_touch_area_cam4_ParamLimits

0x5c7b,	// (0x0006997f) aid_touch_area_cam4

0xae02,	// (0x0006eb06) battery_pane_cp01

0x5d4a,	// (0x00069a4e) main_camera4_pane_g6_ParamLimits

0x5d4a,	// (0x00069a4e) main_camera4_pane_g6

0x5d74,	// (0x00069a78) main_camera4_pane_t2_ParamLimits

0x5d74,	// (0x00069a78) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x000735f3) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x000735f3) main_camera4_pane_t

0x5da9,	// (0x00069aad) aid_touch_area_vid4_ParamLimits

0x5da9,	// (0x00069aad) aid_touch_area_vid4

0x5dfd,	// (0x00069b01) main_video4_pane_g5_ParamLimits

0x5dfd,	// (0x00069b01) main_video4_pane_g5

0x5e22,	// (0x00069b26) vid4_progress_pane_ParamLimits

0x5e22,	// (0x00069b26) vid4_progress_pane

0x6737,	// (0x0006a43b) main_cset_slider_pane_g18_ParamLimits

0x6737,	// (0x0006a43b) main_cset_slider_pane_g18

0x7095,	// (0x0006ad99) cell_cam4_burst_pane_g2_ParamLimits

0x7095,	// (0x0006ad99) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x00073752) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x00073752) cell_cam4_burst_pane_g

0xc2e9,	// (0x0006ffed) bg_cl_pane_ParamLimits

0xc2e9,	// (0x0006ffed) bg_cl_pane

0x7352,	// (0x0006b056) cl_header_pane_ParamLimits

0x7352,	// (0x0006b056) cl_header_pane

0x7366,	// (0x0006b06a) cl_listscroll_pane_ParamLimits

0x7366,	// (0x0006b06a) cl_listscroll_pane

0x7376,	// (0x0006b07a) bg_cl_pane_g1

0x737e,	// (0x0006b082) bg_cl_pane_g2

0x7386,	// (0x0006b08a) bg_cl_pane_g3

0x738e,	// (0x0006b092) bg_cl_pane_g4

0x7396,	// (0x0006b09a) bg_cl_pane_g5

0x739e,	// (0x0006b0a2) bg_cl_pane_g6

0x73a6,	// (0x0006b0aa) bg_cl_pane_g7

0x73ae,	// (0x0006b0b2) bg_cl_pane_g8

0x73b6,	// (0x0006b0ba) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0007378d) bg_cl_pane_g

0x73be,	// (0x0006b0c2) aid_height_cl_leading_ParamLimits

0x73be,	// (0x0006b0c2) aid_height_cl_leading

0x73ca,	// (0x0006b0ce) aid_height_cl_text_ParamLimits

0x73ca,	// (0x0006b0ce) aid_height_cl_text

0xe24e,	// (0x00071f52) bg_cl_header_pane_ParamLimits

0xe24e,	// (0x00071f52) bg_cl_header_pane

0x73e9,	// (0x0006b0ed) cl_header_pane_g1_ParamLimits

0x73e9,	// (0x0006b0ed) cl_header_pane_g1

0x73ff,	// (0x0006b103) cl_header_pane_t1_ParamLimits

0x73ff,	// (0x0006b103) cl_header_pane_t1

0x7418,	// (0x0006b11c) cl_list_pane

0x65f3,	// (0x0006a2f7) hc_scroll_pane_cp01

0xc6ea,	// (0x000703ee) bg_cl_header_pane_g1

0x61c8,	// (0x00069ecc) bg_cl_header_pane_g2

0xc70a,	// (0x0007040e) bg_cl_header_pane_g3

0x61d8,	// (0x00069edc) bg_cl_header_pane_g4

0x61d0,	// (0x00069ed4) bg_cl_header_pane_g5

0x6b84,	// (0x0006a888) bg_cl_header_pane_g6

0x61f0,	// (0x00069ef4) bg_cl_header_pane_g7

0x61f8,	// (0x00069efc) bg_cl_header_pane_g8

0x61e8,	// (0x00069eec) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x000737a0) bg_cl_header_pane_g

0x7421,	// (0x0006b125) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7421,	// (0x0006b125) hc_cl_list_double_graphic_heading_pane

0x7432,	// (0x0006b136) hc_cl_list_single_graphic_pane_ParamLimits

0x7432,	// (0x0006b136) hc_cl_list_single_graphic_pane

0x7448,	// (0x0006b14c) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7448,	// (0x0006b14c) hc_cl_list_single_graphic_pane_g1

0x7454,	// (0x0006b158) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7454,	// (0x0006b158) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x000737b3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x000737b3) hc_cl_list_single_graphic_pane_g

0x7468,	// (0x0006b16c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7468,	// (0x0006b16c) hc_cl_list_single_graphic_pane_t1

0x7448,	// (0x0006b14c) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7448,	// (0x0006b14c) hc_cl_list_double_graphic_heading_pane_g1

0x747d,	// (0x0006b181) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x747d,	// (0x0006b181) hc_cl_list_double_graphic_heading_pane_g2

0x7491,	// (0x0006b195) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7491,	// (0x0006b195) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x000737b8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x000737b8) hc_cl_list_double_graphic_heading_pane_g

0x74a5,	// (0x0006b1a9) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74a5,	// (0x0006b1a9) hc_cl_list_double_graphic_heading_pane_t1

0x74ba,	// (0x0006b1be) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74ba,	// (0x0006b1be) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x000737bf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x000737bf) hc_cl_list_double_graphic_heading_pane_t

0x74cf,	// (0x0006b1d3) vid4_progress_pane_g1

0x74e1,	// (0x0006b1e5) vid4_progress_pane_g2

0xc9cb,	// (0x000706cf) vid4_progress_pane_g3

0xaf96,	// (0x0006ec9a) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x000737c4) vid4_progress_pane_g

0xafb4,	// (0x0006ecb8) vid4_progress_pane_t1

0xafc9,	// (0x0006eccd) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x000737cf) vid4_progress_pane_t

0xaff4,	// (0x0006ecf8) wait_bar_pane_cp07

0xe463,	// (0x00072167) blid_firmament_pane_ParamLimits

0xe4a6,	// (0x000721aa) popup_blid_sat_info2_window_g1

0xe4ca,	// (0x000721ce) popup_blid_sat_info2_window_t3

0xe4d8,	// (0x000721dc) popup_blid_sat_info2_window_t4

0xe4e6,	// (0x000721ea) popup_blid_sat_info2_window_t5

0xe4f4,	// (0x000721f8) popup_blid_sat_info2_window_t6

0xe504,	// (0x00072208) popup_blid_sat_info2_window_t7

0xe512,	// (0x00072216) popup_blid_sat_info2_window_t8

0xe520,	// (0x00072224) popup_blid_sat_info2_window_t9

0xe52e,	// (0x00072232) popup_blid_sat_info2_window_t10

0xe5f0,	// (0x000722f4) aid_firma_cardinal_ParamLimits

0xe604,	// (0x00072308) blid_firmament_pane_t1_ParamLimits

0xe61b,	// (0x0007231f) blid_firmament_pane_t2_ParamLimits

0xe632,	// (0x00072336) blid_firmament_pane_t3_ParamLimits

0xe649,	// (0x0007234d) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x000733e2) blid_firmament_pane_t_ParamLimits

0xe660,	// (0x00072364) blid_sat_info_pane_ParamLimits

0xa4e7,	// (0x0006e1eb) main_cam_set_pane_ParamLimits

0x5329,	// (0x0006902d) aid_size_cell_colour_35_ParamLimits

0x5349,	// (0x0006904d) aid_size_cell_colour_112_ParamLimits

0x5369,	// (0x0006906d) aid_size_cell_effect_ParamLimits

0xe268,	// (0x00071f6c) bg_tb_trans_pane_cp02_ParamLimits

0xc952,	// (0x00070656) heading_imed_pane_ParamLimits

0x5389,	// (0x0006908d) listscroll_imed_pane_ParamLimits

0xd880,	// (0x00071584) popup_call2_audio_first_window_g5_ParamLimits

0xd880,	// (0x00071584) popup_call2_audio_first_window_g5

0x5926,	// (0x0006962a) aid_size_touch_image3_arrow_left_ParamLimits

0x5926,	// (0x0006962a) aid_size_touch_image3_arrow_left

0x5952,	// (0x00069656) aid_size_touch_image3_arrow_right_ParamLimits

0x5952,	// (0x00069656) aid_size_touch_image3_arrow_right

0xafdf,	// (0x0006ece3) vid4_progress_pane_t3

0x569c,	// (0x000693a0) main_hwr_training_symbol_option_pane_ParamLimits

0x569c,	// (0x000693a0) main_hwr_training_symbol_option_pane

0xeed4,	// (0x00072bd8) popup_hwr_training_preview_window_ParamLimits

0xeed4,	// (0x00072bd8) popup_hwr_training_preview_window

0x56bc,	// (0x000693c0) hwr_training_navi_pane_g5_ParamLimits

0x56bc,	// (0x000693c0) hwr_training_navi_pane_g5

0x6110,	// (0x00069e14) popup_char_count_window

0xa4e7,	// (0x0006e1eb) bg_popup_sub_pane_cp20_ParamLimits

0x6b66,	// (0x0006a86a) list_vitu2_match_list_pane_ParamLimits

0x6b75,	// (0x0006a879) vitu2_page_scroll_pane_ParamLimits

0x6b75,	// (0x0006a879) vitu2_page_scroll_pane

0x754d,	// (0x0006b251) list_single_hwr_training_symbol_option_pane_ParamLimits

0x754d,	// (0x0006b251) list_single_hwr_training_symbol_option_pane

0x7560,	// (0x0006b264) list_single_hwr_training_symbol_option_pane_g1

0x7568,	// (0x0006b26c) list_single_hwr_training_symbol_option_pane_t1

0x7576,	// (0x0006b27a) bg_button_pane_cp023

0x757f,	// (0x0006b283) bg_button_pane_cp024

0x75b2,	// (0x0006b2b6) vitu2_page_scroll_pane_g1

0x75ba,	// (0x0006b2be) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x000737d6) vitu2_page_scroll_pane_g

0x75c2,	// (0x0006b2c6) vitu2_page_scroll_pane_t1

0x75d1,	// (0x0006b2d5) popup_char_count_window_g1

0x75da,	// (0x0006b2de) popup_char_count_window_g2

0x75e3,	// (0x0006b2e7) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x000737db) popup_char_count_window_g

0x75ec,	// (0x0006b2f0) popup_char_count_window_t1

0xa4f5,	// (0x0006e1f9) main_vded2_pane

0xebd3,	// (0x000728d7) aid_size_cell_imed_line

0xebdd,	// (0x000728e1) grid_imed_line_width_pane

0xaeda,	// (0x0006ebde) vid4_indicators_pane_g4

0x75fa,	// (0x0006b2fe) cell_imed_line_width_pane_ParamLimits

0x75fa,	// (0x0006b2fe) cell_imed_line_width_pane

0x760e,	// (0x0006b312) cell_imed_line_width_pane_g1

0x45f1,	// (0x000682f5) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x000737e2) cell_imed_line_width_pane_g

0x7617,	// (0x0006b31b) main_vded2_pane_g1_ParamLimits

0x7617,	// (0x0006b31b) main_vded2_pane_g1

0x762d,	// (0x0006b331) main_vded2_pane_g2_ParamLimits

0x762d,	// (0x0006b331) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x000737e7) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x000737e7) main_vded2_pane_g

0x763f,	// (0x0006b343) vded2_slider_pane_ParamLimits

0x763f,	// (0x0006b343) vded2_slider_pane

0x764f,	// (0x0006b353) aid_size_touch_vded2_end

0x7659,	// (0x0006b35d) aid_size_touch_vded2_playhead

0x7663,	// (0x0006b367) aid_size_touch_vded2_start

0x766b,	// (0x0006b36f) vded2_slider_bg_pane

0x7674,	// (0x0006b378) vded2_slider_pane_g1

0x767d,	// (0x0006b381) vded2_slider_pane_g2

0x7685,	// (0x0006b389) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x000737ec) vded2_slider_pane_g

0x7690,	// (0x0006b394) vded2_slider_bg_pane_g1

0x7699,	// (0x0006b39d) vded2_slider_bg_pane_g2

0x76a2,	// (0x0006b3a6) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x000737f3) vded2_slider_bg_pane_g

0x30a6,	// (0x00066daa) aid_postcard_touch_down_pane_ParamLimits

0x30a6,	// (0x00066daa) aid_postcard_touch_down_pane

0x30bc,	// (0x00066dc0) aid_postcard_touch_up_pane_ParamLimits

0x30bc,	// (0x00066dc0) aid_postcard_touch_up_pane

0xa4f5,	// (0x0006e1f9) main_blid2_pane

0xaa74,	// (0x0006e778) popup_blid2_search_window

0xa46f,	// (0x0006e173) blid2_gps_pane

0xa46f,	// (0x0006e173) blid2_navig_pane

0xa46f,	// (0x0006e173) blid2_search_pane

0xa46f,	// (0x0006e173) blid2_tripm_pane

0x76ab,	// (0x0006b3af) blid2_search_pane_g1_ParamLimits

0x76ab,	// (0x0006b3af) blid2_search_pane_g1

0x76c5,	// (0x0006b3c9) blid2_search_pane_t1_ParamLimits

0x76c5,	// (0x0006b3c9) blid2_search_pane_t1

0x76d7,	// (0x0006b3db) aid_size_cell_blid2_gps_ParamLimits

0x76d7,	// (0x0006b3db) aid_size_cell_blid2_gps

0x76ef,	// (0x0006b3f3) blid2_gps_pane_g1_ParamLimits

0x76ef,	// (0x0006b3f3) blid2_gps_pane_g1

0x7703,	// (0x0006b407) grid_blid2_satellite_pane_ParamLimits

0x7703,	// (0x0006b407) grid_blid2_satellite_pane

0x771d,	// (0x0006b421) blid2_navig_pane_g1_ParamLimits

0x771d,	// (0x0006b421) blid2_navig_pane_g1

0x7729,	// (0x0006b42d) blid2_navig_pane_t1_ParamLimits

0x7729,	// (0x0006b42d) blid2_navig_pane_t1

0x7744,	// (0x0006b448) blid2_navig_pane_t2_ParamLimits

0x7744,	// (0x0006b448) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x000737fa) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x000737fa) blid2_navig_pane_t

0x775f,	// (0x0006b463) blid2_navig_ring_pane_ParamLimits

0x775f,	// (0x0006b463) blid2_navig_ring_pane

0x7778,	// (0x0006b47c) blid2_speed_pane_ParamLimits

0x7778,	// (0x0006b47c) blid2_speed_pane

0x7784,	// (0x0006b488) blid2_tripm_pane_g1_ParamLimits

0x7784,	// (0x0006b488) blid2_tripm_pane_g1

0x779d,	// (0x0006b4a1) blid2_tripm_pane_g2_ParamLimits

0x779d,	// (0x0006b4a1) blid2_tripm_pane_g2

0x77b1,	// (0x0006b4b5) blid2_tripm_pane_g3_ParamLimits

0x77b1,	// (0x0006b4b5) blid2_tripm_pane_g3

0x77c5,	// (0x0006b4c9) blid2_tripm_pane_g4_ParamLimits

0x77c5,	// (0x0006b4c9) blid2_tripm_pane_g4

0x77d9,	// (0x0006b4dd) blid2_tripm_pane_g5_ParamLimits

0x77d9,	// (0x0006b4dd) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x000737ff) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x000737ff) blid2_tripm_pane_g

0x77ff,	// (0x0006b503) blid2_tripm_pane_t1_ParamLimits

0x77ff,	// (0x0006b503) blid2_tripm_pane_t1

0x781a,	// (0x0006b51e) blid2_tripm_pane_t2_ParamLimits

0x781a,	// (0x0006b51e) blid2_tripm_pane_t2

0x7833,	// (0x0006b537) blid2_tripm_pane_t3_ParamLimits

0x7833,	// (0x0006b537) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0007380c) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0007380c) blid2_tripm_pane_t

0x787a,	// (0x0006b57e) cell_blid2_satellite_pane_ParamLimits

0x787a,	// (0x0006b57e) cell_blid2_satellite_pane

0x7898,	// (0x0006b59c) cell_blid2_satellite_pane_g1

0x78a1,	// (0x0006b5a5) cell_blid2_satellite_pane_t1

0xe670,	// (0x00072374) blid2_speed_pane_g1

0x78af,	// (0x0006b5b3) blid2_speed_pane_t1

0x78bd,	// (0x0006b5c1) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x00073815) blid2_speed_pane_t

0xe670,	// (0x00072374) blid2_navig_ring_pane_g1

0x78cb,	// (0x0006b5cf) blid2_navig_ring_pane_g2

0x78d3,	// (0x0006b5d7) blid2_navig_ring_pane_g3

0x78db,	// (0x0006b5df) blid2_navig_ring_pane_g4

0x78e3,	// (0x0006b5e7) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0007381a) blid2_navig_ring_pane_g

0xa46f,	// (0x0006e173) bg_popup_window_pane_cp011

0x78eb,	// (0x0006b5ef) popup_blid2_search_window_g1

0x78f3,	// (0x0006b5f7) popup_blid2_search_window_t1

0x7901,	// (0x0006b605) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x00073825) popup_blid2_search_window_t

0xc5f9,	// (0x000702fd) main_browser_pane_g1

0xc2e9,	// (0x0006ffed) main_browser_pane_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_button_pane_cp011_ParamLimits

0x61aa,	// (0x00069eae) cell_vitu2_function_pane_g1_ParamLimits

0xe268,	// (0x00071f6c) bg_popup_sub_pane_cp22_ParamLimits

0x6d58,	// (0x0006aa5c) input_focus_pane_cp08_ParamLimits

0x6d6f,	// (0x0006aa73) popup_vitu2_query_button_pane_ParamLimits

0x6d6f,	// (0x0006aa73) popup_vitu2_query_button_pane

0x6d80,	// (0x0006aa84) popup_vitu2_query_input_button_pane

0x6d8a,	// (0x0006aa8e) popup_vitu2_query_window_g1_ParamLimits

0x6d96,	// (0x0006aa9a) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x00073726) popup_vitu2_query_window_g_ParamLimits

0xa46f,	// (0x0006e173) bg_button_pane_cp026

0x790f,	// (0x0006b613) popup_vitu2_query_input_button_pane_g1

0xa46f,	// (0x0006e173) bg_button_pane_cp025

0x7917,	// (0x0006b61b) popup_vitu2_query_button_pane_t1

0x474c,	// (0x00068450) main_mp3_pane_t6

0x475a,	// (0x0006845e) popup_slider_window_cp01

0xae3e,	// (0x0006eb42) cam4_battery_pane

0xae97,	// (0x0006eb9b) cam4_battery_pane_cp02

0xaf8e,	// (0x0006ec92) cam4_battery_pane_cp01

0xaf8e,	// (0x0006ec92) cam4_battery_pane_cp03

0x580b,	// (0x0006950f) cam4_battery_pane_g1

0xe670,	// (0x00072374) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0007382a) cam4_battery_pane_g

0xe53c,	// (0x00072240) popup_blid_sat_info2_window_t11

0x2a11,	// (0x00066715) aid_size_touch_mv_arrow_left_ParamLimits

0x2a3a,	// (0x0006673e) aid_size_touch_mv_arrow_right_ParamLimits

0xcd73,	// (0x00070a77) navi_pane_g1_ParamLimits

0x2a79,	// (0x0006677d) navi_pane_g2_ParamLimits

0x2aa7,	// (0x000667ab) navi_pane_g3_ParamLimits

0xf3f0,	// (0x000730f4) navi_pane_g_ParamLimits

0x2aff,	// (0x00066803) navi_pane_mv_t1_ParamLimits

0x5395,	// (0x00069099) grid_imed_effect_pane_ParamLimits

0x1631,	// (0x00065335) aid_placing_vt_slider_lsc

0xc548,	// (0x0007024c) aid_placing_vt_slider_prt

0xe24e,	// (0x00071f52) bg_tb_trans_pane_cp01_ParamLimits

0xe7fc,	// (0x00072500) popup_image_details_window_g1_ParamLimits

0xe80f,	// (0x00072513) popup_image_details_window_g2_ParamLimits

0xe824,	// (0x00072528) popup_image_details_window_g3_ParamLimits

0xe824,	// (0x00072528) popup_image_details_window_g3

0xf723,	// (0x00073427) popup_image_details_window_g_ParamLimits

0xe838,	// (0x0007253c) popup_image_details_window_t1_ParamLimits

0xe84a,	// (0x0007254e) popup_image_details_window_t2_ParamLimits

0xe863,	// (0x00072567) popup_image_details_window_t3_ParamLimits

0xe877,	// (0x0007257b) popup_image_details_window_t4_ParamLimits

0xe892,	// (0x00072596) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0007342e) popup_image_details_window_t_ParamLimits

0x73d6,	// (0x0006b0da) cl_header_name_pane_ParamLimits

0x73d6,	// (0x0006b0da) cl_header_name_pane

0x7925,	// (0x0006b629) cl_header_name_pane_t1_ParamLimits

0x7925,	// (0x0006b629) cl_header_name_pane_t1

0x7946,	// (0x0006b64a) cl_header_name_pane_t2_ParamLimits

0x7946,	// (0x0006b64a) cl_header_name_pane_t2

0x7988,	// (0x0006b68c) cl_header_name_pane_t3_ParamLimits

0x7988,	// (0x0006b68c) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0007382f) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0007382f) cl_header_name_pane_t

0x2ad0,	// (0x000667d4) navi_pane_mv_g2_ParamLimits

0x609e,	// (0x00069da2) field_vitu2_entry_pane_g1_ParamLimits

0x60aa,	// (0x00069dae) field_vitu2_entry_pane_g2_ParamLimits

0x60b6,	// (0x00069dba) field_vitu2_entry_pane_g3_ParamLimits

0x60b6,	// (0x00069dba) field_vitu2_entry_pane_g3

0xf921,	// (0x00073625) field_vitu2_entry_pane_g_ParamLimits

0x6126,	// (0x00069e2a) cell_vitu2_itu_pane_g1_ParamLimits

0x6136,	// (0x00069e3a) cell_vitu2_itu_pane_g2_ParamLimits

0x6136,	// (0x00069e3a) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x00073631) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x00073631) cell_vitu2_itu_pane_g

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp05_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp05

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp03

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp04

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp10_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp10

0x7334,	// (0x0006b038) bg_vkb2_func_pane_cp08

0x731a,	// (0x0006b01e) bg_vkb2_func_pane_cp06

0x7328,	// (0x0006b02c) bg_vkb2_func_pane_cp07

0x7588,	// (0x0006b28c) bg_vkb2_func_pane_cp11_ParamLimits

0x7588,	// (0x0006b28c) bg_vkb2_func_pane_cp11

0x759d,	// (0x0006b2a1) bg_vkb2_func_pane_cp12_ParamLimits

0x759d,	// (0x0006b2a1) bg_vkb2_func_pane_cp12

0xa46f,	// (0x0006e173) bg_vkb2_func_pane_cp09

0x61c8,	// (0x00069ecc) bg_vkb2_func_pane_g1

0xc70a,	// (0x0007040e) bg_vkb2_func_pane_g2

0x61d0,	// (0x00069ed4) bg_vkb2_func_pane_g3

0x61d8,	// (0x00069edc) bg_vkb2_func_pane_g4

0x6b84,	// (0x0006a888) bg_vkb2_func_pane_g5

0x61f0,	// (0x00069ef4) bg_vkb2_func_pane_g6

0x61f8,	// (0x00069efc) bg_vkb2_func_pane_g7

0x61e8,	// (0x00069eec) bg_vkb2_func_pane_g8

0xc6ea,	// (0x000703ee) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x00073836) bg_vkb2_func_pane_g

0x77ed,	// (0x0006b4f1) blid2_tripm_pane_g6_ParamLimits

0x77ed,	// (0x0006b4f1) blid2_tripm_pane_g6

0xef8c,	// (0x00072c90) mp4_progress_pane_g1

0x7866,	// (0x0006b56a) blid2_tripm_values_pane_ParamLimits

0x7866,	// (0x0006b56a) blid2_tripm_values_pane

0x79b9,	// (0x0006b6bd) blid2_tripm_values_pane_t1

0x79c7,	// (0x0006b6cb) blid2_tripm_values_pane_t2

0x79d5,	// (0x0006b6d9) blid2_tripm_values_pane_t3

0x79e3,	// (0x0006b6e7) blid2_tripm_values_pane_t4

0x79f1,	// (0x0006b6f5) blid2_tripm_values_pane_t5

0x79ff,	// (0x0006b703) blid2_tripm_values_pane_t6

0x7a0d,	// (0x0006b711) blid2_tripm_values_pane_t7

0x7a1b,	// (0x0006b71f) blid2_tripm_values_pane_t8

0x7a29,	// (0x0006b72d) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x00073849) blid2_tripm_values_pane_t

0x1673,	// (0x00065377) call_video_pane_t1_ParamLimits

0x1691,	// (0x00065395) call_video_pane_t2_ParamLimits

0xf279,	// (0x00072f7d) call_video_pane_t_ParamLimits

0x2fe1,	// (0x00066ce5) msg_header_pane_g1_ParamLimits

0xcf93,	// (0x00070c97) msg_header_pane_g2_ParamLimits

0xcf93,	// (0x00070c97) msg_header_pane_g2

0x0001,

0xf493,	// (0x00073197) msg_header_pane_g_ParamLimits

0xf493,	// (0x00073197) msg_header_pane_g

0xc2e9,	// (0x0006ffed) main_clock2_pane_ParamLimits

0x5094,	// (0x00068d98) grid_clock2_toolbar_pane_ParamLimits

0x5094,	// (0x00068d98) grid_clock2_toolbar_pane

0x5094,	// (0x00068d98) listscroll_clock2_pane_ParamLimits

0x5094,	// (0x00068d98) listscroll_clock2_pane

0x5189,	// (0x00068e8d) main_clock2_pane_t3_ParamLimits

0x5189,	// (0x00068e8d) main_clock2_pane_t3

0x51ad,	// (0x00068eb1) main_clock2_pane_t4_ParamLimits

0x51ad,	// (0x00068eb1) main_clock2_pane_t4

0x7a37,	// (0x0006b73b) cell_clock2_toolbar_pane

0x7a3f,	// (0x0006b743) cell_clock2_toolbar_pane_cp01

0x7a3f,	// (0x0006b743) cell_clock2_toolbar_pane_cp02

0x7a47,	// (0x0006b74b) cell_clock2_toolbar_pane_cp03

0x7a4f,	// (0x0006b753) list_clock2_pane

0xccca,	// (0x000709ce) scroll_pane_cp10

0x7a57,	// (0x0006b75b) list_single_clock2_pane_ParamLimits

0x7a57,	// (0x0006b75b) list_single_clock2_pane

0xce13,	// (0x00070b17) list_highlight_pane_cp08

0x7a64,	// (0x0006b768) list_single_clock2_pane_t1

0x7a72,	// (0x0006b776) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0007385c) list_single_clock2_pane_t

0xa46f,	// (0x0006e173) bg_button_pane_cp10

0x7a80,	// (0x0006b784) cell_clock2_toolbar_pane_g1

0x3032,	// (0x00066d36) aid_main_viewer_pane_g1_ParamLimits

0x3032,	// (0x00066d36) aid_main_viewer_pane_g1

0x3040,	// (0x00066d44) aid_main_viewer_pane_g2_ParamLimits

0x3040,	// (0x00066d44) aid_main_viewer_pane_g2

0x304e,	// (0x00066d52) aid_main_viewer_pane_g3_ParamLimits

0x304e,	// (0x00066d52) aid_main_viewer_pane_g3

0x305d,	// (0x00066d61) aid_main_viewer_pane_g4_ParamLimits

0x305d,	// (0x00066d61) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x000731a8) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x000731a8) aid_main_viewer_pane_g

0x3963,	// (0x00067667) main_calc_pane_ParamLimits

0x3989,	// (0x0006768d) main_dialer2_pane_ParamLimits

0xa4f5,	// (0x0006e1f9) main_cam6_pane

0xa4f5,	// (0x0006e1f9) main_vid6_pane

0x50a0,	// (0x00068da4) listscroll_gen_pane_cp06_ParamLimits

0x50a0,	// (0x00068da4) listscroll_gen_pane_cp06

0x51d0,	// (0x00068ed4) main_clock2_pane_t5_ParamLimits

0x51d0,	// (0x00068ed4) main_clock2_pane_t5

0x522a,	// (0x00068f2e) aid_call2_pane_cp10_ParamLimits

0x523c,	// (0x00068f40) aid_call_pane_cp10_ParamLimits

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x524e,	// (0x00068f52) popup_clock_analogue_window_cp10_g3_ParamLimits

0x524e,	// (0x00068f52) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcd48,	// (0x00070a4c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x000734de) popup_clock_analogue_window_cp10_g_ParamLimits

0x5260,	// (0x00068f64) popup_clock_analogue_window_cp10_t1_ParamLimits

0x58d3,	// (0x000695d7) cell_dialer2_keypad_pane_g2_ParamLimits

0x58d3,	// (0x000695d7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x000735c4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x000735c4) cell_dialer2_keypad_pane_g

0x58ef,	// (0x000695f3) cell_dialer2_keypad_pane_t1

0x65cd,	// (0x0006a2d1) main_cset_text2_pane_ParamLimits

0x65cd,	// (0x0006a2d1) main_cset_text2_pane

0x7211,	// (0x0006af15) area_vitu2_query_pane_g1_ParamLimits

0x721d,	// (0x0006af21) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x00073779) area_vitu2_query_pane_g_ParamLimits

0x72f6,	// (0x0006affa) area_vitu2_query_pane_t7_ParamLimits

0x72f6,	// (0x0006affa) area_vitu2_query_pane_t7

0x731a,	// (0x0006b01e) bg_button_pane_cp018_ParamLimits

0x7328,	// (0x0006b02c) bg_button_pane_cp021_ParamLimits

0x7334,	// (0x0006b038) bg_button_pane_cp022_ParamLimits

0x7334,	// (0x0006b038) bg_vkb2_func_pane_cp08_ParamLimits

0x731a,	// (0x0006b01e) bg_vkb2_func_pane_cp06_ParamLimits

0x7328,	// (0x0006b02c) bg_vkb2_func_pane_cp07_ParamLimits

0x7343,	// (0x0006b047) input_focus_pane_cp09_ParamLimits

0xb006,	// (0x0006ed0a) cam6_autofocus_pane_ParamLimits

0xb006,	// (0x0006ed0a) cam6_autofocus_pane

0x7a88,	// (0x0006b78c) cam6_image_uncrop_pane_ParamLimits

0x7a88,	// (0x0006b78c) cam6_image_uncrop_pane

0x7a97,	// (0x0006b79b) cam6_indi_pane_ParamLimits

0x7a97,	// (0x0006b79b) cam6_indi_pane

0x7aad,	// (0x0006b7b1) cam6_mode_pane_ParamLimits

0x7aad,	// (0x0006b7b1) cam6_mode_pane

0x7abf,	// (0x0006b7c3) cam6_timer_pane_ParamLimits

0x7abf,	// (0x0006b7c3) cam6_timer_pane

0x7acb,	// (0x0006b7cf) cam6_zoom_pane_ParamLimits

0x7acb,	// (0x0006b7cf) cam6_zoom_pane

0x7ad7,	// (0x0006b7db) cam6_mode_pane_g1_ParamLimits

0x7ad7,	// (0x0006b7db) cam6_mode_pane_g1

0x7ae7,	// (0x0006b7eb) cam6_mode_pane_g2_ParamLimits

0x7ae7,	// (0x0006b7eb) cam6_mode_pane_g2

0x7af7,	// (0x0006b7fb) cam6_mode_pane_g3_ParamLimits

0x7af7,	// (0x0006b7fb) cam6_mode_pane_g3

0x7b07,	// (0x0006b80b) cam6_mode_pane_g4_ParamLimits

0x7b07,	// (0x0006b80b) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x00073861) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x00073861) cam6_mode_pane_g

0x7b17,	// (0x0006b81b) bg_tb_trans_pane_cp08_ParamLimits

0x7b17,	// (0x0006b81b) bg_tb_trans_pane_cp08

0x7b25,	// (0x0006b829) cam6_battery_pane_ParamLimits

0x7b25,	// (0x0006b829) cam6_battery_pane

0x7b3b,	// (0x0006b83f) cam6_indi_pane_g1_ParamLimits

0x7b3b,	// (0x0006b83f) cam6_indi_pane_g1

0x7b4d,	// (0x0006b851) cam6_indi_pane_g2_ParamLimits

0x7b4d,	// (0x0006b851) cam6_indi_pane_g2

0x7b5f,	// (0x0006b863) cam6_indi_pane_g3_ParamLimits

0x7b5f,	// (0x0006b863) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0007386a) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0007386a) cam6_indi_pane_g

0x7b71,	// (0x0006b875) cam6_indi_pane_t1_ParamLimits

0x7b71,	// (0x0006b875) cam6_indi_pane_t1

0x7b97,	// (0x0006b89b) cam6_autofocus_pane_g1

0x7b9f,	// (0x0006b8a3) cam6_autofocus_pane_g2

0x7ba7,	// (0x0006b8ab) cam6_autofocus_pane_g3

0x7baf,	// (0x0006b8b3) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x00073871) cam6_autofocus_pane_g

0x7bb7,	// (0x0006b8bb) cam6_timer_pane_g1

0x7bbf,	// (0x0006b8c3) cam6_timer_pane_t1

0x7bcd,	// (0x0006b8d1) cam6_zoom_cont_pane

0x7bd5,	// (0x0006b8d9) cam6_zoom_pane_g1

0x7bdd,	// (0x0006b8e1) cam6_zoom_pane_g2

0x7be5,	// (0x0006b8e9) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0007387a) cam6_zoom_pane_g

0xe670,	// (0x00072374) cam6_battery_pane_g1

0xe670,	// (0x00072374) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x000733eb) cam6_battery_pane_g

0x7bed,	// (0x0006b8f1) cam6_zoom_cont_pane_g1

0x7bf6,	// (0x0006b8fa) cam6_zoom_cont_pane_g2

0x7bff,	// (0x0006b903) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x00073881) cam6_zoom_cont_pane_g

0x7c1c,	// (0x0006b920) cam6_mode_pane_cp_ParamLimits

0x7c1c,	// (0x0006b920) cam6_mode_pane_cp

0x7c2e,	// (0x0006b932) cam6_zoom_pane_cp_ParamLimits

0x7c2e,	// (0x0006b932) cam6_zoom_pane_cp

0x7c3a,	// (0x0006b93e) vid6_image_uncrop_cif_pane_ParamLimits

0x7c3a,	// (0x0006b93e) vid6_image_uncrop_cif_pane

0x7c4a,	// (0x0006b94e) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c4a,	// (0x0006b94e) vid6_image_uncrop_nhd_pane

0x7c69,	// (0x0006b96d) vid6_image_uncrop_vga_pane_ParamLimits

0x7c69,	// (0x0006b96d) vid6_image_uncrop_vga_pane

0x7c78,	// (0x0006b97c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c78,	// (0x0006b97c) vid6_image_uncrop_wvga_pane

0x7c87,	// (0x0006b98b) vid6_indi_pane_ParamLimits

0x7c87,	// (0x0006b98b) vid6_indi_pane

0x7b17,	// (0x0006b81b) bg_tb_trans_pane_cp09_ParamLimits

0x7b17,	// (0x0006b81b) bg_tb_trans_pane_cp09

0x7c9f,	// (0x0006b9a3) cam6_battery_pane_cp_ParamLimits

0x7c9f,	// (0x0006b9a3) cam6_battery_pane_cp

0x7cab,	// (0x0006b9af) vid6_indi_pane_g1_ParamLimits

0x7cab,	// (0x0006b9af) vid6_indi_pane_g1

0x7cbd,	// (0x0006b9c1) vid6_indi_pane_g2_ParamLimits

0x7cbd,	// (0x0006b9c1) vid6_indi_pane_g2

0x7ccf,	// (0x0006b9d3) vid6_indi_pane_g3_ParamLimits

0x7ccf,	// (0x0006b9d3) vid6_indi_pane_g3

0x7ce4,	// (0x0006b9e8) vid6_indi_pane_g4_ParamLimits

0x7ce4,	// (0x0006b9e8) vid6_indi_pane_g4

0x7cf9,	// (0x0006b9fd) vid6_indi_pane_g5_ParamLimits

0x7cf9,	// (0x0006b9fd) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x00073888) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x00073888) vid6_indi_pane_g

0x7d13,	// (0x0006ba17) vid6_indi_pane_t1_ParamLimits

0x7d13,	// (0x0006ba17) vid6_indi_pane_t1

0x7d29,	// (0x0006ba2d) vid6_indi_pane_t2_ParamLimits

0x7d29,	// (0x0006ba2d) vid6_indi_pane_t2

0x7d51,	// (0x0006ba55) vid6_indi_pane_t3_ParamLimits

0x7d51,	// (0x0006ba55) vid6_indi_pane_t3

0x7d79,	// (0x0006ba7d) vid6_indi_pane_t4_ParamLimits

0x7d79,	// (0x0006ba7d) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x00073893) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x00073893) vid6_indi_pane_t

0x7d9d,	// (0x0006baa1) wait_bar_pane_cp08

0x7dac,	// (0x0006bab0) main_cset_text2_pane_t1_ParamLimits

0x7dac,	// (0x0006bab0) main_cset_text2_pane_t1

0x7c07,	// (0x0006b90b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c07,	// (0x0006b90b) listscroll_gen_pane_cp06_t1

0xa4f5,	// (0x0006e1f9) main_cam6_set_pane

0xae30,	// (0x0006eb34) bg_tb_trans_pane_cp06_ParamLimits

0xae46,	// (0x0006eb4a) cam4_indicators_pane_g1_ParamLimits

0xae57,	// (0x0006eb5b) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x00073601) cam4_indicators_pane_g_ParamLimits

0xae75,	// (0x0006eb79) cam4_indicators_pane_t1_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_tb_trans_pane_cp07_ParamLimits

0xaea1,	// (0x0006eba5) vid4_indicators_pane_g1_ParamLimits

0xaeb5,	// (0x0006ebb9) vid4_indicators_pane_g2_ParamLimits

0xaec9,	// (0x0006ebcd) vid4_indicators_pane_g3_ParamLimits

0xaeda,	// (0x0006ebde) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x00073613) vid4_indicators_pane_g_ParamLimits

0xaef8,	// (0x0006ebfc) vid4_indicators_pane_t1_ParamLimits

0x74cf,	// (0x0006b1d3) vid4_progress_pane_g1_ParamLimits

0x74e1,	// (0x0006b1e5) vid4_progress_pane_g2_ParamLimits

0xc9cb,	// (0x000706cf) vid4_progress_pane_g3_ParamLimits

0xaf96,	// (0x0006ec9a) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x000737c4) vid4_progress_pane_g_ParamLimits

0xafb4,	// (0x0006ecb8) vid4_progress_pane_t1_ParamLimits

0xafc9,	// (0x0006eccd) vid4_progress_pane_t2_ParamLimits

0xafdf,	// (0x0006ece3) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x000737cf) vid4_progress_pane_t_ParamLimits

0xaff4,	// (0x0006ecf8) wait_bar_pane_cp07_ParamLimits

0x7dc9,	// (0x0006bacd) main_cam6_set_pane_g2_ParamLimits

0x7dc9,	// (0x0006bacd) main_cam6_set_pane_g2

0x7ded,	// (0x0006baf1) main_cset6_listscroll_pane_ParamLimits

0x7ded,	// (0x0006baf1) main_cset6_listscroll_pane

0x7e0d,	// (0x0006bb11) main_cset6_slider_pane_ParamLimits

0x7e0d,	// (0x0006bb11) main_cset6_slider_pane

0x7e23,	// (0x0006bb27) main_cset6_text2_pane_ParamLimits

0x7e23,	// (0x0006bb27) main_cset6_text2_pane

0x7e31,	// (0x0006bb35) main_cset6_text_pane

0x7e39,	// (0x0006bb3d) main_cset_list_pane_copy1_ParamLimits

0x7e39,	// (0x0006bb3d) main_cset_list_pane_copy1

0x7e49,	// (0x0006bb4d) scroll_pane_cp028_copy1

0x7e52,	// (0x0006bb56) cset_list_set_pane_copy1

0x7e63,	// (0x0006bb67) aid_position_infowindow_above_copy1

0x7e6b,	// (0x0006bb6f) aid_position_infowindow_below_copy1

0x7e73,	// (0x0006bb77) cset_list_set_pane_g1_copy1

0x7e7b,	// (0x0006bb7f) cset_list_set_pane_g3_copy1_ParamLimits

0x7e7b,	// (0x0006bb7f) cset_list_set_pane_g3_copy1

0x7e8a,	// (0x0006bb8e) cset_list_set_pane_t1_copy1_ParamLimits

0x7e8a,	// (0x0006bb8e) cset_list_set_pane_t1_copy1

0xe24e,	// (0x00071f52) list_highlight_pane_cp021_copy1_ParamLimits

0xe24e,	// (0x00071f52) list_highlight_pane_cp021_copy1

0x7e9f,	// (0x0006bba3) cset6_slider_pane_ParamLimits

0x7e9f,	// (0x0006bba3) cset6_slider_pane

0x7ecb,	// (0x0006bbcf) main_cset6_slider_pane_g1_ParamLimits

0x7ecb,	// (0x0006bbcf) main_cset6_slider_pane_g1

0x7ef3,	// (0x0006bbf7) main_cset6_slider_pane_g2_ParamLimits

0x7ef3,	// (0x0006bbf7) main_cset6_slider_pane_g2

0x7f1b,	// (0x0006bc1f) main_cset6_slider_pane_g3_ParamLimits

0x7f1b,	// (0x0006bc1f) main_cset6_slider_pane_g3

0x7f27,	// (0x0006bc2b) main_cset6_slider_pane_g4_ParamLimits

0x7f27,	// (0x0006bc2b) main_cset6_slider_pane_g4

0x7f33,	// (0x0006bc37) main_cset6_slider_pane_g5_ParamLimits

0x7f33,	// (0x0006bc37) main_cset6_slider_pane_g5

0x66a7,	// (0x0006a3ab) main_cset6_slider_pane_g7_ParamLimits

0x66a7,	// (0x0006a3ab) main_cset6_slider_pane_g7

0x66b3,	// (0x0006a3b7) main_cset6_slider_pane_g8_ParamLimits

0x66b3,	// (0x0006a3b7) main_cset6_slider_pane_g8

0x66bf,	// (0x0006a3c3) main_cset6_slider_pane_g9_ParamLimits

0x66bf,	// (0x0006a3c3) main_cset6_slider_pane_g9

0x66cb,	// (0x0006a3cf) main_cset6_slider_pane_g10_ParamLimits

0x66cb,	// (0x0006a3cf) main_cset6_slider_pane_g10

0x66d7,	// (0x0006a3db) main_cset6_slider_pane_g11_ParamLimits

0x66d7,	// (0x0006a3db) main_cset6_slider_pane_g11

0x66e3,	// (0x0006a3e7) main_cset6_slider_pane_g12_ParamLimits

0x66e3,	// (0x0006a3e7) main_cset6_slider_pane_g12

0x66ef,	// (0x0006a3f3) main_cset6_slider_pane_g13_ParamLimits

0x66ef,	// (0x0006a3f3) main_cset6_slider_pane_g13

0x66fb,	// (0x0006a3ff) main_cset6_slider_pane_g14_ParamLimits

0x66fb,	// (0x0006a3ff) main_cset6_slider_pane_g14

0x7f3f,	// (0x0006bc43) main_cset6_slider_pane_g15_ParamLimits

0x7f3f,	// (0x0006bc43) main_cset6_slider_pane_g15

0x671f,	// (0x0006a423) main_cset6_slider_pane_g16_ParamLimits

0x671f,	// (0x0006a423) main_cset6_slider_pane_g16

0x672b,	// (0x0006a42f) main_cset6_slider_pane_g17_ParamLimits

0x672b,	// (0x0006a42f) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0007389c) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0007389c) main_cset6_slider_pane_g

0x7f6f,	// (0x0006bc73) main_cset6_slider_pane_t1_ParamLimits

0x7f6f,	// (0x0006bc73) main_cset6_slider_pane_t1

0x7fb0,	// (0x0006bcb4) main_cset6_slider_pane_t2_ParamLimits

0x7fb0,	// (0x0006bcb4) main_cset6_slider_pane_t2

0x7fdb,	// (0x0006bcdf) main_cset6_slider_pane_t3_ParamLimits

0x7fdb,	// (0x0006bcdf) main_cset6_slider_pane_t3

0x8006,	// (0x0006bd0a) main_cset6_slider_pane_t4_ParamLimits

0x8006,	// (0x0006bd0a) main_cset6_slider_pane_t4

0x8031,	// (0x0006bd35) main_cset6_slider_pane_t5_ParamLimits

0x8031,	// (0x0006bd35) main_cset6_slider_pane_t5

0x805c,	// (0x0006bd60) main_cset6_slider_pane_t7_ParamLimits

0x805c,	// (0x0006bd60) main_cset6_slider_pane_t7

0x8092,	// (0x0006bd96) main_cset6_slider_pane_t8_ParamLimits

0x8092,	// (0x0006bd96) main_cset6_slider_pane_t8

0x80b6,	// (0x0006bdba) main_cset6_slider_pane_t9_ParamLimits

0x80b6,	// (0x0006bdba) main_cset6_slider_pane_t9

0x80da,	// (0x0006bdde) main_cset6_slider_pane_t10_ParamLimits

0x80da,	// (0x0006bdde) main_cset6_slider_pane_t10

0x80fe,	// (0x0006be02) main_cset6_slider_pane_t11_ParamLimits

0x80fe,	// (0x0006be02) main_cset6_slider_pane_t11

0x8122,	// (0x0006be26) main_cset6_slider_pane_t14_ParamLimits

0x8122,	// (0x0006be26) main_cset6_slider_pane_t14

0x815b,	// (0x0006be5f) main_cset6_slider_pane_t15_ParamLimits

0x815b,	// (0x0006be5f) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x000738c1) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x000738c1) main_cset6_slider_pane_t

0x8194,	// (0x0006be98) cset_slider_pane_g1_copy1

0x819d,	// (0x0006bea1) cset_slider_pane_g2_copy1

0x81a6,	// (0x0006beaa) cset_slider_pane_g3_copy1

0xa46f,	// (0x0006e173) bg_popup_sub_pane_cp011_copy1

0x8280,	// (0x0006bf84) main_cset_text_pane_g1_copy1

0x6ec4,	// (0x0006abc8) main_cset_text_pane_t1_copy1

0x6ed2,	// (0x0006abd6) main_cset_text_pane_t2_copy1

0x6ee0,	// (0x0006abe4) main_cset_text_pane_t3_copy1

0x6eee,	// (0x0006abf2) main_cset_text_pane_t4_copy1

0x6efc,	// (0x0006ac00) main_cset_text_pane_t5_copy1

0x8288,	// (0x0006bf8c) main_cset_text_pane_t6_copy1

0x6f18,	// (0x0006ac1c) main_cset_text_pane_t7_copy1

0x7dac,	// (0x0006bab0) main_cset_text2_pane_t1_copy1

0xa4e7,	// (0x0006e1eb) main_ncimui_pane

0x3bd3,	// (0x000678d7) popup_query_ncimui_window_ParamLimits

0x3bd3,	// (0x000678d7) popup_query_ncimui_window

0xe97d,	// (0x00072681) field_cale_ev2_pane_g4_ParamLimits

0xe97d,	// (0x00072681) field_cale_ev2_pane_g4

0x57a9,	// (0x000694ad) cell_video_dialer_keypad_pane_g2_ParamLimits

0x57a9,	// (0x000694ad) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0007359f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0007359f) cell_video_dialer_keypad_pane_g

0x57c1,	// (0x000694c5) cell_video_dialer_keypad_pane_t1

0xa46f,	// (0x0006e173) bg_popup_window_pane_cp012

0xcb97,	// (0x0007089b) heading_pane_cp06

0x83da,	// (0x0006c0de) ncim_query_content_pane

0xa46f,	// (0x0006e173) bg_popup_heading_pane_cp01

0x83e2,	// (0x0006c0e6) ncim_heading_pane_t1

0x83f0,	// (0x0006c0f4) ncim_indicator_popup_pane

0x8402,	// (0x0006c106) ncim_query_button_pane

0xb020,	// (0x0006ed24) ncim_query_content_pane_t1

0xb032,	// (0x0006ed36) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x00073905) ncim_query_content_pane_t

0xb06c,	// (0x0006ed70) ncim_query_list_pane

0xb07e,	// (0x0006ed82) ncim_query_popup_pane

0x83f0,	// (0x0006c0f4) ncim_indicator_popup_pane_ParamLimits

0x840a,	// (0x0006c10e) ncim_query_content_pane_g1_ParamLimits

0x840a,	// (0x0006c10e) ncim_query_content_pane_g1

0xb020,	// (0x0006ed24) ncim_query_content_pane_t1_ParamLimits

0xb032,	// (0x0006ed36) ncim_query_content_pane_t2_ParamLimits

0x8416,	// (0x0006c11a) ncim_query_content_pane_t3_ParamLimits

0x8416,	// (0x0006c11a) ncim_query_content_pane_t3

0x843e,	// (0x0006c142) ncim_query_content_pane_t4_ParamLimits

0x843e,	// (0x0006c142) ncim_query_content_pane_t4

0x8466,	// (0x0006c16a) ncim_query_content_pane_t5_ParamLimits

0x8466,	// (0x0006c16a) ncim_query_content_pane_t5

0xb044,	// (0x0006ed48) ncim_query_content_pane_t6_ParamLimits

0xb044,	// (0x0006ed48) ncim_query_content_pane_t6

0xfc01,	// (0x00073905) ncim_query_content_pane_t_ParamLimits

0xb06c,	// (0x0006ed70) ncim_query_list_pane_ParamLimits

0xb07e,	// (0x0006ed82) ncim_query_popup_pane_ParamLimits

0xb092,	// (0x0006ed96) wait_bar_pane_cp04

0xa46f,	// (0x0006e173) input_focus_pane_cp011

0xb09a,	// (0x0006ed9e) ncim_query_popup_pane_t1

0xb0a8,	// (0x0006edac) ncim_list_query_list_pane_ParamLimits

0xb0a8,	// (0x0006edac) ncim_list_query_list_pane

0xa46f,	// (0x0006e173) bg_button_pane_cp027

0xb0b5,	// (0x0006edb9) ncim_query_button_pane_g1

0xa46f,	// (0x0006e173) list_highlight_pane_cp012

0xb0bf,	// (0x0006edc3) ncim_list_query_list_pane_g1

0xb0c7,	// (0x0006edcb) ncim_list_query_list_pane_t1

0xae66,	// (0x0006eb6a) cam4_indicators_pane_g3_ParamLimits

0xae66,	// (0x0006eb6a) cam4_indicators_pane_g3

0xaee6,	// (0x0006ebea) vid4_indicators_pane_g5_ParamLimits

0xaee6,	// (0x0006ebea) vid4_indicators_pane_g5

0xafa5,	// (0x0006eca9) vid4_progress_pane_g5_ParamLimits

0xafa5,	// (0x0006eca9) vid4_progress_pane_g5

0x82c8,	// (0x0006bfcc) main_ncimui_pane_g1

0x832e,	// (0x0006c032) ncimui_group_query_pane_ParamLimits

0x832e,	// (0x0006c032) ncimui_group_query_pane

0x8376,	// (0x0006c07a) ncimui_list_pane_ParamLimits

0x8376,	// (0x0006c07a) ncimui_list_pane

0x839d,	// (0x0006c0a1) ncimui_text_pane_ParamLimits

0x839d,	// (0x0006c0a1) ncimui_text_pane

0x848e,	// (0x0006c192) ncimui_text_pane_t1_ParamLimits

0x848e,	// (0x0006c192) ncimui_text_pane_t1

0xb0d5,	// (0x0006edd9) ncimui_list_single_graphic_pane_ParamLimits

0xb0d5,	// (0x0006edd9) ncimui_list_single_graphic_pane

0x84ac,	// (0x0006c1b0) ncimui_query_pane_ParamLimits

0x84ac,	// (0x0006c1b0) ncimui_query_pane

0xa46f,	// (0x0006e173) list_highlight_pane_cp013

0xb0e5,	// (0x0006ede9) ncim_list_query_list_pane_t1_copy1

0xb0bf,	// (0x0006edc3) ncim_list_single_graphic_pane_g1

0xb0f3,	// (0x0006edf7) ncim_query_button_pane_cp01

0xb0ff,	// (0x0006ee03) ncim_query_entry_pane_ParamLimits

0xb0ff,	// (0x0006ee03) ncim_query_entry_pane

0xb112,	// (0x0006ee16) ncimui_query_pane_g1

0xb11e,	// (0x0006ee22) ncimui_query_pane_t1_ParamLimits

0xb11e,	// (0x0006ee22) ncimui_query_pane_t1

0xe24e,	// (0x00071f52) input_focus_pane_cp012

0xb137,	// (0x0006ee3b) ncim_query_entry_pane_t1

0xc2e9,	// (0x0006ffed) main_im_pane_ParamLimits

0xa4e7,	// (0x0006e1eb) main_mobtv_pane_ParamLimits

0xa4e7,	// (0x0006e1eb) main_mobtv_pane

0x7f57,	// (0x0006bc5b) main_cset6_slider_pane_g18_ParamLimits

0x7f57,	// (0x0006bc5b) main_cset6_slider_pane_g18

0x7f63,	// (0x0006bc67) main_cset6_slider_pane_g19_ParamLimits

0x7f63,	// (0x0006bc67) main_cset6_slider_pane_g19

0xb149,	// (0x0006ee4d) bg_main_mobtv_pane_ParamLimits

0xb149,	// (0x0006ee4d) bg_main_mobtv_pane

0x84bf,	// (0x0006c1c3) main_mobtv_info_pane

0x84c8,	// (0x0006c1cc) main_mobtv_loading_pane_ParamLimits

0x84c8,	// (0x0006c1cc) main_mobtv_loading_pane

0xb157,	// (0x0006ee5b) main_mobtv_pg_channel_list_pane

0xb161,	// (0x0006ee65) main_mobtv_pg_hdr_pane

0x84d5,	// (0x0006c1d9) main_mobtv_programe_curr_pane_ParamLimits

0x84d5,	// (0x0006c1d9) main_mobtv_programe_curr_pane

0x84e2,	// (0x0006c1e6) main_mobtv_programe_next_pane_ParamLimits

0x84e2,	// (0x0006c1e6) main_mobtv_programe_next_pane

0xb16a,	// (0x0006ee6e) popup_mobtv_noti_window

0xe670,	// (0x00072374) main_tv_pg_hdr_pane_g1

0xb172,	// (0x0006ee76) main_tv_pg_hdr_pane_g2

0xb17a,	// (0x0006ee7e) main_tv_pg_hdr_pane_g3

0xb182,	// (0x0006ee86) main_tv_pg_hdr_pane_g4

0xb18a,	// (0x0006ee8e) main_tv_pg_hdr_pane_g5

0xb194,	// (0x0006ee98) main_tv_pg_hdr_pane_g6

0xb19e,	// (0x0006eea2) main_tv_pg_hdr_pane_g7

0xb1a8,	// (0x0006eeac) main_tv_pg_hdr_pane_g8

0xb1b2,	// (0x0006eeb6) main_tv_pg_hdr_pane_g9

0xb1bc,	// (0x0006eec0) main_tv_pg_hdr_pane_g10

0xb1c6,	// (0x0006eeca) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x00073912) main_tv_pg_hdr_pane_g

0xb1d0,	// (0x0006eed4) main_tv_pg_hdr_pane_t1

0xb1de,	// (0x0006eee2) main_tv_pg_hdr_pane_t2

0xb1ec,	// (0x0006eef0) main_tv_pg_hdr_pane_t3

0xb1fc,	// (0x0006ef00) main_tv_pg_hdr_pane_t4

0xb20c,	// (0x0006ef10) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x00073929) main_tv_pg_hdr_pane_t

0xb21c,	// (0x0006ef20) single_mobtv_pg_channel_pane_ParamLimits

0xb21c,	// (0x0006ef20) single_mobtv_pg_channel_pane

0xb22e,	// (0x0006ef32) single_mobtv_pg_channel_table_pane

0xb237,	// (0x0006ef3b) single_mobtv_pg_channel_thumb_pane

0xb240,	// (0x0006ef44) single_tv_pg_channel_pane_g1

0xb249,	// (0x0006ef4d) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x00073934) single_tv_pg_channel_pane_g

0xe8dc,	// (0x000725e0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe8dc,	// (0x000725e0) bg_single_mobtv_pg_channel_thumb_pane

0xb252,	// (0x0006ef56) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb252,	// (0x0006ef56) single_mobtv_pg_channel_thumb_pane_g1

0xb260,	// (0x0006ef64) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb260,	// (0x0006ef64) single_mobtv_pg_channel_thumb_pane_g2

0xb26c,	// (0x0006ef70) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb26c,	// (0x0006ef70) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x00073939) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x00073939) single_mobtv_pg_channel_thumb_pane_g

0xb278,	// (0x0006ef7c) single_mobtv_pg_channel_thumb_pane_t1

0xb286,	// (0x0006ef8a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x00073940) single_mobtv_pg_channel_thumb_pane_t

0xe670,	// (0x00072374) bg_single_mobtv_pg_channel_table_pane_g1

0xe670,	// (0x00072374) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x000733eb) bg_single_mobtv_pg_channel_table_pane_g

0xb294,	// (0x0006ef98) single_mobtv_pg_channel_table_pane_t1

0xb2a2,	// (0x0006efa6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x00073945) single_mobtv_pg_channel_table_pane_t

0x84f7,	// (0x0006c1fb) main_mobtv_info_pane_g1_ParamLimits

0x84f7,	// (0x0006c1fb) main_mobtv_info_pane_g1

0x8515,	// (0x0006c219) main_mobtv_info_pane_t1_ParamLimits

0x8515,	// (0x0006c219) main_mobtv_info_pane_t1

0x858d,	// (0x0006c291) main_mobtv_info_pane_t2_ParamLimits

0x858d,	// (0x0006c291) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0007394f) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0007394f) main_mobtv_info_pane_t

0x861c,	// (0x0006c320) wait_bar_pane_cp05

0x862e,	// (0x0006c332) main_mobtv_loading_pane_g1_ParamLimits

0x862e,	// (0x0006c332) main_mobtv_loading_pane_g1

0x8641,	// (0x0006c345) main_mobtv_loading_pane_g2_ParamLimits

0x8641,	// (0x0006c345) main_mobtv_loading_pane_g2

0x864d,	// (0x0006c351) main_mobtv_loading_pane_g3_ParamLimits

0x864d,	// (0x0006c351) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x00073956) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x00073956) main_mobtv_loading_pane_g

0xb2b0,	// (0x0006efb4) main_mobtv_loading_pane_t1_ParamLimits

0xb2b0,	// (0x0006efb4) main_mobtv_loading_pane_t1

0xb2c8,	// (0x0006efcc) main_mobtv_loading_pane_t2_ParamLimits

0xb2c8,	// (0x0006efcc) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0007395d) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0007395d) main_mobtv_loading_pane_t

0x8660,	// (0x0006c364) wait_bar_pane_cp06_ParamLimits

0x8660,	// (0x0006c364) wait_bar_pane_cp06

0xb2ec,	// (0x0006eff0) main_mobtv_programe_curr_pane_t1

0xb2fa,	// (0x0006effe) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x00073962) main_mobtv_programe_curr_pane_t

0xb308,	// (0x0006f00c) main_mobtv_programe_next_pane_t1

0xb316,	// (0x0006f01a) main_mobtv_programe_next_pane_t2

0xb324,	// (0x0006f028) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x00073967) main_mobtv_programe_next_pane_t

0xa46f,	// (0x0006e173) bg_popup_mobtv_noti_window_pane

0xb332,	// (0x0006f036) popup_mobtv_noti_window_g1

0xb33a,	// (0x0006f03e) popup_mobtv_noti_window_t1

0xb348,	// (0x0006f04c) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0007396e) popup_mobtv_noti_window_t

0xe670,	// (0x00072374) bg_popup_mobtv_noti_window_pane_g1

0xa4f5,	// (0x0006e1f9) sc_clock_pane

0xa4f5,	// (0x0006e1f9) main_fs_bigclock_pane

0x7850,	// (0x0006b554) blid2_tripm_pane_t4_ParamLimits

0x7850,	// (0x0006b554) blid2_tripm_pane_t4

0x866f,	// (0x0006c373) sc_clock_pane_g1_ParamLimits

0x866f,	// (0x0006c373) sc_clock_pane_g1

0x8681,	// (0x0006c385) sc_clock_pane_t1_ParamLimits

0x8681,	// (0x0006c385) sc_clock_pane_t1

0x86a3,	// (0x0006c3a7) sc_clock_pane_t2_ParamLimits

0x86a3,	// (0x0006c3a7) sc_clock_pane_t2

0x86bb,	// (0x0006c3bf) sc_clock_pane_t3_ParamLimits

0x86bb,	// (0x0006c3bf) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x00073973) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x00073973) sc_clock_pane_t

0x994b,	// (0x0006d64f) main_fs_bigclock_indicator_pane_ParamLimits

0x994b,	// (0x0006d64f) main_fs_bigclock_indicator_pane

0xe8ac,	// (0x000725b0) main_fs_bigclock_pane_g1_ParamLimits

0xe8ac,	// (0x000725b0) main_fs_bigclock_pane_g1

0x9957,	// (0x0006d65b) main_fs_bigclock_pane_t1_ParamLimits

0x9957,	// (0x0006d65b) main_fs_bigclock_pane_t1

0x9969,	// (0x0006d66d) main_fs_bigclock_pane_t2_ParamLimits

0x9969,	// (0x0006d66d) main_fs_bigclock_pane_t2

0x997d,	// (0x0006d681) main_fs_bigclock_pane_t3_ParamLimits

0x997d,	// (0x0006d681) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00073b77) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00073b77) main_fs_bigclock_pane_t

0xbb38,	// (0x0006f83c) main_fs_bigclock_indicator_pane_g1

0xb014,	// (0x0006ed18) ncim_query_content_pane_g2_ParamLimits

0xb014,	// (0x0006ed18) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x00073900) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x00073900) ncim_query_content_pane_g

0x86d4,	// (0x0006c3d8) sc_clock_pane_t4_ParamLimits

0x86d4,	// (0x0006c3d8) sc_clock_pane_t4

0xa4e7,	// (0x0006e1eb) main_radioblah_pane

0xf075,	// (0x00072d79) cell_call4_button_pane_t1_copy1_ParamLimits

0xf075,	// (0x00072d79) cell_call4_button_pane_t1_copy1

0x82e0,	// (0x0006bfe4) main_ncimui_pane_t1_ParamLimits

0x82e0,	// (0x0006bfe4) main_ncimui_pane_t1

0x82fa,	// (0x0006bffe) main_ncimui_pane_t2_ParamLimits

0x82fa,	// (0x0006bffe) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x000738f9) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x000738f9) main_ncimui_pane_t

0xb482,	// (0x0006f186) main_radioblah_anim_pane_ParamLimits

0xb482,	// (0x0006f186) main_radioblah_anim_pane

0xb493,	// (0x0006f197) main_radioblah_info_pane_ParamLimits

0xb493,	// (0x0006f197) main_radioblah_info_pane

0xb4a7,	// (0x0006f1ab) main_radioblah_pane_t1_ParamLimits

0xb4a7,	// (0x0006f1ab) main_radioblah_pane_t1

0xb4c3,	// (0x0006f1c7) main_radioblah_pane_t2_ParamLimits

0xb4c3,	// (0x0006f1c7) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x00073994) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x00073994) main_radioblah_pane_t

0x878a,	// (0x0006c48e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x878a,	// (0x0006c48e) main_radioblah_rocker_ctrl_pane

0xb50b,	// (0x0006f20f) main_radioblah_info_pane_t1_ParamLimits

0xb50b,	// (0x0006f20f) main_radioblah_info_pane_t1

0x87e2,	// (0x0006c4e6) main_radioblah_info_pane_t2_ParamLimits

0x87e2,	// (0x0006c4e6) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0007399d) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0007399d) main_radioblah_info_pane_t

0xe670,	// (0x00072374) main_radioblah_rocker_ctrl_pane_g1

0x8892,	// (0x0006c596) main_radioblah_rocker_ctrl_pane_g2

0x889a,	// (0x0006c59e) main_radioblah_rocker_ctrl_pane_g3

0x88a2,	// (0x0006c5a6) main_radioblah_rocker_ctrl_pane_g4

0x88aa,	// (0x0006c5ae) main_radioblah_rocker_ctrl_pane_g5

0x88b2,	// (0x0006c5b6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x000739a6) main_radioblah_rocker_ctrl_pane_g

0x7dac,	// (0x0006bab0) main_cset_text2_pane_t1_copy1_ParamLimits

0xae16,	// (0x0006eb1a) cam4_image_uncrop_qvga_pane

0xae8f,	// (0x0006eb93) vid4_image_uncrop_qcif_pane

0xb006,	// (0x0006ed0a) cam6_image_uncrop_qvga_pane_ParamLimits

0xb006,	// (0x0006ed0a) cam6_image_uncrop_qvga_pane

0x7c59,	// (0x0006b95d) vid6_image_uncrop_qcif_pane_ParamLimits

0x7c59,	// (0x0006b95d) vid6_image_uncrop_qcif_pane

0xa46f,	// (0x0006e173) bg_popup_preview_window_pane_cp03

0x8296,	// (0x0006bf9a) list_cset_text2_pane

0x829e,	// (0x0006bfa2) main_cset6_text2_pane_g1

0x82a6,	// (0x0006bfaa) main_cset6_text2_pane_t1

0x88ba,	// (0x0006c5be) list_cset_text2_pane_t1_ParamLimits

0x88ba,	// (0x0006c5be) list_cset_text2_pane_t1

0xa4e7,	// (0x0006e1eb) main_radioblah_pane_ParamLimits

0x8608,	// (0x0006c30c) main_mobtv_info_pane_t3_ParamLimits

0x8608,	// (0x0006c30c) main_mobtv_info_pane_t3

0x8778,	// (0x0006c47c) main_radioblah_pane_g1

0x87b2,	// (0x0006c4b6) main_radioblah_info_pane_g1

0x8837,	// (0x0006c53b) main_radioblah_info_pane_t3_ParamLimits

0x8837,	// (0x0006c53b) main_radioblah_info_pane_t3

0x253e,	// (0x00066242) highlight_cell_cale_month_pane_ParamLimits

0x253e,	// (0x00066242) highlight_cell_cale_month_pane

0xa4f5,	// (0x0006e1f9) main_phob_fisheye_pane

0xea20,	// (0x00072724) scroll_pane_cp0031_ParamLimits

0xea20,	// (0x00072724) scroll_pane_cp0031

0x7d9d,	// (0x0006baa1) wait_bar_pane_cp08_ParamLimits

0x7e52,	// (0x0006bb56) cset_list_set_pane_copy1_ParamLimits

0xb545,	// (0x0006f249) highlight_cell_cale_month_pane_g1

0x88d3,	// (0x0006c5d7) highlight_cell_cale_month_pane_t1

0x7418,	// (0x0006b11c) list_gen_pane_cp01

0x65f3,	// (0x0006a2f7) scroll_pane_01

0x88e1,	// (0x0006c5e5) list_single_double_fisheye_pane

0x88ea,	// (0x0006c5ee) list_double_fisheye_pane_g1_ParamLimits

0x88ea,	// (0x0006c5ee) list_double_fisheye_pane_g1

0x88f6,	// (0x0006c5fa) list_double_fisheye_pane_g2_ParamLimits

0x88f6,	// (0x0006c5fa) list_double_fisheye_pane_g2

0x890a,	// (0x0006c60e) list_double_fisheye_pane_g3_ParamLimits

0x890a,	// (0x0006c60e) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x000739b3) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x000739b3) list_double_fisheye_pane_g

0x8933,	// (0x0006c637) list_double_fisheye_pane_t1_ParamLimits

0x8933,	// (0x0006c637) list_double_fisheye_pane_t1

0x894e,	// (0x0006c652) list_double_fisheye_pane_t2_ParamLimits

0x894e,	// (0x0006c652) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x000739be) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x000739be) list_double_fisheye_pane_t

0xa4f5,	// (0x0006e1f9) main_call5_pane

0x86ff,	// (0x0006c403) sc_swipe_pane_ParamLimits

0x86ff,	// (0x0006c403) sc_swipe_pane

0x8983,	// (0x0006c687) call5_image_pane_ParamLimits

0x8983,	// (0x0006c687) call5_image_pane

0x89a0,	// (0x0006c6a4) call5_swipe_1_pane_ParamLimits

0x89a0,	// (0x0006c6a4) call5_swipe_1_pane

0x89b3,	// (0x0006c6b7) call5_swipe_2_pane_ParamLimits

0x89b3,	// (0x0006c6b7) call5_swipe_2_pane

0x89de,	// (0x0006c6e2) popup_call5_audio_first_window_ParamLimits

0x89de,	// (0x0006c6e2) popup_call5_audio_first_window

0xe8dc,	// (0x000725e0) call5_swipe_1_pane_g1_ParamLimits

0xe8dc,	// (0x000725e0) call5_swipe_1_pane_g1

0xb54d,	// (0x0006f251) call5_swipe_1_pane_g2_ParamLimits

0xb54d,	// (0x0006f251) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x000739c3) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x000739c3) call5_swipe_1_pane_g

0xb559,	// (0x0006f25d) call5_swipe_1_pane_t1_ParamLimits

0xb559,	// (0x0006f25d) call5_swipe_1_pane_t1

0xe8dc,	// (0x000725e0) call5_swipe_2_pane_g1_ParamLimits

0xe8dc,	// (0x000725e0) call5_swipe_2_pane_g1

0xb56e,	// (0x0006f272) call5_swipe_2_pane_g2_ParamLimits

0xb56e,	// (0x0006f272) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x000739c8) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x000739c8) call5_swipe_2_pane_g

0xb57a,	// (0x0006f27e) call5_swipe_2_pane_t1_ParamLimits

0xb57a,	// (0x0006f27e) call5_swipe_2_pane_t1

0xb58f,	// (0x0006f293) sc_swipe_pane_g1_ParamLimits

0xb58f,	// (0x0006f293) sc_swipe_pane_g1

0xb59c,	// (0x0006f2a0) sc_swipe_pane_g2_ParamLimits

0xb59c,	// (0x0006f2a0) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x000739cd) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x000739cd) sc_swipe_pane_g

0xb5a8,	// (0x0006f2ac) sc_swipe_pane_t1_ParamLimits

0xb5a8,	// (0x0006f2ac) sc_swipe_pane_t1

0xa4f5,	// (0x0006e1f9) main_cmail_launcher_pane

0x89ef,	// (0x0006c6f3) aid_size_cell_cmail_l_ParamLimits

0x89ef,	// (0x0006c6f3) aid_size_cell_cmail_l

0x8a09,	// (0x0006c70d) grid_cmail_l_pane_ParamLimits

0x8a09,	// (0x0006c70d) grid_cmail_l_pane

0x8a24,	// (0x0006c728) cell_cmail_l_pane_ParamLimits

0x8a24,	// (0x0006c728) cell_cmail_l_pane

0x8a4a,	// (0x0006c74e) cell_cmail_l_pane_g1_ParamLimits

0x8a4a,	// (0x0006c74e) cell_cmail_l_pane_g1

0x8a56,	// (0x0006c75a) cell_cmail_l_pane_t1_ParamLimits

0x8a56,	// (0x0006c75a) cell_cmail_l_pane_t1

0xb5bd,	// (0x0006f2c1) cell_cmail_l_pane_t2_ParamLimits

0xb5bd,	// (0x0006f2c1) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x000739d2) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x000739d2) cell_cmail_l_pane_t

0xe24e,	// (0x00071f52) grid_highlight_pane_cp018_ParamLimits

0xe24e,	// (0x00071f52) grid_highlight_pane_cp018

0x04e1,	// (0x000641e5) main2_pane_ParamLimits

0x04e1,	// (0x000641e5) main2_pane

0xc382,	// (0x00070086) popup_sp_fs_action_menu_bg_pane_g1

0xc38a,	// (0x0007008e) popup_sp_fs_action_menu_bg_pane_g2

0xc392,	// (0x00070096) popup_sp_fs_action_menu_bg_pane_g3

0xc39a,	// (0x0007009e) popup_sp_fs_action_menu_bg_pane_g4

0xc3a2,	// (0x000700a6) popup_sp_fs_action_menu_bg_pane_g5

0xc3aa,	// (0x000700ae) popup_sp_fs_action_menu_bg_pane_g6

0xc3b2,	// (0x000700b6) popup_sp_fs_action_menu_bg_pane_g7

0xc3ba,	// (0x000700be) popup_sp_fs_action_menu_bg_pane_g8

0xc3c2,	// (0x000700c6) popup_sp_fs_action_menu_bg_pane_g9

0xc3ca,	// (0x000700ce) popup_sp_fs_action_menu_bg_pane_g10

0xc3ca,	// (0x000700ce) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x00072e97) popup_sp_fs_action_menu_bg_pane_g

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g3_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g3_g1

0x14d3,	// (0x000651d7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_t3_g3_g2

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x00072f47) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x00072f47) list_medium_line_x2_t3_g3_g

0x14eb,	// (0x000651ef) list_medium_line_x2_t3_g3_t1_ParamLimits

0x14eb,	// (0x000651ef) list_medium_line_x2_t3_g3_t1

0x1500,	// (0x00065204) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1500,	// (0x00065204) list_medium_line_x2_t3_g3_t2

0x1514,	// (0x00065218) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x00072f4e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x00072f4e) list_medium_line_x2_t3_g3_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g2_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g2_g1

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x00072f55) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x00072f55) list_medium_line_x2_t3_g2_g

0x1529,	// (0x0006522d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1529,	// (0x0006522d) list_medium_line_x2_t3_g2_t1

0x153f,	// (0x00065243) list_medium_line_x2_t3_g2_t2_ParamLimits

0x153f,	// (0x00065243) list_medium_line_x2_t3_g2_t2

0x1514,	// (0x00065218) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x00072f5a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x00072f5a) list_medium_line_x2_t3_g2_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t4_g4_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t4_g4_g1

0x1551,	// (0x00065255) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1551,	// (0x00065255) list_medium_line_x2_t4_g4_g2

0x14d3,	// (0x000651d7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_t4_g4_g3

0x155d,	// (0x00065261) list_medium_line_x2_t4_g4_g4_ParamLimits

0x155d,	// (0x00065261) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x00072f61) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x00072f61) list_medium_line_x2_t4_g4_g

0x1569,	// (0x0006526d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1569,	// (0x0006526d) list_medium_line_x2_t4_g4_t1

0x1583,	// (0x00065287) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1583,	// (0x00065287) list_medium_line_x2_t4_g4_t2

0x1599,	// (0x0006529d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1599,	// (0x0006529d) list_medium_line_x2_t4_g4_t3

0x15ae,	// (0x000652b2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x15ae,	// (0x000652b2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x00072f6a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x00072f6a) list_medium_line_x2_t4_g4_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g4_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g4_g1

0x1551,	// (0x00065255) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1551,	// (0x00065255) list_medium_line_x2_t2_g4_g2

0x14d3,	// (0x000651d7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_t2_g4_g3

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x00072fd1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x00072fd1) list_medium_line_x2_t2_g4_g

0x2564,	// (0x00066268) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2564,	// (0x00066268) list_medium_line_x2_t2_g4_t1

0x1514,	// (0x00065218) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x00072fda) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x00072fda) list_medium_line_x2_t2_g4_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g3_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g3_g1

0x14d3,	// (0x000651d7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_t2_g3_g2

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x00072f47) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x00072f47) list_medium_line_x2_t2_g3_g

0x2579,	// (0x0006627d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2579,	// (0x0006627d) list_medium_line_x2_t2_g3_t1

0x1514,	// (0x00065218) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x00072fdf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x00072fdf) list_medium_line_x2_t2_g3_t

0x26ac,	// (0x000663b0) main_sp_fs_list_pane_ParamLimits

0x26ac,	// (0x000663b0) main_sp_fs_list_pane

0xa9ad,	// (0x0006e6b1) sp_fs_scroll_pane_ParamLimits

0xa9ad,	// (0x0006e6b1) sp_fs_scroll_pane

0x26b8,	// (0x000663bc) list_medium_line_x2_t3_t1

0x26c8,	// (0x000663cc) list_medium_line_x2_t3_t2

0x26d6,	// (0x000663da) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0007302a) list_medium_line_x2_t3_t

0x26e4,	// (0x000663e8) list_medium_line_x3_t4_t1

0x26f4,	// (0x000663f8) list_medium_line_x3_t4_t2

0x2702,	// (0x00066406) list_medium_line_x3_t4_t3

0x26d6,	// (0x000663da) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x00073031) list_medium_line_x3_t4_t

0x2710,	// (0x00066414) list_medium_line_x4_t5_t1

0x2720,	// (0x00066424) list_medium_line_x4_t5_t2

0x2702,	// (0x00066406) list_medium_line_x4_t5_t3

0x272e,	// (0x00066432) list_medium_line_x4_t5_t4

0x26d6,	// (0x000663da) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0007303a) list_medium_line_x4_t5_t

0x14c7,	// (0x000651cb) list_medium_line_t4_g4_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_t4_g4_g1

0x155d,	// (0x00065261) list_medium_line_t4_g4_g2_ParamLimits

0x155d,	// (0x00065261) list_medium_line_t4_g4_g2

0x273c,	// (0x00066440) list_medium_line_t4_g4_g3_ParamLimits

0x273c,	// (0x00066440) list_medium_line_t4_g4_g3

0x14df,	// (0x000651e3) list_medium_line_t4_g4_g4_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x00073045) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x00073045) list_medium_line_t4_g4_g

0x2748,	// (0x0006644c) list_medium_line_t4_g4_t1_ParamLimits

0x2748,	// (0x0006644c) list_medium_line_t4_g4_t1

0x275d,	// (0x00066461) list_medium_line_t4_g4_t2_ParamLimits

0x275d,	// (0x00066461) list_medium_line_t4_g4_t2

0x2772,	// (0x00066476) list_medium_line_t4_g4_t3_ParamLimits

0x2772,	// (0x00066476) list_medium_line_t4_g4_t3

0x1514,	// (0x00065218) list_medium_line_t4_g4_t4_ParamLimits

0x1514,	// (0x00065218) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0007304e) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0007304e) list_medium_line_t4_g4_t

0x283a,	// (0x0006653e) chi_dic_find_pane_g1

0x399d,	// (0x000676a1) main_tport_pane

0x6ad2,	// (0x0006a7d6) list_medium_line_plain_t1

0x6b8c,	// (0x0006a890) list_medium_line_t2_g2_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t2_g2_g1

0x6b98,	// (0x0006a89c) list_medium_line_t2_g2_g2_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0007370a) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0007370a) list_medium_line_t2_g2_g

0x6ba4,	// (0x0006a8a8) list_medium_line_t2_g2_t1_ParamLimits

0x6ba4,	// (0x0006a8a8) list_medium_line_t2_g2_t1

0x6bbe,	// (0x0006a8c2) list_medium_line_t2_g2_t2_ParamLimits

0x6bbe,	// (0x0006a8c2) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0007370f) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0007370f) list_medium_line_t2_g2_t

0x74f3,	// (0x0006b1f7) aid_sp_fs_list_icon_a_sm

0x74fb,	// (0x0006b1ff) aid_sp_fs_list_icon_d

0x7503,	// (0x0006b207) aid_sp_fs_text_primary

0x750c,	// (0x0006b210) aid_sp_fs_text_secondary

0x7515,	// (0x0006b219) list_medium_line

0x7515,	// (0x0006b219) list_medium_line_g2

0x7515,	// (0x0006b219) list_medium_line_g3

0x7515,	// (0x0006b219) list_medium_line_plain

0x7515,	// (0x0006b219) list_medium_line_plain_t2

0x7515,	// (0x0006b219) list_medium_line_plain_t3

0x7515,	// (0x0006b219) list_medium_line_right_icon

0x7515,	// (0x0006b219) list_medium_line_right_iconx2

0x7515,	// (0x0006b219) list_medium_line_t2

0x7515,	// (0x0006b219) list_medium_line_t2_g2

0x7515,	// (0x0006b219) list_medium_line_t2_g3

0x7515,	// (0x0006b219) list_medium_line_t2_right_icon

0x7515,	// (0x0006b219) list_medium_line_t2_right_iconx2

0x7515,	// (0x0006b219) list_medium_line_t3

0x7515,	// (0x0006b219) list_medium_line_t3_g2

0x7515,	// (0x0006b219) list_medium_line_t3_g3

0x7515,	// (0x0006b219) list_medium_line_t3_right_iconx2

0x751e,	// (0x0006b222) list_medium_line_t4_g4

0x7527,	// (0x0006b22b) list_medium_line_x2

0x7527,	// (0x0006b22b) list_medium_line_x2_t2_g2

0x7527,	// (0x0006b22b) list_medium_line_x2_t2_g3

0x7527,	// (0x0006b22b) list_medium_line_x2_t2_g4

0x7527,	// (0x0006b22b) list_medium_line_x2_t3

0x7527,	// (0x0006b22b) list_medium_line_x2_t3_g2

0x7527,	// (0x0006b22b) list_medium_line_x2_t3_g3

0x7527,	// (0x0006b22b) list_medium_line_x2_t3_g4

0x7527,	// (0x0006b22b) list_medium_line_x2_t4_g2

0x7527,	// (0x0006b22b) list_medium_line_x2_t4_g4

0x7530,	// (0x0006b234) list_medium_line_x3

0x7530,	// (0x0006b234) list_medium_line_x3_t4

0x7530,	// (0x0006b234) list_medium_line_x3_t4_g4

0x751e,	// (0x0006b222) list_medium_line_x4_t4

0x751e,	// (0x0006b222) list_medium_line_x4_t4_g7

0x751e,	// (0x0006b222) list_medium_line_x4_t5

0x7539,	// (0x0006b23d) list_single_fs_dyc_pane_ParamLimits

0x7539,	// (0x0006b23d) list_single_fs_dyc_pane

0x14c7,	// (0x000651cb) list_medium_line_x4_t4_g7_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x4_t4_g7_g1

0x81af,	// (0x0006beb3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x81af,	// (0x0006beb3) list_medium_line_x4_t4_g7_g2

0x81bb,	// (0x0006bebf) list_medium_line_x4_t4_g7_g3_ParamLimits

0x81bb,	// (0x0006bebf) list_medium_line_x4_t4_g7_g3

0x81ca,	// (0x0006bece) list_medium_line_x4_t4_g7_g4_ParamLimits

0x81ca,	// (0x0006bece) list_medium_line_x4_t4_g7_g4

0x81d6,	// (0x0006beda) list_medium_line_x4_t4_g7_g5_ParamLimits

0x81d6,	// (0x0006beda) list_medium_line_x4_t4_g7_g5

0x81e5,	// (0x0006bee9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x81e5,	// (0x0006bee9) list_medium_line_x4_t4_g7_g6

0x81f4,	// (0x0006bef8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x81f4,	// (0x0006bef8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x000738da) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x000738da) list_medium_line_x4_t4_g7_g

0x8200,	// (0x0006bf04) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8200,	// (0x0006bf04) list_medium_line_x4_t4_g7_t1

0x8215,	// (0x0006bf19) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8215,	// (0x0006bf19) list_medium_line_x4_t4_g7_t2

0x822a,	// (0x0006bf2e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x822a,	// (0x0006bf2e) list_medium_line_x4_t4_g7_t3

0x823f,	// (0x0006bf43) list_medium_line_x4_t4_g7_t4_ParamLimits

0x823f,	// (0x0006bf43) list_medium_line_x4_t4_g7_t4

0x8251,	// (0x0006bf55) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8251,	// (0x0006bf55) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x000738e9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x000738e9) list_medium_line_x4_t4_g7_t

0x8263,	// (0x0006bf67) list_single_dyc_row_pane_ParamLimits

0x8263,	// (0x0006bf67) list_single_dyc_row_pane

0x8970,	// (0x0006c674) call5_gesture_pane_ParamLimits

0x8970,	// (0x0006c674) call5_gesture_pane

0x89c6,	// (0x0006c6ca) call5_windows_pane_ParamLimits

0x89c6,	// (0x0006c6ca) call5_windows_pane

0x8a6c,	// (0x0006c770) call5_swipe_1_pane_cp_ParamLimits

0x8a6c,	// (0x0006c770) call5_swipe_1_pane_cp

0x8a78,	// (0x0006c77c) call5_swipe_2_pane_cp_ParamLimits

0x8a78,	// (0x0006c77c) call5_swipe_2_pane_cp

0xce13,	// (0x00070b17) call5_image_pane_cp

0x8a84,	// (0x0006c788) popup_call5_audio_first_window_cp_ParamLimits

0x8a84,	// (0x0006c788) popup_call5_audio_first_window_cp

0xb58f,	// (0x0006f293) call5_swipe_1_pane_g1_cp_ParamLimits

0xb58f,	// (0x0006f293) call5_swipe_1_pane_g1_cp

0xb5cf,	// (0x0006f2d3) call5_swipe_1_pane_g2_cp

0xb5a8,	// (0x0006f2ac) call5_swipe_1_pane_t1_cp_ParamLimits

0xb5a8,	// (0x0006f2ac) call5_swipe_1_pane_t1_cp

0xb58f,	// (0x0006f293) call5_swipe_2_pane_g1_cp_ParamLimits

0xb58f,	// (0x0006f293) call5_swipe_2_pane_g1_cp

0xb5d7,	// (0x0006f2db) call5_swipe_2_pane_g2_cp

0xb5df,	// (0x0006f2e3) call5_swipe_2_pane_t1_cp_ParamLimits

0xb5df,	// (0x0006f2e3) call5_swipe_2_pane_t1_cp

0xe24e,	// (0x00071f52) main_sp_fs_email_pane

0xb5f4,	// (0x0006f2f8) main_sp_fs_listscroll_pane_te

0x8a92,	// (0x0006c796) popup_sp_fs_action_menu_pane_ParamLimits

0x8a92,	// (0x0006c796) popup_sp_fs_action_menu_pane

0xe670,	// (0x00072374) bg_sp_fs_ctrlbar_pane_g1

0xb5fd,	// (0x0006f301) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb606,	// (0x0006f30a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb60f,	// (0x0006f313) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe670,	// (0x00072374) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x000739d7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe455,	// (0x00072159) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe455,	// (0x00072159) bg_sp_fs_ctrlbar_ddmenu_pane

0xb618,	// (0x0006f31c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb618,	// (0x0006f31c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb624,	// (0x0006f328) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb624,	// (0x0006f328) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x000739e0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x000739e0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb630,	// (0x0006f334) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb630,	// (0x0006f334) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8ad6,	// (0x0006c7da) list_medium_line_t2_right_icon_g1

0x8ade,	// (0x0006c7e2) list_medium_line_t2_right_icon_t1

0x8aee,	// (0x0006c7f2) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x000739e5) list_medium_line_t2_right_icon_t

0xe268,	// (0x00071f6c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe268,	// (0x00071f6c) bg_sp_fs_ctrlbar_pane

0x8b48,	// (0x0006c84c) main_sp_fs_ctrlbar_button_pane_cp01

0x8b52,	// (0x0006c856) main_sp_fs_ctrlbar_ddmenu_pane

0xb682,	// (0x0006f386) main_sp_fs_ctrlbar_pane_g1

0xb68e,	// (0x0006f392) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x000739ea) main_sp_fs_ctrlbar_pane_g

0xb69a,	// (0x0006f39e) main_sp_fs_ctrlbar_pane_t1

0x8b5c,	// (0x0006c860) main_sp_fs_ctrlbar_pane

0x8b80,	// (0x0006c884) main_sp_fs_listscroll_pane_te_cp01

0x8ba0,	// (0x0006c8a4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8ba0,	// (0x0006c8a4) popup_sp_fs_action_menu_pane_cp01

0xe24e,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe24e,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp01

0x8bd0,	// (0x0006c8d4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8bd0,	// (0x0006c8d4) sp_fs_action_menu_list_gene_pane_g1

0xb6ca,	// (0x0006f3ce) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb6ca,	// (0x0006f3ce) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x000739f4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x000739f4) sp_fs_action_menu_list_gene_pane_g

0x8bdf,	// (0x0006c8e3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8bdf,	// (0x0006c8e3) sp_fs_action_menu_list_gene_pane_t1

0x8bf7,	// (0x0006c8fb) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8bf7,	// (0x0006c8fb) sp_fs_action_menu_list_gene_pane

0xb6d7,	// (0x0006f3db) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb6d7,	// (0x0006f3db) popup_sp_fs_action_menu_bg_pane

0x8c16,	// (0x0006c91a) sp_fs_action_menu_list_pane_ParamLimits

0x8c16,	// (0x0006c91a) sp_fs_action_menu_list_pane

0x8c36,	// (0x0006c93a) sp_fs_scroll_pane_cp01_ParamLimits

0x8c36,	// (0x0006c93a) sp_fs_scroll_pane_cp01

0x8c5c,	// (0x0006c960) list_medium_line_plain_t2_t1

0x8c6c,	// (0x0006c970) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x000739f9) list_medium_line_plain_t2_t

0x8c7c,	// (0x0006c980) list_medium_line_plain_t3_t1

0x8c8c,	// (0x0006c990) list_medium_line_plain_t3_t2

0x8c9a,	// (0x0006c99e) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x000739fe) list_medium_line_plain_t3_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g2_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t2_g2_g1

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x00072f55) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x00072f55) list_medium_line_x2_t2_g2_g

0x2748,	// (0x0006644c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2748,	// (0x0006644c) list_medium_line_x2_t2_g2_t1

0x1514,	// (0x00065218) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x00073a05) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x00073a05) list_medium_line_x2_t2_g2_t

0x14c7,	// (0x000651cb) list_medium_line_x2_t4_g2_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t4_g2_g1

0x8ca8,	// (0x0006c9ac) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8ca8,	// (0x0006c9ac) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x00073a0a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x00073a0a) list_medium_line_x2_t4_g2_g

0x8cba,	// (0x0006c9be) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8cba,	// (0x0006c9be) list_medium_line_x2_t4_g2_t1

0x8cd1,	// (0x0006c9d5) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8cd1,	// (0x0006c9d5) list_medium_line_x2_t4_g2_t2

0x8ce6,	// (0x0006c9ea) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8ce6,	// (0x0006c9ea) list_medium_line_x2_t4_g2_t3

0x1514,	// (0x00065218) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x00073a0f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x00073a0f) list_medium_line_x2_t4_g2_t

0x8cf8,	// (0x0006c9fc) list_medium_line_t3_right_iconx2_g1

0x8ad6,	// (0x0006c7da) list_medium_line_t3_right_iconx2_g2

0x8d00,	// (0x0006ca04) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x00073a18) list_medium_line_t3_right_iconx2_g

0x8d0a,	// (0x0006ca0e) list_medium_line_t3_right_iconx2_t1

0x8d1a,	// (0x0006ca1e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x00073a1f) list_medium_line_t3_right_iconx2_t

0x14c7,	// (0x000651cb) list_medium_line_x3_t4_g4_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x3_t4_g4_g1

0x14d3,	// (0x000651d7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x3_t4_g4_g2

0x155d,	// (0x00065261) list_medium_line_x3_t4_g4_g3_ParamLimits

0x155d,	// (0x00065261) list_medium_line_x3_t4_g4_g3

0x8d28,	// (0x0006ca2c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8d28,	// (0x0006ca2c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x00073a24) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x00073a24) list_medium_line_x3_t4_g4_g

0x8d34,	// (0x0006ca38) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8d34,	// (0x0006ca38) list_medium_line_x3_t4_g4_t1

0x8d4b,	// (0x0006ca4f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8d4b,	// (0x0006ca4f) list_medium_line_x3_t4_g4_t2

0x275d,	// (0x00066461) list_medium_line_x3_t4_g4_t3_ParamLimits

0x275d,	// (0x00066461) list_medium_line_x3_t4_g4_t3

0x8d66,	// (0x0006ca6a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8d66,	// (0x0006ca6a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x00073a2d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x00073a2d) list_medium_line_x3_t4_g4_t

0x8d83,	// (0x0006ca87) list_single_dyc_row_text_pane_t1_ParamLimits

0x8d83,	// (0x0006ca87) list_single_dyc_row_text_pane_t1

0x8dcc,	// (0x0006cad0) list_single_dyc_row_text_pane_t2_ParamLimits

0x8dcc,	// (0x0006cad0) list_single_dyc_row_text_pane_t2

0x8e26,	// (0x0006cb2a) list_single_dyc_row_text_pane_t3_ParamLimits

0x8e26,	// (0x0006cb2a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x00073a36) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x00073a36) list_single_dyc_row_text_pane_t

0x8e38,	// (0x0006cb3c) list_single_dyc_row_pane_g1_ParamLimits

0x8e38,	// (0x0006cb3c) list_single_dyc_row_pane_g1

0x8e44,	// (0x0006cb48) list_single_dyc_row_pane_g2_ParamLimits

0x8e44,	// (0x0006cb48) list_single_dyc_row_pane_g2

0x8e50,	// (0x0006cb54) list_single_dyc_row_pane_g3_ParamLimits

0x8e50,	// (0x0006cb54) list_single_dyc_row_pane_g3

0x8e5c,	// (0x0006cb60) list_single_dyc_row_pane_g4_ParamLimits

0x8e5c,	// (0x0006cb60) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00073a3d) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00073a3d) list_single_dyc_row_pane_g

0x8e68,	// (0x0006cb6c) list_single_dyc_row_text_pane_ParamLimits

0x8e68,	// (0x0006cb6c) list_single_dyc_row_text_pane

0xa46f,	// (0x0006e173) bg_sp_fs_scroll_pane

0xb6e5,	// (0x0006f3e9) thumb_sp_fs_scroll_pane

0x6b8c,	// (0x0006a890) list_medium_line_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_g1

0x8e87,	// (0x0006cb8b) list_medium_line_t1_ParamLimits

0x8e87,	// (0x0006cb8b) list_medium_line_t1

0x14c7,	// (0x000651cb) list_medium_line_x2_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_g1

0x14d3,	// (0x000651d7) list_medium_line_x2_g2_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x00073a46) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x00073a46) list_medium_line_x2_g

0x8e9c,	// (0x0006cba0) list_medium_line_x2_t1_ParamLimits

0x8e9c,	// (0x0006cba0) list_medium_line_x2_t1

0x14c7,	// (0x000651cb) list_medium_line_x3_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x3_g1

0x14d3,	// (0x000651d7) list_medium_line_x3_g2_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x00073a46) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x00073a46) list_medium_line_x3_g

0x8e9c,	// (0x0006cba0) list_medium_line_x3_t1_ParamLimits

0x8e9c,	// (0x0006cba0) list_medium_line_x3_t1

0xb6ee,	// (0x0006f3f2) thumb_sp_fs_scroll_pane_g1

0xb6f7,	// (0x0006f3fb) thumb_sp_fs_scroll_pane_g2

0xb700,	// (0x0006f404) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00073a4b) thumb_sp_fs_scroll_pane_g

0xb6ee,	// (0x0006f3f2) bg_sp_fs_scroll_pane_g1

0xb6f7,	// (0x0006f3fb) bg_sp_fs_scroll_pane_g2

0xb700,	// (0x0006f404) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x00073a4b) bg_sp_fs_scroll_pane_g

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g4_g1_ParamLimits

0x14c7,	// (0x000651cb) list_medium_line_x2_t3_g4_g1

0x1551,	// (0x00065255) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1551,	// (0x00065255) list_medium_line_x2_t3_g4_g2

0x14d3,	// (0x000651d7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x14d3,	// (0x000651d7) list_medium_line_x2_t3_g4_g3

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x14df,	// (0x000651e3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x00072fd1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x00072fd1) list_medium_line_x2_t3_g4_g

0x8eb2,	// (0x0006cbb6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8eb2,	// (0x0006cbb6) list_medium_line_x2_t3_g4_t1

0x8ecc,	// (0x0006cbd0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8ecc,	// (0x0006cbd0) list_medium_line_x2_t3_g4_t2

0x1514,	// (0x00065218) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1514,	// (0x00065218) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x00073a52) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x00073a52) list_medium_line_x2_t3_g4_t

0x6b8c,	// (0x0006a890) list_medium_line_g2_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_g2_g1

0x6b98,	// (0x0006a89c) list_medium_line_g2_g2_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0007370a) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0007370a) list_medium_line_g2_g

0x8ee6,	// (0x0006cbea) list_medium_line_g2_t1_ParamLimits

0x8ee6,	// (0x0006cbea) list_medium_line_g2_t1

0x6b8c,	// (0x0006a890) list_medium_line_t3_g2_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t3_g2_g1

0x6b98,	// (0x0006a89c) list_medium_line_t3_g2_g2_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0007370a) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0007370a) list_medium_line_t3_g2_g

0x8efb,	// (0x0006cbff) list_medium_line_t3_g2_t1_ParamLimits

0x8efb,	// (0x0006cbff) list_medium_line_t3_g2_t1

0x8f15,	// (0x0006cc19) list_medium_line_t3_g2_t2_ParamLimits

0x8f15,	// (0x0006cc19) list_medium_line_t3_g2_t2

0x8f2a,	// (0x0006cc2e) list_medium_line_t3_g2_t3_ParamLimits

0x8f2a,	// (0x0006cc2e) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00073a59) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00073a59) list_medium_line_t3_g2_t

0x8ad6,	// (0x0006c7da) list_medium_line_right_icon_g1

0x8f44,	// (0x0006cc48) list_medium_line_right_icon_t1

0x6b8c,	// (0x0006a890) list_medium_line_t2_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t2_g1

0x8f52,	// (0x0006cc56) list_medium_line_t2_t1_ParamLimits

0x8f52,	// (0x0006cc56) list_medium_line_t2_t1

0x8f6c,	// (0x0006cc70) list_medium_line_t2_t2_ParamLimits

0x8f6c,	// (0x0006cc70) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x00073a60) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x00073a60) list_medium_line_t2_t

0x6b8c,	// (0x0006a890) list_medium_line_t3_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t3_g1

0x8f85,	// (0x0006cc89) list_medium_line_t3_t1_ParamLimits

0x8f85,	// (0x0006cc89) list_medium_line_t3_t1

0x8f9c,	// (0x0006cca0) list_medium_line_t3_t2_ParamLimits

0x8f9c,	// (0x0006cca0) list_medium_line_t3_t2

0x8fb1,	// (0x0006ccb5) list_medium_line_t3_t3_ParamLimits

0x8fb1,	// (0x0006ccb5) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00073a65) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00073a65) list_medium_line_t3_t

0x6b8c,	// (0x0006a890) list_medium_line_g3_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_g3_g1

0x8fc3,	// (0x0006ccc7) list_medium_line_g3_g2_ParamLimits

0x8fc3,	// (0x0006ccc7) list_medium_line_g3_g2

0x6b98,	// (0x0006a89c) list_medium_line_g3_g3_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00073a6c) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00073a6c) list_medium_line_g3_g

0x8fcf,	// (0x0006ccd3) list_medium_line_g3_t1_ParamLimits

0x8fcf,	// (0x0006ccd3) list_medium_line_g3_t1

0x6b8c,	// (0x0006a890) list_medium_line_t2_g3_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t2_g3_g1

0x8fc3,	// (0x0006ccc7) list_medium_line_t2_g3_g2_ParamLimits

0x8fc3,	// (0x0006ccc7) list_medium_line_t2_g3_g2

0x6b98,	// (0x0006a89c) list_medium_line_t2_g3_g3_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00073a6c) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00073a6c) list_medium_line_t2_g3_g

0x8fe4,	// (0x0006cce8) list_medium_line_t2_g3_t1_ParamLimits

0x8fe4,	// (0x0006cce8) list_medium_line_t2_g3_t1

0x8ffe,	// (0x0006cd02) list_medium_line_t2_g3_t2_ParamLimits

0x8ffe,	// (0x0006cd02) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00073a73) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00073a73) list_medium_line_t2_g3_t

0x6b8c,	// (0x0006a890) list_medium_line_t3_g3_g1_ParamLimits

0x6b8c,	// (0x0006a890) list_medium_line_t3_g3_g1

0x8fc3,	// (0x0006ccc7) list_medium_line_t3_g3_g2_ParamLimits

0x8fc3,	// (0x0006ccc7) list_medium_line_t3_g3_g2

0x6b98,	// (0x0006a89c) list_medium_line_t3_g3_g3_ParamLimits

0x6b98,	// (0x0006a89c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00073a6c) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00073a6c) list_medium_line_t3_g3_g

0x9019,	// (0x0006cd1d) list_medium_line_t3_g3_t1_ParamLimits

0x9019,	// (0x0006cd1d) list_medium_line_t3_g3_t1

0x902d,	// (0x0006cd31) list_medium_line_t3_g3_t2_ParamLimits

0x902d,	// (0x0006cd31) list_medium_line_t3_g3_t2

0x903f,	// (0x0006cd43) list_medium_line_t3_g3_t3_ParamLimits

0x903f,	// (0x0006cd43) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00073a78) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00073a78) list_medium_line_t3_g3_t

0x8cf8,	// (0x0006c9fc) list_medium_line_right_iconx2_g1

0x8ad6,	// (0x0006c7da) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00073a7f) list_medium_line_right_iconx2_g

0x9053,	// (0x0006cd57) list_medium_line_right_iconx2_t1

0x8cf8,	// (0x0006c9fc) list_medium_line_t2_right_iconx2_g1

0x8ad6,	// (0x0006c7da) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x00073a7f) list_medium_line_t2_right_iconx2_g

0x9061,	// (0x0006cd65) list_medium_line_t2_right_iconx2_t1

0x9071,	// (0x0006cd75) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00073a84) list_medium_line_t2_right_iconx2_t

0x9083,	// (0x0006cd87) list_medium_line_x4_t4_t1

0x9091,	// (0x0006cd95) list_medium_line_x4_t4_t2

0x90a1,	// (0x0006cda5) list_medium_line_x4_t4_t3

0x90b1,	// (0x0006cdb5) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00073a89) list_medium_line_x4_t4_t

0x9104,	// (0x0006ce08) tport_appsw_pane_ParamLimits

0x9104,	// (0x0006ce08) tport_appsw_pane

0x911c,	// (0x0006ce20) tport_contact_pane_ParamLimits

0x911c,	// (0x0006ce20) tport_contact_pane

0x9134,	// (0x0006ce38) tport_listscroll_pane_ParamLimits

0x9134,	// (0x0006ce38) tport_listscroll_pane

0x914e,	// (0x0006ce52) cell_tport_appsw_pane_ParamLimits

0x914e,	// (0x0006ce52) cell_tport_appsw_pane

0x60b6,	// (0x00069dba) tport_appsw_pane_g1_ParamLimits

0x60b6,	// (0x00069dba) tport_appsw_pane_g1

0xb709,	// (0x0006f40d) tport_contact_pane_g1

0xb09a,	// (0x0006ed9e) tport_contact_pane_t1

0xb712,	// (0x0006f416) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x00073a92) tport_contact_pane_t

0xb720,	// (0x0006f424) list_tport_pane

0xb729,	// (0x0006f42d) scroll_pane_cp_030

0x9196,	// (0x0006ce9a) cell_tport_appsw_pane_g1

0x91a6,	// (0x0006ceaa) cell_tport_appsw_pane_t1

0xa46f,	// (0x0006e173) grid_highlight_pane_cp019

0x91b4,	// (0x0006ceb8) list_tport_double_graphic_pane_ParamLimits

0x91b4,	// (0x0006ceb8) list_tport_double_graphic_pane

0xe24e,	// (0x00071f52) list_highlight_pane_cp023_ParamLimits

0xe24e,	// (0x00071f52) list_highlight_pane_cp023

0x91c1,	// (0x0006cec5) list_tport_double_graphic_pane_g1_ParamLimits

0x91c1,	// (0x0006cec5) list_tport_double_graphic_pane_g1

0x91ce,	// (0x0006ced2) list_tport_double_graphic_pane_t1_ParamLimits

0x91ce,	// (0x0006ced2) list_tport_double_graphic_pane_t1

0x91e3,	// (0x0006cee7) list_tport_double_graphic_pane_t2_ParamLimits

0x91e3,	// (0x0006cee7) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x00073a9e) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x00073a9e) list_tport_double_graphic_pane_t

0xa46f,	// (0x0006e173) main_cale_note_pane

0x606b,	// (0x00069d6f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x606b,	// (0x00069d6f) cell_vitu2_function_top_wide_pane_cp01

0x861c,	// (0x0006c320) wait_bar_pane_cp05_ParamLimits

0xe24e,	// (0x00071f52) listscroll_cmail_pane

0xb732,	// (0x0006f436) list_cmail_pane

0x69be,	// (0x0006a6c2) list_cmail_body_pane

0x91f5,	// (0x0006cef9) list_single_cmail_header_caption_pane

0x920b,	// (0x0006cf0f) list_single_cmail_header_detail_pane_ParamLimits

0x920b,	// (0x0006cf0f) list_single_cmail_header_detail_pane

0xb742,	// (0x0006f446) list_single_cmail_header_caption_pane_t1

0x923f,	// (0x0006cf43) list_single_cmail_header_detail_pane_g1_ParamLimits

0x923f,	// (0x0006cf43) list_single_cmail_header_detail_pane_g1

0x9257,	// (0x0006cf5b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9257,	// (0x0006cf5b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00073aa3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00073aa3) list_single_cmail_header_detail_pane_g

0x9263,	// (0x0006cf67) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9263,	// (0x0006cf67) list_single_cmail_header_detail_pane_t1

0x92c5,	// (0x0006cfc9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x92c5,	// (0x0006cfc9) list_single_cmail_header_editor_pane_bg

0xb249,	// (0x0006ef4d) list_cmail_body_pane_g1

0xb75d,	// (0x0006f461) list_cmail_body_pane_t1

0x61c8,	// (0x00069ecc) list_single_cmail_header_editor_pane_bg_g1

0xc70a,	// (0x0007040e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x61d8,	// (0x00069edc) list_single_cmail_header_editor_pane_bg_g1_copy2

0x61d0,	// (0x00069ed4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x6b84,	// (0x0006a888) list_single_cmail_header_editor_pane_bg_g1_copy4

0x61f8,	// (0x00069efc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x61e8,	// (0x00069eec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x61f0,	// (0x00069ef4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc6ea,	// (0x000703ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x92de,	// (0x0006cfe2) calenote_gesture_pane_ParamLimits

0x92de,	// (0x0006cfe2) calenote_gesture_pane

0x92fe,	// (0x0006d002) calenote_window_pane_ParamLimits

0x92fe,	// (0x0006d002) calenote_window_pane

0xb76b,	// (0x0006f46f) popup_note_window_cp01

0x931a,	// (0x0006d01e) calenote_swipe_1_pane_ParamLimits

0x931a,	// (0x0006d01e) calenote_swipe_1_pane

0x8a78,	// (0x0006c77c) calenote_swipe_2_pane_ParamLimits

0x8a78,	// (0x0006c77c) calenote_swipe_2_pane

0xb58f,	// (0x0006f293) calenote_swipe_1_pane_g1_ParamLimits

0xb58f,	// (0x0006f293) calenote_swipe_1_pane_g1

0xb59c,	// (0x0006f2a0) calenote_swipe_1_pane_g2_ParamLimits

0xb59c,	// (0x0006f2a0) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x000739cd) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x000739cd) calenote_swipe_1_pane_g

0xb77d,	// (0x0006f481) calenote_swipe_1_pane_t1_ParamLimits

0xb77d,	// (0x0006f481) calenote_swipe_1_pane_t1

0xb58f,	// (0x0006f293) calenote_swipe_2_pane_g1_ParamLimits

0xb58f,	// (0x0006f293) calenote_swipe_2_pane_g1

0xb79c,	// (0x0006f4a0) calenote_swipe_2_pane_g2_ParamLimits

0xb79c,	// (0x0006f4a0) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00073aaf) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00073aaf) calenote_swipe_2_pane_g

0xb7a8,	// (0x0006f4ac) calenote_swipe_2_pane_t1_ParamLimits

0xb7a8,	// (0x0006f4ac) calenote_swipe_2_pane_t1

0xa46f,	// (0x0006e173) main_mup_navstr_pane

0x4d3c,	// (0x00068a40) main_mup3_pane_t7_ParamLimits

0x4d3c,	// (0x00068a40) main_mup3_pane_t7

0xac34,	// (0x0006e938) main_mp4_pane_g6_ParamLimits

0xac34,	// (0x0006e938) main_mp4_pane_g6

0xadd8,	// (0x0006eadc) main_image3_pane_t4_ParamLimits

0xadd8,	// (0x0006eadc) main_image3_pane_t4

0x932f,	// (0x0006d033) popup_navstr_preview_pane_ParamLimits

0x932f,	// (0x0006d033) popup_navstr_preview_pane

0x9343,	// (0x0006d047) scroll_navstr_pane_ParamLimits

0x9343,	// (0x0006d047) scroll_navstr_pane

0xa46f,	// (0x0006e173) bg_popup_preview_window_pane_cp04

0xb7cf,	// (0x0006f4d3) popup_navstr_preview_pane_t1

0x9357,	// (0x0006d05b) scroll_navstr_pane_g1_ParamLimits

0x9357,	// (0x0006d05b) scroll_navstr_pane_g1

0x936b,	// (0x0006d06f) scroll_navstr_pane_t1_ParamLimits

0x936b,	// (0x0006d06f) scroll_navstr_pane_t1

0xb774,	// (0x0006f478) bg_button_pane_cp014

0xb774,	// (0x0006f478) bg_button_pane_cp030

0x8916,	// (0x0006c61a) list_double_fisheye_pane_g4_ParamLimits

0x8916,	// (0x0006c61a) list_double_fisheye_pane_g4

0x8922,	// (0x0006c626) list_double_fisheye_pane_g5_ParamLimits

0x8922,	// (0x0006c626) list_double_fisheye_pane_g5

0xa9ad,	// (0x0006e6b1) sp_fs_scroll_pane_cp03

0xb682,	// (0x0006f386) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb68e,	// (0x0006f392) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x000739ea) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb69a,	// (0x0006f39e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb73a,	// (0x0006f43e) sp_fs_scroll_pane_cp02

0xc3ed,	// (0x000700f1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc3ed,	// (0x000700f1) popup_sp_fs_calendar_preview_list_single_pane

0xa46f,	// (0x0006e173) main_cam6_pano_pane

0xa4e7,	// (0x0006e1eb) main_mup3_pane_ParamLimits

0xa46f,	// (0x0006e173) main_phacti_pane

0x84ef,	// (0x0006c1f3) bg_button_pane_cp11

0x8509,	// (0x0006c20d) main_mobtv_info_pane_g2_ParamLimits

0x8509,	// (0x0006c20d) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0007394a) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0007394a) main_mobtv_info_pane_g

0x86e6,	// (0x0006c3ea) sc_clock_pane_t5_ParamLimits

0x86e6,	// (0x0006c3ea) sc_clock_pane_t5

0x8778,	// (0x0006c47c) main_radioblah_pane_g1_ParamLimits

0xb4db,	// (0x0006f1df) main_radioblah_pane_t3_ParamLimits

0xb4db,	// (0x0006f1df) main_radioblah_pane_t3

0xb4f3,	// (0x0006f1f7) main_radioblah_pane_t4_ParamLimits

0xb4f3,	// (0x0006f1f7) main_radioblah_pane_t4

0x87a0,	// (0x0006c4a4) main_radioblah_text_pane_ParamLimits

0x87a0,	// (0x0006c4a4) main_radioblah_text_pane

0x87b2,	// (0x0006c4b6) main_radioblah_info_pane_g1_ParamLimits

0x884b,	// (0x0006c54f) main_radioblah_info_pane_t4_ParamLimits

0x884b,	// (0x0006c54f) main_radioblah_info_pane_t4

0xe24e,	// (0x00071f52) main_sp_fs_calendar_pane

0x9382,	// (0x0006d086) main_phacti_pane_g1

0x938a,	// (0x0006d08e) phacti_note_pane_ParamLimits

0x938a,	// (0x0006d08e) phacti_note_pane

0xb7e6,	// (0x0006f4ea) phacti_term_pane_ParamLimits

0xb7e6,	// (0x0006f4ea) phacti_term_pane

0xb7fb,	// (0x0006f4ff) phacti_note_pane_t1_ParamLimits

0xb7fb,	// (0x0006f4ff) phacti_note_pane_t1

0x939e,	// (0x0006d0a2) phacti_term_pane_g1

0x93a6,	// (0x0006d0aa) phacti_term_pane_t1_ParamLimits

0x93a6,	// (0x0006d0aa) phacti_term_pane_t1

0xb812,	// (0x0006f516) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc50b,	// (0x0007020f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00073ab9) popup_sp_fs_calendar_preview_list_single_pane_g

0xb81a,	// (0x0006f51e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb81a,	// (0x0006f51e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb82f,	// (0x0006f533) aid_popup_sp_fs_bg_corner_pane

0xe670,	// (0x00072374) popup_sp_fs_calendar_preview_bg_pane_g1

0xa46f,	// (0x0006e173) popup_sp_fs_calendar_preview_bg_pane

0xb837,	// (0x0006f53b) popup_sp_fs_calendar_preview_list_pane

0xe268,	// (0x00071f6c) bg_main_sp_fs_cale_pane_ParamLimits

0xe268,	// (0x00071f6c) bg_main_sp_fs_cale_pane

0x943a,	// (0x0006d13e) listscroll_cale_mrui_pane_ParamLimits

0x943a,	// (0x0006d13e) listscroll_cale_mrui_pane

0x944f,	// (0x0006d153) listscroll_sp_fs_schedule_track_pane

0x9458,	// (0x0006d15c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x9458,	// (0x0006d15c) main_sp_fs_ctrlbar_pane_cp01

0xb83f,	// (0x0006f543) main_sp_fs_ribbon_pane

0x946b,	// (0x0006d16f) popup_sp_fs_cale_preview_window

0x947d,	// (0x0006d181) list_single_sp_fs_schedule_track_pane_ParamLimits

0x947d,	// (0x0006d181) list_single_sp_fs_schedule_track_pane

0xe24e,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe24e,	// (0x00071f52) bg_sp_fs_highlight_list_pane_cp03

0x9490,	// (0x0006d194) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9490,	// (0x0006d194) list_single_sp_fs_schedule_track_pane_g1

0x949c,	// (0x0006d1a0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x949c,	// (0x0006d1a0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00073abe) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00073abe) list_single_sp_fs_schedule_track_pane_g

0x94a8,	// (0x0006d1ac) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x94a8,	// (0x0006d1ac) list_single_sp_fs_schedule_track_pane_t1

0x94c2,	// (0x0006d1c6) sp_fs_schedule_track_pane_ParamLimits

0x94c2,	// (0x0006d1c6) sp_fs_schedule_track_pane

0xb847,	// (0x0006f54b) sp_fs_schedule_track_pane_g1

0xb84f,	// (0x0006f553) sp_fs_schedule_track_pane_g2

0xb857,	// (0x0006f55b) sp_fs_schedule_track_pane_g3

0xb85f,	// (0x0006f563) sp_fs_schedule_track_pane_g4

0xb867,	// (0x0006f56b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00073ac3) sp_fs_schedule_track_pane_g

0x61c8,	// (0x00069ecc) bg_sp_fs_schedule_viewer_highlight_g1

0xc70a,	// (0x0007040e) bg_sp_fs_schedule_viewer_highlight_g2

0x61d0,	// (0x00069ed4) bg_sp_fs_schedule_viewer_highlight_g3

0x61d8,	// (0x00069edc) bg_sp_fs_schedule_viewer_highlight_g4

0x6b84,	// (0x0006a888) bg_sp_fs_schedule_viewer_highlight_g5

0x61e8,	// (0x00069eec) bg_sp_fs_schedule_viewer_highlight_g6

0x61f0,	// (0x00069ef4) bg_sp_fs_schedule_viewer_highlight_g7

0x61f8,	// (0x00069efc) bg_sp_fs_schedule_viewer_highlight_g8

0xc6ea,	// (0x000703ee) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00073ace) bg_sp_fs_schedule_viewer_highlight_g

0xa46f,	// (0x0006e173) bg_main_sp_fs_ribbon_pane

0x94d3,	// (0x0006d1d7) main_sp_fs_ribbon_pane_g1

0xb86f,	// (0x0006f573) main_sp_fs_ribbon_pane_t1

0x94dc,	// (0x0006d1e0) main_sp_fs_ribbon_pane_t2

0xb87e,	// (0x0006f582) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00073ae1) main_sp_fs_ribbon_pane_t

0xb88d,	// (0x0006f591) main_sp_fs_ribbon_scheduler_pane

0xb895,	// (0x0006f599) bg_main_sp_fs_ribbon_pane_g1

0xb89e,	// (0x0006f5a2) bg_main_sp_fs_ribbon_pane_g2

0xb8a7,	// (0x0006f5ab) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00073ae8) bg_main_sp_fs_ribbon_pane_g

0xb8af,	// (0x0006f5b3) main_sp_fs_ribbon_scheduler_pane_g1

0xb8b8,	// (0x0006f5bc) main_sp_fs_ribbon_scheduler_pane_g2

0xb8c1,	// (0x0006f5c5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00073aef) main_sp_fs_ribbon_scheduler_pane_g

0xb8ca,	// (0x0006f5ce) list_cale_mrui_pane

0x94eb,	// (0x0006d1ef) sp_fs_scroll_pane_cp07_ParamLimits

0x94eb,	// (0x0006d1ef) sp_fs_scroll_pane_cp07

0x9507,	// (0x0006d20b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9507,	// (0x0006d20b) bg_sp_fs_schedule_viewer_highlight

0xb8d7,	// (0x0006f5db) list_single_sp_fs_schedule_track_pane_cp01

0xb8df,	// (0x0006f5e3) list_sp_fs_schedule_track_pane

0xb8e7,	// (0x0006f5eb) sp_fs_scroll_pane_cp06_ParamLimits

0xb8e7,	// (0x0006f5eb) sp_fs_scroll_pane_cp06

0xe670,	// (0x00072374) bgmain_sp_fs_calendar_pane_g1

0x9517,	// (0x0006d21b) list_single_cale_mrui_pane_ParamLimits

0x9517,	// (0x0006d21b) list_single_cale_mrui_pane

0x9538,	// (0x0006d23c) list_single_cale_mrui_row_pane_ParamLimits

0x9538,	// (0x0006d23c) list_single_cale_mrui_row_pane

0x9545,	// (0x0006d249) list_single_cale_mrui_row_pane_g1_ParamLimits

0x9545,	// (0x0006d249) list_single_cale_mrui_row_pane_g1

0x957d,	// (0x0006d281) list_single_cale_mrui_row_pane_t1_ParamLimits

0x957d,	// (0x0006d281) list_single_cale_mrui_row_pane_t1

0x958f,	// (0x0006d293) list_single_cale_mrui_row_pane_t2_ParamLimits

0x958f,	// (0x0006d293) list_single_cale_mrui_row_pane_t2

0x95f7,	// (0x0006d2fb) list_single_cale_mrui_row_pane_t3_ParamLimits

0x95f7,	// (0x0006d2fb) list_single_cale_mrui_row_pane_t3

0x9626,	// (0x0006d32a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x9626,	// (0x0006d32a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00073afd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00073afd) list_single_cale_mrui_row_pane_t

0x9655,	// (0x0006d359) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9655,	// (0x0006d359) list_single_cmail_header_editor_pane_bg_cp01

0x967b,	// (0x0006d37f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x967b,	// (0x0006d37f) list_single_cmail_header_editor_pane_bg_cp02

0x969b,	// (0x0006d39f) main_radioblah_text_pane_t1_ParamLimits

0x969b,	// (0x0006d39f) main_radioblah_text_pane_t1

0xb906,	// (0x0006f60a) cam6_indi_pane_cp01

0xb90e,	// (0x0006f612) cam6_mode_pane_cp01

0xb916,	// (0x0006f61a) cam6_pano_pane

0xb91f,	// (0x0006f623) cam6_zoom_pane_cp01

0xb927,	// (0x0006f62b) cam6_pano_image_pane

0xb932,	// (0x0006f636) cam6_pano_pane_g1

0xb249,	// (0x0006ef4d) cam6_pano_pane_g2

0xb93b,	// (0x0006f63f) cam6_pano_pane_g3

0xb944,	// (0x0006f648) cam6_pano_pane_g4

0xec84,	// (0x00072988) cam6_pano_pane_g5

0xb94d,	// (0x0006f651) cam6_pano_pane_g6

0xb957,	// (0x0006f65b) cam6_pano_pane_g7

0xb95f,	// (0x0006f663) cam6_pano_pane_g8

0xb968,	// (0x0006f66c) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00073b06) cam6_pano_pane_g

0xa46f,	// (0x0006e173) main_browser_tag_pane

0xb7c7,	// (0x0006f4cb) grid_navstr_albumart_pane

0xb973,	// (0x0006f677) cell_navstr_albumart_pane_ParamLimits

0xb973,	// (0x0006f677) cell_navstr_albumart_pane

0xb993,	// (0x0006f697) cell_navstr_albumart_pane_g1

0xe06b,	// (0x00071d6f) cell_navstr_albumart_pane_g2

0xe07b,	// (0x00071d7f) cell_navstr_albumart_pane_g3

0xe073,	// (0x00071d77) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00073b19) cell_navstr_albumart_pane_g

0x96b5,	// (0x0006d3b9) bt_list_pane_ParamLimits

0x96b5,	// (0x0006d3b9) bt_list_pane

0x96c9,	// (0x0006d3cd) bt_list_pane_t1

0x96d8,	// (0x0006d3dc) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00073b22) bt_list_pane_t

0xa46f,	// (0x0006e173) main_cale_prevew_pane

0x96e7,	// (0x0006d3eb) popup_cale_preview_window_ParamLimits

0x96e7,	// (0x0006d3eb) popup_cale_preview_window

0xe24e,	// (0x00071f52) bg_popup_preview_window_pane_cp05_ParamLimits

0xe24e,	// (0x00071f52) bg_popup_preview_window_pane_cp05

0xb99b,	// (0x0006f69f) list_cale_preview_pane_ParamLimits

0xb99b,	// (0x0006f69f) list_cale_preview_pane

0x9702,	// (0x0006d406) list_double_cale_preview_pane_ParamLimits

0x9702,	// (0x0006d406) list_double_cale_preview_pane

0x9714,	// (0x0006d418) list_single_cale_preview_pane_ParamLimits

0x9714,	// (0x0006d418) list_single_cale_preview_pane

0x972a,	// (0x0006d42e) list_single_cale_preview_pane_g1

0x9732,	// (0x0006d436) list_single_cale_preview_pane_t1_ParamLimits

0x9732,	// (0x0006d436) list_single_cale_preview_pane_t1

0x9747,	// (0x0006d44b) list_double_cale_preview_pane_g1

0x974f,	// (0x0006d453) list_double_cale_preview_pane_t1_ParamLimits

0x974f,	// (0x0006d453) list_double_cale_preview_pane_t1

0x9764,	// (0x0006d468) list_double_cale_preview_pane_t2_ParamLimits

0x9764,	// (0x0006d468) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00073b27) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00073b27) list_double_cale_preview_pane_t

0xa46f,	// (0x0006e173) main_ezdial_pane

0xe24e,	// (0x00071f52) main_sp_fs_email_pane_ParamLimits

0x8b00,	// (0x0006c804) cmail_ddmenu_btn01_pane_ParamLimits

0x8b00,	// (0x0006c804) cmail_ddmenu_btn01_pane

0x8b13,	// (0x0006c817) cmail_ddmenu_btn02_pane_ParamLimits

0x8b13,	// (0x0006c817) cmail_ddmenu_btn02_pane

0x8b36,	// (0x0006c83a) cmail_ddmenu_btn03_pane_ParamLimits

0x8b36,	// (0x0006c83a) cmail_ddmenu_btn03_pane

0x8b5c,	// (0x0006c860) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b80,	// (0x0006c884) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x69be,	// (0x0006a6c2) list_cmail_body_pane_ParamLimits

0x9234,	// (0x0006cf38) bg_button_pane_cp12

0xb750,	// (0x0006f454) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb750,	// (0x0006f454) list_single_cmail_header_detail_pane_g3

0x92a1,	// (0x0006cfa5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x92a1,	// (0x0006cfa5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00073aaa) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00073aaa) list_single_cmail_header_detail_pane_t

0x93bb,	// (0x0006d0bf) phacti_term_pane_t2_ParamLimits

0x93bb,	// (0x0006d0bf) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00073ab4) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00073ab4) phacti_term_pane_t

0xb9a7,	// (0x0006f6ab) aid_size_list_single_double

0x977c,	// (0x0006d480) popup_ezdial_listscroll_window

0x9798,	// (0x0006d49c) popup_number_entry_window_cp01

0xce13,	// (0x00070b17) bg_popup_call_pane_cp09

0xb9b3,	// (0x0006f6b7) ezdial_list_pane

0xb9bb,	// (0x0006f6bf) scroll_pane_cp23

0xe268,	// (0x00071f6c) bg_button_pane_cp028_ParamLimits

0xe268,	// (0x00071f6c) bg_button_pane_cp028

0x97a6,	// (0x0006d4aa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x97a6,	// (0x0006d4aa) cmail_ddmenu_btn01_pane_g1

0x97b2,	// (0x0006d4b6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x97b2,	// (0x0006d4b6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00073b2c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00073b2c) cmail_ddmenu_btn01_pane_g

0xb9c3,	// (0x0006f6c7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb9c3,	// (0x0006f6c7) cmail_ddmenu_btn01_pane_t1

0xe268,	// (0x00071f6c) bg_button_pane_cp029_ParamLimits

0xe268,	// (0x00071f6c) bg_button_pane_cp029

0x97be,	// (0x0006d4c2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x97be,	// (0x0006d4c2) cmail_ddmenu_btn02_pane_g1

0x97d6,	// (0x0006d4da) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x97d6,	// (0x0006d4da) cmail_ddmenu_btn02_pane_t1

0xe24e,	// (0x00071f52) bg_button_pane_cp031_ParamLimits

0xe24e,	// (0x00071f52) bg_button_pane_cp031

0x97be,	// (0x0006d4c2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x97be,	// (0x0006d4c2) cmail_ddmenu_btn03_pane_g1

0x97d6,	// (0x0006d4da) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x97d6,	// (0x0006d4da) cmail_ddmenu_btn03_pane_t1

0x58ef,	// (0x000695f3) cell_dialer2_keypad_pane_t1_ParamLimits

0x5909,	// (0x0006960d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5909,	// (0x0006960d) cell_dialer2_keypad_pane_t1_copy1

0x8326,	// (0x0006c02a) ncimui_group_button_pane

0xe24e,	// (0x00071f52) main_sp_fs_calendar_pane_ParamLimits

0x91f5,	// (0x0006cef9) list_single_cmail_header_caption_pane_ParamLimits

0x93ee,	// (0x0006d0f2) aid_recal_txt_sm_pane

0xa46f,	// (0x0006e173) mian_recal_day_pane

0x946b,	// (0x0006d16f) popup_sp_fs_cale_preview_window_ParamLimits

0xb9d8,	// (0x0006f6dc) list_recal_day_pane

0x9815,	// (0x0006d519) list_single_recal_day_pane_ParamLimits

0x9815,	// (0x0006d519) list_single_recal_day_pane

0xb9ff,	// (0x0006f703) list_single_recal_day_pane_g1_ParamLimits

0xb9ff,	// (0x0006f703) list_single_recal_day_pane_g1

0x9827,	// (0x0006d52b) list_single_recal_day_pane_g2_ParamLimits

0x9827,	// (0x0006d52b) list_single_recal_day_pane_g2

0x9837,	// (0x0006d53b) list_single_recal_day_pane_g3_ParamLimits

0x9837,	// (0x0006d53b) list_single_recal_day_pane_g3

0x9843,	// (0x0006d547) list_single_recal_day_pane_g4_ParamLimits

0x9843,	// (0x0006d547) list_single_recal_day_pane_g4

0x9859,	// (0x0006d55d) list_single_recal_day_pane_g5_ParamLimits

0x9859,	// (0x0006d55d) list_single_recal_day_pane_g5

0x9873,	// (0x0006d577) list_single_recal_day_pane_g6_ParamLimits

0x9873,	// (0x0006d577) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00073b3b) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00073b3b) list_single_recal_day_pane_g

0x9887,	// (0x0006d58b) list_single_recal_day_pane_t1

0x9899,	// (0x0006d59d) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00073b46) list_single_recal_day_pane_t

0x98ab,	// (0x0006d5af) ncimui_query_button_pane_ParamLimits

0x98ab,	// (0x0006d5af) ncimui_query_button_pane

0x98bb,	// (0x0006d5bf) ncimui_query_button_pane_t1_ParamLimits

0x98bb,	// (0x0006d5bf) ncimui_query_button_pane_t1

0xba0b,	// (0x0006f70f) ncimui_query_button_pane_t2_ParamLimits

0xba0b,	// (0x0006f70f) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00073b4b) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00073b4b) ncimui_query_button_pane_t

0x98ce,	// (0x0006d5d2) query_button_pane_ParamLimits

0x98ce,	// (0x0006d5d2) query_button_pane

0xa46f,	// (0x0006e173) bg_button_pane_cp0028

0xba1e,	// (0x0006f722) query_button_pane_t1

0x399d,	// (0x000676a1) main_tport_pane_ParamLimits

0x90c1,	// (0x0006cdc5) bg_popup_window_pane_cp01_ParamLimits

0x90c1,	// (0x0006cdc5) bg_popup_window_pane_cp01

0x90dc,	// (0x0006cde0) heading_pane_cp08_ParamLimits

0x90dc,	// (0x0006cde0) heading_pane_cp08

0x90ef,	// (0x0006cdf3) heading_pane_cp07_ParamLimits

0x90ef,	// (0x0006cdf3) heading_pane_cp07

0x9196,	// (0x0006ce9a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00073a97) cell_tport_appsw_pane_g

0xd6f8,	// (0x000713fc) input_candi_list_open_g1

0xc8cd,	// (0x000705d1) list_cale_time_pane_g6_ParamLimits

0xc8cd,	// (0x000705d1) list_cale_time_pane_g6

0x4764,	// (0x00068468) aid_size_touch_calib_1_ParamLimits

0x4764,	// (0x00068468) aid_size_touch_calib_1

0x4776,	// (0x0006847a) aid_size_touch_calib_2_ParamLimits

0x4776,	// (0x0006847a) aid_size_touch_calib_2

0x478e,	// (0x00068492) aid_size_touch_calib_3_ParamLimits

0x478e,	// (0x00068492) aid_size_touch_calib_3

0x47ac,	// (0x000684b0) aid_size_touch_calib_4_ParamLimits

0x47ac,	// (0x000684b0) aid_size_touch_calib_4

0x47c4,	// (0x000684c8) main_touch_calib_button_group_pane_ParamLimits

0x47c4,	// (0x000684c8) main_touch_calib_button_group_pane

0x47dc,	// (0x000684e0) main_touch_calib_pane_g1_ParamLimits

0x47ee,	// (0x000684f2) main_touch_calib_pane_g2_ParamLimits

0x4800,	// (0x00068504) main_touch_calib_pane_g3_ParamLimits

0x4812,	// (0x00068516) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x00073460) main_touch_calib_pane_g_ParamLimits

0x4824,	// (0x00068528) main_touch_calib_pane_t1_ParamLimits

0x483e,	// (0x00068542) main_touch_calib_pane_t2_ParamLimits

0x4858,	// (0x0006855c) main_touch_calib_pane_t3_ParamLimits

0x486c,	// (0x00068570) main_touch_calib_pane_t4_ParamLimits

0x4880,	// (0x00068584) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x00073469) main_touch_calib_pane_t_ParamLimits

0xea44,	// (0x00072748) list_single_fp_cale_pane_g3_ParamLimits

0xea44,	// (0x00072748) list_single_fp_cale_pane_g3

0xa4e7,	// (0x0006e1eb) bg_button_pane_cp012_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp03_ParamLimits

0x6b3a,	// (0x0006a83e) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4e7,	// (0x0006e1eb) bg_vkb2_func_pane_cp04_ParamLimits

0x82b4,	// (0x0006bfb8) main_ncimui_button_group_pane_ParamLimits

0x82b4,	// (0x0006bfb8) main_ncimui_button_group_pane

0x8314,	// (0x0006c018) main_ncimui_pane_t3_ParamLimits

0x8314,	// (0x0006c018) main_ncimui_pane_t3

0xb7dd,	// (0x0006f4e1) phacti_button_group_pane

0xb9a7,	// (0x0006f6ab) aid_size_list_single_double_ParamLimits

0x977c,	// (0x0006d480) popup_ezdial_listscroll_window_ParamLimits

0x9798,	// (0x0006d49c) popup_number_entry_window_cp01_ParamLimits

0x98e1,	// (0x0006d5e5) phacti_button_pane_ParamLimits

0x98e1,	// (0x0006d5e5) phacti_button_pane

0xa46f,	// (0x0006e173) bg_button_pane_cp14

0xba2c,	// (0x0006f730) phacti_button_pane_t1

0x98f2,	// (0x0006d5f6) main_touch_calib_button_pane_ParamLimits

0x98f2,	// (0x0006d5f6) main_touch_calib_button_pane

0xc2e9,	// (0x0006ffed) bg_button_pane_cp18_ParamLimits

0xc2e9,	// (0x0006ffed) bg_button_pane_cp18

0xba3a,	// (0x0006f73e) main_touch_calib_button_pane_t1_ParamLimits

0xba3a,	// (0x0006f73e) main_touch_calib_button_pane_t1

0xba50,	// (0x0006f754) main_touch_calib_button_pane_t2_ParamLimits

0xba50,	// (0x0006f754) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00073b50) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00073b50) main_touch_calib_button_pane_t

0xa46f,	// (0x0006e173) cell_ncimui_button_pane

0xa46f,	// (0x0006e173) bg_button_pane_cp032

0xba6e,	// (0x0006f772) cell_ncimui_button_pane_t1

0xadb8,	// (0x0006eabc) image3_infobar_pane_ParamLimits

0xadb8,	// (0x0006eabc) image3_infobar_pane

0x8712,	// (0x0006c416) fs_bigclock_status_pane_ParamLimits

0x8712,	// (0x0006c416) fs_bigclock_status_pane

0x871f,	// (0x0006c423) main_fs_bigclock_clock_pane_ParamLimits

0x871f,	// (0x0006c423) main_fs_bigclock_clock_pane

0x873b,	// (0x0006c43f) main_fs_bigclock_indi_pane_ParamLimits

0x873b,	// (0x0006c43f) main_fs_bigclock_indi_pane

0x8754,	// (0x0006c458) main_fs_bigclock_swipe_pane_ParamLimits

0x8754,	// (0x0006c458) main_fs_bigclock_swipe_pane

0xa46f,	// (0x0006e173) main_fs_clock_dumped_data

0xb356,	// (0x0006f05a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb356,	// (0x0006f05a) list_single_fs_bigclock_indicator_pane_g1

0xb370,	// (0x0006f074) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb370,	// (0x0006f074) list_single_fs_bigclock_indicator_pane_g2

0xb38a,	// (0x0006f08e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb38a,	// (0x0006f08e) list_single_fs_bigclock_indicator_pane_g3

0xb3a4,	// (0x0006f0a8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb3a4,	// (0x0006f0a8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0007397e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0007397e) list_single_fs_bigclock_indicator_pane_g

0xb3cd,	// (0x0006f0d1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb3cd,	// (0x0006f0d1) list_single_fs_bigclock_indicator_pane_t1

0xb3f5,	// (0x0006f0f9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb3f5,	// (0x0006f0f9) list_single_fs_bigclock_indicator_pane_t2

0xb41d,	// (0x0006f121) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb41d,	// (0x0006f121) list_single_fs_bigclock_indicator_pane_t3

0xb445,	// (0x0006f149) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb445,	// (0x0006f149) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x00073989) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x00073989) list_single_fs_bigclock_indicator_pane_t

0xba7c,	// (0x0006f780) image3_infobar_fav_pane_ParamLimits

0xba7c,	// (0x0006f780) image3_infobar_fav_pane

0xba8c,	// (0x0006f790) image3_infobar_loc_pane_ParamLimits

0xba8c,	// (0x0006f790) image3_infobar_loc_pane

0xbaa0,	// (0x0006f7a4) image3_infobar_time_pane_ParamLimits

0xbaa0,	// (0x0006f7a4) image3_infobar_time_pane

0xe670,	// (0x00072374) image3_infobar_time_pane_g1

0xbab0,	// (0x0006f7b4) image3_infobar_time_pane_t1

0xe670,	// (0x00072374) image3_infobar_loc_pane_g1

0xbabe,	// (0x0006f7c2) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00073b55) image3_infobar_loc_pane_g

0xbac6,	// (0x0006f7ca) image3_infobar_loc_pane_t1

0xe670,	// (0x00072374) image3_infobar_fav_pane_g1

0xbad4,	// (0x0006f7d8) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00073b5a) image3_infobar_fav_pane_g

0xbadc,	// (0x0006f7e0) fs_bigclock_status_battery_pane

0xbae5,	// (0x0006f7e9) fs_bigclock_status_signal_pane

0xbaee,	// (0x0006f7f2) fs_bigclock_status_title_pane

0xbaf7,	// (0x0006f7fb) fs_bigclock_status_signal_pane_g1

0xbb00,	// (0x0006f804) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00073b5f) fs_bigclock_status_signal_pane_g

0xbb08,	// (0x0006f80c) fs_bigclock_status_battery_pane_g1

0xbb11,	// (0x0006f815) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00073b64) fs_bigclock_status_battery_pane_g

0xbb19,	// (0x0006f81d) fs_bigclock_status_title_pane_t1

0xe670,	// (0x00072374) main_fs_bigclock_clock_pane_g1

0x9907,	// (0x0006d60b) main_fs_bigclock_clock_pane_g2

0x9907,	// (0x0006d60b) main_fs_bigclock_clock_pane_g3

0x9907,	// (0x0006d60b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00073b69) main_fs_bigclock_clock_pane_g

0x990f,	// (0x0006d613) main_fs_bigclock_clock_pane_t1

0x991d,	// (0x0006d621) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00073b72) main_fs_bigclock_clock_pane_t

0xbb27,	// (0x0006f82b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbb27,	// (0x0006f82b) list_single_fs_bigclock_indicator_pane

0x992c,	// (0x0006d630) list_single_fs_bigclock_pane_ParamLimits

0x992c,	// (0x0006d630) list_single_fs_bigclock_pane

0xbb41,	// (0x0006f845) main_fs_bigclock_indicator_pane_t1

0xbb50,	// (0x0006f854) list_single_fs_bigclock_pane_g1

0xbb58,	// (0x0006f85c) list_single_fs_bigclock_pane_t1

0xe670,	// (0x00072374) main_fs_bigclock_swipe_pane_g1

0xbb9b,	// (0x0006f89f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00073b83) main_fs_bigclock_swipe_pane_g

0xbba3,	// (0x0006f8a7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbba3,	// (0x0006f8a7) main_fs_bigclock_swipe_pane_t1

0x2787,	// (0x0006648b) call_type_pane_ParamLimits

0xa46f,	// (0x0006e173) main_btmg_pane

0x9571,	// (0x0006d275) list_single_cale_mrui_row_pane_g2_ParamLimits

0x9571,	// (0x0006d275) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00073af6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00073af6) list_single_cale_mrui_row_pane_g

0x9804,	// (0x0006d508) list_recal_vselct_arw_lo_pane

0xb9f7,	// (0x0006f6fb) list_recal_vselct_arw_up_pane

0x980c,	// (0x0006d510) list_recal_vselct_pane

0x998f,	// (0x0006d693) btmg_button_pane

0x9999,	// (0x0006d69d) main_btmg_pane_g1

0xa46f,	// (0x0006e173) bg_button_pane_cp044

0xbbc0,	// (0x0006f8c4) btmg_button_pane_t1

0xe246,	// (0x00071f4a) aid_listscroll_gen

0xe24e,	// (0x00071f52) main_cntbar_detail_pane

0xb732,	// (0x0006f436) list_cmail_folder_pane

0xa9ad,	// (0x0006e6b1) sp_fs_scroll_pane_cp03_ParamLimits

0x99a3,	// (0x0006d6a7) list_single_fs_dyc_pane_cp01_ParamLimits

0x99a3,	// (0x0006d6a7) list_single_fs_dyc_pane_cp01

0xbbce,	// (0x0006f8d2) aid_size_cmail_indent

0x99b9,	// (0x0006d6bd) list_single_dyc_row_pane_cp01

0x99f4,	// (0x0006d6f8) cntbar_detail_list_pane_ParamLimits

0x99f4,	// (0x0006d6f8) cntbar_detail_list_pane

0x9a40,	// (0x0006d744) main_cntbar_detail_cont_pane_ParamLimits

0x9a40,	// (0x0006d744) main_cntbar_detail_cont_pane

0xa9ad,	// (0x0006e6b1) scroll_pane_cp032_ParamLimits

0xa9ad,	// (0x0006e6b1) scroll_pane_cp032

0x9a54,	// (0x0006d758) cntbar_detail_list_event_pane_ParamLimits

0x9a54,	// (0x0006d758) cntbar_detail_list_event_pane

0x9a04,	// (0x0006d708) cntbar_detail_list_shct_pane

0xc758,	// (0x0007045c) aid_list_gen

0xbbd7,	// (0x0006f8db) aid_scroll

0xbbe0,	// (0x0006f8e4) aid_size_touch_scroll_bar

0x7527,	// (0x0006b22b) aid_list_double

0x7515,	// (0x0006b219) aid_list_single

0x7515,	// (0x0006b219) aid_list_single_lg

0x9a64,	// (0x0006d768) aid_list_z_g_a_sm

0x9a6c,	// (0x0006d770) aid_list_z_g_d

0x9a74,	// (0x0006d778) aid_txt_z_prm

0x9a82,	// (0x0006d786) aid_txt_z_prm_cp01

0x9a90,	// (0x0006d794) aid_txt_z_sec

0x9a9e,	// (0x0006d7a2) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9a9e,	// (0x0006d7a2) main_cntbar_detail_cont_pane_g1

0x9ab2,	// (0x0006d7b6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9ab2,	// (0x0006d7b6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00073b88) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00073b88) main_cntbar_detail_cont_pane_g

0xbbe9,	// (0x0006f8ed) main_cntbar_detail_cont_pane_t1

0xbbf7,	// (0x0006f8fb) main_cntbar_detail_cont_pane_t2

0xbc05,	// (0x0006f909) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00073b8d) main_cntbar_detail_cont_pane_t

0x9ac2,	// (0x0006d7c6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9ac2,	// (0x0006d7c6) cell_cntbar_detail_list_shct_pane

0xbc13,	// (0x0006f917) cntbar_detail_list_shct_pane_g1

0xbc1c,	// (0x0006f920) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00073b94) cntbar_detail_list_shct_pane_g

0x9ad6,	// (0x0006d7da) cntbar_detail_list_event_pane_g1_ParamLimits

0x9ad6,	// (0x0006d7da) cntbar_detail_list_event_pane_g1

0x9ae2,	// (0x0006d7e6) cntbar_detail_list_event_pane_g2_ParamLimits

0x9ae2,	// (0x0006d7e6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00073b99) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00073b99) cntbar_detail_list_event_pane_g

0x9b4e,	// (0x0006d852) cntbar_detail_list_event_pane_t1_ParamLimits

0x9b4e,	// (0x0006d852) cntbar_detail_list_event_pane_t1

0x9b63,	// (0x0006d867) cntbar_detail_list_event_pane_t2_ParamLimits

0x9b63,	// (0x0006d867) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00073ba6) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00073ba6) cntbar_detail_list_event_pane_t

0xe670,	// (0x00072374) cell_cntbar_detail_list_shct_pane_g1

0x2aef,	// (0x000667f3) navi_pane_mv_g3

0xe24e,	// (0x00071f52) main_cntbar_detail_pane_ParamLimits

0xa46f,	// (0x0006e173) main_notif_wgt_pane

0xabce,	// (0x0006e8d2) aid_tch_main_mp4_pane_g4

0xadb0,	// (0x0006eab4) popup_slider_window_cp02

0x97fa,	// (0x0006d4fe) list_recal_day_event_pane

0x99c2,	// (0x0006d6c6) cntbar_detail_btn_pane_ParamLimits

0x99c2,	// (0x0006d6c6) cntbar_detail_btn_pane

0x99db,	// (0x0006d6df) cntbar_detail_btn_pane_cp01_ParamLimits

0x99db,	// (0x0006d6df) cntbar_detail_btn_pane_cp01

0x9a04,	// (0x0006d708) cntbar_detail_list_shct_pane_ParamLimits

0x9a14,	// (0x0006d718) cntbar_detail_pane_g1_ParamLimits

0x9a14,	// (0x0006d718) cntbar_detail_pane_g1

0x9a24,	// (0x0006d728) cntbar_detail_pane_t1_ParamLimits

0x9a24,	// (0x0006d728) cntbar_detail_pane_t1

0x9aee,	// (0x0006d7f2) cntbar_detail_list_event_pane_g3_ParamLimits

0x9aee,	// (0x0006d7f2) cntbar_detail_list_event_pane_g3

0x9b06,	// (0x0006d80a) cntbar_detail_list_event_pane_g4_ParamLimits

0x9b06,	// (0x0006d80a) cntbar_detail_list_event_pane_g4

0x9b1e,	// (0x0006d822) cntbar_detail_list_event_pane_g5_ParamLimits

0x9b1e,	// (0x0006d822) cntbar_detail_list_event_pane_g5

0x9b36,	// (0x0006d83a) cntbar_detail_list_event_pane_g6_ParamLimits

0x9b36,	// (0x0006d83a) cntbar_detail_list_event_pane_g6

0x9b78,	// (0x0006d87c) cntbar_detail_list_event_pane_t3_ParamLimits

0x9b78,	// (0x0006d87c) cntbar_detail_list_event_pane_t3

0x9b8a,	// (0x0006d88e) popup_notif_wgt_window_ParamLimits

0x9b8a,	// (0x0006d88e) popup_notif_wgt_window

0x9ba3,	// (0x0006d8a7) popup_submenu_window_cp01_ParamLimits

0x9ba3,	// (0x0006d8a7) popup_submenu_window_cp01

0xce13,	// (0x00070b17) bg_popup_window_pane_cp10

0xbc25,	// (0x0006f929) listscroll_notif_wgt_pane

0xbc37,	// (0x0006f93b) list_notif_wgt_window

0xbc40,	// (0x0006f944) scroll_pane_cp033

0x98ab,	// (0x0006d5af) list_notif_wgt_row_pane_ParamLimits

0x98ab,	// (0x0006d5af) list_notif_wgt_row_pane

0xbc49,	// (0x0006f94d) aid_size_list_notif_wgt_del

0xbc56,	// (0x0006f95a) list_notif_wgt_row_pane_g1

0xbc62,	// (0x0006f966) list_notif_wgt_row_pane_g2

0xbc6e,	// (0x0006f972) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00073bad) list_notif_wgt_row_pane_g

0xbc7b,	// (0x0006f97f) list_notif_wgt_row_pane_t1

0xbc90,	// (0x0006f994) list_notif_wgt_row_pane_t2

0xbca2,	// (0x0006f9a6) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00073bb4) list_notif_wgt_row_pane_t

0x6c38,	// (0x0006a93c) list_recal_day_event_pane_g1

0xbcb4,	// (0x0006f9b8) list_recal_day_event_pane_t1

0xa46f,	// (0x0006e173) bg_button_pane_cp045

0x9bb9,	// (0x0006d8bd) cntbar_detail_btn_pane_t1

0xe268,	// (0x00071f6c) main_callh_pane_ParamLimits

0xe268,	// (0x00071f6c) main_callh_pane

0xa46f,	// (0x0006e173) main_coverflow0_pane

0xa46f,	// (0x0006e173) main_wgtman_pane

0x8762,	// (0x0006c466) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8762,	// (0x0006c466) main_fs_bigclock_unlock_btn_pane

0x918e,	// (0x0006ce92) bg_button_pane_cp16

0x919e,	// (0x0006cea2) cell_tport_appsw_pane_g3

0x9bc7,	// (0x0006d8cb) cf0_flow_pane_ParamLimits

0x9bc7,	// (0x0006d8cb) cf0_flow_pane

0xbcc3,	// (0x0006f9c7) listscroll_cf0_pane

0xbcce,	// (0x0006f9d2) main_cf0_pane_g1

0x9bdc,	// (0x0006d8e0) main_cf0_pane_t1_ParamLimits

0x9bdc,	// (0x0006d8e0) main_cf0_pane_t1

0x9bf3,	// (0x0006d8f7) main_cf0_pane_t2_ParamLimits

0x9bf3,	// (0x0006d8f7) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00073bc0) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00073bc0) main_cf0_pane_t

0xbce0,	// (0x0006f9e4) scroll_pane_cp11

0x9c0a,	// (0x0006d90e) cf0_flow_pane_g1

0x9c12,	// (0x0006d916) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00073bc5) cf0_flow_pane_g

0x9c1a,	// (0x0006d91e) cf0_flow_pane_t1

0xa46f,	// (0x0006e173) main_call6_pane

0xa46f,	// (0x0006e173) main_calllock_pane

0x9c28,	// (0x0006d92c) call6_btn_grp_pane_ParamLimits

0x9c28,	// (0x0006d92c) call6_btn_grp_pane

0x9c42,	// (0x0006d946) call6_pane_g1_ParamLimits

0x9c42,	// (0x0006d946) call6_pane_g1

0x9c57,	// (0x0006d95b) popup_call6_1st_window_ParamLimits

0x9c57,	// (0x0006d95b) popup_call6_1st_window

0x9c68,	// (0x0006d96c) popup_call6_2nd_window_ParamLimits

0x9c68,	// (0x0006d96c) popup_call6_2nd_window

0x9c79,	// (0x0006d97d) cell_call6_btn_pane_ParamLimits

0x9c79,	// (0x0006d97d) cell_call6_btn_pane

0xce13,	// (0x00070b17) bg_popup_call2_in_pane_cp03

0xbceb,	// (0x0006f9ef) popup_call6_1st_window_g1

0xbcf3,	// (0x0006f9f7) popup_call6_1st_window_g2

0xbcfb,	// (0x0006f9ff) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00073bca) popup_call6_1st_window_g

0xbd03,	// (0x0006fa07) popup_call6_1st_window_t1

0xbd12,	// (0x0006fa16) popup_call6_1st_window_t2

0xbd22,	// (0x0006fa26) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00073bd1) popup_call6_1st_window_t

0xce13,	// (0x00070b17) bg_popup_call2_in_pane_cp04

0xbceb,	// (0x0006f9ef) popup_call6_2nd_window_g1

0xbcf3,	// (0x0006f9f7) popup_call6_2nd_window_g2

0xbcfb,	// (0x0006f9ff) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00073bca) popup_call6_2nd_window_g

0xbd03,	// (0x0006fa07) popup_call6_2nd_window_t1

0xa46f,	// (0x0006e173) bg_button_pane_cp15

0xbd32,	// (0x0006fa36) cell_call6_btn_pane_g1

0xbd3b,	// (0x0006fa3f) cell_call6_btn_pane_t1

0x9c8d,	// (0x0006d991) listscroll_wgtman_pane_ParamLimits

0x9c8d,	// (0x0006d991) listscroll_wgtman_pane

0x9cb0,	// (0x0006d9b4) wgtman_btn_pane_ParamLimits

0x9cb0,	// (0x0006d9b4) wgtman_btn_pane

0xccca,	// (0x000709ce) aid_scroll_copy1

0xbd4a,	// (0x0006fa4e) list_wgtman_pane

0x9cf3,	// (0x0006d9f7) wgtman_btn_pane_g1_ParamLimits

0x9cf3,	// (0x0006d9f7) wgtman_btn_pane_g1

0x9d1f,	// (0x0006da23) wgtman_btn_pane_t1_ParamLimits

0x9d1f,	// (0x0006da23) wgtman_btn_pane_t1

0xbd54,	// (0x0006fa58) wgtman_btn_pane_t2_ParamLimits

0xbd54,	// (0x0006fa58) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00073bd8) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00073bd8) wgtman_btn_pane_t

0x9d5c,	// (0x0006da60) listrow_wgtman_pane_ParamLimits

0x9d5c,	// (0x0006da60) listrow_wgtman_pane

0x9d6e,	// (0x0006da72) listrow_wgtman_pane_g1

0x9d7b,	// (0x0006da7f) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00073bdd) listrow_wgtman_pane_g

0x9d99,	// (0x0006da9d) listrow_wgtman_pane_t1

0x9db1,	// (0x0006dab5) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00073be2) listrow_wgtman_pane_t

0x9dd7,	// (0x0006dadb) wait_bar_pane_cp09

0xbd6b,	// (0x0006fa6f) main_calllock_btn_pane

0xbd75,	// (0x0006fa79) main_calllock_pane_g1

0xa46f,	// (0x0006e173) bg_button_pane_cp17

0xbd81,	// (0x0006fa85) main_calllock_btn_pane_g1

0xbd8a,	// (0x0006fa8e) main_calllock_btn_pane_t1

0xa46f,	// (0x0006e173) main_dialer3_pane

0xa46f,	// (0x0006e173) main_fmrd2_pane

0xe670,	// (0x00072374) main_fs_bigclock_unlock_btn_pane_g1

0xbda1,	// (0x0006faa5) main_fs_bigclock_unlock_btn_pane_t1

0x9de9,	// (0x0006daed) area_fmrd2_info_pane_ParamLimits

0x9de9,	// (0x0006daed) area_fmrd2_info_pane

0x9dfa,	// (0x0006dafe) area_fmrd2_visual_pane_ParamLimits

0x9dfa,	// (0x0006dafe) area_fmrd2_visual_pane

0x9e08,	// (0x0006db0c) fmrd2_indi_pane_ParamLimits

0x9e08,	// (0x0006db0c) fmrd2_indi_pane

0x9e15,	// (0x0006db19) area_fmrd2_visual_pane_g1

0x9e1d,	// (0x0006db21) area_fmrd2_visual_pane_t1

0x9e2d,	// (0x0006db31) area_fmrd2_visual_pane_t2

0x9e3d,	// (0x0006db41) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00073bec) area_fmrd2_visual_pane_t

0x9e4d,	// (0x0006db51) area_fmrd2_info_pane_g1

0x9e55,	// (0x0006db59) area_fmrd2_info_pane_t1

0x9e65,	// (0x0006db69) area_fmrd2_info_pane_t2

0x9e75,	// (0x0006db79) area_fmrd2_info_pane_t3

0x9e85,	// (0x0006db89) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00073bf3) area_fmrd2_info_pane_t

0x9e93,	// (0x0006db97) fmrd2_indi_pane_t1

0x9ea3,	// (0x0006dba7) fmrd2_indi_pane_t2

0x9eb3,	// (0x0006dbb7) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00073bfc) fmrd2_indi_pane_t

0xb3b3,	// (0x0006f0b7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb3b3,	// (0x0006f0b7) list_single_fs_bigclock_indicator_pane_g5

0xb45a,	// (0x0006f15e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb45a,	// (0x0006f15e) list_single_fs_bigclock_indicator_pane_t5

0x93d0,	// (0x0006d0d4) aid_cell_bcale_month_pane_ParamLimits

0x93d0,	// (0x0006d0d4) aid_cell_bcale_month_pane

0x93f7,	// (0x0006d0fb) bcale_month_pane_ParamLimits

0x93f7,	// (0x0006d0fb) bcale_month_pane

0x941b,	// (0x0006d11f) bcale_preview_pane_ParamLimits

0x941b,	// (0x0006d11f) bcale_preview_pane

0xbb58,	// (0x0006f85c) list_single_fs_bigclock_pane_t1_ParamLimits

0xbb77,	// (0x0006f87b) list_single_fs_bigclock_pane_t2_ParamLimits

0xbb77,	// (0x0006f87b) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00073b7e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00073b7e) list_single_fs_bigclock_pane_t

0xbd99,	// (0x0006fa9d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00073be7) main_fs_bigclock_unlock_btn_pane_g

0x9ec3,	// (0x0006dbc7) aid_dia3_key_size_ParamLimits

0x9ec3,	// (0x0006dbc7) aid_dia3_key_size

0x9ed2,	// (0x0006dbd6) aid_dia3_listrow_size_ParamLimits

0x9ed2,	// (0x0006dbd6) aid_dia3_listrow_size

0x9ee7,	// (0x0006dbeb) dia3_keypad_fun_pane_ParamLimits

0x9ee7,	// (0x0006dbeb) dia3_keypad_fun_pane

0x9f03,	// (0x0006dc07) dia3_keypad_num_pane_ParamLimits

0x9f03,	// (0x0006dc07) dia3_keypad_num_pane

0x9f1e,	// (0x0006dc22) dia3_listscroll_pane_ParamLimits

0x9f1e,	// (0x0006dc22) dia3_listscroll_pane

0x9f31,	// (0x0006dc35) dia3_numentry_pane_ParamLimits

0x9f31,	// (0x0006dc35) dia3_numentry_pane

0xbdaf,	// (0x0006fab3) dia3_list_pane

0xbdba,	// (0x0006fabe) scroll_pane_cp12

0xa46f,	// (0x0006e173) bg_dia3_numentry_pane

0x9f45,	// (0x0006dc49) dia3_numentry_pane_t1

0x9f54,	// (0x0006dc58) cell_dia3_key_num_pane

0x9f5c,	// (0x0006dc60) cell_dia3_key0_fun_pane_ParamLimits

0x9f5c,	// (0x0006dc60) cell_dia3_key0_fun_pane

0x9f70,	// (0x0006dc74) cell_dia3_key1_fun_pane_ParamLimits

0x9f70,	// (0x0006dc74) cell_dia3_key1_fun_pane

0x9f88,	// (0x0006dc8c) dia3_listrow_pane

0xb0b5,	// (0x0006edb9) bg_dia3_numentry_pane_g1

0xa46f,	// (0x0006e173) bg_button_pane_cp21

0xbdc5,	// (0x0006fac9) cell_dia3_key_num_pane_t1

0xbdd3,	// (0x0006fad7) cell_dia3_key_num_pane_t2

0xbde2,	// (0x0006fae6) cell_dia3_key_num_pane_t3

0xbdf1,	// (0x0006faf5) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00073c03) cell_dia3_key_num_pane_t

0xa46f,	// (0x0006e173) bg_button_pane_cp19

0x9f9a,	// (0x0006dc9e) cell_dia3_key0_fun_pane_g1

0xa46f,	// (0x0006e173) bg_button_pane_cp20

0x9fa2,	// (0x0006dca6) cell_dia3_key1_fun_pane_g1

0x9faa,	// (0x0006dcae) area_left_week_number_pane

0x9fb6,	// (0x0006dcba) area_top_day_name_pane

0x9fc9,	// (0x0006dccd) frame_month_view_pane

0xbe00,	// (0x0006fb04) grid_month_view_pane

0x9fdc,	// (0x0006dce0) cell_top_day_name_pane_ParamLimits

0x9fdc,	// (0x0006dce0) cell_top_day_name_pane

0xa009,	// (0x0006dd0d) cell_area_left_week_number_pane_ParamLimits

0xa009,	// (0x0006dd0d) cell_area_left_week_number_pane

0xa01d,	// (0x0006dd21) cell_month_view_pane_ParamLimits

0xa01d,	// (0x0006dd21) cell_month_view_pane

0xbe0e,	// (0x0006fb12) frm_month_g1

0xa04a,	// (0x0006dd4e) frm_month_g2

0xa05d,	// (0x0006dd61) frm_month_g3

0xa070,	// (0x0006dd74) frm_month_g4

0xa083,	// (0x0006dd87) frm_month_g5

0xa096,	// (0x0006dd9a) frm_month_g6

0xa0a9,	// (0x0006ddad) frm_month_g7

0xbe1b,	// (0x0006fb1f) frm_month_g8

0xa0bc,	// (0x0006ddc0) frm_month_g9

0xa0cc,	// (0x0006ddd0) frm_month_g10

0xa0dc,	// (0x0006dde0) frm_month_g11

0xa0ec,	// (0x0006ddf0) frm_month_g12

0xa0fe,	// (0x0006de02) frm_month_g13

0xa110,	// (0x0006de14) frm_month_g14

0xa124,	// (0x0006de28) frm_month_g15

0xa138,	// (0x0006de3c) frm_month_g16

0x000f,

0xff08,	// (0x00073c0c) frm_month_g

0xbe28,	// (0x0006fb2c) cell_top_day_name_pane_t1

0xa14c,	// (0x0006de50) cell_area_left_week_number_pane_g1

0xa158,	// (0x0006de5c) cell_area_left_week_number_pane_t1

0xe8dc,	// (0x000725e0) cell_month_view_pane_g1

0xa16b,	// (0x0006de6f) cell_month_view_pane_t1

0xa46f,	// (0x0006e173) main_fps_pane

0xb64a,	// (0x0006f34e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb64a,	// (0x0006f34e) cmail_ddmenu_btn02_pane_cp1

0xb666,	// (0x0006f36a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb666,	// (0x0006f36a) cmail_ddmenu_btn02_pane_cp2

0x97ca,	// (0x0006d4ce) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x97ca,	// (0x0006d4ce) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00073b31) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00073b31) cmail_ddmenu_btn02_pane_g

0x97e8,	// (0x0006d4ec) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x97e8,	// (0x0006d4ec) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00073b36) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00073b36) cmail_ddmenu_btn02_pane_t

0xa17e,	// (0x0006de82) fps_text_pane_ParamLimits

0xa17e,	// (0x0006de82) fps_text_pane

0xa195,	// (0x0006de99) main_fps_pane_g1_ParamLimits

0xa195,	// (0x0006de99) main_fps_pane_g1

0xa1af,	// (0x0006deb3) wait_bar_pane_cp010_ParamLimits

0xa1af,	// (0x0006deb3) wait_bar_pane_cp010

0xa1c0,	// (0x0006dec4) fps_text_pane_t1_ParamLimits

0xa1c0,	// (0x0006dec4) fps_text_pane_t1

0xae1e,	// (0x0006eb22) cam4_image_uncrop_pane_g1

0xae27,	// (0x0006eb2b) cam4_image_uncrop_pane_g2

0x5d95,	// (0x00069a99) cam4_image_uncrop_pane_g3

0x5d9e,	// (0x00069aa2) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x000735f8) cam4_image_uncrop_pane_g

0x9f88,	// (0x0006dc8c) dia3_listrow_pane_ParamLimits

0xa46f,	// (0x0006e173) main_phob2_pane

0x915f,	// (0x0006ce63) cell_tport_appsw_pane_cp02_ParamLimits

0x915f,	// (0x0006ce63) cell_tport_appsw_pane_cp02

0x9173,	// (0x0006ce77) cell_tport_appsw_pane_cp03_ParamLimits

0x9173,	// (0x0006ce77) cell_tport_appsw_pane_cp03

0xa46f,	// (0x0006e173) phob2_contact_card_pane

0xa46f,	// (0x0006e173) phob2_listscroll_pane

0xbe3b,	// (0x0006fb3f) phob2_list_pane

0xbe43,	// (0x0006fb47) scroll_pane_cp034

0xa1d8,	// (0x0006dedc) phob2_cc_data_pane_ParamLimits

0xa1d8,	// (0x0006dedc) phob2_cc_data_pane

0xa1f7,	// (0x0006defb) phob2_cc_listscroll_pane_ParamLimits

0xa1f7,	// (0x0006defb) phob2_cc_listscroll_pane

0xa215,	// (0x0006df19) list_double_large_graphic_phob2_pane_ParamLimits

0xa215,	// (0x0006df19) list_double_large_graphic_phob2_pane

0xa227,	// (0x0006df2b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa227,	// (0x0006df2b) list_double_large_graphic_phob2_pane_g1

0xa23d,	// (0x0006df41) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa23d,	// (0x0006df41) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00073c2d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00073c2d) list_double_large_graphic_phob2_pane_g

0xa249,	// (0x0006df4d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa249,	// (0x0006df4d) list_double_large_graphic_phob2_pane_t1

0xa25e,	// (0x0006df62) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa25e,	// (0x0006df62) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00073c32) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00073c32) list_double_large_graphic_phob2_pane_t

0xa46f,	// (0x0006e173) list_highlight_pane_cp024

0xbe4b,	// (0x0006fb4f) phob2_cc_button_pane

0xa270,	// (0x0006df74) phob2_cc_data_pane_g1_ParamLimits

0xa270,	// (0x0006df74) phob2_cc_data_pane_g1

0xa285,	// (0x0006df89) phob2_cc_data_pane_g2_ParamLimits

0xa285,	// (0x0006df89) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00073c37) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00073c37) phob2_cc_data_pane_g

0xa297,	// (0x0006df9b) phob2_cc_data_pane_t1_ParamLimits

0xa297,	// (0x0006df9b) phob2_cc_data_pane_t1

0xa2af,	// (0x0006dfb3) phob2_cc_data_pane_t2_ParamLimits

0xa2af,	// (0x0006dfb3) phob2_cc_data_pane_t2

0xa2c7,	// (0x0006dfcb) phob2_cc_data_pane_t3_ParamLimits

0xa2c7,	// (0x0006dfcb) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00073c3c) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00073c3c) phob2_cc_data_pane_t

0xbe53,	// (0x0006fb57) phob2_cc_list_pane_ParamLimits

0xbe53,	// (0x0006fb57) phob2_cc_list_pane

0x6fa2,	// (0x0006aca6) scroll_pane_cp035_ParamLimits

0x6fa2,	// (0x0006aca6) scroll_pane_cp035

0xe24e,	// (0x00071f52) bg_button_pane_cp033

0xbe5f,	// (0x0006fb63) phob2_cc_button_pane_g1

0xbe6b,	// (0x0006fb6f) phob2_cc_button_pane_t1

0xbe80,	// (0x0006fb84) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00073c43) phob2_cc_button_pane_t

0xa2df,	// (0x0006dfe3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa2df,	// (0x0006dfe3) list_double_large_graphic_phob2_cc_pane

0xa2f1,	// (0x0006dff5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa2f1,	// (0x0006dff5) list_double_large_graphic_phob2_cc_pane_g1

0xa2fd,	// (0x0006e001) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa2fd,	// (0x0006e001) list_double_large_graphic_phob2_cc_pane_g2

0xa309,	// (0x0006e00d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa309,	// (0x0006e00d) list_double_large_graphic_phob2_cc_pane_g3

0xa315,	// (0x0006e019) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa315,	// (0x0006e019) list_double_large_graphic_phob2_cc_pane_g4

0xa321,	// (0x0006e025) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa321,	// (0x0006e025) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00073c48) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00073c48) list_double_large_graphic_phob2_cc_pane_g

0xa32d,	// (0x0006e031) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa32d,	// (0x0006e031) list_double_large_graphic_phob2_cc_pane_t1

0xa356,	// (0x0006e05a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa356,	// (0x0006e05a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00073c53) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00073c53) list_double_large_graphic_phob2_cc_pane_t

0xbe92,	// (0x0006fb96) list_highlight_pane_cp025_ParamLimits

0xbe92,	// (0x0006fb96) list_highlight_pane_cp025

0xe24e,	// (0x00071f52) bg_button_pane_cp033_ParamLimits

0xbe5f,	// (0x0006fb63) phob2_cc_button_pane_g1_ParamLimits

0xbe6b,	// (0x0006fb6f) phob2_cc_button_pane_t1_ParamLimits

0xbe80,	// (0x0006fb84) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00073c43) phob2_cc_button_pane_t_ParamLimits

0x063c,	// (0x00064340) popup_wgtman_window

0x65f3,	// (0x0006a2f7) scroll_pane_cp038

0x9cd5,	// (0x0006d9d9) wgtman_btn_pane_cp_01_ParamLimits

0x9cd5,	// (0x0006d9d9) wgtman_btn_pane_cp_01

0xbea0,	// (0x0006fba4) wgtman_content_pane

0xbea9,	// (0x0006fbad) wgtman_heading_pane

0xa46f,	// (0x0006e173) bg_heading_pane_cp02

0xbeb2,	// (0x0006fbb6) wgtman_heading_pane_g1

0xbeba,	// (0x0006fbbe) wgtman_heading_pane_t1

0xbec8,	// (0x0006fbcc) scroll_pane_cp036

0xbed0,	// (0x0006fbd4) wgtman_list_pane

0xbed8,	// (0x0006fbdc) wgtman_list_pane_t1_ParamLimits

0xbed8,	// (0x0006fbdc) wgtman_list_pane_t1

0xae0a,	// (0x0006eb0e) cam4_grid_pane

0x6d20,	// (0x0006aa24) bg_button_pane_cp015_ParamLimits

0x6d32,	// (0x0006aa36) bg_button_pane_cp016_ParamLimits

0x6d45,	// (0x0006aa49) bg_button_pane_cp017_ParamLimits

0x6da9,	// (0x0006aaad) popup_vitu2_query_window_g3_ParamLimits

0x6da9,	// (0x0006aaad) popup_vitu2_query_window_g3

0x6e66,	// (0x0006ab6a) popup_vitu2_query_window_t6_ParamLimits

0x6e66,	// (0x0006ab6a) popup_vitu2_query_window_t6

0x6e91,	// (0x0006ab95) popup_vitu2_query_window_t7_ParamLimits

0x6e91,	// (0x0006ab95) popup_vitu2_query_window_t7

0xae1e,	// (0x0006eb22) cam4_grid_pane_g1

0xae27,	// (0x0006eb2b) cam4_grid_pane_g2

0xbef2,	// (0x0006fbf6) cam4_grid_pane_g3

0xbefb,	// (0x0006fbff) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00073c58) cam4_grid_pane_g

0x1631,	// (0x00065335) aid_placing_vt_slider_lsc_ParamLimits

0x193c,	// (0x00065640) vidtel_button_pane_ParamLimits

0x193c,	// (0x00065640) vidtel_button_pane

0xbf06,	// (0x0006fc0a) bg_button_pane_cp034

0xa37f,	// (0x0006e083) vidtel_button_pane_g1

0xbf10,	// (0x0006fc14) vidtel_button_pane_t1

0x69e7,	// (0x0006a6eb) aid_size_vtel_slider_touch

0x6fa2,	// (0x0006aca6) scroll_pane_cp039

0xb0f3,	// (0x0006edf7) ncim_query_button_pane_cp01_ParamLimits

0xb112,	// (0x0006ee16) ncimui_query_pane_g1_ParamLimits

0xe24e,	// (0x00071f52) input_focus_pane_cp012_ParamLimits

0xb137,	// (0x0006ee3b) ncim_query_entry_pane_t1_ParamLimits

0x6fa2,	// (0x0006aca6) scroll_pane_cp039_ParamLimits

0x2a63,	// (0x00066767) navi_pane_bcale_mc_g1

0x2a6b,	// (0x0006676f) navi_pane_bcale_mc_t1

0xb6af,	// (0x0006f3b3) main_sp_fs_email_pane_g1

0xb6bb,	// (0x0006f3bf) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x000739ef) main_sp_fs_email_pane_g

0xb8f9,	// (0x0006f5fd) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb8f9,	// (0x0006f5fd) list_single_cale_mrui_row_pane_g3

0x9869,	// (0x0006d56d) list_single_recal_day_pane_g5_event_pane

0x987f,	// (0x0006d583) list_single_recal_day_pane_g7

0xbf1e,	// (0x0006fc22) list_recal_day_event_pane_cp01

0xbf27,	// (0x0006fc2b) list_recal_vselct_arw_lo_pane_cp01

0xbf2f,	// (0x0006fc33) list_recal_vselct_arw_up_pane_cp01

0xbf37,	// (0x0006fc3b) list_recal_vselct_pane_cp01

0x6c38,	// (0x0006a93c) list_recal_day_event_pane_cp01_g1

0xa387,	// (0x0006e08b) list_recal_day_event_pane_cp01_t1

0x9887,	// (0x0006d58b) list_single_recal_day_pane_t1_ParamLimits

0x9899,	// (0x0006d59d) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00073b46) list_single_recal_day_pane_t_ParamLimits

0xc224,	// (0x0006ff28) bg_notes_pane_ParamLimits

0xc2c7,	// (0x0006ffcb) list_notes_pane_ParamLimits

0x0985,	// (0x00064689) scroll_pane_cp06_ParamLimits

0xc2e9,	// (0x0006ffed) main_notes_pane_ParamLimits

0xa46f,	// (0x0006e173) main_welc_pane

0xa395,	// (0x0006e099) main_welc_body_pane_ParamLimits

0xa395,	// (0x0006e099) main_welc_body_pane

0xa3b3,	// (0x0006e0b7) main_welc_opti_pane_ParamLimits

0xa3b3,	// (0x0006e0b7) main_welc_opti_pane

0xa3f8,	// (0x0006e0fc) main_welc_pane_t1_ParamLimits

0xa3f8,	// (0x0006e0fc) main_welc_pane_t1

0xa416,	// (0x0006e11a) main_welc_body_row_pane_ParamLimits

0xa416,	// (0x0006e11a) main_welc_body_row_pane

0xbf41,	// (0x0006fc45) main_welc_opti_row_pane_ParamLimits

0xbf41,	// (0x0006fc45) main_welc_opti_row_pane

0xbf4f,	// (0x0006fc53) main_welc_opti_row_pane_g1

0xbf57,	// (0x0006fc5b) main_welc_opti_row_pane_t1

0xbf67,	// (0x0006fc6b) main_welc_body_row_pane_t1

0xbc2f,	// (0x0006f933) popup_notif_wgt_heading_pane

0xbc49,	// (0x0006f94d) aid_size_list_notif_wgt_del_ParamLimits

0xbc56,	// (0x0006f95a) list_notif_wgt_row_pane_g1_ParamLimits

0xbc62,	// (0x0006f966) list_notif_wgt_row_pane_g2_ParamLimits

0xbc6e,	// (0x0006f972) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00073bad) list_notif_wgt_row_pane_g_ParamLimits

0xbc7b,	// (0x0006f97f) list_notif_wgt_row_pane_t1_ParamLimits

0xbc90,	// (0x0006f994) list_notif_wgt_row_pane_t2_ParamLimits

0xbca2,	// (0x0006f9a6) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00073bb4) list_notif_wgt_row_pane_t_ParamLimits

0x9d6e,	// (0x0006da72) listrow_wgtman_pane_g1_ParamLimits

0x9d7b,	// (0x0006da7f) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00073bdd) listrow_wgtman_pane_g_ParamLimits

0x9d99,	// (0x0006da9d) listrow_wgtman_pane_t1_ParamLimits

0x9db1,	// (0x0006dab5) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00073be2) listrow_wgtman_pane_t_ParamLimits

0x9dd7,	// (0x0006dadb) wait_bar_pane_cp09_ParamLimits

0xa46f,	// (0x0006e173) bg_popup_heading_pane_cp02

0xbf76,	// (0x0006fc7a) popup_notif_wgt_heading_pane_g1

0xbf7e,	// (0x0006fc82) popup_notif_wgt_heading_pane_t1

0xa46f,	// (0x0006e173) main_vids_pane

0xa46f,	// (0x0006e173) vids_listscroll_pane

0xa42a,	// (0x0006e12e) scroll_pane_cp040

0xa46f,	// (0x0006e173) vids_list_pane

0xa435,	// (0x0006e139) vids_list_double_pane_ParamLimits

0xa435,	// (0x0006e139) vids_list_double_pane

0xa446,	// (0x0006e14a) vids_list_double_pane_g1

0xa44f,	// (0x0006e153) vids_list_double_pane_t1

0xa45f,	// (0x0006e163) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00073c66) vids_list_double_pane_t

0xa4e7,	// (0x0006e1eb) main_ncimui_pane_ParamLimits

0x82c8,	// (0x0006bfcc) main_ncimui_pane_g1_ParamLimits

0x82d4,	// (0x0006bfd8) main_ncimui_pane_g2_ParamLimits

0x82d4,	// (0x0006bfd8) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x000738f4) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x000738f4) main_ncimui_pane_g

0xa3ce,	// (0x0006e0d2) main_welc_pane_g1_ParamLimits

0xa3ce,	// (0x0006e0d2) main_welc_pane_g1

0xa3e3,	// (0x0006e0e7) main_welc_pane_g2_ParamLimits

0xa3e3,	// (0x0006e0e7) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00073c61) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00073c61) main_welc_pane_g

0xc224,	// (0x0006ff28) listscroll_mce_pane_ParamLimits

0x2b3d,	// (0x00066841) wait_bar_pane_cp10

0xe25c,	// (0x00071f60) main_cale_day_pane_ParamLimits

0xe25c,	// (0x00071f60) main_cale_week_pane_ParamLimits

0xc224,	// (0x0006ff28) main_messa_pane_ParamLimits

0x50c5,	// (0x00068dc9) main_clock2_btn_pane_ParamLimits

0x50c5,	// (0x00068dc9) main_clock2_btn_pane

0xeacc,	// (0x000727d0) main_clock2_btn_pane_cp01_ParamLimits

0xeacc,	// (0x000727d0) main_clock2_btn_pane_cp01

0xb8ca,	// (0x0006f5ce) list_cale_mrui_pane_ParamLimits

0xbcd8,	// (0x0006f9dc) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00073bbb) main_cf0_pane_g

0x9faa,	// (0x0006dcae) area_left_week_number_pane_ParamLimits

0x9fb6,	// (0x0006dcba) area_top_day_name_pane_ParamLimits

0x9fc9,	// (0x0006dccd) frame_month_view_pane_ParamLimits

0xbe00,	// (0x0006fb04) grid_month_view_pane_ParamLimits

0xbe0e,	// (0x0006fb12) frm_month_g1_ParamLimits

0xa04a,	// (0x0006dd4e) frm_month_g2_ParamLimits

0xa05d,	// (0x0006dd61) frm_month_g3_ParamLimits

0xa070,	// (0x0006dd74) frm_month_g4_ParamLimits

0xa083,	// (0x0006dd87) frm_month_g5_ParamLimits

0xa096,	// (0x0006dd9a) frm_month_g6_ParamLimits

0xa0a9,	// (0x0006ddad) frm_month_g7_ParamLimits

0xbe1b,	// (0x0006fb1f) frm_month_g8_ParamLimits

0xa0bc,	// (0x0006ddc0) frm_month_g9_ParamLimits

0xa0cc,	// (0x0006ddd0) frm_month_g10_ParamLimits

0xa0dc,	// (0x0006dde0) frm_month_g11_ParamLimits

0xa0ec,	// (0x0006ddf0) frm_month_g12_ParamLimits

0xa0fe,	// (0x0006de02) frm_month_g13_ParamLimits

0xa110,	// (0x0006de14) frm_month_g14_ParamLimits

0xa124,	// (0x0006de28) frm_month_g15_ParamLimits

0xa138,	// (0x0006de3c) frm_month_g16_ParamLimits

0xff08,	// (0x00073c0c) frm_month_g_ParamLimits

0xbe28,	// (0x0006fb2c) cell_top_day_name_pane_t1_ParamLimits

0xa14c,	// (0x0006de50) cell_area_left_week_number_pane_g1_ParamLimits

0xa158,	// (0x0006de5c) cell_area_left_week_number_pane_t1_ParamLimits

0xe8dc,	// (0x000725e0) cell_month_view_pane_g1_ParamLimits

0xa16b,	// (0x0006de6f) cell_month_view_pane_t1_ParamLimits

0xc21c,	// (0x0006ff20) main_clock2_btn_pane_g1

0xbf8c,	// (0x0006fc90) main_clock2_btn_pane_t1

0xe24e,	// (0x00071f52) listscroll_cmail_pane_ParamLimits

0xb6af,	// (0x0006f3b3) main_sp_fs_email_pane_g1_ParamLimits

0xb6bb,	// (0x0006f3bf) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x000739ef) main_sp_fs_email_pane_g_ParamLimits

0xb9d8,	// (0x0006f6dc) list_recal_day_pane_ParamLimits

0xb9e9,	// (0x0006f6ed) mian_recal_day_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small

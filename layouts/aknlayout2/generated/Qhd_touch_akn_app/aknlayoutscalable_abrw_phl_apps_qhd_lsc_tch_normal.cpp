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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0002b7d7 };

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
0x17ff,	// (0x0002cfd6) Screen

0x180b,	// (0x0002cfe2) application_window

0x1817,	// (0x0002cfee) area_bottom_pane_ParamLimits

0x1817,	// (0x0002cfee) area_bottom_pane

0x03b7,	// (0x0002bb8e) area_top_pane_ParamLimits

0x03b7,	// (0x0002bb8e) area_top_pane

0xae81,	// (0x00036658) call_video_uplink_pane_ParamLimits

0xae81,	// (0x00036658) call_video_uplink_pane

0x0445,	// (0x0002bc1c) main_pane_ParamLimits

0x0445,	// (0x0002bc1c) main_pane

0xdda7,	// (0x0003957e) context_pane

0x3fdb,	// (0x0002f7b2) navi_pane

0x400d,	// (0x0002f7e4) popup_cale_events_window_ParamLimits

0x400d,	// (0x0002f7e4) popup_cale_events_window

0xddba,	// (0x00039591) popup_mup_playback_window

0x4025,	// (0x0002f7fc) signal_pane

0xbd9a,	// (0x00037571) main_browser_pane

0xbf73,	// (0x0003774a) main_burst_pane

0x0841,	// (0x0002c018) main_calc_pane

0xdd9b,	// (0x00039572) main_cale_day_pane

0x0855,	// (0x0002c02c) main_cale_month_pane

0xdd9b,	// (0x00039572) main_cale_week_pane

0xbf73,	// (0x0003774a) main_call_pane

0xba44,	// (0x0003721b) main_call_poc_pane

0xbf73,	// (0x0003774a) main_camera_pane

0xbf73,	// (0x0003774a) main_chi_dic_pane

0xc750,	// (0x00037f27) main_clock_pane

0xba44,	// (0x0003721b) main_fmradio_pane

0xbf73,	// (0x0003774a) main_graph_messa_pane

0xba44,	// (0x0003721b) main_help_pane

0xbd9a,	// (0x00037571) main_im_pane

0xbc9f,	// (0x00037476) main_image_pane_ParamLimits

0xbc9f,	// (0x00037476) main_image_pane

0xba44,	// (0x0003721b) main_location2_pane

0xbf73,	// (0x0003774a) main_location_pane

0xbc9f,	// (0x00037476) main_messa_pane

0xba44,	// (0x0003721b) main_mp2_pane

0xbf73,	// (0x0003774a) main_mp_pane

0xba44,	// (0x0003721b) main_msg_pane

0xba44,	// (0x0003721b) main_mup_eq_pane

0xba44,	// (0x0003721b) main_mup_pane

0xbd9a,	// (0x00037571) main_notes_pane

0xba44,	// (0x0003721b) main_pec_pane

0xba44,	// (0x0003721b) main_phob_pane

0xba44,	// (0x0003721b) main_pinb_pane

0xba44,	// (0x0003721b) main_postcard_pane

0xba44,	// (0x0003721b) main_qdial_pane

0xbf73,	// (0x0003774a) main_skin_pane

0xba44,	// (0x0003721b) main_smil2_pane

0xbf73,	// (0x0003774a) main_smil_pane

0xbf73,	// (0x0003774a) main_video_pane

0xbf73,	// (0x0003774a) main_video_tele_pane

0xbc9f,	// (0x00037476) main_viewer_pane_ParamLimits

0xbc9f,	// (0x00037476) main_viewer_pane

0xbf73,	// (0x0003774a) main_vorec_pane

0x08a7,	// (0x0002c07e) popup_blid_sat_info_window_ParamLimits

0x08a7,	// (0x0002c07e) popup_blid_sat_info_window

0x08ff,	// (0x0002c0d6) popup_dyc_status_message_window_ParamLimits

0x08ff,	// (0x0002c0d6) popup_dyc_status_message_window

0x0919,	// (0x0002c0f0) popup_grid_large_graphic_window_ParamLimits

0x0919,	// (0x0002c0f0) popup_grid_large_graphic_window

0x09d5,	// (0x0002c1ac) popup_loc_request_window_ParamLimits

0x09d5,	// (0x0002c1ac) popup_loc_request_window

0x0acb,	// (0x0002c2a2) popup_wml_address_window_ParamLimits

0x0acb,	// (0x0002c2a2) popup_wml_address_window

0x3e1f,	// (0x0002f5f6) call_muted_g1

0x3a93,	// (0x0002f26a) popup_call_audio_conf_window_ParamLimits

0x3a93,	// (0x0002f26a) popup_call_audio_conf_window

0x3e33,	// (0x0002f60a) popup_call_audio_first_window_ParamLimits

0x3e33,	// (0x0002f60a) popup_call_audio_first_window

0x3ea9,	// (0x0002f680) popup_call_audio_in_window_ParamLimits

0x3ea9,	// (0x0002f680) popup_call_audio_in_window

0x3ee5,	// (0x0002f6bc) popup_call_audio_out_window_ParamLimits

0x3ee5,	// (0x0002f6bc) popup_call_audio_out_window

0x3f1f,	// (0x0002f6f6) popup_call_audio_second_window_ParamLimits

0x3f1f,	// (0x0002f6f6) popup_call_audio_second_window

0x3f75,	// (0x0002f74c) popup_call_audio_wait_window_ParamLimits

0x3f75,	// (0x0002f74c) popup_call_audio_wait_window

0x3faa,	// (0x0002f781) popup_number_entry_window_ParamLimits

0x3faa,	// (0x0002f781) popup_number_entry_window

0xaeb7,	// (0x0003668e) bg_popup_call_pane_cp05_ParamLimits

0xaeb7,	// (0x0003668e) bg_popup_call_pane_cp05

0xaed7,	// (0x000366ae) popup_number_entry_window_t1

0xaeea,	// (0x000366c1) popup_number_entry_window_t2

0xaefc,	// (0x000366d3) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0003a81c) popup_number_entry_window_t

0xaf0e,	// (0x000366e5) text_title_cp2

0xaf21,	// (0x000366f8) bg_popup_call_pane_cp_ParamLimits

0xaf21,	// (0x000366f8) bg_popup_call_pane_cp

0xaf2f,	// (0x00036706) call_thumbnail_pane

0xaf37,	// (0x0003670e) popup_call_audio_in_window_g1_ParamLimits

0xaf37,	// (0x0003670e) popup_call_audio_in_window_g1

0xaf43,	// (0x0003671a) popup_call_audio_in_window_g2_ParamLimits

0xaf43,	// (0x0003671a) popup_call_audio_in_window_g2

0xaf4f,	// (0x00036726) popup_call_audio_in_window_g3_ParamLimits

0xaf4f,	// (0x00036726) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0003a825) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0003a825) popup_call_audio_in_window_g

0xaf5b,	// (0x00036732) popup_call_audio_in_window_t1_ParamLimits

0xaf5b,	// (0x00036732) popup_call_audio_in_window_t1

0xaf77,	// (0x0003674e) popup_call_audio_in_window_t2_ParamLimits

0xaf77,	// (0x0003674e) popup_call_audio_in_window_t2

0xaf93,	// (0x0003676a) popup_call_audio_in_window_t3_ParamLimits

0xaf93,	// (0x0003676a) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0003a82c) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0003a82c) popup_call_audio_in_window_t

0xaf21,	// (0x000366f8) bg_popup_call_pane_cp01_ParamLimits

0xaf21,	// (0x000366f8) bg_popup_call_pane_cp01

0xaf2f,	// (0x00036706) call_thumbnail_pane_cp02

0xafa6,	// (0x0003677d) call_type_pane_cp022

0xafae,	// (0x00036785) popup_call_audio_out_window_g1_ParamLimits

0xafae,	// (0x00036785) popup_call_audio_out_window_g1

0xafc0,	// (0x00036797) popup_call_audio_out_window_g2_ParamLimits

0xafc0,	// (0x00036797) popup_call_audio_out_window_g2

0xafcc,	// (0x000367a3) popup_call_audio_out_window_g3_ParamLimits

0xafcc,	// (0x000367a3) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0003a833) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0003a833) popup_call_audio_out_window_g

0xafde,	// (0x000367b5) popup_call_audio_out_window_t1_ParamLimits

0xafde,	// (0x000367b5) popup_call_audio_out_window_t1

0xaff6,	// (0x000367cd) popup_call_audio_out_window_t2_ParamLimits

0xaff6,	// (0x000367cd) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0003a83a) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0003a83a) popup_call_audio_out_window_t

0xb00b,	// (0x000367e2) bg_popup_call_pane_ParamLimits

0xb00b,	// (0x000367e2) bg_popup_call_pane

0x1890,	// (0x0002d067) call_thumbnail_pane_cp_ParamLimits

0x1890,	// (0x0002d067) call_thumbnail_pane_cp

0xb08f,	// (0x00036866) call_type_pane_cp01_ParamLimits

0xb08f,	// (0x00036866) call_type_pane_cp01

0xb0d3,	// (0x000368aa) popup_call_audio_first_window_g1_ParamLimits

0xb0d3,	// (0x000368aa) popup_call_audio_first_window_g1

0xb11f,	// (0x000368f6) popup_call_audio_first_window_g2_ParamLimits

0xb11f,	// (0x000368f6) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0003a83f) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0003a83f) popup_call_audio_first_window_g

0xb163,	// (0x0003693a) popup_call_audio_first_window_t1_ParamLimits

0xb163,	// (0x0003693a) popup_call_audio_first_window_t1

0xb989,	// (0x00037160) popup_call_audio_first_window_t4_ParamLimits

0xb989,	// (0x00037160) popup_call_audio_first_window_t4

0xba15,	// (0x000371ec) popup_call_audio_first_window_t5_ParamLimits

0xba15,	// (0x000371ec) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0003a844) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0003a844) popup_call_audio_first_window_t

0xba44,	// (0x0003721b) bg_popup_call_pane_cp02

0xba4e,	// (0x00037225) call_type_pane_cp023

0xba56,	// (0x0003722d) popup_call_audio_wait_window_g1

0xba5e,	// (0x00037235) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0003a84b) popup_call_audio_wait_window_g

0xba66,	// (0x0003723d) popup_call_audio_wait_window_t3

0xba74,	// (0x0003724b) bg_popup_call_pane_cp03_ParamLimits

0xba74,	// (0x0003724b) bg_popup_call_pane_cp03

0xbad4,	// (0x000372ab) call_thumbnail_pane_cp011_ParamLimits

0xbad4,	// (0x000372ab) call_thumbnail_pane_cp011

0xbae0,	// (0x000372b7) call_type_pane_cp034_ParamLimits

0xbae0,	// (0x000372b7) call_type_pane_cp034

0xbb1c,	// (0x000372f3) popup_call_audio_second_window_g1_ParamLimits

0xbb1c,	// (0x000372f3) popup_call_audio_second_window_g1

0xbb58,	// (0x0003732f) popup_call_audio_second_window_g2_ParamLimits

0xbb58,	// (0x0003732f) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0003a850) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0003a850) popup_call_audio_second_window_g

0xbb94,	// (0x0003736b) popup_call_audio_second_window_t1_ParamLimits

0xbb94,	// (0x0003736b) popup_call_audio_second_window_t1

0xbc15,	// (0x000373ec) popup_call_audio_second_window_t2_ParamLimits

0xbc15,	// (0x000373ec) popup_call_audio_second_window_t2

0xbc4b,	// (0x00037422) popup_call_audio_second_window_t3_ParamLimits

0xbc4b,	// (0x00037422) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0003a855) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0003a855) popup_call_audio_second_window_t

0xba44,	// (0x0003721b) bg_popup_call_pane_cp04

0xbc81,	// (0x00037458) list_conf_pane

0xbc89,	// (0x00037460) popup_call_audio_conf_window_t1

0xbc97,	// (0x0003746e) call_thumbnail_pane_g1

0xbc9f,	// (0x00037476) bg_pinb_pane_ParamLimits

0xbc9f,	// (0x00037476) bg_pinb_pane

0xbcad,	// (0x00037484) find_pinb_pane

0xbc9f,	// (0x00037476) listscroll_pinb_pane_ParamLimits

0xbc9f,	// (0x00037476) listscroll_pinb_pane

0xbcb7,	// (0x0003748e) pinb_bg_pane_g1

0xbcb7,	// (0x0003748e) pinb_bg_pane_g2

0xbcb7,	// (0x0003748e) pinb_bg_pane_g3

0xbcb7,	// (0x0003748e) pinb_bg_pane_g4

0xbcb7,	// (0x0003748e) pinb_bg_pane_g5

0xbcb7,	// (0x0003748e) pinb_bg_pane_g6

0xbcb7,	// (0x0003748e) pinb_bg_pane_g7

0xbcb7,	// (0x0003748e) pinb_bg_pane_g8

0xbcb7,	// (0x0003748e) pinb_bg_pane_g9

0xbcb7,	// (0x0003748e) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0003a85c) pinb_bg_pane_g

0xae30,	// (0x00036607) grid_pinb_pane

0xae30,	// (0x00036607) list_pinb_pane

0xbcc1,	// (0x00037498) scroll_pane_cp01_ParamLimits

0xbcc1,	// (0x00037498) scroll_pane_cp01

0xbccf,	// (0x000374a6) find_pinb_pane_g1_ParamLimits

0xbccf,	// (0x000374a6) find_pinb_pane_g1

0xbce7,	// (0x000374be) find_pinb_pane_t1

0xbcf9,	// (0x000374d0) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0003a876) find_pinb_pane_t

0xbd0e,	// (0x000374e5) input_focus_pane_cp01_ParamLimits

0xbd0e,	// (0x000374e5) input_focus_pane_cp01

0xbd1a,	// (0x000374f1) cell_pinb_pane_ParamLimits

0xbd1a,	// (0x000374f1) cell_pinb_pane

0xbd28,	// (0x000374ff) cell_pinb_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) cell_pinb_pane_g1

0xbd36,	// (0x0003750d) cell_pinb_pane_g2_ParamLimits

0xbd36,	// (0x0003750d) cell_pinb_pane_g2

0xbd36,	// (0x0003750d) cell_pinb_pane_g3_ParamLimits

0xbd36,	// (0x0003750d) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0003a87b) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0003a87b) cell_pinb_pane_g

0xba44,	// (0x0003721b) grid_highlight_pane_cp01

0xbd1a,	// (0x000374f1) list_pinb_item_pane_ParamLimits

0xbd1a,	// (0x000374f1) list_pinb_item_pane

0xae30,	// (0x00036607) list_highlight_pane_cp02

0xbd44,	// (0x0003751b) list_pinb_item_pane_g1_ParamLimits

0xbd44,	// (0x0003751b) list_pinb_item_pane_g1

0xbd36,	// (0x0003750d) list_pinb_item_pane_g2_ParamLimits

0xbd36,	// (0x0003750d) list_pinb_item_pane_g2

0xbd28,	// (0x000374ff) list_pinb_item_pane_g3_ParamLimits

0xbd28,	// (0x000374ff) list_pinb_item_pane_g3

0xbd36,	// (0x0003750d) list_pinb_item_pane_g4_ParamLimits

0xbd36,	// (0x0003750d) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0003a882) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0003a882) list_pinb_item_pane_g

0xbd52,	// (0x00037529) list_pinb_item_pane_t1_ParamLimits

0xbd52,	// (0x00037529) list_pinb_item_pane_t1

0x05de,	// (0x0002bdb5) calc_display_pane

0x0603,	// (0x0002bdda) calc_paper_pane

0x0626,	// (0x0002bdfd) grid_calc_pane

0xba44,	// (0x0003721b) bg_list_pane_cp01

0x18b4,	// (0x0002d08b) clock_g1

0x18bc,	// (0x0002d093) clock_g2

0x0001,

0xf0b4,	// (0x0003a88b) clock_g

0x18c4,	// (0x0002d09b) clock_t1_ParamLimits

0x18c4,	// (0x0002d09b) clock_t1

0x18d9,	// (0x0002d0b0) clock_t2_ParamLimits

0x18d9,	// (0x0002d0b0) clock_t2

0x18eb,	// (0x0002d0c2) clock_t3_ParamLimits

0x18eb,	// (0x0002d0c2) clock_t3

0x18fd,	// (0x0002d0d4) clock_t4_ParamLimits

0x18fd,	// (0x0002d0d4) clock_t4

0x190f,	// (0x0002d0e6) clock_t5_ParamLimits

0x190f,	// (0x0002d0e6) clock_t5

0x1924,	// (0x0002d0fb) clock_t6_ParamLimits

0x1924,	// (0x0002d0fb) clock_t6

0x1936,	// (0x0002d10d) clock_t7_ParamLimits

0x1936,	// (0x0002d10d) clock_t7

0x1948,	// (0x0002d11f) clock_t8_ParamLimits

0x1948,	// (0x0002d11f) clock_t8

0x195c,	// (0x0002d133) clock_t9_ParamLimits

0x195c,	// (0x0002d133) clock_t9

0x0008,

0xf0b9,	// (0x0003a890) clock_t_ParamLimits

0xf0b9,	// (0x0003a890) clock_t

0xbd66,	// (0x0003753d) popup_clock_analogue_window_cp02

0xbd66,	// (0x0003753d) popup_clock_digital_window_cp01

0xba44,	// (0x0003721b) listscroll_help_pane

0xba44,	// (0x0003721b) phob_pre_status_pane

0xbd6e,	// (0x00037545) grid_qdial_pane

0xbc9f,	// (0x00037476) listscroll_mce_pane

0xbc9f,	// (0x00037476) bg_notes_pane

0xbd78,	// (0x0003754f) list_notes_pane

0x1970,	// (0x0002d147) scroll_pane_cp06

0xbd86,	// (0x0003755d) bg_calc_paper_pane

0xb217,	// (0x000369ee) list_calc_pane

0xbd9a,	// (0x00037571) bg_calc_display_pane

0x0654,	// (0x0002be2b) calc_display_pane_t1

0x0669,	// (0x0002be40) calc_display_pane_t2

0xb231,	// (0x00036a08) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0003a8a3) calc_display_pane_t

0x067e,	// (0x0002be55) cell_calc_pane_ParamLimits

0x067e,	// (0x0002be55) cell_calc_pane

0xbda6,	// (0x0003757d) bg_calc_paper_pane_g1

0xbdb2,	// (0x00037589) bg_calc_paper_pane_g2

0xbdbe,	// (0x00037595) bg_calc_paper_pane_g3

0xbdca,	// (0x000375a1) bg_calc_paper_pane_g4

0xbdd6,	// (0x000375ad) bg_calc_paper_pane_g5

0x1984,	// (0x0002d15b) bg_calc_paper_pane_g6

0x1993,	// (0x0002d16a) bg_calc_paper_pane_g7

0x19a2,	// (0x0002d179) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0003a8aa) bg_calc_paper_pane_g

0x19b5,	// (0x0002d18c) calc_bg_paper_pane_g9

0x19c8,	// (0x0002d19f) list_calc_item_pane_ParamLimits

0x19c8,	// (0x0002d19f) list_calc_item_pane

0xbde2,	// (0x000375b9) list_calc_item_pane_g1

0xb243,	// (0x00036a1a) list_calc_item_pane_t1_ParamLimits

0xb243,	// (0x00036a1a) list_calc_item_pane_t1

0x06b3,	// (0x0002be8a) list_calc_item_pane_t2_ParamLimits

0x06b3,	// (0x0002be8a) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0003a8bb) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0003a8bb) list_calc_item_pane_t

0xbcb7,	// (0x0003748e) cell_calc_pane_g1

0xbdef,	// (0x000375c6) grid_highlight_pane_cp02

0x19e0,	// (0x0002d1b7) bg_calc_display_pane_g1

0x06e5,	// (0x0002bebc) bg_calc_display_pane_g2

0xbe11,	// (0x000375e8) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0003a8c5) bg_calc_display_pane_g

0x06ef,	// (0x0002bec6) cell_qdial_pane_ParamLimits

0x06ef,	// (0x0002bec6) cell_qdial_pane

0x19e9,	// (0x0002d1c0) cell_qdial_pane_g1_ParamLimits

0x19e9,	// (0x0002d1c0) cell_qdial_pane_g1

0x19ff,	// (0x0002d1d6) cell_qdial_pane_g2_ParamLimits

0x19ff,	// (0x0002d1d6) cell_qdial_pane_g2

0xbe1a,	// (0x000375f1) cell_qdial_pane_g3_ParamLimits

0xbe1a,	// (0x000375f1) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0003a8cc) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0003a8cc) cell_qdial_pane_g

0x1a26,	// (0x0002d1fd) cell_qdial_pane_t1_ParamLimits

0x1a26,	// (0x0002d1fd) cell_qdial_pane_t1

0x1a3e,	// (0x0002d215) cell_qdial_pane_t2_ParamLimits

0x1a3e,	// (0x0002d215) cell_qdial_pane_t2

0x1a51,	// (0x0002d228) cell_qdial_pane_t3_ParamLimits

0x1a51,	// (0x0002d228) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0003a8d5) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0003a8d5) cell_qdial_pane_t

0xba44,	// (0x0003721b) grid_highlight_pane_cp04

0xbe26,	// (0x000375fd) thumbnail_qdial_pane_ParamLimits

0xbe26,	// (0x000375fd) thumbnail_qdial_pane

0xbe82,	// (0x00037659) list_help_pane

0xbe8b,	// (0x00037662) scroll_pane_cp02

0xbe94,	// (0x0003766b) help_list_pane_t1_ParamLimits

0xbe94,	// (0x0003766b) help_list_pane_t1

0xb255,	// (0x00036a2c) bg_notes_pane_g2

0xb25d,	// (0x00036a34) bg_notes_pane_g3

0xb265,	// (0x00036a3c) notes_bg_pane_g1

0xb26d,	// (0x00036a44) notes_bg_pane_g4

0xb275,	// (0x00036a4c) notes_bg_pane_g5

0xb27d,	// (0x00036a54) notes_bg_pane_g6

0xb285,	// (0x00036a5c) notes_bg_pane_g7

0xb28d,	// (0x00036a64) notes_bg_pane_g8

0xb295,	// (0x00036a6c) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0003a8f3) notes_bg_pane_g

0x1a64,	// (0x0002d23b) list_notes_text_pane_ParamLimits

0x1a64,	// (0x0002d23b) list_notes_text_pane

0xbeb2,	// (0x00037689) list_notes_text_pane_g1

0x1a79,	// (0x0002d250) list_notes_text_pane_t1

0x1a87,	// (0x0002d25e) listscroll_cale_week_pane

0x1ab3,	// (0x0002d28a) bg_cale_heading_pane

0xbed5,	// (0x000376ac) bg_cale_pane_cp01

0x1acb,	// (0x0002d2a2) cale_week_corner_pane

0x1aea,	// (0x0002d2c1) cale_week_day_heading_pane

0x1b07,	// (0x0002d2de) cale_week_scroll_pane_g1

0x1b1a,	// (0x0002d2f1) cale_week_scroll_pane_g2

0x1b32,	// (0x0002d309) cale_week_scroll_pane_g3

0x1b4a,	// (0x0002d321) cale_week_scroll_pane_g4

0x1b62,	// (0x0002d339) cale_week_scroll_pane_g5

0x1b82,	// (0x0002d359) cale_week_scroll_pane_g6

0x1ba2,	// (0x0002d379) cale_week_scroll_pane_g7

0x1bc2,	// (0x0002d399) cale_week_scroll_pane_g8

0x1be6,	// (0x0002d3bd) cale_week_scroll_pane_g9

0x1bfe,	// (0x0002d3d5) cale_week_scroll_pane_g10

0x1c16,	// (0x0002d3ed) cale_week_scroll_pane_g11

0x1c2e,	// (0x0002d405) cale_week_scroll_pane_g12

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g13

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g14

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0003a902) cale_week_scroll_pane_g

0x1c82,	// (0x0002d459) cale_week_time_pane

0x1ca6,	// (0x0002d47d) grid_cale_week_pane

0xbf04,	// (0x000376db) scroll_pane_cp08

0x1ccc,	// (0x0002d4a3) cell_cale_week_pane_ParamLimits

0x1ccc,	// (0x0002d4a3) cell_cale_week_pane

0x1d5a,	// (0x0002d531) cale_week_day_heading_pane_t1

0x1d84,	// (0x0002d55b) cale_week_day_heading_pane_t2

0x1db3,	// (0x0002d58a) cale_week_day_heading_pane_t3

0x1de2,	// (0x0002d5b9) cale_week_day_heading_pane_t4

0x1e11,	// (0x0002d5e8) cale_week_day_heading_pane_t5

0x1e48,	// (0x0002d61f) cale_week_day_heading_pane_t6

0x1e7f,	// (0x0002d656) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0003a923) cale_week_day_heading_pane_t

0xbf21,	// (0x000376f8) bg_cale_side_pane

0x0703,	// (0x0002beda) cale_week_time_pane_t1

0x071d,	// (0x0002bef4) cale_week_time_pane_t2

0x0737,	// (0x0002bf0e) cale_week_time_pane_t3

0x0751,	// (0x0002bf28) cale_week_time_pane_t4

0x076b,	// (0x0002bf42) cale_week_time_pane_t5

0x0785,	// (0x0002bf5c) cale_week_time_pane_t6

0x079f,	// (0x0002bf76) cale_week_time_pane_t7

0x07b9,	// (0x0002bf90) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0003a932) cale_week_time_pane_t

0x1ea9,	// (0x0002d680) cell_cale_week_pane_g2

0x1ec8,	// (0x0002d69f) cell_cale_week_pane_g3_ParamLimits

0x1ec8,	// (0x0002d69f) cell_cale_week_pane_g3

0xbf2f,	// (0x00037706) grid_highlight_pane_cp07

0xbf37,	// (0x0003770e) listscroll_gms_pane

0xbf41,	// (0x00037718) grid_gms_pane

0xbf4a,	// (0x00037721) listscroll_gms_pane_g1

0xbf52,	// (0x00037729) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0003a943) listscroll_gms_pane_g

0x1ee0,	// (0x0002d6b7) scroll_pane_cp010

0x1eeb,	// (0x0002d6c2) cell_gms_pane_ParamLimits

0x1eeb,	// (0x0002d6c2) cell_gms_pane

0x1efe,	// (0x0002d6d5) cell_gms_pane_g1

0xbf5a,	// (0x00037731) cell_gms_pane_g2

0xbeb2,	// (0x00037689) cell_gms_pane_g3

0xbf62,	// (0x00037739) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0003a948) cell_gms_pane_g

0xbf6b,	// (0x00037742) grid_highlight_pane_cp09

0x3da7,	// (0x0002f57e) phob_pre_status_pane_g1

0x3daf,	// (0x0002f586) phob_pre_status_pane_g2

0x3db7,	// (0x0002f58e) phob_pre_status_pane_g3

0x3dbf,	// (0x0002f596) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0003ad0c) phob_pre_status_pane_g

0x3dcf,	// (0x0002f5a6) phob_pre_status_pane_t1

0x3ddd,	// (0x0002f5b4) phob_pre_status_pane_t2

0x3ded,	// (0x0002f5c4) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0003ad17) phob_pre_status_pane_t

0xbf73,	// (0x0003774a) bg_list_pane_cp05

0x1f0e,	// (0x0002d6e5) grid_vorec_pane

0x1f16,	// (0x0002d6ed) vorec_t1

0x1f24,	// (0x0002d6fb) vorec_t2

0x1f32,	// (0x0002d709) vorec_t3

0x1f40,	// (0x0002d717) vorec_t4

0xb97b,	// (0x00037152) vorec_t5

0x17e7,	// (0x0002cfbe) vorec_t6

0x0004,

0xf17a,	// (0x0003a951) vorec_t

0x17f5,	// (0x0002cfcc) wait_bar_pane_cp01

0x1f5c,	// (0x0002d733) cell_vorec_pane_ParamLimits

0x1f5c,	// (0x0002d733) cell_vorec_pane

0xb29d,	// (0x00036a74) cell_vorec_pane_g1

0xba44,	// (0x0003721b) grid_highlight_pane_cp05

0xbcc1,	// (0x00037498) cams_zoom_pane

0xbcc1,	// (0x00037498) image_vga_pane

0xbd28,	// (0x000374ff) main_camera_pane_g1

0xbd28,	// (0x000374ff) main_camera_pane_g2

0xbd28,	// (0x000374ff) main_camera_pane_g3

0xbd28,	// (0x000374ff) main_camera_pane_g4

0xbd28,	// (0x000374ff) main_camera_pane_g5

0xbd28,	// (0x000374ff) main_camera_pane_g6

0xbd28,	// (0x000374ff) main_camera_pane_g7

0x0007,

0xf185,	// (0x0003a95c) main_camera_pane_g

0xbf7b,	// (0x00037752) main_camera_pane_t1

0xbf7b,	// (0x00037752) main_camera_pane_t2

0x0001,

0xf196,	// (0x0003a96d) main_camera_pane_t

0x1f83,	// (0x0002d75a) cams_zoom_pane_cp_ParamLimits

0x1f83,	// (0x0002d75a) cams_zoom_pane_cp

0x1fb7,	// (0x0002d78e) image_cif_pane_ParamLimits

0x1fb7,	// (0x0002d78e) image_cif_pane

0xae30,	// (0x00036607) image_subqcif_pane

0x1fc9,	// (0x0002d7a0) main_video_pane_g1_ParamLimits

0x1fc9,	// (0x0002d7a0) main_video_pane_g1

0x1ff7,	// (0x0002d7ce) main_video_pane_g2_ParamLimits

0x1ff7,	// (0x0002d7ce) main_video_pane_g2

0x2031,	// (0x0002d808) main_video_pane_g3_ParamLimits

0x2031,	// (0x0002d808) main_video_pane_g3

0x2031,	// (0x0002d808) main_video_pane_g4_ParamLimits

0x2031,	// (0x0002d808) main_video_pane_g4

0x2065,	// (0x0002d83c) main_video_pane_g5_ParamLimits

0x2065,	// (0x0002d83c) main_video_pane_g5

0xbf8f,	// (0x00037766) main_video_pane_g6_ParamLimits

0xbf8f,	// (0x00037766) main_video_pane_g6

0x0006,

0xf19b,	// (0x0003a972) main_video_pane_g_ParamLimits

0xf19b,	// (0x0003a972) main_video_pane_g

0x2081,	// (0x0002d858) main_video_pane_t1_ParamLimits

0x2081,	// (0x0002d858) main_video_pane_t1

0xbfa9,	// (0x00037780) cams_zoom_pane_g1

0xbfa9,	// (0x00037780) cams_zoom_pane_g2

0xbfa9,	// (0x00037780) cams_zoom_pane_g3

0xbfa9,	// (0x00037780) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0003a981) cams_zoom_pane_g

0x20d9,	// (0x0002d8b0) grid_cams_pane

0x20f3,	// (0x0002d8ca) linegrid_cams_pane

0x2107,	// (0x0002d8de) cell_cams_pane_ParamLimits

0x2107,	// (0x0002d8de) cell_cams_pane

0xbfb3,	// (0x0003778a) cams_burst_image_pane

0xbfbb,	// (0x00037792) cell_cams_pane_g1

0xba44,	// (0x0003721b) grid_highlight_pane_cp03

0xbcb7,	// (0x0003748e) mp_bg_pane_g1

0xae30,	// (0x00036607) bg_list_pane_cp03

0xae30,	// (0x00036607) bg_mp_pane

0xae30,	// (0x00036607) grid_mp_pane

0xbfa9,	// (0x00037780) media_player_g1

0xc4e4,	// (0x00037cbb) media_player_t1

0xc4e4,	// (0x00037cbb) media_player_t2

0xc4e4,	// (0x00037cbb) media_player_t3

0xc4e4,	// (0x00037cbb) media_player_t4

0xc4e4,	// (0x00037cbb) media_player_t5

0xc4e4,	// (0x00037cbb) media_player_t6

0xc4e4,	// (0x00037cbb) media_player_t7

0x0006,

0xf51f,	// (0x0003acf6) media_player_t

0xae30,	// (0x00036607) wait_bar_pane_cp02

0xf504,	// (0x0003acdb) main_usb_pane_t

0xc750,	// (0x00037f27) cell_mp_pane

0xbcb7,	// (0x0003748e) cell_mp_pane_g1

0xba44,	// (0x0003721b) grid_highlight_pane_cp06

0xbfc3,	// (0x0003779a) grid_skin_colour_pane

0xbfcb,	// (0x000377a2) list_highlight_pane_cp03

0x2127,	// (0x0002d8fe) skin_g1

0xbfd3,	// (0x000377aa) skin_t1

0xbfe2,	// (0x000377b9) skin_t2

0x0001,

0xf1d8,	// (0x0003a9af) skin_t

0x212f,	// (0x0002d906) cell_skin_colour_pane_ParamLimits

0x212f,	// (0x0002d906) cell_skin_colour_pane

0xbff0,	// (0x000377c7) cell_skin_colour_pane_g1

0x21a8,	// (0x0002d97f) call_video_g1_ParamLimits

0x21a8,	// (0x0002d97f) call_video_g1

0x21c4,	// (0x0002d99b) call_video_g2_ParamLimits

0x21c4,	// (0x0002d99b) call_video_g2

0x0001,

0xf1dd,	// (0x0003a9b4) call_video_g_ParamLimits

0xf1dd,	// (0x0003a9b4) call_video_g

0x2216,	// (0x0002d9ed) call_video_uplink_pane_cp1_ParamLimits

0x2216,	// (0x0002d9ed) call_video_uplink_pane_cp1

0xc002,	// (0x000377d9) call_video_uplink_pane_cp2

0x22b5,	// (0x0002da8c) video_down_crop_pane_ParamLimits

0x22b5,	// (0x0002da8c) video_down_crop_pane

0x23ac,	// (0x0002db83) video_down_pane_ParamLimits

0x23ac,	// (0x0002db83) video_down_pane

0xc00a,	// (0x000377e1) video_down_subqcif_pane_ParamLimits

0xc00a,	// (0x000377e1) video_down_subqcif_pane

0xc022,	// (0x000377f9) video_down_subqcif_pane_cp_ParamLimits

0xc022,	// (0x000377f9) video_down_subqcif_pane_cp

0xc048,	// (0x0003781f) im_reading_pane_ParamLimits

0xc048,	// (0x0003781f) im_reading_pane

0x24bc,	// (0x0002dc93) im_writing_pane_ParamLimits

0x24bc,	// (0x0002dc93) im_writing_pane

0x24d2,	// (0x0002dca9) im_reading_pane_t1

0xc062,	// (0x00037839) list_im_pane

0xc073,	// (0x0003784a) scroll_pane_cp07

0x250b,	// (0x0002dce2) im_writing_pane_t1_ParamLimits

0x250b,	// (0x0002dce2) im_writing_pane_t1

0xc08c,	// (0x00037863) im_writing_pane_t2_ParamLimits

0xc08c,	// (0x00037863) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0003a9be) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0003a9be) im_writing_pane_t

0xba44,	// (0x0003721b) input_focus_pane_cp04

0xba44,	// (0x0003721b) input_focus_pane_cp05

0x2520,	// (0x0002dcf7) list_im_single_pane_ParamLimits

0x2520,	// (0x0002dcf7) list_im_single_pane

0x2534,	// (0x0002dd0b) list_single_im_pane_t1

0xbf73,	// (0x0003774a) blid_accuracy_pane

0xbf73,	// (0x0003774a) blid_compass_pane

0xdd53,	// (0x0003952a) main_location_t1

0xdd53,	// (0x0003952a) main_location_t2

0xdd53,	// (0x0003952a) main_location_t3

0x0002,

0xf52e,	// (0x0003ad05) main_location_t

0xba44,	// (0x0003721b) aid_levels_location

0xbcb7,	// (0x0003748e) blid_accuracy_pane_g1

0xbcb7,	// (0x0003748e) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0003aa0d) blid_accuracy_pane_g

0xc0d4,	// (0x000378ab) wml_content_pane

0xc112,	// (0x000378e9) wml_button_pane_ParamLimits

0xc112,	// (0x000378e9) wml_button_pane

0x2543,	// (0x0002dd1a) wml_list_single_large_pane_ParamLimits

0x2543,	// (0x0002dd1a) wml_list_single_large_pane

0x2558,	// (0x0002dd2f) wml_list_single_medium_pane_ParamLimits

0x2558,	// (0x0002dd2f) wml_list_single_medium_pane

0x256e,	// (0x0002dd45) wml_list_single_small_pane_ParamLimits

0x256e,	// (0x0002dd45) wml_list_single_small_pane

0xc126,	// (0x000378fd) wml_selection_box_pane_ParamLimits

0xc126,	// (0x000378fd) wml_selection_box_pane

0xc139,	// (0x00037910) wml_list_single_pane_t1

0xc148,	// (0x0003791f) wml_list_single_medium_pane_t1

0xc157,	// (0x0003792e) wml_list_single_large_pane_t1

0xc166,	// (0x0003793d) input_focus_pane_cp02_ParamLimits

0xc166,	// (0x0003793d) input_focus_pane_cp02

0xc179,	// (0x00037950) wml_selection_box_pane_g1

0xc182,	// (0x00037959) wml_selection_box_pane_t1_ParamLimits

0xc182,	// (0x00037959) wml_selection_box_pane_t1

0xbc9f,	// (0x00037476) bg_wml_button_pane_ParamLimits

0xbc9f,	// (0x00037476) bg_wml_button_pane

0xc19a,	// (0x00037971) wml_button_pane_g1

0xc1a2,	// (0x00037979) wml_button_pane_t1

0xc19a,	// (0x00037971) wml_button_bg_pane_g1

0xc1b2,	// (0x00037989) wml_button_bg_pane_g2

0xc1ba,	// (0x00037991) wml_button_bg_pane_g3

0xc1c2,	// (0x00037999) wml_button_bg_pane_g4

0xc1ca,	// (0x000379a1) wml_button_bg_pane_g5

0xc1d2,	// (0x000379a9) wml_button_bg_pane_g6

0xc1da,	// (0x000379b1) wml_button_bg_pane_g7

0xc1e2,	// (0x000379b9) wml_button_bg_pane_g8

0xc1ea,	// (0x000379c1) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0003a9c3) wml_button_bg_pane_g

0x2586,	// (0x0002dd5d) bg_list_pane_cp02

0xc1f2,	// (0x000379c9) mce_header_pane_ParamLimits

0xc1f2,	// (0x000379c9) mce_header_pane

0xc208,	// (0x000379df) mce_icon_pane

0xc208,	// (0x000379df) mce_image_pane

0xc211,	// (0x000379e8) mce_text_pane_ParamLimits

0xc211,	// (0x000379e8) mce_text_pane

0x258e,	// (0x0002dd65) scroll_pane_cp03

0xc10a,	// (0x000378e1) scroll_pane_cp04

0xc224,	// (0x000379fb) scroll_pane_cp05_ParamLimits

0xc224,	// (0x000379fb) scroll_pane_cp05

0x2598,	// (0x0002dd6f) mce_header_field_pane_ParamLimits

0x2598,	// (0x0002dd6f) mce_header_field_pane

0x25af,	// (0x0002dd86) mce_header_field_pane_2_ParamLimits

0x25af,	// (0x0002dd86) mce_header_field_pane_2

0x25c5,	// (0x0002dd9c) mce_header_field_pane_3

0x25cd,	// (0x0002dda4) list_single_mce_message_pane_ParamLimits

0x25cd,	// (0x0002dda4) list_single_mce_message_pane

0x25e2,	// (0x0002ddb9) list_single_mce_smart_pane_ParamLimits

0x25e2,	// (0x0002ddb9) list_single_mce_smart_pane

0xc230,	// (0x00037a07) input_focus_pane_cp03

0xc239,	// (0x00037a10) list_header_data_pane

0x2602,	// (0x0002ddd9) mce_header_field_pane_t1

0x2612,	// (0x0002dde9) list_single_mce_header_pane_ParamLimits

0x2612,	// (0x0002dde9) list_single_mce_header_pane

0xc241,	// (0x00037a18) list_single_mce_header_pane_t1

0xc250,	// (0x00037a27) list_single_mce_message_pane_g1

0xc258,	// (0x00037a2f) list_single_mce_message_pane_t1

0x264c,	// (0x0002de23) bg_cale_heading_pane_cp01_ParamLimits

0x264c,	// (0x0002de23) bg_cale_heading_pane_cp01

0xc266,	// (0x00037a3d) bg_cale_pane_cp02_ParamLimits

0xc266,	// (0x00037a3d) bg_cale_pane_cp02

0x2686,	// (0x0002de5d) cale_month_corner_pane

0x26a5,	// (0x0002de7c) cale_month_day_heading_pane_ParamLimits

0x26a5,	// (0x0002de7c) cale_month_day_heading_pane

0x26f7,	// (0x0002dece) cale_month_pane_g1_ParamLimits

0x26f7,	// (0x0002dece) cale_month_pane_g1

0x2726,	// (0x0002defd) cale_month_pane_g2_ParamLimits

0x2726,	// (0x0002defd) cale_month_pane_g2

0x2756,	// (0x0002df2d) cale_month_pane_g3_ParamLimits

0x2756,	// (0x0002df2d) cale_month_pane_g3

0x2792,	// (0x0002df69) cale_month_pane_g4_ParamLimits

0x2792,	// (0x0002df69) cale_month_pane_g4

0x27ce,	// (0x0002dfa5) cale_month_pane_g5_ParamLimits

0x27ce,	// (0x0002dfa5) cale_month_pane_g5

0x2816,	// (0x0002dfed) cale_month_pane_g6_ParamLimits

0x2816,	// (0x0002dfed) cale_month_pane_g6

0x2862,	// (0x0002e039) cale_month_pane_g7_ParamLimits

0x2862,	// (0x0002e039) cale_month_pane_g7

0x28b6,	// (0x0002e08d) cale_month_pane_g8_ParamLimits

0x28b6,	// (0x0002e08d) cale_month_pane_g8

0x290a,	// (0x0002e0e1) cale_month_pane_g9_ParamLimits

0x290a,	// (0x0002e0e1) cale_month_pane_g9

0x295c,	// (0x0002e133) cale_month_pane_g10_ParamLimits

0x295c,	// (0x0002e133) cale_month_pane_g10

0x29ae,	// (0x0002e185) cale_month_pane_g11_ParamLimits

0x29ae,	// (0x0002e185) cale_month_pane_g11

0x2a00,	// (0x0002e1d7) cale_month_pane_g12_ParamLimits

0x2a00,	// (0x0002e1d7) cale_month_pane_g12

0x2a52,	// (0x0002e229) cale_month_pane_g13_ParamLimits

0x2a52,	// (0x0002e229) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0003a9d6) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0003a9d6) cale_month_pane_g

0x2aa4,	// (0x0002e27b) cale_month_week_pane

0x2ac8,	// (0x0002e29f) grid_cale_month_pane_ParamLimits

0x2ac8,	// (0x0002e29f) grid_cale_month_pane

0x2b11,	// (0x0002e2e8) cale_month_day_heading_pane_t1

0x2b97,	// (0x0002e36e) cale_month_day_heading_pane_t2

0x2c10,	// (0x0002e3e7) cale_month_day_heading_pane_t3

0x2c89,	// (0x0002e460) cale_month_day_heading_pane_t4

0x2d0a,	// (0x0002e4e1) cale_month_day_heading_pane_t5

0x2d93,	// (0x0002e56a) cale_month_day_heading_pane_t6

0x2e1c,	// (0x0002e5f3) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0003a9f1) cale_month_day_heading_pane_t

0xbf21,	// (0x000376f8) bg_cale_side_pane_cp01

0x2ead,	// (0x0002e684) cale_month_week_pane_t1

0x2ec6,	// (0x0002e69d) cale_month_week_pane_t2

0x2edf,	// (0x0002e6b6) cale_month_week_pane_t3

0x2ef8,	// (0x0002e6cf) cale_month_week_pane_t4

0x2f11,	// (0x0002e6e8) cale_month_week_pane_t5

0x2f2a,	// (0x0002e701) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0003aa00) cale_month_week_pane_t

0x2f43,	// (0x0002e71a) cell_cale_month_pane_ParamLimits

0x2f43,	// (0x0002e71a) cell_cale_month_pane

0xb2a7,	// (0x00036a7e) cell_cale_month_pane_g1

0x07d3,	// (0x0002bfaa) cell_cale_month_pane_t1_ParamLimits

0x07d3,	// (0x0002bfaa) cell_cale_month_pane_t1

0xbf2f,	// (0x00037706) grid_highlight_pane_cp08

0xbcb7,	// (0x0003748e) main_smil_g1

0x3071,	// (0x0002e848) smil_status_pane

0xc2a5,	// (0x00037a7c) smil_text_pane

0xdc6b,	// (0x00039442) bg_popup_call3_rect_pane_g8

0xdc73,	// (0x0003944a) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0003ac99) bg_popup_call3_rect_pane_g

0xde1c,	// (0x000395f3) smil_status_volume_pane_g1

0xc2af,	// (0x00037a86) smil_status_pane_t1

0xb3f1,	// (0x00036bc8) volume_smil_pane

0xc2c6,	// (0x00037a9d) list_smil_text_pane

0x3084,	// (0x0002e85b) scroll_pane_cp011

0x308f,	// (0x0002e866) smil_text_list_pane_t1_ParamLimits

0x308f,	// (0x0002e866) smil_text_list_pane_t1

0xb2b3,	// (0x00036a8a) aid_volume_smil_ParamLimits

0xb2b3,	// (0x00036a8a) aid_volume_smil

0xbcb7,	// (0x0003748e) smil_volume_pane_g1

0xbcb7,	// (0x0003748e) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0003aa0d) smil_volume_pane_g

0x1a87,	// (0x0002d25e) listscroll_cale_day_pane

0xc2d0,	// (0x00037aa7) bg_cale_pane

0xc2e8,	// (0x00037abf) list_cale_pane

0xc30b,	// (0x00037ae2) scroll_pane_cp09

0xc31c,	// (0x00037af3) cale_bg_pane_g1

0xc324,	// (0x00037afb) cale_bg_pane_g2

0xc32c,	// (0x00037b03) cale_bg_pane_g3

0xc334,	// (0x00037b0b) cale_bg_pane_g4

0xc33c,	// (0x00037b13) cale_bg_pane_g5

0xc344,	// (0x00037b1b) cale_bg_pane_g6

0xc34c,	// (0x00037b23) cale_bg_pane_g7

0xc354,	// (0x00037b2b) cale_bg_pane_g8

0xc35c,	// (0x00037b33) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0003aa12) cale_bg_pane_g

0x30cb,	// (0x0002e8a2) list_cale_time_pane_ParamLimits

0x30cb,	// (0x0002e8a2) list_cale_time_pane

0xc36c,	// (0x00037b43) list_cale_time_pane_g1_ParamLimits

0xc36c,	// (0x00037b43) list_cale_time_pane_g1

0xc378,	// (0x00037b4f) list_cale_time_pane_g2_ParamLimits

0xc378,	// (0x00037b4f) list_cale_time_pane_g2

0x30e0,	// (0x0002e8b7) list_cale_time_pane_g3_ParamLimits

0x30e0,	// (0x0002e8b7) list_cale_time_pane_g3

0x30ee,	// (0x0002e8c5) list_cale_time_pane_g4_ParamLimits

0x30ee,	// (0x0002e8c5) list_cale_time_pane_g4

0x30fc,	// (0x0002e8d3) list_cale_time_pane_g5_ParamLimits

0x30fc,	// (0x0002e8d3) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0003aa25) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0003aa25) list_cale_time_pane_g

0xc392,	// (0x00037b69) list_cale_time_pane_t1_ParamLimits

0xc392,	// (0x00037b69) list_cale_time_pane_t1

0xc3ba,	// (0x00037b91) list_cale_time_pane_t2_ParamLimits

0xc3ba,	// (0x00037b91) list_cale_time_pane_t2

0x335e,	// (0x0002eb35) aid_blid_cardinal_pane

0x339c,	// (0x0002eb73) compass_pane_t4

0xc3e2,	// (0x00037bb9) list_cale_time_pane_t4_ParamLimits

0xc3e2,	// (0x00037bb9) list_cale_time_pane_t4

0x33aa,	// (0x0002eb81) compass_pane_t5

0x33b8,	// (0x0002eb8f) compass_pane_t6

0x33c6,	// (0x0002eb9d) compass_pane_t7

0xc895,	// (0x0003806c) navi_pane_cc_t1

0xca72,	// (0x00038249) aid_phob_thumbnail_center_pane

0x3757,	// (0x0002ef2e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0003aa32) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0003aa32) list_cale_time_pane_t

0xaf21,	// (0x000366f8) bg_popup_window_pane_cp02_ParamLimits

0xaf21,	// (0x000366f8) bg_popup_window_pane_cp02

0xc40a,	// (0x00037be1) heading_pane_cp01_ParamLimits

0xc40a,	// (0x00037be1) heading_pane_cp01

0xc416,	// (0x00037bed) loc_req_pane_ParamLimits

0xc416,	// (0x00037bed) loc_req_pane

0xc426,	// (0x00037bfd) loc_type_pane_ParamLimits

0xc426,	// (0x00037bfd) loc_type_pane

0xc438,	// (0x00037c0f) loc_type_pane_t1_ParamLimits

0xc438,	// (0x00037c0f) loc_type_pane_t1

0xc44a,	// (0x00037c21) loc_type_pane_t2_ParamLimits

0xc44a,	// (0x00037c21) loc_type_pane_t2

0xc45c,	// (0x00037c33) loc_type_pane_t3_ParamLimits

0xc45c,	// (0x00037c33) loc_type_pane_t3

0x0002,

0xf262,	// (0x0003aa39) loc_type_pane_t_ParamLimits

0xf262,	// (0x0003aa39) loc_type_pane_t

0xc46e,	// (0x00037c45) list_loc_req_pane

0xc478,	// (0x00037c4f) scroll_pane_cp012

0x310a,	// (0x0002e8e1) list_single_loc_request_popup_menu_pane_ParamLimits

0x310a,	// (0x0002e8e1) list_single_loc_request_popup_menu_pane

0xc483,	// (0x00037c5a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc483,	// (0x00037c5a) list_single_loc_request_popup_menu_pane_g1

0xc48f,	// (0x00037c66) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc48f,	// (0x00037c66) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0003aa40) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0003aa40) list_single_loc_request_popup_menu_pane_g

0xc49b,	// (0x00037c72) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc49b,	// (0x00037c72) list_single_loc_request_popup_menu_pane_t1

0xbc9f,	// (0x00037476) bg_popup_window_pane_cp03_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_window_pane_cp03

0xc4b1,	// (0x00037c88) heading_loc_req_pane_ParamLimits

0xc4b1,	// (0x00037c88) heading_loc_req_pane

0x3117,	// (0x0002e8ee) popup_dyc_status_message_window_g1_ParamLimits

0x3117,	// (0x0002e8ee) popup_dyc_status_message_window_g1

0x312b,	// (0x0002e902) popup_dyc_status_message_window_t1_ParamLimits

0x312b,	// (0x0002e902) popup_dyc_status_message_window_t1

0x3140,	// (0x0002e917) popup_dyc_status_message_window_t2_ParamLimits

0x3140,	// (0x0002e917) popup_dyc_status_message_window_t2

0x3155,	// (0x0002e92c) popup_dyc_status_message_window_t3_ParamLimits

0x3155,	// (0x0002e92c) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0003aa45) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0003aa45) popup_dyc_status_message_window_t

0xba44,	// (0x0003721b) bg_heading_pane_cp01

0xc4bd,	// (0x00037c94) heading_loc_req_pane_g1

0xc4c5,	// (0x00037c9c) heading_loc_req_pane_g2

0xc4cd,	// (0x00037ca4) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0003aa4c) heading_loc_req_pane_g

0xc4d5,	// (0x00037cac) heading_loc_req_pane_t1

0xc4f4,	// (0x00037ccb) bg_popup_sub_pane_cp01_ParamLimits

0xc4f4,	// (0x00037ccb) bg_popup_sub_pane_cp01

0xc502,	// (0x00037cd9) popup_cale_events_window_g1_ParamLimits

0xc502,	// (0x00037cd9) popup_cale_events_window_g1

0xc522,	// (0x00037cf9) popup_cale_events_window_g2_ParamLimits

0xc522,	// (0x00037cf9) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0003aa6e) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0003aa6e) popup_cale_events_window_g

0xc542,	// (0x00037d19) popup_cale_events_window_t1_ParamLimits

0xc542,	// (0x00037d19) popup_cale_events_window_t1

0xc554,	// (0x00037d2b) popup_cale_events_window_t2_ParamLimits

0xc554,	// (0x00037d2b) popup_cale_events_window_t2

0xc592,	// (0x00037d69) popup_cale_events_window_t3_ParamLimits

0xc592,	// (0x00037d69) popup_cale_events_window_t3

0xc5cc,	// (0x00037da3) popup_cale_events_window_t4_ParamLimits

0xc5cc,	// (0x00037da3) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0003aa73) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0003aa73) popup_cale_events_window_t

0x317d,	// (0x0002e954) call_type_pane

0x318d,	// (0x0002e964) popup_call_status_window_g1

0x31a1,	// (0x0002e978) popup_call_status_window_g2

0x31b5,	// (0x0002e98c) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0003aa7c) popup_call_status_window_g

0xc602,	// (0x00037dd9) call_type_pane_g1

0xc60b,	// (0x00037de2) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0003aa83) call_type_pane_g

0xba44,	// (0x0003721b) bg_popup_sub_pane_cp02

0xc614,	// (0x00037deb) listscroll_popup_wml_pane

0xc61c,	// (0x00037df3) list_wml_pane

0xc626,	// (0x00037dfd) scroll_pane_cp013

0xc631,	// (0x00037e08) list_single_graphic_popup_wml_pane_ParamLimits

0xc631,	// (0x00037e08) list_single_graphic_popup_wml_pane

0xbcb7,	// (0x0003748e) list_single_graphic_popup_wml_pane_g1

0xc645,	// (0x00037e1c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0003aa88) list_single_graphic_popup_wml_pane_g

0xc64d,	// (0x00037e24) list_single_graphic_popup_wml_pane_t1

0xc663,	// (0x00037e3a) aid_call_pane

0xbc97,	// (0x0003746e) popup_clock_analogue_window_g1

0xbc97,	// (0x0003746e) popup_clock_analogue_window_g2

0xb2d5,	// (0x00036aac) popup_clock_analogue_window_g3

0xb2d5,	// (0x00036aac) popup_clock_analogue_window_g4

0xbcb7,	// (0x0003748e) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0003aa8d) popup_clock_analogue_window_g

0xb2dd,	// (0x00036ab4) popup_clock_analogue_window_t1

0xb2eb,	// (0x00036ac2) clock_digital_number_pane_ParamLimits

0xb2eb,	// (0x00036ac2) clock_digital_number_pane

0xb2f7,	// (0x00036ace) clock_digital_number_pane_cp02_ParamLimits

0xb2f7,	// (0x00036ace) clock_digital_number_pane_cp02

0xb303,	// (0x00036ada) clock_digital_number_pane_cp03_ParamLimits

0xb303,	// (0x00036ada) clock_digital_number_pane_cp03

0xb30f,	// (0x00036ae6) clock_digital_number_pane_cp04_ParamLimits

0xb30f,	// (0x00036ae6) clock_digital_number_pane_cp04

0xb31f,	// (0x00036af6) clock_digital_separator_pane_ParamLimits

0xb31f,	// (0x00036af6) clock_digital_separator_pane

0xb32b,	// (0x00036b02) popup_clock_digital_window_t1

0xbcb7,	// (0x0003748e) clock_digital_number_pane_g1

0xbcb7,	// (0x0003748e) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0003aa0d) clock_digital_number_pane_g

0xbcb7,	// (0x0003748e) clock_digital_separator_pane_g1

0xbcb7,	// (0x0003748e) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0003aa0d) clock_digital_separator_pane_g

0xba44,	// (0x0003721b) bg_popup_window_pane_cp04

0xc66b,	// (0x00037e42) heading_pane_cp03

0xbf73,	// (0x0003774a) listscroll_popup_gms_pane

0xba44,	// (0x0003721b) grid_large_graphic_popup_pane

0xc674,	// (0x00037e4b) listscroll_popup_gms_pane_g1

0xc67d,	// (0x00037e54) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0003aa98) listscroll_popup_gms_pane_g

0xc686,	// (0x00037e5d) scroll_pane_cp014

0xbd1a,	// (0x000374f1) cell_large_graphic_popup_pane_ParamLimits

0xbd1a,	// (0x000374f1) cell_large_graphic_popup_pane

0xbd28,	// (0x000374ff) cell_large_graphic_popup_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) cell_large_graphic_popup_pane_g1

0xc68f,	// (0x00037e66) cell_large_graphic_popup_pane_g2_ParamLimits

0xc68f,	// (0x00037e66) cell_large_graphic_popup_pane_g2

0xc69d,	// (0x00037e74) cell_large_graphic_popup_pane_g3_ParamLimits

0xc69d,	// (0x00037e74) cell_large_graphic_popup_pane_g3

0xc6ab,	// (0x00037e82) cell_large_graphic_popup_pane_g4_ParamLimits

0xc6ab,	// (0x00037e82) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0003aa9d) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0003aa9d) cell_large_graphic_popup_pane_g

0xba44,	// (0x0003721b) grid_highlight_pane_cp010

0xbcb7,	// (0x0003748e) bg_popup_call_pane_g1

0xc6bc,	// (0x00037e93) list_single_graphic_popup_conf_pane_ParamLimits

0xc6bc,	// (0x00037e93) list_single_graphic_popup_conf_pane

0xc6cf,	// (0x00037ea6) list_highlight_pane_cp01

0xc6d8,	// (0x00037eaf) list_single_graphic_popup_conf_pane_g1

0xc6e0,	// (0x00037eb7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0003aaa6) list_single_graphic_popup_conf_pane_g

0xc6e8,	// (0x00037ebf) list_single_graphic_popup_conf_pane_t1

0xc6f6,	// (0x00037ecd) linegrid_cams_pane_g1

0x31c4,	// (0x0002e99b) linegrid_cams_pane_g2

0xbeb2,	// (0x00037689) linegrid_cams_pane_g3

0xc6ff,	// (0x00037ed6) linegrid_cams_pane_g4

0x31cd,	// (0x0002e9a4) linegrid_cams_pane_g5

0x31d6,	// (0x0002e9ad) linegrid_cams_pane_g6

0xbf62,	// (0x00037739) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0003aaab) linegrid_cams_pane_g

0xc708,	// (0x00037edf) popup_clock_analogue_window

0xc708,	// (0x00037edf) popup_clock_digital_window

0xba44,	// (0x0003721b) popup_phob_thumbnail_window

0xbcb7,	// (0x0003748e) call_video_uplink_pane_g1

0xc711,	// (0x00037ee8) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0003aaba) call_video_uplink_pane_g

0xc719,	// (0x00037ef0) video_uplink_pane

0xc721,	// (0x00037ef8) mce_image_pane_g1

0x31e1,	// (0x0002e9b8) mce_image_pane_g2

0x31eb,	// (0x0002e9c2) mce_image_pane_g3

0x31f3,	// (0x0002e9ca) mce_image_pane_g4

0x31fb,	// (0x0002e9d2) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0003aabf) mce_image_pane_g

0xc72b,	// (0x00037f02) control_top_pane_stacon_cp01_ParamLimits

0xc72b,	// (0x00037f02) control_top_pane_stacon_cp01

0xc73f,	// (0x00037f16) uni_indicator_pane_stacon_cp01_ParamLimits

0xc73f,	// (0x00037f16) uni_indicator_pane_stacon_cp01

0xc750,	// (0x00037f27) bg_popup_sub_pane_cp03

0xc75a,	// (0x00037f31) chi_dic_find_pane

0x3203,	// (0x0002e9da) listscroll_chi_dic_pane

0xc762,	// (0x00037f39) main_pane_chidic_g1

0xc76a,	// (0x00037f41) chi_dic_find_pane_t1

0xc778,	// (0x00037f4f) find_chidic_pane

0xc781,	// (0x00037f58) chi_dic_list_pane_ParamLimits

0xc781,	// (0x00037f58) chi_dic_list_pane

0xc792,	// (0x00037f69) scroll_pane_cp020

0xc79a,	// (0x00037f71) find_chidic_pane_t1

0xba44,	// (0x0003721b) input_focus_pane_cp06

0x3217,	// (0x0002e9ee) list_chi_dic_pane_ParamLimits

0x3217,	// (0x0002e9ee) list_chi_dic_pane

0x3229,	// (0x0002ea00) list_chi_dic_pane_t1_ParamLimits

0x3229,	// (0x0002ea00) list_chi_dic_pane_t1

0xba44,	// (0x0003721b) list_highlight_pane_cp020

0xc7a9,	// (0x00037f80) bg_cale_heading_pane_g1

0x323c,	// (0x0002ea13) bg_cale_heading_pane_g2

0x3244,	// (0x0002ea1b) bg_cale_heading_pane_g3

0x324c,	// (0x0002ea23) bg_cale_heading_pane_g4

0x3256,	// (0x0002ea2d) bg_cale_heading_pane_g5

0x3260,	// (0x0002ea37) bg_cale_heading_pane_g6

0x3268,	// (0x0002ea3f) bg_cale_heading_pane_g7

0x3270,	// (0x0002ea47) bg_cale_heading_pane_g8

0x327a,	// (0x0002ea51) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0003aaca) bg_cale_heading_pane_g

0xc7a9,	// (0x00037f80) bg_cale_side_pane_g1

0x3284,	// (0x0002ea5b) bg_cale_side_pane_g2

0x328c,	// (0x0002ea63) bg_cale_side_pane_g3

0x3294,	// (0x0002ea6b) bg_cale_side_pane_g4

0x329c,	// (0x0002ea73) bg_cale_side_pane_g5

0x32a4,	// (0x0002ea7b) bg_cale_side_pane_g6

0x32ac,	// (0x0002ea83) bg_cale_side_pane_g7

0x32b4,	// (0x0002ea8b) bg_cale_side_pane_g8

0x32bc,	// (0x0002ea93) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0003aadd) bg_cale_side_pane_g

0x32c4,	// (0x0002ea9b) popup_call_status_window_ParamLimits

0x32c4,	// (0x0002ea9b) popup_call_status_window

0xc7b1,	// (0x00037f88) stacon_top_pane

0xc7b9,	// (0x00037f90) status_pane_ParamLimits

0xc7b9,	// (0x00037f90) status_pane

0xc7ce,	// (0x00037fa5) status_small_pane

0xc7d6,	// (0x00037fad) control_pane

0xba44,	// (0x0003721b) stacon_bottom_pane

0xc7de,	// (0x00037fb5) list_single_mce_smart_pane_t1_ParamLimits

0xc7de,	// (0x00037fb5) list_single_mce_smart_pane_t1

0xc7f1,	// (0x00037fc8) list_single_mce_smart_pane_t2_ParamLimits

0xc7f1,	// (0x00037fc8) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0003aaf0) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0003aaf0) list_single_mce_smart_pane_t

0x330d,	// (0x0002eae4) compass_pane

0x3316,	// (0x0002eaed) main_location2_pane_t1

0x3328,	// (0x0002eaff) main_location2_pane_t2

0x333a,	// (0x0002eb11) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0003aaf5) main_location2_pane_t

0xc810,	// (0x00037fe7) compass_pane_g1_ParamLimits

0xc810,	// (0x00037fe7) compass_pane_g1

0x337e,	// (0x0002eb55) compass_pane_t1

0x338d,	// (0x0002eb64) compass_pane_t2

0x0005,

0xf327,	// (0x0003aafe) compass_pane_t

0x33d4,	// (0x0002ebab) text_secondary_cp61

0xc88c,	// (0x00038063) navi_pane_cams_g5

0xc908,	// (0x000380df) navi_pane_im_t1

0xc916,	// (0x000380ed) navi_pane_mp_g1_ParamLimits

0xc916,	// (0x000380ed) navi_pane_mp_g1

0xc92a,	// (0x00038101) navi_pane_mp_g2_ParamLimits

0xc92a,	// (0x00038101) navi_pane_mp_g2

0xc936,	// (0x0003810d) navi_pane_mp_g3_ParamLimits

0xc936,	// (0x0003810d) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0003ab12) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0003ab12) navi_pane_mp_g

0xc942,	// (0x00038119) navi_pane_mp_t1

0xc950,	// (0x00038127) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0003ab19) navi_pane_mp_t

0xc9bb,	// (0x00038192) navi_pane_vt_g1

0xc942,	// (0x00038119) navi_pane_vt_t1

0xc9c3,	// (0x0003819a) navi_slider_pane

0xbf73,	// (0x0003774a) zooming_pane

0xc9d3,	// (0x000381aa) navi_slider_pane_g1

0xb348,	// (0x00036b1f) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0003ab20) navi_slider_pane_g

0xc9f7,	// (0x000381ce) aid_levels_zoom

0xc9ff,	// (0x000381d6) zooming_pane_g1

0xca07,	// (0x000381de) zooming_pane_g2

0xca07,	// (0x000381de) zooming_pane_g3

0x0002,

0xf358,	// (0x0003ab2f) zooming_pane_g

0xca0f,	// (0x000381e6) level_10_zoom

0xca18,	// (0x000381ef) level_11_zoom

0xca21,	// (0x000381f8) level_1_zoom

0xca2a,	// (0x00038201) level_2_zoom

0xca33,	// (0x0003820a) level_3_zoom

0xca3c,	// (0x00038213) level_4_zoom

0xca45,	// (0x0003821c) level_5_zoom

0xca4e,	// (0x00038225) level_6_zoom

0xca57,	// (0x0003822e) level_7_zoom

0xca60,	// (0x00038237) level_8_zoom

0xca69,	// (0x00038240) level_9_zoom

0xca7a,	// (0x00038251) popup_phob_thumbnail_window_g1

0xca82,	// (0x00038259) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0003ab36) popup_phob_thumbnail_window_g

0x3dfd,	// (0x0002f5d4) level_1_location

0x3e05,	// (0x0002f5dc) level_2_location

0x3e0d,	// (0x0002f5e4) level_3_location

0x3e15,	// (0x0002f5ec) level_4_location

0xbf73,	// (0x0003774a) level_5_location

0x3425,	// (0x0002ebfc) mce_icon_pane_g1

0x342f,	// (0x0002ec06) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0003ab3b) mce_icon_pane_g

0xca8a,	// (0x00038261) main_mup_pane_g1_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g1

0xca8a,	// (0x00038261) main_mup_pane_g2_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g2

0xca8a,	// (0x00038261) main_mup_pane_g3_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g3

0xca8a,	// (0x00038261) main_mup_pane_g4_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g4

0xca8a,	// (0x00038261) main_mup_pane_g5_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g5

0xca8a,	// (0x00038261) main_mup_pane_g6_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g6

0xca8a,	// (0x00038261) main_mup_pane_g7_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g7

0xca8a,	// (0x00038261) main_mup_pane_g8_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g8

0xca8a,	// (0x00038261) main_mup_pane_g9_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g9

0xca8a,	// (0x00038261) main_mup_pane_g10_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g10

0xca8a,	// (0x00038261) main_mup_pane_g11_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g11

0xbd28,	// (0x000374ff) main_mup_pane_g12_ParamLimits

0xbd28,	// (0x000374ff) main_mup_pane_g12

0xca8a,	// (0x00038261) main_mup_pane_g13_ParamLimits

0xca8a,	// (0x00038261) main_mup_pane_g13

0x000c,

0xf369,	// (0x0003ab40) main_mup_pane_g_ParamLimits

0xf369,	// (0x0003ab40) main_mup_pane_g

0xca98,	// (0x0003826f) main_mup_pane_t1_ParamLimits

0xca98,	// (0x0003826f) main_mup_pane_t1

0xca98,	// (0x0003826f) main_mup_pane_t2_ParamLimits

0xca98,	// (0x0003826f) main_mup_pane_t2

0xca98,	// (0x0003826f) main_mup_pane_t3_ParamLimits

0xca98,	// (0x0003826f) main_mup_pane_t3

0xbf7b,	// (0x00037752) main_mup_pane_t4_ParamLimits

0xbf7b,	// (0x00037752) main_mup_pane_t4

0xbf7b,	// (0x00037752) main_mup_pane_t5_ParamLimits

0xbf7b,	// (0x00037752) main_mup_pane_t5

0xcaac,	// (0x00038283) main_mup_pane_t6_ParamLimits

0xcaac,	// (0x00038283) main_mup_pane_t6

0x0005,

0xf384,	// (0x0003ab5b) main_mup_pane_t_ParamLimits

0xf384,	// (0x0003ab5b) main_mup_pane_t

0xbd1a,	// (0x000374f1) mup_progress_pane_ParamLimits

0xbd1a,	// (0x000374f1) mup_progress_pane

0xcac0,	// (0x00038297) mup_visualizer_pane_ParamLimits

0xcac0,	// (0x00038297) mup_visualizer_pane

0xcac0,	// (0x00038297) mup_volume_pane_ParamLimits

0xcac0,	// (0x00038297) mup_volume_pane

0xbd36,	// (0x0003750d) mup_visualizer_pane_g1_ParamLimits

0xbd36,	// (0x0003750d) mup_visualizer_pane_g1

0xcace,	// (0x000382a5) mup_visualizer_pane_g2_ParamLimits

0xcace,	// (0x000382a5) mup_visualizer_pane_g2

0xbd28,	// (0x000374ff) mup_visualizer_pane_g3_ParamLimits

0xbd28,	// (0x000374ff) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0003ab68) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0003ab68) mup_visualizer_pane_g

0xbfa9,	// (0x00037780) mup_volume_pane_g1

0xbfa9,	// (0x00037780) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) mup_volume_pane_g

0xbfa9,	// (0x00037780) mup_progress_pane_g1

0xbfa9,	// (0x00037780) mup_progress_pane_g2

0xbfa9,	// (0x00037780) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0003ab74) mup_progress_pane_g

0xba44,	// (0x0003721b) bg_popup_window_pane_cp05

0xcadc,	// (0x000382b3) heading_pane_cp02_ParamLimits

0xcadc,	// (0x000382b3) heading_pane_cp02

0xcaf6,	// (0x000382cd) list_popup_blid_pane

0xcafe,	// (0x000382d5) list_blid_sat_info_pane_ParamLimits

0xcafe,	// (0x000382d5) list_blid_sat_info_pane

0xcb11,	// (0x000382e8) list_blid_sat_info_pane_g1

0xcb19,	// (0x000382f0) list_blid_sat_info_pane_t1

0x352f,	// (0x0002ed06) mup_equalizer_pane_ParamLimits

0x352f,	// (0x0002ed06) mup_equalizer_pane

0x3548,	// (0x0002ed1f) mup_equalizer_pane_cp1_ParamLimits

0x3548,	// (0x0002ed1f) mup_equalizer_pane_cp1

0x3565,	// (0x0002ed3c) mup_equalizer_pane_cp2_ParamLimits

0x3565,	// (0x0002ed3c) mup_equalizer_pane_cp2

0x3582,	// (0x0002ed59) mup_equalizer_pane_cp3_ParamLimits

0x3582,	// (0x0002ed59) mup_equalizer_pane_cp3

0x35a3,	// (0x0002ed7a) mup_equalizer_pane_cp4_ParamLimits

0x35a3,	// (0x0002ed7a) mup_equalizer_pane_cp4

0x35c4,	// (0x0002ed9b) mup_equalizer_pane_cp5

0x35d8,	// (0x0002edaf) mup_equalizer_pane_cp6

0x35ec,	// (0x0002edc3) mup_equalizer_pane_cp7

0xdceb,	// (0x000394c2) bg_popup_call_poc_act_pane_g9

0xdcf3,	// (0x000394ca) bg_popup_call_poc_act_pane_g10

0xdcfb,	// (0x000394d2) bg_popup_call_poc_act_pane_g11

0x000a,

0xbc9f,	// (0x00037476) mup_scale_pane

0xbcb7,	// (0x0003748e) mup_scale_pane_g1

0xcb27,	// (0x000382fe) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0003ab90) mup_scale_pane_g

0xcb4b,	// (0x00038322) msg_data_pane

0xcb53,	// (0x0003832a) scroll_pane_cp017

0x3612,	// (0x0002ede9) bg_list_pane_cp04_ParamLimits

0x3612,	// (0x0002ede9) bg_list_pane_cp04

0xcb63,	// (0x0003833a) msg_data_pane_g1

0x362a,	// (0x0002ee01) msg_data_pane_g2

0x3634,	// (0x0002ee0b) msg_data_pane_g3

0x363c,	// (0x0002ee13) msg_data_pane_g4

0x3644,	// (0x0002ee1b) msg_data_pane_g5

0x364c,	// (0x0002ee23) msg_data_pane_g6

0x3654,	// (0x0002ee2b) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0003ab9f) msg_data_pane_g

0x365c,	// (0x0002ee33) msg_text_pane_ParamLimits

0x365c,	// (0x0002ee33) msg_text_pane

0x3687,	// (0x0002ee5e) qrid_highlight_pane_cp011_ParamLimits

0x3687,	// (0x0002ee5e) qrid_highlight_pane_cp011

0xba44,	// (0x0003721b) msg_body_pane

0xba44,	// (0x0003721b) msg_header_pane

0xcb74,	// (0x0003834b) input_focus_pane_cp07

0xcb89,	// (0x00038360) msg_header_pane_t1_ParamLimits

0xcb89,	// (0x00038360) msg_header_pane_t1

0xcb9f,	// (0x00038376) msg_header_pane_t2_ParamLimits

0xcb9f,	// (0x00038376) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0003abb3) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0003abb3) msg_header_pane_t

0xcbb6,	// (0x0003838d) msg_body_pane_g1

0xcbbe,	// (0x00038395) msg_body_pane_t1_ParamLimits

0xcbbe,	// (0x00038395) msg_body_pane_t1

0xcbef,	// (0x000383c6) msg_body_pane_t2_ParamLimits

0xcbef,	// (0x000383c6) msg_body_pane_t2

0xcc01,	// (0x000383d8) msg_body_pane_t3_ParamLimits

0xcc01,	// (0x000383d8) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0003abb8) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0003abb8) msg_body_pane_t

0x081b,	// (0x0002bff2) main_viewer_pane_g1_ParamLimits

0x081b,	// (0x0002bff2) main_viewer_pane_g1

0x0829,	// (0x0002c000) main_viewer_pane_g2_ParamLimits

0x0829,	// (0x0002c000) main_viewer_pane_g2

0x36c9,	// (0x0002eea0) main_viewer_pane_g3_ParamLimits

0x36c9,	// (0x0002eea0) main_viewer_pane_g3

0x36d8,	// (0x0002eeaf) main_viewer_pane_g4_ParamLimits

0x36d8,	// (0x0002eeaf) main_viewer_pane_g4

0xb372,	// (0x00036b49) main_viewer_pane_g5_ParamLimits

0xb372,	// (0x00036b49) main_viewer_pane_g5

0xb372,	// (0x00036b49) main_viewer_pane_g7_ParamLimits

0xb372,	// (0x00036b49) main_viewer_pane_g7

0xc483,	// (0x00037c5a) main_viewer_pane_g8_ParamLimits

0xc483,	// (0x00037c5a) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0003abc8) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0003abc8) main_viewer_pane_g

0xcc13,	// (0x000383ea) viewer_content_pane_ParamLimits

0xcc13,	// (0x000383ea) viewer_content_pane

0x3714,	// (0x0002eeeb) main_postcard_pane_g1_ParamLimits

0x3714,	// (0x0002eeeb) main_postcard_pane_g1

0x372a,	// (0x0002ef01) main_postcard_pane_g2_ParamLimits

0x372a,	// (0x0002ef01) main_postcard_pane_g2

0x3740,	// (0x0002ef17) main_postcard_pane_g3_ParamLimits

0x3740,	// (0x0002ef17) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0003abd9) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0003abd9) main_postcard_pane_g

0x3757,	// (0x0002ef2e) main_postcard_pane_g4

0xde2f,	// (0x00039606) smil_status_volume_pane_g2

0x379a,	// (0x0002ef71) postcard_pane_ParamLimits

0x379a,	// (0x0002ef71) postcard_pane

0xcc21,	// (0x000383f8) postcard_pane_g1_ParamLimits

0xcc21,	// (0x000383f8) postcard_pane_g1

0x37dc,	// (0x0002efb3) postcard_pane_g2_ParamLimits

0x37dc,	// (0x0002efb3) postcard_pane_g2

0x37e8,	// (0x0002efbf) postcard_pane_g3_ParamLimits

0x37e8,	// (0x0002efbf) postcard_pane_g3

0xcc2f,	// (0x00038406) postcard_pane_g4_ParamLimits

0xcc2f,	// (0x00038406) postcard_pane_g4

0x37f4,	// (0x0002efcb) postcard_pane_g5_ParamLimits

0x37f4,	// (0x0002efcb) postcard_pane_g5

0x3809,	// (0x0002efe0) postcard_pane_g6_ParamLimits

0x3809,	// (0x0002efe0) postcard_pane_g6

0xcc21,	// (0x000383f8) postcard_pane_g7_ParamLimits

0xcc21,	// (0x000383f8) postcard_pane_g7

0x0006,

0xf40f,	// (0x0003abe6) postcard_pane_g_ParamLimits

0xf40f,	// (0x0003abe6) postcard_pane_g

0x381d,	// (0x0002eff4) main_mp2_pane_g1_ParamLimits

0x381d,	// (0x0002eff4) main_mp2_pane_g1

0x3829,	// (0x0002f000) main_mp2_pane_g2_ParamLimits

0x3829,	// (0x0002f000) main_mp2_pane_g2

0x3835,	// (0x0002f00c) main_mp2_pane_g3_ParamLimits

0x3835,	// (0x0002f00c) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0003abf5) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0003abf5) main_mp2_pane_g

0x3841,	// (0x0002f018) main_mp2_pane_t1_ParamLimits

0x3841,	// (0x0002f018) main_mp2_pane_t1

0x3856,	// (0x0002f02d) main_mp2_pane_t2_ParamLimits

0x3856,	// (0x0002f02d) main_mp2_pane_t2

0x3868,	// (0x0002f03f) main_mp2_pane_t3_ParamLimits

0x3868,	// (0x0002f03f) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0003abfc) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0003abfc) main_mp2_pane_t

0xcc3d,	// (0x00038414) pec_content_pane_ParamLimits

0xcc3d,	// (0x00038414) pec_content_pane

0xc10a,	// (0x000378e1) scroll_pane_cp015

0xcc4f,	// (0x00038426) pec_attribute_pane_ParamLimits

0xcc4f,	// (0x00038426) pec_attribute_pane

0x387a,	// (0x0002f051) pec_content_pane_g1_ParamLimits

0x387a,	// (0x0002f051) pec_content_pane_g1

0xcc5f,	// (0x00038436) pec_content_pane_t1_ParamLimits

0xcc5f,	// (0x00038436) pec_content_pane_t1

0xcc71,	// (0x00038448) pec_content_pane_t2_ParamLimits

0xcc71,	// (0x00038448) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0003ac03) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0003ac03) pec_content_pane_t

0x3886,	// (0x0002f05d) list_single_graphic_pane_cp01_ParamLimits

0x3886,	// (0x0002f05d) list_single_graphic_pane_cp01

0xbc9f,	// (0x00037476) bg_popup_sub_pane_cp04

0xcc83,	// (0x0003845a) popup_mup_playback_window_g1

0xcc8f,	// (0x00038466) popup_mup_playback_window_t1

0xcca4,	// (0x0003847b) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0003ac08) popup_mup_playback_window_t

0xccdb,	// (0x000384b2) main_image_pane_g1_ParamLimits

0xccdb,	// (0x000384b2) main_image_pane_g1

0xcd1e,	// (0x000384f5) scroll_pane_cp018_ParamLimits

0xcd1e,	// (0x000384f5) scroll_pane_cp018

0xcd36,	// (0x0003850d) scroll_pane_cp016_ParamLimits

0xcd36,	// (0x0003850d) scroll_pane_cp016

0x3953,	// (0x0002f12a) smil2_image_pane_ParamLimits

0x3953,	// (0x0002f12a) smil2_image_pane

0x3983,	// (0x0002f15a) smil2_root_pane_ParamLimits

0x3983,	// (0x0002f15a) smil2_root_pane

0x39bb,	// (0x0002f192) smil2_text_pane_ParamLimits

0x39bb,	// (0x0002f192) smil2_text_pane

0xba44,	// (0x0003721b) bg_list_pane_cp06

0xcd72,	// (0x00038549) grid_radio_pane

0xba44,	// (0x0003721b) bg_popup_window_pane_cp06

0xcd7a,	// (0x00038551) main_fmradio_pane_t1

0xdd03,	// (0x000394da) heading_pane_cp04

0xcd88,	// (0x0003855f) main_fmradio_pane_t2

0xdd0b,	// (0x000394e2) popup_cale_lunar_info_window_g1

0xcd96,	// (0x0003856d) main_fmradio_pane_t3

0xdd13,	// (0x000394ea) popup_cale_lunar_info_window_g2

0xcda4,	// (0x0003857b) main_fmradio_pane_t4

0x0001,

0xcdb2,	// (0x00038589) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0003ace8) popup_cale_lunar_info_window_g

0xf446,	// (0x0003ac1d) main_fmradio_pane_t

0xcdc0,	// (0x00038597) wait_bar_pane_cp03

0xcdc8,	// (0x0003859f) cell_fmradio_pane_ParamLimits

0xcdc8,	// (0x0003859f) cell_fmradio_pane

0xcc21,	// (0x000383f8) cell_fmradio_pane_g1_ParamLimits

0xcc21,	// (0x000383f8) cell_fmradio_pane_g1

0xba44,	// (0x0003721b) grid_highlight_pane_cp011

0xcddb,	// (0x000385b2) poc_content_pane_ParamLimits

0xcddb,	// (0x000385b2) poc_content_pane

0xcded,	// (0x000385c4) scroll_pane_cp019

0x3a3b,	// (0x0002f212) popup_call_poc_act_window_ParamLimits

0x3a3b,	// (0x0002f212) popup_call_poc_act_window

0x3a5f,	// (0x0002f236) popup_call_poc_inact_window_ParamLimits

0x3a5f,	// (0x0002f236) popup_call_poc_inact_window

0xf4e8,	// (0x0003acbf) bg_popup_call_poc_act_pane_g

0xdc7b,	// (0x00039452) bg_popup_call_poc_inact_pane_g1

0xdc83,	// (0x0003945a) bg_popup_call_poc_inact_pane_g2

0xcdf5,	// (0x000385cc) popup_call_poc_act_window_g2

0xdc8b,	// (0x00039462) bg_popup_call_poc_inact_pane_g3

0xdc93,	// (0x0003946a) bg_popup_call_poc_inact_pane_g4

0xdc9b,	// (0x00039472) bg_popup_call_poc_inact_pane_g5

0xcdfd,	// (0x000385d4) popup_call_poc_act_window_t1_ParamLimits

0xcdfd,	// (0x000385d4) popup_call_poc_act_window_t1

0xce25,	// (0x000385fc) popup_call_poc_act_window_t2_ParamLimits

0xce25,	// (0x000385fc) popup_call_poc_act_window_t2

0xce4d,	// (0x00038624) popup_call_poc_act_window_t3_ParamLimits

0xce4d,	// (0x00038624) popup_call_poc_act_window_t3

0xce75,	// (0x0003864c) popup_call_poc_act_window_t4_ParamLimits

0xce75,	// (0x0003864c) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0003ac28) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0003ac28) popup_call_poc_act_window_t

0xdca3,	// (0x0003947a) bg_popup_call_poc_inact_pane_g6

0xdcab,	// (0x00039482) bg_popup_call_poc_inact_pane_g7

0xdcb3,	// (0x0003948a) bg_popup_call_poc_inact_pane_g8

0xce87,	// (0x0003865e) popup_call_poc_inact_window_g2

0xdcbb,	// (0x00039492) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0003acac) bg_popup_call_poc_inact_pane_g

0xce8f,	// (0x00038666) popup_call_poc_inact_window_t1_ParamLimits

0xce8f,	// (0x00038666) popup_call_poc_inact_window_t1

0xcea4,	// (0x0003867b) popup_call_poc_inact_window_t2_ParamLimits

0xcea4,	// (0x0003867b) popup_call_poc_inact_window_t2

0xceb9,	// (0x00038690) popup_call_poc_inact_window_t3_ParamLimits

0xceb9,	// (0x00038690) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0003ac31) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0003ac31) popup_call_poc_inact_window_t

0xdda7,	// (0x0003957e) context_pane_ParamLimits

0x4025,	// (0x0002f7fc) signal_pane_ParamLimits

0xbf73,	// (0x0003774a) main_call2_pane

0xb3bd,	// (0x00036b94) popup_phob_thumbnail2_window_ParamLimits

0xb3bd,	// (0x00036b94) popup_phob_thumbnail2_window

0xb35a,	// (0x00036b31) aid_hotspot_pointer_arrow_pane

0xb362,	// (0x00036b39) aid_hotspot_pointer_hand_pane

0x3dc7,	// (0x0002f59e) phob_pre_status_pane_g5

0xbcc1,	// (0x00037498) cams_zoom_pane_ParamLimits

0xbcc1,	// (0x00037498) image_vga_pane_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g2_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g3_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g4_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g5_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g6_ParamLimits

0xbd28,	// (0x000374ff) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0003a95c) main_camera_pane_g_ParamLimits

0xbf7b,	// (0x00037752) main_camera_pane_t1_ParamLimits

0xbf7b,	// (0x00037752) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0003a96d) main_camera_pane_t_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_preview_window_pane_cp01_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_preview_window_pane_cp01

0xcece,	// (0x000386a5) popup_phob_thumbnail2_window_g1_ParamLimits

0xcece,	// (0x000386a5) popup_phob_thumbnail2_window_g1

0xba44,	// (0x0003721b) call2_cli_visual_pane

0x3a93,	// (0x0002f26a) popup_call2_audio_conf_window_ParamLimits

0x3a93,	// (0x0002f26a) popup_call2_audio_conf_window

0x3ab3,	// (0x0002f28a) popup_call2_audio_first_window_ParamLimits

0x3ab3,	// (0x0002f28a) popup_call2_audio_first_window

0x3b49,	// (0x0002f320) popup_call2_audio_in_window_ParamLimits

0x3b49,	// (0x0002f320) popup_call2_audio_in_window

0x3b91,	// (0x0002f368) popup_call2_audio_out_window_ParamLimits

0x3b91,	// (0x0002f368) popup_call2_audio_out_window

0x3bfb,	// (0x0002f3d2) popup_call2_audio_second_window_ParamLimits

0x3bfb,	// (0x0002f3d2) popup_call2_audio_second_window

0x3c61,	// (0x0002f438) popup_call2_audio_wait_window_ParamLimits

0x3c61,	// (0x0002f438) popup_call2_audio_wait_window

0xba44,	// (0x0003721b) bg_popup_call2_act_pane_cp03

0xbc81,	// (0x00037458) list_conf_pane_cp

0xceda,	// (0x000386b1) popup_call2_audio_conf_window_t1

0xc6bc,	// (0x00037e93) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6bc,	// (0x00037e93) list_single_graphic_popup_conf2_pane

0xc6cf,	// (0x00037ea6) list_highlight_pane_cp04

0xcee8,	// (0x000386bf) list_single_graphic_popup_conf2_pane_g1

0xc6e0,	// (0x00037eb7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0003ac38) list_single_graphic_popup_conf2_pane_g

0xcef2,	// (0x000386c9) list_single_graphic_popup_conf2_pane_t1

0xcf00,	// (0x000386d7) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf00,	// (0x000386d7) bg_popup_call2_act_pane_cp01

0xcf8a,	// (0x00038761) call_type_pane_cp05_ParamLimits

0xcf8a,	// (0x00038761) call_type_pane_cp05

0xcfde,	// (0x000387b5) popup_call2_audio_second_window_g1_ParamLimits

0xcfde,	// (0x000387b5) popup_call2_audio_second_window_g1

0xd032,	// (0x00038809) popup_call2_audio_second_window_g2_ParamLimits

0xd032,	// (0x00038809) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0003ac3d) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0003ac3d) popup_call2_audio_second_window_g

0xd097,	// (0x0003886e) popup_call2_audio_second_window_t1_ParamLimits

0xd097,	// (0x0003886e) popup_call2_audio_second_window_t1

0xd152,	// (0x00038929) popup_call2_audio_second_window_t2_ParamLimits

0xd152,	// (0x00038929) popup_call2_audio_second_window_t2

0xd1a5,	// (0x0003897c) popup_call2_audio_second_window_t3_ParamLimits

0xd1a5,	// (0x0003897c) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0003ac44) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0003ac44) popup_call2_audio_second_window_t

0xba44,	// (0x0003721b) bg_popup_call2_in_pane_cp02

0xba4e,	// (0x00037225) call_type_pane_cp04

0x3c9b,	// (0x0002f472) popup_call2_audio_wait_window_g1

0x3ca3,	// (0x0002f47a) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0003ac4d) popup_call2_audio_wait_window_g

0xba66,	// (0x0003723d) popup_call2_audio_wait_window_t3

0xd298,	// (0x00038a6f) bg_popup_call2_act_pane_ParamLimits

0xd298,	// (0x00038a6f) bg_popup_call2_act_pane

0xd358,	// (0x00038b2f) call_type_pane_cp03_ParamLimits

0xd358,	// (0x00038b2f) call_type_pane_cp03

0xd3bc,	// (0x00038b93) popup_call2_audio_first_window_g1_ParamLimits

0xd3bc,	// (0x00038b93) popup_call2_audio_first_window_g1

0xd42c,	// (0x00038c03) popup_call2_audio_first_window_g2_ParamLimits

0xd42c,	// (0x00038c03) popup_call2_audio_first_window_g2

0xd490,	// (0x00038c67) popup_call2_audio_first_window_g3_ParamLimits

0xd490,	// (0x00038c67) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0003ac52) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0003ac52) popup_call2_audio_first_window_g

0xd518,	// (0x00038cef) popup_call2_audio_first_window_t1_ParamLimits

0xd518,	// (0x00038cef) popup_call2_audio_first_window_t1

0xd61b,	// (0x00038df2) popup_call2_audio_first_window_t4_ParamLimits

0xd61b,	// (0x00038df2) popup_call2_audio_first_window_t4

0xd6fe,	// (0x00038ed5) popup_call2_audio_first_window_t5_ParamLimits

0xd6fe,	// (0x00038ed5) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0003ac5d) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0003ac5d) popup_call2_audio_first_window_t

0xbc97,	// (0x0003746e) bg_popup_call2_act_pane_g1

0xdd1b,	// (0x000394f2) popup_cale_lunar_info_window_t1

0xdd29,	// (0x00039500) popup_cale_lunar_info_window_t2

0xdd37,	// (0x0003950e) popup_cale_lunar_info_window_t3

0xba44,	// (0x0003721b) bg_popup_call2_bubble_pane

0xd7ff,	// (0x00038fd6) bg_popup_call2_in_pane_cp01_ParamLimits

0xd7ff,	// (0x00038fd6) bg_popup_call2_in_pane_cp01

0xafa6,	// (0x0003677d) call_type_pane_cp02

0x3cab,	// (0x0002f482) popup_call2_audio_out_window_g1_ParamLimits

0x3cab,	// (0x0002f482) popup_call2_audio_out_window_g1

0xd847,	// (0x0003901e) popup_call2_audio_out_window_g2_ParamLimits

0xd847,	// (0x0003901e) popup_call2_audio_out_window_g2

0x3cd7,	// (0x0002f4ae) popup_call2_audio_out_window_g3_ParamLimits

0x3cd7,	// (0x0002f4ae) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0003ac66) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0003ac66) popup_call2_audio_out_window_g

0xd87e,	// (0x00039055) popup_call2_audio_out_window_t1_ParamLimits

0xd87e,	// (0x00039055) popup_call2_audio_out_window_t1

0xd8dd,	// (0x000390b4) popup_call2_audio_out_window_t2_ParamLimits

0xd8dd,	// (0x000390b4) popup_call2_audio_out_window_t2

0xd931,	// (0x00039108) popup_call2_audio_out_window_t3_ParamLimits

0xd931,	// (0x00039108) popup_call2_audio_out_window_t3

0xd947,	// (0x0003911e) popup_call2_audio_out_window_t4_ParamLimits

0xd947,	// (0x0003911e) popup_call2_audio_out_window_t4

0xd95d,	// (0x00039134) popup_call2_audio_out_window_t5_ParamLimits

0xd95d,	// (0x00039134) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0003ac6f) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0003ac6f) popup_call2_audio_out_window_t

0xd9c1,	// (0x00039198) bg_popup_call2_in_pane_ParamLimits

0xd9c1,	// (0x00039198) bg_popup_call2_in_pane

0xda1d,	// (0x000391f4) popup_call2_audio_in_window_g1_ParamLimits

0xda1d,	// (0x000391f4) popup_call2_audio_in_window_g1

0xda55,	// (0x0003922c) popup_call2_audio_in_window_g2_ParamLimits

0xda55,	// (0x0003922c) popup_call2_audio_in_window_g2

0xda8d,	// (0x00039264) popup_call2_audio_in_window_g3_ParamLimits

0xda8d,	// (0x00039264) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0003ac7c) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0003ac7c) popup_call2_audio_in_window_g

0xdae5,	// (0x000392bc) popup_call2_audio_in_window_t1_ParamLimits

0xdae5,	// (0x000392bc) popup_call2_audio_in_window_t1

0xdb65,	// (0x0003933c) popup_call2_audio_in_window_t2_ParamLimits

0xdb65,	// (0x0003933c) popup_call2_audio_in_window_t2

0xdbe5,	// (0x000393bc) popup_call2_audio_in_window_t3_ParamLimits

0xdbe5,	// (0x000393bc) popup_call2_audio_in_window_t3

0xdbff,	// (0x000393d6) popup_call2_audio_in_window_t4_ParamLimits

0xdbff,	// (0x000393d6) popup_call2_audio_in_window_t4

0xdc11,	// (0x000393e8) popup_call2_audio_in_window_t5_ParamLimits

0xdc11,	// (0x000393e8) popup_call2_audio_in_window_t5

0xdc26,	// (0x000393fd) popup_call2_audio_in_window_t6_ParamLimits

0xdc26,	// (0x000393fd) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0003ac85) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0003ac85) popup_call2_audio_in_window_t

0xbc97,	// (0x0003746e) bg_popup_call2_in_pane_g1

0xdd45,	// (0x0003951c) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0003aced) popup_cale_lunar_info_window_t

0xbc9f,	// (0x00037476) bg_popup_call2_rect_pane_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_call2_rect_pane

0xba44,	// (0x0003721b) call2_cli_visual_graphic_pane

0xba44,	// (0x0003721b) call2_cli_visual_text_pane

0xb3e4,	// (0x00036bbb) smil_status_volume_pane_g3

0x0002,

0xbcb7,	// (0x0003748e) call2_cli_visual_graphic_pane_g1

0xbcb7,	// (0x0003748e) call2_cli_visual_graphic_pane_g2

0xbcb7,	// (0x0003748e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0003ac92) call2_cli_visual_graphic_pane_g

0xdc3b,	// (0x00039412) bg_popup_call2_rect_pane_g1

0xbe7a,	// (0x00037651) bg_popup_call2_rect_pane_g2

0xdc43,	// (0x0003941a) bg_popup_call2_rect_pane_g3

0xdc4b,	// (0x00039422) bg_popup_call2_rect_pane_g4

0xdc53,	// (0x0003942a) bg_popup_call2_rect_pane_g5

0xdc5b,	// (0x00039432) bg_popup_call2_rect_pane_g6

0xdc63,	// (0x0003943a) bg_popup_call2_rect_pane_g7

0xdc6b,	// (0x00039442) bg_popup_call2_rect_pane_g8

0xdc73,	// (0x0003944a) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0003ac99) bg_popup_call2_rect_pane_g

0xdc7b,	// (0x00039452) bg_popup_call2_bubble_pane_g1

0xdc83,	// (0x0003945a) bg_popup_call2_bubble_pane_g2

0xdc8b,	// (0x00039462) bg_popup_call2_bubble_pane_g3

0xdc93,	// (0x0003946a) bg_popup_call2_bubble_pane_g4

0xdc9b,	// (0x00039472) bg_popup_call2_bubble_pane_g5

0xdca3,	// (0x0003947a) bg_popup_call2_bubble_pane_g6

0xdcab,	// (0x00039482) bg_popup_call2_bubble_pane_g7

0xdcb3,	// (0x0003948a) bg_popup_call2_bubble_pane_g8

0xdcbb,	// (0x00039492) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0003acac) bg_popup_call2_bubble_pane_g

0x1a99,	// (0x0002d270) aid_cale_week_size_cell_pane

0x1f6f,	// (0x0002d746) aid_cams_cif_uncrop_pane_ParamLimits

0x1f6f,	// (0x0002d746) aid_cams_cif_uncrop_pane

0x20c5,	// (0x0002d89c) aid_cams_size_cell_ParamLimits

0x20c5,	// (0x0002d89c) aid_cams_size_cell

0x20d9,	// (0x0002d8b0) grid_cams_pane_ParamLimits

0x20f3,	// (0x0002d8ca) linegrid_cams_pane_ParamLimits

0x21da,	// (0x0002d9b1) call_video_pane_t1

0x21f8,	// (0x0002d9cf) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0003a9b9) call_video_pane_t

0x2626,	// (0x0002ddfd) aid_cale_month_size_cell_pane_ParamLimits

0x2626,	// (0x0002ddfd) aid_cale_month_size_cell_pane

0xf55a,	// (0x0003ad31) smil_status_volume_pane_g

0xb3f1,	// (0x00036bc8) volume_smil_pane_ParamLimits

0xae42,	// (0x00036619) aid_popup2_width_pane

0x1a10,	// (0x0002d1e7) cell_qdial_pane_g4_ParamLimits

0x1a10,	// (0x0002d1e7) cell_qdial_pane_g4

0x335e,	// (0x0002eb35) aid_blid_cardinal_pane_ParamLimits

0x336a,	// (0x0002eb41) aid_blid_destination_pane_ParamLimits

0x336a,	// (0x0002eb41) aid_blid_destination_pane

0xbc9f,	// (0x00037476) bg_popup_call_poc_act_pane_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_call_poc_act_pane

0xbc9f,	// (0x00037476) bg_popup_call_poc_inact_pane_ParamLimits

0xbc9f,	// (0x00037476) bg_popup_call_poc_inact_pane

0xdcc3,	// (0x0003949a) bg_popup_call_poc_act_pane_g1

0xdccb,	// (0x000394a2) bg_popup_call_poc_act_pane_g2

0xdcd3,	// (0x000394aa) bg_popup_call_poc_act_pane_g3

0xdc93,	// (0x0003946a) bg_popup_call_poc_act_pane_g4

0xdc9b,	// (0x00039472) bg_popup_call_poc_act_pane_g5

0xdcdb,	// (0x000394b2) bg_popup_call_poc_act_pane_g6

0xdcab,	// (0x00039482) bg_popup_call_poc_act_pane_g7

0xdce3,	// (0x000394ba) bg_popup_call_poc_act_pane_g8

0xba44,	// (0x0003721b) main_usb_pane

0xb398,	// (0x00036b6f) popup_cale_lunar_info_window

0x24d2,	// (0x0002dca9) im_reading_pane_t1_ParamLimits

0xc062,	// (0x00037839) list_im_pane_ParamLimits

0xc073,	// (0x0003784a) scroll_pane_cp07_ParamLimits

0xba44,	// (0x0003721b) grid_highlight_pane_cp012

0xbc9f,	// (0x00037476) mup_scale_pane_ParamLimits

0xcc21,	// (0x000383f8) main_usb_pane_g1_ParamLimits

0xcc21,	// (0x000383f8) main_usb_pane_g1

0x3d25,	// (0x0002f4fc) main_usb_pane_g2_ParamLimits

0x3d25,	// (0x0002f4fc) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0003acd6) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0003acd6) main_usb_pane_g

0x3d3b,	// (0x0002f512) main_usb_pane_t1_ParamLimits

0x3d3b,	// (0x0002f512) main_usb_pane_t1

0x3d4d,	// (0x0002f524) main_usb_pane_t2_ParamLimits

0x3d4d,	// (0x0002f524) main_usb_pane_t2

0x3d5f,	// (0x0002f536) main_usb_pane_t3_ParamLimits

0x3d5f,	// (0x0002f536) main_usb_pane_t3

0x3d71,	// (0x0002f548) main_usb_pane_t4_ParamLimits

0x3d71,	// (0x0002f548) main_usb_pane_t4

0x3d83,	// (0x0002f55a) main_usb_pane_t5_ParamLimits

0x3d83,	// (0x0002f55a) main_usb_pane_t5

0x3d95,	// (0x0002f56c) main_usb_pane_t6_ParamLimits

0x3d95,	// (0x0002f56c) main_usb_pane_t6

0x0005,

0xf504,	// (0x0003acdb) main_usb_pane_t_ParamLimits

0x330d,	// (0x0002eae4) aid_text_placing

0x3316,	// (0x0002eaed) main_location2_pane_t1_ParamLimits

0x3328,	// (0x0002eaff) main_location2_pane_t2_ParamLimits

0x333a,	// (0x0002eb11) main_location2_pane_t3_ParamLimits

0x334c,	// (0x0002eb23) main_location2_pane_t4_ParamLimits

0x334c,	// (0x0002eb23) main_location2_pane_t4

0xf31e,	// (0x0003aaf5) main_location2_pane_t_ParamLimits

0xbcdb,	// (0x000374b2) find_pinb_pane_g2_ParamLimits

0xbcdb,	// (0x000374b2) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0003a871) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0003a871) find_pinb_pane_g

0xbce7,	// (0x000374be) find_pinb_pane_t1_ParamLimits

0xbcf9,	// (0x000374d0) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0003a876) find_pinb_pane_t_ParamLimits

0xba44,	// (0x0003721b) main_call3_pane

0x2b11,	// (0x0002e2e8) cale_month_day_heading_pane_t1_ParamLimits

0x2b97,	// (0x0002e36e) cale_month_day_heading_pane_t2_ParamLimits

0x2c10,	// (0x0002e3e7) cale_month_day_heading_pane_t3_ParamLimits

0x2c89,	// (0x0002e460) cale_month_day_heading_pane_t4_ParamLimits

0x2d0a,	// (0x0002e4e1) cale_month_day_heading_pane_t5_ParamLimits

0x2d93,	// (0x0002e56a) cale_month_day_heading_pane_t6_ParamLimits

0x2e1c,	// (0x0002e5f3) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0003a9f1) cale_month_day_heading_pane_t_ParamLimits

0xc2bd,	// (0x00037a94) smil_status_volume_pane

0x37b8,	// (0x0002ef8f) postcard_address_pane_ParamLimits

0x37b8,	// (0x0002ef8f) postcard_address_pane

0x37ca,	// (0x0002efa1) postcard_message_pane_ParamLimits

0x37ca,	// (0x0002efa1) postcard_message_pane

0x3d03,	// (0x0002f4da) call2_cli_visual_pane_t1_ParamLimits

0x3d03,	// (0x0002f4da) call2_cli_visual_pane_t1

0xde5a,	// (0x00039631) postcard_message_pane_t1_ParamLimits

0xde5a,	// (0x00039631) postcard_message_pane_t1

0xde42,	// (0x00039619) postcard_address_pane_t1_ParamLimits

0xde42,	// (0x00039619) postcard_address_pane_t1

0x41d7,	// (0x0002f9ae) popup_call3_audio_in_window_ParamLimits

0x41d7,	// (0x0002f9ae) popup_call3_audio_in_window

0x4062,	// (0x0002f839) bg_popup_call3_in_pane_ParamLimits

0x4062,	// (0x0002f839) bg_popup_call3_in_pane

0x40d8,	// (0x0002f8af) popup_call3_audio_in_window_g1_ParamLimits

0x40d8,	// (0x0002f8af) popup_call3_audio_in_window_g1

0x40f8,	// (0x0002f8cf) popup_call3_audio_in_window_g2_ParamLimits

0x40f8,	// (0x0002f8cf) popup_call3_audio_in_window_g2

0x4118,	// (0x0002f8ef) popup_call3_audio_in_window_g3_ParamLimits

0x4118,	// (0x0002f8ef) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0003ad38) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0003ad38) popup_call3_audio_in_window_g

0x4149,	// (0x0002f920) popup_call3_audio_in_window_t1_ParamLimits

0x4149,	// (0x0002f920) popup_call3_audio_in_window_t1

0x4187,	// (0x0002f95e) popup_call3_audio_in_window_t2_ParamLimits

0x4187,	// (0x0002f95e) popup_call3_audio_in_window_t2

0x41c5,	// (0x0002f99c) popup_call3_audio_in_window_t3_ParamLimits

0x41c5,	// (0x0002f99c) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0003ad41) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0003ad41) popup_call3_audio_in_window_t

0xbf73,	// (0x0003774a) bg_popup_call3_rect_pane

0xdc3b,	// (0x00039412) bg_popup_call3_rect_pane_g1

0xbe7a,	// (0x00037651) bg_popup_call3_rect_pane_g2

0xdc43,	// (0x0003941a) bg_popup_call3_rect_pane_g3

0xdc4b,	// (0x00039422) bg_popup_call3_rect_pane_g4

0xdc53,	// (0x0003942a) bg_popup_call3_rect_pane_g5

0xdc5b,	// (0x00039432) bg_popup_call3_rect_pane_g6

0xdc63,	// (0x0003943a) bg_popup_call3_rect_pane_g7

0xae30,	// (0x00036607) mup_visualizer_osc_pane

0xae30,	// (0x00036607) mup_visualizer_spec_pane

0x4092,	// (0x0002f869) call3_video_qcif_pane_ParamLimits

0x4092,	// (0x0002f869) call3_video_qcif_pane

0x40a5,	// (0x0002f87c) call3_video_qcif_uncrop_pane_ParamLimits

0x40a5,	// (0x0002f87c) call3_video_qcif_uncrop_pane

0x40b3,	// (0x0002f88a) call3_video_subqcif_pane_ParamLimits

0x40b3,	// (0x0002f88a) call3_video_subqcif_pane

0x40c7,	// (0x0002f89e) call3_video_subqcif_uncrop_pane_ParamLimits

0x40c7,	// (0x0002f89e) call3_video_subqcif_uncrop_pane

0x4138,	// (0x0002f90f) popup_call3_audio_in_window_g4_ParamLimits

0x4138,	// (0x0002f90f) popup_call3_audio_in_window_g4

0xae30,	// (0x00036607) mup_spec_half_pane

0xae30,	// (0x00036607) mup_spec_half_pane_cp

0xae30,	// (0x00036607) mup_osc_middle_pane

0xbfa9,	// (0x00037780) mup_visualizer_osc_pane_g1

0xddf5,	// (0x000395cc) mup_spec_bar_pane_ParamLimits

0xddf5,	// (0x000395cc) mup_spec_bar_pane

0xbfa9,	// (0x00037780) mup_spec_bar_pane_g1

0xbfa9,	// (0x00037780) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) mup_spec_bar_pane_g

0x1a99,	// (0x0002d270) aid_cale_week_size_cell_pane_ParamLimits

0x1ab3,	// (0x0002d28a) bg_cale_heading_pane_ParamLimits

0xbed5,	// (0x000376ac) bg_cale_pane_cp01_ParamLimits

0x1acb,	// (0x0002d2a2) cale_week_corner_pane_ParamLimits

0x1aea,	// (0x0002d2c1) cale_week_day_heading_pane_ParamLimits

0x1b07,	// (0x0002d2de) cale_week_scroll_pane_g1_ParamLimits

0x1b1a,	// (0x0002d2f1) cale_week_scroll_pane_g2_ParamLimits

0x1b32,	// (0x0002d309) cale_week_scroll_pane_g3_ParamLimits

0x1b4a,	// (0x0002d321) cale_week_scroll_pane_g4_ParamLimits

0x1b62,	// (0x0002d339) cale_week_scroll_pane_g5_ParamLimits

0x1b82,	// (0x0002d359) cale_week_scroll_pane_g6_ParamLimits

0x1ba2,	// (0x0002d379) cale_week_scroll_pane_g7_ParamLimits

0x1bc2,	// (0x0002d399) cale_week_scroll_pane_g8_ParamLimits

0x1be6,	// (0x0002d3bd) cale_week_scroll_pane_g9_ParamLimits

0x1bfe,	// (0x0002d3d5) cale_week_scroll_pane_g10_ParamLimits

0x1c16,	// (0x0002d3ed) cale_week_scroll_pane_g11_ParamLimits

0x1c2e,	// (0x0002d405) cale_week_scroll_pane_g12_ParamLimits

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g13_ParamLimits

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g14_ParamLimits

0x1c46,	// (0x0002d41d) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0003a902) cale_week_scroll_pane_g_ParamLimits

0x1c82,	// (0x0002d459) cale_week_time_pane_ParamLimits

0x1ca6,	// (0x0002d47d) grid_cale_week_pane_ParamLimits

0xbef2,	// (0x000376c9) listscroll_cale_week_pane_t1

0xbf04,	// (0x000376db) scroll_pane_cp08_ParamLimits

0x2686,	// (0x0002de5d) cale_month_corner_pane_ParamLimits

0xc293,	// (0x00037a6a) cale_month_pane_t1

0x2aa4,	// (0x0002e27b) cale_month_week_pane_ParamLimits

0x318d,	// (0x0002e964) popup_call_status_window_g1_ParamLimits

0x31a1,	// (0x0002e978) popup_call_status_window_g2_ParamLimits

0x31b5,	// (0x0002e98c) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0003aa7c) popup_call_status_window_g_ParamLimits

0xc65b,	// (0x00037e32) aid_call2_pane

0x369d,	// (0x0002ee74) msg_header_pane_g1

0x37b8,	// (0x0002ef8f) postcard_address2_pane_ParamLimits

0x37b8,	// (0x0002ef8f) postcard_address2_pane

0x37ca,	// (0x0002efa1) postcard_message2_pane_ParamLimits

0x37ca,	// (0x0002efa1) postcard_message2_pane

0x4033,	// (0x0002f80a) message2_row_pane_ParamLimits

0x4033,	// (0x0002f80a) message2_row_pane

0x404f,	// (0x0002f826) address2_row_pane_ParamLimits

0x404f,	// (0x0002f826) address2_row_pane

0xddc2,	// (0x00039599) postcard_message2_row_pane_g1

0xddca,	// (0x000395a1) postcard_message2_row_pane_t1

0xddc2,	// (0x00039599) address2_row_pane_g1

0xddca,	// (0x000395a1) address2_row_pane_t1

0x1f06,	// (0x0002d6dd) aid_size_cell_vorec

0xba44,	// (0x0003721b) main_rss_pane

0xddd8,	// (0x000395af) rss_list_single_pane_ParamLimits

0xddd8,	// (0x000395af) rss_list_single_pane

0xdde6,	// (0x000395bd) rss_list_single_pane_t1

0xdde6,	// (0x000395bd) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0003ad2c) rss_list_single_pane_t

0xba44,	// (0x0003721b) main_camera2_pane

0xba44,	// (0x0003721b) main_video2_pane

0xb406,	// (0x00036bdd) cams_zoom_pane_cp2_ParamLimits

0xb406,	// (0x00036bdd) cams_zoom_pane_cp2

0xb406,	// (0x00036bdd) image2_vga_pane_ParamLimits

0xb406,	// (0x00036bdd) image2_vga_pane

0xb414,	// (0x00036beb) main_camera2_pane_g1_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g1

0xb414,	// (0x00036beb) main_camera2_pane_g2_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g2

0xb414,	// (0x00036beb) main_camera2_pane_g3_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g3

0xb414,	// (0x00036beb) main_camera2_pane_g4_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g4

0xb414,	// (0x00036beb) main_camera2_pane_g5_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g5

0xb414,	// (0x00036beb) main_camera2_pane_g6_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g6

0xb414,	// (0x00036beb) main_camera2_pane_g7_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g7

0xb414,	// (0x00036beb) main_camera2_pane_g8_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0003ad48) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0003ad48) main_camera2_pane_g

0x0b01,	// (0x0002c2d8) main_camera2_pane_t1_ParamLimits

0x0b01,	// (0x0002c2d8) main_camera2_pane_t1

0x0b01,	// (0x0002c2d8) main_camera2_pane_t2_ParamLimits

0x0b01,	// (0x0002c2d8) main_camera2_pane_t2

0x0b01,	// (0x0002c2d8) main_camera2_pane_t3_ParamLimits

0x0b01,	// (0x0002c2d8) main_camera2_pane_t3

0x0b01,	// (0x0002c2d8) main_camera2_pane_t4_ParamLimits

0x0b01,	// (0x0002c2d8) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0003ad5b) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0003ad5b) main_camera2_pane_t

0xb458,	// (0x00036c2f) cams_zoom_pane_cp4_ParamLimits

0xb458,	// (0x00036c2f) cams_zoom_pane_cp4

0x0b15,	// (0x0002c2ec) image2_cif_pane_ParamLimits

0x0b15,	// (0x0002c2ec) image2_cif_pane

0xae9f,	// (0x00036676) image2_subqcif_pane_ParamLimits

0xae9f,	// (0x00036676) image2_subqcif_pane

0x0b23,	// (0x0002c2fa) main_video2_pane_g1_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g1

0x0b23,	// (0x0002c2fa) main_video2_pane_g2_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g2

0x0b23,	// (0x0002c2fa) main_video2_pane_g3_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g3

0x0b23,	// (0x0002c2fa) main_video2_pane_g4_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g4

0x0b23,	// (0x0002c2fa) main_video2_pane_g5_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g5

0x0b23,	// (0x0002c2fa) main_video2_pane_g6_ParamLimits

0x0b23,	// (0x0002c2fa) main_video2_pane_g6

0x0005,

0xf593,	// (0x0003ad6a) main_video2_pane_g_ParamLimits

0xf593,	// (0x0003ad6a) main_video2_pane_g

0x0b31,	// (0x0002c308) main_video2_pane_t1_ParamLimits

0x0b31,	// (0x0002c308) main_video2_pane_t1

0x0b31,	// (0x0002c308) main_video2_pane_t2_ParamLimits

0x0b31,	// (0x0002c308) main_video2_pane_t2

0x0b31,	// (0x0002c308) main_video2_pane_t3_ParamLimits

0x0b31,	// (0x0002c308) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0003ad77) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0003ad77) main_video2_pane_t

0x3e29,	// (0x0002f600) call_muted_g2

0x0001,

0xf547,	// (0x0003ad1e) call_muted_g

0xba44,	// (0x0003721b) main_mup2_pane

0xca8a,	// (0x00038261) main_mup2_pane_g1_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g1

0xca8a,	// (0x00038261) main_mup2_pane_g2_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g2

0x4298,	// (0x0002fa6f) main_mup_pane_g13_cp1

0xaead,	// (0x00036684) mup_volume_pane_cp1

0xca8a,	// (0x00038261) main_mup2_pane_g4_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g4

0xca8a,	// (0x00038261) main_mup2_pane_g5_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g5

0xca8a,	// (0x00038261) main_mup2_pane_g6_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g6

0xca8a,	// (0x00038261) main_mup2_pane_g7_ParamLimits

0xca8a,	// (0x00038261) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0003ad7e) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0003ad7e) main_mup2_pane_g

0xca98,	// (0x0003826f) main_mup2_pane_t1_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t1

0xca98,	// (0x0003826f) main_mup2_pane_t2_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t2

0xca98,	// (0x0003826f) main_mup2_pane_t3_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t3

0xca98,	// (0x0003826f) main_mup2_pane_t4_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t4

0xca98,	// (0x0003826f) main_mup2_pane_t5_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t5

0xca98,	// (0x0003826f) main_mup2_pane_t6_ParamLimits

0xca98,	// (0x0003826f) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0003ad8d) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0003ad8d) main_mup2_pane_t

0xcac0,	// (0x00038297) mup2_visualizer_pane_ParamLimits

0xcac0,	// (0x00038297) mup2_visualizer_pane

0xcac0,	// (0x00038297) mup_progress_pane_cp_ParamLimits

0xcac0,	// (0x00038297) mup_progress_pane_cp

0xb47c,	// (0x00036c53) mup_volume_pane_cp_ParamLimits

0xb47c,	// (0x00036c53) mup_volume_pane_cp

0xbd28,	// (0x000374ff) mup2_visualizer_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) mup2_visualizer_pane_g1

0xbd36,	// (0x0003750d) mup2_visualizer_pane_g2_ParamLimits

0xbd36,	// (0x0003750d) mup2_visualizer_pane_g2

0xbd36,	// (0x0003750d) mup2_visualizer_pane_g3_ParamLimits

0xbd36,	// (0x0003750d) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0003a87b) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0003a87b) mup2_visualizer_pane_g

0xcd6a,	// (0x00038541) aid_size_cell_fmradio

0x0837,	// (0x0002c00e) aid_height_parent_landcape

0xc0f1,	// (0x000378c8) wml_content_pane_cp

0xc0f9,	// (0x000378d0) wml_tabs_pane

0xc102,	// (0x000378d9) popup_wml_miniature_window

0xc10a,	// (0x000378e1) scroll_pane_cp021

0xc11e,	// (0x000378f5) wml_content_pane_comp8

0xba44,	// (0x0003721b) bg_popup_sub_pane_cp05

0xde8c,	// (0x00039663) popup_wml_miniature_window_g1

0xde94,	// (0x0003966b) wml_miniature_view_pane

0x41eb,	// (0x0002f9c2) aid_size_wml_view

0x41f3,	// (0x0002f9ca) wml_miniature_view_pane_g1

0x41fc,	// (0x0002f9d3) wml_miniature_view_pane_g2

0x4205,	// (0x0002f9dc) wml_miniature_view_pane_g3

0x420d,	// (0x0002f9e4) wml_miniature_view_pane_g4

0x4215,	// (0x0002f9ec) wml_miniature_view_pane_g5

0x421d,	// (0x0002f9f4) wml_miniature_view_pane_g6

0x4225,	// (0x0002f9fc) wml_miniature_view_pane_g7

0x422d,	// (0x0002fa04) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0003ad9a) wml_miniature_view_pane_g

0xde9c,	// (0x00039673) background_graphic_ParamLimits

0xde9c,	// (0x00039673) background_graphic

0xdea8,	// (0x0003967f) wml_tabs_2_pane

0xdeb1,	// (0x00039688) wml_tabs_3_pane_ParamLimits

0xdeb1,	// (0x00039688) wml_tabs_3_pane

0xdec3,	// (0x0003969a) wml_tabs_4_pane_ParamLimits

0xdec3,	// (0x0003969a) wml_tabs_4_pane

0xded9,	// (0x000396b0) wml_tabs_5_pane_ParamLimits

0xded9,	// (0x000396b0) wml_tabs_5_pane

0xdef3,	// (0x000396ca) wml_tabs_pane_g2_ParamLimits

0xdef3,	// (0x000396ca) wml_tabs_pane_g2

0xdf08,	// (0x000396df) wml_tabs_pane_g3_ParamLimits

0xdf08,	// (0x000396df) wml_tabs_pane_g3

0xdf1d,	// (0x000396f4) wml_tabs_2_active_pane_ParamLimits

0xdf1d,	// (0x000396f4) wml_tabs_2_active_pane

0xdf1d,	// (0x000396f4) wml_tabs_2_passive_pane_ParamLimits

0xdf1d,	// (0x000396f4) wml_tabs_2_passive_pane

0x4235,	// (0x0002fa0c) wml_tabs_3_active_pane_cp_ParamLimits

0x4235,	// (0x0002fa0c) wml_tabs_3_active_pane_cp

0x424a,	// (0x0002fa21) wml_tabs_3_passive_pane_ParamLimits

0x424a,	// (0x0002fa21) wml_tabs_3_passive_pane

0x425d,	// (0x0002fa34) wml_tabs_3_passive_pane_cp_ParamLimits

0x425d,	// (0x0002fa34) wml_tabs_3_passive_pane_cp

0x4274,	// (0x0002fa4b) tabs_4_active_pane

0x427c,	// (0x0002fa53) tabs_4_passive_pane

0x4286,	// (0x0002fa5d) tabs_4_passive_pane_cp

0x428e,	// (0x0002fa65) tabs_4_passive_pane_cp2

0x3d1d,	// (0x0002f4f4) aid_height_text

0xcac0,	// (0x00038297) mup_volume_cont_pane_ParamLimits

0xcac0,	// (0x00038297) mup_volume_cont_pane

0xae30,	// (0x00036607) aid_size_cell_pinb

0xae30,	// (0x00036607) aid_size_list_pinb

0xcac0,	// (0x00038297) mup2_volume_cont_pane_ParamLimits

0xcac0,	// (0x00038297) mup2_volume_cont_pane

0xb466,	// (0x00036c3d) mup2_volume_cont_pane_g1_ParamLimits

0xb466,	// (0x00036c3d) mup2_volume_cont_pane_g1

0x0387,	// (0x0002bb5e) aid_size_cell_touch_ParamLimits

0x0387,	// (0x0002bb5e) aid_size_cell_touch

0x056e,	// (0x0002bd45) touch_pane_ParamLimits

0x056e,	// (0x0002bd45) touch_pane

0xaead,	// (0x00036684) main_rss2_pane

0xdf34,	// (0x0003970b) listscroll_rss2_pane

0xdf3d,	// (0x00039714) rss2_navigation_pane

0xdf45,	// (0x0003971c) list_rss2_pane

0xc792,	// (0x00037f69) scroll_pane_cp22

0xdf4d,	// (0x00039724) rss2_navigation_pane_g1

0xdf56,	// (0x0003972d) rss2_navigation_pane_g2

0xdf5e,	// (0x00039735) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0003adab) rss2_navigation_pane_g

0xdf66,	// (0x0003973d) rss2_navigation_pane_t1

0x42a2,	// (0x0002fa79) rss2_list_single_pane_ParamLimits

0x42a2,	// (0x0002fa79) rss2_list_single_pane

0xdf74,	// (0x0003974b) rss2_list_single_pane_t2

0xdf82,	// (0x00039759) rss2_list_single_pane_t3_ParamLimits

0xdf82,	// (0x00039759) rss2_list_single_pane_t3

0xdf9f,	// (0x00039776) rss2_list_single_pane_t4

0x307a,	// (0x0002e851) smil_status_pane_g1

0xae9f,	// (0x00036676) main_image2_pane_ParamLimits

0xae9f,	// (0x00036676) main_image2_pane

0xb414,	// (0x00036beb) main_camera2_pane_g9_ParamLimits

0xb414,	// (0x00036beb) main_camera2_pane_g9

0x0b01,	// (0x0002c2d8) main_camera2_pane_t5_ParamLimits

0x0b01,	// (0x0002c2d8) main_camera2_pane_t5

0xb422,	// (0x00036bf9) main_camera2_pane_t6_ParamLimits

0xb422,	// (0x00036bf9) main_camera2_pane_t6

0x42b7,	// (0x0002fa8e) main_image2_pane_g1_ParamLimits

0x42b7,	// (0x0002fa8e) main_image2_pane_g1

0x39f1,	// (0x0002f1c8) smil2_video_pane_ParamLimits

0x39f1,	// (0x0002f1c8) smil2_video_pane

0xae4e,	// (0x00036625) aid_zoom_text_primary_cp

0xae95,	// (0x0003666c) popup_preview_fixed_window

0xc05a,	// (0x00037831) im_reading_pane_g1

0x0af3,	// (0x0002c2ca) cams2_bc_adjust_pane_cp_ParamLimits

0x0af3,	// (0x0002c2ca) cams2_bc_adjust_pane_cp

0xb44a,	// (0x00036c21) cams2_bc_adjust_pane_ParamLimits

0xb44a,	// (0x00036c21) cams2_bc_adjust_pane

0x4298,	// (0x0002fa6f) cams2_bc_adjust_pane_g1

0xaead,	// (0x00036684) cams2_slider_pane

0x4298,	// (0x0002fa6f) cams2_slider_pane_g1

0x4298,	// (0x0002fa6f) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0003adb2) cams2_slider_pane_g

0x05de,	// (0x0002bdb5) calc_display_pane_ParamLimits

0x0603,	// (0x0002bdda) calc_paper_pane_ParamLimits

0x0626,	// (0x0002bdfd) grid_calc_pane_ParamLimits

0xb32b,	// (0x00036b02) popup_clock_digital_window_t1_ParamLimits

0xcd07,	// (0x000384de) main_image_pane_t1

0x05c0,	// (0x0002bd97) aid_size_cell_calc_ParamLimits

0x05c0,	// (0x0002bd97) aid_size_cell_calc

0x088f,	// (0x0002c066) popup_blid_sat_info2_window_ParamLimits

0x088f,	// (0x0002c066) popup_blid_sat_info2_window

0xdfad,	// (0x00039784) aid_size_cell_blid

0xdfb5,	// (0x0003978c) bg_popup_window_pane_cp07

0xdfd8,	// (0x000397af) grid_popup_blid_pane

0xdfe2,	// (0x000397b9) heading_pane_cp05_ParamLimits

0xdfe2,	// (0x000397b9) heading_pane_cp05

0xe0ac,	// (0x00039883) cell_popup_blid_pane_ParamLimits

0xe0ac,	// (0x00039883) cell_popup_blid_pane

0xe0d0,	// (0x000398a7) cell_popup_blid_pane_g1

0xe0d8,	// (0x000398af) cell_popup_blid_pane_t1

0xcac0,	// (0x00038297) mup2_indicator_pane_ParamLimits

0xcac0,	// (0x00038297) mup2_indicator_pane

0xae30,	// (0x00036607) mup2_visualizer_osc_pane

0xde76,	// (0x0003964d) mup2_visualizer_spec_pane_ParamLimits

0xde76,	// (0x0003964d) mup2_visualizer_spec_pane

0xae30,	// (0x00036607) mup2_spec_half_pane

0xae30,	// (0x00036607) mup2_spec_half_pane_cp

0xe0e6,	// (0x000398bd) mup2_spec_bar_pane_ParamLimits

0xe0e6,	// (0x000398bd) mup2_spec_bar_pane

0xbfa9,	// (0x00037780) mup2_spec_bar_pane_g1

0xe105,	// (0x000398dc) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0003add8) mup2_spec_bar_pane_g

0xae30,	// (0x00036607) mup2_osc_middle_pane

0xbfa9,	// (0x00037780) mup2_visualizer_osc_pane_g1

0xaed7,	// (0x000366ae) popup_number_entry_window_t1_ParamLimits

0xaeea,	// (0x000366c1) popup_number_entry_window_t2_ParamLimits

0xaefc,	// (0x000366d3) popup_number_entry_window_t3_ParamLimits

0x185c,	// (0x0002d033) popup_number_entry_window_t5_ParamLimits

0x185c,	// (0x0002d033) popup_number_entry_window_t5

0xf045,	// (0x0003a81c) popup_number_entry_window_t_ParamLimits

0xaf0e,	// (0x000366e5) text_title_cp2_ParamLimits

0xb36a,	// (0x00036b41) aid_hotspot_pointer_text2_pane

0xb384,	// (0x00036b5b) main_viewer_pane_g9_ParamLimits

0xb384,	// (0x00036b5b) main_viewer_pane_g9

0xc293,	// (0x00037a6a) cale_month_pane_t1_ParamLimits

0xc2d0,	// (0x00037aa7) bg_cale_pane_ParamLimits

0xc2e8,	// (0x00037abf) list_cale_pane_ParamLimits

0xc2f9,	// (0x00037ad0) listscroll_cale_day_pane_t1

0xc30b,	// (0x00037ae2) scroll_pane_cp09_ParamLimits

0x3437,	// (0x0002ec0e) main_mup_eq_pane_t1_ParamLimits

0x3437,	// (0x0002ec0e) main_mup_eq_pane_t1

0x3451,	// (0x0002ec28) main_mup_eq_pane_t2_ParamLimits

0x3451,	// (0x0002ec28) main_mup_eq_pane_t2

0x346b,	// (0x0002ec42) main_mup_eq_pane_t3_ParamLimits

0x346b,	// (0x0002ec42) main_mup_eq_pane_t3

0x3487,	// (0x0002ec5e) main_mup_eq_pane_t4_ParamLimits

0x3487,	// (0x0002ec5e) main_mup_eq_pane_t4

0x34a3,	// (0x0002ec7a) main_mup_eq_pane_t5_ParamLimits

0x34a3,	// (0x0002ec7a) main_mup_eq_pane_t5

0x34bf,	// (0x0002ec96) main_mup_eq_pane_t6_ParamLimits

0x34bf,	// (0x0002ec96) main_mup_eq_pane_t6

0x34d3,	// (0x0002ecaa) main_mup_eq_pane_t7_ParamLimits

0x34d3,	// (0x0002ecaa) main_mup_eq_pane_t7

0x34e7,	// (0x0002ecbe) main_mup_eq_pane_t8_ParamLimits

0x34e7,	// (0x0002ecbe) main_mup_eq_pane_t8

0x34fb,	// (0x0002ecd2) main_mup_eq_pane_t9_ParamLimits

0x34fb,	// (0x0002ecd2) main_mup_eq_pane_t9

0x3515,	// (0x0002ecec) main_mup_eq_pane_t10_ParamLimits

0x3515,	// (0x0002ecec) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0003ab7b) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0003ab7b) main_mup_eq_pane_t

0x35c4,	// (0x0002ed9b) mup_equalizer_pane_cp5_ParamLimits

0x35d8,	// (0x0002edaf) mup_equalizer_pane_cp6_ParamLimits

0x35ec,	// (0x0002edc3) mup_equalizer_pane_cp7_ParamLimits

0xaead,	// (0x00036684) main_gallery_pane

0xde14,	// (0x000395eb) smil2_volume_pane

0xde1c,	// (0x000395f3) smil_status_volume_pane_g1_ParamLimits

0xde2f,	// (0x00039606) smil_status_volume_pane_g2_ParamLimits

0xb3e4,	// (0x00036bbb) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0003ad31) smil_status_volume_pane_g_ParamLimits

0xdfb5,	// (0x0003978c) bg_popup_window_pane_cp07_ParamLimits

0xdfc3,	// (0x0003979a) blid_firmament_pane

0xbcc1,	// (0x00037498) aid_size_cell_gallery_ParamLimits

0xbcc1,	// (0x00037498) aid_size_cell_gallery

0xbcc1,	// (0x00037498) grid_gallery_pane_ParamLimits

0xbcc1,	// (0x00037498) grid_gallery_pane

0xdfb5,	// (0x0003978c) cell_gallery_pane_ParamLimits

0xdfb5,	// (0x0003978c) cell_gallery_pane

0xbcc1,	// (0x00037498) bg_cell_gallery_focus_pane_ParamLimits

0xbcc1,	// (0x00037498) bg_cell_gallery_focus_pane

0xbd28,	// (0x000374ff) cell_gallery_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) cell_gallery_pane_g1

0xbd28,	// (0x000374ff) cell_gallery_pane_g2_ParamLimits

0xbd28,	// (0x000374ff) cell_gallery_pane_g2

0xbd28,	// (0x000374ff) cell_gallery_pane_g3_ParamLimits

0xbd28,	// (0x000374ff) cell_gallery_pane_g3

0xbd36,	// (0x0003750d) cell_gallery_pane_g4_ParamLimits

0xbd36,	// (0x0003750d) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0003addd) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0003addd) cell_gallery_pane_g

0xe10f,	// (0x000398e6) bg_cell_gallery_focus_pane_g1

0xe117,	// (0x000398ee) bg_cell_gallery_focus_pane_g2

0xe11f,	// (0x000398f6) bg_cell_gallery_focus_pane_g3

0xe127,	// (0x000398fe) bg_cell_gallery_focus_pane_g4

0xe12f,	// (0x00039906) bg_cell_gallery_focus_pane_g5

0xe137,	// (0x0003990e) bg_cell_gallery_focus_pane_g6

0xe13f,	// (0x00039916) bg_cell_gallery_focus_pane_g7

0xe147,	// (0x0003991e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0003ade6) bg_cell_gallery_focus_pane_g

0xe14f,	// (0x00039926) aid_firma_cardinal

0xe163,	// (0x0003993a) blid_firmament_pane_t1

0xe17a,	// (0x00039951) blid_firmament_pane_t2

0xe191,	// (0x00039968) blid_firmament_pane_t3

0xe1a8,	// (0x0003997f) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0003adf7) blid_firmament_pane_t

0xe1bf,	// (0x00039996) blid_sat_info_pane

0xbfa9,	// (0x00037780) blid_sat_info_pane_g1

0xbfa9,	// (0x00037780) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) blid_sat_info_pane_g

0xe1cf,	// (0x000399a6) blid_sat_info_pane_t1

0xe1dd,	// (0x000399b4) smil2_volume_content_pane

0xe1e6,	// (0x000399bd) smil2_volume_pane_g1

0xbe11,	// (0x000375e8) smil2_volume_content_pane_g1

0xe1ee,	// (0x000399c5) smil2_volume_content_pane_g2

0xe1f7,	// (0x000399ce) smil2_volume_content_pane_g3

0xe200,	// (0x000399d7) smil2_volume_content_pane_g4

0xe209,	// (0x000399e0) smil2_volume_content_pane_g5

0xe212,	// (0x000399e9) smil2_volume_content_pane_g6

0xe21b,	// (0x000399f2) smil2_volume_content_pane_g7

0xe224,	// (0x000399fb) smil2_volume_content_pane_g8

0xe22d,	// (0x00039a04) smil2_volume_content_pane_g9

0xe236,	// (0x00039a0d) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0003ae00) smil2_volume_content_pane_g

0x1d5a,	// (0x0002d531) cale_week_day_heading_pane_t1_ParamLimits

0x1d84,	// (0x0002d55b) cale_week_day_heading_pane_t2_ParamLimits

0x1db3,	// (0x0002d58a) cale_week_day_heading_pane_t3_ParamLimits

0x1de2,	// (0x0002d5b9) cale_week_day_heading_pane_t4_ParamLimits

0x1e11,	// (0x0002d5e8) cale_week_day_heading_pane_t5_ParamLimits

0x1e48,	// (0x0002d61f) cale_week_day_heading_pane_t6_ParamLimits

0x1e7f,	// (0x0002d656) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0003a923) cale_week_day_heading_pane_t_ParamLimits

0xbf21,	// (0x000376f8) bg_cale_side_pane_ParamLimits

0x0703,	// (0x0002beda) cale_week_time_pane_t1_ParamLimits

0x071d,	// (0x0002bef4) cale_week_time_pane_t2_ParamLimits

0x0737,	// (0x0002bf0e) cale_week_time_pane_t3_ParamLimits

0x0751,	// (0x0002bf28) cale_week_time_pane_t4_ParamLimits

0x076b,	// (0x0002bf42) cale_week_time_pane_t5_ParamLimits

0x0785,	// (0x0002bf5c) cale_week_time_pane_t6_ParamLimits

0x079f,	// (0x0002bf76) cale_week_time_pane_t7_ParamLimits

0x07b9,	// (0x0002bf90) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0003a932) cale_week_time_pane_t_ParamLimits

0x1ea9,	// (0x0002d680) cell_cale_week_pane_g2_ParamLimits

0xbf21,	// (0x000376f8) bg_cale_side_pane_cp01_ParamLimits

0x2ead,	// (0x0002e684) cale_month_week_pane_t1_ParamLimits

0x2ec6,	// (0x0002e69d) cale_month_week_pane_t2_ParamLimits

0x2edf,	// (0x0002e6b6) cale_month_week_pane_t3_ParamLimits

0x2ef8,	// (0x0002e6cf) cale_month_week_pane_t4_ParamLimits

0x2f11,	// (0x0002e6e8) cale_month_week_pane_t5_ParamLimits

0x2f2a,	// (0x0002e701) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0003aa00) cale_month_week_pane_t_ParamLimits

0xb2a7,	// (0x00036a7e) cell_cale_month_pane_g1_ParamLimits

0xaead,	// (0x00036684) main_cale_event_viewer_pane

0xae30,	// (0x00036607) listscroll_cale_event_viewer_pane

0xe23f,	// (0x00039a16) list_cale_ev_pane

0xe247,	// (0x00039a1e) scroll_pane_cp023

0xe253,	// (0x00039a2a) field_cale_ev_pane_ParamLimits

0xe253,	// (0x00039a2a) field_cale_ev_pane

0xe271,	// (0x00039a48) field_cale_ev_content_pane_ParamLimits

0xe271,	// (0x00039a48) field_cale_ev_content_pane

0xe27d,	// (0x00039a54) field_cale_ev_pane_g1_ParamLimits

0xe27d,	// (0x00039a54) field_cale_ev_pane_g1

0xe289,	// (0x00039a60) field_cale_ev_pane_g2_ParamLimits

0xe289,	// (0x00039a60) field_cale_ev_pane_g2

0xe2a1,	// (0x00039a78) field_cale_ev_pane_g3_ParamLimits

0xe2a1,	// (0x00039a78) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0003ae15) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0003ae15) field_cale_ev_pane_g

0xe2b9,	// (0x00039a90) field_cale_ev_pane_t1_ParamLimits

0xe2b9,	// (0x00039a90) field_cale_ev_pane_t1

0xbe94,	// (0x0003766b) field_cale_ev_content_pane_t1_ParamLimits

0xbe94,	// (0x0003766b) field_cale_ev_content_pane_t1

0xcb6b,	// (0x00038342) bg_button_pane_cp01

0x1a87,	// (0x0002d25e) listscroll_cale_week_pane_ParamLimits

0xbecc,	// (0x000376a3) popup_toolbar_window_cp01

0xbef2,	// (0x000376c9) listscroll_cale_week_pane_t1_ParamLimits

0x1a87,	// (0x0002d25e) listscroll_cale_day_pane_ParamLimits

0xbecc,	// (0x000376a3) popup_toolbar_window_cp02

0xc2f9,	// (0x00037ad0) listscroll_cale_day_pane_t1_ParamLimits

0x0855,	// (0x0002c02c) main_cale_month_pane_ParamLimits

0xb3cf,	// (0x00036ba6) popup_toolbar_window_cp03_ParamLimits

0xb3cf,	// (0x00036ba6) popup_toolbar_window_cp03

0x38b9,	// (0x0002f090) main_image_pane_g2_ParamLimits

0x38b9,	// (0x0002f090) main_image_pane_g2

0x38ca,	// (0x0002f0a1) main_image_pane_g3_ParamLimits

0x38ca,	// (0x0002f0a1) main_image_pane_g3

0x0002,

0xf436,	// (0x0003ac0d) main_image_pane_g_ParamLimits

0xf436,	// (0x0003ac0d) main_image_pane_g

0xcd07,	// (0x000384de) main_image_pane_t1_ParamLimits

0x38db,	// (0x0002f0b2) main_image_pane_t2_ParamLimits

0x38db,	// (0x0002f0b2) main_image_pane_t2

0x38ed,	// (0x0002f0c4) main_image_pane_t3_ParamLimits

0x38ed,	// (0x0002f0c4) main_image_pane_t3

0x3915,	// (0x0002f0ec) main_image_pane_t4_ParamLimits

0x3915,	// (0x0002f0ec) main_image_pane_t4

0x0003,

0xf43d,	// (0x0003ac14) main_image_pane_t_ParamLimits

0xf43d,	// (0x0003ac14) main_image_pane_t

0x3935,	// (0x0002f10c) popup_image_details_window_cp01

0x393f,	// (0x0002f116) popup_toobar_trans_pane_cp01_ParamLimits

0x393f,	// (0x0002f116) popup_toobar_trans_pane_cp01

0x096e,	// (0x0002c145) popup_image_details_window_ParamLimits

0x096e,	// (0x0002c145) popup_image_details_window

0xb3a2,	// (0x00036b79) popup_image_focus_window

0xb406,	// (0x00036bdd) camera2_autofocus_pane_ParamLimits

0xb406,	// (0x00036bdd) camera2_autofocus_pane

0xae30,	// (0x00036607) bg_popup_sub_pane_cp06

0xe2d0,	// (0x00039aa7) popup_image_focus_window_g1

0xe2d8,	// (0x00039aaf) popup_image_focus_window_g2

0xe2e0,	// (0x00039ab7) popup_image_focus_window_g3

0xe2e8,	// (0x00039abf) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0003ae1c) popup_image_focus_window_g

0xe2f0,	// (0x00039ac7) popup_image_focus_window_t1

0xe2fe,	// (0x00039ad5) popup_image_focus_window_t2

0xe30e,	// (0x00039ae5) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0003ae25) popup_image_focus_window_t

0xbd28,	// (0x000374ff) camera2_autofocus_pane_g1

0xbcc1,	// (0x00037498) bg_tb_trans_pane_cp01

0xe31c,	// (0x00039af3) popup_image_details_window_g1

0xe32f,	// (0x00039b06) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0003ae37) popup_image_details_window_g

0xe358,	// (0x00039b2f) popup_image_details_window_t1

0xe36a,	// (0x00039b41) popup_image_details_window_t2

0xe383,	// (0x00039b5a) popup_image_details_window_t3

0xe397,	// (0x00039b6e) popup_image_details_window_t4

0xe3b2,	// (0x00039b89) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0003ae3e) popup_image_details_window_t

0xbd86,	// (0x0003755d) bg_calc_paper_pane_ParamLimits

0xaead,	// (0x00036684) grid_highlight_pane_cp013

0xb217,	// (0x000369ee) list_calc_pane_ParamLimits

0xb229,	// (0x00036a00) scroll_pane_cp024

0xbd9a,	// (0x00037571) bg_calc_display_pane_ParamLimits

0x0654,	// (0x0002be2b) calc_display_pane_t1_ParamLimits

0x0669,	// (0x0002be40) calc_display_pane_t2_ParamLimits

0xb231,	// (0x00036a08) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0003a8a3) calc_display_pane_t_ParamLimits

0x06cd,	// (0x0002bea4) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0003a8c0) cell_calc_pane_g

0x06d6,	// (0x0002bead) cell_calc_pane_t1

0xbdef,	// (0x000375c6) grid_highlight_pane_cp02_ParamLimits

0xbe05,	// (0x000375dc) toolbar_button_pane_cp01_ParamLimits

0xbe05,	// (0x000375dc) toolbar_button_pane_cp01

0xcd4c,	// (0x00038523) temp_image_control_pane_ParamLimits

0xcd4c,	// (0x00038523) temp_image_control_pane

0xae9f,	// (0x00036676) main_mp3_pane

0xe3cc,	// (0x00039ba3) temp_image_control_pane_g1_ParamLimits

0xe3cc,	// (0x00039ba3) temp_image_control_pane_g1

0xe3da,	// (0x00039bb1) temp_image_control_pane_g2_ParamLimits

0xe3da,	// (0x00039bb1) temp_image_control_pane_g2

0xe3ec,	// (0x00039bc3) temp_image_control_pane_g3_ParamLimits

0xe3ec,	// (0x00039bc3) temp_image_control_pane_g3

0x42cd,	// (0x0002faa4) temp_image_control_pane_g4_ParamLimits

0x42cd,	// (0x0002faa4) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0003ae49) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0003ae49) temp_image_control_pane_g

0xe3cc,	// (0x00039ba3) main_mp3_pane_g1

0x42e0,	// (0x0002fab7) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0003ae52) main_mp3_pane_g

0xe421,	// (0x00039bf8) main_mp3_pane_t1

0xbd36,	// (0x0003750d) main_camera_pane_g8_ParamLimits

0xbd36,	// (0x0003750d) main_camera_pane_g8

0x2073,	// (0x0002d84a) main_video_pane_g7_ParamLimits

0x2073,	// (0x0002d84a) main_video_pane_g7

0xb436,	// (0x00036c0d) main_camera2_pane_t7_ParamLimits

0xb436,	// (0x00036c0d) main_camera2_pane_t7

0xc0b1,	// (0x00037888) scroll_pane_cp025_ParamLimits

0xc0b1,	// (0x00037888) scroll_pane_cp025

0xc0c5,	// (0x0003789c) scroll_pane_cp026_ParamLimits

0xc0c5,	// (0x0003789c) scroll_pane_cp026

0xc0d4,	// (0x000378ab) wml_content_pane_ParamLimits

0xaead,	// (0x00036684) main_touch_calib_pane

0x43b4,	// (0x0002fb8b) main_touch_calib_pane_g1

0x43c6,	// (0x0002fb9d) main_touch_calib_pane_g2

0x43d8,	// (0x0002fbaf) main_touch_calib_pane_g3

0x43ea,	// (0x0002fbc1) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0003ae70) main_touch_calib_pane_g

0x43fc,	// (0x0002fbd3) main_touch_calib_pane_t1

0x4416,	// (0x0002fbed) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0003ae79) main_touch_calib_pane_t

0xc86e,	// (0x00038045) mup_progress_pane_cp02

0xc8a3,	// (0x0003807a) navi_pane_g1

0xc95e,	// (0x00038135) navi_pane_mp_t3

0xae9f,	// (0x00036676) main_mp3_pane_ParamLimits

0x3fdb,	// (0x0002f7b2) navi_pane_ParamLimits

0xe3cc,	// (0x00039ba3) main_mp3_pane_g1_ParamLimits

0x42e0,	// (0x0002fab7) main_mp3_pane_g2_ParamLimits

0x42ee,	// (0x0002fac5) main_mp3_pane_g3_ParamLimits

0x42ee,	// (0x0002fac5) main_mp3_pane_g3

0x42fc,	// (0x0002fad3) main_mp3_pane_g4_ParamLimits

0x42fc,	// (0x0002fad3) main_mp3_pane_g4

0xbd28,	// (0x000374ff) main_mp3_pane_g5_ParamLimits

0xbd28,	// (0x000374ff) main_mp3_pane_g5

0xe3fc,	// (0x00039bd3) main_mp3_pane_g6_ParamLimits

0xe3fc,	// (0x00039bd3) main_mp3_pane_g6

0xe409,	// (0x00039be0) main_mp3_pane_g7_ParamLimits

0xe409,	// (0x00039be0) main_mp3_pane_g7

0xe415,	// (0x00039bec) main_mp3_pane_g8_ParamLimits

0xe415,	// (0x00039bec) main_mp3_pane_g8

0xf67b,	// (0x0003ae52) main_mp3_pane_g_ParamLimits

0x4308,	// (0x0002fadf) main_mp3_pane_t2

0x4316,	// (0x0002faed) main_mp3_pane_t3

0xe42f,	// (0x00039c06) main_mp3_pane_t4

0xe43d,	// (0x00039c14) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0003ae63) main_mp3_pane_t

0xe44b,	// (0x00039c22) mup_progress_pane_cp01

0xae4e,	// (0x00036625) aid_zoom_text_secondary2

0xe23f,	// (0x00039a16) list_cale_ev2_pane

0xe247,	// (0x00039a1e) scroll_pane_cp023_ParamLimits

0x446c,	// (0x0002fc43) field_cale_ev2_pane_ParamLimits

0x446c,	// (0x0002fc43) field_cale_ev2_pane

0x448c,	// (0x0002fc63) field_cale_ev2_pane_g1_ParamLimits

0x448c,	// (0x0002fc63) field_cale_ev2_pane_g1

0x4498,	// (0x0002fc6f) field_cale_ev2_pane_g2_ParamLimits

0x4498,	// (0x0002fc6f) field_cale_ev2_pane_g2

0x44b0,	// (0x0002fc87) field_cale_ev2_pane_g3_ParamLimits

0x44b0,	// (0x0002fc87) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0003ae84) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0003ae84) field_cale_ev2_pane_g

0x44c8,	// (0x0002fc9f) field_cale_ev2_pane_t1_ParamLimits

0x44c8,	// (0x0002fc9f) field_cale_ev2_pane_t1

0x44df,	// (0x0002fcb6) field_cale_ev2_pane_t2_ParamLimits

0x44df,	// (0x0002fcb6) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0003ae8d) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0003ae8d) field_cale_ev2_pane_t

0x376e,	// (0x0002ef45) main_postcard_pane_g5_ParamLimits

0x376e,	// (0x0002ef45) main_postcard_pane_g5

0x3784,	// (0x0002ef5b) main_postcard_pane_g6_ParamLimits

0x3784,	// (0x0002ef5b) main_postcard_pane_g6

0xbcc1,	// (0x00037498) camera2_autofocus_pane_cp_ParamLimits

0xbcc1,	// (0x00037498) camera2_autofocus_pane_cp

0xae9f,	// (0x00036676) main_mup3_pane

0x4538,	// (0x0002fd0f) main_mup3_pane_g1_ParamLimits

0x4538,	// (0x0002fd0f) main_mup3_pane_g1

0x455a,	// (0x0002fd31) main_mup3_pane_g2_ParamLimits

0x455a,	// (0x0002fd31) main_mup3_pane_g2

0x45d8,	// (0x0002fdaf) main_mup3_pane_g3_ParamLimits

0x45d8,	// (0x0002fdaf) main_mup3_pane_g3

0x461e,	// (0x0002fdf5) main_mup3_pane_g4_ParamLimits

0x461e,	// (0x0002fdf5) main_mup3_pane_g4

0x4664,	// (0x0002fe3b) main_mup3_pane_g5_ParamLimits

0x4664,	// (0x0002fe3b) main_mup3_pane_g5

0x46aa,	// (0x0002fe81) main_mup3_pane_g6_ParamLimits

0x46aa,	// (0x0002fe81) main_mup3_pane_g6

0xbd36,	// (0x0003750d) main_mup3_pane_g7_ParamLimits

0xbd36,	// (0x0003750d) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0003ae9d) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0003ae9d) main_mup3_pane_g

0x4728,	// (0x0002feff) main_mup3_pane_t1_ParamLimits

0x4728,	// (0x0002feff) main_mup3_pane_t1

0x479c,	// (0x0002ff73) main_mup3_pane_t2_ParamLimits

0x479c,	// (0x0002ff73) main_mup3_pane_t2

0x4870,	// (0x00030047) main_mup3_pane_t4_ParamLimits

0x4870,	// (0x00030047) main_mup3_pane_t4

0x48c6,	// (0x0003009d) main_mup3_pane_t5_ParamLimits

0x48c6,	// (0x0003009d) main_mup3_pane_t5

0x4982,	// (0x00030159) main_mup3_pane_t6_ParamLimits

0x4982,	// (0x00030159) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0003aeae) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0003aeae) main_mup3_pane_t

0x4a3a,	// (0x00030211) mup3_progress_pane_ParamLimits

0x4a3a,	// (0x00030211) mup3_progress_pane

0x4ad0,	// (0x000302a7) popup_mup3_control_window_ParamLimits

0x4ad0,	// (0x000302a7) popup_mup3_control_window

0xe45f,	// (0x00039c36) popup_mup3_text_window

0x4b02,	// (0x000302d9) mup3_progress_pane_t1

0x4b21,	// (0x000302f8) mup3_progress_pane_t2

0xe467,	// (0x00039c3e) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0003aebb) mup3_progress_pane_t

0xe484,	// (0x00039c5b) mup_progress_pane_cp03

0xae30,	// (0x00036607) bg_tb_trans_pane_cp04

0x4b40,	// (0x00030317) mup3_volume_pane

0x4b48,	// (0x0003031f) popup_mup3_control_window_g1

0x4b51,	// (0x00030328) mup3_volume_pane_g1

0x4b5a,	// (0x00030331) mup3_volume_pane_g2

0x4b63,	// (0x0003033a) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0003aec2) mup3_volume_pane_g

0xae30,	// (0x00036607) bg_tb_trans_pane_cp03

0xe494,	// (0x00039c6b) popup_mup3_text_window_g1

0xe49c,	// (0x00039c73) popup_mup3_text_window_t1

0xbde2,	// (0x000375b9) list_calc_item_pane_g1_ParamLimits

0xdf2b,	// (0x00039702) mup_volume_pane_cp_g1

0x4430,	// (0x0002fc07) main_touch_calib_pane_t3

0x4444,	// (0x0002fc1b) main_touch_calib_pane_t4

0x4458,	// (0x0002fc2f) main_touch_calib_pane_t5

0xae3a,	// (0x00036611) aid_cell_size_toolbar2

0xae42,	// (0x00036619) aid_popup3_width_pane

0xae4e,	// (0x00036625) aid_zoom_text_msg_primary

0x1f4e,	// (0x0002d725) vorec_t7

0xbda6,	// (0x0003757d) bg_calc_paper_pane_g1_ParamLimits

0xbdb2,	// (0x00037589) bg_calc_paper_pane_g2_ParamLimits

0xbdbe,	// (0x00037595) bg_calc_paper_pane_g3_ParamLimits

0xbdca,	// (0x000375a1) bg_calc_paper_pane_g4_ParamLimits

0xbdd6,	// (0x000375ad) bg_calc_paper_pane_g5_ParamLimits

0x1984,	// (0x0002d15b) bg_calc_paper_pane_g6_ParamLimits

0x1993,	// (0x0002d16a) bg_calc_paper_pane_g7_ParamLimits

0x19a2,	// (0x0002d179) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0003a8aa) bg_calc_paper_pane_g_ParamLimits

0x19b5,	// (0x0002d18c) calc_bg_paper_pane_g9_ParamLimits

0xbcc1,	// (0x00037498) image_qvga_pane_ParamLimits

0xbcc1,	// (0x00037498) image_qvga_pane

0xbc9f,	// (0x00037476) bg_popup_sub_pane_cp04_ParamLimits

0xcc83,	// (0x0003845a) popup_mup_playback_window_g1_ParamLimits

0xcc8f,	// (0x00038466) popup_mup_playback_window_t1_ParamLimits

0xcca4,	// (0x0003847b) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0003ac08) popup_mup_playback_window_t_ParamLimits

0xbd36,	// (0x0003750d) main_mup2_pane_g3_ParamLimits

0xbd36,	// (0x0003750d) main_mup2_pane_g3

0x227b,	// (0x0002da52) popup_toolbar_window_cp04

0xd086,	// (0x0003885d) popup_call2_audio_second_window_g3_ParamLimits

0xd086,	// (0x0003885d) popup_call2_audio_second_window_g3

0xd49e,	// (0x00038c75) popup_call2_audio_first_window_g4_ParamLimits

0xd49e,	// (0x00038c75) popup_call2_audio_first_window_g4

0xdac5,	// (0x0003929c) popup_call2_audio_in_window_g4_ParamLimits

0xdac5,	// (0x0003929c) popup_call2_audio_in_window_g4

0x389b,	// (0x0002f072) aid_area_sk_bg_cut_ParamLimits

0x389b,	// (0x0002f072) aid_area_sk_bg_cut

0xccb9,	// (0x00038490) aid_area_sk_bg_cut_2_ParamLimits

0xccb9,	// (0x00038490) aid_area_sk_bg_cut_2

0xae30,	// (0x00036607) aid_placing_details_win

0xae30,	// (0x00036607) aid_placing_details_win_2

0xbd28,	// (0x000374ff) camera2_autofocus_pane_g1_ParamLimits

0x0513,	// (0x0002bcea) popup_fixed_preview_cale_window_ParamLimits

0x0513,	// (0x0002bcea) popup_fixed_preview_cale_window

0xc9dc,	// (0x000381b3) navi_slider_pane_g3

0xc9e5,	// (0x000381bc) navi_slider_pane_g4

0xc9ee,	// (0x000381c5) navi_slider_pane_g5

0xc9dc,	// (0x000381b3) navi_slider_pane_g6

0xb351,	// (0x00036b28) navi_slider_pane_g7

0xcb30,	// (0x00038307) mup_scale_pane_g3

0xcb39,	// (0x00038310) mup_scale_pane_g4

0xcb42,	// (0x00038319) mup_scale_pane_g5

0x3600,	// (0x0002edd7) mup_scale_pane_g6

0x3609,	// (0x0002ede0) mup_scale_pane_g7

0x4298,	// (0x0002fa6f) cams2_slider_pane_g3

0x4298,	// (0x0002fa6f) cams2_slider_pane_g4

0x4298,	// (0x0002fa6f) cams2_slider_pane_g5

0x4298,	// (0x0002fa6f) cams2_slider_pane_g6

0x4298,	// (0x0002fa6f) cams2_slider_pane_g7

0xbfa9,	// (0x00037780) camera2_autofocus_pane_cp_g1

0xdd9b,	// (0x00039572) bg_popup_preview_window_pane_cp02_ParamLimits

0xdd9b,	// (0x00039572) bg_popup_preview_window_pane_cp02

0xe4aa,	// (0x00039c81) list_fp_cale_pane_ParamLimits

0xe4aa,	// (0x00039c81) list_fp_cale_pane

0xe4b6,	// (0x00039c8d) popup_fixed_preview_cale_window_t1_ParamLimits

0xe4b6,	// (0x00039c8d) popup_fixed_preview_cale_window_t1

0x4b6c,	// (0x00030343) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b6c,	// (0x00030343) popup_fixed_preview_cale_window_t2

0x4b81,	// (0x00030358) popup_fixed_preview_cale_window_t3_ParamLimits

0x4b81,	// (0x00030358) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0003aec9) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0003aec9) popup_fixed_preview_cale_window_t

0x4b96,	// (0x0003036d) list_single_fp_cale_pane_ParamLimits

0x4b96,	// (0x0003036d) list_single_fp_cale_pane

0xe4d4,	// (0x00039cab) list_single_fp_cale_pane_g1_ParamLimits

0xe4d4,	// (0x00039cab) list_single_fp_cale_pane_g1

0xe4e0,	// (0x00039cb7) list_single_fp_cale_pane_g2_ParamLimits

0xe4e0,	// (0x00039cb7) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0003aed0) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0003aed0) list_single_fp_cale_pane_g

0xe4f9,	// (0x00039cd0) list_single_fp_cale_pane_t1_ParamLimits

0xe4f9,	// (0x00039cd0) list_single_fp_cale_pane_t1

0xe50b,	// (0x00039ce2) list_single_fp_cale_pane_t2_ParamLimits

0xe50b,	// (0x00039ce2) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0003aed7) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0003aed7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaead,	// (0x00036684) main_dialer_pane

0xae30,	// (0x00036607) aid_cell_size_keypad

0xae30,	// (0x00036607) dialer_ne_pane

0xae30,	// (0x00036607) grid_dialer_command_1_pane

0xae30,	// (0x00036607) grid_dialer_command_2_pane

0xae30,	// (0x00036607) grid_dialer_keypad_pane

0x4bab,	// (0x00030382) bg_popup_call_pane_cp06_ParamLimits

0x4bab,	// (0x00030382) bg_popup_call_pane_cp06

0x4bab,	// (0x00030382) dialer_ne_clear_pane_ParamLimits

0x4bab,	// (0x00030382) dialer_ne_clear_pane

0xbfa9,	// (0x00037780) dialer_ne_pane_g1

0xcaac,	// (0x00038283) dialer_ne_pane_t1_ParamLimits

0xcaac,	// (0x00038283) dialer_ne_pane_t1

0x4bb9,	// (0x00030390) dialer_ne_pane_t2_ParamLimits

0x4bb9,	// (0x00030390) dialer_ne_pane_t2

0x4be1,	// (0x000303b8) dialer_ne_pane_t3_ParamLimits

0x4be1,	// (0x000303b8) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0003aedc) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0003aedc) dialer_ne_pane_t

0x4be1,	// (0x000303b8) dialer_ne_pane_t3_copy1_ParamLimits

0x4be1,	// (0x000303b8) dialer_ne_pane_t3_copy1

0xe53e,	// (0x00039d15) cell_dialer_keypad_pane_ParamLimits

0xe53e,	// (0x00039d15) cell_dialer_keypad_pane

0xbcc1,	// (0x00037498) cell_dialer_command_1_pane_ParamLimits

0xbcc1,	// (0x00037498) cell_dialer_command_1_pane

0xe555,	// (0x00039d2c) cell_dialer_command_2_pane_ParamLimits

0xe555,	// (0x00039d2c) cell_dialer_command_2_pane

0xbcc1,	// (0x00037498) bg_button_pane_cp02_ParamLimits

0xbcc1,	// (0x00037498) bg_button_pane_cp02

0xbd28,	// (0x000374ff) cell_dialer_keypad_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) cell_dialer_keypad_pane_g1

0xbcc1,	// (0x00037498) bg_button_pane_cp03_ParamLimits

0xbcc1,	// (0x00037498) bg_button_pane_cp03

0xbd28,	// (0x000374ff) cell_dialer_command_1_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) cell_dialer_command_1_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp04

0xbfa9,	// (0x00037780) cell_dialer_command_2_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp06

0xbfa9,	// (0x00037780) dialer_ne_clear_pane_g1

0xc8af,	// (0x00038086) navi_pane_g2

0xc8dd,	// (0x000380b4) navi_pane_g3

0x0002,

0xf334,	// (0x0003ab0b) navi_pane_g

0xc96c,	// (0x00038143) navi_pane_mv_g2

0xc993,	// (0x0003816a) navi_pane_mv_g5

0x33e3,	// (0x0002ebba) navi_pane_mv_t1

0xbd9a,	// (0x00037571) main_clock2_pane

0xbcc1,	// (0x00037498) main_clock2_list_pane_ParamLimits

0xbcc1,	// (0x00037498) main_clock2_list_pane

0x4c77,	// (0x0003044e) main_clock2_pane_t1_ParamLimits

0x4c77,	// (0x0003044e) main_clock2_pane_t1

0x4cb2,	// (0x00030489) main_clock2_pane_t2_ParamLimits

0x4cb2,	// (0x00030489) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0003aee8) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0003aee8) main_clock2_pane_t

0x4d52,	// (0x00030529) popup_clock_analogue_window_cp03_ParamLimits

0x4d52,	// (0x00030529) popup_clock_analogue_window_cp03

0x4d77,	// (0x0003054e) popup_clock_digital_window_cp02_ParamLimits

0x4d77,	// (0x0003054e) popup_clock_digital_window_cp02

0x4dbb,	// (0x00030592) main_clock2_list_single_pane_ParamLimits

0x4dbb,	// (0x00030592) main_clock2_list_single_pane

0xbf73,	// (0x0003774a) list_highlight_pane_cp05

0xe5b6,	// (0x00039d8d) main_clock2_list_single_pane_t1

0x227b,	// (0x0002da52) popup_toolbar_window_cp04_ParamLimits

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g2_ParamLimits

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g2

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g3_ParamLimits

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g3

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g4_ParamLimits

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g4

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g5_ParamLimits

0xbd36,	// (0x0003750d) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0003ae2c) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0003ae2c) camera2_autofocus_pane_g

0x44f4,	// (0x0002fccb) camera2_autofocus_pane_cp_g2

0x44fc,	// (0x0002fcd3) camera2_autofocus_pane_cp_g3

0x4504,	// (0x0002fcdb) camera2_autofocus_pane_cp_g4

0x450c,	// (0x0002fce3) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0003ae92) camera2_autofocus_pane_cp_g

0xae30,	// (0x00036607) popup_dialer_spcha_window

0xae30,	// (0x00036607) bg_popup_sub_pane_cp07

0xae30,	// (0x00036607) list_spcha_pane

0xe5c4,	// (0x00039d9b) list_single_spcha_pane_ParamLimits

0xe5c4,	// (0x00039d9b) list_single_spcha_pane

0xae30,	// (0x00036607) list_highlight_pane_cp06

0xc4e4,	// (0x00037cbb) list_single_spcha_pane_t1

0xd86f,	// (0x00039046) popup_call2_audio_out_window_g4_ParamLimits

0xd86f,	// (0x00039046) popup_call2_audio_out_window_g4

0xaead,	// (0x00036684) main_imed2_pane

0xb3aa,	// (0x00036b81) popup_imed_adjust2_window

0x0986,	// (0x0002c15d) popup_imed_trans_window_ParamLimits

0x0986,	// (0x0002c15d) popup_imed_trans_window

0xe00e,	// (0x000397e5) popup_blid_sat_info2_window_t1

0xe01c,	// (0x000397f3) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0003adc1) popup_blid_sat_info2_window_t

0x4dcd,	// (0x000305a4) aid_size_cell_colour_35

0x4ded,	// (0x000305c4) aid_size_cell_colour_112

0x4e0d,	// (0x000305e4) aid_size_cell_effect

0xcac0,	// (0x00038297) bg_tb_trans_pane_cp02

0xc40a,	// (0x00037be1) heading_imed_pane

0x4e2d,	// (0x00030604) listscroll_imed_pane

0xe5d6,	// (0x00039dad) heading_imed_pane_g1

0xe5de,	// (0x00039db5) heading_imed_pane_t1

0xe5ec,	// (0x00039dc3) grid_imed_colour_35_pane_ParamLimits

0xe5ec,	// (0x00039dc3) grid_imed_colour_35_pane

0x4e39,	// (0x00030610) grid_imed_effect_pane

0xe603,	// (0x00039dda) list_imed_aspect_pane

0x4e4f,	// (0x00030626) scroll_pane_cp027_ParamLimits

0x4e4f,	// (0x00030626) scroll_pane_cp027

0x4e60,	// (0x00030637) cell_imed_effect_pane_ParamLimits

0x4e60,	// (0x00030637) cell_imed_effect_pane

0xe60b,	// (0x00039de2) cell_imed_colour_pane_ParamLimits

0xe60b,	// (0x00039de2) cell_imed_colour_pane

0xe64d,	// (0x00039e24) cell_imed_colour_pane_g1_ParamLimits

0xe64d,	// (0x00039e24) cell_imed_colour_pane_g1

0xe65e,	// (0x00039e35) hgihlgiht_grid_pane_cp016_ParamLimits

0xe65e,	// (0x00039e35) hgihlgiht_grid_pane_cp016

0x4e87,	// (0x0003065e) cell_imed_effect_pane_g1

0x4e8f,	// (0x00030666) grid_highlight_pane_cp017

0xe66f,	// (0x00039e46) list_imed_single_pane_ParamLimits

0xe66f,	// (0x00039e46) list_imed_single_pane

0xae30,	// (0x00036607) list_highlight_pane_cp07

0xe684,	// (0x00039e5b) list_imed_aspect_pane_comp1_t1

0xcac0,	// (0x00038297) bg_tb_trans_pane_cp05

0xe6a6,	// (0x00039e7d) popup_imed_adjust2_window_g1

0xe6cd,	// (0x00039ea4) popup_imed_adjust2_window_t1

0xe6e5,	// (0x00039ebc) slider_imed_adjust_pane

0xe6f9,	// (0x00039ed0) slider_imed_adjust_pane_g1

0xe709,	// (0x00039ee0) slider_imed_adjust_pane_g2

0xe719,	// (0x00039ef0) slider_imed_adjust_pane_g3

0xe72a,	// (0x00039f01) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0003af05) slider_imed_adjust_pane_g

0x4e98,	// (0x0003066f) aid_size_cell_clipart2

0x4ea4,	// (0x0003067b) grid_imed_clipart_pane

0xe73b,	// (0x00039f12) scroll_pane_cp031

0x4eae,	// (0x00030685) cell_imed_clipart_pane_ParamLimits

0x4eae,	// (0x00030685) cell_imed_clipart_pane

0x4ed0,	// (0x000306a7) cell_imed_clipart_pane_g1

0xae30,	// (0x00036607) grid_highlight_pane_cp014

0x4c53,	// (0x0003042a) main_clock2_pane_g1_ParamLimits

0x4c53,	// (0x0003042a) main_clock2_pane_g1

0x4d97,	// (0x0003056e) aid_call2_pane_cp10

0x4da9,	// (0x00030580) aid_call_pane_cp10

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g1

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g2

0x0b45,	// (0x0002c31c) popup_clock_analogue_window_cp10_g3

0x0b45,	// (0x0002c31c) popup_clock_analogue_window_cp10_g4

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0003aef3) popup_clock_analogue_window_cp10_g

0x0b5b,	// (0x0002c332) popup_clock_analogue_window_cp10_t1

0x0b7a,	// (0x0002c351) clock_digital_number_pane_cp10_ParamLimits

0x0b7a,	// (0x0002c351) clock_digital_number_pane_cp10

0x0b92,	// (0x0002c369) clock_digital_number_pane_cp11_ParamLimits

0x0b92,	// (0x0002c369) clock_digital_number_pane_cp11

0x0baa,	// (0x0002c381) clock_digital_number_pane_cp12_ParamLimits

0x0baa,	// (0x0002c381) clock_digital_number_pane_cp12

0x0bc4,	// (0x0002c39b) clock_digital_number_pane_cp13_ParamLimits

0x0bc4,	// (0x0002c39b) clock_digital_number_pane_cp13

0x0bde,	// (0x0002c3b5) clock_digital_separator_pane_cp10_ParamLimits

0x0bde,	// (0x0002c3b5) clock_digital_separator_pane_cp10

0x0bf8,	// (0x0002c3cf) popup_clock_digital_window_cp02_t1_ParamLimits

0x0bf8,	// (0x0002c3cf) popup_clock_digital_window_cp02_t1

0xbc97,	// (0x0003746e) clock_digital_number_pane_cp10_g1

0xbc97,	// (0x0003746e) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0003af0e) clock_digital_number_pane_cp10_g

0xbc97,	// (0x0003746e) clock_digital_separator_pane_cp10_g1

0xbc97,	// (0x0003746e) clock_digital_separator_pane_g2_cp10

0xc99b,	// (0x00038172) navi_pane_vded_g4

0xc9a4,	// (0x0003817b) navi_pane_vded_g5

0xc9ad,	// (0x00038184) navi_pane_vded_t1

0xaead,	// (0x00036684) main_vded_pane

0x4ed9,	// (0x000306b0) main_vded_pane_g1

0x4ee3,	// (0x000306ba) main_vded_pane_g2

0x4eed,	// (0x000306c4) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0003af13) main_vded_pane_g

0x4ef7,	// (0x000306ce) main_vded_pane_t1

0x4f05,	// (0x000306dc) main_vded_pane_t2

0x0001,

0xf743,	// (0x0003af1a) main_vded_pane_t

0x4f13,	// (0x000306ea) vded_slider_pane

0x4f1b,	// (0x000306f2) vded_video_pane

0xe743,	// (0x00039f1a) vded_video_pane_g1

0x4f23,	// (0x000306fa) vded_video_pane_g2

0xbfa9,	// (0x00037780) vded_video_pane_g3

0x0002,

0xf748,	// (0x0003af1f) vded_video_pane_g

0xe74d,	// (0x00039f24) vded_slider_pane_g1

0xdf2b,	// (0x00039702) vded_slider_pane_g2

0xe756,	// (0x00039f2d) vded_slider_pane_g3

0xe75f,	// (0x00039f36) vded_slider_pane_g4

0xe768,	// (0x00039f3f) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0003af26) vded_slider_pane_g

0x4ab8,	// (0x0003028f) mup3_rocker_pane_ParamLimits

0x4ab8,	// (0x0003028f) mup3_rocker_pane

0x4f2c,	// (0x00030703) mup3_control_keys_pane_g1

0x4f34,	// (0x0003070b) mup3_control_keys_pane_g2

0x4f3c,	// (0x00030713) mup3_control_keys_pane_g3

0x4f44,	// (0x0003071b) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0003af31) mup3_control_keys_pane_g

0x054a,	// (0x0002bd21) popup_toolbar2_fixed_window_cp01_ParamLimits

0x054a,	// (0x0002bd21) popup_toolbar2_fixed_window_cp01

0x4aec,	// (0x000302c3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4aec,	// (0x000302c3) popup_toolbar2_fixed_window_cp02

0xd1f8,	// (0x000389cf) popup_call2_audio_second_window_t4_ParamLimits

0xd1f8,	// (0x000389cf) popup_call2_audio_second_window_t4

0xd734,	// (0x00038f0b) popup_call2_audio_first_window_t6_ParamLimits

0xd734,	// (0x00038f0b) popup_call2_audio_first_window_t6

0xd972,	// (0x00039149) popup_call2_audio_out_window_t6_ParamLimits

0xd972,	// (0x00039149) popup_call2_audio_out_window_t6

0xaead,	// (0x00036684) main_vitu_pane

0xbcc1,	// (0x00037498) aid_size_cell_itu_ParamLimits

0xbcc1,	// (0x00037498) aid_size_cell_itu

0xbcc1,	// (0x00037498) bg_popup_window_pane_cp08_ParamLimits

0xbcc1,	// (0x00037498) bg_popup_window_pane_cp08

0xbcc1,	// (0x00037498) field_vitu_entry_pane_ParamLimits

0xbcc1,	// (0x00037498) field_vitu_entry_pane

0xbcc1,	// (0x00037498) grid_vitu_function_pane_ParamLimits

0xbcc1,	// (0x00037498) grid_vitu_function_pane

0xbcc1,	// (0x00037498) grid_vitu_itu_pane_ParamLimits

0xbcc1,	// (0x00037498) grid_vitu_itu_pane

0xbcc1,	// (0x00037498) cell_vitu_itu_pane_ParamLimits

0xbcc1,	// (0x00037498) cell_vitu_itu_pane

0xbcc1,	// (0x00037498) cell_vitu_function_pane_ParamLimits

0xbcc1,	// (0x00037498) cell_vitu_function_pane

0xbcc1,	// (0x00037498) bg_popup_sub_pane_cp08_ParamLimits

0xbcc1,	// (0x00037498) bg_popup_sub_pane_cp08

0xbf7b,	// (0x00037752) field_vitu_entry_pane_t1_ParamLimits

0xbf7b,	// (0x00037752) field_vitu_entry_pane_t1

0xe771,	// (0x00039f48) field_vitu_entry_pane_t2_ParamLimits

0xe771,	// (0x00039f48) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0003af3a) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0003af3a) field_vitu_entry_pane_t

0xdfb5,	// (0x0003978c) bg_button_pane_cp05_ParamLimits

0xdfb5,	// (0x0003978c) bg_button_pane_cp05

0xe78e,	// (0x00039f65) cell_vitu_itu_pane_g1

0xca98,	// (0x0003826f) cell_vitu_itu_pane_t1_ParamLimits

0xca98,	// (0x0003826f) cell_vitu_itu_pane_t1

0xca98,	// (0x0003826f) cell_vitu_itu_pane_t2_ParamLimits

0xca98,	// (0x0003826f) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0003af3f) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0003af3f) cell_vitu_itu_pane_t

0xae30,	// (0x00036607) bg_button_pane_cp07

0xbfa9,	// (0x00037780) cell_vitu_function_pane_g1

0xb20f,	// (0x000369e6) main_calc_pane_g1

0x03ab,	// (0x0002bb82) aid_visual_content_pane

0xaead,	// (0x00036684) main_vradio_pane

0xbd28,	// (0x000374ff) main_vradio_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) main_vradio_pane_g1

0xbd36,	// (0x0003750d) main_vradio_pane_g2_ParamLimits

0xbd36,	// (0x0003750d) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0003af46) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0003af46) main_vradio_pane_g

0xbf7b,	// (0x00037752) main_vradio_pane_t1_ParamLimits

0xbf7b,	// (0x00037752) main_vradio_pane_t1

0xbf7b,	// (0x00037752) main_vradio_pane_t2_ParamLimits

0xbf7b,	// (0x00037752) main_vradio_pane_t2

0xcaac,	// (0x00038283) main_vradio_pane_t3_ParamLimits

0xcaac,	// (0x00038283) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0003af4b) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0003af4b) main_vradio_pane_t

0xbcc1,	// (0x00037498) vradio_rocker_control_pane_ParamLimits

0xbcc1,	// (0x00037498) vradio_rocker_control_pane

0xbcc1,	// (0x00037498) vradio_station_info_pane_ParamLimits

0xbcc1,	// (0x00037498) vradio_station_info_pane

0xbcc1,	// (0x00037498) vradio_frequency_info_pane_ParamLimits

0xbcc1,	// (0x00037498) vradio_frequency_info_pane

0xbfa9,	// (0x00037780) vradio_station_info_pane_g1

0xca98,	// (0x0003826f) vradio_station_info_pane_t1_ParamLimits

0xca98,	// (0x0003826f) vradio_station_info_pane_t1

0xcaac,	// (0x00038283) vradio_station_info_pane_t2_ParamLimits

0xcaac,	// (0x00038283) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0003af52) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0003af52) vradio_station_info_pane_t

0xae30,	// (0x00036607) vradio_tuning_pane

0x4f54,	// (0x0003072b) vradio_rocker_control_pane_g1

0xe7aa,	// (0x00039f81) vradio_rocker_control_pane_g2

0x4f5e,	// (0x00030735) vradio_rocker_control_pane_g3

0x4f68,	// (0x0003073f) vradio_rocker_control_pane_g4

0x4f72,	// (0x00030749) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0003af57) vradio_rocker_control_pane_g

0xbfa9,	// (0x00037780) vradio_frequency_info_pane_g1

0xbf7b,	// (0x00037752) vradio_frequency_info_pane_t1_ParamLimits

0xbf7b,	// (0x00037752) vradio_frequency_info_pane_t1

0x4f7c,	// (0x00030753) vradio_tuning_pane_g1

0x4f89,	// (0x00030760) vradio_tuning_pane_t1

0xae5e,	// (0x00036635) area_side_right_pane_ParamLimits

0xae5e,	// (0x00036635) area_side_right_pane

0xdd62,	// (0x00039539) status_small_pane_g1

0xdd6a,	// (0x00039541) status_small_pane_g2

0xdd73,	// (0x0003954a) status_small_pane_g3

0xdd7c,	// (0x00039553) status_small_pane_g4

0x0003,

0xf54c,	// (0x0003ad23) status_small_pane_g

0xdd85,	// (0x0003955c) status_small_pane_t1

0xaead,	// (0x00036684) main_video3_pane

0xe7b2,	// (0x00039f89) cams_zoom_vslider_pane

0xe7ba,	// (0x00039f91) image3_wide_pane_ParamLimits

0xe7ba,	// (0x00039f91) image3_wide_pane

0xe7d4,	// (0x00039fab) image3_wide_small_pane

0xe7e0,	// (0x00039fb7) main_video3_pane_g1_ParamLimits

0xe7e0,	// (0x00039fb7) main_video3_pane_g1

0xe7fc,	// (0x00039fd3) main_video3_pane_g2_ParamLimits

0xe7fc,	// (0x00039fd3) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0003af62) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0003af62) main_video3_pane_g

0xe818,	// (0x00039fef) main_video3_pane_t1_ParamLimits

0xe818,	// (0x00039fef) main_video3_pane_t1

0xe843,	// (0x0003a01a) main_video3_pane_t2_ParamLimits

0xe843,	// (0x0003a01a) main_video3_pane_t2

0xe86e,	// (0x0003a045) main_video3_pane_t3_ParamLimits

0xe86e,	// (0x0003a045) main_video3_pane_t3

0x0002,

0xf790,	// (0x0003af67) main_video3_pane_t_ParamLimits

0xf790,	// (0x0003af67) main_video3_pane_t

0xe89b,	// (0x0003a072) cams_zoom_vslider_pane_g1

0xe8a4,	// (0x0003a07b) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0003af6e) cams_zoom_vslider_pane_g

0xe8ac,	// (0x0003a083) small_slider_vertical_pane

0xbfa9,	// (0x00037780) small_slider_vertical_pane_g1

0xbfa9,	// (0x00037780) small_slider_vertical_pane_g2

0xe8b4,	// (0x0003a08b) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0003af73) small_slider_vertical_pane_g

0xaead,	// (0x00036684) main_hwr_training_pane

0xe8bd,	// (0x0003a094) hwr_training_instruct_pane_ParamLimits

0xe8bd,	// (0x0003a094) hwr_training_instruct_pane

0x4f98,	// (0x0003076f) hwr_training_navi_pane_ParamLimits

0x4f98,	// (0x0003076f) hwr_training_navi_pane

0x4fb7,	// (0x0003078e) hwr_training_write_pane_ParamLimits

0x4fb7,	// (0x0003078e) hwr_training_write_pane

0xae30,	// (0x00036607) bg_frame_shadow_pane

0xe8f4,	// (0x0003a0cb) hwr_training_write_pane_g1

0xe8fc,	// (0x0003a0d3) hwr_training_write_pane_g2

0xe904,	// (0x0003a0db) hwr_training_write_pane_g3

0xe90c,	// (0x0003a0e3) hwr_training_write_pane_g4

0xe914,	// (0x0003a0eb) hwr_training_write_pane_g5

0xe91c,	// (0x0003a0f3) hwr_training_write_pane_g6

0xe924,	// (0x0003a0fb) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0003af7a) hwr_training_write_pane_g

0xb492,	// (0x00036c69) hwr_training_navi_pane_g1_ParamLimits

0xb492,	// (0x00036c69) hwr_training_navi_pane_g1

0xb4a4,	// (0x00036c7b) hwr_training_navi_pane_g2_ParamLimits

0xb4a4,	// (0x00036c7b) hwr_training_navi_pane_g2

0xb4b6,	// (0x00036c8d) hwr_training_navi_pane_g3_ParamLimits

0xb4b6,	// (0x00036c8d) hwr_training_navi_pane_g3

0xb4c6,	// (0x00036c9d) hwr_training_navi_pane_g4_ParamLimits

0xb4c6,	// (0x00036c9d) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0003af89) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0003af89) hwr_training_navi_pane_g

0xb4d3,	// (0x00036caa) hwr_training_navi_pane_t1

0x4ff2,	// (0x000307c9) list_single_hwr_training_instruct_pane_ParamLimits

0x4ff2,	// (0x000307c9) list_single_hwr_training_instruct_pane

0xe92c,	// (0x0003a103) list_single_hwr_training_instruct_pane_t1

0xe10f,	// (0x000398e6) bg_frame_shadow_pane_g1

0xe93b,	// (0x0003a112) bg_frame_shadow_pane_g2

0xe943,	// (0x0003a11a) bg_frame_shadow_pane_g3

0xe94b,	// (0x0003a122) bg_frame_shadow_pane_g4

0xe953,	// (0x0003a12a) bg_frame_shadow_pane_g5

0xe95b,	// (0x0003a132) bg_frame_shadow_pane_g6

0xe963,	// (0x0003a13a) bg_frame_shadow_pane_g7

0xbe52,	// (0x00037629) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0003af94) bg_frame_shadow_pane_g

0xaead,	// (0x00036684) main_video_tele_dialer_pane

0x0c26,	// (0x0002c3fd) aid_size_cell_video_keypad_ParamLimits

0x0c26,	// (0x0002c3fd) aid_size_cell_video_keypad

0x0c40,	// (0x0002c417) grid_video_dialer_keypad_pane_ParamLimits

0x0c40,	// (0x0002c417) grid_video_dialer_keypad_pane

0x0c8c,	// (0x0002c463) video_down_pane_cp_ParamLimits

0x0c8c,	// (0x0002c463) video_down_pane_cp

0x0ca2,	// (0x0002c479) cell_video_dialer_keypad_pane_ParamLimits

0x0ca2,	// (0x0002c479) cell_video_dialer_keypad_pane

0xe96b,	// (0x0003a142) bg_button_pane_cp08_ParamLimits

0xe96b,	// (0x0003a142) bg_button_pane_cp08

0x5023,	// (0x000307fa) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5023,	// (0x000307fa) cell_video_dialer_keypad_pane_g1

0x4aa2,	// (0x00030279) mup3_rocker2_pane_ParamLimits

0x4aa2,	// (0x00030279) mup3_rocker2_pane

0xbfa9,	// (0x00037780) mup3_rocker2_pane_g1

0x0867,	// (0x0002c03e) main_dialer2_pane

0xaead,	// (0x00036684) main_mp4_pane

0xb4ff,	// (0x00036cd6) main_mp4_pane_g1_ParamLimits

0xb4ff,	// (0x00036cd6) main_mp4_pane_g1

0xb4ff,	// (0x00036cd6) main_mp4_pane_g2_ParamLimits

0xb4ff,	// (0x00036cd6) main_mp4_pane_g2

0x0cc4,	// (0x0002c49b) main_mp4_pane_g3_ParamLimits

0x0cc4,	// (0x0002c49b) main_mp4_pane_g3

0xb50d,	// (0x00036ce4) main_mp4_pane_g4_ParamLimits

0xb50d,	// (0x00036ce4) main_mp4_pane_g4

0xb53b,	// (0x00036d12) main_mp4_pane_g5_ParamLimits

0xb53b,	// (0x00036d12) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0003afb4) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0003afb4) main_mp4_pane_g

0xb5af,	// (0x00036d86) main_mp4_pane_t1_ParamLimits

0xb5af,	// (0x00036d86) main_mp4_pane_t1

0xb60b,	// (0x00036de2) main_mp4_pane_t2_ParamLimits

0xb60b,	// (0x00036de2) main_mp4_pane_t2

0xe977,	// (0x0003a14e) main_mp4_pane_t3_ParamLimits

0xe977,	// (0x0003a14e) main_mp4_pane_t3

0xb65d,	// (0x00036e34) main_mp4_pane_t4_ParamLimits

0xb65d,	// (0x00036e34) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0003afc5) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0003afc5) main_mp4_pane_t

0xb6a1,	// (0x00036e78) mp4_progress_pane_ParamLimits

0xb6a1,	// (0x00036e78) mp4_progress_pane

0xb6eb,	// (0x00036ec2) mp4_rocker_pane_ParamLimits

0xb6eb,	// (0x00036ec2) mp4_rocker_pane

0xe9a5,	// (0x0003a17c) mp4_progress_pane_t1

0xe9be,	// (0x0003a195) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0003afce) mp4_progress_pane_t

0xe9d7,	// (0x0003a1ae) mup_progress_pane_cp04

0x4298,	// (0x0002fa6f) mp4_rocker_pane_g1

0x0d00,	// (0x0002c4d7) aid_cell_size_keypad2_ParamLimits

0x0d00,	// (0x0002c4d7) aid_cell_size_keypad2

0x0d16,	// (0x0002c4ed) dialer2_ne_pane_ParamLimits

0x0d16,	// (0x0002c4ed) dialer2_ne_pane

0x0d30,	// (0x0002c507) grid_dialer2_keypad_pane_ParamLimits

0x0d30,	// (0x0002c507) grid_dialer2_keypad_pane

0xdfb5,	// (0x0003978c) bg_popup_call_pane_cp07_ParamLimits

0xdfb5,	// (0x0003978c) bg_popup_call_pane_cp07

0x505a,	// (0x00030831) dialer2_ne_pane_t1_ParamLimits

0x505a,	// (0x00030831) dialer2_ne_pane_t1

0x0d4c,	// (0x0002c523) cell_dialer2_keypad_pane_ParamLimits

0x0d4c,	// (0x0002c523) cell_dialer2_keypad_pane

0xe9fc,	// (0x0003a1d3) bg_button_pane_pane_cp04_ParamLimits

0xe9fc,	// (0x0003a1d3) bg_button_pane_pane_cp04

0x5095,	// (0x0003086c) cell_dialer2_keypad_pane_g1_ParamLimits

0x5095,	// (0x0003086c) cell_dialer2_keypad_pane_g1

0x214f,	// (0x0002d926) aid_placing_vt_set_content_ParamLimits

0x214f,	// (0x0002d926) aid_placing_vt_set_content

0x2177,	// (0x0002d94e) aid_placing_vt_set_title_ParamLimits

0x2177,	// (0x0002d94e) aid_placing_vt_set_title

0xaead,	// (0x00036684) main_image3_pane

0x0dcc,	// (0x0002c5a3) area_side_right_pane_cp01_ParamLimits

0x0dcc,	// (0x0002c5a3) area_side_right_pane_cp01

0xb4ff,	// (0x00036cd6) main_image3_pane_g1_ParamLimits

0xb4ff,	// (0x00036cd6) main_image3_pane_g1

0x0de3,	// (0x0002c5ba) main_image3_pane_g2_ParamLimits

0x0de3,	// (0x0002c5ba) main_image3_pane_g2

0x0e0b,	// (0x0002c5e2) main_image3_pane_g3_ParamLimits

0x0e0b,	// (0x0002c5e2) main_image3_pane_g3

0x0e35,	// (0x0002c60c) main_image3_pane_g4_ParamLimits

0x0e35,	// (0x0002c60c) main_image3_pane_g4

0x0003,

0xf806,	// (0x0003afdd) main_image3_pane_g_ParamLimits

0xf806,	// (0x0003afdd) main_image3_pane_g

0x0e5f,	// (0x0002c636) main_image3_pane_t1_ParamLimits

0x0e5f,	// (0x0002c636) main_image3_pane_t1

0x0eb7,	// (0x0002c68e) main_image3_pane_t2_ParamLimits

0x0eb7,	// (0x0002c68e) main_image3_pane_t2

0x0f09,	// (0x0002c6e0) main_image3_pane_t3_ParamLimits

0x0f09,	// (0x0002c6e0) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0003afe6) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0003afe6) main_image3_pane_t

0xbcc1,	// (0x00037498) grid_sctrl_middle_pane_cp01_ParamLimits

0xbcc1,	// (0x00037498) grid_sctrl_middle_pane_cp01

0x50fd,	// (0x000308d4) cell_sctrl_middle_pane_cp01_ParamLimits

0x50fd,	// (0x000308d4) cell_sctrl_middle_pane_cp01

0x511a,	// (0x000308f1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x511a,	// (0x000308f1) cell_sctrl_middle_pane_cp01_g1

0xaead,	// (0x00036684) main_call4_pane

0x0f91,	// (0x0002c768) aid_size_button_call4_ParamLimits

0x0f91,	// (0x0002c768) aid_size_button_call4

0x0fc4,	// (0x0002c79b) call4_windows_pane_ParamLimits

0x0fc4,	// (0x0002c79b) call4_windows_pane

0x0fe3,	// (0x0002c7ba) grid_call4_button_pane_ParamLimits

0x0fe3,	// (0x0002c7ba) grid_call4_button_pane

0x513a,	// (0x00030911) call4_windows_conf_pane

0x5151,	// (0x00030928) popup_call4_audio_first_window_ParamLimits

0x5151,	// (0x00030928) popup_call4_audio_first_window

0x51a1,	// (0x00030978) popup_call4_audio_second_window_ParamLimits

0x51a1,	// (0x00030978) popup_call4_audio_second_window

0x51b8,	// (0x0003098f) popup_call4_audio_wait_window_ParamLimits

0x51b8,	// (0x0003098f) popup_call4_audio_wait_window

0x100c,	// (0x0002c7e3) cell_call4_button_pane_ParamLimits

0x100c,	// (0x0002c7e3) cell_call4_button_pane

0x51c6,	// (0x0003099d) bg_button_pane_cp09_ParamLimits

0x51c6,	// (0x0003099d) bg_button_pane_cp09

0x1031,	// (0x0002c808) cell_call4_button_pane_g1_ParamLimits

0x1031,	// (0x0002c808) cell_call4_button_pane_g1

0x1057,	// (0x0002c82e) cell_call4_button_pane_t1_ParamLimits

0x1057,	// (0x0002c82e) cell_call4_button_pane_t1

0xea10,	// (0x0003a1e7) popup_call4_audio_conf_window_ParamLimits

0xea10,	// (0x0003a1e7) popup_call4_audio_conf_window

0x4b02,	// (0x000302d9) mup3_progress_pane_t1_ParamLimits

0x4b21,	// (0x000302f8) mup3_progress_pane_t2_ParamLimits

0xe467,	// (0x00039c3e) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0003aebb) mup3_progress_pane_t_ParamLimits

0xe484,	// (0x00039c5b) mup_progress_pane_cp03_ParamLimits

0x4f4c,	// (0x00030723) mup3_control_keys_pane_g4_copy1

0xb6cf,	// (0x00036ea6) mp4_rocker2_pane_ParamLimits

0xb6cf,	// (0x00036ea6) mp4_rocker2_pane

0xea24,	// (0x0003a1fb) mp4_rocker2_pane_g1

0xea2c,	// (0x0003a203) mp4_rocker2_pane_g2

0xb76f,	// (0x00036f46) mp4_rocker2_pane_g3

0xb777,	// (0x00036f4e) mp4_rocker2_pane_g4

0xb77f,	// (0x00036f56) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0003afef) mp4_rocker2_pane_g

0xaead,	// (0x00036684) main_camera4_pane

0xaead,	// (0x00036684) main_video4_pane

0x0c5a,	// (0x0002c431) main_video_tele_dialer_pane_t1_ParamLimits

0x0c5a,	// (0x0002c431) main_video_tele_dialer_pane_t1

0x0c73,	// (0x0002c44a) main_video_tele_dialer_pane_t2_ParamLimits

0x0c73,	// (0x0002c44a) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0003afa5) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0003afa5) main_video_tele_dialer_pane_t

0x1095,	// (0x0002c86c) cam4_autofocus_pane_ParamLimits

0x1095,	// (0x0002c86c) cam4_autofocus_pane

0x10ab,	// (0x0002c882) cam4_image_uncrop_pane_ParamLimits

0x10ab,	// (0x0002c882) cam4_image_uncrop_pane

0x10c5,	// (0x0002c89c) cam4_indicators_pane_ParamLimits

0x10c5,	// (0x0002c89c) cam4_indicators_pane

0x10f0,	// (0x0002c8c7) main_camera4_pane_g1_ParamLimits

0x10f0,	// (0x0002c8c7) main_camera4_pane_g1

0x1102,	// (0x0002c8d9) main_camera4_pane_g2_ParamLimits

0x1102,	// (0x0002c8d9) main_camera4_pane_g2

0x1115,	// (0x0002c8ec) main_camera4_pane_g3_ParamLimits

0x1115,	// (0x0002c8ec) main_camera4_pane_g3

0x1128,	// (0x0002c8ff) main_camera4_pane_g4_ParamLimits

0x1128,	// (0x0002c8ff) main_camera4_pane_g4

0x113b,	// (0x0002c912) main_camera4_pane_g5_ParamLimits

0x113b,	// (0x0002c912) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0003affa) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0003affa) main_camera4_pane_g

0x115f,	// (0x0002c936) main_camera4_pane_t1_ParamLimits

0x115f,	// (0x0002c936) main_camera4_pane_t1

0x51f8,	// (0x000309cf) bg_tb_trans_pane_cp06

0xb7ab,	// (0x00036f82) cam4_indicators_pane_g1

0xb7bc,	// (0x00036f93) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0003b015) cam4_indicators_pane_g

0xb7da,	// (0x00036fb1) cam4_indicators_pane_t1

0x11af,	// (0x0002c986) main_video4_pane_g1_ParamLimits

0x11af,	// (0x0002c986) main_video4_pane_g1

0x11be,	// (0x0002c995) main_video4_pane_g2_ParamLimits

0x11be,	// (0x0002c995) main_video4_pane_g2

0x11cd,	// (0x0002c9a4) main_video4_pane_g3_ParamLimits

0x11cd,	// (0x0002c9a4) main_video4_pane_g3

0x11dc,	// (0x0002c9b3) main_video4_pane_g4_ParamLimits

0x11dc,	// (0x0002c9b3) main_video4_pane_g4

0x0004,

0xf845,	// (0x0003b01c) main_video4_pane_g_ParamLimits

0xf845,	// (0x0003b01c) main_video4_pane_g

0x11fa,	// (0x0002c9d1) vid4_indicators_pane_ParamLimits

0x11fa,	// (0x0002c9d1) vid4_indicators_pane

0x1228,	// (0x0002c9ff) video4_image_uncrop_cif_pane_ParamLimits

0x1228,	// (0x0002c9ff) video4_image_uncrop_cif_pane

0x1242,	// (0x0002ca19) video4_image_uncrop_nhd_pane_ParamLimits

0x1242,	// (0x0002ca19) video4_image_uncrop_nhd_pane

0x10ab,	// (0x0002c882) video4_image_uncrop_vga_pane_ParamLimits

0x10ab,	// (0x0002c882) video4_image_uncrop_vga_pane

0xae9f,	// (0x00036676) bg_tb_trans_pane_cp07

0xb806,	// (0x00036fdd) vid4_indicators_pane_g1

0xb81a,	// (0x00036ff1) vid4_indicators_pane_g2

0xb82e,	// (0x00037005) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0003b027) vid4_indicators_pane_g

0xb85d,	// (0x00037034) vid4_indicators_pane_t1

0x5206,	// (0x000309dd) cam4_autofocus_pane_g1

0x520e,	// (0x000309e5) cam4_autofocus_pane_g2

0x5216,	// (0x000309ed) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0003b032) cam4_autofocus_pane_g

0x521e,	// (0x000309f5) cam4_autofocus_pane_g3_copy1

0x5007,	// (0x000307de) video_down_pane_cp_t1

0x5015,	// (0x000307ec) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0003afaa) video_down_pane_cp_t

0xae9f,	// (0x00036676) popup_vitu2_window_ParamLimits

0xae9f,	// (0x00036676) popup_vitu2_window

0x1256,	// (0x0002ca2d) aid_size_cell2_itu2_ParamLimits

0x1256,	// (0x0002ca2d) aid_size_cell2_itu2

0x127c,	// (0x0002ca53) aid_size_cell_itu2_ParamLimits

0x127c,	// (0x0002ca53) aid_size_cell_itu2

0x12d8,	// (0x0002caaf) bg_popup_window_pane_cp09_ParamLimits

0x12d8,	// (0x0002caaf) bg_popup_window_pane_cp09

0x12e6,	// (0x0002cabd) field_vitu2_entry_pane_ParamLimits

0x12e6,	// (0x0002cabd) field_vitu2_entry_pane

0x130c,	// (0x0002cae3) grid_vitu2_function_pane_ParamLimits

0x130c,	// (0x0002cae3) grid_vitu2_function_pane

0x135d,	// (0x0002cb34) grid_vitu2_itu_pane_ParamLimits

0x135d,	// (0x0002cb34) grid_vitu2_itu_pane

0x13f3,	// (0x0002cbca) cell_vitu2_itu_pane_ParamLimits

0x13f3,	// (0x0002cbca) cell_vitu2_itu_pane

0x141f,	// (0x0002cbf6) cell_vitu2_function_pane_ParamLimits

0x141f,	// (0x0002cbf6) cell_vitu2_function_pane

0xea34,	// (0x0003a20b) bg_popup_call_pane_cp08_ParamLimits

0xea34,	// (0x0003a20b) bg_popup_call_pane_cp08

0xea4b,	// (0x0003a222) field_vitu2_entry_pane_g1

0xea57,	// (0x0003a22e) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0003b039) field_vitu2_entry_pane_g

0x5226,	// (0x000309fd) field_vitu2_entry_pane_t1_ParamLimits

0x5226,	// (0x000309fd) field_vitu2_entry_pane_t1

0xea63,	// (0x0003a23a) field_vitu2_entry_pane_t2_ParamLimits

0xea63,	// (0x0003a23a) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0003b040) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0003b040) field_vitu2_entry_pane_t

0x145e,	// (0x0002cc35) bg_button_pane_cp010_ParamLimits

0x145e,	// (0x0002cc35) bg_button_pane_cp010

0x146c,	// (0x0002cc43) cell_vitu2_itu_pane_g1

0x1492,	// (0x0002cc69) cell_vitu2_itu_pane_t1_ParamLimits

0x1492,	// (0x0002cc69) cell_vitu2_itu_pane_t1

0x14f0,	// (0x0002ccc7) cell_vitu2_itu_pane_t2_ParamLimits

0x14f0,	// (0x0002ccc7) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0003b04a) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0003b04a) cell_vitu2_itu_pane_t

0xae9f,	// (0x00036676) bg_button_pane_cp011

0x15dc,	// (0x0002cdb3) cell_vitu2_function_pane_g1

0xaead,	// (0x00036684) main_myfav_hc_pane

0x0f59,	// (0x0002c730) popup_image3_note_pane_ParamLimits

0x0f59,	// (0x0002c730) popup_image3_note_pane

0x0f75,	// (0x0002c74c) popup_image3_tool_bar_pane_ParamLimits

0x0f75,	// (0x0002c74c) popup_image3_tool_bar_pane

0x157e,	// (0x0002cd55) cell_vitu2_itu_pane_t3_ParamLimits

0x157e,	// (0x0002cd55) cell_vitu2_itu_pane_t3

0xae30,	// (0x00036607) bg_popup_trans_pane

0xea88,	// (0x0003a25f) grid_image3_tool_bar_pane

0xea92,	// (0x0003a269) bg_popup_trans_pane_g1

0xc1ba,	// (0x00037991) bg_popup_trans_pane_g2

0xea9a,	// (0x0003a271) bg_popup_trans_pane_g3

0xeaa2,	// (0x0003a279) bg_popup_trans_pane_g4

0xeaaa,	// (0x0003a281) bg_popup_trans_pane_g5

0xeab2,	// (0x0003a289) bg_popup_trans_pane_g6

0xeaba,	// (0x0003a291) bg_popup_trans_pane_g7

0xeac2,	// (0x0003a299) bg_popup_trans_pane_g8

0xc19a,	// (0x00037971) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0003b051) bg_popup_trans_pane_g

0xeaca,	// (0x0003a2a1) cell_image3_tool_bar_pane_ParamLimits

0xeaca,	// (0x0003a2a1) cell_image3_tool_bar_pane

0xbfa9,	// (0x00037780) cell_image3_tool_bar_pane_g1

0xae30,	// (0x00036607) bg_popup_trans_pane_cp1

0xeade,	// (0x0003a2b5) popup_image3_note_pane_t1

0xeaec,	// (0x0003a2c3) popup_image3_note_pane_t2

0xeafa,	// (0x0003a2d1) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0003b064) popup_image3_note_pane_t

0xeb08,	// (0x0003a2df) popup_image3_note_pane_t3_copy1

0x5255,	// (0x00030a2c) bg_myfav_hc_instruction_pane_ParamLimits

0x5255,	// (0x00030a2c) bg_myfav_hc_instruction_pane

0x5269,	// (0x00030a40) cell_myfav_contact_pane_ParamLimits

0x5269,	// (0x00030a40) cell_myfav_contact_pane

0x5287,	// (0x00030a5e) cell_myfav_contact_pane_cp1_ParamLimits

0x5287,	// (0x00030a5e) cell_myfav_contact_pane_cp1

0x529f,	// (0x00030a76) cell_myfav_contact_pane_cp2_ParamLimits

0x529f,	// (0x00030a76) cell_myfav_contact_pane_cp2

0x52b7,	// (0x00030a8e) cell_myfav_contact_pane_cp3_ParamLimits

0x52b7,	// (0x00030a8e) cell_myfav_contact_pane_cp3

0x52ce,	// (0x00030aa5) cell_myfav_contact_pane_cp4_ParamLimits

0x52ce,	// (0x00030aa5) cell_myfav_contact_pane_cp4

0x52e6,	// (0x00030abd) cell_myfav_contact_pane_cp5_ParamLimits

0x52e6,	// (0x00030abd) cell_myfav_contact_pane_cp5

0x52fa,	// (0x00030ad1) cell_myfav_contact_pane_cp6_ParamLimits

0x52fa,	// (0x00030ad1) cell_myfav_contact_pane_cp6

0x5310,	// (0x00030ae7) cell_myfav_contact_pane_cp7_ParamLimits

0x5310,	// (0x00030ae7) cell_myfav_contact_pane_cp7

0xeb16,	// (0x0003a2ed) listscroll_gen_pane_cp05

0x532a,	// (0x00030b01) main_myfav_hc_pane_g1_ParamLimits

0x532a,	// (0x00030b01) main_myfav_hc_pane_g1

0x5344,	// (0x00030b1b) main_myfav_hc_pane_g2_ParamLimits

0x5344,	// (0x00030b1b) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0003b06b) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0003b06b) main_myfav_hc_pane_g

0x5376,	// (0x00030b4d) main_myfav_hc_pane_t1_ParamLimits

0x5376,	// (0x00030b4d) main_myfav_hc_pane_t1

0xeb1f,	// (0x0003a2f6) main_myfav_hc_pane_t2_ParamLimits

0xeb1f,	// (0x0003a2f6) main_myfav_hc_pane_t2

0xeb31,	// (0x0003a308) main_myfav_hc_pane_t3_ParamLimits

0xeb31,	// (0x0003a308) main_myfav_hc_pane_t3

0x538d,	// (0x00030b64) main_myfav_hc_pane_t4_ParamLimits

0x538d,	// (0x00030b64) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0003b072) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0003b072) main_myfav_hc_pane_t

0xbfa9,	// (0x00037780) bg_myfav_hc_instruction_pane_g1

0xeb43,	// (0x0003a31a) cell_myfav_contact_pane_g1_ParamLimits

0xeb43,	// (0x0003a31a) cell_myfav_contact_pane_g1

0xeb43,	// (0x0003a31a) cell_myfav_contact_pane_g2_ParamLimits

0xeb43,	// (0x0003a31a) cell_myfav_contact_pane_g2

0xeb4f,	// (0x0003a326) cell_myfav_contact_pane_g3_ParamLimits

0xeb4f,	// (0x0003a326) cell_myfav_contact_pane_g3

0xbd36,	// (0x0003750d) cell_myfav_contact_pane_g4_ParamLimits

0xbd36,	// (0x0003750d) cell_myfav_contact_pane_g4

0xeb5c,	// (0x0003a333) cell_myfav_contact_pane_g5_ParamLimits

0xeb5c,	// (0x0003a333) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0003b07d) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0003b07d) cell_myfav_contact_pane_g

0x535e,	// (0x00030b35) main_myfav_hc_pane_g3_ParamLimits

0x535e,	// (0x00030b35) main_myfav_hc_pane_g3

0x04ad,	// (0x0002bc84) popup_adpt_find_window

0x53b5,	// (0x00030b8c) afind_page_pane_ParamLimits

0x53b5,	// (0x00030b8c) afind_page_pane

0x53ca,	// (0x00030ba1) aid_size_cell_afind_ParamLimits

0x53ca,	// (0x00030ba1) aid_size_cell_afind

0x53e8,	// (0x00030bbf) bg_popup_sub_pane_cp09_ParamLimits

0x53e8,	// (0x00030bbf) bg_popup_sub_pane_cp09

0x53f5,	// (0x00030bcc) find_pane_cp01_ParamLimits

0x53f5,	// (0x00030bcc) find_pane_cp01

0xeb68,	// (0x0003a33f) grid_afind_control_pane_ParamLimits

0xeb68,	// (0x0003a33f) grid_afind_control_pane

0x5402,	// (0x00030bd9) grid_afind_pane_ParamLimits

0x5402,	// (0x00030bd9) grid_afind_pane

0x5424,	// (0x00030bfb) cell_afind_pane_ParamLimits

0x5424,	// (0x00030bfb) cell_afind_pane

0xbfa9,	// (0x00037780) afind_page_pane_g1

0x548b,	// (0x00030c62) afind_page_pane_g2

0x5493,	// (0x00030c6a) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0003b088) afind_page_pane_g

0x549b,	// (0x00030c72) afind_page_pane_t1

0xeb8e,	// (0x0003a365) cell_afind_grid_control_pane_ParamLimits

0xeb8e,	// (0x0003a365) cell_afind_grid_control_pane

0xe9fc,	// (0x0003a1d3) bg_button_pane_cp69_ParamLimits

0xe9fc,	// (0x0003a1d3) bg_button_pane_cp69

0x54a9,	// (0x00030c80) cell_afind_pane_g1_ParamLimits

0x54a9,	// (0x00030c80) cell_afind_pane_g1

0x54b6,	// (0x00030c8d) cell_afind_pane_t1_ParamLimits

0x54b6,	// (0x00030c8d) cell_afind_pane_t1

0xbfb3,	// (0x0003778a) bg_button_pane_cp72

0xeb9d,	// (0x0003a374) cell_afind_grid_control_pane_g1

0x3a78,	// (0x0002f24f) aid_image_placing_area_ParamLimits

0x3a78,	// (0x0002f24f) aid_image_placing_area

0xbd28,	// (0x000374ff) field_vitu_entry_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) field_vitu_entry_pane_g1

0xbd28,	// (0x000374ff) field_vitu_entry_pane_g2_ParamLimits

0xbd28,	// (0x000374ff) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0003a998) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0003a998) field_vitu_entry_pane_g

0xe78e,	// (0x00039f65) cell_vitu_itu_pane_g1_ParamLimits

0xe771,	// (0x00039f48) cell_vitu_itu_pane_t3_ParamLimits

0xe771,	// (0x00039f48) cell_vitu_itu_pane_t3

0xe9a5,	// (0x0003a17c) mp4_progress_pane_t1_ParamLimits

0xe9be,	// (0x0003a195) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0003afce) mp4_progress_pane_t_ParamLimits

0xe9d7,	// (0x0003a1ae) mup_progress_pane_cp04_ParamLimits

0x53a1,	// (0x00030b78) main_myfav_hc_pane_t5_ParamLimits

0x53a1,	// (0x00030b78) main_myfav_hc_pane_t5

0xae56,	// (0x0003662d) aid_zoom_text_primary

0x04ad,	// (0x0002bc84) popup_adpt_find_window_ParamLimits

0xae9f,	// (0x00036676) main_cam_set_pane

0x10dc,	// (0x0002c8b3) cam4_zoom_pane_ParamLimits

0x10dc,	// (0x0002c8b3) cam4_zoom_pane

0x54c8,	// (0x00030c9f) main_cam_set_pane_g1_ParamLimits

0x54c8,	// (0x00030c9f) main_cam_set_pane_g1

0x54d6,	// (0x00030cad) main_cam_set_pane_g2_ParamLimits

0x54d6,	// (0x00030cad) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0003b08f) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0003b08f) main_cam_set_pane_g

0x54f7,	// (0x00030cce) main_cam_set_pane_t1_ParamLimits

0x54f7,	// (0x00030cce) main_cam_set_pane_t1

0x5512,	// (0x00030ce9) main_cset_listscroll_pane_ParamLimits

0x5512,	// (0x00030ce9) main_cset_listscroll_pane

0x5538,	// (0x00030d0f) main_cset_slider_pane_ParamLimits

0x5538,	// (0x00030d0f) main_cset_slider_pane

0xebae,	// (0x0003a385) main_cset_list_pane_ParamLimits

0xebae,	// (0x0003a385) main_cset_list_pane

0xebbe,	// (0x0003a395) scroll_pane_cp028

0x555e,	// (0x00030d35) aid_area_touch_slider

0x557a,	// (0x00030d51) cset_slider_pane

0x559d,	// (0x00030d74) main_cset_slider_pane_g1

0x55b2,	// (0x00030d89) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0003b094) main_cset_slider_pane_g

0xebf7,	// (0x0003a3ce) main_cset_slider_pane_t1

0x566e,	// (0x00030e45) main_cset_slider_pane_t2

0x5688,	// (0x00030e5f) main_cset_slider_pane_t3

0x56a2,	// (0x00030e79) main_cset_slider_pane_t4

0x56bc,	// (0x00030e93) main_cset_slider_pane_t5

0x56d6,	// (0x00030ead) main_cset_slider_pane_t6

0x56eb,	// (0x00030ec2) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0003b0b9) main_cset_slider_pane_t

0x57ef,	// (0x00030fc6) cset_list_set_pane_ParamLimits

0x57ef,	// (0x00030fc6) cset_list_set_pane

0xec91,	// (0x0003a468) aid_position_infowindow_above

0xec99,	// (0x0003a470) aid_position_infowindow_below

0xeca1,	// (0x0003a478) cset_list_set_pane_g1_ParamLimits

0xeca1,	// (0x0003a478) cset_list_set_pane_g1

0xecad,	// (0x0003a484) cset_list_set_pane_g3_ParamLimits

0xecad,	// (0x0003a484) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0003b0d8) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0003b0d8) cset_list_set_pane_g

0xecbc,	// (0x0003a493) cset_list_set_pane_t1_ParamLimits

0xecbc,	// (0x0003a493) cset_list_set_pane_t1

0xbcc1,	// (0x00037498) list_highlight_pane_cp021_ParamLimits

0xbcc1,	// (0x00037498) list_highlight_pane_cp021

0xcb30,	// (0x00038307) cset_slider_pane_g1

0xcb42,	// (0x00038319) cset_slider_pane_g2

0xcb39,	// (0x00038310) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0003b0dd) cset_slider_pane_g

0xb874,	// (0x0003704b) aid_area_touch_cam4_zoom

0xb87c,	// (0x00037053) cam4_zoom_cont_pane

0xb884,	// (0x0003705b) cam4_zoom_pane_g1

0xb88c,	// (0x00037063) cam4_zoom_pane_g2

0x15f0,	// (0x0002cdc7) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0003b0e4) cam4_zoom_pane_g

0xb894,	// (0x0003706b) cam4_zoom_cont_pane_g1

0xb89d,	// (0x00037074) cam4_zoom_cont_pane_g2

0xb8a6,	// (0x0003707d) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0003b0eb) cam4_zoom_cont_pane_g

0x0faf,	// (0x0002c786) call4_image_pane_ParamLimits

0x0faf,	// (0x0002c786) call4_image_pane

0x513a,	// (0x00030911) call4_windows_conf_pane_ParamLimits

0x517f,	// (0x00030956) popup_call4_audio_in_window_ParamLimits

0x517f,	// (0x00030956) popup_call4_audio_in_window

0xae30,	// (0x00036607) bg_popup_call2_act_pane_cp02

0xea08,	// (0x0003a1df) call4_list_conf_pane

0xbfa9,	// (0x00037780) call4_image_pane_g1

0xbfa9,	// (0x00037780) call4_image_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) call4_image_pane_g

0xecd1,	// (0x0003a4a8) list_single_graphic_popup_conf4_pane_ParamLimits

0xecd1,	// (0x0003a4a8) list_single_graphic_popup_conf4_pane

0xae30,	// (0x00036607) list_highlight_pane_cp022

0xece4,	// (0x0003a4bb) list_single_graphic_popup_conf4_pane_g1

0xc6e0,	// (0x00037eb7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0003b0f2) list_single_graphic_popup_conf4_pane_g

0xecec,	// (0x0003a4c3) list_single_graphic_popup_conf4_pane_t1

0x229b,	// (0x0002da72) popup_vtel_slider_window_ParamLimits

0x229b,	// (0x0002da72) popup_vtel_slider_window

0xe9ea,	// (0x0003a1c1) dialer2_ne_pane_t2_ParamLimits

0xe9ea,	// (0x0003a1c1) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0003afd3) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0003afd3) dialer2_ne_pane_t

0xdfb5,	// (0x0003978c) bg_popup_sub_pane_cp010_ParamLimits

0xdfb5,	// (0x0003978c) bg_popup_sub_pane_cp010

0x5801,	// (0x00030fd8) popup_vtel_slider_window_g1_ParamLimits

0x5801,	// (0x00030fd8) popup_vtel_slider_window_g1

0x5814,	// (0x00030feb) popup_vtel_slider_window_g2_ParamLimits

0x5814,	// (0x00030feb) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0003b0f7) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0003b0f7) popup_vtel_slider_window_g

0x586a,	// (0x00031041) vtel_slider_pane_ParamLimits

0x586a,	// (0x00031041) vtel_slider_pane

0x588c,	// (0x00031063) vtel_slider_pane_g1_ParamLimits

0x588c,	// (0x00031063) vtel_slider_pane_g1

0x58a0,	// (0x00031077) vtel_slider_pane_g2_ParamLimits

0x58a0,	// (0x00031077) vtel_slider_pane_g2

0x58b8,	// (0x0003108f) vtel_slider_pane_g3_ParamLimits

0x58b8,	// (0x0003108f) vtel_slider_pane_g3

0x588c,	// (0x00031063) vtel_slider_pane_g4_ParamLimits

0x588c,	// (0x00031063) vtel_slider_pane_g4

0x58ce,	// (0x000310a5) vtel_slider_pane_g5_ParamLimits

0x58ce,	// (0x000310a5) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0003b100) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0003b100) vtel_slider_pane_g

0xae9f,	// (0x00036676) main_gallery2_pane

0x12a8,	// (0x0002ca7f) aid_size_row_itut2_dropdow_list_ParamLimits

0x12a8,	// (0x0002ca7f) aid_size_row_itut2_dropdow_list

0x1334,	// (0x0002cb0b) grid_vitu2_function_top_pane_ParamLimits

0x1334,	// (0x0002cb0b) grid_vitu2_function_top_pane

0x139e,	// (0x0002cb75) popup_vitu2_dropdown_list_window_ParamLimits

0x139e,	// (0x0002cb75) popup_vitu2_dropdown_list_window

0x13c5,	// (0x0002cb9c) popup_vitu2_match_list_window

0x15f8,	// (0x0002cdcf) cell_vitu2_function_top_pane_ParamLimits

0x15f8,	// (0x0002cdcf) cell_vitu2_function_top_pane

0x1610,	// (0x0002cde7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1610,	// (0x0002cde7) cell_vitu2_function_top_pane_cp01

0x162c,	// (0x0002ce03) cell_vitu2_function_top_wide_pane_ParamLimits

0x162c,	// (0x0002ce03) cell_vitu2_function_top_wide_pane

0xae9f,	// (0x00036676) bg_button_pane_cp012

0x164a,	// (0x0002ce21) cell_vitu2_function_top_pane_g1

0xb8af,	// (0x00037086) bg_button_pane_cp013_ParamLimits

0xb8af,	// (0x00037086) bg_button_pane_cp013

0x58e4,	// (0x000310bb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x58e4,	// (0x000310bb) cell_vitu2_function_top_wide_pane_g1

0xae9f,	// (0x00036676) bg_popup_sub_pane_cp20

0x165e,	// (0x0002ce35) list_vitu2_match_list_pane

0xea92,	// (0x0003a269) bg_popup_sub_pane_cp20_g1

0xea9a,	// (0x0003a271) bg_popup_sub_pane_cp20_g2

0xc1ba,	// (0x00037991) bg_popup_sub_pane_cp20_g3

0xeaa2,	// (0x0003a279) bg_popup_sub_pane_cp20_g4

0xc19a,	// (0x00037971) bg_popup_sub_pane_cp20_g5

0xed02,	// (0x0003a4d9) bg_popup_sub_pane_cp20_g6

0xeab2,	// (0x0003a289) bg_popup_sub_pane_cp20_g7

0xeaba,	// (0x0003a291) bg_popup_sub_pane_cp20_g8

0xeac2,	// (0x0003a299) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0003b10b) bg_popup_sub_pane_cp20_g

0xb8cb,	// (0x000370a2) list_vitu2_match_list_item_pane_ParamLimits

0xb8cb,	// (0x000370a2) list_vitu2_match_list_item_pane

0xb8dd,	// (0x000370b4) list_vitu2_match_list_item_pane_t1

0xaead,	// (0x00036684) bg_popup_sub_pane_cp21

0xbf73,	// (0x0003774a) grid_vitu2_dropdown_list_pane

0x1676,	// (0x0002ce4d) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1676,	// (0x0002ce4d) cell_vitu2_dropdown_list_char_pane

0x1696,	// (0x0002ce6d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1696,	// (0x0002ce6d) cell_vitu2_dropdown_list_ctrl_pane

0xed0a,	// (0x0003a4e1) cell_vitu2_dropdown_list_char_pane_g1

0xed13,	// (0x0003a4ea) cell_vitu2_dropdown_list_char_pane_g2

0xed1c,	// (0x0003a4f3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0003b11e) cell_vitu2_dropdown_list_char_pane_g

0x16be,	// (0x0002ce95) cell_vitu2_dropdown_list_char_pane_t1

0x58fc,	// (0x000310d3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x58fc,	// (0x000310d3) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5909,	// (0x000310e0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5909,	// (0x000310e0) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5916,	// (0x000310ed) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5916,	// (0x000310ed) cell_vitu2_dropdown_list_ctrl_pane_g3

0x16cc,	// (0x0002cea3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x16cc,	// (0x0002cea3) cell_vitu2_dropdown_list_ctrl_pane_g4

0x51f8,	// (0x000309cf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x51f8,	// (0x000309cf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0003b125) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0003b125) cell_vitu2_dropdown_list_ctrl_pane_g

0x5923,	// (0x000310fa) aid_size_cell_gallery2_ParamLimits

0x5923,	// (0x000310fa) aid_size_cell_gallery2

0x5941,	// (0x00031118) grid_gallery2_pane_ParamLimits

0x5941,	// (0x00031118) grid_gallery2_pane

0x595b,	// (0x00031132) scroll_pane_cp029_ParamLimits

0x595b,	// (0x00031132) scroll_pane_cp029

0x596c,	// (0x00031143) cell_gallery2_pane_ParamLimits

0x596c,	// (0x00031143) cell_gallery2_pane

0xed25,	// (0x0003a4fc) cell_gallery2_pane_g2

0x59cb,	// (0x000311a2) cell_gallery2_pane_g3

0xed2d,	// (0x0003a504) cell_gallery2_pane_g4

0xed35,	// (0x0003a50c) cell_gallery2_pane_g5

0xbf73,	// (0x0003774a) grid_highlight_pane_cp10

0x13c5,	// (0x0002cb9c) popup_vitu2_match_list_window_ParamLimits

0x13da,	// (0x0002cbb1) popup_vitu2_query_window_ParamLimits

0x13da,	// (0x0002cbb1) popup_vitu2_query_window

0xaead,	// (0x00036684) bg_vitu2_candi_button_pane

0xed0a,	// (0x0003a4e1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed13,	// (0x0003a4ea) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed1c,	// (0x0003a4f3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x59d3,	// (0x000311aa) bg_button_pane_cp015

0x59e4,	// (0x000311bb) bg_button_pane_cp016

0x59f0,	// (0x000311c7) bg_button_pane_cp017

0xcac0,	// (0x00038297) bg_popup_sub_pane_cp22

0xed3d,	// (0x0003a514) popup_vitu2_query_window_g1

0x5a2e,	// (0x00031205) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0003b130) popup_vitu2_query_window_g

0x5a50,	// (0x00031227) popup_vitu2_query_window_t1_ParamLimits

0x5a50,	// (0x00031227) popup_vitu2_query_window_t1

0x5a83,	// (0x0003125a) popup_vitu2_query_window_t2_ParamLimits

0x5a83,	// (0x0003125a) popup_vitu2_query_window_t2

0x5a95,	// (0x0003126c) popup_vitu2_query_window_t3_ParamLimits

0x5a95,	// (0x0003126c) popup_vitu2_query_window_t3

0x5abd,	// (0x00031294) popup_vitu2_query_window_t4_ParamLimits

0x5abd,	// (0x00031294) popup_vitu2_query_window_t4

0x5ad1,	// (0x000312a8) popup_vitu2_query_window_t5_ParamLimits

0x5ad1,	// (0x000312a8) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0003b137) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0003b137) popup_vitu2_query_window_t

0xeba6,	// (0x0003a37d) main_cset_text_pane

0x555e,	// (0x00030d35) aid_area_touch_slider_ParamLimits

0x557a,	// (0x00030d51) cset_slider_pane_ParamLimits

0x559d,	// (0x00030d74) main_cset_slider_pane_g1_ParamLimits

0x55b2,	// (0x00030d89) main_cset_slider_pane_g2_ParamLimits

0xebc7,	// (0x0003a39e) main_cset_slider_pane_g3_ParamLimits

0xebc7,	// (0x0003a39e) main_cset_slider_pane_g3

0x55c7,	// (0x00030d9e) main_cset_slider_pane_g4_ParamLimits

0x55c7,	// (0x00030d9e) main_cset_slider_pane_g4

0x55d6,	// (0x00030dad) main_cset_slider_pane_g5_ParamLimits

0x55d6,	// (0x00030dad) main_cset_slider_pane_g5

0x55e2,	// (0x00030db9) main_cset_slider_pane_g6_ParamLimits

0x55e2,	// (0x00030db9) main_cset_slider_pane_g6

0xf8bd,	// (0x0003b094) main_cset_slider_pane_g_ParamLimits

0xebf7,	// (0x0003a3ce) main_cset_slider_pane_t1_ParamLimits

0x566e,	// (0x00030e45) main_cset_slider_pane_t2_ParamLimits

0x5688,	// (0x00030e5f) main_cset_slider_pane_t3_ParamLimits

0x56a2,	// (0x00030e79) main_cset_slider_pane_t4_ParamLimits

0x56bc,	// (0x00030e93) main_cset_slider_pane_t5_ParamLimits

0x56d6,	// (0x00030ead) main_cset_slider_pane_t6_ParamLimits

0x56eb,	// (0x00030ec2) main_cset_slider_pane_t7_ParamLimits

0x5715,	// (0x00030eec) main_cset_slider_pane_t8_ParamLimits

0x5715,	// (0x00030eec) main_cset_slider_pane_t8

0x573d,	// (0x00030f14) main_cset_slider_pane_t9_ParamLimits

0x573d,	// (0x00030f14) main_cset_slider_pane_t9

0x5765,	// (0x00030f3c) main_cset_slider_pane_t10_ParamLimits

0x5765,	// (0x00030f3c) main_cset_slider_pane_t10

0x578d,	// (0x00030f64) main_cset_slider_pane_t11_ParamLimits

0x578d,	// (0x00030f64) main_cset_slider_pane_t11

0x57b5,	// (0x00030f8c) main_cset_slider_pane_t12_ParamLimits

0x57b5,	// (0x00030f8c) main_cset_slider_pane_t12

0x57d2,	// (0x00030fa9) main_cset_slider_pane_t13_ParamLimits

0x57d2,	// (0x00030fa9) main_cset_slider_pane_t13

0xf8e2,	// (0x0003b0b9) main_cset_slider_pane_t_ParamLimits

0xae30,	// (0x00036607) bg_popup_sub_pane_cp011

0xed49,	// (0x0003a520) main_cset_text_pane_g1

0xed51,	// (0x0003a528) main_cset_text_pane_t1

0xed5f,	// (0x0003a536) main_cset_text_pane_t2

0xed6d,	// (0x0003a544) main_cset_text_pane_t3

0xed7b,	// (0x0003a552) main_cset_text_pane_t4

0xed89,	// (0x0003a560) main_cset_text_pane_t5

0xed97,	// (0x0003a56e) main_cset_text_pane_t6

0xeda5,	// (0x0003a57c) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0003b146) main_cset_text_pane_t

0xaead,	// (0x00036684) main_cam4_burst_pane

0xaead,	// (0x00036684) main_cam5_pane

0xeb7c,	// (0x0003a353) bg_button_pane_cp019

0xeb85,	// (0x0003a35c) bg_button_pane_cp020

0xebd3,	// (0x0003a3aa) main_cset_slider_pane_g7_ParamLimits

0xebd3,	// (0x0003a3aa) main_cset_slider_pane_g7

0xebdf,	// (0x0003a3b6) main_cset_slider_pane_g8_ParamLimits

0xebdf,	// (0x0003a3b6) main_cset_slider_pane_g8

0x55f6,	// (0x00030dcd) main_cset_slider_pane_g9_ParamLimits

0x55f6,	// (0x00030dcd) main_cset_slider_pane_g9

0x5602,	// (0x00030dd9) main_cset_slider_pane_g10_ParamLimits

0x5602,	// (0x00030dd9) main_cset_slider_pane_g10

0x560e,	// (0x00030de5) main_cset_slider_pane_g11_ParamLimits

0x560e,	// (0x00030de5) main_cset_slider_pane_g11

0x561a,	// (0x00030df1) main_cset_slider_pane_g12_ParamLimits

0x561a,	// (0x00030df1) main_cset_slider_pane_g12

0x5626,	// (0x00030dfd) main_cset_slider_pane_g13_ParamLimits

0x5626,	// (0x00030dfd) main_cset_slider_pane_g13

0x5632,	// (0x00030e09) main_cset_slider_pane_g14_ParamLimits

0x5632,	// (0x00030e09) main_cset_slider_pane_g14

0x563e,	// (0x00030e15) main_cset_slider_pane_g15_ParamLimits

0x563e,	// (0x00030e15) main_cset_slider_pane_g15

0xec1f,	// (0x0003a3f6) main_cset_slider_pane_t14_ParamLimits

0xec1f,	// (0x0003a3f6) main_cset_slider_pane_t14

0xec58,	// (0x0003a42f) main_cset_slider_pane_t15_ParamLimits

0xec58,	// (0x0003a42f) main_cset_slider_pane_t15

0x5b3b,	// (0x00031312) aid_cam4_burst_size_cell_ParamLimits

0x5b3b,	// (0x00031312) aid_cam4_burst_size_cell

0x5b5b,	// (0x00031332) grid_cam4_burst_pane_ParamLimits

0x5b5b,	// (0x00031332) grid_cam4_burst_pane

0x5b93,	// (0x0003136a) linegrid_cam4_burst_pane_ParamLimits

0x5b93,	// (0x0003136a) linegrid_cam4_burst_pane

0xedb3,	// (0x0003a58a) scroll_pane_cp30_ParamLimits

0xedb3,	// (0x0003a58a) scroll_pane_cp30

0x5bb7,	// (0x0003138e) cell_cam4_burst_pane_ParamLimits

0x5bb7,	// (0x0003138e) cell_cam4_burst_pane

0xedbf,	// (0x0003a596) linegrid_cam4_burst_pane_g1_ParamLimits

0xedbf,	// (0x0003a596) linegrid_cam4_burst_pane_g1

0x5c04,	// (0x000313db) linegrid_cam4_burst_pane_g2_ParamLimits

0x5c04,	// (0x000313db) linegrid_cam4_burst_pane_g2

0xedcc,	// (0x0003a5a3) linegrid_cam4_burst_pane_g3_ParamLimits

0xedcc,	// (0x0003a5a3) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0003b155) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0003b155) linegrid_cam4_burst_pane_g

0x5c15,	// (0x000313ec) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5c15,	// (0x000313ec) linegrid_cam4_burst_pane_g3_copy1

0xedd9,	// (0x0003a5b0) linegrid_cam4_burst_pane_g4_ParamLimits

0xedd9,	// (0x0003a5b0) linegrid_cam4_burst_pane_g4

0x5c2f,	// (0x00031406) linegrid_cam4_burst_pane_g5_ParamLimits

0x5c2f,	// (0x00031406) linegrid_cam4_burst_pane_g5

0x5c40,	// (0x00031417) linegrid_cam4_burst_pane_g6_ParamLimits

0x5c40,	// (0x00031417) linegrid_cam4_burst_pane_g6

0xede6,	// (0x0003a5bd) linegrid_cam4_burst_pane_g7_ParamLimits

0xede6,	// (0x0003a5bd) linegrid_cam4_burst_pane_g7

0x5c57,	// (0x0003142e) cell_cam4_burst_pane_g1

0xedff,	// (0x0003a5d6) main_cam5_pane_t1_ParamLimits

0xedff,	// (0x0003a5d6) main_cam5_pane_t1

0xee11,	// (0x0003a5e8) main_cam5_pane_t2_ParamLimits

0xee11,	// (0x0003a5e8) main_cam5_pane_t2

0xee23,	// (0x0003a5fa) main_cam5_pane_t3_ParamLimits

0xee23,	// (0x0003a5fa) main_cam5_pane_t3

0xee35,	// (0x0003a60c) main_cam5_pane_t4_ParamLimits

0xee35,	// (0x0003a60c) main_cam5_pane_t4

0xee4d,	// (0x0003a624) main_cam5_pane_t5_ParamLimits

0xee4d,	// (0x0003a624) main_cam5_pane_t5

0xee61,	// (0x0003a638) main_cam5_pane_t6_ParamLimits

0xee61,	// (0x0003a638) main_cam5_pane_t6

0xee75,	// (0x0003a64c) main_cam5_pane_t7_ParamLimits

0xee75,	// (0x0003a64c) main_cam5_pane_t7

0xee87,	// (0x0003a65e) main_cam5_pane_t8_ParamLimits

0xee87,	// (0x0003a65e) main_cam5_pane_t8

0xeea3,	// (0x0003a67a) main_cam5_pane_t9_ParamLimits

0xeea3,	// (0x0003a67a) main_cam5_pane_t9

0xeeb5,	// (0x0003a68c) main_cam5_pane_t10_ParamLimits

0xeeb5,	// (0x0003a68c) main_cam5_pane_t10

0xeec7,	// (0x0003a69e) main_cam5_pane_t11_ParamLimits

0xeec7,	// (0x0003a69e) main_cam5_pane_t11

0xeed9,	// (0x0003a6b0) main_cam5_pane_t12_ParamLimits

0xeed9,	// (0x0003a6b0) main_cam5_pane_t12

0xeeee,	// (0x0003a6c5) main_cam5_pane_t13_ParamLimits

0xeeee,	// (0x0003a6c5) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0003b161) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0003b161) main_cam5_pane_t

0x052e,	// (0x0002bd05) popup_scut_keymap_window_ParamLimits

0x052e,	// (0x0002bd05) popup_scut_keymap_window

0x5c6a,	// (0x00031441) aid_size_cell_brow_shortcut

0xbf73,	// (0x0003774a) bg_popup_window_pane_cp010

0x5c76,	// (0x0003144d) grid_scut_pane

0x5c82,	// (0x00031459) cell_scut_pane_ParamLimits

0x5c82,	// (0x00031459) cell_scut_pane

0x5c99,	// (0x00031470) cell_scut_pane_g1

0xef0b,	// (0x0003a6e2) cell_scut_pane_t1

0xef1a,	// (0x0003a6f1) cell_scut_pane_t2

0x5ca2,	// (0x00031479) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0003b17c) cell_scut_pane_t

0x46bb,	// (0x0002fe92) main_mup3_pane_g8_ParamLimits

0x46bb,	// (0x0002fe92) main_mup3_pane_g8

0x12c0,	// (0x0002ca97) area_vitu2_query_pane_ParamLimits

0x12c0,	// (0x0002ca97) area_vitu2_query_pane

0x59fc,	// (0x000311d3) input_focus_pane_cp08

0xef29,	// (0x0003a700) area_vitu2_query_pane_g1

0x5cb0,	// (0x00031487) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0003b183) area_vitu2_query_pane_g

0x5cbf,	// (0x00031496) area_vitu2_query_pane_t1_ParamLimits

0x5cbf,	// (0x00031496) area_vitu2_query_pane_t1

0x5cd3,	// (0x000314aa) area_vitu2_query_pane_t2_ParamLimits

0x5cd3,	// (0x000314aa) area_vitu2_query_pane_t2

0x5ce7,	// (0x000314be) area_vitu2_query_pane_t3_ParamLimits

0x5ce7,	// (0x000314be) area_vitu2_query_pane_t3

0xef35,	// (0x0003a70c) area_vitu2_query_pane_t4_ParamLimits

0xef35,	// (0x0003a70c) area_vitu2_query_pane_t4

0xef5d,	// (0x0003a734) area_vitu2_query_pane_t5_ParamLimits

0xef5d,	// (0x0003a734) area_vitu2_query_pane_t5

0xef85,	// (0x0003a75c) area_vitu2_query_pane_t6_ParamLimits

0xef85,	// (0x0003a75c) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0003b188) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0003b188) area_vitu2_query_pane_t

0x5d0f,	// (0x000314e6) bg_button_pane_cp018

0x5d1b,	// (0x000314f2) bg_button_pane_cp021

0x5d27,	// (0x000314fe) bg_button_pane_cp022

0x5d46,	// (0x0003151d) input_focus_pane_cp09

0xc81c,	// (0x00037ff3) aid_size_touch_mv_arrow_left

0xc845,	// (0x0003801c) aid_size_touch_mv_arrow_right

0x5656,	// (0x00030e2d) main_cset_slider_pane_g16_ParamLimits

0x5656,	// (0x00030e2d) main_cset_slider_pane_g16

0x5662,	// (0x00030e39) main_cset_slider_pane_g17_ParamLimits

0x5662,	// (0x00030e39) main_cset_slider_pane_g17

0x5c57,	// (0x0003142e) cell_cam4_burst_pane_g1_ParamLimits

0xae30,	// (0x00036607) compa_mode_pane

0x5824,	// (0x00030ffb) popup_vtel_slider_window_g3_ParamLimits

0x5824,	// (0x00030ffb) popup_vtel_slider_window_g3

0x583b,	// (0x00031012) popup_vtel_slider_window_g4_ParamLimits

0x583b,	// (0x00031012) popup_vtel_slider_window_g4

0x5852,	// (0x00031029) popup_vtel_slider_window_t1_ParamLimits

0x5852,	// (0x00031029) popup_vtel_slider_window_t1

0xaead,	// (0x00036684) main_cl_pane

0xb3aa,	// (0x00036b81) popup_imed_adjust2_window_ParamLimits

0xcac0,	// (0x00038297) bg_tb_trans_pane_cp05_ParamLimits

0xe6a6,	// (0x00039e7d) popup_imed_adjust2_window_g1_ParamLimits

0xe6b5,	// (0x00039e8c) popup_imed_adjust2_window_g2_ParamLimits

0xe6b5,	// (0x00039e8c) popup_imed_adjust2_window_g2

0xe6c1,	// (0x00039e98) popup_imed_adjust2_window_g3_ParamLimits

0xe6c1,	// (0x00039e98) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0003aefe) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0003aefe) popup_imed_adjust2_window_g

0xe6cd,	// (0x00039ea4) popup_imed_adjust2_window_t1_ParamLimits

0xe6e5,	// (0x00039ebc) slider_imed_adjust_pane_ParamLimits

0xe6f9,	// (0x00039ed0) slider_imed_adjust_pane_g1_ParamLimits

0xe709,	// (0x00039ee0) slider_imed_adjust_pane_g2_ParamLimits

0xe719,	// (0x00039ef0) slider_imed_adjust_pane_g3_ParamLimits

0xe72a,	// (0x00039f01) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0003af05) slider_imed_adjust_pane_g_ParamLimits

0x107d,	// (0x0002c854) aid_touch_area_cam4_ParamLimits

0x107d,	// (0x0002c854) aid_touch_area_cam4

0xb787,	// (0x00036f5e) battery_pane_cp01

0x114c,	// (0x0002c923) main_camera4_pane_g6_ParamLimits

0x114c,	// (0x0002c923) main_camera4_pane_g6

0x1176,	// (0x0002c94d) main_camera4_pane_t2_ParamLimits

0x1176,	// (0x0002c94d) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0003b007) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0003b007) main_camera4_pane_t

0x1197,	// (0x0002c96e) aid_touch_area_vid4_ParamLimits

0x1197,	// (0x0002c96e) aid_touch_area_vid4

0x11eb,	// (0x0002c9c2) main_video4_pane_g5_ParamLimits

0x11eb,	// (0x0002c9c2) main_video4_pane_g5

0x1210,	// (0x0002c9e7) vid4_progress_pane_ParamLimits

0x1210,	// (0x0002c9e7) vid4_progress_pane

0xebeb,	// (0x0003a3c2) main_cset_slider_pane_g18_ParamLimits

0xebeb,	// (0x0003a3c2) main_cset_slider_pane_g18

0xedf3,	// (0x0003a5ca) cell_cam4_burst_pane_g2_ParamLimits

0xedf3,	// (0x0003a5ca) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0003b15c) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0003b15c) cell_cam4_burst_pane_g

0xbd9a,	// (0x00037571) bg_cl_pane_ParamLimits

0xbd9a,	// (0x00037571) bg_cl_pane

0x5d56,	// (0x0003152d) cl_header_pane_ParamLimits

0x5d56,	// (0x0003152d) cl_header_pane

0x5d6a,	// (0x00031541) cl_listscroll_pane_ParamLimits

0x5d6a,	// (0x00031541) cl_listscroll_pane

0xefd1,	// (0x0003a7a8) bg_cl_pane_g1

0xefd9,	// (0x0003a7b0) bg_cl_pane_g2

0xefe1,	// (0x0003a7b8) bg_cl_pane_g3

0xefe9,	// (0x0003a7c0) bg_cl_pane_g4

0xeff1,	// (0x0003a7c8) bg_cl_pane_g5

0xeff9,	// (0x0003a7d0) bg_cl_pane_g6

0xf001,	// (0x0003a7d8) bg_cl_pane_g7

0xf009,	// (0x0003a7e0) bg_cl_pane_g8

0xf011,	// (0x0003a7e8) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0003b197) bg_cl_pane_g

0x5d7a,	// (0x00031551) aid_height_cl_leading_ParamLimits

0x5d7a,	// (0x00031551) aid_height_cl_leading

0x5d86,	// (0x0003155d) aid_height_cl_text_ParamLimits

0x5d86,	// (0x0003155d) aid_height_cl_text

0xbcc1,	// (0x00037498) bg_cl_header_pane_ParamLimits

0xbcc1,	// (0x00037498) bg_cl_header_pane

0x5da5,	// (0x0003157c) cl_header_pane_g1_ParamLimits

0x5da5,	// (0x0003157c) cl_header_pane_g1

0x5dbb,	// (0x00031592) cl_header_pane_t1_ParamLimits

0x5dbb,	// (0x00031592) cl_header_pane_t1

0xf019,	// (0x0003a7f0) cl_list_pane

0xebbe,	// (0x0003a395) hc_scroll_pane_cp01

0xc19a,	// (0x00037971) bg_cl_header_pane_g1

0xea92,	// (0x0003a269) bg_cl_header_pane_g2

0xc1ba,	// (0x00037991) bg_cl_header_pane_g3

0xeaa2,	// (0x0003a279) bg_cl_header_pane_g4

0xea9a,	// (0x0003a271) bg_cl_header_pane_g5

0xed02,	// (0x0003a4d9) bg_cl_header_pane_g6

0xeaba,	// (0x0003a291) bg_cl_header_pane_g7

0xeac2,	// (0x0003a299) bg_cl_header_pane_g8

0xeab2,	// (0x0003a289) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0003b1aa) bg_cl_header_pane_g

0x5dd4,	// (0x000315ab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5dd4,	// (0x000315ab) hc_cl_list_double_graphic_heading_pane

0x5de5,	// (0x000315bc) hc_cl_list_single_graphic_pane_ParamLimits

0x5de5,	// (0x000315bc) hc_cl_list_single_graphic_pane

0x5dfb,	// (0x000315d2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5dfb,	// (0x000315d2) hc_cl_list_single_graphic_pane_g1

0x5e07,	// (0x000315de) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5e07,	// (0x000315de) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0003b1bd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0003b1bd) hc_cl_list_single_graphic_pane_g

0x5e1b,	// (0x000315f2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5e1b,	// (0x000315f2) hc_cl_list_single_graphic_pane_t1

0x5dfb,	// (0x000315d2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5dfb,	// (0x000315d2) hc_cl_list_double_graphic_heading_pane_g1

0x5e30,	// (0x00031607) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5e30,	// (0x00031607) hc_cl_list_double_graphic_heading_pane_g2

0x5e44,	// (0x0003161b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5e44,	// (0x0003161b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0003b1c2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0003b1c2) hc_cl_list_double_graphic_heading_pane_g

0x5e58,	// (0x0003162f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5e58,	// (0x0003162f) hc_cl_list_double_graphic_heading_pane_t1

0x5e6d,	// (0x00031644) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5e6d,	// (0x00031644) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0003b1c9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0003b1c9) hc_cl_list_double_graphic_heading_pane_t

0xb8f3,	// (0x000370ca) vid4_progress_pane_g1

0xb903,	// (0x000370da) vid4_progress_pane_g2

0x16e8,	// (0x0002cebf) vid4_progress_pane_g3

0xb913,	// (0x000370ea) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0003b1ce) vid4_progress_pane_g

0x16fa,	// (0x0002ced1) vid4_progress_pane_t1

0xb92b,	// (0x00037102) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0003b1d9) vid4_progress_pane_t

0x1712,	// (0x0002cee9) wait_bar_pane_cp07

0xdfc3,	// (0x0003979a) blid_firmament_pane_ParamLimits

0xe006,	// (0x000397dd) popup_blid_sat_info2_window_g1

0xe02a,	// (0x00039801) popup_blid_sat_info2_window_t3

0xe038,	// (0x0003980f) popup_blid_sat_info2_window_t4

0xe046,	// (0x0003981d) popup_blid_sat_info2_window_t5

0xe054,	// (0x0003982b) popup_blid_sat_info2_window_t6

0xe064,	// (0x0003983b) popup_blid_sat_info2_window_t7

0xe072,	// (0x00039849) popup_blid_sat_info2_window_t8

0xe080,	// (0x00039857) popup_blid_sat_info2_window_t9

0xe08e,	// (0x00039865) popup_blid_sat_info2_window_t10

0xe14f,	// (0x00039926) aid_firma_cardinal_ParamLimits

0xe163,	// (0x0003993a) blid_firmament_pane_t1_ParamLimits

0xe17a,	// (0x00039951) blid_firmament_pane_t2_ParamLimits

0xe191,	// (0x00039968) blid_firmament_pane_t3_ParamLimits

0xe1a8,	// (0x0003997f) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0003adf7) blid_firmament_pane_t_ParamLimits

0xe1bf,	// (0x00039996) blid_sat_info_pane_ParamLimits

0xae9f,	// (0x00036676) main_cam_set_pane_ParamLimits

0x4dcd,	// (0x000305a4) aid_size_cell_colour_35_ParamLimits

0x4ded,	// (0x000305c4) aid_size_cell_colour_112_ParamLimits

0x4e0d,	// (0x000305e4) aid_size_cell_effect_ParamLimits

0xcac0,	// (0x00038297) bg_tb_trans_pane_cp02_ParamLimits

0xc40a,	// (0x00037be1) heading_imed_pane_ParamLimits

0x4e2d,	// (0x00030604) listscroll_imed_pane_ParamLimits

0xd4b0,	// (0x00038c87) popup_call2_audio_first_window_g5_ParamLimits

0xd4b0,	// (0x00038c87) popup_call2_audio_first_window_g5

0x0d6e,	// (0x0002c545) aid_size_touch_image3_arrow_left_ParamLimits

0x0d6e,	// (0x0002c545) aid_size_touch_image3_arrow_left

0x0d9a,	// (0x0002c571) aid_size_touch_image3_arrow_right_ParamLimits

0x0d9a,	// (0x0002c571) aid_size_touch_image3_arrow_right

0xb940,	// (0x00037117) vid4_progress_pane_t3

0x4fd2,	// (0x000307a9) main_hwr_training_symbol_option_pane_ParamLimits

0x4fd2,	// (0x000307a9) main_hwr_training_symbol_option_pane

0xe8df,	// (0x0003a0b6) popup_hwr_training_preview_window_ParamLimits

0xe8df,	// (0x0003a0b6) popup_hwr_training_preview_window

0x0c19,	// (0x0002c3f0) hwr_training_navi_pane_g5_ParamLimits

0x0c19,	// (0x0002c3f0) hwr_training_navi_pane_g5

0xea80,	// (0x0003a257) popup_char_count_window

0xae9f,	// (0x00036676) bg_popup_sub_pane_cp20_ParamLimits

0x165e,	// (0x0002ce35) list_vitu2_match_list_pane_ParamLimits

0x166a,	// (0x0002ce41) vitu2_page_scroll_pane_ParamLimits

0x166a,	// (0x0002ce41) vitu2_page_scroll_pane

0x5eb8,	// (0x0003168f) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5eb8,	// (0x0003168f) list_single_hwr_training_symbol_option_pane

0x5ecb,	// (0x000316a2) list_single_hwr_training_symbol_option_pane_g1

0x5ed3,	// (0x000316aa) list_single_hwr_training_symbol_option_pane_t1

0x5ee1,	// (0x000316b8) bg_button_pane_cp023

0x5eea,	// (0x000316c1) bg_button_pane_cp024

0x5f1d,	// (0x000316f4) vitu2_page_scroll_pane_g1

0x5f25,	// (0x000316fc) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0003b1e0) vitu2_page_scroll_pane_g

0x5f2d,	// (0x00031704) vitu2_page_scroll_pane_t1

0xdf2b,	// (0x00039702) popup_char_count_window_g1

0x5f3c,	// (0x00031713) popup_char_count_window_g2

0x5f45,	// (0x0003171c) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0003b1e5) popup_char_count_window_g

0x5f4e,	// (0x00031725) popup_char_count_window_t1

0xaead,	// (0x00036684) main_vded2_pane

0xe692,	// (0x00039e69) aid_size_cell_imed_line

0xe69c,	// (0x00039e73) grid_imed_line_width_pane

0xb83f,	// (0x00037016) vid4_indicators_pane_g4

0x5f5c,	// (0x00031733) cell_imed_line_width_pane_ParamLimits

0x5f5c,	// (0x00031733) cell_imed_line_width_pane

0x5f70,	// (0x00031747) cell_imed_line_width_pane_g1

0x5f79,	// (0x00031750) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0003b1ec) cell_imed_line_width_pane_g

0x5f81,	// (0x00031758) main_vded2_pane_g1_ParamLimits

0x5f81,	// (0x00031758) main_vded2_pane_g1

0x5f97,	// (0x0003176e) main_vded2_pane_g2_ParamLimits

0x5f97,	// (0x0003176e) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0003b1f1) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0003b1f1) main_vded2_pane_g

0x5fa9,	// (0x00031780) vded2_slider_pane_ParamLimits

0x5fa9,	// (0x00031780) vded2_slider_pane

0x5fb9,	// (0x00031790) aid_size_touch_vded2_end

0x5fc3,	// (0x0003179a) aid_size_touch_vded2_playhead

0x5fcd,	// (0x000317a4) aid_size_touch_vded2_start

0x5fd5,	// (0x000317ac) vded2_slider_bg_pane

0x5fde,	// (0x000317b5) vded2_slider_pane_g1

0x5fe7,	// (0x000317be) vded2_slider_pane_g2

0x5fef,	// (0x000317c6) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0003b1f6) vded2_slider_pane_g

0x5ffa,	// (0x000317d1) vded2_slider_bg_pane_g1

0x6003,	// (0x000317da) vded2_slider_bg_pane_g2

0x600c,	// (0x000317e3) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0003b1fd) vded2_slider_bg_pane_g

0x36e7,	// (0x0002eebe) aid_postcard_touch_down_pane_ParamLimits

0x36e7,	// (0x0002eebe) aid_postcard_touch_down_pane

0x36fd,	// (0x0002eed4) aid_postcard_touch_up_pane_ParamLimits

0x36fd,	// (0x0002eed4) aid_postcard_touch_up_pane

0xaead,	// (0x00036684) main_blid2_pane

0xb390,	// (0x00036b67) popup_blid2_search_window

0xae30,	// (0x00036607) blid2_gps_pane

0xae30,	// (0x00036607) blid2_navig_pane

0xae30,	// (0x00036607) blid2_search_pane

0xae30,	// (0x00036607) blid2_tripm_pane

0x6015,	// (0x000317ec) blid2_search_pane_g1_ParamLimits

0x6015,	// (0x000317ec) blid2_search_pane_g1

0x602f,	// (0x00031806) blid2_search_pane_t1_ParamLimits

0x602f,	// (0x00031806) blid2_search_pane_t1

0x6041,	// (0x00031818) aid_size_cell_blid2_gps_ParamLimits

0x6041,	// (0x00031818) aid_size_cell_blid2_gps

0x6059,	// (0x00031830) blid2_gps_pane_g1_ParamLimits

0x6059,	// (0x00031830) blid2_gps_pane_g1

0x606d,	// (0x00031844) grid_blid2_satellite_pane_ParamLimits

0x606d,	// (0x00031844) grid_blid2_satellite_pane

0x6087,	// (0x0003185e) blid2_navig_pane_g1_ParamLimits

0x6087,	// (0x0003185e) blid2_navig_pane_g1

0x6093,	// (0x0003186a) blid2_navig_pane_t1_ParamLimits

0x6093,	// (0x0003186a) blid2_navig_pane_t1

0x60ae,	// (0x00031885) blid2_navig_pane_t2_ParamLimits

0x60ae,	// (0x00031885) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0003b204) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0003b204) blid2_navig_pane_t

0x60c9,	// (0x000318a0) blid2_navig_ring_pane_ParamLimits

0x60c9,	// (0x000318a0) blid2_navig_ring_pane

0x60e2,	// (0x000318b9) blid2_speed_pane_ParamLimits

0x60e2,	// (0x000318b9) blid2_speed_pane

0x60ee,	// (0x000318c5) blid2_tripm_pane_g1_ParamLimits

0x60ee,	// (0x000318c5) blid2_tripm_pane_g1

0x6107,	// (0x000318de) blid2_tripm_pane_g2_ParamLimits

0x6107,	// (0x000318de) blid2_tripm_pane_g2

0x611b,	// (0x000318f2) blid2_tripm_pane_g3_ParamLimits

0x611b,	// (0x000318f2) blid2_tripm_pane_g3

0x612f,	// (0x00031906) blid2_tripm_pane_g4_ParamLimits

0x612f,	// (0x00031906) blid2_tripm_pane_g4

0x6143,	// (0x0003191a) blid2_tripm_pane_g5_ParamLimits

0x6143,	// (0x0003191a) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0003b209) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0003b209) blid2_tripm_pane_g

0x6169,	// (0x00031940) blid2_tripm_pane_t1_ParamLimits

0x6169,	// (0x00031940) blid2_tripm_pane_t1

0x6184,	// (0x0003195b) blid2_tripm_pane_t2_ParamLimits

0x6184,	// (0x0003195b) blid2_tripm_pane_t2

0x619d,	// (0x00031974) blid2_tripm_pane_t3_ParamLimits

0x619d,	// (0x00031974) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0003b216) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0003b216) blid2_tripm_pane_t

0x61e4,	// (0x000319bb) cell_blid2_satellite_pane_ParamLimits

0x61e4,	// (0x000319bb) cell_blid2_satellite_pane

0x6202,	// (0x000319d9) cell_blid2_satellite_pane_g1

0x620b,	// (0x000319e2) cell_blid2_satellite_pane_t1

0xbfa9,	// (0x00037780) blid2_speed_pane_g1

0x6219,	// (0x000319f0) blid2_speed_pane_t1

0x6227,	// (0x000319fe) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0003b21f) blid2_speed_pane_t

0xbfa9,	// (0x00037780) blid2_navig_ring_pane_g1

0x6235,	// (0x00031a0c) blid2_navig_ring_pane_g2

0x623d,	// (0x00031a14) blid2_navig_ring_pane_g3

0x6245,	// (0x00031a1c) blid2_navig_ring_pane_g4

0x624d,	// (0x00031a24) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0003b224) blid2_navig_ring_pane_g

0xae30,	// (0x00036607) bg_popup_window_pane_cp011

0x6255,	// (0x00031a2c) popup_blid2_search_window_g1

0x625d,	// (0x00031a34) popup_blid2_search_window_t1

0x626b,	// (0x00031a42) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0003b22f) popup_blid2_search_window_t

0xc0a9,	// (0x00037880) main_browser_pane_g1

0xbd9a,	// (0x00037571) main_browser_pane_ParamLimits

0xae9f,	// (0x00036676) bg_button_pane_cp011_ParamLimits

0x15dc,	// (0x0002cdb3) cell_vitu2_function_pane_g1_ParamLimits

0xcac0,	// (0x00038297) bg_popup_sub_pane_cp22_ParamLimits

0x59fc,	// (0x000311d3) input_focus_pane_cp08_ParamLimits

0x5a17,	// (0x000311ee) popup_vitu2_query_button_pane_ParamLimits

0x5a17,	// (0x000311ee) popup_vitu2_query_button_pane

0x5a26,	// (0x000311fd) popup_vitu2_query_input_button_pane

0xed3d,	// (0x0003a514) popup_vitu2_query_window_g1_ParamLimits

0x5a2e,	// (0x00031205) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0003b130) popup_vitu2_query_window_g_ParamLimits

0xae30,	// (0x00036607) bg_button_pane_cp026

0x6279,	// (0x00031a50) popup_vitu2_query_input_button_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp025

0x6281,	// (0x00031a58) popup_vitu2_query_button_pane_t1

0x4324,	// (0x0002fafb) main_mp3_pane_t6

0x4332,	// (0x0002fb09) popup_slider_window_cp01

0xb7a3,	// (0x00036f7a) cam4_battery_pane

0xb7fc,	// (0x00036fd3) cam4_battery_pane_cp02

0xb8eb,	// (0x000370c2) cam4_battery_pane_cp01

0xb8eb,	// (0x000370c2) cam4_battery_pane_cp03

0x4298,	// (0x0002fa6f) cam4_battery_pane_g1

0xbfa9,	// (0x00037780) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0003b234) cam4_battery_pane_g

0xe09c,	// (0x00039873) popup_blid_sat_info2_window_t11

0xc81c,	// (0x00037ff3) aid_size_touch_mv_arrow_left_ParamLimits

0xc845,	// (0x0003801c) aid_size_touch_mv_arrow_right_ParamLimits

0xc8a3,	// (0x0003807a) navi_pane_g1_ParamLimits

0xc8af,	// (0x00038086) navi_pane_g2_ParamLimits

0xc8dd,	// (0x000380b4) navi_pane_g3_ParamLimits

0xf334,	// (0x0003ab0b) navi_pane_g_ParamLimits

0x33e3,	// (0x0002ebba) navi_pane_mv_t1_ParamLimits

0x4e39,	// (0x00030610) grid_imed_effect_pane_ParamLimits

0x2198,	// (0x0002d96f) aid_placing_vt_slider_lsc

0xbff8,	// (0x000377cf) aid_placing_vt_slider_prt

0xbcc1,	// (0x00037498) bg_tb_trans_pane_cp01_ParamLimits

0xe31c,	// (0x00039af3) popup_image_details_window_g1_ParamLimits

0xe32f,	// (0x00039b06) popup_image_details_window_g2_ParamLimits

0xe344,	// (0x00039b1b) popup_image_details_window_g3_ParamLimits

0xe344,	// (0x00039b1b) popup_image_details_window_g3

0xf660,	// (0x0003ae37) popup_image_details_window_g_ParamLimits

0xe358,	// (0x00039b2f) popup_image_details_window_t1_ParamLimits

0xe36a,	// (0x00039b41) popup_image_details_window_t2_ParamLimits

0xe383,	// (0x00039b5a) popup_image_details_window_t3_ParamLimits

0xe397,	// (0x00039b6e) popup_image_details_window_t4_ParamLimits

0xe3b2,	// (0x00039b89) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0003ae3e) popup_image_details_window_t_ParamLimits

0x5d92,	// (0x00031569) cl_header_name_pane_ParamLimits

0x5d92,	// (0x00031569) cl_header_name_pane

0x628f,	// (0x00031a66) cl_header_name_pane_t1_ParamLimits

0x628f,	// (0x00031a66) cl_header_name_pane_t1

0x62b0,	// (0x00031a87) cl_header_name_pane_t2_ParamLimits

0x62b0,	// (0x00031a87) cl_header_name_pane_t2

0x62f2,	// (0x00031ac9) cl_header_name_pane_t3_ParamLimits

0x62f2,	// (0x00031ac9) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0003b239) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0003b239) cl_header_name_pane_t

0xc96c,	// (0x00038143) navi_pane_mv_g2_ParamLimits

0xea4b,	// (0x0003a222) field_vitu2_entry_pane_g1_ParamLimits

0xea57,	// (0x0003a22e) field_vitu2_entry_pane_g2_ParamLimits

0xca8a,	// (0x00038261) field_vitu2_entry_pane_g3_ParamLimits

0xca8a,	// (0x00038261) field_vitu2_entry_pane_g3

0xf862,	// (0x0003b039) field_vitu2_entry_pane_g_ParamLimits

0x146c,	// (0x0002cc43) cell_vitu2_itu_pane_g1_ParamLimits

0x1484,	// (0x0002cc5b) cell_vitu2_itu_pane_g2_ParamLimits

0x1484,	// (0x0002cc5b) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0003b045) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0003b045) cell_vitu2_itu_pane_g

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp05_ParamLimits

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp05

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp03

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp04

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp10_ParamLimits

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp10

0x5d36,	// (0x0003150d) bg_vkb2_func_pane_cp08

0x5d0f,	// (0x000314e6) bg_vkb2_func_pane_cp06

0x5d1b,	// (0x000314f2) bg_vkb2_func_pane_cp07

0x5ef3,	// (0x000316ca) bg_vkb2_func_pane_cp11_ParamLimits

0x5ef3,	// (0x000316ca) bg_vkb2_func_pane_cp11

0x5f08,	// (0x000316df) bg_vkb2_func_pane_cp12_ParamLimits

0x5f08,	// (0x000316df) bg_vkb2_func_pane_cp12

0xae30,	// (0x00036607) bg_vkb2_func_pane_cp09

0xea92,	// (0x0003a269) bg_vkb2_func_pane_g1

0xc1ba,	// (0x00037991) bg_vkb2_func_pane_g2

0xea9a,	// (0x0003a271) bg_vkb2_func_pane_g3

0xeaa2,	// (0x0003a279) bg_vkb2_func_pane_g4

0xed02,	// (0x0003a4d9) bg_vkb2_func_pane_g5

0xeaba,	// (0x0003a291) bg_vkb2_func_pane_g6

0xeac2,	// (0x0003a299) bg_vkb2_func_pane_g7

0xeab2,	// (0x0003a289) bg_vkb2_func_pane_g8

0xc19a,	// (0x00037971) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0003b240) bg_vkb2_func_pane_g

0x6157,	// (0x0003192e) blid2_tripm_pane_g6_ParamLimits

0x6157,	// (0x0003192e) blid2_tripm_pane_g6

0xe99d,	// (0x0003a174) mp4_progress_pane_g1

0x61d0,	// (0x000319a7) blid2_tripm_values_pane_ParamLimits

0x61d0,	// (0x000319a7) blid2_tripm_values_pane

0x6323,	// (0x00031afa) blid2_tripm_values_pane_t1

0x6331,	// (0x00031b08) blid2_tripm_values_pane_t2

0x633f,	// (0x00031b16) blid2_tripm_values_pane_t3

0x634d,	// (0x00031b24) blid2_tripm_values_pane_t4

0x635b,	// (0x00031b32) blid2_tripm_values_pane_t5

0x6369,	// (0x00031b40) blid2_tripm_values_pane_t6

0x6377,	// (0x00031b4e) blid2_tripm_values_pane_t7

0x6385,	// (0x00031b5c) blid2_tripm_values_pane_t8

0x6393,	// (0x00031b6a) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0003b253) blid2_tripm_values_pane_t

0x21da,	// (0x0002d9b1) call_video_pane_t1_ParamLimits

0x21f8,	// (0x0002d9cf) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0003a9b9) call_video_pane_t_ParamLimits

0x369d,	// (0x0002ee74) msg_header_pane_g1_ParamLimits

0xcb7d,	// (0x00038354) msg_header_pane_g2_ParamLimits

0xcb7d,	// (0x00038354) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0003abae) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0003abae) msg_header_pane_g

0xbd9a,	// (0x00037571) main_clock2_pane_ParamLimits

0x4c0e,	// (0x000303e5) grid_clock2_toolbar_pane_ParamLimits

0x4c0e,	// (0x000303e5) grid_clock2_toolbar_pane

0x4c0e,	// (0x000303e5) listscroll_clock2_pane_ParamLimits

0x4c0e,	// (0x000303e5) listscroll_clock2_pane

0x4cf2,	// (0x000304c9) main_clock2_pane_t3_ParamLimits

0x4cf2,	// (0x000304c9) main_clock2_pane_t3

0x4d16,	// (0x000304ed) main_clock2_pane_t4_ParamLimits

0x4d16,	// (0x000304ed) main_clock2_pane_t4

0x63a1,	// (0x00031b78) cell_clock2_toolbar_pane

0x63a9,	// (0x00031b80) cell_clock2_toolbar_pane_cp01

0x63a9,	// (0x00031b80) cell_clock2_toolbar_pane_cp02

0x63b1,	// (0x00031b88) cell_clock2_toolbar_pane_cp03

0x63b9,	// (0x00031b90) list_clock2_pane

0xc792,	// (0x00037f69) scroll_pane_cp10

0x63c1,	// (0x00031b98) list_single_clock2_pane_ParamLimits

0x63c1,	// (0x00031b98) list_single_clock2_pane

0xbf73,	// (0x0003774a) list_highlight_pane_cp08

0x63ce,	// (0x00031ba5) list_single_clock2_pane_t1

0x63dc,	// (0x00031bb3) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0003b266) list_single_clock2_pane_t

0xae30,	// (0x00036607) bg_button_pane_cp10

0x63ea,	// (0x00031bc1) cell_clock2_toolbar_pane_g1

0x07ff,	// (0x0002bfd6) aid_main_viewer_pane_g1_ParamLimits

0x07ff,	// (0x0002bfd6) aid_main_viewer_pane_g1

0x080d,	// (0x0002bfe4) aid_main_viewer_pane_g2_ParamLimits

0x080d,	// (0x0002bfe4) aid_main_viewer_pane_g2

0x36ab,	// (0x0002ee82) aid_main_viewer_pane_g3_ParamLimits

0x36ab,	// (0x0002ee82) aid_main_viewer_pane_g3

0x36ba,	// (0x0002ee91) aid_main_viewer_pane_g4_ParamLimits

0x36ba,	// (0x0002ee91) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0003abbf) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0003abbf) aid_main_viewer_pane_g

0x0841,	// (0x0002c018) main_calc_pane_ParamLimits

0x0867,	// (0x0002c03e) main_dialer2_pane_ParamLimits

0xaead,	// (0x00036684) main_cam6_pane

0xaead,	// (0x00036684) main_vid6_pane

0x4c1a,	// (0x000303f1) listscroll_gen_pane_cp06_ParamLimits

0x4c1a,	// (0x000303f1) listscroll_gen_pane_cp06

0x4d39,	// (0x00030510) main_clock2_pane_t5_ParamLimits

0x4d39,	// (0x00030510) main_clock2_pane_t5

0x4d97,	// (0x0003056e) aid_call2_pane_cp10_ParamLimits

0x4da9,	// (0x00030580) aid_call_pane_cp10_ParamLimits

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x0b45,	// (0x0002c31c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x0b45,	// (0x0002c31c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc810,	// (0x00037fe7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0003aef3) popup_clock_analogue_window_cp10_g_ParamLimits

0x0b5b,	// (0x0002c332) popup_clock_analogue_window_cp10_t1_ParamLimits

0x50aa,	// (0x00030881) cell_dialer2_keypad_pane_g2_ParamLimits

0x50aa,	// (0x00030881) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0003afd8) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0003afd8) cell_dialer2_keypad_pane_g

0x50c6,	// (0x0003089d) cell_dialer2_keypad_pane_t1

0x5550,	// (0x00030d27) main_cset_text2_pane_ParamLimits

0x5550,	// (0x00030d27) main_cset_text2_pane

0xef29,	// (0x0003a700) area_vitu2_query_pane_g1_ParamLimits

0x5cb0,	// (0x00031487) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0003b183) area_vitu2_query_pane_g_ParamLimits

0xefad,	// (0x0003a784) area_vitu2_query_pane_t7_ParamLimits

0xefad,	// (0x0003a784) area_vitu2_query_pane_t7

0x5d0f,	// (0x000314e6) bg_button_pane_cp018_ParamLimits

0x5d1b,	// (0x000314f2) bg_button_pane_cp021_ParamLimits

0x5d27,	// (0x000314fe) bg_button_pane_cp022_ParamLimits

0x5d36,	// (0x0003150d) bg_vkb2_func_pane_cp08_ParamLimits

0x5d0f,	// (0x000314e6) bg_vkb2_func_pane_cp06_ParamLimits

0x5d1b,	// (0x000314f2) bg_vkb2_func_pane_cp07_ParamLimits

0x5d46,	// (0x0003151d) input_focus_pane_cp09_ParamLimits

0x1725,	// (0x0002cefc) cam6_autofocus_pane_ParamLimits

0x1725,	// (0x0002cefc) cam6_autofocus_pane

0x1731,	// (0x0002cf08) cam6_image_uncrop_pane_ParamLimits

0x1731,	// (0x0002cf08) cam6_image_uncrop_pane

0x1741,	// (0x0002cf18) cam6_indi_pane_ParamLimits

0x1741,	// (0x0002cf18) cam6_indi_pane

0x1757,	// (0x0002cf2e) cam6_mode_pane_ParamLimits

0x1757,	// (0x0002cf2e) cam6_mode_pane

0x1769,	// (0x0002cf40) cam6_timer_pane_ParamLimits

0x1769,	// (0x0002cf40) cam6_timer_pane

0x1775,	// (0x0002cf4c) cam6_zoom_pane_ParamLimits

0x1775,	// (0x0002cf4c) cam6_zoom_pane

0x63f2,	// (0x00031bc9) cam6_mode_pane_g1_ParamLimits

0x63f2,	// (0x00031bc9) cam6_mode_pane_g1

0x6402,	// (0x00031bd9) cam6_mode_pane_g2_ParamLimits

0x6402,	// (0x00031bd9) cam6_mode_pane_g2

0x6412,	// (0x00031be9) cam6_mode_pane_g3_ParamLimits

0x6412,	// (0x00031be9) cam6_mode_pane_g3

0x6422,	// (0x00031bf9) cam6_mode_pane_g4_ParamLimits

0x6422,	// (0x00031bf9) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0003b26b) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0003b26b) cam6_mode_pane_g

0xe57c,	// (0x00039d53) bg_tb_trans_pane_cp08_ParamLimits

0xe57c,	// (0x00039d53) bg_tb_trans_pane_cp08

0x6432,	// (0x00031c09) cam6_battery_pane_ParamLimits

0x6432,	// (0x00031c09) cam6_battery_pane

0x6448,	// (0x00031c1f) cam6_indi_pane_g1_ParamLimits

0x6448,	// (0x00031c1f) cam6_indi_pane_g1

0x645a,	// (0x00031c31) cam6_indi_pane_g2_ParamLimits

0x645a,	// (0x00031c31) cam6_indi_pane_g2

0x646c,	// (0x00031c43) cam6_indi_pane_g3_ParamLimits

0x646c,	// (0x00031c43) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0003b274) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0003b274) cam6_indi_pane_g

0x647e,	// (0x00031c55) cam6_indi_pane_t1_ParamLimits

0x647e,	// (0x00031c55) cam6_indi_pane_t1

0x520e,	// (0x000309e5) cam6_autofocus_pane_g1

0x5206,	// (0x000309dd) cam6_autofocus_pane_g2

0x521e,	// (0x000309f5) cam6_autofocus_pane_g3

0x5216,	// (0x000309ed) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0003b27b) cam6_autofocus_pane_g

0x64a4,	// (0x00031c7b) cam6_timer_pane_g1

0x64ac,	// (0x00031c83) cam6_timer_pane_t1

0x64ba,	// (0x00031c91) cam6_zoom_cont_pane

0x64c2,	// (0x00031c99) cam6_zoom_pane_g1

0x64cb,	// (0x00031ca2) cam6_zoom_pane_g2

0x64d4,	// (0x00031cab) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0003b284) cam6_zoom_pane_g

0xbfa9,	// (0x00037780) cam6_battery_pane_g1

0xbfa9,	// (0x00037780) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) cam6_battery_pane_g

0x64c2,	// (0x00031c99) cam6_zoom_cont_pane_g1

0x64cb,	// (0x00031ca2) cam6_zoom_cont_pane_g2

0x64dd,	// (0x00031cb4) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0003b28b) cam6_zoom_cont_pane_g

0x64f7,	// (0x00031cce) cam6_mode_pane_cp_ParamLimits

0x64f7,	// (0x00031cce) cam6_mode_pane_cp

0x6509,	// (0x00031ce0) cam6_zoom_pane_cp_ParamLimits

0x6509,	// (0x00031ce0) cam6_zoom_pane_cp

0x6515,	// (0x00031cec) vid6_image_uncrop_cif_pane_ParamLimits

0x6515,	// (0x00031cec) vid6_image_uncrop_cif_pane

0x6525,	// (0x00031cfc) vid6_image_uncrop_nhd_pane_ParamLimits

0x6525,	// (0x00031cfc) vid6_image_uncrop_nhd_pane

0x6544,	// (0x00031d1b) vid6_image_uncrop_vga_pane_ParamLimits

0x6544,	// (0x00031d1b) vid6_image_uncrop_vga_pane

0x6553,	// (0x00031d2a) vid6_image_uncrop_wvga_pane_ParamLimits

0x6553,	// (0x00031d2a) vid6_image_uncrop_wvga_pane

0x6562,	// (0x00031d39) vid6_indi_pane_ParamLimits

0x6562,	// (0x00031d39) vid6_indi_pane

0xe57c,	// (0x00039d53) bg_tb_trans_pane_cp09_ParamLimits

0xe57c,	// (0x00039d53) bg_tb_trans_pane_cp09

0x657a,	// (0x00031d51) cam6_battery_pane_cp_ParamLimits

0x657a,	// (0x00031d51) cam6_battery_pane_cp

0x6586,	// (0x00031d5d) vid6_indi_pane_g1_ParamLimits

0x6586,	// (0x00031d5d) vid6_indi_pane_g1

0x6598,	// (0x00031d6f) vid6_indi_pane_g2_ParamLimits

0x6598,	// (0x00031d6f) vid6_indi_pane_g2

0x65aa,	// (0x00031d81) vid6_indi_pane_g3_ParamLimits

0x65aa,	// (0x00031d81) vid6_indi_pane_g3

0x65bf,	// (0x00031d96) vid6_indi_pane_g4_ParamLimits

0x65bf,	// (0x00031d96) vid6_indi_pane_g4

0x65d4,	// (0x00031dab) vid6_indi_pane_g5_ParamLimits

0x65d4,	// (0x00031dab) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0003b292) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0003b292) vid6_indi_pane_g

0x65ee,	// (0x00031dc5) vid6_indi_pane_t1_ParamLimits

0x65ee,	// (0x00031dc5) vid6_indi_pane_t1

0x6604,	// (0x00031ddb) vid6_indi_pane_t2_ParamLimits

0x6604,	// (0x00031ddb) vid6_indi_pane_t2

0x662c,	// (0x00031e03) vid6_indi_pane_t3_ParamLimits

0x662c,	// (0x00031e03) vid6_indi_pane_t3

0x6654,	// (0x00031e2b) vid6_indi_pane_t4_ParamLimits

0x6654,	// (0x00031e2b) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0003b29d) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0003b29d) vid6_indi_pane_t

0x6678,	// (0x00031e4f) wait_bar_pane_cp08

0x6687,	// (0x00031e5e) main_cset_text2_pane_t1_ParamLimits

0x6687,	// (0x00031e5e) main_cset_text2_pane_t1

0x64e5,	// (0x00031cbc) listscroll_gen_pane_cp06_t1_ParamLimits

0x64e5,	// (0x00031cbc) listscroll_gen_pane_cp06_t1

0xaead,	// (0x00036684) main_cam6_set_pane

0x51f8,	// (0x000309cf) bg_tb_trans_pane_cp06_ParamLimits

0xb7ab,	// (0x00036f82) cam4_indicators_pane_g1_ParamLimits

0xb7bc,	// (0x00036f93) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0003b015) cam4_indicators_pane_g_ParamLimits

0xb7da,	// (0x00036fb1) cam4_indicators_pane_t1_ParamLimits

0xae9f,	// (0x00036676) bg_tb_trans_pane_cp07_ParamLimits

0xb806,	// (0x00036fdd) vid4_indicators_pane_g1_ParamLimits

0xb81a,	// (0x00036ff1) vid4_indicators_pane_g2_ParamLimits

0xb82e,	// (0x00037005) vid4_indicators_pane_g3_ParamLimits

0xb83f,	// (0x00037016) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0003b027) vid4_indicators_pane_g_ParamLimits

0xb85d,	// (0x00037034) vid4_indicators_pane_t1_ParamLimits

0xb8f3,	// (0x000370ca) vid4_progress_pane_g1_ParamLimits

0xb903,	// (0x000370da) vid4_progress_pane_g2_ParamLimits

0x16e8,	// (0x0002cebf) vid4_progress_pane_g3_ParamLimits

0xb913,	// (0x000370ea) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0003b1ce) vid4_progress_pane_g_ParamLimits

0x16fa,	// (0x0002ced1) vid4_progress_pane_t1_ParamLimits

0xb92b,	// (0x00037102) vid4_progress_pane_t2_ParamLimits

0xb940,	// (0x00037117) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0003b1d9) vid4_progress_pane_t_ParamLimits

0x1712,	// (0x0002cee9) wait_bar_pane_cp07_ParamLimits

0x66a4,	// (0x00031e7b) main_cam6_set_pane_g2_ParamLimits

0x66a4,	// (0x00031e7b) main_cam6_set_pane_g2

0x66c8,	// (0x00031e9f) main_cset6_listscroll_pane_ParamLimits

0x66c8,	// (0x00031e9f) main_cset6_listscroll_pane

0x66e8,	// (0x00031ebf) main_cset6_slider_pane_ParamLimits

0x66e8,	// (0x00031ebf) main_cset6_slider_pane

0x66fe,	// (0x00031ed5) main_cset6_text2_pane_ParamLimits

0x66fe,	// (0x00031ed5) main_cset6_text2_pane

0x670c,	// (0x00031ee3) main_cset6_text_pane

0x6714,	// (0x00031eeb) main_cset_list_pane_copy1_ParamLimits

0x6714,	// (0x00031eeb) main_cset_list_pane_copy1

0x6724,	// (0x00031efb) scroll_pane_cp028_copy1

0x672d,	// (0x00031f04) cset_list_set_pane_copy1

0x673e,	// (0x00031f15) aid_position_infowindow_above_copy1

0x6746,	// (0x00031f1d) aid_position_infowindow_below_copy1

0x674e,	// (0x00031f25) cset_list_set_pane_g1_copy1

0x6756,	// (0x00031f2d) cset_list_set_pane_g3_copy1_ParamLimits

0x6756,	// (0x00031f2d) cset_list_set_pane_g3_copy1

0x6765,	// (0x00031f3c) cset_list_set_pane_t1_copy1_ParamLimits

0x6765,	// (0x00031f3c) cset_list_set_pane_t1_copy1

0xbcc1,	// (0x00037498) list_highlight_pane_cp021_copy1_ParamLimits

0xbcc1,	// (0x00037498) list_highlight_pane_cp021_copy1

0x677a,	// (0x00031f51) cset6_slider_pane_ParamLimits

0x677a,	// (0x00031f51) cset6_slider_pane

0x67a6,	// (0x00031f7d) main_cset6_slider_pane_g1_ParamLimits

0x67a6,	// (0x00031f7d) main_cset6_slider_pane_g1

0x67ce,	// (0x00031fa5) main_cset6_slider_pane_g2_ParamLimits

0x67ce,	// (0x00031fa5) main_cset6_slider_pane_g2

0x67f6,	// (0x00031fcd) main_cset6_slider_pane_g3_ParamLimits

0x67f6,	// (0x00031fcd) main_cset6_slider_pane_g3

0x6802,	// (0x00031fd9) main_cset6_slider_pane_g4_ParamLimits

0x6802,	// (0x00031fd9) main_cset6_slider_pane_g4

0x680e,	// (0x00031fe5) main_cset6_slider_pane_g5_ParamLimits

0x680e,	// (0x00031fe5) main_cset6_slider_pane_g5

0xebd3,	// (0x0003a3aa) main_cset6_slider_pane_g7_ParamLimits

0xebd3,	// (0x0003a3aa) main_cset6_slider_pane_g7

0xebdf,	// (0x0003a3b6) main_cset6_slider_pane_g8_ParamLimits

0xebdf,	// (0x0003a3b6) main_cset6_slider_pane_g8

0x55f6,	// (0x00030dcd) main_cset6_slider_pane_g9_ParamLimits

0x55f6,	// (0x00030dcd) main_cset6_slider_pane_g9

0x5602,	// (0x00030dd9) main_cset6_slider_pane_g10_ParamLimits

0x5602,	// (0x00030dd9) main_cset6_slider_pane_g10

0x560e,	// (0x00030de5) main_cset6_slider_pane_g11_ParamLimits

0x560e,	// (0x00030de5) main_cset6_slider_pane_g11

0x561a,	// (0x00030df1) main_cset6_slider_pane_g12_ParamLimits

0x561a,	// (0x00030df1) main_cset6_slider_pane_g12

0x5626,	// (0x00030dfd) main_cset6_slider_pane_g13_ParamLimits

0x5626,	// (0x00030dfd) main_cset6_slider_pane_g13

0x5632,	// (0x00030e09) main_cset6_slider_pane_g14_ParamLimits

0x5632,	// (0x00030e09) main_cset6_slider_pane_g14

0x681a,	// (0x00031ff1) main_cset6_slider_pane_g15_ParamLimits

0x681a,	// (0x00031ff1) main_cset6_slider_pane_g15

0x5656,	// (0x00030e2d) main_cset6_slider_pane_g16_ParamLimits

0x5656,	// (0x00030e2d) main_cset6_slider_pane_g16

0x5662,	// (0x00030e39) main_cset6_slider_pane_g17_ParamLimits

0x5662,	// (0x00030e39) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0003b2a6) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0003b2a6) main_cset6_slider_pane_g

0x684a,	// (0x00032021) main_cset6_slider_pane_t1_ParamLimits

0x684a,	// (0x00032021) main_cset6_slider_pane_t1

0x688b,	// (0x00032062) main_cset6_slider_pane_t2_ParamLimits

0x688b,	// (0x00032062) main_cset6_slider_pane_t2

0x68b6,	// (0x0003208d) main_cset6_slider_pane_t3_ParamLimits

0x68b6,	// (0x0003208d) main_cset6_slider_pane_t3

0x68e1,	// (0x000320b8) main_cset6_slider_pane_t4_ParamLimits

0x68e1,	// (0x000320b8) main_cset6_slider_pane_t4

0x690c,	// (0x000320e3) main_cset6_slider_pane_t5_ParamLimits

0x690c,	// (0x000320e3) main_cset6_slider_pane_t5

0x6937,	// (0x0003210e) main_cset6_slider_pane_t7_ParamLimits

0x6937,	// (0x0003210e) main_cset6_slider_pane_t7

0x696d,	// (0x00032144) main_cset6_slider_pane_t8_ParamLimits

0x696d,	// (0x00032144) main_cset6_slider_pane_t8

0x6991,	// (0x00032168) main_cset6_slider_pane_t9_ParamLimits

0x6991,	// (0x00032168) main_cset6_slider_pane_t9

0x69b5,	// (0x0003218c) main_cset6_slider_pane_t10_ParamLimits

0x69b5,	// (0x0003218c) main_cset6_slider_pane_t10

0x69d9,	// (0x000321b0) main_cset6_slider_pane_t11_ParamLimits

0x69d9,	// (0x000321b0) main_cset6_slider_pane_t11

0x69fd,	// (0x000321d4) main_cset6_slider_pane_t14_ParamLimits

0x69fd,	// (0x000321d4) main_cset6_slider_pane_t14

0x6a36,	// (0x0003220d) main_cset6_slider_pane_t15_ParamLimits

0x6a36,	// (0x0003220d) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0003b2cb) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0003b2cb) main_cset6_slider_pane_t

0xf022,	// (0x0003a7f9) cset_slider_pane_g1_copy1

0xf02b,	// (0x0003a802) cset_slider_pane_g2_copy1

0xf034,	// (0x0003a80b) cset_slider_pane_g3_copy1

0xae30,	// (0x00036607) bg_popup_sub_pane_cp011_copy1

0x6a8c,	// (0x00032263) main_cset_text_pane_g1_copy1

0xed51,	// (0x0003a528) main_cset_text_pane_t1_copy1

0xed5f,	// (0x0003a536) main_cset_text_pane_t2_copy1

0xed6d,	// (0x0003a544) main_cset_text_pane_t3_copy1

0xed7b,	// (0x0003a552) main_cset_text_pane_t4_copy1

0xed89,	// (0x0003a560) main_cset_text_pane_t5_copy1

0x6a94,	// (0x0003226b) main_cset_text_pane_t6_copy1

0x6aa2,	// (0x00032279) main_cset_text_pane_t7_copy1

0x6687,	// (0x00031e5e) main_cset_text2_pane_t1_copy1

0xae9f,	// (0x00036676) main_ncimui_pane

0x0ab1,	// (0x0002c288) popup_query_ncimui_window_ParamLimits

0x0ab1,	// (0x0002c288) popup_query_ncimui_window

0xe453,	// (0x00039c2a) field_cale_ev2_pane_g4_ParamLimits

0xe453,	// (0x00039c2a) field_cale_ev2_pane_g4

0x5034,	// (0x0003080b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5034,	// (0x0003080b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0003afaf) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0003afaf) cell_video_dialer_keypad_pane_g

0x504c,	// (0x00030823) cell_video_dialer_keypad_pane_t1

0xae30,	// (0x00036607) bg_popup_window_pane_cp012

0xdd03,	// (0x000394da) heading_pane_cp06

0x6bf7,	// (0x000323ce) ncim_query_content_pane

0xae30,	// (0x00036607) bg_popup_heading_pane_cp01

0x6bff,	// (0x000323d6) ncim_heading_pane_t1

0x6c0d,	// (0x000323e4) ncim_indicator_popup_pane

0x6c1f,	// (0x000323f6) ncim_query_button_pane

0x6c3f,	// (0x00032416) ncim_query_content_pane_t1

0x6c51,	// (0x00032428) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0003b30f) ncim_query_content_pane_t

0x6d03,	// (0x000324da) ncim_query_list_pane

0x6d15,	// (0x000324ec) ncim_query_popup_pane

0x6c0d,	// (0x000323e4) ncim_indicator_popup_pane_ParamLimits

0x6c27,	// (0x000323fe) ncim_query_content_pane_g1_ParamLimits

0x6c27,	// (0x000323fe) ncim_query_content_pane_g1

0x6c3f,	// (0x00032416) ncim_query_content_pane_t1_ParamLimits

0x6c51,	// (0x00032428) ncim_query_content_pane_t2_ParamLimits

0x6c63,	// (0x0003243a) ncim_query_content_pane_t3_ParamLimits

0x6c63,	// (0x0003243a) ncim_query_content_pane_t3

0x6c8b,	// (0x00032462) ncim_query_content_pane_t4_ParamLimits

0x6c8b,	// (0x00032462) ncim_query_content_pane_t4

0x6cb3,	// (0x0003248a) ncim_query_content_pane_t5_ParamLimits

0x6cb3,	// (0x0003248a) ncim_query_content_pane_t5

0x6cdb,	// (0x000324b2) ncim_query_content_pane_t6_ParamLimits

0x6cdb,	// (0x000324b2) ncim_query_content_pane_t6

0xfb38,	// (0x0003b30f) ncim_query_content_pane_t_ParamLimits

0x6d03,	// (0x000324da) ncim_query_list_pane_ParamLimits

0x6d15,	// (0x000324ec) ncim_query_popup_pane_ParamLimits

0x6d29,	// (0x00032500) wait_bar_pane_cp04

0xae30,	// (0x00036607) input_focus_pane_cp011

0x6d31,	// (0x00032508) ncim_query_popup_pane_t1

0x6d3f,	// (0x00032516) ncim_list_query_list_pane_ParamLimits

0x6d3f,	// (0x00032516) ncim_list_query_list_pane

0xae30,	// (0x00036607) bg_button_pane_cp027

0x6d4c,	// (0x00032523) ncim_query_button_pane_g1

0xae30,	// (0x00036607) list_highlight_pane_cp012

0x6d56,	// (0x0003252d) ncim_list_query_list_pane_g1

0x6d5e,	// (0x00032535) ncim_list_query_list_pane_t1

0xb7cb,	// (0x00036fa2) cam4_indicators_pane_g3_ParamLimits

0xb7cb,	// (0x00036fa2) cam4_indicators_pane_g3

0xb84b,	// (0x00037022) vid4_indicators_pane_g5_ParamLimits

0xb84b,	// (0x00037022) vid4_indicators_pane_g5

0xb91f,	// (0x000370f6) vid4_progress_pane_g5_ParamLimits

0xb91f,	// (0x000370f6) vid4_progress_pane_g5

0x6ae2,	// (0x000322b9) main_ncimui_pane_g1

0x6b4b,	// (0x00032322) ncimui_group_query_pane_ParamLimits

0x6b4b,	// (0x00032322) ncimui_group_query_pane

0x6b93,	// (0x0003236a) ncimui_list_pane_ParamLimits

0x6b93,	// (0x0003236a) ncimui_list_pane

0x6bba,	// (0x00032391) ncimui_text_pane_ParamLimits

0x6bba,	// (0x00032391) ncimui_text_pane

0x6d6c,	// (0x00032543) ncimui_text_pane_t1_ParamLimits

0x6d6c,	// (0x00032543) ncimui_text_pane_t1

0x6d8a,	// (0x00032561) ncimui_list_single_graphic_pane_ParamLimits

0x6d8a,	// (0x00032561) ncimui_list_single_graphic_pane

0x6d9a,	// (0x00032571) ncimui_query_pane_ParamLimits

0x6d9a,	// (0x00032571) ncimui_query_pane

0xae30,	// (0x00036607) list_highlight_pane_cp013

0x6dad,	// (0x00032584) ncim_list_query_list_pane_t1_copy1

0x6d56,	// (0x0003252d) ncim_list_single_graphic_pane_g1

0x6dbb,	// (0x00032592) ncim_query_button_pane_cp01

0x6dc7,	// (0x0003259e) ncim_query_entry_pane_ParamLimits

0x6dc7,	// (0x0003259e) ncim_query_entry_pane

0x6dda,	// (0x000325b1) ncimui_query_pane_g1

0x6de6,	// (0x000325bd) ncimui_query_pane_t1_ParamLimits

0x6de6,	// (0x000325bd) ncimui_query_pane_t1

0xbcc1,	// (0x00037498) input_focus_pane_cp012

0x6dff,	// (0x000325d6) ncim_query_entry_pane_t1

0xbd9a,	// (0x00037571) main_im_pane_ParamLimits

0xae9f,	// (0x00036676) main_mobtv_pane_ParamLimits

0xae9f,	// (0x00036676) main_mobtv_pane

0x6832,	// (0x00032009) main_cset6_slider_pane_g18_ParamLimits

0x6832,	// (0x00032009) main_cset6_slider_pane_g18

0x683e,	// (0x00032015) main_cset6_slider_pane_g19_ParamLimits

0x683e,	// (0x00032015) main_cset6_slider_pane_g19

0xbd44,	// (0x0003751b) bg_main_mobtv_pane_ParamLimits

0xbd44,	// (0x0003751b) bg_main_mobtv_pane

0x6e11,	// (0x000325e8) main_mobtv_info_pane

0x6e1a,	// (0x000325f1) main_mobtv_loading_pane_ParamLimits

0x6e1a,	// (0x000325f1) main_mobtv_loading_pane

0x6e27,	// (0x000325fe) main_mobtv_pg_channel_list_pane

0x6e31,	// (0x00032608) main_mobtv_pg_hdr_pane

0x6e3a,	// (0x00032611) main_mobtv_programe_curr_pane_ParamLimits

0x6e3a,	// (0x00032611) main_mobtv_programe_curr_pane

0x6e47,	// (0x0003261e) main_mobtv_programe_next_pane_ParamLimits

0x6e47,	// (0x0003261e) main_mobtv_programe_next_pane

0x6e54,	// (0x0003262b) popup_mobtv_noti_window

0xbfa9,	// (0x00037780) main_tv_pg_hdr_pane_g1

0x6e5c,	// (0x00032633) main_tv_pg_hdr_pane_g2

0x6e64,	// (0x0003263b) main_tv_pg_hdr_pane_g3

0x6e6c,	// (0x00032643) main_tv_pg_hdr_pane_g4

0x6e74,	// (0x0003264b) main_tv_pg_hdr_pane_g5

0x6e7e,	// (0x00032655) main_tv_pg_hdr_pane_g6

0x6e88,	// (0x0003265f) main_tv_pg_hdr_pane_g7

0x6e92,	// (0x00032669) main_tv_pg_hdr_pane_g8

0x6e9c,	// (0x00032673) main_tv_pg_hdr_pane_g9

0x6ea6,	// (0x0003267d) main_tv_pg_hdr_pane_g10

0x6eb0,	// (0x00032687) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0003b31c) main_tv_pg_hdr_pane_g

0x6eba,	// (0x00032691) main_tv_pg_hdr_pane_t1

0x6ec8,	// (0x0003269f) main_tv_pg_hdr_pane_t2

0x6ed6,	// (0x000326ad) main_tv_pg_hdr_pane_t3

0x6ee6,	// (0x000326bd) main_tv_pg_hdr_pane_t4

0x6ef6,	// (0x000326cd) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0003b333) main_tv_pg_hdr_pane_t

0x6f06,	// (0x000326dd) single_mobtv_pg_channel_pane_ParamLimits

0x6f06,	// (0x000326dd) single_mobtv_pg_channel_pane

0x6f18,	// (0x000326ef) single_mobtv_pg_channel_table_pane

0x6f21,	// (0x000326f8) single_mobtv_pg_channel_thumb_pane

0x6f2a,	// (0x00032701) single_tv_pg_channel_pane_g1

0x6f33,	// (0x0003270a) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0003b33e) single_tv_pg_channel_pane_g

0xbd28,	// (0x000374ff) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbd28,	// (0x000374ff) bg_single_mobtv_pg_channel_thumb_pane

0x6f3c,	// (0x00032713) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x6f3c,	// (0x00032713) single_mobtv_pg_channel_thumb_pane_g1

0x6f4a,	// (0x00032721) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x6f4a,	// (0x00032721) single_mobtv_pg_channel_thumb_pane_g2

0x6f56,	// (0x0003272d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x6f56,	// (0x0003272d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0003b343) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0003b343) single_mobtv_pg_channel_thumb_pane_g

0x6f62,	// (0x00032739) single_mobtv_pg_channel_thumb_pane_t1

0x6f70,	// (0x00032747) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0003b34a) single_mobtv_pg_channel_thumb_pane_t

0xbfa9,	// (0x00037780) bg_single_mobtv_pg_channel_table_pane_g1

0xbfa9,	// (0x00037780) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0003ab6f) bg_single_mobtv_pg_channel_table_pane_g

0x6f7e,	// (0x00032755) single_mobtv_pg_channel_table_pane_t1

0x6f8c,	// (0x00032763) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0003b34f) single_mobtv_pg_channel_table_pane_t

0x6fa2,	// (0x00032779) main_mobtv_info_pane_g1_ParamLimits

0x6fa2,	// (0x00032779) main_mobtv_info_pane_g1

0x6fc0,	// (0x00032797) main_mobtv_info_pane_t1_ParamLimits

0x6fc0,	// (0x00032797) main_mobtv_info_pane_t1

0x7038,	// (0x0003280f) main_mobtv_info_pane_t2_ParamLimits

0x7038,	// (0x0003280f) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0003b359) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0003b359) main_mobtv_info_pane_t

0x70c7,	// (0x0003289e) wait_bar_pane_cp05

0x70d9,	// (0x000328b0) main_mobtv_loading_pane_g1_ParamLimits

0x70d9,	// (0x000328b0) main_mobtv_loading_pane_g1

0x70ec,	// (0x000328c3) main_mobtv_loading_pane_g2_ParamLimits

0x70ec,	// (0x000328c3) main_mobtv_loading_pane_g2

0x70f8,	// (0x000328cf) main_mobtv_loading_pane_g3_ParamLimits

0x70f8,	// (0x000328cf) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0003b360) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0003b360) main_mobtv_loading_pane_g

0x710b,	// (0x000328e2) main_mobtv_loading_pane_t1_ParamLimits

0x710b,	// (0x000328e2) main_mobtv_loading_pane_t1

0x7123,	// (0x000328fa) main_mobtv_loading_pane_t2_ParamLimits

0x7123,	// (0x000328fa) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0003b367) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0003b367) main_mobtv_loading_pane_t

0x7147,	// (0x0003291e) wait_bar_pane_cp06_ParamLimits

0x7147,	// (0x0003291e) wait_bar_pane_cp06

0x7156,	// (0x0003292d) main_mobtv_programe_curr_pane_t1

0x7164,	// (0x0003293b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0003b36c) main_mobtv_programe_curr_pane_t

0x7172,	// (0x00032949) main_mobtv_programe_next_pane_t1

0x7180,	// (0x00032957) main_mobtv_programe_next_pane_t2

0x718e,	// (0x00032965) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0003b371) main_mobtv_programe_next_pane_t

0xae30,	// (0x00036607) bg_popup_mobtv_noti_window_pane

0x719c,	// (0x00032973) popup_mobtv_noti_window_g1

0x71a4,	// (0x0003297b) popup_mobtv_noti_window_t1

0x71b2,	// (0x00032989) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0003b378) popup_mobtv_noti_window_t

0xbfa9,	// (0x00037780) bg_popup_mobtv_noti_window_pane_g1

0xaead,	// (0x00036684) sc_clock_pane

0xaead,	// (0x00036684) main_fs_bigclock_pane

0x61ba,	// (0x00031991) blid2_tripm_pane_t4_ParamLimits

0x61ba,	// (0x00031991) blid2_tripm_pane_t4

0x71c0,	// (0x00032997) sc_clock_pane_g1_ParamLimits

0x71c0,	// (0x00032997) sc_clock_pane_g1

0x71d2,	// (0x000329a9) sc_clock_pane_t1_ParamLimits

0x71d2,	// (0x000329a9) sc_clock_pane_t1

0x71f4,	// (0x000329cb) sc_clock_pane_t2_ParamLimits

0x71f4,	// (0x000329cb) sc_clock_pane_t2

0x720c,	// (0x000329e3) sc_clock_pane_t3_ParamLimits

0x720c,	// (0x000329e3) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0003b37d) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0003b37d) sc_clock_pane_t

0x8aca,	// (0x000342a1) main_fs_bigclock_indicator_pane_ParamLimits

0x8aca,	// (0x000342a1) main_fs_bigclock_indicator_pane

0x72b2,	// (0x00032a89) main_fs_bigclock_pane_g1_ParamLimits

0x72b2,	// (0x00032a89) main_fs_bigclock_pane_g1

0x8ad6,	// (0x000342ad) main_fs_bigclock_pane_t1_ParamLimits

0x8ad6,	// (0x000342ad) main_fs_bigclock_pane_t1

0x8ae8,	// (0x000342bf) main_fs_bigclock_pane_t2_ParamLimits

0x8ae8,	// (0x000342bf) main_fs_bigclock_pane_t2

0x8afc,	// (0x000342d3) main_fs_bigclock_pane_t3_ParamLimits

0x8afc,	// (0x000342d3) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0003b50e) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0003b50e) main_fs_bigclock_pane_t

0x8b0e,	// (0x000342e5) main_fs_bigclock_indicator_pane_g1

0x6c33,	// (0x0003240a) ncim_query_content_pane_g2_ParamLimits

0x6c33,	// (0x0003240a) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0003b30a) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0003b30a) ncim_query_content_pane_g

0x7225,	// (0x000329fc) sc_clock_pane_t4_ParamLimits

0x7225,	// (0x000329fc) sc_clock_pane_t4

0xae9f,	// (0x00036676) main_radioblah_pane

0xb73d,	// (0x00036f14) cell_call4_button_pane_t1_copy1_ParamLimits

0xb73d,	// (0x00036f14) cell_call4_button_pane_t1_copy1

0x6afa,	// (0x000322d1) main_ncimui_pane_t1_ParamLimits

0x6afa,	// (0x000322d1) main_ncimui_pane_t1

0x6b14,	// (0x000322eb) main_ncimui_pane_t2_ParamLimits

0x6b14,	// (0x000322eb) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0003b303) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0003b303) main_ncimui_pane_t

0x7436,	// (0x00032c0d) main_radioblah_anim_pane_ParamLimits

0x7436,	// (0x00032c0d) main_radioblah_anim_pane

0x7447,	// (0x00032c1e) main_radioblah_info_pane_ParamLimits

0x7447,	// (0x00032c1e) main_radioblah_info_pane

0x746d,	// (0x00032c44) main_radioblah_pane_t1_ParamLimits

0x746d,	// (0x00032c44) main_radioblah_pane_t1

0x7489,	// (0x00032c60) main_radioblah_pane_t2_ParamLimits

0x7489,	// (0x00032c60) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0003b39e) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0003b39e) main_radioblah_pane_t

0x74d1,	// (0x00032ca8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x74d1,	// (0x00032ca8) main_radioblah_rocker_ctrl_pane

0x7529,	// (0x00032d00) main_radioblah_info_pane_t1_ParamLimits

0x7529,	// (0x00032d00) main_radioblah_info_pane_t1

0x7563,	// (0x00032d3a) main_radioblah_info_pane_t2_ParamLimits

0x7563,	// (0x00032d3a) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0003b3a7) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0003b3a7) main_radioblah_info_pane_t

0xbfa9,	// (0x00037780) main_radioblah_rocker_ctrl_pane_g1

0x7613,	// (0x00032dea) main_radioblah_rocker_ctrl_pane_g2

0x761b,	// (0x00032df2) main_radioblah_rocker_ctrl_pane_g3

0x7623,	// (0x00032dfa) main_radioblah_rocker_ctrl_pane_g4

0x762b,	// (0x00032e02) main_radioblah_rocker_ctrl_pane_g5

0x7633,	// (0x00032e0a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0003b3b0) main_radioblah_rocker_ctrl_pane_g

0x6687,	// (0x00031e5e) main_cset_text2_pane_t1_copy1_ParamLimits

0xb79b,	// (0x00036f72) cam4_image_uncrop_qvga_pane

0xb7f4,	// (0x00036fcb) vid4_image_uncrop_qcif_pane

0xb955,	// (0x0003712c) cam6_image_uncrop_qvga_pane_ParamLimits

0xb955,	// (0x0003712c) cam6_image_uncrop_qvga_pane

0x6534,	// (0x00031d0b) vid6_image_uncrop_qcif_pane_ParamLimits

0x6534,	// (0x00031d0b) vid6_image_uncrop_qcif_pane

0xae30,	// (0x00036607) bg_popup_preview_window_pane_cp03

0x6ab0,	// (0x00032287) list_cset_text2_pane

0x6ab8,	// (0x0003228f) main_cset6_text2_pane_g1

0x6ac0,	// (0x00032297) main_cset6_text2_pane_t1

0x763b,	// (0x00032e12) list_cset_text2_pane_t1_ParamLimits

0x763b,	// (0x00032e12) list_cset_text2_pane_t1

0xae9f,	// (0x00036676) main_radioblah_pane_ParamLimits

0x70b3,	// (0x0003288a) main_mobtv_info_pane_t3_ParamLimits

0x70b3,	// (0x0003288a) main_mobtv_info_pane_t3

0x745b,	// (0x00032c32) main_radioblah_pane_g1

0x74f9,	// (0x00032cd0) main_radioblah_info_pane_g1

0x75b8,	// (0x00032d8f) main_radioblah_info_pane_t3_ParamLimits

0x75b8,	// (0x00032d8f) main_radioblah_info_pane_t3

0x304b,	// (0x0002e822) highlight_cell_cale_month_pane_ParamLimits

0x304b,	// (0x0002e822) highlight_cell_cale_month_pane

0xaead,	// (0x00036684) main_phob_fisheye_pane

0xe4c8,	// (0x00039c9f) scroll_pane_cp0031_ParamLimits

0xe4c8,	// (0x00039c9f) scroll_pane_cp0031

0x6678,	// (0x00031e4f) wait_bar_pane_cp08_ParamLimits

0x672d,	// (0x00031f04) cset_list_set_pane_copy1_ParamLimits

0x7654,	// (0x00032e2b) highlight_cell_cale_month_pane_g1

0x765c,	// (0x00032e33) highlight_cell_cale_month_pane_t1

0xf019,	// (0x0003a7f0) list_gen_pane_cp01

0xebbe,	// (0x0003a395) scroll_pane_01

0x766a,	// (0x00032e41) list_single_double_fisheye_pane

0x7673,	// (0x00032e4a) list_double_fisheye_pane_g1_ParamLimits

0x7673,	// (0x00032e4a) list_double_fisheye_pane_g1

0x767f,	// (0x00032e56) list_double_fisheye_pane_g2_ParamLimits

0x767f,	// (0x00032e56) list_double_fisheye_pane_g2

0x7693,	// (0x00032e6a) list_double_fisheye_pane_g3_ParamLimits

0x7693,	// (0x00032e6a) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0003b3bd) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0003b3bd) list_double_fisheye_pane_g

0x76bc,	// (0x00032e93) list_double_fisheye_pane_t1_ParamLimits

0x76bc,	// (0x00032e93) list_double_fisheye_pane_t1

0x76d7,	// (0x00032eae) list_double_fisheye_pane_t2_ParamLimits

0x76d7,	// (0x00032eae) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0003b3c8) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0003b3c8) list_double_fisheye_pane_t

0xaead,	// (0x00036684) main_call5_pane

0x7250,	// (0x00032a27) sc_swipe_pane_ParamLimits

0x7250,	// (0x00032a27) sc_swipe_pane

0x770c,	// (0x00032ee3) call5_image_pane_ParamLimits

0x770c,	// (0x00032ee3) call5_image_pane

0x7729,	// (0x00032f00) call5_swipe_1_pane_ParamLimits

0x7729,	// (0x00032f00) call5_swipe_1_pane

0x773c,	// (0x00032f13) call5_swipe_2_pane_ParamLimits

0x773c,	// (0x00032f13) call5_swipe_2_pane

0x7767,	// (0x00032f3e) popup_call5_audio_first_window_ParamLimits

0x7767,	// (0x00032f3e) popup_call5_audio_first_window

0xbd28,	// (0x000374ff) call5_swipe_1_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) call5_swipe_1_pane_g1

0x7778,	// (0x00032f4f) call5_swipe_1_pane_g2_ParamLimits

0x7778,	// (0x00032f4f) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0003b3cd) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0003b3cd) call5_swipe_1_pane_g

0x7784,	// (0x00032f5b) call5_swipe_1_pane_t1_ParamLimits

0x7784,	// (0x00032f5b) call5_swipe_1_pane_t1

0xbd28,	// (0x000374ff) call5_swipe_2_pane_g1_ParamLimits

0xbd28,	// (0x000374ff) call5_swipe_2_pane_g1

0x7799,	// (0x00032f70) call5_swipe_2_pane_g2_ParamLimits

0x7799,	// (0x00032f70) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0003b3d2) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0003b3d2) call5_swipe_2_pane_g

0x77a5,	// (0x00032f7c) call5_swipe_2_pane_t1_ParamLimits

0x77a5,	// (0x00032f7c) call5_swipe_2_pane_t1

0x77ba,	// (0x00032f91) sc_swipe_pane_g1_ParamLimits

0x77ba,	// (0x00032f91) sc_swipe_pane_g1

0x77c7,	// (0x00032f9e) sc_swipe_pane_g2_ParamLimits

0x77c7,	// (0x00032f9e) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0003b3d7) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0003b3d7) sc_swipe_pane_g

0x77d3,	// (0x00032faa) sc_swipe_pane_t1_ParamLimits

0x77d3,	// (0x00032faa) sc_swipe_pane_t1

0xaead,	// (0x00036684) main_cmail_launcher_pane

0x77e8,	// (0x00032fbf) aid_size_cell_cmail_l_ParamLimits

0x77e8,	// (0x00032fbf) aid_size_cell_cmail_l

0x77f6,	// (0x00032fcd) grid_cmail_l_pane_ParamLimits

0x77f6,	// (0x00032fcd) grid_cmail_l_pane

0x7810,	// (0x00032fe7) cell_cmail_l_pane_ParamLimits

0x7810,	// (0x00032fe7) cell_cmail_l_pane

0x782a,	// (0x00033001) cell_cmail_l_pane_g1_ParamLimits

0x782a,	// (0x00033001) cell_cmail_l_pane_g1

0x7836,	// (0x0003300d) cell_cmail_l_pane_t1_ParamLimits

0x7836,	// (0x0003300d) cell_cmail_l_pane_t1

0x784c,	// (0x00033023) cell_cmail_l_pane_t2_ParamLimits

0x784c,	// (0x00033023) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0003b3dc) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0003b3dc) cell_cmail_l_pane_t

0xbcc1,	// (0x00037498) grid_highlight_pane_cp018_ParamLimits

0xbcc1,	// (0x00037498) grid_highlight_pane_cp018

0x0414,	// (0x0002bbeb) main2_pane_ParamLimits

0x0414,	// (0x0002bbeb) main2_pane

0xbe32,	// (0x00037609) popup_sp_fs_action_menu_bg_pane_g1

0xbe3a,	// (0x00037611) popup_sp_fs_action_menu_bg_pane_g2

0xbe42,	// (0x00037619) popup_sp_fs_action_menu_bg_pane_g3

0xbe4a,	// (0x00037621) popup_sp_fs_action_menu_bg_pane_g4

0xbe52,	// (0x00037629) popup_sp_fs_action_menu_bg_pane_g5

0xbe5a,	// (0x00037631) popup_sp_fs_action_menu_bg_pane_g6

0xbe62,	// (0x00037639) popup_sp_fs_action_menu_bg_pane_g7

0xbe6a,	// (0x00037641) popup_sp_fs_action_menu_bg_pane_g8

0xbe72,	// (0x00037649) popup_sp_fs_action_menu_bg_pane_g9

0xbe7a,	// (0x00037651) popup_sp_fs_action_menu_bg_pane_g10

0xbe7a,	// (0x00037651) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0003a8dc) popup_sp_fs_action_menu_bg_pane_g

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g2

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0003a98a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0003a98a) list_medium_line_x2_t3_g3_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t2

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g3_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_x2_t3_g2_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t2

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g2_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g2

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g3

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t4_g4_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t2

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t3

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t4_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003a9a6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003a9a6) list_medium_line_x2_t4_g4_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g2

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g3

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t2_g4_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g4_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g4_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g4_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g4_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g2

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0003a98a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0003a98a) list_medium_line_x2_t2_g3_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g3_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g3_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g3_t

0x3171,	// (0x0002e948) main_sp_fs_list_pane_ParamLimits

0x3171,	// (0x0002e948) main_sp_fs_list_pane

0xe58a,	// (0x00039d61) sp_fs_scroll_pane_ParamLimits

0xe58a,	// (0x00039d61) sp_fs_scroll_pane

0xc4e4,	// (0x00037cbb) list_medium_line_x2_t3_t1

0xc4e4,	// (0x00037cbb) list_medium_line_x2_t3_t2

0xc4e4,	// (0x00037cbb) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0003aa53) list_medium_line_x2_t3_t

0xc4e4,	// (0x00037cbb) list_medium_line_x3_t4_t1

0xc4e4,	// (0x00037cbb) list_medium_line_x3_t4_t2

0xc4e4,	// (0x00037cbb) list_medium_line_x3_t4_t3

0xc4e4,	// (0x00037cbb) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0003aa5a) list_medium_line_x3_t4_t

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t5_t1

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t5_t2

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t5_t3

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t5_t4

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0003aa63) list_medium_line_x4_t5_t

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g1

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g2

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g3

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003a99d) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003a99d) list_medium_line_t4_g4_g

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t1

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t2

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t3

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t4_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003a9a6) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003a9a6) list_medium_line_t4_g4_t

0x320c,	// (0x0002e9e3) chi_dic_find_pane_g1

0x087b,	// (0x0002c052) main_tport_pane

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t1

0xbd28,	// (0x000374ff) list_medium_line_t2_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_t2_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_t2_g2_g

0xbf7b,	// (0x00037752) list_medium_line_t2_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_g2_t1

0xbf7b,	// (0x00037752) list_medium_line_t2_g2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_t2_g2_t

0x5e82,	// (0x00031659) aid_sp_fs_list_icon_a_sm

0x5e8a,	// (0x00031661) aid_sp_fs_list_icon_d

0x5e92,	// (0x00031669) aid_sp_fs_text_primary

0x5e9b,	// (0x00031672) aid_sp_fs_text_secondary

0xae30,	// (0x00036607) list_medium_line

0xae30,	// (0x00036607) list_medium_line_g2

0xae30,	// (0x00036607) list_medium_line_g3

0xae30,	// (0x00036607) list_medium_line_plain

0xae30,	// (0x00036607) list_medium_line_plain_t2

0xae30,	// (0x00036607) list_medium_line_plain_t3

0xae30,	// (0x00036607) list_medium_line_right_icon

0xae30,	// (0x00036607) list_medium_line_right_iconx2

0xae30,	// (0x00036607) list_medium_line_t2

0xae30,	// (0x00036607) list_medium_line_t2_g2

0xae30,	// (0x00036607) list_medium_line_t2_g3

0xae30,	// (0x00036607) list_medium_line_t2_right_icon

0xae30,	// (0x00036607) list_medium_line_t2_right_iconx2

0xae30,	// (0x00036607) list_medium_line_t3

0xae30,	// (0x00036607) list_medium_line_t3_g2

0xae30,	// (0x00036607) list_medium_line_t3_g3

0xae30,	// (0x00036607) list_medium_line_t3_right_iconx2

0xae30,	// (0x00036607) list_medium_line_t4_g4

0xae30,	// (0x00036607) list_medium_line_x2

0xae30,	// (0x00036607) list_medium_line_x2_t2_g2

0xae30,	// (0x00036607) list_medium_line_x2_t2_g3

0xae30,	// (0x00036607) list_medium_line_x2_t2_g4

0xae30,	// (0x00036607) list_medium_line_x2_t3

0xae30,	// (0x00036607) list_medium_line_x2_t3_g2

0xae30,	// (0x00036607) list_medium_line_x2_t3_g3

0xae30,	// (0x00036607) list_medium_line_x2_t3_g4

0xae30,	// (0x00036607) list_medium_line_x2_t4_g2

0xae30,	// (0x00036607) list_medium_line_x2_t4_g4

0xae30,	// (0x00036607) list_medium_line_x3

0xae30,	// (0x00036607) list_medium_line_x3_t4

0xae30,	// (0x00036607) list_medium_line_x3_t4_g4

0xae30,	// (0x00036607) list_medium_line_x4_t4

0xae30,	// (0x00036607) list_medium_line_x4_t4_g7

0xae30,	// (0x00036607) list_medium_line_x4_t5

0x5ea4,	// (0x0003167b) list_single_fs_dyc_pane_ParamLimits

0x5ea4,	// (0x0003167b) list_single_fs_dyc_pane

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g1

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g2

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g3

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g4

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g5

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x4_t4_g7_g6

0xbd36,	// (0x0003750d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbd36,	// (0x0003750d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0003b2e4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0003b2e4) list_medium_line_x4_t4_g7_g

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t1

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t2

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x4_t4_g7_t3

0xcaac,	// (0x00038283) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcaac,	// (0x00038283) list_medium_line_x4_t4_g7_t4

0xcaac,	// (0x00038283) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcaac,	// (0x00038283) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0003b2f3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0003b2f3) list_medium_line_x4_t4_g7_t

0x6a6f,	// (0x00032246) list_single_dyc_row_pane_ParamLimits

0x6a6f,	// (0x00032246) list_single_dyc_row_pane

0x76f9,	// (0x00032ed0) call5_gesture_pane_ParamLimits

0x76f9,	// (0x00032ed0) call5_gesture_pane

0x774f,	// (0x00032f26) call5_windows_pane_ParamLimits

0x774f,	// (0x00032f26) call5_windows_pane

0x7869,	// (0x00033040) call5_swipe_1_pane_cp_ParamLimits

0x7869,	// (0x00033040) call5_swipe_1_pane_cp

0x7875,	// (0x0003304c) call5_swipe_2_pane_cp_ParamLimits

0x7875,	// (0x0003304c) call5_swipe_2_pane_cp

0xbf73,	// (0x0003774a) call5_image_pane_cp

0x7881,	// (0x00033058) popup_call5_audio_first_window_cp_ParamLimits

0x7881,	// (0x00033058) popup_call5_audio_first_window_cp

0x77ba,	// (0x00032f91) call5_swipe_1_pane_g1_cp_ParamLimits

0x77ba,	// (0x00032f91) call5_swipe_1_pane_g1_cp

0x788f,	// (0x00033066) call5_swipe_1_pane_g2_cp

0x77d3,	// (0x00032faa) call5_swipe_1_pane_t1_cp_ParamLimits

0x77d3,	// (0x00032faa) call5_swipe_1_pane_t1_cp

0x77ba,	// (0x00032f91) call5_swipe_2_pane_g1_cp_ParamLimits

0x77ba,	// (0x00032f91) call5_swipe_2_pane_g1_cp

0x7897,	// (0x0003306e) call5_swipe_2_pane_g2_cp

0x789f,	// (0x00033076) call5_swipe_2_pane_t1_cp_ParamLimits

0x789f,	// (0x00033076) call5_swipe_2_pane_t1_cp

0xbcc1,	// (0x00037498) main_sp_fs_email_pane

0x78b4,	// (0x0003308b) main_sp_fs_listscroll_pane_te

0x78bd,	// (0x00033094) popup_sp_fs_action_menu_pane_ParamLimits

0x78bd,	// (0x00033094) popup_sp_fs_action_menu_pane

0xbfa9,	// (0x00037780) bg_sp_fs_ctrlbar_pane_g1

0x7901,	// (0x000330d8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x790a,	// (0x000330e1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x7913,	// (0x000330ea) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbfa9,	// (0x00037780) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0003b3e1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfb5,	// (0x0003978c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfb5,	// (0x0003978c) bg_sp_fs_ctrlbar_ddmenu_pane

0x791c,	// (0x000330f3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x791c,	// (0x000330f3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x7928,	// (0x000330ff) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x7928,	// (0x000330ff) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0003b3ea) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0003b3ea) main_sp_fs_ctrlbar_ddmenu_pane_g

0x7934,	// (0x0003310b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x7934,	// (0x0003310b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xbfa9,	// (0x00037780) list_medium_line_t2_right_icon_g1

0xc4e4,	// (0x00037cbb) list_medium_line_t2_right_icon_t1

0xc4e4,	// (0x00037cbb) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0003b3ef) list_medium_line_t2_right_icon_t

0xcac0,	// (0x00038297) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcac0,	// (0x00038297) bg_sp_fs_ctrlbar_pane

0x79ce,	// (0x000331a5) main_sp_fs_ctrlbar_button_pane_cp01

0x79d8,	// (0x000331af) main_sp_fs_ctrlbar_ddmenu_pane

0x79e2,	// (0x000331b9) main_sp_fs_ctrlbar_pane_g1

0x79ee,	// (0x000331c5) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0003b3f4) main_sp_fs_ctrlbar_pane_g

0x7a2e,	// (0x00033205) main_sp_fs_ctrlbar_pane_t1

0x7a6d,	// (0x00033244) main_sp_fs_ctrlbar_pane

0x7aac,	// (0x00033283) main_sp_fs_listscroll_pane_te_cp01

0x7acc,	// (0x000332a3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7acc,	// (0x000332a3) popup_sp_fs_action_menu_pane_cp01

0xbcc1,	// (0x00037498) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbcc1,	// (0x00037498) bg_sp_fs_highlight_list_pane_cp01

0x7af1,	// (0x000332c8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7af1,	// (0x000332c8) sp_fs_action_menu_list_gene_pane_g1

0x7b00,	// (0x000332d7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7b00,	// (0x000332d7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0003b402) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0003b402) sp_fs_action_menu_list_gene_pane_g

0x7b0d,	// (0x000332e4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7b0d,	// (0x000332e4) sp_fs_action_menu_list_gene_pane_t1

0x7b25,	// (0x000332fc) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7b25,	// (0x000332fc) sp_fs_action_menu_list_gene_pane

0x7b44,	// (0x0003331b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7b44,	// (0x0003331b) popup_sp_fs_action_menu_bg_pane

0x7b52,	// (0x00033329) sp_fs_action_menu_list_pane_ParamLimits

0x7b52,	// (0x00033329) sp_fs_action_menu_list_pane

0x7b72,	// (0x00033349) sp_fs_scroll_pane_cp01_ParamLimits

0x7b72,	// (0x00033349) sp_fs_scroll_pane_cp01

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t2_t1

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0003b3ef) list_medium_line_plain_t2_t

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t3_t1

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t3_t2

0xc4e4,	// (0x00037cbb) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0003aa53) list_medium_line_plain_t3_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_x2_t2_g2_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g2_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_x2_t2_g2_t

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_x2_t4_g2_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t2

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t3

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t4_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0003a9a6) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0003a9a6) list_medium_line_x2_t4_g2_t

0xbfa9,	// (0x00037780) list_medium_line_t3_right_iconx2_g1

0xbfa9,	// (0x00037780) list_medium_line_t3_right_iconx2_g2

0xbfa9,	// (0x00037780) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0003ab74) list_medium_line_t3_right_iconx2_g

0xc4e4,	// (0x00037cbb) list_medium_line_t3_right_iconx2_t1

0xc4e4,	// (0x00037cbb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0003b3ef) list_medium_line_t3_right_iconx2_t

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g1

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g2

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g3

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0003a99d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0003a99d) list_medium_line_x3_t4_g4_g

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t1

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t2

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t3

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t4_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0003a9a6) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0003a9a6) list_medium_line_x3_t4_g4_t

0x7b98,	// (0x0003336f) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b98,	// (0x0003336f) list_single_dyc_row_text_pane_t1

0x7be1,	// (0x000333b8) list_single_dyc_row_text_pane_t2_ParamLimits

0x7be1,	// (0x000333b8) list_single_dyc_row_text_pane_t2

0x7c57,	// (0x0003342e) list_single_dyc_row_text_pane_t3_ParamLimits

0x7c57,	// (0x0003342e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0003b407) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0003b407) list_single_dyc_row_text_pane_t

0x7d3a,	// (0x00033511) list_single_dyc_row_pane_g1_ParamLimits

0x7d3a,	// (0x00033511) list_single_dyc_row_pane_g1

0x7d46,	// (0x0003351d) list_single_dyc_row_pane_g2_ParamLimits

0x7d46,	// (0x0003351d) list_single_dyc_row_pane_g2

0x7d52,	// (0x00033529) list_single_dyc_row_pane_g3_ParamLimits

0x7d52,	// (0x00033529) list_single_dyc_row_pane_g3

0x7d5e,	// (0x00033535) list_single_dyc_row_pane_g4_ParamLimits

0x7d5e,	// (0x00033535) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0003b414) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0003b414) list_single_dyc_row_pane_g

0x7d6a,	// (0x00033541) list_single_dyc_row_text_pane_ParamLimits

0x7d6a,	// (0x00033541) list_single_dyc_row_text_pane

0xae30,	// (0x00036607) bg_sp_fs_scroll_pane

0x7d89,	// (0x00033560) thumb_sp_fs_scroll_pane

0xbd28,	// (0x000374ff) list_medium_line_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g1

0xbf7b,	// (0x00037752) list_medium_line_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t1

0xbd28,	// (0x000374ff) list_medium_line_x2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_x2_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t1

0xbd28,	// (0x000374ff) list_medium_line_x3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x3_g1

0x51f8,	// (0x000309cf) list_medium_line_x3_g2_ParamLimits

0x51f8,	// (0x000309cf) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0003b41d) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0003b41d) list_medium_line_x3_g

0x7d92,	// (0x00033569) list_medium_line_x3_t1_ParamLimits

0x7d92,	// (0x00033569) list_medium_line_x3_t1

0x7da6,	// (0x0003357d) thumb_sp_fs_scroll_pane_g1

0x7daf,	// (0x00033586) thumb_sp_fs_scroll_pane_g2

0x7db8,	// (0x0003358f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0003b422) thumb_sp_fs_scroll_pane_g

0x7da6,	// (0x0003357d) bg_sp_fs_scroll_pane_g1

0x7daf,	// (0x00033586) bg_sp_fs_scroll_pane_g2

0x7db8,	// (0x0003358f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0003b422) bg_sp_fs_scroll_pane_g

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g1

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g2

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g3

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g4_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0003a99d) list_medium_line_x2_t3_g4_g

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t1

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t2

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_x2_t3_g4_t

0xbd28,	// (0x000374ff) list_medium_line_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_g2_g

0xbf7b,	// (0x00037752) list_medium_line_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_g2_t1

0xbd28,	// (0x000374ff) list_medium_line_t3_g2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g2_g1

0xbd28,	// (0x000374ff) list_medium_line_t3_g2_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0003a998) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0003a998) list_medium_line_t3_g2_g

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t1

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t2

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_t3_g2_t

0xbfa9,	// (0x00037780) list_medium_line_right_icon_g1

0xc4e4,	// (0x00037cbb) list_medium_line_right_icon_t1

0xbd28,	// (0x000374ff) list_medium_line_t2_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g1

0xbf7b,	// (0x00037752) list_medium_line_t2_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_t1

0xbf7b,	// (0x00037752) list_medium_line_t2_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_t2_t

0xbd28,	// (0x000374ff) list_medium_line_t3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g1

0xbf7b,	// (0x00037752) list_medium_line_t3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_t1

0xbf7b,	// (0x00037752) list_medium_line_t3_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_t2

0xbf7b,	// (0x00037752) list_medium_line_t3_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_t3_t

0xbd28,	// (0x000374ff) list_medium_line_g3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g3_g1

0xbd28,	// (0x000374ff) list_medium_line_g3_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g3_g2

0xbd28,	// (0x000374ff) list_medium_line_g3_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0003a98a) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0003a98a) list_medium_line_g3_g

0xbf7b,	// (0x00037752) list_medium_line_g3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_g3_t1

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g1

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g2

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0003a98a) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0003a98a) list_medium_line_t2_g3_g

0xbf7b,	// (0x00037752) list_medium_line_t2_g3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_g3_t1

0xbf7b,	// (0x00037752) list_medium_line_t2_g3_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0003a96d) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0003a96d) list_medium_line_t2_g3_t

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g1_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g1

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g2_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g2

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g3_ParamLimits

0xbd28,	// (0x000374ff) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0003a98a) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0003a98a) list_medium_line_t3_g3_g

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t1_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t1

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t2_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t2

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t3_ParamLimits

0xbf7b,	// (0x00037752) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0003a991) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0003a991) list_medium_line_t3_g3_t

0xbfa9,	// (0x00037780) list_medium_line_right_iconx2_g1

0xbfa9,	// (0x00037780) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0003ab6f) list_medium_line_right_iconx2_g

0xc4e4,	// (0x00037cbb) list_medium_line_right_iconx2_t1

0xbfa9,	// (0x00037780) list_medium_line_t2_right_iconx2_g1

0xbfa9,	// (0x00037780) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0003ab6f) list_medium_line_t2_right_iconx2_g

0xc4e4,	// (0x00037cbb) list_medium_line_t2_right_iconx2_t1

0xc4e4,	// (0x00037cbb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0003b3ef) list_medium_line_t2_right_iconx2_t

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t4_t1

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t4_t2

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t4_t3

0xc4e4,	// (0x00037cbb) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0003aa5a) list_medium_line_x4_t4_t

0x7e04,	// (0x000335db) tport_appsw_pane_ParamLimits

0x7e04,	// (0x000335db) tport_appsw_pane

0x7e1c,	// (0x000335f3) tport_contact_pane_ParamLimits

0x7e1c,	// (0x000335f3) tport_contact_pane

0x7e34,	// (0x0003360b) tport_listscroll_pane_ParamLimits

0x7e34,	// (0x0003360b) tport_listscroll_pane

0x7e4e,	// (0x00033625) cell_tport_appsw_pane_ParamLimits

0x7e4e,	// (0x00033625) cell_tport_appsw_pane

0xca8a,	// (0x00038261) tport_appsw_pane_g1_ParamLimits

0xca8a,	// (0x00038261) tport_appsw_pane_g1

0x7e8e,	// (0x00033665) tport_contact_pane_g1

0x6d31,	// (0x00032508) tport_contact_pane_t1

0x7e97,	// (0x0003366e) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0003b429) tport_contact_pane_t

0x7ea5,	// (0x0003367c) list_tport_pane

0x7eae,	// (0x00033685) scroll_pane_cp_030

0x7ebf,	// (0x00033696) cell_tport_appsw_pane_g1

0x7ecf,	// (0x000336a6) cell_tport_appsw_pane_t1

0x7edd,	// (0x000336b4) grid_highlight_pane_cp019

0x7ee5,	// (0x000336bc) list_tport_double_graphic_pane_ParamLimits

0x7ee5,	// (0x000336bc) list_tport_double_graphic_pane

0xbcc1,	// (0x00037498) list_highlight_pane_cp023_ParamLimits

0xbcc1,	// (0x00037498) list_highlight_pane_cp023

0x7ef2,	// (0x000336c9) list_tport_double_graphic_pane_g1_ParamLimits

0x7ef2,	// (0x000336c9) list_tport_double_graphic_pane_g1

0x7eff,	// (0x000336d6) list_tport_double_graphic_pane_t1_ParamLimits

0x7eff,	// (0x000336d6) list_tport_double_graphic_pane_t1

0x7f14,	// (0x000336eb) list_tport_double_graphic_pane_t2_ParamLimits

0x7f14,	// (0x000336eb) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0003b435) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0003b435) list_tport_double_graphic_pane_t

0xae30,	// (0x00036607) main_cale_note_pane

0x1444,	// (0x0002cc1b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1444,	// (0x0002cc1b) cell_vitu2_function_top_wide_pane_cp01

0x70c7,	// (0x0003289e) wait_bar_pane_cp05_ParamLimits

0xbcc1,	// (0x00037498) listscroll_cmail_pane

0x7f2e,	// (0x00033705) list_cmail_pane

0x7f45,	// (0x0003371c) list_cmail_body_pane

0x7f5a,	// (0x00033731) list_single_cmail_header_caption_pane

0x7f70,	// (0x00033747) list_single_cmail_header_detail_pane_ParamLimits

0x7f70,	// (0x00033747) list_single_cmail_header_detail_pane

0x7f9d,	// (0x00033774) list_single_cmail_header_caption_pane_t1

0x7fb4,	// (0x0003378b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7fb4,	// (0x0003378b) list_single_cmail_header_detail_pane_g1

0x7fcc,	// (0x000337a3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7fcc,	// (0x000337a3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0003b43a) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0003b43a) list_single_cmail_header_detail_pane_g

0x7fe5,	// (0x000337bc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7fe5,	// (0x000337bc) list_single_cmail_header_detail_pane_t1

0x8047,	// (0x0003381e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8047,	// (0x0003381e) list_single_cmail_header_editor_pane_bg

0x6f33,	// (0x0003270a) list_cmail_body_pane_g1

0x8060,	// (0x00033837) list_cmail_body_pane_t1

0xea92,	// (0x0003a269) list_single_cmail_header_editor_pane_bg_g1

0xc1ba,	// (0x00037991) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeaa2,	// (0x0003a279) list_single_cmail_header_editor_pane_bg_g1_copy2

0xea9a,	// (0x0003a271) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed02,	// (0x0003a4d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeac2,	// (0x0003a299) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeab2,	// (0x0003a289) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeaba,	// (0x0003a291) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc19a,	// (0x00037971) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x806e,	// (0x00033845) calenote_gesture_pane_ParamLimits

0x806e,	// (0x00033845) calenote_gesture_pane

0x808e,	// (0x00033865) calenote_window_pane_ParamLimits

0x808e,	// (0x00033865) calenote_window_pane

0x80aa,	// (0x00033881) popup_note_window_cp01

0x80b3,	// (0x0003388a) calenote_swipe_1_pane_ParamLimits

0x80b3,	// (0x0003388a) calenote_swipe_1_pane

0x7875,	// (0x0003304c) calenote_swipe_2_pane_ParamLimits

0x7875,	// (0x0003304c) calenote_swipe_2_pane

0x77ba,	// (0x00032f91) calenote_swipe_1_pane_g1_ParamLimits

0x77ba,	// (0x00032f91) calenote_swipe_1_pane_g1

0x77c7,	// (0x00032f9e) calenote_swipe_1_pane_g2_ParamLimits

0x77c7,	// (0x00032f9e) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0003b3d7) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0003b3d7) calenote_swipe_1_pane_g

0x80d1,	// (0x000338a8) calenote_swipe_1_pane_t1_ParamLimits

0x80d1,	// (0x000338a8) calenote_swipe_1_pane_t1

0x77ba,	// (0x00032f91) calenote_swipe_2_pane_g1_ParamLimits

0x77ba,	// (0x00032f91) calenote_swipe_2_pane_g1

0x80f0,	// (0x000338c7) calenote_swipe_2_pane_g2_ParamLimits

0x80f0,	// (0x000338c7) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0003b446) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0003b446) calenote_swipe_2_pane_g

0x80fc,	// (0x000338d3) calenote_swipe_2_pane_t1_ParamLimits

0x80fc,	// (0x000338d3) calenote_swipe_2_pane_t1

0xae30,	// (0x00036607) main_mup_navstr_pane

0x4994,	// (0x0003016b) main_mup3_pane_t7_ParamLimits

0x4994,	// (0x0003016b) main_mup3_pane_t7

0xb569,	// (0x00036d40) main_mp4_pane_g6_ParamLimits

0xb569,	// (0x00036d40) main_mp4_pane_g6

0xb72b,	// (0x00036f02) main_image3_pane_t4_ParamLimits

0xb72b,	// (0x00036f02) main_image3_pane_t4

0x8123,	// (0x000338fa) popup_navstr_preview_pane_ParamLimits

0x8123,	// (0x000338fa) popup_navstr_preview_pane

0x8137,	// (0x0003390e) scroll_navstr_pane_ParamLimits

0x8137,	// (0x0003390e) scroll_navstr_pane

0xae30,	// (0x00036607) bg_popup_preview_window_pane_cp04

0x814b,	// (0x00033922) popup_navstr_preview_pane_t1

0x8159,	// (0x00033930) scroll_navstr_pane_g1_ParamLimits

0x8159,	// (0x00033930) scroll_navstr_pane_g1

0x816d,	// (0x00033944) scroll_navstr_pane_t1_ParamLimits

0x816d,	// (0x00033944) scroll_navstr_pane_t1

0x80c8,	// (0x0003389f) bg_button_pane_cp014

0x80c8,	// (0x0003389f) bg_button_pane_cp030

0x769f,	// (0x00032e76) list_double_fisheye_pane_g4_ParamLimits

0x769f,	// (0x00032e76) list_double_fisheye_pane_g4

0x76ab,	// (0x00032e82) list_double_fisheye_pane_g5_ParamLimits

0x76ab,	// (0x00032e82) list_double_fisheye_pane_g5

0xe58a,	// (0x00039d61) sp_fs_scroll_pane_cp03

0x79e2,	// (0x000331b9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x79ee,	// (0x000331c5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0003b3f4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7a2e,	// (0x00033205) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x7f3d,	// (0x00033714) sp_fs_scroll_pane_cp02

0xbebb,	// (0x00037692) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbebb,	// (0x00037692) popup_sp_fs_calendar_preview_list_single_pane

0xae30,	// (0x00036607) main_cam6_pano_pane

0xae9f,	// (0x00036676) main_mup3_pane_ParamLimits

0xae30,	// (0x00036607) main_phacti_pane

0x6f9a,	// (0x00032771) bg_button_pane_cp11

0x6fb4,	// (0x0003278b) main_mobtv_info_pane_g2_ParamLimits

0x6fb4,	// (0x0003278b) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0003b354) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0003b354) main_mobtv_info_pane_g

0x7237,	// (0x00032a0e) sc_clock_pane_t5_ParamLimits

0x7237,	// (0x00032a0e) sc_clock_pane_t5

0x745b,	// (0x00032c32) main_radioblah_pane_g1_ParamLimits

0x74a1,	// (0x00032c78) main_radioblah_pane_t3_ParamLimits

0x74a1,	// (0x00032c78) main_radioblah_pane_t3

0x74b9,	// (0x00032c90) main_radioblah_pane_t4_ParamLimits

0x74b9,	// (0x00032c90) main_radioblah_pane_t4

0x74e7,	// (0x00032cbe) main_radioblah_text_pane_ParamLimits

0x74e7,	// (0x00032cbe) main_radioblah_text_pane

0x74f9,	// (0x00032cd0) main_radioblah_info_pane_g1_ParamLimits

0x75cc,	// (0x00032da3) main_radioblah_info_pane_t4_ParamLimits

0x75cc,	// (0x00032da3) main_radioblah_info_pane_t4

0xbcc1,	// (0x00037498) main_sp_fs_calendar_pane

0x8184,	// (0x0003395b) main_phacti_pane_g1

0x8195,	// (0x0003396c) phacti_note_pane_ParamLimits

0x8195,	// (0x0003396c) phacti_note_pane

0x81a9,	// (0x00033980) phacti_term_pane_ParamLimits

0x81a9,	// (0x00033980) phacti_term_pane

0x81be,	// (0x00033995) phacti_note_pane_t1_ParamLimits

0x81be,	// (0x00033995) phacti_note_pane_t1

0x81d5,	// (0x000339ac) phacti_term_pane_g1

0x81dd,	// (0x000339b4) phacti_term_pane_t1_ParamLimits

0x81dd,	// (0x000339b4) phacti_term_pane_t1

0x8207,	// (0x000339de) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf5a,	// (0x00037731) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0003b450) popup_sp_fs_calendar_preview_list_single_pane_g

0x820f,	// (0x000339e6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x820f,	// (0x000339e6) popup_sp_fs_calendar_preview_list_single_pane_t1

0x8225,	// (0x000339fc) aid_popup_sp_fs_bg_corner_pane

0xbfa9,	// (0x00037780) popup_sp_fs_calendar_preview_bg_pane_g1

0xae30,	// (0x00036607) popup_sp_fs_calendar_preview_bg_pane

0x822d,	// (0x00033a04) popup_sp_fs_calendar_preview_list_pane

0xcac0,	// (0x00038297) bg_main_sp_fs_cale_pane_ParamLimits

0xcac0,	// (0x00038297) bg_main_sp_fs_cale_pane

0x829f,	// (0x00033a76) listscroll_cale_mrui_pane_ParamLimits

0x829f,	// (0x00033a76) listscroll_cale_mrui_pane

0x82b4,	// (0x00033a8b) listscroll_sp_fs_schedule_track_pane

0x82bd,	// (0x00033a94) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x82bd,	// (0x00033a94) main_sp_fs_ctrlbar_pane_cp01

0x82d0,	// (0x00033aa7) main_sp_fs_ribbon_pane

0x82d8,	// (0x00033aaf) popup_sp_fs_cale_preview_window

0x82ea,	// (0x00033ac1) list_single_sp_fs_schedule_track_pane_ParamLimits

0x82ea,	// (0x00033ac1) list_single_sp_fs_schedule_track_pane

0xbcc1,	// (0x00037498) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbcc1,	// (0x00037498) bg_sp_fs_highlight_list_pane_cp03

0x82fd,	// (0x00033ad4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x82fd,	// (0x00033ad4) list_single_sp_fs_schedule_track_pane_g1

0x8309,	// (0x00033ae0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8309,	// (0x00033ae0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0003b455) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0003b455) list_single_sp_fs_schedule_track_pane_g

0x8315,	// (0x00033aec) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8315,	// (0x00033aec) list_single_sp_fs_schedule_track_pane_t1

0x832f,	// (0x00033b06) sp_fs_schedule_track_pane_ParamLimits

0x832f,	// (0x00033b06) sp_fs_schedule_track_pane

0x8340,	// (0x00033b17) sp_fs_schedule_track_pane_g1

0x8348,	// (0x00033b1f) sp_fs_schedule_track_pane_g2

0x8350,	// (0x00033b27) sp_fs_schedule_track_pane_g3

0x8358,	// (0x00033b2f) sp_fs_schedule_track_pane_g4

0x8360,	// (0x00033b37) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0003b45a) sp_fs_schedule_track_pane_g

0xea92,	// (0x0003a269) bg_sp_fs_schedule_viewer_highlight_g1

0xc1ba,	// (0x00037991) bg_sp_fs_schedule_viewer_highlight_g2

0xea9a,	// (0x0003a271) bg_sp_fs_schedule_viewer_highlight_g3

0xeaa2,	// (0x0003a279) bg_sp_fs_schedule_viewer_highlight_g4

0xed02,	// (0x0003a4d9) bg_sp_fs_schedule_viewer_highlight_g5

0xeab2,	// (0x0003a289) bg_sp_fs_schedule_viewer_highlight_g6

0xeaba,	// (0x0003a291) bg_sp_fs_schedule_viewer_highlight_g7

0xeac2,	// (0x0003a299) bg_sp_fs_schedule_viewer_highlight_g8

0xc19a,	// (0x00037971) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0003b465) bg_sp_fs_schedule_viewer_highlight_g

0xae30,	// (0x00036607) bg_main_sp_fs_ribbon_pane

0x8368,	// (0x00033b3f) main_sp_fs_ribbon_pane_g1

0x8371,	// (0x00033b48) main_sp_fs_ribbon_pane_t1

0x8380,	// (0x00033b57) main_sp_fs_ribbon_pane_t2

0x838f,	// (0x00033b66) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0003b478) main_sp_fs_ribbon_pane_t

0x839e,	// (0x00033b75) main_sp_fs_ribbon_scheduler_pane

0x83a6,	// (0x00033b7d) bg_main_sp_fs_ribbon_pane_g1

0x83af,	// (0x00033b86) bg_main_sp_fs_ribbon_pane_g2

0x83b8,	// (0x00033b8f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0003b47f) bg_main_sp_fs_ribbon_pane_g

0x83c0,	// (0x00033b97) main_sp_fs_ribbon_scheduler_pane_g1

0x83c9,	// (0x00033ba0) main_sp_fs_ribbon_scheduler_pane_g2

0x83d2,	// (0x00033ba9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0003b486) main_sp_fs_ribbon_scheduler_pane_g

0x83db,	// (0x00033bb2) list_cale_mrui_pane

0x83e8,	// (0x00033bbf) sp_fs_scroll_pane_cp07_ParamLimits

0x83e8,	// (0x00033bbf) sp_fs_scroll_pane_cp07

0x8404,	// (0x00033bdb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8404,	// (0x00033bdb) bg_sp_fs_schedule_viewer_highlight

0x8414,	// (0x00033beb) list_single_sp_fs_schedule_track_pane_cp01

0x841c,	// (0x00033bf3) list_sp_fs_schedule_track_pane

0x8424,	// (0x00033bfb) sp_fs_scroll_pane_cp06_ParamLimits

0x8424,	// (0x00033bfb) sp_fs_scroll_pane_cp06

0xbfa9,	// (0x00037780) bgmain_sp_fs_calendar_pane_g1

0x8436,	// (0x00033c0d) list_single_cale_mrui_pane_ParamLimits

0x8436,	// (0x00033c0d) list_single_cale_mrui_pane

0x8456,	// (0x00033c2d) list_single_cale_mrui_row_pane_ParamLimits

0x8456,	// (0x00033c2d) list_single_cale_mrui_row_pane

0x8463,	// (0x00033c3a) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8463,	// (0x00033c3a) list_single_cale_mrui_row_pane_g1

0x84a8,	// (0x00033c7f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x84a8,	// (0x00033c7f) list_single_cale_mrui_row_pane_t1

0x84ba,	// (0x00033c91) list_single_cale_mrui_row_pane_t2_ParamLimits

0x84ba,	// (0x00033c91) list_single_cale_mrui_row_pane_t2

0x8522,	// (0x00033cf9) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8522,	// (0x00033cf9) list_single_cale_mrui_row_pane_t3

0x8551,	// (0x00033d28) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8551,	// (0x00033d28) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0003b494) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0003b494) list_single_cale_mrui_row_pane_t

0x8580,	// (0x00033d57) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8580,	// (0x00033d57) list_single_cmail_header_editor_pane_bg_cp01

0x85ae,	// (0x00033d85) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x85ae,	// (0x00033d85) list_single_cmail_header_editor_pane_bg_cp02

0x85ce,	// (0x00033da5) main_radioblah_text_pane_t1_ParamLimits

0x85ce,	// (0x00033da5) main_radioblah_text_pane_t1

0x85e8,	// (0x00033dbf) cam6_indi_pane_cp01

0x85f0,	// (0x00033dc7) cam6_mode_pane_cp01

0x85f8,	// (0x00033dcf) cam6_pano_pane

0x8601,	// (0x00033dd8) cam6_zoom_pane_cp01

0x8609,	// (0x00033de0) cam6_pano_image_pane

0x8614,	// (0x00033deb) cam6_pano_pane_g1

0x6f33,	// (0x0003270a) cam6_pano_pane_g2

0x861d,	// (0x00033df4) cam6_pano_pane_g3

0x8626,	// (0x00033dfd) cam6_pano_pane_g4

0xe743,	// (0x00039f1a) cam6_pano_pane_g5

0x862f,	// (0x00033e06) cam6_pano_pane_g6

0xf03d,	// (0x0003a814) cam6_pano_pane_g7

0x8639,	// (0x00033e10) cam6_pano_pane_g8

0x8642,	// (0x00033e19) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0003b49d) cam6_pano_pane_g

0xae30,	// (0x00036607) main_browser_tag_pane

0x811b,	// (0x000338f2) grid_navstr_albumart_pane

0x864d,	// (0x00033e24) cell_navstr_albumart_pane_ParamLimits

0x864d,	// (0x00033e24) cell_navstr_albumart_pane

0x866d,	// (0x00033e44) cell_navstr_albumart_pane_g1

0xdc43,	// (0x0003941a) cell_navstr_albumart_pane_g2

0xdc53,	// (0x0003942a) cell_navstr_albumart_pane_g3

0xdc4b,	// (0x00039422) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0003b4b0) cell_navstr_albumart_pane_g

0x8675,	// (0x00033e4c) bt_list_pane_ParamLimits

0x8675,	// (0x00033e4c) bt_list_pane

0x8689,	// (0x00033e60) bt_list_pane_t1

0x8698,	// (0x00033e6f) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0003b4b9) bt_list_pane_t

0xae30,	// (0x00036607) main_cale_prevew_pane

0x86a7,	// (0x00033e7e) popup_cale_preview_window_ParamLimits

0x86a7,	// (0x00033e7e) popup_cale_preview_window

0xbcc1,	// (0x00037498) bg_popup_preview_window_pane_cp05_ParamLimits

0xbcc1,	// (0x00037498) bg_popup_preview_window_pane_cp05

0x86c2,	// (0x00033e99) list_cale_preview_pane_ParamLimits

0x86c2,	// (0x00033e99) list_cale_preview_pane

0x86ce,	// (0x00033ea5) list_double_cale_preview_pane_ParamLimits

0x86ce,	// (0x00033ea5) list_double_cale_preview_pane

0x86e0,	// (0x00033eb7) list_single_cale_preview_pane_ParamLimits

0x86e0,	// (0x00033eb7) list_single_cale_preview_pane

0x86f6,	// (0x00033ecd) list_single_cale_preview_pane_g1

0x86fe,	// (0x00033ed5) list_single_cale_preview_pane_t1_ParamLimits

0x86fe,	// (0x00033ed5) list_single_cale_preview_pane_t1

0x8713,	// (0x00033eea) list_double_cale_preview_pane_g1

0x871b,	// (0x00033ef2) list_double_cale_preview_pane_t1_ParamLimits

0x871b,	// (0x00033ef2) list_double_cale_preview_pane_t1

0x8730,	// (0x00033f07) list_double_cale_preview_pane_t2_ParamLimits

0x8730,	// (0x00033f07) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0003b4be) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0003b4be) list_double_cale_preview_pane_t

0xae30,	// (0x00036607) main_ezdial_pane

0xbcc1,	// (0x00037498) main_sp_fs_email_pane_ParamLimits

0x794e,	// (0x00033125) cmail_ddmenu_btn01_pane_ParamLimits

0x794e,	// (0x00033125) cmail_ddmenu_btn01_pane

0x7961,	// (0x00033138) cmail_ddmenu_btn02_pane_ParamLimits

0x7961,	// (0x00033138) cmail_ddmenu_btn02_pane

0x79bc,	// (0x00033193) cmail_ddmenu_btn03_pane_ParamLimits

0x79bc,	// (0x00033193) cmail_ddmenu_btn03_pane

0x7a6d,	// (0x00033244) main_sp_fs_ctrlbar_pane_ParamLimits

0x7aac,	// (0x00033283) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7f45,	// (0x0003371c) list_cmail_body_pane_ParamLimits

0x7fab,	// (0x00033782) bg_button_pane_cp12

0x7fd8,	// (0x000337af) list_single_cmail_header_detail_pane_g3_ParamLimits

0x7fd8,	// (0x000337af) list_single_cmail_header_detail_pane_g3

0x8023,	// (0x000337fa) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8023,	// (0x000337fa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0003b441) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0003b441) list_single_cmail_header_detail_pane_t

0x81f2,	// (0x000339c9) phacti_term_pane_t2_ParamLimits

0x81f2,	// (0x000339c9) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0003b44b) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0003b44b) phacti_term_pane_t

0x8748,	// (0x00033f1f) aid_size_list_single_double

0x8754,	// (0x00033f2b) popup_ezdial_listscroll_window

0x8770,	// (0x00033f47) popup_number_entry_window_cp01

0xbf73,	// (0x0003774a) bg_popup_call_pane_cp09

0x877e,	// (0x00033f55) ezdial_list_pane

0x8786,	// (0x00033f5d) scroll_pane_cp23

0xcac0,	// (0x00038297) bg_button_pane_cp028_ParamLimits

0xcac0,	// (0x00038297) bg_button_pane_cp028

0x878e,	// (0x00033f65) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x878e,	// (0x00033f65) cmail_ddmenu_btn01_pane_g1

0x879a,	// (0x00033f71) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x879a,	// (0x00033f71) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0003b4c3) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0003b4c3) cmail_ddmenu_btn01_pane_g

0x87ae,	// (0x00033f85) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x87ae,	// (0x00033f85) cmail_ddmenu_btn01_pane_t1

0xcac0,	// (0x00038297) bg_button_pane_cp029_ParamLimits

0xcac0,	// (0x00038297) bg_button_pane_cp029

0x87c4,	// (0x00033f9b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87c4,	// (0x00033f9b) cmail_ddmenu_btn02_pane_g1

0x87dc,	// (0x00033fb3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87dc,	// (0x00033fb3) cmail_ddmenu_btn02_pane_t1

0xbcc1,	// (0x00037498) bg_button_pane_cp031_ParamLimits

0xbcc1,	// (0x00037498) bg_button_pane_cp031

0x87c4,	// (0x00033f9b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87c4,	// (0x00033f9b) cmail_ddmenu_btn03_pane_g1

0x87dc,	// (0x00033fb3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87dc,	// (0x00033fb3) cmail_ddmenu_btn03_pane_t1

0x50c6,	// (0x0003089d) cell_dialer2_keypad_pane_t1_ParamLimits

0x50e0,	// (0x000308b7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x50e0,	// (0x000308b7) cell_dialer2_keypad_pane_t1_copy1

0x6b43,	// (0x0003231a) ncimui_group_button_pane

0xbcc1,	// (0x00037498) main_sp_fs_calendar_pane_ParamLimits

0x7f5a,	// (0x00033731) list_single_cmail_header_caption_pane_ParamLimits

0x8253,	// (0x00033a2a) aid_recal_txt_sm_pane

0xae30,	// (0x00036607) mian_recal_day_pane

0x82d8,	// (0x00033aaf) popup_sp_fs_cale_preview_window_ParamLimits

0x8800,	// (0x00033fd7) list_recal_day_pane

0x8842,	// (0x00034019) list_single_recal_day_pane_ParamLimits

0x8842,	// (0x00034019) list_single_recal_day_pane

0x8854,	// (0x0003402b) list_single_recal_day_pane_g1_ParamLimits

0x8854,	// (0x0003402b) list_single_recal_day_pane_g1

0x8860,	// (0x00034037) list_single_recal_day_pane_g2_ParamLimits

0x8860,	// (0x00034037) list_single_recal_day_pane_g2

0x886c,	// (0x00034043) list_single_recal_day_pane_g3_ParamLimits

0x886c,	// (0x00034043) list_single_recal_day_pane_g3

0x8878,	// (0x0003404f) list_single_recal_day_pane_g4_ParamLimits

0x8878,	// (0x0003404f) list_single_recal_day_pane_g4

0x8886,	// (0x0003405d) list_single_recal_day_pane_g5_ParamLimits

0x8886,	// (0x0003405d) list_single_recal_day_pane_g5

0x889c,	// (0x00034073) list_single_recal_day_pane_g6_ParamLimits

0x889c,	// (0x00034073) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0003b4d2) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0003b4d2) list_single_recal_day_pane_g

0x88b0,	// (0x00034087) list_single_recal_day_pane_t1

0x88c2,	// (0x00034099) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0003b4dd) list_single_recal_day_pane_t

0x88d4,	// (0x000340ab) ncimui_query_button_pane_ParamLimits

0x88d4,	// (0x000340ab) ncimui_query_button_pane

0x88e4,	// (0x000340bb) ncimui_query_button_pane_t1_ParamLimits

0x88e4,	// (0x000340bb) ncimui_query_button_pane_t1

0x88f7,	// (0x000340ce) ncimui_query_button_pane_t2_ParamLimits

0x88f7,	// (0x000340ce) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0003b4e2) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0003b4e2) ncimui_query_button_pane_t

0x890a,	// (0x000340e1) query_button_pane_ParamLimits

0x890a,	// (0x000340e1) query_button_pane

0xae30,	// (0x00036607) bg_button_pane_cp0028

0x891d,	// (0x000340f4) query_button_pane_t1

0x087b,	// (0x0002c052) main_tport_pane_ParamLimits

0x7dc1,	// (0x00033598) bg_popup_window_pane_cp01_ParamLimits

0x7dc1,	// (0x00033598) bg_popup_window_pane_cp01

0x7ddc,	// (0x000335b3) heading_pane_cp08_ParamLimits

0x7ddc,	// (0x000335b3) heading_pane_cp08

0x7def,	// (0x000335c6) heading_pane_cp07_ParamLimits

0x7def,	// (0x000335c6) heading_pane_cp07

0x7ebf,	// (0x00033696) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0003b42e) cell_tport_appsw_pane_g

0xcb5b,	// (0x00038332) input_candi_list_open_g1

0xc385,	// (0x00037b5c) list_cale_time_pane_g6_ParamLimits

0xc385,	// (0x00037b5c) list_cale_time_pane_g6

0x433c,	// (0x0002fb13) aid_size_touch_calib_1_ParamLimits

0x433c,	// (0x0002fb13) aid_size_touch_calib_1

0x434e,	// (0x0002fb25) aid_size_touch_calib_2_ParamLimits

0x434e,	// (0x0002fb25) aid_size_touch_calib_2

0x4366,	// (0x0002fb3d) aid_size_touch_calib_3_ParamLimits

0x4366,	// (0x0002fb3d) aid_size_touch_calib_3

0x4384,	// (0x0002fb5b) aid_size_touch_calib_4_ParamLimits

0x4384,	// (0x0002fb5b) aid_size_touch_calib_4

0x439c,	// (0x0002fb73) main_touch_calib_button_group_pane_ParamLimits

0x439c,	// (0x0002fb73) main_touch_calib_button_group_pane

0x43b4,	// (0x0002fb8b) main_touch_calib_pane_g1_ParamLimits

0x43c6,	// (0x0002fb9d) main_touch_calib_pane_g2_ParamLimits

0x43d8,	// (0x0002fbaf) main_touch_calib_pane_g3_ParamLimits

0x43ea,	// (0x0002fbc1) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0003ae70) main_touch_calib_pane_g_ParamLimits

0x43fc,	// (0x0002fbd3) main_touch_calib_pane_t1_ParamLimits

0x4416,	// (0x0002fbed) main_touch_calib_pane_t2_ParamLimits

0x4430,	// (0x0002fc07) main_touch_calib_pane_t3_ParamLimits

0x4444,	// (0x0002fc1b) main_touch_calib_pane_t4_ParamLimits

0x4458,	// (0x0002fc2f) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0003ae79) main_touch_calib_pane_t_ParamLimits

0xe4ec,	// (0x00039cc3) list_single_fp_cale_pane_g3_ParamLimits

0xe4ec,	// (0x00039cc3) list_single_fp_cale_pane_g3

0xae9f,	// (0x00036676) bg_button_pane_cp012_ParamLimits

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp03_ParamLimits

0x164a,	// (0x0002ce21) cell_vitu2_function_top_pane_g1_ParamLimits

0xae9f,	// (0x00036676) bg_vkb2_func_pane_cp04_ParamLimits

0x6ace,	// (0x000322a5) main_ncimui_button_group_pane_ParamLimits

0x6ace,	// (0x000322a5) main_ncimui_button_group_pane

0x6b2e,	// (0x00032305) main_ncimui_pane_t3_ParamLimits

0x6b2e,	// (0x00032305) main_ncimui_pane_t3

0x818c,	// (0x00033963) phacti_button_group_pane

0x8748,	// (0x00033f1f) aid_size_list_single_double_ParamLimits

0x8754,	// (0x00033f2b) popup_ezdial_listscroll_window_ParamLimits

0x8770,	// (0x00033f47) popup_number_entry_window_cp01_ParamLimits

0x892b,	// (0x00034102) phacti_button_pane_ParamLimits

0x892b,	// (0x00034102) phacti_button_pane

0xae30,	// (0x00036607) bg_button_pane_cp14

0x893c,	// (0x00034113) phacti_button_pane_t1

0x894a,	// (0x00034121) main_touch_calib_button_pane_ParamLimits

0x894a,	// (0x00034121) main_touch_calib_button_pane

0xbd9a,	// (0x00037571) bg_button_pane_cp18_ParamLimits

0xbd9a,	// (0x00037571) bg_button_pane_cp18

0x895f,	// (0x00034136) main_touch_calib_button_pane_t1_ParamLimits

0x895f,	// (0x00034136) main_touch_calib_button_pane_t1

0x8975,	// (0x0003414c) main_touch_calib_button_pane_t2_ParamLimits

0x8975,	// (0x0003414c) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0003b4e7) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0003b4e7) main_touch_calib_button_pane_t

0xae30,	// (0x00036607) cell_ncimui_button_pane

0xae30,	// (0x00036607) bg_button_pane_cp032

0x8993,	// (0x0003416a) cell_ncimui_button_pane_t1

0xb70b,	// (0x00036ee2) image3_infobar_pane_ParamLimits

0xb70b,	// (0x00036ee2) image3_infobar_pane

0x7263,	// (0x00032a3a) fs_bigclock_status_pane_ParamLimits

0x7263,	// (0x00032a3a) fs_bigclock_status_pane

0x7270,	// (0x00032a47) main_fs_bigclock_clock_pane_ParamLimits

0x7270,	// (0x00032a47) main_fs_bigclock_clock_pane

0x728e,	// (0x00032a65) main_fs_bigclock_indi_pane_ParamLimits

0x728e,	// (0x00032a65) main_fs_bigclock_indi_pane

0x72c0,	// (0x00032a97) main_fs_bigclock_swipe_pane_ParamLimits

0x72c0,	// (0x00032a97) main_fs_bigclock_swipe_pane

0xae30,	// (0x00036607) main_fs_clock_dumped_data

0x72ff,	// (0x00032ad6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x72ff,	// (0x00032ad6) list_single_fs_bigclock_indicator_pane_g1

0x731a,	// (0x00032af1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x731a,	// (0x00032af1) list_single_fs_bigclock_indicator_pane_g2

0x7334,	// (0x00032b0b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7334,	// (0x00032b0b) list_single_fs_bigclock_indicator_pane_g3

0x734e,	// (0x00032b25) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x734e,	// (0x00032b25) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0003b388) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0003b388) list_single_fs_bigclock_indicator_pane_g

0x7379,	// (0x00032b50) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7379,	// (0x00032b50) list_single_fs_bigclock_indicator_pane_t1

0x73a1,	// (0x00032b78) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x73a1,	// (0x00032b78) list_single_fs_bigclock_indicator_pane_t2

0x73c9,	// (0x00032ba0) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x73c9,	// (0x00032ba0) list_single_fs_bigclock_indicator_pane_t3

0x73f1,	// (0x00032bc8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x73f1,	// (0x00032bc8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0003b393) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0003b393) list_single_fs_bigclock_indicator_pane_t

0x89a1,	// (0x00034178) image3_infobar_fav_pane_ParamLimits

0x89a1,	// (0x00034178) image3_infobar_fav_pane

0x89b1,	// (0x00034188) image3_infobar_loc_pane_ParamLimits

0x89b1,	// (0x00034188) image3_infobar_loc_pane

0x89c5,	// (0x0003419c) image3_infobar_time_pane_ParamLimits

0x89c5,	// (0x0003419c) image3_infobar_time_pane

0xbfa9,	// (0x00037780) image3_infobar_time_pane_g1

0x89d5,	// (0x000341ac) image3_infobar_time_pane_t1

0xbfa9,	// (0x00037780) image3_infobar_loc_pane_g1

0x89e3,	// (0x000341ba) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0003b4ec) image3_infobar_loc_pane_g

0x89eb,	// (0x000341c2) image3_infobar_loc_pane_t1

0xbfa9,	// (0x00037780) image3_infobar_fav_pane_g1

0x89f9,	// (0x000341d0) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0003b4f1) image3_infobar_fav_pane_g

0x8a01,	// (0x000341d8) fs_bigclock_status_battery_pane

0x8a0a,	// (0x000341e1) fs_bigclock_status_signal_pane

0x8a13,	// (0x000341ea) fs_bigclock_status_title_pane

0x8a1c,	// (0x000341f3) fs_bigclock_status_signal_pane_g1

0x8a25,	// (0x000341fc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0003b4f6) fs_bigclock_status_signal_pane_g

0x8a2d,	// (0x00034204) fs_bigclock_status_battery_pane_g1

0x8a36,	// (0x0003420d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0003b4fb) fs_bigclock_status_battery_pane_g

0x8a3e,	// (0x00034215) fs_bigclock_status_title_pane_t1

0x8a4c,	// (0x00034223) main_fs_bigclock_clock_pane_g1

0x8a4c,	// (0x00034223) main_fs_bigclock_clock_pane_g2

0x8a5d,	// (0x00034234) main_fs_bigclock_clock_pane_g3

0x8a5d,	// (0x00034234) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0003b500) main_fs_bigclock_clock_pane_g

0x8a70,	// (0x00034247) main_fs_bigclock_clock_pane_t1

0x8a86,	// (0x0003425d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0003b509) main_fs_bigclock_clock_pane_t

0x8a9c,	// (0x00034273) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a9c,	// (0x00034273) list_single_fs_bigclock_indicator_pane

0x8aad,	// (0x00034284) list_single_fs_bigclock_pane_ParamLimits

0x8aad,	// (0x00034284) list_single_fs_bigclock_pane

0x8b17,	// (0x000342ee) main_fs_bigclock_indicator_pane_t1

0x8b26,	// (0x000342fd) list_single_fs_bigclock_pane_g1

0x8b2e,	// (0x00034305) list_single_fs_bigclock_pane_t1

0xbfa9,	// (0x00037780) main_fs_bigclock_swipe_pane_g1

0x8b71,	// (0x00034348) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0003b51a) main_fs_bigclock_swipe_pane_g

0x8b79,	// (0x00034350) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x8b79,	// (0x00034350) main_fs_bigclock_swipe_pane_t1

0x317d,	// (0x0002e954) call_type_pane_ParamLimits

0xae30,	// (0x00036607) main_btmg_pane

0x848f,	// (0x00033c66) list_single_cale_mrui_row_pane_g2_ParamLimits

0x848f,	// (0x00033c66) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0003b48d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0003b48d) list_single_cale_mrui_row_pane_g

0x8829,	// (0x00034000) list_recal_vselct_arw_lo_pane

0x8831,	// (0x00034008) list_recal_vselct_arw_up_pane

0x8839,	// (0x00034010) list_recal_vselct_pane

0x8b96,	// (0x0003436d) btmg_button_pane

0x8ba0,	// (0x00034377) main_btmg_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp044

0x8baa,	// (0x00034381) btmg_button_pane_t1

0xdd93,	// (0x0003956a) aid_listscroll_gen

0xbcc1,	// (0x00037498) main_cntbar_detail_pane

0x7f26,	// (0x000336fd) list_cmail_folder_pane

0xe58a,	// (0x00039d61) sp_fs_scroll_pane_cp03_ParamLimits

0x7f5a,	// (0x00033731) list_single_fs_dyc_pane_cp01_ParamLimits

0x7f5a,	// (0x00033731) list_single_fs_dyc_pane_cp01

0x8bb8,	// (0x0003438f) aid_size_cmail_indent

0x8bc1,	// (0x00034398) list_single_dyc_row_pane_cp01

0x8bf6,	// (0x000343cd) cntbar_detail_list_pane_ParamLimits

0x8bf6,	// (0x000343cd) cntbar_detail_list_pane

0x8c42,	// (0x00034419) main_cntbar_detail_cont_pane_ParamLimits

0x8c42,	// (0x00034419) main_cntbar_detail_cont_pane

0xe58a,	// (0x00039d61) scroll_pane_cp032_ParamLimits

0xe58a,	// (0x00039d61) scroll_pane_cp032

0x8c56,	// (0x0003442d) cntbar_detail_list_event_pane_ParamLimits

0x8c56,	// (0x0003442d) cntbar_detail_list_event_pane

0x8c06,	// (0x000343dd) cntbar_detail_list_shct_pane

0xc208,	// (0x000379df) aid_list_gen

0x8c66,	// (0x0003443d) aid_scroll

0x8c6f,	// (0x00034446) aid_size_touch_scroll_bar

0x766a,	// (0x00032e41) aid_list_double

0x8c78,	// (0x0003444f) aid_list_single

0x8c78,	// (0x0003444f) aid_list_single_lg

0x8c81,	// (0x00034458) aid_list_z_g_a_sm

0x8c89,	// (0x00034460) aid_list_z_g_d

0x8c91,	// (0x00034468) aid_txt_z_prm

0x8c9f,	// (0x00034476) aid_txt_z_prm_cp01

0x8cad,	// (0x00034484) aid_txt_z_sec

0x8cbb,	// (0x00034492) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8cbb,	// (0x00034492) main_cntbar_detail_cont_pane_g1

0x8ccf,	// (0x000344a6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ccf,	// (0x000344a6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0003b51f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0003b51f) main_cntbar_detail_cont_pane_g

0x8cdf,	// (0x000344b6) main_cntbar_detail_cont_pane_t1

0x8ced,	// (0x000344c4) main_cntbar_detail_cont_pane_t2

0x8cfb,	// (0x000344d2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0003b524) main_cntbar_detail_cont_pane_t

0x8d09,	// (0x000344e0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d09,	// (0x000344e0) cell_cntbar_detail_list_shct_pane

0x8d1d,	// (0x000344f4) cntbar_detail_list_shct_pane_g1

0x8d26,	// (0x000344fd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0003b52b) cntbar_detail_list_shct_pane_g

0x8d2f,	// (0x00034506) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d2f,	// (0x00034506) cntbar_detail_list_event_pane_g1

0x8d3b,	// (0x00034512) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d3b,	// (0x00034512) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0003b530) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0003b530) cntbar_detail_list_event_pane_g

0x8da7,	// (0x0003457e) cntbar_detail_list_event_pane_t1_ParamLimits

0x8da7,	// (0x0003457e) cntbar_detail_list_event_pane_t1

0x8dbc,	// (0x00034593) cntbar_detail_list_event_pane_t2_ParamLimits

0x8dbc,	// (0x00034593) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0003b53d) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0003b53d) cntbar_detail_list_event_pane_t

0xbfa9,	// (0x00037780) cell_cntbar_detail_list_shct_pane_g1

0xc98b,	// (0x00038162) navi_pane_mv_g3

0xbcc1,	// (0x00037498) main_cntbar_detail_pane_ParamLimits

0xae30,	// (0x00036607) main_notif_wgt_pane

0xb4f7,	// (0x00036cce) aid_tch_main_mp4_pane_g4

0xb703,	// (0x00036eda) popup_slider_window_cp02

0x881f,	// (0x00033ff6) list_recal_day_event_pane

0x8bca,	// (0x000343a1) cntbar_detail_btn_pane_ParamLimits

0x8bca,	// (0x000343a1) cntbar_detail_btn_pane

0x8be0,	// (0x000343b7) cntbar_detail_btn_pane_cp01_ParamLimits

0x8be0,	// (0x000343b7) cntbar_detail_btn_pane_cp01

0x8c06,	// (0x000343dd) cntbar_detail_list_shct_pane_ParamLimits

0x8c16,	// (0x000343ed) cntbar_detail_pane_g1_ParamLimits

0x8c16,	// (0x000343ed) cntbar_detail_pane_g1

0x8c26,	// (0x000343fd) cntbar_detail_pane_t1_ParamLimits

0x8c26,	// (0x000343fd) cntbar_detail_pane_t1

0x8d47,	// (0x0003451e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d47,	// (0x0003451e) cntbar_detail_list_event_pane_g3

0x8d5f,	// (0x00034536) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d5f,	// (0x00034536) cntbar_detail_list_event_pane_g4

0x8d77,	// (0x0003454e) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d77,	// (0x0003454e) cntbar_detail_list_event_pane_g5

0x8d8f,	// (0x00034566) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d8f,	// (0x00034566) cntbar_detail_list_event_pane_g6

0x8dd1,	// (0x000345a8) cntbar_detail_list_event_pane_t3_ParamLimits

0x8dd1,	// (0x000345a8) cntbar_detail_list_event_pane_t3

0x8de3,	// (0x000345ba) popup_notif_wgt_window_ParamLimits

0x8de3,	// (0x000345ba) popup_notif_wgt_window

0x8dfc,	// (0x000345d3) popup_submenu_window_cp01_ParamLimits

0x8dfc,	// (0x000345d3) popup_submenu_window_cp01

0xbf73,	// (0x0003774a) bg_popup_window_pane_cp10

0x8e12,	// (0x000345e9) listscroll_notif_wgt_pane

0x8e24,	// (0x000345fb) list_notif_wgt_window

0x8e2d,	// (0x00034604) scroll_pane_cp033

0x8e36,	// (0x0003460d) list_notif_wgt_row_pane_ParamLimits

0x8e36,	// (0x0003460d) list_notif_wgt_row_pane

0x8e46,	// (0x0003461d) aid_size_list_notif_wgt_del

0x8e53,	// (0x0003462a) list_notif_wgt_row_pane_g1

0x8e5f,	// (0x00034636) list_notif_wgt_row_pane_g2

0x8e6e,	// (0x00034645) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0003b544) list_notif_wgt_row_pane_g

0x8e7b,	// (0x00034652) list_notif_wgt_row_pane_t1

0x8e91,	// (0x00034668) list_notif_wgt_row_pane_t2

0x8ea3,	// (0x0003467a) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0003b54b) list_notif_wgt_row_pane_t

0xed1c,	// (0x0003a4f3) list_recal_day_event_pane_g1

0x8eb5,	// (0x0003468c) list_recal_day_event_pane_t1

0xae30,	// (0x00036607) bg_button_pane_cp045

0x8ec4,	// (0x0003469b) cntbar_detail_btn_pane_t1

0xcac0,	// (0x00038297) main_callh_pane_ParamLimits

0xcac0,	// (0x00038297) main_callh_pane

0xae30,	// (0x00036607) main_coverflow0_pane

0xae30,	// (0x00036607) main_wgtman_pane

0x72d8,	// (0x00032aaf) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x72d8,	// (0x00032aaf) main_fs_bigclock_unlock_btn_pane

0x7eb7,	// (0x0003368e) bg_button_pane_cp16

0x7ec7,	// (0x0003369e) cell_tport_appsw_pane_g3

0x8ed2,	// (0x000346a9) cf0_flow_pane_ParamLimits

0x8ed2,	// (0x000346a9) cf0_flow_pane

0x8ee7,	// (0x000346be) listscroll_cf0_pane

0x8ef2,	// (0x000346c9) main_cf0_pane_g1

0x8f04,	// (0x000346db) main_cf0_pane_t1_ParamLimits

0x8f04,	// (0x000346db) main_cf0_pane_t1

0x8f1b,	// (0x000346f2) main_cf0_pane_t2_ParamLimits

0x8f1b,	// (0x000346f2) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0003b557) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0003b557) main_cf0_pane_t

0x8f32,	// (0x00034709) scroll_pane_cp11

0x8f3d,	// (0x00034714) cf0_flow_pane_g1

0x8f45,	// (0x0003471c) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0003b55c) cf0_flow_pane_g

0x8f4d,	// (0x00034724) cf0_flow_pane_t1

0xae30,	// (0x00036607) main_call6_pane

0xae30,	// (0x00036607) main_calllock_pane

0x1782,	// (0x0002cf59) call6_btn_grp_pane_ParamLimits

0x1782,	// (0x0002cf59) call6_btn_grp_pane

0x179c,	// (0x0002cf73) call6_pane_g1_ParamLimits

0x179c,	// (0x0002cf73) call6_pane_g1

0x17b2,	// (0x0002cf89) popup_call6_1st_window_ParamLimits

0x17b2,	// (0x0002cf89) popup_call6_1st_window

0x17c3,	// (0x0002cf9a) popup_call6_2nd_window_ParamLimits

0x17c3,	// (0x0002cf9a) popup_call6_2nd_window

0x17d4,	// (0x0002cfab) cell_call6_btn_pane_ParamLimits

0x17d4,	// (0x0002cfab) cell_call6_btn_pane

0xbf73,	// (0x0003774a) bg_popup_call2_in_pane_cp03

0x8f5b,	// (0x00034732) popup_call6_1st_window_g1

0x8f63,	// (0x0003473a) popup_call6_1st_window_g2

0x8f6b,	// (0x00034742) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0003b561) popup_call6_1st_window_g

0x8f73,	// (0x0003474a) popup_call6_1st_window_t1

0x8f82,	// (0x00034759) popup_call6_1st_window_t2

0x8f90,	// (0x00034767) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0003b568) popup_call6_1st_window_t

0xbf73,	// (0x0003774a) bg_popup_call2_in_pane_cp04

0x8f9e,	// (0x00034775) popup_call6_2nd_window_g1

0x8fa6,	// (0x0003477d) popup_call6_2nd_window_g2

0x8fae,	// (0x00034785) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0003b56f) popup_call6_2nd_window_g

0x8fb6,	// (0x0003478d) popup_call6_2nd_window_t1

0xaead,	// (0x00036684) bg_button_pane_cp15

0xb963,	// (0x0003713a) cell_call6_btn_pane_g1

0xb96c,	// (0x00037143) cell_call6_btn_pane_t1

0x8fc5,	// (0x0003479c) listscroll_wgtman_pane_ParamLimits

0x8fc5,	// (0x0003479c) listscroll_wgtman_pane

0x8fe6,	// (0x000347bd) wgtman_btn_pane_ParamLimits

0x8fe6,	// (0x000347bd) wgtman_btn_pane

0xc792,	// (0x00037f69) aid_scroll_copy1

0x9029,	// (0x00034800) list_wgtman_pane

0x9033,	// (0x0003480a) wgtman_btn_pane_g1_ParamLimits

0x9033,	// (0x0003480a) wgtman_btn_pane_g1

0x905f,	// (0x00034836) wgtman_btn_pane_t1_ParamLimits

0x905f,	// (0x00034836) wgtman_btn_pane_t1

0x909c,	// (0x00034873) wgtman_btn_pane_t2_ParamLimits

0x909c,	// (0x00034873) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0003b576) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0003b576) wgtman_btn_pane_t

0x90b3,	// (0x0003488a) listrow_wgtman_pane_ParamLimits

0x90b3,	// (0x0003488a) listrow_wgtman_pane

0x90c5,	// (0x0003489c) listrow_wgtman_pane_g1

0x90d2,	// (0x000348a9) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0003b57b) listrow_wgtman_pane_g

0x90f0,	// (0x000348c7) listrow_wgtman_pane_t1

0x9108,	// (0x000348df) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0003b580) listrow_wgtman_pane_t

0x912e,	// (0x00034905) wait_bar_pane_cp09

0x9140,	// (0x00034917) main_calllock_btn_pane

0x914a,	// (0x00034921) main_calllock_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp17

0x9152,	// (0x00034929) main_calllock_btn_pane_g1

0x915b,	// (0x00034932) main_calllock_btn_pane_t1

0xae30,	// (0x00036607) main_dialer3_pane

0xae30,	// (0x00036607) main_fmrd2_pane

0xbfa9,	// (0x00037780) main_fs_bigclock_unlock_btn_pane_g1

0x9172,	// (0x00034949) main_fs_bigclock_unlock_btn_pane_t1

0x9180,	// (0x00034957) area_fmrd2_info_pane_ParamLimits

0x9180,	// (0x00034957) area_fmrd2_info_pane

0x9191,	// (0x00034968) area_fmrd2_visual_pane_ParamLimits

0x9191,	// (0x00034968) area_fmrd2_visual_pane

0x919f,	// (0x00034976) fmrd2_indi_pane_ParamLimits

0x919f,	// (0x00034976) fmrd2_indi_pane

0x91ac,	// (0x00034983) area_fmrd2_visual_pane_g1

0x91b4,	// (0x0003498b) area_fmrd2_visual_pane_t1

0x91c4,	// (0x0003499b) area_fmrd2_visual_pane_t2

0x91d4,	// (0x000349ab) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0003b58a) area_fmrd2_visual_pane_t

0x91e4,	// (0x000349bb) area_fmrd2_info_pane_g1

0x91ec,	// (0x000349c3) area_fmrd2_info_pane_t1

0x91fc,	// (0x000349d3) area_fmrd2_info_pane_t2

0x920c,	// (0x000349e3) area_fmrd2_info_pane_t3

0x921c,	// (0x000349f3) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0003b591) area_fmrd2_info_pane_t

0x922a,	// (0x00034a01) fmrd2_indi_pane_t1

0x923a,	// (0x00034a11) fmrd2_indi_pane_t2

0x924a,	// (0x00034a21) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0003b59a) fmrd2_indi_pane_t

0x735d,	// (0x00032b34) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x735d,	// (0x00032b34) list_single_fs_bigclock_indicator_pane_g5

0x740e,	// (0x00032be5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x740e,	// (0x00032be5) list_single_fs_bigclock_indicator_pane_t5

0x8235,	// (0x00033a0c) aid_cell_bcale_month_pane_ParamLimits

0x8235,	// (0x00033a0c) aid_cell_bcale_month_pane

0x825c,	// (0x00033a33) bcale_month_pane_ParamLimits

0x825c,	// (0x00033a33) bcale_month_pane

0x8280,	// (0x00033a57) bcale_preview_pane_ParamLimits

0x8280,	// (0x00033a57) bcale_preview_pane

0x8b2e,	// (0x00034305) list_single_fs_bigclock_pane_t1_ParamLimits

0x8b4d,	// (0x00034324) list_single_fs_bigclock_pane_t2_ParamLimits

0x8b4d,	// (0x00034324) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0003b515) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0003b515) list_single_fs_bigclock_pane_t

0x916a,	// (0x00034941) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0003b585) main_fs_bigclock_unlock_btn_pane_g

0x925a,	// (0x00034a31) aid_dia3_key_size_ParamLimits

0x925a,	// (0x00034a31) aid_dia3_key_size

0x9269,	// (0x00034a40) aid_dia3_listrow_size_ParamLimits

0x9269,	// (0x00034a40) aid_dia3_listrow_size

0x927e,	// (0x00034a55) dia3_keypad_fun_pane_ParamLimits

0x927e,	// (0x00034a55) dia3_keypad_fun_pane

0x929a,	// (0x00034a71) dia3_keypad_num_pane_ParamLimits

0x929a,	// (0x00034a71) dia3_keypad_num_pane

0x92b5,	// (0x00034a8c) dia3_listscroll_pane_ParamLimits

0x92b5,	// (0x00034a8c) dia3_listscroll_pane

0x92c8,	// (0x00034a9f) dia3_numentry_pane_ParamLimits

0x92c8,	// (0x00034a9f) dia3_numentry_pane

0x92e0,	// (0x00034ab7) dia3_list_pane

0x92eb,	// (0x00034ac2) scroll_pane_cp12

0xae30,	// (0x00036607) bg_dia3_numentry_pane

0x92f6,	// (0x00034acd) dia3_numentry_pane_t1

0x9305,	// (0x00034adc) cell_dia3_key_num_pane

0x930d,	// (0x00034ae4) cell_dia3_key0_fun_pane_ParamLimits

0x930d,	// (0x00034ae4) cell_dia3_key0_fun_pane

0x9321,	// (0x00034af8) cell_dia3_key1_fun_pane_ParamLimits

0x9321,	// (0x00034af8) cell_dia3_key1_fun_pane

0x9339,	// (0x00034b10) dia3_listrow_pane

0x6d4c,	// (0x00032523) bg_dia3_numentry_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp21

0x934b,	// (0x00034b22) cell_dia3_key_num_pane_t1

0x9359,	// (0x00034b30) cell_dia3_key_num_pane_t2

0x9368,	// (0x00034b3f) cell_dia3_key_num_pane_t3

0x9377,	// (0x00034b4e) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0003b5a1) cell_dia3_key_num_pane_t

0xae30,	// (0x00036607) bg_button_pane_cp19

0x9386,	// (0x00034b5d) cell_dia3_key0_fun_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp20

0x938e,	// (0x00034b65) cell_dia3_key1_fun_pane_g1

0x9396,	// (0x00034b6d) area_left_week_number_pane

0x93a2,	// (0x00034b79) area_top_day_name_pane

0x93b5,	// (0x00034b8c) frame_month_view_pane

0x93c8,	// (0x00034b9f) grid_month_view_pane

0x93d6,	// (0x00034bad) cell_top_day_name_pane_ParamLimits

0x93d6,	// (0x00034bad) cell_top_day_name_pane

0x9403,	// (0x00034bda) cell_area_left_week_number_pane_ParamLimits

0x9403,	// (0x00034bda) cell_area_left_week_number_pane

0x9417,	// (0x00034bee) cell_month_view_pane_ParamLimits

0x9417,	// (0x00034bee) cell_month_view_pane

0x9444,	// (0x00034c1b) frm_month_g1

0x9451,	// (0x00034c28) frm_month_g2

0x9464,	// (0x00034c3b) frm_month_g3

0x9477,	// (0x00034c4e) frm_month_g4

0x948a,	// (0x00034c61) frm_month_g5

0x949d,	// (0x00034c74) frm_month_g6

0x94b0,	// (0x00034c87) frm_month_g7

0x94c3,	// (0x00034c9a) frm_month_g8

0x94d0,	// (0x00034ca7) frm_month_g9

0x94e0,	// (0x00034cb7) frm_month_g10

0x94f0,	// (0x00034cc7) frm_month_g11

0x9500,	// (0x00034cd7) frm_month_g12

0x9512,	// (0x00034ce9) frm_month_g13

0x9524,	// (0x00034cfb) frm_month_g14

0x9538,	// (0x00034d0f) frm_month_g15

0x954c,	// (0x00034d23) frm_month_g16

0x000f,

0xfdd3,	// (0x0003b5aa) frm_month_g

0x9560,	// (0x00034d37) cell_top_day_name_pane_t1

0x9573,	// (0x00034d4a) cell_area_left_week_number_pane_g1

0x957f,	// (0x00034d56) cell_area_left_week_number_pane_t1

0xbd28,	// (0x000374ff) cell_month_view_pane_g1

0x9592,	// (0x00034d69) cell_month_view_pane_t1

0xae30,	// (0x00036607) main_fps_pane

0x7984,	// (0x0003315b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x7984,	// (0x0003315b) cmail_ddmenu_btn02_pane_cp1

0x79a0,	// (0x00033177) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x79a0,	// (0x00033177) cmail_ddmenu_btn02_pane_cp2

0x87d0,	// (0x00033fa7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87d0,	// (0x00033fa7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0003b4c8) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0003b4c8) cmail_ddmenu_btn02_pane_g

0x87ee,	// (0x00033fc5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87ee,	// (0x00033fc5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0003b4cd) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0003b4cd) cmail_ddmenu_btn02_pane_t

0x95a5,	// (0x00034d7c) fps_text_pane_ParamLimits

0x95a5,	// (0x00034d7c) fps_text_pane

0x95bc,	// (0x00034d93) main_fps_pane_g1_ParamLimits

0x95bc,	// (0x00034d93) main_fps_pane_g1

0x95d6,	// (0x00034dad) wait_bar_pane_cp010_ParamLimits

0x95d6,	// (0x00034dad) wait_bar_pane_cp010

0x95e7,	// (0x00034dbe) fps_text_pane_t1_ParamLimits

0x95e7,	// (0x00034dbe) fps_text_pane_t1

0x51d2,	// (0x000309a9) cam4_image_uncrop_pane_g1

0x51db,	// (0x000309b2) cam4_image_uncrop_pane_g2

0x51e4,	// (0x000309bb) cam4_image_uncrop_pane_g3

0x51ed,	// (0x000309c4) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0003b00c) cam4_image_uncrop_pane_g

0x9339,	// (0x00034b10) dia3_listrow_pane_ParamLimits

0xae30,	// (0x00036607) main_phob2_pane

0x7e5f,	// (0x00033636) cell_tport_appsw_pane_cp02_ParamLimits

0x7e5f,	// (0x00033636) cell_tport_appsw_pane_cp02

0x7e73,	// (0x0003364a) cell_tport_appsw_pane_cp03_ParamLimits

0x7e73,	// (0x0003364a) cell_tport_appsw_pane_cp03

0xae30,	// (0x00036607) phob2_contact_card_pane

0xae30,	// (0x00036607) phob2_listscroll_pane

0x95ff,	// (0x00034dd6) phob2_list_pane

0x9607,	// (0x00034dde) scroll_pane_cp034

0x960f,	// (0x00034de6) phob2_cc_data_pane_ParamLimits

0x960f,	// (0x00034de6) phob2_cc_data_pane

0x962e,	// (0x00034e05) phob2_cc_listscroll_pane_ParamLimits

0x962e,	// (0x00034e05) phob2_cc_listscroll_pane

0x90b3,	// (0x0003488a) list_double_large_graphic_phob2_pane_ParamLimits

0x90b3,	// (0x0003488a) list_double_large_graphic_phob2_pane

0x964c,	// (0x00034e23) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x964c,	// (0x00034e23) list_double_large_graphic_phob2_pane_g1

0x9659,	// (0x00034e30) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9659,	// (0x00034e30) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0003b5cb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0003b5cb) list_double_large_graphic_phob2_pane_g

0x967f,	// (0x00034e56) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x967f,	// (0x00034e56) list_double_large_graphic_phob2_pane_t1

0x9694,	// (0x00034e6b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9694,	// (0x00034e6b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0003b5d4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0003b5d4) list_double_large_graphic_phob2_pane_t

0xae30,	// (0x00036607) list_highlight_pane_cp024

0x96a9,	// (0x00034e80) phob2_cc_button_pane

0x96b1,	// (0x00034e88) phob2_cc_data_pane_g1_ParamLimits

0x96b1,	// (0x00034e88) phob2_cc_data_pane_g1

0x96c8,	// (0x00034e9f) phob2_cc_data_pane_g2_ParamLimits

0x96c8,	// (0x00034e9f) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0003b5d9) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0003b5d9) phob2_cc_data_pane_g

0x96da,	// (0x00034eb1) phob2_cc_data_pane_t1_ParamLimits

0x96da,	// (0x00034eb1) phob2_cc_data_pane_t1

0x96f2,	// (0x00034ec9) phob2_cc_data_pane_t2_ParamLimits

0x96f2,	// (0x00034ec9) phob2_cc_data_pane_t2

0x970a,	// (0x00034ee1) phob2_cc_data_pane_t3_ParamLimits

0x970a,	// (0x00034ee1) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0003b5de) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0003b5de) phob2_cc_data_pane_t

0x9722,	// (0x00034ef9) phob2_cc_list_pane_ParamLimits

0x9722,	// (0x00034ef9) phob2_cc_list_pane

0xedb3,	// (0x0003a58a) scroll_pane_cp035_ParamLimits

0xedb3,	// (0x0003a58a) scroll_pane_cp035

0xbcc1,	// (0x00037498) bg_button_pane_cp033

0x972e,	// (0x00034f05) phob2_cc_button_pane_g1

0x973a,	// (0x00034f11) phob2_cc_button_pane_t1

0x974f,	// (0x00034f26) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0003b5e5) phob2_cc_button_pane_t

0x9761,	// (0x00034f38) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9761,	// (0x00034f38) list_double_large_graphic_phob2_cc_pane

0x9791,	// (0x00034f68) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9791,	// (0x00034f68) list_double_large_graphic_phob2_cc_pane_g1

0x979d,	// (0x00034f74) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x979d,	// (0x00034f74) list_double_large_graphic_phob2_cc_pane_g2

0x97a9,	// (0x00034f80) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x97a9,	// (0x00034f80) list_double_large_graphic_phob2_cc_pane_g3

0x97b5,	// (0x00034f8c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x97b5,	// (0x00034f8c) list_double_large_graphic_phob2_cc_pane_g4

0x97c1,	// (0x00034f98) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x97c1,	// (0x00034f98) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0003b5ea) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0003b5ea) list_double_large_graphic_phob2_cc_pane_g

0x97cd,	// (0x00034fa4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x97cd,	// (0x00034fa4) list_double_large_graphic_phob2_cc_pane_t1

0x97f6,	// (0x00034fcd) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x97f6,	// (0x00034fcd) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0003b5f5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0003b5f5) list_double_large_graphic_phob2_cc_pane_t

0x981f,	// (0x00034ff6) list_highlight_pane_cp025_ParamLimits

0x981f,	// (0x00034ff6) list_highlight_pane_cp025

0xbcc1,	// (0x00037498) bg_button_pane_cp033_ParamLimits

0x972e,	// (0x00034f05) phob2_cc_button_pane_g1_ParamLimits

0x973a,	// (0x00034f11) phob2_cc_button_pane_t1_ParamLimits

0x974f,	// (0x00034f26) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0003b5e5) phob2_cc_button_pane_t_ParamLimits

0x1850,	// (0x0002d027) popup_wgtman_window

0xebbe,	// (0x0003a395) scroll_pane_cp038

0x900b,	// (0x000347e2) wgtman_btn_pane_cp_01_ParamLimits

0x900b,	// (0x000347e2) wgtman_btn_pane_cp_01

0x982d,	// (0x00035004) wgtman_content_pane

0x9836,	// (0x0003500d) wgtman_heading_pane

0xae30,	// (0x00036607) bg_heading_pane_cp02

0x983f,	// (0x00035016) wgtman_heading_pane_g1

0x9847,	// (0x0003501e) wgtman_heading_pane_t1

0x9855,	// (0x0003502c) scroll_pane_cp036

0x985d,	// (0x00035034) wgtman_list_pane

0x9865,	// (0x0003503c) wgtman_list_pane_t1_ParamLimits

0x9865,	// (0x0003503c) wgtman_list_pane_t1

0xb78f,	// (0x00036f66) cam4_grid_pane

0x59d3,	// (0x000311aa) bg_button_pane_cp015_ParamLimits

0x59e4,	// (0x000311bb) bg_button_pane_cp016_ParamLimits

0x59f0,	// (0x000311c7) bg_button_pane_cp017_ParamLimits

0x5a44,	// (0x0003121b) popup_vitu2_query_window_g3_ParamLimits

0x5a44,	// (0x0003121b) popup_vitu2_query_window_g3

0x5ae5,	// (0x000312bc) popup_vitu2_query_window_t6_ParamLimits

0x5ae5,	// (0x000312bc) popup_vitu2_query_window_t6

0x5b10,	// (0x000312e7) popup_vitu2_query_window_t7_ParamLimits

0x5b10,	// (0x000312e7) popup_vitu2_query_window_t7

0x51d2,	// (0x000309a9) cam4_grid_pane_g1

0x51db,	// (0x000309b2) cam4_grid_pane_g2

0x987f,	// (0x00035056) cam4_grid_pane_g3

0x9888,	// (0x0003505f) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0003b5fa) cam4_grid_pane_g

0x2198,	// (0x0002d96f) aid_placing_vt_slider_lsc_ParamLimits

0x24a3,	// (0x0002dc7a) vidtel_button_pane_ParamLimits

0x24a3,	// (0x0002dc7a) vidtel_button_pane

0xae30,	// (0x00036607) bg_button_pane_cp034

0x9893,	// (0x0003506a) vidtel_button_pane_g1

0x989b,	// (0x00035072) vidtel_button_pane_t1

0xecfa,	// (0x0003a4d1) aid_size_vtel_slider_touch

0xedb3,	// (0x0003a58a) scroll_pane_cp039

0x6dbb,	// (0x00032592) ncim_query_button_pane_cp01_ParamLimits

0x6dda,	// (0x000325b1) ncimui_query_pane_g1_ParamLimits

0xbcc1,	// (0x00037498) input_focus_pane_cp012_ParamLimits

0x6dff,	// (0x000325d6) ncim_query_entry_pane_t1_ParamLimits

0xedb3,	// (0x0003a58a) scroll_pane_cp039_ParamLimits

0xc876,	// (0x0003804d) navi_pane_bcale_mc_g1

0xc87e,	// (0x00038055) navi_pane_bcale_mc_t1

0x7a91,	// (0x00033268) main_sp_fs_email_pane_g1

0x7a9d,	// (0x00033274) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0003b3fd) main_sp_fs_email_pane_g

0x849b,	// (0x00033c72) list_single_cale_mrui_row_pane_g3_ParamLimits

0x849b,	// (0x00033c72) list_single_cale_mrui_row_pane_g3

0x8892,	// (0x00034069) list_single_recal_day_pane_g5_event_pane

0x88a8,	// (0x0003407f) list_single_recal_day_pane_g7

0x98b1,	// (0x00035088) list_recal_day_event_pane_cp01

0x98ba,	// (0x00035091) list_recal_vselct_arw_lo_pane_cp01

0x98c2,	// (0x00035099) list_recal_vselct_arw_up_pane_cp01

0x98ca,	// (0x000350a1) list_recal_vselct_pane_cp01

0xed1c,	// (0x0003a4f3) list_recal_day_event_pane_cp01_g1

0x98d4,	// (0x000350ab) list_recal_day_event_pane_cp01_t1

0x88b0,	// (0x00034087) list_single_recal_day_pane_t1_ParamLimits

0x88c2,	// (0x00034099) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0003b4dd) list_single_recal_day_pane_t_ParamLimits

0xbc9f,	// (0x00037476) bg_notes_pane_ParamLimits

0xbd78,	// (0x0003754f) list_notes_pane_ParamLimits

0x1970,	// (0x0002d147) scroll_pane_cp06_ParamLimits

0xbd9a,	// (0x00037571) main_notes_pane_ParamLimits

0xbcc1,	// (0x00037498) main_welc_pane

0x9917,	// (0x000350ee) main_welc_body_pane_ParamLimits

0x9917,	// (0x000350ee) main_welc_body_pane

0x9935,	// (0x0003510c) main_welc_opti_pane_ParamLimits

0x9935,	// (0x0003510c) main_welc_opti_pane

0x99b3,	// (0x0003518a) main_welc_pane_t1_ParamLimits

0x99b3,	// (0x0003518a) main_welc_pane_t1

0x9bb3,	// (0x0003538a) main_welc_body_row_pane_ParamLimits

0x9bb3,	// (0x0003538a) main_welc_body_row_pane

0xbd1a,	// (0x000374f1) main_welc_opti_row_pane_ParamLimits

0xbd1a,	// (0x000374f1) main_welc_opti_row_pane

0x9bc7,	// (0x0003539e) main_welc_opti_row_pane_g1

0x9bcf,	// (0x000353a6) main_welc_opti_row_pane_t1

0x9bde,	// (0x000353b5) main_welc_body_row_pane_t1

0x8e1c,	// (0x000345f3) popup_notif_wgt_heading_pane

0x8e46,	// (0x0003461d) aid_size_list_notif_wgt_del_ParamLimits

0x8e53,	// (0x0003462a) list_notif_wgt_row_pane_g1_ParamLimits

0x8e5f,	// (0x00034636) list_notif_wgt_row_pane_g2_ParamLimits

0x8e6e,	// (0x00034645) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0003b544) list_notif_wgt_row_pane_g_ParamLimits

0x8e7b,	// (0x00034652) list_notif_wgt_row_pane_t1_ParamLimits

0x8e91,	// (0x00034668) list_notif_wgt_row_pane_t2_ParamLimits

0x8ea3,	// (0x0003467a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0003b54b) list_notif_wgt_row_pane_t_ParamLimits

0x90c5,	// (0x0003489c) listrow_wgtman_pane_g1_ParamLimits

0x90d2,	// (0x000348a9) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0003b57b) listrow_wgtman_pane_g_ParamLimits

0x90f0,	// (0x000348c7) listrow_wgtman_pane_t1_ParamLimits

0x9108,	// (0x000348df) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0003b580) listrow_wgtman_pane_t_ParamLimits

0x912e,	// (0x00034905) wait_bar_pane_cp09_ParamLimits

0xae30,	// (0x00036607) bg_popup_heading_pane_cp02

0x9bed,	// (0x000353c4) popup_notif_wgt_heading_pane_g1

0x9bf5,	// (0x000353cc) popup_notif_wgt_heading_pane_t1

0xae30,	// (0x00036607) main_vids_pane

0xae30,	// (0x00036607) vids_listscroll_pane

0x9c03,	// (0x000353da) scroll_pane_cp040

0xae30,	// (0x00036607) vids_list_pane

0x9c0e,	// (0x000353e5) vids_list_double_pane_ParamLimits

0x9c0e,	// (0x000353e5) vids_list_double_pane

0x9c1f,	// (0x000353f6) vids_list_double_pane_g1

0x9c28,	// (0x000353ff) vids_list_double_pane_t1

0x9c38,	// (0x0003540f) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0003b619) vids_list_double_pane_t

0xae9f,	// (0x00036676) main_ncimui_pane_ParamLimits

0x6ae2,	// (0x000322b9) main_ncimui_pane_g1_ParamLimits

0x6aee,	// (0x000322c5) main_ncimui_pane_g2_ParamLimits

0x6aee,	// (0x000322c5) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0003b2fe) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0003b2fe) main_ncimui_pane_g

0x9950,	// (0x00035127) main_welc_pane_g1_ParamLimits

0x9950,	// (0x00035127) main_welc_pane_g1

0x9965,	// (0x0003513c) main_welc_pane_g2_ParamLimits

0x9965,	// (0x0003513c) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0003b603) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0003b603) main_welc_pane_g

0xbc9f,	// (0x00037476) listscroll_mce_pane_ParamLimits

0xc9cb,	// (0x000381a2) wait_bar_pane_cp10

0xdd9b,	// (0x00039572) main_cale_day_pane_ParamLimits

0xdd9b,	// (0x00039572) main_cale_week_pane_ParamLimits

0xbc9f,	// (0x00037476) main_messa_pane_ParamLimits

0x4c3f,	// (0x00030416) main_clock2_btn_pane_ParamLimits

0x4c3f,	// (0x00030416) main_clock2_btn_pane

0xe566,	// (0x00039d3d) main_clock2_btn_pane_cp01_ParamLimits

0xe566,	// (0x00039d3d) main_clock2_btn_pane_cp01

0x83db,	// (0x00033bb2) list_cale_mrui_pane_ParamLimits

0x8efc,	// (0x000346d3) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0003b552) main_cf0_pane_g

0x9396,	// (0x00034b6d) area_left_week_number_pane_ParamLimits

0x93a2,	// (0x00034b79) area_top_day_name_pane_ParamLimits

0x93b5,	// (0x00034b8c) frame_month_view_pane_ParamLimits

0x93c8,	// (0x00034b9f) grid_month_view_pane_ParamLimits

0x9444,	// (0x00034c1b) frm_month_g1_ParamLimits

0x9451,	// (0x00034c28) frm_month_g2_ParamLimits

0x9464,	// (0x00034c3b) frm_month_g3_ParamLimits

0x9477,	// (0x00034c4e) frm_month_g4_ParamLimits

0x948a,	// (0x00034c61) frm_month_g5_ParamLimits

0x949d,	// (0x00034c74) frm_month_g6_ParamLimits

0x94b0,	// (0x00034c87) frm_month_g7_ParamLimits

0x94c3,	// (0x00034c9a) frm_month_g8_ParamLimits

0x94d0,	// (0x00034ca7) frm_month_g9_ParamLimits

0x94e0,	// (0x00034cb7) frm_month_g10_ParamLimits

0x94f0,	// (0x00034cc7) frm_month_g11_ParamLimits

0x9500,	// (0x00034cd7) frm_month_g12_ParamLimits

0x9512,	// (0x00034ce9) frm_month_g13_ParamLimits

0x9524,	// (0x00034cfb) frm_month_g14_ParamLimits

0x9538,	// (0x00034d0f) frm_month_g15_ParamLimits

0x954c,	// (0x00034d23) frm_month_g16_ParamLimits

0xfdd3,	// (0x0003b5aa) frm_month_g_ParamLimits

0x9560,	// (0x00034d37) cell_top_day_name_pane_t1_ParamLimits

0x9573,	// (0x00034d4a) cell_area_left_week_number_pane_g1_ParamLimits

0x957f,	// (0x00034d56) cell_area_left_week_number_pane_t1_ParamLimits

0xbd28,	// (0x000374ff) cell_month_view_pane_g1_ParamLimits

0x9592,	// (0x00034d69) cell_month_view_pane_t1_ParamLimits

0xbc97,	// (0x0003746e) main_clock2_btn_pane_g1

0x9c48,	// (0x0003541f) main_clock2_btn_pane_t1

0xbcc1,	// (0x00037498) listscroll_cmail_pane_ParamLimits

0x7a91,	// (0x00033268) main_sp_fs_email_pane_g1_ParamLimits

0x7a9d,	// (0x00033274) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0003b3fd) main_sp_fs_email_pane_g_ParamLimits

0x8800,	// (0x00033fd7) list_recal_day_pane_ParamLimits

0x8811,	// (0x00033fe8) mian_recal_day_pane_t1

0x7c69,	// (0x00033440) list_single_dyc_row_text_pane_t4_ParamLimits

0x7c69,	// (0x00033440) list_single_dyc_row_text_pane_t4

0x7cb2,	// (0x00033489) list_single_dyc_row_text_pane_t5_ParamLimits

0x7cb2,	// (0x00033489) list_single_dyc_row_text_pane_t5

0x7d28,	// (0x000334ff) list_single_dyc_row_text_pane_t6_ParamLimits

0x7d28,	// (0x000334ff) list_single_dyc_row_text_pane_t6

0xc364,	// (0x00037b3b) aid_mgn_list_cale_time_pane

0xae9f,	// (0x00036676) main_gallery2_pane_ParamLimits

0xe596,	// (0x00039d6d) main_clock2_pane_cp01_t1

0xe5a6,	// (0x00039d7d) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0003aee3) main_clock2_pane_cp01_t

0x1c5e,	// (0x0002d435) cale_week_scroll_pane_g16_ParamLimits

0x1c5e,	// (0x0002d435) cale_week_scroll_pane_g16

0xbf73,	// (0x0003774a) vorec_slider_pane

0x989b,	// (0x00035072) vidtel_button_pane_t1_ParamLimits

0x8a4c,	// (0x00034223) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8a4c,	// (0x00034223) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8a5d,	// (0x00034234) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8a5d,	// (0x00034234) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0003b500) main_fs_bigclock_clock_pane_g_ParamLimits

0x8a70,	// (0x00034247) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8a86,	// (0x0003425d) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0003b509) main_fs_bigclock_clock_pane_t_ParamLimits

0x4514,	// (0x0002fceb) main_mup3_lyrics_pane_ParamLimits

0x4514,	// (0x0002fceb) main_mup3_lyrics_pane

0x9c56,	// (0x0003542d) main_mup3_lyrics_pane_t1_ParamLimits

0x9c56,	// (0x0003542d) main_mup3_lyrics_pane_t1

0xb4e1,	// (0x00036cb8) aid_main_mp4_pane_t1_area

0xb4eb,	// (0x00036cc2) aid_main_mp4_pane_t2_area

0xb597,	// (0x00036d6e) main_mp4_pane_g7_ParamLimits

0xb597,	// (0x00036d6e) main_mp4_pane_g7

0xb5a3,	// (0x00036d7a) main_mp4_pane_g8_ParamLimits

0xb5a3,	// (0x00036d7a) main_mp4_pane_g8

0x5130,	// (0x00030907) aid_call6_pane_g1_size

0x977b,	// (0x00034f52) list_double_large_graphic_phob2_other_pane_ParamLimits

0x977b,	// (0x00034f52) list_double_large_graphic_phob2_other_pane

0xc31c,	// (0x00037af3) list_double_large_graphic_phob2_other_pane_g1

0xae30,	// (0x00036607) list_highlight_pane_cp026

0xbcc1,	// (0x00037498) main_welc_pane_ParamLimits

0x79fa,	// (0x000331d1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x79fa,	// (0x000331d1) main_sp_fs_ctrlbar_pane_g3

0x7a14,	// (0x000331eb) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7a14,	// (0x000331eb) main_sp_fs_ctrlbar_pane_g4

0x7a48,	// (0x0003321f) toolbar2_fixed_button_pane_cp01

0x7a53,	// (0x0003322a) toolbar2_fixed_button_pane_cp02

0x7a60,	// (0x00033237) toolbar2_fixed_button_pane_cp03

0x98f5,	// (0x000350cc) list_welc_entry_pane_ParamLimits

0x98f5,	// (0x000350cc) list_welc_entry_pane

0x997a,	// (0x00035151) main_welc_pane_g3_ParamLimits

0x997a,	// (0x00035151) main_welc_pane_g3

0x99d1,	// (0x000351a8) main_welc_pane_t2_ParamLimits

0x99d1,	// (0x000351a8) main_welc_pane_t2

0x99ec,	// (0x000351c3) main_welc_pane_t3_ParamLimits

0x99ec,	// (0x000351c3) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0003b60c) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0003b60c) main_welc_pane_t

0x9b1c,	// (0x000352f3) welc_button_pane_ParamLimits

0x9b1c,	// (0x000352f3) welc_button_pane

0x9b9e,	// (0x00035375) welc_service_logo_pane_ParamLimits

0x9b9e,	// (0x00035375) welc_service_logo_pane

0x9c72,	// (0x00035449) list_single_welc_entry_pane_ParamLimits

0x9c72,	// (0x00035449) list_single_welc_entry_pane

0x9c83,	// (0x0003545a) list_single_welc_entry_pane_g1

0x9c8b,	// (0x00035462) list_single_welc_entry_pane_t1

0x9c99,	// (0x00035470) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0003b61e) list_single_welc_entry_pane_t

0xae30,	// (0x00036607) bg_button_pane_cp035

0x9ca7,	// (0x0003547e) welc_button_pane_t1

0x9cb5,	// (0x0003548c) welc_service_logo_pane_g1

0x9cbe,	// (0x00035495) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0003b623) welc_service_logo_pane_g

0xaead,	// (0x00036684) main_int_radio_pane

0xbe11,	// (0x000375e8) list_single_fs_dyc_pane_g1

0x9665,	// (0x00034e3c) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9665,	// (0x00034e3c) list_double_large_graphic_phob2_pane_g3

0x9671,	// (0x00034e48) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9671,	// (0x00034e48) list_double_large_graphic_phob2_pane_g4

0x9cc7,	// (0x0003549e) main_int_radio1_pane_ParamLimits

0x9cc7,	// (0x0003549e) main_int_radio1_pane

0x9ce4,	// (0x000354bb) find_pane_cp02

0x9ced,	// (0x000354c4) input_focus_pane_cp12_ParamLimits

0x9ced,	// (0x000354c4) input_focus_pane_cp12

0x9cfd,	// (0x000354d4) input_focus_pane_cp13_ParamLimits

0x9cfd,	// (0x000354d4) input_focus_pane_cp13

0x9d11,	// (0x000354e8) input_focus_pane_cp14_ParamLimits

0x9d11,	// (0x000354e8) input_focus_pane_cp14

0x9d25,	// (0x000354fc) int_radio1_listscroll_pane

0x9d2f,	// (0x00035506) main_int_radio1_pane_g1_ParamLimits

0x9d2f,	// (0x00035506) main_int_radio1_pane_g1

0x9d47,	// (0x0003551e) main_int_radio1_pane_t1_ParamLimits

0x9d47,	// (0x0003551e) main_int_radio1_pane_t1

0x9d62,	// (0x00035539) main_int_radio1_pane_t2_ParamLimits

0x9d62,	// (0x00035539) main_int_radio1_pane_t2

0x9d7d,	// (0x00035554) main_int_radio1_pane_t3_ParamLimits

0x9d7d,	// (0x00035554) main_int_radio1_pane_t3

0x9d98,	// (0x0003556f) main_int_radio1_pane_t4_ParamLimits

0x9d98,	// (0x0003556f) main_int_radio1_pane_t4

0x9daa,	// (0x00035581) main_int_radio1_pane_t5_ParamLimits

0x9daa,	// (0x00035581) main_int_radio1_pane_t5

0x9dbc,	// (0x00035593) main_int_radio1_pane_t6_ParamLimits

0x9dbc,	// (0x00035593) main_int_radio1_pane_t6

0x9dd1,	// (0x000355a8) main_int_radio1_pane_t7_ParamLimits

0x9dd1,	// (0x000355a8) main_int_radio1_pane_t7

0x9de6,	// (0x000355bd) main_int_radio1_pane_t8_ParamLimits

0x9de6,	// (0x000355bd) main_int_radio1_pane_t8

0x9e05,	// (0x000355dc) main_int_radio1_pane_t9_ParamLimits

0x9e05,	// (0x000355dc) main_int_radio1_pane_t9

0x9e17,	// (0x000355ee) main_int_radio1_pane_t10_ParamLimits

0x9e17,	// (0x000355ee) main_int_radio1_pane_t10

0x9e3d,	// (0x00035614) main_int_radio1_pane_t11_ParamLimits

0x9e3d,	// (0x00035614) main_int_radio1_pane_t11

0x9e63,	// (0x0003563a) main_int_radio1_pane_t12_ParamLimits

0x9e63,	// (0x0003563a) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0003b628) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0003b628) main_int_radio1_pane_t

0x9e75,	// (0x0003564c) int_radio_list_pane

0x9607,	// (0x00034dde) scroll_pane_cp037

0x9e7d,	// (0x00035654) list_double_large_graphic_int_radio_pane_ParamLimits

0x9e7d,	// (0x00035654) list_double_large_graphic_int_radio_pane

0x9e95,	// (0x0003566c) list_double_large_graphic_int_radio_pane_g1

0x9e9e,	// (0x00035675) list_double_large_graphic_int_radio_pane_t1

0x9eac,	// (0x00035683) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0003b641) list_double_large_graphic_int_radio_pane_t

0xae30,	// (0x00036607) list_highlight_pane_cp027

0x990f,	// (0x000350e6) main_button_pane_4

0x998d,	// (0x00035164) main_welc_pane_g4_ParamLimits

0x998d,	// (0x00035164) main_welc_pane_g4

0x9a05,	// (0x000351dc) main_welc_pane_t4_ParamLimits

0x9a05,	// (0x000351dc) main_welc_pane_t4

0x9a1c,	// (0x000351f3) main_welc_pane_t5_ParamLimits

0x9a1c,	// (0x000351f3) main_welc_pane_t5

0x9a59,	// (0x00035230) main_welc_pane_t6_ParamLimits

0x9a59,	// (0x00035230) main_welc_pane_t6

0x9b33,	// (0x0003530a) welc_button_pane_2_ParamLimits

0x9b33,	// (0x0003530a) welc_button_pane_2

0x9b4f,	// (0x00035326) welc_button_pane_3_ParamLimits

0x9b4f,	// (0x00035326) welc_button_pane_3

0x9b6e,	// (0x00035345) welc_button_pane_4

0x9b76,	// (0x0003534d) welc_button_pane_5_ParamLimits

0x9b76,	// (0x0003534d) welc_button_pane_5

0x03ab,	// (0x0002bb82) main_popup_welc_pane

0x9ec9,	// (0x000356a0) main_welc_sk_g3

0x9ed3,	// (0x000356aa) main_welc_sk_g4

0x9edd,	// (0x000356b4) main_welc_sk_t3

0x9eed,	// (0x000356c4) main_welc_sk_t4

0x9efd,	// (0x000356d4) popup_welc_pane_t4

0x9f0b,	// (0x000356e2) popup_welc_pane_t5

0x9f19,	// (0x000356f0) popup_welc_pane_t6

0xaead,	// (0x00036684) main_acti_pane

0xae30,	// (0x00036607) main_sso_pane

0x9f57,	// (0x0003572e) sso_body_pane_ParamLimits

0x9f57,	// (0x0003572e) sso_body_pane

0x9f6b,	// (0x00035742) sso_logo_pane_ParamLimits

0x9f6b,	// (0x00035742) sso_logo_pane

0x9f9b,	// (0x00035772) sso_sk_pane_ParamLimits

0x9f9b,	// (0x00035772) sso_sk_pane

0xbfa9,	// (0x00037780) main_sso_logo_pane_g1

0x9fad,	// (0x00035784) sso_sk_pane_t1_ParamLimits

0x9fad,	// (0x00035784) sso_sk_pane_t1

0x9fc7,	// (0x0003579e) sso_sk_pane_t2_ParamLimits

0x9fc7,	// (0x0003579e) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0003b646) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0003b646) sso_sk_pane_t

0x9fdd,	// (0x000357b4) aid_sso_gap

0x9fe6,	// (0x000357bd) aid_sso_txt1

0x9ff0,	// (0x000357c7) aid_sso_txt2

0x9ffa,	// (0x000357d1) aid_sso_txt3

0x0002,

0xfe74,	// (0x0003b64b) aid_sso_txt

0xa004,	// (0x000357db) aid_sso_widget

0xa062,	// (0x00035839) sso_btn_pane_ParamLimits

0xa062,	// (0x00035839) sso_btn_pane

0xa0ea,	// (0x000358c1) sso_option_pane_ParamLimits

0xa0ea,	// (0x000358c1) sso_option_pane

0xa16a,	// (0x00035941) sso_query_pane_ParamLimits

0xa16a,	// (0x00035941) sso_query_pane

0xa1c0,	// (0x00035997) sso_query_pane_cp01_ParamLimits

0xa1c0,	// (0x00035997) sso_query_pane_cp01

0xa21a,	// (0x000359f1) sso_t_hdr_pane_ParamLimits

0xa21a,	// (0x000359f1) sso_t_hdr_pane

0xa244,	// (0x00035a1b) sso_t_nml_pane_ParamLimits

0xa244,	// (0x00035a1b) sso_t_nml_pane

0xa29a,	// (0x00035a71) sso_t_sub_pane

0x9f78,	// (0x0003574f) sso_popup_window_ParamLimits

0x9f78,	// (0x0003574f) sso_popup_window

0xa00e,	// (0x000357e5) sso_apps_pane_ParamLimits

0xa00e,	// (0x000357e5) sso_apps_pane

0xa038,	// (0x0003580f) sso_body_pane_g1

0xa042,	// (0x00035819) sso_body_pane_t1

0xa052,	// (0x00035829) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0003b652) sso_body_pane_t

0xa0b4,	// (0x0003588b) sso_btn_pane_cp01_ParamLimits

0xa0b4,	// (0x0003588b) sso_btn_pane_cp01

0xa13e,	// (0x00035915) sso_prog_pane_ParamLimits

0xa13e,	// (0x00035915) sso_prog_pane

0xa2af,	// (0x00035a86) sso_t_hdr_pane_t1_ParamLimits

0xa2af,	// (0x00035a86) sso_t_hdr_pane_t1

0xa2c2,	// (0x00035a99) input_focus_pane_cp10_ParamLimits

0xa2c2,	// (0x00035a99) input_focus_pane_cp10

0xa2dc,	// (0x00035ab3) sso_query_pane_t1_ParamLimits

0xa2dc,	// (0x00035ab3) sso_query_pane_t1

0xa2ef,	// (0x00035ac6) sso_query_pane_t2_ParamLimits

0xa2ef,	// (0x00035ac6) sso_query_pane_t2

0xa30a,	// (0x00035ae1) sso_query_pane_t3_ParamLimits

0xa30a,	// (0x00035ae1) sso_query_pane_t3

0xa334,	// (0x00035b0b) sso_query_pane_t4_ParamLimits

0xa334,	// (0x00035b0b) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0003b657) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0003b657) sso_query_pane_t

0xae30,	// (0x00036607) bg_button_pane_cp22

0x9eba,	// (0x00035691) sso_btn_pane_t1

0xa358,	// (0x00035b2f) sso_t_nml_pane_t1_ParamLimits

0xa358,	// (0x00035b2f) sso_t_nml_pane_t1

0xa373,	// (0x00035b4a) sso_option_row_pane_ParamLimits

0xa373,	// (0x00035b4a) sso_option_row_pane

0xa386,	// (0x00035b5d) sso_t_sub_pane_t1_ParamLimits

0xa386,	// (0x00035b5d) sso_t_sub_pane_t1

0xbcc1,	// (0x00037498) bg_popup_window_pane_cp11_ParamLimits

0xbcc1,	// (0x00037498) bg_popup_window_pane_cp11

0xa3a3,	// (0x00035b7a) popup_sk_window_cp01_ParamLimits

0xa3a3,	// (0x00035b7a) popup_sk_window_cp01

0xa3b0,	// (0x00035b87) sso_popup_body_pane_ParamLimits

0xa3b0,	// (0x00035b87) sso_popup_body_pane

0xa3bd,	// (0x00035b94) scroll_pane_cp21_ParamLimits

0xa3bd,	// (0x00035b94) scroll_pane_cp21

0xa3ca,	// (0x00035ba1) sso_popup_body_t_pane_ParamLimits

0xa3ca,	// (0x00035ba1) sso_popup_body_t_pane

0xa3d7,	// (0x00035bae) sso_popup_body_t_hdr_pane_ParamLimits

0xa3d7,	// (0x00035bae) sso_popup_body_t_hdr_pane

0xa3ea,	// (0x00035bc1) sso_popup_body_t_nml_pane_ParamLimits

0xa3ea,	// (0x00035bc1) sso_popup_body_t_nml_pane

0xa408,	// (0x00035bdf) sso_popup_body_t_sub_pane_ParamLimits

0xa408,	// (0x00035bdf) sso_popup_body_t_sub_pane

0xa42b,	// (0x00035c02) sso_popup_body_t_hdr_pane_t1

0xa43b,	// (0x00035c12) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa43b,	// (0x00035c12) sso_popup_body_t_nml_pane_t1

0xa474,	// (0x00035c4b) sso_popup_body_t_sub_pane_t1_ParamLimits

0xa474,	// (0x00035c4b) sso_popup_body_t_sub_pane_t1

0xbfa9,	// (0x00037780) sso_prog_pane_g1

0xa499,	// (0x00035c70) sso_apps_pane_comp1_ParamLimits

0xa499,	// (0x00035c70) sso_apps_pane_comp1

0xa4b3,	// (0x00035c8a) sso_apps_pane_comp1_g1

0xa4bb,	// (0x00035c92) sso_apps_pane_comp1_t1

0xa4d7,	// (0x00035cae) sso_option_row_pane_g1

0xa4df,	// (0x00035cb6) sso_option_row_pane_t1

0x98e2,	// (0x000350b9) bg_welc_area_ParamLimits

0x98e2,	// (0x000350b9) bg_welc_area

0x9a97,	// (0x0003526e) sso_t_hdr_pane_a_t1_ParamLimits

0x9a97,	// (0x0003526e) sso_t_hdr_pane_a_t1

0x9ab2,	// (0x00035289) sso_t_nml_pane_a_t1_ParamLimits

0x9ab2,	// (0x00035289) sso_t_nml_pane_a_t1

0x9ae1,	// (0x000352b8) sso_t_sub_pane_a_t1_ParamLimits

0x9ae1,	// (0x000352b8) sso_t_sub_pane_a_t1

0x9eba,	// (0x00035691) sso_btn_pane_t1_copy1

0xae30,	// (0x00036607) welc_button_pane_2_comp1

0x9f27,	// (0x000356fe) sso_t_hdr_pane_p_t1

0x9f37,	// (0x0003570e) sso_t_nml_pane_p_t1

0x9f47,	// (0x0003571e) sso_t_sub_pane_p_t1

0x7f2e,	// (0x00033705) list_cmail_pane_ParamLimits

0x9b8c,	// (0x00035363) welc_button_pane_cp01_ParamLimits

0x9b8c,	// (0x00035363) welc_button_pane_cp01

0xae30,	// (0x00036607) main_att_pane

0xa4c9,	// (0x00035ca0) input_focus_pane_cp10_t1

0xa4df,	// (0x00035cb6) sso_option_row_pane_t1_ParamLimits

0xa4f5,	// (0x00035ccc) main_att_body_pane_ParamLimits

0xa4f5,	// (0x00035ccc) main_att_body_pane

0xa52a,	// (0x00035d01) att_btn_pane_ParamLimits

0xa52a,	// (0x00035d01) att_btn_pane

0xa54f,	// (0x00035d26) att_btn_pane_cp01_ParamLimits

0xa54f,	// (0x00035d26) att_btn_pane_cp01

0xa56f,	// (0x00035d46) att_li_srv_pane_ParamLimits

0xa56f,	// (0x00035d46) att_li_srv_pane

0xa58c,	// (0x00035d63) att_opt_pane_ParamLimits

0xa58c,	// (0x00035d63) att_opt_pane

0xa5d8,	// (0x00035daf) att_query_pane_ParamLimits

0xa5d8,	// (0x00035daf) att_query_pane

0xa624,	// (0x00035dfb) att_query_pane_cp01_ParamLimits

0xa624,	// (0x00035dfb) att_query_pane_cp01

0xa670,	// (0x00035e47) att_t_hdr_pane_ParamLimits

0xa670,	// (0x00035e47) att_t_hdr_pane

0xa6c8,	// (0x00035e9f) att_t_nml_pane_ParamLimits

0xa6c8,	// (0x00035e9f) att_t_nml_pane

0xa701,	// (0x00035ed8) att_t_nml_pane_cp01_ParamLimits

0xa701,	// (0x00035ed8) att_t_nml_pane_cp01

0xa72d,	// (0x00035f04) att_t_nmlb_pane_ParamLimits

0xa72d,	// (0x00035f04) att_t_nmlb_pane

0xa74a,	// (0x00035f21) att_term_pane_ParamLimits

0xa74a,	// (0x00035f21) att_term_pane

0xa796,	// (0x00035f6d) main_att_body_pane_g1_ParamLimits

0xa796,	// (0x00035f6d) main_att_body_pane_g1

0xa7cd,	// (0x00035fa4) att_t_hdr_pane_t1_ParamLimits

0xa7cd,	// (0x00035fa4) att_t_hdr_pane_t1

0xa7e6,	// (0x00035fbd) att_t_nml_pane_t1_ParamLimits

0xa7e6,	// (0x00035fbd) att_t_nml_pane_t1

0xa80b,	// (0x00035fe2) att_btn_pane_t1

0xae30,	// (0x00036607) bg_button_pane_cp23

0xa81b,	// (0x00035ff2) att_li_srv_row_pane_ParamLimits

0xa81b,	// (0x00035ff2) att_li_srv_row_pane

0xa82b,	// (0x00036002) att_t_nmlb_pane_t1_ParamLimits

0xa82b,	// (0x00036002) att_t_nmlb_pane_t1

0xa844,	// (0x0003601b) att_query_pane_t1

0xa853,	// (0x0003602a) att_query_pane_t2

0xa862,	// (0x00036039) att_query_pane_t3

0x0002,

0xfe89,	// (0x0003b660) att_query_pane_t

0xa871,	// (0x00036048) input_focus_pane_cp11

0xa87a,	// (0x00036051) att_term_pane_t1_ParamLimits

0xa87a,	// (0x00036051) att_term_pane_t1

0xae30,	// (0x00036607) att_opt_row_pane

0xa897,	// (0x0003606e) att_opt_row_pane_g1

0xa89f,	// (0x00036076) att_opt_row_pane_t1_ParamLimits

0xa89f,	// (0x00036076) att_opt_row_pane_t1

0xa8b8,	// (0x0003608f) att_li_srv_row_pane_g1

0xa8c0,	// (0x00036097) att_li_srv_row_pane_t1

0xa8d5,	// (0x000360ac) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0003b667) att_li_srv_row_pane_t

0xae30,	// (0x00036607) main_call7_pane

0xae30,	// (0x00036607) main_vod_pane

0xa29a,	// (0x00035a71) sso_t_sub_pane_ParamLimits

0xa50b,	// (0x00035ce2) att_btn_emg_pane_ParamLimits

0xa50b,	// (0x00035ce2) att_btn_emg_pane

0xa8c0,	// (0x00036097) att_li_srv_row_pane_t1_ParamLimits

0xa8d5,	// (0x000360ac) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0003b667) att_li_srv_row_pane_t_ParamLimits

0xa8ea,	// (0x000360c1) att_btn_close_pane_g1

0xae30,	// (0x00036607) bg_button_pane_cp24

0xa8f2,	// (0x000360c9) main_vod_body_pane_ParamLimits

0xa8f2,	// (0x000360c9) main_vod_body_pane

0xa906,	// (0x000360dd) main_vod_body_pane_g1_ParamLimits

0xa906,	// (0x000360dd) main_vod_body_pane_g1

0xa93a,	// (0x00036111) scroll_pane_cp24_ParamLimits

0xa93a,	// (0x00036111) scroll_pane_cp24

0xa988,	// (0x0003615f) vod_btn_pane_ParamLimits

0xa988,	// (0x0003615f) vod_btn_pane

0xa9cc,	// (0x000361a3) vod_det_pane_ParamLimits

0xa9cc,	// (0x000361a3) vod_det_pane

0xa9fe,	// (0x000361d5) vod_logo_g1_ParamLimits

0xa9fe,	// (0x000361d5) vod_logo_g1

0xaa3c,	// (0x00036213) vod_opt_pane_ParamLimits

0xaa3c,	// (0x00036213) vod_opt_pane

0xaa6f,	// (0x00036246) vod_opt_pane_cp01_ParamLimits

0xaa6f,	// (0x00036246) vod_opt_pane_cp01

0xaa9b,	// (0x00036272) vod_query_pane_ParamLimits

0xaa9b,	// (0x00036272) vod_query_pane

0xaac8,	// (0x0003629f) vod_query_pane_cp01_ParamLimits

0xaac8,	// (0x0003629f) vod_query_pane_cp01

0xaad4,	// (0x000362ab) vod_t_nml_pane_ParamLimits

0xaad4,	// (0x000362ab) vod_t_nml_pane

0xab81,	// (0x00036358) vod_t_nml_pane_cp01_ParamLimits

0xab81,	// (0x00036358) vod_t_nml_pane_cp01

0xabbd,	// (0x00036394) vod_t_sub_pane_ParamLimits

0xabbd,	// (0x00036394) vod_t_sub_pane

0xabf2,	// (0x000363c9) vod_t_sub_pane_cp01_ParamLimits

0xabf2,	// (0x000363c9) vod_t_sub_pane_cp01

0xa871,	// (0x00036048) vod_query_field_pane

0xa844,	// (0x0003601b) vod_query_pane_t1

0xae30,	// (0x00036607) bg_button_pane_cp25

0xa80b,	// (0x00035fe2) sso_btn_pane_t1_copy2

0xac1e,	// (0x000363f5) vod_t_nml_pane_t1_ParamLimits

0xac1e,	// (0x000363f5) vod_t_nml_pane_t1

0xac4f,	// (0x00036426) vod_opt_row_pane_ParamLimits

0xac4f,	// (0x00036426) vod_opt_row_pane

0xac61,	// (0x00036438) vod_t_sub_pane_t1_ParamLimits

0xac61,	// (0x00036438) vod_t_sub_pane_t1

0xac7a,	// (0x00036451) vod_det_cell_pane_ParamLimits

0xac7a,	// (0x00036451) vod_det_cell_pane

0xae30,	// (0x00036607) input_focus_pane_cp15

0xac8e,	// (0x00036465) vod_query_field_pane_t1

0xac9c,	// (0x00036473) vod_opt_row_pane_g1_ParamLimits

0xac9c,	// (0x00036473) vod_opt_row_pane_g1

0xaca8,	// (0x0003647f) vod_opt_row_pane_t1_ParamLimits

0xaca8,	// (0x0003647f) vod_opt_row_pane_t1

0xaccd,	// (0x000364a4) vod_det_cell_field_pane

0xacd6,	// (0x000364ad) vod_det_cell_pane_g1

0xa844,	// (0x0003601b) vod_det_cell_pane_t1

0xae30,	// (0x00036607) input_focus_pane_cp16

0xac8e,	// (0x00036465) vod_det_cell_field_pane_t1

0xacde,	// (0x000364b5) call7_btn_grp_pane_ParamLimits

0xacde,	// (0x000364b5) call7_btn_grp_pane

0xacf8,	// (0x000364cf) call7_bubble_pane_ParamLimits

0xacf8,	// (0x000364cf) call7_bubble_pane

0xad0f,	// (0x000364e6) cell_call7_btn_pane_ParamLimits

0xad0f,	// (0x000364e6) cell_call7_btn_pane

0xad22,	// (0x000364f9) call7_pane_g1_ParamLimits

0xad22,	// (0x000364f9) call7_pane_g1

0xad31,	// (0x00036508) call7_windows_conf_pane_ParamLimits

0xad31,	// (0x00036508) call7_windows_conf_pane

0xad4b,	// (0x00036522) popup_call7_1st_window_ParamLimits

0xad4b,	// (0x00036522) popup_call7_1st_window

0xad5c,	// (0x00036533) popup_call7_2nd_window_ParamLimits

0xad5c,	// (0x00036533) popup_call7_2nd_window

0xad6d,	// (0x00036544) popup_call7_3rd_window_ParamLimits

0xad6d,	// (0x00036544) popup_call7_3rd_window

0xae30,	// (0x00036607) bg_button_pane_cp26

0x9152,	// (0x00034929) cell_call7_btn_pane_g1

0xad7e,	// (0x00036555) cell_call7_btn_pane_t1

0xae30,	// (0x00036607) bg_popup_window_pane_cp12

0xad8d,	// (0x00036564) popup_call7_1st_window_g1

0xad95,	// (0x0003656c) popup_call7_1st_window_g2

0xad9d,	// (0x00036574) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0003b66c) popup_call7_1st_window_g

0xada5,	// (0x0003657c) popup_call7_1st_window_t1

0xadb4,	// (0x0003658b) popup_call7_1st_window_t2

0xadc2,	// (0x00036599) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0003b673) popup_call7_1st_window_t

0xae30,	// (0x00036607) bg_popup_window_pane_cp13

0xadd0,	// (0x000365a7) popup_call7_2nd_window_g1

0xadd8,	// (0x000365af) popup_call7_2nd_window_g2

0xade0,	// (0x000365b7) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0003b67a) popup_call7_2nd_window_g

0xade8,	// (0x000365bf) popup_call7_2nd_window_t1

0xae30,	// (0x00036607) bg_popup_window_pane_cp14

0xadf7,	// (0x000365ce) call7_list_conf_pane

0xadff,	// (0x000365d6) call7_list_conf_row_pane_ParamLimits

0xadff,	// (0x000365d6) call7_list_conf_row_pane

0xae12,	// (0x000365e9) call7_list_conf_row_pane_g1

0xae1a,	// (0x000365f1) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0003b681) call7_list_conf_row_pane_g

0xae22,	// (0x000365f9) call7_list_conf_row_pane_t1

0xae30,	// (0x00036607) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Normal

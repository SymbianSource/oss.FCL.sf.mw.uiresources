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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00071861 };

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
0x1b9e,	// (0x000733ff) Screen

0x1ba8,	// (0x00073409) application_window

0x1be8,	// (0x00073449) area_bottom_pane_ParamLimits

0x1be8,	// (0x00073449) area_bottom_pane

0x1c19,	// (0x0007347a) area_top_pane_ParamLimits

0x1c19,	// (0x0007347a) area_top_pane

0xad36,	// (0x0007c597) call_video_uplink_pane_ParamLimits

0xad36,	// (0x0007c597) call_video_uplink_pane

0x1c93,	// (0x000734f4) main_pane_ParamLimits

0x1c93,	// (0x000734f4) main_pane

0xbf4f,	// (0x0007d7b0) context_pane

0x62ae,	// (0x00077b0f) navi_pane

0x62d6,	// (0x00077b37) popup_cale_events_window_ParamLimits

0x62d6,	// (0x00077b37) popup_cale_events_window

0xbf62,	// (0x0007d7c3) popup_mup_playback_window

0x62ed,	// (0x00077b4e) signal_pane

0x27ff,	// (0x00074060) main_browser_pane

0x3128,	// (0x00074989) main_burst_pane

0x6044,	// (0x000778a5) main_calc_pane

0xbeed,	// (0x0007d74e) main_cale_day_pane

0x2ab5,	// (0x00074316) main_cale_month_pane

0xbeed,	// (0x0007d74e) main_cale_week_pane

0x3128,	// (0x00074989) main_call_pane

0x2272,	// (0x00073ad3) main_call_poc_pane

0x3128,	// (0x00074989) main_camera_pane

0x3128,	// (0x00074989) main_chi_dic_pane

0x4b61,	// (0x000763c2) main_clock_pane

0x2272,	// (0x00073ad3) main_fmradio_pane

0x3128,	// (0x00074989) main_graph_messa_pane

0x2272,	// (0x00073ad3) main_help_pane

0x27ff,	// (0x00074060) main_im_pane

0x24cd,	// (0x00073d2e) main_image_pane_ParamLimits

0x24cd,	// (0x00073d2e) main_image_pane

0x2272,	// (0x00073ad3) main_location2_pane

0x3128,	// (0x00074989) main_location_pane

0x24cd,	// (0x00073d2e) main_messa_pane

0x2272,	// (0x00073ad3) main_mp2_pane

0x3128,	// (0x00074989) main_mp_pane

0x2272,	// (0x00073ad3) main_msg_pane

0x2272,	// (0x00073ad3) main_mup_eq_pane

0x2272,	// (0x00073ad3) main_mup_pane

0x27ff,	// (0x00074060) main_notes_pane

0x2272,	// (0x00073ad3) main_pec_pane

0x2272,	// (0x00073ad3) main_phob_pane

0x2272,	// (0x00073ad3) main_pinb_pane

0x2272,	// (0x00073ad3) main_postcard_pane

0x2272,	// (0x00073ad3) main_qdial_pane

0x3128,	// (0x00074989) main_skin_pane

0x2272,	// (0x00073ad3) main_smil2_pane

0x3128,	// (0x00074989) main_smil_pane

0x3128,	// (0x00074989) main_video_pane

0x3128,	// (0x00074989) main_video_tele_pane

0x24cd,	// (0x00073d2e) main_viewer_pane_ParamLimits

0x24cd,	// (0x00073d2e) main_viewer_pane

0x3128,	// (0x00074989) main_vorec_pane

0x6096,	// (0x000778f7) popup_blid_sat_info_window_ParamLimits

0x6096,	// (0x000778f7) popup_blid_sat_info_window

0x60f4,	// (0x00077955) popup_dyc_status_message_window_ParamLimits

0x60f4,	// (0x00077955) popup_dyc_status_message_window

0x610a,	// (0x0007796b) popup_grid_large_graphic_window_ParamLimits

0x610a,	// (0x0007796b) popup_grid_large_graphic_window

0x61a4,	// (0x00077a05) popup_loc_request_window_ParamLimits

0x61a4,	// (0x00077a05) popup_loc_request_window

0x6288,	// (0x00077ae9) popup_wml_address_window_ParamLimits

0x6288,	// (0x00077ae9) popup_wml_address_window

0x5ed8,	// (0x00077739) call_muted_g1

0x5bfe,	// (0x0007745f) popup_call_audio_conf_window_ParamLimits

0x5bfe,	// (0x0007745f) popup_call_audio_conf_window

0x5ee8,	// (0x00077749) popup_call_audio_first_window_ParamLimits

0x5ee8,	// (0x00077749) popup_call_audio_first_window

0x5f46,	// (0x000777a7) popup_call_audio_in_window_ParamLimits

0x5f46,	// (0x000777a7) popup_call_audio_in_window

0x5f72,	// (0x000777d3) popup_call_audio_out_window_ParamLimits

0x5f72,	// (0x000777d3) popup_call_audio_out_window

0x5fa0,	// (0x00077801) popup_call_audio_second_window_ParamLimits

0x5fa0,	// (0x00077801) popup_call_audio_second_window

0x5fe6,	// (0x00077847) popup_call_audio_wait_window_ParamLimits

0x5fe6,	// (0x00077847) popup_call_audio_wait_window

0x6019,	// (0x0007787a) popup_number_entry_window_ParamLimits

0x6019,	// (0x0007787a) popup_number_entry_window

0x1e09,	// (0x0007366a) bg_popup_call_pane_cp05_ParamLimits

0x1e09,	// (0x0007366a) bg_popup_call_pane_cp05

0x1e29,	// (0x0007368a) popup_number_entry_window_t1

0x1e3c,	// (0x0007369d) popup_number_entry_window_t2

0x1e4e,	// (0x000736af) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0008092b) popup_number_entry_window_t

0x1e94,	// (0x000736f5) text_title_cp2

0x1ea7,	// (0x00073708) bg_popup_call_pane_cp_ParamLimits

0x1ea7,	// (0x00073708) bg_popup_call_pane_cp

0x1eb5,	// (0x00073716) call_thumbnail_pane

0x1ebd,	// (0x0007371e) popup_call_audio_in_window_g1_ParamLimits

0x1ebd,	// (0x0007371e) popup_call_audio_in_window_g1

0x1ec9,	// (0x0007372a) popup_call_audio_in_window_g2_ParamLimits

0x1ec9,	// (0x0007372a) popup_call_audio_in_window_g2

0x1ed5,	// (0x00073736) popup_call_audio_in_window_g3_ParamLimits

0x1ed5,	// (0x00073736) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00080934) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00080934) popup_call_audio_in_window_g

0x1ee1,	// (0x00073742) popup_call_audio_in_window_t1_ParamLimits

0x1ee1,	// (0x00073742) popup_call_audio_in_window_t1

0x1efc,	// (0x0007375d) popup_call_audio_in_window_t2_ParamLimits

0x1efc,	// (0x0007375d) popup_call_audio_in_window_t2

0x1f17,	// (0x00073778) popup_call_audio_in_window_t3_ParamLimits

0x1f17,	// (0x00073778) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0008093b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0008093b) popup_call_audio_in_window_t

0x1ea7,	// (0x00073708) bg_popup_call_pane_cp01_ParamLimits

0x1ea7,	// (0x00073708) bg_popup_call_pane_cp01

0x1eb5,	// (0x00073716) call_thumbnail_pane_cp02

0x1f2a,	// (0x0007378b) call_type_pane_cp022

0x1f32,	// (0x00073793) popup_call_audio_out_window_g1_ParamLimits

0x1f32,	// (0x00073793) popup_call_audio_out_window_g1

0x1f44,	// (0x000737a5) popup_call_audio_out_window_g2_ParamLimits

0x1f44,	// (0x000737a5) popup_call_audio_out_window_g2

0x1f50,	// (0x000737b1) popup_call_audio_out_window_g3_ParamLimits

0x1f50,	// (0x000737b1) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00080942) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00080942) popup_call_audio_out_window_g

0x1f62,	// (0x000737c3) popup_call_audio_out_window_t1_ParamLimits

0x1f62,	// (0x000737c3) popup_call_audio_out_window_t1

0x1f7a,	// (0x000737db) popup_call_audio_out_window_t2_ParamLimits

0x1f7a,	// (0x000737db) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00080949) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00080949) popup_call_audio_out_window_t

0x1f8f,	// (0x000737f0) bg_popup_call_pane_ParamLimits

0x1f8f,	// (0x000737f0) bg_popup_call_pane

0x2013,	// (0x00073874) call_thumbnail_pane_cp_ParamLimits

0x2013,	// (0x00073874) call_thumbnail_pane_cp

0x2037,	// (0x00073898) call_type_pane_cp01_ParamLimits

0x2037,	// (0x00073898) call_type_pane_cp01

0x207b,	// (0x000738dc) popup_call_audio_first_window_g1_ParamLimits

0x207b,	// (0x000738dc) popup_call_audio_first_window_g1

0x20c7,	// (0x00073928) popup_call_audio_first_window_g2_ParamLimits

0x20c7,	// (0x00073928) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0008094e) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0008094e) popup_call_audio_first_window_g

0x210b,	// (0x0007396c) popup_call_audio_first_window_t1_ParamLimits

0x210b,	// (0x0007396c) popup_call_audio_first_window_t1

0x21b7,	// (0x00073a18) popup_call_audio_first_window_t4_ParamLimits

0x21b7,	// (0x00073a18) popup_call_audio_first_window_t4

0x2243,	// (0x00073aa4) popup_call_audio_first_window_t5_ParamLimits

0x2243,	// (0x00073aa4) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00080953) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00080953) popup_call_audio_first_window_t

0x2272,	// (0x00073ad3) bg_popup_call_pane_cp02

0x227c,	// (0x00073add) call_type_pane_cp023

0x2284,	// (0x00073ae5) popup_call_audio_wait_window_g1

0x228c,	// (0x00073aed) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008095a) popup_call_audio_wait_window_g

0x2294,	// (0x00073af5) popup_call_audio_wait_window_t3

0x22a2,	// (0x00073b03) bg_popup_call_pane_cp03_ParamLimits

0x22a2,	// (0x00073b03) bg_popup_call_pane_cp03

0x2302,	// (0x00073b63) call_thumbnail_pane_cp011_ParamLimits

0x2302,	// (0x00073b63) call_thumbnail_pane_cp011

0x230e,	// (0x00073b6f) call_type_pane_cp034_ParamLimits

0x230e,	// (0x00073b6f) call_type_pane_cp034

0x234a,	// (0x00073bab) popup_call_audio_second_window_g1_ParamLimits

0x234a,	// (0x00073bab) popup_call_audio_second_window_g1

0x2386,	// (0x00073be7) popup_call_audio_second_window_g2_ParamLimits

0x2386,	// (0x00073be7) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0008095f) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0008095f) popup_call_audio_second_window_g

0x23c2,	// (0x00073c23) popup_call_audio_second_window_t1_ParamLimits

0x23c2,	// (0x00073c23) popup_call_audio_second_window_t1

0x2443,	// (0x00073ca4) popup_call_audio_second_window_t2_ParamLimits

0x2443,	// (0x00073ca4) popup_call_audio_second_window_t2

0x2479,	// (0x00073cda) popup_call_audio_second_window_t3_ParamLimits

0x2479,	// (0x00073cda) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00080964) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00080964) popup_call_audio_second_window_t

0x2272,	// (0x00073ad3) bg_popup_call_pane_cp04

0x24af,	// (0x00073d10) list_conf_pane

0x24b7,	// (0x00073d18) popup_call_audio_conf_window_t1

0x24c5,	// (0x00073d26) call_thumbnail_pane_g1

0x24cd,	// (0x00073d2e) bg_pinb_pane_ParamLimits

0x24cd,	// (0x00073d2e) bg_pinb_pane

0x24db,	// (0x00073d3c) find_pinb_pane

0x24e4,	// (0x00073d45) listscroll_pinb_pane_ParamLimits

0x24e4,	// (0x00073d45) listscroll_pinb_pane

0x24f3,	// (0x00073d54) pinb_bg_pane_g1

0x24fd,	// (0x00073d5e) pinb_bg_pane_g2

0x2507,	// (0x00073d68) pinb_bg_pane_g3

0x2511,	// (0x00073d72) pinb_bg_pane_g4

0x251b,	// (0x00073d7c) pinb_bg_pane_g5

0x2525,	// (0x00073d86) pinb_bg_pane_g6

0x252e,	// (0x00073d8f) pinb_bg_pane_g7

0x2537,	// (0x00073d98) pinb_bg_pane_g8

0x2542,	// (0x00073da3) pinb_bg_pane_g9

0x254c,	// (0x00073dad) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0008096b) pinb_bg_pane_g

0x2567,	// (0x00073dc8) grid_pinb_pane

0x2570,	// (0x00073dd1) list_pinb_pane

0x2579,	// (0x00073dda) scroll_pane_cp01_ParamLimits

0x2579,	// (0x00073dda) scroll_pane_cp01

0x258b,	// (0x00073dec) find_pinb_pane_g1_ParamLimits

0x258b,	// (0x00073dec) find_pinb_pane_g1

0x25a3,	// (0x00073e04) find_pinb_pane_t1

0x25b5,	// (0x00073e16) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00080985) find_pinb_pane_t

0x25ca,	// (0x00073e2b) input_focus_pane_cp01_ParamLimits

0x25ca,	// (0x00073e2b) input_focus_pane_cp01

0x25d6,	// (0x00073e37) cell_pinb_pane_ParamLimits

0x25d6,	// (0x00073e37) cell_pinb_pane

0x25ee,	// (0x00073e4f) cell_pinb_pane_g1_ParamLimits

0x25ee,	// (0x00073e4f) cell_pinb_pane_g1

0x2602,	// (0x00073e63) cell_pinb_pane_g2_ParamLimits

0x2602,	// (0x00073e63) cell_pinb_pane_g2

0x260e,	// (0x00073e6f) cell_pinb_pane_g3_ParamLimits

0x260e,	// (0x00073e6f) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0008098a) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0008098a) cell_pinb_pane_g

0x2272,	// (0x00073ad3) grid_highlight_pane_cp01

0x261a,	// (0x00073e7b) list_pinb_item_pane_ParamLimits

0x261a,	// (0x00073e7b) list_pinb_item_pane

0x2272,	// (0x00073ad3) list_highlight_pane_cp02

0x262b,	// (0x00073e8c) list_pinb_item_pane_g1_ParamLimits

0x262b,	// (0x00073e8c) list_pinb_item_pane_g1

0x2638,	// (0x00073e99) list_pinb_item_pane_g2_ParamLimits

0x2638,	// (0x00073e99) list_pinb_item_pane_g2

0x2644,	// (0x00073ea5) list_pinb_item_pane_g3_ParamLimits

0x2644,	// (0x00073ea5) list_pinb_item_pane_g3

0x2655,	// (0x00073eb6) list_pinb_item_pane_g4_ParamLimits

0x2655,	// (0x00073eb6) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00080991) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00080991) list_pinb_item_pane_g

0x2661,	// (0x00073ec2) list_pinb_item_pane_t1_ParamLimits

0x2661,	// (0x00073ec2) list_pinb_item_pane_t1

0x2696,	// (0x00073ef7) calc_display_pane

0x26b8,	// (0x00073f19) calc_paper_pane

0x26d5,	// (0x00073f36) grid_calc_pane

0x2272,	// (0x00073ad3) bg_list_pane_cp01

0x26f7,	// (0x00073f58) clock_g1

0x26ff,	// (0x00073f60) clock_g2

0x0001,

0xf139,	// (0x0008099a) clock_g

0x2707,	// (0x00073f68) clock_t1_ParamLimits

0x2707,	// (0x00073f68) clock_t1

0x271c,	// (0x00073f7d) clock_t2_ParamLimits

0x271c,	// (0x00073f7d) clock_t2

0x272e,	// (0x00073f8f) clock_t3_ParamLimits

0x272e,	// (0x00073f8f) clock_t3

0x2740,	// (0x00073fa1) clock_t4_ParamLimits

0x2740,	// (0x00073fa1) clock_t4

0x2752,	// (0x00073fb3) clock_t5_ParamLimits

0x2752,	// (0x00073fb3) clock_t5

0x2767,	// (0x00073fc8) clock_t6_ParamLimits

0x2767,	// (0x00073fc8) clock_t6

0x2779,	// (0x00073fda) clock_t7_ParamLimits

0x2779,	// (0x00073fda) clock_t7

0x278b,	// (0x00073fec) clock_t8_ParamLimits

0x278b,	// (0x00073fec) clock_t8

0x279d,	// (0x00073ffe) clock_t9_ParamLimits

0x279d,	// (0x00073ffe) clock_t9

0x0008,

0xf13e,	// (0x0008099f) clock_t_ParamLimits

0xf13e,	// (0x0008099f) clock_t

0x27af,	// (0x00074010) popup_clock_analogue_window_cp02

0x27af,	// (0x00074010) popup_clock_digital_window_cp01

0x27b7,	// (0x00074018) listscroll_help_pane

0x2272,	// (0x00073ad3) phob_pre_status_pane

0x27c1,	// (0x00074022) grid_qdial_pane

0x24cd,	// (0x00073d2e) listscroll_mce_pane

0x24cd,	// (0x00073d2e) bg_notes_pane

0x27cb,	// (0x0007402c) list_notes_pane

0x27d9,	// (0x0007403a) scroll_pane_cp06

0x27eb,	// (0x0007404c) bg_calc_paper_pane

0xad68,	// (0x0007c5c9) list_calc_pane

0x27ff,	// (0x00074060) bg_calc_display_pane

0x280b,	// (0x0007406c) calc_display_pane_t1

0x281d,	// (0x0007407e) calc_display_pane_t2

0xad82,	// (0x0007c5e3) calc_display_pane_t3

0x0002,

0xf151,	// (0x000809b2) calc_display_pane_t

0x282f,	// (0x00074090) cell_calc_pane_ParamLimits

0x282f,	// (0x00074090) cell_calc_pane

0x2862,	// (0x000740c3) bg_calc_paper_pane_g1

0x286e,	// (0x000740cf) bg_calc_paper_pane_g2

0x287a,	// (0x000740db) bg_calc_paper_pane_g3

0x2886,	// (0x000740e7) bg_calc_paper_pane_g4

0x2892,	// (0x000740f3) bg_calc_paper_pane_g5

0x289e,	// (0x000740ff) bg_calc_paper_pane_g6

0x28ad,	// (0x0007410e) bg_calc_paper_pane_g7

0x28bc,	// (0x0007411d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000809b9) bg_calc_paper_pane_g

0x28cb,	// (0x0007412c) calc_bg_paper_pane_g9

0x28da,	// (0x0007413b) list_calc_item_pane_ParamLimits

0x28da,	// (0x0007413b) list_calc_item_pane

0x28ed,	// (0x0007414e) list_calc_item_pane_g1

0xad94,	// (0x0007c5f5) list_calc_item_pane_t1_ParamLimits

0xad94,	// (0x0007c5f5) list_calc_item_pane_t1

0x28fa,	// (0x0007415b) list_calc_item_pane_t2_ParamLimits

0x28fa,	// (0x0007415b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000809ca) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000809ca) list_calc_item_pane_t

0x2910,	// (0x00074171) cell_calc_pane_g1

0x2932,	// (0x00074193) grid_highlight_pane_cp02

0x2954,	// (0x000741b5) bg_calc_display_pane_g1

0xada6,	// (0x0007c607) bg_calc_display_pane_g2

0x295d,	// (0x000741be) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000809d4) bg_calc_display_pane_g

0x2966,	// (0x000741c7) cell_qdial_pane_ParamLimits

0x2966,	// (0x000741c7) cell_qdial_pane

0x2978,	// (0x000741d9) cell_qdial_pane_g1_ParamLimits

0x2978,	// (0x000741d9) cell_qdial_pane_g1

0x298e,	// (0x000741ef) cell_qdial_pane_g2_ParamLimits

0x298e,	// (0x000741ef) cell_qdial_pane_g2

0x299f,	// (0x00074200) cell_qdial_pane_g3_ParamLimits

0x299f,	// (0x00074200) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000809db) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000809db) cell_qdial_pane_g

0x29c1,	// (0x00074222) cell_qdial_pane_t1_ParamLimits

0x29c1,	// (0x00074222) cell_qdial_pane_t1

0x29d9,	// (0x0007423a) cell_qdial_pane_t2_ParamLimits

0x29d9,	// (0x0007423a) cell_qdial_pane_t2

0x29ec,	// (0x0007424d) cell_qdial_pane_t3_ParamLimits

0x29ec,	// (0x0007424d) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000809e4) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000809e4) cell_qdial_pane_t

0x2272,	// (0x00073ad3) grid_highlight_pane_cp04

0x29ff,	// (0x00074260) thumbnail_qdial_pane_ParamLimits

0x29ff,	// (0x00074260) thumbnail_qdial_pane

0x2a5b,	// (0x000742bc) list_help_pane

0x2a64,	// (0x000742c5) scroll_pane_cp02

0x2a6d,	// (0x000742ce) help_list_pane_t1_ParamLimits

0x2a6d,	// (0x000742ce) help_list_pane_t1

0xadb0,	// (0x0007c611) bg_notes_pane_g2

0xadb8,	// (0x0007c619) bg_notes_pane_g3

0xadc0,	// (0x0007c621) notes_bg_pane_g1

0xadc8,	// (0x0007c629) notes_bg_pane_g4

0xadd0,	// (0x0007c631) notes_bg_pane_g5

0xadd8,	// (0x0007c639) notes_bg_pane_g6

0xade0,	// (0x0007c641) notes_bg_pane_g7

0xade8,	// (0x0007c649) notes_bg_pane_g8

0xadf0,	// (0x0007c651) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00080a02) notes_bg_pane_g

0x2a88,	// (0x000742e9) list_notes_text_pane_ParamLimits

0x2a88,	// (0x000742e9) list_notes_text_pane

0x2a9b,	// (0x000742fc) list_notes_text_pane_g1

0xadf8,	// (0x0007c659) list_notes_text_pane_t1

0x2ab5,	// (0x00074316) listscroll_cale_week_pane

0x2ae8,	// (0x00074349) bg_cale_heading_pane

0x2b00,	// (0x00074361) bg_cale_pane_cp01

0x2b1d,	// (0x0007437e) cale_week_corner_pane

0x2b3c,	// (0x0007439d) cale_week_day_heading_pane

0x2b59,	// (0x000743ba) cale_week_scroll_pane_g1

0x2b6c,	// (0x000743cd) cale_week_scroll_pane_g2

0x2b84,	// (0x000743e5) cale_week_scroll_pane_g3

0x2b9c,	// (0x000743fd) cale_week_scroll_pane_g4

0x2bb4,	// (0x00074415) cale_week_scroll_pane_g5

0x2bcc,	// (0x0007442d) cale_week_scroll_pane_g6

0x2be4,	// (0x00074445) cale_week_scroll_pane_g7

0x2bfc,	// (0x0007445d) cale_week_scroll_pane_g8

0x2c18,	// (0x00074479) cale_week_scroll_pane_g9

0x2c30,	// (0x00074491) cale_week_scroll_pane_g10

0x2c48,	// (0x000744a9) cale_week_scroll_pane_g11

0x2c60,	// (0x000744c1) cale_week_scroll_pane_g12

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g13

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g14

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00080a11) cale_week_scroll_pane_g

0x2cac,	// (0x0007450d) cale_week_time_pane

0x2cc8,	// (0x00074529) grid_cale_week_pane

0x2cf4,	// (0x00074555) scroll_pane_cp08

0x2d11,	// (0x00074572) cell_cale_week_pane_ParamLimits

0x2d11,	// (0x00074572) cell_cale_week_pane

0x2d87,	// (0x000745e8) cale_week_day_heading_pane_t1

0x2dac,	// (0x0007460d) cale_week_day_heading_pane_t2

0x2dd6,	// (0x00074637) cale_week_day_heading_pane_t3

0x2e00,	// (0x00074661) cale_week_day_heading_pane_t4

0x2e2a,	// (0x0007468b) cale_week_day_heading_pane_t5

0x2e54,	// (0x000746b5) cale_week_day_heading_pane_t6

0x2e7e,	// (0x000746df) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00080a32) cale_week_day_heading_pane_t

0x2ea3,	// (0x00074704) bg_cale_side_pane

0x2eb1,	// (0x00074712) cale_week_time_pane_t1

0x2eeb,	// (0x0007474c) cale_week_time_pane_t2

0x2f25,	// (0x00074786) cale_week_time_pane_t3

0x2f5f,	// (0x000747c0) cale_week_time_pane_t4

0x2f99,	// (0x000747fa) cale_week_time_pane_t5

0x2fd3,	// (0x00074834) cale_week_time_pane_t6

0x300d,	// (0x0007486e) cale_week_time_pane_t7

0x3047,	// (0x000748a8) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00080a41) cale_week_time_pane_t

0x3081,	// (0x000748e2) cell_cale_week_pane_g2

0x30a0,	// (0x00074901) cell_cale_week_pane_g3_ParamLimits

0x30a0,	// (0x00074901) cell_cale_week_pane_g3

0x30b8,	// (0x00074919) grid_highlight_pane_cp07

0x30c0,	// (0x00074921) listscroll_gms_pane

0x30ca,	// (0x0007492b) grid_gms_pane

0x30d3,	// (0x00074934) listscroll_gms_pane_g1

0x30db,	// (0x0007493c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00080a52) listscroll_gms_pane_g

0x30e3,	// (0x00074944) scroll_pane_cp010

0x30ee,	// (0x0007494f) cell_gms_pane_ParamLimits

0x30ee,	// (0x0007494f) cell_gms_pane

0x30ff,	// (0x00074960) cell_gms_pane_g1

0x3107,	// (0x00074968) cell_gms_pane_g2

0x2a9b,	// (0x000742fc) cell_gms_pane_g3

0x310f,	// (0x00074970) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00080a57) cell_gms_pane_g

0x3118,	// (0x00074979) grid_highlight_pane_cp09

0x5e86,	// (0x000776e7) phob_pre_status_pane_g1

0x5e8e,	// (0x000776ef) phob_pre_status_pane_g2

0x5e96,	// (0x000776f7) phob_pre_status_pane_g3

0x5e9e,	// (0x000776ff) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x00080e55) phob_pre_status_pane_g

0x5eae,	// (0x0007770f) phob_pre_status_pane_t1

0x5ebc,	// (0x0007771d) phob_pre_status_pane_t2

0x5eca,	// (0x0007772b) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x00080e60) phob_pre_status_pane_t

0x3128,	// (0x00074989) bg_list_pane_cp05

0x3130,	// (0x00074991) grid_vorec_pane

0x3138,	// (0x00074999) vorec_t1

0x3146,	// (0x000749a7) vorec_t2

0x3154,	// (0x000749b5) vorec_t3

0x3162,	// (0x000749c3) vorec_t4

0xacc6,	// (0x0007c527) vorec_t5

0xacd4,	// (0x0007c535) vorec_t6

0x0004,

0xf1ff,	// (0x00080a60) vorec_t

0xace2,	// (0x0007c543) wait_bar_pane_cp01

0x317e,	// (0x000749df) cell_vorec_pane_ParamLimits

0x317e,	// (0x000749df) cell_vorec_pane

0xae06,	// (0x0007c667) cell_vorec_pane_g1

0x2272,	// (0x00073ad3) grid_highlight_pane_cp05

0x31a3,	// (0x00074a04) cams_zoom_pane

0x31b2,	// (0x00074a13) image_vga_pane

0x31c8,	// (0x00074a29) main_camera_pane_g1

0x31d8,	// (0x00074a39) main_camera_pane_g2

0x31e8,	// (0x00074a49) main_camera_pane_g3

0x31f8,	// (0x00074a59) main_camera_pane_g4

0x3208,	// (0x00074a69) main_camera_pane_g5

0x3218,	// (0x00074a79) main_camera_pane_g6

0x3228,	// (0x00074a89) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00080a6b) main_camera_pane_g

0x3244,	// (0x00074aa5) main_camera_pane_t1

0x325a,	// (0x00074abb) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00080a7c) main_camera_pane_t

0x328c,	// (0x00074aed) cams_zoom_pane_cp_ParamLimits

0x328c,	// (0x00074aed) cams_zoom_pane_cp

0x32b4,	// (0x00074b15) image_cif_pane_ParamLimits

0x32b4,	// (0x00074b15) image_cif_pane

0x32e3,	// (0x00074b44) image_subqcif_pane

0x32eb,	// (0x00074b4c) main_video_pane_g1_ParamLimits

0x32eb,	// (0x00074b4c) main_video_pane_g1

0x330f,	// (0x00074b70) main_video_pane_g2_ParamLimits

0x330f,	// (0x00074b70) main_video_pane_g2

0x3343,	// (0x00074ba4) main_video_pane_g3_ParamLimits

0x3343,	// (0x00074ba4) main_video_pane_g3

0x3371,	// (0x00074bd2) main_video_pane_g4_ParamLimits

0x3371,	// (0x00074bd2) main_video_pane_g4

0x339f,	// (0x00074c00) main_video_pane_g5_ParamLimits

0x339f,	// (0x00074c00) main_video_pane_g5

0x33b7,	// (0x00074c18) main_video_pane_g6_ParamLimits

0x33b7,	// (0x00074c18) main_video_pane_g6

0x0006,

0xf220,	// (0x00080a81) main_video_pane_g_ParamLimits

0xf220,	// (0x00080a81) main_video_pane_g

0x33e0,	// (0x00074c41) main_video_pane_t1_ParamLimits

0x33e0,	// (0x00074c41) main_video_pane_t1

0x3429,	// (0x00074c8a) cams_zoom_pane_g1

0x3432,	// (0x00074c93) cams_zoom_pane_g2

0x343b,	// (0x00074c9c) cams_zoom_pane_g3

0x3444,	// (0x00074ca5) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00080a90) cams_zoom_pane_g

0x3461,	// (0x00074cc2) grid_cams_pane

0x3476,	// (0x00074cd7) linegrid_cams_pane

0x3487,	// (0x00074ce8) cell_cams_pane_ParamLimits

0x3487,	// (0x00074ce8) cell_cams_pane

0x34a5,	// (0x00074d06) cams_burst_image_pane

0x34ad,	// (0x00074d0e) cell_cams_pane_g1

0x2272,	// (0x00073ad3) grid_highlight_pane_cp03

0x2910,	// (0x00074171) mp_bg_pane_g1

0x2272,	// (0x00073ad3) bg_list_pane_cp03

0xbe12,	// (0x0007d673) bg_mp_pane

0xbe1a,	// (0x0007d67b) grid_mp_pane

0xbe22,	// (0x0007d683) media_player_g1

0xbe2a,	// (0x0007d68b) media_player_t1

0xbe38,	// (0x0007d699) media_player_t2

0xbe46,	// (0x0007d6a7) media_player_t3

0xbe54,	// (0x0007d6b5) media_player_t4

0xbe62,	// (0x0007d6c3) media_player_t5

0xbe70,	// (0x0007d6d1) media_player_t6

0xbe7e,	// (0x0007d6df) media_player_t7

0x0006,

0xf5de,	// (0x00080e3f) media_player_t

0xbe8c,	// (0x0007d6ed) wait_bar_pane_cp02

0xf5c3,	// (0x00080e24) main_usb_pane_t

0x5e7d,	// (0x000776de) cell_mp_pane

0x2910,	// (0x00074171) cell_mp_pane_g1

0x2272,	// (0x00073ad3) grid_highlight_pane_cp06

0x34cd,	// (0x00074d2e) grid_skin_colour_pane

0x34d5,	// (0x00074d36) list_highlight_pane_cp03

0x34dd,	// (0x00074d3e) skin_g1

0x34e5,	// (0x00074d46) skin_t1

0x34f4,	// (0x00074d55) skin_t2

0x0001,

0xf264,	// (0x00080ac5) skin_t

0x3502,	// (0x00074d63) cell_skin_colour_pane_ParamLimits

0x3502,	// (0x00074d63) cell_skin_colour_pane

0x351c,	// (0x00074d7d) cell_skin_colour_pane_g1

0x357d,	// (0x00074dde) call_video_g1_ParamLimits

0x357d,	// (0x00074dde) call_video_g1

0x3593,	// (0x00074df4) call_video_g2_ParamLimits

0x3593,	// (0x00074df4) call_video_g2

0x0001,

0xf269,	// (0x00080aca) call_video_g_ParamLimits

0xf269,	// (0x00080aca) call_video_g

0x35d8,	// (0x00074e39) call_video_uplink_pane_cp1_ParamLimits

0x35d8,	// (0x00074e39) call_video_uplink_pane_cp1

0x363d,	// (0x00074e9e) call_video_uplink_pane_cp2

0x3675,	// (0x00074ed6) video_down_crop_pane_ParamLimits

0x3675,	// (0x00074ed6) video_down_crop_pane

0x3738,	// (0x00074f99) video_down_pane_ParamLimits

0x3738,	// (0x00074f99) video_down_pane

0x37e2,	// (0x00075043) video_down_subqcif_pane_ParamLimits

0x37e2,	// (0x00075043) video_down_subqcif_pane

0x37fa,	// (0x0007505b) video_down_subqcif_pane_cp_ParamLimits

0x37fa,	// (0x0007505b) video_down_subqcif_pane_cp

0x3831,	// (0x00075092) im_reading_pane_ParamLimits

0x3831,	// (0x00075092) im_reading_pane

0x3843,	// (0x000750a4) im_writing_pane_ParamLimits

0x3843,	// (0x000750a4) im_writing_pane

0x3861,	// (0x000750c2) im_reading_pane_t1

0x3897,	// (0x000750f8) list_im_pane

0x38a8,	// (0x00075109) scroll_pane_cp07

0x38c1,	// (0x00075122) im_writing_pane_t1_ParamLimits

0x38c1,	// (0x00075122) im_writing_pane_t1

0x38d6,	// (0x00075137) im_writing_pane_t2_ParamLimits

0x38d6,	// (0x00075137) im_writing_pane_t2

0x0001,

0xf273,	// (0x00080ad4) im_writing_pane_t_ParamLimits

0xf273,	// (0x00080ad4) im_writing_pane_t

0x2272,	// (0x00073ad3) input_focus_pane_cp04

0x2272,	// (0x00073ad3) input_focus_pane_cp05

0x38f3,	// (0x00075154) list_im_single_pane_ParamLimits

0x38f3,	// (0x00075154) list_im_single_pane

0x3906,	// (0x00075167) list_single_im_pane_t1

0x5e43,	// (0x000776a4) blid_accuracy_pane

0x5e4b,	// (0x000776ac) blid_compass_pane

0x5e53,	// (0x000776b4) main_location_t1

0x5e61,	// (0x000776c2) main_location_t2

0x5e6f,	// (0x000776d0) main_location_t3

0x0002,

0xf5ed,	// (0x00080e4e) main_location_t

0x2272,	// (0x00073ad3) aid_levels_location

0x2910,	// (0x00074171) blid_accuracy_pane_g1

0x2910,	// (0x00074171) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00080b36) blid_accuracy_pane_g

0x3940,	// (0x000751a1) wml_content_pane

0x397e,	// (0x000751df) wml_button_pane_ParamLimits

0x397e,	// (0x000751df) wml_button_pane

0x317e,	// (0x000749df) wml_list_single_large_pane_ParamLimits

0x317e,	// (0x000749df) wml_list_single_large_pane

0x3992,	// (0x000751f3) wml_list_single_medium_pane_ParamLimits

0x3992,	// (0x000751f3) wml_list_single_medium_pane

0x39a6,	// (0x00075207) wml_list_single_small_pane_ParamLimits

0x39a6,	// (0x00075207) wml_list_single_small_pane

0x39bc,	// (0x0007521d) wml_selection_box_pane_ParamLimits

0x39bc,	// (0x0007521d) wml_selection_box_pane

0x39cf,	// (0x00075230) wml_list_single_pane_t1

0x39de,	// (0x0007523f) wml_list_single_medium_pane_t1

0x39ed,	// (0x0007524e) wml_list_single_large_pane_t1

0x39fc,	// (0x0007525d) input_focus_pane_cp02_ParamLimits

0x39fc,	// (0x0007525d) input_focus_pane_cp02

0x3a0f,	// (0x00075270) wml_selection_box_pane_g1

0x3a18,	// (0x00075279) wml_selection_box_pane_t1_ParamLimits

0x3a18,	// (0x00075279) wml_selection_box_pane_t1

0x24cd,	// (0x00073d2e) bg_wml_button_pane_ParamLimits

0x24cd,	// (0x00073d2e) bg_wml_button_pane

0x3a30,	// (0x00075291) wml_button_pane_g1

0x3a38,	// (0x00075299) wml_button_pane_t1

0x3a30,	// (0x00075291) wml_button_bg_pane_g1

0x3a48,	// (0x000752a9) wml_button_bg_pane_g2

0x3a50,	// (0x000752b1) wml_button_bg_pane_g3

0x3a58,	// (0x000752b9) wml_button_bg_pane_g4

0x3a60,	// (0x000752c1) wml_button_bg_pane_g5

0x3a68,	// (0x000752c9) wml_button_bg_pane_g6

0x3a70,	// (0x000752d1) wml_button_bg_pane_g7

0x3a78,	// (0x000752d9) wml_button_bg_pane_g8

0x3a80,	// (0x000752e1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00080ad9) wml_button_bg_pane_g

0x3a88,	// (0x000752e9) bg_list_pane_cp02

0x3a90,	// (0x000752f1) mce_header_pane_ParamLimits

0x3a90,	// (0x000752f1) mce_header_pane

0x3aa6,	// (0x00075307) mce_icon_pane

0x3aa6,	// (0x00075307) mce_image_pane

0x3aaf,	// (0x00075310) mce_text_pane_ParamLimits

0x3aaf,	// (0x00075310) mce_text_pane

0x3ac2,	// (0x00075323) scroll_pane_cp03

0x3976,	// (0x000751d7) scroll_pane_cp04

0x3acc,	// (0x0007532d) scroll_pane_cp05_ParamLimits

0x3acc,	// (0x0007532d) scroll_pane_cp05

0x3ad8,	// (0x00075339) mce_header_field_pane_ParamLimits

0x3ad8,	// (0x00075339) mce_header_field_pane

0x3aef,	// (0x00075350) mce_header_field_pane_2_ParamLimits

0x3aef,	// (0x00075350) mce_header_field_pane_2

0x3b05,	// (0x00075366) mce_header_field_pane_3

0x3b0d,	// (0x0007536e) list_single_mce_message_pane_ParamLimits

0x3b0d,	// (0x0007536e) list_single_mce_message_pane

0x3b20,	// (0x00075381) list_single_mce_smart_pane_ParamLimits

0x3b20,	// (0x00075381) list_single_mce_smart_pane

0x3b3e,	// (0x0007539f) input_focus_pane_cp03

0x3b47,	// (0x000753a8) list_header_data_pane

0x3b4f,	// (0x000753b0) mce_header_field_pane_t1

0x3b5d,	// (0x000753be) list_single_mce_header_pane_ParamLimits

0x3b5d,	// (0x000753be) list_single_mce_header_pane

0x3b71,	// (0x000753d2) list_single_mce_header_pane_t1

0x3b80,	// (0x000753e1) list_single_mce_message_pane_g1

0x3b88,	// (0x000753e9) list_single_mce_message_pane_t1

0x3bbc,	// (0x0007541d) bg_cale_heading_pane_cp01_ParamLimits

0x3bbc,	// (0x0007541d) bg_cale_heading_pane_cp01

0x3bf6,	// (0x00075457) bg_cale_pane_cp02_ParamLimits

0x3bf6,	// (0x00075457) bg_cale_pane_cp02

0x3c23,	// (0x00075484) cale_month_corner_pane

0x3c42,	// (0x000754a3) cale_month_day_heading_pane_ParamLimits

0x3c42,	// (0x000754a3) cale_month_day_heading_pane

0x3c88,	// (0x000754e9) cale_month_pane_g1_ParamLimits

0x3c88,	// (0x000754e9) cale_month_pane_g1

0x3cb7,	// (0x00075518) cale_month_pane_g2_ParamLimits

0x3cb7,	// (0x00075518) cale_month_pane_g2

0x3cdf,	// (0x00075540) cale_month_pane_g3_ParamLimits

0x3cdf,	// (0x00075540) cale_month_pane_g3

0x3d1b,	// (0x0007557c) cale_month_pane_g4_ParamLimits

0x3d1b,	// (0x0007557c) cale_month_pane_g4

0x3d57,	// (0x000755b8) cale_month_pane_g5_ParamLimits

0x3d57,	// (0x000755b8) cale_month_pane_g5

0x3d93,	// (0x000755f4) cale_month_pane_g6_ParamLimits

0x3d93,	// (0x000755f4) cale_month_pane_g6

0x3dcf,	// (0x00075630) cale_month_pane_g7_ParamLimits

0x3dcf,	// (0x00075630) cale_month_pane_g7

0x3e0b,	// (0x0007566c) cale_month_pane_g8_ParamLimits

0x3e0b,	// (0x0007566c) cale_month_pane_g8

0x3e4f,	// (0x000756b0) cale_month_pane_g9_ParamLimits

0x3e4f,	// (0x000756b0) cale_month_pane_g9

0x3e95,	// (0x000756f6) cale_month_pane_g10_ParamLimits

0x3e95,	// (0x000756f6) cale_month_pane_g10

0x3edb,	// (0x0007573c) cale_month_pane_g11_ParamLimits

0x3edb,	// (0x0007573c) cale_month_pane_g11

0x3f21,	// (0x00075782) cale_month_pane_g12_ParamLimits

0x3f21,	// (0x00075782) cale_month_pane_g12

0x3f67,	// (0x000757c8) cale_month_pane_g13_ParamLimits

0x3f67,	// (0x000757c8) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00080aec) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00080aec) cale_month_pane_g

0x3fbf,	// (0x00075820) cale_month_week_pane

0x3fdb,	// (0x0007583c) grid_cale_month_pane_ParamLimits

0x3fdb,	// (0x0007583c) grid_cale_month_pane

0x4018,	// (0x00075879) cale_month_day_heading_pane_t1

0x409e,	// (0x000758ff) cale_month_day_heading_pane_t2

0x4117,	// (0x00075978) cale_month_day_heading_pane_t3

0x4190,	// (0x000759f1) cale_month_day_heading_pane_t4

0x4209,	// (0x00075a6a) cale_month_day_heading_pane_t5

0x4282,	// (0x00075ae3) cale_month_day_heading_pane_t6

0x42fb,	// (0x00075b5c) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00080b07) cale_month_day_heading_pane_t

0x2ea3,	// (0x00074704) bg_cale_side_pane_cp01

0x4378,	// (0x00075bd9) cale_month_week_pane_t1

0x4391,	// (0x00075bf2) cale_month_week_pane_t2

0x43aa,	// (0x00075c0b) cale_month_week_pane_t3

0x43c3,	// (0x00075c24) cale_month_week_pane_t4

0x43dc,	// (0x00075c3d) cale_month_week_pane_t5

0x43f5,	// (0x00075c56) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00080b16) cale_month_week_pane_t

0x440e,	// (0x00075c6f) cell_cale_month_pane_ParamLimits

0x440e,	// (0x00075c6f) cell_cale_month_pane

0xae10,	// (0x0007c671) cell_cale_month_pane_g1

0x4500,	// (0x00075d61) cell_cale_month_pane_t1_ParamLimits

0x4500,	// (0x00075d61) cell_cale_month_pane_t1

0x30b8,	// (0x00074919) grid_highlight_pane_cp08

0x2910,	// (0x00074171) main_smil_g1

0x452c,	// (0x00075d8d) smil_status_pane

0x4535,	// (0x00075d96) smil_text_pane

0xbcf2,	// (0x0007d553) bg_popup_call3_rect_pane_g8

0xbcfa,	// (0x0007d55b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x00080dcf) bg_popup_call3_rect_pane_g

0xbfc9,	// (0x0007d82a) smil_status_volume_pane_g1

0x4547,	// (0x00075da8) smil_status_pane_t1

0xbffc,	// (0x0007d85d) volume_smil_pane

0x455e,	// (0x00075dbf) list_smil_text_pane

0x4568,	// (0x00075dc9) scroll_pane_cp011

0x4573,	// (0x00075dd4) smil_text_list_pane_t1_ParamLimits

0x4573,	// (0x00075dd4) smil_text_list_pane_t1

0xae1c,	// (0x0007c67d) aid_volume_smil_ParamLimits

0xae1c,	// (0x0007c67d) aid_volume_smil

0x2910,	// (0x00074171) smil_volume_pane_g1

0x2910,	// (0x00074171) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00080b36) smil_volume_pane_g

0x2ab5,	// (0x00074316) listscroll_cale_day_pane

0x45a9,	// (0x00075e0a) bg_cale_pane

0x45c1,	// (0x00075e22) list_cale_pane

0x45e4,	// (0x00075e45) scroll_pane_cp09

0x45f5,	// (0x00075e56) cale_bg_pane_g1

0x45fd,	// (0x00075e5e) cale_bg_pane_g2

0x4605,	// (0x00075e66) cale_bg_pane_g3

0x460d,	// (0x00075e6e) cale_bg_pane_g4

0x4615,	// (0x00075e76) cale_bg_pane_g5

0x461d,	// (0x00075e7e) cale_bg_pane_g6

0x4625,	// (0x00075e86) cale_bg_pane_g7

0x462d,	// (0x00075e8e) cale_bg_pane_g8

0x4635,	// (0x00075e96) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00080b3b) cale_bg_pane_g

0x4645,	// (0x00075ea6) list_cale_time_pane_ParamLimits

0x4645,	// (0x00075ea6) list_cale_time_pane

0x4658,	// (0x00075eb9) list_cale_time_pane_g1_ParamLimits

0x4658,	// (0x00075eb9) list_cale_time_pane_g1

0x4664,	// (0x00075ec5) list_cale_time_pane_g2_ParamLimits

0x4664,	// (0x00075ec5) list_cale_time_pane_g2

0x4671,	// (0x00075ed2) list_cale_time_pane_g3_ParamLimits

0x4671,	// (0x00075ed2) list_cale_time_pane_g3

0x467d,	// (0x00075ede) list_cale_time_pane_g4_ParamLimits

0x467d,	// (0x00075ede) list_cale_time_pane_g4

0x4689,	// (0x00075eea) list_cale_time_pane_g5_ParamLimits

0x4689,	// (0x00075eea) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00080b4e) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00080b4e) list_cale_time_pane_g

0x46a2,	// (0x00075f03) list_cale_time_pane_t1_ParamLimits

0x46a2,	// (0x00075f03) list_cale_time_pane_t1

0x46ca,	// (0x00075f2b) list_cale_time_pane_t2_ParamLimits

0x46ca,	// (0x00075f2b) list_cale_time_pane_t2

0x4d71,	// (0x000765d2) aid_blid_cardinal_pane

0x4dbb,	// (0x0007661c) compass_pane_t4

0x46f2,	// (0x00075f53) list_cale_time_pane_t4_ParamLimits

0x46f2,	// (0x00075f53) list_cale_time_pane_t4

0x4dc9,	// (0x0007662a) compass_pane_t5

0x4dd7,	// (0x00076638) compass_pane_t6

0x4de5,	// (0x00076646) compass_pane_t7

0x4e7b,	// (0x000766dc) navi_pane_cc_t1

0x5098,	// (0x000768f9) aid_phob_thumbnail_center_pane

0x5657,	// (0x00076eb8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00080b5b) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00080b5b) list_cale_time_pane_t

0x1ea7,	// (0x00073708) bg_popup_window_pane_cp02_ParamLimits

0x1ea7,	// (0x00073708) bg_popup_window_pane_cp02

0x471a,	// (0x00075f7b) heading_pane_cp01_ParamLimits

0x471a,	// (0x00075f7b) heading_pane_cp01

0x4726,	// (0x00075f87) loc_req_pane_ParamLimits

0x4726,	// (0x00075f87) loc_req_pane

0x4736,	// (0x00075f97) loc_type_pane_ParamLimits

0x4736,	// (0x00075f97) loc_type_pane

0x4748,	// (0x00075fa9) loc_type_pane_t1_ParamLimits

0x4748,	// (0x00075fa9) loc_type_pane_t1

0x475a,	// (0x00075fbb) loc_type_pane_t2_ParamLimits

0x475a,	// (0x00075fbb) loc_type_pane_t2

0x476c,	// (0x00075fcd) loc_type_pane_t3_ParamLimits

0x476c,	// (0x00075fcd) loc_type_pane_t3

0x0002,

0xf301,	// (0x00080b62) loc_type_pane_t_ParamLimits

0xf301,	// (0x00080b62) loc_type_pane_t

0x477e,	// (0x00075fdf) list_loc_req_pane

0x4788,	// (0x00075fe9) scroll_pane_cp012

0x4791,	// (0x00075ff2) list_single_loc_request_popup_menu_pane_ParamLimits

0x4791,	// (0x00075ff2) list_single_loc_request_popup_menu_pane

0x479e,	// (0x00075fff) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x479e,	// (0x00075fff) list_single_loc_request_popup_menu_pane_g1

0x47aa,	// (0x0007600b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x47aa,	// (0x0007600b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00080b69) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00080b69) list_single_loc_request_popup_menu_pane_g

0x47b6,	// (0x00076017) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x47b6,	// (0x00076017) list_single_loc_request_popup_menu_pane_t1

0x24cd,	// (0x00073d2e) bg_popup_window_pane_cp03_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_window_pane_cp03

0x47cc,	// (0x0007602d) heading_loc_req_pane_ParamLimits

0x47cc,	// (0x0007602d) heading_loc_req_pane

0x47d8,	// (0x00076039) popup_dyc_status_message_window_g1_ParamLimits

0x47d8,	// (0x00076039) popup_dyc_status_message_window_g1

0x47ec,	// (0x0007604d) popup_dyc_status_message_window_t1_ParamLimits

0x47ec,	// (0x0007604d) popup_dyc_status_message_window_t1

0x4801,	// (0x00076062) popup_dyc_status_message_window_t2_ParamLimits

0x4801,	// (0x00076062) popup_dyc_status_message_window_t2

0x4816,	// (0x00076077) popup_dyc_status_message_window_t3_ParamLimits

0x4816,	// (0x00076077) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00080b6e) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00080b6e) popup_dyc_status_message_window_t

0x2272,	// (0x00073ad3) bg_heading_pane_cp01

0x4832,	// (0x00076093) heading_loc_req_pane_g1

0x483a,	// (0x0007609b) heading_loc_req_pane_g2

0x4842,	// (0x000760a3) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00080b75) heading_loc_req_pane_g

0x484a,	// (0x000760ab) heading_loc_req_pane_t1

0x4865,	// (0x000760c6) bg_popup_sub_pane_cp01_ParamLimits

0x4865,	// (0x000760c6) bg_popup_sub_pane_cp01

0x4873,	// (0x000760d4) popup_cale_events_window_g1_ParamLimits

0x4873,	// (0x000760d4) popup_cale_events_window_g1

0x4893,	// (0x000760f4) popup_cale_events_window_g2_ParamLimits

0x4893,	// (0x000760f4) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00080ba9) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00080ba9) popup_cale_events_window_g

0x48b3,	// (0x00076114) popup_cale_events_window_t1_ParamLimits

0x48b3,	// (0x00076114) popup_cale_events_window_t1

0x48c5,	// (0x00076126) popup_cale_events_window_t2_ParamLimits

0x48c5,	// (0x00076126) popup_cale_events_window_t2

0x4903,	// (0x00076164) popup_cale_events_window_t3_ParamLimits

0x4903,	// (0x00076164) popup_cale_events_window_t3

0x493d,	// (0x0007619e) popup_cale_events_window_t4_ParamLimits

0x493d,	// (0x0007619e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00080bae) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00080bae) popup_cale_events_window_t

0x4973,	// (0x000761d4) call_type_pane

0x4983,	// (0x000761e4) popup_call_status_window_g1

0x4997,	// (0x000761f8) popup_call_status_window_g2

0x49ab,	// (0x0007620c) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00080bb7) popup_call_status_window_g

0x49ba,	// (0x0007621b) call_type_pane_g1

0x49c3,	// (0x00076224) call_type_pane_g2

0x0001,

0xf35d,	// (0x00080bbe) call_type_pane_g

0x2272,	// (0x00073ad3) bg_popup_sub_pane_cp02

0x49cc,	// (0x0007622d) listscroll_popup_wml_pane

0x49d4,	// (0x00076235) list_wml_pane

0x49de,	// (0x0007623f) scroll_pane_cp013

0x49e7,	// (0x00076248) list_single_graphic_popup_wml_pane_ParamLimits

0x49e7,	// (0x00076248) list_single_graphic_popup_wml_pane

0x2910,	// (0x00074171) list_single_graphic_popup_wml_pane_g1

0x49f9,	// (0x0007625a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00080bc3) list_single_graphic_popup_wml_pane_g

0x4a01,	// (0x00076262) list_single_graphic_popup_wml_pane_t1

0x4a17,	// (0x00076278) aid_call_pane

0x24c5,	// (0x00073d26) popup_clock_analogue_window_g1

0x24c5,	// (0x00073d26) popup_clock_analogue_window_g2

0xae4a,	// (0x0007c6ab) popup_clock_analogue_window_g3

0xae4a,	// (0x0007c6ab) popup_clock_analogue_window_g4

0x2910,	// (0x00074171) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00080bc8) popup_clock_analogue_window_g

0xae52,	// (0x0007c6b3) popup_clock_analogue_window_t1

0xae60,	// (0x0007c6c1) clock_digital_number_pane_ParamLimits

0xae60,	// (0x0007c6c1) clock_digital_number_pane

0xae6c,	// (0x0007c6cd) clock_digital_number_pane_cp02_ParamLimits

0xae6c,	// (0x0007c6cd) clock_digital_number_pane_cp02

0xae78,	// (0x0007c6d9) clock_digital_number_pane_cp03_ParamLimits

0xae78,	// (0x0007c6d9) clock_digital_number_pane_cp03

0xae84,	// (0x0007c6e5) clock_digital_number_pane_cp04_ParamLimits

0xae84,	// (0x0007c6e5) clock_digital_number_pane_cp04

0xae90,	// (0x0007c6f1) clock_digital_separator_pane_ParamLimits

0xae90,	// (0x0007c6f1) clock_digital_separator_pane

0xae9c,	// (0x0007c6fd) popup_clock_digital_window_t1

0x2910,	// (0x00074171) clock_digital_number_pane_g1

0x2910,	// (0x00074171) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00080b36) clock_digital_number_pane_g

0x2910,	// (0x00074171) clock_digital_separator_pane_g1

0x2910,	// (0x00074171) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00080b36) clock_digital_separator_pane_g

0x2272,	// (0x00073ad3) bg_popup_window_pane_cp04

0x4a1f,	// (0x00076280) heading_pane_cp03

0x4a27,	// (0x00076288) listscroll_popup_gms_pane

0x4a2f,	// (0x00076290) grid_large_graphic_popup_pane

0x4a39,	// (0x0007629a) listscroll_popup_gms_pane_g1

0x4a41,	// (0x000762a2) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00080bd3) listscroll_popup_gms_pane_g

0x3976,	// (0x000751d7) scroll_pane_cp014

0x4a49,	// (0x000762aa) cell_large_graphic_popup_pane_ParamLimits

0x4a49,	// (0x000762aa) cell_large_graphic_popup_pane

0x4a5f,	// (0x000762c0) cell_large_graphic_popup_pane_g1_ParamLimits

0x4a5f,	// (0x000762c0) cell_large_graphic_popup_pane_g1

0x4a6b,	// (0x000762cc) cell_large_graphic_popup_pane_g2_ParamLimits

0x4a6b,	// (0x000762cc) cell_large_graphic_popup_pane_g2

0x4a77,	// (0x000762d8) cell_large_graphic_popup_pane_g3_ParamLimits

0x4a77,	// (0x000762d8) cell_large_graphic_popup_pane_g3

0x4a84,	// (0x000762e5) cell_large_graphic_popup_pane_g4_ParamLimits

0x4a84,	// (0x000762e5) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00080bd8) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00080bd8) cell_large_graphic_popup_pane_g

0x4a94,	// (0x000762f5) grid_highlight_pane_cp010

0x2910,	// (0x00074171) bg_popup_call_pane_g1

0x4a9e,	// (0x000762ff) list_single_graphic_popup_conf_pane_ParamLimits

0x4a9e,	// (0x000762ff) list_single_graphic_popup_conf_pane

0x4ab1,	// (0x00076312) list_highlight_pane_cp01

0x4aba,	// (0x0007631b) list_single_graphic_popup_conf_pane_g1

0x4ac2,	// (0x00076323) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00080be1) list_single_graphic_popup_conf_pane_g

0x4aca,	// (0x0007632b) list_single_graphic_popup_conf_pane_t1

0x4ad8,	// (0x00076339) linegrid_cams_pane_g1

0x4ae1,	// (0x00076342) linegrid_cams_pane_g2

0x2a9b,	// (0x000742fc) linegrid_cams_pane_g3

0x4aea,	// (0x0007634b) linegrid_cams_pane_g4

0x4af3,	// (0x00076354) linegrid_cams_pane_g5

0x4afc,	// (0x0007635d) linegrid_cams_pane_g6

0x310f,	// (0x00074970) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00080be6) linegrid_cams_pane_g

0x4b05,	// (0x00076366) popup_clock_analogue_window

0x4b05,	// (0x00076366) popup_clock_digital_window

0x2272,	// (0x00073ad3) popup_phob_thumbnail_window

0x2910,	// (0x00074171) call_video_uplink_pane_g1

0x4b0e,	// (0x0007636f) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00080bf5) call_video_uplink_pane_g

0x30b8,	// (0x00074919) video_uplink_pane

0x4b16,	// (0x00076377) mce_image_pane_g1

0x4b20,	// (0x00076381) mce_image_pane_g2

0x4b28,	// (0x00076389) mce_image_pane_g3

0x4b30,	// (0x00076391) mce_image_pane_g4

0x4b38,	// (0x00076399) mce_image_pane_g5

0x0004,

0xf399,	// (0x00080bfa) mce_image_pane_g

0x4b40,	// (0x000763a1) control_top_pane_stacon_cp01_ParamLimits

0x4b40,	// (0x000763a1) control_top_pane_stacon_cp01

0x4b50,	// (0x000763b1) uni_indicator_pane_stacon_cp01_ParamLimits

0x4b50,	// (0x000763b1) uni_indicator_pane_stacon_cp01

0x4b61,	// (0x000763c2) bg_popup_sub_pane_cp03

0x4b6b,	// (0x000763cc) chi_dic_find_pane

0x4b73,	// (0x000763d4) listscroll_chi_dic_pane

0x4b7c,	// (0x000763dd) main_pane_chidic_g1

0x4b8f,	// (0x000763f0) chi_dic_find_pane_t1

0x4b9d,	// (0x000763fe) find_chidic_pane

0x4ba6,	// (0x00076407) chi_dic_list_pane_ParamLimits

0x4ba6,	// (0x00076407) chi_dic_list_pane

0x4bb7,	// (0x00076418) scroll_pane_cp020

0x4bbf,	// (0x00076420) find_chidic_pane_t1

0x2272,	// (0x00073ad3) input_focus_pane_cp06

0x4bce,	// (0x0007642f) list_chi_dic_pane_ParamLimits

0x4bce,	// (0x0007642f) list_chi_dic_pane

0x4bdf,	// (0x00076440) list_chi_dic_pane_t1_ParamLimits

0x4bdf,	// (0x00076440) list_chi_dic_pane_t1

0x2272,	// (0x00073ad3) list_highlight_pane_cp020

0x4bf2,	// (0x00076453) bg_cale_heading_pane_g1

0x4bfa,	// (0x0007645b) bg_cale_heading_pane_g2

0x4c02,	// (0x00076463) bg_cale_heading_pane_g3

0x4c0a,	// (0x0007646b) bg_cale_heading_pane_g4

0x4c12,	// (0x00076473) bg_cale_heading_pane_g5

0x4c1a,	// (0x0007647b) bg_cale_heading_pane_g6

0x4c22,	// (0x00076483) bg_cale_heading_pane_g7

0x4c2a,	// (0x0007648b) bg_cale_heading_pane_g8

0x4c32,	// (0x00076493) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00080c05) bg_cale_heading_pane_g

0x4bf2,	// (0x00076453) bg_cale_side_pane_g1

0x4c3a,	// (0x0007649b) bg_cale_side_pane_g2

0x4c42,	// (0x000764a3) bg_cale_side_pane_g3

0x4c4a,	// (0x000764ab) bg_cale_side_pane_g4

0x4c52,	// (0x000764b3) bg_cale_side_pane_g5

0x4c5a,	// (0x000764bb) bg_cale_side_pane_g6

0x4c62,	// (0x000764c3) bg_cale_side_pane_g7

0x4c6a,	// (0x000764cb) bg_cale_side_pane_g8

0x4c72,	// (0x000764d3) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00080c18) bg_cale_side_pane_g

0x4c7a,	// (0x000764db) popup_call_status_window_ParamLimits

0x4c7a,	// (0x000764db) popup_call_status_window

0x4cc1,	// (0x00076522) stacon_top_pane

0x4cc9,	// (0x0007652a) status_pane_ParamLimits

0x4cc9,	// (0x0007652a) status_pane

0x4cde,	// (0x0007653f) status_small_pane

0x4ce6,	// (0x00076547) control_pane

0x2272,	// (0x00073ad3) stacon_bottom_pane

0x4cee,	// (0x0007654f) list_single_mce_smart_pane_t1_ParamLimits

0x4cee,	// (0x0007654f) list_single_mce_smart_pane_t1

0x4d01,	// (0x00076562) list_single_mce_smart_pane_t2_ParamLimits

0x4d01,	// (0x00076562) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00080c2b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00080c2b) list_single_mce_smart_pane_t

0x4d20,	// (0x00076581) compass_pane

0x4d29,	// (0x0007658a) main_location2_pane_t1

0x4d3b,	// (0x0007659c) main_location2_pane_t2

0x4d4d,	// (0x000765ae) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x00080c30) main_location2_pane_t

0x4d91,	// (0x000765f2) compass_pane_g1_ParamLimits

0x4d91,	// (0x000765f2) compass_pane_g1

0x4d9d,	// (0x000765fe) compass_pane_t1

0x4dac,	// (0x0007660d) compass_pane_t2

0x0005,

0xf3d8,	// (0x00080c39) compass_pane_t

0x4df3,	// (0x00076654) text_secondary_cp61

0x4e72,	// (0x000766d3) navi_pane_cams_g5

0x4eec,	// (0x0007674d) navi_pane_im_t1

0x4efa,	// (0x0007675b) navi_pane_mp_g1_ParamLimits

0x4efa,	// (0x0007675b) navi_pane_mp_g1

0x4f0e,	// (0x0007676f) navi_pane_mp_g2_ParamLimits

0x4f0e,	// (0x0007676f) navi_pane_mp_g2

0x4f1a,	// (0x0007677b) navi_pane_mp_g3_ParamLimits

0x4f1a,	// (0x0007677b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00080c4d) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00080c4d) navi_pane_mp_g

0x4f26,	// (0x00076787) navi_pane_mp_t1

0x4f34,	// (0x00076795) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00080c54) navi_pane_mp_t

0x4fe1,	// (0x00076842) navi_pane_vt_g1

0x4f26,	// (0x00076787) navi_pane_vt_t1

0x4fe9,	// (0x0007684a) navi_slider_pane

0x3128,	// (0x00074989) zooming_pane

0x4ff9,	// (0x0007685a) navi_slider_pane_g1

0xaeb9,	// (0x0007c71a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00080c5b) navi_slider_pane_g

0x501d,	// (0x0007687e) aid_levels_zoom

0x5025,	// (0x00076886) zooming_pane_g1

0x502d,	// (0x0007688e) zooming_pane_g2

0x502d,	// (0x0007688e) zooming_pane_g3

0x0002,

0xf409,	// (0x00080c6a) zooming_pane_g

0x5035,	// (0x00076896) level_10_zoom

0x503e,	// (0x0007689f) level_11_zoom

0x5047,	// (0x000768a8) level_1_zoom

0x5050,	// (0x000768b1) level_2_zoom

0x5059,	// (0x000768ba) level_3_zoom

0x5062,	// (0x000768c3) level_4_zoom

0x506b,	// (0x000768cc) level_5_zoom

0x5074,	// (0x000768d5) level_6_zoom

0x507d,	// (0x000768de) level_7_zoom

0x5086,	// (0x000768e7) level_8_zoom

0x508f,	// (0x000768f0) level_9_zoom

0x50a0,	// (0x00076901) popup_phob_thumbnail_window_g1

0x50a8,	// (0x00076909) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x00080c71) popup_phob_thumbnail_window_g

0xbe94,	// (0x0007d6f5) level_1_location

0xbe9c,	// (0x0007d6fd) level_2_location

0xbea4,	// (0x0007d705) level_3_location

0xbeac,	// (0x0007d70d) level_4_location

0x3128,	// (0x00074989) level_5_location

0x50b0,	// (0x00076911) mce_icon_pane_g1

0x50b8,	// (0x00076919) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00080c76) mce_icon_pane_g

0x50c0,	// (0x00076921) main_mup_pane_g1_ParamLimits

0x50c0,	// (0x00076921) main_mup_pane_g1

0x50d6,	// (0x00076937) main_mup_pane_g2_ParamLimits

0x50d6,	// (0x00076937) main_mup_pane_g2

0x50ee,	// (0x0007694f) main_mup_pane_g3_ParamLimits

0x50ee,	// (0x0007694f) main_mup_pane_g3

0x5106,	// (0x00076967) main_mup_pane_g4_ParamLimits

0x5106,	// (0x00076967) main_mup_pane_g4

0x511e,	// (0x0007697f) main_mup_pane_g5_ParamLimits

0x511e,	// (0x0007697f) main_mup_pane_g5

0x5138,	// (0x00076999) main_mup_pane_g6_ParamLimits

0x5138,	// (0x00076999) main_mup_pane_g6

0x5150,	// (0x000769b1) main_mup_pane_g7_ParamLimits

0x5150,	// (0x000769b1) main_mup_pane_g7

0x5168,	// (0x000769c9) main_mup_pane_g8_ParamLimits

0x5168,	// (0x000769c9) main_mup_pane_g8

0x5180,	// (0x000769e1) main_mup_pane_g9_ParamLimits

0x5180,	// (0x000769e1) main_mup_pane_g9

0x5194,	// (0x000769f5) main_mup_pane_g10_ParamLimits

0x5194,	// (0x000769f5) main_mup_pane_g10

0x51a8,	// (0x00076a09) main_mup_pane_g11_ParamLimits

0x51a8,	// (0x00076a09) main_mup_pane_g11

0x51ba,	// (0x00076a1b) main_mup_pane_g12_ParamLimits

0x51ba,	// (0x00076a1b) main_mup_pane_g12

0x51ce,	// (0x00076a2f) main_mup_pane_g13_ParamLimits

0x51ce,	// (0x00076a2f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00080c7b) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00080c7b) main_mup_pane_g

0x51e0,	// (0x00076a41) main_mup_pane_t1_ParamLimits

0x51e0,	// (0x00076a41) main_mup_pane_t1

0x51fa,	// (0x00076a5b) main_mup_pane_t2_ParamLimits

0x51fa,	// (0x00076a5b) main_mup_pane_t2

0x5212,	// (0x00076a73) main_mup_pane_t3_ParamLimits

0x5212,	// (0x00076a73) main_mup_pane_t3

0x522a,	// (0x00076a8b) main_mup_pane_t4_ParamLimits

0x522a,	// (0x00076a8b) main_mup_pane_t4

0x5248,	// (0x00076aa9) main_mup_pane_t5_ParamLimits

0x5248,	// (0x00076aa9) main_mup_pane_t5

0x525d,	// (0x00076abe) main_mup_pane_t6_ParamLimits

0x525d,	// (0x00076abe) main_mup_pane_t6

0x0005,

0xf435,	// (0x00080c96) main_mup_pane_t_ParamLimits

0xf435,	// (0x00080c96) main_mup_pane_t

0x526f,	// (0x00076ad0) mup_progress_pane_ParamLimits

0x526f,	// (0x00076ad0) mup_progress_pane

0x527b,	// (0x00076adc) mup_visualizer_pane_ParamLimits

0x527b,	// (0x00076adc) mup_visualizer_pane

0x52a3,	// (0x00076b04) mup_volume_pane_ParamLimits

0x52a3,	// (0x00076b04) mup_volume_pane

0x52c1,	// (0x00076b22) mup_visualizer_pane_g1_ParamLimits

0x52c1,	// (0x00076b22) mup_visualizer_pane_g1

0x52c1,	// (0x00076b22) mup_visualizer_pane_g2_ParamLimits

0x52c1,	// (0x00076b22) mup_visualizer_pane_g2

0x4d91,	// (0x000765f2) mup_visualizer_pane_g3_ParamLimits

0x4d91,	// (0x000765f2) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x00080ca3) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x00080ca3) mup_visualizer_pane_g

0x2910,	// (0x00074171) mup_volume_pane_g1

0x52d7,	// (0x00076b38) mup_volume_pane_g2

0x0001,

0xf449,	// (0x00080caa) mup_volume_pane_g

0x2910,	// (0x00074171) mup_progress_pane_g1

0x52e0,	// (0x00076b41) mup_progress_pane_g2

0x52e9,	// (0x00076b4a) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x00080caf) mup_progress_pane_g

0x2272,	// (0x00073ad3) bg_popup_window_pane_cp05

0x52f2,	// (0x00076b53) heading_pane_cp02_ParamLimits

0x52f2,	// (0x00076b53) heading_pane_cp02

0x530c,	// (0x00076b6d) list_popup_blid_pane

0x5314,	// (0x00076b75) list_blid_sat_info_pane_ParamLimits

0x5314,	// (0x00076b75) list_blid_sat_info_pane

0x5326,	// (0x00076b87) list_blid_sat_info_pane_g1

0x532e,	// (0x00076b8f) list_blid_sat_info_pane_t1

0x540e,	// (0x00076c6f) mup_equalizer_pane_ParamLimits

0x540e,	// (0x00076c6f) mup_equalizer_pane

0x5427,	// (0x00076c88) mup_equalizer_pane_cp1_ParamLimits

0x5427,	// (0x00076c88) mup_equalizer_pane_cp1

0x5440,	// (0x00076ca1) mup_equalizer_pane_cp2_ParamLimits

0x5440,	// (0x00076ca1) mup_equalizer_pane_cp2

0x5459,	// (0x00076cba) mup_equalizer_pane_cp3_ParamLimits

0x5459,	// (0x00076cba) mup_equalizer_pane_cp3

0x5472,	// (0x00076cd3) mup_equalizer_pane_cp4_ParamLimits

0x5472,	// (0x00076cd3) mup_equalizer_pane_cp4

0x548b,	// (0x00076cec) mup_equalizer_pane_cp5

0x549d,	// (0x00076cfe) mup_equalizer_pane_cp6

0x54af,	// (0x00076d10) mup_equalizer_pane_cp7

0xbd72,	// (0x0007d5d3) bg_popup_call_poc_act_pane_g9

0xbd7a,	// (0x0007d5db) bg_popup_call_poc_act_pane_g10

0xbd82,	// (0x0007d5e3) bg_popup_call_poc_act_pane_g11

0x000a,

0x24cd,	// (0x00073d2e) mup_scale_pane

0x2910,	// (0x00074171) mup_scale_pane_g1

0x54c3,	// (0x00076d24) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x00080ccb) mup_scale_pane_g

0x54f9,	// (0x00076d5a) msg_data_pane

0x5501,	// (0x00076d62) scroll_pane_cp017

0x0f4b,	// (0x000727ac) bg_list_pane_cp04_ParamLimits

0x0f4b,	// (0x000727ac) bg_list_pane_cp04

0x5509,	// (0x00076d6a) msg_data_pane_g1

0x5511,	// (0x00076d72) msg_data_pane_g2

0x5519,	// (0x00076d7a) msg_data_pane_g3

0x5521,	// (0x00076d82) msg_data_pane_g4

0x5529,	// (0x00076d8a) msg_data_pane_g5

0x5531,	// (0x00076d92) msg_data_pane_g6

0x5539,	// (0x00076d9a) msg_data_pane_g7

0x0006,

0xf479,	// (0x00080cda) msg_data_pane_g

0x0f6b,	// (0x000727cc) msg_text_pane_ParamLimits

0x0f6b,	// (0x000727cc) msg_text_pane

0x5541,	// (0x00076da2) qrid_highlight_pane_cp011_ParamLimits

0x5541,	// (0x00076da2) qrid_highlight_pane_cp011

0x2272,	// (0x00073ad3) msg_body_pane

0x2272,	// (0x00073ad3) msg_header_pane

0x5560,	// (0x00076dc1) input_focus_pane_cp07

0x0f9b,	// (0x000727fc) msg_header_pane_t1_ParamLimits

0x0f9b,	// (0x000727fc) msg_header_pane_t1

0x0fad,	// (0x0007280e) msg_header_pane_t2_ParamLimits

0x0fad,	// (0x0007280e) msg_header_pane_t2

0x0001,

0xf48d,	// (0x00080cee) msg_header_pane_t_ParamLimits

0xf48d,	// (0x00080cee) msg_header_pane_t

0x5575,	// (0x00076dd6) msg_body_pane_g1

0x0fbf,	// (0x00072820) msg_body_pane_t1_ParamLimits

0x0fbf,	// (0x00072820) msg_body_pane_t1

0x0ff0,	// (0x00072851) msg_body_pane_t2_ParamLimits

0x0ff0,	// (0x00072851) msg_body_pane_t2

0x1002,	// (0x00072863) msg_body_pane_t3_ParamLimits

0x1002,	// (0x00072863) msg_body_pane_t3

0x0002,

0xf492,	// (0x00080cf3) msg_body_pane_t_ParamLimits

0xf492,	// (0x00080cf3) msg_body_pane_t

0x55b3,	// (0x00076e14) main_viewer_pane_g1_ParamLimits

0x55b3,	// (0x00076e14) main_viewer_pane_g1

0x55bf,	// (0x00076e20) main_viewer_pane_g2_ParamLimits

0x55bf,	// (0x00076e20) main_viewer_pane_g2

0x55cb,	// (0x00076e2c) main_viewer_pane_g3_ParamLimits

0x55cb,	// (0x00076e2c) main_viewer_pane_g3

0x55da,	// (0x00076e3b) main_viewer_pane_g4_ParamLimits

0x55da,	// (0x00076e3b) main_viewer_pane_g4

0xaee3,	// (0x0007c744) main_viewer_pane_g5_ParamLimits

0xaee3,	// (0x0007c744) main_viewer_pane_g5

0xaee3,	// (0x0007c744) main_viewer_pane_g7_ParamLimits

0xaee3,	// (0x0007c744) main_viewer_pane_g7

0xaef5,	// (0x0007c756) main_viewer_pane_g8_ParamLimits

0xaef5,	// (0x0007c756) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x00080d03) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x00080d03) main_viewer_pane_g

0x55e9,	// (0x00076e4a) viewer_content_pane_ParamLimits

0x55e9,	// (0x00076e4a) viewer_content_pane

0x561c,	// (0x00076e7d) main_postcard_pane_g1_ParamLimits

0x561c,	// (0x00076e7d) main_postcard_pane_g1

0x5630,	// (0x00076e91) main_postcard_pane_g2_ParamLimits

0x5630,	// (0x00076e91) main_postcard_pane_g2

0x5644,	// (0x00076ea5) main_postcard_pane_g3_ParamLimits

0x5644,	// (0x00076ea5) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00080d14) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00080d14) main_postcard_pane_g

0x5657,	// (0x00076eb8) main_postcard_pane_g4

0xbfdc,	// (0x0007d83d) smil_status_volume_pane_g2

0x5692,	// (0x00076ef3) postcard_pane_ParamLimits

0x5692,	// (0x00076ef3) postcard_pane

0x56ce,	// (0x00076f2f) postcard_pane_g1_ParamLimits

0x56ce,	// (0x00076f2f) postcard_pane_g1

0x56dc,	// (0x00076f3d) postcard_pane_g2_ParamLimits

0x56dc,	// (0x00076f3d) postcard_pane_g2

0x56e8,	// (0x00076f49) postcard_pane_g3_ParamLimits

0x56e8,	// (0x00076f49) postcard_pane_g3

0x56f4,	// (0x00076f55) postcard_pane_g4_ParamLimits

0x56f4,	// (0x00076f55) postcard_pane_g4

0x5702,	// (0x00076f63) postcard_pane_g5_ParamLimits

0x5702,	// (0x00076f63) postcard_pane_g5

0x5716,	// (0x00076f77) postcard_pane_g6_ParamLimits

0x5716,	// (0x00076f77) postcard_pane_g6

0x56ce,	// (0x00076f2f) postcard_pane_g7_ParamLimits

0x56ce,	// (0x00076f2f) postcard_pane_g7

0x0006,

0xf4c0,	// (0x00080d21) postcard_pane_g_ParamLimits

0xf4c0,	// (0x00080d21) postcard_pane_g

0x5728,	// (0x00076f89) main_mp2_pane_g1_ParamLimits

0x5728,	// (0x00076f89) main_mp2_pane_g1

0x5734,	// (0x00076f95) main_mp2_pane_g2_ParamLimits

0x5734,	// (0x00076f95) main_mp2_pane_g2

0x5740,	// (0x00076fa1) main_mp2_pane_g3_ParamLimits

0x5740,	// (0x00076fa1) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x00080d30) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x00080d30) main_mp2_pane_g

0x574c,	// (0x00076fad) main_mp2_pane_t1_ParamLimits

0x574c,	// (0x00076fad) main_mp2_pane_t1

0x5761,	// (0x00076fc2) main_mp2_pane_t2_ParamLimits

0x5761,	// (0x00076fc2) main_mp2_pane_t2

0x5773,	// (0x00076fd4) main_mp2_pane_t3_ParamLimits

0x5773,	// (0x00076fd4) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00080d37) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00080d37) main_mp2_pane_t

0x5785,	// (0x00076fe6) pec_content_pane_ParamLimits

0x5785,	// (0x00076fe6) pec_content_pane

0x3976,	// (0x000751d7) scroll_pane_cp015

0x5797,	// (0x00076ff8) pec_attribute_pane_ParamLimits

0x5797,	// (0x00076ff8) pec_attribute_pane

0x57a7,	// (0x00077008) pec_content_pane_g1_ParamLimits

0x57a7,	// (0x00077008) pec_content_pane_g1

0x57b3,	// (0x00077014) pec_content_pane_t1_ParamLimits

0x57b3,	// (0x00077014) pec_content_pane_t1

0x57c5,	// (0x00077026) pec_content_pane_t2_ParamLimits

0x57c5,	// (0x00077026) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x00080d3e) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x00080d3e) pec_content_pane_t

0x57d7,	// (0x00077038) list_single_graphic_pane_cp01_ParamLimits

0x57d7,	// (0x00077038) list_single_graphic_pane_cp01

0x24cd,	// (0x00073d2e) bg_popup_sub_pane_cp04

0x57eb,	// (0x0007704c) popup_mup_playback_window_g1

0x57f7,	// (0x00077058) popup_mup_playback_window_t1

0x580c,	// (0x0007706d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x00080d43) popup_mup_playback_window_t

0x5861,	// (0x000770c2) main_image_pane_g1_ParamLimits

0x5861,	// (0x000770c2) main_image_pane_g1

0x593c,	// (0x0007719d) scroll_pane_cp018_ParamLimits

0x593c,	// (0x0007719d) scroll_pane_cp018

0x5954,	// (0x000771b5) scroll_pane_cp016_ParamLimits

0x5954,	// (0x000771b5) scroll_pane_cp016

0x5988,	// (0x000771e9) smil2_image_pane_ParamLimits

0x5988,	// (0x000771e9) smil2_image_pane

0x59b0,	// (0x00077211) smil2_root_pane_ParamLimits

0x59b0,	// (0x00077211) smil2_root_pane

0x59e8,	// (0x00077249) smil2_text_pane_ParamLimits

0x59e8,	// (0x00077249) smil2_text_pane

0x2272,	// (0x00073ad3) bg_list_pane_cp06

0x5a56,	// (0x000772b7) grid_radio_pane

0x2272,	// (0x00073ad3) bg_popup_window_pane_cp06

0x5a5e,	// (0x000772bf) main_fmradio_pane_t1

0x4a1f,	// (0x00076280) heading_pane_cp04

0x5a6c,	// (0x000772cd) main_fmradio_pane_t2

0xbdca,	// (0x0007d62b) popup_cale_lunar_info_window_g1

0x5a7a,	// (0x000772db) main_fmradio_pane_t3

0xbdd2,	// (0x0007d633) popup_cale_lunar_info_window_g2

0x5a88,	// (0x000772e9) main_fmradio_pane_t4

0x0001,

0x5a96,	// (0x000772f7) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x00080e31) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00080d58) main_fmradio_pane_t

0x5aa4,	// (0x00077305) wait_bar_pane_cp03

0x5aac,	// (0x0007730d) cell_fmradio_pane_ParamLimits

0x5aac,	// (0x0007730d) cell_fmradio_pane

0x56ce,	// (0x00076f2f) cell_fmradio_pane_g1_ParamLimits

0x56ce,	// (0x00076f2f) cell_fmradio_pane_g1

0x2272,	// (0x00073ad3) grid_highlight_pane_cp011

0x5abf,	// (0x00077320) poc_content_pane_ParamLimits

0x5abf,	// (0x00077320) poc_content_pane

0x5ad1,	// (0x00077332) scroll_pane_cp019

0x5ad9,	// (0x0007733a) popup_call_poc_act_window_ParamLimits

0x5ad9,	// (0x0007733a) popup_call_poc_act_window

0x5af9,	// (0x0007735a) popup_call_poc_inact_window_ParamLimits

0x5af9,	// (0x0007735a) popup_call_poc_inact_window

0xf594,	// (0x00080df5) bg_popup_call_poc_act_pane_g

0xbd8a,	// (0x0007d5eb) bg_popup_call_poc_inact_pane_g1

0xbd92,	// (0x0007d5f3) bg_popup_call_poc_inact_pane_g2

0x5b0e,	// (0x0007736f) popup_call_poc_act_window_g2

0xbd9a,	// (0x0007d5fb) bg_popup_call_poc_inact_pane_g3

0xbd1a,	// (0x0007d57b) bg_popup_call_poc_inact_pane_g4

0xbda2,	// (0x0007d603) bg_popup_call_poc_inact_pane_g5

0x5b16,	// (0x00077377) popup_call_poc_act_window_t1_ParamLimits

0x5b16,	// (0x00077377) popup_call_poc_act_window_t1

0x5b3e,	// (0x0007739f) popup_call_poc_act_window_t2_ParamLimits

0x5b3e,	// (0x0007739f) popup_call_poc_act_window_t2

0x5b66,	// (0x000773c7) popup_call_poc_act_window_t3_ParamLimits

0x5b66,	// (0x000773c7) popup_call_poc_act_window_t3

0x5b8e,	// (0x000773ef) popup_call_poc_act_window_t4_ParamLimits

0x5b8e,	// (0x000773ef) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x00080d63) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x00080d63) popup_call_poc_act_window_t

0xbdaa,	// (0x0007d60b) bg_popup_call_poc_inact_pane_g6

0xbdb2,	// (0x0007d613) bg_popup_call_poc_inact_pane_g7

0xbdba,	// (0x0007d61b) bg_popup_call_poc_inact_pane_g8

0x5ba0,	// (0x00077401) popup_call_poc_inact_window_g2

0xbdc2,	// (0x0007d623) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x00080e0c) bg_popup_call_poc_inact_pane_g

0x5ba8,	// (0x00077409) popup_call_poc_inact_window_t1_ParamLimits

0x5ba8,	// (0x00077409) popup_call_poc_inact_window_t1

0x5bbd,	// (0x0007741e) popup_call_poc_inact_window_t2_ParamLimits

0x5bbd,	// (0x0007741e) popup_call_poc_inact_window_t2

0x5bd2,	// (0x00077433) popup_call_poc_inact_window_t3_ParamLimits

0x5bd2,	// (0x00077433) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00080d6c) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00080d6c) popup_call_poc_inact_window_t

0xbf4f,	// (0x0007d7b0) context_pane_ParamLimits

0x62ed,	// (0x00077b4e) signal_pane_ParamLimits

0x3128,	// (0x00074989) main_call2_pane

0xbf28,	// (0x0007d789) popup_phob_thumbnail2_window_ParamLimits

0xbf28,	// (0x0007d789) popup_phob_thumbnail2_window

0xaecb,	// (0x0007c72c) aid_hotspot_pointer_arrow_pane

0xaed3,	// (0x0007c734) aid_hotspot_pointer_hand_pane

0x5ea6,	// (0x00077707) phob_pre_status_pane_g5

0x31a3,	// (0x00074a04) cams_zoom_pane_ParamLimits

0x31b2,	// (0x00074a13) image_vga_pane_ParamLimits

0x31c8,	// (0x00074a29) main_camera_pane_g1_ParamLimits

0x31d8,	// (0x00074a39) main_camera_pane_g2_ParamLimits

0x31e8,	// (0x00074a49) main_camera_pane_g3_ParamLimits

0x31f8,	// (0x00074a59) main_camera_pane_g4_ParamLimits

0x3208,	// (0x00074a69) main_camera_pane_g5_ParamLimits

0x3218,	// (0x00074a79) main_camera_pane_g6_ParamLimits

0x3228,	// (0x00074a89) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00080a6b) main_camera_pane_g_ParamLimits

0x3244,	// (0x00074aa5) main_camera_pane_t1_ParamLimits

0x325a,	// (0x00074abb) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00080a7c) main_camera_pane_t_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_preview_window_pane_cp01_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_preview_window_pane_cp01

0xaf0d,	// (0x0007c76e) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf0d,	// (0x0007c76e) popup_phob_thumbnail2_window_g1

0x2272,	// (0x00073ad3) call2_cli_visual_pane

0x5bfe,	// (0x0007745f) popup_call2_audio_conf_window_ParamLimits

0x5bfe,	// (0x0007745f) popup_call2_audio_conf_window

0x5c1c,	// (0x0007747d) popup_call2_audio_first_window_ParamLimits

0x5c1c,	// (0x0007747d) popup_call2_audio_first_window

0x5c92,	// (0x000774f3) popup_call2_audio_in_window_ParamLimits

0x5c92,	// (0x000774f3) popup_call2_audio_in_window

0x5cc6,	// (0x00077527) popup_call2_audio_out_window_ParamLimits

0x5cc6,	// (0x00077527) popup_call2_audio_out_window

0x5d18,	// (0x00077579) popup_call2_audio_second_window_ParamLimits

0x5d18,	// (0x00077579) popup_call2_audio_second_window

0x5d6a,	// (0x000775cb) popup_call2_audio_wait_window_ParamLimits

0x5d6a,	// (0x000775cb) popup_call2_audio_wait_window

0x2272,	// (0x00073ad3) bg_popup_call2_act_pane_cp03

0x24af,	// (0x00073d10) list_conf_pane_cp

0xaf19,	// (0x0007c77a) popup_call2_audio_conf_window_t1

0x4a9e,	// (0x000762ff) list_single_graphic_popup_conf2_pane_ParamLimits

0x4a9e,	// (0x000762ff) list_single_graphic_popup_conf2_pane

0x4ab1,	// (0x00076312) list_highlight_pane_cp04

0xaf27,	// (0x0007c788) list_single_graphic_popup_conf2_pane_g1

0x4ac2,	// (0x00076323) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x00080d73) list_single_graphic_popup_conf2_pane_g

0xaf2f,	// (0x0007c790) list_single_graphic_popup_conf2_pane_t1

0xaf3d,	// (0x0007c79e) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf3d,	// (0x0007c79e) bg_popup_call2_act_pane_cp01

0xafc7,	// (0x0007c828) call_type_pane_cp05_ParamLimits

0xafc7,	// (0x0007c828) call_type_pane_cp05

0xb01b,	// (0x0007c87c) popup_call2_audio_second_window_g1_ParamLimits

0xb01b,	// (0x0007c87c) popup_call2_audio_second_window_g1

0xb06f,	// (0x0007c8d0) popup_call2_audio_second_window_g2_ParamLimits

0xb06f,	// (0x0007c8d0) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00080d78) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00080d78) popup_call2_audio_second_window_g

0xb0d4,	// (0x0007c935) popup_call2_audio_second_window_t1_ParamLimits

0xb0d4,	// (0x0007c935) popup_call2_audio_second_window_t1

0xb18f,	// (0x0007c9f0) popup_call2_audio_second_window_t2_ParamLimits

0xb18f,	// (0x0007c9f0) popup_call2_audio_second_window_t2

0xb1e2,	// (0x0007ca43) popup_call2_audio_second_window_t3_ParamLimits

0xb1e2,	// (0x0007ca43) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x00080d7f) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x00080d7f) popup_call2_audio_second_window_t

0x2272,	// (0x00073ad3) bg_popup_call2_in_pane_cp02

0x227c,	// (0x00073add) call_type_pane_cp04

0x2284,	// (0x00073ae5) popup_call2_audio_wait_window_g1

0x228c,	// (0x00073aed) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0008095a) popup_call2_audio_wait_window_g

0x2294,	// (0x00073af5) popup_call2_audio_wait_window_t3

0xb2d5,	// (0x0007cb36) bg_popup_call2_act_pane_ParamLimits

0xb2d5,	// (0x0007cb36) bg_popup_call2_act_pane

0xb395,	// (0x0007cbf6) call_type_pane_cp03_ParamLimits

0xb395,	// (0x0007cbf6) call_type_pane_cp03

0xb3f9,	// (0x0007cc5a) popup_call2_audio_first_window_g1_ParamLimits

0xb3f9,	// (0x0007cc5a) popup_call2_audio_first_window_g1

0xb469,	// (0x0007ccca) popup_call2_audio_first_window_g2_ParamLimits

0xb469,	// (0x0007ccca) popup_call2_audio_first_window_g2

0x52c1,	// (0x00076b22) popup_call2_audio_first_window_g3_ParamLimits

0x52c1,	// (0x00076b22) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00080d88) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00080d88) popup_call2_audio_first_window_g

0xb547,	// (0x0007cda8) popup_call2_audio_first_window_t1_ParamLimits

0xb547,	// (0x0007cda8) popup_call2_audio_first_window_t1

0xb64a,	// (0x0007ceab) popup_call2_audio_first_window_t4_ParamLimits

0xb64a,	// (0x0007ceab) popup_call2_audio_first_window_t4

0xb72d,	// (0x0007cf8e) popup_call2_audio_first_window_t5_ParamLimits

0xb72d,	// (0x0007cf8e) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x00080d93) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x00080d93) popup_call2_audio_first_window_t

0x24c5,	// (0x00073d26) bg_popup_call2_act_pane_g1

0xbdda,	// (0x0007d63b) popup_cale_lunar_info_window_t1

0xbde8,	// (0x0007d649) popup_cale_lunar_info_window_t2

0xbdf6,	// (0x0007d657) popup_cale_lunar_info_window_t3

0x2272,	// (0x00073ad3) bg_popup_call2_bubble_pane

0xb82e,	// (0x0007d08f) bg_popup_call2_in_pane_cp01_ParamLimits

0xb82e,	// (0x0007d08f) bg_popup_call2_in_pane_cp01

0x1f2a,	// (0x0007378b) call_type_pane_cp02

0xb876,	// (0x0007d0d7) popup_call2_audio_out_window_g1_ParamLimits

0xb876,	// (0x0007d0d7) popup_call2_audio_out_window_g1

0xb8a2,	// (0x0007d103) popup_call2_audio_out_window_g2_ParamLimits

0xb8a2,	// (0x0007d103) popup_call2_audio_out_window_g2

0xb8ca,	// (0x0007d12b) popup_call2_audio_out_window_g3_ParamLimits

0xb8ca,	// (0x0007d12b) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00080d9c) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00080d9c) popup_call2_audio_out_window_g

0xb905,	// (0x0007d166) popup_call2_audio_out_window_t1_ParamLimits

0xb905,	// (0x0007d166) popup_call2_audio_out_window_t1

0xb964,	// (0x0007d1c5) popup_call2_audio_out_window_t2_ParamLimits

0xb964,	// (0x0007d1c5) popup_call2_audio_out_window_t2

0xb9b8,	// (0x0007d219) popup_call2_audio_out_window_t3_ParamLimits

0xb9b8,	// (0x0007d219) popup_call2_audio_out_window_t3

0xb9ce,	// (0x0007d22f) popup_call2_audio_out_window_t4_ParamLimits

0xb9ce,	// (0x0007d22f) popup_call2_audio_out_window_t4

0xb9e4,	// (0x0007d245) popup_call2_audio_out_window_t5_ParamLimits

0xb9e4,	// (0x0007d245) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x00080da5) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x00080da5) popup_call2_audio_out_window_t

0xba48,	// (0x0007d2a9) bg_popup_call2_in_pane_ParamLimits

0xba48,	// (0x0007d2a9) bg_popup_call2_in_pane

0xbaa4,	// (0x0007d305) popup_call2_audio_in_window_g1_ParamLimits

0xbaa4,	// (0x0007d305) popup_call2_audio_in_window_g1

0xbadc,	// (0x0007d33d) popup_call2_audio_in_window_g2_ParamLimits

0xbadc,	// (0x0007d33d) popup_call2_audio_in_window_g2

0xbb14,	// (0x0007d375) popup_call2_audio_in_window_g3_ParamLimits

0xbb14,	// (0x0007d375) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x00080db2) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x00080db2) popup_call2_audio_in_window_g

0xbb6c,	// (0x0007d3cd) popup_call2_audio_in_window_t1_ParamLimits

0xbb6c,	// (0x0007d3cd) popup_call2_audio_in_window_t1

0xbbec,	// (0x0007d44d) popup_call2_audio_in_window_t2_ParamLimits

0xbbec,	// (0x0007d44d) popup_call2_audio_in_window_t2

0xbc6c,	// (0x0007d4cd) popup_call2_audio_in_window_t3_ParamLimits

0xbc6c,	// (0x0007d4cd) popup_call2_audio_in_window_t3

0xbc86,	// (0x0007d4e7) popup_call2_audio_in_window_t4_ParamLimits

0xbc86,	// (0x0007d4e7) popup_call2_audio_in_window_t4

0xbc98,	// (0x0007d4f9) popup_call2_audio_in_window_t5_ParamLimits

0xbc98,	// (0x0007d4f9) popup_call2_audio_in_window_t5

0xbcad,	// (0x0007d50e) popup_call2_audio_in_window_t6_ParamLimits

0xbcad,	// (0x0007d50e) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x00080dbb) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x00080dbb) popup_call2_audio_in_window_t

0x24c5,	// (0x00073d26) bg_popup_call2_in_pane_g1

0xbe04,	// (0x0007d665) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x00080e36) popup_cale_lunar_info_window_t

0x24cd,	// (0x00073d2e) bg_popup_call2_rect_pane_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_call2_rect_pane

0x2272,	// (0x00073ad3) call2_cli_visual_graphic_pane

0x2272,	// (0x00073ad3) call2_cli_visual_text_pane

0xbfef,	// (0x0007d850) smil_status_volume_pane_g3

0x0002,

0x2910,	// (0x00074171) call2_cli_visual_graphic_pane_g1

0x2910,	// (0x00074171) call2_cli_visual_graphic_pane_g2

0x2910,	// (0x00074171) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x00080dc8) call2_cli_visual_graphic_pane_g

0xbcc2,	// (0x0007d523) bg_popup_call2_rect_pane_g1

0x2a53,	// (0x000742b4) bg_popup_call2_rect_pane_g2

0xbcca,	// (0x0007d52b) bg_popup_call2_rect_pane_g3

0xbcd2,	// (0x0007d533) bg_popup_call2_rect_pane_g4

0xbcda,	// (0x0007d53b) bg_popup_call2_rect_pane_g5

0xbce2,	// (0x0007d543) bg_popup_call2_rect_pane_g6

0xbcea,	// (0x0007d54b) bg_popup_call2_rect_pane_g7

0xbcf2,	// (0x0007d553) bg_popup_call2_rect_pane_g8

0xbcfa,	// (0x0007d55b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x00080dcf) bg_popup_call2_rect_pane_g

0xbd02,	// (0x0007d563) bg_popup_call2_bubble_pane_g1

0xbd0a,	// (0x0007d56b) bg_popup_call2_bubble_pane_g2

0xbd12,	// (0x0007d573) bg_popup_call2_bubble_pane_g3

0xbd1a,	// (0x0007d57b) bg_popup_call2_bubble_pane_g4

0xbd22,	// (0x0007d583) bg_popup_call2_bubble_pane_g5

0xbd2a,	// (0x0007d58b) bg_popup_call2_bubble_pane_g6

0xbd32,	// (0x0007d593) bg_popup_call2_bubble_pane_g7

0xbd3a,	// (0x0007d59b) bg_popup_call2_bubble_pane_g8

0xbd42,	// (0x0007d5a3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x00080de2) bg_popup_call2_bubble_pane_g

0x2ace,	// (0x0007432f) aid_cale_week_size_cell_pane

0x3270,	// (0x00074ad1) aid_cams_cif_uncrop_pane_ParamLimits

0x3270,	// (0x00074ad1) aid_cams_cif_uncrop_pane

0x344d,	// (0x00074cae) aid_cams_size_cell_ParamLimits

0x344d,	// (0x00074cae) aid_cams_size_cell

0x3461,	// (0x00074cc2) grid_cams_pane_ParamLimits

0x3476,	// (0x00074cd7) linegrid_cams_pane_ParamLimits

0x35a4,	// (0x00074e05) call_video_pane_t1

0x35be,	// (0x00074e1f) call_video_pane_t2

0x0001,

0xf26e,	// (0x00080acf) call_video_pane_t

0x3b96,	// (0x000753f7) aid_cale_month_size_cell_pane_ParamLimits

0x3b96,	// (0x000753f7) aid_cale_month_size_cell_pane

0xf61e,	// (0x00080e7f) smil_status_volume_pane_g

0xbffc,	// (0x0007d85d) volume_smil_pane_ParamLimits

0xacf2,	// (0x0007c553) aid_popup2_width_pane

0x29ab,	// (0x0007420c) cell_qdial_pane_g4_ParamLimits

0x29ab,	// (0x0007420c) cell_qdial_pane_g4

0x4d71,	// (0x000765d2) aid_blid_cardinal_pane_ParamLimits

0x4d7d,	// (0x000765de) aid_blid_destination_pane_ParamLimits

0x4d7d,	// (0x000765de) aid_blid_destination_pane

0x24cd,	// (0x00073d2e) bg_popup_call_poc_act_pane_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_call_poc_act_pane

0x24cd,	// (0x00073d2e) bg_popup_call_poc_inact_pane_ParamLimits

0x24cd,	// (0x00073d2e) bg_popup_call_poc_inact_pane

0xbd4a,	// (0x0007d5ab) bg_popup_call_poc_act_pane_g1

0xbd52,	// (0x0007d5b3) bg_popup_call_poc_act_pane_g2

0xbd5a,	// (0x0007d5bb) bg_popup_call_poc_act_pane_g3

0xbd1a,	// (0x0007d57b) bg_popup_call_poc_act_pane_g4

0xbd22,	// (0x0007d583) bg_popup_call_poc_act_pane_g5

0xbd62,	// (0x0007d5c3) bg_popup_call_poc_act_pane_g6

0xbd32,	// (0x0007d593) bg_popup_call_poc_act_pane_g7

0xbd6a,	// (0x0007d5cb) bg_popup_call_poc_act_pane_g8

0x2272,	// (0x00073ad3) main_usb_pane

0x60ec,	// (0x0007794d) popup_cale_lunar_info_window

0x3861,	// (0x000750c2) im_reading_pane_t1_ParamLimits

0x3897,	// (0x000750f8) list_im_pane_ParamLimits

0x38a8,	// (0x00075109) scroll_pane_cp07_ParamLimits

0x2272,	// (0x00073ad3) grid_highlight_pane_cp012

0x24cd,	// (0x00073d2e) mup_scale_pane_ParamLimits

0x56ce,	// (0x00076f2f) main_usb_pane_g1_ParamLimits

0x56ce,	// (0x00076f2f) main_usb_pane_g1

0x5dc3,	// (0x00077624) main_usb_pane_g2_ParamLimits

0x5dc3,	// (0x00077624) main_usb_pane_g2

0x0001,

0xf5be,	// (0x00080e1f) main_usb_pane_g_ParamLimits

0xf5be,	// (0x00080e1f) main_usb_pane_g

0x5dd7,	// (0x00077638) main_usb_pane_t1_ParamLimits

0x5dd7,	// (0x00077638) main_usb_pane_t1

0x5de9,	// (0x0007764a) main_usb_pane_t2_ParamLimits

0x5de9,	// (0x0007764a) main_usb_pane_t2

0x5dfb,	// (0x0007765c) main_usb_pane_t3_ParamLimits

0x5dfb,	// (0x0007765c) main_usb_pane_t3

0x5e0d,	// (0x0007766e) main_usb_pane_t4_ParamLimits

0x5e0d,	// (0x0007766e) main_usb_pane_t4

0x5e1f,	// (0x00077680) main_usb_pane_t5_ParamLimits

0x5e1f,	// (0x00077680) main_usb_pane_t5

0x5e31,	// (0x00077692) main_usb_pane_t6_ParamLimits

0x5e31,	// (0x00077692) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x00080e24) main_usb_pane_t_ParamLimits

0x4d20,	// (0x00076581) aid_text_placing

0x4d29,	// (0x0007658a) main_location2_pane_t1_ParamLimits

0x4d3b,	// (0x0007659c) main_location2_pane_t2_ParamLimits

0x4d4d,	// (0x000765ae) main_location2_pane_t3_ParamLimits

0x4d5f,	// (0x000765c0) main_location2_pane_t4_ParamLimits

0x4d5f,	// (0x000765c0) main_location2_pane_t4

0xf3cf,	// (0x00080c30) main_location2_pane_t_ParamLimits

0x2597,	// (0x00073df8) find_pinb_pane_g2_ParamLimits

0x2597,	// (0x00073df8) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00080980) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00080980) find_pinb_pane_g

0x25a3,	// (0x00073e04) find_pinb_pane_t1_ParamLimits

0x25b5,	// (0x00073e16) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00080985) find_pinb_pane_t_ParamLimits

0x2272,	// (0x00073ad3) main_call3_pane

0x4018,	// (0x00075879) cale_month_day_heading_pane_t1_ParamLimits

0x409e,	// (0x000758ff) cale_month_day_heading_pane_t2_ParamLimits

0x4117,	// (0x00075978) cale_month_day_heading_pane_t3_ParamLimits

0x4190,	// (0x000759f1) cale_month_day_heading_pane_t4_ParamLimits

0x4209,	// (0x00075a6a) cale_month_day_heading_pane_t5_ParamLimits

0x4282,	// (0x00075ae3) cale_month_day_heading_pane_t6_ParamLimits

0x42fb,	// (0x00075b5c) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00080b07) cale_month_day_heading_pane_t_ParamLimits

0x4555,	// (0x00075db6) smil_status_volume_pane

0x56ae,	// (0x00076f0f) postcard_address_pane_ParamLimits

0x56ae,	// (0x00076f0f) postcard_address_pane

0x56be,	// (0x00076f1f) postcard_message_pane_ParamLimits

0x56be,	// (0x00076f1f) postcard_message_pane

0x5da2,	// (0x00077603) call2_cli_visual_pane_t1_ParamLimits

0x5da2,	// (0x00077603) call2_cli_visual_pane_t1

0x6507,	// (0x00077d68) postcard_message_pane_t1_ParamLimits

0x6507,	// (0x00077d68) postcard_message_pane_t1

0x64f0,	// (0x00077d51) postcard_address_pane_t1_ParamLimits

0x64f0,	// (0x00077d51) postcard_address_pane_t1

0x64de,	// (0x00077d3f) popup_call3_audio_in_window_ParamLimits

0x64de,	// (0x00077d3f) popup_call3_audio_in_window

0x636d,	// (0x00077bce) bg_popup_call3_in_pane_ParamLimits

0x636d,	// (0x00077bce) bg_popup_call3_in_pane

0x63df,	// (0x00077c40) popup_call3_audio_in_window_g1_ParamLimits

0x63df,	// (0x00077c40) popup_call3_audio_in_window_g1

0x63ff,	// (0x00077c60) popup_call3_audio_in_window_g2_ParamLimits

0x63ff,	// (0x00077c60) popup_call3_audio_in_window_g2

0x641f,	// (0x00077c80) popup_call3_audio_in_window_g3_ParamLimits

0x641f,	// (0x00077c80) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x00080e86) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x00080e86) popup_call3_audio_in_window_g

0x6450,	// (0x00077cb1) popup_call3_audio_in_window_t1_ParamLimits

0x6450,	// (0x00077cb1) popup_call3_audio_in_window_t1

0x648e,	// (0x00077cef) popup_call3_audio_in_window_t2_ParamLimits

0x648e,	// (0x00077cef) popup_call3_audio_in_window_t2

0x64cc,	// (0x00077d2d) popup_call3_audio_in_window_t3_ParamLimits

0x64cc,	// (0x00077d2d) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x00080e8f) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x00080e8f) popup_call3_audio_in_window_t

0x3128,	// (0x00074989) bg_popup_call3_rect_pane

0xbcc2,	// (0x0007d523) bg_popup_call3_rect_pane_g1

0x2a53,	// (0x000742b4) bg_popup_call3_rect_pane_g2

0xbcca,	// (0x0007d52b) bg_popup_call3_rect_pane_g3

0xbcd2,	// (0x0007d533) bg_popup_call3_rect_pane_g4

0xbcda,	// (0x0007d53b) bg_popup_call3_rect_pane_g5

0xbce2,	// (0x0007d543) bg_popup_call3_rect_pane_g6

0xbcea,	// (0x0007d54b) bg_popup_call3_rect_pane_g7

0x52b9,	// (0x00076b1a) mup_visualizer_osc_pane

0x52cf,	// (0x00076b30) mup_visualizer_spec_pane

0x639d,	// (0x00077bfe) call3_video_qcif_pane_ParamLimits

0x639d,	// (0x00077bfe) call3_video_qcif_pane

0x63ae,	// (0x00077c0f) call3_video_qcif_uncrop_pane_ParamLimits

0x63ae,	// (0x00077c0f) call3_video_qcif_uncrop_pane

0x63ba,	// (0x00077c1b) call3_video_subqcif_pane_ParamLimits

0x63ba,	// (0x00077c1b) call3_video_subqcif_pane

0x63ce,	// (0x00077c2f) call3_video_subqcif_uncrop_pane_ParamLimits

0x63ce,	// (0x00077c2f) call3_video_subqcif_uncrop_pane

0x643f,	// (0x00077ca0) popup_call3_audio_in_window_g4_ParamLimits

0x643f,	// (0x00077ca0) popup_call3_audio_in_window_g4

0x635c,	// (0x00077bbd) mup_spec_half_pane

0x6365,	// (0x00077bc6) mup_spec_half_pane_cp

0xbfaf,	// (0x0007d810) mup_osc_middle_pane

0xbfb8,	// (0x0007d819) mup_visualizer_osc_pane_g1

0x633d,	// (0x00077b9e) mup_spec_bar_pane_ParamLimits

0x633d,	// (0x00077b9e) mup_spec_bar_pane

0xbf9c,	// (0x0007d7fd) mup_spec_bar_pane_g1

0xbfa6,	// (0x0007d807) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00080e7a) mup_spec_bar_pane_g

0x2ace,	// (0x0007432f) aid_cale_week_size_cell_pane_ParamLimits

0x2ae8,	// (0x00074349) bg_cale_heading_pane_ParamLimits

0x2b00,	// (0x00074361) bg_cale_pane_cp01_ParamLimits

0x2b1d,	// (0x0007437e) cale_week_corner_pane_ParamLimits

0x2b3c,	// (0x0007439d) cale_week_day_heading_pane_ParamLimits

0x2b59,	// (0x000743ba) cale_week_scroll_pane_g1_ParamLimits

0x2b6c,	// (0x000743cd) cale_week_scroll_pane_g2_ParamLimits

0x2b84,	// (0x000743e5) cale_week_scroll_pane_g3_ParamLimits

0x2b9c,	// (0x000743fd) cale_week_scroll_pane_g4_ParamLimits

0x2bb4,	// (0x00074415) cale_week_scroll_pane_g5_ParamLimits

0x2bcc,	// (0x0007442d) cale_week_scroll_pane_g6_ParamLimits

0x2be4,	// (0x00074445) cale_week_scroll_pane_g7_ParamLimits

0x2bfc,	// (0x0007445d) cale_week_scroll_pane_g8_ParamLimits

0x2c18,	// (0x00074479) cale_week_scroll_pane_g9_ParamLimits

0x2c30,	// (0x00074491) cale_week_scroll_pane_g10_ParamLimits

0x2c48,	// (0x000744a9) cale_week_scroll_pane_g11_ParamLimits

0x2c60,	// (0x000744c1) cale_week_scroll_pane_g12_ParamLimits

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g13_ParamLimits

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g14_ParamLimits

0x2c78,	// (0x000744d9) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00080a11) cale_week_scroll_pane_g_ParamLimits

0x2cac,	// (0x0007450d) cale_week_time_pane_ParamLimits

0x2cc8,	// (0x00074529) grid_cale_week_pane_ParamLimits

0x2ce2,	// (0x00074543) listscroll_cale_week_pane_t1

0x2cf4,	// (0x00074555) scroll_pane_cp08_ParamLimits

0x3c23,	// (0x00075484) cale_month_corner_pane_ParamLimits

0x3fad,	// (0x0007580e) cale_month_pane_t1

0x3fbf,	// (0x00075820) cale_month_week_pane_ParamLimits

0x4983,	// (0x000761e4) popup_call_status_window_g1_ParamLimits

0x4997,	// (0x000761f8) popup_call_status_window_g2_ParamLimits

0x49ab,	// (0x0007620c) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00080bb7) popup_call_status_window_g_ParamLimits

0x4a0f,	// (0x00076270) aid_call2_pane

0x0f8f,	// (0x000727f0) msg_header_pane_g1

0x56ae,	// (0x00076f0f) postcard_address2_pane_ParamLimits

0x56ae,	// (0x00076f0f) postcard_address2_pane

0x56be,	// (0x00076f1f) postcard_message2_pane_ParamLimits

0x56be,	// (0x00076f1f) postcard_message2_pane

0x62fb,	// (0x00077b5c) message2_row_pane_ParamLimits

0x62fb,	// (0x00077b5c) message2_row_pane

0x6313,	// (0x00077b74) address2_row_pane_ParamLimits

0x6313,	// (0x00077b74) address2_row_pane

0xbf6a,	// (0x0007d7cb) postcard_message2_row_pane_g1

0xbf72,	// (0x0007d7d3) postcard_message2_row_pane_t1

0xbf6a,	// (0x0007d7cb) address2_row_pane_g1

0xbf72,	// (0x0007d7d3) address2_row_pane_t1

0x3120,	// (0x00074981) aid_size_cell_vorec

0x2272,	// (0x00073ad3) main_rss_pane

0x6326,	// (0x00077b87) rss_list_single_pane_ParamLimits

0x6326,	// (0x00077b87) rss_list_single_pane

0xbf80,	// (0x0007d7e1) rss_list_single_pane_t1

0xbf8e,	// (0x0007d7ef) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x00080e75) rss_list_single_pane_t

0x2272,	// (0x00073ad3) main_camera2_pane

0x2272,	// (0x00073ad3) main_video2_pane

0x6560,	// (0x00077dc1) cams_zoom_pane_cp2_ParamLimits

0x6560,	// (0x00077dc1) cams_zoom_pane_cp2

0x6577,	// (0x00077dd8) image2_vga_pane_ParamLimits

0x6577,	// (0x00077dd8) image2_vga_pane

0x65ad,	// (0x00077e0e) main_camera2_pane_g1_ParamLimits

0x65ad,	// (0x00077e0e) main_camera2_pane_g1

0x65cd,	// (0x00077e2e) main_camera2_pane_g2_ParamLimits

0x65cd,	// (0x00077e2e) main_camera2_pane_g2

0x65e4,	// (0x00077e45) main_camera2_pane_g3_ParamLimits

0x65e4,	// (0x00077e45) main_camera2_pane_g3

0x65fb,	// (0x00077e5c) main_camera2_pane_g4_ParamLimits

0x65fb,	// (0x00077e5c) main_camera2_pane_g4

0x6612,	// (0x00077e73) main_camera2_pane_g5_ParamLimits

0x6612,	// (0x00077e73) main_camera2_pane_g5

0x6629,	// (0x00077e8a) main_camera2_pane_g6_ParamLimits

0x6629,	// (0x00077e8a) main_camera2_pane_g6

0x6640,	// (0x00077ea1) main_camera2_pane_g7_ParamLimits

0x6640,	// (0x00077ea1) main_camera2_pane_g7

0x6657,	// (0x00077eb8) main_camera2_pane_g8_ParamLimits

0x6657,	// (0x00077eb8) main_camera2_pane_g8

0x0008,

0xf635,	// (0x00080e96) main_camera2_pane_g_ParamLimits

0xf635,	// (0x00080e96) main_camera2_pane_g

0x6685,	// (0x00077ee6) main_camera2_pane_t1_ParamLimits

0x6685,	// (0x00077ee6) main_camera2_pane_t1

0x66b4,	// (0x00077f15) main_camera2_pane_t2_ParamLimits

0x66b4,	// (0x00077f15) main_camera2_pane_t2

0x66d1,	// (0x00077f32) main_camera2_pane_t3_ParamLimits

0x66d1,	// (0x00077f32) main_camera2_pane_t3

0x671d,	// (0x00077f7e) main_camera2_pane_t4_ParamLimits

0x671d,	// (0x00077f7e) main_camera2_pane_t4

0x0006,

0xf648,	// (0x00080ea9) main_camera2_pane_t_ParamLimits

0xf648,	// (0x00080ea9) main_camera2_pane_t

0x6792,	// (0x00077ff3) cams_zoom_pane_cp4_ParamLimits

0x6792,	// (0x00077ff3) cams_zoom_pane_cp4

0x67a8,	// (0x00078009) image2_cif_pane_ParamLimits

0x67a8,	// (0x00078009) image2_cif_pane

0x67cb,	// (0x0007802c) image2_subqcif_pane_ParamLimits

0x67cb,	// (0x0007802c) image2_subqcif_pane

0x67e1,	// (0x00078042) main_video2_pane_g1_ParamLimits

0x67e1,	// (0x00078042) main_video2_pane_g1

0x67fb,	// (0x0007805c) main_video2_pane_g2_ParamLimits

0x67fb,	// (0x0007805c) main_video2_pane_g2

0x6811,	// (0x00078072) main_video2_pane_g3_ParamLimits

0x6811,	// (0x00078072) main_video2_pane_g3

0x6827,	// (0x00078088) main_video2_pane_g4_ParamLimits

0x6827,	// (0x00078088) main_video2_pane_g4

0x683d,	// (0x0007809e) main_video2_pane_g5_ParamLimits

0x683d,	// (0x0007809e) main_video2_pane_g5

0x6853,	// (0x000780b4) main_video2_pane_g6_ParamLimits

0x6853,	// (0x000780b4) main_video2_pane_g6

0x0005,

0xf657,	// (0x00080eb8) main_video2_pane_g_ParamLimits

0xf657,	// (0x00080eb8) main_video2_pane_g

0x686d,	// (0x000780ce) main_video2_pane_t1_ParamLimits

0x686d,	// (0x000780ce) main_video2_pane_t1

0x6891,	// (0x000780f2) main_video2_pane_t2_ParamLimits

0x6891,	// (0x000780f2) main_video2_pane_t2

0x68db,	// (0x0007813c) main_video2_pane_t3_ParamLimits

0x68db,	// (0x0007813c) main_video2_pane_t3

0x0002,

0xf664,	// (0x00080ec5) main_video2_pane_t_ParamLimits

0xf664,	// (0x00080ec5) main_video2_pane_t

0x5ee0,	// (0x00077741) call_muted_g2

0x0001,

0xf606,	// (0x00080e67) call_muted_g

0x2272,	// (0x00073ad3) main_mup2_pane

0x691d,	// (0x0007817e) main_mup2_pane_g1_ParamLimits

0x691d,	// (0x0007817e) main_mup2_pane_g1

0x6929,	// (0x0007818a) main_mup2_pane_g2_ParamLimits

0x6929,	// (0x0007818a) main_mup2_pane_g2

0xe9c4,	// (0x00080225) main_mup_pane_g13_cp1

0xe9cc,	// (0x0008022d) mup_volume_pane_cp1

0x6945,	// (0x000781a6) main_mup2_pane_g4_ParamLimits

0x6945,	// (0x000781a6) main_mup2_pane_g4

0x6955,	// (0x000781b6) main_mup2_pane_g5_ParamLimits

0x6955,	// (0x000781b6) main_mup2_pane_g5

0x6965,	// (0x000781c6) main_mup2_pane_g6_ParamLimits

0x6965,	// (0x000781c6) main_mup2_pane_g6

0x6975,	// (0x000781d6) main_mup2_pane_g7_ParamLimits

0x6975,	// (0x000781d6) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x00080ecc) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x00080ecc) main_mup2_pane_g

0x698d,	// (0x000781ee) main_mup2_pane_t1_ParamLimits

0x698d,	// (0x000781ee) main_mup2_pane_t1

0x69a3,	// (0x00078204) main_mup2_pane_t2_ParamLimits

0x69a3,	// (0x00078204) main_mup2_pane_t2

0x69b9,	// (0x0007821a) main_mup2_pane_t3_ParamLimits

0x69b9,	// (0x0007821a) main_mup2_pane_t3

0x69cf,	// (0x00078230) main_mup2_pane_t4_ParamLimits

0x69cf,	// (0x00078230) main_mup2_pane_t4

0x69e7,	// (0x00078248) main_mup2_pane_t5_ParamLimits

0x69e7,	// (0x00078248) main_mup2_pane_t5

0x69ff,	// (0x00078260) main_mup2_pane_t6_ParamLimits

0x69ff,	// (0x00078260) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x00080edb) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x00080edb) main_mup2_pane_t

0x6a2d,	// (0x0007828e) mup2_visualizer_pane_ParamLimits

0x6a2d,	// (0x0007828e) mup2_visualizer_pane

0x6a58,	// (0x000782b9) mup_progress_pane_cp_ParamLimits

0x6a58,	// (0x000782b9) mup_progress_pane_cp

0xe9af,	// (0x00080210) mup_volume_pane_cp_ParamLimits

0xe9af,	// (0x00080210) mup_volume_pane_cp

0x6a6c,	// (0x000782cd) mup2_visualizer_pane_g1_ParamLimits

0x6a6c,	// (0x000782cd) mup2_visualizer_pane_g1

0xc03c,	// (0x0007d89d) mup2_visualizer_pane_g2_ParamLimits

0xc03c,	// (0x0007d89d) mup2_visualizer_pane_g2

0x6a81,	// (0x000782e2) mup2_visualizer_pane_g3_ParamLimits

0x6a81,	// (0x000782e2) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x00080ee8) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x00080ee8) mup2_visualizer_pane_g

0x5a4e,	// (0x000772af) aid_size_cell_fmradio

0x603c,	// (0x0007789d) aid_height_parent_landcape

0x395d,	// (0x000751be) wml_content_pane_cp

0x3965,	// (0x000751c6) wml_tabs_pane

0x396e,	// (0x000751cf) popup_wml_miniature_window

0x3976,	// (0x000751d7) scroll_pane_cp021

0x398a,	// (0x000751eb) wml_content_pane_comp8

0x2272,	// (0x00073ad3) bg_popup_sub_pane_cp05

0xc05a,	// (0x0007d8bb) popup_wml_miniature_window_g1

0xc062,	// (0x0007d8c3) wml_miniature_view_pane

0x6a8d,	// (0x000782ee) aid_size_wml_view

0x6a95,	// (0x000782f6) wml_miniature_view_pane_g1

0x6a9e,	// (0x000782ff) wml_miniature_view_pane_g2

0x6aa7,	// (0x00078308) wml_miniature_view_pane_g3

0x6aaf,	// (0x00078310) wml_miniature_view_pane_g4

0x6ab7,	// (0x00078318) wml_miniature_view_pane_g5

0x6abf,	// (0x00078320) wml_miniature_view_pane_g6

0x6ac7,	// (0x00078328) wml_miniature_view_pane_g7

0x6acf,	// (0x00078330) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x00080eef) wml_miniature_view_pane_g

0xc06a,	// (0x0007d8cb) background_graphic_ParamLimits

0xc06a,	// (0x0007d8cb) background_graphic

0xc076,	// (0x0007d8d7) wml_tabs_2_pane

0xc07f,	// (0x0007d8e0) wml_tabs_3_pane_ParamLimits

0xc07f,	// (0x0007d8e0) wml_tabs_3_pane

0xc091,	// (0x0007d8f2) wml_tabs_4_pane_ParamLimits

0xc091,	// (0x0007d8f2) wml_tabs_4_pane

0xc0a7,	// (0x0007d908) wml_tabs_5_pane_ParamLimits

0xc0a7,	// (0x0007d908) wml_tabs_5_pane

0xc0c1,	// (0x0007d922) wml_tabs_pane_g2_ParamLimits

0xc0c1,	// (0x0007d922) wml_tabs_pane_g2

0xc0d5,	// (0x0007d936) wml_tabs_pane_g3_ParamLimits

0xc0d5,	// (0x0007d936) wml_tabs_pane_g3

0x6ad7,	// (0x00078338) wml_tabs_2_active_pane_ParamLimits

0x6ad7,	// (0x00078338) wml_tabs_2_active_pane

0x6ae7,	// (0x00078348) wml_tabs_2_passive_pane_ParamLimits

0x6ae7,	// (0x00078348) wml_tabs_2_passive_pane

0x6af7,	// (0x00078358) wml_tabs_3_active_pane_cp_ParamLimits

0x6af7,	// (0x00078358) wml_tabs_3_active_pane_cp

0x6b08,	// (0x00078369) wml_tabs_3_passive_pane_ParamLimits

0x6b08,	// (0x00078369) wml_tabs_3_passive_pane

0x6b19,	// (0x0007837a) wml_tabs_3_passive_pane_cp_ParamLimits

0x6b19,	// (0x0007837a) wml_tabs_3_passive_pane_cp

0x6b2a,	// (0x0007838b) tabs_4_active_pane

0x6b32,	// (0x00078393) tabs_4_passive_pane

0x6b3a,	// (0x0007839b) tabs_4_passive_pane_cp

0x6b42,	// (0x000783a3) tabs_4_passive_pane_cp2

0x5dbb,	// (0x0007761c) aid_height_text

0x528f,	// (0x00076af0) mup_volume_cont_pane_ParamLimits

0x528f,	// (0x00076af0) mup_volume_cont_pane

0x2555,	// (0x00073db6) aid_size_cell_pinb

0x255f,	// (0x00073dc0) aid_size_list_pinb

0x6a44,	// (0x000782a5) mup2_volume_cont_pane_ParamLimits

0x6a44,	// (0x000782a5) mup2_volume_cont_pane

0xe99b,	// (0x000801fc) mup2_volume_cont_pane_g1_ParamLimits

0xe99b,	// (0x000801fc) mup2_volume_cont_pane_g1

0x1bbc,	// (0x0007341d) aid_size_cell_touch_ParamLimits

0x1bbc,	// (0x0007341d) aid_size_cell_touch

0x1dc1,	// (0x00073622) touch_pane_ParamLimits

0x1dc1,	// (0x00073622) touch_pane

0x1bb2,	// (0x00073413) main_rss2_pane

0xc0f2,	// (0x0007d953) listscroll_rss2_pane

0xc0fb,	// (0x0007d95c) rss2_navigation_pane

0xc103,	// (0x0007d964) list_rss2_pane

0x4bb7,	// (0x00076418) scroll_pane_cp22

0xc10b,	// (0x0007d96c) rss2_navigation_pane_g1

0xc114,	// (0x0007d975) rss2_navigation_pane_g2

0xc11c,	// (0x0007d97d) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x00080f00) rss2_navigation_pane_g

0xc124,	// (0x0007d985) rss2_navigation_pane_t1

0x6b4a,	// (0x000783ab) rss2_list_single_pane_ParamLimits

0x6b4a,	// (0x000783ab) rss2_list_single_pane

0xc132,	// (0x0007d993) rss2_list_single_pane_t2

0xc140,	// (0x0007d9a1) rss2_list_single_pane_t3_ParamLimits

0xc140,	// (0x0007d9a1) rss2_list_single_pane_t3

0xc15d,	// (0x0007d9be) rss2_list_single_pane_t4

0x453f,	// (0x00075da0) smil_status_pane_g1

0xad52,	// (0x0007c5b3) main_image2_pane_ParamLimits

0xad52,	// (0x0007c5b3) main_image2_pane

0x666e,	// (0x00077ecf) main_camera2_pane_g9_ParamLimits

0x666e,	// (0x00077ecf) main_camera2_pane_g9

0x6760,	// (0x00077fc1) main_camera2_pane_t5_ParamLimits

0x6760,	// (0x00077fc1) main_camera2_pane_t5

0xc011,	// (0x0007d872) main_camera2_pane_t6_ParamLimits

0xc011,	// (0x0007d872) main_camera2_pane_t6

0x6b5d,	// (0x000783be) main_image2_pane_g1_ParamLimits

0x6b5d,	// (0x000783be) main_image2_pane_g1

0x5a16,	// (0x00077277) smil2_video_pane_ParamLimits

0x5a16,	// (0x00077277) smil2_video_pane

0xad0a,	// (0x0007c56b) aid_zoom_text_primary_cp

0xad4a,	// (0x0007c5ab) popup_preview_fixed_window

0x3859,	// (0x000750ba) im_reading_pane_g1

0x6554,	// (0x00077db5) cams2_bc_adjust_pane_cp_ParamLimits

0x6554,	// (0x00077db5) cams2_bc_adjust_pane_cp

0x6786,	// (0x00077fe7) cams2_bc_adjust_pane_ParamLimits

0x6786,	// (0x00077fe7) cams2_bc_adjust_pane

0xe9d4,	// (0x00080235) cams2_bc_adjust_pane_g1

0xe9dc,	// (0x0008023d) cams2_slider_pane

0xe9e5,	// (0x00080246) cams2_slider_pane_g1

0xe9ee,	// (0x0008024f) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x00080f07) cams2_slider_pane_g

0x2696,	// (0x00073ef7) calc_display_pane_ParamLimits

0x26b8,	// (0x00073f19) calc_paper_pane_ParamLimits

0x26d5,	// (0x00073f36) grid_calc_pane_ParamLimits

0xae9c,	// (0x0007c6fd) popup_clock_digital_window_t1_ParamLimits

0x58af,	// (0x00077110) main_image_pane_t1

0x2678,	// (0x00073ed9) aid_size_cell_calc_ParamLimits

0x2678,	// (0x00073ed9) aid_size_cell_calc

0x6080,	// (0x000778e1) popup_blid_sat_info2_window_ParamLimits

0x6080,	// (0x000778e1) popup_blid_sat_info2_window

0xc173,	// (0x0007d9d4) aid_size_cell_blid

0xc17b,	// (0x0007d9dc) bg_popup_window_pane_cp07

0xc19e,	// (0x0007d9ff) grid_popup_blid_pane

0xc1a6,	// (0x0007da07) heading_pane_cp05_ParamLimits

0xc1a6,	// (0x0007da07) heading_pane_cp05

0xc26e,	// (0x0007dacf) cell_popup_blid_pane_ParamLimits

0xc26e,	// (0x0007dacf) cell_popup_blid_pane

0xc28e,	// (0x0007daef) cell_popup_blid_pane_g1

0xc296,	// (0x0007daf7) cell_popup_blid_pane_t1

0x6a19,	// (0x0007827a) mup2_indicator_pane_ParamLimits

0x6a19,	// (0x0007827a) mup2_indicator_pane

0x3128,	// (0x00074989) mup2_visualizer_osc_pane

0xc048,	// (0x0007d8a9) mup2_visualizer_spec_pane_ParamLimits

0xc048,	// (0x0007d8a9) mup2_visualizer_spec_pane

0x6b71,	// (0x000783d2) mup2_spec_half_pane

0x6b7a,	// (0x000783db) mup2_spec_half_pane_cp

0x6b82,	// (0x000783e3) mup2_spec_bar_pane_ParamLimits

0x6b82,	// (0x000783e3) mup2_spec_bar_pane

0xbf9c,	// (0x0007d7fd) mup2_spec_bar_pane_g1

0xbfa6,	// (0x0007d807) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x00080e7a) mup2_spec_bar_pane_g

0xbfaf,	// (0x0007d810) mup2_osc_middle_pane

0xbfb8,	// (0x0007d819) mup2_visualizer_osc_pane_g1

0x1e29,	// (0x0007368a) popup_number_entry_window_t1_ParamLimits

0x1e3c,	// (0x0007369d) popup_number_entry_window_t2_ParamLimits

0x1e4e,	// (0x000736af) popup_number_entry_window_t3_ParamLimits

0x1e60,	// (0x000736c1) popup_number_entry_window_t5_ParamLimits

0x1e60,	// (0x000736c1) popup_number_entry_window_t5

0xf0ca,	// (0x0008092b) popup_number_entry_window_t_ParamLimits

0x1e94,	// (0x000736f5) text_title_cp2_ParamLimits

0xaedb,	// (0x0007c73c) aid_hotspot_pointer_text2_pane

0xaf01,	// (0x0007c762) main_viewer_pane_g9_ParamLimits

0xaf01,	// (0x0007c762) main_viewer_pane_g9

0x3fad,	// (0x0007580e) cale_month_pane_t1_ParamLimits

0x45a9,	// (0x00075e0a) bg_cale_pane_ParamLimits

0x45c1,	// (0x00075e22) list_cale_pane_ParamLimits

0x45d2,	// (0x00075e33) listscroll_cale_day_pane_t1

0x45e4,	// (0x00075e45) scroll_pane_cp09_ParamLimits

0x533c,	// (0x00076b9d) main_mup_eq_pane_t1_ParamLimits

0x533c,	// (0x00076b9d) main_mup_eq_pane_t1

0x5354,	// (0x00076bb5) main_mup_eq_pane_t2_ParamLimits

0x5354,	// (0x00076bb5) main_mup_eq_pane_t2

0x536a,	// (0x00076bcb) main_mup_eq_pane_t3_ParamLimits

0x536a,	// (0x00076bcb) main_mup_eq_pane_t3

0x5380,	// (0x00076be1) main_mup_eq_pane_t4_ParamLimits

0x5380,	// (0x00076be1) main_mup_eq_pane_t4

0x5396,	// (0x00076bf7) main_mup_eq_pane_t5_ParamLimits

0x5396,	// (0x00076bf7) main_mup_eq_pane_t5

0x53ac,	// (0x00076c0d) main_mup_eq_pane_t6_ParamLimits

0x53ac,	// (0x00076c0d) main_mup_eq_pane_t6

0x53be,	// (0x00076c1f) main_mup_eq_pane_t7_ParamLimits

0x53be,	// (0x00076c1f) main_mup_eq_pane_t7

0x53d0,	// (0x00076c31) main_mup_eq_pane_t8_ParamLimits

0x53d0,	// (0x00076c31) main_mup_eq_pane_t8

0x53e2,	// (0x00076c43) main_mup_eq_pane_t9_ParamLimits

0x53e2,	// (0x00076c43) main_mup_eq_pane_t9

0x53f8,	// (0x00076c59) main_mup_eq_pane_t10_ParamLimits

0x53f8,	// (0x00076c59) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x00080cb6) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x00080cb6) main_mup_eq_pane_t

0x548b,	// (0x00076cec) mup_equalizer_pane_cp5_ParamLimits

0x549d,	// (0x00076cfe) mup_equalizer_pane_cp6_ParamLimits

0x54af,	// (0x00076d10) mup_equalizer_pane_cp7_ParamLimits

0x1bb2,	// (0x00073413) main_gallery_pane

0xbfc1,	// (0x0007d822) smil2_volume_pane

0xbfc9,	// (0x0007d82a) smil_status_volume_pane_g1_ParamLimits

0xbfdc,	// (0x0007d83d) smil_status_volume_pane_g2_ParamLimits

0xbfef,	// (0x0007d850) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x00080e7f) smil_status_volume_pane_g_ParamLimits

0xc17b,	// (0x0007d9dc) bg_popup_window_pane_cp07_ParamLimits

0xc189,	// (0x0007d9ea) blid_firmament_pane

0x6ba1,	// (0x00078402) aid_size_cell_gallery_ParamLimits

0x6ba1,	// (0x00078402) aid_size_cell_gallery

0x6bb7,	// (0x00078418) grid_gallery_pane_ParamLimits

0x6bb7,	// (0x00078418) grid_gallery_pane

0x6bcc,	// (0x0007842d) cell_gallery_pane_ParamLimits

0x6bcc,	// (0x0007842d) cell_gallery_pane

0xc2a4,	// (0x0007db05) bg_cell_gallery_focus_pane_ParamLimits

0xc2a4,	// (0x0007db05) bg_cell_gallery_focus_pane

0xc2b6,	// (0x0007db17) cell_gallery_pane_g1_ParamLimits

0xc2b6,	// (0x0007db17) cell_gallery_pane_g1

0x6c11,	// (0x00078472) cell_gallery_pane_g2_ParamLimits

0x6c11,	// (0x00078472) cell_gallery_pane_g2

0x6c1e,	// (0x0007847f) cell_gallery_pane_g3_ParamLimits

0x6c1e,	// (0x0007847f) cell_gallery_pane_g3

0xc2c2,	// (0x0007db23) cell_gallery_pane_g4_ParamLimits

0xc2c2,	// (0x0007db23) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x00080f2d) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x00080f2d) cell_gallery_pane_g

0xc2ce,	// (0x0007db2f) bg_cell_gallery_focus_pane_g1

0xc2d6,	// (0x0007db37) bg_cell_gallery_focus_pane_g2

0xc2de,	// (0x0007db3f) bg_cell_gallery_focus_pane_g3

0xc2e6,	// (0x0007db47) bg_cell_gallery_focus_pane_g4

0xc2ee,	// (0x0007db4f) bg_cell_gallery_focus_pane_g5

0xc2f6,	// (0x0007db57) bg_cell_gallery_focus_pane_g6

0xc2fe,	// (0x0007db5f) bg_cell_gallery_focus_pane_g7

0xc306,	// (0x0007db67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x00080f36) bg_cell_gallery_focus_pane_g

0xc30e,	// (0x0007db6f) aid_firma_cardinal

0xc322,	// (0x0007db83) blid_firmament_pane_t1

0xc339,	// (0x0007db9a) blid_firmament_pane_t2

0xc350,	// (0x0007dbb1) blid_firmament_pane_t3

0xc367,	// (0x0007dbc8) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x00080f47) blid_firmament_pane_t

0xc37e,	// (0x0007dbdf) blid_sat_info_pane

0xc38e,	// (0x0007dbef) blid_sat_info_pane_g1

0xc38e,	// (0x0007dbef) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x00080f50) blid_sat_info_pane_g

0xc398,	// (0x0007dbf9) blid_sat_info_pane_t1

0xc3a6,	// (0x0007dc07) smil2_volume_content_pane

0xc3af,	// (0x0007dc10) smil2_volume_pane_g1

0xc3b7,	// (0x0007dc18) smil2_volume_content_pane_g1

0xc3c0,	// (0x0007dc21) smil2_volume_content_pane_g2

0xc3c9,	// (0x0007dc2a) smil2_volume_content_pane_g3

0xc3d2,	// (0x0007dc33) smil2_volume_content_pane_g4

0xc3db,	// (0x0007dc3c) smil2_volume_content_pane_g5

0xc3e4,	// (0x0007dc45) smil2_volume_content_pane_g6

0xc3ed,	// (0x0007dc4e) smil2_volume_content_pane_g7

0xc3f6,	// (0x0007dc57) smil2_volume_content_pane_g8

0xc3ff,	// (0x0007dc60) smil2_volume_content_pane_g9

0xc408,	// (0x0007dc69) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x00080f55) smil2_volume_content_pane_g

0x2d87,	// (0x000745e8) cale_week_day_heading_pane_t1_ParamLimits

0x2dac,	// (0x0007460d) cale_week_day_heading_pane_t2_ParamLimits

0x2dd6,	// (0x00074637) cale_week_day_heading_pane_t3_ParamLimits

0x2e00,	// (0x00074661) cale_week_day_heading_pane_t4_ParamLimits

0x2e2a,	// (0x0007468b) cale_week_day_heading_pane_t5_ParamLimits

0x2e54,	// (0x000746b5) cale_week_day_heading_pane_t6_ParamLimits

0x2e7e,	// (0x000746df) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00080a32) cale_week_day_heading_pane_t_ParamLimits

0x2ea3,	// (0x00074704) bg_cale_side_pane_ParamLimits

0x2eb1,	// (0x00074712) cale_week_time_pane_t1_ParamLimits

0x2eeb,	// (0x0007474c) cale_week_time_pane_t2_ParamLimits

0x2f25,	// (0x00074786) cale_week_time_pane_t3_ParamLimits

0x2f5f,	// (0x000747c0) cale_week_time_pane_t4_ParamLimits

0x2f99,	// (0x000747fa) cale_week_time_pane_t5_ParamLimits

0x2fd3,	// (0x00074834) cale_week_time_pane_t6_ParamLimits

0x300d,	// (0x0007486e) cale_week_time_pane_t7_ParamLimits

0x3047,	// (0x000748a8) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00080a41) cale_week_time_pane_t_ParamLimits

0x3081,	// (0x000748e2) cell_cale_week_pane_g2_ParamLimits

0x2ea3,	// (0x00074704) bg_cale_side_pane_cp01_ParamLimits

0x4378,	// (0x00075bd9) cale_month_week_pane_t1_ParamLimits

0x4391,	// (0x00075bf2) cale_month_week_pane_t2_ParamLimits

0x43aa,	// (0x00075c0b) cale_month_week_pane_t3_ParamLimits

0x43c3,	// (0x00075c24) cale_month_week_pane_t4_ParamLimits

0x43dc,	// (0x00075c3d) cale_month_week_pane_t5_ParamLimits

0x43f5,	// (0x00075c56) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00080b16) cale_month_week_pane_t_ParamLimits

0xae10,	// (0x0007c671) cell_cale_month_pane_g1_ParamLimits

0x1bb2,	// (0x00073413) main_cale_event_viewer_pane

0x1bb2,	// (0x00073413) listscroll_cale_event_viewer_pane

0xc411,	// (0x0007dc72) list_cale_ev_pane

0xc419,	// (0x0007dc7a) scroll_pane_cp023

0x6c2b,	// (0x0007848c) field_cale_ev_pane_ParamLimits

0x6c2b,	// (0x0007848c) field_cale_ev_pane

0xc425,	// (0x0007dc86) field_cale_ev_content_pane_ParamLimits

0xc425,	// (0x0007dc86) field_cale_ev_content_pane

0xc431,	// (0x0007dc92) field_cale_ev_pane_g1_ParamLimits

0xc431,	// (0x0007dc92) field_cale_ev_pane_g1

0xc43d,	// (0x0007dc9e) field_cale_ev_pane_g2_ParamLimits

0xc43d,	// (0x0007dc9e) field_cale_ev_pane_g2

0xc455,	// (0x0007dcb6) field_cale_ev_pane_g3_ParamLimits

0xc455,	// (0x0007dcb6) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x00080f6a) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x00080f6a) field_cale_ev_pane_g

0xc46d,	// (0x0007dcce) field_cale_ev_pane_t1_ParamLimits

0xc46d,	// (0x0007dcce) field_cale_ev_pane_t1

0x6c45,	// (0x000784a6) field_cale_ev_content_pane_t1_ParamLimits

0x6c45,	// (0x000784a6) field_cale_ev_content_pane_t1

0x5557,	// (0x00076db8) bg_button_pane_cp01

0x2ab5,	// (0x00074316) listscroll_cale_week_pane_ParamLimits

0x2ac5,	// (0x00074326) popup_toolbar_window_cp01

0x2ce2,	// (0x00074543) listscroll_cale_week_pane_t1_ParamLimits

0x2ab5,	// (0x00074316) listscroll_cale_day_pane_ParamLimits

0x2ac5,	// (0x00074326) popup_toolbar_window_cp02

0x45d2,	// (0x00075e33) listscroll_cale_day_pane_t1_ParamLimits

0x2ab5,	// (0x00074316) main_cale_month_pane_ParamLimits

0xbf3a,	// (0x0007d79b) popup_toolbar_window_cp03_ParamLimits

0xbf3a,	// (0x0007d79b) popup_toolbar_window_cp03

0x588d,	// (0x000770ee) main_image_pane_g2_ParamLimits

0x588d,	// (0x000770ee) main_image_pane_g2

0x589e,	// (0x000770ff) main_image_pane_g3_ParamLimits

0x589e,	// (0x000770ff) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00080d48) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00080d48) main_image_pane_g

0x58af,	// (0x00077110) main_image_pane_t1_ParamLimits

0x58c6,	// (0x00077127) main_image_pane_t2_ParamLimits

0x58c6,	// (0x00077127) main_image_pane_t2

0x58d8,	// (0x00077139) main_image_pane_t3_ParamLimits

0x58d8,	// (0x00077139) main_image_pane_t3

0x5900,	// (0x00077161) main_image_pane_t4_ParamLimits

0x5900,	// (0x00077161) main_image_pane_t4

0x0003,

0xf4ee,	// (0x00080d4f) main_image_pane_t_ParamLimits

0xf4ee,	// (0x00080d4f) main_image_pane_t

0x5920,	// (0x00077181) popup_image_details_window_cp01

0x5928,	// (0x00077189) popup_toobar_trans_pane_cp01_ParamLimits

0x5928,	// (0x00077189) popup_toobar_trans_pane_cp01

0x6151,	// (0x000779b2) popup_image_details_window_ParamLimits

0x6151,	// (0x000779b2) popup_image_details_window

0xbf0f,	// (0x0007d770) popup_image_focus_window

0x6522,	// (0x00077d83) camera2_autofocus_pane_ParamLimits

0x6522,	// (0x00077d83) camera2_autofocus_pane

0x1bb2,	// (0x00073413) bg_popup_sub_pane_cp06

0xc484,	// (0x0007dce5) popup_image_focus_window_g1

0xc48c,	// (0x0007dced) popup_image_focus_window_g2

0xc494,	// (0x0007dcf5) popup_image_focus_window_g3

0xc49c,	// (0x0007dcfd) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x00080f71) popup_image_focus_window_g

0xc4a4,	// (0x0007dd05) popup_image_focus_window_t1

0xc4b2,	// (0x0007dd13) popup_image_focus_window_t2

0xc4c1,	// (0x0007dd22) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x00080f7a) popup_image_focus_window_t

0xc4cf,	// (0x0007dd30) camera2_autofocus_pane_g1

0xad52,	// (0x0007c5b3) bg_tb_trans_pane_cp01

0xc4dd,	// (0x0007dd3e) popup_image_details_window_g1

0xc4f0,	// (0x0007dd51) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x00080f8c) popup_image_details_window_g

0xc519,	// (0x0007dd7a) popup_image_details_window_t1

0xc52b,	// (0x0007dd8c) popup_image_details_window_t2

0xc544,	// (0x0007dda5) popup_image_details_window_t3

0xc558,	// (0x0007ddb9) popup_image_details_window_t4

0xc573,	// (0x0007ddd4) popup_image_details_window_t5

0x0004,

0xf732,	// (0x00080f93) popup_image_details_window_t

0x27eb,	// (0x0007404c) bg_calc_paper_pane_ParamLimits

0x1bb2,	// (0x00073413) grid_highlight_pane_cp013

0xad68,	// (0x0007c5c9) list_calc_pane_ParamLimits

0xad7a,	// (0x0007c5db) scroll_pane_cp024

0x27ff,	// (0x00074060) bg_calc_display_pane_ParamLimits

0x280b,	// (0x0007406c) calc_display_pane_t1_ParamLimits

0x281d,	// (0x0007407e) calc_display_pane_t2_ParamLimits

0xad82,	// (0x0007c5e3) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000809b2) calc_display_pane_t_ParamLimits

0x291a,	// (0x0007417b) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000809cf) cell_calc_pane_g

0x2923,	// (0x00074184) cell_calc_pane_t1

0x2932,	// (0x00074193) grid_highlight_pane_cp02_ParamLimits

0x2948,	// (0x000741a9) toolbar_button_pane_cp01_ParamLimits

0x2948,	// (0x000741a9) toolbar_button_pane_cp01

0x596a,	// (0x000771cb) temp_image_control_pane_ParamLimits

0x596a,	// (0x000771cb) temp_image_control_pane

0xad52,	// (0x0007c5b3) main_mp3_pane

0xc58d,	// (0x0007ddee) temp_image_control_pane_g1_ParamLimits

0xc58d,	// (0x0007ddee) temp_image_control_pane_g1

0xc59b,	// (0x0007ddfc) temp_image_control_pane_g2_ParamLimits

0xc59b,	// (0x0007ddfc) temp_image_control_pane_g2

0xc5ad,	// (0x0007de0e) temp_image_control_pane_g3_ParamLimits

0xc5ad,	// (0x0007de0e) temp_image_control_pane_g3

0x6c92,	// (0x000784f3) temp_image_control_pane_g4_ParamLimits

0x6c92,	// (0x000784f3) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x00080f9e) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x00080f9e) temp_image_control_pane_g

0xc58d,	// (0x0007ddee) main_mp3_pane_g1

0x6ca3,	// (0x00078504) main_mp3_pane_g2

0x0007,

0xf746,	// (0x00080fa7) main_mp3_pane_g

0xc5f0,	// (0x0007de51) main_mp3_pane_t1

0x3238,	// (0x00074a99) main_camera_pane_g8_ParamLimits

0x3238,	// (0x00074a99) main_camera_pane_g8

0x33d1,	// (0x00074c32) main_video_pane_g7_ParamLimits

0x33d1,	// (0x00074c32) main_video_pane_g7

0xc02a,	// (0x0007d88b) main_camera2_pane_t7_ParamLimits

0xc02a,	// (0x0007d88b) main_camera2_pane_t7

0x391d,	// (0x0007517e) scroll_pane_cp025_ParamLimits

0x391d,	// (0x0007517e) scroll_pane_cp025

0x3931,	// (0x00075192) scroll_pane_cp026_ParamLimits

0x3931,	// (0x00075192) scroll_pane_cp026

0x3940,	// (0x000751a1) wml_content_pane_ParamLimits

0x1bb2,	// (0x00073413) main_touch_calib_pane

0x6d65,	// (0x000785c6) main_touch_calib_pane_g1

0x6d77,	// (0x000785d8) main_touch_calib_pane_g2

0x6d89,	// (0x000785ea) main_touch_calib_pane_g3

0x6d9b,	// (0x000785fc) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x00080fc5) main_touch_calib_pane_g

0x6dad,	// (0x0007860e) main_touch_calib_pane_t1

0x6dc5,	// (0x00078626) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x00080fce) main_touch_calib_pane_t

0x4e54,	// (0x000766b5) mup_progress_pane_cp02

0x4e89,	// (0x000766ea) navi_pane_g1

0x4f42,	// (0x000767a3) navi_pane_mp_t3

0xad52,	// (0x0007c5b3) main_mp3_pane_ParamLimits

0x62ae,	// (0x00077b0f) navi_pane_ParamLimits

0xc58d,	// (0x0007ddee) main_mp3_pane_g1_ParamLimits

0x6ca3,	// (0x00078504) main_mp3_pane_g2_ParamLimits

0x6caf,	// (0x00078510) main_mp3_pane_g3_ParamLimits

0x6caf,	// (0x00078510) main_mp3_pane_g3

0x6cbb,	// (0x0007851c) main_mp3_pane_g4_ParamLimits

0x6cbb,	// (0x0007851c) main_mp3_pane_g4

0xc5bd,	// (0x0007de1e) main_mp3_pane_g5_ParamLimits

0xc5bd,	// (0x0007de1e) main_mp3_pane_g5

0xc5cb,	// (0x0007de2c) main_mp3_pane_g6_ParamLimits

0xc5cb,	// (0x0007de2c) main_mp3_pane_g6

0xc5d8,	// (0x0007de39) main_mp3_pane_g7_ParamLimits

0xc5d8,	// (0x0007de39) main_mp3_pane_g7

0xc5e4,	// (0x0007de45) main_mp3_pane_g8_ParamLimits

0xc5e4,	// (0x0007de45) main_mp3_pane_g8

0xf746,	// (0x00080fa7) main_mp3_pane_g_ParamLimits

0x6cc7,	// (0x00078528) main_mp3_pane_t2

0x6cd5,	// (0x00078536) main_mp3_pane_t3

0xc5fe,	// (0x0007de5f) main_mp3_pane_t4

0xc60c,	// (0x0007de6d) main_mp3_pane_t5

0x0005,

0xf757,	// (0x00080fb8) main_mp3_pane_t

0xc61a,	// (0x0007de7b) mup_progress_pane_cp01

0xad0a,	// (0x0007c56b) aid_zoom_text_secondary2

0xc411,	// (0x0007dc72) list_cale_ev2_pane

0xc419,	// (0x0007dc7a) scroll_pane_cp023_ParamLimits

0x6e13,	// (0x00078674) field_cale_ev2_pane_ParamLimits

0x6e13,	// (0x00078674) field_cale_ev2_pane

0x6e2b,	// (0x0007868c) field_cale_ev2_pane_g1_ParamLimits

0x6e2b,	// (0x0007868c) field_cale_ev2_pane_g1

0x6e37,	// (0x00078698) field_cale_ev2_pane_g2_ParamLimits

0x6e37,	// (0x00078698) field_cale_ev2_pane_g2

0x6e4f,	// (0x000786b0) field_cale_ev2_pane_g3_ParamLimits

0x6e4f,	// (0x000786b0) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x00080fd9) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x00080fd9) field_cale_ev2_pane_g

0x1014,	// (0x00072875) field_cale_ev2_pane_t1_ParamLimits

0x1014,	// (0x00072875) field_cale_ev2_pane_t1

0x102b,	// (0x0007288c) field_cale_ev2_pane_t2_ParamLimits

0x102b,	// (0x0007288c) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x00080fe2) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x00080fe2) field_cale_ev2_pane_t

0x566a,	// (0x00076ecb) main_postcard_pane_g5_ParamLimits

0x566a,	// (0x00076ecb) main_postcard_pane_g5

0x567e,	// (0x00076edf) main_postcard_pane_g6_ParamLimits

0x567e,	// (0x00076edf) main_postcard_pane_g6

0x3191,	// (0x000749f2) camera2_autofocus_pane_cp_ParamLimits

0x3191,	// (0x000749f2) camera2_autofocus_pane_cp

0xad52,	// (0x0007c5b3) main_mup3_pane

0x6e87,	// (0x000786e8) main_mup3_pane_g1_ParamLimits

0x6e87,	// (0x000786e8) main_mup3_pane_g1

0x6ea9,	// (0x0007870a) main_mup3_pane_g2_ParamLimits

0x6ea9,	// (0x0007870a) main_mup3_pane_g2

0x6f1c,	// (0x0007877d) main_mup3_pane_g3_ParamLimits

0x6f1c,	// (0x0007877d) main_mup3_pane_g3

0x6f5a,	// (0x000787bb) main_mup3_pane_g4_ParamLimits

0x6f5a,	// (0x000787bb) main_mup3_pane_g4

0x6f98,	// (0x000787f9) main_mup3_pane_g5_ParamLimits

0x6f98,	// (0x000787f9) main_mup3_pane_g5

0x6fd6,	// (0x00078837) main_mup3_pane_g6_ParamLimits

0x6fd6,	// (0x00078837) main_mup3_pane_g6

0xc622,	// (0x0007de83) main_mup3_pane_g7_ParamLimits

0xc622,	// (0x0007de83) main_mup3_pane_g7

0x0007,

0xf791,	// (0x00080ff2) main_mup3_pane_g_ParamLimits

0xf791,	// (0x00080ff2) main_mup3_pane_g

0x704a,	// (0x000788ab) main_mup3_pane_t1_ParamLimits

0x704a,	// (0x000788ab) main_mup3_pane_t1

0x70b0,	// (0x00078911) main_mup3_pane_t2_ParamLimits

0x70b0,	// (0x00078911) main_mup3_pane_t2

0x7176,	// (0x000789d7) main_mup3_pane_t4_ParamLimits

0x7176,	// (0x000789d7) main_mup3_pane_t4

0x71c4,	// (0x00078a25) main_mup3_pane_t5_ParamLimits

0x71c4,	// (0x00078a25) main_mup3_pane_t5

0x7272,	// (0x00078ad3) main_mup3_pane_t6_ParamLimits

0x7272,	// (0x00078ad3) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x00081003) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x00081003) main_mup3_pane_t

0x7326,	// (0x00078b87) mup3_progress_pane_ParamLimits

0x7326,	// (0x00078b87) mup3_progress_pane

0x73a2,	// (0x00078c03) popup_mup3_control_window_ParamLimits

0x73a2,	// (0x00078c03) popup_mup3_control_window

0xc630,	// (0x0007de91) popup_mup3_text_window

0x73d0,	// (0x00078c31) mup3_progress_pane_t1

0x73ee,	// (0x00078c4f) mup3_progress_pane_t2

0xc638,	// (0x0007de99) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x00081010) mup3_progress_pane_t

0xc655,	// (0x0007deb6) mup_progress_pane_cp03

0x1bb2,	// (0x00073413) bg_tb_trans_pane_cp04

0x740c,	// (0x00078c6d) mup3_volume_pane

0x7414,	// (0x00078c75) popup_mup3_control_window_g1

0xc665,	// (0x0007dec6) mup3_volume_pane_g1

0xc66e,	// (0x0007decf) mup3_volume_pane_g2

0xc677,	// (0x0007ded8) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x00081017) mup3_volume_pane_g

0x1bb2,	// (0x00073413) bg_tb_trans_pane_cp03

0xc680,	// (0x0007dee1) popup_mup3_text_window_g1

0xc688,	// (0x0007dee9) popup_mup3_text_window_t1

0x28ed,	// (0x0007414e) list_calc_item_pane_g1_ParamLimits

0xc0e9,	// (0x0007d94a) mup_volume_pane_cp_g1

0x6ddd,	// (0x0007863e) main_touch_calib_pane_t3

0x6def,	// (0x00078650) main_touch_calib_pane_t4

0x6e01,	// (0x00078662) main_touch_calib_pane_t5

0xacea,	// (0x0007c54b) aid_cell_size_toolbar2

0xacf2,	// (0x0007c553) aid_popup3_width_pane

0xacfa,	// (0x0007c55b) aid_zoom_text_msg_primary

0x3170,	// (0x000749d1) vorec_t7

0x2862,	// (0x000740c3) bg_calc_paper_pane_g1_ParamLimits

0x286e,	// (0x000740cf) bg_calc_paper_pane_g2_ParamLimits

0x287a,	// (0x000740db) bg_calc_paper_pane_g3_ParamLimits

0x2886,	// (0x000740e7) bg_calc_paper_pane_g4_ParamLimits

0x2892,	// (0x000740f3) bg_calc_paper_pane_g5_ParamLimits

0x289e,	// (0x000740ff) bg_calc_paper_pane_g6_ParamLimits

0x28ad,	// (0x0007410e) bg_calc_paper_pane_g7_ParamLimits

0x28bc,	// (0x0007411d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000809b9) bg_calc_paper_pane_g_ParamLimits

0x28cb,	// (0x0007412c) calc_bg_paper_pane_g9_ParamLimits

0x32cf,	// (0x00074b30) image_qvga_pane_ParamLimits

0x32cf,	// (0x00074b30) image_qvga_pane

0x24cd,	// (0x00073d2e) bg_popup_sub_pane_cp04_ParamLimits

0x57eb,	// (0x0007704c) popup_mup_playback_window_g1_ParamLimits

0x57f7,	// (0x00077058) popup_mup_playback_window_t1_ParamLimits

0x580c,	// (0x0007706d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x00080d43) popup_mup_playback_window_t_ParamLimits

0x6939,	// (0x0007819a) main_mup2_pane_g3_ParamLimits

0x6939,	// (0x0007819a) main_mup2_pane_g3

0x3645,	// (0x00074ea6) popup_toolbar_window_cp04

0xb0c3,	// (0x0007c924) popup_call2_audio_second_window_g3_ParamLimits

0xb0c3,	// (0x0007c924) popup_call2_audio_second_window_g3

0xb4cd,	// (0x0007cd2e) popup_call2_audio_first_window_g4_ParamLimits

0xb4cd,	// (0x0007cd2e) popup_call2_audio_first_window_g4

0xbb4c,	// (0x0007d3ad) popup_call2_audio_in_window_g4_ParamLimits

0xbb4c,	// (0x0007d3ad) popup_call2_audio_in_window_g4

0x5821,	// (0x00077082) aid_area_sk_bg_cut_ParamLimits

0x5821,	// (0x00077082) aid_area_sk_bg_cut

0x583f,	// (0x000770a0) aid_area_sk_bg_cut_2_ParamLimits

0x583f,	// (0x000770a0) aid_area_sk_bg_cut_2

0x6c01,	// (0x00078462) aid_placing_details_win

0x6c09,	// (0x0007846a) aid_placing_details_win_2

0xc4cf,	// (0x0007dd30) camera2_autofocus_pane_g1_ParamLimits

0x1d5e,	// (0x000735bf) popup_fixed_preview_cale_window_ParamLimits

0x1d5e,	// (0x000735bf) popup_fixed_preview_cale_window

0x5002,	// (0x00076863) navi_slider_pane_g3

0x500b,	// (0x0007686c) navi_slider_pane_g4

0x5014,	// (0x00076875) navi_slider_pane_g5

0x5002,	// (0x00076863) navi_slider_pane_g6

0xaec2,	// (0x0007c723) navi_slider_pane_g7

0x54cc,	// (0x00076d2d) mup_scale_pane_g3

0x54d5,	// (0x00076d36) mup_scale_pane_g4

0x54de,	// (0x00076d3f) mup_scale_pane_g5

0x54e7,	// (0x00076d48) mup_scale_pane_g6

0x54f0,	// (0x00076d51) mup_scale_pane_g7

0x5002,	// (0x00076863) cams2_slider_pane_g3

0xc16b,	// (0x0007d9cc) cams2_slider_pane_g4

0xe9f7,	// (0x00080258) cams2_slider_pane_g5

0x5002,	// (0x00076863) cams2_slider_pane_g6

0xe9ff,	// (0x00080260) cams2_slider_pane_g7

0xc38e,	// (0x0007dbef) camera2_autofocus_pane_cp_g1

0xbeed,	// (0x0007d74e) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeed,	// (0x0007d74e) bg_popup_preview_window_pane_cp02

0xc696,	// (0x0007def7) list_fp_cale_pane_ParamLimits

0xc696,	// (0x0007def7) list_fp_cale_pane

0xc6a2,	// (0x0007df03) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6a2,	// (0x0007df03) popup_fixed_preview_cale_window_t1

0x741d,	// (0x00078c7e) popup_fixed_preview_cale_window_t2_ParamLimits

0x741d,	// (0x00078c7e) popup_fixed_preview_cale_window_t2

0x7432,	// (0x00078c93) popup_fixed_preview_cale_window_t3_ParamLimits

0x7432,	// (0x00078c93) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0008101e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0008101e) popup_fixed_preview_cale_window_t

0x7447,	// (0x00078ca8) list_single_fp_cale_pane_ParamLimits

0x7447,	// (0x00078ca8) list_single_fp_cale_pane

0xc6c0,	// (0x0007df21) list_single_fp_cale_pane_g1_ParamLimits

0xc6c0,	// (0x0007df21) list_single_fp_cale_pane_g1

0xc6cc,	// (0x0007df2d) list_single_fp_cale_pane_g2_ParamLimits

0xc6cc,	// (0x0007df2d) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x00081025) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x00081025) list_single_fp_cale_pane_g

0xc6e5,	// (0x0007df46) list_single_fp_cale_pane_t1_ParamLimits

0xc6e5,	// (0x0007df46) list_single_fp_cale_pane_t1

0xc6f7,	// (0x0007df58) list_single_fp_cale_pane_t2_ParamLimits

0xc6f7,	// (0x0007df58) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0008102c) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0008102c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1bb2,	// (0x00073413) main_dialer_pane

0x745a,	// (0x00078cbb) aid_cell_size_keypad

0x7464,	// (0x00078cc5) dialer_ne_pane

0x746c,	// (0x00078ccd) grid_dialer_command_1_pane

0x7474,	// (0x00078cd5) grid_dialer_command_2_pane

0x747c,	// (0x00078cdd) grid_dialer_keypad_pane

0x748c,	// (0x00078ced) bg_popup_call_pane_cp06_ParamLimits

0x748c,	// (0x00078ced) bg_popup_call_pane_cp06

0x7498,	// (0x00078cf9) dialer_ne_clear_pane_ParamLimits

0x7498,	// (0x00078cf9) dialer_ne_clear_pane

0xc72a,	// (0x0007df8b) dialer_ne_pane_g1

0xc732,	// (0x0007df93) dialer_ne_pane_t1_ParamLimits

0xc732,	// (0x0007df93) dialer_ne_pane_t1

0x74a4,	// (0x00078d05) dialer_ne_pane_t2_ParamLimits

0x74a4,	// (0x00078d05) dialer_ne_pane_t2

0x74ce,	// (0x00078d2f) dialer_ne_pane_t3_ParamLimits

0x74ce,	// (0x00078d2f) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x00081031) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x00081031) dialer_ne_pane_t

0x74fe,	// (0x00078d5f) dialer_ne_pane_t3_copy1_ParamLimits

0x74fe,	// (0x00078d5f) dialer_ne_pane_t3_copy1

0x752d,	// (0x00078d8e) cell_dialer_keypad_pane_ParamLimits

0x752d,	// (0x00078d8e) cell_dialer_keypad_pane

0x7542,	// (0x00078da3) cell_dialer_command_1_pane_ParamLimits

0x7542,	// (0x00078da3) cell_dialer_command_1_pane

0x7558,	// (0x00078db9) cell_dialer_command_2_pane_ParamLimits

0x7558,	// (0x00078db9) cell_dialer_command_2_pane

0xc744,	// (0x0007dfa5) bg_button_pane_cp02_ParamLimits

0xc744,	// (0x0007dfa5) bg_button_pane_cp02

0x7567,	// (0x00078dc8) cell_dialer_keypad_pane_g1_ParamLimits

0x7567,	// (0x00078dc8) cell_dialer_keypad_pane_g1

0xc744,	// (0x0007dfa5) bg_button_pane_cp03_ParamLimits

0xc744,	// (0x0007dfa5) bg_button_pane_cp03

0x757c,	// (0x00078ddd) cell_dialer_command_1_pane_g1_ParamLimits

0x757c,	// (0x00078ddd) cell_dialer_command_1_pane_g1

0xc750,	// (0x0007dfb1) bg_button_pane_cp04

0x758f,	// (0x00078df0) cell_dialer_command_2_pane_g1

0x3128,	// (0x00074989) bg_button_pane_cp06

0xc758,	// (0x0007dfb9) dialer_ne_clear_pane_g1

0x4e95,	// (0x000766f6) navi_pane_g2

0x4ec3,	// (0x00076724) navi_pane_g3

0x0002,

0xf3e5,	// (0x00080c46) navi_pane_g

0x4f50,	// (0x000767b1) navi_pane_mv_g2

0x4f77,	// (0x000767d8) navi_pane_mv_g5

0x4f7f,	// (0x000767e0) navi_pane_mv_t1

0x27ff,	// (0x00074060) main_clock2_pane

0x75d4,	// (0x00078e35) main_clock2_list_pane_ParamLimits

0x75d4,	// (0x00078e35) main_clock2_list_pane

0x7606,	// (0x00078e67) main_clock2_pane_t1_ParamLimits

0x7606,	// (0x00078e67) main_clock2_pane_t1

0x7640,	// (0x00078ea1) main_clock2_pane_t2_ParamLimits

0x7640,	// (0x00078ea1) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0008103d) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0008103d) main_clock2_pane_t

0x76d4,	// (0x00078f35) popup_clock_analogue_window_cp03_ParamLimits

0x76d4,	// (0x00078f35) popup_clock_analogue_window_cp03

0x76f8,	// (0x00078f59) popup_clock_digital_window_cp02_ParamLimits

0x76f8,	// (0x00078f59) popup_clock_digital_window_cp02

0x7769,	// (0x00078fca) main_clock2_list_single_pane_ParamLimits

0x7769,	// (0x00078fca) main_clock2_list_single_pane

0x3128,	// (0x00074989) list_highlight_pane_cp05

0xc790,	// (0x0007dff1) main_clock2_list_single_pane_t1

0x3645,	// (0x00074ea6) popup_toolbar_window_cp04_ParamLimits

0x6c62,	// (0x000784c3) camera2_autofocus_pane_g2_ParamLimits

0x6c62,	// (0x000784c3) camera2_autofocus_pane_g2

0x6c6e,	// (0x000784cf) camera2_autofocus_pane_g3_ParamLimits

0x6c6e,	// (0x000784cf) camera2_autofocus_pane_g3

0x6c7a,	// (0x000784db) camera2_autofocus_pane_g4_ParamLimits

0x6c7a,	// (0x000784db) camera2_autofocus_pane_g4

0x6c86,	// (0x000784e7) camera2_autofocus_pane_g5_ParamLimits

0x6c86,	// (0x000784e7) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x00080f81) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x00080f81) camera2_autofocus_pane_g

0x6e67,	// (0x000786c8) camera2_autofocus_pane_cp_g2

0x6e6f,	// (0x000786d0) camera2_autofocus_pane_cp_g3

0x6e77,	// (0x000786d8) camera2_autofocus_pane_cp_g4

0x6e7f,	// (0x000786e0) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x00080fe7) camera2_autofocus_pane_cp_g

0x7484,	// (0x00078ce5) popup_dialer_spcha_window

0x1bb2,	// (0x00073413) bg_popup_sub_pane_cp07

0xc79e,	// (0x0007dfff) list_spcha_pane

0xc7a6,	// (0x0007e007) list_single_spcha_pane_ParamLimits

0xc7a6,	// (0x0007e007) list_single_spcha_pane

0x1bb2,	// (0x00073413) list_highlight_pane_cp06

0xc7b7,	// (0x0007e018) list_single_spcha_pane_t1

0xb8f6,	// (0x0007d157) popup_call2_audio_out_window_g4_ParamLimits

0xb8f6,	// (0x0007d157) popup_call2_audio_out_window_g4

0x1bb2,	// (0x00073413) main_imed2_pane

0xbf17,	// (0x0007d778) popup_imed_adjust2_window

0x6167,	// (0x000779c8) popup_imed_trans_window_ParamLimits

0x6167,	// (0x000779c8) popup_imed_trans_window

0xc1d2,	// (0x0007da33) popup_blid_sat_info2_window_t1

0xc1e0,	// (0x0007da41) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x00080f16) popup_blid_sat_info2_window_t

0x7813,	// (0x00079074) aid_size_cell_colour_35

0x7833,	// (0x00079094) aid_size_cell_colour_112

0x7853,	// (0x000790b4) aid_size_cell_effect

0xbef9,	// (0x0007d75a) bg_tb_trans_pane_cp02

0x471a,	// (0x00075f7b) heading_imed_pane

0x7872,	// (0x000790d3) listscroll_imed_pane

0xc7c5,	// (0x0007e026) heading_imed_pane_g1

0xc7cd,	// (0x0007e02e) heading_imed_pane_t1

0xc7db,	// (0x0007e03c) grid_imed_colour_35_pane_ParamLimits

0xc7db,	// (0x0007e03c) grid_imed_colour_35_pane

0x787e,	// (0x000790df) grid_imed_effect_pane

0xc7ee,	// (0x0007e04f) list_imed_aspect_pane

0x7893,	// (0x000790f4) scroll_pane_cp027_ParamLimits

0x7893,	// (0x000790f4) scroll_pane_cp027

0x78a4,	// (0x00079105) cell_imed_effect_pane_ParamLimits

0x78a4,	// (0x00079105) cell_imed_effect_pane

0xc7f6,	// (0x0007e057) cell_imed_colour_pane_ParamLimits

0xc7f6,	// (0x0007e057) cell_imed_colour_pane

0xc830,	// (0x0007e091) cell_imed_colour_pane_g1_ParamLimits

0xc830,	// (0x0007e091) cell_imed_colour_pane_g1

0xc841,	// (0x0007e0a2) hgihlgiht_grid_pane_cp016_ParamLimits

0xc841,	// (0x0007e0a2) hgihlgiht_grid_pane_cp016

0x78c9,	// (0x0007912a) cell_imed_effect_pane_g1

0x78d1,	// (0x00079132) grid_highlight_pane_cp017

0xc851,	// (0x0007e0b2) list_imed_single_pane_ParamLimits

0xc851,	// (0x0007e0b2) list_imed_single_pane

0x1bb2,	// (0x00073413) list_highlight_pane_cp07

0xc864,	// (0x0007e0c5) list_imed_aspect_pane_comp1_t1

0xbef9,	// (0x0007d75a) bg_tb_trans_pane_cp05

0xc884,	// (0x0007e0e5) popup_imed_adjust2_window_g1

0xc8ab,	// (0x0007e10c) popup_imed_adjust2_window_t1

0xc8c3,	// (0x0007e124) slider_imed_adjust_pane

0xc8d7,	// (0x0007e138) slider_imed_adjust_pane_g1

0xc8e7,	// (0x0007e148) slider_imed_adjust_pane_g2

0xc8f7,	// (0x0007e158) slider_imed_adjust_pane_g3

0xc908,	// (0x0007e169) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0008105a) slider_imed_adjust_pane_g

0x78da,	// (0x0007913b) aid_size_cell_clipart2

0x78e5,	// (0x00079146) grid_imed_clipart_pane

0xc919,	// (0x0007e17a) scroll_pane_cp031

0x78ef,	// (0x00079150) cell_imed_clipart_pane_ParamLimits

0x78ef,	// (0x00079150) cell_imed_clipart_pane

0x7904,	// (0x00079165) cell_imed_clipart_pane_g1

0x1bb2,	// (0x00073413) grid_highlight_pane_cp014

0x75e7,	// (0x00078e48) main_clock2_pane_g1_ParamLimits

0x75e7,	// (0x00078e48) main_clock2_pane_g1

0x7714,	// (0x00078f75) aid_call2_pane_cp10

0x7726,	// (0x00078f87) aid_call_pane_cp10

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g1

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g2

0x7738,	// (0x00078f99) popup_clock_analogue_window_cp10_g3

0x7738,	// (0x00078f99) popup_clock_analogue_window_cp10_g4

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x00081048) popup_clock_analogue_window_cp10_g

0x774a,	// (0x00078fab) popup_clock_analogue_window_cp10_t1

0x777b,	// (0x00078fdc) clock_digital_number_pane_cp10_ParamLimits

0x777b,	// (0x00078fdc) clock_digital_number_pane_cp10

0x7793,	// (0x00078ff4) clock_digital_number_pane_cp11_ParamLimits

0x7793,	// (0x00078ff4) clock_digital_number_pane_cp11

0x77ab,	// (0x0007900c) clock_digital_number_pane_cp12_ParamLimits

0x77ab,	// (0x0007900c) clock_digital_number_pane_cp12

0x77c3,	// (0x00079024) clock_digital_number_pane_cp13_ParamLimits

0x77c3,	// (0x00079024) clock_digital_number_pane_cp13

0x77db,	// (0x0007903c) clock_digital_separator_pane_cp10_ParamLimits

0x77db,	// (0x0007903c) clock_digital_separator_pane_cp10

0x77f3,	// (0x00079054) popup_clock_digital_window_cp02_t1_ParamLimits

0x77f3,	// (0x00079054) popup_clock_digital_window_cp02_t1

0x24c5,	// (0x00073d26) clock_digital_number_pane_cp10_g1

0x24c5,	// (0x00073d26) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x00081063) clock_digital_number_pane_cp10_g

0x24c5,	// (0x00073d26) clock_digital_separator_pane_cp10_g1

0x24c5,	// (0x00073d26) clock_digital_separator_pane_g2_cp10

0x4fc1,	// (0x00076822) navi_pane_vded_g4

0x4fca,	// (0x0007682b) navi_pane_vded_g5

0x4fd3,	// (0x00076834) navi_pane_vded_t1

0x1bb2,	// (0x00073413) main_vded_pane

0x790d,	// (0x0007916e) main_vded_pane_g1

0x7915,	// (0x00079176) main_vded_pane_g2

0x791d,	// (0x0007917e) main_vded_pane_g3

0x0002,

0xf807,	// (0x00081068) main_vded_pane_g

0x7925,	// (0x00079186) main_vded_pane_t1

0x7933,	// (0x00079194) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0008106f) main_vded_pane_t

0x7941,	// (0x000791a2) vded_slider_pane

0x7949,	// (0x000791aa) vded_video_pane

0xc921,	// (0x0007e182) vded_video_pane_g1

0x7951,	// (0x000791b2) vded_video_pane_g2

0xc38e,	// (0x0007dbef) vded_video_pane_g3

0x0002,

0xf813,	// (0x00081074) vded_video_pane_g

0xc92b,	// (0x0007e18c) vded_slider_pane_g1

0xc0e9,	// (0x0007d94a) vded_slider_pane_g2

0xc934,	// (0x0007e195) vded_slider_pane_g3

0xc93d,	// (0x0007e19e) vded_slider_pane_g4

0xc946,	// (0x0007e1a7) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0008107b) vded_slider_pane_g

0x738c,	// (0x00078bed) mup3_rocker_pane_ParamLimits

0x738c,	// (0x00078bed) mup3_rocker_pane

0x795a,	// (0x000791bb) mup3_control_keys_pane_g1

0x7962,	// (0x000791c3) mup3_control_keys_pane_g2

0x796a,	// (0x000791cb) mup3_control_keys_pane_g3

0x7972,	// (0x000791d3) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x00081086) mup3_control_keys_pane_g

0x1d95,	// (0x000735f6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1d95,	// (0x000735f6) popup_toolbar2_fixed_window_cp01

0x73ba,	// (0x00078c1b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x73ba,	// (0x00078c1b) popup_toolbar2_fixed_window_cp02

0xb235,	// (0x0007ca96) popup_call2_audio_second_window_t4_ParamLimits

0xb235,	// (0x0007ca96) popup_call2_audio_second_window_t4

0xb763,	// (0x0007cfc4) popup_call2_audio_first_window_t6_ParamLimits

0xb763,	// (0x0007cfc4) popup_call2_audio_first_window_t6

0xb9f9,	// (0x0007d25a) popup_call2_audio_out_window_t6_ParamLimits

0xb9f9,	// (0x0007d25a) popup_call2_audio_out_window_t6

0x1bb2,	// (0x00073413) main_vitu_pane

0x7982,	// (0x000791e3) aid_size_cell_itu_ParamLimits

0x7982,	// (0x000791e3) aid_size_cell_itu

0xad52,	// (0x0007c5b3) bg_popup_window_pane_cp08_ParamLimits

0xad52,	// (0x0007c5b3) bg_popup_window_pane_cp08

0x7998,	// (0x000791f9) field_vitu_entry_pane_ParamLimits

0x7998,	// (0x000791f9) field_vitu_entry_pane

0x79ab,	// (0x0007920c) grid_vitu_function_pane_ParamLimits

0x79ab,	// (0x0007920c) grid_vitu_function_pane

0x79c0,	// (0x00079221) grid_vitu_itu_pane_ParamLimits

0x79c0,	// (0x00079221) grid_vitu_itu_pane

0x79d6,	// (0x00079237) cell_vitu_itu_pane_ParamLimits

0x79d6,	// (0x00079237) cell_vitu_itu_pane

0x79f8,	// (0x00079259) cell_vitu_function_pane_ParamLimits

0x79f8,	// (0x00079259) cell_vitu_function_pane

0xad52,	// (0x0007c5b3) bg_popup_sub_pane_cp08_ParamLimits

0xad52,	// (0x0007c5b3) bg_popup_sub_pane_cp08

0x7a11,	// (0x00079272) field_vitu_entry_pane_t1_ParamLimits

0x7a11,	// (0x00079272) field_vitu_entry_pane_t1

0xc967,	// (0x0007e1c8) field_vitu_entry_pane_t2_ParamLimits

0xc967,	// (0x0007e1c8) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x00081094) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x00081094) field_vitu_entry_pane_t

0xc984,	// (0x0007e1e5) bg_button_pane_cp05_ParamLimits

0xc984,	// (0x0007e1e5) bg_button_pane_cp05

0x7a2d,	// (0x0007928e) cell_vitu_itu_pane_g1

0x7a45,	// (0x000792a6) cell_vitu_itu_pane_t1_ParamLimits

0x7a45,	// (0x000792a6) cell_vitu_itu_pane_t1

0x7a57,	// (0x000792b8) cell_vitu_itu_pane_t2_ParamLimits

0x7a57,	// (0x000792b8) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x00081099) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x00081099) cell_vitu_itu_pane_t

0xc992,	// (0x0007e1f3) bg_button_pane_cp07

0x7a8c,	// (0x000792ed) cell_vitu_function_pane_g1

0xad60,	// (0x0007c5c1) main_calc_pane_g1

0x1be0,	// (0x00073441) aid_visual_content_pane

0x1bb2,	// (0x00073413) main_vradio_pane

0x7a95,	// (0x000792f6) main_vradio_pane_g1_ParamLimits

0x7a95,	// (0x000792f6) main_vradio_pane_g1

0xc99c,	// (0x0007e1fd) main_vradio_pane_g2_ParamLimits

0xc99c,	// (0x0007e1fd) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x000810a0) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x000810a0) main_vradio_pane_g

0x7aab,	// (0x0007930c) main_vradio_pane_t1_ParamLimits

0x7aab,	// (0x0007930c) main_vradio_pane_t1

0x7ac0,	// (0x00079321) main_vradio_pane_t2_ParamLimits

0x7ac0,	// (0x00079321) main_vradio_pane_t2

0xc9a9,	// (0x0007e20a) main_vradio_pane_t3_ParamLimits

0xc9a9,	// (0x0007e20a) main_vradio_pane_t3

0x0002,

0xf844,	// (0x000810a5) main_vradio_pane_t_ParamLimits

0xf844,	// (0x000810a5) main_vradio_pane_t

0x7ad5,	// (0x00079336) vradio_rocker_control_pane_ParamLimits

0x7ad5,	// (0x00079336) vradio_rocker_control_pane

0x7ae7,	// (0x00079348) vradio_station_info_pane_ParamLimits

0x7ae7,	// (0x00079348) vradio_station_info_pane

0xc9bb,	// (0x0007e21c) vradio_frequency_info_pane_ParamLimits

0xc9bb,	// (0x0007e21c) vradio_frequency_info_pane

0xc38e,	// (0x0007dbef) vradio_station_info_pane_g1

0xc9ca,	// (0x0007e22b) vradio_station_info_pane_t1_ParamLimits

0xc9ca,	// (0x0007e22b) vradio_station_info_pane_t1

0xc9ec,	// (0x0007e24d) vradio_station_info_pane_t2_ParamLimits

0xc9ec,	// (0x0007e24d) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x000810ac) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x000810ac) vradio_station_info_pane_t

0xc9fe,	// (0x0007e25f) vradio_tuning_pane

0xca06,	// (0x0007e267) vradio_rocker_control_pane_g1

0xca0e,	// (0x0007e26f) vradio_rocker_control_pane_g2

0xca16,	// (0x0007e277) vradio_rocker_control_pane_g3

0xca1e,	// (0x0007e27f) vradio_rocker_control_pane_g4

0xca26,	// (0x0007e287) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x000810b1) vradio_rocker_control_pane_g

0x7af7,	// (0x00079358) vradio_frequency_info_pane_g1

0xca2e,	// (0x0007e28f) vradio_frequency_info_pane_t1_ParamLimits

0xca2e,	// (0x0007e28f) vradio_frequency_info_pane_t1

0x7b01,	// (0x00079362) vradio_tuning_pane_g1

0x7b0a,	// (0x0007936b) vradio_tuning_pane_t1

0xad12,	// (0x0007c573) area_side_right_pane_ParamLimits

0xad12,	// (0x0007c573) area_side_right_pane

0xbeb4,	// (0x0007d715) status_small_pane_g1

0xbebc,	// (0x0007d71d) status_small_pane_g2

0xbec5,	// (0x0007d726) status_small_pane_g3

0xbece,	// (0x0007d72f) status_small_pane_g4

0x0003,

0xf60b,	// (0x00080e6c) status_small_pane_g

0xbed7,	// (0x0007d738) status_small_pane_t1

0x1bb2,	// (0x00073413) main_video3_pane

0xca42,	// (0x0007e2a3) cams_zoom_vslider_pane

0xca4a,	// (0x0007e2ab) image3_wide_pane_ParamLimits

0xca4a,	// (0x0007e2ab) image3_wide_pane

0xca64,	// (0x0007e2c5) image3_wide_small_pane

0xca6e,	// (0x0007e2cf) main_video3_pane_g1_ParamLimits

0xca6e,	// (0x0007e2cf) main_video3_pane_g1

0xca8a,	// (0x0007e2eb) main_video3_pane_g2_ParamLimits

0xca8a,	// (0x0007e2eb) main_video3_pane_g2

0x0001,

0xf85b,	// (0x000810bc) main_video3_pane_g_ParamLimits

0xf85b,	// (0x000810bc) main_video3_pane_g

0xcaa6,	// (0x0007e307) main_video3_pane_t1_ParamLimits

0xcaa6,	// (0x0007e307) main_video3_pane_t1

0xcad1,	// (0x0007e332) main_video3_pane_t2_ParamLimits

0xcad1,	// (0x0007e332) main_video3_pane_t2

0xcafc,	// (0x0007e35d) main_video3_pane_t3_ParamLimits

0xcafc,	// (0x0007e35d) main_video3_pane_t3

0x0002,

0xf860,	// (0x000810c1) main_video3_pane_t_ParamLimits

0xf860,	// (0x000810c1) main_video3_pane_t

0xcb27,	// (0x0007e388) cams_zoom_vslider_pane_g1

0xcb30,	// (0x0007e391) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x000810c8) cams_zoom_vslider_pane_g

0xcb38,	// (0x0007e399) small_slider_vertical_pane

0xc38e,	// (0x0007dbef) small_slider_vertical_pane_g1

0xc38e,	// (0x0007dbef) small_slider_vertical_pane_g2

0xcb40,	// (0x0007e3a1) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x000810cd) small_slider_vertical_pane_g

0x1bb2,	// (0x00073413) main_hwr_training_pane

0xcb49,	// (0x0007e3aa) hwr_training_instruct_pane_ParamLimits

0xcb49,	// (0x0007e3aa) hwr_training_instruct_pane

0x7b19,	// (0x0007937a) hwr_training_navi_pane_ParamLimits

0x7b19,	// (0x0007937a) hwr_training_navi_pane

0x7b30,	// (0x00079391) hwr_training_write_pane_ParamLimits

0x7b30,	// (0x00079391) hwr_training_write_pane

0x1bb2,	// (0x00073413) bg_frame_shadow_pane

0xcb78,	// (0x0007e3d9) hwr_training_write_pane_g1

0xcb80,	// (0x0007e3e1) hwr_training_write_pane_g2

0xcb88,	// (0x0007e3e9) hwr_training_write_pane_g3

0xcb90,	// (0x0007e3f1) hwr_training_write_pane_g4

0xcb98,	// (0x0007e3f9) hwr_training_write_pane_g5

0xcba0,	// (0x0007e401) hwr_training_write_pane_g6

0xcba8,	// (0x0007e409) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x000810d4) hwr_training_write_pane_g

0xea14,	// (0x00080275) hwr_training_navi_pane_g1_ParamLimits

0xea14,	// (0x00080275) hwr_training_navi_pane_g1

0xea26,	// (0x00080287) hwr_training_navi_pane_g2_ParamLimits

0xea26,	// (0x00080287) hwr_training_navi_pane_g2

0xea38,	// (0x00080299) hwr_training_navi_pane_g3_ParamLimits

0xea38,	// (0x00080299) hwr_training_navi_pane_g3

0xea48,	// (0x000802a9) hwr_training_navi_pane_g4_ParamLimits

0xea48,	// (0x000802a9) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x000810e3) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x000810e3) hwr_training_navi_pane_g

0xea55,	// (0x000802b6) hwr_training_navi_pane_t1

0x7b70,	// (0x000793d1) list_single_hwr_training_instruct_pane_ParamLimits

0x7b70,	// (0x000793d1) list_single_hwr_training_instruct_pane

0xcbb0,	// (0x0007e411) list_single_hwr_training_instruct_pane_t1

0xc2ce,	// (0x0007db2f) bg_frame_shadow_pane_g1

0xcbbf,	// (0x0007e420) bg_frame_shadow_pane_g2

0xcbc7,	// (0x0007e428) bg_frame_shadow_pane_g3

0xcbcf,	// (0x0007e430) bg_frame_shadow_pane_g4

0xcbd7,	// (0x0007e438) bg_frame_shadow_pane_g5

0xcbdf,	// (0x0007e440) bg_frame_shadow_pane_g6

0xcbe7,	// (0x0007e448) bg_frame_shadow_pane_g7

0x2a2b,	// (0x0007428c) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x000810ee) bg_frame_shadow_pane_g

0x1bb2,	// (0x00073413) main_video_tele_dialer_pane

0x7b83,	// (0x000793e4) aid_size_cell_video_keypad_ParamLimits

0x7b83,	// (0x000793e4) aid_size_cell_video_keypad

0x7b9d,	// (0x000793fe) grid_video_dialer_keypad_pane_ParamLimits

0x7b9d,	// (0x000793fe) grid_video_dialer_keypad_pane

0x7bdf,	// (0x00079440) video_down_pane_cp_ParamLimits

0x7bdf,	// (0x00079440) video_down_pane_cp

0x7c0f,	// (0x00079470) cell_video_dialer_keypad_pane_ParamLimits

0x7c0f,	// (0x00079470) cell_video_dialer_keypad_pane

0xcbef,	// (0x0007e450) bg_button_pane_cp08_ParamLimits

0xcbef,	// (0x0007e450) bg_button_pane_cp08

0x7c31,	// (0x00079492) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7c31,	// (0x00079492) cell_video_dialer_keypad_pane_g1

0x7376,	// (0x00078bd7) mup3_rocker2_pane_ParamLimits

0x7376,	// (0x00078bd7) mup3_rocker2_pane

0xc38e,	// (0x0007dbef) mup3_rocker2_pane_g1

0x6058,	// (0x000778b9) main_dialer2_pane

0x1bb2,	// (0x00073413) main_mp4_pane

0xea6b,	// (0x000802cc) main_mp4_pane_g1_ParamLimits

0xea6b,	// (0x000802cc) main_mp4_pane_g1

0xea6b,	// (0x000802cc) main_mp4_pane_g2_ParamLimits

0xea6b,	// (0x000802cc) main_mp4_pane_g2

0x7c6c,	// (0x000794cd) main_mp4_pane_g3_ParamLimits

0x7c6c,	// (0x000794cd) main_mp4_pane_g3

0xea79,	// (0x000802da) main_mp4_pane_g4_ParamLimits

0xea79,	// (0x000802da) main_mp4_pane_g4

0xeaa1,	// (0x00080302) main_mp4_pane_g5_ParamLimits

0xeaa1,	// (0x00080302) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0008110e) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0008110e) main_mp4_pane_g

0xeaf1,	// (0x00080352) main_mp4_pane_t1_ParamLimits

0xeaf1,	// (0x00080352) main_mp4_pane_t1

0xeb49,	// (0x000803aa) main_mp4_pane_t2_ParamLimits

0xeb49,	// (0x000803aa) main_mp4_pane_t2

0xee76,	// (0x000806d7) main_mp4_pane_t3_ParamLimits

0xee76,	// (0x000806d7) main_mp4_pane_t3

0xeb9b,	// (0x000803fc) main_mp4_pane_t4_ParamLimits

0xeb9b,	// (0x000803fc) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008111b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008111b) main_mp4_pane_t

0xebdb,	// (0x0008043c) mp4_progress_pane_ParamLimits

0xebdb,	// (0x0008043c) mp4_progress_pane

0xec25,	// (0x00080486) mp4_rocker_pane_ParamLimits

0xec25,	// (0x00080486) mp4_rocker_pane

0xee9e,	// (0x000806ff) mp4_progress_pane_t1

0xeeb5,	// (0x00080716) mp4_progress_pane_t2

0x0001,

0x069f,	// (0x00071f00) mp4_progress_pane_t

0xeecc,	// (0x0008072d) mup_progress_pane_cp04

0xc38e,	// (0x0007dbef) mp4_rocker_pane_g1

0x7c9c,	// (0x000794fd) aid_cell_size_keypad2_ParamLimits

0x7c9c,	// (0x000794fd) aid_cell_size_keypad2

0x7cb2,	// (0x00079513) dialer2_ne_pane_ParamLimits

0x7cb2,	// (0x00079513) dialer2_ne_pane

0x7cc6,	// (0x00079527) grid_dialer2_keypad_pane_ParamLimits

0x7cc6,	// (0x00079527) grid_dialer2_keypad_pane

0xc17b,	// (0x0007d9dc) bg_popup_call_pane_cp07_ParamLimits

0xc17b,	// (0x0007d9dc) bg_popup_call_pane_cp07

0x7cdc,	// (0x0007953d) dialer2_ne_pane_t1_ParamLimits

0x7cdc,	// (0x0007953d) dialer2_ne_pane_t1

0x7d16,	// (0x00079577) cell_dialer2_keypad_pane_ParamLimits

0x7d16,	// (0x00079577) cell_dialer2_keypad_pane

0xeeea,	// (0x0008074b) bg_button_pane_pane_cp04_ParamLimits

0xeeea,	// (0x0008074b) bg_button_pane_pane_cp04

0x7d38,	// (0x00079599) cell_dialer2_keypad_pane_g1_ParamLimits

0x7d38,	// (0x00079599) cell_dialer2_keypad_pane_g1

0x3524,	// (0x00074d85) aid_placing_vt_set_content_ParamLimits

0x3524,	// (0x00074d85) aid_placing_vt_set_content

0x3546,	// (0x00074da7) aid_placing_vt_set_title_ParamLimits

0x3546,	// (0x00074da7) aid_placing_vt_set_title

0x1bb2,	// (0x00073413) main_image3_pane

0x7de4,	// (0x00079645) area_side_right_pane_cp01_ParamLimits

0x7de4,	// (0x00079645) area_side_right_pane_cp01

0xea6b,	// (0x000802cc) main_image3_pane_g1_ParamLimits

0xea6b,	// (0x000802cc) main_image3_pane_g1

0x7dfb,	// (0x0007965c) main_image3_pane_g2_ParamLimits

0x7dfb,	// (0x0007965c) main_image3_pane_g2

0x7e21,	// (0x00079682) main_image3_pane_g3_ParamLimits

0x7e21,	// (0x00079682) main_image3_pane_g3

0x7e47,	// (0x000796a8) main_image3_pane_g4_ParamLimits

0x7e47,	// (0x000796a8) main_image3_pane_g4

0x0003,

0xf8cd,	// (0x0008112e) main_image3_pane_g_ParamLimits

0xf8cd,	// (0x0008112e) main_image3_pane_g

0x7e6d,	// (0x000796ce) main_image3_pane_t1_ParamLimits

0x7e6d,	// (0x000796ce) main_image3_pane_t1

0x7ec5,	// (0x00079726) main_image3_pane_t2_ParamLimits

0x7ec5,	// (0x00079726) main_image3_pane_t2

0x7f17,	// (0x00079778) main_image3_pane_t3_ParamLimits

0x7f17,	// (0x00079778) main_image3_pane_t3

0x0003,

0xf8d6,	// (0x00081137) main_image3_pane_t_ParamLimits

0xf8d6,	// (0x00081137) main_image3_pane_t

0xad52,	// (0x0007c5b3) grid_sctrl_middle_pane_cp01_ParamLimits

0xad52,	// (0x0007c5b3) grid_sctrl_middle_pane_cp01

0x7f97,	// (0x000797f8) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f97,	// (0x000797f8) cell_sctrl_middle_pane_cp01

0x7fb4,	// (0x00079815) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7fb4,	// (0x00079815) cell_sctrl_middle_pane_cp01_g1

0x1bb2,	// (0x00073413) main_call4_pane

0x7fca,	// (0x0007982b) aid_size_button_call4_ParamLimits

0x7fca,	// (0x0007982b) aid_size_button_call4

0x7ff9,	// (0x0007985a) call4_windows_pane_ParamLimits

0x7ff9,	// (0x0007985a) call4_windows_pane

0x8015,	// (0x00079876) grid_call4_button_pane_ParamLimits

0x8015,	// (0x00079876) grid_call4_button_pane

0xeef6,	// (0x00080757) call4_windows_conf_pane

0x8034,	// (0x00079895) popup_call4_audio_first_window_ParamLimits

0x8034,	// (0x00079895) popup_call4_audio_first_window

0x8054,	// (0x000798b5) popup_call4_audio_second_window_ParamLimits

0x8054,	// (0x000798b5) popup_call4_audio_second_window

0xef29,	// (0x0008078a) popup_call4_audio_wait_window_ParamLimits

0xef29,	// (0x0008078a) popup_call4_audio_wait_window

0x8066,	// (0x000798c7) cell_call4_button_pane_ParamLimits

0x8066,	// (0x000798c7) cell_call4_button_pane

0x808b,	// (0x000798ec) bg_button_pane_cp09_ParamLimits

0x808b,	// (0x000798ec) bg_button_pane_cp09

0x8097,	// (0x000798f8) cell_call4_button_pane_g1_ParamLimits

0x8097,	// (0x000798f8) cell_call4_button_pane_g1

0x80bd,	// (0x0007991e) cell_call4_button_pane_t1_ParamLimits

0x80bd,	// (0x0007991e) cell_call4_button_pane_t1

0xef6f,	// (0x000807d0) popup_call4_audio_conf_window_ParamLimits

0xef6f,	// (0x000807d0) popup_call4_audio_conf_window

0x73d0,	// (0x00078c31) mup3_progress_pane_t1_ParamLimits

0x73ee,	// (0x00078c4f) mup3_progress_pane_t2_ParamLimits

0xc638,	// (0x0007de99) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x00081010) mup3_progress_pane_t_ParamLimits

0xc655,	// (0x0007deb6) mup_progress_pane_cp03_ParamLimits

0x797a,	// (0x000791db) mup3_control_keys_pane_g4_copy1

0xec09,	// (0x0008046a) mp4_rocker2_pane_ParamLimits

0xec09,	// (0x0008046a) mp4_rocker2_pane

0xef83,	// (0x000807e4) mp4_rocker2_pane_g1

0xef8b,	// (0x000807ec) mp4_rocker2_pane_g2

0xec75,	// (0x000804d6) mp4_rocker2_pane_g3

0xec7d,	// (0x000804de) mp4_rocker2_pane_g4

0xec85,	// (0x000804e6) mp4_rocker2_pane_g5

0x0004,

0xf8df,	// (0x00081140) mp4_rocker2_pane_g

0x1bb2,	// (0x00073413) main_camera4_pane

0x1bb2,	// (0x00073413) main_video4_pane

0x7bb1,	// (0x00079412) main_video_tele_dialer_pane_t1_ParamLimits

0x7bb1,	// (0x00079412) main_video_tele_dialer_pane_t1

0x7bc8,	// (0x00079429) main_video_tele_dialer_pane_t2_ParamLimits

0x7bc8,	// (0x00079429) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x000810ff) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x000810ff) main_video_tele_dialer_pane_t

0x80fb,	// (0x0007995c) cam4_autofocus_pane_ParamLimits

0x80fb,	// (0x0007995c) cam4_autofocus_pane

0x810f,	// (0x00079970) cam4_image_uncrop_pane_ParamLimits

0x810f,	// (0x00079970) cam4_image_uncrop_pane

0x8126,	// (0x00079987) cam4_indicators_pane_ParamLimits

0x8126,	// (0x00079987) cam4_indicators_pane

0x814b,	// (0x000799ac) main_camera4_pane_g1_ParamLimits

0x814b,	// (0x000799ac) main_camera4_pane_g1

0x815d,	// (0x000799be) main_camera4_pane_g2_ParamLimits

0x815d,	// (0x000799be) main_camera4_pane_g2

0x8170,	// (0x000799d1) main_camera4_pane_g3_ParamLimits

0x8170,	// (0x000799d1) main_camera4_pane_g3

0x8183,	// (0x000799e4) main_camera4_pane_g4_ParamLimits

0x8183,	// (0x000799e4) main_camera4_pane_g4

0x8196,	// (0x000799f7) main_camera4_pane_g5_ParamLimits

0x8196,	// (0x000799f7) main_camera4_pane_g5

0x0005,

0xf8ea,	// (0x0008114b) main_camera4_pane_g_ParamLimits

0xf8ea,	// (0x0008114b) main_camera4_pane_g

0x81ba,	// (0x00079a1b) main_camera4_pane_t1_ParamLimits

0x81ba,	// (0x00079a1b) main_camera4_pane_t1

0xc5bd,	// (0x0007de1e) bg_tb_trans_pane_cp06

0xecaf,	// (0x00080510) cam4_indicators_pane_g1

0xecc0,	// (0x00080521) cam4_indicators_pane_g2

0x0002,

0xf905,	// (0x00081166) cam4_indicators_pane_g

0xecd8,	// (0x00080539) cam4_indicators_pane_t1

0x8212,	// (0x00079a73) main_video4_pane_g1_ParamLimits

0x8212,	// (0x00079a73) main_video4_pane_g1

0x8221,	// (0x00079a82) main_video4_pane_g2_ParamLimits

0x8221,	// (0x00079a82) main_video4_pane_g2

0x8230,	// (0x00079a91) main_video4_pane_g3_ParamLimits

0x8230,	// (0x00079a91) main_video4_pane_g3

0x823f,	// (0x00079aa0) main_video4_pane_g4_ParamLimits

0x823f,	// (0x00079aa0) main_video4_pane_g4

0x0004,

0xf90c,	// (0x0008116d) main_video4_pane_g_ParamLimits

0xf90c,	// (0x0008116d) main_video4_pane_g

0x825d,	// (0x00079abe) vid4_indicators_pane_ParamLimits

0x825d,	// (0x00079abe) vid4_indicators_pane

0x8285,	// (0x00079ae6) video4_image_uncrop_cif_pane_ParamLimits

0x8285,	// (0x00079ae6) video4_image_uncrop_cif_pane

0x829d,	// (0x00079afe) video4_image_uncrop_nhd_pane_ParamLimits

0x829d,	// (0x00079afe) video4_image_uncrop_nhd_pane

0x810f,	// (0x00079970) video4_image_uncrop_vga_pane_ParamLimits

0x810f,	// (0x00079970) video4_image_uncrop_vga_pane

0xad52,	// (0x0007c5b3) bg_tb_trans_pane_cp07

0xed02,	// (0x00080563) vid4_indicators_pane_g1

0xed16,	// (0x00080577) vid4_indicators_pane_g2

0xed2a,	// (0x0008058b) vid4_indicators_pane_g3

0x0004,

0xf917,	// (0x00081178) vid4_indicators_pane_g

0xed57,	// (0x000805b8) vid4_indicators_pane_t1

0x82b1,	// (0x00079b12) cam4_autofocus_pane_g1

0x82b9,	// (0x00079b1a) cam4_autofocus_pane_g2

0x82c1,	// (0x00079b22) cam4_autofocus_pane_g3

0x0002,

0xf922,	// (0x00081183) cam4_autofocus_pane_g

0x82c9,	// (0x00079b2a) cam4_autofocus_pane_g3_copy1

0x7bf3,	// (0x00079454) video_down_pane_cp_t1

0x7c01,	// (0x00079462) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x00081104) video_down_pane_cp_t

0xad52,	// (0x0007c5b3) popup_vitu2_window_ParamLimits

0xad52,	// (0x0007c5b3) popup_vitu2_window

0x82d1,	// (0x00079b32) aid_size_cell2_itu2_ParamLimits

0x82d1,	// (0x00079b32) aid_size_cell2_itu2

0x82f7,	// (0x00079b58) aid_size_cell_itu2_ParamLimits

0x82f7,	// (0x00079b58) aid_size_cell_itu2

0x8348,	// (0x00079ba9) bg_popup_window_pane_cp09_ParamLimits

0x8348,	// (0x00079ba9) bg_popup_window_pane_cp09

0x8356,	// (0x00079bb7) field_vitu2_entry_pane_ParamLimits

0x8356,	// (0x00079bb7) field_vitu2_entry_pane

0x836d,	// (0x00079bce) grid_vitu2_function_pane_ParamLimits

0x836d,	// (0x00079bce) grid_vitu2_function_pane

0x83a2,	// (0x00079c03) grid_vitu2_itu_pane_ParamLimits

0x83a2,	// (0x00079c03) grid_vitu2_itu_pane

0x8409,	// (0x00079c6a) cell_vitu2_itu_pane_ParamLimits

0x8409,	// (0x00079c6a) cell_vitu2_itu_pane

0x8431,	// (0x00079c92) cell_vitu2_function_pane_ParamLimits

0x8431,	// (0x00079c92) cell_vitu2_function_pane

0xef93,	// (0x000807f4) bg_popup_call_pane_cp08_ParamLimits

0xef93,	// (0x000807f4) bg_popup_call_pane_cp08

0xefaa,	// (0x0008080b) field_vitu2_entry_pane_g1

0xefb6,	// (0x00080817) field_vitu2_entry_pane_g2

0x0002,

0x070a,	// (0x00071f6b) field_vitu2_entry_pane_g

0x1040,	// (0x000728a1) field_vitu2_entry_pane_t1_ParamLimits

0x1040,	// (0x000728a1) field_vitu2_entry_pane_t1

0xcbfb,	// (0x0007e45c) field_vitu2_entry_pane_t2_ParamLimits

0xcbfb,	// (0x0007e45c) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0008118a) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0008118a) field_vitu2_entry_pane_t

0x8470,	// (0x00079cd1) bg_button_pane_cp010_ParamLimits

0x8470,	// (0x00079cd1) bg_button_pane_cp010

0xed6e,	// (0x000805cf) cell_vitu2_itu_pane_g1

0x848c,	// (0x00079ced) cell_vitu2_itu_pane_t1_ParamLimits

0x848c,	// (0x00079ced) cell_vitu2_itu_pane_t1

0x106d,	// (0x000728ce) cell_vitu2_itu_pane_t2_ParamLimits

0x106d,	// (0x000728ce) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x00081194) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x00081194) cell_vitu2_itu_pane_t

0xad52,	// (0x0007c5b3) bg_button_pane_cp011

0x84ea,	// (0x00079d4b) cell_vitu2_function_pane_g1

0x1bb2,	// (0x00073413) main_myfav_hc_pane

0x7f63,	// (0x000797c4) popup_image3_note_pane_ParamLimits

0x7f63,	// (0x000797c4) popup_image3_note_pane

0x7f7d,	// (0x000797de) popup_image3_tool_bar_pane_ParamLimits

0x7f7d,	// (0x000797de) popup_image3_tool_bar_pane

0x10fb,	// (0x0007295c) cell_vitu2_itu_pane_t3_ParamLimits

0x10fb,	// (0x0007295c) cell_vitu2_itu_pane_t3

0x1bb2,	// (0x00073413) bg_popup_trans_pane

0xefea,	// (0x0008084b) grid_image3_tool_bar_pane

0xeff4,	// (0x00080855) bg_popup_trans_pane_g1

0x3a50,	// (0x000752b1) bg_popup_trans_pane_g2

0xeffc,	// (0x0008085d) bg_popup_trans_pane_g3

0xf004,	// (0x00080865) bg_popup_trans_pane_g4

0xf00c,	// (0x0008086d) bg_popup_trans_pane_g5

0xf014,	// (0x00080875) bg_popup_trans_pane_g6

0xf01c,	// (0x0008087d) bg_popup_trans_pane_g7

0xf024,	// (0x00080885) bg_popup_trans_pane_g8

0x3a30,	// (0x00075291) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0008119b) bg_popup_trans_pane_g

0xf02c,	// (0x0008088d) cell_image3_tool_bar_pane_ParamLimits

0xf02c,	// (0x0008088d) cell_image3_tool_bar_pane

0xc38e,	// (0x0007dbef) cell_image3_tool_bar_pane_g1

0x1bb2,	// (0x00073413) bg_popup_trans_pane_cp1

0xf040,	// (0x000808a1) popup_image3_note_pane_t1

0xf04e,	// (0x000808af) popup_image3_note_pane_t2

0xf05c,	// (0x000808bd) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x000811ae) popup_image3_note_pane_t

0xf06a,	// (0x000808cb) popup_image3_note_pane_t3_copy1

0x84fd,	// (0x00079d5e) bg_myfav_hc_instruction_pane_ParamLimits

0x84fd,	// (0x00079d5e) bg_myfav_hc_instruction_pane

0x850f,	// (0x00079d70) cell_myfav_contact_pane_ParamLimits

0x850f,	// (0x00079d70) cell_myfav_contact_pane

0x8529,	// (0x00079d8a) cell_myfav_contact_pane_cp1_ParamLimits

0x8529,	// (0x00079d8a) cell_myfav_contact_pane_cp1

0x853f,	// (0x00079da0) cell_myfav_contact_pane_cp2_ParamLimits

0x853f,	// (0x00079da0) cell_myfav_contact_pane_cp2

0x8555,	// (0x00079db6) cell_myfav_contact_pane_cp3_ParamLimits

0x8555,	// (0x00079db6) cell_myfav_contact_pane_cp3

0x856a,	// (0x00079dcb) cell_myfav_contact_pane_cp4_ParamLimits

0x856a,	// (0x00079dcb) cell_myfav_contact_pane_cp4

0x857e,	// (0x00079ddf) cell_myfav_contact_pane_cp5_ParamLimits

0x857e,	// (0x00079ddf) cell_myfav_contact_pane_cp5

0x8592,	// (0x00079df3) cell_myfav_contact_pane_cp6_ParamLimits

0x8592,	// (0x00079df3) cell_myfav_contact_pane_cp6

0x85a6,	// (0x00079e07) cell_myfav_contact_pane_cp7_ParamLimits

0x85a6,	// (0x00079e07) cell_myfav_contact_pane_cp7

0xf078,	// (0x000808d9) listscroll_gen_pane_cp05

0x85be,	// (0x00079e1f) main_myfav_hc_pane_g1_ParamLimits

0x85be,	// (0x00079e1f) main_myfav_hc_pane_g1

0x85d4,	// (0x00079e35) main_myfav_hc_pane_g2_ParamLimits

0x85d4,	// (0x00079e35) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x000811b5) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x000811b5) main_myfav_hc_pane_g

0x85fe,	// (0x00079e5f) main_myfav_hc_pane_t1_ParamLimits

0x85fe,	// (0x00079e5f) main_myfav_hc_pane_t1

0xf081,	// (0x000808e2) main_myfav_hc_pane_t2_ParamLimits

0xf081,	// (0x000808e2) main_myfav_hc_pane_t2

0xf093,	// (0x000808f4) main_myfav_hc_pane_t3_ParamLimits

0xf093,	// (0x000808f4) main_myfav_hc_pane_t3

0x8613,	// (0x00079e74) main_myfav_hc_pane_t4_ParamLimits

0x8613,	// (0x00079e74) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x000811bc) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x000811bc) main_myfav_hc_pane_t

0xc38e,	// (0x0007dbef) bg_myfav_hc_instruction_pane_g1

0xf0a5,	// (0x00080906) cell_myfav_contact_pane_g1_ParamLimits

0xf0a5,	// (0x00080906) cell_myfav_contact_pane_g1

0xf0a5,	// (0x00080906) cell_myfav_contact_pane_g2_ParamLimits

0xf0a5,	// (0x00080906) cell_myfav_contact_pane_g2

0xf0b1,	// (0x00080912) cell_myfav_contact_pane_g3_ParamLimits

0xf0b1,	// (0x00080912) cell_myfav_contact_pane_g3

0xc622,	// (0x0007de83) cell_myfav_contact_pane_g4_ParamLimits

0xc622,	// (0x0007de83) cell_myfav_contact_pane_g4

0xf0be,	// (0x0008091f) cell_myfav_contact_pane_g5_ParamLimits

0xf0be,	// (0x0008091f) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x000811c7) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x000811c7) cell_myfav_contact_pane_g

0x85ea,	// (0x00079e4b) main_myfav_hc_pane_g3_ParamLimits

0x85ea,	// (0x00079e4b) main_myfav_hc_pane_g3

0x1cfb,	// (0x0007355c) popup_adpt_find_window

0x8637,	// (0x00079e98) afind_page_pane_ParamLimits

0x8637,	// (0x00079e98) afind_page_pane

0x864c,	// (0x00079ead) aid_size_cell_afind_ParamLimits

0x864c,	// (0x00079ead) aid_size_cell_afind

0x866a,	// (0x00079ecb) bg_popup_sub_pane_cp09_ParamLimits

0x866a,	// (0x00079ecb) bg_popup_sub_pane_cp09

0x8677,	// (0x00079ed8) find_pane_cp01_ParamLimits

0x8677,	// (0x00079ed8) find_pane_cp01

0xcc18,	// (0x0007e479) grid_afind_control_pane_ParamLimits

0xcc18,	// (0x0007e479) grid_afind_control_pane

0x8684,	// (0x00079ee5) grid_afind_pane_ParamLimits

0x8684,	// (0x00079ee5) grid_afind_pane

0x86a2,	// (0x00079f03) cell_afind_pane_ParamLimits

0x86a2,	// (0x00079f03) cell_afind_pane

0xc38e,	// (0x0007dbef) afind_page_pane_g1

0x86f1,	// (0x00079f52) afind_page_pane_g2

0x86fa,	// (0x00079f5b) afind_page_pane_g3

0x0002,

0xf971,	// (0x000811d2) afind_page_pane_g

0x8703,	// (0x00079f64) afind_page_pane_t1

0xcc2c,	// (0x0007e48d) cell_afind_grid_control_pane_ParamLimits

0xcc2c,	// (0x0007e48d) cell_afind_grid_control_pane

0xeeea,	// (0x0008074b) bg_button_pane_cp69_ParamLimits

0xeeea,	// (0x0008074b) bg_button_pane_cp69

0x8723,	// (0x00079f84) cell_afind_pane_g1_ParamLimits

0x8723,	// (0x00079f84) cell_afind_pane_g1

0x8730,	// (0x00079f91) cell_afind_pane_t1_ParamLimits

0x8730,	// (0x00079f91) cell_afind_pane_t1

0x34a5,	// (0x00074d06) bg_button_pane_cp72

0xcc3b,	// (0x0007e49c) cell_afind_grid_control_pane_g1

0x5be7,	// (0x00077448) aid_image_placing_area_ParamLimits

0x5be7,	// (0x00077448) aid_image_placing_area

0xc94f,	// (0x0007e1b0) field_vitu_entry_pane_g1_ParamLimits

0xc94f,	// (0x0007e1b0) field_vitu_entry_pane_g1

0xc95b,	// (0x0007e1bc) field_vitu_entry_pane_g2_ParamLimits

0xc95b,	// (0x0007e1bc) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0008108f) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0008108f) field_vitu_entry_pane_g

0x7a2d,	// (0x0007928e) cell_vitu_itu_pane_g1_ParamLimits

0x7a6f,	// (0x000792d0) cell_vitu_itu_pane_t3_ParamLimits

0x7a6f,	// (0x000792d0) cell_vitu_itu_pane_t3

0xee9e,	// (0x000806ff) mp4_progress_pane_t1_ParamLimits

0xeeb5,	// (0x00080716) mp4_progress_pane_t2_ParamLimits

0x069f,	// (0x00071f00) mp4_progress_pane_t_ParamLimits

0xeecc,	// (0x0008072d) mup_progress_pane_cp04_ParamLimits

0x8625,	// (0x00079e86) main_myfav_hc_pane_t5_ParamLimits

0x8625,	// (0x00079e86) main_myfav_hc_pane_t5

0xad02,	// (0x0007c563) aid_zoom_text_primary

0x1cfb,	// (0x0007355c) popup_adpt_find_window_ParamLimits

0xad52,	// (0x0007c5b3) main_cam_set_pane

0x8139,	// (0x0007999a) cam4_zoom_pane_ParamLimits

0x8139,	// (0x0007999a) cam4_zoom_pane

0x8742,	// (0x00079fa3) main_cam_set_pane_g1_ParamLimits

0x8742,	// (0x00079fa3) main_cam_set_pane_g1

0x8750,	// (0x00079fb1) main_cam_set_pane_g2_ParamLimits

0x8750,	// (0x00079fb1) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x000811d9) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x000811d9) main_cam_set_pane_g

0x8771,	// (0x00079fd2) main_cam_set_pane_t1_ParamLimits

0x8771,	// (0x00079fd2) main_cam_set_pane_t1

0x878c,	// (0x00079fed) main_cset_listscroll_pane_ParamLimits

0x878c,	// (0x00079fed) main_cset_listscroll_pane

0x87aa,	// (0x0007a00b) main_cset_slider_pane_ParamLimits

0x87aa,	// (0x0007a00b) main_cset_slider_pane

0xcc4c,	// (0x0007e4ad) main_cset_list_pane_ParamLimits

0xcc4c,	// (0x0007e4ad) main_cset_list_pane

0xcc5c,	// (0x0007e4bd) scroll_pane_cp028

0x87ce,	// (0x0007a02f) aid_area_touch_slider

0xcc65,	// (0x0007e4c6) cset_slider_pane

0x87ea,	// (0x0007a04b) main_cset_slider_pane_g1

0x87ff,	// (0x0007a060) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x000811de) main_cset_slider_pane_g

0xccd7,	// (0x0007e538) main_cset_slider_pane_t1

0x88a3,	// (0x0007a104) main_cset_slider_pane_t2

0x88bd,	// (0x0007a11e) main_cset_slider_pane_t3

0x88d7,	// (0x0007a138) main_cset_slider_pane_t4

0x88f1,	// (0x0007a152) main_cset_slider_pane_t5

0x890b,	// (0x0007a16c) main_cset_slider_pane_t6

0x8920,	// (0x0007a181) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x00081203) main_cset_slider_pane_t

0x8a24,	// (0x0007a285) cset_list_set_pane_ParamLimits

0x8a24,	// (0x0007a285) cset_list_set_pane

0x8a35,	// (0x0007a296) aid_position_infowindow_above

0x8a3d,	// (0x0007a29e) aid_position_infowindow_below

0x8a45,	// (0x0007a2a6) cset_list_set_pane_g1_ParamLimits

0x8a45,	// (0x0007a2a6) cset_list_set_pane_g1

0x1159,	// (0x000729ba) cset_list_set_pane_g3_ParamLimits

0x1159,	// (0x000729ba) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x00081222) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x00081222) cset_list_set_pane_g

0x1168,	// (0x000729c9) cset_list_set_pane_t1_ParamLimits

0x1168,	// (0x000729c9) cset_list_set_pane_t1

0xad52,	// (0x0007c5b3) list_highlight_pane_cp021_ParamLimits

0xad52,	// (0x0007c5b3) list_highlight_pane_cp021

0x54cc,	// (0x00076d2d) cset_slider_pane_g1

0x54de,	// (0x00076d3f) cset_slider_pane_g2

0x54d5,	// (0x00076d36) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x00081227) cset_slider_pane_g

0xed80,	// (0x000805e1) aid_area_touch_cam4_zoom

0xed88,	// (0x000805e9) cam4_zoom_cont_pane

0xed90,	// (0x000805f1) cam4_zoom_pane_g1

0xed98,	// (0x000805f9) cam4_zoom_pane_g2

0x8a51,	// (0x0007a2b2) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0008122e) cam4_zoom_pane_g

0xcd77,	// (0x0007e5d8) cam4_zoom_cont_pane_g1

0xcd80,	// (0x0007e5e1) cam4_zoom_cont_pane_g2

0xcd89,	// (0x0007e5ea) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x00081235) cam4_zoom_cont_pane_g

0x7fe8,	// (0x00079849) call4_image_pane_ParamLimits

0x7fe8,	// (0x00079849) call4_image_pane

0xeef6,	// (0x00080757) call4_windows_conf_pane_ParamLimits

0xef09,	// (0x0008076a) popup_call4_audio_in_window_ParamLimits

0xef09,	// (0x0008076a) popup_call4_audio_in_window

0x1bb2,	// (0x00073413) bg_popup_call2_act_pane_cp02

0xef67,	// (0x000807c8) call4_list_conf_pane

0xc38e,	// (0x0007dbef) call4_image_pane_g1

0xc38e,	// (0x0007dbef) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x00080f50) call4_image_pane_g

0xcd92,	// (0x0007e5f3) list_single_graphic_popup_conf4_pane_ParamLimits

0xcd92,	// (0x0007e5f3) list_single_graphic_popup_conf4_pane

0x1bb2,	// (0x00073413) list_highlight_pane_cp022

0xcda5,	// (0x0007e606) list_single_graphic_popup_conf4_pane_g1

0x4ac2,	// (0x00076323) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0008123c) list_single_graphic_popup_conf4_pane_g

0xcdad,	// (0x0007e60e) list_single_graphic_popup_conf4_pane_t1

0x365f,	// (0x00074ec0) popup_vtel_slider_window_ParamLimits

0x365f,	// (0x00074ec0) popup_vtel_slider_window

0xeed8,	// (0x00080739) dialer2_ne_pane_t2_ParamLimits

0xeed8,	// (0x00080739) dialer2_ne_pane_t2

0x0001,

0xf8c3,	// (0x00081124) dialer2_ne_pane_t_ParamLimits

0xf8c3,	// (0x00081124) dialer2_ne_pane_t

0xc17b,	// (0x0007d9dc) bg_popup_sub_pane_cp010_ParamLimits

0xc17b,	// (0x0007d9dc) bg_popup_sub_pane_cp010

0x8a59,	// (0x0007a2ba) popup_vtel_slider_window_g1_ParamLimits

0x8a59,	// (0x0007a2ba) popup_vtel_slider_window_g1

0x8a6c,	// (0x0007a2cd) popup_vtel_slider_window_g2_ParamLimits

0x8a6c,	// (0x0007a2cd) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x00081241) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x00081241) popup_vtel_slider_window_g

0x8ac0,	// (0x0007a321) vtel_slider_pane_ParamLimits

0x8ac0,	// (0x0007a321) vtel_slider_pane

0x8ae2,	// (0x0007a343) vtel_slider_pane_g1_ParamLimits

0x8ae2,	// (0x0007a343) vtel_slider_pane_g1

0x8af6,	// (0x0007a357) vtel_slider_pane_g2_ParamLimits

0x8af6,	// (0x0007a357) vtel_slider_pane_g2

0x8b0e,	// (0x0007a36f) vtel_slider_pane_g3_ParamLimits

0x8b0e,	// (0x0007a36f) vtel_slider_pane_g3

0x8ae2,	// (0x0007a343) vtel_slider_pane_g4_ParamLimits

0x8ae2,	// (0x0007a343) vtel_slider_pane_g4

0x8b24,	// (0x0007a385) vtel_slider_pane_g5_ParamLimits

0x8b24,	// (0x0007a385) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0008124a) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0008124a) vtel_slider_pane_g

0xad52,	// (0x0007c5b3) main_gallery2_pane

0x8323,	// (0x00079b84) aid_size_row_itut2_dropdow_list_ParamLimits

0x8323,	// (0x00079b84) aid_size_row_itut2_dropdow_list

0x8386,	// (0x00079be7) grid_vitu2_function_top_pane_ParamLimits

0x8386,	// (0x00079be7) grid_vitu2_function_top_pane

0x83cb,	// (0x00079c2c) popup_vitu2_dropdown_list_window_ParamLimits

0x83cb,	// (0x00079c2c) popup_vitu2_dropdown_list_window

0x83e7,	// (0x00079c48) popup_vitu2_match_list_window

0x8b3a,	// (0x0007a39b) cell_vitu2_function_top_pane_ParamLimits

0x8b3a,	// (0x0007a39b) cell_vitu2_function_top_pane

0x8b52,	// (0x0007a3b3) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8b52,	// (0x0007a3b3) cell_vitu2_function_top_pane_cp01

0x8b6e,	// (0x0007a3cf) cell_vitu2_function_top_wide_pane_ParamLimits

0x8b6e,	// (0x0007a3cf) cell_vitu2_function_top_wide_pane

0xad52,	// (0x0007c5b3) bg_button_pane_cp012

0x8b8a,	// (0x0007a3eb) cell_vitu2_function_top_pane_g1

0xeda0,	// (0x00080601) bg_button_pane_cp013_ParamLimits

0xeda0,	// (0x00080601) bg_button_pane_cp013

0x8b9e,	// (0x0007a3ff) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8b9e,	// (0x0007a3ff) cell_vitu2_function_top_wide_pane_g1

0xad52,	// (0x0007c5b3) bg_popup_sub_pane_cp20

0x8bb6,	// (0x0007a417) list_vitu2_match_list_pane

0xeff4,	// (0x00080855) bg_popup_sub_pane_cp20_g1

0xeffc,	// (0x0008085d) bg_popup_sub_pane_cp20_g2

0x3a50,	// (0x000752b1) bg_popup_sub_pane_cp20_g3

0xf004,	// (0x00080865) bg_popup_sub_pane_cp20_g4

0x3a30,	// (0x00075291) bg_popup_sub_pane_cp20_g5

0xcdc3,	// (0x0007e624) bg_popup_sub_pane_cp20_g6

0xf014,	// (0x00080875) bg_popup_sub_pane_cp20_g7

0xf01c,	// (0x0008087d) bg_popup_sub_pane_cp20_g8

0xf024,	// (0x00080885) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x00081255) bg_popup_sub_pane_cp20_g

0xedbc,	// (0x0008061d) list_vitu2_match_list_item_pane_ParamLimits

0xedbc,	// (0x0008061d) list_vitu2_match_list_item_pane

0xedce,	// (0x0008062f) list_vitu2_match_list_item_pane_t1

0x1bb2,	// (0x00073413) bg_popup_sub_pane_cp21

0x49cc,	// (0x0007622d) grid_vitu2_dropdown_list_pane

0x8bd4,	// (0x0007a435) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8bd4,	// (0x0007a435) cell_vitu2_dropdown_list_char_pane

0x8bf5,	// (0x0007a456) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8bf5,	// (0x0007a456) cell_vitu2_dropdown_list_ctrl_pane

0xcdcb,	// (0x0007e62c) cell_vitu2_dropdown_list_char_pane_g1

0xcdd4,	// (0x0007e635) cell_vitu2_dropdown_list_char_pane_g2

0xcddd,	// (0x0007e63e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x00081272) cell_vitu2_dropdown_list_char_pane_g

0x8c21,	// (0x0007a482) cell_vitu2_dropdown_list_char_pane_t1

0x8c2f,	// (0x0007a490) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8c2f,	// (0x0007a490) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8c3c,	// (0x0007a49d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8c3c,	// (0x0007a49d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8c49,	// (0x0007a4aa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8c49,	// (0x0007a4aa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8c56,	// (0x0007a4b7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8c56,	// (0x0007a4b7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc5bd,	// (0x0007de1e) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc5bd,	// (0x0007de1e) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x00081279) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x00081279) cell_vitu2_dropdown_list_ctrl_pane_g

0x8c72,	// (0x0007a4d3) aid_size_cell_gallery2_ParamLimits

0x8c72,	// (0x0007a4d3) aid_size_cell_gallery2

0x8c90,	// (0x0007a4f1) grid_gallery2_pane_ParamLimits

0x8c90,	// (0x0007a4f1) grid_gallery2_pane

0x8ca2,	// (0x0007a503) scroll_pane_cp029_ParamLimits

0x8ca2,	// (0x0007a503) scroll_pane_cp029

0x8cae,	// (0x0007a50f) cell_gallery2_pane_ParamLimits

0x8cae,	// (0x0007a50f) cell_gallery2_pane

0xcde6,	// (0x0007e647) cell_gallery2_pane_g2

0x8d04,	// (0x0007a565) cell_gallery2_pane_g3

0xcdee,	// (0x0007e64f) cell_gallery2_pane_g4

0xcdf6,	// (0x0007e657) cell_gallery2_pane_g5

0x3128,	// (0x00074989) grid_highlight_pane_cp10

0x83e7,	// (0x00079c48) popup_vitu2_match_list_window_ParamLimits

0x83f8,	// (0x00079c59) popup_vitu2_query_window_ParamLimits

0x83f8,	// (0x00079c59) popup_vitu2_query_window

0x1bb2,	// (0x00073413) bg_vitu2_candi_button_pane

0xcdcb,	// (0x0007e62c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcdd4,	// (0x0007e635) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcddd,	// (0x0007e63e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x11d3,	// (0x00072a34) bg_button_pane_cp015

0x8d0c,	// (0x0007a56d) bg_button_pane_cp016

0x8d1e,	// (0x0007a57f) bg_button_pane_cp017

0xbef9,	// (0x0007d75a) bg_popup_sub_pane_cp22

0xcdfe,	// (0x0007e65f) popup_vitu2_query_window_g1

0x1202,	// (0x00072a63) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x00081284) popup_vitu2_query_window_g

0x121d,	// (0x00072a7e) popup_vitu2_query_window_t1_ParamLimits

0x121d,	// (0x00072a7e) popup_vitu2_query_window_t1

0x1250,	// (0x00072ab1) popup_vitu2_query_window_t2_ParamLimits

0x1250,	// (0x00072ab1) popup_vitu2_query_window_t2

0x1262,	// (0x00072ac3) popup_vitu2_query_window_t3_ParamLimits

0x1262,	// (0x00072ac3) popup_vitu2_query_window_t3

0x8d40,	// (0x0007a5a1) popup_vitu2_query_window_t4_ParamLimits

0x8d40,	// (0x0007a5a1) popup_vitu2_query_window_t4

0x8d5d,	// (0x0007a5be) popup_vitu2_query_window_t5_ParamLimits

0x8d5d,	// (0x0007a5be) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0008128b) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0008128b) popup_vitu2_query_window_t

0xcc44,	// (0x0007e4a5) main_cset_text_pane

0x87ce,	// (0x0007a02f) aid_area_touch_slider_ParamLimits

0xcc65,	// (0x0007e4c6) cset_slider_pane_ParamLimits

0x87ea,	// (0x0007a04b) main_cset_slider_pane_g1_ParamLimits

0x87ff,	// (0x0007a060) main_cset_slider_pane_g2_ParamLimits

0xcc8f,	// (0x0007e4f0) main_cset_slider_pane_g3_ParamLimits

0xcc8f,	// (0x0007e4f0) main_cset_slider_pane_g3

0x8814,	// (0x0007a075) main_cset_slider_pane_g4_ParamLimits

0x8814,	// (0x0007a075) main_cset_slider_pane_g4

0x8823,	// (0x0007a084) main_cset_slider_pane_g5_ParamLimits

0x8823,	// (0x0007a084) main_cset_slider_pane_g5

0x882f,	// (0x0007a090) main_cset_slider_pane_g6_ParamLimits

0x882f,	// (0x0007a090) main_cset_slider_pane_g6

0xf97d,	// (0x000811de) main_cset_slider_pane_g_ParamLimits

0xccd7,	// (0x0007e538) main_cset_slider_pane_t1_ParamLimits

0x88a3,	// (0x0007a104) main_cset_slider_pane_t2_ParamLimits

0x88bd,	// (0x0007a11e) main_cset_slider_pane_t3_ParamLimits

0x88d7,	// (0x0007a138) main_cset_slider_pane_t4_ParamLimits

0x88f1,	// (0x0007a152) main_cset_slider_pane_t5_ParamLimits

0x890b,	// (0x0007a16c) main_cset_slider_pane_t6_ParamLimits

0x8920,	// (0x0007a181) main_cset_slider_pane_t7_ParamLimits

0x894a,	// (0x0007a1ab) main_cset_slider_pane_t8_ParamLimits

0x894a,	// (0x0007a1ab) main_cset_slider_pane_t8

0x8972,	// (0x0007a1d3) main_cset_slider_pane_t9_ParamLimits

0x8972,	// (0x0007a1d3) main_cset_slider_pane_t9

0x899a,	// (0x0007a1fb) main_cset_slider_pane_t10_ParamLimits

0x899a,	// (0x0007a1fb) main_cset_slider_pane_t10

0x89c2,	// (0x0007a223) main_cset_slider_pane_t11_ParamLimits

0x89c2,	// (0x0007a223) main_cset_slider_pane_t11

0x89ea,	// (0x0007a24b) main_cset_slider_pane_t12_ParamLimits

0x89ea,	// (0x0007a24b) main_cset_slider_pane_t12

0x8a07,	// (0x0007a268) main_cset_slider_pane_t13_ParamLimits

0x8a07,	// (0x0007a268) main_cset_slider_pane_t13

0xf9a2,	// (0x00081203) main_cset_slider_pane_t_ParamLimits

0x1bb2,	// (0x00073413) bg_popup_sub_pane_cp011

0xce0a,	// (0x0007e66b) main_cset_text_pane_g1

0xce12,	// (0x0007e673) main_cset_text_pane_t1

0xce20,	// (0x0007e681) main_cset_text_pane_t2

0xce2e,	// (0x0007e68f) main_cset_text_pane_t3

0xce3c,	// (0x0007e69d) main_cset_text_pane_t4

0xce4a,	// (0x0007e6ab) main_cset_text_pane_t5

0xce58,	// (0x0007e6b9) main_cset_text_pane_t6

0xce66,	// (0x0007e6c7) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0008129a) main_cset_text_pane_t

0x1bb2,	// (0x00073413) main_cam4_burst_pane

0x1bb2,	// (0x00073413) main_cam5_pane

0x8711,	// (0x00079f72) bg_button_pane_cp019

0x871a,	// (0x00079f7b) bg_button_pane_cp020

0xcc9b,	// (0x0007e4fc) main_cset_slider_pane_g7_ParamLimits

0xcc9b,	// (0x0007e4fc) main_cset_slider_pane_g7

0xcca7,	// (0x0007e508) main_cset_slider_pane_g8_ParamLimits

0xcca7,	// (0x0007e508) main_cset_slider_pane_g8

0x8843,	// (0x0007a0a4) main_cset_slider_pane_g9_ParamLimits

0x8843,	// (0x0007a0a4) main_cset_slider_pane_g9

0x884f,	// (0x0007a0b0) main_cset_slider_pane_g10_ParamLimits

0x884f,	// (0x0007a0b0) main_cset_slider_pane_g10

0xccb3,	// (0x0007e514) main_cset_slider_pane_g11_ParamLimits

0xccb3,	// (0x0007e514) main_cset_slider_pane_g11

0xccbf,	// (0x0007e520) main_cset_slider_pane_g12_ParamLimits

0xccbf,	// (0x0007e520) main_cset_slider_pane_g12

0x885b,	// (0x0007a0bc) main_cset_slider_pane_g13_ParamLimits

0x885b,	// (0x0007a0bc) main_cset_slider_pane_g13

0x8867,	// (0x0007a0c8) main_cset_slider_pane_g14_ParamLimits

0x8867,	// (0x0007a0c8) main_cset_slider_pane_g14

0x8873,	// (0x0007a0d4) main_cset_slider_pane_g15_ParamLimits

0x8873,	// (0x0007a0d4) main_cset_slider_pane_g15

0xcd05,	// (0x0007e566) main_cset_slider_pane_t14_ParamLimits

0xcd05,	// (0x0007e566) main_cset_slider_pane_t14

0xcd3e,	// (0x0007e59f) main_cset_slider_pane_t15_ParamLimits

0xcd3e,	// (0x0007e59f) main_cset_slider_pane_t15

0x8d7a,	// (0x0007a5db) aid_cam4_burst_size_cell_ParamLimits

0x8d7a,	// (0x0007a5db) aid_cam4_burst_size_cell

0x8d9a,	// (0x0007a5fb) grid_cam4_burst_pane_ParamLimits

0x8d9a,	// (0x0007a5fb) grid_cam4_burst_pane

0x8dc4,	// (0x0007a625) linegrid_cam4_burst_pane_ParamLimits

0x8dc4,	// (0x0007a625) linegrid_cam4_burst_pane

0xce74,	// (0x0007e6d5) scroll_pane_cp30_ParamLimits

0xce74,	// (0x0007e6d5) scroll_pane_cp30

0x8de6,	// (0x0007a647) cell_cam4_burst_pane_ParamLimits

0x8de6,	// (0x0007a647) cell_cam4_burst_pane

0xce80,	// (0x0007e6e1) linegrid_cam4_burst_pane_g1_ParamLimits

0xce80,	// (0x0007e6e1) linegrid_cam4_burst_pane_g1

0x8e2d,	// (0x0007a68e) linegrid_cam4_burst_pane_g2_ParamLimits

0x8e2d,	// (0x0007a68e) linegrid_cam4_burst_pane_g2

0xce8d,	// (0x0007e6ee) linegrid_cam4_burst_pane_g3_ParamLimits

0xce8d,	// (0x0007e6ee) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x000812a9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000812a9) linegrid_cam4_burst_pane_g

0x8e3e,	// (0x0007a69f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8e3e,	// (0x0007a69f) linegrid_cam4_burst_pane_g3_copy1

0xce9a,	// (0x0007e6fb) linegrid_cam4_burst_pane_g4_ParamLimits

0xce9a,	// (0x0007e6fb) linegrid_cam4_burst_pane_g4

0x8e58,	// (0x0007a6b9) linegrid_cam4_burst_pane_g5_ParamLimits

0x8e58,	// (0x0007a6b9) linegrid_cam4_burst_pane_g5

0x8e69,	// (0x0007a6ca) linegrid_cam4_burst_pane_g6_ParamLimits

0x8e69,	// (0x0007a6ca) linegrid_cam4_burst_pane_g6

0xcea7,	// (0x0007e708) linegrid_cam4_burst_pane_g7_ParamLimits

0xcea7,	// (0x0007e708) linegrid_cam4_burst_pane_g7

0x8e7a,	// (0x0007a6db) cell_cam4_burst_pane_g1

0xcec0,	// (0x0007e721) main_cam5_pane_t1_ParamLimits

0xcec0,	// (0x0007e721) main_cam5_pane_t1

0xced2,	// (0x0007e733) main_cam5_pane_t2_ParamLimits

0xced2,	// (0x0007e733) main_cam5_pane_t2

0xcee4,	// (0x0007e745) main_cam5_pane_t3_ParamLimits

0xcee4,	// (0x0007e745) main_cam5_pane_t3

0xcef6,	// (0x0007e757) main_cam5_pane_t4_ParamLimits

0xcef6,	// (0x0007e757) main_cam5_pane_t4

0xcf0c,	// (0x0007e76d) main_cam5_pane_t5_ParamLimits

0xcf0c,	// (0x0007e76d) main_cam5_pane_t5

0xcf1e,	// (0x0007e77f) main_cam5_pane_t6_ParamLimits

0xcf1e,	// (0x0007e77f) main_cam5_pane_t6

0xcf30,	// (0x0007e791) main_cam5_pane_t7_ParamLimits

0xcf30,	// (0x0007e791) main_cam5_pane_t7

0xcf42,	// (0x0007e7a3) main_cam5_pane_t8_ParamLimits

0xcf42,	// (0x0007e7a3) main_cam5_pane_t8

0xcf5e,	// (0x0007e7bf) main_cam5_pane_t9_ParamLimits

0xcf5e,	// (0x0007e7bf) main_cam5_pane_t9

0xcf70,	// (0x0007e7d1) main_cam5_pane_t10_ParamLimits

0xcf70,	// (0x0007e7d1) main_cam5_pane_t10

0xcf82,	// (0x0007e7e3) main_cam5_pane_t11_ParamLimits

0xcf82,	// (0x0007e7e3) main_cam5_pane_t11

0xcf94,	// (0x0007e7f5) main_cam5_pane_t12_ParamLimits

0xcf94,	// (0x0007e7f5) main_cam5_pane_t12

0xcfa9,	// (0x0007e80a) main_cam5_pane_t13_ParamLimits

0xcfa9,	// (0x0007e80a) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x000812b5) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x000812b5) main_cam5_pane_t

0x1d79,	// (0x000735da) popup_scut_keymap_window_ParamLimits

0x1d79,	// (0x000735da) popup_scut_keymap_window

0x8e8d,	// (0x0007a6ee) aid_size_cell_brow_shortcut

0x3128,	// (0x00074989) bg_popup_window_pane_cp010

0x8e99,	// (0x0007a6fa) grid_scut_pane

0x8ea3,	// (0x0007a704) cell_scut_pane_ParamLimits

0x8ea3,	// (0x0007a704) cell_scut_pane

0x8eb8,	// (0x0007a719) cell_scut_pane_g1

0xcfc6,	// (0x0007e827) cell_scut_pane_t1

0xcfd5,	// (0x0007e836) cell_scut_pane_t2

0x8ec1,	// (0x0007a722) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x000812d0) cell_scut_pane_t

0x6fe5,	// (0x00078846) main_mup3_pane_g8_ParamLimits

0x6fe5,	// (0x00078846) main_mup3_pane_g8

0x8336,	// (0x00079b97) area_vitu2_query_pane_ParamLimits

0x8336,	// (0x00079b97) area_vitu2_query_pane

0x11e3,	// (0x00072a44) input_focus_pane_cp08

0xcfe4,	// (0x0007e845) area_vitu2_query_pane_g1

0x12e0,	// (0x00072b41) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x000812d7) area_vitu2_query_pane_g

0x8ecf,	// (0x0007a730) area_vitu2_query_pane_t1_ParamLimits

0x8ecf,	// (0x0007a730) area_vitu2_query_pane_t1

0x8ee1,	// (0x0007a742) area_vitu2_query_pane_t2_ParamLimits

0x8ee1,	// (0x0007a742) area_vitu2_query_pane_t2

0x12ef,	// (0x00072b50) area_vitu2_query_pane_t3_ParamLimits

0x12ef,	// (0x00072b50) area_vitu2_query_pane_t3

0xcff0,	// (0x0007e851) area_vitu2_query_pane_t4_ParamLimits

0xcff0,	// (0x0007e851) area_vitu2_query_pane_t4

0xd018,	// (0x0007e879) area_vitu2_query_pane_t5_ParamLimits

0xd018,	// (0x0007e879) area_vitu2_query_pane_t5

0xd040,	// (0x0007e8a1) area_vitu2_query_pane_t6_ParamLimits

0xd040,	// (0x0007e8a1) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x000812dc) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x000812dc) area_vitu2_query_pane_t

0x8ef3,	// (0x0007a754) bg_button_pane_cp018

0x8f00,	// (0x0007a761) bg_button_pane_cp021

0x1317,	// (0x00072b78) bg_button_pane_cp022

0x1326,	// (0x00072b87) input_focus_pane_cp09

0x4e02,	// (0x00076663) aid_size_touch_mv_arrow_left

0x4e2b,	// (0x0007668c) aid_size_touch_mv_arrow_right

0x888b,	// (0x0007a0ec) main_cset_slider_pane_g16_ParamLimits

0x888b,	// (0x0007a0ec) main_cset_slider_pane_g16

0x8897,	// (0x0007a0f8) main_cset_slider_pane_g17_ParamLimits

0x8897,	// (0x0007a0f8) main_cset_slider_pane_g17

0x8e7a,	// (0x0007a6db) cell_cam4_burst_pane_g1_ParamLimits

0x1bb2,	// (0x00073413) compa_mode_pane

0x8a7c,	// (0x0007a2dd) popup_vtel_slider_window_g3_ParamLimits

0x8a7c,	// (0x0007a2dd) popup_vtel_slider_window_g3

0x8a93,	// (0x0007a2f4) popup_vtel_slider_window_g4_ParamLimits

0x8a93,	// (0x0007a2f4) popup_vtel_slider_window_g4

0x8aaa,	// (0x0007a30b) popup_vtel_slider_window_t1_ParamLimits

0x8aaa,	// (0x0007a30b) popup_vtel_slider_window_t1

0x1bb2,	// (0x00073413) main_cl_pane

0xbf17,	// (0x0007d778) popup_imed_adjust2_window_ParamLimits

0xbef9,	// (0x0007d75a) bg_tb_trans_pane_cp05_ParamLimits

0xc884,	// (0x0007e0e5) popup_imed_adjust2_window_g1_ParamLimits

0xc893,	// (0x0007e0f4) popup_imed_adjust2_window_g2_ParamLimits

0xc893,	// (0x0007e0f4) popup_imed_adjust2_window_g2

0xc89f,	// (0x0007e100) popup_imed_adjust2_window_g3_ParamLimits

0xc89f,	// (0x0007e100) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x00081053) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x00081053) popup_imed_adjust2_window_g

0xc8ab,	// (0x0007e10c) popup_imed_adjust2_window_t1_ParamLimits

0xc8c3,	// (0x0007e124) slider_imed_adjust_pane_ParamLimits

0xc8d7,	// (0x0007e138) slider_imed_adjust_pane_g1_ParamLimits

0xc8e7,	// (0x0007e148) slider_imed_adjust_pane_g2_ParamLimits

0xc8f7,	// (0x0007e158) slider_imed_adjust_pane_g3_ParamLimits

0xc908,	// (0x0007e169) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0008105a) slider_imed_adjust_pane_g_ParamLimits

0x80e7,	// (0x00079948) aid_touch_area_cam4_ParamLimits

0x80e7,	// (0x00079948) aid_touch_area_cam4

0xec8d,	// (0x000804ee) battery_pane_cp01

0x81a7,	// (0x00079a08) main_camera4_pane_g6_ParamLimits

0x81a7,	// (0x00079a08) main_camera4_pane_g6

0x81cf,	// (0x00079a30) main_camera4_pane_t2_ParamLimits

0x81cf,	// (0x00079a30) main_camera4_pane_t2

0x0001,

0xf8f7,	// (0x00081158) main_camera4_pane_t_ParamLimits

0xf8f7,	// (0x00081158) main_camera4_pane_t

0x81fe,	// (0x00079a5f) aid_touch_area_vid4_ParamLimits

0x81fe,	// (0x00079a5f) aid_touch_area_vid4

0x824e,	// (0x00079aaf) main_video4_pane_g5_ParamLimits

0x824e,	// (0x00079aaf) main_video4_pane_g5

0x826f,	// (0x00079ad0) vid4_progress_pane_ParamLimits

0x826f,	// (0x00079ad0) vid4_progress_pane

0xcccb,	// (0x0007e52c) main_cset_slider_pane_g18_ParamLimits

0xcccb,	// (0x0007e52c) main_cset_slider_pane_g18

0xceb4,	// (0x0007e715) cell_cam4_burst_pane_g2_ParamLimits

0xceb4,	// (0x0007e715) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x000812b0) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x000812b0) cell_cam4_burst_pane_g

0x27ff,	// (0x00074060) bg_cl_pane_ParamLimits

0x27ff,	// (0x00074060) bg_cl_pane

0x8f0c,	// (0x0007a76d) cl_header_pane_ParamLimits

0x8f0c,	// (0x0007a76d) cl_header_pane

0x8f20,	// (0x0007a781) cl_listscroll_pane_ParamLimits

0x8f20,	// (0x0007a781) cl_listscroll_pane

0xd08c,	// (0x0007e8ed) bg_cl_pane_g1

0xd094,	// (0x0007e8f5) bg_cl_pane_g2

0xd09c,	// (0x0007e8fd) bg_cl_pane_g3

0xd0a4,	// (0x0007e905) bg_cl_pane_g4

0xd0ac,	// (0x0007e90d) bg_cl_pane_g5

0xd0b4,	// (0x0007e915) bg_cl_pane_g6

0xd0bc,	// (0x0007e91d) bg_cl_pane_g7

0xd0c4,	// (0x0007e925) bg_cl_pane_g8

0xd0cc,	// (0x0007e92d) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x000812eb) bg_cl_pane_g

0x8f30,	// (0x0007a791) aid_height_cl_leading_ParamLimits

0x8f30,	// (0x0007a791) aid_height_cl_leading

0x8f3c,	// (0x0007a79d) aid_height_cl_text_ParamLimits

0x8f3c,	// (0x0007a79d) aid_height_cl_text

0xad52,	// (0x0007c5b3) bg_cl_header_pane_ParamLimits

0xad52,	// (0x0007c5b3) bg_cl_header_pane

0x8f5b,	// (0x0007a7bc) cl_header_pane_g1_ParamLimits

0x8f5b,	// (0x0007a7bc) cl_header_pane_g1

0x8f71,	// (0x0007a7d2) cl_header_pane_t1_ParamLimits

0x8f71,	// (0x0007a7d2) cl_header_pane_t1

0xd0d4,	// (0x0007e935) cl_list_pane

0xcc5c,	// (0x0007e4bd) hc_scroll_pane_cp01

0x3a30,	// (0x00075291) bg_cl_header_pane_g1

0xeff4,	// (0x00080855) bg_cl_header_pane_g2

0x3a50,	// (0x000752b1) bg_cl_header_pane_g3

0xf004,	// (0x00080865) bg_cl_header_pane_g4

0xeffc,	// (0x0008085d) bg_cl_header_pane_g5

0xcdc3,	// (0x0007e624) bg_cl_header_pane_g6

0xf01c,	// (0x0008087d) bg_cl_header_pane_g7

0xf024,	// (0x00080885) bg_cl_header_pane_g8

0xf014,	// (0x00080875) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x000812fe) bg_cl_header_pane_g

0x8f8a,	// (0x0007a7eb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8f8a,	// (0x0007a7eb) hc_cl_list_double_graphic_heading_pane

0x8f9a,	// (0x0007a7fb) hc_cl_list_single_graphic_pane_ParamLimits

0x8f9a,	// (0x0007a7fb) hc_cl_list_single_graphic_pane

0x8fad,	// (0x0007a80e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8fad,	// (0x0007a80e) hc_cl_list_single_graphic_pane_g1

0x8fb9,	// (0x0007a81a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8fb9,	// (0x0007a81a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x00081311) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x00081311) hc_cl_list_single_graphic_pane_g

0x8fcd,	// (0x0007a82e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8fcd,	// (0x0007a82e) hc_cl_list_single_graphic_pane_t1

0x8fad,	// (0x0007a80e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8fad,	// (0x0007a80e) hc_cl_list_double_graphic_heading_pane_g1

0x8fe2,	// (0x0007a843) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8fe2,	// (0x0007a843) hc_cl_list_double_graphic_heading_pane_g2

0x8ff6,	// (0x0007a857) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ff6,	// (0x0007a857) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x00081316) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x00081316) hc_cl_list_double_graphic_heading_pane_g

0x900a,	// (0x0007a86b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x900a,	// (0x0007a86b) hc_cl_list_double_graphic_heading_pane_t1

0x901f,	// (0x0007a880) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x901f,	// (0x0007a880) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0008131d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0008131d) hc_cl_list_double_graphic_heading_pane_t

0xede4,	// (0x00080645) vid4_progress_pane_g1

0xedf4,	// (0x00080655) vid4_progress_pane_g2

0x9034,	// (0x0007a895) vid4_progress_pane_g3

0xee04,	// (0x00080665) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x00081322) vid4_progress_pane_g

0x9046,	// (0x0007a8a7) vid4_progress_pane_t1

0xee22,	// (0x00080683) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0008132d) vid4_progress_pane_t

0x905c,	// (0x0007a8bd) wait_bar_pane_cp07

0xc189,	// (0x0007d9ea) blid_firmament_pane_ParamLimits

0xc1ca,	// (0x0007da2b) popup_blid_sat_info2_window_g1

0xc1ee,	// (0x0007da4f) popup_blid_sat_info2_window_t3

0xc1fc,	// (0x0007da5d) popup_blid_sat_info2_window_t4

0xc20a,	// (0x0007da6b) popup_blid_sat_info2_window_t5

0xc218,	// (0x0007da79) popup_blid_sat_info2_window_t6

0xc228,	// (0x0007da89) popup_blid_sat_info2_window_t7

0xc236,	// (0x0007da97) popup_blid_sat_info2_window_t8

0xc244,	// (0x0007daa5) popup_blid_sat_info2_window_t9

0xc252,	// (0x0007dab3) popup_blid_sat_info2_window_t10

0xc30e,	// (0x0007db6f) aid_firma_cardinal_ParamLimits

0xc322,	// (0x0007db83) blid_firmament_pane_t1_ParamLimits

0xc339,	// (0x0007db9a) blid_firmament_pane_t2_ParamLimits

0xc350,	// (0x0007dbb1) blid_firmament_pane_t3_ParamLimits

0xc367,	// (0x0007dbc8) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x00080f47) blid_firmament_pane_t_ParamLimits

0xc37e,	// (0x0007dbdf) blid_sat_info_pane_ParamLimits

0xad52,	// (0x0007c5b3) main_cam_set_pane_ParamLimits

0x7813,	// (0x00079074) aid_size_cell_colour_35_ParamLimits

0x7833,	// (0x00079094) aid_size_cell_colour_112_ParamLimits

0x7853,	// (0x000790b4) aid_size_cell_effect_ParamLimits

0xbef9,	// (0x0007d75a) bg_tb_trans_pane_cp02_ParamLimits

0x471a,	// (0x00075f7b) heading_imed_pane_ParamLimits

0x7872,	// (0x000790d3) listscroll_imed_pane_ParamLimits

0xb4df,	// (0x0007cd40) popup_call2_audio_first_window_g5_ParamLimits

0xb4df,	// (0x0007cd40) popup_call2_audio_first_window_g5

0x7da0,	// (0x00079601) aid_size_touch_image3_arrow_left_ParamLimits

0x7da0,	// (0x00079601) aid_size_touch_image3_arrow_left

0x7dc0,	// (0x00079621) aid_size_touch_image3_arrow_right_ParamLimits

0x7dc0,	// (0x00079621) aid_size_touch_image3_arrow_right

0xee37,	// (0x00080698) vid4_progress_pane_t3

0x7b47,	// (0x000793a8) main_hwr_training_symbol_option_pane_ParamLimits

0x7b47,	// (0x000793a8) main_hwr_training_symbol_option_pane

0xcb63,	// (0x0007e3c4) popup_hwr_training_preview_window_ParamLimits

0xcb63,	// (0x0007e3c4) popup_hwr_training_preview_window

0x7b63,	// (0x000793c4) hwr_training_navi_pane_g5_ParamLimits

0x7b63,	// (0x000793c4) hwr_training_navi_pane_g5

0xefe2,	// (0x00080843) popup_char_count_window

0xad52,	// (0x0007c5b3) bg_popup_sub_pane_cp20_ParamLimits

0x8bb6,	// (0x0007a417) list_vitu2_match_list_pane_ParamLimits

0x8bc5,	// (0x0007a426) vitu2_page_scroll_pane_ParamLimits

0x8bc5,	// (0x0007a426) vitu2_page_scroll_pane

0xd0f7,	// (0x0007e958) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd0f7,	// (0x0007e958) list_single_hwr_training_symbol_option_pane

0xd10a,	// (0x0007e96b) list_single_hwr_training_symbol_option_pane_g1

0xd112,	// (0x0007e973) list_single_hwr_training_symbol_option_pane_t1

0xd120,	// (0x0007e981) bg_button_pane_cp023

0xd129,	// (0x0007e98a) bg_button_pane_cp024

0x9088,	// (0x0007a8e9) vitu2_page_scroll_pane_g1

0x9090,	// (0x0007a8f1) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x00081334) vitu2_page_scroll_pane_g

0x9098,	// (0x0007a8f9) vitu2_page_scroll_pane_t1

0xc3b7,	// (0x0007dc18) popup_char_count_window_g1

0xd15c,	// (0x0007e9bd) popup_char_count_window_g2

0xd165,	// (0x0007e9c6) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x00081339) popup_char_count_window_g

0xd16e,	// (0x0007e9cf) popup_char_count_window_t1

0x1bb2,	// (0x00073413) main_vded2_pane

0xc872,	// (0x0007e0d3) aid_size_cell_imed_line

0xc87c,	// (0x0007e0dd) grid_imed_line_width_pane

0xed3b,	// (0x0008059c) vid4_indicators_pane_g4

0xd17c,	// (0x0007e9dd) cell_imed_line_width_pane_ParamLimits

0xd17c,	// (0x0007e9dd) cell_imed_line_width_pane

0xd18e,	// (0x0007e9ef) cell_imed_line_width_pane_g1

0xd197,	// (0x0007e9f8) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x00081340) cell_imed_line_width_pane_g

0x90a7,	// (0x0007a908) main_vded2_pane_g1_ParamLimits

0x90a7,	// (0x0007a908) main_vded2_pane_g1

0x90bd,	// (0x0007a91e) main_vded2_pane_g2_ParamLimits

0x90bd,	// (0x0007a91e) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x00081345) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x00081345) main_vded2_pane_g

0x90cd,	// (0x0007a92e) vded2_slider_pane_ParamLimits

0x90cd,	// (0x0007a92e) vded2_slider_pane

0x90dd,	// (0x0007a93e) aid_size_touch_vded2_end

0x90e5,	// (0x0007a946) aid_size_touch_vded2_playhead

0xd19f,	// (0x0007ea00) aid_size_touch_vded2_start

0xd1a7,	// (0x0007ea08) vded2_slider_bg_pane

0xd1b0,	// (0x0007ea11) vded2_slider_pane_g1

0xd1b9,	// (0x0007ea1a) vded2_slider_pane_g2

0x90ed,	// (0x0007a94e) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0008134a) vded2_slider_pane_g

0xd1c1,	// (0x0007ea22) vded2_slider_bg_pane_g1

0xd1ca,	// (0x0007ea2b) vded2_slider_bg_pane_g2

0xd1d3,	// (0x0007ea34) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x00081351) vded2_slider_bg_pane_g

0x55f7,	// (0x00076e58) aid_postcard_touch_down_pane_ParamLimits

0x55f7,	// (0x00076e58) aid_postcard_touch_down_pane

0x5609,	// (0x00076e6a) aid_postcard_touch_up_pane_ParamLimits

0x5609,	// (0x00076e6a) aid_postcard_touch_up_pane

0x1bb2,	// (0x00073413) main_blid2_pane

0xbf07,	// (0x0007d768) popup_blid2_search_window

0x1bb2,	// (0x00073413) blid2_gps_pane

0x1bb2,	// (0x00073413) blid2_navig_pane

0x1bb2,	// (0x00073413) blid2_search_pane

0x1bb2,	// (0x00073413) blid2_tripm_pane

0x90f6,	// (0x0007a957) blid2_search_pane_g1_ParamLimits

0x90f6,	// (0x0007a957) blid2_search_pane_g1

0x9109,	// (0x0007a96a) blid2_search_pane_t1_ParamLimits

0x9109,	// (0x0007a96a) blid2_search_pane_t1

0x911b,	// (0x0007a97c) aid_size_cell_blid2_gps_ParamLimits

0x911b,	// (0x0007a97c) aid_size_cell_blid2_gps

0x9133,	// (0x0007a994) blid2_gps_pane_g1_ParamLimits

0x9133,	// (0x0007a994) blid2_gps_pane_g1

0x9147,	// (0x0007a9a8) grid_blid2_satellite_pane_ParamLimits

0x9147,	// (0x0007a9a8) grid_blid2_satellite_pane

0x915b,	// (0x0007a9bc) blid2_navig_pane_g1_ParamLimits

0x915b,	// (0x0007a9bc) blid2_navig_pane_g1

0x9167,	// (0x0007a9c8) blid2_navig_pane_t1_ParamLimits

0x9167,	// (0x0007a9c8) blid2_navig_pane_t1

0x9180,	// (0x0007a9e1) blid2_navig_pane_t2_ParamLimits

0x9180,	// (0x0007a9e1) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x00081358) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x00081358) blid2_navig_pane_t

0x9199,	// (0x0007a9fa) blid2_navig_ring_pane_ParamLimits

0x9199,	// (0x0007a9fa) blid2_navig_ring_pane

0x91ae,	// (0x0007aa0f) blid2_speed_pane_ParamLimits

0x91ae,	// (0x0007aa0f) blid2_speed_pane

0x91ba,	// (0x0007aa1b) blid2_tripm_pane_g1_ParamLimits

0x91ba,	// (0x0007aa1b) blid2_tripm_pane_g1

0x91cf,	// (0x0007aa30) blid2_tripm_pane_g2_ParamLimits

0x91cf,	// (0x0007aa30) blid2_tripm_pane_g2

0x91e3,	// (0x0007aa44) blid2_tripm_pane_g3_ParamLimits

0x91e3,	// (0x0007aa44) blid2_tripm_pane_g3

0x91f7,	// (0x0007aa58) blid2_tripm_pane_g4_ParamLimits

0x91f7,	// (0x0007aa58) blid2_tripm_pane_g4

0x920b,	// (0x0007aa6c) blid2_tripm_pane_g5_ParamLimits

0x920b,	// (0x0007aa6c) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0008135d) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0008135d) blid2_tripm_pane_g

0x922d,	// (0x0007aa8e) blid2_tripm_pane_t1_ParamLimits

0x922d,	// (0x0007aa8e) blid2_tripm_pane_t1

0x9244,	// (0x0007aaa5) blid2_tripm_pane_t2_ParamLimits

0x9244,	// (0x0007aaa5) blid2_tripm_pane_t2

0x925b,	// (0x0007aabc) blid2_tripm_pane_t3_ParamLimits

0x925b,	// (0x0007aabc) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0008136a) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0008136a) blid2_tripm_pane_t

0x929e,	// (0x0007aaff) cell_blid2_satellite_pane_ParamLimits

0x929e,	// (0x0007aaff) cell_blid2_satellite_pane

0x92b6,	// (0x0007ab17) cell_blid2_satellite_pane_g1

0xd1dc,	// (0x0007ea3d) cell_blid2_satellite_pane_t1

0xc38e,	// (0x0007dbef) blid2_speed_pane_g1

0xd1ea,	// (0x0007ea4b) blid2_speed_pane_t1

0xd1f8,	// (0x0007ea59) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x00081373) blid2_speed_pane_t

0xc38e,	// (0x0007dbef) blid2_navig_ring_pane_g1

0x92bf,	// (0x0007ab20) blid2_navig_ring_pane_g2

0x92c7,	// (0x0007ab28) blid2_navig_ring_pane_g3

0x92cf,	// (0x0007ab30) blid2_navig_ring_pane_g4

0x92d7,	// (0x0007ab38) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x00081378) blid2_navig_ring_pane_g

0x1bb2,	// (0x00073413) bg_popup_window_pane_cp011

0xd206,	// (0x0007ea67) popup_blid2_search_window_g1

0xd20e,	// (0x0007ea6f) popup_blid2_search_window_t1

0xd21c,	// (0x0007ea7d) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x00081383) popup_blid2_search_window_t

0x3915,	// (0x00075176) main_browser_pane_g1

0x27ff,	// (0x00074060) main_browser_pane_ParamLimits

0xad52,	// (0x0007c5b3) bg_button_pane_cp011_ParamLimits

0x84ea,	// (0x00079d4b) cell_vitu2_function_pane_g1_ParamLimits

0xbef9,	// (0x0007d75a) bg_popup_sub_pane_cp22_ParamLimits

0x11e3,	// (0x00072a44) input_focus_pane_cp08_ParamLimits

0x8d30,	// (0x0007a591) popup_vitu2_query_button_pane_ParamLimits

0x8d30,	// (0x0007a591) popup_vitu2_query_button_pane

0x11fa,	// (0x00072a5b) popup_vitu2_query_input_button_pane

0xcdfe,	// (0x0007e65f) popup_vitu2_query_window_g1_ParamLimits

0x1202,	// (0x00072a63) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x00081284) popup_vitu2_query_window_g_ParamLimits

0x1bb2,	// (0x00073413) bg_button_pane_cp026

0x92df,	// (0x0007ab40) popup_vitu2_query_input_button_pane_g1

0x1bb2,	// (0x00073413) bg_button_pane_cp025

0xd22a,	// (0x0007ea8b) popup_vitu2_query_button_pane_t1

0x6ce3,	// (0x00078544) main_mp3_pane_t6

0x6cf1,	// (0x00078552) popup_slider_window_cp01

0xeca7,	// (0x00080508) cam4_battery_pane

0xecfa,	// (0x0008055b) cam4_battery_pane_cp02

0xeddc,	// (0x0008063d) cam4_battery_pane_cp01

0xeddc,	// (0x0008063d) cam4_battery_pane_cp03

0xc38e,	// (0x0007dbef) cam4_battery_pane_g1

0xd238,	// (0x0007ea99) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x00081388) cam4_battery_pane_g

0xc260,	// (0x0007dac1) popup_blid_sat_info2_window_t11

0x4e02,	// (0x00076663) aid_size_touch_mv_arrow_left_ParamLimits

0x4e2b,	// (0x0007668c) aid_size_touch_mv_arrow_right_ParamLimits

0x4e89,	// (0x000766ea) navi_pane_g1_ParamLimits

0x4e95,	// (0x000766f6) navi_pane_g2_ParamLimits

0x4ec3,	// (0x00076724) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00080c46) navi_pane_g_ParamLimits

0x4f7f,	// (0x000767e0) navi_pane_mv_t1_ParamLimits

0x787e,	// (0x000790df) grid_imed_effect_pane_ParamLimits

0x3563,	// (0x00074dc4) aid_placing_vt_slider_lsc

0x3573,	// (0x00074dd4) aid_placing_vt_slider_prt

0xad52,	// (0x0007c5b3) bg_tb_trans_pane_cp01_ParamLimits

0xc4dd,	// (0x0007dd3e) popup_image_details_window_g1_ParamLimits

0xc4f0,	// (0x0007dd51) popup_image_details_window_g2_ParamLimits

0xc505,	// (0x0007dd66) popup_image_details_window_g3_ParamLimits

0xc505,	// (0x0007dd66) popup_image_details_window_g3

0xf72b,	// (0x00080f8c) popup_image_details_window_g_ParamLimits

0xc519,	// (0x0007dd7a) popup_image_details_window_t1_ParamLimits

0xc52b,	// (0x0007dd8c) popup_image_details_window_t2_ParamLimits

0xc544,	// (0x0007dda5) popup_image_details_window_t3_ParamLimits

0xc558,	// (0x0007ddb9) popup_image_details_window_t4_ParamLimits

0xc573,	// (0x0007ddd4) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x00080f93) popup_image_details_window_t_ParamLimits

0x8f48,	// (0x0007a7a9) cl_header_name_pane_ParamLimits

0x8f48,	// (0x0007a7a9) cl_header_name_pane

0x92e7,	// (0x0007ab48) cl_header_name_pane_t1_ParamLimits

0x92e7,	// (0x0007ab48) cl_header_name_pane_t1

0x9308,	// (0x0007ab69) cl_header_name_pane_t2_ParamLimits

0x9308,	// (0x0007ab69) cl_header_name_pane_t2

0x934a,	// (0x0007abab) cl_header_name_pane_t3_ParamLimits

0x934a,	// (0x0007abab) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0008138d) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0008138d) cl_header_name_pane_t

0x4f50,	// (0x000767b1) navi_pane_mv_g2_ParamLimits

0xefaa,	// (0x0008080b) field_vitu2_entry_pane_g1_ParamLimits

0xefb6,	// (0x00080817) field_vitu2_entry_pane_g2_ParamLimits

0xefc2,	// (0x00080823) field_vitu2_entry_pane_g3_ParamLimits

0xefc2,	// (0x00080823) field_vitu2_entry_pane_g3

0x070a,	// (0x00071f6b) field_vitu2_entry_pane_g_ParamLimits

0xed6e,	// (0x000805cf) cell_vitu2_itu_pane_g1_ParamLimits

0x847e,	// (0x00079cdf) cell_vitu2_itu_pane_g2_ParamLimits

0x847e,	// (0x00079cdf) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0008118f) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0008118f) cell_vitu2_itu_pane_g

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp05_ParamLimits

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp05

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp03

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp04

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp10_ParamLimits

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp10

0x1317,	// (0x00072b78) bg_vkb2_func_pane_cp08

0x8ef3,	// (0x0007a754) bg_vkb2_func_pane_cp06

0x8f00,	// (0x0007a761) bg_vkb2_func_pane_cp07

0xd132,	// (0x0007e993) bg_vkb2_func_pane_cp11_ParamLimits

0xd132,	// (0x0007e993) bg_vkb2_func_pane_cp11

0xd147,	// (0x0007e9a8) bg_vkb2_func_pane_cp12_ParamLimits

0xd147,	// (0x0007e9a8) bg_vkb2_func_pane_cp12

0x1bb2,	// (0x00073413) bg_vkb2_func_pane_cp09

0xeff4,	// (0x00080855) bg_vkb2_func_pane_g1

0x3a50,	// (0x000752b1) bg_vkb2_func_pane_g2

0xeffc,	// (0x0008085d) bg_vkb2_func_pane_g3

0xf004,	// (0x00080865) bg_vkb2_func_pane_g4

0xcdc3,	// (0x0007e624) bg_vkb2_func_pane_g5

0xf01c,	// (0x0008087d) bg_vkb2_func_pane_g6

0xf024,	// (0x00080885) bg_vkb2_func_pane_g7

0xf014,	// (0x00080875) bg_vkb2_func_pane_g8

0x3a30,	// (0x00075291) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x00081394) bg_vkb2_func_pane_g

0x921d,	// (0x0007aa7e) blid2_tripm_pane_g6_ParamLimits

0x921d,	// (0x0007aa7e) blid2_tripm_pane_g6

0xee96,	// (0x000806f7) mp4_progress_pane_g1

0x928c,	// (0x0007aaed) blid2_tripm_values_pane_ParamLimits

0x928c,	// (0x0007aaed) blid2_tripm_values_pane

0x937b,	// (0x0007abdc) blid2_tripm_values_pane_t1

0x9389,	// (0x0007abea) blid2_tripm_values_pane_t2

0x9397,	// (0x0007abf8) blid2_tripm_values_pane_t3

0x93a5,	// (0x0007ac06) blid2_tripm_values_pane_t4

0x93b3,	// (0x0007ac14) blid2_tripm_values_pane_t5

0x93c1,	// (0x0007ac22) blid2_tripm_values_pane_t6

0x93cf,	// (0x0007ac30) blid2_tripm_values_pane_t7

0x93dd,	// (0x0007ac3e) blid2_tripm_values_pane_t8

0x93eb,	// (0x0007ac4c) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x000813a7) blid2_tripm_values_pane_t

0x35a4,	// (0x00074e05) call_video_pane_t1_ParamLimits

0x35be,	// (0x00074e1f) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00080acf) call_video_pane_t_ParamLimits

0x0f8f,	// (0x000727f0) msg_header_pane_g1_ParamLimits

0x5569,	// (0x00076dca) msg_header_pane_g2_ParamLimits

0x5569,	// (0x00076dca) msg_header_pane_g2

0x0001,

0xf488,	// (0x00080ce9) msg_header_pane_g_ParamLimits

0xf488,	// (0x00080ce9) msg_header_pane_g

0x27ff,	// (0x00074060) main_clock2_pane_ParamLimits

0x7597,	// (0x00078df8) grid_clock2_toolbar_pane_ParamLimits

0x7597,	// (0x00078df8) grid_clock2_toolbar_pane

0x7597,	// (0x00078df8) listscroll_clock2_pane_ParamLimits

0x7597,	// (0x00078df8) listscroll_clock2_pane

0x767a,	// (0x00078edb) main_clock2_pane_t3_ParamLimits

0x767a,	// (0x00078edb) main_clock2_pane_t3

0x769c,	// (0x00078efd) main_clock2_pane_t4_ParamLimits

0x769c,	// (0x00078efd) main_clock2_pane_t4

0xd242,	// (0x0007eaa3) cell_clock2_toolbar_pane

0xd24a,	// (0x0007eaab) cell_clock2_toolbar_pane_cp01

0xd24a,	// (0x0007eaab) cell_clock2_toolbar_pane_cp02

0xd252,	// (0x0007eab3) cell_clock2_toolbar_pane_cp03

0xd25a,	// (0x0007eabb) list_clock2_pane

0x4bb7,	// (0x00076418) scroll_pane_cp10

0xd262,	// (0x0007eac3) list_single_clock2_pane_ParamLimits

0xd262,	// (0x0007eac3) list_single_clock2_pane

0x3128,	// (0x00074989) list_highlight_pane_cp08

0xd26f,	// (0x0007ead0) list_single_clock2_pane_t1

0xd27d,	// (0x0007eade) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x000813ba) list_single_clock2_pane_t

0x1bb2,	// (0x00073413) bg_button_pane_cp10

0xd28b,	// (0x0007eaec) cell_clock2_toolbar_pane_g1

0x557d,	// (0x00076dde) aid_main_viewer_pane_g1_ParamLimits

0x557d,	// (0x00076dde) aid_main_viewer_pane_g1

0x5589,	// (0x00076dea) aid_main_viewer_pane_g2_ParamLimits

0x5589,	// (0x00076dea) aid_main_viewer_pane_g2

0x5595,	// (0x00076df6) aid_main_viewer_pane_g3_ParamLimits

0x5595,	// (0x00076df6) aid_main_viewer_pane_g3

0x55a4,	// (0x00076e05) aid_main_viewer_pane_g4_ParamLimits

0x55a4,	// (0x00076e05) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x00080cfa) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x00080cfa) aid_main_viewer_pane_g

0x6044,	// (0x000778a5) main_calc_pane_ParamLimits

0x6058,	// (0x000778b9) main_dialer2_pane_ParamLimits

0x1bb2,	// (0x00073413) main_cam6_pane

0x1bb2,	// (0x00073413) main_vid6_pane

0x75a3,	// (0x00078e04) listscroll_gen_pane_cp06_ParamLimits

0x75a3,	// (0x00078e04) listscroll_gen_pane_cp06

0x76bd,	// (0x00078f1e) main_clock2_pane_t5_ParamLimits

0x76bd,	// (0x00078f1e) main_clock2_pane_t5

0x7714,	// (0x00078f75) aid_call2_pane_cp10_ParamLimits

0x7726,	// (0x00078f87) aid_call_pane_cp10_ParamLimits

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7738,	// (0x00078f99) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7738,	// (0x00078f99) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4d91,	// (0x000765f2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x00081048) popup_clock_analogue_window_cp10_g_ParamLimits

0x774a,	// (0x00078fab) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7d4d,	// (0x000795ae) cell_dialer2_keypad_pane_g2_ParamLimits

0x7d4d,	// (0x000795ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c8,	// (0x00081129) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c8,	// (0x00081129) cell_dialer2_keypad_pane_g

0x7d69,	// (0x000795ca) cell_dialer2_keypad_pane_t1

0x87c0,	// (0x0007a021) main_cset_text2_pane_ParamLimits

0x87c0,	// (0x0007a021) main_cset_text2_pane

0xcfe4,	// (0x0007e845) area_vitu2_query_pane_g1_ParamLimits

0x12e0,	// (0x00072b41) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x000812d7) area_vitu2_query_pane_g_ParamLimits

0xd068,	// (0x0007e8c9) area_vitu2_query_pane_t7_ParamLimits

0xd068,	// (0x0007e8c9) area_vitu2_query_pane_t7

0x8ef3,	// (0x0007a754) bg_button_pane_cp018_ParamLimits

0x8f00,	// (0x0007a761) bg_button_pane_cp021_ParamLimits

0x1317,	// (0x00072b78) bg_button_pane_cp022_ParamLimits

0x1317,	// (0x00072b78) bg_vkb2_func_pane_cp08_ParamLimits

0x8ef3,	// (0x0007a754) bg_vkb2_func_pane_cp06_ParamLimits

0x8f00,	// (0x0007a761) bg_vkb2_func_pane_cp07_ParamLimits

0x1326,	// (0x00072b87) input_focus_pane_cp09_ParamLimits

0xee55,	// (0x000806b6) cam6_autofocus_pane_ParamLimits

0xee55,	// (0x000806b6) cam6_autofocus_pane

0x93f9,	// (0x0007ac5a) cam6_image_uncrop_pane_ParamLimits

0x93f9,	// (0x0007ac5a) cam6_image_uncrop_pane

0x9406,	// (0x0007ac67) cam6_indi_pane_ParamLimits

0x9406,	// (0x0007ac67) cam6_indi_pane

0x941c,	// (0x0007ac7d) cam6_mode_pane_ParamLimits

0x941c,	// (0x0007ac7d) cam6_mode_pane

0x942e,	// (0x0007ac8f) cam6_timer_pane_ParamLimits

0x942e,	// (0x0007ac8f) cam6_timer_pane

0x943a,	// (0x0007ac9b) cam6_zoom_pane_ParamLimits

0x943a,	// (0x0007ac9b) cam6_zoom_pane

0x9446,	// (0x0007aca7) cam6_mode_pane_g1_ParamLimits

0x9446,	// (0x0007aca7) cam6_mode_pane_g1

0x9456,	// (0x0007acb7) cam6_mode_pane_g2_ParamLimits

0x9456,	// (0x0007acb7) cam6_mode_pane_g2

0x9466,	// (0x0007acc7) cam6_mode_pane_g3_ParamLimits

0x9466,	// (0x0007acc7) cam6_mode_pane_g3

0x9476,	// (0x0007acd7) cam6_mode_pane_g4_ParamLimits

0x9476,	// (0x0007acd7) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x000813bf) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x000813bf) cam6_mode_pane_g

0xd293,	// (0x0007eaf4) bg_tb_trans_pane_cp08_ParamLimits

0xd293,	// (0x0007eaf4) bg_tb_trans_pane_cp08

0xd2a1,	// (0x0007eb02) cam6_battery_pane_ParamLimits

0xd2a1,	// (0x0007eb02) cam6_battery_pane

0xd2b7,	// (0x0007eb18) cam6_indi_pane_g1_ParamLimits

0xd2b7,	// (0x0007eb18) cam6_indi_pane_g1

0xd2c9,	// (0x0007eb2a) cam6_indi_pane_g2_ParamLimits

0xd2c9,	// (0x0007eb2a) cam6_indi_pane_g2

0xd2db,	// (0x0007eb3c) cam6_indi_pane_g3_ParamLimits

0xd2db,	// (0x0007eb3c) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x000813c8) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x000813c8) cam6_indi_pane_g

0xd2ed,	// (0x0007eb4e) cam6_indi_pane_t1_ParamLimits

0xd2ed,	// (0x0007eb4e) cam6_indi_pane_t1

0x82b1,	// (0x00079b12) cam6_autofocus_pane_g1

0x82b9,	// (0x00079b1a) cam6_autofocus_pane_g2

0x82c1,	// (0x00079b22) cam6_autofocus_pane_g3

0x82c9,	// (0x00079b2a) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x000813cf) cam6_autofocus_pane_g

0xd313,	// (0x0007eb74) cam6_timer_pane_g1

0xd31b,	// (0x0007eb7c) cam6_timer_pane_t1

0xd329,	// (0x0007eb8a) cam6_zoom_cont_pane

0xd331,	// (0x0007eb92) cam6_zoom_pane_g1

0xd339,	// (0x0007eb9a) cam6_zoom_pane_g2

0x9486,	// (0x0007ace7) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x000813d8) cam6_zoom_pane_g

0xc38e,	// (0x0007dbef) cam6_battery_pane_g1

0xc38e,	// (0x0007dbef) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x00080f50) cam6_battery_pane_g

0xd341,	// (0x0007eba2) cam6_zoom_cont_pane_g1

0xd34a,	// (0x0007ebab) cam6_zoom_cont_pane_g2

0xd353,	// (0x0007ebb4) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x000813df) cam6_zoom_cont_pane_g

0x94a3,	// (0x0007ad04) cam6_mode_pane_cp_ParamLimits

0x94a3,	// (0x0007ad04) cam6_mode_pane_cp

0x943a,	// (0x0007ac9b) cam6_zoom_pane_cp_ParamLimits

0x943a,	// (0x0007ac9b) cam6_zoom_pane_cp

0x94b5,	// (0x0007ad16) vid6_image_uncrop_cif_pane_ParamLimits

0x94b5,	// (0x0007ad16) vid6_image_uncrop_cif_pane

0x94c3,	// (0x0007ad24) vid6_image_uncrop_nhd_pane_ParamLimits

0x94c3,	// (0x0007ad24) vid6_image_uncrop_nhd_pane

0x93f9,	// (0x0007ac5a) vid6_image_uncrop_vga_pane_ParamLimits

0x93f9,	// (0x0007ac5a) vid6_image_uncrop_vga_pane

0x94d0,	// (0x0007ad31) vid6_image_uncrop_wvga_pane_ParamLimits

0x94d0,	// (0x0007ad31) vid6_image_uncrop_wvga_pane

0x94dd,	// (0x0007ad3e) vid6_indi_pane_ParamLimits

0x94dd,	// (0x0007ad3e) vid6_indi_pane

0xd293,	// (0x0007eaf4) bg_tb_trans_pane_cp09_ParamLimits

0xd293,	// (0x0007eaf4) bg_tb_trans_pane_cp09

0xd367,	// (0x0007ebc8) cam6_battery_pane_cp_ParamLimits

0xd367,	// (0x0007ebc8) cam6_battery_pane_cp

0xd373,	// (0x0007ebd4) vid6_indi_pane_g1_ParamLimits

0xd373,	// (0x0007ebd4) vid6_indi_pane_g1

0xd385,	// (0x0007ebe6) vid6_indi_pane_g2_ParamLimits

0xd385,	// (0x0007ebe6) vid6_indi_pane_g2

0xd397,	// (0x0007ebf8) vid6_indi_pane_g3_ParamLimits

0xd397,	// (0x0007ebf8) vid6_indi_pane_g3

0xd3ac,	// (0x0007ec0d) vid6_indi_pane_g4_ParamLimits

0xd3ac,	// (0x0007ec0d) vid6_indi_pane_g4

0xd3c1,	// (0x0007ec22) vid6_indi_pane_g5_ParamLimits

0xd3c1,	// (0x0007ec22) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x000813e6) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x000813e6) vid6_indi_pane_g

0xd3db,	// (0x0007ec3c) vid6_indi_pane_t1_ParamLimits

0xd3db,	// (0x0007ec3c) vid6_indi_pane_t1

0xd3f1,	// (0x0007ec52) vid6_indi_pane_t2_ParamLimits

0xd3f1,	// (0x0007ec52) vid6_indi_pane_t2

0xd419,	// (0x0007ec7a) vid6_indi_pane_t3_ParamLimits

0xd419,	// (0x0007ec7a) vid6_indi_pane_t3

0xd441,	// (0x0007eca2) vid6_indi_pane_t4_ParamLimits

0xd441,	// (0x0007eca2) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x000813f1) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x000813f1) vid6_indi_pane_t

0xd465,	// (0x0007ecc6) wait_bar_pane_cp08

0x94f4,	// (0x0007ad55) main_cset_text2_pane_t1_ParamLimits

0x94f4,	// (0x0007ad55) main_cset_text2_pane_t1

0x948e,	// (0x0007acef) listscroll_gen_pane_cp06_t1_ParamLimits

0x948e,	// (0x0007acef) listscroll_gen_pane_cp06_t1

0x1bb2,	// (0x00073413) main_cam6_set_pane

0xc5bd,	// (0x0007de1e) bg_tb_trans_pane_cp06_ParamLimits

0xecaf,	// (0x00080510) cam4_indicators_pane_g1_ParamLimits

0xecc0,	// (0x00080521) cam4_indicators_pane_g2_ParamLimits

0xf905,	// (0x00081166) cam4_indicators_pane_g_ParamLimits

0xecd8,	// (0x00080539) cam4_indicators_pane_t1_ParamLimits

0xad52,	// (0x0007c5b3) bg_tb_trans_pane_cp07_ParamLimits

0xed02,	// (0x00080563) vid4_indicators_pane_g1_ParamLimits

0xed16,	// (0x00080577) vid4_indicators_pane_g2_ParamLimits

0xed2a,	// (0x0008058b) vid4_indicators_pane_g3_ParamLimits

0xed3b,	// (0x0008059c) vid4_indicators_pane_g4_ParamLimits

0xf917,	// (0x00081178) vid4_indicators_pane_g_ParamLimits

0xed57,	// (0x000805b8) vid4_indicators_pane_t1_ParamLimits

0xede4,	// (0x00080645) vid4_progress_pane_g1_ParamLimits

0xedf4,	// (0x00080655) vid4_progress_pane_g2_ParamLimits

0x9034,	// (0x0007a895) vid4_progress_pane_g3_ParamLimits

0xee04,	// (0x00080665) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x00081322) vid4_progress_pane_g_ParamLimits

0x9046,	// (0x0007a8a7) vid4_progress_pane_t1_ParamLimits

0xee22,	// (0x00080683) vid4_progress_pane_t2_ParamLimits

0xee37,	// (0x00080698) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0008132d) vid4_progress_pane_t_ParamLimits

0x905c,	// (0x0007a8bd) wait_bar_pane_cp07_ParamLimits

0x950f,	// (0x0007ad70) main_cam6_set_pane_g2_ParamLimits

0x950f,	// (0x0007ad70) main_cam6_set_pane_g2

0x9531,	// (0x0007ad92) main_cset6_listscroll_pane_ParamLimits

0x9531,	// (0x0007ad92) main_cset6_listscroll_pane

0x954b,	// (0x0007adac) main_cset6_slider_pane_ParamLimits

0x954b,	// (0x0007adac) main_cset6_slider_pane

0x9561,	// (0x0007adc2) main_cset6_text2_pane_ParamLimits

0x9561,	// (0x0007adc2) main_cset6_text2_pane

0xd474,	// (0x0007ecd5) main_cset6_text_pane

0xd47c,	// (0x0007ecdd) main_cset_list_pane_copy1_ParamLimits

0xd47c,	// (0x0007ecdd) main_cset_list_pane_copy1

0xd48c,	// (0x0007eced) scroll_pane_cp028_copy1

0x956f,	// (0x0007add0) cset_list_set_pane_copy1

0x9580,	// (0x0007ade1) aid_position_infowindow_above_copy1

0x9588,	// (0x0007ade9) aid_position_infowindow_below_copy1

0x9590,	// (0x0007adf1) cset_list_set_pane_g1_copy1

0x1349,	// (0x00072baa) cset_list_set_pane_g3_copy1_ParamLimits

0x1349,	// (0x00072baa) cset_list_set_pane_g3_copy1

0x1358,	// (0x00072bb9) cset_list_set_pane_t1_copy1_ParamLimits

0x1358,	// (0x00072bb9) cset_list_set_pane_t1_copy1

0xad52,	// (0x0007c5b3) list_highlight_pane_cp021_copy1_ParamLimits

0xad52,	// (0x0007c5b3) list_highlight_pane_cp021_copy1

0xd495,	// (0x0007ecf6) cset6_slider_pane_ParamLimits

0xd495,	// (0x0007ecf6) cset6_slider_pane

0xd4c1,	// (0x0007ed22) main_cset6_slider_pane_g1_ParamLimits

0xd4c1,	// (0x0007ed22) main_cset6_slider_pane_g1

0x9598,	// (0x0007adf9) main_cset6_slider_pane_g2_ParamLimits

0x9598,	// (0x0007adf9) main_cset6_slider_pane_g2

0xcc9b,	// (0x0007e4fc) main_cset6_slider_pane_g3_ParamLimits

0xcc9b,	// (0x0007e4fc) main_cset6_slider_pane_g3

0x95c0,	// (0x0007ae21) main_cset6_slider_pane_g4_ParamLimits

0x95c0,	// (0x0007ae21) main_cset6_slider_pane_g4

0x888b,	// (0x0007a0ec) main_cset6_slider_pane_g5_ParamLimits

0x888b,	// (0x0007a0ec) main_cset6_slider_pane_g5

0xcc9b,	// (0x0007e4fc) main_cset6_slider_pane_g7_ParamLimits

0xcc9b,	// (0x0007e4fc) main_cset6_slider_pane_g7

0xcca7,	// (0x0007e508) main_cset6_slider_pane_g8_ParamLimits

0xcca7,	// (0x0007e508) main_cset6_slider_pane_g8

0x8843,	// (0x0007a0a4) main_cset6_slider_pane_g9_ParamLimits

0x8843,	// (0x0007a0a4) main_cset6_slider_pane_g9

0x884f,	// (0x0007a0b0) main_cset6_slider_pane_g10_ParamLimits

0x884f,	// (0x0007a0b0) main_cset6_slider_pane_g10

0xccb3,	// (0x0007e514) main_cset6_slider_pane_g11_ParamLimits

0xccb3,	// (0x0007e514) main_cset6_slider_pane_g11

0xccbf,	// (0x0007e520) main_cset6_slider_pane_g12_ParamLimits

0xccbf,	// (0x0007e520) main_cset6_slider_pane_g12

0x885b,	// (0x0007a0bc) main_cset6_slider_pane_g13_ParamLimits

0x885b,	// (0x0007a0bc) main_cset6_slider_pane_g13

0x8867,	// (0x0007a0c8) main_cset6_slider_pane_g14_ParamLimits

0x8867,	// (0x0007a0c8) main_cset6_slider_pane_g14

0x95cc,	// (0x0007ae2d) main_cset6_slider_pane_g15_ParamLimits

0x95cc,	// (0x0007ae2d) main_cset6_slider_pane_g15

0x888b,	// (0x0007a0ec) main_cset6_slider_pane_g16_ParamLimits

0x888b,	// (0x0007a0ec) main_cset6_slider_pane_g16

0x8897,	// (0x0007a0f8) main_cset6_slider_pane_g17_ParamLimits

0x8897,	// (0x0007a0f8) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x000813fa) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x000813fa) main_cset6_slider_pane_g

0xd4e9,	// (0x0007ed4a) main_cset6_slider_pane_t1_ParamLimits

0xd4e9,	// (0x0007ed4a) main_cset6_slider_pane_t1

0x95f0,	// (0x0007ae51) main_cset6_slider_pane_t2_ParamLimits

0x95f0,	// (0x0007ae51) main_cset6_slider_pane_t2

0x961b,	// (0x0007ae7c) main_cset6_slider_pane_t3_ParamLimits

0x961b,	// (0x0007ae7c) main_cset6_slider_pane_t3

0x9646,	// (0x0007aea7) main_cset6_slider_pane_t4_ParamLimits

0x9646,	// (0x0007aea7) main_cset6_slider_pane_t4

0x9671,	// (0x0007aed2) main_cset6_slider_pane_t5_ParamLimits

0x9671,	// (0x0007aed2) main_cset6_slider_pane_t5

0xd52a,	// (0x0007ed8b) main_cset6_slider_pane_t7_ParamLimits

0xd52a,	// (0x0007ed8b) main_cset6_slider_pane_t7

0x969c,	// (0x0007aefd) main_cset6_slider_pane_t8_ParamLimits

0x969c,	// (0x0007aefd) main_cset6_slider_pane_t8

0x96c0,	// (0x0007af21) main_cset6_slider_pane_t9_ParamLimits

0x96c0,	// (0x0007af21) main_cset6_slider_pane_t9

0x96e4,	// (0x0007af45) main_cset6_slider_pane_t10_ParamLimits

0x96e4,	// (0x0007af45) main_cset6_slider_pane_t10

0x9708,	// (0x0007af69) main_cset6_slider_pane_t11_ParamLimits

0x9708,	// (0x0007af69) main_cset6_slider_pane_t11

0xd560,	// (0x0007edc1) main_cset6_slider_pane_t14_ParamLimits

0xd560,	// (0x0007edc1) main_cset6_slider_pane_t14

0xd599,	// (0x0007edfa) main_cset6_slider_pane_t15_ParamLimits

0xd599,	// (0x0007edfa) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0008141f) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0008141f) main_cset6_slider_pane_t

0xcd77,	// (0x0007e5d8) cset_slider_pane_g1_copy1

0xcd80,	// (0x0007e5e1) cset_slider_pane_g2_copy1

0xcd89,	// (0x0007e5ea) cset_slider_pane_g3_copy1

0x1bb2,	// (0x00073413) bg_popup_sub_pane_cp011_copy1

0xd5d2,	// (0x0007ee33) main_cset_text_pane_g1_copy1

0xce12,	// (0x0007e673) main_cset_text_pane_t1_copy1

0xce20,	// (0x0007e681) main_cset_text_pane_t2_copy1

0xce2e,	// (0x0007e68f) main_cset_text_pane_t3_copy1

0xce3c,	// (0x0007e69d) main_cset_text_pane_t4_copy1

0xd5da,	// (0x0007ee3b) main_cset_text_pane_t5_copy1

0xd5e8,	// (0x0007ee49) main_cset_text_pane_t6_copy1

0xd5f6,	// (0x0007ee57) main_cset_text_pane_t7_copy1

0x9747,	// (0x0007afa8) main_cset_text2_pane_t1_copy1

0xad52,	// (0x0007c5b3) main_ncimui_pane

0x6272,	// (0x00077ad3) popup_query_ncimui_window_ParamLimits

0x6272,	// (0x00077ad3) popup_query_ncimui_window

0xea08,	// (0x00080269) field_cale_ev2_pane_g4_ParamLimits

0xea08,	// (0x00080269) field_cale_ev2_pane_g4

0x7c46,	// (0x000794a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7c46,	// (0x000794a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x00081109) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x00081109) cell_video_dialer_keypad_pane_g

0x7c5e,	// (0x000794bf) cell_video_dialer_keypad_pane_t1

0x1bb2,	// (0x00073413) bg_popup_window_pane_cp012

0x4a1f,	// (0x00076280) heading_pane_cp06

0xd622,	// (0x0007ee83) ncim_query_content_pane

0x1bb2,	// (0x00073413) bg_popup_heading_pane_cp01

0xd62a,	// (0x0007ee8b) ncim_heading_pane_t1

0xd638,	// (0x0007ee99) ncim_indicator_popup_pane

0xd64a,	// (0x0007eeab) ncim_query_button_pane

0xd65e,	// (0x0007eebf) ncim_query_content_pane_t1

0xd670,	// (0x0007eed1) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x00081463) ncim_query_content_pane_t

0xd6aa,	// (0x0007ef0b) ncim_query_list_pane

0xd6bc,	// (0x0007ef1d) ncim_query_popup_pane

0xd638,	// (0x0007ee99) ncim_indicator_popup_pane_ParamLimits

0x9887,	// (0x0007b0e8) ncim_query_content_pane_g1_ParamLimits

0x9887,	// (0x0007b0e8) ncim_query_content_pane_g1

0xd65e,	// (0x0007eebf) ncim_query_content_pane_t1_ParamLimits

0xd670,	// (0x0007eed1) ncim_query_content_pane_t2_ParamLimits

0x9893,	// (0x0007b0f4) ncim_query_content_pane_t3_ParamLimits

0x9893,	// (0x0007b0f4) ncim_query_content_pane_t3

0x98bb,	// (0x0007b11c) ncim_query_content_pane_t4_ParamLimits

0x98bb,	// (0x0007b11c) ncim_query_content_pane_t4

0x98e3,	// (0x0007b144) ncim_query_content_pane_t5_ParamLimits

0x98e3,	// (0x0007b144) ncim_query_content_pane_t5

0xd682,	// (0x0007eee3) ncim_query_content_pane_t6_ParamLimits

0xd682,	// (0x0007eee3) ncim_query_content_pane_t6

0xfc02,	// (0x00081463) ncim_query_content_pane_t_ParamLimits

0xd6aa,	// (0x0007ef0b) ncim_query_list_pane_ParamLimits

0xd6bc,	// (0x0007ef1d) ncim_query_popup_pane_ParamLimits

0xd6d0,	// (0x0007ef31) wait_bar_pane_cp04

0x1bb2,	// (0x00073413) input_focus_pane_cp011

0xd6d8,	// (0x0007ef39) ncim_query_popup_pane_t1

0xd6e6,	// (0x0007ef47) ncim_list_query_list_pane_ParamLimits

0xd6e6,	// (0x0007ef47) ncim_list_query_list_pane

0x1bb2,	// (0x00073413) bg_button_pane_cp027

0xd6f9,	// (0x0007ef5a) ncim_query_button_pane_g1

0x1bb2,	// (0x00073413) list_highlight_pane_cp012

0xd703,	// (0x0007ef64) ncim_list_query_list_pane_g1

0xd70b,	// (0x0007ef6c) ncim_list_query_list_pane_t1

0xeccc,	// (0x0008052d) cam4_indicators_pane_g3_ParamLimits

0xeccc,	// (0x0008052d) cam4_indicators_pane_g3

0xed47,	// (0x000805a8) vid4_indicators_pane_g5_ParamLimits

0xed47,	// (0x000805a8) vid4_indicators_pane_g5

0xee13,	// (0x00080674) vid4_progress_pane_g5_ParamLimits

0xee13,	// (0x00080674) vid4_progress_pane_g5

0x9773,	// (0x0007afd4) main_ncimui_pane_g1

0x97dc,	// (0x0007b03d) ncimui_group_query_pane_ParamLimits

0x97dc,	// (0x0007b03d) ncimui_group_query_pane

0x9824,	// (0x0007b085) ncimui_list_pane_ParamLimits

0x9824,	// (0x0007b085) ncimui_list_pane

0x984a,	// (0x0007b0ab) ncimui_text_pane_ParamLimits

0x984a,	// (0x0007b0ab) ncimui_text_pane

0x990b,	// (0x0007b16c) ncimui_text_pane_t1_ParamLimits

0x990b,	// (0x0007b16c) ncimui_text_pane_t1

0xd719,	// (0x0007ef7a) ncimui_list_single_graphic_pane_ParamLimits

0xd719,	// (0x0007ef7a) ncimui_list_single_graphic_pane

0x9928,	// (0x0007b189) ncimui_query_pane_ParamLimits

0x9928,	// (0x0007b189) ncimui_query_pane

0x1bb2,	// (0x00073413) list_highlight_pane_cp013

0xd729,	// (0x0007ef8a) ncim_list_query_list_pane_t1_copy1

0xd737,	// (0x0007ef98) ncim_list_single_graphic_pane_g1

0x993b,	// (0x0007b19c) ncim_query_button_pane_cp01

0x9947,	// (0x0007b1a8) ncim_query_entry_pane_ParamLimits

0x9947,	// (0x0007b1a8) ncim_query_entry_pane

0x995a,	// (0x0007b1bb) ncimui_query_pane_g1

0x9966,	// (0x0007b1c7) ncimui_query_pane_t1_ParamLimits

0x9966,	// (0x0007b1c7) ncimui_query_pane_t1

0xad52,	// (0x0007c5b3) input_focus_pane_cp012

0xd73f,	// (0x0007efa0) ncim_query_entry_pane_t1

0x27ff,	// (0x00074060) main_im_pane_ParamLimits

0xad52,	// (0x0007c5b3) main_mobtv_pane_ParamLimits

0xad52,	// (0x0007c5b3) main_mobtv_pane

0x8843,	// (0x0007a0a4) main_cset6_slider_pane_g18_ParamLimits

0x8843,	// (0x0007a0a4) main_cset6_slider_pane_g18

0x95e4,	// (0x0007ae45) main_cset6_slider_pane_g19_ParamLimits

0x95e4,	// (0x0007ae45) main_cset6_slider_pane_g19

0xd751,	// (0x0007efb2) bg_main_mobtv_pane_ParamLimits

0xd751,	// (0x0007efb2) bg_main_mobtv_pane

0x997f,	// (0x0007b1e0) main_mobtv_info_pane

0x9988,	// (0x0007b1e9) main_mobtv_loading_pane_ParamLimits

0x9988,	// (0x0007b1e9) main_mobtv_loading_pane

0xd75f,	// (0x0007efc0) main_mobtv_pg_channel_list_pane

0xd769,	// (0x0007efca) main_mobtv_pg_hdr_pane

0x9995,	// (0x0007b1f6) main_mobtv_programe_curr_pane_ParamLimits

0x9995,	// (0x0007b1f6) main_mobtv_programe_curr_pane

0x99a2,	// (0x0007b203) main_mobtv_programe_next_pane_ParamLimits

0x99a2,	// (0x0007b203) main_mobtv_programe_next_pane

0xd772,	// (0x0007efd3) popup_mobtv_noti_window

0xc38e,	// (0x0007dbef) main_tv_pg_hdr_pane_g1

0xd77a,	// (0x0007efdb) main_tv_pg_hdr_pane_g2

0xd782,	// (0x0007efe3) main_tv_pg_hdr_pane_g3

0xd78a,	// (0x0007efeb) main_tv_pg_hdr_pane_g4

0xd792,	// (0x0007eff3) main_tv_pg_hdr_pane_g5

0xd79a,	// (0x0007effb) main_tv_pg_hdr_pane_g6

0xd7a2,	// (0x0007f003) main_tv_pg_hdr_pane_g7

0xd7aa,	// (0x0007f00b) main_tv_pg_hdr_pane_g8

0xd7b2,	// (0x0007f013) main_tv_pg_hdr_pane_g9

0xd7ba,	// (0x0007f01b) main_tv_pg_hdr_pane_g10

0xd7c4,	// (0x0007f025) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x00081470) main_tv_pg_hdr_pane_g

0xd7ce,	// (0x0007f02f) main_tv_pg_hdr_pane_t1

0xd7dc,	// (0x0007f03d) main_tv_pg_hdr_pane_t2

0xd7ea,	// (0x0007f04b) main_tv_pg_hdr_pane_t3

0xd7f8,	// (0x0007f059) main_tv_pg_hdr_pane_t4

0xd806,	// (0x0007f067) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x00081487) main_tv_pg_hdr_pane_t

0xd814,	// (0x0007f075) single_mobtv_pg_channel_pane_ParamLimits

0xd814,	// (0x0007f075) single_mobtv_pg_channel_pane

0xd826,	// (0x0007f087) single_mobtv_pg_channel_table_pane

0xd82f,	// (0x0007f090) single_mobtv_pg_channel_thumb_pane

0xd838,	// (0x0007f099) single_tv_pg_channel_pane_g1

0xd841,	// (0x0007f0a2) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x00081492) single_tv_pg_channel_pane_g

0xc5bd,	// (0x0007de1e) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5bd,	// (0x0007de1e) bg_single_mobtv_pg_channel_thumb_pane

0xd84a,	// (0x0007f0ab) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd84a,	// (0x0007f0ab) single_mobtv_pg_channel_thumb_pane_g1

0xd858,	// (0x0007f0b9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd858,	// (0x0007f0b9) single_mobtv_pg_channel_thumb_pane_g2

0xd864,	// (0x0007f0c5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd864,	// (0x0007f0c5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x00081497) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x00081497) single_mobtv_pg_channel_thumb_pane_g

0xd870,	// (0x0007f0d1) single_mobtv_pg_channel_thumb_pane_t1

0xd87e,	// (0x0007f0df) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0008149e) single_mobtv_pg_channel_thumb_pane_t

0xc38e,	// (0x0007dbef) bg_single_mobtv_pg_channel_table_pane_g1

0xc38e,	// (0x0007dbef) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x00080f50) bg_single_mobtv_pg_channel_table_pane_g

0xd88c,	// (0x0007f0ed) single_mobtv_pg_channel_table_pane_t1

0xd89a,	// (0x0007f0fb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x000814a3) single_mobtv_pg_channel_table_pane_t

0x99b7,	// (0x0007b218) main_mobtv_info_pane_g1_ParamLimits

0x99b7,	// (0x0007b218) main_mobtv_info_pane_g1

0x99d3,	// (0x0007b234) main_mobtv_info_pane_t1_ParamLimits

0x99d3,	// (0x0007b234) main_mobtv_info_pane_t1

0x9a39,	// (0x0007b29a) main_mobtv_info_pane_t2_ParamLimits

0x9a39,	// (0x0007b29a) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x000814ad) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x000814ad) main_mobtv_info_pane_t

0x9abc,	// (0x0007b31d) wait_bar_pane_cp05

0x9acc,	// (0x0007b32d) main_mobtv_loading_pane_g1_ParamLimits

0x9acc,	// (0x0007b32d) main_mobtv_loading_pane_g1

0x9add,	// (0x0007b33e) main_mobtv_loading_pane_g2_ParamLimits

0x9add,	// (0x0007b33e) main_mobtv_loading_pane_g2

0x9ae9,	// (0x0007b34a) main_mobtv_loading_pane_g3_ParamLimits

0x9ae9,	// (0x0007b34a) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x000814b4) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x000814b4) main_mobtv_loading_pane_g

0xd8a8,	// (0x0007f109) main_mobtv_loading_pane_t1_ParamLimits

0xd8a8,	// (0x0007f109) main_mobtv_loading_pane_t1

0xd8c0,	// (0x0007f121) main_mobtv_loading_pane_t2_ParamLimits

0xd8c0,	// (0x0007f121) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x000814bb) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x000814bb) main_mobtv_loading_pane_t

0x9afa,	// (0x0007b35b) wait_bar_pane_cp06_ParamLimits

0x9afa,	// (0x0007b35b) wait_bar_pane_cp06

0xd8e4,	// (0x0007f145) main_mobtv_programe_curr_pane_t1

0xd8f2,	// (0x0007f153) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x000814c0) main_mobtv_programe_curr_pane_t

0xd900,	// (0x0007f161) main_mobtv_programe_next_pane_t1

0xd90e,	// (0x0007f16f) main_mobtv_programe_next_pane_t2

0xd91c,	// (0x0007f17d) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x000814c5) main_mobtv_programe_next_pane_t

0x1bb2,	// (0x00073413) bg_popup_mobtv_noti_window_pane

0xd92a,	// (0x0007f18b) popup_mobtv_noti_window_g1

0xd932,	// (0x0007f193) popup_mobtv_noti_window_t1

0xd940,	// (0x0007f1a1) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x000814cc) popup_mobtv_noti_window_t

0xc38e,	// (0x0007dbef) bg_popup_mobtv_noti_window_pane_g1

0x1bb2,	// (0x00073413) sc_clock_pane

0x1bb2,	// (0x00073413) main_fs_bigclock_pane

0x9276,	// (0x0007aad7) blid2_tripm_pane_t4_ParamLimits

0x9276,	// (0x0007aad7) blid2_tripm_pane_t4

0x9b09,	// (0x0007b36a) sc_clock_pane_g1_ParamLimits

0x9b09,	// (0x0007b36a) sc_clock_pane_g1

0x9b1b,	// (0x0007b37c) sc_clock_pane_t1_ParamLimits

0x9b1b,	// (0x0007b37c) sc_clock_pane_t1

0x9b3d,	// (0x0007b39e) sc_clock_pane_t2_ParamLimits

0x9b3d,	// (0x0007b39e) sc_clock_pane_t2

0x9b53,	// (0x0007b3b4) sc_clock_pane_t3_ParamLimits

0x9b53,	// (0x0007b3b4) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x000814d1) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x000814d1) sc_clock_pane_t

0xa3b9,	// (0x0007bc1a) main_fs_bigclock_indicator_pane_ParamLimits

0xa3b9,	// (0x0007bc1a) main_fs_bigclock_indicator_pane

0x9be9,	// (0x0007b44a) main_fs_bigclock_pane_g1_ParamLimits

0x9be9,	// (0x0007b44a) main_fs_bigclock_pane_g1

0xa3c5,	// (0x0007bc26) main_fs_bigclock_pane_t1_ParamLimits

0xa3c5,	// (0x0007bc26) main_fs_bigclock_pane_t1

0xa3d7,	// (0x0007bc38) main_fs_bigclock_pane_t2_ParamLimits

0xa3d7,	// (0x0007bc38) main_fs_bigclock_pane_t2

0xa3e9,	// (0x0007bc4a) main_fs_bigclock_pane_t3_ParamLimits

0xa3e9,	// (0x0007bc4a) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x000816db) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000816db) main_fs_bigclock_pane_t

0xe549,	// (0x0007fdaa) main_fs_bigclock_indicator_pane_g1

0xd652,	// (0x0007eeb3) ncim_query_content_pane_g2_ParamLimits

0xd652,	// (0x0007eeb3) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0008145e) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0008145e) ncim_query_content_pane_g

0x9b6a,	// (0x0007b3cb) sc_clock_pane_t4_ParamLimits

0x9b6a,	// (0x0007b3cb) sc_clock_pane_t4

0xad52,	// (0x0007c5b3) main_radioblah_pane

0xef35,	// (0x00080796) cell_call4_button_pane_t1_copy1_ParamLimits

0xef35,	// (0x00080796) cell_call4_button_pane_t1_copy1

0x978b,	// (0x0007afec) main_ncimui_pane_t1_ParamLimits

0x978b,	// (0x0007afec) main_ncimui_pane_t1

0x97a5,	// (0x0007b006) main_ncimui_pane_t2_ParamLimits

0x97a5,	// (0x0007b006) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x00081457) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x00081457) main_ncimui_pane_t

0xda81,	// (0x0007f2e2) main_radioblah_anim_pane_ParamLimits

0xda81,	// (0x0007f2e2) main_radioblah_anim_pane

0xda92,	// (0x0007f2f3) main_radioblah_info_pane_ParamLimits

0xda92,	// (0x0007f2f3) main_radioblah_info_pane

0xdaa6,	// (0x0007f307) main_radioblah_pane_t1_ParamLimits

0xdaa6,	// (0x0007f307) main_radioblah_pane_t1

0xdac2,	// (0x0007f323) main_radioblah_pane_t2_ParamLimits

0xdac2,	// (0x0007f323) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x000814f2) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x000814f2) main_radioblah_pane_t

0x9c36,	// (0x0007b497) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9c36,	// (0x0007b497) main_radioblah_rocker_ctrl_pane

0xdb0a,	// (0x0007f36b) main_radioblah_info_pane_t1_ParamLimits

0xdb0a,	// (0x0007f36b) main_radioblah_info_pane_t1

0x9c8a,	// (0x0007b4eb) main_radioblah_info_pane_t2_ParamLimits

0x9c8a,	// (0x0007b4eb) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x000814fb) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x000814fb) main_radioblah_info_pane_t

0xc38e,	// (0x0007dbef) main_radioblah_rocker_ctrl_pane_g1

0x9d36,	// (0x0007b597) main_radioblah_rocker_ctrl_pane_g2

0x9d3e,	// (0x0007b59f) main_radioblah_rocker_ctrl_pane_g3

0x9d46,	// (0x0007b5a7) main_radioblah_rocker_ctrl_pane_g4

0x9d4e,	// (0x0007b5af) main_radioblah_rocker_ctrl_pane_g5

0x9d56,	// (0x0007b5b7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x00081504) main_radioblah_rocker_ctrl_pane_g

0x9747,	// (0x0007afa8) main_cset_text2_pane_t1_copy1_ParamLimits

0xec9f,	// (0x00080500) cam4_image_uncrop_qvga_pane

0xecf2,	// (0x00080553) vid4_image_uncrop_qcif_pane

0xee55,	// (0x000806b6) cam6_image_uncrop_qvga_pane_ParamLimits

0xee55,	// (0x000806b6) cam6_image_uncrop_qvga_pane

0xd35b,	// (0x0007ebbc) vid6_image_uncrop_qcif_pane_ParamLimits

0xd35b,	// (0x0007ebbc) vid6_image_uncrop_qcif_pane

0x1bb2,	// (0x00073413) bg_popup_preview_window_pane_cp03

0xd604,	// (0x0007ee65) list_cset_text2_pane

0xd60c,	// (0x0007ee6d) main_cset6_text2_pane_g1

0xd614,	// (0x0007ee75) main_cset6_text2_pane_t1

0xdb44,	// (0x0007f3a5) list_cset_text2_pane_t1_ParamLimits

0xdb44,	// (0x0007f3a5) list_cset_text2_pane_t1

0xad52,	// (0x0007c5b3) main_radioblah_pane_ParamLimits

0x9aaa,	// (0x0007b30b) main_mobtv_info_pane_t3_ParamLimits

0x9aaa,	// (0x0007b30b) main_mobtv_info_pane_t3

0x9c24,	// (0x0007b485) main_radioblah_pane_g1

0x9c5e,	// (0x0007b4bf) main_radioblah_info_pane_g1

0x9cdb,	// (0x0007b53c) main_radioblah_info_pane_t3_ParamLimits

0x9cdb,	// (0x0007b53c) main_radioblah_info_pane_t3

0x44da,	// (0x00075d3b) highlight_cell_cale_month_pane_ParamLimits

0x44da,	// (0x00075d3b) highlight_cell_cale_month_pane

0x1bb2,	// (0x00073413) main_phob_fisheye_pane

0xc6b4,	// (0x0007df15) scroll_pane_cp0031_ParamLimits

0xc6b4,	// (0x0007df15) scroll_pane_cp0031

0xd465,	// (0x0007ecc6) wait_bar_pane_cp08_ParamLimits

0x956f,	// (0x0007add0) cset_list_set_pane_copy1_ParamLimits

0xdb5b,	// (0x0007f3bc) highlight_cell_cale_month_pane_g1

0x9d5e,	// (0x0007b5bf) highlight_cell_cale_month_pane_t1

0xd0d4,	// (0x0007e935) list_gen_pane_cp01

0xcc5c,	// (0x0007e4bd) scroll_pane_01

0x9d6c,	// (0x0007b5cd) list_single_double_fisheye_pane

0x1422,	// (0x00072c83) list_double_fisheye_pane_g1_ParamLimits

0x1422,	// (0x00072c83) list_double_fisheye_pane_g1

0x142e,	// (0x00072c8f) list_double_fisheye_pane_g2_ParamLimits

0x142e,	// (0x00072c8f) list_double_fisheye_pane_g2

0x9d75,	// (0x0007b5d6) list_double_fisheye_pane_g3_ParamLimits

0x9d75,	// (0x0007b5d6) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x00081511) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x00081511) list_double_fisheye_pane_g

0x145f,	// (0x00072cc0) list_double_fisheye_pane_t1_ParamLimits

0x145f,	// (0x00072cc0) list_double_fisheye_pane_t1

0x147a,	// (0x00072cdb) list_double_fisheye_pane_t2_ParamLimits

0x147a,	// (0x00072cdb) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0008151c) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0008151c) list_double_fisheye_pane_t

0x1bb2,	// (0x00073413) main_call5_pane

0x9b93,	// (0x0007b3f4) sc_swipe_pane_ParamLimits

0x9b93,	// (0x0007b3f4) sc_swipe_pane

0x9d92,	// (0x0007b5f3) call5_image_pane_ParamLimits

0x9d92,	// (0x0007b5f3) call5_image_pane

0x9da7,	// (0x0007b608) call5_swipe_1_pane_ParamLimits

0x9da7,	// (0x0007b608) call5_swipe_1_pane

0x9db8,	// (0x0007b619) call5_swipe_2_pane_ParamLimits

0x9db8,	// (0x0007b619) call5_swipe_2_pane

0x9ddd,	// (0x0007b63e) popup_call5_audio_first_window_ParamLimits

0x9ddd,	// (0x0007b63e) popup_call5_audio_first_window

0xc5bd,	// (0x0007de1e) call5_swipe_1_pane_g1_ParamLimits

0xc5bd,	// (0x0007de1e) call5_swipe_1_pane_g1

0xdb63,	// (0x0007f3c4) call5_swipe_1_pane_g2_ParamLimits

0xdb63,	// (0x0007f3c4) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x00081521) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x00081521) call5_swipe_1_pane_g

0xdb6f,	// (0x0007f3d0) call5_swipe_1_pane_t1_ParamLimits

0xdb6f,	// (0x0007f3d0) call5_swipe_1_pane_t1

0xc5bd,	// (0x0007de1e) call5_swipe_2_pane_g1_ParamLimits

0xc5bd,	// (0x0007de1e) call5_swipe_2_pane_g1

0xdb84,	// (0x0007f3e5) call5_swipe_2_pane_g2_ParamLimits

0xdb84,	// (0x0007f3e5) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x00081526) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x00081526) call5_swipe_2_pane_g

0xdb90,	// (0x0007f3f1) call5_swipe_2_pane_t1_ParamLimits

0xdb90,	// (0x0007f3f1) call5_swipe_2_pane_t1

0xdba5,	// (0x0007f406) sc_swipe_pane_g1_ParamLimits

0xdba5,	// (0x0007f406) sc_swipe_pane_g1

0xdbb2,	// (0x0007f413) sc_swipe_pane_g2_ParamLimits

0xdbb2,	// (0x0007f413) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0008152b) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0008152b) sc_swipe_pane_g

0xdbbe,	// (0x0007f41f) sc_swipe_pane_t1_ParamLimits

0xdbbe,	// (0x0007f41f) sc_swipe_pane_t1

0x1bb2,	// (0x00073413) main_cmail_launcher_pane

0x9dec,	// (0x0007b64d) aid_size_cell_cmail_l_ParamLimits

0x9dec,	// (0x0007b64d) aid_size_cell_cmail_l

0x9e05,	// (0x0007b666) grid_cmail_l_pane_ParamLimits

0x9e05,	// (0x0007b666) grid_cmail_l_pane

0x9e19,	// (0x0007b67a) cell_cmail_l_pane_ParamLimits

0x9e19,	// (0x0007b67a) cell_cmail_l_pane

0x9e3b,	// (0x0007b69c) cell_cmail_l_pane_g1_ParamLimits

0x9e3b,	// (0x0007b69c) cell_cmail_l_pane_g1

0x9e4c,	// (0x0007b6ad) cell_cmail_l_pane_t1_ParamLimits

0x9e4c,	// (0x0007b6ad) cell_cmail_l_pane_t1

0xdbd3,	// (0x0007f434) cell_cmail_l_pane_t2_ParamLimits

0xdbd3,	// (0x0007f434) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x00081530) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x00081530) cell_cmail_l_pane_t

0xad52,	// (0x0007c5b3) grid_highlight_pane_cp018_ParamLimits

0xad52,	// (0x0007c5b3) grid_highlight_pane_cp018

0x1c68,	// (0x000734c9) main2_pane_ParamLimits

0x1c68,	// (0x000734c9) main2_pane

0x2a0b,	// (0x0007426c) popup_sp_fs_action_menu_bg_pane_g1

0x2a13,	// (0x00074274) popup_sp_fs_action_menu_bg_pane_g2

0x2a1b,	// (0x0007427c) popup_sp_fs_action_menu_bg_pane_g3

0x2a23,	// (0x00074284) popup_sp_fs_action_menu_bg_pane_g4

0x2a2b,	// (0x0007428c) popup_sp_fs_action_menu_bg_pane_g5

0x2a33,	// (0x00074294) popup_sp_fs_action_menu_bg_pane_g6

0x2a3b,	// (0x0007429c) popup_sp_fs_action_menu_bg_pane_g7

0x2a43,	// (0x000742a4) popup_sp_fs_action_menu_bg_pane_g8

0x2a4b,	// (0x000742ac) popup_sp_fs_action_menu_bg_pane_g9

0x2a53,	// (0x000742b4) popup_sp_fs_action_menu_bg_pane_g10

0x2a53,	// (0x000742b4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000809eb) popup_sp_fs_action_menu_bg_pane_g

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g3_g1

0x34b5,	// (0x00074d16) list_medium_line_x2_t3_g3_g2_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_t3_g3_g2

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00080a99) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00080a99) list_medium_line_x2_t3_g3_g

0x0d6e,	// (0x000725cf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d6e,	// (0x000725cf) list_medium_line_x2_t3_g3_t1

0x0d83,	// (0x000725e4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0d83,	// (0x000725e4) list_medium_line_x2_t3_g3_t2

0x0d95,	// (0x000725f6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00080aa0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00080aa0) list_medium_line_x2_t3_g3_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g2_g1

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00080aa7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00080aa7) list_medium_line_x2_t3_g2_g

0x0daa,	// (0x0007260b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0daa,	// (0x0007260b) list_medium_line_x2_t3_g2_t1

0x0dc0,	// (0x00072621) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0dc0,	// (0x00072621) list_medium_line_x2_t3_g2_t2

0x0dd2,	// (0x00072633) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0dd2,	// (0x00072633) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00080aac) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00080aac) list_medium_line_x2_t3_g2_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t4_g4_g1

0x34c1,	// (0x00074d22) list_medium_line_x2_t4_g4_g2_ParamLimits

0x34c1,	// (0x00074d22) list_medium_line_x2_t4_g4_g2

0x34b5,	// (0x00074d16) list_medium_line_x2_t4_g4_g3_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_t4_g4_g3

0x0def,	// (0x00072650) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0def,	// (0x00072650) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00080ab3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00080ab3) list_medium_line_x2_t4_g4_g

0x0dfb,	// (0x0007265c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0dfb,	// (0x0007265c) list_medium_line_x2_t4_g4_t1

0x0e15,	// (0x00072676) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e15,	// (0x00072676) list_medium_line_x2_t4_g4_t2

0x0e2b,	// (0x0007268c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e2b,	// (0x0007268c) list_medium_line_x2_t4_g4_t3

0x0e40,	// (0x000726a1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e40,	// (0x000726a1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00080abc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00080abc) list_medium_line_x2_t4_g4_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g4_g1

0x34c1,	// (0x00074d22) list_medium_line_x2_t2_g4_g2_ParamLimits

0x34c1,	// (0x00074d22) list_medium_line_x2_t2_g4_g2

0x34b5,	// (0x00074d16) list_medium_line_x2_t2_g4_g3_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_t2_g4_g3

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00080b23) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00080b23) list_medium_line_x2_t2_g4_g

0x0e52,	// (0x000726b3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0e52,	// (0x000726b3) list_medium_line_x2_t2_g4_t1

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00080b2c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00080b2c) list_medium_line_x2_t2_g4_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g3_g1

0x34b5,	// (0x00074d16) list_medium_line_x2_t2_g3_g2_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_t2_g3_g2

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00080a99) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00080a99) list_medium_line_x2_t2_g3_g

0x0e67,	// (0x000726c8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0e67,	// (0x000726c8) list_medium_line_x2_t2_g3_t1

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00080b31) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00080b31) list_medium_line_x2_t2_g3_t

0x4859,	// (0x000760ba) main_sp_fs_list_pane_ParamLimits

0x4859,	// (0x000760ba) main_sp_fs_list_pane

0xae3e,	// (0x0007c69f) sp_fs_scroll_pane_ParamLimits

0xae3e,	// (0x0007c69f) sp_fs_scroll_pane

0x0e7c,	// (0x000726dd) list_medium_line_x2_t3_t1

0x0e8c,	// (0x000726ed) list_medium_line_x2_t3_t2

0x0e9a,	// (0x000726fb) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00080b7c) list_medium_line_x2_t3_t

0x0ea8,	// (0x00072709) list_medium_line_x3_t4_t1

0x0eb8,	// (0x00072719) list_medium_line_x3_t4_t2

0x0ec6,	// (0x00072727) list_medium_line_x3_t4_t3

0x0e9a,	// (0x000726fb) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00080b83) list_medium_line_x3_t4_t

0x0ed4,	// (0x00072735) list_medium_line_x4_t5_t1

0x0ee4,	// (0x00072745) list_medium_line_x4_t5_t2

0x0ec6,	// (0x00072727) list_medium_line_x4_t5_t3

0x0ef2,	// (0x00072753) list_medium_line_x4_t5_t4

0x0e9a,	// (0x000726fb) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00080b8c) list_medium_line_x4_t5_t

0x0d56,	// (0x000725b7) list_medium_line_t4_g4_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_t4_g4_g1

0x0def,	// (0x00072650) list_medium_line_t4_g4_g2_ParamLimits

0x0def,	// (0x00072650) list_medium_line_t4_g4_g2

0x0f00,	// (0x00072761) list_medium_line_t4_g4_g3_ParamLimits

0x0f00,	// (0x00072761) list_medium_line_t4_g4_g3

0x0d62,	// (0x000725c3) list_medium_line_t4_g4_g4_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00080b97) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00080b97) list_medium_line_t4_g4_g

0x0f0c,	// (0x0007276d) list_medium_line_t4_g4_t1_ParamLimits

0x0f0c,	// (0x0007276d) list_medium_line_t4_g4_t1

0x0f21,	// (0x00072782) list_medium_line_t4_g4_t2_ParamLimits

0x0f21,	// (0x00072782) list_medium_line_t4_g4_t2

0x0f36,	// (0x00072797) list_medium_line_t4_g4_t3_ParamLimits

0x0f36,	// (0x00072797) list_medium_line_t4_g4_t3

0x0d95,	// (0x000725f6) list_medium_line_t4_g4_t4_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00080ba0) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00080ba0) list_medium_line_t4_g4_t

0x4b84,	// (0x000763e5) chi_dic_find_pane_g1

0x606c,	// (0x000778cd) main_tport_pane

0x117d,	// (0x000729de) list_medium_line_plain_t1

0x118b,	// (0x000729ec) list_medium_line_t2_g2_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t2_g2_g1

0x1197,	// (0x000729f8) list_medium_line_t2_g2_g2_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x00081268) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x00081268) list_medium_line_t2_g2_g

0x11a3,	// (0x00072a04) list_medium_line_t2_g2_t1_ParamLimits

0x11a3,	// (0x00072a04) list_medium_line_t2_g2_t1

0x11bd,	// (0x00072a1e) list_medium_line_t2_g2_t2_ParamLimits

0x11bd,	// (0x00072a1e) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0008126d) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0008126d) list_medium_line_t2_g2_t

0xd0dd,	// (0x0007e93e) aid_sp_fs_list_icon_a_sm

0xee4d,	// (0x000806ae) aid_sp_fs_list_icon_d

0xd0e5,	// (0x0007e946) aid_sp_fs_text_primary

0xd0ee,	// (0x0007e94f) aid_sp_fs_text_secondary

0x906d,	// (0x0007a8ce) list_medium_line

0x906d,	// (0x0007a8ce) list_medium_line_g2

0x906d,	// (0x0007a8ce) list_medium_line_g3

0x906d,	// (0x0007a8ce) list_medium_line_plain

0x906d,	// (0x0007a8ce) list_medium_line_plain_t2

0x906d,	// (0x0007a8ce) list_medium_line_plain_t3

0x906d,	// (0x0007a8ce) list_medium_line_right_icon

0x906d,	// (0x0007a8ce) list_medium_line_right_iconx2

0x906d,	// (0x0007a8ce) list_medium_line_t2

0x906d,	// (0x0007a8ce) list_medium_line_t2_g2

0x906d,	// (0x0007a8ce) list_medium_line_t2_g3

0x906d,	// (0x0007a8ce) list_medium_line_t2_right_icon

0x906d,	// (0x0007a8ce) list_medium_line_t2_right_iconx2

0x906d,	// (0x0007a8ce) list_medium_line_t3

0x906d,	// (0x0007a8ce) list_medium_line_t3_g2

0x906d,	// (0x0007a8ce) list_medium_line_t3_g3

0x906d,	// (0x0007a8ce) list_medium_line_t3_right_iconx2

0x9076,	// (0x0007a8d7) list_medium_line_t4_g4

0x906d,	// (0x0007a8ce) list_medium_line_x2

0x906d,	// (0x0007a8ce) list_medium_line_x2_t2_g2

0x906d,	// (0x0007a8ce) list_medium_line_x2_t2_g3

0x906d,	// (0x0007a8ce) list_medium_line_x2_t2_g4

0x906d,	// (0x0007a8ce) list_medium_line_x2_t3

0x906d,	// (0x0007a8ce) list_medium_line_x2_t3_g2

0x906d,	// (0x0007a8ce) list_medium_line_x2_t3_g3

0x906d,	// (0x0007a8ce) list_medium_line_x2_t3_g4

0x906d,	// (0x0007a8ce) list_medium_line_x2_t4_g2

0x906d,	// (0x0007a8ce) list_medium_line_x2_t4_g4

0x907f,	// (0x0007a8e0) list_medium_line_x3

0x907f,	// (0x0007a8e0) list_medium_line_x3_t4

0x907f,	// (0x0007a8e0) list_medium_line_x3_t4_g4

0x9076,	// (0x0007a8d7) list_medium_line_x4_t4

0x9076,	// (0x0007a8d7) list_medium_line_x4_t4_g7

0x9076,	// (0x0007a8d7) list_medium_line_x4_t5

0x1335,	// (0x00072b96) list_single_fs_dyc_pane_ParamLimits

0x1335,	// (0x00072b96) list_single_fs_dyc_pane

0x0d56,	// (0x000725b7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x4_t4_g7_g1

0x136d,	// (0x00072bce) list_medium_line_x4_t4_g7_g2_ParamLimits

0x136d,	// (0x00072bce) list_medium_line_x4_t4_g7_g2

0x972c,	// (0x0007af8d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x972c,	// (0x0007af8d) list_medium_line_x4_t4_g7_g3

0x973b,	// (0x0007af9c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x973b,	// (0x0007af9c) list_medium_line_x4_t4_g7_g4

0x1379,	// (0x00072bda) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1379,	// (0x00072bda) list_medium_line_x4_t4_g7_g5

0x1388,	// (0x00072be9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1388,	// (0x00072be9) list_medium_line_x4_t4_g7_g6

0x1397,	// (0x00072bf8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1397,	// (0x00072bf8) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x00081438) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x00081438) list_medium_line_x4_t4_g7_g

0x13a3,	// (0x00072c04) list_medium_line_x4_t4_g7_t1_ParamLimits

0x13a3,	// (0x00072c04) list_medium_line_x4_t4_g7_t1

0x13b8,	// (0x00072c19) list_medium_line_x4_t4_g7_t2_ParamLimits

0x13b8,	// (0x00072c19) list_medium_line_x4_t4_g7_t2

0x13cd,	// (0x00072c2e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x13cd,	// (0x00072c2e) list_medium_line_x4_t4_g7_t3

0x13e2,	// (0x00072c43) list_medium_line_x4_t4_g7_t4_ParamLimits

0x13e2,	// (0x00072c43) list_medium_line_x4_t4_g7_t4

0x13f4,	// (0x00072c55) list_medium_line_x4_t4_g7_t5_ParamLimits

0x13f4,	// (0x00072c55) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x00081447) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x00081447) list_medium_line_x4_t4_g7_t

0x1406,	// (0x00072c67) list_single_dyc_row_pane_ParamLimits

0x1406,	// (0x00072c67) list_single_dyc_row_pane

0x9d81,	// (0x0007b5e2) call5_gesture_pane_ParamLimits

0x9d81,	// (0x0007b5e2) call5_gesture_pane

0x9dc9,	// (0x0007b62a) call5_windows_pane_ParamLimits

0x9dc9,	// (0x0007b62a) call5_windows_pane

0x9e62,	// (0x0007b6c3) call5_swipe_1_pane_cp_ParamLimits

0x9e62,	// (0x0007b6c3) call5_swipe_1_pane_cp

0x9e6e,	// (0x0007b6cf) call5_swipe_2_pane_cp_ParamLimits

0x9e6e,	// (0x0007b6cf) call5_swipe_2_pane_cp

0x3128,	// (0x00074989) call5_image_pane_cp

0x9e7a,	// (0x0007b6db) popup_call5_audio_first_window_cp_ParamLimits

0x9e7a,	// (0x0007b6db) popup_call5_audio_first_window_cp

0xdba5,	// (0x0007f406) call5_swipe_1_pane_g1_cp_ParamLimits

0xdba5,	// (0x0007f406) call5_swipe_1_pane_g1_cp

0xdbe5,	// (0x0007f446) call5_swipe_1_pane_g2_cp

0xdbbe,	// (0x0007f41f) call5_swipe_1_pane_t1_cp_ParamLimits

0xdbbe,	// (0x0007f41f) call5_swipe_1_pane_t1_cp

0xdba5,	// (0x0007f406) call5_swipe_2_pane_g1_cp_ParamLimits

0xdba5,	// (0x0007f406) call5_swipe_2_pane_g1_cp

0xdbed,	// (0x0007f44e) call5_swipe_2_pane_g2_cp

0xdbf5,	// (0x0007f456) call5_swipe_2_pane_t1_cp_ParamLimits

0xdbf5,	// (0x0007f456) call5_swipe_2_pane_t1_cp

0xad52,	// (0x0007c5b3) main_sp_fs_email_pane

0xdc0a,	// (0x0007f46b) main_sp_fs_listscroll_pane_te

0x9e86,	// (0x0007b6e7) popup_sp_fs_action_menu_pane_ParamLimits

0x9e86,	// (0x0007b6e7) popup_sp_fs_action_menu_pane

0xc38e,	// (0x0007dbef) bg_sp_fs_ctrlbar_pane_g1

0xc665,	// (0x0007dec6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc677,	// (0x0007ded8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc66e,	// (0x0007decf) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc38e,	// (0x0007dbef) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x00081535) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc17b,	// (0x0007d9dc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc17b,	// (0x0007d9dc) bg_sp_fs_ctrlbar_ddmenu_pane

0xdc13,	// (0x0007f474) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdc13,	// (0x0007f474) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdc1f,	// (0x0007f480) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdc1f,	// (0x0007f480) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0008153e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0008153e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdc2b,	// (0x0007f48c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdc2b,	// (0x0007f48c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x149c,	// (0x00072cfd) list_medium_line_t2_right_icon_g1

0x14a4,	// (0x00072d05) list_medium_line_t2_right_icon_t1

0x14b4,	// (0x00072d15) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x00081543) list_medium_line_t2_right_icon_t

0xbef9,	// (0x0007d75a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbef9,	// (0x0007d75a) bg_sp_fs_ctrlbar_pane

0x9efe,	// (0x0007b75f) main_sp_fs_ctrlbar_button_pane_cp01

0x9f06,	// (0x0007b767) main_sp_fs_ctrlbar_ddmenu_pane

0xdc7d,	// (0x0007f4de) main_sp_fs_ctrlbar_pane_g1

0xdc89,	// (0x0007f4ea) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x00081548) main_sp_fs_ctrlbar_pane_g

0xdc95,	// (0x0007f4f6) main_sp_fs_ctrlbar_pane_t1

0x9f10,	// (0x0007b771) main_sp_fs_ctrlbar_pane

0x9f34,	// (0x0007b795) main_sp_fs_listscroll_pane_te_cp01

0x14c2,	// (0x00072d23) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x14c2,	// (0x00072d23) popup_sp_fs_action_menu_pane_cp01

0xad52,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad52,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp01

0xdcc5,	// (0x0007f526) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdcc5,	// (0x0007f526) sp_fs_action_menu_list_gene_pane_g1

0xdcd4,	// (0x0007f535) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdcd4,	// (0x0007f535) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x00081552) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x00081552) sp_fs_action_menu_list_gene_pane_g

0xdce1,	// (0x0007f542) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdce1,	// (0x0007f542) sp_fs_action_menu_list_gene_pane_t1

0xdcf9,	// (0x0007f55a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdcf9,	// (0x0007f55a) sp_fs_action_menu_list_gene_pane

0xdd18,	// (0x0007f579) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdd18,	// (0x0007f579) popup_sp_fs_action_menu_bg_pane

0xdd26,	// (0x0007f587) sp_fs_action_menu_list_pane_ParamLimits

0xdd26,	// (0x0007f587) sp_fs_action_menu_list_pane

0xdd46,	// (0x0007f5a7) sp_fs_scroll_pane_cp01_ParamLimits

0xdd46,	// (0x0007f5a7) sp_fs_scroll_pane_cp01

0x14ec,	// (0x00072d4d) list_medium_line_plain_t2_t1

0x14fc,	// (0x00072d5d) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x00081557) list_medium_line_plain_t2_t

0x150a,	// (0x00072d6b) list_medium_line_plain_t3_t1

0x151a,	// (0x00072d7b) list_medium_line_plain_t3_t2

0x1528,	// (0x00072d89) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0008155c) list_medium_line_plain_t3_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t2_g2_g1

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00080aa7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00080aa7) list_medium_line_x2_t2_g2_g

0x0f0c,	// (0x0007276d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0f0c,	// (0x0007276d) list_medium_line_x2_t2_g2_t1

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x00081563) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x00081563) list_medium_line_x2_t2_g2_t

0x0d56,	// (0x000725b7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t4_g2_g1

0x1536,	// (0x00072d97) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1536,	// (0x00072d97) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x00081568) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x00081568) list_medium_line_x2_t4_g2_g

0x1547,	// (0x00072da8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1547,	// (0x00072da8) list_medium_line_x2_t4_g2_t1

0x1561,	// (0x00072dc2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1561,	// (0x00072dc2) list_medium_line_x2_t4_g2_t2

0x1577,	// (0x00072dd8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1577,	// (0x00072dd8) list_medium_line_x2_t4_g2_t3

0x0d95,	// (0x000725f6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0008156d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0008156d) list_medium_line_x2_t4_g2_t

0x158c,	// (0x00072ded) list_medium_line_t3_right_iconx2_g1

0x149c,	// (0x00072cfd) list_medium_line_t3_right_iconx2_g2

0x1594,	// (0x00072df5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x00081576) list_medium_line_t3_right_iconx2_g

0x159c,	// (0x00072dfd) list_medium_line_t3_right_iconx2_t1

0x15ac,	// (0x00072e0d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0008157d) list_medium_line_t3_right_iconx2_t

0x0d56,	// (0x000725b7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x3_t4_g4_g1

0x34b5,	// (0x00074d16) list_medium_line_x3_t4_g4_g2_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x3_t4_g4_g2

0x0def,	// (0x00072650) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0def,	// (0x00072650) list_medium_line_x3_t4_g4_g3

0x9f54,	// (0x0007b7b5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9f54,	// (0x0007b7b5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x00081582) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x00081582) list_medium_line_x3_t4_g4_g

0x15ba,	// (0x00072e1b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x15ba,	// (0x00072e1b) list_medium_line_x3_t4_g4_t1

0x15d1,	// (0x00072e32) list_medium_line_x3_t4_g4_t2_ParamLimits

0x15d1,	// (0x00072e32) list_medium_line_x3_t4_g4_t2

0x0f21,	// (0x00072782) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0f21,	// (0x00072782) list_medium_line_x3_t4_g4_t3

0x15e6,	// (0x00072e47) list_medium_line_x3_t4_g4_t4_ParamLimits

0x15e6,	// (0x00072e47) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0008158b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0008158b) list_medium_line_x3_t4_g4_t

0x1603,	// (0x00072e64) list_single_dyc_row_text_pane_t1_ParamLimits

0x1603,	// (0x00072e64) list_single_dyc_row_text_pane_t1

0x163a,	// (0x00072e9b) list_single_dyc_row_text_pane_t2_ParamLimits

0x163a,	// (0x00072e9b) list_single_dyc_row_text_pane_t2

0xdd6c,	// (0x0007f5cd) list_single_dyc_row_text_pane_t3_ParamLimits

0xdd6c,	// (0x0007f5cd) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x00081594) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x00081594) list_single_dyc_row_text_pane_t

0xdd90,	// (0x0007f5f1) list_single_dyc_row_pane_g1_ParamLimits

0xdd90,	// (0x0007f5f1) list_single_dyc_row_pane_g1

0xdd9c,	// (0x0007f5fd) list_single_dyc_row_pane_g2_ParamLimits

0xdd9c,	// (0x0007f5fd) list_single_dyc_row_pane_g2

0xdda8,	// (0x0007f609) list_single_dyc_row_pane_g3_ParamLimits

0xdda8,	// (0x0007f609) list_single_dyc_row_pane_g3

0xddb4,	// (0x0007f615) list_single_dyc_row_pane_g4_ParamLimits

0xddb4,	// (0x0007f615) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x000815a1) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x000815a1) list_single_dyc_row_pane_g

0xddc0,	// (0x0007f621) list_single_dyc_row_text_pane_ParamLimits

0xddc0,	// (0x0007f621) list_single_dyc_row_text_pane

0x1bb2,	// (0x00073413) bg_sp_fs_scroll_pane

0xdddf,	// (0x0007f640) thumb_sp_fs_scroll_pane

0x118b,	// (0x000729ec) list_medium_line_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_g1

0x175d,	// (0x00072fbe) list_medium_line_t1_ParamLimits

0x175d,	// (0x00072fbe) list_medium_line_t1

0x0d56,	// (0x000725b7) list_medium_line_x2_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_g1

0x34b5,	// (0x00074d16) list_medium_line_x2_g2_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x000815aa) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x000815aa) list_medium_line_x2_g

0xdde8,	// (0x0007f649) list_medium_line_x2_t1_ParamLimits

0xdde8,	// (0x0007f649) list_medium_line_x2_t1

0x0d56,	// (0x000725b7) list_medium_line_x3_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x3_g1

0x34b5,	// (0x00074d16) list_medium_line_x3_g2_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x000815aa) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x000815aa) list_medium_line_x3_g

0xdde8,	// (0x0007f649) list_medium_line_x3_t1_ParamLimits

0xdde8,	// (0x0007f649) list_medium_line_x3_t1

0xddfe,	// (0x0007f65f) thumb_sp_fs_scroll_pane_g1

0xde07,	// (0x0007f668) thumb_sp_fs_scroll_pane_g2

0xde10,	// (0x0007f671) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x000815af) thumb_sp_fs_scroll_pane_g

0xddfe,	// (0x0007f65f) bg_sp_fs_scroll_pane_g1

0xde07,	// (0x0007f668) bg_sp_fs_scroll_pane_g2

0xde10,	// (0x0007f671) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x000815af) bg_sp_fs_scroll_pane_g

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d56,	// (0x000725b7) list_medium_line_x2_t3_g4_g1

0x34c1,	// (0x00074d22) list_medium_line_x2_t3_g4_g2_ParamLimits

0x34c1,	// (0x00074d22) list_medium_line_x2_t3_g4_g2

0x34b5,	// (0x00074d16) list_medium_line_x2_t3_g4_g3_ParamLimits

0x34b5,	// (0x00074d16) list_medium_line_x2_t3_g4_g3

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d62,	// (0x000725c3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00080b23) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00080b23) list_medium_line_x2_t3_g4_g

0x1772,	// (0x00072fd3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1772,	// (0x00072fd3) list_medium_line_x2_t3_g4_t1

0x1788,	// (0x00072fe9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1788,	// (0x00072fe9) list_medium_line_x2_t3_g4_t2

0x0d95,	// (0x000725f6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d95,	// (0x000725f6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x000815b6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x000815b6) list_medium_line_x2_t3_g4_t

0x118b,	// (0x000729ec) list_medium_line_g2_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_g2_g1

0x1197,	// (0x000729f8) list_medium_line_g2_g2_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x00081268) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x00081268) list_medium_line_g2_g

0x17a2,	// (0x00073003) list_medium_line_g2_t1_ParamLimits

0x17a2,	// (0x00073003) list_medium_line_g2_t1

0x118b,	// (0x000729ec) list_medium_line_t3_g2_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t3_g2_g1

0x1197,	// (0x000729f8) list_medium_line_t3_g2_g2_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x00081268) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x00081268) list_medium_line_t3_g2_g

0x17b7,	// (0x00073018) list_medium_line_t3_g2_t1_ParamLimits

0x17b7,	// (0x00073018) list_medium_line_t3_g2_t1

0x17d1,	// (0x00073032) list_medium_line_t3_g2_t2_ParamLimits

0x17d1,	// (0x00073032) list_medium_line_t3_g2_t2

0x17e7,	// (0x00073048) list_medium_line_t3_g2_t3_ParamLimits

0x17e7,	// (0x00073048) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x000815bd) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x000815bd) list_medium_line_t3_g2_t

0x149c,	// (0x00072cfd) list_medium_line_right_icon_g1

0x17fd,	// (0x0007305e) list_medium_line_right_icon_t1

0x118b,	// (0x000729ec) list_medium_line_t2_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t2_g1

0x180b,	// (0x0007306c) list_medium_line_t2_t1_ParamLimits

0x180b,	// (0x0007306c) list_medium_line_t2_t1

0x1825,	// (0x00073086) list_medium_line_t2_t2_ParamLimits

0x1825,	// (0x00073086) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x000815c4) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x000815c4) list_medium_line_t2_t

0x118b,	// (0x000729ec) list_medium_line_t3_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t3_g1

0x183a,	// (0x0007309b) list_medium_line_t3_t1_ParamLimits

0x183a,	// (0x0007309b) list_medium_line_t3_t1

0x1854,	// (0x000730b5) list_medium_line_t3_t2_ParamLimits

0x1854,	// (0x000730b5) list_medium_line_t3_t2

0x186a,	// (0x000730cb) list_medium_line_t3_t3_ParamLimits

0x186a,	// (0x000730cb) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x000815c9) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x000815c9) list_medium_line_t3_t

0x118b,	// (0x000729ec) list_medium_line_g3_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_g3_g1

0x187f,	// (0x000730e0) list_medium_line_g3_g2_ParamLimits

0x187f,	// (0x000730e0) list_medium_line_g3_g2

0x1197,	// (0x000729f8) list_medium_line_g3_g3_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x000815d0) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x000815d0) list_medium_line_g3_g

0x188b,	// (0x000730ec) list_medium_line_g3_t1_ParamLimits

0x188b,	// (0x000730ec) list_medium_line_g3_t1

0x118b,	// (0x000729ec) list_medium_line_t2_g3_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t2_g3_g1

0x187f,	// (0x000730e0) list_medium_line_t2_g3_g2_ParamLimits

0x187f,	// (0x000730e0) list_medium_line_t2_g3_g2

0x1197,	// (0x000729f8) list_medium_line_t2_g3_g3_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x000815d0) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x000815d0) list_medium_line_t2_g3_g

0x18a0,	// (0x00073101) list_medium_line_t2_g3_t1_ParamLimits

0x18a0,	// (0x00073101) list_medium_line_t2_g3_t1

0x18ba,	// (0x0007311b) list_medium_line_t2_g3_t2_ParamLimits

0x18ba,	// (0x0007311b) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x000815d7) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x000815d7) list_medium_line_t2_g3_t

0x118b,	// (0x000729ec) list_medium_line_t3_g3_g1_ParamLimits

0x118b,	// (0x000729ec) list_medium_line_t3_g3_g1

0x187f,	// (0x000730e0) list_medium_line_t3_g3_g2_ParamLimits

0x187f,	// (0x000730e0) list_medium_line_t3_g3_g2

0x1197,	// (0x000729f8) list_medium_line_t3_g3_g3_ParamLimits

0x1197,	// (0x000729f8) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x000815d0) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x000815d0) list_medium_line_t3_g3_g

0x18d0,	// (0x00073131) list_medium_line_t3_g3_t1_ParamLimits

0x18d0,	// (0x00073131) list_medium_line_t3_g3_t1

0x18e9,	// (0x0007314a) list_medium_line_t3_g3_t2_ParamLimits

0x18e9,	// (0x0007314a) list_medium_line_t3_g3_t2

0x18ff,	// (0x00073160) list_medium_line_t3_g3_t3_ParamLimits

0x18ff,	// (0x00073160) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x000815dc) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x000815dc) list_medium_line_t3_g3_t

0x158c,	// (0x00072ded) list_medium_line_right_iconx2_g1

0x149c,	// (0x00072cfd) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x000815e3) list_medium_line_right_iconx2_g

0x1915,	// (0x00073176) list_medium_line_right_iconx2_t1

0x158c,	// (0x00072ded) list_medium_line_t2_right_iconx2_g1

0x149c,	// (0x00072cfd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x000815e3) list_medium_line_t2_right_iconx2_g

0x1923,	// (0x00073184) list_medium_line_t2_right_iconx2_t1

0x1933,	// (0x00073194) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x000815e8) list_medium_line_t2_right_iconx2_t

0x1941,	// (0x000731a2) list_medium_line_x4_t4_t1

0x194f,	// (0x000731b0) list_medium_line_x4_t4_t2

0x195f,	// (0x000731c0) list_medium_line_x4_t4_t3

0x196f,	// (0x000731d0) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x000815ed) list_medium_line_x4_t4_t

0x9f99,	// (0x0007b7fa) tport_appsw_pane_ParamLimits

0x9f99,	// (0x0007b7fa) tport_appsw_pane

0x9faa,	// (0x0007b80b) tport_contact_pane_ParamLimits

0x9faa,	// (0x0007b80b) tport_contact_pane

0x9fbe,	// (0x0007b81f) tport_listscroll_pane_ParamLimits

0x9fbe,	// (0x0007b81f) tport_listscroll_pane

0x9fd6,	// (0x0007b837) cell_tport_appsw_pane_ParamLimits

0x9fd6,	// (0x0007b837) cell_tport_appsw_pane

0xefc2,	// (0x00080823) tport_appsw_pane_g1_ParamLimits

0xefc2,	// (0x00080823) tport_appsw_pane_g1

0xde19,	// (0x0007f67a) tport_contact_pane_g1

0xde22,	// (0x0007f683) tport_contact_pane_t1

0xde30,	// (0x0007f691) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x000815f6) tport_contact_pane_t

0xde3e,	// (0x0007f69f) list_tport_pane

0xde47,	// (0x0007f6a8) scroll_pane_cp_030

0xde58,	// (0x0007f6b9) cell_tport_appsw_pane_g1

0xde68,	// (0x0007f6c9) cell_tport_appsw_pane_t1

0xde76,	// (0x0007f6d7) grid_highlight_pane_cp019

0xa00c,	// (0x0007b86d) list_tport_double_graphic_pane_ParamLimits

0xa00c,	// (0x0007b86d) list_tport_double_graphic_pane

0xad52,	// (0x0007c5b3) list_highlight_pane_cp023_ParamLimits

0xad52,	// (0x0007c5b3) list_highlight_pane_cp023

0xa019,	// (0x0007b87a) list_tport_double_graphic_pane_g1_ParamLimits

0xa019,	// (0x0007b87a) list_tport_double_graphic_pane_g1

0xa026,	// (0x0007b887) list_tport_double_graphic_pane_t1_ParamLimits

0xa026,	// (0x0007b887) list_tport_double_graphic_pane_t1

0xa03b,	// (0x0007b89c) list_tport_double_graphic_pane_t2_ParamLimits

0xa03b,	// (0x0007b89c) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x00081602) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x00081602) list_tport_double_graphic_pane_t

0x1bb2,	// (0x00073413) main_cale_note_pane

0x8456,	// (0x00079cb7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8456,	// (0x00079cb7) cell_vitu2_function_top_wide_pane_cp01

0x9abc,	// (0x0007b31d) wait_bar_pane_cp05_ParamLimits

0xad52,	// (0x0007c5b3) listscroll_cmail_pane

0xde7e,	// (0x0007f6df) list_cmail_pane

0xa04d,	// (0x0007b8ae) list_cmail_body_pane

0xa060,	// (0x0007b8c1) list_single_cmail_header_caption_pane

0xa074,	// (0x0007b8d5) list_single_cmail_header_detail_pane_ParamLimits

0xa074,	// (0x0007b8d5) list_single_cmail_header_detail_pane

0xde8e,	// (0x0007f6ef) list_single_cmail_header_caption_pane_t1

0x197f,	// (0x000731e0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x197f,	// (0x000731e0) list_single_cmail_header_detail_pane_g1

0xee61,	// (0x000806c2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xee61,	// (0x000806c2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x00081607) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x00081607) list_single_cmail_header_detail_pane_g

0xdeb2,	// (0x0007f713) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdeb2,	// (0x0007f713) list_single_cmail_header_detail_pane_t1

0xdf12,	// (0x0007f773) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdf12,	// (0x0007f773) list_single_cmail_header_editor_pane_bg

0xdf29,	// (0x0007f78a) list_cmail_body_pane_g1

0xdf32,	// (0x0007f793) list_cmail_body_pane_t1

0xeff4,	// (0x00080855) list_single_cmail_header_editor_pane_bg_g1

0x3a50,	// (0x000752b1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xf004,	// (0x00080865) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeffc,	// (0x0008085d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcdc3,	// (0x0007e624) list_single_cmail_header_editor_pane_bg_g1_copy4

0xf024,	// (0x00080885) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xf014,	// (0x00080875) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xf01c,	// (0x0008087d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3a30,	// (0x00075291) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa09a,	// (0x0007b8fb) calenote_gesture_pane_ParamLimits

0xa09a,	// (0x0007b8fb) calenote_gesture_pane

0xa0b6,	// (0x0007b917) calenote_window_pane_ParamLimits

0xa0b6,	// (0x0007b917) calenote_window_pane

0xdf40,	// (0x0007f7a1) popup_note_window_cp01

0xa0d2,	// (0x0007b933) calenote_swipe_1_pane_ParamLimits

0xa0d2,	// (0x0007b933) calenote_swipe_1_pane

0x9e6e,	// (0x0007b6cf) calenote_swipe_2_pane_ParamLimits

0x9e6e,	// (0x0007b6cf) calenote_swipe_2_pane

0xdba5,	// (0x0007f406) calenote_swipe_1_pane_g1_ParamLimits

0xdba5,	// (0x0007f406) calenote_swipe_1_pane_g1

0xdbb2,	// (0x0007f413) calenote_swipe_1_pane_g2_ParamLimits

0xdbb2,	// (0x0007f413) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0008152b) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0008152b) calenote_swipe_1_pane_g

0xdf52,	// (0x0007f7b3) calenote_swipe_1_pane_t1_ParamLimits

0xdf52,	// (0x0007f7b3) calenote_swipe_1_pane_t1

0xdba5,	// (0x0007f406) calenote_swipe_2_pane_g1_ParamLimits

0xdba5,	// (0x0007f406) calenote_swipe_2_pane_g1

0xdf71,	// (0x0007f7d2) calenote_swipe_2_pane_g2_ParamLimits

0xdf71,	// (0x0007f7d2) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x00081613) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x00081613) calenote_swipe_2_pane_g

0xdf7d,	// (0x0007f7de) calenote_swipe_2_pane_t1_ParamLimits

0xdf7d,	// (0x0007f7de) calenote_swipe_2_pane_t1

0x1bb2,	// (0x00073413) main_mup_navstr_pane

0x7284,	// (0x00078ae5) main_mup3_pane_t7_ParamLimits

0x7284,	// (0x00078ae5) main_mup3_pane_t7

0xeac9,	// (0x0008032a) main_mp4_pane_g6_ParamLimits

0xeac9,	// (0x0008032a) main_mp4_pane_g6

0xec63,	// (0x000804c4) main_image3_pane_t4_ParamLimits

0xec63,	// (0x000804c4) main_image3_pane_t4

0xa0e7,	// (0x0007b948) popup_navstr_preview_pane_ParamLimits

0xa0e7,	// (0x0007b948) popup_navstr_preview_pane

0xa0f7,	// (0x0007b958) scroll_navstr_pane_ParamLimits

0xa0f7,	// (0x0007b958) scroll_navstr_pane

0x1bb2,	// (0x00073413) bg_popup_preview_window_pane_cp04

0xdfa4,	// (0x0007f805) popup_navstr_preview_pane_t1

0xa10b,	// (0x0007b96c) scroll_navstr_pane_g1_ParamLimits

0xa10b,	// (0x0007b96c) scroll_navstr_pane_g1

0xa11f,	// (0x0007b980) scroll_navstr_pane_t1_ParamLimits

0xa11f,	// (0x0007b980) scroll_navstr_pane_t1

0xdf49,	// (0x0007f7aa) bg_button_pane_cp014

0xdf49,	// (0x0007f7aa) bg_button_pane_cp030

0x1442,	// (0x00072ca3) list_double_fisheye_pane_g4_ParamLimits

0x1442,	// (0x00072ca3) list_double_fisheye_pane_g4

0x144e,	// (0x00072caf) list_double_fisheye_pane_g5_ParamLimits

0x144e,	// (0x00072caf) list_double_fisheye_pane_g5

0xae3e,	// (0x0007c69f) sp_fs_scroll_pane_cp03

0xdc7d,	// (0x0007f4de) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc89,	// (0x0007f4ea) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x00081548) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc95,	// (0x0007f4f6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xde86,	// (0x0007f6e7) sp_fs_scroll_pane_cp02

0x2aa4,	// (0x00074305) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2aa4,	// (0x00074305) popup_sp_fs_calendar_preview_list_single_pane

0x1bb2,	// (0x00073413) main_cam6_pano_pane

0xad52,	// (0x0007c5b3) main_mup3_pane_ParamLimits

0x1bb2,	// (0x00073413) main_phacti_pane

0x99af,	// (0x0007b210) bg_button_pane_cp11

0x99c7,	// (0x0007b228) main_mobtv_info_pane_g2_ParamLimits

0x99c7,	// (0x0007b228) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x000814a8) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x000814a8) main_mobtv_info_pane_g

0x9b7c,	// (0x0007b3dd) sc_clock_pane_t5_ParamLimits

0x9b7c,	// (0x0007b3dd) sc_clock_pane_t5

0x9c24,	// (0x0007b485) main_radioblah_pane_g1_ParamLimits

0xdada,	// (0x0007f33b) main_radioblah_pane_t3_ParamLimits

0xdada,	// (0x0007f33b) main_radioblah_pane_t3

0xdaf2,	// (0x0007f353) main_radioblah_pane_t4_ParamLimits

0xdaf2,	// (0x0007f353) main_radioblah_pane_t4

0x9c4c,	// (0x0007b4ad) main_radioblah_text_pane_ParamLimits

0x9c4c,	// (0x0007b4ad) main_radioblah_text_pane

0x9c5e,	// (0x0007b4bf) main_radioblah_info_pane_g1_ParamLimits

0x9cef,	// (0x0007b550) main_radioblah_info_pane_t4_ParamLimits

0x9cef,	// (0x0007b550) main_radioblah_info_pane_t4

0xad52,	// (0x0007c5b3) main_sp_fs_calendar_pane

0xa135,	// (0x0007b996) main_phacti_pane_g1

0xa13d,	// (0x0007b99e) phacti_note_pane_ParamLimits

0xa13d,	// (0x0007b99e) phacti_note_pane

0xdfbb,	// (0x0007f81c) phacti_term_pane_ParamLimits

0xdfbb,	// (0x0007f81c) phacti_term_pane

0xdfd0,	// (0x0007f831) phacti_note_pane_t1_ParamLimits

0xdfd0,	// (0x0007f831) phacti_note_pane_t1

0xdfe7,	// (0x0007f848) phacti_term_pane_g1

0xdfef,	// (0x0007f850) phacti_term_pane_t1_ParamLimits

0xdfef,	// (0x0007f850) phacti_term_pane_t1

0xe019,	// (0x0007f87a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe021,	// (0x0007f882) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0008161d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe029,	// (0x0007f88a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe029,	// (0x0007f88a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe03f,	// (0x0007f8a0) aid_popup_sp_fs_bg_corner_pane

0xc38e,	// (0x0007dbef) popup_sp_fs_calendar_preview_bg_pane_g1

0x1bb2,	// (0x00073413) popup_sp_fs_calendar_preview_bg_pane

0xe047,	// (0x0007f8a8) popup_sp_fs_calendar_preview_list_pane

0xbef9,	// (0x0007d75a) bg_main_sp_fs_cale_pane_ParamLimits

0xbef9,	// (0x0007d75a) bg_main_sp_fs_cale_pane

0xe04f,	// (0x0007f8b0) listscroll_cale_mrui_pane_ParamLimits

0xe04f,	// (0x0007f8b0) listscroll_cale_mrui_pane

0xe064,	// (0x0007f8c5) listscroll_sp_fs_schedule_track_pane

0xe06d,	// (0x0007f8ce) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe06d,	// (0x0007f8ce) main_sp_fs_ctrlbar_pane_cp01

0xe080,	// (0x0007f8e1) main_sp_fs_ribbon_pane

0xe088,	// (0x0007f8e9) popup_sp_fs_cale_preview_window

0xa19f,	// (0x0007ba00) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa19f,	// (0x0007ba00) list_single_sp_fs_schedule_track_pane

0xad52,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xad52,	// (0x0007c5b3) bg_sp_fs_highlight_list_pane_cp03

0xa1b0,	// (0x0007ba11) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1b0,	// (0x0007ba11) list_single_sp_fs_schedule_track_pane_g1

0xa1bc,	// (0x0007ba1d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa1bc,	// (0x0007ba1d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x00081622) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x00081622) list_single_sp_fs_schedule_track_pane_g

0xa1c8,	// (0x0007ba29) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa1c8,	// (0x0007ba29) list_single_sp_fs_schedule_track_pane_t1

0xa1e2,	// (0x0007ba43) sp_fs_schedule_track_pane_ParamLimits

0xa1e2,	// (0x0007ba43) sp_fs_schedule_track_pane

0xe09a,	// (0x0007f8fb) sp_fs_schedule_track_pane_g1

0xe0a2,	// (0x0007f903) sp_fs_schedule_track_pane_g2

0xe0aa,	// (0x0007f90b) sp_fs_schedule_track_pane_g3

0xe0b2,	// (0x0007f913) sp_fs_schedule_track_pane_g4

0xe0ba,	// (0x0007f91b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x00081627) sp_fs_schedule_track_pane_g

0xeff4,	// (0x00080855) bg_sp_fs_schedule_viewer_highlight_g1

0x3a50,	// (0x000752b1) bg_sp_fs_schedule_viewer_highlight_g2

0xeffc,	// (0x0008085d) bg_sp_fs_schedule_viewer_highlight_g3

0xf004,	// (0x00080865) bg_sp_fs_schedule_viewer_highlight_g4

0xcdc3,	// (0x0007e624) bg_sp_fs_schedule_viewer_highlight_g5

0xf014,	// (0x00080875) bg_sp_fs_schedule_viewer_highlight_g6

0xf01c,	// (0x0008087d) bg_sp_fs_schedule_viewer_highlight_g7

0xf024,	// (0x00080885) bg_sp_fs_schedule_viewer_highlight_g8

0x3a30,	// (0x00075291) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x00081632) bg_sp_fs_schedule_viewer_highlight_g

0x1bb2,	// (0x00073413) bg_main_sp_fs_ribbon_pane

0xa1f3,	// (0x0007ba54) main_sp_fs_ribbon_pane_g1

0xe0c2,	// (0x0007f923) main_sp_fs_ribbon_pane_t1

0xa1fc,	// (0x0007ba5d) main_sp_fs_ribbon_pane_t2

0xe0d1,	// (0x0007f932) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x00081645) main_sp_fs_ribbon_pane_t

0xe0e0,	// (0x0007f941) main_sp_fs_ribbon_scheduler_pane

0xe0e8,	// (0x0007f949) bg_main_sp_fs_ribbon_pane_g1

0xe0f1,	// (0x0007f952) bg_main_sp_fs_ribbon_pane_g2

0xe0fa,	// (0x0007f95b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0008164c) bg_main_sp_fs_ribbon_pane_g

0xe102,	// (0x0007f963) main_sp_fs_ribbon_scheduler_pane_g1

0xe10b,	// (0x0007f96c) main_sp_fs_ribbon_scheduler_pane_g2

0xe114,	// (0x0007f975) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x00081653) main_sp_fs_ribbon_scheduler_pane_g

0xe11d,	// (0x0007f97e) list_cale_mrui_pane

0xa20b,	// (0x0007ba6c) sp_fs_scroll_pane_cp07_ParamLimits

0xa20b,	// (0x0007ba6c) sp_fs_scroll_pane_cp07

0xa223,	// (0x0007ba84) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa223,	// (0x0007ba84) bg_sp_fs_schedule_viewer_highlight

0xe12a,	// (0x0007f98b) list_single_sp_fs_schedule_track_pane_cp01

0xe132,	// (0x0007f993) list_sp_fs_schedule_track_pane

0xe13a,	// (0x0007f99b) sp_fs_scroll_pane_cp06_ParamLimits

0xe13a,	// (0x0007f99b) sp_fs_scroll_pane_cp06

0xc38e,	// (0x0007dbef) bgmain_sp_fs_calendar_pane_g1

0x1995,	// (0x000731f6) list_single_cale_mrui_pane_ParamLimits

0x1995,	// (0x000731f6) list_single_cale_mrui_pane

0xe14c,	// (0x0007f9ad) list_single_cale_mrui_row_pane_ParamLimits

0xe14c,	// (0x0007f9ad) list_single_cale_mrui_row_pane

0xe159,	// (0x0007f9ba) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe159,	// (0x0007f9ba) list_single_cale_mrui_row_pane_g1

0xe19e,	// (0x0007f9ff) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe19e,	// (0x0007f9ff) list_single_cale_mrui_row_pane_t1

0x19b5,	// (0x00073216) list_single_cale_mrui_row_pane_t2_ParamLimits

0x19b5,	// (0x00073216) list_single_cale_mrui_row_pane_t2

0xe1b0,	// (0x0007fa11) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe1b0,	// (0x0007fa11) list_single_cale_mrui_row_pane_t3

0xe1df,	// (0x0007fa40) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe1df,	// (0x0007fa40) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x00081661) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x00081661) list_single_cale_mrui_row_pane_t

0x1a1b,	// (0x0007327c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1a1b,	// (0x0007327c) list_single_cmail_header_editor_pane_bg_cp01

0x1a3b,	// (0x0007329c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1a3b,	// (0x0007329c) list_single_cmail_header_editor_pane_bg_cp02

0xa233,	// (0x0007ba94) main_radioblah_text_pane_t1_ParamLimits

0xa233,	// (0x0007ba94) main_radioblah_text_pane_t1

0xe20e,	// (0x0007fa6f) cam6_indi_pane_cp01

0xe216,	// (0x0007fa77) cam6_mode_pane_cp01

0xe21e,	// (0x0007fa7f) cam6_pano_pane

0xe227,	// (0x0007fa88) cam6_zoom_pane_cp01

0xe22f,	// (0x0007fa90) cam6_pano_image_pane

0xe238,	// (0x0007fa99) cam6_pano_pane_g1

0xd841,	// (0x0007f0a2) cam6_pano_pane_g2

0xe241,	// (0x0007faa2) cam6_pano_pane_g3

0xe24a,	// (0x0007faab) cam6_pano_pane_g4

0xc921,	// (0x0007e182) cam6_pano_pane_g5

0xe253,	// (0x0007fab4) cam6_pano_pane_g6

0xe25b,	// (0x0007fabc) cam6_pano_pane_g7

0xe263,	// (0x0007fac4) cam6_pano_pane_g8

0xe26c,	// (0x0007facd) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0008166a) cam6_pano_pane_g

0x1bb2,	// (0x00073413) main_browser_tag_pane

0xdf9c,	// (0x0007f7fd) grid_navstr_albumart_pane

0xe275,	// (0x0007fad6) cell_navstr_albumart_pane_ParamLimits

0xe275,	// (0x0007fad6) cell_navstr_albumart_pane

0x5509,	// (0x00076d6a) cell_navstr_albumart_pane_g1

0xbcca,	// (0x0007d52b) cell_navstr_albumart_pane_g2

0xbcda,	// (0x0007d53b) cell_navstr_albumart_pane_g3

0xbcd2,	// (0x0007d533) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0008167d) cell_navstr_albumart_pane_g

0xa24d,	// (0x0007baae) bt_list_pane_ParamLimits

0xa24d,	// (0x0007baae) bt_list_pane

0xa260,	// (0x0007bac1) bt_list_pane_t1

0xa26f,	// (0x0007bad0) bt_list_pane_t2

0x0001,

0xfe25,	// (0x00081686) bt_list_pane_t

0x1bb2,	// (0x00073413) main_cale_prevew_pane

0xa27e,	// (0x0007badf) popup_cale_preview_window_ParamLimits

0xa27e,	// (0x0007badf) popup_cale_preview_window

0xad52,	// (0x0007c5b3) bg_popup_preview_window_pane_cp05_ParamLimits

0xad52,	// (0x0007c5b3) bg_popup_preview_window_pane_cp05

0xe28d,	// (0x0007faee) list_cale_preview_pane_ParamLimits

0xe28d,	// (0x0007faee) list_cale_preview_pane

0xe299,	// (0x0007fafa) list_double_cale_preview_pane_ParamLimits

0xe299,	// (0x0007fafa) list_double_cale_preview_pane

0xe2ab,	// (0x0007fb0c) list_single_cale_preview_pane_ParamLimits

0xe2ab,	// (0x0007fb0c) list_single_cale_preview_pane

0xe2bf,	// (0x0007fb20) list_single_cale_preview_pane_g1

0xe2c7,	// (0x0007fb28) list_single_cale_preview_pane_t1_ParamLimits

0xe2c7,	// (0x0007fb28) list_single_cale_preview_pane_t1

0xe2dc,	// (0x0007fb3d) list_double_cale_preview_pane_g1

0xe2e4,	// (0x0007fb45) list_double_cale_preview_pane_t1_ParamLimits

0xe2e4,	// (0x0007fb45) list_double_cale_preview_pane_t1

0xe2f9,	// (0x0007fb5a) list_double_cale_preview_pane_t2_ParamLimits

0xe2f9,	// (0x0007fb5a) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0008168b) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0008168b) list_double_cale_preview_pane_t

0x1bb2,	// (0x00073413) main_ezdial_pane

0xad52,	// (0x0007c5b3) main_sp_fs_email_pane_ParamLimits

0x9eb8,	// (0x0007b719) cmail_ddmenu_btn01_pane_ParamLimits

0x9eb8,	// (0x0007b719) cmail_ddmenu_btn01_pane

0x9ecb,	// (0x0007b72c) cmail_ddmenu_btn02_pane_ParamLimits

0x9ecb,	// (0x0007b72c) cmail_ddmenu_btn02_pane

0x9eee,	// (0x0007b74f) cmail_ddmenu_btn03_pane_ParamLimits

0x9eee,	// (0x0007b74f) cmail_ddmenu_btn03_pane

0x9f10,	// (0x0007b771) main_sp_fs_ctrlbar_pane_ParamLimits

0x9f34,	// (0x0007b795) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa04d,	// (0x0007b8ae) list_cmail_body_pane_ParamLimits

0xde9c,	// (0x0007f6fd) bg_button_pane_cp12

0xdea5,	// (0x0007f706) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdea5,	// (0x0007f706) list_single_cmail_header_detail_pane_g3

0xdeee,	// (0x0007f74f) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdeee,	// (0x0007f74f) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0008160e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0008160e) list_single_cmail_header_detail_pane_t

0xe004,	// (0x0007f865) phacti_term_pane_t2_ParamLimits

0xe004,	// (0x0007f865) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x00081618) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x00081618) phacti_term_pane_t

0xe311,	// (0x0007fb72) aid_size_list_single_double

0xa293,	// (0x0007baf4) popup_ezdial_listscroll_window

0xa2a9,	// (0x0007bb0a) popup_number_entry_window_cp01

0x3128,	// (0x00074989) bg_popup_call_pane_cp09

0xe31d,	// (0x0007fb7e) ezdial_list_pane

0xe325,	// (0x0007fb86) scroll_pane_cp23

0xbef9,	// (0x0007d75a) bg_button_pane_cp028_ParamLimits

0xbef9,	// (0x0007d75a) bg_button_pane_cp028

0xa2b5,	// (0x0007bb16) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa2b5,	// (0x0007bb16) cmail_ddmenu_btn01_pane_g1

0xa2c1,	// (0x0007bb22) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa2c1,	// (0x0007bb22) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x00081690) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x00081690) cmail_ddmenu_btn01_pane_g

0xe32d,	// (0x0007fb8e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe32d,	// (0x0007fb8e) cmail_ddmenu_btn01_pane_t1

0xbef9,	// (0x0007d75a) bg_button_pane_cp029_ParamLimits

0xbef9,	// (0x0007d75a) bg_button_pane_cp029

0xa2d5,	// (0x0007bb36) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa2d5,	// (0x0007bb36) cmail_ddmenu_btn02_pane_g1

0xa2ee,	// (0x0007bb4f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa2ee,	// (0x0007bb4f) cmail_ddmenu_btn02_pane_t1

0xad52,	// (0x0007c5b3) bg_button_pane_cp031_ParamLimits

0xad52,	// (0x0007c5b3) bg_button_pane_cp031

0xa2d5,	// (0x0007bb36) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa2d5,	// (0x0007bb36) cmail_ddmenu_btn03_pane_g1

0xa2ee,	// (0x0007bb4f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa2ee,	// (0x0007bb4f) cmail_ddmenu_btn03_pane_t1

0x7d69,	// (0x000795ca) cell_dialer2_keypad_pane_t1_ParamLimits

0x7d83,	// (0x000795e4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7d83,	// (0x000795e4) cell_dialer2_keypad_pane_t1_copy1

0x97d4,	// (0x0007b035) ncimui_group_button_pane

0xad52,	// (0x0007c5b3) main_sp_fs_calendar_pane_ParamLimits

0xa060,	// (0x0007b8c1) list_single_cmail_header_caption_pane_ParamLimits

0xee6d,	// (0x000806ce) aid_recal_txt_sm_pane

0x1bb2,	// (0x00073413) mian_recal_day_pane

0xe088,	// (0x0007f8e9) popup_sp_fs_cale_preview_window_ParamLimits

0xe343,	// (0x0007fba4) list_recal_day_pane

0xe385,	// (0x0007fbe6) list_single_recal_day_pane_ParamLimits

0xe385,	// (0x0007fbe6) list_single_recal_day_pane

0xe397,	// (0x0007fbf8) list_single_recal_day_pane_g1_ParamLimits

0xe397,	// (0x0007fbf8) list_single_recal_day_pane_g1

0xe3a3,	// (0x0007fc04) list_single_recal_day_pane_g2_ParamLimits

0xe3a3,	// (0x0007fc04) list_single_recal_day_pane_g2

0xe3af,	// (0x0007fc10) list_single_recal_day_pane_g3_ParamLimits

0xe3af,	// (0x0007fc10) list_single_recal_day_pane_g3

0x1a57,	// (0x000732b8) list_single_recal_day_pane_g4_ParamLimits

0x1a57,	// (0x000732b8) list_single_recal_day_pane_g4

0xe3bb,	// (0x0007fc1c) list_single_recal_day_pane_g5_ParamLimits

0xe3bb,	// (0x0007fc1c) list_single_recal_day_pane_g5

0xe3c7,	// (0x0007fc28) list_single_recal_day_pane_g6_ParamLimits

0xe3c7,	// (0x0007fc28) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0008169f) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0008169f) list_single_recal_day_pane_g

0xe3db,	// (0x0007fc3c) list_single_recal_day_pane_t1

0xe3ed,	// (0x0007fc4e) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x000816aa) list_single_recal_day_pane_t

0xa312,	// (0x0007bb73) ncimui_query_button_pane_ParamLimits

0xa312,	// (0x0007bb73) ncimui_query_button_pane

0xa322,	// (0x0007bb83) ncimui_query_button_pane_t1_ParamLimits

0xa322,	// (0x0007bb83) ncimui_query_button_pane_t1

0xe3ff,	// (0x0007fc60) ncimui_query_button_pane_t2_ParamLimits

0xe3ff,	// (0x0007fc60) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x000816af) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x000816af) ncimui_query_button_pane_t

0xa335,	// (0x0007bb96) query_button_pane_ParamLimits

0xa335,	// (0x0007bb96) query_button_pane

0x1bb2,	// (0x00073413) bg_button_pane_cp0028

0xe412,	// (0x0007fc73) query_button_pane_t1

0x606c,	// (0x000778cd) main_tport_pane_ParamLimits

0x9f60,	// (0x0007b7c1) bg_popup_window_pane_cp01_ParamLimits

0x9f60,	// (0x0007b7c1) bg_popup_window_pane_cp01

0x9f77,	// (0x0007b7d8) heading_pane_cp08_ParamLimits

0x9f77,	// (0x0007b7d8) heading_pane_cp08

0x9f88,	// (0x0007b7e9) heading_pane_cp07_ParamLimits

0x9f88,	// (0x0007b7e9) heading_pane_cp07

0xde58,	// (0x0007f6b9) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x000815fb) cell_tport_appsw_pane_g

0x0f63,	// (0x000727c4) input_candi_list_open_g1

0x4695,	// (0x00075ef6) list_cale_time_pane_g6_ParamLimits

0x4695,	// (0x00075ef6) list_cale_time_pane_g6

0x6cf9,	// (0x0007855a) aid_size_touch_calib_1_ParamLimits

0x6cf9,	// (0x0007855a) aid_size_touch_calib_1

0x6d0b,	// (0x0007856c) aid_size_touch_calib_2_ParamLimits

0x6d0b,	// (0x0007856c) aid_size_touch_calib_2

0x6d21,	// (0x00078582) aid_size_touch_calib_3_ParamLimits

0x6d21,	// (0x00078582) aid_size_touch_calib_3

0x6d39,	// (0x0007859a) aid_size_touch_calib_4_ParamLimits

0x6d39,	// (0x0007859a) aid_size_touch_calib_4

0x6d4d,	// (0x000785ae) main_touch_calib_button_group_pane_ParamLimits

0x6d4d,	// (0x000785ae) main_touch_calib_button_group_pane

0x6d65,	// (0x000785c6) main_touch_calib_pane_g1_ParamLimits

0x6d77,	// (0x000785d8) main_touch_calib_pane_g2_ParamLimits

0x6d89,	// (0x000785ea) main_touch_calib_pane_g3_ParamLimits

0x6d9b,	// (0x000785fc) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x00080fc5) main_touch_calib_pane_g_ParamLimits

0x6dad,	// (0x0007860e) main_touch_calib_pane_t1_ParamLimits

0x6dc5,	// (0x00078626) main_touch_calib_pane_t2_ParamLimits

0x6ddd,	// (0x0007863e) main_touch_calib_pane_t3_ParamLimits

0x6def,	// (0x00078650) main_touch_calib_pane_t4_ParamLimits

0x6e01,	// (0x00078662) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x00080fce) main_touch_calib_pane_t_ParamLimits

0xc6d8,	// (0x0007df39) list_single_fp_cale_pane_g3_ParamLimits

0xc6d8,	// (0x0007df39) list_single_fp_cale_pane_g3

0xad52,	// (0x0007c5b3) bg_button_pane_cp012_ParamLimits

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp03_ParamLimits

0x8b8a,	// (0x0007a3eb) cell_vitu2_function_top_pane_g1_ParamLimits

0xad52,	// (0x0007c5b3) bg_vkb2_func_pane_cp04_ParamLimits

0x9761,	// (0x0007afc2) main_ncimui_button_group_pane_ParamLimits

0x9761,	// (0x0007afc2) main_ncimui_button_group_pane

0x97bf,	// (0x0007b020) main_ncimui_pane_t3_ParamLimits

0x97bf,	// (0x0007b020) main_ncimui_pane_t3

0xdfb2,	// (0x0007f813) phacti_button_group_pane

0xe311,	// (0x0007fb72) aid_size_list_single_double_ParamLimits

0xa293,	// (0x0007baf4) popup_ezdial_listscroll_window_ParamLimits

0xa2a9,	// (0x0007bb0a) popup_number_entry_window_cp01_ParamLimits

0xa347,	// (0x0007bba8) phacti_button_pane_ParamLimits

0xa347,	// (0x0007bba8) phacti_button_pane

0x1bb2,	// (0x00073413) bg_button_pane_cp14

0xe420,	// (0x0007fc81) phacti_button_pane_t1

0xa356,	// (0x0007bbb7) main_touch_calib_button_pane_ParamLimits

0xa356,	// (0x0007bbb7) main_touch_calib_button_pane

0x27ff,	// (0x00074060) bg_button_pane_cp18_ParamLimits

0x27ff,	// (0x00074060) bg_button_pane_cp18

0xe42e,	// (0x0007fc8f) main_touch_calib_button_pane_t1_ParamLimits

0xe42e,	// (0x0007fc8f) main_touch_calib_button_pane_t1

0xe444,	// (0x0007fca5) main_touch_calib_button_pane_t2_ParamLimits

0xe444,	// (0x0007fca5) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x000816b4) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x000816b4) main_touch_calib_button_pane_t

0x1bb2,	// (0x00073413) cell_ncimui_button_pane

0x1bb2,	// (0x00073413) bg_button_pane_cp032

0xe462,	// (0x0007fcc3) cell_ncimui_button_pane_t1

0xec43,	// (0x000804a4) image3_infobar_pane_ParamLimits

0xec43,	// (0x000804a4) image3_infobar_pane

0x9ba4,	// (0x0007b405) fs_bigclock_status_pane_ParamLimits

0x9ba4,	// (0x0007b405) fs_bigclock_status_pane

0x9bb1,	// (0x0007b412) main_fs_bigclock_clock_pane_ParamLimits

0x9bb1,	// (0x0007b412) main_fs_bigclock_clock_pane

0x9bcd,	// (0x0007b42e) main_fs_bigclock_indi_pane_ParamLimits

0x9bcd,	// (0x0007b42e) main_fs_bigclock_indi_pane

0x9bf7,	// (0x0007b458) main_fs_bigclock_swipe_pane_ParamLimits

0x9bf7,	// (0x0007b458) main_fs_bigclock_swipe_pane

0x1bb2,	// (0x00073413) main_fs_clock_dumped_data

0xd94e,	// (0x0007f1af) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd94e,	// (0x0007f1af) list_single_fs_bigclock_indicator_pane_g1

0xd968,	// (0x0007f1c9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd968,	// (0x0007f1c9) list_single_fs_bigclock_indicator_pane_g2

0xd982,	// (0x0007f1e3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd982,	// (0x0007f1e3) list_single_fs_bigclock_indicator_pane_g3

0xd99c,	// (0x0007f1fd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd99c,	// (0x0007f1fd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x000814dc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x000814dc) list_single_fs_bigclock_indicator_pane_g

0xd9c5,	// (0x0007f226) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd9c5,	// (0x0007f226) list_single_fs_bigclock_indicator_pane_t1

0xd9ed,	// (0x0007f24e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd9ed,	// (0x0007f24e) list_single_fs_bigclock_indicator_pane_t2

0xda15,	// (0x0007f276) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xda15,	// (0x0007f276) list_single_fs_bigclock_indicator_pane_t3

0xda3d,	// (0x0007f29e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xda3d,	// (0x0007f29e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x000814e7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x000814e7) list_single_fs_bigclock_indicator_pane_t

0xe470,	// (0x0007fcd1) image3_infobar_fav_pane_ParamLimits

0xe470,	// (0x0007fcd1) image3_infobar_fav_pane

0xe480,	// (0x0007fce1) image3_infobar_loc_pane_ParamLimits

0xe480,	// (0x0007fce1) image3_infobar_loc_pane

0xe494,	// (0x0007fcf5) image3_infobar_time_pane_ParamLimits

0xe494,	// (0x0007fcf5) image3_infobar_time_pane

0xc38e,	// (0x0007dbef) image3_infobar_time_pane_g1

0xe4a4,	// (0x0007fd05) image3_infobar_time_pane_t1

0xc38e,	// (0x0007dbef) image3_infobar_loc_pane_g1

0xe4b2,	// (0x0007fd13) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x000816b9) image3_infobar_loc_pane_g

0xe4ba,	// (0x0007fd1b) image3_infobar_loc_pane_t1

0xc38e,	// (0x0007dbef) image3_infobar_fav_pane_g1

0xe4c8,	// (0x0007fd29) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x000816be) image3_infobar_fav_pane_g

0xe4d0,	// (0x0007fd31) fs_bigclock_status_battery_pane

0xe4d9,	// (0x0007fd3a) fs_bigclock_status_signal_pane

0xe4e2,	// (0x0007fd43) fs_bigclock_status_title_pane

0xe4eb,	// (0x0007fd4c) fs_bigclock_status_signal_pane_g1

0xe4f4,	// (0x0007fd55) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x000816c3) fs_bigclock_status_signal_pane_g

0xe4fc,	// (0x0007fd5d) fs_bigclock_status_battery_pane_g1

0xe505,	// (0x0007fd66) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x000816c8) fs_bigclock_status_battery_pane_g

0xe50d,	// (0x0007fd6e) fs_bigclock_status_title_pane_t1

0xa369,	// (0x0007bbca) main_fs_bigclock_clock_pane_g1

0xa369,	// (0x0007bbca) main_fs_bigclock_clock_pane_g2

0xa37a,	// (0x0007bbdb) main_fs_bigclock_clock_pane_g3

0xa37a,	// (0x0007bbdb) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x000816cd) main_fs_bigclock_clock_pane_g

0xa38d,	// (0x0007bbee) main_fs_bigclock_clock_pane_t1

0xa3a3,	// (0x0007bc04) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x000816d6) main_fs_bigclock_clock_pane_t

0xe51b,	// (0x0007fd7c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe51b,	// (0x0007fd7c) list_single_fs_bigclock_indicator_pane

0xe52c,	// (0x0007fd8d) list_single_fs_bigclock_pane_ParamLimits

0xe52c,	// (0x0007fd8d) list_single_fs_bigclock_pane

0xe552,	// (0x0007fdb3) main_fs_bigclock_indicator_pane_t1

0xe561,	// (0x0007fdc2) list_single_fs_bigclock_pane_g1

0xe569,	// (0x0007fdca) list_single_fs_bigclock_pane_t1

0xc38e,	// (0x0007dbef) main_fs_bigclock_swipe_pane_g1

0xe5ac,	// (0x0007fe0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x000816e7) main_fs_bigclock_swipe_pane_g

0xe5b4,	// (0x0007fe15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe5b4,	// (0x0007fe15) main_fs_bigclock_swipe_pane_t1

0x4973,	// (0x000761d4) call_type_pane_ParamLimits

0x1bb2,	// (0x00073413) main_btmg_pane

0xe185,	// (0x0007f9e6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe185,	// (0x0007f9e6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0008165a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0008165a) list_single_cale_mrui_row_pane_g

0xe36c,	// (0x0007fbcd) list_recal_vselct_arw_lo_pane

0xe374,	// (0x0007fbd5) list_recal_vselct_arw_up_pane

0xe37c,	// (0x0007fbdd) list_recal_vselct_pane

0xa3fb,	// (0x0007bc5c) btmg_button_pane

0xa403,	// (0x0007bc64) main_btmg_pane_g1

0x1bb2,	// (0x00073413) bg_button_pane_cp044

0xe5d1,	// (0x0007fe32) btmg_button_pane_t1

0xbee5,	// (0x0007d746) aid_listscroll_gen

0xad52,	// (0x0007c5b3) main_cntbar_detail_pane

0xde7e,	// (0x0007f6df) list_cmail_folder_pane

0xae3e,	// (0x0007c69f) sp_fs_scroll_pane_cp03_ParamLimits

0xa04d,	// (0x0007b8ae) list_single_fs_dyc_pane_cp01_ParamLimits

0xa04d,	// (0x0007b8ae) list_single_fs_dyc_pane_cp01

0xe5df,	// (0x0007fe40) aid_size_cmail_indent

0xe5e8,	// (0x0007fe49) list_single_dyc_row_pane_cp01

0xa433,	// (0x0007bc94) cntbar_detail_list_pane_ParamLimits

0xa433,	// (0x0007bc94) cntbar_detail_list_pane

0xa479,	// (0x0007bcda) main_cntbar_detail_cont_pane_ParamLimits

0xa479,	// (0x0007bcda) main_cntbar_detail_cont_pane

0xae3e,	// (0x0007c69f) scroll_pane_cp032_ParamLimits

0xae3e,	// (0x0007c69f) scroll_pane_cp032

0xa48d,	// (0x0007bcee) cntbar_detail_list_event_pane_ParamLimits

0xa48d,	// (0x0007bcee) cntbar_detail_list_event_pane

0xa443,	// (0x0007bca4) cntbar_detail_list_shct_pane

0x3aa6,	// (0x00075307) aid_list_gen

0xe5f1,	// (0x0007fe52) aid_scroll

0xe5fa,	// (0x0007fe5b) aid_size_touch_scroll_bar

0x906d,	// (0x0007a8ce) aid_list_double

0xd120,	// (0x0007e981) aid_list_single

0x906d,	// (0x0007a8ce) aid_list_single_lg

0x1a6f,	// (0x000732d0) aid_list_z_g_a_sm

0xa49d,	// (0x0007bcfe) aid_list_z_g_d

0x1a77,	// (0x000732d8) aid_txt_z_prm

0x1a85,	// (0x000732e6) aid_txt_z_prm_cp01

0x1a93,	// (0x000732f4) aid_txt_z_sec

0xa4a5,	// (0x0007bd06) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa4a5,	// (0x0007bd06) main_cntbar_detail_cont_pane_g1

0xa4b8,	// (0x0007bd19) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa4b8,	// (0x0007bd19) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x000816ec) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x000816ec) main_cntbar_detail_cont_pane_g

0xe603,	// (0x0007fe64) main_cntbar_detail_cont_pane_t1

0xe611,	// (0x0007fe72) main_cntbar_detail_cont_pane_t2

0xe61f,	// (0x0007fe80) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x000816f1) main_cntbar_detail_cont_pane_t

0xa4c8,	// (0x0007bd29) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa4c8,	// (0x0007bd29) cell_cntbar_detail_list_shct_pane

0xe62d,	// (0x0007fe8e) cntbar_detail_list_shct_pane_g1

0xe636,	// (0x0007fe97) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x000816f8) cntbar_detail_list_shct_pane_g

0xa4da,	// (0x0007bd3b) cntbar_detail_list_event_pane_g1_ParamLimits

0xa4da,	// (0x0007bd3b) cntbar_detail_list_event_pane_g1

0xa4e6,	// (0x0007bd47) cntbar_detail_list_event_pane_g2_ParamLimits

0xa4e6,	// (0x0007bd47) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x000816fd) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x000816fd) cntbar_detail_list_event_pane_g

0xa552,	// (0x0007bdb3) cntbar_detail_list_event_pane_t1_ParamLimits

0xa552,	// (0x0007bdb3) cntbar_detail_list_event_pane_t1

0xa567,	// (0x0007bdc8) cntbar_detail_list_event_pane_t2_ParamLimits

0xa567,	// (0x0007bdc8) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0008170a) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0008170a) cntbar_detail_list_event_pane_t

0xc38e,	// (0x0007dbef) cell_cntbar_detail_list_shct_pane_g1

0x4f6f,	// (0x000767d0) navi_pane_mv_g3

0xad52,	// (0x0007c5b3) main_cntbar_detail_pane_ParamLimits

0x1bb2,	// (0x00073413) main_notif_wgt_pane

0xea63,	// (0x000802c4) aid_tch_main_mp4_pane_g4

0xec3b,	// (0x0008049c) popup_slider_window_cp02

0xe362,	// (0x0007fbc3) list_recal_day_event_pane

0xa40b,	// (0x0007bc6c) cntbar_detail_btn_pane_ParamLimits

0xa40b,	// (0x0007bc6c) cntbar_detail_btn_pane

0xa41e,	// (0x0007bc7f) cntbar_detail_btn_pane_cp01_ParamLimits

0xa41e,	// (0x0007bc7f) cntbar_detail_btn_pane_cp01

0xa443,	// (0x0007bca4) cntbar_detail_list_shct_pane_ParamLimits

0xa453,	// (0x0007bcb4) cntbar_detail_pane_g1_ParamLimits

0xa453,	// (0x0007bcb4) cntbar_detail_pane_g1

0xa463,	// (0x0007bcc4) cntbar_detail_pane_t1_ParamLimits

0xa463,	// (0x0007bcc4) cntbar_detail_pane_t1

0xa4f2,	// (0x0007bd53) cntbar_detail_list_event_pane_g3_ParamLimits

0xa4f2,	// (0x0007bd53) cntbar_detail_list_event_pane_g3

0xa50a,	// (0x0007bd6b) cntbar_detail_list_event_pane_g4_ParamLimits

0xa50a,	// (0x0007bd6b) cntbar_detail_list_event_pane_g4

0xa522,	// (0x0007bd83) cntbar_detail_list_event_pane_g5_ParamLimits

0xa522,	// (0x0007bd83) cntbar_detail_list_event_pane_g5

0xa53a,	// (0x0007bd9b) cntbar_detail_list_event_pane_g6_ParamLimits

0xa53a,	// (0x0007bd9b) cntbar_detail_list_event_pane_g6

0xa57c,	// (0x0007bddd) cntbar_detail_list_event_pane_t3_ParamLimits

0xa57c,	// (0x0007bddd) cntbar_detail_list_event_pane_t3

0xa58e,	// (0x0007bdef) popup_notif_wgt_window_ParamLimits

0xa58e,	// (0x0007bdef) popup_notif_wgt_window

0xa5a3,	// (0x0007be04) popup_submenu_window_cp01_ParamLimits

0xa5a3,	// (0x0007be04) popup_submenu_window_cp01

0x3128,	// (0x00074989) bg_popup_window_pane_cp10

0xe63f,	// (0x0007fea0) listscroll_notif_wgt_pane

0xe650,	// (0x0007feb1) list_notif_wgt_window

0xe659,	// (0x0007feba) scroll_pane_cp033

0xa5b3,	// (0x0007be14) list_notif_wgt_row_pane_ParamLimits

0xa5b3,	// (0x0007be14) list_notif_wgt_row_pane

0xe662,	// (0x0007fec3) aid_size_list_notif_wgt_del

0xe66f,	// (0x0007fed0) list_notif_wgt_row_pane_g1

0xe67b,	// (0x0007fedc) list_notif_wgt_row_pane_g2

0xe68a,	// (0x0007feeb) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x00081711) list_notif_wgt_row_pane_g

0xe697,	// (0x0007fef8) list_notif_wgt_row_pane_t1

0xe6ad,	// (0x0007ff0e) list_notif_wgt_row_pane_t2

0xe6bf,	// (0x0007ff20) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x00081718) list_notif_wgt_row_pane_t

0xcdcb,	// (0x0007e62c) list_recal_day_event_pane_g1

0xe6d1,	// (0x0007ff32) list_recal_day_event_pane_t1

0x1bb2,	// (0x00073413) bg_button_pane_cp045

0xa5c3,	// (0x0007be24) cntbar_detail_btn_pane_t1

0xbef9,	// (0x0007d75a) main_callh_pane_ParamLimits

0xbef9,	// (0x0007d75a) main_callh_pane

0x1bb2,	// (0x00073413) main_coverflow0_pane

0x1bb2,	// (0x00073413) main_wgtman_pane

0x9c0b,	// (0x0007b46c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9c0b,	// (0x0007b46c) main_fs_bigclock_unlock_btn_pane

0xde50,	// (0x0007f6b1) bg_button_pane_cp16

0xde60,	// (0x0007f6c1) cell_tport_appsw_pane_g3

0xa5d1,	// (0x0007be32) cf0_flow_pane_ParamLimits

0xa5d1,	// (0x0007be32) cf0_flow_pane

0xe6e0,	// (0x0007ff41) listscroll_cf0_pane

0xe6e9,	// (0x0007ff4a) main_cf0_pane_g1

0xa5e6,	// (0x0007be47) main_cf0_pane_t1_ParamLimits

0xa5e6,	// (0x0007be47) main_cf0_pane_t1

0xa5fb,	// (0x0007be5c) main_cf0_pane_t2_ParamLimits

0xa5fb,	// (0x0007be5c) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x00081724) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x00081724) main_cf0_pane_t

0xe6fb,	// (0x0007ff5c) scroll_pane_cp11

0xa610,	// (0x0007be71) cf0_flow_pane_g1

0xa618,	// (0x0007be79) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x00081729) cf0_flow_pane_g

0xa620,	// (0x0007be81) cf0_flow_pane_t1

0x1bb2,	// (0x00073413) main_call6_pane

0x1bb2,	// (0x00073413) main_calllock_pane

0xa62e,	// (0x0007be8f) call6_btn_grp_pane_ParamLimits

0xa62e,	// (0x0007be8f) call6_btn_grp_pane

0xa644,	// (0x0007bea5) call6_pane_g1_ParamLimits

0xa644,	// (0x0007bea5) call6_pane_g1

0xa657,	// (0x0007beb8) popup_call6_1st_window_ParamLimits

0xa657,	// (0x0007beb8) popup_call6_1st_window

0xa666,	// (0x0007bec7) popup_call6_2nd_window_ParamLimits

0xa666,	// (0x0007bec7) popup_call6_2nd_window

0xa675,	// (0x0007bed6) cell_call6_btn_pane_ParamLimits

0xa675,	// (0x0007bed6) cell_call6_btn_pane

0x3128,	// (0x00074989) bg_popup_call2_in_pane_cp03

0xe704,	// (0x0007ff65) popup_call6_1st_window_g1

0xe70c,	// (0x0007ff6d) popup_call6_1st_window_g2

0xe714,	// (0x0007ff75) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0008172e) popup_call6_1st_window_g

0xe71c,	// (0x0007ff7d) popup_call6_1st_window_t1

0xe72b,	// (0x0007ff8c) popup_call6_1st_window_t2

0xe739,	// (0x0007ff9a) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x00081735) popup_call6_1st_window_t

0x3128,	// (0x00074989) bg_popup_call2_in_pane_cp04

0xe704,	// (0x0007ff65) popup_call6_2nd_window_g1

0xe70c,	// (0x0007ff6d) popup_call6_2nd_window_g2

0xe714,	// (0x0007ff75) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0008172e) popup_call6_2nd_window_g

0xe71c,	// (0x0007ff7d) popup_call6_2nd_window_t1

0x1bb2,	// (0x00073413) bg_button_pane_cp15

0xe747,	// (0x0007ffa8) cell_call6_btn_pane_g1

0xe750,	// (0x0007ffb1) cell_call6_btn_pane_t1

0xa689,	// (0x0007beea) listscroll_wgtman_pane_ParamLimits

0xa689,	// (0x0007beea) listscroll_wgtman_pane

0xa6aa,	// (0x0007bf0b) wgtman_btn_pane_ParamLimits

0xa6aa,	// (0x0007bf0b) wgtman_btn_pane

0x4bb7,	// (0x00076418) aid_scroll_copy1

0xe75f,	// (0x0007ffc0) list_wgtman_pane

0xa6ea,	// (0x0007bf4b) wgtman_btn_pane_g1_ParamLimits

0xa6ea,	// (0x0007bf4b) wgtman_btn_pane_g1

0xa716,	// (0x0007bf77) wgtman_btn_pane_t1_ParamLimits

0xa716,	// (0x0007bf77) wgtman_btn_pane_t1

0xe769,	// (0x0007ffca) wgtman_btn_pane_t2_ParamLimits

0xe769,	// (0x0007ffca) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0008173c) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0008173c) wgtman_btn_pane_t

0xa753,	// (0x0007bfb4) listrow_wgtman_pane_ParamLimits

0xa753,	// (0x0007bfb4) listrow_wgtman_pane

0xa764,	// (0x0007bfc5) listrow_wgtman_pane_g1

0xa771,	// (0x0007bfd2) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x00081741) listrow_wgtman_pane_g

0x1aa1,	// (0x00073302) listrow_wgtman_pane_t1

0x1ab9,	// (0x0007331a) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x00081746) listrow_wgtman_pane_t

0x1adf,	// (0x00073340) wait_bar_pane_cp09

0xe780,	// (0x0007ffe1) main_calllock_btn_pane

0xe788,	// (0x0007ffe9) main_calllock_pane_g1

0x1bb2,	// (0x00073413) bg_button_pane_cp17

0xe791,	// (0x0007fff2) main_calllock_btn_pane_g1

0xe79a,	// (0x0007fffb) main_calllock_btn_pane_t1

0x1bb2,	// (0x00073413) main_dialer3_pane

0x1bb2,	// (0x00073413) main_fmrd2_pane

0xc38e,	// (0x0007dbef) main_fs_bigclock_unlock_btn_pane_g1

0xe7b1,	// (0x00080012) main_fs_bigclock_unlock_btn_pane_t1

0xa789,	// (0x0007bfea) area_fmrd2_info_pane_ParamLimits

0xa789,	// (0x0007bfea) area_fmrd2_info_pane

0xa798,	// (0x0007bff9) area_fmrd2_visual_pane_ParamLimits

0xa798,	// (0x0007bff9) area_fmrd2_visual_pane

0xa7a6,	// (0x0007c007) fmrd2_indi_pane_ParamLimits

0xa7a6,	// (0x0007c007) fmrd2_indi_pane

0xa7b3,	// (0x0007c014) area_fmrd2_visual_pane_g1

0xa7bb,	// (0x0007c01c) area_fmrd2_visual_pane_t1

0xa7c9,	// (0x0007c02a) area_fmrd2_visual_pane_t2

0xa7d7,	// (0x0007c038) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x00081750) area_fmrd2_visual_pane_t

0xa7e5,	// (0x0007c046) area_fmrd2_info_pane_g1

0xa7ed,	// (0x0007c04e) area_fmrd2_info_pane_t1

0xa7fb,	// (0x0007c05c) area_fmrd2_info_pane_t2

0xa809,	// (0x0007c06a) area_fmrd2_info_pane_t3

0xa817,	// (0x0007c078) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x00081757) area_fmrd2_info_pane_t

0xa825,	// (0x0007c086) fmrd2_indi_pane_t1

0xa833,	// (0x0007c094) fmrd2_indi_pane_t2

0xa841,	// (0x0007c0a2) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x00081760) fmrd2_indi_pane_t

0xd9ab,	// (0x0007f20c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd9ab,	// (0x0007f20c) list_single_fs_bigclock_indicator_pane_g5

0xda59,	// (0x0007f2ba) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xda59,	// (0x0007f2ba) list_single_fs_bigclock_indicator_pane_t5

0xa151,	// (0x0007b9b2) aid_cell_bcale_month_pane_ParamLimits

0xa151,	// (0x0007b9b2) aid_cell_bcale_month_pane

0xa16f,	// (0x0007b9d0) bcale_month_pane_ParamLimits

0xa16f,	// (0x0007b9d0) bcale_month_pane

0xa187,	// (0x0007b9e8) bcale_preview_pane_ParamLimits

0xa187,	// (0x0007b9e8) bcale_preview_pane

0xe569,	// (0x0007fdca) list_single_fs_bigclock_pane_t1_ParamLimits

0xe588,	// (0x0007fde9) list_single_fs_bigclock_pane_t2_ParamLimits

0xe588,	// (0x0007fde9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x000816e2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x000816e2) list_single_fs_bigclock_pane_t

0xe7a9,	// (0x0008000a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0008174b) main_fs_bigclock_unlock_btn_pane_g

0xa84f,	// (0x0007c0b0) aid_dia3_key_size_ParamLimits

0xa84f,	// (0x0007c0b0) aid_dia3_key_size

0xa85e,	// (0x0007c0bf) aid_dia3_listrow_size_ParamLimits

0xa85e,	// (0x0007c0bf) aid_dia3_listrow_size

0xa871,	// (0x0007c0d2) dia3_keypad_fun_pane_ParamLimits

0xa871,	// (0x0007c0d2) dia3_keypad_fun_pane

0xa885,	// (0x0007c0e6) dia3_keypad_num_pane_ParamLimits

0xa885,	// (0x0007c0e6) dia3_keypad_num_pane

0xa896,	// (0x0007c0f7) dia3_listscroll_pane_ParamLimits

0xa896,	// (0x0007c0f7) dia3_listscroll_pane

0xa8a7,	// (0x0007c108) dia3_numentry_pane_ParamLimits

0xa8a7,	// (0x0007c108) dia3_numentry_pane

0xe7bf,	// (0x00080020) dia3_list_pane

0xe7c8,	// (0x00080029) scroll_pane_cp12

0x1bb2,	// (0x00073413) bg_dia3_numentry_pane

0xa8b9,	// (0x0007c11a) dia3_numentry_pane_t1

0xa8c8,	// (0x0007c129) cell_dia3_key_num_pane

0xa8d0,	// (0x0007c131) cell_dia3_key0_fun_pane_ParamLimits

0xa8d0,	// (0x0007c131) cell_dia3_key0_fun_pane

0xa8e4,	// (0x0007c145) cell_dia3_key1_fun_pane_ParamLimits

0xa8e4,	// (0x0007c145) cell_dia3_key1_fun_pane

0xa8fb,	// (0x0007c15c) dia3_listrow_pane

0xd6f9,	// (0x0007ef5a) bg_dia3_numentry_pane_g1

0x1bb2,	// (0x00073413) bg_button_pane_cp21

0xe7d1,	// (0x00080032) cell_dia3_key_num_pane_t1

0xe7df,	// (0x00080040) cell_dia3_key_num_pane_t2

0xe7ee,	// (0x0008004f) cell_dia3_key_num_pane_t3

0xe7fd,	// (0x0008005e) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x00081767) cell_dia3_key_num_pane_t

0x1bb2,	// (0x00073413) bg_button_pane_cp19

0xe80c,	// (0x0008006d) cell_dia3_key0_fun_pane_g1

0x1bb2,	// (0x00073413) bg_button_pane_cp20

0xa90d,	// (0x0007c16e) cell_dia3_key1_fun_pane_g1

0xa915,	// (0x0007c176) area_left_week_number_pane

0xa921,	// (0x0007c182) area_top_day_name_pane

0xa932,	// (0x0007c193) frame_month_view_pane

0xe814,	// (0x00080075) grid_month_view_pane

0xa943,	// (0x0007c1a4) cell_top_day_name_pane_ParamLimits

0xa943,	// (0x0007c1a4) cell_top_day_name_pane

0xa966,	// (0x0007c1c7) cell_area_left_week_number_pane_ParamLimits

0xa966,	// (0x0007c1c7) cell_area_left_week_number_pane

0xa97a,	// (0x0007c1db) cell_month_view_pane_ParamLimits

0xa97a,	// (0x0007c1db) cell_month_view_pane

0xe822,	// (0x00080083) frm_month_g1

0xa99f,	// (0x0007c200) frm_month_g2

0xa9b0,	// (0x0007c211) frm_month_g3

0xa9c1,	// (0x0007c222) frm_month_g4

0xa9d2,	// (0x0007c233) frm_month_g5

0xa9e3,	// (0x0007c244) frm_month_g6

0xa9f4,	// (0x0007c255) frm_month_g7

0xe82f,	// (0x00080090) frm_month_g8

0xaa05,	// (0x0007c266) frm_month_g9

0xaa15,	// (0x0007c276) frm_month_g10

0xaa25,	// (0x0007c286) frm_month_g11

0xaa35,	// (0x0007c296) frm_month_g12

0xaa45,	// (0x0007c2a6) frm_month_g13

0xaa55,	// (0x0007c2b6) frm_month_g14

0xaa65,	// (0x0007c2c6) frm_month_g15

0xaa77,	// (0x0007c2d8) frm_month_g16

0x000f,

0xff0f,	// (0x00081770) frm_month_g

0xe83c,	// (0x0008009d) cell_top_day_name_pane_t1

0xaa89,	// (0x0007c2ea) cell_area_left_week_number_pane_g1

0xaa95,	// (0x0007c2f6) cell_area_left_week_number_pane_t1

0xc5bd,	// (0x0007de1e) cell_month_view_pane_g1

0xaaa8,	// (0x0007c309) cell_month_view_pane_t1

0x1bb2,	// (0x00073413) main_fps_pane

0xdc45,	// (0x0007f4a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdc45,	// (0x0007f4a6) cmail_ddmenu_btn02_pane_cp1

0xdc61,	// (0x0007f4c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc61,	// (0x0007f4c2) cmail_ddmenu_btn02_pane_cp2

0xa2e1,	// (0x0007bb42) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa2e1,	// (0x0007bb42) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x00081695) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x00081695) cmail_ddmenu_btn02_pane_g

0xa300,	// (0x0007bb61) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa300,	// (0x0007bb61) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0008169a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0008169a) cmail_ddmenu_btn02_pane_t

0xaabb,	// (0x0007c31c) fps_text_pane_ParamLimits

0xaabb,	// (0x0007c31c) fps_text_pane

0xaad1,	// (0x0007c332) main_fps_pane_g1_ParamLimits

0xaad1,	// (0x0007c332) main_fps_pane_g1

0xaae7,	// (0x0007c348) wait_bar_pane_cp010_ParamLimits

0xaae7,	// (0x0007c348) wait_bar_pane_cp010

0xe84f,	// (0x000800b0) fps_text_pane_t1_ParamLimits

0xe84f,	// (0x000800b0) fps_text_pane_t1

0xefd0,	// (0x00080831) cam4_image_uncrop_pane_g1

0xefd9,	// (0x0008083a) cam4_image_uncrop_pane_g2

0x81ec,	// (0x00079a4d) cam4_image_uncrop_pane_g3

0x81f5,	// (0x00079a56) cam4_image_uncrop_pane_g4

0x0003,

0xf8fc,	// (0x0008115d) cam4_image_uncrop_pane_g

0xa8fb,	// (0x0007c15c) dia3_listrow_pane_ParamLimits

0x1bb2,	// (0x00073413) main_phob2_pane

0x9fe7,	// (0x0007b848) cell_tport_appsw_pane_cp02_ParamLimits

0x9fe7,	// (0x0007b848) cell_tport_appsw_pane_cp02

0x9ff7,	// (0x0007b858) cell_tport_appsw_pane_cp03_ParamLimits

0x9ff7,	// (0x0007b858) cell_tport_appsw_pane_cp03

0x1bb2,	// (0x00073413) phob2_contact_card_pane

0x1bb2,	// (0x00073413) phob2_listscroll_pane

0xe867,	// (0x000800c8) phob2_list_pane

0xe86f,	// (0x000800d0) scroll_pane_cp034

0xaaf8,	// (0x0007c359) phob2_cc_data_pane_ParamLimits

0xaaf8,	// (0x0007c359) phob2_cc_data_pane

0xab15,	// (0x0007c376) phob2_cc_listscroll_pane_ParamLimits

0xab15,	// (0x0007c376) phob2_cc_listscroll_pane

0xa753,	// (0x0007bfb4) list_double_large_graphic_phob2_pane_ParamLimits

0xa753,	// (0x0007bfb4) list_double_large_graphic_phob2_pane

0xab31,	// (0x0007c392) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xab31,	// (0x0007c392) list_double_large_graphic_phob2_pane_g1

0x1af1,	// (0x00073352) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1af1,	// (0x00073352) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x00081791) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x00081791) list_double_large_graphic_phob2_pane_g

0x1afd,	// (0x0007335e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1afd,	// (0x0007335e) list_double_large_graphic_phob2_pane_t1

0x1b13,	// (0x00073374) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1b13,	// (0x00073374) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x00081796) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x00081796) list_double_large_graphic_phob2_pane_t

0x1bb2,	// (0x00073413) list_highlight_pane_cp024

0xab47,	// (0x0007c3a8) phob2_cc_button_pane

0xab4f,	// (0x0007c3b0) phob2_cc_data_pane_g1_ParamLimits

0xab4f,	// (0x0007c3b0) phob2_cc_data_pane_g1

0xab64,	// (0x0007c3c5) phob2_cc_data_pane_g2_ParamLimits

0xab64,	// (0x0007c3c5) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0008179b) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0008179b) phob2_cc_data_pane_g

0xab74,	// (0x0007c3d5) phob2_cc_data_pane_t1_ParamLimits

0xab74,	// (0x0007c3d5) phob2_cc_data_pane_t1

0xab8c,	// (0x0007c3ed) phob2_cc_data_pane_t2_ParamLimits

0xab8c,	// (0x0007c3ed) phob2_cc_data_pane_t2

0xaba4,	// (0x0007c405) phob2_cc_data_pane_t3_ParamLimits

0xaba4,	// (0x0007c405) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x000817a0) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x000817a0) phob2_cc_data_pane_t

0xe877,	// (0x000800d8) phob2_cc_list_pane_ParamLimits

0xe877,	// (0x000800d8) phob2_cc_list_pane

0xce74,	// (0x0007e6d5) scroll_pane_cp035_ParamLimits

0xce74,	// (0x0007e6d5) scroll_pane_cp035

0xad52,	// (0x0007c5b3) bg_button_pane_cp033

0xe883,	// (0x000800e4) phob2_cc_button_pane_g1

0xe88f,	// (0x000800f0) phob2_cc_button_pane_t1

0xe8a4,	// (0x00080105) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x000817a7) phob2_cc_button_pane_t

0xabbc,	// (0x0007c41d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xabbc,	// (0x0007c41d) list_double_large_graphic_phob2_cc_pane

0xabcd,	// (0x0007c42e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xabcd,	// (0x0007c42e) list_double_large_graphic_phob2_cc_pane_g1

0xabd9,	// (0x0007c43a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xabd9,	// (0x0007c43a) list_double_large_graphic_phob2_cc_pane_g2

0x1b28,	// (0x00073389) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1b28,	// (0x00073389) list_double_large_graphic_phob2_cc_pane_g3

0x1b34,	// (0x00073395) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1b34,	// (0x00073395) list_double_large_graphic_phob2_cc_pane_g4

0x1b40,	// (0x000733a1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1b40,	// (0x000733a1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x000817ac) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x000817ac) list_double_large_graphic_phob2_cc_pane_g

0x1b4c,	// (0x000733ad) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1b4c,	// (0x000733ad) list_double_large_graphic_phob2_cc_pane_t1

0x1b75,	// (0x000733d6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1b75,	// (0x000733d6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x000817b7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x000817b7) list_double_large_graphic_phob2_cc_pane_t

0xe8b6,	// (0x00080117) list_highlight_pane_cp025_ParamLimits

0xe8b6,	// (0x00080117) list_highlight_pane_cp025

0xad52,	// (0x0007c5b3) bg_button_pane_cp033_ParamLimits

0xe883,	// (0x000800e4) phob2_cc_button_pane_g1_ParamLimits

0xe88f,	// (0x000800f0) phob2_cc_button_pane_t1_ParamLimits

0xe8a4,	// (0x00080105) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x000817a7) phob2_cc_button_pane_t_ParamLimits

0x1db9,	// (0x0007361a) popup_wgtman_window

0xcc5c,	// (0x0007e4bd) scroll_pane_cp038

0xa6cc,	// (0x0007bf2d) wgtman_btn_pane_cp_01_ParamLimits

0xa6cc,	// (0x0007bf2d) wgtman_btn_pane_cp_01

0xe8c4,	// (0x00080125) wgtman_content_pane

0xe8cd,	// (0x0008012e) wgtman_heading_pane

0x1bb2,	// (0x00073413) bg_heading_pane_cp02

0xe8d6,	// (0x00080137) wgtman_heading_pane_g1

0xe8de,	// (0x0008013f) wgtman_heading_pane_t1

0xe8ec,	// (0x0008014d) scroll_pane_cp036

0xe8f4,	// (0x00080155) wgtman_list_pane

0xdb44,	// (0x0007f3a5) wgtman_list_pane_t1_ParamLimits

0xdb44,	// (0x0007f3a5) wgtman_list_pane_t1

0xec95,	// (0x000804f6) cam4_grid_pane

0x11d3,	// (0x00072a34) bg_button_pane_cp015_ParamLimits

0x8d0c,	// (0x0007a56d) bg_button_pane_cp016_ParamLimits

0x8d1e,	// (0x0007a57f) bg_button_pane_cp017_ParamLimits

0x1211,	// (0x00072a72) popup_vitu2_query_window_g3_ParamLimits

0x1211,	// (0x00072a72) popup_vitu2_query_window_g3

0x128a,	// (0x00072aeb) popup_vitu2_query_window_t6_ParamLimits

0x128a,	// (0x00072aeb) popup_vitu2_query_window_t6

0x12b5,	// (0x00072b16) popup_vitu2_query_window_t7_ParamLimits

0x12b5,	// (0x00072b16) popup_vitu2_query_window_t7

0xefd0,	// (0x00080831) cam4_grid_pane_g1

0xefd9,	// (0x0008083a) cam4_grid_pane_g2

0xe8fc,	// (0x0008015d) cam4_grid_pane_g3

0xe905,	// (0x00080166) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x000817bc) cam4_grid_pane_g

0x3563,	// (0x00074dc4) aid_placing_vt_slider_lsc_ParamLimits

0x381e,	// (0x0007507f) vidtel_button_pane_ParamLimits

0x381e,	// (0x0007507f) vidtel_button_pane

0x1bb2,	// (0x00073413) bg_button_pane_cp034

0xabe5,	// (0x0007c446) vidtel_button_pane_g1

0xabed,	// (0x0007c44e) vidtel_button_pane_t1

0xcdbb,	// (0x0007e61c) aid_size_vtel_slider_touch

0xce74,	// (0x0007e6d5) scroll_pane_cp039

0x993b,	// (0x0007b19c) ncim_query_button_pane_cp01_ParamLimits

0x995a,	// (0x0007b1bb) ncimui_query_pane_g1_ParamLimits

0xad52,	// (0x0007c5b3) input_focus_pane_cp012_ParamLimits

0xd73f,	// (0x0007efa0) ncim_query_entry_pane_t1_ParamLimits

0xce74,	// (0x0007e6d5) scroll_pane_cp039_ParamLimits

0x4e5c,	// (0x000766bd) navi_pane_bcale_mc_g1

0x4e64,	// (0x000766c5) navi_pane_bcale_mc_t1

0xdcaa,	// (0x0007f50b) main_sp_fs_email_pane_g1

0xdcb6,	// (0x0007f517) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0008154d) main_sp_fs_email_pane_g

0xe191,	// (0x0007f9f2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe191,	// (0x0007f9f2) list_single_cale_mrui_row_pane_g3

0x1a65,	// (0x000732c6) list_single_recal_day_pane_g5_event_pane

0xe3d3,	// (0x0007fc34) list_single_recal_day_pane_g7

0xe90e,	// (0x0008016f) list_recal_day_event_pane_cp01

0xe917,	// (0x00080178) list_recal_vselct_arw_lo_pane_cp01

0xe91f,	// (0x00080180) list_recal_vselct_arw_up_pane_cp01

0xe927,	// (0x00080188) list_recal_vselct_pane_cp01

0xcdcb,	// (0x0007e62c) list_recal_day_event_pane_cp01_g1

0xe931,	// (0x00080192) list_recal_day_event_pane_cp01_t1

0xe3db,	// (0x0007fc3c) list_single_recal_day_pane_t1_ParamLimits

0xe3ed,	// (0x0007fc4e) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x000816aa) list_single_recal_day_pane_t_ParamLimits

0x24cd,	// (0x00073d2e) bg_notes_pane_ParamLimits

0x27cb,	// (0x0007402c) list_notes_pane_ParamLimits

0x27d9,	// (0x0007403a) scroll_pane_cp06_ParamLimits

0x27ff,	// (0x00074060) main_notes_pane_ParamLimits

0x1bb2,	// (0x00073413) main_welc_pane

0xac03,	// (0x0007c464) main_welc_body_pane_ParamLimits

0xac03,	// (0x0007c464) main_welc_body_pane

0xac1f,	// (0x0007c480) main_welc_opti_pane_ParamLimits

0xac1f,	// (0x0007c480) main_welc_opti_pane

0xac5c,	// (0x0007c4bd) main_welc_pane_t1_ParamLimits

0xac5c,	// (0x0007c4bd) main_welc_pane_t1

0xe93f,	// (0x000801a0) main_welc_body_row_pane_ParamLimits

0xe93f,	// (0x000801a0) main_welc_body_row_pane

0xe952,	// (0x000801b3) main_welc_opti_row_pane_ParamLimits

0xe952,	// (0x000801b3) main_welc_opti_row_pane

0xe960,	// (0x000801c1) main_welc_opti_row_pane_g1

0xac76,	// (0x0007c4d7) main_welc_opti_row_pane_t1

0xe968,	// (0x000801c9) main_welc_body_row_pane_t1

0xe648,	// (0x0007fea9) popup_notif_wgt_heading_pane

0xe662,	// (0x0007fec3) aid_size_list_notif_wgt_del_ParamLimits

0xe66f,	// (0x0007fed0) list_notif_wgt_row_pane_g1_ParamLimits

0xe67b,	// (0x0007fedc) list_notif_wgt_row_pane_g2_ParamLimits

0xe68a,	// (0x0007feeb) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x00081711) list_notif_wgt_row_pane_g_ParamLimits

0xe697,	// (0x0007fef8) list_notif_wgt_row_pane_t1_ParamLimits

0xe6ad,	// (0x0007ff0e) list_notif_wgt_row_pane_t2_ParamLimits

0xe6bf,	// (0x0007ff20) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x00081718) list_notif_wgt_row_pane_t_ParamLimits

0xa764,	// (0x0007bfc5) listrow_wgtman_pane_g1_ParamLimits

0xa771,	// (0x0007bfd2) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x00081741) listrow_wgtman_pane_g_ParamLimits

0x1aa1,	// (0x00073302) listrow_wgtman_pane_t1_ParamLimits

0x1ab9,	// (0x0007331a) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x00081746) listrow_wgtman_pane_t_ParamLimits

0x1adf,	// (0x00073340) wait_bar_pane_cp09_ParamLimits

0x1bb2,	// (0x00073413) bg_popup_heading_pane_cp02

0xe977,	// (0x000801d8) popup_notif_wgt_heading_pane_g1

0xe97f,	// (0x000801e0) popup_notif_wgt_heading_pane_t1

0x1bb2,	// (0x00073413) main_vids_pane

0x1bb2,	// (0x00073413) vids_listscroll_pane

0xac85,	// (0x0007c4e6) scroll_pane_cp040

0x1bb2,	// (0x00073413) vids_list_pane

0xac90,	// (0x0007c4f1) vids_list_double_pane_ParamLimits

0xac90,	// (0x0007c4f1) vids_list_double_pane

0xaca0,	// (0x0007c501) vids_list_double_pane_g1

0xaca9,	// (0x0007c50a) vids_list_double_pane_t1

0xacb8,	// (0x0007c519) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x000817ca) vids_list_double_pane_t

0xad52,	// (0x0007c5b3) main_ncimui_pane_ParamLimits

0x9773,	// (0x0007afd4) main_ncimui_pane_g1_ParamLimits

0x977f,	// (0x0007afe0) main_ncimui_pane_g2_ParamLimits

0x977f,	// (0x0007afe0) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x00081452) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x00081452) main_ncimui_pane_g

0xac36,	// (0x0007c497) main_welc_pane_g1_ParamLimits

0xac36,	// (0x0007c497) main_welc_pane_g1

0xac49,	// (0x0007c4aa) main_welc_pane_g2_ParamLimits

0xac49,	// (0x0007c4aa) main_welc_pane_g2

0x0001,

0xff64,	// (0x000817c5) main_welc_pane_g_ParamLimits

0xff64,	// (0x000817c5) main_welc_pane_g

0x24cd,	// (0x00073d2e) listscroll_mce_pane_ParamLimits

0x4ff1,	// (0x00076852) wait_bar_pane_cp10

0xbeed,	// (0x0007d74e) main_cale_day_pane_ParamLimits

0xbeed,	// (0x0007d74e) main_cale_week_pane_ParamLimits

0x24cd,	// (0x00073d2e) main_messa_pane_ParamLimits

0x75c4,	// (0x00078e25) main_clock2_btn_pane_ParamLimits

0x75c4,	// (0x00078e25) main_clock2_btn_pane

0xc760,	// (0x0007dfc1) main_clock2_btn_pane_cp01_ParamLimits

0xc760,	// (0x0007dfc1) main_clock2_btn_pane_cp01

0xe11d,	// (0x0007f97e) list_cale_mrui_pane_ParamLimits

0xe6f3,	// (0x0007ff54) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0008171f) main_cf0_pane_g

0xa915,	// (0x0007c176) area_left_week_number_pane_ParamLimits

0xa921,	// (0x0007c182) area_top_day_name_pane_ParamLimits

0xa932,	// (0x0007c193) frame_month_view_pane_ParamLimits

0xe814,	// (0x00080075) grid_month_view_pane_ParamLimits

0xe822,	// (0x00080083) frm_month_g1_ParamLimits

0xa99f,	// (0x0007c200) frm_month_g2_ParamLimits

0xa9b0,	// (0x0007c211) frm_month_g3_ParamLimits

0xa9c1,	// (0x0007c222) frm_month_g4_ParamLimits

0xa9d2,	// (0x0007c233) frm_month_g5_ParamLimits

0xa9e3,	// (0x0007c244) frm_month_g6_ParamLimits

0xa9f4,	// (0x0007c255) frm_month_g7_ParamLimits

0xe82f,	// (0x00080090) frm_month_g8_ParamLimits

0xaa05,	// (0x0007c266) frm_month_g9_ParamLimits

0xaa15,	// (0x0007c276) frm_month_g10_ParamLimits

0xaa25,	// (0x0007c286) frm_month_g11_ParamLimits

0xaa35,	// (0x0007c296) frm_month_g12_ParamLimits

0xaa45,	// (0x0007c2a6) frm_month_g13_ParamLimits

0xaa55,	// (0x0007c2b6) frm_month_g14_ParamLimits

0xaa65,	// (0x0007c2c6) frm_month_g15_ParamLimits

0xaa77,	// (0x0007c2d8) frm_month_g16_ParamLimits

0xff0f,	// (0x00081770) frm_month_g_ParamLimits

0xe83c,	// (0x0008009d) cell_top_day_name_pane_t1_ParamLimits

0xaa89,	// (0x0007c2ea) cell_area_left_week_number_pane_g1_ParamLimits

0xaa95,	// (0x0007c2f6) cell_area_left_week_number_pane_t1_ParamLimits

0xc5bd,	// (0x0007de1e) cell_month_view_pane_g1_ParamLimits

0xaaa8,	// (0x0007c309) cell_month_view_pane_t1_ParamLimits

0x24c5,	// (0x00073d26) main_clock2_btn_pane_g1

0xe98d,	// (0x000801ee) main_clock2_btn_pane_t1

0xad52,	// (0x0007c5b3) listscroll_cmail_pane_ParamLimits

0xdcaa,	// (0x0007f50b) main_sp_fs_email_pane_g1_ParamLimits

0xdcb6,	// (0x0007f517) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0008154d) main_sp_fs_email_pane_g_ParamLimits

0xe343,	// (0x0007fba4) list_recal_day_pane_ParamLimits

0xe354,	// (0x0007fbb5) mian_recal_day_pane_t1

0x16b0,	// (0x00072f11) list_single_dyc_row_text_pane_t4_ParamLimits

0x16b0,	// (0x00072f11) list_single_dyc_row_text_pane_t4

0x16e7,	// (0x00072f48) list_single_dyc_row_text_pane_t5_ParamLimits

0x16e7,	// (0x00072f48) list_single_dyc_row_text_pane_t5

0xdd7e,	// (0x0007f5df) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd7e,	// (0x0007f5df) list_single_dyc_row_text_pane_t6

0x463d,	// (0x00075e9e) aid_mgn_list_cale_time_pane

0xad52,	// (0x0007c5b3) main_gallery2_pane_ParamLimits

0xc774,	// (0x0007dfd5) main_clock2_pane_cp01_t1

0xc782,	// (0x0007dfe3) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x00081038) main_clock2_pane_cp01_t

0x2c90,	// (0x000744f1) cale_week_scroll_pane_g16_ParamLimits

0x2c90,	// (0x000744f1) cale_week_scroll_pane_g16

0x3128,	// (0x00074989) vorec_slider_pane

0xabed,	// (0x0007c44e) vidtel_button_pane_t1_ParamLimits

0xa369,	// (0x0007bbca) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa369,	// (0x0007bbca) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa37a,	// (0x0007bbdb) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa37a,	// (0x0007bbdb) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe6c,	// (0x000816cd) main_fs_bigclock_clock_pane_g_ParamLimits

0xa38d,	// (0x0007bbee) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa3a3,	// (0x0007bc04) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe75,	// (0x000816d6) main_fs_bigclock_clock_pane_t_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large

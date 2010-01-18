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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00032985 };

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
0x44f9,	// (0x00036e7e) Screen

0x4505,	// (0x00036e8a) application_window

0x456b,	// (0x00036ef0) area_bottom_pane_ParamLimits

0x456b,	// (0x00036ef0) area_bottom_pane

0x45c4,	// (0x00036f49) area_top_pane_ParamLimits

0x45c4,	// (0x00036f49) area_top_pane

0xbdbf,	// (0x0003e744) call_video_uplink_pane_ParamLimits

0xbdbf,	// (0x0003e744) call_video_uplink_pane

0x4651,	// (0x00036fd6) main_pane_ParamLimits

0x4651,	// (0x00036fd6) main_pane

0xe47a,	// (0x00040dff) context_pane

0x767a,	// (0x00039fff) navi_pane

0x769a,	// (0x0003a01f) popup_cale_events_window_ParamLimits

0x769a,	// (0x0003a01f) popup_cale_events_window

0xe48d,	// (0x00040e12) popup_mup_playback_window

0x76b2,	// (0x0003a037) signal_pane

0xc558,	// (0x0003eedd) main_browser_pane

0xcfe0,	// (0x0003f965) main_burst_pane

0x7550,	// (0x00039ed5) main_calc_pane

0xcfe0,	// (0x0003f965) main_cale_day_pane

0xc558,	// (0x0003eedd) main_cale_month_pane

0xcfe0,	// (0x0003f965) main_cale_week_pane

0xcfe0,	// (0x0003f965) main_call_pane

0xc1ee,	// (0x0003eb73) main_call_poc_pane

0xcfe0,	// (0x0003f965) main_camera_pane

0xcfe0,	// (0x0003f965) main_chi_dic_pane

0xce6f,	// (0x0003f7f4) main_clock_pane

0xc1ee,	// (0x0003eb73) main_fmradio_pane

0xcfe0,	// (0x0003f965) main_graph_messa_pane

0xc1ee,	// (0x0003eb73) main_help_pane

0xc558,	// (0x0003eedd) main_im_pane

0xc449,	// (0x0003edce) main_image_pane_ParamLimits

0xc449,	// (0x0003edce) main_image_pane

0xc1ee,	// (0x0003eb73) main_location2_pane

0xcfe0,	// (0x0003f965) main_location_pane

0xc1ee,	// (0x0003eb73) main_messa_pane

0xc1ee,	// (0x0003eb73) main_mp2_pane

0xcfe0,	// (0x0003f965) main_mp_pane

0xc1ee,	// (0x0003eb73) main_msg_pane

0xc1ee,	// (0x0003eb73) main_mup_eq_pane

0xc1ee,	// (0x0003eb73) main_mup_pane

0xcfe0,	// (0x0003f965) main_notes_pane

0xc1ee,	// (0x0003eb73) main_pec_pane

0xc1ee,	// (0x0003eb73) main_phob_pane

0xc1ee,	// (0x0003eb73) main_pinb_pane

0xc1ee,	// (0x0003eb73) main_postcard_pane

0xc1ee,	// (0x0003eb73) main_qdial_pane

0xcfe0,	// (0x0003f965) main_skin_pane

0xc1ee,	// (0x0003eb73) main_smil2_pane

0xcfe0,	// (0x0003f965) main_smil_pane

0xcfe0,	// (0x0003f965) main_video_pane

0xcfe0,	// (0x0003f965) main_video_tele_pane

0xc449,	// (0x0003edce) main_viewer_pane_ParamLimits

0xc449,	// (0x0003edce) main_viewer_pane

0xcfe0,	// (0x0003f965) main_vorec_pane

0x7586,	// (0x00039f0b) popup_blid_sat_info_window_ParamLimits

0x7586,	// (0x00039f0b) popup_blid_sat_info_window

0x759c,	// (0x00039f21) popup_dyc_status_message_window_ParamLimits

0x759c,	// (0x00039f21) popup_dyc_status_message_window

0x75aa,	// (0x00039f2f) popup_grid_large_graphic_window_ParamLimits

0x75aa,	// (0x00039f2f) popup_grid_large_graphic_window

0x761e,	// (0x00039fa3) popup_loc_request_window_ParamLimits

0x761e,	// (0x00039fa3) popup_loc_request_window

0x7652,	// (0x00039fd7) popup_wml_address_window_ParamLimits

0x7652,	// (0x00039fd7) popup_wml_address_window

0x7428,	// (0x00039dad) call_muted_g1

0x70e7,	// (0x00039a6c) popup_call_audio_conf_window_ParamLimits

0x70e7,	// (0x00039a6c) popup_call_audio_conf_window

0x7438,	// (0x00039dbd) popup_call_audio_first_window_ParamLimits

0x7438,	// (0x00039dbd) popup_call_audio_first_window

0x7478,	// (0x00039dfd) popup_call_audio_in_window_ParamLimits

0x7478,	// (0x00039dfd) popup_call_audio_in_window

0x749c,	// (0x00039e21) popup_call_audio_out_window_ParamLimits

0x749c,	// (0x00039e21) popup_call_audio_out_window

0x74be,	// (0x00039e43) popup_call_audio_second_window_ParamLimits

0x74be,	// (0x00039e43) popup_call_audio_second_window

0x74ee,	// (0x00039e73) popup_call_audio_wait_window_ParamLimits

0x74ee,	// (0x00039e73) popup_call_audio_wait_window

0x750f,	// (0x00039e94) popup_number_entry_window_ParamLimits

0x750f,	// (0x00039e94) popup_number_entry_window

0xbddd,	// (0x0003e762) bg_popup_call_pane_cp05_ParamLimits

0xbddd,	// (0x0003e762) bg_popup_call_pane_cp05

0xbdfd,	// (0x0003e782) popup_number_entry_window_t1

0xbe10,	// (0x0003e795) popup_number_entry_window_t2

0xbe22,	// (0x0003e7a7) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00041a71) popup_number_entry_window_t

0xbe34,	// (0x0003e7b9) text_title_cp2

0xbe47,	// (0x0003e7cc) bg_popup_call_pane_cp_ParamLimits

0xbe47,	// (0x0003e7cc) bg_popup_call_pane_cp

0xbe55,	// (0x0003e7da) call_thumbnail_pane

0xbe5d,	// (0x0003e7e2) popup_call_audio_in_window_g1_ParamLimits

0xbe5d,	// (0x0003e7e2) popup_call_audio_in_window_g1

0xbe69,	// (0x0003e7ee) popup_call_audio_in_window_g2_ParamLimits

0xbe69,	// (0x0003e7ee) popup_call_audio_in_window_g2

0xbe75,	// (0x0003e7fa) popup_call_audio_in_window_g3_ParamLimits

0xbe75,	// (0x0003e7fa) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00041a7a) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00041a7a) popup_call_audio_in_window_g

0xbe81,	// (0x0003e806) popup_call_audio_in_window_t1_ParamLimits

0xbe81,	// (0x0003e806) popup_call_audio_in_window_t1

0xbe9c,	// (0x0003e821) popup_call_audio_in_window_t2_ParamLimits

0xbe9c,	// (0x0003e821) popup_call_audio_in_window_t2

0xbeb7,	// (0x0003e83c) popup_call_audio_in_window_t3_ParamLimits

0xbeb7,	// (0x0003e83c) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00041a81) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00041a81) popup_call_audio_in_window_t

0xbe47,	// (0x0003e7cc) bg_popup_call_pane_cp01_ParamLimits

0xbe47,	// (0x0003e7cc) bg_popup_call_pane_cp01

0xbe55,	// (0x0003e7da) call_thumbnail_pane_cp02

0xbeca,	// (0x0003e84f) call_type_pane_cp022

0xbed2,	// (0x0003e857) popup_call_audio_out_window_g1_ParamLimits

0xbed2,	// (0x0003e857) popup_call_audio_out_window_g1

0xbee4,	// (0x0003e869) popup_call_audio_out_window_g2_ParamLimits

0xbee4,	// (0x0003e869) popup_call_audio_out_window_g2

0xbef0,	// (0x0003e875) popup_call_audio_out_window_g3_ParamLimits

0xbef0,	// (0x0003e875) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00041a88) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00041a88) popup_call_audio_out_window_g

0xbf02,	// (0x0003e887) popup_call_audio_out_window_t1_ParamLimits

0xbf02,	// (0x0003e887) popup_call_audio_out_window_t1

0xbf1a,	// (0x0003e89f) popup_call_audio_out_window_t2_ParamLimits

0xbf1a,	// (0x0003e89f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00041a8f) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00041a8f) popup_call_audio_out_window_t

0xbf2f,	// (0x0003e8b4) bg_popup_call_pane_ParamLimits

0xbf2f,	// (0x0003e8b4) bg_popup_call_pane

0x4852,	// (0x000371d7) call_thumbnail_pane_cp_ParamLimits

0x4852,	// (0x000371d7) call_thumbnail_pane_cp

0xbfb3,	// (0x0003e938) call_type_pane_cp01_ParamLimits

0xbfb3,	// (0x0003e938) call_type_pane_cp01

0xbff7,	// (0x0003e97c) popup_call_audio_first_window_g1_ParamLimits

0xbff7,	// (0x0003e97c) popup_call_audio_first_window_g1

0xc043,	// (0x0003e9c8) popup_call_audio_first_window_g2_ParamLimits

0xc043,	// (0x0003e9c8) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00041a94) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00041a94) popup_call_audio_first_window_g

0xc087,	// (0x0003ea0c) popup_call_audio_first_window_t1_ParamLimits

0xc087,	// (0x0003ea0c) popup_call_audio_first_window_t1

0xc133,	// (0x0003eab8) popup_call_audio_first_window_t4_ParamLimits

0xc133,	// (0x0003eab8) popup_call_audio_first_window_t4

0xc1bf,	// (0x0003eb44) popup_call_audio_first_window_t5_ParamLimits

0xc1bf,	// (0x0003eb44) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00041a99) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00041a99) popup_call_audio_first_window_t

0xc1ee,	// (0x0003eb73) bg_popup_call_pane_cp02

0xc1f8,	// (0x0003eb7d) call_type_pane_cp023

0xc200,	// (0x0003eb85) popup_call_audio_wait_window_g1

0xc208,	// (0x0003eb8d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041aa0) popup_call_audio_wait_window_g

0xc210,	// (0x0003eb95) popup_call_audio_wait_window_t3

0xc21e,	// (0x0003eba3) bg_popup_call_pane_cp03_ParamLimits

0xc21e,	// (0x0003eba3) bg_popup_call_pane_cp03

0xc27e,	// (0x0003ec03) call_thumbnail_pane_cp011_ParamLimits

0xc27e,	// (0x0003ec03) call_thumbnail_pane_cp011

0xc28a,	// (0x0003ec0f) call_type_pane_cp034_ParamLimits

0xc28a,	// (0x0003ec0f) call_type_pane_cp034

0xc2c6,	// (0x0003ec4b) popup_call_audio_second_window_g1_ParamLimits

0xc2c6,	// (0x0003ec4b) popup_call_audio_second_window_g1

0xc302,	// (0x0003ec87) popup_call_audio_second_window_g2_ParamLimits

0xc302,	// (0x0003ec87) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00041aa5) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00041aa5) popup_call_audio_second_window_g

0xc33e,	// (0x0003ecc3) popup_call_audio_second_window_t1_ParamLimits

0xc33e,	// (0x0003ecc3) popup_call_audio_second_window_t1

0xc3bf,	// (0x0003ed44) popup_call_audio_second_window_t2_ParamLimits

0xc3bf,	// (0x0003ed44) popup_call_audio_second_window_t2

0xc3f5,	// (0x0003ed7a) popup_call_audio_second_window_t3_ParamLimits

0xc3f5,	// (0x0003ed7a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00041aaa) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00041aaa) popup_call_audio_second_window_t

0xc1ee,	// (0x0003eb73) bg_popup_call_pane_cp04

0xc42b,	// (0x0003edb0) list_conf_pane

0xc433,	// (0x0003edb8) popup_call_audio_conf_window_t1

0xc441,	// (0x0003edc6) call_thumbnail_pane_g1

0xc449,	// (0x0003edce) bg_pinb_pane_ParamLimits

0xc449,	// (0x0003edce) bg_pinb_pane

0xc457,	// (0x0003eddc) find_pinb_pane

0xc460,	// (0x0003ede5) listscroll_pinb_pane_ParamLimits

0xc460,	// (0x0003ede5) listscroll_pinb_pane

0xc46f,	// (0x0003edf4) pinb_bg_pane_g1

0x4876,	// (0x000371fb) pinb_bg_pane_g2

0x4882,	// (0x00037207) pinb_bg_pane_g3

0x488e,	// (0x00037213) pinb_bg_pane_g4

0x489a,	// (0x0003721f) pinb_bg_pane_g5

0x48a6,	// (0x0003722b) pinb_bg_pane_g6

0x48b1,	// (0x00037236) pinb_bg_pane_g7

0x48bc,	// (0x00037241) pinb_bg_pane_g8

0x48c7,	// (0x0003724c) pinb_bg_pane_g9

0x48d1,	// (0x00037256) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00041ab1) pinb_bg_pane_g

0x48e6,	// (0x0003726b) grid_pinb_pane

0x48f1,	// (0x00037276) list_pinb_pane

0x48fc,	// (0x00037281) scroll_pane_cp01_ParamLimits

0x48fc,	// (0x00037281) scroll_pane_cp01

0xc481,	// (0x0003ee06) find_pinb_pane_g1_ParamLimits

0xc481,	// (0x0003ee06) find_pinb_pane_g1

0xc499,	// (0x0003ee1e) find_pinb_pane_t1

0xc4ab,	// (0x0003ee30) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00041acb) find_pinb_pane_t

0xc4c0,	// (0x0003ee45) input_focus_pane_cp01_ParamLimits

0xc4c0,	// (0x0003ee45) input_focus_pane_cp01

0x490e,	// (0x00037293) cell_pinb_pane_ParamLimits

0x490e,	// (0x00037293) cell_pinb_pane

0x493c,	// (0x000372c1) cell_pinb_pane_g1_ParamLimits

0x493c,	// (0x000372c1) cell_pinb_pane_g1

0x4951,	// (0x000372d6) cell_pinb_pane_g2_ParamLimits

0x4951,	// (0x000372d6) cell_pinb_pane_g2

0xc4cc,	// (0x0003ee51) cell_pinb_pane_g3_ParamLimits

0xc4cc,	// (0x0003ee51) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00041ad0) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00041ad0) cell_pinb_pane_g

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp01

0x495d,	// (0x000372e2) list_pinb_item_pane_ParamLimits

0x495d,	// (0x000372e2) list_pinb_item_pane

0xc1ee,	// (0x0003eb73) list_highlight_pane_cp02

0xc4d8,	// (0x0003ee5d) list_pinb_item_pane_g1_ParamLimits

0xc4d8,	// (0x0003ee5d) list_pinb_item_pane_g1

0xc4e5,	// (0x0003ee6a) list_pinb_item_pane_g2_ParamLimits

0xc4e5,	// (0x0003ee6a) list_pinb_item_pane_g2

0x4987,	// (0x0003730c) list_pinb_item_pane_g3_ParamLimits

0x4987,	// (0x0003730c) list_pinb_item_pane_g3

0xc4f1,	// (0x0003ee76) list_pinb_item_pane_g4_ParamLimits

0xc4f1,	// (0x0003ee76) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00041ad7) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00041ad7) list_pinb_item_pane_g

0xc4fd,	// (0x0003ee82) list_pinb_item_pane_t1_ParamLimits

0xc4fd,	// (0x0003ee82) list_pinb_item_pane_t1

0x49b2,	// (0x00037337) calc_display_pane

0x49d0,	// (0x00037355) calc_paper_pane

0x49ec,	// (0x00037371) grid_calc_pane

0xc1ee,	// (0x0003eb73) bg_list_pane_cp01

0x4a18,	// (0x0003739d) clock_g1

0x4a20,	// (0x000373a5) clock_g2

0x0001,

0xf15b,	// (0x00041ae0) clock_g

0x4a2a,	// (0x000373af) clock_t1_ParamLimits

0x4a2a,	// (0x000373af) clock_t1

0x4a3f,	// (0x000373c4) clock_t2_ParamLimits

0x4a3f,	// (0x000373c4) clock_t2

0x4a51,	// (0x000373d6) clock_t3_ParamLimits

0x4a51,	// (0x000373d6) clock_t3

0x4a63,	// (0x000373e8) clock_t4_ParamLimits

0x4a63,	// (0x000373e8) clock_t4

0x4a75,	// (0x000373fa) clock_t5_ParamLimits

0x4a75,	// (0x000373fa) clock_t5

0x4a8a,	// (0x0003740f) clock_t6_ParamLimits

0x4a8a,	// (0x0003740f) clock_t6

0x4a9c,	// (0x00037421) clock_t7_ParamLimits

0x4a9c,	// (0x00037421) clock_t7

0x4aae,	// (0x00037433) clock_t8_ParamLimits

0x4aae,	// (0x00037433) clock_t8

0x4ac4,	// (0x00037449) clock_t9_ParamLimits

0x4ac4,	// (0x00037449) clock_t9

0x0008,

0xf160,	// (0x00041ae5) clock_t_ParamLimits

0xf160,	// (0x00041ae5) clock_t

0xc514,	// (0x0003ee99) popup_clock_analogue_window_cp02

0xc514,	// (0x0003ee99) popup_clock_digital_window_cp01

0xc51c,	// (0x0003eea1) listscroll_help_pane

0xc1ee,	// (0x0003eb73) phob_pre_status_pane

0xc526,	// (0x0003eeab) grid_qdial_pane

0xc1ee,	// (0x0003eb73) listscroll_mce_pane

0xc530,	// (0x0003eeb5) bg_notes_pane

0xc53a,	// (0x0003eebf) list_notes_pane

0x4ada,	// (0x0003745f) scroll_pane_cp06

0xc544,	// (0x0003eec9) bg_calc_paper_pane

0x4ae5,	// (0x0003746a) list_calc_pane

0xc558,	// (0x0003eedd) bg_calc_display_pane

0x4aff,	// (0x00037484) calc_display_pane_t1

0x4b14,	// (0x00037499) calc_display_pane_t2

0x4b29,	// (0x000374ae) calc_display_pane_t3

0x0002,

0xf173,	// (0x00041af8) calc_display_pane_t

0x4b3b,	// (0x000374c0) cell_calc_pane_ParamLimits

0x4b3b,	// (0x000374c0) cell_calc_pane

0xc564,	// (0x0003eee9) bg_calc_paper_pane_g1

0xc570,	// (0x0003eef5) bg_calc_paper_pane_g2

0xc57c,	// (0x0003ef01) bg_calc_paper_pane_g3

0xc588,	// (0x0003ef0d) bg_calc_paper_pane_g4

0xc594,	// (0x0003ef19) bg_calc_paper_pane_g5

0x4b68,	// (0x000374ed) bg_calc_paper_pane_g6

0x4b79,	// (0x000374fe) bg_calc_paper_pane_g7

0x4b8a,	// (0x0003750f) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00041aff) bg_calc_paper_pane_g

0x4b9b,	// (0x00037520) calc_bg_paper_pane_g9

0x4bac,	// (0x00037531) list_calc_item_pane_ParamLimits

0x4bac,	// (0x00037531) list_calc_item_pane

0xc5a0,	// (0x0003ef25) list_calc_item_pane_g1

0x4be6,	// (0x0003756b) list_calc_item_pane_t1_ParamLimits

0x4be6,	// (0x0003756b) list_calc_item_pane_t1

0x4bf8,	// (0x0003757d) list_calc_item_pane_t2_ParamLimits

0x4bf8,	// (0x0003757d) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00041b10) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00041b10) list_calc_item_pane_t

0xc5ad,	// (0x0003ef32) cell_calc_pane_g1

0xc5b7,	// (0x0003ef3c) grid_highlight_pane_cp02

0xc5d9,	// (0x0003ef5e) bg_calc_display_pane_g1

0x4c28,	// (0x000375ad) bg_calc_display_pane_g2

0xc5e2,	// (0x0003ef67) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00041b1a) bg_calc_display_pane_g

0x4c32,	// (0x000375b7) cell_qdial_pane_ParamLimits

0x4c32,	// (0x000375b7) cell_qdial_pane

0x4c46,	// (0x000375cb) cell_qdial_pane_g1_ParamLimits

0x4c46,	// (0x000375cb) cell_qdial_pane_g1

0x4c53,	// (0x000375d8) cell_qdial_pane_g2_ParamLimits

0x4c53,	// (0x000375d8) cell_qdial_pane_g2

0xc5eb,	// (0x0003ef70) cell_qdial_pane_g3_ParamLimits

0xc5eb,	// (0x0003ef70) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00041b21) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00041b21) cell_qdial_pane_g

0x4c71,	// (0x000375f6) cell_qdial_pane_t1_ParamLimits

0x4c71,	// (0x000375f6) cell_qdial_pane_t1

0x4c89,	// (0x0003760e) cell_qdial_pane_t2_ParamLimits

0x4c89,	// (0x0003760e) cell_qdial_pane_t2

0x4c9c,	// (0x00037621) cell_qdial_pane_t3_ParamLimits

0x4c9c,	// (0x00037621) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00041b2a) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00041b2a) cell_qdial_pane_t

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp04

0xc5f7,	// (0x0003ef7c) thumbnail_qdial_pane_ParamLimits

0xc5f7,	// (0x0003ef7c) thumbnail_qdial_pane

0xc653,	// (0x0003efd8) list_help_pane

0xc65c,	// (0x0003efe1) scroll_pane_cp02

0x4caf,	// (0x00037634) help_list_pane_t1_ParamLimits

0x4caf,	// (0x00037634) help_list_pane_t1

0x4ced,	// (0x00037672) bg_notes_pane_g2

0x4cf5,	// (0x0003767a) bg_notes_pane_g3

0x4cfd,	// (0x00037682) notes_bg_pane_g1

0x4d05,	// (0x0003768a) notes_bg_pane_g4

0x4d0d,	// (0x00037692) notes_bg_pane_g5

0x4d15,	// (0x0003769a) notes_bg_pane_g6

0x4d1d,	// (0x000376a2) notes_bg_pane_g7

0x4d25,	// (0x000376aa) notes_bg_pane_g8

0x4d2d,	// (0x000376b2) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00041b48) notes_bg_pane_g

0x4d35,	// (0x000376ba) list_notes_text_pane_ParamLimits

0x4d35,	// (0x000376ba) list_notes_text_pane

0xc665,	// (0x0003efea) list_notes_text_pane_g1

0x332c,	// (0x00035cb1) list_notes_text_pane_t1

0xc558,	// (0x0003eedd) listscroll_cale_week_pane

0x4d82,	// (0x00037707) bg_cale_heading_pane

0xc67f,	// (0x0003f004) bg_cale_pane_cp01

0x4d9e,	// (0x00037723) cale_week_corner_pane

0x4daf,	// (0x00037734) cale_week_day_heading_pane

0x4dcb,	// (0x00037750) cale_week_scroll_pane_g1

0x4de4,	// (0x00037769) cale_week_scroll_pane_g2

0x4df5,	// (0x0003777a) cale_week_scroll_pane_g3

0x4e06,	// (0x0003778b) cale_week_scroll_pane_g4

0x4e17,	// (0x0003779c) cale_week_scroll_pane_g5

0x4e28,	// (0x000377ad) cale_week_scroll_pane_g6

0x4e39,	// (0x000377be) cale_week_scroll_pane_g7

0x4e4c,	// (0x000377d1) cale_week_scroll_pane_g8

0x4e5f,	// (0x000377e4) cale_week_scroll_pane_g9

0x4e70,	// (0x000377f5) cale_week_scroll_pane_g10

0x4e81,	// (0x00037806) cale_week_scroll_pane_g11

0x4e92,	// (0x00037817) cale_week_scroll_pane_g12

0x4eab,	// (0x00037830) cale_week_scroll_pane_g13

0x4ec4,	// (0x00037849) cale_week_scroll_pane_g14

0x4edd,	// (0x00037862) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00041b57) cale_week_scroll_pane_g

0x4ef6,	// (0x0003787b) cale_week_time_pane

0x4f09,	// (0x0003788e) grid_cale_week_pane

0x4f26,	// (0x000378ab) scroll_pane_cp08

0x4f40,	// (0x000378c5) cell_cale_week_pane_ParamLimits

0x4f40,	// (0x000378c5) cell_cale_week_pane

0x4f90,	// (0x00037915) cale_week_day_heading_pane_t1

0x4fa4,	// (0x00037929) cale_week_day_heading_pane_t2

0x4fb8,	// (0x0003793d) cale_week_day_heading_pane_t3

0x4fcc,	// (0x00037951) cale_week_day_heading_pane_t4

0x4fe0,	// (0x00037965) cale_week_day_heading_pane_t5

0x4ff4,	// (0x00037979) cale_week_day_heading_pane_t6

0x5008,	// (0x0003798d) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00041b76) cale_week_day_heading_pane_t

0xc6aa,	// (0x0003f02f) bg_cale_side_pane

0x501c,	// (0x000379a1) cale_week_time_pane_t1

0x5034,	// (0x000379b9) cale_week_time_pane_t2

0x504c,	// (0x000379d1) cale_week_time_pane_t3

0x5064,	// (0x000379e9) cale_week_time_pane_t4

0x507c,	// (0x00037a01) cale_week_time_pane_t5

0x5094,	// (0x00037a19) cale_week_time_pane_t6

0x50b4,	// (0x00037a39) cale_week_time_pane_t7

0x50d4,	// (0x00037a59) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00041b85) cale_week_time_pane_t

0x50f4,	// (0x00037a79) cell_cale_week_pane_g2

0x5105,	// (0x00037a8a) cell_cale_week_pane_g3_ParamLimits

0x5105,	// (0x00037a8a) cell_cale_week_pane_g3

0xc6b8,	// (0x0003f03d) grid_highlight_pane_cp07

0xc6c0,	// (0x0003f045) listscroll_gms_pane

0xc6ca,	// (0x0003f04f) grid_gms_pane

0xc6d3,	// (0x0003f058) listscroll_gms_pane_g1

0xc6db,	// (0x0003f060) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00041b96) listscroll_gms_pane_g

0x511d,	// (0x00037aa2) scroll_pane_cp010

0x5128,	// (0x00037aad) cell_gms_pane_ParamLimits

0x5128,	// (0x00037aad) cell_gms_pane

0x513a,	// (0x00037abf) cell_gms_pane_g1

0xc6e3,	// (0x0003f068) cell_gms_pane_g2

0xc665,	// (0x0003efea) cell_gms_pane_g3

0xc6eb,	// (0x0003f070) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00041b9b) cell_gms_pane_g

0xc6f4,	// (0x0003f079) grid_highlight_pane_cp09

0x73d0,	// (0x00039d55) phob_pre_status_pane_g1

0x73d8,	// (0x00039d5d) phob_pre_status_pane_g2

0x73e0,	// (0x00039d65) phob_pre_status_pane_g3

0x73e8,	// (0x00039d6d) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00041f8a) phob_pre_status_pane_g

0x73f8,	// (0x00039d7d) phob_pre_status_pane_t1

0x7408,	// (0x00039d8d) phob_pre_status_pane_t2

0x7418,	// (0x00039d9d) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00041f95) phob_pre_status_pane_t

0xc1ee,	// (0x0003eb73) bg_list_pane_cp05

0x514a,	// (0x00037acf) grid_vorec_pane

0x5152,	// (0x00037ad7) vorec_t1

0x5160,	// (0x00037ae5) vorec_t2

0x516e,	// (0x00037af3) vorec_t3

0x517c,	// (0x00037b01) vorec_t4

0x518a,	// (0x00037b0f) vorec_t5

0x5198,	// (0x00037b1d) vorec_t6

0x0006,

0xf21f,	// (0x00041ba4) vorec_t

0x51b4,	// (0x00037b39) wait_bar_pane_cp01

0xc6fc,	// (0x0003f081) cell_vorec_pane_ParamLimits

0xc6fc,	// (0x0003f081) cell_vorec_pane

0xc70f,	// (0x0003f094) cell_vorec_pane_g1

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp05

0x51cc,	// (0x00037b51) cams_zoom_pane

0x51d8,	// (0x00037b5d) image_vga_pane

0x51e7,	// (0x00037b6c) main_camera_pane_g1

0x51f5,	// (0x00037b7a) main_camera_pane_g2

0x5203,	// (0x00037b88) main_camera_pane_g3

0x520f,	// (0x00037b94) main_camera_pane_g4

0x521b,	// (0x00037ba0) main_camera_pane_g5

0x5227,	// (0x00037bac) main_camera_pane_g6

0x5233,	// (0x00037bb8) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00041bb3) main_camera_pane_g

0x523f,	// (0x00037bc4) main_camera_pane_t1

0x5251,	// (0x00037bd6) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00041bc4) main_camera_pane_t

0x5272,	// (0x00037bf7) cams_zoom_pane_cp_ParamLimits

0x5272,	// (0x00037bf7) cams_zoom_pane_cp

0x5296,	// (0x00037c1b) image_cif_pane_ParamLimits

0x5296,	// (0x00037c1b) image_cif_pane

0x52b4,	// (0x00037c39) image_subqcif_pane

0x52bc,	// (0x00037c41) main_video_pane_g1_ParamLimits

0x52bc,	// (0x00037c41) main_video_pane_g1

0x52dc,	// (0x00037c61) main_video_pane_g2_ParamLimits

0x52dc,	// (0x00037c61) main_video_pane_g2

0x530e,	// (0x00037c93) main_video_pane_g3_ParamLimits

0x530e,	// (0x00037c93) main_video_pane_g3

0x5339,	// (0x00037cbe) main_video_pane_g4_ParamLimits

0x5339,	// (0x00037cbe) main_video_pane_g4

0x5364,	// (0x00037ce9) main_video_pane_g5_ParamLimits

0x5364,	// (0x00037ce9) main_video_pane_g5

0xc725,	// (0x0003f0aa) main_video_pane_g6_ParamLimits

0xc725,	// (0x0003f0aa) main_video_pane_g6

0x0006,

0xf244,	// (0x00041bc9) main_video_pane_g_ParamLimits

0xf244,	// (0x00041bc9) main_video_pane_g

0x5388,	// (0x00037d0d) main_video_pane_t1_ParamLimits

0x5388,	// (0x00037d0d) main_video_pane_t1

0xc73f,	// (0x0003f0c4) cams_zoom_pane_g1

0xc748,	// (0x0003f0cd) cams_zoom_pane_g2

0xc751,	// (0x0003f0d6) cams_zoom_pane_g3

0xc75a,	// (0x0003f0df) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00041bd8) cams_zoom_pane_g

0x53d2,	// (0x00037d57) grid_cams_pane

0x53e0,	// (0x00037d65) linegrid_cams_pane

0x53ee,	// (0x00037d73) cell_cams_pane_ParamLimits

0x53ee,	// (0x00037d73) cell_cams_pane

0xc763,	// (0x0003f0e8) cams_burst_image_pane

0xc76b,	// (0x0003f0f0) cell_cams_pane_g1

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp03

0xc5ad,	// (0x0003ef32) mp_bg_pane_g1

0xc1ee,	// (0x0003eb73) bg_list_pane_cp03

0xe352,	// (0x00040cd7) bg_mp_pane

0xe35a,	// (0x00040cdf) grid_mp_pane

0xe362,	// (0x00040ce7) media_player_g1

0xe36a,	// (0x00040cef) media_player_t1

0xe378,	// (0x00040cfd) media_player_t2

0xe386,	// (0x00040d0b) media_player_t3

0xe394,	// (0x00040d19) media_player_t4

0xe3a2,	// (0x00040d27) media_player_t5

0xe3b0,	// (0x00040d35) media_player_t6

0xe3be,	// (0x00040d43) media_player_t7

0x0006,

0xf5ef,	// (0x00041f74) media_player_t

0xe3cc,	// (0x00040d51) wait_bar_pane_cp02

0xf5d4,	// (0x00041f59) main_usb_pane_t

0x73c7,	// (0x00039d4c) cell_mp_pane

0xc5ad,	// (0x0003ef32) cell_mp_pane_g1

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp06

0xc773,	// (0x0003f0f8) grid_skin_colour_pane

0xc77b,	// (0x0003f100) list_highlight_pane_cp03

0x5401,	// (0x00037d86) skin_g1

0xc783,	// (0x0003f108) skin_t1

0xc792,	// (0x0003f117) skin_t2

0x0001,

0xf288,	// (0x00041c0d) skin_t

0x540b,	// (0x00037d90) cell_skin_colour_pane_ParamLimits

0x540b,	// (0x00037d90) cell_skin_colour_pane

0xc7a0,	// (0x0003f125) cell_skin_colour_pane_g1

0x548f,	// (0x00037e14) call_video_g1_ParamLimits

0x548f,	// (0x00037e14) call_video_g1

0x549f,	// (0x00037e24) call_video_g2_ParamLimits

0x549f,	// (0x00037e24) call_video_g2

0x0001,

0xf28d,	// (0x00041c12) call_video_g_ParamLimits

0xf28d,	// (0x00041c12) call_video_g

0x54f9,	// (0x00037e7e) call_video_uplink_pane_cp1_ParamLimits

0x54f9,	// (0x00037e7e) call_video_uplink_pane_cp1

0xc7b2,	// (0x0003f137) call_video_uplink_pane_cp2

0x55c5,	// (0x00037f4a) video_down_crop_pane_ParamLimits

0x55c5,	// (0x00037f4a) video_down_crop_pane

0x56b7,	// (0x0003803c) video_down_pane_ParamLimits

0x56b7,	// (0x0003803c) video_down_pane

0xc7ba,	// (0x0003f13f) video_down_subqcif_pane_ParamLimits

0xc7ba,	// (0x0003f13f) video_down_subqcif_pane

0xc7d2,	// (0x0003f157) video_down_subqcif_pane_cp_ParamLimits

0xc7d2,	// (0x0003f157) video_down_subqcif_pane_cp

0xc7f6,	// (0x0003f17b) im_reading_pane_ParamLimits

0xc7f6,	// (0x0003f17b) im_reading_pane

0x57d9,	// (0x0003815e) im_writing_pane_ParamLimits

0x57d9,	// (0x0003815e) im_writing_pane

0x57f7,	// (0x0003817c) im_reading_pane_t1

0xc810,	// (0x0003f195) list_im_pane

0xc821,	// (0x0003f1a6) scroll_pane_cp07

0x5857,	// (0x000381dc) im_writing_pane_t1_ParamLimits

0x5857,	// (0x000381dc) im_writing_pane_t1

0xc83a,	// (0x0003f1bf) im_writing_pane_t2_ParamLimits

0xc83a,	// (0x0003f1bf) im_writing_pane_t2

0x0001,

0xf297,	// (0x00041c1c) im_writing_pane_t_ParamLimits

0xf297,	// (0x00041c1c) im_writing_pane_t

0xc1ee,	// (0x0003eb73) input_focus_pane_cp04

0xc1ee,	// (0x0003eb73) input_focus_pane_cp05

0x5869,	// (0x000381ee) list_im_single_pane_ParamLimits

0x5869,	// (0x000381ee) list_im_single_pane

0x5895,	// (0x0003821a) list_single_im_pane_t1

0x738b,	// (0x00039d10) blid_accuracy_pane

0x7393,	// (0x00039d18) blid_compass_pane

0x739d,	// (0x00039d22) main_location_t1

0x73ab,	// (0x00039d30) main_location_t2

0x73b9,	// (0x00039d3e) main_location_t3

0x0002,

0xf5fe,	// (0x00041f83) main_location_t

0xc1ee,	// (0x0003eb73) aid_levels_location

0xc5ad,	// (0x0003ef32) blid_accuracy_pane_g1

0xc5ad,	// (0x0003ef32) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00041c7e) blid_accuracy_pane_g

0xc882,	// (0x0003f207) wml_content_pane

0xc8c0,	// (0x0003f245) wml_button_pane_ParamLimits

0xc8c0,	// (0x0003f245) wml_button_pane

0x58a4,	// (0x00038229) wml_list_single_large_pane_ParamLimits

0x58a4,	// (0x00038229) wml_list_single_large_pane

0x58d6,	// (0x0003825b) wml_list_single_medium_pane_ParamLimits

0x58d6,	// (0x0003825b) wml_list_single_medium_pane

0x590f,	// (0x00038294) wml_list_single_small_pane_ParamLimits

0x590f,	// (0x00038294) wml_list_single_small_pane

0xc8d4,	// (0x0003f259) wml_selection_box_pane_ParamLimits

0xc8d4,	// (0x0003f259) wml_selection_box_pane

0xc8e7,	// (0x0003f26c) wml_list_single_pane_t1

0xc8f6,	// (0x0003f27b) wml_list_single_medium_pane_t1

0xc905,	// (0x0003f28a) wml_list_single_large_pane_t1

0xc914,	// (0x0003f299) input_focus_pane_cp02_ParamLimits

0xc914,	// (0x0003f299) input_focus_pane_cp02

0xc927,	// (0x0003f2ac) wml_selection_box_pane_g1

0xc930,	// (0x0003f2b5) wml_selection_box_pane_t1_ParamLimits

0xc930,	// (0x0003f2b5) wml_selection_box_pane_t1

0xc449,	// (0x0003edce) bg_wml_button_pane_ParamLimits

0xc449,	// (0x0003edce) bg_wml_button_pane

0xc948,	// (0x0003f2cd) wml_button_pane_g1

0xc950,	// (0x0003f2d5) wml_button_pane_t1

0xc948,	// (0x0003f2cd) wml_button_bg_pane_g1

0xc960,	// (0x0003f2e5) wml_button_bg_pane_g2

0xc968,	// (0x0003f2ed) wml_button_bg_pane_g3

0xc970,	// (0x0003f2f5) wml_button_bg_pane_g4

0xc978,	// (0x0003f2fd) wml_button_bg_pane_g5

0xc980,	// (0x0003f305) wml_button_bg_pane_g6

0xc988,	// (0x0003f30d) wml_button_bg_pane_g7

0xc990,	// (0x0003f315) wml_button_bg_pane_g8

0xc998,	// (0x0003f31d) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00041c21) wml_button_bg_pane_g

0x5957,	// (0x000382dc) bg_list_pane_cp02

0xc9a0,	// (0x0003f325) mce_header_pane_ParamLimits

0xc9a0,	// (0x0003f325) mce_header_pane

0xc9b6,	// (0x0003f33b) mce_icon_pane

0xc9b6,	// (0x0003f33b) mce_image_pane

0xc9bf,	// (0x0003f344) mce_text_pane_ParamLimits

0xc9bf,	// (0x0003f344) mce_text_pane

0x5961,	// (0x000382e6) scroll_pane_cp03

0xc8b8,	// (0x0003f23d) scroll_pane_cp04

0xc9d2,	// (0x0003f357) scroll_pane_cp05_ParamLimits

0xc9d2,	// (0x0003f357) scroll_pane_cp05

0x596b,	// (0x000382f0) mce_header_field_pane_ParamLimits

0x596b,	// (0x000382f0) mce_header_field_pane

0x598b,	// (0x00038310) mce_header_field_pane_2_ParamLimits

0x598b,	// (0x00038310) mce_header_field_pane_2

0x59a1,	// (0x00038326) mce_header_field_pane_3

0x59a9,	// (0x0003832e) list_single_mce_message_pane_ParamLimits

0x59a9,	// (0x0003832e) list_single_mce_message_pane

0x59d9,	// (0x0003835e) list_single_mce_smart_pane_ParamLimits

0x59d9,	// (0x0003835e) list_single_mce_smart_pane

0xc9de,	// (0x0003f363) input_focus_pane_cp03

0xc9e7,	// (0x0003f36c) list_header_data_pane

0x5a14,	// (0x00038399) mce_header_field_pane_t1

0x5a24,	// (0x000383a9) list_single_mce_header_pane_ParamLimits

0x5a24,	// (0x000383a9) list_single_mce_header_pane

0xc9ef,	// (0x0003f374) list_single_mce_header_pane_t1

0xc9fe,	// (0x0003f383) list_single_mce_message_pane_g1

0xca06,	// (0x0003f38b) list_single_mce_message_pane_t1

0x5a76,	// (0x000383fb) bg_cale_heading_pane_cp01_ParamLimits

0x5a76,	// (0x000383fb) bg_cale_heading_pane_cp01

0xca14,	// (0x0003f399) bg_cale_pane_cp02_ParamLimits

0xca14,	// (0x0003f399) bg_cale_pane_cp02

0x5aa9,	// (0x0003842e) cale_month_corner_pane

0x5abf,	// (0x00038444) cale_month_day_heading_pane_ParamLimits

0x5abf,	// (0x00038444) cale_month_day_heading_pane

0x5b02,	// (0x00038487) cale_month_pane_g1_ParamLimits

0x5b02,	// (0x00038487) cale_month_pane_g1

0x5b2e,	// (0x000384b3) cale_month_pane_g2_ParamLimits

0x5b2e,	// (0x000384b3) cale_month_pane_g2

0x5b51,	// (0x000384d6) cale_month_pane_g3_ParamLimits

0x5b51,	// (0x000384d6) cale_month_pane_g3

0x5b8d,	// (0x00038512) cale_month_pane_g4_ParamLimits

0x5b8d,	// (0x00038512) cale_month_pane_g4

0x5bc9,	// (0x0003854e) cale_month_pane_g5_ParamLimits

0x5bc9,	// (0x0003854e) cale_month_pane_g5

0x5c05,	// (0x0003858a) cale_month_pane_g6_ParamLimits

0x5c05,	// (0x0003858a) cale_month_pane_g6

0x5c41,	// (0x000385c6) cale_month_pane_g7_ParamLimits

0x5c41,	// (0x000385c6) cale_month_pane_g7

0x5c8d,	// (0x00038612) cale_month_pane_g8_ParamLimits

0x5c8d,	// (0x00038612) cale_month_pane_g8

0x5cd9,	// (0x0003865e) cale_month_pane_g9_ParamLimits

0x5cd9,	// (0x0003865e) cale_month_pane_g9

0x5d1f,	// (0x000386a4) cale_month_pane_g10_ParamLimits

0x5d1f,	// (0x000386a4) cale_month_pane_g10

0x5d65,	// (0x000386ea) cale_month_pane_g11_ParamLimits

0x5d65,	// (0x000386ea) cale_month_pane_g11

0x5da3,	// (0x00038728) cale_month_pane_g12_ParamLimits

0x5da3,	// (0x00038728) cale_month_pane_g12

0x5de1,	// (0x00038766) cale_month_pane_g13_ParamLimits

0x5de1,	// (0x00038766) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00041c34) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00041c34) cale_month_pane_g

0x5e1f,	// (0x000387a4) cale_month_week_pane

0x5e32,	// (0x000387b7) grid_cale_month_pane_ParamLimits

0x5e32,	// (0x000387b7) grid_cale_month_pane

0x5e70,	// (0x000387f5) cale_month_day_heading_pane_t1

0x5ece,	// (0x00038853) cale_month_day_heading_pane_t2

0x5f33,	// (0x000388b8) cale_month_day_heading_pane_t3

0x5f98,	// (0x0003891d) cale_month_day_heading_pane_t4

0x5ffd,	// (0x00038982) cale_month_day_heading_pane_t5

0x6062,	// (0x000389e7) cale_month_day_heading_pane_t6

0x60cf,	// (0x00038a54) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00041c4f) cale_month_day_heading_pane_t

0xc6aa,	// (0x0003f02f) bg_cale_side_pane_cp01

0x6144,	// (0x00038ac9) cale_month_week_pane_t1

0x615b,	// (0x00038ae0) cale_month_week_pane_t2

0x6172,	// (0x00038af7) cale_month_week_pane_t3

0x6189,	// (0x00038b0e) cale_month_week_pane_t4

0x61a0,	// (0x00038b25) cale_month_week_pane_t5

0x61bf,	// (0x00038b44) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00041c5e) cale_month_week_pane_t

0x61de,	// (0x00038b63) cell_cale_month_pane_ParamLimits

0x61de,	// (0x00038b63) cell_cale_month_pane

0x62ac,	// (0x00038c31) cell_cale_month_pane_g1

0x62b8,	// (0x00038c3d) cell_cale_month_pane_t1_ParamLimits

0x62b8,	// (0x00038c3d) cell_cale_month_pane_t1

0xc6b8,	// (0x0003f03d) grid_highlight_pane_cp08

0xc5ad,	// (0x0003ef32) main_smil_g1

0x62d4,	// (0x00038c59) smil_status_pane

0xca49,	// (0x0003f3ce) smil_text_pane

0xe26a,	// (0x00040bef) bg_popup_call3_rect_pane_g8

0xe272,	// (0x00040bf7) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00041f17) bg_popup_call3_rect_pane_g

0xe4f4,	// (0x00040e79) smil_status_volume_pane_g1

0xca53,	// (0x0003f3d8) smil_status_pane_t1

0x776f,	// (0x0003a0f4) volume_smil_pane

0xca6a,	// (0x0003f3ef) list_smil_text_pane

0x62e7,	// (0x00038c6c) scroll_pane_cp011

0x62f2,	// (0x00038c77) smil_text_list_pane_t1_ParamLimits

0x62f2,	// (0x00038c77) smil_text_list_pane_t1

0x639d,	// (0x00038d22) aid_volume_smil_ParamLimits

0x639d,	// (0x00038d22) aid_volume_smil

0xc5ad,	// (0x0003ef32) smil_volume_pane_g1

0xc5ad,	// (0x0003ef32) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00041c7e) smil_volume_pane_g

0xc558,	// (0x0003eedd) listscroll_cale_day_pane

0xca74,	// (0x0003f3f9) bg_cale_pane

0xca8c,	// (0x0003f411) list_cale_pane

0xca9d,	// (0x0003f422) scroll_pane_cp09

0xcaae,	// (0x0003f433) cale_bg_pane_g1

0xcab6,	// (0x0003f43b) cale_bg_pane_g2

0xcabe,	// (0x0003f443) cale_bg_pane_g3

0xcac6,	// (0x0003f44b) cale_bg_pane_g4

0xcace,	// (0x0003f453) cale_bg_pane_g5

0xcad6,	// (0x0003f45b) cale_bg_pane_g6

0xcade,	// (0x0003f463) cale_bg_pane_g7

0xcae6,	// (0x0003f46b) cale_bg_pane_g8

0xcaee,	// (0x0003f473) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00041c83) cale_bg_pane_g

0x63bf,	// (0x00038d44) list_cale_time_pane_ParamLimits

0x63bf,	// (0x00038d44) list_cale_time_pane

0x63e0,	// (0x00038d65) list_cale_time_pane_g1_ParamLimits

0x63e0,	// (0x00038d65) list_cale_time_pane_g1

0xcaf6,	// (0x0003f47b) list_cale_time_pane_g2_ParamLimits

0xcaf6,	// (0x0003f47b) list_cale_time_pane_g2

0x63ec,	// (0x00038d71) list_cale_time_pane_g3_ParamLimits

0x63ec,	// (0x00038d71) list_cale_time_pane_g3

0x6408,	// (0x00038d8d) list_cale_time_pane_g4_ParamLimits

0x6408,	// (0x00038d8d) list_cale_time_pane_g4

0x6416,	// (0x00038d9b) list_cale_time_pane_g5_ParamLimits

0x6416,	// (0x00038d9b) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00041c96) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00041c96) list_cale_time_pane_g

0x6424,	// (0x00038da9) list_cale_time_pane_t1_ParamLimits

0x6424,	// (0x00038da9) list_cale_time_pane_t1

0x644c,	// (0x00038dd1) list_cale_time_pane_t2_ParamLimits

0x644c,	// (0x00038dd1) list_cale_time_pane_t2

0x674c,	// (0x000390d1) aid_blid_cardinal_pane

0x678e,	// (0x00039113) compass_pane_t4

0x6474,	// (0x00038df9) list_cale_time_pane_t4_ParamLimits

0x6474,	// (0x00038df9) list_cale_time_pane_t4

0x679c,	// (0x00039121) compass_pane_t5

0x67ac,	// (0x00039131) compass_pane_t6

0x67ba,	// (0x0003913f) compass_pane_t7

0xcf32,	// (0x0003f8b7) navi_pane_cc_t1

0xd087,	// (0x0003fa0c) aid_phob_thumbnail_center_pane

0x6e81,	// (0x00039806) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00041ca3) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00041ca3) list_cale_time_pane_t

0xbe47,	// (0x0003e7cc) bg_popup_window_pane_cp02_ParamLimits

0xbe47,	// (0x0003e7cc) bg_popup_window_pane_cp02

0xcb10,	// (0x0003f495) heading_pane_cp01_ParamLimits

0xcb10,	// (0x0003f495) heading_pane_cp01

0xcb1c,	// (0x0003f4a1) loc_req_pane_ParamLimits

0xcb1c,	// (0x0003f4a1) loc_req_pane

0xcb2c,	// (0x0003f4b1) loc_type_pane_ParamLimits

0xcb2c,	// (0x0003f4b1) loc_type_pane

0xcb3e,	// (0x0003f4c3) loc_type_pane_t1_ParamLimits

0xcb3e,	// (0x0003f4c3) loc_type_pane_t1

0xcb50,	// (0x0003f4d5) loc_type_pane_t2_ParamLimits

0xcb50,	// (0x0003f4d5) loc_type_pane_t2

0xcb62,	// (0x0003f4e7) loc_type_pane_t3_ParamLimits

0xcb62,	// (0x0003f4e7) loc_type_pane_t3

0x0002,

0xf325,	// (0x00041caa) loc_type_pane_t_ParamLimits

0xf325,	// (0x00041caa) loc_type_pane_t

0xcb74,	// (0x0003f4f9) list_loc_req_pane

0xcb7e,	// (0x0003f503) scroll_pane_cp012

0x649c,	// (0x00038e21) list_single_loc_request_popup_menu_pane_ParamLimits

0x649c,	// (0x00038e21) list_single_loc_request_popup_menu_pane

0xcb89,	// (0x0003f50e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb89,	// (0x0003f50e) list_single_loc_request_popup_menu_pane_g1

0xcb95,	// (0x0003f51a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb95,	// (0x0003f51a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00041cb1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00041cb1) list_single_loc_request_popup_menu_pane_g

0xcba1,	// (0x0003f526) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcba1,	// (0x0003f526) list_single_loc_request_popup_menu_pane_t1

0x64ae,	// (0x00038e33) bg_popup_window_pane_cp03_ParamLimits

0x64ae,	// (0x00038e33) bg_popup_window_pane_cp03

0x64bc,	// (0x00038e41) heading_loc_req_pane_ParamLimits

0x64bc,	// (0x00038e41) heading_loc_req_pane

0x64c8,	// (0x00038e4d) popup_dyc_status_message_window_g1_ParamLimits

0x64c8,	// (0x00038e4d) popup_dyc_status_message_window_g1

0x64d4,	// (0x00038e59) popup_dyc_status_message_window_t1_ParamLimits

0x64d4,	// (0x00038e59) popup_dyc_status_message_window_t1

0x64e6,	// (0x00038e6b) popup_dyc_status_message_window_t2_ParamLimits

0x64e6,	// (0x00038e6b) popup_dyc_status_message_window_t2

0x64f8,	// (0x00038e7d) popup_dyc_status_message_window_t3_ParamLimits

0x64f8,	// (0x00038e7d) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00041cb6) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00041cb6) popup_dyc_status_message_window_t

0xc1ee,	// (0x0003eb73) bg_heading_pane_cp01

0xcbb7,	// (0x0003f53c) heading_loc_req_pane_g1

0xcbbf,	// (0x0003f544) heading_loc_req_pane_g2

0xcbc7,	// (0x0003f54c) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00041cbd) heading_loc_req_pane_g

0xcbcf,	// (0x0003f554) heading_loc_req_pane_t1

0xcbde,	// (0x0003f563) bg_popup_sub_pane_cp01_ParamLimits

0xcbde,	// (0x0003f563) bg_popup_sub_pane_cp01

0xcbec,	// (0x0003f571) popup_cale_events_window_g1_ParamLimits

0xcbec,	// (0x0003f571) popup_cale_events_window_g1

0xcc0c,	// (0x0003f591) popup_cale_events_window_g2_ParamLimits

0xcc0c,	// (0x0003f591) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00041cf1) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00041cf1) popup_cale_events_window_g

0xcc2c,	// (0x0003f5b1) popup_cale_events_window_t1_ParamLimits

0xcc2c,	// (0x0003f5b1) popup_cale_events_window_t1

0xcc3e,	// (0x0003f5c3) popup_cale_events_window_t2_ParamLimits

0xcc3e,	// (0x0003f5c3) popup_cale_events_window_t2

0xcc7c,	// (0x0003f601) popup_cale_events_window_t3_ParamLimits

0xcc7c,	// (0x0003f601) popup_cale_events_window_t3

0xccb6,	// (0x0003f63b) popup_cale_events_window_t4_ParamLimits

0xccb6,	// (0x0003f63b) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00041cf6) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00041cf6) popup_cale_events_window_t

0x6522,	// (0x00038ea7) call_type_pane

0xccec,	// (0x0003f671) popup_call_status_window_g1

0x652e,	// (0x00038eb3) popup_call_status_window_g2

0x653a,	// (0x00038ebf) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00041cff) popup_call_status_window_g

0xccfa,	// (0x0003f67f) call_type_pane_g1

0xcd03,	// (0x0003f688) call_type_pane_g2

0x0001,

0xf381,	// (0x00041d06) call_type_pane_g

0xc1ee,	// (0x0003eb73) bg_popup_sub_pane_cp02

0xcd0c,	// (0x0003f691) listscroll_popup_wml_pane

0xcd14,	// (0x0003f699) list_wml_pane

0xcd1e,	// (0x0003f6a3) scroll_pane_cp013

0xcd29,	// (0x0003f6ae) list_single_graphic_popup_wml_pane_ParamLimits

0xcd29,	// (0x0003f6ae) list_single_graphic_popup_wml_pane

0xc5ad,	// (0x0003ef32) list_single_graphic_popup_wml_pane_g1

0xcd3d,	// (0x0003f6c2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00041d0b) list_single_graphic_popup_wml_pane_g

0xcd45,	// (0x0003f6ca) list_single_graphic_popup_wml_pane_t1

0xcd5b,	// (0x0003f6e0) aid_call_pane

0xc441,	// (0x0003edc6) popup_clock_analogue_window_g1

0xc441,	// (0x0003edc6) popup_clock_analogue_window_g2

0x6546,	// (0x00038ecb) popup_clock_analogue_window_g3

0x6546,	// (0x00038ecb) popup_clock_analogue_window_g4

0xc5ad,	// (0x0003ef32) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00041d10) popup_clock_analogue_window_g

0x654e,	// (0x00038ed3) popup_clock_analogue_window_t1

0x655c,	// (0x00038ee1) clock_digital_number_pane_ParamLimits

0x655c,	// (0x00038ee1) clock_digital_number_pane

0x6568,	// (0x00038eed) clock_digital_number_pane_cp02_ParamLimits

0x6568,	// (0x00038eed) clock_digital_number_pane_cp02

0x6574,	// (0x00038ef9) clock_digital_number_pane_cp03_ParamLimits

0x6574,	// (0x00038ef9) clock_digital_number_pane_cp03

0x6580,	// (0x00038f05) clock_digital_number_pane_cp04_ParamLimits

0x6580,	// (0x00038f05) clock_digital_number_pane_cp04

0x658c,	// (0x00038f11) clock_digital_separator_pane_ParamLimits

0x658c,	// (0x00038f11) clock_digital_separator_pane

0x6598,	// (0x00038f1d) popup_clock_digital_window_t1

0xc5ad,	// (0x0003ef32) clock_digital_number_pane_g1

0xc5ad,	// (0x0003ef32) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00041c7e) clock_digital_number_pane_g

0xc5ad,	// (0x0003ef32) clock_digital_separator_pane_g1

0xc5ad,	// (0x0003ef32) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00041c7e) clock_digital_separator_pane_g

0xc1ee,	// (0x0003eb73) bg_popup_window_pane_cp04

0xcd63,	// (0x0003f6e8) heading_pane_cp03

0xcd6b,	// (0x0003f6f0) listscroll_popup_gms_pane

0xcd73,	// (0x0003f6f8) grid_large_graphic_popup_pane

0xcd7d,	// (0x0003f702) listscroll_popup_gms_pane_g1

0xcd85,	// (0x0003f70a) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00041d1b) listscroll_popup_gms_pane_g

0xc8b8,	// (0x0003f23d) scroll_pane_cp014

0xcd8d,	// (0x0003f712) cell_large_graphic_popup_pane_ParamLimits

0xcd8d,	// (0x0003f712) cell_large_graphic_popup_pane

0xcda5,	// (0x0003f72a) cell_large_graphic_popup_pane_g1_ParamLimits

0xcda5,	// (0x0003f72a) cell_large_graphic_popup_pane_g1

0xcdb1,	// (0x0003f736) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdb1,	// (0x0003f736) cell_large_graphic_popup_pane_g2

0xcdbd,	// (0x0003f742) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdbd,	// (0x0003f742) cell_large_graphic_popup_pane_g3

0xcdca,	// (0x0003f74f) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdca,	// (0x0003f74f) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00041d20) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00041d20) cell_large_graphic_popup_pane_g

0xcdda,	// (0x0003f75f) grid_highlight_pane_cp010

0xc5ad,	// (0x0003ef32) bg_popup_call_pane_g1

0xcde4,	// (0x0003f769) list_single_graphic_popup_conf_pane_ParamLimits

0xcde4,	// (0x0003f769) list_single_graphic_popup_conf_pane

0xcdf6,	// (0x0003f77b) list_highlight_pane_cp01

0xcdff,	// (0x0003f784) list_single_graphic_popup_conf_pane_g1

0xce07,	// (0x0003f78c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00041d29) list_single_graphic_popup_conf_pane_g

0xce0f,	// (0x0003f794) list_single_graphic_popup_conf_pane_t1

0xce1d,	// (0x0003f7a2) linegrid_cams_pane_g1

0x65b5,	// (0x00038f3a) linegrid_cams_pane_g2

0xc665,	// (0x0003efea) linegrid_cams_pane_g3

0xce26,	// (0x0003f7ab) linegrid_cams_pane_g4

0x65be,	// (0x00038f43) linegrid_cams_pane_g5

0x65c7,	// (0x00038f4c) linegrid_cams_pane_g6

0xc6eb,	// (0x0003f070) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00041d2e) linegrid_cams_pane_g

0xce2f,	// (0x0003f7b4) popup_clock_analogue_window

0xce2f,	// (0x0003f7b4) popup_clock_digital_window

0xc1ee,	// (0x0003eb73) popup_phob_thumbnail_window

0xc5ad,	// (0x0003ef32) call_video_uplink_pane_g1

0xce38,	// (0x0003f7bd) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00041d3d) call_video_uplink_pane_g

0xc6b8,	// (0x0003f03d) video_uplink_pane

0xce40,	// (0x0003f7c5) mce_image_pane_g1

0x65d0,	// (0x00038f55) mce_image_pane_g2

0x65d8,	// (0x00038f5d) mce_image_pane_g3

0x65e0,	// (0x00038f65) mce_image_pane_g4

0x65e8,	// (0x00038f6d) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00041d42) mce_image_pane_g

0xce4a,	// (0x0003f7cf) control_top_pane_stacon_cp01_ParamLimits

0xce4a,	// (0x0003f7cf) control_top_pane_stacon_cp01

0xce5e,	// (0x0003f7e3) uni_indicator_pane_stacon_cp01_ParamLimits

0xce5e,	// (0x0003f7e3) uni_indicator_pane_stacon_cp01

0xce6f,	// (0x0003f7f4) bg_popup_sub_pane_cp03

0x65f0,	// (0x00038f75) chi_dic_find_pane

0x65f8,	// (0x00038f7d) listscroll_chi_dic_pane

0x6601,	// (0x00038f86) main_pane_chidic_g1

0x6614,	// (0x00038f99) chi_dic_find_pane_t1

0xce79,	// (0x0003f7fe) find_chidic_pane

0xce82,	// (0x0003f807) chi_dic_list_pane_ParamLimits

0xce82,	// (0x0003f807) chi_dic_list_pane

0xce93,	// (0x0003f818) scroll_pane_cp020

0x6622,	// (0x00038fa7) find_chidic_pane_t1

0xc1ee,	// (0x0003eb73) input_focus_pane_cp06

0x6631,	// (0x00038fb6) list_chi_dic_pane_ParamLimits

0x6631,	// (0x00038fb6) list_chi_dic_pane

0xce9b,	// (0x0003f820) list_chi_dic_pane_t1_ParamLimits

0xce9b,	// (0x0003f820) list_chi_dic_pane_t1

0xc1ee,	// (0x0003eb73) list_highlight_pane_cp020

0xceae,	// (0x0003f833) bg_cale_heading_pane_g1

0x6652,	// (0x00038fd7) bg_cale_heading_pane_g2

0x665a,	// (0x00038fdf) bg_cale_heading_pane_g3

0x6662,	// (0x00038fe7) bg_cale_heading_pane_g4

0x666c,	// (0x00038ff1) bg_cale_heading_pane_g5

0x6676,	// (0x00038ffb) bg_cale_heading_pane_g6

0x667e,	// (0x00039003) bg_cale_heading_pane_g7

0x6686,	// (0x0003900b) bg_cale_heading_pane_g8

0x6690,	// (0x00039015) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00041d4d) bg_cale_heading_pane_g

0xceae,	// (0x0003f833) bg_cale_side_pane_g1

0x669a,	// (0x0003901f) bg_cale_side_pane_g2

0x66a4,	// (0x00039029) bg_cale_side_pane_g3

0x66ae,	// (0x00039033) bg_cale_side_pane_g4

0x66b8,	// (0x0003903d) bg_cale_side_pane_g5

0x66c2,	// (0x00039047) bg_cale_side_pane_g6

0x66cc,	// (0x00039051) bg_cale_side_pane_g7

0x66d6,	// (0x0003905b) bg_cale_side_pane_g8

0x66de,	// (0x00039063) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00041d60) bg_cale_side_pane_g

0x66e6,	// (0x0003906b) popup_call_status_window_ParamLimits

0x66e6,	// (0x0003906b) popup_call_status_window

0xceb6,	// (0x0003f83b) stacon_top_pane

0xcebe,	// (0x0003f843) status_pane_ParamLimits

0xcebe,	// (0x0003f843) status_pane

0xced3,	// (0x0003f858) status_small_pane

0xcedb,	// (0x0003f860) control_pane

0xc1ee,	// (0x0003eb73) stacon_bottom_pane

0xcee3,	// (0x0003f868) list_single_mce_smart_pane_t1_ParamLimits

0xcee3,	// (0x0003f868) list_single_mce_smart_pane_t1

0xcef6,	// (0x0003f87b) list_single_mce_smart_pane_t2_ParamLimits

0xcef6,	// (0x0003f87b) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00041d73) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00041d73) list_single_mce_smart_pane_t

0x66f2,	// (0x00039077) compass_pane

0x66fe,	// (0x00039083) main_location2_pane_t1

0x6712,	// (0x00039097) main_location2_pane_t2

0x6726,	// (0x000390ab) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00041d78) main_location2_pane_t

0xcf15,	// (0x0003f89a) compass_pane_g1_ParamLimits

0xcf15,	// (0x0003f89a) compass_pane_g1

0x6770,	// (0x000390f5) compass_pane_t1

0x677f,	// (0x00039104) compass_pane_t2

0x0005,

0xf3fc,	// (0x00041d81) compass_pane_t

0x67ca,	// (0x0003914f) text_secondary_cp61

0xcf29,	// (0x0003f8ae) navi_pane_cams_g5

0xcf4c,	// (0x0003f8d1) navi_pane_im_t1

0xcf5a,	// (0x0003f8df) navi_pane_mp_g1_ParamLimits

0xcf5a,	// (0x0003f8df) navi_pane_mp_g1

0xcf6e,	// (0x0003f8f3) navi_pane_mp_g2_ParamLimits

0xcf6e,	// (0x0003f8f3) navi_pane_mp_g2

0xcf7a,	// (0x0003f8ff) navi_pane_mp_g3_ParamLimits

0xcf7a,	// (0x0003f8ff) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00041d95) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00041d95) navi_pane_mp_g

0xcf86,	// (0x0003f90b) navi_pane_mp_t1

0xcf94,	// (0x0003f919) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00041d9c) navi_pane_mp_t

0xcfd0,	// (0x0003f955) navi_pane_vt_g1

0xcf86,	// (0x0003f90b) navi_pane_vt_t1

0xcfd8,	// (0x0003f95d) navi_slider_pane

0xcfe0,	// (0x0003f965) zooming_pane

0xcfe8,	// (0x0003f96d) navi_slider_pane_g1

0x68e1,	// (0x00039266) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00041da3) navi_slider_pane_g

0xd00c,	// (0x0003f991) aid_levels_zoom

0xd014,	// (0x0003f999) zooming_pane_g1

0xd01c,	// (0x0003f9a1) zooming_pane_g2

0xd01c,	// (0x0003f9a1) zooming_pane_g3

0x0002,

0xf42d,	// (0x00041db2) zooming_pane_g

0xd024,	// (0x0003f9a9) level_10_zoom

0xd02d,	// (0x0003f9b2) level_11_zoom

0xd036,	// (0x0003f9bb) level_1_zoom

0xd03f,	// (0x0003f9c4) level_2_zoom

0xd048,	// (0x0003f9cd) level_3_zoom

0xd051,	// (0x0003f9d6) level_4_zoom

0xd05a,	// (0x0003f9df) level_5_zoom

0xd063,	// (0x0003f9e8) level_6_zoom

0xd06c,	// (0x0003f9f1) level_7_zoom

0xd075,	// (0x0003f9fa) level_8_zoom

0xd07e,	// (0x0003fa03) level_9_zoom

0xd08f,	// (0x0003fa14) popup_phob_thumbnail_window_g1

0xd097,	// (0x0003fa1c) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00041db9) popup_phob_thumbnail_window_g

0xe3d4,	// (0x00040d59) level_1_location

0xe3dc,	// (0x00040d61) level_2_location

0xe3e4,	// (0x00040d69) level_3_location

0xe3ec,	// (0x00040d71) level_4_location

0xcfe0,	// (0x0003f965) level_5_location

0x68f3,	// (0x00039278) mce_icon_pane_g1

0x68fb,	// (0x00039280) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00041dbe) mce_icon_pane_g

0x6903,	// (0x00039288) main_mup_pane_g1_ParamLimits

0x6903,	// (0x00039288) main_mup_pane_g1

0x691b,	// (0x000392a0) main_mup_pane_g2_ParamLimits

0x691b,	// (0x000392a0) main_mup_pane_g2

0x6937,	// (0x000392bc) main_mup_pane_g3_ParamLimits

0x6937,	// (0x000392bc) main_mup_pane_g3

0x6953,	// (0x000392d8) main_mup_pane_g4_ParamLimits

0x6953,	// (0x000392d8) main_mup_pane_g4

0x696f,	// (0x000392f4) main_mup_pane_g5_ParamLimits

0x696f,	// (0x000392f4) main_mup_pane_g5

0x6990,	// (0x00039315) main_mup_pane_g6_ParamLimits

0x6990,	// (0x00039315) main_mup_pane_g6

0x69ac,	// (0x00039331) main_mup_pane_g7_ParamLimits

0x69ac,	// (0x00039331) main_mup_pane_g7

0x69c8,	// (0x0003934d) main_mup_pane_g8_ParamLimits

0x69c8,	// (0x0003934d) main_mup_pane_g8

0x69e4,	// (0x00039369) main_mup_pane_g9_ParamLimits

0x69e4,	// (0x00039369) main_mup_pane_g9

0x6a03,	// (0x00039388) main_mup_pane_g10_ParamLimits

0x6a03,	// (0x00039388) main_mup_pane_g10

0x6a22,	// (0x000393a7) main_mup_pane_g11_ParamLimits

0x6a22,	// (0x000393a7) main_mup_pane_g11

0x6a3a,	// (0x000393bf) main_mup_pane_g12_ParamLimits

0x6a3a,	// (0x000393bf) main_mup_pane_g12

0x6a48,	// (0x000393cd) main_mup_pane_g13_ParamLimits

0x6a48,	// (0x000393cd) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00041dc3) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00041dc3) main_mup_pane_g

0x6a5e,	// (0x000393e3) main_mup_pane_t1_ParamLimits

0x6a5e,	// (0x000393e3) main_mup_pane_t1

0x6a7b,	// (0x00039400) main_mup_pane_t2_ParamLimits

0x6a7b,	// (0x00039400) main_mup_pane_t2

0x6a95,	// (0x0003941a) main_mup_pane_t3_ParamLimits

0x6a95,	// (0x0003941a) main_mup_pane_t3

0x6aaf,	// (0x00039434) main_mup_pane_t4_ParamLimits

0x6aaf,	// (0x00039434) main_mup_pane_t4

0x6ac1,	// (0x00039446) main_mup_pane_t5_ParamLimits

0x6ac1,	// (0x00039446) main_mup_pane_t5

0x6ad3,	// (0x00039458) main_mup_pane_t6_ParamLimits

0x6ad3,	// (0x00039458) main_mup_pane_t6

0x0005,

0xf459,	// (0x00041dde) main_mup_pane_t_ParamLimits

0xf459,	// (0x00041dde) main_mup_pane_t

0x6ae9,	// (0x0003946e) mup_progress_pane_ParamLimits

0x6ae9,	// (0x0003946e) mup_progress_pane

0x6af5,	// (0x0003947a) mup_visualizer_pane_ParamLimits

0x6af5,	// (0x0003947a) mup_visualizer_pane

0x6b33,	// (0x000394b8) mup_volume_pane_ParamLimits

0x6b33,	// (0x000394b8) mup_volume_pane

0xccec,	// (0x0003f671) mup_visualizer_pane_g1_ParamLimits

0xccec,	// (0x0003f671) mup_visualizer_pane_g1

0xccec,	// (0x0003f671) mup_visualizer_pane_g2_ParamLimits

0xccec,	// (0x0003f671) mup_visualizer_pane_g2

0xcf15,	// (0x0003f89a) mup_visualizer_pane_g3_ParamLimits

0xcf15,	// (0x0003f89a) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00041deb) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00041deb) mup_visualizer_pane_g

0xc5ad,	// (0x0003ef32) mup_volume_pane_g1

0xd0a7,	// (0x0003fa2c) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00041df2) mup_volume_pane_g

0xc5ad,	// (0x0003ef32) mup_progress_pane_g1

0xd0b0,	// (0x0003fa35) mup_progress_pane_g2

0xd0b9,	// (0x0003fa3e) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00041df7) mup_progress_pane_g

0xc1ee,	// (0x0003eb73) bg_popup_window_pane_cp05

0xd0c2,	// (0x0003fa47) heading_pane_cp02_ParamLimits

0xd0c2,	// (0x0003fa47) heading_pane_cp02

0xd0dc,	// (0x0003fa61) list_popup_blid_pane

0xd0e4,	// (0x0003fa69) list_blid_sat_info_pane_ParamLimits

0xd0e4,	// (0x0003fa69) list_blid_sat_info_pane

0xd0f7,	// (0x0003fa7c) list_blid_sat_info_pane_g1

0xd0ff,	// (0x0003fa84) list_blid_sat_info_pane_t1

0x6c3e,	// (0x000395c3) mup_equalizer_pane_ParamLimits

0x6c3e,	// (0x000395c3) mup_equalizer_pane

0x6c5f,	// (0x000395e4) mup_equalizer_pane_cp1_ParamLimits

0x6c5f,	// (0x000395e4) mup_equalizer_pane_cp1

0x6c80,	// (0x00039605) mup_equalizer_pane_cp2_ParamLimits

0x6c80,	// (0x00039605) mup_equalizer_pane_cp2

0x6ca1,	// (0x00039626) mup_equalizer_pane_cp3_ParamLimits

0x6ca1,	// (0x00039626) mup_equalizer_pane_cp3

0x6cc2,	// (0x00039647) mup_equalizer_pane_cp4_ParamLimits

0x6cc2,	// (0x00039647) mup_equalizer_pane_cp4

0x6ce3,	// (0x00039668) mup_equalizer_pane_cp5

0x6cf9,	// (0x0003967e) mup_equalizer_pane_cp6

0x6d11,	// (0x00039696) mup_equalizer_pane_cp7

0xe2f2,	// (0x00040c77) bg_popup_call_poc_act_pane_g9

0xe2fa,	// (0x00040c7f) bg_popup_call_poc_act_pane_g10

0xe302,	// (0x00040c87) bg_popup_call_poc_act_pane_g11

0x000a,

0xc449,	// (0x0003edce) mup_scale_pane

0xc5ad,	// (0x0003ef32) mup_scale_pane_g1

0xd10d,	// (0x0003fa92) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00041e13) mup_scale_pane_g

0xd131,	// (0x0003fab6) msg_data_pane

0xd139,	// (0x0003fabe) scroll_pane_cp017

0x3525,	// (0x00035eaa) bg_list_pane_cp04_ParamLimits

0x3525,	// (0x00035eaa) bg_list_pane_cp04

0xd141,	// (0x0003fac6) msg_data_pane_g1

0x6d3b,	// (0x000396c0) msg_data_pane_g2

0x65d8,	// (0x00038f5d) msg_data_pane_g3

0x6d43,	// (0x000396c8) msg_data_pane_g4

0x6d4b,	// (0x000396d0) msg_data_pane_g5

0x6d53,	// (0x000396d8) msg_data_pane_g6

0x6d5b,	// (0x000396e0) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00041e22) msg_data_pane_g

0x3545,	// (0x00035eca) msg_text_pane_ParamLimits

0x3545,	// (0x00035eca) msg_text_pane

0x6d63,	// (0x000396e8) qrid_highlight_pane_cp011_ParamLimits

0x6d63,	// (0x000396e8) qrid_highlight_pane_cp011

0xc1ee,	// (0x0003eb73) msg_body_pane

0xc1ee,	// (0x0003eb73) msg_header_pane

0xd152,	// (0x0003fad7) input_focus_pane_cp07

0x35a6,	// (0x00035f2b) msg_header_pane_t1_ParamLimits

0x35a6,	// (0x00035f2b) msg_header_pane_t1

0x35ba,	// (0x00035f3f) msg_header_pane_t2_ParamLimits

0x35ba,	// (0x00035f3f) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00041e36) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00041e36) msg_header_pane_t

0xd167,	// (0x0003faec) msg_body_pane_g1

0x35cc,	// (0x00035f51) msg_body_pane_t1_ParamLimits

0x35cc,	// (0x00035f51) msg_body_pane_t1

0x35fd,	// (0x00035f82) msg_body_pane_t2_ParamLimits

0x35fd,	// (0x00035f82) msg_body_pane_t2

0x360f,	// (0x00035f94) msg_body_pane_t3_ParamLimits

0x360f,	// (0x00035f94) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00041e3b) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00041e3b) msg_body_pane_t

0x6dd1,	// (0x00039756) main_viewer_pane_g1_ParamLimits

0x6dd1,	// (0x00039756) main_viewer_pane_g1

0x6ddd,	// (0x00039762) main_viewer_pane_g2_ParamLimits

0x6ddd,	// (0x00039762) main_viewer_pane_g2

0x6de9,	// (0x0003976e) main_viewer_pane_g3_ParamLimits

0x6de9,	// (0x0003976e) main_viewer_pane_g3

0x6dfa,	// (0x0003977f) main_viewer_pane_g4_ParamLimits

0x6dfa,	// (0x0003977f) main_viewer_pane_g4

0x6e0b,	// (0x00039790) main_viewer_pane_g5_ParamLimits

0x6e0b,	// (0x00039790) main_viewer_pane_g5

0x6e0b,	// (0x00039790) main_viewer_pane_g7_ParamLimits

0x6e0b,	// (0x00039790) main_viewer_pane_g7

0x6e1d,	// (0x000397a2) main_viewer_pane_g8_ParamLimits

0x6e1d,	// (0x000397a2) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00041e4b) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00041e4b) main_viewer_pane_g

0xd16f,	// (0x0003faf4) viewer_content_pane_ParamLimits

0xd16f,	// (0x0003faf4) viewer_content_pane

0x6e55,	// (0x000397da) main_postcard_pane_g1_ParamLimits

0x6e55,	// (0x000397da) main_postcard_pane_g1

0x6e63,	// (0x000397e8) main_postcard_pane_g2_ParamLimits

0x6e63,	// (0x000397e8) main_postcard_pane_g2

0x6e71,	// (0x000397f6) main_postcard_pane_g3_ParamLimits

0x6e71,	// (0x000397f6) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00041e5c) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00041e5c) main_postcard_pane_g

0x6e81,	// (0x00039806) main_postcard_pane_g4

0xe507,	// (0x00040e8c) smil_status_volume_pane_g2

0x6ead,	// (0x00039832) postcard_pane_ParamLimits

0x6ead,	// (0x00039832) postcard_pane

0xccec,	// (0x0003f671) postcard_pane_g1_ParamLimits

0xccec,	// (0x0003f671) postcard_pane_g1

0x6edf,	// (0x00039864) postcard_pane_g2_ParamLimits

0x6edf,	// (0x00039864) postcard_pane_g2

0x6eeb,	// (0x00039870) postcard_pane_g3_ParamLimits

0x6eeb,	// (0x00039870) postcard_pane_g3

0xd17d,	// (0x0003fb02) postcard_pane_g4_ParamLimits

0xd17d,	// (0x0003fb02) postcard_pane_g4

0x6ef7,	// (0x0003987c) postcard_pane_g5_ParamLimits

0x6ef7,	// (0x0003987c) postcard_pane_g5

0x6f03,	// (0x00039888) postcard_pane_g6_ParamLimits

0x6f03,	// (0x00039888) postcard_pane_g6

0xd18b,	// (0x0003fb10) postcard_pane_g7_ParamLimits

0xd18b,	// (0x0003fb10) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00041e69) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00041e69) postcard_pane_g

0x6f0f,	// (0x00039894) main_mp2_pane_g1_ParamLimits

0x6f0f,	// (0x00039894) main_mp2_pane_g1

0x6f1b,	// (0x000398a0) main_mp2_pane_g2_ParamLimits

0x6f1b,	// (0x000398a0) main_mp2_pane_g2

0x6f27,	// (0x000398ac) main_mp2_pane_g3_ParamLimits

0x6f27,	// (0x000398ac) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00041e78) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00041e78) main_mp2_pane_g

0x6f33,	// (0x000398b8) main_mp2_pane_t1_ParamLimits

0x6f33,	// (0x000398b8) main_mp2_pane_t1

0x6f4a,	// (0x000398cf) main_mp2_pane_t2_ParamLimits

0x6f4a,	// (0x000398cf) main_mp2_pane_t2

0x6f5c,	// (0x000398e1) main_mp2_pane_t3_ParamLimits

0x6f5c,	// (0x000398e1) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00041e7f) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00041e7f) main_mp2_pane_t

0xd199,	// (0x0003fb1e) pec_content_pane_ParamLimits

0xd199,	// (0x0003fb1e) pec_content_pane

0xc8b8,	// (0x0003f23d) scroll_pane_cp015

0xd1ab,	// (0x0003fb30) pec_attribute_pane_ParamLimits

0xd1ab,	// (0x0003fb30) pec_attribute_pane

0x6f6e,	// (0x000398f3) pec_content_pane_g1_ParamLimits

0x6f6e,	// (0x000398f3) pec_content_pane_g1

0xd1bb,	// (0x0003fb40) pec_content_pane_t1_ParamLimits

0xd1bb,	// (0x0003fb40) pec_content_pane_t1

0xd1cd,	// (0x0003fb52) pec_content_pane_t2_ParamLimits

0xd1cd,	// (0x0003fb52) pec_content_pane_t2

0x0001,

0xf501,	// (0x00041e86) pec_content_pane_t_ParamLimits

0xf501,	// (0x00041e86) pec_content_pane_t

0x6f7a,	// (0x000398ff) list_single_graphic_pane_cp01_ParamLimits

0x6f7a,	// (0x000398ff) list_single_graphic_pane_cp01

0xc449,	// (0x0003edce) bg_popup_sub_pane_cp04

0xd1df,	// (0x0003fb64) popup_mup_playback_window_g1

0xd1eb,	// (0x0003fb70) popup_mup_playback_window_t1

0xd200,	// (0x0003fb85) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00041e8b) popup_mup_playback_window_t

0xd237,	// (0x0003fbbc) main_image_pane_g1_ParamLimits

0xd237,	// (0x0003fbbc) main_image_pane_g1

0xd27a,	// (0x0003fbff) scroll_pane_cp018_ParamLimits

0xd27a,	// (0x0003fbff) scroll_pane_cp018

0xd292,	// (0x0003fc17) scroll_pane_cp016_ParamLimits

0xd292,	// (0x0003fc17) scroll_pane_cp016

0x701e,	// (0x000399a3) smil2_image_pane_ParamLimits

0x701e,	// (0x000399a3) smil2_image_pane

0x7052,	// (0x000399d7) smil2_root_pane_ParamLimits

0x7052,	// (0x000399d7) smil2_root_pane

0x707e,	// (0x00039a03) smil2_text_pane_ParamLimits

0x707e,	// (0x00039a03) smil2_text_pane

0xc1ee,	// (0x0003eb73) bg_list_pane_cp06

0xd2ce,	// (0x0003fc53) grid_radio_pane

0xc1ee,	// (0x0003eb73) bg_popup_window_pane_cp06

0xd2d6,	// (0x0003fc5b) main_fmradio_pane_t1

0xcd63,	// (0x0003f6e8) heading_pane_cp04

0xd2e4,	// (0x0003fc69) main_fmradio_pane_t2

0xe30a,	// (0x00040c8f) popup_cale_lunar_info_window_g1

0xd2f2,	// (0x0003fc77) main_fmradio_pane_t3

0xe312,	// (0x00040c97) popup_cale_lunar_info_window_g2

0xd300,	// (0x0003fc85) main_fmradio_pane_t4

0x0001,

0xd30e,	// (0x0003fc93) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00041f66) popup_cale_lunar_info_window_g

0xf51b,	// (0x00041ea0) main_fmradio_pane_t

0xd31c,	// (0x0003fca1) wait_bar_pane_cp03

0xd324,	// (0x0003fca9) cell_fmradio_pane_ParamLimits

0xd324,	// (0x0003fca9) cell_fmradio_pane

0xd18b,	// (0x0003fb10) cell_fmradio_pane_g1_ParamLimits

0xd18b,	// (0x0003fb10) cell_fmradio_pane_g1

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp011

0xd337,	// (0x0003fcbc) poc_content_pane_ParamLimits

0xd337,	// (0x0003fcbc) poc_content_pane

0xd349,	// (0x0003fcce) scroll_pane_cp019

0x70be,	// (0x00039a43) popup_call_poc_act_window_ParamLimits

0x70be,	// (0x00039a43) popup_call_poc_act_window

0x70cb,	// (0x00039a50) popup_call_poc_inact_window_ParamLimits

0x70cb,	// (0x00039a50) popup_call_poc_inact_window

0xf5b8,	// (0x00041f3d) bg_popup_call_poc_act_pane_g

0xe27a,	// (0x00040bff) bg_popup_call_poc_inact_pane_g1

0xe282,	// (0x00040c07) bg_popup_call_poc_inact_pane_g2

0xd351,	// (0x0003fcd6) popup_call_poc_act_window_g2

0xe28a,	// (0x00040c0f) bg_popup_call_poc_inact_pane_g3

0xe292,	// (0x00040c17) bg_popup_call_poc_inact_pane_g4

0xe29a,	// (0x00040c1f) bg_popup_call_poc_inact_pane_g5

0xd359,	// (0x0003fcde) popup_call_poc_act_window_t1_ParamLimits

0xd359,	// (0x0003fcde) popup_call_poc_act_window_t1

0xd381,	// (0x0003fd06) popup_call_poc_act_window_t2_ParamLimits

0xd381,	// (0x0003fd06) popup_call_poc_act_window_t2

0xd3a9,	// (0x0003fd2e) popup_call_poc_act_window_t3_ParamLimits

0xd3a9,	// (0x0003fd2e) popup_call_poc_act_window_t3

0xd3d1,	// (0x0003fd56) popup_call_poc_act_window_t4_ParamLimits

0xd3d1,	// (0x0003fd56) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00041eab) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00041eab) popup_call_poc_act_window_t

0xe2a2,	// (0x00040c27) bg_popup_call_poc_inact_pane_g6

0xe2aa,	// (0x00040c2f) bg_popup_call_poc_inact_pane_g7

0xe2b2,	// (0x00040c37) bg_popup_call_poc_inact_pane_g8

0xd3e3,	// (0x0003fd68) popup_call_poc_inact_window_g2

0xe2ba,	// (0x00040c3f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00041f2a) bg_popup_call_poc_inact_pane_g

0xd3eb,	// (0x0003fd70) popup_call_poc_inact_window_t1_ParamLimits

0xd3eb,	// (0x0003fd70) popup_call_poc_inact_window_t1

0xd400,	// (0x0003fd85) popup_call_poc_inact_window_t2_ParamLimits

0xd400,	// (0x0003fd85) popup_call_poc_inact_window_t2

0xd415,	// (0x0003fd9a) popup_call_poc_inact_window_t3_ParamLimits

0xd415,	// (0x0003fd9a) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00041eb4) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00041eb4) popup_call_poc_inact_window_t

0xe47a,	// (0x00040dff) context_pane_ParamLimits

0x76b2,	// (0x0003a037) signal_pane_ParamLimits

0xcfe0,	// (0x0003f965) main_call2_pane

0xe468,	// (0x00040ded) popup_phob_thumbnail2_window_ParamLimits

0xe468,	// (0x00040ded) popup_phob_thumbnail2_window

0x6d7f,	// (0x00039704) aid_hotspot_pointer_arrow_pane

0x6d87,	// (0x0003970c) aid_hotspot_pointer_hand_pane

0x73f0,	// (0x00039d75) phob_pre_status_pane_g5

0x51cc,	// (0x00037b51) cams_zoom_pane_ParamLimits

0x51d8,	// (0x00037b5d) image_vga_pane_ParamLimits

0x51e7,	// (0x00037b6c) main_camera_pane_g1_ParamLimits

0x51f5,	// (0x00037b7a) main_camera_pane_g2_ParamLimits

0x5203,	// (0x00037b88) main_camera_pane_g3_ParamLimits

0x520f,	// (0x00037b94) main_camera_pane_g4_ParamLimits

0x521b,	// (0x00037ba0) main_camera_pane_g5_ParamLimits

0x5227,	// (0x00037bac) main_camera_pane_g6_ParamLimits

0x5233,	// (0x00037bb8) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00041bb3) main_camera_pane_g_ParamLimits

0x523f,	// (0x00037bc4) main_camera_pane_t1_ParamLimits

0x5251,	// (0x00037bd6) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00041bc4) main_camera_pane_t_ParamLimits

0xc449,	// (0x0003edce) bg_popup_preview_window_pane_cp01_ParamLimits

0xc449,	// (0x0003edce) bg_popup_preview_window_pane_cp01

0xd42a,	// (0x0003fdaf) popup_phob_thumbnail2_window_g1_ParamLimits

0xd42a,	// (0x0003fdaf) popup_phob_thumbnail2_window_g1

0xc1ee,	// (0x0003eb73) call2_cli_visual_pane

0x70e7,	// (0x00039a6c) popup_call2_audio_conf_window_ParamLimits

0x70e7,	// (0x00039a6c) popup_call2_audio_conf_window

0x70fc,	// (0x00039a81) popup_call2_audio_first_window_ParamLimits

0x70fc,	// (0x00039a81) popup_call2_audio_first_window

0x719a,	// (0x00039b1f) popup_call2_audio_in_window_ParamLimits

0x719a,	// (0x00039b1f) popup_call2_audio_in_window

0x71dc,	// (0x00039b61) popup_call2_audio_out_window_ParamLimits

0x71dc,	// (0x00039b61) popup_call2_audio_out_window

0x723e,	// (0x00039bc3) popup_call2_audio_second_window_ParamLimits

0x723e,	// (0x00039bc3) popup_call2_audio_second_window

0x729c,	// (0x00039c21) popup_call2_audio_wait_window_ParamLimits

0x729c,	// (0x00039c21) popup_call2_audio_wait_window

0xc1ee,	// (0x0003eb73) bg_popup_call2_act_pane_cp03

0xc42b,	// (0x0003edb0) list_conf_pane_cp

0xd436,	// (0x0003fdbb) popup_call2_audio_conf_window_t1

0xd444,	// (0x0003fdc9) list_single_graphic_popup_conf2_pane_ParamLimits

0xd444,	// (0x0003fdc9) list_single_graphic_popup_conf2_pane

0xcdf6,	// (0x0003f77b) list_highlight_pane_cp04

0xd457,	// (0x0003fddc) list_single_graphic_popup_conf2_pane_g1

0xce07,	// (0x0003f78c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00041ebb) list_single_graphic_popup_conf2_pane_g

0xd461,	// (0x0003fde6) list_single_graphic_popup_conf2_pane_t1

0xd46f,	// (0x0003fdf4) bg_popup_call2_act_pane_cp01_ParamLimits

0xd46f,	// (0x0003fdf4) bg_popup_call2_act_pane_cp01

0xd4f9,	// (0x0003fe7e) call_type_pane_cp05_ParamLimits

0xd4f9,	// (0x0003fe7e) call_type_pane_cp05

0xd54d,	// (0x0003fed2) popup_call2_audio_second_window_g1_ParamLimits

0xd54d,	// (0x0003fed2) popup_call2_audio_second_window_g1

0xd5a1,	// (0x0003ff26) popup_call2_audio_second_window_g2_ParamLimits

0xd5a1,	// (0x0003ff26) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00041ec0) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00041ec0) popup_call2_audio_second_window_g

0xd606,	// (0x0003ff8b) popup_call2_audio_second_window_t1_ParamLimits

0xd606,	// (0x0003ff8b) popup_call2_audio_second_window_t1

0xd6c1,	// (0x00040046) popup_call2_audio_second_window_t2_ParamLimits

0xd6c1,	// (0x00040046) popup_call2_audio_second_window_t2

0xd714,	// (0x00040099) popup_call2_audio_second_window_t3_ParamLimits

0xd714,	// (0x00040099) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00041ec7) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00041ec7) popup_call2_audio_second_window_t

0xc1ee,	// (0x0003eb73) bg_popup_call2_in_pane_cp02

0xc1f8,	// (0x0003eb7d) call_type_pane_cp04

0xc200,	// (0x0003eb85) popup_call2_audio_wait_window_g1

0xc208,	// (0x0003eb8d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041aa0) popup_call2_audio_wait_window_g

0xc210,	// (0x0003eb95) popup_call2_audio_wait_window_t3

0xd807,	// (0x0004018c) bg_popup_call2_act_pane_ParamLimits

0xd807,	// (0x0004018c) bg_popup_call2_act_pane

0xd904,	// (0x00040289) call_type_pane_cp03_ParamLimits

0xd904,	// (0x00040289) call_type_pane_cp03

0xd968,	// (0x000402ed) popup_call2_audio_first_window_g1_ParamLimits

0xd968,	// (0x000402ed) popup_call2_audio_first_window_g1

0xd9d8,	// (0x0004035d) popup_call2_audio_first_window_g2_ParamLimits

0xd9d8,	// (0x0004035d) popup_call2_audio_first_window_g2

0xccec,	// (0x0003f671) popup_call2_audio_first_window_g3_ParamLimits

0xccec,	// (0x0003f671) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00041ed0) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00041ed0) popup_call2_audio_first_window_g

0xdab6,	// (0x0004043b) popup_call2_audio_first_window_t1_ParamLimits

0xdab6,	// (0x0004043b) popup_call2_audio_first_window_t1

0xdbc2,	// (0x00040547) popup_call2_audio_first_window_t4_ParamLimits

0xdbc2,	// (0x00040547) popup_call2_audio_first_window_t4

0xdca5,	// (0x0004062a) popup_call2_audio_first_window_t5_ParamLimits

0xdca5,	// (0x0004062a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00041edb) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00041edb) popup_call2_audio_first_window_t

0xc441,	// (0x0003edc6) bg_popup_call2_act_pane_g1

0xe31a,	// (0x00040c9f) popup_cale_lunar_info_window_t1

0xe328,	// (0x00040cad) popup_cale_lunar_info_window_t2

0xe336,	// (0x00040cbb) popup_cale_lunar_info_window_t3

0xc1ee,	// (0x0003eb73) bg_popup_call2_bubble_pane

0xdda6,	// (0x0004072b) bg_popup_call2_in_pane_cp01_ParamLimits

0xdda6,	// (0x0004072b) bg_popup_call2_in_pane_cp01

0xbeca,	// (0x0003e84f) call_type_pane_cp02

0xddee,	// (0x00040773) popup_call2_audio_out_window_g1_ParamLimits

0xddee,	// (0x00040773) popup_call2_audio_out_window_g1

0xde1a,	// (0x0004079f) popup_call2_audio_out_window_g2_ParamLimits

0xde1a,	// (0x0004079f) popup_call2_audio_out_window_g2

0xde42,	// (0x000407c7) popup_call2_audio_out_window_g3_ParamLimits

0xde42,	// (0x000407c7) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00041ee4) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00041ee4) popup_call2_audio_out_window_g

0xde7d,	// (0x00040802) popup_call2_audio_out_window_t1_ParamLimits

0xde7d,	// (0x00040802) popup_call2_audio_out_window_t1

0xdedc,	// (0x00040861) popup_call2_audio_out_window_t2_ParamLimits

0xdedc,	// (0x00040861) popup_call2_audio_out_window_t2

0xdf30,	// (0x000408b5) popup_call2_audio_out_window_t3_ParamLimits

0xdf30,	// (0x000408b5) popup_call2_audio_out_window_t3

0xdf46,	// (0x000408cb) popup_call2_audio_out_window_t4_ParamLimits

0xdf46,	// (0x000408cb) popup_call2_audio_out_window_t4

0xdf5c,	// (0x000408e1) popup_call2_audio_out_window_t5_ParamLimits

0xdf5c,	// (0x000408e1) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00041eed) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00041eed) popup_call2_audio_out_window_t

0xdfc0,	// (0x00040945) bg_popup_call2_in_pane_ParamLimits

0xdfc0,	// (0x00040945) bg_popup_call2_in_pane

0xe01c,	// (0x000409a1) popup_call2_audio_in_window_g1_ParamLimits

0xe01c,	// (0x000409a1) popup_call2_audio_in_window_g1

0xe054,	// (0x000409d9) popup_call2_audio_in_window_g2_ParamLimits

0xe054,	// (0x000409d9) popup_call2_audio_in_window_g2

0xe08c,	// (0x00040a11) popup_call2_audio_in_window_g3_ParamLimits

0xe08c,	// (0x00040a11) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00041efa) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00041efa) popup_call2_audio_in_window_g

0xe0e4,	// (0x00040a69) popup_call2_audio_in_window_t1_ParamLimits

0xe0e4,	// (0x00040a69) popup_call2_audio_in_window_t1

0xe164,	// (0x00040ae9) popup_call2_audio_in_window_t2_ParamLimits

0xe164,	// (0x00040ae9) popup_call2_audio_in_window_t2

0xe1e4,	// (0x00040b69) popup_call2_audio_in_window_t3_ParamLimits

0xe1e4,	// (0x00040b69) popup_call2_audio_in_window_t3

0xe1fe,	// (0x00040b83) popup_call2_audio_in_window_t4_ParamLimits

0xe1fe,	// (0x00040b83) popup_call2_audio_in_window_t4

0xe210,	// (0x00040b95) popup_call2_audio_in_window_t5_ParamLimits

0xe210,	// (0x00040b95) popup_call2_audio_in_window_t5

0xe225,	// (0x00040baa) popup_call2_audio_in_window_t6_ParamLimits

0xe225,	// (0x00040baa) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00041f03) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00041f03) popup_call2_audio_in_window_t

0xc441,	// (0x0003edc6) bg_popup_call2_in_pane_g1

0xe344,	// (0x00040cc9) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00041f6b) popup_cale_lunar_info_window_t

0xc449,	// (0x0003edce) bg_popup_call2_rect_pane_ParamLimits

0xc449,	// (0x0003edce) bg_popup_call2_rect_pane

0xc1ee,	// (0x0003eb73) call2_cli_visual_graphic_pane

0xc1ee,	// (0x0003eb73) call2_cli_visual_text_pane

0x7762,	// (0x0003a0e7) smil_status_volume_pane_g3

0x0002,

0xc5ad,	// (0x0003ef32) call2_cli_visual_graphic_pane_g1

0xc5ad,	// (0x0003ef32) call2_cli_visual_graphic_pane_g2

0xc5ad,	// (0x0003ef32) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00041f10) call2_cli_visual_graphic_pane_g

0xe23a,	// (0x00040bbf) bg_popup_call2_rect_pane_g1

0xc64b,	// (0x0003efd0) bg_popup_call2_rect_pane_g2

0xe242,	// (0x00040bc7) bg_popup_call2_rect_pane_g3

0xe24a,	// (0x00040bcf) bg_popup_call2_rect_pane_g4

0xe252,	// (0x00040bd7) bg_popup_call2_rect_pane_g5

0xe25a,	// (0x00040bdf) bg_popup_call2_rect_pane_g6

0xe262,	// (0x00040be7) bg_popup_call2_rect_pane_g7

0xe26a,	// (0x00040bef) bg_popup_call2_rect_pane_g8

0xe272,	// (0x00040bf7) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00041f17) bg_popup_call2_rect_pane_g

0xe27a,	// (0x00040bff) bg_popup_call2_bubble_pane_g1

0xe282,	// (0x00040c07) bg_popup_call2_bubble_pane_g2

0xe28a,	// (0x00040c0f) bg_popup_call2_bubble_pane_g3

0xe292,	// (0x00040c17) bg_popup_call2_bubble_pane_g4

0xe29a,	// (0x00040c1f) bg_popup_call2_bubble_pane_g5

0xe2a2,	// (0x00040c27) bg_popup_call2_bubble_pane_g6

0xe2aa,	// (0x00040c2f) bg_popup_call2_bubble_pane_g7

0xe2b2,	// (0x00040c37) bg_popup_call2_bubble_pane_g8

0xe2ba,	// (0x00040c3f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00041f2a) bg_popup_call2_bubble_pane_g

0x4d6f,	// (0x000376f4) aid_cale_week_size_cell_pane

0x5263,	// (0x00037be8) aid_cams_cif_uncrop_pane_ParamLimits

0x5263,	// (0x00037be8) aid_cams_cif_uncrop_pane

0x53c6,	// (0x00037d4b) aid_cams_size_cell_ParamLimits

0x53c6,	// (0x00037d4b) aid_cams_size_cell

0x53d2,	// (0x00037d57) grid_cams_pane_ParamLimits

0x53e0,	// (0x00037d65) linegrid_cams_pane_ParamLimits

0x54b7,	// (0x00037e3c) call_video_pane_t1

0x54d8,	// (0x00037e5d) call_video_pane_t2

0x0001,

0xf292,	// (0x00041c17) call_video_pane_t

0x5a58,	// (0x000383dd) aid_cale_month_size_cell_pane_ParamLimits

0x5a58,	// (0x000383dd) aid_cale_month_size_cell_pane

0xf62f,	// (0x00041fb4) smil_status_volume_pane_g

0x776f,	// (0x0003a0f4) volume_smil_pane_ParamLimits

0x4523,	// (0x00036ea8) aid_popup2_width_pane

0x4c64,	// (0x000375e9) cell_qdial_pane_g4_ParamLimits

0x4c64,	// (0x000375e9) cell_qdial_pane_g4

0x674c,	// (0x000390d1) aid_blid_cardinal_pane_ParamLimits

0x675c,	// (0x000390e1) aid_blid_destination_pane_ParamLimits

0x675c,	// (0x000390e1) aid_blid_destination_pane

0xc449,	// (0x0003edce) bg_popup_call_poc_act_pane_ParamLimits

0xc449,	// (0x0003edce) bg_popup_call_poc_act_pane

0xc449,	// (0x0003edce) bg_popup_call_poc_inact_pane_ParamLimits

0xc449,	// (0x0003edce) bg_popup_call_poc_inact_pane

0xe2ca,	// (0x00040c4f) bg_popup_call_poc_act_pane_g1

0xe2d2,	// (0x00040c57) bg_popup_call_poc_act_pane_g2

0xe2da,	// (0x00040c5f) bg_popup_call_poc_act_pane_g3

0xe292,	// (0x00040c17) bg_popup_call_poc_act_pane_g4

0xe29a,	// (0x00040c1f) bg_popup_call_poc_act_pane_g5

0xe2e2,	// (0x00040c67) bg_popup_call_poc_act_pane_g6

0xe2aa,	// (0x00040c2f) bg_popup_call_poc_act_pane_g7

0xe2ea,	// (0x00040c6f) bg_popup_call_poc_act_pane_g8

0xc1ee,	// (0x0003eb73) main_usb_pane

0xe443,	// (0x00040dc8) popup_cale_lunar_info_window

0x57f7,	// (0x0003817c) im_reading_pane_t1_ParamLimits

0xc810,	// (0x0003f195) list_im_pane_ParamLimits

0xc821,	// (0x0003f1a6) scroll_pane_cp07_ParamLimits

0xc1ee,	// (0x0003eb73) grid_highlight_pane_cp012

0xc449,	// (0x0003edce) mup_scale_pane_ParamLimits

0xccec,	// (0x0003f671) main_usb_pane_g1_ParamLimits

0xccec,	// (0x0003f671) main_usb_pane_g1

0x7313,	// (0x00039c98) main_usb_pane_g2_ParamLimits

0x7313,	// (0x00039c98) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00041f54) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00041f54) main_usb_pane_g

0x731f,	// (0x00039ca4) main_usb_pane_t1_ParamLimits

0x731f,	// (0x00039ca4) main_usb_pane_t1

0x7331,	// (0x00039cb6) main_usb_pane_t2_ParamLimits

0x7331,	// (0x00039cb6) main_usb_pane_t2

0x7343,	// (0x00039cc8) main_usb_pane_t3_ParamLimits

0x7343,	// (0x00039cc8) main_usb_pane_t3

0x7355,	// (0x00039cda) main_usb_pane_t4_ParamLimits

0x7355,	// (0x00039cda) main_usb_pane_t4

0x7367,	// (0x00039cec) main_usb_pane_t5_ParamLimits

0x7367,	// (0x00039cec) main_usb_pane_t5

0x7379,	// (0x00039cfe) main_usb_pane_t6_ParamLimits

0x7379,	// (0x00039cfe) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00041f59) main_usb_pane_t_ParamLimits

0x66f2,	// (0x00039077) aid_text_placing

0x66fe,	// (0x00039083) main_location2_pane_t1_ParamLimits

0x6712,	// (0x00039097) main_location2_pane_t2_ParamLimits

0x6726,	// (0x000390ab) main_location2_pane_t3_ParamLimits

0x673a,	// (0x000390bf) main_location2_pane_t4_ParamLimits

0x673a,	// (0x000390bf) main_location2_pane_t4

0xf3f3,	// (0x00041d78) main_location2_pane_t_ParamLimits

0xc48d,	// (0x0003ee12) find_pinb_pane_g2_ParamLimits

0xc48d,	// (0x0003ee12) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00041ac6) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00041ac6) find_pinb_pane_g

0xc499,	// (0x0003ee1e) find_pinb_pane_t1_ParamLimits

0xc4ab,	// (0x0003ee30) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00041acb) find_pinb_pane_t_ParamLimits

0xc1ee,	// (0x0003eb73) main_call3_pane

0x5e70,	// (0x000387f5) cale_month_day_heading_pane_t1_ParamLimits

0x5ece,	// (0x00038853) cale_month_day_heading_pane_t2_ParamLimits

0x5f33,	// (0x000388b8) cale_month_day_heading_pane_t3_ParamLimits

0x5f98,	// (0x0003891d) cale_month_day_heading_pane_t4_ParamLimits

0x5ffd,	// (0x00038982) cale_month_day_heading_pane_t5_ParamLimits

0x6062,	// (0x000389e7) cale_month_day_heading_pane_t6_ParamLimits

0x60cf,	// (0x00038a54) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00041c4f) cale_month_day_heading_pane_t_ParamLimits

0xca61,	// (0x0003f3e6) smil_status_volume_pane

0x6ec7,	// (0x0003984c) postcard_address_pane_ParamLimits

0x6ec7,	// (0x0003984c) postcard_address_pane

0x6ed3,	// (0x00039858) postcard_message_pane_ParamLimits

0x6ed3,	// (0x00039858) postcard_message_pane

0x72db,	// (0x00039c60) call2_cli_visual_pane_t1_ParamLimits

0x72db,	// (0x00039c60) call2_cli_visual_pane_t1

0x78c2,	// (0x0003a247) postcard_message_pane_t1_ParamLimits

0x78c2,	// (0x0003a247) postcard_message_pane_t1

0x78ab,	// (0x0003a230) postcard_address_pane_t1_ParamLimits

0x78ab,	// (0x0003a230) postcard_address_pane_t1

0x789c,	// (0x0003a221) popup_call3_audio_in_window_ParamLimits

0x789c,	// (0x0003a221) popup_call3_audio_in_window

0x7784,	// (0x0003a109) bg_popup_call3_in_pane_ParamLimits

0x7784,	// (0x0003a109) bg_popup_call3_in_pane

0x77e2,	// (0x0003a167) popup_call3_audio_in_window_g1_ParamLimits

0x77e2,	// (0x0003a167) popup_call3_audio_in_window_g1

0x77fa,	// (0x0003a17f) popup_call3_audio_in_window_g2_ParamLimits

0x77fa,	// (0x0003a17f) popup_call3_audio_in_window_g2

0x7812,	// (0x0003a197) popup_call3_audio_in_window_g3_ParamLimits

0x7812,	// (0x0003a197) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00041fbb) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00041fbb) popup_call3_audio_in_window_g

0x783a,	// (0x0003a1bf) popup_call3_audio_in_window_t1_ParamLimits

0x783a,	// (0x0003a1bf) popup_call3_audio_in_window_t1

0x7862,	// (0x0003a1e7) popup_call3_audio_in_window_t2_ParamLimits

0x7862,	// (0x0003a1e7) popup_call3_audio_in_window_t2

0x788a,	// (0x0003a20f) popup_call3_audio_in_window_t3_ParamLimits

0x788a,	// (0x0003a20f) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00041fc4) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00041fc4) popup_call3_audio_in_window_t

0xcfe0,	// (0x0003f965) bg_popup_call3_rect_pane

0xe23a,	// (0x00040bbf) bg_popup_call3_rect_pane_g1

0xc64b,	// (0x0003efd0) bg_popup_call3_rect_pane_g2

0xe242,	// (0x00040bc7) bg_popup_call3_rect_pane_g3

0xe24a,	// (0x00040bcf) bg_popup_call3_rect_pane_g4

0xe252,	// (0x00040bd7) bg_popup_call3_rect_pane_g5

0xe25a,	// (0x00040bdf) bg_popup_call3_rect_pane_g6

0xe262,	// (0x00040be7) bg_popup_call3_rect_pane_g7

0x6b4e,	// (0x000394d3) mup_visualizer_osc_pane

0xd09f,	// (0x0003fa24) mup_visualizer_spec_pane

0x77a4,	// (0x0003a129) call3_video_qcif_pane_ParamLimits

0x77a4,	// (0x0003a129) call3_video_qcif_pane

0x77b4,	// (0x0003a139) call3_video_qcif_uncrop_pane_ParamLimits

0x77b4,	// (0x0003a139) call3_video_qcif_uncrop_pane

0x77c0,	// (0x0003a145) call3_video_subqcif_pane_ParamLimits

0x77c0,	// (0x0003a145) call3_video_subqcif_pane

0x77d2,	// (0x0003a157) call3_video_subqcif_uncrop_pane_ParamLimits

0x77d2,	// (0x0003a157) call3_video_subqcif_uncrop_pane

0x782a,	// (0x0003a1af) popup_call3_audio_in_window_g4_ParamLimits

0x782a,	// (0x0003a1af) popup_call3_audio_in_window_g4

0x7751,	// (0x0003a0d6) mup_spec_half_pane

0x775a,	// (0x0003a0df) mup_spec_half_pane_cp

0xe4da,	// (0x00040e5f) mup_osc_middle_pane

0xe4e3,	// (0x00040e68) mup_visualizer_osc_pane_g1

0x7732,	// (0x0003a0b7) mup_spec_bar_pane_ParamLimits

0x7732,	// (0x0003a0b7) mup_spec_bar_pane

0xe4c7,	// (0x00040e4c) mup_spec_bar_pane_g1

0xe4d1,	// (0x00040e56) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00041faf) mup_spec_bar_pane_g

0x4d6f,	// (0x000376f4) aid_cale_week_size_cell_pane_ParamLimits

0x4d82,	// (0x00037707) bg_cale_heading_pane_ParamLimits

0xc67f,	// (0x0003f004) bg_cale_pane_cp01_ParamLimits

0x4d9e,	// (0x00037723) cale_week_corner_pane_ParamLimits

0x4daf,	// (0x00037734) cale_week_day_heading_pane_ParamLimits

0x4dcb,	// (0x00037750) cale_week_scroll_pane_g1_ParamLimits

0x4de4,	// (0x00037769) cale_week_scroll_pane_g2_ParamLimits

0x4df5,	// (0x0003777a) cale_week_scroll_pane_g3_ParamLimits

0x4e06,	// (0x0003778b) cale_week_scroll_pane_g4_ParamLimits

0x4e17,	// (0x0003779c) cale_week_scroll_pane_g5_ParamLimits

0x4e28,	// (0x000377ad) cale_week_scroll_pane_g6_ParamLimits

0x4e39,	// (0x000377be) cale_week_scroll_pane_g7_ParamLimits

0x4e4c,	// (0x000377d1) cale_week_scroll_pane_g8_ParamLimits

0x4e5f,	// (0x000377e4) cale_week_scroll_pane_g9_ParamLimits

0x4e70,	// (0x000377f5) cale_week_scroll_pane_g10_ParamLimits

0x4e81,	// (0x00037806) cale_week_scroll_pane_g11_ParamLimits

0x4e92,	// (0x00037817) cale_week_scroll_pane_g12_ParamLimits

0x4eab,	// (0x00037830) cale_week_scroll_pane_g13_ParamLimits

0x4ec4,	// (0x00037849) cale_week_scroll_pane_g14_ParamLimits

0x4edd,	// (0x00037862) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00041b57) cale_week_scroll_pane_g_ParamLimits

0x4ef6,	// (0x0003787b) cale_week_time_pane_ParamLimits

0x4f09,	// (0x0003788e) grid_cale_week_pane_ParamLimits

0xc698,	// (0x0003f01d) listscroll_cale_week_pane_t1

0x4f26,	// (0x000378ab) scroll_pane_cp08_ParamLimits

0x5aa9,	// (0x0003842e) cale_month_corner_pane_ParamLimits

0xca37,	// (0x0003f3bc) cale_month_pane_t1

0x5e1f,	// (0x000387a4) cale_month_week_pane_ParamLimits

0xccec,	// (0x0003f671) popup_call_status_window_g1_ParamLimits

0x652e,	// (0x00038eb3) popup_call_status_window_g2_ParamLimits

0x653a,	// (0x00038ebf) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00041cff) popup_call_status_window_g_ParamLimits

0xcd53,	// (0x0003f6d8) aid_call2_pane

0x3598,	// (0x00035f1d) msg_header_pane_g1

0x6ec7,	// (0x0003984c) postcard_address2_pane_ParamLimits

0x6ec7,	// (0x0003984c) postcard_address2_pane

0x6ed3,	// (0x00039858) postcard_message2_pane_ParamLimits

0x6ed3,	// (0x00039858) postcard_message2_pane

0x76c0,	// (0x0003a045) message2_row_pane_ParamLimits

0x76c0,	// (0x0003a045) message2_row_pane

0x76dd,	// (0x0003a062) address2_row_pane_ParamLimits

0x76dd,	// (0x0003a062) address2_row_pane

0xe495,	// (0x00040e1a) postcard_message2_row_pane_g1

0xe49d,	// (0x00040e22) postcard_message2_row_pane_t1

0xe495,	// (0x00040e1a) address2_row_pane_g1

0xe49d,	// (0x00040e22) address2_row_pane_t1

0x5142,	// (0x00037ac7) aid_size_cell_vorec

0xc1ee,	// (0x0003eb73) main_rss_pane

0x76f0,	// (0x0003a075) rss_list_single_pane_ParamLimits

0x76f0,	// (0x0003a075) rss_list_single_pane

0xe4ab,	// (0x00040e30) rss_list_single_pane_t1

0xe4b9,	// (0x00040e3e) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00041faa) rss_list_single_pane_t

0xc1ee,	// (0x0003eb73) main_camera2_pane

0xc1ee,	// (0x0003eb73) main_video2_pane

0x7926,	// (0x0003a2ab) cams_zoom_pane_cp2_ParamLimits

0x7926,	// (0x0003a2ab) cams_zoom_pane_cp2

0x7932,	// (0x0003a2b7) image2_vga_pane_ParamLimits

0x7932,	// (0x0003a2b7) image2_vga_pane

0x7941,	// (0x0003a2c6) main_camera2_pane_g1_ParamLimits

0x7941,	// (0x0003a2c6) main_camera2_pane_g1

0x794d,	// (0x0003a2d2) main_camera2_pane_g2_ParamLimits

0x794d,	// (0x0003a2d2) main_camera2_pane_g2

0x7959,	// (0x0003a2de) main_camera2_pane_g3_ParamLimits

0x7959,	// (0x0003a2de) main_camera2_pane_g3

0x7965,	// (0x0003a2ea) main_camera2_pane_g4_ParamLimits

0x7965,	// (0x0003a2ea) main_camera2_pane_g4

0x7971,	// (0x0003a2f6) main_camera2_pane_g5_ParamLimits

0x7971,	// (0x0003a2f6) main_camera2_pane_g5

0x797d,	// (0x0003a302) main_camera2_pane_g6_ParamLimits

0x797d,	// (0x0003a302) main_camera2_pane_g6

0x7989,	// (0x0003a30e) main_camera2_pane_g7_ParamLimits

0x7989,	// (0x0003a30e) main_camera2_pane_g7

0x7995,	// (0x0003a31a) main_camera2_pane_g8_ParamLimits

0x7995,	// (0x0003a31a) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00041fcb) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00041fcb) main_camera2_pane_g

0x79ad,	// (0x0003a332) main_camera2_pane_t1_ParamLimits

0x79ad,	// (0x0003a332) main_camera2_pane_t1

0x79bf,	// (0x0003a344) main_camera2_pane_t2_ParamLimits

0x79bf,	// (0x0003a344) main_camera2_pane_t2

0x79d1,	// (0x0003a356) main_camera2_pane_t3_ParamLimits

0x79d1,	// (0x0003a356) main_camera2_pane_t3

0x79e3,	// (0x0003a368) main_camera2_pane_t4_ParamLimits

0x79e3,	// (0x0003a368) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00041fde) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00041fde) main_camera2_pane_t

0x7a45,	// (0x0003a3ca) cams_zoom_pane_cp4_ParamLimits

0x7a45,	// (0x0003a3ca) cams_zoom_pane_cp4

0x7a55,	// (0x0003a3da) image2_cif_pane_ParamLimits

0x7a55,	// (0x0003a3da) image2_cif_pane

0x7a6a,	// (0x0003a3ef) image2_subqcif_pane_ParamLimits

0x7a6a,	// (0x0003a3ef) image2_subqcif_pane

0x7a79,	// (0x0003a3fe) main_video2_pane_g1_ParamLimits

0x7a79,	// (0x0003a3fe) main_video2_pane_g1

0x7a8b,	// (0x0003a410) main_video2_pane_g2_ParamLimits

0x7a8b,	// (0x0003a410) main_video2_pane_g2

0x7a9b,	// (0x0003a420) main_video2_pane_g3_ParamLimits

0x7a9b,	// (0x0003a420) main_video2_pane_g3

0x7aab,	// (0x0003a430) main_video2_pane_g4_ParamLimits

0x7aab,	// (0x0003a430) main_video2_pane_g4

0x7abb,	// (0x0003a440) main_video2_pane_g5_ParamLimits

0x7abb,	// (0x0003a440) main_video2_pane_g5

0x7acb,	// (0x0003a450) main_video2_pane_g6_ParamLimits

0x7acb,	// (0x0003a450) main_video2_pane_g6

0x0005,

0xf668,	// (0x00041fed) main_video2_pane_g_ParamLimits

0xf668,	// (0x00041fed) main_video2_pane_g

0x7add,	// (0x0003a462) main_video2_pane_t1_ParamLimits

0x7add,	// (0x0003a462) main_video2_pane_t1

0x7af7,	// (0x0003a47c) main_video2_pane_t2_ParamLimits

0x7af7,	// (0x0003a47c) main_video2_pane_t2

0x7b1d,	// (0x0003a4a2) main_video2_pane_t3_ParamLimits

0x7b1d,	// (0x0003a4a2) main_video2_pane_t3

0x0002,

0xf675,	// (0x00041ffa) main_video2_pane_t_ParamLimits

0xf675,	// (0x00041ffa) main_video2_pane_t

0x7430,	// (0x00039db5) call_muted_g2

0x0001,

0xf617,	// (0x00041f9c) call_muted_g

0xc1ee,	// (0x0003eb73) main_mup2_pane

0xe51a,	// (0x00040e9f) main_mup2_pane_g1_ParamLimits

0xe51a,	// (0x00040e9f) main_mup2_pane_g1

0x7b43,	// (0x0003a4c8) main_mup2_pane_g2_ParamLimits

0x7b43,	// (0x0003a4c8) main_mup2_pane_g2

0x7dc5,	// (0x0003a74a) main_mup_pane_g13_cp1

0x7dcd,	// (0x0003a752) mup_volume_pane_cp1

0x7b63,	// (0x0003a4e8) main_mup2_pane_g4_ParamLimits

0x7b63,	// (0x0003a4e8) main_mup2_pane_g4

0x7b78,	// (0x0003a4fd) main_mup2_pane_g5_ParamLimits

0x7b78,	// (0x0003a4fd) main_mup2_pane_g5

0x7b8d,	// (0x0003a512) main_mup2_pane_g6_ParamLimits

0x7b8d,	// (0x0003a512) main_mup2_pane_g6

0x7ba2,	// (0x0003a527) main_mup2_pane_g7_ParamLimits

0x7ba2,	// (0x0003a527) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00042001) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00042001) main_mup2_pane_g

0x7bbe,	// (0x0003a543) main_mup2_pane_t1_ParamLimits

0x7bbe,	// (0x0003a543) main_mup2_pane_t1

0x7bd5,	// (0x0003a55a) main_mup2_pane_t2_ParamLimits

0x7bd5,	// (0x0003a55a) main_mup2_pane_t2

0x7bec,	// (0x0003a571) main_mup2_pane_t3_ParamLimits

0x7bec,	// (0x0003a571) main_mup2_pane_t3

0x7c03,	// (0x0003a588) main_mup2_pane_t4_ParamLimits

0x7c03,	// (0x0003a588) main_mup2_pane_t4

0x7c1d,	// (0x0003a5a2) main_mup2_pane_t5_ParamLimits

0x7c1d,	// (0x0003a5a2) main_mup2_pane_t5

0x7c37,	// (0x0003a5bc) main_mup2_pane_t6_ParamLimits

0x7c37,	// (0x0003a5bc) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00042010) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00042010) main_mup2_pane_t

0x7c6f,	// (0x0003a5f4) mup2_visualizer_pane_ParamLimits

0x7c6f,	// (0x0003a5f4) mup2_visualizer_pane

0x7ca5,	// (0x0003a62a) mup_progress_pane_cp_ParamLimits

0x7ca5,	// (0x0003a62a) mup_progress_pane_cp

0x7db0,	// (0x0003a735) mup_volume_pane_cp_ParamLimits

0x7db0,	// (0x0003a735) mup_volume_pane_cp

0x7cbc,	// (0x0003a641) mup2_visualizer_pane_g1_ParamLimits

0x7cbc,	// (0x0003a641) mup2_visualizer_pane_g1

0xe526,	// (0x00040eab) mup2_visualizer_pane_g2_ParamLimits

0xe526,	// (0x00040eab) mup2_visualizer_pane_g2

0x7cd1,	// (0x0003a656) mup2_visualizer_pane_g3_ParamLimits

0x7cd1,	// (0x0003a656) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0004201d) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0004201d) mup2_visualizer_pane_g

0xd2c6,	// (0x0003fc4b) aid_size_cell_fmradio

0x7546,	// (0x00039ecb) aid_height_parent_landcape

0xc89f,	// (0x0003f224) wml_content_pane_cp

0xc8a7,	// (0x0003f22c) wml_tabs_pane

0xc8b0,	// (0x0003f235) popup_wml_miniature_window

0xc8b8,	// (0x0003f23d) scroll_pane_cp021

0xc8cc,	// (0x0003f251) wml_content_pane_comp8

0xc1ee,	// (0x0003eb73) bg_popup_sub_pane_cp05

0xe544,	// (0x00040ec9) popup_wml_miniature_window_g1

0xe54c,	// (0x00040ed1) wml_miniature_view_pane

0x7cdf,	// (0x0003a664) aid_size_wml_view

0x7ce7,	// (0x0003a66c) wml_miniature_view_pane_g1

0x7cf0,	// (0x0003a675) wml_miniature_view_pane_g2

0x7cf9,	// (0x0003a67e) wml_miniature_view_pane_g3

0x7d01,	// (0x0003a686) wml_miniature_view_pane_g4

0x7d09,	// (0x0003a68e) wml_miniature_view_pane_g5

0x7d11,	// (0x0003a696) wml_miniature_view_pane_g6

0x7d19,	// (0x0003a69e) wml_miniature_view_pane_g7

0x7d21,	// (0x0003a6a6) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00042024) wml_miniature_view_pane_g

0xe51a,	// (0x00040e9f) background_graphic_ParamLimits

0xe51a,	// (0x00040e9f) background_graphic

0xe554,	// (0x00040ed9) wml_tabs_2_pane

0xe55d,	// (0x00040ee2) wml_tabs_3_pane_ParamLimits

0xe55d,	// (0x00040ee2) wml_tabs_3_pane

0xe56f,	// (0x00040ef4) wml_tabs_4_pane_ParamLimits

0xe56f,	// (0x00040ef4) wml_tabs_4_pane

0xe585,	// (0x00040f0a) wml_tabs_5_pane_ParamLimits

0xe585,	// (0x00040f0a) wml_tabs_5_pane

0xe59f,	// (0x00040f24) wml_tabs_pane_g2_ParamLimits

0xe59f,	// (0x00040f24) wml_tabs_pane_g2

0xe5b3,	// (0x00040f38) wml_tabs_pane_g3_ParamLimits

0xe5b3,	// (0x00040f38) wml_tabs_pane_g3

0x7d29,	// (0x0003a6ae) wml_tabs_2_active_pane_ParamLimits

0x7d29,	// (0x0003a6ae) wml_tabs_2_active_pane

0x7d39,	// (0x0003a6be) wml_tabs_2_passive_pane_ParamLimits

0x7d39,	// (0x0003a6be) wml_tabs_2_passive_pane

0x7d49,	// (0x0003a6ce) wml_tabs_3_active_pane_cp_ParamLimits

0x7d49,	// (0x0003a6ce) wml_tabs_3_active_pane_cp

0x7d5a,	// (0x0003a6df) wml_tabs_3_passive_pane_ParamLimits

0x7d5a,	// (0x0003a6df) wml_tabs_3_passive_pane

0x7d6b,	// (0x0003a6f0) wml_tabs_3_passive_pane_cp_ParamLimits

0x7d6b,	// (0x0003a6f0) wml_tabs_3_passive_pane_cp

0x7d7c,	// (0x0003a701) tabs_4_active_pane

0x7d84,	// (0x0003a709) tabs_4_passive_pane

0x7d8c,	// (0x0003a711) tabs_4_passive_pane_cp

0x7d94,	// (0x0003a719) tabs_4_passive_pane_cp2

0xe2c2,	// (0x00040c47) aid_height_text

0x6b17,	// (0x0003949c) mup_volume_cont_pane_ParamLimits

0x6b17,	// (0x0003949c) mup_volume_cont_pane

0x48dc,	// (0x00037261) aid_size_cell_pinb

0xc479,	// (0x0003edfe) aid_size_list_pinb

0x7c8e,	// (0x0003a613) mup2_volume_cont_pane_ParamLimits

0x7c8e,	// (0x0003a613) mup2_volume_cont_pane

0x7d9c,	// (0x0003a721) mup2_volume_cont_pane_g1_ParamLimits

0x7d9c,	// (0x0003a721) mup2_volume_cont_pane_g1

0x452f,	// (0x00036eb4) aid_size_cell_touch_ParamLimits

0x452f,	// (0x00036eb4) aid_size_cell_touch

0x47bc,	// (0x00037141) touch_pane_ParamLimits

0x47bc,	// (0x00037141) touch_pane

0x4511,	// (0x00036e96) main_rss2_pane

0xe5d0,	// (0x00040f55) listscroll_rss2_pane

0xe5d9,	// (0x00040f5e) rss2_navigation_pane

0xe5e1,	// (0x00040f66) list_rss2_pane

0xce93,	// (0x0003f818) scroll_pane_cp22

0xe5e9,	// (0x00040f6e) rss2_navigation_pane_g1

0xe5f2,	// (0x00040f77) rss2_navigation_pane_g2

0xe5fa,	// (0x00040f7f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00042035) rss2_navigation_pane_g

0xe602,	// (0x00040f87) rss2_navigation_pane_t1

0x7dd5,	// (0x0003a75a) rss2_list_single_pane_ParamLimits

0x7dd5,	// (0x0003a75a) rss2_list_single_pane

0xe610,	// (0x00040f95) rss2_list_single_pane_t2

0xe61e,	// (0x00040fa3) rss2_list_single_pane_t3_ParamLimits

0xe61e,	// (0x00040fa3) rss2_list_single_pane_t3

0xe63b,	// (0x00040fc0) rss2_list_single_pane_t4

0x62df,	// (0x00038c64) smil_status_pane_g1

0xd8c7,	// (0x0004024c) main_image2_pane_ParamLimits

0xd8c7,	// (0x0004024c) main_image2_pane

0x79a1,	// (0x0003a326) main_camera2_pane_g9_ParamLimits

0x79a1,	// (0x0003a326) main_camera2_pane_g9

0x79f5,	// (0x0003a37a) main_camera2_pane_t5_ParamLimits

0x79f5,	// (0x0003a37a) main_camera2_pane_t5

0x7a07,	// (0x0003a38c) main_camera2_pane_t6_ParamLimits

0x7a07,	// (0x0003a38c) main_camera2_pane_t6

0x7e11,	// (0x0003a796) main_image2_pane_g1_ParamLimits

0x7e11,	// (0x0003a796) main_image2_pane_g1

0x70a8,	// (0x00039a2d) smil2_video_pane_ParamLimits

0x70a8,	// (0x00039a2d) smil2_video_pane

0x3324,	// (0x00035ca9) aid_zoom_text_primary_cp

0xbdd3,	// (0x0003e758) popup_preview_fixed_window

0xc808,	// (0x0003f18d) im_reading_pane_g1

0x78eb,	// (0x0003a270) cams2_bc_adjust_pane_cp_ParamLimits

0x78eb,	// (0x0003a270) cams2_bc_adjust_pane_cp

0x7a37,	// (0x0003a3bc) cams2_bc_adjust_pane_ParamLimits

0x7a37,	// (0x0003a3bc) cams2_bc_adjust_pane

0x7e1d,	// (0x0003a7a2) cams2_bc_adjust_pane_g1

0x7e25,	// (0x0003a7aa) cams2_slider_pane

0x7e2e,	// (0x0003a7b3) cams2_slider_pane_g1

0x7e37,	// (0x0003a7bc) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0004203c) cams2_slider_pane_g

0x49b2,	// (0x00037337) calc_display_pane_ParamLimits

0x49d0,	// (0x00037355) calc_paper_pane_ParamLimits

0x49ec,	// (0x00037371) grid_calc_pane_ParamLimits

0x6598,	// (0x00038f1d) popup_clock_digital_window_t1_ParamLimits

0xd263,	// (0x0003fbe8) main_image_pane_t1

0x4998,	// (0x0003731d) aid_size_cell_calc_ParamLimits

0x4998,	// (0x0003731d) aid_size_cell_calc

0x7578,	// (0x00039efd) popup_blid_sat_info2_window_ParamLimits

0x7578,	// (0x00039efd) popup_blid_sat_info2_window

0xe651,	// (0x00040fd6) aid_size_cell_blid

0xe659,	// (0x00040fde) bg_popup_window_pane_cp07

0xe684,	// (0x00041009) grid_popup_blid_pane

0xe68e,	// (0x00041013) heading_pane_cp05_ParamLimits

0xe68e,	// (0x00041013) heading_pane_cp05

0xe758,	// (0x000410dd) cell_popup_blid_pane_ParamLimits

0xe758,	// (0x000410dd) cell_popup_blid_pane

0xe77e,	// (0x00041103) cell_popup_blid_pane_g1

0xe786,	// (0x0004110b) cell_popup_blid_pane_t1

0x7c54,	// (0x0003a5d9) mup2_indicator_pane_ParamLimits

0x7c54,	// (0x0003a5d9) mup2_indicator_pane

0xcfe0,	// (0x0003f965) mup2_visualizer_osc_pane

0xe532,	// (0x00040eb7) mup2_visualizer_spec_pane_ParamLimits

0xe532,	// (0x00040eb7) mup2_visualizer_spec_pane

0x7e51,	// (0x0003a7d6) mup2_spec_half_pane

0x7e5a,	// (0x0003a7df) mup2_spec_half_pane_cp

0x7e64,	// (0x0003a7e9) mup2_spec_bar_pane_ParamLimits

0x7e64,	// (0x0003a7e9) mup2_spec_bar_pane

0xe4c7,	// (0x00040e4c) mup2_spec_bar_pane_g1

0xe4d1,	// (0x00040e56) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00041faf) mup2_spec_bar_pane_g

0x7e83,	// (0x0003a808) mup2_osc_middle_pane

0xe4e3,	// (0x00040e68) mup2_visualizer_osc_pane_g1

0xbdfd,	// (0x0003e782) popup_number_entry_window_t1_ParamLimits

0xbe10,	// (0x0003e795) popup_number_entry_window_t2_ParamLimits

0xbe22,	// (0x0003e7a7) popup_number_entry_window_t3_ParamLimits

0x4813,	// (0x00037198) popup_number_entry_window_t5_ParamLimits

0x4813,	// (0x00037198) popup_number_entry_window_t5

0xf0ec,	// (0x00041a71) popup_number_entry_window_t_ParamLimits

0xbe34,	// (0x0003e7b9) text_title_cp2_ParamLimits

0x6d8f,	// (0x00039714) aid_hotspot_pointer_text2_pane

0x6e29,	// (0x000397ae) main_viewer_pane_g9_ParamLimits

0x6e29,	// (0x000397ae) main_viewer_pane_g9

0xca37,	// (0x0003f3bc) cale_month_pane_t1_ParamLimits

0xca74,	// (0x0003f3f9) bg_cale_pane_ParamLimits

0xca8c,	// (0x0003f411) list_cale_pane_ParamLimits

0xc698,	// (0x0003f01d) listscroll_cale_day_pane_t1

0xca9d,	// (0x0003f422) scroll_pane_cp09_ParamLimits

0x6b56,	// (0x000394db) main_mup_eq_pane_t1_ParamLimits

0x6b56,	// (0x000394db) main_mup_eq_pane_t1

0x6b70,	// (0x000394f5) main_mup_eq_pane_t2_ParamLimits

0x6b70,	// (0x000394f5) main_mup_eq_pane_t2

0x6b88,	// (0x0003950d) main_mup_eq_pane_t3_ParamLimits

0x6b88,	// (0x0003950d) main_mup_eq_pane_t3

0x6ba0,	// (0x00039525) main_mup_eq_pane_t4_ParamLimits

0x6ba0,	// (0x00039525) main_mup_eq_pane_t4

0x6bb8,	// (0x0003953d) main_mup_eq_pane_t5_ParamLimits

0x6bb8,	// (0x0003953d) main_mup_eq_pane_t5

0x6bd0,	// (0x00039555) main_mup_eq_pane_t6_ParamLimits

0x6bd0,	// (0x00039555) main_mup_eq_pane_t6

0x6be4,	// (0x00039569) main_mup_eq_pane_t7_ParamLimits

0x6be4,	// (0x00039569) main_mup_eq_pane_t7

0x6bf8,	// (0x0003957d) main_mup_eq_pane_t8_ParamLimits

0x6bf8,	// (0x0003957d) main_mup_eq_pane_t8

0x6c0e,	// (0x00039593) main_mup_eq_pane_t9_ParamLimits

0x6c0e,	// (0x00039593) main_mup_eq_pane_t9

0x6c26,	// (0x000395ab) main_mup_eq_pane_t10_ParamLimits

0x6c26,	// (0x000395ab) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00041dfe) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00041dfe) main_mup_eq_pane_t

0x6ce3,	// (0x00039668) mup_equalizer_pane_cp5_ParamLimits

0x6cf9,	// (0x0003967e) mup_equalizer_pane_cp6_ParamLimits

0x6d11,	// (0x00039696) mup_equalizer_pane_cp7_ParamLimits

0x4511,	// (0x00036e96) main_gallery_pane

0xe4ec,	// (0x00040e71) smil2_volume_pane

0xe4f4,	// (0x00040e79) smil_status_volume_pane_g1_ParamLimits

0xe507,	// (0x00040e8c) smil_status_volume_pane_g2_ParamLimits

0x7762,	// (0x0003a0e7) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00041fb4) smil_status_volume_pane_g_ParamLimits

0xe659,	// (0x00040fde) bg_popup_window_pane_cp07_ParamLimits

0xe667,	// (0x00040fec) blid_firmament_pane

0x7e8c,	// (0x0003a811) aid_size_cell_gallery_ParamLimits

0x7e8c,	// (0x0003a811) aid_size_cell_gallery

0x7e9a,	// (0x0003a81f) grid_gallery_pane_ParamLimits

0x7e9a,	// (0x0003a81f) grid_gallery_pane

0x7eaa,	// (0x0003a82f) cell_gallery_pane_ParamLimits

0x7eaa,	// (0x0003a82f) cell_gallery_pane

0xe794,	// (0x00041119) bg_cell_gallery_focus_pane_ParamLimits

0xe794,	// (0x00041119) bg_cell_gallery_focus_pane

0xe7a6,	// (0x0004112b) cell_gallery_pane_g1_ParamLimits

0xe7a6,	// (0x0004112b) cell_gallery_pane_g1

0x7ef8,	// (0x0003a87d) cell_gallery_pane_g2_ParamLimits

0x7ef8,	// (0x0003a87d) cell_gallery_pane_g2

0x7f05,	// (0x0003a88a) cell_gallery_pane_g3_ParamLimits

0x7f05,	// (0x0003a88a) cell_gallery_pane_g3

0xe7b2,	// (0x00041137) cell_gallery_pane_g4_ParamLimits

0xe7b2,	// (0x00041137) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00042062) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00042062) cell_gallery_pane_g

0xe7be,	// (0x00041143) bg_cell_gallery_focus_pane_g1

0xe7c6,	// (0x0004114b) bg_cell_gallery_focus_pane_g2

0xe7ce,	// (0x00041153) bg_cell_gallery_focus_pane_g3

0xe7d6,	// (0x0004115b) bg_cell_gallery_focus_pane_g4

0xe7de,	// (0x00041163) bg_cell_gallery_focus_pane_g5

0xe7e6,	// (0x0004116b) bg_cell_gallery_focus_pane_g6

0xe7ee,	// (0x00041173) bg_cell_gallery_focus_pane_g7

0xe7f6,	// (0x0004117b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0004206b) bg_cell_gallery_focus_pane_g

0xe7fe,	// (0x00041183) aid_firma_cardinal

0xe812,	// (0x00041197) blid_firmament_pane_t1

0xe829,	// (0x000411ae) blid_firmament_pane_t2

0xe840,	// (0x000411c5) blid_firmament_pane_t3

0xe857,	// (0x000411dc) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0004207c) blid_firmament_pane_t

0xe86e,	// (0x000411f3) blid_sat_info_pane

0xe87e,	// (0x00041203) blid_sat_info_pane_g1

0xe87e,	// (0x00041203) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00042085) blid_sat_info_pane_g

0xe888,	// (0x0004120d) blid_sat_info_pane_t1

0xe896,	// (0x0004121b) smil2_volume_content_pane

0xe89f,	// (0x00041224) smil2_volume_pane_g1

0xe8a7,	// (0x0004122c) smil2_volume_content_pane_g1

0xe8b0,	// (0x00041235) smil2_volume_content_pane_g2

0xe8b9,	// (0x0004123e) smil2_volume_content_pane_g3

0xe8c2,	// (0x00041247) smil2_volume_content_pane_g4

0xe8cb,	// (0x00041250) smil2_volume_content_pane_g5

0xe8d4,	// (0x00041259) smil2_volume_content_pane_g6

0xe8dd,	// (0x00041262) smil2_volume_content_pane_g7

0xe8e6,	// (0x0004126b) smil2_volume_content_pane_g8

0xe8ef,	// (0x00041274) smil2_volume_content_pane_g9

0xe8f8,	// (0x0004127d) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0004208a) smil2_volume_content_pane_g

0x4f90,	// (0x00037915) cale_week_day_heading_pane_t1_ParamLimits

0x4fa4,	// (0x00037929) cale_week_day_heading_pane_t2_ParamLimits

0x4fb8,	// (0x0003793d) cale_week_day_heading_pane_t3_ParamLimits

0x4fcc,	// (0x00037951) cale_week_day_heading_pane_t4_ParamLimits

0x4fe0,	// (0x00037965) cale_week_day_heading_pane_t5_ParamLimits

0x4ff4,	// (0x00037979) cale_week_day_heading_pane_t6_ParamLimits

0x5008,	// (0x0003798d) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00041b76) cale_week_day_heading_pane_t_ParamLimits

0xc6aa,	// (0x0003f02f) bg_cale_side_pane_ParamLimits

0x501c,	// (0x000379a1) cale_week_time_pane_t1_ParamLimits

0x5034,	// (0x000379b9) cale_week_time_pane_t2_ParamLimits

0x504c,	// (0x000379d1) cale_week_time_pane_t3_ParamLimits

0x5064,	// (0x000379e9) cale_week_time_pane_t4_ParamLimits

0x507c,	// (0x00037a01) cale_week_time_pane_t5_ParamLimits

0x5094,	// (0x00037a19) cale_week_time_pane_t6_ParamLimits

0x50b4,	// (0x00037a39) cale_week_time_pane_t7_ParamLimits

0x50d4,	// (0x00037a59) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00041b85) cale_week_time_pane_t_ParamLimits

0x50f4,	// (0x00037a79) cell_cale_week_pane_g2_ParamLimits

0xc6aa,	// (0x0003f02f) bg_cale_side_pane_cp01_ParamLimits

0x6144,	// (0x00038ac9) cale_month_week_pane_t1_ParamLimits

0x615b,	// (0x00038ae0) cale_month_week_pane_t2_ParamLimits

0x6172,	// (0x00038af7) cale_month_week_pane_t3_ParamLimits

0x6189,	// (0x00038b0e) cale_month_week_pane_t4_ParamLimits

0x61a0,	// (0x00038b25) cale_month_week_pane_t5_ParamLimits

0x61bf,	// (0x00038b44) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00041c5e) cale_month_week_pane_t_ParamLimits

0x62ac,	// (0x00038c31) cell_cale_month_pane_g1_ParamLimits

0x4511,	// (0x00036e96) main_cale_event_viewer_pane

0x4511,	// (0x00036e96) listscroll_cale_event_viewer_pane

0xe901,	// (0x00041286) list_cale_ev_pane

0xe909,	// (0x0004128e) scroll_pane_cp023

0xe915,	// (0x0004129a) field_cale_ev_pane_ParamLimits

0xe915,	// (0x0004129a) field_cale_ev_pane

0xe92f,	// (0x000412b4) field_cale_ev_content_pane_ParamLimits

0xe92f,	// (0x000412b4) field_cale_ev_content_pane

0xe93b,	// (0x000412c0) field_cale_ev_pane_g1_ParamLimits

0xe93b,	// (0x000412c0) field_cale_ev_pane_g1

0xe947,	// (0x000412cc) field_cale_ev_pane_g2_ParamLimits

0xe947,	// (0x000412cc) field_cale_ev_pane_g2

0xe95f,	// (0x000412e4) field_cale_ev_pane_g3_ParamLimits

0xe95f,	// (0x000412e4) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0004209f) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0004209f) field_cale_ev_pane_g

0xe977,	// (0x000412fc) field_cale_ev_pane_t1_ParamLimits

0xe977,	// (0x000412fc) field_cale_ev_pane_t1

0xe98e,	// (0x00041313) field_cale_ev_content_pane_t1_ParamLimits

0xe98e,	// (0x00041313) field_cale_ev_content_pane_t1

0xd149,	// (0x0003face) bg_button_pane_cp01

0xc558,	// (0x0003eedd) listscroll_cale_week_pane_ParamLimits

0x4d65,	// (0x000376ea) popup_toolbar_window_cp01

0xc698,	// (0x0003f01d) listscroll_cale_week_pane_t1_ParamLimits

0xc558,	// (0x0003eedd) listscroll_cale_day_pane_ParamLimits

0x4d65,	// (0x000376ea) popup_toolbar_window_cp02

0xc698,	// (0x0003f01d) listscroll_cale_day_pane_t1_ParamLimits

0xc558,	// (0x0003eedd) main_cale_month_pane_ParamLimits

0x763c,	// (0x00039fc1) popup_toolbar_window_cp03_ParamLimits

0x763c,	// (0x00039fc1) popup_toolbar_window_cp03

0x6fba,	// (0x0003993f) main_image_pane_g2_ParamLimits

0x6fba,	// (0x0003993f) main_image_pane_g2

0x6fc6,	// (0x0003994b) main_image_pane_g3_ParamLimits

0x6fc6,	// (0x0003994b) main_image_pane_g3

0x0002,

0xf50b,	// (0x00041e90) main_image_pane_g_ParamLimits

0xf50b,	// (0x00041e90) main_image_pane_g

0xd263,	// (0x0003fbe8) main_image_pane_t1_ParamLimits

0x6fd2,	// (0x00039957) main_image_pane_t2_ParamLimits

0x6fd2,	// (0x00039957) main_image_pane_t2

0x6fe4,	// (0x00039969) main_image_pane_t3_ParamLimits

0x6fe4,	// (0x00039969) main_image_pane_t3

0x6ff6,	// (0x0003997b) main_image_pane_t4_ParamLimits

0x6ff6,	// (0x0003997b) main_image_pane_t4

0x0003,

0xf512,	// (0x00041e97) main_image_pane_t_ParamLimits

0xf512,	// (0x00041e97) main_image_pane_t

0x7008,	// (0x0003998d) popup_image_details_window_cp01

0x7012,	// (0x00039997) popup_toobar_trans_pane_cp01_ParamLimits

0x7012,	// (0x00039997) popup_toobar_trans_pane_cp01

0x75c1,	// (0x00039f46) popup_image_details_window_ParamLimits

0x75c1,	// (0x00039f46) popup_image_details_window

0xe44d,	// (0x00040dd2) popup_image_focus_window

0x78dd,	// (0x0003a262) camera2_autofocus_pane_ParamLimits

0x78dd,	// (0x0003a262) camera2_autofocus_pane

0x4511,	// (0x00036e96) bg_popup_sub_pane_cp06

0xe9ab,	// (0x00041330) popup_image_focus_window_g1

0xe9b3,	// (0x00041338) popup_image_focus_window_g2

0xe9bb,	// (0x00041340) popup_image_focus_window_g3

0xe9c3,	// (0x00041348) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000420a6) popup_image_focus_window_g

0xe9cb,	// (0x00041350) popup_image_focus_window_t1

0xe9d9,	// (0x0004135e) popup_image_focus_window_t2

0xe9e9,	// (0x0004136e) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000420af) popup_image_focus_window_t

0xe9f7,	// (0x0004137c) camera2_autofocus_pane_g1

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp01

0xea05,	// (0x0004138a) popup_image_details_window_g1

0xea18,	// (0x0004139d) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000420c1) popup_image_details_window_g

0xea41,	// (0x000413c6) popup_image_details_window_t1

0xea53,	// (0x000413d8) popup_image_details_window_t2

0xea6c,	// (0x000413f1) popup_image_details_window_t3

0xea80,	// (0x00041405) popup_image_details_window_t4

0xea9b,	// (0x00041420) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000420c8) popup_image_details_window_t

0xc544,	// (0x0003eec9) bg_calc_paper_pane_ParamLimits

0x4511,	// (0x00036e96) grid_highlight_pane_cp013

0x4ae5,	// (0x0003746a) list_calc_pane_ParamLimits

0x4af7,	// (0x0003747c) scroll_pane_cp024

0xc558,	// (0x0003eedd) bg_calc_display_pane_ParamLimits

0x4aff,	// (0x00037484) calc_display_pane_t1_ParamLimits

0x4b14,	// (0x00037499) calc_display_pane_t2_ParamLimits

0x4b29,	// (0x000374ae) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00041af8) calc_display_pane_t_ParamLimits

0x4c10,	// (0x00037595) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00041b15) cell_calc_pane_g

0x4c19,	// (0x0003759e) cell_calc_pane_t1

0xc5b7,	// (0x0003ef3c) grid_highlight_pane_cp02_ParamLimits

0xc5cd,	// (0x0003ef52) toolbar_button_pane_cp01_ParamLimits

0xc5cd,	// (0x0003ef52) toolbar_button_pane_cp01

0xd2a8,	// (0x0003fc2d) temp_image_control_pane_ParamLimits

0xd2a8,	// (0x0003fc2d) temp_image_control_pane

0xd8c7,	// (0x0004024c) main_mp3_pane

0xeab5,	// (0x0004143a) temp_image_control_pane_g1_ParamLimits

0xeab5,	// (0x0004143a) temp_image_control_pane_g1

0xeac3,	// (0x00041448) temp_image_control_pane_g2_ParamLimits

0xeac3,	// (0x00041448) temp_image_control_pane_g2

0xead5,	// (0x0004145a) temp_image_control_pane_g3_ParamLimits

0xead5,	// (0x0004145a) temp_image_control_pane_g3

0x7f42,	// (0x0003a8c7) temp_image_control_pane_g4_ParamLimits

0x7f42,	// (0x0003a8c7) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000420d3) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000420d3) temp_image_control_pane_g

0xeab5,	// (0x0004143a) main_mp3_pane_g1

0x7f53,	// (0x0003a8d8) main_mp3_pane_g2

0x0007,

0xf757,	// (0x000420dc) main_mp3_pane_g

0xeb18,	// (0x0004149d) main_mp3_pane_t1

0xc719,	// (0x0003f09e) main_camera_pane_g8_ParamLimits

0xc719,	// (0x0003f09e) main_camera_pane_g8

0x537c,	// (0x00037d01) main_video_pane_g7_ParamLimits

0x537c,	// (0x00037d01) main_video_pane_g7

0x7a25,	// (0x0003a3aa) main_camera2_pane_t7_ParamLimits

0x7a25,	// (0x0003a3aa) main_camera2_pane_t7

0xc85f,	// (0x0003f1e4) scroll_pane_cp025_ParamLimits

0xc85f,	// (0x0003f1e4) scroll_pane_cp025

0xc873,	// (0x0003f1f8) scroll_pane_cp026_ParamLimits

0xc873,	// (0x0003f1f8) scroll_pane_cp026

0xc882,	// (0x0003f207) wml_content_pane_ParamLimits

0x4511,	// (0x00036e96) main_touch_calib_pane

0x7ff7,	// (0x0003a97c) main_touch_calib_pane_g1

0x8003,	// (0x0003a988) main_touch_calib_pane_g2

0x800f,	// (0x0003a994) main_touch_calib_pane_g3

0x801b,	// (0x0003a9a0) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000420fa) main_touch_calib_pane_g

0x8027,	// (0x0003a9ac) main_touch_calib_pane_t1

0x803e,	// (0x0003a9c3) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00042103) main_touch_calib_pane_t

0xcf21,	// (0x0003f8a6) mup_progress_pane_cp02

0xcf40,	// (0x0003f8c5) navi_pane_g1

0xcfa2,	// (0x0003f927) navi_pane_mp_t3

0xd8c7,	// (0x0004024c) main_mp3_pane_ParamLimits

0x767a,	// (0x00039fff) navi_pane_ParamLimits

0xeab5,	// (0x0004143a) main_mp3_pane_g1_ParamLimits

0x7f53,	// (0x0003a8d8) main_mp3_pane_g2_ParamLimits

0x7f5f,	// (0x0003a8e4) main_mp3_pane_g3_ParamLimits

0x7f5f,	// (0x0003a8e4) main_mp3_pane_g3

0x7f6b,	// (0x0003a8f0) main_mp3_pane_g4_ParamLimits

0x7f6b,	// (0x0003a8f0) main_mp3_pane_g4

0xeae5,	// (0x0004146a) main_mp3_pane_g5_ParamLimits

0xeae5,	// (0x0004146a) main_mp3_pane_g5

0xeaf3,	// (0x00041478) main_mp3_pane_g6_ParamLimits

0xeaf3,	// (0x00041478) main_mp3_pane_g6

0xeb00,	// (0x00041485) main_mp3_pane_g7_ParamLimits

0xeb00,	// (0x00041485) main_mp3_pane_g7

0xeb0c,	// (0x00041491) main_mp3_pane_g8_ParamLimits

0xeb0c,	// (0x00041491) main_mp3_pane_g8

0xf757,	// (0x000420dc) main_mp3_pane_g_ParamLimits

0x7f77,	// (0x0003a8fc) main_mp3_pane_t2

0x7f87,	// (0x0003a90c) main_mp3_pane_t3

0xeb26,	// (0x000414ab) main_mp3_pane_t4

0xeb34,	// (0x000414b9) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000420ed) main_mp3_pane_t

0xeb42,	// (0x000414c7) mup_progress_pane_cp01

0x3324,	// (0x00035ca9) aid_zoom_text_secondary2

0xe901,	// (0x00041286) list_cale_ev2_pane

0xe909,	// (0x0004128e) scroll_pane_cp023_ParamLimits

0x8091,	// (0x0003aa16) field_cale_ev2_pane_ParamLimits

0x8091,	// (0x0003aa16) field_cale_ev2_pane

0x3621,	// (0x00035fa6) field_cale_ev2_pane_g1_ParamLimits

0x3621,	// (0x00035fa6) field_cale_ev2_pane_g1

0x362d,	// (0x00035fb2) field_cale_ev2_pane_g2_ParamLimits

0x362d,	// (0x00035fb2) field_cale_ev2_pane_g2

0x3645,	// (0x00035fca) field_cale_ev2_pane_g3_ParamLimits

0x3645,	// (0x00035fca) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0004210e) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0004210e) field_cale_ev2_pane_g

0x3669,	// (0x00035fee) field_cale_ev2_pane_t1_ParamLimits

0x3669,	// (0x00035fee) field_cale_ev2_pane_t1

0x3680,	// (0x00036005) field_cale_ev2_pane_t2_ParamLimits

0x3680,	// (0x00036005) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x00042117) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x00042117) field_cale_ev2_pane_t

0x6e91,	// (0x00039816) main_postcard_pane_g5_ParamLimits

0x6e91,	// (0x00039816) main_postcard_pane_g5

0x6e9f,	// (0x00039824) main_postcard_pane_g6_ParamLimits

0x6e9f,	// (0x00039824) main_postcard_pane_g6

0x51bc,	// (0x00037b41) camera2_autofocus_pane_cp_ParamLimits

0x51bc,	// (0x00037b41) camera2_autofocus_pane_cp

0xd8c7,	// (0x0004024c) main_mup3_pane

0x80e5,	// (0x0003aa6a) main_mup3_pane_g1_ParamLimits

0x80e5,	// (0x0003aa6a) main_mup3_pane_g1

0x8106,	// (0x0003aa8b) main_mup3_pane_g2_ParamLimits

0x8106,	// (0x0003aa8b) main_mup3_pane_g2

0x8181,	// (0x0003ab06) main_mup3_pane_g3_ParamLimits

0x8181,	// (0x0003ab06) main_mup3_pane_g3

0x81c0,	// (0x0003ab45) main_mup3_pane_g4_ParamLimits

0x81c0,	// (0x0003ab45) main_mup3_pane_g4

0x81ff,	// (0x0003ab84) main_mup3_pane_g5_ParamLimits

0x81ff,	// (0x0003ab84) main_mup3_pane_g5

0x8240,	// (0x0003abc5) main_mup3_pane_g6_ParamLimits

0x8240,	// (0x0003abc5) main_mup3_pane_g6

0xeb4a,	// (0x000414cf) main_mup3_pane_g7_ParamLimits

0xeb4a,	// (0x000414cf) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x00042127) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x00042127) main_mup3_pane_g

0x82b2,	// (0x0003ac37) main_mup3_pane_t1_ParamLimits

0x82b2,	// (0x0003ac37) main_mup3_pane_t1

0x8321,	// (0x0003aca6) main_mup3_pane_t2_ParamLimits

0x8321,	// (0x0003aca6) main_mup3_pane_t2

0x83ea,	// (0x0003ad6f) main_mup3_pane_t4_ParamLimits

0x83ea,	// (0x0003ad6f) main_mup3_pane_t4

0x843c,	// (0x0003adc1) main_mup3_pane_t5_ParamLimits

0x843c,	// (0x0003adc1) main_mup3_pane_t5

0x84e4,	// (0x0003ae69) main_mup3_pane_t6_ParamLimits

0x84e4,	// (0x0003ae69) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x00042138) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x00042138) main_mup3_pane_t

0x858c,	// (0x0003af11) mup3_progress_pane_ParamLimits

0x858c,	// (0x0003af11) mup3_progress_pane

0x85f1,	// (0x0003af76) popup_mup3_control_window_ParamLimits

0x85f1,	// (0x0003af76) popup_mup3_control_window

0xeb58,	// (0x000414dd) popup_mup3_text_window

0x860a,	// (0x0003af8f) mup3_progress_pane_t1

0x8621,	// (0x0003afa6) mup3_progress_pane_t2

0xeb60,	// (0x000414e5) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00042145) mup3_progress_pane_t

0xeb77,	// (0x000414fc) mup_progress_pane_cp03

0x4511,	// (0x00036e96) bg_tb_trans_pane_cp04

0x8638,	// (0x0003afbd) mup3_volume_pane

0x8640,	// (0x0003afc5) popup_mup3_control_window_g1

0x8649,	// (0x0003afce) mup3_volume_pane_g1

0x8652,	// (0x0003afd7) mup3_volume_pane_g2

0x865b,	// (0x0003afe0) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0004214c) mup3_volume_pane_g

0x4511,	// (0x00036e96) bg_tb_trans_pane_cp03

0xeb87,	// (0x0004150c) popup_mup3_text_window_g1

0xeb8f,	// (0x00041514) popup_mup3_text_window_t1

0xc5a0,	// (0x0003ef25) list_calc_item_pane_g1_ParamLimits

0xe5c7,	// (0x00040f4c) mup_volume_pane_cp_g1

0x8055,	// (0x0003a9da) main_touch_calib_pane_t3

0x8069,	// (0x0003a9ee) main_touch_calib_pane_t4

0x807d,	// (0x0003aa02) main_touch_calib_pane_t5

0x451b,	// (0x00036ea0) aid_cell_size_toolbar2

0x4523,	// (0x00036ea8) aid_popup3_width_pane

0x331c,	// (0x00035ca1) aid_zoom_text_msg_primary

0x51a6,	// (0x00037b2b) vorec_t7

0xc564,	// (0x0003eee9) bg_calc_paper_pane_g1_ParamLimits

0xc570,	// (0x0003eef5) bg_calc_paper_pane_g2_ParamLimits

0xc57c,	// (0x0003ef01) bg_calc_paper_pane_g3_ParamLimits

0xc588,	// (0x0003ef0d) bg_calc_paper_pane_g4_ParamLimits

0xc594,	// (0x0003ef19) bg_calc_paper_pane_g5_ParamLimits

0x4b68,	// (0x000374ed) bg_calc_paper_pane_g6_ParamLimits

0x4b79,	// (0x000374fe) bg_calc_paper_pane_g7_ParamLimits

0x4b8a,	// (0x0003750f) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00041aff) bg_calc_paper_pane_g_ParamLimits

0x4b9b,	// (0x00037520) calc_bg_paper_pane_g9_ParamLimits

0x52a5,	// (0x00037c2a) image_qvga_pane_ParamLimits

0x52a5,	// (0x00037c2a) image_qvga_pane

0xc449,	// (0x0003edce) bg_popup_sub_pane_cp04_ParamLimits

0xd1df,	// (0x0003fb64) popup_mup_playback_window_g1_ParamLimits

0xd1eb,	// (0x0003fb70) popup_mup_playback_window_t1_ParamLimits

0xd200,	// (0x0003fb85) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00041e8b) popup_mup_playback_window_t_ParamLimits

0x7b54,	// (0x0003a4d9) main_mup2_pane_g3_ParamLimits

0x7b54,	// (0x0003a4d9) main_mup2_pane_g3

0x5565,	// (0x00037eea) popup_toolbar_window_cp04

0xd5f5,	// (0x0003ff7a) popup_call2_audio_second_window_g3_ParamLimits

0xd5f5,	// (0x0003ff7a) popup_call2_audio_second_window_g3

0xda3c,	// (0x000403c1) popup_call2_audio_first_window_g4_ParamLimits

0xda3c,	// (0x000403c1) popup_call2_audio_first_window_g4

0xe0c4,	// (0x00040a49) popup_call2_audio_in_window_g4_ParamLimits

0xe0c4,	// (0x00040a49) popup_call2_audio_in_window_g4

0x6fad,	// (0x00039932) aid_area_sk_bg_cut_ParamLimits

0x6fad,	// (0x00039932) aid_area_sk_bg_cut

0xd215,	// (0x0003fb9a) aid_area_sk_bg_cut_2_ParamLimits

0xd215,	// (0x0003fb9a) aid_area_sk_bg_cut_2

0x7ee8,	// (0x0003a86d) aid_placing_details_win

0x7ef0,	// (0x0003a875) aid_placing_details_win_2

0xe9f7,	// (0x0004137c) camera2_autofocus_pane_g1_ParamLimits

0x475c,	// (0x000370e1) popup_fixed_preview_cale_window_ParamLimits

0x475c,	// (0x000370e1) popup_fixed_preview_cale_window

0xcff1,	// (0x0003f976) navi_slider_pane_g3

0xcffa,	// (0x0003f97f) navi_slider_pane_g4

0xd003,	// (0x0003f988) navi_slider_pane_g5

0xcff1,	// (0x0003f976) navi_slider_pane_g6

0x68ea,	// (0x0003926f) navi_slider_pane_g7

0xd116,	// (0x0003fa9b) mup_scale_pane_g3

0xd11f,	// (0x0003faa4) mup_scale_pane_g4

0xd128,	// (0x0003faad) mup_scale_pane_g5

0x6d29,	// (0x000396ae) mup_scale_pane_g6

0x6d32,	// (0x000396b7) mup_scale_pane_g7

0xcff1,	// (0x0003f976) cams2_slider_pane_g3

0xe649,	// (0x00040fce) cams2_slider_pane_g4

0x7e40,	// (0x0003a7c5) cams2_slider_pane_g5

0xcff1,	// (0x0003f976) cams2_slider_pane_g6

0x7e48,	// (0x0003a7cd) cams2_slider_pane_g7

0xe87e,	// (0x00041203) camera2_autofocus_pane_cp_g1

0xeb9d,	// (0x00041522) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb9d,	// (0x00041522) bg_popup_preview_window_pane_cp02

0xeba9,	// (0x0004152e) list_fp_cale_pane_ParamLimits

0xeba9,	// (0x0004152e) list_fp_cale_pane

0xebb5,	// (0x0004153a) popup_fixed_preview_cale_window_t1_ParamLimits

0xebb5,	// (0x0004153a) popup_fixed_preview_cale_window_t1

0x8664,	// (0x0003afe9) popup_fixed_preview_cale_window_t2_ParamLimits

0x8664,	// (0x0003afe9) popup_fixed_preview_cale_window_t2

0x8679,	// (0x0003affe) popup_fixed_preview_cale_window_t3_ParamLimits

0x8679,	// (0x0003affe) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00042153) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00042153) popup_fixed_preview_cale_window_t

0x868e,	// (0x0003b013) list_single_fp_cale_pane_ParamLimits

0x868e,	// (0x0003b013) list_single_fp_cale_pane

0xebd3,	// (0x00041558) list_single_fp_cale_pane_g1_ParamLimits

0xebd3,	// (0x00041558) list_single_fp_cale_pane_g1

0xebdf,	// (0x00041564) list_single_fp_cale_pane_g2_ParamLimits

0xebdf,	// (0x00041564) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0004215a) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0004215a) list_single_fp_cale_pane_g

0xebf8,	// (0x0004157d) list_single_fp_cale_pane_t1_ParamLimits

0xebf8,	// (0x0004157d) list_single_fp_cale_pane_t1

0xec0a,	// (0x0004158f) list_single_fp_cale_pane_t2_ParamLimits

0xec0a,	// (0x0004158f) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00042161) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00042161) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4511,	// (0x00036e96) main_dialer_pane

0x86a2,	// (0x0003b027) aid_cell_size_keypad

0x86ac,	// (0x0003b031) dialer_ne_pane

0x86b6,	// (0x0003b03b) grid_dialer_command_1_pane

0x86be,	// (0x0003b043) grid_dialer_command_2_pane

0x86c6,	// (0x0003b04b) grid_dialer_keypad_pane

0x86da,	// (0x0003b05f) bg_popup_call_pane_cp06_ParamLimits

0x86da,	// (0x0003b05f) bg_popup_call_pane_cp06

0x86e6,	// (0x0003b06b) dialer_ne_clear_pane_ParamLimits

0x86e6,	// (0x0003b06b) dialer_ne_clear_pane

0xec3d,	// (0x000415c2) dialer_ne_pane_g1

0xec45,	// (0x000415ca) dialer_ne_pane_t1_ParamLimits

0xec45,	// (0x000415ca) dialer_ne_pane_t1

0x86f2,	// (0x0003b077) dialer_ne_pane_t2_ParamLimits

0x86f2,	// (0x0003b077) dialer_ne_pane_t2

0x870f,	// (0x0003b094) dialer_ne_pane_t3_ParamLimits

0x870f,	// (0x0003b094) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00042166) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00042166) dialer_ne_pane_t

0x8733,	// (0x0003b0b8) dialer_ne_pane_t3_copy1_ParamLimits

0x8733,	// (0x0003b0b8) dialer_ne_pane_t3_copy1

0x8757,	// (0x0003b0dc) cell_dialer_keypad_pane_ParamLimits

0x8757,	// (0x0003b0dc) cell_dialer_keypad_pane

0x876e,	// (0x0003b0f3) cell_dialer_command_1_pane_ParamLimits

0x876e,	// (0x0003b0f3) cell_dialer_command_1_pane

0x8784,	// (0x0003b109) cell_dialer_command_2_pane_ParamLimits

0x8784,	// (0x0003b109) cell_dialer_command_2_pane

0xec57,	// (0x000415dc) bg_button_pane_cp02_ParamLimits

0xec57,	// (0x000415dc) bg_button_pane_cp02

0x8793,	// (0x0003b118) cell_dialer_keypad_pane_g1_ParamLimits

0x8793,	// (0x0003b118) cell_dialer_keypad_pane_g1

0xec57,	// (0x000415dc) bg_button_pane_cp03_ParamLimits

0xec57,	// (0x000415dc) bg_button_pane_cp03

0x87a8,	// (0x0003b12d) cell_dialer_command_1_pane_g1_ParamLimits

0x87a8,	// (0x0003b12d) cell_dialer_command_1_pane_g1

0xec63,	// (0x000415e8) bg_button_pane_cp04

0x87bb,	// (0x0003b140) cell_dialer_command_2_pane_g1

0xcfe0,	// (0x0003f965) bg_button_pane_cp06

0xec6b,	// (0x000415f0) dialer_ne_clear_pane_g1

0x682d,	// (0x000391b2) navi_pane_g2

0x685b,	// (0x000391e0) navi_pane_g3

0x0002,

0xf409,	// (0x00041d8e) navi_pane_g

0x6886,	// (0x0003920b) navi_pane_mv_g2

0x68ad,	// (0x00039232) navi_pane_mv_g5

0x68b5,	// (0x0003923a) navi_pane_mv_t1

0xc558,	// (0x0003eedd) main_clock2_pane

0x87e9,	// (0x0003b16e) main_clock2_list_pane_ParamLimits

0x87e9,	// (0x0003b16e) main_clock2_list_pane

0x8811,	// (0x0003b196) main_clock2_pane_t1_ParamLimits

0x8811,	// (0x0003b196) main_clock2_pane_t1

0x8841,	// (0x0003b1c6) main_clock2_pane_t2_ParamLimits

0x8841,	// (0x0003b1c6) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0004216d) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0004216d) main_clock2_pane_t

0x88a8,	// (0x0003b22d) popup_clock_analogue_window_cp03_ParamLimits

0x88a8,	// (0x0003b22d) popup_clock_analogue_window_cp03

0x88c8,	// (0x0003b24d) popup_clock_digital_window_cp02_ParamLimits

0x88c8,	// (0x0003b24d) popup_clock_digital_window_cp02

0x893d,	// (0x0003b2c2) main_clock2_list_single_pane_ParamLimits

0x893d,	// (0x0003b2c2) main_clock2_list_single_pane

0xcfe0,	// (0x0003f965) list_highlight_pane_cp05

0xec73,	// (0x000415f8) main_clock2_list_single_pane_t1

0x5565,	// (0x00037eea) popup_toolbar_window_cp04_ParamLimits

0x7f12,	// (0x0003a897) camera2_autofocus_pane_g2_ParamLimits

0x7f12,	// (0x0003a897) camera2_autofocus_pane_g2

0x7f1e,	// (0x0003a8a3) camera2_autofocus_pane_g3_ParamLimits

0x7f1e,	// (0x0003a8a3) camera2_autofocus_pane_g3

0x7f2a,	// (0x0003a8af) camera2_autofocus_pane_g4_ParamLimits

0x7f2a,	// (0x0003a8af) camera2_autofocus_pane_g4

0x7f36,	// (0x0003a8bb) camera2_autofocus_pane_g5_ParamLimits

0x7f36,	// (0x0003a8bb) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000420b6) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000420b6) camera2_autofocus_pane_g

0x80c5,	// (0x0003aa4a) camera2_autofocus_pane_cp_g2

0x80cd,	// (0x0003aa52) camera2_autofocus_pane_cp_g3

0x80d5,	// (0x0003aa5a) camera2_autofocus_pane_cp_g4

0x80dd,	// (0x0003aa62) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0004211c) camera2_autofocus_pane_cp_g

0x86d2,	// (0x0003b057) popup_dialer_spcha_window

0x4511,	// (0x00036e96) bg_popup_sub_pane_cp07

0xec81,	// (0x00041606) list_spcha_pane

0xec89,	// (0x0004160e) list_single_spcha_pane_ParamLimits

0xec89,	// (0x0004160e) list_single_spcha_pane

0x4511,	// (0x00036e96) list_highlight_pane_cp06

0xec9a,	// (0x0004161f) list_single_spcha_pane_t1

0xde6e,	// (0x000407f3) popup_call2_audio_out_window_g4_ParamLimits

0xde6e,	// (0x000407f3) popup_call2_audio_out_window_g4

0x4511,	// (0x00036e96) main_imed2_pane

0xe455,	// (0x00040dda) popup_imed_adjust2_window

0x75cf,	// (0x00039f54) popup_imed_trans_window_ParamLimits

0x75cf,	// (0x00039f54) popup_imed_trans_window

0xe6ba,	// (0x0004103f) popup_blid_sat_info2_window_t1

0xe6c8,	// (0x0004104d) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0004204b) popup_blid_sat_info2_window_t

0x89e7,	// (0x0003b36c) aid_size_cell_colour_35

0x8a01,	// (0x0003b386) aid_size_cell_colour_112

0x8a18,	// (0x0003b39d) aid_size_cell_effect

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp02

0xd8d5,	// (0x0004025a) heading_imed_pane

0x8a32,	// (0x0003b3b7) listscroll_imed_pane

0xeca8,	// (0x0004162d) heading_imed_pane_g1

0xecb0,	// (0x00041635) heading_imed_pane_t1

0xecbe,	// (0x00041643) grid_imed_colour_35_pane_ParamLimits

0xecbe,	// (0x00041643) grid_imed_colour_35_pane

0x8a3e,	// (0x0003b3c3) grid_imed_effect_pane

0xecd9,	// (0x0004165e) list_imed_aspect_pane

0x8a4e,	// (0x0003b3d3) scroll_pane_cp027_ParamLimits

0x8a4e,	// (0x0003b3d3) scroll_pane_cp027

0x8a5a,	// (0x0003b3df) cell_imed_effect_pane_ParamLimits

0x8a5a,	// (0x0003b3df) cell_imed_effect_pane

0xece1,	// (0x00041666) cell_imed_colour_pane_ParamLimits

0xece1,	// (0x00041666) cell_imed_colour_pane

0xed23,	// (0x000416a8) cell_imed_colour_pane_g1_ParamLimits

0xed23,	// (0x000416a8) cell_imed_colour_pane_g1

0xed34,	// (0x000416b9) hgihlgiht_grid_pane_cp016_ParamLimits

0xed34,	// (0x000416b9) hgihlgiht_grid_pane_cp016

0x8a72,	// (0x0003b3f7) cell_imed_effect_pane_g1

0x8a7a,	// (0x0003b3ff) grid_highlight_pane_cp017

0xd8e1,	// (0x00040266) list_imed_single_pane_ParamLimits

0xd8e1,	// (0x00040266) list_imed_single_pane

0x4511,	// (0x00036e96) list_highlight_pane_cp07

0xed45,	// (0x000416ca) list_imed_aspect_pane_comp1_t1

0xe42d,	// (0x00040db2) bg_tb_trans_pane_cp05

0xed67,	// (0x000416ec) popup_imed_adjust2_window_g1

0xed8e,	// (0x00041713) popup_imed_adjust2_window_t1

0xeda6,	// (0x0004172b) slider_imed_adjust_pane

0xedba,	// (0x0004173f) slider_imed_adjust_pane_g1

0xedca,	// (0x0004174f) slider_imed_adjust_pane_g2

0xedda,	// (0x0004175f) slider_imed_adjust_pane_g3

0xedeb,	// (0x00041770) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0004218a) slider_imed_adjust_pane_g

0x8a83,	// (0x0003b408) aid_size_cell_clipart2

0x8a8f,	// (0x0003b414) grid_imed_clipart_pane

0xedfc,	// (0x00041781) scroll_pane_cp031

0x8a99,	// (0x0003b41e) cell_imed_clipart_pane_ParamLimits

0x8a99,	// (0x0003b41e) cell_imed_clipart_pane

0x8ac0,	// (0x0003b445) cell_imed_clipart_pane_g1

0x4511,	// (0x00036e96) grid_highlight_pane_cp014

0x87f5,	// (0x0003b17a) main_clock2_pane_g1_ParamLimits

0x87f5,	// (0x0003b17a) main_clock2_pane_g1

0x88e4,	// (0x0003b269) aid_call2_pane_cp10

0x88f6,	// (0x0003b27b) aid_call_pane_cp10

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g1

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g2

0x8908,	// (0x0003b28d) popup_clock_analogue_window_cp10_g3

0x8908,	// (0x0003b28d) popup_clock_analogue_window_cp10_g4

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00042178) popup_clock_analogue_window_cp10_g

0x891e,	// (0x0003b2a3) popup_clock_analogue_window_cp10_t1

0x894f,	// (0x0003b2d4) clock_digital_number_pane_cp10_ParamLimits

0x894f,	// (0x0003b2d4) clock_digital_number_pane_cp10

0x8967,	// (0x0003b2ec) clock_digital_number_pane_cp11_ParamLimits

0x8967,	// (0x0003b2ec) clock_digital_number_pane_cp11

0x897f,	// (0x0003b304) clock_digital_number_pane_cp12_ParamLimits

0x897f,	// (0x0003b304) clock_digital_number_pane_cp12

0x8997,	// (0x0003b31c) clock_digital_number_pane_cp13_ParamLimits

0x8997,	// (0x0003b31c) clock_digital_number_pane_cp13

0x89af,	// (0x0003b334) clock_digital_separator_pane_cp10_ParamLimits

0x89af,	// (0x0003b334) clock_digital_separator_pane_cp10

0x89c7,	// (0x0003b34c) popup_clock_digital_window_cp02_t1_ParamLimits

0x89c7,	// (0x0003b34c) popup_clock_digital_window_cp02_t1

0xc441,	// (0x0003edc6) clock_digital_number_pane_cp10_g1

0xc441,	// (0x0003edc6) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00042193) clock_digital_number_pane_cp10_g

0xc441,	// (0x0003edc6) clock_digital_separator_pane_cp10_g1

0xc441,	// (0x0003edc6) clock_digital_separator_pane_g2_cp10

0xcfb0,	// (0x0003f935) navi_pane_vded_g4

0xcfb9,	// (0x0003f93e) navi_pane_vded_g5

0xcfc2,	// (0x0003f947) navi_pane_vded_t1

0x4511,	// (0x00036e96) main_vded_pane

0x8ac9,	// (0x0003b44e) main_vded_pane_g1

0x8ad5,	// (0x0003b45a) main_vded_pane_g2

0x8adf,	// (0x0003b464) main_vded_pane_g3

0x0002,

0xf813,	// (0x00042198) main_vded_pane_g

0x8ae9,	// (0x0003b46e) main_vded_pane_t1

0x8af7,	// (0x0003b47c) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0004219f) main_vded_pane_t

0x8b05,	// (0x0003b48a) vded_slider_pane

0x8b0f,	// (0x0003b494) vded_video_pane

0xee04,	// (0x00041789) vded_video_pane_g1

0x8b19,	// (0x0003b49e) vded_video_pane_g2

0xe87e,	// (0x00041203) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000421a4) vded_video_pane_g

0xee0e,	// (0x00041793) vded_slider_pane_g1

0xe5c7,	// (0x00040f4c) vded_slider_pane_g2

0xee17,	// (0x0004179c) vded_slider_pane_g3

0xee20,	// (0x000417a5) vded_slider_pane_g4

0xee29,	// (0x000417ae) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000421ab) vded_slider_pane_g

0x85e3,	// (0x0003af68) mup3_rocker_pane_ParamLimits

0x85e3,	// (0x0003af68) mup3_rocker_pane

0x8b22,	// (0x0003b4a7) mup3_control_keys_pane_g1

0x8b2a,	// (0x0003b4af) mup3_control_keys_pane_g2

0x8b32,	// (0x0003b4b7) mup3_control_keys_pane_g3

0x8b3a,	// (0x0003b4bf) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000421b6) mup3_control_keys_pane_g

0x477a,	// (0x000370ff) popup_toolbar2_fixed_window_cp01_ParamLimits

0x477a,	// (0x000370ff) popup_toolbar2_fixed_window_cp01

0x85fd,	// (0x0003af82) popup_toolbar2_fixed_window_cp02_ParamLimits

0x85fd,	// (0x0003af82) popup_toolbar2_fixed_window_cp02

0xd767,	// (0x000400ec) popup_call2_audio_second_window_t4_ParamLimits

0xd767,	// (0x000400ec) popup_call2_audio_second_window_t4

0xdcdb,	// (0x00040660) popup_call2_audio_first_window_t6_ParamLimits

0xdcdb,	// (0x00040660) popup_call2_audio_first_window_t6

0xdf71,	// (0x000408f6) popup_call2_audio_out_window_t6_ParamLimits

0xdf71,	// (0x000408f6) popup_call2_audio_out_window_t6

0x4511,	// (0x00036e96) main_vitu_pane

0x8b4a,	// (0x0003b4cf) aid_size_cell_itu_ParamLimits

0x8b4a,	// (0x0003b4cf) aid_size_cell_itu

0x47a2,	// (0x00037127) bg_popup_window_pane_cp08_ParamLimits

0x47a2,	// (0x00037127) bg_popup_window_pane_cp08

0x8b58,	// (0x0003b4dd) field_vitu_entry_pane_ParamLimits

0x8b58,	// (0x0003b4dd) field_vitu_entry_pane

0x8b67,	// (0x0003b4ec) grid_vitu_function_pane_ParamLimits

0x8b67,	// (0x0003b4ec) grid_vitu_function_pane

0x8b77,	// (0x0003b4fc) grid_vitu_itu_pane_ParamLimits

0x8b77,	// (0x0003b4fc) grid_vitu_itu_pane

0x8b87,	// (0x0003b50c) cell_vitu_itu_pane_ParamLimits

0x8b87,	// (0x0003b50c) cell_vitu_itu_pane

0x8b9c,	// (0x0003b521) cell_vitu_function_pane_ParamLimits

0x8b9c,	// (0x0003b521) cell_vitu_function_pane

0xd8c7,	// (0x0004024c) bg_popup_sub_pane_cp08_ParamLimits

0xd8c7,	// (0x0004024c) bg_popup_sub_pane_cp08

0x8bb0,	// (0x0003b535) field_vitu_entry_pane_t1_ParamLimits

0x8bb0,	// (0x0003b535) field_vitu_entry_pane_t1

0xee4a,	// (0x000417cf) field_vitu_entry_pane_t2_ParamLimits

0xee4a,	// (0x000417cf) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000421c4) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000421c4) field_vitu_entry_pane_t

0xee67,	// (0x000417ec) bg_button_pane_cp05_ParamLimits

0xee67,	// (0x000417ec) bg_button_pane_cp05

0x8bcd,	// (0x0003b552) cell_vitu_itu_pane_g1

0x8be5,	// (0x0003b56a) cell_vitu_itu_pane_t1_ParamLimits

0x8be5,	// (0x0003b56a) cell_vitu_itu_pane_t1

0x8bf7,	// (0x0003b57c) cell_vitu_itu_pane_t2_ParamLimits

0x8bf7,	// (0x0003b57c) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000421c9) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000421c9) cell_vitu_itu_pane_t

0xee75,	// (0x000417fa) bg_button_pane_cp07

0x8c2c,	// (0x0003b5b1) cell_vitu_function_pane_g1

0x4a10,	// (0x00037395) main_calc_pane_g1

0x4557,	// (0x00036edc) aid_visual_content_pane

0x4511,	// (0x00036e96) main_vradio_pane

0x8c35,	// (0x0003b5ba) main_vradio_pane_g1_ParamLimits

0x8c35,	// (0x0003b5ba) main_vradio_pane_g1

0xee7f,	// (0x00041804) main_vradio_pane_g2_ParamLimits

0xee7f,	// (0x00041804) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000421d0) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000421d0) main_vradio_pane_g

0x8c45,	// (0x0003b5ca) main_vradio_pane_t1_ParamLimits

0x8c45,	// (0x0003b5ca) main_vradio_pane_t1

0x8c57,	// (0x0003b5dc) main_vradio_pane_t2_ParamLimits

0x8c57,	// (0x0003b5dc) main_vradio_pane_t2

0xee8c,	// (0x00041811) main_vradio_pane_t3_ParamLimits

0xee8c,	// (0x00041811) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000421d5) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000421d5) main_vradio_pane_t

0x8c69,	// (0x0003b5ee) vradio_rocker_control_pane_ParamLimits

0x8c69,	// (0x0003b5ee) vradio_rocker_control_pane

0x8c75,	// (0x0003b5fa) vradio_station_info_pane_ParamLimits

0x8c75,	// (0x0003b5fa) vradio_station_info_pane

0xeea0,	// (0x00041825) vradio_frequency_info_pane_ParamLimits

0xeea0,	// (0x00041825) vradio_frequency_info_pane

0xe87e,	// (0x00041203) vradio_station_info_pane_g1

0xeeaf,	// (0x00041834) vradio_station_info_pane_t1_ParamLimits

0xeeaf,	// (0x00041834) vradio_station_info_pane_t1

0xeed1,	// (0x00041856) vradio_station_info_pane_t2_ParamLimits

0xeed1,	// (0x00041856) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x000421dc) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x000421dc) vradio_station_info_pane_t

0xeee3,	// (0x00041868) vradio_tuning_pane

0xeeeb,	// (0x00041870) vradio_rocker_control_pane_g1

0xeef3,	// (0x00041878) vradio_rocker_control_pane_g2

0xeefb,	// (0x00041880) vradio_rocker_control_pane_g3

0xef03,	// (0x00041888) vradio_rocker_control_pane_g4

0xef0b,	// (0x00041890) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000421e1) vradio_rocker_control_pane_g

0x8c84,	// (0x0003b609) vradio_frequency_info_pane_g1

0xef13,	// (0x00041898) vradio_frequency_info_pane_t1_ParamLimits

0xef13,	// (0x00041898) vradio_frequency_info_pane_t1

0x8c8e,	// (0x0003b613) vradio_tuning_pane_g1

0x8c97,	// (0x0003b61c) vradio_tuning_pane_t1

0x45a0,	// (0x00036f25) area_side_right_pane_ParamLimits

0x45a0,	// (0x00036f25) area_side_right_pane

0xe3f4,	// (0x00040d79) status_small_pane_g1

0xe3fc,	// (0x00040d81) status_small_pane_g2

0xe405,	// (0x00040d8a) status_small_pane_g3

0xe40e,	// (0x00040d93) status_small_pane_g4

0x0003,

0xf61c,	// (0x00041fa1) status_small_pane_g

0xe417,	// (0x00040d9c) status_small_pane_t1

0x4511,	// (0x00036e96) main_video3_pane

0xef27,	// (0x000418ac) cams_zoom_vslider_pane

0xef2f,	// (0x000418b4) image3_wide_pane_ParamLimits

0xef2f,	// (0x000418b4) image3_wide_pane

0xef49,	// (0x000418ce) image3_wide_small_pane

0xef55,	// (0x000418da) main_video3_pane_g1_ParamLimits

0xef55,	// (0x000418da) main_video3_pane_g1

0xef71,	// (0x000418f6) main_video3_pane_g2_ParamLimits

0xef71,	// (0x000418f6) main_video3_pane_g2

0x0001,

0xf867,	// (0x000421ec) main_video3_pane_g_ParamLimits

0xf867,	// (0x000421ec) main_video3_pane_g

0xef8d,	// (0x00041912) main_video3_pane_t1_ParamLimits

0xef8d,	// (0x00041912) main_video3_pane_t1

0xefb8,	// (0x0004193d) main_video3_pane_t2_ParamLimits

0xefb8,	// (0x0004193d) main_video3_pane_t2

0xefe3,	// (0x00041968) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00041968) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000421f1) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000421f1) main_video3_pane_t

0xf010,	// (0x00041995) cams_zoom_vslider_pane_g1

0xf019,	// (0x0004199e) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000421f8) cams_zoom_vslider_pane_g

0xf021,	// (0x000419a6) small_slider_vertical_pane

0xe87e,	// (0x00041203) small_slider_vertical_pane_g1

0xe87e,	// (0x00041203) small_slider_vertical_pane_g2

0xf029,	// (0x000419ae) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000421fd) small_slider_vertical_pane_g

0x4511,	// (0x00036e96) main_hwr_training_pane

0xf032,	// (0x000419b7) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x000419b7) hwr_training_instruct_pane

0x8ca6,	// (0x0003b62b) hwr_training_navi_pane_ParamLimits

0x8ca6,	// (0x0003b62b) hwr_training_navi_pane

0x8cc0,	// (0x0003b645) hwr_training_write_pane_ParamLimits

0x8cc0,	// (0x0003b645) hwr_training_write_pane

0x4511,	// (0x00036e96) bg_frame_shadow_pane

0xf069,	// (0x000419ee) hwr_training_write_pane_g1

0xf071,	// (0x000419f6) hwr_training_write_pane_g2

0xf079,	// (0x000419fe) hwr_training_write_pane_g3

0xf081,	// (0x00041a06) hwr_training_write_pane_g4

0xf089,	// (0x00041a0e) hwr_training_write_pane_g5

0xf091,	// (0x00041a16) hwr_training_write_pane_g6

0xf099,	// (0x00041a1e) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00042204) hwr_training_write_pane_g

0x8cf8,	// (0x0003b67d) hwr_training_navi_pane_g1_ParamLimits

0x8cf8,	// (0x0003b67d) hwr_training_navi_pane_g1

0x8d0a,	// (0x0003b68f) hwr_training_navi_pane_g2_ParamLimits

0x8d0a,	// (0x0003b68f) hwr_training_navi_pane_g2

0x8d1c,	// (0x0003b6a1) hwr_training_navi_pane_g3_ParamLimits

0x8d1c,	// (0x0003b6a1) hwr_training_navi_pane_g3

0x8d2c,	// (0x0003b6b1) hwr_training_navi_pane_g4_ParamLimits

0x8d2c,	// (0x0003b6b1) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00042213) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00042213) hwr_training_navi_pane_g

0x8d46,	// (0x0003b6cb) hwr_training_navi_pane_t1

0x8d54,	// (0x0003b6d9) list_single_hwr_training_instruct_pane_ParamLimits

0x8d54,	// (0x0003b6d9) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00041a26) list_single_hwr_training_instruct_pane_t1

0xe7be,	// (0x00041143) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00041a35) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00041a3d) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00041a45) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00041a4d) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00041a55) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00041a5d) bg_frame_shadow_pane_g7

0xc623,	// (0x0003efa8) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0004221e) bg_frame_shadow_pane_g

0x4511,	// (0x00036e96) main_video_tele_dialer_pane

0x8d8a,	// (0x0003b70f) aid_size_cell_video_keypad_ParamLimits

0x8d8a,	// (0x0003b70f) aid_size_cell_video_keypad

0x8d9a,	// (0x0003b71f) grid_video_dialer_keypad_pane_ParamLimits

0x8d9a,	// (0x0003b71f) grid_video_dialer_keypad_pane

0x8dcc,	// (0x0003b751) video_down_pane_cp_ParamLimits

0x8dcc,	// (0x0003b751) video_down_pane_cp

0x8df4,	// (0x0003b779) cell_video_dialer_keypad_pane_ParamLimits

0x8df4,	// (0x0003b779) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00041a65) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00041a65) bg_button_pane_cp08

0x8e09,	// (0x0003b78e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8e09,	// (0x0003b78e) cell_video_dialer_keypad_pane_g1

0x85d7,	// (0x0003af5c) mup3_rocker2_pane_ParamLimits

0x85d7,	// (0x0003af5c) mup3_rocker2_pane

0xe87e,	// (0x00041203) mup3_rocker2_pane_g1

0x755d,	// (0x00039ee2) main_dialer2_pane

0x4511,	// (0x00036e96) main_mp4_pane

0x8e48,	// (0x0003b7cd) main_mp4_pane_g1_ParamLimits

0x8e48,	// (0x0003b7cd) main_mp4_pane_g1

0x8e56,	// (0x0003b7db) main_mp4_pane_g2_ParamLimits

0x8e56,	// (0x0003b7db) main_mp4_pane_g2

0x8e64,	// (0x0003b7e9) main_mp4_pane_g3_ParamLimits

0x8e64,	// (0x0003b7e9) main_mp4_pane_g3

0x8ea9,	// (0x0003b82e) main_mp4_pane_g4_ParamLimits

0x8ea9,	// (0x0003b82e) main_mp4_pane_g4

0x8ed1,	// (0x0003b856) main_mp4_pane_g5_ParamLimits

0x8ed1,	// (0x0003b856) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0004223e) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0004223e) main_mp4_pane_g

0x8f21,	// (0x0003b8a6) main_mp4_pane_t1_ParamLimits

0x8f21,	// (0x0003b8a6) main_mp4_pane_t1

0x8f7d,	// (0x0003b902) main_mp4_pane_t2_ParamLimits

0x8f7d,	// (0x0003b902) main_mp4_pane_t2

0x009d,	// (0x00032a22) main_mp4_pane_t3_ParamLimits

0x009d,	// (0x00032a22) main_mp4_pane_t3

0x8fcf,	// (0x0003b954) main_mp4_pane_t4_ParamLimits

0x8fcf,	// (0x0003b954) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0004224b) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0004224b) main_mp4_pane_t

0x9013,	// (0x0003b998) mp4_progress_pane_ParamLimits

0x9013,	// (0x0003b998) mp4_progress_pane

0x905d,	// (0x0003b9e2) mp4_rocker_pane_ParamLimits

0x905d,	// (0x0003b9e2) mp4_rocker_pane

0x0173,	// (0x00032af8) mp4_progress_pane_t1

0x018c,	// (0x00032b11) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00042254) mp4_progress_pane_t

0x01a5,	// (0x00032b2a) mup_progress_pane_cp04

0xe87e,	// (0x00041203) mp4_rocker_pane_g1

0x907d,	// (0x0003ba02) aid_cell_size_keypad2_ParamLimits

0x907d,	// (0x0003ba02) aid_cell_size_keypad2

0x908d,	// (0x0003ba12) dialer2_ne_pane_ParamLimits

0x908d,	// (0x0003ba12) dialer2_ne_pane

0x909b,	// (0x0003ba20) grid_dialer2_keypad_pane_ParamLimits

0x909b,	// (0x0003ba20) grid_dialer2_keypad_pane

0x0caf,	// (0x00033634) bg_popup_call_pane_cp07_ParamLimits

0x0caf,	// (0x00033634) bg_popup_call_pane_cp07

0x90ab,	// (0x0003ba30) dialer2_ne_pane_t1_ParamLimits

0x90ab,	// (0x0003ba30) dialer2_ne_pane_t1

0x90d0,	// (0x0003ba55) cell_dialer2_keypad_pane_ParamLimits

0x90d0,	// (0x0003ba55) cell_dialer2_keypad_pane

0x01cd,	// (0x00032b52) bg_button_pane_pane_cp04_ParamLimits

0x01cd,	// (0x00032b52) bg_button_pane_pane_cp04

0x90e7,	// (0x0003ba6c) cell_dialer2_keypad_pane_g1_ParamLimits

0x90e7,	// (0x0003ba6c) cell_dialer2_keypad_pane_g1

0x5427,	// (0x00037dac) aid_placing_vt_set_content_ParamLimits

0x5427,	// (0x00037dac) aid_placing_vt_set_content

0x5453,	// (0x00037dd8) aid_placing_vt_set_title_ParamLimits

0x5453,	// (0x00037dd8) aid_placing_vt_set_title

0x4511,	// (0x00036e96) main_image3_pane

0x9181,	// (0x0003bb06) area_side_right_pane_cp01_ParamLimits

0x9181,	// (0x0003bb06) area_side_right_pane_cp01

0x1293,	// (0x00033c18) main_image3_pane_g1_ParamLimits

0x1293,	// (0x00033c18) main_image3_pane_g1

0x91ae,	// (0x0003bb33) main_image3_pane_g2_ParamLimits

0x91ae,	// (0x0003bb33) main_image3_pane_g2

0x91c7,	// (0x0003bb4c) main_image3_pane_g3_ParamLimits

0x91c7,	// (0x0003bb4c) main_image3_pane_g3

0x91e0,	// (0x0003bb65) main_image3_pane_g4_ParamLimits

0x91e0,	// (0x0003bb65) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00042263) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00042263) main_image3_pane_g

0x91f9,	// (0x0003bb7e) main_image3_pane_t1_ParamLimits

0x91f9,	// (0x0003bb7e) main_image3_pane_t1

0x921e,	// (0x0003bba3) main_image3_pane_t2_ParamLimits

0x921e,	// (0x0003bba3) main_image3_pane_t2

0x923d,	// (0x0003bbc2) main_image3_pane_t3_ParamLimits

0x923d,	// (0x0003bbc2) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0004226c) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0004226c) main_image3_pane_t

0x47a2,	// (0x00037127) grid_sctrl_middle_pane_cp01_ParamLimits

0x47a2,	// (0x00037127) grid_sctrl_middle_pane_cp01

0x929e,	// (0x0003bc23) cell_sctrl_middle_pane_cp01_ParamLimits

0x929e,	// (0x0003bc23) cell_sctrl_middle_pane_cp01

0x92af,	// (0x0003bc34) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x92af,	// (0x0003bc34) cell_sctrl_middle_pane_cp01_g1

0x4511,	// (0x00036e96) main_call4_pane

0x92bc,	// (0x0003bc41) aid_size_button_call4_ParamLimits

0x92bc,	// (0x0003bc41) aid_size_button_call4

0x92ec,	// (0x0003bc71) call4_windows_pane_ParamLimits

0x92ec,	// (0x0003bc71) call4_windows_pane

0x9306,	// (0x0003bc8b) grid_call4_button_pane_ParamLimits

0x9306,	// (0x0003bc8b) grid_call4_button_pane

0x020b,	// (0x00032b90) call4_windows_conf_pane

0x0220,	// (0x00032ba5) popup_call4_audio_first_window_ParamLimits

0x0220,	// (0x00032ba5) popup_call4_audio_first_window

0x026c,	// (0x00032bf1) popup_call4_audio_second_window_ParamLimits

0x026c,	// (0x00032bf1) popup_call4_audio_second_window

0x0280,	// (0x00032c05) popup_call4_audio_wait_window_ParamLimits

0x0280,	// (0x00032c05) popup_call4_audio_wait_window

0x932a,	// (0x0003bcaf) cell_call4_button_pane_ParamLimits

0x932a,	// (0x0003bcaf) cell_call4_button_pane

0x934f,	// (0x0003bcd4) bg_button_pane_cp09_ParamLimits

0x934f,	// (0x0003bcd4) bg_button_pane_cp09

0x935b,	// (0x0003bce0) cell_call4_button_pane_g1_ParamLimits

0x935b,	// (0x0003bce0) cell_call4_button_pane_g1

0x9368,	// (0x0003bced) cell_call4_button_pane_t1_ParamLimits

0x9368,	// (0x0003bced) cell_call4_button_pane_t1

0x02c8,	// (0x00032c4d) popup_call4_audio_conf_window_ParamLimits

0x02c8,	// (0x00032c4d) popup_call4_audio_conf_window

0x860a,	// (0x0003af8f) mup3_progress_pane_t1_ParamLimits

0x8621,	// (0x0003afa6) mup3_progress_pane_t2_ParamLimits

0xeb60,	// (0x000414e5) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00042145) mup3_progress_pane_t_ParamLimits

0xeb77,	// (0x000414fc) mup_progress_pane_cp03_ParamLimits

0x8b42,	// (0x0003b4c7) mup3_control_keys_pane_g4_copy1

0x9041,	// (0x0003b9c6) mp4_rocker2_pane_ParamLimits

0x9041,	// (0x0003b9c6) mp4_rocker2_pane

0x02e4,	// (0x00032c69) mp4_rocker2_pane_g1

0x02dc,	// (0x00032c61) mp4_rocker2_pane_g2

0x937a,	// (0x0003bcff) mp4_rocker2_pane_g3

0x9382,	// (0x0003bd07) mp4_rocker2_pane_g4

0x938a,	// (0x0003bd0f) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00042275) mp4_rocker2_pane_g

0x4511,	// (0x00036e96) main_camera4_pane

0x4511,	// (0x00036e96) main_video4_pane

0x8da8,	// (0x0003b72d) main_video_tele_dialer_pane_t1_ParamLimits

0x8da8,	// (0x0003b72d) main_video_tele_dialer_pane_t1

0x8dba,	// (0x0003b73f) main_video_tele_dialer_pane_t2_ParamLimits

0x8dba,	// (0x0003b73f) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0004222f) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0004222f) main_video_tele_dialer_pane_t

0x93aa,	// (0x0003bd2f) cam4_autofocus_pane_ParamLimits

0x93aa,	// (0x0003bd2f) cam4_autofocus_pane

0x93c4,	// (0x0003bd49) cam4_image_uncrop_pane_ParamLimits

0x93c4,	// (0x0003bd49) cam4_image_uncrop_pane

0x93db,	// (0x0003bd60) cam4_indicators_pane_ParamLimits

0x93db,	// (0x0003bd60) cam4_indicators_pane

0x93f7,	// (0x0003bd7c) main_camera4_pane_g1_ParamLimits

0x93f7,	// (0x0003bd7c) main_camera4_pane_g1

0x9403,	// (0x0003bd88) main_camera4_pane_g2_ParamLimits

0x9403,	// (0x0003bd88) main_camera4_pane_g2

0x9403,	// (0x0003bd88) main_camera4_pane_g3_ParamLimits

0x9403,	// (0x0003bd88) main_camera4_pane_g3

0x940f,	// (0x0003bd94) main_camera4_pane_g4_ParamLimits

0x940f,	// (0x0003bd94) main_camera4_pane_g4

0x941b,	// (0x0003bda0) main_camera4_pane_g5_ParamLimits

0x941b,	// (0x0003bda0) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00042280) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00042280) main_camera4_pane_g

0x9435,	// (0x0003bdba) main_camera4_pane_t1_ParamLimits

0x9435,	// (0x0003bdba) main_camera4_pane_t1

0xeae5,	// (0x0004146a) bg_tb_trans_pane_cp06

0x9485,	// (0x0003be0a) cam4_indicators_pane_g1

0x9496,	// (0x0003be1b) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0004229b) cam4_indicators_pane_g

0x94b4,	// (0x0003be39) cam4_indicators_pane_t1

0x94de,	// (0x0003be63) main_video4_pane_g1_ParamLimits

0x94de,	// (0x0003be63) main_video4_pane_g1

0x94ea,	// (0x0003be6f) main_video4_pane_g2_ParamLimits

0x94ea,	// (0x0003be6f) main_video4_pane_g2

0x94f6,	// (0x0003be7b) main_video4_pane_g3_ParamLimits

0x94f6,	// (0x0003be7b) main_video4_pane_g3

0x9502,	// (0x0003be87) main_video4_pane_g4_ParamLimits

0x9502,	// (0x0003be87) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000422a2) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000422a2) main_video4_pane_g

0x9522,	// (0x0003bea7) vid4_indicators_pane_ParamLimits

0x9522,	// (0x0003bea7) vid4_indicators_pane

0x9540,	// (0x0003bec5) video4_image_uncrop_cif_pane_ParamLimits

0x9540,	// (0x0003bec5) video4_image_uncrop_cif_pane

0x954f,	// (0x0003bed4) video4_image_uncrop_nhd_pane_ParamLimits

0x954f,	// (0x0003bed4) video4_image_uncrop_nhd_pane

0x93c4,	// (0x0003bd49) video4_image_uncrop_vga_pane_ParamLimits

0x93c4,	// (0x0003bd49) video4_image_uncrop_vga_pane

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp07

0x9485,	// (0x0003be0a) vid4_indicators_pane_g1

0x9564,	// (0x0003bee9) vid4_indicators_pane_g2

0x9575,	// (0x0003befa) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000422ad) vid4_indicators_pane_g

0x95a2,	// (0x0003bf27) vid4_indicators_pane_t1

0x95bb,	// (0x0003bf40) cam4_autofocus_pane_g1

0x95c3,	// (0x0003bf48) cam4_autofocus_pane_g2

0x95cb,	// (0x0003bf50) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000422b8) cam4_autofocus_pane_g

0x95d3,	// (0x0003bf58) cam4_autofocus_pane_g3_copy1

0x8dd8,	// (0x0003b75d) video_down_pane_cp_t1

0x8de6,	// (0x0003b76b) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00042234) video_down_pane_cp_t

0x47a2,	// (0x00037127) popup_vitu2_window_ParamLimits

0x47a2,	// (0x00037127) popup_vitu2_window

0x95db,	// (0x0003bf60) aid_size_cell2_itu2_ParamLimits

0x95db,	// (0x0003bf60) aid_size_cell2_itu2

0x95fd,	// (0x0003bf82) aid_size_cell_itu2_ParamLimits

0x95fd,	// (0x0003bf82) aid_size_cell_itu2

0x0caf,	// (0x00033634) bg_popup_window_pane_cp09_ParamLimits

0x0caf,	// (0x00033634) bg_popup_window_pane_cp09

0x9641,	// (0x0003bfc6) field_vitu2_entry_pane_ParamLimits

0x9641,	// (0x0003bfc6) field_vitu2_entry_pane

0x9661,	// (0x0003bfe6) grid_vitu2_function_pane_ParamLimits

0x9661,	// (0x0003bfe6) grid_vitu2_function_pane

0x96a5,	// (0x0003c02a) grid_vitu2_itu_pane_ParamLimits

0x96a5,	// (0x0003c02a) grid_vitu2_itu_pane

0x971b,	// (0x0003c0a0) cell_vitu2_itu_pane_ParamLimits

0x971b,	// (0x0003c0a0) cell_vitu2_itu_pane

0x9730,	// (0x0003c0b5) cell_vitu2_function_pane_ParamLimits

0x9730,	// (0x0003c0b5) cell_vitu2_function_pane

0x03af,	// (0x00032d34) bg_popup_call_pane_cp08_ParamLimits

0x03af,	// (0x00032d34) bg_popup_call_pane_cp08

0x03c8,	// (0x00032d4d) field_vitu2_entry_pane_g1

0x03d4,	// (0x00032d59) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000422bf) field_vitu2_entry_pane_g

0x3695,	// (0x0003601a) field_vitu2_entry_pane_t1_ParamLimits

0x3695,	// (0x0003601a) field_vitu2_entry_pane_t1

0x36c7,	// (0x0003604c) field_vitu2_entry_pane_t2_ParamLimits

0x36c7,	// (0x0003604c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000422c6) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000422c6) field_vitu2_entry_pane_t

0x9771,	// (0x0003c0f6) bg_button_pane_cp010_ParamLimits

0x9771,	// (0x0003c0f6) bg_button_pane_cp010

0x977f,	// (0x0003c104) cell_vitu2_itu_pane_g1

0x979d,	// (0x0003c122) cell_vitu2_itu_pane_t1_ParamLimits

0x979d,	// (0x0003c122) cell_vitu2_itu_pane_t1

0x36e4,	// (0x00036069) cell_vitu2_itu_pane_t2_ParamLimits

0x36e4,	// (0x00036069) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000422d0) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000422d0) cell_vitu2_itu_pane_t

0xd8c7,	// (0x0004024c) bg_button_pane_cp011

0x97ef,	// (0x0003c174) cell_vitu2_function_pane_g1

0x4511,	// (0x00036e96) main_myfav_hc_pane

0x927f,	// (0x0003bc04) popup_image3_note_pane_ParamLimits

0x927f,	// (0x0003bc04) popup_image3_note_pane

0x928d,	// (0x0003bc12) popup_image3_tool_bar_pane_ParamLimits

0x928d,	// (0x0003bc12) popup_image3_tool_bar_pane

0x3752,	// (0x000360d7) cell_vitu2_itu_pane_t3_ParamLimits

0x3752,	// (0x000360d7) cell_vitu2_itu_pane_t3

0x4511,	// (0x00036e96) bg_popup_trans_pane

0x0452,	// (0x00032dd7) grid_image3_tool_bar_pane

0x045c,	// (0x00032de1) bg_popup_trans_pane_g1

0xc968,	// (0x0003f2ed) bg_popup_trans_pane_g2

0x0464,	// (0x00032de9) bg_popup_trans_pane_g3

0x046c,	// (0x00032df1) bg_popup_trans_pane_g4

0x0474,	// (0x00032df9) bg_popup_trans_pane_g5

0x047c,	// (0x00032e01) bg_popup_trans_pane_g6

0x0484,	// (0x00032e09) bg_popup_trans_pane_g7

0x048c,	// (0x00032e11) bg_popup_trans_pane_g8

0xc948,	// (0x0003f2cd) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000422d7) bg_popup_trans_pane_g

0x0494,	// (0x00032e19) cell_image3_tool_bar_pane_ParamLimits

0x0494,	// (0x00032e19) cell_image3_tool_bar_pane

0xe87e,	// (0x00041203) cell_image3_tool_bar_pane_g1

0x4511,	// (0x00036e96) bg_popup_trans_pane_cp1

0x04a8,	// (0x00032e2d) popup_image3_note_pane_t1

0x04b6,	// (0x00032e3b) popup_image3_note_pane_t2

0x04c4,	// (0x00032e49) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000422ea) popup_image3_note_pane_t

0x04d2,	// (0x00032e57) popup_image3_note_pane_t3_copy1

0x9803,	// (0x0003c188) bg_myfav_hc_instruction_pane_ParamLimits

0x9803,	// (0x0003c188) bg_myfav_hc_instruction_pane

0x981b,	// (0x0003c1a0) cell_myfav_contact_pane_ParamLimits

0x981b,	// (0x0003c1a0) cell_myfav_contact_pane

0x9835,	// (0x0003c1ba) cell_myfav_contact_pane_cp1_ParamLimits

0x9835,	// (0x0003c1ba) cell_myfav_contact_pane_cp1

0x984d,	// (0x0003c1d2) cell_myfav_contact_pane_cp2_ParamLimits

0x984d,	// (0x0003c1d2) cell_myfav_contact_pane_cp2

0x9865,	// (0x0003c1ea) cell_myfav_contact_pane_cp3_ParamLimits

0x9865,	// (0x0003c1ea) cell_myfav_contact_pane_cp3

0x987c,	// (0x0003c201) cell_myfav_contact_pane_cp4_ParamLimits

0x987c,	// (0x0003c201) cell_myfav_contact_pane_cp4

0x9892,	// (0x0003c217) cell_myfav_contact_pane_cp5_ParamLimits

0x9892,	// (0x0003c217) cell_myfav_contact_pane_cp5

0x98a6,	// (0x0003c22b) cell_myfav_contact_pane_cp6_ParamLimits

0x98a6,	// (0x0003c22b) cell_myfav_contact_pane_cp6

0x98ba,	// (0x0003c23f) cell_myfav_contact_pane_cp7_ParamLimits

0x98ba,	// (0x0003c23f) cell_myfav_contact_pane_cp7

0x04e0,	// (0x00032e65) listscroll_gen_pane_cp05

0x98d2,	// (0x0003c257) main_myfav_hc_pane_g1_ParamLimits

0x98d2,	// (0x0003c257) main_myfav_hc_pane_g1

0x98ea,	// (0x0003c26f) main_myfav_hc_pane_g2_ParamLimits

0x98ea,	// (0x0003c26f) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000422f1) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000422f1) main_myfav_hc_pane_g

0x991a,	// (0x0003c29f) main_myfav_hc_pane_t1_ParamLimits

0x991a,	// (0x0003c29f) main_myfav_hc_pane_t1

0x04e9,	// (0x00032e6e) main_myfav_hc_pane_t2_ParamLimits

0x04e9,	// (0x00032e6e) main_myfav_hc_pane_t2

0x04fb,	// (0x00032e80) main_myfav_hc_pane_t3_ParamLimits

0x04fb,	// (0x00032e80) main_myfav_hc_pane_t3

0x9931,	// (0x0003c2b6) main_myfav_hc_pane_t4_ParamLimits

0x9931,	// (0x0003c2b6) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000422f8) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000422f8) main_myfav_hc_pane_t

0xe87e,	// (0x00041203) bg_myfav_hc_instruction_pane_g1

0x050d,	// (0x00032e92) cell_myfav_contact_pane_g1_ParamLimits

0x050d,	// (0x00032e92) cell_myfav_contact_pane_g1

0x050d,	// (0x00032e92) cell_myfav_contact_pane_g2_ParamLimits

0x050d,	// (0x00032e92) cell_myfav_contact_pane_g2

0x0519,	// (0x00032e9e) cell_myfav_contact_pane_g3_ParamLimits

0x0519,	// (0x00032e9e) cell_myfav_contact_pane_g3

0xeb4a,	// (0x000414cf) cell_myfav_contact_pane_g4_ParamLimits

0xeb4a,	// (0x000414cf) cell_myfav_contact_pane_g4

0x0526,	// (0x00032eab) cell_myfav_contact_pane_g5_ParamLimits

0x0526,	// (0x00032eab) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00042303) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00042303) cell_myfav_contact_pane_g

0x9902,	// (0x0003c287) main_myfav_hc_pane_g3_ParamLimits

0x9902,	// (0x0003c287) main_myfav_hc_pane_g3

0x46bf,	// (0x00037044) popup_adpt_find_window

0x995b,	// (0x0003c2e0) afind_page_pane_ParamLimits

0x995b,	// (0x0003c2e0) afind_page_pane

0x9968,	// (0x0003c2ed) aid_size_cell_afind_ParamLimits

0x9968,	// (0x0003c2ed) aid_size_cell_afind

0x9982,	// (0x0003c307) bg_popup_sub_pane_cp09_ParamLimits

0x9982,	// (0x0003c307) bg_popup_sub_pane_cp09

0x998f,	// (0x0003c314) find_pane_cp01_ParamLimits

0x998f,	// (0x0003c314) find_pane_cp01

0x0532,	// (0x00032eb7) grid_afind_control_pane_ParamLimits

0x0532,	// (0x00032eb7) grid_afind_control_pane

0x999c,	// (0x0003c321) grid_afind_pane_ParamLimits

0x999c,	// (0x0003c321) grid_afind_pane

0x99b8,	// (0x0003c33d) cell_afind_pane_ParamLimits

0x99b8,	// (0x0003c33d) cell_afind_pane

0xe87e,	// (0x00041203) afind_page_pane_g1

0x9a00,	// (0x0003c385) afind_page_pane_g2

0x9a09,	// (0x0003c38e) afind_page_pane_g3

0x0002,

0xf989,	// (0x0004230e) afind_page_pane_g

0x9a12,	// (0x0003c397) afind_page_pane_t1

0x0546,	// (0x00032ecb) cell_afind_grid_control_pane_ParamLimits

0x0546,	// (0x00032ecb) cell_afind_grid_control_pane

0x01cd,	// (0x00032b52) bg_button_pane_cp69_ParamLimits

0x01cd,	// (0x00032b52) bg_button_pane_cp69

0x9a29,	// (0x0003c3ae) cell_afind_pane_g1_ParamLimits

0x9a29,	// (0x0003c3ae) cell_afind_pane_g1

0x9a36,	// (0x0003c3bb) cell_afind_pane_t1_ParamLimits

0x9a36,	// (0x0003c3bb) cell_afind_pane_t1

0xc763,	// (0x0003f0e8) bg_button_pane_cp72

0x0555,	// (0x00032eda) cell_afind_grid_control_pane_g1

0x70d8,	// (0x00039a5d) aid_image_placing_area_ParamLimits

0x70d8,	// (0x00039a5d) aid_image_placing_area

0xee32,	// (0x000417b7) field_vitu_entry_pane_g1_ParamLimits

0xee32,	// (0x000417b7) field_vitu_entry_pane_g1

0xee3e,	// (0x000417c3) field_vitu_entry_pane_g2_ParamLimits

0xee3e,	// (0x000417c3) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000421bf) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000421bf) field_vitu_entry_pane_g

0x8bcd,	// (0x0003b552) cell_vitu_itu_pane_g1_ParamLimits

0x8c0f,	// (0x0003b594) cell_vitu_itu_pane_t3_ParamLimits

0x8c0f,	// (0x0003b594) cell_vitu_itu_pane_t3

0x0173,	// (0x00032af8) mp4_progress_pane_t1_ParamLimits

0x018c,	// (0x00032b11) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00042254) mp4_progress_pane_t_ParamLimits

0x01a5,	// (0x00032b2a) mup_progress_pane_cp04_ParamLimits

0x9945,	// (0x0003c2ca) main_myfav_hc_pane_t5_ParamLimits

0x9945,	// (0x0003c2ca) main_myfav_hc_pane_t5

0x4563,	// (0x00036ee8) aid_zoom_text_primary

0x46bf,	// (0x00037044) popup_adpt_find_window_ParamLimits

0xd8c7,	// (0x0004024c) main_cam_set_pane

0x93e9,	// (0x0003bd6e) cam4_zoom_pane_ParamLimits

0x93e9,	// (0x0003bd6e) cam4_zoom_pane

0x9a48,	// (0x0003c3cd) main_cam_set_pane_g1_ParamLimits

0x9a48,	// (0x0003c3cd) main_cam_set_pane_g1

0x9a56,	// (0x0003c3db) main_cam_set_pane_g2_ParamLimits

0x9a56,	// (0x0003c3db) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00042315) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00042315) main_cam_set_pane_g

0x9a62,	// (0x0003c3e7) main_cam_set_pane_t1_ParamLimits

0x9a62,	// (0x0003c3e7) main_cam_set_pane_t1

0x9a7e,	// (0x0003c403) main_cset_listscroll_pane_ParamLimits

0x9a7e,	// (0x0003c403) main_cset_listscroll_pane

0x9aa9,	// (0x0003c42e) main_cset_slider_pane_ParamLimits

0x9aa9,	// (0x0003c42e) main_cset_slider_pane

0x0566,	// (0x00032eeb) main_cset_list_pane_ParamLimits

0x0566,	// (0x00032eeb) main_cset_list_pane

0x0576,	// (0x00032efb) scroll_pane_cp028

0x9ac8,	// (0x0003c44d) aid_area_touch_slider

0x9ae4,	// (0x0003c469) cset_slider_pane

0x9b0e,	// (0x0003c493) main_cset_slider_pane_g1

0x9b23,	// (0x0003c4a8) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0004231a) main_cset_slider_pane_g

0x05af,	// (0x00032f34) main_cset_slider_pane_t1

0x9beb,	// (0x0003c570) main_cset_slider_pane_t2

0x9c05,	// (0x0003c58a) main_cset_slider_pane_t3

0x9c1f,	// (0x0003c5a4) main_cset_slider_pane_t4

0x9c3d,	// (0x0003c5c2) main_cset_slider_pane_t5

0x9c5f,	// (0x0003c5e4) main_cset_slider_pane_t6

0x9c76,	// (0x0003c5fb) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0004233f) main_cset_slider_pane_t

0x9d84,	// (0x0003c709) cset_list_set_pane_ParamLimits

0x9d84,	// (0x0003c709) cset_list_set_pane

0x9da1,	// (0x0003c726) aid_position_infowindow_above

0x9da9,	// (0x0003c72e) aid_position_infowindow_below

0x379f,	// (0x00036124) cset_list_set_pane_g1_ParamLimits

0x379f,	// (0x00036124) cset_list_set_pane_g1

0x37ab,	// (0x00036130) cset_list_set_pane_g3_ParamLimits

0x37ab,	// (0x00036130) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0004235e) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0004235e) cset_list_set_pane_g

0x37ba,	// (0x0003613f) cset_list_set_pane_t1_ParamLimits

0x37ba,	// (0x0003613f) cset_list_set_pane_t1

0xd8c7,	// (0x0004024c) list_highlight_pane_cp021_ParamLimits

0xd8c7,	// (0x0004024c) list_highlight_pane_cp021

0xd116,	// (0x0003fa9b) cset_slider_pane_g1

0xd128,	// (0x0003faad) cset_slider_pane_g2

0xd11f,	// (0x0003faa4) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00042363) cset_slider_pane_g

0x9db1,	// (0x0003c736) aid_area_touch_cam4_zoom

0x9db9,	// (0x0003c73e) cam4_zoom_cont_pane

0x9dc1,	// (0x0003c746) cam4_zoom_pane_g1

0x9dc9,	// (0x0003c74e) cam4_zoom_pane_g2

0x9dd1,	// (0x0003c756) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0004236a) cam4_zoom_pane_g

0x101e,	// (0x000339a3) cam4_zoom_cont_pane_g1

0x1027,	// (0x000339ac) cam4_zoom_cont_pane_g2

0x1030,	// (0x000339b5) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00042371) cam4_zoom_cont_pane_g

0x92d6,	// (0x0003bc5b) call4_image_pane_ParamLimits

0x92d6,	// (0x0003bc5b) call4_image_pane

0x020b,	// (0x00032b90) call4_windows_conf_pane_ParamLimits

0x024a,	// (0x00032bcf) popup_call4_audio_in_window_ParamLimits

0x024a,	// (0x00032bcf) popup_call4_audio_in_window

0x4511,	// (0x00036e96) bg_popup_call2_act_pane_cp02

0x02c0,	// (0x00032c45) call4_list_conf_pane

0xe87e,	// (0x00041203) call4_image_pane_g1

0xe87e,	// (0x00041203) call4_image_pane_g2

0x0001,

0xf700,	// (0x00042085) call4_image_pane_g

0x068a,	// (0x0003300f) list_single_graphic_popup_conf4_pane_ParamLimits

0x068a,	// (0x0003300f) list_single_graphic_popup_conf4_pane

0x4511,	// (0x00036e96) list_highlight_pane_cp022

0x069d,	// (0x00033022) list_single_graphic_popup_conf4_pane_g1

0xce07,	// (0x0003f78c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00042378) list_single_graphic_popup_conf4_pane_g

0x06a5,	// (0x0003302a) list_single_graphic_popup_conf4_pane_t1

0x55b7,	// (0x00037f3c) popup_vtel_slider_window_ParamLimits

0x55b7,	// (0x00037f3c) popup_vtel_slider_window

0x01bb,	// (0x00032b40) dialer2_ne_pane_t2_ParamLimits

0x01bb,	// (0x00032b40) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00042259) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00042259) dialer2_ne_pane_t

0xd8c7,	// (0x0004024c) bg_popup_sub_pane_cp010_ParamLimits

0xd8c7,	// (0x0004024c) bg_popup_sub_pane_cp010

0x9dd9,	// (0x0003c75e) popup_vtel_slider_window_g1_ParamLimits

0x9dd9,	// (0x0003c75e) popup_vtel_slider_window_g1

0x9de5,	// (0x0003c76a) popup_vtel_slider_window_g2_ParamLimits

0x9de5,	// (0x0003c76a) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0004237d) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0004237d) popup_vtel_slider_window_g

0x9e2d,	// (0x0003c7b2) vtel_slider_pane_ParamLimits

0x9e2d,	// (0x0003c7b2) vtel_slider_pane

0x9e3c,	// (0x0003c7c1) vtel_slider_pane_g1_ParamLimits

0x9e3c,	// (0x0003c7c1) vtel_slider_pane_g1

0x9e49,	// (0x0003c7ce) vtel_slider_pane_g2_ParamLimits

0x9e49,	// (0x0003c7ce) vtel_slider_pane_g2

0x9e56,	// (0x0003c7db) vtel_slider_pane_g3_ParamLimits

0x9e56,	// (0x0003c7db) vtel_slider_pane_g3

0x9e3c,	// (0x0003c7c1) vtel_slider_pane_g4_ParamLimits

0x9e3c,	// (0x0003c7c1) vtel_slider_pane_g4

0x9e63,	// (0x0003c7e8) vtel_slider_pane_g5_ParamLimits

0x9e63,	// (0x0003c7e8) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00042386) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00042386) vtel_slider_pane_g

0x4511,	// (0x00036e96) main_gallery2_pane

0x9623,	// (0x0003bfa8) aid_size_row_itut2_dropdow_list_ParamLimits

0x9623,	// (0x0003bfa8) aid_size_row_itut2_dropdow_list

0x9683,	// (0x0003c008) grid_vitu2_function_top_pane_ParamLimits

0x9683,	// (0x0003c008) grid_vitu2_function_top_pane

0x96d9,	// (0x0003c05e) popup_vitu2_dropdown_list_window_ParamLimits

0x96d9,	// (0x0003c05e) popup_vitu2_dropdown_list_window

0x96f9,	// (0x0003c07e) popup_vitu2_match_list_window

0x9e70,	// (0x0003c7f5) cell_vitu2_function_top_pane_ParamLimits

0x9e70,	// (0x0003c7f5) cell_vitu2_function_top_pane

0x9e90,	// (0x0003c815) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9e90,	// (0x0003c815) cell_vitu2_function_top_pane_cp01

0x9eae,	// (0x0003c833) cell_vitu2_function_top_wide_pane_ParamLimits

0x9eae,	// (0x0003c833) cell_vitu2_function_top_wide_pane

0xd8c7,	// (0x0004024c) bg_button_pane_cp012

0x9ecc,	// (0x0003c851) cell_vitu2_function_top_pane_g1

0x9edb,	// (0x0003c860) bg_button_pane_cp013_ParamLimits

0x9edb,	// (0x0003c860) bg_button_pane_cp013

0x9ef7,	// (0x0003c87c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9ef7,	// (0x0003c87c) cell_vitu2_function_top_wide_pane_g1

0x47a2,	// (0x00037127) bg_popup_sub_pane_cp20

0x9f0f,	// (0x0003c894) list_vitu2_match_list_pane

0x045c,	// (0x00032de1) bg_popup_sub_pane_cp20_g1

0x0464,	// (0x00032de9) bg_popup_sub_pane_cp20_g2

0xc968,	// (0x0003f2ed) bg_popup_sub_pane_cp20_g3

0x046c,	// (0x00032df1) bg_popup_sub_pane_cp20_g4

0xc948,	// (0x0003f2cd) bg_popup_sub_pane_cp20_g5

0x06e5,	// (0x0003306a) bg_popup_sub_pane_cp20_g6

0x047c,	// (0x00032e01) bg_popup_sub_pane_cp20_g7

0x0484,	// (0x00032e09) bg_popup_sub_pane_cp20_g8

0x048c,	// (0x00032e11) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00042391) bg_popup_sub_pane_cp20_g

0x9f27,	// (0x0003c8ac) list_vitu2_match_list_item_pane_ParamLimits

0x9f27,	// (0x0003c8ac) list_vitu2_match_list_item_pane

0x9f39,	// (0x0003c8be) list_vitu2_match_list_item_pane_t1

0x4511,	// (0x00036e96) bg_popup_sub_pane_cp21

0xcd0c,	// (0x0003f691) grid_vitu2_dropdown_list_pane

0x9f47,	// (0x0003c8cc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9f47,	// (0x0003c8cc) cell_vitu2_dropdown_list_char_pane

0x9f68,	// (0x0003c8ed) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9f68,	// (0x0003c8ed) cell_vitu2_dropdown_list_ctrl_pane

0x073f,	// (0x000330c4) cell_vitu2_dropdown_list_char_pane_g1

0x0736,	// (0x000330bb) cell_vitu2_dropdown_list_char_pane_g2

0x072d,	// (0x000330b2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000423ae) cell_vitu2_dropdown_list_char_pane_g

0x9f94,	// (0x0003c919) cell_vitu2_dropdown_list_char_pane_t1

0x9fa2,	// (0x0003c927) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9fa2,	// (0x0003c927) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9fb2,	// (0x0003c937) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9fb2,	// (0x0003c937) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9fc3,	// (0x0003c948) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9fc3,	// (0x0003c948) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9fd3,	// (0x0003c958) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9fd3,	// (0x0003c958) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeae5,	// (0x0004146a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeae5,	// (0x0004146a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000423b5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000423b5) cell_vitu2_dropdown_list_ctrl_pane_g

0x9fef,	// (0x0003c974) aid_size_cell_gallery2_ParamLimits

0x9fef,	// (0x0003c974) aid_size_cell_gallery2

0x9ffd,	// (0x0003c982) grid_gallery2_pane_ParamLimits

0x9ffd,	// (0x0003c982) grid_gallery2_pane

0xa00c,	// (0x0003c991) scroll_pane_cp029_ParamLimits

0xa00c,	// (0x0003c991) scroll_pane_cp029

0xa018,	// (0x0003c99d) cell_gallery2_pane_ParamLimits

0xa018,	// (0x0003c99d) cell_gallery2_pane

0x0748,	// (0x000330cd) cell_gallery2_pane_g2

0xa049,	// (0x0003c9ce) cell_gallery2_pane_g3

0x0752,	// (0x000330d7) cell_gallery2_pane_g4

0x075a,	// (0x000330df) cell_gallery2_pane_g5

0xcfe0,	// (0x0003f965) grid_highlight_pane_cp10

0x96f9,	// (0x0003c07e) popup_vitu2_match_list_window_ParamLimits

0x970b,	// (0x0003c090) popup_vitu2_query_window_ParamLimits

0x970b,	// (0x0003c090) popup_vitu2_query_window

0x4511,	// (0x00036e96) bg_vitu2_candi_button_pane

0x073f,	// (0x000330c4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0736,	// (0x000330bb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x072d,	// (0x000330b2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3824,	// (0x000361a9) bg_button_pane_cp015

0xa051,	// (0x0003c9d6) bg_button_pane_cp016

0xa064,	// (0x0003c9e9) bg_button_pane_cp017

0xe42d,	// (0x00040db2) bg_popup_sub_pane_cp22

0x0762,	// (0x000330e7) popup_vitu2_query_window_g1

0x3857,	// (0x000361dc) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x000423c0) popup_vitu2_query_window_g

0x3874,	// (0x000361f9) popup_vitu2_query_window_t1_ParamLimits

0x3874,	// (0x000361f9) popup_vitu2_query_window_t1

0x38a7,	// (0x0003622c) popup_vitu2_query_window_t2_ParamLimits

0x38a7,	// (0x0003622c) popup_vitu2_query_window_t2

0x38b9,	// (0x0003623e) popup_vitu2_query_window_t3_ParamLimits

0x38b9,	// (0x0003623e) popup_vitu2_query_window_t3

0xa088,	// (0x0003ca0d) popup_vitu2_query_window_t4_ParamLimits

0xa088,	// (0x0003ca0d) popup_vitu2_query_window_t4

0xa0a9,	// (0x0003ca2e) popup_vitu2_query_window_t5_ParamLimits

0xa0a9,	// (0x0003ca2e) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x000423c7) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x000423c7) popup_vitu2_query_window_t

0x055e,	// (0x00032ee3) main_cset_text_pane

0x9ac8,	// (0x0003c44d) aid_area_touch_slider_ParamLimits

0x9ae4,	// (0x0003c469) cset_slider_pane_ParamLimits

0x9b0e,	// (0x0003c493) main_cset_slider_pane_g1_ParamLimits

0x9b23,	// (0x0003c4a8) main_cset_slider_pane_g2_ParamLimits

0x057f,	// (0x00032f04) main_cset_slider_pane_g3_ParamLimits

0x057f,	// (0x00032f04) main_cset_slider_pane_g3

0x9b38,	// (0x0003c4bd) main_cset_slider_pane_g4_ParamLimits

0x9b38,	// (0x0003c4bd) main_cset_slider_pane_g4

0x9b47,	// (0x0003c4cc) main_cset_slider_pane_g5_ParamLimits

0x9b47,	// (0x0003c4cc) main_cset_slider_pane_g5

0x9b55,	// (0x0003c4da) main_cset_slider_pane_g6_ParamLimits

0x9b55,	// (0x0003c4da) main_cset_slider_pane_g6

0xf995,	// (0x0004231a) main_cset_slider_pane_g_ParamLimits

0x05af,	// (0x00032f34) main_cset_slider_pane_t1_ParamLimits

0x9beb,	// (0x0003c570) main_cset_slider_pane_t2_ParamLimits

0x9c05,	// (0x0003c58a) main_cset_slider_pane_t3_ParamLimits

0x9c1f,	// (0x0003c5a4) main_cset_slider_pane_t4_ParamLimits

0x9c3d,	// (0x0003c5c2) main_cset_slider_pane_t5_ParamLimits

0x9c5f,	// (0x0003c5e4) main_cset_slider_pane_t6_ParamLimits

0x9c76,	// (0x0003c5fb) main_cset_slider_pane_t7_ParamLimits

0x9ca4,	// (0x0003c629) main_cset_slider_pane_t8_ParamLimits

0x9ca4,	// (0x0003c629) main_cset_slider_pane_t8

0x9ccc,	// (0x0003c651) main_cset_slider_pane_t9_ParamLimits

0x9ccc,	// (0x0003c651) main_cset_slider_pane_t9

0x9cf4,	// (0x0003c679) main_cset_slider_pane_t10_ParamLimits

0x9cf4,	// (0x0003c679) main_cset_slider_pane_t10

0x9d1c,	// (0x0003c6a1) main_cset_slider_pane_t11_ParamLimits

0x9d1c,	// (0x0003c6a1) main_cset_slider_pane_t11

0x9d46,	// (0x0003c6cb) main_cset_slider_pane_t12_ParamLimits

0x9d46,	// (0x0003c6cb) main_cset_slider_pane_t12

0x9d65,	// (0x0003c6ea) main_cset_slider_pane_t13_ParamLimits

0x9d65,	// (0x0003c6ea) main_cset_slider_pane_t13

0xf9ba,	// (0x0004233f) main_cset_slider_pane_t_ParamLimits

0x4511,	// (0x00036e96) bg_popup_sub_pane_cp011

0x076e,	// (0x000330f3) main_cset_text_pane_g1

0x0776,	// (0x000330fb) main_cset_text_pane_t1

0x0784,	// (0x00033109) main_cset_text_pane_t2

0x0792,	// (0x00033117) main_cset_text_pane_t3

0x07a0,	// (0x00033125) main_cset_text_pane_t4

0x07ae,	// (0x00033133) main_cset_text_pane_t5

0x07bc,	// (0x00033141) main_cset_text_pane_t6

0x07ca,	// (0x0003314f) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x000423d6) main_cset_text_pane_t

0x4511,	// (0x00036e96) main_cam4_burst_pane

0x4511,	// (0x00036e96) main_cam5_pane

0xca61,	// (0x0003f3e6) bg_button_pane_cp019

0x9a20,	// (0x0003c3a5) bg_button_pane_cp020

0x058b,	// (0x00032f10) main_cset_slider_pane_g7_ParamLimits

0x058b,	// (0x00032f10) main_cset_slider_pane_g7

0x0597,	// (0x00032f1c) main_cset_slider_pane_g8_ParamLimits

0x0597,	// (0x00032f1c) main_cset_slider_pane_g8

0x9b6b,	// (0x0003c4f0) main_cset_slider_pane_g9_ParamLimits

0x9b6b,	// (0x0003c4f0) main_cset_slider_pane_g9

0x9b77,	// (0x0003c4fc) main_cset_slider_pane_g10_ParamLimits

0x9b77,	// (0x0003c4fc) main_cset_slider_pane_g10

0x9b83,	// (0x0003c508) main_cset_slider_pane_g11_ParamLimits

0x9b83,	// (0x0003c508) main_cset_slider_pane_g11

0x9b8f,	// (0x0003c514) main_cset_slider_pane_g12_ParamLimits

0x9b8f,	// (0x0003c514) main_cset_slider_pane_g12

0x9b9b,	// (0x0003c520) main_cset_slider_pane_g13_ParamLimits

0x9b9b,	// (0x0003c520) main_cset_slider_pane_g13

0x9ba9,	// (0x0003c52e) main_cset_slider_pane_g14_ParamLimits

0x9ba9,	// (0x0003c52e) main_cset_slider_pane_g14

0x9bb7,	// (0x0003c53c) main_cset_slider_pane_g15_ParamLimits

0x9bb7,	// (0x0003c53c) main_cset_slider_pane_g15

0x05dd,	// (0x00032f62) main_cset_slider_pane_t14_ParamLimits

0x05dd,	// (0x00032f62) main_cset_slider_pane_t14

0x0616,	// (0x00032f9b) main_cset_slider_pane_t15_ParamLimits

0x0616,	// (0x00032f9b) main_cset_slider_pane_t15

0xa0ca,	// (0x0003ca4f) aid_cam4_burst_size_cell_ParamLimits

0xa0ca,	// (0x0003ca4f) aid_cam4_burst_size_cell

0xa0e6,	// (0x0003ca6b) grid_cam4_burst_pane_ParamLimits

0xa0e6,	// (0x0003ca6b) grid_cam4_burst_pane

0xa116,	// (0x0003ca9b) linegrid_cam4_burst_pane_ParamLimits

0xa116,	// (0x0003ca9b) linegrid_cam4_burst_pane

0xa138,	// (0x0003cabd) scroll_pane_cp30_ParamLimits

0xa138,	// (0x0003cabd) scroll_pane_cp30

0xa144,	// (0x0003cac9) cell_cam4_burst_pane_ParamLimits

0xa144,	// (0x0003cac9) cell_cam4_burst_pane

0x07e4,	// (0x00033169) linegrid_cam4_burst_pane_g1_ParamLimits

0x07e4,	// (0x00033169) linegrid_cam4_burst_pane_g1

0xa180,	// (0x0003cb05) linegrid_cam4_burst_pane_g2_ParamLimits

0xa180,	// (0x0003cb05) linegrid_cam4_burst_pane_g2

0x07f1,	// (0x00033176) linegrid_cam4_burst_pane_g3_ParamLimits

0x07f1,	// (0x00033176) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000423e5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000423e5) linegrid_cam4_burst_pane_g

0xa191,	// (0x0003cb16) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa191,	// (0x0003cb16) linegrid_cam4_burst_pane_g3_copy1

0x07fe,	// (0x00033183) linegrid_cam4_burst_pane_g4_ParamLimits

0x07fe,	// (0x00033183) linegrid_cam4_burst_pane_g4

0xa1ab,	// (0x0003cb30) linegrid_cam4_burst_pane_g5_ParamLimits

0xa1ab,	// (0x0003cb30) linegrid_cam4_burst_pane_g5

0xa1bc,	// (0x0003cb41) linegrid_cam4_burst_pane_g6_ParamLimits

0xa1bc,	// (0x0003cb41) linegrid_cam4_burst_pane_g6

0x080b,	// (0x00033190) linegrid_cam4_burst_pane_g7_ParamLimits

0x080b,	// (0x00033190) linegrid_cam4_burst_pane_g7

0xa1cd,	// (0x0003cb52) cell_cam4_burst_pane_g1

0x0824,	// (0x000331a9) main_cam5_pane_t1_ParamLimits

0x0824,	// (0x000331a9) main_cam5_pane_t1

0x0836,	// (0x000331bb) main_cam5_pane_t2_ParamLimits

0x0836,	// (0x000331bb) main_cam5_pane_t2

0x0848,	// (0x000331cd) main_cam5_pane_t3_ParamLimits

0x0848,	// (0x000331cd) main_cam5_pane_t3

0x085a,	// (0x000331df) main_cam5_pane_t4_ParamLimits

0x085a,	// (0x000331df) main_cam5_pane_t4

0x0870,	// (0x000331f5) main_cam5_pane_t5_ParamLimits

0x0870,	// (0x000331f5) main_cam5_pane_t5

0x0882,	// (0x00033207) main_cam5_pane_t6_ParamLimits

0x0882,	// (0x00033207) main_cam5_pane_t6

0x0896,	// (0x0003321b) main_cam5_pane_t7_ParamLimits

0x0896,	// (0x0003321b) main_cam5_pane_t7

0x08a8,	// (0x0003322d) main_cam5_pane_t8_ParamLimits

0x08a8,	// (0x0003322d) main_cam5_pane_t8

0x08c4,	// (0x00033249) main_cam5_pane_t9_ParamLimits

0x08c4,	// (0x00033249) main_cam5_pane_t9

0x08d6,	// (0x0003325b) main_cam5_pane_t10_ParamLimits

0x08d6,	// (0x0003325b) main_cam5_pane_t10

0x08e8,	// (0x0003326d) main_cam5_pane_t11_ParamLimits

0x08e8,	// (0x0003326d) main_cam5_pane_t11

0x08fa,	// (0x0003327f) main_cam5_pane_t12_ParamLimits

0x08fa,	// (0x0003327f) main_cam5_pane_t12

0x090f,	// (0x00033294) main_cam5_pane_t13_ParamLimits

0x090f,	// (0x00033294) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000423f1) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000423f1) main_cam5_pane_t

0x476b,	// (0x000370f0) popup_scut_keymap_window_ParamLimits

0x476b,	// (0x000370f0) popup_scut_keymap_window

0xa1e0,	// (0x0003cb65) aid_size_cell_brow_shortcut

0xcfe0,	// (0x0003f965) bg_popup_window_pane_cp010

0xa1ec,	// (0x0003cb71) grid_scut_pane

0xa1f8,	// (0x0003cb7d) cell_scut_pane_ParamLimits

0xa1f8,	// (0x0003cb7d) cell_scut_pane

0xa20f,	// (0x0003cb94) cell_scut_pane_g1

0x092c,	// (0x000332b1) cell_scut_pane_t1

0x093b,	// (0x000332c0) cell_scut_pane_t2

0xa218,	// (0x0003cb9d) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0004240c) cell_scut_pane_t

0x824e,	// (0x0003abd3) main_mup3_pane_g8_ParamLimits

0x824e,	// (0x0003abd3) main_mup3_pane_g8

0x9631,	// (0x0003bfb6) area_vitu2_query_pane_ParamLimits

0x9631,	// (0x0003bfb6) area_vitu2_query_pane

0x3836,	// (0x000361bb) input_focus_pane_cp08

0x094a,	// (0x000332cf) area_vitu2_query_pane_g1

0x3937,	// (0x000362bc) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00042413) area_vitu2_query_pane_g

0xa226,	// (0x0003cbab) area_vitu2_query_pane_t1_ParamLimits

0xa226,	// (0x0003cbab) area_vitu2_query_pane_t1

0xa23a,	// (0x0003cbbf) area_vitu2_query_pane_t2_ParamLimits

0xa23a,	// (0x0003cbbf) area_vitu2_query_pane_t2

0x3948,	// (0x000362cd) area_vitu2_query_pane_t3_ParamLimits

0x3948,	// (0x000362cd) area_vitu2_query_pane_t3

0x3970,	// (0x000362f5) area_vitu2_query_pane_t4_ParamLimits

0x3970,	// (0x000362f5) area_vitu2_query_pane_t4

0x3998,	// (0x0003631d) area_vitu2_query_pane_t5_ParamLimits

0x3998,	// (0x0003631d) area_vitu2_query_pane_t5

0x39c0,	// (0x00036345) area_vitu2_query_pane_t6_ParamLimits

0x39c0,	// (0x00036345) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00042418) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00042418) area_vitu2_query_pane_t

0xa24e,	// (0x0003cbd3) bg_button_pane_cp018

0xa25c,	// (0x0003cbe1) bg_button_pane_cp021

0x3a0c,	// (0x00036391) bg_button_pane_cp022

0x3a1d,	// (0x000363a2) input_focus_pane_cp09

0x67d9,	// (0x0003915e) aid_size_touch_mv_arrow_left

0x6804,	// (0x00039189) aid_size_touch_mv_arrow_right

0x9bcf,	// (0x0003c554) main_cset_slider_pane_g16_ParamLimits

0x9bcf,	// (0x0003c554) main_cset_slider_pane_g16

0x9bdd,	// (0x0003c562) main_cset_slider_pane_g17_ParamLimits

0x9bdd,	// (0x0003c562) main_cset_slider_pane_g17

0xa1cd,	// (0x0003cb52) cell_cam4_burst_pane_g1_ParamLimits

0x4511,	// (0x00036e96) compa_mode_pane

0x9df1,	// (0x0003c776) popup_vtel_slider_window_g3_ParamLimits

0x9df1,	// (0x0003c776) popup_vtel_slider_window_g3

0x9e05,	// (0x0003c78a) popup_vtel_slider_window_g4_ParamLimits

0x9e05,	// (0x0003c78a) popup_vtel_slider_window_g4

0x9e19,	// (0x0003c79e) popup_vtel_slider_window_t1_ParamLimits

0x9e19,	// (0x0003c79e) popup_vtel_slider_window_t1

0x4511,	// (0x00036e96) main_cl_pane

0xe455,	// (0x00040dda) popup_imed_adjust2_window_ParamLimits

0xe42d,	// (0x00040db2) bg_tb_trans_pane_cp05_ParamLimits

0xed67,	// (0x000416ec) popup_imed_adjust2_window_g1_ParamLimits

0xed76,	// (0x000416fb) popup_imed_adjust2_window_g2_ParamLimits

0xed76,	// (0x000416fb) popup_imed_adjust2_window_g2

0xed82,	// (0x00041707) popup_imed_adjust2_window_g3_ParamLimits

0xed82,	// (0x00041707) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00042183) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00042183) popup_imed_adjust2_window_g

0xed8e,	// (0x00041713) popup_imed_adjust2_window_t1_ParamLimits

0xeda6,	// (0x0004172b) slider_imed_adjust_pane_ParamLimits

0xedba,	// (0x0004173f) slider_imed_adjust_pane_g1_ParamLimits

0xedca,	// (0x0004174f) slider_imed_adjust_pane_g2_ParamLimits

0xedda,	// (0x0004175f) slider_imed_adjust_pane_g3_ParamLimits

0xedeb,	// (0x00041770) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0004218a) slider_imed_adjust_pane_g_ParamLimits

0x9392,	// (0x0003bd17) aid_touch_area_cam4_ParamLimits

0x9392,	// (0x0003bd17) aid_touch_area_cam4

0x93a2,	// (0x0003bd27) battery_pane_cp01

0x9429,	// (0x0003bdae) main_camera4_pane_g6_ParamLimits

0x9429,	// (0x0003bdae) main_camera4_pane_g6

0x9447,	// (0x0003bdcc) main_camera4_pane_t2_ParamLimits

0x9447,	// (0x0003bdcc) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0004228d) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0004228d) main_camera4_pane_t

0x94ce,	// (0x0003be53) aid_touch_area_vid4_ParamLimits

0x94ce,	// (0x0003be53) aid_touch_area_vid4

0x950e,	// (0x0003be93) main_video4_pane_g5_ParamLimits

0x950e,	// (0x0003be93) main_video4_pane_g5

0x9530,	// (0x0003beb5) vid4_progress_pane_ParamLimits

0x9530,	// (0x0003beb5) vid4_progress_pane

0x05a3,	// (0x00032f28) main_cset_slider_pane_g18_ParamLimits

0x05a3,	// (0x00032f28) main_cset_slider_pane_g18

0x0818,	// (0x0003319d) cell_cam4_burst_pane_g2_ParamLimits

0x0818,	// (0x0003319d) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000423ec) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000423ec) cell_cam4_burst_pane_g

0xa268,	// (0x0003cbed) bg_cl_pane_ParamLimits

0xa268,	// (0x0003cbed) bg_cl_pane

0xa274,	// (0x0003cbf9) cl_header_pane_ParamLimits

0xa274,	// (0x0003cbf9) cl_header_pane

0xa280,	// (0x0003cc05) cl_listscroll_pane_ParamLimits

0xa280,	// (0x0003cc05) cl_listscroll_pane

0x09f2,	// (0x00033377) bg_cl_pane_g1

0x09fa,	// (0x0003337f) bg_cl_pane_g2

0x0a02,	// (0x00033387) bg_cl_pane_g3

0x0a0a,	// (0x0003338f) bg_cl_pane_g4

0x0a12,	// (0x00033397) bg_cl_pane_g5

0x0a1a,	// (0x0003339f) bg_cl_pane_g6

0x0a22,	// (0x000333a7) bg_cl_pane_g7

0x0a2a,	// (0x000333af) bg_cl_pane_g8

0x0a32,	// (0x000333b7) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00042427) bg_cl_pane_g

0xa28c,	// (0x0003cc11) aid_height_cl_leading_ParamLimits

0xa28c,	// (0x0003cc11) aid_height_cl_leading

0xa298,	// (0x0003cc1d) aid_height_cl_text_ParamLimits

0xa298,	// (0x0003cc1d) aid_height_cl_text

0x47a2,	// (0x00037127) bg_cl_header_pane_ParamLimits

0x47a2,	// (0x00037127) bg_cl_header_pane

0xa2b0,	// (0x0003cc35) cl_header_pane_g1_ParamLimits

0xa2b0,	// (0x0003cc35) cl_header_pane_g1

0xa2bd,	// (0x0003cc42) cl_header_pane_t1_ParamLimits

0xa2bd,	// (0x0003cc42) cl_header_pane_t1

0x0a3a,	// (0x000333bf) cl_list_pane

0x0576,	// (0x00032efb) hc_scroll_pane_cp01

0xc948,	// (0x0003f2cd) bg_cl_header_pane_g1

0x045c,	// (0x00032de1) bg_cl_header_pane_g2

0xc968,	// (0x0003f2ed) bg_cl_header_pane_g3

0x046c,	// (0x00032df1) bg_cl_header_pane_g4

0x0464,	// (0x00032de9) bg_cl_header_pane_g5

0x06e5,	// (0x0003306a) bg_cl_header_pane_g6

0x0484,	// (0x00032e09) bg_cl_header_pane_g7

0x048c,	// (0x00032e11) bg_cl_header_pane_g8

0x047c,	// (0x00032e01) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0004243a) bg_cl_header_pane_g

0xa2cf,	// (0x0003cc54) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa2cf,	// (0x0003cc54) hc_cl_list_double_graphic_heading_pane

0xa2e6,	// (0x0003cc6b) hc_cl_list_single_graphic_pane_ParamLimits

0xa2e6,	// (0x0003cc6b) hc_cl_list_single_graphic_pane

0xa306,	// (0x0003cc8b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa306,	// (0x0003cc8b) hc_cl_list_single_graphic_pane_g1

0xa312,	// (0x0003cc97) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa312,	// (0x0003cc97) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0004244d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0004244d) hc_cl_list_single_graphic_pane_g

0xa326,	// (0x0003ccab) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa326,	// (0x0003ccab) hc_cl_list_single_graphic_pane_t1

0xa306,	// (0x0003cc8b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa306,	// (0x0003cc8b) hc_cl_list_double_graphic_heading_pane_g1

0xa33b,	// (0x0003ccc0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa33b,	// (0x0003ccc0) hc_cl_list_double_graphic_heading_pane_g2

0xa34f,	// (0x0003ccd4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa34f,	// (0x0003ccd4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00042452) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00042452) hc_cl_list_double_graphic_heading_pane_g

0xa363,	// (0x0003cce8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa363,	// (0x0003cce8) hc_cl_list_double_graphic_heading_pane_t1

0xa378,	// (0x0003ccfd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa378,	// (0x0003ccfd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00042459) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00042459) hc_cl_list_double_graphic_heading_pane_t

0xa395,	// (0x0003cd1a) vid4_progress_pane_g1

0xa3a5,	// (0x0003cd2a) vid4_progress_pane_g2

0xa3b5,	// (0x0003cd3a) vid4_progress_pane_g3

0x9496,	// (0x0003be1b) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0004245e) vid4_progress_pane_g

0xa3c1,	// (0x0003cd46) vid4_progress_pane_t1

0xa3d6,	// (0x0003cd5b) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00042469) vid4_progress_pane_t

0xa401,	// (0x0003cd86) wait_bar_pane_cp07

0xe667,	// (0x00040fec) blid_firmament_pane_ParamLimits

0xe6b2,	// (0x00041037) popup_blid_sat_info2_window_g1

0xe6d6,	// (0x0004105b) popup_blid_sat_info2_window_t3

0xe6e4,	// (0x00041069) popup_blid_sat_info2_window_t4

0xe6f2,	// (0x00041077) popup_blid_sat_info2_window_t5

0xe700,	// (0x00041085) popup_blid_sat_info2_window_t6

0xe710,	// (0x00041095) popup_blid_sat_info2_window_t7

0xe71e,	// (0x000410a3) popup_blid_sat_info2_window_t8

0xe72c,	// (0x000410b1) popup_blid_sat_info2_window_t9

0xe73a,	// (0x000410bf) popup_blid_sat_info2_window_t10

0xe7fe,	// (0x00041183) aid_firma_cardinal_ParamLimits

0xe812,	// (0x00041197) blid_firmament_pane_t1_ParamLimits

0xe829,	// (0x000411ae) blid_firmament_pane_t2_ParamLimits

0xe840,	// (0x000411c5) blid_firmament_pane_t3_ParamLimits

0xe857,	// (0x000411dc) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0004207c) blid_firmament_pane_t_ParamLimits

0xe86e,	// (0x000411f3) blid_sat_info_pane_ParamLimits

0xd8c7,	// (0x0004024c) main_cam_set_pane_ParamLimits

0x89e7,	// (0x0003b36c) aid_size_cell_colour_35_ParamLimits

0x8a01,	// (0x0003b386) aid_size_cell_colour_112_ParamLimits

0x8a18,	// (0x0003b39d) aid_size_cell_effect_ParamLimits

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp02_ParamLimits

0xd8d5,	// (0x0004025a) heading_imed_pane_ParamLimits

0x8a32,	// (0x0003b3b7) listscroll_imed_pane_ParamLimits

0xda4e,	// (0x000403d3) popup_call2_audio_first_window_g5_ParamLimits

0xda4e,	// (0x000403d3) popup_call2_audio_first_window_g5

0x914f,	// (0x0003bad4) aid_size_touch_image3_arrow_left_ParamLimits

0x914f,	// (0x0003bad4) aid_size_touch_image3_arrow_left

0x9165,	// (0x0003baea) aid_size_touch_image3_arrow_right_ParamLimits

0x9165,	// (0x0003baea) aid_size_touch_image3_arrow_right

0xa3ec,	// (0x0003cd71) vid4_progress_pane_t3

0x8cd8,	// (0x0003b65d) main_hwr_training_symbol_option_pane_ParamLimits

0x8cd8,	// (0x0003b65d) main_hwr_training_symbol_option_pane

0xf054,	// (0x000419d9) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x000419d9) popup_hwr_training_preview_window

0x8d39,	// (0x0003b6be) hwr_training_navi_pane_g5_ParamLimits

0x8d39,	// (0x0003b6be) hwr_training_navi_pane_g5

0x043c,	// (0x00032dc1) popup_char_count_window

0x47a2,	// (0x00037127) bg_popup_sub_pane_cp20_ParamLimits

0x9f0f,	// (0x0003c894) list_vitu2_match_list_pane_ParamLimits

0x9f1b,	// (0x0003c8a0) vitu2_page_scroll_pane_ParamLimits

0x9f1b,	// (0x0003c8a0) vitu2_page_scroll_pane

0x0b15,	// (0x0003349a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0b15,	// (0x0003349a) list_single_hwr_training_symbol_option_pane

0x0b28,	// (0x000334ad) list_single_hwr_training_symbol_option_pane_g1

0x0b30,	// (0x000334b5) list_single_hwr_training_symbol_option_pane_t1

0x0b3e,	// (0x000334c3) bg_button_pane_cp023

0x0b47,	// (0x000334cc) bg_button_pane_cp024

0xa411,	// (0x0003cd96) vitu2_page_scroll_pane_g1

0xa419,	// (0x0003cd9e) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00042470) vitu2_page_scroll_pane_g

0xa421,	// (0x0003cda6) vitu2_page_scroll_pane_t1

0xe5c7,	// (0x00040f4c) popup_char_count_window_g1

0x0b7a,	// (0x000334ff) popup_char_count_window_g2

0x0b83,	// (0x00033508) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00042475) popup_char_count_window_g

0x0b8c,	// (0x00033511) popup_char_count_window_t1

0x4511,	// (0x00036e96) main_vded2_pane

0xed53,	// (0x000416d8) aid_size_cell_imed_line

0xed5d,	// (0x000416e2) grid_imed_line_width_pane

0x9586,	// (0x0003bf0b) vid4_indicators_pane_g4

0x0b9a,	// (0x0003351f) cell_imed_line_width_pane_ParamLimits

0x0b9a,	// (0x0003351f) cell_imed_line_width_pane

0x0bae,	// (0x00033533) cell_imed_line_width_pane_g1

0xe67c,	// (0x00041001) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0004247c) cell_imed_line_width_pane_g

0xa430,	// (0x0003cdb5) main_vded2_pane_g1_ParamLimits

0xa430,	// (0x0003cdb5) main_vded2_pane_g1

0xa43d,	// (0x0003cdc2) main_vded2_pane_g2_ParamLimits

0xa43d,	// (0x0003cdc2) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00042481) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00042481) main_vded2_pane_g

0xa44b,	// (0x0003cdd0) vded2_slider_pane_ParamLimits

0xa44b,	// (0x0003cdd0) vded2_slider_pane

0xa458,	// (0x0003cddd) aid_size_touch_vded2_end

0xa462,	// (0x0003cde7) aid_size_touch_vded2_playhead

0x0bb7,	// (0x0003353c) aid_size_touch_vded2_start

0x0bbf,	// (0x00033544) vded2_slider_bg_pane

0x0bc8,	// (0x0003354d) vded2_slider_pane_g1

0x0bd1,	// (0x00033556) vded2_slider_pane_g2

0xa46a,	// (0x0003cdef) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00042486) vded2_slider_pane_g

0x0bd9,	// (0x0003355e) vded2_slider_bg_pane_g1

0x0be2,	// (0x00033567) vded2_slider_bg_pane_g2

0x0beb,	// (0x00033570) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0004248d) vded2_slider_bg_pane_g

0x6e35,	// (0x000397ba) aid_postcard_touch_down_pane_ParamLimits

0x6e35,	// (0x000397ba) aid_postcard_touch_down_pane

0x6e45,	// (0x000397ca) aid_postcard_touch_up_pane_ParamLimits

0x6e45,	// (0x000397ca) aid_postcard_touch_up_pane

0x4511,	// (0x00036e96) main_blid2_pane

0xe43b,	// (0x00040dc0) popup_blid2_search_window

0x4511,	// (0x00036e96) blid2_gps_pane

0x4511,	// (0x00036e96) blid2_navig_pane

0x4511,	// (0x00036e96) blid2_search_pane

0x4511,	// (0x00036e96) blid2_tripm_pane

0xa473,	// (0x0003cdf8) blid2_search_pane_g1_ParamLimits

0xa473,	// (0x0003cdf8) blid2_search_pane_g1

0xa483,	// (0x0003ce08) blid2_search_pane_t1_ParamLimits

0xa483,	// (0x0003ce08) blid2_search_pane_t1

0xa495,	// (0x0003ce1a) aid_size_cell_blid2_gps_ParamLimits

0xa495,	// (0x0003ce1a) aid_size_cell_blid2_gps

0xa4a5,	// (0x0003ce2a) blid2_gps_pane_g1_ParamLimits

0xa4a5,	// (0x0003ce2a) blid2_gps_pane_g1

0xa4b1,	// (0x0003ce36) grid_blid2_satellite_pane_ParamLimits

0xa4b1,	// (0x0003ce36) grid_blid2_satellite_pane

0xa4c1,	// (0x0003ce46) blid2_navig_pane_g1_ParamLimits

0xa4c1,	// (0x0003ce46) blid2_navig_pane_g1

0xa4cd,	// (0x0003ce52) blid2_navig_pane_t1_ParamLimits

0xa4cd,	// (0x0003ce52) blid2_navig_pane_t1

0xa4df,	// (0x0003ce64) blid2_navig_pane_t2_ParamLimits

0xa4df,	// (0x0003ce64) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00042494) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00042494) blid2_navig_pane_t

0xa4f1,	// (0x0003ce76) blid2_navig_ring_pane_ParamLimits

0xa4f1,	// (0x0003ce76) blid2_navig_ring_pane

0xa501,	// (0x0003ce86) blid2_speed_pane_ParamLimits

0xa501,	// (0x0003ce86) blid2_speed_pane

0xa50d,	// (0x0003ce92) blid2_tripm_pane_g1_ParamLimits

0xa50d,	// (0x0003ce92) blid2_tripm_pane_g1

0xa51d,	// (0x0003cea2) blid2_tripm_pane_g2_ParamLimits

0xa51d,	// (0x0003cea2) blid2_tripm_pane_g2

0xa529,	// (0x0003ceae) blid2_tripm_pane_g3_ParamLimits

0xa529,	// (0x0003ceae) blid2_tripm_pane_g3

0xa535,	// (0x0003ceba) blid2_tripm_pane_g4_ParamLimits

0xa535,	// (0x0003ceba) blid2_tripm_pane_g4

0xa541,	// (0x0003cec6) blid2_tripm_pane_g5_ParamLimits

0xa541,	// (0x0003cec6) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00042499) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00042499) blid2_tripm_pane_g

0xa55d,	// (0x0003cee2) blid2_tripm_pane_t1_ParamLimits

0xa55d,	// (0x0003cee2) blid2_tripm_pane_t1

0xa571,	// (0x0003cef6) blid2_tripm_pane_t2_ParamLimits

0xa571,	// (0x0003cef6) blid2_tripm_pane_t2

0xa585,	// (0x0003cf0a) blid2_tripm_pane_t3_ParamLimits

0xa585,	// (0x0003cf0a) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000424a6) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000424a6) blid2_tripm_pane_t

0xa5b7,	// (0x0003cf3c) cell_blid2_satellite_pane_ParamLimits

0xa5b7,	// (0x0003cf3c) cell_blid2_satellite_pane

0xa5d1,	// (0x0003cf56) cell_blid2_satellite_pane_g1

0x0bf4,	// (0x00033579) cell_blid2_satellite_pane_t1

0xe87e,	// (0x00041203) blid2_speed_pane_g1

0x0c02,	// (0x00033587) blid2_speed_pane_t1

0x0c10,	// (0x00033595) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000424af) blid2_speed_pane_t

0xe87e,	// (0x00041203) blid2_navig_ring_pane_g1

0xa5da,	// (0x0003cf5f) blid2_navig_ring_pane_g2

0xa5e2,	// (0x0003cf67) blid2_navig_ring_pane_g3

0xa5ea,	// (0x0003cf6f) blid2_navig_ring_pane_g4

0xa5f2,	// (0x0003cf77) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000424b4) blid2_navig_ring_pane_g

0x4511,	// (0x00036e96) bg_popup_window_pane_cp011

0x0c1e,	// (0x000335a3) popup_blid2_search_window_g1

0x0c26,	// (0x000335ab) popup_blid2_search_window_t1

0x0c34,	// (0x000335b9) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x000424bf) popup_blid2_search_window_t

0xc857,	// (0x0003f1dc) main_browser_pane_g1

0xc558,	// (0x0003eedd) main_browser_pane_ParamLimits

0xd8c7,	// (0x0004024c) bg_button_pane_cp011_ParamLimits

0x97ef,	// (0x0003c174) cell_vitu2_function_pane_g1_ParamLimits

0xe42d,	// (0x00040db2) bg_popup_sub_pane_cp22_ParamLimits

0x3836,	// (0x000361bb) input_focus_pane_cp08_ParamLimits

0xa077,	// (0x0003c9fc) popup_vitu2_query_button_pane_ParamLimits

0xa077,	// (0x0003c9fc) popup_vitu2_query_button_pane

0x384d,	// (0x000361d2) popup_vitu2_query_input_button_pane

0x0762,	// (0x000330e7) popup_vitu2_query_window_g1_ParamLimits

0x3857,	// (0x000361dc) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x000423c0) popup_vitu2_query_window_g_ParamLimits

0x4511,	// (0x00036e96) bg_button_pane_cp026

0xa5fa,	// (0x0003cf7f) popup_vitu2_query_input_button_pane_g1

0x4511,	// (0x00036e96) bg_button_pane_cp025

0x0c42,	// (0x000335c7) popup_vitu2_query_button_pane_t1

0x7f97,	// (0x0003a91c) main_mp3_pane_t6

0x7fa7,	// (0x0003a92c) popup_slider_window_cp01

0x947d,	// (0x0003be02) cam4_battery_pane

0x955c,	// (0x0003bee1) cam4_battery_pane_cp02

0xa38d,	// (0x0003cd12) cam4_battery_pane_cp01

0xa38d,	// (0x0003cd12) cam4_battery_pane_cp03

0xe87e,	// (0x00041203) cam4_battery_pane_g1

0x01b1,	// (0x00032b36) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x000424c4) cam4_battery_pane_g

0xe748,	// (0x000410cd) popup_blid_sat_info2_window_t11

0x67d9,	// (0x0003915e) aid_size_touch_mv_arrow_left_ParamLimits

0x6804,	// (0x00039189) aid_size_touch_mv_arrow_right_ParamLimits

0xcf40,	// (0x0003f8c5) navi_pane_g1_ParamLimits

0x682d,	// (0x000391b2) navi_pane_g2_ParamLimits

0x685b,	// (0x000391e0) navi_pane_g3_ParamLimits

0xf409,	// (0x00041d8e) navi_pane_g_ParamLimits

0x68b5,	// (0x0003923a) navi_pane_mv_t1_ParamLimits

0x8a3e,	// (0x0003b3c3) grid_imed_effect_pane_ParamLimits

0x5477,	// (0x00037dfc) aid_placing_vt_slider_lsc

0xc7a8,	// (0x0003f12d) aid_placing_vt_slider_prt

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp01_ParamLimits

0xea05,	// (0x0004138a) popup_image_details_window_g1_ParamLimits

0xea18,	// (0x0004139d) popup_image_details_window_g2_ParamLimits

0xea2d,	// (0x000413b2) popup_image_details_window_g3_ParamLimits

0xea2d,	// (0x000413b2) popup_image_details_window_g3

0xf73c,	// (0x000420c1) popup_image_details_window_g_ParamLimits

0xea41,	// (0x000413c6) popup_image_details_window_t1_ParamLimits

0xea53,	// (0x000413d8) popup_image_details_window_t2_ParamLimits

0xea6c,	// (0x000413f1) popup_image_details_window_t3_ParamLimits

0xea80,	// (0x00041405) popup_image_details_window_t4_ParamLimits

0xea9b,	// (0x00041420) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000420c8) popup_image_details_window_t_ParamLimits

0xa2a4,	// (0x0003cc29) cl_header_name_pane_ParamLimits

0xa2a4,	// (0x0003cc29) cl_header_name_pane

0xa602,	// (0x0003cf87) cl_header_name_pane_t1_ParamLimits

0xa602,	// (0x0003cf87) cl_header_name_pane_t1

0xa619,	// (0x0003cf9e) cl_header_name_pane_t2_ParamLimits

0xa619,	// (0x0003cf9e) cl_header_name_pane_t2

0xa643,	// (0x0003cfc8) cl_header_name_pane_t3_ParamLimits

0xa643,	// (0x0003cfc8) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x000424c9) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x000424c9) cl_header_name_pane_t

0x6886,	// (0x0003920b) navi_pane_mv_g2_ParamLimits

0x03c8,	// (0x00032d4d) field_vitu2_entry_pane_g1_ParamLimits

0x03d4,	// (0x00032d59) field_vitu2_entry_pane_g2_ParamLimits

0x03e0,	// (0x00032d65) field_vitu2_entry_pane_g3_ParamLimits

0x03e0,	// (0x00032d65) field_vitu2_entry_pane_g3

0xf93a,	// (0x000422bf) field_vitu2_entry_pane_g_ParamLimits

0x977f,	// (0x0003c104) cell_vitu2_itu_pane_g1_ParamLimits

0x978f,	// (0x0003c114) cell_vitu2_itu_pane_g2_ParamLimits

0x978f,	// (0x0003c114) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000422cb) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000422cb) cell_vitu2_itu_pane_g

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp05_ParamLimits

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp05

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp03

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp04

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp10_ParamLimits

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp10

0x3a0c,	// (0x00036391) bg_vkb2_func_pane_cp08

0xa24e,	// (0x0003cbd3) bg_vkb2_func_pane_cp06

0xa25c,	// (0x0003cbe1) bg_vkb2_func_pane_cp07

0x0b50,	// (0x000334d5) bg_vkb2_func_pane_cp11_ParamLimits

0x0b50,	// (0x000334d5) bg_vkb2_func_pane_cp11

0x0b65,	// (0x000334ea) bg_vkb2_func_pane_cp12_ParamLimits

0x0b65,	// (0x000334ea) bg_vkb2_func_pane_cp12

0x4511,	// (0x00036e96) bg_vkb2_func_pane_cp09

0x045c,	// (0x00032de1) bg_vkb2_func_pane_g1

0xc968,	// (0x0003f2ed) bg_vkb2_func_pane_g2

0x0464,	// (0x00032de9) bg_vkb2_func_pane_g3

0x046c,	// (0x00032df1) bg_vkb2_func_pane_g4

0x06e5,	// (0x0003306a) bg_vkb2_func_pane_g5

0x0484,	// (0x00032e09) bg_vkb2_func_pane_g6

0x048c,	// (0x00032e11) bg_vkb2_func_pane_g7

0x047c,	// (0x00032e01) bg_vkb2_func_pane_g8

0xc948,	// (0x0003f2cd) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x000424d0) bg_vkb2_func_pane_g

0xa54f,	// (0x0003ced4) blid2_tripm_pane_g6_ParamLimits

0xa54f,	// (0x0003ced4) blid2_tripm_pane_g6

0x016b,	// (0x00032af0) mp4_progress_pane_g1

0xa5ab,	// (0x0003cf30) blid2_tripm_values_pane_ParamLimits

0xa5ab,	// (0x0003cf30) blid2_tripm_values_pane

0xa668,	// (0x0003cfed) blid2_tripm_values_pane_t1

0xa676,	// (0x0003cffb) blid2_tripm_values_pane_t2

0xa684,	// (0x0003d009) blid2_tripm_values_pane_t3

0xa692,	// (0x0003d017) blid2_tripm_values_pane_t4

0xa6a0,	// (0x0003d025) blid2_tripm_values_pane_t5

0xa6ae,	// (0x0003d033) blid2_tripm_values_pane_t6

0xa6bc,	// (0x0003d041) blid2_tripm_values_pane_t7

0xa6ca,	// (0x0003d04f) blid2_tripm_values_pane_t8

0xa6d8,	// (0x0003d05d) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000424e3) blid2_tripm_values_pane_t

0x54b7,	// (0x00037e3c) call_video_pane_t1_ParamLimits

0x54d8,	// (0x00037e5d) call_video_pane_t2_ParamLimits

0xf292,	// (0x00041c17) call_video_pane_t_ParamLimits

0x3598,	// (0x00035f1d) msg_header_pane_g1_ParamLimits

0xd15b,	// (0x0003fae0) msg_header_pane_g2_ParamLimits

0xd15b,	// (0x0003fae0) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00041e31) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00041e31) msg_header_pane_g

0xc558,	// (0x0003eedd) main_clock2_pane_ParamLimits

0x87c3,	// (0x0003b148) grid_clock2_toolbar_pane_ParamLimits

0x87c3,	// (0x0003b148) grid_clock2_toolbar_pane

0x87c3,	// (0x0003b148) listscroll_clock2_pane_ParamLimits

0x87c3,	// (0x0003b148) listscroll_clock2_pane

0x8871,	// (0x0003b1f6) main_clock2_pane_t3_ParamLimits

0x8871,	// (0x0003b1f6) main_clock2_pane_t3

0x8883,	// (0x0003b208) main_clock2_pane_t4_ParamLimits

0x8883,	// (0x0003b208) main_clock2_pane_t4

0x0c50,	// (0x000335d5) cell_clock2_toolbar_pane

0x0c58,	// (0x000335dd) cell_clock2_toolbar_pane_cp01

0x0c58,	// (0x000335dd) cell_clock2_toolbar_pane_cp02

0x0c60,	// (0x000335e5) cell_clock2_toolbar_pane_cp03

0x0c68,	// (0x000335ed) list_clock2_pane

0xce93,	// (0x0003f818) scroll_pane_cp10

0x0c70,	// (0x000335f5) list_single_clock2_pane_ParamLimits

0x0c70,	// (0x000335f5) list_single_clock2_pane

0xcfe0,	// (0x0003f965) list_highlight_pane_cp08

0x0c7d,	// (0x00033602) list_single_clock2_pane_t1

0x0c8b,	// (0x00033610) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000424f6) list_single_clock2_pane_t

0x4511,	// (0x00036e96) bg_button_pane_cp10

0x0c99,	// (0x0003361e) cell_clock2_toolbar_pane_g1

0x6d97,	// (0x0003971c) aid_main_viewer_pane_g1_ParamLimits

0x6d97,	// (0x0003971c) aid_main_viewer_pane_g1

0x6da3,	// (0x00039728) aid_main_viewer_pane_g2_ParamLimits

0x6da3,	// (0x00039728) aid_main_viewer_pane_g2

0x6daf,	// (0x00039734) aid_main_viewer_pane_g3_ParamLimits

0x6daf,	// (0x00039734) aid_main_viewer_pane_g3

0x6dc0,	// (0x00039745) aid_main_viewer_pane_g4_ParamLimits

0x6dc0,	// (0x00039745) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00041e42) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00041e42) aid_main_viewer_pane_g

0x7550,	// (0x00039ed5) main_calc_pane_ParamLimits

0x755d,	// (0x00039ee2) main_dialer2_pane_ParamLimits

0x4511,	// (0x00036e96) main_cam6_pane

0x4511,	// (0x00036e96) main_vid6_pane

0x87cf,	// (0x0003b154) listscroll_gen_pane_cp06_ParamLimits

0x87cf,	// (0x0003b154) listscroll_gen_pane_cp06

0x8895,	// (0x0003b21a) main_clock2_pane_t5_ParamLimits

0x8895,	// (0x0003b21a) main_clock2_pane_t5

0x88e4,	// (0x0003b269) aid_call2_pane_cp10_ParamLimits

0x88f6,	// (0x0003b27b) aid_call_pane_cp10_ParamLimits

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8908,	// (0x0003b28d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8908,	// (0x0003b28d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf15,	// (0x0003f89a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00042178) popup_clock_analogue_window_cp10_g_ParamLimits

0x891e,	// (0x0003b2a3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x90fc,	// (0x0003ba81) cell_dialer2_keypad_pane_g2_ParamLimits

0x90fc,	// (0x0003ba81) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0004225e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0004225e) cell_dialer2_keypad_pane_g

0x9118,	// (0x0003ba9d) cell_dialer2_keypad_pane_t1

0x9ab5,	// (0x0003c43a) main_cset_text2_pane_ParamLimits

0x9ab5,	// (0x0003c43a) main_cset_text2_pane

0x094a,	// (0x000332cf) area_vitu2_query_pane_g1_ParamLimits

0x3937,	// (0x000362bc) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00042413) area_vitu2_query_pane_g_ParamLimits

0x39e8,	// (0x0003636d) area_vitu2_query_pane_t7_ParamLimits

0x39e8,	// (0x0003636d) area_vitu2_query_pane_t7

0xa24e,	// (0x0003cbd3) bg_button_pane_cp018_ParamLimits

0xa25c,	// (0x0003cbe1) bg_button_pane_cp021_ParamLimits

0x3a0c,	// (0x00036391) bg_button_pane_cp022_ParamLimits

0x3a0c,	// (0x00036391) bg_vkb2_func_pane_cp08_ParamLimits

0xa24e,	// (0x0003cbd3) bg_vkb2_func_pane_cp06_ParamLimits

0xa25c,	// (0x0003cbe1) bg_vkb2_func_pane_cp07_ParamLimits

0x3a1d,	// (0x000363a2) input_focus_pane_cp09_ParamLimits

0xa6e6,	// (0x0003d06b) cam6_autofocus_pane_ParamLimits

0xa6e6,	// (0x0003d06b) cam6_autofocus_pane

0xa708,	// (0x0003d08d) cam6_image_uncrop_pane_ParamLimits

0xa708,	// (0x0003d08d) cam6_image_uncrop_pane

0xa735,	// (0x0003d0ba) cam6_indi_pane_ParamLimits

0xa735,	// (0x0003d0ba) cam6_indi_pane

0xa74f,	// (0x0003d0d4) cam6_mode_pane_ParamLimits

0xa74f,	// (0x0003d0d4) cam6_mode_pane

0xa763,	// (0x0003d0e8) cam6_timer_pane_ParamLimits

0xa763,	// (0x0003d0e8) cam6_timer_pane

0xa76f,	// (0x0003d0f4) cam6_zoom_pane_ParamLimits

0xa76f,	// (0x0003d0f4) cam6_zoom_pane

0x94de,	// (0x0003be63) cam6_mode_pane_g1_ParamLimits

0x94de,	// (0x0003be63) cam6_mode_pane_g1

0x94f6,	// (0x0003be7b) cam6_mode_pane_g2_ParamLimits

0x94f6,	// (0x0003be7b) cam6_mode_pane_g2

0x9502,	// (0x0003be87) cam6_mode_pane_g3_ParamLimits

0x9502,	// (0x0003be87) cam6_mode_pane_g3

0x950e,	// (0x0003be93) cam6_mode_pane_g4_ParamLimits

0x950e,	// (0x0003be93) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000424fb) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000424fb) cam6_mode_pane_g

0x0caf,	// (0x00033634) bg_tb_trans_pane_cp08_ParamLimits

0x0caf,	// (0x00033634) bg_tb_trans_pane_cp08

0x0cbd,	// (0x00033642) cam6_battery_pane_ParamLimits

0x0cbd,	// (0x00033642) cam6_battery_pane

0x0cd3,	// (0x00033658) cam6_indi_pane_g1_ParamLimits

0x0cd3,	// (0x00033658) cam6_indi_pane_g1

0x0ce5,	// (0x0003366a) cam6_indi_pane_g2_ParamLimits

0x0ce5,	// (0x0003366a) cam6_indi_pane_g2

0x0cf7,	// (0x0003367c) cam6_indi_pane_g3_ParamLimits

0x0cf7,	// (0x0003367c) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00042504) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00042504) cam6_indi_pane_g

0x0d09,	// (0x0003368e) cam6_indi_pane_t1_ParamLimits

0x0d09,	// (0x0003368e) cam6_indi_pane_t1

0x95bb,	// (0x0003bf40) cam6_autofocus_pane_g1

0x95c3,	// (0x0003bf48) cam6_autofocus_pane_g2

0x95cb,	// (0x0003bf50) cam6_autofocus_pane_g3

0x95d3,	// (0x0003bf58) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0004250b) cam6_autofocus_pane_g

0x0d2f,	// (0x000336b4) cam6_timer_pane_g1

0x0d37,	// (0x000336bc) cam6_timer_pane_t1

0x0d45,	// (0x000336ca) cam6_zoom_cont_pane

0x0d4d,	// (0x000336d2) cam6_zoom_pane_g1

0x0d55,	// (0x000336da) cam6_zoom_pane_g2

0xa787,	// (0x0003d10c) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00042514) cam6_zoom_pane_g

0xe87e,	// (0x00041203) cam6_battery_pane_g1

0xe87e,	// (0x00041203) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00042085) cam6_battery_pane_g

0x0d5d,	// (0x000336e2) cam6_zoom_cont_pane_g1

0x0d66,	// (0x000336eb) cam6_zoom_cont_pane_g2

0x0d6f,	// (0x000336f4) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0004251b) cam6_zoom_cont_pane_g

0xa7a1,	// (0x0003d126) cam6_mode_pane_cp_ParamLimits

0xa7a1,	// (0x0003d126) cam6_mode_pane_cp

0xa76f,	// (0x0003d0f4) cam6_zoom_pane_cp_ParamLimits

0xa76f,	// (0x0003d0f4) cam6_zoom_pane_cp

0xa7b5,	// (0x0003d13a) vid6_image_uncrop_cif_pane_ParamLimits

0xa7b5,	// (0x0003d13a) vid6_image_uncrop_cif_pane

0xa7e1,	// (0x0003d166) vid6_image_uncrop_nhd_pane_ParamLimits

0xa7e1,	// (0x0003d166) vid6_image_uncrop_nhd_pane

0xa708,	// (0x0003d08d) vid6_image_uncrop_vga_pane_ParamLimits

0xa708,	// (0x0003d08d) vid6_image_uncrop_vga_pane

0xa7fe,	// (0x0003d183) vid6_image_uncrop_wvga_pane_ParamLimits

0xa7fe,	// (0x0003d183) vid6_image_uncrop_wvga_pane

0xa81b,	// (0x0003d1a0) vid6_indi_pane_ParamLimits

0xa81b,	// (0x0003d1a0) vid6_indi_pane

0x0caf,	// (0x00033634) bg_tb_trans_pane_cp09_ParamLimits

0x0caf,	// (0x00033634) bg_tb_trans_pane_cp09

0x0d87,	// (0x0003370c) cam6_battery_pane_cp_ParamLimits

0x0d87,	// (0x0003370c) cam6_battery_pane_cp

0x0d93,	// (0x00033718) vid6_indi_pane_g1_ParamLimits

0x0d93,	// (0x00033718) vid6_indi_pane_g1

0x0da5,	// (0x0003372a) vid6_indi_pane_g2_ParamLimits

0x0da5,	// (0x0003372a) vid6_indi_pane_g2

0x0db7,	// (0x0003373c) vid6_indi_pane_g3_ParamLimits

0x0db7,	// (0x0003373c) vid6_indi_pane_g3

0x0dcc,	// (0x00033751) vid6_indi_pane_g4_ParamLimits

0x0dcc,	// (0x00033751) vid6_indi_pane_g4

0x0de1,	// (0x00033766) vid6_indi_pane_g5_ParamLimits

0x0de1,	// (0x00033766) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00042522) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00042522) vid6_indi_pane_g

0x0dfb,	// (0x00033780) vid6_indi_pane_t1_ParamLimits

0x0dfb,	// (0x00033780) vid6_indi_pane_t1

0x0e11,	// (0x00033796) vid6_indi_pane_t2_ParamLimits

0x0e11,	// (0x00033796) vid6_indi_pane_t2

0x0e39,	// (0x000337be) vid6_indi_pane_t3_ParamLimits

0x0e39,	// (0x000337be) vid6_indi_pane_t3

0x0e61,	// (0x000337e6) vid6_indi_pane_t4_ParamLimits

0x0e61,	// (0x000337e6) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0004252d) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0004252d) vid6_indi_pane_t

0x0e85,	// (0x0003380a) wait_bar_pane_cp08

0xa83e,	// (0x0003d1c3) main_cset_text2_pane_t1_ParamLimits

0xa83e,	// (0x0003d1c3) main_cset_text2_pane_t1

0xa78f,	// (0x0003d114) listscroll_gen_pane_cp06_t1_ParamLimits

0xa78f,	// (0x0003d114) listscroll_gen_pane_cp06_t1

0x4511,	// (0x00036e96) main_cam6_set_pane

0xeae5,	// (0x0004146a) bg_tb_trans_pane_cp06_ParamLimits

0x9485,	// (0x0003be0a) cam4_indicators_pane_g1_ParamLimits

0x9496,	// (0x0003be1b) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0004229b) cam4_indicators_pane_g_ParamLimits

0x94b4,	// (0x0003be39) cam4_indicators_pane_t1_ParamLimits

0xd8c7,	// (0x0004024c) bg_tb_trans_pane_cp07_ParamLimits

0x9485,	// (0x0003be0a) vid4_indicators_pane_g1_ParamLimits

0x9564,	// (0x0003bee9) vid4_indicators_pane_g2_ParamLimits

0x9575,	// (0x0003befa) vid4_indicators_pane_g3_ParamLimits

0x9586,	// (0x0003bf0b) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000422ad) vid4_indicators_pane_g_ParamLimits

0x95a2,	// (0x0003bf27) vid4_indicators_pane_t1_ParamLimits

0xa395,	// (0x0003cd1a) vid4_progress_pane_g1_ParamLimits

0xa3a5,	// (0x0003cd2a) vid4_progress_pane_g2_ParamLimits

0xa3b5,	// (0x0003cd3a) vid4_progress_pane_g3_ParamLimits

0x9496,	// (0x0003be1b) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0004245e) vid4_progress_pane_g_ParamLimits

0xa3c1,	// (0x0003cd46) vid4_progress_pane_t1_ParamLimits

0xa3d6,	// (0x0003cd5b) vid4_progress_pane_t2_ParamLimits

0xa3ec,	// (0x0003cd71) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00042469) vid4_progress_pane_t_ParamLimits

0xa401,	// (0x0003cd86) wait_bar_pane_cp07_ParamLimits

0xa87c,	// (0x0003d201) main_cam6_set_pane_g2_ParamLimits

0xa87c,	// (0x0003d201) main_cam6_set_pane_g2

0xa888,	// (0x0003d20d) main_cset6_listscroll_pane_ParamLimits

0xa888,	// (0x0003d20d) main_cset6_listscroll_pane

0xa8b3,	// (0x0003d238) main_cset6_slider_pane_ParamLimits

0xa8b3,	// (0x0003d238) main_cset6_slider_pane

0xa8bf,	// (0x0003d244) main_cset6_text2_pane_ParamLimits

0xa8bf,	// (0x0003d244) main_cset6_text2_pane

0x0e94,	// (0x00033819) main_cset6_text_pane

0x0e9c,	// (0x00033821) main_cset_list_pane_copy1_ParamLimits

0x0e9c,	// (0x00033821) main_cset_list_pane_copy1

0x0eac,	// (0x00033831) scroll_pane_cp028_copy1

0xa8d2,	// (0x0003d257) cset_list_set_pane_copy1

0xa8ec,	// (0x0003d271) aid_position_infowindow_above_copy1

0xa8f4,	// (0x0003d279) aid_position_infowindow_below_copy1

0x3a6d,	// (0x000363f2) cset_list_set_pane_g1_copy1

0x37ab,	// (0x00036130) cset_list_set_pane_g3_copy1_ParamLimits

0x37ab,	// (0x00036130) cset_list_set_pane_g3_copy1

0x37ba,	// (0x0003613f) cset_list_set_pane_t1_copy1_ParamLimits

0x37ba,	// (0x0003613f) cset_list_set_pane_t1_copy1

0xd8c7,	// (0x0004024c) list_highlight_pane_cp021_copy1_ParamLimits

0xd8c7,	// (0x0004024c) list_highlight_pane_cp021_copy1

0x0ee1,	// (0x00033866) cset6_slider_pane_ParamLimits

0x0ee1,	// (0x00033866) cset6_slider_pane

0x0f0d,	// (0x00033892) main_cset6_slider_pane_g1_ParamLimits

0x0f0d,	// (0x00033892) main_cset6_slider_pane_g1

0xa8fc,	// (0x0003d281) main_cset6_slider_pane_g2_ParamLimits

0xa8fc,	// (0x0003d281) main_cset6_slider_pane_g2

0x058b,	// (0x00032f10) main_cset6_slider_pane_g3_ParamLimits

0x058b,	// (0x00032f10) main_cset6_slider_pane_g3

0xa924,	// (0x0003d2a9) main_cset6_slider_pane_g4_ParamLimits

0xa924,	// (0x0003d2a9) main_cset6_slider_pane_g4

0xa930,	// (0x0003d2b5) main_cset6_slider_pane_g5_ParamLimits

0xa930,	// (0x0003d2b5) main_cset6_slider_pane_g5

0x058b,	// (0x00032f10) main_cset6_slider_pane_g7_ParamLimits

0x058b,	// (0x00032f10) main_cset6_slider_pane_g7

0x0597,	// (0x00032f1c) main_cset6_slider_pane_g8_ParamLimits

0x0597,	// (0x00032f1c) main_cset6_slider_pane_g8

0xa93e,	// (0x0003d2c3) main_cset6_slider_pane_g9_ParamLimits

0xa93e,	// (0x0003d2c3) main_cset6_slider_pane_g9

0xa94a,	// (0x0003d2cf) main_cset6_slider_pane_g10_ParamLimits

0xa94a,	// (0x0003d2cf) main_cset6_slider_pane_g10

0xa924,	// (0x0003d2a9) main_cset6_slider_pane_g11_ParamLimits

0xa924,	// (0x0003d2a9) main_cset6_slider_pane_g11

0xa956,	// (0x0003d2db) main_cset6_slider_pane_g12_ParamLimits

0xa956,	// (0x0003d2db) main_cset6_slider_pane_g12

0xa962,	// (0x0003d2e7) main_cset6_slider_pane_g13_ParamLimits

0xa962,	// (0x0003d2e7) main_cset6_slider_pane_g13

0xa970,	// (0x0003d2f5) main_cset6_slider_pane_g14_ParamLimits

0xa970,	// (0x0003d2f5) main_cset6_slider_pane_g14

0xa97e,	// (0x0003d303) main_cset6_slider_pane_g15_ParamLimits

0xa97e,	// (0x0003d303) main_cset6_slider_pane_g15

0xa930,	// (0x0003d2b5) main_cset6_slider_pane_g16_ParamLimits

0xa930,	// (0x0003d2b5) main_cset6_slider_pane_g16

0xa996,	// (0x0003d31b) main_cset6_slider_pane_g17_ParamLimits

0xa996,	// (0x0003d31b) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x00042536) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x00042536) main_cset6_slider_pane_g

0x0f35,	// (0x000338ba) main_cset6_slider_pane_t1_ParamLimits

0x0f35,	// (0x000338ba) main_cset6_slider_pane_t1

0xa9a4,	// (0x0003d329) main_cset6_slider_pane_t2_ParamLimits

0xa9a4,	// (0x0003d329) main_cset6_slider_pane_t2

0xa9cf,	// (0x0003d354) main_cset6_slider_pane_t3_ParamLimits

0xa9cf,	// (0x0003d354) main_cset6_slider_pane_t3

0xa9fa,	// (0x0003d37f) main_cset6_slider_pane_t4_ParamLimits

0xa9fa,	// (0x0003d37f) main_cset6_slider_pane_t4

0xaa27,	// (0x0003d3ac) main_cset6_slider_pane_t5_ParamLimits

0xaa27,	// (0x0003d3ac) main_cset6_slider_pane_t5

0x0f76,	// (0x000338fb) main_cset6_slider_pane_t7_ParamLimits

0x0f76,	// (0x000338fb) main_cset6_slider_pane_t7

0xaa54,	// (0x0003d3d9) main_cset6_slider_pane_t8_ParamLimits

0xaa54,	// (0x0003d3d9) main_cset6_slider_pane_t8

0xaa78,	// (0x0003d3fd) main_cset6_slider_pane_t9_ParamLimits

0xaa78,	// (0x0003d3fd) main_cset6_slider_pane_t9

0xaa9c,	// (0x0003d421) main_cset6_slider_pane_t10_ParamLimits

0xaa9c,	// (0x0003d421) main_cset6_slider_pane_t10

0xaac0,	// (0x0003d445) main_cset6_slider_pane_t11_ParamLimits

0xaac0,	// (0x0003d445) main_cset6_slider_pane_t11

0x0fac,	// (0x00033931) main_cset6_slider_pane_t14_ParamLimits

0x0fac,	// (0x00033931) main_cset6_slider_pane_t14

0x0fe5,	// (0x0003396a) main_cset6_slider_pane_t15_ParamLimits

0x0fe5,	// (0x0003396a) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0004255b) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0004255b) main_cset6_slider_pane_t

0x101e,	// (0x000339a3) cset_slider_pane_g1_copy1

0x1027,	// (0x000339ac) cset_slider_pane_g2_copy1

0x1030,	// (0x000339b5) cset_slider_pane_g3_copy1

0x4511,	// (0x00036e96) bg_popup_sub_pane_cp011_copy1

0x076e,	// (0x000330f3) main_cset_text_pane_g1_copy1

0x0776,	// (0x000330fb) main_cset_text_pane_t1_copy1

0x0784,	// (0x00033109) main_cset_text_pane_t2_copy1

0x0792,	// (0x00033117) main_cset_text_pane_t3_copy1

0x07a0,	// (0x00033125) main_cset_text_pane_t4_copy1

0x07ae,	// (0x00033133) main_cset_text_pane_t5_copy1

0x07bc,	// (0x00033141) main_cset_text_pane_t6_copy1

0x07ca,	// (0x0003314f) main_cset_text_pane_t7_copy1

0xaae6,	// (0x0003d46b) main_cset_text2_pane_t1_copy1

0x4511,	// (0x00036e96) main_ncimui_pane

0x759c,	// (0x00039f21) popup_query_ncimui_window_ParamLimits

0x759c,	// (0x00039f21) popup_query_ncimui_window

0x365d,	// (0x00035fe2) field_cale_ev2_pane_g4_ParamLimits

0x365d,	// (0x00035fe2) field_cale_ev2_pane_g4

0x8e1a,	// (0x0003b79f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8e1a,	// (0x0003b79f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x00042239) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x00042239) cell_video_dialer_keypad_pane_g

0x8e32,	// (0x0003b7b7) cell_video_dialer_keypad_pane_t1

0x4511,	// (0x00036e96) bg_popup_window_pane_cp012

0xcd63,	// (0x0003f6e8) heading_pane_cp06

0x1128,	// (0x00033aad) ncim_query_content_pane

0x4511,	// (0x00036e96) bg_popup_heading_pane_cp01

0x1130,	// (0x00033ab5) ncim_heading_pane_t1

0x113e,	// (0x00033ac3) ncim_indicator_popup_pane

0x1150,	// (0x00033ad5) ncim_query_button_pane

0x1164,	// (0x00033ae9) ncim_query_content_pane_t1

0x1176,	// (0x00033afb) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0004259a) ncim_query_content_pane_t

0x11b0,	// (0x00033b35) ncim_query_list_pane

0x11c2,	// (0x00033b47) ncim_query_popup_pane

0x113e,	// (0x00033ac3) ncim_indicator_popup_pane_ParamLimits

0xac13,	// (0x0003d598) ncim_query_content_pane_g1_ParamLimits

0xac13,	// (0x0003d598) ncim_query_content_pane_g1

0x1164,	// (0x00033ae9) ncim_query_content_pane_t1_ParamLimits

0x1176,	// (0x00033afb) ncim_query_content_pane_t2_ParamLimits

0xac1f,	// (0x0003d5a4) ncim_query_content_pane_t3_ParamLimits

0xac1f,	// (0x0003d5a4) ncim_query_content_pane_t3

0xac3c,	// (0x0003d5c1) ncim_query_content_pane_t4_ParamLimits

0xac3c,	// (0x0003d5c1) ncim_query_content_pane_t4

0xac59,	// (0x0003d5de) ncim_query_content_pane_t5_ParamLimits

0xac59,	// (0x0003d5de) ncim_query_content_pane_t5

0x1188,	// (0x00033b0d) ncim_query_content_pane_t6_ParamLimits

0x1188,	// (0x00033b0d) ncim_query_content_pane_t6

0xfc15,	// (0x0004259a) ncim_query_content_pane_t_ParamLimits

0x11b0,	// (0x00033b35) ncim_query_list_pane_ParamLimits

0x11c2,	// (0x00033b47) ncim_query_popup_pane_ParamLimits

0x11d6,	// (0x00033b5b) wait_bar_pane_cp04

0x4511,	// (0x00036e96) input_focus_pane_cp011

0x11de,	// (0x00033b63) ncim_query_popup_pane_t1

0x11ec,	// (0x00033b71) ncim_list_query_list_pane_ParamLimits

0x11ec,	// (0x00033b71) ncim_list_query_list_pane

0x4511,	// (0x00036e96) bg_button_pane_cp027

0x11ff,	// (0x00033b84) ncim_query_button_pane_g1

0x4511,	// (0x00036e96) list_highlight_pane_cp012

0x1209,	// (0x00033b8e) ncim_list_query_list_pane_g1

0x1211,	// (0x00033b96) ncim_list_query_list_pane_t1

0x94a5,	// (0x0003be2a) cam4_indicators_pane_g3_ParamLimits

0x94a5,	// (0x0003be2a) cam4_indicators_pane_g3

0x9592,	// (0x0003bf17) vid4_indicators_pane_g5_ParamLimits

0x9592,	// (0x0003bf17) vid4_indicators_pane_g5

0x94a5,	// (0x0003be2a) vid4_progress_pane_g5_ParamLimits

0x94a5,	// (0x0003be2a) vid4_progress_pane_g5

0xab2c,	// (0x0003d4b1) main_ncimui_pane_g1

0xab82,	// (0x0003d507) ncimui_group_query_pane_ParamLimits

0xab82,	// (0x0003d507) ncimui_group_query_pane

0xabbe,	// (0x0003d543) ncimui_list_pane_ParamLimits

0xabbe,	// (0x0003d543) ncimui_list_pane

0xabdf,	// (0x0003d564) ncimui_text_pane_ParamLimits

0xabdf,	// (0x0003d564) ncimui_text_pane

0xac76,	// (0x0003d5fb) ncimui_text_pane_t1_ParamLimits

0xac76,	// (0x0003d5fb) ncimui_text_pane_t1

0x121f,	// (0x00033ba4) ncimui_list_single_graphic_pane_ParamLimits

0x121f,	// (0x00033ba4) ncimui_list_single_graphic_pane

0xac95,	// (0x0003d61a) ncimui_query_pane_ParamLimits

0xac95,	// (0x0003d61a) ncimui_query_pane

0x4511,	// (0x00036e96) list_highlight_pane_cp013

0x122f,	// (0x00033bb4) ncim_list_query_list_pane_t1_copy1

0x1209,	// (0x00033b8e) ncim_list_single_graphic_pane_g1

0x123d,	// (0x00033bc2) ncim_query_button_pane_cp01

0x1249,	// (0x00033bce) ncim_query_entry_pane_ParamLimits

0x1249,	// (0x00033bce) ncim_query_entry_pane

0x125c,	// (0x00033be1) ncimui_query_pane_g1

0x1268,	// (0x00033bed) ncimui_query_pane_t1_ParamLimits

0x1268,	// (0x00033bed) ncimui_query_pane_t1

0xd8c7,	// (0x0004024c) input_focus_pane_cp012

0x1281,	// (0x00033c06) ncim_query_entry_pane_t1

0xc558,	// (0x0003eedd) main_im_pane_ParamLimits

0xd8c7,	// (0x0004024c) main_mobtv_pane_ParamLimits

0xd8c7,	// (0x0004024c) main_mobtv_pane

0xa93e,	// (0x0003d2c3) main_cset6_slider_pane_g18_ParamLimits

0xa93e,	// (0x0003d2c3) main_cset6_slider_pane_g18

0xa962,	// (0x0003d2e7) main_cset6_slider_pane_g19_ParamLimits

0xa962,	// (0x0003d2e7) main_cset6_slider_pane_g19

0x03e0,	// (0x00032d65) bg_main_mobtv_pane_ParamLimits

0x03e0,	// (0x00032d65) bg_main_mobtv_pane

0xaca8,	// (0x0003d62d) main_mobtv_info_pane

0xacb3,	// (0x0003d638) main_mobtv_loading_pane_ParamLimits

0xacb3,	// (0x0003d638) main_mobtv_loading_pane

0x12a1,	// (0x00033c26) main_mobtv_pg_channel_list_pane

0x12ab,	// (0x00033c30) main_mobtv_pg_hdr_pane

0xacc0,	// (0x0003d645) main_mobtv_programe_curr_pane_ParamLimits

0xacc0,	// (0x0003d645) main_mobtv_programe_curr_pane

0xaccd,	// (0x0003d652) main_mobtv_programe_next_pane_ParamLimits

0xaccd,	// (0x0003d652) main_mobtv_programe_next_pane

0x12b4,	// (0x00033c39) popup_mobtv_noti_window

0xe87e,	// (0x00041203) main_tv_pg_hdr_pane_g1

0x12bc,	// (0x00033c41) main_tv_pg_hdr_pane_g2

0x12c4,	// (0x00033c49) main_tv_pg_hdr_pane_g3

0x12cc,	// (0x00033c51) main_tv_pg_hdr_pane_g4

0x12d4,	// (0x00033c59) main_tv_pg_hdr_pane_g5

0x12de,	// (0x00033c63) main_tv_pg_hdr_pane_g6

0x12e8,	// (0x00033c6d) main_tv_pg_hdr_pane_g7

0x12f2,	// (0x00033c77) main_tv_pg_hdr_pane_g8

0x12fc,	// (0x00033c81) main_tv_pg_hdr_pane_g9

0x1306,	// (0x00033c8b) main_tv_pg_hdr_pane_g10

0x1310,	// (0x00033c95) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x000425a7) main_tv_pg_hdr_pane_g

0x131a,	// (0x00033c9f) main_tv_pg_hdr_pane_t1

0x1328,	// (0x00033cad) main_tv_pg_hdr_pane_t2

0x1336,	// (0x00033cbb) main_tv_pg_hdr_pane_t3

0x1346,	// (0x00033ccb) main_tv_pg_hdr_pane_t4

0x1356,	// (0x00033cdb) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x000425be) main_tv_pg_hdr_pane_t

0x1366,	// (0x00033ceb) single_mobtv_pg_channel_pane_ParamLimits

0x1366,	// (0x00033ceb) single_mobtv_pg_channel_pane

0x1378,	// (0x00033cfd) single_mobtv_pg_channel_table_pane

0x1381,	// (0x00033d06) single_mobtv_pg_channel_thumb_pane

0x138a,	// (0x00033d0f) single_tv_pg_channel_pane_g1

0x1393,	// (0x00033d18) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x000425c9) single_tv_pg_channel_pane_g

0xeae5,	// (0x0004146a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeae5,	// (0x0004146a) bg_single_mobtv_pg_channel_thumb_pane

0x139c,	// (0x00033d21) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x139c,	// (0x00033d21) single_mobtv_pg_channel_thumb_pane_g1

0x13aa,	// (0x00033d2f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x13aa,	// (0x00033d2f) single_mobtv_pg_channel_thumb_pane_g2

0x13b6,	// (0x00033d3b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x13b6,	// (0x00033d3b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x000425ce) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x000425ce) single_mobtv_pg_channel_thumb_pane_g

0x13c2,	// (0x00033d47) single_mobtv_pg_channel_thumb_pane_t1

0x13d0,	// (0x00033d55) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x000425d5) single_mobtv_pg_channel_thumb_pane_t

0xe87e,	// (0x00041203) bg_single_mobtv_pg_channel_table_pane_g1

0xe87e,	// (0x00041203) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00042085) bg_single_mobtv_pg_channel_table_pane_g

0x13de,	// (0x00033d63) single_mobtv_pg_channel_table_pane_t1

0x13ec,	// (0x00033d71) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x000425da) single_mobtv_pg_channel_table_pane_t

0xace2,	// (0x0003d667) main_mobtv_info_pane_g1_ParamLimits

0xace2,	// (0x0003d667) main_mobtv_info_pane_g1

0xacfe,	// (0x0003d683) main_mobtv_info_pane_t1_ParamLimits

0xacfe,	// (0x0003d683) main_mobtv_info_pane_t1

0xad76,	// (0x0003d6fb) main_mobtv_info_pane_t2_ParamLimits

0xad76,	// (0x0003d6fb) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000425e4) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000425e4) main_mobtv_info_pane_t

0xae05,	// (0x0003d78a) wait_bar_pane_cp05

0xae17,	// (0x0003d79c) main_mobtv_loading_pane_g1_ParamLimits

0xae17,	// (0x0003d79c) main_mobtv_loading_pane_g1

0xae25,	// (0x0003d7aa) main_mobtv_loading_pane_g2_ParamLimits

0xae25,	// (0x0003d7aa) main_mobtv_loading_pane_g2

0xae31,	// (0x0003d7b6) main_mobtv_loading_pane_g3_ParamLimits

0xae31,	// (0x0003d7b6) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000425eb) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000425eb) main_mobtv_loading_pane_g

0x13fa,	// (0x00033d7f) main_mobtv_loading_pane_t1_ParamLimits

0x13fa,	// (0x00033d7f) main_mobtv_loading_pane_t1

0x1412,	// (0x00033d97) main_mobtv_loading_pane_t2_ParamLimits

0x1412,	// (0x00033d97) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000425f2) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000425f2) main_mobtv_loading_pane_t

0xae3f,	// (0x0003d7c4) wait_bar_pane_cp06_ParamLimits

0xae3f,	// (0x0003d7c4) wait_bar_pane_cp06

0x1436,	// (0x00033dbb) main_mobtv_programe_curr_pane_t1

0x1444,	// (0x00033dc9) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000425f7) main_mobtv_programe_curr_pane_t

0x1452,	// (0x00033dd7) main_mobtv_programe_next_pane_t1

0x1460,	// (0x00033de5) main_mobtv_programe_next_pane_t2

0x146e,	// (0x00033df3) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000425fc) main_mobtv_programe_next_pane_t

0x4511,	// (0x00036e96) bg_popup_mobtv_noti_window_pane

0x147c,	// (0x00033e01) popup_mobtv_noti_window_g1

0x1484,	// (0x00033e09) popup_mobtv_noti_window_t1

0x1492,	// (0x00033e17) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00042603) popup_mobtv_noti_window_t

0xe87e,	// (0x00041203) bg_popup_mobtv_noti_window_pane_g1

0x4511,	// (0x00036e96) sc_clock_pane

0x4511,	// (0x00036e96) main_fs_bigclock_pane

0xa599,	// (0x0003cf1e) blid2_tripm_pane_t4_ParamLimits

0xa599,	// (0x0003cf1e) blid2_tripm_pane_t4

0xae4b,	// (0x0003d7d0) sc_clock_pane_g1_ParamLimits

0xae4b,	// (0x0003d7d0) sc_clock_pane_g1

0xae59,	// (0x0003d7de) sc_clock_pane_t1_ParamLimits

0xae59,	// (0x0003d7de) sc_clock_pane_t1

0xae6c,	// (0x0003d7f1) sc_clock_pane_t2_ParamLimits

0xae6c,	// (0x0003d7f1) sc_clock_pane_t2

0xae7e,	// (0x0003d803) sc_clock_pane_t3_ParamLimits

0xae7e,	// (0x0003d803) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x00042608) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x00042608) sc_clock_pane_t

0xb6a4,	// (0x0003e029) main_fs_bigclock_indicator_pane_ParamLimits

0xb6a4,	// (0x0003e029) main_fs_bigclock_indicator_pane

0xaf06,	// (0x0003d88b) main_fs_bigclock_pane_g1_ParamLimits

0xaf06,	// (0x0003d88b) main_fs_bigclock_pane_g1

0xb6b0,	// (0x0003e035) main_fs_bigclock_pane_t1_ParamLimits

0xb6b0,	// (0x0003e035) main_fs_bigclock_pane_t1

0xb6c2,	// (0x0003e047) main_fs_bigclock_pane_t2_ParamLimits

0xb6c2,	// (0x0003e047) main_fs_bigclock_pane_t2

0xb6d4,	// (0x0003e059) main_fs_bigclock_pane_t3_ParamLimits

0xb6d4,	// (0x0003e059) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00042807) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00042807) main_fs_bigclock_pane_t

0x20c1,	// (0x00034a46) main_fs_bigclock_indicator_pane_g1

0x1158,	// (0x00033add) ncim_query_content_pane_g2_ParamLimits

0x1158,	// (0x00033add) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00042595) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00042595) ncim_query_content_pane_g

0xae92,	// (0x0003d817) sc_clock_pane_t4_ParamLimits

0xae92,	// (0x0003d817) sc_clock_pane_t4

0xd8c7,	// (0x0004024c) main_radioblah_pane

0x028e,	// (0x00032c13) cell_call4_button_pane_t1_copy1_ParamLimits

0x028e,	// (0x00032c13) cell_call4_button_pane_t1_copy1

0xab34,	// (0x0003d4b9) main_ncimui_pane_t1_ParamLimits

0xab34,	// (0x0003d4b9) main_ncimui_pane_t1

0xab4e,	// (0x0003d4d3) main_ncimui_pane_t2_ParamLimits

0xab4e,	// (0x0003d4d3) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0004258e) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0004258e) main_ncimui_pane_t

0x15c2,	// (0x00033f47) main_radioblah_anim_pane_ParamLimits

0x15c2,	// (0x00033f47) main_radioblah_anim_pane

0x15d3,	// (0x00033f58) main_radioblah_info_pane_ParamLimits

0x15d3,	// (0x00033f58) main_radioblah_info_pane

0x15e7,	// (0x00033f6c) main_radioblah_pane_t1_ParamLimits

0x15e7,	// (0x00033f6c) main_radioblah_pane_t1

0x1603,	// (0x00033f88) main_radioblah_pane_t2_ParamLimits

0x1603,	// (0x00033f88) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x00042629) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x00042629) main_radioblah_pane_t

0xaf58,	// (0x0003d8dd) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaf58,	// (0x0003d8dd) main_radioblah_rocker_ctrl_pane

0x164b,	// (0x00033fd0) main_radioblah_info_pane_t1_ParamLimits

0x164b,	// (0x00033fd0) main_radioblah_info_pane_t1

0xaf9d,	// (0x0003d922) main_radioblah_info_pane_t2_ParamLimits

0xaf9d,	// (0x0003d922) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00042632) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00042632) main_radioblah_info_pane_t

0xe87e,	// (0x00041203) main_radioblah_rocker_ctrl_pane_g1

0xb04d,	// (0x0003d9d2) main_radioblah_rocker_ctrl_pane_g2

0xb055,	// (0x0003d9da) main_radioblah_rocker_ctrl_pane_g3

0xb05d,	// (0x0003d9e2) main_radioblah_rocker_ctrl_pane_g4

0xb065,	// (0x0003d9ea) main_radioblah_rocker_ctrl_pane_g5

0xb06d,	// (0x0003d9f2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0004263b) main_radioblah_rocker_ctrl_pane_g

0xaae6,	// (0x0003d46b) main_cset_text2_pane_t1_copy1_ParamLimits

0x93d3,	// (0x0003bd58) cam4_image_uncrop_qvga_pane

0x951a,	// (0x0003be9f) vid4_image_uncrop_qcif_pane

0xa727,	// (0x0003d0ac) cam6_image_uncrop_qvga_pane_ParamLimits

0xa727,	// (0x0003d0ac) cam6_image_uncrop_qvga_pane

0x0d77,	// (0x000336fc) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d77,	// (0x000336fc) vid6_image_uncrop_qcif_pane

0x4511,	// (0x00036e96) bg_popup_preview_window_pane_cp03

0x110a,	// (0x00033a8f) list_cset_text2_pane

0x1112,	// (0x00033a97) main_cset6_text2_pane_g1

0x111a,	// (0x00033a9f) main_cset6_text2_pane_t1

0xb075,	// (0x0003d9fa) list_cset_text2_pane_t1_ParamLimits

0xb075,	// (0x0003d9fa) list_cset_text2_pane_t1

0xd8c7,	// (0x0004024c) main_radioblah_pane_ParamLimits

0xadf1,	// (0x0003d776) main_mobtv_info_pane_t3_ParamLimits

0xadf1,	// (0x0003d776) main_mobtv_info_pane_t3

0xaf46,	// (0x0003d8cb) main_radioblah_pane_g1

0xaf71,	// (0x0003d8f6) main_radioblah_info_pane_g1

0xaff2,	// (0x0003d977) main_radioblah_info_pane_t3_ParamLimits

0xaff2,	// (0x0003d977) main_radioblah_info_pane_t3

0x628e,	// (0x00038c13) highlight_cell_cale_month_pane_ParamLimits

0x628e,	// (0x00038c13) highlight_cell_cale_month_pane

0x4511,	// (0x00036e96) main_phob_fisheye_pane

0xebc7,	// (0x0004154c) scroll_pane_cp0031_ParamLimits

0xebc7,	// (0x0004154c) scroll_pane_cp0031

0x0e85,	// (0x0003380a) wait_bar_pane_cp08_ParamLimits

0xa8d2,	// (0x0003d257) cset_list_set_pane_copy1_ParamLimits

0x1685,	// (0x0003400a) highlight_cell_cale_month_pane_g1

0xb0a0,	// (0x0003da25) highlight_cell_cale_month_pane_t1

0x0a3a,	// (0x000333bf) list_gen_pane_cp01

0x0576,	// (0x00032efb) scroll_pane_01

0x3b46,	// (0x000364cb) list_single_double_fisheye_pane

0x3b4f,	// (0x000364d4) list_double_fisheye_pane_g1_ParamLimits

0x3b4f,	// (0x000364d4) list_double_fisheye_pane_g1

0x3b5b,	// (0x000364e0) list_double_fisheye_pane_g2_ParamLimits

0x3b5b,	// (0x000364e0) list_double_fisheye_pane_g2

0x3b6f,	// (0x000364f4) list_double_fisheye_pane_g3_ParamLimits

0x3b6f,	// (0x000364f4) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00042648) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00042648) list_double_fisheye_pane_g

0x3b98,	// (0x0003651d) list_double_fisheye_pane_t1_ParamLimits

0x3b98,	// (0x0003651d) list_double_fisheye_pane_t1

0x3bb3,	// (0x00036538) list_double_fisheye_pane_t2_ParamLimits

0x3bb3,	// (0x00036538) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00042653) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00042653) list_double_fisheye_pane_t

0x4511,	// (0x00036e96) main_call5_pane

0xaeb8,	// (0x0003d83d) sc_swipe_pane_ParamLimits

0xaeb8,	// (0x0003d83d) sc_swipe_pane

0xb0ba,	// (0x0003da3f) call5_image_pane_ParamLimits

0xb0ba,	// (0x0003da3f) call5_image_pane

0xb0ca,	// (0x0003da4f) call5_swipe_1_pane_ParamLimits

0xb0ca,	// (0x0003da4f) call5_swipe_1_pane

0xb0d6,	// (0x0003da5b) call5_swipe_2_pane_ParamLimits

0xb0d6,	// (0x0003da5b) call5_swipe_2_pane

0xb0f0,	// (0x0003da75) popup_call5_audio_first_window_ParamLimits

0xb0f0,	// (0x0003da75) popup_call5_audio_first_window

0xeae5,	// (0x0004146a) call5_swipe_1_pane_g1_ParamLimits

0xeae5,	// (0x0004146a) call5_swipe_1_pane_g1

0x16d3,	// (0x00034058) call5_swipe_1_pane_g2_ParamLimits

0x16d3,	// (0x00034058) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00042658) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00042658) call5_swipe_1_pane_g

0x16df,	// (0x00034064) call5_swipe_1_pane_t1_ParamLimits

0x16df,	// (0x00034064) call5_swipe_1_pane_t1

0xeae5,	// (0x0004146a) call5_swipe_2_pane_g1_ParamLimits

0xeae5,	// (0x0004146a) call5_swipe_2_pane_g1

0x16f4,	// (0x00034079) call5_swipe_2_pane_g2_ParamLimits

0x16f4,	// (0x00034079) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0004265d) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0004265d) call5_swipe_2_pane_g

0x1700,	// (0x00034085) call5_swipe_2_pane_t1_ParamLimits

0x1700,	// (0x00034085) call5_swipe_2_pane_t1

0x1715,	// (0x0003409a) sc_swipe_pane_g1_ParamLimits

0x1715,	// (0x0003409a) sc_swipe_pane_g1

0x1722,	// (0x000340a7) sc_swipe_pane_g2_ParamLimits

0x1722,	// (0x000340a7) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00042662) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00042662) sc_swipe_pane_g

0x172e,	// (0x000340b3) sc_swipe_pane_t1_ParamLimits

0x172e,	// (0x000340b3) sc_swipe_pane_t1

0x4511,	// (0x00036e96) main_cmail_launcher_pane

0xb0fe,	// (0x0003da83) aid_size_cell_cmail_l_ParamLimits

0xb0fe,	// (0x0003da83) aid_size_cell_cmail_l

0xb10e,	// (0x0003da93) grid_cmail_l_pane_ParamLimits

0xb10e,	// (0x0003da93) grid_cmail_l_pane

0xb11e,	// (0x0003daa3) cell_cmail_l_pane_ParamLimits

0xb11e,	// (0x0003daa3) cell_cmail_l_pane

0xb132,	// (0x0003dab7) cell_cmail_l_pane_g1_ParamLimits

0xb132,	// (0x0003dab7) cell_cmail_l_pane_g1

0xb13e,	// (0x0003dac3) cell_cmail_l_pane_t1_ParamLimits

0xb13e,	// (0x0003dac3) cell_cmail_l_pane_t1

0x1743,	// (0x000340c8) cell_cmail_l_pane_t2_ParamLimits

0x1743,	// (0x000340c8) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00042667) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00042667) cell_cmail_l_pane_t

0xd8c7,	// (0x0004024c) grid_highlight_pane_cp018_ParamLimits

0xd8c7,	// (0x0004024c) grid_highlight_pane_cp018

0x4628,	// (0x00036fad) main2_pane_ParamLimits

0x4628,	// (0x00036fad) main2_pane

0xc603,	// (0x0003ef88) popup_sp_fs_action_menu_bg_pane_g1

0xc60b,	// (0x0003ef90) popup_sp_fs_action_menu_bg_pane_g2

0xc613,	// (0x0003ef98) popup_sp_fs_action_menu_bg_pane_g3

0xc61b,	// (0x0003efa0) popup_sp_fs_action_menu_bg_pane_g4

0xc623,	// (0x0003efa8) popup_sp_fs_action_menu_bg_pane_g5

0xc62b,	// (0x0003efb0) popup_sp_fs_action_menu_bg_pane_g6

0xc633,	// (0x0003efb8) popup_sp_fs_action_menu_bg_pane_g7

0xc63b,	// (0x0003efc0) popup_sp_fs_action_menu_bg_pane_g8

0xc643,	// (0x0003efc8) popup_sp_fs_action_menu_bg_pane_g9

0xc64b,	// (0x0003efd0) popup_sp_fs_action_menu_bg_pane_g10

0xc64b,	// (0x0003efd0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00041b31) popup_sp_fs_action_menu_bg_pane_g

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g3_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g3_g1

0x3346,	// (0x00035ccb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_t3_g3_g2

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00041be1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00041be1) list_medium_line_x2_t3_g3_g

0x335e,	// (0x00035ce3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x335e,	// (0x00035ce3) list_medium_line_x2_t3_g3_t1

0x3373,	// (0x00035cf8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3373,	// (0x00035cf8) list_medium_line_x2_t3_g3_t2

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00041be8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00041be8) list_medium_line_x2_t3_g3_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g2_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g2_g1

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00041bef) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00041bef) list_medium_line_x2_t3_g2_g

0x339c,	// (0x00035d21) list_medium_line_x2_t3_g2_t1_ParamLimits

0x339c,	// (0x00035d21) list_medium_line_x2_t3_g2_t1

0x33b2,	// (0x00035d37) list_medium_line_x2_t3_g2_t2_ParamLimits

0x33b2,	// (0x00035d37) list_medium_line_x2_t3_g2_t2

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00041bf4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00041bf4) list_medium_line_x2_t3_g2_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t4_g4_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t4_g4_g1

0x33c4,	// (0x00035d49) list_medium_line_x2_t4_g4_g2_ParamLimits

0x33c4,	// (0x00035d49) list_medium_line_x2_t4_g4_g2

0x3346,	// (0x00035ccb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_t4_g4_g3

0x33d0,	// (0x00035d55) list_medium_line_x2_t4_g4_g4_ParamLimits

0x33d0,	// (0x00035d55) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00041bfb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00041bfb) list_medium_line_x2_t4_g4_g

0x33dc,	// (0x00035d61) list_medium_line_x2_t4_g4_t1_ParamLimits

0x33dc,	// (0x00035d61) list_medium_line_x2_t4_g4_t1

0x33f3,	// (0x00035d78) list_medium_line_x2_t4_g4_t2_ParamLimits

0x33f3,	// (0x00035d78) list_medium_line_x2_t4_g4_t2

0x3408,	// (0x00035d8d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3408,	// (0x00035d8d) list_medium_line_x2_t4_g4_t3

0x341a,	// (0x00035d9f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x341a,	// (0x00035d9f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00041c04) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00041c04) list_medium_line_x2_t4_g4_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g4_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g4_g1

0x33c4,	// (0x00035d49) list_medium_line_x2_t2_g4_g2_ParamLimits

0x33c4,	// (0x00035d49) list_medium_line_x2_t2_g4_g2

0x3346,	// (0x00035ccb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_t2_g4_g3

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00041c6b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00041c6b) list_medium_line_x2_t2_g4_g

0x342c,	// (0x00035db1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x342c,	// (0x00035db1) list_medium_line_x2_t2_g4_t1

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00041c74) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00041c74) list_medium_line_x2_t2_g4_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g3_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g3_g1

0x3346,	// (0x00035ccb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_t2_g3_g2

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00041be1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00041be1) list_medium_line_x2_t2_g3_g

0x3441,	// (0x00035dc6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3441,	// (0x00035dc6) list_medium_line_x2_t2_g3_t1

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00041c79) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00041c79) list_medium_line_x2_t2_g3_t

0x650a,	// (0x00038e8f) main_sp_fs_list_pane_ParamLimits

0x650a,	// (0x00038e8f) main_sp_fs_list_pane

0x6516,	// (0x00038e9b) sp_fs_scroll_pane_ParamLimits

0x6516,	// (0x00038e9b) sp_fs_scroll_pane

0x3456,	// (0x00035ddb) list_medium_line_x2_t3_t1

0x3466,	// (0x00035deb) list_medium_line_x2_t3_t2

0x3474,	// (0x00035df9) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00041cc4) list_medium_line_x2_t3_t

0x3482,	// (0x00035e07) list_medium_line_x3_t4_t1

0x3492,	// (0x00035e17) list_medium_line_x3_t4_t2

0x34a0,	// (0x00035e25) list_medium_line_x3_t4_t3

0x3474,	// (0x00035df9) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00041ccb) list_medium_line_x3_t4_t

0x34ae,	// (0x00035e33) list_medium_line_x4_t5_t1

0x34be,	// (0x00035e43) list_medium_line_x4_t5_t2

0x34a0,	// (0x00035e25) list_medium_line_x4_t5_t3

0x34cc,	// (0x00035e51) list_medium_line_x4_t5_t4

0x3474,	// (0x00035df9) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00041cd4) list_medium_line_x4_t5_t

0x333a,	// (0x00035cbf) list_medium_line_t4_g4_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_t4_g4_g1

0x33d0,	// (0x00035d55) list_medium_line_t4_g4_g2_ParamLimits

0x33d0,	// (0x00035d55) list_medium_line_t4_g4_g2

0x34da,	// (0x00035e5f) list_medium_line_t4_g4_g3_ParamLimits

0x34da,	// (0x00035e5f) list_medium_line_t4_g4_g3

0x3352,	// (0x00035cd7) list_medium_line_t4_g4_g4_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00041cdf) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00041cdf) list_medium_line_t4_g4_g

0x34e6,	// (0x00035e6b) list_medium_line_t4_g4_t1_ParamLimits

0x34e6,	// (0x00035e6b) list_medium_line_t4_g4_t1

0x34fb,	// (0x00035e80) list_medium_line_t4_g4_t2_ParamLimits

0x34fb,	// (0x00035e80) list_medium_line_t4_g4_t2

0x3510,	// (0x00035e95) list_medium_line_t4_g4_t3_ParamLimits

0x3510,	// (0x00035e95) list_medium_line_t4_g4_t3

0x3387,	// (0x00035d0c) list_medium_line_t4_g4_t4_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00041ce8) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00041ce8) list_medium_line_t4_g4_t

0x6609,	// (0x00038f8e) chi_dic_find_pane_g1

0x756b,	// (0x00039ef0) main_tport_pane

0x37cf,	// (0x00036154) list_medium_line_plain_t1

0x37dd,	// (0x00036162) list_medium_line_t2_g2_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t2_g2_g1

0x37e9,	// (0x0003616e) list_medium_line_t2_g2_g2_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000423a4) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000423a4) list_medium_line_t2_g2_g

0x37f5,	// (0x0003617a) list_medium_line_t2_g2_t1_ParamLimits

0x37f5,	// (0x0003617a) list_medium_line_t2_g2_t1

0x380f,	// (0x00036194) list_medium_line_t2_g2_t2_ParamLimits

0x380f,	// (0x00036194) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000423a9) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000423a9) list_medium_line_t2_g2_t

0x3a2e,	// (0x000363b3) aid_sp_fs_list_icon_a_sm

0x3a36,	// (0x000363bb) aid_sp_fs_list_icon_d

0x1ef6,	// (0x0003487b) aid_sp_fs_text_primary

0x1c5d,	// (0x000345e2) aid_sp_fs_text_secondary

0xdbb9,	// (0x0004053e) list_medium_line

0xdbb9,	// (0x0004053e) list_medium_line_g2

0xdbb9,	// (0x0004053e) list_medium_line_g3

0xdbb9,	// (0x0004053e) list_medium_line_plain

0xdbb9,	// (0x0004053e) list_medium_line_plain_t2

0xdbb9,	// (0x0004053e) list_medium_line_plain_t3

0xdbb9,	// (0x0004053e) list_medium_line_right_icon

0xdbb9,	// (0x0004053e) list_medium_line_right_iconx2

0xdbb9,	// (0x0004053e) list_medium_line_t2

0xdbb9,	// (0x0004053e) list_medium_line_t2_g2

0xdbb9,	// (0x0004053e) list_medium_line_t2_g3

0xdbb9,	// (0x0004053e) list_medium_line_t2_right_icon

0xdbb9,	// (0x0004053e) list_medium_line_t2_right_iconx2

0xdbb9,	// (0x0004053e) list_medium_line_t3

0xdbb9,	// (0x0004053e) list_medium_line_t3_g2

0xdbb9,	// (0x0004053e) list_medium_line_t3_g3

0xdbb9,	// (0x0004053e) list_medium_line_t3_right_iconx2

0x3a3e,	// (0x000363c3) list_medium_line_t4_g4

0x3a47,	// (0x000363cc) list_medium_line_x2

0x3a47,	// (0x000363cc) list_medium_line_x2_t2_g2

0x3a47,	// (0x000363cc) list_medium_line_x2_t2_g3

0x3a47,	// (0x000363cc) list_medium_line_x2_t2_g4

0x3a47,	// (0x000363cc) list_medium_line_x2_t3

0x3a47,	// (0x000363cc) list_medium_line_x2_t3_g2

0x3a47,	// (0x000363cc) list_medium_line_x2_t3_g3

0x3a47,	// (0x000363cc) list_medium_line_x2_t3_g4

0x3a47,	// (0x000363cc) list_medium_line_x2_t4_g2

0x3a47,	// (0x000363cc) list_medium_line_x2_t4_g4

0x3a50,	// (0x000363d5) list_medium_line_x3

0x3a50,	// (0x000363d5) list_medium_line_x3_t4

0x3a50,	// (0x000363d5) list_medium_line_x3_t4_g4

0x3a3e,	// (0x000363c3) list_medium_line_x4_t4

0x3a3e,	// (0x000363c3) list_medium_line_x4_t4_g7

0x3a3e,	// (0x000363c3) list_medium_line_x4_t5

0x3a59,	// (0x000363de) list_single_fs_dyc_pane_ParamLimits

0x3a59,	// (0x000363de) list_single_fs_dyc_pane

0x333a,	// (0x00035cbf) list_medium_line_x4_t4_g7_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x4_t4_g7_g1

0x3a75,	// (0x000363fa) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3a75,	// (0x000363fa) list_medium_line_x4_t4_g7_g2

0x3a81,	// (0x00036406) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3a81,	// (0x00036406) list_medium_line_x4_t4_g7_g3

0x3a90,	// (0x00036415) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3a90,	// (0x00036415) list_medium_line_x4_t4_g7_g4

0x3a9c,	// (0x00036421) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3a9c,	// (0x00036421) list_medium_line_x4_t4_g7_g5

0x3aab,	// (0x00036430) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3aab,	// (0x00036430) list_medium_line_x4_t4_g7_g6

0x3aba,	// (0x0003643f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3aba,	// (0x0003643f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00042574) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00042574) list_medium_line_x4_t4_g7_g

0x3ac6,	// (0x0003644b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3ac6,	// (0x0003644b) list_medium_line_x4_t4_g7_t1

0x3adb,	// (0x00036460) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3adb,	// (0x00036460) list_medium_line_x4_t4_g7_t2

0x3af0,	// (0x00036475) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3af0,	// (0x00036475) list_medium_line_x4_t4_g7_t3

0x3b05,	// (0x0003648a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3b05,	// (0x0003648a) list_medium_line_x4_t4_g7_t4

0x3b17,	// (0x0003649c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3b17,	// (0x0003649c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00042583) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00042583) list_medium_line_x4_t4_g7_t

0x3b29,	// (0x000364ae) list_single_dyc_row_pane_ParamLimits

0x3b29,	// (0x000364ae) list_single_dyc_row_pane

0xb0ae,	// (0x0003da33) call5_gesture_pane_ParamLimits

0xb0ae,	// (0x0003da33) call5_gesture_pane

0xb0e2,	// (0x0003da67) call5_windows_pane_ParamLimits

0xb0e2,	// (0x0003da67) call5_windows_pane

0xb154,	// (0x0003dad9) call5_swipe_1_pane_cp_ParamLimits

0xb154,	// (0x0003dad9) call5_swipe_1_pane_cp

0xb160,	// (0x0003dae5) call5_swipe_2_pane_cp_ParamLimits

0xb160,	// (0x0003dae5) call5_swipe_2_pane_cp

0xcfe0,	// (0x0003f965) call5_image_pane_cp

0xb16c,	// (0x0003daf1) popup_call5_audio_first_window_cp_ParamLimits

0xb16c,	// (0x0003daf1) popup_call5_audio_first_window_cp

0x1715,	// (0x0003409a) call5_swipe_1_pane_g1_cp_ParamLimits

0x1715,	// (0x0003409a) call5_swipe_1_pane_g1_cp

0x1755,	// (0x000340da) call5_swipe_1_pane_g2_cp

0x172e,	// (0x000340b3) call5_swipe_1_pane_t1_cp_ParamLimits

0x172e,	// (0x000340b3) call5_swipe_1_pane_t1_cp

0x1715,	// (0x0003409a) call5_swipe_2_pane_g1_cp_ParamLimits

0x1715,	// (0x0003409a) call5_swipe_2_pane_g1_cp

0x175d,	// (0x000340e2) call5_swipe_2_pane_g2_cp

0x1765,	// (0x000340ea) call5_swipe_2_pane_t1_cp_ParamLimits

0x1765,	// (0x000340ea) call5_swipe_2_pane_t1_cp

0xd8c7,	// (0x0004024c) main_sp_fs_email_pane

0x177a,	// (0x000340ff) main_sp_fs_listscroll_pane_te

0x3bd5,	// (0x0003655a) popup_sp_fs_action_menu_pane_ParamLimits

0x3bd5,	// (0x0003655a) popup_sp_fs_action_menu_pane

0xe87e,	// (0x00041203) bg_sp_fs_ctrlbar_pane_g1

0x17c3,	// (0x00034148) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x17cc,	// (0x00034151) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x17d5,	// (0x0003415a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe87e,	// (0x00041203) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0004266c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe659,	// (0x00040fde) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe659,	// (0x00040fde) bg_sp_fs_ctrlbar_ddmenu_pane

0x17de,	// (0x00034163) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x17de,	// (0x00034163) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x17ea,	// (0x0003416f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x17ea,	// (0x0003416f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00042675) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00042675) main_sp_fs_ctrlbar_ddmenu_pane_g

0x17f6,	// (0x0003417b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x17f6,	// (0x0003417b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3c15,	// (0x0003659a) list_medium_line_t2_right_icon_g1

0x3c1d,	// (0x000365a2) list_medium_line_t2_right_icon_t1

0x3c2d,	// (0x000365b2) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0004267a) list_medium_line_t2_right_icon_t

0xe42d,	// (0x00040db2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe42d,	// (0x00040db2) bg_sp_fs_ctrlbar_pane

0xb1cf,	// (0x0003db54) main_sp_fs_ctrlbar_button_pane_cp01

0xb1d7,	// (0x0003db5c) main_sp_fs_ctrlbar_ddmenu_pane

0xd8f8,	// (0x0004027d) main_sp_fs_ctrlbar_pane_g1

0x1850,	// (0x000341d5) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0004267f) main_sp_fs_ctrlbar_pane_g

0x185c,	// (0x000341e1) main_sp_fs_ctrlbar_pane_t1

0x3c3b,	// (0x000365c0) main_sp_fs_ctrlbar_pane

0x3c57,	// (0x000365dc) main_sp_fs_listscroll_pane_te_cp01

0x3c68,	// (0x000365ed) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3c68,	// (0x000365ed) popup_sp_fs_action_menu_pane_cp01

0xd8c7,	// (0x0004024c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd8c7,	// (0x0004024c) bg_sp_fs_highlight_list_pane_cp01

0x3c80,	// (0x00036605) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3c80,	// (0x00036605) sp_fs_action_menu_list_gene_pane_g1

0x1880,	// (0x00034205) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1880,	// (0x00034205) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00042684) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00042684) sp_fs_action_menu_list_gene_pane_g

0x3c8f,	// (0x00036614) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3c8f,	// (0x00036614) sp_fs_action_menu_list_gene_pane_t1

0x3ca7,	// (0x0003662c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3ca7,	// (0x0003662c) sp_fs_action_menu_list_gene_pane

0x18c2,	// (0x00034247) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x18c2,	// (0x00034247) popup_sp_fs_action_menu_bg_pane

0x3cc4,	// (0x00036649) sp_fs_action_menu_list_pane_ParamLimits

0x3cc4,	// (0x00036649) sp_fs_action_menu_list_pane

0x18ee,	// (0x00034273) sp_fs_scroll_pane_cp01_ParamLimits

0x18ee,	// (0x00034273) sp_fs_scroll_pane_cp01

0x3ce2,	// (0x00036667) list_medium_line_plain_t2_t1

0x3cf2,	// (0x00036677) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00042689) list_medium_line_plain_t2_t

0x3d00,	// (0x00036685) list_medium_line_plain_t3_t1

0x3d10,	// (0x00036695) list_medium_line_plain_t3_t2

0x3d1e,	// (0x000366a3) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0004268e) list_medium_line_plain_t3_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g2_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t2_g2_g1

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00041bef) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00041bef) list_medium_line_x2_t2_g2_g

0x34e6,	// (0x00035e6b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x34e6,	// (0x00035e6b) list_medium_line_x2_t2_g2_t1

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00042695) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00042695) list_medium_line_x2_t2_g2_t

0x333a,	// (0x00035cbf) list_medium_line_x2_t4_g2_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t4_g2_g1

0x3d2c,	// (0x000366b1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3d2c,	// (0x000366b1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0004269a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0004269a) list_medium_line_x2_t4_g2_g

0x3d3e,	// (0x000366c3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3d3e,	// (0x000366c3) list_medium_line_x2_t4_g2_t1

0x3d58,	// (0x000366dd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3d58,	// (0x000366dd) list_medium_line_x2_t4_g2_t2

0x3d6d,	// (0x000366f2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3d6d,	// (0x000366f2) list_medium_line_x2_t4_g2_t3

0x3387,	// (0x00035d0c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0004269f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0004269f) list_medium_line_x2_t4_g2_t

0x3d82,	// (0x00036707) list_medium_line_t3_right_iconx2_g1

0x3c15,	// (0x0003659a) list_medium_line_t3_right_iconx2_g2

0x3d8a,	// (0x0003670f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x000426a8) list_medium_line_t3_right_iconx2_g

0x3d92,	// (0x00036717) list_medium_line_t3_right_iconx2_t1

0x3da2,	// (0x00036727) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x000426af) list_medium_line_t3_right_iconx2_t

0x333a,	// (0x00035cbf) list_medium_line_x3_t4_g4_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x3_t4_g4_g1

0x3346,	// (0x00035ccb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x3_t4_g4_g2

0x33d0,	// (0x00035d55) list_medium_line_x3_t4_g4_g3_ParamLimits

0x33d0,	// (0x00035d55) list_medium_line_x3_t4_g4_g3

0x3db0,	// (0x00036735) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3db0,	// (0x00036735) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x000426b4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x000426b4) list_medium_line_x3_t4_g4_g

0x3dbc,	// (0x00036741) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3dbc,	// (0x00036741) list_medium_line_x3_t4_g4_t1

0x3dd3,	// (0x00036758) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3dd3,	// (0x00036758) list_medium_line_x3_t4_g4_t2

0x34fb,	// (0x00035e80) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34fb,	// (0x00035e80) list_medium_line_x3_t4_g4_t3

0x3de8,	// (0x0003676d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3de8,	// (0x0003676d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x000426bd) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x000426bd) list_medium_line_x3_t4_g4_t

0x3e05,	// (0x0003678a) list_single_dyc_row_text_pane_t1_ParamLimits

0x3e05,	// (0x0003678a) list_single_dyc_row_text_pane_t1

0x3e3c,	// (0x000367c1) list_single_dyc_row_text_pane_t2_ParamLimits

0x3e3c,	// (0x000367c1) list_single_dyc_row_text_pane_t2

0x3e96,	// (0x0003681b) list_single_dyc_row_text_pane_t3_ParamLimits

0x3e96,	// (0x0003681b) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x000426c6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x000426c6) list_single_dyc_row_text_pane_t

0x3ea8,	// (0x0003682d) list_single_dyc_row_pane_g1_ParamLimits

0x3ea8,	// (0x0003682d) list_single_dyc_row_pane_g1

0x3eb4,	// (0x00036839) list_single_dyc_row_pane_g2_ParamLimits

0x3eb4,	// (0x00036839) list_single_dyc_row_pane_g2

0x3ec0,	// (0x00036845) list_single_dyc_row_pane_g3_ParamLimits

0x3ec0,	// (0x00036845) list_single_dyc_row_pane_g3

0x3ecc,	// (0x00036851) list_single_dyc_row_pane_g4_ParamLimits

0x3ecc,	// (0x00036851) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x000426cd) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x000426cd) list_single_dyc_row_pane_g

0x3ed8,	// (0x0003685d) list_single_dyc_row_text_pane_ParamLimits

0x3ed8,	// (0x0003685d) list_single_dyc_row_text_pane

0x4511,	// (0x00036e96) bg_sp_fs_scroll_pane

0x19a6,	// (0x0003432b) thumb_sp_fs_scroll_pane

0x37dd,	// (0x00036162) list_medium_line_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_g1

0x3ef7,	// (0x0003687c) list_medium_line_t1_ParamLimits

0x3ef7,	// (0x0003687c) list_medium_line_t1

0x333a,	// (0x00035cbf) list_medium_line_x2_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_g1

0x3346,	// (0x00035ccb) list_medium_line_x2_g2_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x000426d6) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x000426d6) list_medium_line_x2_g

0x3f0c,	// (0x00036891) list_medium_line_x2_t1_ParamLimits

0x3f0c,	// (0x00036891) list_medium_line_x2_t1

0x333a,	// (0x00035cbf) list_medium_line_x3_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x3_g1

0x3346,	// (0x00035ccb) list_medium_line_x3_g2_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x000426d6) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x000426d6) list_medium_line_x3_g

0x3f0c,	// (0x00036891) list_medium_line_x3_t1_ParamLimits

0x3f0c,	// (0x00036891) list_medium_line_x3_t1

0x19da,	// (0x0003435f) thumb_sp_fs_scroll_pane_g1

0x19e3,	// (0x00034368) thumb_sp_fs_scroll_pane_g2

0x19ec,	// (0x00034371) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000426db) thumb_sp_fs_scroll_pane_g

0x19da,	// (0x0003435f) bg_sp_fs_scroll_pane_g1

0x19e3,	// (0x00034368) bg_sp_fs_scroll_pane_g2

0x19ec,	// (0x00034371) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x000426db) bg_sp_fs_scroll_pane_g

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g4_g1_ParamLimits

0x333a,	// (0x00035cbf) list_medium_line_x2_t3_g4_g1

0x33c4,	// (0x00035d49) list_medium_line_x2_t3_g4_g2_ParamLimits

0x33c4,	// (0x00035d49) list_medium_line_x2_t3_g4_g2

0x3346,	// (0x00035ccb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3346,	// (0x00035ccb) list_medium_line_x2_t3_g4_g3

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3352,	// (0x00035cd7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00041c6b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00041c6b) list_medium_line_x2_t3_g4_g

0x3f22,	// (0x000368a7) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3f22,	// (0x000368a7) list_medium_line_x2_t3_g4_t1

0x3f38,	// (0x000368bd) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3f38,	// (0x000368bd) list_medium_line_x2_t3_g4_t2

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3387,	// (0x00035d0c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x000426e2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x000426e2) list_medium_line_x2_t3_g4_t

0x37dd,	// (0x00036162) list_medium_line_g2_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_g2_g1

0x37e9,	// (0x0003616e) list_medium_line_g2_g2_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000423a4) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000423a4) list_medium_line_g2_g

0x3f51,	// (0x000368d6) list_medium_line_g2_t1_ParamLimits

0x3f51,	// (0x000368d6) list_medium_line_g2_t1

0x37dd,	// (0x00036162) list_medium_line_t3_g2_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t3_g2_g1

0x37e9,	// (0x0003616e) list_medium_line_t3_g2_g2_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000423a4) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000423a4) list_medium_line_t3_g2_g

0x3f66,	// (0x000368eb) list_medium_line_t3_g2_t1_ParamLimits

0x3f66,	// (0x000368eb) list_medium_line_t3_g2_t1

0x3f80,	// (0x00036905) list_medium_line_t3_g2_t2_ParamLimits

0x3f80,	// (0x00036905) list_medium_line_t3_g2_t2

0x3f95,	// (0x0003691a) list_medium_line_t3_g2_t3_ParamLimits

0x3f95,	// (0x0003691a) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x000426e9) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x000426e9) list_medium_line_t3_g2_t

0x3c15,	// (0x0003659a) list_medium_line_right_icon_g1

0x3fab,	// (0x00036930) list_medium_line_right_icon_t1

0x37dd,	// (0x00036162) list_medium_line_t2_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t2_g1

0x3fb9,	// (0x0003693e) list_medium_line_t2_t1_ParamLimits

0x3fb9,	// (0x0003693e) list_medium_line_t2_t1

0x3fd0,	// (0x00036955) list_medium_line_t2_t2_ParamLimits

0x3fd0,	// (0x00036955) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x000426f0) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x000426f0) list_medium_line_t2_t

0x37dd,	// (0x00036162) list_medium_line_t3_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t3_g1

0x3fe2,	// (0x00036967) list_medium_line_t3_t1_ParamLimits

0x3fe2,	// (0x00036967) list_medium_line_t3_t1

0x3ff9,	// (0x0003697e) list_medium_line_t3_t2_ParamLimits

0x3ff9,	// (0x0003697e) list_medium_line_t3_t2

0x400e,	// (0x00036993) list_medium_line_t3_t3_ParamLimits

0x400e,	// (0x00036993) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x000426f5) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x000426f5) list_medium_line_t3_t

0x37dd,	// (0x00036162) list_medium_line_g3_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_g3_g1

0x4020,	// (0x000369a5) list_medium_line_g3_g2_ParamLimits

0x4020,	// (0x000369a5) list_medium_line_g3_g2

0x37e9,	// (0x0003616e) list_medium_line_g3_g3_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x000426fc) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x000426fc) list_medium_line_g3_g

0x402c,	// (0x000369b1) list_medium_line_g3_t1_ParamLimits

0x402c,	// (0x000369b1) list_medium_line_g3_t1

0x37dd,	// (0x00036162) list_medium_line_t2_g3_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t2_g3_g1

0x4020,	// (0x000369a5) list_medium_line_t2_g3_g2_ParamLimits

0x4020,	// (0x000369a5) list_medium_line_t2_g3_g2

0x37e9,	// (0x0003616e) list_medium_line_t2_g3_g3_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x000426fc) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x000426fc) list_medium_line_t2_g3_g

0x4041,	// (0x000369c6) list_medium_line_t2_g3_t1_ParamLimits

0x4041,	// (0x000369c6) list_medium_line_t2_g3_t1

0x405b,	// (0x000369e0) list_medium_line_t2_g3_t2_ParamLimits

0x405b,	// (0x000369e0) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00042703) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00042703) list_medium_line_t2_g3_t

0x37dd,	// (0x00036162) list_medium_line_t3_g3_g1_ParamLimits

0x37dd,	// (0x00036162) list_medium_line_t3_g3_g1

0x4020,	// (0x000369a5) list_medium_line_t3_g3_g2_ParamLimits

0x4020,	// (0x000369a5) list_medium_line_t3_g3_g2

0x37e9,	// (0x0003616e) list_medium_line_t3_g3_g3_ParamLimits

0x37e9,	// (0x0003616e) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x000426fc) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x000426fc) list_medium_line_t3_g3_g

0x4070,	// (0x000369f5) list_medium_line_t3_g3_t1_ParamLimits

0x4070,	// (0x000369f5) list_medium_line_t3_g3_t1

0x4089,	// (0x00036a0e) list_medium_line_t3_g3_t2_ParamLimits

0x4089,	// (0x00036a0e) list_medium_line_t3_g3_t2

0x409f,	// (0x00036a24) list_medium_line_t3_g3_t3_ParamLimits

0x409f,	// (0x00036a24) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00042708) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00042708) list_medium_line_t3_g3_t

0x3d82,	// (0x00036707) list_medium_line_right_iconx2_g1

0x3c15,	// (0x0003659a) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0004270f) list_medium_line_right_iconx2_g

0x40b5,	// (0x00036a3a) list_medium_line_right_iconx2_t1

0x3d82,	// (0x00036707) list_medium_line_t2_right_iconx2_g1

0x3c15,	// (0x0003659a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0004270f) list_medium_line_t2_right_iconx2_g

0x40c3,	// (0x00036a48) list_medium_line_t2_right_iconx2_t1

0x40d3,	// (0x00036a58) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00042714) list_medium_line_t2_right_iconx2_t

0x40e1,	// (0x00036a66) list_medium_line_x4_t4_t1

0x40ef,	// (0x00036a74) list_medium_line_x4_t4_t2

0x40ff,	// (0x00036a84) list_medium_line_x4_t4_t3

0x410f,	// (0x00036a94) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00042719) list_medium_line_x4_t4_t

0xb20a,	// (0x0003db8f) tport_appsw_pane_ParamLimits

0xb20a,	// (0x0003db8f) tport_appsw_pane

0xb216,	// (0x0003db9b) tport_contact_pane_ParamLimits

0xb216,	// (0x0003db9b) tport_contact_pane

0xb226,	// (0x0003dbab) tport_listscroll_pane_ParamLimits

0xb226,	// (0x0003dbab) tport_listscroll_pane

0xb236,	// (0x0003dbbb) cell_tport_appsw_pane_ParamLimits

0xb236,	// (0x0003dbbb) cell_tport_appsw_pane

0xeb4a,	// (0x000414cf) tport_appsw_pane_g1_ParamLimits

0xeb4a,	// (0x000414cf) tport_appsw_pane_g1

0x1a55,	// (0x000343da) tport_contact_pane_g1

0x1a5e,	// (0x000343e3) tport_contact_pane_t1

0x1a6c,	// (0x000343f1) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00042722) tport_contact_pane_t

0x1a7a,	// (0x000343ff) list_tport_pane

0x1a83,	// (0x00034408) scroll_pane_cp_030

0x1a94,	// (0x00034419) cell_tport_appsw_pane_g1

0x1aa4,	// (0x00034429) cell_tport_appsw_pane_t1

0x4511,	// (0x00036e96) grid_highlight_pane_cp019

0xb261,	// (0x0003dbe6) list_tport_double_graphic_pane_ParamLimits

0xb261,	// (0x0003dbe6) list_tport_double_graphic_pane

0xd8c7,	// (0x0004024c) list_highlight_pane_cp023_ParamLimits

0xd8c7,	// (0x0004024c) list_highlight_pane_cp023

0xb274,	// (0x0003dbf9) list_tport_double_graphic_pane_g1_ParamLimits

0xb274,	// (0x0003dbf9) list_tport_double_graphic_pane_g1

0xb281,	// (0x0003dc06) list_tport_double_graphic_pane_t1_ParamLimits

0xb281,	// (0x0003dc06) list_tport_double_graphic_pane_t1

0xb296,	// (0x0003dc1b) list_tport_double_graphic_pane_t2_ParamLimits

0xb296,	// (0x0003dc1b) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0004272e) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0004272e) list_tport_double_graphic_pane_t

0x4511,	// (0x00036e96) main_cale_note_pane

0x9757,	// (0x0003c0dc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9757,	// (0x0003c0dc) cell_vitu2_function_top_wide_pane_cp01

0xae05,	// (0x0003d78a) wait_bar_pane_cp05_ParamLimits

0x4511,	// (0x00036e96) listscroll_cmail_pane

0x1aba,	// (0x0003443f) list_cmail_pane

0xb2b2,	// (0x0003dc37) list_cmail_body_pane

0xb2d6,	// (0x0003dc5b) list_single_cmail_header_caption_pane

0xb304,	// (0x0003dc89) list_single_cmail_header_detail_pane_ParamLimits

0xb304,	// (0x0003dc89) list_single_cmail_header_detail_pane

0xb33c,	// (0x0003dcc1) list_single_cmail_header_caption_pane_t1

0x411f,	// (0x00036aa4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x411f,	// (0x00036aa4) list_single_cmail_header_detail_pane_g1

0x4137,	// (0x00036abc) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4137,	// (0x00036abc) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00042733) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00042733) list_single_cmail_header_detail_pane_g

0x4143,	// (0x00036ac8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4143,	// (0x00036ac8) list_single_cmail_header_detail_pane_t1

0x419b,	// (0x00036b20) list_single_cmail_header_editor_pane_bg_ParamLimits

0x419b,	// (0x00036b20) list_single_cmail_header_editor_pane_bg

0x1b37,	// (0x000344bc) list_cmail_body_pane_g1

0x1b40,	// (0x000344c5) list_cmail_body_pane_t1

0x045c,	// (0x00032de1) list_single_cmail_header_editor_pane_bg_g1

0xc968,	// (0x0003f2ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0x046c,	// (0x00032df1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0464,	// (0x00032de9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06e5,	// (0x0003306a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x048c,	// (0x00032e11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x047c,	// (0x00032e01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0484,	// (0x00032e09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc948,	// (0x0003f2cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb34c,	// (0x0003dcd1) calenote_gesture_pane_ParamLimits

0xb34c,	// (0x0003dcd1) calenote_gesture_pane

0xb366,	// (0x0003dceb) calenote_window_pane_ParamLimits

0xb366,	// (0x0003dceb) calenote_window_pane

0x1b4e,	// (0x000344d3) popup_note_window_cp01

0xb37e,	// (0x0003dd03) calenote_swipe_1_pane_ParamLimits

0xb37e,	// (0x0003dd03) calenote_swipe_1_pane

0xb160,	// (0x0003dae5) calenote_swipe_2_pane_ParamLimits

0xb160,	// (0x0003dae5) calenote_swipe_2_pane

0x1715,	// (0x0003409a) calenote_swipe_1_pane_g1_ParamLimits

0x1715,	// (0x0003409a) calenote_swipe_1_pane_g1

0x1722,	// (0x000340a7) calenote_swipe_1_pane_g2_ParamLimits

0x1722,	// (0x000340a7) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00042662) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00042662) calenote_swipe_1_pane_g

0x1b60,	// (0x000344e5) calenote_swipe_1_pane_t1_ParamLimits

0x1b60,	// (0x000344e5) calenote_swipe_1_pane_t1

0x1715,	// (0x0003409a) calenote_swipe_2_pane_g1_ParamLimits

0x1715,	// (0x0003409a) calenote_swipe_2_pane_g1

0x1b7f,	// (0x00034504) calenote_swipe_2_pane_g2_ParamLimits

0x1b7f,	// (0x00034504) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0004273f) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0004273f) calenote_swipe_2_pane_g

0x1b8b,	// (0x00034510) calenote_swipe_2_pane_t1_ParamLimits

0x1b8b,	// (0x00034510) calenote_swipe_2_pane_t1

0x4511,	// (0x00036e96) main_mup_navstr_pane

0x84f6,	// (0x0003ae7b) main_mup3_pane_t7_ParamLimits

0x84f6,	// (0x0003ae7b) main_mup3_pane_t7

0x8ef9,	// (0x0003b87e) main_mp4_pane_g6_ParamLimits

0x8ef9,	// (0x0003b87e) main_mp4_pane_g6

0x926d,	// (0x0003bbf2) main_image3_pane_t4_ParamLimits

0x926d,	// (0x0003bbf2) main_image3_pane_t4

0xb391,	// (0x0003dd16) popup_navstr_preview_pane_ParamLimits

0xb391,	// (0x0003dd16) popup_navstr_preview_pane

0xb39d,	// (0x0003dd22) scroll_navstr_pane_ParamLimits

0xb39d,	// (0x0003dd22) scroll_navstr_pane

0x4511,	// (0x00036e96) bg_popup_preview_window_pane_cp04

0x1bb2,	// (0x00034537) popup_navstr_preview_pane_t1

0xb3a9,	// (0x0003dd2e) scroll_navstr_pane_g1_ParamLimits

0xb3a9,	// (0x0003dd2e) scroll_navstr_pane_g1

0xb3b6,	// (0x0003dd3b) scroll_navstr_pane_t1_ParamLimits

0xb3b6,	// (0x0003dd3b) scroll_navstr_pane_t1

0x1b57,	// (0x000344dc) bg_button_pane_cp014

0x1b57,	// (0x000344dc) bg_button_pane_cp030

0x3b7b,	// (0x00036500) list_double_fisheye_pane_g4_ParamLimits

0x3b7b,	// (0x00036500) list_double_fisheye_pane_g4

0x3b87,	// (0x0003650c) list_double_fisheye_pane_g5_ParamLimits

0x3b87,	// (0x0003650c) list_double_fisheye_pane_g5

0x1ac2,	// (0x00034447) sp_fs_scroll_pane_cp03

0xd8f8,	// (0x0004027d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1850,	// (0x000341d5) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0004267f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x185c,	// (0x000341e1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb2a8,	// (0x0003dc2d) sp_fs_scroll_pane_cp02

0xc66e,	// (0x0003eff3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc66e,	// (0x0003eff3) popup_sp_fs_calendar_preview_list_single_pane

0x4511,	// (0x00036e96) main_cam6_pano_pane

0xd8c7,	// (0x0004024c) main_mup3_pane_ParamLimits

0x4511,	// (0x00036e96) main_phacti_pane

0xacda,	// (0x0003d65f) bg_button_pane_cp11

0xacf2,	// (0x0003d677) main_mobtv_info_pane_g2_ParamLimits

0xacf2,	// (0x0003d677) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x000425df) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x000425df) main_mobtv_info_pane_g

0xaea4,	// (0x0003d829) sc_clock_pane_t5_ParamLimits

0xaea4,	// (0x0003d829) sc_clock_pane_t5

0xaf46,	// (0x0003d8cb) main_radioblah_pane_g1_ParamLimits

0x161b,	// (0x00033fa0) main_radioblah_pane_t3_ParamLimits

0x161b,	// (0x00033fa0) main_radioblah_pane_t3

0x1633,	// (0x00033fb8) main_radioblah_pane_t4_ParamLimits

0x1633,	// (0x00033fb8) main_radioblah_pane_t4

0xaf64,	// (0x0003d8e9) main_radioblah_text_pane_ParamLimits

0xaf64,	// (0x0003d8e9) main_radioblah_text_pane

0xaf71,	// (0x0003d8f6) main_radioblah_info_pane_g1_ParamLimits

0xb006,	// (0x0003d98b) main_radioblah_info_pane_t4_ParamLimits

0xb006,	// (0x0003d98b) main_radioblah_info_pane_t4

0xd8c7,	// (0x0004024c) main_sp_fs_calendar_pane

0xb3c8,	// (0x0003dd4d) main_phacti_pane_g1

0xb3d0,	// (0x0003dd55) phacti_note_pane_ParamLimits

0xb3d0,	// (0x0003dd55) phacti_note_pane

0x1bc9,	// (0x0003454e) phacti_term_pane_ParamLimits

0x1bc9,	// (0x0003454e) phacti_term_pane

0x1bde,	// (0x00034563) phacti_note_pane_t1_ParamLimits

0x1bde,	// (0x00034563) phacti_note_pane_t1

0x41ad,	// (0x00036b32) phacti_term_pane_g1

0x41b5,	// (0x00036b3a) phacti_term_pane_t1_ParamLimits

0x41b5,	// (0x00036b3a) phacti_term_pane_t1

0x1c27,	// (0x000345ac) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1c2f,	// (0x000345b4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00042749) popup_sp_fs_calendar_preview_list_single_pane_g

0x1c37,	// (0x000345bc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1c37,	// (0x000345bc) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1c4d,	// (0x000345d2) aid_popup_sp_fs_bg_corner_pane

0xe87e,	// (0x00041203) popup_sp_fs_calendar_preview_bg_pane_g1

0x4511,	// (0x00036e96) popup_sp_fs_calendar_preview_bg_pane

0x1c55,	// (0x000345da) popup_sp_fs_calendar_preview_list_pane

0xd8c7,	// (0x0004024c) bg_main_sp_fs_cale_pane_ParamLimits

0xd8c7,	// (0x0004024c) bg_main_sp_fs_cale_pane

0x41df,	// (0x00036b64) listscroll_cale_mrui_pane_ParamLimits

0x41df,	// (0x00036b64) listscroll_cale_mrui_pane

0x41f3,	// (0x00036b78) listscroll_sp_fs_schedule_track_pane

0x41fc,	// (0x00036b81) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x41fc,	// (0x00036b81) main_sp_fs_ctrlbar_pane_cp01

0x1c94,	// (0x00034619) main_sp_fs_ribbon_pane

0x1c9c,	// (0x00034621) popup_sp_fs_cale_preview_window

0xb413,	// (0x0003dd98) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb413,	// (0x0003dd98) list_single_sp_fs_schedule_track_pane

0x47a2,	// (0x00037127) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x47a2,	// (0x00037127) bg_sp_fs_highlight_list_pane_cp03

0xb435,	// (0x0003ddba) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb435,	// (0x0003ddba) list_single_sp_fs_schedule_track_pane_g1

0xb441,	// (0x0003ddc6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb441,	// (0x0003ddc6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0004274e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0004274e) list_single_sp_fs_schedule_track_pane_g

0xb44d,	// (0x0003ddd2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb44d,	// (0x0003ddd2) list_single_sp_fs_schedule_track_pane_t1

0xb465,	// (0x0003ddea) sp_fs_schedule_track_pane_ParamLimits

0xb465,	// (0x0003ddea) sp_fs_schedule_track_pane

0x1cae,	// (0x00034633) sp_fs_schedule_track_pane_g1

0x1cb6,	// (0x0003463b) sp_fs_schedule_track_pane_g2

0x1cbe,	// (0x00034643) sp_fs_schedule_track_pane_g3

0x1cc6,	// (0x0003464b) sp_fs_schedule_track_pane_g4

0x1cce,	// (0x00034653) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00042753) sp_fs_schedule_track_pane_g

0x045c,	// (0x00032de1) bg_sp_fs_schedule_viewer_highlight_g1

0xc968,	// (0x0003f2ed) bg_sp_fs_schedule_viewer_highlight_g2

0x0464,	// (0x00032de9) bg_sp_fs_schedule_viewer_highlight_g3

0x046c,	// (0x00032df1) bg_sp_fs_schedule_viewer_highlight_g4

0x06e5,	// (0x0003306a) bg_sp_fs_schedule_viewer_highlight_g5

0x047c,	// (0x00032e01) bg_sp_fs_schedule_viewer_highlight_g6

0x0484,	// (0x00032e09) bg_sp_fs_schedule_viewer_highlight_g7

0x048c,	// (0x00032e11) bg_sp_fs_schedule_viewer_highlight_g8

0xc948,	// (0x0003f2cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0004275e) bg_sp_fs_schedule_viewer_highlight_g

0x4511,	// (0x00036e96) bg_main_sp_fs_ribbon_pane

0xb475,	// (0x0003ddfa) main_sp_fs_ribbon_pane_g1

0x1cd6,	// (0x0003465b) main_sp_fs_ribbon_pane_t1

0xb47e,	// (0x0003de03) main_sp_fs_ribbon_pane_t2

0x1ce5,	// (0x0003466a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x00042771) main_sp_fs_ribbon_pane_t

0x1cf4,	// (0x00034679) main_sp_fs_ribbon_scheduler_pane

0x1cfc,	// (0x00034681) bg_main_sp_fs_ribbon_pane_g1

0x1d05,	// (0x0003468a) bg_main_sp_fs_ribbon_pane_g2

0x1d0e,	// (0x00034693) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x00042778) bg_main_sp_fs_ribbon_pane_g

0x1d16,	// (0x0003469b) main_sp_fs_ribbon_scheduler_pane_g1

0x1d1f,	// (0x000346a4) main_sp_fs_ribbon_scheduler_pane_g2

0x1d28,	// (0x000346ad) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0004277f) main_sp_fs_ribbon_scheduler_pane_g

0x1d31,	// (0x000346b6) list_cale_mrui_pane

0xb48d,	// (0x0003de12) sp_fs_scroll_pane_cp07_ParamLimits

0xb48d,	// (0x0003de12) sp_fs_scroll_pane_cp07

0xb4a3,	// (0x0003de28) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb4a3,	// (0x0003de28) bg_sp_fs_schedule_viewer_highlight

0x1d3a,	// (0x000346bf) list_single_sp_fs_schedule_track_pane_cp01

0x1d42,	// (0x000346c7) list_sp_fs_schedule_track_pane

0x1d4a,	// (0x000346cf) sp_fs_scroll_pane_cp06_ParamLimits

0x1d4a,	// (0x000346cf) sp_fs_scroll_pane_cp06

0xe87e,	// (0x00041203) bgmain_sp_fs_calendar_pane_g1

0x420d,	// (0x00036b92) list_single_cale_mrui_pane_ParamLimits

0x420d,	// (0x00036b92) list_single_cale_mrui_pane

0x423c,	// (0x00036bc1) list_single_cale_mrui_row_pane_ParamLimits

0x423c,	// (0x00036bc1) list_single_cale_mrui_row_pane

0x4249,	// (0x00036bce) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4249,	// (0x00036bce) list_single_cale_mrui_row_pane_g1

0x4281,	// (0x00036c06) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4281,	// (0x00036c06) list_single_cale_mrui_row_pane_t1

0x4293,	// (0x00036c18) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4293,	// (0x00036c18) list_single_cale_mrui_row_pane_t2

0x42f9,	// (0x00036c7e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x42f9,	// (0x00036c7e) list_single_cale_mrui_row_pane_t3

0x4328,	// (0x00036cad) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4328,	// (0x00036cad) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0004278b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0004278b) list_single_cale_mrui_row_pane_t

0x4357,	// (0x00036cdc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4357,	// (0x00036cdc) list_single_cmail_header_editor_pane_bg_cp01

0x4379,	// (0x00036cfe) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4379,	// (0x00036cfe) list_single_cmail_header_editor_pane_bg_cp02

0xb4b0,	// (0x0003de35) main_radioblah_text_pane_t1_ParamLimits

0xb4b0,	// (0x0003de35) main_radioblah_text_pane_t1

0x1e11,	// (0x00034796) cam6_indi_pane_cp01

0x1e19,	// (0x0003479e) cam6_mode_pane_cp01

0x1e21,	// (0x000347a6) cam6_pano_pane

0x1e2a,	// (0x000347af) cam6_zoom_pane_cp01

0x1e32,	// (0x000347b7) cam6_pano_image_pane

0x1e3d,	// (0x000347c2) cam6_pano_pane_g1

0x1393,	// (0x00033d18) cam6_pano_pane_g2

0x1e46,	// (0x000347cb) cam6_pano_pane_g3

0x1e4f,	// (0x000347d4) cam6_pano_pane_g4

0xee04,	// (0x00041789) cam6_pano_pane_g5

0x1e58,	// (0x000347dd) cam6_pano_pane_g6

0x1e62,	// (0x000347e7) cam6_pano_pane_g7

0x1e6a,	// (0x000347ef) cam6_pano_pane_g8

0x1e73,	// (0x000347f8) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x00042794) cam6_pano_pane_g

0x4511,	// (0x00036e96) main_browser_tag_pane

0x1baa,	// (0x0003452f) grid_navstr_albumart_pane

0x1e7e,	// (0x00034803) cell_navstr_albumart_pane_ParamLimits

0x1e7e,	// (0x00034803) cell_navstr_albumart_pane

0xd141,	// (0x0003fac6) cell_navstr_albumart_pane_g1

0xe242,	// (0x00040bc7) cell_navstr_albumart_pane_g2

0xe252,	// (0x00040bd7) cell_navstr_albumart_pane_g3

0xe24a,	// (0x00040bcf) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x000427a7) cell_navstr_albumart_pane_g

0xb4cd,	// (0x0003de52) bt_list_pane_ParamLimits

0xb4cd,	// (0x0003de52) bt_list_pane

0xb4f4,	// (0x0003de79) bt_list_pane_t1

0xb503,	// (0x0003de88) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x000427b0) bt_list_pane_t

0x4511,	// (0x00036e96) main_cale_prevew_pane

0xb512,	// (0x0003de97) popup_cale_preview_window_ParamLimits

0xb512,	// (0x0003de97) popup_cale_preview_window

0xd8c7,	// (0x0004024c) bg_popup_preview_window_pane_cp05_ParamLimits

0xd8c7,	// (0x0004024c) bg_popup_preview_window_pane_cp05

0x1ea0,	// (0x00034825) list_cale_preview_pane_ParamLimits

0x1ea0,	// (0x00034825) list_cale_preview_pane

0xb529,	// (0x0003deae) list_double_cale_preview_pane_ParamLimits

0xb529,	// (0x0003deae) list_double_cale_preview_pane

0xb53b,	// (0x0003dec0) list_single_cale_preview_pane_ParamLimits

0xb53b,	// (0x0003dec0) list_single_cale_preview_pane

0xb54f,	// (0x0003ded4) list_single_cale_preview_pane_g1

0xb557,	// (0x0003dedc) list_single_cale_preview_pane_t1_ParamLimits

0xb557,	// (0x0003dedc) list_single_cale_preview_pane_t1

0xb56c,	// (0x0003def1) list_double_cale_preview_pane_g1

0xb574,	// (0x0003def9) list_double_cale_preview_pane_t1_ParamLimits

0xb574,	// (0x0003def9) list_double_cale_preview_pane_t1

0xb589,	// (0x0003df0e) list_double_cale_preview_pane_t2_ParamLimits

0xb589,	// (0x0003df0e) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x000427b5) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x000427b5) list_double_cale_preview_pane_t

0x4511,	// (0x00036e96) main_ezdial_pane

0xd8c7,	// (0x0004024c) main_sp_fs_email_pane_ParamLimits

0xb178,	// (0x0003dafd) cmail_ddmenu_btn01_pane_ParamLimits

0xb178,	// (0x0003dafd) cmail_ddmenu_btn01_pane

0xb195,	// (0x0003db1a) cmail_ddmenu_btn02_pane_ParamLimits

0xb195,	// (0x0003db1a) cmail_ddmenu_btn02_pane

0xb1b3,	// (0x0003db38) cmail_ddmenu_btn03_pane_ParamLimits

0xb1b3,	// (0x0003db38) cmail_ddmenu_btn03_pane

0x3c3b,	// (0x000365c0) main_sp_fs_ctrlbar_pane_ParamLimits

0x3c57,	// (0x000365dc) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb2b2,	// (0x0003dc37) list_cmail_body_pane_ParamLimits

0x1ad1,	// (0x00034456) bg_button_pane_cp12

0x1ae6,	// (0x0003446b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1ae6,	// (0x0003446b) list_single_cmail_header_detail_pane_g3

0x4175,	// (0x00036afa) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4175,	// (0x00036afa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0004273a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0004273a) list_single_cmail_header_detail_pane_t

0x41ca,	// (0x00036b4f) phacti_term_pane_t2_ParamLimits

0x41ca,	// (0x00036b4f) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00042744) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00042744) phacti_term_pane_t

0x1eac,	// (0x00034831) aid_size_list_single_double

0xb5a1,	// (0x0003df26) popup_ezdial_listscroll_window

0xb5c2,	// (0x0003df47) popup_number_entry_window_cp01

0xcfe0,	// (0x0003f965) bg_popup_call_pane_cp09

0x1eb8,	// (0x0003483d) ezdial_list_pane

0x1ec0,	// (0x00034845) scroll_pane_cp23

0xe659,	// (0x00040fde) bg_button_pane_cp028_ParamLimits

0xe659,	// (0x00040fde) bg_button_pane_cp028

0xb5d0,	// (0x0003df55) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb5d0,	// (0x0003df55) cmail_ddmenu_btn01_pane_g1

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x000427ba) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x000427ba) cmail_ddmenu_btn01_pane_g

0x1ec8,	// (0x0003484d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1ec8,	// (0x0003484d) cmail_ddmenu_btn01_pane_t1

0xe42d,	// (0x00040db2) bg_button_pane_cp029_ParamLimits

0xe42d,	// (0x00040db2) bg_button_pane_cp029

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn02_pane_g1

0xb5fa,	// (0x0003df7f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb5fa,	// (0x0003df7f) cmail_ddmenu_btn02_pane_t1

0x47a2,	// (0x00037127) bg_button_pane_cp031_ParamLimits

0x47a2,	// (0x00037127) bg_button_pane_cp031

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb5e2,	// (0x0003df67) cmail_ddmenu_btn03_pane_g1

0xb5fa,	// (0x0003df7f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb5fa,	// (0x0003df7f) cmail_ddmenu_btn03_pane_t1

0x9118,	// (0x0003ba9d) cell_dialer2_keypad_pane_t1_ParamLimits

0x9132,	// (0x0003bab7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9132,	// (0x0003bab7) cell_dialer2_keypad_pane_t1_copy1

0xab7a,	// (0x0003d4ff) ncimui_group_button_pane

0xd8c7,	// (0x0004024c) main_sp_fs_calendar_pane_ParamLimits

0xb2d6,	// (0x0003dc5b) list_single_cmail_header_caption_pane_ParamLimits

0x1c5d,	// (0x000345e2) aid_recal_txt_sm_pane

0x4511,	// (0x00036e96) mian_recal_day_pane

0x1c9c,	// (0x00034621) popup_sp_fs_cale_preview_window_ParamLimits

0x4511,	// (0x00036e96) list_recal_day_pane

0x1eff,	// (0x00034884) list_single_recal_day_pane_ParamLimits

0x1eff,	// (0x00034884) list_single_recal_day_pane

0x1f11,	// (0x00034896) list_single_recal_day_pane_g1_ParamLimits

0x1f11,	// (0x00034896) list_single_recal_day_pane_g1

0x1f1d,	// (0x000348a2) list_single_recal_day_pane_g2_ParamLimits

0x1f1d,	// (0x000348a2) list_single_recal_day_pane_g2

0x1f2c,	// (0x000348b1) list_single_recal_day_pane_g3_ParamLimits

0x1f2c,	// (0x000348b1) list_single_recal_day_pane_g3

0xb61e,	// (0x0003dfa3) list_single_recal_day_pane_g4_ParamLimits

0xb61e,	// (0x0003dfa3) list_single_recal_day_pane_g4

0x1f38,	// (0x000348bd) list_single_recal_day_pane_g5_ParamLimits

0x1f38,	// (0x000348bd) list_single_recal_day_pane_g5

0x1f47,	// (0x000348cc) list_single_recal_day_pane_g6_ParamLimits

0x1f47,	// (0x000348cc) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x000427c9) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x000427c9) list_single_recal_day_pane_g

0x1f53,	// (0x000348d8) list_single_recal_day_pane_t1

0x1f61,	// (0x000348e6) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x000427d6) list_single_recal_day_pane_t

0xb631,	// (0x0003dfb6) ncimui_query_button_pane_ParamLimits

0xb631,	// (0x0003dfb6) ncimui_query_button_pane

0xb641,	// (0x0003dfc6) ncimui_query_button_pane_t1_ParamLimits

0xb641,	// (0x0003dfc6) ncimui_query_button_pane_t1

0x1f6f,	// (0x000348f4) ncimui_query_button_pane_t2_ParamLimits

0x1f6f,	// (0x000348f4) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x000427db) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x000427db) ncimui_query_button_pane_t

0xb654,	// (0x0003dfd9) query_button_pane_ParamLimits

0xb654,	// (0x0003dfd9) query_button_pane

0x4511,	// (0x00036e96) bg_button_pane_cp0028

0x1f82,	// (0x00034907) query_button_pane_t1

0x756b,	// (0x00039ef0) main_tport_pane_ParamLimits

0xb1e1,	// (0x0003db66) bg_popup_window_pane_cp01_ParamLimits

0xb1e1,	// (0x0003db66) bg_popup_window_pane_cp01

0xb1ee,	// (0x0003db73) heading_pane_cp08_ParamLimits

0xb1ee,	// (0x0003db73) heading_pane_cp08

0xb1fc,	// (0x0003db81) heading_pane_cp07_ParamLimits

0xb1fc,	// (0x0003db81) heading_pane_cp07

0x1a94,	// (0x00034419) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00042727) cell_tport_appsw_pane_g

0x353d,	// (0x00035ec2) input_candi_list_open_g1

0xcb03,	// (0x0003f488) list_cale_time_pane_g6_ParamLimits

0xcb03,	// (0x0003f488) list_cale_time_pane_g6

0x7fb1,	// (0x0003a936) aid_size_touch_calib_1_ParamLimits

0x7fb1,	// (0x0003a936) aid_size_touch_calib_1

0x7fbd,	// (0x0003a942) aid_size_touch_calib_2_ParamLimits

0x7fbd,	// (0x0003a942) aid_size_touch_calib_2

0x7fcb,	// (0x0003a950) aid_size_touch_calib_3_ParamLimits

0x7fcb,	// (0x0003a950) aid_size_touch_calib_3

0x7fdb,	// (0x0003a960) aid_size_touch_calib_4_ParamLimits

0x7fdb,	// (0x0003a960) aid_size_touch_calib_4

0x7fe9,	// (0x0003a96e) main_touch_calib_button_group_pane_ParamLimits

0x7fe9,	// (0x0003a96e) main_touch_calib_button_group_pane

0x7ff7,	// (0x0003a97c) main_touch_calib_pane_g1_ParamLimits

0x8003,	// (0x0003a988) main_touch_calib_pane_g2_ParamLimits

0x800f,	// (0x0003a994) main_touch_calib_pane_g3_ParamLimits

0x801b,	// (0x0003a9a0) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000420fa) main_touch_calib_pane_g_ParamLimits

0x8027,	// (0x0003a9ac) main_touch_calib_pane_t1_ParamLimits

0x803e,	// (0x0003a9c3) main_touch_calib_pane_t2_ParamLimits

0x8055,	// (0x0003a9da) main_touch_calib_pane_t3_ParamLimits

0x8069,	// (0x0003a9ee) main_touch_calib_pane_t4_ParamLimits

0x807d,	// (0x0003aa02) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00042103) main_touch_calib_pane_t_ParamLimits

0xebeb,	// (0x00041570) list_single_fp_cale_pane_g3_ParamLimits

0xebeb,	// (0x00041570) list_single_fp_cale_pane_g3

0xd8c7,	// (0x0004024c) bg_button_pane_cp012_ParamLimits

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp03_ParamLimits

0x9ecc,	// (0x0003c851) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8c7,	// (0x0004024c) bg_vkb2_func_pane_cp04_ParamLimits

0xab18,	// (0x0003d49d) main_ncimui_button_group_pane_ParamLimits

0xab18,	// (0x0003d49d) main_ncimui_button_group_pane

0xab68,	// (0x0003d4ed) main_ncimui_pane_t3_ParamLimits

0xab68,	// (0x0003d4ed) main_ncimui_pane_t3

0x1bc0,	// (0x00034545) phacti_button_group_pane

0x1eac,	// (0x00034831) aid_size_list_single_double_ParamLimits

0xb5a1,	// (0x0003df26) popup_ezdial_listscroll_window_ParamLimits

0xb5c2,	// (0x0003df47) popup_number_entry_window_cp01_ParamLimits

0xb661,	// (0x0003dfe6) phacti_button_pane_ParamLimits

0xb661,	// (0x0003dfe6) phacti_button_pane

0x4511,	// (0x00036e96) bg_button_pane_cp14

0x1f90,	// (0x00034915) phacti_button_pane_t1

0xb672,	// (0x0003dff7) main_touch_calib_button_pane_ParamLimits

0xb672,	// (0x0003dff7) main_touch_calib_button_pane

0xc558,	// (0x0003eedd) bg_button_pane_cp18_ParamLimits

0xc558,	// (0x0003eedd) bg_button_pane_cp18

0x1f9e,	// (0x00034923) main_touch_calib_button_pane_t1_ParamLimits

0x1f9e,	// (0x00034923) main_touch_calib_button_pane_t1

0x1fb4,	// (0x00034939) main_touch_calib_button_pane_t2_ParamLimits

0x1fb4,	// (0x00034939) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x000427e0) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x000427e0) main_touch_calib_button_pane_t

0x4511,	// (0x00036e96) cell_ncimui_button_pane

0x4511,	// (0x00036e96) bg_button_pane_cp032

0x1fd2,	// (0x00034957) cell_ncimui_button_pane_t1

0x918e,	// (0x0003bb13) image3_infobar_pane_ParamLimits

0x918e,	// (0x0003bb13) image3_infobar_pane

0xaec6,	// (0x0003d84b) fs_bigclock_status_pane_ParamLimits

0xaec6,	// (0x0003d84b) fs_bigclock_status_pane

0xaed3,	// (0x0003d858) main_fs_bigclock_clock_pane_ParamLimits

0xaed3,	// (0x0003d858) main_fs_bigclock_clock_pane

0xaee7,	// (0x0003d86c) main_fs_bigclock_indi_pane_ParamLimits

0xaee7,	// (0x0003d86c) main_fs_bigclock_indi_pane

0xaf14,	// (0x0003d899) main_fs_bigclock_swipe_pane_ParamLimits

0xaf14,	// (0x0003d899) main_fs_bigclock_swipe_pane

0x4511,	// (0x00036e96) main_fs_clock_dumped_data

0x14a0,	// (0x00033e25) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x14a0,	// (0x00033e25) list_single_fs_bigclock_indicator_pane_g1

0x14be,	// (0x00033e43) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x14be,	// (0x00033e43) list_single_fs_bigclock_indicator_pane_g2

0x14d8,	// (0x00033e5d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x14d8,	// (0x00033e5d) list_single_fs_bigclock_indicator_pane_g3

0x14f2,	// (0x00033e77) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x14f2,	// (0x00033e77) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00042613) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00042613) list_single_fs_bigclock_indicator_pane_g

0x1518,	// (0x00033e9d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1518,	// (0x00033e9d) list_single_fs_bigclock_indicator_pane_t1

0x1540,	// (0x00033ec5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1540,	// (0x00033ec5) list_single_fs_bigclock_indicator_pane_t2

0x1568,	// (0x00033eed) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1568,	// (0x00033eed) list_single_fs_bigclock_indicator_pane_t3

0x1590,	// (0x00033f15) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1590,	// (0x00033f15) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0004261e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0004261e) list_single_fs_bigclock_indicator_pane_t

0x1fe0,	// (0x00034965) image3_infobar_fav_pane_ParamLimits

0x1fe0,	// (0x00034965) image3_infobar_fav_pane

0x1ff0,	// (0x00034975) image3_infobar_loc_pane_ParamLimits

0x1ff0,	// (0x00034975) image3_infobar_loc_pane

0x2004,	// (0x00034989) image3_infobar_time_pane_ParamLimits

0x2004,	// (0x00034989) image3_infobar_time_pane

0xe87e,	// (0x00041203) image3_infobar_time_pane_g1

0x2014,	// (0x00034999) image3_infobar_time_pane_t1

0xe87e,	// (0x00041203) image3_infobar_loc_pane_g1

0x2022,	// (0x000349a7) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x000427e5) image3_infobar_loc_pane_g

0x202a,	// (0x000349af) image3_infobar_loc_pane_t1

0xe87e,	// (0x00041203) image3_infobar_fav_pane_g1

0x2038,	// (0x000349bd) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x000427ea) image3_infobar_fav_pane_g

0x2040,	// (0x000349c5) fs_bigclock_status_battery_pane

0x2049,	// (0x000349ce) fs_bigclock_status_signal_pane

0x2052,	// (0x000349d7) fs_bigclock_status_title_pane

0x205b,	// (0x000349e0) fs_bigclock_status_signal_pane_g1

0x2064,	// (0x000349e9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x000427ef) fs_bigclock_status_signal_pane_g

0x206c,	// (0x000349f1) fs_bigclock_status_battery_pane_g1

0x2075,	// (0x000349fa) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x000427f4) fs_bigclock_status_battery_pane_g

0x207d,	// (0x00034a02) fs_bigclock_status_title_pane_t1

0xe87e,	// (0x00041203) main_fs_bigclock_clock_pane_g1

0x208b,	// (0x00034a10) main_fs_bigclock_clock_pane_g2

0x208b,	// (0x00034a10) main_fs_bigclock_clock_pane_g3

0x208b,	// (0x00034a10) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x000427f9) main_fs_bigclock_clock_pane_g

0x2093,	// (0x00034a18) main_fs_bigclock_clock_pane_t1

0x20a1,	// (0x00034a26) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00042802) main_fs_bigclock_clock_pane_t

0x20b0,	// (0x00034a35) list_single_fs_bigclock_indicator_pane_ParamLimits

0x20b0,	// (0x00034a35) list_single_fs_bigclock_indicator_pane

0xb682,	// (0x0003e007) list_single_fs_bigclock_pane_ParamLimits

0xb682,	// (0x0003e007) list_single_fs_bigclock_pane

0x20ca,	// (0x00034a4f) main_fs_bigclock_indicator_pane_t1

0x20d9,	// (0x00034a5e) list_single_fs_bigclock_pane_g1

0x20e1,	// (0x00034a66) list_single_fs_bigclock_pane_t1

0xe87e,	// (0x00041203) main_fs_bigclock_swipe_pane_g1

0x211f,	// (0x00034aa4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00042813) main_fs_bigclock_swipe_pane_g

0x2127,	// (0x00034aac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2127,	// (0x00034aac) main_fs_bigclock_swipe_pane_t1

0x6522,	// (0x00038ea7) call_type_pane_ParamLimits

0x4511,	// (0x00036e96) main_btmg_pane

0x4275,	// (0x00036bfa) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4275,	// (0x00036bfa) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x00042786) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x00042786) list_single_cale_mrui_row_pane_g

0x1ee6,	// (0x0003486b) list_recal_vselct_arw_lo_pane

0x1eee,	// (0x00034873) list_recal_vselct_arw_up_pane

0x1ef6,	// (0x0003487b) list_recal_vselct_pane

0x2144,	// (0x00034ac9) btmg_button_pane

0xb6e6,	// (0x0003e06b) main_btmg_pane_g1

0x4511,	// (0x00036e96) bg_button_pane_cp044

0x214e,	// (0x00034ad3) btmg_button_pane_t1

0xe425,	// (0x00040daa) aid_listscroll_gen

0xd8c7,	// (0x0004024c) main_cntbar_detail_pane

0x1ab2,	// (0x00034437) list_cmail_folder_pane

0x1ac2,	// (0x00034447) sp_fs_scroll_pane_cp03_ParamLimits

0x4395,	// (0x00036d1a) list_single_fs_dyc_pane_cp01_ParamLimits

0x4395,	// (0x00036d1a) list_single_fs_dyc_pane_cp01

0x215c,	// (0x00034ae1) aid_size_cmail_indent

0x43c6,	// (0x00036d4b) list_single_dyc_row_pane_cp01

0xb70e,	// (0x0003e093) cntbar_detail_list_pane_ParamLimits

0xb70e,	// (0x0003e093) cntbar_detail_list_pane

0xb748,	// (0x0003e0cd) main_cntbar_detail_cont_pane_ParamLimits

0xb748,	// (0x0003e0cd) main_cntbar_detail_cont_pane

0x6516,	// (0x00038e9b) scroll_pane_cp032_ParamLimits

0x6516,	// (0x00038e9b) scroll_pane_cp032

0xb754,	// (0x0003e0d9) cntbar_detail_list_event_pane_ParamLimits

0xb754,	// (0x0003e0d9) cntbar_detail_list_event_pane

0xb71a,	// (0x0003e09f) cntbar_detail_list_shct_pane

0xc9b6,	// (0x0003f33b) aid_list_gen

0x216e,	// (0x00034af3) aid_scroll

0x2177,	// (0x00034afc) aid_size_touch_scroll_bar

0x0aef,	// (0x00033474) aid_list_double

0x2189,	// (0x00034b0e) aid_list_single

0x43cf,	// (0x00036d54) aid_list_single_lg

0x43d8,	// (0x00036d5d) aid_list_z_g_a_sm

0x43e0,	// (0x00036d65) aid_list_z_g_d

0x43e8,	// (0x00036d6d) aid_txt_z_prm

0x43f6,	// (0x00036d7b) aid_txt_z_prm_cp01

0x4404,	// (0x00036d89) aid_txt_z_sec

0xb768,	// (0x0003e0ed) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb768,	// (0x0003e0ed) main_cntbar_detail_cont_pane_g1

0xb775,	// (0x0003e0fa) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb775,	// (0x0003e0fa) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00042818) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00042818) main_cntbar_detail_cont_pane_g

0x21b9,	// (0x00034b3e) main_cntbar_detail_cont_pane_t1

0x21c7,	// (0x00034b4c) main_cntbar_detail_cont_pane_t2

0x21d5,	// (0x00034b5a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0004281d) main_cntbar_detail_cont_pane_t

0xb781,	// (0x0003e106) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb781,	// (0x0003e106) cell_cntbar_detail_list_shct_pane

0x21e3,	// (0x00034b68) cntbar_detail_list_shct_pane_g1

0x21ec,	// (0x00034b71) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00042824) cntbar_detail_list_shct_pane_g

0xb795,	// (0x0003e11a) cntbar_detail_list_event_pane_g1_ParamLimits

0xb795,	// (0x0003e11a) cntbar_detail_list_event_pane_g1

0xb7a1,	// (0x0003e126) cntbar_detail_list_event_pane_g2_ParamLimits

0xb7a1,	// (0x0003e126) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00042829) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00042829) cntbar_detail_list_event_pane_g

0xb80d,	// (0x0003e192) cntbar_detail_list_event_pane_t1_ParamLimits

0xb80d,	// (0x0003e192) cntbar_detail_list_event_pane_t1

0xb822,	// (0x0003e1a7) cntbar_detail_list_event_pane_t2_ParamLimits

0xb822,	// (0x0003e1a7) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00042836) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00042836) cntbar_detail_list_event_pane_t

0xe87e,	// (0x00041203) cell_cntbar_detail_list_shct_pane_g1

0x68a5,	// (0x0003922a) navi_pane_mv_g3

0xd8c7,	// (0x0004024c) main_cntbar_detail_pane_ParamLimits

0x4511,	// (0x00036e96) main_notif_wgt_pane

0x8e40,	// (0x0003b7c5) aid_tch_main_mp4_pane_g4

0x9075,	// (0x0003b9fa) popup_slider_window_cp02

0x1edd,	// (0x00034862) list_recal_day_event_pane

0xb6ee,	// (0x0003e073) cntbar_detail_btn_pane_ParamLimits

0xb6ee,	// (0x0003e073) cntbar_detail_btn_pane

0xb6fe,	// (0x0003e083) cntbar_detail_btn_pane_cp01_ParamLimits

0xb6fe,	// (0x0003e083) cntbar_detail_btn_pane_cp01

0xb71a,	// (0x0003e09f) cntbar_detail_list_shct_pane_ParamLimits

0xb726,	// (0x0003e0ab) cntbar_detail_pane_g1_ParamLimits

0xb726,	// (0x0003e0ab) cntbar_detail_pane_g1

0xb732,	// (0x0003e0b7) cntbar_detail_pane_t1_ParamLimits

0xb732,	// (0x0003e0b7) cntbar_detail_pane_t1

0xb7ad,	// (0x0003e132) cntbar_detail_list_event_pane_g3_ParamLimits

0xb7ad,	// (0x0003e132) cntbar_detail_list_event_pane_g3

0xb7c5,	// (0x0003e14a) cntbar_detail_list_event_pane_g4_ParamLimits

0xb7c5,	// (0x0003e14a) cntbar_detail_list_event_pane_g4

0xb7dd,	// (0x0003e162) cntbar_detail_list_event_pane_g5_ParamLimits

0xb7dd,	// (0x0003e162) cntbar_detail_list_event_pane_g5

0xb7f5,	// (0x0003e17a) cntbar_detail_list_event_pane_g6_ParamLimits

0xb7f5,	// (0x0003e17a) cntbar_detail_list_event_pane_g6

0xb837,	// (0x0003e1bc) cntbar_detail_list_event_pane_t3_ParamLimits

0xb837,	// (0x0003e1bc) cntbar_detail_list_event_pane_t3

0xb849,	// (0x0003e1ce) popup_notif_wgt_window_ParamLimits

0xb849,	// (0x0003e1ce) popup_notif_wgt_window

0xb859,	// (0x0003e1de) popup_submenu_window_cp01_ParamLimits

0xb859,	// (0x0003e1de) popup_submenu_window_cp01

0xcfe0,	// (0x0003f965) bg_popup_window_pane_cp10

0x21f5,	// (0x00034b7a) listscroll_notif_wgt_pane

0x21ff,	// (0x00034b84) list_notif_wgt_window

0x2208,	// (0x00034b8d) scroll_pane_cp033

0x2211,	// (0x00034b96) list_notif_wgt_row_pane_ParamLimits

0x2211,	// (0x00034b96) list_notif_wgt_row_pane

0x2225,	// (0x00034baa) aid_size_list_notif_wgt_del

0x222e,	// (0x00034bb3) list_notif_wgt_row_pane_g1

0x2236,	// (0x00034bbb) list_notif_wgt_row_pane_g2

0x223e,	// (0x00034bc3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0004283d) list_notif_wgt_row_pane_g

0x2247,	// (0x00034bcc) list_notif_wgt_row_pane_t1

0x2255,	// (0x00034bda) list_notif_wgt_row_pane_t2

0x2263,	// (0x00034be8) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00042844) list_notif_wgt_row_pane_t

0x073f,	// (0x000330c4) list_recal_day_event_pane_g1

0x2271,	// (0x00034bf6) list_recal_day_event_pane_t1

0x4511,	// (0x00036e96) bg_button_pane_cp045

0x2280,	// (0x00034c05) cntbar_detail_btn_pane_t1

0xe42d,	// (0x00040db2) main_callh_pane_ParamLimits

0xe42d,	// (0x00040db2) main_callh_pane

0x4511,	// (0x00036e96) main_coverflow0_pane

0x4511,	// (0x00036e96) main_wgtman_pane

0xaf2c,	// (0x0003d8b1) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xaf2c,	// (0x0003d8b1) main_fs_bigclock_unlock_btn_pane

0x1a8c,	// (0x00034411) bg_button_pane_cp16

0x1a9c,	// (0x00034421) cell_tport_appsw_pane_g3

0xb867,	// (0x0003e1ec) cf0_flow_pane_ParamLimits

0xb867,	// (0x0003e1ec) cf0_flow_pane

0x228e,	// (0x00034c13) listscroll_cf0_pane

0x2297,	// (0x00034c1c) main_cf0_pane_g1

0xb876,	// (0x0003e1fb) main_cf0_pane_t1_ParamLimits

0xb876,	// (0x0003e1fb) main_cf0_pane_t1

0xb88a,	// (0x0003e20f) main_cf0_pane_t2_ParamLimits

0xb88a,	// (0x0003e20f) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0004284b) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0004284b) main_cf0_pane_t

0x22a1,	// (0x00034c26) scroll_pane_cp11

0xb89e,	// (0x0003e223) cf0_flow_pane_g1

0xb8a6,	// (0x0003e22b) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00042850) cf0_flow_pane_g

0xb8ae,	// (0x0003e233) cf0_flow_pane_t1

0x4511,	// (0x00036e96) main_call6_pane

0x4511,	// (0x00036e96) main_calllock_pane

0xb8bc,	// (0x0003e241) call6_btn_grp_pane_ParamLimits

0xb8bc,	// (0x0003e241) call6_btn_grp_pane

0xb8cb,	// (0x0003e250) call6_pane_g1_ParamLimits

0xb8cb,	// (0x0003e250) call6_pane_g1

0xb8da,	// (0x0003e25f) popup_call6_1st_window_ParamLimits

0xb8da,	// (0x0003e25f) popup_call6_1st_window

0xb8e8,	// (0x0003e26d) popup_call6_2nd_window_ParamLimits

0xb8e8,	// (0x0003e26d) popup_call6_2nd_window

0xb8f6,	// (0x0003e27b) cell_call6_btn_pane_ParamLimits

0xb8f6,	// (0x0003e27b) cell_call6_btn_pane

0xcfe0,	// (0x0003f965) bg_popup_call2_in_pane_cp03

0x22ac,	// (0x00034c31) popup_call6_1st_window_g1

0x22b4,	// (0x00034c39) popup_call6_1st_window_g2

0x22bc,	// (0x00034c41) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00042855) popup_call6_1st_window_g

0x22c4,	// (0x00034c49) popup_call6_1st_window_t1

0x22d3,	// (0x00034c58) popup_call6_1st_window_t2

0x22e3,	// (0x00034c68) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0004285c) popup_call6_1st_window_t

0xcfe0,	// (0x0003f965) bg_popup_call2_in_pane_cp04

0x22ac,	// (0x00034c31) popup_call6_2nd_window_g1

0x22b4,	// (0x00034c39) popup_call6_2nd_window_g2

0x22bc,	// (0x00034c41) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00042855) popup_call6_2nd_window_g

0x22c4,	// (0x00034c49) popup_call6_2nd_window_t1

0x4511,	// (0x00036e96) bg_button_pane_cp15

0x22f3,	// (0x00034c78) cell_call6_btn_pane_g1

0x22fc,	// (0x00034c81) cell_call6_btn_pane_t1

0xb905,	// (0x0003e28a) listscroll_wgtman_pane_ParamLimits

0xb905,	// (0x0003e28a) listscroll_wgtman_pane

0xb923,	// (0x0003e2a8) wgtman_btn_pane_ParamLimits

0xb923,	// (0x0003e2a8) wgtman_btn_pane

0xce93,	// (0x0003f818) aid_scroll_copy1

0x230b,	// (0x00034c90) list_wgtman_pane

0xb958,	// (0x0003e2dd) wgtman_btn_pane_g1_ParamLimits

0xb958,	// (0x0003e2dd) wgtman_btn_pane_g1

0xb980,	// (0x0003e305) wgtman_btn_pane_t1_ParamLimits

0xb980,	// (0x0003e305) wgtman_btn_pane_t1

0x2315,	// (0x00034c9a) wgtman_btn_pane_t2_ParamLimits

0x2315,	// (0x00034c9a) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00042863) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00042863) wgtman_btn_pane_t

0xb9b7,	// (0x0003e33c) listrow_wgtman_pane_ParamLimits

0xb9b7,	// (0x0003e33c) listrow_wgtman_pane

0xb9d3,	// (0x0003e358) listrow_wgtman_pane_g1

0xb9dc,	// (0x0003e361) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00042868) listrow_wgtman_pane_g

0x4412,	// (0x00036d97) listrow_wgtman_pane_t1

0x4420,	// (0x00036da5) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0004286d) listrow_wgtman_pane_t

0x442e,	// (0x00036db3) wait_bar_pane_cp09

0x232c,	// (0x00034cb1) main_calllock_btn_pane

0x2336,	// (0x00034cbb) main_calllock_pane_g1

0x4511,	// (0x00036e96) bg_button_pane_cp17

0x2341,	// (0x00034cc6) main_calllock_btn_pane_g1

0x234a,	// (0x00034ccf) main_calllock_btn_pane_t1

0x4511,	// (0x00036e96) main_dialer3_pane

0x4511,	// (0x00036e96) main_fmrd2_pane

0xe87e,	// (0x00041203) main_fs_bigclock_unlock_btn_pane_g1

0x2361,	// (0x00034ce6) main_fs_bigclock_unlock_btn_pane_t1

0xb9e6,	// (0x0003e36b) area_fmrd2_info_pane_ParamLimits

0xb9e6,	// (0x0003e36b) area_fmrd2_info_pane

0xb9f4,	// (0x0003e379) area_fmrd2_visual_pane_ParamLimits

0xb9f4,	// (0x0003e379) area_fmrd2_visual_pane

0xba02,	// (0x0003e387) fmrd2_indi_pane_ParamLimits

0xba02,	// (0x0003e387) fmrd2_indi_pane

0xba0f,	// (0x0003e394) area_fmrd2_visual_pane_g1

0xba17,	// (0x0003e39c) area_fmrd2_visual_pane_t1

0xba27,	// (0x0003e3ac) area_fmrd2_visual_pane_t2

0xba37,	// (0x0003e3bc) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00042877) area_fmrd2_visual_pane_t

0xba47,	// (0x0003e3cc) area_fmrd2_info_pane_g1

0xba4f,	// (0x0003e3d4) area_fmrd2_info_pane_t1

0xba5f,	// (0x0003e3e4) area_fmrd2_info_pane_t2

0xba6f,	// (0x0003e3f4) area_fmrd2_info_pane_t3

0xba7f,	// (0x0003e404) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0004287e) area_fmrd2_info_pane_t

0xba8d,	// (0x0003e412) fmrd2_indi_pane_t1

0xba9d,	// (0x0003e422) fmrd2_indi_pane_t2

0xbaad,	// (0x0003e432) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00042887) fmrd2_indi_pane_t

0x1501,	// (0x00033e86) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1501,	// (0x00033e86) list_single_fs_bigclock_indicator_pane_g5

0x15a5,	// (0x00033f2a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x15a5,	// (0x00033f2a) list_single_fs_bigclock_indicator_pane_t5

0xb3e6,	// (0x0003dd6b) aid_cell_bcale_month_pane_ParamLimits

0xb3e6,	// (0x0003dd6b) aid_cell_bcale_month_pane

0xb3f2,	// (0x0003dd77) bcale_month_pane_ParamLimits

0xb3f2,	// (0x0003dd77) bcale_month_pane

0xb402,	// (0x0003dd87) bcale_preview_pane_ParamLimits

0xb402,	// (0x0003dd87) bcale_preview_pane

0x20e1,	// (0x00034a66) list_single_fs_bigclock_pane_t1_ParamLimits

0x20fb,	// (0x00034a80) list_single_fs_bigclock_pane_t2_ParamLimits

0x20fb,	// (0x00034a80) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0004280e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0004280e) list_single_fs_bigclock_pane_t

0x2359,	// (0x00034cde) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00042872) main_fs_bigclock_unlock_btn_pane_g

0xbabb,	// (0x0003e440) aid_dia3_key_size_ParamLimits

0xbabb,	// (0x0003e440) aid_dia3_key_size

0xbac7,	// (0x0003e44c) aid_dia3_listrow_size_ParamLimits

0xbac7,	// (0x0003e44c) aid_dia3_listrow_size

0xbad7,	// (0x0003e45c) dia3_keypad_fun_pane_ParamLimits

0xbad7,	// (0x0003e45c) dia3_keypad_fun_pane

0xbae9,	// (0x0003e46e) dia3_keypad_num_pane_ParamLimits

0xbae9,	// (0x0003e46e) dia3_keypad_num_pane

0xbafb,	// (0x0003e480) dia3_listscroll_pane_ParamLimits

0xbafb,	// (0x0003e480) dia3_listscroll_pane

0xbb09,	// (0x0003e48e) dia3_numentry_pane_ParamLimits

0xbb09,	// (0x0003e48e) dia3_numentry_pane

0x236f,	// (0x00034cf4) dia3_list_pane

0x237a,	// (0x00034cff) scroll_pane_cp12

0x4511,	// (0x00036e96) bg_dia3_numentry_pane

0xbb17,	// (0x0003e49c) dia3_numentry_pane_t1

0xbb26,	// (0x0003e4ab) cell_dia3_key_num_pane

0xbb2e,	// (0x0003e4b3) cell_dia3_key0_fun_pane_ParamLimits

0xbb2e,	// (0x0003e4b3) cell_dia3_key0_fun_pane

0xbb3b,	// (0x0003e4c0) cell_dia3_key1_fun_pane_ParamLimits

0xbb3b,	// (0x0003e4c0) cell_dia3_key1_fun_pane

0xbb48,	// (0x0003e4cd) dia3_listrow_pane

0x11ff,	// (0x00033b84) bg_dia3_numentry_pane_g1

0x4511,	// (0x00036e96) bg_button_pane_cp21

0x2385,	// (0x00034d0a) cell_dia3_key_num_pane_t1

0x2393,	// (0x00034d18) cell_dia3_key_num_pane_t2

0x23a2,	// (0x00034d27) cell_dia3_key_num_pane_t3

0x23b1,	// (0x00034d36) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0004288e) cell_dia3_key_num_pane_t

0x4511,	// (0x00036e96) bg_button_pane_cp19

0xbb55,	// (0x0003e4da) cell_dia3_key0_fun_pane_g1

0x4511,	// (0x00036e96) bg_button_pane_cp20

0xbb5d,	// (0x0003e4e2) cell_dia3_key1_fun_pane_g1

0xbb65,	// (0x0003e4ea) area_left_week_number_pane

0xbb6e,	// (0x0003e4f3) area_top_day_name_pane

0xbb77,	// (0x0003e4fc) frame_month_view_pane

0xbb81,	// (0x0003e506) grid_month_view_pane

0xbb8b,	// (0x0003e510) cell_top_day_name_pane_ParamLimits

0xbb8b,	// (0x0003e510) cell_top_day_name_pane

0xbba5,	// (0x0003e52a) cell_area_left_week_number_pane_ParamLimits

0xbba5,	// (0x0003e52a) cell_area_left_week_number_pane

0xbbb9,	// (0x0003e53e) cell_month_view_pane_ParamLimits

0xbbb9,	// (0x0003e53e) cell_month_view_pane

0x23c0,	// (0x00034d45) frm_month_g1

0xbbd6,	// (0x0003e55b) frm_month_g2

0xbbe0,	// (0x0003e565) frm_month_g3

0xbbea,	// (0x0003e56f) frm_month_g4

0xbbf4,	// (0x0003e579) frm_month_g5

0xbbfe,	// (0x0003e583) frm_month_g6

0xbc08,	// (0x0003e58d) frm_month_g7

0x23c9,	// (0x00034d4e) frm_month_g8

0xbc12,	// (0x0003e597) frm_month_g9

0xbc1b,	// (0x0003e5a0) frm_month_g10

0xbc24,	// (0x0003e5a9) frm_month_g11

0xbc2d,	// (0x0003e5b2) frm_month_g12

0xbc36,	// (0x0003e5bb) frm_month_g13

0xbc3f,	// (0x0003e5c4) frm_month_g14

0xbc48,	// (0x0003e5cd) frm_month_g15

0xbc53,	// (0x0003e5d8) frm_month_g16

0x000f,

0xff12,	// (0x00042897) frm_month_g

0xbc5e,	// (0x0003e5e3) cell_top_day_name_pane_t1

0xbc6d,	// (0x0003e5f2) cell_area_left_week_number_pane_g1

0xbc5e,	// (0x0003e5e3) cell_area_left_week_number_pane_t1

0xe87e,	// (0x00041203) cell_month_view_pane_g1

0xbc75,	// (0x0003e5fa) cell_month_view_pane_t1

0x4511,	// (0x00036e96) main_fps_pane

0x1818,	// (0x0003419d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1818,	// (0x0003419d) cmail_ddmenu_btn02_pane_cp1

0x1834,	// (0x000341b9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1834,	// (0x000341b9) cmail_ddmenu_btn02_pane_cp2

0xb5ee,	// (0x0003df73) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb5ee,	// (0x0003df73) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x000427bf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x000427bf) cmail_ddmenu_btn02_pane_g

0xb60c,	// (0x0003df91) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb60c,	// (0x0003df91) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x000427c4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x000427c4) cmail_ddmenu_btn02_pane_t

0xbc84,	// (0x0003e609) fps_text_pane_ParamLimits

0xbc84,	// (0x0003e609) fps_text_pane

0xbc91,	// (0x0003e616) main_fps_pane_g1_ParamLimits

0xbc91,	// (0x0003e616) main_fps_pane_g1

0xbc9f,	// (0x0003e624) wait_bar_pane_cp010_ParamLimits

0xbc9f,	// (0x0003e624) wait_bar_pane_cp010

0xbcab,	// (0x0003e630) fps_text_pane_t1_ParamLimits

0xbcab,	// (0x0003e630) fps_text_pane_t1

0x9459,	// (0x0003bdde) cam4_image_uncrop_pane_g1

0x9462,	// (0x0003bde7) cam4_image_uncrop_pane_g2

0x946b,	// (0x0003bdf0) cam4_image_uncrop_pane_g3

0x9474,	// (0x0003bdf9) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00042292) cam4_image_uncrop_pane_g

0xbb48,	// (0x0003e4cd) dia3_listrow_pane_ParamLimits

0x4511,	// (0x00036e96) main_phob2_pane

0xb243,	// (0x0003dbc8) cell_tport_appsw_pane_cp02_ParamLimits

0xb243,	// (0x0003dbc8) cell_tport_appsw_pane_cp02

0xb252,	// (0x0003dbd7) cell_tport_appsw_pane_cp03_ParamLimits

0xb252,	// (0x0003dbd7) cell_tport_appsw_pane_cp03

0x4511,	// (0x00036e96) phob2_contact_card_pane

0x4511,	// (0x00036e96) phob2_listscroll_pane

0x23d2,	// (0x00034d57) phob2_list_pane

0x23da,	// (0x00034d5f) scroll_pane_cp034

0xbcc4,	// (0x0003e649) phob2_cc_data_pane_ParamLimits

0xbcc4,	// (0x0003e649) phob2_cc_data_pane

0xbcde,	// (0x0003e663) phob2_cc_listscroll_pane_ParamLimits

0xbcde,	// (0x0003e663) phob2_cc_listscroll_pane

0xbcf8,	// (0x0003e67d) list_double_large_graphic_phob2_pane_ParamLimits

0xbcf8,	// (0x0003e67d) list_double_large_graphic_phob2_pane

0xbd1b,	// (0x0003e6a0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbd1b,	// (0x0003e6a0) list_double_large_graphic_phob2_pane_g1

0x4436,	// (0x00036dbb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4436,	// (0x00036dbb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x000428b8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x000428b8) list_double_large_graphic_phob2_pane_g

0x4442,	// (0x00036dc7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4442,	// (0x00036dc7) list_double_large_graphic_phob2_pane_t1

0x4457,	// (0x00036ddc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4457,	// (0x00036ddc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x000428bd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x000428bd) list_double_large_graphic_phob2_pane_t

0x4511,	// (0x00036e96) list_highlight_pane_cp024

0x23e2,	// (0x00034d67) phob2_cc_button_pane

0xbd28,	// (0x0003e6ad) phob2_cc_data_pane_g1_ParamLimits

0xbd28,	// (0x0003e6ad) phob2_cc_data_pane_g1

0xbd34,	// (0x0003e6b9) phob2_cc_data_pane_g2_ParamLimits

0xbd34,	// (0x0003e6b9) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x000428c2) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x000428c2) phob2_cc_data_pane_g

0xbd40,	// (0x0003e6c5) phob2_cc_data_pane_t1_ParamLimits

0xbd40,	// (0x0003e6c5) phob2_cc_data_pane_t1

0xbd52,	// (0x0003e6d7) phob2_cc_data_pane_t2_ParamLimits

0xbd52,	// (0x0003e6d7) phob2_cc_data_pane_t2

0xbd64,	// (0x0003e6e9) phob2_cc_data_pane_t3_ParamLimits

0xbd64,	// (0x0003e6e9) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x000428c7) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x000428c7) phob2_cc_data_pane_t

0x23ea,	// (0x00034d6f) phob2_cc_list_pane_ParamLimits

0x23ea,	// (0x00034d6f) phob2_cc_list_pane

0x07d8,	// (0x0003315d) scroll_pane_cp035_ParamLimits

0x07d8,	// (0x0003315d) scroll_pane_cp035

0xd8c7,	// (0x0004024c) bg_button_pane_cp033

0x23f6,	// (0x00034d7b) phob2_cc_button_pane_g1

0x2402,	// (0x00034d87) phob2_cc_button_pane_t1

0x2417,	// (0x00034d9c) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x000428ce) phob2_cc_button_pane_t

0xbd76,	// (0x0003e6fb) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbd76,	// (0x0003e6fb) list_double_large_graphic_phob2_cc_pane

0xbda6,	// (0x0003e72b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbda6,	// (0x0003e72b) list_double_large_graphic_phob2_cc_pane_g1

0x4469,	// (0x00036dee) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4469,	// (0x00036dee) list_double_large_graphic_phob2_cc_pane_g2

0x4478,	// (0x00036dfd) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4478,	// (0x00036dfd) list_double_large_graphic_phob2_cc_pane_g3

0x4487,	// (0x00036e0c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4487,	// (0x00036e0c) list_double_large_graphic_phob2_cc_pane_g4

0x4498,	// (0x00036e1d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4498,	// (0x00036e1d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x000428d3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x000428d3) list_double_large_graphic_phob2_cc_pane_g

0x44a7,	// (0x00036e2c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x44a7,	// (0x00036e2c) list_double_large_graphic_phob2_cc_pane_t1

0x44d0,	// (0x00036e55) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x44d0,	// (0x00036e55) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x000428de) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x000428de) list_double_large_graphic_phob2_cc_pane_t

0x2429,	// (0x00034dae) list_highlight_pane_cp025_ParamLimits

0x2429,	// (0x00034dae) list_highlight_pane_cp025

0xd8c7,	// (0x0004024c) bg_button_pane_cp033_ParamLimits

0x23f6,	// (0x00034d7b) phob2_cc_button_pane_g1_ParamLimits

0x2402,	// (0x00034d87) phob2_cc_button_pane_t1_ParamLimits

0x2417,	// (0x00034d9c) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x000428ce) phob2_cc_button_pane_t_ParamLimits

0x47b0,	// (0x00037135) popup_wgtman_window

0x0576,	// (0x00032efb) scroll_pane_cp038

0xb940,	// (0x0003e2c5) wgtman_btn_pane_cp_01_ParamLimits

0xb940,	// (0x0003e2c5) wgtman_btn_pane_cp_01

0x2437,	// (0x00034dbc) wgtman_content_pane

0x2180,	// (0x00034b05) wgtman_heading_pane

0x4511,	// (0x00036e96) bg_heading_pane_cp02

0x2440,	// (0x00034dc5) wgtman_heading_pane_g1

0x2448,	// (0x00034dcd) wgtman_heading_pane_t1

0x2456,	// (0x00034ddb) scroll_pane_cp036

0x245e,	// (0x00034de3) wgtman_list_pane

0x2466,	// (0x00034deb) wgtman_list_pane_t1_ParamLimits

0x2466,	// (0x00034deb) wgtman_list_pane_t1

0x93b8,	// (0x0003bd3d) cam4_grid_pane

0x3824,	// (0x000361a9) bg_button_pane_cp015_ParamLimits

0xa051,	// (0x0003c9d6) bg_button_pane_cp016_ParamLimits

0xa064,	// (0x0003c9e9) bg_button_pane_cp017_ParamLimits

0x3868,	// (0x000361ed) popup_vitu2_query_window_g3_ParamLimits

0x3868,	// (0x000361ed) popup_vitu2_query_window_g3

0x38e1,	// (0x00036266) popup_vitu2_query_window_t6_ParamLimits

0x38e1,	// (0x00036266) popup_vitu2_query_window_t6

0x390c,	// (0x00036291) popup_vitu2_query_window_t7_ParamLimits

0x390c,	// (0x00036291) popup_vitu2_query_window_t7

0x0320,	// (0x00032ca5) cam4_grid_pane_g1

0x0329,	// (0x00032cae) cam4_grid_pane_g2

0x2484,	// (0x00034e09) cam4_grid_pane_g3

0x248d,	// (0x00034e12) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x000428e3) cam4_grid_pane_g

0x5477,	// (0x00037dfc) aid_placing_vt_slider_lsc_ParamLimits

0x57b7,	// (0x0003813c) vidtel_button_pane_ParamLimits

0x57b7,	// (0x0003813c) vidtel_button_pane

0x4511,	// (0x00036e96) bg_button_pane_cp034

0xbdb7,	// (0x0003e73c) vidtel_button_pane_g1

0x2498,	// (0x00034e1d) vidtel_button_pane_t1

0x06b3,	// (0x00033038) aid_size_vtel_slider_touch

0x07d8,	// (0x0003315d) scroll_pane_cp039

0x123d,	// (0x00033bc2) ncim_query_button_pane_cp01_ParamLimits

0x125c,	// (0x00033be1) ncimui_query_pane_g1_ParamLimits

0xd8c7,	// (0x0004024c) input_focus_pane_cp012_ParamLimits

0x1281,	// (0x00033c06) ncim_query_entry_pane_t1_ParamLimits

0x07d8,	// (0x0003315d) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small

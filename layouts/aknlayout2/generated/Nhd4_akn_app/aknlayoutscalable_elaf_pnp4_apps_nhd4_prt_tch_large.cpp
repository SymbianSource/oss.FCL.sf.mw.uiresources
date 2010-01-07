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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00061d02 };

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
0x52a1,	// (0x00066fa3) Screen

0x52ad,	// (0x00066faf) application_window

0x52f5,	// (0x00066ff7) area_bottom_pane_ParamLimits

0x52f5,	// (0x00066ff7) area_bottom_pane

0x532a,	// (0x0006702c) area_top_pane_ParamLimits

0x532a,	// (0x0006702c) area_top_pane

0x0079,	// (0x00061d7b) call_video_uplink_pane_ParamLimits

0x0079,	// (0x00061d7b) call_video_uplink_pane

0x53b8,	// (0x000670ba) main_pane_ParamLimits

0x53b8,	// (0x000670ba) main_pane

0x9c27,	// (0x0006b929) context_pane

0x9c3a,	// (0x0006b93c) navi_pane

0x9c5a,	// (0x0006b95c) popup_cale_events_window_ParamLimits

0x9c5a,	// (0x0006b95c) popup_cale_events_window

0x9c72,	// (0x0006b974) popup_mup_playback_window

0x9c7a,	// (0x0006b97c) signal_pane

0x083e,	// (0x00062540) main_browser_pane

0x7a2c,	// (0x0006972e) main_burst_pane

0x9aa2,	// (0x0006b7a4) main_calc_pane

0x7a2c,	// (0x0006972e) main_cale_day_pane

0x083e,	// (0x00062540) main_cale_month_pane

0x7a2c,	// (0x0006972e) main_cale_week_pane

0x7a2c,	// (0x0006972e) main_call_pane

0x04a8,	// (0x000621aa) main_call_poc_pane

0x7a2c,	// (0x0006972e) main_camera_pane

0x7a2c,	// (0x0006972e) main_chi_dic_pane

0x75d6,	// (0x000692d8) main_clock_pane

0x04a8,	// (0x000621aa) main_fmradio_pane

0x7a2c,	// (0x0006972e) main_graph_messa_pane

0x04a8,	// (0x000621aa) main_help_pane

0x083e,	// (0x00062540) main_im_pane

0x0703,	// (0x00062405) main_image_pane_ParamLimits

0x0703,	// (0x00062405) main_image_pane

0x04a8,	// (0x000621aa) main_location2_pane

0x7a2c,	// (0x0006972e) main_location_pane

0x04a8,	// (0x000621aa) main_messa_pane

0x04a8,	// (0x000621aa) main_mp2_pane

0x7a2c,	// (0x0006972e) main_mp_pane

0x04a8,	// (0x000621aa) main_msg_pane

0x04a8,	// (0x000621aa) main_mup_eq_pane

0x04a8,	// (0x000621aa) main_mup_pane

0x7a2c,	// (0x0006972e) main_notes_pane

0x04a8,	// (0x000621aa) main_pec_pane

0x04a8,	// (0x000621aa) main_phob_pane

0x04a8,	// (0x000621aa) main_pinb_pane

0x04a8,	// (0x000621aa) main_postcard_pane

0x04a8,	// (0x000621aa) main_qdial_pane

0x7a2c,	// (0x0006972e) main_skin_pane

0x04a8,	// (0x000621aa) main_smil2_pane

0x7a2c,	// (0x0006972e) main_smil_pane

0x7a2c,	// (0x0006972e) main_video_pane

0x7a2c,	// (0x0006972e) main_video_tele_pane

0x0703,	// (0x00062405) main_viewer_pane_ParamLimits

0x0703,	// (0x00062405) main_viewer_pane

0x7a2c,	// (0x0006972e) main_vorec_pane

0x9afc,	// (0x0006b7fe) popup_blid_sat_info_window_ParamLimits

0x9afc,	// (0x0006b7fe) popup_blid_sat_info_window

0x9b1c,	// (0x0006b81e) popup_dyc_status_message_window_ParamLimits

0x9b1c,	// (0x0006b81e) popup_dyc_status_message_window

0x9b2a,	// (0x0006b82c) popup_grid_large_graphic_window_ParamLimits

0x9b2a,	// (0x0006b82c) popup_grid_large_graphic_window

0x9bb9,	// (0x0006b8bb) popup_loc_request_window_ParamLimits

0x9bb9,	// (0x0006b8bb) popup_loc_request_window

0x9bff,	// (0x0006b901) popup_wml_address_window_ParamLimits

0x9bff,	// (0x0006b901) popup_wml_address_window

0x9941,	// (0x0006b643) call_muted_g1

0x8688,	// (0x0006a38a) popup_call_audio_conf_window_ParamLimits

0x8688,	// (0x0006a38a) popup_call_audio_conf_window

0x9951,	// (0x0006b653) popup_call_audio_first_window_ParamLimits

0x9951,	// (0x0006b653) popup_call_audio_first_window

0x9991,	// (0x0006b693) popup_call_audio_in_window_ParamLimits

0x9991,	// (0x0006b693) popup_call_audio_in_window

0x99b5,	// (0x0006b6b7) popup_call_audio_out_window_ParamLimits

0x99b5,	// (0x0006b6b7) popup_call_audio_out_window

0x99d7,	// (0x0006b6d9) popup_call_audio_second_window_ParamLimits

0x99d7,	// (0x0006b6d9) popup_call_audio_second_window

0x9a07,	// (0x0006b709) popup_call_audio_wait_window_ParamLimits

0x9a07,	// (0x0006b709) popup_call_audio_wait_window

0x9a28,	// (0x0006b72a) popup_number_entry_window_ParamLimits

0x9a28,	// (0x0006b72a) popup_number_entry_window

0x0097,	// (0x00061d99) bg_popup_call_pane_cp05_ParamLimits

0x0097,	// (0x00061d99) bg_popup_call_pane_cp05

0x00b7,	// (0x00061db9) popup_number_entry_window_t1

0x00ca,	// (0x00061dcc) popup_number_entry_window_t2

0x00dc,	// (0x00061dde) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00070dfd) popup_number_entry_window_t

0x00ee,	// (0x00061df0) text_title_cp2

0x0101,	// (0x00061e03) bg_popup_call_pane_cp_ParamLimits

0x0101,	// (0x00061e03) bg_popup_call_pane_cp

0x010f,	// (0x00061e11) call_thumbnail_pane

0x0117,	// (0x00061e19) popup_call_audio_in_window_g1_ParamLimits

0x0117,	// (0x00061e19) popup_call_audio_in_window_g1

0x0123,	// (0x00061e25) popup_call_audio_in_window_g2_ParamLimits

0x0123,	// (0x00061e25) popup_call_audio_in_window_g2

0x012f,	// (0x00061e31) popup_call_audio_in_window_g3_ParamLimits

0x012f,	// (0x00061e31) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x00070e06) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x00070e06) popup_call_audio_in_window_g

0x013b,	// (0x00061e3d) popup_call_audio_in_window_t1_ParamLimits

0x013b,	// (0x00061e3d) popup_call_audio_in_window_t1

0x0156,	// (0x00061e58) popup_call_audio_in_window_t2_ParamLimits

0x0156,	// (0x00061e58) popup_call_audio_in_window_t2

0x0171,	// (0x00061e73) popup_call_audio_in_window_t3_ParamLimits

0x0171,	// (0x00061e73) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00070e0d) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00070e0d) popup_call_audio_in_window_t

0x0101,	// (0x00061e03) bg_popup_call_pane_cp01_ParamLimits

0x0101,	// (0x00061e03) bg_popup_call_pane_cp01

0x010f,	// (0x00061e11) call_thumbnail_pane_cp02

0x0184,	// (0x00061e86) call_type_pane_cp022

0x018c,	// (0x00061e8e) popup_call_audio_out_window_g1_ParamLimits

0x018c,	// (0x00061e8e) popup_call_audio_out_window_g1

0x019e,	// (0x00061ea0) popup_call_audio_out_window_g2_ParamLimits

0x019e,	// (0x00061ea0) popup_call_audio_out_window_g2

0x01aa,	// (0x00061eac) popup_call_audio_out_window_g3_ParamLimits

0x01aa,	// (0x00061eac) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x00070e14) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x00070e14) popup_call_audio_out_window_g

0x01bc,	// (0x00061ebe) popup_call_audio_out_window_t1_ParamLimits

0x01bc,	// (0x00061ebe) popup_call_audio_out_window_t1

0x01d4,	// (0x00061ed6) popup_call_audio_out_window_t2_ParamLimits

0x01d4,	// (0x00061ed6) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00070e1b) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00070e1b) popup_call_audio_out_window_t

0x01e9,	// (0x00061eeb) bg_popup_call_pane_ParamLimits

0x01e9,	// (0x00061eeb) bg_popup_call_pane

0x55be,	// (0x000672c0) call_thumbnail_pane_cp_ParamLimits

0x55be,	// (0x000672c0) call_thumbnail_pane_cp

0x026d,	// (0x00061f6f) call_type_pane_cp01_ParamLimits

0x026d,	// (0x00061f6f) call_type_pane_cp01

0x02b1,	// (0x00061fb3) popup_call_audio_first_window_g1_ParamLimits

0x02b1,	// (0x00061fb3) popup_call_audio_first_window_g1

0x02fd,	// (0x00061fff) popup_call_audio_first_window_g2_ParamLimits

0x02fd,	// (0x00061fff) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00070e20) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00070e20) popup_call_audio_first_window_g

0x0341,	// (0x00062043) popup_call_audio_first_window_t1_ParamLimits

0x0341,	// (0x00062043) popup_call_audio_first_window_t1

0x03ed,	// (0x000620ef) popup_call_audio_first_window_t4_ParamLimits

0x03ed,	// (0x000620ef) popup_call_audio_first_window_t4

0x0479,	// (0x0006217b) popup_call_audio_first_window_t5_ParamLimits

0x0479,	// (0x0006217b) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x00070e25) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x00070e25) popup_call_audio_first_window_t

0x04a8,	// (0x000621aa) bg_popup_call_pane_cp02

0x04b2,	// (0x000621b4) call_type_pane_cp023

0x04ba,	// (0x000621bc) popup_call_audio_wait_window_g1

0x04c2,	// (0x000621c4) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00070e2c) popup_call_audio_wait_window_g

0x04ca,	// (0x000621cc) popup_call_audio_wait_window_t3

0x04d8,	// (0x000621da) bg_popup_call_pane_cp03_ParamLimits

0x04d8,	// (0x000621da) bg_popup_call_pane_cp03

0x0538,	// (0x0006223a) call_thumbnail_pane_cp011_ParamLimits

0x0538,	// (0x0006223a) call_thumbnail_pane_cp011

0x0544,	// (0x00062246) call_type_pane_cp034_ParamLimits

0x0544,	// (0x00062246) call_type_pane_cp034

0x0580,	// (0x00062282) popup_call_audio_second_window_g1_ParamLimits

0x0580,	// (0x00062282) popup_call_audio_second_window_g1

0x05bc,	// (0x000622be) popup_call_audio_second_window_g2_ParamLimits

0x05bc,	// (0x000622be) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x00070e31) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x00070e31) popup_call_audio_second_window_g

0x05f8,	// (0x000622fa) popup_call_audio_second_window_t1_ParamLimits

0x05f8,	// (0x000622fa) popup_call_audio_second_window_t1

0x0679,	// (0x0006237b) popup_call_audio_second_window_t2_ParamLimits

0x0679,	// (0x0006237b) popup_call_audio_second_window_t2

0x06af,	// (0x000623b1) popup_call_audio_second_window_t3_ParamLimits

0x06af,	// (0x000623b1) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x00070e36) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x00070e36) popup_call_audio_second_window_t

0x04a8,	// (0x000621aa) bg_popup_call_pane_cp04

0x06e5,	// (0x000623e7) list_conf_pane

0x06ed,	// (0x000623ef) popup_call_audio_conf_window_t1

0x06fb,	// (0x000623fd) call_thumbnail_pane_g1

0x0703,	// (0x00062405) bg_pinb_pane_ParamLimits

0x0703,	// (0x00062405) bg_pinb_pane

0x0711,	// (0x00062413) find_pinb_pane

0x071a,	// (0x0006241c) listscroll_pinb_pane_ParamLimits

0x071a,	// (0x0006241c) listscroll_pinb_pane

0x0729,	// (0x0006242b) pinb_bg_pane_g1

0x55e2,	// (0x000672e4) pinb_bg_pane_g2

0x55ee,	// (0x000672f0) pinb_bg_pane_g3

0x55fa,	// (0x000672fc) pinb_bg_pane_g4

0x5606,	// (0x00067308) pinb_bg_pane_g5

0x5612,	// (0x00067314) pinb_bg_pane_g6

0x561d,	// (0x0006731f) pinb_bg_pane_g7

0x5628,	// (0x0006732a) pinb_bg_pane_g8

0x5633,	// (0x00067335) pinb_bg_pane_g9

0x563d,	// (0x0006733f) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x00070e3d) pinb_bg_pane_g

0x5652,	// (0x00067354) grid_pinb_pane

0x565d,	// (0x0006735f) list_pinb_pane

0x5668,	// (0x0006736a) scroll_pane_cp01_ParamLimits

0x5668,	// (0x0006736a) scroll_pane_cp01

0x073b,	// (0x0006243d) find_pinb_pane_g1_ParamLimits

0x073b,	// (0x0006243d) find_pinb_pane_g1

0x0753,	// (0x00062455) find_pinb_pane_t1

0x0765,	// (0x00062467) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00070e57) find_pinb_pane_t

0x077a,	// (0x0006247c) input_focus_pane_cp01_ParamLimits

0x077a,	// (0x0006247c) input_focus_pane_cp01

0x567a,	// (0x0006737c) cell_pinb_pane_ParamLimits

0x567a,	// (0x0006737c) cell_pinb_pane

0x56a8,	// (0x000673aa) cell_pinb_pane_g1_ParamLimits

0x56a8,	// (0x000673aa) cell_pinb_pane_g1

0x56bd,	// (0x000673bf) cell_pinb_pane_g2_ParamLimits

0x56bd,	// (0x000673bf) cell_pinb_pane_g2

0x0786,	// (0x00062488) cell_pinb_pane_g3_ParamLimits

0x0786,	// (0x00062488) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00070e5c) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00070e5c) cell_pinb_pane_g

0x04a8,	// (0x000621aa) grid_highlight_pane_cp01

0x56c9,	// (0x000673cb) list_pinb_item_pane_ParamLimits

0x56c9,	// (0x000673cb) list_pinb_item_pane

0x04a8,	// (0x000621aa) list_highlight_pane_cp02

0x0792,	// (0x00062494) list_pinb_item_pane_g1_ParamLimits

0x0792,	// (0x00062494) list_pinb_item_pane_g1

0x079f,	// (0x000624a1) list_pinb_item_pane_g2_ParamLimits

0x079f,	// (0x000624a1) list_pinb_item_pane_g2

0x56f3,	// (0x000673f5) list_pinb_item_pane_g3_ParamLimits

0x56f3,	// (0x000673f5) list_pinb_item_pane_g3

0x07ab,	// (0x000624ad) list_pinb_item_pane_g4_ParamLimits

0x07ab,	// (0x000624ad) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00070e63) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00070e63) list_pinb_item_pane_g

0x07b7,	// (0x000624b9) list_pinb_item_pane_t1_ParamLimits

0x07b7,	// (0x000624b9) list_pinb_item_pane_t1

0x571e,	// (0x00067420) calc_display_pane

0x573c,	// (0x0006743e) calc_paper_pane

0x5758,	// (0x0006745a) grid_calc_pane

0x04a8,	// (0x000621aa) bg_list_pane_cp01

0x5784,	// (0x00067486) clock_g1

0x578c,	// (0x0006748e) clock_g2

0x0001,

0xf16a,	// (0x00070e6c) clock_g

0x5796,	// (0x00067498) clock_t1_ParamLimits

0x5796,	// (0x00067498) clock_t1

0x57ab,	// (0x000674ad) clock_t2_ParamLimits

0x57ab,	// (0x000674ad) clock_t2

0x57bd,	// (0x000674bf) clock_t3_ParamLimits

0x57bd,	// (0x000674bf) clock_t3

0x57cf,	// (0x000674d1) clock_t4_ParamLimits

0x57cf,	// (0x000674d1) clock_t4

0x57e1,	// (0x000674e3) clock_t5_ParamLimits

0x57e1,	// (0x000674e3) clock_t5

0x57f6,	// (0x000674f8) clock_t6_ParamLimits

0x57f6,	// (0x000674f8) clock_t6

0x5808,	// (0x0006750a) clock_t7_ParamLimits

0x5808,	// (0x0006750a) clock_t7

0x581a,	// (0x0006751c) clock_t8_ParamLimits

0x581a,	// (0x0006751c) clock_t8

0x5830,	// (0x00067532) clock_t9_ParamLimits

0x5830,	// (0x00067532) clock_t9

0x0008,

0xf16f,	// (0x00070e71) clock_t_ParamLimits

0xf16f,	// (0x00070e71) clock_t

0x07d6,	// (0x000624d8) popup_clock_analogue_window_cp02

0x07d6,	// (0x000624d8) popup_clock_digital_window_cp01

0x07de,	// (0x000624e0) listscroll_help_pane

0x04a8,	// (0x000621aa) phob_pre_status_pane

0x07e8,	// (0x000624ea) grid_qdial_pane

0x04a8,	// (0x000621aa) listscroll_mce_pane

0x07f2,	// (0x000624f4) bg_notes_pane

0x07fc,	// (0x000624fe) list_notes_pane

0x5846,	// (0x00067548) scroll_pane_cp06

0x0806,	// (0x00062508) bg_calc_paper_pane

0x5851,	// (0x00067553) list_calc_pane

0x083e,	// (0x00062540) bg_calc_display_pane

0x586b,	// (0x0006756d) calc_display_pane_t1

0x5880,	// (0x00067582) calc_display_pane_t2

0x5895,	// (0x00067597) calc_display_pane_t3

0x0002,

0xf182,	// (0x00070e84) calc_display_pane_t

0x58a7,	// (0x000675a9) cell_calc_pane_ParamLimits

0x58a7,	// (0x000675a9) cell_calc_pane

0x085c,	// (0x0006255e) bg_calc_paper_pane_g1

0x0874,	// (0x00062576) bg_calc_paper_pane_g2

0x0868,	// (0x0006256a) bg_calc_paper_pane_g3

0x088c,	// (0x0006258e) bg_calc_paper_pane_g4

0x0880,	// (0x00062582) bg_calc_paper_pane_g5

0x58d4,	// (0x000675d6) bg_calc_paper_pane_g6

0x58e5,	// (0x000675e7) bg_calc_paper_pane_g7

0x58f6,	// (0x000675f8) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00070e8b) bg_calc_paper_pane_g

0x5907,	// (0x00067609) calc_bg_paper_pane_g9

0x5918,	// (0x0006761a) list_calc_item_pane_ParamLimits

0x5918,	// (0x0006761a) list_calc_item_pane

0x0898,	// (0x0006259a) list_calc_item_pane_g1

0x5952,	// (0x00067654) list_calc_item_pane_t1_ParamLimits

0x5952,	// (0x00067654) list_calc_item_pane_t1

0x5964,	// (0x00067666) list_calc_item_pane_t2_ParamLimits

0x5964,	// (0x00067666) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00070e9c) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00070e9c) list_calc_item_pane_t

0x08b7,	// (0x000625b9) cell_calc_pane_g1

0x08c1,	// (0x000625c3) grid_highlight_pane_cp02

0x08f6,	// (0x000625f8) bg_calc_display_pane_g1

0x5994,	// (0x00067696) bg_calc_display_pane_g2

0x08e3,	// (0x000625e5) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00070ea6) bg_calc_display_pane_g

0x599e,	// (0x000676a0) cell_qdial_pane_ParamLimits

0x599e,	// (0x000676a0) cell_qdial_pane

0x59b2,	// (0x000676b4) cell_qdial_pane_g1_ParamLimits

0x59b2,	// (0x000676b4) cell_qdial_pane_g1

0x59bf,	// (0x000676c1) cell_qdial_pane_g2_ParamLimits

0x59bf,	// (0x000676c1) cell_qdial_pane_g2

0x08ff,	// (0x00062601) cell_qdial_pane_g3_ParamLimits

0x08ff,	// (0x00062601) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00070ead) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00070ead) cell_qdial_pane_g

0x59dd,	// (0x000676df) cell_qdial_pane_t1_ParamLimits

0x59dd,	// (0x000676df) cell_qdial_pane_t1

0x59f5,	// (0x000676f7) cell_qdial_pane_t2_ParamLimits

0x59f5,	// (0x000676f7) cell_qdial_pane_t2

0x5a08,	// (0x0006770a) cell_qdial_pane_t3_ParamLimits

0x5a08,	// (0x0006770a) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00070eb6) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00070eb6) cell_qdial_pane_t

0x04a8,	// (0x000621aa) grid_highlight_pane_cp04

0x090b,	// (0x0006260d) thumbnail_qdial_pane_ParamLimits

0x090b,	// (0x0006260d) thumbnail_qdial_pane

0x0967,	// (0x00062669) list_help_pane

0x0970,	// (0x00062672) scroll_pane_cp02

0x5a1b,	// (0x0006771d) help_list_pane_t1_ParamLimits

0x5a1b,	// (0x0006771d) help_list_pane_t1

0x5a59,	// (0x0006775b) bg_notes_pane_g2

0x5a61,	// (0x00067763) bg_notes_pane_g3

0x5a69,	// (0x0006776b) notes_bg_pane_g1

0x5a71,	// (0x00067773) notes_bg_pane_g4

0x5a79,	// (0x0006777b) notes_bg_pane_g5

0x5a81,	// (0x00067783) notes_bg_pane_g6

0x5a89,	// (0x0006778b) notes_bg_pane_g7

0x5a91,	// (0x00067793) notes_bg_pane_g8

0x5a99,	// (0x0006779b) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00070ed4) notes_bg_pane_g

0x5aa1,	// (0x000677a3) list_notes_text_pane_ParamLimits

0x5aa1,	// (0x000677a3) list_notes_text_pane

0x09c1,	// (0x000626c3) list_notes_text_pane_g1

0x4234,	// (0x00065f36) list_notes_text_pane_t1

0x083e,	// (0x00062540) listscroll_cale_week_pane

0x5aee,	// (0x000677f0) bg_cale_heading_pane

0x09db,	// (0x000626dd) bg_cale_pane_cp01

0x5b02,	// (0x00067804) cale_week_corner_pane

0x5b13,	// (0x00067815) cale_week_day_heading_pane

0x5b27,	// (0x00067829) cale_week_scroll_pane_g1

0x5b38,	// (0x0006783a) cale_week_scroll_pane_g2

0x5b49,	// (0x0006784b) cale_week_scroll_pane_g3

0x5b5a,	// (0x0006785c) cale_week_scroll_pane_g4

0x5b6b,	// (0x0006786d) cale_week_scroll_pane_g5

0x5b7c,	// (0x0006787e) cale_week_scroll_pane_g6

0x5b8d,	// (0x0006788f) cale_week_scroll_pane_g7

0x5ba0,	// (0x000678a2) cale_week_scroll_pane_g8

0x5bb3,	// (0x000678b5) cale_week_scroll_pane_g9

0x5bc4,	// (0x000678c6) cale_week_scroll_pane_g10

0x5bd5,	// (0x000678d7) cale_week_scroll_pane_g11

0x5be6,	// (0x000678e8) cale_week_scroll_pane_g12

0x5bf7,	// (0x000678f9) cale_week_scroll_pane_g13

0x5c08,	// (0x0006790a) cale_week_scroll_pane_g14

0x5c19,	// (0x0006791b) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x00070ee3) cale_week_scroll_pane_g

0x5c2a,	// (0x0006792c) cale_week_time_pane

0x5c3d,	// (0x0006793f) grid_cale_week_pane

0x5c52,	// (0x00067954) scroll_pane_cp08

0x5c6c,	// (0x0006796e) cell_cale_week_pane_ParamLimits

0x5c6c,	// (0x0006796e) cell_cale_week_pane

0x5ca8,	// (0x000679aa) cale_week_day_heading_pane_t1

0x5cbc,	// (0x000679be) cale_week_day_heading_pane_t2

0x5cd0,	// (0x000679d2) cale_week_day_heading_pane_t3

0x5ce4,	// (0x000679e6) cale_week_day_heading_pane_t4

0x5cf8,	// (0x000679fa) cale_week_day_heading_pane_t5

0x5d0c,	// (0x00067a0e) cale_week_day_heading_pane_t6

0x5d20,	// (0x00067a22) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x00070f02) cale_week_day_heading_pane_t

0x0a06,	// (0x00062708) bg_cale_side_pane

0x5d34,	// (0x00067a36) cale_week_time_pane_t1

0x5d4c,	// (0x00067a4e) cale_week_time_pane_t2

0x5d64,	// (0x00067a66) cale_week_time_pane_t3

0x5d7c,	// (0x00067a7e) cale_week_time_pane_t4

0x5d94,	// (0x00067a96) cale_week_time_pane_t5

0x5dac,	// (0x00067aae) cale_week_time_pane_t6

0x5dc4,	// (0x00067ac6) cale_week_time_pane_t7

0x5ddc,	// (0x00067ade) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x00070f11) cale_week_time_pane_t

0x5df4,	// (0x00067af6) cell_cale_week_pane_g2

0x5e0d,	// (0x00067b0f) cell_cale_week_pane_g3_ParamLimits

0x5e0d,	// (0x00067b0f) cell_cale_week_pane_g3

0x0a14,	// (0x00062716) grid_highlight_pane_cp07

0x0a1c,	// (0x0006271e) listscroll_gms_pane

0x0a26,	// (0x00062728) grid_gms_pane

0x0a2f,	// (0x00062731) listscroll_gms_pane_g1

0x0a37,	// (0x00062739) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x00070f22) listscroll_gms_pane_g

0x5e25,	// (0x00067b27) scroll_pane_cp010

0x5e30,	// (0x00067b32) cell_gms_pane_ParamLimits

0x5e30,	// (0x00067b32) cell_gms_pane

0x5e42,	// (0x00067b44) cell_gms_pane_g1

0x0a3f,	// (0x00062741) cell_gms_pane_g2

0x09c1,	// (0x000626c3) cell_gms_pane_g3

0x0a47,	// (0x00062749) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00070f27) cell_gms_pane_g

0x0a50,	// (0x00062752) grid_highlight_pane_cp09

0x98c9,	// (0x0006b5cb) phob_pre_status_pane_g1

0x98d1,	// (0x0006b5d3) phob_pre_status_pane_g2

0x98d9,	// (0x0006b5db) phob_pre_status_pane_g3

0x98e1,	// (0x0006b5e3) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00071316) phob_pre_status_pane_g

0x98f1,	// (0x0006b5f3) phob_pre_status_pane_t1

0x9901,	// (0x0006b603) phob_pre_status_pane_t2

0x9911,	// (0x0006b613) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00071321) phob_pre_status_pane_t

0x04a8,	// (0x000621aa) bg_list_pane_cp05

0x5e52,	// (0x00067b54) grid_vorec_pane

0x5e5a,	// (0x00067b5c) vorec_t1

0x5e68,	// (0x00067b6a) vorec_t2

0x5e76,	// (0x00067b78) vorec_t3

0x5e84,	// (0x00067b86) vorec_t4

0x5e92,	// (0x00067b94) vorec_t5

0x5ea0,	// (0x00067ba2) vorec_t6

0x0006,

0xf22e,	// (0x00070f30) vorec_t

0x5ebc,	// (0x00067bbe) wait_bar_pane_cp01

0x0ad2,	// (0x000627d4) cell_vorec_pane_ParamLimits

0x0ad2,	// (0x000627d4) cell_vorec_pane

0x0ae5,	// (0x000627e7) cell_vorec_pane_g1

0x04a8,	// (0x000621aa) grid_highlight_pane_cp05

0x5ed4,	// (0x00067bd6) cams_zoom_pane

0x5ee0,	// (0x00067be2) image_vga_pane

0x5eef,	// (0x00067bf1) main_camera_pane_g1

0x5efd,	// (0x00067bff) main_camera_pane_g2

0x5f0b,	// (0x00067c0d) main_camera_pane_g3

0x5f17,	// (0x00067c19) main_camera_pane_g4

0x5f23,	// (0x00067c25) main_camera_pane_g5

0x5f2f,	// (0x00067c31) main_camera_pane_g6

0x5f3b,	// (0x00067c3d) main_camera_pane_g7

0x0007,

0xf23d,	// (0x00070f3f) main_camera_pane_g

0x5f47,	// (0x00067c49) main_camera_pane_t1

0x5f59,	// (0x00067c5b) main_camera_pane_t2

0x0001,

0xf24e,	// (0x00070f50) main_camera_pane_t

0x5f7a,	// (0x00067c7c) cams_zoom_pane_cp_ParamLimits

0x5f7a,	// (0x00067c7c) cams_zoom_pane_cp

0x5f9e,	// (0x00067ca0) image_cif_pane_ParamLimits

0x5f9e,	// (0x00067ca0) image_cif_pane

0x5fbc,	// (0x00067cbe) image_subqcif_pane

0x5fc4,	// (0x00067cc6) main_video_pane_g1_ParamLimits

0x5fc4,	// (0x00067cc6) main_video_pane_g1

0x5fe4,	// (0x00067ce6) main_video_pane_g2_ParamLimits

0x5fe4,	// (0x00067ce6) main_video_pane_g2

0x6016,	// (0x00067d18) main_video_pane_g3_ParamLimits

0x6016,	// (0x00067d18) main_video_pane_g3

0x6041,	// (0x00067d43) main_video_pane_g4_ParamLimits

0x6041,	// (0x00067d43) main_video_pane_g4

0x606c,	// (0x00067d6e) main_video_pane_g5_ParamLimits

0x606c,	// (0x00067d6e) main_video_pane_g5

0x0afb,	// (0x000627fd) main_video_pane_g6_ParamLimits

0x0afb,	// (0x000627fd) main_video_pane_g6

0x0006,

0xf253,	// (0x00070f55) main_video_pane_g_ParamLimits

0xf253,	// (0x00070f55) main_video_pane_g

0x6090,	// (0x00067d92) main_video_pane_t1_ParamLimits

0x6090,	// (0x00067d92) main_video_pane_t1

0x0b15,	// (0x00062817) cams_zoom_pane_g1

0x0b1e,	// (0x00062820) cams_zoom_pane_g2

0x0b27,	// (0x00062829) cams_zoom_pane_g3

0x0b30,	// (0x00062832) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00070f64) cams_zoom_pane_g

0x60da,	// (0x00067ddc) grid_cams_pane

0x60e8,	// (0x00067dea) linegrid_cams_pane

0x60f6,	// (0x00067df8) cell_cams_pane_ParamLimits

0x60f6,	// (0x00067df8) cell_cams_pane

0x0b39,	// (0x0006283b) cams_burst_image_pane

0x0b41,	// (0x00062843) cell_cams_pane_g1

0x04a8,	// (0x000621aa) grid_highlight_pane_cp03

0x08b7,	// (0x000625b9) mp_bg_pane_g1

0x04a8,	// (0x000621aa) bg_list_pane_cp03

0x9802,	// (0x0006b504) bg_mp_pane

0x980a,	// (0x0006b50c) grid_mp_pane

0x9812,	// (0x0006b514) media_player_g1

0x981a,	// (0x0006b51c) media_player_t1

0x9828,	// (0x0006b52a) media_player_t2

0x9836,	// (0x0006b538) media_player_t3

0x9844,	// (0x0006b546) media_player_t4

0x9852,	// (0x0006b554) media_player_t5

0x9860,	// (0x0006b562) media_player_t6

0x986e,	// (0x0006b570) media_player_t7

0x0006,

0xf5fe,	// (0x00071300) media_player_t

0x987c,	// (0x0006b57e) wait_bar_pane_cp02

0xf5e3,	// (0x000712e5) main_usb_pane_t

0x98c0,	// (0x0006b5c2) cell_mp_pane

0x08b7,	// (0x000625b9) cell_mp_pane_g1

0x04a8,	// (0x000621aa) grid_highlight_pane_cp06

0x0b49,	// (0x0006284b) grid_skin_colour_pane

0x0b51,	// (0x00062853) list_highlight_pane_cp03

0x6109,	// (0x00067e0b) skin_g1

0x0b59,	// (0x0006285b) skin_t1

0x0b68,	// (0x0006286a) skin_t2

0x0001,

0xf297,	// (0x00070f99) skin_t

0x6113,	// (0x00067e15) cell_skin_colour_pane_ParamLimits

0x6113,	// (0x00067e15) cell_skin_colour_pane

0x0b76,	// (0x00062878) cell_skin_colour_pane_g1

0x6162,	// (0x00067e64) call_video_g1_ParamLimits

0x6162,	// (0x00067e64) call_video_g1

0x6172,	// (0x00067e74) call_video_g2_ParamLimits

0x6172,	// (0x00067e74) call_video_g2

0x0001,

0xf29c,	// (0x00070f9e) call_video_g_ParamLimits

0xf29c,	// (0x00070f9e) call_video_g

0x61b0,	// (0x00067eb2) call_video_uplink_pane_cp1_ParamLimits

0x61b0,	// (0x00067eb2) call_video_uplink_pane_cp1

0x0b90,	// (0x00062892) call_video_uplink_pane_cp2

0x625c,	// (0x00067f5e) video_down_crop_pane_ParamLimits

0x625c,	// (0x00067f5e) video_down_crop_pane

0x6334,	// (0x00068036) video_down_pane_ParamLimits

0x6334,	// (0x00068036) video_down_pane

0x0b98,	// (0x0006289a) video_down_subqcif_pane_ParamLimits

0x0b98,	// (0x0006289a) video_down_subqcif_pane

0x0bb0,	// (0x000628b2) video_down_subqcif_pane_cp_ParamLimits

0x0bb0,	// (0x000628b2) video_down_subqcif_pane_cp

0x0bd4,	// (0x000628d6) im_reading_pane_ParamLimits

0x0bd4,	// (0x000628d6) im_reading_pane

0x6416,	// (0x00068118) im_writing_pane_ParamLimits

0x6416,	// (0x00068118) im_writing_pane

0x6434,	// (0x00068136) im_reading_pane_t1

0x0bee,	// (0x000628f0) list_im_pane

0x0bff,	// (0x00062901) scroll_pane_cp07

0x6494,	// (0x00068196) im_writing_pane_t1_ParamLimits

0x6494,	// (0x00068196) im_writing_pane_t1

0x0c18,	// (0x0006291a) im_writing_pane_t2_ParamLimits

0x0c18,	// (0x0006291a) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00070fa8) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00070fa8) im_writing_pane_t

0x04a8,	// (0x000621aa) input_focus_pane_cp04

0x04a8,	// (0x000621aa) input_focus_pane_cp05

0x64a6,	// (0x000681a8) list_im_single_pane_ParamLimits

0x64a6,	// (0x000681a8) list_im_single_pane

0x64d2,	// (0x000681d4) list_single_im_pane_t1

0x9884,	// (0x0006b586) blid_accuracy_pane

0x988c,	// (0x0006b58e) blid_compass_pane

0x9896,	// (0x0006b598) main_location_t1

0x98a4,	// (0x0006b5a6) main_location_t2

0x98b2,	// (0x0006b5b4) main_location_t3

0x0002,

0xf60d,	// (0x0007130f) main_location_t

0x04a8,	// (0x000621aa) aid_levels_location

0x08b7,	// (0x000625b9) blid_accuracy_pane_g1

0x08b7,	// (0x000625b9) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0007100a) blid_accuracy_pane_g

0x0c60,	// (0x00062962) wml_content_pane

0x0c9e,	// (0x000629a0) wml_button_pane_ParamLimits

0x0c9e,	// (0x000629a0) wml_button_pane

0x64e1,	// (0x000681e3) wml_list_single_large_pane_ParamLimits

0x64e1,	// (0x000681e3) wml_list_single_large_pane

0x6513,	// (0x00068215) wml_list_single_medium_pane_ParamLimits

0x6513,	// (0x00068215) wml_list_single_medium_pane

0x654c,	// (0x0006824e) wml_list_single_small_pane_ParamLimits

0x654c,	// (0x0006824e) wml_list_single_small_pane

0x0cb2,	// (0x000629b4) wml_selection_box_pane_ParamLimits

0x0cb2,	// (0x000629b4) wml_selection_box_pane

0x0cc5,	// (0x000629c7) wml_list_single_pane_t1

0x0cd4,	// (0x000629d6) wml_list_single_medium_pane_t1

0x0ce3,	// (0x000629e5) wml_list_single_large_pane_t1

0x0cf2,	// (0x000629f4) input_focus_pane_cp02_ParamLimits

0x0cf2,	// (0x000629f4) input_focus_pane_cp02

0x0d05,	// (0x00062a07) wml_selection_box_pane_g1

0x0d0e,	// (0x00062a10) wml_selection_box_pane_t1_ParamLimits

0x0d0e,	// (0x00062a10) wml_selection_box_pane_t1

0x0703,	// (0x00062405) bg_wml_button_pane_ParamLimits

0x0703,	// (0x00062405) bg_wml_button_pane

0x0d26,	// (0x00062a28) wml_button_pane_g1

0x0d2e,	// (0x00062a30) wml_button_pane_t1

0x0d26,	// (0x00062a28) wml_button_bg_pane_g1

0x0d3e,	// (0x00062a40) wml_button_bg_pane_g2

0x0d46,	// (0x00062a48) wml_button_bg_pane_g3

0x0d4e,	// (0x00062a50) wml_button_bg_pane_g4

0x0d56,	// (0x00062a58) wml_button_bg_pane_g5

0x0d5e,	// (0x00062a60) wml_button_bg_pane_g6

0x0d66,	// (0x00062a68) wml_button_bg_pane_g7

0x0d6e,	// (0x00062a70) wml_button_bg_pane_g8

0x0d76,	// (0x00062a78) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00070fad) wml_button_bg_pane_g

0x6594,	// (0x00068296) bg_list_pane_cp02

0x0d7e,	// (0x00062a80) mce_header_pane_ParamLimits

0x0d7e,	// (0x00062a80) mce_header_pane

0x0d94,	// (0x00062a96) mce_icon_pane

0x0d94,	// (0x00062a96) mce_image_pane

0x0d9d,	// (0x00062a9f) mce_text_pane_ParamLimits

0x0d9d,	// (0x00062a9f) mce_text_pane

0x659e,	// (0x000682a0) scroll_pane_cp03

0x0c96,	// (0x00062998) scroll_pane_cp04

0x65a8,	// (0x000682aa) scroll_pane_cp05_ParamLimits

0x65a8,	// (0x000682aa) scroll_pane_cp05

0x65b4,	// (0x000682b6) mce_header_field_pane_ParamLimits

0x65b4,	// (0x000682b6) mce_header_field_pane

0x65d4,	// (0x000682d6) mce_header_field_pane_2_ParamLimits

0x65d4,	// (0x000682d6) mce_header_field_pane_2

0x65ea,	// (0x000682ec) mce_header_field_pane_3

0x65f2,	// (0x000682f4) list_single_mce_message_pane_ParamLimits

0x65f2,	// (0x000682f4) list_single_mce_message_pane

0x6622,	// (0x00068324) list_single_mce_smart_pane_ParamLimits

0x6622,	// (0x00068324) list_single_mce_smart_pane

0x665d,	// (0x0006835f) input_focus_pane_cp03

0x6666,	// (0x00068368) list_header_data_pane

0x666e,	// (0x00068370) mce_header_field_pane_t1

0x667e,	// (0x00068380) list_single_mce_header_pane_ParamLimits

0x667e,	// (0x00068380) list_single_mce_header_pane

0x66b2,	// (0x000683b4) list_single_mce_header_pane_t1

0x66c1,	// (0x000683c3) list_single_mce_message_pane_g1

0x66c9,	// (0x000683cb) list_single_mce_message_pane_t1

0x66f5,	// (0x000683f7) bg_cale_heading_pane_cp01_ParamLimits

0x66f5,	// (0x000683f7) bg_cale_heading_pane_cp01

0x6718,	// (0x0006841a) bg_cale_pane_cp02_ParamLimits

0x6718,	// (0x0006841a) bg_cale_pane_cp02

0x673b,	// (0x0006843d) cale_month_corner_pane

0x6751,	// (0x00068453) cale_month_day_heading_pane_ParamLimits

0x6751,	// (0x00068453) cale_month_day_heading_pane

0x6784,	// (0x00068486) cale_month_pane_g1_ParamLimits

0x6784,	// (0x00068486) cale_month_pane_g1

0x67a0,	// (0x000684a2) cale_month_pane_g2_ParamLimits

0x67a0,	// (0x000684a2) cale_month_pane_g2

0x67bb,	// (0x000684bd) cale_month_pane_g3_ParamLimits

0x67bb,	// (0x000684bd) cale_month_pane_g3

0x67e7,	// (0x000684e9) cale_month_pane_g4_ParamLimits

0x67e7,	// (0x000684e9) cale_month_pane_g4

0x6813,	// (0x00068515) cale_month_pane_g5_ParamLimits

0x6813,	// (0x00068515) cale_month_pane_g5

0x683f,	// (0x00068541) cale_month_pane_g6_ParamLimits

0x683f,	// (0x00068541) cale_month_pane_g6

0x686b,	// (0x0006856d) cale_month_pane_g7_ParamLimits

0x686b,	// (0x0006856d) cale_month_pane_g7

0x68a7,	// (0x000685a9) cale_month_pane_g8_ParamLimits

0x68a7,	// (0x000685a9) cale_month_pane_g8

0x68e3,	// (0x000685e5) cale_month_pane_g9_ParamLimits

0x68e3,	// (0x000685e5) cale_month_pane_g9

0x691d,	// (0x0006861f) cale_month_pane_g10_ParamLimits

0x691d,	// (0x0006861f) cale_month_pane_g10

0x6957,	// (0x00068659) cale_month_pane_g11_ParamLimits

0x6957,	// (0x00068659) cale_month_pane_g11

0x6991,	// (0x00068693) cale_month_pane_g12_ParamLimits

0x6991,	// (0x00068693) cale_month_pane_g12

0x69cb,	// (0x000686cd) cale_month_pane_g13_ParamLimits

0x69cb,	// (0x000686cd) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00070fc0) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00070fc0) cale_month_pane_g

0x6a17,	// (0x00068719) cale_month_week_pane

0x6a2a,	// (0x0006872c) grid_cale_month_pane_ParamLimits

0x6a2a,	// (0x0006872c) grid_cale_month_pane

0x6a58,	// (0x0006875a) cale_month_day_heading_pane_t1

0x6ab6,	// (0x000687b8) cale_month_day_heading_pane_t2

0x6b1b,	// (0x0006881d) cale_month_day_heading_pane_t3

0x6b80,	// (0x00068882) cale_month_day_heading_pane_t4

0x6be5,	// (0x000688e7) cale_month_day_heading_pane_t5

0x6c4a,	// (0x0006894c) cale_month_day_heading_pane_t6

0x6cb7,	// (0x000689b9) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00070fdb) cale_month_day_heading_pane_t

0x0a06,	// (0x00062708) bg_cale_side_pane_cp01

0x6d2c,	// (0x00068a2e) cale_month_week_pane_t1

0x6d43,	// (0x00068a45) cale_month_week_pane_t2

0x6d5a,	// (0x00068a5c) cale_month_week_pane_t3

0x6d71,	// (0x00068a73) cale_month_week_pane_t4

0x6d88,	// (0x00068a8a) cale_month_week_pane_t5

0x6d9f,	// (0x00068aa1) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00070fea) cale_month_week_pane_t

0x6db6,	// (0x00068ab8) cell_cale_month_pane_ParamLimits

0x6db6,	// (0x00068ab8) cell_cale_month_pane

0x6e6c,	// (0x00068b6e) cell_cale_month_pane_g1

0x6e78,	// (0x00068b7a) cell_cale_month_pane_t1_ParamLimits

0x6e78,	// (0x00068b7a) cell_cale_month_pane_t1

0x0a14,	// (0x00062716) grid_highlight_pane_cp08

0x08b7,	// (0x000625b9) main_smil_g1

0x6e94,	// (0x00068b96) smil_status_pane

0x6e9f,	// (0x00068ba1) smil_text_pane

0x96a2,	// (0x0006b3a4) bg_popup_call3_rect_pane_g8

0x96aa,	// (0x0006b3ac) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x000712a3) bg_popup_call3_rect_pane_g

0x9d89,	// (0x0006ba8b) smil_status_volume_pane_g1

0x6eb1,	// (0x00068bb3) smil_status_pane_t1

0x9dbc,	// (0x0006babe) volume_smil_pane

0x6ec8,	// (0x00068bca) list_smil_text_pane

0x6ed2,	// (0x00068bd4) scroll_pane_cp011

0x6edd,	// (0x00068bdf) smil_text_list_pane_t1_ParamLimits

0x6edd,	// (0x00068bdf) smil_text_list_pane_t1

0x6f88,	// (0x00068c8a) aid_volume_smil_ParamLimits

0x6f88,	// (0x00068c8a) aid_volume_smil

0x08b7,	// (0x000625b9) smil_volume_pane_g1

0x08b7,	// (0x000625b9) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0007100a) smil_volume_pane_g

0x083e,	// (0x00062540) listscroll_cale_day_pane

0x6faa,	// (0x00068cac) bg_cale_pane

0x6fc2,	// (0x00068cc4) list_cale_pane

0x6fd3,	// (0x00068cd5) scroll_pane_cp09

0x6fe4,	// (0x00068ce6) cale_bg_pane_g1

0x6fec,	// (0x00068cee) cale_bg_pane_g2

0x6ff4,	// (0x00068cf6) cale_bg_pane_g3

0x6ffc,	// (0x00068cfe) cale_bg_pane_g4

0x7004,	// (0x00068d06) cale_bg_pane_g5

0x700c,	// (0x00068d0e) cale_bg_pane_g6

0x7014,	// (0x00068d16) cale_bg_pane_g7

0x701c,	// (0x00068d1e) cale_bg_pane_g8

0x7024,	// (0x00068d26) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0007100f) cale_bg_pane_g

0x702c,	// (0x00068d2e) list_cale_time_pane_ParamLimits

0x702c,	// (0x00068d2e) list_cale_time_pane

0x704d,	// (0x00068d4f) list_cale_time_pane_g1_ParamLimits

0x704d,	// (0x00068d4f) list_cale_time_pane_g1

0x7059,	// (0x00068d5b) list_cale_time_pane_g2_ParamLimits

0x7059,	// (0x00068d5b) list_cale_time_pane_g2

0x7066,	// (0x00068d68) list_cale_time_pane_g3_ParamLimits

0x7066,	// (0x00068d68) list_cale_time_pane_g3

0x7082,	// (0x00068d84) list_cale_time_pane_g4_ParamLimits

0x7082,	// (0x00068d84) list_cale_time_pane_g4

0x7090,	// (0x00068d92) list_cale_time_pane_g5_ParamLimits

0x7090,	// (0x00068d92) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x00071022) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x00071022) list_cale_time_pane_g

0x70ab,	// (0x00068dad) list_cale_time_pane_t1_ParamLimits

0x70ab,	// (0x00068dad) list_cale_time_pane_t1

0x70d3,	// (0x00068dd5) list_cale_time_pane_t2_ParamLimits

0x70d3,	// (0x00068dd5) list_cale_time_pane_t2

0x77cc,	// (0x000694ce) aid_blid_cardinal_pane

0x781a,	// (0x0006951c) compass_pane_t4

0x70fb,	// (0x00068dfd) list_cale_time_pane_t4_ParamLimits

0x70fb,	// (0x00068dfd) list_cale_time_pane_t4

0x7828,	// (0x0006952a) compass_pane_t5

0x7838,	// (0x0006953a) compass_pane_t6

0x7846,	// (0x00069548) compass_pane_t7

0x78ca,	// (0x000695cc) navi_pane_cc_t1

0x7ae5,	// (0x000697e7) aid_phob_thumbnail_center_pane

0x8169,	// (0x00069e6b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0007102f) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0007102f) list_cale_time_pane_t

0x0101,	// (0x00061e03) bg_popup_window_pane_cp02_ParamLimits

0x0101,	// (0x00061e03) bg_popup_window_pane_cp02

0x7123,	// (0x00068e25) heading_pane_cp01_ParamLimits

0x7123,	// (0x00068e25) heading_pane_cp01

0x712f,	// (0x00068e31) loc_req_pane_ParamLimits

0x712f,	// (0x00068e31) loc_req_pane

0x713f,	// (0x00068e41) loc_type_pane_ParamLimits

0x713f,	// (0x00068e41) loc_type_pane

0x7151,	// (0x00068e53) loc_type_pane_t1_ParamLimits

0x7151,	// (0x00068e53) loc_type_pane_t1

0x7163,	// (0x00068e65) loc_type_pane_t2_ParamLimits

0x7163,	// (0x00068e65) loc_type_pane_t2

0x7175,	// (0x00068e77) loc_type_pane_t3_ParamLimits

0x7175,	// (0x00068e77) loc_type_pane_t3

0x0002,

0xf334,	// (0x00071036) loc_type_pane_t_ParamLimits

0xf334,	// (0x00071036) loc_type_pane_t

0x7187,	// (0x00068e89) list_loc_req_pane

0x7191,	// (0x00068e93) scroll_pane_cp012

0x719c,	// (0x00068e9e) list_single_loc_request_popup_menu_pane_ParamLimits

0x719c,	// (0x00068e9e) list_single_loc_request_popup_menu_pane

0x71ae,	// (0x00068eb0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x71ae,	// (0x00068eb0) list_single_loc_request_popup_menu_pane_g1

0x71ba,	// (0x00068ebc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x71ba,	// (0x00068ebc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0007103d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0007103d) list_single_loc_request_popup_menu_pane_g

0x71c6,	// (0x00068ec8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x71c6,	// (0x00068ec8) list_single_loc_request_popup_menu_pane_t1

0x71dc,	// (0x00068ede) bg_popup_window_pane_cp03_ParamLimits

0x71dc,	// (0x00068ede) bg_popup_window_pane_cp03

0x71ea,	// (0x00068eec) heading_loc_req_pane_ParamLimits

0x71ea,	// (0x00068eec) heading_loc_req_pane

0x71f6,	// (0x00068ef8) popup_dyc_status_message_window_g1_ParamLimits

0x71f6,	// (0x00068ef8) popup_dyc_status_message_window_g1

0x7202,	// (0x00068f04) popup_dyc_status_message_window_t1_ParamLimits

0x7202,	// (0x00068f04) popup_dyc_status_message_window_t1

0x7214,	// (0x00068f16) popup_dyc_status_message_window_t2_ParamLimits

0x7214,	// (0x00068f16) popup_dyc_status_message_window_t2

0x7226,	// (0x00068f28) popup_dyc_status_message_window_t3_ParamLimits

0x7226,	// (0x00068f28) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x00071042) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x00071042) popup_dyc_status_message_window_t

0x04a8,	// (0x000621aa) bg_heading_pane_cp01

0x7238,	// (0x00068f3a) heading_loc_req_pane_g1

0x7240,	// (0x00068f42) heading_loc_req_pane_g2

0x7248,	// (0x00068f4a) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00071049) heading_loc_req_pane_g

0x7250,	// (0x00068f52) heading_loc_req_pane_t1

0x7277,	// (0x00068f79) bg_popup_sub_pane_cp01_ParamLimits

0x7277,	// (0x00068f79) bg_popup_sub_pane_cp01

0x7285,	// (0x00068f87) popup_cale_events_window_g1_ParamLimits

0x7285,	// (0x00068f87) popup_cale_events_window_g1

0x72a5,	// (0x00068fa7) popup_cale_events_window_g2_ParamLimits

0x72a5,	// (0x00068fa7) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007107d) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007107d) popup_cale_events_window_g

0x72c5,	// (0x00068fc7) popup_cale_events_window_t1_ParamLimits

0x72c5,	// (0x00068fc7) popup_cale_events_window_t1

0x72d7,	// (0x00068fd9) popup_cale_events_window_t2_ParamLimits

0x72d7,	// (0x00068fd9) popup_cale_events_window_t2

0x7315,	// (0x00069017) popup_cale_events_window_t3_ParamLimits

0x7315,	// (0x00069017) popup_cale_events_window_t3

0x734f,	// (0x00069051) popup_cale_events_window_t4_ParamLimits

0x734f,	// (0x00069051) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x00071082) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x00071082) popup_cale_events_window_t

0x7385,	// (0x00069087) call_type_pane

0x7391,	// (0x00069093) popup_call_status_window_g1

0x739f,	// (0x000690a1) popup_call_status_window_g2

0x73ab,	// (0x000690ad) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0007108b) popup_call_status_window_g

0x73b7,	// (0x000690b9) call_type_pane_g1

0x73c0,	// (0x000690c2) call_type_pane_g2

0x0001,

0xf390,	// (0x00071092) call_type_pane_g

0x04a8,	// (0x000621aa) bg_popup_sub_pane_cp02

0x73c9,	// (0x000690cb) listscroll_popup_wml_pane

0x73d1,	// (0x000690d3) list_wml_pane

0x73db,	// (0x000690dd) scroll_pane_cp013

0x73e6,	// (0x000690e8) list_single_graphic_popup_wml_pane_ParamLimits

0x73e6,	// (0x000690e8) list_single_graphic_popup_wml_pane

0x08b7,	// (0x000625b9) list_single_graphic_popup_wml_pane_g1

0x73fa,	// (0x000690fc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00071097) list_single_graphic_popup_wml_pane_g

0x7402,	// (0x00069104) list_single_graphic_popup_wml_pane_t1

0x7418,	// (0x0006911a) aid_call_pane

0x06fb,	// (0x000623fd) popup_clock_analogue_window_g1

0x06fb,	// (0x000623fd) popup_clock_analogue_window_g2

0x7420,	// (0x00069122) popup_clock_analogue_window_g3

0x7420,	// (0x00069122) popup_clock_analogue_window_g4

0x08b7,	// (0x000625b9) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0007109c) popup_clock_analogue_window_g

0x7428,	// (0x0006912a) popup_clock_analogue_window_t1

0x7436,	// (0x00069138) clock_digital_number_pane_ParamLimits

0x7436,	// (0x00069138) clock_digital_number_pane

0x7442,	// (0x00069144) clock_digital_number_pane_cp02_ParamLimits

0x7442,	// (0x00069144) clock_digital_number_pane_cp02

0x744e,	// (0x00069150) clock_digital_number_pane_cp03_ParamLimits

0x744e,	// (0x00069150) clock_digital_number_pane_cp03

0x745a,	// (0x0006915c) clock_digital_number_pane_cp04_ParamLimits

0x745a,	// (0x0006915c) clock_digital_number_pane_cp04

0x7466,	// (0x00069168) clock_digital_separator_pane_ParamLimits

0x7466,	// (0x00069168) clock_digital_separator_pane

0x7472,	// (0x00069174) popup_clock_digital_window_t1

0x08b7,	// (0x000625b9) clock_digital_number_pane_g1

0x08b7,	// (0x000625b9) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0007100a) clock_digital_number_pane_g

0x08b7,	// (0x000625b9) clock_digital_separator_pane_g1

0x08b7,	// (0x000625b9) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0007100a) clock_digital_separator_pane_g

0x04a8,	// (0x000621aa) bg_popup_window_pane_cp04

0x748f,	// (0x00069191) heading_pane_cp03

0x7497,	// (0x00069199) listscroll_popup_gms_pane

0x749f,	// (0x000691a1) grid_large_graphic_popup_pane

0x74a9,	// (0x000691ab) listscroll_popup_gms_pane_g1

0x74b1,	// (0x000691b3) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x000710a7) listscroll_popup_gms_pane_g

0x0c96,	// (0x00062998) scroll_pane_cp014

0x74b9,	// (0x000691bb) cell_large_graphic_popup_pane_ParamLimits

0x74b9,	// (0x000691bb) cell_large_graphic_popup_pane

0x74d1,	// (0x000691d3) cell_large_graphic_popup_pane_g1_ParamLimits

0x74d1,	// (0x000691d3) cell_large_graphic_popup_pane_g1

0x74dd,	// (0x000691df) cell_large_graphic_popup_pane_g2_ParamLimits

0x74dd,	// (0x000691df) cell_large_graphic_popup_pane_g2

0x74e9,	// (0x000691eb) cell_large_graphic_popup_pane_g3_ParamLimits

0x74e9,	// (0x000691eb) cell_large_graphic_popup_pane_g3

0x74f6,	// (0x000691f8) cell_large_graphic_popup_pane_g4_ParamLimits

0x74f6,	// (0x000691f8) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x000710ac) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x000710ac) cell_large_graphic_popup_pane_g

0x7506,	// (0x00069208) grid_highlight_pane_cp010

0x08b7,	// (0x000625b9) bg_popup_call_pane_g1

0x7510,	// (0x00069212) list_single_graphic_popup_conf_pane_ParamLimits

0x7510,	// (0x00069212) list_single_graphic_popup_conf_pane

0x7522,	// (0x00069224) list_highlight_pane_cp01

0x752b,	// (0x0006922d) list_single_graphic_popup_conf_pane_g1

0x7533,	// (0x00069235) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x000710b5) list_single_graphic_popup_conf_pane_g

0x753b,	// (0x0006923d) list_single_graphic_popup_conf_pane_t1

0x7549,	// (0x0006924b) linegrid_cams_pane_g1

0x7552,	// (0x00069254) linegrid_cams_pane_g2

0x09c1,	// (0x000626c3) linegrid_cams_pane_g3

0x755b,	// (0x0006925d) linegrid_cams_pane_g4

0x7564,	// (0x00069266) linegrid_cams_pane_g5

0x756d,	// (0x0006926f) linegrid_cams_pane_g6

0x0a47,	// (0x00062749) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x000710ba) linegrid_cams_pane_g

0x7576,	// (0x00069278) popup_clock_analogue_window

0x7576,	// (0x00069278) popup_clock_digital_window

0x04a8,	// (0x000621aa) popup_phob_thumbnail_window

0x08b7,	// (0x000625b9) call_video_uplink_pane_g1

0x757f,	// (0x00069281) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x000710c9) call_video_uplink_pane_g

0x0a14,	// (0x00062716) video_uplink_pane

0x7587,	// (0x00069289) mce_image_pane_g1

0x7591,	// (0x00069293) mce_image_pane_g2

0x7599,	// (0x0006929b) mce_image_pane_g3

0x75a1,	// (0x000692a3) mce_image_pane_g4

0x75a9,	// (0x000692ab) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x000710ce) mce_image_pane_g

0x75b1,	// (0x000692b3) control_top_pane_stacon_cp01_ParamLimits

0x75b1,	// (0x000692b3) control_top_pane_stacon_cp01

0x75c5,	// (0x000692c7) uni_indicator_pane_stacon_cp01_ParamLimits

0x75c5,	// (0x000692c7) uni_indicator_pane_stacon_cp01

0x75d6,	// (0x000692d8) bg_popup_sub_pane_cp03

0x75e0,	// (0x000692e2) chi_dic_find_pane

0x75e8,	// (0x000692ea) listscroll_chi_dic_pane

0x75f1,	// (0x000692f3) main_pane_chidic_g1

0x7604,	// (0x00069306) chi_dic_find_pane_t1

0x7612,	// (0x00069314) find_chidic_pane

0x761b,	// (0x0006931d) chi_dic_list_pane_ParamLimits

0x761b,	// (0x0006931d) chi_dic_list_pane

0x762c,	// (0x0006932e) scroll_pane_cp020

0x7634,	// (0x00069336) find_chidic_pane_t1

0x04a8,	// (0x000621aa) input_focus_pane_cp06

0x7643,	// (0x00069345) list_chi_dic_pane_ParamLimits

0x7643,	// (0x00069345) list_chi_dic_pane

0x7664,	// (0x00069366) list_chi_dic_pane_t1_ParamLimits

0x7664,	// (0x00069366) list_chi_dic_pane_t1

0x04a8,	// (0x000621aa) list_highlight_pane_cp020

0x7677,	// (0x00069379) bg_cale_heading_pane_g1

0x767f,	// (0x00069381) bg_cale_heading_pane_g2

0x7687,	// (0x00069389) bg_cale_heading_pane_g3

0x768f,	// (0x00069391) bg_cale_heading_pane_g4

0x7699,	// (0x0006939b) bg_cale_heading_pane_g5

0x76a3,	// (0x000693a5) bg_cale_heading_pane_g6

0x76ab,	// (0x000693ad) bg_cale_heading_pane_g7

0x76b3,	// (0x000693b5) bg_cale_heading_pane_g8

0x76bd,	// (0x000693bf) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x000710d9) bg_cale_heading_pane_g

0x7677,	// (0x00069379) bg_cale_side_pane_g1

0x76c7,	// (0x000693c9) bg_cale_side_pane_g2

0x76cf,	// (0x000693d1) bg_cale_side_pane_g3

0x76d7,	// (0x000693d9) bg_cale_side_pane_g4

0x76df,	// (0x000693e1) bg_cale_side_pane_g5

0x76e7,	// (0x000693e9) bg_cale_side_pane_g6

0x76ef,	// (0x000693f1) bg_cale_side_pane_g7

0x76f7,	// (0x000693f9) bg_cale_side_pane_g8

0x76ff,	// (0x00069401) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000710ec) bg_cale_side_pane_g

0x7707,	// (0x00069409) popup_call_status_window_ParamLimits

0x7707,	// (0x00069409) popup_call_status_window

0x7713,	// (0x00069415) stacon_top_pane

0x771b,	// (0x0006941d) status_pane_ParamLimits

0x771b,	// (0x0006941d) status_pane

0x7730,	// (0x00069432) status_small_pane

0x7738,	// (0x0006943a) control_pane

0x04a8,	// (0x000621aa) stacon_bottom_pane

0x7740,	// (0x00069442) list_single_mce_smart_pane_t1_ParamLimits

0x7740,	// (0x00069442) list_single_mce_smart_pane_t1

0x7753,	// (0x00069455) list_single_mce_smart_pane_t2_ParamLimits

0x7753,	// (0x00069455) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000710ff) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000710ff) list_single_mce_smart_pane_t

0x7772,	// (0x00069474) compass_pane

0x777e,	// (0x00069480) main_location2_pane_t1

0x7792,	// (0x00069494) main_location2_pane_t2

0x77a6,	// (0x000694a8) main_location2_pane_t3

0x0003,

0xf402,	// (0x00071104) main_location2_pane_t

0x77f0,	// (0x000694f2) compass_pane_g1_ParamLimits

0x77f0,	// (0x000694f2) compass_pane_g1

0x77fc,	// (0x000694fe) compass_pane_t1

0x780b,	// (0x0006950d) compass_pane_t2

0x0005,

0xf40b,	// (0x0007110d) compass_pane_t

0x7856,	// (0x00069558) text_secondary_cp61

0x78c1,	// (0x000695c3) navi_pane_cams_g5

0x793d,	// (0x0006963f) navi_pane_im_t1

0x794b,	// (0x0006964d) navi_pane_mp_g1_ParamLimits

0x794b,	// (0x0006964d) navi_pane_mp_g1

0x795f,	// (0x00069661) navi_pane_mp_g2_ParamLimits

0x795f,	// (0x00069661) navi_pane_mp_g2

0x796b,	// (0x0006966d) navi_pane_mp_g3_ParamLimits

0x796b,	// (0x0006966d) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x00071121) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x00071121) navi_pane_mp_g

0x7977,	// (0x00069679) navi_pane_mp_t1

0x7985,	// (0x00069687) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00071128) navi_pane_mp_t

0x7a1c,	// (0x0006971e) navi_pane_vt_g1

0x7977,	// (0x00069679) navi_pane_vt_t1

0x7a24,	// (0x00069726) navi_slider_pane

0x7a2c,	// (0x0006972e) zooming_pane

0x7a34,	// (0x00069736) navi_slider_pane_g1

0x7a3d,	// (0x0006973f) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0007112f) navi_slider_pane_g

0x7a6a,	// (0x0006976c) aid_levels_zoom

0x7a72,	// (0x00069774) zooming_pane_g1

0x7a7a,	// (0x0006977c) zooming_pane_g2

0x7a7a,	// (0x0006977c) zooming_pane_g3

0x0002,

0xf43c,	// (0x0007113e) zooming_pane_g

0x7a82,	// (0x00069784) level_10_zoom

0x7a8b,	// (0x0006978d) level_11_zoom

0x7a94,	// (0x00069796) level_1_zoom

0x7a9d,	// (0x0006979f) level_2_zoom

0x7aa6,	// (0x000697a8) level_3_zoom

0x7aaf,	// (0x000697b1) level_4_zoom

0x7ab8,	// (0x000697ba) level_5_zoom

0x7ac1,	// (0x000697c3) level_6_zoom

0x7aca,	// (0x000697cc) level_7_zoom

0x7ad3,	// (0x000697d5) level_8_zoom

0x7adc,	// (0x000697de) level_9_zoom

0x7aed,	// (0x000697ef) popup_phob_thumbnail_window_g1

0x7af5,	// (0x000697f7) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00071145) popup_phob_thumbnail_window_g

0x9921,	// (0x0006b623) level_1_location

0x9929,	// (0x0006b62b) level_2_location

0x9931,	// (0x0006b633) level_3_location

0x9939,	// (0x0006b63b) level_4_location

0x7a2c,	// (0x0006972e) level_5_location

0x7afd,	// (0x000697ff) mce_icon_pane_g1

0x7b05,	// (0x00069807) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0007114a) mce_icon_pane_g

0x7b0d,	// (0x0006980f) main_mup_pane_g1_ParamLimits

0x7b0d,	// (0x0006980f) main_mup_pane_g1

0x7b25,	// (0x00069827) main_mup_pane_g2_ParamLimits

0x7b25,	// (0x00069827) main_mup_pane_g2

0x7b41,	// (0x00069843) main_mup_pane_g3_ParamLimits

0x7b41,	// (0x00069843) main_mup_pane_g3

0x7b5d,	// (0x0006985f) main_mup_pane_g4_ParamLimits

0x7b5d,	// (0x0006985f) main_mup_pane_g4

0x7b79,	// (0x0006987b) main_mup_pane_g5_ParamLimits

0x7b79,	// (0x0006987b) main_mup_pane_g5

0x7b9a,	// (0x0006989c) main_mup_pane_g6_ParamLimits

0x7b9a,	// (0x0006989c) main_mup_pane_g6

0x7bb6,	// (0x000698b8) main_mup_pane_g7_ParamLimits

0x7bb6,	// (0x000698b8) main_mup_pane_g7

0x7bd2,	// (0x000698d4) main_mup_pane_g8_ParamLimits

0x7bd2,	// (0x000698d4) main_mup_pane_g8

0x7bee,	// (0x000698f0) main_mup_pane_g9_ParamLimits

0x7bee,	// (0x000698f0) main_mup_pane_g9

0x7c0d,	// (0x0006990f) main_mup_pane_g10_ParamLimits

0x7c0d,	// (0x0006990f) main_mup_pane_g10

0x7c2c,	// (0x0006992e) main_mup_pane_g11_ParamLimits

0x7c2c,	// (0x0006992e) main_mup_pane_g11

0x7c44,	// (0x00069946) main_mup_pane_g12_ParamLimits

0x7c44,	// (0x00069946) main_mup_pane_g12

0x7c52,	// (0x00069954) main_mup_pane_g13_ParamLimits

0x7c52,	// (0x00069954) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0007114f) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0007114f) main_mup_pane_g

0x7c68,	// (0x0006996a) main_mup_pane_t1_ParamLimits

0x7c68,	// (0x0006996a) main_mup_pane_t1

0x7c85,	// (0x00069987) main_mup_pane_t2_ParamLimits

0x7c85,	// (0x00069987) main_mup_pane_t2

0x7c9f,	// (0x000699a1) main_mup_pane_t3_ParamLimits

0x7c9f,	// (0x000699a1) main_mup_pane_t3

0x7cb9,	// (0x000699bb) main_mup_pane_t4_ParamLimits

0x7cb9,	// (0x000699bb) main_mup_pane_t4

0x7ccb,	// (0x000699cd) main_mup_pane_t5_ParamLimits

0x7ccb,	// (0x000699cd) main_mup_pane_t5

0x7cdd,	// (0x000699df) main_mup_pane_t6_ParamLimits

0x7cdd,	// (0x000699df) main_mup_pane_t6

0x0005,

0xf468,	// (0x0007116a) main_mup_pane_t_ParamLimits

0xf468,	// (0x0007116a) main_mup_pane_t

0x7cf3,	// (0x000699f5) mup_progress_pane_ParamLimits

0x7cf3,	// (0x000699f5) mup_progress_pane

0x7cff,	// (0x00069a01) mup_visualizer_pane_ParamLimits

0x7cff,	// (0x00069a01) mup_visualizer_pane

0x7d3d,	// (0x00069a3f) mup_volume_pane_ParamLimits

0x7d3d,	// (0x00069a3f) mup_volume_pane

0x7391,	// (0x00069093) mup_visualizer_pane_g1_ParamLimits

0x7391,	// (0x00069093) mup_visualizer_pane_g1

0x7391,	// (0x00069093) mup_visualizer_pane_g2_ParamLimits

0x7391,	// (0x00069093) mup_visualizer_pane_g2

0x77f0,	// (0x000694f2) mup_visualizer_pane_g3_ParamLimits

0x77f0,	// (0x000694f2) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00071177) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00071177) mup_visualizer_pane_g

0x08b7,	// (0x000625b9) mup_volume_pane_g1

0x7d68,	// (0x00069a6a) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0007117e) mup_volume_pane_g

0x08b7,	// (0x000625b9) mup_progress_pane_g1

0x7d71,	// (0x00069a73) mup_progress_pane_g2

0x7d7a,	// (0x00069a7c) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00071183) mup_progress_pane_g

0x04a8,	// (0x000621aa) bg_popup_window_pane_cp05

0x7d83,	// (0x00069a85) heading_pane_cp02_ParamLimits

0x7d83,	// (0x00069a85) heading_pane_cp02

0x7d9d,	// (0x00069a9f) list_popup_blid_pane

0x7da5,	// (0x00069aa7) list_blid_sat_info_pane_ParamLimits

0x7da5,	// (0x00069aa7) list_blid_sat_info_pane

0x7db8,	// (0x00069aba) list_blid_sat_info_pane_g1

0x7dc0,	// (0x00069ac2) list_blid_sat_info_pane_t1

0x7eb6,	// (0x00069bb8) mup_equalizer_pane_ParamLimits

0x7eb6,	// (0x00069bb8) mup_equalizer_pane

0x7ed7,	// (0x00069bd9) mup_equalizer_pane_cp1_ParamLimits

0x7ed7,	// (0x00069bd9) mup_equalizer_pane_cp1

0x7ef8,	// (0x00069bfa) mup_equalizer_pane_cp2_ParamLimits

0x7ef8,	// (0x00069bfa) mup_equalizer_pane_cp2

0x7f19,	// (0x00069c1b) mup_equalizer_pane_cp3_ParamLimits

0x7f19,	// (0x00069c1b) mup_equalizer_pane_cp3

0x7f3a,	// (0x00069c3c) mup_equalizer_pane_cp4_ParamLimits

0x7f3a,	// (0x00069c3c) mup_equalizer_pane_cp4

0x7f5b,	// (0x00069c5d) mup_equalizer_pane_cp5

0x7f71,	// (0x00069c73) mup_equalizer_pane_cp6

0x7f89,	// (0x00069c8b) mup_equalizer_pane_cp7

0x972a,	// (0x0006b42c) bg_popup_call_poc_act_pane_g9

0x9732,	// (0x0006b434) bg_popup_call_poc_act_pane_g10

0x973a,	// (0x0006b43c) bg_popup_call_poc_act_pane_g11

0x000a,

0x0703,	// (0x00062405) mup_scale_pane

0x08b7,	// (0x000625b9) mup_scale_pane_g1

0x7fa1,	// (0x00069ca3) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0007119f) mup_scale_pane_g

0x7fd7,	// (0x00069cd9) msg_data_pane

0x7fdf,	// (0x00069ce1) scroll_pane_cp017

0x444b,	// (0x0006614d) bg_list_pane_cp04_ParamLimits

0x444b,	// (0x0006614d) bg_list_pane_cp04

0x7fe7,	// (0x00069ce9) msg_data_pane_g1

0x7fef,	// (0x00069cf1) msg_data_pane_g2

0x7599,	// (0x0006929b) msg_data_pane_g3

0x7ff7,	// (0x00069cf9) msg_data_pane_g4

0x7fff,	// (0x00069d01) msg_data_pane_g5

0x8007,	// (0x00069d09) msg_data_pane_g6

0x800f,	// (0x00069d11) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x000711ae) msg_data_pane_g

0x446b,	// (0x0006616d) msg_text_pane_ParamLimits

0x446b,	// (0x0006616d) msg_text_pane

0x8017,	// (0x00069d19) qrid_highlight_pane_cp011_ParamLimits

0x8017,	// (0x00069d19) qrid_highlight_pane_cp011

0x04a8,	// (0x000621aa) msg_body_pane

0x04a8,	// (0x000621aa) msg_header_pane

0x803c,	// (0x00069d3e) input_focus_pane_cp07

0x44c3,	// (0x000661c5) msg_header_pane_t1_ParamLimits

0x44c3,	// (0x000661c5) msg_header_pane_t1

0x44d7,	// (0x000661d9) msg_header_pane_t2_ParamLimits

0x44d7,	// (0x000661d9) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x000711c2) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x000711c2) msg_header_pane_t

0x8051,	// (0x00069d53) msg_body_pane_g1

0x44e9,	// (0x000661eb) msg_body_pane_t1_ParamLimits

0x44e9,	// (0x000661eb) msg_body_pane_t1

0x451a,	// (0x0006621c) msg_body_pane_t2_ParamLimits

0x451a,	// (0x0006621c) msg_body_pane_t2

0x452c,	// (0x0006622e) msg_body_pane_t3_ParamLimits

0x452c,	// (0x0006622e) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x000711c7) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x000711c7) msg_body_pane_t

0x80ab,	// (0x00069dad) main_viewer_pane_g1_ParamLimits

0x80ab,	// (0x00069dad) main_viewer_pane_g1

0x80b7,	// (0x00069db9) main_viewer_pane_g2_ParamLimits

0x80b7,	// (0x00069db9) main_viewer_pane_g2

0x80c3,	// (0x00069dc5) main_viewer_pane_g3_ParamLimits

0x80c3,	// (0x00069dc5) main_viewer_pane_g3

0x80d4,	// (0x00069dd6) main_viewer_pane_g4_ParamLimits

0x80d4,	// (0x00069dd6) main_viewer_pane_g4

0x80e5,	// (0x00069de7) main_viewer_pane_g5_ParamLimits

0x80e5,	// (0x00069de7) main_viewer_pane_g5

0x80e5,	// (0x00069de7) main_viewer_pane_g7_ParamLimits

0x80e5,	// (0x00069de7) main_viewer_pane_g7

0x80f7,	// (0x00069df9) main_viewer_pane_g8_ParamLimits

0x80f7,	// (0x00069df9) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x000711d7) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x000711d7) main_viewer_pane_g

0x810f,	// (0x00069e11) viewer_content_pane_ParamLimits

0x810f,	// (0x00069e11) viewer_content_pane

0x813d,	// (0x00069e3f) main_postcard_pane_g1_ParamLimits

0x813d,	// (0x00069e3f) main_postcard_pane_g1

0x814b,	// (0x00069e4d) main_postcard_pane_g2_ParamLimits

0x814b,	// (0x00069e4d) main_postcard_pane_g2

0x8159,	// (0x00069e5b) main_postcard_pane_g3_ParamLimits

0x8159,	// (0x00069e5b) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000711e8) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000711e8) main_postcard_pane_g

0x8169,	// (0x00069e6b) main_postcard_pane_g4

0x9d9c,	// (0x0006ba9e) smil_status_volume_pane_g2

0x8195,	// (0x00069e97) postcard_pane_ParamLimits

0x8195,	// (0x00069e97) postcard_pane

0x7391,	// (0x00069093) postcard_pane_g1_ParamLimits

0x7391,	// (0x00069093) postcard_pane_g1

0x81c7,	// (0x00069ec9) postcard_pane_g2_ParamLimits

0x81c7,	// (0x00069ec9) postcard_pane_g2

0x81d3,	// (0x00069ed5) postcard_pane_g3_ParamLimits

0x81d3,	// (0x00069ed5) postcard_pane_g3

0x81df,	// (0x00069ee1) postcard_pane_g4_ParamLimits

0x81df,	// (0x00069ee1) postcard_pane_g4

0x81ed,	// (0x00069eef) postcard_pane_g5_ParamLimits

0x81ed,	// (0x00069eef) postcard_pane_g5

0x81f9,	// (0x00069efb) postcard_pane_g6_ParamLimits

0x81f9,	// (0x00069efb) postcard_pane_g6

0x8205,	// (0x00069f07) postcard_pane_g7_ParamLimits

0x8205,	// (0x00069f07) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000711f5) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000711f5) postcard_pane_g

0x8213,	// (0x00069f15) main_mp2_pane_g1_ParamLimits

0x8213,	// (0x00069f15) main_mp2_pane_g1

0x821f,	// (0x00069f21) main_mp2_pane_g2_ParamLimits

0x821f,	// (0x00069f21) main_mp2_pane_g2

0x822b,	// (0x00069f2d) main_mp2_pane_g3_ParamLimits

0x822b,	// (0x00069f2d) main_mp2_pane_g3

0x0002,

0xf502,	// (0x00071204) main_mp2_pane_g_ParamLimits

0xf502,	// (0x00071204) main_mp2_pane_g

0x8237,	// (0x00069f39) main_mp2_pane_t1_ParamLimits

0x8237,	// (0x00069f39) main_mp2_pane_t1

0x824e,	// (0x00069f50) main_mp2_pane_t2_ParamLimits

0x824e,	// (0x00069f50) main_mp2_pane_t2

0x8260,	// (0x00069f62) main_mp2_pane_t3_ParamLimits

0x8260,	// (0x00069f62) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0007120b) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0007120b) main_mp2_pane_t

0x8272,	// (0x00069f74) pec_content_pane_ParamLimits

0x8272,	// (0x00069f74) pec_content_pane

0x0c96,	// (0x00062998) scroll_pane_cp015

0x8284,	// (0x00069f86) pec_attribute_pane_ParamLimits

0x8284,	// (0x00069f86) pec_attribute_pane

0x8294,	// (0x00069f96) pec_content_pane_g1_ParamLimits

0x8294,	// (0x00069f96) pec_content_pane_g1

0x82a0,	// (0x00069fa2) pec_content_pane_t1_ParamLimits

0x82a0,	// (0x00069fa2) pec_content_pane_t1

0x82b2,	// (0x00069fb4) pec_content_pane_t2_ParamLimits

0x82b2,	// (0x00069fb4) pec_content_pane_t2

0x0001,

0xf510,	// (0x00071212) pec_content_pane_t_ParamLimits

0xf510,	// (0x00071212) pec_content_pane_t

0x82c4,	// (0x00069fc6) list_single_graphic_pane_cp01_ParamLimits

0x82c4,	// (0x00069fc6) list_single_graphic_pane_cp01

0x0703,	// (0x00062405) bg_popup_sub_pane_cp04

0x82f7,	// (0x00069ff9) popup_mup_playback_window_g1

0x8303,	// (0x0006a005) popup_mup_playback_window_t1

0x8318,	// (0x0006a01a) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00071217) popup_mup_playback_window_t

0x835c,	// (0x0006a05e) main_image_pane_g1_ParamLimits

0x835c,	// (0x0006a05e) main_image_pane_g1

0x8403,	// (0x0006a105) scroll_pane_cp018_ParamLimits

0x8403,	// (0x0006a105) scroll_pane_cp018

0x841b,	// (0x0006a11d) scroll_pane_cp016_ParamLimits

0x841b,	// (0x0006a11d) scroll_pane_cp016

0x844f,	// (0x0006a151) smil2_image_pane_ParamLimits

0x844f,	// (0x0006a151) smil2_image_pane

0x8483,	// (0x0006a185) smil2_root_pane_ParamLimits

0x8483,	// (0x0006a185) smil2_root_pane

0x84af,	// (0x0006a1b1) smil2_text_pane_ParamLimits

0x84af,	// (0x0006a1b1) smil2_text_pane

0x04a8,	// (0x000621aa) bg_list_pane_cp06

0x84f7,	// (0x0006a1f9) grid_radio_pane

0x04a8,	// (0x000621aa) bg_popup_window_pane_cp06

0x84ff,	// (0x0006a201) main_fmradio_pane_t1

0x748f,	// (0x00069191) heading_pane_cp04

0x850d,	// (0x0006a20f) main_fmradio_pane_t2

0x97ba,	// (0x0006b4bc) popup_cale_lunar_info_window_g1

0x851b,	// (0x0006a21d) main_fmradio_pane_t3

0x97c2,	// (0x0006b4c4) popup_cale_lunar_info_window_g2

0x8529,	// (0x0006a22b) main_fmradio_pane_t4

0x0001,

0x8537,	// (0x0006a239) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x000712f2) popup_cale_lunar_info_window_g

0xf52a,	// (0x0007122c) main_fmradio_pane_t

0x8545,	// (0x0006a247) wait_bar_pane_cp03

0x854d,	// (0x0006a24f) cell_fmradio_pane_ParamLimits

0x854d,	// (0x0006a24f) cell_fmradio_pane

0x8205,	// (0x00069f07) cell_fmradio_pane_g1_ParamLimits

0x8205,	// (0x00069f07) cell_fmradio_pane_g1

0x04a8,	// (0x000621aa) grid_highlight_pane_cp011

0x8560,	// (0x0006a262) poc_content_pane_ParamLimits

0x8560,	// (0x0006a262) poc_content_pane

0x8572,	// (0x0006a274) scroll_pane_cp019

0x857a,	// (0x0006a27c) popup_call_poc_act_window_ParamLimits

0x857a,	// (0x0006a27c) popup_call_poc_act_window

0x8587,	// (0x0006a289) popup_call_poc_inact_window_ParamLimits

0x8587,	// (0x0006a289) popup_call_poc_inact_window

0xf5c7,	// (0x000712c9) bg_popup_call_poc_act_pane_g

0x96b2,	// (0x0006b3b4) bg_popup_call_poc_inact_pane_g1

0x96ba,	// (0x0006b3bc) bg_popup_call_poc_inact_pane_g2

0x8594,	// (0x0006a296) popup_call_poc_act_window_g2

0x96c2,	// (0x0006b3c4) bg_popup_call_poc_inact_pane_g3

0x96ca,	// (0x0006b3cc) bg_popup_call_poc_inact_pane_g4

0x96d2,	// (0x0006b3d4) bg_popup_call_poc_inact_pane_g5

0x859c,	// (0x0006a29e) popup_call_poc_act_window_t1_ParamLimits

0x859c,	// (0x0006a29e) popup_call_poc_act_window_t1

0x85c4,	// (0x0006a2c6) popup_call_poc_act_window_t2_ParamLimits

0x85c4,	// (0x0006a2c6) popup_call_poc_act_window_t2

0x85ec,	// (0x0006a2ee) popup_call_poc_act_window_t3_ParamLimits

0x85ec,	// (0x0006a2ee) popup_call_poc_act_window_t3

0x8614,	// (0x0006a316) popup_call_poc_act_window_t4_ParamLimits

0x8614,	// (0x0006a316) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x00071237) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x00071237) popup_call_poc_act_window_t

0x96da,	// (0x0006b3dc) bg_popup_call_poc_inact_pane_g6

0x96e2,	// (0x0006b3e4) bg_popup_call_poc_inact_pane_g7

0x96ea,	// (0x0006b3ec) bg_popup_call_poc_inact_pane_g8

0x8626,	// (0x0006a328) popup_call_poc_inact_window_g2

0x96f2,	// (0x0006b3f4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x000712b6) bg_popup_call_poc_inact_pane_g

0x862e,	// (0x0006a330) popup_call_poc_inact_window_t1_ParamLimits

0x862e,	// (0x0006a330) popup_call_poc_inact_window_t1

0x8643,	// (0x0006a345) popup_call_poc_inact_window_t2_ParamLimits

0x8643,	// (0x0006a345) popup_call_poc_inact_window_t2

0x8658,	// (0x0006a35a) popup_call_poc_inact_window_t3_ParamLimits

0x8658,	// (0x0006a35a) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x00071240) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x00071240) popup_call_poc_inact_window_t

0x9c27,	// (0x0006b929) context_pane_ParamLimits

0x9c7a,	// (0x0006b97c) signal_pane_ParamLimits

0x7a2c,	// (0x0006972e) main_call2_pane

0x9bd7,	// (0x0006b8d9) popup_phob_thumbnail2_window_ParamLimits

0x9bd7,	// (0x0006b8d9) popup_phob_thumbnail2_window

0x8059,	// (0x00069d5b) aid_hotspot_pointer_arrow_pane

0x8061,	// (0x00069d63) aid_hotspot_pointer_hand_pane

0x98e9,	// (0x0006b5eb) phob_pre_status_pane_g5

0x5ed4,	// (0x00067bd6) cams_zoom_pane_ParamLimits

0x5ee0,	// (0x00067be2) image_vga_pane_ParamLimits

0x5eef,	// (0x00067bf1) main_camera_pane_g1_ParamLimits

0x5efd,	// (0x00067bff) main_camera_pane_g2_ParamLimits

0x5f0b,	// (0x00067c0d) main_camera_pane_g3_ParamLimits

0x5f17,	// (0x00067c19) main_camera_pane_g4_ParamLimits

0x5f23,	// (0x00067c25) main_camera_pane_g5_ParamLimits

0x5f2f,	// (0x00067c31) main_camera_pane_g6_ParamLimits

0x5f3b,	// (0x00067c3d) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x00070f3f) main_camera_pane_g_ParamLimits

0x5f47,	// (0x00067c49) main_camera_pane_t1_ParamLimits

0x5f59,	// (0x00067c5b) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x00070f50) main_camera_pane_t_ParamLimits

0x0703,	// (0x00062405) bg_popup_preview_window_pane_cp01_ParamLimits

0x0703,	// (0x00062405) bg_popup_preview_window_pane_cp01

0x866d,	// (0x0006a36f) popup_phob_thumbnail2_window_g1_ParamLimits

0x866d,	// (0x0006a36f) popup_phob_thumbnail2_window_g1

0x04a8,	// (0x000621aa) call2_cli_visual_pane

0x8688,	// (0x0006a38a) popup_call2_audio_conf_window_ParamLimits

0x8688,	// (0x0006a38a) popup_call2_audio_conf_window

0x869d,	// (0x0006a39f) popup_call2_audio_first_window_ParamLimits

0x869d,	// (0x0006a39f) popup_call2_audio_first_window

0x873b,	// (0x0006a43d) popup_call2_audio_in_window_ParamLimits

0x873b,	// (0x0006a43d) popup_call2_audio_in_window

0x877d,	// (0x0006a47f) popup_call2_audio_out_window_ParamLimits

0x877d,	// (0x0006a47f) popup_call2_audio_out_window

0x87df,	// (0x0006a4e1) popup_call2_audio_second_window_ParamLimits

0x87df,	// (0x0006a4e1) popup_call2_audio_second_window

0x883d,	// (0x0006a53f) popup_call2_audio_wait_window_ParamLimits

0x883d,	// (0x0006a53f) popup_call2_audio_wait_window

0x04a8,	// (0x000621aa) bg_popup_call2_act_pane_cp03

0x06e5,	// (0x000623e7) list_conf_pane_cp

0x887c,	// (0x0006a57e) popup_call2_audio_conf_window_t1

0x888a,	// (0x0006a58c) list_single_graphic_popup_conf2_pane_ParamLimits

0x888a,	// (0x0006a58c) list_single_graphic_popup_conf2_pane

0x7522,	// (0x00069224) list_highlight_pane_cp04

0x889d,	// (0x0006a59f) list_single_graphic_popup_conf2_pane_g1

0x7533,	// (0x00069235) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00071247) list_single_graphic_popup_conf2_pane_g

0x88a7,	// (0x0006a5a9) list_single_graphic_popup_conf2_pane_t1

0x88b5,	// (0x0006a5b7) bg_popup_call2_act_pane_cp01_ParamLimits

0x88b5,	// (0x0006a5b7) bg_popup_call2_act_pane_cp01

0x893f,	// (0x0006a641) call_type_pane_cp05_ParamLimits

0x893f,	// (0x0006a641) call_type_pane_cp05

0x8993,	// (0x0006a695) popup_call2_audio_second_window_g1_ParamLimits

0x8993,	// (0x0006a695) popup_call2_audio_second_window_g1

0x89e7,	// (0x0006a6e9) popup_call2_audio_second_window_g2_ParamLimits

0x89e7,	// (0x0006a6e9) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0007124c) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0007124c) popup_call2_audio_second_window_g

0x8a4c,	// (0x0006a74e) popup_call2_audio_second_window_t1_ParamLimits

0x8a4c,	// (0x0006a74e) popup_call2_audio_second_window_t1

0x8b07,	// (0x0006a809) popup_call2_audio_second_window_t2_ParamLimits

0x8b07,	// (0x0006a809) popup_call2_audio_second_window_t2

0x8b5a,	// (0x0006a85c) popup_call2_audio_second_window_t3_ParamLimits

0x8b5a,	// (0x0006a85c) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00071253) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00071253) popup_call2_audio_second_window_t

0x04a8,	// (0x000621aa) bg_popup_call2_in_pane_cp02

0x04b2,	// (0x000621b4) call_type_pane_cp04

0x04ba,	// (0x000621bc) popup_call2_audio_wait_window_g1

0x04c2,	// (0x000621c4) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00070e2c) popup_call2_audio_wait_window_g

0x04ca,	// (0x000621cc) popup_call2_audio_wait_window_t3

0x8c4d,	// (0x0006a94f) bg_popup_call2_act_pane_ParamLimits

0x8c4d,	// (0x0006a94f) bg_popup_call2_act_pane

0x8d0d,	// (0x0006aa0f) call_type_pane_cp03_ParamLimits

0x8d0d,	// (0x0006aa0f) call_type_pane_cp03

0x8d71,	// (0x0006aa73) popup_call2_audio_first_window_g1_ParamLimits

0x8d71,	// (0x0006aa73) popup_call2_audio_first_window_g1

0x8de1,	// (0x0006aae3) popup_call2_audio_first_window_g2_ParamLimits

0x8de1,	// (0x0006aae3) popup_call2_audio_first_window_g2

0x7391,	// (0x00069093) popup_call2_audio_first_window_g3_ParamLimits

0x7391,	// (0x00069093) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0007125c) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0007125c) popup_call2_audio_first_window_g

0x8ebf,	// (0x0006abc1) popup_call2_audio_first_window_t1_ParamLimits

0x8ebf,	// (0x0006abc1) popup_call2_audio_first_window_t1

0x8fc2,	// (0x0006acc4) popup_call2_audio_first_window_t4_ParamLimits

0x8fc2,	// (0x0006acc4) popup_call2_audio_first_window_t4

0x90a5,	// (0x0006ada7) popup_call2_audio_first_window_t5_ParamLimits

0x90a5,	// (0x0006ada7) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00071267) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00071267) popup_call2_audio_first_window_t

0x06fb,	// (0x000623fd) bg_popup_call2_act_pane_g1

0x97ca,	// (0x0006b4cc) popup_cale_lunar_info_window_t1

0x97d8,	// (0x0006b4da) popup_cale_lunar_info_window_t2

0x97e6,	// (0x0006b4e8) popup_cale_lunar_info_window_t3

0x04a8,	// (0x000621aa) bg_popup_call2_bubble_pane

0x91a6,	// (0x0006aea8) bg_popup_call2_in_pane_cp01_ParamLimits

0x91a6,	// (0x0006aea8) bg_popup_call2_in_pane_cp01

0x0184,	// (0x00061e86) call_type_pane_cp02

0x91ee,	// (0x0006aef0) popup_call2_audio_out_window_g1_ParamLimits

0x91ee,	// (0x0006aef0) popup_call2_audio_out_window_g1

0x921a,	// (0x0006af1c) popup_call2_audio_out_window_g2_ParamLimits

0x921a,	// (0x0006af1c) popup_call2_audio_out_window_g2

0x9242,	// (0x0006af44) popup_call2_audio_out_window_g3_ParamLimits

0x9242,	// (0x0006af44) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00071270) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00071270) popup_call2_audio_out_window_g

0x927d,	// (0x0006af7f) popup_call2_audio_out_window_t1_ParamLimits

0x927d,	// (0x0006af7f) popup_call2_audio_out_window_t1

0x92dc,	// (0x0006afde) popup_call2_audio_out_window_t2_ParamLimits

0x92dc,	// (0x0006afde) popup_call2_audio_out_window_t2

0x9330,	// (0x0006b032) popup_call2_audio_out_window_t3_ParamLimits

0x9330,	// (0x0006b032) popup_call2_audio_out_window_t3

0x9346,	// (0x0006b048) popup_call2_audio_out_window_t4_ParamLimits

0x9346,	// (0x0006b048) popup_call2_audio_out_window_t4

0x935c,	// (0x0006b05e) popup_call2_audio_out_window_t5_ParamLimits

0x935c,	// (0x0006b05e) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00071279) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00071279) popup_call2_audio_out_window_t

0x93c0,	// (0x0006b0c2) bg_popup_call2_in_pane_ParamLimits

0x93c0,	// (0x0006b0c2) bg_popup_call2_in_pane

0x941c,	// (0x0006b11e) popup_call2_audio_in_window_g1_ParamLimits

0x941c,	// (0x0006b11e) popup_call2_audio_in_window_g1

0x9454,	// (0x0006b156) popup_call2_audio_in_window_g2_ParamLimits

0x9454,	// (0x0006b156) popup_call2_audio_in_window_g2

0x948c,	// (0x0006b18e) popup_call2_audio_in_window_g3_ParamLimits

0x948c,	// (0x0006b18e) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00071286) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00071286) popup_call2_audio_in_window_g

0x94e4,	// (0x0006b1e6) popup_call2_audio_in_window_t1_ParamLimits

0x94e4,	// (0x0006b1e6) popup_call2_audio_in_window_t1

0x9564,	// (0x0006b266) popup_call2_audio_in_window_t2_ParamLimits

0x9564,	// (0x0006b266) popup_call2_audio_in_window_t2

0x95e4,	// (0x0006b2e6) popup_call2_audio_in_window_t3_ParamLimits

0x95e4,	// (0x0006b2e6) popup_call2_audio_in_window_t3

0x95fe,	// (0x0006b300) popup_call2_audio_in_window_t4_ParamLimits

0x95fe,	// (0x0006b300) popup_call2_audio_in_window_t4

0x9610,	// (0x0006b312) popup_call2_audio_in_window_t5_ParamLimits

0x9610,	// (0x0006b312) popup_call2_audio_in_window_t5

0x9625,	// (0x0006b327) popup_call2_audio_in_window_t6_ParamLimits

0x9625,	// (0x0006b327) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0007128f) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0007128f) popup_call2_audio_in_window_t

0x06fb,	// (0x000623fd) bg_popup_call2_in_pane_g1

0x97f4,	// (0x0006b4f6) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x000712f7) popup_cale_lunar_info_window_t

0x0703,	// (0x00062405) bg_popup_call2_rect_pane_ParamLimits

0x0703,	// (0x00062405) bg_popup_call2_rect_pane

0x04a8,	// (0x000621aa) call2_cli_visual_graphic_pane

0x04a8,	// (0x000621aa) call2_cli_visual_text_pane

0x9daf,	// (0x0006bab1) smil_status_volume_pane_g3

0x0002,

0x08b7,	// (0x000625b9) call2_cli_visual_graphic_pane_g1

0x08b7,	// (0x000625b9) call2_cli_visual_graphic_pane_g2

0x08b7,	// (0x000625b9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0007129c) call2_cli_visual_graphic_pane_g

0x9672,	// (0x0006b374) bg_popup_call2_rect_pane_g1

0x095f,	// (0x00062661) bg_popup_call2_rect_pane_g2

0x967a,	// (0x0006b37c) bg_popup_call2_rect_pane_g3

0x9682,	// (0x0006b384) bg_popup_call2_rect_pane_g4

0x968a,	// (0x0006b38c) bg_popup_call2_rect_pane_g5

0x9692,	// (0x0006b394) bg_popup_call2_rect_pane_g6

0x969a,	// (0x0006b39c) bg_popup_call2_rect_pane_g7

0x96a2,	// (0x0006b3a4) bg_popup_call2_rect_pane_g8

0x96aa,	// (0x0006b3ac) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x000712a3) bg_popup_call2_rect_pane_g

0x96b2,	// (0x0006b3b4) bg_popup_call2_bubble_pane_g1

0x96ba,	// (0x0006b3bc) bg_popup_call2_bubble_pane_g2

0x96c2,	// (0x0006b3c4) bg_popup_call2_bubble_pane_g3

0x96ca,	// (0x0006b3cc) bg_popup_call2_bubble_pane_g4

0x96d2,	// (0x0006b3d4) bg_popup_call2_bubble_pane_g5

0x96da,	// (0x0006b3dc) bg_popup_call2_bubble_pane_g6

0x96e2,	// (0x0006b3e4) bg_popup_call2_bubble_pane_g7

0x96ea,	// (0x0006b3ec) bg_popup_call2_bubble_pane_g8

0x96f2,	// (0x0006b3f4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x000712b6) bg_popup_call2_bubble_pane_g

0x5adb,	// (0x000677dd) aid_cale_week_size_cell_pane

0x5f6b,	// (0x00067c6d) aid_cams_cif_uncrop_pane_ParamLimits

0x5f6b,	// (0x00067c6d) aid_cams_cif_uncrop_pane

0x60ce,	// (0x00067dd0) aid_cams_size_cell_ParamLimits

0x60ce,	// (0x00067dd0) aid_cams_size_cell

0x60da,	// (0x00067ddc) grid_cams_pane_ParamLimits

0x60e8,	// (0x00067dea) linegrid_cams_pane_ParamLimits

0x617e,	// (0x00067e80) call_video_pane_t1

0x6197,	// (0x00067e99) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00070fa3) call_video_pane_t

0x66d7,	// (0x000683d9) aid_cale_month_size_cell_pane_ParamLimits

0x66d7,	// (0x000683d9) aid_cale_month_size_cell_pane

0xf63e,	// (0x00071340) smil_status_volume_pane_g

0x9dbc,	// (0x0006babe) volume_smil_pane_ParamLimits

0x0041,	// (0x00061d43) aid_popup2_width_pane

0x59d0,	// (0x000676d2) cell_qdial_pane_g4_ParamLimits

0x59d0,	// (0x000676d2) cell_qdial_pane_g4

0x77cc,	// (0x000694ce) aid_blid_cardinal_pane_ParamLimits

0x77dc,	// (0x000694de) aid_blid_destination_pane_ParamLimits

0x77dc,	// (0x000694de) aid_blid_destination_pane

0x0703,	// (0x00062405) bg_popup_call_poc_act_pane_ParamLimits

0x0703,	// (0x00062405) bg_popup_call_poc_act_pane

0x0703,	// (0x00062405) bg_popup_call_poc_inact_pane_ParamLimits

0x0703,	// (0x00062405) bg_popup_call_poc_inact_pane

0x9702,	// (0x0006b404) bg_popup_call_poc_act_pane_g1

0x970a,	// (0x0006b40c) bg_popup_call_poc_act_pane_g2

0x9712,	// (0x0006b414) bg_popup_call_poc_act_pane_g3

0x96ca,	// (0x0006b3cc) bg_popup_call_poc_act_pane_g4

0x96d2,	// (0x0006b3d4) bg_popup_call_poc_act_pane_g5

0x971a,	// (0x0006b41c) bg_popup_call_poc_act_pane_g6

0x96e2,	// (0x0006b3e4) bg_popup_call_poc_act_pane_g7

0x9722,	// (0x0006b424) bg_popup_call_poc_act_pane_g8

0x04a8,	// (0x000621aa) main_usb_pane

0x9b12,	// (0x0006b814) popup_cale_lunar_info_window

0x6434,	// (0x00068136) im_reading_pane_t1_ParamLimits

0x0bee,	// (0x000628f0) list_im_pane_ParamLimits

0x0bff,	// (0x00062901) scroll_pane_cp07_ParamLimits

0x04a8,	// (0x000621aa) grid_highlight_pane_cp012

0x0703,	// (0x00062405) mup_scale_pane_ParamLimits

0x7391,	// (0x00069093) main_usb_pane_g1_ParamLimits

0x7391,	// (0x00069093) main_usb_pane_g1

0x9742,	// (0x0006b444) main_usb_pane_g2_ParamLimits

0x9742,	// (0x0006b444) main_usb_pane_g2

0x0001,

0xf5de,	// (0x000712e0) main_usb_pane_g_ParamLimits

0xf5de,	// (0x000712e0) main_usb_pane_g

0x974e,	// (0x0006b450) main_usb_pane_t1_ParamLimits

0x974e,	// (0x0006b450) main_usb_pane_t1

0x9760,	// (0x0006b462) main_usb_pane_t2_ParamLimits

0x9760,	// (0x0006b462) main_usb_pane_t2

0x9772,	// (0x0006b474) main_usb_pane_t3_ParamLimits

0x9772,	// (0x0006b474) main_usb_pane_t3

0x9784,	// (0x0006b486) main_usb_pane_t4_ParamLimits

0x9784,	// (0x0006b486) main_usb_pane_t4

0x9796,	// (0x0006b498) main_usb_pane_t5_ParamLimits

0x9796,	// (0x0006b498) main_usb_pane_t5

0x97a8,	// (0x0006b4aa) main_usb_pane_t6_ParamLimits

0x97a8,	// (0x0006b4aa) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x000712e5) main_usb_pane_t_ParamLimits

0x7772,	// (0x00069474) aid_text_placing

0x777e,	// (0x00069480) main_location2_pane_t1_ParamLimits

0x7792,	// (0x00069494) main_location2_pane_t2_ParamLimits

0x77a6,	// (0x000694a8) main_location2_pane_t3_ParamLimits

0x77ba,	// (0x000694bc) main_location2_pane_t4_ParamLimits

0x77ba,	// (0x000694bc) main_location2_pane_t4

0xf402,	// (0x00071104) main_location2_pane_t_ParamLimits

0x0747,	// (0x00062449) find_pinb_pane_g2_ParamLimits

0x0747,	// (0x00062449) find_pinb_pane_g2

0x0001,

0xf150,	// (0x00070e52) find_pinb_pane_g_ParamLimits

0xf150,	// (0x00070e52) find_pinb_pane_g

0x0753,	// (0x00062455) find_pinb_pane_t1_ParamLimits

0x0765,	// (0x00062467) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00070e57) find_pinb_pane_t_ParamLimits

0x04a8,	// (0x000621aa) main_call3_pane

0x6a58,	// (0x0006875a) cale_month_day_heading_pane_t1_ParamLimits

0x6ab6,	// (0x000687b8) cale_month_day_heading_pane_t2_ParamLimits

0x6b1b,	// (0x0006881d) cale_month_day_heading_pane_t3_ParamLimits

0x6b80,	// (0x00068882) cale_month_day_heading_pane_t4_ParamLimits

0x6be5,	// (0x000688e7) cale_month_day_heading_pane_t5_ParamLimits

0x6c4a,	// (0x0006894c) cale_month_day_heading_pane_t6_ParamLimits

0x6cb7,	// (0x000689b9) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00070fdb) cale_month_day_heading_pane_t_ParamLimits

0x6ebf,	// (0x00068bc1) smil_status_volume_pane

0x81af,	// (0x00069eb1) postcard_address_pane_ParamLimits

0x81af,	// (0x00069eb1) postcard_address_pane

0x81bb,	// (0x00069ebd) postcard_message_pane_ParamLimits

0x81bb,	// (0x00069ebd) postcard_message_pane

0x963a,	// (0x0006b33c) call2_cli_visual_pane_t1_ParamLimits

0x963a,	// (0x0006b33c) call2_cli_visual_pane_t1

0x9f0f,	// (0x0006bc11) postcard_message_pane_t1_ParamLimits

0x9f0f,	// (0x0006bc11) postcard_message_pane_t1

0x9ef8,	// (0x0006bbfa) postcard_address_pane_t1_ParamLimits

0x9ef8,	// (0x0006bbfa) postcard_address_pane_t1

0x9ee9,	// (0x0006bbeb) popup_call3_audio_in_window_ParamLimits

0x9ee9,	// (0x0006bbeb) popup_call3_audio_in_window

0x9dd1,	// (0x0006bad3) bg_popup_call3_in_pane_ParamLimits

0x9dd1,	// (0x0006bad3) bg_popup_call3_in_pane

0x9e2f,	// (0x0006bb31) popup_call3_audio_in_window_g1_ParamLimits

0x9e2f,	// (0x0006bb31) popup_call3_audio_in_window_g1

0x9e47,	// (0x0006bb49) popup_call3_audio_in_window_g2_ParamLimits

0x9e47,	// (0x0006bb49) popup_call3_audio_in_window_g2

0x9e5f,	// (0x0006bb61) popup_call3_audio_in_window_g3_ParamLimits

0x9e5f,	// (0x0006bb61) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00071347) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00071347) popup_call3_audio_in_window_g

0x9e87,	// (0x0006bb89) popup_call3_audio_in_window_t1_ParamLimits

0x9e87,	// (0x0006bb89) popup_call3_audio_in_window_t1

0x9eaf,	// (0x0006bbb1) popup_call3_audio_in_window_t2_ParamLimits

0x9eaf,	// (0x0006bbb1) popup_call3_audio_in_window_t2

0x9ed7,	// (0x0006bbd9) popup_call3_audio_in_window_t3_ParamLimits

0x9ed7,	// (0x0006bbd9) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00071350) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00071350) popup_call3_audio_in_window_t

0x7a2c,	// (0x0006972e) bg_popup_call3_rect_pane

0x9672,	// (0x0006b374) bg_popup_call3_rect_pane_g1

0x095f,	// (0x00062661) bg_popup_call3_rect_pane_g2

0x967a,	// (0x0006b37c) bg_popup_call3_rect_pane_g3

0x9682,	// (0x0006b384) bg_popup_call3_rect_pane_g4

0x968a,	// (0x0006b38c) bg_popup_call3_rect_pane_g5

0x9692,	// (0x0006b394) bg_popup_call3_rect_pane_g6

0x969a,	// (0x0006b39c) bg_popup_call3_rect_pane_g7

0x7d58,	// (0x00069a5a) mup_visualizer_osc_pane

0x7d60,	// (0x00069a62) mup_visualizer_spec_pane

0x9df1,	// (0x0006baf3) call3_video_qcif_pane_ParamLimits

0x9df1,	// (0x0006baf3) call3_video_qcif_pane

0x9e01,	// (0x0006bb03) call3_video_qcif_uncrop_pane_ParamLimits

0x9e01,	// (0x0006bb03) call3_video_qcif_uncrop_pane

0x9e0d,	// (0x0006bb0f) call3_video_subqcif_pane_ParamLimits

0x9e0d,	// (0x0006bb0f) call3_video_subqcif_pane

0x9e1f,	// (0x0006bb21) call3_video_subqcif_uncrop_pane_ParamLimits

0x9e1f,	// (0x0006bb21) call3_video_subqcif_uncrop_pane

0x9e77,	// (0x0006bb79) popup_call3_audio_in_window_g4_ParamLimits

0x9e77,	// (0x0006bb79) popup_call3_audio_in_window_g4

0x9d70,	// (0x0006ba72) mup_spec_half_pane

0x9d79,	// (0x0006ba7b) mup_spec_half_pane_cp

0x9d5e,	// (0x0006ba60) mup_osc_middle_pane

0x9d67,	// (0x0006ba69) mup_visualizer_osc_pane_g1

0x9d3f,	// (0x0006ba41) mup_spec_bar_pane_ParamLimits

0x9d3f,	// (0x0006ba41) mup_spec_bar_pane

0x9d2c,	// (0x0006ba2e) mup_spec_bar_pane_g1

0x9d36,	// (0x0006ba38) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007133b) mup_spec_bar_pane_g

0x5adb,	// (0x000677dd) aid_cale_week_size_cell_pane_ParamLimits

0x5aee,	// (0x000677f0) bg_cale_heading_pane_ParamLimits

0x09db,	// (0x000626dd) bg_cale_pane_cp01_ParamLimits

0x5b02,	// (0x00067804) cale_week_corner_pane_ParamLimits

0x5b13,	// (0x00067815) cale_week_day_heading_pane_ParamLimits

0x5b27,	// (0x00067829) cale_week_scroll_pane_g1_ParamLimits

0x5b38,	// (0x0006783a) cale_week_scroll_pane_g2_ParamLimits

0x5b49,	// (0x0006784b) cale_week_scroll_pane_g3_ParamLimits

0x5b5a,	// (0x0006785c) cale_week_scroll_pane_g4_ParamLimits

0x5b6b,	// (0x0006786d) cale_week_scroll_pane_g5_ParamLimits

0x5b7c,	// (0x0006787e) cale_week_scroll_pane_g6_ParamLimits

0x5b8d,	// (0x0006788f) cale_week_scroll_pane_g7_ParamLimits

0x5ba0,	// (0x000678a2) cale_week_scroll_pane_g8_ParamLimits

0x5bb3,	// (0x000678b5) cale_week_scroll_pane_g9_ParamLimits

0x5bc4,	// (0x000678c6) cale_week_scroll_pane_g10_ParamLimits

0x5bd5,	// (0x000678d7) cale_week_scroll_pane_g11_ParamLimits

0x5be6,	// (0x000678e8) cale_week_scroll_pane_g12_ParamLimits

0x5bf7,	// (0x000678f9) cale_week_scroll_pane_g13_ParamLimits

0x5c08,	// (0x0006790a) cale_week_scroll_pane_g14_ParamLimits

0x5c19,	// (0x0006791b) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x00070ee3) cale_week_scroll_pane_g_ParamLimits

0x5c2a,	// (0x0006792c) cale_week_time_pane_ParamLimits

0x5c3d,	// (0x0006793f) grid_cale_week_pane_ParamLimits

0x09f4,	// (0x000626f6) listscroll_cale_week_pane_t1

0x5c52,	// (0x00067954) scroll_pane_cp08_ParamLimits

0x673b,	// (0x0006843d) cale_month_corner_pane_ParamLimits

0x6a05,	// (0x00068707) cale_month_pane_t1

0x6a17,	// (0x00068719) cale_month_week_pane_ParamLimits

0x7391,	// (0x00069093) popup_call_status_window_g1_ParamLimits

0x739f,	// (0x000690a1) popup_call_status_window_g2_ParamLimits

0x73ab,	// (0x000690ad) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0007108b) popup_call_status_window_g_ParamLimits

0x7410,	// (0x00069112) aid_call2_pane

0x44b5,	// (0x000661b7) msg_header_pane_g1

0x81af,	// (0x00069eb1) postcard_address2_pane_ParamLimits

0x81af,	// (0x00069eb1) postcard_address2_pane

0x81bb,	// (0x00069ebd) postcard_message2_pane_ParamLimits

0x81bb,	// (0x00069ebd) postcard_message2_pane

0x9c88,	// (0x0006b98a) message2_row_pane_ParamLimits

0x9c88,	// (0x0006b98a) message2_row_pane

0x9ca5,	// (0x0006b9a7) address2_row_pane_ParamLimits

0x9ca5,	// (0x0006b9a7) address2_row_pane

0x9cb8,	// (0x0006b9ba) postcard_message2_row_pane_g1

0x9cc0,	// (0x0006b9c2) postcard_message2_row_pane_t1

0x9cb8,	// (0x0006b9ba) address2_row_pane_g1

0x9cc0,	// (0x0006b9c2) address2_row_pane_t1

0x5e4a,	// (0x00067b4c) aid_size_cell_vorec

0x04a8,	// (0x000621aa) main_rss_pane

0x9cce,	// (0x0006b9d0) rss_list_single_pane_ParamLimits

0x9cce,	// (0x0006b9d0) rss_list_single_pane

0x9d10,	// (0x0006ba12) rss_list_single_pane_t1

0x9d1e,	// (0x0006ba20) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00071336) rss_list_single_pane_t

0x04a8,	// (0x000621aa) main_camera2_pane

0x04a8,	// (0x000621aa) main_video2_pane

0x9f73,	// (0x0006bc75) cams_zoom_pane_cp2_ParamLimits

0x9f73,	// (0x0006bc75) cams_zoom_pane_cp2

0x9f7f,	// (0x0006bc81) image2_vga_pane_ParamLimits

0x9f7f,	// (0x0006bc81) image2_vga_pane

0x9f8e,	// (0x0006bc90) main_camera2_pane_g1_ParamLimits

0x9f8e,	// (0x0006bc90) main_camera2_pane_g1

0x9f9a,	// (0x0006bc9c) main_camera2_pane_g2_ParamLimits

0x9f9a,	// (0x0006bc9c) main_camera2_pane_g2

0x9fa6,	// (0x0006bca8) main_camera2_pane_g3_ParamLimits

0x9fa6,	// (0x0006bca8) main_camera2_pane_g3

0x9fb2,	// (0x0006bcb4) main_camera2_pane_g4_ParamLimits

0x9fb2,	// (0x0006bcb4) main_camera2_pane_g4

0x9fbe,	// (0x0006bcc0) main_camera2_pane_g5_ParamLimits

0x9fbe,	// (0x0006bcc0) main_camera2_pane_g5

0x9fca,	// (0x0006bccc) main_camera2_pane_g6_ParamLimits

0x9fca,	// (0x0006bccc) main_camera2_pane_g6

0x9fd6,	// (0x0006bcd8) main_camera2_pane_g7_ParamLimits

0x9fd6,	// (0x0006bcd8) main_camera2_pane_g7

0x9fe2,	// (0x0006bce4) main_camera2_pane_g8_ParamLimits

0x9fe2,	// (0x0006bce4) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00071357) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00071357) main_camera2_pane_g

0x9ffa,	// (0x0006bcfc) main_camera2_pane_t1_ParamLimits

0x9ffa,	// (0x0006bcfc) main_camera2_pane_t1

0xa00c,	// (0x0006bd0e) main_camera2_pane_t2_ParamLimits

0xa00c,	// (0x0006bd0e) main_camera2_pane_t2

0xa01e,	// (0x0006bd20) main_camera2_pane_t3_ParamLimits

0xa01e,	// (0x0006bd20) main_camera2_pane_t3

0xa030,	// (0x0006bd32) main_camera2_pane_t4_ParamLimits

0xa030,	// (0x0006bd32) main_camera2_pane_t4

0x0006,

0xf668,	// (0x0007136a) main_camera2_pane_t_ParamLimits

0xf668,	// (0x0007136a) main_camera2_pane_t

0xa092,	// (0x0006bd94) cams_zoom_pane_cp4_ParamLimits

0xa092,	// (0x0006bd94) cams_zoom_pane_cp4

0xa0a2,	// (0x0006bda4) image2_cif_pane_ParamLimits

0xa0a2,	// (0x0006bda4) image2_cif_pane

0xa0b7,	// (0x0006bdb9) image2_subqcif_pane_ParamLimits

0xa0b7,	// (0x0006bdb9) image2_subqcif_pane

0xa0c6,	// (0x0006bdc8) main_video2_pane_g1_ParamLimits

0xa0c6,	// (0x0006bdc8) main_video2_pane_g1

0xa0d8,	// (0x0006bdda) main_video2_pane_g2_ParamLimits

0xa0d8,	// (0x0006bdda) main_video2_pane_g2

0xa0e8,	// (0x0006bdea) main_video2_pane_g3_ParamLimits

0xa0e8,	// (0x0006bdea) main_video2_pane_g3

0xa0f8,	// (0x0006bdfa) main_video2_pane_g4_ParamLimits

0xa0f8,	// (0x0006bdfa) main_video2_pane_g4

0xa108,	// (0x0006be0a) main_video2_pane_g5_ParamLimits

0xa108,	// (0x0006be0a) main_video2_pane_g5

0xa118,	// (0x0006be1a) main_video2_pane_g6_ParamLimits

0xa118,	// (0x0006be1a) main_video2_pane_g6

0x0005,

0xf677,	// (0x00071379) main_video2_pane_g_ParamLimits

0xf677,	// (0x00071379) main_video2_pane_g

0xa12a,	// (0x0006be2c) main_video2_pane_t1_ParamLimits

0xa12a,	// (0x0006be2c) main_video2_pane_t1

0xa144,	// (0x0006be46) main_video2_pane_t2_ParamLimits

0xa144,	// (0x0006be46) main_video2_pane_t2

0xa16a,	// (0x0006be6c) main_video2_pane_t3_ParamLimits

0xa16a,	// (0x0006be6c) main_video2_pane_t3

0x0002,

0xf684,	// (0x00071386) main_video2_pane_t_ParamLimits

0xf684,	// (0x00071386) main_video2_pane_t

0x9949,	// (0x0006b64b) call_muted_g2

0x0001,

0xf626,	// (0x00071328) call_muted_g

0x04a8,	// (0x000621aa) main_mup2_pane

0xa190,	// (0x0006be92) main_mup2_pane_g1_ParamLimits

0xa190,	// (0x0006be92) main_mup2_pane_g1

0xa19c,	// (0x0006be9e) main_mup2_pane_g2_ParamLimits

0xa19c,	// (0x0006be9e) main_mup2_pane_g2

0xa4c8,	// (0x0006c1ca) main_mup_pane_g13_cp1

0xa4d0,	// (0x0006c1d2) mup_volume_pane_cp1

0xa1bc,	// (0x0006bebe) main_mup2_pane_g4_ParamLimits

0xa1bc,	// (0x0006bebe) main_mup2_pane_g4

0xa1d1,	// (0x0006bed3) main_mup2_pane_g5_ParamLimits

0xa1d1,	// (0x0006bed3) main_mup2_pane_g5

0xa1e6,	// (0x0006bee8) main_mup2_pane_g6_ParamLimits

0xa1e6,	// (0x0006bee8) main_mup2_pane_g6

0xa1fb,	// (0x0006befd) main_mup2_pane_g7_ParamLimits

0xa1fb,	// (0x0006befd) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x0007138d) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x0007138d) main_mup2_pane_g

0xa217,	// (0x0006bf19) main_mup2_pane_t1_ParamLimits

0xa217,	// (0x0006bf19) main_mup2_pane_t1

0xa22e,	// (0x0006bf30) main_mup2_pane_t2_ParamLimits

0xa22e,	// (0x0006bf30) main_mup2_pane_t2

0xa245,	// (0x0006bf47) main_mup2_pane_t3_ParamLimits

0xa245,	// (0x0006bf47) main_mup2_pane_t3

0xa25c,	// (0x0006bf5e) main_mup2_pane_t4_ParamLimits

0xa25c,	// (0x0006bf5e) main_mup2_pane_t4

0xa276,	// (0x0006bf78) main_mup2_pane_t5_ParamLimits

0xa276,	// (0x0006bf78) main_mup2_pane_t5

0xa290,	// (0x0006bf92) main_mup2_pane_t6_ParamLimits

0xa290,	// (0x0006bf92) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x0007139c) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x0007139c) main_mup2_pane_t

0xa2c8,	// (0x0006bfca) mup2_visualizer_pane_ParamLimits

0xa2c8,	// (0x0006bfca) mup2_visualizer_pane

0xa2fe,	// (0x0006c000) mup_progress_pane_cp_ParamLimits

0xa2fe,	// (0x0006c000) mup_progress_pane_cp

0xa4aa,	// (0x0006c1ac) mup_volume_pane_cp_ParamLimits

0xa4aa,	// (0x0006c1ac) mup_volume_pane_cp

0xa315,	// (0x0006c017) mup2_visualizer_pane_g1_ParamLimits

0xa315,	// (0x0006c017) mup2_visualizer_pane_g1

0xa32a,	// (0x0006c02c) mup2_visualizer_pane_g2_ParamLimits

0xa32a,	// (0x0006c02c) mup2_visualizer_pane_g2

0xa336,	// (0x0006c038) mup2_visualizer_pane_g3_ParamLimits

0xa336,	// (0x0006c038) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x000713a9) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x000713a9) mup2_visualizer_pane_g

0x84ef,	// (0x0006a1f1) aid_size_cell_fmradio

0x9a90,	// (0x0006b792) aid_height_parent_landcape

0x0c7d,	// (0x0006297f) wml_content_pane_cp

0x0c85,	// (0x00062987) wml_tabs_pane

0x0c8e,	// (0x00062990) popup_wml_miniature_window

0x0c96,	// (0x00062998) scroll_pane_cp021

0x0caa,	// (0x000629ac) wml_content_pane_comp8

0x04a8,	// (0x000621aa) bg_popup_sub_pane_cp05

0xa356,	// (0x0006c058) popup_wml_miniature_window_g1

0xa35e,	// (0x0006c060) wml_miniature_view_pane

0xa366,	// (0x0006c068) aid_size_wml_view

0xa36e,	// (0x0006c070) wml_miniature_view_pane_g1

0xa377,	// (0x0006c079) wml_miniature_view_pane_g2

0xa380,	// (0x0006c082) wml_miniature_view_pane_g3

0xa388,	// (0x0006c08a) wml_miniature_view_pane_g4

0xa390,	// (0x0006c092) wml_miniature_view_pane_g5

0xa398,	// (0x0006c09a) wml_miniature_view_pane_g6

0xa3a0,	// (0x0006c0a2) wml_miniature_view_pane_g7

0xa3a8,	// (0x0006c0aa) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x000713b0) wml_miniature_view_pane_g

0xa190,	// (0x0006be92) background_graphic_ParamLimits

0xa190,	// (0x0006be92) background_graphic

0xa3b0,	// (0x0006c0b2) wml_tabs_2_pane

0xa3b9,	// (0x0006c0bb) wml_tabs_3_pane_ParamLimits

0xa3b9,	// (0x0006c0bb) wml_tabs_3_pane

0xa3cb,	// (0x0006c0cd) wml_tabs_4_pane_ParamLimits

0xa3cb,	// (0x0006c0cd) wml_tabs_4_pane

0xa3e1,	// (0x0006c0e3) wml_tabs_5_pane_ParamLimits

0xa3e1,	// (0x0006c0e3) wml_tabs_5_pane

0xa3fb,	// (0x0006c0fd) wml_tabs_pane_g2_ParamLimits

0xa3fb,	// (0x0006c0fd) wml_tabs_pane_g2

0xa40f,	// (0x0006c111) wml_tabs_pane_g3_ParamLimits

0xa40f,	// (0x0006c111) wml_tabs_pane_g3

0xa423,	// (0x0006c125) wml_tabs_2_active_pane_ParamLimits

0xa423,	// (0x0006c125) wml_tabs_2_active_pane

0xa433,	// (0x0006c135) wml_tabs_2_passive_pane_ParamLimits

0xa433,	// (0x0006c135) wml_tabs_2_passive_pane

0xa443,	// (0x0006c145) wml_tabs_3_active_pane_cp_ParamLimits

0xa443,	// (0x0006c145) wml_tabs_3_active_pane_cp

0xa454,	// (0x0006c156) wml_tabs_3_passive_pane_ParamLimits

0xa454,	// (0x0006c156) wml_tabs_3_passive_pane

0xa465,	// (0x0006c167) wml_tabs_3_passive_pane_cp_ParamLimits

0xa465,	// (0x0006c167) wml_tabs_3_passive_pane_cp

0xa476,	// (0x0006c178) tabs_4_active_pane

0xa47e,	// (0x0006c180) tabs_4_passive_pane

0xa486,	// (0x0006c188) tabs_4_passive_pane_cp

0xa48e,	// (0x0006c190) tabs_4_passive_pane_cp2

0x96fa,	// (0x0006b3fc) aid_height_text

0x7d21,	// (0x00069a23) mup_volume_cont_pane_ParamLimits

0x7d21,	// (0x00069a23) mup_volume_cont_pane

0x5648,	// (0x0006734a) aid_size_cell_pinb

0x0733,	// (0x00062435) aid_size_list_pinb

0xa2e7,	// (0x0006bfe9) mup2_volume_cont_pane_ParamLimits

0xa2e7,	// (0x0006bfe9) mup2_volume_cont_pane

0xa496,	// (0x0006c198) mup2_volume_cont_pane_g1_ParamLimits

0xa496,	// (0x0006c198) mup2_volume_cont_pane_g1

0x52b9,	// (0x00066fbb) aid_size_cell_touch_ParamLimits

0x52b9,	// (0x00066fbb) aid_size_cell_touch

0x5528,	// (0x0006722a) touch_pane_ParamLimits

0x5528,	// (0x0006722a) touch_pane

0x002f,	// (0x00061d31) main_rss2_pane

0xa4d8,	// (0x0006c1da) listscroll_rss2_pane

0xa4e1,	// (0x0006c1e3) rss2_navigation_pane

0xa4e9,	// (0x0006c1eb) list_rss2_pane

0x762c,	// (0x0006932e) scroll_pane_cp22

0xa4f1,	// (0x0006c1f3) rss2_navigation_pane_g1

0xa4fa,	// (0x0006c1fc) rss2_navigation_pane_g2

0xa502,	// (0x0006c204) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x000713c1) rss2_navigation_pane_g

0xa50a,	// (0x0006c20c) rss2_navigation_pane_t1

0xa518,	// (0x0006c21a) rss2_list_single_pane_ParamLimits

0xa518,	// (0x0006c21a) rss2_list_single_pane

0xa554,	// (0x0006c256) rss2_list_single_pane_t2

0xa562,	// (0x0006c264) rss2_list_single_pane_t3_ParamLimits

0xa562,	// (0x0006c264) rss2_list_single_pane_t3

0xa57f,	// (0x0006c281) rss2_list_single_pane_t4

0x6ea9,	// (0x00068bab) smil_status_pane_g1

0x9abd,	// (0x0006b7bf) main_image2_pane_ParamLimits

0x9abd,	// (0x0006b7bf) main_image2_pane

0x9fee,	// (0x0006bcf0) main_camera2_pane_g9_ParamLimits

0x9fee,	// (0x0006bcf0) main_camera2_pane_g9

0xa042,	// (0x0006bd44) main_camera2_pane_t5_ParamLimits

0xa042,	// (0x0006bd44) main_camera2_pane_t5

0xa054,	// (0x0006bd56) main_camera2_pane_t6_ParamLimits

0xa054,	// (0x0006bd56) main_camera2_pane_t6

0xa58d,	// (0x0006c28f) main_image2_pane_g1_ParamLimits

0xa58d,	// (0x0006c28f) main_image2_pane_g1

0x84d9,	// (0x0006a1db) smil2_video_pane_ParamLimits

0x84d9,	// (0x0006a1db) smil2_video_pane

0x422c,	// (0x00065f2e) aid_zoom_text_primary_cp

0x008d,	// (0x00061d8f) popup_preview_fixed_window

0x0be6,	// (0x000628e8) im_reading_pane_g1

0x9f38,	// (0x0006bc3a) cams2_bc_adjust_pane_cp_ParamLimits

0x9f38,	// (0x0006bc3a) cams2_bc_adjust_pane_cp

0xa084,	// (0x0006bd86) cams2_bc_adjust_pane_ParamLimits

0xa084,	// (0x0006bd86) cams2_bc_adjust_pane

0xa599,	// (0x0006c29b) cams2_bc_adjust_pane_g1

0xa5a1,	// (0x0006c2a3) cams2_slider_pane

0xa5aa,	// (0x0006c2ac) cams2_slider_pane_g1

0xa5b3,	// (0x0006c2b5) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x000713c8) cams2_slider_pane_g

0x571e,	// (0x00067420) calc_display_pane_ParamLimits

0x573c,	// (0x0006743e) calc_paper_pane_ParamLimits

0x5758,	// (0x0006745a) grid_calc_pane_ParamLimits

0x7472,	// (0x00069174) popup_clock_digital_window_t1_ParamLimits

0x83a0,	// (0x0006a0a2) main_image_pane_t1

0x5704,	// (0x00067406) aid_size_cell_calc_ParamLimits

0x5704,	// (0x00067406) aid_size_cell_calc

0x9aee,	// (0x0006b7f0) popup_blid_sat_info2_window_ParamLimits

0x9aee,	// (0x0006b7f0) popup_blid_sat_info2_window

0xa5d5,	// (0x0006c2d7) aid_size_cell_blid

0xa5dd,	// (0x0006c2df) bg_popup_window_pane_cp07

0xa600,	// (0x0006c302) grid_popup_blid_pane

0xe6b1,	// (0x000703b3) heading_pane_cp05_ParamLimits

0xe6b1,	// (0x000703b3) heading_pane_cp05

0xe77b,	// (0x0007047d) cell_popup_blid_pane_ParamLimits

0xe77b,	// (0x0007047d) cell_popup_blid_pane

0xe7a1,	// (0x000704a3) cell_popup_blid_pane_g1

0xe7a9,	// (0x000704ab) cell_popup_blid_pane_t1

0xa2ad,	// (0x0006bfaf) mup2_indicator_pane_ParamLimits

0xa2ad,	// (0x0006bfaf) mup2_indicator_pane

0x7a2c,	// (0x0006972e) mup2_visualizer_osc_pane

0xa344,	// (0x0006c046) mup2_visualizer_spec_pane_ParamLimits

0xa344,	// (0x0006c046) mup2_visualizer_spec_pane

0xa60a,	// (0x0006c30c) mup2_spec_half_pane

0xa613,	// (0x0006c315) mup2_spec_half_pane_cp

0xa61d,	// (0x0006c31f) mup2_spec_bar_pane_ParamLimits

0xa61d,	// (0x0006c31f) mup2_spec_bar_pane

0x9d2c,	// (0x0006ba2e) mup2_spec_bar_pane_g1

0x9d36,	// (0x0006ba38) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x0007133b) mup2_spec_bar_pane_g

0xa63c,	// (0x0006c33e) mup2_osc_middle_pane

0x9d67,	// (0x0006ba69) mup2_visualizer_osc_pane_g1

0x00b7,	// (0x00061db9) popup_number_entry_window_t1_ParamLimits

0x00ca,	// (0x00061dcc) popup_number_entry_window_t2_ParamLimits

0x00dc,	// (0x00061dde) popup_number_entry_window_t3_ParamLimits

0x557f,	// (0x00067281) popup_number_entry_window_t5_ParamLimits

0x557f,	// (0x00067281) popup_number_entry_window_t5

0xf0fb,	// (0x00070dfd) popup_number_entry_window_t_ParamLimits

0x00ee,	// (0x00061df0) text_title_cp2_ParamLimits

0x8069,	// (0x00069d6b) aid_hotspot_pointer_text2_pane

0x8103,	// (0x00069e05) main_viewer_pane_g9_ParamLimits

0x8103,	// (0x00069e05) main_viewer_pane_g9

0x6a05,	// (0x00068707) cale_month_pane_t1_ParamLimits

0x6faa,	// (0x00068cac) bg_cale_pane_ParamLimits

0x6fc2,	// (0x00068cc4) list_cale_pane_ParamLimits

0x09f4,	// (0x000626f6) listscroll_cale_day_pane_t1

0x6fd3,	// (0x00068cd5) scroll_pane_cp09_ParamLimits

0x7dce,	// (0x00069ad0) main_mup_eq_pane_t1_ParamLimits

0x7dce,	// (0x00069ad0) main_mup_eq_pane_t1

0x7de8,	// (0x00069aea) main_mup_eq_pane_t2_ParamLimits

0x7de8,	// (0x00069aea) main_mup_eq_pane_t2

0x7e00,	// (0x00069b02) main_mup_eq_pane_t3_ParamLimits

0x7e00,	// (0x00069b02) main_mup_eq_pane_t3

0x7e18,	// (0x00069b1a) main_mup_eq_pane_t4_ParamLimits

0x7e18,	// (0x00069b1a) main_mup_eq_pane_t4

0x7e30,	// (0x00069b32) main_mup_eq_pane_t5_ParamLimits

0x7e30,	// (0x00069b32) main_mup_eq_pane_t5

0x7e48,	// (0x00069b4a) main_mup_eq_pane_t6_ParamLimits

0x7e48,	// (0x00069b4a) main_mup_eq_pane_t6

0x7e5c,	// (0x00069b5e) main_mup_eq_pane_t7_ParamLimits

0x7e5c,	// (0x00069b5e) main_mup_eq_pane_t7

0x7e70,	// (0x00069b72) main_mup_eq_pane_t8_ParamLimits

0x7e70,	// (0x00069b72) main_mup_eq_pane_t8

0x7e86,	// (0x00069b88) main_mup_eq_pane_t9_ParamLimits

0x7e86,	// (0x00069b88) main_mup_eq_pane_t9

0x7e9e,	// (0x00069ba0) main_mup_eq_pane_t10_ParamLimits

0x7e9e,	// (0x00069ba0) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0007118a) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0007118a) main_mup_eq_pane_t

0x7f5b,	// (0x00069c5d) mup_equalizer_pane_cp5_ParamLimits

0x7f71,	// (0x00069c73) mup_equalizer_pane_cp6_ParamLimits

0x7f89,	// (0x00069c8b) mup_equalizer_pane_cp7_ParamLimits

0x002f,	// (0x00061d31) main_gallery_pane

0x9d81,	// (0x0006ba83) smil2_volume_pane

0x9d89,	// (0x0006ba8b) smil_status_volume_pane_g1_ParamLimits

0x9d9c,	// (0x0006ba9e) smil_status_volume_pane_g2_ParamLimits

0x9daf,	// (0x0006bab1) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00071340) smil_status_volume_pane_g_ParamLimits

0xa5dd,	// (0x0006c2df) bg_popup_window_pane_cp07_ParamLimits

0xa5eb,	// (0x0006c2ed) blid_firmament_pane

0xa645,	// (0x0006c347) aid_size_cell_gallery_ParamLimits

0xa645,	// (0x0006c347) aid_size_cell_gallery

0xa653,	// (0x0006c355) grid_gallery_pane_ParamLimits

0xa653,	// (0x0006c355) grid_gallery_pane

0xa663,	// (0x0006c365) cell_gallery_pane_ParamLimits

0xa663,	// (0x0006c365) cell_gallery_pane

0xe7b7,	// (0x000704b9) bg_cell_gallery_focus_pane_ParamLimits

0xe7b7,	// (0x000704b9) bg_cell_gallery_focus_pane

0xe7c9,	// (0x000704cb) cell_gallery_pane_g1_ParamLimits

0xe7c9,	// (0x000704cb) cell_gallery_pane_g1

0xa6b1,	// (0x0006c3b3) cell_gallery_pane_g2_ParamLimits

0xa6b1,	// (0x0006c3b3) cell_gallery_pane_g2

0xa6be,	// (0x0006c3c0) cell_gallery_pane_g3_ParamLimits

0xa6be,	// (0x0006c3c0) cell_gallery_pane_g3

0xe7d5,	// (0x000704d7) cell_gallery_pane_g4_ParamLimits

0xe7d5,	// (0x000704d7) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x000713ee) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x000713ee) cell_gallery_pane_g

0xe7e1,	// (0x000704e3) bg_cell_gallery_focus_pane_g1

0xe7e9,	// (0x000704eb) bg_cell_gallery_focus_pane_g2

0xe7f1,	// (0x000704f3) bg_cell_gallery_focus_pane_g3

0xe7f9,	// (0x000704fb) bg_cell_gallery_focus_pane_g4

0xe801,	// (0x00070503) bg_cell_gallery_focus_pane_g5

0xe809,	// (0x0007050b) bg_cell_gallery_focus_pane_g6

0xe811,	// (0x00070513) bg_cell_gallery_focus_pane_g7

0xe819,	// (0x0007051b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x000713f7) bg_cell_gallery_focus_pane_g

0xe821,	// (0x00070523) aid_firma_cardinal

0xe835,	// (0x00070537) blid_firmament_pane_t1

0xe84c,	// (0x0007054e) blid_firmament_pane_t2

0xe863,	// (0x00070565) blid_firmament_pane_t3

0xe87a,	// (0x0007057c) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00071408) blid_firmament_pane_t

0xe891,	// (0x00070593) blid_sat_info_pane

0xe8a1,	// (0x000705a3) blid_sat_info_pane_g1

0xe8a1,	// (0x000705a3) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00071411) blid_sat_info_pane_g

0xe8ab,	// (0x000705ad) blid_sat_info_pane_t1

0xe8b9,	// (0x000705bb) smil2_volume_content_pane

0xe8c2,	// (0x000705c4) smil2_volume_pane_g1

0xe8ca,	// (0x000705cc) smil2_volume_content_pane_g1

0xe8d3,	// (0x000705d5) smil2_volume_content_pane_g2

0xe8dc,	// (0x000705de) smil2_volume_content_pane_g3

0xe8e5,	// (0x000705e7) smil2_volume_content_pane_g4

0xe8ee,	// (0x000705f0) smil2_volume_content_pane_g5

0xe8f7,	// (0x000705f9) smil2_volume_content_pane_g6

0xe900,	// (0x00070602) smil2_volume_content_pane_g7

0xe909,	// (0x0007060b) smil2_volume_content_pane_g8

0xe912,	// (0x00070614) smil2_volume_content_pane_g9

0xe91b,	// (0x0007061d) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00071416) smil2_volume_content_pane_g

0x5ca8,	// (0x000679aa) cale_week_day_heading_pane_t1_ParamLimits

0x5cbc,	// (0x000679be) cale_week_day_heading_pane_t2_ParamLimits

0x5cd0,	// (0x000679d2) cale_week_day_heading_pane_t3_ParamLimits

0x5ce4,	// (0x000679e6) cale_week_day_heading_pane_t4_ParamLimits

0x5cf8,	// (0x000679fa) cale_week_day_heading_pane_t5_ParamLimits

0x5d0c,	// (0x00067a0e) cale_week_day_heading_pane_t6_ParamLimits

0x5d20,	// (0x00067a22) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x00070f02) cale_week_day_heading_pane_t_ParamLimits

0x0a06,	// (0x00062708) bg_cale_side_pane_ParamLimits

0x5d34,	// (0x00067a36) cale_week_time_pane_t1_ParamLimits

0x5d4c,	// (0x00067a4e) cale_week_time_pane_t2_ParamLimits

0x5d64,	// (0x00067a66) cale_week_time_pane_t3_ParamLimits

0x5d7c,	// (0x00067a7e) cale_week_time_pane_t4_ParamLimits

0x5d94,	// (0x00067a96) cale_week_time_pane_t5_ParamLimits

0x5dac,	// (0x00067aae) cale_week_time_pane_t6_ParamLimits

0x5dc4,	// (0x00067ac6) cale_week_time_pane_t7_ParamLimits

0x5ddc,	// (0x00067ade) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x00070f11) cale_week_time_pane_t_ParamLimits

0x5df4,	// (0x00067af6) cell_cale_week_pane_g2_ParamLimits

0x0a06,	// (0x00062708) bg_cale_side_pane_cp01_ParamLimits

0x6d2c,	// (0x00068a2e) cale_month_week_pane_t1_ParamLimits

0x6d43,	// (0x00068a45) cale_month_week_pane_t2_ParamLimits

0x6d5a,	// (0x00068a5c) cale_month_week_pane_t3_ParamLimits

0x6d71,	// (0x00068a73) cale_month_week_pane_t4_ParamLimits

0x6d88,	// (0x00068a8a) cale_month_week_pane_t5_ParamLimits

0x6d9f,	// (0x00068aa1) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00070fea) cale_month_week_pane_t_ParamLimits

0x6e6c,	// (0x00068b6e) cell_cale_month_pane_g1_ParamLimits

0x002f,	// (0x00061d31) main_cale_event_viewer_pane

0x002f,	// (0x00061d31) listscroll_cale_event_viewer_pane

0xe924,	// (0x00070626) list_cale_ev_pane

0xe92c,	// (0x0007062e) scroll_pane_cp023

0xe938,	// (0x0007063a) field_cale_ev_pane_ParamLimits

0xe938,	// (0x0007063a) field_cale_ev_pane

0xe952,	// (0x00070654) field_cale_ev_content_pane_ParamLimits

0xe952,	// (0x00070654) field_cale_ev_content_pane

0xe95e,	// (0x00070660) field_cale_ev_pane_g1_ParamLimits

0xe95e,	// (0x00070660) field_cale_ev_pane_g1

0xe96a,	// (0x0007066c) field_cale_ev_pane_g2_ParamLimits

0xe96a,	// (0x0007066c) field_cale_ev_pane_g2

0xe982,	// (0x00070684) field_cale_ev_pane_g3_ParamLimits

0xe982,	// (0x00070684) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x0007142b) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x0007142b) field_cale_ev_pane_g

0xe99a,	// (0x0007069c) field_cale_ev_pane_t1_ParamLimits

0xe99a,	// (0x0007069c) field_cale_ev_pane_t1

0xe9b1,	// (0x000706b3) field_cale_ev_content_pane_t1_ParamLimits

0xe9b1,	// (0x000706b3) field_cale_ev_content_pane_t1

0x8033,	// (0x00069d35) bg_button_pane_cp01

0x083e,	// (0x00062540) listscroll_cale_week_pane_ParamLimits

0x5ad1,	// (0x000677d3) popup_toolbar_window_cp01

0x09f4,	// (0x000626f6) listscroll_cale_week_pane_t1_ParamLimits

0x083e,	// (0x00062540) listscroll_cale_day_pane_ParamLimits

0x5ad1,	// (0x000677d3) popup_toolbar_window_cp02

0x09f4,	// (0x000626f6) listscroll_cale_day_pane_t1_ParamLimits

0x083e,	// (0x00062540) main_cale_month_pane_ParamLimits

0x9be9,	// (0x0006b8eb) popup_toolbar_window_cp03_ParamLimits

0x9be9,	// (0x0006b8eb) popup_toolbar_window_cp03

0x8388,	// (0x0006a08a) main_image_pane_g2_ParamLimits

0x8388,	// (0x0006a08a) main_image_pane_g2

0x8394,	// (0x0006a096) main_image_pane_g3_ParamLimits

0x8394,	// (0x0006a096) main_image_pane_g3

0x0002,

0xf51a,	// (0x0007121c) main_image_pane_g_ParamLimits

0xf51a,	// (0x0007121c) main_image_pane_g

0x83a0,	// (0x0006a0a2) main_image_pane_t1_ParamLimits

0x83b7,	// (0x0006a0b9) main_image_pane_t2_ParamLimits

0x83b7,	// (0x0006a0b9) main_image_pane_t2

0x83c9,	// (0x0006a0cb) main_image_pane_t3_ParamLimits

0x83c9,	// (0x0006a0cb) main_image_pane_t3

0x83db,	// (0x0006a0dd) main_image_pane_t4_ParamLimits

0x83db,	// (0x0006a0dd) main_image_pane_t4

0x0003,

0xf521,	// (0x00071223) main_image_pane_t_ParamLimits

0xf521,	// (0x00071223) main_image_pane_t

0x83ed,	// (0x0006a0ef) popup_image_details_window_cp01

0x83f7,	// (0x0006a0f9) popup_toobar_trans_pane_cp01_ParamLimits

0x83f7,	// (0x0006a0f9) popup_toobar_trans_pane_cp01

0x9b41,	// (0x0006b843) popup_image_details_window_ParamLimits

0x9b41,	// (0x0006b843) popup_image_details_window

0x9b4f,	// (0x0006b851) popup_image_focus_window

0x9f2a,	// (0x0006bc2c) camera2_autofocus_pane_ParamLimits

0x9f2a,	// (0x0006bc2c) camera2_autofocus_pane

0x002f,	// (0x00061d31) bg_popup_sub_pane_cp06

0xe9ce,	// (0x000706d0) popup_image_focus_window_g1

0xe9d6,	// (0x000706d8) popup_image_focus_window_g2

0xe9de,	// (0x000706e0) popup_image_focus_window_g3

0xe9e6,	// (0x000706e8) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00071432) popup_image_focus_window_g

0xe9ee,	// (0x000706f0) popup_image_focus_window_t1

0xe9fc,	// (0x000706fe) popup_image_focus_window_t2

0xea0c,	// (0x0007070e) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x0007143b) popup_image_focus_window_t

0xea1a,	// (0x0007071c) camera2_autofocus_pane_g1

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp01

0xea28,	// (0x0007072a) popup_image_details_window_g1

0xea3b,	// (0x0007073d) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x0007144d) popup_image_details_window_g

0xea64,	// (0x00070766) popup_image_details_window_t1

0xea76,	// (0x00070778) popup_image_details_window_t2

0xea8f,	// (0x00070791) popup_image_details_window_t3

0xeaa3,	// (0x000707a5) popup_image_details_window_t4

0xeabe,	// (0x000707c0) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00071454) popup_image_details_window_t

0x0806,	// (0x00062508) bg_calc_paper_pane_ParamLimits

0x002f,	// (0x00061d31) grid_highlight_pane_cp013

0x5851,	// (0x00067553) list_calc_pane_ParamLimits

0x5863,	// (0x00067565) scroll_pane_cp024

0x083e,	// (0x00062540) bg_calc_display_pane_ParamLimits

0x586b,	// (0x0006756d) calc_display_pane_t1_ParamLimits

0x5880,	// (0x00067582) calc_display_pane_t2_ParamLimits

0x5895,	// (0x00067597) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00070e84) calc_display_pane_t_ParamLimits

0x597c,	// (0x0006767e) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x00070ea1) cell_calc_pane_g

0x5985,	// (0x00067687) cell_calc_pane_t1

0x08c1,	// (0x000625c3) grid_highlight_pane_cp02_ParamLimits

0x08d7,	// (0x000625d9) toolbar_button_pane_cp01_ParamLimits

0x08d7,	// (0x000625d9) toolbar_button_pane_cp01

0x8431,	// (0x0006a133) temp_image_control_pane_ParamLimits

0x8431,	// (0x0006a133) temp_image_control_pane

0x9abd,	// (0x0006b7bf) main_mp3_pane

0xead8,	// (0x000707da) temp_image_control_pane_g1_ParamLimits

0xead8,	// (0x000707da) temp_image_control_pane_g1

0xeae6,	// (0x000707e8) temp_image_control_pane_g2_ParamLimits

0xeae6,	// (0x000707e8) temp_image_control_pane_g2

0xeaf8,	// (0x000707fa) temp_image_control_pane_g3_ParamLimits

0xeaf8,	// (0x000707fa) temp_image_control_pane_g3

0xa6fb,	// (0x0006c3fd) temp_image_control_pane_g4_ParamLimits

0xa6fb,	// (0x0006c3fd) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x0007145f) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x0007145f) temp_image_control_pane_g

0xead8,	// (0x000707da) main_mp3_pane_g1

0xa70c,	// (0x0006c40e) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00071468) main_mp3_pane_g

0xeb3b,	// (0x0007083d) main_mp3_pane_t1

0x0aef,	// (0x000627f1) main_camera_pane_g8_ParamLimits

0x0aef,	// (0x000627f1) main_camera_pane_g8

0x6084,	// (0x00067d86) main_video_pane_g7_ParamLimits

0x6084,	// (0x00067d86) main_video_pane_g7

0xa072,	// (0x0006bd74) main_camera2_pane_t7_ParamLimits

0xa072,	// (0x0006bd74) main_camera2_pane_t7

0x0c3d,	// (0x0006293f) scroll_pane_cp025_ParamLimits

0x0c3d,	// (0x0006293f) scroll_pane_cp025

0x0c51,	// (0x00062953) scroll_pane_cp026_ParamLimits

0x0c51,	// (0x00062953) scroll_pane_cp026

0x0c60,	// (0x00062962) wml_content_pane_ParamLimits

0x002f,	// (0x00061d31) main_touch_calib_pane

0xa7b0,	// (0x0006c4b2) main_touch_calib_pane_g1

0xa7bc,	// (0x0006c4be) main_touch_calib_pane_g2

0xa7c8,	// (0x0006c4ca) main_touch_calib_pane_g3

0xa7d4,	// (0x0006c4d6) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00071486) main_touch_calib_pane_g

0xa7e0,	// (0x0006c4e2) main_touch_calib_pane_t1

0xa7f7,	// (0x0006c4f9) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x0007148f) main_touch_calib_pane_t

0x78b9,	// (0x000695bb) mup_progress_pane_cp02

0x78d8,	// (0x000695da) navi_pane_g1

0x7993,	// (0x00069695) navi_pane_mp_t3

0x9abd,	// (0x0006b7bf) main_mp3_pane_ParamLimits

0x9c3a,	// (0x0006b93c) navi_pane_ParamLimits

0xead8,	// (0x000707da) main_mp3_pane_g1_ParamLimits

0xa70c,	// (0x0006c40e) main_mp3_pane_g2_ParamLimits

0xa718,	// (0x0006c41a) main_mp3_pane_g3_ParamLimits

0xa718,	// (0x0006c41a) main_mp3_pane_g3

0xa724,	// (0x0006c426) main_mp3_pane_g4_ParamLimits

0xa724,	// (0x0006c426) main_mp3_pane_g4

0xeb08,	// (0x0007080a) main_mp3_pane_g5_ParamLimits

0xeb08,	// (0x0007080a) main_mp3_pane_g5

0xeb16,	// (0x00070818) main_mp3_pane_g6_ParamLimits

0xeb16,	// (0x00070818) main_mp3_pane_g6

0xeb23,	// (0x00070825) main_mp3_pane_g7_ParamLimits

0xeb23,	// (0x00070825) main_mp3_pane_g7

0xeb2f,	// (0x00070831) main_mp3_pane_g8_ParamLimits

0xeb2f,	// (0x00070831) main_mp3_pane_g8

0xf766,	// (0x00071468) main_mp3_pane_g_ParamLimits

0xa730,	// (0x0006c432) main_mp3_pane_t2

0xa740,	// (0x0006c442) main_mp3_pane_t3

0xeb49,	// (0x0007084b) main_mp3_pane_t4

0xeb57,	// (0x00070859) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00071479) main_mp3_pane_t

0xeb65,	// (0x00070867) mup_progress_pane_cp01

0x422c,	// (0x00065f2e) aid_zoom_text_secondary2

0xe924,	// (0x00070626) list_cale_ev2_pane

0xe92c,	// (0x0007062e) scroll_pane_cp023_ParamLimits

0xa84a,	// (0x0006c54c) field_cale_ev2_pane_ParamLimits

0xa84a,	// (0x0006c54c) field_cale_ev2_pane

0xa87e,	// (0x0006c580) field_cale_ev2_pane_g1_ParamLimits

0xa87e,	// (0x0006c580) field_cale_ev2_pane_g1

0xa88a,	// (0x0006c58c) field_cale_ev2_pane_g2_ParamLimits

0xa88a,	// (0x0006c58c) field_cale_ev2_pane_g2

0xa8a2,	// (0x0006c5a4) field_cale_ev2_pane_g3_ParamLimits

0xa8a2,	// (0x0006c5a4) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x0007149a) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x0007149a) field_cale_ev2_pane_g

0x453e,	// (0x00066240) field_cale_ev2_pane_t1_ParamLimits

0x453e,	// (0x00066240) field_cale_ev2_pane_t1

0x4555,	// (0x00066257) field_cale_ev2_pane_t2_ParamLimits

0x4555,	// (0x00066257) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x000714a3) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x000714a3) field_cale_ev2_pane_t

0x8179,	// (0x00069e7b) main_postcard_pane_g5_ParamLimits

0x8179,	// (0x00069e7b) main_postcard_pane_g5

0x8187,	// (0x00069e89) main_postcard_pane_g6_ParamLimits

0x8187,	// (0x00069e89) main_postcard_pane_g6

0x5ec4,	// (0x00067bc6) camera2_autofocus_pane_cp_ParamLimits

0x5ec4,	// (0x00067bc6) camera2_autofocus_pane_cp

0x9abd,	// (0x0006b7bf) main_mup3_pane

0xa8e6,	// (0x0006c5e8) main_mup3_pane_g1_ParamLimits

0xa8e6,	// (0x0006c5e8) main_mup3_pane_g1

0xa907,	// (0x0006c609) main_mup3_pane_g2_ParamLimits

0xa907,	// (0x0006c609) main_mup3_pane_g2

0xa982,	// (0x0006c684) main_mup3_pane_g3_ParamLimits

0xa982,	// (0x0006c684) main_mup3_pane_g3

0xa9c1,	// (0x0006c6c3) main_mup3_pane_g4_ParamLimits

0xa9c1,	// (0x0006c6c3) main_mup3_pane_g4

0xaa00,	// (0x0006c702) main_mup3_pane_g5_ParamLimits

0xaa00,	// (0x0006c702) main_mup3_pane_g5

0xaa41,	// (0x0006c743) main_mup3_pane_g6_ParamLimits

0xaa41,	// (0x0006c743) main_mup3_pane_g6

0xeb6d,	// (0x0007086f) main_mup3_pane_g7_ParamLimits

0xeb6d,	// (0x0007086f) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x000714b3) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x000714b3) main_mup3_pane_g

0xaab3,	// (0x0006c7b5) main_mup3_pane_t1_ParamLimits

0xaab3,	// (0x0006c7b5) main_mup3_pane_t1

0xab22,	// (0x0006c824) main_mup3_pane_t2_ParamLimits

0xab22,	// (0x0006c824) main_mup3_pane_t2

0xabeb,	// (0x0006c8ed) main_mup3_pane_t4_ParamLimits

0xabeb,	// (0x0006c8ed) main_mup3_pane_t4

0xac3d,	// (0x0006c93f) main_mup3_pane_t5_ParamLimits

0xac3d,	// (0x0006c93f) main_mup3_pane_t5

0xace5,	// (0x0006c9e7) main_mup3_pane_t6_ParamLimits

0xace5,	// (0x0006c9e7) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x000714c4) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x000714c4) main_mup3_pane_t

0xad8d,	// (0x0006ca8f) mup3_progress_pane_ParamLimits

0xad8d,	// (0x0006ca8f) mup3_progress_pane

0xadf2,	// (0x0006caf4) popup_mup3_control_window_ParamLimits

0xadf2,	// (0x0006caf4) popup_mup3_control_window

0xeb7b,	// (0x0007087d) popup_mup3_text_window

0xae0b,	// (0x0006cb0d) mup3_progress_pane_t1

0xae22,	// (0x0006cb24) mup3_progress_pane_t2

0xeb83,	// (0x00070885) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x000714d1) mup3_progress_pane_t

0xeb9a,	// (0x0007089c) mup_progress_pane_cp03

0x002f,	// (0x00061d31) bg_tb_trans_pane_cp04

0xae39,	// (0x0006cb3b) mup3_volume_pane

0xae41,	// (0x0006cb43) popup_mup3_control_window_g1

0xae4a,	// (0x0006cb4c) mup3_volume_pane_g1

0xae53,	// (0x0006cb55) mup3_volume_pane_g2

0xae5c,	// (0x0006cb5e) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x000714d8) mup3_volume_pane_g

0x002f,	// (0x00061d31) bg_tb_trans_pane_cp03

0xebaa,	// (0x000708ac) popup_mup3_text_window_g1

0xebb2,	// (0x000708b4) popup_mup3_text_window_t1

0x0898,	// (0x0006259a) list_calc_item_pane_g1_ParamLimits

0xa4bf,	// (0x0006c1c1) mup_volume_pane_cp_g1

0xa80e,	// (0x0006c510) main_touch_calib_pane_t3

0xa822,	// (0x0006c524) main_touch_calib_pane_t4

0xa836,	// (0x0006c538) main_touch_calib_pane_t5

0x0039,	// (0x00061d3b) aid_cell_size_toolbar2

0x0041,	// (0x00061d43) aid_popup3_width_pane

0x52ed,	// (0x00066fef) aid_zoom_text_msg_primary

0x5eae,	// (0x00067bb0) vorec_t7

0x085c,	// (0x0006255e) bg_calc_paper_pane_g1_ParamLimits

0x0874,	// (0x00062576) bg_calc_paper_pane_g2_ParamLimits

0x0868,	// (0x0006256a) bg_calc_paper_pane_g3_ParamLimits

0x088c,	// (0x0006258e) bg_calc_paper_pane_g4_ParamLimits

0x0880,	// (0x00062582) bg_calc_paper_pane_g5_ParamLimits

0x58d4,	// (0x000675d6) bg_calc_paper_pane_g6_ParamLimits

0x58e5,	// (0x000675e7) bg_calc_paper_pane_g7_ParamLimits

0x58f6,	// (0x000675f8) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00070e8b) bg_calc_paper_pane_g_ParamLimits

0x5907,	// (0x00067609) calc_bg_paper_pane_g9_ParamLimits

0x5fad,	// (0x00067caf) image_qvga_pane_ParamLimits

0x5fad,	// (0x00067caf) image_qvga_pane

0x0703,	// (0x00062405) bg_popup_sub_pane_cp04_ParamLimits

0x82f7,	// (0x00069ff9) popup_mup_playback_window_g1_ParamLimits

0x8303,	// (0x0006a005) popup_mup_playback_window_t1_ParamLimits

0x8318,	// (0x0006a01a) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00071217) popup_mup_playback_window_t_ParamLimits

0xa1ad,	// (0x0006beaf) main_mup2_pane_g3_ParamLimits

0xa1ad,	// (0x0006beaf) main_mup2_pane_g3

0x61fc,	// (0x00067efe) popup_toolbar_window_cp04

0x8a3b,	// (0x0006a73d) popup_call2_audio_second_window_g3_ParamLimits

0x8a3b,	// (0x0006a73d) popup_call2_audio_second_window_g3

0x8e45,	// (0x0006ab47) popup_call2_audio_first_window_g4_ParamLimits

0x8e45,	// (0x0006ab47) popup_call2_audio_first_window_g4

0x94c4,	// (0x0006b1c6) popup_call2_audio_in_window_g4_ParamLimits

0x94c4,	// (0x0006b1c6) popup_call2_audio_in_window_g4

0x832d,	// (0x0006a02f) aid_area_sk_bg_cut_ParamLimits

0x832d,	// (0x0006a02f) aid_area_sk_bg_cut

0x833a,	// (0x0006a03c) aid_area_sk_bg_cut_2_ParamLimits

0x833a,	// (0x0006a03c) aid_area_sk_bg_cut_2

0xa6a1,	// (0x0006c3a3) aid_placing_details_win

0xa6a9,	// (0x0006c3ab) aid_placing_details_win_2

0xea1a,	// (0x0007071c) camera2_autofocus_pane_g1_ParamLimits

0x54c8,	// (0x000671ca) popup_fixed_preview_cale_window_ParamLimits

0x54c8,	// (0x000671ca) popup_fixed_preview_cale_window

0x7a46,	// (0x00069748) navi_slider_pane_g3

0x7a4f,	// (0x00069751) navi_slider_pane_g4

0x7a58,	// (0x0006975a) navi_slider_pane_g5

0x7a46,	// (0x00069748) navi_slider_pane_g6

0x7a61,	// (0x00069763) navi_slider_pane_g7

0x7faa,	// (0x00069cac) mup_scale_pane_g3

0x7fb3,	// (0x00069cb5) mup_scale_pane_g4

0x7fbc,	// (0x00069cbe) mup_scale_pane_g5

0x7fc5,	// (0x00069cc7) mup_scale_pane_g6

0x7fce,	// (0x00069cd0) mup_scale_pane_g7

0x7a46,	// (0x00069748) cams2_slider_pane_g3

0xa5bc,	// (0x0006c2be) cams2_slider_pane_g4

0xa5c4,	// (0x0006c2c6) cams2_slider_pane_g5

0x7a46,	// (0x00069748) cams2_slider_pane_g6

0xa5cc,	// (0x0006c2ce) cams2_slider_pane_g7

0xe8a1,	// (0x000705a3) camera2_autofocus_pane_cp_g1

0xebc0,	// (0x000708c2) bg_popup_preview_window_pane_cp02_ParamLimits

0xebc0,	// (0x000708c2) bg_popup_preview_window_pane_cp02

0xebcc,	// (0x000708ce) list_fp_cale_pane_ParamLimits

0xebcc,	// (0x000708ce) list_fp_cale_pane

0xebd8,	// (0x000708da) popup_fixed_preview_cale_window_t1_ParamLimits

0xebd8,	// (0x000708da) popup_fixed_preview_cale_window_t1

0xae65,	// (0x0006cb67) popup_fixed_preview_cale_window_t2_ParamLimits

0xae65,	// (0x0006cb67) popup_fixed_preview_cale_window_t2

0xae7a,	// (0x0006cb7c) popup_fixed_preview_cale_window_t3_ParamLimits

0xae7a,	// (0x0006cb7c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x000714df) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x000714df) popup_fixed_preview_cale_window_t

0xae8f,	// (0x0006cb91) list_single_fp_cale_pane_ParamLimits

0xae8f,	// (0x0006cb91) list_single_fp_cale_pane

0xebf6,	// (0x000708f8) list_single_fp_cale_pane_g1_ParamLimits

0xebf6,	// (0x000708f8) list_single_fp_cale_pane_g1

0xec02,	// (0x00070904) list_single_fp_cale_pane_g2_ParamLimits

0xec02,	// (0x00070904) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x000714e6) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x000714e6) list_single_fp_cale_pane_g

0xec1b,	// (0x0007091d) list_single_fp_cale_pane_t1_ParamLimits

0xec1b,	// (0x0007091d) list_single_fp_cale_pane_t1

0xec2d,	// (0x0007092f) list_single_fp_cale_pane_t2_ParamLimits

0xec2d,	// (0x0007092f) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x000714ed) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x000714ed) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x002f,	// (0x00061d31) main_dialer_pane

0xaea3,	// (0x0006cba5) aid_cell_size_keypad

0xaead,	// (0x0006cbaf) dialer_ne_pane

0xaeb7,	// (0x0006cbb9) grid_dialer_command_1_pane

0xaebf,	// (0x0006cbc1) grid_dialer_command_2_pane

0xaec7,	// (0x0006cbc9) grid_dialer_keypad_pane

0xaedb,	// (0x0006cbdd) bg_popup_call_pane_cp06_ParamLimits

0xaedb,	// (0x0006cbdd) bg_popup_call_pane_cp06

0xaee7,	// (0x0006cbe9) dialer_ne_clear_pane_ParamLimits

0xaee7,	// (0x0006cbe9) dialer_ne_clear_pane

0xec60,	// (0x00070962) dialer_ne_pane_g1

0xec68,	// (0x0007096a) dialer_ne_pane_t1_ParamLimits

0xec68,	// (0x0007096a) dialer_ne_pane_t1

0xaef3,	// (0x0006cbf5) dialer_ne_pane_t2_ParamLimits

0xaef3,	// (0x0006cbf5) dialer_ne_pane_t2

0xaf10,	// (0x0006cc12) dialer_ne_pane_t3_ParamLimits

0xaf10,	// (0x0006cc12) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x000714f2) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x000714f2) dialer_ne_pane_t

0xaf34,	// (0x0006cc36) dialer_ne_pane_t3_copy1_ParamLimits

0xaf34,	// (0x0006cc36) dialer_ne_pane_t3_copy1

0xaf58,	// (0x0006cc5a) cell_dialer_keypad_pane_ParamLimits

0xaf58,	// (0x0006cc5a) cell_dialer_keypad_pane

0xaf6f,	// (0x0006cc71) cell_dialer_command_1_pane_ParamLimits

0xaf6f,	// (0x0006cc71) cell_dialer_command_1_pane

0xaf85,	// (0x0006cc87) cell_dialer_command_2_pane_ParamLimits

0xaf85,	// (0x0006cc87) cell_dialer_command_2_pane

0xec7a,	// (0x0007097c) bg_button_pane_cp02_ParamLimits

0xec7a,	// (0x0007097c) bg_button_pane_cp02

0xaf94,	// (0x0006cc96) cell_dialer_keypad_pane_g1_ParamLimits

0xaf94,	// (0x0006cc96) cell_dialer_keypad_pane_g1

0xec7a,	// (0x0007097c) bg_button_pane_cp03_ParamLimits

0xec7a,	// (0x0007097c) bg_button_pane_cp03

0xafa9,	// (0x0006ccab) cell_dialer_command_1_pane_g1_ParamLimits

0xafa9,	// (0x0006ccab) cell_dialer_command_1_pane_g1

0xec86,	// (0x00070988) bg_button_pane_cp04

0xafbc,	// (0x0006ccbe) cell_dialer_command_2_pane_g1

0x7a2c,	// (0x0006972e) bg_button_pane_cp06

0xec8e,	// (0x00070990) dialer_ne_clear_pane_g1

0x78e4,	// (0x000695e6) navi_pane_g2

0x7912,	// (0x00069614) navi_pane_g3

0x0002,

0xf418,	// (0x0007111a) navi_pane_g

0x79a1,	// (0x000696a3) navi_pane_mv_g2

0x79c8,	// (0x000696ca) navi_pane_mv_g5

0x79d0,	// (0x000696d2) navi_pane_mv_t1

0x083e,	// (0x00062540) main_clock2_pane

0xafea,	// (0x0006ccec) main_clock2_list_pane_ParamLimits

0xafea,	// (0x0006ccec) main_clock2_list_pane

0xb012,	// (0x0006cd14) main_clock2_pane_t1_ParamLimits

0xb012,	// (0x0006cd14) main_clock2_pane_t1

0xb042,	// (0x0006cd44) main_clock2_pane_t2_ParamLimits

0xb042,	// (0x0006cd44) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x000714f9) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x000714f9) main_clock2_pane_t

0xb0a9,	// (0x0006cdab) popup_clock_analogue_window_cp03_ParamLimits

0xb0a9,	// (0x0006cdab) popup_clock_analogue_window_cp03

0xb0c9,	// (0x0006cdcb) popup_clock_digital_window_cp02_ParamLimits

0xb0c9,	// (0x0006cdcb) popup_clock_digital_window_cp02

0xb13e,	// (0x0006ce40) main_clock2_list_single_pane_ParamLimits

0xb13e,	// (0x0006ce40) main_clock2_list_single_pane

0x7a2c,	// (0x0006972e) list_highlight_pane_cp05

0xec96,	// (0x00070998) main_clock2_list_single_pane_t1

0x61fc,	// (0x00067efe) popup_toolbar_window_cp04_ParamLimits

0xa6cb,	// (0x0006c3cd) camera2_autofocus_pane_g2_ParamLimits

0xa6cb,	// (0x0006c3cd) camera2_autofocus_pane_g2

0xa6d7,	// (0x0006c3d9) camera2_autofocus_pane_g3_ParamLimits

0xa6d7,	// (0x0006c3d9) camera2_autofocus_pane_g3

0xa6e3,	// (0x0006c3e5) camera2_autofocus_pane_g4_ParamLimits

0xa6e3,	// (0x0006c3e5) camera2_autofocus_pane_g4

0xa6ef,	// (0x0006c3f1) camera2_autofocus_pane_g5_ParamLimits

0xa6ef,	// (0x0006c3f1) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00071442) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00071442) camera2_autofocus_pane_g

0xa8c6,	// (0x0006c5c8) camera2_autofocus_pane_cp_g2

0xa8ce,	// (0x0006c5d0) camera2_autofocus_pane_cp_g3

0xa8d6,	// (0x0006c5d8) camera2_autofocus_pane_cp_g4

0xa8de,	// (0x0006c5e0) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x000714a8) camera2_autofocus_pane_cp_g

0xaed3,	// (0x0006cbd5) popup_dialer_spcha_window

0x002f,	// (0x00061d31) bg_popup_sub_pane_cp07

0xeca4,	// (0x000709a6) list_spcha_pane

0xecac,	// (0x000709ae) list_single_spcha_pane_ParamLimits

0xecac,	// (0x000709ae) list_single_spcha_pane

0x002f,	// (0x00061d31) list_highlight_pane_cp06

0xecbd,	// (0x000709bf) list_single_spcha_pane_t1

0x926e,	// (0x0006af70) popup_call2_audio_out_window_g4_ParamLimits

0x926e,	// (0x0006af70) popup_call2_audio_out_window_g4

0x002f,	// (0x00061d31) main_imed2_pane

0x9b57,	// (0x0006b859) popup_imed_adjust2_window

0x9b6a,	// (0x0006b86c) popup_imed_trans_window_ParamLimits

0x9b6a,	// (0x0006b86c) popup_imed_trans_window

0xe6dd,	// (0x000703df) popup_blid_sat_info2_window_t1

0xe6eb,	// (0x000703ed) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x000713d7) popup_blid_sat_info2_window_t

0xb1e8,	// (0x0006ceea) aid_size_cell_colour_35

0xb202,	// (0x0006cf04) aid_size_cell_colour_112

0xb219,	// (0x0006cf1b) aid_size_cell_effect

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp02

0xeccb,	// (0x000709cd) heading_imed_pane

0xb233,	// (0x0006cf35) listscroll_imed_pane

0xecd7,	// (0x000709d9) heading_imed_pane_g1

0xecdf,	// (0x000709e1) heading_imed_pane_t1

0xeced,	// (0x000709ef) grid_imed_colour_35_pane_ParamLimits

0xeced,	// (0x000709ef) grid_imed_colour_35_pane

0xb23f,	// (0x0006cf41) grid_imed_effect_pane

0xed08,	// (0x00070a0a) list_imed_aspect_pane

0xb24f,	// (0x0006cf51) scroll_pane_cp027_ParamLimits

0xb24f,	// (0x0006cf51) scroll_pane_cp027

0xb25b,	// (0x0006cf5d) cell_imed_effect_pane_ParamLimits

0xb25b,	// (0x0006cf5d) cell_imed_effect_pane

0xed10,	// (0x00070a12) cell_imed_colour_pane_ParamLimits

0xed10,	// (0x00070a12) cell_imed_colour_pane

0xed52,	// (0x00070a54) cell_imed_colour_pane_g1_ParamLimits

0xed52,	// (0x00070a54) cell_imed_colour_pane_g1

0xed63,	// (0x00070a65) hgihlgiht_grid_pane_cp016_ParamLimits

0xed63,	// (0x00070a65) hgihlgiht_grid_pane_cp016

0xb273,	// (0x0006cf75) cell_imed_effect_pane_g1

0xb27b,	// (0x0006cf7d) grid_highlight_pane_cp017

0xed74,	// (0x00070a76) list_imed_single_pane_ParamLimits

0xed74,	// (0x00070a76) list_imed_single_pane

0x002f,	// (0x00061d31) list_highlight_pane_cp07

0xed8b,	// (0x00070a8d) list_imed_aspect_pane_comp1_t1

0x9aaf,	// (0x0006b7b1) bg_tb_trans_pane_cp05

0xedad,	// (0x00070aaf) popup_imed_adjust2_window_g1

0xedd4,	// (0x00070ad6) popup_imed_adjust2_window_t1

0xedec,	// (0x00070aee) slider_imed_adjust_pane

0xee00,	// (0x00070b02) slider_imed_adjust_pane_g1

0xee10,	// (0x00070b12) slider_imed_adjust_pane_g2

0xee20,	// (0x00070b22) slider_imed_adjust_pane_g3

0xee31,	// (0x00070b33) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00071516) slider_imed_adjust_pane_g

0xb284,	// (0x0006cf86) aid_size_cell_clipart2

0xb290,	// (0x0006cf92) grid_imed_clipart_pane

0xee42,	// (0x00070b44) scroll_pane_cp031

0xb29a,	// (0x0006cf9c) cell_imed_clipart_pane_ParamLimits

0xb29a,	// (0x0006cf9c) cell_imed_clipart_pane

0xb2c1,	// (0x0006cfc3) cell_imed_clipart_pane_g1

0x002f,	// (0x00061d31) grid_highlight_pane_cp014

0xaff6,	// (0x0006ccf8) main_clock2_pane_g1_ParamLimits

0xaff6,	// (0x0006ccf8) main_clock2_pane_g1

0xb0e5,	// (0x0006cde7) aid_call2_pane_cp10

0xb0f7,	// (0x0006cdf9) aid_call_pane_cp10

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g1

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g2

0xb109,	// (0x0006ce0b) popup_clock_analogue_window_cp10_g3

0xb109,	// (0x0006ce0b) popup_clock_analogue_window_cp10_g4

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00071504) popup_clock_analogue_window_cp10_g

0xb11f,	// (0x0006ce21) popup_clock_analogue_window_cp10_t1

0xb150,	// (0x0006ce52) clock_digital_number_pane_cp10_ParamLimits

0xb150,	// (0x0006ce52) clock_digital_number_pane_cp10

0xb168,	// (0x0006ce6a) clock_digital_number_pane_cp11_ParamLimits

0xb168,	// (0x0006ce6a) clock_digital_number_pane_cp11

0xb180,	// (0x0006ce82) clock_digital_number_pane_cp12_ParamLimits

0xb180,	// (0x0006ce82) clock_digital_number_pane_cp12

0xb198,	// (0x0006ce9a) clock_digital_number_pane_cp13_ParamLimits

0xb198,	// (0x0006ce9a) clock_digital_number_pane_cp13

0xb1b0,	// (0x0006ceb2) clock_digital_separator_pane_cp10_ParamLimits

0xb1b0,	// (0x0006ceb2) clock_digital_separator_pane_cp10

0xb1c8,	// (0x0006ceca) popup_clock_digital_window_cp02_t1_ParamLimits

0xb1c8,	// (0x0006ceca) popup_clock_digital_window_cp02_t1

0x06fb,	// (0x000623fd) clock_digital_number_pane_cp10_g1

0x06fb,	// (0x000623fd) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x0007151f) clock_digital_number_pane_cp10_g

0x06fb,	// (0x000623fd) clock_digital_separator_pane_cp10_g1

0x06fb,	// (0x000623fd) clock_digital_separator_pane_g2_cp10

0x79fc,	// (0x000696fe) navi_pane_vded_g4

0x7a05,	// (0x00069707) navi_pane_vded_g5

0x7a0e,	// (0x00069710) navi_pane_vded_t1

0x002f,	// (0x00061d31) main_vded_pane

0xb2ca,	// (0x0006cfcc) main_vded_pane_g1

0xb2d6,	// (0x0006cfd8) main_vded_pane_g2

0xb2e0,	// (0x0006cfe2) main_vded_pane_g3

0x0002,

0xf822,	// (0x00071524) main_vded_pane_g

0xb2ea,	// (0x0006cfec) main_vded_pane_t1

0xb2f8,	// (0x0006cffa) main_vded_pane_t2

0x0001,

0xf829,	// (0x0007152b) main_vded_pane_t

0xb306,	// (0x0006d008) vded_slider_pane

0xb310,	// (0x0006d012) vded_video_pane

0xee4a,	// (0x00070b4c) vded_video_pane_g1

0xb31a,	// (0x0006d01c) vded_video_pane_g2

0xe8a1,	// (0x000705a3) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00071530) vded_video_pane_g

0xee54,	// (0x00070b56) vded_slider_pane_g1

0xa4bf,	// (0x0006c1c1) vded_slider_pane_g2

0xee5d,	// (0x00070b5f) vded_slider_pane_g3

0xee66,	// (0x00070b68) vded_slider_pane_g4

0xee6f,	// (0x00070b71) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00071537) vded_slider_pane_g

0xade4,	// (0x0006cae6) mup3_rocker_pane_ParamLimits

0xade4,	// (0x0006cae6) mup3_rocker_pane

0xb323,	// (0x0006d025) mup3_control_keys_pane_g1

0xb32b,	// (0x0006d02d) mup3_control_keys_pane_g2

0xb333,	// (0x0006d035) mup3_control_keys_pane_g3

0xb33b,	// (0x0006d03d) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00071542) mup3_control_keys_pane_g

0x54e6,	// (0x000671e8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x54e6,	// (0x000671e8) popup_toolbar2_fixed_window_cp01

0xadfe,	// (0x0006cb00) popup_toolbar2_fixed_window_cp02_ParamLimits

0xadfe,	// (0x0006cb00) popup_toolbar2_fixed_window_cp02

0x8bad,	// (0x0006a8af) popup_call2_audio_second_window_t4_ParamLimits

0x8bad,	// (0x0006a8af) popup_call2_audio_second_window_t4

0x90db,	// (0x0006addd) popup_call2_audio_first_window_t6_ParamLimits

0x90db,	// (0x0006addd) popup_call2_audio_first_window_t6

0x9371,	// (0x0006b073) popup_call2_audio_out_window_t6_ParamLimits

0x9371,	// (0x0006b073) popup_call2_audio_out_window_t6

0x002f,	// (0x00061d31) main_vitu_pane

0xb34b,	// (0x0006d04d) aid_size_cell_itu_ParamLimits

0xb34b,	// (0x0006d04d) aid_size_cell_itu

0x550e,	// (0x00067210) bg_popup_window_pane_cp08_ParamLimits

0x550e,	// (0x00067210) bg_popup_window_pane_cp08

0xb359,	// (0x0006d05b) field_vitu_entry_pane_ParamLimits

0xb359,	// (0x0006d05b) field_vitu_entry_pane

0xb368,	// (0x0006d06a) grid_vitu_function_pane_ParamLimits

0xb368,	// (0x0006d06a) grid_vitu_function_pane

0xb378,	// (0x0006d07a) grid_vitu_itu_pane_ParamLimits

0xb378,	// (0x0006d07a) grid_vitu_itu_pane

0xb388,	// (0x0006d08a) cell_vitu_itu_pane_ParamLimits

0xb388,	// (0x0006d08a) cell_vitu_itu_pane

0xb39d,	// (0x0006d09f) cell_vitu_function_pane_ParamLimits

0xb39d,	// (0x0006d09f) cell_vitu_function_pane

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp08_ParamLimits

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp08

0xb3b1,	// (0x0006d0b3) field_vitu_entry_pane_t1_ParamLimits

0xb3b1,	// (0x0006d0b3) field_vitu_entry_pane_t1

0xee90,	// (0x00070b92) field_vitu_entry_pane_t2_ParamLimits

0xee90,	// (0x00070b92) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00071550) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00071550) field_vitu_entry_pane_t

0xeead,	// (0x00070baf) bg_button_pane_cp05_ParamLimits

0xeead,	// (0x00070baf) bg_button_pane_cp05

0xb3ce,	// (0x0006d0d0) cell_vitu_itu_pane_g1

0xb3e6,	// (0x0006d0e8) cell_vitu_itu_pane_t1_ParamLimits

0xb3e6,	// (0x0006d0e8) cell_vitu_itu_pane_t1

0xb3f8,	// (0x0006d0fa) cell_vitu_itu_pane_t2_ParamLimits

0xb3f8,	// (0x0006d0fa) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00071555) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00071555) cell_vitu_itu_pane_t

0xeebb,	// (0x00070bbd) bg_button_pane_cp07

0xb42d,	// (0x0006d12f) cell_vitu_function_pane_g1

0x577c,	// (0x0006747e) main_calc_pane_g1

0x52e1,	// (0x00066fe3) aid_visual_content_pane

0x002f,	// (0x00061d31) main_vradio_pane

0xb436,	// (0x0006d138) main_vradio_pane_g1_ParamLimits

0xb436,	// (0x0006d138) main_vradio_pane_g1

0xeec5,	// (0x00070bc7) main_vradio_pane_g2_ParamLimits

0xeec5,	// (0x00070bc7) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x0007155c) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x0007155c) main_vradio_pane_g

0xb446,	// (0x0006d148) main_vradio_pane_t1_ParamLimits

0xb446,	// (0x0006d148) main_vradio_pane_t1

0xb458,	// (0x0006d15a) main_vradio_pane_t2_ParamLimits

0xb458,	// (0x0006d15a) main_vradio_pane_t2

0xeed2,	// (0x00070bd4) main_vradio_pane_t3_ParamLimits

0xeed2,	// (0x00070bd4) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00071561) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00071561) main_vradio_pane_t

0xb46a,	// (0x0006d16c) vradio_rocker_control_pane_ParamLimits

0xb46a,	// (0x0006d16c) vradio_rocker_control_pane

0xb476,	// (0x0006d178) vradio_station_info_pane_ParamLimits

0xb476,	// (0x0006d178) vradio_station_info_pane

0xeee6,	// (0x00070be8) vradio_frequency_info_pane_ParamLimits

0xeee6,	// (0x00070be8) vradio_frequency_info_pane

0xe8a1,	// (0x000705a3) vradio_station_info_pane_g1

0xeef5,	// (0x00070bf7) vradio_station_info_pane_t1_ParamLimits

0xeef5,	// (0x00070bf7) vradio_station_info_pane_t1

0xef17,	// (0x00070c19) vradio_station_info_pane_t2_ParamLimits

0xef17,	// (0x00070c19) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00071568) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00071568) vradio_station_info_pane_t

0xef29,	// (0x00070c2b) vradio_tuning_pane

0xef31,	// (0x00070c33) vradio_rocker_control_pane_g1

0xef39,	// (0x00070c3b) vradio_rocker_control_pane_g2

0xef41,	// (0x00070c43) vradio_rocker_control_pane_g3

0xef49,	// (0x00070c4b) vradio_rocker_control_pane_g4

0xef51,	// (0x00070c53) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x0007156d) vradio_rocker_control_pane_g

0xb485,	// (0x0006d187) vradio_frequency_info_pane_g1

0xef59,	// (0x00070c5b) vradio_frequency_info_pane_t1_ParamLimits

0xef59,	// (0x00070c5b) vradio_frequency_info_pane_t1

0xb48f,	// (0x0006d191) vradio_tuning_pane_g1

0xb498,	// (0x0006d19a) vradio_tuning_pane_t1

0x0055,	// (0x00061d57) area_side_right_pane_ParamLimits

0x0055,	// (0x00061d57) area_side_right_pane

0x9a5f,	// (0x0006b761) status_small_pane_g1

0x9a67,	// (0x0006b769) status_small_pane_g2

0x9a70,	// (0x0006b772) status_small_pane_g3

0x9a79,	// (0x0006b77b) status_small_pane_g4

0x0003,

0xf62b,	// (0x0007132d) status_small_pane_g

0x9a82,	// (0x0006b784) status_small_pane_t1

0x002f,	// (0x00061d31) main_video3_pane

0xef6d,	// (0x00070c6f) cams_zoom_vslider_pane

0xef75,	// (0x00070c77) image3_wide_pane_ParamLimits

0xef75,	// (0x00070c77) image3_wide_pane

0xef8f,	// (0x00070c91) image3_wide_small_pane

0xef9b,	// (0x00070c9d) main_video3_pane_g1_ParamLimits

0xef9b,	// (0x00070c9d) main_video3_pane_g1

0xefb7,	// (0x00070cb9) main_video3_pane_g2_ParamLimits

0xefb7,	// (0x00070cb9) main_video3_pane_g2

0x0001,

0xf876,	// (0x00071578) main_video3_pane_g_ParamLimits

0xf876,	// (0x00071578) main_video3_pane_g

0xefd3,	// (0x00070cd5) main_video3_pane_t1_ParamLimits

0xefd3,	// (0x00070cd5) main_video3_pane_t1

0xeffe,	// (0x00070d00) main_video3_pane_t2_ParamLimits

0xeffe,	// (0x00070d00) main_video3_pane_t2

0xf029,	// (0x00070d2b) main_video3_pane_t3_ParamLimits

0xf029,	// (0x00070d2b) main_video3_pane_t3

0x0002,

0xf87b,	// (0x0007157d) main_video3_pane_t_ParamLimits

0xf87b,	// (0x0007157d) main_video3_pane_t

0xf056,	// (0x00070d58) cams_zoom_vslider_pane_g1

0xf05f,	// (0x00070d61) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00071584) cams_zoom_vslider_pane_g

0xf067,	// (0x00070d69) small_slider_vertical_pane

0xe8a1,	// (0x000705a3) small_slider_vertical_pane_g1

0xe8a1,	// (0x000705a3) small_slider_vertical_pane_g2

0xf06f,	// (0x00070d71) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00071589) small_slider_vertical_pane_g

0x002f,	// (0x00061d31) main_hwr_training_pane

0xf078,	// (0x00070d7a) hwr_training_instruct_pane_ParamLimits

0xf078,	// (0x00070d7a) hwr_training_instruct_pane

0xb4a7,	// (0x0006d1a9) hwr_training_navi_pane_ParamLimits

0xb4a7,	// (0x0006d1a9) hwr_training_navi_pane

0xb4c1,	// (0x0006d1c3) hwr_training_write_pane_ParamLimits

0xb4c1,	// (0x0006d1c3) hwr_training_write_pane

0x002f,	// (0x00061d31) bg_frame_shadow_pane

0xf0af,	// (0x00070db1) hwr_training_write_pane_g1

0xf0b7,	// (0x00070db9) hwr_training_write_pane_g2

0xf0bf,	// (0x00070dc1) hwr_training_write_pane_g3

0xf0c7,	// (0x00070dc9) hwr_training_write_pane_g4

0xf0cf,	// (0x00070dd1) hwr_training_write_pane_g5

0xf0d7,	// (0x00070dd9) hwr_training_write_pane_g6

0xf0df,	// (0x00070de1) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00071590) hwr_training_write_pane_g

0xb4f9,	// (0x0006d1fb) hwr_training_navi_pane_g1_ParamLimits

0xb4f9,	// (0x0006d1fb) hwr_training_navi_pane_g1

0xb50b,	// (0x0006d20d) hwr_training_navi_pane_g2_ParamLimits

0xb50b,	// (0x0006d20d) hwr_training_navi_pane_g2

0xb51d,	// (0x0006d21f) hwr_training_navi_pane_g3_ParamLimits

0xb51d,	// (0x0006d21f) hwr_training_navi_pane_g3

0xb52d,	// (0x0006d22f) hwr_training_navi_pane_g4_ParamLimits

0xb52d,	// (0x0006d22f) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x0007159f) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x0007159f) hwr_training_navi_pane_g

0xb547,	// (0x0006d249) hwr_training_navi_pane_t1

0xb555,	// (0x0006d257) list_single_hwr_training_instruct_pane_ParamLimits

0xb555,	// (0x0006d257) list_single_hwr_training_instruct_pane

0x0fa7,	// (0x00062ca9) list_single_hwr_training_instruct_pane_t1

0xe7e1,	// (0x000704e3) bg_frame_shadow_pane_g1

0x0fb6,	// (0x00062cb8) bg_frame_shadow_pane_g2

0x0fbe,	// (0x00062cc0) bg_frame_shadow_pane_g3

0x0fc6,	// (0x00062cc8) bg_frame_shadow_pane_g4

0x0fce,	// (0x00062cd0) bg_frame_shadow_pane_g5

0x0fd6,	// (0x00062cd8) bg_frame_shadow_pane_g6

0x0fde,	// (0x00062ce0) bg_frame_shadow_pane_g7

0x0937,	// (0x00062639) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x000715aa) bg_frame_shadow_pane_g

0x002f,	// (0x00061d31) main_video_tele_dialer_pane

0xb58b,	// (0x0006d28d) aid_size_cell_video_keypad_ParamLimits

0xb58b,	// (0x0006d28d) aid_size_cell_video_keypad

0xb59b,	// (0x0006d29d) grid_video_dialer_keypad_pane_ParamLimits

0xb59b,	// (0x0006d29d) grid_video_dialer_keypad_pane

0xb5cf,	// (0x0006d2d1) video_down_pane_cp_ParamLimits

0xb5cf,	// (0x0006d2d1) video_down_pane_cp

0xb5f9,	// (0x0006d2fb) cell_video_dialer_keypad_pane_ParamLimits

0xb5f9,	// (0x0006d2fb) cell_video_dialer_keypad_pane

0x0fe6,	// (0x00062ce8) bg_button_pane_cp08_ParamLimits

0x0fe6,	// (0x00062ce8) bg_button_pane_cp08

0xb60e,	// (0x0006d310) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb60e,	// (0x0006d310) cell_video_dialer_keypad_pane_g1

0xadd8,	// (0x0006cada) mup3_rocker2_pane_ParamLimits

0xadd8,	// (0x0006cada) mup3_rocker2_pane

0xe8a1,	// (0x000705a3) mup3_rocker2_pane_g1

0x9acb,	// (0x0006b7cd) main_dialer2_pane

0x002f,	// (0x00061d31) main_mp4_pane

0xb64d,	// (0x0006d34f) main_mp4_pane_g1_ParamLimits

0xb64d,	// (0x0006d34f) main_mp4_pane_g1

0xb65b,	// (0x0006d35d) main_mp4_pane_g2_ParamLimits

0xb65b,	// (0x0006d35d) main_mp4_pane_g2

0xb669,	// (0x0006d36b) main_mp4_pane_g3_ParamLimits

0xb669,	// (0x0006d36b) main_mp4_pane_g3

0xb6ae,	// (0x0006d3b0) main_mp4_pane_g4_ParamLimits

0xb6ae,	// (0x0006d3b0) main_mp4_pane_g4

0xb6d6,	// (0x0006d3d8) main_mp4_pane_g5_ParamLimits

0xb6d6,	// (0x0006d3d8) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x000715ca) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x000715ca) main_mp4_pane_g

0xb726,	// (0x0006d428) main_mp4_pane_t1_ParamLimits

0xb726,	// (0x0006d428) main_mp4_pane_t1

0xb782,	// (0x0006d484) main_mp4_pane_t2_ParamLimits

0xb782,	// (0x0006d484) main_mp4_pane_t2

0x112e,	// (0x00062e30) main_mp4_pane_t3_ParamLimits

0x112e,	// (0x00062e30) main_mp4_pane_t3

0xb7d4,	// (0x0006d4d6) main_mp4_pane_t4_ParamLimits

0xb7d4,	// (0x0006d4d6) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x000715d7) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x000715d7) main_mp4_pane_t

0xb818,	// (0x0006d51a) mp4_progress_pane_ParamLimits

0xb818,	// (0x0006d51a) mp4_progress_pane

0xb862,	// (0x0006d564) mp4_rocker_pane_ParamLimits

0xb862,	// (0x0006d564) mp4_rocker_pane

0x11e4,	// (0x00062ee6) mp4_progress_pane_t1

0x11fd,	// (0x00062eff) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x000715e0) mp4_progress_pane_t

0x1216,	// (0x00062f18) mup_progress_pane_cp04

0xe8a1,	// (0x000705a3) mp4_rocker_pane_g1

0xb882,	// (0x0006d584) aid_cell_size_keypad2_ParamLimits

0xb882,	// (0x0006d584) aid_cell_size_keypad2

0xb892,	// (0x0006d594) dialer2_ne_pane_ParamLimits

0xb892,	// (0x0006d594) dialer2_ne_pane

0xb8a0,	// (0x0006d5a2) grid_dialer2_keypad_pane_ParamLimits

0xb8a0,	// (0x0006d5a2) grid_dialer2_keypad_pane

0x1b05,	// (0x00063807) bg_popup_call_pane_cp07_ParamLimits

0x1b05,	// (0x00063807) bg_popup_call_pane_cp07

0xb8b0,	// (0x0006d5b2) dialer2_ne_pane_t1_ParamLimits

0xb8b0,	// (0x0006d5b2) dialer2_ne_pane_t1

0xb8d5,	// (0x0006d5d7) cell_dialer2_keypad_pane_ParamLimits

0xb8d5,	// (0x0006d5d7) cell_dialer2_keypad_pane

0x123e,	// (0x00062f40) bg_button_pane_pane_cp04_ParamLimits

0x123e,	// (0x00062f40) bg_button_pane_pane_cp04

0xb8ec,	// (0x0006d5ee) cell_dialer2_keypad_pane_g1_ParamLimits

0xb8ec,	// (0x0006d5ee) cell_dialer2_keypad_pane_g1

0x612f,	// (0x00067e31) aid_placing_vt_set_content_ParamLimits

0x612f,	// (0x00067e31) aid_placing_vt_set_content

0x614b,	// (0x00067e4d) aid_placing_vt_set_title_ParamLimits

0x614b,	// (0x00067e4d) aid_placing_vt_set_title

0x002f,	// (0x00061d31) main_image3_pane

0xb986,	// (0x0006d688) area_side_right_pane_cp01_ParamLimits

0xb986,	// (0x0006d688) area_side_right_pane_cp01

0x20ac,	// (0x00063dae) main_image3_pane_g1_ParamLimits

0x20ac,	// (0x00063dae) main_image3_pane_g1

0xb9b3,	// (0x0006d6b5) main_image3_pane_g2_ParamLimits

0xb9b3,	// (0x0006d6b5) main_image3_pane_g2

0xb9cc,	// (0x0006d6ce) main_image3_pane_g3_ParamLimits

0xb9cc,	// (0x0006d6ce) main_image3_pane_g3

0xb9e5,	// (0x0006d6e7) main_image3_pane_g4_ParamLimits

0xb9e5,	// (0x0006d6e7) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x000715ef) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x000715ef) main_image3_pane_g

0xb9fe,	// (0x0006d700) main_image3_pane_t1_ParamLimits

0xb9fe,	// (0x0006d700) main_image3_pane_t1

0xba23,	// (0x0006d725) main_image3_pane_t2_ParamLimits

0xba23,	// (0x0006d725) main_image3_pane_t2

0xba42,	// (0x0006d744) main_image3_pane_t3_ParamLimits

0xba42,	// (0x0006d744) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x000715f8) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x000715f8) main_image3_pane_t

0x550e,	// (0x00067210) grid_sctrl_middle_pane_cp01_ParamLimits

0x550e,	// (0x00067210) grid_sctrl_middle_pane_cp01

0xbaa3,	// (0x0006d7a5) cell_sctrl_middle_pane_cp01_ParamLimits

0xbaa3,	// (0x0006d7a5) cell_sctrl_middle_pane_cp01

0xbab4,	// (0x0006d7b6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbab4,	// (0x0006d7b6) cell_sctrl_middle_pane_cp01_g1

0x002f,	// (0x00061d31) main_call4_pane

0xbac1,	// (0x0006d7c3) aid_size_button_call4_ParamLimits

0xbac1,	// (0x0006d7c3) aid_size_button_call4

0xbaf1,	// (0x0006d7f3) call4_windows_pane_ParamLimits

0xbaf1,	// (0x0006d7f3) call4_windows_pane

0xbb0b,	// (0x0006d80d) grid_call4_button_pane_ParamLimits

0xbb0b,	// (0x0006d80d) grid_call4_button_pane

0x124a,	// (0x00062f4c) call4_windows_conf_pane

0x125f,	// (0x00062f61) popup_call4_audio_first_window_ParamLimits

0x125f,	// (0x00062f61) popup_call4_audio_first_window

0x12ab,	// (0x00062fad) popup_call4_audio_second_window_ParamLimits

0x12ab,	// (0x00062fad) popup_call4_audio_second_window

0x12bf,	// (0x00062fc1) popup_call4_audio_wait_window_ParamLimits

0x12bf,	// (0x00062fc1) popup_call4_audio_wait_window

0xbb2f,	// (0x0006d831) cell_call4_button_pane_ParamLimits

0xbb2f,	// (0x0006d831) cell_call4_button_pane

0xbb54,	// (0x0006d856) bg_button_pane_cp09_ParamLimits

0xbb54,	// (0x0006d856) bg_button_pane_cp09

0xbb60,	// (0x0006d862) cell_call4_button_pane_g1_ParamLimits

0xbb60,	// (0x0006d862) cell_call4_button_pane_g1

0xbb6d,	// (0x0006d86f) cell_call4_button_pane_t1_ParamLimits

0xbb6d,	// (0x0006d86f) cell_call4_button_pane_t1

0x1307,	// (0x00063009) popup_call4_audio_conf_window_ParamLimits

0x1307,	// (0x00063009) popup_call4_audio_conf_window

0xae0b,	// (0x0006cb0d) mup3_progress_pane_t1_ParamLimits

0xae22,	// (0x0006cb24) mup3_progress_pane_t2_ParamLimits

0xeb83,	// (0x00070885) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x000714d1) mup3_progress_pane_t_ParamLimits

0xeb9a,	// (0x0007089c) mup_progress_pane_cp03_ParamLimits

0xb343,	// (0x0006d045) mup3_control_keys_pane_g4_copy1

0xb846,	// (0x0006d548) mp4_rocker2_pane_ParamLimits

0xb846,	// (0x0006d548) mp4_rocker2_pane

0x1323,	// (0x00063025) mp4_rocker2_pane_g1

0x131b,	// (0x0006301d) mp4_rocker2_pane_g2

0xbb7f,	// (0x0006d881) mp4_rocker2_pane_g3

0xbb87,	// (0x0006d889) mp4_rocker2_pane_g4

0xbb8f,	// (0x0006d891) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00071601) mp4_rocker2_pane_g

0x002f,	// (0x00061d31) main_camera4_pane

0x002f,	// (0x00061d31) main_video4_pane

0xb5ab,	// (0x0006d2ad) main_video_tele_dialer_pane_t1_ParamLimits

0xb5ab,	// (0x0006d2ad) main_video_tele_dialer_pane_t1

0xb5bd,	// (0x0006d2bf) main_video_tele_dialer_pane_t2_ParamLimits

0xb5bd,	// (0x0006d2bf) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x000715bb) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x000715bb) main_video_tele_dialer_pane_t

0xbbaf,	// (0x0006d8b1) cam4_autofocus_pane_ParamLimits

0xbbaf,	// (0x0006d8b1) cam4_autofocus_pane

0xbbbd,	// (0x0006d8bf) cam4_image_uncrop_pane_ParamLimits

0xbbbd,	// (0x0006d8bf) cam4_image_uncrop_pane

0xbbd4,	// (0x0006d8d6) cam4_indicators_pane_ParamLimits

0xbbd4,	// (0x0006d8d6) cam4_indicators_pane

0xbbf0,	// (0x0006d8f2) main_camera4_pane_g1_ParamLimits

0xbbf0,	// (0x0006d8f2) main_camera4_pane_g1

0xbbfc,	// (0x0006d8fe) main_camera4_pane_g2_ParamLimits

0xbbfc,	// (0x0006d8fe) main_camera4_pane_g2

0xbbfc,	// (0x0006d8fe) main_camera4_pane_g3_ParamLimits

0xbbfc,	// (0x0006d8fe) main_camera4_pane_g3

0xbc08,	// (0x0006d90a) main_camera4_pane_g4_ParamLimits

0xbc08,	// (0x0006d90a) main_camera4_pane_g4

0xbc14,	// (0x0006d916) main_camera4_pane_g5_ParamLimits

0xbc14,	// (0x0006d916) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x0007160c) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x0007160c) main_camera4_pane_g

0xbc2e,	// (0x0006d930) main_camera4_pane_t1_ParamLimits

0xbc2e,	// (0x0006d930) main_camera4_pane_t1

0xeb08,	// (0x0007080a) bg_tb_trans_pane_cp06

0xbc75,	// (0x0006d977) cam4_indicators_pane_g1

0xbc86,	// (0x0006d988) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00071627) cam4_indicators_pane_g

0xbca4,	// (0x0006d9a6) cam4_indicators_pane_t1

0xbcce,	// (0x0006d9d0) main_video4_pane_g1_ParamLimits

0xbcce,	// (0x0006d9d0) main_video4_pane_g1

0xbcda,	// (0x0006d9dc) main_video4_pane_g2_ParamLimits

0xbcda,	// (0x0006d9dc) main_video4_pane_g2

0xbce6,	// (0x0006d9e8) main_video4_pane_g3_ParamLimits

0xbce6,	// (0x0006d9e8) main_video4_pane_g3

0xbcf2,	// (0x0006d9f4) main_video4_pane_g4_ParamLimits

0xbcf2,	// (0x0006d9f4) main_video4_pane_g4

0x0004,

0xf92c,	// (0x0007162e) main_video4_pane_g_ParamLimits

0xf92c,	// (0x0007162e) main_video4_pane_g

0xbd12,	// (0x0006da14) vid4_indicators_pane_ParamLimits

0xbd12,	// (0x0006da14) vid4_indicators_pane

0xbd30,	// (0x0006da32) video4_image_uncrop_cif_pane_ParamLimits

0xbd30,	// (0x0006da32) video4_image_uncrop_cif_pane

0xbd3f,	// (0x0006da41) video4_image_uncrop_nhd_pane_ParamLimits

0xbd3f,	// (0x0006da41) video4_image_uncrop_nhd_pane

0xbbbd,	// (0x0006d8bf) video4_image_uncrop_vga_pane_ParamLimits

0xbbbd,	// (0x0006d8bf) video4_image_uncrop_vga_pane

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp07

0xbc75,	// (0x0006d977) vid4_indicators_pane_g1

0xbd54,	// (0x0006da56) vid4_indicators_pane_g2

0xbd65,	// (0x0006da67) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00071639) vid4_indicators_pane_g

0xbd92,	// (0x0006da94) vid4_indicators_pane_t1

0xbdab,	// (0x0006daad) cam4_autofocus_pane_g1

0xbdb3,	// (0x0006dab5) cam4_autofocus_pane_g2

0xbdbb,	// (0x0006dabd) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00071644) cam4_autofocus_pane_g

0xbdc3,	// (0x0006dac5) cam4_autofocus_pane_g3_copy1

0xb5dd,	// (0x0006d2df) video_down_pane_cp_t1

0xb5eb,	// (0x0006d2ed) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x000715c0) video_down_pane_cp_t

0x550e,	// (0x00067210) popup_vitu2_window_ParamLimits

0x550e,	// (0x00067210) popup_vitu2_window

0xbdcb,	// (0x0006dacd) aid_size_cell2_itu2_ParamLimits

0xbdcb,	// (0x0006dacd) aid_size_cell2_itu2

0xbded,	// (0x0006daef) aid_size_cell_itu2_ParamLimits

0xbded,	// (0x0006daef) aid_size_cell_itu2

0x1b05,	// (0x00063807) bg_popup_window_pane_cp09_ParamLimits

0x1b05,	// (0x00063807) bg_popup_window_pane_cp09

0xbe31,	// (0x0006db33) field_vitu2_entry_pane_ParamLimits

0xbe31,	// (0x0006db33) field_vitu2_entry_pane

0xbe51,	// (0x0006db53) grid_vitu2_function_pane_ParamLimits

0xbe51,	// (0x0006db53) grid_vitu2_function_pane

0xbe95,	// (0x0006db97) grid_vitu2_itu_pane_ParamLimits

0xbe95,	// (0x0006db97) grid_vitu2_itu_pane

0xbf0b,	// (0x0006dc0d) cell_vitu2_itu_pane_ParamLimits

0xbf0b,	// (0x0006dc0d) cell_vitu2_itu_pane

0xbf20,	// (0x0006dc22) cell_vitu2_function_pane_ParamLimits

0xbf20,	// (0x0006dc22) cell_vitu2_function_pane

0x132b,	// (0x0006302d) bg_popup_call_pane_cp08_ParamLimits

0x132b,	// (0x0006302d) bg_popup_call_pane_cp08

0x1344,	// (0x00063046) field_vitu2_entry_pane_g1

0x1350,	// (0x00063052) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x0007164b) field_vitu2_entry_pane_g

0x456a,	// (0x0006626c) field_vitu2_entry_pane_t1_ParamLimits

0x456a,	// (0x0006626c) field_vitu2_entry_pane_t1

0x459a,	// (0x0006629c) field_vitu2_entry_pane_t2_ParamLimits

0x459a,	// (0x0006629c) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00071652) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00071652) field_vitu2_entry_pane_t

0xbf61,	// (0x0006dc63) bg_button_pane_cp010_ParamLimits

0xbf61,	// (0x0006dc63) bg_button_pane_cp010

0xbf6f,	// (0x0006dc71) cell_vitu2_itu_pane_g1

0xbf8d,	// (0x0006dc8f) cell_vitu2_itu_pane_t1_ParamLimits

0xbf8d,	// (0x0006dc8f) cell_vitu2_itu_pane_t1

0x45b7,	// (0x000662b9) cell_vitu2_itu_pane_t2_ParamLimits

0x45b7,	// (0x000662b9) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x0007165c) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x0007165c) cell_vitu2_itu_pane_t

0x9abd,	// (0x0006b7bf) bg_button_pane_cp011

0xbfdf,	// (0x0006dce1) cell_vitu2_function_pane_g1

0x002f,	// (0x00061d31) main_myfav_hc_pane

0xba84,	// (0x0006d786) popup_image3_note_pane_ParamLimits

0xba84,	// (0x0006d786) popup_image3_note_pane

0xba92,	// (0x0006d794) popup_image3_tool_bar_pane_ParamLimits

0xba92,	// (0x0006d794) popup_image3_tool_bar_pane

0x4625,	// (0x00066327) cell_vitu2_itu_pane_t3_ParamLimits

0x4625,	// (0x00066327) cell_vitu2_itu_pane_t3

0x002f,	// (0x00061d31) bg_popup_trans_pane

0x13c1,	// (0x000630c3) grid_image3_tool_bar_pane

0x13cb,	// (0x000630cd) bg_popup_trans_pane_g1

0x0d46,	// (0x00062a48) bg_popup_trans_pane_g2

0x13d3,	// (0x000630d5) bg_popup_trans_pane_g3

0x13db,	// (0x000630dd) bg_popup_trans_pane_g4

0x13e3,	// (0x000630e5) bg_popup_trans_pane_g5

0x13eb,	// (0x000630ed) bg_popup_trans_pane_g6

0x13f3,	// (0x000630f5) bg_popup_trans_pane_g7

0x13fb,	// (0x000630fd) bg_popup_trans_pane_g8

0x0d26,	// (0x00062a28) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00071663) bg_popup_trans_pane_g

0x1403,	// (0x00063105) cell_image3_tool_bar_pane_ParamLimits

0x1403,	// (0x00063105) cell_image3_tool_bar_pane

0xe8a1,	// (0x000705a3) cell_image3_tool_bar_pane_g1

0x002f,	// (0x00061d31) bg_popup_trans_pane_cp1

0x1417,	// (0x00063119) popup_image3_note_pane_t1

0x1425,	// (0x00063127) popup_image3_note_pane_t2

0x1433,	// (0x00063135) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00071676) popup_image3_note_pane_t

0x1441,	// (0x00063143) popup_image3_note_pane_t3_copy1

0xbff3,	// (0x0006dcf5) bg_myfav_hc_instruction_pane_ParamLimits

0xbff3,	// (0x0006dcf5) bg_myfav_hc_instruction_pane

0xc00b,	// (0x0006dd0d) cell_myfav_contact_pane_ParamLimits

0xc00b,	// (0x0006dd0d) cell_myfav_contact_pane

0xc025,	// (0x0006dd27) cell_myfav_contact_pane_cp1_ParamLimits

0xc025,	// (0x0006dd27) cell_myfav_contact_pane_cp1

0xc03d,	// (0x0006dd3f) cell_myfav_contact_pane_cp2_ParamLimits

0xc03d,	// (0x0006dd3f) cell_myfav_contact_pane_cp2

0xc055,	// (0x0006dd57) cell_myfav_contact_pane_cp3_ParamLimits

0xc055,	// (0x0006dd57) cell_myfav_contact_pane_cp3

0xc06c,	// (0x0006dd6e) cell_myfav_contact_pane_cp4_ParamLimits

0xc06c,	// (0x0006dd6e) cell_myfav_contact_pane_cp4

0xc082,	// (0x0006dd84) cell_myfav_contact_pane_cp5_ParamLimits

0xc082,	// (0x0006dd84) cell_myfav_contact_pane_cp5

0xc096,	// (0x0006dd98) cell_myfav_contact_pane_cp6_ParamLimits

0xc096,	// (0x0006dd98) cell_myfav_contact_pane_cp6

0xc0aa,	// (0x0006ddac) cell_myfav_contact_pane_cp7_ParamLimits

0xc0aa,	// (0x0006ddac) cell_myfav_contact_pane_cp7

0x144f,	// (0x00063151) listscroll_gen_pane_cp05

0xc0c2,	// (0x0006ddc4) main_myfav_hc_pane_g1_ParamLimits

0xc0c2,	// (0x0006ddc4) main_myfav_hc_pane_g1

0xc0da,	// (0x0006dddc) main_myfav_hc_pane_g2_ParamLimits

0xc0da,	// (0x0006dddc) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x0007167d) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x0007167d) main_myfav_hc_pane_g

0xc10a,	// (0x0006de0c) main_myfav_hc_pane_t1_ParamLimits

0xc10a,	// (0x0006de0c) main_myfav_hc_pane_t1

0x1458,	// (0x0006315a) main_myfav_hc_pane_t2_ParamLimits

0x1458,	// (0x0006315a) main_myfav_hc_pane_t2

0x146a,	// (0x0006316c) main_myfav_hc_pane_t3_ParamLimits

0x146a,	// (0x0006316c) main_myfav_hc_pane_t3

0xc121,	// (0x0006de23) main_myfav_hc_pane_t4_ParamLimits

0xc121,	// (0x0006de23) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00071684) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00071684) main_myfav_hc_pane_t

0xe8a1,	// (0x000705a3) bg_myfav_hc_instruction_pane_g1

0x147c,	// (0x0006317e) cell_myfav_contact_pane_g1_ParamLimits

0x147c,	// (0x0006317e) cell_myfav_contact_pane_g1

0x147c,	// (0x0006317e) cell_myfav_contact_pane_g2_ParamLimits

0x147c,	// (0x0006317e) cell_myfav_contact_pane_g2

0x1488,	// (0x0006318a) cell_myfav_contact_pane_g3_ParamLimits

0x1488,	// (0x0006318a) cell_myfav_contact_pane_g3

0xeb6d,	// (0x0007086f) cell_myfav_contact_pane_g4_ParamLimits

0xeb6d,	// (0x0007086f) cell_myfav_contact_pane_g4

0x1495,	// (0x00063197) cell_myfav_contact_pane_g5_ParamLimits

0x1495,	// (0x00063197) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x0007168f) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x0007168f) cell_myfav_contact_pane_g

0xc0f2,	// (0x0006ddf4) main_myfav_hc_pane_g3_ParamLimits

0xc0f2,	// (0x0006ddf4) main_myfav_hc_pane_g3

0x542a,	// (0x0006712c) popup_adpt_find_window

0xc14b,	// (0x0006de4d) afind_page_pane_ParamLimits

0xc14b,	// (0x0006de4d) afind_page_pane

0xc158,	// (0x0006de5a) aid_size_cell_afind_ParamLimits

0xc158,	// (0x0006de5a) aid_size_cell_afind

0xc172,	// (0x0006de74) bg_popup_sub_pane_cp09_ParamLimits

0xc172,	// (0x0006de74) bg_popup_sub_pane_cp09

0xc17f,	// (0x0006de81) find_pane_cp01_ParamLimits

0xc17f,	// (0x0006de81) find_pane_cp01

0x14a1,	// (0x000631a3) grid_afind_control_pane_ParamLimits

0x14a1,	// (0x000631a3) grid_afind_control_pane

0xc18c,	// (0x0006de8e) grid_afind_pane_ParamLimits

0xc18c,	// (0x0006de8e) grid_afind_pane

0xc1a8,	// (0x0006deaa) cell_afind_pane_ParamLimits

0xc1a8,	// (0x0006deaa) cell_afind_pane

0xe8a1,	// (0x000705a3) afind_page_pane_g1

0xc1f0,	// (0x0006def2) afind_page_pane_g2

0xc1f9,	// (0x0006defb) afind_page_pane_g3

0x0002,

0xf998,	// (0x0007169a) afind_page_pane_g

0xc202,	// (0x0006df04) afind_page_pane_t1

0x14b5,	// (0x000631b7) cell_afind_grid_control_pane_ParamLimits

0x14b5,	// (0x000631b7) cell_afind_grid_control_pane

0x123e,	// (0x00062f40) bg_button_pane_cp69_ParamLimits

0x123e,	// (0x00062f40) bg_button_pane_cp69

0xc219,	// (0x0006df1b) cell_afind_pane_g1_ParamLimits

0xc219,	// (0x0006df1b) cell_afind_pane_g1

0xc226,	// (0x0006df28) cell_afind_pane_t1_ParamLimits

0xc226,	// (0x0006df28) cell_afind_pane_t1

0x0b39,	// (0x0006283b) bg_button_pane_cp72

0x14c4,	// (0x000631c6) cell_afind_grid_control_pane_g1

0x8679,	// (0x0006a37b) aid_image_placing_area_ParamLimits

0x8679,	// (0x0006a37b) aid_image_placing_area

0xee78,	// (0x00070b7a) field_vitu_entry_pane_g1_ParamLimits

0xee78,	// (0x00070b7a) field_vitu_entry_pane_g1

0xee84,	// (0x00070b86) field_vitu_entry_pane_g2_ParamLimits

0xee84,	// (0x00070b86) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x0007154b) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x0007154b) field_vitu_entry_pane_g

0xb3ce,	// (0x0006d0d0) cell_vitu_itu_pane_g1_ParamLimits

0xb410,	// (0x0006d112) cell_vitu_itu_pane_t3_ParamLimits

0xb410,	// (0x0006d112) cell_vitu_itu_pane_t3

0x11e4,	// (0x00062ee6) mp4_progress_pane_t1_ParamLimits

0x11fd,	// (0x00062eff) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x000715e0) mp4_progress_pane_t_ParamLimits

0x1216,	// (0x00062f18) mup_progress_pane_cp04_ParamLimits

0xc135,	// (0x0006de37) main_myfav_hc_pane_t5_ParamLimits

0xc135,	// (0x0006de37) main_myfav_hc_pane_t5

0x4224,	// (0x00065f26) aid_zoom_text_primary

0x542a,	// (0x0006712c) popup_adpt_find_window_ParamLimits

0x9abd,	// (0x0006b7bf) main_cam_set_pane

0xbbe2,	// (0x0006d8e4) cam4_zoom_pane_ParamLimits

0xbbe2,	// (0x0006d8e4) cam4_zoom_pane

0xc238,	// (0x0006df3a) main_cam_set_pane_g1_ParamLimits

0xc238,	// (0x0006df3a) main_cam_set_pane_g1

0xc246,	// (0x0006df48) main_cam_set_pane_g2_ParamLimits

0xc246,	// (0x0006df48) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x000716a1) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x000716a1) main_cam_set_pane_g

0xc252,	// (0x0006df54) main_cam_set_pane_t1_ParamLimits

0xc252,	// (0x0006df54) main_cam_set_pane_t1

0xc26e,	// (0x0006df70) main_cset_listscroll_pane_ParamLimits

0xc26e,	// (0x0006df70) main_cset_listscroll_pane

0xc299,	// (0x0006df9b) main_cset_slider_pane_ParamLimits

0xc299,	// (0x0006df9b) main_cset_slider_pane

0x14d5,	// (0x000631d7) main_cset_list_pane_ParamLimits

0x14d5,	// (0x000631d7) main_cset_list_pane

0x14e5,	// (0x000631e7) scroll_pane_cp028

0xc2b8,	// (0x0006dfba) aid_area_touch_slider

0xc2d4,	// (0x0006dfd6) cset_slider_pane

0xc2fe,	// (0x0006e000) main_cset_slider_pane_g1

0xc313,	// (0x0006e015) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x000716a6) main_cset_slider_pane_g

0x151e,	// (0x00063220) main_cset_slider_pane_t1

0xc3db,	// (0x0006e0dd) main_cset_slider_pane_t2

0xc3f5,	// (0x0006e0f7) main_cset_slider_pane_t3

0xc40f,	// (0x0006e111) main_cset_slider_pane_t4

0xc42d,	// (0x0006e12f) main_cset_slider_pane_t5

0xc44f,	// (0x0006e151) main_cset_slider_pane_t6

0xc466,	// (0x0006e168) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x000716cb) main_cset_slider_pane_t

0xc574,	// (0x0006e276) cset_list_set_pane_ParamLimits

0xc574,	// (0x0006e276) cset_list_set_pane

0xc591,	// (0x0006e293) aid_position_infowindow_above

0xc599,	// (0x0006e29b) aid_position_infowindow_below

0xc5a1,	// (0x0006e2a3) cset_list_set_pane_g1_ParamLimits

0xc5a1,	// (0x0006e2a3) cset_list_set_pane_g1

0x4672,	// (0x00066374) cset_list_set_pane_g3_ParamLimits

0x4672,	// (0x00066374) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x000716ea) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x000716ea) cset_list_set_pane_g

0x4681,	// (0x00066383) cset_list_set_pane_t1_ParamLimits

0x4681,	// (0x00066383) cset_list_set_pane_t1

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp021_ParamLimits

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp021

0x7faa,	// (0x00069cac) cset_slider_pane_g1

0x7fbc,	// (0x00069cbe) cset_slider_pane_g2

0x7fb3,	// (0x00069cb5) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x000716ef) cset_slider_pane_g

0xc5ad,	// (0x0006e2af) aid_area_touch_cam4_zoom

0xc5b5,	// (0x0006e2b7) cam4_zoom_cont_pane

0xc5bd,	// (0x0006e2bf) cam4_zoom_pane_g1

0xc5c5,	// (0x0006e2c7) cam4_zoom_pane_g2

0xc5cd,	// (0x0006e2cf) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x000716f6) cam4_zoom_pane_g

0x1e57,	// (0x00063b59) cam4_zoom_cont_pane_g1

0x1e60,	// (0x00063b62) cam4_zoom_cont_pane_g2

0x1e69,	// (0x00063b6b) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x000716fd) cam4_zoom_cont_pane_g

0xbadb,	// (0x0006d7dd) call4_image_pane_ParamLimits

0xbadb,	// (0x0006d7dd) call4_image_pane

0x124a,	// (0x00062f4c) call4_windows_conf_pane_ParamLimits

0x1289,	// (0x00062f8b) popup_call4_audio_in_window_ParamLimits

0x1289,	// (0x00062f8b) popup_call4_audio_in_window

0x002f,	// (0x00061d31) bg_popup_call2_act_pane_cp02

0x12ff,	// (0x00063001) call4_list_conf_pane

0xe8a1,	// (0x000705a3) call4_image_pane_g1

0xe8a1,	// (0x000705a3) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00071411) call4_image_pane_g

0x15be,	// (0x000632c0) list_single_graphic_popup_conf4_pane_ParamLimits

0x15be,	// (0x000632c0) list_single_graphic_popup_conf4_pane

0x002f,	// (0x00061d31) list_highlight_pane_cp022

0x15d1,	// (0x000632d3) list_single_graphic_popup_conf4_pane_g1

0x7533,	// (0x00069235) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00071704) list_single_graphic_popup_conf4_pane_g

0x15d9,	// (0x000632db) list_single_graphic_popup_conf4_pane_t1

0x624e,	// (0x00067f50) popup_vtel_slider_window_ParamLimits

0x624e,	// (0x00067f50) popup_vtel_slider_window

0x122c,	// (0x00062f2e) dialer2_ne_pane_t2_ParamLimits

0x122c,	// (0x00062f2e) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x000715e5) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x000715e5) dialer2_ne_pane_t

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp010_ParamLimits

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp010

0xc5d5,	// (0x0006e2d7) popup_vtel_slider_window_g1_ParamLimits

0xc5d5,	// (0x0006e2d7) popup_vtel_slider_window_g1

0xc5e1,	// (0x0006e2e3) popup_vtel_slider_window_g2_ParamLimits

0xc5e1,	// (0x0006e2e3) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00071709) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00071709) popup_vtel_slider_window_g

0xc629,	// (0x0006e32b) vtel_slider_pane_ParamLimits

0xc629,	// (0x0006e32b) vtel_slider_pane

0xc638,	// (0x0006e33a) vtel_slider_pane_g1_ParamLimits

0xc638,	// (0x0006e33a) vtel_slider_pane_g1

0xc645,	// (0x0006e347) vtel_slider_pane_g2_ParamLimits

0xc645,	// (0x0006e347) vtel_slider_pane_g2

0xc652,	// (0x0006e354) vtel_slider_pane_g3_ParamLimits

0xc652,	// (0x0006e354) vtel_slider_pane_g3

0xc638,	// (0x0006e33a) vtel_slider_pane_g4_ParamLimits

0xc638,	// (0x0006e33a) vtel_slider_pane_g4

0xc65f,	// (0x0006e361) vtel_slider_pane_g5_ParamLimits

0xc65f,	// (0x0006e361) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00071712) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00071712) vtel_slider_pane_g

0x002f,	// (0x00061d31) main_gallery2_pane

0xbe13,	// (0x0006db15) aid_size_row_itut2_dropdow_list_ParamLimits

0xbe13,	// (0x0006db15) aid_size_row_itut2_dropdow_list

0xbe73,	// (0x0006db75) grid_vitu2_function_top_pane_ParamLimits

0xbe73,	// (0x0006db75) grid_vitu2_function_top_pane

0xbec9,	// (0x0006dbcb) popup_vitu2_dropdown_list_window_ParamLimits

0xbec9,	// (0x0006dbcb) popup_vitu2_dropdown_list_window

0xbee9,	// (0x0006dbeb) popup_vitu2_match_list_window

0xc66c,	// (0x0006e36e) cell_vitu2_function_top_pane_ParamLimits

0xc66c,	// (0x0006e36e) cell_vitu2_function_top_pane

0xc68c,	// (0x0006e38e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc68c,	// (0x0006e38e) cell_vitu2_function_top_pane_cp01

0xc6aa,	// (0x0006e3ac) cell_vitu2_function_top_wide_pane_ParamLimits

0xc6aa,	// (0x0006e3ac) cell_vitu2_function_top_wide_pane

0x9abd,	// (0x0006b7bf) bg_button_pane_cp012

0xc6c8,	// (0x0006e3ca) cell_vitu2_function_top_pane_g1

0xc6d7,	// (0x0006e3d9) bg_button_pane_cp013_ParamLimits

0xc6d7,	// (0x0006e3d9) bg_button_pane_cp013

0xc6f3,	// (0x0006e3f5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc6f3,	// (0x0006e3f5) cell_vitu2_function_top_wide_pane_g1

0x550e,	// (0x00067210) bg_popup_sub_pane_cp20

0xc70b,	// (0x0006e40d) list_vitu2_match_list_pane

0x13cb,	// (0x000630cd) bg_popup_sub_pane_cp20_g1

0x13d3,	// (0x000630d5) bg_popup_sub_pane_cp20_g2

0x0d46,	// (0x00062a48) bg_popup_sub_pane_cp20_g3

0x13db,	// (0x000630dd) bg_popup_sub_pane_cp20_g4

0x0d26,	// (0x00062a28) bg_popup_sub_pane_cp20_g5

0x15f5,	// (0x000632f7) bg_popup_sub_pane_cp20_g6

0x13eb,	// (0x000630ed) bg_popup_sub_pane_cp20_g7

0x13f3,	// (0x000630f5) bg_popup_sub_pane_cp20_g8

0x13fb,	// (0x000630fd) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x0007171d) bg_popup_sub_pane_cp20_g

0xc723,	// (0x0006e425) list_vitu2_match_list_item_pane_ParamLimits

0xc723,	// (0x0006e425) list_vitu2_match_list_item_pane

0xc735,	// (0x0006e437) list_vitu2_match_list_item_pane_t1

0x002f,	// (0x00061d31) bg_popup_sub_pane_cp21

0x73c9,	// (0x000690cb) grid_vitu2_dropdown_list_pane

0xc743,	// (0x0006e445) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc743,	// (0x0006e445) cell_vitu2_dropdown_list_char_pane

0xc764,	// (0x0006e466) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc764,	// (0x0006e466) cell_vitu2_dropdown_list_ctrl_pane

0x1627,	// (0x00063329) cell_vitu2_dropdown_list_char_pane_g1

0x161e,	// (0x00063320) cell_vitu2_dropdown_list_char_pane_g2

0x1615,	// (0x00063317) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x0007173a) cell_vitu2_dropdown_list_char_pane_g

0xc790,	// (0x0006e492) cell_vitu2_dropdown_list_char_pane_t1

0xc79e,	// (0x0006e4a0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc79e,	// (0x0006e4a0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc7ae,	// (0x0006e4b0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc7ae,	// (0x0006e4b0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc7bf,	// (0x0006e4c1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc7bf,	// (0x0006e4c1) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc7cf,	// (0x0006e4d1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc7cf,	// (0x0006e4d1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeb08,	// (0x0007080a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeb08,	// (0x0007080a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00071741) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00071741) cell_vitu2_dropdown_list_ctrl_pane_g

0xc7eb,	// (0x0006e4ed) aid_size_cell_gallery2_ParamLimits

0xc7eb,	// (0x0006e4ed) aid_size_cell_gallery2

0xc7f9,	// (0x0006e4fb) grid_gallery2_pane_ParamLimits

0xc7f9,	// (0x0006e4fb) grid_gallery2_pane

0xc808,	// (0x0006e50a) scroll_pane_cp029_ParamLimits

0xc808,	// (0x0006e50a) scroll_pane_cp029

0xc814,	// (0x0006e516) cell_gallery2_pane_ParamLimits

0xc814,	// (0x0006e516) cell_gallery2_pane

0x1630,	// (0x00063332) cell_gallery2_pane_g2

0xc845,	// (0x0006e547) cell_gallery2_pane_g3

0x163a,	// (0x0006333c) cell_gallery2_pane_g4

0x1642,	// (0x00063344) cell_gallery2_pane_g5

0x7a2c,	// (0x0006972e) grid_highlight_pane_cp10

0xbee9,	// (0x0006dbeb) popup_vitu2_match_list_window_ParamLimits

0xbefb,	// (0x0006dbfd) popup_vitu2_query_window_ParamLimits

0xbefb,	// (0x0006dbfd) popup_vitu2_query_window

0x002f,	// (0x00061d31) bg_vitu2_candi_button_pane

0x1627,	// (0x00063329) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x161e,	// (0x00063320) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1615,	// (0x00063317) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x46eb,	// (0x000663ed) bg_button_pane_cp015

0xc84d,	// (0x0006e54f) bg_button_pane_cp016

0xc857,	// (0x0006e559) bg_button_pane_cp017

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp22

0x164a,	// (0x0006334c) popup_vitu2_query_window_g1

0xc872,	// (0x0006e574) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x0007174c) popup_vitu2_query_window_g

0x4702,	// (0x00066404) popup_vitu2_query_window_t1_ParamLimits

0x4702,	// (0x00066404) popup_vitu2_query_window_t1

0x472a,	// (0x0006642c) popup_vitu2_query_window_t2_ParamLimits

0x472a,	// (0x0006642c) popup_vitu2_query_window_t2

0x473c,	// (0x0006643e) popup_vitu2_query_window_t3_ParamLimits

0x473c,	// (0x0006643e) popup_vitu2_query_window_t3

0xc880,	// (0x0006e582) popup_vitu2_query_window_t4_ParamLimits

0xc880,	// (0x0006e582) popup_vitu2_query_window_t4

0xc894,	// (0x0006e596) popup_vitu2_query_window_t5_ParamLimits

0xc894,	// (0x0006e596) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00071751) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00071751) popup_vitu2_query_window_t

0x14cd,	// (0x000631cf) main_cset_text_pane

0xc2b8,	// (0x0006dfba) aid_area_touch_slider_ParamLimits

0xc2d4,	// (0x0006dfd6) cset_slider_pane_ParamLimits

0xc2fe,	// (0x0006e000) main_cset_slider_pane_g1_ParamLimits

0xc313,	// (0x0006e015) main_cset_slider_pane_g2_ParamLimits

0x14ee,	// (0x000631f0) main_cset_slider_pane_g3_ParamLimits

0x14ee,	// (0x000631f0) main_cset_slider_pane_g3

0xc328,	// (0x0006e02a) main_cset_slider_pane_g4_ParamLimits

0xc328,	// (0x0006e02a) main_cset_slider_pane_g4

0xc337,	// (0x0006e039) main_cset_slider_pane_g5_ParamLimits

0xc337,	// (0x0006e039) main_cset_slider_pane_g5

0xc345,	// (0x0006e047) main_cset_slider_pane_g6_ParamLimits

0xc345,	// (0x0006e047) main_cset_slider_pane_g6

0xf9a4,	// (0x000716a6) main_cset_slider_pane_g_ParamLimits

0x151e,	// (0x00063220) main_cset_slider_pane_t1_ParamLimits

0xc3db,	// (0x0006e0dd) main_cset_slider_pane_t2_ParamLimits

0xc3f5,	// (0x0006e0f7) main_cset_slider_pane_t3_ParamLimits

0xc40f,	// (0x0006e111) main_cset_slider_pane_t4_ParamLimits

0xc42d,	// (0x0006e12f) main_cset_slider_pane_t5_ParamLimits

0xc44f,	// (0x0006e151) main_cset_slider_pane_t6_ParamLimits

0xc466,	// (0x0006e168) main_cset_slider_pane_t7_ParamLimits

0xc494,	// (0x0006e196) main_cset_slider_pane_t8_ParamLimits

0xc494,	// (0x0006e196) main_cset_slider_pane_t8

0xc4bc,	// (0x0006e1be) main_cset_slider_pane_t9_ParamLimits

0xc4bc,	// (0x0006e1be) main_cset_slider_pane_t9

0xc4e4,	// (0x0006e1e6) main_cset_slider_pane_t10_ParamLimits

0xc4e4,	// (0x0006e1e6) main_cset_slider_pane_t10

0xc50c,	// (0x0006e20e) main_cset_slider_pane_t11_ParamLimits

0xc50c,	// (0x0006e20e) main_cset_slider_pane_t11

0xc536,	// (0x0006e238) main_cset_slider_pane_t12_ParamLimits

0xc536,	// (0x0006e238) main_cset_slider_pane_t12

0xc555,	// (0x0006e257) main_cset_slider_pane_t13_ParamLimits

0xc555,	// (0x0006e257) main_cset_slider_pane_t13

0xf9c9,	// (0x000716cb) main_cset_slider_pane_t_ParamLimits

0x002f,	// (0x00061d31) bg_popup_sub_pane_cp011

0x1656,	// (0x00063358) main_cset_text_pane_g1

0x165e,	// (0x00063360) main_cset_text_pane_t1

0x166c,	// (0x0006336e) main_cset_text_pane_t2

0x167a,	// (0x0006337c) main_cset_text_pane_t3

0x1688,	// (0x0006338a) main_cset_text_pane_t4

0x1696,	// (0x00063398) main_cset_text_pane_t5

0x16a4,	// (0x000633a6) main_cset_text_pane_t6

0x16b2,	// (0x000633b4) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x0007175c) main_cset_text_pane_t

0x002f,	// (0x00061d31) main_cam4_burst_pane

0x002f,	// (0x00061d31) main_cam5_pane

0x6ebf,	// (0x00068bc1) bg_button_pane_cp019

0xc210,	// (0x0006df12) bg_button_pane_cp020

0x14fa,	// (0x000631fc) main_cset_slider_pane_g7_ParamLimits

0x14fa,	// (0x000631fc) main_cset_slider_pane_g7

0x1506,	// (0x00063208) main_cset_slider_pane_g8_ParamLimits

0x1506,	// (0x00063208) main_cset_slider_pane_g8

0xc35b,	// (0x0006e05d) main_cset_slider_pane_g9_ParamLimits

0xc35b,	// (0x0006e05d) main_cset_slider_pane_g9

0xc367,	// (0x0006e069) main_cset_slider_pane_g10_ParamLimits

0xc367,	// (0x0006e069) main_cset_slider_pane_g10

0xc373,	// (0x0006e075) main_cset_slider_pane_g11_ParamLimits

0xc373,	// (0x0006e075) main_cset_slider_pane_g11

0xc37f,	// (0x0006e081) main_cset_slider_pane_g12_ParamLimits

0xc37f,	// (0x0006e081) main_cset_slider_pane_g12

0xc38b,	// (0x0006e08d) main_cset_slider_pane_g13_ParamLimits

0xc38b,	// (0x0006e08d) main_cset_slider_pane_g13

0xc399,	// (0x0006e09b) main_cset_slider_pane_g14_ParamLimits

0xc399,	// (0x0006e09b) main_cset_slider_pane_g14

0xc3a7,	// (0x0006e0a9) main_cset_slider_pane_g15_ParamLimits

0xc3a7,	// (0x0006e0a9) main_cset_slider_pane_g15

0x154c,	// (0x0006324e) main_cset_slider_pane_t14_ParamLimits

0x154c,	// (0x0006324e) main_cset_slider_pane_t14

0x1585,	// (0x00063287) main_cset_slider_pane_t15_ParamLimits

0x1585,	// (0x00063287) main_cset_slider_pane_t15

0xc8a8,	// (0x0006e5aa) aid_cam4_burst_size_cell_ParamLimits

0xc8a8,	// (0x0006e5aa) aid_cam4_burst_size_cell

0xc8c4,	// (0x0006e5c6) grid_cam4_burst_pane_ParamLimits

0xc8c4,	// (0x0006e5c6) grid_cam4_burst_pane

0xc8f4,	// (0x0006e5f6) linegrid_cam4_burst_pane_ParamLimits

0xc8f4,	// (0x0006e5f6) linegrid_cam4_burst_pane

0xc916,	// (0x0006e618) scroll_pane_cp30_ParamLimits

0xc916,	// (0x0006e618) scroll_pane_cp30

0xc922,	// (0x0006e624) cell_cam4_burst_pane_ParamLimits

0xc922,	// (0x0006e624) cell_cam4_burst_pane

0x16c0,	// (0x000633c2) linegrid_cam4_burst_pane_g1_ParamLimits

0x16c0,	// (0x000633c2) linegrid_cam4_burst_pane_g1

0xc95e,	// (0x0006e660) linegrid_cam4_burst_pane_g2_ParamLimits

0xc95e,	// (0x0006e660) linegrid_cam4_burst_pane_g2

0x16cd,	// (0x000633cf) linegrid_cam4_burst_pane_g3_ParamLimits

0x16cd,	// (0x000633cf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x0007176b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x0007176b) linegrid_cam4_burst_pane_g

0xc96f,	// (0x0006e671) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc96f,	// (0x0006e671) linegrid_cam4_burst_pane_g3_copy1

0x16da,	// (0x000633dc) linegrid_cam4_burst_pane_g4_ParamLimits

0x16da,	// (0x000633dc) linegrid_cam4_burst_pane_g4

0xc989,	// (0x0006e68b) linegrid_cam4_burst_pane_g5_ParamLimits

0xc989,	// (0x0006e68b) linegrid_cam4_burst_pane_g5

0xc99a,	// (0x0006e69c) linegrid_cam4_burst_pane_g6_ParamLimits

0xc99a,	// (0x0006e69c) linegrid_cam4_burst_pane_g6

0x16e7,	// (0x000633e9) linegrid_cam4_burst_pane_g7_ParamLimits

0x16e7,	// (0x000633e9) linegrid_cam4_burst_pane_g7

0xc9ab,	// (0x0006e6ad) cell_cam4_burst_pane_g1

0x1700,	// (0x00063402) main_cam5_pane_t1_ParamLimits

0x1700,	// (0x00063402) main_cam5_pane_t1

0x1712,	// (0x00063414) main_cam5_pane_t2_ParamLimits

0x1712,	// (0x00063414) main_cam5_pane_t2

0x1724,	// (0x00063426) main_cam5_pane_t3_ParamLimits

0x1724,	// (0x00063426) main_cam5_pane_t3

0x1736,	// (0x00063438) main_cam5_pane_t4_ParamLimits

0x1736,	// (0x00063438) main_cam5_pane_t4

0x174c,	// (0x0006344e) main_cam5_pane_t5_ParamLimits

0x174c,	// (0x0006344e) main_cam5_pane_t5

0x175e,	// (0x00063460) main_cam5_pane_t6_ParamLimits

0x175e,	// (0x00063460) main_cam5_pane_t6

0x1772,	// (0x00063474) main_cam5_pane_t7_ParamLimits

0x1772,	// (0x00063474) main_cam5_pane_t7

0x1784,	// (0x00063486) main_cam5_pane_t8_ParamLimits

0x1784,	// (0x00063486) main_cam5_pane_t8

0x17a0,	// (0x000634a2) main_cam5_pane_t9_ParamLimits

0x17a0,	// (0x000634a2) main_cam5_pane_t9

0x17b2,	// (0x000634b4) main_cam5_pane_t10_ParamLimits

0x17b2,	// (0x000634b4) main_cam5_pane_t10

0x17c4,	// (0x000634c6) main_cam5_pane_t11_ParamLimits

0x17c4,	// (0x000634c6) main_cam5_pane_t11

0x17d6,	// (0x000634d8) main_cam5_pane_t12_ParamLimits

0x17d6,	// (0x000634d8) main_cam5_pane_t12

0x17eb,	// (0x000634ed) main_cam5_pane_t13_ParamLimits

0x17eb,	// (0x000634ed) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00071777) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00071777) main_cam5_pane_t

0x54d7,	// (0x000671d9) popup_scut_keymap_window_ParamLimits

0x54d7,	// (0x000671d9) popup_scut_keymap_window

0xc9be,	// (0x0006e6c0) aid_size_cell_brow_shortcut

0x7a2c,	// (0x0006972e) bg_popup_window_pane_cp010

0xc9ca,	// (0x0006e6cc) grid_scut_pane

0xc9d6,	// (0x0006e6d8) cell_scut_pane_ParamLimits

0xc9d6,	// (0x0006e6d8) cell_scut_pane

0xc9ed,	// (0x0006e6ef) cell_scut_pane_g1

0x1808,	// (0x0006350a) cell_scut_pane_t1

0x1817,	// (0x00063519) cell_scut_pane_t2

0xc9f6,	// (0x0006e6f8) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00071792) cell_scut_pane_t

0xaa4f,	// (0x0006c751) main_mup3_pane_g8_ParamLimits

0xaa4f,	// (0x0006c751) main_mup3_pane_g8

0xbe21,	// (0x0006db23) area_vitu2_query_pane_ParamLimits

0xbe21,	// (0x0006db23) area_vitu2_query_pane

0x46f5,	// (0x000663f7) input_focus_pane_cp08

0x1826,	// (0x00063528) area_vitu2_query_pane_g1

0x4764,	// (0x00066466) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00071799) area_vitu2_query_pane_g

0xca04,	// (0x0006e706) area_vitu2_query_pane_t1_ParamLimits

0xca04,	// (0x0006e706) area_vitu2_query_pane_t1

0xca18,	// (0x0006e71a) area_vitu2_query_pane_t2_ParamLimits

0xca18,	// (0x0006e71a) area_vitu2_query_pane_t2

0x4775,	// (0x00066477) area_vitu2_query_pane_t3_ParamLimits

0x4775,	// (0x00066477) area_vitu2_query_pane_t3

0x479d,	// (0x0006649f) area_vitu2_query_pane_t4_ParamLimits

0x479d,	// (0x0006649f) area_vitu2_query_pane_t4

0x47c5,	// (0x000664c7) area_vitu2_query_pane_t5_ParamLimits

0x47c5,	// (0x000664c7) area_vitu2_query_pane_t5

0x47ed,	// (0x000664ef) area_vitu2_query_pane_t6_ParamLimits

0x47ed,	// (0x000664ef) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x0007179e) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x0007179e) area_vitu2_query_pane_t

0xca2c,	// (0x0006e72e) bg_button_pane_cp018

0xca3a,	// (0x0006e73c) bg_button_pane_cp021

0x4839,	// (0x0006653b) bg_button_pane_cp022

0x484a,	// (0x0006654c) input_focus_pane_cp09

0x7865,	// (0x00069567) aid_size_touch_mv_arrow_left

0x7890,	// (0x00069592) aid_size_touch_mv_arrow_right

0xc3bf,	// (0x0006e0c1) main_cset_slider_pane_g16_ParamLimits

0xc3bf,	// (0x0006e0c1) main_cset_slider_pane_g16

0xc3cd,	// (0x0006e0cf) main_cset_slider_pane_g17_ParamLimits

0xc3cd,	// (0x0006e0cf) main_cset_slider_pane_g17

0xc9ab,	// (0x0006e6ad) cell_cam4_burst_pane_g1_ParamLimits

0x002f,	// (0x00061d31) compa_mode_pane

0xc5ed,	// (0x0006e2ef) popup_vtel_slider_window_g3_ParamLimits

0xc5ed,	// (0x0006e2ef) popup_vtel_slider_window_g3

0xc601,	// (0x0006e303) popup_vtel_slider_window_g4_ParamLimits

0xc601,	// (0x0006e303) popup_vtel_slider_window_g4

0xc615,	// (0x0006e317) popup_vtel_slider_window_t1_ParamLimits

0xc615,	// (0x0006e317) popup_vtel_slider_window_t1

0x002f,	// (0x00061d31) main_cl_pane

0x9b57,	// (0x0006b859) popup_imed_adjust2_window_ParamLimits

0x9aaf,	// (0x0006b7b1) bg_tb_trans_pane_cp05_ParamLimits

0xedad,	// (0x00070aaf) popup_imed_adjust2_window_g1_ParamLimits

0xedbc,	// (0x00070abe) popup_imed_adjust2_window_g2_ParamLimits

0xedbc,	// (0x00070abe) popup_imed_adjust2_window_g2

0xedc8,	// (0x00070aca) popup_imed_adjust2_window_g3_ParamLimits

0xedc8,	// (0x00070aca) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x0007150f) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x0007150f) popup_imed_adjust2_window_g

0xedd4,	// (0x00070ad6) popup_imed_adjust2_window_t1_ParamLimits

0xedec,	// (0x00070aee) slider_imed_adjust_pane_ParamLimits

0xee00,	// (0x00070b02) slider_imed_adjust_pane_g1_ParamLimits

0xee10,	// (0x00070b12) slider_imed_adjust_pane_g2_ParamLimits

0xee20,	// (0x00070b22) slider_imed_adjust_pane_g3_ParamLimits

0xee31,	// (0x00070b33) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00071516) slider_imed_adjust_pane_g_ParamLimits

0xbb97,	// (0x0006d899) aid_touch_area_cam4_ParamLimits

0xbb97,	// (0x0006d899) aid_touch_area_cam4

0xbba7,	// (0x0006d8a9) battery_pane_cp01

0xbc22,	// (0x0006d924) main_camera4_pane_g6_ParamLimits

0xbc22,	// (0x0006d924) main_camera4_pane_g6

0xbc40,	// (0x0006d942) main_camera4_pane_t2_ParamLimits

0xbc40,	// (0x0006d942) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00071619) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00071619) main_camera4_pane_t

0xbcbe,	// (0x0006d9c0) aid_touch_area_vid4_ParamLimits

0xbcbe,	// (0x0006d9c0) aid_touch_area_vid4

0xbcfe,	// (0x0006da00) main_video4_pane_g5_ParamLimits

0xbcfe,	// (0x0006da00) main_video4_pane_g5

0xbd20,	// (0x0006da22) vid4_progress_pane_ParamLimits

0xbd20,	// (0x0006da22) vid4_progress_pane

0x1512,	// (0x00063214) main_cset_slider_pane_g18_ParamLimits

0x1512,	// (0x00063214) main_cset_slider_pane_g18

0x16f4,	// (0x000633f6) cell_cam4_burst_pane_g2_ParamLimits

0x16f4,	// (0x000633f6) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00071772) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00071772) cell_cam4_burst_pane_g

0xca46,	// (0x0006e748) bg_cl_pane_ParamLimits

0xca46,	// (0x0006e748) bg_cl_pane

0xca52,	// (0x0006e754) cl_header_pane_ParamLimits

0xca52,	// (0x0006e754) cl_header_pane

0xca5e,	// (0x0006e760) cl_listscroll_pane_ParamLimits

0xca5e,	// (0x0006e760) cl_listscroll_pane

0x18ce,	// (0x000635d0) bg_cl_pane_g1

0x18d6,	// (0x000635d8) bg_cl_pane_g2

0x18de,	// (0x000635e0) bg_cl_pane_g3

0x18e6,	// (0x000635e8) bg_cl_pane_g4

0x18ee,	// (0x000635f0) bg_cl_pane_g5

0x18f6,	// (0x000635f8) bg_cl_pane_g6

0x18fe,	// (0x00063600) bg_cl_pane_g7

0x1906,	// (0x00063608) bg_cl_pane_g8

0x190e,	// (0x00063610) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x000717ad) bg_cl_pane_g

0xca6a,	// (0x0006e76c) aid_height_cl_leading_ParamLimits

0xca6a,	// (0x0006e76c) aid_height_cl_leading

0xca76,	// (0x0006e778) aid_height_cl_text_ParamLimits

0xca76,	// (0x0006e778) aid_height_cl_text

0x550e,	// (0x00067210) bg_cl_header_pane_ParamLimits

0x550e,	// (0x00067210) bg_cl_header_pane

0xca8e,	// (0x0006e790) cl_header_pane_g1_ParamLimits

0xca8e,	// (0x0006e790) cl_header_pane_g1

0xca9b,	// (0x0006e79d) cl_header_pane_t1_ParamLimits

0xca9b,	// (0x0006e79d) cl_header_pane_t1

0x1916,	// (0x00063618) cl_list_pane

0x14e5,	// (0x000631e7) hc_scroll_pane_cp01

0x0d26,	// (0x00062a28) bg_cl_header_pane_g1

0x13cb,	// (0x000630cd) bg_cl_header_pane_g2

0x0d46,	// (0x00062a48) bg_cl_header_pane_g3

0x13db,	// (0x000630dd) bg_cl_header_pane_g4

0x13d3,	// (0x000630d5) bg_cl_header_pane_g5

0x15f5,	// (0x000632f7) bg_cl_header_pane_g6

0x13f3,	// (0x000630f5) bg_cl_header_pane_g7

0x13fb,	// (0x000630fd) bg_cl_header_pane_g8

0x13eb,	// (0x000630ed) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x000717c0) bg_cl_header_pane_g

0xcaad,	// (0x0006e7af) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcaad,	// (0x0006e7af) hc_cl_list_double_graphic_heading_pane

0xcac4,	// (0x0006e7c6) hc_cl_list_single_graphic_pane_ParamLimits

0xcac4,	// (0x0006e7c6) hc_cl_list_single_graphic_pane

0xcae4,	// (0x0006e7e6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcae4,	// (0x0006e7e6) hc_cl_list_single_graphic_pane_g1

0xcaf0,	// (0x0006e7f2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcaf0,	// (0x0006e7f2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x000717d3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x000717d3) hc_cl_list_single_graphic_pane_g

0xcb04,	// (0x0006e806) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcb04,	// (0x0006e806) hc_cl_list_single_graphic_pane_t1

0xcae4,	// (0x0006e7e6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcae4,	// (0x0006e7e6) hc_cl_list_double_graphic_heading_pane_g1

0xcb19,	// (0x0006e81b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcb19,	// (0x0006e81b) hc_cl_list_double_graphic_heading_pane_g2

0xcb2d,	// (0x0006e82f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcb2d,	// (0x0006e82f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x000717d8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x000717d8) hc_cl_list_double_graphic_heading_pane_g

0xcb41,	// (0x0006e843) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcb41,	// (0x0006e843) hc_cl_list_double_graphic_heading_pane_t1

0xcb56,	// (0x0006e858) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xcb56,	// (0x0006e858) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x000717df) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x000717df) hc_cl_list_double_graphic_heading_pane_t

0xcb73,	// (0x0006e875) vid4_progress_pane_g1

0xcb83,	// (0x0006e885) vid4_progress_pane_g2

0xcb93,	// (0x0006e895) vid4_progress_pane_g3

0xbc86,	// (0x0006d988) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x000717e4) vid4_progress_pane_g

0xcb9f,	// (0x0006e8a1) vid4_progress_pane_t1

0xcbb4,	// (0x0006e8b6) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x000717ef) vid4_progress_pane_t

0xcbdf,	// (0x0006e8e1) wait_bar_pane_cp07

0xa5eb,	// (0x0006c2ed) blid_firmament_pane_ParamLimits

0xe6d5,	// (0x000703d7) popup_blid_sat_info2_window_g1

0xe6f9,	// (0x000703fb) popup_blid_sat_info2_window_t3

0xe707,	// (0x00070409) popup_blid_sat_info2_window_t4

0xe715,	// (0x00070417) popup_blid_sat_info2_window_t5

0xe723,	// (0x00070425) popup_blid_sat_info2_window_t6

0xe733,	// (0x00070435) popup_blid_sat_info2_window_t7

0xe741,	// (0x00070443) popup_blid_sat_info2_window_t8

0xe74f,	// (0x00070451) popup_blid_sat_info2_window_t9

0xe75d,	// (0x0007045f) popup_blid_sat_info2_window_t10

0xe821,	// (0x00070523) aid_firma_cardinal_ParamLimits

0xe835,	// (0x00070537) blid_firmament_pane_t1_ParamLimits

0xe84c,	// (0x0007054e) blid_firmament_pane_t2_ParamLimits

0xe863,	// (0x00070565) blid_firmament_pane_t3_ParamLimits

0xe87a,	// (0x0007057c) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00071408) blid_firmament_pane_t_ParamLimits

0xe891,	// (0x00070593) blid_sat_info_pane_ParamLimits

0x9abd,	// (0x0006b7bf) main_cam_set_pane_ParamLimits

0xb1e8,	// (0x0006ceea) aid_size_cell_colour_35_ParamLimits

0xb202,	// (0x0006cf04) aid_size_cell_colour_112_ParamLimits

0xb219,	// (0x0006cf1b) aid_size_cell_effect_ParamLimits

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp02_ParamLimits

0xeccb,	// (0x000709cd) heading_imed_pane_ParamLimits

0xb233,	// (0x0006cf35) listscroll_imed_pane_ParamLimits

0x8e57,	// (0x0006ab59) popup_call2_audio_first_window_g5_ParamLimits

0x8e57,	// (0x0006ab59) popup_call2_audio_first_window_g5

0xb954,	// (0x0006d656) aid_size_touch_image3_arrow_left_ParamLimits

0xb954,	// (0x0006d656) aid_size_touch_image3_arrow_left

0xb96a,	// (0x0006d66c) aid_size_touch_image3_arrow_right_ParamLimits

0xb96a,	// (0x0006d66c) aid_size_touch_image3_arrow_right

0xcbca,	// (0x0006e8cc) vid4_progress_pane_t3

0xb4d9,	// (0x0006d1db) main_hwr_training_symbol_option_pane_ParamLimits

0xb4d9,	// (0x0006d1db) main_hwr_training_symbol_option_pane

0xf09a,	// (0x00070d9c) popup_hwr_training_preview_window_ParamLimits

0xf09a,	// (0x00070d9c) popup_hwr_training_preview_window

0xb53a,	// (0x0006d23c) hwr_training_navi_pane_g5_ParamLimits

0xb53a,	// (0x0006d23c) hwr_training_navi_pane_g5

0x13b9,	// (0x000630bb) popup_char_count_window

0x550e,	// (0x00067210) bg_popup_sub_pane_cp20_ParamLimits

0xc70b,	// (0x0006e40d) list_vitu2_match_list_pane_ParamLimits

0xc717,	// (0x0006e419) vitu2_page_scroll_pane_ParamLimits

0xc717,	// (0x0006e419) vitu2_page_scroll_pane

0x1979,	// (0x0006367b) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1979,	// (0x0006367b) list_single_hwr_training_symbol_option_pane

0x198c,	// (0x0006368e) list_single_hwr_training_symbol_option_pane_g1

0x1994,	// (0x00063696) list_single_hwr_training_symbol_option_pane_t1

0x19a2,	// (0x000636a4) bg_button_pane_cp023

0x19ab,	// (0x000636ad) bg_button_pane_cp024

0xcbf7,	// (0x0006e8f9) vitu2_page_scroll_pane_g1

0xcbff,	// (0x0006e901) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x000717f6) vitu2_page_scroll_pane_g

0xcc07,	// (0x0006e909) vitu2_page_scroll_pane_t1

0xa4bf,	// (0x0006c1c1) popup_char_count_window_g1

0x19de,	// (0x000636e0) popup_char_count_window_g2

0x19e7,	// (0x000636e9) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x000717fb) popup_char_count_window_g

0x19f0,	// (0x000636f2) popup_char_count_window_t1

0x002f,	// (0x00061d31) main_vded2_pane

0xed99,	// (0x00070a9b) aid_size_cell_imed_line

0xeda3,	// (0x00070aa5) grid_imed_line_width_pane

0xbd76,	// (0x0006da78) vid4_indicators_pane_g4

0x19fe,	// (0x00063700) cell_imed_line_width_pane_ParamLimits

0x19fe,	// (0x00063700) cell_imed_line_width_pane

0x1a12,	// (0x00063714) cell_imed_line_width_pane_g1

0xf0e7,	// (0x00070de9) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00071802) cell_imed_line_width_pane_g

0xcc16,	// (0x0006e918) main_vded2_pane_g1_ParamLimits

0xcc16,	// (0x0006e918) main_vded2_pane_g1

0xcc23,	// (0x0006e925) main_vded2_pane_g2_ParamLimits

0xcc23,	// (0x0006e925) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00071807) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00071807) main_vded2_pane_g

0xcc31,	// (0x0006e933) vded2_slider_pane_ParamLimits

0xcc31,	// (0x0006e933) vded2_slider_pane

0xcc3e,	// (0x0006e940) aid_size_touch_vded2_end

0xcc48,	// (0x0006e94a) aid_size_touch_vded2_playhead

0x1a1b,	// (0x0006371d) aid_size_touch_vded2_start

0x1a23,	// (0x00063725) vded2_slider_bg_pane

0x1a2c,	// (0x0006372e) vded2_slider_pane_g1

0x1a35,	// (0x00063737) vded2_slider_pane_g2

0xcc50,	// (0x0006e952) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x0007180c) vded2_slider_pane_g

0x1a3d,	// (0x0006373f) vded2_slider_bg_pane_g1

0x1a46,	// (0x00063748) vded2_slider_bg_pane_g2

0x1a4f,	// (0x00063751) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00071813) vded2_slider_bg_pane_g

0x811d,	// (0x00069e1f) aid_postcard_touch_down_pane_ParamLimits

0x811d,	// (0x00069e1f) aid_postcard_touch_down_pane

0x812d,	// (0x00069e2f) aid_postcard_touch_up_pane_ParamLimits

0x812d,	// (0x00069e2f) aid_postcard_touch_up_pane

0x002f,	// (0x00061d31) main_blid2_pane

0x9ae6,	// (0x0006b7e8) popup_blid2_search_window

0x002f,	// (0x00061d31) blid2_gps_pane

0x002f,	// (0x00061d31) blid2_navig_pane

0x002f,	// (0x00061d31) blid2_search_pane

0x002f,	// (0x00061d31) blid2_tripm_pane

0xcc59,	// (0x0006e95b) blid2_search_pane_g1_ParamLimits

0xcc59,	// (0x0006e95b) blid2_search_pane_g1

0xcc69,	// (0x0006e96b) blid2_search_pane_t1_ParamLimits

0xcc69,	// (0x0006e96b) blid2_search_pane_t1

0xcc7b,	// (0x0006e97d) aid_size_cell_blid2_gps_ParamLimits

0xcc7b,	// (0x0006e97d) aid_size_cell_blid2_gps

0xcc8b,	// (0x0006e98d) blid2_gps_pane_g1_ParamLimits

0xcc8b,	// (0x0006e98d) blid2_gps_pane_g1

0xcc97,	// (0x0006e999) grid_blid2_satellite_pane_ParamLimits

0xcc97,	// (0x0006e999) grid_blid2_satellite_pane

0xcca7,	// (0x0006e9a9) blid2_navig_pane_g1_ParamLimits

0xcca7,	// (0x0006e9a9) blid2_navig_pane_g1

0xccb3,	// (0x0006e9b5) blid2_navig_pane_t1_ParamLimits

0xccb3,	// (0x0006e9b5) blid2_navig_pane_t1

0xccc5,	// (0x0006e9c7) blid2_navig_pane_t2_ParamLimits

0xccc5,	// (0x0006e9c7) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x0007181a) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x0007181a) blid2_navig_pane_t

0xccd7,	// (0x0006e9d9) blid2_navig_ring_pane_ParamLimits

0xccd7,	// (0x0006e9d9) blid2_navig_ring_pane

0xcce7,	// (0x0006e9e9) blid2_speed_pane_ParamLimits

0xcce7,	// (0x0006e9e9) blid2_speed_pane

0xccf3,	// (0x0006e9f5) blid2_tripm_pane_g1_ParamLimits

0xccf3,	// (0x0006e9f5) blid2_tripm_pane_g1

0xcd03,	// (0x0006ea05) blid2_tripm_pane_g2_ParamLimits

0xcd03,	// (0x0006ea05) blid2_tripm_pane_g2

0xcd0f,	// (0x0006ea11) blid2_tripm_pane_g3_ParamLimits

0xcd0f,	// (0x0006ea11) blid2_tripm_pane_g3

0xcd1b,	// (0x0006ea1d) blid2_tripm_pane_g4_ParamLimits

0xcd1b,	// (0x0006ea1d) blid2_tripm_pane_g4

0xcd27,	// (0x0006ea29) blid2_tripm_pane_g5_ParamLimits

0xcd27,	// (0x0006ea29) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x0007181f) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x0007181f) blid2_tripm_pane_g

0xcd43,	// (0x0006ea45) blid2_tripm_pane_t1_ParamLimits

0xcd43,	// (0x0006ea45) blid2_tripm_pane_t1

0xcd57,	// (0x0006ea59) blid2_tripm_pane_t2_ParamLimits

0xcd57,	// (0x0006ea59) blid2_tripm_pane_t2

0xcd6b,	// (0x0006ea6d) blid2_tripm_pane_t3_ParamLimits

0xcd6b,	// (0x0006ea6d) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x0007182c) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x0007182c) blid2_tripm_pane_t

0xcd9d,	// (0x0006ea9f) cell_blid2_satellite_pane_ParamLimits

0xcd9d,	// (0x0006ea9f) cell_blid2_satellite_pane

0xcdb7,	// (0x0006eab9) cell_blid2_satellite_pane_g1

0x1a58,	// (0x0006375a) cell_blid2_satellite_pane_t1

0xe8a1,	// (0x000705a3) blid2_speed_pane_g1

0x1a66,	// (0x00063768) blid2_speed_pane_t1

0x1a74,	// (0x00063776) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00071835) blid2_speed_pane_t

0xe8a1,	// (0x000705a3) blid2_navig_ring_pane_g1

0xcdc0,	// (0x0006eac2) blid2_navig_ring_pane_g2

0xcdc8,	// (0x0006eaca) blid2_navig_ring_pane_g3

0xcdd0,	// (0x0006ead2) blid2_navig_ring_pane_g4

0xcdd8,	// (0x0006eada) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x0007183a) blid2_navig_ring_pane_g

0x002f,	// (0x00061d31) bg_popup_window_pane_cp011

0x1a82,	// (0x00063784) popup_blid2_search_window_g1

0x1a8a,	// (0x0006378c) popup_blid2_search_window_t1

0x1a98,	// (0x0006379a) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00071845) popup_blid2_search_window_t

0x0c35,	// (0x00062937) main_browser_pane_g1

0x083e,	// (0x00062540) main_browser_pane_ParamLimits

0x9abd,	// (0x0006b7bf) bg_button_pane_cp011_ParamLimits

0xbfdf,	// (0x0006dce1) cell_vitu2_function_pane_g1_ParamLimits

0x9abd,	// (0x0006b7bf) bg_popup_sub_pane_cp22_ParamLimits

0x46f5,	// (0x000663f7) input_focus_pane_cp08_ParamLimits

0xc861,	// (0x0006e563) popup_vitu2_query_button_pane_ParamLimits

0xc861,	// (0x0006e563) popup_vitu2_query_button_pane

0x46eb,	// (0x000663ed) popup_vitu2_query_input_button_pane

0x164a,	// (0x0006334c) popup_vitu2_query_window_g1_ParamLimits

0xc872,	// (0x0006e574) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x0007174c) popup_vitu2_query_window_g_ParamLimits

0x002f,	// (0x00061d31) bg_button_pane_cp026

0xcde0,	// (0x0006eae2) popup_vitu2_query_input_button_pane_g1

0x002f,	// (0x00061d31) bg_button_pane_cp025

0x1aa6,	// (0x000637a8) popup_vitu2_query_button_pane_t1

0xa750,	// (0x0006c452) main_mp3_pane_t6

0xa760,	// (0x0006c462) popup_slider_window_cp01

0xbc6d,	// (0x0006d96f) cam4_battery_pane

0xbd4c,	// (0x0006da4e) cam4_battery_pane_cp02

0xcb6b,	// (0x0006e86d) cam4_battery_pane_cp01

0xcb6b,	// (0x0006e86d) cam4_battery_pane_cp03

0xe8a1,	// (0x000705a3) cam4_battery_pane_g1

0x1222,	// (0x00062f24) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x0007184a) cam4_battery_pane_g

0xe76b,	// (0x0007046d) popup_blid_sat_info2_window_t11

0x7865,	// (0x00069567) aid_size_touch_mv_arrow_left_ParamLimits

0x7890,	// (0x00069592) aid_size_touch_mv_arrow_right_ParamLimits

0x78d8,	// (0x000695da) navi_pane_g1_ParamLimits

0x78e4,	// (0x000695e6) navi_pane_g2_ParamLimits

0x7912,	// (0x00069614) navi_pane_g3_ParamLimits

0xf418,	// (0x0007111a) navi_pane_g_ParamLimits

0x79d0,	// (0x000696d2) navi_pane_mv_t1_ParamLimits

0xb23f,	// (0x0006cf41) grid_imed_effect_pane_ParamLimits

0x0b7e,	// (0x00062880) aid_placing_vt_slider_lsc

0x0b86,	// (0x00062888) aid_placing_vt_slider_prt

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp01_ParamLimits

0xea28,	// (0x0007072a) popup_image_details_window_g1_ParamLimits

0xea3b,	// (0x0007073d) popup_image_details_window_g2_ParamLimits

0xea50,	// (0x00070752) popup_image_details_window_g3_ParamLimits

0xea50,	// (0x00070752) popup_image_details_window_g3

0xf74b,	// (0x0007144d) popup_image_details_window_g_ParamLimits

0xea64,	// (0x00070766) popup_image_details_window_t1_ParamLimits

0xea76,	// (0x00070778) popup_image_details_window_t2_ParamLimits

0xea8f,	// (0x00070791) popup_image_details_window_t3_ParamLimits

0xeaa3,	// (0x000707a5) popup_image_details_window_t4_ParamLimits

0xeabe,	// (0x000707c0) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00071454) popup_image_details_window_t_ParamLimits

0xca82,	// (0x0006e784) cl_header_name_pane_ParamLimits

0xca82,	// (0x0006e784) cl_header_name_pane

0xcde8,	// (0x0006eaea) cl_header_name_pane_t1_ParamLimits

0xcde8,	// (0x0006eaea) cl_header_name_pane_t1

0xcdff,	// (0x0006eb01) cl_header_name_pane_t2_ParamLimits

0xcdff,	// (0x0006eb01) cl_header_name_pane_t2

0xce29,	// (0x0006eb2b) cl_header_name_pane_t3_ParamLimits

0xce29,	// (0x0006eb2b) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0007184f) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0007184f) cl_header_name_pane_t

0x79a1,	// (0x000696a3) navi_pane_mv_g2_ParamLimits

0x1344,	// (0x00063046) field_vitu2_entry_pane_g1_ParamLimits

0x1350,	// (0x00063052) field_vitu2_entry_pane_g2_ParamLimits

0x135c,	// (0x0006305e) field_vitu2_entry_pane_g3_ParamLimits

0x135c,	// (0x0006305e) field_vitu2_entry_pane_g3

0xf949,	// (0x0007164b) field_vitu2_entry_pane_g_ParamLimits

0xbf6f,	// (0x0006dc71) cell_vitu2_itu_pane_g1_ParamLimits

0xbf7f,	// (0x0006dc81) cell_vitu2_itu_pane_g2_ParamLimits

0xbf7f,	// (0x0006dc81) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00071657) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00071657) cell_vitu2_itu_pane_g

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp05_ParamLimits

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp05

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp03

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp04

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp10_ParamLimits

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp10

0x4839,	// (0x0006653b) bg_vkb2_func_pane_cp08

0xca2c,	// (0x0006e72e) bg_vkb2_func_pane_cp06

0xca3a,	// (0x0006e73c) bg_vkb2_func_pane_cp07

0x19b4,	// (0x000636b6) bg_vkb2_func_pane_cp11_ParamLimits

0x19b4,	// (0x000636b6) bg_vkb2_func_pane_cp11

0x19c9,	// (0x000636cb) bg_vkb2_func_pane_cp12_ParamLimits

0x19c9,	// (0x000636cb) bg_vkb2_func_pane_cp12

0x002f,	// (0x00061d31) bg_vkb2_func_pane_cp09

0x13cb,	// (0x000630cd) bg_vkb2_func_pane_g1

0x0d46,	// (0x00062a48) bg_vkb2_func_pane_g2

0x13d3,	// (0x000630d5) bg_vkb2_func_pane_g3

0x13db,	// (0x000630dd) bg_vkb2_func_pane_g4

0x15f5,	// (0x000632f7) bg_vkb2_func_pane_g5

0x13f3,	// (0x000630f5) bg_vkb2_func_pane_g6

0x13fb,	// (0x000630fd) bg_vkb2_func_pane_g7

0x13eb,	// (0x000630ed) bg_vkb2_func_pane_g8

0x0d26,	// (0x00062a28) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00071856) bg_vkb2_func_pane_g

0xcd35,	// (0x0006ea37) blid2_tripm_pane_g6_ParamLimits

0xcd35,	// (0x0006ea37) blid2_tripm_pane_g6

0x11dc,	// (0x00062ede) mp4_progress_pane_g1

0xcd91,	// (0x0006ea93) blid2_tripm_values_pane_ParamLimits

0xcd91,	// (0x0006ea93) blid2_tripm_values_pane

0xce4e,	// (0x0006eb50) blid2_tripm_values_pane_t1

0xce5c,	// (0x0006eb5e) blid2_tripm_values_pane_t2

0xce6a,	// (0x0006eb6c) blid2_tripm_values_pane_t3

0xce78,	// (0x0006eb7a) blid2_tripm_values_pane_t4

0xce86,	// (0x0006eb88) blid2_tripm_values_pane_t5

0xce94,	// (0x0006eb96) blid2_tripm_values_pane_t6

0xcea2,	// (0x0006eba4) blid2_tripm_values_pane_t7

0xceb0,	// (0x0006ebb2) blid2_tripm_values_pane_t8

0xcebe,	// (0x0006ebc0) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00071869) blid2_tripm_values_pane_t

0x617e,	// (0x00067e80) call_video_pane_t1_ParamLimits

0x6197,	// (0x00067e99) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00070fa3) call_video_pane_t_ParamLimits

0x44b5,	// (0x000661b7) msg_header_pane_g1_ParamLimits

0x8045,	// (0x00069d47) msg_header_pane_g2_ParamLimits

0x8045,	// (0x00069d47) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x000711bd) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x000711bd) msg_header_pane_g

0x083e,	// (0x00062540) main_clock2_pane_ParamLimits

0xafc4,	// (0x0006ccc6) grid_clock2_toolbar_pane_ParamLimits

0xafc4,	// (0x0006ccc6) grid_clock2_toolbar_pane

0xafc4,	// (0x0006ccc6) listscroll_clock2_pane_ParamLimits

0xafc4,	// (0x0006ccc6) listscroll_clock2_pane

0xb072,	// (0x0006cd74) main_clock2_pane_t3_ParamLimits

0xb072,	// (0x0006cd74) main_clock2_pane_t3

0xb084,	// (0x0006cd86) main_clock2_pane_t4_ParamLimits

0xb084,	// (0x0006cd86) main_clock2_pane_t4

0x1ab4,	// (0x000637b6) cell_clock2_toolbar_pane

0x1abc,	// (0x000637be) cell_clock2_toolbar_pane_cp01

0x1abc,	// (0x000637be) cell_clock2_toolbar_pane_cp02

0x1ac4,	// (0x000637c6) cell_clock2_toolbar_pane_cp03

0x1acc,	// (0x000637ce) list_clock2_pane

0x762c,	// (0x0006932e) scroll_pane_cp10

0x1ad4,	// (0x000637d6) list_single_clock2_pane_ParamLimits

0x1ad4,	// (0x000637d6) list_single_clock2_pane

0x7a2c,	// (0x0006972e) list_highlight_pane_cp08

0x1ae1,	// (0x000637e3) list_single_clock2_pane_t1

0x1aef,	// (0x000637f1) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x0007187c) list_single_clock2_pane_t

0x002f,	// (0x00061d31) bg_button_pane_cp10

0x1afd,	// (0x000637ff) cell_clock2_toolbar_pane_g1

0x8071,	// (0x00069d73) aid_main_viewer_pane_g1_ParamLimits

0x8071,	// (0x00069d73) aid_main_viewer_pane_g1

0x807d,	// (0x00069d7f) aid_main_viewer_pane_g2_ParamLimits

0x807d,	// (0x00069d7f) aid_main_viewer_pane_g2

0x8089,	// (0x00069d8b) aid_main_viewer_pane_g3_ParamLimits

0x8089,	// (0x00069d8b) aid_main_viewer_pane_g3

0x809a,	// (0x00069d9c) aid_main_viewer_pane_g4_ParamLimits

0x809a,	// (0x00069d9c) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x000711ce) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x000711ce) aid_main_viewer_pane_g

0x9aa2,	// (0x0006b7a4) main_calc_pane_ParamLimits

0x9acb,	// (0x0006b7cd) main_dialer2_pane_ParamLimits

0x002f,	// (0x00061d31) main_cam6_pane

0x002f,	// (0x00061d31) main_vid6_pane

0xafd0,	// (0x0006ccd2) listscroll_gen_pane_cp06_ParamLimits

0xafd0,	// (0x0006ccd2) listscroll_gen_pane_cp06

0xb096,	// (0x0006cd98) main_clock2_pane_t5_ParamLimits

0xb096,	// (0x0006cd98) main_clock2_pane_t5

0xb0e5,	// (0x0006cde7) aid_call2_pane_cp10_ParamLimits

0xb0f7,	// (0x0006cdf9) aid_call_pane_cp10_ParamLimits

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g1_ParamLimits

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb109,	// (0x0006ce0b) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb109,	// (0x0006ce0b) popup_clock_analogue_window_cp10_g4_ParamLimits

0x77f0,	// (0x000694f2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00071504) popup_clock_analogue_window_cp10_g_ParamLimits

0xb11f,	// (0x0006ce21) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb901,	// (0x0006d603) cell_dialer2_keypad_pane_g2_ParamLimits

0xb901,	// (0x0006d603) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x000715ea) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x000715ea) cell_dialer2_keypad_pane_g

0xb91d,	// (0x0006d61f) cell_dialer2_keypad_pane_t1

0xc2a5,	// (0x0006dfa7) main_cset_text2_pane_ParamLimits

0xc2a5,	// (0x0006dfa7) main_cset_text2_pane

0x1826,	// (0x00063528) area_vitu2_query_pane_g1_ParamLimits

0x4764,	// (0x00066466) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00071799) area_vitu2_query_pane_g_ParamLimits

0x4815,	// (0x00066517) area_vitu2_query_pane_t7_ParamLimits

0x4815,	// (0x00066517) area_vitu2_query_pane_t7

0xca2c,	// (0x0006e72e) bg_button_pane_cp018_ParamLimits

0xca3a,	// (0x0006e73c) bg_button_pane_cp021_ParamLimits

0x4839,	// (0x0006653b) bg_button_pane_cp022_ParamLimits

0x4839,	// (0x0006653b) bg_vkb2_func_pane_cp08_ParamLimits

0xca2c,	// (0x0006e72e) bg_vkb2_func_pane_cp06_ParamLimits

0xca3a,	// (0x0006e73c) bg_vkb2_func_pane_cp07_ParamLimits

0x484a,	// (0x0006654c) input_focus_pane_cp09_ParamLimits

0xcecc,	// (0x0006ebce) cam6_autofocus_pane_ParamLimits

0xcecc,	// (0x0006ebce) cam6_autofocus_pane

0xceee,	// (0x0006ebf0) cam6_image_uncrop_pane_ParamLimits

0xceee,	// (0x0006ebf0) cam6_image_uncrop_pane

0xcf1b,	// (0x0006ec1d) cam6_indi_pane_ParamLimits

0xcf1b,	// (0x0006ec1d) cam6_indi_pane

0xcf35,	// (0x0006ec37) cam6_mode_pane_ParamLimits

0xcf35,	// (0x0006ec37) cam6_mode_pane

0xcf49,	// (0x0006ec4b) cam6_timer_pane_ParamLimits

0xcf49,	// (0x0006ec4b) cam6_timer_pane

0xcf55,	// (0x0006ec57) cam6_zoom_pane_ParamLimits

0xcf55,	// (0x0006ec57) cam6_zoom_pane

0xbcce,	// (0x0006d9d0) cam6_mode_pane_g1_ParamLimits

0xbcce,	// (0x0006d9d0) cam6_mode_pane_g1

0xbce6,	// (0x0006d9e8) cam6_mode_pane_g2_ParamLimits

0xbce6,	// (0x0006d9e8) cam6_mode_pane_g2

0xbcf2,	// (0x0006d9f4) cam6_mode_pane_g3_ParamLimits

0xbcf2,	// (0x0006d9f4) cam6_mode_pane_g3

0xbcfe,	// (0x0006da00) cam6_mode_pane_g4_ParamLimits

0xbcfe,	// (0x0006da00) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00071881) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00071881) cam6_mode_pane_g

0x1b05,	// (0x00063807) bg_tb_trans_pane_cp08_ParamLimits

0x1b05,	// (0x00063807) bg_tb_trans_pane_cp08

0x1b13,	// (0x00063815) cam6_battery_pane_ParamLimits

0x1b13,	// (0x00063815) cam6_battery_pane

0x1b29,	// (0x0006382b) cam6_indi_pane_g1_ParamLimits

0x1b29,	// (0x0006382b) cam6_indi_pane_g1

0x1b3b,	// (0x0006383d) cam6_indi_pane_g2_ParamLimits

0x1b3b,	// (0x0006383d) cam6_indi_pane_g2

0x1b4d,	// (0x0006384f) cam6_indi_pane_g3_ParamLimits

0x1b4d,	// (0x0006384f) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x0007188a) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x0007188a) cam6_indi_pane_g

0x1b5f,	// (0x00063861) cam6_indi_pane_t1_ParamLimits

0x1b5f,	// (0x00063861) cam6_indi_pane_t1

0xbdab,	// (0x0006daad) cam6_autofocus_pane_g1

0xbdb3,	// (0x0006dab5) cam6_autofocus_pane_g2

0xbdbb,	// (0x0006dabd) cam6_autofocus_pane_g3

0xbdc3,	// (0x0006dac5) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00071891) cam6_autofocus_pane_g

0x1b85,	// (0x00063887) cam6_timer_pane_g1

0x1b8d,	// (0x0006388f) cam6_timer_pane_t1

0x1b9b,	// (0x0006389d) cam6_zoom_cont_pane

0x1ba3,	// (0x000638a5) cam6_zoom_pane_g1

0x1bab,	// (0x000638ad) cam6_zoom_pane_g2

0xcf6d,	// (0x0006ec6f) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x0007189a) cam6_zoom_pane_g

0xe8a1,	// (0x000705a3) cam6_battery_pane_g1

0xe8a1,	// (0x000705a3) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00071411) cam6_battery_pane_g

0x1bb3,	// (0x000638b5) cam6_zoom_cont_pane_g1

0x1bbc,	// (0x000638be) cam6_zoom_cont_pane_g2

0x1bc5,	// (0x000638c7) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x000718a1) cam6_zoom_cont_pane_g

0xcf87,	// (0x0006ec89) cam6_mode_pane_cp_ParamLimits

0xcf87,	// (0x0006ec89) cam6_mode_pane_cp

0xcf55,	// (0x0006ec57) cam6_zoom_pane_cp_ParamLimits

0xcf55,	// (0x0006ec57) cam6_zoom_pane_cp

0xcf9b,	// (0x0006ec9d) vid6_image_uncrop_cif_pane_ParamLimits

0xcf9b,	// (0x0006ec9d) vid6_image_uncrop_cif_pane

0xcfc7,	// (0x0006ecc9) vid6_image_uncrop_nhd_pane_ParamLimits

0xcfc7,	// (0x0006ecc9) vid6_image_uncrop_nhd_pane

0xceee,	// (0x0006ebf0) vid6_image_uncrop_vga_pane_ParamLimits

0xceee,	// (0x0006ebf0) vid6_image_uncrop_vga_pane

0xcfe4,	// (0x0006ece6) vid6_image_uncrop_wvga_pane_ParamLimits

0xcfe4,	// (0x0006ece6) vid6_image_uncrop_wvga_pane

0xd001,	// (0x0006ed03) vid6_indi_pane_ParamLimits

0xd001,	// (0x0006ed03) vid6_indi_pane

0x1b05,	// (0x00063807) bg_tb_trans_pane_cp09_ParamLimits

0x1b05,	// (0x00063807) bg_tb_trans_pane_cp09

0x1bdd,	// (0x000638df) cam6_battery_pane_cp_ParamLimits

0x1bdd,	// (0x000638df) cam6_battery_pane_cp

0x1be9,	// (0x000638eb) vid6_indi_pane_g1_ParamLimits

0x1be9,	// (0x000638eb) vid6_indi_pane_g1

0x1bfb,	// (0x000638fd) vid6_indi_pane_g2_ParamLimits

0x1bfb,	// (0x000638fd) vid6_indi_pane_g2

0x1c0d,	// (0x0006390f) vid6_indi_pane_g3_ParamLimits

0x1c0d,	// (0x0006390f) vid6_indi_pane_g3

0x1c22,	// (0x00063924) vid6_indi_pane_g4_ParamLimits

0x1c22,	// (0x00063924) vid6_indi_pane_g4

0x1c37,	// (0x00063939) vid6_indi_pane_g5_ParamLimits

0x1c37,	// (0x00063939) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x000718a8) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x000718a8) vid6_indi_pane_g

0x1c51,	// (0x00063953) vid6_indi_pane_t1_ParamLimits

0x1c51,	// (0x00063953) vid6_indi_pane_t1

0x1c67,	// (0x00063969) vid6_indi_pane_t2_ParamLimits

0x1c67,	// (0x00063969) vid6_indi_pane_t2

0x1c8f,	// (0x00063991) vid6_indi_pane_t3_ParamLimits

0x1c8f,	// (0x00063991) vid6_indi_pane_t3

0x1cb7,	// (0x000639b9) vid6_indi_pane_t4_ParamLimits

0x1cb7,	// (0x000639b9) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x000718b3) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x000718b3) vid6_indi_pane_t

0x1cdb,	// (0x000639dd) wait_bar_pane_cp08

0xd024,	// (0x0006ed26) main_cset_text2_pane_t1_ParamLimits

0xd024,	// (0x0006ed26) main_cset_text2_pane_t1

0xcf75,	// (0x0006ec77) listscroll_gen_pane_cp06_t1_ParamLimits

0xcf75,	// (0x0006ec77) listscroll_gen_pane_cp06_t1

0x002f,	// (0x00061d31) main_cam6_set_pane

0xeb08,	// (0x0007080a) bg_tb_trans_pane_cp06_ParamLimits

0xbc75,	// (0x0006d977) cam4_indicators_pane_g1_ParamLimits

0xbc86,	// (0x0006d988) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00071627) cam4_indicators_pane_g_ParamLimits

0xbca4,	// (0x0006d9a6) cam4_indicators_pane_t1_ParamLimits

0x9abd,	// (0x0006b7bf) bg_tb_trans_pane_cp07_ParamLimits

0xbc75,	// (0x0006d977) vid4_indicators_pane_g1_ParamLimits

0xbd54,	// (0x0006da56) vid4_indicators_pane_g2_ParamLimits

0xbd65,	// (0x0006da67) vid4_indicators_pane_g3_ParamLimits

0xbd76,	// (0x0006da78) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00071639) vid4_indicators_pane_g_ParamLimits

0xbd92,	// (0x0006da94) vid4_indicators_pane_t1_ParamLimits

0xcb73,	// (0x0006e875) vid4_progress_pane_g1_ParamLimits

0xcb83,	// (0x0006e885) vid4_progress_pane_g2_ParamLimits

0xcb93,	// (0x0006e895) vid4_progress_pane_g3_ParamLimits

0xbc86,	// (0x0006d988) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x000717e4) vid4_progress_pane_g_ParamLimits

0xcb9f,	// (0x0006e8a1) vid4_progress_pane_t1_ParamLimits

0xcbb4,	// (0x0006e8b6) vid4_progress_pane_t2_ParamLimits

0xcbca,	// (0x0006e8cc) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x000717ef) vid4_progress_pane_t_ParamLimits

0xcbdf,	// (0x0006e8e1) wait_bar_pane_cp07_ParamLimits

0xd062,	// (0x0006ed64) main_cam6_set_pane_g2_ParamLimits

0xd062,	// (0x0006ed64) main_cam6_set_pane_g2

0xd06e,	// (0x0006ed70) main_cset6_listscroll_pane_ParamLimits

0xd06e,	// (0x0006ed70) main_cset6_listscroll_pane

0xd099,	// (0x0006ed9b) main_cset6_slider_pane_ParamLimits

0xd099,	// (0x0006ed9b) main_cset6_slider_pane

0xd0a5,	// (0x0006eda7) main_cset6_text2_pane_ParamLimits

0xd0a5,	// (0x0006eda7) main_cset6_text2_pane

0x1cea,	// (0x000639ec) main_cset6_text_pane

0x1cf2,	// (0x000639f4) main_cset_list_pane_copy1_ParamLimits

0x1cf2,	// (0x000639f4) main_cset_list_pane_copy1

0x1d02,	// (0x00063a04) scroll_pane_cp028_copy1

0xd0b8,	// (0x0006edba) cset_list_set_pane_copy1

0xd0d2,	// (0x0006edd4) aid_position_infowindow_above_copy1

0xd0da,	// (0x0006eddc) aid_position_infowindow_below_copy1

0xd0e2,	// (0x0006ede4) cset_list_set_pane_g1_copy1

0x4672,	// (0x00066374) cset_list_set_pane_g3_copy1_ParamLimits

0x4672,	// (0x00066374) cset_list_set_pane_g3_copy1

0x4681,	// (0x00066383) cset_list_set_pane_t1_copy1_ParamLimits

0x4681,	// (0x00066383) cset_list_set_pane_t1_copy1

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp021_copy1_ParamLimits

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp021_copy1

0x1d1a,	// (0x00063a1c) cset6_slider_pane_ParamLimits

0x1d1a,	// (0x00063a1c) cset6_slider_pane

0x1d46,	// (0x00063a48) main_cset6_slider_pane_g1_ParamLimits

0x1d46,	// (0x00063a48) main_cset6_slider_pane_g1

0xd0ea,	// (0x0006edec) main_cset6_slider_pane_g2_ParamLimits

0xd0ea,	// (0x0006edec) main_cset6_slider_pane_g2

0x14fa,	// (0x000631fc) main_cset6_slider_pane_g3_ParamLimits

0x14fa,	// (0x000631fc) main_cset6_slider_pane_g3

0xd112,	// (0x0006ee14) main_cset6_slider_pane_g4_ParamLimits

0xd112,	// (0x0006ee14) main_cset6_slider_pane_g4

0xd11e,	// (0x0006ee20) main_cset6_slider_pane_g5_ParamLimits

0xd11e,	// (0x0006ee20) main_cset6_slider_pane_g5

0x14fa,	// (0x000631fc) main_cset6_slider_pane_g7_ParamLimits

0x14fa,	// (0x000631fc) main_cset6_slider_pane_g7

0x1506,	// (0x00063208) main_cset6_slider_pane_g8_ParamLimits

0x1506,	// (0x00063208) main_cset6_slider_pane_g8

0xd12c,	// (0x0006ee2e) main_cset6_slider_pane_g9_ParamLimits

0xd12c,	// (0x0006ee2e) main_cset6_slider_pane_g9

0xd138,	// (0x0006ee3a) main_cset6_slider_pane_g10_ParamLimits

0xd138,	// (0x0006ee3a) main_cset6_slider_pane_g10

0xd112,	// (0x0006ee14) main_cset6_slider_pane_g11_ParamLimits

0xd112,	// (0x0006ee14) main_cset6_slider_pane_g11

0xd144,	// (0x0006ee46) main_cset6_slider_pane_g12_ParamLimits

0xd144,	// (0x0006ee46) main_cset6_slider_pane_g12

0xd150,	// (0x0006ee52) main_cset6_slider_pane_g13_ParamLimits

0xd150,	// (0x0006ee52) main_cset6_slider_pane_g13

0xd15e,	// (0x0006ee60) main_cset6_slider_pane_g14_ParamLimits

0xd15e,	// (0x0006ee60) main_cset6_slider_pane_g14

0xd16c,	// (0x0006ee6e) main_cset6_slider_pane_g15_ParamLimits

0xd16c,	// (0x0006ee6e) main_cset6_slider_pane_g15

0xd11e,	// (0x0006ee20) main_cset6_slider_pane_g16_ParamLimits

0xd11e,	// (0x0006ee20) main_cset6_slider_pane_g16

0xd184,	// (0x0006ee86) main_cset6_slider_pane_g17_ParamLimits

0xd184,	// (0x0006ee86) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x000718bc) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x000718bc) main_cset6_slider_pane_g

0x1d6e,	// (0x00063a70) main_cset6_slider_pane_t1_ParamLimits

0x1d6e,	// (0x00063a70) main_cset6_slider_pane_t1

0xd192,	// (0x0006ee94) main_cset6_slider_pane_t2_ParamLimits

0xd192,	// (0x0006ee94) main_cset6_slider_pane_t2

0xd1bd,	// (0x0006eebf) main_cset6_slider_pane_t3_ParamLimits

0xd1bd,	// (0x0006eebf) main_cset6_slider_pane_t3

0xd1e8,	// (0x0006eeea) main_cset6_slider_pane_t4_ParamLimits

0xd1e8,	// (0x0006eeea) main_cset6_slider_pane_t4

0xd215,	// (0x0006ef17) main_cset6_slider_pane_t5_ParamLimits

0xd215,	// (0x0006ef17) main_cset6_slider_pane_t5

0x1daf,	// (0x00063ab1) main_cset6_slider_pane_t7_ParamLimits

0x1daf,	// (0x00063ab1) main_cset6_slider_pane_t7

0xd242,	// (0x0006ef44) main_cset6_slider_pane_t8_ParamLimits

0xd242,	// (0x0006ef44) main_cset6_slider_pane_t8

0xd266,	// (0x0006ef68) main_cset6_slider_pane_t9_ParamLimits

0xd266,	// (0x0006ef68) main_cset6_slider_pane_t9

0xd28a,	// (0x0006ef8c) main_cset6_slider_pane_t10_ParamLimits

0xd28a,	// (0x0006ef8c) main_cset6_slider_pane_t10

0xd2ae,	// (0x0006efb0) main_cset6_slider_pane_t11_ParamLimits

0xd2ae,	// (0x0006efb0) main_cset6_slider_pane_t11

0x1de5,	// (0x00063ae7) main_cset6_slider_pane_t14_ParamLimits

0x1de5,	// (0x00063ae7) main_cset6_slider_pane_t14

0x1e1e,	// (0x00063b20) main_cset6_slider_pane_t15_ParamLimits

0x1e1e,	// (0x00063b20) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x000718e1) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x000718e1) main_cset6_slider_pane_t

0x1e57,	// (0x00063b59) cset_slider_pane_g1_copy1

0x1e60,	// (0x00063b62) cset_slider_pane_g2_copy1

0x1e69,	// (0x00063b6b) cset_slider_pane_g3_copy1

0x002f,	// (0x00061d31) bg_popup_sub_pane_cp011_copy1

0x1656,	// (0x00063358) main_cset_text_pane_g1_copy1

0x165e,	// (0x00063360) main_cset_text_pane_t1_copy1

0x166c,	// (0x0006336e) main_cset_text_pane_t2_copy1

0x167a,	// (0x0006337c) main_cset_text_pane_t3_copy1

0x1688,	// (0x0006338a) main_cset_text_pane_t4_copy1

0x1696,	// (0x00063398) main_cset_text_pane_t5_copy1

0x16a4,	// (0x000633a6) main_cset_text_pane_t6_copy1

0x16b2,	// (0x000633b4) main_cset_text_pane_t7_copy1

0xd2d4,	// (0x0006efd6) main_cset_text2_pane_t1_copy1

0x002f,	// (0x00061d31) main_ncimui_pane

0x9b1c,	// (0x0006b81e) popup_query_ncimui_window_ParamLimits

0x9b1c,	// (0x0006b81e) popup_query_ncimui_window

0xa8ba,	// (0x0006c5bc) field_cale_ev2_pane_g4_ParamLimits

0xa8ba,	// (0x0006c5bc) field_cale_ev2_pane_g4

0xb61f,	// (0x0006d321) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb61f,	// (0x0006d321) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x000715c5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x000715c5) cell_video_dialer_keypad_pane_g

0xb637,	// (0x0006d339) cell_video_dialer_keypad_pane_t1

0x002f,	// (0x00061d31) bg_popup_window_pane_cp012

0x748f,	// (0x00069191) heading_pane_cp06

0x1f61,	// (0x00063c63) ncim_query_content_pane

0x002f,	// (0x00061d31) bg_popup_heading_pane_cp01

0x1f69,	// (0x00063c6b) ncim_heading_pane_t1

0x1f77,	// (0x00063c79) ncim_indicator_popup_pane

0x1f89,	// (0x00063c8b) ncim_query_button_pane

0x1f9d,	// (0x00063c9f) ncim_query_content_pane_t1

0x1faf,	// (0x00063cb1) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00071920) ncim_query_content_pane_t

0x1fe9,	// (0x00063ceb) ncim_query_list_pane

0x1ffb,	// (0x00063cfd) ncim_query_popup_pane

0x1f77,	// (0x00063c79) ncim_indicator_popup_pane_ParamLimits

0xd3cf,	// (0x0006f0d1) ncim_query_content_pane_g1_ParamLimits

0xd3cf,	// (0x0006f0d1) ncim_query_content_pane_g1

0x1f9d,	// (0x00063c9f) ncim_query_content_pane_t1_ParamLimits

0x1faf,	// (0x00063cb1) ncim_query_content_pane_t2_ParamLimits

0xd3db,	// (0x0006f0dd) ncim_query_content_pane_t3_ParamLimits

0xd3db,	// (0x0006f0dd) ncim_query_content_pane_t3

0xd3f8,	// (0x0006f0fa) ncim_query_content_pane_t4_ParamLimits

0xd3f8,	// (0x0006f0fa) ncim_query_content_pane_t4

0xd415,	// (0x0006f117) ncim_query_content_pane_t5_ParamLimits

0xd415,	// (0x0006f117) ncim_query_content_pane_t5

0x1fc1,	// (0x00063cc3) ncim_query_content_pane_t6_ParamLimits

0x1fc1,	// (0x00063cc3) ncim_query_content_pane_t6

0xfc1e,	// (0x00071920) ncim_query_content_pane_t_ParamLimits

0x1fe9,	// (0x00063ceb) ncim_query_list_pane_ParamLimits

0x1ffb,	// (0x00063cfd) ncim_query_popup_pane_ParamLimits

0x200f,	// (0x00063d11) wait_bar_pane_cp04

0x002f,	// (0x00061d31) input_focus_pane_cp011

0x2017,	// (0x00063d19) ncim_query_popup_pane_t1

0x2025,	// (0x00063d27) ncim_list_query_list_pane_ParamLimits

0x2025,	// (0x00063d27) ncim_list_query_list_pane

0x002f,	// (0x00061d31) bg_button_pane_cp027

0x2038,	// (0x00063d3a) ncim_query_button_pane_g1

0x002f,	// (0x00061d31) list_highlight_pane_cp012

0x2042,	// (0x00063d44) ncim_list_query_list_pane_g1

0x204a,	// (0x00063d4c) ncim_list_query_list_pane_t1

0xbc95,	// (0x0006d997) cam4_indicators_pane_g3_ParamLimits

0xbc95,	// (0x0006d997) cam4_indicators_pane_g3

0xbd82,	// (0x0006da84) vid4_indicators_pane_g5_ParamLimits

0xbd82,	// (0x0006da84) vid4_indicators_pane_g5

0xbc95,	// (0x0006d997) vid4_progress_pane_g5_ParamLimits

0xbc95,	// (0x0006d997) vid4_progress_pane_g5

0xd317,	// (0x0006f019) main_ncimui_pane_g1

0xd35d,	// (0x0006f05f) ncimui_group_query_pane_ParamLimits

0xd35d,	// (0x0006f05f) ncimui_group_query_pane

0xd391,	// (0x0006f093) ncimui_list_pane_ParamLimits

0xd391,	// (0x0006f093) ncimui_list_pane

0xd3ab,	// (0x0006f0ad) ncimui_text_pane_ParamLimits

0xd3ab,	// (0x0006f0ad) ncimui_text_pane

0xd432,	// (0x0006f134) ncimui_text_pane_t1_ParamLimits

0xd432,	// (0x0006f134) ncimui_text_pane_t1

0x2058,	// (0x00063d5a) ncimui_list_single_graphic_pane_ParamLimits

0x2058,	// (0x00063d5a) ncimui_list_single_graphic_pane

0xd451,	// (0x0006f153) ncimui_query_pane_ParamLimits

0xd451,	// (0x0006f153) ncimui_query_pane

0x002f,	// (0x00061d31) list_highlight_pane_cp013

0x2068,	// (0x00063d6a) ncim_list_query_list_pane_t1_copy1

0x2042,	// (0x00063d44) ncim_list_single_graphic_pane_g1

0x2076,	// (0x00063d78) ncim_query_button_pane_cp01

0x207e,	// (0x00063d80) ncim_query_entry_pane_ParamLimits

0x207e,	// (0x00063d80) ncim_query_entry_pane

0x208e,	// (0x00063d90) ncimui_query_pane_g1

0x2096,	// (0x00063d98) ncimui_query_pane_t1_ParamLimits

0x2096,	// (0x00063d98) ncimui_query_pane_t1

0x002f,	// (0x00061d31) input_focus_pane_cp012

0x2017,	// (0x00063d19) ncim_query_entry_pane_t1

0x083e,	// (0x00062540) main_im_pane_ParamLimits

0x9abd,	// (0x0006b7bf) main_mobtv_pane_ParamLimits

0x9abd,	// (0x0006b7bf) main_mobtv_pane

0xd12c,	// (0x0006ee2e) main_cset6_slider_pane_g18_ParamLimits

0xd12c,	// (0x0006ee2e) main_cset6_slider_pane_g18

0xd150,	// (0x0006ee52) main_cset6_slider_pane_g19_ParamLimits

0xd150,	// (0x0006ee52) main_cset6_slider_pane_g19

0x135c,	// (0x0006305e) bg_main_mobtv_pane_ParamLimits

0x135c,	// (0x0006305e) bg_main_mobtv_pane

0xd461,	// (0x0006f163) main_mobtv_info_pane

0xd46c,	// (0x0006f16e) main_mobtv_loading_pane_ParamLimits

0xd46c,	// (0x0006f16e) main_mobtv_loading_pane

0x20ba,	// (0x00063dbc) main_mobtv_pg_channel_list_pane

0x20c4,	// (0x00063dc6) main_mobtv_pg_hdr_pane

0xd479,	// (0x0006f17b) main_mobtv_programe_curr_pane_ParamLimits

0xd479,	// (0x0006f17b) main_mobtv_programe_curr_pane

0xd486,	// (0x0006f188) main_mobtv_programe_next_pane_ParamLimits

0xd486,	// (0x0006f188) main_mobtv_programe_next_pane

0x20cd,	// (0x00063dcf) popup_mobtv_noti_window

0xe8a1,	// (0x000705a3) main_tv_pg_hdr_pane_g1

0x20d5,	// (0x00063dd7) main_tv_pg_hdr_pane_g2

0x20dd,	// (0x00063ddf) main_tv_pg_hdr_pane_g3

0x20e5,	// (0x00063de7) main_tv_pg_hdr_pane_g4

0x20ed,	// (0x00063def) main_tv_pg_hdr_pane_g5

0x20f7,	// (0x00063df9) main_tv_pg_hdr_pane_g6

0x2101,	// (0x00063e03) main_tv_pg_hdr_pane_g7

0x210b,	// (0x00063e0d) main_tv_pg_hdr_pane_g8

0x2115,	// (0x00063e17) main_tv_pg_hdr_pane_g9

0x211f,	// (0x00063e21) main_tv_pg_hdr_pane_g10

0x2129,	// (0x00063e2b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x0007192d) main_tv_pg_hdr_pane_g

0x2133,	// (0x00063e35) main_tv_pg_hdr_pane_t1

0x2141,	// (0x00063e43) main_tv_pg_hdr_pane_t2

0x214f,	// (0x00063e51) main_tv_pg_hdr_pane_t3

0x215f,	// (0x00063e61) main_tv_pg_hdr_pane_t4

0x216f,	// (0x00063e71) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00071944) main_tv_pg_hdr_pane_t

0x217f,	// (0x00063e81) single_mobtv_pg_channel_pane_ParamLimits

0x217f,	// (0x00063e81) single_mobtv_pg_channel_pane

0x2191,	// (0x00063e93) single_mobtv_pg_channel_table_pane

0x219a,	// (0x00063e9c) single_mobtv_pg_channel_thumb_pane

0x21a3,	// (0x00063ea5) single_tv_pg_channel_pane_g1

0x21ac,	// (0x00063eae) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0007194f) single_tv_pg_channel_pane_g

0xeb08,	// (0x0007080a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeb08,	// (0x0007080a) bg_single_mobtv_pg_channel_thumb_pane

0x21b5,	// (0x00063eb7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x21b5,	// (0x00063eb7) single_mobtv_pg_channel_thumb_pane_g1

0x21c3,	// (0x00063ec5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x21c3,	// (0x00063ec5) single_mobtv_pg_channel_thumb_pane_g2

0x21cf,	// (0x00063ed1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x21cf,	// (0x00063ed1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00071954) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00071954) single_mobtv_pg_channel_thumb_pane_g

0x21db,	// (0x00063edd) single_mobtv_pg_channel_thumb_pane_t1

0x21e9,	// (0x00063eeb) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x0007195b) single_mobtv_pg_channel_thumb_pane_t

0xe8a1,	// (0x000705a3) bg_single_mobtv_pg_channel_table_pane_g1

0xe8a1,	// (0x000705a3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00071411) bg_single_mobtv_pg_channel_table_pane_g

0x21f7,	// (0x00063ef9) single_mobtv_pg_channel_table_pane_t1

0x2205,	// (0x00063f07) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00071960) single_mobtv_pg_channel_table_pane_t

0xd49b,	// (0x0006f19d) main_mobtv_info_pane_g1_ParamLimits

0xd49b,	// (0x0006f19d) main_mobtv_info_pane_g1

0xd4b7,	// (0x0006f1b9) main_mobtv_info_pane_t1_ParamLimits

0xd4b7,	// (0x0006f1b9) main_mobtv_info_pane_t1

0xd52f,	// (0x0006f231) main_mobtv_info_pane_t2_ParamLimits

0xd52f,	// (0x0006f231) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x0007196a) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x0007196a) main_mobtv_info_pane_t

0xd5be,	// (0x0006f2c0) wait_bar_pane_cp05

0xd5d0,	// (0x0006f2d2) main_mobtv_loading_pane_g1_ParamLimits

0xd5d0,	// (0x0006f2d2) main_mobtv_loading_pane_g1

0xd5de,	// (0x0006f2e0) main_mobtv_loading_pane_g2_ParamLimits

0xd5de,	// (0x0006f2e0) main_mobtv_loading_pane_g2

0xd5ea,	// (0x0006f2ec) main_mobtv_loading_pane_g3_ParamLimits

0xd5ea,	// (0x0006f2ec) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00071971) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00071971) main_mobtv_loading_pane_g

0x2213,	// (0x00063f15) main_mobtv_loading_pane_t1_ParamLimits

0x2213,	// (0x00063f15) main_mobtv_loading_pane_t1

0x222b,	// (0x00063f2d) main_mobtv_loading_pane_t2_ParamLimits

0x222b,	// (0x00063f2d) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00071978) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00071978) main_mobtv_loading_pane_t

0xd5f8,	// (0x0006f2fa) wait_bar_pane_cp06_ParamLimits

0xd5f8,	// (0x0006f2fa) wait_bar_pane_cp06

0x224f,	// (0x00063f51) main_mobtv_programe_curr_pane_t1

0x225d,	// (0x00063f5f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0007197d) main_mobtv_programe_curr_pane_t

0x226b,	// (0x00063f6d) main_mobtv_programe_next_pane_t1

0x2279,	// (0x00063f7b) main_mobtv_programe_next_pane_t2

0x2287,	// (0x00063f89) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00071982) main_mobtv_programe_next_pane_t

0x002f,	// (0x00061d31) bg_popup_mobtv_noti_window_pane

0x2295,	// (0x00063f97) popup_mobtv_noti_window_g1

0x229d,	// (0x00063f9f) popup_mobtv_noti_window_t1

0x22ab,	// (0x00063fad) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00071989) popup_mobtv_noti_window_t

0xe8a1,	// (0x000705a3) bg_popup_mobtv_noti_window_pane_g1

0x002f,	// (0x00061d31) sc_clock_pane

0x002f,	// (0x00061d31) main_fs_bigclock_pane

0xcd7f,	// (0x0006ea81) blid2_tripm_pane_t4_ParamLimits

0xcd7f,	// (0x0006ea81) blid2_tripm_pane_t4

0xd604,	// (0x0006f306) sc_clock_pane_g1_ParamLimits

0xd604,	// (0x0006f306) sc_clock_pane_g1

0xd612,	// (0x0006f314) sc_clock_pane_t1_ParamLimits

0xd612,	// (0x0006f314) sc_clock_pane_t1

0xd625,	// (0x0006f327) sc_clock_pane_t2_ParamLimits

0xd625,	// (0x0006f327) sc_clock_pane_t2

0xd637,	// (0x0006f339) sc_clock_pane_t3_ParamLimits

0xd637,	// (0x0006f339) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0007198e) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0007198e) sc_clock_pane_t

0xdea3,	// (0x0006fba5) main_fs_bigclock_indicator_pane_ParamLimits

0xdea3,	// (0x0006fba5) main_fs_bigclock_indicator_pane

0xd6bf,	// (0x0006f3c1) main_fs_bigclock_pane_g1_ParamLimits

0xd6bf,	// (0x0006f3c1) main_fs_bigclock_pane_g1

0xdeaf,	// (0x0006fbb1) main_fs_bigclock_pane_t1_ParamLimits

0xdeaf,	// (0x0006fbb1) main_fs_bigclock_pane_t1

0xdec1,	// (0x0006fbc3) main_fs_bigclock_pane_t2_ParamLimits

0xdec1,	// (0x0006fbc3) main_fs_bigclock_pane_t2

0xded3,	// (0x0006fbd5) main_fs_bigclock_pane_t3_ParamLimits

0xded3,	// (0x0006fbd5) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x00071b8d) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x00071b8d) main_fs_bigclock_pane_t

0x2e9d,	// (0x00064b9f) main_fs_bigclock_indicator_pane_g1

0x1f91,	// (0x00063c93) ncim_query_content_pane_g2_ParamLimits

0x1f91,	// (0x00063c93) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x0007191b) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x0007191b) ncim_query_content_pane_g

0xd64b,	// (0x0006f34d) sc_clock_pane_t4_ParamLimits

0xd64b,	// (0x0006f34d) sc_clock_pane_t4

0x9abd,	// (0x0006b7bf) main_radioblah_pane

0x12cd,	// (0x00062fcf) cell_call4_button_pane_t1_copy1_ParamLimits

0x12cd,	// (0x00062fcf) cell_call4_button_pane_t1_copy1

0xd31f,	// (0x0006f021) main_ncimui_pane_t1_ParamLimits

0xd31f,	// (0x0006f021) main_ncimui_pane_t1

0xd331,	// (0x0006f033) main_ncimui_pane_t2_ParamLimits

0xd331,	// (0x0006f033) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00071914) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00071914) main_ncimui_pane_t

0x23db,	// (0x000640dd) main_radioblah_anim_pane_ParamLimits

0x23db,	// (0x000640dd) main_radioblah_anim_pane

0x23ec,	// (0x000640ee) main_radioblah_info_pane_ParamLimits

0x23ec,	// (0x000640ee) main_radioblah_info_pane

0x2400,	// (0x00064102) main_radioblah_pane_t1_ParamLimits

0x2400,	// (0x00064102) main_radioblah_pane_t1

0x241c,	// (0x0006411e) main_radioblah_pane_t2_ParamLimits

0x241c,	// (0x0006411e) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x000719af) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x000719af) main_radioblah_pane_t

0xd711,	// (0x0006f413) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd711,	// (0x0006f413) main_radioblah_rocker_ctrl_pane

0x2464,	// (0x00064166) main_radioblah_info_pane_t1_ParamLimits

0x2464,	// (0x00064166) main_radioblah_info_pane_t1

0xd756,	// (0x0006f458) main_radioblah_info_pane_t2_ParamLimits

0xd756,	// (0x0006f458) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x000719b8) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x000719b8) main_radioblah_info_pane_t

0xe8a1,	// (0x000705a3) main_radioblah_rocker_ctrl_pane_g1

0xd806,	// (0x0006f508) main_radioblah_rocker_ctrl_pane_g2

0xd80e,	// (0x0006f510) main_radioblah_rocker_ctrl_pane_g3

0xd816,	// (0x0006f518) main_radioblah_rocker_ctrl_pane_g4

0xd81e,	// (0x0006f520) main_radioblah_rocker_ctrl_pane_g5

0xd826,	// (0x0006f528) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x000719c1) main_radioblah_rocker_ctrl_pane_g

0xd2d4,	// (0x0006efd6) main_cset_text2_pane_t1_copy1_ParamLimits

0xbbcc,	// (0x0006d8ce) cam4_image_uncrop_qvga_pane

0xbd0a,	// (0x0006da0c) vid4_image_uncrop_qcif_pane

0xcf0d,	// (0x0006ec0f) cam6_image_uncrop_qvga_pane_ParamLimits

0xcf0d,	// (0x0006ec0f) cam6_image_uncrop_qvga_pane

0x1bcd,	// (0x000638cf) vid6_image_uncrop_qcif_pane_ParamLimits

0x1bcd,	// (0x000638cf) vid6_image_uncrop_qcif_pane

0x002f,	// (0x00061d31) bg_popup_preview_window_pane_cp03

0x1f43,	// (0x00063c45) list_cset_text2_pane

0x1f4b,	// (0x00063c4d) main_cset6_text2_pane_g1

0x1f53,	// (0x00063c55) main_cset6_text2_pane_t1

0xd82e,	// (0x0006f530) list_cset_text2_pane_t1_ParamLimits

0xd82e,	// (0x0006f530) list_cset_text2_pane_t1

0x9abd,	// (0x0006b7bf) main_radioblah_pane_ParamLimits

0xd5aa,	// (0x0006f2ac) main_mobtv_info_pane_t3_ParamLimits

0xd5aa,	// (0x0006f2ac) main_mobtv_info_pane_t3

0xd6ff,	// (0x0006f401) main_radioblah_pane_g1

0xd72a,	// (0x0006f42c) main_radioblah_info_pane_g1

0xd7ab,	// (0x0006f4ad) main_radioblah_info_pane_t3_ParamLimits

0xd7ab,	// (0x0006f4ad) main_radioblah_info_pane_t3

0x6e4e,	// (0x00068b50) highlight_cell_cale_month_pane_ParamLimits

0x6e4e,	// (0x00068b50) highlight_cell_cale_month_pane

0x002f,	// (0x00061d31) main_phob_fisheye_pane

0xebea,	// (0x000708ec) scroll_pane_cp0031_ParamLimits

0xebea,	// (0x000708ec) scroll_pane_cp0031

0x1cdb,	// (0x000639dd) wait_bar_pane_cp08_ParamLimits

0xd0b8,	// (0x0006edba) cset_list_set_pane_copy1_ParamLimits

0x249e,	// (0x000641a0) highlight_cell_cale_month_pane_g1

0xd859,	// (0x0006f55b) highlight_cell_cale_month_pane_t1

0x1916,	// (0x00063618) list_gen_pane_cp01

0x14e5,	// (0x000631e7) scroll_pane_01

0xd867,	// (0x0006f569) list_single_double_fisheye_pane

0x496c,	// (0x0006666e) list_double_fisheye_pane_g1_ParamLimits

0x496c,	// (0x0006666e) list_double_fisheye_pane_g1

0xd870,	// (0x0006f572) list_double_fisheye_pane_g2_ParamLimits

0xd870,	// (0x0006f572) list_double_fisheye_pane_g2

0xd884,	// (0x0006f586) list_double_fisheye_pane_g3_ParamLimits

0xd884,	// (0x0006f586) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x000719ce) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x000719ce) list_double_fisheye_pane_g

0x4984,	// (0x00066686) list_double_fisheye_pane_t1_ParamLimits

0x4984,	// (0x00066686) list_double_fisheye_pane_t1

0x499f,	// (0x000666a1) list_double_fisheye_pane_t2_ParamLimits

0x499f,	// (0x000666a1) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x000719d9) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x000719d9) list_double_fisheye_pane_t

0x002f,	// (0x00061d31) main_call5_pane

0xd671,	// (0x0006f373) sc_swipe_pane_ParamLimits

0xd671,	// (0x0006f373) sc_swipe_pane

0xd8ad,	// (0x0006f5af) call5_image_pane_ParamLimits

0xd8ad,	// (0x0006f5af) call5_image_pane

0xd8bd,	// (0x0006f5bf) call5_swipe_1_pane_ParamLimits

0xd8bd,	// (0x0006f5bf) call5_swipe_1_pane

0xd8c9,	// (0x0006f5cb) call5_swipe_2_pane_ParamLimits

0xd8c9,	// (0x0006f5cb) call5_swipe_2_pane

0xd8e3,	// (0x0006f5e5) popup_call5_audio_first_window_ParamLimits

0xd8e3,	// (0x0006f5e5) popup_call5_audio_first_window

0xeb08,	// (0x0007080a) call5_swipe_1_pane_g1_ParamLimits

0xeb08,	// (0x0007080a) call5_swipe_1_pane_g1

0x24af,	// (0x000641b1) call5_swipe_1_pane_g2_ParamLimits

0x24af,	// (0x000641b1) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x000719de) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x000719de) call5_swipe_1_pane_g

0x24bb,	// (0x000641bd) call5_swipe_1_pane_t1_ParamLimits

0x24bb,	// (0x000641bd) call5_swipe_1_pane_t1

0xeb08,	// (0x0007080a) call5_swipe_2_pane_g1_ParamLimits

0xeb08,	// (0x0007080a) call5_swipe_2_pane_g1

0x24d0,	// (0x000641d2) call5_swipe_2_pane_g2_ParamLimits

0x24d0,	// (0x000641d2) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x000719e3) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x000719e3) call5_swipe_2_pane_g

0x24dc,	// (0x000641de) call5_swipe_2_pane_t1_ParamLimits

0x24dc,	// (0x000641de) call5_swipe_2_pane_t1

0x24f1,	// (0x000641f3) sc_swipe_pane_g1_ParamLimits

0x24f1,	// (0x000641f3) sc_swipe_pane_g1

0x24fe,	// (0x00064200) sc_swipe_pane_g2_ParamLimits

0x24fe,	// (0x00064200) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x000719e8) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x000719e8) sc_swipe_pane_g

0x250a,	// (0x0006420c) sc_swipe_pane_t1_ParamLimits

0x250a,	// (0x0006420c) sc_swipe_pane_t1

0x002f,	// (0x00061d31) main_cmail_launcher_pane

0xd8f1,	// (0x0006f5f3) aid_size_cell_cmail_l_ParamLimits

0xd8f1,	// (0x0006f5f3) aid_size_cell_cmail_l

0xd901,	// (0x0006f603) grid_cmail_l_pane_ParamLimits

0xd901,	// (0x0006f603) grid_cmail_l_pane

0xd911,	// (0x0006f613) cell_cmail_l_pane_ParamLimits

0xd911,	// (0x0006f613) cell_cmail_l_pane

0xd925,	// (0x0006f627) cell_cmail_l_pane_g1_ParamLimits

0xd925,	// (0x0006f627) cell_cmail_l_pane_g1

0xd931,	// (0x0006f633) cell_cmail_l_pane_t1_ParamLimits

0xd931,	// (0x0006f633) cell_cmail_l_pane_t1

0x251f,	// (0x00064221) cell_cmail_l_pane_t2_ParamLimits

0x251f,	// (0x00064221) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x000719ed) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x000719ed) cell_cmail_l_pane_t

0x9abd,	// (0x0006b7bf) grid_highlight_pane_cp018_ParamLimits

0x9abd,	// (0x0006b7bf) grid_highlight_pane_cp018

0x538e,	// (0x00067090) main2_pane_ParamLimits

0x538e,	// (0x00067090) main2_pane

0x0917,	// (0x00062619) popup_sp_fs_action_menu_bg_pane_g1

0x091f,	// (0x00062621) popup_sp_fs_action_menu_bg_pane_g2

0x0927,	// (0x00062629) popup_sp_fs_action_menu_bg_pane_g3

0x092f,	// (0x00062631) popup_sp_fs_action_menu_bg_pane_g4

0x0937,	// (0x00062639) popup_sp_fs_action_menu_bg_pane_g5

0x093f,	// (0x00062641) popup_sp_fs_action_menu_bg_pane_g6

0x0947,	// (0x00062649) popup_sp_fs_action_menu_bg_pane_g7

0x094f,	// (0x00062651) popup_sp_fs_action_menu_bg_pane_g8

0x0957,	// (0x00062659) popup_sp_fs_action_menu_bg_pane_g9

0x095f,	// (0x00062661) popup_sp_fs_action_menu_bg_pane_g10

0x095f,	// (0x00062661) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00070ebd) popup_sp_fs_action_menu_bg_pane_g

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g3_g1

0x424e,	// (0x00065f50) list_medium_line_x2_t3_g3_g2_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_t3_g3_g2

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x00070f6d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x00070f6d) list_medium_line_x2_t3_g3_g

0x4266,	// (0x00065f68) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4266,	// (0x00065f68) list_medium_line_x2_t3_g3_t1

0x427b,	// (0x00065f7d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x427b,	// (0x00065f7d) list_medium_line_x2_t3_g3_t2

0x428d,	// (0x00065f8f) list_medium_line_x2_t3_g3_t3_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00070f74) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00070f74) list_medium_line_x2_t3_g3_t

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g2_g1

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00070f7b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00070f7b) list_medium_line_x2_t3_g2_g

0x42a2,	// (0x00065fa4) list_medium_line_x2_t3_g2_t1_ParamLimits

0x42a2,	// (0x00065fa4) list_medium_line_x2_t3_g2_t1

0x42b8,	// (0x00065fba) list_medium_line_x2_t3_g2_t2_ParamLimits

0x42b8,	// (0x00065fba) list_medium_line_x2_t3_g2_t2

0x42ca,	// (0x00065fcc) list_medium_line_x2_t3_g2_t3_ParamLimits

0x42ca,	// (0x00065fcc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x00070f80) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x00070f80) list_medium_line_x2_t3_g2_t

0x4242,	// (0x00065f44) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t4_g4_g1

0x42e8,	// (0x00065fea) list_medium_line_x2_t4_g4_g2_ParamLimits

0x42e8,	// (0x00065fea) list_medium_line_x2_t4_g4_g2

0x424e,	// (0x00065f50) list_medium_line_x2_t4_g4_g3_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_t4_g4_g3

0x42f4,	// (0x00065ff6) list_medium_line_x2_t4_g4_g4_ParamLimits

0x42f4,	// (0x00065ff6) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00070f87) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00070f87) list_medium_line_x2_t4_g4_g

0x4300,	// (0x00066002) list_medium_line_x2_t4_g4_t1_ParamLimits

0x4300,	// (0x00066002) list_medium_line_x2_t4_g4_t1

0x4317,	// (0x00066019) list_medium_line_x2_t4_g4_t2_ParamLimits

0x4317,	// (0x00066019) list_medium_line_x2_t4_g4_t2

0x432c,	// (0x0006602e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x432c,	// (0x0006602e) list_medium_line_x2_t4_g4_t3

0x433e,	// (0x00066040) list_medium_line_x2_t4_g4_t4_ParamLimits

0x433e,	// (0x00066040) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x00070f90) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x00070f90) list_medium_line_x2_t4_g4_t

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g4_g1

0x42e8,	// (0x00065fea) list_medium_line_x2_t2_g4_g2_ParamLimits

0x42e8,	// (0x00065fea) list_medium_line_x2_t2_g4_g2

0x424e,	// (0x00065f50) list_medium_line_x2_t2_g4_g3_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_t2_g4_g3

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00070ff7) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00070ff7) list_medium_line_x2_t2_g4_g

0x4350,	// (0x00066052) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4350,	// (0x00066052) list_medium_line_x2_t2_g4_t1

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g4_t2_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00071000) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00071000) list_medium_line_x2_t2_g4_t

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g3_g1

0x424e,	// (0x00065f50) list_medium_line_x2_t2_g3_g2_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_t2_g3_g2

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x00070f6d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x00070f6d) list_medium_line_x2_t2_g3_g

0x4365,	// (0x00066067) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4365,	// (0x00066067) list_medium_line_x2_t2_g3_t1

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g3_t2_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x00071005) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x00071005) list_medium_line_x2_t2_g3_t

0x725f,	// (0x00068f61) main_sp_fs_list_pane_ParamLimits

0x725f,	// (0x00068f61) main_sp_fs_list_pane

0x726b,	// (0x00068f6d) sp_fs_scroll_pane_ParamLimits

0x726b,	// (0x00068f6d) sp_fs_scroll_pane

0x437a,	// (0x0006607c) list_medium_line_x2_t3_t1

0x438a,	// (0x0006608c) list_medium_line_x2_t3_t2

0x4398,	// (0x0006609a) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x00071050) list_medium_line_x2_t3_t

0x43a6,	// (0x000660a8) list_medium_line_x3_t4_t1

0x43b6,	// (0x000660b8) list_medium_line_x3_t4_t2

0x43c4,	// (0x000660c6) list_medium_line_x3_t4_t3

0x4398,	// (0x0006609a) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00071057) list_medium_line_x3_t4_t

0x43d2,	// (0x000660d4) list_medium_line_x4_t5_t1

0x43e2,	// (0x000660e4) list_medium_line_x4_t5_t2

0x43c4,	// (0x000660c6) list_medium_line_x4_t5_t3

0x43f0,	// (0x000660f2) list_medium_line_x4_t5_t4

0x4398,	// (0x0006609a) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x00071060) list_medium_line_x4_t5_t

0x4242,	// (0x00065f44) list_medium_line_t4_g4_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_t4_g4_g1

0x42f4,	// (0x00065ff6) list_medium_line_t4_g4_g2_ParamLimits

0x42f4,	// (0x00065ff6) list_medium_line_t4_g4_g2

0x43fe,	// (0x00066100) list_medium_line_t4_g4_g3_ParamLimits

0x43fe,	// (0x00066100) list_medium_line_t4_g4_g3

0x425a,	// (0x00065f5c) list_medium_line_t4_g4_g4_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0007106b) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0007106b) list_medium_line_t4_g4_g

0x440a,	// (0x0006610c) list_medium_line_t4_g4_t1_ParamLimits

0x440a,	// (0x0006610c) list_medium_line_t4_g4_t1

0x441f,	// (0x00066121) list_medium_line_t4_g4_t2_ParamLimits

0x441f,	// (0x00066121) list_medium_line_t4_g4_t2

0x4435,	// (0x00066137) list_medium_line_t4_g4_t3_ParamLimits

0x4435,	// (0x00066137) list_medium_line_t4_g4_t3

0x428d,	// (0x00065f8f) list_medium_line_t4_g4_t4_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00071074) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00071074) list_medium_line_t4_g4_t

0x75f9,	// (0x000692fb) chi_dic_find_pane_g1

0x9ad9,	// (0x0006b7db) main_tport_pane

0x4696,	// (0x00066398) list_medium_line_plain_t1

0x46a4,	// (0x000663a6) list_medium_line_t2_g2_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t2_g2_g1

0x46b0,	// (0x000663b2) list_medium_line_t2_g2_g2_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00071730) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00071730) list_medium_line_t2_g2_g

0x46bc,	// (0x000663be) list_medium_line_t2_g2_t1_ParamLimits

0x46bc,	// (0x000663be) list_medium_line_t2_g2_t1

0x46d6,	// (0x000663d8) list_medium_line_t2_g2_t2_ParamLimits

0x46d6,	// (0x000663d8) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00071735) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00071735) list_medium_line_t2_g2_t

0x485b,	// (0x0006655d) aid_sp_fs_list_icon_a_sm

0xcbef,	// (0x0006e8f1) aid_sp_fs_list_icon_d

0x2f41,	// (0x00064c43) aid_sp_fs_text_primary

0x4863,	// (0x00066565) aid_sp_fs_text_secondary

0x486c,	// (0x0006656e) list_medium_line

0x486c,	// (0x0006656e) list_medium_line_g2

0x486c,	// (0x0006656e) list_medium_line_g3

0x486c,	// (0x0006656e) list_medium_line_plain

0x486c,	// (0x0006656e) list_medium_line_plain_t2

0x486c,	// (0x0006656e) list_medium_line_plain_t3

0x486c,	// (0x0006656e) list_medium_line_right_icon

0x486c,	// (0x0006656e) list_medium_line_right_iconx2

0x486c,	// (0x0006656e) list_medium_line_t2

0x486c,	// (0x0006656e) list_medium_line_t2_g2

0x486c,	// (0x0006656e) list_medium_line_t2_g3

0x486c,	// (0x0006656e) list_medium_line_t2_right_icon

0x486c,	// (0x0006656e) list_medium_line_t2_right_iconx2

0x486c,	// (0x0006656e) list_medium_line_t3

0x486c,	// (0x0006656e) list_medium_line_t3_g2

0x486c,	// (0x0006656e) list_medium_line_t3_g3

0x486c,	// (0x0006656e) list_medium_line_t3_right_iconx2

0x4875,	// (0x00066577) list_medium_line_t4_g4

0x24a6,	// (0x000641a8) list_medium_line_x2

0x24a6,	// (0x000641a8) list_medium_line_x2_t2_g2

0x24a6,	// (0x000641a8) list_medium_line_x2_t2_g3

0x24a6,	// (0x000641a8) list_medium_line_x2_t2_g4

0x24a6,	// (0x000641a8) list_medium_line_x2_t3

0x24a6,	// (0x000641a8) list_medium_line_x2_t3_g2

0x24a6,	// (0x000641a8) list_medium_line_x2_t3_g3

0x24a6,	// (0x000641a8) list_medium_line_x2_t3_g4

0x24a6,	// (0x000641a8) list_medium_line_x2_t4_g2

0x24a6,	// (0x000641a8) list_medium_line_x2_t4_g4

0x487e,	// (0x00066580) list_medium_line_x3

0x487e,	// (0x00066580) list_medium_line_x3_t4

0x487e,	// (0x00066580) list_medium_line_x3_t4_g4

0x4875,	// (0x00066577) list_medium_line_x4_t4

0x4875,	// (0x00066577) list_medium_line_x4_t4_g7

0x4875,	// (0x00066577) list_medium_line_x4_t5

0x4887,	// (0x00066589) list_single_fs_dyc_pane_ParamLimits

0x4887,	// (0x00066589) list_single_fs_dyc_pane

0x4242,	// (0x00065f44) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x4_t4_g7_g1

0x489b,	// (0x0006659d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x489b,	// (0x0006659d) list_medium_line_x4_t4_g7_g2

0x48a7,	// (0x000665a9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x48a7,	// (0x000665a9) list_medium_line_x4_t4_g7_g3

0x48b6,	// (0x000665b8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x48b6,	// (0x000665b8) list_medium_line_x4_t4_g7_g4

0x48c2,	// (0x000665c4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x48c2,	// (0x000665c4) list_medium_line_x4_t4_g7_g5

0x48d1,	// (0x000665d3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x48d1,	// (0x000665d3) list_medium_line_x4_t4_g7_g6

0x48e0,	// (0x000665e2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x48e0,	// (0x000665e2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x000718fa) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x000718fa) list_medium_line_x4_t4_g7_g

0x48ec,	// (0x000665ee) list_medium_line_x4_t4_g7_t1_ParamLimits

0x48ec,	// (0x000665ee) list_medium_line_x4_t4_g7_t1

0x4901,	// (0x00066603) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4901,	// (0x00066603) list_medium_line_x4_t4_g7_t2

0x4916,	// (0x00066618) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4916,	// (0x00066618) list_medium_line_x4_t4_g7_t3

0x492b,	// (0x0006662d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x492b,	// (0x0006662d) list_medium_line_x4_t4_g7_t4

0x493d,	// (0x0006663f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x493d,	// (0x0006663f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00071909) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00071909) list_medium_line_x4_t4_g7_t

0x494f,	// (0x00066651) list_single_dyc_row_pane_ParamLimits

0x494f,	// (0x00066651) list_single_dyc_row_pane

0xd8a1,	// (0x0006f5a3) call5_gesture_pane_ParamLimits

0xd8a1,	// (0x0006f5a3) call5_gesture_pane

0xd8d5,	// (0x0006f5d7) call5_windows_pane_ParamLimits

0xd8d5,	// (0x0006f5d7) call5_windows_pane

0xd947,	// (0x0006f649) call5_swipe_1_pane_cp_ParamLimits

0xd947,	// (0x0006f649) call5_swipe_1_pane_cp

0xd953,	// (0x0006f655) call5_swipe_2_pane_cp_ParamLimits

0xd953,	// (0x0006f655) call5_swipe_2_pane_cp

0x7a2c,	// (0x0006972e) call5_image_pane_cp

0xd95f,	// (0x0006f661) popup_call5_audio_first_window_cp_ParamLimits

0xd95f,	// (0x0006f661) popup_call5_audio_first_window_cp

0x24f1,	// (0x000641f3) call5_swipe_1_pane_g1_cp_ParamLimits

0x24f1,	// (0x000641f3) call5_swipe_1_pane_g1_cp

0x2531,	// (0x00064233) call5_swipe_1_pane_g2_cp

0x250a,	// (0x0006420c) call5_swipe_1_pane_t1_cp_ParamLimits

0x250a,	// (0x0006420c) call5_swipe_1_pane_t1_cp

0x24f1,	// (0x000641f3) call5_swipe_2_pane_g1_cp_ParamLimits

0x24f1,	// (0x000641f3) call5_swipe_2_pane_g1_cp

0x2539,	// (0x0006423b) call5_swipe_2_pane_g2_cp

0x2541,	// (0x00064243) call5_swipe_2_pane_t1_cp_ParamLimits

0x2541,	// (0x00064243) call5_swipe_2_pane_t1_cp

0x9abd,	// (0x0006b7bf) main_sp_fs_email_pane

0x2556,	// (0x00064258) main_sp_fs_listscroll_pane_te

0x49c1,	// (0x000666c3) popup_sp_fs_action_menu_pane_ParamLimits

0x49c1,	// (0x000666c3) popup_sp_fs_action_menu_pane

0xe8a1,	// (0x000705a3) bg_sp_fs_ctrlbar_pane_g1

0x259f,	// (0x000642a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x25a8,	// (0x000642aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x25b1,	// (0x000642b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe8a1,	// (0x000705a3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x000719f2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa5dd,	// (0x0006c2df) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa5dd,	// (0x0006c2df) bg_sp_fs_ctrlbar_ddmenu_pane

0x25ba,	// (0x000642bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x25ba,	// (0x000642bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x25c6,	// (0x000642c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x25c6,	// (0x000642c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x000719fb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x000719fb) main_sp_fs_ctrlbar_ddmenu_pane_g

0x25d2,	// (0x000642d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x25d2,	// (0x000642d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4a03,	// (0x00066705) list_medium_line_t2_right_icon_g1

0x4a0b,	// (0x0006670d) list_medium_line_t2_right_icon_t1

0x4a1b,	// (0x0006671d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00071a00) list_medium_line_t2_right_icon_t

0x9aaf,	// (0x0006b7b1) bg_sp_fs_ctrlbar_pane_ParamLimits

0x9aaf,	// (0x0006b7b1) bg_sp_fs_ctrlbar_pane

0xd9c2,	// (0x0006f6c4) main_sp_fs_ctrlbar_button_pane_cp01

0xd9ca,	// (0x0006f6cc) main_sp_fs_ctrlbar_ddmenu_pane

0xf0ef,	// (0x00070df1) main_sp_fs_ctrlbar_pane_g1

0x262c,	// (0x0006432e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00071a05) main_sp_fs_ctrlbar_pane_g

0x2638,	// (0x0006433a) main_sp_fs_ctrlbar_pane_t1

0x4a29,	// (0x0006672b) main_sp_fs_ctrlbar_pane

0x4a45,	// (0x00066747) main_sp_fs_listscroll_pane_te_cp01

0x4a56,	// (0x00066758) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4a56,	// (0x00066758) popup_sp_fs_action_menu_pane_cp01

0x9abd,	// (0x0006b7bf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9abd,	// (0x0006b7bf) bg_sp_fs_highlight_list_pane_cp01

0x4a6e,	// (0x00066770) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4a6e,	// (0x00066770) sp_fs_action_menu_list_gene_pane_g1

0x265c,	// (0x0006435e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x265c,	// (0x0006435e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00071a0a) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00071a0a) sp_fs_action_menu_list_gene_pane_g

0x4a7d,	// (0x0006677f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4a7d,	// (0x0006677f) sp_fs_action_menu_list_gene_pane_t1

0x4a95,	// (0x00066797) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4a95,	// (0x00066797) sp_fs_action_menu_list_gene_pane

0x269e,	// (0x000643a0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x269e,	// (0x000643a0) popup_sp_fs_action_menu_bg_pane

0x4ab4,	// (0x000667b6) sp_fs_action_menu_list_pane_ParamLimits

0x4ab4,	// (0x000667b6) sp_fs_action_menu_list_pane

0x26ca,	// (0x000643cc) sp_fs_scroll_pane_cp01_ParamLimits

0x26ca,	// (0x000643cc) sp_fs_scroll_pane_cp01

0x4ad4,	// (0x000667d6) list_medium_line_plain_t2_t1

0x4ae4,	// (0x000667e6) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00071a0f) list_medium_line_plain_t2_t

0x4af2,	// (0x000667f4) list_medium_line_plain_t3_t1

0x4b02,	// (0x00066804) list_medium_line_plain_t3_t2

0x4b10,	// (0x00066812) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00071a14) list_medium_line_plain_t3_t

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t2_g2_g1

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00070f7b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00070f7b) list_medium_line_x2_t2_g2_g

0x440a,	// (0x0006610c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x440a,	// (0x0006610c) list_medium_line_x2_t2_g2_t1

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g2_t2_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00071a1b) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00071a1b) list_medium_line_x2_t2_g2_t

0x4242,	// (0x00065f44) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t4_g2_g1

0x4b1e,	// (0x00066820) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4b1e,	// (0x00066820) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x00071a20) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x00071a20) list_medium_line_x2_t4_g2_g

0x4b30,	// (0x00066832) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4b30,	// (0x00066832) list_medium_line_x2_t4_g2_t1

0x4b47,	// (0x00066849) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4b47,	// (0x00066849) list_medium_line_x2_t4_g2_t2

0x4b5c,	// (0x0006685e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4b5c,	// (0x0006685e) list_medium_line_x2_t4_g2_t3

0x428d,	// (0x00065f8f) list_medium_line_x2_t4_g2_t4_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00071a25) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00071a25) list_medium_line_x2_t4_g2_t

0x4b6e,	// (0x00066870) list_medium_line_t3_right_iconx2_g1

0x4a03,	// (0x00066705) list_medium_line_t3_right_iconx2_g2

0x4b76,	// (0x00066878) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x00071a2e) list_medium_line_t3_right_iconx2_g

0x4b7e,	// (0x00066880) list_medium_line_t3_right_iconx2_t1

0x4b8e,	// (0x00066890) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00071a35) list_medium_line_t3_right_iconx2_t

0x4242,	// (0x00065f44) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x3_t4_g4_g1

0x424e,	// (0x00065f50) list_medium_line_x3_t4_g4_g2_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x3_t4_g4_g2

0x42f4,	// (0x00065ff6) list_medium_line_x3_t4_g4_g3_ParamLimits

0x42f4,	// (0x00065ff6) list_medium_line_x3_t4_g4_g3

0x4b9c,	// (0x0006689e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4b9c,	// (0x0006689e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00071a3a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00071a3a) list_medium_line_x3_t4_g4_g

0x4ba8,	// (0x000668aa) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4ba8,	// (0x000668aa) list_medium_line_x3_t4_g4_t1

0x4bbf,	// (0x000668c1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4bbf,	// (0x000668c1) list_medium_line_x3_t4_g4_t2

0x4bd4,	// (0x000668d6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4bd4,	// (0x000668d6) list_medium_line_x3_t4_g4_t3

0x4be9,	// (0x000668eb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4be9,	// (0x000668eb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00071a43) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00071a43) list_medium_line_x3_t4_g4_t

0x4c06,	// (0x00066908) list_single_dyc_row_text_pane_t1_ParamLimits

0x4c06,	// (0x00066908) list_single_dyc_row_text_pane_t1

0x4c3d,	// (0x0006693f) list_single_dyc_row_text_pane_t2_ParamLimits

0x4c3d,	// (0x0006693f) list_single_dyc_row_text_pane_t2

0x4c97,	// (0x00066999) list_single_dyc_row_text_pane_t3_ParamLimits

0x4c97,	// (0x00066999) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00071a4c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00071a4c) list_single_dyc_row_text_pane_t

0x4ca9,	// (0x000669ab) list_single_dyc_row_pane_g1_ParamLimits

0x4ca9,	// (0x000669ab) list_single_dyc_row_pane_g1

0x4cb5,	// (0x000669b7) list_single_dyc_row_pane_g2_ParamLimits

0x4cb5,	// (0x000669b7) list_single_dyc_row_pane_g2

0x4cc1,	// (0x000669c3) list_single_dyc_row_pane_g3_ParamLimits

0x4cc1,	// (0x000669c3) list_single_dyc_row_pane_g3

0x4ccd,	// (0x000669cf) list_single_dyc_row_pane_g4_ParamLimits

0x4ccd,	// (0x000669cf) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00071a53) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00071a53) list_single_dyc_row_pane_g

0x4cd9,	// (0x000669db) list_single_dyc_row_text_pane_ParamLimits

0x4cd9,	// (0x000669db) list_single_dyc_row_text_pane

0x002f,	// (0x00061d31) bg_sp_fs_scroll_pane

0x2794,	// (0x00064496) thumb_sp_fs_scroll_pane

0x46a4,	// (0x000663a6) list_medium_line_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_g1

0x4cf8,	// (0x000669fa) list_medium_line_t1_ParamLimits

0x4cf8,	// (0x000669fa) list_medium_line_t1

0x4242,	// (0x00065f44) list_medium_line_x2_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_g1

0x424e,	// (0x00065f50) list_medium_line_x2_g2_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00071a5c) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00071a5c) list_medium_line_x2_g

0x4d0d,	// (0x00066a0f) list_medium_line_x2_t1_ParamLimits

0x4d0d,	// (0x00066a0f) list_medium_line_x2_t1

0x4242,	// (0x00065f44) list_medium_line_x3_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x3_g1

0x424e,	// (0x00065f50) list_medium_line_x3_g2_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00071a5c) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00071a5c) list_medium_line_x3_g

0x4d0d,	// (0x00066a0f) list_medium_line_x3_t1_ParamLimits

0x4d0d,	// (0x00066a0f) list_medium_line_x3_t1

0x27c8,	// (0x000644ca) thumb_sp_fs_scroll_pane_g1

0x27d1,	// (0x000644d3) thumb_sp_fs_scroll_pane_g2

0x27da,	// (0x000644dc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00071a61) thumb_sp_fs_scroll_pane_g

0x27c8,	// (0x000644ca) bg_sp_fs_scroll_pane_g1

0x27d1,	// (0x000644d3) bg_sp_fs_scroll_pane_g2

0x27da,	// (0x000644dc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00071a61) bg_sp_fs_scroll_pane_g

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4242,	// (0x00065f44) list_medium_line_x2_t3_g4_g1

0x42e8,	// (0x00065fea) list_medium_line_x2_t3_g4_g2_ParamLimits

0x42e8,	// (0x00065fea) list_medium_line_x2_t3_g4_g2

0x424e,	// (0x00065f50) list_medium_line_x2_t3_g4_g3_ParamLimits

0x424e,	// (0x00065f50) list_medium_line_x2_t3_g4_g3

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x425a,	// (0x00065f5c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00070ff7) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00070ff7) list_medium_line_x2_t3_g4_g

0x4d23,	// (0x00066a25) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4d23,	// (0x00066a25) list_medium_line_x2_t3_g4_t1

0x4d39,	// (0x00066a3b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4d39,	// (0x00066a3b) list_medium_line_x2_t3_g4_t2

0x428d,	// (0x00065f8f) list_medium_line_x2_t3_g4_t3_ParamLimits

0x428d,	// (0x00065f8f) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00071a68) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00071a68) list_medium_line_x2_t3_g4_t

0x46a4,	// (0x000663a6) list_medium_line_g2_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_g2_g1

0x46b0,	// (0x000663b2) list_medium_line_g2_g2_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00071730) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00071730) list_medium_line_g2_g

0x4d52,	// (0x00066a54) list_medium_line_g2_t1_ParamLimits

0x4d52,	// (0x00066a54) list_medium_line_g2_t1

0x46a4,	// (0x000663a6) list_medium_line_t3_g2_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t3_g2_g1

0x46b0,	// (0x000663b2) list_medium_line_t3_g2_g2_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00071730) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00071730) list_medium_line_t3_g2_g

0x4d67,	// (0x00066a69) list_medium_line_t3_g2_t1_ParamLimits

0x4d67,	// (0x00066a69) list_medium_line_t3_g2_t1

0x4d81,	// (0x00066a83) list_medium_line_t3_g2_t2_ParamLimits

0x4d81,	// (0x00066a83) list_medium_line_t3_g2_t2

0x4d96,	// (0x00066a98) list_medium_line_t3_g2_t3_ParamLimits

0x4d96,	// (0x00066a98) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00071a6f) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00071a6f) list_medium_line_t3_g2_t

0x4a03,	// (0x00066705) list_medium_line_right_icon_g1

0x4dac,	// (0x00066aae) list_medium_line_right_icon_t1

0x46a4,	// (0x000663a6) list_medium_line_t2_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t2_g1

0x4dba,	// (0x00066abc) list_medium_line_t2_t1_ParamLimits

0x4dba,	// (0x00066abc) list_medium_line_t2_t1

0x4dd4,	// (0x00066ad6) list_medium_line_t2_t2_ParamLimits

0x4dd4,	// (0x00066ad6) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00071a76) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00071a76) list_medium_line_t2_t

0x46a4,	// (0x000663a6) list_medium_line_t3_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t3_g1

0x4de9,	// (0x00066aeb) list_medium_line_t3_t1_ParamLimits

0x4de9,	// (0x00066aeb) list_medium_line_t3_t1

0x4e00,	// (0x00066b02) list_medium_line_t3_t2_ParamLimits

0x4e00,	// (0x00066b02) list_medium_line_t3_t2

0x4e15,	// (0x00066b17) list_medium_line_t3_t3_ParamLimits

0x4e15,	// (0x00066b17) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00071a7b) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00071a7b) list_medium_line_t3_t

0x46a4,	// (0x000663a6) list_medium_line_g3_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_g3_g1

0x4e27,	// (0x00066b29) list_medium_line_g3_g2_ParamLimits

0x4e27,	// (0x00066b29) list_medium_line_g3_g2

0x46b0,	// (0x000663b2) list_medium_line_g3_g3_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00071a82) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00071a82) list_medium_line_g3_g

0x4e33,	// (0x00066b35) list_medium_line_g3_t1_ParamLimits

0x4e33,	// (0x00066b35) list_medium_line_g3_t1

0x46a4,	// (0x000663a6) list_medium_line_t2_g3_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t2_g3_g1

0x4e27,	// (0x00066b29) list_medium_line_t2_g3_g2_ParamLimits

0x4e27,	// (0x00066b29) list_medium_line_t2_g3_g2

0x46b0,	// (0x000663b2) list_medium_line_t2_g3_g3_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00071a82) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00071a82) list_medium_line_t2_g3_g

0x4e48,	// (0x00066b4a) list_medium_line_t2_g3_t1_ParamLimits

0x4e48,	// (0x00066b4a) list_medium_line_t2_g3_t1

0x4e5f,	// (0x00066b61) list_medium_line_t2_g3_t2_ParamLimits

0x4e5f,	// (0x00066b61) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00071a89) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00071a89) list_medium_line_t2_g3_t

0x46a4,	// (0x000663a6) list_medium_line_t3_g3_g1_ParamLimits

0x46a4,	// (0x000663a6) list_medium_line_t3_g3_g1

0x4e27,	// (0x00066b29) list_medium_line_t3_g3_g2_ParamLimits

0x4e27,	// (0x00066b29) list_medium_line_t3_g3_g2

0x46b0,	// (0x000663b2) list_medium_line_t3_g3_g3_ParamLimits

0x46b0,	// (0x000663b2) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00071a82) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00071a82) list_medium_line_t3_g3_g

0x4e74,	// (0x00066b76) list_medium_line_t3_g3_t1_ParamLimits

0x4e74,	// (0x00066b76) list_medium_line_t3_g3_t1

0x4e88,	// (0x00066b8a) list_medium_line_t3_g3_t2_ParamLimits

0x4e88,	// (0x00066b8a) list_medium_line_t3_g3_t2

0x4e9a,	// (0x00066b9c) list_medium_line_t3_g3_t3_ParamLimits

0x4e9a,	// (0x00066b9c) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x00071a8e) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x00071a8e) list_medium_line_t3_g3_t

0x4b6e,	// (0x00066870) list_medium_line_right_iconx2_g1

0x4a03,	// (0x00066705) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00071a95) list_medium_line_right_iconx2_g

0x4eac,	// (0x00066bae) list_medium_line_right_iconx2_t1

0x4b6e,	// (0x00066870) list_medium_line_t2_right_iconx2_g1

0x4a03,	// (0x00066705) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00071a95) list_medium_line_t2_right_iconx2_g

0x4eba,	// (0x00066bbc) list_medium_line_t2_right_iconx2_t1

0x4eca,	// (0x00066bcc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00071a9a) list_medium_line_t2_right_iconx2_t

0x4ed8,	// (0x00066bda) list_medium_line_x4_t4_t1

0x4ee6,	// (0x00066be8) list_medium_line_x4_t4_t2

0x4ef6,	// (0x00066bf8) list_medium_line_x4_t4_t3

0x4f06,	// (0x00066c08) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x00071a9f) list_medium_line_x4_t4_t

0xd9fd,	// (0x0006f6ff) tport_appsw_pane_ParamLimits

0xd9fd,	// (0x0006f6ff) tport_appsw_pane

0xda09,	// (0x0006f70b) tport_contact_pane_ParamLimits

0xda09,	// (0x0006f70b) tport_contact_pane

0xda19,	// (0x0006f71b) tport_listscroll_pane_ParamLimits

0xda19,	// (0x0006f71b) tport_listscroll_pane

0xda29,	// (0x0006f72b) cell_tport_appsw_pane_ParamLimits

0xda29,	// (0x0006f72b) cell_tport_appsw_pane

0xeb6d,	// (0x0007086f) tport_appsw_pane_g1_ParamLimits

0xeb6d,	// (0x0007086f) tport_appsw_pane_g1

0x2843,	// (0x00064545) tport_contact_pane_g1

0x284c,	// (0x0006454e) tport_contact_pane_t1

0x285a,	// (0x0006455c) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00071aa8) tport_contact_pane_t

0x2868,	// (0x0006456a) list_tport_pane

0x2871,	// (0x00064573) scroll_pane_cp_030

0x2882,	// (0x00064584) cell_tport_appsw_pane_g1

0x2892,	// (0x00064594) cell_tport_appsw_pane_t1

0x002f,	// (0x00061d31) grid_highlight_pane_cp019

0xda54,	// (0x0006f756) list_tport_double_graphic_pane_ParamLimits

0xda54,	// (0x0006f756) list_tport_double_graphic_pane

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp023_ParamLimits

0x9abd,	// (0x0006b7bf) list_highlight_pane_cp023

0xda67,	// (0x0006f769) list_tport_double_graphic_pane_g1_ParamLimits

0xda67,	// (0x0006f769) list_tport_double_graphic_pane_g1

0xda74,	// (0x0006f776) list_tport_double_graphic_pane_t1_ParamLimits

0xda74,	// (0x0006f776) list_tport_double_graphic_pane_t1

0xda89,	// (0x0006f78b) list_tport_double_graphic_pane_t2_ParamLimits

0xda89,	// (0x0006f78b) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00071ab4) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00071ab4) list_tport_double_graphic_pane_t

0x002f,	// (0x00061d31) main_cale_note_pane

0xbf47,	// (0x0006dc49) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbf47,	// (0x0006dc49) cell_vitu2_function_top_wide_pane_cp01

0xd5be,	// (0x0006f2c0) wait_bar_pane_cp05_ParamLimits

0x002f,	// (0x00061d31) listscroll_cmail_pane

0x28a8,	// (0x000645aa) list_cmail_pane

0xdaa5,	// (0x0006f7a7) list_cmail_body_pane

0xdac9,	// (0x0006f7cb) list_single_cmail_header_caption_pane

0xdaf7,	// (0x0006f7f9) list_single_cmail_header_detail_pane_ParamLimits

0xdaf7,	// (0x0006f7f9) list_single_cmail_header_detail_pane

0xdb2f,	// (0x0006f831) list_single_cmail_header_caption_pane_t1

0x4f16,	// (0x00066c18) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4f16,	// (0x00066c18) list_single_cmail_header_detail_pane_g1

0xdb3f,	// (0x0006f841) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdb3f,	// (0x0006f841) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00071ab9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00071ab9) list_single_cmail_header_detail_pane_g

0x4f2e,	// (0x00066c30) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4f2e,	// (0x00066c30) list_single_cmail_header_detail_pane_t1

0x4f86,	// (0x00066c88) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4f86,	// (0x00066c88) list_single_cmail_header_editor_pane_bg

0x2925,	// (0x00064627) list_cmail_body_pane_g1

0x292e,	// (0x00064630) list_cmail_body_pane_t1

0x13cb,	// (0x000630cd) list_single_cmail_header_editor_pane_bg_g1

0x0d46,	// (0x00062a48) list_single_cmail_header_editor_pane_bg_g1_copy1

0x13db,	// (0x000630dd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x13d3,	// (0x000630d5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x15f5,	// (0x000632f7) list_single_cmail_header_editor_pane_bg_g1_copy4

0x13fb,	// (0x000630fd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x13eb,	// (0x000630ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x13f3,	// (0x000630f5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0d26,	// (0x00062a28) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdb4b,	// (0x0006f84d) calenote_gesture_pane_ParamLimits

0xdb4b,	// (0x0006f84d) calenote_gesture_pane

0xdb65,	// (0x0006f867) calenote_window_pane_ParamLimits

0xdb65,	// (0x0006f867) calenote_window_pane

0x293c,	// (0x0006463e) popup_note_window_cp01

0xdb7d,	// (0x0006f87f) calenote_swipe_1_pane_ParamLimits

0xdb7d,	// (0x0006f87f) calenote_swipe_1_pane

0xd953,	// (0x0006f655) calenote_swipe_2_pane_ParamLimits

0xd953,	// (0x0006f655) calenote_swipe_2_pane

0x24f1,	// (0x000641f3) calenote_swipe_1_pane_g1_ParamLimits

0x24f1,	// (0x000641f3) calenote_swipe_1_pane_g1

0x24fe,	// (0x00064200) calenote_swipe_1_pane_g2_ParamLimits

0x24fe,	// (0x00064200) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000719e8) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000719e8) calenote_swipe_1_pane_g

0x294e,	// (0x00064650) calenote_swipe_1_pane_t1_ParamLimits

0x294e,	// (0x00064650) calenote_swipe_1_pane_t1

0x24f1,	// (0x000641f3) calenote_swipe_2_pane_g1_ParamLimits

0x24f1,	// (0x000641f3) calenote_swipe_2_pane_g1

0x296d,	// (0x0006466f) calenote_swipe_2_pane_g2_ParamLimits

0x296d,	// (0x0006466f) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00071ac5) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00071ac5) calenote_swipe_2_pane_g

0x2979,	// (0x0006467b) calenote_swipe_2_pane_t1_ParamLimits

0x2979,	// (0x0006467b) calenote_swipe_2_pane_t1

0x002f,	// (0x00061d31) main_mup_navstr_pane

0xacf7,	// (0x0006c9f9) main_mup3_pane_t7_ParamLimits

0xacf7,	// (0x0006c9f9) main_mup3_pane_t7

0xb6fe,	// (0x0006d400) main_mp4_pane_g6_ParamLimits

0xb6fe,	// (0x0006d400) main_mp4_pane_g6

0xba72,	// (0x0006d774) main_image3_pane_t4_ParamLimits

0xba72,	// (0x0006d774) main_image3_pane_t4

0xdb90,	// (0x0006f892) popup_navstr_preview_pane_ParamLimits

0xdb90,	// (0x0006f892) popup_navstr_preview_pane

0xdb9c,	// (0x0006f89e) scroll_navstr_pane_ParamLimits

0xdb9c,	// (0x0006f89e) scroll_navstr_pane

0x002f,	// (0x00061d31) bg_popup_preview_window_pane_cp04

0x29a0,	// (0x000646a2) popup_navstr_preview_pane_t1

0xdba8,	// (0x0006f8aa) scroll_navstr_pane_g1_ParamLimits

0xdba8,	// (0x0006f8aa) scroll_navstr_pane_g1

0xdbb5,	// (0x0006f8b7) scroll_navstr_pane_t1_ParamLimits

0xdbb5,	// (0x0006f8b7) scroll_navstr_pane_t1

0x2945,	// (0x00064647) bg_button_pane_cp014

0x2945,	// (0x00064647) bg_button_pane_cp030

0x4978,	// (0x0006667a) list_double_fisheye_pane_g4_ParamLimits

0x4978,	// (0x0006667a) list_double_fisheye_pane_g4

0xd890,	// (0x0006f592) list_double_fisheye_pane_g5_ParamLimits

0xd890,	// (0x0006f592) list_double_fisheye_pane_g5

0x28b0,	// (0x000645b2) sp_fs_scroll_pane_cp03

0xf0ef,	// (0x00070df1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x262c,	// (0x0006432e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00071a05) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2638,	// (0x0006433a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xda9b,	// (0x0006f79d) sp_fs_scroll_pane_cp02

0x09ca,	// (0x000626cc) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x09ca,	// (0x000626cc) popup_sp_fs_calendar_preview_list_single_pane

0x002f,	// (0x00061d31) main_cam6_pano_pane

0x9abd,	// (0x0006b7bf) main_mup3_pane_ParamLimits

0x002f,	// (0x00061d31) main_phacti_pane

0xd493,	// (0x0006f195) bg_button_pane_cp11

0xd4ab,	// (0x0006f1ad) main_mobtv_info_pane_g2_ParamLimits

0xd4ab,	// (0x0006f1ad) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00071965) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00071965) main_mobtv_info_pane_g

0xd65d,	// (0x0006f35f) sc_clock_pane_t5_ParamLimits

0xd65d,	// (0x0006f35f) sc_clock_pane_t5

0xd6ff,	// (0x0006f401) main_radioblah_pane_g1_ParamLimits

0x2434,	// (0x00064136) main_radioblah_pane_t3_ParamLimits

0x2434,	// (0x00064136) main_radioblah_pane_t3

0x244c,	// (0x0006414e) main_radioblah_pane_t4_ParamLimits

0x244c,	// (0x0006414e) main_radioblah_pane_t4

0xd71d,	// (0x0006f41f) main_radioblah_text_pane_ParamLimits

0xd71d,	// (0x0006f41f) main_radioblah_text_pane

0xd72a,	// (0x0006f42c) main_radioblah_info_pane_g1_ParamLimits

0xd7bf,	// (0x0006f4c1) main_radioblah_info_pane_t4_ParamLimits

0xd7bf,	// (0x0006f4c1) main_radioblah_info_pane_t4

0x9abd,	// (0x0006b7bf) main_sp_fs_calendar_pane

0xdbc7,	// (0x0006f8c9) main_phacti_pane_g1

0xdbcf,	// (0x0006f8d1) phacti_note_pane_ParamLimits

0xdbcf,	// (0x0006f8d1) phacti_note_pane

0x29b7,	// (0x000646b9) phacti_term_pane_ParamLimits

0x29b7,	// (0x000646b9) phacti_term_pane

0x29cc,	// (0x000646ce) phacti_note_pane_t1_ParamLimits

0x29cc,	// (0x000646ce) phacti_note_pane_t1

0x4f98,	// (0x00066c9a) phacti_term_pane_g1

0x4fa0,	// (0x00066ca2) phacti_term_pane_t1_ParamLimits

0x4fa0,	// (0x00066ca2) phacti_term_pane_t1

0x2a15,	// (0x00064717) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2a1d,	// (0x0006471f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x00071acf) popup_sp_fs_calendar_preview_list_single_pane_g

0x2a25,	// (0x00064727) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2a25,	// (0x00064727) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2a3b,	// (0x0006473d) aid_popup_sp_fs_bg_corner_pane

0xe8a1,	// (0x000705a3) popup_sp_fs_calendar_preview_bg_pane_g1

0x002f,	// (0x00061d31) popup_sp_fs_calendar_preview_bg_pane

0x2a43,	// (0x00064745) popup_sp_fs_calendar_preview_list_pane

0x9abd,	// (0x0006b7bf) bg_main_sp_fs_cale_pane_ParamLimits

0x9abd,	// (0x0006b7bf) bg_main_sp_fs_cale_pane

0x4fca,	// (0x00066ccc) listscroll_cale_mrui_pane_ParamLimits

0x4fca,	// (0x00066ccc) listscroll_cale_mrui_pane

0x4fde,	// (0x00066ce0) listscroll_sp_fs_schedule_track_pane

0x4fe7,	// (0x00066ce9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4fe7,	// (0x00066ce9) main_sp_fs_ctrlbar_pane_cp01

0x2a79,	// (0x0006477b) main_sp_fs_ribbon_pane

0x2a81,	// (0x00064783) popup_sp_fs_cale_preview_window

0xdc12,	// (0x0006f914) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdc12,	// (0x0006f914) list_single_sp_fs_schedule_track_pane

0x550e,	// (0x00067210) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x550e,	// (0x00067210) bg_sp_fs_highlight_list_pane_cp03

0xdc34,	// (0x0006f936) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc34,	// (0x0006f936) list_single_sp_fs_schedule_track_pane_g1

0xdc40,	// (0x0006f942) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc40,	// (0x0006f942) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00071ad4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00071ad4) list_single_sp_fs_schedule_track_pane_g

0xdc4c,	// (0x0006f94e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc4c,	// (0x0006f94e) list_single_sp_fs_schedule_track_pane_t1

0xdc64,	// (0x0006f966) sp_fs_schedule_track_pane_ParamLimits

0xdc64,	// (0x0006f966) sp_fs_schedule_track_pane

0x2a93,	// (0x00064795) sp_fs_schedule_track_pane_g1

0x2a9b,	// (0x0006479d) sp_fs_schedule_track_pane_g2

0x2aa3,	// (0x000647a5) sp_fs_schedule_track_pane_g3

0x2aab,	// (0x000647ad) sp_fs_schedule_track_pane_g4

0x2ab3,	// (0x000647b5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00071ad9) sp_fs_schedule_track_pane_g

0x13cb,	// (0x000630cd) bg_sp_fs_schedule_viewer_highlight_g1

0x0d46,	// (0x00062a48) bg_sp_fs_schedule_viewer_highlight_g2

0x13d3,	// (0x000630d5) bg_sp_fs_schedule_viewer_highlight_g3

0x13db,	// (0x000630dd) bg_sp_fs_schedule_viewer_highlight_g4

0x15f5,	// (0x000632f7) bg_sp_fs_schedule_viewer_highlight_g5

0x13eb,	// (0x000630ed) bg_sp_fs_schedule_viewer_highlight_g6

0x13f3,	// (0x000630f5) bg_sp_fs_schedule_viewer_highlight_g7

0x13fb,	// (0x000630fd) bg_sp_fs_schedule_viewer_highlight_g8

0x0d26,	// (0x00062a28) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00071ae4) bg_sp_fs_schedule_viewer_highlight_g

0x002f,	// (0x00061d31) bg_main_sp_fs_ribbon_pane

0xdc74,	// (0x0006f976) main_sp_fs_ribbon_pane_g1

0x2abb,	// (0x000647bd) main_sp_fs_ribbon_pane_t1

0xdc7d,	// (0x0006f97f) main_sp_fs_ribbon_pane_t2

0x2aca,	// (0x000647cc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00071af7) main_sp_fs_ribbon_pane_t

0x2ad9,	// (0x000647db) main_sp_fs_ribbon_scheduler_pane

0x2ae1,	// (0x000647e3) bg_main_sp_fs_ribbon_pane_g1

0x2aea,	// (0x000647ec) bg_main_sp_fs_ribbon_pane_g2

0x2af3,	// (0x000647f5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x00071afe) bg_main_sp_fs_ribbon_pane_g

0x2afb,	// (0x000647fd) main_sp_fs_ribbon_scheduler_pane_g1

0x2b04,	// (0x00064806) main_sp_fs_ribbon_scheduler_pane_g2

0x2b0d,	// (0x0006480f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00071b05) main_sp_fs_ribbon_scheduler_pane_g

0x2b16,	// (0x00064818) list_cale_mrui_pane

0xdc8c,	// (0x0006f98e) sp_fs_scroll_pane_cp07_ParamLimits

0xdc8c,	// (0x0006f98e) sp_fs_scroll_pane_cp07

0xdca2,	// (0x0006f9a4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdca2,	// (0x0006f9a4) bg_sp_fs_schedule_viewer_highlight

0x2b1f,	// (0x00064821) list_single_sp_fs_schedule_track_pane_cp01

0x2b27,	// (0x00064829) list_sp_fs_schedule_track_pane

0x2b2f,	// (0x00064831) sp_fs_scroll_pane_cp06_ParamLimits

0x2b2f,	// (0x00064831) sp_fs_scroll_pane_cp06

0xe8a1,	// (0x000705a3) bgmain_sp_fs_calendar_pane_g1

0x4ff8,	// (0x00066cfa) list_single_cale_mrui_pane_ParamLimits

0x4ff8,	// (0x00066cfa) list_single_cale_mrui_pane

0x5024,	// (0x00066d26) list_single_cale_mrui_row_pane_ParamLimits

0x5024,	// (0x00066d26) list_single_cale_mrui_row_pane

0x5031,	// (0x00066d33) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5031,	// (0x00066d33) list_single_cale_mrui_row_pane_g1

0x5069,	// (0x00066d6b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5069,	// (0x00066d6b) list_single_cale_mrui_row_pane_t1

0x507b,	// (0x00066d7d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x507b,	// (0x00066d7d) list_single_cale_mrui_row_pane_t2

0x50e1,	// (0x00066de3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x50e1,	// (0x00066de3) list_single_cale_mrui_row_pane_t3

0x5110,	// (0x00066e12) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5110,	// (0x00066e12) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00071b11) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00071b11) list_single_cale_mrui_row_pane_t

0x513f,	// (0x00066e41) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x513f,	// (0x00066e41) list_single_cmail_header_editor_pane_bg_cp01

0x5161,	// (0x00066e63) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5161,	// (0x00066e63) list_single_cmail_header_editor_pane_bg_cp02

0xdcaf,	// (0x0006f9b1) main_radioblah_text_pane_t1_ParamLimits

0xdcaf,	// (0x0006f9b1) main_radioblah_text_pane_t1

0x2bf6,	// (0x000648f8) cam6_indi_pane_cp01

0x2bfe,	// (0x00064900) cam6_mode_pane_cp01

0x2c06,	// (0x00064908) cam6_pano_pane

0x2c0f,	// (0x00064911) cam6_zoom_pane_cp01

0x2c17,	// (0x00064919) cam6_pano_image_pane

0x2c22,	// (0x00064924) cam6_pano_pane_g1

0x21ac,	// (0x00063eae) cam6_pano_pane_g2

0x2c2b,	// (0x0006492d) cam6_pano_pane_g3

0x2c34,	// (0x00064936) cam6_pano_pane_g4

0xee4a,	// (0x00070b4c) cam6_pano_pane_g5

0x2c3d,	// (0x0006493f) cam6_pano_pane_g6

0x2c47,	// (0x00064949) cam6_pano_pane_g7

0x2c4f,	// (0x00064951) cam6_pano_pane_g8

0x2c58,	// (0x0006495a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00071b1a) cam6_pano_pane_g

0x002f,	// (0x00061d31) main_browser_tag_pane

0x2998,	// (0x0006469a) grid_navstr_albumart_pane

0x2c63,	// (0x00064965) cell_navstr_albumart_pane_ParamLimits

0x2c63,	// (0x00064965) cell_navstr_albumart_pane

0x7fe7,	// (0x00069ce9) cell_navstr_albumart_pane_g1

0x967a,	// (0x0006b37c) cell_navstr_albumart_pane_g2

0x968a,	// (0x0006b38c) cell_navstr_albumart_pane_g3

0x9682,	// (0x0006b384) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00071b2d) cell_navstr_albumart_pane_g

0xdccc,	// (0x0006f9ce) bt_list_pane_ParamLimits

0xdccc,	// (0x0006f9ce) bt_list_pane

0xdcf3,	// (0x0006f9f5) bt_list_pane_t1

0xdd02,	// (0x0006fa04) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00071b36) bt_list_pane_t

0x002f,	// (0x00061d31) main_cale_prevew_pane

0xdd11,	// (0x0006fa13) popup_cale_preview_window_ParamLimits

0xdd11,	// (0x0006fa13) popup_cale_preview_window

0x9abd,	// (0x0006b7bf) bg_popup_preview_window_pane_cp05_ParamLimits

0x9abd,	// (0x0006b7bf) bg_popup_preview_window_pane_cp05

0x2c85,	// (0x00064987) list_cale_preview_pane_ParamLimits

0x2c85,	// (0x00064987) list_cale_preview_pane

0xdd28,	// (0x0006fa2a) list_double_cale_preview_pane_ParamLimits

0xdd28,	// (0x0006fa2a) list_double_cale_preview_pane

0xdd3a,	// (0x0006fa3c) list_single_cale_preview_pane_ParamLimits

0xdd3a,	// (0x0006fa3c) list_single_cale_preview_pane

0xdd4e,	// (0x0006fa50) list_single_cale_preview_pane_g1

0xdd56,	// (0x0006fa58) list_single_cale_preview_pane_t1_ParamLimits

0xdd56,	// (0x0006fa58) list_single_cale_preview_pane_t1

0xdd6b,	// (0x0006fa6d) list_double_cale_preview_pane_g1

0xdd73,	// (0x0006fa75) list_double_cale_preview_pane_t1_ParamLimits

0xdd73,	// (0x0006fa75) list_double_cale_preview_pane_t1

0xdd88,	// (0x0006fa8a) list_double_cale_preview_pane_t2_ParamLimits

0xdd88,	// (0x0006fa8a) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x00071b3b) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x00071b3b) list_double_cale_preview_pane_t

0x002f,	// (0x00061d31) main_ezdial_pane

0x9abd,	// (0x0006b7bf) main_sp_fs_email_pane_ParamLimits

0xd96b,	// (0x0006f66d) cmail_ddmenu_btn01_pane_ParamLimits

0xd96b,	// (0x0006f66d) cmail_ddmenu_btn01_pane

0xd988,	// (0x0006f68a) cmail_ddmenu_btn02_pane_ParamLimits

0xd988,	// (0x0006f68a) cmail_ddmenu_btn02_pane

0xd9a6,	// (0x0006f6a8) cmail_ddmenu_btn03_pane_ParamLimits

0xd9a6,	// (0x0006f6a8) cmail_ddmenu_btn03_pane

0x4a29,	// (0x0006672b) main_sp_fs_ctrlbar_pane_ParamLimits

0x4a45,	// (0x00066747) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdaa5,	// (0x0006f7a7) list_cmail_body_pane_ParamLimits

0x28bf,	// (0x000645c1) bg_button_pane_cp12

0x28d4,	// (0x000645d6) list_single_cmail_header_detail_pane_g3_ParamLimits

0x28d4,	// (0x000645d6) list_single_cmail_header_detail_pane_g3

0x4f60,	// (0x00066c62) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4f60,	// (0x00066c62) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x00071ac0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x00071ac0) list_single_cmail_header_detail_pane_t

0x4fb5,	// (0x00066cb7) phacti_term_pane_t2_ParamLimits

0x4fb5,	// (0x00066cb7) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00071aca) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00071aca) phacti_term_pane_t

0x2c91,	// (0x00064993) aid_size_list_single_double

0xdda0,	// (0x0006faa2) popup_ezdial_listscroll_window

0xddc1,	// (0x0006fac3) popup_number_entry_window_cp01

0x7a2c,	// (0x0006972e) bg_popup_call_pane_cp09

0x2c9d,	// (0x0006499f) ezdial_list_pane

0x2ca5,	// (0x000649a7) scroll_pane_cp23

0xa5dd,	// (0x0006c2df) bg_button_pane_cp028_ParamLimits

0xa5dd,	// (0x0006c2df) bg_button_pane_cp028

0xddcf,	// (0x0006fad1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xddcf,	// (0x0006fad1) cmail_ddmenu_btn01_pane_g1

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x00071b40) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x00071b40) cmail_ddmenu_btn01_pane_g

0x2cad,	// (0x000649af) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2cad,	// (0x000649af) cmail_ddmenu_btn01_pane_t1

0x9aaf,	// (0x0006b7b1) bg_button_pane_cp029_ParamLimits

0x9aaf,	// (0x0006b7b1) bg_button_pane_cp029

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn02_pane_g1

0xddf9,	// (0x0006fafb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xddf9,	// (0x0006fafb) cmail_ddmenu_btn02_pane_t1

0x550e,	// (0x00067210) bg_button_pane_cp031_ParamLimits

0x550e,	// (0x00067210) bg_button_pane_cp031

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdde1,	// (0x0006fae3) cmail_ddmenu_btn03_pane_g1

0xddf9,	// (0x0006fafb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xddf9,	// (0x0006fafb) cmail_ddmenu_btn03_pane_t1

0xb91d,	// (0x0006d61f) cell_dialer2_keypad_pane_t1_ParamLimits

0xb937,	// (0x0006d639) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb937,	// (0x0006d639) cell_dialer2_keypad_pane_t1_copy1

0xd355,	// (0x0006f057) ncimui_group_button_pane

0x9abd,	// (0x0006b7bf) main_sp_fs_calendar_pane_ParamLimits

0xdac9,	// (0x0006f7cb) list_single_cmail_header_caption_pane_ParamLimits

0x1938,	// (0x0006363a) aid_recal_txt_sm_pane

0x002f,	// (0x00061d31) mian_recal_day_pane

0x2a81,	// (0x00064783) popup_sp_fs_cale_preview_window_ParamLimits

0x002f,	// (0x00061d31) list_recal_day_pane

0x2cdb,	// (0x000649dd) list_single_recal_day_pane_ParamLimits

0x2cdb,	// (0x000649dd) list_single_recal_day_pane

0x2ced,	// (0x000649ef) list_single_recal_day_pane_g1_ParamLimits

0x2ced,	// (0x000649ef) list_single_recal_day_pane_g1

0x2cf9,	// (0x000649fb) list_single_recal_day_pane_g2_ParamLimits

0x2cf9,	// (0x000649fb) list_single_recal_day_pane_g2

0x2d08,	// (0x00064a0a) list_single_recal_day_pane_g3_ParamLimits

0x2d08,	// (0x00064a0a) list_single_recal_day_pane_g3

0xde1d,	// (0x0006fb1f) list_single_recal_day_pane_g4_ParamLimits

0xde1d,	// (0x0006fb1f) list_single_recal_day_pane_g4

0x2d14,	// (0x00064a16) list_single_recal_day_pane_g5_ParamLimits

0x2d14,	// (0x00064a16) list_single_recal_day_pane_g5

0x2d23,	// (0x00064a25) list_single_recal_day_pane_g6_ParamLimits

0x2d23,	// (0x00064a25) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x00071b4f) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x00071b4f) list_single_recal_day_pane_g

0x2d2f,	// (0x00064a31) list_single_recal_day_pane_t1

0x2d3d,	// (0x00064a3f) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00071b5c) list_single_recal_day_pane_t

0xde30,	// (0x0006fb32) ncimui_query_button_pane_ParamLimits

0xde30,	// (0x0006fb32) ncimui_query_button_pane

0xde40,	// (0x0006fb42) ncimui_query_button_pane_t1_ParamLimits

0xde40,	// (0x0006fb42) ncimui_query_button_pane_t1

0x2d4b,	// (0x00064a4d) ncimui_query_button_pane_t2_ParamLimits

0x2d4b,	// (0x00064a4d) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x00071b61) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x00071b61) ncimui_query_button_pane_t

0xde53,	// (0x0006fb55) query_button_pane_ParamLimits

0xde53,	// (0x0006fb55) query_button_pane

0x002f,	// (0x00061d31) bg_button_pane_cp0028

0x2d5e,	// (0x00064a60) query_button_pane_t1

0x9ad9,	// (0x0006b7db) main_tport_pane_ParamLimits

0xd9d4,	// (0x0006f6d6) bg_popup_window_pane_cp01_ParamLimits

0xd9d4,	// (0x0006f6d6) bg_popup_window_pane_cp01

0xd9e1,	// (0x0006f6e3) heading_pane_cp08_ParamLimits

0xd9e1,	// (0x0006f6e3) heading_pane_cp08

0xd9ef,	// (0x0006f6f1) heading_pane_cp07_ParamLimits

0xd9ef,	// (0x0006f6f1) heading_pane_cp07

0x2882,	// (0x00064584) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x00071aad) cell_tport_appsw_pane_g

0x4463,	// (0x00066165) input_candi_list_open_g1

0x709e,	// (0x00068da0) list_cale_time_pane_g6_ParamLimits

0x709e,	// (0x00068da0) list_cale_time_pane_g6

0xa76a,	// (0x0006c46c) aid_size_touch_calib_1_ParamLimits

0xa76a,	// (0x0006c46c) aid_size_touch_calib_1

0xa776,	// (0x0006c478) aid_size_touch_calib_2_ParamLimits

0xa776,	// (0x0006c478) aid_size_touch_calib_2

0xa784,	// (0x0006c486) aid_size_touch_calib_3_ParamLimits

0xa784,	// (0x0006c486) aid_size_touch_calib_3

0xa794,	// (0x0006c496) aid_size_touch_calib_4_ParamLimits

0xa794,	// (0x0006c496) aid_size_touch_calib_4

0xa7a2,	// (0x0006c4a4) main_touch_calib_button_group_pane_ParamLimits

0xa7a2,	// (0x0006c4a4) main_touch_calib_button_group_pane

0xa7b0,	// (0x0006c4b2) main_touch_calib_pane_g1_ParamLimits

0xa7bc,	// (0x0006c4be) main_touch_calib_pane_g2_ParamLimits

0xa7c8,	// (0x0006c4ca) main_touch_calib_pane_g3_ParamLimits

0xa7d4,	// (0x0006c4d6) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00071486) main_touch_calib_pane_g_ParamLimits

0xa7e0,	// (0x0006c4e2) main_touch_calib_pane_t1_ParamLimits

0xa7f7,	// (0x0006c4f9) main_touch_calib_pane_t2_ParamLimits

0xa80e,	// (0x0006c510) main_touch_calib_pane_t3_ParamLimits

0xa822,	// (0x0006c524) main_touch_calib_pane_t4_ParamLimits

0xa836,	// (0x0006c538) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x0007148f) main_touch_calib_pane_t_ParamLimits

0xec0e,	// (0x00070910) list_single_fp_cale_pane_g3_ParamLimits

0xec0e,	// (0x00070910) list_single_fp_cale_pane_g3

0x9abd,	// (0x0006b7bf) bg_button_pane_cp012_ParamLimits

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp03_ParamLimits

0xc6c8,	// (0x0006e3ca) cell_vitu2_function_top_pane_g1_ParamLimits

0x9abd,	// (0x0006b7bf) bg_vkb2_func_pane_cp04_ParamLimits

0xd306,	// (0x0006f008) main_ncimui_button_group_pane_ParamLimits

0xd306,	// (0x0006f008) main_ncimui_button_group_pane

0xd343,	// (0x0006f045) main_ncimui_pane_t3_ParamLimits

0xd343,	// (0x0006f045) main_ncimui_pane_t3

0x29ae,	// (0x000646b0) phacti_button_group_pane

0x2c91,	// (0x00064993) aid_size_list_single_double_ParamLimits

0xdda0,	// (0x0006faa2) popup_ezdial_listscroll_window_ParamLimits

0xddc1,	// (0x0006fac3) popup_number_entry_window_cp01_ParamLimits

0xde60,	// (0x0006fb62) phacti_button_pane_ParamLimits

0xde60,	// (0x0006fb62) phacti_button_pane

0x002f,	// (0x00061d31) bg_button_pane_cp14

0x2d6c,	// (0x00064a6e) phacti_button_pane_t1

0xde71,	// (0x0006fb73) main_touch_calib_button_pane_ParamLimits

0xde71,	// (0x0006fb73) main_touch_calib_button_pane

0x083e,	// (0x00062540) bg_button_pane_cp18_ParamLimits

0x083e,	// (0x00062540) bg_button_pane_cp18

0x2d7a,	// (0x00064a7c) main_touch_calib_button_pane_t1_ParamLimits

0x2d7a,	// (0x00064a7c) main_touch_calib_button_pane_t1

0x2d90,	// (0x00064a92) main_touch_calib_button_pane_t2_ParamLimits

0x2d90,	// (0x00064a92) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00071b66) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00071b66) main_touch_calib_button_pane_t

0x002f,	// (0x00061d31) cell_ncimui_button_pane

0x002f,	// (0x00061d31) bg_button_pane_cp032

0x2dae,	// (0x00064ab0) cell_ncimui_button_pane_t1

0xb993,	// (0x0006d695) image3_infobar_pane_ParamLimits

0xb993,	// (0x0006d695) image3_infobar_pane

0xd67f,	// (0x0006f381) fs_bigclock_status_pane_ParamLimits

0xd67f,	// (0x0006f381) fs_bigclock_status_pane

0xd68c,	// (0x0006f38e) main_fs_bigclock_clock_pane_ParamLimits

0xd68c,	// (0x0006f38e) main_fs_bigclock_clock_pane

0xd6a0,	// (0x0006f3a2) main_fs_bigclock_indi_pane_ParamLimits

0xd6a0,	// (0x0006f3a2) main_fs_bigclock_indi_pane

0xd6cd,	// (0x0006f3cf) main_fs_bigclock_swipe_pane_ParamLimits

0xd6cd,	// (0x0006f3cf) main_fs_bigclock_swipe_pane

0x002f,	// (0x00061d31) main_fs_clock_dumped_data

0x22b9,	// (0x00063fbb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x22b9,	// (0x00063fbb) list_single_fs_bigclock_indicator_pane_g1

0x22d7,	// (0x00063fd9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x22d7,	// (0x00063fd9) list_single_fs_bigclock_indicator_pane_g2

0x22f1,	// (0x00063ff3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x22f1,	// (0x00063ff3) list_single_fs_bigclock_indicator_pane_g3

0x230b,	// (0x0006400d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x230b,	// (0x0006400d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00071999) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00071999) list_single_fs_bigclock_indicator_pane_g

0x2331,	// (0x00064033) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2331,	// (0x00064033) list_single_fs_bigclock_indicator_pane_t1

0x2359,	// (0x0006405b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2359,	// (0x0006405b) list_single_fs_bigclock_indicator_pane_t2

0x2381,	// (0x00064083) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2381,	// (0x00064083) list_single_fs_bigclock_indicator_pane_t3

0x23a9,	// (0x000640ab) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x23a9,	// (0x000640ab) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x000719a4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x000719a4) list_single_fs_bigclock_indicator_pane_t

0x2dbc,	// (0x00064abe) image3_infobar_fav_pane_ParamLimits

0x2dbc,	// (0x00064abe) image3_infobar_fav_pane

0x2dcc,	// (0x00064ace) image3_infobar_loc_pane_ParamLimits

0x2dcc,	// (0x00064ace) image3_infobar_loc_pane

0x2de0,	// (0x00064ae2) image3_infobar_time_pane_ParamLimits

0x2de0,	// (0x00064ae2) image3_infobar_time_pane

0xe8a1,	// (0x000705a3) image3_infobar_time_pane_g1

0x2df0,	// (0x00064af2) image3_infobar_time_pane_t1

0xe8a1,	// (0x000705a3) image3_infobar_loc_pane_g1

0x2dfe,	// (0x00064b00) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00071b6b) image3_infobar_loc_pane_g

0x2e06,	// (0x00064b08) image3_infobar_loc_pane_t1

0xe8a1,	// (0x000705a3) image3_infobar_fav_pane_g1

0x2e14,	// (0x00064b16) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x00071b70) image3_infobar_fav_pane_g

0x2e1c,	// (0x00064b1e) fs_bigclock_status_battery_pane

0x2e25,	// (0x00064b27) fs_bigclock_status_signal_pane

0x2e2e,	// (0x00064b30) fs_bigclock_status_title_pane

0x2e37,	// (0x00064b39) fs_bigclock_status_signal_pane_g1

0x2e40,	// (0x00064b42) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00071b75) fs_bigclock_status_signal_pane_g

0x2e48,	// (0x00064b4a) fs_bigclock_status_battery_pane_g1

0x2e51,	// (0x00064b53) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00071b7a) fs_bigclock_status_battery_pane_g

0x2e59,	// (0x00064b5b) fs_bigclock_status_title_pane_t1

0xe8a1,	// (0x000705a3) main_fs_bigclock_clock_pane_g1

0x2e67,	// (0x00064b69) main_fs_bigclock_clock_pane_g2

0x2e67,	// (0x00064b69) main_fs_bigclock_clock_pane_g3

0x2e67,	// (0x00064b69) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x00071b7f) main_fs_bigclock_clock_pane_g

0x2e6f,	// (0x00064b71) main_fs_bigclock_clock_pane_t1

0x2e7d,	// (0x00064b7f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00071b88) main_fs_bigclock_clock_pane_t

0x2e8c,	// (0x00064b8e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2e8c,	// (0x00064b8e) list_single_fs_bigclock_indicator_pane

0xde81,	// (0x0006fb83) list_single_fs_bigclock_pane_ParamLimits

0xde81,	// (0x0006fb83) list_single_fs_bigclock_pane

0x2ea6,	// (0x00064ba8) main_fs_bigclock_indicator_pane_t1

0x2eb5,	// (0x00064bb7) list_single_fs_bigclock_pane_g1

0x2ebd,	// (0x00064bbf) list_single_fs_bigclock_pane_t1

0xe8a1,	// (0x000705a3) main_fs_bigclock_swipe_pane_g1

0x2efb,	// (0x00064bfd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00071b99) main_fs_bigclock_swipe_pane_g

0x2f03,	// (0x00064c05) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2f03,	// (0x00064c05) main_fs_bigclock_swipe_pane_t1

0x7385,	// (0x00069087) call_type_pane_ParamLimits

0x002f,	// (0x00061d31) main_btmg_pane

0x505d,	// (0x00066d5f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x505d,	// (0x00066d5f) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00071b0c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00071b0c) list_single_cale_mrui_row_pane_g

0x2ccb,	// (0x000649cd) list_recal_vselct_arw_lo_pane

0x2cd3,	// (0x000649d5) list_recal_vselct_arw_up_pane

0x192f,	// (0x00063631) list_recal_vselct_pane

0x2f20,	// (0x00064c22) btmg_button_pane

0xdee5,	// (0x0006fbe7) main_btmg_pane_g1

0x002f,	// (0x00061d31) bg_button_pane_cp044

0x2f2a,	// (0x00064c2c) btmg_button_pane_t1

0x9a9a,	// (0x0006b79c) aid_listscroll_gen

0x9abd,	// (0x0006b7bf) main_cntbar_detail_pane

0x28a0,	// (0x000645a2) list_cmail_folder_pane

0x28b0,	// (0x000645b2) sp_fs_scroll_pane_cp03_ParamLimits

0x517d,	// (0x00066e7f) list_single_fs_dyc_pane_cp01_ParamLimits

0x517d,	// (0x00066e7f) list_single_fs_dyc_pane_cp01

0x2f38,	// (0x00064c3a) aid_size_cmail_indent

0x51a9,	// (0x00066eab) list_single_dyc_row_pane_cp01

0xdf0d,	// (0x0006fc0f) cntbar_detail_list_pane_ParamLimits

0xdf0d,	// (0x0006fc0f) cntbar_detail_list_pane

0xdf47,	// (0x0006fc49) main_cntbar_detail_cont_pane_ParamLimits

0xdf47,	// (0x0006fc49) main_cntbar_detail_cont_pane

0x726b,	// (0x00068f6d) scroll_pane_cp032_ParamLimits

0x726b,	// (0x00068f6d) scroll_pane_cp032

0xdf53,	// (0x0006fc55) cntbar_detail_list_event_pane_ParamLimits

0xdf53,	// (0x0006fc55) cntbar_detail_list_event_pane

0xdf19,	// (0x0006fc1b) cntbar_detail_list_shct_pane

0x0d94,	// (0x00062a96) aid_list_gen

0x2f4a,	// (0x00064c4c) aid_scroll

0x2f53,	// (0x00064c55) aid_size_touch_scroll_bar

0x24a6,	// (0x000641a8) aid_list_double

0x2f5c,	// (0x00064c5e) aid_list_single

0x2f65,	// (0x00064c67) aid_list_single_lg

0x51b2,	// (0x00066eb4) aid_list_z_g_a_sm

0xdf67,	// (0x0006fc69) aid_list_z_g_d

0x51ba,	// (0x00066ebc) aid_txt_z_prm

0x51c8,	// (0x00066eca) aid_txt_z_prm_cp01

0x51d6,	// (0x00066ed8) aid_txt_z_sec

0xdf6f,	// (0x0006fc71) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdf6f,	// (0x0006fc71) main_cntbar_detail_cont_pane_g1

0xdf7c,	// (0x0006fc7e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdf7c,	// (0x0006fc7e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00071b9e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00071b9e) main_cntbar_detail_cont_pane_g

0x2f8c,	// (0x00064c8e) main_cntbar_detail_cont_pane_t1

0x2f9a,	// (0x00064c9c) main_cntbar_detail_cont_pane_t2

0x2fa8,	// (0x00064caa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00071ba3) main_cntbar_detail_cont_pane_t

0xdf88,	// (0x0006fc8a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdf88,	// (0x0006fc8a) cell_cntbar_detail_list_shct_pane

0x2fb6,	// (0x00064cb8) cntbar_detail_list_shct_pane_g1

0x2fbf,	// (0x00064cc1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00071baa) cntbar_detail_list_shct_pane_g

0xdf9c,	// (0x0006fc9e) cntbar_detail_list_event_pane_g1_ParamLimits

0xdf9c,	// (0x0006fc9e) cntbar_detail_list_event_pane_g1

0xdfa8,	// (0x0006fcaa) cntbar_detail_list_event_pane_g2_ParamLimits

0xdfa8,	// (0x0006fcaa) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00071baf) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00071baf) cntbar_detail_list_event_pane_g

0xe014,	// (0x0006fd16) cntbar_detail_list_event_pane_t1_ParamLimits

0xe014,	// (0x0006fd16) cntbar_detail_list_event_pane_t1

0xe029,	// (0x0006fd2b) cntbar_detail_list_event_pane_t2_ParamLimits

0xe029,	// (0x0006fd2b) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00071bbc) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00071bbc) cntbar_detail_list_event_pane_t

0xe8a1,	// (0x000705a3) cell_cntbar_detail_list_shct_pane_g1

0x79c0,	// (0x000696c2) navi_pane_mv_g3

0x9abd,	// (0x0006b7bf) main_cntbar_detail_pane_ParamLimits

0x002f,	// (0x00061d31) main_notif_wgt_pane

0xb645,	// (0x0006d347) aid_tch_main_mp4_pane_g4

0xb87a,	// (0x0006d57c) popup_slider_window_cp02

0x2cc2,	// (0x000649c4) list_recal_day_event_pane

0xdeed,	// (0x0006fbef) cntbar_detail_btn_pane_ParamLimits

0xdeed,	// (0x0006fbef) cntbar_detail_btn_pane

0xdefd,	// (0x0006fbff) cntbar_detail_btn_pane_cp01_ParamLimits

0xdefd,	// (0x0006fbff) cntbar_detail_btn_pane_cp01

0xdf19,	// (0x0006fc1b) cntbar_detail_list_shct_pane_ParamLimits

0xdf25,	// (0x0006fc27) cntbar_detail_pane_g1_ParamLimits

0xdf25,	// (0x0006fc27) cntbar_detail_pane_g1

0xdf31,	// (0x0006fc33) cntbar_detail_pane_t1_ParamLimits

0xdf31,	// (0x0006fc33) cntbar_detail_pane_t1

0xdfb4,	// (0x0006fcb6) cntbar_detail_list_event_pane_g3_ParamLimits

0xdfb4,	// (0x0006fcb6) cntbar_detail_list_event_pane_g3

0xdfcc,	// (0x0006fcce) cntbar_detail_list_event_pane_g4_ParamLimits

0xdfcc,	// (0x0006fcce) cntbar_detail_list_event_pane_g4

0xdfe4,	// (0x0006fce6) cntbar_detail_list_event_pane_g5_ParamLimits

0xdfe4,	// (0x0006fce6) cntbar_detail_list_event_pane_g5

0xdffc,	// (0x0006fcfe) cntbar_detail_list_event_pane_g6_ParamLimits

0xdffc,	// (0x0006fcfe) cntbar_detail_list_event_pane_g6

0xe03e,	// (0x0006fd40) cntbar_detail_list_event_pane_t3_ParamLimits

0xe03e,	// (0x0006fd40) cntbar_detail_list_event_pane_t3

0xe050,	// (0x0006fd52) popup_notif_wgt_window_ParamLimits

0xe050,	// (0x0006fd52) popup_notif_wgt_window

0xe060,	// (0x0006fd62) popup_submenu_window_cp01_ParamLimits

0xe060,	// (0x0006fd62) popup_submenu_window_cp01

0x7a2c,	// (0x0006972e) bg_popup_window_pane_cp10

0x2fc8,	// (0x00064cca) listscroll_notif_wgt_pane

0x2fd2,	// (0x00064cd4) list_notif_wgt_window

0x2fdb,	// (0x00064cdd) scroll_pane_cp033

0x2fe4,	// (0x00064ce6) list_notif_wgt_row_pane_ParamLimits

0x2fe4,	// (0x00064ce6) list_notif_wgt_row_pane

0x2ff8,	// (0x00064cfa) aid_size_list_notif_wgt_del

0x3001,	// (0x00064d03) list_notif_wgt_row_pane_g1

0x3009,	// (0x00064d0b) list_notif_wgt_row_pane_g2

0x3011,	// (0x00064d13) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00071bc3) list_notif_wgt_row_pane_g

0x301a,	// (0x00064d1c) list_notif_wgt_row_pane_t1

0x3028,	// (0x00064d2a) list_notif_wgt_row_pane_t2

0x3036,	// (0x00064d38) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00071bca) list_notif_wgt_row_pane_t

0x1627,	// (0x00063329) list_recal_day_event_pane_g1

0x3044,	// (0x00064d46) list_recal_day_event_pane_t1

0x002f,	// (0x00061d31) bg_button_pane_cp045

0x3053,	// (0x00064d55) cntbar_detail_btn_pane_t1

0x9aaf,	// (0x0006b7b1) main_callh_pane_ParamLimits

0x9aaf,	// (0x0006b7b1) main_callh_pane

0x002f,	// (0x00061d31) main_coverflow0_pane

0x002f,	// (0x00061d31) main_wgtman_pane

0xd6e5,	// (0x0006f3e7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd6e5,	// (0x0006f3e7) main_fs_bigclock_unlock_btn_pane

0x287a,	// (0x0006457c) bg_button_pane_cp16

0x288a,	// (0x0006458c) cell_tport_appsw_pane_g3

0xe06e,	// (0x0006fd70) cf0_flow_pane_ParamLimits

0xe06e,	// (0x0006fd70) cf0_flow_pane

0x3061,	// (0x00064d63) listscroll_cf0_pane

0x306a,	// (0x00064d6c) main_cf0_pane_g1

0xe07d,	// (0x0006fd7f) main_cf0_pane_t1_ParamLimits

0xe07d,	// (0x0006fd7f) main_cf0_pane_t1

0xe091,	// (0x0006fd93) main_cf0_pane_t2_ParamLimits

0xe091,	// (0x0006fd93) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00071bd1) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00071bd1) main_cf0_pane_t

0x3074,	// (0x00064d76) scroll_pane_cp11

0xe0a5,	// (0x0006fda7) cf0_flow_pane_g1

0xe0ad,	// (0x0006fdaf) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00071bd6) cf0_flow_pane_g

0xe0b5,	// (0x0006fdb7) cf0_flow_pane_t1

0x002f,	// (0x00061d31) main_call6_pane

0x002f,	// (0x00061d31) main_calllock_pane

0xe0c3,	// (0x0006fdc5) call6_btn_grp_pane_ParamLimits

0xe0c3,	// (0x0006fdc5) call6_btn_grp_pane

0xe0d2,	// (0x0006fdd4) call6_pane_g1_ParamLimits

0xe0d2,	// (0x0006fdd4) call6_pane_g1

0xe0e1,	// (0x0006fde3) popup_call6_1st_window_ParamLimits

0xe0e1,	// (0x0006fde3) popup_call6_1st_window

0xe0ef,	// (0x0006fdf1) popup_call6_2nd_window_ParamLimits

0xe0ef,	// (0x0006fdf1) popup_call6_2nd_window

0xe0fd,	// (0x0006fdff) cell_call6_btn_pane_ParamLimits

0xe0fd,	// (0x0006fdff) cell_call6_btn_pane

0x7a2c,	// (0x0006972e) bg_popup_call2_in_pane_cp03

0x307f,	// (0x00064d81) popup_call6_1st_window_g1

0x3087,	// (0x00064d89) popup_call6_1st_window_g2

0x308f,	// (0x00064d91) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00071bdb) popup_call6_1st_window_g

0x3097,	// (0x00064d99) popup_call6_1st_window_t1

0x30a6,	// (0x00064da8) popup_call6_1st_window_t2

0x30b6,	// (0x00064db8) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00071be2) popup_call6_1st_window_t

0x7a2c,	// (0x0006972e) bg_popup_call2_in_pane_cp04

0x307f,	// (0x00064d81) popup_call6_2nd_window_g1

0x3087,	// (0x00064d89) popup_call6_2nd_window_g2

0x308f,	// (0x00064d91) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00071bdb) popup_call6_2nd_window_g

0x3097,	// (0x00064d99) popup_call6_2nd_window_t1

0x002f,	// (0x00061d31) bg_button_pane_cp15

0x30c6,	// (0x00064dc8) cell_call6_btn_pane_g1

0x30cf,	// (0x00064dd1) cell_call6_btn_pane_t1

0xe10c,	// (0x0006fe0e) listscroll_wgtman_pane_ParamLimits

0xe10c,	// (0x0006fe0e) listscroll_wgtman_pane

0xe12a,	// (0x0006fe2c) wgtman_btn_pane_ParamLimits

0xe12a,	// (0x0006fe2c) wgtman_btn_pane

0x762c,	// (0x0006932e) aid_scroll_copy1

0x30de,	// (0x00064de0) list_wgtman_pane

0xe15f,	// (0x0006fe61) wgtman_btn_pane_g1_ParamLimits

0xe15f,	// (0x0006fe61) wgtman_btn_pane_g1

0xe187,	// (0x0006fe89) wgtman_btn_pane_t1_ParamLimits

0xe187,	// (0x0006fe89) wgtman_btn_pane_t1

0x30e8,	// (0x00064dea) wgtman_btn_pane_t2_ParamLimits

0x30e8,	// (0x00064dea) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00071be9) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00071be9) wgtman_btn_pane_t

0xe1be,	// (0x0006fec0) listrow_wgtman_pane_ParamLimits

0xe1be,	// (0x0006fec0) listrow_wgtman_pane

0xe1da,	// (0x0006fedc) listrow_wgtman_pane_g1

0xe1e3,	// (0x0006fee5) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00071bee) listrow_wgtman_pane_g

0x51e4,	// (0x00066ee6) listrow_wgtman_pane_t1

0x51f2,	// (0x00066ef4) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00071bf3) listrow_wgtman_pane_t

0x5200,	// (0x00066f02) wait_bar_pane_cp09

0x30ff,	// (0x00064e01) main_calllock_btn_pane

0x3109,	// (0x00064e0b) main_calllock_pane_g1

0x002f,	// (0x00061d31) bg_button_pane_cp17

0x3114,	// (0x00064e16) main_calllock_btn_pane_g1

0x311d,	// (0x00064e1f) main_calllock_btn_pane_t1

0x002f,	// (0x00061d31) main_dialer3_pane

0x002f,	// (0x00061d31) main_fmrd2_pane

0xe8a1,	// (0x000705a3) main_fs_bigclock_unlock_btn_pane_g1

0x3134,	// (0x00064e36) main_fs_bigclock_unlock_btn_pane_t1

0xe1ed,	// (0x0006feef) area_fmrd2_info_pane_ParamLimits

0xe1ed,	// (0x0006feef) area_fmrd2_info_pane

0xe1fb,	// (0x0006fefd) area_fmrd2_visual_pane_ParamLimits

0xe1fb,	// (0x0006fefd) area_fmrd2_visual_pane

0xe209,	// (0x0006ff0b) fmrd2_indi_pane_ParamLimits

0xe209,	// (0x0006ff0b) fmrd2_indi_pane

0xe216,	// (0x0006ff18) area_fmrd2_visual_pane_g1

0xe21e,	// (0x0006ff20) area_fmrd2_visual_pane_t1

0xe22e,	// (0x0006ff30) area_fmrd2_visual_pane_t2

0xe23e,	// (0x0006ff40) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00071bfd) area_fmrd2_visual_pane_t

0xe24e,	// (0x0006ff50) area_fmrd2_info_pane_g1

0xe256,	// (0x0006ff58) area_fmrd2_info_pane_t1

0xe266,	// (0x0006ff68) area_fmrd2_info_pane_t2

0xe276,	// (0x0006ff78) area_fmrd2_info_pane_t3

0xe286,	// (0x0006ff88) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00071c04) area_fmrd2_info_pane_t

0xe294,	// (0x0006ff96) fmrd2_indi_pane_t1

0xe2a4,	// (0x0006ffa6) fmrd2_indi_pane_t2

0xe2b4,	// (0x0006ffb6) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00071c0d) fmrd2_indi_pane_t

0x231a,	// (0x0006401c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x231a,	// (0x0006401c) list_single_fs_bigclock_indicator_pane_g5

0x23be,	// (0x000640c0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x23be,	// (0x000640c0) list_single_fs_bigclock_indicator_pane_t5

0xdbe5,	// (0x0006f8e7) aid_cell_bcale_month_pane_ParamLimits

0xdbe5,	// (0x0006f8e7) aid_cell_bcale_month_pane

0xdbf1,	// (0x0006f8f3) bcale_month_pane_ParamLimits

0xdbf1,	// (0x0006f8f3) bcale_month_pane

0xdc01,	// (0x0006f903) bcale_preview_pane_ParamLimits

0xdc01,	// (0x0006f903) bcale_preview_pane

0x2ebd,	// (0x00064bbf) list_single_fs_bigclock_pane_t1_ParamLimits

0x2ed7,	// (0x00064bd9) list_single_fs_bigclock_pane_t2_ParamLimits

0x2ed7,	// (0x00064bd9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00071b94) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00071b94) list_single_fs_bigclock_pane_t

0x312c,	// (0x00064e2e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00071bf8) main_fs_bigclock_unlock_btn_pane_g

0xe2c4,	// (0x0006ffc6) aid_dia3_key_size_ParamLimits

0xe2c4,	// (0x0006ffc6) aid_dia3_key_size

0xe2d0,	// (0x0006ffd2) aid_dia3_listrow_size_ParamLimits

0xe2d0,	// (0x0006ffd2) aid_dia3_listrow_size

0xe2e0,	// (0x0006ffe2) dia3_keypad_fun_pane_ParamLimits

0xe2e0,	// (0x0006ffe2) dia3_keypad_fun_pane

0xe2f2,	// (0x0006fff4) dia3_keypad_num_pane_ParamLimits

0xe2f2,	// (0x0006fff4) dia3_keypad_num_pane

0xe304,	// (0x00070006) dia3_listscroll_pane_ParamLimits

0xe304,	// (0x00070006) dia3_listscroll_pane

0xe312,	// (0x00070014) dia3_numentry_pane_ParamLimits

0xe312,	// (0x00070014) dia3_numentry_pane

0x3142,	// (0x00064e44) dia3_list_pane

0x314d,	// (0x00064e4f) scroll_pane_cp12

0x002f,	// (0x00061d31) bg_dia3_numentry_pane

0xe320,	// (0x00070022) dia3_numentry_pane_t1

0xe32f,	// (0x00070031) cell_dia3_key_num_pane

0xe337,	// (0x00070039) cell_dia3_key0_fun_pane_ParamLimits

0xe337,	// (0x00070039) cell_dia3_key0_fun_pane

0xe344,	// (0x00070046) cell_dia3_key1_fun_pane_ParamLimits

0xe344,	// (0x00070046) cell_dia3_key1_fun_pane

0xe351,	// (0x00070053) dia3_listrow_pane

0x2038,	// (0x00063d3a) bg_dia3_numentry_pane_g1

0x002f,	// (0x00061d31) bg_button_pane_cp21

0x3158,	// (0x00064e5a) cell_dia3_key_num_pane_t1

0x3166,	// (0x00064e68) cell_dia3_key_num_pane_t2

0x3175,	// (0x00064e77) cell_dia3_key_num_pane_t3

0x3184,	// (0x00064e86) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00071c14) cell_dia3_key_num_pane_t

0x002f,	// (0x00061d31) bg_button_pane_cp19

0xe35e,	// (0x00070060) cell_dia3_key0_fun_pane_g1

0x002f,	// (0x00061d31) bg_button_pane_cp20

0xe366,	// (0x00070068) cell_dia3_key1_fun_pane_g1

0xe36e,	// (0x00070070) area_left_week_number_pane

0xe377,	// (0x00070079) area_top_day_name_pane

0xe380,	// (0x00070082) frame_month_view_pane

0xe38a,	// (0x0007008c) grid_month_view_pane

0xe394,	// (0x00070096) cell_top_day_name_pane_ParamLimits

0xe394,	// (0x00070096) cell_top_day_name_pane

0xe3ae,	// (0x000700b0) cell_area_left_week_number_pane_ParamLimits

0xe3ae,	// (0x000700b0) cell_area_left_week_number_pane

0xe3c2,	// (0x000700c4) cell_month_view_pane_ParamLimits

0xe3c2,	// (0x000700c4) cell_month_view_pane

0x3193,	// (0x00064e95) frm_month_g1

0xe3df,	// (0x000700e1) frm_month_g2

0xe3e9,	// (0x000700eb) frm_month_g3

0xe3f3,	// (0x000700f5) frm_month_g4

0xe3fd,	// (0x000700ff) frm_month_g5

0xe407,	// (0x00070109) frm_month_g6

0xe411,	// (0x00070113) frm_month_g7

0x319c,	// (0x00064e9e) frm_month_g8

0xe41b,	// (0x0007011d) frm_month_g9

0xe424,	// (0x00070126) frm_month_g10

0xe42d,	// (0x0007012f) frm_month_g11

0xe436,	// (0x00070138) frm_month_g12

0xe43f,	// (0x00070141) frm_month_g13

0xe448,	// (0x0007014a) frm_month_g14

0xe451,	// (0x00070153) frm_month_g15

0xe45c,	// (0x0007015e) frm_month_g16

0x000f,

0xff1b,	// (0x00071c1d) frm_month_g

0xe467,	// (0x00070169) cell_top_day_name_pane_t1

0xe476,	// (0x00070178) cell_area_left_week_number_pane_g1

0xe467,	// (0x00070169) cell_area_left_week_number_pane_t1

0xe8a1,	// (0x000705a3) cell_month_view_pane_g1

0xe47e,	// (0x00070180) cell_month_view_pane_t1

0x002f,	// (0x00061d31) main_fps_pane

0x25f4,	// (0x000642f6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x25f4,	// (0x000642f6) cmail_ddmenu_btn02_pane_cp1

0x2610,	// (0x00064312) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2610,	// (0x00064312) cmail_ddmenu_btn02_pane_cp2

0xdded,	// (0x0006faef) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdded,	// (0x0006faef) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00071b45) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00071b45) cmail_ddmenu_btn02_pane_g

0xde0b,	// (0x0006fb0d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xde0b,	// (0x0006fb0d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00071b4a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00071b4a) cmail_ddmenu_btn02_pane_t

0xe48d,	// (0x0007018f) fps_text_pane_ParamLimits

0xe48d,	// (0x0007018f) fps_text_pane

0xe49a,	// (0x0007019c) main_fps_pane_g1_ParamLimits

0xe49a,	// (0x0007019c) main_fps_pane_g1

0xe4a8,	// (0x000701aa) wait_bar_pane_cp010_ParamLimits

0xe4a8,	// (0x000701aa) wait_bar_pane_cp010

0xe4b4,	// (0x000701b6) fps_text_pane_t1_ParamLimits

0xe4b4,	// (0x000701b6) fps_text_pane_t1

0xbc52,	// (0x0006d954) cam4_image_uncrop_pane_g1

0xbc5b,	// (0x0006d95d) cam4_image_uncrop_pane_g2

0xbc64,	// (0x0006d966) cam4_image_uncrop_pane_g3

0x31a5,	// (0x00064ea7) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x0007161e) cam4_image_uncrop_pane_g

0xe351,	// (0x00070053) dia3_listrow_pane_ParamLimits

0x002f,	// (0x00061d31) main_phob2_pane

0xda36,	// (0x0006f738) cell_tport_appsw_pane_cp02_ParamLimits

0xda36,	// (0x0006f738) cell_tport_appsw_pane_cp02

0xda45,	// (0x0006f747) cell_tport_appsw_pane_cp03_ParamLimits

0xda45,	// (0x0006f747) cell_tport_appsw_pane_cp03

0x002f,	// (0x00061d31) phob2_contact_card_pane

0x002f,	// (0x00061d31) phob2_listscroll_pane

0xe4cd,	// (0x000701cf) phob2_list_pane

0xe4d5,	// (0x000701d7) scroll_pane_cp034

0xe4dd,	// (0x000701df) phob2_cc_data_pane_ParamLimits

0xe4dd,	// (0x000701df) phob2_cc_data_pane

0xe4f7,	// (0x000701f9) phob2_cc_listscroll_pane_ParamLimits

0xe4f7,	// (0x000701f9) phob2_cc_listscroll_pane

0xe511,	// (0x00070213) list_double_large_graphic_phob2_pane_ParamLimits

0xe511,	// (0x00070213) list_double_large_graphic_phob2_pane

0xe534,	// (0x00070236) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe534,	// (0x00070236) list_double_large_graphic_phob2_pane_g1

0xe541,	// (0x00070243) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe541,	// (0x00070243) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x00071c3e) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x00071c3e) list_double_large_graphic_phob2_pane_g

0x5208,	// (0x00066f0a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5208,	// (0x00066f0a) list_double_large_graphic_phob2_pane_t1

0x521d,	// (0x00066f1f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x521d,	// (0x00066f1f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00071c43) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00071c43) list_double_large_graphic_phob2_pane_t

0x002f,	// (0x00061d31) list_highlight_pane_cp024

0xe54d,	// (0x0007024f) phob2_cc_button_pane

0xe555,	// (0x00070257) phob2_cc_data_pane_g1_ParamLimits

0xe555,	// (0x00070257) phob2_cc_data_pane_g1

0xe561,	// (0x00070263) phob2_cc_data_pane_g2_ParamLimits

0xe561,	// (0x00070263) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00071c48) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00071c48) phob2_cc_data_pane_g

0xe56d,	// (0x0007026f) phob2_cc_data_pane_t1_ParamLimits

0xe56d,	// (0x0007026f) phob2_cc_data_pane_t1

0xe57f,	// (0x00070281) phob2_cc_data_pane_t2_ParamLimits

0xe57f,	// (0x00070281) phob2_cc_data_pane_t2

0xe591,	// (0x00070293) phob2_cc_data_pane_t3_ParamLimits

0xe591,	// (0x00070293) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x00071c4d) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x00071c4d) phob2_cc_data_pane_t

0xe5a3,	// (0x000702a5) phob2_cc_list_pane_ParamLimits

0xe5a3,	// (0x000702a5) phob2_cc_list_pane

0xe5af,	// (0x000702b1) scroll_pane_cp035_ParamLimits

0xe5af,	// (0x000702b1) scroll_pane_cp035

0x9abd,	// (0x0006b7bf) bg_button_pane_cp033

0xe5bb,	// (0x000702bd) phob2_cc_button_pane_g1

0xe5c7,	// (0x000702c9) phob2_cc_button_pane_t1

0xe5dc,	// (0x000702de) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00071c54) phob2_cc_button_pane_t

0xe5ee,	// (0x000702f0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe5ee,	// (0x000702f0) list_double_large_graphic_phob2_cc_pane

0xe61e,	// (0x00070320) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe61e,	// (0x00070320) list_double_large_graphic_phob2_cc_pane_g1

0xe62f,	// (0x00070331) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe62f,	// (0x00070331) list_double_large_graphic_phob2_cc_pane_g2

0xe63e,	// (0x00070340) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xe63e,	// (0x00070340) list_double_large_graphic_phob2_cc_pane_g3

0x522f,	// (0x00066f31) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x522f,	// (0x00066f31) list_double_large_graphic_phob2_cc_pane_g4

0x5240,	// (0x00066f42) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5240,	// (0x00066f42) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00071c59) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00071c59) list_double_large_graphic_phob2_cc_pane_g

0x524f,	// (0x00066f51) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x524f,	// (0x00066f51) list_double_large_graphic_phob2_cc_pane_t1

0x5278,	// (0x00066f7a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5278,	// (0x00066f7a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00071c64) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00071c64) list_double_large_graphic_phob2_cc_pane_t

0xe64d,	// (0x0007034f) list_highlight_pane_cp025_ParamLimits

0xe64d,	// (0x0007034f) list_highlight_pane_cp025

0x9abd,	// (0x0006b7bf) bg_button_pane_cp033_ParamLimits

0xe5bb,	// (0x000702bd) phob2_cc_button_pane_g1_ParamLimits

0xe5c7,	// (0x000702c9) phob2_cc_button_pane_t1_ParamLimits

0xe5dc,	// (0x000702de) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00071c54) phob2_cc_button_pane_t_ParamLimits

0x551c,	// (0x0006721e) popup_wgtman_window

0x14e5,	// (0x000631e7) scroll_pane_cp038

0xe147,	// (0x0006fe49) wgtman_btn_pane_cp_01_ParamLimits

0xe147,	// (0x0006fe49) wgtman_btn_pane_cp_01

0xe65b,	// (0x0007035d) wgtman_content_pane

0xe664,	// (0x00070366) wgtman_heading_pane

0x002f,	// (0x00061d31) bg_heading_pane_cp02

0xe66d,	// (0x0007036f) wgtman_heading_pane_g1

0xe675,	// (0x00070377) wgtman_heading_pane_t1

0xe683,	// (0x00070385) scroll_pane_cp036

0xe68b,	// (0x0007038d) wgtman_list_pane

0xe693,	// (0x00070395) wgtman_list_pane_t1_ParamLimits

0xe693,	// (0x00070395) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large

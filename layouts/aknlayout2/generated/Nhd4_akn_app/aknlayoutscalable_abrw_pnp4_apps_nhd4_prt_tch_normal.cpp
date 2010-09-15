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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0001db91 };

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
0x25a4,	// (0x00020135) Screen

0x25b0,	// (0x00020141) application_window

0x25bc,	// (0x0002014d) area_bottom_pane_ParamLimits

0x25bc,	// (0x0002014d) area_bottom_pane

0x0e18,	// (0x0001e9a9) area_top_pane_ParamLimits

0x0e18,	// (0x0001e9a9) area_top_pane

0x0e7c,	// (0x0001ea0d) call_video_uplink_pane_ParamLimits

0x0e7c,	// (0x0001ea0d) call_video_uplink_pane

0x0ebb,	// (0x0001ea4c) main_pane_ParamLimits

0x0ebb,	// (0x0001ea4c) main_pane

0xbf9f,	// (0x00029b30) context_pane

0x4df8,	// (0x00022989) navi_pane

0x4e1e,	// (0x000229af) popup_cale_events_window_ParamLimits

0x4e1e,	// (0x000229af) popup_cale_events_window

0xbfb2,	// (0x00029b43) popup_mup_playback_window

0x4e36,	// (0x000229c7) signal_pane

0xa004,	// (0x00027b95) main_browser_pane

0xa1c4,	// (0x00027d55) main_burst_pane

0x1476,	// (0x0001f007) main_calc_pane

0xbf93,	// (0x00029b24) main_cale_day_pane

0x287f,	// (0x00020410) main_cale_month_pane

0xbf93,	// (0x00029b24) main_cale_week_pane

0xa1c4,	// (0x00027d55) main_call_pane

0x9cae,	// (0x0002783f) main_call_poc_pane

0xa1c4,	// (0x00027d55) main_camera_pane

0xa1c4,	// (0x00027d55) main_chi_dic_pane

0xa9b6,	// (0x00028547) main_clock_pane

0x9cae,	// (0x0002783f) main_fmradio_pane

0xa1c4,	// (0x00027d55) main_graph_messa_pane

0x9cae,	// (0x0002783f) main_help_pane

0xa004,	// (0x00027b95) main_im_pane

0x9f09,	// (0x00027a9a) main_image_pane_ParamLimits

0x9f09,	// (0x00027a9a) main_image_pane

0x9cae,	// (0x0002783f) main_location2_pane

0xa1c4,	// (0x00027d55) main_location_pane

0x9f09,	// (0x00027a9a) main_messa_pane

0x9cae,	// (0x0002783f) main_mp2_pane

0xa1c4,	// (0x00027d55) main_mp_pane

0x9cae,	// (0x0002783f) main_msg_pane

0x9cae,	// (0x0002783f) main_mup_eq_pane

0x9cae,	// (0x0002783f) main_mup_pane

0xa004,	// (0x00027b95) main_notes_pane

0x9cae,	// (0x0002783f) main_pec_pane

0x9cae,	// (0x0002783f) main_phob_pane

0x9cae,	// (0x0002783f) main_pinb_pane

0x9cae,	// (0x0002783f) main_postcard_pane

0x9cae,	// (0x0002783f) main_qdial_pane

0xa1c4,	// (0x00027d55) main_skin_pane

0x9cae,	// (0x0002783f) main_smil2_pane

0xa1c4,	// (0x00027d55) main_smil_pane

0xa1c4,	// (0x00027d55) main_video_pane

0xa1c4,	// (0x00027d55) main_video_tele_pane

0x9f09,	// (0x00027a9a) main_viewer_pane_ParamLimits

0x9f09,	// (0x00027a9a) main_viewer_pane

0xa1c4,	// (0x00027d55) main_vorec_pane

0x14c2,	// (0x0001f053) popup_blid_sat_info_window_ParamLimits

0x14c2,	// (0x0001f053) popup_blid_sat_info_window

0x14e2,	// (0x0001f073) popup_dyc_status_message_window_ParamLimits

0x14e2,	// (0x0001f073) popup_dyc_status_message_window

0x14f0,	// (0x0001f081) popup_grid_large_graphic_window_ParamLimits

0x14f0,	// (0x0001f081) popup_grid_large_graphic_window

0x157f,	// (0x0001f110) popup_loc_request_window_ParamLimits

0x157f,	// (0x0001f110) popup_loc_request_window

0x15cc,	// (0x0001f15d) popup_wml_address_window_ParamLimits

0x15cc,	// (0x0001f15d) popup_wml_address_window

0x4cda,	// (0x0002286b) call_muted_g1

0x494f,	// (0x000224e0) popup_call_audio_conf_window_ParamLimits

0x494f,	// (0x000224e0) popup_call_audio_conf_window

0x4cea,	// (0x0002287b) popup_call_audio_first_window_ParamLimits

0x4cea,	// (0x0002287b) popup_call_audio_first_window

0x4d2a,	// (0x000228bb) popup_call_audio_in_window_ParamLimits

0x4d2a,	// (0x000228bb) popup_call_audio_in_window

0x4d4e,	// (0x000228df) popup_call_audio_out_window_ParamLimits

0x4d4e,	// (0x000228df) popup_call_audio_out_window

0x4d70,	// (0x00022901) popup_call_audio_second_window_ParamLimits

0x4d70,	// (0x00022901) popup_call_audio_second_window

0x4da0,	// (0x00022931) popup_call_audio_wait_window_ParamLimits

0x4da0,	// (0x00022931) popup_call_audio_wait_window

0x4dc1,	// (0x00022952) popup_number_entry_window_ParamLimits

0x4dc1,	// (0x00022952) popup_number_entry_window

0x989b,	// (0x0002742c) bg_popup_call_pane_cp05_ParamLimits

0x989b,	// (0x0002742c) bg_popup_call_pane_cp05

0x98bb,	// (0x0002744c) popup_number_entry_window_t1

0x98ce,	// (0x0002745f) popup_number_entry_window_t2

0x98e0,	// (0x00027471) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0002cbd6) popup_number_entry_window_t

0x98f2,	// (0x00027483) text_title_cp2

0x9905,	// (0x00027496) bg_popup_call_pane_cp_ParamLimits

0x9905,	// (0x00027496) bg_popup_call_pane_cp

0x9913,	// (0x000274a4) call_thumbnail_pane

0x991b,	// (0x000274ac) popup_call_audio_in_window_g1_ParamLimits

0x991b,	// (0x000274ac) popup_call_audio_in_window_g1

0x9927,	// (0x000274b8) popup_call_audio_in_window_g2_ParamLimits

0x9927,	// (0x000274b8) popup_call_audio_in_window_g2

0x9933,	// (0x000274c4) popup_call_audio_in_window_g3_ParamLimits

0x9933,	// (0x000274c4) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0002cbdf) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0002cbdf) popup_call_audio_in_window_g

0x993f,	// (0x000274d0) popup_call_audio_in_window_t1_ParamLimits

0x993f,	// (0x000274d0) popup_call_audio_in_window_t1

0x995b,	// (0x000274ec) popup_call_audio_in_window_t2_ParamLimits

0x995b,	// (0x000274ec) popup_call_audio_in_window_t2

0x9977,	// (0x00027508) popup_call_audio_in_window_t3_ParamLimits

0x9977,	// (0x00027508) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0002cbe6) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0002cbe6) popup_call_audio_in_window_t

0x9905,	// (0x00027496) bg_popup_call_pane_cp01_ParamLimits

0x9905,	// (0x00027496) bg_popup_call_pane_cp01

0x9913,	// (0x000274a4) call_thumbnail_pane_cp02

0x998a,	// (0x0002751b) call_type_pane_cp022

0x9992,	// (0x00027523) popup_call_audio_out_window_g1_ParamLimits

0x9992,	// (0x00027523) popup_call_audio_out_window_g1

0x99a4,	// (0x00027535) popup_call_audio_out_window_g2_ParamLimits

0x99a4,	// (0x00027535) popup_call_audio_out_window_g2

0x99b0,	// (0x00027541) popup_call_audio_out_window_g3_ParamLimits

0x99b0,	// (0x00027541) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0002cbed) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0002cbed) popup_call_audio_out_window_g

0x99c2,	// (0x00027553) popup_call_audio_out_window_t1_ParamLimits

0x99c2,	// (0x00027553) popup_call_audio_out_window_t1

0x99da,	// (0x0002756b) popup_call_audio_out_window_t2_ParamLimits

0x99da,	// (0x0002756b) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0002cbf4) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0002cbf4) popup_call_audio_out_window_t

0x99ef,	// (0x00027580) bg_popup_call_pane_ParamLimits

0x99ef,	// (0x00027580) bg_popup_call_pane

0x2639,	// (0x000201ca) call_thumbnail_pane_cp_ParamLimits

0x2639,	// (0x000201ca) call_thumbnail_pane_cp

0x9a73,	// (0x00027604) call_type_pane_cp01_ParamLimits

0x9a73,	// (0x00027604) call_type_pane_cp01

0x9ab7,	// (0x00027648) popup_call_audio_first_window_g1_ParamLimits

0x9ab7,	// (0x00027648) popup_call_audio_first_window_g1

0x9b03,	// (0x00027694) popup_call_audio_first_window_g2_ParamLimits

0x9b03,	// (0x00027694) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0002cbf9) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0002cbf9) popup_call_audio_first_window_g

0x9b47,	// (0x000276d8) popup_call_audio_first_window_t1_ParamLimits

0x9b47,	// (0x000276d8) popup_call_audio_first_window_t1

0x9bf3,	// (0x00027784) popup_call_audio_first_window_t4_ParamLimits

0x9bf3,	// (0x00027784) popup_call_audio_first_window_t4

0x9c7f,	// (0x00027810) popup_call_audio_first_window_t5_ParamLimits

0x9c7f,	// (0x00027810) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0002cbfe) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0002cbfe) popup_call_audio_first_window_t

0x9cae,	// (0x0002783f) bg_popup_call_pane_cp02

0x9cb8,	// (0x00027849) call_type_pane_cp023

0x9cc0,	// (0x00027851) popup_call_audio_wait_window_g1

0x9cc8,	// (0x00027859) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0002cc05) popup_call_audio_wait_window_g

0x9cd0,	// (0x00027861) popup_call_audio_wait_window_t3

0x9cde,	// (0x0002786f) bg_popup_call_pane_cp03_ParamLimits

0x9cde,	// (0x0002786f) bg_popup_call_pane_cp03

0x9d3e,	// (0x000278cf) call_thumbnail_pane_cp011_ParamLimits

0x9d3e,	// (0x000278cf) call_thumbnail_pane_cp011

0x9d4a,	// (0x000278db) call_type_pane_cp034_ParamLimits

0x9d4a,	// (0x000278db) call_type_pane_cp034

0x9d86,	// (0x00027917) popup_call_audio_second_window_g1_ParamLimits

0x9d86,	// (0x00027917) popup_call_audio_second_window_g1

0x9dc2,	// (0x00027953) popup_call_audio_second_window_g2_ParamLimits

0x9dc2,	// (0x00027953) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0002cc0a) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0002cc0a) popup_call_audio_second_window_g

0x9dfe,	// (0x0002798f) popup_call_audio_second_window_t1_ParamLimits

0x9dfe,	// (0x0002798f) popup_call_audio_second_window_t1

0x9e7f,	// (0x00027a10) popup_call_audio_second_window_t2_ParamLimits

0x9e7f,	// (0x00027a10) popup_call_audio_second_window_t2

0x9eb5,	// (0x00027a46) popup_call_audio_second_window_t3_ParamLimits

0x9eb5,	// (0x00027a46) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0002cc0f) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0002cc0f) popup_call_audio_second_window_t

0x9cae,	// (0x0002783f) bg_popup_call_pane_cp04

0x9eeb,	// (0x00027a7c) list_conf_pane

0x9ef3,	// (0x00027a84) popup_call_audio_conf_window_t1

0x9f01,	// (0x00027a92) call_thumbnail_pane_g1

0x9f09,	// (0x00027a9a) bg_pinb_pane_ParamLimits

0x9f09,	// (0x00027a9a) bg_pinb_pane

0x9f17,	// (0x00027aa8) find_pinb_pane

0x9f09,	// (0x00027a9a) listscroll_pinb_pane_ParamLimits

0x9f09,	// (0x00027a9a) listscroll_pinb_pane

0x9f21,	// (0x00027ab2) pinb_bg_pane_g1

0x9f21,	// (0x00027ab2) pinb_bg_pane_g2

0x9f21,	// (0x00027ab2) pinb_bg_pane_g3

0x9f21,	// (0x00027ab2) pinb_bg_pane_g4

0x9f21,	// (0x00027ab2) pinb_bg_pane_g5

0x9f21,	// (0x00027ab2) pinb_bg_pane_g6

0x9f21,	// (0x00027ab2) pinb_bg_pane_g7

0x9f21,	// (0x00027ab2) pinb_bg_pane_g8

0x9f21,	// (0x00027ab2) pinb_bg_pane_g9

0x9f21,	// (0x00027ab2) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0002cc16) pinb_bg_pane_g

0x9891,	// (0x00027422) grid_pinb_pane

0x9891,	// (0x00027422) list_pinb_pane

0x9f2b,	// (0x00027abc) scroll_pane_cp01_ParamLimits

0x9f2b,	// (0x00027abc) scroll_pane_cp01

0x9f39,	// (0x00027aca) find_pinb_pane_g1_ParamLimits

0x9f39,	// (0x00027aca) find_pinb_pane_g1

0x9f51,	// (0x00027ae2) find_pinb_pane_t1

0x9f63,	// (0x00027af4) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0002cc30) find_pinb_pane_t

0x9f78,	// (0x00027b09) input_focus_pane_cp01_ParamLimits

0x9f78,	// (0x00027b09) input_focus_pane_cp01

0x9f84,	// (0x00027b15) cell_pinb_pane_ParamLimits

0x9f84,	// (0x00027b15) cell_pinb_pane

0x9f92,	// (0x00027b23) cell_pinb_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) cell_pinb_pane_g1

0x9fa0,	// (0x00027b31) cell_pinb_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) cell_pinb_pane_g2

0x9fa0,	// (0x00027b31) cell_pinb_pane_g3_ParamLimits

0x9fa0,	// (0x00027b31) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0002cc35) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0002cc35) cell_pinb_pane_g

0x9cae,	// (0x0002783f) grid_highlight_pane_cp01

0x9f84,	// (0x00027b15) list_pinb_item_pane_ParamLimits

0x9f84,	// (0x00027b15) list_pinb_item_pane

0x9891,	// (0x00027422) list_highlight_pane_cp02

0x9fae,	// (0x00027b3f) list_pinb_item_pane_g1_ParamLimits

0x9fae,	// (0x00027b3f) list_pinb_item_pane_g1

0x9fa0,	// (0x00027b31) list_pinb_item_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) list_pinb_item_pane_g2

0x9f92,	// (0x00027b23) list_pinb_item_pane_g3_ParamLimits

0x9f92,	// (0x00027b23) list_pinb_item_pane_g3

0x9fa0,	// (0x00027b31) list_pinb_item_pane_g4_ParamLimits

0x9fa0,	// (0x00027b31) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0002cc3c) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0002cc3c) list_pinb_item_pane_g

0x9fbc,	// (0x00027b4d) list_pinb_item_pane_t1_ParamLimits

0x9fbc,	// (0x00027b4d) list_pinb_item_pane_t1

0x10a8,	// (0x0001ec39) calc_display_pane

0x10c6,	// (0x0001ec57) calc_paper_pane

0x10e2,	// (0x0001ec73) grid_calc_pane

0x9cae,	// (0x0002783f) bg_list_pane_cp01

0x265d,	// (0x000201ee) clock_g1

0x2665,	// (0x000201f6) clock_g2

0x0001,

0xf0b4,	// (0x0002cc45) clock_g

0x266f,	// (0x00020200) clock_t1_ParamLimits

0x266f,	// (0x00020200) clock_t1

0x2684,	// (0x00020215) clock_t2_ParamLimits

0x2684,	// (0x00020215) clock_t2

0x2696,	// (0x00020227) clock_t3_ParamLimits

0x2696,	// (0x00020227) clock_t3

0x26a8,	// (0x00020239) clock_t4_ParamLimits

0x26a8,	// (0x00020239) clock_t4

0x26ba,	// (0x0002024b) clock_t5_ParamLimits

0x26ba,	// (0x0002024b) clock_t5

0x26cf,	// (0x00020260) clock_t6_ParamLimits

0x26cf,	// (0x00020260) clock_t6

0x26e1,	// (0x00020272) clock_t7_ParamLimits

0x26e1,	// (0x00020272) clock_t7

0x26f3,	// (0x00020284) clock_t8_ParamLimits

0x26f3,	// (0x00020284) clock_t8

0x2709,	// (0x0002029a) clock_t9_ParamLimits

0x2709,	// (0x0002029a) clock_t9

0x0008,

0xf0b9,	// (0x0002cc4a) clock_t_ParamLimits

0xf0b9,	// (0x0002cc4a) clock_t

0x9fd0,	// (0x00027b61) popup_clock_analogue_window_cp02

0x9fd0,	// (0x00027b61) popup_clock_digital_window_cp01

0x9cae,	// (0x0002783f) listscroll_help_pane

0x9cae,	// (0x0002783f) phob_pre_status_pane

0x9fd8,	// (0x00027b69) grid_qdial_pane

0x9f09,	// (0x00027a9a) listscroll_mce_pane

0x9f09,	// (0x00027a9a) bg_notes_pane

0x9fe2,	// (0x00027b73) list_notes_pane

0x271f,	// (0x000202b0) scroll_pane_cp06

0x9ff0,	// (0x00027b81) bg_calc_paper_pane

0x110e,	// (0x0001ec9f) list_calc_pane

0xa004,	// (0x00027b95) bg_calc_display_pane

0x1128,	// (0x0001ecb9) calc_display_pane_t1

0x113d,	// (0x0001ecce) calc_display_pane_t2

0x1152,	// (0x0001ece3) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0002cc5d) calc_display_pane_t

0x1164,	// (0x0001ecf5) cell_calc_pane_ParamLimits

0x1164,	// (0x0001ecf5) cell_calc_pane

0xa010,	// (0x00027ba1) bg_calc_paper_pane_g1

0xa01c,	// (0x00027bad) bg_calc_paper_pane_g2

0xa028,	// (0x00027bb9) bg_calc_paper_pane_g3

0xa040,	// (0x00027bd1) bg_calc_paper_pane_g4

0xa034,	// (0x00027bc5) bg_calc_paper_pane_g5

0x272e,	// (0x000202bf) bg_calc_paper_pane_g6

0x273f,	// (0x000202d0) bg_calc_paper_pane_g7

0x2750,	// (0x000202e1) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0002cc64) bg_calc_paper_pane_g

0x2761,	// (0x000202f2) calc_bg_paper_pane_g9

0x2772,	// (0x00020303) list_calc_item_pane_ParamLimits

0x2772,	// (0x00020303) list_calc_item_pane

0xa04c,	// (0x00027bdd) list_calc_item_pane_g1

0x1191,	// (0x0001ed22) list_calc_item_pane_t1_ParamLimits

0x1191,	// (0x0001ed22) list_calc_item_pane_t1

0x11a3,	// (0x0001ed34) list_calc_item_pane_t2_ParamLimits

0x11a3,	// (0x0001ed34) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0002cc75) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0002cc75) list_calc_item_pane_t

0x9f21,	// (0x00027ab2) cell_calc_pane_g1

0xa059,	// (0x00027bea) grid_highlight_pane_cp02

0x279f,	// (0x00020330) bg_calc_display_pane_g1

0x11d3,	// (0x0001ed64) bg_calc_display_pane_g2

0x27a8,	// (0x00020339) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0002cc7f) bg_calc_display_pane_g

0x11dd,	// (0x0001ed6e) cell_qdial_pane_ParamLimits

0x11dd,	// (0x0001ed6e) cell_qdial_pane

0x27b1,	// (0x00020342) cell_qdial_pane_g1_ParamLimits

0x27b1,	// (0x00020342) cell_qdial_pane_g1

0x27be,	// (0x0002034f) cell_qdial_pane_g2_ParamLimits

0x27be,	// (0x0002034f) cell_qdial_pane_g2

0xa07b,	// (0x00027c0c) cell_qdial_pane_g3_ParamLimits

0xa07b,	// (0x00027c0c) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0002cc86) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0002cc86) cell_qdial_pane_g

0x27db,	// (0x0002036c) cell_qdial_pane_t1_ParamLimits

0x27db,	// (0x0002036c) cell_qdial_pane_t1

0x27f3,	// (0x00020384) cell_qdial_pane_t2_ParamLimits

0x27f3,	// (0x00020384) cell_qdial_pane_t2

0x2806,	// (0x00020397) cell_qdial_pane_t3_ParamLimits

0x2806,	// (0x00020397) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0002cc8f) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0002cc8f) cell_qdial_pane_t

0x9cae,	// (0x0002783f) grid_highlight_pane_cp04

0xa087,	// (0x00027c18) thumbnail_qdial_pane_ParamLimits

0xa087,	// (0x00027c18) thumbnail_qdial_pane

0xa0e3,	// (0x00027c74) list_help_pane

0xa0ec,	// (0x00027c7d) scroll_pane_cp02

0x2819,	// (0x000203aa) help_list_pane_t1_ParamLimits

0x2819,	// (0x000203aa) help_list_pane_t1

0x11f1,	// (0x0001ed82) bg_notes_pane_g2

0x11f9,	// (0x0001ed8a) bg_notes_pane_g3

0x1201,	// (0x0001ed92) notes_bg_pane_g1

0x1209,	// (0x0001ed9a) notes_bg_pane_g4

0x1211,	// (0x0001eda2) notes_bg_pane_g5

0x1219,	// (0x0001edaa) notes_bg_pane_g6

0x1221,	// (0x0001edb2) notes_bg_pane_g7

0x1229,	// (0x0001edba) notes_bg_pane_g8

0x1231,	// (0x0001edc2) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0002ccad) notes_bg_pane_g

0x2853,	// (0x000203e4) list_notes_text_pane_ParamLimits

0x2853,	// (0x000203e4) list_notes_text_pane

0xa0f5,	// (0x00027c86) list_notes_text_pane_g1

0xa0fe,	// (0x00027c8f) list_notes_text_pane_t1

0x287f,	// (0x00020410) listscroll_cale_week_pane

0x28a4,	// (0x00020435) bg_cale_heading_pane

0xa126,	// (0x00027cb7) bg_cale_pane_cp01

0x28c6,	// (0x00020457) cale_week_corner_pane

0x28e0,	// (0x00020471) cale_week_day_heading_pane

0x2902,	// (0x00020493) cale_week_scroll_pane_g1

0x291f,	// (0x000204b0) cale_week_scroll_pane_g2

0x2932,	// (0x000204c3) cale_week_scroll_pane_g3

0x2945,	// (0x000204d6) cale_week_scroll_pane_g4

0x2958,	// (0x000204e9) cale_week_scroll_pane_g5

0x296b,	// (0x000204fc) cale_week_scroll_pane_g6

0x297e,	// (0x0002050f) cale_week_scroll_pane_g7

0x2993,	// (0x00020524) cale_week_scroll_pane_g8

0x29a8,	// (0x00020539) cale_week_scroll_pane_g9

0x29bb,	// (0x0002054c) cale_week_scroll_pane_g10

0x29ce,	// (0x0002055f) cale_week_scroll_pane_g11

0x29e1,	// (0x00020572) cale_week_scroll_pane_g12

0x29f8,	// (0x00020589) cale_week_scroll_pane_g13

0x2a13,	// (0x000205a4) cale_week_scroll_pane_g14

0x2a2e,	// (0x000205bf) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0002ccbc) cale_week_scroll_pane_g

0x2a5e,	// (0x000205ef) cale_week_time_pane

0x2a73,	// (0x00020604) grid_cale_week_pane

0xa155,	// (0x00027ce6) scroll_pane_cp08

0x2a92,	// (0x00020623) cell_cale_week_pane_ParamLimits

0x2a92,	// (0x00020623) cell_cale_week_pane

0x2af4,	// (0x00020685) cale_week_day_heading_pane_t1

0x2b0f,	// (0x000206a0) cale_week_day_heading_pane_t2

0x2b2a,	// (0x000206bb) cale_week_day_heading_pane_t3

0x2b45,	// (0x000206d6) cale_week_day_heading_pane_t4

0x2b60,	// (0x000206f1) cale_week_day_heading_pane_t5

0x2b7b,	// (0x0002070c) cale_week_day_heading_pane_t6

0x2b96,	// (0x00020727) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0002ccdd) cale_week_day_heading_pane_t

0xa172,	// (0x00027d03) bg_cale_side_pane

0x1239,	// (0x0001edca) cale_week_time_pane_t1

0x1253,	// (0x0001ede4) cale_week_time_pane_t2

0x126d,	// (0x0001edfe) cale_week_time_pane_t3

0x1287,	// (0x0001ee18) cale_week_time_pane_t4

0x12a1,	// (0x0001ee32) cale_week_time_pane_t5

0x12bb,	// (0x0001ee4c) cale_week_time_pane_t6

0x12db,	// (0x0001ee6c) cale_week_time_pane_t7

0x12fd,	// (0x0001ee8e) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0002ccec) cale_week_time_pane_t

0x2bb1,	// (0x00020742) cell_cale_week_pane_g2

0x2bd5,	// (0x00020766) cell_cale_week_pane_g3_ParamLimits

0x2bd5,	// (0x00020766) cell_cale_week_pane_g3

0xa180,	// (0x00027d11) grid_highlight_pane_cp07

0xa188,	// (0x00027d19) listscroll_gms_pane

0xa192,	// (0x00027d23) grid_gms_pane

0xa19b,	// (0x00027d2c) listscroll_gms_pane_g1

0xa1a3,	// (0x00027d34) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0002ccfd) listscroll_gms_pane_g

0x2bed,	// (0x0002077e) scroll_pane_cp010

0x2bf8,	// (0x00020789) cell_gms_pane_ParamLimits

0x2bf8,	// (0x00020789) cell_gms_pane

0x2c08,	// (0x00020799) cell_gms_pane_g1

0xa1ab,	// (0x00027d3c) cell_gms_pane_g2

0xa0f5,	// (0x00027c86) cell_gms_pane_g3

0xa1b3,	// (0x00027d44) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0002cd02) cell_gms_pane_g

0xa1bc,	// (0x00027d4d) grid_highlight_pane_cp09

0x4c5e,	// (0x000227ef) phob_pre_status_pane_g1

0x4c66,	// (0x000227f7) phob_pre_status_pane_g2

0x4c6e,	// (0x000227ff) phob_pre_status_pane_g3

0x4c76,	// (0x00022807) phob_pre_status_pane_g4

0x0004,

0xf54d,	// (0x0002d0de) phob_pre_status_pane_g

0x4c86,	// (0x00022817) phob_pre_status_pane_t1

0x4c96,	// (0x00022827) phob_pre_status_pane_t2

0x4ca6,	// (0x00022837) phob_pre_status_pane_t3

0x0002,

0xf558,	// (0x0002d0e9) phob_pre_status_pane_t

0xa1c4,	// (0x00027d55) bg_list_pane_cp05

0x2c18,	// (0x000207a9) grid_vorec_pane

0x2c22,	// (0x000207b3) vorec_t1

0x2c30,	// (0x000207c1) vorec_t2

0x2c3e,	// (0x000207cf) vorec_t3

0x2c4c,	// (0x000207dd) vorec_t4

0x257f,	// (0x00020110) vorec_t5

0x258d,	// (0x0002011e) vorec_t6

0x0004,

0xf17a,	// (0x0002cd0b) vorec_t

0x259b,	// (0x0002012c) wait_bar_pane_cp01

0x2c68,	// (0x000207f9) cell_vorec_pane_ParamLimits

0x2c68,	// (0x000207f9) cell_vorec_pane

0x1321,	// (0x0001eeb2) cell_vorec_pane_g1

0x9cae,	// (0x0002783f) grid_highlight_pane_cp05

0x9f84,	// (0x00027b15) cams_zoom_pane

0x9f84,	// (0x00027b15) image_vga_pane

0x9fa0,	// (0x00027b31) main_camera_pane_g1

0x9fa0,	// (0x00027b31) main_camera_pane_g2

0x9fa0,	// (0x00027b31) main_camera_pane_g3

0x9fa0,	// (0x00027b31) main_camera_pane_g4

0x9fa0,	// (0x00027b31) main_camera_pane_g5

0x9fa0,	// (0x00027b31) main_camera_pane_g6

0x9fa0,	// (0x00027b31) main_camera_pane_g7

0x0007,

0xf185,	// (0x0002cd16) main_camera_pane_g

0xa774,	// (0x00028305) main_camera_pane_t1

0xa774,	// (0x00028305) main_camera_pane_t2

0x0001,

0xf196,	// (0x0002cd27) main_camera_pane_t

0x2c7b,	// (0x0002080c) cams_zoom_pane_cp_ParamLimits

0x2c7b,	// (0x0002080c) cams_zoom_pane_cp

0x2ca9,	// (0x0002083a) image_cif_pane_ParamLimits

0x2ca9,	// (0x0002083a) image_cif_pane

0x9891,	// (0x00027422) image_subqcif_pane

0x2cb7,	// (0x00020848) main_video_pane_g1_ParamLimits

0x2cb7,	// (0x00020848) main_video_pane_g1

0x2cdf,	// (0x00020870) main_video_pane_g2_ParamLimits

0x2cdf,	// (0x00020870) main_video_pane_g2

0x2d12,	// (0x000208a3) main_video_pane_g3_ParamLimits

0x2d12,	// (0x000208a3) main_video_pane_g3

0x2d12,	// (0x000208a3) main_video_pane_g4_ParamLimits

0x2d12,	// (0x000208a3) main_video_pane_g4

0x2d40,	// (0x000208d1) main_video_pane_g5_ParamLimits

0x2d40,	// (0x000208d1) main_video_pane_g5

0xa1cc,	// (0x00027d5d) main_video_pane_g6_ParamLimits

0xa1cc,	// (0x00027d5d) main_video_pane_g6

0x0006,

0xf19b,	// (0x0002cd2c) main_video_pane_g_ParamLimits

0xf19b,	// (0x0002cd2c) main_video_pane_g

0x2d5c,	// (0x000208ed) main_video_pane_t1_ParamLimits

0x2d5c,	// (0x000208ed) main_video_pane_t1

0xa1e6,	// (0x00027d77) cams_zoom_pane_g1

0xa1e6,	// (0x00027d77) cams_zoom_pane_g2

0xa1e6,	// (0x00027d77) cams_zoom_pane_g3

0xa1e6,	// (0x00027d77) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0002cd3b) cams_zoom_pane_g

0x2da2,	// (0x00020933) grid_cams_pane

0x2db0,	// (0x00020941) linegrid_cams_pane

0x2dbe,	// (0x0002094f) cell_cams_pane_ParamLimits

0x2dbe,	// (0x0002094f) cell_cams_pane

0xa1f0,	// (0x00027d81) cams_burst_image_pane

0xa1f8,	// (0x00027d89) cell_cams_pane_g1

0x9cae,	// (0x0002783f) grid_highlight_pane_cp03

0x9f21,	// (0x00027ab2) mp_bg_pane_g1

0x9891,	// (0x00027422) bg_list_pane_cp03

0x9891,	// (0x00027422) bg_mp_pane

0x9891,	// (0x00027422) grid_mp_pane

0xa1e6,	// (0x00027d77) media_player_g1

0xa721,	// (0x000282b2) media_player_t1

0xa721,	// (0x000282b2) media_player_t2

0xa721,	// (0x000282b2) media_player_t3

0xa721,	// (0x000282b2) media_player_t4

0xa721,	// (0x000282b2) media_player_t5

0xa721,	// (0x000282b2) media_player_t6

0xa721,	// (0x000282b2) media_player_t7

0x0006,

0xf537,	// (0x0002d0c8) media_player_t

0x9891,	// (0x00027422) wait_bar_pane_cp02

0xf51c,	// (0x0002d0ad) main_usb_pane_t

0xa9b6,	// (0x00028547) cell_mp_pane

0x9f21,	// (0x00027ab2) cell_mp_pane_g1

0x9cae,	// (0x0002783f) grid_highlight_pane_cp06

0xa214,	// (0x00027da5) grid_skin_colour_pane

0xa21c,	// (0x00027dad) list_highlight_pane_cp03

0x2dd1,	// (0x00020962) skin_g1

0xa224,	// (0x00027db5) skin_t1

0xa233,	// (0x00027dc4) skin_t2

0x0001,

0xf1d8,	// (0x0002cd69) skin_t

0x2ddb,	// (0x0002096c) cell_skin_colour_pane_ParamLimits

0x2ddb,	// (0x0002096c) cell_skin_colour_pane

0xa241,	// (0x00027dd2) cell_skin_colour_pane_g1

0x2e5f,	// (0x000209f0) call_video_g1_ParamLimits

0x2e5f,	// (0x000209f0) call_video_g1

0x2e6f,	// (0x00020a00) call_video_g2_ParamLimits

0x2e6f,	// (0x00020a00) call_video_g2

0x0001,

0xf1dd,	// (0x0002cd6e) call_video_g_ParamLimits

0xf1dd,	// (0x0002cd6e) call_video_g

0x2ec9,	// (0x00020a5a) call_video_uplink_pane_cp1_ParamLimits

0x2ec9,	// (0x00020a5a) call_video_uplink_pane_cp1

0xa253,	// (0x00027de4) call_video_uplink_pane_cp2

0x2f95,	// (0x00020b26) video_down_crop_pane_ParamLimits

0x2f95,	// (0x00020b26) video_down_crop_pane

0x3087,	// (0x00020c18) video_down_pane_ParamLimits

0x3087,	// (0x00020c18) video_down_pane

0xa25b,	// (0x00027dec) video_down_subqcif_pane_ParamLimits

0xa25b,	// (0x00027dec) video_down_subqcif_pane

0xa273,	// (0x00027e04) video_down_subqcif_pane_cp_ParamLimits

0xa273,	// (0x00027e04) video_down_subqcif_pane_cp

0xa299,	// (0x00027e2a) im_reading_pane_ParamLimits

0xa299,	// (0x00027e2a) im_reading_pane

0x31a7,	// (0x00020d38) im_writing_pane_ParamLimits

0x31a7,	// (0x00020d38) im_writing_pane

0x31c5,	// (0x00020d56) im_reading_pane_t1

0xa2b3,	// (0x00027e44) list_im_pane

0xa2c4,	// (0x00027e55) scroll_pane_cp07

0x321d,	// (0x00020dae) im_writing_pane_t1_ParamLimits

0x321d,	// (0x00020dae) im_writing_pane_t1

0xa2dd,	// (0x00027e6e) im_writing_pane_t2_ParamLimits

0xa2dd,	// (0x00027e6e) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0002cd78) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0002cd78) im_writing_pane_t

0x9cae,	// (0x0002783f) input_focus_pane_cp04

0x9cae,	// (0x0002783f) input_focus_pane_cp05

0x322f,	// (0x00020dc0) list_im_single_pane_ParamLimits

0x322f,	// (0x00020dc0) list_im_single_pane

0x3256,	// (0x00020de7) list_single_im_pane_t1

0xa1c4,	// (0x00027d55) blid_accuracy_pane

0xa1c4,	// (0x00027d55) blid_compass_pane

0xbf4b,	// (0x00029adc) main_location_t1

0xbf4b,	// (0x00029adc) main_location_t2

0xbf4b,	// (0x00029adc) main_location_t3

0x0002,

0xf546,	// (0x0002d0d7) main_location_t

0x9cae,	// (0x0002783f) aid_levels_location

0x9f21,	// (0x00027ab2) blid_accuracy_pane_g1

0x9f21,	// (0x00027ab2) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0002cdcc) blid_accuracy_pane_g

0xa325,	// (0x00027eb6) wml_content_pane

0xa363,	// (0x00027ef4) wml_button_pane_ParamLimits

0xa363,	// (0x00027ef4) wml_button_pane

0x3265,	// (0x00020df6) wml_list_single_large_pane_ParamLimits

0x3265,	// (0x00020df6) wml_list_single_large_pane

0x3290,	// (0x00020e21) wml_list_single_medium_pane_ParamLimits

0x3290,	// (0x00020e21) wml_list_single_medium_pane

0x32c2,	// (0x00020e53) wml_list_single_small_pane_ParamLimits

0x32c2,	// (0x00020e53) wml_list_single_small_pane

0xa377,	// (0x00027f08) wml_selection_box_pane_ParamLimits

0xa377,	// (0x00027f08) wml_selection_box_pane

0xa38a,	// (0x00027f1b) wml_list_single_pane_t1

0xa399,	// (0x00027f2a) wml_list_single_medium_pane_t1

0xa3a8,	// (0x00027f39) wml_list_single_large_pane_t1

0xa3b7,	// (0x00027f48) input_focus_pane_cp02_ParamLimits

0xa3b7,	// (0x00027f48) input_focus_pane_cp02

0xa3ca,	// (0x00027f5b) wml_selection_box_pane_g1

0xa3d3,	// (0x00027f64) wml_selection_box_pane_t1_ParamLimits

0xa3d3,	// (0x00027f64) wml_selection_box_pane_t1

0x9f09,	// (0x00027a9a) bg_wml_button_pane_ParamLimits

0x9f09,	// (0x00027a9a) bg_wml_button_pane

0xa3eb,	// (0x00027f7c) wml_button_pane_g1

0xa3f3,	// (0x00027f84) wml_button_pane_t1

0xa3eb,	// (0x00027f7c) wml_button_bg_pane_g1

0xa403,	// (0x00027f94) wml_button_bg_pane_g2

0xa40b,	// (0x00027f9c) wml_button_bg_pane_g3

0xa413,	// (0x00027fa4) wml_button_bg_pane_g4

0xa41b,	// (0x00027fac) wml_button_bg_pane_g5

0xa423,	// (0x00027fb4) wml_button_bg_pane_g6

0xa42b,	// (0x00027fbc) wml_button_bg_pane_g7

0xa433,	// (0x00027fc4) wml_button_bg_pane_g8

0xa43b,	// (0x00027fcc) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0002cd7d) wml_button_bg_pane_g

0x32ff,	// (0x00020e90) bg_list_pane_cp02

0xa443,	// (0x00027fd4) mce_header_pane_ParamLimits

0xa443,	// (0x00027fd4) mce_header_pane

0xa459,	// (0x00027fea) mce_icon_pane

0xa459,	// (0x00027fea) mce_image_pane

0xa462,	// (0x00027ff3) mce_text_pane_ParamLimits

0xa462,	// (0x00027ff3) mce_text_pane

0x3309,	// (0x00020e9a) scroll_pane_cp03

0xa35b,	// (0x00027eec) scroll_pane_cp04

0xa475,	// (0x00028006) scroll_pane_cp05_ParamLimits

0xa475,	// (0x00028006) scroll_pane_cp05

0x3313,	// (0x00020ea4) mce_header_field_pane_ParamLimits

0x3313,	// (0x00020ea4) mce_header_field_pane

0x3333,	// (0x00020ec4) mce_header_field_pane_2_ParamLimits

0x3333,	// (0x00020ec4) mce_header_field_pane_2

0x3349,	// (0x00020eda) mce_header_field_pane_3

0x3351,	// (0x00020ee2) list_single_mce_message_pane_ParamLimits

0x3351,	// (0x00020ee2) list_single_mce_message_pane

0x337f,	// (0x00020f10) list_single_mce_smart_pane_ParamLimits

0x337f,	// (0x00020f10) list_single_mce_smart_pane

0xa481,	// (0x00028012) input_focus_pane_cp03

0xa48a,	// (0x0002801b) list_header_data_pane

0x33b8,	// (0x00020f49) mce_header_field_pane_t1

0x33c6,	// (0x00020f57) list_single_mce_header_pane_ParamLimits

0x33c6,	// (0x00020f57) list_single_mce_header_pane

0xa492,	// (0x00028023) list_single_mce_header_pane_t1

0xa4a1,	// (0x00028032) list_single_mce_message_pane_g1

0xa4a9,	// (0x0002803a) list_single_mce_message_pane_t1

0x341c,	// (0x00020fad) bg_cale_heading_pane_cp01_ParamLimits

0x341c,	// (0x00020fad) bg_cale_heading_pane_cp01

0xa4b7,	// (0x00028048) bg_cale_pane_cp02_ParamLimits

0xa4b7,	// (0x00028048) bg_cale_pane_cp02

0x346a,	// (0x00020ffb) cale_month_corner_pane

0x3489,	// (0x0002101a) cale_month_day_heading_pane_ParamLimits

0x3489,	// (0x0002101a) cale_month_day_heading_pane

0x34ef,	// (0x00021080) cale_month_pane_g1_ParamLimits

0x34ef,	// (0x00021080) cale_month_pane_g1

0x3532,	// (0x000210c3) cale_month_pane_g2_ParamLimits

0x3532,	// (0x000210c3) cale_month_pane_g2

0x356c,	// (0x000210fd) cale_month_pane_g3_ParamLimits

0x356c,	// (0x000210fd) cale_month_pane_g3

0x35bc,	// (0x0002114d) cale_month_pane_g4_ParamLimits

0x35bc,	// (0x0002114d) cale_month_pane_g4

0x360c,	// (0x0002119d) cale_month_pane_g5_ParamLimits

0x360c,	// (0x0002119d) cale_month_pane_g5

0x365c,	// (0x000211ed) cale_month_pane_g6_ParamLimits

0x365c,	// (0x000211ed) cale_month_pane_g6

0x36ac,	// (0x0002123d) cale_month_pane_g7_ParamLimits

0x36ac,	// (0x0002123d) cale_month_pane_g7

0x3714,	// (0x000212a5) cale_month_pane_g8_ParamLimits

0x3714,	// (0x000212a5) cale_month_pane_g8

0x377c,	// (0x0002130d) cale_month_pane_g9_ParamLimits

0x377c,	// (0x0002130d) cale_month_pane_g9

0x37da,	// (0x0002136b) cale_month_pane_g10_ParamLimits

0x37da,	// (0x0002136b) cale_month_pane_g10

0x3838,	// (0x000213c9) cale_month_pane_g11_ParamLimits

0x3838,	// (0x000213c9) cale_month_pane_g11

0x388c,	// (0x0002141d) cale_month_pane_g12_ParamLimits

0x388c,	// (0x0002141d) cale_month_pane_g12

0x38e2,	// (0x00021473) cale_month_pane_g13_ParamLimits

0x38e2,	// (0x00021473) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0002cd90) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0002cd90) cale_month_pane_g

0x3938,	// (0x000214c9) cale_month_week_pane

0x395c,	// (0x000214ed) grid_cale_month_pane_ParamLimits

0x395c,	// (0x000214ed) grid_cale_month_pane

0x39b9,	// (0x0002154a) cale_month_day_heading_pane_t1

0x3a3f,	// (0x000215d0) cale_month_day_heading_pane_t2

0x3ab8,	// (0x00021649) cale_month_day_heading_pane_t3

0x3b31,	// (0x000216c2) cale_month_day_heading_pane_t4

0x3baa,	// (0x0002173b) cale_month_day_heading_pane_t5

0x3c23,	// (0x000217b4) cale_month_day_heading_pane_t6

0x3c9c,	// (0x0002182d) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0002cdab) cale_month_day_heading_pane_t

0xa172,	// (0x00027d03) bg_cale_side_pane_cp01

0x3d2d,	// (0x000218be) cale_month_week_pane_t1

0x3d46,	// (0x000218d7) cale_month_week_pane_t2

0x3d5f,	// (0x000218f0) cale_month_week_pane_t3

0x3d78,	// (0x00021909) cale_month_week_pane_t4

0x3d93,	// (0x00021924) cale_month_week_pane_t5

0x3db4,	// (0x00021945) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0002cdba) cale_month_week_pane_t

0x3dd5,	// (0x00021966) cell_cale_month_pane_ParamLimits

0x3dd5,	// (0x00021966) cell_cale_month_pane

0x132b,	// (0x0001eebc) cell_cale_month_pane_g1

0x1337,	// (0x0001eec8) cell_cale_month_pane_t1_ParamLimits

0x1337,	// (0x0001eec8) cell_cale_month_pane_t1

0xa180,	// (0x00027d11) grid_highlight_pane_cp08

0x9f21,	// (0x00027ab2) main_smil_g1

0x3efb,	// (0x00021a8c) smil_status_pane

0xa4f6,	// (0x00028087) smil_text_pane

0xbe23,	// (0x000299b4) bg_popup_call3_rect_pane_g8

0xbe2b,	// (0x000299bc) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002d058) bg_popup_call3_rect_pane_g

0xc014,	// (0x00029ba5) smil_status_volume_pane_g1

0xa500,	// (0x00028091) smil_status_pane_t1

0x1601,	// (0x0001f192) volume_smil_pane

0xa517,	// (0x000280a8) list_smil_text_pane

0x3f0e,	// (0x00021a9f) scroll_pane_cp011

0x3f19,	// (0x00021aaa) smil_text_list_pane_t1_ParamLimits

0x3f19,	// (0x00021aaa) smil_text_list_pane_t1

0x1363,	// (0x0001eef4) aid_volume_smil_ParamLimits

0x1363,	// (0x0001eef4) aid_volume_smil

0x9f21,	// (0x00027ab2) smil_volume_pane_g1

0x9f21,	// (0x00027ab2) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0002cdcc) smil_volume_pane_g

0x287f,	// (0x00020410) listscroll_cale_day_pane

0xa521,	// (0x000280b2) bg_cale_pane

0xa539,	// (0x000280ca) list_cale_pane

0xa55c,	// (0x000280ed) scroll_pane_cp09

0xa56d,	// (0x000280fe) cale_bg_pane_g1

0xa575,	// (0x00028106) cale_bg_pane_g2

0xa57d,	// (0x0002810e) cale_bg_pane_g3

0xa585,	// (0x00028116) cale_bg_pane_g4

0xa58d,	// (0x0002811e) cale_bg_pane_g5

0xa595,	// (0x00028126) cale_bg_pane_g6

0xa59d,	// (0x0002812e) cale_bg_pane_g7

0xa5a5,	// (0x00028136) cale_bg_pane_g8

0xa5ad,	// (0x0002813e) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0002cdd1) cale_bg_pane_g

0x3fae,	// (0x00021b3f) list_cale_time_pane_ParamLimits

0x3fae,	// (0x00021b3f) list_cale_time_pane

0xa5b5,	// (0x00028146) list_cale_time_pane_g1_ParamLimits

0xa5b5,	// (0x00028146) list_cale_time_pane_g1

0xa5c1,	// (0x00028152) list_cale_time_pane_g2_ParamLimits

0xa5c1,	// (0x00028152) list_cale_time_pane_g2

0x3fd6,	// (0x00021b67) list_cale_time_pane_g3_ParamLimits

0x3fd6,	// (0x00021b67) list_cale_time_pane_g3

0x3fe4,	// (0x00021b75) list_cale_time_pane_g4_ParamLimits

0x3fe4,	// (0x00021b75) list_cale_time_pane_g4

0x3ff2,	// (0x00021b83) list_cale_time_pane_g5_ParamLimits

0x3ff2,	// (0x00021b83) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0002cde4) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0002cde4) list_cale_time_pane_g

0xa5db,	// (0x0002816c) list_cale_time_pane_t1_ParamLimits

0xa5db,	// (0x0002816c) list_cale_time_pane_t1

0xa603,	// (0x00028194) list_cale_time_pane_t2_ParamLimits

0xa603,	// (0x00028194) list_cale_time_pane_t2

0x4256,	// (0x00021de7) aid_blid_cardinal_pane

0x4298,	// (0x00021e29) compass_pane_t4

0xa62b,	// (0x000281bc) list_cale_time_pane_t4_ParamLimits

0xa62b,	// (0x000281bc) list_cale_time_pane_t4

0x42a6,	// (0x00021e37) compass_pane_t5

0x42b6,	// (0x00021e47) compass_pane_t6

0x42c4,	// (0x00021e55) compass_pane_t7

0xaad0,	// (0x00028661) navi_pane_cc_t1

0xacad,	// (0x0002883e) aid_phob_thumbnail_center_pane

0x46f7,	// (0x00022288) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0002cdf1) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0002cdf1) list_cale_time_pane_t

0x9905,	// (0x00027496) bg_popup_window_pane_cp02_ParamLimits

0x9905,	// (0x00027496) bg_popup_window_pane_cp02

0xa653,	// (0x000281e4) heading_pane_cp01_ParamLimits

0xa653,	// (0x000281e4) heading_pane_cp01

0xa65f,	// (0x000281f0) loc_req_pane_ParamLimits

0xa65f,	// (0x000281f0) loc_req_pane

0xa66f,	// (0x00028200) loc_type_pane_ParamLimits

0xa66f,	// (0x00028200) loc_type_pane

0xa681,	// (0x00028212) loc_type_pane_t1_ParamLimits

0xa681,	// (0x00028212) loc_type_pane_t1

0xa693,	// (0x00028224) loc_type_pane_t2_ParamLimits

0xa693,	// (0x00028224) loc_type_pane_t2

0xa6a5,	// (0x00028236) loc_type_pane_t3_ParamLimits

0xa6a5,	// (0x00028236) loc_type_pane_t3

0x0002,

0xf267,	// (0x0002cdf8) loc_type_pane_t_ParamLimits

0xf267,	// (0x0002cdf8) loc_type_pane_t

0xa6b7,	// (0x00028248) list_loc_req_pane

0xa6c1,	// (0x00028252) scroll_pane_cp012

0x4000,	// (0x00021b91) list_single_loc_request_popup_menu_pane_ParamLimits

0x4000,	// (0x00021b91) list_single_loc_request_popup_menu_pane

0xa6cc,	// (0x0002825d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa6cc,	// (0x0002825d) list_single_loc_request_popup_menu_pane_g1

0xa6d8,	// (0x00028269) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa6d8,	// (0x00028269) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0002cdff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0002cdff) list_single_loc_request_popup_menu_pane_g

0xa6e4,	// (0x00028275) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa6e4,	// (0x00028275) list_single_loc_request_popup_menu_pane_t1

0x4018,	// (0x00021ba9) bg_popup_window_pane_cp03_ParamLimits

0x4018,	// (0x00021ba9) bg_popup_window_pane_cp03

0x4026,	// (0x00021bb7) heading_loc_req_pane_ParamLimits

0x4026,	// (0x00021bb7) heading_loc_req_pane

0x4032,	// (0x00021bc3) popup_dyc_status_message_window_g1_ParamLimits

0x4032,	// (0x00021bc3) popup_dyc_status_message_window_g1

0x403e,	// (0x00021bcf) popup_dyc_status_message_window_t1_ParamLimits

0x403e,	// (0x00021bcf) popup_dyc_status_message_window_t1

0x4050,	// (0x00021be1) popup_dyc_status_message_window_t2_ParamLimits

0x4050,	// (0x00021be1) popup_dyc_status_message_window_t2

0x4062,	// (0x00021bf3) popup_dyc_status_message_window_t3_ParamLimits

0x4062,	// (0x00021bf3) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0002ce04) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0002ce04) popup_dyc_status_message_window_t

0x9cae,	// (0x0002783f) bg_heading_pane_cp01

0xa6fa,	// (0x0002828b) heading_loc_req_pane_g1

0xa702,	// (0x00028293) heading_loc_req_pane_g2

0xa70a,	// (0x0002829b) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0002ce0b) heading_loc_req_pane_g

0xa712,	// (0x000282a3) heading_loc_req_pane_t1

0xa731,	// (0x000282c2) bg_popup_sub_pane_cp01_ParamLimits

0xa731,	// (0x000282c2) bg_popup_sub_pane_cp01

0xa73f,	// (0x000282d0) popup_cale_events_window_g1_ParamLimits

0xa73f,	// (0x000282d0) popup_cale_events_window_g1

0xa788,	// (0x00028319) popup_cale_events_window_g2_ParamLimits

0xa788,	// (0x00028319) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0002ce2d) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0002ce2d) popup_cale_events_window_g

0xa7a8,	// (0x00028339) popup_cale_events_window_t1_ParamLimits

0xa7a8,	// (0x00028339) popup_cale_events_window_t1

0xa7ba,	// (0x0002834b) popup_cale_events_window_t2_ParamLimits

0xa7ba,	// (0x0002834b) popup_cale_events_window_t2

0xa7f8,	// (0x00028389) popup_cale_events_window_t3_ParamLimits

0xa7f8,	// (0x00028389) popup_cale_events_window_t3

0xa832,	// (0x000283c3) popup_cale_events_window_t4_ParamLimits

0xa832,	// (0x000283c3) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0002ce32) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0002ce32) popup_cale_events_window_t

0x408c,	// (0x00021c1d) call_type_pane

0xb448,	// (0x00028fd9) popup_call_status_window_g1

0x4098,	// (0x00021c29) popup_call_status_window_g2

0x40a4,	// (0x00021c35) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0002ce3b) popup_call_status_window_g

0xa868,	// (0x000283f9) call_type_pane_g1

0xa871,	// (0x00028402) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0002ce42) call_type_pane_g

0x9cae,	// (0x0002783f) bg_popup_sub_pane_cp02

0xa87a,	// (0x0002840b) listscroll_popup_wml_pane

0xa882,	// (0x00028413) list_wml_pane

0xa88c,	// (0x0002841d) scroll_pane_cp013

0xa897,	// (0x00028428) list_single_graphic_popup_wml_pane_ParamLimits

0xa897,	// (0x00028428) list_single_graphic_popup_wml_pane

0x9f21,	// (0x00027ab2) list_single_graphic_popup_wml_pane_g1

0xa8ab,	// (0x0002843c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0002ce47) list_single_graphic_popup_wml_pane_g

0xa8b3,	// (0x00028444) list_single_graphic_popup_wml_pane_t1

0xa8c9,	// (0x0002845a) aid_call_pane

0x9f01,	// (0x00027a92) popup_clock_analogue_window_g1

0x9f01,	// (0x00027a92) popup_clock_analogue_window_g2

0x1385,	// (0x0001ef16) popup_clock_analogue_window_g3

0x1385,	// (0x0001ef16) popup_clock_analogue_window_g4

0x9f21,	// (0x00027ab2) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0002ce4c) popup_clock_analogue_window_g

0x138d,	// (0x0001ef1e) popup_clock_analogue_window_t1

0x139b,	// (0x0001ef2c) clock_digital_number_pane_ParamLimits

0x139b,	// (0x0001ef2c) clock_digital_number_pane

0x13a7,	// (0x0001ef38) clock_digital_number_pane_cp02_ParamLimits

0x13a7,	// (0x0001ef38) clock_digital_number_pane_cp02

0x13b3,	// (0x0001ef44) clock_digital_number_pane_cp03_ParamLimits

0x13b3,	// (0x0001ef44) clock_digital_number_pane_cp03

0x13bf,	// (0x0001ef50) clock_digital_number_pane_cp04_ParamLimits

0x13bf,	// (0x0001ef50) clock_digital_number_pane_cp04

0x13cb,	// (0x0001ef5c) clock_digital_separator_pane_ParamLimits

0x13cb,	// (0x0001ef5c) clock_digital_separator_pane

0x13d7,	// (0x0001ef68) popup_clock_digital_window_t1

0x9f21,	// (0x00027ab2) clock_digital_number_pane_g1

0x9f21,	// (0x00027ab2) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0002cdcc) clock_digital_number_pane_g

0x9f21,	// (0x00027ab2) clock_digital_separator_pane_g1

0x9f21,	// (0x00027ab2) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0002cdcc) clock_digital_separator_pane_g

0x9cae,	// (0x0002783f) bg_popup_window_pane_cp04

0xa8d1,	// (0x00028462) heading_pane_cp03

0xa1c4,	// (0x00027d55) listscroll_popup_gms_pane

0x9cae,	// (0x0002783f) grid_large_graphic_popup_pane

0xa8da,	// (0x0002846b) listscroll_popup_gms_pane_g1

0xa8e3,	// (0x00028474) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0002ce57) listscroll_popup_gms_pane_g

0xa8ec,	// (0x0002847d) scroll_pane_cp014

0x9f84,	// (0x00027b15) cell_large_graphic_popup_pane_ParamLimits

0x9f84,	// (0x00027b15) cell_large_graphic_popup_pane

0x9f92,	// (0x00027b23) cell_large_graphic_popup_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) cell_large_graphic_popup_pane_g1

0xa8f5,	// (0x00028486) cell_large_graphic_popup_pane_g2_ParamLimits

0xa8f5,	// (0x00028486) cell_large_graphic_popup_pane_g2

0xa903,	// (0x00028494) cell_large_graphic_popup_pane_g3_ParamLimits

0xa903,	// (0x00028494) cell_large_graphic_popup_pane_g3

0xa911,	// (0x000284a2) cell_large_graphic_popup_pane_g4_ParamLimits

0xa911,	// (0x000284a2) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0002ce5c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0002ce5c) cell_large_graphic_popup_pane_g

0x9cae,	// (0x0002783f) grid_highlight_pane_cp010

0x9f21,	// (0x00027ab2) bg_popup_call_pane_g1

0xa922,	// (0x000284b3) list_single_graphic_popup_conf_pane_ParamLimits

0xa922,	// (0x000284b3) list_single_graphic_popup_conf_pane

0xa935,	// (0x000284c6) list_highlight_pane_cp01

0xa93e,	// (0x000284cf) list_single_graphic_popup_conf_pane_g1

0xa946,	// (0x000284d7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0002ce65) list_single_graphic_popup_conf_pane_g

0xa94e,	// (0x000284df) list_single_graphic_popup_conf_pane_t1

0xa95c,	// (0x000284ed) linegrid_cams_pane_g1

0x40b0,	// (0x00021c41) linegrid_cams_pane_g2

0xa0f5,	// (0x00027c86) linegrid_cams_pane_g3

0xa965,	// (0x000284f6) linegrid_cams_pane_g4

0x40b9,	// (0x00021c4a) linegrid_cams_pane_g5

0x40c2,	// (0x00021c53) linegrid_cams_pane_g6

0xa1b3,	// (0x00027d44) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0002ce6a) linegrid_cams_pane_g

0xa96e,	// (0x000284ff) popup_clock_analogue_window

0xa96e,	// (0x000284ff) popup_clock_digital_window

0x9cae,	// (0x0002783f) popup_phob_thumbnail_window

0x9f21,	// (0x00027ab2) call_video_uplink_pane_g1

0xa977,	// (0x00028508) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0002ce79) call_video_uplink_pane_g

0xa97f,	// (0x00028510) video_uplink_pane

0xa987,	// (0x00028518) mce_image_pane_g1

0x40cb,	// (0x00021c5c) mce_image_pane_g2

0x40d3,	// (0x00021c64) mce_image_pane_g3

0x40db,	// (0x00021c6c) mce_image_pane_g4

0x40e3,	// (0x00021c74) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0002ce7e) mce_image_pane_g

0xa991,	// (0x00028522) control_top_pane_stacon_cp01_ParamLimits

0xa991,	// (0x00028522) control_top_pane_stacon_cp01

0xa9a5,	// (0x00028536) uni_indicator_pane_stacon_cp01_ParamLimits

0xa9a5,	// (0x00028536) uni_indicator_pane_stacon_cp01

0xa9b6,	// (0x00028547) bg_popup_sub_pane_cp03

0x40eb,	// (0x00021c7c) chi_dic_find_pane

0x40f3,	// (0x00021c84) listscroll_chi_dic_pane

0x40fc,	// (0x00021c8d) main_pane_chidic_g1

0x410f,	// (0x00021ca0) chi_dic_find_pane_t1

0xa9c0,	// (0x00028551) find_chidic_pane

0xa9c9,	// (0x0002855a) chi_dic_list_pane_ParamLimits

0xa9c9,	// (0x0002855a) chi_dic_list_pane

0xa9da,	// (0x0002856b) scroll_pane_cp020

0x411d,	// (0x00021cae) find_chidic_pane_t1

0x9cae,	// (0x0002783f) input_focus_pane_cp06

0x412c,	// (0x00021cbd) list_chi_dic_pane_ParamLimits

0x412c,	// (0x00021cbd) list_chi_dic_pane

0x4149,	// (0x00021cda) list_chi_dic_pane_t1_ParamLimits

0x4149,	// (0x00021cda) list_chi_dic_pane_t1

0x9cae,	// (0x0002783f) list_highlight_pane_cp020

0xa9e2,	// (0x00028573) bg_cale_heading_pane_g1

0x415c,	// (0x00021ced) bg_cale_heading_pane_g2

0x4164,	// (0x00021cf5) bg_cale_heading_pane_g3

0x416c,	// (0x00021cfd) bg_cale_heading_pane_g4

0x4176,	// (0x00021d07) bg_cale_heading_pane_g5

0x4180,	// (0x00021d11) bg_cale_heading_pane_g6

0x4188,	// (0x00021d19) bg_cale_heading_pane_g7

0x4190,	// (0x00021d21) bg_cale_heading_pane_g8

0x419a,	// (0x00021d2b) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0002ce89) bg_cale_heading_pane_g

0xa9e2,	// (0x00028573) bg_cale_side_pane_g1

0x41a4,	// (0x00021d35) bg_cale_side_pane_g2

0x41ae,	// (0x00021d3f) bg_cale_side_pane_g3

0x41b8,	// (0x00021d49) bg_cale_side_pane_g4

0x41c2,	// (0x00021d53) bg_cale_side_pane_g5

0x41cc,	// (0x00021d5d) bg_cale_side_pane_g6

0x41d6,	// (0x00021d67) bg_cale_side_pane_g7

0x41e0,	// (0x00021d71) bg_cale_side_pane_g8

0x41e8,	// (0x00021d79) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0002ce9c) bg_cale_side_pane_g

0x41f0,	// (0x00021d81) popup_call_status_window_ParamLimits

0x41f0,	// (0x00021d81) popup_call_status_window

0xa9ea,	// (0x0002857b) stacon_top_pane

0xa9f2,	// (0x00028583) status_pane_ParamLimits

0xa9f2,	// (0x00028583) status_pane

0xaa07,	// (0x00028598) status_small_pane

0xaa0f,	// (0x000285a0) control_pane

0x9cae,	// (0x0002783f) stacon_bottom_pane

0xaa17,	// (0x000285a8) list_single_mce_smart_pane_t1_ParamLimits

0xaa17,	// (0x000285a8) list_single_mce_smart_pane_t1

0xaa2a,	// (0x000285bb) list_single_mce_smart_pane_t2_ParamLimits

0xaa2a,	// (0x000285bb) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0002ceaf) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0002ceaf) list_single_mce_smart_pane_t

0x41fc,	// (0x00021d8d) compass_pane

0x4208,	// (0x00021d99) main_location2_pane_t1

0x421c,	// (0x00021dad) main_location2_pane_t2

0x4230,	// (0x00021dc1) main_location2_pane_t3

0x0003,

0xf323,	// (0x0002ceb4) main_location2_pane_t

0xaa49,	// (0x000285da) compass_pane_g1_ParamLimits

0xaa49,	// (0x000285da) compass_pane_g1

0x427a,	// (0x00021e0b) compass_pane_t1

0x4289,	// (0x00021e1a) compass_pane_t2

0x0005,

0xf32c,	// (0x0002cebd) compass_pane_t

0x42d4,	// (0x00021e65) text_secondary_cp61

0xaac7,	// (0x00028658) navi_pane_cams_g5

0xab43,	// (0x000286d4) navi_pane_im_t1

0xab51,	// (0x000286e2) navi_pane_mp_g1_ParamLimits

0xab51,	// (0x000286e2) navi_pane_mp_g1

0xab65,	// (0x000286f6) navi_pane_mp_g2_ParamLimits

0xab65,	// (0x000286f6) navi_pane_mp_g2

0xab71,	// (0x00028702) navi_pane_mp_g3_ParamLimits

0xab71,	// (0x00028702) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0002ced1) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0002ced1) navi_pane_mp_g

0xab7d,	// (0x0002870e) navi_pane_mp_t1

0xab8b,	// (0x0002871c) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0002ced8) navi_pane_mp_t

0xabf6,	// (0x00028787) navi_pane_vt_g1

0xab7d,	// (0x0002870e) navi_pane_vt_t1

0xabfe,	// (0x0002878f) navi_slider_pane

0xa1c4,	// (0x00027d55) zooming_pane

0xac0e,	// (0x0002879f) navi_slider_pane_g1

0x13f4,	// (0x0001ef85) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0002cedf) navi_slider_pane_g

0xac32,	// (0x000287c3) aid_levels_zoom

0xac3a,	// (0x000287cb) zooming_pane_g1

0xac42,	// (0x000287d3) zooming_pane_g2

0xac42,	// (0x000287d3) zooming_pane_g3

0x0002,

0xf35d,	// (0x0002ceee) zooming_pane_g

0xac4a,	// (0x000287db) level_10_zoom

0xac53,	// (0x000287e4) level_11_zoom

0xac5c,	// (0x000287ed) level_1_zoom

0xac65,	// (0x000287f6) level_2_zoom

0xac6e,	// (0x000287ff) level_3_zoom

0xac77,	// (0x00028808) level_4_zoom

0xac80,	// (0x00028811) level_5_zoom

0xac89,	// (0x0002881a) level_6_zoom

0xac92,	// (0x00028823) level_7_zoom

0xac9b,	// (0x0002882c) level_8_zoom

0xaca4,	// (0x00028835) level_9_zoom

0xacb5,	// (0x00028846) popup_phob_thumbnail_window_g1

0xacbd,	// (0x0002884e) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0002cef5) popup_phob_thumbnail_window_g

0x4cb6,	// (0x00022847) level_1_location

0x4cbe,	// (0x0002284f) level_2_location

0x4cc6,	// (0x00022857) level_3_location

0x4cd0,	// (0x00022861) level_4_location

0xa1c4,	// (0x00027d55) level_5_location

0x430f,	// (0x00021ea0) mce_icon_pane_g1

0x4317,	// (0x00021ea8) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0002cefa) mce_icon_pane_g

0x431f,	// (0x00021eb0) main_mup_pane_g1_ParamLimits

0x431f,	// (0x00021eb0) main_mup_pane_g1

0x9fae,	// (0x00027b3f) main_mup_pane_g2_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g2

0x9fae,	// (0x00027b3f) main_mup_pane_g3_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g3

0x9fae,	// (0x00027b3f) main_mup_pane_g4_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g4

0x9fae,	// (0x00027b3f) main_mup_pane_g5_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g5

0x9fae,	// (0x00027b3f) main_mup_pane_g6_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g6

0x9fae,	// (0x00027b3f) main_mup_pane_g7_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g7

0x9fae,	// (0x00027b3f) main_mup_pane_g8_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g8

0x9fae,	// (0x00027b3f) main_mup_pane_g9_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g9

0x9fae,	// (0x00027b3f) main_mup_pane_g10_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g10

0x9fae,	// (0x00027b3f) main_mup_pane_g11_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g11

0x9fa0,	// (0x00027b31) main_mup_pane_g12_ParamLimits

0x9fa0,	// (0x00027b31) main_mup_pane_g12

0x9fae,	// (0x00027b3f) main_mup_pane_g13_ParamLimits

0x9fae,	// (0x00027b3f) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0002ceff) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0002ceff) main_mup_pane_g

0x9fbc,	// (0x00027b4d) main_mup_pane_t1_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup_pane_t1

0x9fbc,	// (0x00027b4d) main_mup_pane_t2_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup_pane_t2

0x9fbc,	// (0x00027b4d) main_mup_pane_t3_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup_pane_t3

0xa774,	// (0x00028305) main_mup_pane_t4_ParamLimits

0xa774,	// (0x00028305) main_mup_pane_t4

0xa774,	// (0x00028305) main_mup_pane_t5_ParamLimits

0xa774,	// (0x00028305) main_mup_pane_t5

0xa200,	// (0x00027d91) main_mup_pane_t6_ParamLimits

0xa200,	// (0x00027d91) main_mup_pane_t6

0x0005,

0xf389,	// (0x0002cf1a) main_mup_pane_t_ParamLimits

0xf389,	// (0x0002cf1a) main_mup_pane_t

0x9f2b,	// (0x00027abc) mup_progress_pane_ParamLimits

0x9f2b,	// (0x00027abc) mup_progress_pane

0xbae1,	// (0x00029672) mup_visualizer_pane_ParamLimits

0xbae1,	// (0x00029672) mup_visualizer_pane

0xbae1,	// (0x00029672) mup_volume_pane_ParamLimits

0xbae1,	// (0x00029672) mup_volume_pane

0x9fa0,	// (0x00027b31) mup_visualizer_pane_g1_ParamLimits

0x9fa0,	// (0x00027b31) mup_visualizer_pane_g1

0xacc5,	// (0x00028856) mup_visualizer_pane_g2_ParamLimits

0xacc5,	// (0x00028856) mup_visualizer_pane_g2

0x9f92,	// (0x00027b23) mup_visualizer_pane_g3_ParamLimits

0x9f92,	// (0x00027b23) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0002cf27) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0002cf27) mup_visualizer_pane_g

0xa1e6,	// (0x00027d77) mup_volume_pane_g1

0xa1e6,	// (0x00027d77) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) mup_volume_pane_g

0xa1e6,	// (0x00027d77) mup_progress_pane_g1

0xa1e6,	// (0x00027d77) mup_progress_pane_g2

0xa1e6,	// (0x00027d77) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0002cf33) mup_progress_pane_g

0x9cae,	// (0x0002783f) bg_popup_window_pane_cp05

0xacd3,	// (0x00028864) heading_pane_cp02_ParamLimits

0xacd3,	// (0x00028864) heading_pane_cp02

0xaced,	// (0x0002887e) list_popup_blid_pane

0xacf5,	// (0x00028886) list_blid_sat_info_pane_ParamLimits

0xacf5,	// (0x00028886) list_blid_sat_info_pane

0xad08,	// (0x00028899) list_blid_sat_info_pane_g1

0xad10,	// (0x000288a1) list_blid_sat_info_pane_t1

0x441a,	// (0x00021fab) mup_equalizer_pane_ParamLimits

0x441a,	// (0x00021fab) mup_equalizer_pane

0x443b,	// (0x00021fcc) mup_equalizer_pane_cp1_ParamLimits

0x443b,	// (0x00021fcc) mup_equalizer_pane_cp1

0x445c,	// (0x00021fed) mup_equalizer_pane_cp2_ParamLimits

0x445c,	// (0x00021fed) mup_equalizer_pane_cp2

0x447d,	// (0x0002200e) mup_equalizer_pane_cp3_ParamLimits

0x447d,	// (0x0002200e) mup_equalizer_pane_cp3

0x449e,	// (0x0002202f) mup_equalizer_pane_cp4_ParamLimits

0x449e,	// (0x0002202f) mup_equalizer_pane_cp4

0x44bf,	// (0x00022050) mup_equalizer_pane_cp5

0x44d5,	// (0x00022066) mup_equalizer_pane_cp6

0x44ed,	// (0x0002207e) mup_equalizer_pane_cp7

0xbea3,	// (0x00029a34) bg_popup_call_poc_act_pane_g9

0xbeab,	// (0x00029a3c) bg_popup_call_poc_act_pane_g10

0xbeb3,	// (0x00029a44) bg_popup_call_poc_act_pane_g11

0x000a,

0x9f09,	// (0x00027a9a) mup_scale_pane

0x9f21,	// (0x00027ab2) mup_scale_pane_g1

0xad1e,	// (0x000288af) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0002cf4f) mup_scale_pane_g

0xad42,	// (0x000288d3) msg_data_pane

0xad4a,	// (0x000288db) scroll_pane_cp017

0x4517,	// (0x000220a8) bg_list_pane_cp04_ParamLimits

0x4517,	// (0x000220a8) bg_list_pane_cp04

0xad52,	// (0x000288e3) msg_data_pane_g1

0x453b,	// (0x000220cc) msg_data_pane_g2

0x4543,	// (0x000220d4) msg_data_pane_g3

0x454b,	// (0x000220dc) msg_data_pane_g4

0x4553,	// (0x000220e4) msg_data_pane_g5

0x455b,	// (0x000220ec) msg_data_pane_g6

0x4563,	// (0x000220f4) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0002cf5e) msg_data_pane_g

0x456b,	// (0x000220fc) msg_text_pane_ParamLimits

0x456b,	// (0x000220fc) msg_text_pane

0x45bd,	// (0x0002214e) qrid_highlight_pane_cp011_ParamLimits

0x45bd,	// (0x0002214e) qrid_highlight_pane_cp011

0x9cae,	// (0x0002783f) msg_body_pane

0x9cae,	// (0x0002783f) msg_header_pane

0xad63,	// (0x000288f4) input_focus_pane_cp07

0x45e5,	// (0x00022176) msg_header_pane_t1_ParamLimits

0x45e5,	// (0x00022176) msg_header_pane_t1

0x45fb,	// (0x0002218c) msg_header_pane_t2_ParamLimits

0x45fb,	// (0x0002218c) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0002cf72) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0002cf72) msg_header_pane_t

0xad78,	// (0x00028909) msg_body_pane_g1

0x4612,	// (0x000221a3) msg_body_pane_t1_ParamLimits

0x4612,	// (0x000221a3) msg_body_pane_t1

0x4643,	// (0x000221d4) msg_body_pane_t2_ParamLimits

0x4643,	// (0x000221d4) msg_body_pane_t2

0x4655,	// (0x000221e6) msg_body_pane_t3_ParamLimits

0x4655,	// (0x000221e6) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0002cf77) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0002cf77) msg_body_pane_t

0x1436,	// (0x0001efc7) main_viewer_pane_g1_ParamLimits

0x1436,	// (0x0001efc7) main_viewer_pane_g1

0x1442,	// (0x0001efd3) main_viewer_pane_g2_ParamLimits

0x1442,	// (0x0001efd3) main_viewer_pane_g2

0x4689,	// (0x0002221a) main_viewer_pane_g3_ParamLimits

0x4689,	// (0x0002221a) main_viewer_pane_g3

0x469a,	// (0x0002222b) main_viewer_pane_g4_ParamLimits

0x469a,	// (0x0002222b) main_viewer_pane_g4

0x144e,	// (0x0001efdf) main_viewer_pane_g5_ParamLimits

0x144e,	// (0x0001efdf) main_viewer_pane_g5

0x144e,	// (0x0001efdf) main_viewer_pane_g7_ParamLimits

0x144e,	// (0x0001efdf) main_viewer_pane_g7

0xa6cc,	// (0x0002825d) main_viewer_pane_g8_ParamLimits

0xa6cc,	// (0x0002825d) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0002cf87) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0002cf87) main_viewer_pane_g

0xad80,	// (0x00028911) viewer_content_pane_ParamLimits

0xad80,	// (0x00028911) viewer_content_pane

0x46cb,	// (0x0002225c) main_postcard_pane_g1_ParamLimits

0x46cb,	// (0x0002225c) main_postcard_pane_g1

0x46d9,	// (0x0002226a) main_postcard_pane_g2_ParamLimits

0x46d9,	// (0x0002226a) main_postcard_pane_g2

0x46e7,	// (0x00022278) main_postcard_pane_g3_ParamLimits

0x46e7,	// (0x00022278) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0002cf98) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0002cf98) main_postcard_pane_g

0x46f7,	// (0x00022288) main_postcard_pane_g4

0xc027,	// (0x00029bb8) smil_status_volume_pane_g2

0x4723,	// (0x000222b4) postcard_pane_ParamLimits

0x4723,	// (0x000222b4) postcard_pane

0xb448,	// (0x00028fd9) postcard_pane_g1_ParamLimits

0xb448,	// (0x00028fd9) postcard_pane_g1

0x4755,	// (0x000222e6) postcard_pane_g2_ParamLimits

0x4755,	// (0x000222e6) postcard_pane_g2

0x4761,	// (0x000222f2) postcard_pane_g3_ParamLimits

0x4761,	// (0x000222f2) postcard_pane_g3

0xadcc,	// (0x0002895d) postcard_pane_g4_ParamLimits

0xadcc,	// (0x0002895d) postcard_pane_g4

0x476d,	// (0x000222fe) postcard_pane_g5_ParamLimits

0x476d,	// (0x000222fe) postcard_pane_g5

0x4779,	// (0x0002230a) postcard_pane_g6_ParamLimits

0x4779,	// (0x0002230a) postcard_pane_g6

0xad8e,	// (0x0002891f) postcard_pane_g7_ParamLimits

0xad8e,	// (0x0002891f) postcard_pane_g7

0x0006,

0xf414,	// (0x0002cfa5) postcard_pane_g_ParamLimits

0xf414,	// (0x0002cfa5) postcard_pane_g

0x4785,	// (0x00022316) main_mp2_pane_g1_ParamLimits

0x4785,	// (0x00022316) main_mp2_pane_g1

0x4791,	// (0x00022322) main_mp2_pane_g2_ParamLimits

0x4791,	// (0x00022322) main_mp2_pane_g2

0x479d,	// (0x0002232e) main_mp2_pane_g3_ParamLimits

0x479d,	// (0x0002232e) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0002cfb4) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0002cfb4) main_mp2_pane_g

0x47a9,	// (0x0002233a) main_mp2_pane_t1_ParamLimits

0x47a9,	// (0x0002233a) main_mp2_pane_t1

0x47c0,	// (0x00022351) main_mp2_pane_t2_ParamLimits

0x47c0,	// (0x00022351) main_mp2_pane_t2

0x47d2,	// (0x00022363) main_mp2_pane_t3_ParamLimits

0x47d2,	// (0x00022363) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0002cfbb) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0002cfbb) main_mp2_pane_t

0xadda,	// (0x0002896b) pec_content_pane_ParamLimits

0xadda,	// (0x0002896b) pec_content_pane

0xa35b,	// (0x00027eec) scroll_pane_cp015

0xadec,	// (0x0002897d) pec_attribute_pane_ParamLimits

0xadec,	// (0x0002897d) pec_attribute_pane

0x47e4,	// (0x00022375) pec_content_pane_g1_ParamLimits

0x47e4,	// (0x00022375) pec_content_pane_g1

0xadfc,	// (0x0002898d) pec_content_pane_t1_ParamLimits

0xadfc,	// (0x0002898d) pec_content_pane_t1

0xae0e,	// (0x0002899f) pec_content_pane_t2_ParamLimits

0xae0e,	// (0x0002899f) pec_content_pane_t2

0x0001,

0xf431,	// (0x0002cfc2) pec_content_pane_t_ParamLimits

0xf431,	// (0x0002cfc2) pec_content_pane_t

0x47f0,	// (0x00022381) list_single_graphic_pane_cp01_ParamLimits

0x47f0,	// (0x00022381) list_single_graphic_pane_cp01

0x9f09,	// (0x00027a9a) bg_popup_sub_pane_cp04

0xae20,	// (0x000289b1) popup_mup_playback_window_g1

0xae2c,	// (0x000289bd) popup_mup_playback_window_t1

0xae41,	// (0x000289d2) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0002cfc7) popup_mup_playback_window_t

0xae78,	// (0x00028a09) main_image_pane_g1_ParamLimits

0xae78,	// (0x00028a09) main_image_pane_g1

0xaebb,	// (0x00028a4c) scroll_pane_cp018_ParamLimits

0xaebb,	// (0x00028a4c) scroll_pane_cp018

0xaed3,	// (0x00028a64) scroll_pane_cp016_ParamLimits

0xaed3,	// (0x00028a64) scroll_pane_cp016

0x488a,	// (0x0002241b) smil2_image_pane_ParamLimits

0x488a,	// (0x0002241b) smil2_image_pane

0x48ba,	// (0x0002244b) smil2_root_pane_ParamLimits

0x48ba,	// (0x0002244b) smil2_root_pane

0x48e6,	// (0x00022477) smil2_text_pane_ParamLimits

0x48e6,	// (0x00022477) smil2_text_pane

0x9cae,	// (0x0002783f) bg_list_pane_cp06

0xaf0f,	// (0x00028aa0) grid_radio_pane

0x9cae,	// (0x0002783f) bg_popup_window_pane_cp06

0xaf17,	// (0x00028aa8) main_fmradio_pane_t1

0xbefb,	// (0x00029a8c) heading_pane_cp04

0xaf25,	// (0x00028ab6) main_fmradio_pane_t2

0xbf03,	// (0x00029a94) popup_cale_lunar_info_window_g1

0xaf33,	// (0x00028ac4) main_fmradio_pane_t3

0xbf0b,	// (0x00029a9c) popup_cale_lunar_info_window_g2

0xaf41,	// (0x00028ad2) main_fmradio_pane_t4

0x0001,

0xaf4f,	// (0x00028ae0) main_fmradio_pane_t5

0x0004,

0xf529,	// (0x0002d0ba) popup_cale_lunar_info_window_g

0xf44b,	// (0x0002cfdc) main_fmradio_pane_t

0xaf5d,	// (0x00028aee) wait_bar_pane_cp03

0xaf65,	// (0x00028af6) cell_fmradio_pane_ParamLimits

0xaf65,	// (0x00028af6) cell_fmradio_pane

0xad8e,	// (0x0002891f) cell_fmradio_pane_g1_ParamLimits

0xad8e,	// (0x0002891f) cell_fmradio_pane_g1

0x9cae,	// (0x0002783f) grid_highlight_pane_cp011

0xaf78,	// (0x00028b09) poc_content_pane_ParamLimits

0xaf78,	// (0x00028b09) poc_content_pane

0xaf8a,	// (0x00028b1b) scroll_pane_cp019

0x4926,	// (0x000224b7) popup_call_poc_act_window_ParamLimits

0x4926,	// (0x000224b7) popup_call_poc_act_window

0x4933,	// (0x000224c4) popup_call_poc_inact_window_ParamLimits

0x4933,	// (0x000224c4) popup_call_poc_inact_window

0xf4ed,	// (0x0002d07e) bg_popup_call_poc_act_pane_g

0xbebb,	// (0x00029a4c) bg_popup_call_poc_inact_pane_g1

0xbec3,	// (0x00029a54) bg_popup_call_poc_inact_pane_g2

0xaf92,	// (0x00028b23) popup_call_poc_act_window_g2

0xbecb,	// (0x00029a5c) bg_popup_call_poc_inact_pane_g3

0xbe4b,	// (0x000299dc) bg_popup_call_poc_inact_pane_g4

0xbed3,	// (0x00029a64) bg_popup_call_poc_inact_pane_g5

0xaf9a,	// (0x00028b2b) popup_call_poc_act_window_t1_ParamLimits

0xaf9a,	// (0x00028b2b) popup_call_poc_act_window_t1

0xafc2,	// (0x00028b53) popup_call_poc_act_window_t2_ParamLimits

0xafc2,	// (0x00028b53) popup_call_poc_act_window_t2

0xafea,	// (0x00028b7b) popup_call_poc_act_window_t3_ParamLimits

0xafea,	// (0x00028b7b) popup_call_poc_act_window_t3

0xb012,	// (0x00028ba3) popup_call_poc_act_window_t4_ParamLimits

0xb012,	// (0x00028ba3) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0002cfe7) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0002cfe7) popup_call_poc_act_window_t

0xbedb,	// (0x00029a6c) bg_popup_call_poc_inact_pane_g6

0xbee3,	// (0x00029a74) bg_popup_call_poc_inact_pane_g7

0xbeeb,	// (0x00029a7c) bg_popup_call_poc_inact_pane_g8

0xb024,	// (0x00028bb5) popup_call_poc_inact_window_g2

0xbef3,	// (0x00029a84) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf504,	// (0x0002d095) bg_popup_call_poc_inact_pane_g

0xb02c,	// (0x00028bbd) popup_call_poc_inact_window_t1_ParamLimits

0xb02c,	// (0x00028bbd) popup_call_poc_inact_window_t1

0xb041,	// (0x00028bd2) popup_call_poc_inact_window_t2_ParamLimits

0xb041,	// (0x00028bd2) popup_call_poc_inact_window_t2

0xb056,	// (0x00028be7) popup_call_poc_inact_window_t3_ParamLimits

0xb056,	// (0x00028be7) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0002cff0) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0002cff0) popup_call_poc_inact_window_t

0xbf9f,	// (0x00029b30) context_pane_ParamLimits

0x4e36,	// (0x000229c7) signal_pane_ParamLimits

0xa1c4,	// (0x00027d55) main_call2_pane

0x15a5,	// (0x0001f136) popup_phob_thumbnail2_window_ParamLimits

0x15a5,	// (0x0001f136) popup_phob_thumbnail2_window

0x1406,	// (0x0001ef97) aid_hotspot_pointer_arrow_pane

0x140e,	// (0x0001ef9f) aid_hotspot_pointer_hand_pane

0x4c7e,	// (0x0002280f) phob_pre_status_pane_g5

0x9f84,	// (0x00027b15) cams_zoom_pane_ParamLimits

0x9f84,	// (0x00027b15) image_vga_pane_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g1_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g3_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g4_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g5_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g6_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0002cd16) main_camera_pane_g_ParamLimits

0xa774,	// (0x00028305) main_camera_pane_t1_ParamLimits

0xa774,	// (0x00028305) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0002cd27) main_camera_pane_t_ParamLimits

0x9f09,	// (0x00027a9a) bg_popup_preview_window_pane_cp01_ParamLimits

0x9f09,	// (0x00027a9a) bg_popup_preview_window_pane_cp01

0xb06b,	// (0x00028bfc) popup_phob_thumbnail2_window_g1_ParamLimits

0xb06b,	// (0x00028bfc) popup_phob_thumbnail2_window_g1

0x9cae,	// (0x0002783f) call2_cli_visual_pane

0x494f,	// (0x000224e0) popup_call2_audio_conf_window_ParamLimits

0x494f,	// (0x000224e0) popup_call2_audio_conf_window

0x4964,	// (0x000224f5) popup_call2_audio_first_window_ParamLimits

0x4964,	// (0x000224f5) popup_call2_audio_first_window

0x4a02,	// (0x00022593) popup_call2_audio_in_window_ParamLimits

0x4a02,	// (0x00022593) popup_call2_audio_in_window

0x4a44,	// (0x000225d5) popup_call2_audio_out_window_ParamLimits

0x4a44,	// (0x000225d5) popup_call2_audio_out_window

0x4aa6,	// (0x00022637) popup_call2_audio_second_window_ParamLimits

0x4aa6,	// (0x00022637) popup_call2_audio_second_window

0x4b04,	// (0x00022695) popup_call2_audio_wait_window_ParamLimits

0x4b04,	// (0x00022695) popup_call2_audio_wait_window

0x9cae,	// (0x0002783f) bg_popup_call2_act_pane_cp03

0x9eeb,	// (0x00027a7c) list_conf_pane_cp

0xb077,	// (0x00028c08) popup_call2_audio_conf_window_t1

0xb085,	// (0x00028c16) list_single_graphic_popup_conf2_pane_ParamLimits

0xb085,	// (0x00028c16) list_single_graphic_popup_conf2_pane

0xa935,	// (0x000284c6) list_highlight_pane_cp04

0xb098,	// (0x00028c29) list_single_graphic_popup_conf2_pane_g1

0xa946,	// (0x000284d7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0002cff7) list_single_graphic_popup_conf2_pane_g

0xb0a2,	// (0x00028c33) list_single_graphic_popup_conf2_pane_t1

0xb0b0,	// (0x00028c41) bg_popup_call2_act_pane_cp01_ParamLimits

0xb0b0,	// (0x00028c41) bg_popup_call2_act_pane_cp01

0xb13a,	// (0x00028ccb) call_type_pane_cp05_ParamLimits

0xb13a,	// (0x00028ccb) call_type_pane_cp05

0xb18e,	// (0x00028d1f) popup_call2_audio_second_window_g1_ParamLimits

0xb18e,	// (0x00028d1f) popup_call2_audio_second_window_g1

0xb1e2,	// (0x00028d73) popup_call2_audio_second_window_g2_ParamLimits

0xb1e2,	// (0x00028d73) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0002cffc) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0002cffc) popup_call2_audio_second_window_g

0xb247,	// (0x00028dd8) popup_call2_audio_second_window_t1_ParamLimits

0xb247,	// (0x00028dd8) popup_call2_audio_second_window_t1

0xb302,	// (0x00028e93) popup_call2_audio_second_window_t2_ParamLimits

0xb302,	// (0x00028e93) popup_call2_audio_second_window_t2

0xb355,	// (0x00028ee6) popup_call2_audio_second_window_t3_ParamLimits

0xb355,	// (0x00028ee6) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0002d003) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0002d003) popup_call2_audio_second_window_t

0x9cae,	// (0x0002783f) bg_popup_call2_in_pane_cp02

0x9cb8,	// (0x00027849) call_type_pane_cp04

0x4b43,	// (0x000226d4) popup_call2_audio_wait_window_g1

0x4b4b,	// (0x000226dc) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0002d00c) popup_call2_audio_wait_window_g

0x9cd0,	// (0x00027861) popup_call2_audio_wait_window_t3

0xb456,	// (0x00028fe7) bg_popup_call2_act_pane_ParamLimits

0xb456,	// (0x00028fe7) bg_popup_call2_act_pane

0xb516,	// (0x000290a7) call_type_pane_cp03_ParamLimits

0xb516,	// (0x000290a7) call_type_pane_cp03

0xb57a,	// (0x0002910b) popup_call2_audio_first_window_g1_ParamLimits

0xb57a,	// (0x0002910b) popup_call2_audio_first_window_g1

0xb5ea,	// (0x0002917b) popup_call2_audio_first_window_g2_ParamLimits

0xb5ea,	// (0x0002917b) popup_call2_audio_first_window_g2

0xb448,	// (0x00028fd9) popup_call2_audio_first_window_g3_ParamLimits

0xb448,	// (0x00028fd9) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0002d011) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0002d011) popup_call2_audio_first_window_g

0xb6c8,	// (0x00029259) popup_call2_audio_first_window_t1_ParamLimits

0xb6c8,	// (0x00029259) popup_call2_audio_first_window_t1

0xb7cb,	// (0x0002935c) popup_call2_audio_first_window_t4_ParamLimits

0xb7cb,	// (0x0002935c) popup_call2_audio_first_window_t4

0xb8ae,	// (0x0002943f) popup_call2_audio_first_window_t5_ParamLimits

0xb8ae,	// (0x0002943f) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0002d01c) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0002d01c) popup_call2_audio_first_window_t

0x9f01,	// (0x00027a92) bg_popup_call2_act_pane_g1

0xbf13,	// (0x00029aa4) popup_cale_lunar_info_window_t1

0xbf21,	// (0x00029ab2) popup_cale_lunar_info_window_t2

0xbf2f,	// (0x00029ac0) popup_cale_lunar_info_window_t3

0x9cae,	// (0x0002783f) bg_popup_call2_bubble_pane

0xb9af,	// (0x00029540) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9af,	// (0x00029540) bg_popup_call2_in_pane_cp01

0x998a,	// (0x0002751b) call_type_pane_cp02

0x4b53,	// (0x000226e4) popup_call2_audio_out_window_g1_ParamLimits

0x4b53,	// (0x000226e4) popup_call2_audio_out_window_g1

0xb9f7,	// (0x00029588) popup_call2_audio_out_window_g2_ParamLimits

0xb9f7,	// (0x00029588) popup_call2_audio_out_window_g2

0x4b7f,	// (0x00022710) popup_call2_audio_out_window_g3_ParamLimits

0x4b7f,	// (0x00022710) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0002d025) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0002d025) popup_call2_audio_out_window_g

0xba2e,	// (0x000295bf) popup_call2_audio_out_window_t1_ParamLimits

0xba2e,	// (0x000295bf) popup_call2_audio_out_window_t1

0xba8d,	// (0x0002961e) popup_call2_audio_out_window_t2_ParamLimits

0xba8d,	// (0x0002961e) popup_call2_audio_out_window_t2

0xbaef,	// (0x00029680) popup_call2_audio_out_window_t3_ParamLimits

0xbaef,	// (0x00029680) popup_call2_audio_out_window_t3

0xbb05,	// (0x00029696) popup_call2_audio_out_window_t4_ParamLimits

0xbb05,	// (0x00029696) popup_call2_audio_out_window_t4

0xbb1b,	// (0x000296ac) popup_call2_audio_out_window_t5_ParamLimits

0xbb1b,	// (0x000296ac) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0002d02e) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0002d02e) popup_call2_audio_out_window_t

0xbb7f,	// (0x00029710) bg_popup_call2_in_pane_ParamLimits

0xbb7f,	// (0x00029710) bg_popup_call2_in_pane

0xbbdb,	// (0x0002976c) popup_call2_audio_in_window_g1_ParamLimits

0xbbdb,	// (0x0002976c) popup_call2_audio_in_window_g1

0xbc13,	// (0x000297a4) popup_call2_audio_in_window_g2_ParamLimits

0xbc13,	// (0x000297a4) popup_call2_audio_in_window_g2

0xbc4b,	// (0x000297dc) popup_call2_audio_in_window_g3_ParamLimits

0xbc4b,	// (0x000297dc) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0002d03b) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0002d03b) popup_call2_audio_in_window_g

0xbca3,	// (0x00029834) popup_call2_audio_in_window_t1_ParamLimits

0xbca3,	// (0x00029834) popup_call2_audio_in_window_t1

0xbd23,	// (0x000298b4) popup_call2_audio_in_window_t2_ParamLimits

0xbd23,	// (0x000298b4) popup_call2_audio_in_window_t2

0xbda3,	// (0x00029934) popup_call2_audio_in_window_t3_ParamLimits

0xbda3,	// (0x00029934) popup_call2_audio_in_window_t3

0xbdbd,	// (0x0002994e) popup_call2_audio_in_window_t4_ParamLimits

0xbdbd,	// (0x0002994e) popup_call2_audio_in_window_t4

0xbdcf,	// (0x00029960) popup_call2_audio_in_window_t5_ParamLimits

0xbdcf,	// (0x00029960) popup_call2_audio_in_window_t5

0xbde1,	// (0x00029972) popup_call2_audio_in_window_t6_ParamLimits

0xbde1,	// (0x00029972) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0002d044) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0002d044) popup_call2_audio_in_window_t

0x9f01,	// (0x00027a92) bg_popup_call2_in_pane_g1

0xbf3d,	// (0x00029ace) popup_cale_lunar_info_window_t4

0x0003,

0xf52e,	// (0x0002d0bf) popup_cale_lunar_info_window_t

0x9f09,	// (0x00027a9a) bg_popup_call2_rect_pane_ParamLimits

0x9f09,	// (0x00027a9a) bg_popup_call2_rect_pane

0x9cae,	// (0x0002783f) call2_cli_visual_graphic_pane

0x9cae,	// (0x0002783f) call2_cli_visual_text_pane

0x15f4,	// (0x0001f185) smil_status_volume_pane_g3

0x0002,

0x9f21,	// (0x00027ab2) call2_cli_visual_graphic_pane_g1

0x9f21,	// (0x00027ab2) call2_cli_visual_graphic_pane_g2

0x9f21,	// (0x00027ab2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0002d051) call2_cli_visual_graphic_pane_g

0xbdf3,	// (0x00029984) bg_popup_call2_rect_pane_g1

0xa0db,	// (0x00027c6c) bg_popup_call2_rect_pane_g2

0xbdfb,	// (0x0002998c) bg_popup_call2_rect_pane_g3

0xbe03,	// (0x00029994) bg_popup_call2_rect_pane_g4

0xbe0b,	// (0x0002999c) bg_popup_call2_rect_pane_g5

0xbe13,	// (0x000299a4) bg_popup_call2_rect_pane_g6

0xbe1b,	// (0x000299ac) bg_popup_call2_rect_pane_g7

0xbe23,	// (0x000299b4) bg_popup_call2_rect_pane_g8

0xbe2b,	// (0x000299bc) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002d058) bg_popup_call2_rect_pane_g

0xbe33,	// (0x000299c4) bg_popup_call2_bubble_pane_g1

0xbe3b,	// (0x000299cc) bg_popup_call2_bubble_pane_g2

0xbe43,	// (0x000299d4) bg_popup_call2_bubble_pane_g3

0xbe4b,	// (0x000299dc) bg_popup_call2_bubble_pane_g4

0xbe53,	// (0x000299e4) bg_popup_call2_bubble_pane_g5

0xbe5b,	// (0x000299ec) bg_popup_call2_bubble_pane_g6

0xbe63,	// (0x000299f4) bg_popup_call2_bubble_pane_g7

0xbe6b,	// (0x000299fc) bg_popup_call2_bubble_pane_g8

0xbe73,	// (0x00029a04) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0002d06b) bg_popup_call2_bubble_pane_g

0x288f,	// (0x00020420) aid_cale_week_size_cell_pane

0x9f09,	// (0x00027a9a) aid_cams_cif_uncrop_pane_ParamLimits

0x9f09,	// (0x00027a9a) aid_cams_cif_uncrop_pane

0x2d96,	// (0x00020927) aid_cams_size_cell_ParamLimits

0x2d96,	// (0x00020927) aid_cams_size_cell

0x2da2,	// (0x00020933) grid_cams_pane_ParamLimits

0x2db0,	// (0x00020941) linegrid_cams_pane_ParamLimits

0x2e87,	// (0x00020a18) call_video_pane_t1

0x2ea8,	// (0x00020a39) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0002cd73) call_video_pane_t

0x33f6,	// (0x00020f87) aid_cale_month_size_cell_pane_ParamLimits

0x33f6,	// (0x00020f87) aid_cale_month_size_cell_pane

0xf572,	// (0x0002d103) smil_status_volume_pane_g

0x1601,	// (0x0001f192) volume_smil_pane_ParamLimits

0x0da5,	// (0x0001e936) aid_popup2_width_pane

0x27ce,	// (0x0002035f) cell_qdial_pane_g4_ParamLimits

0x27ce,	// (0x0002035f) cell_qdial_pane_g4

0x4256,	// (0x00021de7) aid_blid_cardinal_pane_ParamLimits

0x4266,	// (0x00021df7) aid_blid_destination_pane_ParamLimits

0x4266,	// (0x00021df7) aid_blid_destination_pane

0x9f09,	// (0x00027a9a) bg_popup_call_poc_act_pane_ParamLimits

0x9f09,	// (0x00027a9a) bg_popup_call_poc_act_pane

0x9f09,	// (0x00027a9a) bg_popup_call_poc_inact_pane_ParamLimits

0x9f09,	// (0x00027a9a) bg_popup_call_poc_inact_pane

0xbe7b,	// (0x00029a0c) bg_popup_call_poc_act_pane_g1

0xbe83,	// (0x00029a14) bg_popup_call_poc_act_pane_g2

0xbe8b,	// (0x00029a1c) bg_popup_call_poc_act_pane_g3

0xbe4b,	// (0x000299dc) bg_popup_call_poc_act_pane_g4

0xbe53,	// (0x000299e4) bg_popup_call_poc_act_pane_g5

0xbe93,	// (0x00029a24) bg_popup_call_poc_act_pane_g6

0xbe63,	// (0x000299f4) bg_popup_call_poc_act_pane_g7

0xbe9b,	// (0x00029a2c) bg_popup_call_poc_act_pane_g8

0x9cae,	// (0x0002783f) main_usb_pane

0x14d8,	// (0x0001f069) popup_cale_lunar_info_window

0x31c5,	// (0x00020d56) im_reading_pane_t1_ParamLimits

0xa2b3,	// (0x00027e44) list_im_pane_ParamLimits

0xa2c4,	// (0x00027e55) scroll_pane_cp07_ParamLimits

0x9cae,	// (0x0002783f) grid_highlight_pane_cp012

0x9f09,	// (0x00027a9a) mup_scale_pane_ParamLimits

0xb448,	// (0x00028fd9) main_usb_pane_g1_ParamLimits

0xb448,	// (0x00028fd9) main_usb_pane_g1

0x4be6,	// (0x00022777) main_usb_pane_g2_ParamLimits

0x4be6,	// (0x00022777) main_usb_pane_g2

0x0001,

0xf517,	// (0x0002d0a8) main_usb_pane_g_ParamLimits

0xf517,	// (0x0002d0a8) main_usb_pane_g

0x4bf2,	// (0x00022783) main_usb_pane_t1_ParamLimits

0x4bf2,	// (0x00022783) main_usb_pane_t1

0x4c04,	// (0x00022795) main_usb_pane_t2_ParamLimits

0x4c04,	// (0x00022795) main_usb_pane_t2

0x4c16,	// (0x000227a7) main_usb_pane_t3_ParamLimits

0x4c16,	// (0x000227a7) main_usb_pane_t3

0x4c28,	// (0x000227b9) main_usb_pane_t4_ParamLimits

0x4c28,	// (0x000227b9) main_usb_pane_t4

0x4c3a,	// (0x000227cb) main_usb_pane_t5_ParamLimits

0x4c3a,	// (0x000227cb) main_usb_pane_t5

0x4c4c,	// (0x000227dd) main_usb_pane_t6_ParamLimits

0x4c4c,	// (0x000227dd) main_usb_pane_t6

0x0005,

0xf51c,	// (0x0002d0ad) main_usb_pane_t_ParamLimits

0x41fc,	// (0x00021d8d) aid_text_placing

0x4208,	// (0x00021d99) main_location2_pane_t1_ParamLimits

0x421c,	// (0x00021dad) main_location2_pane_t2_ParamLimits

0x4230,	// (0x00021dc1) main_location2_pane_t3_ParamLimits

0x4244,	// (0x00021dd5) main_location2_pane_t4_ParamLimits

0x4244,	// (0x00021dd5) main_location2_pane_t4

0xf323,	// (0x0002ceb4) main_location2_pane_t_ParamLimits

0x9f45,	// (0x00027ad6) find_pinb_pane_g2_ParamLimits

0x9f45,	// (0x00027ad6) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0002cc2b) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0002cc2b) find_pinb_pane_g

0x9f51,	// (0x00027ae2) find_pinb_pane_t1_ParamLimits

0x9f63,	// (0x00027af4) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0002cc30) find_pinb_pane_t_ParamLimits

0x9cae,	// (0x0002783f) main_call3_pane

0x39b9,	// (0x0002154a) cale_month_day_heading_pane_t1_ParamLimits

0x3a3f,	// (0x000215d0) cale_month_day_heading_pane_t2_ParamLimits

0x3ab8,	// (0x00021649) cale_month_day_heading_pane_t3_ParamLimits

0x3b31,	// (0x000216c2) cale_month_day_heading_pane_t4_ParamLimits

0x3baa,	// (0x0002173b) cale_month_day_heading_pane_t5_ParamLimits

0x3c23,	// (0x000217b4) cale_month_day_heading_pane_t6_ParamLimits

0x3c9c,	// (0x0002182d) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0002cdab) cale_month_day_heading_pane_t_ParamLimits

0xa50e,	// (0x0002809f) smil_status_volume_pane

0x473d,	// (0x000222ce) postcard_address_pane_ParamLimits

0x473d,	// (0x000222ce) postcard_address_pane

0x4749,	// (0x000222da) postcard_message_pane_ParamLimits

0x4749,	// (0x000222da) postcard_message_pane

0x4bab,	// (0x0002273c) call2_cli_visual_pane_t1_ParamLimits

0x4bab,	// (0x0002273c) call2_cli_visual_pane_t1

0xc052,	// (0x00029be3) postcard_message_pane_t1_ParamLimits

0xc052,	// (0x00029be3) postcard_message_pane_t1

0xc03a,	// (0x00029bcb) postcard_address_pane_t1_ParamLimits

0xc03a,	// (0x00029bcb) postcard_address_pane_t1

0x4f8e,	// (0x00022b1f) popup_call3_audio_in_window_ParamLimits

0x4f8e,	// (0x00022b1f) popup_call3_audio_in_window

0x4e72,	// (0x00022a03) bg_popup_call3_in_pane_ParamLimits

0x4e72,	// (0x00022a03) bg_popup_call3_in_pane

0x4ed4,	// (0x00022a65) popup_call3_audio_in_window_g1_ParamLimits

0x4ed4,	// (0x00022a65) popup_call3_audio_in_window_g1

0x4eec,	// (0x00022a7d) popup_call3_audio_in_window_g2_ParamLimits

0x4eec,	// (0x00022a7d) popup_call3_audio_in_window_g2

0x4f04,	// (0x00022a95) popup_call3_audio_in_window_g3_ParamLimits

0x4f04,	// (0x00022a95) popup_call3_audio_in_window_g3

0x0003,

0xf579,	// (0x0002d10a) popup_call3_audio_in_window_g_ParamLimits

0xf579,	// (0x0002d10a) popup_call3_audio_in_window_g

0x4f2c,	// (0x00022abd) popup_call3_audio_in_window_t1_ParamLimits

0x4f2c,	// (0x00022abd) popup_call3_audio_in_window_t1

0x4f54,	// (0x00022ae5) popup_call3_audio_in_window_t2_ParamLimits

0x4f54,	// (0x00022ae5) popup_call3_audio_in_window_t2

0x4f7c,	// (0x00022b0d) popup_call3_audio_in_window_t3_ParamLimits

0x4f7c,	// (0x00022b0d) popup_call3_audio_in_window_t3

0x0002,

0xf582,	// (0x0002d113) popup_call3_audio_in_window_t_ParamLimits

0xf582,	// (0x0002d113) popup_call3_audio_in_window_t

0xa1c4,	// (0x00027d55) bg_popup_call3_rect_pane

0xbdf3,	// (0x00029984) bg_popup_call3_rect_pane_g1

0xa0db,	// (0x00027c6c) bg_popup_call3_rect_pane_g2

0xbdfb,	// (0x0002998c) bg_popup_call3_rect_pane_g3

0xbe03,	// (0x00029994) bg_popup_call3_rect_pane_g4

0xbe0b,	// (0x0002999c) bg_popup_call3_rect_pane_g5

0xbe13,	// (0x000299a4) bg_popup_call3_rect_pane_g6

0xbe1b,	// (0x000299ac) bg_popup_call3_rect_pane_g7

0x9891,	// (0x00027422) mup_visualizer_osc_pane

0x9891,	// (0x00027422) mup_visualizer_spec_pane

0x4e92,	// (0x00022a23) call3_video_qcif_pane_ParamLimits

0x4e92,	// (0x00022a23) call3_video_qcif_pane

0x4ea4,	// (0x00022a35) call3_video_qcif_uncrop_pane_ParamLimits

0x4ea4,	// (0x00022a35) call3_video_qcif_uncrop_pane

0x4eb2,	// (0x00022a43) call3_video_subqcif_pane_ParamLimits

0x4eb2,	// (0x00022a43) call3_video_subqcif_pane

0x4ec4,	// (0x00022a55) call3_video_subqcif_uncrop_pane_ParamLimits

0x4ec4,	// (0x00022a55) call3_video_subqcif_uncrop_pane

0x4f1c,	// (0x00022aad) popup_call3_audio_in_window_g4_ParamLimits

0x4f1c,	// (0x00022aad) popup_call3_audio_in_window_g4

0x9891,	// (0x00027422) mup_spec_half_pane

0x9891,	// (0x00027422) mup_spec_half_pane_cp

0x9891,	// (0x00027422) mup_osc_middle_pane

0xa1e6,	// (0x00027d77) mup_visualizer_osc_pane_g1

0xbfed,	// (0x00029b7e) mup_spec_bar_pane_ParamLimits

0xbfed,	// (0x00029b7e) mup_spec_bar_pane

0xa1e6,	// (0x00027d77) mup_spec_bar_pane_g1

0xa1e6,	// (0x00027d77) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) mup_spec_bar_pane_g

0x288f,	// (0x00020420) aid_cale_week_size_cell_pane_ParamLimits

0x28a4,	// (0x00020435) bg_cale_heading_pane_ParamLimits

0xa126,	// (0x00027cb7) bg_cale_pane_cp01_ParamLimits

0x28c6,	// (0x00020457) cale_week_corner_pane_ParamLimits

0x28e0,	// (0x00020471) cale_week_day_heading_pane_ParamLimits

0x2902,	// (0x00020493) cale_week_scroll_pane_g1_ParamLimits

0x291f,	// (0x000204b0) cale_week_scroll_pane_g2_ParamLimits

0x2932,	// (0x000204c3) cale_week_scroll_pane_g3_ParamLimits

0x2945,	// (0x000204d6) cale_week_scroll_pane_g4_ParamLimits

0x2958,	// (0x000204e9) cale_week_scroll_pane_g5_ParamLimits

0x296b,	// (0x000204fc) cale_week_scroll_pane_g6_ParamLimits

0x297e,	// (0x0002050f) cale_week_scroll_pane_g7_ParamLimits

0x2993,	// (0x00020524) cale_week_scroll_pane_g8_ParamLimits

0x29a8,	// (0x00020539) cale_week_scroll_pane_g9_ParamLimits

0x29bb,	// (0x0002054c) cale_week_scroll_pane_g10_ParamLimits

0x29ce,	// (0x0002055f) cale_week_scroll_pane_g11_ParamLimits

0x29e1,	// (0x00020572) cale_week_scroll_pane_g12_ParamLimits

0x29f8,	// (0x00020589) cale_week_scroll_pane_g13_ParamLimits

0x2a13,	// (0x000205a4) cale_week_scroll_pane_g14_ParamLimits

0x2a2e,	// (0x000205bf) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0002ccbc) cale_week_scroll_pane_g_ParamLimits

0x2a5e,	// (0x000205ef) cale_week_time_pane_ParamLimits

0x2a73,	// (0x00020604) grid_cale_week_pane_ParamLimits

0xa143,	// (0x00027cd4) listscroll_cale_week_pane_t1

0xa155,	// (0x00027ce6) scroll_pane_cp08_ParamLimits

0x346a,	// (0x00020ffb) cale_month_corner_pane_ParamLimits

0xa4e4,	// (0x00028075) cale_month_pane_t1

0x3938,	// (0x000214c9) cale_month_week_pane_ParamLimits

0xb448,	// (0x00028fd9) popup_call_status_window_g1_ParamLimits

0x4098,	// (0x00021c29) popup_call_status_window_g2_ParamLimits

0x40a4,	// (0x00021c35) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0002ce3b) popup_call_status_window_g_ParamLimits

0xa8c1,	// (0x00028452) aid_call2_pane

0x45d9,	// (0x0002216a) msg_header_pane_g1

0x473d,	// (0x000222ce) postcard_address2_pane_ParamLimits

0x473d,	// (0x000222ce) postcard_address2_pane

0x4749,	// (0x000222da) postcard_message2_pane_ParamLimits

0x4749,	// (0x000222da) postcard_message2_pane

0x4e44,	// (0x000229d5) message2_row_pane_ParamLimits

0x4e44,	// (0x000229d5) message2_row_pane

0x4e5f,	// (0x000229f0) address2_row_pane_ParamLimits

0x4e5f,	// (0x000229f0) address2_row_pane

0xbfba,	// (0x00029b4b) postcard_message2_row_pane_g1

0xbfc2,	// (0x00029b53) postcard_message2_row_pane_t1

0xbfba,	// (0x00029b4b) address2_row_pane_g1

0xbfc2,	// (0x00029b53) address2_row_pane_t1

0x2c10,	// (0x000207a1) aid_size_cell_vorec

0x9cae,	// (0x0002783f) main_rss_pane

0xbfd0,	// (0x00029b61) rss_list_single_pane_ParamLimits

0xbfd0,	// (0x00029b61) rss_list_single_pane

0xbfde,	// (0x00029b6f) rss_list_single_pane_t1

0xbfde,	// (0x00029b6f) rss_list_single_pane_t2

0x0001,

0xf56d,	// (0x0002d0fe) rss_list_single_pane_t

0x9cae,	// (0x0002783f) main_camera2_pane

0x9cae,	// (0x0002783f) main_video2_pane

0x101f,	// (0x0001ebb0) cams_zoom_pane_cp2_ParamLimits

0x101f,	// (0x0001ebb0) cams_zoom_pane_cp2

0x101f,	// (0x0001ebb0) image2_vga_pane_ParamLimits

0x101f,	// (0x0001ebb0) image2_vga_pane

0xa8f5,	// (0x00028486) main_camera2_pane_g1_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g1

0xa8f5,	// (0x00028486) main_camera2_pane_g2_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g2

0xa8f5,	// (0x00028486) main_camera2_pane_g3_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g3

0xa8f5,	// (0x00028486) main_camera2_pane_g4_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g4

0xa8f5,	// (0x00028486) main_camera2_pane_g5_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g5

0xa8f5,	// (0x00028486) main_camera2_pane_g6_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g6

0xa8f5,	// (0x00028486) main_camera2_pane_g7_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g7

0xa8f5,	// (0x00028486) main_camera2_pane_g8_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g8

0x0008,

0xf589,	// (0x0002d11a) main_camera2_pane_g_ParamLimits

0xf589,	// (0x0002d11a) main_camera2_pane_g

0x1624,	// (0x0001f1b5) main_camera2_pane_t1_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t1

0x1624,	// (0x0001f1b5) main_camera2_pane_t2_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t2

0x1624,	// (0x0001f1b5) main_camera2_pane_t3_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t3

0x1624,	// (0x0001f1b5) main_camera2_pane_t4_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t4

0x0006,

0xf59c,	// (0x0002d12d) main_camera2_pane_t_ParamLimits

0xf59c,	// (0x0002d12d) main_camera2_pane_t

0x164c,	// (0x0001f1dd) cams_zoom_pane_cp4_ParamLimits

0x164c,	// (0x0001f1dd) cams_zoom_pane_cp4

0x1483,	// (0x0001f014) image2_cif_pane_ParamLimits

0x1483,	// (0x0001f014) image2_cif_pane

0x101f,	// (0x0001ebb0) image2_subqcif_pane_ParamLimits

0x101f,	// (0x0001ebb0) image2_subqcif_pane

0x165a,	// (0x0001f1eb) main_video2_pane_g1_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g1

0x165a,	// (0x0001f1eb) main_video2_pane_g2_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g2

0x165a,	// (0x0001f1eb) main_video2_pane_g3_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g3

0x165a,	// (0x0001f1eb) main_video2_pane_g4_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g4

0x165a,	// (0x0001f1eb) main_video2_pane_g5_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g5

0x165a,	// (0x0001f1eb) main_video2_pane_g6_ParamLimits

0x165a,	// (0x0001f1eb) main_video2_pane_g6

0x0005,

0xf5ab,	// (0x0002d13c) main_video2_pane_g_ParamLimits

0xf5ab,	// (0x0002d13c) main_video2_pane_g

0x1668,	// (0x0001f1f9) main_video2_pane_t1_ParamLimits

0x1668,	// (0x0001f1f9) main_video2_pane_t1

0x1668,	// (0x0001f1f9) main_video2_pane_t2_ParamLimits

0x1668,	// (0x0001f1f9) main_video2_pane_t2

0x1668,	// (0x0001f1f9) main_video2_pane_t3_ParamLimits

0x1668,	// (0x0001f1f9) main_video2_pane_t3

0x0002,

0xf5b8,	// (0x0002d149) main_video2_pane_t_ParamLimits

0xf5b8,	// (0x0002d149) main_video2_pane_t

0x4ce2,	// (0x00022873) call_muted_g2

0x0001,

0xf55f,	// (0x0002d0f0) call_muted_g

0x9cae,	// (0x0002783f) main_mup2_pane

0x9fae,	// (0x00027b3f) main_mup2_pane_g1_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g1

0x9fae,	// (0x00027b3f) main_mup2_pane_g2_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g2

0xd40d,	// (0x0002af9e) main_mup_pane_g13_cp1

0x102d,	// (0x0001ebbe) mup_volume_pane_cp1

0x9fae,	// (0x00027b3f) main_mup2_pane_g4_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g4

0x9fae,	// (0x00027b3f) main_mup2_pane_g5_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g5

0x9fae,	// (0x00027b3f) main_mup2_pane_g6_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g6

0x9fae,	// (0x00027b3f) main_mup2_pane_g7_ParamLimits

0x9fae,	// (0x00027b3f) main_mup2_pane_g7

0x0006,

0xf5bf,	// (0x0002d150) main_mup2_pane_g_ParamLimits

0xf5bf,	// (0x0002d150) main_mup2_pane_g

0x9fbc,	// (0x00027b4d) main_mup2_pane_t1_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t1

0x9fbc,	// (0x00027b4d) main_mup2_pane_t2_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t2

0x9fbc,	// (0x00027b4d) main_mup2_pane_t3_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t3

0x9fbc,	// (0x00027b4d) main_mup2_pane_t4_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t4

0x9fbc,	// (0x00027b4d) main_mup2_pane_t5_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t5

0x9fbc,	// (0x00027b4d) main_mup2_pane_t6_ParamLimits

0x9fbc,	// (0x00027b4d) main_mup2_pane_t6

0x0005,

0xf5ce,	// (0x0002d15f) main_mup2_pane_t_ParamLimits

0xf5ce,	// (0x0002d15f) main_mup2_pane_t

0xbae1,	// (0x00029672) mup2_visualizer_pane_ParamLimits

0xbae1,	// (0x00029672) mup2_visualizer_pane

0xbae1,	// (0x00029672) mup_progress_pane_cp_ParamLimits

0xbae1,	// (0x00029672) mup_progress_pane_cp

0x1692,	// (0x0001f223) mup_volume_pane_cp_ParamLimits

0x1692,	// (0x0001f223) mup_volume_pane_cp

0x9f92,	// (0x00027b23) mup2_visualizer_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) mup2_visualizer_pane_g1

0x9fa0,	// (0x00027b31) mup2_visualizer_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) mup2_visualizer_pane_g2

0x9fa0,	// (0x00027b31) mup2_visualizer_pane_g3_ParamLimits

0x9fa0,	// (0x00027b31) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0002cc35) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0002cc35) mup2_visualizer_pane_g

0xaf07,	// (0x00028a98) aid_size_cell_fmradio

0x146c,	// (0x0001effd) aid_height_parent_landcape

0xa342,	// (0x00027ed3) wml_content_pane_cp

0xa34a,	// (0x00027edb) wml_tabs_pane

0xa353,	// (0x00027ee4) popup_wml_miniature_window

0xa35b,	// (0x00027eec) scroll_pane_cp021

0xa36f,	// (0x00027f00) wml_content_pane_comp8

0x9cae,	// (0x0002783f) bg_popup_sub_pane_cp05

0xc092,	// (0x00029c23) popup_wml_miniature_window_g1

0xc09a,	// (0x00029c2b) wml_miniature_view_pane

0x4f9d,	// (0x00022b2e) aid_size_wml_view

0x4fa5,	// (0x00022b36) wml_miniature_view_pane_g1

0x4fae,	// (0x00022b3f) wml_miniature_view_pane_g2

0x4fb7,	// (0x00022b48) wml_miniature_view_pane_g3

0x4fbf,	// (0x00022b50) wml_miniature_view_pane_g4

0x4fc7,	// (0x00022b58) wml_miniature_view_pane_g5

0x4fcf,	// (0x00022b60) wml_miniature_view_pane_g6

0x4fd7,	// (0x00022b68) wml_miniature_view_pane_g7

0x4fdf,	// (0x00022b70) wml_miniature_view_pane_g8

0x0007,

0xf5db,	// (0x0002d16c) wml_miniature_view_pane_g

0xc0a2,	// (0x00029c33) background_graphic_ParamLimits

0xc0a2,	// (0x00029c33) background_graphic

0xc0ae,	// (0x00029c3f) wml_tabs_2_pane

0xc0b7,	// (0x00029c48) wml_tabs_3_pane_ParamLimits

0xc0b7,	// (0x00029c48) wml_tabs_3_pane

0xc0c9,	// (0x00029c5a) wml_tabs_4_pane_ParamLimits

0xc0c9,	// (0x00029c5a) wml_tabs_4_pane

0xc0df,	// (0x00029c70) wml_tabs_5_pane_ParamLimits

0xc0df,	// (0x00029c70) wml_tabs_5_pane

0xc0f9,	// (0x00029c8a) wml_tabs_pane_g2_ParamLimits

0xc0f9,	// (0x00029c8a) wml_tabs_pane_g2

0xc10e,	// (0x00029c9f) wml_tabs_pane_g3_ParamLimits

0xc10e,	// (0x00029c9f) wml_tabs_pane_g3

0xc123,	// (0x00029cb4) wml_tabs_2_active_pane_ParamLimits

0xc123,	// (0x00029cb4) wml_tabs_2_active_pane

0xc123,	// (0x00029cb4) wml_tabs_2_passive_pane_ParamLimits

0xc123,	// (0x00029cb4) wml_tabs_2_passive_pane

0x4fe7,	// (0x00022b78) wml_tabs_3_active_pane_cp_ParamLimits

0x4fe7,	// (0x00022b78) wml_tabs_3_active_pane_cp

0x4ff8,	// (0x00022b89) wml_tabs_3_passive_pane_ParamLimits

0x4ff8,	// (0x00022b89) wml_tabs_3_passive_pane

0x5009,	// (0x00022b9a) wml_tabs_3_passive_pane_cp_ParamLimits

0x5009,	// (0x00022b9a) wml_tabs_3_passive_pane_cp

0x501a,	// (0x00022bab) tabs_4_active_pane

0x5022,	// (0x00022bb3) tabs_4_passive_pane

0x502a,	// (0x00022bbb) tabs_4_passive_pane_cp

0x5032,	// (0x00022bc3) tabs_4_passive_pane_cp2

0x4bde,	// (0x0002276f) aid_height_text

0xbae1,	// (0x00029672) mup_volume_cont_pane_ParamLimits

0xbae1,	// (0x00029672) mup_volume_cont_pane

0x9891,	// (0x00027422) aid_size_cell_pinb

0x9891,	// (0x00027422) aid_size_list_pinb

0xbae1,	// (0x00029672) mup2_volume_cont_pane_ParamLimits

0xbae1,	// (0x00029672) mup2_volume_cont_pane

0x167c,	// (0x0001f20d) mup2_volume_cont_pane_g1_ParamLimits

0x167c,	// (0x0001f20d) mup2_volume_cont_pane_g1

0x0db1,	// (0x0001e942) aid_size_cell_touch_ParamLimits

0x0db1,	// (0x0001e942) aid_size_cell_touch

0x1037,	// (0x0001ebc8) touch_pane_ParamLimits

0x1037,	// (0x0001ebc8) touch_pane

0x102d,	// (0x0001ebbe) main_rss2_pane

0xc13a,	// (0x00029ccb) listscroll_rss2_pane

0xc143,	// (0x00029cd4) rss2_navigation_pane

0xc14b,	// (0x00029cdc) list_rss2_pane

0xa9da,	// (0x0002856b) scroll_pane_cp22

0xc153,	// (0x00029ce4) rss2_navigation_pane_g1

0xc15c,	// (0x00029ced) rss2_navigation_pane_g2

0xc164,	// (0x00029cf5) rss2_navigation_pane_g3

0x0002,

0xf5ec,	// (0x0002d17d) rss2_navigation_pane_g

0xc16c,	// (0x00029cfd) rss2_navigation_pane_t1

0x503a,	// (0x00022bcb) rss2_list_single_pane_ParamLimits

0x503a,	// (0x00022bcb) rss2_list_single_pane

0xc17a,	// (0x00029d0b) rss2_list_single_pane_t2

0xc188,	// (0x00029d19) rss2_list_single_pane_t3_ParamLimits

0xc188,	// (0x00029d19) rss2_list_single_pane_t3

0xc1a5,	// (0x00029d36) rss2_list_single_pane_t4

0x3f06,	// (0x00021a97) smil_status_pane_g1

0x1483,	// (0x0001f014) main_image2_pane_ParamLimits

0x1483,	// (0x0001f014) main_image2_pane

0xa8f5,	// (0x00028486) main_camera2_pane_g9_ParamLimits

0xa8f5,	// (0x00028486) main_camera2_pane_g9

0x1624,	// (0x0001f1b5) main_camera2_pane_t5_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t5

0x1638,	// (0x0001f1c9) main_camera2_pane_t6_ParamLimits

0x1638,	// (0x0001f1c9) main_camera2_pane_t6

0x506e,	// (0x00022bff) main_image2_pane_g1_ParamLimits

0x506e,	// (0x00022bff) main_image2_pane_g1

0x4910,	// (0x000224a1) smil2_video_pane_ParamLimits

0x4910,	// (0x000224a1) smil2_video_pane

0x0de5,	// (0x0001e976) aid_zoom_text_primary_cp

0x0fd4,	// (0x0001eb65) popup_preview_fixed_window

0xa2ab,	// (0x00027e3c) im_reading_pane_g1

0x1616,	// (0x0001f1a7) cams2_bc_adjust_pane_cp_ParamLimits

0x1616,	// (0x0001f1a7) cams2_bc_adjust_pane_cp

0x101f,	// (0x0001ebb0) cams2_bc_adjust_pane_ParamLimits

0x101f,	// (0x0001ebb0) cams2_bc_adjust_pane

0xd40d,	// (0x0002af9e) cams2_bc_adjust_pane_g1

0x102d,	// (0x0001ebbe) cams2_slider_pane

0xd40d,	// (0x0002af9e) cams2_slider_pane_g1

0xd40d,	// (0x0002af9e) cams2_slider_pane_g2

0x0006,

0xf5f3,	// (0x0002d184) cams2_slider_pane_g

0x10a8,	// (0x0001ec39) calc_display_pane_ParamLimits

0x10c6,	// (0x0001ec57) calc_paper_pane_ParamLimits

0x10e2,	// (0x0001ec73) grid_calc_pane_ParamLimits

0x13d7,	// (0x0001ef68) popup_clock_digital_window_t1_ParamLimits

0xaea4,	// (0x00028a35) main_image_pane_t1

0x108e,	// (0x0001ec1f) aid_size_cell_calc_ParamLimits

0x108e,	// (0x0001ec1f) aid_size_cell_calc

0x14b4,	// (0x0001f045) popup_blid_sat_info2_window_ParamLimits

0x14b4,	// (0x0001f045) popup_blid_sat_info2_window

0xc1b3,	// (0x00029d44) aid_size_cell_blid

0xbae1,	// (0x00029672) bg_popup_window_pane_cp07

0xc1d0,	// (0x00029d61) grid_popup_blid_pane

0xc1da,	// (0x00029d6b) heading_pane_cp05_ParamLimits

0xc1da,	// (0x00029d6b) heading_pane_cp05

0xc2a4,	// (0x00029e35) cell_popup_blid_pane_ParamLimits

0xc2a4,	// (0x00029e35) cell_popup_blid_pane

0xc2c8,	// (0x00029e59) cell_popup_blid_pane_g1

0xc2d0,	// (0x00029e61) cell_popup_blid_pane_t1

0xbae1,	// (0x00029672) mup2_indicator_pane_ParamLimits

0xbae1,	// (0x00029672) mup2_indicator_pane

0x9891,	// (0x00027422) mup2_visualizer_osc_pane

0xc06e,	// (0x00029bff) mup2_visualizer_spec_pane_ParamLimits

0xc06e,	// (0x00029bff) mup2_visualizer_spec_pane

0x9891,	// (0x00027422) mup2_spec_half_pane

0x9891,	// (0x00027422) mup2_spec_half_pane_cp

0xc2de,	// (0x00029e6f) mup2_spec_bar_pane_ParamLimits

0xc2de,	// (0x00029e6f) mup2_spec_bar_pane

0xa1e6,	// (0x00027d77) mup2_spec_bar_pane_g1

0xc2fd,	// (0x00029e8e) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0002d1aa) mup2_spec_bar_pane_g

0x9891,	// (0x00027422) mup2_osc_middle_pane

0xa1e6,	// (0x00027d77) mup2_visualizer_osc_pane_g1

0x98bb,	// (0x0002744c) popup_number_entry_window_t1_ParamLimits

0x98ce,	// (0x0002745f) popup_number_entry_window_t2_ParamLimits

0x98e0,	// (0x00027471) popup_number_entry_window_t3_ParamLimits

0x25fd,	// (0x0002018e) popup_number_entry_window_t5_ParamLimits

0x25fd,	// (0x0002018e) popup_number_entry_window_t5

0xf045,	// (0x0002cbd6) popup_number_entry_window_t_ParamLimits

0x98f2,	// (0x00027483) text_title_cp2_ParamLimits

0x1416,	// (0x0001efa7) aid_hotspot_pointer_text2_pane

0x1460,	// (0x0001eff1) main_viewer_pane_g9_ParamLimits

0x1460,	// (0x0001eff1) main_viewer_pane_g9

0xa4e4,	// (0x00028075) cale_month_pane_t1_ParamLimits

0xa521,	// (0x000280b2) bg_cale_pane_ParamLimits

0xa539,	// (0x000280ca) list_cale_pane_ParamLimits

0xa54a,	// (0x000280db) listscroll_cale_day_pane_t1

0xa55c,	// (0x000280ed) scroll_pane_cp09_ParamLimits

0x4332,	// (0x00021ec3) main_mup_eq_pane_t1_ParamLimits

0x4332,	// (0x00021ec3) main_mup_eq_pane_t1

0x434c,	// (0x00021edd) main_mup_eq_pane_t2_ParamLimits

0x434c,	// (0x00021edd) main_mup_eq_pane_t2

0x4364,	// (0x00021ef5) main_mup_eq_pane_t3_ParamLimits

0x4364,	// (0x00021ef5) main_mup_eq_pane_t3

0x437c,	// (0x00021f0d) main_mup_eq_pane_t4_ParamLimits

0x437c,	// (0x00021f0d) main_mup_eq_pane_t4

0x4394,	// (0x00021f25) main_mup_eq_pane_t5_ParamLimits

0x4394,	// (0x00021f25) main_mup_eq_pane_t5

0x43ac,	// (0x00021f3d) main_mup_eq_pane_t6_ParamLimits

0x43ac,	// (0x00021f3d) main_mup_eq_pane_t6

0x43c0,	// (0x00021f51) main_mup_eq_pane_t7_ParamLimits

0x43c0,	// (0x00021f51) main_mup_eq_pane_t7

0x43d4,	// (0x00021f65) main_mup_eq_pane_t8_ParamLimits

0x43d4,	// (0x00021f65) main_mup_eq_pane_t8

0x43ea,	// (0x00021f7b) main_mup_eq_pane_t9_ParamLimits

0x43ea,	// (0x00021f7b) main_mup_eq_pane_t9

0x4402,	// (0x00021f93) main_mup_eq_pane_t10_ParamLimits

0x4402,	// (0x00021f93) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0002cf3a) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0002cf3a) main_mup_eq_pane_t

0x44bf,	// (0x00022050) mup_equalizer_pane_cp5_ParamLimits

0x44d5,	// (0x00022066) mup_equalizer_pane_cp6_ParamLimits

0x44ed,	// (0x0002207e) mup_equalizer_pane_cp7_ParamLimits

0x102d,	// (0x0001ebbe) main_gallery_pane

0xc00c,	// (0x00029b9d) smil2_volume_pane

0xc014,	// (0x00029ba5) smil_status_volume_pane_g1_ParamLimits

0xc027,	// (0x00029bb8) smil_status_volume_pane_g2_ParamLimits

0x15f4,	// (0x0001f185) smil_status_volume_pane_g3_ParamLimits

0xf572,	// (0x0002d103) smil_status_volume_pane_g_ParamLimits

0xbae1,	// (0x00029672) bg_popup_window_pane_cp07_ParamLimits

0xc1bb,	// (0x00029d4c) blid_firmament_pane

0x9f84,	// (0x00027b15) aid_size_cell_gallery_ParamLimits

0x9f84,	// (0x00027b15) aid_size_cell_gallery

0x9f84,	// (0x00027b15) grid_gallery_pane_ParamLimits

0x9f84,	// (0x00027b15) grid_gallery_pane

0xad9c,	// (0x0002892d) cell_gallery_pane_ParamLimits

0xad9c,	// (0x0002892d) cell_gallery_pane

0x9f2b,	// (0x00027abc) bg_cell_gallery_focus_pane_ParamLimits

0x9f2b,	// (0x00027abc) bg_cell_gallery_focus_pane

0x9f92,	// (0x00027b23) cell_gallery_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) cell_gallery_pane_g1

0x9f92,	// (0x00027b23) cell_gallery_pane_g2_ParamLimits

0x9f92,	// (0x00027b23) cell_gallery_pane_g2

0x9f92,	// (0x00027b23) cell_gallery_pane_g3_ParamLimits

0x9f92,	// (0x00027b23) cell_gallery_pane_g3

0x9fa0,	// (0x00027b31) cell_gallery_pane_g4_ParamLimits

0x9fa0,	// (0x00027b31) cell_gallery_pane_g4

0x0003,

0xf61e,	// (0x0002d1af) cell_gallery_pane_g_ParamLimits

0xf61e,	// (0x0002d1af) cell_gallery_pane_g

0xc307,	// (0x00029e98) bg_cell_gallery_focus_pane_g1

0xc30f,	// (0x00029ea0) bg_cell_gallery_focus_pane_g2

0xc317,	// (0x00029ea8) bg_cell_gallery_focus_pane_g3

0xc31f,	// (0x00029eb0) bg_cell_gallery_focus_pane_g4

0xc327,	// (0x00029eb8) bg_cell_gallery_focus_pane_g5

0xc32f,	// (0x00029ec0) bg_cell_gallery_focus_pane_g6

0xc337,	// (0x00029ec8) bg_cell_gallery_focus_pane_g7

0xc33f,	// (0x00029ed0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf627,	// (0x0002d1b8) bg_cell_gallery_focus_pane_g

0xc347,	// (0x00029ed8) aid_firma_cardinal

0xc35b,	// (0x00029eec) blid_firmament_pane_t1

0xc372,	// (0x00029f03) blid_firmament_pane_t2

0xc389,	// (0x00029f1a) blid_firmament_pane_t3

0xc3a0,	// (0x00029f31) blid_firmament_pane_t4

0x0003,

0xf638,	// (0x0002d1c9) blid_firmament_pane_t

0xc3b7,	// (0x00029f48) blid_sat_info_pane

0xa1e6,	// (0x00027d77) blid_sat_info_pane_g1

0xa1e6,	// (0x00027d77) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) blid_sat_info_pane_g

0xc3c7,	// (0x00029f58) blid_sat_info_pane_t1

0xc3d5,	// (0x00029f66) smil2_volume_content_pane

0xc3de,	// (0x00029f6f) smil2_volume_pane_g1

0xa75f,	// (0x000282f0) smil2_volume_content_pane_g1

0xc3e6,	// (0x00029f77) smil2_volume_content_pane_g2

0xc3ef,	// (0x00029f80) smil2_volume_content_pane_g3

0xc3f8,	// (0x00029f89) smil2_volume_content_pane_g4

0xc401,	// (0x00029f92) smil2_volume_content_pane_g5

0xc40a,	// (0x00029f9b) smil2_volume_content_pane_g6

0xc413,	// (0x00029fa4) smil2_volume_content_pane_g7

0xc41c,	// (0x00029fad) smil2_volume_content_pane_g8

0xc425,	// (0x00029fb6) smil2_volume_content_pane_g9

0xc42e,	// (0x00029fbf) smil2_volume_content_pane_g10

0x0009,

0xf641,	// (0x0002d1d2) smil2_volume_content_pane_g

0x2af4,	// (0x00020685) cale_week_day_heading_pane_t1_ParamLimits

0x2b0f,	// (0x000206a0) cale_week_day_heading_pane_t2_ParamLimits

0x2b2a,	// (0x000206bb) cale_week_day_heading_pane_t3_ParamLimits

0x2b45,	// (0x000206d6) cale_week_day_heading_pane_t4_ParamLimits

0x2b60,	// (0x000206f1) cale_week_day_heading_pane_t5_ParamLimits

0x2b7b,	// (0x0002070c) cale_week_day_heading_pane_t6_ParamLimits

0x2b96,	// (0x00020727) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0002ccdd) cale_week_day_heading_pane_t_ParamLimits

0xa172,	// (0x00027d03) bg_cale_side_pane_ParamLimits

0x1239,	// (0x0001edca) cale_week_time_pane_t1_ParamLimits

0x1253,	// (0x0001ede4) cale_week_time_pane_t2_ParamLimits

0x126d,	// (0x0001edfe) cale_week_time_pane_t3_ParamLimits

0x1287,	// (0x0001ee18) cale_week_time_pane_t4_ParamLimits

0x12a1,	// (0x0001ee32) cale_week_time_pane_t5_ParamLimits

0x12bb,	// (0x0001ee4c) cale_week_time_pane_t6_ParamLimits

0x12db,	// (0x0001ee6c) cale_week_time_pane_t7_ParamLimits

0x12fd,	// (0x0001ee8e) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0002ccec) cale_week_time_pane_t_ParamLimits

0x2bb1,	// (0x00020742) cell_cale_week_pane_g2_ParamLimits

0xa172,	// (0x00027d03) bg_cale_side_pane_cp01_ParamLimits

0x3d2d,	// (0x000218be) cale_month_week_pane_t1_ParamLimits

0x3d46,	// (0x000218d7) cale_month_week_pane_t2_ParamLimits

0x3d5f,	// (0x000218f0) cale_month_week_pane_t3_ParamLimits

0x3d78,	// (0x00021909) cale_month_week_pane_t4_ParamLimits

0x3d93,	// (0x00021924) cale_month_week_pane_t5_ParamLimits

0x3db4,	// (0x00021945) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0002cdba) cale_month_week_pane_t_ParamLimits

0x132b,	// (0x0001eebc) cell_cale_month_pane_g1_ParamLimits

0x102d,	// (0x0001ebbe) main_cale_event_viewer_pane

0x9891,	// (0x00027422) listscroll_cale_event_viewer_pane

0xc437,	// (0x00029fc8) list_cale_ev_pane

0xc43f,	// (0x00029fd0) scroll_pane_cp023

0xc44b,	// (0x00029fdc) field_cale_ev_pane_ParamLimits

0xc44b,	// (0x00029fdc) field_cale_ev_pane

0xc469,	// (0x00029ffa) field_cale_ev_content_pane_ParamLimits

0xc469,	// (0x00029ffa) field_cale_ev_content_pane

0xc475,	// (0x0002a006) field_cale_ev_pane_g1_ParamLimits

0xc475,	// (0x0002a006) field_cale_ev_pane_g1

0xc481,	// (0x0002a012) field_cale_ev_pane_g2_ParamLimits

0xc481,	// (0x0002a012) field_cale_ev_pane_g2

0xc499,	// (0x0002a02a) field_cale_ev_pane_g3_ParamLimits

0xc499,	// (0x0002a02a) field_cale_ev_pane_g3

0x0002,

0xf656,	// (0x0002d1e7) field_cale_ev_pane_g_ParamLimits

0xf656,	// (0x0002d1e7) field_cale_ev_pane_g

0xc4b1,	// (0x0002a042) field_cale_ev_pane_t1_ParamLimits

0xc4b1,	// (0x0002a042) field_cale_ev_pane_t1

0xc4c8,	// (0x0002a059) field_cale_ev_content_pane_t1_ParamLimits

0xc4c8,	// (0x0002a059) field_cale_ev_content_pane_t1

0xad5a,	// (0x000288eb) bg_button_pane_cp01

0x287f,	// (0x00020410) listscroll_cale_week_pane_ParamLimits

0xa11d,	// (0x00027cae) popup_toolbar_window_cp01

0xa143,	// (0x00027cd4) listscroll_cale_week_pane_t1_ParamLimits

0x287f,	// (0x00020410) listscroll_cale_day_pane_ParamLimits

0xa11d,	// (0x00027cae) popup_toolbar_window_cp02

0xa54a,	// (0x000280db) listscroll_cale_day_pane_t1_ParamLimits

0x287f,	// (0x00020410) main_cale_month_pane_ParamLimits

0x15b7,	// (0x0001f148) popup_toolbar_window_cp03_ParamLimits

0x15b7,	// (0x0001f148) popup_toolbar_window_cp03

0x4826,	// (0x000223b7) main_image_pane_g2_ParamLimits

0x4826,	// (0x000223b7) main_image_pane_g2

0x4832,	// (0x000223c3) main_image_pane_g3_ParamLimits

0x4832,	// (0x000223c3) main_image_pane_g3

0x0002,

0xf43b,	// (0x0002cfcc) main_image_pane_g_ParamLimits

0xf43b,	// (0x0002cfcc) main_image_pane_g

0xaea4,	// (0x00028a35) main_image_pane_t1_ParamLimits

0x483e,	// (0x000223cf) main_image_pane_t2_ParamLimits

0x483e,	// (0x000223cf) main_image_pane_t2

0x4850,	// (0x000223e1) main_image_pane_t3_ParamLimits

0x4850,	// (0x000223e1) main_image_pane_t3

0x4862,	// (0x000223f3) main_image_pane_t4_ParamLimits

0x4862,	// (0x000223f3) main_image_pane_t4

0x0003,

0xf442,	// (0x0002cfd3) main_image_pane_t_ParamLimits

0xf442,	// (0x0002cfd3) main_image_pane_t

0x4874,	// (0x00022405) popup_image_details_window_cp01

0x487e,	// (0x0002240f) popup_toobar_trans_pane_cp01_ParamLimits

0x487e,	// (0x0002240f) popup_toobar_trans_pane_cp01

0x1507,	// (0x0001f098) popup_image_details_window_ParamLimits

0x1507,	// (0x0001f098) popup_image_details_window

0x1515,	// (0x0001f0a6) popup_image_focus_window

0x101f,	// (0x0001ebb0) camera2_autofocus_pane_ParamLimits

0x101f,	// (0x0001ebb0) camera2_autofocus_pane

0x9891,	// (0x00027422) bg_popup_sub_pane_cp06

0xc4e6,	// (0x0002a077) popup_image_focus_window_g1

0xc4ee,	// (0x0002a07f) popup_image_focus_window_g2

0xc4f6,	// (0x0002a087) popup_image_focus_window_g3

0xc4fe,	// (0x0002a08f) popup_image_focus_window_g4

0x0003,

0xf65d,	// (0x0002d1ee) popup_image_focus_window_g

0xc506,	// (0x0002a097) popup_image_focus_window_t1

0xc514,	// (0x0002a0a5) popup_image_focus_window_t2

0xc524,	// (0x0002a0b5) popup_image_focus_window_t3

0x0002,

0xf666,	// (0x0002d1f7) popup_image_focus_window_t

0x9f92,	// (0x00027b23) camera2_autofocus_pane_g1

0x9f2b,	// (0x00027abc) bg_tb_trans_pane_cp01

0xc532,	// (0x0002a0c3) popup_image_details_window_g1

0xc545,	// (0x0002a0d6) popup_image_details_window_g2

0x0002,

0xf678,	// (0x0002d209) popup_image_details_window_g

0xc56e,	// (0x0002a0ff) popup_image_details_window_t1

0xc580,	// (0x0002a111) popup_image_details_window_t2

0xc599,	// (0x0002a12a) popup_image_details_window_t3

0xc5ad,	// (0x0002a13e) popup_image_details_window_t4

0xc5c8,	// (0x0002a159) popup_image_details_window_t5

0x0004,

0xf67f,	// (0x0002d210) popup_image_details_window_t

0x9ff0,	// (0x00027b81) bg_calc_paper_pane_ParamLimits

0x102d,	// (0x0001ebbe) grid_highlight_pane_cp013

0x110e,	// (0x0001ec9f) list_calc_pane_ParamLimits

0x1120,	// (0x0001ecb1) scroll_pane_cp024

0xa004,	// (0x00027b95) bg_calc_display_pane_ParamLimits

0x1128,	// (0x0001ecb9) calc_display_pane_t1_ParamLimits

0x113d,	// (0x0001ecce) calc_display_pane_t2_ParamLimits

0x1152,	// (0x0001ece3) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0002cc5d) calc_display_pane_t_ParamLimits

0x11bb,	// (0x0001ed4c) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0002cc7a) cell_calc_pane_g

0x11c4,	// (0x0001ed55) cell_calc_pane_t1

0xa059,	// (0x00027bea) grid_highlight_pane_cp02_ParamLimits

0xa06f,	// (0x00027c00) toolbar_button_pane_cp01_ParamLimits

0xa06f,	// (0x00027c00) toolbar_button_pane_cp01

0xaee9,	// (0x00028a7a) temp_image_control_pane_ParamLimits

0xaee9,	// (0x00028a7a) temp_image_control_pane

0x1483,	// (0x0001f014) main_mp3_pane

0xc5e2,	// (0x0002a173) temp_image_control_pane_g1_ParamLimits

0xc5e2,	// (0x0002a173) temp_image_control_pane_g1

0xc5f0,	// (0x0002a181) temp_image_control_pane_g2_ParamLimits

0xc5f0,	// (0x0002a181) temp_image_control_pane_g2

0xc602,	// (0x0002a193) temp_image_control_pane_g3_ParamLimits

0xc602,	// (0x0002a193) temp_image_control_pane_g3

0x507a,	// (0x00022c0b) temp_image_control_pane_g4_ParamLimits

0x507a,	// (0x00022c0b) temp_image_control_pane_g4

0x0003,

0xf68a,	// (0x0002d21b) temp_image_control_pane_g_ParamLimits

0xf68a,	// (0x0002d21b) temp_image_control_pane_g

0xc5e2,	// (0x0002a173) main_mp3_pane_g1

0x508b,	// (0x00022c1c) main_mp3_pane_g2

0x0007,

0xf693,	// (0x0002d224) main_mp3_pane_g

0xc637,	// (0x0002a1c8) main_mp3_pane_t1

0x9fa0,	// (0x00027b31) main_camera_pane_g8_ParamLimits

0x9fa0,	// (0x00027b31) main_camera_pane_g8

0x2d4e,	// (0x000208df) main_video_pane_g7_ParamLimits

0x2d4e,	// (0x000208df) main_video_pane_g7

0x1624,	// (0x0001f1b5) main_camera2_pane_t7_ParamLimits

0x1624,	// (0x0001f1b5) main_camera2_pane_t7

0xa302,	// (0x00027e93) scroll_pane_cp025_ParamLimits

0xa302,	// (0x00027e93) scroll_pane_cp025

0xa316,	// (0x00027ea7) scroll_pane_cp026_ParamLimits

0xa316,	// (0x00027ea7) scroll_pane_cp026

0xa325,	// (0x00027eb6) wml_content_pane_ParamLimits

0x102d,	// (0x0001ebbe) main_touch_calib_pane

0x512f,	// (0x00022cc0) main_touch_calib_pane_g1

0x513b,	// (0x00022ccc) main_touch_calib_pane_g2

0x5147,	// (0x00022cd8) main_touch_calib_pane_g3

0x5153,	// (0x00022ce4) main_touch_calib_pane_g4

0x0003,

0xf6b1,	// (0x0002d242) main_touch_calib_pane_g

0x515f,	// (0x00022cf0) main_touch_calib_pane_t1

0x5178,	// (0x00022d09) main_touch_calib_pane_t2

0x0004,

0xf6ba,	// (0x0002d24b) main_touch_calib_pane_t

0xaaa9,	// (0x0002863a) mup_progress_pane_cp02

0xaade,	// (0x0002866f) navi_pane_g1

0xab99,	// (0x0002872a) navi_pane_mp_t3

0x1483,	// (0x0001f014) main_mp3_pane_ParamLimits

0x4df8,	// (0x00022989) navi_pane_ParamLimits

0xc5e2,	// (0x0002a173) main_mp3_pane_g1_ParamLimits

0x508b,	// (0x00022c1c) main_mp3_pane_g2_ParamLimits

0x5097,	// (0x00022c28) main_mp3_pane_g3_ParamLimits

0x5097,	// (0x00022c28) main_mp3_pane_g3

0x50a3,	// (0x00022c34) main_mp3_pane_g4_ParamLimits

0x50a3,	// (0x00022c34) main_mp3_pane_g4

0x9f92,	// (0x00027b23) main_mp3_pane_g5_ParamLimits

0x9f92,	// (0x00027b23) main_mp3_pane_g5

0xc612,	// (0x0002a1a3) main_mp3_pane_g6_ParamLimits

0xc612,	// (0x0002a1a3) main_mp3_pane_g6

0xc61f,	// (0x0002a1b0) main_mp3_pane_g7_ParamLimits

0xc61f,	// (0x0002a1b0) main_mp3_pane_g7

0xc62b,	// (0x0002a1bc) main_mp3_pane_g8_ParamLimits

0xc62b,	// (0x0002a1bc) main_mp3_pane_g8

0xf693,	// (0x0002d224) main_mp3_pane_g_ParamLimits

0x50af,	// (0x00022c40) main_mp3_pane_t2

0x50bf,	// (0x00022c50) main_mp3_pane_t3

0xc645,	// (0x0002a1d6) main_mp3_pane_t4

0xc653,	// (0x0002a1e4) main_mp3_pane_t5

0x0005,

0xf6a4,	// (0x0002d235) main_mp3_pane_t

0xc661,	// (0x0002a1f2) mup_progress_pane_cp01

0x0de5,	// (0x0001e976) aid_zoom_text_secondary2

0xc437,	// (0x00029fc8) list_cale_ev2_pane

0xc43f,	// (0x00029fd0) scroll_pane_cp023_ParamLimits

0x51d3,	// (0x00022d64) field_cale_ev2_pane_ParamLimits

0x51d3,	// (0x00022d64) field_cale_ev2_pane

0xc669,	// (0x0002a1fa) field_cale_ev2_pane_g1_ParamLimits

0xc669,	// (0x0002a1fa) field_cale_ev2_pane_g1

0xc675,	// (0x0002a206) field_cale_ev2_pane_g2_ParamLimits

0xc675,	// (0x0002a206) field_cale_ev2_pane_g2

0xc68d,	// (0x0002a21e) field_cale_ev2_pane_g3_ParamLimits

0xc68d,	// (0x0002a21e) field_cale_ev2_pane_g3

0x0003,

0xf6c5,	// (0x0002d256) field_cale_ev2_pane_g_ParamLimits

0xf6c5,	// (0x0002d256) field_cale_ev2_pane_g

0xc6b1,	// (0x0002a242) field_cale_ev2_pane_t1_ParamLimits

0xc6b1,	// (0x0002a242) field_cale_ev2_pane_t1

0xc6c8,	// (0x0002a259) field_cale_ev2_pane_t2_ParamLimits

0xc6c8,	// (0x0002a259) field_cale_ev2_pane_t2

0x0001,

0xf6ce,	// (0x0002d25f) field_cale_ev2_pane_t_ParamLimits

0xf6ce,	// (0x0002d25f) field_cale_ev2_pane_t

0x4707,	// (0x00022298) main_postcard_pane_g5_ParamLimits

0x4707,	// (0x00022298) main_postcard_pane_g5

0x4715,	// (0x000222a6) main_postcard_pane_g6_ParamLimits

0x4715,	// (0x000222a6) main_postcard_pane_g6

0x9f84,	// (0x00027b15) camera2_autofocus_pane_cp_ParamLimits

0x9f84,	// (0x00027b15) camera2_autofocus_pane_cp

0x1483,	// (0x0001f014) main_mup3_pane

0x523c,	// (0x00022dcd) main_mup3_pane_g1_ParamLimits

0x523c,	// (0x00022dcd) main_mup3_pane_g1

0x525d,	// (0x00022dee) main_mup3_pane_g2_ParamLimits

0x525d,	// (0x00022dee) main_mup3_pane_g2

0x52d7,	// (0x00022e68) main_mup3_pane_g3_ParamLimits

0x52d7,	// (0x00022e68) main_mup3_pane_g3

0x531a,	// (0x00022eab) main_mup3_pane_g4_ParamLimits

0x531a,	// (0x00022eab) main_mup3_pane_g4

0x535d,	// (0x00022eee) main_mup3_pane_g5_ParamLimits

0x535d,	// (0x00022eee) main_mup3_pane_g5

0x53a0,	// (0x00022f31) main_mup3_pane_g6_ParamLimits

0x53a0,	// (0x00022f31) main_mup3_pane_g6

0x9fa0,	// (0x00027b31) main_mup3_pane_g7_ParamLimits

0x9fa0,	// (0x00027b31) main_mup3_pane_g7

0x0007,

0xf6de,	// (0x0002d26f) main_mup3_pane_g_ParamLimits

0xf6de,	// (0x0002d26f) main_mup3_pane_g

0x5416,	// (0x00022fa7) main_mup3_pane_t1_ParamLimits

0x5416,	// (0x00022fa7) main_mup3_pane_t1

0x5485,	// (0x00023016) main_mup3_pane_t2_ParamLimits

0x5485,	// (0x00023016) main_mup3_pane_t2

0x554e,	// (0x000230df) main_mup3_pane_t4_ParamLimits

0x554e,	// (0x000230df) main_mup3_pane_t4

0x559c,	// (0x0002312d) main_mup3_pane_t5_ParamLimits

0x559c,	// (0x0002312d) main_mup3_pane_t5

0x564c,	// (0x000231dd) main_mup3_pane_t6_ParamLimits

0x564c,	// (0x000231dd) main_mup3_pane_t6

0x0005,

0xf6ef,	// (0x0002d280) main_mup3_pane_t_ParamLimits

0xf6ef,	// (0x0002d280) main_mup3_pane_t

0x56f8,	// (0x00023289) mup3_progress_pane_ParamLimits

0x56f8,	// (0x00023289) mup3_progress_pane

0x576c,	// (0x000232fd) popup_mup3_control_window_ParamLimits

0x576c,	// (0x000232fd) popup_mup3_control_window

0xc6dd,	// (0x0002a26e) popup_mup3_text_window

0x5785,	// (0x00023316) mup3_progress_pane_t1

0x57a4,	// (0x00023335) mup3_progress_pane_t2

0xc6e5,	// (0x0002a276) mup3_progress_pane_t3

0x0002,

0xf6fc,	// (0x0002d28d) mup3_progress_pane_t

0xc702,	// (0x0002a293) mup_progress_pane_cp03

0x9891,	// (0x00027422) bg_tb_trans_pane_cp04

0x57c3,	// (0x00023354) mup3_volume_pane

0x57cb,	// (0x0002335c) popup_mup3_control_window_g1

0x57d4,	// (0x00023365) mup3_volume_pane_g1

0x57dd,	// (0x0002336e) mup3_volume_pane_g2

0x57e6,	// (0x00023377) mup3_volume_pane_g3

0x0002,

0xf703,	// (0x0002d294) mup3_volume_pane_g

0x9891,	// (0x00027422) bg_tb_trans_pane_cp03

0xc712,	// (0x0002a2a3) popup_mup3_text_window_g1

0xc71a,	// (0x0002a2ab) popup_mup3_text_window_t1

0xa04c,	// (0x00027bdd) list_calc_item_pane_g1_ParamLimits

0xc131,	// (0x00029cc2) mup_volume_pane_cp_g1

0x5191,	// (0x00022d22) main_touch_calib_pane_t3

0x51a7,	// (0x00022d38) main_touch_calib_pane_t4

0x51bd,	// (0x00022d4e) main_touch_calib_pane_t5

0x0d9d,	// (0x0001e92e) aid_cell_size_toolbar2

0x0da5,	// (0x0001e936) aid_popup3_width_pane

0x0de5,	// (0x0001e976) aid_zoom_text_msg_primary

0x2c5a,	// (0x000207eb) vorec_t7

0xa010,	// (0x00027ba1) bg_calc_paper_pane_g1_ParamLimits

0xa01c,	// (0x00027bad) bg_calc_paper_pane_g2_ParamLimits

0xa028,	// (0x00027bb9) bg_calc_paper_pane_g3_ParamLimits

0xa040,	// (0x00027bd1) bg_calc_paper_pane_g4_ParamLimits

0xa034,	// (0x00027bc5) bg_calc_paper_pane_g5_ParamLimits

0x272e,	// (0x000202bf) bg_calc_paper_pane_g6_ParamLimits

0x273f,	// (0x000202d0) bg_calc_paper_pane_g7_ParamLimits

0x2750,	// (0x000202e1) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0002cc64) bg_calc_paper_pane_g_ParamLimits

0x2761,	// (0x000202f2) calc_bg_paper_pane_g9_ParamLimits

0x9f84,	// (0x00027b15) image_qvga_pane_ParamLimits

0x9f84,	// (0x00027b15) image_qvga_pane

0x9f09,	// (0x00027a9a) bg_popup_sub_pane_cp04_ParamLimits

0xae20,	// (0x000289b1) popup_mup_playback_window_g1_ParamLimits

0xae2c,	// (0x000289bd) popup_mup_playback_window_t1_ParamLimits

0xae41,	// (0x000289d2) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0002cfc7) popup_mup_playback_window_t_ParamLimits

0x9f92,	// (0x00027b23) main_mup2_pane_g3_ParamLimits

0x9f92,	// (0x00027b23) main_mup2_pane_g3

0x2f35,	// (0x00020ac6) popup_toolbar_window_cp04

0xb236,	// (0x00028dc7) popup_call2_audio_second_window_g3_ParamLimits

0xb236,	// (0x00028dc7) popup_call2_audio_second_window_g3

0xb64e,	// (0x000291df) popup_call2_audio_first_window_g4_ParamLimits

0xb64e,	// (0x000291df) popup_call2_audio_first_window_g4

0xbc83,	// (0x00029814) popup_call2_audio_in_window_g4_ParamLimits

0xbc83,	// (0x00029814) popup_call2_audio_in_window_g4

0x4819,	// (0x000223aa) aid_area_sk_bg_cut_ParamLimits

0x4819,	// (0x000223aa) aid_area_sk_bg_cut

0xae56,	// (0x000289e7) aid_area_sk_bg_cut_2_ParamLimits

0xae56,	// (0x000289e7) aid_area_sk_bg_cut_2

0x9891,	// (0x00027422) aid_placing_details_win

0x9891,	// (0x00027422) aid_placing_details_win_2

0x9f92,	// (0x00027b23) camera2_autofocus_pane_g1_ParamLimits

0x0fc5,	// (0x0001eb56) popup_fixed_preview_cale_window_ParamLimits

0x0fc5,	// (0x0001eb56) popup_fixed_preview_cale_window

0xac17,	// (0x000287a8) navi_slider_pane_g3

0xac20,	// (0x000287b1) navi_slider_pane_g4

0xac29,	// (0x000287ba) navi_slider_pane_g5

0xac17,	// (0x000287a8) navi_slider_pane_g6

0x13fd,	// (0x0001ef8e) navi_slider_pane_g7

0xad27,	// (0x000288b8) mup_scale_pane_g3

0xad30,	// (0x000288c1) mup_scale_pane_g4

0xad39,	// (0x000288ca) mup_scale_pane_g5

0x4505,	// (0x00022096) mup_scale_pane_g6

0x450e,	// (0x0002209f) mup_scale_pane_g7

0xd40d,	// (0x0002af9e) cams2_slider_pane_g3

0xd40d,	// (0x0002af9e) cams2_slider_pane_g4

0xd40d,	// (0x0002af9e) cams2_slider_pane_g5

0xd40d,	// (0x0002af9e) cams2_slider_pane_g6

0xd40d,	// (0x0002af9e) cams2_slider_pane_g7

0xa1e6,	// (0x00027d77) camera2_autofocus_pane_cp_g1

0xbf93,	// (0x00029b24) bg_popup_preview_window_pane_cp02_ParamLimits

0xbf93,	// (0x00029b24) bg_popup_preview_window_pane_cp02

0xc728,	// (0x0002a2b9) list_fp_cale_pane_ParamLimits

0xc728,	// (0x0002a2b9) list_fp_cale_pane

0xc734,	// (0x0002a2c5) popup_fixed_preview_cale_window_t1_ParamLimits

0xc734,	// (0x0002a2c5) popup_fixed_preview_cale_window_t1

0x57ef,	// (0x00023380) popup_fixed_preview_cale_window_t2_ParamLimits

0x57ef,	// (0x00023380) popup_fixed_preview_cale_window_t2

0x5804,	// (0x00023395) popup_fixed_preview_cale_window_t3_ParamLimits

0x5804,	// (0x00023395) popup_fixed_preview_cale_window_t3

0x0002,

0xf70a,	// (0x0002d29b) popup_fixed_preview_cale_window_t_ParamLimits

0xf70a,	// (0x0002d29b) popup_fixed_preview_cale_window_t

0x5819,	// (0x000233aa) list_single_fp_cale_pane_ParamLimits

0x5819,	// (0x000233aa) list_single_fp_cale_pane

0xc752,	// (0x0002a2e3) list_single_fp_cale_pane_g1_ParamLimits

0xc752,	// (0x0002a2e3) list_single_fp_cale_pane_g1

0xc75e,	// (0x0002a2ef) list_single_fp_cale_pane_g2_ParamLimits

0xc75e,	// (0x0002a2ef) list_single_fp_cale_pane_g2

0x0002,

0xf711,	// (0x0002d2a2) list_single_fp_cale_pane_g_ParamLimits

0xf711,	// (0x0002d2a2) list_single_fp_cale_pane_g

0xc777,	// (0x0002a308) list_single_fp_cale_pane_t1_ParamLimits

0xc777,	// (0x0002a308) list_single_fp_cale_pane_t1

0xc789,	// (0x0002a31a) list_single_fp_cale_pane_t2_ParamLimits

0xc789,	// (0x0002a31a) list_single_fp_cale_pane_t2

0x0001,

0xf718,	// (0x0002d2a9) list_single_fp_cale_pane_t_ParamLimits

0xf718,	// (0x0002d2a9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x102d,	// (0x0001ebbe) main_dialer_pane

0x9891,	// (0x00027422) aid_cell_size_keypad

0x9891,	// (0x00027422) dialer_ne_pane

0x9891,	// (0x00027422) grid_dialer_command_1_pane

0x9891,	// (0x00027422) grid_dialer_command_2_pane

0x9891,	// (0x00027422) grid_dialer_keypad_pane

0xbae1,	// (0x00029672) bg_popup_call_pane_cp06_ParamLimits

0xbae1,	// (0x00029672) bg_popup_call_pane_cp06

0xbae1,	// (0x00029672) dialer_ne_clear_pane_ParamLimits

0xbae1,	// (0x00029672) dialer_ne_clear_pane

0xa1e6,	// (0x00027d77) dialer_ne_pane_g1

0xa774,	// (0x00028305) dialer_ne_pane_t1_ParamLimits

0xa774,	// (0x00028305) dialer_ne_pane_t1

0xc7bc,	// (0x0002a34d) dialer_ne_pane_t2_ParamLimits

0xc7bc,	// (0x0002a34d) dialer_ne_pane_t2

0x582c,	// (0x000233bd) dialer_ne_pane_t3_ParamLimits

0x582c,	// (0x000233bd) dialer_ne_pane_t3

0x0002,

0xf71d,	// (0x0002d2ae) dialer_ne_pane_t_ParamLimits

0xf71d,	// (0x0002d2ae) dialer_ne_pane_t

0x582c,	// (0x000233bd) dialer_ne_pane_t3_copy1_ParamLimits

0x582c,	// (0x000233bd) dialer_ne_pane_t3_copy1

0xc7d9,	// (0x0002a36a) cell_dialer_keypad_pane_ParamLimits

0xc7d9,	// (0x0002a36a) cell_dialer_keypad_pane

0x9f2b,	// (0x00027abc) cell_dialer_command_1_pane_ParamLimits

0x9f2b,	// (0x00027abc) cell_dialer_command_1_pane

0xc7f0,	// (0x0002a381) cell_dialer_command_2_pane_ParamLimits

0xc7f0,	// (0x0002a381) cell_dialer_command_2_pane

0x9f2b,	// (0x00027abc) bg_button_pane_cp02_ParamLimits

0x9f2b,	// (0x00027abc) bg_button_pane_cp02

0x9f92,	// (0x00027b23) cell_dialer_keypad_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) cell_dialer_keypad_pane_g1

0x9f2b,	// (0x00027abc) bg_button_pane_cp03_ParamLimits

0x9f2b,	// (0x00027abc) bg_button_pane_cp03

0x9f92,	// (0x00027b23) cell_dialer_command_1_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) cell_dialer_command_1_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp04

0xa1e6,	// (0x00027d77) cell_dialer_command_2_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp06

0xa1e6,	// (0x00027d77) dialer_ne_clear_pane_g1

0xaaea,	// (0x0002867b) navi_pane_g2

0xab18,	// (0x000286a9) navi_pane_g3

0x0002,

0xf339,	// (0x0002ceca) navi_pane_g

0xaba7,	// (0x00028738) navi_pane_mv_g2

0xabce,	// (0x0002875f) navi_pane_mv_g5

0x42e3,	// (0x00021e74) navi_pane_mv_t1

0xa004,	// (0x00027b95) main_clock2_pane

0x9f84,	// (0x00027b15) main_clock2_list_pane_ParamLimits

0x9f84,	// (0x00027b15) main_clock2_list_pane

0x58a2,	// (0x00023433) main_clock2_pane_t1_ParamLimits

0x58a2,	// (0x00023433) main_clock2_pane_t1

0x58d0,	// (0x00023461) main_clock2_pane_t2_ParamLimits

0x58d0,	// (0x00023461) main_clock2_pane_t2

0x0004,

0xf729,	// (0x0002d2ba) main_clock2_pane_t_ParamLimits

0xf729,	// (0x0002d2ba) main_clock2_pane_t

0x5935,	// (0x000234c6) popup_clock_analogue_window_cp03_ParamLimits

0x5935,	// (0x000234c6) popup_clock_analogue_window_cp03

0x5953,	// (0x000234e4) popup_clock_digital_window_cp02_ParamLimits

0x5953,	// (0x000234e4) popup_clock_digital_window_cp02

0x5993,	// (0x00023524) main_clock2_list_single_pane_ParamLimits

0x5993,	// (0x00023524) main_clock2_list_single_pane

0xa1c4,	// (0x00027d55) list_highlight_pane_cp05

0xc833,	// (0x0002a3c4) main_clock2_list_single_pane_t1

0x2f35,	// (0x00020ac6) popup_toolbar_window_cp04_ParamLimits

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g2

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g3_ParamLimits

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g3

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g4_ParamLimits

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g4

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g5_ParamLimits

0x9fa0,	// (0x00027b31) camera2_autofocus_pane_g5

0x0004,

0xf66d,	// (0x0002d1fe) camera2_autofocus_pane_g_ParamLimits

0xf66d,	// (0x0002d1fe) camera2_autofocus_pane_g

0x51fd,	// (0x00022d8e) camera2_autofocus_pane_cp_g2

0x5205,	// (0x00022d96) camera2_autofocus_pane_cp_g3

0x520d,	// (0x00022d9e) camera2_autofocus_pane_cp_g4

0x5215,	// (0x00022da6) camera2_autofocus_pane_cp_g5

0x0004,

0xf6d3,	// (0x0002d264) camera2_autofocus_pane_cp_g

0x9891,	// (0x00027422) popup_dialer_spcha_window

0x9891,	// (0x00027422) bg_popup_sub_pane_cp07

0x9891,	// (0x00027422) list_spcha_pane

0xc841,	// (0x0002a3d2) list_single_spcha_pane_ParamLimits

0xc841,	// (0x0002a3d2) list_single_spcha_pane

0x9891,	// (0x00027422) list_highlight_pane_cp06

0xa721,	// (0x000282b2) list_single_spcha_pane_t1

0xba1f,	// (0x000295b0) popup_call2_audio_out_window_g4_ParamLimits

0xba1f,	// (0x000295b0) popup_call2_audio_out_window_g4

0x102d,	// (0x0001ebbe) main_imed2_pane

0x151d,	// (0x0001f0ae) popup_imed_adjust2_window

0x1530,	// (0x0001f0c1) popup_imed_trans_window_ParamLimits

0x1530,	// (0x0001f0c1) popup_imed_trans_window

0xc206,	// (0x00029d97) popup_blid_sat_info2_window_t1

0xc214,	// (0x00029da5) popup_blid_sat_info2_window_t2

0x000a,

0xf602,	// (0x0002d193) popup_blid_sat_info2_window_t

0x59a5,	// (0x00023536) aid_size_cell_colour_35

0x59bf,	// (0x00023550) aid_size_cell_colour_112

0x59d6,	// (0x00023567) aid_size_cell_effect

0x9f2b,	// (0x00027abc) bg_tb_trans_pane_cp02

0xa768,	// (0x000282f9) heading_imed_pane

0x59f0,	// (0x00023581) listscroll_imed_pane

0xc853,	// (0x0002a3e4) heading_imed_pane_g1

0xc85b,	// (0x0002a3ec) heading_imed_pane_t1

0xc869,	// (0x0002a3fa) grid_imed_colour_35_pane_ParamLimits

0xc869,	// (0x0002a3fa) grid_imed_colour_35_pane

0x59fc,	// (0x0002358d) grid_imed_effect_pane

0xc881,	// (0x0002a412) list_imed_aspect_pane

0x5a0c,	// (0x0002359d) scroll_pane_cp027_ParamLimits

0x5a0c,	// (0x0002359d) scroll_pane_cp027

0x5a18,	// (0x000235a9) cell_imed_effect_pane_ParamLimits

0x5a18,	// (0x000235a9) cell_imed_effect_pane

0xc889,	// (0x0002a41a) cell_imed_colour_pane_ParamLimits

0xc889,	// (0x0002a41a) cell_imed_colour_pane

0xc8cb,	// (0x0002a45c) cell_imed_colour_pane_g1_ParamLimits

0xc8cb,	// (0x0002a45c) cell_imed_colour_pane_g1

0xc8dc,	// (0x0002a46d) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8dc,	// (0x0002a46d) hgihlgiht_grid_pane_cp016

0x5a30,	// (0x000235c1) cell_imed_effect_pane_g1

0x5a38,	// (0x000235c9) grid_highlight_pane_cp017

0xc8ed,	// (0x0002a47e) list_imed_single_pane_ParamLimits

0xc8ed,	// (0x0002a47e) list_imed_single_pane

0x9891,	// (0x00027422) list_highlight_pane_cp07

0xc902,	// (0x0002a493) list_imed_aspect_pane_comp1_t1

0xad9c,	// (0x0002892d) bg_tb_trans_pane_cp05

0xc924,	// (0x0002a4b5) popup_imed_adjust2_window_g1

0xc94b,	// (0x0002a4dc) popup_imed_adjust2_window_t1

0xc963,	// (0x0002a4f4) slider_imed_adjust_pane

0xc977,	// (0x0002a508) slider_imed_adjust_pane_g1

0xc987,	// (0x0002a518) slider_imed_adjust_pane_g2

0xc997,	// (0x0002a528) slider_imed_adjust_pane_g3

0xc9a8,	// (0x0002a539) slider_imed_adjust_pane_g4

0x0003,

0xf746,	// (0x0002d2d7) slider_imed_adjust_pane_g

0x5a41,	// (0x000235d2) aid_size_cell_clipart2

0x5a4d,	// (0x000235de) grid_imed_clipart_pane

0xc9b9,	// (0x0002a54a) scroll_pane_cp031

0x5a57,	// (0x000235e8) cell_imed_clipart_pane_ParamLimits

0x5a57,	// (0x000235e8) cell_imed_clipart_pane

0x5a7a,	// (0x0002360b) cell_imed_clipart_pane_g1

0x9891,	// (0x00027422) grid_highlight_pane_cp014

0x5884,	// (0x00023415) main_clock2_pane_g1_ParamLimits

0x5884,	// (0x00023415) main_clock2_pane_g1

0x596f,	// (0x00023500) aid_call2_pane_cp10

0x5981,	// (0x00023512) aid_call_pane_cp10

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g1

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g2

0x16a8,	// (0x0001f239) popup_clock_analogue_window_cp10_g3

0x16a8,	// (0x0001f239) popup_clock_analogue_window_cp10_g4

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g5

0x0004,

0xf734,	// (0x0002d2c5) popup_clock_analogue_window_cp10_g

0x16be,	// (0x0001f24f) popup_clock_analogue_window_cp10_t1

0x16dd,	// (0x0001f26e) clock_digital_number_pane_cp10_ParamLimits

0x16dd,	// (0x0001f26e) clock_digital_number_pane_cp10

0x16f7,	// (0x0001f288) clock_digital_number_pane_cp11_ParamLimits

0x16f7,	// (0x0001f288) clock_digital_number_pane_cp11

0x1711,	// (0x0001f2a2) clock_digital_number_pane_cp12_ParamLimits

0x1711,	// (0x0001f2a2) clock_digital_number_pane_cp12

0x172b,	// (0x0001f2bc) clock_digital_number_pane_cp13_ParamLimits

0x172b,	// (0x0001f2bc) clock_digital_number_pane_cp13

0x1745,	// (0x0001f2d6) clock_digital_separator_pane_cp10_ParamLimits

0x1745,	// (0x0001f2d6) clock_digital_separator_pane_cp10

0x175f,	// (0x0001f2f0) popup_clock_digital_window_cp02_t1_ParamLimits

0x175f,	// (0x0001f2f0) popup_clock_digital_window_cp02_t1

0x9f01,	// (0x00027a92) clock_digital_number_pane_cp10_g1

0x9f01,	// (0x00027a92) clock_digital_number_pane_cp10_g2

0x0001,

0xf74f,	// (0x0002d2e0) clock_digital_number_pane_cp10_g

0x9f01,	// (0x00027a92) clock_digital_separator_pane_cp10_g1

0x9f01,	// (0x00027a92) clock_digital_separator_pane_g2_cp10

0xabd6,	// (0x00028767) navi_pane_vded_g4

0xabdf,	// (0x00028770) navi_pane_vded_g5

0xabe8,	// (0x00028779) navi_pane_vded_t1

0x102d,	// (0x0001ebbe) main_vded_pane

0x5a83,	// (0x00023614) main_vded_pane_g1

0x5a8f,	// (0x00023620) main_vded_pane_g2

0x5a99,	// (0x0002362a) main_vded_pane_g3

0x0002,

0xf754,	// (0x0002d2e5) main_vded_pane_g

0x5aa3,	// (0x00023634) main_vded_pane_t1

0x5ab1,	// (0x00023642) main_vded_pane_t2

0x0001,

0xf75b,	// (0x0002d2ec) main_vded_pane_t

0x5abf,	// (0x00023650) vded_slider_pane

0x5ac9,	// (0x0002365a) vded_video_pane

0xc9c1,	// (0x0002a552) vded_video_pane_g1

0x5ad3,	// (0x00023664) vded_video_pane_g2

0xa1e6,	// (0x00027d77) vded_video_pane_g3

0x0002,

0xf760,	// (0x0002d2f1) vded_video_pane_g

0xc9cb,	// (0x0002a55c) vded_slider_pane_g1

0xc131,	// (0x00029cc2) vded_slider_pane_g2

0xc9d4,	// (0x0002a565) vded_slider_pane_g3

0xc9dd,	// (0x0002a56e) vded_slider_pane_g4

0xc9e6,	// (0x0002a577) vded_slider_pane_g5

0x0004,

0xf767,	// (0x0002d2f8) vded_slider_pane_g

0x575e,	// (0x000232ef) mup3_rocker_pane_ParamLimits

0x575e,	// (0x000232ef) mup3_rocker_pane

0x5adc,	// (0x0002366d) mup3_control_keys_pane_g1

0x5ae4,	// (0x00023675) mup3_control_keys_pane_g2

0x5aec,	// (0x0002367d) mup3_control_keys_pane_g3

0x5af4,	// (0x00023685) mup3_control_keys_pane_g4

0x0003,

0xf772,	// (0x0002d303) mup3_control_keys_pane_g

0x0fed,	// (0x0001eb7e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fed,	// (0x0001eb7e) popup_toolbar2_fixed_window_cp01

0x5778,	// (0x00023309) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5778,	// (0x00023309) popup_toolbar2_fixed_window_cp02

0xb3a8,	// (0x00028f39) popup_call2_audio_second_window_t4_ParamLimits

0xb3a8,	// (0x00028f39) popup_call2_audio_second_window_t4

0xb8e4,	// (0x00029475) popup_call2_audio_first_window_t6_ParamLimits

0xb8e4,	// (0x00029475) popup_call2_audio_first_window_t6

0xbb30,	// (0x000296c1) popup_call2_audio_out_window_t6_ParamLimits

0xbb30,	// (0x000296c1) popup_call2_audio_out_window_t6

0x102d,	// (0x0001ebbe) main_vitu_pane

0x9f84,	// (0x00027b15) aid_size_cell_itu_ParamLimits

0x9f84,	// (0x00027b15) aid_size_cell_itu

0x9f84,	// (0x00027b15) bg_popup_window_pane_cp08_ParamLimits

0x9f84,	// (0x00027b15) bg_popup_window_pane_cp08

0x9f84,	// (0x00027b15) field_vitu_entry_pane_ParamLimits

0x9f84,	// (0x00027b15) field_vitu_entry_pane

0x9f84,	// (0x00027b15) grid_vitu_function_pane_ParamLimits

0x9f84,	// (0x00027b15) grid_vitu_function_pane

0x9f84,	// (0x00027b15) grid_vitu_itu_pane_ParamLimits

0x9f84,	// (0x00027b15) grid_vitu_itu_pane

0x9f84,	// (0x00027b15) cell_vitu_itu_pane_ParamLimits

0x9f84,	// (0x00027b15) cell_vitu_itu_pane

0x9f84,	// (0x00027b15) cell_vitu_function_pane_ParamLimits

0x9f84,	// (0x00027b15) cell_vitu_function_pane

0x9f2b,	// (0x00027abc) bg_popup_sub_pane_cp08_ParamLimits

0x9f2b,	// (0x00027abc) bg_popup_sub_pane_cp08

0xa200,	// (0x00027d91) field_vitu_entry_pane_t1_ParamLimits

0xa200,	// (0x00027d91) field_vitu_entry_pane_t1

0xc7bc,	// (0x0002a34d) field_vitu_entry_pane_t2_ParamLimits

0xc7bc,	// (0x0002a34d) field_vitu_entry_pane_t2

0x0001,

0xf77b,	// (0x0002d30c) field_vitu_entry_pane_t_ParamLimits

0xf77b,	// (0x0002d30c) field_vitu_entry_pane_t

0xbae1,	// (0x00029672) bg_button_pane_cp05_ParamLimits

0xbae1,	// (0x00029672) bg_button_pane_cp05

0xc9ef,	// (0x0002a580) cell_vitu_itu_pane_g1

0xadaa,	// (0x0002893b) cell_vitu_itu_pane_t1_ParamLimits

0xadaa,	// (0x0002893b) cell_vitu_itu_pane_t1

0xadaa,	// (0x0002893b) cell_vitu_itu_pane_t2_ParamLimits

0xadaa,	// (0x0002893b) cell_vitu_itu_pane_t2

0x0002,

0xf780,	// (0x0002d311) cell_vitu_itu_pane_t_ParamLimits

0xf780,	// (0x0002d311) cell_vitu_itu_pane_t

0x9891,	// (0x00027422) bg_button_pane_cp07

0xa1e6,	// (0x00027d77) cell_vitu_function_pane_g1

0x1106,	// (0x0001ec97) main_calc_pane_g1

0x0dd9,	// (0x0001e96a) aid_visual_content_pane

0x102d,	// (0x0001ebbe) main_vradio_pane

0x9fa0,	// (0x00027b31) main_vradio_pane_g1_ParamLimits

0x9fa0,	// (0x00027b31) main_vradio_pane_g1

0x9fa0,	// (0x00027b31) main_vradio_pane_g2_ParamLimits

0x9fa0,	// (0x00027b31) main_vradio_pane_g2

0x0001,

0xf787,	// (0x0002d318) main_vradio_pane_g_ParamLimits

0xf787,	// (0x0002d318) main_vradio_pane_g

0xa774,	// (0x00028305) main_vradio_pane_t1_ParamLimits

0xa774,	// (0x00028305) main_vradio_pane_t1

0xa774,	// (0x00028305) main_vradio_pane_t2_ParamLimits

0xa774,	// (0x00028305) main_vradio_pane_t2

0xa774,	// (0x00028305) main_vradio_pane_t3_ParamLimits

0xa774,	// (0x00028305) main_vradio_pane_t3

0x0002,

0xf78c,	// (0x0002d31d) main_vradio_pane_t_ParamLimits

0xf78c,	// (0x0002d31d) main_vradio_pane_t

0x9f84,	// (0x00027b15) vradio_rocker_control_pane_ParamLimits

0x9f84,	// (0x00027b15) vradio_rocker_control_pane

0x9f84,	// (0x00027b15) vradio_station_info_pane_ParamLimits

0x9f84,	// (0x00027b15) vradio_station_info_pane

0x9f2b,	// (0x00027abc) vradio_frequency_info_pane_ParamLimits

0x9f2b,	// (0x00027abc) vradio_frequency_info_pane

0xa1e6,	// (0x00027d77) vradio_station_info_pane_g1

0xadaa,	// (0x0002893b) vradio_station_info_pane_t1_ParamLimits

0xadaa,	// (0x0002893b) vradio_station_info_pane_t1

0xa774,	// (0x00028305) vradio_station_info_pane_t2_ParamLimits

0xa774,	// (0x00028305) vradio_station_info_pane_t2

0x0001,

0xf793,	// (0x0002d324) vradio_station_info_pane_t_ParamLimits

0xf793,	// (0x0002d324) vradio_station_info_pane_t

0x9891,	// (0x00027422) vradio_tuning_pane

0x5b04,	// (0x00023695) vradio_rocker_control_pane_g1

0xca0b,	// (0x0002a59c) vradio_rocker_control_pane_g2

0x5b0c,	// (0x0002369d) vradio_rocker_control_pane_g3

0x5b14,	// (0x000236a5) vradio_rocker_control_pane_g4

0x5b1c,	// (0x000236ad) vradio_rocker_control_pane_g5

0x0004,

0xf798,	// (0x0002d329) vradio_rocker_control_pane_g

0xa1e6,	// (0x00027d77) vradio_frequency_info_pane_g1

0xa200,	// (0x00027d91) vradio_frequency_info_pane_t1_ParamLimits

0xa200,	// (0x00027d91) vradio_frequency_info_pane_t1

0x5b24,	// (0x000236b5) vradio_tuning_pane_g1

0x5b31,	// (0x000236c2) vradio_tuning_pane_t1

0x0df5,	// (0x0001e986) area_side_right_pane_ParamLimits

0x0df5,	// (0x0001e986) area_side_right_pane

0xbf5a,	// (0x00029aeb) status_small_pane_g1

0xbf62,	// (0x00029af3) status_small_pane_g2

0xbf6b,	// (0x00029afc) status_small_pane_g3

0xbf74,	// (0x00029b05) status_small_pane_g4

0x0003,

0xf564,	// (0x0002d0f5) status_small_pane_g

0xbf7d,	// (0x00029b0e) status_small_pane_t1

0x102d,	// (0x0001ebbe) main_video3_pane

0xca13,	// (0x0002a5a4) cams_zoom_vslider_pane

0xca1b,	// (0x0002a5ac) image3_wide_pane_ParamLimits

0xca1b,	// (0x0002a5ac) image3_wide_pane

0xca35,	// (0x0002a5c6) image3_wide_small_pane

0xca41,	// (0x0002a5d2) main_video3_pane_g1_ParamLimits

0xca41,	// (0x0002a5d2) main_video3_pane_g1

0xca5d,	// (0x0002a5ee) main_video3_pane_g2_ParamLimits

0xca5d,	// (0x0002a5ee) main_video3_pane_g2

0x0001,

0xf7a3,	// (0x0002d334) main_video3_pane_g_ParamLimits

0xf7a3,	// (0x0002d334) main_video3_pane_g

0xca79,	// (0x0002a60a) main_video3_pane_t1_ParamLimits

0xca79,	// (0x0002a60a) main_video3_pane_t1

0xcaa4,	// (0x0002a635) main_video3_pane_t2_ParamLimits

0xcaa4,	// (0x0002a635) main_video3_pane_t2

0xcacf,	// (0x0002a660) main_video3_pane_t3_ParamLimits

0xcacf,	// (0x0002a660) main_video3_pane_t3

0x0002,

0xf7a8,	// (0x0002d339) main_video3_pane_t_ParamLimits

0xf7a8,	// (0x0002d339) main_video3_pane_t

0xcafc,	// (0x0002a68d) cams_zoom_vslider_pane_g1

0xcb05,	// (0x0002a696) cams_zoom_vslider_pane_g2

0x0001,

0xf7af,	// (0x0002d340) cams_zoom_vslider_pane_g

0xcb0d,	// (0x0002a69e) small_slider_vertical_pane

0xa1e6,	// (0x00027d77) small_slider_vertical_pane_g1

0xa1e6,	// (0x00027d77) small_slider_vertical_pane_g2

0xcb15,	// (0x0002a6a6) small_slider_vertical_pane_g3

0x0002,

0xf7b4,	// (0x0002d345) small_slider_vertical_pane_g

0x102d,	// (0x0001ebbe) main_hwr_training_pane

0xcb1e,	// (0x0002a6af) hwr_training_instruct_pane_ParamLimits

0xcb1e,	// (0x0002a6af) hwr_training_instruct_pane

0x5b40,	// (0x000236d1) hwr_training_navi_pane_ParamLimits

0x5b40,	// (0x000236d1) hwr_training_navi_pane

0x5b5a,	// (0x000236eb) hwr_training_write_pane_ParamLimits

0x5b5a,	// (0x000236eb) hwr_training_write_pane

0x9891,	// (0x00027422) bg_frame_shadow_pane

0xcb55,	// (0x0002a6e6) hwr_training_write_pane_g1

0xcb5d,	// (0x0002a6ee) hwr_training_write_pane_g2

0xcb65,	// (0x0002a6f6) hwr_training_write_pane_g3

0xcb6d,	// (0x0002a6fe) hwr_training_write_pane_g4

0xcb75,	// (0x0002a706) hwr_training_write_pane_g5

0xcb7d,	// (0x0002a70e) hwr_training_write_pane_g6

0xcb85,	// (0x0002a716) hwr_training_write_pane_g7

0x0006,

0xf7bb,	// (0x0002d34c) hwr_training_write_pane_g

0x1780,	// (0x0001f311) hwr_training_navi_pane_g1_ParamLimits

0x1780,	// (0x0001f311) hwr_training_navi_pane_g1

0x1792,	// (0x0001f323) hwr_training_navi_pane_g2_ParamLimits

0x1792,	// (0x0001f323) hwr_training_navi_pane_g2

0x17a4,	// (0x0001f335) hwr_training_navi_pane_g3_ParamLimits

0x17a4,	// (0x0001f335) hwr_training_navi_pane_g3

0x17b4,	// (0x0001f345) hwr_training_navi_pane_g4_ParamLimits

0x17b4,	// (0x0001f345) hwr_training_navi_pane_g4

0x0004,

0xf7ca,	// (0x0002d35b) hwr_training_navi_pane_g_ParamLimits

0xf7ca,	// (0x0002d35b) hwr_training_navi_pane_g

0x17ce,	// (0x0001f35f) hwr_training_navi_pane_t1

0x5b92,	// (0x00023723) list_single_hwr_training_instruct_pane_ParamLimits

0x5b92,	// (0x00023723) list_single_hwr_training_instruct_pane

0xcb8d,	// (0x0002a71e) list_single_hwr_training_instruct_pane_t1

0xc307,	// (0x00029e98) bg_frame_shadow_pane_g1

0xcb9c,	// (0x0002a72d) bg_frame_shadow_pane_g2

0xcba4,	// (0x0002a735) bg_frame_shadow_pane_g3

0xcbac,	// (0x0002a73d) bg_frame_shadow_pane_g4

0xcbb4,	// (0x0002a745) bg_frame_shadow_pane_g5

0xcbbc,	// (0x0002a74d) bg_frame_shadow_pane_g6

0xcbc4,	// (0x0002a755) bg_frame_shadow_pane_g7

0xa0b3,	// (0x00027c44) bg_frame_shadow_pane_g8

0x0007,

0xf7d5,	// (0x0002d366) bg_frame_shadow_pane_g

0x102d,	// (0x0001ebbe) main_video_tele_dialer_pane

0x17dc,	// (0x0001f36d) aid_size_cell_video_keypad_ParamLimits

0x17dc,	// (0x0001f36d) aid_size_cell_video_keypad

0x17ec,	// (0x0001f37d) grid_video_dialer_keypad_pane_ParamLimits

0x17ec,	// (0x0001f37d) grid_video_dialer_keypad_pane

0x1820,	// (0x0001f3b1) video_down_pane_cp_ParamLimits

0x1820,	// (0x0001f3b1) video_down_pane_cp

0x182e,	// (0x0001f3bf) cell_video_dialer_keypad_pane_ParamLimits

0x182e,	// (0x0001f3bf) cell_video_dialer_keypad_pane

0xcbcc,	// (0x0002a75d) bg_button_pane_cp08_ParamLimits

0xcbcc,	// (0x0002a75d) bg_button_pane_cp08

0x5bd7,	// (0x00023768) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5bd7,	// (0x00023768) cell_video_dialer_keypad_pane_g1

0x5752,	// (0x000232e3) mup3_rocker2_pane_ParamLimits

0x5752,	// (0x000232e3) mup3_rocker2_pane

0xa1e6,	// (0x00027d77) mup3_rocker2_pane_g1

0x1491,	// (0x0001f022) main_dialer2_pane

0x102d,	// (0x0001ebbe) main_mp4_pane

0x1861,	// (0x0001f3f2) main_mp4_pane_g1_ParamLimits

0x1861,	// (0x0001f3f2) main_mp4_pane_g1

0x186f,	// (0x0001f400) main_mp4_pane_g2_ParamLimits

0x186f,	// (0x0001f400) main_mp4_pane_g2

0x187d,	// (0x0001f40e) main_mp4_pane_g3_ParamLimits

0x187d,	// (0x0001f40e) main_mp4_pane_g3

0x18c2,	// (0x0001f453) main_mp4_pane_g4_ParamLimits

0x18c2,	// (0x0001f453) main_mp4_pane_g4

0x18f0,	// (0x0001f481) main_mp4_pane_g5_ParamLimits

0x18f0,	// (0x0001f481) main_mp4_pane_g5

0x0007,

0xf7f5,	// (0x0002d386) main_mp4_pane_g_ParamLimits

0xf7f5,	// (0x0002d386) main_mp4_pane_g

0x1964,	// (0x0001f4f5) main_mp4_pane_t1_ParamLimits

0x1964,	// (0x0001f4f5) main_mp4_pane_t1

0x19c0,	// (0x0001f551) main_mp4_pane_t2_ParamLimits

0x19c0,	// (0x0001f551) main_mp4_pane_t2

0xcbd8,	// (0x0002a769) main_mp4_pane_t3_ParamLimits

0xcbd8,	// (0x0002a769) main_mp4_pane_t3

0x1a12,	// (0x0001f5a3) main_mp4_pane_t4_ParamLimits

0x1a12,	// (0x0001f5a3) main_mp4_pane_t4

0x0003,

0xf806,	// (0x0002d397) main_mp4_pane_t_ParamLimits

0xf806,	// (0x0002d397) main_mp4_pane_t

0x1a56,	// (0x0001f5e7) mp4_progress_pane_ParamLimits

0x1a56,	// (0x0001f5e7) mp4_progress_pane

0x1aa0,	// (0x0001f631) mp4_rocker_pane_ParamLimits

0x1aa0,	// (0x0001f631) mp4_rocker_pane

0xcc06,	// (0x0002a797) mp4_progress_pane_t1

0xcc1f,	// (0x0002a7b0) mp4_progress_pane_t2

0x0001,

0xf80f,	// (0x0002d3a0) mp4_progress_pane_t

0xcc38,	// (0x0002a7c9) mup_progress_pane_cp04

0xd40d,	// (0x0002af9e) mp4_rocker_pane_g1

0x1ac0,	// (0x0001f651) aid_cell_size_keypad2_ParamLimits

0x1ac0,	// (0x0001f651) aid_cell_size_keypad2

0x1ad0,	// (0x0001f661) dialer2_ne_pane_ParamLimits

0x1ad0,	// (0x0001f661) dialer2_ne_pane

0x1ade,	// (0x0001f66f) grid_dialer2_keypad_pane_ParamLimits

0x1ade,	// (0x0001f66f) grid_dialer2_keypad_pane

0xc084,	// (0x00029c15) bg_popup_call_pane_cp07_ParamLimits

0xc084,	// (0x00029c15) bg_popup_call_pane_cp07

0x5c11,	// (0x000237a2) dialer2_ne_pane_t1_ParamLimits

0x5c11,	// (0x000237a2) dialer2_ne_pane_t1

0x1aee,	// (0x0001f67f) cell_dialer2_keypad_pane_ParamLimits

0x1aee,	// (0x0001f67f) cell_dialer2_keypad_pane

0xcc5d,	// (0x0002a7ee) bg_button_pane_pane_cp04_ParamLimits

0xcc5d,	// (0x0002a7ee) bg_button_pane_pane_cp04

0x5c36,	// (0x000237c7) cell_dialer2_keypad_pane_g1_ParamLimits

0x5c36,	// (0x000237c7) cell_dialer2_keypad_pane_g1

0x2df7,	// (0x00020988) aid_placing_vt_set_content_ParamLimits

0x2df7,	// (0x00020988) aid_placing_vt_set_content

0x2e23,	// (0x000209b4) aid_placing_vt_set_title_ParamLimits

0x2e23,	// (0x000209b4) aid_placing_vt_set_title

0x102d,	// (0x0001ebbe) main_image3_pane

0x1b35,	// (0x0001f6c6) area_side_right_pane_cp01_ParamLimits

0x1b35,	// (0x0001f6c6) area_side_right_pane_cp01

0x1b62,	// (0x0001f6f3) main_image3_pane_g1_ParamLimits

0x1b62,	// (0x0001f6f3) main_image3_pane_g1

0x1b70,	// (0x0001f701) main_image3_pane_g2_ParamLimits

0x1b70,	// (0x0001f701) main_image3_pane_g2

0x1b89,	// (0x0001f71a) main_image3_pane_g3_ParamLimits

0x1b89,	// (0x0001f71a) main_image3_pane_g3

0x1ba2,	// (0x0001f733) main_image3_pane_g4_ParamLimits

0x1ba2,	// (0x0001f733) main_image3_pane_g4

0x0003,

0xf81e,	// (0x0002d3af) main_image3_pane_g_ParamLimits

0xf81e,	// (0x0002d3af) main_image3_pane_g

0x1bbb,	// (0x0001f74c) main_image3_pane_t1_ParamLimits

0x1bbb,	// (0x0001f74c) main_image3_pane_t1

0x1be0,	// (0x0001f771) main_image3_pane_t2_ParamLimits

0x1be0,	// (0x0001f771) main_image3_pane_t2

0x1bff,	// (0x0001f790) main_image3_pane_t3_ParamLimits

0x1bff,	// (0x0001f790) main_image3_pane_t3

0x0003,

0xf827,	// (0x0002d3b8) main_image3_pane_t_ParamLimits

0xf827,	// (0x0002d3b8) main_image3_pane_t

0x9f84,	// (0x00027b15) grid_sctrl_middle_pane_cp01_ParamLimits

0x9f84,	// (0x00027b15) grid_sctrl_middle_pane_cp01

0x5c9e,	// (0x0002382f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5c9e,	// (0x0002382f) cell_sctrl_middle_pane_cp01

0x5caf,	// (0x00023840) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5caf,	// (0x00023840) cell_sctrl_middle_pane_cp01_g1

0x102d,	// (0x0001ebbe) main_call4_pane

0x1c60,	// (0x0001f7f1) aid_size_button_call4_ParamLimits

0x1c60,	// (0x0001f7f1) aid_size_button_call4

0x1c96,	// (0x0001f827) call4_windows_pane_ParamLimits

0x1c96,	// (0x0001f827) call4_windows_pane

0x1cab,	// (0x0001f83c) grid_call4_button_pane_ParamLimits

0x1cab,	// (0x0001f83c) grid_call4_button_pane

0x5cc8,	// (0x00023859) call4_windows_conf_pane

0x5cdd,	// (0x0002386e) popup_call4_audio_first_window_ParamLimits

0x5cdd,	// (0x0002386e) popup_call4_audio_first_window

0x5d2d,	// (0x000238be) popup_call4_audio_second_window_ParamLimits

0x5d2d,	// (0x000238be) popup_call4_audio_second_window

0x5d46,	// (0x000238d7) popup_call4_audio_wait_window_ParamLimits

0x5d46,	// (0x000238d7) popup_call4_audio_wait_window

0x1ccd,	// (0x0001f85e) cell_call4_button_pane_ParamLimits

0x1ccd,	// (0x0001f85e) cell_call4_button_pane

0x5d54,	// (0x000238e5) bg_button_pane_cp09_ParamLimits

0x5d54,	// (0x000238e5) bg_button_pane_cp09

0x1cf0,	// (0x0001f881) cell_call4_button_pane_g1_ParamLimits

0x1cf0,	// (0x0001f881) cell_call4_button_pane_g1

0x5d60,	// (0x000238f1) cell_call4_button_pane_t1_ParamLimits

0x5d60,	// (0x000238f1) cell_call4_button_pane_t1

0xcc71,	// (0x0002a802) popup_call4_audio_conf_window_ParamLimits

0xcc71,	// (0x0002a802) popup_call4_audio_conf_window

0x5785,	// (0x00023316) mup3_progress_pane_t1_ParamLimits

0x57a4,	// (0x00023335) mup3_progress_pane_t2_ParamLimits

0xc6e5,	// (0x0002a276) mup3_progress_pane_t3_ParamLimits

0xf6fc,	// (0x0002d28d) mup3_progress_pane_t_ParamLimits

0xc702,	// (0x0002a293) mup_progress_pane_cp03_ParamLimits

0x5afc,	// (0x0002368d) mup3_control_keys_pane_g4_copy1

0x1a84,	// (0x0001f615) mp4_rocker2_pane_ParamLimits

0x1a84,	// (0x0001f615) mp4_rocker2_pane

0xcc85,	// (0x0002a816) mp4_rocker2_pane_g1

0xcc8d,	// (0x0002a81e) mp4_rocker2_pane_g2

0x1d2f,	// (0x0001f8c0) mp4_rocker2_pane_g3

0x1d37,	// (0x0001f8c8) mp4_rocker2_pane_g4

0x1d3f,	// (0x0001f8d0) mp4_rocker2_pane_g5

0x0004,

0xf830,	// (0x0002d3c1) mp4_rocker2_pane_g

0x102d,	// (0x0001ebbe) main_camera4_pane

0x102d,	// (0x0001ebbe) main_video4_pane

0x17fc,	// (0x0001f38d) main_video_tele_dialer_pane_t1_ParamLimits

0x17fc,	// (0x0001f38d) main_video_tele_dialer_pane_t1

0x180e,	// (0x0001f39f) main_video_tele_dialer_pane_t2_ParamLimits

0x180e,	// (0x0001f39f) main_video_tele_dialer_pane_t2

0x0001,

0xf7e6,	// (0x0002d377) main_video_tele_dialer_pane_t_ParamLimits

0xf7e6,	// (0x0002d377) main_video_tele_dialer_pane_t

0x1d5f,	// (0x0001f8f0) cam4_autofocus_pane_ParamLimits

0x1d5f,	// (0x0001f8f0) cam4_autofocus_pane

0x1d79,	// (0x0001f90a) cam4_image_uncrop_pane_ParamLimits

0x1d79,	// (0x0001f90a) cam4_image_uncrop_pane

0x1d90,	// (0x0001f921) cam4_indicators_pane_ParamLimits

0x1d90,	// (0x0001f921) cam4_indicators_pane

0x1dac,	// (0x0001f93d) main_camera4_pane_g1_ParamLimits

0x1dac,	// (0x0001f93d) main_camera4_pane_g1

0x1db8,	// (0x0001f949) main_camera4_pane_g2_ParamLimits

0x1db8,	// (0x0001f949) main_camera4_pane_g2

0x1db8,	// (0x0001f949) main_camera4_pane_g3_ParamLimits

0x1db8,	// (0x0001f949) main_camera4_pane_g3

0x1dc4,	// (0x0001f955) main_camera4_pane_g4_ParamLimits

0x1dc4,	// (0x0001f955) main_camera4_pane_g4

0x1dd0,	// (0x0001f961) main_camera4_pane_g5_ParamLimits

0x1dd0,	// (0x0001f961) main_camera4_pane_g5

0x0005,

0xf83b,	// (0x0002d3cc) main_camera4_pane_g_ParamLimits

0xf83b,	// (0x0002d3cc) main_camera4_pane_g

0x1dea,	// (0x0001f97b) main_camera4_pane_t1_ParamLimits

0x1dea,	// (0x0001f97b) main_camera4_pane_t1

0xdee6,	// (0x0002ba77) bg_tb_trans_pane_cp06

0x1e16,	// (0x0001f9a7) cam4_indicators_pane_g1

0x1e27,	// (0x0001f9b8) cam4_indicators_pane_g2

0x0002,

0xf856,	// (0x0002d3e7) cam4_indicators_pane_g

0x1e3f,	// (0x0001f9d0) cam4_indicators_pane_t1

0x1e69,	// (0x0001f9fa) main_video4_pane_g1_ParamLimits

0x1e69,	// (0x0001f9fa) main_video4_pane_g1

0x1e75,	// (0x0001fa06) main_video4_pane_g2_ParamLimits

0x1e75,	// (0x0001fa06) main_video4_pane_g2

0x1e81,	// (0x0001fa12) main_video4_pane_g3_ParamLimits

0x1e81,	// (0x0001fa12) main_video4_pane_g3

0x1e8d,	// (0x0001fa1e) main_video4_pane_g4_ParamLimits

0x1e8d,	// (0x0001fa1e) main_video4_pane_g4

0x0004,

0xf85d,	// (0x0002d3ee) main_video4_pane_g_ParamLimits

0xf85d,	// (0x0002d3ee) main_video4_pane_g

0x1ead,	// (0x0001fa3e) vid4_indicators_pane_ParamLimits

0x1ead,	// (0x0001fa3e) vid4_indicators_pane

0x1ecc,	// (0x0001fa5d) video4_image_uncrop_cif_pane_ParamLimits

0x1ecc,	// (0x0001fa5d) video4_image_uncrop_cif_pane

0x1edb,	// (0x0001fa6c) video4_image_uncrop_nhd_pane_ParamLimits

0x1edb,	// (0x0001fa6c) video4_image_uncrop_nhd_pane

0x1d79,	// (0x0001f90a) video4_image_uncrop_vga_pane_ParamLimits

0x1d79,	// (0x0001f90a) video4_image_uncrop_vga_pane

0x1483,	// (0x0001f014) bg_tb_trans_pane_cp07

0x1ef0,	// (0x0001fa81) vid4_indicators_pane_g1

0x1f04,	// (0x0001fa95) vid4_indicators_pane_g2

0x1f18,	// (0x0001faa9) vid4_indicators_pane_g3

0x0004,

0xf868,	// (0x0002d3f9) vid4_indicators_pane_g

0x1f45,	// (0x0001fad6) vid4_indicators_pane_t1

0x5d96,	// (0x00023927) cam4_autofocus_pane_g1

0x5d9e,	// (0x0002392f) cam4_autofocus_pane_g2

0x5da6,	// (0x00023937) cam4_autofocus_pane_g3

0x0002,

0xf873,	// (0x0002d404) cam4_autofocus_pane_g

0x5dae,	// (0x0002393f) cam4_autofocus_pane_g3_copy1

0x5bbb,	// (0x0002374c) video_down_pane_cp_t1

0x5bc9,	// (0x0002375a) video_down_pane_cp_t2

0x0001,

0xf7eb,	// (0x0002d37c) video_down_pane_cp_t

0x101f,	// (0x0001ebb0) popup_vitu2_window_ParamLimits

0x101f,	// (0x0001ebb0) popup_vitu2_window

0x1f5c,	// (0x0001faed) aid_size_cell2_itu2_ParamLimits

0x1f5c,	// (0x0001faed) aid_size_cell2_itu2

0x1f7e,	// (0x0001fb0f) aid_size_cell_itu2_ParamLimits

0x1f7e,	// (0x0001fb0f) aid_size_cell_itu2

0x1fc2,	// (0x0001fb53) bg_popup_window_pane_cp09_ParamLimits

0x1fc2,	// (0x0001fb53) bg_popup_window_pane_cp09

0x1fd0,	// (0x0001fb61) field_vitu2_entry_pane_ParamLimits

0x1fd0,	// (0x0001fb61) field_vitu2_entry_pane

0x1ff0,	// (0x0001fb81) grid_vitu2_function_pane_ParamLimits

0x1ff0,	// (0x0001fb81) grid_vitu2_function_pane

0x2034,	// (0x0001fbc5) grid_vitu2_itu_pane_ParamLimits

0x2034,	// (0x0001fbc5) grid_vitu2_itu_pane

0x20ac,	// (0x0001fc3d) cell_vitu2_itu_pane_ParamLimits

0x20ac,	// (0x0001fc3d) cell_vitu2_itu_pane

0x20c5,	// (0x0001fc56) cell_vitu2_function_pane_ParamLimits

0x20c5,	// (0x0001fc56) cell_vitu2_function_pane

0xcc95,	// (0x0002a826) bg_popup_call_pane_cp08_ParamLimits

0xcc95,	// (0x0002a826) bg_popup_call_pane_cp08

0xccac,	// (0x0002a83d) field_vitu2_entry_pane_g1

0xccb8,	// (0x0002a849) field_vitu2_entry_pane_g2

0x0002,

0xf87a,	// (0x0002d40b) field_vitu2_entry_pane_g

0x5db6,	// (0x00023947) field_vitu2_entry_pane_t1_ParamLimits

0x5db6,	// (0x00023947) field_vitu2_entry_pane_t1

0xccc4,	// (0x0002a855) field_vitu2_entry_pane_t2_ParamLimits

0xccc4,	// (0x0002a855) field_vitu2_entry_pane_t2

0x0001,

0xf881,	// (0x0002d412) field_vitu2_entry_pane_t_ParamLimits

0xf881,	// (0x0002d412) field_vitu2_entry_pane_t

0x1616,	// (0x0001f1a7) bg_button_pane_cp010_ParamLimits

0x1616,	// (0x0001f1a7) bg_button_pane_cp010

0x2106,	// (0x0001fc97) cell_vitu2_itu_pane_g1

0x212c,	// (0x0001fcbd) cell_vitu2_itu_pane_t1_ParamLimits

0x212c,	// (0x0001fcbd) cell_vitu2_itu_pane_t1

0x2178,	// (0x0001fd09) cell_vitu2_itu_pane_t2_ParamLimits

0x2178,	// (0x0001fd09) cell_vitu2_itu_pane_t2

0x0002,

0xf88b,	// (0x0002d41c) cell_vitu2_itu_pane_t_ParamLimits

0xf88b,	// (0x0002d41c) cell_vitu2_itu_pane_t

0x1483,	// (0x0001f014) bg_button_pane_cp011

0x2240,	// (0x0001fdd1) cell_vitu2_function_pane_g1

0x102d,	// (0x0001ebbe) main_myfav_hc_pane

0x1c41,	// (0x0001f7d2) popup_image3_note_pane_ParamLimits

0x1c41,	// (0x0001f7d2) popup_image3_note_pane

0x1c4f,	// (0x0001f7e0) popup_image3_tool_bar_pane_ParamLimits

0x1c4f,	// (0x0001f7e0) popup_image3_tool_bar_pane

0x21ee,	// (0x0001fd7f) cell_vitu2_itu_pane_t3_ParamLimits

0x21ee,	// (0x0001fd7f) cell_vitu2_itu_pane_t3

0x9891,	// (0x00027422) bg_popup_trans_pane

0xcce9,	// (0x0002a87a) grid_image3_tool_bar_pane

0xccf3,	// (0x0002a884) bg_popup_trans_pane_g1

0xa40b,	// (0x00027f9c) bg_popup_trans_pane_g2

0xccfb,	// (0x0002a88c) bg_popup_trans_pane_g3

0xcd03,	// (0x0002a894) bg_popup_trans_pane_g4

0xcd0b,	// (0x0002a89c) bg_popup_trans_pane_g5

0xcd13,	// (0x0002a8a4) bg_popup_trans_pane_g6

0xcd1b,	// (0x0002a8ac) bg_popup_trans_pane_g7

0xcd23,	// (0x0002a8b4) bg_popup_trans_pane_g8

0xa3eb,	// (0x00027f7c) bg_popup_trans_pane_g9

0x0008,

0xf892,	// (0x0002d423) bg_popup_trans_pane_g

0xcd2b,	// (0x0002a8bc) cell_image3_tool_bar_pane_ParamLimits

0xcd2b,	// (0x0002a8bc) cell_image3_tool_bar_pane

0xa1e6,	// (0x00027d77) cell_image3_tool_bar_pane_g1

0x9891,	// (0x00027422) bg_popup_trans_pane_cp1

0xcd3f,	// (0x0002a8d0) popup_image3_note_pane_t1

0xcd4d,	// (0x0002a8de) popup_image3_note_pane_t2

0xcd5b,	// (0x0002a8ec) popup_image3_note_pane_t3

0x0002,

0xf8a5,	// (0x0002d436) popup_image3_note_pane_t

0xcd69,	// (0x0002a8fa) popup_image3_note_pane_t3_copy1

0x5de9,	// (0x0002397a) bg_myfav_hc_instruction_pane_ParamLimits

0x5de9,	// (0x0002397a) bg_myfav_hc_instruction_pane

0x5e01,	// (0x00023992) cell_myfav_contact_pane_ParamLimits

0x5e01,	// (0x00023992) cell_myfav_contact_pane

0x5e1b,	// (0x000239ac) cell_myfav_contact_pane_cp1_ParamLimits

0x5e1b,	// (0x000239ac) cell_myfav_contact_pane_cp1

0x5e33,	// (0x000239c4) cell_myfav_contact_pane_cp2_ParamLimits

0x5e33,	// (0x000239c4) cell_myfav_contact_pane_cp2

0x5e4b,	// (0x000239dc) cell_myfav_contact_pane_cp3_ParamLimits

0x5e4b,	// (0x000239dc) cell_myfav_contact_pane_cp3

0x5e62,	// (0x000239f3) cell_myfav_contact_pane_cp4_ParamLimits

0x5e62,	// (0x000239f3) cell_myfav_contact_pane_cp4

0x5e78,	// (0x00023a09) cell_myfav_contact_pane_cp5_ParamLimits

0x5e78,	// (0x00023a09) cell_myfav_contact_pane_cp5

0x5e8c,	// (0x00023a1d) cell_myfav_contact_pane_cp6_ParamLimits

0x5e8c,	// (0x00023a1d) cell_myfav_contact_pane_cp6

0x5ea0,	// (0x00023a31) cell_myfav_contact_pane_cp7_ParamLimits

0x5ea0,	// (0x00023a31) cell_myfav_contact_pane_cp7

0xcd77,	// (0x0002a908) listscroll_gen_pane_cp05

0x5eb8,	// (0x00023a49) main_myfav_hc_pane_g1_ParamLimits

0x5eb8,	// (0x00023a49) main_myfav_hc_pane_g1

0x5ece,	// (0x00023a5f) main_myfav_hc_pane_g2_ParamLimits

0x5ece,	// (0x00023a5f) main_myfav_hc_pane_g2

0x0002,

0xf8ac,	// (0x0002d43d) main_myfav_hc_pane_g_ParamLimits

0xf8ac,	// (0x0002d43d) main_myfav_hc_pane_g

0x5efe,	// (0x00023a8f) main_myfav_hc_pane_t1_ParamLimits

0x5efe,	// (0x00023a8f) main_myfav_hc_pane_t1

0xcd80,	// (0x0002a911) main_myfav_hc_pane_t2_ParamLimits

0xcd80,	// (0x0002a911) main_myfav_hc_pane_t2

0xcd92,	// (0x0002a923) main_myfav_hc_pane_t3_ParamLimits

0xcd92,	// (0x0002a923) main_myfav_hc_pane_t3

0x5f15,	// (0x00023aa6) main_myfav_hc_pane_t4_ParamLimits

0x5f15,	// (0x00023aa6) main_myfav_hc_pane_t4

0x0004,

0xf8b3,	// (0x0002d444) main_myfav_hc_pane_t_ParamLimits

0xf8b3,	// (0x0002d444) main_myfav_hc_pane_t

0xa1e6,	// (0x00027d77) bg_myfav_hc_instruction_pane_g1

0xcda4,	// (0x0002a935) cell_myfav_contact_pane_g1_ParamLimits

0xcda4,	// (0x0002a935) cell_myfav_contact_pane_g1

0xcda4,	// (0x0002a935) cell_myfav_contact_pane_g2_ParamLimits

0xcda4,	// (0x0002a935) cell_myfav_contact_pane_g2

0xcdb0,	// (0x0002a941) cell_myfav_contact_pane_g3_ParamLimits

0xcdb0,	// (0x0002a941) cell_myfav_contact_pane_g3

0x9fa0,	// (0x00027b31) cell_myfav_contact_pane_g4_ParamLimits

0x9fa0,	// (0x00027b31) cell_myfav_contact_pane_g4

0xcdbd,	// (0x0002a94e) cell_myfav_contact_pane_g5_ParamLimits

0xcdbd,	// (0x0002a94e) cell_myfav_contact_pane_g5

0x0004,

0xf8be,	// (0x0002d44f) cell_myfav_contact_pane_g_ParamLimits

0xf8be,	// (0x0002d44f) cell_myfav_contact_pane_g

0x5ee6,	// (0x00023a77) main_myfav_hc_pane_g3_ParamLimits

0x5ee6,	// (0x00023a77) main_myfav_hc_pane_g3

0x0f29,	// (0x0001eaba) popup_adpt_find_window

0x5f3f,	// (0x00023ad0) afind_page_pane_ParamLimits

0x5f3f,	// (0x00023ad0) afind_page_pane

0x5f4c,	// (0x00023add) aid_size_cell_afind_ParamLimits

0x5f4c,	// (0x00023add) aid_size_cell_afind

0x5f66,	// (0x00023af7) bg_popup_sub_pane_cp09_ParamLimits

0x5f66,	// (0x00023af7) bg_popup_sub_pane_cp09

0x5f77,	// (0x00023b08) find_pane_cp01_ParamLimits

0x5f77,	// (0x00023b08) find_pane_cp01

0xcdc9,	// (0x0002a95a) grid_afind_control_pane_ParamLimits

0xcdc9,	// (0x0002a95a) grid_afind_control_pane

0x5f8a,	// (0x00023b1b) grid_afind_pane_ParamLimits

0x5f8a,	// (0x00023b1b) grid_afind_pane

0x5fa6,	// (0x00023b37) cell_afind_pane_ParamLimits

0x5fa6,	// (0x00023b37) cell_afind_pane

0xa1e6,	// (0x00027d77) afind_page_pane_g1

0x5fee,	// (0x00023b7f) afind_page_pane_g2

0x5ff6,	// (0x00023b87) afind_page_pane_g3

0x0002,

0xf8c9,	// (0x0002d45a) afind_page_pane_g

0x5ffe,	// (0x00023b8f) afind_page_pane_t1

0xcdef,	// (0x0002a980) cell_afind_grid_control_pane_ParamLimits

0xcdef,	// (0x0002a980) cell_afind_grid_control_pane

0xcc5d,	// (0x0002a7ee) bg_button_pane_cp69_ParamLimits

0xcc5d,	// (0x0002a7ee) bg_button_pane_cp69

0x600c,	// (0x00023b9d) cell_afind_pane_g1_ParamLimits

0x600c,	// (0x00023b9d) cell_afind_pane_g1

0x6019,	// (0x00023baa) cell_afind_pane_t1_ParamLimits

0x6019,	// (0x00023baa) cell_afind_pane_t1

0xa1f0,	// (0x00027d81) bg_button_pane_cp72

0xcdfe,	// (0x0002a98f) cell_afind_grid_control_pane_g1

0x4940,	// (0x000224d1) aid_image_placing_area_ParamLimits

0x4940,	// (0x000224d1) aid_image_placing_area

0x9f92,	// (0x00027b23) field_vitu_entry_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) field_vitu_entry_pane_g1

0x9f92,	// (0x00027b23) field_vitu_entry_pane_g2_ParamLimits

0x9f92,	// (0x00027b23) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0002cd52) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0002cd52) field_vitu_entry_pane_g

0xc9ef,	// (0x0002a580) cell_vitu_itu_pane_g1_ParamLimits

0xc7bc,	// (0x0002a34d) cell_vitu_itu_pane_t3_ParamLimits

0xc7bc,	// (0x0002a34d) cell_vitu_itu_pane_t3

0xcc06,	// (0x0002a797) mp4_progress_pane_t1_ParamLimits

0xcc1f,	// (0x0002a7b0) mp4_progress_pane_t2_ParamLimits

0xf80f,	// (0x0002d3a0) mp4_progress_pane_t_ParamLimits

0xcc38,	// (0x0002a7c9) mup_progress_pane_cp04_ParamLimits

0x5f29,	// (0x00023aba) main_myfav_hc_pane_t5_ParamLimits

0x5f29,	// (0x00023aba) main_myfav_hc_pane_t5

0x0ded,	// (0x0001e97e) aid_zoom_text_primary

0x0f29,	// (0x0001eaba) popup_adpt_find_window_ParamLimits

0x1483,	// (0x0001f014) main_cam_set_pane

0x1d9e,	// (0x0001f92f) cam4_zoom_pane_ParamLimits

0x1d9e,	// (0x0001f92f) cam4_zoom_pane

0x602b,	// (0x00023bbc) main_cam_set_pane_g1_ParamLimits

0x602b,	// (0x00023bbc) main_cam_set_pane_g1

0x6039,	// (0x00023bca) main_cam_set_pane_g2_ParamLimits

0x6039,	// (0x00023bca) main_cam_set_pane_g2

0x0001,

0xf8d0,	// (0x0002d461) main_cam_set_pane_g_ParamLimits

0xf8d0,	// (0x0002d461) main_cam_set_pane_g

0x6045,	// (0x00023bd6) main_cam_set_pane_t1_ParamLimits

0x6045,	// (0x00023bd6) main_cam_set_pane_t1

0x6061,	// (0x00023bf2) main_cset_listscroll_pane_ParamLimits

0x6061,	// (0x00023bf2) main_cset_listscroll_pane

0x6093,	// (0x00023c24) main_cset_slider_pane_ParamLimits

0x6093,	// (0x00023c24) main_cset_slider_pane

0xce0f,	// (0x0002a9a0) main_cset_list_pane_ParamLimits

0xce0f,	// (0x0002a9a0) main_cset_list_pane

0xce1f,	// (0x0002a9b0) scroll_pane_cp028

0x60b2,	// (0x00023c43) aid_area_touch_slider

0x60ce,	// (0x00023c5f) cset_slider_pane

0x60f1,	// (0x00023c82) main_cset_slider_pane_g1

0x6106,	// (0x00023c97) main_cset_slider_pane_g2

0x0011,

0xf8d5,	// (0x0002d466) main_cset_slider_pane_g

0xce58,	// (0x0002a9e9) main_cset_slider_pane_t1

0x61cc,	// (0x00023d5d) main_cset_slider_pane_t2

0x61e6,	// (0x00023d77) main_cset_slider_pane_t3

0x6200,	// (0x00023d91) main_cset_slider_pane_t4

0x621e,	// (0x00023daf) main_cset_slider_pane_t5

0x623c,	// (0x00023dcd) main_cset_slider_pane_t6

0x6253,	// (0x00023de4) main_cset_slider_pane_t7

0x000e,

0xf8fa,	// (0x0002d48b) main_cset_slider_pane_t

0x6361,	// (0x00023ef2) cset_list_set_pane_ParamLimits

0x6361,	// (0x00023ef2) cset_list_set_pane

0xcef2,	// (0x0002aa83) aid_position_infowindow_above

0xcefa,	// (0x0002aa8b) aid_position_infowindow_below

0x637a,	// (0x00023f0b) cset_list_set_pane_g1_ParamLimits

0x637a,	// (0x00023f0b) cset_list_set_pane_g1

0x6386,	// (0x00023f17) cset_list_set_pane_g3_ParamLimits

0x6386,	// (0x00023f17) cset_list_set_pane_g3

0x0001,

0xf919,	// (0x0002d4aa) cset_list_set_pane_g_ParamLimits

0xf919,	// (0x0002d4aa) cset_list_set_pane_g

0x6395,	// (0x00023f26) cset_list_set_pane_t1_ParamLimits

0x6395,	// (0x00023f26) cset_list_set_pane_t1

0x9f2b,	// (0x00027abc) list_highlight_pane_cp021_ParamLimits

0x9f2b,	// (0x00027abc) list_highlight_pane_cp021

0xad27,	// (0x000288b8) cset_slider_pane_g1

0xad39,	// (0x000288ca) cset_slider_pane_g2

0xad30,	// (0x000288c1) cset_slider_pane_g3

0x0002,

0xf91e,	// (0x0002d4af) cset_slider_pane_g

0x2254,	// (0x0001fde5) aid_area_touch_cam4_zoom

0x225c,	// (0x0001fded) cam4_zoom_cont_pane

0x2264,	// (0x0001fdf5) cam4_zoom_pane_g1

0x226c,	// (0x0001fdfd) cam4_zoom_pane_g2

0x2274,	// (0x0001fe05) cam4_zoom_pane_g3

0x0002,

0xf925,	// (0x0002d4b6) cam4_zoom_pane_g

0x227c,	// (0x0001fe0d) cam4_zoom_cont_pane_g1

0x2285,	// (0x0001fe16) cam4_zoom_cont_pane_g2

0x228e,	// (0x0001fe1f) cam4_zoom_cont_pane_g3

0x0002,

0xf92c,	// (0x0002d4bd) cam4_zoom_cont_pane_g

0x1c7a,	// (0x0001f80b) call4_image_pane_ParamLimits

0x1c7a,	// (0x0001f80b) call4_image_pane

0x5cc8,	// (0x00023859) call4_windows_conf_pane_ParamLimits

0x5d0b,	// (0x0002389c) popup_call4_audio_in_window_ParamLimits

0x5d0b,	// (0x0002389c) popup_call4_audio_in_window

0x9891,	// (0x00027422) bg_popup_call2_act_pane_cp02

0xcc69,	// (0x0002a7fa) call4_list_conf_pane

0xa1e6,	// (0x00027d77) call4_image_pane_g1

0xa1e6,	// (0x00027d77) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) call4_image_pane_g

0xcf02,	// (0x0002aa93) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf02,	// (0x0002aa93) list_single_graphic_popup_conf4_pane

0x9891,	// (0x00027422) list_highlight_pane_cp022

0xcf15,	// (0x0002aaa6) list_single_graphic_popup_conf4_pane_g1

0xa946,	// (0x000284d7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf933,	// (0x0002d4c4) list_single_graphic_popup_conf4_pane_g

0xcf1d,	// (0x0002aaae) list_single_graphic_popup_conf4_pane_t1

0x2f87,	// (0x00020b18) popup_vtel_slider_window_ParamLimits

0x2f87,	// (0x00020b18) popup_vtel_slider_window

0xcc4b,	// (0x0002a7dc) dialer2_ne_pane_t2_ParamLimits

0xcc4b,	// (0x0002a7dc) dialer2_ne_pane_t2

0x0001,

0xf814,	// (0x0002d3a5) dialer2_ne_pane_t_ParamLimits

0xf814,	// (0x0002d3a5) dialer2_ne_pane_t

0x9f2b,	// (0x00027abc) bg_popup_sub_pane_cp010_ParamLimits

0x9f2b,	// (0x00027abc) bg_popup_sub_pane_cp010

0x63aa,	// (0x00023f3b) popup_vtel_slider_window_g1_ParamLimits

0x63aa,	// (0x00023f3b) popup_vtel_slider_window_g1

0x63b6,	// (0x00023f47) popup_vtel_slider_window_g2_ParamLimits

0x63b6,	// (0x00023f47) popup_vtel_slider_window_g2

0x0003,

0xf938,	// (0x0002d4c9) popup_vtel_slider_window_g_ParamLimits

0xf938,	// (0x0002d4c9) popup_vtel_slider_window_g

0x63fe,	// (0x00023f8f) vtel_slider_pane_ParamLimits

0x63fe,	// (0x00023f8f) vtel_slider_pane

0x640d,	// (0x00023f9e) vtel_slider_pane_g1_ParamLimits

0x640d,	// (0x00023f9e) vtel_slider_pane_g1

0x641a,	// (0x00023fab) vtel_slider_pane_g2_ParamLimits

0x641a,	// (0x00023fab) vtel_slider_pane_g2

0x6427,	// (0x00023fb8) vtel_slider_pane_g3_ParamLimits

0x6427,	// (0x00023fb8) vtel_slider_pane_g3

0x640d,	// (0x00023f9e) vtel_slider_pane_g4_ParamLimits

0x640d,	// (0x00023f9e) vtel_slider_pane_g4

0x6434,	// (0x00023fc5) vtel_slider_pane_g5_ParamLimits

0x6434,	// (0x00023fc5) vtel_slider_pane_g5

0x0004,

0xf941,	// (0x0002d4d2) vtel_slider_pane_g_ParamLimits

0xf941,	// (0x0002d4d2) vtel_slider_pane_g

0x1483,	// (0x0001f014) main_gallery2_pane

0x1fa4,	// (0x0001fb35) aid_size_row_itut2_dropdow_list_ParamLimits

0x1fa4,	// (0x0001fb35) aid_size_row_itut2_dropdow_list

0x2012,	// (0x0001fba3) grid_vitu2_function_top_pane_ParamLimits

0x2012,	// (0x0001fba3) grid_vitu2_function_top_pane

0x206c,	// (0x0001fbfd) popup_vitu2_dropdown_list_window_ParamLimits

0x206c,	// (0x0001fbfd) popup_vitu2_dropdown_list_window

0x208a,	// (0x0001fc1b) popup_vitu2_match_list_window

0x2297,	// (0x0001fe28) cell_vitu2_function_top_pane_ParamLimits

0x2297,	// (0x0001fe28) cell_vitu2_function_top_pane

0x22b1,	// (0x0001fe42) cell_vitu2_function_top_pane_cp01_ParamLimits

0x22b1,	// (0x0001fe42) cell_vitu2_function_top_pane_cp01

0x22cd,	// (0x0001fe5e) cell_vitu2_function_top_wide_pane_ParamLimits

0x22cd,	// (0x0001fe5e) cell_vitu2_function_top_wide_pane

0x1483,	// (0x0001f014) bg_button_pane_cp012

0x22eb,	// (0x0001fe7c) cell_vitu2_function_top_pane_g1

0x22ff,	// (0x0001fe90) bg_button_pane_cp013_ParamLimits

0x22ff,	// (0x0001fe90) bg_button_pane_cp013

0x6441,	// (0x00023fd2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6441,	// (0x00023fd2) cell_vitu2_function_top_wide_pane_g1

0x101f,	// (0x0001ebb0) bg_popup_sub_pane_cp20

0x231b,	// (0x0001feac) list_vitu2_match_list_pane

0xccf3,	// (0x0002a884) bg_popup_sub_pane_cp20_g1

0xccfb,	// (0x0002a88c) bg_popup_sub_pane_cp20_g2

0xa40b,	// (0x00027f9c) bg_popup_sub_pane_cp20_g3

0xcd03,	// (0x0002a894) bg_popup_sub_pane_cp20_g4

0xa3eb,	// (0x00027f7c) bg_popup_sub_pane_cp20_g5

0xcf33,	// (0x0002aac4) bg_popup_sub_pane_cp20_g6

0xcd13,	// (0x0002a8a4) bg_popup_sub_pane_cp20_g7

0xcd1b,	// (0x0002a8ac) bg_popup_sub_pane_cp20_g8

0xcd23,	// (0x0002a8b4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf94c,	// (0x0002d4dd) bg_popup_sub_pane_cp20_g

0x2333,	// (0x0001fec4) list_vitu2_match_list_item_pane_ParamLimits

0x2333,	// (0x0001fec4) list_vitu2_match_list_item_pane

0x2345,	// (0x0001fed6) list_vitu2_match_list_item_pane_t1

0x102d,	// (0x0001ebbe) bg_popup_sub_pane_cp21

0xa1c4,	// (0x00027d55) grid_vitu2_dropdown_list_pane

0x2353,	// (0x0001fee4) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x2353,	// (0x0001fee4) cell_vitu2_dropdown_list_char_pane

0x2375,	// (0x0001ff06) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x2375,	// (0x0001ff06) cell_vitu2_dropdown_list_ctrl_pane

0xcf3b,	// (0x0002aacc) cell_vitu2_dropdown_list_char_pane_g1

0xcf44,	// (0x0002aad5) cell_vitu2_dropdown_list_char_pane_g2

0xcf4d,	// (0x0002aade) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95f,	// (0x0002d4f0) cell_vitu2_dropdown_list_char_pane_g

0x239d,	// (0x0001ff2e) cell_vitu2_dropdown_list_char_pane_t1

0x6459,	// (0x00023fea) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6459,	// (0x00023fea) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6466,	// (0x00023ff7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6466,	// (0x00023ff7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6473,	// (0x00024004) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6473,	// (0x00024004) cell_vitu2_dropdown_list_ctrl_pane_g3

0x23ab,	// (0x0001ff3c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x23ab,	// (0x0001ff3c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdee6,	// (0x0002ba77) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdee6,	// (0x0002ba77) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf966,	// (0x0002d4f7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf966,	// (0x0002d4f7) cell_vitu2_dropdown_list_ctrl_pane_g

0x6480,	// (0x00024011) aid_size_cell_gallery2_ParamLimits

0x6480,	// (0x00024011) aid_size_cell_gallery2

0x649a,	// (0x0002402b) grid_gallery2_pane_ParamLimits

0x649a,	// (0x0002402b) grid_gallery2_pane

0x64b1,	// (0x00024042) scroll_pane_cp029_ParamLimits

0x64b1,	// (0x00024042) scroll_pane_cp029

0x64c1,	// (0x00024052) cell_gallery2_pane_ParamLimits

0x64c1,	// (0x00024052) cell_gallery2_pane

0xcf56,	// (0x0002aae7) cell_gallery2_pane_g2

0x6516,	// (0x000240a7) cell_gallery2_pane_g3

0xcf5e,	// (0x0002aaef) cell_gallery2_pane_g4

0xcf66,	// (0x0002aaf7) cell_gallery2_pane_g5

0xa1c4,	// (0x00027d55) grid_highlight_pane_cp10

0x208a,	// (0x0001fc1b) popup_vitu2_match_list_window_ParamLimits

0x209c,	// (0x0001fc2d) popup_vitu2_query_window_ParamLimits

0x209c,	// (0x0001fc2d) popup_vitu2_query_window

0x102d,	// (0x0001ebbe) bg_vitu2_candi_button_pane

0xcf3b,	// (0x0002aacc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf44,	// (0x0002aad5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcf4d,	// (0x0002aade) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x651e,	// (0x000240af) bg_button_pane_cp015

0x6533,	// (0x000240c4) bg_button_pane_cp016

0x653f,	// (0x000240d0) bg_button_pane_cp017

0xad9c,	// (0x0002892d) bg_popup_sub_pane_cp22

0xcf6e,	// (0x0002aaff) popup_vitu2_query_window_g1

0x657f,	// (0x00024110) popup_vitu2_query_window_g2

0x0002,

0xf971,	// (0x0002d502) popup_vitu2_query_window_g

0x65a3,	// (0x00024134) popup_vitu2_query_window_t1_ParamLimits

0x65a3,	// (0x00024134) popup_vitu2_query_window_t1

0x65d6,	// (0x00024167) popup_vitu2_query_window_t2_ParamLimits

0x65d6,	// (0x00024167) popup_vitu2_query_window_t2

0x65e8,	// (0x00024179) popup_vitu2_query_window_t3_ParamLimits

0x65e8,	// (0x00024179) popup_vitu2_query_window_t3

0x6610,	// (0x000241a1) popup_vitu2_query_window_t4_ParamLimits

0x6610,	// (0x000241a1) popup_vitu2_query_window_t4

0x6624,	// (0x000241b5) popup_vitu2_query_window_t5_ParamLimits

0x6624,	// (0x000241b5) popup_vitu2_query_window_t5

0x0006,

0xf978,	// (0x0002d509) popup_vitu2_query_window_t_ParamLimits

0xf978,	// (0x0002d509) popup_vitu2_query_window_t

0xce07,	// (0x0002a998) main_cset_text_pane

0x60b2,	// (0x00023c43) aid_area_touch_slider_ParamLimits

0x60ce,	// (0x00023c5f) cset_slider_pane_ParamLimits

0x60f1,	// (0x00023c82) main_cset_slider_pane_g1_ParamLimits

0x6106,	// (0x00023c97) main_cset_slider_pane_g2_ParamLimits

0xce28,	// (0x0002a9b9) main_cset_slider_pane_g3_ParamLimits

0xce28,	// (0x0002a9b9) main_cset_slider_pane_g3

0x611b,	// (0x00023cac) main_cset_slider_pane_g4_ParamLimits

0x611b,	// (0x00023cac) main_cset_slider_pane_g4

0x612a,	// (0x00023cbb) main_cset_slider_pane_g5_ParamLimits

0x612a,	// (0x00023cbb) main_cset_slider_pane_g5

0x6138,	// (0x00023cc9) main_cset_slider_pane_g6_ParamLimits

0x6138,	// (0x00023cc9) main_cset_slider_pane_g6

0xf8d5,	// (0x0002d466) main_cset_slider_pane_g_ParamLimits

0xce58,	// (0x0002a9e9) main_cset_slider_pane_t1_ParamLimits

0x61cc,	// (0x00023d5d) main_cset_slider_pane_t2_ParamLimits

0x61e6,	// (0x00023d77) main_cset_slider_pane_t3_ParamLimits

0x6200,	// (0x00023d91) main_cset_slider_pane_t4_ParamLimits

0x621e,	// (0x00023daf) main_cset_slider_pane_t5_ParamLimits

0x623c,	// (0x00023dcd) main_cset_slider_pane_t6_ParamLimits

0x6253,	// (0x00023de4) main_cset_slider_pane_t7_ParamLimits

0x6281,	// (0x00023e12) main_cset_slider_pane_t8_ParamLimits

0x6281,	// (0x00023e12) main_cset_slider_pane_t8

0x62a9,	// (0x00023e3a) main_cset_slider_pane_t9_ParamLimits

0x62a9,	// (0x00023e3a) main_cset_slider_pane_t9

0x62d1,	// (0x00023e62) main_cset_slider_pane_t10_ParamLimits

0x62d1,	// (0x00023e62) main_cset_slider_pane_t10

0x62f9,	// (0x00023e8a) main_cset_slider_pane_t11_ParamLimits

0x62f9,	// (0x00023e8a) main_cset_slider_pane_t11

0x6323,	// (0x00023eb4) main_cset_slider_pane_t12_ParamLimits

0x6323,	// (0x00023eb4) main_cset_slider_pane_t12

0x6342,	// (0x00023ed3) main_cset_slider_pane_t13_ParamLimits

0x6342,	// (0x00023ed3) main_cset_slider_pane_t13

0xf8fa,	// (0x0002d48b) main_cset_slider_pane_t_ParamLimits

0x9891,	// (0x00027422) bg_popup_sub_pane_cp011

0xcf7a,	// (0x0002ab0b) main_cset_text_pane_g1

0xcf82,	// (0x0002ab13) main_cset_text_pane_t1

0xcf90,	// (0x0002ab21) main_cset_text_pane_t2

0xcf9e,	// (0x0002ab2f) main_cset_text_pane_t3

0xcfac,	// (0x0002ab3d) main_cset_text_pane_t4

0xcfba,	// (0x0002ab4b) main_cset_text_pane_t5

0xcfc8,	// (0x0002ab59) main_cset_text_pane_t6

0xcfd6,	// (0x0002ab67) main_cset_text_pane_t7

0x0006,

0xf987,	// (0x0002d518) main_cset_text_pane_t

0x102d,	// (0x0001ebbe) main_cam4_burst_pane

0x102d,	// (0x0001ebbe) main_cam5_pane

0xcddd,	// (0x0002a96e) bg_button_pane_cp019

0xcde6,	// (0x0002a977) bg_button_pane_cp020

0xce34,	// (0x0002a9c5) main_cset_slider_pane_g7_ParamLimits

0xce34,	// (0x0002a9c5) main_cset_slider_pane_g7

0xce40,	// (0x0002a9d1) main_cset_slider_pane_g8_ParamLimits

0xce40,	// (0x0002a9d1) main_cset_slider_pane_g8

0x614c,	// (0x00023cdd) main_cset_slider_pane_g9_ParamLimits

0x614c,	// (0x00023cdd) main_cset_slider_pane_g9

0x6158,	// (0x00023ce9) main_cset_slider_pane_g10_ParamLimits

0x6158,	// (0x00023ce9) main_cset_slider_pane_g10

0x6164,	// (0x00023cf5) main_cset_slider_pane_g11_ParamLimits

0x6164,	// (0x00023cf5) main_cset_slider_pane_g11

0x6170,	// (0x00023d01) main_cset_slider_pane_g12_ParamLimits

0x6170,	// (0x00023d01) main_cset_slider_pane_g12

0x617c,	// (0x00023d0d) main_cset_slider_pane_g13_ParamLimits

0x617c,	// (0x00023d0d) main_cset_slider_pane_g13

0x618a,	// (0x00023d1b) main_cset_slider_pane_g14_ParamLimits

0x618a,	// (0x00023d1b) main_cset_slider_pane_g14

0x6198,	// (0x00023d29) main_cset_slider_pane_g15_ParamLimits

0x6198,	// (0x00023d29) main_cset_slider_pane_g15

0xce80,	// (0x0002aa11) main_cset_slider_pane_t14_ParamLimits

0xce80,	// (0x0002aa11) main_cset_slider_pane_t14

0xceb9,	// (0x0002aa4a) main_cset_slider_pane_t15_ParamLimits

0xceb9,	// (0x0002aa4a) main_cset_slider_pane_t15

0x668e,	// (0x0002421f) aid_cam4_burst_size_cell_ParamLimits

0x668e,	// (0x0002421f) aid_cam4_burst_size_cell

0x66aa,	// (0x0002423b) grid_cam4_burst_pane_ParamLimits

0x66aa,	// (0x0002423b) grid_cam4_burst_pane

0x66da,	// (0x0002426b) linegrid_cam4_burst_pane_ParamLimits

0x66da,	// (0x0002426b) linegrid_cam4_burst_pane

0x66fa,	// (0x0002428b) scroll_pane_cp30_ParamLimits

0x66fa,	// (0x0002428b) scroll_pane_cp30

0x6706,	// (0x00024297) cell_cam4_burst_pane_ParamLimits

0x6706,	// (0x00024297) cell_cam4_burst_pane

0xcfe4,	// (0x0002ab75) linegrid_cam4_burst_pane_g1_ParamLimits

0xcfe4,	// (0x0002ab75) linegrid_cam4_burst_pane_g1

0x6742,	// (0x000242d3) linegrid_cam4_burst_pane_g2_ParamLimits

0x6742,	// (0x000242d3) linegrid_cam4_burst_pane_g2

0xcff1,	// (0x0002ab82) linegrid_cam4_burst_pane_g3_ParamLimits

0xcff1,	// (0x0002ab82) linegrid_cam4_burst_pane_g3

0x0002,

0xf996,	// (0x0002d527) linegrid_cam4_burst_pane_g_ParamLimits

0xf996,	// (0x0002d527) linegrid_cam4_burst_pane_g

0x6753,	// (0x000242e4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6753,	// (0x000242e4) linegrid_cam4_burst_pane_g3_copy1

0xcffe,	// (0x0002ab8f) linegrid_cam4_burst_pane_g4_ParamLimits

0xcffe,	// (0x0002ab8f) linegrid_cam4_burst_pane_g4

0x676d,	// (0x000242fe) linegrid_cam4_burst_pane_g5_ParamLimits

0x676d,	// (0x000242fe) linegrid_cam4_burst_pane_g5

0x677e,	// (0x0002430f) linegrid_cam4_burst_pane_g6_ParamLimits

0x677e,	// (0x0002430f) linegrid_cam4_burst_pane_g6

0xd00b,	// (0x0002ab9c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd00b,	// (0x0002ab9c) linegrid_cam4_burst_pane_g7

0x678f,	// (0x00024320) cell_cam4_burst_pane_g1

0xd06f,	// (0x0002ac00) main_cam5_pane_t1_ParamLimits

0xd06f,	// (0x0002ac00) main_cam5_pane_t1

0xd081,	// (0x0002ac12) main_cam5_pane_t2_ParamLimits

0xd081,	// (0x0002ac12) main_cam5_pane_t2

0xd093,	// (0x0002ac24) main_cam5_pane_t3_ParamLimits

0xd093,	// (0x0002ac24) main_cam5_pane_t3

0xd0a5,	// (0x0002ac36) main_cam5_pane_t4_ParamLimits

0xd0a5,	// (0x0002ac36) main_cam5_pane_t4

0xd0bd,	// (0x0002ac4e) main_cam5_pane_t5_ParamLimits

0xd0bd,	// (0x0002ac4e) main_cam5_pane_t5

0xd0d1,	// (0x0002ac62) main_cam5_pane_t6_ParamLimits

0xd0d1,	// (0x0002ac62) main_cam5_pane_t6

0xd0e5,	// (0x0002ac76) main_cam5_pane_t7_ParamLimits

0xd0e5,	// (0x0002ac76) main_cam5_pane_t7

0xd0f7,	// (0x0002ac88) main_cam5_pane_t8_ParamLimits

0xd0f7,	// (0x0002ac88) main_cam5_pane_t8

0xd113,	// (0x0002aca4) main_cam5_pane_t9_ParamLimits

0xd113,	// (0x0002aca4) main_cam5_pane_t9

0xd125,	// (0x0002acb6) main_cam5_pane_t10_ParamLimits

0xd125,	// (0x0002acb6) main_cam5_pane_t10

0xd137,	// (0x0002acc8) main_cam5_pane_t11_ParamLimits

0xd137,	// (0x0002acc8) main_cam5_pane_t11

0xd149,	// (0x0002acda) main_cam5_pane_t12_ParamLimits

0xd149,	// (0x0002acda) main_cam5_pane_t12

0xd15e,	// (0x0002acef) main_cam5_pane_t13_ParamLimits

0xd15e,	// (0x0002acef) main_cam5_pane_t13

0x000c,

0xf9a2,	// (0x0002d533) main_cam5_pane_t_ParamLimits

0xf9a2,	// (0x0002d533) main_cam5_pane_t

0x0fde,	// (0x0001eb6f) popup_scut_keymap_window_ParamLimits

0x0fde,	// (0x0001eb6f) popup_scut_keymap_window

0x67a2,	// (0x00024333) aid_size_cell_brow_shortcut

0xa1c4,	// (0x00027d55) bg_popup_window_pane_cp010

0x67ae,	// (0x0002433f) grid_scut_pane

0x67ba,	// (0x0002434b) cell_scut_pane_ParamLimits

0x67ba,	// (0x0002434b) cell_scut_pane

0x67d1,	// (0x00024362) cell_scut_pane_g1

0xd17b,	// (0x0002ad0c) cell_scut_pane_t1

0xd18a,	// (0x0002ad1b) cell_scut_pane_t2

0x67da,	// (0x0002436b) cell_scut_pane_t3

0x0002,

0xf9bd,	// (0x0002d54e) cell_scut_pane_t

0x53ae,	// (0x00022f3f) main_mup3_pane_g8_ParamLimits

0x53ae,	// (0x00022f3f) main_mup3_pane_g8

0x1fb2,	// (0x0001fb43) area_vitu2_query_pane_ParamLimits

0x1fb2,	// (0x0001fb43) area_vitu2_query_pane

0x654b,	// (0x000240dc) input_focus_pane_cp08

0xd199,	// (0x0002ad2a) area_vitu2_query_pane_g1

0x67e8,	// (0x00024379) area_vitu2_query_pane_g2

0x0001,

0xf9c4,	// (0x0002d555) area_vitu2_query_pane_g

0x67f9,	// (0x0002438a) area_vitu2_query_pane_t1_ParamLimits

0x67f9,	// (0x0002438a) area_vitu2_query_pane_t1

0x680d,	// (0x0002439e) area_vitu2_query_pane_t2_ParamLimits

0x680d,	// (0x0002439e) area_vitu2_query_pane_t2

0x6821,	// (0x000243b2) area_vitu2_query_pane_t3_ParamLimits

0x6821,	// (0x000243b2) area_vitu2_query_pane_t3

0xd1a5,	// (0x0002ad36) area_vitu2_query_pane_t4_ParamLimits

0xd1a5,	// (0x0002ad36) area_vitu2_query_pane_t4

0xd1cd,	// (0x0002ad5e) area_vitu2_query_pane_t5_ParamLimits

0xd1cd,	// (0x0002ad5e) area_vitu2_query_pane_t5

0xd1f5,	// (0x0002ad86) area_vitu2_query_pane_t6_ParamLimits

0xd1f5,	// (0x0002ad86) area_vitu2_query_pane_t6

0x0006,

0xf9c9,	// (0x0002d55a) area_vitu2_query_pane_t_ParamLimits

0xf9c9,	// (0x0002d55a) area_vitu2_query_pane_t

0x6533,	// (0x000240c4) bg_button_pane_cp018

0x6849,	// (0x000243da) bg_button_pane_cp021

0x6855,	// (0x000243e6) bg_button_pane_cp022

0x6878,	// (0x00024409) input_focus_pane_cp09

0xaa55,	// (0x000285e6) aid_size_touch_mv_arrow_left

0xaa80,	// (0x00028611) aid_size_touch_mv_arrow_right

0x61b0,	// (0x00023d41) main_cset_slider_pane_g16_ParamLimits

0x61b0,	// (0x00023d41) main_cset_slider_pane_g16

0x61be,	// (0x00023d4f) main_cset_slider_pane_g17_ParamLimits

0x61be,	// (0x00023d4f) main_cset_slider_pane_g17

0x678f,	// (0x00024320) cell_cam4_burst_pane_g1_ParamLimits

0x9891,	// (0x00027422) compa_mode_pane

0x63c2,	// (0x00023f53) popup_vtel_slider_window_g3_ParamLimits

0x63c2,	// (0x00023f53) popup_vtel_slider_window_g3

0x63d6,	// (0x00023f67) popup_vtel_slider_window_g4_ParamLimits

0x63d6,	// (0x00023f67) popup_vtel_slider_window_g4

0x63ea,	// (0x00023f7b) popup_vtel_slider_window_t1_ParamLimits

0x63ea,	// (0x00023f7b) popup_vtel_slider_window_t1

0x102d,	// (0x0001ebbe) main_cl_pane

0x151d,	// (0x0001f0ae) popup_imed_adjust2_window_ParamLimits

0xad9c,	// (0x0002892d) bg_tb_trans_pane_cp05_ParamLimits

0xc924,	// (0x0002a4b5) popup_imed_adjust2_window_g1_ParamLimits

0xc933,	// (0x0002a4c4) popup_imed_adjust2_window_g2_ParamLimits

0xc933,	// (0x0002a4c4) popup_imed_adjust2_window_g2

0xc93f,	// (0x0002a4d0) popup_imed_adjust2_window_g3_ParamLimits

0xc93f,	// (0x0002a4d0) popup_imed_adjust2_window_g3

0x0002,

0xf73f,	// (0x0002d2d0) popup_imed_adjust2_window_g_ParamLimits

0xf73f,	// (0x0002d2d0) popup_imed_adjust2_window_g

0xc94b,	// (0x0002a4dc) popup_imed_adjust2_window_t1_ParamLimits

0xc963,	// (0x0002a4f4) slider_imed_adjust_pane_ParamLimits

0xc977,	// (0x0002a508) slider_imed_adjust_pane_g1_ParamLimits

0xc987,	// (0x0002a518) slider_imed_adjust_pane_g2_ParamLimits

0xc997,	// (0x0002a528) slider_imed_adjust_pane_g3_ParamLimits

0xc9a8,	// (0x0002a539) slider_imed_adjust_pane_g4_ParamLimits

0xf746,	// (0x0002d2d7) slider_imed_adjust_pane_g_ParamLimits

0x1d47,	// (0x0001f8d8) aid_touch_area_cam4_ParamLimits

0x1d47,	// (0x0001f8d8) aid_touch_area_cam4

0x1d57,	// (0x0001f8e8) battery_pane_cp01

0x1dde,	// (0x0001f96f) main_camera4_pane_g6_ParamLimits

0x1dde,	// (0x0001f96f) main_camera4_pane_g6

0x1dfc,	// (0x0001f98d) main_camera4_pane_t2_ParamLimits

0x1dfc,	// (0x0001f98d) main_camera4_pane_t2

0x0001,

0xf848,	// (0x0002d3d9) main_camera4_pane_t_ParamLimits

0xf848,	// (0x0002d3d9) main_camera4_pane_t

0x1e59,	// (0x0001f9ea) aid_touch_area_vid4_ParamLimits

0x1e59,	// (0x0001f9ea) aid_touch_area_vid4

0x1e99,	// (0x0001fa2a) main_video4_pane_g5_ParamLimits

0x1e99,	// (0x0001fa2a) main_video4_pane_g5

0x1ebd,	// (0x0001fa4e) vid4_progress_pane_ParamLimits

0x1ebd,	// (0x0001fa4e) vid4_progress_pane

0xce4c,	// (0x0002a9dd) main_cset_slider_pane_g18_ParamLimits

0xce4c,	// (0x0002a9dd) main_cset_slider_pane_g18

0xd018,	// (0x0002aba9) cell_cam4_burst_pane_g2_ParamLimits

0xd018,	// (0x0002aba9) cell_cam4_burst_pane_g2

0x0001,

0xf99d,	// (0x0002d52e) cell_cam4_burst_pane_g_ParamLimits

0xf99d,	// (0x0002d52e) cell_cam4_burst_pane_g

0x6888,	// (0x00024419) bg_cl_pane_ParamLimits

0x6888,	// (0x00024419) bg_cl_pane

0x6894,	// (0x00024425) cl_header_pane_ParamLimits

0x6894,	// (0x00024425) cl_header_pane

0x68a0,	// (0x00024431) cl_listscroll_pane_ParamLimits

0x68a0,	// (0x00024431) cl_listscroll_pane

0xd241,	// (0x0002add2) bg_cl_pane_g1

0xd249,	// (0x0002adda) bg_cl_pane_g2

0xd251,	// (0x0002ade2) bg_cl_pane_g3

0xd259,	// (0x0002adea) bg_cl_pane_g4

0xd261,	// (0x0002adf2) bg_cl_pane_g5

0xd269,	// (0x0002adfa) bg_cl_pane_g6

0xd271,	// (0x0002ae02) bg_cl_pane_g7

0xd279,	// (0x0002ae0a) bg_cl_pane_g8

0xd281,	// (0x0002ae12) bg_cl_pane_g9

0x0008,

0xf9d8,	// (0x0002d569) bg_cl_pane_g

0x68ac,	// (0x0002443d) aid_height_cl_leading_ParamLimits

0x68ac,	// (0x0002443d) aid_height_cl_leading

0x68b8,	// (0x00024449) aid_height_cl_text_ParamLimits

0x68b8,	// (0x00024449) aid_height_cl_text

0x9f84,	// (0x00027b15) bg_cl_header_pane_ParamLimits

0x9f84,	// (0x00027b15) bg_cl_header_pane

0x68d0,	// (0x00024461) cl_header_pane_g1_ParamLimits

0x68d0,	// (0x00024461) cl_header_pane_g1

0x68dd,	// (0x0002446e) cl_header_pane_t1_ParamLimits

0x68dd,	// (0x0002446e) cl_header_pane_t1

0xd289,	// (0x0002ae1a) cl_list_pane

0xce1f,	// (0x0002a9b0) hc_scroll_pane_cp01

0xa3eb,	// (0x00027f7c) bg_cl_header_pane_g1

0xccf3,	// (0x0002a884) bg_cl_header_pane_g2

0xa40b,	// (0x00027f9c) bg_cl_header_pane_g3

0xcd03,	// (0x0002a894) bg_cl_header_pane_g4

0xccfb,	// (0x0002a88c) bg_cl_header_pane_g5

0xcf33,	// (0x0002aac4) bg_cl_header_pane_g6

0xcd1b,	// (0x0002a8ac) bg_cl_header_pane_g7

0xcd23,	// (0x0002a8b4) bg_cl_header_pane_g8

0xcd13,	// (0x0002a8a4) bg_cl_header_pane_g9

0x0008,

0xf9eb,	// (0x0002d57c) bg_cl_header_pane_g

0x68ef,	// (0x00024480) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x68ef,	// (0x00024480) hc_cl_list_double_graphic_heading_pane

0x6903,	// (0x00024494) hc_cl_list_single_graphic_pane_ParamLimits

0x6903,	// (0x00024494) hc_cl_list_single_graphic_pane

0x691d,	// (0x000244ae) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x691d,	// (0x000244ae) hc_cl_list_single_graphic_pane_g1

0x6929,	// (0x000244ba) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6929,	// (0x000244ba) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9fe,	// (0x0002d58f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9fe,	// (0x0002d58f) hc_cl_list_single_graphic_pane_g

0x693d,	// (0x000244ce) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x693d,	// (0x000244ce) hc_cl_list_single_graphic_pane_t1

0x691d,	// (0x000244ae) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x691d,	// (0x000244ae) hc_cl_list_double_graphic_heading_pane_g1

0x6952,	// (0x000244e3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6952,	// (0x000244e3) hc_cl_list_double_graphic_heading_pane_g2

0x6966,	// (0x000244f7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6966,	// (0x000244f7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa03,	// (0x0002d594) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa03,	// (0x0002d594) hc_cl_list_double_graphic_heading_pane_g

0x697a,	// (0x0002450b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x697a,	// (0x0002450b) hc_cl_list_double_graphic_heading_pane_t1

0x698f,	// (0x00024520) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x698f,	// (0x00024520) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa0a,	// (0x0002d59b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa0a,	// (0x0002d59b) hc_cl_list_double_graphic_heading_pane_t

0x23cf,	// (0x0001ff60) vid4_progress_pane_g1

0x23df,	// (0x0001ff70) vid4_progress_pane_g2

0x23ef,	// (0x0001ff80) vid4_progress_pane_g3

0x2401,	// (0x0001ff92) vid4_progress_pane_g4

0x0004,

0xfa0f,	// (0x0002d5a0) vid4_progress_pane_g

0x2419,	// (0x0001ffaa) vid4_progress_pane_t1

0x242f,	// (0x0001ffc0) vid4_progress_pane_t2

0x0002,

0xfa1a,	// (0x0002d5ab) vid4_progress_pane_t

0x245a,	// (0x0001ffeb) wait_bar_pane_cp07

0xc1bb,	// (0x00029d4c) blid_firmament_pane_ParamLimits

0xc1fe,	// (0x00029d8f) popup_blid_sat_info2_window_g1

0xc222,	// (0x00029db3) popup_blid_sat_info2_window_t3

0xc230,	// (0x00029dc1) popup_blid_sat_info2_window_t4

0xc23e,	// (0x00029dcf) popup_blid_sat_info2_window_t5

0xc24c,	// (0x00029ddd) popup_blid_sat_info2_window_t6

0xc25c,	// (0x00029ded) popup_blid_sat_info2_window_t7

0xc26a,	// (0x00029dfb) popup_blid_sat_info2_window_t8

0xc278,	// (0x00029e09) popup_blid_sat_info2_window_t9

0xc286,	// (0x00029e17) popup_blid_sat_info2_window_t10

0xc347,	// (0x00029ed8) aid_firma_cardinal_ParamLimits

0xc35b,	// (0x00029eec) blid_firmament_pane_t1_ParamLimits

0xc372,	// (0x00029f03) blid_firmament_pane_t2_ParamLimits

0xc389,	// (0x00029f1a) blid_firmament_pane_t3_ParamLimits

0xc3a0,	// (0x00029f31) blid_firmament_pane_t4_ParamLimits

0xf638,	// (0x0002d1c9) blid_firmament_pane_t_ParamLimits

0xc3b7,	// (0x00029f48) blid_sat_info_pane_ParamLimits

0x1483,	// (0x0001f014) main_cam_set_pane_ParamLimits

0x59a5,	// (0x00023536) aid_size_cell_colour_35_ParamLimits

0x59bf,	// (0x00023550) aid_size_cell_colour_112_ParamLimits

0x59d6,	// (0x00023567) aid_size_cell_effect_ParamLimits

0x9f2b,	// (0x00027abc) bg_tb_trans_pane_cp02_ParamLimits

0xa768,	// (0x000282f9) heading_imed_pane_ParamLimits

0x59f0,	// (0x00023581) listscroll_imed_pane_ParamLimits

0xb660,	// (0x000291f1) popup_call2_audio_first_window_g5_ParamLimits

0xb660,	// (0x000291f1) popup_call2_audio_first_window_g5

0x1b03,	// (0x0001f694) aid_size_touch_image3_arrow_left_ParamLimits

0x1b03,	// (0x0001f694) aid_size_touch_image3_arrow_left

0x1b19,	// (0x0001f6aa) aid_size_touch_image3_arrow_right_ParamLimits

0x1b19,	// (0x0001f6aa) aid_size_touch_image3_arrow_right

0x2444,	// (0x0001ffd5) vid4_progress_pane_t3

0x5b72,	// (0x00023703) main_hwr_training_symbol_option_pane_ParamLimits

0x5b72,	// (0x00023703) main_hwr_training_symbol_option_pane

0xcb40,	// (0x0002a6d1) popup_hwr_training_preview_window_ParamLimits

0xcb40,	// (0x0002a6d1) popup_hwr_training_preview_window

0x17c1,	// (0x0001f352) hwr_training_navi_pane_g5_ParamLimits

0x17c1,	// (0x0001f352) hwr_training_navi_pane_g5

0xcce1,	// (0x0002a872) popup_char_count_window

0x101f,	// (0x0001ebb0) bg_popup_sub_pane_cp20_ParamLimits

0x231b,	// (0x0001feac) list_vitu2_match_list_pane_ParamLimits

0x2327,	// (0x0001feb8) vitu2_page_scroll_pane_ParamLimits

0x2327,	// (0x0001feb8) vitu2_page_scroll_pane

0xd2b4,	// (0x0002ae45) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2b4,	// (0x0002ae45) list_single_hwr_training_symbol_option_pane

0xd2c7,	// (0x0002ae58) list_single_hwr_training_symbol_option_pane_g1

0xd2cf,	// (0x0002ae60) list_single_hwr_training_symbol_option_pane_t1

0xd2dd,	// (0x0002ae6e) bg_button_pane_cp023

0xd2e6,	// (0x0002ae77) bg_button_pane_cp024

0xd319,	// (0x0002aeaa) vitu2_page_scroll_pane_g1

0xd321,	// (0x0002aeb2) vitu2_page_scroll_pane_g2

0x0001,

0xfa21,	// (0x0002d5b2) vitu2_page_scroll_pane_g

0xd329,	// (0x0002aeba) vitu2_page_scroll_pane_t1

0xa75f,	// (0x000282f0) popup_char_count_window_g1

0xd338,	// (0x0002aec9) popup_char_count_window_g2

0xd024,	// (0x0002abb5) popup_char_count_window_g3

0x0002,

0xfa26,	// (0x0002d5b7) popup_char_count_window_g

0xd341,	// (0x0002aed2) popup_char_count_window_t1

0x102d,	// (0x0001ebbe) main_vded2_pane

0xc910,	// (0x0002a4a1) aid_size_cell_imed_line

0xc91a,	// (0x0002a4ab) grid_imed_line_width_pane

0x1f29,	// (0x0001faba) vid4_indicators_pane_g4

0xd34f,	// (0x0002aee0) cell_imed_line_width_pane_ParamLimits

0xd34f,	// (0x0002aee0) cell_imed_line_width_pane

0xd363,	// (0x0002aef4) cell_imed_line_width_pane_g1

0xd36c,	// (0x0002aefd) cell_imed_line_width_pane_g2

0x0001,

0xfa2d,	// (0x0002d5be) cell_imed_line_width_pane_g

0x69b8,	// (0x00024549) main_vded2_pane_g1_ParamLimits

0x69b8,	// (0x00024549) main_vded2_pane_g1

0x69c5,	// (0x00024556) main_vded2_pane_g2_ParamLimits

0x69c5,	// (0x00024556) main_vded2_pane_g2

0x0001,

0xfa32,	// (0x0002d5c3) main_vded2_pane_g_ParamLimits

0xfa32,	// (0x0002d5c3) main_vded2_pane_g

0x69d3,	// (0x00024564) vded2_slider_pane_ParamLimits

0x69d3,	// (0x00024564) vded2_slider_pane

0x69e0,	// (0x00024571) aid_size_touch_vded2_end

0x69ea,	// (0x0002457b) aid_size_touch_vded2_playhead

0xd374,	// (0x0002af05) aid_size_touch_vded2_start

0xd37c,	// (0x0002af0d) vded2_slider_bg_pane

0xd385,	// (0x0002af16) vded2_slider_pane_g1

0xd38e,	// (0x0002af1f) vded2_slider_pane_g2

0x69f2,	// (0x00024583) vded2_slider_pane_g3

0x0002,

0xfa37,	// (0x0002d5c8) vded2_slider_pane_g

0xd396,	// (0x0002af27) vded2_slider_bg_pane_g1

0xd39f,	// (0x0002af30) vded2_slider_bg_pane_g2

0xd3a8,	// (0x0002af39) vded2_slider_bg_pane_g3

0x0002,

0xfa3e,	// (0x0002d5cf) vded2_slider_bg_pane_g

0x46ab,	// (0x0002223c) aid_postcard_touch_down_pane_ParamLimits

0x46ab,	// (0x0002223c) aid_postcard_touch_down_pane

0x46bb,	// (0x0002224c) aid_postcard_touch_up_pane_ParamLimits

0x46bb,	// (0x0002224c) aid_postcard_touch_up_pane

0x102d,	// (0x0001ebbe) main_blid2_pane

0x14ac,	// (0x0001f03d) popup_blid2_search_window

0x9891,	// (0x00027422) blid2_gps_pane

0x9891,	// (0x00027422) blid2_navig_pane

0x9891,	// (0x00027422) blid2_search_pane

0x9891,	// (0x00027422) blid2_tripm_pane

0x69fb,	// (0x0002458c) blid2_search_pane_g1_ParamLimits

0x69fb,	// (0x0002458c) blid2_search_pane_g1

0x6a0b,	// (0x0002459c) blid2_search_pane_t1_ParamLimits

0x6a0b,	// (0x0002459c) blid2_search_pane_t1

0x6a1d,	// (0x000245ae) aid_size_cell_blid2_gps_ParamLimits

0x6a1d,	// (0x000245ae) aid_size_cell_blid2_gps

0x6a2d,	// (0x000245be) blid2_gps_pane_g1_ParamLimits

0x6a2d,	// (0x000245be) blid2_gps_pane_g1

0x6a39,	// (0x000245ca) grid_blid2_satellite_pane_ParamLimits

0x6a39,	// (0x000245ca) grid_blid2_satellite_pane

0x6a49,	// (0x000245da) blid2_navig_pane_g1_ParamLimits

0x6a49,	// (0x000245da) blid2_navig_pane_g1

0x6a55,	// (0x000245e6) blid2_navig_pane_t1_ParamLimits

0x6a55,	// (0x000245e6) blid2_navig_pane_t1

0x6a67,	// (0x000245f8) blid2_navig_pane_t2_ParamLimits

0x6a67,	// (0x000245f8) blid2_navig_pane_t2

0x0001,

0xfa45,	// (0x0002d5d6) blid2_navig_pane_t_ParamLimits

0xfa45,	// (0x0002d5d6) blid2_navig_pane_t

0x6a79,	// (0x0002460a) blid2_navig_ring_pane_ParamLimits

0x6a79,	// (0x0002460a) blid2_navig_ring_pane

0x6a89,	// (0x0002461a) blid2_speed_pane_ParamLimits

0x6a89,	// (0x0002461a) blid2_speed_pane

0x6a95,	// (0x00024626) blid2_tripm_pane_g1_ParamLimits

0x6a95,	// (0x00024626) blid2_tripm_pane_g1

0x6aa5,	// (0x00024636) blid2_tripm_pane_g2_ParamLimits

0x6aa5,	// (0x00024636) blid2_tripm_pane_g2

0x6ab1,	// (0x00024642) blid2_tripm_pane_g3_ParamLimits

0x6ab1,	// (0x00024642) blid2_tripm_pane_g3

0x6abd,	// (0x0002464e) blid2_tripm_pane_g4_ParamLimits

0x6abd,	// (0x0002464e) blid2_tripm_pane_g4

0x6ac9,	// (0x0002465a) blid2_tripm_pane_g5_ParamLimits

0x6ac9,	// (0x0002465a) blid2_tripm_pane_g5

0x0005,

0xfa4a,	// (0x0002d5db) blid2_tripm_pane_g_ParamLimits

0xfa4a,	// (0x0002d5db) blid2_tripm_pane_g

0x6ae5,	// (0x00024676) blid2_tripm_pane_t1_ParamLimits

0x6ae5,	// (0x00024676) blid2_tripm_pane_t1

0x6af9,	// (0x0002468a) blid2_tripm_pane_t2_ParamLimits

0x6af9,	// (0x0002468a) blid2_tripm_pane_t2

0x6b0b,	// (0x0002469c) blid2_tripm_pane_t3_ParamLimits

0x6b0b,	// (0x0002469c) blid2_tripm_pane_t3

0x0003,

0xfa57,	// (0x0002d5e8) blid2_tripm_pane_t_ParamLimits

0xfa57,	// (0x0002d5e8) blid2_tripm_pane_t

0x6b3d,	// (0x000246ce) cell_blid2_satellite_pane_ParamLimits

0x6b3d,	// (0x000246ce) cell_blid2_satellite_pane

0x6b57,	// (0x000246e8) cell_blid2_satellite_pane_g1

0xd3b1,	// (0x0002af42) cell_blid2_satellite_pane_t1

0xa1e6,	// (0x00027d77) blid2_speed_pane_g1

0xd3bf,	// (0x0002af50) blid2_speed_pane_t1

0xd3cd,	// (0x0002af5e) blid2_speed_pane_t2

0x0001,

0xfa60,	// (0x0002d5f1) blid2_speed_pane_t

0xa1e6,	// (0x00027d77) blid2_navig_ring_pane_g1

0x6b60,	// (0x000246f1) blid2_navig_ring_pane_g2

0x6b68,	// (0x000246f9) blid2_navig_ring_pane_g3

0x6b70,	// (0x00024701) blid2_navig_ring_pane_g4

0x6b78,	// (0x00024709) blid2_navig_ring_pane_g5

0x0004,

0xfa65,	// (0x0002d5f6) blid2_navig_ring_pane_g

0x9891,	// (0x00027422) bg_popup_window_pane_cp011

0xd3db,	// (0x0002af6c) popup_blid2_search_window_g1

0xd3e3,	// (0x0002af74) popup_blid2_search_window_t1

0xd3f1,	// (0x0002af82) popup_blid2_search_window_t2

0x0001,

0xfa70,	// (0x0002d601) popup_blid2_search_window_t

0xa2fa,	// (0x00027e8b) main_browser_pane_g1

0xa004,	// (0x00027b95) main_browser_pane_ParamLimits

0x1483,	// (0x0001f014) bg_button_pane_cp011_ParamLimits

0x2240,	// (0x0001fdd1) cell_vitu2_function_pane_g1_ParamLimits

0xad9c,	// (0x0002892d) bg_popup_sub_pane_cp22_ParamLimits

0x654b,	// (0x000240dc) input_focus_pane_cp08_ParamLimits

0x6566,	// (0x000240f7) popup_vitu2_query_button_pane_ParamLimits

0x6566,	// (0x000240f7) popup_vitu2_query_button_pane

0x6575,	// (0x00024106) popup_vitu2_query_input_button_pane

0xcf6e,	// (0x0002aaff) popup_vitu2_query_window_g1_ParamLimits

0x657f,	// (0x00024110) popup_vitu2_query_window_g2_ParamLimits

0xf971,	// (0x0002d502) popup_vitu2_query_window_g_ParamLimits

0x9891,	// (0x00027422) bg_button_pane_cp026

0x6b80,	// (0x00024711) popup_vitu2_query_input_button_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp025

0xd3ff,	// (0x0002af90) popup_vitu2_query_button_pane_t1

0x50cf,	// (0x00022c60) main_mp3_pane_t6

0x50df,	// (0x00022c70) popup_slider_window_cp01

0x1e0e,	// (0x0001f99f) cam4_battery_pane

0x1ee8,	// (0x0001fa79) cam4_battery_pane_cp02

0x23c7,	// (0x0001ff58) cam4_battery_pane_cp01

0x23c7,	// (0x0001ff58) cam4_battery_pane_cp03

0xd40d,	// (0x0002af9e) cam4_battery_pane_g1

0xa1e6,	// (0x00027d77) cam4_battery_pane_g2

0x0001,

0xfa75,	// (0x0002d606) cam4_battery_pane_g

0xc294,	// (0x00029e25) popup_blid_sat_info2_window_t11

0xaa55,	// (0x000285e6) aid_size_touch_mv_arrow_left_ParamLimits

0xaa80,	// (0x00028611) aid_size_touch_mv_arrow_right_ParamLimits

0xaade,	// (0x0002866f) navi_pane_g1_ParamLimits

0xaaea,	// (0x0002867b) navi_pane_g2_ParamLimits

0xab18,	// (0x000286a9) navi_pane_g3_ParamLimits

0xf339,	// (0x0002ceca) navi_pane_g_ParamLimits

0x42e3,	// (0x00021e74) navi_pane_mv_t1_ParamLimits

0x59fc,	// (0x0002358d) grid_imed_effect_pane_ParamLimits

0x2e47,	// (0x000209d8) aid_placing_vt_slider_lsc

0xa249,	// (0x00027dda) aid_placing_vt_slider_prt

0x9f2b,	// (0x00027abc) bg_tb_trans_pane_cp01_ParamLimits

0xc532,	// (0x0002a0c3) popup_image_details_window_g1_ParamLimits

0xc545,	// (0x0002a0d6) popup_image_details_window_g2_ParamLimits

0xc55a,	// (0x0002a0eb) popup_image_details_window_g3_ParamLimits

0xc55a,	// (0x0002a0eb) popup_image_details_window_g3

0xf678,	// (0x0002d209) popup_image_details_window_g_ParamLimits

0xc56e,	// (0x0002a0ff) popup_image_details_window_t1_ParamLimits

0xc580,	// (0x0002a111) popup_image_details_window_t2_ParamLimits

0xc599,	// (0x0002a12a) popup_image_details_window_t3_ParamLimits

0xc5ad,	// (0x0002a13e) popup_image_details_window_t4_ParamLimits

0xc5c8,	// (0x0002a159) popup_image_details_window_t5_ParamLimits

0xf67f,	// (0x0002d210) popup_image_details_window_t_ParamLimits

0x68c4,	// (0x00024455) cl_header_name_pane_ParamLimits

0x68c4,	// (0x00024455) cl_header_name_pane

0x6b88,	// (0x00024719) cl_header_name_pane_t1_ParamLimits

0x6b88,	// (0x00024719) cl_header_name_pane_t1

0x6b9f,	// (0x00024730) cl_header_name_pane_t2_ParamLimits

0x6b9f,	// (0x00024730) cl_header_name_pane_t2

0x6bc9,	// (0x0002475a) cl_header_name_pane_t3_ParamLimits

0x6bc9,	// (0x0002475a) cl_header_name_pane_t3

0x0002,

0xfa7a,	// (0x0002d60b) cl_header_name_pane_t_ParamLimits

0xfa7a,	// (0x0002d60b) cl_header_name_pane_t

0xaba7,	// (0x00028738) navi_pane_mv_g2_ParamLimits

0xccac,	// (0x0002a83d) field_vitu2_entry_pane_g1_ParamLimits

0xccb8,	// (0x0002a849) field_vitu2_entry_pane_g2_ParamLimits

0xadbe,	// (0x0002894f) field_vitu2_entry_pane_g3_ParamLimits

0xadbe,	// (0x0002894f) field_vitu2_entry_pane_g3

0xf87a,	// (0x0002d40b) field_vitu2_entry_pane_g_ParamLimits

0x2106,	// (0x0001fc97) cell_vitu2_itu_pane_g1_ParamLimits

0x211e,	// (0x0001fcaf) cell_vitu2_itu_pane_g2_ParamLimits

0x211e,	// (0x0001fcaf) cell_vitu2_itu_pane_g2

0x0001,

0xf886,	// (0x0002d417) cell_vitu2_itu_pane_g_ParamLimits

0xf886,	// (0x0002d417) cell_vitu2_itu_pane_g

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp05_ParamLimits

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp05

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp03

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp04

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp10_ParamLimits

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp10

0x6866,	// (0x000243f7) bg_vkb2_func_pane_cp08

0x6533,	// (0x000240c4) bg_vkb2_func_pane_cp06

0x6849,	// (0x000243da) bg_vkb2_func_pane_cp07

0xd2ef,	// (0x0002ae80) bg_vkb2_func_pane_cp11_ParamLimits

0xd2ef,	// (0x0002ae80) bg_vkb2_func_pane_cp11

0xd304,	// (0x0002ae95) bg_vkb2_func_pane_cp12_ParamLimits

0xd304,	// (0x0002ae95) bg_vkb2_func_pane_cp12

0x9891,	// (0x00027422) bg_vkb2_func_pane_cp09

0xccf3,	// (0x0002a884) bg_vkb2_func_pane_g1

0xa40b,	// (0x00027f9c) bg_vkb2_func_pane_g2

0xccfb,	// (0x0002a88c) bg_vkb2_func_pane_g3

0xcd03,	// (0x0002a894) bg_vkb2_func_pane_g4

0xcf33,	// (0x0002aac4) bg_vkb2_func_pane_g5

0xcd1b,	// (0x0002a8ac) bg_vkb2_func_pane_g6

0xcd23,	// (0x0002a8b4) bg_vkb2_func_pane_g7

0xcd13,	// (0x0002a8a4) bg_vkb2_func_pane_g8

0xa3eb,	// (0x00027f7c) bg_vkb2_func_pane_g9

0x0008,

0xfa81,	// (0x0002d612) bg_vkb2_func_pane_g

0x6ad7,	// (0x00024668) blid2_tripm_pane_g6_ParamLimits

0x6ad7,	// (0x00024668) blid2_tripm_pane_g6

0xcbfe,	// (0x0002a78f) mp4_progress_pane_g1

0x6b31,	// (0x000246c2) blid2_tripm_values_pane_ParamLimits

0x6b31,	// (0x000246c2) blid2_tripm_values_pane

0x6bee,	// (0x0002477f) blid2_tripm_values_pane_t1

0x6bfc,	// (0x0002478d) blid2_tripm_values_pane_t2

0x6c0a,	// (0x0002479b) blid2_tripm_values_pane_t3

0x6c18,	// (0x000247a9) blid2_tripm_values_pane_t4

0x6c26,	// (0x000247b7) blid2_tripm_values_pane_t5

0x6c34,	// (0x000247c5) blid2_tripm_values_pane_t6

0x6c42,	// (0x000247d3) blid2_tripm_values_pane_t7

0x6c50,	// (0x000247e1) blid2_tripm_values_pane_t8

0x6c5e,	// (0x000247ef) blid2_tripm_values_pane_t9

0x0008,

0xfa94,	// (0x0002d625) blid2_tripm_values_pane_t

0x2e87,	// (0x00020a18) call_video_pane_t1_ParamLimits

0x2ea8,	// (0x00020a39) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0002cd73) call_video_pane_t_ParamLimits

0x45d9,	// (0x0002216a) msg_header_pane_g1_ParamLimits

0xad6c,	// (0x000288fd) msg_header_pane_g2_ParamLimits

0xad6c,	// (0x000288fd) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0002cf6d) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0002cf6d) msg_header_pane_g

0xa004,	// (0x00027b95) main_clock2_pane_ParamLimits

0x584e,	// (0x000233df) grid_clock2_toolbar_pane_ParamLimits

0x584e,	// (0x000233df) grid_clock2_toolbar_pane

0x584e,	// (0x000233df) listscroll_clock2_pane_ParamLimits

0x584e,	// (0x000233df) listscroll_clock2_pane

0x58fe,	// (0x0002348f) main_clock2_pane_t3_ParamLimits

0x58fe,	// (0x0002348f) main_clock2_pane_t3

0x5910,	// (0x000234a1) main_clock2_pane_t4_ParamLimits

0x5910,	// (0x000234a1) main_clock2_pane_t4

0xd417,	// (0x0002afa8) cell_clock2_toolbar_pane

0xd41f,	// (0x0002afb0) cell_clock2_toolbar_pane_cp01

0xd41f,	// (0x0002afb0) cell_clock2_toolbar_pane_cp02

0xd427,	// (0x0002afb8) cell_clock2_toolbar_pane_cp03

0xd42f,	// (0x0002afc0) list_clock2_pane

0xa9da,	// (0x0002856b) scroll_pane_cp10

0xd437,	// (0x0002afc8) list_single_clock2_pane_ParamLimits

0xd437,	// (0x0002afc8) list_single_clock2_pane

0xa1c4,	// (0x00027d55) list_highlight_pane_cp08

0xd444,	// (0x0002afd5) list_single_clock2_pane_t1

0xd452,	// (0x0002afe3) list_single_clock2_pane_t2

0x0001,

0xfaa7,	// (0x0002d638) list_single_clock2_pane_t

0x9891,	// (0x00027422) bg_button_pane_cp10

0xd460,	// (0x0002aff1) cell_clock2_toolbar_pane_g1

0x141e,	// (0x0001efaf) aid_main_viewer_pane_g1_ParamLimits

0x141e,	// (0x0001efaf) aid_main_viewer_pane_g1

0x142a,	// (0x0001efbb) aid_main_viewer_pane_g2_ParamLimits

0x142a,	// (0x0001efbb) aid_main_viewer_pane_g2

0x4667,	// (0x000221f8) aid_main_viewer_pane_g3_ParamLimits

0x4667,	// (0x000221f8) aid_main_viewer_pane_g3

0x4678,	// (0x00022209) aid_main_viewer_pane_g4_ParamLimits

0x4678,	// (0x00022209) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0002cf7e) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0002cf7e) aid_main_viewer_pane_g

0x1476,	// (0x0001f007) main_calc_pane_ParamLimits

0x1491,	// (0x0001f022) main_dialer2_pane_ParamLimits

0x102d,	// (0x0001ebbe) main_cam6_pane

0x102d,	// (0x0001ebbe) main_vid6_pane

0x585a,	// (0x000233eb) listscroll_gen_pane_cp06_ParamLimits

0x585a,	// (0x000233eb) listscroll_gen_pane_cp06

0x5922,	// (0x000234b3) main_clock2_pane_t5_ParamLimits

0x5922,	// (0x000234b3) main_clock2_pane_t5

0x596f,	// (0x00023500) aid_call2_pane_cp10_ParamLimits

0x5981,	// (0x00023512) aid_call_pane_cp10_ParamLimits

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g2_ParamLimits

0x16a8,	// (0x0001f239) popup_clock_analogue_window_cp10_g3_ParamLimits

0x16a8,	// (0x0001f239) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaa49,	// (0x000285da) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf734,	// (0x0002d2c5) popup_clock_analogue_window_cp10_g_ParamLimits

0x16be,	// (0x0001f24f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5c4b,	// (0x000237dc) cell_dialer2_keypad_pane_g2_ParamLimits

0x5c4b,	// (0x000237dc) cell_dialer2_keypad_pane_g2

0x0001,

0xf819,	// (0x0002d3aa) cell_dialer2_keypad_pane_g_ParamLimits

0xf819,	// (0x0002d3aa) cell_dialer2_keypad_pane_g

0x5c67,	// (0x000237f8) cell_dialer2_keypad_pane_t1

0x609f,	// (0x00023c30) main_cset_text2_pane_ParamLimits

0x609f,	// (0x00023c30) main_cset_text2_pane

0xd199,	// (0x0002ad2a) area_vitu2_query_pane_g1_ParamLimits

0x67e8,	// (0x00024379) area_vitu2_query_pane_g2_ParamLimits

0xf9c4,	// (0x0002d555) area_vitu2_query_pane_g_ParamLimits

0xd21d,	// (0x0002adae) area_vitu2_query_pane_t7_ParamLimits

0xd21d,	// (0x0002adae) area_vitu2_query_pane_t7

0x6533,	// (0x000240c4) bg_button_pane_cp018_ParamLimits

0x6849,	// (0x000243da) bg_button_pane_cp021_ParamLimits

0x6855,	// (0x000243e6) bg_button_pane_cp022_ParamLimits

0x6866,	// (0x000243f7) bg_vkb2_func_pane_cp08_ParamLimits

0x6533,	// (0x000240c4) bg_vkb2_func_pane_cp06_ParamLimits

0x6849,	// (0x000243da) bg_vkb2_func_pane_cp07_ParamLimits

0x6878,	// (0x00024409) input_focus_pane_cp09_ParamLimits

0x246b,	// (0x0001fffc) cam6_autofocus_pane_ParamLimits

0x246b,	// (0x0001fffc) cam6_autofocus_pane

0x2487,	// (0x00020018) cam6_image_uncrop_pane_ParamLimits

0x2487,	// (0x00020018) cam6_image_uncrop_pane

0x24c0,	// (0x00020051) cam6_indi_pane_ParamLimits

0x24c0,	// (0x00020051) cam6_indi_pane

0x24da,	// (0x0002006b) cam6_mode_pane_ParamLimits

0x24da,	// (0x0002006b) cam6_mode_pane

0x24ee,	// (0x0002007f) cam6_timer_pane_ParamLimits

0x24ee,	// (0x0002007f) cam6_timer_pane

0x2502,	// (0x00020093) cam6_zoom_pane_ParamLimits

0x2502,	// (0x00020093) cam6_zoom_pane

0x6c6c,	// (0x000247fd) cam6_mode_pane_g1_ParamLimits

0x6c6c,	// (0x000247fd) cam6_mode_pane_g1

0x6c78,	// (0x00024809) cam6_mode_pane_g2_ParamLimits

0x6c78,	// (0x00024809) cam6_mode_pane_g2

0x6c84,	// (0x00024815) cam6_mode_pane_g3_ParamLimits

0x6c84,	// (0x00024815) cam6_mode_pane_g3

0x6c90,	// (0x00024821) cam6_mode_pane_g4_ParamLimits

0x6c90,	// (0x00024821) cam6_mode_pane_g4

0x0003,

0xfaac,	// (0x0002d63d) cam6_mode_pane_g_ParamLimits

0xfaac,	// (0x0002d63d) cam6_mode_pane_g

0xc084,	// (0x00029c15) bg_tb_trans_pane_cp08_ParamLimits

0xc084,	// (0x00029c15) bg_tb_trans_pane_cp08

0xd468,	// (0x0002aff9) cam6_battery_pane_ParamLimits

0xd468,	// (0x0002aff9) cam6_battery_pane

0xd47e,	// (0x0002b00f) cam6_indi_pane_g1_ParamLimits

0xd47e,	// (0x0002b00f) cam6_indi_pane_g1

0xd490,	// (0x0002b021) cam6_indi_pane_g2_ParamLimits

0xd490,	// (0x0002b021) cam6_indi_pane_g2

0xd4a2,	// (0x0002b033) cam6_indi_pane_g3_ParamLimits

0xd4a2,	// (0x0002b033) cam6_indi_pane_g3

0x0002,

0xfab5,	// (0x0002d646) cam6_indi_pane_g_ParamLimits

0xfab5,	// (0x0002d646) cam6_indi_pane_g

0xd4b4,	// (0x0002b045) cam6_indi_pane_t1_ParamLimits

0xd4b4,	// (0x0002b045) cam6_indi_pane_t1

0x5d9e,	// (0x0002392f) cam6_autofocus_pane_g1

0x5d96,	// (0x00023927) cam6_autofocus_pane_g2

0x5dae,	// (0x0002393f) cam6_autofocus_pane_g3

0x5da6,	// (0x00023937) cam6_autofocus_pane_g4

0x0003,

0xfabc,	// (0x0002d64d) cam6_autofocus_pane_g

0xd4da,	// (0x0002b06b) cam6_timer_pane_g1

0xd4e2,	// (0x0002b073) cam6_timer_pane_t1

0xd4f0,	// (0x0002b081) cam6_zoom_cont_pane

0xd4f8,	// (0x0002b089) cam6_zoom_pane_g1

0xd501,	// (0x0002b092) cam6_zoom_pane_g2

0x6c9c,	// (0x0002482d) cam6_zoom_pane_g3

0x0002,

0xfac5,	// (0x0002d656) cam6_zoom_pane_g

0xa1e6,	// (0x00027d77) cam6_battery_pane_g1

0xa1e6,	// (0x00027d77) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) cam6_battery_pane_g

0xd4f8,	// (0x0002b089) cam6_zoom_cont_pane_g1

0xd501,	// (0x0002b092) cam6_zoom_cont_pane_g2

0xd50a,	// (0x0002b09b) cam6_zoom_cont_pane_g3

0x0002,

0xfacc,	// (0x0002d65d) cam6_zoom_cont_pane_g

0x6cba,	// (0x0002484b) cam6_mode_pane_cp_ParamLimits

0x6cba,	// (0x0002484b) cam6_mode_pane_cp

0x6cce,	// (0x0002485f) cam6_zoom_pane_cp_ParamLimits

0x6cce,	// (0x0002485f) cam6_zoom_pane_cp

0x6ce6,	// (0x00024877) vid6_image_uncrop_cif_pane_ParamLimits

0x6ce6,	// (0x00024877) vid6_image_uncrop_cif_pane

0x6d12,	// (0x000248a3) vid6_image_uncrop_nhd_pane_ParamLimits

0x6d12,	// (0x000248a3) vid6_image_uncrop_nhd_pane

0x6d2f,	// (0x000248c0) vid6_image_uncrop_vga_pane_ParamLimits

0x6d2f,	// (0x000248c0) vid6_image_uncrop_vga_pane

0x6d4e,	// (0x000248df) vid6_image_uncrop_wvga_pane_ParamLimits

0x6d4e,	// (0x000248df) vid6_image_uncrop_wvga_pane

0x6d6b,	// (0x000248fc) vid6_indi_pane_ParamLimits

0x6d6b,	// (0x000248fc) vid6_indi_pane

0xc084,	// (0x00029c15) bg_tb_trans_pane_cp09_ParamLimits

0xc084,	// (0x00029c15) bg_tb_trans_pane_cp09

0xd522,	// (0x0002b0b3) cam6_battery_pane_cp_ParamLimits

0xd522,	// (0x0002b0b3) cam6_battery_pane_cp

0xd52e,	// (0x0002b0bf) vid6_indi_pane_g1_ParamLimits

0xd52e,	// (0x0002b0bf) vid6_indi_pane_g1

0xd540,	// (0x0002b0d1) vid6_indi_pane_g2_ParamLimits

0xd540,	// (0x0002b0d1) vid6_indi_pane_g2

0xd552,	// (0x0002b0e3) vid6_indi_pane_g3_ParamLimits

0xd552,	// (0x0002b0e3) vid6_indi_pane_g3

0xd567,	// (0x0002b0f8) vid6_indi_pane_g4_ParamLimits

0xd567,	// (0x0002b0f8) vid6_indi_pane_g4

0xd57c,	// (0x0002b10d) vid6_indi_pane_g5_ParamLimits

0xd57c,	// (0x0002b10d) vid6_indi_pane_g5

0x0004,

0xfad3,	// (0x0002d664) vid6_indi_pane_g_ParamLimits

0xfad3,	// (0x0002d664) vid6_indi_pane_g

0xd596,	// (0x0002b127) vid6_indi_pane_t1_ParamLimits

0xd596,	// (0x0002b127) vid6_indi_pane_t1

0xd5ac,	// (0x0002b13d) vid6_indi_pane_t2_ParamLimits

0xd5ac,	// (0x0002b13d) vid6_indi_pane_t2

0xd5d4,	// (0x0002b165) vid6_indi_pane_t3_ParamLimits

0xd5d4,	// (0x0002b165) vid6_indi_pane_t3

0xd5fc,	// (0x0002b18d) vid6_indi_pane_t4_ParamLimits

0xd5fc,	// (0x0002b18d) vid6_indi_pane_t4

0x0003,

0xfade,	// (0x0002d66f) vid6_indi_pane_t_ParamLimits

0xfade,	// (0x0002d66f) vid6_indi_pane_t

0xd620,	// (0x0002b1b1) wait_bar_pane_cp08

0x6d8e,	// (0x0002491f) main_cset_text2_pane_t1_ParamLimits

0x6d8e,	// (0x0002491f) main_cset_text2_pane_t1

0x6ca5,	// (0x00024836) listscroll_gen_pane_cp06_t1_ParamLimits

0x6ca5,	// (0x00024836) listscroll_gen_pane_cp06_t1

0x102d,	// (0x0001ebbe) main_cam6_set_pane

0xdee6,	// (0x0002ba77) bg_tb_trans_pane_cp06_ParamLimits

0x1e16,	// (0x0001f9a7) cam4_indicators_pane_g1_ParamLimits

0x1e27,	// (0x0001f9b8) cam4_indicators_pane_g2_ParamLimits

0xf856,	// (0x0002d3e7) cam4_indicators_pane_g_ParamLimits

0x1e3f,	// (0x0001f9d0) cam4_indicators_pane_t1_ParamLimits

0x1483,	// (0x0001f014) bg_tb_trans_pane_cp07_ParamLimits

0x1ef0,	// (0x0001fa81) vid4_indicators_pane_g1_ParamLimits

0x1f04,	// (0x0001fa95) vid4_indicators_pane_g2_ParamLimits

0x1f18,	// (0x0001faa9) vid4_indicators_pane_g3_ParamLimits

0x1f29,	// (0x0001faba) vid4_indicators_pane_g4_ParamLimits

0xf868,	// (0x0002d3f9) vid4_indicators_pane_g_ParamLimits

0x1f45,	// (0x0001fad6) vid4_indicators_pane_t1_ParamLimits

0x23cf,	// (0x0001ff60) vid4_progress_pane_g1_ParamLimits

0x23df,	// (0x0001ff70) vid4_progress_pane_g2_ParamLimits

0x23ef,	// (0x0001ff80) vid4_progress_pane_g3_ParamLimits

0x2401,	// (0x0001ff92) vid4_progress_pane_g4_ParamLimits

0xfa0f,	// (0x0002d5a0) vid4_progress_pane_g_ParamLimits

0x2419,	// (0x0001ffaa) vid4_progress_pane_t1_ParamLimits

0x242f,	// (0x0001ffc0) vid4_progress_pane_t2_ParamLimits

0x2444,	// (0x0001ffd5) vid4_progress_pane_t3_ParamLimits

0xfa1a,	// (0x0002d5ab) vid4_progress_pane_t_ParamLimits

0x245a,	// (0x0001ffeb) wait_bar_pane_cp07_ParamLimits

0x6dc5,	// (0x00024956) main_cam6_set_pane_g2_ParamLimits

0x6dc5,	// (0x00024956) main_cam6_set_pane_g2

0x6dd1,	// (0x00024962) main_cset6_listscroll_pane_ParamLimits

0x6dd1,	// (0x00024962) main_cset6_listscroll_pane

0x6dfc,	// (0x0002498d) main_cset6_slider_pane_ParamLimits

0x6dfc,	// (0x0002498d) main_cset6_slider_pane

0x6e08,	// (0x00024999) main_cset6_text2_pane_ParamLimits

0x6e08,	// (0x00024999) main_cset6_text2_pane

0xd62f,	// (0x0002b1c0) main_cset6_text_pane

0xd637,	// (0x0002b1c8) main_cset_list_pane_copy1_ParamLimits

0xd637,	// (0x0002b1c8) main_cset_list_pane_copy1

0xd647,	// (0x0002b1d8) scroll_pane_cp028_copy1

0x6e1b,	// (0x000249ac) cset_list_set_pane_copy1

0x6e31,	// (0x000249c2) aid_position_infowindow_above_copy1

0x6e39,	// (0x000249ca) aid_position_infowindow_below_copy1

0xd650,	// (0x0002b1e1) cset_list_set_pane_g1_copy1

0xd658,	// (0x0002b1e9) cset_list_set_pane_g3_copy1_ParamLimits

0xd658,	// (0x0002b1e9) cset_list_set_pane_g3_copy1

0xd667,	// (0x0002b1f8) cset_list_set_pane_t1_copy1_ParamLimits

0xd667,	// (0x0002b1f8) cset_list_set_pane_t1_copy1

0x9f2b,	// (0x00027abc) list_highlight_pane_cp021_copy1_ParamLimits

0x9f2b,	// (0x00027abc) list_highlight_pane_cp021_copy1

0xd67c,	// (0x0002b20d) cset6_slider_pane_ParamLimits

0xd67c,	// (0x0002b20d) cset6_slider_pane

0xd6a8,	// (0x0002b239) main_cset6_slider_pane_g1_ParamLimits

0xd6a8,	// (0x0002b239) main_cset6_slider_pane_g1

0x6e41,	// (0x000249d2) main_cset6_slider_pane_g2_ParamLimits

0x6e41,	// (0x000249d2) main_cset6_slider_pane_g2

0xd6d0,	// (0x0002b261) main_cset6_slider_pane_g3_ParamLimits

0xd6d0,	// (0x0002b261) main_cset6_slider_pane_g3

0x6e69,	// (0x000249fa) main_cset6_slider_pane_g4_ParamLimits

0x6e69,	// (0x000249fa) main_cset6_slider_pane_g4

0x6e75,	// (0x00024a06) main_cset6_slider_pane_g5_ParamLimits

0x6e75,	// (0x00024a06) main_cset6_slider_pane_g5

0xce34,	// (0x0002a9c5) main_cset6_slider_pane_g7_ParamLimits

0xce34,	// (0x0002a9c5) main_cset6_slider_pane_g7

0xce40,	// (0x0002a9d1) main_cset6_slider_pane_g8_ParamLimits

0xce40,	// (0x0002a9d1) main_cset6_slider_pane_g8

0x6e83,	// (0x00024a14) main_cset6_slider_pane_g9_ParamLimits

0x6e83,	// (0x00024a14) main_cset6_slider_pane_g9

0x6e8f,	// (0x00024a20) main_cset6_slider_pane_g10_ParamLimits

0x6e8f,	// (0x00024a20) main_cset6_slider_pane_g10

0x6e9b,	// (0x00024a2c) main_cset6_slider_pane_g11_ParamLimits

0x6e9b,	// (0x00024a2c) main_cset6_slider_pane_g11

0x6ea7,	// (0x00024a38) main_cset6_slider_pane_g12_ParamLimits

0x6ea7,	// (0x00024a38) main_cset6_slider_pane_g12

0xd02d,	// (0x0002abbe) main_cset6_slider_pane_g13_ParamLimits

0xd02d,	// (0x0002abbe) main_cset6_slider_pane_g13

0xd039,	// (0x0002abca) main_cset6_slider_pane_g14_ParamLimits

0xd039,	// (0x0002abca) main_cset6_slider_pane_g14

0x6eb3,	// (0x00024a44) main_cset6_slider_pane_g15_ParamLimits

0x6eb3,	// (0x00024a44) main_cset6_slider_pane_g15

0x6ecb,	// (0x00024a5c) main_cset6_slider_pane_g16_ParamLimits

0x6ecb,	// (0x00024a5c) main_cset6_slider_pane_g16

0x6ed9,	// (0x00024a6a) main_cset6_slider_pane_g17_ParamLimits

0x6ed9,	// (0x00024a6a) main_cset6_slider_pane_g17

0x0011,

0xfae7,	// (0x0002d678) main_cset6_slider_pane_g_ParamLimits

0xfae7,	// (0x0002d678) main_cset6_slider_pane_g

0xd6e8,	// (0x0002b279) main_cset6_slider_pane_t1_ParamLimits

0xd6e8,	// (0x0002b279) main_cset6_slider_pane_t1

0x6ef3,	// (0x00024a84) main_cset6_slider_pane_t2_ParamLimits

0x6ef3,	// (0x00024a84) main_cset6_slider_pane_t2

0x6f1e,	// (0x00024aaf) main_cset6_slider_pane_t3_ParamLimits

0x6f1e,	// (0x00024aaf) main_cset6_slider_pane_t3

0x6f49,	// (0x00024ada) main_cset6_slider_pane_t4_ParamLimits

0x6f49,	// (0x00024ada) main_cset6_slider_pane_t4

0x6f74,	// (0x00024b05) main_cset6_slider_pane_t5_ParamLimits

0x6f74,	// (0x00024b05) main_cset6_slider_pane_t5

0xd729,	// (0x0002b2ba) main_cset6_slider_pane_t7_ParamLimits

0xd729,	// (0x0002b2ba) main_cset6_slider_pane_t7

0x6fa1,	// (0x00024b32) main_cset6_slider_pane_t8_ParamLimits

0x6fa1,	// (0x00024b32) main_cset6_slider_pane_t8

0x6fc5,	// (0x00024b56) main_cset6_slider_pane_t9_ParamLimits

0x6fc5,	// (0x00024b56) main_cset6_slider_pane_t9

0x6fe9,	// (0x00024b7a) main_cset6_slider_pane_t10_ParamLimits

0x6fe9,	// (0x00024b7a) main_cset6_slider_pane_t10

0x700d,	// (0x00024b9e) main_cset6_slider_pane_t11_ParamLimits

0x700d,	// (0x00024b9e) main_cset6_slider_pane_t11

0xd75f,	// (0x0002b2f0) main_cset6_slider_pane_t14_ParamLimits

0xd75f,	// (0x0002b2f0) main_cset6_slider_pane_t14

0xd798,	// (0x0002b329) main_cset6_slider_pane_t15_ParamLimits

0xd798,	// (0x0002b329) main_cset6_slider_pane_t15

0x000b,

0xfb0c,	// (0x0002d69d) main_cset6_slider_pane_t_ParamLimits

0xfb0c,	// (0x0002d69d) main_cset6_slider_pane_t

0xcb15,	// (0x0002a6a6) cset_slider_pane_g1_copy1

0xd045,	// (0x0002abd6) cset_slider_pane_g2_copy1

0xd04e,	// (0x0002abdf) cset_slider_pane_g3_copy1

0x9891,	// (0x00027422) bg_popup_sub_pane_cp011_copy1

0xd7da,	// (0x0002b36b) main_cset_text_pane_g1_copy1

0xcf82,	// (0x0002ab13) main_cset_text_pane_t1_copy1

0xcf90,	// (0x0002ab21) main_cset_text_pane_t2_copy1

0xcf9e,	// (0x0002ab2f) main_cset_text_pane_t3_copy1

0xcfac,	// (0x0002ab3d) main_cset_text_pane_t4_copy1

0xcfba,	// (0x0002ab4b) main_cset_text_pane_t5_copy1

0xd7e2,	// (0x0002b373) main_cset_text_pane_t6_copy1

0xd7f0,	// (0x0002b381) main_cset_text_pane_t7_copy1

0x7050,	// (0x00024be1) main_cset_text2_pane_t1_copy1

0x1483,	// (0x0001f014) main_ncimui_pane

0x14e2,	// (0x0001f073) popup_query_ncimui_window_ParamLimits

0x14e2,	// (0x0001f073) popup_query_ncimui_window

0xc6a5,	// (0x0002a236) field_cale_ev2_pane_g4_ParamLimits

0xc6a5,	// (0x0002a236) field_cale_ev2_pane_g4

0x5beb,	// (0x0002377c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5beb,	// (0x0002377c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7f0,	// (0x0002d381) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7f0,	// (0x0002d381) cell_video_dialer_keypad_pane_g

0x5c03,	// (0x00023794) cell_video_dialer_keypad_pane_t1

0x9891,	// (0x00027422) bg_popup_window_pane_cp012

0xbefb,	// (0x00029a8c) heading_pane_cp06

0xd81c,	// (0x0002b3ad) ncim_query_content_pane

0x9891,	// (0x00027422) bg_popup_heading_pane_cp01

0xd824,	// (0x0002b3b5) ncim_heading_pane_t1

0xd832,	// (0x0002b3c3) ncim_indicator_popup_pane

0xd844,	// (0x0002b3d5) ncim_query_button_pane

0xd858,	// (0x0002b3e9) ncim_query_content_pane_t1

0xd86a,	// (0x0002b3fb) ncim_query_content_pane_t2

0x0005,

0xfb50,	// (0x0002d6e1) ncim_query_content_pane_t

0xd8a4,	// (0x0002b435) ncim_query_list_pane

0xd8b6,	// (0x0002b447) ncim_query_popup_pane

0xd832,	// (0x0002b3c3) ncim_indicator_popup_pane_ParamLimits

0x71a4,	// (0x00024d35) ncim_query_content_pane_g1_ParamLimits

0x71a4,	// (0x00024d35) ncim_query_content_pane_g1

0xd858,	// (0x0002b3e9) ncim_query_content_pane_t1_ParamLimits

0xd86a,	// (0x0002b3fb) ncim_query_content_pane_t2_ParamLimits

0x71b0,	// (0x00024d41) ncim_query_content_pane_t3_ParamLimits

0x71b0,	// (0x00024d41) ncim_query_content_pane_t3

0x71cd,	// (0x00024d5e) ncim_query_content_pane_t4_ParamLimits

0x71cd,	// (0x00024d5e) ncim_query_content_pane_t4

0x71ea,	// (0x00024d7b) ncim_query_content_pane_t5_ParamLimits

0x71ea,	// (0x00024d7b) ncim_query_content_pane_t5

0xd87c,	// (0x0002b40d) ncim_query_content_pane_t6_ParamLimits

0xd87c,	// (0x0002b40d) ncim_query_content_pane_t6

0xfb50,	// (0x0002d6e1) ncim_query_content_pane_t_ParamLimits

0xd8a4,	// (0x0002b435) ncim_query_list_pane_ParamLimits

0xd8b6,	// (0x0002b447) ncim_query_popup_pane_ParamLimits

0xd8ca,	// (0x0002b45b) wait_bar_pane_cp04

0x9891,	// (0x00027422) input_focus_pane_cp011

0xd8d2,	// (0x0002b463) ncim_query_popup_pane_t1

0xd8e0,	// (0x0002b471) ncim_list_query_list_pane_ParamLimits

0xd8e0,	// (0x0002b471) ncim_list_query_list_pane

0x9891,	// (0x00027422) bg_button_pane_cp027

0xd8ed,	// (0x0002b47e) ncim_query_button_pane_g1

0x9891,	// (0x00027422) list_highlight_pane_cp012

0xd8f7,	// (0x0002b488) ncim_list_query_list_pane_g1

0xd8ff,	// (0x0002b490) ncim_list_query_list_pane_t1

0x1e33,	// (0x0001f9c4) cam4_indicators_pane_g3_ParamLimits

0x1e33,	// (0x0001f9c4) cam4_indicators_pane_g3

0x1f35,	// (0x0001fac6) vid4_indicators_pane_g5_ParamLimits

0x1f35,	// (0x0001fac6) vid4_indicators_pane_g5

0x240d,	// (0x0001ff9e) vid4_progress_pane_g5_ParamLimits

0x240d,	// (0x0001ff9e) vid4_progress_pane_g5

0x7090,	// (0x00024c21) main_ncimui_pane_g1

0x70f8,	// (0x00024c89) ncimui_group_query_pane_ParamLimits

0x70f8,	// (0x00024c89) ncimui_group_query_pane

0x7140,	// (0x00024cd1) ncimui_list_pane_ParamLimits

0x7140,	// (0x00024cd1) ncimui_list_pane

0x7167,	// (0x00024cf8) ncimui_text_pane_ParamLimits

0x7167,	// (0x00024cf8) ncimui_text_pane

0x7207,	// (0x00024d98) ncimui_text_pane_t1_ParamLimits

0x7207,	// (0x00024d98) ncimui_text_pane_t1

0xd90d,	// (0x0002b49e) ncimui_list_single_graphic_pane_ParamLimits

0xd90d,	// (0x0002b49e) ncimui_list_single_graphic_pane

0x7226,	// (0x00024db7) ncimui_query_pane_ParamLimits

0x7226,	// (0x00024db7) ncimui_query_pane

0x9891,	// (0x00027422) list_highlight_pane_cp013

0xd91d,	// (0x0002b4ae) ncim_list_query_list_pane_t1_copy1

0xd92b,	// (0x0002b4bc) ncim_list_single_graphic_pane_g1

0x7239,	// (0x00024dca) ncim_query_button_pane_cp01

0x7245,	// (0x00024dd6) ncim_query_entry_pane_ParamLimits

0x7245,	// (0x00024dd6) ncim_query_entry_pane

0x7258,	// (0x00024de9) ncimui_query_pane_g1

0x7264,	// (0x00024df5) ncimui_query_pane_t1_ParamLimits

0x7264,	// (0x00024df5) ncimui_query_pane_t1

0x9f2b,	// (0x00027abc) input_focus_pane_cp012

0xd933,	// (0x0002b4c4) ncim_query_entry_pane_t1

0xa004,	// (0x00027b95) main_im_pane_ParamLimits

0x1483,	// (0x0001f014) main_mobtv_pane_ParamLimits

0x1483,	// (0x0001f014) main_mobtv_pane

0x6ee7,	// (0x00024a78) main_cset6_slider_pane_g18_ParamLimits

0x6ee7,	// (0x00024a78) main_cset6_slider_pane_g18

0xd6dc,	// (0x0002b26d) main_cset6_slider_pane_g19_ParamLimits

0xd6dc,	// (0x0002b26d) main_cset6_slider_pane_g19

0xadbe,	// (0x0002894f) bg_main_mobtv_pane_ParamLimits

0xadbe,	// (0x0002894f) bg_main_mobtv_pane

0x727d,	// (0x00024e0e) main_mobtv_info_pane

0x7288,	// (0x00024e19) main_mobtv_loading_pane_ParamLimits

0x7288,	// (0x00024e19) main_mobtv_loading_pane

0xd945,	// (0x0002b4d6) main_mobtv_pg_channel_list_pane

0xd94f,	// (0x0002b4e0) main_mobtv_pg_hdr_pane

0x7295,	// (0x00024e26) main_mobtv_programe_curr_pane_ParamLimits

0x7295,	// (0x00024e26) main_mobtv_programe_curr_pane

0x72a2,	// (0x00024e33) main_mobtv_programe_next_pane_ParamLimits

0x72a2,	// (0x00024e33) main_mobtv_programe_next_pane

0xd958,	// (0x0002b4e9) popup_mobtv_noti_window

0xa1e6,	// (0x00027d77) main_tv_pg_hdr_pane_g1

0xd960,	// (0x0002b4f1) main_tv_pg_hdr_pane_g2

0xd968,	// (0x0002b4f9) main_tv_pg_hdr_pane_g3

0xd970,	// (0x0002b501) main_tv_pg_hdr_pane_g4

0xd978,	// (0x0002b509) main_tv_pg_hdr_pane_g5

0xd982,	// (0x0002b513) main_tv_pg_hdr_pane_g6

0xd98c,	// (0x0002b51d) main_tv_pg_hdr_pane_g7

0xd996,	// (0x0002b527) main_tv_pg_hdr_pane_g8

0xd9a0,	// (0x0002b531) main_tv_pg_hdr_pane_g9

0xd9aa,	// (0x0002b53b) main_tv_pg_hdr_pane_g10

0xd9b4,	// (0x0002b545) main_tv_pg_hdr_pane_g11

0x000a,

0xfb5d,	// (0x0002d6ee) main_tv_pg_hdr_pane_g

0xd9be,	// (0x0002b54f) main_tv_pg_hdr_pane_t1

0xd9cc,	// (0x0002b55d) main_tv_pg_hdr_pane_t2

0xd9da,	// (0x0002b56b) main_tv_pg_hdr_pane_t3

0xd9ea,	// (0x0002b57b) main_tv_pg_hdr_pane_t4

0xd9fa,	// (0x0002b58b) main_tv_pg_hdr_pane_t5

0x0004,

0xfb74,	// (0x0002d705) main_tv_pg_hdr_pane_t

0xda0a,	// (0x0002b59b) single_mobtv_pg_channel_pane_ParamLimits

0xda0a,	// (0x0002b59b) single_mobtv_pg_channel_pane

0xda1c,	// (0x0002b5ad) single_mobtv_pg_channel_table_pane

0xa50e,	// (0x0002809f) single_mobtv_pg_channel_thumb_pane

0xda25,	// (0x0002b5b6) single_tv_pg_channel_pane_g1

0xda2e,	// (0x0002b5bf) single_tv_pg_channel_pane_g2

0x0001,

0xfb7f,	// (0x0002d710) single_tv_pg_channel_pane_g

0x9f92,	// (0x00027b23) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9f92,	// (0x00027b23) bg_single_mobtv_pg_channel_thumb_pane

0xda37,	// (0x0002b5c8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda37,	// (0x0002b5c8) single_mobtv_pg_channel_thumb_pane_g1

0xda45,	// (0x0002b5d6) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda45,	// (0x0002b5d6) single_mobtv_pg_channel_thumb_pane_g2

0xda51,	// (0x0002b5e2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda51,	// (0x0002b5e2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb84,	// (0x0002d715) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb84,	// (0x0002d715) single_mobtv_pg_channel_thumb_pane_g

0xda5d,	// (0x0002b5ee) single_mobtv_pg_channel_thumb_pane_t1

0xda6b,	// (0x0002b5fc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb8b,	// (0x0002d71c) single_mobtv_pg_channel_thumb_pane_t

0xa1e6,	// (0x00027d77) bg_single_mobtv_pg_channel_table_pane_g1

0xa1e6,	// (0x00027d77) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0002cf2e) bg_single_mobtv_pg_channel_table_pane_g

0xda79,	// (0x0002b60a) single_mobtv_pg_channel_table_pane_t1

0xda87,	// (0x0002b618) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb90,	// (0x0002d721) single_mobtv_pg_channel_table_pane_t

0x72b7,	// (0x00024e48) main_mobtv_info_pane_g1_ParamLimits

0x72b7,	// (0x00024e48) main_mobtv_info_pane_g1

0x72d3,	// (0x00024e64) main_mobtv_info_pane_t1_ParamLimits

0x72d3,	// (0x00024e64) main_mobtv_info_pane_t1

0x734b,	// (0x00024edc) main_mobtv_info_pane_t2_ParamLimits

0x734b,	// (0x00024edc) main_mobtv_info_pane_t2

0x0002,

0xfb9a,	// (0x0002d72b) main_mobtv_info_pane_t_ParamLimits

0xfb9a,	// (0x0002d72b) main_mobtv_info_pane_t

0x73da,	// (0x00024f6b) wait_bar_pane_cp05

0x73ec,	// (0x00024f7d) main_mobtv_loading_pane_g1_ParamLimits

0x73ec,	// (0x00024f7d) main_mobtv_loading_pane_g1

0x73fa,	// (0x00024f8b) main_mobtv_loading_pane_g2_ParamLimits

0x73fa,	// (0x00024f8b) main_mobtv_loading_pane_g2

0x7406,	// (0x00024f97) main_mobtv_loading_pane_g3_ParamLimits

0x7406,	// (0x00024f97) main_mobtv_loading_pane_g3

0x0002,

0xfba1,	// (0x0002d732) main_mobtv_loading_pane_g_ParamLimits

0xfba1,	// (0x0002d732) main_mobtv_loading_pane_g

0xda95,	// (0x0002b626) main_mobtv_loading_pane_t1_ParamLimits

0xda95,	// (0x0002b626) main_mobtv_loading_pane_t1

0xdaad,	// (0x0002b63e) main_mobtv_loading_pane_t2_ParamLimits

0xdaad,	// (0x0002b63e) main_mobtv_loading_pane_t2

0x0001,

0xfba8,	// (0x0002d739) main_mobtv_loading_pane_t_ParamLimits

0xfba8,	// (0x0002d739) main_mobtv_loading_pane_t

0x7414,	// (0x00024fa5) wait_bar_pane_cp06_ParamLimits

0x7414,	// (0x00024fa5) wait_bar_pane_cp06

0xdad1,	// (0x0002b662) main_mobtv_programe_curr_pane_t1

0xdadf,	// (0x0002b670) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbad,	// (0x0002d73e) main_mobtv_programe_curr_pane_t

0xdaed,	// (0x0002b67e) main_mobtv_programe_next_pane_t1

0xdafb,	// (0x0002b68c) main_mobtv_programe_next_pane_t2

0xdb09,	// (0x0002b69a) main_mobtv_programe_next_pane_t3

0x0002,

0xfbb2,	// (0x0002d743) main_mobtv_programe_next_pane_t

0x9891,	// (0x00027422) bg_popup_mobtv_noti_window_pane

0xdb17,	// (0x0002b6a8) popup_mobtv_noti_window_g1

0xdb1f,	// (0x0002b6b0) popup_mobtv_noti_window_t1

0xdb2d,	// (0x0002b6be) popup_mobtv_noti_window_t2

0x0001,

0xfbb9,	// (0x0002d74a) popup_mobtv_noti_window_t

0xa1e6,	// (0x00027d77) bg_popup_mobtv_noti_window_pane_g1

0x102d,	// (0x0001ebbe) sc_clock_pane

0x102d,	// (0x0001ebbe) main_fs_bigclock_pane

0x6b1f,	// (0x000246b0) blid2_tripm_pane_t4_ParamLimits

0x6b1f,	// (0x000246b0) blid2_tripm_pane_t4

0x7420,	// (0x00024fb1) sc_clock_pane_g1_ParamLimits

0x7420,	// (0x00024fb1) sc_clock_pane_g1

0x742e,	// (0x00024fbf) sc_clock_pane_t1_ParamLimits

0x742e,	// (0x00024fbf) sc_clock_pane_t1

0x7441,	// (0x00024fd2) sc_clock_pane_t2_ParamLimits

0x7441,	// (0x00024fd2) sc_clock_pane_t2

0x7453,	// (0x00024fe4) sc_clock_pane_t3_ParamLimits

0x7453,	// (0x00024fe4) sc_clock_pane_t3

0x0004,

0xfbbe,	// (0x0002d74f) sc_clock_pane_t_ParamLimits

0xfbbe,	// (0x0002d74f) sc_clock_pane_t

0x80eb,	// (0x00025c7c) main_fs_bigclock_indicator_pane_ParamLimits

0x80eb,	// (0x00025c7c) main_fs_bigclock_indicator_pane

0x74d6,	// (0x00025067) main_fs_bigclock_pane_g1_ParamLimits

0x74d6,	// (0x00025067) main_fs_bigclock_pane_g1

0x80f7,	// (0x00025c88) main_fs_bigclock_pane_t1_ParamLimits

0x80f7,	// (0x00025c88) main_fs_bigclock_pane_t1

0x8109,	// (0x00025c9a) main_fs_bigclock_pane_t2_ParamLimits

0x8109,	// (0x00025c9a) main_fs_bigclock_pane_t2

0x811d,	// (0x00025cae) main_fs_bigclock_pane_t3_ParamLimits

0x811d,	// (0x00025cae) main_fs_bigclock_pane_t3

0x0002,

0xfd4f,	// (0x0002d8e0) main_fs_bigclock_pane_t_ParamLimits

0xfd4f,	// (0x0002d8e0) main_fs_bigclock_pane_t

0xe66b,	// (0x0002c1fc) main_fs_bigclock_indicator_pane_g1

0xd84c,	// (0x0002b3dd) ncim_query_content_pane_g2_ParamLimits

0xd84c,	// (0x0002b3dd) ncim_query_content_pane_g2

0x0001,

0xfb4b,	// (0x0002d6dc) ncim_query_content_pane_g_ParamLimits

0xfb4b,	// (0x0002d6dc) ncim_query_content_pane_g

0x7467,	// (0x00024ff8) sc_clock_pane_t4_ParamLimits

0x7467,	// (0x00024ff8) sc_clock_pane_t4

0x1483,	// (0x0001f014) main_radioblah_pane

0x1cfd,	// (0x0001f88e) cell_call4_button_pane_t1_copy1_ParamLimits

0x1cfd,	// (0x0001f88e) cell_call4_button_pane_t1_copy1

0x70aa,	// (0x00024c3b) main_ncimui_pane_t1_ParamLimits

0x70aa,	// (0x00024c3b) main_ncimui_pane_t1

0x70c4,	// (0x00024c55) main_ncimui_pane_t2_ParamLimits

0x70c4,	// (0x00024c55) main_ncimui_pane_t2

0x0002,

0xfb44,	// (0x0002d6d5) main_ncimui_pane_t_ParamLimits

0xfb44,	// (0x0002d6d5) main_ncimui_pane_t

0xdc73,	// (0x0002b804) main_radioblah_anim_pane_ParamLimits

0xdc73,	// (0x0002b804) main_radioblah_anim_pane

0xdc84,	// (0x0002b815) main_radioblah_info_pane_ParamLimits

0xdc84,	// (0x0002b815) main_radioblah_info_pane

0xdc98,	// (0x0002b829) main_radioblah_pane_t1_ParamLimits

0xdc98,	// (0x0002b829) main_radioblah_pane_t1

0xdcb4,	// (0x0002b845) main_radioblah_pane_t2_ParamLimits

0xdcb4,	// (0x0002b845) main_radioblah_pane_t2

0x0003,

0xfbdf,	// (0x0002d770) main_radioblah_pane_t_ParamLimits

0xfbdf,	// (0x0002d770) main_radioblah_pane_t

0x752c,	// (0x000250bd) main_radioblah_rocker_ctrl_pane_ParamLimits

0x752c,	// (0x000250bd) main_radioblah_rocker_ctrl_pane

0xdcfc,	// (0x0002b88d) main_radioblah_info_pane_t1_ParamLimits

0xdcfc,	// (0x0002b88d) main_radioblah_info_pane_t1

0x7571,	// (0x00025102) main_radioblah_info_pane_t2_ParamLimits

0x7571,	// (0x00025102) main_radioblah_info_pane_t2

0x0003,

0xfbe8,	// (0x0002d779) main_radioblah_info_pane_t_ParamLimits

0xfbe8,	// (0x0002d779) main_radioblah_info_pane_t

0xa1e6,	// (0x00027d77) main_radioblah_rocker_ctrl_pane_g1

0x7621,	// (0x000251b2) main_radioblah_rocker_ctrl_pane_g2

0x7629,	// (0x000251ba) main_radioblah_rocker_ctrl_pane_g3

0x7631,	// (0x000251c2) main_radioblah_rocker_ctrl_pane_g4

0x7639,	// (0x000251ca) main_radioblah_rocker_ctrl_pane_g5

0x7641,	// (0x000251d2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbf1,	// (0x0002d782) main_radioblah_rocker_ctrl_pane_g

0x7050,	// (0x00024be1) main_cset_text2_pane_t1_copy1_ParamLimits

0x1d88,	// (0x0001f919) cam4_image_uncrop_qvga_pane

0x1ea5,	// (0x0001fa36) vid4_image_uncrop_qcif_pane

0x24b2,	// (0x00020043) cam6_image_uncrop_qvga_pane_ParamLimits

0x24b2,	// (0x00020043) cam6_image_uncrop_qvga_pane

0xd512,	// (0x0002b0a3) vid6_image_uncrop_qcif_pane_ParamLimits

0xd512,	// (0x0002b0a3) vid6_image_uncrop_qcif_pane

0x9891,	// (0x00027422) bg_popup_preview_window_pane_cp03

0xd7fe,	// (0x0002b38f) list_cset_text2_pane

0xd806,	// (0x0002b397) main_cset6_text2_pane_g1

0xd80e,	// (0x0002b39f) main_cset6_text2_pane_t1

0x7649,	// (0x000251da) list_cset_text2_pane_t1_ParamLimits

0x7649,	// (0x000251da) list_cset_text2_pane_t1

0x1483,	// (0x0001f014) main_radioblah_pane_ParamLimits

0x73c6,	// (0x00024f57) main_mobtv_info_pane_t3_ParamLimits

0x73c6,	// (0x00024f57) main_mobtv_info_pane_t3

0x751a,	// (0x000250ab) main_radioblah_pane_g1

0x7545,	// (0x000250d6) main_radioblah_info_pane_g1

0x75c6,	// (0x00025157) main_radioblah_info_pane_t3_ParamLimits

0x75c6,	// (0x00025157) main_radioblah_info_pane_t3

0x3ed5,	// (0x00021a66) highlight_cell_cale_month_pane_ParamLimits

0x3ed5,	// (0x00021a66) highlight_cell_cale_month_pane

0x102d,	// (0x0001ebbe) main_phob_fisheye_pane

0xc746,	// (0x0002a2d7) scroll_pane_cp0031_ParamLimits

0xc746,	// (0x0002a2d7) scroll_pane_cp0031

0xd620,	// (0x0002b1b1) wait_bar_pane_cp08_ParamLimits

0x6e1b,	// (0x000249ac) cset_list_set_pane_copy1_ParamLimits

0xdd36,	// (0x0002b8c7) highlight_cell_cale_month_pane_g1

0x766a,	// (0x000251fb) highlight_cell_cale_month_pane_t1

0xd289,	// (0x0002ae1a) list_gen_pane_cp01

0xce1f,	// (0x0002a9b0) scroll_pane_01

0x7678,	// (0x00025209) list_single_double_fisheye_pane

0x7681,	// (0x00025212) list_double_fisheye_pane_g1_ParamLimits

0x7681,	// (0x00025212) list_double_fisheye_pane_g1

0x768d,	// (0x0002521e) list_double_fisheye_pane_g2_ParamLimits

0x768d,	// (0x0002521e) list_double_fisheye_pane_g2

0x76a1,	// (0x00025232) list_double_fisheye_pane_g3_ParamLimits

0x76a1,	// (0x00025232) list_double_fisheye_pane_g3

0x0004,

0xfbfe,	// (0x0002d78f) list_double_fisheye_pane_g_ParamLimits

0xfbfe,	// (0x0002d78f) list_double_fisheye_pane_g

0x76ca,	// (0x0002525b) list_double_fisheye_pane_t1_ParamLimits

0x76ca,	// (0x0002525b) list_double_fisheye_pane_t1

0x76e5,	// (0x00025276) list_double_fisheye_pane_t2_ParamLimits

0x76e5,	// (0x00025276) list_double_fisheye_pane_t2

0x0001,

0xfc09,	// (0x0002d79a) list_double_fisheye_pane_t_ParamLimits

0xfc09,	// (0x0002d79a) list_double_fisheye_pane_t

0x102d,	// (0x0001ebbe) main_call5_pane

0x748d,	// (0x0002501e) sc_swipe_pane_ParamLimits

0x748d,	// (0x0002501e) sc_swipe_pane

0x7713,	// (0x000252a4) call5_image_pane_ParamLimits

0x7713,	// (0x000252a4) call5_image_pane

0x7723,	// (0x000252b4) call5_swipe_1_pane_ParamLimits

0x7723,	// (0x000252b4) call5_swipe_1_pane

0x772f,	// (0x000252c0) call5_swipe_2_pane_ParamLimits

0x772f,	// (0x000252c0) call5_swipe_2_pane

0x7749,	// (0x000252da) popup_call5_audio_first_window_ParamLimits

0x7749,	// (0x000252da) popup_call5_audio_first_window

0x9f92,	// (0x00027b23) call5_swipe_1_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) call5_swipe_1_pane_g1

0xdd3e,	// (0x0002b8cf) call5_swipe_1_pane_g2_ParamLimits

0xdd3e,	// (0x0002b8cf) call5_swipe_1_pane_g2

0x0001,

0xfc0e,	// (0x0002d79f) call5_swipe_1_pane_g_ParamLimits

0xfc0e,	// (0x0002d79f) call5_swipe_1_pane_g

0xdd4a,	// (0x0002b8db) call5_swipe_1_pane_t1_ParamLimits

0xdd4a,	// (0x0002b8db) call5_swipe_1_pane_t1

0x9f92,	// (0x00027b23) call5_swipe_2_pane_g1_ParamLimits

0x9f92,	// (0x00027b23) call5_swipe_2_pane_g1

0xdd5f,	// (0x0002b8f0) call5_swipe_2_pane_g2_ParamLimits

0xdd5f,	// (0x0002b8f0) call5_swipe_2_pane_g2

0x0001,

0xfc13,	// (0x0002d7a4) call5_swipe_2_pane_g_ParamLimits

0xfc13,	// (0x0002d7a4) call5_swipe_2_pane_g

0xdd6b,	// (0x0002b8fc) call5_swipe_2_pane_t1_ParamLimits

0xdd6b,	// (0x0002b8fc) call5_swipe_2_pane_t1

0xdd80,	// (0x0002b911) sc_swipe_pane_g1_ParamLimits

0xdd80,	// (0x0002b911) sc_swipe_pane_g1

0xdd8d,	// (0x0002b91e) sc_swipe_pane_g2_ParamLimits

0xdd8d,	// (0x0002b91e) sc_swipe_pane_g2

0x0001,

0xfc18,	// (0x0002d7a9) sc_swipe_pane_g_ParamLimits

0xfc18,	// (0x0002d7a9) sc_swipe_pane_g

0xdd99,	// (0x0002b92a) sc_swipe_pane_t1_ParamLimits

0xdd99,	// (0x0002b92a) sc_swipe_pane_t1

0x102d,	// (0x0001ebbe) main_cmail_launcher_pane

0x7757,	// (0x000252e8) aid_size_cell_cmail_l_ParamLimits

0x7757,	// (0x000252e8) aid_size_cell_cmail_l

0x7765,	// (0x000252f6) grid_cmail_l_pane_ParamLimits

0x7765,	// (0x000252f6) grid_cmail_l_pane

0x7775,	// (0x00025306) cell_cmail_l_pane_ParamLimits

0x7775,	// (0x00025306) cell_cmail_l_pane

0xddae,	// (0x0002b93f) cell_cmail_l_pane_g1_ParamLimits

0xddae,	// (0x0002b93f) cell_cmail_l_pane_g1

0xddba,	// (0x0002b94b) cell_cmail_l_pane_t1_ParamLimits

0xddba,	// (0x0002b94b) cell_cmail_l_pane_t1

0xddd0,	// (0x0002b961) cell_cmail_l_pane_t2_ParamLimits

0xddd0,	// (0x0002b961) cell_cmail_l_pane_t2

0x0001,

0xfc1d,	// (0x0002d7ae) cell_cmail_l_pane_t_ParamLimits

0xfc1d,	// (0x0002d7ae) cell_cmail_l_pane_t

0x9f2b,	// (0x00027abc) grid_highlight_pane_cp018_ParamLimits

0x9f2b,	// (0x00027abc) grid_highlight_pane_cp018

0x0e90,	// (0x0001ea21) main2_pane_ParamLimits

0x0e90,	// (0x0001ea21) main2_pane

0xa093,	// (0x00027c24) popup_sp_fs_action_menu_bg_pane_g1

0xa09b,	// (0x00027c2c) popup_sp_fs_action_menu_bg_pane_g2

0xa0a3,	// (0x00027c34) popup_sp_fs_action_menu_bg_pane_g3

0xa0ab,	// (0x00027c3c) popup_sp_fs_action_menu_bg_pane_g4

0xa0b3,	// (0x00027c44) popup_sp_fs_action_menu_bg_pane_g5

0xa0bb,	// (0x00027c4c) popup_sp_fs_action_menu_bg_pane_g6

0xa0c3,	// (0x00027c54) popup_sp_fs_action_menu_bg_pane_g7

0xa0cb,	// (0x00027c5c) popup_sp_fs_action_menu_bg_pane_g8

0xa0d3,	// (0x00027c64) popup_sp_fs_action_menu_bg_pane_g9

0xa0db,	// (0x00027c6c) popup_sp_fs_action_menu_bg_pane_g10

0xa0db,	// (0x00027c6c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0002cc96) popup_sp_fs_action_menu_bg_pane_g

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g2

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002cd44) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002cd44) list_medium_line_x2_t3_g3_g

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t2

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g3_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t3_g2_g

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t2

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g2_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g2

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g3

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t4_g4_g

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t2

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t3

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002cd60) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002cd60) list_medium_line_x2_t4_g4_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g2

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g3

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t2_g4_g

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g4_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g4_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g2

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002cd44) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002cd44) list_medium_line_x2_t2_g3_g

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g3_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g3_t

0x4074,	// (0x00021c05) main_sp_fs_list_pane_ParamLimits

0x4074,	// (0x00021c05) main_sp_fs_list_pane

0x4080,	// (0x00021c11) sp_fs_scroll_pane_ParamLimits

0x4080,	// (0x00021c11) sp_fs_scroll_pane

0xa721,	// (0x000282b2) list_medium_line_x2_t3_t1

0xa721,	// (0x000282b2) list_medium_line_x2_t3_t2

0xa721,	// (0x000282b2) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0002ce12) list_medium_line_x2_t3_t

0xa721,	// (0x000282b2) list_medium_line_x3_t4_t1

0xa721,	// (0x000282b2) list_medium_line_x3_t4_t2

0xa721,	// (0x000282b2) list_medium_line_x3_t4_t3

0xa721,	// (0x000282b2) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0002ce19) list_medium_line_x3_t4_t

0xa721,	// (0x000282b2) list_medium_line_x4_t5_t1

0xa721,	// (0x000282b2) list_medium_line_x4_t5_t2

0xa721,	// (0x000282b2) list_medium_line_x4_t5_t3

0xa721,	// (0x000282b2) list_medium_line_x4_t5_t4

0xa721,	// (0x000282b2) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0002ce22) list_medium_line_x4_t5_t

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g1

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g2

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g3

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002cd57) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002cd57) list_medium_line_t4_g4_g

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t1

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t2

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t3

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t4_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002cd60) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002cd60) list_medium_line_t4_g4_t

0x4104,	// (0x00021c95) chi_dic_find_pane_g1

0x149f,	// (0x0001f030) main_tport_pane

0xa721,	// (0x000282b2) list_medium_line_plain_t1

0x9f92,	// (0x00027b23) list_medium_line_t2_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_t2_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_t2_g2_g

0xa200,	// (0x00027d91) list_medium_line_t2_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_g2_t1

0xa200,	// (0x00027d91) list_medium_line_t2_g2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_t2_g2_t

0xd292,	// (0x0002ae23) aid_sp_fs_list_icon_a_sm

0xd29a,	// (0x0002ae2b) aid_sp_fs_list_icon_d

0xd2a2,	// (0x0002ae33) aid_sp_fs_text_primary

0xd2ab,	// (0x0002ae3c) aid_sp_fs_text_secondary

0x9891,	// (0x00027422) list_medium_line

0x9891,	// (0x00027422) list_medium_line_g2

0x9891,	// (0x00027422) list_medium_line_g3

0x9891,	// (0x00027422) list_medium_line_plain

0x9891,	// (0x00027422) list_medium_line_plain_t2

0x9891,	// (0x00027422) list_medium_line_plain_t3

0x9891,	// (0x00027422) list_medium_line_right_icon

0x9891,	// (0x00027422) list_medium_line_right_iconx2

0x9891,	// (0x00027422) list_medium_line_t2

0x9891,	// (0x00027422) list_medium_line_t2_g2

0x9891,	// (0x00027422) list_medium_line_t2_g3

0x9891,	// (0x00027422) list_medium_line_t2_right_icon

0x9891,	// (0x00027422) list_medium_line_t2_right_iconx2

0x9891,	// (0x00027422) list_medium_line_t3

0x9891,	// (0x00027422) list_medium_line_t3_g2

0x9891,	// (0x00027422) list_medium_line_t3_g3

0x9891,	// (0x00027422) list_medium_line_t3_right_iconx2

0x9891,	// (0x00027422) list_medium_line_t4_g4

0x9891,	// (0x00027422) list_medium_line_x2

0x9891,	// (0x00027422) list_medium_line_x2_t2_g2

0x9891,	// (0x00027422) list_medium_line_x2_t2_g3

0x9891,	// (0x00027422) list_medium_line_x2_t2_g4

0x9891,	// (0x00027422) list_medium_line_x2_t3

0x9891,	// (0x00027422) list_medium_line_x2_t3_g2

0x9891,	// (0x00027422) list_medium_line_x2_t3_g3

0x9891,	// (0x00027422) list_medium_line_x2_t3_g4

0x9891,	// (0x00027422) list_medium_line_x2_t4_g2

0x9891,	// (0x00027422) list_medium_line_x2_t4_g4

0x9891,	// (0x00027422) list_medium_line_x3

0x9891,	// (0x00027422) list_medium_line_x3_t4

0x9891,	// (0x00027422) list_medium_line_x3_t4_g4

0x9891,	// (0x00027422) list_medium_line_x4_t4

0x9891,	// (0x00027422) list_medium_line_x4_t4_g7

0x9891,	// (0x00027422) list_medium_line_x4_t5

0x69a4,	// (0x00024535) list_single_fs_dyc_pane_ParamLimits

0x69a4,	// (0x00024535) list_single_fs_dyc_pane

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g1

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g2

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g3

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g4

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g5

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x4_t4_g7_g6

0x9fa0,	// (0x00027b31) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9fa0,	// (0x00027b31) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb25,	// (0x0002d6b6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb25,	// (0x0002d6b6) list_medium_line_x4_t4_g7_g

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t1

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t2

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x4_t4_g7_t3

0xa774,	// (0x00028305) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa774,	// (0x00028305) list_medium_line_x4_t4_g7_t4

0xa774,	// (0x00028305) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa774,	// (0x00028305) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb34,	// (0x0002d6c5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb34,	// (0x0002d6c5) list_medium_line_x4_t4_g7_t

0x7033,	// (0x00024bc4) list_single_dyc_row_pane_ParamLimits

0x7033,	// (0x00024bc4) list_single_dyc_row_pane

0x7707,	// (0x00025298) call5_gesture_pane_ParamLimits

0x7707,	// (0x00025298) call5_gesture_pane

0x773b,	// (0x000252cc) call5_windows_pane_ParamLimits

0x773b,	// (0x000252cc) call5_windows_pane

0x778e,	// (0x0002531f) call5_swipe_1_pane_cp_ParamLimits

0x778e,	// (0x0002531f) call5_swipe_1_pane_cp

0x779a,	// (0x0002532b) call5_swipe_2_pane_cp_ParamLimits

0x779a,	// (0x0002532b) call5_swipe_2_pane_cp

0xa1c4,	// (0x00027d55) call5_image_pane_cp

0x77a6,	// (0x00025337) popup_call5_audio_first_window_cp_ParamLimits

0x77a6,	// (0x00025337) popup_call5_audio_first_window_cp

0xdd80,	// (0x0002b911) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd80,	// (0x0002b911) call5_swipe_1_pane_g1_cp

0xdded,	// (0x0002b97e) call5_swipe_1_pane_g2_cp

0xdd99,	// (0x0002b92a) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd99,	// (0x0002b92a) call5_swipe_1_pane_t1_cp

0xdd80,	// (0x0002b911) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd80,	// (0x0002b911) call5_swipe_2_pane_g1_cp

0xddf5,	// (0x0002b986) call5_swipe_2_pane_g2_cp

0xddfd,	// (0x0002b98e) call5_swipe_2_pane_t1_cp_ParamLimits

0xddfd,	// (0x0002b98e) call5_swipe_2_pane_t1_cp

0x9f2b,	// (0x00027abc) main_sp_fs_email_pane

0xde12,	// (0x0002b9a3) main_sp_fs_listscroll_pane_te

0x77b4,	// (0x00025345) popup_sp_fs_action_menu_pane_ParamLimits

0x77b4,	// (0x00025345) popup_sp_fs_action_menu_pane

0xa1e6,	// (0x00027d77) bg_sp_fs_ctrlbar_pane_g1

0xde1b,	// (0x0002b9ac) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde24,	// (0x0002b9b5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbf74,	// (0x00029b05) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa1e6,	// (0x00027d77) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc22,	// (0x0002d7b3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbae1,	// (0x00029672) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbae1,	// (0x00029672) bg_sp_fs_ctrlbar_ddmenu_pane

0xde2d,	// (0x0002b9be) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde2d,	// (0x0002b9be) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde39,	// (0x0002b9ca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde39,	// (0x0002b9ca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc2b,	// (0x0002d7bc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc2b,	// (0x0002d7bc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde45,	// (0x0002b9d6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde45,	// (0x0002b9d6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa1e6,	// (0x00027d77) list_medium_line_t2_right_icon_g1

0xa721,	// (0x000282b2) list_medium_line_t2_right_icon_t1

0xa721,	// (0x000282b2) list_medium_line_t2_right_icon_t2

0x0001,

0xfc30,	// (0x0002d7c1) list_medium_line_t2_right_icon_t

0xad9c,	// (0x0002892d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xad9c,	// (0x0002892d) bg_sp_fs_ctrlbar_pane

0x783b,	// (0x000253cc) main_sp_fs_ctrlbar_button_pane_cp01

0x7843,	// (0x000253d4) main_sp_fs_ctrlbar_ddmenu_pane

0xde97,	// (0x0002ba28) main_sp_fs_ctrlbar_pane_g1

0xdea3,	// (0x0002ba34) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc35,	// (0x0002d7c6) main_sp_fs_ctrlbar_pane_g

0x787f,	// (0x00025410) main_sp_fs_ctrlbar_pane_t1

0x78ba,	// (0x0002544b) main_sp_fs_ctrlbar_pane

0x78d0,	// (0x00025461) main_sp_fs_listscroll_pane_te_cp01

0x78e1,	// (0x00025472) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x78e1,	// (0x00025472) popup_sp_fs_action_menu_pane_cp01

0x9f2b,	// (0x00027abc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9f2b,	// (0x00027abc) bg_sp_fs_highlight_list_pane_cp01

0xdeca,	// (0x0002ba5b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdeca,	// (0x0002ba5b) sp_fs_action_menu_list_gene_pane_g1

0xded9,	// (0x0002ba6a) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xded9,	// (0x0002ba6a) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc43,	// (0x0002d7d4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc43,	// (0x0002d7d4) sp_fs_action_menu_list_gene_pane_g

0xdef4,	// (0x0002ba85) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdef4,	// (0x0002ba85) sp_fs_action_menu_list_gene_pane_t1

0xdf0c,	// (0x0002ba9d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf0c,	// (0x0002ba9d) sp_fs_action_menu_list_gene_pane

0xdf2b,	// (0x0002babc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf2b,	// (0x0002babc) popup_sp_fs_action_menu_bg_pane

0xdf39,	// (0x0002baca) sp_fs_action_menu_list_pane_ParamLimits

0xdf39,	// (0x0002baca) sp_fs_action_menu_list_pane

0x7901,	// (0x00025492) sp_fs_scroll_pane_cp01_ParamLimits

0x7901,	// (0x00025492) sp_fs_scroll_pane_cp01

0xa721,	// (0x000282b2) list_medium_line_plain_t2_t1

0xa721,	// (0x000282b2) list_medium_line_plain_t2_t2

0x0001,

0xfc30,	// (0x0002d7c1) list_medium_line_plain_t2_t

0xa721,	// (0x000282b2) list_medium_line_plain_t3_t1

0xa721,	// (0x000282b2) list_medium_line_plain_t3_t2

0xa721,	// (0x000282b2) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0002ce12) list_medium_line_plain_t3_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t2_g2_g

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g2_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_x2_t2_g2_t

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_x2_t4_g2_g

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t2

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t3

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0002cd60) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0002cd60) list_medium_line_x2_t4_g2_t

0xa1e6,	// (0x00027d77) list_medium_line_t3_right_iconx2_g1

0xa1e6,	// (0x00027d77) list_medium_line_t3_right_iconx2_g2

0xa1e6,	// (0x00027d77) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0002cf33) list_medium_line_t3_right_iconx2_g

0xa721,	// (0x000282b2) list_medium_line_t3_right_iconx2_t1

0xa721,	// (0x000282b2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc30,	// (0x0002d7c1) list_medium_line_t3_right_iconx2_t

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g1

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g2

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g3

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002cd57) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002cd57) list_medium_line_x3_t4_g4_g

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t1

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t2

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t3

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002cd60) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002cd60) list_medium_line_x3_t4_g4_t

0x7927,	// (0x000254b8) list_single_dyc_row_text_pane_t1_ParamLimits

0x7927,	// (0x000254b8) list_single_dyc_row_text_pane_t1

0x795e,	// (0x000254ef) list_single_dyc_row_text_pane_t2_ParamLimits

0x795e,	// (0x000254ef) list_single_dyc_row_text_pane_t2

0xdf59,	// (0x0002baea) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf59,	// (0x0002baea) list_single_dyc_row_text_pane_t3

0x0005,

0xfc48,	// (0x0002d7d9) list_single_dyc_row_text_pane_t_ParamLimits

0xfc48,	// (0x0002d7d9) list_single_dyc_row_text_pane_t

0xdf7d,	// (0x0002bb0e) list_single_dyc_row_pane_g1_ParamLimits

0xdf7d,	// (0x0002bb0e) list_single_dyc_row_pane_g1

0xdf89,	// (0x0002bb1a) list_single_dyc_row_pane_g2_ParamLimits

0xdf89,	// (0x0002bb1a) list_single_dyc_row_pane_g2

0xdf95,	// (0x0002bb26) list_single_dyc_row_pane_g3_ParamLimits

0xdf95,	// (0x0002bb26) list_single_dyc_row_pane_g3

0xdfa1,	// (0x0002bb32) list_single_dyc_row_pane_g4_ParamLimits

0xdfa1,	// (0x0002bb32) list_single_dyc_row_pane_g4

0x0003,

0xfc55,	// (0x0002d7e6) list_single_dyc_row_pane_g_ParamLimits

0xfc55,	// (0x0002d7e6) list_single_dyc_row_pane_g

0xdfad,	// (0x0002bb3e) list_single_dyc_row_text_pane_ParamLimits

0xdfad,	// (0x0002bb3e) list_single_dyc_row_text_pane

0x9891,	// (0x00027422) bg_sp_fs_scroll_pane

0xdfcc,	// (0x0002bb5d) thumb_sp_fs_scroll_pane

0x9f92,	// (0x00027b23) list_medium_line_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g1

0xa200,	// (0x00027d91) list_medium_line_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t1

0x9f92,	// (0x00027b23) list_medium_line_x2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_x2_g

0xa200,	// (0x00027d91) list_medium_line_x2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t1

0x9f92,	// (0x00027b23) list_medium_line_x3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x3_g1

0xdee6,	// (0x0002ba77) list_medium_line_x3_g2_ParamLimits

0xdee6,	// (0x0002ba77) list_medium_line_x3_g2

0x0001,

0xfc5e,	// (0x0002d7ef) list_medium_line_x3_g_ParamLimits

0xfc5e,	// (0x0002d7ef) list_medium_line_x3_g

0xdfd5,	// (0x0002bb66) list_medium_line_x3_t1_ParamLimits

0xdfd5,	// (0x0002bb66) list_medium_line_x3_t1

0xdfe9,	// (0x0002bb7a) thumb_sp_fs_scroll_pane_g1

0xdff2,	// (0x0002bb83) thumb_sp_fs_scroll_pane_g2

0xdffb,	// (0x0002bb8c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x0002d7f4) thumb_sp_fs_scroll_pane_g

0xdfe9,	// (0x0002bb7a) bg_sp_fs_scroll_pane_g1

0xdff2,	// (0x0002bb83) bg_sp_fs_scroll_pane_g2

0xdffb,	// (0x0002bb8c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc63,	// (0x0002d7f4) bg_sp_fs_scroll_pane_g

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g1

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g2

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g3

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0002cd57) list_medium_line_x2_t3_g4_g

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t1

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t2

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_x2_t3_g4_t

0x9f92,	// (0x00027b23) list_medium_line_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_g2_g

0xa200,	// (0x00027d91) list_medium_line_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_g2_t1

0x9f92,	// (0x00027b23) list_medium_line_t3_g2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g2_g1

0x9f92,	// (0x00027b23) list_medium_line_t3_g2_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002cd52) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002cd52) list_medium_line_t3_g2_g

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t1

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t2

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_g2_t

0xa1e6,	// (0x00027d77) list_medium_line_right_icon_g1

0xa721,	// (0x000282b2) list_medium_line_right_icon_t1

0x9f92,	// (0x00027b23) list_medium_line_t2_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g1

0xa200,	// (0x00027d91) list_medium_line_t2_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_t1

0xa200,	// (0x00027d91) list_medium_line_t2_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_t2_t

0x9f92,	// (0x00027b23) list_medium_line_t3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g1

0xa200,	// (0x00027d91) list_medium_line_t3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_t1

0xa200,	// (0x00027d91) list_medium_line_t3_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_t2

0xa200,	// (0x00027d91) list_medium_line_t3_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_t

0x9f92,	// (0x00027b23) list_medium_line_g3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g3_g1

0x9f92,	// (0x00027b23) list_medium_line_g3_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g3_g2

0x9f92,	// (0x00027b23) list_medium_line_g3_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0002cd44) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0002cd44) list_medium_line_g3_g

0xa200,	// (0x00027d91) list_medium_line_g3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_g3_t1

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g1

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g2

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002cd44) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002cd44) list_medium_line_t2_g3_g

0xa200,	// (0x00027d91) list_medium_line_t2_g3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_g3_t1

0xa200,	// (0x00027d91) list_medium_line_t2_g3_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0002cdc7) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0002cdc7) list_medium_line_t2_g3_t

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g1_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g1

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g2_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g2

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g3_ParamLimits

0x9f92,	// (0x00027b23) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002cd44) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002cd44) list_medium_line_t3_g3_g

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t1_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t1

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t2_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t2

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t3_ParamLimits

0xa200,	// (0x00027d91) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002cd4b) list_medium_line_t3_g3_t

0xa1e6,	// (0x00027d77) list_medium_line_right_iconx2_g1

0xa1e6,	// (0x00027d77) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002cf2e) list_medium_line_right_iconx2_g

0xa721,	// (0x000282b2) list_medium_line_right_iconx2_t1

0xa1e6,	// (0x00027d77) list_medium_line_t2_right_iconx2_g1

0xa1e6,	// (0x00027d77) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002cf2e) list_medium_line_t2_right_iconx2_g

0xa721,	// (0x000282b2) list_medium_line_t2_right_iconx2_t1

0xa721,	// (0x000282b2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc30,	// (0x0002d7c1) list_medium_line_t2_right_iconx2_t

0xa721,	// (0x000282b2) list_medium_line_x4_t4_t1

0xa721,	// (0x000282b2) list_medium_line_x4_t4_t2

0xa721,	// (0x000282b2) list_medium_line_x4_t4_t3

0xa721,	// (0x000282b2) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0002ce19) list_medium_line_x4_t4_t

0x7aab,	// (0x0002563c) tport_appsw_pane_ParamLimits

0x7aab,	// (0x0002563c) tport_appsw_pane

0x7ab9,	// (0x0002564a) tport_contact_pane_ParamLimits

0x7ab9,	// (0x0002564a) tport_contact_pane

0x7ac9,	// (0x0002565a) tport_listscroll_pane_ParamLimits

0x7ac9,	// (0x0002565a) tport_listscroll_pane

0x7ad9,	// (0x0002566a) cell_tport_appsw_pane_ParamLimits

0x7ad9,	// (0x0002566a) cell_tport_appsw_pane

0x9fa0,	// (0x00027b31) tport_appsw_pane_g1_ParamLimits

0x9fa0,	// (0x00027b31) tport_appsw_pane_g1

0xe004,	// (0x0002bb95) tport_contact_pane_g1

0xe00d,	// (0x0002bb9e) tport_contact_pane_t1

0xe01b,	// (0x0002bbac) tport_contact_pane_t2

0x0001,

0xfc6a,	// (0x0002d7fb) tport_contact_pane_t

0xe029,	// (0x0002bbba) list_tport_pane

0xe032,	// (0x0002bbc3) scroll_pane_cp_030

0x7b0c,	// (0x0002569d) cell_tport_appsw_pane_g1

0x7b1c,	// (0x000256ad) cell_tport_appsw_pane_t1

0x7b2a,	// (0x000256bb) grid_highlight_pane_cp019

0x7b32,	// (0x000256c3) list_tport_double_graphic_pane_ParamLimits

0x7b32,	// (0x000256c3) list_tport_double_graphic_pane

0x9f2b,	// (0x00027abc) list_highlight_pane_cp023_ParamLimits

0x9f2b,	// (0x00027abc) list_highlight_pane_cp023

0x7b43,	// (0x000256d4) list_tport_double_graphic_pane_g1_ParamLimits

0x7b43,	// (0x000256d4) list_tport_double_graphic_pane_g1

0x7b50,	// (0x000256e1) list_tport_double_graphic_pane_t1_ParamLimits

0x7b50,	// (0x000256e1) list_tport_double_graphic_pane_t1

0x7b65,	// (0x000256f6) list_tport_double_graphic_pane_t2_ParamLimits

0x7b65,	// (0x000256f6) list_tport_double_graphic_pane_t2

0x0001,

0xfc76,	// (0x0002d807) list_tport_double_graphic_pane_t_ParamLimits

0xfc76,	// (0x0002d807) list_tport_double_graphic_pane_t

0x9891,	// (0x00027422) main_cale_note_pane

0x20ec,	// (0x0001fc7d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x20ec,	// (0x0001fc7d) cell_vitu2_function_top_wide_pane_cp01

0x73da,	// (0x00024f6b) wait_bar_pane_cp05_ParamLimits

0x9f2b,	// (0x00027abc) listscroll_cmail_pane

0xe043,	// (0x0002bbd4) list_cmail_pane

0x7b77,	// (0x00025708) list_cmail_body_pane

0x7b9f,	// (0x00025730) list_single_cmail_header_caption_pane

0x7bce,	// (0x0002575f) list_single_cmail_header_detail_pane_ParamLimits

0x7bce,	// (0x0002575f) list_single_cmail_header_detail_pane

0xe05a,	// (0x0002bbeb) list_single_cmail_header_caption_pane_t1

0x7c0b,	// (0x0002579c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7c0b,	// (0x0002579c) list_single_cmail_header_detail_pane_g1

0xe071,	// (0x0002bc02) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe071,	// (0x0002bc02) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc7b,	// (0x0002d80c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc7b,	// (0x0002d80c) list_single_cmail_header_detail_pane_g

0x7c21,	// (0x000257b2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7c21,	// (0x000257b2) list_single_cmail_header_detail_pane_t1

0x7c5d,	// (0x000257ee) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7c5d,	// (0x000257ee) list_single_cmail_header_editor_pane_bg

0xda2e,	// (0x0002b5bf) list_cmail_body_pane_g1

0xe0ae,	// (0x0002bc3f) list_cmail_body_pane_t1

0xccf3,	// (0x0002a884) list_single_cmail_header_editor_pane_bg_g1

0xa40b,	// (0x00027f9c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd03,	// (0x0002a894) list_single_cmail_header_editor_pane_bg_g1_copy2

0xccfb,	// (0x0002a88c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcf33,	// (0x0002aac4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd23,	// (0x0002a8b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd13,	// (0x0002a8a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd1b,	// (0x0002a8ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa3eb,	// (0x00027f7c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7c74,	// (0x00025805) calenote_gesture_pane_ParamLimits

0x7c74,	// (0x00025805) calenote_gesture_pane

0x7c8e,	// (0x0002581f) calenote_window_pane_ParamLimits

0x7c8e,	// (0x0002581f) calenote_window_pane

0xe0bc,	// (0x0002bc4d) popup_note_window_cp01

0x7ca6,	// (0x00025837) calenote_swipe_1_pane_ParamLimits

0x7ca6,	// (0x00025837) calenote_swipe_1_pane

0x779a,	// (0x0002532b) calenote_swipe_2_pane_ParamLimits

0x779a,	// (0x0002532b) calenote_swipe_2_pane

0xdd80,	// (0x0002b911) calenote_swipe_1_pane_g1_ParamLimits

0xdd80,	// (0x0002b911) calenote_swipe_1_pane_g1

0xdd8d,	// (0x0002b91e) calenote_swipe_1_pane_g2_ParamLimits

0xdd8d,	// (0x0002b91e) calenote_swipe_1_pane_g2

0x0001,

0xfc18,	// (0x0002d7a9) calenote_swipe_1_pane_g_ParamLimits

0xfc18,	// (0x0002d7a9) calenote_swipe_1_pane_g

0xe0ce,	// (0x0002bc5f) calenote_swipe_1_pane_t1_ParamLimits

0xe0ce,	// (0x0002bc5f) calenote_swipe_1_pane_t1

0xdd80,	// (0x0002b911) calenote_swipe_2_pane_g1_ParamLimits

0xdd80,	// (0x0002b911) calenote_swipe_2_pane_g1

0xe0ed,	// (0x0002bc7e) calenote_swipe_2_pane_g2_ParamLimits

0xe0ed,	// (0x0002bc7e) calenote_swipe_2_pane_g2

0x0001,

0xfc87,	// (0x0002d818) calenote_swipe_2_pane_g_ParamLimits

0xfc87,	// (0x0002d818) calenote_swipe_2_pane_g

0xe0f9,	// (0x0002bc8a) calenote_swipe_2_pane_t1_ParamLimits

0xe0f9,	// (0x0002bc8a) calenote_swipe_2_pane_t1

0x9891,	// (0x00027422) main_mup_navstr_pane

0x565e,	// (0x000231ef) main_mup3_pane_t7_ParamLimits

0x565e,	// (0x000231ef) main_mup3_pane_t7

0x191e,	// (0x0001f4af) main_mp4_pane_g6_ParamLimits

0x191e,	// (0x0001f4af) main_mp4_pane_g6

0x1c2f,	// (0x0001f7c0) main_image3_pane_t4_ParamLimits

0x1c2f,	// (0x0001f7c0) main_image3_pane_t4

0x7cb9,	// (0x0002584a) popup_navstr_preview_pane_ParamLimits

0x7cb9,	// (0x0002584a) popup_navstr_preview_pane

0x7cc5,	// (0x00025856) scroll_navstr_pane_ParamLimits

0x7cc5,	// (0x00025856) scroll_navstr_pane

0x9891,	// (0x00027422) bg_popup_preview_window_pane_cp04

0xe120,	// (0x0002bcb1) popup_navstr_preview_pane_t1

0x7cd1,	// (0x00025862) scroll_navstr_pane_g1_ParamLimits

0x7cd1,	// (0x00025862) scroll_navstr_pane_g1

0x7cde,	// (0x0002586f) scroll_navstr_pane_t1_ParamLimits

0x7cde,	// (0x0002586f) scroll_navstr_pane_t1

0xe0c5,	// (0x0002bc56) bg_button_pane_cp014

0xe0c5,	// (0x0002bc56) bg_button_pane_cp030

0x76ad,	// (0x0002523e) list_double_fisheye_pane_g4_ParamLimits

0x76ad,	// (0x0002523e) list_double_fisheye_pane_g4

0x76b9,	// (0x0002524a) list_double_fisheye_pane_g5_ParamLimits

0x76b9,	// (0x0002524a) list_double_fisheye_pane_g5

0xd063,	// (0x0002abf4) sp_fs_scroll_pane_cp03

0xde97,	// (0x0002ba28) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdea3,	// (0x0002ba34) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc35,	// (0x0002d7c6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x787f,	// (0x00025410) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe052,	// (0x0002bbe3) sp_fs_scroll_pane_cp02

0xa10c,	// (0x00027c9d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa10c,	// (0x00027c9d) popup_sp_fs_calendar_preview_list_single_pane

0x9891,	// (0x00027422) main_cam6_pano_pane

0x1483,	// (0x0001f014) main_mup3_pane_ParamLimits

0x9891,	// (0x00027422) main_phacti_pane

0x72af,	// (0x00024e40) bg_button_pane_cp11

0x72c7,	// (0x00024e58) main_mobtv_info_pane_g2_ParamLimits

0x72c7,	// (0x00024e58) main_mobtv_info_pane_g2

0x0001,

0xfb95,	// (0x0002d726) main_mobtv_info_pane_g_ParamLimits

0xfb95,	// (0x0002d726) main_mobtv_info_pane_g

0x7479,	// (0x0002500a) sc_clock_pane_t5_ParamLimits

0x7479,	// (0x0002500a) sc_clock_pane_t5

0x751a,	// (0x000250ab) main_radioblah_pane_g1_ParamLimits

0xdccc,	// (0x0002b85d) main_radioblah_pane_t3_ParamLimits

0xdccc,	// (0x0002b85d) main_radioblah_pane_t3

0xdce4,	// (0x0002b875) main_radioblah_pane_t4_ParamLimits

0xdce4,	// (0x0002b875) main_radioblah_pane_t4

0x7538,	// (0x000250c9) main_radioblah_text_pane_ParamLimits

0x7538,	// (0x000250c9) main_radioblah_text_pane

0x7545,	// (0x000250d6) main_radioblah_info_pane_g1_ParamLimits

0x75da,	// (0x0002516b) main_radioblah_info_pane_t4_ParamLimits

0x75da,	// (0x0002516b) main_radioblah_info_pane_t4

0x9f2b,	// (0x00027abc) main_sp_fs_calendar_pane

0x7cf0,	// (0x00025881) main_phacti_pane_g1

0x7cf8,	// (0x00025889) phacti_note_pane_ParamLimits

0x7cf8,	// (0x00025889) phacti_note_pane

0xe137,	// (0x0002bcc8) phacti_term_pane_ParamLimits

0xe137,	// (0x0002bcc8) phacti_term_pane

0xe14c,	// (0x0002bcdd) phacti_note_pane_t1_ParamLimits

0xe14c,	// (0x0002bcdd) phacti_note_pane_t1

0xe163,	// (0x0002bcf4) phacti_term_pane_g1

0xe16b,	// (0x0002bcfc) phacti_term_pane_t1_ParamLimits

0xe16b,	// (0x0002bcfc) phacti_term_pane_t1

0xe195,	// (0x0002bd26) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe19d,	// (0x0002bd2e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc91,	// (0x0002d822) popup_sp_fs_calendar_preview_list_single_pane_g

0xe1a5,	// (0x0002bd36) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe1a5,	// (0x0002bd36) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1bb,	// (0x0002bd4c) aid_popup_sp_fs_bg_corner_pane

0xa1e6,	// (0x00027d77) popup_sp_fs_calendar_preview_bg_pane_g1

0x9891,	// (0x00027422) popup_sp_fs_calendar_preview_bg_pane

0xe1c3,	// (0x0002bd54) popup_sp_fs_calendar_preview_list_pane

0xad9c,	// (0x0002892d) bg_main_sp_fs_cale_pane_ParamLimits

0xad9c,	// (0x0002892d) bg_main_sp_fs_cale_pane

0xe1d4,	// (0x0002bd65) listscroll_cale_mrui_pane_ParamLimits

0xe1d4,	// (0x0002bd65) listscroll_cale_mrui_pane

0xe1e9,	// (0x0002bd7a) listscroll_sp_fs_schedule_track_pane

0xe1f2,	// (0x0002bd83) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1f2,	// (0x0002bd83) main_sp_fs_ctrlbar_pane_cp01

0xe205,	// (0x0002bd96) main_sp_fs_ribbon_pane

0xe20d,	// (0x0002bd9e) popup_sp_fs_cale_preview_window

0x7d5b,	// (0x000258ec) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7d5b,	// (0x000258ec) list_single_sp_fs_schedule_track_pane

0x9f84,	// (0x00027b15) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9f84,	// (0x00027b15) bg_sp_fs_highlight_list_pane_cp03

0x7d81,	// (0x00025912) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7d81,	// (0x00025912) list_single_sp_fs_schedule_track_pane_g1

0x7d8d,	// (0x0002591e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7d8d,	// (0x0002591e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc96,	// (0x0002d827) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc96,	// (0x0002d827) list_single_sp_fs_schedule_track_pane_g

0x7d99,	// (0x0002592a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7d99,	// (0x0002592a) list_single_sp_fs_schedule_track_pane_t1

0x7db1,	// (0x00025942) sp_fs_schedule_track_pane_ParamLimits

0x7db1,	// (0x00025942) sp_fs_schedule_track_pane

0xe21f,	// (0x0002bdb0) sp_fs_schedule_track_pane_g1

0xe227,	// (0x0002bdb8) sp_fs_schedule_track_pane_g2

0xe22f,	// (0x0002bdc0) sp_fs_schedule_track_pane_g3

0xe237,	// (0x0002bdc8) sp_fs_schedule_track_pane_g4

0xe23f,	// (0x0002bdd0) sp_fs_schedule_track_pane_g5

0x0004,

0xfc9b,	// (0x0002d82c) sp_fs_schedule_track_pane_g

0xccf3,	// (0x0002a884) bg_sp_fs_schedule_viewer_highlight_g1

0xa40b,	// (0x00027f9c) bg_sp_fs_schedule_viewer_highlight_g2

0xccfb,	// (0x0002a88c) bg_sp_fs_schedule_viewer_highlight_g3

0xcd03,	// (0x0002a894) bg_sp_fs_schedule_viewer_highlight_g4

0xcf33,	// (0x0002aac4) bg_sp_fs_schedule_viewer_highlight_g5

0xcd13,	// (0x0002a8a4) bg_sp_fs_schedule_viewer_highlight_g6

0xcd1b,	// (0x0002a8ac) bg_sp_fs_schedule_viewer_highlight_g7

0xcd23,	// (0x0002a8b4) bg_sp_fs_schedule_viewer_highlight_g8

0xa3eb,	// (0x00027f7c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca6,	// (0x0002d837) bg_sp_fs_schedule_viewer_highlight_g

0x9891,	// (0x00027422) bg_main_sp_fs_ribbon_pane

0x7dc1,	// (0x00025952) main_sp_fs_ribbon_pane_g1

0xe247,	// (0x0002bdd8) main_sp_fs_ribbon_pane_t1

0x7dca,	// (0x0002595b) main_sp_fs_ribbon_pane_t2

0xe256,	// (0x0002bde7) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb9,	// (0x0002d84a) main_sp_fs_ribbon_pane_t

0xe265,	// (0x0002bdf6) main_sp_fs_ribbon_scheduler_pane

0xe26d,	// (0x0002bdfe) bg_main_sp_fs_ribbon_pane_g1

0xe276,	// (0x0002be07) bg_main_sp_fs_ribbon_pane_g2

0xe27f,	// (0x0002be10) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcc0,	// (0x0002d851) bg_main_sp_fs_ribbon_pane_g

0xe287,	// (0x0002be18) main_sp_fs_ribbon_scheduler_pane_g1

0xe290,	// (0x0002be21) main_sp_fs_ribbon_scheduler_pane_g2

0xe299,	// (0x0002be2a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc7,	// (0x0002d858) main_sp_fs_ribbon_scheduler_pane_g

0xe2a2,	// (0x0002be33) list_cale_mrui_pane

0x7dd9,	// (0x0002596a) sp_fs_scroll_pane_cp07_ParamLimits

0x7dd9,	// (0x0002596a) sp_fs_scroll_pane_cp07

0x7df5,	// (0x00025986) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7df5,	// (0x00025986) bg_sp_fs_schedule_viewer_highlight

0xe2af,	// (0x0002be40) list_single_sp_fs_schedule_track_pane_cp01

0xe2b7,	// (0x0002be48) list_sp_fs_schedule_track_pane

0xe2bf,	// (0x0002be50) sp_fs_scroll_pane_cp06_ParamLimits

0xe2bf,	// (0x0002be50) sp_fs_scroll_pane_cp06

0xa1e6,	// (0x00027d77) bgmain_sp_fs_calendar_pane_g1

0x7e02,	// (0x00025993) list_single_cale_mrui_pane_ParamLimits

0x7e02,	// (0x00025993) list_single_cale_mrui_pane

0xe2d1,	// (0x0002be62) list_single_cale_mrui_row_pane_ParamLimits

0xe2d1,	// (0x0002be62) list_single_cale_mrui_row_pane

0xe2de,	// (0x0002be6f) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2de,	// (0x0002be6f) list_single_cale_mrui_row_pane_g1

0xe323,	// (0x0002beb4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe323,	// (0x0002beb4) list_single_cale_mrui_row_pane_t1

0x7e30,	// (0x000259c1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7e30,	// (0x000259c1) list_single_cale_mrui_row_pane_t2

0xe335,	// (0x0002bec6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe335,	// (0x0002bec6) list_single_cale_mrui_row_pane_t3

0xe364,	// (0x0002bef5) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe364,	// (0x0002bef5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd5,	// (0x0002d866) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd5,	// (0x0002d866) list_single_cale_mrui_row_pane_t

0x7e96,	// (0x00025a27) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7e96,	// (0x00025a27) list_single_cmail_header_editor_pane_bg_cp01

0x7ebe,	// (0x00025a4f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7ebe,	// (0x00025a4f) list_single_cmail_header_editor_pane_bg_cp02

0x7eda,	// (0x00025a6b) main_radioblah_text_pane_t1_ParamLimits

0x7eda,	// (0x00025a6b) main_radioblah_text_pane_t1

0xe393,	// (0x0002bf24) cam6_indi_pane_cp01

0xe39b,	// (0x0002bf2c) cam6_mode_pane_cp01

0xe3a3,	// (0x0002bf34) cam6_pano_pane

0xe3ac,	// (0x0002bf3d) cam6_zoom_pane_cp01

0xe3b4,	// (0x0002bf45) cam6_pano_image_pane

0xe3bf,	// (0x0002bf50) cam6_pano_pane_g1

0xda2e,	// (0x0002b5bf) cam6_pano_pane_g2

0xe3c8,	// (0x0002bf59) cam6_pano_pane_g3

0xe3d1,	// (0x0002bf62) cam6_pano_pane_g4

0xc9c1,	// (0x0002a552) cam6_pano_pane_g5

0xe3da,	// (0x0002bf6b) cam6_pano_pane_g6

0xe3e4,	// (0x0002bf75) cam6_pano_pane_g7

0xe3ec,	// (0x0002bf7d) cam6_pano_pane_g8

0xe3f5,	// (0x0002bf86) cam6_pano_pane_g9

0x0008,

0xfcde,	// (0x0002d86f) cam6_pano_pane_g

0x9891,	// (0x00027422) main_browser_tag_pane

0xe118,	// (0x0002bca9) grid_navstr_albumart_pane

0xe400,	// (0x0002bf91) cell_navstr_albumart_pane_ParamLimits

0xe400,	// (0x0002bf91) cell_navstr_albumart_pane

0xe420,	// (0x0002bfb1) cell_navstr_albumart_pane_g1

0xbdfb,	// (0x0002998c) cell_navstr_albumart_pane_g2

0xbe0b,	// (0x0002999c) cell_navstr_albumart_pane_g3

0xbe03,	// (0x00029994) cell_navstr_albumart_pane_g4

0x0003,

0xfcf1,	// (0x0002d882) cell_navstr_albumart_pane_g

0x7ef5,	// (0x00025a86) bt_list_pane_ParamLimits

0x7ef5,	// (0x00025a86) bt_list_pane

0x7f16,	// (0x00025aa7) bt_list_pane_t1

0x7f25,	// (0x00025ab6) bt_list_pane_t2

0x0001,

0xfcfa,	// (0x0002d88b) bt_list_pane_t

0x9891,	// (0x00027422) main_cale_prevew_pane

0x7f34,	// (0x00025ac5) popup_cale_preview_window_ParamLimits

0x7f34,	// (0x00025ac5) popup_cale_preview_window

0x9f2b,	// (0x00027abc) bg_popup_preview_window_pane_cp05_ParamLimits

0x9f2b,	// (0x00027abc) bg_popup_preview_window_pane_cp05

0xe428,	// (0x0002bfb9) list_cale_preview_pane_ParamLimits

0xe428,	// (0x0002bfb9) list_cale_preview_pane

0x7f4d,	// (0x00025ade) list_double_cale_preview_pane_ParamLimits

0x7f4d,	// (0x00025ade) list_double_cale_preview_pane

0x7f5f,	// (0x00025af0) list_single_cale_preview_pane_ParamLimits

0x7f5f,	// (0x00025af0) list_single_cale_preview_pane

0x7f73,	// (0x00025b04) list_single_cale_preview_pane_g1

0x7f7b,	// (0x00025b0c) list_single_cale_preview_pane_t1_ParamLimits

0x7f7b,	// (0x00025b0c) list_single_cale_preview_pane_t1

0x7f90,	// (0x00025b21) list_double_cale_preview_pane_g1

0x7f98,	// (0x00025b29) list_double_cale_preview_pane_t1_ParamLimits

0x7f98,	// (0x00025b29) list_double_cale_preview_pane_t1

0x7fad,	// (0x00025b3e) list_double_cale_preview_pane_t2_ParamLimits

0x7fad,	// (0x00025b3e) list_double_cale_preview_pane_t2

0x0001,

0xfcff,	// (0x0002d890) list_double_cale_preview_pane_t_ParamLimits

0xfcff,	// (0x0002d890) list_double_cale_preview_pane_t

0x9891,	// (0x00027422) main_ezdial_pane

0x9f2b,	// (0x00027abc) main_sp_fs_email_pane_ParamLimits

0x77f8,	// (0x00025389) cmail_ddmenu_btn01_pane_ParamLimits

0x77f8,	// (0x00025389) cmail_ddmenu_btn01_pane

0x780d,	// (0x0002539e) cmail_ddmenu_btn02_pane_ParamLimits

0x780d,	// (0x0002539e) cmail_ddmenu_btn02_pane

0x7825,	// (0x000253b6) cmail_ddmenu_btn03_pane_ParamLimits

0x7825,	// (0x000253b6) cmail_ddmenu_btn03_pane

0x78ba,	// (0x0002544b) main_sp_fs_ctrlbar_pane_ParamLimits

0x78d0,	// (0x00025461) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7b77,	// (0x00025708) list_cmail_body_pane_ParamLimits

0xe068,	// (0x0002bbf9) bg_button_pane_cp12

0xe07d,	// (0x0002bc0e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe07d,	// (0x0002bc0e) list_single_cmail_header_detail_pane_g3

0xe08a,	// (0x0002bc1b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe08a,	// (0x0002bc1b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc82,	// (0x0002d813) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc82,	// (0x0002d813) list_single_cmail_header_detail_pane_t

0xe180,	// (0x0002bd11) phacti_term_pane_t2_ParamLimits

0xe180,	// (0x0002bd11) phacti_term_pane_t2

0x0001,

0xfc8c,	// (0x0002d81d) phacti_term_pane_t_ParamLimits

0xfc8c,	// (0x0002d81d) phacti_term_pane_t

0xe434,	// (0x0002bfc5) aid_size_list_single_double

0x7fc5,	// (0x00025b56) popup_ezdial_listscroll_window

0x7fe9,	// (0x00025b7a) popup_number_entry_window_cp01

0xa1c4,	// (0x00027d55) bg_popup_call_pane_cp09

0xe440,	// (0x0002bfd1) ezdial_list_pane

0xe448,	// (0x0002bfd9) scroll_pane_cp23

0xbae1,	// (0x00029672) bg_button_pane_cp028_ParamLimits

0xbae1,	// (0x00029672) bg_button_pane_cp028

0x7ff7,	// (0x00025b88) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7ff7,	// (0x00025b88) cmail_ddmenu_btn01_pane_g1

0x8007,	// (0x00025b98) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8007,	// (0x00025b98) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd04,	// (0x0002d895) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd04,	// (0x0002d895) cmail_ddmenu_btn01_pane_g

0xe450,	// (0x0002bfe1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe450,	// (0x0002bfe1) cmail_ddmenu_btn01_pane_t1

0xad9c,	// (0x0002892d) bg_button_pane_cp029_ParamLimits

0xad9c,	// (0x0002892d) bg_button_pane_cp029

0x8007,	// (0x00025b98) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8007,	// (0x00025b98) cmail_ddmenu_btn02_pane_g1

0x801f,	// (0x00025bb0) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x801f,	// (0x00025bb0) cmail_ddmenu_btn02_pane_t1

0x9f84,	// (0x00027b15) bg_button_pane_cp031_ParamLimits

0x9f84,	// (0x00027b15) bg_button_pane_cp031

0x8007,	// (0x00025b98) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8007,	// (0x00025b98) cmail_ddmenu_btn03_pane_g1

0x801f,	// (0x00025bb0) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x801f,	// (0x00025bb0) cmail_ddmenu_btn03_pane_t1

0x5c67,	// (0x000237f8) cell_dialer2_keypad_pane_t1_ParamLimits

0x5c81,	// (0x00023812) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5c81,	// (0x00023812) cell_dialer2_keypad_pane_t1_copy1

0x70f0,	// (0x00024c81) ncimui_group_button_pane

0x9f2b,	// (0x00027abc) main_sp_fs_calendar_pane_ParamLimits

0x7b9f,	// (0x00025730) list_single_cmail_header_caption_pane_ParamLimits

0xe1cb,	// (0x0002bd5c) aid_recal_txt_sm_pane

0x9891,	// (0x00027422) mian_recal_day_pane

0xe20d,	// (0x0002bd9e) popup_sp_fs_cale_preview_window_ParamLimits

0xe465,	// (0x0002bff6) list_recal_day_pane

0xe4a7,	// (0x0002c038) list_single_recal_day_pane_ParamLimits

0xe4a7,	// (0x0002c038) list_single_recal_day_pane

0xe4b9,	// (0x0002c04a) list_single_recal_day_pane_g1_ParamLimits

0xe4b9,	// (0x0002c04a) list_single_recal_day_pane_g1

0xe4c5,	// (0x0002c056) list_single_recal_day_pane_g2_ParamLimits

0xe4c5,	// (0x0002c056) list_single_recal_day_pane_g2

0xe4d1,	// (0x0002c062) list_single_recal_day_pane_g3_ParamLimits

0xe4d1,	// (0x0002c062) list_single_recal_day_pane_g3

0x8043,	// (0x00025bd4) list_single_recal_day_pane_g4_ParamLimits

0x8043,	// (0x00025bd4) list_single_recal_day_pane_g4

0xe4dd,	// (0x0002c06e) list_single_recal_day_pane_g5_ParamLimits

0xe4dd,	// (0x0002c06e) list_single_recal_day_pane_g5

0xe4e9,	// (0x0002c07a) list_single_recal_day_pane_g6_ParamLimits

0xe4e9,	// (0x0002c07a) list_single_recal_day_pane_g6

0x0004,

0xfd13,	// (0x0002d8a4) list_single_recal_day_pane_g_ParamLimits

0xfd13,	// (0x0002d8a4) list_single_recal_day_pane_g

0xe4fd,	// (0x0002c08e) list_single_recal_day_pane_t1

0xe50f,	// (0x0002c0a0) list_single_recal_day_pane_t2

0x0001,

0xfd1e,	// (0x0002d8af) list_single_recal_day_pane_t

0x805b,	// (0x00025bec) ncimui_query_button_pane_ParamLimits

0x805b,	// (0x00025bec) ncimui_query_button_pane

0x806b,	// (0x00025bfc) ncimui_query_button_pane_t1_ParamLimits

0x806b,	// (0x00025bfc) ncimui_query_button_pane_t1

0xe521,	// (0x0002c0b2) ncimui_query_button_pane_t2_ParamLimits

0xe521,	// (0x0002c0b2) ncimui_query_button_pane_t2

0x0001,

0xfd23,	// (0x0002d8b4) ncimui_query_button_pane_t_ParamLimits

0xfd23,	// (0x0002d8b4) ncimui_query_button_pane_t

0x807e,	// (0x00025c0f) query_button_pane_ParamLimits

0x807e,	// (0x00025c0f) query_button_pane

0x9891,	// (0x00027422) bg_button_pane_cp0028

0xe534,	// (0x0002c0c5) query_button_pane_t1

0x149f,	// (0x0001f030) main_tport_pane_ParamLimits

0x7a81,	// (0x00025612) bg_popup_window_pane_cp01_ParamLimits

0x7a81,	// (0x00025612) bg_popup_window_pane_cp01

0x7a8f,	// (0x00025620) heading_pane_cp08_ParamLimits

0x7a8f,	// (0x00025620) heading_pane_cp08

0x7a9d,	// (0x0002562e) heading_pane_cp07_ParamLimits

0x7a9d,	// (0x0002562e) heading_pane_cp07

0x7b0c,	// (0x0002569d) cell_tport_appsw_pane_g2

0x0002,

0xfc6f,	// (0x0002d800) cell_tport_appsw_pane_g

0x4533,	// (0x000220c4) input_candi_list_open_g1

0xa5ce,	// (0x0002815f) list_cale_time_pane_g6_ParamLimits

0xa5ce,	// (0x0002815f) list_cale_time_pane_g6

0x50e9,	// (0x00022c7a) aid_size_touch_calib_1_ParamLimits

0x50e9,	// (0x00022c7a) aid_size_touch_calib_1

0x50f5,	// (0x00022c86) aid_size_touch_calib_2_ParamLimits

0x50f5,	// (0x00022c86) aid_size_touch_calib_2

0x5103,	// (0x00022c94) aid_size_touch_calib_3_ParamLimits

0x5103,	// (0x00022c94) aid_size_touch_calib_3

0x5113,	// (0x00022ca4) aid_size_touch_calib_4_ParamLimits

0x5113,	// (0x00022ca4) aid_size_touch_calib_4

0x5121,	// (0x00022cb2) main_touch_calib_button_group_pane_ParamLimits

0x5121,	// (0x00022cb2) main_touch_calib_button_group_pane

0x512f,	// (0x00022cc0) main_touch_calib_pane_g1_ParamLimits

0x513b,	// (0x00022ccc) main_touch_calib_pane_g2_ParamLimits

0x5147,	// (0x00022cd8) main_touch_calib_pane_g3_ParamLimits

0x5153,	// (0x00022ce4) main_touch_calib_pane_g4_ParamLimits

0xf6b1,	// (0x0002d242) main_touch_calib_pane_g_ParamLimits

0x515f,	// (0x00022cf0) main_touch_calib_pane_t1_ParamLimits

0x5178,	// (0x00022d09) main_touch_calib_pane_t2_ParamLimits

0x5191,	// (0x00022d22) main_touch_calib_pane_t3_ParamLimits

0x51a7,	// (0x00022d38) main_touch_calib_pane_t4_ParamLimits

0x51bd,	// (0x00022d4e) main_touch_calib_pane_t5_ParamLimits

0xf6ba,	// (0x0002d24b) main_touch_calib_pane_t_ParamLimits

0xc76a,	// (0x0002a2fb) list_single_fp_cale_pane_g3_ParamLimits

0xc76a,	// (0x0002a2fb) list_single_fp_cale_pane_g3

0x1483,	// (0x0001f014) bg_button_pane_cp012_ParamLimits

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp03_ParamLimits

0x22eb,	// (0x0001fe7c) cell_vitu2_function_top_pane_g1_ParamLimits

0x1483,	// (0x0001f014) bg_vkb2_func_pane_cp04_ParamLimits

0x7078,	// (0x00024c09) main_ncimui_button_group_pane_ParamLimits

0x7078,	// (0x00024c09) main_ncimui_button_group_pane

0x70de,	// (0x00024c6f) main_ncimui_pane_t3_ParamLimits

0x70de,	// (0x00024c6f) main_ncimui_pane_t3

0xe12e,	// (0x0002bcbf) phacti_button_group_pane

0xe434,	// (0x0002bfc5) aid_size_list_single_double_ParamLimits

0x7fc5,	// (0x00025b56) popup_ezdial_listscroll_window_ParamLimits

0x7fe9,	// (0x00025b7a) popup_number_entry_window_cp01_ParamLimits

0x808b,	// (0x00025c1c) phacti_button_pane_ParamLimits

0x808b,	// (0x00025c1c) phacti_button_pane

0x9891,	// (0x00027422) bg_button_pane_cp14

0xe542,	// (0x0002c0d3) phacti_button_pane_t1

0x809c,	// (0x00025c2d) main_touch_calib_button_pane_ParamLimits

0x809c,	// (0x00025c2d) main_touch_calib_button_pane

0xa004,	// (0x00027b95) bg_button_pane_cp18_ParamLimits

0xa004,	// (0x00027b95) bg_button_pane_cp18

0xe550,	// (0x0002c0e1) main_touch_calib_button_pane_t1_ParamLimits

0xe550,	// (0x0002c0e1) main_touch_calib_button_pane_t1

0xe566,	// (0x0002c0f7) main_touch_calib_button_pane_t2_ParamLimits

0xe566,	// (0x0002c0f7) main_touch_calib_button_pane_t2

0x0001,

0xfd28,	// (0x0002d8b9) main_touch_calib_button_pane_t_ParamLimits

0xfd28,	// (0x0002d8b9) main_touch_calib_button_pane_t

0x9891,	// (0x00027422) cell_ncimui_button_pane

0x9891,	// (0x00027422) bg_button_pane_cp032

0xe584,	// (0x0002c115) cell_ncimui_button_pane_t1

0x1b42,	// (0x0001f6d3) image3_infobar_pane_ParamLimits

0x1b42,	// (0x0001f6d3) image3_infobar_pane

0x749b,	// (0x0002502c) fs_bigclock_status_pane_ParamLimits

0x749b,	// (0x0002502c) fs_bigclock_status_pane

0x74a8,	// (0x00025039) main_fs_bigclock_clock_pane_ParamLimits

0x74a8,	// (0x00025039) main_fs_bigclock_clock_pane

0x74bc,	// (0x0002504d) main_fs_bigclock_indi_pane_ParamLimits

0x74bc,	// (0x0002504d) main_fs_bigclock_indi_pane

0x74e4,	// (0x00025075) main_fs_bigclock_swipe_pane_ParamLimits

0x74e4,	// (0x00025075) main_fs_bigclock_swipe_pane

0x9891,	// (0x00027422) main_fs_clock_dumped_data

0xdb3b,	// (0x0002b6cc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb3b,	// (0x0002b6cc) list_single_fs_bigclock_indicator_pane_g1

0xdb57,	// (0x0002b6e8) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb57,	// (0x0002b6e8) list_single_fs_bigclock_indicator_pane_g2

0xdb71,	// (0x0002b702) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb71,	// (0x0002b702) list_single_fs_bigclock_indicator_pane_g3

0xdb8b,	// (0x0002b71c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb8b,	// (0x0002b71c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc9,	// (0x0002d75a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc9,	// (0x0002d75a) list_single_fs_bigclock_indicator_pane_g

0xdbb6,	// (0x0002b747) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbb6,	// (0x0002b747) list_single_fs_bigclock_indicator_pane_t1

0xdbde,	// (0x0002b76f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbde,	// (0x0002b76f) list_single_fs_bigclock_indicator_pane_t2

0xdc06,	// (0x0002b797) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc06,	// (0x0002b797) list_single_fs_bigclock_indicator_pane_t3

0xdc2e,	// (0x0002b7bf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc2e,	// (0x0002b7bf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbd4,	// (0x0002d765) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbd4,	// (0x0002d765) list_single_fs_bigclock_indicator_pane_t

0xe592,	// (0x0002c123) image3_infobar_fav_pane_ParamLimits

0xe592,	// (0x0002c123) image3_infobar_fav_pane

0xe5a2,	// (0x0002c133) image3_infobar_loc_pane_ParamLimits

0xe5a2,	// (0x0002c133) image3_infobar_loc_pane

0xe5b6,	// (0x0002c147) image3_infobar_time_pane_ParamLimits

0xe5b6,	// (0x0002c147) image3_infobar_time_pane

0xa1e6,	// (0x00027d77) image3_infobar_time_pane_g1

0xe5c6,	// (0x0002c157) image3_infobar_time_pane_t1

0xa1e6,	// (0x00027d77) image3_infobar_loc_pane_g1

0xe5d4,	// (0x0002c165) image3_infobar_loc_pane_g2

0x0001,

0xfd2d,	// (0x0002d8be) image3_infobar_loc_pane_g

0xe5dc,	// (0x0002c16d) image3_infobar_loc_pane_t1

0xa1e6,	// (0x00027d77) image3_infobar_fav_pane_g1

0xe5ea,	// (0x0002c17b) image3_infobar_fav_pane_g2

0x0001,

0xfd32,	// (0x0002d8c3) image3_infobar_fav_pane_g

0xe5f2,	// (0x0002c183) fs_bigclock_status_battery_pane

0xe5fb,	// (0x0002c18c) fs_bigclock_status_signal_pane

0xe604,	// (0x0002c195) fs_bigclock_status_title_pane

0xe60d,	// (0x0002c19e) fs_bigclock_status_signal_pane_g1

0xe616,	// (0x0002c1a7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd37,	// (0x0002d8c8) fs_bigclock_status_signal_pane_g

0xe61e,	// (0x0002c1af) fs_bigclock_status_battery_pane_g1

0xe627,	// (0x0002c1b8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd3c,	// (0x0002d8cd) fs_bigclock_status_battery_pane_g

0xe62f,	// (0x0002c1c0) fs_bigclock_status_title_pane_t1

0x80ac,	// (0x00025c3d) main_fs_bigclock_clock_pane_g1

0x80ac,	// (0x00025c3d) main_fs_bigclock_clock_pane_g2

0x80b9,	// (0x00025c4a) main_fs_bigclock_clock_pane_g3

0x80b9,	// (0x00025c4a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd41,	// (0x0002d8d2) main_fs_bigclock_clock_pane_g

0x80c5,	// (0x00025c56) main_fs_bigclock_clock_pane_t1

0x80d8,	// (0x00025c69) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd4a,	// (0x0002d8db) main_fs_bigclock_clock_pane_t

0xe63d,	// (0x0002c1ce) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe63d,	// (0x0002c1ce) list_single_fs_bigclock_indicator_pane

0xe64e,	// (0x0002c1df) list_single_fs_bigclock_pane_ParamLimits

0xe64e,	// (0x0002c1df) list_single_fs_bigclock_pane

0xe674,	// (0x0002c205) main_fs_bigclock_indicator_pane_t1

0xe683,	// (0x0002c214) list_single_fs_bigclock_pane_g1

0xe68b,	// (0x0002c21c) list_single_fs_bigclock_pane_t1

0xa1e6,	// (0x00027d77) main_fs_bigclock_swipe_pane_g1

0xe6ce,	// (0x0002c25f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd5b,	// (0x0002d8ec) main_fs_bigclock_swipe_pane_g

0xe6d6,	// (0x0002c267) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6d6,	// (0x0002c267) main_fs_bigclock_swipe_pane_t1

0x408c,	// (0x00021c1d) call_type_pane_ParamLimits

0x9891,	// (0x00027422) main_btmg_pane

0xe30a,	// (0x0002be9b) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe30a,	// (0x0002be9b) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcce,	// (0x0002d85f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcce,	// (0x0002d85f) list_single_cale_mrui_row_pane_g

0xe48e,	// (0x0002c01f) list_recal_vselct_arw_lo_pane

0xe496,	// (0x0002c027) list_recal_vselct_arw_up_pane

0xe49e,	// (0x0002c02f) list_recal_vselct_pane

0x812f,	// (0x00025cc0) btmg_button_pane

0x813b,	// (0x00025ccc) main_btmg_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp044

0xe6f3,	// (0x0002c284) btmg_button_pane_t1

0xbf8b,	// (0x00029b1c) aid_listscroll_gen

0x9f2b,	// (0x00027abc) main_cntbar_detail_pane

0xe03b,	// (0x0002bbcc) list_cmail_folder_pane

0xd063,	// (0x0002abf4) sp_fs_scroll_pane_cp03_ParamLimits

0x8143,	// (0x00025cd4) list_single_fs_dyc_pane_cp01_ParamLimits

0x8143,	// (0x00025cd4) list_single_fs_dyc_pane_cp01

0xe701,	// (0x0002c292) aid_size_cmail_indent

0xe70a,	// (0x0002c29b) list_single_dyc_row_pane_cp01

0x818f,	// (0x00025d20) cntbar_detail_list_pane_ParamLimits

0x818f,	// (0x00025d20) cntbar_detail_list_pane

0x81c9,	// (0x00025d5a) main_cntbar_detail_cont_pane_ParamLimits

0x81c9,	// (0x00025d5a) main_cntbar_detail_cont_pane

0x4080,	// (0x00021c11) scroll_pane_cp032_ParamLimits

0x4080,	// (0x00021c11) scroll_pane_cp032

0x81d5,	// (0x00025d66) cntbar_detail_list_event_pane_ParamLimits

0x81d5,	// (0x00025d66) cntbar_detail_list_event_pane

0x819b,	// (0x00025d2c) cntbar_detail_list_shct_pane

0xa459,	// (0x00027fea) aid_list_gen

0xe713,	// (0x0002c2a4) aid_scroll

0xe71c,	// (0x0002c2ad) aid_size_touch_scroll_bar

0x7678,	// (0x00025209) aid_list_double

0x81e9,	// (0x00025d7a) aid_list_single

0x81e9,	// (0x00025d7a) aid_list_single_lg

0x81f2,	// (0x00025d83) aid_list_z_g_a_sm

0x81fa,	// (0x00025d8b) aid_list_z_g_d

0x8202,	// (0x00025d93) aid_txt_z_prm

0x8210,	// (0x00025da1) aid_txt_z_prm_cp01

0x821e,	// (0x00025daf) aid_txt_z_sec

0x822c,	// (0x00025dbd) main_cntbar_detail_cont_pane_g1_ParamLimits

0x822c,	// (0x00025dbd) main_cntbar_detail_cont_pane_g1

0x8239,	// (0x00025dca) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8239,	// (0x00025dca) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd60,	// (0x0002d8f1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd60,	// (0x0002d8f1) main_cntbar_detail_cont_pane_g

0xe725,	// (0x0002c2b6) main_cntbar_detail_cont_pane_t1

0xe733,	// (0x0002c2c4) main_cntbar_detail_cont_pane_t2

0xe741,	// (0x0002c2d2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd65,	// (0x0002d8f6) main_cntbar_detail_cont_pane_t

0x8245,	// (0x00025dd6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8245,	// (0x00025dd6) cell_cntbar_detail_list_shct_pane

0xe74f,	// (0x0002c2e0) cntbar_detail_list_shct_pane_g1

0xe758,	// (0x0002c2e9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd6c,	// (0x0002d8fd) cntbar_detail_list_shct_pane_g

0x8259,	// (0x00025dea) cntbar_detail_list_event_pane_g1_ParamLimits

0x8259,	// (0x00025dea) cntbar_detail_list_event_pane_g1

0x8265,	// (0x00025df6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8265,	// (0x00025df6) cntbar_detail_list_event_pane_g2

0x0005,

0xfd71,	// (0x0002d902) cntbar_detail_list_event_pane_g_ParamLimits

0xfd71,	// (0x0002d902) cntbar_detail_list_event_pane_g

0x82d1,	// (0x00025e62) cntbar_detail_list_event_pane_t1_ParamLimits

0x82d1,	// (0x00025e62) cntbar_detail_list_event_pane_t1

0x82e6,	// (0x00025e77) cntbar_detail_list_event_pane_t2_ParamLimits

0x82e6,	// (0x00025e77) cntbar_detail_list_event_pane_t2

0x0002,

0xfd7e,	// (0x0002d90f) cntbar_detail_list_event_pane_t_ParamLimits

0xfd7e,	// (0x0002d90f) cntbar_detail_list_event_pane_t

0xa1e6,	// (0x00027d77) cell_cntbar_detail_list_shct_pane_g1

0xabc6,	// (0x00028757) navi_pane_mv_g3

0x9f2b,	// (0x00027abc) main_cntbar_detail_pane_ParamLimits

0x9891,	// (0x00027422) main_notif_wgt_pane

0x1859,	// (0x0001f3ea) aid_tch_main_mp4_pane_g4

0x1ab8,	// (0x0001f649) popup_slider_window_cp02

0xe484,	// (0x0002c015) list_recal_day_event_pane

0x816f,	// (0x00025d00) cntbar_detail_btn_pane_ParamLimits

0x816f,	// (0x00025d00) cntbar_detail_btn_pane

0x817f,	// (0x00025d10) cntbar_detail_btn_pane_cp01_ParamLimits

0x817f,	// (0x00025d10) cntbar_detail_btn_pane_cp01

0x819b,	// (0x00025d2c) cntbar_detail_list_shct_pane_ParamLimits

0x81a7,	// (0x00025d38) cntbar_detail_pane_g1_ParamLimits

0x81a7,	// (0x00025d38) cntbar_detail_pane_g1

0x81b3,	// (0x00025d44) cntbar_detail_pane_t1_ParamLimits

0x81b3,	// (0x00025d44) cntbar_detail_pane_t1

0x8271,	// (0x00025e02) cntbar_detail_list_event_pane_g3_ParamLimits

0x8271,	// (0x00025e02) cntbar_detail_list_event_pane_g3

0x8289,	// (0x00025e1a) cntbar_detail_list_event_pane_g4_ParamLimits

0x8289,	// (0x00025e1a) cntbar_detail_list_event_pane_g4

0x82a1,	// (0x00025e32) cntbar_detail_list_event_pane_g5_ParamLimits

0x82a1,	// (0x00025e32) cntbar_detail_list_event_pane_g5

0x82b9,	// (0x00025e4a) cntbar_detail_list_event_pane_g6_ParamLimits

0x82b9,	// (0x00025e4a) cntbar_detail_list_event_pane_g6

0x82fb,	// (0x00025e8c) cntbar_detail_list_event_pane_t3_ParamLimits

0x82fb,	// (0x00025e8c) cntbar_detail_list_event_pane_t3

0x830d,	// (0x00025e9e) popup_notif_wgt_window_ParamLimits

0x830d,	// (0x00025e9e) popup_notif_wgt_window

0x831d,	// (0x00025eae) popup_submenu_window_cp01_ParamLimits

0x831d,	// (0x00025eae) popup_submenu_window_cp01

0xa1c4,	// (0x00027d55) bg_popup_window_pane_cp10

0xe761,	// (0x0002c2f2) listscroll_notif_wgt_pane

0xe773,	// (0x0002c304) list_notif_wgt_window

0xe77c,	// (0x0002c30d) scroll_pane_cp033

0x832b,	// (0x00025ebc) list_notif_wgt_row_pane_ParamLimits

0x832b,	// (0x00025ebc) list_notif_wgt_row_pane

0xe785,	// (0x0002c316) aid_size_list_notif_wgt_del

0xe792,	// (0x0002c323) list_notif_wgt_row_pane_g1

0xe79e,	// (0x0002c32f) list_notif_wgt_row_pane_g2

0xe7ad,	// (0x0002c33e) list_notif_wgt_row_pane_g3

0x0002,

0xfd85,	// (0x0002d916) list_notif_wgt_row_pane_g

0xe7ba,	// (0x0002c34b) list_notif_wgt_row_pane_t1

0xe7d0,	// (0x0002c361) list_notif_wgt_row_pane_t2

0xe7e2,	// (0x0002c373) list_notif_wgt_row_pane_t3

0x0002,

0xfd8c,	// (0x0002d91d) list_notif_wgt_row_pane_t

0xcf4d,	// (0x0002aade) list_recal_day_event_pane_g1

0xe7f4,	// (0x0002c385) list_recal_day_event_pane_t1

0x9891,	// (0x00027422) bg_button_pane_cp045

0x833d,	// (0x00025ece) cntbar_detail_btn_pane_t1

0xad9c,	// (0x0002892d) main_callh_pane_ParamLimits

0xad9c,	// (0x0002892d) main_callh_pane

0x9891,	// (0x00027422) main_coverflow0_pane

0x9891,	// (0x00027422) main_wgtman_pane

0x74fc,	// (0x0002508d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x74fc,	// (0x0002508d) main_fs_bigclock_unlock_btn_pane

0x7b04,	// (0x00025695) bg_button_pane_cp16

0x7b14,	// (0x000256a5) cell_tport_appsw_pane_g3

0x834b,	// (0x00025edc) cf0_flow_pane_ParamLimits

0x834b,	// (0x00025edc) cf0_flow_pane

0xe803,	// (0x0002c394) listscroll_cf0_pane

0xe80e,	// (0x0002c39f) main_cf0_pane_g1

0x835a,	// (0x00025eeb) main_cf0_pane_t1_ParamLimits

0x835a,	// (0x00025eeb) main_cf0_pane_t1

0x836e,	// (0x00025eff) main_cf0_pane_t2_ParamLimits

0x836e,	// (0x00025eff) main_cf0_pane_t2

0x0001,

0xfd98,	// (0x0002d929) main_cf0_pane_t_ParamLimits

0xfd98,	// (0x0002d929) main_cf0_pane_t

0xe820,	// (0x0002c3b1) scroll_pane_cp11

0x8382,	// (0x00025f13) cf0_flow_pane_g1

0x838a,	// (0x00025f1b) cf0_flow_pane_g2

0x0001,

0xfd9d,	// (0x0002d92e) cf0_flow_pane_g

0x8392,	// (0x00025f23) cf0_flow_pane_t1

0x9891,	// (0x00027422) main_call6_pane

0x9891,	// (0x00027422) main_calllock_pane

0x251d,	// (0x000200ae) call6_btn_grp_pane_ParamLimits

0x251d,	// (0x000200ae) call6_btn_grp_pane

0x252c,	// (0x000200bd) call6_pane_g1_ParamLimits

0x252c,	// (0x000200bd) call6_pane_g1

0x253c,	// (0x000200cd) popup_call6_1st_window_ParamLimits

0x253c,	// (0x000200cd) popup_call6_1st_window

0x254a,	// (0x000200db) popup_call6_2nd_window_ParamLimits

0x254a,	// (0x000200db) popup_call6_2nd_window

0x2558,	// (0x000200e9) cell_call6_btn_pane_ParamLimits

0x2558,	// (0x000200e9) cell_call6_btn_pane

0xa1c4,	// (0x00027d55) bg_popup_call2_in_pane_cp03

0xe82b,	// (0x0002c3bc) popup_call6_1st_window_g1

0xe833,	// (0x0002c3c4) popup_call6_1st_window_g2

0xe83b,	// (0x0002c3cc) popup_call6_1st_window_g3

0x0002,

0xfda2,	// (0x0002d933) popup_call6_1st_window_g

0xe843,	// (0x0002c3d4) popup_call6_1st_window_t1

0xe852,	// (0x0002c3e3) popup_call6_1st_window_t2

0xe860,	// (0x0002c3f1) popup_call6_1st_window_t3

0x0002,

0xfda9,	// (0x0002d93a) popup_call6_1st_window_t

0xa1c4,	// (0x00027d55) bg_popup_call2_in_pane_cp04

0xe86e,	// (0x0002c3ff) popup_call6_2nd_window_g1

0xe876,	// (0x0002c407) popup_call6_2nd_window_g2

0xe87e,	// (0x0002c40f) popup_call6_2nd_window_g3

0x0002,

0xfdb0,	// (0x0002d941) popup_call6_2nd_window_g

0xe886,	// (0x0002c417) popup_call6_2nd_window_t1

0x102d,	// (0x0001ebbe) bg_button_pane_cp15

0x2567,	// (0x000200f8) cell_call6_btn_pane_g1

0x2570,	// (0x00020101) cell_call6_btn_pane_t1

0x83a0,	// (0x00025f31) listscroll_wgtman_pane_ParamLimits

0x83a0,	// (0x00025f31) listscroll_wgtman_pane

0x83bc,	// (0x00025f4d) wgtman_btn_pane_ParamLimits

0x83bc,	// (0x00025f4d) wgtman_btn_pane

0xa9da,	// (0x0002856b) aid_scroll_copy1

0xe895,	// (0x0002c426) list_wgtman_pane

0x83f1,	// (0x00025f82) wgtman_btn_pane_g1_ParamLimits

0x83f1,	// (0x00025f82) wgtman_btn_pane_g1

0x8419,	// (0x00025faa) wgtman_btn_pane_t1_ParamLimits

0x8419,	// (0x00025faa) wgtman_btn_pane_t1

0xe89f,	// (0x0002c430) wgtman_btn_pane_t2_ParamLimits

0xe89f,	// (0x0002c430) wgtman_btn_pane_t2

0x0001,

0xfdb7,	// (0x0002d948) wgtman_btn_pane_t_ParamLimits

0xfdb7,	// (0x0002d948) wgtman_btn_pane_t

0x8450,	// (0x00025fe1) listrow_wgtman_pane_ParamLimits

0x8450,	// (0x00025fe1) listrow_wgtman_pane

0x846c,	// (0x00025ffd) listrow_wgtman_pane_g1

0x8479,	// (0x0002600a) listrow_wgtman_pane_g2

0x0001,

0xfdbc,	// (0x0002d94d) listrow_wgtman_pane_g

0x8497,	// (0x00026028) listrow_wgtman_pane_t1

0x84af,	// (0x00026040) listrow_wgtman_pane_t2

0x0001,

0xfdc1,	// (0x0002d952) listrow_wgtman_pane_t

0x84d5,	// (0x00026066) wait_bar_pane_cp09

0xe8b6,	// (0x0002c447) main_calllock_btn_pane

0xe8c0,	// (0x0002c451) main_calllock_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp17

0xe8c8,	// (0x0002c459) main_calllock_btn_pane_g1

0xe8d1,	// (0x0002c462) main_calllock_btn_pane_t1

0x9891,	// (0x00027422) main_dialer3_pane

0x9891,	// (0x00027422) main_fmrd2_pane

0xa1e6,	// (0x00027d77) main_fs_bigclock_unlock_btn_pane_g1

0x84ef,	// (0x00026080) main_fs_bigclock_unlock_btn_pane_t1

0x84fd,	// (0x0002608e) area_fmrd2_info_pane_ParamLimits

0x84fd,	// (0x0002608e) area_fmrd2_info_pane

0x850b,	// (0x0002609c) area_fmrd2_visual_pane_ParamLimits

0x850b,	// (0x0002609c) area_fmrd2_visual_pane

0x8519,	// (0x000260aa) fmrd2_indi_pane_ParamLimits

0x8519,	// (0x000260aa) fmrd2_indi_pane

0x8526,	// (0x000260b7) area_fmrd2_visual_pane_g1

0x852e,	// (0x000260bf) area_fmrd2_visual_pane_t1

0x853e,	// (0x000260cf) area_fmrd2_visual_pane_t2

0x854e,	// (0x000260df) area_fmrd2_visual_pane_t3

0x0002,

0xfdcb,	// (0x0002d95c) area_fmrd2_visual_pane_t

0x855e,	// (0x000260ef) area_fmrd2_info_pane_g1

0x8566,	// (0x000260f7) area_fmrd2_info_pane_t1

0x8576,	// (0x00026107) area_fmrd2_info_pane_t2

0x8586,	// (0x00026117) area_fmrd2_info_pane_t3

0x8596,	// (0x00026127) area_fmrd2_info_pane_t4

0x0003,

0xfdd2,	// (0x0002d963) area_fmrd2_info_pane_t

0x85a4,	// (0x00026135) fmrd2_indi_pane_t1

0x85b4,	// (0x00026145) fmrd2_indi_pane_t2

0x85c4,	// (0x00026155) fmrd2_indi_pane_t3

0x0002,

0xfddb,	// (0x0002d96c) fmrd2_indi_pane_t

0xdb9a,	// (0x0002b72b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb9a,	// (0x0002b72b) list_single_fs_bigclock_indicator_pane_g5

0xdc4b,	// (0x0002b7dc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc4b,	// (0x0002b7dc) list_single_fs_bigclock_indicator_pane_t5

0x7d0e,	// (0x0002589f) aid_cell_bcale_month_pane_ParamLimits

0x7d0e,	// (0x0002589f) aid_cell_bcale_month_pane

0x7d2c,	// (0x000258bd) bcale_month_pane_ParamLimits

0x7d2c,	// (0x000258bd) bcale_month_pane

0x7d4a,	// (0x000258db) bcale_preview_pane_ParamLimits

0x7d4a,	// (0x000258db) bcale_preview_pane

0xe68b,	// (0x0002c21c) list_single_fs_bigclock_pane_t1_ParamLimits

0xe6aa,	// (0x0002c23b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe6aa,	// (0x0002c23b) list_single_fs_bigclock_pane_t2

0x0001,

0xfd56,	// (0x0002d8e7) list_single_fs_bigclock_pane_t_ParamLimits

0xfd56,	// (0x0002d8e7) list_single_fs_bigclock_pane_t

0x84e7,	// (0x00026078) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc6,	// (0x0002d957) main_fs_bigclock_unlock_btn_pane_g

0x85d2,	// (0x00026163) aid_dia3_key_size_ParamLimits

0x85d2,	// (0x00026163) aid_dia3_key_size

0x85de,	// (0x0002616f) aid_dia3_listrow_size_ParamLimits

0x85de,	// (0x0002616f) aid_dia3_listrow_size

0x85ee,	// (0x0002617f) dia3_keypad_fun_pane_ParamLimits

0x85ee,	// (0x0002617f) dia3_keypad_fun_pane

0x8600,	// (0x00026191) dia3_keypad_num_pane_ParamLimits

0x8600,	// (0x00026191) dia3_keypad_num_pane

0x8612,	// (0x000261a3) dia3_listscroll_pane_ParamLimits

0x8612,	// (0x000261a3) dia3_listscroll_pane

0x8620,	// (0x000261b1) dia3_numentry_pane_ParamLimits

0x8620,	// (0x000261b1) dia3_numentry_pane

0xe8e0,	// (0x0002c471) dia3_list_pane

0xe8eb,	// (0x0002c47c) scroll_pane_cp12

0x9891,	// (0x00027422) bg_dia3_numentry_pane

0x862e,	// (0x000261bf) dia3_numentry_pane_t1

0x863d,	// (0x000261ce) cell_dia3_key_num_pane

0x8645,	// (0x000261d6) cell_dia3_key0_fun_pane_ParamLimits

0x8645,	// (0x000261d6) cell_dia3_key0_fun_pane

0x8652,	// (0x000261e3) cell_dia3_key1_fun_pane_ParamLimits

0x8652,	// (0x000261e3) cell_dia3_key1_fun_pane

0x865f,	// (0x000261f0) dia3_listrow_pane

0xd8ed,	// (0x0002b47e) bg_dia3_numentry_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp21

0xe8f6,	// (0x0002c487) cell_dia3_key_num_pane_t1

0xe904,	// (0x0002c495) cell_dia3_key_num_pane_t2

0xe913,	// (0x0002c4a4) cell_dia3_key_num_pane_t3

0xe922,	// (0x0002c4b3) cell_dia3_key_num_pane_t4

0x0003,

0xfde2,	// (0x0002d973) cell_dia3_key_num_pane_t

0x9891,	// (0x00027422) bg_button_pane_cp19

0x866c,	// (0x000261fd) cell_dia3_key0_fun_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp20

0x8674,	// (0x00026205) cell_dia3_key1_fun_pane_g1

0x867c,	// (0x0002620d) area_left_week_number_pane

0x868f,	// (0x00026220) area_top_day_name_pane

0x869d,	// (0x0002622e) frame_month_view_pane

0xe931,	// (0x0002c4c2) grid_month_view_pane

0x86b2,	// (0x00026243) cell_top_day_name_pane_ParamLimits

0x86b2,	// (0x00026243) cell_top_day_name_pane

0x86cc,	// (0x0002625d) cell_area_left_week_number_pane_ParamLimits

0x86cc,	// (0x0002625d) cell_area_left_week_number_pane

0x86ef,	// (0x00026280) cell_month_view_pane_ParamLimits

0x86ef,	// (0x00026280) cell_month_view_pane

0xe94e,	// (0x0002c4df) frm_month_g1

0x871b,	// (0x000262ac) frm_month_g2

0x872c,	// (0x000262bd) frm_month_g3

0x873d,	// (0x000262ce) frm_month_g4

0x874e,	// (0x000262df) frm_month_g5

0x8761,	// (0x000262f2) frm_month_g6

0x8774,	// (0x00026305) frm_month_g7

0xe95b,	// (0x0002c4ec) frm_month_g8

0x8787,	// (0x00026318) frm_month_g9

0x8794,	// (0x00026325) frm_month_g10

0x87a1,	// (0x00026332) frm_month_g11

0x87ae,	// (0x0002633f) frm_month_g12

0x87bb,	// (0x0002634c) frm_month_g13

0x87c8,	// (0x00026359) frm_month_g14

0x87d7,	// (0x00026368) frm_month_g15

0x87e6,	// (0x00026377) frm_month_g16

0x000f,

0xfdeb,	// (0x0002d97c) frm_month_g

0xe968,	// (0x0002c4f9) cell_top_day_name_pane_t1

0x87f5,	// (0x00026386) cell_area_left_week_number_pane_g1

0x8804,	// (0x00026395) cell_area_left_week_number_pane_t1

0x9f92,	// (0x00027b23) cell_month_view_pane_g1

0x881a,	// (0x000263ab) cell_month_view_pane_t1

0x9891,	// (0x00027422) main_fps_pane

0xde5f,	// (0x0002b9f0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde5f,	// (0x0002b9f0) cmail_ddmenu_btn02_pane_cp1

0xde7b,	// (0x0002ba0c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde7b,	// (0x0002ba0c) cmail_ddmenu_btn02_pane_cp2

0x8013,	// (0x00025ba4) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8013,	// (0x00025ba4) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd09,	// (0x0002d89a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd09,	// (0x0002d89a) cmail_ddmenu_btn02_pane_g

0x8031,	// (0x00025bc2) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8031,	// (0x00025bc2) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd0e,	// (0x0002d89f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd0e,	// (0x0002d89f) cmail_ddmenu_btn02_pane_t

0x8830,	// (0x000263c1) fps_text_pane_ParamLimits

0x8830,	// (0x000263c1) fps_text_pane

0x883d,	// (0x000263ce) main_fps_pane_g1_ParamLimits

0x883d,	// (0x000263ce) main_fps_pane_g1

0x884b,	// (0x000263dc) wait_bar_pane_cp010_ParamLimits

0x884b,	// (0x000263dc) wait_bar_pane_cp010

0x8857,	// (0x000263e8) fps_text_pane_t1_ParamLimits

0x8857,	// (0x000263e8) fps_text_pane_t1

0x5d72,	// (0x00023903) cam4_image_uncrop_pane_g1

0x5d7b,	// (0x0002390c) cam4_image_uncrop_pane_g2

0x5d84,	// (0x00023915) cam4_image_uncrop_pane_g3

0x5d8d,	// (0x0002391e) cam4_image_uncrop_pane_g4

0x0003,

0xf84d,	// (0x0002d3de) cam4_image_uncrop_pane_g

0x865f,	// (0x000261f0) dia3_listrow_pane_ParamLimits

0x9891,	// (0x00027422) main_phob2_pane

0x7ae6,	// (0x00025677) cell_tport_appsw_pane_cp02_ParamLimits

0x7ae6,	// (0x00025677) cell_tport_appsw_pane_cp02

0x7af5,	// (0x00025686) cell_tport_appsw_pane_cp03_ParamLimits

0x7af5,	// (0x00025686) cell_tport_appsw_pane_cp03

0x9891,	// (0x00027422) phob2_contact_card_pane

0x9891,	// (0x00027422) phob2_listscroll_pane

0xe97b,	// (0x0002c50c) phob2_list_pane

0xe983,	// (0x0002c514) scroll_pane_cp034

0x8870,	// (0x00026401) phob2_cc_data_pane_ParamLimits

0x8870,	// (0x00026401) phob2_cc_data_pane

0x888a,	// (0x0002641b) phob2_cc_listscroll_pane_ParamLimits

0x888a,	// (0x0002641b) phob2_cc_listscroll_pane

0x8450,	// (0x00025fe1) list_double_large_graphic_phob2_pane_ParamLimits

0x8450,	// (0x00025fe1) list_double_large_graphic_phob2_pane

0x88a4,	// (0x00026435) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x88a4,	// (0x00026435) list_double_large_graphic_phob2_pane_g1

0x88b1,	// (0x00026442) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x88b1,	// (0x00026442) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe0c,	// (0x0002d99d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0c,	// (0x0002d99d) list_double_large_graphic_phob2_pane_g

0x88d7,	// (0x00026468) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x88d7,	// (0x00026468) list_double_large_graphic_phob2_pane_t1

0x88ec,	// (0x0002647d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x88ec,	// (0x0002647d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe15,	// (0x0002d9a6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe15,	// (0x0002d9a6) list_double_large_graphic_phob2_pane_t

0x9891,	// (0x00027422) list_highlight_pane_cp024

0xe98b,	// (0x0002c51c) phob2_cc_button_pane

0x8901,	// (0x00026492) phob2_cc_data_pane_g1_ParamLimits

0x8901,	// (0x00026492) phob2_cc_data_pane_g1

0x8910,	// (0x000264a1) phob2_cc_data_pane_g2_ParamLimits

0x8910,	// (0x000264a1) phob2_cc_data_pane_g2

0x0001,

0xfe1a,	// (0x0002d9ab) phob2_cc_data_pane_g_ParamLimits

0xfe1a,	// (0x0002d9ab) phob2_cc_data_pane_g

0x891f,	// (0x000264b0) phob2_cc_data_pane_t1_ParamLimits

0x891f,	// (0x000264b0) phob2_cc_data_pane_t1

0x8934,	// (0x000264c5) phob2_cc_data_pane_t2_ParamLimits

0x8934,	// (0x000264c5) phob2_cc_data_pane_t2

0x8949,	// (0x000264da) phob2_cc_data_pane_t3_ParamLimits

0x8949,	// (0x000264da) phob2_cc_data_pane_t3

0x0002,

0xfe1f,	// (0x0002d9b0) phob2_cc_data_pane_t_ParamLimits

0xfe1f,	// (0x0002d9b0) phob2_cc_data_pane_t

0xe993,	// (0x0002c524) phob2_cc_list_pane_ParamLimits

0xe993,	// (0x0002c524) phob2_cc_list_pane

0xd057,	// (0x0002abe8) scroll_pane_cp035_ParamLimits

0xd057,	// (0x0002abe8) scroll_pane_cp035

0x9f2b,	// (0x00027abc) bg_button_pane_cp033

0xe99f,	// (0x0002c530) phob2_cc_button_pane_g1

0xe9ab,	// (0x0002c53c) phob2_cc_button_pane_t1

0xe9c0,	// (0x0002c551) phob2_cc_button_pane_t2

0x0001,

0xfe26,	// (0x0002d9b7) phob2_cc_button_pane_t

0x895e,	// (0x000264ef) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x895e,	// (0x000264ef) list_double_large_graphic_phob2_cc_pane

0x89d2,	// (0x00026563) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x89d2,	// (0x00026563) list_double_large_graphic_phob2_cc_pane_g1

0x89e3,	// (0x00026574) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x89e3,	// (0x00026574) list_double_large_graphic_phob2_cc_pane_g2

0x89ef,	// (0x00026580) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x89ef,	// (0x00026580) list_double_large_graphic_phob2_cc_pane_g3

0x89fb,	// (0x0002658c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x89fb,	// (0x0002658c) list_double_large_graphic_phob2_cc_pane_g4

0xe9d2,	// (0x0002c563) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xe9d2,	// (0x0002c563) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe2b,	// (0x0002d9bc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe2b,	// (0x0002d9bc) list_double_large_graphic_phob2_cc_pane_g

0x8a07,	// (0x00026598) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8a07,	// (0x00026598) list_double_large_graphic_phob2_cc_pane_t1

0x8a30,	// (0x000265c1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8a30,	// (0x000265c1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe36,	// (0x0002d9c7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe36,	// (0x0002d9c7) list_double_large_graphic_phob2_cc_pane_t

0xe9de,	// (0x0002c56f) list_highlight_pane_cp025_ParamLimits

0xe9de,	// (0x0002c56f) list_highlight_pane_cp025

0x9f2b,	// (0x00027abc) bg_button_pane_cp033_ParamLimits

0xe99f,	// (0x0002c530) phob2_cc_button_pane_g1_ParamLimits

0xe9ab,	// (0x0002c53c) phob2_cc_button_pane_t1_ParamLimits

0xe9c0,	// (0x0002c551) phob2_cc_button_pane_t2_ParamLimits

0xfe26,	// (0x0002d9b7) phob2_cc_button_pane_t_ParamLimits

0x25f1,	// (0x00020182) popup_wgtman_window

0xce1f,	// (0x0002a9b0) scroll_pane_cp038

0x83d9,	// (0x00025f6a) wgtman_btn_pane_cp_01_ParamLimits

0x83d9,	// (0x00025f6a) wgtman_btn_pane_cp_01

0xe9ec,	// (0x0002c57d) wgtman_content_pane

0xe9f5,	// (0x0002c586) wgtman_heading_pane

0x9891,	// (0x00027422) bg_heading_pane_cp02

0xe9fe,	// (0x0002c58f) wgtman_heading_pane_g1

0xea43,	// (0x0002c5d4) wgtman_heading_pane_t1

0xea51,	// (0x0002c5e2) scroll_pane_cp036

0xea59,	// (0x0002c5ea) wgtman_list_pane

0xea06,	// (0x0002c597) wgtman_list_pane_t1_ParamLimits

0xea06,	// (0x0002c597) wgtman_list_pane_t1

0x1d6d,	// (0x0001f8fe) cam4_grid_pane

0x651e,	// (0x000240af) bg_button_pane_cp015_ParamLimits

0x6533,	// (0x000240c4) bg_button_pane_cp016_ParamLimits

0x653f,	// (0x000240d0) bg_button_pane_cp017_ParamLimits

0x6597,	// (0x00024128) popup_vitu2_query_window_g3_ParamLimits

0x6597,	// (0x00024128) popup_vitu2_query_window_g3

0x6638,	// (0x000241c9) popup_vitu2_query_window_t6_ParamLimits

0x6638,	// (0x000241c9) popup_vitu2_query_window_t6

0x6663,	// (0x000241f4) popup_vitu2_query_window_t7_ParamLimits

0x6663,	// (0x000241f4) popup_vitu2_query_window_t7

0xea21,	// (0x0002c5b2) cam4_grid_pane_g1

0xea2a,	// (0x0002c5bb) cam4_grid_pane_g2

0xea61,	// (0x0002c5f2) cam4_grid_pane_g3

0xea6a,	// (0x0002c5fb) cam4_grid_pane_g4

0x0003,

0xfe3b,	// (0x0002d9cc) cam4_grid_pane_g

0x2e47,	// (0x000209d8) aid_placing_vt_slider_lsc_ParamLimits

0x3187,	// (0x00020d18) vidtel_button_pane_ParamLimits

0x3187,	// (0x00020d18) vidtel_button_pane

0x9891,	// (0x00027422) bg_button_pane_cp034

0xea75,	// (0x0002c606) vidtel_button_pane_g1

0xea7d,	// (0x0002c60e) vidtel_button_pane_t1

0xcf2b,	// (0x0002aabc) aid_size_vtel_slider_touch

0xd057,	// (0x0002abe8) scroll_pane_cp039

0x7239,	// (0x00024dca) ncim_query_button_pane_cp01_ParamLimits

0x7258,	// (0x00024de9) ncimui_query_pane_g1_ParamLimits

0x9f2b,	// (0x00027abc) input_focus_pane_cp012_ParamLimits

0xd933,	// (0x0002b4c4) ncim_query_entry_pane_t1_ParamLimits

0xd057,	// (0x0002abe8) scroll_pane_cp039_ParamLimits

0xaab1,	// (0x00028642) navi_pane_bcale_mc_g1

0xaab9,	// (0x0002864a) navi_pane_bcale_mc_t1

0xdeaf,	// (0x0002ba40) main_sp_fs_email_pane_g1

0xdebb,	// (0x0002ba4c) main_sp_fs_email_pane_g2

0x0001,

0xfc3e,	// (0x0002d7cf) main_sp_fs_email_pane_g

0xe316,	// (0x0002bea7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe316,	// (0x0002bea7) list_single_cale_mrui_row_pane_g3

0x8051,	// (0x00025be2) list_single_recal_day_pane_g5_event_pane

0xe4f5,	// (0x0002c086) list_single_recal_day_pane_g7

0xea93,	// (0x0002c624) list_recal_day_event_pane_cp01

0xea9c,	// (0x0002c62d) list_recal_vselct_arw_lo_pane_cp01

0xeaa4,	// (0x0002c635) list_recal_vselct_arw_up_pane_cp01

0xeaac,	// (0x0002c63d) list_recal_vselct_pane_cp01

0xcf4d,	// (0x0002aade) list_recal_day_event_pane_cp01_g1

0xeab6,	// (0x0002c647) list_recal_day_event_pane_cp01_t1

0xe4fd,	// (0x0002c08e) list_single_recal_day_pane_t1_ParamLimits

0xe50f,	// (0x0002c0a0) list_single_recal_day_pane_t2_ParamLimits

0xfd1e,	// (0x0002d8af) list_single_recal_day_pane_t_ParamLimits

0x9f09,	// (0x00027a9a) bg_notes_pane_ParamLimits

0x9fe2,	// (0x00027b73) list_notes_pane_ParamLimits

0x271f,	// (0x000202b0) scroll_pane_cp06_ParamLimits

0xa004,	// (0x00027b95) main_notes_pane_ParamLimits

0x9f2b,	// (0x00027abc) main_welc_pane

0x8a7b,	// (0x0002660c) main_welc_body_pane_ParamLimits

0x8a7b,	// (0x0002660c) main_welc_body_pane

0x8a94,	// (0x00026625) main_welc_opti_pane_ParamLimits

0x8a94,	// (0x00026625) main_welc_opti_pane

0x8aef,	// (0x00026680) main_welc_pane_t1_ParamLimits

0x8aef,	// (0x00026680) main_welc_pane_t1

0x8c85,	// (0x00026816) main_welc_body_row_pane_ParamLimits

0x8c85,	// (0x00026816) main_welc_body_row_pane

0x9f84,	// (0x00027b15) main_welc_opti_row_pane_ParamLimits

0x9f84,	// (0x00027b15) main_welc_opti_row_pane

0xead4,	// (0x0002c665) main_welc_opti_row_pane_g1

0x8cae,	// (0x0002683f) main_welc_opti_row_pane_t1

0xeadc,	// (0x0002c66d) main_welc_body_row_pane_t1

0xe76b,	// (0x0002c2fc) popup_notif_wgt_heading_pane

0xe785,	// (0x0002c316) aid_size_list_notif_wgt_del_ParamLimits

0xe792,	// (0x0002c323) list_notif_wgt_row_pane_g1_ParamLimits

0xe79e,	// (0x0002c32f) list_notif_wgt_row_pane_g2_ParamLimits

0xe7ad,	// (0x0002c33e) list_notif_wgt_row_pane_g3_ParamLimits

0xfd85,	// (0x0002d916) list_notif_wgt_row_pane_g_ParamLimits

0xe7ba,	// (0x0002c34b) list_notif_wgt_row_pane_t1_ParamLimits

0xe7d0,	// (0x0002c361) list_notif_wgt_row_pane_t2_ParamLimits

0xe7e2,	// (0x0002c373) list_notif_wgt_row_pane_t3_ParamLimits

0xfd8c,	// (0x0002d91d) list_notif_wgt_row_pane_t_ParamLimits

0x846c,	// (0x00025ffd) listrow_wgtman_pane_g1_ParamLimits

0x8479,	// (0x0002600a) listrow_wgtman_pane_g2_ParamLimits

0xfdbc,	// (0x0002d94d) listrow_wgtman_pane_g_ParamLimits

0x8497,	// (0x00026028) listrow_wgtman_pane_t1_ParamLimits

0x84af,	// (0x00026040) listrow_wgtman_pane_t2_ParamLimits

0xfdc1,	// (0x0002d952) listrow_wgtman_pane_t_ParamLimits

0x84d5,	// (0x00026066) wait_bar_pane_cp09_ParamLimits

0x9891,	// (0x00027422) bg_popup_heading_pane_cp02

0xeaeb,	// (0x0002c67c) popup_notif_wgt_heading_pane_g1

0xeaf3,	// (0x0002c684) popup_notif_wgt_heading_pane_t1

0x9891,	// (0x00027422) main_vids_pane

0x9891,	// (0x00027422) vids_listscroll_pane

0x8cbd,	// (0x0002684e) scroll_pane_cp040

0x9891,	// (0x00027422) vids_list_pane

0x8cc8,	// (0x00026859) vids_list_double_pane_ParamLimits

0x8cc8,	// (0x00026859) vids_list_double_pane

0x8ce0,	// (0x00026871) vids_list_double_pane_g1

0x8ce9,	// (0x0002687a) vids_list_double_pane_t1

0x8cf9,	// (0x0002688a) vids_list_double_pane_t2

0x0001,

0xfe5a,	// (0x0002d9eb) vids_list_double_pane_t

0x1483,	// (0x0001f014) main_ncimui_pane_ParamLimits

0x7090,	// (0x00024c21) main_ncimui_pane_g1_ParamLimits

0x709c,	// (0x00024c2d) main_ncimui_pane_g2_ParamLimits

0x709c,	// (0x00024c2d) main_ncimui_pane_g2

0x0001,

0xfb3f,	// (0x0002d6d0) main_ncimui_pane_g_ParamLimits

0xfb3f,	// (0x0002d6d0) main_ncimui_pane_g

0x8aad,	// (0x0002663e) main_welc_pane_g1_ParamLimits

0x8aad,	// (0x0002663e) main_welc_pane_g1

0x8ab9,	// (0x0002664a) main_welc_pane_g2_ParamLimits

0x8ab9,	// (0x0002664a) main_welc_pane_g2

0x0003,

0xfe44,	// (0x0002d9d5) main_welc_pane_g_ParamLimits

0xfe44,	// (0x0002d9d5) main_welc_pane_g

0x9f09,	// (0x00027a9a) listscroll_mce_pane_ParamLimits

0xac06,	// (0x00028797) wait_bar_pane_cp10

0xbf93,	// (0x00029b24) main_cale_day_pane_ParamLimits

0xbf93,	// (0x00029b24) main_cale_week_pane_ParamLimits

0x9f09,	// (0x00027a9a) main_messa_pane_ParamLimits

0x5878,	// (0x00023409) main_clock2_btn_pane_ParamLimits

0x5878,	// (0x00023409) main_clock2_btn_pane

0xc801,	// (0x0002a392) main_clock2_btn_pane_cp01_ParamLimits

0xc801,	// (0x0002a392) main_clock2_btn_pane_cp01

0xe2a2,	// (0x0002be33) list_cale_mrui_pane_ParamLimits

0xe818,	// (0x0002c3a9) main_cf0_pane_g2

0x0001,

0xfd93,	// (0x0002d924) main_cf0_pane_g

0x867c,	// (0x0002620d) area_left_week_number_pane_ParamLimits

0x868f,	// (0x00026220) area_top_day_name_pane_ParamLimits

0x869d,	// (0x0002622e) frame_month_view_pane_ParamLimits

0xe931,	// (0x0002c4c2) grid_month_view_pane_ParamLimits

0xe94e,	// (0x0002c4df) frm_month_g1_ParamLimits

0x871b,	// (0x000262ac) frm_month_g2_ParamLimits

0x872c,	// (0x000262bd) frm_month_g3_ParamLimits

0x873d,	// (0x000262ce) frm_month_g4_ParamLimits

0x874e,	// (0x000262df) frm_month_g5_ParamLimits

0x8761,	// (0x000262f2) frm_month_g6_ParamLimits

0x8774,	// (0x00026305) frm_month_g7_ParamLimits

0xe95b,	// (0x0002c4ec) frm_month_g8_ParamLimits

0x8787,	// (0x00026318) frm_month_g9_ParamLimits

0x8794,	// (0x00026325) frm_month_g10_ParamLimits

0x87a1,	// (0x00026332) frm_month_g11_ParamLimits

0x87ae,	// (0x0002633f) frm_month_g12_ParamLimits

0x87bb,	// (0x0002634c) frm_month_g13_ParamLimits

0x87c8,	// (0x00026359) frm_month_g14_ParamLimits

0x87d7,	// (0x00026368) frm_month_g15_ParamLimits

0x87e6,	// (0x00026377) frm_month_g16_ParamLimits

0xfdeb,	// (0x0002d97c) frm_month_g_ParamLimits

0xe968,	// (0x0002c4f9) cell_top_day_name_pane_t1_ParamLimits

0x87f5,	// (0x00026386) cell_area_left_week_number_pane_g1_ParamLimits

0x8804,	// (0x00026395) cell_area_left_week_number_pane_t1_ParamLimits

0x9f92,	// (0x00027b23) cell_month_view_pane_g1_ParamLimits

0x881a,	// (0x000263ab) cell_month_view_pane_t1_ParamLimits

0x9f01,	// (0x00027a92) main_clock2_btn_pane_g1

0xeb01,	// (0x0002c692) main_clock2_btn_pane_t1

0x9f2b,	// (0x00027abc) listscroll_cmail_pane_ParamLimits

0xdeaf,	// (0x0002ba40) main_sp_fs_email_pane_g1_ParamLimits

0xdebb,	// (0x0002ba4c) main_sp_fs_email_pane_g2_ParamLimits

0xfc3e,	// (0x0002d7cf) main_sp_fs_email_pane_g_ParamLimits

0xe465,	// (0x0002bff6) list_recal_day_pane_ParamLimits

0xe476,	// (0x0002c007) mian_recal_day_pane_t1

0x79d4,	// (0x00025565) list_single_dyc_row_text_pane_t4_ParamLimits

0x79d4,	// (0x00025565) list_single_dyc_row_text_pane_t4

0x7a0b,	// (0x0002559c) list_single_dyc_row_text_pane_t5_ParamLimits

0x7a0b,	// (0x0002559c) list_single_dyc_row_text_pane_t5

0xdf6b,	// (0x0002bafc) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf6b,	// (0x0002bafc) list_single_dyc_row_text_pane_t6

0x3fa6,	// (0x00021b37) aid_mgn_list_cale_time_pane

0x1483,	// (0x0001f014) main_gallery2_pane_ParamLimits

0xc817,	// (0x0002a3a8) main_clock2_pane_cp01_t1

0xc825,	// (0x0002a3b6) main_clock2_pane_cp01_t3

0x0001,

0xf724,	// (0x0002d2b5) main_clock2_pane_cp01_t

0x2a49,	// (0x000205da) cale_week_scroll_pane_g16_ParamLimits

0x2a49,	// (0x000205da) cale_week_scroll_pane_g16

0xa1c4,	// (0x00027d55) vorec_slider_pane

0xea7d,	// (0x0002c60e) vidtel_button_pane_t1_ParamLimits

0x80ac,	// (0x00025c3d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x80ac,	// (0x00025c3d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x80b9,	// (0x00025c4a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x80b9,	// (0x00025c4a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd41,	// (0x0002d8d2) main_fs_bigclock_clock_pane_g_ParamLimits

0x80c5,	// (0x00025c56) main_fs_bigclock_clock_pane_t1_ParamLimits

0x80d8,	// (0x00025c69) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd4a,	// (0x0002d8db) main_fs_bigclock_clock_pane_t_ParamLimits

0x521d,	// (0x00022dae) main_mup3_lyrics_pane_ParamLimits

0x521d,	// (0x00022dae) main_mup3_lyrics_pane

0x8d07,	// (0x00026898) main_mup3_lyrics_pane_t1_ParamLimits

0x8d07,	// (0x00026898) main_mup3_lyrics_pane_t1

0x1843,	// (0x0001f3d4) aid_main_mp4_pane_t1_area

0x184d,	// (0x0001f3de) aid_main_mp4_pane_t2_area

0x194c,	// (0x0001f4dd) main_mp4_pane_g7_ParamLimits

0x194c,	// (0x0001f4dd) main_mp4_pane_g7

0x1958,	// (0x0001f4e9) main_mp4_pane_g8_ParamLimits

0x1958,	// (0x0001f4e9) main_mp4_pane_g8

0x5cbc,	// (0x0002384d) aid_call6_pane_g1_size

0x89a4,	// (0x00026535) list_double_large_graphic_phob2_other_pane_ParamLimits

0x89a4,	// (0x00026535) list_double_large_graphic_phob2_other_pane

0xa56d,	// (0x000280fe) list_double_large_graphic_phob2_other_pane_g1

0x9891,	// (0x00027422) list_highlight_pane_cp026

0x9f2b,	// (0x00027abc) main_welc_pane_ParamLimits

0x784d,	// (0x000253de) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x784d,	// (0x000253de) main_sp_fs_ctrlbar_pane_g3

0x7865,	// (0x000253f6) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7865,	// (0x000253f6) main_sp_fs_ctrlbar_pane_g4

0x7897,	// (0x00025428) toolbar2_fixed_button_pane_cp01

0x78a2,	// (0x00025433) toolbar2_fixed_button_pane_cp02

0x78ad,	// (0x0002543e) toolbar2_fixed_button_pane_cp03

0x8a6b,	// (0x000265fc) list_welc_entry_pane_ParamLimits

0x8a6b,	// (0x000265fc) list_welc_entry_pane

0x8ac7,	// (0x00026658) main_welc_pane_g3_ParamLimits

0x8ac7,	// (0x00026658) main_welc_pane_g3

0x8b09,	// (0x0002669a) main_welc_pane_t2_ParamLimits

0x8b09,	// (0x0002669a) main_welc_pane_t2

0x8b1d,	// (0x000266ae) main_welc_pane_t3_ParamLimits

0x8b1d,	// (0x000266ae) main_welc_pane_t3

0x0005,

0xfe4d,	// (0x0002d9de) main_welc_pane_t_ParamLimits

0xfe4d,	// (0x0002d9de) main_welc_pane_t

0x8c19,	// (0x000267aa) welc_button_pane_ParamLimits

0x8c19,	// (0x000267aa) welc_button_pane

0x8c77,	// (0x00026808) welc_service_logo_pane_ParamLimits

0x8c77,	// (0x00026808) welc_service_logo_pane

0x8d3d,	// (0x000268ce) list_single_welc_entry_pane_ParamLimits

0x8d3d,	// (0x000268ce) list_single_welc_entry_pane

0x8d4e,	// (0x000268df) list_single_welc_entry_pane_g1

0x8d56,	// (0x000268e7) list_single_welc_entry_pane_t1

0x8d64,	// (0x000268f5) list_single_welc_entry_pane_t2

0x0001,

0xfe5f,	// (0x0002d9f0) list_single_welc_entry_pane_t

0x9891,	// (0x00027422) bg_button_pane_cp035

0x8d72,	// (0x00026903) welc_button_pane_t1

0xeb0f,	// (0x0002c6a0) welc_service_logo_pane_g1

0xeb18,	// (0x0002c6a9) welc_service_logo_pane_g2

0x0001,

0x0d3a,	// (0x0001e8cb) welc_service_logo_pane_g

0x102d,	// (0x0001ebbe) main_int_radio_pane

0xd7d1,	// (0x0002b362) list_single_fs_dyc_pane_g1

0x88bd,	// (0x0002644e) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x88bd,	// (0x0002644e) list_double_large_graphic_phob2_pane_g3

0x88c9,	// (0x0002645a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x88c9,	// (0x0002645a) list_double_large_graphic_phob2_pane_g4

0x8d80,	// (0x00026911) main_int_radio1_pane_ParamLimits

0x8d80,	// (0x00026911) main_int_radio1_pane

0xeb21,	// (0x0002c6b2) find_pane_cp02

0x8d92,	// (0x00026923) input_focus_pane_cp12_ParamLimits

0x8d92,	// (0x00026923) input_focus_pane_cp12

0x8d9e,	// (0x0002692f) input_focus_pane_cp13_ParamLimits

0x8d9e,	// (0x0002692f) input_focus_pane_cp13

0x8db6,	// (0x00026947) input_focus_pane_cp14_ParamLimits

0x8db6,	// (0x00026947) input_focus_pane_cp14

0xeb2a,	// (0x0002c6bb) int_radio1_listscroll_pane

0x8dce,	// (0x0002695f) main_int_radio1_pane_g1_ParamLimits

0x8dce,	// (0x0002695f) main_int_radio1_pane_g1

0x8dde,	// (0x0002696f) main_int_radio1_pane_t1_ParamLimits

0x8dde,	// (0x0002696f) main_int_radio1_pane_t1

0x8df2,	// (0x00026983) main_int_radio1_pane_t2_ParamLimits

0x8df2,	// (0x00026983) main_int_radio1_pane_t2

0x8e06,	// (0x00026997) main_int_radio1_pane_t3_ParamLimits

0x8e06,	// (0x00026997) main_int_radio1_pane_t3

0x8e1a,	// (0x000269ab) main_int_radio1_pane_t4_ParamLimits

0x8e1a,	// (0x000269ab) main_int_radio1_pane_t4

0xeb34,	// (0x0002c6c5) main_int_radio1_pane_t5_ParamLimits

0xeb34,	// (0x0002c6c5) main_int_radio1_pane_t5

0x8e31,	// (0x000269c2) main_int_radio1_pane_t6_ParamLimits

0x8e31,	// (0x000269c2) main_int_radio1_pane_t6

0x8e43,	// (0x000269d4) main_int_radio1_pane_t7_ParamLimits

0x8e43,	// (0x000269d4) main_int_radio1_pane_t7

0x8e55,	// (0x000269e6) main_int_radio1_pane_t8_ParamLimits

0x8e55,	// (0x000269e6) main_int_radio1_pane_t8

0x8e69,	// (0x000269fa) main_int_radio1_pane_t9_ParamLimits

0x8e69,	// (0x000269fa) main_int_radio1_pane_t9

0x8e7b,	// (0x00026a0c) main_int_radio1_pane_t10_ParamLimits

0x8e7b,	// (0x00026a0c) main_int_radio1_pane_t10

0x8eac,	// (0x00026a3d) main_int_radio1_pane_t11_ParamLimits

0x8eac,	// (0x00026a3d) main_int_radio1_pane_t11

0x8edd,	// (0x00026a6e) main_int_radio1_pane_t12_ParamLimits

0x8edd,	// (0x00026a6e) main_int_radio1_pane_t12

0x000b,

0xfe64,	// (0x0002d9f5) main_int_radio1_pane_t_ParamLimits

0xfe64,	// (0x0002d9f5) main_int_radio1_pane_t

0xeb46,	// (0x0002c6d7) int_radio_list_pane

0xe983,	// (0x0002c514) scroll_pane_cp037

0xeb4e,	// (0x0002c6df) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb4e,	// (0x0002c6df) list_double_large_graphic_int_radio_pane

0xeb67,	// (0x0002c6f8) list_double_large_graphic_int_radio_pane_g1

0xeb70,	// (0x0002c701) list_double_large_graphic_int_radio_pane_t1

0xeb7e,	// (0x0002c70f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0x0d58,	// (0x0001e8e9) list_double_large_graphic_int_radio_pane_t

0x9891,	// (0x00027422) list_highlight_pane_cp027

0xeac4,	// (0x0002c655) main_button_pane_4

0x8ad3,	// (0x00026664) main_welc_pane_g4_ParamLimits

0x8ad3,	// (0x00026664) main_welc_pane_g4

0x8b2f,	// (0x000266c0) main_welc_pane_t4_ParamLimits

0x8b2f,	// (0x000266c0) main_welc_pane_t4

0x8b41,	// (0x000266d2) main_welc_pane_t5_ParamLimits

0x8b41,	// (0x000266d2) main_welc_pane_t5

0x8b71,	// (0x00026702) main_welc_pane_t6_ParamLimits

0x8b71,	// (0x00026702) main_welc_pane_t6

0x8c27,	// (0x000267b8) welc_button_pane_2_ParamLimits

0x8c27,	// (0x000267b8) welc_button_pane_2

0x8c3f,	// (0x000267d0) welc_button_pane_3_ParamLimits

0x8c3f,	// (0x000267d0) welc_button_pane_3

0xeacc,	// (0x0002c65d) welc_button_pane_4

0x8c59,	// (0x000267ea) welc_button_pane_5_ParamLimits

0x8c59,	// (0x000267ea) welc_button_pane_5

0x0dd9,	// (0x0001e96a) main_popup_welc_pane

0xeb9b,	// (0x0002c72c) main_welc_sk_g3

0xeba5,	// (0x0002c736) main_welc_sk_g4

0xebaf,	// (0x0002c740) main_welc_sk_t3

0xebbf,	// (0x0002c750) main_welc_sk_t4

0xebcf,	// (0x0002c760) popup_welc_pane_t4

0xebdd,	// (0x0002c76e) popup_welc_pane_t5

0xebeb,	// (0x0002c77c) popup_welc_pane_t6

0x102d,	// (0x0001ebbe) main_acti_pane

0x9891,	// (0x00027422) main_sso_pane

0x8ef4,	// (0x00026a85) sso_body_pane_ParamLimits

0x8ef4,	// (0x00026a85) sso_body_pane

0x8f02,	// (0x00026a93) sso_logo_pane_ParamLimits

0x8f02,	// (0x00026a93) sso_logo_pane

0x8f2b,	// (0x00026abc) sso_sk_pane_ParamLimits

0x8f2b,	// (0x00026abc) sso_sk_pane

0xa1e6,	// (0x00027d77) main_sso_logo_pane_g1

0x8f38,	// (0x00026ac9) sso_sk_pane_t1_ParamLimits

0x8f38,	// (0x00026ac9) sso_sk_pane_t1

0x8f4c,	// (0x00026add) sso_sk_pane_t2_ParamLimits

0x8f4c,	// (0x00026add) sso_sk_pane_t2

0x0001,

0xfe7d,	// (0x0002da0e) sso_sk_pane_t_ParamLimits

0xfe7d,	// (0x0002da0e) sso_sk_pane_t

0xec29,	// (0x0002c7ba) aid_sso_gap

0xec32,	// (0x0002c7c3) aid_sso_txt1

0xec3c,	// (0x0002c7cd) aid_sso_txt2

0xec46,	// (0x0002c7d7) aid_sso_txt3

0x0002,

0x0d62,	// (0x0001e8f3) aid_sso_txt

0xec50,	// (0x0002c7e1) aid_sso_widget

0x8fab,	// (0x00026b3c) sso_btn_pane_ParamLimits

0x8fab,	// (0x00026b3c) sso_btn_pane

0x9024,	// (0x00026bb5) sso_option_pane_ParamLimits

0x9024,	// (0x00026bb5) sso_option_pane

0x909e,	// (0x00026c2f) sso_query_pane_ParamLimits

0x909e,	// (0x00026c2f) sso_query_pane

0x90ee,	// (0x00026c7f) sso_query_pane_cp01_ParamLimits

0x90ee,	// (0x00026c7f) sso_query_pane_cp01

0x913e,	// (0x00026ccf) sso_t_hdr_pane_ParamLimits

0x913e,	// (0x00026ccf) sso_t_hdr_pane

0x9162,	// (0x00026cf3) sso_t_nml_pane_ParamLimits

0x9162,	// (0x00026cf3) sso_t_nml_pane

0xec5a,	// (0x0002c7eb) sso_t_sub_pane

0x8f0f,	// (0x00026aa0) sso_popup_window_ParamLimits

0x8f0f,	// (0x00026aa0) sso_popup_window

0x8f5e,	// (0x00026aef) sso_apps_pane_ParamLimits

0x8f5e,	// (0x00026aef) sso_apps_pane

0x8f81,	// (0x00026b12) sso_body_pane_g1

0x8f8b,	// (0x00026b1c) sso_body_pane_t1

0x8f9b,	// (0x00026b2c) sso_body_pane_t2

0x0001,

0xfe82,	// (0x0002da13) sso_body_pane_t

0x8ff6,	// (0x00026b87) sso_btn_pane_cp01_ParamLimits

0x8ff6,	// (0x00026b87) sso_btn_pane_cp01

0x9070,	// (0x00026c01) sso_prog_pane_ParamLimits

0x9070,	// (0x00026c01) sso_prog_pane

0xedf2,	// (0x0002c983) sso_t_hdr_pane_t1_ParamLimits

0xedf2,	// (0x0002c983) sso_t_hdr_pane_t1

0xec6f,	// (0x0002c800) input_focus_pane_cp10_ParamLimits

0xec6f,	// (0x0002c800) input_focus_pane_cp10

0xec89,	// (0x0002c81a) sso_query_pane_t1_ParamLimits

0xec89,	// (0x0002c81a) sso_query_pane_t1

0xec9c,	// (0x0002c82d) sso_query_pane_t2_ParamLimits

0xec9c,	// (0x0002c82d) sso_query_pane_t2

0xecb7,	// (0x0002c848) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0002c848) sso_query_pane_t3

0xece1,	// (0x0002c872) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0002c872) sso_query_pane_t4

0x0003,

0x0d6e,	// (0x0001e8ff) sso_query_pane_t_ParamLimits

0x0d6e,	// (0x0001e8ff) sso_query_pane_t

0x9891,	// (0x00027422) bg_button_pane_cp22

0xeb8c,	// (0x0002c71d) sso_btn_pane_t1

0x91b2,	// (0x00026d43) sso_t_nml_pane_t1_ParamLimits

0x91b2,	// (0x00026d43) sso_t_nml_pane_t1

0xed05,	// (0x0002c896) sso_option_row_pane_ParamLimits

0xed05,	// (0x0002c896) sso_option_row_pane

0xed18,	// (0x0002c8a9) sso_t_sub_pane_t1_ParamLimits

0xed18,	// (0x0002c8a9) sso_t_sub_pane_t1

0x9f2b,	// (0x00027abc) bg_popup_window_pane_cp11_ParamLimits

0x9f2b,	// (0x00027abc) bg_popup_window_pane_cp11

0xed35,	// (0x0002c8c6) popup_sk_window_cp01_ParamLimits

0xed35,	// (0x0002c8c6) popup_sk_window_cp01

0xed42,	// (0x0002c8d3) sso_popup_body_pane_ParamLimits

0xed42,	// (0x0002c8d3) sso_popup_body_pane

0xed4f,	// (0x0002c8e0) scroll_pane_cp21_ParamLimits

0xed4f,	// (0x0002c8e0) scroll_pane_cp21

0xed5c,	// (0x0002c8ed) sso_popup_body_t_pane_ParamLimits

0xed5c,	// (0x0002c8ed) sso_popup_body_t_pane

0xed69,	// (0x0002c8fa) sso_popup_body_t_hdr_pane_ParamLimits

0xed69,	// (0x0002c8fa) sso_popup_body_t_hdr_pane

0xed7c,	// (0x0002c90d) sso_popup_body_t_nml_pane_ParamLimits

0xed7c,	// (0x0002c90d) sso_popup_body_t_nml_pane

0xed9a,	// (0x0002c92b) sso_popup_body_t_sub_pane_ParamLimits

0xed9a,	// (0x0002c92b) sso_popup_body_t_sub_pane

0xedbd,	// (0x0002c94e) sso_popup_body_t_hdr_pane_t1

0x91cf,	// (0x00026d60) sso_popup_body_t_nml_pane_t1_ParamLimits

0x91cf,	// (0x00026d60) sso_popup_body_t_nml_pane_t1

0xedcd,	// (0x0002c95e) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedcd,	// (0x0002c95e) sso_popup_body_t_sub_pane_t1

0xa1e6,	// (0x00027d77) sso_prog_pane_g1

0x9213,	// (0x00026da4) sso_apps_pane_comp1_ParamLimits

0x9213,	// (0x00026da4) sso_apps_pane_comp1

0xee0b,	// (0x0002c99c) sso_apps_pane_comp1_g1

0xee13,	// (0x0002c9a4) sso_apps_pane_comp1_t1

0xee2f,	// (0x0002c9c0) sso_option_row_pane_g1

0xee37,	// (0x0002c9c8) sso_option_row_pane_t1

0x8a59,	// (0x000265ea) bg_welc_area_ParamLimits

0x8a59,	// (0x000265ea) bg_welc_area

0x8ba7,	// (0x00026738) sso_t_hdr_pane_a_t1_ParamLimits

0x8ba7,	// (0x00026738) sso_t_hdr_pane_a_t1

0x8bbb,	// (0x0002674c) sso_t_nml_pane_a_t1_ParamLimits

0x8bbb,	// (0x0002674c) sso_t_nml_pane_a_t1

0x8be5,	// (0x00026776) sso_t_sub_pane_a_t1_ParamLimits

0x8be5,	// (0x00026776) sso_t_sub_pane_a_t1

0xeb8c,	// (0x0002c71d) sso_btn_pane_t1_copy1

0x9891,	// (0x00027422) welc_button_pane_2_comp1

0xebf9,	// (0x0002c78a) sso_t_hdr_pane_p_t1

0xec09,	// (0x0002c79a) sso_t_nml_pane_p_t1

0xec19,	// (0x0002c7aa) sso_t_sub_pane_p_t1

0xe043,	// (0x0002bbd4) list_cmail_pane_ParamLimits

0x8c69,	// (0x000267fa) welc_button_pane_cp01_ParamLimits

0x8c69,	// (0x000267fa) welc_button_pane_cp01

0x9891,	// (0x00027422) main_att_pane

0xee21,	// (0x0002c9b2) input_focus_pane_cp10_t1

0xee37,	// (0x0002c9c8) sso_option_row_pane_t1_ParamLimits

0x922d,	// (0x00026dbe) main_att_body_pane_ParamLimits

0x922d,	// (0x00026dbe) main_att_body_pane

0x9259,	// (0x00026dea) att_btn_pane_ParamLimits

0x9259,	// (0x00026dea) att_btn_pane

0x927b,	// (0x00026e0c) att_btn_pane_cp01_ParamLimits

0x927b,	// (0x00026e0c) att_btn_pane_cp01

0x9295,	// (0x00026e26) att_li_srv_pane_ParamLimits

0x9295,	// (0x00026e26) att_li_srv_pane

0x92a7,	// (0x00026e38) att_opt_pane_ParamLimits

0x92a7,	// (0x00026e38) att_opt_pane

0x92eb,	// (0x00026e7c) att_query_pane_ParamLimits

0x92eb,	// (0x00026e7c) att_query_pane

0x932f,	// (0x00026ec0) att_query_pane_cp01_ParamLimits

0x932f,	// (0x00026ec0) att_query_pane_cp01

0x9373,	// (0x00026f04) att_t_hdr_pane_ParamLimits

0x9373,	// (0x00026f04) att_t_hdr_pane

0x93c5,	// (0x00026f56) att_t_nml_pane_ParamLimits

0x93c5,	// (0x00026f56) att_t_nml_pane

0x93f9,	// (0x00026f8a) att_t_nml_pane_cp01_ParamLimits

0x93f9,	// (0x00026f8a) att_t_nml_pane_cp01

0x941d,	// (0x00026fae) att_t_nmlb_pane_ParamLimits

0x941d,	// (0x00026fae) att_t_nmlb_pane

0x9437,	// (0x00026fc8) att_term_pane_ParamLimits

0x9437,	// (0x00026fc8) att_term_pane

0x947b,	// (0x0002700c) main_att_body_pane_g1_ParamLimits

0x947b,	// (0x0002700c) main_att_body_pane_g1

0xedf2,	// (0x0002c983) att_t_hdr_pane_t1_ParamLimits

0xedf2,	// (0x0002c983) att_t_hdr_pane_t1

0xee4d,	// (0x0002c9de) att_t_nml_pane_t1_ParamLimits

0xee4d,	// (0x0002c9de) att_t_nml_pane_t1

0xee72,	// (0x0002ca03) att_btn_pane_t1

0x9891,	// (0x00027422) bg_button_pane_cp23

0xea33,	// (0x0002c5c4) att_li_srv_row_pane_ParamLimits

0xea33,	// (0x0002c5c4) att_li_srv_row_pane

0xee82,	// (0x0002ca13) att_t_nmlb_pane_t1_ParamLimits

0xee82,	// (0x0002ca13) att_t_nmlb_pane_t1

0xee9b,	// (0x0002ca2c) att_query_pane_t1

0xeeaa,	// (0x0002ca3b) att_query_pane_t2

0xeeb9,	// (0x0002ca4a) att_query_pane_t3

0x0002,

0x0d77,	// (0x0001e908) att_query_pane_t

0xeec8,	// (0x0002ca59) input_focus_pane_cp11

0xeed1,	// (0x0002ca62) att_term_pane_t1_ParamLimits

0xeed1,	// (0x0002ca62) att_term_pane_t1

0x9891,	// (0x00027422) att_opt_row_pane

0xeeee,	// (0x0002ca7f) att_opt_row_pane_g1

0xeef6,	// (0x0002ca87) att_opt_row_pane_t1_ParamLimits

0xeef6,	// (0x0002ca87) att_opt_row_pane_t1

0x94af,	// (0x00027040) att_li_srv_row_pane_g1

0x94b7,	// (0x00027048) att_li_srv_row_pane_t1

0x94cc,	// (0x0002705d) att_li_srv_row_pane_t2

0x0001,

0xfe87,	// (0x0002da18) att_li_srv_row_pane_t

0x9891,	// (0x00027422) main_call7_pane

0x9891,	// (0x00027422) main_vod_pane

0xec5a,	// (0x0002c7eb) sso_t_sub_pane_ParamLimits

0x9241,	// (0x00026dd2) att_btn_emg_pane_ParamLimits

0x9241,	// (0x00026dd2) att_btn_emg_pane

0x94b7,	// (0x00027048) att_li_srv_row_pane_t1_ParamLimits

0x94cc,	// (0x0002705d) att_li_srv_row_pane_t2_ParamLimits

0xfe87,	// (0x0002da18) att_li_srv_row_pane_t_ParamLimits

0xef0f,	// (0x0002caa0) att_btn_close_pane_g1

0x9891,	// (0x00027422) bg_button_pane_cp24

0x94e1,	// (0x00027072) main_vod_body_pane_ParamLimits

0x94e1,	// (0x00027072) main_vod_body_pane

0x94ef,	// (0x00027080) main_vod_body_pane_g1_ParamLimits

0x94ef,	// (0x00027080) main_vod_body_pane_g1

0x951f,	// (0x000270b0) scroll_pane_cp24_ParamLimits

0x951f,	// (0x000270b0) scroll_pane_cp24

0x9567,	// (0x000270f8) vod_btn_pane_ParamLimits

0x9567,	// (0x000270f8) vod_btn_pane

0x95a7,	// (0x00027138) vod_det_pane_ParamLimits

0x95a7,	// (0x00027138) vod_det_pane

0x95d1,	// (0x00027162) vod_logo_g1_ParamLimits

0x95d1,	// (0x00027162) vod_logo_g1

0x960b,	// (0x0002719c) vod_opt_pane_ParamLimits

0x960b,	// (0x0002719c) vod_opt_pane

0x963b,	// (0x000271cc) vod_opt_pane_cp01_ParamLimits

0x963b,	// (0x000271cc) vod_opt_pane_cp01

0x9663,	// (0x000271f4) vod_query_pane_ParamLimits

0x9663,	// (0x000271f4) vod_query_pane

0x968d,	// (0x0002721e) vod_query_pane_cp01_ParamLimits

0x968d,	// (0x0002721e) vod_query_pane_cp01

0x9699,	// (0x0002722a) vod_t_nml_pane_ParamLimits

0x9699,	// (0x0002722a) vod_t_nml_pane

0x973b,	// (0x000272cc) vod_t_nml_pane_cp01_ParamLimits

0x973b,	// (0x000272cc) vod_t_nml_pane_cp01

0x9773,	// (0x00027304) vod_t_sub_pane_ParamLimits

0x9773,	// (0x00027304) vod_t_sub_pane

0x97a1,	// (0x00027332) vod_t_sub_pane_cp01_ParamLimits

0x97a1,	// (0x00027332) vod_t_sub_pane_cp01

0xeec8,	// (0x0002ca59) vod_query_field_pane

0xee9b,	// (0x0002ca2c) vod_query_pane_t1

0x9891,	// (0x00027422) bg_button_pane_cp25

0xef17,	// (0x0002caa8) sso_btn_pane_t1_copy2

0x97c9,	// (0x0002735a) vod_t_nml_pane_t1_ParamLimits

0x97c9,	// (0x0002735a) vod_t_nml_pane_t1

0xef27,	// (0x0002cab8) vod_opt_row_pane_ParamLimits

0xef27,	// (0x0002cab8) vod_opt_row_pane

0xef39,	// (0x0002caca) vod_t_sub_pane_t1_ParamLimits

0xef39,	// (0x0002caca) vod_t_sub_pane_t1

0x97fe,	// (0x0002738f) vod_det_cell_pane_ParamLimits

0x97fe,	// (0x0002738f) vod_det_cell_pane

0x9891,	// (0x00027422) input_focus_pane_cp15

0xef52,	// (0x0002cae3) vod_query_field_pane_t1

0xef60,	// (0x0002caf1) vod_opt_row_pane_g1_ParamLimits

0xef60,	// (0x0002caf1) vod_opt_row_pane_g1

0xef6c,	// (0x0002cafd) vod_opt_row_pane_t1_ParamLimits

0xef6c,	// (0x0002cafd) vod_opt_row_pane_t1

0xef91,	// (0x0002cb22) vod_det_cell_field_pane

0xef9a,	// (0x0002cb2b) vod_det_cell_pane_g1

0xee9b,	// (0x0002ca2c) vod_det_cell_pane_t1

0x9891,	// (0x00027422) input_focus_pane_cp16

0xef52,	// (0x0002cae3) vod_det_cell_field_pane_t1

0x9810,	// (0x000273a1) call7_btn_grp_pane_ParamLimits

0x9810,	// (0x000273a1) call7_btn_grp_pane

0x981f,	// (0x000273b0) call7_bubble_pane_ParamLimits

0x981f,	// (0x000273b0) call7_bubble_pane

0x982d,	// (0x000273be) cell_call7_btn_pane_ParamLimits

0x982d,	// (0x000273be) cell_call7_btn_pane

0x983c,	// (0x000273cd) call7_pane_g1_ParamLimits

0x983c,	// (0x000273cd) call7_pane_g1

0x984b,	// (0x000273dc) call7_windows_conf_pane_ParamLimits

0x984b,	// (0x000273dc) call7_windows_conf_pane

0x9867,	// (0x000273f8) popup_call7_1st_window_ParamLimits

0x9867,	// (0x000273f8) popup_call7_1st_window

0x9875,	// (0x00027406) popup_call7_2nd_window_ParamLimits

0x9875,	// (0x00027406) popup_call7_2nd_window

0x9883,	// (0x00027414) popup_call7_3rd_window_ParamLimits

0x9883,	// (0x00027414) popup_call7_3rd_window

0x9891,	// (0x00027422) bg_button_pane_cp26

0xe8c8,	// (0x0002c459) cell_call7_btn_pane_g1

0xe93f,	// (0x0002c4d0) cell_call7_btn_pane_t1

0x9891,	// (0x00027422) bg_popup_window_pane_cp12

0xefa2,	// (0x0002cb33) popup_call7_1st_window_g1

0xefaa,	// (0x0002cb3b) popup_call7_1st_window_g2

0xefb2,	// (0x0002cb43) popup_call7_1st_window_g3

0x0002,

0x0d83,	// (0x0001e914) popup_call7_1st_window_g

0xefba,	// (0x0002cb4b) popup_call7_1st_window_t1

0xefc9,	// (0x0002cb5a) popup_call7_1st_window_t2

0xefd7,	// (0x0002cb68) popup_call7_1st_window_t3

0x0002,

0x0d8a,	// (0x0001e91b) popup_call7_1st_window_t

0x9891,	// (0x00027422) bg_popup_window_pane_cp13

0xefe5,	// (0x0002cb76) popup_call7_2nd_window_g1

0xefed,	// (0x0002cb7e) popup_call7_2nd_window_g2

0xeff5,	// (0x0002cb86) popup_call7_2nd_window_g3

0x0002,

0x0d91,	// (0x0001e922) popup_call7_2nd_window_g

0xeffd,	// (0x0002cb8e) popup_call7_2nd_window_t1

0x9891,	// (0x00027422) bg_popup_window_pane_cp14

0xf00c,	// (0x0002cb9d) call7_list_conf_pane

0xf014,	// (0x0002cba5) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0002cba5) call7_list_conf_row_pane

0xf027,	// (0x0002cbb8) call7_list_conf_row_pane_g1

0xf02f,	// (0x0002cbc0) call7_list_conf_row_pane_g2

0x0001,

0x0d98,	// (0x0001e929) call7_list_conf_row_pane_g

0xf037,	// (0x0002cbc8) call7_list_conf_row_pane_t1

0x9891,	// (0x00027422) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

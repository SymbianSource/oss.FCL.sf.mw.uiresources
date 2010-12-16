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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000dfc8 };

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
0x0b30,	// (0x0000eaf8) Screen

0x0b3c,	// (0x0000eb04) application_window

0x0b78,	// (0x0000eb40) area_bottom_pane_ParamLimits

0x0b78,	// (0x0000eb40) area_bottom_pane

0x0bb1,	// (0x0000eb79) area_top_pane_ParamLimits

0x0bb1,	// (0x0000eb79) area_top_pane

0x924a,	// (0x00017212) call_video_uplink_pane_ParamLimits

0x924a,	// (0x00017212) call_video_uplink_pane

0x0c3f,	// (0x0000ec07) main_pane_ParamLimits

0x0c3f,	// (0x0000ec07) main_pane

0xba1c,	// (0x000199e4) context_pane

0x37b8,	// (0x00011780) navi_pane

0x37ea,	// (0x000117b2) popup_cale_events_window_ParamLimits

0x37ea,	// (0x000117b2) popup_cale_events_window

0xba2f,	// (0x000199f7) popup_mup_playback_window

0x3802,	// (0x000117ca) signal_pane

0x9a1d,	// (0x000179e5) main_browser_pane

0x9c52,	// (0x00017c1a) main_burst_pane

0x3520,	// (0x000114e8) main_calc_pane

0xb9bc,	// (0x00019984) main_cale_day_pane

0x1078,	// (0x0000f040) main_cale_month_pane

0xb9bc,	// (0x00019984) main_cale_week_pane

0x9c52,	// (0x00017c1a) main_call_pane

0x9689,	// (0x00017651) main_call_poc_pane

0x9c52,	// (0x00017c1a) main_camera_pane

0x9c52,	// (0x00017c1a) main_chi_dic_pane

0xa459,	// (0x00018421) main_clock_pane

0x9689,	// (0x00017651) main_fmradio_pane

0x9c52,	// (0x00017c1a) main_graph_messa_pane

0x9689,	// (0x00017651) main_help_pane

0x9a1d,	// (0x000179e5) main_im_pane

0x98e4,	// (0x000178ac) main_image_pane_ParamLimits

0x98e4,	// (0x000178ac) main_image_pane

0x9689,	// (0x00017651) main_location2_pane

0x9c52,	// (0x00017c1a) main_location_pane

0x98e4,	// (0x000178ac) main_messa_pane

0x9689,	// (0x00017651) main_mp2_pane

0x9c52,	// (0x00017c1a) main_mp_pane

0x9689,	// (0x00017651) main_msg_pane

0x9689,	// (0x00017651) main_mup_eq_pane

0x9689,	// (0x00017651) main_mup_pane

0x9a1d,	// (0x000179e5) main_notes_pane

0x9689,	// (0x00017651) main_pec_pane

0x9689,	// (0x00017651) main_phob_pane

0x9689,	// (0x00017651) main_pinb_pane

0x9689,	// (0x00017651) main_postcard_pane

0x9689,	// (0x00017651) main_qdial_pane

0x9c52,	// (0x00017c1a) main_skin_pane

0x9689,	// (0x00017651) main_smil2_pane

0x9c52,	// (0x00017c1a) main_smil_pane

0x9c52,	// (0x00017c1a) main_video_pane

0x9c52,	// (0x00017c1a) main_video_tele_pane

0x98e4,	// (0x000178ac) main_viewer_pane_ParamLimits

0x98e4,	// (0x000178ac) main_viewer_pane

0x9c52,	// (0x00017c1a) main_vorec_pane

0x3574,	// (0x0001153c) popup_blid_sat_info_window_ParamLimits

0x3574,	// (0x0001153c) popup_blid_sat_info_window

0x35cc,	// (0x00011594) popup_dyc_status_message_window_ParamLimits

0x35cc,	// (0x00011594) popup_dyc_status_message_window

0x35e4,	// (0x000115ac) popup_grid_large_graphic_window_ParamLimits

0x35e4,	// (0x000115ac) popup_grid_large_graphic_window

0x3694,	// (0x0001165c) popup_loc_request_window_ParamLimits

0x3694,	// (0x0001165c) popup_loc_request_window

0x3790,	// (0x00011758) popup_wml_address_window_ParamLimits

0x3790,	// (0x00011758) popup_wml_address_window

0x335a,	// (0x00011322) call_muted_g1

0x304f,	// (0x00011017) popup_call_audio_conf_window_ParamLimits

0x304f,	// (0x00011017) popup_call_audio_conf_window

0x336e,	// (0x00011336) popup_call_audio_first_window_ParamLimits

0x336e,	// (0x00011336) popup_call_audio_first_window

0x33e4,	// (0x000113ac) popup_call_audio_in_window_ParamLimits

0x33e4,	// (0x000113ac) popup_call_audio_in_window

0x3420,	// (0x000113e8) popup_call_audio_out_window_ParamLimits

0x3420,	// (0x000113e8) popup_call_audio_out_window

0x345a,	// (0x00011422) popup_call_audio_second_window_ParamLimits

0x345a,	// (0x00011422) popup_call_audio_second_window

0x34b0,	// (0x00011478) popup_call_audio_wait_window_ParamLimits

0x34b0,	// (0x00011478) popup_call_audio_wait_window

0x34e5,	// (0x000114ad) popup_number_entry_window_ParamLimits

0x34e5,	// (0x000114ad) popup_number_entry_window

0x9276,	// (0x0001723e) bg_popup_call_pane_cp05_ParamLimits

0x9276,	// (0x0001723e) bg_popup_call_pane_cp05

0x9296,	// (0x0001725e) popup_number_entry_window_t1

0x92a9,	// (0x00017271) popup_number_entry_window_t2

0x92bb,	// (0x00017283) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0001cfe5) popup_number_entry_window_t

0x92cd,	// (0x00017295) text_title_cp2

0x92e0,	// (0x000172a8) bg_popup_call_pane_cp_ParamLimits

0x92e0,	// (0x000172a8) bg_popup_call_pane_cp

0x92ee,	// (0x000172b6) call_thumbnail_pane

0x92f6,	// (0x000172be) popup_call_audio_in_window_g1_ParamLimits

0x92f6,	// (0x000172be) popup_call_audio_in_window_g1

0x9302,	// (0x000172ca) popup_call_audio_in_window_g2_ParamLimits

0x9302,	// (0x000172ca) popup_call_audio_in_window_g2

0x930e,	// (0x000172d6) popup_call_audio_in_window_g3_ParamLimits

0x930e,	// (0x000172d6) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0001cfee) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0001cfee) popup_call_audio_in_window_g

0x931a,	// (0x000172e2) popup_call_audio_in_window_t1_ParamLimits

0x931a,	// (0x000172e2) popup_call_audio_in_window_t1

0x9336,	// (0x000172fe) popup_call_audio_in_window_t2_ParamLimits

0x9336,	// (0x000172fe) popup_call_audio_in_window_t2

0x9352,	// (0x0001731a) popup_call_audio_in_window_t3_ParamLimits

0x9352,	// (0x0001731a) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0001cff5) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0001cff5) popup_call_audio_in_window_t

0x92e0,	// (0x000172a8) bg_popup_call_pane_cp01_ParamLimits

0x92e0,	// (0x000172a8) bg_popup_call_pane_cp01

0x92ee,	// (0x000172b6) call_thumbnail_pane_cp02

0x9365,	// (0x0001732d) call_type_pane_cp022

0x936d,	// (0x00017335) popup_call_audio_out_window_g1_ParamLimits

0x936d,	// (0x00017335) popup_call_audio_out_window_g1

0x937f,	// (0x00017347) popup_call_audio_out_window_g2_ParamLimits

0x937f,	// (0x00017347) popup_call_audio_out_window_g2

0x938b,	// (0x00017353) popup_call_audio_out_window_g3_ParamLimits

0x938b,	// (0x00017353) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0001cffc) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0001cffc) popup_call_audio_out_window_g

0x939d,	// (0x00017365) popup_call_audio_out_window_t1_ParamLimits

0x939d,	// (0x00017365) popup_call_audio_out_window_t1

0x93b5,	// (0x0001737d) popup_call_audio_out_window_t2_ParamLimits

0x93b5,	// (0x0001737d) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0001d003) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0001d003) popup_call_audio_out_window_t

0x93ca,	// (0x00017392) bg_popup_call_pane_ParamLimits

0x93ca,	// (0x00017392) bg_popup_call_pane

0x0dfb,	// (0x0000edc3) call_thumbnail_pane_cp_ParamLimits

0x0dfb,	// (0x0000edc3) call_thumbnail_pane_cp

0x944e,	// (0x00017416) call_type_pane_cp01_ParamLimits

0x944e,	// (0x00017416) call_type_pane_cp01

0x9492,	// (0x0001745a) popup_call_audio_first_window_g1_ParamLimits

0x9492,	// (0x0001745a) popup_call_audio_first_window_g1

0x94de,	// (0x000174a6) popup_call_audio_first_window_g2_ParamLimits

0x94de,	// (0x000174a6) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0001d008) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0001d008) popup_call_audio_first_window_g

0x9522,	// (0x000174ea) popup_call_audio_first_window_t1_ParamLimits

0x9522,	// (0x000174ea) popup_call_audio_first_window_t1

0x95ce,	// (0x00017596) popup_call_audio_first_window_t4_ParamLimits

0x95ce,	// (0x00017596) popup_call_audio_first_window_t4

0x965a,	// (0x00017622) popup_call_audio_first_window_t5_ParamLimits

0x965a,	// (0x00017622) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0001d00d) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0001d00d) popup_call_audio_first_window_t

0x9689,	// (0x00017651) bg_popup_call_pane_cp02

0x9693,	// (0x0001765b) call_type_pane_cp023

0x969b,	// (0x00017663) popup_call_audio_wait_window_g1

0x96a3,	// (0x0001766b) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0001d014) popup_call_audio_wait_window_g

0x96ab,	// (0x00017673) popup_call_audio_wait_window_t3

0x96b9,	// (0x00017681) bg_popup_call_pane_cp03_ParamLimits

0x96b9,	// (0x00017681) bg_popup_call_pane_cp03

0x9719,	// (0x000176e1) call_thumbnail_pane_cp011_ParamLimits

0x9719,	// (0x000176e1) call_thumbnail_pane_cp011

0x9725,	// (0x000176ed) call_type_pane_cp034_ParamLimits

0x9725,	// (0x000176ed) call_type_pane_cp034

0x9761,	// (0x00017729) popup_call_audio_second_window_g1_ParamLimits

0x9761,	// (0x00017729) popup_call_audio_second_window_g1

0x979d,	// (0x00017765) popup_call_audio_second_window_g2_ParamLimits

0x979d,	// (0x00017765) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0001d019) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0001d019) popup_call_audio_second_window_g

0x97d9,	// (0x000177a1) popup_call_audio_second_window_t1_ParamLimits

0x97d9,	// (0x000177a1) popup_call_audio_second_window_t1

0x985a,	// (0x00017822) popup_call_audio_second_window_t2_ParamLimits

0x985a,	// (0x00017822) popup_call_audio_second_window_t2

0x9890,	// (0x00017858) popup_call_audio_second_window_t3_ParamLimits

0x9890,	// (0x00017858) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0001d01e) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0001d01e) popup_call_audio_second_window_t

0x9689,	// (0x00017651) bg_popup_call_pane_cp04

0x98c6,	// (0x0001788e) list_conf_pane

0x98ce,	// (0x00017896) popup_call_audio_conf_window_t1

0x98dc,	// (0x000178a4) call_thumbnail_pane_g1

0x98e4,	// (0x000178ac) bg_pinb_pane_ParamLimits

0x98e4,	// (0x000178ac) bg_pinb_pane

0x98f2,	// (0x000178ba) find_pinb_pane

0x98e4,	// (0x000178ac) listscroll_pinb_pane_ParamLimits

0x98e4,	// (0x000178ac) listscroll_pinb_pane

0x98fc,	// (0x000178c4) pinb_bg_pane_g1

0x98fc,	// (0x000178c4) pinb_bg_pane_g2

0x98fc,	// (0x000178c4) pinb_bg_pane_g3

0x98fc,	// (0x000178c4) pinb_bg_pane_g4

0x98fc,	// (0x000178c4) pinb_bg_pane_g5

0x98fc,	// (0x000178c4) pinb_bg_pane_g6

0x98fc,	// (0x000178c4) pinb_bg_pane_g7

0x98fc,	// (0x000178c4) pinb_bg_pane_g8

0x98fc,	// (0x000178c4) pinb_bg_pane_g9

0x98fc,	// (0x000178c4) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0001d025) pinb_bg_pane_g

0x91f9,	// (0x000171c1) grid_pinb_pane

0x91f9,	// (0x000171c1) list_pinb_pane

0x9268,	// (0x00017230) scroll_pane_cp01_ParamLimits

0x9268,	// (0x00017230) scroll_pane_cp01

0x9906,	// (0x000178ce) find_pinb_pane_g1_ParamLimits

0x9906,	// (0x000178ce) find_pinb_pane_g1

0x991e,	// (0x000178e6) find_pinb_pane_t1

0x9930,	// (0x000178f8) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0001d03f) find_pinb_pane_t

0x9945,	// (0x0001790d) input_focus_pane_cp01_ParamLimits

0x9945,	// (0x0001790d) input_focus_pane_cp01

0x9951,	// (0x00017919) cell_pinb_pane_ParamLimits

0x9951,	// (0x00017919) cell_pinb_pane

0x995f,	// (0x00017927) cell_pinb_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_pinb_pane_g1

0x996d,	// (0x00017935) cell_pinb_pane_g2_ParamLimits

0x996d,	// (0x00017935) cell_pinb_pane_g2

0x996d,	// (0x00017935) cell_pinb_pane_g3_ParamLimits

0x996d,	// (0x00017935) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0001d044) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0001d044) cell_pinb_pane_g

0x9689,	// (0x00017651) grid_highlight_pane_cp01

0x9951,	// (0x00017919) list_pinb_item_pane_ParamLimits

0x9951,	// (0x00017919) list_pinb_item_pane

0x91f9,	// (0x000171c1) list_highlight_pane_cp02

0x997b,	// (0x00017943) list_pinb_item_pane_g1_ParamLimits

0x997b,	// (0x00017943) list_pinb_item_pane_g1

0x996d,	// (0x00017935) list_pinb_item_pane_g2_ParamLimits

0x996d,	// (0x00017935) list_pinb_item_pane_g2

0x995f,	// (0x00017927) list_pinb_item_pane_g3_ParamLimits

0x995f,	// (0x00017927) list_pinb_item_pane_g3

0x996d,	// (0x00017935) list_pinb_item_pane_g4_ParamLimits

0x996d,	// (0x00017935) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0001d04b) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0001d04b) list_pinb_item_pane_g

0x9989,	// (0x00017951) list_pinb_item_pane_t1_ParamLimits

0x9989,	// (0x00017951) list_pinb_item_pane_t1

0x0e3d,	// (0x0000ee05) calc_display_pane

0x0e62,	// (0x0000ee2a) calc_paper_pane

0x0e85,	// (0x0000ee4d) grid_calc_pane

0x91f9,	// (0x000171c1) bg_list_pane_cp01

0x99a5,	// (0x0001796d) clock_g1

0x99a5,	// (0x0001796d) clock_g2

0x0001,

0xf08c,	// (0x0001d054) clock_g

0x99af,	// (0x00017977) clock_t1_ParamLimits

0x99af,	// (0x00017977) clock_t1

0x99c3,	// (0x0001798b) clock_t2_ParamLimits

0x99c3,	// (0x0001798b) clock_t2

0x99c3,	// (0x0001798b) clock_t3_ParamLimits

0x99c3,	// (0x0001798b) clock_t3

0x99c3,	// (0x0001798b) clock_t4_ParamLimits

0x99c3,	// (0x0001798b) clock_t4

0x99af,	// (0x00017977) clock_t5_ParamLimits

0x99af,	// (0x00017977) clock_t5

0x99c3,	// (0x0001798b) clock_t6_ParamLimits

0x99c3,	// (0x0001798b) clock_t6

0x99c3,	// (0x0001798b) clock_t7_ParamLimits

0x99c3,	// (0x0001798b) clock_t7

0x99c3,	// (0x0001798b) clock_t8_ParamLimits

0x99c3,	// (0x0001798b) clock_t8

0x99c3,	// (0x0001798b) clock_t9_ParamLimits

0x99c3,	// (0x0001798b) clock_t9

0x0008,

0xf091,	// (0x0001d059) clock_t_ParamLimits

0xf091,	// (0x0001d059) clock_t

0x91f9,	// (0x000171c1) popup_clock_analogue_window_cp02

0x91f9,	// (0x000171c1) popup_clock_digital_window_cp01

0x9689,	// (0x00017651) listscroll_help_pane

0x9689,	// (0x00017651) phob_pre_status_pane

0x99d7,	// (0x0001799f) grid_qdial_pane

0x98e4,	// (0x000178ac) listscroll_mce_pane

0x98e4,	// (0x000178ac) bg_notes_pane

0x99e1,	// (0x000179a9) list_notes_pane

0x0eb3,	// (0x0000ee7b) scroll_pane_cp06

0x99ef,	// (0x000179b7) bg_calc_paper_pane

0x9a03,	// (0x000179cb) list_calc_pane

0x9a1d,	// (0x000179e5) bg_calc_display_pane

0x0ec7,	// (0x0000ee8f) calc_display_pane_t1

0x0ed9,	// (0x0000eea1) calc_display_pane_t2

0x9a29,	// (0x000179f1) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0001d06c) calc_display_pane_t

0x0eeb,	// (0x0000eeb3) cell_calc_pane_ParamLimits

0x0eeb,	// (0x0000eeb3) cell_calc_pane

0x9a3b,	// (0x00017a03) bg_calc_paper_pane_g1

0x9a47,	// (0x00017a0f) bg_calc_paper_pane_g2

0x9a53,	// (0x00017a1b) bg_calc_paper_pane_g3

0x9a5f,	// (0x00017a27) bg_calc_paper_pane_g4

0x9a6b,	// (0x00017a33) bg_calc_paper_pane_g5

0x0f20,	// (0x0000eee8) bg_calc_paper_pane_g6

0x0f2f,	// (0x0000eef7) bg_calc_paper_pane_g7

0x0f3e,	// (0x0000ef06) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0001d073) bg_calc_paper_pane_g

0x0f51,	// (0x0000ef19) calc_bg_paper_pane_g9

0x0f64,	// (0x0000ef2c) list_calc_item_pane_ParamLimits

0x0f64,	// (0x0000ef2c) list_calc_item_pane

0x9a77,	// (0x00017a3f) list_calc_item_pane_g1

0x9a84,	// (0x00017a4c) list_calc_item_pane_t1_ParamLimits

0x9a84,	// (0x00017a4c) list_calc_item_pane_t1

0x0f79,	// (0x0000ef41) list_calc_item_pane_t2_ParamLimits

0x0f79,	// (0x0000ef41) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0001d084) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0001d084) list_calc_item_pane_t

0x98fc,	// (0x000178c4) cell_calc_pane_g1

0x9a96,	// (0x00017a5e) grid_highlight_pane_cp02

0x9ab8,	// (0x00017a80) bg_calc_display_pane_g1

0x0fab,	// (0x0000ef73) bg_calc_display_pane_g2

0xcca9,	// (0x0001ac71) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0001d08e) bg_calc_display_pane_g

0x0fb5,	// (0x0000ef7d) cell_qdial_pane_ParamLimits

0x0fb5,	// (0x0000ef7d) cell_qdial_pane

0x0fc9,	// (0x0000ef91) cell_qdial_pane_g1_ParamLimits

0x0fc9,	// (0x0000ef91) cell_qdial_pane_g1

0x0fdf,	// (0x0000efa7) cell_qdial_pane_g2_ParamLimits

0x0fdf,	// (0x0000efa7) cell_qdial_pane_g2

0x9ac1,	// (0x00017a89) cell_qdial_pane_g3_ParamLimits

0x9ac1,	// (0x00017a89) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0001d095) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0001d095) cell_qdial_pane_g

0x1005,	// (0x0000efcd) cell_qdial_pane_t1_ParamLimits

0x1005,	// (0x0000efcd) cell_qdial_pane_t1

0x101d,	// (0x0000efe5) cell_qdial_pane_t2_ParamLimits

0x101d,	// (0x0000efe5) cell_qdial_pane_t2

0x1030,	// (0x0000eff8) cell_qdial_pane_t3_ParamLimits

0x1030,	// (0x0000eff8) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0001d09e) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0001d09e) cell_qdial_pane_t

0x9689,	// (0x00017651) grid_highlight_pane_cp04

0x9acd,	// (0x00017a95) thumbnail_qdial_pane_ParamLimits

0x9acd,	// (0x00017a95) thumbnail_qdial_pane

0x9b29,	// (0x00017af1) list_help_pane

0x9b32,	// (0x00017afa) scroll_pane_cp02

0x1043,	// (0x0000f00b) help_list_pane_t1_ParamLimits

0x1043,	// (0x0000f00b) help_list_pane_t1

0x9b3b,	// (0x00017b03) bg_notes_pane_g2

0x9b43,	// (0x00017b0b) bg_notes_pane_g3

0x9b4b,	// (0x00017b13) notes_bg_pane_g1

0x9b53,	// (0x00017b1b) notes_bg_pane_g4

0x9b5b,	// (0x00017b23) notes_bg_pane_g5

0x9b63,	// (0x00017b2b) notes_bg_pane_g6

0x9b6b,	// (0x00017b33) notes_bg_pane_g7

0x9b73,	// (0x00017b3b) notes_bg_pane_g8

0x9b7b,	// (0x00017b43) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0001d0bc) notes_bg_pane_g

0x1062,	// (0x0000f02a) list_notes_text_pane_ParamLimits

0x1062,	// (0x0000f02a) list_notes_text_pane

0x9b83,	// (0x00017b4b) list_notes_text_pane_g1

0x9b8c,	// (0x00017b54) list_notes_text_pane_t1

0x1078,	// (0x0000f040) listscroll_cale_week_pane

0x10a4,	// (0x0000f06c) bg_cale_heading_pane

0x9bb4,	// (0x00017b7c) bg_cale_pane_cp01

0x10bc,	// (0x0000f084) cale_week_corner_pane

0x10db,	// (0x0000f0a3) cale_week_day_heading_pane

0x10f8,	// (0x0000f0c0) cale_week_scroll_pane_g1

0x110b,	// (0x0000f0d3) cale_week_scroll_pane_g2

0x1123,	// (0x0000f0eb) cale_week_scroll_pane_g3

0x113b,	// (0x0000f103) cale_week_scroll_pane_g4

0x1153,	// (0x0000f11b) cale_week_scroll_pane_g5

0x1173,	// (0x0000f13b) cale_week_scroll_pane_g6

0x1193,	// (0x0000f15b) cale_week_scroll_pane_g7

0x11b3,	// (0x0000f17b) cale_week_scroll_pane_g8

0x11d7,	// (0x0000f19f) cale_week_scroll_pane_g9

0x11ef,	// (0x0000f1b7) cale_week_scroll_pane_g10

0x1207,	// (0x0000f1cf) cale_week_scroll_pane_g11

0x121f,	// (0x0000f1e7) cale_week_scroll_pane_g12

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g13

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g14

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0001d0cb) cale_week_scroll_pane_g

0x1273,	// (0x0000f23b) cale_week_time_pane

0x1297,	// (0x0000f25f) grid_cale_week_pane

0x9be3,	// (0x00017bab) scroll_pane_cp08

0x12bd,	// (0x0000f285) cell_cale_week_pane_ParamLimits

0x12bd,	// (0x0000f285) cell_cale_week_pane

0x134b,	// (0x0000f313) cale_week_day_heading_pane_t1

0x1375,	// (0x0000f33d) cale_week_day_heading_pane_t2

0x13a4,	// (0x0000f36c) cale_week_day_heading_pane_t3

0x13d3,	// (0x0000f39b) cale_week_day_heading_pane_t4

0x1402,	// (0x0000f3ca) cale_week_day_heading_pane_t5

0x1439,	// (0x0000f401) cale_week_day_heading_pane_t6

0x1470,	// (0x0000f438) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0001d0ec) cale_week_day_heading_pane_t

0x9c00,	// (0x00017bc8) bg_cale_side_pane

0x149a,	// (0x0000f462) cale_week_time_pane_t1

0x14b4,	// (0x0000f47c) cale_week_time_pane_t2

0x14ce,	// (0x0000f496) cale_week_time_pane_t3

0x14e8,	// (0x0000f4b0) cale_week_time_pane_t4

0x1502,	// (0x0000f4ca) cale_week_time_pane_t5

0x151c,	// (0x0000f4e4) cale_week_time_pane_t6

0x1536,	// (0x0000f4fe) cale_week_time_pane_t7

0x1550,	// (0x0000f518) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0001d0fb) cale_week_time_pane_t

0x1570,	// (0x0000f538) cell_cale_week_pane_g2

0x1594,	// (0x0000f55c) cell_cale_week_pane_g3_ParamLimits

0x1594,	// (0x0000f55c) cell_cale_week_pane_g3

0x9c0e,	// (0x00017bd6) grid_highlight_pane_cp07

0x9c16,	// (0x00017bde) listscroll_gms_pane

0x9c20,	// (0x00017be8) grid_gms_pane

0x9c29,	// (0x00017bf1) listscroll_gms_pane_g1

0x9c31,	// (0x00017bf9) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0001d10c) listscroll_gms_pane_g

0x15ac,	// (0x0000f574) scroll_pane_cp010

0x15b7,	// (0x0000f57f) cell_gms_pane_ParamLimits

0x15b7,	// (0x0000f57f) cell_gms_pane

0x15c9,	// (0x0000f591) cell_gms_pane_g1

0x9c39,	// (0x00017c01) cell_gms_pane_g2

0x9b83,	// (0x00017b4b) cell_gms_pane_g3

0x9c41,	// (0x00017c09) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0001d111) cell_gms_pane_g

0x9c4a,	// (0x00017c12) grid_highlight_pane_cp09

0x32e2,	// (0x000112aa) phob_pre_status_pane_g1

0x32ea,	// (0x000112b2) phob_pre_status_pane_g2

0x32f2,	// (0x000112ba) phob_pre_status_pane_g3

0x32fa,	// (0x000112c2) phob_pre_status_pane_g4

0x0004,

0xf4f8,	// (0x0001d4c0) phob_pre_status_pane_g

0x330a,	// (0x000112d2) phob_pre_status_pane_t1

0x3318,	// (0x000112e0) phob_pre_status_pane_t2

0x3328,	// (0x000112f0) phob_pre_status_pane_t3

0x0002,

0xf503,	// (0x0001d4cb) phob_pre_status_pane_t

0x9c52,	// (0x00017c1a) bg_list_pane_cp05

0x15d9,	// (0x0000f5a1) grid_vorec_pane

0x15e1,	// (0x0000f5a9) vorec_t1

0x15ef,	// (0x0000f5b7) vorec_t2

0x15fd,	// (0x0000f5c5) vorec_t3

0x160b,	// (0x0000f5d3) vorec_t4

0xea26,	// (0x0001c9ee) vorec_t5

0x839a,	// (0x00016362) vorec_t6

0x0004,

0xf152,	// (0x0001d11a) vorec_t

0x83a8,	// (0x00016370) wait_bar_pane_cp01

0x1627,	// (0x0000f5ef) cell_vorec_pane_ParamLimits

0x1627,	// (0x0000f5ef) cell_vorec_pane

0x9c5a,	// (0x00017c22) cell_vorec_pane_g1

0x9689,	// (0x00017651) grid_highlight_pane_cp05

0x9268,	// (0x00017230) cams_zoom_pane

0x9268,	// (0x00017230) image_vga_pane

0x995f,	// (0x00017927) main_camera_pane_g1

0x995f,	// (0x00017927) main_camera_pane_g2

0x995f,	// (0x00017927) main_camera_pane_g3

0x995f,	// (0x00017927) main_camera_pane_g4

0x995f,	// (0x00017927) main_camera_pane_g5

0x995f,	// (0x00017927) main_camera_pane_g6

0x995f,	// (0x00017927) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0001d125) main_camera_pane_g

0x99af,	// (0x00017977) main_camera_pane_t1

0x99af,	// (0x00017977) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0001d136) main_camera_pane_t

0x164e,	// (0x0000f616) cams_zoom_pane_cp_ParamLimits

0x164e,	// (0x0000f616) cams_zoom_pane_cp

0x1682,	// (0x0000f64a) image_cif_pane_ParamLimits

0x1682,	// (0x0000f64a) image_cif_pane

0x91f9,	// (0x000171c1) image_subqcif_pane

0x1694,	// (0x0000f65c) main_video_pane_g1_ParamLimits

0x1694,	// (0x0000f65c) main_video_pane_g1

0x16c2,	// (0x0000f68a) main_video_pane_g2_ParamLimits

0x16c2,	// (0x0000f68a) main_video_pane_g2

0x16fc,	// (0x0000f6c4) main_video_pane_g3_ParamLimits

0x16fc,	// (0x0000f6c4) main_video_pane_g3

0x16fc,	// (0x0000f6c4) main_video_pane_g4_ParamLimits

0x16fc,	// (0x0000f6c4) main_video_pane_g4

0x1730,	// (0x0000f6f8) main_video_pane_g5_ParamLimits

0x1730,	// (0x0000f6f8) main_video_pane_g5

0x9c64,	// (0x00017c2c) main_video_pane_g6_ParamLimits

0x9c64,	// (0x00017c2c) main_video_pane_g6

0x0006,

0xf173,	// (0x0001d13b) main_video_pane_g_ParamLimits

0xf173,	// (0x0001d13b) main_video_pane_g

0x174c,	// (0x0000f714) main_video_pane_t1_ParamLimits

0x174c,	// (0x0000f714) main_video_pane_t1

0x99a5,	// (0x0001796d) cams_zoom_pane_g1

0x99a5,	// (0x0001796d) cams_zoom_pane_g2

0x99a5,	// (0x0001796d) cams_zoom_pane_g3

0x99a5,	// (0x0001796d) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0001d14a) cams_zoom_pane_g

0x9268,	// (0x00017230) grid_cams_pane

0x9268,	// (0x00017230) linegrid_cams_pane

0x1790,	// (0x0000f758) cell_cams_pane_ParamLimits

0x1790,	// (0x0000f758) cell_cams_pane

0x91f9,	// (0x000171c1) cams_burst_image_pane

0x99a5,	// (0x0001796d) cell_cams_pane_g1

0x91f9,	// (0x000171c1) grid_highlight_pane_cp03

0x98fc,	// (0x000178c4) mp_bg_pane_g1

0x91f9,	// (0x000171c1) bg_list_pane_cp03

0x91f9,	// (0x000171c1) bg_mp_pane

0x91f9,	// (0x000171c1) grid_mp_pane

0x99a5,	// (0x0001796d) media_player_g1

0xa17f,	// (0x00018147) media_player_t1

0xa17f,	// (0x00018147) media_player_t2

0xa17f,	// (0x00018147) media_player_t3

0xa17f,	// (0x00018147) media_player_t4

0xa17f,	// (0x00018147) media_player_t5

0xa17f,	// (0x00018147) media_player_t6

0xa17f,	// (0x00018147) media_player_t7

0x0006,

0xf4e2,	// (0x0001d4aa) media_player_t

0x91f9,	// (0x000171c1) wait_bar_pane_cp02

0xf4c7,	// (0x0001d48f) main_usb_pane_t

0xa459,	// (0x00018421) cell_mp_pane

0x98fc,	// (0x000178c4) cell_mp_pane_g1

0x9689,	// (0x00017651) grid_highlight_pane_cp06

0x9c7e,	// (0x00017c46) grid_skin_colour_pane

0x9c86,	// (0x00017c4e) list_highlight_pane_cp03

0x17a5,	// (0x0000f76d) skin_g1

0x9c8e,	// (0x00017c56) skin_t1

0x9c9d,	// (0x00017c65) skin_t2

0x0001,

0xf1b0,	// (0x0001d178) skin_t

0x17ad,	// (0x0000f775) cell_skin_colour_pane_ParamLimits

0x17ad,	// (0x0000f775) cell_skin_colour_pane

0x9cab,	// (0x00017c73) cell_skin_colour_pane_g1

0x1826,	// (0x0000f7ee) call_video_g1_ParamLimits

0x1826,	// (0x0000f7ee) call_video_g1

0x1842,	// (0x0000f80a) call_video_g2_ParamLimits

0x1842,	// (0x0000f80a) call_video_g2

0x0001,

0xf1b5,	// (0x0001d17d) call_video_g_ParamLimits

0xf1b5,	// (0x0001d17d) call_video_g

0x1894,	// (0x0000f85c) call_video_uplink_pane_cp1_ParamLimits

0x1894,	// (0x0000f85c) call_video_uplink_pane_cp1

0x9cbd,	// (0x00017c85) call_video_uplink_pane_cp2

0x1933,	// (0x0000f8fb) video_down_crop_pane_ParamLimits

0x1933,	// (0x0000f8fb) video_down_crop_pane

0x1a1c,	// (0x0000f9e4) video_down_pane_ParamLimits

0x1a1c,	// (0x0000f9e4) video_down_pane

0x9cc5,	// (0x00017c8d) video_down_subqcif_pane_ParamLimits

0x9cc5,	// (0x00017c8d) video_down_subqcif_pane

0x9cdd,	// (0x00017ca5) video_down_subqcif_pane_cp_ParamLimits

0x9cdd,	// (0x00017ca5) video_down_subqcif_pane_cp

0x9d03,	// (0x00017ccb) im_reading_pane_ParamLimits

0x9d03,	// (0x00017ccb) im_reading_pane

0x1b2c,	// (0x0000faf4) im_writing_pane_ParamLimits

0x1b2c,	// (0x0000faf4) im_writing_pane

0x1b42,	// (0x0000fb0a) im_reading_pane_t1

0x9d1d,	// (0x00017ce5) list_im_pane

0x9d2e,	// (0x00017cf6) scroll_pane_cp07

0x1b7c,	// (0x0000fb44) im_writing_pane_t1_ParamLimits

0x1b7c,	// (0x0000fb44) im_writing_pane_t1

0x9d47,	// (0x00017d0f) im_writing_pane_t2_ParamLimits

0x9d47,	// (0x00017d0f) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0001d187) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0001d187) im_writing_pane_t

0x9689,	// (0x00017651) input_focus_pane_cp04

0x9689,	// (0x00017651) input_focus_pane_cp05

0x1b91,	// (0x0000fb59) list_im_single_pane_ParamLimits

0x1b91,	// (0x0000fb59) list_im_single_pane

0x1ba6,	// (0x0000fb6e) list_single_im_pane_t1

0x9c52,	// (0x00017c1a) blid_accuracy_pane

0x9c52,	// (0x00017c1a) blid_compass_pane

0xb974,	// (0x0001993c) main_location_t1

0xb974,	// (0x0001993c) main_location_t2

0xb974,	// (0x0001993c) main_location_t3

0x0002,

0xf4f1,	// (0x0001d4b9) main_location_t

0x9689,	// (0x00017651) aid_levels_location

0x98fc,	// (0x000178c4) blid_accuracy_pane_g1

0x98fc,	// (0x000178c4) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x0001d1d6) blid_accuracy_pane_g

0x9d8f,	// (0x00017d57) wml_content_pane

0x9dcd,	// (0x00017d95) wml_button_pane_ParamLimits

0x9dcd,	// (0x00017d95) wml_button_pane

0x1bb5,	// (0x0000fb7d) wml_list_single_large_pane_ParamLimits

0x1bb5,	// (0x0000fb7d) wml_list_single_large_pane

0x1bca,	// (0x0000fb92) wml_list_single_medium_pane_ParamLimits

0x1bca,	// (0x0000fb92) wml_list_single_medium_pane

0x1be1,	// (0x0000fba9) wml_list_single_small_pane_ParamLimits

0x1be1,	// (0x0000fba9) wml_list_single_small_pane

0x9de1,	// (0x00017da9) wml_selection_box_pane_ParamLimits

0x9de1,	// (0x00017da9) wml_selection_box_pane

0x9df4,	// (0x00017dbc) wml_list_single_pane_t1

0x9e03,	// (0x00017dcb) wml_list_single_medium_pane_t1

0x9e12,	// (0x00017dda) wml_list_single_large_pane_t1

0x9e21,	// (0x00017de9) input_focus_pane_cp02_ParamLimits

0x9e21,	// (0x00017de9) input_focus_pane_cp02

0x9e34,	// (0x00017dfc) wml_selection_box_pane_g1

0x9e3d,	// (0x00017e05) wml_selection_box_pane_t1_ParamLimits

0x9e3d,	// (0x00017e05) wml_selection_box_pane_t1

0x98e4,	// (0x000178ac) bg_wml_button_pane_ParamLimits

0x98e4,	// (0x000178ac) bg_wml_button_pane

0x9e55,	// (0x00017e1d) wml_button_pane_g1

0x9e5d,	// (0x00017e25) wml_button_pane_t1

0x9e55,	// (0x00017e1d) wml_button_bg_pane_g1

0x9e6d,	// (0x00017e35) wml_button_bg_pane_g2

0x9e75,	// (0x00017e3d) wml_button_bg_pane_g3

0x9e7d,	// (0x00017e45) wml_button_bg_pane_g4

0x9e85,	// (0x00017e4d) wml_button_bg_pane_g5

0x9e8d,	// (0x00017e55) wml_button_bg_pane_g6

0x9e95,	// (0x00017e5d) wml_button_bg_pane_g7

0x9e9d,	// (0x00017e65) wml_button_bg_pane_g8

0x9ea5,	// (0x00017e6d) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0001d18c) wml_button_bg_pane_g

0x1bfa,	// (0x0000fbc2) bg_list_pane_cp02

0x9ead,	// (0x00017e75) mce_header_pane_ParamLimits

0x9ead,	// (0x00017e75) mce_header_pane

0x9ec3,	// (0x00017e8b) mce_icon_pane

0x9ec3,	// (0x00017e8b) mce_image_pane

0x9ecc,	// (0x00017e94) mce_text_pane_ParamLimits

0x9ecc,	// (0x00017e94) mce_text_pane

0x1c02,	// (0x0000fbca) scroll_pane_cp03

0x9dc5,	// (0x00017d8d) scroll_pane_cp04

0x9edf,	// (0x00017ea7) scroll_pane_cp05_ParamLimits

0x9edf,	// (0x00017ea7) scroll_pane_cp05

0x1c0c,	// (0x0000fbd4) mce_header_field_pane_ParamLimits

0x1c0c,	// (0x0000fbd4) mce_header_field_pane

0x1c23,	// (0x0000fbeb) mce_header_field_pane_2_ParamLimits

0x1c23,	// (0x0000fbeb) mce_header_field_pane_2

0x1c39,	// (0x0000fc01) mce_header_field_pane_3

0x1c41,	// (0x0000fc09) list_single_mce_message_pane_ParamLimits

0x1c41,	// (0x0000fc09) list_single_mce_message_pane

0x1c57,	// (0x0000fc1f) list_single_mce_smart_pane_ParamLimits

0x1c57,	// (0x0000fc1f) list_single_mce_smart_pane

0x9eeb,	// (0x00017eb3) input_focus_pane_cp03

0x9ef4,	// (0x00017ebc) list_header_data_pane

0x1c78,	// (0x0000fc40) mce_header_field_pane_t1

0x1c88,	// (0x0000fc50) list_single_mce_header_pane_ParamLimits

0x1c88,	// (0x0000fc50) list_single_mce_header_pane

0x9efc,	// (0x00017ec4) list_single_mce_header_pane_t1

0x9f0b,	// (0x00017ed3) list_single_mce_message_pane_g1

0x9f13,	// (0x00017edb) list_single_mce_message_pane_t1

0x1cc2,	// (0x0000fc8a) bg_cale_heading_pane_cp01_ParamLimits

0x1cc2,	// (0x0000fc8a) bg_cale_heading_pane_cp01

0x9f21,	// (0x00017ee9) bg_cale_pane_cp02_ParamLimits

0x9f21,	// (0x00017ee9) bg_cale_pane_cp02

0x1cfc,	// (0x0000fcc4) cale_month_corner_pane

0x1d1b,	// (0x0000fce3) cale_month_day_heading_pane_ParamLimits

0x1d1b,	// (0x0000fce3) cale_month_day_heading_pane

0x1d6d,	// (0x0000fd35) cale_month_pane_g1_ParamLimits

0x1d6d,	// (0x0000fd35) cale_month_pane_g1

0x1d9c,	// (0x0000fd64) cale_month_pane_g2_ParamLimits

0x1d9c,	// (0x0000fd64) cale_month_pane_g2

0x1dcc,	// (0x0000fd94) cale_month_pane_g3_ParamLimits

0x1dcc,	// (0x0000fd94) cale_month_pane_g3

0x1e08,	// (0x0000fdd0) cale_month_pane_g4_ParamLimits

0x1e08,	// (0x0000fdd0) cale_month_pane_g4

0x1e44,	// (0x0000fe0c) cale_month_pane_g5_ParamLimits

0x1e44,	// (0x0000fe0c) cale_month_pane_g5

0x1e8c,	// (0x0000fe54) cale_month_pane_g6_ParamLimits

0x1e8c,	// (0x0000fe54) cale_month_pane_g6

0x1ed8,	// (0x0000fea0) cale_month_pane_g7_ParamLimits

0x1ed8,	// (0x0000fea0) cale_month_pane_g7

0x1f28,	// (0x0000fef0) cale_month_pane_g8_ParamLimits

0x1f28,	// (0x0000fef0) cale_month_pane_g8

0x1f7c,	// (0x0000ff44) cale_month_pane_g9_ParamLimits

0x1f7c,	// (0x0000ff44) cale_month_pane_g9

0x1fce,	// (0x0000ff96) cale_month_pane_g10_ParamLimits

0x1fce,	// (0x0000ff96) cale_month_pane_g10

0x2020,	// (0x0000ffe8) cale_month_pane_g11_ParamLimits

0x2020,	// (0x0000ffe8) cale_month_pane_g11

0x2072,	// (0x0001003a) cale_month_pane_g12_ParamLimits

0x2072,	// (0x0001003a) cale_month_pane_g12

0x20c4,	// (0x0001008c) cale_month_pane_g13_ParamLimits

0x20c4,	// (0x0001008c) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0001d19f) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0001d19f) cale_month_pane_g

0x2116,	// (0x000100de) cale_month_week_pane

0x213a,	// (0x00010102) grid_cale_month_pane_ParamLimits

0x213a,	// (0x00010102) grid_cale_month_pane

0x2183,	// (0x0001014b) cale_month_day_heading_pane_t1

0x21c5,	// (0x0001018d) cale_month_day_heading_pane_t2

0x21fa,	// (0x000101c2) cale_month_day_heading_pane_t3

0x222f,	// (0x000101f7) cale_month_day_heading_pane_t4

0x226c,	// (0x00010234) cale_month_day_heading_pane_t5

0x22b1,	// (0x00010279) cale_month_day_heading_pane_t6

0x22f6,	// (0x000102be) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0001d1ba) cale_month_day_heading_pane_t

0x9c00,	// (0x00017bc8) bg_cale_side_pane_cp01

0x2343,	// (0x0001030b) cale_month_week_pane_t1

0x235c,	// (0x00010324) cale_month_week_pane_t2

0x2375,	// (0x0001033d) cale_month_week_pane_t3

0x238e,	// (0x00010356) cale_month_week_pane_t4

0x23a7,	// (0x0001036f) cale_month_week_pane_t5

0x23c0,	// (0x00010388) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0001d1c9) cale_month_week_pane_t

0x23d9,	// (0x000103a1) cell_cale_month_pane_ParamLimits

0x23d9,	// (0x000103a1) cell_cale_month_pane

0x9f60,	// (0x00017f28) cell_cale_month_pane_g1

0x2507,	// (0x000104cf) cell_cale_month_pane_t1_ParamLimits

0x2507,	// (0x000104cf) cell_cale_month_pane_t1

0x9c0e,	// (0x00017bd6) grid_highlight_pane_cp08

0x98fc,	// (0x000178c4) main_smil_g1

0x2533,	// (0x000104fb) smil_status_pane

0x9f6c,	// (0x00017f34) smil_text_pane

0x9b73,	// (0x00017b3b) bg_popup_call3_rect_pane_g8

0x9b7b,	// (0x00017b43) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x0001d1db) bg_popup_call3_rect_pane_g

0xba91,	// (0x00019a59) smil_status_volume_pane_g1

0x9f76,	// (0x00017f3e) smil_status_pane_t1

0xbac4,	// (0x00019a8c) volume_smil_pane

0x9f8d,	// (0x00017f55) list_smil_text_pane

0x2548,	// (0x00010510) scroll_pane_cp011

0x2553,	// (0x0001051b) smil_text_list_pane_t1_ParamLimits

0x2553,	// (0x0001051b) smil_text_list_pane_t1

0x9f97,	// (0x00017f5f) aid_volume_smil_ParamLimits

0x9f97,	// (0x00017f5f) aid_volume_smil

0x98fc,	// (0x000178c4) smil_volume_pane_g1

0x98fc,	// (0x000178c4) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x0001d1d6) smil_volume_pane_g

0x1078,	// (0x0000f040) listscroll_cale_day_pane

0x9fb9,	// (0x00017f81) bg_cale_pane

0x9fd1,	// (0x00017f99) list_cale_pane

0x9ff4,	// (0x00017fbc) scroll_pane_cp09

0x9b4b,	// (0x00017b13) cale_bg_pane_g1

0x9b3b,	// (0x00017b03) cale_bg_pane_g2

0x9b43,	// (0x00017b0b) cale_bg_pane_g3

0x9b53,	// (0x00017b1b) cale_bg_pane_g4

0x9b5b,	// (0x00017b23) cale_bg_pane_g5

0x9b63,	// (0x00017b2b) cale_bg_pane_g6

0x9b6b,	// (0x00017b33) cale_bg_pane_g7

0x9b73,	// (0x00017b3b) cale_bg_pane_g8

0x9b7b,	// (0x00017b43) cale_bg_pane_g9

0x0008,

0xf213,	// (0x0001d1db) cale_bg_pane_g

0x259f,	// (0x00010567) list_cale_time_pane_ParamLimits

0x259f,	// (0x00010567) list_cale_time_pane

0xa005,	// (0x00017fcd) list_cale_time_pane_g1_ParamLimits

0xa005,	// (0x00017fcd) list_cale_time_pane_g1

0xa011,	// (0x00017fd9) list_cale_time_pane_g2_ParamLimits

0xa011,	// (0x00017fd9) list_cale_time_pane_g2

0x25b5,	// (0x0001057d) list_cale_time_pane_g3_ParamLimits

0x25b5,	// (0x0001057d) list_cale_time_pane_g3

0x25c3,	// (0x0001058b) list_cale_time_pane_g4_ParamLimits

0x25c3,	// (0x0001058b) list_cale_time_pane_g4

0x25d1,	// (0x00010599) list_cale_time_pane_g5_ParamLimits

0x25d1,	// (0x00010599) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x0001d1ee) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x0001d1ee) list_cale_time_pane_g

0xa02b,	// (0x00017ff3) list_cale_time_pane_t1_ParamLimits

0xa02b,	// (0x00017ff3) list_cale_time_pane_t1

0xa053,	// (0x0001801b) list_cale_time_pane_t2_ParamLimits

0xa053,	// (0x0001801b) list_cale_time_pane_t2

0x285e,	// (0x00010826) aid_blid_cardinal_pane

0x289c,	// (0x00010864) compass_pane_t4

0xa07b,	// (0x00018043) list_cale_time_pane_t4_ParamLimits

0xa07b,	// (0x00018043) list_cale_time_pane_t4

0x28aa,	// (0x00010872) compass_pane_t5

0x28b8,	// (0x00010880) compass_pane_t6

0x28c6,	// (0x0001088e) compass_pane_t7

0xa573,	// (0x0001853b) navi_pane_cc_t1

0xa762,	// (0x0001872a) aid_phob_thumbnail_center_pane

0x2d34,	// (0x00010cfc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x0001d1fb) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x0001d1fb) list_cale_time_pane_t

0x92e0,	// (0x000172a8) bg_popup_window_pane_cp02_ParamLimits

0x92e0,	// (0x000172a8) bg_popup_window_pane_cp02

0xa0a3,	// (0x0001806b) heading_pane_cp01_ParamLimits

0xa0a3,	// (0x0001806b) heading_pane_cp01

0xa0af,	// (0x00018077) loc_req_pane_ParamLimits

0xa0af,	// (0x00018077) loc_req_pane

0xa0c1,	// (0x00018089) loc_type_pane_ParamLimits

0xa0c1,	// (0x00018089) loc_type_pane

0xa0d3,	// (0x0001809b) loc_type_pane_t1_ParamLimits

0xa0d3,	// (0x0001809b) loc_type_pane_t1

0xa0e5,	// (0x000180ad) loc_type_pane_t2_ParamLimits

0xa0e5,	// (0x000180ad) loc_type_pane_t2

0xa0f7,	// (0x000180bf) loc_type_pane_t3_ParamLimits

0xa0f7,	// (0x000180bf) loc_type_pane_t3

0x0002,

0xf23a,	// (0x0001d202) loc_type_pane_t_ParamLimits

0xf23a,	// (0x0001d202) loc_type_pane_t

0xa109,	// (0x000180d1) list_loc_req_pane

0xa113,	// (0x000180db) scroll_pane_cp012

0x25df,	// (0x000105a7) list_single_loc_request_popup_menu_pane_ParamLimits

0x25df,	// (0x000105a7) list_single_loc_request_popup_menu_pane

0xa11e,	// (0x000180e6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa11e,	// (0x000180e6) list_single_loc_request_popup_menu_pane_g1

0xa12a,	// (0x000180f2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa12a,	// (0x000180f2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x0001d209) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x0001d209) list_single_loc_request_popup_menu_pane_g

0xa136,	// (0x000180fe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa136,	// (0x000180fe) list_single_loc_request_popup_menu_pane_t1

0x98e4,	// (0x000178ac) bg_popup_window_pane_cp03_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_window_pane_cp03

0xa14c,	// (0x00018114) heading_loc_req_pane_ParamLimits

0xa14c,	// (0x00018114) heading_loc_req_pane

0x25ec,	// (0x000105b4) popup_dyc_status_message_window_g1_ParamLimits

0x25ec,	// (0x000105b4) popup_dyc_status_message_window_g1

0x2600,	// (0x000105c8) popup_dyc_status_message_window_t1_ParamLimits

0x2600,	// (0x000105c8) popup_dyc_status_message_window_t1

0x2615,	// (0x000105dd) popup_dyc_status_message_window_t2_ParamLimits

0x2615,	// (0x000105dd) popup_dyc_status_message_window_t2

0x262a,	// (0x000105f2) popup_dyc_status_message_window_t3_ParamLimits

0x262a,	// (0x000105f2) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x0001d20e) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x0001d20e) popup_dyc_status_message_window_t

0x9689,	// (0x00017651) bg_heading_pane_cp01

0xa158,	// (0x00018120) heading_loc_req_pane_g1

0xa160,	// (0x00018128) heading_loc_req_pane_g2

0xa168,	// (0x00018130) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x0001d215) heading_loc_req_pane_g

0xa170,	// (0x00018138) heading_loc_req_pane_t1

0xa18f,	// (0x00018157) bg_popup_sub_pane_cp01_ParamLimits

0xa18f,	// (0x00018157) bg_popup_sub_pane_cp01

0xa19d,	// (0x00018165) popup_cale_events_window_g1_ParamLimits

0xa19d,	// (0x00018165) popup_cale_events_window_g1

0xa1bd,	// (0x00018185) popup_cale_events_window_g2_ParamLimits

0xa1bd,	// (0x00018185) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x0001d237) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x0001d237) popup_cale_events_window_g

0xa1dd,	// (0x000181a5) popup_cale_events_window_t1_ParamLimits

0xa1dd,	// (0x000181a5) popup_cale_events_window_t1

0xa1ef,	// (0x000181b7) popup_cale_events_window_t2_ParamLimits

0xa1ef,	// (0x000181b7) popup_cale_events_window_t2

0xa22d,	// (0x000181f5) popup_cale_events_window_t3_ParamLimits

0xa22d,	// (0x000181f5) popup_cale_events_window_t3

0xa267,	// (0x0001822f) popup_cale_events_window_t4_ParamLimits

0xa267,	// (0x0001822f) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x0001d23c) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x0001d23c) popup_cale_events_window_t

0x2652,	// (0x0001061a) call_type_pane

0x2662,	// (0x0001062a) popup_call_status_window_g1

0x2676,	// (0x0001063e) popup_call_status_window_g2

0x268a,	// (0x00010652) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x0001d245) popup_call_status_window_g

0xa29d,	// (0x00018265) call_type_pane_g1

0xa2a6,	// (0x0001826e) call_type_pane_g2

0x0001,

0xf284,	// (0x0001d24c) call_type_pane_g

0x9689,	// (0x00017651) bg_popup_sub_pane_cp02

0xa2af,	// (0x00018277) listscroll_popup_wml_pane

0xa2b7,	// (0x0001827f) list_wml_pane

0xa2c1,	// (0x00018289) scroll_pane_cp013

0xa2cc,	// (0x00018294) list_single_graphic_popup_wml_pane_ParamLimits

0xa2cc,	// (0x00018294) list_single_graphic_popup_wml_pane

0x98fc,	// (0x000178c4) list_single_graphic_popup_wml_pane_g1

0xa2e0,	// (0x000182a8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x0001d251) list_single_graphic_popup_wml_pane_g

0xa2e8,	// (0x000182b0) list_single_graphic_popup_wml_pane_t1

0xa2fe,	// (0x000182c6) aid_call_pane

0x98dc,	// (0x000178a4) popup_clock_analogue_window_g1

0x98dc,	// (0x000178a4) popup_clock_analogue_window_g2

0xa306,	// (0x000182ce) popup_clock_analogue_window_g3

0xa306,	// (0x000182ce) popup_clock_analogue_window_g4

0x98fc,	// (0x000178c4) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x0001d256) popup_clock_analogue_window_g

0xa30e,	// (0x000182d6) popup_clock_analogue_window_t1

0xa31c,	// (0x000182e4) clock_digital_number_pane_ParamLimits

0xa31c,	// (0x000182e4) clock_digital_number_pane

0xa328,	// (0x000182f0) clock_digital_number_pane_cp02_ParamLimits

0xa328,	// (0x000182f0) clock_digital_number_pane_cp02

0xa334,	// (0x000182fc) clock_digital_number_pane_cp03_ParamLimits

0xa334,	// (0x000182fc) clock_digital_number_pane_cp03

0xa340,	// (0x00018308) clock_digital_number_pane_cp04_ParamLimits

0xa340,	// (0x00018308) clock_digital_number_pane_cp04

0xa34c,	// (0x00018314) clock_digital_separator_pane_ParamLimits

0xa34c,	// (0x00018314) clock_digital_separator_pane

0xa358,	// (0x00018320) popup_clock_digital_window_t1

0x98fc,	// (0x000178c4) clock_digital_number_pane_g1

0x98fc,	// (0x000178c4) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x0001d1d6) clock_digital_number_pane_g

0x98fc,	// (0x000178c4) clock_digital_separator_pane_g1

0x98fc,	// (0x000178c4) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x0001d1d6) clock_digital_separator_pane_g

0x9689,	// (0x00017651) bg_popup_window_pane_cp04

0xa375,	// (0x0001833d) heading_pane_cp03

0x9c52,	// (0x00017c1a) listscroll_popup_gms_pane

0x9689,	// (0x00017651) grid_large_graphic_popup_pane

0xa37d,	// (0x00018345) listscroll_popup_gms_pane_g1

0xa386,	// (0x0001834e) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x0001d261) listscroll_popup_gms_pane_g

0xa38f,	// (0x00018357) scroll_pane_cp014

0x9951,	// (0x00017919) cell_large_graphic_popup_pane_ParamLimits

0x9951,	// (0x00017919) cell_large_graphic_popup_pane

0x995f,	// (0x00017927) cell_large_graphic_popup_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_large_graphic_popup_pane_g1

0xa398,	// (0x00018360) cell_large_graphic_popup_pane_g2_ParamLimits

0xa398,	// (0x00018360) cell_large_graphic_popup_pane_g2

0xa3a6,	// (0x0001836e) cell_large_graphic_popup_pane_g3_ParamLimits

0xa3a6,	// (0x0001836e) cell_large_graphic_popup_pane_g3

0xa3b4,	// (0x0001837c) cell_large_graphic_popup_pane_g4_ParamLimits

0xa3b4,	// (0x0001837c) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x0001d266) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x0001d266) cell_large_graphic_popup_pane_g

0x9689,	// (0x00017651) grid_highlight_pane_cp010

0x98fc,	// (0x000178c4) bg_popup_call_pane_g1

0xa3c5,	// (0x0001838d) list_single_graphic_popup_conf_pane_ParamLimits

0xa3c5,	// (0x0001838d) list_single_graphic_popup_conf_pane

0xa3d8,	// (0x000183a0) list_highlight_pane_cp01

0xa3e1,	// (0x000183a9) list_single_graphic_popup_conf_pane_g1

0xa3e9,	// (0x000183b1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x0001d26f) list_single_graphic_popup_conf_pane_g

0xa3f1,	// (0x000183b9) list_single_graphic_popup_conf_pane_t1

0xa3ff,	// (0x000183c7) linegrid_cams_pane_g1

0x2699,	// (0x00010661) linegrid_cams_pane_g2

0x9b83,	// (0x00017b4b) linegrid_cams_pane_g3

0xa408,	// (0x000183d0) linegrid_cams_pane_g4

0x26a2,	// (0x0001066a) linegrid_cams_pane_g5

0x26ab,	// (0x00010673) linegrid_cams_pane_g6

0x9c41,	// (0x00017c09) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x0001d274) linegrid_cams_pane_g

0xa411,	// (0x000183d9) popup_clock_analogue_window

0xa411,	// (0x000183d9) popup_clock_digital_window

0x9689,	// (0x00017651) popup_phob_thumbnail_window

0x98fc,	// (0x000178c4) call_video_uplink_pane_g1

0xa41a,	// (0x000183e2) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x0001d283) call_video_uplink_pane_g

0xa422,	// (0x000183ea) video_uplink_pane

0xa42a,	// (0x000183f2) mce_image_pane_g1

0x26b6,	// (0x0001067e) mce_image_pane_g2

0x26be,	// (0x00010686) mce_image_pane_g3

0x26c6,	// (0x0001068e) mce_image_pane_g4

0x26d0,	// (0x00010698) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x0001d288) mce_image_pane_g

0xa434,	// (0x000183fc) control_top_pane_stacon_cp01_ParamLimits

0xa434,	// (0x000183fc) control_top_pane_stacon_cp01

0xa448,	// (0x00018410) uni_indicator_pane_stacon_cp01_ParamLimits

0xa448,	// (0x00018410) uni_indicator_pane_stacon_cp01

0xa459,	// (0x00018421) bg_popup_sub_pane_cp03

0x26d8,	// (0x000106a0) chi_dic_find_pane

0x26e0,	// (0x000106a8) listscroll_chi_dic_pane

0x26e9,	// (0x000106b1) main_pane_chidic_g1

0x26fc,	// (0x000106c4) chi_dic_find_pane_t1

0xa463,	// (0x0001842b) find_chidic_pane

0xa46c,	// (0x00018434) chi_dic_list_pane_ParamLimits

0xa46c,	// (0x00018434) chi_dic_list_pane

0xa47d,	// (0x00018445) scroll_pane_cp020

0x270a,	// (0x000106d2) find_chidic_pane_t1

0x9689,	// (0x00017651) input_focus_pane_cp06

0x2719,	// (0x000106e1) list_chi_dic_pane_ParamLimits

0x2719,	// (0x000106e1) list_chi_dic_pane

0x272b,	// (0x000106f3) list_chi_dic_pane_t1_ParamLimits

0x272b,	// (0x000106f3) list_chi_dic_pane_t1

0x9689,	// (0x00017651) list_highlight_pane_cp020

0xa485,	// (0x0001844d) bg_cale_heading_pane_g1

0x273e,	// (0x00010706) bg_cale_heading_pane_g2

0x2746,	// (0x0001070e) bg_cale_heading_pane_g3

0x274e,	// (0x00010716) bg_cale_heading_pane_g4

0x2758,	// (0x00010720) bg_cale_heading_pane_g5

0x2762,	// (0x0001072a) bg_cale_heading_pane_g6

0x276a,	// (0x00010732) bg_cale_heading_pane_g7

0x2772,	// (0x0001073a) bg_cale_heading_pane_g8

0x277c,	// (0x00010744) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x0001d293) bg_cale_heading_pane_g

0xa485,	// (0x0001844d) bg_cale_side_pane_g1

0x2786,	// (0x0001074e) bg_cale_side_pane_g2

0x278e,	// (0x00010756) bg_cale_side_pane_g3

0x2796,	// (0x0001075e) bg_cale_side_pane_g4

0x279e,	// (0x00010766) bg_cale_side_pane_g5

0x27a6,	// (0x0001076e) bg_cale_side_pane_g6

0x27ae,	// (0x00010776) bg_cale_side_pane_g7

0x27b6,	// (0x0001077e) bg_cale_side_pane_g8

0x27be,	// (0x00010786) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x0001d2a6) bg_cale_side_pane_g

0x27c6,	// (0x0001078e) popup_call_status_window_ParamLimits

0x27c6,	// (0x0001078e) popup_call_status_window

0xa48d,	// (0x00018455) stacon_top_pane

0xa495,	// (0x0001845d) status_pane_ParamLimits

0xa495,	// (0x0001845d) status_pane

0xa4aa,	// (0x00018472) status_small_pane

0xa4b2,	// (0x0001847a) control_pane

0x9689,	// (0x00017651) stacon_bottom_pane

0xa4ba,	// (0x00018482) list_single_mce_smart_pane_t1_ParamLimits

0xa4ba,	// (0x00018482) list_single_mce_smart_pane_t1

0xa4cd,	// (0x00018495) list_single_mce_smart_pane_t2_ParamLimits

0xa4cd,	// (0x00018495) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x0001d2b9) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x0001d2b9) list_single_mce_smart_pane_t

0x280d,	// (0x000107d5) compass_pane

0x2816,	// (0x000107de) main_location2_pane_t1

0x2828,	// (0x000107f0) main_location2_pane_t2

0x283a,	// (0x00010802) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x0001d2be) main_location2_pane_t

0xa4ec,	// (0x000184b4) compass_pane_g1_ParamLimits

0xa4ec,	// (0x000184b4) compass_pane_g1

0x287e,	// (0x00010846) compass_pane_t1

0x288d,	// (0x00010855) compass_pane_t2

0x0005,

0xf2ff,	// (0x0001d2c7) compass_pane_t

0x28d4,	// (0x0001089c) text_secondary_cp61

0xa56a,	// (0x00018532) navi_pane_cams_g5

0xa5e6,	// (0x000185ae) navi_pane_im_t1

0xa5f4,	// (0x000185bc) navi_pane_mp_g1_ParamLimits

0xa5f4,	// (0x000185bc) navi_pane_mp_g1

0xa608,	// (0x000185d0) navi_pane_mp_g2_ParamLimits

0xa608,	// (0x000185d0) navi_pane_mp_g2

0xa614,	// (0x000185dc) navi_pane_mp_g3_ParamLimits

0xa614,	// (0x000185dc) navi_pane_mp_g3

0x0002,

0xf313,	// (0x0001d2db) navi_pane_mp_g_ParamLimits

0xf313,	// (0x0001d2db) navi_pane_mp_g

0xa620,	// (0x000185e8) navi_pane_mp_t1

0xa62e,	// (0x000185f6) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x0001d2e2) navi_pane_mp_t

0xa699,	// (0x00018661) navi_pane_vt_g1

0xa620,	// (0x000185e8) navi_pane_vt_t1

0xa6a1,	// (0x00018669) navi_slider_pane

0x9c52,	// (0x00017c1a) zooming_pane

0xa6b1,	// (0x00018679) navi_slider_pane_g1

0xa6ba,	// (0x00018682) navi_slider_pane_g2

0x0006,

0xf321,	// (0x0001d2e9) navi_slider_pane_g

0xa6e7,	// (0x000186af) aid_levels_zoom

0xa6ef,	// (0x000186b7) zooming_pane_g1

0xa6f7,	// (0x000186bf) zooming_pane_g2

0xa6f7,	// (0x000186bf) zooming_pane_g3

0x0002,

0xf330,	// (0x0001d2f8) zooming_pane_g

0xa6ff,	// (0x000186c7) level_10_zoom

0xa708,	// (0x000186d0) level_11_zoom

0xa711,	// (0x000186d9) level_1_zoom

0xa71a,	// (0x000186e2) level_2_zoom

0xa723,	// (0x000186eb) level_3_zoom

0xa72c,	// (0x000186f4) level_4_zoom

0xa735,	// (0x000186fd) level_5_zoom

0xa73e,	// (0x00018706) level_6_zoom

0xa747,	// (0x0001870f) level_7_zoom

0xa750,	// (0x00018718) level_8_zoom

0xa759,	// (0x00018721) level_9_zoom

0xa76a,	// (0x00018732) popup_phob_thumbnail_window_g1

0xa772,	// (0x0001873a) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x0001d2ff) popup_phob_thumbnail_window_g

0x3338,	// (0x00011300) level_1_location

0x3340,	// (0x00011308) level_2_location

0x3348,	// (0x00011310) level_3_location

0x3350,	// (0x00011318) level_4_location

0x9c52,	// (0x00017c1a) level_5_location

0x2925,	// (0x000108ed) mce_icon_pane_g1

0x292f,	// (0x000108f7) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x0001d304) mce_icon_pane_g

0xa77a,	// (0x00018742) main_mup_pane_g1_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g1

0xa77a,	// (0x00018742) main_mup_pane_g2_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g2

0xa77a,	// (0x00018742) main_mup_pane_g3_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g3

0xa77a,	// (0x00018742) main_mup_pane_g4_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g4

0xa77a,	// (0x00018742) main_mup_pane_g5_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g5

0xa77a,	// (0x00018742) main_mup_pane_g6_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g6

0xa77a,	// (0x00018742) main_mup_pane_g7_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g7

0xa77a,	// (0x00018742) main_mup_pane_g8_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g8

0xa77a,	// (0x00018742) main_mup_pane_g9_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g9

0xa77a,	// (0x00018742) main_mup_pane_g10_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g10

0xa77a,	// (0x00018742) main_mup_pane_g11_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g11

0x995f,	// (0x00017927) main_mup_pane_g12_ParamLimits

0x995f,	// (0x00017927) main_mup_pane_g12

0xa77a,	// (0x00018742) main_mup_pane_g13_ParamLimits

0xa77a,	// (0x00018742) main_mup_pane_g13

0x000c,

0xf341,	// (0x0001d309) main_mup_pane_g_ParamLimits

0xf341,	// (0x0001d309) main_mup_pane_g

0xa788,	// (0x00018750) main_mup_pane_t1_ParamLimits

0xa788,	// (0x00018750) main_mup_pane_t1

0xa788,	// (0x00018750) main_mup_pane_t2_ParamLimits

0xa788,	// (0x00018750) main_mup_pane_t2

0xa788,	// (0x00018750) main_mup_pane_t3_ParamLimits

0xa788,	// (0x00018750) main_mup_pane_t3

0x99af,	// (0x00017977) main_mup_pane_t4_ParamLimits

0x99af,	// (0x00017977) main_mup_pane_t4

0x99af,	// (0x00017977) main_mup_pane_t5_ParamLimits

0x99af,	// (0x00017977) main_mup_pane_t5

0x99c3,	// (0x0001798b) main_mup_pane_t6_ParamLimits

0x99c3,	// (0x0001798b) main_mup_pane_t6

0x0005,

0xf35c,	// (0x0001d324) main_mup_pane_t_ParamLimits

0xf35c,	// (0x0001d324) main_mup_pane_t

0x9951,	// (0x00017919) mup_progress_pane_ParamLimits

0x9951,	// (0x00017919) mup_progress_pane

0xa79c,	// (0x00018764) mup_visualizer_pane_ParamLimits

0xa79c,	// (0x00018764) mup_visualizer_pane

0xa79c,	// (0x00018764) mup_volume_pane_ParamLimits

0xa79c,	// (0x00018764) mup_volume_pane

0x996d,	// (0x00017935) mup_visualizer_pane_g1_ParamLimits

0x996d,	// (0x00017935) mup_visualizer_pane_g1

0xa7aa,	// (0x00018772) mup_visualizer_pane_g2_ParamLimits

0xa7aa,	// (0x00018772) mup_visualizer_pane_g2

0x995f,	// (0x00017927) mup_visualizer_pane_g3_ParamLimits

0x995f,	// (0x00017927) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x0001d331) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x0001d331) mup_visualizer_pane_g

0x99a5,	// (0x0001796d) mup_volume_pane_g1

0x99a5,	// (0x0001796d) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0001d054) mup_volume_pane_g

0x99a5,	// (0x0001796d) mup_progress_pane_g1

0x99a5,	// (0x0001796d) mup_progress_pane_g2

0x99a5,	// (0x0001796d) mup_progress_pane_g3

0x0002,

0xf370,	// (0x0001d338) mup_progress_pane_g

0x9689,	// (0x00017651) bg_popup_window_pane_cp05

0xa7b8,	// (0x00018780) heading_pane_cp02_ParamLimits

0xa7b8,	// (0x00018780) heading_pane_cp02

0xa7d2,	// (0x0001879a) list_popup_blid_pane

0xa7da,	// (0x000187a2) list_blid_sat_info_pane_ParamLimits

0xa7da,	// (0x000187a2) list_blid_sat_info_pane

0xa7ed,	// (0x000187b5) list_blid_sat_info_pane_g1

0xa7f5,	// (0x000187bd) list_blid_sat_info_pane_t1

0x2a2f,	// (0x000109f7) mup_equalizer_pane_ParamLimits

0x2a2f,	// (0x000109f7) mup_equalizer_pane

0x2a48,	// (0x00010a10) mup_equalizer_pane_cp1_ParamLimits

0x2a48,	// (0x00010a10) mup_equalizer_pane_cp1

0x2a65,	// (0x00010a2d) mup_equalizer_pane_cp2_ParamLimits

0x2a65,	// (0x00010a2d) mup_equalizer_pane_cp2

0x2a82,	// (0x00010a4a) mup_equalizer_pane_cp3_ParamLimits

0x2a82,	// (0x00010a4a) mup_equalizer_pane_cp3

0x2aa3,	// (0x00010a6b) mup_equalizer_pane_cp4_ParamLimits

0x2aa3,	// (0x00010a6b) mup_equalizer_pane_cp4

0x2ac4,	// (0x00010a8c) mup_equalizer_pane_cp5

0x2ad8,	// (0x00010aa0) mup_equalizer_pane_cp6

0x2aec,	// (0x00010ab4) mup_equalizer_pane_cp7

0xb8d4,	// (0x0001989c) bg_popup_call_poc_act_pane_g9

0xb8dc,	// (0x000198a4) bg_popup_call_poc_act_pane_g10

0xb8e4,	// (0x000198ac) bg_popup_call_poc_act_pane_g11

0x000a,

0x98e4,	// (0x000178ac) mup_scale_pane

0x98fc,	// (0x000178c4) mup_scale_pane_g1

0xa803,	// (0x000187cb) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x0001d354) mup_scale_pane_g

0xa827,	// (0x000187ef) msg_data_pane

0xa82f,	// (0x000187f7) scroll_pane_cp017

0x2b12,	// (0x00010ada) bg_list_pane_cp04_ParamLimits

0x2b12,	// (0x00010ada) bg_list_pane_cp04

0xa837,	// (0x000187ff) msg_data_pane_g1

0x2b36,	// (0x00010afe) msg_data_pane_g2

0x2b3e,	// (0x00010b06) msg_data_pane_g3

0x2b46,	// (0x00010b0e) msg_data_pane_g4

0x2b4e,	// (0x00010b16) msg_data_pane_g5

0x2b56,	// (0x00010b1e) msg_data_pane_g6

0x2b5e,	// (0x00010b26) msg_data_pane_g7

0x0006,

0xf39b,	// (0x0001d363) msg_data_pane_g

0x2b66,	// (0x00010b2e) msg_text_pane_ParamLimits

0x2b66,	// (0x00010b2e) msg_text_pane

0x2b9b,	// (0x00010b63) qrid_highlight_pane_cp011_ParamLimits

0x2b9b,	// (0x00010b63) qrid_highlight_pane_cp011

0x9689,	// (0x00017651) msg_body_pane

0x98e4,	// (0x000178ac) msg_header_pane

0xa853,	// (0x0001881b) input_focus_pane_cp07

0x2bbf,	// (0x00010b87) msg_header_pane_t1_ParamLimits

0x2bbf,	// (0x00010b87) msg_header_pane_t1

0x2bdb,	// (0x00010ba3) msg_header_pane_t2_ParamLimits

0x2bdb,	// (0x00010ba3) msg_header_pane_t2

0x0001,

0xf3af,	// (0x0001d377) msg_header_pane_t_ParamLimits

0xf3af,	// (0x0001d377) msg_header_pane_t

0xa874,	// (0x0001883c) msg_body_pane_g1

0x2bfb,	// (0x00010bc3) msg_body_pane_t1_ParamLimits

0x2bfb,	// (0x00010bc3) msg_body_pane_t1

0x2c2c,	// (0x00010bf4) msg_body_pane_t2_ParamLimits

0x2c2c,	// (0x00010bf4) msg_body_pane_t2

0x2c3e,	// (0x00010c06) msg_body_pane_t3_ParamLimits

0x2c3e,	// (0x00010c06) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x0001d37c) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x0001d37c) msg_body_pane_t

0x2c8a,	// (0x00010c52) main_viewer_pane_g1_ParamLimits

0x2c8a,	// (0x00010c52) main_viewer_pane_g1

0x2c98,	// (0x00010c60) main_viewer_pane_g2_ParamLimits

0x2c98,	// (0x00010c60) main_viewer_pane_g2

0x2ca6,	// (0x00010c6e) main_viewer_pane_g3_ParamLimits

0x2ca6,	// (0x00010c6e) main_viewer_pane_g3

0x2cb5,	// (0x00010c7d) main_viewer_pane_g4_ParamLimits

0x2cb5,	// (0x00010c7d) main_viewer_pane_g4

0xa894,	// (0x0001885c) main_viewer_pane_g5_ParamLimits

0xa894,	// (0x0001885c) main_viewer_pane_g5

0xa894,	// (0x0001885c) main_viewer_pane_g7_ParamLimits

0xa894,	// (0x0001885c) main_viewer_pane_g7

0xa8a6,	// (0x0001886e) main_viewer_pane_g8_ParamLimits

0xa8a6,	// (0x0001886e) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x0001d38c) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x0001d38c) main_viewer_pane_g

0xa8be,	// (0x00018886) viewer_content_pane_ParamLimits

0xa8be,	// (0x00018886) viewer_content_pane

0x2cf1,	// (0x00010cb9) main_postcard_pane_g1_ParamLimits

0x2cf1,	// (0x00010cb9) main_postcard_pane_g1

0x2d07,	// (0x00010ccf) main_postcard_pane_g2_ParamLimits

0x2d07,	// (0x00010ccf) main_postcard_pane_g2

0x2d1d,	// (0x00010ce5) main_postcard_pane_g3_ParamLimits

0x2d1d,	// (0x00010ce5) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x0001d39d) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x0001d39d) main_postcard_pane_g

0x2d34,	// (0x00010cfc) main_postcard_pane_g4

0xbaa4,	// (0x00019a6c) smil_status_volume_pane_g2

0x2d77,	// (0x00010d3f) postcard_pane_ParamLimits

0x2d77,	// (0x00010d3f) postcard_pane

0xa8cc,	// (0x00018894) postcard_pane_g1_ParamLimits

0xa8cc,	// (0x00018894) postcard_pane_g1

0x2db9,	// (0x00010d81) postcard_pane_g2_ParamLimits

0x2db9,	// (0x00010d81) postcard_pane_g2

0x2dc5,	// (0x00010d8d) postcard_pane_g3_ParamLimits

0x2dc5,	// (0x00010d8d) postcard_pane_g3

0xa8da,	// (0x000188a2) postcard_pane_g4_ParamLimits

0xa8da,	// (0x000188a2) postcard_pane_g4

0x2dd1,	// (0x00010d99) postcard_pane_g5_ParamLimits

0x2dd1,	// (0x00010d99) postcard_pane_g5

0x2de6,	// (0x00010dae) postcard_pane_g6_ParamLimits

0x2de6,	// (0x00010dae) postcard_pane_g6

0xa8cc,	// (0x00018894) postcard_pane_g7_ParamLimits

0xa8cc,	// (0x00018894) postcard_pane_g7

0x0006,

0xf3e2,	// (0x0001d3aa) postcard_pane_g_ParamLimits

0xf3e2,	// (0x0001d3aa) postcard_pane_g

0x2dfa,	// (0x00010dc2) main_mp2_pane_g1_ParamLimits

0x2dfa,	// (0x00010dc2) main_mp2_pane_g1

0x2e06,	// (0x00010dce) main_mp2_pane_g2_ParamLimits

0x2e06,	// (0x00010dce) main_mp2_pane_g2

0x2e12,	// (0x00010dda) main_mp2_pane_g3_ParamLimits

0x2e12,	// (0x00010dda) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x0001d3b9) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x0001d3b9) main_mp2_pane_g

0x2e1e,	// (0x00010de6) main_mp2_pane_t1_ParamLimits

0x2e1e,	// (0x00010de6) main_mp2_pane_t1

0x2e33,	// (0x00010dfb) main_mp2_pane_t2_ParamLimits

0x2e33,	// (0x00010dfb) main_mp2_pane_t2

0x2e45,	// (0x00010e0d) main_mp2_pane_t3_ParamLimits

0x2e45,	// (0x00010e0d) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x0001d3c0) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x0001d3c0) main_mp2_pane_t

0x9268,	// (0x00017230) pec_content_pane_ParamLimits

0x9268,	// (0x00017230) pec_content_pane

0x91f9,	// (0x000171c1) scroll_pane_cp015

0xa79c,	// (0x00018764) pec_attribute_pane_ParamLimits

0xa79c,	// (0x00018764) pec_attribute_pane

0x995f,	// (0x00017927) pec_content_pane_g1_ParamLimits

0x995f,	// (0x00017927) pec_content_pane_g1

0xa8e8,	// (0x000188b0) pec_content_pane_t1_ParamLimits

0xa8e8,	// (0x000188b0) pec_content_pane_t1

0xa8fc,	// (0x000188c4) pec_content_pane_t2_ParamLimits

0xa8fc,	// (0x000188c4) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x0001d3c7) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x0001d3c7) pec_content_pane_t

0x9951,	// (0x00017919) list_single_graphic_pane_cp01_ParamLimits

0x9951,	// (0x00017919) list_single_graphic_pane_cp01

0x98e4,	// (0x000178ac) bg_popup_sub_pane_cp04

0xa910,	// (0x000188d8) popup_mup_playback_window_g1

0xa91c,	// (0x000188e4) popup_mup_playback_window_t1

0xa931,	// (0x000188f9) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x0001d3cc) popup_mup_playback_window_t

0xa968,	// (0x00018930) main_image_pane_g1_ParamLimits

0xa968,	// (0x00018930) main_image_pane_g1

0xa9ab,	// (0x00018973) scroll_pane_cp018_ParamLimits

0xa9ab,	// (0x00018973) scroll_pane_cp018

0xa9c3,	// (0x0001898b) scroll_pane_cp016_ParamLimits

0xa9c3,	// (0x0001898b) scroll_pane_cp016

0x2f0f,	// (0x00010ed7) smil2_image_pane_ParamLimits

0x2f0f,	// (0x00010ed7) smil2_image_pane

0x2f3f,	// (0x00010f07) smil2_root_pane_ParamLimits

0x2f3f,	// (0x00010f07) smil2_root_pane

0x2f77,	// (0x00010f3f) smil2_text_pane_ParamLimits

0x2f77,	// (0x00010f3f) smil2_text_pane

0x91f9,	// (0x000171c1) bg_list_pane_cp06

0x91f9,	// (0x000171c1) grid_radio_pane

0x9689,	// (0x00017651) bg_popup_window_pane_cp06

0xa17f,	// (0x00018147) main_fmradio_pane_t1

0xa375,	// (0x0001833d) heading_pane_cp04

0xa17f,	// (0x00018147) main_fmradio_pane_t2

0xb92c,	// (0x000198f4) popup_cale_lunar_info_window_g1

0xa17f,	// (0x00018147) main_fmradio_pane_t3

0xb934,	// (0x000198fc) popup_cale_lunar_info_window_g2

0xa17f,	// (0x00018147) main_fmradio_pane_t4

0x0001,

0xa17f,	// (0x00018147) main_fmradio_pane_t5

0x0004,

0xf4d4,	// (0x0001d49c) popup_cale_lunar_info_window_g

0xf264,	// (0x0001d22c) main_fmradio_pane_t

0x91f9,	// (0x000171c1) wait_bar_pane_cp03

0x9951,	// (0x00017919) cell_fmradio_pane_ParamLimits

0x9951,	// (0x00017919) cell_fmradio_pane

0x995f,	// (0x00017927) cell_fmradio_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_fmradio_pane_g1

0x91f9,	// (0x000171c1) grid_highlight_pane_cp011

0xa9f7,	// (0x000189bf) poc_content_pane_ParamLimits

0xa9f7,	// (0x000189bf) poc_content_pane

0xaa09,	// (0x000189d1) scroll_pane_cp019

0x2ff7,	// (0x00010fbf) popup_call_poc_act_window_ParamLimits

0x2ff7,	// (0x00010fbf) popup_call_poc_act_window

0x301b,	// (0x00010fe3) popup_call_poc_inact_window_ParamLimits

0x301b,	// (0x00010fe3) popup_call_poc_inact_window

0xf49d,	// (0x0001d465) bg_popup_call_poc_act_pane_g

0xb8ec,	// (0x000198b4) bg_popup_call_poc_inact_pane_g1

0xb8f4,	// (0x000198bc) bg_popup_call_poc_inact_pane_g2

0xaa11,	// (0x000189d9) popup_call_poc_act_window_g2

0xb8fc,	// (0x000198c4) bg_popup_call_poc_inact_pane_g3

0xb87c,	// (0x00019844) bg_popup_call_poc_inact_pane_g4

0xb904,	// (0x000198cc) bg_popup_call_poc_inact_pane_g5

0xaa19,	// (0x000189e1) popup_call_poc_act_window_t1_ParamLimits

0xaa19,	// (0x000189e1) popup_call_poc_act_window_t1

0xaa41,	// (0x00018a09) popup_call_poc_act_window_t2_ParamLimits

0xaa41,	// (0x00018a09) popup_call_poc_act_window_t2

0xaa69,	// (0x00018a31) popup_call_poc_act_window_t3_ParamLimits

0xaa69,	// (0x00018a31) popup_call_poc_act_window_t3

0xaa91,	// (0x00018a59) popup_call_poc_act_window_t4_ParamLimits

0xaa91,	// (0x00018a59) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x0001d3e1) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x0001d3e1) popup_call_poc_act_window_t

0xb90c,	// (0x000198d4) bg_popup_call_poc_inact_pane_g6

0xb914,	// (0x000198dc) bg_popup_call_poc_inact_pane_g7

0xb91c,	// (0x000198e4) bg_popup_call_poc_inact_pane_g8

0xaaa3,	// (0x00018a6b) popup_call_poc_inact_window_g2

0xb924,	// (0x000198ec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b4,	// (0x0001d47c) bg_popup_call_poc_inact_pane_g

0xaaab,	// (0x00018a73) popup_call_poc_inact_window_t1_ParamLimits

0xaaab,	// (0x00018a73) popup_call_poc_inact_window_t1

0xaac0,	// (0x00018a88) popup_call_poc_inact_window_t2_ParamLimits

0xaac0,	// (0x00018a88) popup_call_poc_inact_window_t2

0xaad5,	// (0x00018a9d) popup_call_poc_inact_window_t3_ParamLimits

0xaad5,	// (0x00018a9d) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x0001d3ea) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x0001d3ea) popup_call_poc_inact_window_t

0xba1c,	// (0x000199e4) context_pane_ParamLimits

0x3802,	// (0x000117ca) signal_pane_ParamLimits

0x9c52,	// (0x00017c1a) main_call2_pane

0xb9f5,	// (0x000199bd) popup_phob_thumbnail2_window_ParamLimits

0xb9f5,	// (0x000199bd) popup_phob_thumbnail2_window

0xa87c,	// (0x00018844) aid_hotspot_pointer_arrow_pane

0xa884,	// (0x0001884c) aid_hotspot_pointer_hand_pane

0x3302,	// (0x000112ca) phob_pre_status_pane_g5

0x9268,	// (0x00017230) cams_zoom_pane_ParamLimits

0x9268,	// (0x00017230) image_vga_pane_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g1_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g2_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g3_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g4_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g5_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g6_ParamLimits

0x995f,	// (0x00017927) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0001d125) main_camera_pane_g_ParamLimits

0x99af,	// (0x00017977) main_camera_pane_t1_ParamLimits

0x99af,	// (0x00017977) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0001d136) main_camera_pane_t_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_preview_window_pane_cp01_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_preview_window_pane_cp01

0xaaea,	// (0x00018ab2) popup_phob_thumbnail2_window_g1_ParamLimits

0xaaea,	// (0x00018ab2) popup_phob_thumbnail2_window_g1

0x9689,	// (0x00017651) call2_cli_visual_pane

0x304f,	// (0x00011017) popup_call2_audio_conf_window_ParamLimits

0x304f,	// (0x00011017) popup_call2_audio_conf_window

0x306f,	// (0x00011037) popup_call2_audio_first_window_ParamLimits

0x306f,	// (0x00011037) popup_call2_audio_first_window

0x3105,	// (0x000110cd) popup_call2_audio_in_window_ParamLimits

0x3105,	// (0x000110cd) popup_call2_audio_in_window

0x314d,	// (0x00011115) popup_call2_audio_out_window_ParamLimits

0x314d,	// (0x00011115) popup_call2_audio_out_window

0x31b7,	// (0x0001117f) popup_call2_audio_second_window_ParamLimits

0x31b7,	// (0x0001117f) popup_call2_audio_second_window

0x321d,	// (0x000111e5) popup_call2_audio_wait_window_ParamLimits

0x321d,	// (0x000111e5) popup_call2_audio_wait_window

0x9689,	// (0x00017651) bg_popup_call2_act_pane_cp03

0x98c6,	// (0x0001788e) list_conf_pane_cp

0xaaf6,	// (0x00018abe) popup_call2_audio_conf_window_t1

0xab04,	// (0x00018acc) list_single_graphic_popup_conf2_pane_ParamLimits

0xab04,	// (0x00018acc) list_single_graphic_popup_conf2_pane

0xa3d8,	// (0x000183a0) list_highlight_pane_cp04

0xab17,	// (0x00018adf) list_single_graphic_popup_conf2_pane_g1

0xa3e9,	// (0x000183b1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x0001d3f1) list_single_graphic_popup_conf2_pane_g

0xab21,	// (0x00018ae9) list_single_graphic_popup_conf2_pane_t1

0xab2f,	// (0x00018af7) bg_popup_call2_act_pane_cp01_ParamLimits

0xab2f,	// (0x00018af7) bg_popup_call2_act_pane_cp01

0xabb9,	// (0x00018b81) call_type_pane_cp05_ParamLimits

0xabb9,	// (0x00018b81) call_type_pane_cp05

0xac0d,	// (0x00018bd5) popup_call2_audio_second_window_g1_ParamLimits

0xac0d,	// (0x00018bd5) popup_call2_audio_second_window_g1

0xac61,	// (0x00018c29) popup_call2_audio_second_window_g2_ParamLimits

0xac61,	// (0x00018c29) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x0001d3f6) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x0001d3f6) popup_call2_audio_second_window_g

0xacc6,	// (0x00018c8e) popup_call2_audio_second_window_t1_ParamLimits

0xacc6,	// (0x00018c8e) popup_call2_audio_second_window_t1

0xad81,	// (0x00018d49) popup_call2_audio_second_window_t2_ParamLimits

0xad81,	// (0x00018d49) popup_call2_audio_second_window_t2

0xadd4,	// (0x00018d9c) popup_call2_audio_second_window_t3_ParamLimits

0xadd4,	// (0x00018d9c) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x0001d3fd) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x0001d3fd) popup_call2_audio_second_window_t

0x9689,	// (0x00017651) bg_popup_call2_in_pane_cp02

0x9693,	// (0x0001765b) call_type_pane_cp04

0x3257,	// (0x0001121f) popup_call2_audio_wait_window_g1

0x325f,	// (0x00011227) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x0001d406) popup_call2_audio_wait_window_g

0x96ab,	// (0x00017673) popup_call2_audio_wait_window_t3

0xaec7,	// (0x00018e8f) bg_popup_call2_act_pane_ParamLimits

0xaec7,	// (0x00018e8f) bg_popup_call2_act_pane

0xaf87,	// (0x00018f4f) call_type_pane_cp03_ParamLimits

0xaf87,	// (0x00018f4f) call_type_pane_cp03

0xafeb,	// (0x00018fb3) popup_call2_audio_first_window_g1_ParamLimits

0xafeb,	// (0x00018fb3) popup_call2_audio_first_window_g1

0xb05b,	// (0x00019023) popup_call2_audio_first_window_g2_ParamLimits

0xb05b,	// (0x00019023) popup_call2_audio_first_window_g2

0xb0bf,	// (0x00019087) popup_call2_audio_first_window_g3_ParamLimits

0xb0bf,	// (0x00019087) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x0001d40b) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x0001d40b) popup_call2_audio_first_window_g

0xb147,	// (0x0001910f) popup_call2_audio_first_window_t1_ParamLimits

0xb147,	// (0x0001910f) popup_call2_audio_first_window_t1

0xb24a,	// (0x00019212) popup_call2_audio_first_window_t4_ParamLimits

0xb24a,	// (0x00019212) popup_call2_audio_first_window_t4

0xb32d,	// (0x000192f5) popup_call2_audio_first_window_t5_ParamLimits

0xb32d,	// (0x000192f5) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x0001d416) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x0001d416) popup_call2_audio_first_window_t

0x98dc,	// (0x000178a4) bg_popup_call2_act_pane_g1

0xb93c,	// (0x00019904) popup_cale_lunar_info_window_t1

0xb94a,	// (0x00019912) popup_cale_lunar_info_window_t2

0xb958,	// (0x00019920) popup_cale_lunar_info_window_t3

0x9689,	// (0x00017651) bg_popup_call2_bubble_pane

0xb42e,	// (0x000193f6) bg_popup_call2_in_pane_cp01_ParamLimits

0xb42e,	// (0x000193f6) bg_popup_call2_in_pane_cp01

0x9365,	// (0x0001732d) call_type_pane_cp02

0x3267,	// (0x0001122f) popup_call2_audio_out_window_g1_ParamLimits

0x3267,	// (0x0001122f) popup_call2_audio_out_window_g1

0xb476,	// (0x0001943e) popup_call2_audio_out_window_g2_ParamLimits

0xb476,	// (0x0001943e) popup_call2_audio_out_window_g2

0x3293,	// (0x0001125b) popup_call2_audio_out_window_g3_ParamLimits

0x3293,	// (0x0001125b) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x0001d41f) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x0001d41f) popup_call2_audio_out_window_g

0xb4ad,	// (0x00019475) popup_call2_audio_out_window_t1_ParamLimits

0xb4ad,	// (0x00019475) popup_call2_audio_out_window_t1

0xb50c,	// (0x000194d4) popup_call2_audio_out_window_t2_ParamLimits

0xb50c,	// (0x000194d4) popup_call2_audio_out_window_t2

0xb560,	// (0x00019528) popup_call2_audio_out_window_t3_ParamLimits

0xb560,	// (0x00019528) popup_call2_audio_out_window_t3

0xb576,	// (0x0001953e) popup_call2_audio_out_window_t4_ParamLimits

0xb576,	// (0x0001953e) popup_call2_audio_out_window_t4

0xb58c,	// (0x00019554) popup_call2_audio_out_window_t5_ParamLimits

0xb58c,	// (0x00019554) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x0001d428) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x0001d428) popup_call2_audio_out_window_t

0xb5f0,	// (0x000195b8) bg_popup_call2_in_pane_ParamLimits

0xb5f0,	// (0x000195b8) bg_popup_call2_in_pane

0xb64c,	// (0x00019614) popup_call2_audio_in_window_g1_ParamLimits

0xb64c,	// (0x00019614) popup_call2_audio_in_window_g1

0xb684,	// (0x0001964c) popup_call2_audio_in_window_g2_ParamLimits

0xb684,	// (0x0001964c) popup_call2_audio_in_window_g2

0xb6bc,	// (0x00019684) popup_call2_audio_in_window_g3_ParamLimits

0xb6bc,	// (0x00019684) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x0001d435) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x0001d435) popup_call2_audio_in_window_g

0xb714,	// (0x000196dc) popup_call2_audio_in_window_t1_ParamLimits

0xb714,	// (0x000196dc) popup_call2_audio_in_window_t1

0xb794,	// (0x0001975c) popup_call2_audio_in_window_t2_ParamLimits

0xb794,	// (0x0001975c) popup_call2_audio_in_window_t2

0xb814,	// (0x000197dc) popup_call2_audio_in_window_t3_ParamLimits

0xb814,	// (0x000197dc) popup_call2_audio_in_window_t3

0xb82e,	// (0x000197f6) popup_call2_audio_in_window_t4_ParamLimits

0xb82e,	// (0x000197f6) popup_call2_audio_in_window_t4

0xb840,	// (0x00019808) popup_call2_audio_in_window_t5_ParamLimits

0xb840,	// (0x00019808) popup_call2_audio_in_window_t5

0xb852,	// (0x0001981a) popup_call2_audio_in_window_t6_ParamLimits

0xb852,	// (0x0001981a) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x0001d43e) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x0001d43e) popup_call2_audio_in_window_t

0x98dc,	// (0x000178a4) bg_popup_call2_in_pane_g1

0xb966,	// (0x0001992e) popup_cale_lunar_info_window_t4

0x0003,

0xf4d9,	// (0x0001d4a1) popup_cale_lunar_info_window_t

0x98e4,	// (0x000178ac) bg_popup_call2_rect_pane_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_call2_rect_pane

0x9689,	// (0x00017651) call2_cli_visual_graphic_pane

0x9689,	// (0x00017651) call2_cli_visual_text_pane

0xbab7,	// (0x00019a7f) smil_status_volume_pane_g3

0x0002,

0x98fc,	// (0x000178c4) call2_cli_visual_graphic_pane_g1

0x98fc,	// (0x000178c4) call2_cli_visual_graphic_pane_g2

0x98fc,	// (0x000178c4) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x0001d44b) call2_cli_visual_graphic_pane_g

0x9b4b,	// (0x00017b13) bg_popup_call2_rect_pane_g1

0x9b3b,	// (0x00017b03) bg_popup_call2_rect_pane_g2

0x9b43,	// (0x00017b0b) bg_popup_call2_rect_pane_g3

0x9b53,	// (0x00017b1b) bg_popup_call2_rect_pane_g4

0x9b5b,	// (0x00017b23) bg_popup_call2_rect_pane_g5

0x9b63,	// (0x00017b2b) bg_popup_call2_rect_pane_g6

0x9b6b,	// (0x00017b33) bg_popup_call2_rect_pane_g7

0x9b73,	// (0x00017b3b) bg_popup_call2_rect_pane_g8

0x9b7b,	// (0x00017b43) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x0001d1db) bg_popup_call2_rect_pane_g

0xb864,	// (0x0001982c) bg_popup_call2_bubble_pane_g1

0xb86c,	// (0x00019834) bg_popup_call2_bubble_pane_g2

0xb874,	// (0x0001983c) bg_popup_call2_bubble_pane_g3

0xb87c,	// (0x00019844) bg_popup_call2_bubble_pane_g4

0xb884,	// (0x0001984c) bg_popup_call2_bubble_pane_g5

0xb88c,	// (0x00019854) bg_popup_call2_bubble_pane_g6

0xb894,	// (0x0001985c) bg_popup_call2_bubble_pane_g7

0xb89c,	// (0x00019864) bg_popup_call2_bubble_pane_g8

0xb8a4,	// (0x0001986c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x0001d452) bg_popup_call2_bubble_pane_g

0x108a,	// (0x0000f052) aid_cale_week_size_cell_pane

0x163a,	// (0x0000f602) aid_cams_cif_uncrop_pane_ParamLimits

0x163a,	// (0x0000f602) aid_cams_cif_uncrop_pane

0x9268,	// (0x00017230) aid_cams_size_cell_ParamLimits

0x9268,	// (0x00017230) aid_cams_size_cell

0x9268,	// (0x00017230) grid_cams_pane_ParamLimits

0x9268,	// (0x00017230) linegrid_cams_pane_ParamLimits

0x1858,	// (0x0000f820) call_video_pane_t1

0x1876,	// (0x0000f83e) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0001d182) call_video_pane_t

0x1c9c,	// (0x0000fc64) aid_cale_month_size_cell_pane_ParamLimits

0x1c9c,	// (0x0000fc64) aid_cale_month_size_cell_pane

0xf51d,	// (0x0001d4e5) smil_status_volume_pane_g

0xbac4,	// (0x00019a8c) volume_smil_pane_ParamLimits

0x920b,	// (0x000171d3) aid_popup2_width_pane

0x0fef,	// (0x0000efb7) cell_qdial_pane_g4_ParamLimits

0x0fef,	// (0x0000efb7) cell_qdial_pane_g4

0x285e,	// (0x00010826) aid_blid_cardinal_pane_ParamLimits

0x286a,	// (0x00010832) aid_blid_destination_pane_ParamLimits

0x286a,	// (0x00010832) aid_blid_destination_pane

0x98e4,	// (0x000178ac) bg_popup_call_poc_act_pane_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_call_poc_act_pane

0x98e4,	// (0x000178ac) bg_popup_call_poc_inact_pane_ParamLimits

0x98e4,	// (0x000178ac) bg_popup_call_poc_inact_pane

0xb8ac,	// (0x00019874) bg_popup_call_poc_act_pane_g1

0xb8b4,	// (0x0001987c) bg_popup_call_poc_act_pane_g2

0xb8bc,	// (0x00019884) bg_popup_call_poc_act_pane_g3

0xb87c,	// (0x00019844) bg_popup_call_poc_act_pane_g4

0xb884,	// (0x0001984c) bg_popup_call_poc_act_pane_g5

0xb8c4,	// (0x0001988c) bg_popup_call_poc_act_pane_g6

0xb894,	// (0x0001985c) bg_popup_call_poc_act_pane_g7

0xb8cc,	// (0x00019894) bg_popup_call_poc_act_pane_g8

0x9689,	// (0x00017651) main_usb_pane

0xb9d0,	// (0x00019998) popup_cale_lunar_info_window

0x1b42,	// (0x0000fb0a) im_reading_pane_t1_ParamLimits

0x9d1d,	// (0x00017ce5) list_im_pane_ParamLimits

0x9d2e,	// (0x00017cf6) scroll_pane_cp07_ParamLimits

0x9689,	// (0x00017651) grid_highlight_pane_cp012

0x98e4,	// (0x000178ac) mup_scale_pane_ParamLimits

0x995f,	// (0x00017927) main_usb_pane_g1_ParamLimits

0x995f,	// (0x00017927) main_usb_pane_g1

0x995f,	// (0x00017927) main_usb_pane_g2_ParamLimits

0x995f,	// (0x00017927) main_usb_pane_g2

0x0001,

0xf199,	// (0x0001d161) main_usb_pane_g_ParamLimits

0xf199,	// (0x0001d161) main_usb_pane_g

0x99af,	// (0x00017977) main_usb_pane_t1_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t1

0x99af,	// (0x00017977) main_usb_pane_t2_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t2

0x99af,	// (0x00017977) main_usb_pane_t3_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t3

0x99af,	// (0x00017977) main_usb_pane_t4_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t4

0x99af,	// (0x00017977) main_usb_pane_t5_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t5

0x99af,	// (0x00017977) main_usb_pane_t6_ParamLimits

0x99af,	// (0x00017977) main_usb_pane_t6

0x0005,

0xf4c7,	// (0x0001d48f) main_usb_pane_t_ParamLimits

0x280d,	// (0x000107d5) aid_text_placing

0x2816,	// (0x000107de) main_location2_pane_t1_ParamLimits

0x2828,	// (0x000107f0) main_location2_pane_t2_ParamLimits

0x283a,	// (0x00010802) main_location2_pane_t3_ParamLimits

0x284c,	// (0x00010814) main_location2_pane_t4_ParamLimits

0x284c,	// (0x00010814) main_location2_pane_t4

0xf2f6,	// (0x0001d2be) main_location2_pane_t_ParamLimits

0x9912,	// (0x000178da) find_pinb_pane_g2_ParamLimits

0x9912,	// (0x000178da) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0001d03a) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0001d03a) find_pinb_pane_g

0x991e,	// (0x000178e6) find_pinb_pane_t1_ParamLimits

0x9930,	// (0x000178f8) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0001d03f) find_pinb_pane_t_ParamLimits

0x9689,	// (0x00017651) main_call3_pane

0x2183,	// (0x0001014b) cale_month_day_heading_pane_t1_ParamLimits

0x21c5,	// (0x0001018d) cale_month_day_heading_pane_t2_ParamLimits

0x21fa,	// (0x000101c2) cale_month_day_heading_pane_t3_ParamLimits

0x222f,	// (0x000101f7) cale_month_day_heading_pane_t4_ParamLimits

0x226c,	// (0x00010234) cale_month_day_heading_pane_t5_ParamLimits

0x22b1,	// (0x00010279) cale_month_day_heading_pane_t6_ParamLimits

0x22f6,	// (0x000102be) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0001d1ba) cale_month_day_heading_pane_t_ParamLimits

0x9f84,	// (0x00017f4c) smil_status_volume_pane

0x2d95,	// (0x00010d5d) postcard_address_pane_ParamLimits

0x2d95,	// (0x00010d5d) postcard_address_pane

0x2da7,	// (0x00010d6f) postcard_message_pane_ParamLimits

0x2da7,	// (0x00010d6f) postcard_message_pane

0x32bf,	// (0x00011287) call2_cli_visual_pane_t1_ParamLimits

0x32bf,	// (0x00011287) call2_cli_visual_pane_t1

0xbaf1,	// (0x00019ab9) postcard_message_pane_t1_ParamLimits

0xbaf1,	// (0x00019ab9) postcard_message_pane_t1

0xbad9,	// (0x00019aa1) postcard_address_pane_t1_ParamLimits

0xbad9,	// (0x00019aa1) postcard_address_pane_t1

0x39b5,	// (0x0001197d) popup_call3_audio_in_window_ParamLimits

0x39b5,	// (0x0001197d) popup_call3_audio_in_window

0x3840,	// (0x00011808) bg_popup_call3_in_pane_ParamLimits

0x3840,	// (0x00011808) bg_popup_call3_in_pane

0x38b6,	// (0x0001187e) popup_call3_audio_in_window_g1_ParamLimits

0x38b6,	// (0x0001187e) popup_call3_audio_in_window_g1

0x38d6,	// (0x0001189e) popup_call3_audio_in_window_g2_ParamLimits

0x38d6,	// (0x0001189e) popup_call3_audio_in_window_g2

0x38f6,	// (0x000118be) popup_call3_audio_in_window_g3_ParamLimits

0x38f6,	// (0x000118be) popup_call3_audio_in_window_g3

0x0003,

0xf524,	// (0x0001d4ec) popup_call3_audio_in_window_g_ParamLimits

0xf524,	// (0x0001d4ec) popup_call3_audio_in_window_g

0x3927,	// (0x000118ef) popup_call3_audio_in_window_t1_ParamLimits

0x3927,	// (0x000118ef) popup_call3_audio_in_window_t1

0x3965,	// (0x0001192d) popup_call3_audio_in_window_t2_ParamLimits

0x3965,	// (0x0001192d) popup_call3_audio_in_window_t2

0x39a3,	// (0x0001196b) popup_call3_audio_in_window_t3_ParamLimits

0x39a3,	// (0x0001196b) popup_call3_audio_in_window_t3

0x0002,

0xf52d,	// (0x0001d4f5) popup_call3_audio_in_window_t_ParamLimits

0xf52d,	// (0x0001d4f5) popup_call3_audio_in_window_t

0x9c52,	// (0x00017c1a) bg_popup_call3_rect_pane

0x9b4b,	// (0x00017b13) bg_popup_call3_rect_pane_g1

0x9b3b,	// (0x00017b03) bg_popup_call3_rect_pane_g2

0x9b43,	// (0x00017b0b) bg_popup_call3_rect_pane_g3

0x9b53,	// (0x00017b1b) bg_popup_call3_rect_pane_g4

0x9b5b,	// (0x00017b23) bg_popup_call3_rect_pane_g5

0x9b63,	// (0x00017b2b) bg_popup_call3_rect_pane_g6

0x9b6b,	// (0x00017b33) bg_popup_call3_rect_pane_g7

0x91f9,	// (0x000171c1) mup_visualizer_osc_pane

0x91f9,	// (0x000171c1) mup_visualizer_spec_pane

0x3870,	// (0x00011838) call3_video_qcif_pane_ParamLimits

0x3870,	// (0x00011838) call3_video_qcif_pane

0x3883,	// (0x0001184b) call3_video_qcif_uncrop_pane_ParamLimits

0x3883,	// (0x0001184b) call3_video_qcif_uncrop_pane

0x3891,	// (0x00011859) call3_video_subqcif_pane_ParamLimits

0x3891,	// (0x00011859) call3_video_subqcif_pane

0x38a5,	// (0x0001186d) call3_video_subqcif_uncrop_pane_ParamLimits

0x38a5,	// (0x0001186d) call3_video_subqcif_uncrop_pane

0x3916,	// (0x000118de) popup_call3_audio_in_window_g4_ParamLimits

0x3916,	// (0x000118de) popup_call3_audio_in_window_g4

0x91f9,	// (0x000171c1) mup_spec_half_pane

0x91f9,	// (0x000171c1) mup_spec_half_pane_cp

0x91f9,	// (0x000171c1) mup_osc_middle_pane

0x99a5,	// (0x0001796d) mup_visualizer_osc_pane_g1

0xba6a,	// (0x00019a32) mup_spec_bar_pane_ParamLimits

0xba6a,	// (0x00019a32) mup_spec_bar_pane

0x99a5,	// (0x0001796d) mup_spec_bar_pane_g1

0x99a5,	// (0x0001796d) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0001d054) mup_spec_bar_pane_g

0x108a,	// (0x0000f052) aid_cale_week_size_cell_pane_ParamLimits

0x10a4,	// (0x0000f06c) bg_cale_heading_pane_ParamLimits

0x9bb4,	// (0x00017b7c) bg_cale_pane_cp01_ParamLimits

0x10bc,	// (0x0000f084) cale_week_corner_pane_ParamLimits

0x10db,	// (0x0000f0a3) cale_week_day_heading_pane_ParamLimits

0x10f8,	// (0x0000f0c0) cale_week_scroll_pane_g1_ParamLimits

0x110b,	// (0x0000f0d3) cale_week_scroll_pane_g2_ParamLimits

0x1123,	// (0x0000f0eb) cale_week_scroll_pane_g3_ParamLimits

0x113b,	// (0x0000f103) cale_week_scroll_pane_g4_ParamLimits

0x1153,	// (0x0000f11b) cale_week_scroll_pane_g5_ParamLimits

0x1173,	// (0x0000f13b) cale_week_scroll_pane_g6_ParamLimits

0x1193,	// (0x0000f15b) cale_week_scroll_pane_g7_ParamLimits

0x11b3,	// (0x0000f17b) cale_week_scroll_pane_g8_ParamLimits

0x11d7,	// (0x0000f19f) cale_week_scroll_pane_g9_ParamLimits

0x11ef,	// (0x0000f1b7) cale_week_scroll_pane_g10_ParamLimits

0x1207,	// (0x0000f1cf) cale_week_scroll_pane_g11_ParamLimits

0x121f,	// (0x0000f1e7) cale_week_scroll_pane_g12_ParamLimits

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g13_ParamLimits

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g14_ParamLimits

0x1237,	// (0x0000f1ff) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0001d0cb) cale_week_scroll_pane_g_ParamLimits

0x1273,	// (0x0000f23b) cale_week_time_pane_ParamLimits

0x1297,	// (0x0000f25f) grid_cale_week_pane_ParamLimits

0x9bd1,	// (0x00017b99) listscroll_cale_week_pane_t1

0x9be3,	// (0x00017bab) scroll_pane_cp08_ParamLimits

0x1cfc,	// (0x0000fcc4) cale_month_corner_pane_ParamLimits

0x9f4e,	// (0x00017f16) cale_month_pane_t1

0x2116,	// (0x000100de) cale_month_week_pane_ParamLimits

0x2662,	// (0x0001062a) popup_call_status_window_g1_ParamLimits

0x2676,	// (0x0001063e) popup_call_status_window_g2_ParamLimits

0x268a,	// (0x00010652) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x0001d245) popup_call_status_window_g_ParamLimits

0xa2f6,	// (0x000182be) aid_call2_pane

0x2bb1,	// (0x00010b79) msg_header_pane_g1

0x2d95,	// (0x00010d5d) postcard_address2_pane_ParamLimits

0x2d95,	// (0x00010d5d) postcard_address2_pane

0x2da7,	// (0x00010d6f) postcard_message2_pane_ParamLimits

0x2da7,	// (0x00010d6f) postcard_message2_pane

0x3810,	// (0x000117d8) message2_row_pane_ParamLimits

0x3810,	// (0x000117d8) message2_row_pane

0x382d,	// (0x000117f5) address2_row_pane_ParamLimits

0x382d,	// (0x000117f5) address2_row_pane

0xba37,	// (0x000199ff) postcard_message2_row_pane_g1

0xba3f,	// (0x00019a07) postcard_message2_row_pane_t1

0xba37,	// (0x000199ff) address2_row_pane_g1

0xba3f,	// (0x00019a07) address2_row_pane_t1

0x15d1,	// (0x0000f599) aid_size_cell_vorec

0x9689,	// (0x00017651) main_rss_pane

0xba4d,	// (0x00019a15) rss_list_single_pane_ParamLimits

0xba4d,	// (0x00019a15) rss_list_single_pane

0xba5b,	// (0x00019a23) rss_list_single_pane_t1

0xba5b,	// (0x00019a23) rss_list_single_pane_t2

0x0001,

0xf518,	// (0x0001d4e0) rss_list_single_pane_t

0x9689,	// (0x00017651) main_camera2_pane

0x9689,	// (0x00017651) main_video2_pane

0xbb0d,	// (0x00019ad5) cams_zoom_pane_cp2_ParamLimits

0xbb0d,	// (0x00019ad5) cams_zoom_pane_cp2

0xbb0d,	// (0x00019ad5) image2_vga_pane_ParamLimits

0xbb0d,	// (0x00019ad5) image2_vga_pane

0xbb1b,	// (0x00019ae3) main_camera2_pane_g1_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g1

0xbb1b,	// (0x00019ae3) main_camera2_pane_g2_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g2

0xbb1b,	// (0x00019ae3) main_camera2_pane_g3_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g3

0xbb1b,	// (0x00019ae3) main_camera2_pane_g4_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g4

0xbb1b,	// (0x00019ae3) main_camera2_pane_g5_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g5

0xbb1b,	// (0x00019ae3) main_camera2_pane_g6_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g6

0xbb1b,	// (0x00019ae3) main_camera2_pane_g7_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g7

0xbb1b,	// (0x00019ae3) main_camera2_pane_g8_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g8

0x0008,

0xf534,	// (0x0001d4fc) main_camera2_pane_g_ParamLimits

0xf534,	// (0x0001d4fc) main_camera2_pane_g

0x39d7,	// (0x0001199f) main_camera2_pane_t1_ParamLimits

0x39d7,	// (0x0001199f) main_camera2_pane_t1

0x39d7,	// (0x0001199f) main_camera2_pane_t2_ParamLimits

0x39d7,	// (0x0001199f) main_camera2_pane_t2

0x39d7,	// (0x0001199f) main_camera2_pane_t3_ParamLimits

0x39d7,	// (0x0001199f) main_camera2_pane_t3

0x39d7,	// (0x0001199f) main_camera2_pane_t4_ParamLimits

0x39d7,	// (0x0001199f) main_camera2_pane_t4

0x0006,

0xf547,	// (0x0001d50f) main_camera2_pane_t_ParamLimits

0xf547,	// (0x0001d50f) main_camera2_pane_t

0xbb3d,	// (0x00019b05) cams_zoom_pane_cp4_ParamLimits

0xbb3d,	// (0x00019b05) cams_zoom_pane_cp4

0xbb4b,	// (0x00019b13) image2_cif_pane_ParamLimits

0xbb4b,	// (0x00019b13) image2_cif_pane

0x9268,	// (0x00017230) image2_subqcif_pane_ParamLimits

0x9268,	// (0x00017230) image2_subqcif_pane

0x39eb,	// (0x000119b3) main_video2_pane_g1_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g1

0x39eb,	// (0x000119b3) main_video2_pane_g2_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g2

0x39eb,	// (0x000119b3) main_video2_pane_g3_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g3

0x39eb,	// (0x000119b3) main_video2_pane_g4_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g4

0x39eb,	// (0x000119b3) main_video2_pane_g5_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g5

0x39eb,	// (0x000119b3) main_video2_pane_g6_ParamLimits

0x39eb,	// (0x000119b3) main_video2_pane_g6

0x0005,

0xf556,	// (0x0001d51e) main_video2_pane_g_ParamLimits

0xf556,	// (0x0001d51e) main_video2_pane_g

0x39f9,	// (0x000119c1) main_video2_pane_t1_ParamLimits

0x39f9,	// (0x000119c1) main_video2_pane_t1

0x39f9,	// (0x000119c1) main_video2_pane_t2_ParamLimits

0x39f9,	// (0x000119c1) main_video2_pane_t2

0x39f9,	// (0x000119c1) main_video2_pane_t3_ParamLimits

0x39f9,	// (0x000119c1) main_video2_pane_t3

0x0002,

0xf563,	// (0x0001d52b) main_video2_pane_t_ParamLimits

0xf563,	// (0x0001d52b) main_video2_pane_t

0x3364,	// (0x0001132c) call_muted_g2

0x0001,

0xf50a,	// (0x0001d4d2) call_muted_g

0x9689,	// (0x00017651) main_mup2_pane

0xa77a,	// (0x00018742) main_mup2_pane_g1_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g1

0xa77a,	// (0x00018742) main_mup2_pane_g2_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g2

0x99a5,	// (0x0001796d) main_mup_pane_g13_cp1

0x91f9,	// (0x000171c1) mup_volume_pane_cp1

0xa77a,	// (0x00018742) main_mup2_pane_g4_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g4

0xa77a,	// (0x00018742) main_mup2_pane_g5_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g5

0xa77a,	// (0x00018742) main_mup2_pane_g6_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g6

0xa77a,	// (0x00018742) main_mup2_pane_g7_ParamLimits

0xa77a,	// (0x00018742) main_mup2_pane_g7

0x0006,

0xf56a,	// (0x0001d532) main_mup2_pane_g_ParamLimits

0xf56a,	// (0x0001d532) main_mup2_pane_g

0xa788,	// (0x00018750) main_mup2_pane_t1_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t1

0xa788,	// (0x00018750) main_mup2_pane_t2_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t2

0xa788,	// (0x00018750) main_mup2_pane_t3_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t3

0xa788,	// (0x00018750) main_mup2_pane_t4_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t4

0xa788,	// (0x00018750) main_mup2_pane_t5_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t5

0xa788,	// (0x00018750) main_mup2_pane_t6_ParamLimits

0xa788,	// (0x00018750) main_mup2_pane_t6

0x0005,

0xf579,	// (0x0001d541) main_mup2_pane_t_ParamLimits

0xf579,	// (0x0001d541) main_mup2_pane_t

0xa79c,	// (0x00018764) mup2_visualizer_pane_ParamLimits

0xa79c,	// (0x00018764) mup2_visualizer_pane

0xa79c,	// (0x00018764) mup_progress_pane_cp_ParamLimits

0xa79c,	// (0x00018764) mup_progress_pane_cp

0xbb59,	// (0x00019b21) mup_volume_pane_cp_ParamLimits

0xbb59,	// (0x00019b21) mup_volume_pane_cp

0x995f,	// (0x00017927) mup2_visualizer_pane_g1_ParamLimits

0x995f,	// (0x00017927) mup2_visualizer_pane_g1

0x996d,	// (0x00017935) mup2_visualizer_pane_g2_ParamLimits

0x996d,	// (0x00017935) mup2_visualizer_pane_g2

0x996d,	// (0x00017935) mup2_visualizer_pane_g3_ParamLimits

0x996d,	// (0x00017935) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0001d044) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0001d044) mup2_visualizer_pane_g

0x91f9,	// (0x000171c1) aid_size_cell_fmradio

0x3516,	// (0x000114de) aid_height_parent_landcape

0x9dac,	// (0x00017d74) wml_content_pane_cp

0x9db4,	// (0x00017d7c) wml_tabs_pane

0x9dbd,	// (0x00017d85) popup_wml_miniature_window

0x9dc5,	// (0x00017d8d) scroll_pane_cp021

0x9dd9,	// (0x00017da1) wml_content_pane_comp8

0x9689,	// (0x00017651) bg_popup_sub_pane_cp05

0xbb6f,	// (0x00019b37) popup_wml_miniature_window_g1

0xbb77,	// (0x00019b3f) wml_miniature_view_pane

0x3a0d,	// (0x000119d5) aid_size_wml_view

0x3a15,	// (0x000119dd) wml_miniature_view_pane_g1

0x3a1e,	// (0x000119e6) wml_miniature_view_pane_g2

0x3a27,	// (0x000119ef) wml_miniature_view_pane_g3

0x3a2f,	// (0x000119f7) wml_miniature_view_pane_g4

0x3a37,	// (0x000119ff) wml_miniature_view_pane_g5

0x3a3f,	// (0x00011a07) wml_miniature_view_pane_g6

0x3a47,	// (0x00011a0f) wml_miniature_view_pane_g7

0x3a4f,	// (0x00011a17) wml_miniature_view_pane_g8

0x0007,

0xf586,	// (0x0001d54e) wml_miniature_view_pane_g

0xbb7f,	// (0x00019b47) background_graphic_ParamLimits

0xbb7f,	// (0x00019b47) background_graphic

0xbb8b,	// (0x00019b53) wml_tabs_2_pane

0xbb94,	// (0x00019b5c) wml_tabs_3_pane_ParamLimits

0xbb94,	// (0x00019b5c) wml_tabs_3_pane

0xbba6,	// (0x00019b6e) wml_tabs_4_pane_ParamLimits

0xbba6,	// (0x00019b6e) wml_tabs_4_pane

0xbbbc,	// (0x00019b84) wml_tabs_5_pane_ParamLimits

0xbbbc,	// (0x00019b84) wml_tabs_5_pane

0xbbd6,	// (0x00019b9e) wml_tabs_pane_g2_ParamLimits

0xbbd6,	// (0x00019b9e) wml_tabs_pane_g2

0xbbeb,	// (0x00019bb3) wml_tabs_pane_g3_ParamLimits

0xbbeb,	// (0x00019bb3) wml_tabs_pane_g3

0xbc00,	// (0x00019bc8) wml_tabs_2_active_pane_ParamLimits

0xbc00,	// (0x00019bc8) wml_tabs_2_active_pane

0xbc00,	// (0x00019bc8) wml_tabs_2_passive_pane_ParamLimits

0xbc00,	// (0x00019bc8) wml_tabs_2_passive_pane

0x3a57,	// (0x00011a1f) wml_tabs_3_active_pane_cp_ParamLimits

0x3a57,	// (0x00011a1f) wml_tabs_3_active_pane_cp

0x3a6c,	// (0x00011a34) wml_tabs_3_passive_pane_ParamLimits

0x3a6c,	// (0x00011a34) wml_tabs_3_passive_pane

0x3a7f,	// (0x00011a47) wml_tabs_3_passive_pane_cp_ParamLimits

0x3a7f,	// (0x00011a47) wml_tabs_3_passive_pane_cp

0x3a96,	// (0x00011a5e) tabs_4_active_pane

0x3a9e,	// (0x00011a66) tabs_4_passive_pane

0x3aa8,	// (0x00011a70) tabs_4_passive_pane_cp

0x3ab0,	// (0x00011a78) tabs_4_passive_pane_cp2

0x32da,	// (0x000112a2) aid_height_text

0xa79c,	// (0x00018764) mup_volume_cont_pane_ParamLimits

0xa79c,	// (0x00018764) mup_volume_cont_pane

0x91f9,	// (0x000171c1) aid_size_cell_pinb

0x91f9,	// (0x000171c1) aid_size_list_pinb

0xa79c,	// (0x00018764) mup2_volume_cont_pane_ParamLimits

0xa79c,	// (0x00018764) mup2_volume_cont_pane

0xbc0e,	// (0x00019bd6) mup2_volume_cont_pane_g1_ParamLimits

0xbc0e,	// (0x00019bd6) mup2_volume_cont_pane_g1

0x0b48,	// (0x0000eb10) aid_size_cell_touch_ParamLimits

0x0b48,	// (0x0000eb10) aid_size_cell_touch

0x0d74,	// (0x0000ed3c) touch_pane_ParamLimits

0x0d74,	// (0x0000ed3c) touch_pane

0x91f9,	// (0x000171c1) main_rss2_pane

0xbc2d,	// (0x00019bf5) listscroll_rss2_pane

0xbc36,	// (0x00019bfe) rss2_navigation_pane

0xbc3e,	// (0x00019c06) list_rss2_pane

0xa47d,	// (0x00018445) scroll_pane_cp22

0xbc46,	// (0x00019c0e) rss2_navigation_pane_g1

0xbc4f,	// (0x00019c17) rss2_navigation_pane_g2

0xbc57,	// (0x00019c1f) rss2_navigation_pane_g3

0x0002,

0xf597,	// (0x0001d55f) rss2_navigation_pane_g

0xbc5f,	// (0x00019c27) rss2_navigation_pane_t1

0x3aba,	// (0x00011a82) rss2_list_single_pane_ParamLimits

0x3aba,	// (0x00011a82) rss2_list_single_pane

0xbc6d,	// (0x00019c35) rss2_list_single_pane_t2

0xbc7b,	// (0x00019c43) rss2_list_single_pane_t3_ParamLimits

0xbc7b,	// (0x00019c43) rss2_list_single_pane_t3

0xbc98,	// (0x00019c60) rss2_list_single_pane_t4

0x253e,	// (0x00010506) smil_status_pane_g1

0x9268,	// (0x00017230) main_image2_pane_ParamLimits

0x9268,	// (0x00017230) main_image2_pane

0xbb1b,	// (0x00019ae3) main_camera2_pane_g9_ParamLimits

0xbb1b,	// (0x00019ae3) main_camera2_pane_g9

0x39d7,	// (0x0001199f) main_camera2_pane_t5_ParamLimits

0x39d7,	// (0x0001199f) main_camera2_pane_t5

0xbb29,	// (0x00019af1) main_camera2_pane_t6_ParamLimits

0xbb29,	// (0x00019af1) main_camera2_pane_t6

0x3ad0,	// (0x00011a98) main_image2_pane_g1_ParamLimits

0x3ad0,	// (0x00011a98) main_image2_pane_g1

0x2fad,	// (0x00010f75) smil2_video_pane_ParamLimits

0x2fad,	// (0x00010f75) smil2_video_pane

0x9217,	// (0x000171df) aid_zoom_text_primary_cp

0x925e,	// (0x00017226) popup_preview_fixed_window

0x9d15,	// (0x00017cdd) im_reading_pane_g1

0x39c9,	// (0x00011991) cams2_bc_adjust_pane_cp_ParamLimits

0x39c9,	// (0x00011991) cams2_bc_adjust_pane_cp

0xa79c,	// (0x00018764) cams2_bc_adjust_pane_ParamLimits

0xa79c,	// (0x00018764) cams2_bc_adjust_pane

0x99a5,	// (0x0001796d) cams2_bc_adjust_pane_g1

0x91f9,	// (0x000171c1) cams2_slider_pane

0x99a5,	// (0x0001796d) cams2_slider_pane_g1

0x99a5,	// (0x0001796d) cams2_slider_pane_g2

0x0006,

0xf59e,	// (0x0001d566) cams2_slider_pane_g

0x0e3d,	// (0x0000ee05) calc_display_pane_ParamLimits

0x0e62,	// (0x0000ee2a) calc_paper_pane_ParamLimits

0x0e85,	// (0x0000ee4d) grid_calc_pane_ParamLimits

0xa358,	// (0x00018320) popup_clock_digital_window_t1_ParamLimits

0xa994,	// (0x0001895c) main_image_pane_t1

0x0e1f,	// (0x0000ede7) aid_size_cell_calc_ParamLimits

0x0e1f,	// (0x0000ede7) aid_size_cell_calc

0x355c,	// (0x00011524) popup_blid_sat_info2_window_ParamLimits

0x355c,	// (0x00011524) popup_blid_sat_info2_window

0xbca6,	// (0x00019c6e) aid_size_cell_blid

0xbb4b,	// (0x00019b13) bg_popup_window_pane_cp07

0xbcc3,	// (0x00019c8b) grid_popup_blid_pane

0xbccd,	// (0x00019c95) heading_pane_cp05_ParamLimits

0xbccd,	// (0x00019c95) heading_pane_cp05

0xbd97,	// (0x00019d5f) cell_popup_blid_pane_ParamLimits

0xbd97,	// (0x00019d5f) cell_popup_blid_pane

0xbdbb,	// (0x00019d83) cell_popup_blid_pane_g1

0xbdc3,	// (0x00019d8b) cell_popup_blid_pane_t1

0xa79c,	// (0x00018764) mup2_indicator_pane_ParamLimits

0xa79c,	// (0x00018764) mup2_indicator_pane

0x91f9,	// (0x000171c1) mup2_visualizer_osc_pane

0xbb59,	// (0x00019b21) mup2_visualizer_spec_pane_ParamLimits

0xbb59,	// (0x00019b21) mup2_visualizer_spec_pane

0x91f9,	// (0x000171c1) mup2_spec_half_pane

0x91f9,	// (0x000171c1) mup2_spec_half_pane_cp

0xbdd1,	// (0x00019d99) mup2_spec_bar_pane_ParamLimits

0xbdd1,	// (0x00019d99) mup2_spec_bar_pane

0x99a5,	// (0x0001796d) mup2_spec_bar_pane_g1

0xbdf0,	// (0x00019db8) mup2_spec_bar_pane_g2

0x0001,

0xf5c4,	// (0x0001d58c) mup2_spec_bar_pane_g

0x91f9,	// (0x000171c1) mup2_osc_middle_pane

0x99a5,	// (0x0001796d) mup2_visualizer_osc_pane_g1

0x9296,	// (0x0001725e) popup_number_entry_window_t1_ParamLimits

0x92a9,	// (0x00017271) popup_number_entry_window_t2_ParamLimits

0x92bb,	// (0x00017283) popup_number_entry_window_t3_ParamLimits

0x0dc6,	// (0x0000ed8e) popup_number_entry_window_t5_ParamLimits

0x0dc6,	// (0x0000ed8e) popup_number_entry_window_t5

0xf01d,	// (0x0001cfe5) popup_number_entry_window_t_ParamLimits

0x92cd,	// (0x00017295) text_title_cp2_ParamLimits

0xa88c,	// (0x00018854) aid_hotspot_pointer_text2_pane

0xa8b2,	// (0x0001887a) main_viewer_pane_g9_ParamLimits

0xa8b2,	// (0x0001887a) main_viewer_pane_g9

0x9f4e,	// (0x00017f16) cale_month_pane_t1_ParamLimits

0x9fb9,	// (0x00017f81) bg_cale_pane_ParamLimits

0x9fd1,	// (0x00017f99) list_cale_pane_ParamLimits

0x9fe2,	// (0x00017faa) listscroll_cale_day_pane_t1

0x9ff4,	// (0x00017fbc) scroll_pane_cp09_ParamLimits

0x2937,	// (0x000108ff) main_mup_eq_pane_t1_ParamLimits

0x2937,	// (0x000108ff) main_mup_eq_pane_t1

0x2951,	// (0x00010919) main_mup_eq_pane_t2_ParamLimits

0x2951,	// (0x00010919) main_mup_eq_pane_t2

0x296b,	// (0x00010933) main_mup_eq_pane_t3_ParamLimits

0x296b,	// (0x00010933) main_mup_eq_pane_t3

0x2987,	// (0x0001094f) main_mup_eq_pane_t4_ParamLimits

0x2987,	// (0x0001094f) main_mup_eq_pane_t4

0x29a3,	// (0x0001096b) main_mup_eq_pane_t5_ParamLimits

0x29a3,	// (0x0001096b) main_mup_eq_pane_t5

0x29bf,	// (0x00010987) main_mup_eq_pane_t6_ParamLimits

0x29bf,	// (0x00010987) main_mup_eq_pane_t6

0x29d3,	// (0x0001099b) main_mup_eq_pane_t7_ParamLimits

0x29d3,	// (0x0001099b) main_mup_eq_pane_t7

0x29e7,	// (0x000109af) main_mup_eq_pane_t8_ParamLimits

0x29e7,	// (0x000109af) main_mup_eq_pane_t8

0x29fb,	// (0x000109c3) main_mup_eq_pane_t9_ParamLimits

0x29fb,	// (0x000109c3) main_mup_eq_pane_t9

0x2a15,	// (0x000109dd) main_mup_eq_pane_t10_ParamLimits

0x2a15,	// (0x000109dd) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x0001d33f) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x0001d33f) main_mup_eq_pane_t

0x2ac4,	// (0x00010a8c) mup_equalizer_pane_cp5_ParamLimits

0x2ad8,	// (0x00010aa0) mup_equalizer_pane_cp6_ParamLimits

0x2aec,	// (0x00010ab4) mup_equalizer_pane_cp7_ParamLimits

0x91f9,	// (0x000171c1) main_gallery_pane

0xba89,	// (0x00019a51) smil2_volume_pane

0xba91,	// (0x00019a59) smil_status_volume_pane_g1_ParamLimits

0xbaa4,	// (0x00019a6c) smil_status_volume_pane_g2_ParamLimits

0xbab7,	// (0x00019a7f) smil_status_volume_pane_g3_ParamLimits

0xf51d,	// (0x0001d4e5) smil_status_volume_pane_g_ParamLimits

0xbb4b,	// (0x00019b13) bg_popup_window_pane_cp07_ParamLimits

0xbcae,	// (0x00019c76) blid_firmament_pane

0x9268,	// (0x00017230) aid_size_cell_gallery_ParamLimits

0x9268,	// (0x00017230) aid_size_cell_gallery

0x9268,	// (0x00017230) grid_gallery_pane_ParamLimits

0x9268,	// (0x00017230) grid_gallery_pane

0xbb4b,	// (0x00019b13) cell_gallery_pane_ParamLimits

0xbb4b,	// (0x00019b13) cell_gallery_pane

0x9268,	// (0x00017230) bg_cell_gallery_focus_pane_ParamLimits

0x9268,	// (0x00017230) bg_cell_gallery_focus_pane

0x995f,	// (0x00017927) cell_gallery_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_gallery_pane_g1

0x995f,	// (0x00017927) cell_gallery_pane_g2_ParamLimits

0x995f,	// (0x00017927) cell_gallery_pane_g2

0x995f,	// (0x00017927) cell_gallery_pane_g3_ParamLimits

0x995f,	// (0x00017927) cell_gallery_pane_g3

0x996d,	// (0x00017935) cell_gallery_pane_g4_ParamLimits

0x996d,	// (0x00017935) cell_gallery_pane_g4

0x0003,

0xf5c9,	// (0x0001d591) cell_gallery_pane_g_ParamLimits

0xf5c9,	// (0x0001d591) cell_gallery_pane_g

0xbdfa,	// (0x00019dc2) bg_cell_gallery_focus_pane_g1

0xbe02,	// (0x00019dca) bg_cell_gallery_focus_pane_g2

0xbe0a,	// (0x00019dd2) bg_cell_gallery_focus_pane_g3

0xbe12,	// (0x00019dda) bg_cell_gallery_focus_pane_g4

0xbe1a,	// (0x00019de2) bg_cell_gallery_focus_pane_g5

0xbe22,	// (0x00019dea) bg_cell_gallery_focus_pane_g6

0xbe2a,	// (0x00019df2) bg_cell_gallery_focus_pane_g7

0xbe32,	// (0x00019dfa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5d2,	// (0x0001d59a) bg_cell_gallery_focus_pane_g

0xbe3a,	// (0x00019e02) aid_firma_cardinal

0xbe4e,	// (0x00019e16) blid_firmament_pane_t1

0xbe65,	// (0x00019e2d) blid_firmament_pane_t2

0xbe7c,	// (0x00019e44) blid_firmament_pane_t3

0xbe93,	// (0x00019e5b) blid_firmament_pane_t4

0x0003,

0xf5e3,	// (0x0001d5ab) blid_firmament_pane_t

0xbeaa,	// (0x00019e72) blid_sat_info_pane

0x99a5,	// (0x0001796d) blid_sat_info_pane_g1

0x99a5,	// (0x0001796d) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0001d054) blid_sat_info_pane_g

0xbeba,	// (0x00019e82) blid_sat_info_pane_t1

0xbec8,	// (0x00019e90) smil2_volume_content_pane

0xbed1,	// (0x00019e99) smil2_volume_pane_g1

0x9ab8,	// (0x00017a80) smil2_volume_content_pane_g1

0xbed9,	// (0x00019ea1) smil2_volume_content_pane_g2

0xbee2,	// (0x00019eaa) smil2_volume_content_pane_g3

0xbeeb,	// (0x00019eb3) smil2_volume_content_pane_g4

0xbef4,	// (0x00019ebc) smil2_volume_content_pane_g5

0xbefd,	// (0x00019ec5) smil2_volume_content_pane_g6

0xbf06,	// (0x00019ece) smil2_volume_content_pane_g7

0xbf0f,	// (0x00019ed7) smil2_volume_content_pane_g8

0xbf18,	// (0x00019ee0) smil2_volume_content_pane_g9

0xbf21,	// (0x00019ee9) smil2_volume_content_pane_g10

0x0009,

0xf5ec,	// (0x0001d5b4) smil2_volume_content_pane_g

0x134b,	// (0x0000f313) cale_week_day_heading_pane_t1_ParamLimits

0x1375,	// (0x0000f33d) cale_week_day_heading_pane_t2_ParamLimits

0x13a4,	// (0x0000f36c) cale_week_day_heading_pane_t3_ParamLimits

0x13d3,	// (0x0000f39b) cale_week_day_heading_pane_t4_ParamLimits

0x1402,	// (0x0000f3ca) cale_week_day_heading_pane_t5_ParamLimits

0x1439,	// (0x0000f401) cale_week_day_heading_pane_t6_ParamLimits

0x1470,	// (0x0000f438) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0001d0ec) cale_week_day_heading_pane_t_ParamLimits

0x9c00,	// (0x00017bc8) bg_cale_side_pane_ParamLimits

0x149a,	// (0x0000f462) cale_week_time_pane_t1_ParamLimits

0x14b4,	// (0x0000f47c) cale_week_time_pane_t2_ParamLimits

0x14ce,	// (0x0000f496) cale_week_time_pane_t3_ParamLimits

0x14e8,	// (0x0000f4b0) cale_week_time_pane_t4_ParamLimits

0x1502,	// (0x0000f4ca) cale_week_time_pane_t5_ParamLimits

0x151c,	// (0x0000f4e4) cale_week_time_pane_t6_ParamLimits

0x1536,	// (0x0000f4fe) cale_week_time_pane_t7_ParamLimits

0x1550,	// (0x0000f518) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0001d0fb) cale_week_time_pane_t_ParamLimits

0x1570,	// (0x0000f538) cell_cale_week_pane_g2_ParamLimits

0x9c00,	// (0x00017bc8) bg_cale_side_pane_cp01_ParamLimits

0x2343,	// (0x0001030b) cale_month_week_pane_t1_ParamLimits

0x235c,	// (0x00010324) cale_month_week_pane_t2_ParamLimits

0x2375,	// (0x0001033d) cale_month_week_pane_t3_ParamLimits

0x238e,	// (0x00010356) cale_month_week_pane_t4_ParamLimits

0x23a7,	// (0x0001036f) cale_month_week_pane_t5_ParamLimits

0x23c0,	// (0x00010388) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0001d1c9) cale_month_week_pane_t_ParamLimits

0x9f60,	// (0x00017f28) cell_cale_month_pane_g1_ParamLimits

0x91f9,	// (0x000171c1) main_cale_event_viewer_pane

0x91f9,	// (0x000171c1) listscroll_cale_event_viewer_pane

0xbf2a,	// (0x00019ef2) list_cale_ev_pane

0xbf32,	// (0x00019efa) scroll_pane_cp023

0xbf3e,	// (0x00019f06) field_cale_ev_pane_ParamLimits

0xbf3e,	// (0x00019f06) field_cale_ev_pane

0xbf5c,	// (0x00019f24) field_cale_ev_content_pane_ParamLimits

0xbf5c,	// (0x00019f24) field_cale_ev_content_pane

0xbf68,	// (0x00019f30) field_cale_ev_pane_g1_ParamLimits

0xbf68,	// (0x00019f30) field_cale_ev_pane_g1

0xbf74,	// (0x00019f3c) field_cale_ev_pane_g2_ParamLimits

0xbf74,	// (0x00019f3c) field_cale_ev_pane_g2

0xbf8c,	// (0x00019f54) field_cale_ev_pane_g3_ParamLimits

0xbf8c,	// (0x00019f54) field_cale_ev_pane_g3

0x0002,

0xf601,	// (0x0001d5c9) field_cale_ev_pane_g_ParamLimits

0xf601,	// (0x0001d5c9) field_cale_ev_pane_g

0xbfa4,	// (0x00019f6c) field_cale_ev_pane_t1_ParamLimits

0xbfa4,	// (0x00019f6c) field_cale_ev_pane_t1

0xbfbb,	// (0x00019f83) field_cale_ev_content_pane_t1_ParamLimits

0xbfbb,	// (0x00019f83) field_cale_ev_content_pane_t1

0xa83f,	// (0x00018807) bg_button_pane_cp01

0x1078,	// (0x0000f040) listscroll_cale_week_pane_ParamLimits

0x9bab,	// (0x00017b73) popup_toolbar_window_cp01

0x9bd1,	// (0x00017b99) listscroll_cale_week_pane_t1_ParamLimits

0x1078,	// (0x0000f040) listscroll_cale_day_pane_ParamLimits

0x9bab,	// (0x00017b73) popup_toolbar_window_cp02

0x9fe2,	// (0x00017faa) listscroll_cale_day_pane_t1_ParamLimits

0x1078,	// (0x0000f040) main_cale_month_pane_ParamLimits

0xba07,	// (0x000199cf) popup_toolbar_window_cp03_ParamLimits

0xba07,	// (0x000199cf) popup_toolbar_window_cp03

0x2e75,	// (0x00010e3d) main_image_pane_g2_ParamLimits

0x2e75,	// (0x00010e3d) main_image_pane_g2

0x2e86,	// (0x00010e4e) main_image_pane_g3_ParamLimits

0x2e86,	// (0x00010e4e) main_image_pane_g3

0x0002,

0xf409,	// (0x0001d3d1) main_image_pane_g_ParamLimits

0xf409,	// (0x0001d3d1) main_image_pane_g

0xa994,	// (0x0001895c) main_image_pane_t1_ParamLimits

0x2e97,	// (0x00010e5f) main_image_pane_t2_ParamLimits

0x2e97,	// (0x00010e5f) main_image_pane_t2

0x2ea9,	// (0x00010e71) main_image_pane_t3_ParamLimits

0x2ea9,	// (0x00010e71) main_image_pane_t3

0x2ed1,	// (0x00010e99) main_image_pane_t4_ParamLimits

0x2ed1,	// (0x00010e99) main_image_pane_t4

0x0003,

0xf410,	// (0x0001d3d8) main_image_pane_t_ParamLimits

0xf410,	// (0x0001d3d8) main_image_pane_t

0x2ef1,	// (0x00010eb9) popup_image_details_window_cp01

0x2efb,	// (0x00010ec3) popup_toobar_trans_pane_cp01_ParamLimits

0x2efb,	// (0x00010ec3) popup_toobar_trans_pane_cp01

0x362d,	// (0x000115f5) popup_image_details_window_ParamLimits

0x362d,	// (0x000115f5) popup_image_details_window

0xb9da,	// (0x000199a2) popup_image_focus_window

0xbb0d,	// (0x00019ad5) camera2_autofocus_pane_ParamLimits

0xbb0d,	// (0x00019ad5) camera2_autofocus_pane

0x91f9,	// (0x000171c1) bg_popup_sub_pane_cp06

0xbfd9,	// (0x00019fa1) popup_image_focus_window_g1

0xbfe1,	// (0x00019fa9) popup_image_focus_window_g2

0xbfe9,	// (0x00019fb1) popup_image_focus_window_g3

0xbff1,	// (0x00019fb9) popup_image_focus_window_g4

0x0003,

0xf608,	// (0x0001d5d0) popup_image_focus_window_g

0xbff9,	// (0x00019fc1) popup_image_focus_window_t1

0xc007,	// (0x00019fcf) popup_image_focus_window_t2

0xc017,	// (0x00019fdf) popup_image_focus_window_t3

0x0002,

0xf611,	// (0x0001d5d9) popup_image_focus_window_t

0x995f,	// (0x00017927) camera2_autofocus_pane_g1

0x9268,	// (0x00017230) bg_tb_trans_pane_cp01

0xc025,	// (0x00019fed) popup_image_details_window_g1

0xc038,	// (0x0001a000) popup_image_details_window_g2

0x0002,

0xf623,	// (0x0001d5eb) popup_image_details_window_g

0xc061,	// (0x0001a029) popup_image_details_window_t1

0xc073,	// (0x0001a03b) popup_image_details_window_t2

0xc08c,	// (0x0001a054) popup_image_details_window_t3

0xc0a0,	// (0x0001a068) popup_image_details_window_t4

0xc0bb,	// (0x0001a083) popup_image_details_window_t5

0x0004,

0xf62a,	// (0x0001d5f2) popup_image_details_window_t

0x99ef,	// (0x000179b7) bg_calc_paper_pane_ParamLimits

0x91f9,	// (0x000171c1) grid_highlight_pane_cp013

0x9a03,	// (0x000179cb) list_calc_pane_ParamLimits

0x9a15,	// (0x000179dd) scroll_pane_cp024

0x9a1d,	// (0x000179e5) bg_calc_display_pane_ParamLimits

0x0ec7,	// (0x0000ee8f) calc_display_pane_t1_ParamLimits

0x0ed9,	// (0x0000eea1) calc_display_pane_t2_ParamLimits

0x9a29,	// (0x000179f1) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0001d06c) calc_display_pane_t_ParamLimits

0x0f93,	// (0x0000ef5b) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0001d089) cell_calc_pane_g

0x0f9c,	// (0x0000ef64) cell_calc_pane_t1

0x9a96,	// (0x00017a5e) grid_highlight_pane_cp02_ParamLimits

0x9aac,	// (0x00017a74) toolbar_button_pane_cp01_ParamLimits

0x9aac,	// (0x00017a74) toolbar_button_pane_cp01

0xa9d9,	// (0x000189a1) temp_image_control_pane_ParamLimits

0xa9d9,	// (0x000189a1) temp_image_control_pane

0x9268,	// (0x00017230) main_mp3_pane

0xc0d5,	// (0x0001a09d) temp_image_control_pane_g1_ParamLimits

0xc0d5,	// (0x0001a09d) temp_image_control_pane_g1

0xc0e3,	// (0x0001a0ab) temp_image_control_pane_g2_ParamLimits

0xc0e3,	// (0x0001a0ab) temp_image_control_pane_g2

0xc0f5,	// (0x0001a0bd) temp_image_control_pane_g3_ParamLimits

0xc0f5,	// (0x0001a0bd) temp_image_control_pane_g3

0x3ae6,	// (0x00011aae) temp_image_control_pane_g4_ParamLimits

0x3ae6,	// (0x00011aae) temp_image_control_pane_g4

0x0003,

0xf635,	// (0x0001d5fd) temp_image_control_pane_g_ParamLimits

0xf635,	// (0x0001d5fd) temp_image_control_pane_g

0xc0d5,	// (0x0001a09d) main_mp3_pane_g1

0x3af9,	// (0x00011ac1) main_mp3_pane_g2

0x0007,

0xf63e,	// (0x0001d606) main_mp3_pane_g

0xc12a,	// (0x0001a0f2) main_mp3_pane_t1

0x996d,	// (0x00017935) main_camera_pane_g8_ParamLimits

0x996d,	// (0x00017935) main_camera_pane_g8

0x173e,	// (0x0000f706) main_video_pane_g7_ParamLimits

0x173e,	// (0x0000f706) main_video_pane_g7

0x99c3,	// (0x0001798b) main_camera2_pane_t7_ParamLimits

0x99c3,	// (0x0001798b) main_camera2_pane_t7

0x9d6c,	// (0x00017d34) scroll_pane_cp025_ParamLimits

0x9d6c,	// (0x00017d34) scroll_pane_cp025

0x9d80,	// (0x00017d48) scroll_pane_cp026_ParamLimits

0x9d80,	// (0x00017d48) scroll_pane_cp026

0x9d8f,	// (0x00017d57) wml_content_pane_ParamLimits

0x91f9,	// (0x000171c1) main_touch_calib_pane

0x3bcd,	// (0x00011b95) main_touch_calib_pane_g1

0x3bdf,	// (0x00011ba7) main_touch_calib_pane_g2

0x3bf1,	// (0x00011bb9) main_touch_calib_pane_g3

0x3c03,	// (0x00011bcb) main_touch_calib_pane_g4

0x0003,

0xf65c,	// (0x0001d624) main_touch_calib_pane_g

0x3c15,	// (0x00011bdd) main_touch_calib_pane_t1

0x3c2f,	// (0x00011bf7) main_touch_calib_pane_t2

0x0004,

0xf665,	// (0x0001d62d) main_touch_calib_pane_t

0xa54c,	// (0x00018514) mup_progress_pane_cp02

0xa581,	// (0x00018549) navi_pane_g1

0xa63c,	// (0x00018604) navi_pane_mp_t3

0x9268,	// (0x00017230) main_mp3_pane_ParamLimits

0x37b8,	// (0x00011780) navi_pane_ParamLimits

0xc0d5,	// (0x0001a09d) main_mp3_pane_g1_ParamLimits

0x3af9,	// (0x00011ac1) main_mp3_pane_g2_ParamLimits

0x3b07,	// (0x00011acf) main_mp3_pane_g3_ParamLimits

0x3b07,	// (0x00011acf) main_mp3_pane_g3

0x3b15,	// (0x00011add) main_mp3_pane_g4_ParamLimits

0x3b15,	// (0x00011add) main_mp3_pane_g4

0x995f,	// (0x00017927) main_mp3_pane_g5_ParamLimits

0x995f,	// (0x00017927) main_mp3_pane_g5

0xc105,	// (0x0001a0cd) main_mp3_pane_g6_ParamLimits

0xc105,	// (0x0001a0cd) main_mp3_pane_g6

0xc112,	// (0x0001a0da) main_mp3_pane_g7_ParamLimits

0xc112,	// (0x0001a0da) main_mp3_pane_g7

0xc11e,	// (0x0001a0e6) main_mp3_pane_g8_ParamLimits

0xc11e,	// (0x0001a0e6) main_mp3_pane_g8

0xf63e,	// (0x0001d606) main_mp3_pane_g_ParamLimits

0x3b21,	// (0x00011ae9) main_mp3_pane_t2

0x3b2f,	// (0x00011af7) main_mp3_pane_t3

0xc138,	// (0x0001a100) main_mp3_pane_t4

0xc146,	// (0x0001a10e) main_mp3_pane_t5

0x0005,

0xf64f,	// (0x0001d617) main_mp3_pane_t

0xc154,	// (0x0001a11c) mup_progress_pane_cp01

0x9217,	// (0x000171df) aid_zoom_text_secondary2

0xbf2a,	// (0x00019ef2) list_cale_ev2_pane

0xbf32,	// (0x00019efa) scroll_pane_cp023_ParamLimits

0x3c85,	// (0x00011c4d) field_cale_ev2_pane_ParamLimits

0x3c85,	// (0x00011c4d) field_cale_ev2_pane

0xc15c,	// (0x0001a124) field_cale_ev2_pane_g1_ParamLimits

0xc15c,	// (0x0001a124) field_cale_ev2_pane_g1

0xc168,	// (0x0001a130) field_cale_ev2_pane_g2_ParamLimits

0xc168,	// (0x0001a130) field_cale_ev2_pane_g2

0xc180,	// (0x0001a148) field_cale_ev2_pane_g3_ParamLimits

0xc180,	// (0x0001a148) field_cale_ev2_pane_g3

0x0003,

0xf670,	// (0x0001d638) field_cale_ev2_pane_g_ParamLimits

0xf670,	// (0x0001d638) field_cale_ev2_pane_g

0xc1a4,	// (0x0001a16c) field_cale_ev2_pane_t1_ParamLimits

0xc1a4,	// (0x0001a16c) field_cale_ev2_pane_t1

0xc1bb,	// (0x0001a183) field_cale_ev2_pane_t2_ParamLimits

0xc1bb,	// (0x0001a183) field_cale_ev2_pane_t2

0x0001,

0xf679,	// (0x0001d641) field_cale_ev2_pane_t_ParamLimits

0xf679,	// (0x0001d641) field_cale_ev2_pane_t

0x2d4b,	// (0x00010d13) main_postcard_pane_g5_ParamLimits

0x2d4b,	// (0x00010d13) main_postcard_pane_g5

0x2d61,	// (0x00010d29) main_postcard_pane_g6_ParamLimits

0x2d61,	// (0x00010d29) main_postcard_pane_g6

0x9268,	// (0x00017230) camera2_autofocus_pane_cp_ParamLimits

0x9268,	// (0x00017230) camera2_autofocus_pane_cp

0x9268,	// (0x00017230) main_mup3_pane

0x3cea,	// (0x00011cb2) main_mup3_pane_g1_ParamLimits

0x3cea,	// (0x00011cb2) main_mup3_pane_g1

0x3d3c,	// (0x00011d04) main_mup3_pane_g2_ParamLimits

0x3d3c,	// (0x00011d04) main_mup3_pane_g2

0x3da4,	// (0x00011d6c) main_mup3_pane_g3_ParamLimits

0x3da4,	// (0x00011d6c) main_mup3_pane_g3

0x3e08,	// (0x00011dd0) main_mup3_pane_g4_ParamLimits

0x3e08,	// (0x00011dd0) main_mup3_pane_g4

0x3e6c,	// (0x00011e34) main_mup3_pane_g5_ParamLimits

0x3e6c,	// (0x00011e34) main_mup3_pane_g5

0xe689,	// (0x0001c651) main_mup3_pane_g6_ParamLimits

0xe689,	// (0x0001c651) main_mup3_pane_g6

0x996d,	// (0x00017935) main_mup3_pane_g7_ParamLimits

0x996d,	// (0x00017935) main_mup3_pane_g7

0x0007,

0xf689,	// (0x0001d651) main_mup3_pane_g_ParamLimits

0xf689,	// (0x0001d651) main_mup3_pane_g

0x3f39,	// (0x00011f01) main_mup3_pane_t1_ParamLimits

0x3f39,	// (0x00011f01) main_mup3_pane_t1

0x4027,	// (0x00011fef) main_mup3_pane_t2_ParamLimits

0x4027,	// (0x00011fef) main_mup3_pane_t2

0x4115,	// (0x000120dd) main_mup3_pane_t4_ParamLimits

0x4115,	// (0x000120dd) main_mup3_pane_t4

0x4127,	// (0x000120ef) main_mup3_pane_t5_ParamLimits

0x4127,	// (0x000120ef) main_mup3_pane_t5

0x41f9,	// (0x000121c1) main_mup3_pane_t6_ParamLimits

0x41f9,	// (0x000121c1) main_mup3_pane_t6

0x0005,

0xf69a,	// (0x0001d662) main_mup3_pane_t_ParamLimits

0xf69a,	// (0x0001d662) main_mup3_pane_t

0x42a1,	// (0x00012269) mup3_progress_pane_ParamLimits

0x42a1,	// (0x00012269) mup3_progress_pane

0x4309,	// (0x000122d1) popup_mup3_control_window_ParamLimits

0x4309,	// (0x000122d1) popup_mup3_control_window

0xc1d0,	// (0x0001a198) popup_mup3_text_window

0x4321,	// (0x000122e9) mup3_progress_pane_t1

0x4340,	// (0x00012308) mup3_progress_pane_t2

0xc1d8,	// (0x0001a1a0) mup3_progress_pane_t3

0x0002,

0xf6a7,	// (0x0001d66f) mup3_progress_pane_t

0xc1f5,	// (0x0001a1bd) mup_progress_pane_cp03

0xc205,	// (0x0001a1cd) bg_tb_trans_pane_cp04

0xc205,	// (0x0001a1cd) mup3_volume_pane

0xc20d,	// (0x0001a1d5) popup_mup3_control_window_g1

0xc20d,	// (0x0001a1d5) mup3_volume_pane_g1

0xc20d,	// (0x0001a1d5) mup3_volume_pane_g2

0xc20d,	// (0x0001a1d5) mup3_volume_pane_g3

0x0002,

0xf6ae,	// (0x0001d676) mup3_volume_pane_g

0x91f9,	// (0x000171c1) bg_tb_trans_pane_cp03

0xc215,	// (0x0001a1dd) popup_mup3_text_window_g1

0xc21d,	// (0x0001a1e5) popup_mup3_text_window_t1

0x9a77,	// (0x00017a3f) list_calc_item_pane_g1_ParamLimits

0xbc24,	// (0x00019bec) mup_volume_pane_cp_g1

0x3c49,	// (0x00011c11) main_touch_calib_pane_t3

0x3c5d,	// (0x00011c25) main_touch_calib_pane_t4

0x3c71,	// (0x00011c39) main_touch_calib_pane_t5

0x9203,	// (0x000171cb) aid_cell_size_toolbar2

0x920b,	// (0x000171d3) aid_popup3_width_pane

0x9217,	// (0x000171df) aid_zoom_text_msg_primary

0x1619,	// (0x0000f5e1) vorec_t7

0x9a3b,	// (0x00017a03) bg_calc_paper_pane_g1_ParamLimits

0x9a47,	// (0x00017a0f) bg_calc_paper_pane_g2_ParamLimits

0x9a53,	// (0x00017a1b) bg_calc_paper_pane_g3_ParamLimits

0x9a5f,	// (0x00017a27) bg_calc_paper_pane_g4_ParamLimits

0x9a6b,	// (0x00017a33) bg_calc_paper_pane_g5_ParamLimits

0x0f20,	// (0x0000eee8) bg_calc_paper_pane_g6_ParamLimits

0x0f2f,	// (0x0000eef7) bg_calc_paper_pane_g7_ParamLimits

0x0f3e,	// (0x0000ef06) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0001d073) bg_calc_paper_pane_g_ParamLimits

0x0f51,	// (0x0000ef19) calc_bg_paper_pane_g9_ParamLimits

0x9268,	// (0x00017230) image_qvga_pane_ParamLimits

0x9268,	// (0x00017230) image_qvga_pane

0x98e4,	// (0x000178ac) bg_popup_sub_pane_cp04_ParamLimits

0xa910,	// (0x000188d8) popup_mup_playback_window_g1_ParamLimits

0xa91c,	// (0x000188e4) popup_mup_playback_window_t1_ParamLimits

0xa931,	// (0x000188f9) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x0001d3cc) popup_mup_playback_window_t_ParamLimits

0x996d,	// (0x00017935) main_mup2_pane_g3_ParamLimits

0x996d,	// (0x00017935) main_mup2_pane_g3

0x18f9,	// (0x0000f8c1) popup_toolbar_window_cp04

0xacb5,	// (0x00018c7d) popup_call2_audio_second_window_g3_ParamLimits

0xacb5,	// (0x00018c7d) popup_call2_audio_second_window_g3

0xb0cd,	// (0x00019095) popup_call2_audio_first_window_g4_ParamLimits

0xb0cd,	// (0x00019095) popup_call2_audio_first_window_g4

0xb6f4,	// (0x000196bc) popup_call2_audio_in_window_g4_ParamLimits

0xb6f4,	// (0x000196bc) popup_call2_audio_in_window_g4

0x2e57,	// (0x00010e1f) aid_area_sk_bg_cut_ParamLimits

0x2e57,	// (0x00010e1f) aid_area_sk_bg_cut

0xa946,	// (0x0001890e) aid_area_sk_bg_cut_2_ParamLimits

0xa946,	// (0x0001890e) aid_area_sk_bg_cut_2

0x91f9,	// (0x000171c1) aid_placing_details_win

0x91f9,	// (0x000171c1) aid_placing_details_win_2

0x995f,	// (0x00017927) camera2_autofocus_pane_g1_ParamLimits

0x0d0d,	// (0x0000ecd5) popup_fixed_preview_cale_window_ParamLimits

0x0d0d,	// (0x0000ecd5) popup_fixed_preview_cale_window

0xa6c3,	// (0x0001868b) navi_slider_pane_g3

0xa6cc,	// (0x00018694) navi_slider_pane_g4

0xa6d5,	// (0x0001869d) navi_slider_pane_g5

0xa6c3,	// (0x0001868b) navi_slider_pane_g6

0xa6de,	// (0x000186a6) navi_slider_pane_g7

0xa80c,	// (0x000187d4) mup_scale_pane_g3

0xa815,	// (0x000187dd) mup_scale_pane_g4

0xa81e,	// (0x000187e6) mup_scale_pane_g5

0x2b00,	// (0x00010ac8) mup_scale_pane_g6

0x2b09,	// (0x00010ad1) mup_scale_pane_g7

0x99a5,	// (0x0001796d) cams2_slider_pane_g3

0x99a5,	// (0x0001796d) cams2_slider_pane_g4

0x99a5,	// (0x0001796d) cams2_slider_pane_g5

0x99a5,	// (0x0001796d) cams2_slider_pane_g6

0x99a5,	// (0x0001796d) cams2_slider_pane_g7

0x99a5,	// (0x0001796d) camera2_autofocus_pane_cp_g1

0xb9bc,	// (0x00019984) bg_popup_preview_window_pane_cp02_ParamLimits

0xb9bc,	// (0x00019984) bg_popup_preview_window_pane_cp02

0xc22b,	// (0x0001a1f3) list_fp_cale_pane_ParamLimits

0xc22b,	// (0x0001a1f3) list_fp_cale_pane

0xc237,	// (0x0001a1ff) popup_fixed_preview_cale_window_t1_ParamLimits

0xc237,	// (0x0001a1ff) popup_fixed_preview_cale_window_t1

0x435f,	// (0x00012327) popup_fixed_preview_cale_window_t2_ParamLimits

0x435f,	// (0x00012327) popup_fixed_preview_cale_window_t2

0x4374,	// (0x0001233c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4374,	// (0x0001233c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b5,	// (0x0001d67d) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b5,	// (0x0001d67d) popup_fixed_preview_cale_window_t

0x4389,	// (0x00012351) list_single_fp_cale_pane_ParamLimits

0x4389,	// (0x00012351) list_single_fp_cale_pane

0xc255,	// (0x0001a21d) list_single_fp_cale_pane_g1_ParamLimits

0xc255,	// (0x0001a21d) list_single_fp_cale_pane_g1

0xc261,	// (0x0001a229) list_single_fp_cale_pane_g2_ParamLimits

0xc261,	// (0x0001a229) list_single_fp_cale_pane_g2

0x0002,

0xf6bc,	// (0x0001d684) list_single_fp_cale_pane_g_ParamLimits

0xf6bc,	// (0x0001d684) list_single_fp_cale_pane_g

0xc27a,	// (0x0001a242) list_single_fp_cale_pane_t1_ParamLimits

0xc27a,	// (0x0001a242) list_single_fp_cale_pane_t1

0xc28c,	// (0x0001a254) list_single_fp_cale_pane_t2_ParamLimits

0xc28c,	// (0x0001a254) list_single_fp_cale_pane_t2

0x0001,

0xf6c3,	// (0x0001d68b) list_single_fp_cale_pane_t_ParamLimits

0xf6c3,	// (0x0001d68b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x91f9,	// (0x000171c1) main_dialer_pane

0x91f9,	// (0x000171c1) aid_cell_size_keypad

0x91f9,	// (0x000171c1) dialer_ne_pane

0x91f9,	// (0x000171c1) grid_dialer_command_1_pane

0x91f9,	// (0x000171c1) grid_dialer_command_2_pane

0x91f9,	// (0x000171c1) grid_dialer_keypad_pane

0x439f,	// (0x00012367) bg_popup_call_pane_cp06_ParamLimits

0x439f,	// (0x00012367) bg_popup_call_pane_cp06

0x439f,	// (0x00012367) dialer_ne_clear_pane_ParamLimits

0x439f,	// (0x00012367) dialer_ne_clear_pane

0x99a5,	// (0x0001796d) dialer_ne_pane_g1

0x99c3,	// (0x0001798b) dialer_ne_pane_t1_ParamLimits

0x99c3,	// (0x0001798b) dialer_ne_pane_t1

0x43ad,	// (0x00012375) dialer_ne_pane_t2_ParamLimits

0x43ad,	// (0x00012375) dialer_ne_pane_t2

0x43d5,	// (0x0001239d) dialer_ne_pane_t3_ParamLimits

0x43d5,	// (0x0001239d) dialer_ne_pane_t3

0x0002,

0xf6c8,	// (0x0001d690) dialer_ne_pane_t_ParamLimits

0xf6c8,	// (0x0001d690) dialer_ne_pane_t

0x43d5,	// (0x0001239d) dialer_ne_pane_t3_copy1_ParamLimits

0x43d5,	// (0x0001239d) dialer_ne_pane_t3_copy1

0xc2bf,	// (0x0001a287) cell_dialer_keypad_pane_ParamLimits

0xc2bf,	// (0x0001a287) cell_dialer_keypad_pane

0x9268,	// (0x00017230) cell_dialer_command_1_pane_ParamLimits

0x9268,	// (0x00017230) cell_dialer_command_1_pane

0xc2d6,	// (0x0001a29e) cell_dialer_command_2_pane_ParamLimits

0xc2d6,	// (0x0001a29e) cell_dialer_command_2_pane

0x9268,	// (0x00017230) bg_button_pane_cp02_ParamLimits

0x9268,	// (0x00017230) bg_button_pane_cp02

0x995f,	// (0x00017927) cell_dialer_keypad_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_dialer_keypad_pane_g1

0x9268,	// (0x00017230) bg_button_pane_cp03_ParamLimits

0x9268,	// (0x00017230) bg_button_pane_cp03

0x995f,	// (0x00017927) cell_dialer_command_1_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_dialer_command_1_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp04

0x99a5,	// (0x0001796d) cell_dialer_command_2_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp06

0x99a5,	// (0x0001796d) dialer_ne_clear_pane_g1

0xa58d,	// (0x00018555) navi_pane_g2

0xa5bb,	// (0x00018583) navi_pane_g3

0x0002,

0xf30c,	// (0x0001d2d4) navi_pane_g

0xa64a,	// (0x00018612) navi_pane_mv_g2

0xa671,	// (0x00018639) navi_pane_mv_g5

0x28e3,	// (0x000108ab) navi_pane_mv_t1

0x9a1d,	// (0x000179e5) main_clock2_pane

0x9268,	// (0x00017230) main_clock2_list_pane_ParamLimits

0x9268,	// (0x00017230) main_clock2_list_pane

0x446b,	// (0x00012433) main_clock2_pane_t1_ParamLimits

0x446b,	// (0x00012433) main_clock2_pane_t1

0x44a6,	// (0x0001246e) main_clock2_pane_t2_ParamLimits

0x44a6,	// (0x0001246e) main_clock2_pane_t2

0x0004,

0xf6d4,	// (0x0001d69c) main_clock2_pane_t_ParamLimits

0xf6d4,	// (0x0001d69c) main_clock2_pane_t

0x4546,	// (0x0001250e) popup_clock_analogue_window_cp03_ParamLimits

0x4546,	// (0x0001250e) popup_clock_analogue_window_cp03

0x456b,	// (0x00012533) popup_clock_digital_window_cp02_ParamLimits

0x456b,	// (0x00012533) popup_clock_digital_window_cp02

0x45e4,	// (0x000125ac) main_clock2_list_single_pane_ParamLimits

0x45e4,	// (0x000125ac) main_clock2_list_single_pane

0x9c52,	// (0x00017c1a) list_highlight_pane_cp05

0xc319,	// (0x0001a2e1) main_clock2_list_single_pane_t1

0x18f9,	// (0x0000f8c1) popup_toolbar_window_cp04_ParamLimits

0x996d,	// (0x00017935) camera2_autofocus_pane_g2_ParamLimits

0x996d,	// (0x00017935) camera2_autofocus_pane_g2

0x996d,	// (0x00017935) camera2_autofocus_pane_g3_ParamLimits

0x996d,	// (0x00017935) camera2_autofocus_pane_g3

0x996d,	// (0x00017935) camera2_autofocus_pane_g4_ParamLimits

0x996d,	// (0x00017935) camera2_autofocus_pane_g4

0x996d,	// (0x00017935) camera2_autofocus_pane_g5_ParamLimits

0x996d,	// (0x00017935) camera2_autofocus_pane_g5

0x0004,

0xf618,	// (0x0001d5e0) camera2_autofocus_pane_g_ParamLimits

0xf618,	// (0x0001d5e0) camera2_autofocus_pane_g

0x3ca6,	// (0x00011c6e) camera2_autofocus_pane_cp_g2

0x3cae,	// (0x00011c76) camera2_autofocus_pane_cp_g3

0x3cb6,	// (0x00011c7e) camera2_autofocus_pane_cp_g4

0x3cbe,	// (0x00011c86) camera2_autofocus_pane_cp_g5

0x0004,

0xf67e,	// (0x0001d646) camera2_autofocus_pane_cp_g

0x91f9,	// (0x000171c1) popup_dialer_spcha_window

0x91f9,	// (0x000171c1) bg_popup_sub_pane_cp07

0x91f9,	// (0x000171c1) list_spcha_pane

0xc327,	// (0x0001a2ef) list_single_spcha_pane_ParamLimits

0xc327,	// (0x0001a2ef) list_single_spcha_pane

0x91f9,	// (0x000171c1) list_highlight_pane_cp06

0xa17f,	// (0x00018147) list_single_spcha_pane_t1

0xb49e,	// (0x00019466) popup_call2_audio_out_window_g4_ParamLimits

0xb49e,	// (0x00019466) popup_call2_audio_out_window_g4

0x91f9,	// (0x000171c1) main_imed2_pane

0xb9e2,	// (0x000199aa) popup_imed_adjust2_window

0x3645,	// (0x0001160d) popup_imed_trans_window_ParamLimits

0x3645,	// (0x0001160d) popup_imed_trans_window

0xbcf9,	// (0x00019cc1) popup_blid_sat_info2_window_t1

0xbd07,	// (0x00019ccf) popup_blid_sat_info2_window_t2

0x000a,

0xf5ad,	// (0x0001d575) popup_blid_sat_info2_window_t

0x4695,	// (0x0001265d) aid_size_cell_colour_35

0x46b5,	// (0x0001267d) aid_size_cell_colour_112

0x46d5,	// (0x0001269d) aid_size_cell_effect

0xa79c,	// (0x00018764) bg_tb_trans_pane_cp02

0x46f5,	// (0x000126bd) heading_imed_pane

0x4701,	// (0x000126c9) listscroll_imed_pane

0xc339,	// (0x0001a301) heading_imed_pane_g1

0xc341,	// (0x0001a309) heading_imed_pane_t1

0xc34f,	// (0x0001a317) grid_imed_colour_35_pane_ParamLimits

0xc34f,	// (0x0001a317) grid_imed_colour_35_pane

0x470d,	// (0x000126d5) grid_imed_effect_pane

0xc367,	// (0x0001a32f) list_imed_aspect_pane

0x4723,	// (0x000126eb) scroll_pane_cp027_ParamLimits

0x4723,	// (0x000126eb) scroll_pane_cp027

0x4734,	// (0x000126fc) cell_imed_effect_pane_ParamLimits

0x4734,	// (0x000126fc) cell_imed_effect_pane

0xc36f,	// (0x0001a337) cell_imed_colour_pane_ParamLimits

0xc36f,	// (0x0001a337) cell_imed_colour_pane

0xc3b1,	// (0x0001a379) cell_imed_colour_pane_g1_ParamLimits

0xc3b1,	// (0x0001a379) cell_imed_colour_pane_g1

0xc3c2,	// (0x0001a38a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc3c2,	// (0x0001a38a) hgihlgiht_grid_pane_cp016

0x475b,	// (0x00012723) cell_imed_effect_pane_g1

0x4763,	// (0x0001272b) grid_highlight_pane_cp017

0xc3d3,	// (0x0001a39b) list_imed_single_pane_ParamLimits

0xc3d3,	// (0x0001a39b) list_imed_single_pane

0x91f9,	// (0x000171c1) list_highlight_pane_cp07

0xc3e8,	// (0x0001a3b0) list_imed_aspect_pane_comp1_t1

0xa79c,	// (0x00018764) bg_tb_trans_pane_cp05

0xc40a,	// (0x0001a3d2) popup_imed_adjust2_window_g1

0xc431,	// (0x0001a3f9) popup_imed_adjust2_window_t1

0xc449,	// (0x0001a411) slider_imed_adjust_pane

0xc45d,	// (0x0001a425) slider_imed_adjust_pane_g1

0xc46d,	// (0x0001a435) slider_imed_adjust_pane_g2

0xc47d,	// (0x0001a445) slider_imed_adjust_pane_g3

0xc48e,	// (0x0001a456) slider_imed_adjust_pane_g4

0x0003,

0xf6f1,	// (0x0001d6b9) slider_imed_adjust_pane_g

0x476c,	// (0x00012734) aid_size_cell_clipart2

0x4778,	// (0x00012740) grid_imed_clipart_pane

0xa82f,	// (0x000187f7) scroll_pane_cp031

0x4782,	// (0x0001274a) cell_imed_clipart_pane_ParamLimits

0x4782,	// (0x0001274a) cell_imed_clipart_pane

0x47a4,	// (0x0001276c) cell_imed_clipart_pane_g1

0x91f9,	// (0x000171c1) grid_highlight_pane_cp014

0x4447,	// (0x0001240f) main_clock2_pane_g1_ParamLimits

0x4447,	// (0x0001240f) main_clock2_pane_g1

0x458b,	// (0x00012553) aid_call2_pane_cp10

0x459d,	// (0x00012565) aid_call_pane_cp10

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g1

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g2

0x45af,	// (0x00012577) popup_clock_analogue_window_cp10_g3

0x45af,	// (0x00012577) popup_clock_analogue_window_cp10_g4

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6df,	// (0x0001d6a7) popup_clock_analogue_window_cp10_g

0x45c5,	// (0x0001258d) popup_clock_analogue_window_cp10_t1

0x45f6,	// (0x000125be) clock_digital_number_pane_cp10_ParamLimits

0x45f6,	// (0x000125be) clock_digital_number_pane_cp10

0x460e,	// (0x000125d6) clock_digital_number_pane_cp11_ParamLimits

0x460e,	// (0x000125d6) clock_digital_number_pane_cp11

0x4626,	// (0x000125ee) clock_digital_number_pane_cp12_ParamLimits

0x4626,	// (0x000125ee) clock_digital_number_pane_cp12

0x4640,	// (0x00012608) clock_digital_number_pane_cp13_ParamLimits

0x4640,	// (0x00012608) clock_digital_number_pane_cp13

0x465a,	// (0x00012622) clock_digital_separator_pane_cp10_ParamLimits

0x465a,	// (0x00012622) clock_digital_separator_pane_cp10

0x4674,	// (0x0001263c) popup_clock_digital_window_cp02_t1_ParamLimits

0x4674,	// (0x0001263c) popup_clock_digital_window_cp02_t1

0x98dc,	// (0x000178a4) clock_digital_number_pane_cp10_g1

0x98dc,	// (0x000178a4) clock_digital_number_pane_cp10_g2

0x0001,

0xf6fa,	// (0x0001d6c2) clock_digital_number_pane_cp10_g

0x98dc,	// (0x000178a4) clock_digital_separator_pane_cp10_g1

0x98dc,	// (0x000178a4) clock_digital_separator_pane_g2_cp10

0xa679,	// (0x00018641) navi_pane_vded_g4

0xa682,	// (0x0001864a) navi_pane_vded_g5

0xa68b,	// (0x00018653) navi_pane_vded_t1

0x91f9,	// (0x000171c1) main_vded_pane

0x47ad,	// (0x00012775) main_vded_pane_g1

0x47b7,	// (0x0001277f) main_vded_pane_g2

0x47c1,	// (0x00012789) main_vded_pane_g3

0x0002,

0xf6ff,	// (0x0001d6c7) main_vded_pane_g

0x47cb,	// (0x00012793) main_vded_pane_t1

0x47d9,	// (0x000127a1) main_vded_pane_t2

0x0001,

0xf706,	// (0x0001d6ce) main_vded_pane_t

0x47e7,	// (0x000127af) vded_slider_pane

0x47ef,	// (0x000127b7) vded_video_pane

0xc49f,	// (0x0001a467) vded_video_pane_g1

0x47f7,	// (0x000127bf) vded_video_pane_g2

0x99a5,	// (0x0001796d) vded_video_pane_g3

0x0002,

0xf70b,	// (0x0001d6d3) vded_video_pane_g

0xc4a9,	// (0x0001a471) vded_slider_pane_g1

0xbc24,	// (0x00019bec) vded_slider_pane_g2

0xc4b2,	// (0x0001a47a) vded_slider_pane_g3

0xc4bb,	// (0x0001a483) vded_slider_pane_g4

0xc4c4,	// (0x0001a48c) vded_slider_pane_g5

0x0004,

0xf712,	// (0x0001d6da) vded_slider_pane_g

0xe695,	// (0x0001c65d) mup3_rocker_pane_ParamLimits

0xe695,	// (0x0001c65d) mup3_rocker_pane

0xc20d,	// (0x0001a1d5) mup3_control_keys_pane_g1

0xc4cd,	// (0x0001a495) mup3_control_keys_pane_g2

0xc20d,	// (0x0001a1d5) mup3_control_keys_pane_g3

0xc4d5,	// (0x0001a49d) mup3_control_keys_pane_g4

0x0003,

0xf71d,	// (0x0001d6e5) mup3_control_keys_pane_g

0x0d44,	// (0x0000ed0c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0d44,	// (0x0000ed0c) popup_toolbar2_fixed_window_cp01

0xe695,	// (0x0001c65d) popup_toolbar2_fixed_window_cp02_ParamLimits

0xe695,	// (0x0001c65d) popup_toolbar2_fixed_window_cp02

0xae27,	// (0x00018def) popup_call2_audio_second_window_t4_ParamLimits

0xae27,	// (0x00018def) popup_call2_audio_second_window_t4

0xb363,	// (0x0001932b) popup_call2_audio_first_window_t6_ParamLimits

0xb363,	// (0x0001932b) popup_call2_audio_first_window_t6

0xb5a1,	// (0x00019569) popup_call2_audio_out_window_t6_ParamLimits

0xb5a1,	// (0x00019569) popup_call2_audio_out_window_t6

0x91f9,	// (0x000171c1) main_vitu_pane

0x9268,	// (0x00017230) aid_size_cell_itu_ParamLimits

0x9268,	// (0x00017230) aid_size_cell_itu

0x9268,	// (0x00017230) bg_popup_window_pane_cp08_ParamLimits

0x9268,	// (0x00017230) bg_popup_window_pane_cp08

0x9268,	// (0x00017230) field_vitu_entry_pane_ParamLimits

0x9268,	// (0x00017230) field_vitu_entry_pane

0x9268,	// (0x00017230) grid_vitu_function_pane_ParamLimits

0x9268,	// (0x00017230) grid_vitu_function_pane

0x9268,	// (0x00017230) grid_vitu_itu_pane_ParamLimits

0x9268,	// (0x00017230) grid_vitu_itu_pane

0x9268,	// (0x00017230) cell_vitu_itu_pane_ParamLimits

0x9268,	// (0x00017230) cell_vitu_itu_pane

0x9268,	// (0x00017230) cell_vitu_function_pane_ParamLimits

0x9268,	// (0x00017230) cell_vitu_function_pane

0x9268,	// (0x00017230) bg_popup_sub_pane_cp08_ParamLimits

0x9268,	// (0x00017230) bg_popup_sub_pane_cp08

0x99af,	// (0x00017977) field_vitu_entry_pane_t1_ParamLimits

0x99af,	// (0x00017977) field_vitu_entry_pane_t1

0xc4dd,	// (0x0001a4a5) field_vitu_entry_pane_t2_ParamLimits

0xc4dd,	// (0x0001a4a5) field_vitu_entry_pane_t2

0x0001,

0xf726,	// (0x0001d6ee) field_vitu_entry_pane_t_ParamLimits

0xf726,	// (0x0001d6ee) field_vitu_entry_pane_t

0xbb4b,	// (0x00019b13) bg_button_pane_cp05_ParamLimits

0xbb4b,	// (0x00019b13) bg_button_pane_cp05

0xc4fa,	// (0x0001a4c2) cell_vitu_itu_pane_g1

0xa788,	// (0x00018750) cell_vitu_itu_pane_t1_ParamLimits

0xa788,	// (0x00018750) cell_vitu_itu_pane_t1

0xa788,	// (0x00018750) cell_vitu_itu_pane_t2_ParamLimits

0xa788,	// (0x00018750) cell_vitu_itu_pane_t2

0x0002,

0xf72b,	// (0x0001d6f3) cell_vitu_itu_pane_t_ParamLimits

0xf72b,	// (0x0001d6f3) cell_vitu_itu_pane_t

0x91f9,	// (0x000171c1) bg_button_pane_cp07

0x99a5,	// (0x0001796d) cell_vitu_function_pane_g1

0x999d,	// (0x00017965) main_calc_pane_g1

0x0b6c,	// (0x0000eb34) aid_visual_content_pane

0x91f9,	// (0x000171c1) main_vradio_pane

0x995f,	// (0x00017927) main_vradio_pane_g1_ParamLimits

0x995f,	// (0x00017927) main_vradio_pane_g1

0x996d,	// (0x00017935) main_vradio_pane_g2_ParamLimits

0x996d,	// (0x00017935) main_vradio_pane_g2

0x0001,

0xf732,	// (0x0001d6fa) main_vradio_pane_g_ParamLimits

0xf732,	// (0x0001d6fa) main_vradio_pane_g

0x99af,	// (0x00017977) main_vradio_pane_t1_ParamLimits

0x99af,	// (0x00017977) main_vradio_pane_t1

0x99af,	// (0x00017977) main_vradio_pane_t2_ParamLimits

0x99af,	// (0x00017977) main_vradio_pane_t2

0x99c3,	// (0x0001798b) main_vradio_pane_t3_ParamLimits

0x99c3,	// (0x0001798b) main_vradio_pane_t3

0x0002,

0xf737,	// (0x0001d6ff) main_vradio_pane_t_ParamLimits

0xf737,	// (0x0001d6ff) main_vradio_pane_t

0x9268,	// (0x00017230) vradio_rocker_control_pane_ParamLimits

0x9268,	// (0x00017230) vradio_rocker_control_pane

0x9268,	// (0x00017230) vradio_station_info_pane_ParamLimits

0x9268,	// (0x00017230) vradio_station_info_pane

0x9268,	// (0x00017230) vradio_frequency_info_pane_ParamLimits

0x9268,	// (0x00017230) vradio_frequency_info_pane

0x99a5,	// (0x0001796d) vradio_station_info_pane_g1

0xa788,	// (0x00018750) vradio_station_info_pane_t1_ParamLimits

0xa788,	// (0x00018750) vradio_station_info_pane_t1

0x99c3,	// (0x0001798b) vradio_station_info_pane_t2_ParamLimits

0x99c3,	// (0x0001798b) vradio_station_info_pane_t2

0x0001,

0xf73e,	// (0x0001d706) vradio_station_info_pane_t_ParamLimits

0xf73e,	// (0x0001d706) vradio_station_info_pane_t

0x91f9,	// (0x000171c1) vradio_tuning_pane

0x4800,	// (0x000127c8) vradio_rocker_control_pane_g1

0xc516,	// (0x0001a4de) vradio_rocker_control_pane_g2

0x480a,	// (0x000127d2) vradio_rocker_control_pane_g3

0x4814,	// (0x000127dc) vradio_rocker_control_pane_g4

0x481e,	// (0x000127e6) vradio_rocker_control_pane_g5

0x0004,

0xf743,	// (0x0001d70b) vradio_rocker_control_pane_g

0x99a5,	// (0x0001796d) vradio_frequency_info_pane_g1

0x99af,	// (0x00017977) vradio_frequency_info_pane_t1_ParamLimits

0x99af,	// (0x00017977) vradio_frequency_info_pane_t1

0x4828,	// (0x000127f0) vradio_tuning_pane_g1

0x4833,	// (0x000127fb) vradio_tuning_pane_t1

0x9227,	// (0x000171ef) area_side_right_pane_ParamLimits

0x9227,	// (0x000171ef) area_side_right_pane

0xb983,	// (0x0001994b) status_small_pane_g1

0xb98b,	// (0x00019953) status_small_pane_g2

0xb994,	// (0x0001995c) status_small_pane_g3

0xb99d,	// (0x00019965) status_small_pane_g4

0x0003,

0xf50f,	// (0x0001d4d7) status_small_pane_g

0xb9a6,	// (0x0001996e) status_small_pane_t1

0x91f9,	// (0x000171c1) main_video3_pane

0x91f9,	// (0x000171c1) cams_zoom_vslider_pane

0xc51e,	// (0x0001a4e6) image3_wide_pane_ParamLimits

0xc51e,	// (0x0001a4e6) image3_wide_pane

0x91f9,	// (0x000171c1) image3_wide_small_pane

0xc538,	// (0x0001a500) main_video3_pane_g1_ParamLimits

0xc538,	// (0x0001a500) main_video3_pane_g1

0xc538,	// (0x0001a500) main_video3_pane_g2_ParamLimits

0xc538,	// (0x0001a500) main_video3_pane_g2

0x0001,

0xf74e,	// (0x0001d716) main_video3_pane_g_ParamLimits

0xf74e,	// (0x0001d716) main_video3_pane_g

0xc556,	// (0x0001a51e) main_video3_pane_t1_ParamLimits

0xc556,	// (0x0001a51e) main_video3_pane_t1

0xc556,	// (0x0001a51e) main_video3_pane_t2_ParamLimits

0xc556,	// (0x0001a51e) main_video3_pane_t2

0xc556,	// (0x0001a51e) main_video3_pane_t3_ParamLimits

0xc556,	// (0x0001a51e) main_video3_pane_t3

0x0002,

0xf753,	// (0x0001d71b) main_video3_pane_t_ParamLimits

0xf753,	// (0x0001d71b) main_video3_pane_t

0x99a5,	// (0x0001796d) cams_zoom_vslider_pane_g1

0x99a5,	// (0x0001796d) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0001d054) cams_zoom_vslider_pane_g

0x91f9,	// (0x000171c1) small_slider_vertical_pane

0x99a5,	// (0x0001796d) small_slider_vertical_pane_g1

0x99a5,	// (0x0001796d) small_slider_vertical_pane_g2

0xc57d,	// (0x0001a545) small_slider_vertical_pane_g3

0x0002,

0xf75a,	// (0x0001d722) small_slider_vertical_pane_g

0x91f9,	// (0x000171c1) main_hwr_training_pane

0xc586,	// (0x0001a54e) hwr_training_instruct_pane_ParamLimits

0xc586,	// (0x0001a54e) hwr_training_instruct_pane

0x4842,	// (0x0001280a) hwr_training_navi_pane_ParamLimits

0x4842,	// (0x0001280a) hwr_training_navi_pane

0x4861,	// (0x00012829) hwr_training_write_pane_ParamLimits

0x4861,	// (0x00012829) hwr_training_write_pane

0x91f9,	// (0x000171c1) bg_frame_shadow_pane

0xc5bd,	// (0x0001a585) hwr_training_write_pane_g1

0xc5c5,	// (0x0001a58d) hwr_training_write_pane_g2

0xc5cd,	// (0x0001a595) hwr_training_write_pane_g3

0xc5d5,	// (0x0001a59d) hwr_training_write_pane_g4

0xc5dd,	// (0x0001a5a5) hwr_training_write_pane_g5

0xc5e5,	// (0x0001a5ad) hwr_training_write_pane_g6

0xc5ed,	// (0x0001a5b5) hwr_training_write_pane_g7

0x0006,

0xf761,	// (0x0001d729) hwr_training_write_pane_g

0xc5f5,	// (0x0001a5bd) hwr_training_navi_pane_g1_ParamLimits

0xc5f5,	// (0x0001a5bd) hwr_training_navi_pane_g1

0xc607,	// (0x0001a5cf) hwr_training_navi_pane_g2_ParamLimits

0xc607,	// (0x0001a5cf) hwr_training_navi_pane_g2

0xc619,	// (0x0001a5e1) hwr_training_navi_pane_g3_ParamLimits

0xc619,	// (0x0001a5e1) hwr_training_navi_pane_g3

0xc629,	// (0x0001a5f1) hwr_training_navi_pane_g4_ParamLimits

0xc629,	// (0x0001a5f1) hwr_training_navi_pane_g4

0x0004,

0xf770,	// (0x0001d738) hwr_training_navi_pane_g_ParamLimits

0xf770,	// (0x0001d738) hwr_training_navi_pane_g

0xc636,	// (0x0001a5fe) hwr_training_navi_pane_t1

0x48ab,	// (0x00012873) list_single_hwr_training_instruct_pane_ParamLimits

0x48ab,	// (0x00012873) list_single_hwr_training_instruct_pane

0xc644,	// (0x0001a60c) list_single_hwr_training_instruct_pane_t1

0xbdfa,	// (0x00019dc2) bg_frame_shadow_pane_g1

0xc653,	// (0x0001a61b) bg_frame_shadow_pane_g2

0xc65b,	// (0x0001a623) bg_frame_shadow_pane_g3

0xc663,	// (0x0001a62b) bg_frame_shadow_pane_g4

0xc66b,	// (0x0001a633) bg_frame_shadow_pane_g5

0xc673,	// (0x0001a63b) bg_frame_shadow_pane_g6

0xc67b,	// (0x0001a643) bg_frame_shadow_pane_g7

0x9af9,	// (0x00017ac1) bg_frame_shadow_pane_g8

0x0007,

0xf77b,	// (0x0001d743) bg_frame_shadow_pane_g

0x91f9,	// (0x000171c1) main_video_tele_dialer_pane

0x48c1,	// (0x00012889) aid_size_cell_video_keypad_ParamLimits

0x48c1,	// (0x00012889) aid_size_cell_video_keypad

0x48db,	// (0x000128a3) grid_video_dialer_keypad_pane_ParamLimits

0x48db,	// (0x000128a3) grid_video_dialer_keypad_pane

0x4929,	// (0x000128f1) video_down_pane_cp_ParamLimits

0x4929,	// (0x000128f1) video_down_pane_cp

0x495b,	// (0x00012923) cell_video_dialer_keypad_pane_ParamLimits

0x495b,	// (0x00012923) cell_video_dialer_keypad_pane

0xc683,	// (0x0001a64b) bg_button_pane_cp08_ParamLimits

0xc683,	// (0x0001a64b) bg_button_pane_cp08

0x497d,	// (0x00012945) cell_video_dialer_keypad_pane_g1_ParamLimits

0x497d,	// (0x00012945) cell_video_dialer_keypad_pane_g1

0xe695,	// (0x0001c65d) mup3_rocker2_pane_ParamLimits

0xe695,	// (0x0001c65d) mup3_rocker2_pane

0x99a5,	// (0x0001796d) mup3_rocker2_pane_g1

0x3534,	// (0x000114fc) main_dialer2_pane

0x91f9,	// (0x000171c1) main_mp4_pane

0xc6ad,	// (0x0001a675) main_mp4_pane_g1_ParamLimits

0xc6ad,	// (0x0001a675) main_mp4_pane_g1

0xc6ad,	// (0x0001a675) main_mp4_pane_g2_ParamLimits

0xc6ad,	// (0x0001a675) main_mp4_pane_g2

0x49b7,	// (0x0001297f) main_mp4_pane_g3_ParamLimits

0x49b7,	// (0x0001297f) main_mp4_pane_g3

0xc6cb,	// (0x0001a693) main_mp4_pane_g4_ParamLimits

0xc6cb,	// (0x0001a693) main_mp4_pane_g4

0xc6f3,	// (0x0001a6bb) main_mp4_pane_g5_ParamLimits

0xc6f3,	// (0x0001a6bb) main_mp4_pane_g5

0x0007,

0xf79b,	// (0x0001d763) main_mp4_pane_g_ParamLimits

0xf79b,	// (0x0001d763) main_mp4_pane_g

0xc75b,	// (0x0001a723) main_mp4_pane_t1_ParamLimits

0xc75b,	// (0x0001a723) main_mp4_pane_t1

0xc7bd,	// (0x0001a785) main_mp4_pane_t2_ParamLimits

0xc7bd,	// (0x0001a785) main_mp4_pane_t2

0xc821,	// (0x0001a7e9) main_mp4_pane_t3_ParamLimits

0xc821,	// (0x0001a7e9) main_mp4_pane_t3

0xc87f,	// (0x0001a847) main_mp4_pane_t4_ParamLimits

0xc87f,	// (0x0001a847) main_mp4_pane_t4

0x0003,

0xf7ac,	// (0x0001d774) main_mp4_pane_t_ParamLimits

0xf7ac,	// (0x0001d774) main_mp4_pane_t

0xc8dd,	// (0x0001a8a5) mp4_progress_pane_ParamLimits

0xc8dd,	// (0x0001a8a5) mp4_progress_pane

0xc911,	// (0x0001a8d9) mp4_rocker_pane_ParamLimits

0xc911,	// (0x0001a8d9) mp4_rocker_pane

0xc92d,	// (0x0001a8f5) mp4_progress_pane_t1

0xc94c,	// (0x0001a914) mp4_progress_pane_t2

0x0001,

0xf7b5,	// (0x0001d77d) mp4_progress_pane_t

0xc96b,	// (0x0001a933) mup_progress_pane_cp04

0x99a5,	// (0x0001796d) mp4_rocker_pane_g1

0x9268,	// (0x00017230) aid_cell_size_keypad2_ParamLimits

0x9268,	// (0x00017230) aid_cell_size_keypad2

0x9268,	// (0x00017230) dialer2_ne_pane_ParamLimits

0x9268,	// (0x00017230) dialer2_ne_pane

0x9268,	// (0x00017230) grid_dialer2_keypad_pane_ParamLimits

0x9268,	// (0x00017230) grid_dialer2_keypad_pane

0xbb4b,	// (0x00019b13) bg_popup_call_pane_cp07_ParamLimits

0xbb4b,	// (0x00019b13) bg_popup_call_pane_cp07

0x49e7,	// (0x000129af) dialer2_ne_pane_t1_ParamLimits

0x49e7,	// (0x000129af) dialer2_ne_pane_t1

0x4a26,	// (0x000129ee) cell_dialer2_keypad_pane_ParamLimits

0x4a26,	// (0x000129ee) cell_dialer2_keypad_pane

0xbb4b,	// (0x00019b13) bg_button_pane_pane_cp04_ParamLimits

0xbb4b,	// (0x00019b13) bg_button_pane_pane_cp04

0x995f,	// (0x00017927) cell_dialer2_keypad_pane_g1_ParamLimits

0x995f,	// (0x00017927) cell_dialer2_keypad_pane_g1

0x17cd,	// (0x0000f795) aid_placing_vt_set_content_ParamLimits

0x17cd,	// (0x0000f795) aid_placing_vt_set_content

0x17f5,	// (0x0000f7bd) aid_placing_vt_set_title_ParamLimits

0x17f5,	// (0x0000f7bd) aid_placing_vt_set_title

0x91f9,	// (0x000171c1) main_image3_pane

0x4a9b,	// (0x00012a63) area_side_right_pane_cp01_ParamLimits

0x4a9b,	// (0x00012a63) area_side_right_pane_cp01

0x4ab2,	// (0x00012a7a) main_image3_pane_g1_ParamLimits

0x4ab2,	// (0x00012a7a) main_image3_pane_g1

0x4ac0,	// (0x00012a88) main_image3_pane_g2_ParamLimits

0x4ac0,	// (0x00012a88) main_image3_pane_g2

0x4ae8,	// (0x00012ab0) main_image3_pane_g3_ParamLimits

0x4ae8,	// (0x00012ab0) main_image3_pane_g3

0x4b12,	// (0x00012ada) main_image3_pane_g4_ParamLimits

0x4b12,	// (0x00012ada) main_image3_pane_g4

0x0003,

0xf7c4,	// (0x0001d78c) main_image3_pane_g_ParamLimits

0xf7c4,	// (0x0001d78c) main_image3_pane_g

0x4b3c,	// (0x00012b04) main_image3_pane_t1_ParamLimits

0x4b3c,	// (0x00012b04) main_image3_pane_t1

0x4b94,	// (0x00012b5c) main_image3_pane_t2_ParamLimits

0x4b94,	// (0x00012b5c) main_image3_pane_t2

0x4be6,	// (0x00012bae) main_image3_pane_t3_ParamLimits

0x4be6,	// (0x00012bae) main_image3_pane_t3

0x0003,

0xf7cd,	// (0x0001d795) main_image3_pane_t_ParamLimits

0xf7cd,	// (0x0001d795) main_image3_pane_t

0x9268,	// (0x00017230) grid_sctrl_middle_pane_cp01_ParamLimits

0x9268,	// (0x00017230) grid_sctrl_middle_pane_cp01

0x4c6e,	// (0x00012c36) cell_sctrl_middle_pane_cp01_ParamLimits

0x4c6e,	// (0x00012c36) cell_sctrl_middle_pane_cp01

0x4c8b,	// (0x00012c53) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4c8b,	// (0x00012c53) cell_sctrl_middle_pane_cp01_g1

0x91f9,	// (0x000171c1) main_call4_pane

0x4ca1,	// (0x00012c69) aid_size_button_call4_ParamLimits

0x4ca1,	// (0x00012c69) aid_size_button_call4

0x4cd4,	// (0x00012c9c) call4_windows_pane_ParamLimits

0x4cd4,	// (0x00012c9c) call4_windows_pane

0x4cf3,	// (0x00012cbb) grid_call4_button_pane_ParamLimits

0x4cf3,	// (0x00012cbb) grid_call4_button_pane

0x4d26,	// (0x00012cee) call4_windows_conf_pane

0x4d3b,	// (0x00012d03) popup_call4_audio_first_window_ParamLimits

0x4d3b,	// (0x00012d03) popup_call4_audio_first_window

0x4d8b,	// (0x00012d53) popup_call4_audio_second_window_ParamLimits

0x4d8b,	// (0x00012d53) popup_call4_audio_second_window

0x4da2,	// (0x00012d6a) popup_call4_audio_wait_window_ParamLimits

0x4da2,	// (0x00012d6a) popup_call4_audio_wait_window

0x4db0,	// (0x00012d78) cell_call4_button_pane_ParamLimits

0x4db0,	// (0x00012d78) cell_call4_button_pane

0x4dd5,	// (0x00012d9d) bg_button_pane_cp09_ParamLimits

0x4dd5,	// (0x00012d9d) bg_button_pane_cp09

0x4de1,	// (0x00012da9) cell_call4_button_pane_g1_ParamLimits

0x4de1,	// (0x00012da9) cell_call4_button_pane_g1

0x4e07,	// (0x00012dcf) cell_call4_button_pane_t1_ParamLimits

0x4e07,	// (0x00012dcf) cell_call4_button_pane_t1

0xca18,	// (0x0001a9e0) popup_call4_audio_conf_window_ParamLimits

0xca18,	// (0x0001a9e0) popup_call4_audio_conf_window

0x4321,	// (0x000122e9) mup3_progress_pane_t1_ParamLimits

0x4340,	// (0x00012308) mup3_progress_pane_t2_ParamLimits

0xc1d8,	// (0x0001a1a0) mup3_progress_pane_t3_ParamLimits

0xf6a7,	// (0x0001d66f) mup3_progress_pane_t_ParamLimits

0xc1f5,	// (0x0001a1bd) mup_progress_pane_cp03_ParamLimits

0xc20d,	// (0x0001a1d5) mup3_control_keys_pane_g4_copy1

0xc911,	// (0x0001a8d9) mp4_rocker2_pane_ParamLimits

0xc911,	// (0x0001a8d9) mp4_rocker2_pane

0xc20d,	// (0x0001a1d5) mp4_rocker2_pane_g1

0xc20d,	// (0x0001a1d5) mp4_rocker2_pane_g2

0xc20d,	// (0x0001a1d5) mp4_rocker2_pane_g3

0xc20d,	// (0x0001a1d5) mp4_rocker2_pane_g4

0xc20d,	// (0x0001a1d5) mp4_rocker2_pane_g5

0x0004,

0xf7d6,	// (0x0001d79e) mp4_rocker2_pane_g

0x91f9,	// (0x000171c1) main_camera4_pane

0x91f9,	// (0x000171c1) main_video4_pane

0x48f7,	// (0x000128bf) main_video_tele_dialer_pane_t1_ParamLimits

0x48f7,	// (0x000128bf) main_video_tele_dialer_pane_t1

0x4910,	// (0x000128d8) main_video_tele_dialer_pane_t2_ParamLimits

0x4910,	// (0x000128d8) main_video_tele_dialer_pane_t2

0x0001,

0xf78c,	// (0x0001d754) main_video_tele_dialer_pane_t_ParamLimits

0xf78c,	// (0x0001d754) main_video_tele_dialer_pane_t

0x4e49,	// (0x00012e11) cam4_autofocus_pane_ParamLimits

0x4e49,	// (0x00012e11) cam4_autofocus_pane

0x4e5f,	// (0x00012e27) cam4_image_uncrop_pane_ParamLimits

0x4e5f,	// (0x00012e27) cam4_image_uncrop_pane

0x4e79,	// (0x00012e41) cam4_indicators_pane_ParamLimits

0x4e79,	// (0x00012e41) cam4_indicators_pane

0x4ea4,	// (0x00012e6c) main_camera4_pane_g1_ParamLimits

0x4ea4,	// (0x00012e6c) main_camera4_pane_g1

0x4eb6,	// (0x00012e7e) main_camera4_pane_g2_ParamLimits

0x4eb6,	// (0x00012e7e) main_camera4_pane_g2

0x4ec9,	// (0x00012e91) main_camera4_pane_g3_ParamLimits

0x4ec9,	// (0x00012e91) main_camera4_pane_g3

0x4edc,	// (0x00012ea4) main_camera4_pane_g4_ParamLimits

0x4edc,	// (0x00012ea4) main_camera4_pane_g4

0x4eef,	// (0x00012eb7) main_camera4_pane_g5_ParamLimits

0x4eef,	// (0x00012eb7) main_camera4_pane_g5

0x0005,

0xf7e1,	// (0x0001d7a9) main_camera4_pane_g_ParamLimits

0xf7e1,	// (0x0001d7a9) main_camera4_pane_g

0x4f13,	// (0x00012edb) main_camera4_pane_t1_ParamLimits

0x4f13,	// (0x00012edb) main_camera4_pane_t1

0x995f,	// (0x00017927) bg_tb_trans_pane_cp06

0xca50,	// (0x0001aa18) cam4_indicators_pane_g1

0xca61,	// (0x0001aa29) cam4_indicators_pane_g2

0x0002,

0xf7fc,	// (0x0001d7c4) cam4_indicators_pane_g

0xca79,	// (0x0001aa41) cam4_indicators_pane_t1

0x4f77,	// (0x00012f3f) main_video4_pane_g1_ParamLimits

0x4f77,	// (0x00012f3f) main_video4_pane_g1

0x4f86,	// (0x00012f4e) main_video4_pane_g2_ParamLimits

0x4f86,	// (0x00012f4e) main_video4_pane_g2

0x4f95,	// (0x00012f5d) main_video4_pane_g3_ParamLimits

0x4f95,	// (0x00012f5d) main_video4_pane_g3

0x4fa4,	// (0x00012f6c) main_video4_pane_g4_ParamLimits

0x4fa4,	// (0x00012f6c) main_video4_pane_g4

0x0004,

0xf803,	// (0x0001d7cb) main_video4_pane_g_ParamLimits

0xf803,	// (0x0001d7cb) main_video4_pane_g

0x4fc2,	// (0x00012f8a) vid4_indicators_pane_ParamLimits

0x4fc2,	// (0x00012f8a) vid4_indicators_pane

0x4ff0,	// (0x00012fb8) video4_image_uncrop_cif_pane_ParamLimits

0x4ff0,	// (0x00012fb8) video4_image_uncrop_cif_pane

0x500a,	// (0x00012fd2) video4_image_uncrop_nhd_pane_ParamLimits

0x500a,	// (0x00012fd2) video4_image_uncrop_nhd_pane

0x4e5f,	// (0x00012e27) video4_image_uncrop_vga_pane_ParamLimits

0x4e5f,	// (0x00012e27) video4_image_uncrop_vga_pane

0x9268,	// (0x00017230) bg_tb_trans_pane_cp07

0xcaa3,	// (0x0001aa6b) vid4_indicators_pane_g1

0xcab7,	// (0x0001aa7f) vid4_indicators_pane_g2

0xcacb,	// (0x0001aa93) vid4_indicators_pane_g3

0x0004,

0xf80e,	// (0x0001d7d6) vid4_indicators_pane_g

0xcaf8,	// (0x0001aac0) vid4_indicators_pane_t1

0x501e,	// (0x00012fe6) cam4_autofocus_pane_g1

0x5026,	// (0x00012fee) cam4_autofocus_pane_g2

0x502e,	// (0x00012ff6) cam4_autofocus_pane_g3

0x0002,

0xf819,	// (0x0001d7e1) cam4_autofocus_pane_g

0x5036,	// (0x00012ffe) cam4_autofocus_pane_g3_copy1

0x493f,	// (0x00012907) video_down_pane_cp_t1

0x494d,	// (0x00012915) video_down_pane_cp_t2

0x0001,

0xf791,	// (0x0001d759) video_down_pane_cp_t

0x9268,	// (0x00017230) popup_vitu2_window_ParamLimits

0x9268,	// (0x00017230) popup_vitu2_window

0x503e,	// (0x00013006) aid_size_cell2_itu2_ParamLimits

0x503e,	// (0x00013006) aid_size_cell2_itu2

0x5064,	// (0x0001302c) aid_size_cell_itu2_ParamLimits

0x5064,	// (0x0001302c) aid_size_cell_itu2

0x439f,	// (0x00012367) bg_popup_window_pane_cp09_ParamLimits

0x439f,	// (0x00012367) bg_popup_window_pane_cp09

0x50c0,	// (0x00013088) field_vitu2_entry_pane_ParamLimits

0x50c0,	// (0x00013088) field_vitu2_entry_pane

0x50e6,	// (0x000130ae) grid_vitu2_function_pane_ParamLimits

0x50e6,	// (0x000130ae) grid_vitu2_function_pane

0x5133,	// (0x000130fb) grid_vitu2_itu_pane_ParamLimits

0x5133,	// (0x000130fb) grid_vitu2_itu_pane

0x51c5,	// (0x0001318d) cell_vitu2_itu_pane_ParamLimits

0x51c5,	// (0x0001318d) cell_vitu2_itu_pane

0x51f1,	// (0x000131b9) cell_vitu2_function_pane_ParamLimits

0x51f1,	// (0x000131b9) cell_vitu2_function_pane

0xcb0f,	// (0x0001aad7) bg_popup_call_pane_cp08_ParamLimits

0xcb0f,	// (0x0001aad7) bg_popup_call_pane_cp08

0xcb26,	// (0x0001aaee) field_vitu2_entry_pane_g1

0xcb32,	// (0x0001aafa) field_vitu2_entry_pane_g2

0x0002,

0xf820,	// (0x0001d7e8) field_vitu2_entry_pane_g

0x5230,	// (0x000131f8) field_vitu2_entry_pane_t1_ParamLimits

0x5230,	// (0x000131f8) field_vitu2_entry_pane_t1

0xcb3e,	// (0x0001ab06) field_vitu2_entry_pane_t2_ParamLimits

0xcb3e,	// (0x0001ab06) field_vitu2_entry_pane_t2

0x0001,

0xf827,	// (0x0001d7ef) field_vitu2_entry_pane_t_ParamLimits

0xf827,	// (0x0001d7ef) field_vitu2_entry_pane_t

0x5260,	// (0x00013228) bg_button_pane_cp010_ParamLimits

0x5260,	// (0x00013228) bg_button_pane_cp010

0x526e,	// (0x00013236) cell_vitu2_itu_pane_g1

0x5294,	// (0x0001325c) cell_vitu2_itu_pane_t1_ParamLimits

0x5294,	// (0x0001325c) cell_vitu2_itu_pane_t1

0x52f2,	// (0x000132ba) cell_vitu2_itu_pane_t2_ParamLimits

0x52f2,	// (0x000132ba) cell_vitu2_itu_pane_t2

0x0002,

0xf831,	// (0x0001d7f9) cell_vitu2_itu_pane_t_ParamLimits

0xf831,	// (0x0001d7f9) cell_vitu2_itu_pane_t

0x9268,	// (0x00017230) bg_button_pane_cp011

0x53de,	// (0x000133a6) cell_vitu2_function_pane_g1

0x91f9,	// (0x000171c1) main_myfav_hc_pane

0x4c36,	// (0x00012bfe) popup_image3_note_pane_ParamLimits

0x4c36,	// (0x00012bfe) popup_image3_note_pane

0x4c52,	// (0x00012c1a) popup_image3_tool_bar_pane_ParamLimits

0x4c52,	// (0x00012c1a) popup_image3_tool_bar_pane

0x5380,	// (0x00013348) cell_vitu2_itu_pane_t3_ParamLimits

0x5380,	// (0x00013348) cell_vitu2_itu_pane_t3

0x91f9,	// (0x000171c1) bg_popup_trans_pane

0xcb63,	// (0x0001ab2b) grid_image3_tool_bar_pane

0xcb6d,	// (0x0001ab35) bg_popup_trans_pane_g1

0x9e75,	// (0x00017e3d) bg_popup_trans_pane_g2

0xcb75,	// (0x0001ab3d) bg_popup_trans_pane_g3

0xcb7d,	// (0x0001ab45) bg_popup_trans_pane_g4

0xcb85,	// (0x0001ab4d) bg_popup_trans_pane_g5

0xcb8d,	// (0x0001ab55) bg_popup_trans_pane_g6

0xcb95,	// (0x0001ab5d) bg_popup_trans_pane_g7

0xcb9d,	// (0x0001ab65) bg_popup_trans_pane_g8

0x9e55,	// (0x00017e1d) bg_popup_trans_pane_g9

0x0008,

0xf838,	// (0x0001d800) bg_popup_trans_pane_g

0xcba5,	// (0x0001ab6d) cell_image3_tool_bar_pane_ParamLimits

0xcba5,	// (0x0001ab6d) cell_image3_tool_bar_pane

0x99a5,	// (0x0001796d) cell_image3_tool_bar_pane_g1

0x91f9,	// (0x000171c1) bg_popup_trans_pane_cp1

0xcbb9,	// (0x0001ab81) popup_image3_note_pane_t1

0xcbc7,	// (0x0001ab8f) popup_image3_note_pane_t2

0xcbd5,	// (0x0001ab9d) popup_image3_note_pane_t3

0x0002,

0xf84b,	// (0x0001d813) popup_image3_note_pane_t

0xcbe3,	// (0x0001abab) popup_image3_note_pane_t3_copy1

0x53f1,	// (0x000133b9) bg_myfav_hc_instruction_pane_ParamLimits

0x53f1,	// (0x000133b9) bg_myfav_hc_instruction_pane

0x5405,	// (0x000133cd) cell_myfav_contact_pane_ParamLimits

0x5405,	// (0x000133cd) cell_myfav_contact_pane

0x5423,	// (0x000133eb) cell_myfav_contact_pane_cp1_ParamLimits

0x5423,	// (0x000133eb) cell_myfav_contact_pane_cp1

0x543b,	// (0x00013403) cell_myfav_contact_pane_cp2_ParamLimits

0x543b,	// (0x00013403) cell_myfav_contact_pane_cp2

0x5453,	// (0x0001341b) cell_myfav_contact_pane_cp3_ParamLimits

0x5453,	// (0x0001341b) cell_myfav_contact_pane_cp3

0x546a,	// (0x00013432) cell_myfav_contact_pane_cp4_ParamLimits

0x546a,	// (0x00013432) cell_myfav_contact_pane_cp4

0x5482,	// (0x0001344a) cell_myfav_contact_pane_cp5_ParamLimits

0x5482,	// (0x0001344a) cell_myfav_contact_pane_cp5

0x5496,	// (0x0001345e) cell_myfav_contact_pane_cp6_ParamLimits

0x5496,	// (0x0001345e) cell_myfav_contact_pane_cp6

0x54ac,	// (0x00013474) cell_myfav_contact_pane_cp7_ParamLimits

0x54ac,	// (0x00013474) cell_myfav_contact_pane_cp7

0xcbf1,	// (0x0001abb9) listscroll_gen_pane_cp05

0x54c6,	// (0x0001348e) main_myfav_hc_pane_g1_ParamLimits

0x54c6,	// (0x0001348e) main_myfav_hc_pane_g1

0x54e0,	// (0x000134a8) main_myfav_hc_pane_g2_ParamLimits

0x54e0,	// (0x000134a8) main_myfav_hc_pane_g2

0x0002,

0xf852,	// (0x0001d81a) main_myfav_hc_pane_g_ParamLimits

0xf852,	// (0x0001d81a) main_myfav_hc_pane_g

0x5512,	// (0x000134da) main_myfav_hc_pane_t1_ParamLimits

0x5512,	// (0x000134da) main_myfav_hc_pane_t1

0xcbfa,	// (0x0001abc2) main_myfav_hc_pane_t2_ParamLimits

0xcbfa,	// (0x0001abc2) main_myfav_hc_pane_t2

0xcc0c,	// (0x0001abd4) main_myfav_hc_pane_t3_ParamLimits

0xcc0c,	// (0x0001abd4) main_myfav_hc_pane_t3

0x5529,	// (0x000134f1) main_myfav_hc_pane_t4_ParamLimits

0x5529,	// (0x000134f1) main_myfav_hc_pane_t4

0x0004,

0xf859,	// (0x0001d821) main_myfav_hc_pane_t_ParamLimits

0xf859,	// (0x0001d821) main_myfav_hc_pane_t

0x99a5,	// (0x0001796d) bg_myfav_hc_instruction_pane_g1

0xcc1e,	// (0x0001abe6) cell_myfav_contact_pane_g1_ParamLimits

0xcc1e,	// (0x0001abe6) cell_myfav_contact_pane_g1

0xcc1e,	// (0x0001abe6) cell_myfav_contact_pane_g2_ParamLimits

0xcc1e,	// (0x0001abe6) cell_myfav_contact_pane_g2

0xcc2a,	// (0x0001abf2) cell_myfav_contact_pane_g3_ParamLimits

0xcc2a,	// (0x0001abf2) cell_myfav_contact_pane_g3

0x996d,	// (0x00017935) cell_myfav_contact_pane_g4_ParamLimits

0x996d,	// (0x00017935) cell_myfav_contact_pane_g4

0xcc37,	// (0x0001abff) cell_myfav_contact_pane_g5_ParamLimits

0xcc37,	// (0x0001abff) cell_myfav_contact_pane_g5

0x0004,

0xf864,	// (0x0001d82c) cell_myfav_contact_pane_g_ParamLimits

0xf864,	// (0x0001d82c) cell_myfav_contact_pane_g

0x54fa,	// (0x000134c2) main_myfav_hc_pane_g3_ParamLimits

0x54fa,	// (0x000134c2) main_myfav_hc_pane_g3

0x0ca7,	// (0x0000ec6f) popup_adpt_find_window

0x5551,	// (0x00013519) afind_page_pane_ParamLimits

0x5551,	// (0x00013519) afind_page_pane

0x5567,	// (0x0001352f) aid_size_cell_afind_ParamLimits

0x5567,	// (0x0001352f) aid_size_cell_afind

0x5585,	// (0x0001354d) bg_popup_sub_pane_cp09_ParamLimits

0x5585,	// (0x0001354d) bg_popup_sub_pane_cp09

0x5597,	// (0x0001355f) find_pane_cp01_ParamLimits

0x5597,	// (0x0001355f) find_pane_cp01

0xcc43,	// (0x0001ac0b) grid_afind_control_pane_ParamLimits

0xcc43,	// (0x0001ac0b) grid_afind_control_pane

0x55ab,	// (0x00013573) grid_afind_pane_ParamLimits

0x55ab,	// (0x00013573) grid_afind_pane

0x55cd,	// (0x00013595) cell_afind_pane_ParamLimits

0x55cd,	// (0x00013595) cell_afind_pane

0x99a5,	// (0x0001796d) afind_page_pane_g1

0x5634,	// (0x000135fc) afind_page_pane_g2

0x563c,	// (0x00013604) afind_page_pane_g3

0x0002,

0xf86f,	// (0x0001d837) afind_page_pane_g

0x5644,	// (0x0001360c) afind_page_pane_t1

0xcc69,	// (0x0001ac31) cell_afind_grid_control_pane_ParamLimits

0xcc69,	// (0x0001ac31) cell_afind_grid_control_pane

0xcc78,	// (0x0001ac40) bg_button_pane_cp69_ParamLimits

0xcc78,	// (0x0001ac40) bg_button_pane_cp69

0x5652,	// (0x0001361a) cell_afind_pane_g1_ParamLimits

0x5652,	// (0x0001361a) cell_afind_pane_g1

0x565f,	// (0x00013627) cell_afind_pane_t1_ParamLimits

0x565f,	// (0x00013627) cell_afind_pane_t1

0xcc84,	// (0x0001ac4c) bg_button_pane_cp72

0xcc8c,	// (0x0001ac54) cell_afind_grid_control_pane_g1

0x3034,	// (0x00010ffc) aid_image_placing_area_ParamLimits

0x3034,	// (0x00010ffc) aid_image_placing_area

0x995f,	// (0x00017927) field_vitu_entry_pane_g1_ParamLimits

0x995f,	// (0x00017927) field_vitu_entry_pane_g1

0x995f,	// (0x00017927) field_vitu_entry_pane_g2_ParamLimits

0x995f,	// (0x00017927) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0001d161) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0001d161) field_vitu_entry_pane_g

0xc4fa,	// (0x0001a4c2) cell_vitu_itu_pane_g1_ParamLimits

0xc4dd,	// (0x0001a4a5) cell_vitu_itu_pane_t3_ParamLimits

0xc4dd,	// (0x0001a4a5) cell_vitu_itu_pane_t3

0xc92d,	// (0x0001a8f5) mp4_progress_pane_t1_ParamLimits

0xc94c,	// (0x0001a914) mp4_progress_pane_t2_ParamLimits

0xf7b5,	// (0x0001d77d) mp4_progress_pane_t_ParamLimits

0xc96b,	// (0x0001a933) mup_progress_pane_cp04_ParamLimits

0x553d,	// (0x00013505) main_myfav_hc_pane_t5_ParamLimits

0x553d,	// (0x00013505) main_myfav_hc_pane_t5

0x921f,	// (0x000171e7) aid_zoom_text_primary

0x0ca7,	// (0x0000ec6f) popup_adpt_find_window_ParamLimits

0x9268,	// (0x00017230) main_cam_set_pane

0x4e90,	// (0x00012e58) cam4_zoom_pane_ParamLimits

0x4e90,	// (0x00012e58) cam4_zoom_pane

0x5671,	// (0x00013639) main_cam_set_pane_g1_ParamLimits

0x5671,	// (0x00013639) main_cam_set_pane_g1

0x567f,	// (0x00013647) main_cam_set_pane_g2_ParamLimits

0x567f,	// (0x00013647) main_cam_set_pane_g2

0x0001,

0xf876,	// (0x0001d83e) main_cam_set_pane_g_ParamLimits

0xf876,	// (0x0001d83e) main_cam_set_pane_g

0x56a0,	// (0x00013668) main_cam_set_pane_t1_ParamLimits

0x56a0,	// (0x00013668) main_cam_set_pane_t1

0x56bb,	// (0x00013683) main_cset_listscroll_pane_ParamLimits

0x56bb,	// (0x00013683) main_cset_listscroll_pane

0x56e1,	// (0x000136a9) main_cset_slider_pane_ParamLimits

0x56e1,	// (0x000136a9) main_cset_slider_pane

0xccbe,	// (0x0001ac86) main_cset_list_pane_ParamLimits

0xccbe,	// (0x0001ac86) main_cset_list_pane

0xccce,	// (0x0001ac96) scroll_pane_cp028

0x5707,	// (0x000136cf) aid_area_touch_slider

0x5723,	// (0x000136eb) cset_slider_pane

0x5746,	// (0x0001370e) main_cset_slider_pane_g1

0x575b,	// (0x00013723) main_cset_slider_pane_g2

0x0011,

0xf87b,	// (0x0001d843) main_cset_slider_pane_g

0xcd1f,	// (0x0001ace7) main_cset_slider_pane_t1

0x57ff,	// (0x000137c7) main_cset_slider_pane_t2

0x5819,	// (0x000137e1) main_cset_slider_pane_t3

0x5833,	// (0x000137fb) main_cset_slider_pane_t4

0x584d,	// (0x00013815) main_cset_slider_pane_t5

0x5867,	// (0x0001382f) main_cset_slider_pane_t6

0x587c,	// (0x00013844) main_cset_slider_pane_t7

0x000e,

0xf8a0,	// (0x0001d868) main_cset_slider_pane_t

0x5980,	// (0x00013948) cset_list_set_pane_ParamLimits

0x5980,	// (0x00013948) cset_list_set_pane

0xcdb9,	// (0x0001ad81) aid_position_infowindow_above

0xcdc1,	// (0x0001ad89) aid_position_infowindow_below

0x5992,	// (0x0001395a) cset_list_set_pane_g1_ParamLimits

0x5992,	// (0x0001395a) cset_list_set_pane_g1

0x599e,	// (0x00013966) cset_list_set_pane_g3_ParamLimits

0x599e,	// (0x00013966) cset_list_set_pane_g3

0x0001,

0xf8bf,	// (0x0001d887) cset_list_set_pane_g_ParamLimits

0xf8bf,	// (0x0001d887) cset_list_set_pane_g

0x59ad,	// (0x00013975) cset_list_set_pane_t1_ParamLimits

0x59ad,	// (0x00013975) cset_list_set_pane_t1

0x9268,	// (0x00017230) list_highlight_pane_cp021_ParamLimits

0x9268,	// (0x00017230) list_highlight_pane_cp021

0xa80c,	// (0x000187d4) cset_slider_pane_g1

0xa81e,	// (0x000187e6) cset_slider_pane_g2

0xa815,	// (0x000187dd) cset_slider_pane_g3

0x0002,

0xf8c4,	// (0x0001d88c) cset_slider_pane_g

0xcdc9,	// (0x0001ad91) aid_area_touch_cam4_zoom

0xcdd1,	// (0x0001ad99) cam4_zoom_cont_pane

0xcdd9,	// (0x0001ada1) cam4_zoom_pane_g1

0xcde1,	// (0x0001ada9) cam4_zoom_pane_g2

0x59c2,	// (0x0001398a) cam4_zoom_pane_g3

0x0002,

0xf8cb,	// (0x0001d893) cam4_zoom_pane_g

0xcde9,	// (0x0001adb1) cam4_zoom_cont_pane_g1

0xcdf2,	// (0x0001adba) cam4_zoom_cont_pane_g2

0xcdfb,	// (0x0001adc3) cam4_zoom_cont_pane_g3

0x0002,

0xf8d2,	// (0x0001d89a) cam4_zoom_cont_pane_g

0x4cbf,	// (0x00012c87) call4_image_pane_ParamLimits

0x4cbf,	// (0x00012c87) call4_image_pane

0x4d26,	// (0x00012cee) call4_windows_conf_pane_ParamLimits

0x4d69,	// (0x00012d31) popup_call4_audio_in_window_ParamLimits

0x4d69,	// (0x00012d31) popup_call4_audio_in_window

0x91f9,	// (0x000171c1) bg_popup_call2_act_pane_cp02

0xca10,	// (0x0001a9d8) call4_list_conf_pane

0x99a5,	// (0x0001796d) call4_image_pane_g1

0x99a5,	// (0x0001796d) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0001d054) call4_image_pane_g

0xce04,	// (0x0001adcc) list_single_graphic_popup_conf4_pane_ParamLimits

0xce04,	// (0x0001adcc) list_single_graphic_popup_conf4_pane

0x91f9,	// (0x000171c1) list_highlight_pane_cp022

0xce17,	// (0x0001addf) list_single_graphic_popup_conf4_pane_g1

0xa3e9,	// (0x000183b1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8d9,	// (0x0001d8a1) list_single_graphic_popup_conf4_pane_g

0xce1f,	// (0x0001ade7) list_single_graphic_popup_conf4_pane_t1

0x1919,	// (0x0000f8e1) popup_vtel_slider_window_ParamLimits

0x1919,	// (0x0000f8e1) popup_vtel_slider_window

0xc97e,	// (0x0001a946) dialer2_ne_pane_t2_ParamLimits

0xc97e,	// (0x0001a946) dialer2_ne_pane_t2

0x0001,

0xf7ba,	// (0x0001d782) dialer2_ne_pane_t_ParamLimits

0xf7ba,	// (0x0001d782) dialer2_ne_pane_t

0xbb4b,	// (0x00019b13) bg_popup_sub_pane_cp010_ParamLimits

0xbb4b,	// (0x00019b13) bg_popup_sub_pane_cp010

0x59ca,	// (0x00013992) popup_vtel_slider_window_g1_ParamLimits

0x59ca,	// (0x00013992) popup_vtel_slider_window_g1

0x59dd,	// (0x000139a5) popup_vtel_slider_window_g2_ParamLimits

0x59dd,	// (0x000139a5) popup_vtel_slider_window_g2

0x0003,

0xf8de,	// (0x0001d8a6) popup_vtel_slider_window_g_ParamLimits

0xf8de,	// (0x0001d8a6) popup_vtel_slider_window_g

0x5a33,	// (0x000139fb) vtel_slider_pane_ParamLimits

0x5a33,	// (0x000139fb) vtel_slider_pane

0x5a55,	// (0x00013a1d) vtel_slider_pane_g1_ParamLimits

0x5a55,	// (0x00013a1d) vtel_slider_pane_g1

0x5a69,	// (0x00013a31) vtel_slider_pane_g2_ParamLimits

0x5a69,	// (0x00013a31) vtel_slider_pane_g2

0x5a81,	// (0x00013a49) vtel_slider_pane_g3_ParamLimits

0x5a81,	// (0x00013a49) vtel_slider_pane_g3

0x5a55,	// (0x00013a1d) vtel_slider_pane_g4_ParamLimits

0x5a55,	// (0x00013a1d) vtel_slider_pane_g4

0x5a97,	// (0x00013a5f) vtel_slider_pane_g5_ParamLimits

0x5a97,	// (0x00013a5f) vtel_slider_pane_g5

0x0004,

0xf8e7,	// (0x0001d8af) vtel_slider_pane_g_ParamLimits

0xf8e7,	// (0x0001d8af) vtel_slider_pane_g

0x9268,	// (0x00017230) main_gallery2_pane

0x5090,	// (0x00013058) aid_size_row_itut2_dropdow_list_ParamLimits

0x5090,	// (0x00013058) aid_size_row_itut2_dropdow_list

0x510a,	// (0x000130d2) grid_vitu2_function_top_pane_ParamLimits

0x510a,	// (0x000130d2) grid_vitu2_function_top_pane

0x516e,	// (0x00013136) popup_vitu2_dropdown_list_window_ParamLimits

0x516e,	// (0x00013136) popup_vitu2_dropdown_list_window

0x5199,	// (0x00013161) popup_vitu2_match_list_window

0x5aad,	// (0x00013a75) cell_vitu2_function_top_pane_ParamLimits

0x5aad,	// (0x00013a75) cell_vitu2_function_top_pane

0x5ac5,	// (0x00013a8d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5ac5,	// (0x00013a8d) cell_vitu2_function_top_pane_cp01

0x5ae1,	// (0x00013aa9) cell_vitu2_function_top_wide_pane_ParamLimits

0x5ae1,	// (0x00013aa9) cell_vitu2_function_top_wide_pane

0x9268,	// (0x00017230) bg_button_pane_cp012

0x5aff,	// (0x00013ac7) cell_vitu2_function_top_pane_g1

0xce35,	// (0x0001adfd) bg_button_pane_cp013_ParamLimits

0xce35,	// (0x0001adfd) bg_button_pane_cp013

0x5b13,	// (0x00013adb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5b13,	// (0x00013adb) cell_vitu2_function_top_wide_pane_g1

0x9268,	// (0x00017230) bg_popup_sub_pane_cp20

0x5b2b,	// (0x00013af3) list_vitu2_match_list_pane

0xcb6d,	// (0x0001ab35) bg_popup_sub_pane_cp20_g1

0xcb75,	// (0x0001ab3d) bg_popup_sub_pane_cp20_g2

0x9e75,	// (0x00017e3d) bg_popup_sub_pane_cp20_g3

0xcb7d,	// (0x0001ab45) bg_popup_sub_pane_cp20_g4

0x9e55,	// (0x00017e1d) bg_popup_sub_pane_cp20_g5

0xce51,	// (0x0001ae19) bg_popup_sub_pane_cp20_g6

0xcb8d,	// (0x0001ab55) bg_popup_sub_pane_cp20_g7

0xcb95,	// (0x0001ab5d) bg_popup_sub_pane_cp20_g8

0xcb9d,	// (0x0001ab65) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f2,	// (0x0001d8ba) bg_popup_sub_pane_cp20_g

0xce59,	// (0x0001ae21) list_vitu2_match_list_item_pane_ParamLimits

0xce59,	// (0x0001ae21) list_vitu2_match_list_item_pane

0xce6b,	// (0x0001ae33) list_vitu2_match_list_item_pane_t1

0x91f9,	// (0x000171c1) bg_popup_sub_pane_cp21

0x9c52,	// (0x00017c1a) grid_vitu2_dropdown_list_pane

0x5b43,	// (0x00013b0b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5b43,	// (0x00013b0b) cell_vitu2_dropdown_list_char_pane

0x5b63,	// (0x00013b2b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5b63,	// (0x00013b2b) cell_vitu2_dropdown_list_ctrl_pane

0xce79,	// (0x0001ae41) cell_vitu2_dropdown_list_char_pane_g1

0xce82,	// (0x0001ae4a) cell_vitu2_dropdown_list_char_pane_g2

0xce8b,	// (0x0001ae53) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf905,	// (0x0001d8cd) cell_vitu2_dropdown_list_char_pane_g

0x5b8b,	// (0x00013b53) cell_vitu2_dropdown_list_char_pane_t1

0x5b99,	// (0x00013b61) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5b99,	// (0x00013b61) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5ba6,	// (0x00013b6e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5ba6,	// (0x00013b6e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5bb3,	// (0x00013b7b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5bb3,	// (0x00013b7b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5bc0,	// (0x00013b88) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5bc0,	// (0x00013b88) cell_vitu2_dropdown_list_ctrl_pane_g4

0x995f,	// (0x00017927) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x995f,	// (0x00017927) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf90c,	// (0x0001d8d4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf90c,	// (0x0001d8d4) cell_vitu2_dropdown_list_ctrl_pane_g

0x5bdc,	// (0x00013ba4) aid_size_cell_gallery2_ParamLimits

0x5bdc,	// (0x00013ba4) aid_size_cell_gallery2

0x5bfa,	// (0x00013bc2) grid_gallery2_pane_ParamLimits

0x5bfa,	// (0x00013bc2) grid_gallery2_pane

0x5c14,	// (0x00013bdc) scroll_pane_cp029_ParamLimits

0x5c14,	// (0x00013bdc) scroll_pane_cp029

0x5c25,	// (0x00013bed) cell_gallery2_pane_ParamLimits

0x5c25,	// (0x00013bed) cell_gallery2_pane

0x9cab,	// (0x00017c73) cell_gallery2_pane_g2

0x5c84,	// (0x00013c4c) cell_gallery2_pane_g3

0xce94,	// (0x0001ae5c) cell_gallery2_pane_g4

0xce9c,	// (0x0001ae64) cell_gallery2_pane_g5

0x9c52,	// (0x00017c1a) grid_highlight_pane_cp10

0x5199,	// (0x00013161) popup_vitu2_match_list_window_ParamLimits

0x51ae,	// (0x00013176) popup_vitu2_query_window_ParamLimits

0x51ae,	// (0x00013176) popup_vitu2_query_window

0x91f9,	// (0x000171c1) bg_vitu2_candi_button_pane

0xce79,	// (0x0001ae41) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xce82,	// (0x0001ae4a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xce8b,	// (0x0001ae53) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5c8c,	// (0x00013c54) bg_button_pane_cp015

0x5c9d,	// (0x00013c65) bg_button_pane_cp016

0x5ca9,	// (0x00013c71) bg_button_pane_cp017

0xa79c,	// (0x00018764) bg_popup_sub_pane_cp22

0xcea4,	// (0x0001ae6c) popup_vitu2_query_window_g1

0x5ce7,	// (0x00013caf) popup_vitu2_query_window_g2

0x0002,

0xf917,	// (0x0001d8df) popup_vitu2_query_window_g

0x5d09,	// (0x00013cd1) popup_vitu2_query_window_t1_ParamLimits

0x5d09,	// (0x00013cd1) popup_vitu2_query_window_t1

0x5d3c,	// (0x00013d04) popup_vitu2_query_window_t2_ParamLimits

0x5d3c,	// (0x00013d04) popup_vitu2_query_window_t2

0x5d4e,	// (0x00013d16) popup_vitu2_query_window_t3_ParamLimits

0x5d4e,	// (0x00013d16) popup_vitu2_query_window_t3

0x5d76,	// (0x00013d3e) popup_vitu2_query_window_t4_ParamLimits

0x5d76,	// (0x00013d3e) popup_vitu2_query_window_t4

0x5d8a,	// (0x00013d52) popup_vitu2_query_window_t5_ParamLimits

0x5d8a,	// (0x00013d52) popup_vitu2_query_window_t5

0x0006,

0xf91e,	// (0x0001d8e6) popup_vitu2_query_window_t_ParamLimits

0xf91e,	// (0x0001d8e6) popup_vitu2_query_window_t

0xcc95,	// (0x0001ac5d) main_cset_text_pane

0x5707,	// (0x000136cf) aid_area_touch_slider_ParamLimits

0x5723,	// (0x000136eb) cset_slider_pane_ParamLimits

0x5746,	// (0x0001370e) main_cset_slider_pane_g1_ParamLimits

0x575b,	// (0x00013723) main_cset_slider_pane_g2_ParamLimits

0xccd7,	// (0x0001ac9f) main_cset_slider_pane_g3_ParamLimits

0xccd7,	// (0x0001ac9f) main_cset_slider_pane_g3

0x5770,	// (0x00013738) main_cset_slider_pane_g4_ParamLimits

0x5770,	// (0x00013738) main_cset_slider_pane_g4

0x577f,	// (0x00013747) main_cset_slider_pane_g5_ParamLimits

0x577f,	// (0x00013747) main_cset_slider_pane_g5

0x578b,	// (0x00013753) main_cset_slider_pane_g6_ParamLimits

0x578b,	// (0x00013753) main_cset_slider_pane_g6

0xf87b,	// (0x0001d843) main_cset_slider_pane_g_ParamLimits

0xcd1f,	// (0x0001ace7) main_cset_slider_pane_t1_ParamLimits

0x57ff,	// (0x000137c7) main_cset_slider_pane_t2_ParamLimits

0x5819,	// (0x000137e1) main_cset_slider_pane_t3_ParamLimits

0x5833,	// (0x000137fb) main_cset_slider_pane_t4_ParamLimits

0x584d,	// (0x00013815) main_cset_slider_pane_t5_ParamLimits

0x5867,	// (0x0001382f) main_cset_slider_pane_t6_ParamLimits

0x587c,	// (0x00013844) main_cset_slider_pane_t7_ParamLimits

0x58a6,	// (0x0001386e) main_cset_slider_pane_t8_ParamLimits

0x58a6,	// (0x0001386e) main_cset_slider_pane_t8

0x58ce,	// (0x00013896) main_cset_slider_pane_t9_ParamLimits

0x58ce,	// (0x00013896) main_cset_slider_pane_t9

0x58f6,	// (0x000138be) main_cset_slider_pane_t10_ParamLimits

0x58f6,	// (0x000138be) main_cset_slider_pane_t10

0x591e,	// (0x000138e6) main_cset_slider_pane_t11_ParamLimits

0x591e,	// (0x000138e6) main_cset_slider_pane_t11

0x5946,	// (0x0001390e) main_cset_slider_pane_t12_ParamLimits

0x5946,	// (0x0001390e) main_cset_slider_pane_t12

0x5963,	// (0x0001392b) main_cset_slider_pane_t13_ParamLimits

0x5963,	// (0x0001392b) main_cset_slider_pane_t13

0xf8a0,	// (0x0001d868) main_cset_slider_pane_t_ParamLimits

0x91f9,	// (0x000171c1) bg_popup_sub_pane_cp011

0xceb0,	// (0x0001ae78) main_cset_text_pane_g1

0xceb8,	// (0x0001ae80) main_cset_text_pane_t1

0xcec6,	// (0x0001ae8e) main_cset_text_pane_t2

0xced4,	// (0x0001ae9c) main_cset_text_pane_t3

0xcee2,	// (0x0001aeaa) main_cset_text_pane_t4

0xcef0,	// (0x0001aeb8) main_cset_text_pane_t5

0xcefe,	// (0x0001aec6) main_cset_text_pane_t6

0xcf0c,	// (0x0001aed4) main_cset_text_pane_t7

0x0006,

0xf92d,	// (0x0001d8f5) main_cset_text_pane_t

0x91f9,	// (0x000171c1) main_cam4_burst_pane

0x91f9,	// (0x000171c1) main_cam5_pane

0xcc57,	// (0x0001ac1f) bg_button_pane_cp019

0xcc60,	// (0x0001ac28) bg_button_pane_cp020

0xcce3,	// (0x0001acab) main_cset_slider_pane_g7_ParamLimits

0xcce3,	// (0x0001acab) main_cset_slider_pane_g7

0xccef,	// (0x0001acb7) main_cset_slider_pane_g8_ParamLimits

0xccef,	// (0x0001acb7) main_cset_slider_pane_g8

0x579f,	// (0x00013767) main_cset_slider_pane_g9_ParamLimits

0x579f,	// (0x00013767) main_cset_slider_pane_g9

0x57ab,	// (0x00013773) main_cset_slider_pane_g10_ParamLimits

0x57ab,	// (0x00013773) main_cset_slider_pane_g10

0x57b7,	// (0x0001377f) main_cset_slider_pane_g11_ParamLimits

0x57b7,	// (0x0001377f) main_cset_slider_pane_g11

0x57c3,	// (0x0001378b) main_cset_slider_pane_g12_ParamLimits

0x57c3,	// (0x0001378b) main_cset_slider_pane_g12

0x57cf,	// (0x00013797) main_cset_slider_pane_g13_ParamLimits

0x57cf,	// (0x00013797) main_cset_slider_pane_g13

0x57db,	// (0x000137a3) main_cset_slider_pane_g14_ParamLimits

0x57db,	// (0x000137a3) main_cset_slider_pane_g14

0x57e7,	// (0x000137af) main_cset_slider_pane_g15_ParamLimits

0x57e7,	// (0x000137af) main_cset_slider_pane_g15

0xcd47,	// (0x0001ad0f) main_cset_slider_pane_t14_ParamLimits

0xcd47,	// (0x0001ad0f) main_cset_slider_pane_t14

0xcd80,	// (0x0001ad48) main_cset_slider_pane_t15_ParamLimits

0xcd80,	// (0x0001ad48) main_cset_slider_pane_t15

0x5df4,	// (0x00013dbc) aid_cam4_burst_size_cell_ParamLimits

0x5df4,	// (0x00013dbc) aid_cam4_burst_size_cell

0x5e14,	// (0x00013ddc) grid_cam4_burst_pane_ParamLimits

0x5e14,	// (0x00013ddc) grid_cam4_burst_pane

0x5e4c,	// (0x00013e14) linegrid_cam4_burst_pane_ParamLimits

0x5e4c,	// (0x00013e14) linegrid_cam4_burst_pane

0xcf1a,	// (0x0001aee2) scroll_pane_cp30_ParamLimits

0xcf1a,	// (0x0001aee2) scroll_pane_cp30

0x5e70,	// (0x00013e38) cell_cam4_burst_pane_ParamLimits

0x5e70,	// (0x00013e38) cell_cam4_burst_pane

0xcf26,	// (0x0001aeee) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf26,	// (0x0001aeee) linegrid_cam4_burst_pane_g1

0x5ebd,	// (0x00013e85) linegrid_cam4_burst_pane_g2_ParamLimits

0x5ebd,	// (0x00013e85) linegrid_cam4_burst_pane_g2

0xcf33,	// (0x0001aefb) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf33,	// (0x0001aefb) linegrid_cam4_burst_pane_g3

0x0002,

0xf93c,	// (0x0001d904) linegrid_cam4_burst_pane_g_ParamLimits

0xf93c,	// (0x0001d904) linegrid_cam4_burst_pane_g

0x5ece,	// (0x00013e96) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5ece,	// (0x00013e96) linegrid_cam4_burst_pane_g3_copy1

0xcf40,	// (0x0001af08) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf40,	// (0x0001af08) linegrid_cam4_burst_pane_g4

0x5ee8,	// (0x00013eb0) linegrid_cam4_burst_pane_g5_ParamLimits

0x5ee8,	// (0x00013eb0) linegrid_cam4_burst_pane_g5

0x5ef9,	// (0x00013ec1) linegrid_cam4_burst_pane_g6_ParamLimits

0x5ef9,	// (0x00013ec1) linegrid_cam4_burst_pane_g6

0xcf4d,	// (0x0001af15) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf4d,	// (0x0001af15) linegrid_cam4_burst_pane_g7

0x5f10,	// (0x00013ed8) cell_cam4_burst_pane_g1

0xcf66,	// (0x0001af2e) main_cam5_pane_t1_ParamLimits

0xcf66,	// (0x0001af2e) main_cam5_pane_t1

0xcf78,	// (0x0001af40) main_cam5_pane_t2_ParamLimits

0xcf78,	// (0x0001af40) main_cam5_pane_t2

0xcf8a,	// (0x0001af52) main_cam5_pane_t3_ParamLimits

0xcf8a,	// (0x0001af52) main_cam5_pane_t3

0xcf9c,	// (0x0001af64) main_cam5_pane_t4_ParamLimits

0xcf9c,	// (0x0001af64) main_cam5_pane_t4

0xcfb4,	// (0x0001af7c) main_cam5_pane_t5_ParamLimits

0xcfb4,	// (0x0001af7c) main_cam5_pane_t5

0xcfc8,	// (0x0001af90) main_cam5_pane_t6_ParamLimits

0xcfc8,	// (0x0001af90) main_cam5_pane_t6

0xcfdc,	// (0x0001afa4) main_cam5_pane_t7_ParamLimits

0xcfdc,	// (0x0001afa4) main_cam5_pane_t7

0xcfee,	// (0x0001afb6) main_cam5_pane_t8_ParamLimits

0xcfee,	// (0x0001afb6) main_cam5_pane_t8

0xd00a,	// (0x0001afd2) main_cam5_pane_t9_ParamLimits

0xd00a,	// (0x0001afd2) main_cam5_pane_t9

0xd01c,	// (0x0001afe4) main_cam5_pane_t10_ParamLimits

0xd01c,	// (0x0001afe4) main_cam5_pane_t10

0xd02e,	// (0x0001aff6) main_cam5_pane_t11_ParamLimits

0xd02e,	// (0x0001aff6) main_cam5_pane_t11

0xd040,	// (0x0001b008) main_cam5_pane_t12_ParamLimits

0xd040,	// (0x0001b008) main_cam5_pane_t12

0xd055,	// (0x0001b01d) main_cam5_pane_t13_ParamLimits

0xd055,	// (0x0001b01d) main_cam5_pane_t13

0x000c,

0xf948,	// (0x0001d910) main_cam5_pane_t_ParamLimits

0xf948,	// (0x0001d910) main_cam5_pane_t

0x0d28,	// (0x0000ecf0) popup_scut_keymap_window_ParamLimits

0x0d28,	// (0x0000ecf0) popup_scut_keymap_window

0x5f23,	// (0x00013eeb) aid_size_cell_brow_shortcut

0x9c52,	// (0x00017c1a) bg_popup_window_pane_cp010

0x5f2f,	// (0x00013ef7) grid_scut_pane

0x5f3b,	// (0x00013f03) cell_scut_pane_ParamLimits

0x5f3b,	// (0x00013f03) cell_scut_pane

0x5f52,	// (0x00013f1a) cell_scut_pane_g1

0xd072,	// (0x0001b03a) cell_scut_pane_t1

0xd081,	// (0x0001b049) cell_scut_pane_t2

0x5f5b,	// (0x00013f23) cell_scut_pane_t3

0x0002,

0xf963,	// (0x0001d92b) cell_scut_pane_t

0x3ed0,	// (0x00011e98) main_mup3_pane_g8_ParamLimits

0x3ed0,	// (0x00011e98) main_mup3_pane_g8

0x50aa,	// (0x00013072) area_vitu2_query_pane_ParamLimits

0x50aa,	// (0x00013072) area_vitu2_query_pane

0x5cb5,	// (0x00013c7d) input_focus_pane_cp08

0xd090,	// (0x0001b058) area_vitu2_query_pane_g1

0x5f69,	// (0x00013f31) area_vitu2_query_pane_g2

0x0001,

0xf96a,	// (0x0001d932) area_vitu2_query_pane_g

0x5f78,	// (0x00013f40) area_vitu2_query_pane_t1_ParamLimits

0x5f78,	// (0x00013f40) area_vitu2_query_pane_t1

0x5f8c,	// (0x00013f54) area_vitu2_query_pane_t2_ParamLimits

0x5f8c,	// (0x00013f54) area_vitu2_query_pane_t2

0x5fa0,	// (0x00013f68) area_vitu2_query_pane_t3_ParamLimits

0x5fa0,	// (0x00013f68) area_vitu2_query_pane_t3

0xd09c,	// (0x0001b064) area_vitu2_query_pane_t4_ParamLimits

0xd09c,	// (0x0001b064) area_vitu2_query_pane_t4

0xd0c4,	// (0x0001b08c) area_vitu2_query_pane_t5_ParamLimits

0xd0c4,	// (0x0001b08c) area_vitu2_query_pane_t5

0xd0ec,	// (0x0001b0b4) area_vitu2_query_pane_t6_ParamLimits

0xd0ec,	// (0x0001b0b4) area_vitu2_query_pane_t6

0x0006,

0xf96f,	// (0x0001d937) area_vitu2_query_pane_t_ParamLimits

0xf96f,	// (0x0001d937) area_vitu2_query_pane_t

0x5fc8,	// (0x00013f90) bg_button_pane_cp018

0x5fd4,	// (0x00013f9c) bg_button_pane_cp021

0x5fe0,	// (0x00013fa8) bg_button_pane_cp022

0x5fff,	// (0x00013fc7) input_focus_pane_cp09

0xa4f8,	// (0x000184c0) aid_size_touch_mv_arrow_left

0xa523,	// (0x000184eb) aid_size_touch_mv_arrow_right

0xccfb,	// (0x0001acc3) main_cset_slider_pane_g16_ParamLimits

0xccfb,	// (0x0001acc3) main_cset_slider_pane_g16

0xcd07,	// (0x0001accf) main_cset_slider_pane_g17_ParamLimits

0xcd07,	// (0x0001accf) main_cset_slider_pane_g17

0x5f10,	// (0x00013ed8) cell_cam4_burst_pane_g1_ParamLimits

0x91f9,	// (0x000171c1) compa_mode_pane

0x59ed,	// (0x000139b5) popup_vtel_slider_window_g3_ParamLimits

0x59ed,	// (0x000139b5) popup_vtel_slider_window_g3

0x5a04,	// (0x000139cc) popup_vtel_slider_window_g4_ParamLimits

0x5a04,	// (0x000139cc) popup_vtel_slider_window_g4

0x5a1b,	// (0x000139e3) popup_vtel_slider_window_t1_ParamLimits

0x5a1b,	// (0x000139e3) popup_vtel_slider_window_t1

0x91f9,	// (0x000171c1) main_cl_pane

0xb9e2,	// (0x000199aa) popup_imed_adjust2_window_ParamLimits

0xa79c,	// (0x00018764) bg_tb_trans_pane_cp05_ParamLimits

0xc40a,	// (0x0001a3d2) popup_imed_adjust2_window_g1_ParamLimits

0xc419,	// (0x0001a3e1) popup_imed_adjust2_window_g2_ParamLimits

0xc419,	// (0x0001a3e1) popup_imed_adjust2_window_g2

0xc425,	// (0x0001a3ed) popup_imed_adjust2_window_g3_ParamLimits

0xc425,	// (0x0001a3ed) popup_imed_adjust2_window_g3

0x0002,

0xf6ea,	// (0x0001d6b2) popup_imed_adjust2_window_g_ParamLimits

0xf6ea,	// (0x0001d6b2) popup_imed_adjust2_window_g

0xc431,	// (0x0001a3f9) popup_imed_adjust2_window_t1_ParamLimits

0xc449,	// (0x0001a411) slider_imed_adjust_pane_ParamLimits

0xc45d,	// (0x0001a425) slider_imed_adjust_pane_g1_ParamLimits

0xc46d,	// (0x0001a435) slider_imed_adjust_pane_g2_ParamLimits

0xc47d,	// (0x0001a445) slider_imed_adjust_pane_g3_ParamLimits

0xc48e,	// (0x0001a456) slider_imed_adjust_pane_g4_ParamLimits

0xf6f1,	// (0x0001d6b9) slider_imed_adjust_pane_g_ParamLimits

0x4e31,	// (0x00012df9) aid_touch_area_cam4_ParamLimits

0x4e31,	// (0x00012df9) aid_touch_area_cam4

0xca2c,	// (0x0001a9f4) battery_pane_cp01

0x4f00,	// (0x00012ec8) main_camera4_pane_g6_ParamLimits

0x4f00,	// (0x00012ec8) main_camera4_pane_g6

0x4f2a,	// (0x00012ef2) main_camera4_pane_t2_ParamLimits

0x4f2a,	// (0x00012ef2) main_camera4_pane_t2

0x0001,

0xf7ee,	// (0x0001d7b6) main_camera4_pane_t_ParamLimits

0xf7ee,	// (0x0001d7b6) main_camera4_pane_t

0x4f5f,	// (0x00012f27) aid_touch_area_vid4_ParamLimits

0x4f5f,	// (0x00012f27) aid_touch_area_vid4

0x4fb3,	// (0x00012f7b) main_video4_pane_g5_ParamLimits

0x4fb3,	// (0x00012f7b) main_video4_pane_g5

0x4fd8,	// (0x00012fa0) vid4_progress_pane_ParamLimits

0x4fd8,	// (0x00012fa0) vid4_progress_pane

0xcd13,	// (0x0001acdb) main_cset_slider_pane_g18_ParamLimits

0xcd13,	// (0x0001acdb) main_cset_slider_pane_g18

0xcf5a,	// (0x0001af22) cell_cam4_burst_pane_g2_ParamLimits

0xcf5a,	// (0x0001af22) cell_cam4_burst_pane_g2

0x0001,

0xf943,	// (0x0001d90b) cell_cam4_burst_pane_g_ParamLimits

0xf943,	// (0x0001d90b) cell_cam4_burst_pane_g

0x9a1d,	// (0x000179e5) bg_cl_pane_ParamLimits

0x9a1d,	// (0x000179e5) bg_cl_pane

0x600f,	// (0x00013fd7) cl_header_pane_ParamLimits

0x600f,	// (0x00013fd7) cl_header_pane

0x6023,	// (0x00013feb) cl_listscroll_pane_ParamLimits

0x6023,	// (0x00013feb) cl_listscroll_pane

0xd138,	// (0x0001b100) bg_cl_pane_g1

0xd140,	// (0x0001b108) bg_cl_pane_g2

0xd148,	// (0x0001b110) bg_cl_pane_g3

0xd150,	// (0x0001b118) bg_cl_pane_g4

0xd158,	// (0x0001b120) bg_cl_pane_g5

0xd160,	// (0x0001b128) bg_cl_pane_g6

0xd168,	// (0x0001b130) bg_cl_pane_g7

0xd170,	// (0x0001b138) bg_cl_pane_g8

0xd178,	// (0x0001b140) bg_cl_pane_g9

0x0008,

0xf97e,	// (0x0001d946) bg_cl_pane_g

0x6033,	// (0x00013ffb) aid_height_cl_leading_ParamLimits

0x6033,	// (0x00013ffb) aid_height_cl_leading

0x603f,	// (0x00014007) aid_height_cl_text_ParamLimits

0x603f,	// (0x00014007) aid_height_cl_text

0x9268,	// (0x00017230) bg_cl_header_pane_ParamLimits

0x9268,	// (0x00017230) bg_cl_header_pane

0x605e,	// (0x00014026) cl_header_pane_g1_ParamLimits

0x605e,	// (0x00014026) cl_header_pane_g1

0x6074,	// (0x0001403c) cl_header_pane_t1_ParamLimits

0x6074,	// (0x0001403c) cl_header_pane_t1

0xd180,	// (0x0001b148) cl_list_pane

0xccce,	// (0x0001ac96) hc_scroll_pane_cp01

0x9e55,	// (0x00017e1d) bg_cl_header_pane_g1

0xcb6d,	// (0x0001ab35) bg_cl_header_pane_g2

0x9e75,	// (0x00017e3d) bg_cl_header_pane_g3

0xcb7d,	// (0x0001ab45) bg_cl_header_pane_g4

0xcb75,	// (0x0001ab3d) bg_cl_header_pane_g5

0xce51,	// (0x0001ae19) bg_cl_header_pane_g6

0xcb95,	// (0x0001ab5d) bg_cl_header_pane_g7

0xcb9d,	// (0x0001ab65) bg_cl_header_pane_g8

0xcb8d,	// (0x0001ab55) bg_cl_header_pane_g9

0x0008,

0xf991,	// (0x0001d959) bg_cl_header_pane_g

0x608d,	// (0x00014055) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x608d,	// (0x00014055) hc_cl_list_double_graphic_heading_pane

0x609e,	// (0x00014066) hc_cl_list_single_graphic_pane_ParamLimits

0x609e,	// (0x00014066) hc_cl_list_single_graphic_pane

0x60b7,	// (0x0001407f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x60b7,	// (0x0001407f) hc_cl_list_single_graphic_pane_g1

0x60c3,	// (0x0001408b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x60c3,	// (0x0001408b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a4,	// (0x0001d96c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a4,	// (0x0001d96c) hc_cl_list_single_graphic_pane_g

0x60d7,	// (0x0001409f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x60d7,	// (0x0001409f) hc_cl_list_single_graphic_pane_t1

0x60b7,	// (0x0001407f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x60b7,	// (0x0001407f) hc_cl_list_double_graphic_heading_pane_g1

0x60ec,	// (0x000140b4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x60ec,	// (0x000140b4) hc_cl_list_double_graphic_heading_pane_g2

0x6100,	// (0x000140c8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6100,	// (0x000140c8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9a9,	// (0x0001d971) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9a9,	// (0x0001d971) hc_cl_list_double_graphic_heading_pane_g

0x6114,	// (0x000140dc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6114,	// (0x000140dc) hc_cl_list_double_graphic_heading_pane_t1

0x6129,	// (0x000140f1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6129,	// (0x000140f1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b0,	// (0x0001d978) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b0,	// (0x0001d978) hc_cl_list_double_graphic_heading_pane_t

0xd191,	// (0x0001b159) vid4_progress_pane_g1

0xd1a1,	// (0x0001b169) vid4_progress_pane_g2

0x613e,	// (0x00014106) vid4_progress_pane_g3

0xd1b1,	// (0x0001b179) vid4_progress_pane_g4

0x0004,

0xf9b5,	// (0x0001d97d) vid4_progress_pane_g

0x6150,	// (0x00014118) vid4_progress_pane_t1

0xd1c9,	// (0x0001b191) vid4_progress_pane_t2

0x0002,

0xf9c0,	// (0x0001d988) vid4_progress_pane_t

0x6166,	// (0x0001412e) wait_bar_pane_cp07

0xbcae,	// (0x00019c76) blid_firmament_pane_ParamLimits

0xbcf1,	// (0x00019cb9) popup_blid_sat_info2_window_g1

0xbd15,	// (0x00019cdd) popup_blid_sat_info2_window_t3

0xbd23,	// (0x00019ceb) popup_blid_sat_info2_window_t4

0xbd31,	// (0x00019cf9) popup_blid_sat_info2_window_t5

0xbd3f,	// (0x00019d07) popup_blid_sat_info2_window_t6

0xbd4f,	// (0x00019d17) popup_blid_sat_info2_window_t7

0xbd5d,	// (0x00019d25) popup_blid_sat_info2_window_t8

0xbd6b,	// (0x00019d33) popup_blid_sat_info2_window_t9

0xbd79,	// (0x00019d41) popup_blid_sat_info2_window_t10

0xbe3a,	// (0x00019e02) aid_firma_cardinal_ParamLimits

0xbe4e,	// (0x00019e16) blid_firmament_pane_t1_ParamLimits

0xbe65,	// (0x00019e2d) blid_firmament_pane_t2_ParamLimits

0xbe7c,	// (0x00019e44) blid_firmament_pane_t3_ParamLimits

0xbe93,	// (0x00019e5b) blid_firmament_pane_t4_ParamLimits

0xf5e3,	// (0x0001d5ab) blid_firmament_pane_t_ParamLimits

0xbeaa,	// (0x00019e72) blid_sat_info_pane_ParamLimits

0x9268,	// (0x00017230) main_cam_set_pane_ParamLimits

0x4695,	// (0x0001265d) aid_size_cell_colour_35_ParamLimits

0x46b5,	// (0x0001267d) aid_size_cell_colour_112_ParamLimits

0x46d5,	// (0x0001269d) aid_size_cell_effect_ParamLimits

0xa79c,	// (0x00018764) bg_tb_trans_pane_cp02_ParamLimits

0x46f5,	// (0x000126bd) heading_imed_pane_ParamLimits

0x4701,	// (0x000126c9) listscroll_imed_pane_ParamLimits

0xb0df,	// (0x000190a7) popup_call2_audio_first_window_g5_ParamLimits

0xb0df,	// (0x000190a7) popup_call2_audio_first_window_g5

0x4a3d,	// (0x00012a05) aid_size_touch_image3_arrow_left_ParamLimits

0x4a3d,	// (0x00012a05) aid_size_touch_image3_arrow_left

0x4a69,	// (0x00012a31) aid_size_touch_image3_arrow_right_ParamLimits

0x4a69,	// (0x00012a31) aid_size_touch_image3_arrow_right

0xd1de,	// (0x0001b1a6) vid4_progress_pane_t3

0x487c,	// (0x00012844) main_hwr_training_symbol_option_pane_ParamLimits

0x487c,	// (0x00012844) main_hwr_training_symbol_option_pane

0xc5a8,	// (0x0001a570) popup_hwr_training_preview_window_ParamLimits

0xc5a8,	// (0x0001a570) popup_hwr_training_preview_window

0x489c,	// (0x00012864) hwr_training_navi_pane_g5_ParamLimits

0x489c,	// (0x00012864) hwr_training_navi_pane_g5

0xcb5b,	// (0x0001ab23) popup_char_count_window

0x9268,	// (0x00017230) bg_popup_sub_pane_cp20_ParamLimits

0x5b2b,	// (0x00013af3) list_vitu2_match_list_pane_ParamLimits

0x5b37,	// (0x00013aff) vitu2_page_scroll_pane_ParamLimits

0x5b37,	// (0x00013aff) vitu2_page_scroll_pane

0xd216,	// (0x0001b1de) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd216,	// (0x0001b1de) list_single_hwr_training_symbol_option_pane

0xd229,	// (0x0001b1f1) list_single_hwr_training_symbol_option_pane_g1

0xd231,	// (0x0001b1f9) list_single_hwr_training_symbol_option_pane_t1

0xd23f,	// (0x0001b207) bg_button_pane_cp023

0xd248,	// (0x0001b210) bg_button_pane_cp024

0xd27b,	// (0x0001b243) vitu2_page_scroll_pane_g1

0xd283,	// (0x0001b24b) vitu2_page_scroll_pane_g2

0x0001,

0xf9c7,	// (0x0001d98f) vitu2_page_scroll_pane_g

0xd28b,	// (0x0001b253) vitu2_page_scroll_pane_t1

0x9ab8,	// (0x00017a80) popup_char_count_window_g1

0xd29a,	// (0x0001b262) popup_char_count_window_g2

0xcca9,	// (0x0001ac71) popup_char_count_window_g3

0x0002,

0xf9cc,	// (0x0001d994) popup_char_count_window_g

0xd2a3,	// (0x0001b26b) popup_char_count_window_t1

0x91f9,	// (0x000171c1) main_vded2_pane

0xc3f6,	// (0x0001a3be) aid_size_cell_imed_line

0xc400,	// (0x0001a3c8) grid_imed_line_width_pane

0xcadc,	// (0x0001aaa4) vid4_indicators_pane_g4

0xd2b1,	// (0x0001b279) cell_imed_line_width_pane_ParamLimits

0xd2b1,	// (0x0001b279) cell_imed_line_width_pane

0xd2c5,	// (0x0001b28d) cell_imed_line_width_pane_g1

0xd2ce,	// (0x0001b296) cell_imed_line_width_pane_g2

0x0001,

0xf9d3,	// (0x0001d99b) cell_imed_line_width_pane_g

0x618b,	// (0x00014153) main_vded2_pane_g1_ParamLimits

0x618b,	// (0x00014153) main_vded2_pane_g1

0x61a1,	// (0x00014169) main_vded2_pane_g2_ParamLimits

0x61a1,	// (0x00014169) main_vded2_pane_g2

0x0001,

0xf9d8,	// (0x0001d9a0) main_vded2_pane_g_ParamLimits

0xf9d8,	// (0x0001d9a0) main_vded2_pane_g

0x61b3,	// (0x0001417b) vded2_slider_pane_ParamLimits

0x61b3,	// (0x0001417b) vded2_slider_pane

0x61c3,	// (0x0001418b) aid_size_touch_vded2_end

0x61cd,	// (0x00014195) aid_size_touch_vded2_playhead

0xd2d6,	// (0x0001b29e) aid_size_touch_vded2_start

0xd2de,	// (0x0001b2a6) vded2_slider_bg_pane

0xd2e7,	// (0x0001b2af) vded2_slider_pane_g1

0xd2f0,	// (0x0001b2b8) vded2_slider_pane_g2

0x61d7,	// (0x0001419f) vded2_slider_pane_g3

0x0002,

0xf9dd,	// (0x0001d9a5) vded2_slider_pane_g

0xd2f8,	// (0x0001b2c0) vded2_slider_bg_pane_g1

0xd301,	// (0x0001b2c9) vded2_slider_bg_pane_g2

0xd30a,	// (0x0001b2d2) vded2_slider_bg_pane_g3

0x0002,

0xf9e4,	// (0x0001d9ac) vded2_slider_bg_pane_g

0x2cc4,	// (0x00010c8c) aid_postcard_touch_down_pane_ParamLimits

0x2cc4,	// (0x00010c8c) aid_postcard_touch_down_pane

0x2cda,	// (0x00010ca2) aid_postcard_touch_up_pane_ParamLimits

0x2cda,	// (0x00010ca2) aid_postcard_touch_up_pane

0x91f9,	// (0x000171c1) main_blid2_pane

0xb9c8,	// (0x00019990) popup_blid2_search_window

0x91f9,	// (0x000171c1) blid2_gps_pane

0x91f9,	// (0x000171c1) blid2_navig_pane

0x91f9,	// (0x000171c1) blid2_search_pane

0x91f9,	// (0x000171c1) blid2_tripm_pane

0x61e2,	// (0x000141aa) blid2_search_pane_g1_ParamLimits

0x61e2,	// (0x000141aa) blid2_search_pane_g1

0x61fa,	// (0x000141c2) blid2_search_pane_t1_ParamLimits

0x61fa,	// (0x000141c2) blid2_search_pane_t1

0x620c,	// (0x000141d4) aid_size_cell_blid2_gps_ParamLimits

0x620c,	// (0x000141d4) aid_size_cell_blid2_gps

0x6224,	// (0x000141ec) blid2_gps_pane_g1_ParamLimits

0x6224,	// (0x000141ec) blid2_gps_pane_g1

0x6238,	// (0x00014200) grid_blid2_satellite_pane_ParamLimits

0x6238,	// (0x00014200) grid_blid2_satellite_pane

0x6252,	// (0x0001421a) blid2_navig_pane_g1_ParamLimits

0x6252,	// (0x0001421a) blid2_navig_pane_g1

0x625e,	// (0x00014226) blid2_navig_pane_t1_ParamLimits

0x625e,	// (0x00014226) blid2_navig_pane_t1

0x6279,	// (0x00014241) blid2_navig_pane_t2_ParamLimits

0x6279,	// (0x00014241) blid2_navig_pane_t2

0x0001,

0xf9eb,	// (0x0001d9b3) blid2_navig_pane_t_ParamLimits

0xf9eb,	// (0x0001d9b3) blid2_navig_pane_t

0x6294,	// (0x0001425c) blid2_navig_ring_pane_ParamLimits

0x6294,	// (0x0001425c) blid2_navig_ring_pane

0x62ad,	// (0x00014275) blid2_speed_pane_ParamLimits

0x62ad,	// (0x00014275) blid2_speed_pane

0x62b9,	// (0x00014281) blid2_tripm_pane_g1_ParamLimits

0x62b9,	// (0x00014281) blid2_tripm_pane_g1

0x62d4,	// (0x0001429c) blid2_tripm_pane_g2_ParamLimits

0x62d4,	// (0x0001429c) blid2_tripm_pane_g2

0x62e8,	// (0x000142b0) blid2_tripm_pane_g3_ParamLimits

0x62e8,	// (0x000142b0) blid2_tripm_pane_g3

0x62fc,	// (0x000142c4) blid2_tripm_pane_g4_ParamLimits

0x62fc,	// (0x000142c4) blid2_tripm_pane_g4

0x6310,	// (0x000142d8) blid2_tripm_pane_g5_ParamLimits

0x6310,	// (0x000142d8) blid2_tripm_pane_g5

0x0005,

0xf9f0,	// (0x0001d9b8) blid2_tripm_pane_g_ParamLimits

0xf9f0,	// (0x0001d9b8) blid2_tripm_pane_g

0x6336,	// (0x000142fe) blid2_tripm_pane_t1_ParamLimits

0x6336,	// (0x000142fe) blid2_tripm_pane_t1

0x6351,	// (0x00014319) blid2_tripm_pane_t2_ParamLimits

0x6351,	// (0x00014319) blid2_tripm_pane_t2

0x636a,	// (0x00014332) blid2_tripm_pane_t3_ParamLimits

0x636a,	// (0x00014332) blid2_tripm_pane_t3

0x0003,

0xf9fd,	// (0x0001d9c5) blid2_tripm_pane_t_ParamLimits

0xf9fd,	// (0x0001d9c5) blid2_tripm_pane_t

0x63b1,	// (0x00014379) cell_blid2_satellite_pane_ParamLimits

0x63b1,	// (0x00014379) cell_blid2_satellite_pane

0x63cf,	// (0x00014397) cell_blid2_satellite_pane_g1

0xd313,	// (0x0001b2db) cell_blid2_satellite_pane_t1

0x99a5,	// (0x0001796d) blid2_speed_pane_g1

0xd321,	// (0x0001b2e9) blid2_speed_pane_t1

0xd32f,	// (0x0001b2f7) blid2_speed_pane_t2

0x0001,

0xfa06,	// (0x0001d9ce) blid2_speed_pane_t

0x99a5,	// (0x0001796d) blid2_navig_ring_pane_g1

0x63d8,	// (0x000143a0) blid2_navig_ring_pane_g2

0x63e0,	// (0x000143a8) blid2_navig_ring_pane_g3

0x63e8,	// (0x000143b0) blid2_navig_ring_pane_g4

0x63f0,	// (0x000143b8) blid2_navig_ring_pane_g5

0x0004,

0xfa0b,	// (0x0001d9d3) blid2_navig_ring_pane_g

0x91f9,	// (0x000171c1) bg_popup_window_pane_cp011

0xd33d,	// (0x0001b305) popup_blid2_search_window_g1

0xd345,	// (0x0001b30d) popup_blid2_search_window_t1

0xd353,	// (0x0001b31b) popup_blid2_search_window_t2

0x0001,

0xfa16,	// (0x0001d9de) popup_blid2_search_window_t

0x9d64,	// (0x00017d2c) main_browser_pane_g1

0x9a1d,	// (0x000179e5) main_browser_pane_ParamLimits

0x9268,	// (0x00017230) bg_button_pane_cp011_ParamLimits

0x53de,	// (0x000133a6) cell_vitu2_function_pane_g1_ParamLimits

0xa79c,	// (0x00018764) bg_popup_sub_pane_cp22_ParamLimits

0x5cb5,	// (0x00013c7d) input_focus_pane_cp08_ParamLimits

0x5cd0,	// (0x00013c98) popup_vitu2_query_button_pane_ParamLimits

0x5cd0,	// (0x00013c98) popup_vitu2_query_button_pane

0x5cdf,	// (0x00013ca7) popup_vitu2_query_input_button_pane

0xcea4,	// (0x0001ae6c) popup_vitu2_query_window_g1_ParamLimits

0x5ce7,	// (0x00013caf) popup_vitu2_query_window_g2_ParamLimits

0xf917,	// (0x0001d8df) popup_vitu2_query_window_g_ParamLimits

0x91f9,	// (0x000171c1) bg_button_pane_cp026

0x63f8,	// (0x000143c0) popup_vitu2_query_input_button_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp025

0xd361,	// (0x0001b329) popup_vitu2_query_button_pane_t1

0x3b3d,	// (0x00011b05) main_mp3_pane_t6

0x3b4b,	// (0x00011b13) popup_slider_window_cp01

0xca48,	// (0x0001aa10) cam4_battery_pane

0xca9b,	// (0x0001aa63) cam4_battery_pane_cp02

0xd189,	// (0x0001b151) cam4_battery_pane_cp01

0xd189,	// (0x0001b151) cam4_battery_pane_cp03

0x99a5,	// (0x0001796d) cam4_battery_pane_g1

0xd36f,	// (0x0001b337) cam4_battery_pane_g2

0x0001,

0xfa1b,	// (0x0001d9e3) cam4_battery_pane_g

0xbd87,	// (0x00019d4f) popup_blid_sat_info2_window_t11

0xa4f8,	// (0x000184c0) aid_size_touch_mv_arrow_left_ParamLimits

0xa523,	// (0x000184eb) aid_size_touch_mv_arrow_right_ParamLimits

0xa581,	// (0x00018549) navi_pane_g1_ParamLimits

0xa58d,	// (0x00018555) navi_pane_g2_ParamLimits

0xa5bb,	// (0x00018583) navi_pane_g3_ParamLimits

0xf30c,	// (0x0001d2d4) navi_pane_g_ParamLimits

0x28e3,	// (0x000108ab) navi_pane_mv_t1_ParamLimits

0x470d,	// (0x000126d5) grid_imed_effect_pane_ParamLimits

0x1816,	// (0x0000f7de) aid_placing_vt_slider_lsc

0x9cb3,	// (0x00017c7b) aid_placing_vt_slider_prt

0x9268,	// (0x00017230) bg_tb_trans_pane_cp01_ParamLimits

0xc025,	// (0x00019fed) popup_image_details_window_g1_ParamLimits

0xc038,	// (0x0001a000) popup_image_details_window_g2_ParamLimits

0xc04d,	// (0x0001a015) popup_image_details_window_g3_ParamLimits

0xc04d,	// (0x0001a015) popup_image_details_window_g3

0xf623,	// (0x0001d5eb) popup_image_details_window_g_ParamLimits

0xc061,	// (0x0001a029) popup_image_details_window_t1_ParamLimits

0xc073,	// (0x0001a03b) popup_image_details_window_t2_ParamLimits

0xc08c,	// (0x0001a054) popup_image_details_window_t3_ParamLimits

0xc0a0,	// (0x0001a068) popup_image_details_window_t4_ParamLimits

0xc0bb,	// (0x0001a083) popup_image_details_window_t5_ParamLimits

0xf62a,	// (0x0001d5f2) popup_image_details_window_t_ParamLimits

0x604b,	// (0x00014013) cl_header_name_pane_ParamLimits

0x604b,	// (0x00014013) cl_header_name_pane

0x6400,	// (0x000143c8) cl_header_name_pane_t1_ParamLimits

0x6400,	// (0x000143c8) cl_header_name_pane_t1

0x6421,	// (0x000143e9) cl_header_name_pane_t2_ParamLimits

0x6421,	// (0x000143e9) cl_header_name_pane_t2

0x6463,	// (0x0001442b) cl_header_name_pane_t3_ParamLimits

0x6463,	// (0x0001442b) cl_header_name_pane_t3

0x0002,

0xfa20,	// (0x0001d9e8) cl_header_name_pane_t_ParamLimits

0xfa20,	// (0x0001d9e8) cl_header_name_pane_t

0xa64a,	// (0x00018612) navi_pane_mv_g2_ParamLimits

0xcb26,	// (0x0001aaee) field_vitu2_entry_pane_g1_ParamLimits

0xcb32,	// (0x0001aafa) field_vitu2_entry_pane_g2_ParamLimits

0xa77a,	// (0x00018742) field_vitu2_entry_pane_g3_ParamLimits

0xa77a,	// (0x00018742) field_vitu2_entry_pane_g3

0xf820,	// (0x0001d7e8) field_vitu2_entry_pane_g_ParamLimits

0x526e,	// (0x00013236) cell_vitu2_itu_pane_g1_ParamLimits

0x5286,	// (0x0001324e) cell_vitu2_itu_pane_g2_ParamLimits

0x5286,	// (0x0001324e) cell_vitu2_itu_pane_g2

0x0001,

0xf82c,	// (0x0001d7f4) cell_vitu2_itu_pane_g_ParamLimits

0xf82c,	// (0x0001d7f4) cell_vitu2_itu_pane_g

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp05_ParamLimits

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp05

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp03

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp04

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp10_ParamLimits

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp10

0x5fef,	// (0x00013fb7) bg_vkb2_func_pane_cp08

0x5fc8,	// (0x00013f90) bg_vkb2_func_pane_cp06

0x5fd4,	// (0x00013f9c) bg_vkb2_func_pane_cp07

0xd251,	// (0x0001b219) bg_vkb2_func_pane_cp11_ParamLimits

0xd251,	// (0x0001b219) bg_vkb2_func_pane_cp11

0xd266,	// (0x0001b22e) bg_vkb2_func_pane_cp12_ParamLimits

0xd266,	// (0x0001b22e) bg_vkb2_func_pane_cp12

0x91f9,	// (0x000171c1) bg_vkb2_func_pane_cp09

0xcb6d,	// (0x0001ab35) bg_vkb2_func_pane_g1

0x9e75,	// (0x00017e3d) bg_vkb2_func_pane_g2

0xcb75,	// (0x0001ab3d) bg_vkb2_func_pane_g3

0xcb7d,	// (0x0001ab45) bg_vkb2_func_pane_g4

0xce51,	// (0x0001ae19) bg_vkb2_func_pane_g5

0xcb95,	// (0x0001ab5d) bg_vkb2_func_pane_g6

0xcb9d,	// (0x0001ab65) bg_vkb2_func_pane_g7

0xcb8d,	// (0x0001ab55) bg_vkb2_func_pane_g8

0x9e55,	// (0x00017e1d) bg_vkb2_func_pane_g9

0x0008,

0xfa27,	// (0x0001d9ef) bg_vkb2_func_pane_g

0x6324,	// (0x000142ec) blid2_tripm_pane_g6_ParamLimits

0x6324,	// (0x000142ec) blid2_tripm_pane_g6

0xc925,	// (0x0001a8ed) mp4_progress_pane_g1

0x639d,	// (0x00014365) blid2_tripm_values_pane_ParamLimits

0x639d,	// (0x00014365) blid2_tripm_values_pane

0x6494,	// (0x0001445c) blid2_tripm_values_pane_t1

0x64a2,	// (0x0001446a) blid2_tripm_values_pane_t2

0x64b0,	// (0x00014478) blid2_tripm_values_pane_t3

0x64be,	// (0x00014486) blid2_tripm_values_pane_t4

0x64cc,	// (0x00014494) blid2_tripm_values_pane_t5

0x64da,	// (0x000144a2) blid2_tripm_values_pane_t6

0x64e8,	// (0x000144b0) blid2_tripm_values_pane_t7

0x64f6,	// (0x000144be) blid2_tripm_values_pane_t8

0x6504,	// (0x000144cc) blid2_tripm_values_pane_t9

0x0008,

0xfa3a,	// (0x0001da02) blid2_tripm_values_pane_t

0x1858,	// (0x0000f820) call_video_pane_t1_ParamLimits

0x1876,	// (0x0000f83e) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0001d182) call_video_pane_t_ParamLimits

0x2bb1,	// (0x00010b79) msg_header_pane_g1_ParamLimits

0xa868,	// (0x00018830) msg_header_pane_g2_ParamLimits

0xa868,	// (0x00018830) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x0001d372) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x0001d372) msg_header_pane_g

0x9a1d,	// (0x000179e5) main_clock2_pane_ParamLimits

0x4402,	// (0x000123ca) grid_clock2_toolbar_pane_ParamLimits

0x4402,	// (0x000123ca) grid_clock2_toolbar_pane

0x4402,	// (0x000123ca) listscroll_clock2_pane_ParamLimits

0x4402,	// (0x000123ca) listscroll_clock2_pane

0x44e6,	// (0x000124ae) main_clock2_pane_t3_ParamLimits

0x44e6,	// (0x000124ae) main_clock2_pane_t3

0x450a,	// (0x000124d2) main_clock2_pane_t4_ParamLimits

0x450a,	// (0x000124d2) main_clock2_pane_t4

0xd379,	// (0x0001b341) cell_clock2_toolbar_pane

0xd381,	// (0x0001b349) cell_clock2_toolbar_pane_cp01

0xd381,	// (0x0001b349) cell_clock2_toolbar_pane_cp02

0xd389,	// (0x0001b351) cell_clock2_toolbar_pane_cp03

0xd391,	// (0x0001b359) list_clock2_pane

0xa47d,	// (0x00018445) scroll_pane_cp10

0xd399,	// (0x0001b361) list_single_clock2_pane_ParamLimits

0xd399,	// (0x0001b361) list_single_clock2_pane

0x9c52,	// (0x00017c1a) list_highlight_pane_cp08

0xd3a6,	// (0x0001b36e) list_single_clock2_pane_t1

0xd3b4,	// (0x0001b37c) list_single_clock2_pane_t2

0x0001,

0xfa4d,	// (0x0001da15) list_single_clock2_pane_t

0x91f9,	// (0x000171c1) bg_button_pane_cp10

0xd3c2,	// (0x0001b38a) cell_clock2_toolbar_pane_g1

0x2c50,	// (0x00010c18) aid_main_viewer_pane_g1_ParamLimits

0x2c50,	// (0x00010c18) aid_main_viewer_pane_g1

0x2c5e,	// (0x00010c26) aid_main_viewer_pane_g2_ParamLimits

0x2c5e,	// (0x00010c26) aid_main_viewer_pane_g2

0x2c6c,	// (0x00010c34) aid_main_viewer_pane_g3_ParamLimits

0x2c6c,	// (0x00010c34) aid_main_viewer_pane_g3

0x2c7b,	// (0x00010c43) aid_main_viewer_pane_g4_ParamLimits

0x2c7b,	// (0x00010c43) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x0001d383) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x0001d383) aid_main_viewer_pane_g

0x3520,	// (0x000114e8) main_calc_pane_ParamLimits

0x3534,	// (0x000114fc) main_dialer2_pane_ParamLimits

0x91f9,	// (0x000171c1) main_cam6_pane

0x91f9,	// (0x000171c1) main_vid6_pane

0x440e,	// (0x000123d6) listscroll_gen_pane_cp06_ParamLimits

0x440e,	// (0x000123d6) listscroll_gen_pane_cp06

0x452d,	// (0x000124f5) main_clock2_pane_t5_ParamLimits

0x452d,	// (0x000124f5) main_clock2_pane_t5

0x458b,	// (0x00012553) aid_call2_pane_cp10_ParamLimits

0x459d,	// (0x00012565) aid_call_pane_cp10_ParamLimits

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x45af,	// (0x00012577) popup_clock_analogue_window_cp10_g3_ParamLimits

0x45af,	// (0x00012577) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa4ec,	// (0x000184b4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6df,	// (0x0001d6a7) popup_clock_analogue_window_cp10_g_ParamLimits

0x45c5,	// (0x0001258d) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc990,	// (0x0001a958) cell_dialer2_keypad_pane_g2_ParamLimits

0xc990,	// (0x0001a958) cell_dialer2_keypad_pane_g2

0x0001,

0xf7bf,	// (0x0001d787) cell_dialer2_keypad_pane_g_ParamLimits

0xf7bf,	// (0x0001d787) cell_dialer2_keypad_pane_g

0x99af,	// (0x00017977) cell_dialer2_keypad_pane_t1

0x56f9,	// (0x000136c1) main_cset_text2_pane_ParamLimits

0x56f9,	// (0x000136c1) main_cset_text2_pane

0xd090,	// (0x0001b058) area_vitu2_query_pane_g1_ParamLimits

0x5f69,	// (0x00013f31) area_vitu2_query_pane_g2_ParamLimits

0xf96a,	// (0x0001d932) area_vitu2_query_pane_g_ParamLimits

0xd114,	// (0x0001b0dc) area_vitu2_query_pane_t7_ParamLimits

0xd114,	// (0x0001b0dc) area_vitu2_query_pane_t7

0x5fc8,	// (0x00013f90) bg_button_pane_cp018_ParamLimits

0x5fd4,	// (0x00013f9c) bg_button_pane_cp021_ParamLimits

0x5fe0,	// (0x00013fa8) bg_button_pane_cp022_ParamLimits

0x5fef,	// (0x00013fb7) bg_vkb2_func_pane_cp08_ParamLimits

0x5fc8,	// (0x00013f90) bg_vkb2_func_pane_cp06_ParamLimits

0x5fd4,	// (0x00013f9c) bg_vkb2_func_pane_cp07_ParamLimits

0x5fff,	// (0x00013fc7) input_focus_pane_cp09_ParamLimits

0x6512,	// (0x000144da) cam6_autofocus_pane_ParamLimits

0x6512,	// (0x000144da) cam6_autofocus_pane

0x651e,	// (0x000144e6) cam6_image_uncrop_pane_ParamLimits

0x651e,	// (0x000144e6) cam6_image_uncrop_pane

0x652e,	// (0x000144f6) cam6_indi_pane_ParamLimits

0x652e,	// (0x000144f6) cam6_indi_pane

0x6544,	// (0x0001450c) cam6_mode_pane_ParamLimits

0x6544,	// (0x0001450c) cam6_mode_pane

0x6556,	// (0x0001451e) cam6_timer_pane_ParamLimits

0x6556,	// (0x0001451e) cam6_timer_pane

0x6562,	// (0x0001452a) cam6_zoom_pane_ParamLimits

0x6562,	// (0x0001452a) cam6_zoom_pane

0x656f,	// (0x00014537) cam6_mode_pane_g1_ParamLimits

0x656f,	// (0x00014537) cam6_mode_pane_g1

0x657f,	// (0x00014547) cam6_mode_pane_g2_ParamLimits

0x657f,	// (0x00014547) cam6_mode_pane_g2

0x658f,	// (0x00014557) cam6_mode_pane_g3_ParamLimits

0x658f,	// (0x00014557) cam6_mode_pane_g3

0x659f,	// (0x00014567) cam6_mode_pane_g4_ParamLimits

0x659f,	// (0x00014567) cam6_mode_pane_g4

0x0003,

0xfa52,	// (0x0001da1a) cam6_mode_pane_g_ParamLimits

0xfa52,	// (0x0001da1a) cam6_mode_pane_g

0xbb3d,	// (0x00019b05) bg_tb_trans_pane_cp08_ParamLimits

0xbb3d,	// (0x00019b05) bg_tb_trans_pane_cp08

0xd3d8,	// (0x0001b3a0) cam6_battery_pane_ParamLimits

0xd3d8,	// (0x0001b3a0) cam6_battery_pane

0xd3ee,	// (0x0001b3b6) cam6_indi_pane_g1_ParamLimits

0xd3ee,	// (0x0001b3b6) cam6_indi_pane_g1

0xd400,	// (0x0001b3c8) cam6_indi_pane_g2_ParamLimits

0xd400,	// (0x0001b3c8) cam6_indi_pane_g2

0xd412,	// (0x0001b3da) cam6_indi_pane_g3_ParamLimits

0xd412,	// (0x0001b3da) cam6_indi_pane_g3

0x0002,

0xfa5b,	// (0x0001da23) cam6_indi_pane_g_ParamLimits

0xfa5b,	// (0x0001da23) cam6_indi_pane_g

0xd424,	// (0x0001b3ec) cam6_indi_pane_t1_ParamLimits

0xd424,	// (0x0001b3ec) cam6_indi_pane_t1

0x501e,	// (0x00012fe6) cam6_autofocus_pane_g1

0x5026,	// (0x00012fee) cam6_autofocus_pane_g2

0x502e,	// (0x00012ff6) cam6_autofocus_pane_g3

0x5036,	// (0x00012ffe) cam6_autofocus_pane_g4

0x0003,

0xfa62,	// (0x0001da2a) cam6_autofocus_pane_g

0xd44a,	// (0x0001b412) cam6_timer_pane_g1

0xd452,	// (0x0001b41a) cam6_timer_pane_t1

0xd460,	// (0x0001b428) cam6_zoom_cont_pane

0xd468,	// (0x0001b430) cam6_zoom_pane_g1

0xd471,	// (0x0001b439) cam6_zoom_pane_g2

0x65af,	// (0x00014577) cam6_zoom_pane_g3

0x0002,

0xfa6b,	// (0x0001da33) cam6_zoom_pane_g

0x99a5,	// (0x0001796d) cam6_battery_pane_g1

0x99a5,	// (0x0001796d) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0001d054) cam6_battery_pane_g

0xd468,	// (0x0001b430) cam6_zoom_cont_pane_g1

0xd471,	// (0x0001b439) cam6_zoom_cont_pane_g2

0xd47a,	// (0x0001b442) cam6_zoom_cont_pane_g3

0x0002,

0xfa72,	// (0x0001da3a) cam6_zoom_cont_pane_g

0x65cd,	// (0x00014595) cam6_mode_pane_cp_ParamLimits

0x65cd,	// (0x00014595) cam6_mode_pane_cp

0x65df,	// (0x000145a7) cam6_zoom_pane_cp_ParamLimits

0x65df,	// (0x000145a7) cam6_zoom_pane_cp

0x65eb,	// (0x000145b3) vid6_image_uncrop_cif_pane_ParamLimits

0x65eb,	// (0x000145b3) vid6_image_uncrop_cif_pane

0x65fb,	// (0x000145c3) vid6_image_uncrop_nhd_pane_ParamLimits

0x65fb,	// (0x000145c3) vid6_image_uncrop_nhd_pane

0x660a,	// (0x000145d2) vid6_image_uncrop_vga_pane_ParamLimits

0x660a,	// (0x000145d2) vid6_image_uncrop_vga_pane

0x6619,	// (0x000145e1) vid6_image_uncrop_wvga_pane_ParamLimits

0x6619,	// (0x000145e1) vid6_image_uncrop_wvga_pane

0x6628,	// (0x000145f0) vid6_indi_pane_ParamLimits

0x6628,	// (0x000145f0) vid6_indi_pane

0xbb3d,	// (0x00019b05) bg_tb_trans_pane_cp09_ParamLimits

0xbb3d,	// (0x00019b05) bg_tb_trans_pane_cp09

0xd492,	// (0x0001b45a) cam6_battery_pane_cp_ParamLimits

0xd492,	// (0x0001b45a) cam6_battery_pane_cp

0xd49e,	// (0x0001b466) vid6_indi_pane_g1_ParamLimits

0xd49e,	// (0x0001b466) vid6_indi_pane_g1

0xd4b0,	// (0x0001b478) vid6_indi_pane_g2_ParamLimits

0xd4b0,	// (0x0001b478) vid6_indi_pane_g2

0xd4c2,	// (0x0001b48a) vid6_indi_pane_g3_ParamLimits

0xd4c2,	// (0x0001b48a) vid6_indi_pane_g3

0xd4d7,	// (0x0001b49f) vid6_indi_pane_g4_ParamLimits

0xd4d7,	// (0x0001b49f) vid6_indi_pane_g4

0xd4ec,	// (0x0001b4b4) vid6_indi_pane_g5_ParamLimits

0xd4ec,	// (0x0001b4b4) vid6_indi_pane_g5

0x0004,

0xfa79,	// (0x0001da41) vid6_indi_pane_g_ParamLimits

0xfa79,	// (0x0001da41) vid6_indi_pane_g

0xd506,	// (0x0001b4ce) vid6_indi_pane_t1_ParamLimits

0xd506,	// (0x0001b4ce) vid6_indi_pane_t1

0xd51c,	// (0x0001b4e4) vid6_indi_pane_t2_ParamLimits

0xd51c,	// (0x0001b4e4) vid6_indi_pane_t2

0xd544,	// (0x0001b50c) vid6_indi_pane_t3_ParamLimits

0xd544,	// (0x0001b50c) vid6_indi_pane_t3

0xd56c,	// (0x0001b534) vid6_indi_pane_t4_ParamLimits

0xd56c,	// (0x0001b534) vid6_indi_pane_t4

0x0003,

0xfa84,	// (0x0001da4c) vid6_indi_pane_t_ParamLimits

0xfa84,	// (0x0001da4c) vid6_indi_pane_t

0xd590,	// (0x0001b558) wait_bar_pane_cp08

0x6640,	// (0x00014608) main_cset_text2_pane_t1_ParamLimits

0x6640,	// (0x00014608) main_cset_text2_pane_t1

0x65b8,	// (0x00014580) listscroll_gen_pane_cp06_t1_ParamLimits

0x65b8,	// (0x00014580) listscroll_gen_pane_cp06_t1

0x91f9,	// (0x000171c1) main_cam6_set_pane

0x995f,	// (0x00017927) bg_tb_trans_pane_cp06_ParamLimits

0xca50,	// (0x0001aa18) cam4_indicators_pane_g1_ParamLimits

0xca61,	// (0x0001aa29) cam4_indicators_pane_g2_ParamLimits

0xf7fc,	// (0x0001d7c4) cam4_indicators_pane_g_ParamLimits

0xca79,	// (0x0001aa41) cam4_indicators_pane_t1_ParamLimits

0x9268,	// (0x00017230) bg_tb_trans_pane_cp07_ParamLimits

0xcaa3,	// (0x0001aa6b) vid4_indicators_pane_g1_ParamLimits

0xcab7,	// (0x0001aa7f) vid4_indicators_pane_g2_ParamLimits

0xcacb,	// (0x0001aa93) vid4_indicators_pane_g3_ParamLimits

0xcadc,	// (0x0001aaa4) vid4_indicators_pane_g4_ParamLimits

0xf80e,	// (0x0001d7d6) vid4_indicators_pane_g_ParamLimits

0xcaf8,	// (0x0001aac0) vid4_indicators_pane_t1_ParamLimits

0xd191,	// (0x0001b159) vid4_progress_pane_g1_ParamLimits

0xd1a1,	// (0x0001b169) vid4_progress_pane_g2_ParamLimits

0x613e,	// (0x00014106) vid4_progress_pane_g3_ParamLimits

0xd1b1,	// (0x0001b179) vid4_progress_pane_g4_ParamLimits

0xf9b5,	// (0x0001d97d) vid4_progress_pane_g_ParamLimits

0x6150,	// (0x00014118) vid4_progress_pane_t1_ParamLimits

0xd1c9,	// (0x0001b191) vid4_progress_pane_t2_ParamLimits

0xd1de,	// (0x0001b1a6) vid4_progress_pane_t3_ParamLimits

0xf9c0,	// (0x0001d988) vid4_progress_pane_t_ParamLimits

0x6166,	// (0x0001412e) wait_bar_pane_cp07_ParamLimits

0x665e,	// (0x00014626) main_cam6_set_pane_g2_ParamLimits

0x665e,	// (0x00014626) main_cam6_set_pane_g2

0x6682,	// (0x0001464a) main_cset6_listscroll_pane_ParamLimits

0x6682,	// (0x0001464a) main_cset6_listscroll_pane

0x669e,	// (0x00014666) main_cset6_slider_pane_ParamLimits

0x669e,	// (0x00014666) main_cset6_slider_pane

0x66b4,	// (0x0001467c) main_cset6_text2_pane_ParamLimits

0x66b4,	// (0x0001467c) main_cset6_text2_pane

0xd59f,	// (0x0001b567) main_cset6_text_pane

0xd5a7,	// (0x0001b56f) main_cset_list_pane_copy1_ParamLimits

0xd5a7,	// (0x0001b56f) main_cset_list_pane_copy1

0xd5b7,	// (0x0001b57f) scroll_pane_cp028_copy1

0x66c2,	// (0x0001468a) cset_list_set_pane_copy1

0x66d4,	// (0x0001469c) aid_position_infowindow_above_copy1

0x66dc,	// (0x000146a4) aid_position_infowindow_below_copy1

0xd5c0,	// (0x0001b588) cset_list_set_pane_g1_copy1

0xd5c8,	// (0x0001b590) cset_list_set_pane_g3_copy1_ParamLimits

0xd5c8,	// (0x0001b590) cset_list_set_pane_g3_copy1

0xd5d7,	// (0x0001b59f) cset_list_set_pane_t1_copy1_ParamLimits

0xd5d7,	// (0x0001b59f) cset_list_set_pane_t1_copy1

0x9268,	// (0x00017230) list_highlight_pane_cp021_copy1_ParamLimits

0x9268,	// (0x00017230) list_highlight_pane_cp021_copy1

0xd5ec,	// (0x0001b5b4) cset6_slider_pane_ParamLimits

0xd5ec,	// (0x0001b5b4) cset6_slider_pane

0xd618,	// (0x0001b5e0) main_cset6_slider_pane_g1_ParamLimits

0xd618,	// (0x0001b5e0) main_cset6_slider_pane_g1

0x66e4,	// (0x000146ac) main_cset6_slider_pane_g2_ParamLimits

0x66e4,	// (0x000146ac) main_cset6_slider_pane_g2

0xd640,	// (0x0001b608) main_cset6_slider_pane_g3_ParamLimits

0xd640,	// (0x0001b608) main_cset6_slider_pane_g3

0x670c,	// (0x000146d4) main_cset6_slider_pane_g4_ParamLimits

0x670c,	// (0x000146d4) main_cset6_slider_pane_g4

0xd64c,	// (0x0001b614) main_cset6_slider_pane_g5_ParamLimits

0xd64c,	// (0x0001b614) main_cset6_slider_pane_g5

0xcce3,	// (0x0001acab) main_cset6_slider_pane_g7_ParamLimits

0xcce3,	// (0x0001acab) main_cset6_slider_pane_g7

0xccef,	// (0x0001acb7) main_cset6_slider_pane_g8_ParamLimits

0xccef,	// (0x0001acb7) main_cset6_slider_pane_g8

0x579f,	// (0x00013767) main_cset6_slider_pane_g9_ParamLimits

0x579f,	// (0x00013767) main_cset6_slider_pane_g9

0x57ab,	// (0x00013773) main_cset6_slider_pane_g10_ParamLimits

0x57ab,	// (0x00013773) main_cset6_slider_pane_g10

0x57b7,	// (0x0001377f) main_cset6_slider_pane_g11_ParamLimits

0x57b7,	// (0x0001377f) main_cset6_slider_pane_g11

0x57c3,	// (0x0001378b) main_cset6_slider_pane_g12_ParamLimits

0x57c3,	// (0x0001378b) main_cset6_slider_pane_g12

0x57cf,	// (0x00013797) main_cset6_slider_pane_g13_ParamLimits

0x57cf,	// (0x00013797) main_cset6_slider_pane_g13

0x57db,	// (0x000137a3) main_cset6_slider_pane_g14_ParamLimits

0x57db,	// (0x000137a3) main_cset6_slider_pane_g14

0x6718,	// (0x000146e0) main_cset6_slider_pane_g15_ParamLimits

0x6718,	// (0x000146e0) main_cset6_slider_pane_g15

0xccfb,	// (0x0001acc3) main_cset6_slider_pane_g16_ParamLimits

0xccfb,	// (0x0001acc3) main_cset6_slider_pane_g16

0xcd07,	// (0x0001accf) main_cset6_slider_pane_g17_ParamLimits

0xcd07,	// (0x0001accf) main_cset6_slider_pane_g17

0x0011,

0xfa8d,	// (0x0001da55) main_cset6_slider_pane_g_ParamLimits

0xfa8d,	// (0x0001da55) main_cset6_slider_pane_g

0xd658,	// (0x0001b620) main_cset6_slider_pane_t1_ParamLimits

0xd658,	// (0x0001b620) main_cset6_slider_pane_t1

0x6748,	// (0x00014710) main_cset6_slider_pane_t2_ParamLimits

0x6748,	// (0x00014710) main_cset6_slider_pane_t2

0x6773,	// (0x0001473b) main_cset6_slider_pane_t3_ParamLimits

0x6773,	// (0x0001473b) main_cset6_slider_pane_t3

0x679e,	// (0x00014766) main_cset6_slider_pane_t4_ParamLimits

0x679e,	// (0x00014766) main_cset6_slider_pane_t4

0x67c9,	// (0x00014791) main_cset6_slider_pane_t5_ParamLimits

0x67c9,	// (0x00014791) main_cset6_slider_pane_t5

0xd699,	// (0x0001b661) main_cset6_slider_pane_t7_ParamLimits

0xd699,	// (0x0001b661) main_cset6_slider_pane_t7

0x67f4,	// (0x000147bc) main_cset6_slider_pane_t8_ParamLimits

0x67f4,	// (0x000147bc) main_cset6_slider_pane_t8

0x6818,	// (0x000147e0) main_cset6_slider_pane_t9_ParamLimits

0x6818,	// (0x000147e0) main_cset6_slider_pane_t9

0x683c,	// (0x00014804) main_cset6_slider_pane_t10_ParamLimits

0x683c,	// (0x00014804) main_cset6_slider_pane_t10

0x6860,	// (0x00014828) main_cset6_slider_pane_t11_ParamLimits

0x6860,	// (0x00014828) main_cset6_slider_pane_t11

0xd6cf,	// (0x0001b697) main_cset6_slider_pane_t14_ParamLimits

0xd6cf,	// (0x0001b697) main_cset6_slider_pane_t14

0xd708,	// (0x0001b6d0) main_cset6_slider_pane_t15_ParamLimits

0xd708,	// (0x0001b6d0) main_cset6_slider_pane_t15

0x000b,

0xfab2,	// (0x0001da7a) main_cset6_slider_pane_t_ParamLimits

0xfab2,	// (0x0001da7a) main_cset6_slider_pane_t

0xcde9,	// (0x0001adb1) cset_slider_pane_g1_copy1

0xcdf2,	// (0x0001adba) cset_slider_pane_g2_copy1

0xcdfb,	// (0x0001adc3) cset_slider_pane_g3_copy1

0x91f9,	// (0x000171c1) bg_popup_sub_pane_cp011_copy1

0xd74a,	// (0x0001b712) main_cset_text_pane_g1_copy1

0xceb8,	// (0x0001ae80) main_cset_text_pane_t1_copy1

0xcec6,	// (0x0001ae8e) main_cset_text_pane_t2_copy1

0xced4,	// (0x0001ae9c) main_cset_text_pane_t3_copy1

0xcee2,	// (0x0001aeaa) main_cset_text_pane_t4_copy1

0xcef0,	// (0x0001aeb8) main_cset_text_pane_t5_copy1

0xd752,	// (0x0001b71a) main_cset_text_pane_t6_copy1

0xd760,	// (0x0001b728) main_cset_text_pane_t7_copy1

0x6640,	// (0x00014608) main_cset_text2_pane_t1_copy1

0x9268,	// (0x00017230) main_ncimui_pane

0x3778,	// (0x00011740) popup_query_ncimui_window_ParamLimits

0x3778,	// (0x00011740) popup_query_ncimui_window

0xc198,	// (0x0001a160) field_cale_ev2_pane_g4_ParamLimits

0xc198,	// (0x0001a160) field_cale_ev2_pane_g4

0x4991,	// (0x00012959) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4991,	// (0x00012959) cell_video_dialer_keypad_pane_g2

0x0001,

0xf796,	// (0x0001d75e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf796,	// (0x0001d75e) cell_video_dialer_keypad_pane_g

0x49a9,	// (0x00012971) cell_video_dialer_keypad_pane_t1

0x91f9,	// (0x000171c1) bg_popup_window_pane_cp012

0xa375,	// (0x0001833d) heading_pane_cp06

0xd78c,	// (0x0001b754) ncim_query_content_pane

0x91f9,	// (0x000171c1) bg_popup_heading_pane_cp01

0xd794,	// (0x0001b75c) ncim_heading_pane_t1

0xd7a2,	// (0x0001b76a) ncim_indicator_popup_pane

0xd7b4,	// (0x0001b77c) ncim_query_button_pane

0xd7c8,	// (0x0001b790) ncim_query_content_pane_t1

0xd7da,	// (0x0001b7a2) ncim_query_content_pane_t2

0x0005,

0xfaf6,	// (0x0001dabe) ncim_query_content_pane_t

0xd814,	// (0x0001b7dc) ncim_query_list_pane

0xd826,	// (0x0001b7ee) ncim_query_popup_pane

0xd7a2,	// (0x0001b76a) ncim_indicator_popup_pane_ParamLimits

0x69ca,	// (0x00014992) ncim_query_content_pane_g1_ParamLimits

0x69ca,	// (0x00014992) ncim_query_content_pane_g1

0xd7c8,	// (0x0001b790) ncim_query_content_pane_t1_ParamLimits

0xd7da,	// (0x0001b7a2) ncim_query_content_pane_t2_ParamLimits

0x69d6,	// (0x0001499e) ncim_query_content_pane_t3_ParamLimits

0x69d6,	// (0x0001499e) ncim_query_content_pane_t3

0x69fe,	// (0x000149c6) ncim_query_content_pane_t4_ParamLimits

0x69fe,	// (0x000149c6) ncim_query_content_pane_t4

0x6a26,	// (0x000149ee) ncim_query_content_pane_t5_ParamLimits

0x6a26,	// (0x000149ee) ncim_query_content_pane_t5

0xd7ec,	// (0x0001b7b4) ncim_query_content_pane_t6_ParamLimits

0xd7ec,	// (0x0001b7b4) ncim_query_content_pane_t6

0xfaf6,	// (0x0001dabe) ncim_query_content_pane_t_ParamLimits

0xd814,	// (0x0001b7dc) ncim_query_list_pane_ParamLimits

0xd826,	// (0x0001b7ee) ncim_query_popup_pane_ParamLimits

0xd83a,	// (0x0001b802) wait_bar_pane_cp04

0x91f9,	// (0x000171c1) input_focus_pane_cp011

0xd842,	// (0x0001b80a) ncim_query_popup_pane_t1

0xd850,	// (0x0001b818) ncim_list_query_list_pane_ParamLimits

0xd850,	// (0x0001b818) ncim_list_query_list_pane

0x91f9,	// (0x000171c1) bg_button_pane_cp027

0xd85d,	// (0x0001b825) ncim_query_button_pane_g1

0x91f9,	// (0x000171c1) list_highlight_pane_cp012

0xd867,	// (0x0001b82f) ncim_list_query_list_pane_g1

0xd86f,	// (0x0001b837) ncim_list_query_list_pane_t1

0xca6d,	// (0x0001aa35) cam4_indicators_pane_g3_ParamLimits

0xca6d,	// (0x0001aa35) cam4_indicators_pane_g3

0xcae8,	// (0x0001aab0) vid4_indicators_pane_g5_ParamLimits

0xcae8,	// (0x0001aab0) vid4_indicators_pane_g5

0xd1bd,	// (0x0001b185) vid4_progress_pane_g5_ParamLimits

0xd1bd,	// (0x0001b185) vid4_progress_pane_g5

0x68b5,	// (0x0001487d) main_ncimui_pane_g1

0x691e,	// (0x000148e6) ncimui_group_query_pane_ParamLimits

0x691e,	// (0x000148e6) ncimui_group_query_pane

0x6966,	// (0x0001492e) ncimui_list_pane_ParamLimits

0x6966,	// (0x0001492e) ncimui_list_pane

0x698d,	// (0x00014955) ncimui_text_pane_ParamLimits

0x698d,	// (0x00014955) ncimui_text_pane

0x6a4e,	// (0x00014a16) ncimui_text_pane_t1_ParamLimits

0x6a4e,	// (0x00014a16) ncimui_text_pane_t1

0xd87d,	// (0x0001b845) ncimui_list_single_graphic_pane_ParamLimits

0xd87d,	// (0x0001b845) ncimui_list_single_graphic_pane

0x6a6c,	// (0x00014a34) ncimui_query_pane_ParamLimits

0x6a6c,	// (0x00014a34) ncimui_query_pane

0x91f9,	// (0x000171c1) list_highlight_pane_cp013

0xd88d,	// (0x0001b855) ncim_list_query_list_pane_t1_copy1

0xd89b,	// (0x0001b863) ncim_list_single_graphic_pane_g1

0x6a7f,	// (0x00014a47) ncim_query_button_pane_cp01

0x6a8b,	// (0x00014a53) ncim_query_entry_pane_ParamLimits

0x6a8b,	// (0x00014a53) ncim_query_entry_pane

0x6a9e,	// (0x00014a66) ncimui_query_pane_g1

0x6aaa,	// (0x00014a72) ncimui_query_pane_t1_ParamLimits

0x6aaa,	// (0x00014a72) ncimui_query_pane_t1

0x9268,	// (0x00017230) input_focus_pane_cp012

0xd8a3,	// (0x0001b86b) ncim_query_entry_pane_t1

0x9a1d,	// (0x000179e5) main_im_pane_ParamLimits

0x9268,	// (0x00017230) main_mobtv_pane_ParamLimits

0x9268,	// (0x00017230) main_mobtv_pane

0x6730,	// (0x000146f8) main_cset6_slider_pane_g18_ParamLimits

0x6730,	// (0x000146f8) main_cset6_slider_pane_g18

0x673c,	// (0x00014704) main_cset6_slider_pane_g19_ParamLimits

0x673c,	// (0x00014704) main_cset6_slider_pane_g19

0x997b,	// (0x00017943) bg_main_mobtv_pane_ParamLimits

0x997b,	// (0x00017943) bg_main_mobtv_pane

0x6ac3,	// (0x00014a8b) main_mobtv_info_pane

0x6acc,	// (0x00014a94) main_mobtv_loading_pane_ParamLimits

0x6acc,	// (0x00014a94) main_mobtv_loading_pane

0xd8b5,	// (0x0001b87d) main_mobtv_pg_channel_list_pane

0xd8bf,	// (0x0001b887) main_mobtv_pg_hdr_pane

0x6ad9,	// (0x00014aa1) main_mobtv_programe_curr_pane_ParamLimits

0x6ad9,	// (0x00014aa1) main_mobtv_programe_curr_pane

0x6ae6,	// (0x00014aae) main_mobtv_programe_next_pane_ParamLimits

0x6ae6,	// (0x00014aae) main_mobtv_programe_next_pane

0xd8c8,	// (0x0001b890) popup_mobtv_noti_window

0x99a5,	// (0x0001796d) main_tv_pg_hdr_pane_g1

0xd8d0,	// (0x0001b898) main_tv_pg_hdr_pane_g2

0xd8d8,	// (0x0001b8a0) main_tv_pg_hdr_pane_g3

0xd8e0,	// (0x0001b8a8) main_tv_pg_hdr_pane_g4

0xd8e8,	// (0x0001b8b0) main_tv_pg_hdr_pane_g5

0xd8f2,	// (0x0001b8ba) main_tv_pg_hdr_pane_g6

0xd8fc,	// (0x0001b8c4) main_tv_pg_hdr_pane_g7

0xd906,	// (0x0001b8ce) main_tv_pg_hdr_pane_g8

0xd910,	// (0x0001b8d8) main_tv_pg_hdr_pane_g9

0xd91a,	// (0x0001b8e2) main_tv_pg_hdr_pane_g10

0xd924,	// (0x0001b8ec) main_tv_pg_hdr_pane_g11

0x000a,

0xfb03,	// (0x0001dacb) main_tv_pg_hdr_pane_g

0xd92e,	// (0x0001b8f6) main_tv_pg_hdr_pane_t1

0xd93c,	// (0x0001b904) main_tv_pg_hdr_pane_t2

0xd94a,	// (0x0001b912) main_tv_pg_hdr_pane_t3

0xd95a,	// (0x0001b922) main_tv_pg_hdr_pane_t4

0xd96a,	// (0x0001b932) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1a,	// (0x0001dae2) main_tv_pg_hdr_pane_t

0xd97a,	// (0x0001b942) single_mobtv_pg_channel_pane_ParamLimits

0xd97a,	// (0x0001b942) single_mobtv_pg_channel_pane

0xd98c,	// (0x0001b954) single_mobtv_pg_channel_table_pane

0x9f84,	// (0x00017f4c) single_mobtv_pg_channel_thumb_pane

0xd995,	// (0x0001b95d) single_tv_pg_channel_pane_g1

0xd99e,	// (0x0001b966) single_tv_pg_channel_pane_g2

0x0001,

0xfb25,	// (0x0001daed) single_tv_pg_channel_pane_g

0x995f,	// (0x00017927) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x995f,	// (0x00017927) bg_single_mobtv_pg_channel_thumb_pane

0xd9a7,	// (0x0001b96f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9a7,	// (0x0001b96f) single_mobtv_pg_channel_thumb_pane_g1

0xd9b5,	// (0x0001b97d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9b5,	// (0x0001b97d) single_mobtv_pg_channel_thumb_pane_g2

0xd9c1,	// (0x0001b989) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9c1,	// (0x0001b989) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2a,	// (0x0001daf2) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2a,	// (0x0001daf2) single_mobtv_pg_channel_thumb_pane_g

0xd9cd,	// (0x0001b995) single_mobtv_pg_channel_thumb_pane_t1

0xd9db,	// (0x0001b9a3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb31,	// (0x0001daf9) single_mobtv_pg_channel_thumb_pane_t

0x99a5,	// (0x0001796d) bg_single_mobtv_pg_channel_table_pane_g1

0x99a5,	// (0x0001796d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0001d054) bg_single_mobtv_pg_channel_table_pane_g

0xd9e9,	// (0x0001b9b1) single_mobtv_pg_channel_table_pane_t1

0xd9f7,	// (0x0001b9bf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb36,	// (0x0001dafe) single_mobtv_pg_channel_table_pane_t

0x6afb,	// (0x00014ac3) main_mobtv_info_pane_g1_ParamLimits

0x6afb,	// (0x00014ac3) main_mobtv_info_pane_g1

0x6b19,	// (0x00014ae1) main_mobtv_info_pane_t1_ParamLimits

0x6b19,	// (0x00014ae1) main_mobtv_info_pane_t1

0x6b91,	// (0x00014b59) main_mobtv_info_pane_t2_ParamLimits

0x6b91,	// (0x00014b59) main_mobtv_info_pane_t2

0x0002,

0xfb40,	// (0x0001db08) main_mobtv_info_pane_t_ParamLimits

0xfb40,	// (0x0001db08) main_mobtv_info_pane_t

0x6c20,	// (0x00014be8) wait_bar_pane_cp05

0x6c32,	// (0x00014bfa) main_mobtv_loading_pane_g1_ParamLimits

0x6c32,	// (0x00014bfa) main_mobtv_loading_pane_g1

0x6c45,	// (0x00014c0d) main_mobtv_loading_pane_g2_ParamLimits

0x6c45,	// (0x00014c0d) main_mobtv_loading_pane_g2

0x6c51,	// (0x00014c19) main_mobtv_loading_pane_g3_ParamLimits

0x6c51,	// (0x00014c19) main_mobtv_loading_pane_g3

0x0002,

0xfb47,	// (0x0001db0f) main_mobtv_loading_pane_g_ParamLimits

0xfb47,	// (0x0001db0f) main_mobtv_loading_pane_g

0xda05,	// (0x0001b9cd) main_mobtv_loading_pane_t1_ParamLimits

0xda05,	// (0x0001b9cd) main_mobtv_loading_pane_t1

0xda1d,	// (0x0001b9e5) main_mobtv_loading_pane_t2_ParamLimits

0xda1d,	// (0x0001b9e5) main_mobtv_loading_pane_t2

0x0001,

0xfb4e,	// (0x0001db16) main_mobtv_loading_pane_t_ParamLimits

0xfb4e,	// (0x0001db16) main_mobtv_loading_pane_t

0x6c64,	// (0x00014c2c) wait_bar_pane_cp06_ParamLimits

0x6c64,	// (0x00014c2c) wait_bar_pane_cp06

0xda41,	// (0x0001ba09) main_mobtv_programe_curr_pane_t1

0xda4f,	// (0x0001ba17) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb53,	// (0x0001db1b) main_mobtv_programe_curr_pane_t

0xda5d,	// (0x0001ba25) main_mobtv_programe_next_pane_t1

0xda6b,	// (0x0001ba33) main_mobtv_programe_next_pane_t2

0xda79,	// (0x0001ba41) main_mobtv_programe_next_pane_t3

0x0002,

0xfb58,	// (0x0001db20) main_mobtv_programe_next_pane_t

0x91f9,	// (0x000171c1) bg_popup_mobtv_noti_window_pane

0xda87,	// (0x0001ba4f) popup_mobtv_noti_window_g1

0xda8f,	// (0x0001ba57) popup_mobtv_noti_window_t1

0xda9d,	// (0x0001ba65) popup_mobtv_noti_window_t2

0x0001,

0xfb5f,	// (0x0001db27) popup_mobtv_noti_window_t

0x99a5,	// (0x0001796d) bg_popup_mobtv_noti_window_pane_g1

0x91f9,	// (0x000171c1) sc_clock_pane

0x91f9,	// (0x000171c1) main_fs_bigclock_pane

0x6387,	// (0x0001434f) blid2_tripm_pane_t4_ParamLimits

0x6387,	// (0x0001434f) blid2_tripm_pane_t4

0x995f,	// (0x00017927) sc_clock_pane_g1_ParamLimits

0x995f,	// (0x00017927) sc_clock_pane_g1

0x99af,	// (0x00017977) sc_clock_pane_t1_ParamLimits

0x99af,	// (0x00017977) sc_clock_pane_t1

0x99af,	// (0x00017977) sc_clock_pane_t2_ParamLimits

0x99af,	// (0x00017977) sc_clock_pane_t2

0x99af,	// (0x00017977) sc_clock_pane_t3_ParamLimits

0x99af,	// (0x00017977) sc_clock_pane_t3

0x0004,

0xfb64,	// (0x0001db2c) sc_clock_pane_t_ParamLimits

0xfb64,	// (0x0001db2c) sc_clock_pane_t

0x7763,	// (0x0001572b) main_fs_bigclock_indicator_pane_ParamLimits

0x7763,	// (0x0001572b) main_fs_bigclock_indicator_pane

0x6cc2,	// (0x00014c8a) main_fs_bigclock_pane_g1_ParamLimits

0x6cc2,	// (0x00014c8a) main_fs_bigclock_pane_g1

0x776f,	// (0x00015737) main_fs_bigclock_pane_t1_ParamLimits

0x776f,	// (0x00015737) main_fs_bigclock_pane_t1

0x7781,	// (0x00015749) main_fs_bigclock_pane_t2_ParamLimits

0x7781,	// (0x00015749) main_fs_bigclock_pane_t2

0x7795,	// (0x0001575d) main_fs_bigclock_pane_t3_ParamLimits

0x7795,	// (0x0001575d) main_fs_bigclock_pane_t3

0x0002,

0xfce2,	// (0x0001dcaa) main_fs_bigclock_pane_t_ParamLimits

0xfce2,	// (0x0001dcaa) main_fs_bigclock_pane_t

0xe5b3,	// (0x0001c57b) main_fs_bigclock_indicator_pane_g1

0xd7bc,	// (0x0001b784) ncim_query_content_pane_g2_ParamLimits

0xd7bc,	// (0x0001b784) ncim_query_content_pane_g2

0x0001,

0xfaf1,	// (0x0001dab9) ncim_query_content_pane_g_ParamLimits

0xfaf1,	// (0x0001dab9) ncim_query_content_pane_g

0x99af,	// (0x00017977) sc_clock_pane_t4_ParamLimits

0x99af,	// (0x00017977) sc_clock_pane_t4

0x9268,	// (0x00017230) main_radioblah_pane

0xc9de,	// (0x0001a9a6) cell_call4_button_pane_t1_copy1_ParamLimits

0xc9de,	// (0x0001a9a6) cell_call4_button_pane_t1_copy1

0x68cd,	// (0x00014895) main_ncimui_pane_t1_ParamLimits

0x68cd,	// (0x00014895) main_ncimui_pane_t1

0x68e7,	// (0x000148af) main_ncimui_pane_t2_ParamLimits

0x68e7,	// (0x000148af) main_ncimui_pane_t2

0x0002,

0xfaea,	// (0x0001dab2) main_ncimui_pane_t_ParamLimits

0xfaea,	// (0x0001dab2) main_ncimui_pane_t

0xa79c,	// (0x00018764) main_radioblah_anim_pane_ParamLimits

0xa79c,	// (0x00018764) main_radioblah_anim_pane

0xa79c,	// (0x00018764) main_radioblah_info_pane_ParamLimits

0xa79c,	// (0x00018764) main_radioblah_info_pane

0xa788,	// (0x00018750) main_radioblah_pane_t1_ParamLimits

0xa788,	// (0x00018750) main_radioblah_pane_t1

0xa788,	// (0x00018750) main_radioblah_pane_t2_ParamLimits

0xa788,	// (0x00018750) main_radioblah_pane_t2

0x0003,

0xfb85,	// (0x0001db4d) main_radioblah_pane_t_ParamLimits

0xfb85,	// (0x0001db4d) main_radioblah_pane_t

0x9268,	// (0x00017230) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9268,	// (0x00017230) main_radioblah_rocker_ctrl_pane

0xbb29,	// (0x00019af1) main_radioblah_info_pane_t1_ParamLimits

0xbb29,	// (0x00019af1) main_radioblah_info_pane_t1

0xdc13,	// (0x0001bbdb) main_radioblah_info_pane_t2_ParamLimits

0xdc13,	// (0x0001bbdb) main_radioblah_info_pane_t2

0x0003,

0xfb8e,	// (0x0001db56) main_radioblah_info_pane_t_ParamLimits

0xfb8e,	// (0x0001db56) main_radioblah_info_pane_t

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g1

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g2

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g3

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g4

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g5

0x99a5,	// (0x0001796d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb97,	// (0x0001db5f) main_radioblah_rocker_ctrl_pane_g

0x6640,	// (0x00014608) main_cset_text2_pane_t1_copy1_ParamLimits

0xca40,	// (0x0001aa08) cam4_image_uncrop_qvga_pane

0xca93,	// (0x0001aa5b) vid4_image_uncrop_qcif_pane

0xd3ca,	// (0x0001b392) cam6_image_uncrop_qvga_pane_ParamLimits

0xd3ca,	// (0x0001b392) cam6_image_uncrop_qvga_pane

0xd482,	// (0x0001b44a) vid6_image_uncrop_qcif_pane_ParamLimits

0xd482,	// (0x0001b44a) vid6_image_uncrop_qcif_pane

0x91f9,	// (0x000171c1) bg_popup_preview_window_pane_cp03

0xd76e,	// (0x0001b736) list_cset_text2_pane

0xd776,	// (0x0001b73e) main_cset6_text2_pane_g1

0xd77e,	// (0x0001b746) main_cset6_text2_pane_t1

0xe6b3,	// (0x0001c67b) list_cset_text2_pane_t1_ParamLimits

0xe6b3,	// (0x0001c67b) list_cset_text2_pane_t1

0x9268,	// (0x00017230) main_radioblah_pane_ParamLimits

0x6c0c,	// (0x00014bd4) main_mobtv_info_pane_t3_ParamLimits

0x6c0c,	// (0x00014bd4) main_mobtv_info_pane_t3

0xa77a,	// (0x00018742) main_radioblah_pane_g1

0xdbe3,	// (0x0001bbab) main_radioblah_info_pane_g1

0x99c3,	// (0x0001798b) main_radioblah_info_pane_t3_ParamLimits

0x99c3,	// (0x0001798b) main_radioblah_info_pane_t3

0x24e1,	// (0x000104a9) highlight_cell_cale_month_pane_ParamLimits

0x24e1,	// (0x000104a9) highlight_cell_cale_month_pane

0x91f9,	// (0x000171c1) main_phob_fisheye_pane

0xc249,	// (0x0001a211) scroll_pane_cp0031_ParamLimits

0xc249,	// (0x0001a211) scroll_pane_cp0031

0xd590,	// (0x0001b558) wait_bar_pane_cp08_ParamLimits

0x66c2,	// (0x0001468a) cset_list_set_pane_copy1_ParamLimits

0xdc62,	// (0x0001bc2a) highlight_cell_cale_month_pane_g1

0x6d0f,	// (0x00014cd7) highlight_cell_cale_month_pane_t1

0xd180,	// (0x0001b148) list_gen_pane_cp01

0xccce,	// (0x0001ac96) scroll_pane_01

0x6d1d,	// (0x00014ce5) list_single_double_fisheye_pane

0x6d26,	// (0x00014cee) list_double_fisheye_pane_g1_ParamLimits

0x6d26,	// (0x00014cee) list_double_fisheye_pane_g1

0x6d32,	// (0x00014cfa) list_double_fisheye_pane_g2_ParamLimits

0x6d32,	// (0x00014cfa) list_double_fisheye_pane_g2

0x6d46,	// (0x00014d0e) list_double_fisheye_pane_g3_ParamLimits

0x6d46,	// (0x00014d0e) list_double_fisheye_pane_g3

0x0004,

0xfba4,	// (0x0001db6c) list_double_fisheye_pane_g_ParamLimits

0xfba4,	// (0x0001db6c) list_double_fisheye_pane_g

0x6d6f,	// (0x00014d37) list_double_fisheye_pane_t1_ParamLimits

0x6d6f,	// (0x00014d37) list_double_fisheye_pane_t1

0x6d8a,	// (0x00014d52) list_double_fisheye_pane_t2_ParamLimits

0x6d8a,	// (0x00014d52) list_double_fisheye_pane_t2

0x0001,

0xfbaf,	// (0x0001db77) list_double_fisheye_pane_t_ParamLimits

0xfbaf,	// (0x0001db77) list_double_fisheye_pane_t

0x91f9,	// (0x000171c1) main_call5_pane

0x9268,	// (0x00017230) sc_swipe_pane_ParamLimits

0x9268,	// (0x00017230) sc_swipe_pane

0x6dbf,	// (0x00014d87) call5_image_pane_ParamLimits

0x6dbf,	// (0x00014d87) call5_image_pane

0x6ddc,	// (0x00014da4) call5_swipe_1_pane_ParamLimits

0x6ddc,	// (0x00014da4) call5_swipe_1_pane

0x6def,	// (0x00014db7) call5_swipe_2_pane_ParamLimits

0x6def,	// (0x00014db7) call5_swipe_2_pane

0x6e1a,	// (0x00014de2) popup_call5_audio_first_window_ParamLimits

0x6e1a,	// (0x00014de2) popup_call5_audio_first_window

0x995f,	// (0x00017927) call5_swipe_1_pane_g1_ParamLimits

0x995f,	// (0x00017927) call5_swipe_1_pane_g1

0xdc6a,	// (0x0001bc32) call5_swipe_1_pane_g2_ParamLimits

0xdc6a,	// (0x0001bc32) call5_swipe_1_pane_g2

0x0001,

0xfbb4,	// (0x0001db7c) call5_swipe_1_pane_g_ParamLimits

0xfbb4,	// (0x0001db7c) call5_swipe_1_pane_g

0xdc76,	// (0x0001bc3e) call5_swipe_1_pane_t1_ParamLimits

0xdc76,	// (0x0001bc3e) call5_swipe_1_pane_t1

0x995f,	// (0x00017927) call5_swipe_2_pane_g1_ParamLimits

0x995f,	// (0x00017927) call5_swipe_2_pane_g1

0xdc8b,	// (0x0001bc53) call5_swipe_2_pane_g2_ParamLimits

0xdc8b,	// (0x0001bc53) call5_swipe_2_pane_g2

0x0001,

0xfbb9,	// (0x0001db81) call5_swipe_2_pane_g_ParamLimits

0xfbb9,	// (0x0001db81) call5_swipe_2_pane_g

0xdc97,	// (0x0001bc5f) call5_swipe_2_pane_t1_ParamLimits

0xdc97,	// (0x0001bc5f) call5_swipe_2_pane_t1

0x995f,	// (0x00017927) sc_swipe_pane_g1_ParamLimits

0x995f,	// (0x00017927) sc_swipe_pane_g1

0x996d,	// (0x00017935) sc_swipe_pane_g2_ParamLimits

0x996d,	// (0x00017935) sc_swipe_pane_g2

0x0001,

0xf732,	// (0x0001d6fa) sc_swipe_pane_g_ParamLimits

0xf732,	// (0x0001d6fa) sc_swipe_pane_g

0x99af,	// (0x00017977) sc_swipe_pane_t1_ParamLimits

0x99af,	// (0x00017977) sc_swipe_pane_t1

0x91f9,	// (0x000171c1) main_cmail_launcher_pane

0x6e2b,	// (0x00014df3) aid_size_cell_cmail_l_ParamLimits

0x6e2b,	// (0x00014df3) aid_size_cell_cmail_l

0x6e39,	// (0x00014e01) grid_cmail_l_pane_ParamLimits

0x6e39,	// (0x00014e01) grid_cmail_l_pane

0x6e53,	// (0x00014e1b) cell_cmail_l_pane_ParamLimits

0x6e53,	// (0x00014e1b) cell_cmail_l_pane

0xdcac,	// (0x0001bc74) cell_cmail_l_pane_g1_ParamLimits

0xdcac,	// (0x0001bc74) cell_cmail_l_pane_g1

0xdcb8,	// (0x0001bc80) cell_cmail_l_pane_t1_ParamLimits

0xdcb8,	// (0x0001bc80) cell_cmail_l_pane_t1

0xdcce,	// (0x0001bc96) cell_cmail_l_pane_t2_ParamLimits

0xdcce,	// (0x0001bc96) cell_cmail_l_pane_t2

0x0001,

0xfbbe,	// (0x0001db86) cell_cmail_l_pane_t_ParamLimits

0xfbbe,	// (0x0001db86) cell_cmail_l_pane_t

0x9268,	// (0x00017230) grid_highlight_pane_cp018_ParamLimits

0x9268,	// (0x00017230) grid_highlight_pane_cp018

0x0c0e,	// (0x0000ebd6) main2_pane_ParamLimits

0x0c0e,	// (0x0000ebd6) main2_pane

0x9ad9,	// (0x00017aa1) popup_sp_fs_action_menu_bg_pane_g1

0x9ae1,	// (0x00017aa9) popup_sp_fs_action_menu_bg_pane_g2

0x9ae9,	// (0x00017ab1) popup_sp_fs_action_menu_bg_pane_g3

0x9af1,	// (0x00017ab9) popup_sp_fs_action_menu_bg_pane_g4

0x9af9,	// (0x00017ac1) popup_sp_fs_action_menu_bg_pane_g5

0x9b01,	// (0x00017ac9) popup_sp_fs_action_menu_bg_pane_g6

0x9b09,	// (0x00017ad1) popup_sp_fs_action_menu_bg_pane_g7

0x9b11,	// (0x00017ad9) popup_sp_fs_action_menu_bg_pane_g8

0x9b19,	// (0x00017ae1) popup_sp_fs_action_menu_bg_pane_g9

0x9b21,	// (0x00017ae9) popup_sp_fs_action_menu_bg_pane_g10

0x9b21,	// (0x00017ae9) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0001d0a5) popup_sp_fs_action_menu_bg_pane_g

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g1

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g2

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0001d153) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0001d153) list_medium_line_x2_t3_g3_g

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t1

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t2

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g3_t

0x995f,	// (0x00017927) list_medium_line_x2_t3_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g2_g1

0x995f,	// (0x00017927) list_medium_line_x2_t3_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_x2_t3_g2_g

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t1

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t2

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g2_t

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g1

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g2

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g3

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d166) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d166) list_medium_line_x2_t4_g4_g

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t1

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t2

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t3

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t4_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d16f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d16f) list_medium_line_x2_t4_g4_t

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g1

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g2

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g3

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0001d166) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0001d166) list_medium_line_x2_t2_g4_g

0x99af,	// (0x00017977) list_medium_line_x2_t2_g4_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g4_t1

0x99af,	// (0x00017977) list_medium_line_x2_t2_g4_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g4_t

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g1

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g2

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0001d153) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0001d153) list_medium_line_x2_t2_g3_g

0x99af,	// (0x00017977) list_medium_line_x2_t2_g3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g3_t1

0x99af,	// (0x00017977) list_medium_line_x2_t2_g3_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g3_t

0x2646,	// (0x0001060e) main_sp_fs_list_pane_ParamLimits

0x2646,	// (0x0001060e) main_sp_fs_list_pane

0xccb2,	// (0x0001ac7a) sp_fs_scroll_pane_ParamLimits

0xccb2,	// (0x0001ac7a) sp_fs_scroll_pane

0xa17f,	// (0x00018147) list_medium_line_x2_t3_t1

0xa17f,	// (0x00018147) list_medium_line_x2_t3_t2

0xa17f,	// (0x00018147) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x0001d21c) list_medium_line_x2_t3_t

0xa17f,	// (0x00018147) list_medium_line_x3_t4_t1

0xa17f,	// (0x00018147) list_medium_line_x3_t4_t2

0xa17f,	// (0x00018147) list_medium_line_x3_t4_t3

0xa17f,	// (0x00018147) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x0001d223) list_medium_line_x3_t4_t

0xa17f,	// (0x00018147) list_medium_line_x4_t5_t1

0xa17f,	// (0x00018147) list_medium_line_x4_t5_t2

0xa17f,	// (0x00018147) list_medium_line_x4_t5_t3

0xa17f,	// (0x00018147) list_medium_line_x4_t5_t4

0xa17f,	// (0x00018147) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x0001d22c) list_medium_line_x4_t5_t

0x995f,	// (0x00017927) list_medium_line_t4_g4_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t4_g4_g1

0x995f,	// (0x00017927) list_medium_line_t4_g4_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t4_g4_g2

0x995f,	// (0x00017927) list_medium_line_t4_g4_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t4_g4_g3

0x995f,	// (0x00017927) list_medium_line_t4_g4_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d166) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d166) list_medium_line_t4_g4_g

0x99af,	// (0x00017977) list_medium_line_t4_g4_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t4_g4_t1

0x99af,	// (0x00017977) list_medium_line_t4_g4_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t4_g4_t2

0x99af,	// (0x00017977) list_medium_line_t4_g4_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t4_g4_t3

0x99af,	// (0x00017977) list_medium_line_t4_g4_t4_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d16f) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d16f) list_medium_line_t4_g4_t

0x26f1,	// (0x000106b9) chi_dic_find_pane_g1

0x3548,	// (0x00011510) main_tport_pane

0xa17f,	// (0x00018147) list_medium_line_plain_t1

0x995f,	// (0x00017927) list_medium_line_t2_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g2_g1

0x995f,	// (0x00017927) list_medium_line_t2_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_t2_g2_g

0x99af,	// (0x00017977) list_medium_line_t2_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_g2_t1

0x99af,	// (0x00017977) list_medium_line_t2_g2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_t2_g2_t

0xd1f4,	// (0x0001b1bc) aid_sp_fs_list_icon_a_sm

0xd1fc,	// (0x0001b1c4) aid_sp_fs_list_icon_d

0xd204,	// (0x0001b1cc) aid_sp_fs_text_primary

0xd20d,	// (0x0001b1d5) aid_sp_fs_text_secondary

0x91f9,	// (0x000171c1) list_medium_line

0x91f9,	// (0x000171c1) list_medium_line_g2

0x91f9,	// (0x000171c1) list_medium_line_g3

0x91f9,	// (0x000171c1) list_medium_line_plain

0x91f9,	// (0x000171c1) list_medium_line_plain_t2

0x91f9,	// (0x000171c1) list_medium_line_plain_t3

0x91f9,	// (0x000171c1) list_medium_line_right_icon

0x91f9,	// (0x000171c1) list_medium_line_right_iconx2

0x91f9,	// (0x000171c1) list_medium_line_t2

0x91f9,	// (0x000171c1) list_medium_line_t2_g2

0x91f9,	// (0x000171c1) list_medium_line_t2_g3

0x91f9,	// (0x000171c1) list_medium_line_t2_right_icon

0x91f9,	// (0x000171c1) list_medium_line_t2_right_iconx2

0x91f9,	// (0x000171c1) list_medium_line_t3

0x91f9,	// (0x000171c1) list_medium_line_t3_g2

0x91f9,	// (0x000171c1) list_medium_line_t3_g3

0x91f9,	// (0x000171c1) list_medium_line_t3_right_iconx2

0x91f9,	// (0x000171c1) list_medium_line_t4_g4

0x91f9,	// (0x000171c1) list_medium_line_x2

0x91f9,	// (0x000171c1) list_medium_line_x2_t2_g2

0x91f9,	// (0x000171c1) list_medium_line_x2_t2_g3

0x91f9,	// (0x000171c1) list_medium_line_x2_t2_g4

0x91f9,	// (0x000171c1) list_medium_line_x2_t3

0x91f9,	// (0x000171c1) list_medium_line_x2_t3_g2

0x91f9,	// (0x000171c1) list_medium_line_x2_t3_g3

0x91f9,	// (0x000171c1) list_medium_line_x2_t3_g4

0x91f9,	// (0x000171c1) list_medium_line_x2_t4_g2

0x91f9,	// (0x000171c1) list_medium_line_x2_t4_g4

0x91f9,	// (0x000171c1) list_medium_line_x3

0x91f9,	// (0x000171c1) list_medium_line_x3_t4

0x91f9,	// (0x000171c1) list_medium_line_x3_t4_g4

0x91f9,	// (0x000171c1) list_medium_line_x4_t4

0x91f9,	// (0x000171c1) list_medium_line_x4_t4_g7

0x91f9,	// (0x000171c1) list_medium_line_x4_t5

0x6177,	// (0x0001413f) list_single_fs_dyc_pane_ParamLimits

0x6177,	// (0x0001413f) list_single_fs_dyc_pane

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g1

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g2

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g3

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g4

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g5_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g5

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g6_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x4_t4_g7_g6

0x996d,	// (0x00017935) list_medium_line_x4_t4_g7_g7_ParamLimits

0x996d,	// (0x00017935) list_medium_line_x4_t4_g7_g7

0x0006,

0xfacb,	// (0x0001da93) list_medium_line_x4_t4_g7_g_ParamLimits

0xfacb,	// (0x0001da93) list_medium_line_x4_t4_g7_g

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t1

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t2

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x4_t4_g7_t3

0x99c3,	// (0x0001798b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x99c3,	// (0x0001798b) list_medium_line_x4_t4_g7_t4

0x99c3,	// (0x0001798b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x99c3,	// (0x0001798b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfada,	// (0x0001daa2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfada,	// (0x0001daa2) list_medium_line_x4_t4_g7_t

0x6884,	// (0x0001484c) list_single_dyc_row_pane_ParamLimits

0x6884,	// (0x0001484c) list_single_dyc_row_pane

0x6dac,	// (0x00014d74) call5_gesture_pane_ParamLimits

0x6dac,	// (0x00014d74) call5_gesture_pane

0x6e02,	// (0x00014dca) call5_windows_pane_ParamLimits

0x6e02,	// (0x00014dca) call5_windows_pane

0x6e6d,	// (0x00014e35) call5_swipe_1_pane_cp_ParamLimits

0x6e6d,	// (0x00014e35) call5_swipe_1_pane_cp

0x6e79,	// (0x00014e41) call5_swipe_2_pane_cp_ParamLimits

0x6e79,	// (0x00014e41) call5_swipe_2_pane_cp

0x9c52,	// (0x00017c1a) call5_image_pane_cp

0x6e85,	// (0x00014e4d) popup_call5_audio_first_window_cp_ParamLimits

0x6e85,	// (0x00014e4d) popup_call5_audio_first_window_cp

0xdceb,	// (0x0001bcb3) call5_swipe_1_pane_g1_cp_ParamLimits

0xdceb,	// (0x0001bcb3) call5_swipe_1_pane_g1_cp

0xdcf8,	// (0x0001bcc0) call5_swipe_1_pane_g2_cp

0xdd00,	// (0x0001bcc8) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd00,	// (0x0001bcc8) call5_swipe_1_pane_t1_cp

0xdceb,	// (0x0001bcb3) call5_swipe_2_pane_g1_cp_ParamLimits

0xdceb,	// (0x0001bcb3) call5_swipe_2_pane_g1_cp

0xdd15,	// (0x0001bcdd) call5_swipe_2_pane_g2_cp

0xdd1d,	// (0x0001bce5) call5_swipe_2_pane_t1_cp_ParamLimits

0xdd1d,	// (0x0001bce5) call5_swipe_2_pane_t1_cp

0x9268,	// (0x00017230) main_sp_fs_email_pane

0xdd32,	// (0x0001bcfa) main_sp_fs_listscroll_pane_te

0x6e93,	// (0x00014e5b) popup_sp_fs_action_menu_pane_ParamLimits

0x6e93,	// (0x00014e5b) popup_sp_fs_action_menu_pane

0x99a5,	// (0x0001796d) bg_sp_fs_ctrlbar_pane_g1

0xdd3b,	// (0x0001bd03) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdd44,	// (0x0001bd0c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb99d,	// (0x00019965) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x99a5,	// (0x0001796d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbc3,	// (0x0001db8b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbb4b,	// (0x00019b13) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbb4b,	// (0x00019b13) bg_sp_fs_ctrlbar_ddmenu_pane

0xdd4d,	// (0x0001bd15) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdd4d,	// (0x0001bd15) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdd59,	// (0x0001bd21) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdd59,	// (0x0001bd21) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbcc,	// (0x0001db94) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbcc,	// (0x0001db94) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdd65,	// (0x0001bd2d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdd65,	// (0x0001bd2d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x99a5,	// (0x0001796d) list_medium_line_t2_right_icon_g1

0xa17f,	// (0x00018147) list_medium_line_t2_right_icon_t1

0xa17f,	// (0x00018147) list_medium_line_t2_right_icon_t2

0x0001,

0xfbd1,	// (0x0001db99) list_medium_line_t2_right_icon_t

0xa79c,	// (0x00018764) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa79c,	// (0x00018764) bg_sp_fs_ctrlbar_pane

0x6f1d,	// (0x00014ee5) main_sp_fs_ctrlbar_button_pane_cp01

0x6f27,	// (0x00014eef) main_sp_fs_ctrlbar_ddmenu_pane

0xddb7,	// (0x0001bd7f) main_sp_fs_ctrlbar_pane_g1

0xddc3,	// (0x0001bd8b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbd6,	// (0x0001db9e) main_sp_fs_ctrlbar_pane_g

0x6f65,	// (0x00014f2d) main_sp_fs_ctrlbar_pane_t1

0x6fa4,	// (0x00014f6c) main_sp_fs_ctrlbar_pane

0x6fc8,	// (0x00014f90) main_sp_fs_listscroll_pane_te_cp01

0x6ff2,	// (0x00014fba) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6ff2,	// (0x00014fba) popup_sp_fs_action_menu_pane_cp01

0x9268,	// (0x00017230) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9268,	// (0x00017230) bg_sp_fs_highlight_list_pane_cp01

0xddea,	// (0x0001bdb2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xddea,	// (0x0001bdb2) sp_fs_action_menu_list_gene_pane_g1

0xddf9,	// (0x0001bdc1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xddf9,	// (0x0001bdc1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbe4,	// (0x0001dbac) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbe4,	// (0x0001dbac) sp_fs_action_menu_list_gene_pane_g

0xde06,	// (0x0001bdce) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xde06,	// (0x0001bdce) sp_fs_action_menu_list_gene_pane_t1

0xde1e,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xde1e,	// (0x0001bde6) sp_fs_action_menu_list_gene_pane

0xde3d,	// (0x0001be05) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xde3d,	// (0x0001be05) popup_sp_fs_action_menu_bg_pane

0xde4b,	// (0x0001be13) sp_fs_action_menu_list_pane_ParamLimits

0xde4b,	// (0x0001be13) sp_fs_action_menu_list_pane

0x7017,	// (0x00014fdf) sp_fs_scroll_pane_cp01_ParamLimits

0x7017,	// (0x00014fdf) sp_fs_scroll_pane_cp01

0xa17f,	// (0x00018147) list_medium_line_plain_t2_t1

0xa17f,	// (0x00018147) list_medium_line_plain_t2_t2

0x0001,

0xfbd1,	// (0x0001db99) list_medium_line_plain_t2_t

0xa17f,	// (0x00018147) list_medium_line_plain_t3_t1

0xa17f,	// (0x00018147) list_medium_line_plain_t3_t2

0xa17f,	// (0x00018147) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x0001d21c) list_medium_line_plain_t3_t

0x995f,	// (0x00017927) list_medium_line_x2_t2_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g2_g1

0x995f,	// (0x00017927) list_medium_line_x2_t2_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_x2_t2_g2_g

0x99af,	// (0x00017977) list_medium_line_x2_t2_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g2_t1

0x99af,	// (0x00017977) list_medium_line_x2_t2_g2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_x2_t2_g2_t

0x995f,	// (0x00017927) list_medium_line_x2_t4_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g2_g1

0x995f,	// (0x00017927) list_medium_line_x2_t4_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_x2_t4_g2_g

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t1

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t2

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t3

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t4_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0001d16f) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0001d16f) list_medium_line_x2_t4_g2_t

0x99a5,	// (0x0001796d) list_medium_line_t3_right_iconx2_g1

0x99a5,	// (0x0001796d) list_medium_line_t3_right_iconx2_g2

0x99a5,	// (0x0001796d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x0001d338) list_medium_line_t3_right_iconx2_g

0xa17f,	// (0x00018147) list_medium_line_t3_right_iconx2_t1

0xa17f,	// (0x00018147) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbd1,	// (0x0001db99) list_medium_line_t3_right_iconx2_t

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g1

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g2

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g3

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0001d166) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0001d166) list_medium_line_x3_t4_g4_g

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t1

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t2

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t3

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t4_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0001d16f) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0001d16f) list_medium_line_x3_t4_g4_t

0x703d,	// (0x00015005) list_single_dyc_row_text_pane_t1_ParamLimits

0x703d,	// (0x00015005) list_single_dyc_row_text_pane_t1

0x7086,	// (0x0001504e) list_single_dyc_row_text_pane_t2_ParamLimits

0x7086,	// (0x0001504e) list_single_dyc_row_text_pane_t2

0xde6b,	// (0x0001be33) list_single_dyc_row_text_pane_t3_ParamLimits

0xde6b,	// (0x0001be33) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe9,	// (0x0001dbb1) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe9,	// (0x0001dbb1) list_single_dyc_row_text_pane_t

0xde8f,	// (0x0001be57) list_single_dyc_row_pane_g1_ParamLimits

0xde8f,	// (0x0001be57) list_single_dyc_row_pane_g1

0xde9b,	// (0x0001be63) list_single_dyc_row_pane_g2_ParamLimits

0xde9b,	// (0x0001be63) list_single_dyc_row_pane_g2

0xdea7,	// (0x0001be6f) list_single_dyc_row_pane_g3_ParamLimits

0xdea7,	// (0x0001be6f) list_single_dyc_row_pane_g3

0xdeba,	// (0x0001be82) list_single_dyc_row_pane_g4_ParamLimits

0xdeba,	// (0x0001be82) list_single_dyc_row_pane_g4

0x0006,

0xfbf6,	// (0x0001dbbe) list_single_dyc_row_pane_g_ParamLimits

0xfbf6,	// (0x0001dbbe) list_single_dyc_row_pane_g

0xdf0c,	// (0x0001bed4) list_single_dyc_row_text_pane_ParamLimits

0xdf0c,	// (0x0001bed4) list_single_dyc_row_text_pane

0x91f9,	// (0x000171c1) bg_sp_fs_scroll_pane

0xdf31,	// (0x0001bef9) thumb_sp_fs_scroll_pane

0x995f,	// (0x00017927) list_medium_line_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g1

0x99af,	// (0x00017977) list_medium_line_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t1

0x995f,	// (0x00017927) list_medium_line_x2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_g1

0x995f,	// (0x00017927) list_medium_line_x2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_x2_g

0x99af,	// (0x00017977) list_medium_line_x2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t1

0x995f,	// (0x00017927) list_medium_line_x3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x3_g1

0xdf3a,	// (0x0001bf02) list_medium_line_x3_g2_ParamLimits

0xdf3a,	// (0x0001bf02) list_medium_line_x3_g2

0x0001,

0xfc05,	// (0x0001dbcd) list_medium_line_x3_g_ParamLimits

0xfc05,	// (0x0001dbcd) list_medium_line_x3_g

0xdf48,	// (0x0001bf10) list_medium_line_x3_t1_ParamLimits

0xdf48,	// (0x0001bf10) list_medium_line_x3_t1

0xdf5c,	// (0x0001bf24) thumb_sp_fs_scroll_pane_g1

0xdf65,	// (0x0001bf2d) thumb_sp_fs_scroll_pane_g2

0xdf6e,	// (0x0001bf36) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc0a,	// (0x0001dbd2) thumb_sp_fs_scroll_pane_g

0xdf5c,	// (0x0001bf24) bg_sp_fs_scroll_pane_g1

0xdf65,	// (0x0001bf2d) bg_sp_fs_scroll_pane_g2

0xdf6e,	// (0x0001bf36) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc0a,	// (0x0001dbd2) bg_sp_fs_scroll_pane_g

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g1

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g2

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g3

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g4_ParamLimits

0x995f,	// (0x00017927) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0001d166) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0001d166) list_medium_line_x2_t3_g4_g

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t1

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t2

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_x2_t3_g4_t

0x995f,	// (0x00017927) list_medium_line_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g2_g1

0x995f,	// (0x00017927) list_medium_line_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_g2_g

0x99af,	// (0x00017977) list_medium_line_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_g2_t1

0x995f,	// (0x00017927) list_medium_line_t3_g2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g2_g1

0x995f,	// (0x00017927) list_medium_line_t3_g2_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0001d161) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0001d161) list_medium_line_t3_g2_g

0x99af,	// (0x00017977) list_medium_line_t3_g2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g2_t1

0x99af,	// (0x00017977) list_medium_line_t3_g2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g2_t2

0x99af,	// (0x00017977) list_medium_line_t3_g2_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_t3_g2_t

0x99a5,	// (0x0001796d) list_medium_line_right_icon_g1

0xa17f,	// (0x00018147) list_medium_line_right_icon_t1

0x995f,	// (0x00017927) list_medium_line_t2_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g1

0x99af,	// (0x00017977) list_medium_line_t2_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_t1

0x99af,	// (0x00017977) list_medium_line_t2_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_t2_t

0x995f,	// (0x00017927) list_medium_line_t3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g1

0x99af,	// (0x00017977) list_medium_line_t3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_t1

0x99af,	// (0x00017977) list_medium_line_t3_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_t2

0x99af,	// (0x00017977) list_medium_line_t3_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_t3_t

0x995f,	// (0x00017927) list_medium_line_g3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g3_g1

0x995f,	// (0x00017927) list_medium_line_g3_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g3_g2

0x995f,	// (0x00017927) list_medium_line_g3_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0001d153) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0001d153) list_medium_line_g3_g

0x99af,	// (0x00017977) list_medium_line_g3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_g3_t1

0x995f,	// (0x00017927) list_medium_line_t2_g3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g3_g1

0x995f,	// (0x00017927) list_medium_line_t2_g3_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g3_g2

0x995f,	// (0x00017927) list_medium_line_t2_g3_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0001d153) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0001d153) list_medium_line_t2_g3_g

0x99af,	// (0x00017977) list_medium_line_t2_g3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_g3_t1

0x99af,	// (0x00017977) list_medium_line_t2_g3_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x0001d136) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x0001d136) list_medium_line_t2_g3_t

0x995f,	// (0x00017927) list_medium_line_t3_g3_g1_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g3_g1

0x995f,	// (0x00017927) list_medium_line_t3_g3_g2_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g3_g2

0x995f,	// (0x00017927) list_medium_line_t3_g3_g3_ParamLimits

0x995f,	// (0x00017927) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0001d153) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0001d153) list_medium_line_t3_g3_g

0x99af,	// (0x00017977) list_medium_line_t3_g3_t1_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g3_t1

0x99af,	// (0x00017977) list_medium_line_t3_g3_t2_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g3_t2

0x99af,	// (0x00017977) list_medium_line_t3_g3_t3_ParamLimits

0x99af,	// (0x00017977) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0001d15a) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0001d15a) list_medium_line_t3_g3_t

0x99a5,	// (0x0001796d) list_medium_line_right_iconx2_g1

0x99a5,	// (0x0001796d) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d054) list_medium_line_right_iconx2_g

0xa17f,	// (0x00018147) list_medium_line_right_iconx2_t1

0x99a5,	// (0x0001796d) list_medium_line_t2_right_iconx2_g1

0x99a5,	// (0x0001796d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0001d054) list_medium_line_t2_right_iconx2_g

0xa17f,	// (0x00018147) list_medium_line_t2_right_iconx2_t1

0xa17f,	// (0x00018147) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbd1,	// (0x0001db99) list_medium_line_t2_right_iconx2_t

0xa17f,	// (0x00018147) list_medium_line_x4_t4_t1

0xa17f,	// (0x00018147) list_medium_line_x4_t4_t2

0xa17f,	// (0x00018147) list_medium_line_x4_t4_t3

0xa17f,	// (0x00018147) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x0001d223) list_medium_line_x4_t4_t

0x71fe,	// (0x000151c6) tport_appsw_pane_ParamLimits

0x71fe,	// (0x000151c6) tport_appsw_pane

0x7216,	// (0x000151de) tport_contact_pane_ParamLimits

0x7216,	// (0x000151de) tport_contact_pane

0x722e,	// (0x000151f6) tport_listscroll_pane_ParamLimits

0x722e,	// (0x000151f6) tport_listscroll_pane

0x7248,	// (0x00015210) cell_tport_appsw_pane_ParamLimits

0x7248,	// (0x00015210) cell_tport_appsw_pane

0xa77a,	// (0x00018742) tport_appsw_pane_g1_ParamLimits

0xa77a,	// (0x00018742) tport_appsw_pane_g1

0xdf77,	// (0x0001bf3f) tport_contact_pane_g1

0xdf80,	// (0x0001bf48) tport_contact_pane_t1

0xdf8e,	// (0x0001bf56) tport_contact_pane_t2

0x0001,

0xfc11,	// (0x0001dbd9) tport_contact_pane_t

0xdf9c,	// (0x0001bf64) list_tport_pane

0xdfa5,	// (0x0001bf6d) scroll_pane_cp_030

0x7290,	// (0x00015258) cell_tport_appsw_pane_g1

0x72a0,	// (0x00015268) cell_tport_appsw_pane_t1

0x72ae,	// (0x00015276) grid_highlight_pane_cp019

0x72b6,	// (0x0001527e) list_tport_double_graphic_pane_ParamLimits

0x72b6,	// (0x0001527e) list_tport_double_graphic_pane

0x9268,	// (0x00017230) list_highlight_pane_cp023_ParamLimits

0x9268,	// (0x00017230) list_highlight_pane_cp023

0x72c3,	// (0x0001528b) list_tport_double_graphic_pane_g1_ParamLimits

0x72c3,	// (0x0001528b) list_tport_double_graphic_pane_g1

0x72d0,	// (0x00015298) list_tport_double_graphic_pane_t1_ParamLimits

0x72d0,	// (0x00015298) list_tport_double_graphic_pane_t1

0x72e5,	// (0x000152ad) list_tport_double_graphic_pane_t2_ParamLimits

0x72e5,	// (0x000152ad) list_tport_double_graphic_pane_t2

0x0001,

0xfc1d,	// (0x0001dbe5) list_tport_double_graphic_pane_t_ParamLimits

0xfc1d,	// (0x0001dbe5) list_tport_double_graphic_pane_t

0x91f9,	// (0x000171c1) main_cale_note_pane

0x5216,	// (0x000131de) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5216,	// (0x000131de) cell_vitu2_function_top_wide_pane_cp01

0x6c20,	// (0x00014be8) wait_bar_pane_cp05_ParamLimits

0x9268,	// (0x00017230) listscroll_cmail_pane

0xdfb6,	// (0x0001bf7e) list_cmail_pane

0x72f7,	// (0x000152bf) list_cmail_body_pane

0x730d,	// (0x000152d5) list_single_cmail_header_caption_pane

0x7324,	// (0x000152ec) list_single_cmail_header_detail_pane_ParamLimits

0x7324,	// (0x000152ec) list_single_cmail_header_detail_pane

0xdfcd,	// (0x0001bf95) list_single_cmail_header_caption_pane_t1

0x7352,	// (0x0001531a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7352,	// (0x0001531a) list_single_cmail_header_detail_pane_g1

0xdfe4,	// (0x0001bfac) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdfe4,	// (0x0001bfac) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc22,	// (0x0001dbea) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc22,	// (0x0001dbea) list_single_cmail_header_detail_pane_g

0x736a,	// (0x00015332) list_single_cmail_header_detail_pane_t1_ParamLimits

0x736a,	// (0x00015332) list_single_cmail_header_detail_pane_t1

0x73a8,	// (0x00015370) list_single_cmail_header_editor_pane_bg_ParamLimits

0x73a8,	// (0x00015370) list_single_cmail_header_editor_pane_bg

0xd99e,	// (0x0001b966) list_cmail_body_pane_g1

0xe021,	// (0x0001bfe9) list_cmail_body_pane_t1

0xcb6d,	// (0x0001ab35) list_single_cmail_header_editor_pane_bg_g1

0x9e75,	// (0x00017e3d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcb7d,	// (0x0001ab45) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcb75,	// (0x0001ab3d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce51,	// (0x0001ae19) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcb9d,	// (0x0001ab65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcb8d,	// (0x0001ab55) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcb95,	// (0x0001ab5d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9e55,	// (0x00017e1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x73c1,	// (0x00015389) calenote_gesture_pane_ParamLimits

0x73c1,	// (0x00015389) calenote_gesture_pane

0x73e1,	// (0x000153a9) calenote_window_pane_ParamLimits

0x73e1,	// (0x000153a9) calenote_window_pane

0xe02f,	// (0x0001bff7) popup_note_window_cp01

0x73fd,	// (0x000153c5) calenote_swipe_1_pane_ParamLimits

0x73fd,	// (0x000153c5) calenote_swipe_1_pane

0x6e79,	// (0x00014e41) calenote_swipe_2_pane_ParamLimits

0x6e79,	// (0x00014e41) calenote_swipe_2_pane

0xdceb,	// (0x0001bcb3) calenote_swipe_1_pane_g1_ParamLimits

0xdceb,	// (0x0001bcb3) calenote_swipe_1_pane_g1

0xe041,	// (0x0001c009) calenote_swipe_1_pane_g2_ParamLimits

0xe041,	// (0x0001c009) calenote_swipe_1_pane_g2

0x0001,

0xfc2e,	// (0x0001dbf6) calenote_swipe_1_pane_g_ParamLimits

0xfc2e,	// (0x0001dbf6) calenote_swipe_1_pane_g

0xe04d,	// (0x0001c015) calenote_swipe_1_pane_t1_ParamLimits

0xe04d,	// (0x0001c015) calenote_swipe_1_pane_t1

0xdceb,	// (0x0001bcb3) calenote_swipe_2_pane_g1_ParamLimits

0xdceb,	// (0x0001bcb3) calenote_swipe_2_pane_g1

0xe06c,	// (0x0001c034) calenote_swipe_2_pane_g2_ParamLimits

0xe06c,	// (0x0001c034) calenote_swipe_2_pane_g2

0x0001,

0xfc33,	// (0x0001dbfb) calenote_swipe_2_pane_g_ParamLimits

0xfc33,	// (0x0001dbfb) calenote_swipe_2_pane_g

0xe078,	// (0x0001c040) calenote_swipe_2_pane_t1_ParamLimits

0xe078,	// (0x0001c040) calenote_swipe_2_pane_t1

0x91f9,	// (0x000171c1) main_mup_navstr_pane

0x420b,	// (0x000121d3) main_mup3_pane_t7_ParamLimits

0x420b,	// (0x000121d3) main_mup3_pane_t7

0xc71b,	// (0x0001a6e3) main_mp4_pane_g6_ParamLimits

0xc71b,	// (0x0001a6e3) main_mp4_pane_g6

0xc9cc,	// (0x0001a994) main_image3_pane_t4_ParamLimits

0xc9cc,	// (0x0001a994) main_image3_pane_t4

0x7412,	// (0x000153da) popup_navstr_preview_pane_ParamLimits

0x7412,	// (0x000153da) popup_navstr_preview_pane

0x7426,	// (0x000153ee) scroll_navstr_pane_ParamLimits

0x7426,	// (0x000153ee) scroll_navstr_pane

0x91f9,	// (0x000171c1) bg_popup_preview_window_pane_cp04

0xe09f,	// (0x0001c067) popup_navstr_preview_pane_t1

0x743a,	// (0x00015402) scroll_navstr_pane_g1_ParamLimits

0x743a,	// (0x00015402) scroll_navstr_pane_g1

0x744e,	// (0x00015416) scroll_navstr_pane_t1_ParamLimits

0x744e,	// (0x00015416) scroll_navstr_pane_t1

0xe038,	// (0x0001c000) bg_button_pane_cp014

0xe038,	// (0x0001c000) bg_button_pane_cp030

0x6d52,	// (0x00014d1a) list_double_fisheye_pane_g4_ParamLimits

0x6d52,	// (0x00014d1a) list_double_fisheye_pane_g4

0x6d5e,	// (0x00014d26) list_double_fisheye_pane_g5_ParamLimits

0x6d5e,	// (0x00014d26) list_double_fisheye_pane_g5

0xccb2,	// (0x0001ac7a) sp_fs_scroll_pane_cp03

0xddb7,	// (0x0001bd7f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xddc3,	// (0x0001bd8b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbd6,	// (0x0001db9e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6f65,	// (0x00014f2d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdfc5,	// (0x0001bf8d) sp_fs_scroll_pane_cp02

0x9b9a,	// (0x00017b62) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9b9a,	// (0x00017b62) popup_sp_fs_calendar_preview_list_single_pane

0x91f9,	// (0x000171c1) main_cam6_pano_pane

0x9268,	// (0x00017230) main_mup3_pane_ParamLimits

0x91f9,	// (0x000171c1) main_phacti_pane

0x6af3,	// (0x00014abb) bg_button_pane_cp11

0x6b0d,	// (0x00014ad5) main_mobtv_info_pane_g2_ParamLimits

0x6b0d,	// (0x00014ad5) main_mobtv_info_pane_g2

0x0001,

0xfb3b,	// (0x0001db03) main_mobtv_info_pane_g_ParamLimits

0xfb3b,	// (0x0001db03) main_mobtv_info_pane_g

0x99af,	// (0x00017977) sc_clock_pane_t5_ParamLimits

0x99af,	// (0x00017977) sc_clock_pane_t5

0xa77a,	// (0x00018742) main_radioblah_pane_g1_ParamLimits

0xa788,	// (0x00018750) main_radioblah_pane_t3_ParamLimits

0xa788,	// (0x00018750) main_radioblah_pane_t3

0xa788,	// (0x00018750) main_radioblah_pane_t4_ParamLimits

0xa788,	// (0x00018750) main_radioblah_pane_t4

0x9268,	// (0x00017230) main_radioblah_text_pane_ParamLimits

0x9268,	// (0x00017230) main_radioblah_text_pane

0xdbe3,	// (0x0001bbab) main_radioblah_info_pane_g1_ParamLimits

0xdc27,	// (0x0001bbef) main_radioblah_info_pane_t4_ParamLimits

0xdc27,	// (0x0001bbef) main_radioblah_info_pane_t4

0x9268,	// (0x00017230) main_sp_fs_calendar_pane

0x7465,	// (0x0001542d) main_phacti_pane_g1

0x746d,	// (0x00015435) phacti_note_pane_ParamLimits

0x746d,	// (0x00015435) phacti_note_pane

0xe0b6,	// (0x0001c07e) phacti_term_pane_ParamLimits

0xe0b6,	// (0x0001c07e) phacti_term_pane

0xe0cb,	// (0x0001c093) phacti_note_pane_t1_ParamLimits

0xe0cb,	// (0x0001c093) phacti_note_pane_t1

0xe0e2,	// (0x0001c0aa) phacti_term_pane_g1

0xe0ea,	// (0x0001c0b2) phacti_term_pane_t1_ParamLimits

0xe0ea,	// (0x0001c0b2) phacti_term_pane_t1

0xe114,	// (0x0001c0dc) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe11c,	// (0x0001c0e4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc3d,	// (0x0001dc05) popup_sp_fs_calendar_preview_list_single_pane_g

0xe124,	// (0x0001c0ec) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe124,	// (0x0001c0ec) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe13a,	// (0x0001c102) aid_popup_sp_fs_bg_corner_pane

0x99a5,	// (0x0001796d) popup_sp_fs_calendar_preview_bg_pane_g1

0x91f9,	// (0x000171c1) popup_sp_fs_calendar_preview_bg_pane

0xe142,	// (0x0001c10a) popup_sp_fs_calendar_preview_list_pane

0xe153,	// (0x0001c11b) bg_main_sp_fs_cale_pane_ParamLimits

0xe153,	// (0x0001c11b) bg_main_sp_fs_cale_pane

0xe16b,	// (0x0001c133) listscroll_cale_mrui_pane_ParamLimits

0xe16b,	// (0x0001c133) listscroll_cale_mrui_pane

0xc205,	// (0x0001a1cd) listscroll_sp_fs_schedule_track_pane

0xe183,	// (0x0001c14b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe183,	// (0x0001c14b) main_sp_fs_ctrlbar_pane_cp01

0xc205,	// (0x0001a1cd) main_sp_fs_ribbon_pane

0xe199,	// (0x0001c161) popup_sp_fs_cale_preview_window

0xcc9d,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcc9d,	// (0x0001ac65) list_single_sp_fs_schedule_track_pane

0xe695,	// (0x0001c65d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe695,	// (0x0001c65d) bg_sp_fs_highlight_list_pane_cp03

0xe689,	// (0x0001c651) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe689,	// (0x0001c651) list_single_sp_fs_schedule_track_pane_g1

0xe689,	// (0x0001c651) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe689,	// (0x0001c651) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc42,	// (0x0001dc0a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc42,	// (0x0001dc0a) list_single_sp_fs_schedule_track_pane_g

0x7481,	// (0x00015449) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7481,	// (0x00015449) list_single_sp_fs_schedule_track_pane_t1

0x7493,	// (0x0001545b) sp_fs_schedule_track_pane_ParamLimits

0x7493,	// (0x0001545b) sp_fs_schedule_track_pane

0xc20d,	// (0x0001a1d5) sp_fs_schedule_track_pane_g1

0xc20d,	// (0x0001a1d5) sp_fs_schedule_track_pane_g2

0xc20d,	// (0x0001a1d5) sp_fs_schedule_track_pane_g3

0xc20d,	// (0x0001a1d5) sp_fs_schedule_track_pane_g4

0xc20d,	// (0x0001a1d5) sp_fs_schedule_track_pane_g5

0x0004,

0xf7d6,	// (0x0001d79e) sp_fs_schedule_track_pane_g

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g1

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g2

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g3

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g4

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g5

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g6

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g7

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g8

0xc20d,	// (0x0001a1d5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc47,	// (0x0001dc0f) bg_sp_fs_schedule_viewer_highlight_g

0xc205,	// (0x0001a1cd) bg_main_sp_fs_ribbon_pane

0xc20d,	// (0x0001a1d5) main_sp_fs_ribbon_pane_g1

0xe1ab,	// (0x0001c173) main_sp_fs_ribbon_pane_t1

0xe1ab,	// (0x0001c173) main_sp_fs_ribbon_pane_t2

0xe1ab,	// (0x0001c173) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5a,	// (0x0001dc22) main_sp_fs_ribbon_pane_t

0xc205,	// (0x0001a1cd) main_sp_fs_ribbon_scheduler_pane

0xc20d,	// (0x0001a1d5) bg_main_sp_fs_ribbon_pane_g1

0xc20d,	// (0x0001a1d5) bg_main_sp_fs_ribbon_pane_g2

0xc20d,	// (0x0001a1d5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6ae,	// (0x0001d676) bg_main_sp_fs_ribbon_pane_g

0xc20d,	// (0x0001a1d5) main_sp_fs_ribbon_scheduler_pane_g1

0xc20d,	// (0x0001a1d5) main_sp_fs_ribbon_scheduler_pane_g2

0xc20d,	// (0x0001a1d5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6ae,	// (0x0001d676) main_sp_fs_ribbon_scheduler_pane_g

0xe1b9,	// (0x0001c181) list_cale_mrui_pane

0x749f,	// (0x00015467) sp_fs_scroll_pane_cp07_ParamLimits

0x749f,	// (0x00015467) sp_fs_scroll_pane_cp07

0xe695,	// (0x0001c65d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe695,	// (0x0001c65d) bg_sp_fs_schedule_viewer_highlight

0xc205,	// (0x0001a1cd) list_single_sp_fs_schedule_track_pane_cp01

0xc205,	// (0x0001a1cd) list_sp_fs_schedule_track_pane

0xe1c6,	// (0x0001c18e) sp_fs_scroll_pane_cp06_ParamLimits

0xe1c6,	// (0x0001c18e) sp_fs_scroll_pane_cp06

0x99a5,	// (0x0001796d) bgmain_sp_fs_calendar_pane_g1

0x74bb,	// (0x00015483) list_single_cale_mrui_pane_ParamLimits

0x74bb,	// (0x00015483) list_single_cale_mrui_pane

0xe1da,	// (0x0001c1a2) list_single_cale_mrui_row_pane_ParamLimits

0xe1da,	// (0x0001c1a2) list_single_cale_mrui_row_pane

0xe1e7,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe1e7,	// (0x0001c1af) list_single_cale_mrui_row_pane_g1

0xe22c,	// (0x0001c1f4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe22c,	// (0x0001c1f4) list_single_cale_mrui_row_pane_t1

0x74dc,	// (0x000154a4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x74dc,	// (0x000154a4) list_single_cale_mrui_row_pane_t2

0xe23e,	// (0x0001c206) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe23e,	// (0x0001c206) list_single_cale_mrui_row_pane_t3

0xe26d,	// (0x0001c235) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe26d,	// (0x0001c235) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc68,	// (0x0001dc30) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc68,	// (0x0001dc30) list_single_cale_mrui_row_pane_t

0x7544,	// (0x0001550c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7544,	// (0x0001550c) list_single_cmail_header_editor_pane_bg_cp01

0x7572,	// (0x0001553a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7572,	// (0x0001553a) list_single_cmail_header_editor_pane_bg_cp02

0xe29c,	// (0x0001c264) main_radioblah_text_pane_t1_ParamLimits

0xe29c,	// (0x0001c264) main_radioblah_text_pane_t1

0xe2b6,	// (0x0001c27e) cam6_indi_pane_cp01

0xe2be,	// (0x0001c286) cam6_mode_pane_cp01

0xe2c6,	// (0x0001c28e) cam6_pano_pane

0xe2cf,	// (0x0001c297) cam6_zoom_pane_cp01

0xe2d7,	// (0x0001c29f) cam6_pano_image_pane

0xe2e2,	// (0x0001c2aa) cam6_pano_pane_g1

0xd99e,	// (0x0001b966) cam6_pano_pane_g2

0xe2eb,	// (0x0001c2b3) cam6_pano_pane_g3

0xe2f4,	// (0x0001c2bc) cam6_pano_pane_g4

0xc49f,	// (0x0001a467) cam6_pano_pane_g5

0xe2fd,	// (0x0001c2c5) cam6_pano_pane_g6

0xe307,	// (0x0001c2cf) cam6_pano_pane_g7

0xe30f,	// (0x0001c2d7) cam6_pano_pane_g8

0xe318,	// (0x0001c2e0) cam6_pano_pane_g9

0x0008,

0xfc71,	// (0x0001dc39) cam6_pano_pane_g

0x91f9,	// (0x000171c1) main_browser_tag_pane

0xe097,	// (0x0001c05f) grid_navstr_albumart_pane

0xe323,	// (0x0001c2eb) cell_navstr_albumart_pane_ParamLimits

0xe323,	// (0x0001c2eb) cell_navstr_albumart_pane

0xe343,	// (0x0001c30b) cell_navstr_albumart_pane_g1

0xe34b,	// (0x0001c313) cell_navstr_albumart_pane_g2

0xe353,	// (0x0001c31b) cell_navstr_albumart_pane_g3

0xe35b,	// (0x0001c323) cell_navstr_albumart_pane_g4

0x0003,

0xfc84,	// (0x0001dc4c) cell_navstr_albumart_pane_g

0x7592,	// (0x0001555a) bt_list_pane_ParamLimits

0x7592,	// (0x0001555a) bt_list_pane

0x75a6,	// (0x0001556e) bt_list_pane_t1

0x75b5,	// (0x0001557d) bt_list_pane_t2

0x0001,

0xfc8d,	// (0x0001dc55) bt_list_pane_t

0x91f9,	// (0x000171c1) main_cale_prevew_pane

0x75c4,	// (0x0001558c) popup_cale_preview_window_ParamLimits

0x75c4,	// (0x0001558c) popup_cale_preview_window

0x9268,	// (0x00017230) bg_popup_preview_window_pane_cp05_ParamLimits

0x9268,	// (0x00017230) bg_popup_preview_window_pane_cp05

0xe363,	// (0x0001c32b) list_cale_preview_pane_ParamLimits

0xe363,	// (0x0001c32b) list_cale_preview_pane

0x75dd,	// (0x000155a5) list_double_cale_preview_pane_ParamLimits

0x75dd,	// (0x000155a5) list_double_cale_preview_pane

0xcba5,	// (0x0001ab6d) list_single_cale_preview_pane_ParamLimits

0xcba5,	// (0x0001ab6d) list_single_cale_preview_pane

0x75ef,	// (0x000155b7) list_single_cale_preview_pane_g1

0x75f7,	// (0x000155bf) list_single_cale_preview_pane_t1_ParamLimits

0x75f7,	// (0x000155bf) list_single_cale_preview_pane_t1

0x760c,	// (0x000155d4) list_double_cale_preview_pane_g1

0x7614,	// (0x000155dc) list_double_cale_preview_pane_t1_ParamLimits

0x7614,	// (0x000155dc) list_double_cale_preview_pane_t1

0x7629,	// (0x000155f1) list_double_cale_preview_pane_t2_ParamLimits

0x7629,	// (0x000155f1) list_double_cale_preview_pane_t2

0x0001,

0xfc92,	// (0x0001dc5a) list_double_cale_preview_pane_t_ParamLimits

0xfc92,	// (0x0001dc5a) list_double_cale_preview_pane_t

0x91f9,	// (0x000171c1) main_ezdial_pane

0x9268,	// (0x00017230) main_sp_fs_email_pane_ParamLimits

0x6ed5,	// (0x00014e9d) cmail_ddmenu_btn01_pane_ParamLimits

0x6ed5,	// (0x00014e9d) cmail_ddmenu_btn01_pane

0x6ee8,	// (0x00014eb0) cmail_ddmenu_btn02_pane_ParamLimits

0x6ee8,	// (0x00014eb0) cmail_ddmenu_btn02_pane

0x6f0b,	// (0x00014ed3) cmail_ddmenu_btn03_pane_ParamLimits

0x6f0b,	// (0x00014ed3) cmail_ddmenu_btn03_pane

0x6fa4,	// (0x00014f6c) main_sp_fs_ctrlbar_pane_ParamLimits

0x6fc8,	// (0x00014f90) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x72f7,	// (0x000152bf) list_cmail_body_pane_ParamLimits

0xdfdb,	// (0x0001bfa3) bg_button_pane_cp12

0xdff0,	// (0x0001bfb8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdff0,	// (0x0001bfb8) list_single_cmail_header_detail_pane_g3

0xdffd,	// (0x0001bfc5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdffd,	// (0x0001bfc5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc29,	// (0x0001dbf1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc29,	// (0x0001dbf1) list_single_cmail_header_detail_pane_t

0xe0ff,	// (0x0001c0c7) phacti_term_pane_t2_ParamLimits

0xe0ff,	// (0x0001c0c7) phacti_term_pane_t2

0x0001,

0xfc38,	// (0x0001dc00) phacti_term_pane_t_ParamLimits

0xfc38,	// (0x0001dc00) phacti_term_pane_t

0xe36f,	// (0x0001c337) aid_size_list_single_double

0x7641,	// (0x00015609) popup_ezdial_listscroll_window

0xe37b,	// (0x0001c343) popup_number_entry_window_cp01

0x9c52,	// (0x00017c1a) bg_popup_call_pane_cp09

0xe388,	// (0x0001c350) ezdial_list_pane

0xe390,	// (0x0001c358) scroll_pane_cp23

0xa79c,	// (0x00018764) bg_button_pane_cp028_ParamLimits

0xa79c,	// (0x00018764) bg_button_pane_cp028

0x7658,	// (0x00015620) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7658,	// (0x00015620) cmail_ddmenu_btn01_pane_g1

0x7664,	// (0x0001562c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7664,	// (0x0001562c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc97,	// (0x0001dc5f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc97,	// (0x0001dc5f) cmail_ddmenu_btn01_pane_g

0xe398,	// (0x0001c360) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe398,	// (0x0001c360) cmail_ddmenu_btn01_pane_t1

0xa79c,	// (0x00018764) bg_button_pane_cp029_ParamLimits

0xa79c,	// (0x00018764) bg_button_pane_cp029

0x7670,	// (0x00015638) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7670,	// (0x00015638) cmail_ddmenu_btn02_pane_g1

0x7688,	// (0x00015650) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7688,	// (0x00015650) cmail_ddmenu_btn02_pane_t1

0x9268,	// (0x00017230) bg_button_pane_cp031_ParamLimits

0x9268,	// (0x00017230) bg_button_pane_cp031

0x7670,	// (0x00015638) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7670,	// (0x00015638) cmail_ddmenu_btn03_pane_g1

0x7688,	// (0x00015650) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7688,	// (0x00015650) cmail_ddmenu_btn03_pane_t1

0x99af,	// (0x00017977) cell_dialer2_keypad_pane_t1_ParamLimits

0xc4dd,	// (0x0001a4a5) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc4dd,	// (0x0001a4a5) cell_dialer2_keypad_pane_t1_copy1

0x6916,	// (0x000148de) ncimui_group_button_pane

0x9268,	// (0x00017230) main_sp_fs_calendar_pane_ParamLimits

0x730d,	// (0x000152d5) list_single_cmail_header_caption_pane_ParamLimits

0xe14a,	// (0x0001c112) aid_recal_txt_sm_pane

0x91f9,	// (0x000171c1) mian_recal_day_pane

0xe199,	// (0x0001c161) popup_sp_fs_cale_preview_window_ParamLimits

0xe3ad,	// (0x0001c375) list_recal_day_pane

0xe3ef,	// (0x0001c3b7) list_single_recal_day_pane_ParamLimits

0xe3ef,	// (0x0001c3b7) list_single_recal_day_pane

0xe401,	// (0x0001c3c9) list_single_recal_day_pane_g1_ParamLimits

0xe401,	// (0x0001c3c9) list_single_recal_day_pane_g1

0xe40d,	// (0x0001c3d5) list_single_recal_day_pane_g2_ParamLimits

0xe40d,	// (0x0001c3d5) list_single_recal_day_pane_g2

0xe419,	// (0x0001c3e1) list_single_recal_day_pane_g3_ParamLimits

0xe419,	// (0x0001c3e1) list_single_recal_day_pane_g3

0x76ac,	// (0x00015674) list_single_recal_day_pane_g4_ParamLimits

0x76ac,	// (0x00015674) list_single_recal_day_pane_g4

0xe425,	// (0x0001c3ed) list_single_recal_day_pane_g5_ParamLimits

0xe425,	// (0x0001c3ed) list_single_recal_day_pane_g5

0xe431,	// (0x0001c3f9) list_single_recal_day_pane_g6_ParamLimits

0xe431,	// (0x0001c3f9) list_single_recal_day_pane_g6

0x0004,

0xfca6,	// (0x0001dc6e) list_single_recal_day_pane_g_ParamLimits

0xfca6,	// (0x0001dc6e) list_single_recal_day_pane_g

0xe445,	// (0x0001c40d) list_single_recal_day_pane_t1

0xe457,	// (0x0001c41f) list_single_recal_day_pane_t2

0x0001,

0xfcb1,	// (0x0001dc79) list_single_recal_day_pane_t

0x76c4,	// (0x0001568c) ncimui_query_button_pane_ParamLimits

0x76c4,	// (0x0001568c) ncimui_query_button_pane

0x76d4,	// (0x0001569c) ncimui_query_button_pane_t1_ParamLimits

0x76d4,	// (0x0001569c) ncimui_query_button_pane_t1

0xe469,	// (0x0001c431) ncimui_query_button_pane_t2_ParamLimits

0xe469,	// (0x0001c431) ncimui_query_button_pane_t2

0x0001,

0xfcb6,	// (0x0001dc7e) ncimui_query_button_pane_t_ParamLimits

0xfcb6,	// (0x0001dc7e) ncimui_query_button_pane_t

0x76e7,	// (0x000156af) query_button_pane_ParamLimits

0x76e7,	// (0x000156af) query_button_pane

0x91f9,	// (0x000171c1) bg_button_pane_cp0028

0xe47c,	// (0x0001c444) query_button_pane_t1

0x3548,	// (0x00011510) main_tport_pane_ParamLimits

0x71bb,	// (0x00015183) bg_popup_window_pane_cp01_ParamLimits

0x71bb,	// (0x00015183) bg_popup_window_pane_cp01

0x71d6,	// (0x0001519e) heading_pane_cp08_ParamLimits

0x71d6,	// (0x0001519e) heading_pane_cp08

0x71e9,	// (0x000151b1) heading_pane_cp07_ParamLimits

0x71e9,	// (0x000151b1) heading_pane_cp07

0x7290,	// (0x00015258) cell_tport_appsw_pane_g2

0x0002,

0xfc16,	// (0x0001dbde) cell_tport_appsw_pane_g

0x2b2e,	// (0x00010af6) input_candi_list_open_g1

0xa01e,	// (0x00017fe6) list_cale_time_pane_g6_ParamLimits

0xa01e,	// (0x00017fe6) list_cale_time_pane_g6

0x3b55,	// (0x00011b1d) aid_size_touch_calib_1_ParamLimits

0x3b55,	// (0x00011b1d) aid_size_touch_calib_1

0x3b67,	// (0x00011b2f) aid_size_touch_calib_2_ParamLimits

0x3b67,	// (0x00011b2f) aid_size_touch_calib_2

0x3b7f,	// (0x00011b47) aid_size_touch_calib_3_ParamLimits

0x3b7f,	// (0x00011b47) aid_size_touch_calib_3

0x3b9d,	// (0x00011b65) aid_size_touch_calib_4_ParamLimits

0x3b9d,	// (0x00011b65) aid_size_touch_calib_4

0x3bb5,	// (0x00011b7d) main_touch_calib_button_group_pane_ParamLimits

0x3bb5,	// (0x00011b7d) main_touch_calib_button_group_pane

0x3bcd,	// (0x00011b95) main_touch_calib_pane_g1_ParamLimits

0x3bdf,	// (0x00011ba7) main_touch_calib_pane_g2_ParamLimits

0x3bf1,	// (0x00011bb9) main_touch_calib_pane_g3_ParamLimits

0x3c03,	// (0x00011bcb) main_touch_calib_pane_g4_ParamLimits

0xf65c,	// (0x0001d624) main_touch_calib_pane_g_ParamLimits

0x3c15,	// (0x00011bdd) main_touch_calib_pane_t1_ParamLimits

0x3c2f,	// (0x00011bf7) main_touch_calib_pane_t2_ParamLimits

0x3c49,	// (0x00011c11) main_touch_calib_pane_t3_ParamLimits

0x3c5d,	// (0x00011c25) main_touch_calib_pane_t4_ParamLimits

0x3c71,	// (0x00011c39) main_touch_calib_pane_t5_ParamLimits

0xf665,	// (0x0001d62d) main_touch_calib_pane_t_ParamLimits

0xc26d,	// (0x0001a235) list_single_fp_cale_pane_g3_ParamLimits

0xc26d,	// (0x0001a235) list_single_fp_cale_pane_g3

0x9268,	// (0x00017230) bg_button_pane_cp012_ParamLimits

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp03_ParamLimits

0x5aff,	// (0x00013ac7) cell_vitu2_function_top_pane_g1_ParamLimits

0x9268,	// (0x00017230) bg_vkb2_func_pane_cp04_ParamLimits

0x68a1,	// (0x00014869) main_ncimui_button_group_pane_ParamLimits

0x68a1,	// (0x00014869) main_ncimui_button_group_pane

0x6901,	// (0x000148c9) main_ncimui_pane_t3_ParamLimits

0x6901,	// (0x000148c9) main_ncimui_pane_t3

0xe0ad,	// (0x0001c075) phacti_button_group_pane

0xe36f,	// (0x0001c337) aid_size_list_single_double_ParamLimits

0x7641,	// (0x00015609) popup_ezdial_listscroll_window_ParamLimits

0xe37b,	// (0x0001c343) popup_number_entry_window_cp01_ParamLimits

0x76fa,	// (0x000156c2) phacti_button_pane_ParamLimits

0x76fa,	// (0x000156c2) phacti_button_pane

0x91f9,	// (0x000171c1) bg_button_pane_cp14

0xe48a,	// (0x0001c452) phacti_button_pane_t1

0x770b,	// (0x000156d3) main_touch_calib_button_pane_ParamLimits

0x770b,	// (0x000156d3) main_touch_calib_button_pane

0x9a1d,	// (0x000179e5) bg_button_pane_cp18_ParamLimits

0x9a1d,	// (0x000179e5) bg_button_pane_cp18

0xe498,	// (0x0001c460) main_touch_calib_button_pane_t1_ParamLimits

0xe498,	// (0x0001c460) main_touch_calib_button_pane_t1

0xe4ae,	// (0x0001c476) main_touch_calib_button_pane_t2_ParamLimits

0xe4ae,	// (0x0001c476) main_touch_calib_button_pane_t2

0x0001,

0xfcbb,	// (0x0001dc83) main_touch_calib_button_pane_t_ParamLimits

0xfcbb,	// (0x0001dc83) main_touch_calib_button_pane_t

0x91f9,	// (0x000171c1) cell_ncimui_button_pane

0x91f9,	// (0x000171c1) bg_button_pane_cp032

0xe4cc,	// (0x0001c494) cell_ncimui_button_pane_t1

0xc9ac,	// (0x0001a974) image3_infobar_pane_ParamLimits

0xc9ac,	// (0x0001a974) image3_infobar_pane

0x6c73,	// (0x00014c3b) fs_bigclock_status_pane_ParamLimits

0x6c73,	// (0x00014c3b) fs_bigclock_status_pane

0x6c80,	// (0x00014c48) main_fs_bigclock_clock_pane_ParamLimits

0x6c80,	// (0x00014c48) main_fs_bigclock_clock_pane

0x6c9e,	// (0x00014c66) main_fs_bigclock_indi_pane_ParamLimits

0x6c9e,	// (0x00014c66) main_fs_bigclock_indi_pane

0x6cd0,	// (0x00014c98) main_fs_bigclock_swipe_pane_ParamLimits

0x6cd0,	// (0x00014c98) main_fs_bigclock_swipe_pane

0x91f9,	// (0x000171c1) main_fs_clock_dumped_data

0xdaab,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdaab,	// (0x0001ba73) list_single_fs_bigclock_indicator_pane_g1

0xdac7,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdac7,	// (0x0001ba8f) list_single_fs_bigclock_indicator_pane_g2

0xdae1,	// (0x0001baa9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdae1,	// (0x0001baa9) list_single_fs_bigclock_indicator_pane_g3

0xdafb,	// (0x0001bac3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdafb,	// (0x0001bac3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb6f,	// (0x0001db37) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb6f,	// (0x0001db37) list_single_fs_bigclock_indicator_pane_g

0xdb26,	// (0x0001baee) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb26,	// (0x0001baee) list_single_fs_bigclock_indicator_pane_t1

0xdb4e,	// (0x0001bb16) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb4e,	// (0x0001bb16) list_single_fs_bigclock_indicator_pane_t2

0xdb76,	// (0x0001bb3e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdb76,	// (0x0001bb3e) list_single_fs_bigclock_indicator_pane_t3

0xdb9e,	// (0x0001bb66) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdb9e,	// (0x0001bb66) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7a,	// (0x0001db42) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7a,	// (0x0001db42) list_single_fs_bigclock_indicator_pane_t

0xe4da,	// (0x0001c4a2) image3_infobar_fav_pane_ParamLimits

0xe4da,	// (0x0001c4a2) image3_infobar_fav_pane

0xe4ea,	// (0x0001c4b2) image3_infobar_loc_pane_ParamLimits

0xe4ea,	// (0x0001c4b2) image3_infobar_loc_pane

0xe4fe,	// (0x0001c4c6) image3_infobar_time_pane_ParamLimits

0xe4fe,	// (0x0001c4c6) image3_infobar_time_pane

0x99a5,	// (0x0001796d) image3_infobar_time_pane_g1

0xe50e,	// (0x0001c4d6) image3_infobar_time_pane_t1

0x99a5,	// (0x0001796d) image3_infobar_loc_pane_g1

0xe51c,	// (0x0001c4e4) image3_infobar_loc_pane_g2

0x0001,

0xfcc0,	// (0x0001dc88) image3_infobar_loc_pane_g

0xe524,	// (0x0001c4ec) image3_infobar_loc_pane_t1

0x99a5,	// (0x0001796d) image3_infobar_fav_pane_g1

0xe532,	// (0x0001c4fa) image3_infobar_fav_pane_g2

0x0001,

0xfcc5,	// (0x0001dc8d) image3_infobar_fav_pane_g

0xe53a,	// (0x0001c502) fs_bigclock_status_battery_pane

0xe543,	// (0x0001c50b) fs_bigclock_status_signal_pane

0xe54c,	// (0x0001c514) fs_bigclock_status_title_pane

0xe555,	// (0x0001c51d) fs_bigclock_status_signal_pane_g1

0xe55e,	// (0x0001c526) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcca,	// (0x0001dc92) fs_bigclock_status_signal_pane_g

0xe566,	// (0x0001c52e) fs_bigclock_status_battery_pane_g1

0xe56f,	// (0x0001c537) fs_bigclock_status_battery_pane_g2

0x0001,

0xfccf,	// (0x0001dc97) fs_bigclock_status_battery_pane_g

0xe577,	// (0x0001c53f) fs_bigclock_status_title_pane_t1

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g1

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g2

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g3

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd4,	// (0x0001dc9c) main_fs_bigclock_clock_pane_g

0x7733,	// (0x000156fb) main_fs_bigclock_clock_pane_t1

0x774d,	// (0x00015715) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdd,	// (0x0001dca5) main_fs_bigclock_clock_pane_t

0xe585,	// (0x0001c54d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe585,	// (0x0001c54d) list_single_fs_bigclock_indicator_pane

0xe596,	// (0x0001c55e) list_single_fs_bigclock_pane_ParamLimits

0xe596,	// (0x0001c55e) list_single_fs_bigclock_pane

0xe5bc,	// (0x0001c584) main_fs_bigclock_indicator_pane_t1

0xe5cb,	// (0x0001c593) list_single_fs_bigclock_pane_g1

0xe5d3,	// (0x0001c59b) list_single_fs_bigclock_pane_t1

0x99a5,	// (0x0001796d) main_fs_bigclock_swipe_pane_g1

0xe616,	// (0x0001c5de) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcee,	// (0x0001dcb6) main_fs_bigclock_swipe_pane_g

0xe61e,	// (0x0001c5e6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe61e,	// (0x0001c5e6) main_fs_bigclock_swipe_pane_t1

0x2652,	// (0x0001061a) call_type_pane_ParamLimits

0x91f9,	// (0x000171c1) main_btmg_pane

0xe213,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe213,	// (0x0001c1db) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc61,	// (0x0001dc29) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc61,	// (0x0001dc29) list_single_cale_mrui_row_pane_g

0xe3d6,	// (0x0001c39e) list_recal_vselct_arw_lo_pane

0xe3de,	// (0x0001c3a6) list_recal_vselct_arw_up_pane

0xe3e6,	// (0x0001c3ae) list_recal_vselct_pane

0x77a7,	// (0x0001576f) btmg_button_pane

0x77b1,	// (0x00015779) main_btmg_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp044

0xe63b,	// (0x0001c603) btmg_button_pane_t1

0xb9b4,	// (0x0001997c) aid_listscroll_gen

0x9268,	// (0x00017230) main_cntbar_detail_pane

0xdfae,	// (0x0001bf76) list_cmail_folder_pane

0xccb2,	// (0x0001ac7a) sp_fs_scroll_pane_cp03_ParamLimits

0x77bb,	// (0x00015783) list_single_fs_dyc_pane_cp01_ParamLimits

0x77bb,	// (0x00015783) list_single_fs_dyc_pane_cp01

0xe649,	// (0x0001c611) aid_size_cmail_indent

0xe652,	// (0x0001c61a) list_single_dyc_row_pane_cp01

0x7804,	// (0x000157cc) cntbar_detail_list_pane_ParamLimits

0x7804,	// (0x000157cc) cntbar_detail_list_pane

0x7850,	// (0x00015818) main_cntbar_detail_cont_pane_ParamLimits

0x7850,	// (0x00015818) main_cntbar_detail_cont_pane

0xccb2,	// (0x0001ac7a) scroll_pane_cp032_ParamLimits

0xccb2,	// (0x0001ac7a) scroll_pane_cp032

0x7864,	// (0x0001582c) cntbar_detail_list_event_pane_ParamLimits

0x7864,	// (0x0001582c) cntbar_detail_list_event_pane

0x7814,	// (0x000157dc) cntbar_detail_list_shct_pane

0x9ec3,	// (0x00017e8b) aid_list_gen

0xe65b,	// (0x0001c623) aid_scroll

0xe664,	// (0x0001c62c) aid_size_touch_scroll_bar

0x7874,	// (0x0001583c) aid_list_double

0x787d,	// (0x00015845) aid_list_single

0x7874,	// (0x0001583c) aid_list_single_lg

0x7886,	// (0x0001584e) aid_list_z_g_a_sm

0x788e,	// (0x00015856) aid_list_z_g_d

0x7896,	// (0x0001585e) aid_txt_z_prm

0x78a4,	// (0x0001586c) aid_txt_z_prm_cp01

0x78b2,	// (0x0001587a) aid_txt_z_sec

0x78c0,	// (0x00015888) main_cntbar_detail_cont_pane_g1_ParamLimits

0x78c0,	// (0x00015888) main_cntbar_detail_cont_pane_g1

0x78d4,	// (0x0001589c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x78d4,	// (0x0001589c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf3,	// (0x0001dcbb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf3,	// (0x0001dcbb) main_cntbar_detail_cont_pane_g

0xe66d,	// (0x0001c635) main_cntbar_detail_cont_pane_t1

0xe67b,	// (0x0001c643) main_cntbar_detail_cont_pane_t2

0xe6ce,	// (0x0001c696) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcf8,	// (0x0001dcc0) main_cntbar_detail_cont_pane_t

0x78e4,	// (0x000158ac) cell_cntbar_detail_list_shct_pane_ParamLimits

0x78e4,	// (0x000158ac) cell_cntbar_detail_list_shct_pane

0xe6dc,	// (0x0001c6a4) cntbar_detail_list_shct_pane_g1

0xe6e5,	// (0x0001c6ad) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcff,	// (0x0001dcc7) cntbar_detail_list_shct_pane_g

0x78f8,	// (0x000158c0) cntbar_detail_list_event_pane_g1_ParamLimits

0x78f8,	// (0x000158c0) cntbar_detail_list_event_pane_g1

0x7904,	// (0x000158cc) cntbar_detail_list_event_pane_g2_ParamLimits

0x7904,	// (0x000158cc) cntbar_detail_list_event_pane_g2

0x0005,

0xfd04,	// (0x0001dccc) cntbar_detail_list_event_pane_g_ParamLimits

0xfd04,	// (0x0001dccc) cntbar_detail_list_event_pane_g

0x7970,	// (0x00015938) cntbar_detail_list_event_pane_t1_ParamLimits

0x7970,	// (0x00015938) cntbar_detail_list_event_pane_t1

0x7985,	// (0x0001594d) cntbar_detail_list_event_pane_t2_ParamLimits

0x7985,	// (0x0001594d) cntbar_detail_list_event_pane_t2

0x0002,

0xfd11,	// (0x0001dcd9) cntbar_detail_list_event_pane_t_ParamLimits

0xfd11,	// (0x0001dcd9) cntbar_detail_list_event_pane_t

0x99a5,	// (0x0001796d) cell_cntbar_detail_list_shct_pane_g1

0xa669,	// (0x00018631) navi_pane_mv_g3

0x9268,	// (0x00017230) main_cntbar_detail_pane_ParamLimits

0x91f9,	// (0x000171c1) main_notif_wgt_pane

0xc6a5,	// (0x0001a66d) aid_tch_main_mp4_pane_g4

0xc91d,	// (0x0001a8e5) popup_slider_window_cp02

0xe3cc,	// (0x0001c394) list_recal_day_event_pane

0x77d2,	// (0x0001579a) cntbar_detail_btn_pane_ParamLimits

0x77d2,	// (0x0001579a) cntbar_detail_btn_pane

0x77eb,	// (0x000157b3) cntbar_detail_btn_pane_cp01_ParamLimits

0x77eb,	// (0x000157b3) cntbar_detail_btn_pane_cp01

0x7814,	// (0x000157dc) cntbar_detail_list_shct_pane_ParamLimits

0x7824,	// (0x000157ec) cntbar_detail_pane_g1_ParamLimits

0x7824,	// (0x000157ec) cntbar_detail_pane_g1

0x7834,	// (0x000157fc) cntbar_detail_pane_t1_ParamLimits

0x7834,	// (0x000157fc) cntbar_detail_pane_t1

0x7910,	// (0x000158d8) cntbar_detail_list_event_pane_g3_ParamLimits

0x7910,	// (0x000158d8) cntbar_detail_list_event_pane_g3

0x7928,	// (0x000158f0) cntbar_detail_list_event_pane_g4_ParamLimits

0x7928,	// (0x000158f0) cntbar_detail_list_event_pane_g4

0x7940,	// (0x00015908) cntbar_detail_list_event_pane_g5_ParamLimits

0x7940,	// (0x00015908) cntbar_detail_list_event_pane_g5

0x7958,	// (0x00015920) cntbar_detail_list_event_pane_g6_ParamLimits

0x7958,	// (0x00015920) cntbar_detail_list_event_pane_g6

0x799a,	// (0x00015962) cntbar_detail_list_event_pane_t3_ParamLimits

0x799a,	// (0x00015962) cntbar_detail_list_event_pane_t3

0x79ac,	// (0x00015974) popup_notif_wgt_window_ParamLimits

0x79ac,	// (0x00015974) popup_notif_wgt_window

0x79c5,	// (0x0001598d) popup_submenu_window_cp01_ParamLimits

0x79c5,	// (0x0001598d) popup_submenu_window_cp01

0x9c52,	// (0x00017c1a) bg_popup_window_pane_cp10

0xe6ee,	// (0x0001c6b6) listscroll_notif_wgt_pane

0xe700,	// (0x0001c6c8) list_notif_wgt_window

0xe709,	// (0x0001c6d1) scroll_pane_cp033

0x79d7,	// (0x0001599f) list_notif_wgt_row_pane_ParamLimits

0x79d7,	// (0x0001599f) list_notif_wgt_row_pane

0xe712,	// (0x0001c6da) aid_size_list_notif_wgt_del

0xe71f,	// (0x0001c6e7) list_notif_wgt_row_pane_g1

0xe72b,	// (0x0001c6f3) list_notif_wgt_row_pane_g2

0xe73a,	// (0x0001c702) list_notif_wgt_row_pane_g3

0x0002,

0xfd18,	// (0x0001dce0) list_notif_wgt_row_pane_g

0xe747,	// (0x0001c70f) list_notif_wgt_row_pane_t1

0xe75d,	// (0x0001c725) list_notif_wgt_row_pane_t2

0xe76f,	// (0x0001c737) list_notif_wgt_row_pane_t3

0x0002,

0xfd1f,	// (0x0001dce7) list_notif_wgt_row_pane_t

0xce79,	// (0x0001ae41) list_recal_day_event_pane_g1

0xe781,	// (0x0001c749) list_recal_day_event_pane_t1

0x91f9,	// (0x000171c1) bg_button_pane_cp045

0x79e7,	// (0x000159af) cntbar_detail_btn_pane_t1

0xa79c,	// (0x00018764) main_callh_pane_ParamLimits

0xa79c,	// (0x00018764) main_callh_pane

0x91f9,	// (0x000171c1) main_coverflow0_pane

0x91f9,	// (0x000171c1) main_wgtman_pane

0x6ce8,	// (0x00014cb0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6ce8,	// (0x00014cb0) main_fs_bigclock_unlock_btn_pane

0x7288,	// (0x00015250) bg_button_pane_cp16

0x7298,	// (0x00015260) cell_tport_appsw_pane_g3

0x79f5,	// (0x000159bd) cf0_flow_pane_ParamLimits

0x79f5,	// (0x000159bd) cf0_flow_pane

0xe790,	// (0x0001c758) listscroll_cf0_pane

0xe79b,	// (0x0001c763) main_cf0_pane_g1

0x7a0a,	// (0x000159d2) main_cf0_pane_t1_ParamLimits

0x7a0a,	// (0x000159d2) main_cf0_pane_t1

0x7a21,	// (0x000159e9) main_cf0_pane_t2_ParamLimits

0x7a21,	// (0x000159e9) main_cf0_pane_t2

0x0001,

0xfd2b,	// (0x0001dcf3) main_cf0_pane_t_ParamLimits

0xfd2b,	// (0x0001dcf3) main_cf0_pane_t

0xe7ad,	// (0x0001c775) scroll_pane_cp11

0x7a38,	// (0x00015a00) cf0_flow_pane_g1

0x7a40,	// (0x00015a08) cf0_flow_pane_g2

0x0001,

0xfd30,	// (0x0001dcf8) cf0_flow_pane_g

0x7a48,	// (0x00015a10) cf0_flow_pane_t1

0x91f9,	// (0x000171c1) main_call6_pane

0x91f9,	// (0x000171c1) main_calllock_pane

0x7a56,	// (0x00015a1e) call6_btn_grp_pane_ParamLimits

0x7a56,	// (0x00015a1e) call6_btn_grp_pane

0x7a70,	// (0x00015a38) call6_pane_g1_ParamLimits

0x7a70,	// (0x00015a38) call6_pane_g1

0x7a86,	// (0x00015a4e) popup_call6_1st_window_ParamLimits

0x7a86,	// (0x00015a4e) popup_call6_1st_window

0x7a97,	// (0x00015a5f) popup_call6_2nd_window_ParamLimits

0x7a97,	// (0x00015a5f) popup_call6_2nd_window

0x7aa8,	// (0x00015a70) cell_call6_btn_pane_ParamLimits

0x7aa8,	// (0x00015a70) cell_call6_btn_pane

0x9c52,	// (0x00017c1a) bg_popup_call2_in_pane_cp03

0xe7b8,	// (0x0001c780) popup_call6_1st_window_g1

0xe7c0,	// (0x0001c788) popup_call6_1st_window_g2

0xe7c8,	// (0x0001c790) popup_call6_1st_window_g3

0x0002,

0xfd35,	// (0x0001dcfd) popup_call6_1st_window_g

0xe7d0,	// (0x0001c798) popup_call6_1st_window_t1

0xe7df,	// (0x0001c7a7) popup_call6_1st_window_t2

0xe7ed,	// (0x0001c7b5) popup_call6_1st_window_t3

0x0002,

0xfd3c,	// (0x0001dd04) popup_call6_1st_window_t

0x9c52,	// (0x00017c1a) bg_popup_call2_in_pane_cp04

0xe7fb,	// (0x0001c7c3) popup_call6_2nd_window_g1

0xe803,	// (0x0001c7cb) popup_call6_2nd_window_g2

0xe80b,	// (0x0001c7d3) popup_call6_2nd_window_g3

0x0002,

0xfd43,	// (0x0001dd0b) popup_call6_2nd_window_g

0xe813,	// (0x0001c7db) popup_call6_2nd_window_t1

0x91f9,	// (0x000171c1) bg_button_pane_cp15

0xe822,	// (0x0001c7ea) cell_call6_btn_pane_g1

0xe82b,	// (0x0001c7f3) cell_call6_btn_pane_t1

0x7abc,	// (0x00015a84) listscroll_wgtman_pane_ParamLimits

0x7abc,	// (0x00015a84) listscroll_wgtman_pane

0x7add,	// (0x00015aa5) wgtman_btn_pane_ParamLimits

0x7add,	// (0x00015aa5) wgtman_btn_pane

0xa47d,	// (0x00018445) aid_scroll_copy1

0xe83a,	// (0x0001c802) list_wgtman_pane

0x7b20,	// (0x00015ae8) wgtman_btn_pane_g1_ParamLimits

0x7b20,	// (0x00015ae8) wgtman_btn_pane_g1

0x7b4c,	// (0x00015b14) wgtman_btn_pane_t1_ParamLimits

0x7b4c,	// (0x00015b14) wgtman_btn_pane_t1

0xe844,	// (0x0001c80c) wgtman_btn_pane_t2_ParamLimits

0xe844,	// (0x0001c80c) wgtman_btn_pane_t2

0x0001,

0xfd4a,	// (0x0001dd12) wgtman_btn_pane_t_ParamLimits

0xfd4a,	// (0x0001dd12) wgtman_btn_pane_t

0x7b89,	// (0x00015b51) listrow_wgtman_pane_ParamLimits

0x7b89,	// (0x00015b51) listrow_wgtman_pane

0x7b9c,	// (0x00015b64) listrow_wgtman_pane_g1

0x7ba9,	// (0x00015b71) listrow_wgtman_pane_g2

0x0001,

0xfd4f,	// (0x0001dd17) listrow_wgtman_pane_g

0x7bc7,	// (0x00015b8f) listrow_wgtman_pane_t1

0x7bdf,	// (0x00015ba7) listrow_wgtman_pane_t2

0x0001,

0xfd54,	// (0x0001dd1c) listrow_wgtman_pane_t

0x7c05,	// (0x00015bcd) wait_bar_pane_cp09

0xe85b,	// (0x0001c823) main_calllock_btn_pane

0xe865,	// (0x0001c82d) main_calllock_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp17

0xe822,	// (0x0001c7ea) main_calllock_btn_pane_g1

0xe86d,	// (0x0001c835) main_calllock_btn_pane_t1

0x91f9,	// (0x000171c1) main_dialer3_pane

0x91f9,	// (0x000171c1) main_fmrd2_pane

0x99a5,	// (0x0001796d) main_fs_bigclock_unlock_btn_pane_g1

0x7c1f,	// (0x00015be7) main_fs_bigclock_unlock_btn_pane_t1

0x7c2d,	// (0x00015bf5) area_fmrd2_info_pane_ParamLimits

0x7c2d,	// (0x00015bf5) area_fmrd2_info_pane

0x7c3e,	// (0x00015c06) area_fmrd2_visual_pane_ParamLimits

0x7c3e,	// (0x00015c06) area_fmrd2_visual_pane

0x7c4c,	// (0x00015c14) fmrd2_indi_pane_ParamLimits

0x7c4c,	// (0x00015c14) fmrd2_indi_pane

0x7c59,	// (0x00015c21) area_fmrd2_visual_pane_g1

0x7c61,	// (0x00015c29) area_fmrd2_visual_pane_t1

0x7c71,	// (0x00015c39) area_fmrd2_visual_pane_t2

0x7c81,	// (0x00015c49) area_fmrd2_visual_pane_t3

0x0002,

0xfd5e,	// (0x0001dd26) area_fmrd2_visual_pane_t

0x7c91,	// (0x00015c59) area_fmrd2_info_pane_g1

0x7c99,	// (0x00015c61) area_fmrd2_info_pane_t1

0x7ca9,	// (0x00015c71) area_fmrd2_info_pane_t2

0x7cb9,	// (0x00015c81) area_fmrd2_info_pane_t3

0x7cc9,	// (0x00015c91) area_fmrd2_info_pane_t4

0x0003,

0xfd65,	// (0x0001dd2d) area_fmrd2_info_pane_t

0x7cd7,	// (0x00015c9f) fmrd2_indi_pane_t1

0x7ce7,	// (0x00015caf) fmrd2_indi_pane_t2

0x7cf7,	// (0x00015cbf) fmrd2_indi_pane_t3

0x0002,

0xfd6e,	// (0x0001dd36) fmrd2_indi_pane_t

0xdb0a,	// (0x0001bad2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb0a,	// (0x0001bad2) list_single_fs_bigclock_indicator_pane_g5

0xdbbb,	// (0x0001bb83) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbbb,	// (0x0001bb83) list_single_fs_bigclock_indicator_pane_t5

0xc911,	// (0x0001a8d9) aid_cell_bcale_month_pane_ParamLimits

0xc911,	// (0x0001a8d9) aid_cell_bcale_month_pane

0xc911,	// (0x0001a8d9) bcale_month_pane_ParamLimits

0xc911,	// (0x0001a8d9) bcale_month_pane

0xe695,	// (0x0001c65d) bcale_preview_pane_ParamLimits

0xe695,	// (0x0001c65d) bcale_preview_pane

0xe5d3,	// (0x0001c59b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe5f2,	// (0x0001c5ba) list_single_fs_bigclock_pane_t2_ParamLimits

0xe5f2,	// (0x0001c5ba) list_single_fs_bigclock_pane_t2

0x0001,

0xfce9,	// (0x0001dcb1) list_single_fs_bigclock_pane_t_ParamLimits

0xfce9,	// (0x0001dcb1) list_single_fs_bigclock_pane_t

0x7c17,	// (0x00015bdf) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd59,	// (0x0001dd21) main_fs_bigclock_unlock_btn_pane_g

0x7d07,	// (0x00015ccf) aid_dia3_key_size_ParamLimits

0x7d07,	// (0x00015ccf) aid_dia3_key_size

0x7d16,	// (0x00015cde) aid_dia3_listrow_size_ParamLimits

0x7d16,	// (0x00015cde) aid_dia3_listrow_size

0x7d2b,	// (0x00015cf3) dia3_keypad_fun_pane_ParamLimits

0x7d2b,	// (0x00015cf3) dia3_keypad_fun_pane

0x7d47,	// (0x00015d0f) dia3_keypad_num_pane_ParamLimits

0x7d47,	// (0x00015d0f) dia3_keypad_num_pane

0x7d62,	// (0x00015d2a) dia3_listscroll_pane_ParamLimits

0x7d62,	// (0x00015d2a) dia3_listscroll_pane

0x7d75,	// (0x00015d3d) dia3_numentry_pane_ParamLimits

0x7d75,	// (0x00015d3d) dia3_numentry_pane

0xe87c,	// (0x0001c844) dia3_list_pane

0xe887,	// (0x0001c84f) scroll_pane_cp12

0x91f9,	// (0x000171c1) bg_dia3_numentry_pane

0x7d8d,	// (0x00015d55) dia3_numentry_pane_t1

0x7d9c,	// (0x00015d64) cell_dia3_key_num_pane

0x7da4,	// (0x00015d6c) cell_dia3_key0_fun_pane_ParamLimits

0x7da4,	// (0x00015d6c) cell_dia3_key0_fun_pane

0x7db8,	// (0x00015d80) cell_dia3_key1_fun_pane_ParamLimits

0x7db8,	// (0x00015d80) cell_dia3_key1_fun_pane

0x7dd0,	// (0x00015d98) dia3_listrow_pane

0xd85d,	// (0x0001b825) bg_dia3_numentry_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp21

0xe892,	// (0x0001c85a) cell_dia3_key_num_pane_t1

0xe8a0,	// (0x0001c868) cell_dia3_key_num_pane_t2

0xe8af,	// (0x0001c877) cell_dia3_key_num_pane_t3

0xe8be,	// (0x0001c886) cell_dia3_key_num_pane_t4

0x0003,

0xfd75,	// (0x0001dd3d) cell_dia3_key_num_pane_t

0x91f9,	// (0x000171c1) bg_button_pane_cp19

0x7de2,	// (0x00015daa) cell_dia3_key0_fun_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp20

0x7dea,	// (0x00015db2) cell_dia3_key1_fun_pane_g1

0xe695,	// (0x0001c65d) area_left_week_number_pane

0xe695,	// (0x0001c65d) area_top_day_name_pane

0xe695,	// (0x0001c65d) frame_month_view_pane

0xe695,	// (0x0001c65d) grid_month_view_pane

0xe695,	// (0x0001c65d) cell_top_day_name_pane_ParamLimits

0xe695,	// (0x0001c65d) cell_top_day_name_pane

0xe695,	// (0x0001c65d) cell_area_left_week_number_pane_ParamLimits

0xe695,	// (0x0001c65d) cell_area_left_week_number_pane

0xe695,	// (0x0001c65d) cell_month_view_pane_ParamLimits

0xe695,	// (0x0001c65d) cell_month_view_pane

0xe689,	// (0x0001c651) frm_month_g1

0xe689,	// (0x0001c651) frm_month_g2

0xe689,	// (0x0001c651) frm_month_g3

0xe689,	// (0x0001c651) frm_month_g4

0xe689,	// (0x0001c651) frm_month_g5

0xe689,	// (0x0001c651) frm_month_g6

0xe689,	// (0x0001c651) frm_month_g7

0xe689,	// (0x0001c651) frm_month_g8

0xe689,	// (0x0001c651) frm_month_g9

0xe689,	// (0x0001c651) frm_month_g10

0xe689,	// (0x0001c651) frm_month_g11

0xe689,	// (0x0001c651) frm_month_g12

0xe689,	// (0x0001c651) frm_month_g13

0xe689,	// (0x0001c651) frm_month_g14

0xe689,	// (0x0001c651) frm_month_g15

0xe689,	// (0x0001c651) frm_month_g16

0x000f,

0xfd7e,	// (0x0001dd46) frm_month_g

0xe8cd,	// (0x0001c895) cell_top_day_name_pane_t1

0xe689,	// (0x0001c651) cell_area_left_week_number_pane_g1

0xe8cd,	// (0x0001c895) cell_area_left_week_number_pane_t1

0xe689,	// (0x0001c651) cell_month_view_pane_g1

0xe8cd,	// (0x0001c895) cell_month_view_pane_t1

0x91f9,	// (0x000171c1) main_fps_pane

0xdd7f,	// (0x0001bd47) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdd7f,	// (0x0001bd47) cmail_ddmenu_btn02_pane_cp1

0xdd9b,	// (0x0001bd63) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdd9b,	// (0x0001bd63) cmail_ddmenu_btn02_pane_cp2

0x767c,	// (0x00015644) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x767c,	// (0x00015644) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9c,	// (0x0001dc64) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9c,	// (0x0001dc64) cmail_ddmenu_btn02_pane_g

0x769a,	// (0x00015662) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x769a,	// (0x00015662) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca1,	// (0x0001dc69) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca1,	// (0x0001dc69) cmail_ddmenu_btn02_pane_t

0x7df2,	// (0x00015dba) fps_text_pane_ParamLimits

0x7df2,	// (0x00015dba) fps_text_pane

0x7e09,	// (0x00015dd1) main_fps_pane_g1_ParamLimits

0x7e09,	// (0x00015dd1) main_fps_pane_g1

0x7e23,	// (0x00015deb) wait_bar_pane_cp010_ParamLimits

0x7e23,	// (0x00015deb) wait_bar_pane_cp010

0x7e34,	// (0x00015dfc) fps_text_pane_t1_ParamLimits

0x7e34,	// (0x00015dfc) fps_text_pane_t1

0xe6a1,	// (0x0001c669) cam4_image_uncrop_pane_g1

0xe6aa,	// (0x0001c672) cam4_image_uncrop_pane_g2

0x4f4b,	// (0x00012f13) cam4_image_uncrop_pane_g3

0x4f54,	// (0x00012f1c) cam4_image_uncrop_pane_g4

0x0003,

0xf7f3,	// (0x0001d7bb) cam4_image_uncrop_pane_g

0x7dd0,	// (0x00015d98) dia3_listrow_pane_ParamLimits

0x91f9,	// (0x000171c1) main_phob2_pane

0x7259,	// (0x00015221) cell_tport_appsw_pane_cp02_ParamLimits

0x7259,	// (0x00015221) cell_tport_appsw_pane_cp02

0x726d,	// (0x00015235) cell_tport_appsw_pane_cp03_ParamLimits

0x726d,	// (0x00015235) cell_tport_appsw_pane_cp03

0x91f9,	// (0x000171c1) phob2_contact_card_pane

0x91f9,	// (0x000171c1) phob2_listscroll_pane

0xe8df,	// (0x0001c8a7) phob2_list_pane

0xe390,	// (0x0001c358) scroll_pane_cp034

0x7e4c,	// (0x00015e14) phob2_cc_data_pane_ParamLimits

0x7e4c,	// (0x00015e14) phob2_cc_data_pane

0x7e6b,	// (0x00015e33) phob2_cc_listscroll_pane_ParamLimits

0x7e6b,	// (0x00015e33) phob2_cc_listscroll_pane

0x7e89,	// (0x00015e51) list_double_large_graphic_phob2_pane_ParamLimits

0x7e89,	// (0x00015e51) list_double_large_graphic_phob2_pane

0x7eaa,	// (0x00015e72) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7eaa,	// (0x00015e72) list_double_large_graphic_phob2_pane_g1

0x7ebc,	// (0x00015e84) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7ebc,	// (0x00015e84) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd9f,	// (0x0001dd67) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd9f,	// (0x0001dd67) list_double_large_graphic_phob2_pane_g

0x7ef0,	// (0x00015eb8) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7ef0,	// (0x00015eb8) list_double_large_graphic_phob2_pane_t1

0x7f14,	// (0x00015edc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7f14,	// (0x00015edc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfda8,	// (0x0001dd70) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfda8,	// (0x0001dd70) list_double_large_graphic_phob2_pane_t

0x9268,	// (0x00017230) list_highlight_pane_cp024

0xe8e7,	// (0x0001c8af) phob2_cc_button_pane

0x7f35,	// (0x00015efd) phob2_cc_data_pane_g1_ParamLimits

0x7f35,	// (0x00015efd) phob2_cc_data_pane_g1

0x7f4c,	// (0x00015f14) phob2_cc_data_pane_g2_ParamLimits

0x7f4c,	// (0x00015f14) phob2_cc_data_pane_g2

0x0001,

0xfdad,	// (0x0001dd75) phob2_cc_data_pane_g_ParamLimits

0xfdad,	// (0x0001dd75) phob2_cc_data_pane_g

0x7f5e,	// (0x00015f26) phob2_cc_data_pane_t1_ParamLimits

0x7f5e,	// (0x00015f26) phob2_cc_data_pane_t1

0x7f76,	// (0x00015f3e) phob2_cc_data_pane_t2_ParamLimits

0x7f76,	// (0x00015f3e) phob2_cc_data_pane_t2

0x7f8e,	// (0x00015f56) phob2_cc_data_pane_t3_ParamLimits

0x7f8e,	// (0x00015f56) phob2_cc_data_pane_t3

0x0002,

0xfdb2,	// (0x0001dd7a) phob2_cc_data_pane_t_ParamLimits

0xfdb2,	// (0x0001dd7a) phob2_cc_data_pane_t

0xe8ef,	// (0x0001c8b7) phob2_cc_list_pane_ParamLimits

0xe8ef,	// (0x0001c8b7) phob2_cc_list_pane

0xcf1a,	// (0x0001aee2) scroll_pane_cp035_ParamLimits

0xcf1a,	// (0x0001aee2) scroll_pane_cp035

0x9268,	// (0x00017230) bg_button_pane_cp033

0xe8fb,	// (0x0001c8c3) phob2_cc_button_pane_g1

0xe907,	// (0x0001c8cf) phob2_cc_button_pane_t1

0xe91c,	// (0x0001c8e4) phob2_cc_button_pane_t2

0x0001,

0xfdb9,	// (0x0001dd81) phob2_cc_button_pane_t

0x7fa6,	// (0x00015f6e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x7fa6,	// (0x00015f6e) list_double_large_graphic_phob2_cc_pane

0x7fd8,	// (0x00015fa0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x7fd8,	// (0x00015fa0) list_double_large_graphic_phob2_cc_pane_g1

0xe92e,	// (0x0001c8f6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe92e,	// (0x0001c8f6) list_double_large_graphic_phob2_cc_pane_g2

0x7fe4,	// (0x00015fac) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7fe4,	// (0x00015fac) list_double_large_graphic_phob2_cc_pane_g3

0x7ff0,	// (0x00015fb8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7ff0,	// (0x00015fb8) list_double_large_graphic_phob2_cc_pane_g4

0x7ffc,	// (0x00015fc4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7ffc,	// (0x00015fc4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdbe,	// (0x0001dd86) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdbe,	// (0x0001dd86) list_double_large_graphic_phob2_cc_pane_g

0x8008,	// (0x00015fd0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8008,	// (0x00015fd0) list_double_large_graphic_phob2_cc_pane_t1

0x8031,	// (0x00015ff9) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8031,	// (0x00015ff9) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc9,	// (0x0001dd91) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc9,	// (0x0001dd91) list_double_large_graphic_phob2_cc_pane_t

0xe93a,	// (0x0001c902) list_highlight_pane_cp025_ParamLimits

0xe93a,	// (0x0001c902) list_highlight_pane_cp025

0x9268,	// (0x00017230) bg_button_pane_cp033_ParamLimits

0xe8fb,	// (0x0001c8c3) phob2_cc_button_pane_g1_ParamLimits

0xe907,	// (0x0001c8cf) phob2_cc_button_pane_t1_ParamLimits

0xe91c,	// (0x0001c8e4) phob2_cc_button_pane_t2_ParamLimits

0xfdb9,	// (0x0001dd81) phob2_cc_button_pane_t_ParamLimits

0x0d68,	// (0x0000ed30) popup_wgtman_window

0xccce,	// (0x0001ac96) scroll_pane_cp038

0x7b02,	// (0x00015aca) wgtman_btn_pane_cp_01_ParamLimits

0x7b02,	// (0x00015aca) wgtman_btn_pane_cp_01

0xe948,	// (0x0001c910) wgtman_content_pane

0xe951,	// (0x0001c919) wgtman_heading_pane

0x91f9,	// (0x000171c1) bg_heading_pane_cp02

0xe95a,	// (0x0001c922) wgtman_heading_pane_g1

0xe962,	// (0x0001c92a) wgtman_heading_pane_t1

0xe970,	// (0x0001c938) scroll_pane_cp036

0xe978,	// (0x0001c940) wgtman_list_pane

0xe6b3,	// (0x0001c67b) wgtman_list_pane_t1_ParamLimits

0xe6b3,	// (0x0001c67b) wgtman_list_pane_t1

0xca34,	// (0x0001a9fc) cam4_grid_pane

0x5c8c,	// (0x00013c54) bg_button_pane_cp015_ParamLimits

0x5c9d,	// (0x00013c65) bg_button_pane_cp016_ParamLimits

0x5ca9,	// (0x00013c71) bg_button_pane_cp017_ParamLimits

0x5cfd,	// (0x00013cc5) popup_vitu2_query_window_g3_ParamLimits

0x5cfd,	// (0x00013cc5) popup_vitu2_query_window_g3

0x5d9e,	// (0x00013d66) popup_vitu2_query_window_t6_ParamLimits

0x5d9e,	// (0x00013d66) popup_vitu2_query_window_t6

0x5dc9,	// (0x00013d91) popup_vitu2_query_window_t7_ParamLimits

0x5dc9,	// (0x00013d91) popup_vitu2_query_window_t7

0xe6a1,	// (0x0001c669) cam4_grid_pane_g1

0xe6aa,	// (0x0001c672) cam4_grid_pane_g2

0xe980,	// (0x0001c948) cam4_grid_pane_g3

0xe989,	// (0x0001c951) cam4_grid_pane_g4

0x0003,

0xfdce,	// (0x0001dd96) cam4_grid_pane_g

0x1816,	// (0x0000f7de) aid_placing_vt_slider_lsc_ParamLimits

0x1b13,	// (0x0000fadb) vidtel_button_pane_ParamLimits

0x1b13,	// (0x0000fadb) vidtel_button_pane

0x91f9,	// (0x000171c1) bg_button_pane_cp034

0xe994,	// (0x0001c95c) vidtel_button_pane_g1

0xe99c,	// (0x0001c964) vidtel_button_pane_t1

0xce2d,	// (0x0001adf5) aid_size_vtel_slider_touch

0xcf1a,	// (0x0001aee2) scroll_pane_cp039

0x6a7f,	// (0x00014a47) ncim_query_button_pane_cp01_ParamLimits

0x6a9e,	// (0x00014a66) ncimui_query_pane_g1_ParamLimits

0x9268,	// (0x00017230) input_focus_pane_cp012_ParamLimits

0xd8a3,	// (0x0001b86b) ncim_query_entry_pane_t1_ParamLimits

0xcf1a,	// (0x0001aee2) scroll_pane_cp039_ParamLimits

0xa554,	// (0x0001851c) navi_pane_bcale_mc_g1

0xa55c,	// (0x00018524) navi_pane_bcale_mc_t1

0xddcf,	// (0x0001bd97) main_sp_fs_email_pane_g1

0xdddb,	// (0x0001bda3) main_sp_fs_email_pane_g2

0x0001,

0xfbdf,	// (0x0001dba7) main_sp_fs_email_pane_g

0xe21f,	// (0x0001c1e7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe21f,	// (0x0001c1e7) list_single_cale_mrui_row_pane_g3

0x76ba,	// (0x00015682) list_single_recal_day_pane_g5_event_pane

0xe43d,	// (0x0001c405) list_single_recal_day_pane_g7

0xe9b2,	// (0x0001c97a) list_recal_day_event_pane_cp01

0xe9bb,	// (0x0001c983) list_recal_vselct_arw_lo_pane_cp01

0xe9c3,	// (0x0001c98b) list_recal_vselct_arw_up_pane_cp01

0xe9cb,	// (0x0001c993) list_recal_vselct_pane_cp01

0xce79,	// (0x0001ae41) list_recal_day_event_pane_cp01_g1

0xe9d5,	// (0x0001c99d) list_recal_day_event_pane_cp01_t1

0xe445,	// (0x0001c40d) list_single_recal_day_pane_t1_ParamLimits

0xe457,	// (0x0001c41f) list_single_recal_day_pane_t2_ParamLimits

0xfcb1,	// (0x0001dc79) list_single_recal_day_pane_t_ParamLimits

0x98e4,	// (0x000178ac) bg_notes_pane_ParamLimits

0x99e1,	// (0x000179a9) list_notes_pane_ParamLimits

0x0eb3,	// (0x0000ee7b) scroll_pane_cp06_ParamLimits

0x9a1d,	// (0x000179e5) main_notes_pane_ParamLimits

0x9268,	// (0x00017230) main_welc_pane

0x8093,	// (0x0001605b) main_welc_body_pane_ParamLimits

0x8093,	// (0x0001605b) main_welc_body_pane

0x80b0,	// (0x00016078) main_welc_opti_pane_ParamLimits

0x80b0,	// (0x00016078) main_welc_opti_pane

0x8120,	// (0x000160e8) main_welc_pane_t1_ParamLimits

0x8120,	// (0x000160e8) main_welc_pane_t1

0x8332,	// (0x000162fa) main_welc_body_row_pane_ParamLimits

0x8332,	// (0x000162fa) main_welc_body_row_pane

0x9951,	// (0x00017919) main_welc_opti_row_pane_ParamLimits

0x9951,	// (0x00017919) main_welc_opti_row_pane

0xe9eb,	// (0x0001c9b3) main_welc_opti_row_pane_g1

0x8347,	// (0x0001630f) main_welc_opti_row_pane_t1

0xe9f3,	// (0x0001c9bb) main_welc_body_row_pane_t1

0xe6f8,	// (0x0001c6c0) popup_notif_wgt_heading_pane

0xe712,	// (0x0001c6da) aid_size_list_notif_wgt_del_ParamLimits

0xe71f,	// (0x0001c6e7) list_notif_wgt_row_pane_g1_ParamLimits

0xe72b,	// (0x0001c6f3) list_notif_wgt_row_pane_g2_ParamLimits

0xe73a,	// (0x0001c702) list_notif_wgt_row_pane_g3_ParamLimits

0xfd18,	// (0x0001dce0) list_notif_wgt_row_pane_g_ParamLimits

0xe747,	// (0x0001c70f) list_notif_wgt_row_pane_t1_ParamLimits

0xe75d,	// (0x0001c725) list_notif_wgt_row_pane_t2_ParamLimits

0xe76f,	// (0x0001c737) list_notif_wgt_row_pane_t3_ParamLimits

0xfd1f,	// (0x0001dce7) list_notif_wgt_row_pane_t_ParamLimits

0x7b9c,	// (0x00015b64) listrow_wgtman_pane_g1_ParamLimits

0x7ba9,	// (0x00015b71) listrow_wgtman_pane_g2_ParamLimits

0xfd4f,	// (0x0001dd17) listrow_wgtman_pane_g_ParamLimits

0x7bc7,	// (0x00015b8f) listrow_wgtman_pane_t1_ParamLimits

0x7bdf,	// (0x00015ba7) listrow_wgtman_pane_t2_ParamLimits

0xfd54,	// (0x0001dd1c) listrow_wgtman_pane_t_ParamLimits

0x7c05,	// (0x00015bcd) wait_bar_pane_cp09_ParamLimits

0x91f9,	// (0x000171c1) bg_popup_heading_pane_cp02

0xea02,	// (0x0001c9ca) popup_notif_wgt_heading_pane_g1

0xea0a,	// (0x0001c9d2) popup_notif_wgt_heading_pane_t1

0x91f9,	// (0x000171c1) main_vids_pane

0x91f9,	// (0x000171c1) vids_listscroll_pane

0x8356,	// (0x0001631e) scroll_pane_cp040

0x91f9,	// (0x000171c1) vids_list_pane

0x8361,	// (0x00016329) vids_list_double_pane_ParamLimits

0x8361,	// (0x00016329) vids_list_double_pane

0x8372,	// (0x0001633a) vids_list_double_pane_g1

0x837b,	// (0x00016343) vids_list_double_pane_t1

0x838a,	// (0x00016352) vids_list_double_pane_t2

0x0001,

0xfded,	// (0x0001ddb5) vids_list_double_pane_t

0x9268,	// (0x00017230) main_ncimui_pane_ParamLimits

0x68b5,	// (0x0001487d) main_ncimui_pane_g1_ParamLimits

0x68c1,	// (0x00014889) main_ncimui_pane_g2_ParamLimits

0x68c1,	// (0x00014889) main_ncimui_pane_g2

0x0001,

0xfae5,	// (0x0001daad) main_ncimui_pane_g_ParamLimits

0xfae5,	// (0x0001daad) main_ncimui_pane_g

0x80cb,	// (0x00016093) main_welc_pane_g1_ParamLimits

0x80cb,	// (0x00016093) main_welc_pane_g1

0x80e0,	// (0x000160a8) main_welc_pane_g2_ParamLimits

0x80e0,	// (0x000160a8) main_welc_pane_g2

0x0003,

0xfdd7,	// (0x0001dd9f) main_welc_pane_g_ParamLimits

0xfdd7,	// (0x0001dd9f) main_welc_pane_g

0x98e4,	// (0x000178ac) listscroll_mce_pane_ParamLimits

0xa6a9,	// (0x00018671) wait_bar_pane_cp10

0xb9bc,	// (0x00019984) main_cale_day_pane_ParamLimits

0xb9bc,	// (0x00019984) main_cale_week_pane_ParamLimits

0x98e4,	// (0x000178ac) main_messa_pane_ParamLimits

0x4433,	// (0x000123fb) main_clock2_btn_pane_ParamLimits

0x4433,	// (0x000123fb) main_clock2_btn_pane

0xc2e7,	// (0x0001a2af) main_clock2_btn_pane_cp01_ParamLimits

0xc2e7,	// (0x0001a2af) main_clock2_btn_pane_cp01

0xe1b9,	// (0x0001c181) list_cale_mrui_pane_ParamLimits

0xe7a5,	// (0x0001c76d) main_cf0_pane_g2

0x0001,

0xfd26,	// (0x0001dcee) main_cf0_pane_g

0xe695,	// (0x0001c65d) area_left_week_number_pane_ParamLimits

0xe695,	// (0x0001c65d) area_top_day_name_pane_ParamLimits

0xe695,	// (0x0001c65d) frame_month_view_pane_ParamLimits

0xe695,	// (0x0001c65d) grid_month_view_pane_ParamLimits

0xe689,	// (0x0001c651) frm_month_g1_ParamLimits

0xe689,	// (0x0001c651) frm_month_g2_ParamLimits

0xe689,	// (0x0001c651) frm_month_g3_ParamLimits

0xe689,	// (0x0001c651) frm_month_g4_ParamLimits

0xe689,	// (0x0001c651) frm_month_g5_ParamLimits

0xe689,	// (0x0001c651) frm_month_g6_ParamLimits

0xe689,	// (0x0001c651) frm_month_g7_ParamLimits

0xe689,	// (0x0001c651) frm_month_g8_ParamLimits

0xe689,	// (0x0001c651) frm_month_g9_ParamLimits

0xe689,	// (0x0001c651) frm_month_g10_ParamLimits

0xe689,	// (0x0001c651) frm_month_g11_ParamLimits

0xe689,	// (0x0001c651) frm_month_g12_ParamLimits

0xe689,	// (0x0001c651) frm_month_g13_ParamLimits

0xe689,	// (0x0001c651) frm_month_g14_ParamLimits

0xe689,	// (0x0001c651) frm_month_g15_ParamLimits

0xe689,	// (0x0001c651) frm_month_g16_ParamLimits

0xfd7e,	// (0x0001dd46) frm_month_g_ParamLimits

0xe8cd,	// (0x0001c895) cell_top_day_name_pane_t1_ParamLimits

0xe689,	// (0x0001c651) cell_area_left_week_number_pane_g1_ParamLimits

0xe8cd,	// (0x0001c895) cell_area_left_week_number_pane_t1_ParamLimits

0xe689,	// (0x0001c651) cell_month_view_pane_g1_ParamLimits

0xe8cd,	// (0x0001c895) cell_month_view_pane_t1_ParamLimits

0x98dc,	// (0x000178a4) main_clock2_btn_pane_g1

0xea18,	// (0x0001c9e0) main_clock2_btn_pane_t1

0x9268,	// (0x00017230) listscroll_cmail_pane_ParamLimits

0xddcf,	// (0x0001bd97) main_sp_fs_email_pane_g1_ParamLimits

0xdddb,	// (0x0001bda3) main_sp_fs_email_pane_g2_ParamLimits

0xfbdf,	// (0x0001dba7) main_sp_fs_email_pane_g_ParamLimits

0xe3ad,	// (0x0001c375) list_recal_day_pane_ParamLimits

0xe3be,	// (0x0001c386) mian_recal_day_pane_t1

0x70fc,	// (0x000150c4) list_single_dyc_row_text_pane_t4_ParamLimits

0x70fc,	// (0x000150c4) list_single_dyc_row_text_pane_t4

0x7145,	// (0x0001510d) list_single_dyc_row_text_pane_t5_ParamLimits

0x7145,	// (0x0001510d) list_single_dyc_row_text_pane_t5

0xde7d,	// (0x0001be45) list_single_dyc_row_text_pane_t6_ParamLimits

0xde7d,	// (0x0001be45) list_single_dyc_row_text_pane_t6

0x2597,	// (0x0001055f) aid_mgn_list_cale_time_pane

0x9268,	// (0x00017230) main_gallery2_pane_ParamLimits

0xc2fd,	// (0x0001a2c5) main_clock2_pane_cp01_t1

0xc30b,	// (0x0001a2d3) main_clock2_pane_cp01_t3

0x0001,

0xf6cf,	// (0x0001d697) main_clock2_pane_cp01_t

0x124f,	// (0x0000f217) cale_week_scroll_pane_g16_ParamLimits

0x124f,	// (0x0000f217) cale_week_scroll_pane_g16

0x9c52,	// (0x00017c1a) vorec_slider_pane

0xe99c,	// (0x0001c964) vidtel_button_pane_t1_ParamLimits

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7720,	// (0x000156e8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd4,	// (0x0001dc9c) main_fs_bigclock_clock_pane_g_ParamLimits

0x7733,	// (0x000156fb) main_fs_bigclock_clock_pane_t1_ParamLimits

0x774d,	// (0x00015715) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdd,	// (0x0001dca5) main_fs_bigclock_clock_pane_t_ParamLimits

0x3cc6,	// (0x00011c8e) main_mup3_lyrics_pane_ParamLimits

0x3cc6,	// (0x00011c8e) main_mup3_lyrics_pane

0x83b2,	// (0x0001637a) main_mup3_lyrics_pane_t1_ParamLimits

0x83b2,	// (0x0001637a) main_mup3_lyrics_pane_t1

0xc68f,	// (0x0001a657) aid_main_mp4_pane_t1_area

0xc699,	// (0x0001a661) aid_main_mp4_pane_t2_area

0xc743,	// (0x0001a70b) main_mp4_pane_g7_ParamLimits

0xc743,	// (0x0001a70b) main_mp4_pane_g7

0xc74f,	// (0x0001a717) main_mp4_pane_g8_ParamLimits

0xc74f,	// (0x0001a717) main_mp4_pane_g8

0x4d1c,	// (0x00012ce4) aid_call6_pane_g1_size

0x7fc1,	// (0x00015f89) list_double_large_graphic_phob2_other_pane_ParamLimits

0x7fc1,	// (0x00015f89) list_double_large_graphic_phob2_other_pane

0xa485,	// (0x0001844d) list_double_large_graphic_phob2_other_pane_g1

0x91f9,	// (0x000171c1) list_highlight_pane_cp026

0x9268,	// (0x00017230) main_welc_pane_ParamLimits

0x6f31,	// (0x00014ef9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6f31,	// (0x00014ef9) main_sp_fs_ctrlbar_pane_g3

0x6f4b,	// (0x00014f13) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6f4b,	// (0x00014f13) main_sp_fs_ctrlbar_pane_g4

0x6f7f,	// (0x00014f47) toolbar2_fixed_button_pane_cp01

0x6f8a,	// (0x00014f52) toolbar2_fixed_button_pane_cp02

0x6f97,	// (0x00014f5f) toolbar2_fixed_button_pane_cp03

0x806d,	// (0x00016035) list_welc_entry_pane_ParamLimits

0x806d,	// (0x00016035) list_welc_entry_pane

0x80f5,	// (0x000160bd) main_welc_pane_g3_ParamLimits

0x80f5,	// (0x000160bd) main_welc_pane_g3

0x813e,	// (0x00016106) main_welc_pane_t2_ParamLimits

0x813e,	// (0x00016106) main_welc_pane_t2

0x8159,	// (0x00016121) main_welc_pane_t3_ParamLimits

0x8159,	// (0x00016121) main_welc_pane_t3

0x0005,

0xfde0,	// (0x0001dda8) main_welc_pane_t_ParamLimits

0xfde0,	// (0x0001dda8) main_welc_pane_t

0x8291,	// (0x00016259) welc_button_pane_ParamLimits

0x8291,	// (0x00016259) welc_button_pane

0x831d,	// (0x000162e5) welc_service_logo_pane_ParamLimits

0x831d,	// (0x000162e5) welc_service_logo_pane

0x83ce,	// (0x00016396) list_single_welc_entry_pane_ParamLimits

0x83ce,	// (0x00016396) list_single_welc_entry_pane

0x83df,	// (0x000163a7) list_single_welc_entry_pane_g1

0x83e7,	// (0x000163af) list_single_welc_entry_pane_t1

0x83f5,	// (0x000163bd) list_single_welc_entry_pane_t2

0x0001,

0xfdf2,	// (0x0001ddba) list_single_welc_entry_pane_t

0x91f9,	// (0x000171c1) bg_button_pane_cp035

0x8403,	// (0x000163cb) welc_button_pane_t1

0xea34,	// (0x0001c9fc) welc_service_logo_pane_g1

0xea3d,	// (0x0001ca05) welc_service_logo_pane_g2

0x0001,

0xfdf7,	// (0x0001ddbf) welc_service_logo_pane_g

0x91f9,	// (0x000171c1) main_int_radio_pane

0xd741,	// (0x0001b709) list_single_fs_dyc_pane_g1

0x7ecb,	// (0x00015e93) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7ecb,	// (0x00015e93) list_double_large_graphic_phob2_pane_g3

0x7edd,	// (0x00015ea5) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7edd,	// (0x00015ea5) list_double_large_graphic_phob2_pane_g4

0x8411,	// (0x000163d9) main_int_radio1_pane_ParamLimits

0x8411,	// (0x000163d9) main_int_radio1_pane

0xea46,	// (0x0001ca0e) find_pane_cp02

0x842e,	// (0x000163f6) input_focus_pane_cp12_ParamLimits

0x842e,	// (0x000163f6) input_focus_pane_cp12

0x843e,	// (0x00016406) input_focus_pane_cp13_ParamLimits

0x843e,	// (0x00016406) input_focus_pane_cp13

0x8452,	// (0x0001641a) input_focus_pane_cp14_ParamLimits

0x8452,	// (0x0001641a) input_focus_pane_cp14

0xea4f,	// (0x0001ca17) int_radio1_listscroll_pane

0x8466,	// (0x0001642e) main_int_radio1_pane_g1_ParamLimits

0x8466,	// (0x0001642e) main_int_radio1_pane_g1

0x847e,	// (0x00016446) main_int_radio1_pane_t1_ParamLimits

0x847e,	// (0x00016446) main_int_radio1_pane_t1

0x8499,	// (0x00016461) main_int_radio1_pane_t2_ParamLimits

0x8499,	// (0x00016461) main_int_radio1_pane_t2

0x84b4,	// (0x0001647c) main_int_radio1_pane_t3_ParamLimits

0x84b4,	// (0x0001647c) main_int_radio1_pane_t3

0x84cf,	// (0x00016497) main_int_radio1_pane_t4_ParamLimits

0x84cf,	// (0x00016497) main_int_radio1_pane_t4

0xea59,	// (0x0001ca21) main_int_radio1_pane_t5_ParamLimits

0xea59,	// (0x0001ca21) main_int_radio1_pane_t5

0x84e1,	// (0x000164a9) main_int_radio1_pane_t6_ParamLimits

0x84e1,	// (0x000164a9) main_int_radio1_pane_t6

0x84f6,	// (0x000164be) main_int_radio1_pane_t7_ParamLimits

0x84f6,	// (0x000164be) main_int_radio1_pane_t7

0x850b,	// (0x000164d3) main_int_radio1_pane_t8_ParamLimits

0x850b,	// (0x000164d3) main_int_radio1_pane_t8

0x852a,	// (0x000164f2) main_int_radio1_pane_t9_ParamLimits

0x852a,	// (0x000164f2) main_int_radio1_pane_t9

0x853c,	// (0x00016504) main_int_radio1_pane_t10_ParamLimits

0x853c,	// (0x00016504) main_int_radio1_pane_t10

0x8562,	// (0x0001652a) main_int_radio1_pane_t11_ParamLimits

0x8562,	// (0x0001652a) main_int_radio1_pane_t11

0x8588,	// (0x00016550) main_int_radio1_pane_t12_ParamLimits

0x8588,	// (0x00016550) main_int_radio1_pane_t12

0x000b,

0xfdfc,	// (0x0001ddc4) main_int_radio1_pane_t_ParamLimits

0xfdfc,	// (0x0001ddc4) main_int_radio1_pane_t

0xea6b,	// (0x0001ca33) int_radio_list_pane

0xe390,	// (0x0001c358) scroll_pane_cp037

0xea73,	// (0x0001ca3b) list_double_large_graphic_int_radio_pane_ParamLimits

0xea73,	// (0x0001ca3b) list_double_large_graphic_int_radio_pane

0xea8c,	// (0x0001ca54) list_double_large_graphic_int_radio_pane_g1

0xea95,	// (0x0001ca5d) list_double_large_graphic_int_radio_pane_t1

0xeaa3,	// (0x0001ca6b) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe15,	// (0x0001dddd) list_double_large_graphic_int_radio_pane_t

0x91f9,	// (0x000171c1) list_highlight_pane_cp027

0xe9e3,	// (0x0001c9ab) main_button_pane_4

0x8108,	// (0x000160d0) main_welc_pane_g4_ParamLimits

0x8108,	// (0x000160d0) main_welc_pane_g4

0x8172,	// (0x0001613a) main_welc_pane_t4_ParamLimits

0x8172,	// (0x0001613a) main_welc_pane_t4

0x818d,	// (0x00016155) main_welc_pane_t5_ParamLimits

0x818d,	// (0x00016155) main_welc_pane_t5

0x81ce,	// (0x00016196) main_welc_pane_t6_ParamLimits

0x81ce,	// (0x00016196) main_welc_pane_t6

0x82a8,	// (0x00016270) welc_button_pane_2_ParamLimits

0x82a8,	// (0x00016270) welc_button_pane_2

0x82cd,	// (0x00016295) welc_button_pane_3_ParamLimits

0x82cd,	// (0x00016295) welc_button_pane_3

0xe9e3,	// (0x0001c9ab) welc_button_pane_4

0x82f5,	// (0x000162bd) welc_button_pane_5_ParamLimits

0x82f5,	// (0x000162bd) welc_button_pane_5

0x0b6c,	// (0x0000eb34) main_popup_welc_pane

0xeac9,	// (0x0001ca91) main_welc_sk_g3

0xead3,	// (0x0001ca9b) main_welc_sk_g4

0xeadd,	// (0x0001caa5) main_welc_sk_t3

0xeaed,	// (0x0001cab5) main_welc_sk_t4

0xeafd,	// (0x0001cac5) popup_welc_pane_t4

0xeb0b,	// (0x0001cad3) popup_welc_pane_t5

0xeb19,	// (0x0001cae1) popup_welc_pane_t6

0x91f9,	// (0x000171c1) main_acti_pane

0x91f9,	// (0x000171c1) main_sso_pane

0x859a,	// (0x00016562) sso_body_pane_ParamLimits

0x859a,	// (0x00016562) sso_body_pane

0x85ba,	// (0x00016582) sso_logo_pane_ParamLimits

0x85ba,	// (0x00016582) sso_logo_pane

0x85f3,	// (0x000165bb) sso_sk_pane_ParamLimits

0x85f3,	// (0x000165bb) sso_sk_pane

0xeb57,	// (0x0001cb1f) main_sso_logo_pane_g1

0x8605,	// (0x000165cd) sso_sk_pane_t1_ParamLimits

0x8605,	// (0x000165cd) sso_sk_pane_t1

0x861f,	// (0x000165e7) sso_sk_pane_t2_ParamLimits

0x861f,	// (0x000165e7) sso_sk_pane_t2

0x0001,

0xfe1a,	// (0x0001dde2) sso_sk_pane_t_ParamLimits

0xfe1a,	// (0x0001dde2) sso_sk_pane_t

0xeb60,	// (0x0001cb28) aid_sso_gap

0xeb69,	// (0x0001cb31) aid_sso_txt1

0xeb73,	// (0x0001cb3b) aid_sso_txt2

0xeb7d,	// (0x0001cb45) aid_sso_txt3

0x0002,

0xfe1f,	// (0x0001dde7) aid_sso_txt

0xeb87,	// (0x0001cb4f) aid_sso_widget

0x8689,	// (0x00016651) sso_btn_pane_ParamLimits

0x8689,	// (0x00016651) sso_btn_pane

0x871d,	// (0x000166e5) sso_option_pane_ParamLimits

0x871d,	// (0x000166e5) sso_option_pane

0x87d1,	// (0x00016799) sso_query_pane_ParamLimits

0x87d1,	// (0x00016799) sso_query_pane

0x8827,	// (0x000167ef) sso_query_pane_cp01_ParamLimits

0x8827,	// (0x000167ef) sso_query_pane_cp01

0x887f,	// (0x00016847) sso_t_hdr_pane_ParamLimits

0x887f,	// (0x00016847) sso_t_hdr_pane

0x88a9,	// (0x00016871) sso_t_nml_pane_ParamLimits

0x88a9,	// (0x00016871) sso_t_nml_pane

0x88ff,	// (0x000168c7) sso_t_sub_pane

0x85c7,	// (0x0001658f) sso_popup_window_ParamLimits

0x85c7,	// (0x0001658f) sso_popup_window

0x8635,	// (0x000165fd) sso_apps_pane_ParamLimits

0x8635,	// (0x000165fd) sso_apps_pane

0x865f,	// (0x00016627) sso_body_pane_g1

0x8669,	// (0x00016631) sso_body_pane_t1

0x8679,	// (0x00016641) sso_body_pane_t2

0x0001,

0xfe26,	// (0x0001ddee) sso_body_pane_t

0x86d5,	// (0x0001669d) sso_btn_pane_cp01_ParamLimits

0x86d5,	// (0x0001669d) sso_btn_pane_cp01

0x87a5,	// (0x0001676d) sso_prog_pane_ParamLimits

0x87a5,	// (0x0001676d) sso_prog_pane

0x892e,	// (0x000168f6) sso_t_hdr_pane_t1_ParamLimits

0x892e,	// (0x000168f6) sso_t_hdr_pane_t1

0xeb91,	// (0x0001cb59) input_focus_pane_cp10_ParamLimits

0xeb91,	// (0x0001cb59) input_focus_pane_cp10

0xeba5,	// (0x0001cb6d) sso_query_pane_t1_ParamLimits

0xeba5,	// (0x0001cb6d) sso_query_pane_t1

0xebb8,	// (0x0001cb80) sso_query_pane_t2_ParamLimits

0xebb8,	// (0x0001cb80) sso_query_pane_t2

0xebd1,	// (0x0001cb99) sso_query_pane_t3_ParamLimits

0xebd1,	// (0x0001cb99) sso_query_pane_t3

0xebfb,	// (0x0001cbc3) sso_query_pane_t4_ParamLimits

0xebfb,	// (0x0001cbc3) sso_query_pane_t4

0x0003,

0xfe2b,	// (0x0001ddf3) sso_query_pane_t_ParamLimits

0xfe2b,	// (0x0001ddf3) sso_query_pane_t

0xec1f,	// (0x0001cbe7) bg_button_pane_cp22

0xeab1,	// (0x0001ca79) sso_btn_pane_t1

0x8941,	// (0x00016909) sso_t_nml_pane_t1_ParamLimits

0x8941,	// (0x00016909) sso_t_nml_pane_t1

0xec28,	// (0x0001cbf0) sso_option_row_pane_ParamLimits

0xec28,	// (0x0001cbf0) sso_option_row_pane

0xec35,	// (0x0001cbfd) sso_t_sub_pane_t1_ParamLimits

0xec35,	// (0x0001cbfd) sso_t_sub_pane_t1

0x9268,	// (0x00017230) bg_popup_window_pane_cp11_ParamLimits

0x9268,	// (0x00017230) bg_popup_window_pane_cp11

0xec52,	// (0x0001cc1a) popup_sk_window_cp01_ParamLimits

0xec52,	// (0x0001cc1a) popup_sk_window_cp01

0xec5f,	// (0x0001cc27) sso_popup_body_pane_ParamLimits

0xec5f,	// (0x0001cc27) sso_popup_body_pane

0xec6c,	// (0x0001cc34) scroll_pane_cp21_ParamLimits

0xec6c,	// (0x0001cc34) scroll_pane_cp21

0xec79,	// (0x0001cc41) sso_popup_body_t_pane_ParamLimits

0xec79,	// (0x0001cc41) sso_popup_body_t_pane

0xec86,	// (0x0001cc4e) sso_popup_body_t_hdr_pane_ParamLimits

0xec86,	// (0x0001cc4e) sso_popup_body_t_hdr_pane

0x895c,	// (0x00016924) sso_popup_body_t_nml_pane_ParamLimits

0x895c,	// (0x00016924) sso_popup_body_t_nml_pane

0x8983,	// (0x0001694b) sso_popup_body_t_sub_pane_ParamLimits

0x8983,	// (0x0001694b) sso_popup_body_t_sub_pane

0xec98,	// (0x0001cc60) sso_popup_body_t_hdr_pane_t1

0x89a6,	// (0x0001696e) sso_popup_body_t_nml_pane_t1_ParamLimits

0x89a6,	// (0x0001696e) sso_popup_body_t_nml_pane_t1

0xeca8,	// (0x0001cc70) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeca8,	// (0x0001cc70) sso_popup_body_t_sub_pane_t1

0x99a5,	// (0x0001796d) sso_prog_pane_g1

0x89df,	// (0x000169a7) sso_apps_pane_comp1_ParamLimits

0x89df,	// (0x000169a7) sso_apps_pane_comp1

0xeccd,	// (0x0001cc95) sso_apps_pane_comp1_g1

0xecd5,	// (0x0001cc9d) sso_apps_pane_comp1_t1

0xecf1,	// (0x0001ccb9) sso_option_row_pane_g1

0xed09,	// (0x0001ccd1) sso_option_row_pane_t1

0xdfb6,	// (0x0001bf7e) list_cmail_pane_ParamLimits

0x91f9,	// (0x000171c1) main_call7_pane

0x805a,	// (0x00016022) bg_welc_area_ParamLimits

0x805a,	// (0x00016022) bg_welc_area

0x820c,	// (0x000161d4) sso_t_hdr_pane_a_t1_ParamLimits

0x820c,	// (0x000161d4) sso_t_hdr_pane_a_t1

0x8227,	// (0x000161ef) sso_t_nml_pane_a_t1_ParamLimits

0x8227,	// (0x000161ef) sso_t_nml_pane_a_t1

0x8256,	// (0x0001621e) sso_t_sub_pane_a_t1_ParamLimits

0x8256,	// (0x0001621e) sso_t_sub_pane_a_t1

0x830b,	// (0x000162d3) welc_button_pane_cp01_ParamLimits

0x830b,	// (0x000162d3) welc_button_pane_cp01

0xeab1,	// (0x0001ca79) sso_btn_pane_t1_copy1

0xeac0,	// (0x0001ca88) welc_button_pane_2_comp1

0xeb27,	// (0x0001caef) sso_t_hdr_pane_p_t1

0xeb37,	// (0x0001caff) sso_t_nml_pane_p_t1

0xeb47,	// (0x0001cb0f) sso_t_sub_pane_p_t1

0x91f9,	// (0x000171c1) main_att_pane

0x91f9,	// (0x000171c1) main_vod_pane

0x88ff,	// (0x000168c7) sso_t_sub_pane_ParamLimits

0xece3,	// (0x0001ccab) input_focus_pane_cp10_t1

0xed09,	// (0x0001ccd1) sso_option_row_pane_t1_ParamLimits

0x89f9,	// (0x000169c1) main_att_body_pane_ParamLimits

0x89f9,	// (0x000169c1) main_att_body_pane

0x8a0f,	// (0x000169d7) att_btn_emg_pane_ParamLimits

0x8a0f,	// (0x000169d7) att_btn_emg_pane

0x8a2e,	// (0x000169f6) att_btn_pane_ParamLimits

0x8a2e,	// (0x000169f6) att_btn_pane

0x8a9d,	// (0x00016a65) att_btn_pane_cp01_ParamLimits

0x8a9d,	// (0x00016a65) att_btn_pane_cp01

0x8add,	// (0x00016aa5) att_li_srv_pane_ParamLimits

0x8add,	// (0x00016aa5) att_li_srv_pane

0x8afa,	// (0x00016ac2) att_opt_pane_ParamLimits

0x8afa,	// (0x00016ac2) att_opt_pane

0x8b44,	// (0x00016b0c) att_query_pane_ParamLimits

0x8b44,	// (0x00016b0c) att_query_pane

0x8bbd,	// (0x00016b85) att_query_pane_cp01_ParamLimits

0x8bbd,	// (0x00016b85) att_query_pane_cp01

0x8c09,	// (0x00016bd1) att_t_hdr_pane_ParamLimits

0x8c09,	// (0x00016bd1) att_t_hdr_pane

0x8c75,	// (0x00016c3d) att_t_nml_pane_ParamLimits

0x8c75,	// (0x00016c3d) att_t_nml_pane

0x8ce5,	// (0x00016cad) att_t_nml_pane_cp01_ParamLimits

0x8ce5,	// (0x00016cad) att_t_nml_pane_cp01

0x8d11,	// (0x00016cd9) att_t_nmlb_pane_ParamLimits

0x8d11,	// (0x00016cd9) att_t_nmlb_pane

0x8d7e,	// (0x00016d46) att_term_pane_ParamLimits

0x8d7e,	// (0x00016d46) att_term_pane

0x8dc8,	// (0x00016d90) main_att_body_pane_g1_ParamLimits

0x8dc8,	// (0x00016d90) main_att_body_pane_g1

0xed25,	// (0x0001cced) att_t_hdr_pane_t1_ParamLimits

0xed25,	// (0x0001cced) att_t_hdr_pane_t1

0xed3e,	// (0x0001cd06) att_t_nml_pane_t1_ParamLimits

0xed3e,	// (0x0001cd06) att_t_nml_pane_t1

0xed63,	// (0x0001cd2b) att_btn_pane_t1

0xec1f,	// (0x0001cbe7) bg_button_pane_cp23

0x8df4,	// (0x00016dbc) att_li_srv_row_pane_ParamLimits

0x8df4,	// (0x00016dbc) att_li_srv_row_pane

0xed72,	// (0x0001cd3a) att_t_nmlb_pane_t1_ParamLimits

0xed72,	// (0x0001cd3a) att_t_nmlb_pane_t1

0xed8e,	// (0x0001cd56) att_query_pane_t1

0xed9d,	// (0x0001cd65) att_query_pane_t2

0xedac,	// (0x0001cd74) att_query_pane_t3

0x0002,

0xfe39,	// (0x0001de01) att_query_pane_t

0xedbb,	// (0x0001cd83) input_focus_pane_cp11

0xedc4,	// (0x0001cd8c) att_term_pane_t1_ParamLimits

0xedc4,	// (0x0001cd8c) att_term_pane_t1

0x91f9,	// (0x000171c1) att_opt_row_pane

0xede1,	// (0x0001cda9) att_opt_row_pane_g1

0xede9,	// (0x0001cdb1) att_opt_row_pane_t1_ParamLimits

0xede9,	// (0x0001cdb1) att_opt_row_pane_t1

0x8e04,	// (0x00016dcc) att_li_srv_row_pane_g1

0x8e0c,	// (0x00016dd4) att_li_srv_row_pane_t1_ParamLimits

0x8e0c,	// (0x00016dd4) att_li_srv_row_pane_t1

0x8e0c,	// (0x00016dd4) att_li_srv_row_pane_t2_ParamLimits

0x8e0c,	// (0x00016dd4) att_li_srv_row_pane_t2

0x0001,

0xfe40,	// (0x0001de08) att_li_srv_row_pane_t_ParamLimits

0xfe40,	// (0x0001de08) att_li_srv_row_pane_t

0xee02,	// (0x0001cdca) att_btn_close_pane_g1

0x91f9,	// (0x000171c1) bg_button_pane_cp24

0x8e21,	// (0x00016de9) main_vod_body_pane_ParamLimits

0x8e21,	// (0x00016de9) main_vod_body_pane

0x8e35,	// (0x00016dfd) main_vod_body_pane_g1_ParamLimits

0x8e35,	// (0x00016dfd) main_vod_body_pane_g1

0x8e69,	// (0x00016e31) scroll_pane_cp24_ParamLimits

0x8e69,	// (0x00016e31) scroll_pane_cp24

0x8eb7,	// (0x00016e7f) vod_btn_pane_ParamLimits

0x8eb7,	// (0x00016e7f) vod_btn_pane

0x8efd,	// (0x00016ec5) vod_det_pane_ParamLimits

0x8efd,	// (0x00016ec5) vod_det_pane

0x8f2d,	// (0x00016ef5) vod_logo_g1_ParamLimits

0x8f2d,	// (0x00016ef5) vod_logo_g1

0x8f6b,	// (0x00016f33) vod_opt_pane_ParamLimits

0x8f6b,	// (0x00016f33) vod_opt_pane

0x8f9e,	// (0x00016f66) vod_opt_pane_cp01_ParamLimits

0x8f9e,	// (0x00016f66) vod_opt_pane_cp01

0x8fca,	// (0x00016f92) vod_query_pane_ParamLimits

0x8fca,	// (0x00016f92) vod_query_pane

0x8ff5,	// (0x00016fbd) vod_query_pane_cp01_ParamLimits

0x8ff5,	// (0x00016fbd) vod_query_pane_cp01

0x9001,	// (0x00016fc9) vod_t_nml_pane_ParamLimits

0x9001,	// (0x00016fc9) vod_t_nml_pane

0x90aa,	// (0x00017072) vod_t_nml_pane_cp01_ParamLimits

0x90aa,	// (0x00017072) vod_t_nml_pane_cp01

0x90e6,	// (0x000170ae) vod_t_sub_pane_ParamLimits

0x90e6,	// (0x000170ae) vod_t_sub_pane

0x9117,	// (0x000170df) vod_t_sub_pane_cp01_ParamLimits

0x9117,	// (0x000170df) vod_t_sub_pane_cp01

0xedbb,	// (0x0001cd83) vod_query_field_pane

0xee0a,	// (0x0001cdd2) vod_query_pane_t1

0xee19,	// (0x0001cde1) bg_button_pane_cp25

0xeab1,	// (0x0001ca79) sso_btn_pane_t1_copy2

0x9143,	// (0x0001710b) vod_t_nml_pane_t1_ParamLimits

0x9143,	// (0x0001710b) vod_t_nml_pane_t1

0xee22,	// (0x0001cdea) vod_opt_row_pane_ParamLimits

0xee22,	// (0x0001cdea) vod_opt_row_pane

0xee34,	// (0x0001cdfc) vod_t_sub_pane_t1_ParamLimits

0xee34,	// (0x0001cdfc) vod_t_sub_pane_t1

0xee4d,	// (0x0001ce15) vod_det_cell_pane_ParamLimits

0xee4d,	// (0x0001ce15) vod_det_cell_pane

0x91f9,	// (0x000171c1) input_focus_pane_cp15

0xee5e,	// (0x0001ce26) vod_query_field_pane_t1

0xee6c,	// (0x0001ce34) vod_opt_row_pane_g1_ParamLimits

0xee6c,	// (0x0001ce34) vod_opt_row_pane_g1

0xee78,	// (0x0001ce40) vod_opt_row_pane_t1_ParamLimits

0xee78,	// (0x0001ce40) vod_opt_row_pane_t1

0xee98,	// (0x0001ce60) vod_det_cell_field_pane

0xeea1,	// (0x0001ce69) vod_det_cell_pane_g1

0xeea9,	// (0x0001ce71) vod_det_cell_pane_t1

0x91f9,	// (0x000171c1) input_focus_pane_cp16

0xeeb8,	// (0x0001ce80) vod_det_cell_field_pane_t1

0x7a56,	// (0x00015a1e) call7_btn_grp_pane_ParamLimits

0x7a56,	// (0x00015a1e) call7_btn_grp_pane

0x9172,	// (0x0001713a) call7_bubble_pane_ParamLimits

0x9172,	// (0x0001713a) call7_bubble_pane

0x9189,	// (0x00017151) cell_call7_btn_pane_ParamLimits

0x9189,	// (0x00017151) cell_call7_btn_pane

0x919d,	// (0x00017165) call7_pane_g1_ParamLimits

0x919d,	// (0x00017165) call7_pane_g1

0x91ac,	// (0x00017174) call7_windows_conf_pane_ParamLimits

0x91ac,	// (0x00017174) call7_windows_conf_pane

0x91c6,	// (0x0001718e) popup_call7_1st_window_ParamLimits

0x91c6,	// (0x0001718e) popup_call7_1st_window

0x91d7,	// (0x0001719f) popup_call7_2nd_window_ParamLimits

0x91d7,	// (0x0001719f) popup_call7_2nd_window

0x91e8,	// (0x000171b0) popup_call7_3rd_window_ParamLimits

0x91e8,	// (0x000171b0) popup_call7_3rd_window

0x91f9,	// (0x000171c1) bg_button_pane_cp26

0xe822,	// (0x0001c7ea) cell_call7_btn_pane_g1

0xe82b,	// (0x0001c7f3) cell_call7_btn_pane_t1

0x91f9,	// (0x000171c1) bg_popup_window_pane_cp12

0xeec6,	// (0x0001ce8e) popup_call7_1st_window_g1

0xeece,	// (0x0001ce96) popup_call7_1st_window_g2

0xeed6,	// (0x0001ce9e) popup_call7_1st_window_g3

0x0002,

0xfe45,	// (0x0001de0d) popup_call7_1st_window_g

0xeede,	// (0x0001cea6) popup_call7_1st_window_t1

0xeeed,	// (0x0001ceb5) popup_call7_1st_window_t2

0xeefb,	// (0x0001cec3) popup_call7_1st_window_t3

0x0002,

0xfe4c,	// (0x0001de14) popup_call7_1st_window_t

0x91f9,	// (0x000171c1) bg_popup_window_pane_cp13

0xef09,	// (0x0001ced1) popup_call7_2nd_window_g1

0xef11,	// (0x0001ced9) popup_call7_2nd_window_g2

0xef19,	// (0x0001cee1) popup_call7_2nd_window_g3

0x0002,

0xfe53,	// (0x0001de1b) popup_call7_2nd_window_g

0xef21,	// (0x0001cee9) popup_call7_2nd_window_t1

0x91f9,	// (0x000171c1) bg_popup_window_pane_cp14

0xef30,	// (0x0001cef8) call7_list_conf_pane

0xef38,	// (0x0001cf00) call7_list_conf_row_pane_ParamLimits

0xef38,	// (0x0001cf00) call7_list_conf_row_pane

0xef4b,	// (0x0001cf13) call7_list_conf_row_pane_g1

0xef53,	// (0x0001cf1b) call7_list_conf_row_pane_g2

0x0001,

0xfe5a,	// (0x0001de22) call7_list_conf_row_pane_g

0xef5b,	// (0x0001cf23) call7_list_conf_row_pane_t1

0x91f9,	// (0x000171c1) list_highlight_pane_cp22

0x8771,	// (0x00016739) sso_option_pane_cp01_ParamLimits

0x8771,	// (0x00016739) sso_option_pane_cp01

0x98e4,	// (0x000178ac) msg_header_pane_ParamLimits

0xa83f,	// (0x00018807) bg_button_pane_cp01_ParamLimits

0xa853,	// (0x0001881b) input_focus_pane_cp07_ParamLimits

0x6fe8,	// (0x00014fb0) popup_email_progress_window

0x99a5,	// (0x0001796d) popup_email_progress_window_g1

0xef69,	// (0x0001cf31) popup_email_progress_window_g2

0x0001,

0xfe5f,	// (0x0001de27) popup_email_progress_window_g

0xef71,	// (0x0001cf39) popup_email_progress_window_t1

0x91f9,	// (0x000171c1) cmail_conv_pane

0xded0,	// (0x0001be98) list_single_dyc_row_pane_g5_ParamLimits

0xded0,	// (0x0001be98) list_single_dyc_row_pane_g5

0xdedc,	// (0x0001bea4) list_single_dyc_row_pane_g6_ParamLimits

0xdedc,	// (0x0001bea4) list_single_dyc_row_pane_g6

0xdef4,	// (0x0001bebc) list_single_dyc_row_pane_g7_ParamLimits

0xdef4,	// (0x0001bebc) list_single_dyc_row_pane_g7

0x8087,	// (0x0001604f) main_button_pane_5_ParamLimits

0x8087,	// (0x0001604f) main_button_pane_5

0x85ae,	// (0x00016576) sso_emg_call_btn_pane_ParamLimits

0x85ae,	// (0x00016576) sso_emg_call_btn_pane

0x8914,	// (0x000168dc) sso_t_sub_pane_cp01_ParamLimits

0x8914,	// (0x000168dc) sso_t_sub_pane_cp01

0xecf1,	// (0x0001ccb9) sso_option_row_pane_g1_ParamLimits

0xecfd,	// (0x0001ccc5) sso_option_row_pane_g2_ParamLimits

0xecfd,	// (0x0001ccc5) sso_option_row_pane_g2

0x0001,

0xfe34,	// (0x0001ddfc) sso_option_row_pane_g_ParamLimits

0xfe34,	// (0x0001ddfc) sso_option_row_pane_g

0x8abb,	// (0x00016a83) att_btn_pane_cp02_ParamLimits

0x8abb,	// (0x00016a83) att_btn_pane_cp02

0xef7f,	// (0x0001cf47) cmail_conv_hdr_pane

0xef88,	// (0x0001cf50) list_cmail_conv_pane

0xef92,	// (0x0001cf5a) scroll_pane_cp31

0xef9a,	// (0x0001cf62) cmail_conv_hdr_pane_t1

0xefa8,	// (0x0001cf70) cmail_conv_hdr_pane_t2

0x0001,

0xfe64,	// (0x0001de2c) cmail_conv_hdr_pane_t

0xefb6,	// (0x0001cf7e) bubble_cmail_conv_pane_ParamLimits

0xefb6,	// (0x0001cf7e) bubble_cmail_conv_pane

0xe13a,	// (0x0001c102) aid_size_colorization_pane

0x9c52,	// (0x00017c1a) bg_bubble_cmail_conv_pane

0xefce,	// (0x0001cf96) body_bubble_cmail_conv_pane

0xa158,	// (0x00018120) bubble_cmail_conv_pane_g1

0xefd6,	// (0x0001cf9e) bubble_cmail_conv_pane_g2

0xefde,	// (0x0001cfa6) bubble_cmail_conv_pane_g3

0x0002,

0xfe69,	// (0x0001de31) bubble_cmail_conv_pane_g

0xefe6,	// (0x0001cfae) bubble_cmail_conv_pane_t1

0xdf5c,	// (0x0001bf24) bg_bubble_cmail_conv_pane_g1

0xdf65,	// (0x0001bf2d) bg_bubble_cmail_conv_pane_g2

0xdf6e,	// (0x0001bf36) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc0a,	// (0x0001dbd2) bg_bubble_cmail_conv_pane_g

0xeff4,	// (0x0001cfbc) body_bubble_cmail_conv_pane_t1_ParamLimits

0xeff4,	// (0x0001cfbc) body_bubble_cmail_conv_pane_t1

0xf00b,	// (0x0001cfd3) body_bubble_cmail_conv_pane_t2_ParamLimits

0xf00b,	// (0x0001cfd3) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe70,	// (0x0001de38) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe70,	// (0x0001de38) body_bubble_cmail_conv_pane_t

0x9268,	// (0x00017230) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal

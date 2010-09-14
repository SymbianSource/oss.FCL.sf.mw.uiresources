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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000317cd };

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
0x4ca6,	// (0x00036473) Screen

0x4cb2,	// (0x0003647f) application_window

0x4d0e,	// (0x000364db) area_bottom_pane_ParamLimits

0x4d0e,	// (0x000364db) area_bottom_pane

0x4d66,	// (0x00036533) area_top_pane_ParamLimits

0x4d66,	// (0x00036533) area_top_pane

0x4dca,	// (0x00036597) call_video_uplink_pane_ParamLimits

0x4dca,	// (0x00036597) call_video_uplink_pane

0x4e09,	// (0x000365d6) main_pane_ParamLimits

0x4e09,	// (0x000365d6) main_pane

0xeee7,	// (0x000406b4) context_pane

0x7bd6,	// (0x000393a3) navi_pane

0x7bfc,	// (0x000393c9) popup_cale_events_window_ParamLimits

0x7bfc,	// (0x000393c9) popup_cale_events_window

0xeefa,	// (0x000406c7) popup_mup_playback_window

0x7c14,	// (0x000393e1) signal_pane

0xcf24,	// (0x0003e6f1) main_browser_pane

0xd0d6,	// (0x0003e8a3) main_burst_pane

0x7a66,	// (0x00039233) main_calc_pane

0xeedb,	// (0x000406a8) main_cale_day_pane

0x541c,	// (0x00036be9) main_cale_month_pane

0xeedb,	// (0x000406a8) main_cale_week_pane

0xd0d6,	// (0x0003e8a3) main_call_pane

0xcbdc,	// (0x0003e3a9) main_call_poc_pane

0xd0d6,	// (0x0003e8a3) main_camera_pane

0xd0d6,	// (0x0003e8a3) main_chi_dic_pane

0xd8c1,	// (0x0003f08e) main_clock_pane

0xcbdc,	// (0x0003e3a9) main_fmradio_pane

0xd0d6,	// (0x0003e8a3) main_graph_messa_pane

0xcbdc,	// (0x0003e3a9) main_help_pane

0xcf24,	// (0x0003e6f1) main_im_pane

0xce37,	// (0x0003e604) main_image_pane_ParamLimits

0xce37,	// (0x0003e604) main_image_pane

0xcbdc,	// (0x0003e3a9) main_location2_pane

0xd0d6,	// (0x0003e8a3) main_location_pane

0xce37,	// (0x0003e604) main_messa_pane

0xcbdc,	// (0x0003e3a9) main_mp2_pane

0xd0d6,	// (0x0003e8a3) main_mp_pane

0xcbdc,	// (0x0003e3a9) main_msg_pane

0xcbdc,	// (0x0003e3a9) main_mup_eq_pane

0xcbdc,	// (0x0003e3a9) main_mup_pane

0xcf24,	// (0x0003e6f1) main_notes_pane

0xcbdc,	// (0x0003e3a9) main_pec_pane

0xcbdc,	// (0x0003e3a9) main_phob_pane

0xcbdc,	// (0x0003e3a9) main_pinb_pane

0xcbdc,	// (0x0003e3a9) main_postcard_pane

0xcbdc,	// (0x0003e3a9) main_qdial_pane

0xd0d6,	// (0x0003e8a3) main_skin_pane

0xcbdc,	// (0x0003e3a9) main_smil2_pane

0xd0d6,	// (0x0003e8a3) main_smil_pane

0xd0d6,	// (0x0003e8a3) main_video_pane

0xd0d6,	// (0x0003e8a3) main_video_tele_pane

0xce37,	// (0x0003e604) main_viewer_pane_ParamLimits

0xce37,	// (0x0003e604) main_viewer_pane

0xd0d6,	// (0x0003e8a3) main_vorec_pane

0x7aa4,	// (0x00039271) popup_blid_sat_info_window_ParamLimits

0x7aa4,	// (0x00039271) popup_blid_sat_info_window

0x7ac4,	// (0x00039291) popup_dyc_status_message_window_ParamLimits

0x7ac4,	// (0x00039291) popup_dyc_status_message_window

0x7ad2,	// (0x0003929f) popup_grid_large_graphic_window_ParamLimits

0x7ad2,	// (0x0003929f) popup_grid_large_graphic_window

0x7b61,	// (0x0003932e) popup_loc_request_window_ParamLimits

0x7b61,	// (0x0003932e) popup_loc_request_window

0x7bae,	// (0x0003937b) popup_wml_address_window_ParamLimits

0x7bae,	// (0x0003937b) popup_wml_address_window

0x793e,	// (0x0003910b) call_muted_g1

0x75b3,	// (0x00038d80) popup_call_audio_conf_window_ParamLimits

0x75b3,	// (0x00038d80) popup_call_audio_conf_window

0x794e,	// (0x0003911b) popup_call_audio_first_window_ParamLimits

0x794e,	// (0x0003911b) popup_call_audio_first_window

0x798e,	// (0x0003915b) popup_call_audio_in_window_ParamLimits

0x798e,	// (0x0003915b) popup_call_audio_in_window

0x79b2,	// (0x0003917f) popup_call_audio_out_window_ParamLimits

0x79b2,	// (0x0003917f) popup_call_audio_out_window

0x79d4,	// (0x000391a1) popup_call_audio_second_window_ParamLimits

0x79d4,	// (0x000391a1) popup_call_audio_second_window

0x7a04,	// (0x000391d1) popup_call_audio_wait_window_ParamLimits

0x7a04,	// (0x000391d1) popup_call_audio_wait_window

0x7a25,	// (0x000391f2) popup_number_entry_window_ParamLimits

0x7a25,	// (0x000391f2) popup_number_entry_window

0xc7c9,	// (0x0003df96) bg_popup_call_pane_cp05_ParamLimits

0xc7c9,	// (0x0003df96) bg_popup_call_pane_cp05

0xc7e9,	// (0x0003dfb6) popup_number_entry_window_t1

0xc7fc,	// (0x0003dfc9) popup_number_entry_window_t2

0xc80e,	// (0x0003dfdb) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x00040838) popup_number_entry_window_t

0xc820,	// (0x0003dfed) text_title_cp2

0xc833,	// (0x0003e000) bg_popup_call_pane_cp_ParamLimits

0xc833,	// (0x0003e000) bg_popup_call_pane_cp

0xc841,	// (0x0003e00e) call_thumbnail_pane

0xc849,	// (0x0003e016) popup_call_audio_in_window_g1_ParamLimits

0xc849,	// (0x0003e016) popup_call_audio_in_window_g1

0xc855,	// (0x0003e022) popup_call_audio_in_window_g2_ParamLimits

0xc855,	// (0x0003e022) popup_call_audio_in_window_g2

0xc861,	// (0x0003e02e) popup_call_audio_in_window_g3_ParamLimits

0xc861,	// (0x0003e02e) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00040841) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00040841) popup_call_audio_in_window_g

0xc86d,	// (0x0003e03a) popup_call_audio_in_window_t1_ParamLimits

0xc86d,	// (0x0003e03a) popup_call_audio_in_window_t1

0xc889,	// (0x0003e056) popup_call_audio_in_window_t2_ParamLimits

0xc889,	// (0x0003e056) popup_call_audio_in_window_t2

0xc8a5,	// (0x0003e072) popup_call_audio_in_window_t3_ParamLimits

0xc8a5,	// (0x0003e072) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x00040848) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x00040848) popup_call_audio_in_window_t

0xc833,	// (0x0003e000) bg_popup_call_pane_cp01_ParamLimits

0xc833,	// (0x0003e000) bg_popup_call_pane_cp01

0xc841,	// (0x0003e00e) call_thumbnail_pane_cp02

0xc8b8,	// (0x0003e085) call_type_pane_cp022

0xc8c0,	// (0x0003e08d) popup_call_audio_out_window_g1_ParamLimits

0xc8c0,	// (0x0003e08d) popup_call_audio_out_window_g1

0xc8d2,	// (0x0003e09f) popup_call_audio_out_window_g2_ParamLimits

0xc8d2,	// (0x0003e09f) popup_call_audio_out_window_g2

0xc8de,	// (0x0003e0ab) popup_call_audio_out_window_g3_ParamLimits

0xc8de,	// (0x0003e0ab) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0004084f) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0004084f) popup_call_audio_out_window_g

0xc8f0,	// (0x0003e0bd) popup_call_audio_out_window_t1_ParamLimits

0xc8f0,	// (0x0003e0bd) popup_call_audio_out_window_t1

0xc908,	// (0x0003e0d5) popup_call_audio_out_window_t2_ParamLimits

0xc908,	// (0x0003e0d5) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x00040856) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x00040856) popup_call_audio_out_window_t

0xc91d,	// (0x0003e0ea) bg_popup_call_pane_ParamLimits

0xc91d,	// (0x0003e0ea) bg_popup_call_pane

0x500d,	// (0x000367da) call_thumbnail_pane_cp_ParamLimits

0x500d,	// (0x000367da) call_thumbnail_pane_cp

0xc9a1,	// (0x0003e16e) call_type_pane_cp01_ParamLimits

0xc9a1,	// (0x0003e16e) call_type_pane_cp01

0xc9e5,	// (0x0003e1b2) popup_call_audio_first_window_g1_ParamLimits

0xc9e5,	// (0x0003e1b2) popup_call_audio_first_window_g1

0xca31,	// (0x0003e1fe) popup_call_audio_first_window_g2_ParamLimits

0xca31,	// (0x0003e1fe) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0004085b) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0004085b) popup_call_audio_first_window_g

0xca75,	// (0x0003e242) popup_call_audio_first_window_t1_ParamLimits

0xca75,	// (0x0003e242) popup_call_audio_first_window_t1

0xcb21,	// (0x0003e2ee) popup_call_audio_first_window_t4_ParamLimits

0xcb21,	// (0x0003e2ee) popup_call_audio_first_window_t4

0xcbad,	// (0x0003e37a) popup_call_audio_first_window_t5_ParamLimits

0xcbad,	// (0x0003e37a) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00040860) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00040860) popup_call_audio_first_window_t

0xcbdc,	// (0x0003e3a9) bg_popup_call_pane_cp02

0xcbe6,	// (0x0003e3b3) call_type_pane_cp023

0xcbee,	// (0x0003e3bb) popup_call_audio_wait_window_g1

0xcbf6,	// (0x0003e3c3) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x00040867) popup_call_audio_wait_window_g

0xcbfe,	// (0x0003e3cb) popup_call_audio_wait_window_t3

0xcc0c,	// (0x0003e3d9) bg_popup_call_pane_cp03_ParamLimits

0xcc0c,	// (0x0003e3d9) bg_popup_call_pane_cp03

0xcc6c,	// (0x0003e439) call_thumbnail_pane_cp011_ParamLimits

0xcc6c,	// (0x0003e439) call_thumbnail_pane_cp011

0xcc78,	// (0x0003e445) call_type_pane_cp034_ParamLimits

0xcc78,	// (0x0003e445) call_type_pane_cp034

0xccb4,	// (0x0003e481) popup_call_audio_second_window_g1_ParamLimits

0xccb4,	// (0x0003e481) popup_call_audio_second_window_g1

0xccf0,	// (0x0003e4bd) popup_call_audio_second_window_g2_ParamLimits

0xccf0,	// (0x0003e4bd) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0004086c) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0004086c) popup_call_audio_second_window_g

0xcd2c,	// (0x0003e4f9) popup_call_audio_second_window_t1_ParamLimits

0xcd2c,	// (0x0003e4f9) popup_call_audio_second_window_t1

0xcdad,	// (0x0003e57a) popup_call_audio_second_window_t2_ParamLimits

0xcdad,	// (0x0003e57a) popup_call_audio_second_window_t2

0xcde3,	// (0x0003e5b0) popup_call_audio_second_window_t3_ParamLimits

0xcde3,	// (0x0003e5b0) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00040871) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00040871) popup_call_audio_second_window_t

0xcbdc,	// (0x0003e3a9) bg_popup_call_pane_cp04

0xce19,	// (0x0003e5e6) list_conf_pane

0xce21,	// (0x0003e5ee) popup_call_audio_conf_window_t1

0xce2f,	// (0x0003e5fc) call_thumbnail_pane_g1

0xce37,	// (0x0003e604) bg_pinb_pane_ParamLimits

0xce37,	// (0x0003e604) bg_pinb_pane

0xce45,	// (0x0003e612) find_pinb_pane

0xce37,	// (0x0003e604) listscroll_pinb_pane_ParamLimits

0xce37,	// (0x0003e604) listscroll_pinb_pane

0xce4f,	// (0x0003e61c) pinb_bg_pane_g1

0xce4f,	// (0x0003e61c) pinb_bg_pane_g2

0xce4f,	// (0x0003e61c) pinb_bg_pane_g3

0xce4f,	// (0x0003e61c) pinb_bg_pane_g4

0xce4f,	// (0x0003e61c) pinb_bg_pane_g5

0xce4f,	// (0x0003e61c) pinb_bg_pane_g6

0xce4f,	// (0x0003e61c) pinb_bg_pane_g7

0xce4f,	// (0x0003e61c) pinb_bg_pane_g8

0xce4f,	// (0x0003e61c) pinb_bg_pane_g9

0xce4f,	// (0x0003e61c) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00040878) pinb_bg_pane_g

0xc7b1,	// (0x0003df7e) grid_pinb_pane

0xc7b1,	// (0x0003df7e) list_pinb_pane

0xce59,	// (0x0003e626) scroll_pane_cp01_ParamLimits

0xce59,	// (0x0003e626) scroll_pane_cp01

0xce67,	// (0x0003e634) find_pinb_pane_g1_ParamLimits

0xce67,	// (0x0003e634) find_pinb_pane_g1

0xce7f,	// (0x0003e64c) find_pinb_pane_t1

0xce91,	// (0x0003e65e) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00040892) find_pinb_pane_t

0xcea6,	// (0x0003e673) input_focus_pane_cp01_ParamLimits

0xcea6,	// (0x0003e673) input_focus_pane_cp01

0xc7bb,	// (0x0003df88) cell_pinb_pane_ParamLimits

0xc7bb,	// (0x0003df88) cell_pinb_pane

0xceb2,	// (0x0003e67f) cell_pinb_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) cell_pinb_pane_g1

0xcec0,	// (0x0003e68d) cell_pinb_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) cell_pinb_pane_g2

0xcec0,	// (0x0003e68d) cell_pinb_pane_g3_ParamLimits

0xcec0,	// (0x0003e68d) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00040897) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00040897) cell_pinb_pane_g

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp01

0xc7bb,	// (0x0003df88) list_pinb_item_pane_ParamLimits

0xc7bb,	// (0x0003df88) list_pinb_item_pane

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp02

0xcece,	// (0x0003e69b) list_pinb_item_pane_g1_ParamLimits

0xcece,	// (0x0003e69b) list_pinb_item_pane_g1

0xcec0,	// (0x0003e68d) list_pinb_item_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) list_pinb_item_pane_g2

0xceb2,	// (0x0003e67f) list_pinb_item_pane_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_pinb_item_pane_g3

0xcec0,	// (0x0003e68d) list_pinb_item_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0004089e) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0004089e) list_pinb_item_pane_g

0xcedc,	// (0x0003e6a9) list_pinb_item_pane_t1_ParamLimits

0xcedc,	// (0x0003e6a9) list_pinb_item_pane_t1

0x504b,	// (0x00036818) calc_display_pane

0x5069,	// (0x00036836) calc_paper_pane

0x5085,	// (0x00036852) grid_calc_pane

0xcbdc,	// (0x0003e3a9) bg_list_pane_cp01

0x50b1,	// (0x0003687e) clock_g1

0x50b9,	// (0x00036886) clock_g2

0x0001,

0xf0da,	// (0x000408a7) clock_g

0x50c3,	// (0x00036890) clock_t1_ParamLimits

0x50c3,	// (0x00036890) clock_t1

0x50d8,	// (0x000368a5) clock_t2_ParamLimits

0x50d8,	// (0x000368a5) clock_t2

0x50ea,	// (0x000368b7) clock_t3_ParamLimits

0x50ea,	// (0x000368b7) clock_t3

0x50fc,	// (0x000368c9) clock_t4_ParamLimits

0x50fc,	// (0x000368c9) clock_t4

0x510e,	// (0x000368db) clock_t5_ParamLimits

0x510e,	// (0x000368db) clock_t5

0x5123,	// (0x000368f0) clock_t6_ParamLimits

0x5123,	// (0x000368f0) clock_t6

0x5135,	// (0x00036902) clock_t7_ParamLimits

0x5135,	// (0x00036902) clock_t7

0x5147,	// (0x00036914) clock_t8_ParamLimits

0x5147,	// (0x00036914) clock_t8

0x515d,	// (0x0003692a) clock_t9_ParamLimits

0x515d,	// (0x0003692a) clock_t9

0x0008,

0xf0df,	// (0x000408ac) clock_t_ParamLimits

0xf0df,	// (0x000408ac) clock_t

0xcef0,	// (0x0003e6bd) popup_clock_analogue_window_cp02

0xcef0,	// (0x0003e6bd) popup_clock_digital_window_cp01

0xcbdc,	// (0x0003e3a9) listscroll_help_pane

0xcbdc,	// (0x0003e3a9) phob_pre_status_pane

0xcef8,	// (0x0003e6c5) grid_qdial_pane

0x5173,	// (0x00036940) listscroll_mce_pane

0xce37,	// (0x0003e604) bg_notes_pane

0xcf02,	// (0x0003e6cf) list_notes_pane

0x5191,	// (0x0003695e) scroll_pane_cp06

0xcf10,	// (0x0003e6dd) bg_calc_paper_pane

0x51a0,	// (0x0003696d) list_calc_pane

0xcf24,	// (0x0003e6f1) bg_calc_display_pane

0x51ba,	// (0x00036987) calc_display_pane_t1

0x51cf,	// (0x0003699c) calc_display_pane_t2

0x51e4,	// (0x000369b1) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x000408bf) calc_display_pane_t

0x51f6,	// (0x000369c3) cell_calc_pane_ParamLimits

0x51f6,	// (0x000369c3) cell_calc_pane

0xcf30,	// (0x0003e6fd) bg_calc_paper_pane_g1

0xcf3c,	// (0x0003e709) bg_calc_paper_pane_g2

0xcf48,	// (0x0003e715) bg_calc_paper_pane_g3

0xcf54,	// (0x0003e721) bg_calc_paper_pane_g4

0xcf60,	// (0x0003e72d) bg_calc_paper_pane_g5

0x5223,	// (0x000369f0) bg_calc_paper_pane_g6

0x5234,	// (0x00036a01) bg_calc_paper_pane_g7

0x5245,	// (0x00036a12) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x000408c6) bg_calc_paper_pane_g

0x5256,	// (0x00036a23) calc_bg_paper_pane_g9

0x5267,	// (0x00036a34) list_calc_item_pane_ParamLimits

0x5267,	// (0x00036a34) list_calc_item_pane

0xcf6c,	// (0x0003e739) list_calc_item_pane_g1

0x5294,	// (0x00036a61) list_calc_item_pane_t1_ParamLimits

0x5294,	// (0x00036a61) list_calc_item_pane_t1

0x52a6,	// (0x00036a73) list_calc_item_pane_t2_ParamLimits

0x52a6,	// (0x00036a73) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x000408d7) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x000408d7) list_calc_item_pane_t

0xce4f,	// (0x0003e61c) cell_calc_pane_g1

0xcf79,	// (0x0003e746) grid_highlight_pane_cp02

0x52d6,	// (0x00036aa3) bg_calc_display_pane_g1

0x52df,	// (0x00036aac) bg_calc_display_pane_g2

0x52e9,	// (0x00036ab6) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000408e1) bg_calc_display_pane_g

0x52f2,	// (0x00036abf) cell_qdial_pane_ParamLimits

0x52f2,	// (0x00036abf) cell_qdial_pane

0x5306,	// (0x00036ad3) cell_qdial_pane_g1_ParamLimits

0x5306,	// (0x00036ad3) cell_qdial_pane_g1

0x5313,	// (0x00036ae0) cell_qdial_pane_g2_ParamLimits

0x5313,	// (0x00036ae0) cell_qdial_pane_g2

0xcf9b,	// (0x0003e768) cell_qdial_pane_g3_ParamLimits

0xcf9b,	// (0x0003e768) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000408e8) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000408e8) cell_qdial_pane_g

0x5330,	// (0x00036afd) cell_qdial_pane_t1_ParamLimits

0x5330,	// (0x00036afd) cell_qdial_pane_t1

0x5348,	// (0x00036b15) cell_qdial_pane_t2_ParamLimits

0x5348,	// (0x00036b15) cell_qdial_pane_t2

0x535b,	// (0x00036b28) cell_qdial_pane_t3_ParamLimits

0x535b,	// (0x00036b28) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000408f1) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000408f1) cell_qdial_pane_t

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp04

0xcfa7,	// (0x0003e774) thumbnail_qdial_pane_ParamLimits

0xcfa7,	// (0x0003e774) thumbnail_qdial_pane

0xd003,	// (0x0003e7d0) list_help_pane

0xd00c,	// (0x0003e7d9) scroll_pane_cp02

0x536e,	// (0x00036b3b) help_list_pane_t1_ParamLimits

0x536e,	// (0x00036b3b) help_list_pane_t1

0x53a8,	// (0x00036b75) bg_notes_pane_g2

0x53b0,	// (0x00036b7d) bg_notes_pane_g3

0x53b8,	// (0x00036b85) notes_bg_pane_g1

0x53c0,	// (0x00036b8d) notes_bg_pane_g4

0x53c8,	// (0x00036b95) notes_bg_pane_g5

0x53d0,	// (0x00036b9d) notes_bg_pane_g6

0x53d8,	// (0x00036ba5) notes_bg_pane_g7

0x53e0,	// (0x00036bad) notes_bg_pane_g8

0x53e8,	// (0x00036bb5) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0004090f) notes_bg_pane_g

0x53f0,	// (0x00036bbd) list_notes_text_pane_ParamLimits

0x53f0,	// (0x00036bbd) list_notes_text_pane

0xd015,	// (0x0003e7e2) list_notes_text_pane_g1

0x3f68,	// (0x00035735) list_notes_text_pane_t1

0x541c,	// (0x00036be9) listscroll_cale_week_pane

0x5441,	// (0x00036c0e) bg_cale_heading_pane

0xd038,	// (0x0003e805) bg_cale_pane_cp01

0x5463,	// (0x00036c30) cale_week_corner_pane

0x547d,	// (0x00036c4a) cale_week_day_heading_pane

0x549f,	// (0x00036c6c) cale_week_scroll_pane_g1

0x54bc,	// (0x00036c89) cale_week_scroll_pane_g2

0x54cf,	// (0x00036c9c) cale_week_scroll_pane_g3

0x54e2,	// (0x00036caf) cale_week_scroll_pane_g4

0x54f5,	// (0x00036cc2) cale_week_scroll_pane_g5

0x5508,	// (0x00036cd5) cale_week_scroll_pane_g6

0x551b,	// (0x00036ce8) cale_week_scroll_pane_g7

0x5530,	// (0x00036cfd) cale_week_scroll_pane_g8

0x5545,	// (0x00036d12) cale_week_scroll_pane_g9

0x5558,	// (0x00036d25) cale_week_scroll_pane_g10

0x556b,	// (0x00036d38) cale_week_scroll_pane_g11

0x557e,	// (0x00036d4b) cale_week_scroll_pane_g12

0x5595,	// (0x00036d62) cale_week_scroll_pane_g13

0x55b0,	// (0x00036d7d) cale_week_scroll_pane_g14

0x55cb,	// (0x00036d98) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0004091e) cale_week_scroll_pane_g

0x55fb,	// (0x00036dc8) cale_week_time_pane

0x5610,	// (0x00036ddd) grid_cale_week_pane

0xd067,	// (0x0003e834) scroll_pane_cp08

0x562f,	// (0x00036dfc) cell_cale_week_pane_ParamLimits

0x562f,	// (0x00036dfc) cell_cale_week_pane

0x5691,	// (0x00036e5e) cale_week_day_heading_pane_t1

0x56ac,	// (0x00036e79) cale_week_day_heading_pane_t2

0x56c7,	// (0x00036e94) cale_week_day_heading_pane_t3

0x56e2,	// (0x00036eaf) cale_week_day_heading_pane_t4

0x56fd,	// (0x00036eca) cale_week_day_heading_pane_t5

0x5718,	// (0x00036ee5) cale_week_day_heading_pane_t6

0x5733,	// (0x00036f00) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0004093f) cale_week_day_heading_pane_t

0xd084,	// (0x0003e851) bg_cale_side_pane

0x574e,	// (0x00036f1b) cale_week_time_pane_t1

0x5768,	// (0x00036f35) cale_week_time_pane_t2

0x5782,	// (0x00036f4f) cale_week_time_pane_t3

0x579c,	// (0x00036f69) cale_week_time_pane_t4

0x57b6,	// (0x00036f83) cale_week_time_pane_t5

0x57d0,	// (0x00036f9d) cale_week_time_pane_t6

0x57f0,	// (0x00036fbd) cale_week_time_pane_t7

0x5812,	// (0x00036fdf) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0004094e) cale_week_time_pane_t

0x5836,	// (0x00037003) cell_cale_week_pane_g2

0x585a,	// (0x00037027) cell_cale_week_pane_g3_ParamLimits

0x585a,	// (0x00037027) cell_cale_week_pane_g3

0xd092,	// (0x0003e85f) grid_highlight_pane_cp07

0xd09a,	// (0x0003e867) listscroll_gms_pane

0xd0a4,	// (0x0003e871) grid_gms_pane

0xd0ad,	// (0x0003e87a) listscroll_gms_pane_g1

0xd0b5,	// (0x0003e882) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0004095f) listscroll_gms_pane_g

0x5872,	// (0x0003703f) scroll_pane_cp010

0x587d,	// (0x0003704a) cell_gms_pane_ParamLimits

0x587d,	// (0x0003704a) cell_gms_pane

0x588d,	// (0x0003705a) cell_gms_pane_g1

0xd0bd,	// (0x0003e88a) cell_gms_pane_g2

0xd015,	// (0x0003e7e2) cell_gms_pane_g3

0xd0c5,	// (0x0003e892) cell_gms_pane_g4

0x0003,

0xf197,	// (0x00040964) cell_gms_pane_g

0xd0ce,	// (0x0003e89b) grid_highlight_pane_cp09

0x78c2,	// (0x0003908f) phob_pre_status_pane_g1

0x78ca,	// (0x00039097) phob_pre_status_pane_g2

0x78d2,	// (0x0003909f) phob_pre_status_pane_g3

0x78da,	// (0x000390a7) phob_pre_status_pane_g4

0x0004,

0xf573,	// (0x00040d40) phob_pre_status_pane_g

0x78ea,	// (0x000390b7) phob_pre_status_pane_t1

0x78fa,	// (0x000390c7) phob_pre_status_pane_t2

0x790a,	// (0x000390d7) phob_pre_status_pane_t3

0x0002,

0xf57e,	// (0x00040d4b) phob_pre_status_pane_t

0xd0d6,	// (0x0003e8a3) bg_list_pane_cp05

0x589d,	// (0x0003706a) grid_vorec_pane

0x58a7,	// (0x00037074) vorec_t1

0x58b5,	// (0x00037082) vorec_t2

0x58c3,	// (0x00037090) vorec_t3

0x58d1,	// (0x0003709e) vorec_t4

0xc175,	// (0x0003d942) vorec_t5

0xc183,	// (0x0003d950) vorec_t6

0x0004,

0xf1a0,	// (0x0004096d) vorec_t

0xc191,	// (0x0003d95e) wait_bar_pane_cp01

0x58ed,	// (0x000370ba) cell_vorec_pane_ParamLimits

0x58ed,	// (0x000370ba) cell_vorec_pane

0x5900,	// (0x000370cd) cell_vorec_pane_g1

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp05

0xc7bb,	// (0x0003df88) cams_zoom_pane

0xc7bb,	// (0x0003df88) image_vga_pane

0xcec0,	// (0x0003e68d) main_camera_pane_g1

0xcec0,	// (0x0003e68d) main_camera_pane_g2

0xcec0,	// (0x0003e68d) main_camera_pane_g3

0xcec0,	// (0x0003e68d) main_camera_pane_g4

0xcec0,	// (0x0003e68d) main_camera_pane_g5

0xcec0,	// (0x0003e68d) main_camera_pane_g6

0xcec0,	// (0x0003e68d) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00040978) main_camera_pane_g

0xd0de,	// (0x0003e8ab) main_camera_pane_t1

0xd0de,	// (0x0003e8ab) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00040989) main_camera_pane_t

0x590a,	// (0x000370d7) cams_zoom_pane_cp_ParamLimits

0x590a,	// (0x000370d7) cams_zoom_pane_cp

0x5938,	// (0x00037105) image_cif_pane_ParamLimits

0x5938,	// (0x00037105) image_cif_pane

0xc7b1,	// (0x0003df7e) image_subqcif_pane

0x5946,	// (0x00037113) main_video_pane_g1_ParamLimits

0x5946,	// (0x00037113) main_video_pane_g1

0x596e,	// (0x0003713b) main_video_pane_g2_ParamLimits

0x596e,	// (0x0003713b) main_video_pane_g2

0x59a1,	// (0x0003716e) main_video_pane_g3_ParamLimits

0x59a1,	// (0x0003716e) main_video_pane_g3

0x59a1,	// (0x0003716e) main_video_pane_g4_ParamLimits

0x59a1,	// (0x0003716e) main_video_pane_g4

0x59cf,	// (0x0003719c) main_video_pane_g5_ParamLimits

0x59cf,	// (0x0003719c) main_video_pane_g5

0xd0f2,	// (0x0003e8bf) main_video_pane_g6_ParamLimits

0xd0f2,	// (0x0003e8bf) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0004098e) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0004098e) main_video_pane_g

0x59eb,	// (0x000371b8) main_video_pane_t1_ParamLimits

0x59eb,	// (0x000371b8) main_video_pane_t1

0xd10c,	// (0x0003e8d9) cams_zoom_pane_g1

0xd10c,	// (0x0003e8d9) cams_zoom_pane_g2

0xd10c,	// (0x0003e8d9) cams_zoom_pane_g3

0xd10c,	// (0x0003e8d9) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0004099d) cams_zoom_pane_g

0x5a31,	// (0x000371fe) grid_cams_pane

0x5a3f,	// (0x0003720c) linegrid_cams_pane

0x5a4d,	// (0x0003721a) cell_cams_pane_ParamLimits

0x5a4d,	// (0x0003721a) cell_cams_pane

0xd116,	// (0x0003e8e3) cams_burst_image_pane

0xd11e,	// (0x0003e8eb) cell_cams_pane_g1

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp03

0xce4f,	// (0x0003e61c) mp_bg_pane_g1

0xc7b1,	// (0x0003df7e) bg_list_pane_cp03

0xc7b1,	// (0x0003df7e) bg_mp_pane

0xc7b1,	// (0x0003df7e) grid_mp_pane

0xd10c,	// (0x0003e8d9) media_player_g1

0xd647,	// (0x0003ee14) media_player_t1

0xd647,	// (0x0003ee14) media_player_t2

0xd647,	// (0x0003ee14) media_player_t3

0xd647,	// (0x0003ee14) media_player_t4

0xd647,	// (0x0003ee14) media_player_t5

0xd647,	// (0x0003ee14) media_player_t6

0xd647,	// (0x0003ee14) media_player_t7

0x0006,

0xf55d,	// (0x00040d2a) media_player_t

0xc7b1,	// (0x0003df7e) wait_bar_pane_cp02

0xf542,	// (0x00040d0f) main_usb_pane_t

0xd8c1,	// (0x0003f08e) cell_mp_pane

0xce4f,	// (0x0003e61c) cell_mp_pane_g1

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp06

0xd13a,	// (0x0003e907) grid_skin_colour_pane

0xd142,	// (0x0003e90f) list_highlight_pane_cp03

0x5a60,	// (0x0003722d) skin_g1

0xd14a,	// (0x0003e917) skin_t1

0xd159,	// (0x0003e926) skin_t2

0x0001,

0xf1fe,	// (0x000409cb) skin_t

0x5a6a,	// (0x00037237) cell_skin_colour_pane_ParamLimits

0x5a6a,	// (0x00037237) cell_skin_colour_pane

0xd167,	// (0x0003e934) cell_skin_colour_pane_g1

0x5aee,	// (0x000372bb) call_video_g1_ParamLimits

0x5aee,	// (0x000372bb) call_video_g1

0x5afe,	// (0x000372cb) call_video_g2_ParamLimits

0x5afe,	// (0x000372cb) call_video_g2

0x0001,

0xf203,	// (0x000409d0) call_video_g_ParamLimits

0xf203,	// (0x000409d0) call_video_g

0x5b58,	// (0x00037325) call_video_uplink_pane_cp1_ParamLimits

0x5b58,	// (0x00037325) call_video_uplink_pane_cp1

0xd179,	// (0x0003e946) call_video_uplink_pane_cp2

0x5c24,	// (0x000373f1) video_down_crop_pane_ParamLimits

0x5c24,	// (0x000373f1) video_down_crop_pane

0x5d16,	// (0x000374e3) video_down_pane_ParamLimits

0x5d16,	// (0x000374e3) video_down_pane

0xd181,	// (0x0003e94e) video_down_subqcif_pane_ParamLimits

0xd181,	// (0x0003e94e) video_down_subqcif_pane

0xd199,	// (0x0003e966) video_down_subqcif_pane_cp_ParamLimits

0xd199,	// (0x0003e966) video_down_subqcif_pane_cp

0xd1bf,	// (0x0003e98c) im_reading_pane_ParamLimits

0xd1bf,	// (0x0003e98c) im_reading_pane

0x5e36,	// (0x00037603) im_writing_pane_ParamLimits

0x5e36,	// (0x00037603) im_writing_pane

0x5e54,	// (0x00037621) im_reading_pane_t1

0xd1d9,	// (0x0003e9a6) list_im_pane

0xd1ea,	// (0x0003e9b7) scroll_pane_cp07

0x5eac,	// (0x00037679) im_writing_pane_t1_ParamLimits

0x5eac,	// (0x00037679) im_writing_pane_t1

0xd203,	// (0x0003e9d0) im_writing_pane_t2_ParamLimits

0xd203,	// (0x0003e9d0) im_writing_pane_t2

0x0001,

0xf20d,	// (0x000409da) im_writing_pane_t_ParamLimits

0xf20d,	// (0x000409da) im_writing_pane_t

0xcbdc,	// (0x0003e3a9) input_focus_pane_cp04

0xcbdc,	// (0x0003e3a9) input_focus_pane_cp05

0x5ebe,	// (0x0003768b) list_im_single_pane_ParamLimits

0x5ebe,	// (0x0003768b) list_im_single_pane

0x5ee5,	// (0x000376b2) list_single_im_pane_t1

0xd0d6,	// (0x0003e8a3) blid_accuracy_pane

0xd0d6,	// (0x0003e8a3) blid_compass_pane

0xee93,	// (0x00040660) main_location_t1

0xee93,	// (0x00040660) main_location_t2

0xee93,	// (0x00040660) main_location_t3

0x0002,

0xf56c,	// (0x00040d39) main_location_t

0xcbdc,	// (0x0003e3a9) aid_levels_location

0xce4f,	// (0x0003e61c) blid_accuracy_pane_g1

0xce4f,	// (0x0003e61c) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x00040a2e) blid_accuracy_pane_g

0xd24b,	// (0x0003ea18) wml_content_pane

0xd289,	// (0x0003ea56) wml_button_pane_ParamLimits

0xd289,	// (0x0003ea56) wml_button_pane

0x5ef4,	// (0x000376c1) wml_list_single_large_pane_ParamLimits

0x5ef4,	// (0x000376c1) wml_list_single_large_pane

0x5f1f,	// (0x000376ec) wml_list_single_medium_pane_ParamLimits

0x5f1f,	// (0x000376ec) wml_list_single_medium_pane

0x5f51,	// (0x0003771e) wml_list_single_small_pane_ParamLimits

0x5f51,	// (0x0003771e) wml_list_single_small_pane

0xd29d,	// (0x0003ea6a) wml_selection_box_pane_ParamLimits

0xd29d,	// (0x0003ea6a) wml_selection_box_pane

0xd2b0,	// (0x0003ea7d) wml_list_single_pane_t1

0xd2bf,	// (0x0003ea8c) wml_list_single_medium_pane_t1

0xd2ce,	// (0x0003ea9b) wml_list_single_large_pane_t1

0xd2dd,	// (0x0003eaaa) input_focus_pane_cp02_ParamLimits

0xd2dd,	// (0x0003eaaa) input_focus_pane_cp02

0xd2f0,	// (0x0003eabd) wml_selection_box_pane_g1

0xd2f9,	// (0x0003eac6) wml_selection_box_pane_t1_ParamLimits

0xd2f9,	// (0x0003eac6) wml_selection_box_pane_t1

0xce37,	// (0x0003e604) bg_wml_button_pane_ParamLimits

0xce37,	// (0x0003e604) bg_wml_button_pane

0xd311,	// (0x0003eade) wml_button_pane_g1

0xd319,	// (0x0003eae6) wml_button_pane_t1

0xd311,	// (0x0003eade) wml_button_bg_pane_g1

0xd329,	// (0x0003eaf6) wml_button_bg_pane_g2

0xd331,	// (0x0003eafe) wml_button_bg_pane_g3

0xd339,	// (0x0003eb06) wml_button_bg_pane_g4

0xd341,	// (0x0003eb0e) wml_button_bg_pane_g5

0xd349,	// (0x0003eb16) wml_button_bg_pane_g6

0xd351,	// (0x0003eb1e) wml_button_bg_pane_g7

0xd359,	// (0x0003eb26) wml_button_bg_pane_g8

0xd361,	// (0x0003eb2e) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x000409df) wml_button_bg_pane_g

0x5f8e,	// (0x0003775b) bg_list_pane_cp02

0xd369,	// (0x0003eb36) mce_header_pane_ParamLimits

0xd369,	// (0x0003eb36) mce_header_pane

0xd37f,	// (0x0003eb4c) mce_icon_pane

0xd37f,	// (0x0003eb4c) mce_image_pane

0xd388,	// (0x0003eb55) mce_text_pane_ParamLimits

0xd388,	// (0x0003eb55) mce_text_pane

0x5f96,	// (0x00037763) scroll_pane_cp03

0xd281,	// (0x0003ea4e) scroll_pane_cp04

0xd39b,	// (0x0003eb68) scroll_pane_cp05_ParamLimits

0xd39b,	// (0x0003eb68) scroll_pane_cp05

0x5f9e,	// (0x0003776b) mce_header_field_pane_ParamLimits

0x5f9e,	// (0x0003776b) mce_header_field_pane

0x5fbe,	// (0x0003778b) mce_header_field_pane_2_ParamLimits

0x5fbe,	// (0x0003778b) mce_header_field_pane_2

0x5fd4,	// (0x000377a1) mce_header_field_pane_3

0x5fdc,	// (0x000377a9) list_single_mce_message_pane_ParamLimits

0x5fdc,	// (0x000377a9) list_single_mce_message_pane

0x5fed,	// (0x000377ba) list_single_mce_smart_pane_ParamLimits

0x5fed,	// (0x000377ba) list_single_mce_smart_pane

0xd3a7,	// (0x0003eb74) input_focus_pane_cp03

0xd3b0,	// (0x0003eb7d) list_header_data_pane

0x6009,	// (0x000377d6) mce_header_field_pane_t1

0x6017,	// (0x000377e4) list_single_mce_header_pane_ParamLimits

0x6017,	// (0x000377e4) list_single_mce_header_pane

0xd3b8,	// (0x0003eb85) list_single_mce_header_pane_t1

0xd3c7,	// (0x0003eb94) list_single_mce_message_pane_g1

0xd3cf,	// (0x0003eb9c) list_single_mce_message_pane_t1

0x604f,	// (0x0003781c) bg_cale_heading_pane_cp01_ParamLimits

0x604f,	// (0x0003781c) bg_cale_heading_pane_cp01

0xd3dd,	// (0x0003ebaa) bg_cale_pane_cp02_ParamLimits

0xd3dd,	// (0x0003ebaa) bg_cale_pane_cp02

0x609d,	// (0x0003786a) cale_month_corner_pane

0x60bc,	// (0x00037889) cale_month_day_heading_pane_ParamLimits

0x60bc,	// (0x00037889) cale_month_day_heading_pane

0x6122,	// (0x000378ef) cale_month_pane_g1_ParamLimits

0x6122,	// (0x000378ef) cale_month_pane_g1

0x6165,	// (0x00037932) cale_month_pane_g2_ParamLimits

0x6165,	// (0x00037932) cale_month_pane_g2

0x619f,	// (0x0003796c) cale_month_pane_g3_ParamLimits

0x619f,	// (0x0003796c) cale_month_pane_g3

0x61ef,	// (0x000379bc) cale_month_pane_g4_ParamLimits

0x61ef,	// (0x000379bc) cale_month_pane_g4

0x623f,	// (0x00037a0c) cale_month_pane_g5_ParamLimits

0x623f,	// (0x00037a0c) cale_month_pane_g5

0x628f,	// (0x00037a5c) cale_month_pane_g6_ParamLimits

0x628f,	// (0x00037a5c) cale_month_pane_g6

0x62df,	// (0x00037aac) cale_month_pane_g7_ParamLimits

0x62df,	// (0x00037aac) cale_month_pane_g7

0x6347,	// (0x00037b14) cale_month_pane_g8_ParamLimits

0x6347,	// (0x00037b14) cale_month_pane_g8

0x63af,	// (0x00037b7c) cale_month_pane_g9_ParamLimits

0x63af,	// (0x00037b7c) cale_month_pane_g9

0x640d,	// (0x00037bda) cale_month_pane_g10_ParamLimits

0x640d,	// (0x00037bda) cale_month_pane_g10

0x646b,	// (0x00037c38) cale_month_pane_g11_ParamLimits

0x646b,	// (0x00037c38) cale_month_pane_g11

0x64bf,	// (0x00037c8c) cale_month_pane_g12_ParamLimits

0x64bf,	// (0x00037c8c) cale_month_pane_g12

0x6515,	// (0x00037ce2) cale_month_pane_g13_ParamLimits

0x6515,	// (0x00037ce2) cale_month_pane_g13

0x000c,

0xf225,	// (0x000409f2) cale_month_pane_g_ParamLimits

0xf225,	// (0x000409f2) cale_month_pane_g

0x656b,	// (0x00037d38) cale_month_week_pane

0x658f,	// (0x00037d5c) grid_cale_month_pane_ParamLimits

0x658f,	// (0x00037d5c) grid_cale_month_pane

0x65ec,	// (0x00037db9) cale_month_day_heading_pane_t1

0x6672,	// (0x00037e3f) cale_month_day_heading_pane_t2

0x66eb,	// (0x00037eb8) cale_month_day_heading_pane_t3

0x6764,	// (0x00037f31) cale_month_day_heading_pane_t4

0x67dd,	// (0x00037faa) cale_month_day_heading_pane_t5

0x6856,	// (0x00038023) cale_month_day_heading_pane_t6

0x68cf,	// (0x0003809c) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00040a0d) cale_month_day_heading_pane_t

0xd084,	// (0x0003e851) bg_cale_side_pane_cp01

0x6960,	// (0x0003812d) cale_month_week_pane_t1

0x6979,	// (0x00038146) cale_month_week_pane_t2

0x6992,	// (0x0003815f) cale_month_week_pane_t3

0x69ab,	// (0x00038178) cale_month_week_pane_t4

0x69c6,	// (0x00038193) cale_month_week_pane_t5

0x69e7,	// (0x000381b4) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x00040a1c) cale_month_week_pane_t

0x6a08,	// (0x000381d5) cell_cale_month_pane_ParamLimits

0x6a08,	// (0x000381d5) cell_cale_month_pane

0x6b2e,	// (0x000382fb) cell_cale_month_pane_g1

0x6b3a,	// (0x00038307) cell_cale_month_pane_t1_ParamLimits

0x6b3a,	// (0x00038307) cell_cale_month_pane_t1

0xd092,	// (0x0003e85f) grid_highlight_pane_cp08

0xce4f,	// (0x0003e61c) main_smil_g1

0x6b66,	// (0x00038333) smil_status_pane

0xd41c,	// (0x0003ebe9) smil_text_pane

0xed6b,	// (0x00040538) bg_popup_call3_rect_pane_g8

0xed73,	// (0x00040540) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00040cba) bg_popup_call3_rect_pane_g

0xef5c,	// (0x00040729) smil_status_volume_pane_g1

0xd426,	// (0x0003ebf3) smil_status_pane_t1

0x7c5d,	// (0x0003942a) volume_smil_pane

0xd43d,	// (0x0003ec0a) list_smil_text_pane

0x6b79,	// (0x00038346) scroll_pane_cp011

0x6b84,	// (0x00038351) smil_text_list_pane_t1_ParamLimits

0x6b84,	// (0x00038351) smil_text_list_pane_t1

0x6c11,	// (0x000383de) aid_volume_smil_ParamLimits

0x6c11,	// (0x000383de) aid_volume_smil

0xce4f,	// (0x0003e61c) smil_volume_pane_g1

0xce4f,	// (0x0003e61c) smil_volume_pane_g2

0x0001,

0xf261,	// (0x00040a2e) smil_volume_pane_g

0x541c,	// (0x00036be9) listscroll_cale_day_pane

0xd447,	// (0x0003ec14) bg_cale_pane

0xd45f,	// (0x0003ec2c) list_cale_pane

0xd482,	// (0x0003ec4f) scroll_pane_cp09

0xd493,	// (0x0003ec60) cale_bg_pane_g1

0xd49b,	// (0x0003ec68) cale_bg_pane_g2

0xd4a3,	// (0x0003ec70) cale_bg_pane_g3

0xd4ab,	// (0x0003ec78) cale_bg_pane_g4

0xd4b3,	// (0x0003ec80) cale_bg_pane_g5

0xd4bb,	// (0x0003ec88) cale_bg_pane_g6

0xd4c3,	// (0x0003ec90) cale_bg_pane_g7

0xd4cb,	// (0x0003ec98) cale_bg_pane_g8

0xd4d3,	// (0x0003eca0) cale_bg_pane_g9

0x0008,

0xf266,	// (0x00040a33) cale_bg_pane_g

0x6c3b,	// (0x00038408) list_cale_time_pane_ParamLimits

0x6c3b,	// (0x00038408) list_cale_time_pane

0xd4db,	// (0x0003eca8) list_cale_time_pane_g1_ParamLimits

0xd4db,	// (0x0003eca8) list_cale_time_pane_g1

0xd4e7,	// (0x0003ecb4) list_cale_time_pane_g2_ParamLimits

0xd4e7,	// (0x0003ecb4) list_cale_time_pane_g2

0x6c63,	// (0x00038430) list_cale_time_pane_g3_ParamLimits

0x6c63,	// (0x00038430) list_cale_time_pane_g3

0x6c71,	// (0x0003843e) list_cale_time_pane_g4_ParamLimits

0x6c71,	// (0x0003843e) list_cale_time_pane_g4

0x6c7f,	// (0x0003844c) list_cale_time_pane_g5_ParamLimits

0x6c7f,	// (0x0003844c) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00040a46) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00040a46) list_cale_time_pane_g

0xd501,	// (0x0003ecce) list_cale_time_pane_t1_ParamLimits

0xd501,	// (0x0003ecce) list_cale_time_pane_t1

0xd529,	// (0x0003ecf6) list_cale_time_pane_t2_ParamLimits

0xd529,	// (0x0003ecf6) list_cale_time_pane_t2

0x6f3a,	// (0x00038707) aid_blid_cardinal_pane

0x6f7c,	// (0x00038749) compass_pane_t4

0xd551,	// (0x0003ed1e) list_cale_time_pane_t4_ParamLimits

0xd551,	// (0x0003ed1e) list_cale_time_pane_t4

0x6f8a,	// (0x00038757) compass_pane_t5

0x6f9a,	// (0x00038767) compass_pane_t6

0x6fa8,	// (0x00038775) compass_pane_t7

0xd9db,	// (0x0003f1a8) navi_pane_cc_t1

0xdbb8,	// (0x0003f385) aid_phob_thumbnail_center_pane

0x735b,	// (0x00038b28) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00040a53) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00040a53) list_cale_time_pane_t

0xc833,	// (0x0003e000) bg_popup_window_pane_cp02_ParamLimits

0xc833,	// (0x0003e000) bg_popup_window_pane_cp02

0xd579,	// (0x0003ed46) heading_pane_cp01_ParamLimits

0xd579,	// (0x0003ed46) heading_pane_cp01

0xd585,	// (0x0003ed52) loc_req_pane_ParamLimits

0xd585,	// (0x0003ed52) loc_req_pane

0xd595,	// (0x0003ed62) loc_type_pane_ParamLimits

0xd595,	// (0x0003ed62) loc_type_pane

0xd5a7,	// (0x0003ed74) loc_type_pane_t1_ParamLimits

0xd5a7,	// (0x0003ed74) loc_type_pane_t1

0xd5b9,	// (0x0003ed86) loc_type_pane_t2_ParamLimits

0xd5b9,	// (0x0003ed86) loc_type_pane_t2

0xd5cb,	// (0x0003ed98) loc_type_pane_t3_ParamLimits

0xd5cb,	// (0x0003ed98) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00040a5a) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00040a5a) loc_type_pane_t

0xd5dd,	// (0x0003edaa) list_loc_req_pane

0xd5e7,	// (0x0003edb4) scroll_pane_cp012

0x3f76,	// (0x00035743) list_single_loc_request_popup_menu_pane_ParamLimits

0x3f76,	// (0x00035743) list_single_loc_request_popup_menu_pane

0xd5f2,	// (0x0003edbf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd5f2,	// (0x0003edbf) list_single_loc_request_popup_menu_pane_g1

0xd5fe,	// (0x0003edcb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd5fe,	// (0x0003edcb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00040a61) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00040a61) list_single_loc_request_popup_menu_pane_g

0xd60a,	// (0x0003edd7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd60a,	// (0x0003edd7) list_single_loc_request_popup_menu_pane_t1

0x6c8d,	// (0x0003845a) bg_popup_window_pane_cp03_ParamLimits

0x6c8d,	// (0x0003845a) bg_popup_window_pane_cp03

0x6c9b,	// (0x00038468) heading_loc_req_pane_ParamLimits

0x6c9b,	// (0x00038468) heading_loc_req_pane

0x6ca7,	// (0x00038474) popup_dyc_status_message_window_g1_ParamLimits

0x6ca7,	// (0x00038474) popup_dyc_status_message_window_g1

0x6cb3,	// (0x00038480) popup_dyc_status_message_window_t1_ParamLimits

0x6cb3,	// (0x00038480) popup_dyc_status_message_window_t1

0x6cc5,	// (0x00038492) popup_dyc_status_message_window_t2_ParamLimits

0x6cc5,	// (0x00038492) popup_dyc_status_message_window_t2

0x6cd7,	// (0x000384a4) popup_dyc_status_message_window_t3_ParamLimits

0x6cd7,	// (0x000384a4) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00040a66) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00040a66) popup_dyc_status_message_window_t

0xcbdc,	// (0x0003e3a9) bg_heading_pane_cp01

0xd620,	// (0x0003eded) heading_loc_req_pane_g1

0xd628,	// (0x0003edf5) heading_loc_req_pane_g2

0xd630,	// (0x0003edfd) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00040a6d) heading_loc_req_pane_g

0xd638,	// (0x0003ee05) heading_loc_req_pane_t1

0xd657,	// (0x0003ee24) bg_popup_sub_pane_cp01_ParamLimits

0xd657,	// (0x0003ee24) bg_popup_sub_pane_cp01

0xd665,	// (0x0003ee32) popup_cale_events_window_g1_ParamLimits

0xd665,	// (0x0003ee32) popup_cale_events_window_g1

0xd685,	// (0x0003ee52) popup_cale_events_window_g2_ParamLimits

0xd685,	// (0x0003ee52) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00040a8f) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00040a8f) popup_cale_events_window_g

0xd6a5,	// (0x0003ee72) popup_cale_events_window_t1_ParamLimits

0xd6a5,	// (0x0003ee72) popup_cale_events_window_t1

0xd6b7,	// (0x0003ee84) popup_cale_events_window_t2_ParamLimits

0xd6b7,	// (0x0003ee84) popup_cale_events_window_t2

0xd6f5,	// (0x0003eec2) popup_cale_events_window_t3_ParamLimits

0xd6f5,	// (0x0003eec2) popup_cale_events_window_t3

0xd72f,	// (0x0003eefc) popup_cale_events_window_t4_ParamLimits

0xd72f,	// (0x0003eefc) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00040a94) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00040a94) popup_cale_events_window_t

0x6d01,	// (0x000384ce) call_type_pane

0xd765,	// (0x0003ef32) popup_call_status_window_g1

0x6d0d,	// (0x000384da) popup_call_status_window_g2

0x6d19,	// (0x000384e6) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00040a9d) popup_call_status_window_g

0xd773,	// (0x0003ef40) call_type_pane_g1

0xd77c,	// (0x0003ef49) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00040aa4) call_type_pane_g

0xcbdc,	// (0x0003e3a9) bg_popup_sub_pane_cp02

0xd785,	// (0x0003ef52) listscroll_popup_wml_pane

0xd78d,	// (0x0003ef5a) list_wml_pane

0xd797,	// (0x0003ef64) scroll_pane_cp013

0xd7a2,	// (0x0003ef6f) list_single_graphic_popup_wml_pane_ParamLimits

0xd7a2,	// (0x0003ef6f) list_single_graphic_popup_wml_pane

0xce4f,	// (0x0003e61c) list_single_graphic_popup_wml_pane_g1

0xd7b6,	// (0x0003ef83) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00040aa9) list_single_graphic_popup_wml_pane_g

0xd7be,	// (0x0003ef8b) list_single_graphic_popup_wml_pane_t1

0xd7d4,	// (0x0003efa1) aid_call_pane

0xce2f,	// (0x0003e5fc) popup_clock_analogue_window_g1

0xce2f,	// (0x0003e5fc) popup_clock_analogue_window_g2

0x6d25,	// (0x000384f2) popup_clock_analogue_window_g3

0x6d25,	// (0x000384f2) popup_clock_analogue_window_g4

0xce4f,	// (0x0003e61c) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00040aae) popup_clock_analogue_window_g

0x6d2d,	// (0x000384fa) popup_clock_analogue_window_t1

0x6d3b,	// (0x00038508) clock_digital_number_pane_ParamLimits

0x6d3b,	// (0x00038508) clock_digital_number_pane

0x6d47,	// (0x00038514) clock_digital_number_pane_cp02_ParamLimits

0x6d47,	// (0x00038514) clock_digital_number_pane_cp02

0x6d53,	// (0x00038520) clock_digital_number_pane_cp03_ParamLimits

0x6d53,	// (0x00038520) clock_digital_number_pane_cp03

0x6d5f,	// (0x0003852c) clock_digital_number_pane_cp04_ParamLimits

0x6d5f,	// (0x0003852c) clock_digital_number_pane_cp04

0x6d6b,	// (0x00038538) clock_digital_separator_pane_ParamLimits

0x6d6b,	// (0x00038538) clock_digital_separator_pane

0x6d77,	// (0x00038544) popup_clock_digital_window_t1

0xce4f,	// (0x0003e61c) clock_digital_number_pane_g1

0xce4f,	// (0x0003e61c) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x00040a2e) clock_digital_number_pane_g

0xce4f,	// (0x0003e61c) clock_digital_separator_pane_g1

0xce4f,	// (0x0003e61c) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x00040a2e) clock_digital_separator_pane_g

0xcbdc,	// (0x0003e3a9) bg_popup_window_pane_cp04

0xd7dc,	// (0x0003efa9) heading_pane_cp03

0xd0d6,	// (0x0003e8a3) listscroll_popup_gms_pane

0xcbdc,	// (0x0003e3a9) grid_large_graphic_popup_pane

0xd7e5,	// (0x0003efb2) listscroll_popup_gms_pane_g1

0xd7ee,	// (0x0003efbb) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00040ab9) listscroll_popup_gms_pane_g

0xd7f7,	// (0x0003efc4) scroll_pane_cp014

0xc7bb,	// (0x0003df88) cell_large_graphic_popup_pane_ParamLimits

0xc7bb,	// (0x0003df88) cell_large_graphic_popup_pane

0xceb2,	// (0x0003e67f) cell_large_graphic_popup_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) cell_large_graphic_popup_pane_g1

0xd800,	// (0x0003efcd) cell_large_graphic_popup_pane_g2_ParamLimits

0xd800,	// (0x0003efcd) cell_large_graphic_popup_pane_g2

0xd80e,	// (0x0003efdb) cell_large_graphic_popup_pane_g3_ParamLimits

0xd80e,	// (0x0003efdb) cell_large_graphic_popup_pane_g3

0xd81c,	// (0x0003efe9) cell_large_graphic_popup_pane_g4_ParamLimits

0xd81c,	// (0x0003efe9) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00040abe) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00040abe) cell_large_graphic_popup_pane_g

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp010

0xce4f,	// (0x0003e61c) bg_popup_call_pane_g1

0xd82d,	// (0x0003effa) list_single_graphic_popup_conf_pane_ParamLimits

0xd82d,	// (0x0003effa) list_single_graphic_popup_conf_pane

0xd840,	// (0x0003f00d) list_highlight_pane_cp01

0xd849,	// (0x0003f016) list_single_graphic_popup_conf_pane_g1

0xd851,	// (0x0003f01e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00040ac7) list_single_graphic_popup_conf_pane_g

0xd859,	// (0x0003f026) list_single_graphic_popup_conf_pane_t1

0xd867,	// (0x0003f034) linegrid_cams_pane_g1

0x6d94,	// (0x00038561) linegrid_cams_pane_g2

0xd015,	// (0x0003e7e2) linegrid_cams_pane_g3

0xd870,	// (0x0003f03d) linegrid_cams_pane_g4

0x6d9d,	// (0x0003856a) linegrid_cams_pane_g5

0x6da6,	// (0x00038573) linegrid_cams_pane_g6

0xd0c5,	// (0x0003e892) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00040acc) linegrid_cams_pane_g

0xd879,	// (0x0003f046) popup_clock_analogue_window

0xd879,	// (0x0003f046) popup_clock_digital_window

0xcbdc,	// (0x0003e3a9) popup_phob_thumbnail_window

0xce4f,	// (0x0003e61c) call_video_uplink_pane_g1

0xd882,	// (0x0003f04f) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00040adb) call_video_uplink_pane_g

0xd88a,	// (0x0003f057) video_uplink_pane

0xd892,	// (0x0003f05f) mce_image_pane_g1

0x6daf,	// (0x0003857c) mce_image_pane_g2

0x6db7,	// (0x00038584) mce_image_pane_g3

0x6dbf,	// (0x0003858c) mce_image_pane_g4

0x6dc7,	// (0x00038594) mce_image_pane_g5

0x0004,

0xf313,	// (0x00040ae0) mce_image_pane_g

0xd89c,	// (0x0003f069) control_top_pane_stacon_cp01_ParamLimits

0xd89c,	// (0x0003f069) control_top_pane_stacon_cp01

0xd8b0,	// (0x0003f07d) uni_indicator_pane_stacon_cp01_ParamLimits

0xd8b0,	// (0x0003f07d) uni_indicator_pane_stacon_cp01

0xd8c1,	// (0x0003f08e) bg_popup_sub_pane_cp03

0x6dcf,	// (0x0003859c) chi_dic_find_pane

0x6dd7,	// (0x000385a4) listscroll_chi_dic_pane

0x6de0,	// (0x000385ad) main_pane_chidic_g1

0x6df3,	// (0x000385c0) chi_dic_find_pane_t1

0xd8cb,	// (0x0003f098) find_chidic_pane

0xd8d4,	// (0x0003f0a1) chi_dic_list_pane_ParamLimits

0xd8d4,	// (0x0003f0a1) chi_dic_list_pane

0xd8e5,	// (0x0003f0b2) scroll_pane_cp020

0x6e01,	// (0x000385ce) find_chidic_pane_t1

0xcbdc,	// (0x0003e3a9) input_focus_pane_cp06

0x6e10,	// (0x000385dd) list_chi_dic_pane_ParamLimits

0x6e10,	// (0x000385dd) list_chi_dic_pane

0x6e2d,	// (0x000385fa) list_chi_dic_pane_t1_ParamLimits

0x6e2d,	// (0x000385fa) list_chi_dic_pane_t1

0xcbdc,	// (0x0003e3a9) list_highlight_pane_cp020

0xd8ed,	// (0x0003f0ba) bg_cale_heading_pane_g1

0x6e40,	// (0x0003860d) bg_cale_heading_pane_g2

0x6e48,	// (0x00038615) bg_cale_heading_pane_g3

0x6e50,	// (0x0003861d) bg_cale_heading_pane_g4

0x6e5a,	// (0x00038627) bg_cale_heading_pane_g5

0x6e64,	// (0x00038631) bg_cale_heading_pane_g6

0x6e6c,	// (0x00038639) bg_cale_heading_pane_g7

0x6e74,	// (0x00038641) bg_cale_heading_pane_g8

0x6e7e,	// (0x0003864b) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00040aeb) bg_cale_heading_pane_g

0xd8ed,	// (0x0003f0ba) bg_cale_side_pane_g1

0x6e88,	// (0x00038655) bg_cale_side_pane_g2

0x6e92,	// (0x0003865f) bg_cale_side_pane_g3

0x6e9c,	// (0x00038669) bg_cale_side_pane_g4

0x6ea6,	// (0x00038673) bg_cale_side_pane_g5

0x6eb0,	// (0x0003867d) bg_cale_side_pane_g6

0x6eba,	// (0x00038687) bg_cale_side_pane_g7

0x6ec4,	// (0x00038691) bg_cale_side_pane_g8

0x6ecc,	// (0x00038699) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00040afe) bg_cale_side_pane_g

0x6ed4,	// (0x000386a1) popup_call_status_window_ParamLimits

0x6ed4,	// (0x000386a1) popup_call_status_window

0xd8f5,	// (0x0003f0c2) stacon_top_pane

0xd8fd,	// (0x0003f0ca) status_pane_ParamLimits

0xd8fd,	// (0x0003f0ca) status_pane

0xd912,	// (0x0003f0df) status_small_pane

0xd91a,	// (0x0003f0e7) control_pane

0xcbdc,	// (0x0003e3a9) stacon_bottom_pane

0xd922,	// (0x0003f0ef) list_single_mce_smart_pane_t1_ParamLimits

0xd922,	// (0x0003f0ef) list_single_mce_smart_pane_t1

0xd935,	// (0x0003f102) list_single_mce_smart_pane_t2_ParamLimits

0xd935,	// (0x0003f102) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00040b11) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00040b11) list_single_mce_smart_pane_t

0x6ee0,	// (0x000386ad) compass_pane

0x6eec,	// (0x000386b9) main_location2_pane_t1

0x6f00,	// (0x000386cd) main_location2_pane_t2

0x6f14,	// (0x000386e1) main_location2_pane_t3

0x0003,

0xf349,	// (0x00040b16) main_location2_pane_t

0xd954,	// (0x0003f121) compass_pane_g1_ParamLimits

0xd954,	// (0x0003f121) compass_pane_g1

0x6f5e,	// (0x0003872b) compass_pane_t1

0x6f6d,	// (0x0003873a) compass_pane_t2

0x0005,

0xf352,	// (0x00040b1f) compass_pane_t

0x6fb8,	// (0x00038785) text_secondary_cp61

0xd9d2,	// (0x0003f19f) navi_pane_cams_g5

0xda4e,	// (0x0003f21b) navi_pane_im_t1

0xda5c,	// (0x0003f229) navi_pane_mp_g1_ParamLimits

0xda5c,	// (0x0003f229) navi_pane_mp_g1

0xda70,	// (0x0003f23d) navi_pane_mp_g2_ParamLimits

0xda70,	// (0x0003f23d) navi_pane_mp_g2

0xda7c,	// (0x0003f249) navi_pane_mp_g3_ParamLimits

0xda7c,	// (0x0003f249) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00040b33) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00040b33) navi_pane_mp_g

0xda88,	// (0x0003f255) navi_pane_mp_t1

0xda96,	// (0x0003f263) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00040b3a) navi_pane_mp_t

0xdb01,	// (0x0003f2ce) navi_pane_vt_g1

0xda88,	// (0x0003f255) navi_pane_vt_t1

0xdb09,	// (0x0003f2d6) navi_slider_pane

0xd0d6,	// (0x0003e8a3) zooming_pane

0xdb19,	// (0x0003f2e6) navi_slider_pane_g1

0x6ff3,	// (0x000387c0) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00040b41) navi_slider_pane_g

0xdb3d,	// (0x0003f30a) aid_levels_zoom

0xdb45,	// (0x0003f312) zooming_pane_g1

0xdb4d,	// (0x0003f31a) zooming_pane_g2

0xdb4d,	// (0x0003f31a) zooming_pane_g3

0x0002,

0xf383,	// (0x00040b50) zooming_pane_g

0xdb55,	// (0x0003f322) level_10_zoom

0xdb5e,	// (0x0003f32b) level_11_zoom

0xdb67,	// (0x0003f334) level_1_zoom

0xdb70,	// (0x0003f33d) level_2_zoom

0xdb79,	// (0x0003f346) level_3_zoom

0xdb82,	// (0x0003f34f) level_4_zoom

0xdb8b,	// (0x0003f358) level_5_zoom

0xdb94,	// (0x0003f361) level_6_zoom

0xdb9d,	// (0x0003f36a) level_7_zoom

0xdba6,	// (0x0003f373) level_8_zoom

0xdbaf,	// (0x0003f37c) level_9_zoom

0xdbc0,	// (0x0003f38d) popup_phob_thumbnail_window_g1

0xdbc8,	// (0x0003f395) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00040b57) popup_phob_thumbnail_window_g

0x791a,	// (0x000390e7) level_1_location

0x7922,	// (0x000390ef) level_2_location

0x792a,	// (0x000390f7) level_3_location

0x7934,	// (0x00039101) level_4_location

0xd0d6,	// (0x0003e8a3) level_5_location

0x7005,	// (0x000387d2) mce_icon_pane_g1

0x700d,	// (0x000387da) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00040b5c) mce_icon_pane_g

0x7015,	// (0x000387e2) main_mup_pane_g1_ParamLimits

0x7015,	// (0x000387e2) main_mup_pane_g1

0xcece,	// (0x0003e69b) main_mup_pane_g2_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g2

0xcece,	// (0x0003e69b) main_mup_pane_g3_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g3

0xcece,	// (0x0003e69b) main_mup_pane_g4_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g4

0xcece,	// (0x0003e69b) main_mup_pane_g5_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g5

0xcece,	// (0x0003e69b) main_mup_pane_g6_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g6

0xcece,	// (0x0003e69b) main_mup_pane_g7_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g7

0xcece,	// (0x0003e69b) main_mup_pane_g8_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g8

0xcece,	// (0x0003e69b) main_mup_pane_g9_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g9

0xcece,	// (0x0003e69b) main_mup_pane_g10_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g10

0xcece,	// (0x0003e69b) main_mup_pane_g11_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g11

0xcec0,	// (0x0003e68d) main_mup_pane_g12_ParamLimits

0xcec0,	// (0x0003e68d) main_mup_pane_g12

0xcece,	// (0x0003e69b) main_mup_pane_g13_ParamLimits

0xcece,	// (0x0003e69b) main_mup_pane_g13

0x000c,

0xf394,	// (0x00040b61) main_mup_pane_g_ParamLimits

0xf394,	// (0x00040b61) main_mup_pane_g

0xcedc,	// (0x0003e6a9) main_mup_pane_t1_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup_pane_t1

0xcedc,	// (0x0003e6a9) main_mup_pane_t2_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup_pane_t2

0xcedc,	// (0x0003e6a9) main_mup_pane_t3_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup_pane_t3

0xd0de,	// (0x0003e8ab) main_mup_pane_t4_ParamLimits

0xd0de,	// (0x0003e8ab) main_mup_pane_t4

0xd0de,	// (0x0003e8ab) main_mup_pane_t5_ParamLimits

0xd0de,	// (0x0003e8ab) main_mup_pane_t5

0xd126,	// (0x0003e8f3) main_mup_pane_t6_ParamLimits

0xd126,	// (0x0003e8f3) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00040b7c) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00040b7c) main_mup_pane_t

0xce59,	// (0x0003e626) mup_progress_pane_ParamLimits

0xce59,	// (0x0003e626) mup_progress_pane

0x00af,	// (0x0003187c) mup_visualizer_pane_ParamLimits

0x00af,	// (0x0003187c) mup_visualizer_pane

0x00af,	// (0x0003187c) mup_volume_pane_ParamLimits

0x00af,	// (0x0003187c) mup_volume_pane

0xcec0,	// (0x0003e68d) mup_visualizer_pane_g1_ParamLimits

0xcec0,	// (0x0003e68d) mup_visualizer_pane_g1

0xdbd0,	// (0x0003f39d) mup_visualizer_pane_g2_ParamLimits

0xdbd0,	// (0x0003f39d) mup_visualizer_pane_g2

0xceb2,	// (0x0003e67f) mup_visualizer_pane_g3_ParamLimits

0xceb2,	// (0x0003e67f) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00040b89) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00040b89) mup_visualizer_pane_g

0xd10c,	// (0x0003e8d9) mup_volume_pane_g1

0xd10c,	// (0x0003e8d9) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) mup_volume_pane_g

0xd10c,	// (0x0003e8d9) mup_progress_pane_g1

0xd10c,	// (0x0003e8d9) mup_progress_pane_g2

0xd10c,	// (0x0003e8d9) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00040b95) mup_progress_pane_g

0xcbdc,	// (0x0003e3a9) bg_popup_window_pane_cp05

0xdbde,	// (0x0003f3ab) heading_pane_cp02_ParamLimits

0xdbde,	// (0x0003f3ab) heading_pane_cp02

0xdbf8,	// (0x0003f3c5) list_popup_blid_pane

0xdc00,	// (0x0003f3cd) list_blid_sat_info_pane_ParamLimits

0xdc00,	// (0x0003f3cd) list_blid_sat_info_pane

0xdc13,	// (0x0003f3e0) list_blid_sat_info_pane_g1

0xdc1b,	// (0x0003f3e8) list_blid_sat_info_pane_t1

0x7110,	// (0x000388dd) mup_equalizer_pane_ParamLimits

0x7110,	// (0x000388dd) mup_equalizer_pane

0x7131,	// (0x000388fe) mup_equalizer_pane_cp1_ParamLimits

0x7131,	// (0x000388fe) mup_equalizer_pane_cp1

0x7152,	// (0x0003891f) mup_equalizer_pane_cp2_ParamLimits

0x7152,	// (0x0003891f) mup_equalizer_pane_cp2

0x7173,	// (0x00038940) mup_equalizer_pane_cp3_ParamLimits

0x7173,	// (0x00038940) mup_equalizer_pane_cp3

0x7194,	// (0x00038961) mup_equalizer_pane_cp4_ParamLimits

0x7194,	// (0x00038961) mup_equalizer_pane_cp4

0x71b5,	// (0x00038982) mup_equalizer_pane_cp5

0x71cb,	// (0x00038998) mup_equalizer_pane_cp6

0x71e3,	// (0x000389b0) mup_equalizer_pane_cp7

0xedeb,	// (0x000405b8) bg_popup_call_poc_act_pane_g9

0xedf3,	// (0x000405c0) bg_popup_call_poc_act_pane_g10

0xedfb,	// (0x000405c8) bg_popup_call_poc_act_pane_g11

0x000a,

0xce37,	// (0x0003e604) mup_scale_pane

0xce4f,	// (0x0003e61c) mup_scale_pane_g1

0xdc29,	// (0x0003f3f6) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00040bb1) mup_scale_pane_g

0xdc4d,	// (0x0003f41a) msg_data_pane

0xdc55,	// (0x0003f422) scroll_pane_cp017

0x3f8f,	// (0x0003575c) bg_list_pane_cp04_ParamLimits

0x3f8f,	// (0x0003575c) bg_list_pane_cp04

0xdc5d,	// (0x0003f42a) msg_data_pane_g1

0x720d,	// (0x000389da) msg_data_pane_g2

0x7215,	// (0x000389e2) msg_data_pane_g3

0x721d,	// (0x000389ea) msg_data_pane_g4

0x7225,	// (0x000389f2) msg_data_pane_g5

0x722d,	// (0x000389fa) msg_data_pane_g6

0x7235,	// (0x00038a02) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00040bc0) msg_data_pane_g

0x3faf,	// (0x0003577c) msg_text_pane_ParamLimits

0x3faf,	// (0x0003577c) msg_text_pane

0x723d,	// (0x00038a0a) qrid_highlight_pane_cp011_ParamLimits

0x723d,	// (0x00038a0a) qrid_highlight_pane_cp011

0xcbdc,	// (0x0003e3a9) msg_body_pane

0xcbdc,	// (0x0003e3a9) msg_header_pane

0xdc6e,	// (0x0003f43b) input_focus_pane_cp07

0x4013,	// (0x000357e0) msg_header_pane_t1_ParamLimits

0x4013,	// (0x000357e0) msg_header_pane_t1

0x4029,	// (0x000357f6) msg_header_pane_t2_ParamLimits

0x4029,	// (0x000357f6) msg_header_pane_t2

0x0001,

0xf407,	// (0x00040bd4) msg_header_pane_t_ParamLimits

0xf407,	// (0x00040bd4) msg_header_pane_t

0xdc83,	// (0x0003f450) msg_body_pane_g1

0x4040,	// (0x0003580d) msg_body_pane_t1_ParamLimits

0x4040,	// (0x0003580d) msg_body_pane_t1

0x4071,	// (0x0003583e) msg_body_pane_t2_ParamLimits

0x4071,	// (0x0003583e) msg_body_pane_t2

0x4083,	// (0x00035850) msg_body_pane_t3_ParamLimits

0x4083,	// (0x00035850) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00040bd9) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00040bd9) msg_body_pane_t

0x72ab,	// (0x00038a78) main_viewer_pane_g1_ParamLimits

0x72ab,	// (0x00038a78) main_viewer_pane_g1

0x72b7,	// (0x00038a84) main_viewer_pane_g2_ParamLimits

0x72b7,	// (0x00038a84) main_viewer_pane_g2

0x72c3,	// (0x00038a90) main_viewer_pane_g3_ParamLimits

0x72c3,	// (0x00038a90) main_viewer_pane_g3

0x72d4,	// (0x00038aa1) main_viewer_pane_g4_ParamLimits

0x72d4,	// (0x00038aa1) main_viewer_pane_g4

0x72e5,	// (0x00038ab2) main_viewer_pane_g5_ParamLimits

0x72e5,	// (0x00038ab2) main_viewer_pane_g5

0x72e5,	// (0x00038ab2) main_viewer_pane_g7_ParamLimits

0x72e5,	// (0x00038ab2) main_viewer_pane_g7

0x72f7,	// (0x00038ac4) main_viewer_pane_g8_ParamLimits

0x72f7,	// (0x00038ac4) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00040be9) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00040be9) main_viewer_pane_g

0xdc8b,	// (0x0003f458) viewer_content_pane_ParamLimits

0xdc8b,	// (0x0003f458) viewer_content_pane

0x732f,	// (0x00038afc) main_postcard_pane_g1_ParamLimits

0x732f,	// (0x00038afc) main_postcard_pane_g1

0x733d,	// (0x00038b0a) main_postcard_pane_g2_ParamLimits

0x733d,	// (0x00038b0a) main_postcard_pane_g2

0x734b,	// (0x00038b18) main_postcard_pane_g3_ParamLimits

0x734b,	// (0x00038b18) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00040bfa) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00040bfa) main_postcard_pane_g

0x735b,	// (0x00038b28) main_postcard_pane_g4

0xef6f,	// (0x0004073c) smil_status_volume_pane_g2

0x7387,	// (0x00038b54) postcard_pane_ParamLimits

0x7387,	// (0x00038b54) postcard_pane

0xd765,	// (0x0003ef32) postcard_pane_g1_ParamLimits

0xd765,	// (0x0003ef32) postcard_pane_g1

0x73b9,	// (0x00038b86) postcard_pane_g2_ParamLimits

0x73b9,	// (0x00038b86) postcard_pane_g2

0x73c5,	// (0x00038b92) postcard_pane_g3_ParamLimits

0x73c5,	// (0x00038b92) postcard_pane_g3

0xdc99,	// (0x0003f466) postcard_pane_g4_ParamLimits

0xdc99,	// (0x0003f466) postcard_pane_g4

0x73d1,	// (0x00038b9e) postcard_pane_g5_ParamLimits

0x73d1,	// (0x00038b9e) postcard_pane_g5

0x73dd,	// (0x00038baa) postcard_pane_g6_ParamLimits

0x73dd,	// (0x00038baa) postcard_pane_g6

0xdca7,	// (0x0003f474) postcard_pane_g7_ParamLimits

0xdca7,	// (0x0003f474) postcard_pane_g7

0x0006,

0xf43a,	// (0x00040c07) postcard_pane_g_ParamLimits

0xf43a,	// (0x00040c07) postcard_pane_g

0x73e9,	// (0x00038bb6) main_mp2_pane_g1_ParamLimits

0x73e9,	// (0x00038bb6) main_mp2_pane_g1

0x73f5,	// (0x00038bc2) main_mp2_pane_g2_ParamLimits

0x73f5,	// (0x00038bc2) main_mp2_pane_g2

0x7401,	// (0x00038bce) main_mp2_pane_g3_ParamLimits

0x7401,	// (0x00038bce) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00040c16) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00040c16) main_mp2_pane_g

0x740d,	// (0x00038bda) main_mp2_pane_t1_ParamLimits

0x740d,	// (0x00038bda) main_mp2_pane_t1

0x7424,	// (0x00038bf1) main_mp2_pane_t2_ParamLimits

0x7424,	// (0x00038bf1) main_mp2_pane_t2

0x7436,	// (0x00038c03) main_mp2_pane_t3_ParamLimits

0x7436,	// (0x00038c03) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00040c1d) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00040c1d) main_mp2_pane_t

0xdcb5,	// (0x0003f482) pec_content_pane_ParamLimits

0xdcb5,	// (0x0003f482) pec_content_pane

0xd281,	// (0x0003ea4e) scroll_pane_cp015

0xdcc7,	// (0x0003f494) pec_attribute_pane_ParamLimits

0xdcc7,	// (0x0003f494) pec_attribute_pane

0x7448,	// (0x00038c15) pec_content_pane_g1_ParamLimits

0x7448,	// (0x00038c15) pec_content_pane_g1

0xdcd7,	// (0x0003f4a4) pec_content_pane_t1_ParamLimits

0xdcd7,	// (0x0003f4a4) pec_content_pane_t1

0xdce9,	// (0x0003f4b6) pec_content_pane_t2_ParamLimits

0xdce9,	// (0x0003f4b6) pec_content_pane_t2

0x0001,

0xf457,	// (0x00040c24) pec_content_pane_t_ParamLimits

0xf457,	// (0x00040c24) pec_content_pane_t

0x7454,	// (0x00038c21) list_single_graphic_pane_cp01_ParamLimits

0x7454,	// (0x00038c21) list_single_graphic_pane_cp01

0xce37,	// (0x0003e604) bg_popup_sub_pane_cp04

0xdcfb,	// (0x0003f4c8) popup_mup_playback_window_g1

0xdd07,	// (0x0003f4d4) popup_mup_playback_window_t1

0xdd1c,	// (0x0003f4e9) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00040c29) popup_mup_playback_window_t

0xdd53,	// (0x0003f520) main_image_pane_g1_ParamLimits

0xdd53,	// (0x0003f520) main_image_pane_g1

0xdd96,	// (0x0003f563) scroll_pane_cp018_ParamLimits

0xdd96,	// (0x0003f563) scroll_pane_cp018

0xddae,	// (0x0003f57b) scroll_pane_cp016_ParamLimits

0xddae,	// (0x0003f57b) scroll_pane_cp016

0x74ee,	// (0x00038cbb) smil2_image_pane_ParamLimits

0x74ee,	// (0x00038cbb) smil2_image_pane

0x751e,	// (0x00038ceb) smil2_root_pane_ParamLimits

0x751e,	// (0x00038ceb) smil2_root_pane

0x754a,	// (0x00038d17) smil2_text_pane_ParamLimits

0x754a,	// (0x00038d17) smil2_text_pane

0xcbdc,	// (0x0003e3a9) bg_list_pane_cp06

0xddea,	// (0x0003f5b7) grid_radio_pane

0xcbdc,	// (0x0003e3a9) bg_popup_window_pane_cp06

0xddf2,	// (0x0003f5bf) main_fmradio_pane_t1

0xee43,	// (0x00040610) heading_pane_cp04

0xde00,	// (0x0003f5cd) main_fmradio_pane_t2

0xee4b,	// (0x00040618) popup_cale_lunar_info_window_g1

0xde0e,	// (0x0003f5db) main_fmradio_pane_t3

0xee53,	// (0x00040620) popup_cale_lunar_info_window_g2

0xde1c,	// (0x0003f5e9) main_fmradio_pane_t4

0x0001,

0xde2a,	// (0x0003f5f7) main_fmradio_pane_t5

0x0004,

0xf54f,	// (0x00040d1c) popup_cale_lunar_info_window_g

0xf471,	// (0x00040c3e) main_fmradio_pane_t

0xde38,	// (0x0003f605) wait_bar_pane_cp03

0xde40,	// (0x0003f60d) cell_fmradio_pane_ParamLimits

0xde40,	// (0x0003f60d) cell_fmradio_pane

0xdca7,	// (0x0003f474) cell_fmradio_pane_g1_ParamLimits

0xdca7,	// (0x0003f474) cell_fmradio_pane_g1

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp011

0xde53,	// (0x0003f620) poc_content_pane_ParamLimits

0xde53,	// (0x0003f620) poc_content_pane

0xde65,	// (0x0003f632) scroll_pane_cp019

0x758a,	// (0x00038d57) popup_call_poc_act_window_ParamLimits

0x758a,	// (0x00038d57) popup_call_poc_act_window

0x7597,	// (0x00038d64) popup_call_poc_inact_window_ParamLimits

0x7597,	// (0x00038d64) popup_call_poc_inact_window

0xf513,	// (0x00040ce0) bg_popup_call_poc_act_pane_g

0xee03,	// (0x000405d0) bg_popup_call_poc_inact_pane_g1

0xee0b,	// (0x000405d8) bg_popup_call_poc_inact_pane_g2

0xde6d,	// (0x0003f63a) popup_call_poc_act_window_g2

0xee13,	// (0x000405e0) bg_popup_call_poc_inact_pane_g3

0xed93,	// (0x00040560) bg_popup_call_poc_inact_pane_g4

0xee1b,	// (0x000405e8) bg_popup_call_poc_inact_pane_g5

0xde75,	// (0x0003f642) popup_call_poc_act_window_t1_ParamLimits

0xde75,	// (0x0003f642) popup_call_poc_act_window_t1

0xde9d,	// (0x0003f66a) popup_call_poc_act_window_t2_ParamLimits

0xde9d,	// (0x0003f66a) popup_call_poc_act_window_t2

0xdec5,	// (0x0003f692) popup_call_poc_act_window_t3_ParamLimits

0xdec5,	// (0x0003f692) popup_call_poc_act_window_t3

0xdeed,	// (0x0003f6ba) popup_call_poc_act_window_t4_ParamLimits

0xdeed,	// (0x0003f6ba) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00040c49) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00040c49) popup_call_poc_act_window_t

0xee23,	// (0x000405f0) bg_popup_call_poc_inact_pane_g6

0xee2b,	// (0x000405f8) bg_popup_call_poc_inact_pane_g7

0xee33,	// (0x00040600) bg_popup_call_poc_inact_pane_g8

0xdeff,	// (0x0003f6cc) popup_call_poc_inact_window_g2

0xee3b,	// (0x00040608) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x00040cf7) bg_popup_call_poc_inact_pane_g

0xdf07,	// (0x0003f6d4) popup_call_poc_inact_window_t1_ParamLimits

0xdf07,	// (0x0003f6d4) popup_call_poc_inact_window_t1

0xdf1c,	// (0x0003f6e9) popup_call_poc_inact_window_t2_ParamLimits

0xdf1c,	// (0x0003f6e9) popup_call_poc_inact_window_t2

0xdf31,	// (0x0003f6fe) popup_call_poc_inact_window_t3_ParamLimits

0xdf31,	// (0x0003f6fe) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00040c52) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00040c52) popup_call_poc_inact_window_t

0xeee7,	// (0x000406b4) context_pane_ParamLimits

0x7c14,	// (0x000393e1) signal_pane_ParamLimits

0xd0d6,	// (0x0003e8a3) main_call2_pane

0x7b87,	// (0x00039354) popup_phob_thumbnail2_window_ParamLimits

0x7b87,	// (0x00039354) popup_phob_thumbnail2_window

0x7259,	// (0x00038a26) aid_hotspot_pointer_arrow_pane

0x7261,	// (0x00038a2e) aid_hotspot_pointer_hand_pane

0x78e2,	// (0x000390af) phob_pre_status_pane_g5

0xc7bb,	// (0x0003df88) cams_zoom_pane_ParamLimits

0xc7bb,	// (0x0003df88) image_vga_pane_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g1_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g3_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g5_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g6_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00040978) main_camera_pane_g_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera_pane_t1_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00040989) main_camera_pane_t_ParamLimits

0xce37,	// (0x0003e604) bg_popup_preview_window_pane_cp01_ParamLimits

0xce37,	// (0x0003e604) bg_popup_preview_window_pane_cp01

0xdf46,	// (0x0003f713) popup_phob_thumbnail2_window_g1_ParamLimits

0xdf46,	// (0x0003f713) popup_phob_thumbnail2_window_g1

0xcbdc,	// (0x0003e3a9) call2_cli_visual_pane

0x75b3,	// (0x00038d80) popup_call2_audio_conf_window_ParamLimits

0x75b3,	// (0x00038d80) popup_call2_audio_conf_window

0x75c8,	// (0x00038d95) popup_call2_audio_first_window_ParamLimits

0x75c8,	// (0x00038d95) popup_call2_audio_first_window

0x7666,	// (0x00038e33) popup_call2_audio_in_window_ParamLimits

0x7666,	// (0x00038e33) popup_call2_audio_in_window

0x76a8,	// (0x00038e75) popup_call2_audio_out_window_ParamLimits

0x76a8,	// (0x00038e75) popup_call2_audio_out_window

0x770a,	// (0x00038ed7) popup_call2_audio_second_window_ParamLimits

0x770a,	// (0x00038ed7) popup_call2_audio_second_window

0x7768,	// (0x00038f35) popup_call2_audio_wait_window_ParamLimits

0x7768,	// (0x00038f35) popup_call2_audio_wait_window

0xcbdc,	// (0x0003e3a9) bg_popup_call2_act_pane_cp03

0xce19,	// (0x0003e5e6) list_conf_pane_cp

0xdf52,	// (0x0003f71f) popup_call2_audio_conf_window_t1

0xdf60,	// (0x0003f72d) list_single_graphic_popup_conf2_pane_ParamLimits

0xdf60,	// (0x0003f72d) list_single_graphic_popup_conf2_pane

0xd840,	// (0x0003f00d) list_highlight_pane_cp04

0xdf73,	// (0x0003f740) list_single_graphic_popup_conf2_pane_g1

0xd851,	// (0x0003f01e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00040c59) list_single_graphic_popup_conf2_pane_g

0xdf7d,	// (0x0003f74a) list_single_graphic_popup_conf2_pane_t1

0xdf8b,	// (0x0003f758) bg_popup_call2_act_pane_cp01_ParamLimits

0xdf8b,	// (0x0003f758) bg_popup_call2_act_pane_cp01

0xe015,	// (0x0003f7e2) call_type_pane_cp05_ParamLimits

0xe015,	// (0x0003f7e2) call_type_pane_cp05

0xe069,	// (0x0003f836) popup_call2_audio_second_window_g1_ParamLimits

0xe069,	// (0x0003f836) popup_call2_audio_second_window_g1

0xe0bd,	// (0x0003f88a) popup_call2_audio_second_window_g2_ParamLimits

0xe0bd,	// (0x0003f88a) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00040c5e) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00040c5e) popup_call2_audio_second_window_g

0xe122,	// (0x0003f8ef) popup_call2_audio_second_window_t1_ParamLimits

0xe122,	// (0x0003f8ef) popup_call2_audio_second_window_t1

0xe1dd,	// (0x0003f9aa) popup_call2_audio_second_window_t2_ParamLimits

0xe1dd,	// (0x0003f9aa) popup_call2_audio_second_window_t2

0xe230,	// (0x0003f9fd) popup_call2_audio_second_window_t3_ParamLimits

0xe230,	// (0x0003f9fd) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00040c65) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00040c65) popup_call2_audio_second_window_t

0xcbdc,	// (0x0003e3a9) bg_popup_call2_in_pane_cp02

0xcbe6,	// (0x0003e3b3) call_type_pane_cp04

0x77a7,	// (0x00038f74) popup_call2_audio_wait_window_g1

0x77af,	// (0x00038f7c) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00040c6e) popup_call2_audio_wait_window_g

0xcbfe,	// (0x0003e3cb) popup_call2_audio_wait_window_t3

0xe323,	// (0x0003faf0) bg_popup_call2_act_pane_ParamLimits

0xe323,	// (0x0003faf0) bg_popup_call2_act_pane

0xe3e3,	// (0x0003fbb0) call_type_pane_cp03_ParamLimits

0xe3e3,	// (0x0003fbb0) call_type_pane_cp03

0xe447,	// (0x0003fc14) popup_call2_audio_first_window_g1_ParamLimits

0xe447,	// (0x0003fc14) popup_call2_audio_first_window_g1

0xe4b7,	// (0x0003fc84) popup_call2_audio_first_window_g2_ParamLimits

0xe4b7,	// (0x0003fc84) popup_call2_audio_first_window_g2

0xd765,	// (0x0003ef32) popup_call2_audio_first_window_g3_ParamLimits

0xd765,	// (0x0003ef32) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00040c73) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00040c73) popup_call2_audio_first_window_g

0xe595,	// (0x0003fd62) popup_call2_audio_first_window_t1_ParamLimits

0xe595,	// (0x0003fd62) popup_call2_audio_first_window_t1

0xe698,	// (0x0003fe65) popup_call2_audio_first_window_t4_ParamLimits

0xe698,	// (0x0003fe65) popup_call2_audio_first_window_t4

0xe7c0,	// (0x0003ff8d) popup_call2_audio_first_window_t5_ParamLimits

0xe7c0,	// (0x0003ff8d) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00040c7e) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00040c7e) popup_call2_audio_first_window_t

0xce2f,	// (0x0003e5fc) bg_popup_call2_act_pane_g1

0xee5b,	// (0x00040628) popup_cale_lunar_info_window_t1

0xee69,	// (0x00040636) popup_cale_lunar_info_window_t2

0xee77,	// (0x00040644) popup_cale_lunar_info_window_t3

0xcbdc,	// (0x0003e3a9) bg_popup_call2_bubble_pane

0xe905,	// (0x000400d2) bg_popup_call2_in_pane_cp01_ParamLimits

0xe905,	// (0x000400d2) bg_popup_call2_in_pane_cp01

0xc8b8,	// (0x0003e085) call_type_pane_cp02

0x77b7,	// (0x00038f84) popup_call2_audio_out_window_g1_ParamLimits

0x77b7,	// (0x00038f84) popup_call2_audio_out_window_g1

0xe94d,	// (0x0004011a) popup_call2_audio_out_window_g2_ParamLimits

0xe94d,	// (0x0004011a) popup_call2_audio_out_window_g2

0x77e3,	// (0x00038fb0) popup_call2_audio_out_window_g3_ParamLimits

0x77e3,	// (0x00038fb0) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00040c87) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00040c87) popup_call2_audio_out_window_g

0xe984,	// (0x00040151) popup_call2_audio_out_window_t1_ParamLimits

0xe984,	// (0x00040151) popup_call2_audio_out_window_t1

0xe9e3,	// (0x000401b0) popup_call2_audio_out_window_t2_ParamLimits

0xe9e3,	// (0x000401b0) popup_call2_audio_out_window_t2

0xea37,	// (0x00040204) popup_call2_audio_out_window_t3_ParamLimits

0xea37,	// (0x00040204) popup_call2_audio_out_window_t3

0xea4d,	// (0x0004021a) popup_call2_audio_out_window_t4_ParamLimits

0xea4d,	// (0x0004021a) popup_call2_audio_out_window_t4

0xea63,	// (0x00040230) popup_call2_audio_out_window_t5_ParamLimits

0xea63,	// (0x00040230) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00040c90) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00040c90) popup_call2_audio_out_window_t

0xeac7,	// (0x00040294) bg_popup_call2_in_pane_ParamLimits

0xeac7,	// (0x00040294) bg_popup_call2_in_pane

0xeb23,	// (0x000402f0) popup_call2_audio_in_window_g1_ParamLimits

0xeb23,	// (0x000402f0) popup_call2_audio_in_window_g1

0xeb5b,	// (0x00040328) popup_call2_audio_in_window_g2_ParamLimits

0xeb5b,	// (0x00040328) popup_call2_audio_in_window_g2

0xeb93,	// (0x00040360) popup_call2_audio_in_window_g3_ParamLimits

0xeb93,	// (0x00040360) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00040c9d) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00040c9d) popup_call2_audio_in_window_g

0xebeb,	// (0x000403b8) popup_call2_audio_in_window_t1_ParamLimits

0xebeb,	// (0x000403b8) popup_call2_audio_in_window_t1

0xec6b,	// (0x00040438) popup_call2_audio_in_window_t2_ParamLimits

0xec6b,	// (0x00040438) popup_call2_audio_in_window_t2

0xeceb,	// (0x000404b8) popup_call2_audio_in_window_t3_ParamLimits

0xeceb,	// (0x000404b8) popup_call2_audio_in_window_t3

0xed05,	// (0x000404d2) popup_call2_audio_in_window_t4_ParamLimits

0xed05,	// (0x000404d2) popup_call2_audio_in_window_t4

0xed17,	// (0x000404e4) popup_call2_audio_in_window_t5_ParamLimits

0xed17,	// (0x000404e4) popup_call2_audio_in_window_t5

0xed29,	// (0x000404f6) popup_call2_audio_in_window_t6_ParamLimits

0xed29,	// (0x000404f6) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00040ca6) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00040ca6) popup_call2_audio_in_window_t

0xce2f,	// (0x0003e5fc) bg_popup_call2_in_pane_g1

0xee85,	// (0x00040652) popup_cale_lunar_info_window_t4

0x0003,

0xf554,	// (0x00040d21) popup_cale_lunar_info_window_t

0xce37,	// (0x0003e604) bg_popup_call2_rect_pane_ParamLimits

0xce37,	// (0x0003e604) bg_popup_call2_rect_pane

0xcbdc,	// (0x0003e3a9) call2_cli_visual_graphic_pane

0xcbdc,	// (0x0003e3a9) call2_cli_visual_text_pane

0x7c50,	// (0x0003941d) smil_status_volume_pane_g3

0x0002,

0xce4f,	// (0x0003e61c) call2_cli_visual_graphic_pane_g1

0xce4f,	// (0x0003e61c) call2_cli_visual_graphic_pane_g2

0xce4f,	// (0x0003e61c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00040cb3) call2_cli_visual_graphic_pane_g

0xed3b,	// (0x00040508) bg_popup_call2_rect_pane_g1

0xcffb,	// (0x0003e7c8) bg_popup_call2_rect_pane_g2

0xed43,	// (0x00040510) bg_popup_call2_rect_pane_g3

0xed4b,	// (0x00040518) bg_popup_call2_rect_pane_g4

0xed53,	// (0x00040520) bg_popup_call2_rect_pane_g5

0xed5b,	// (0x00040528) bg_popup_call2_rect_pane_g6

0xed63,	// (0x00040530) bg_popup_call2_rect_pane_g7

0xed6b,	// (0x00040538) bg_popup_call2_rect_pane_g8

0xed73,	// (0x00040540) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00040cba) bg_popup_call2_rect_pane_g

0xed7b,	// (0x00040548) bg_popup_call2_bubble_pane_g1

0xed83,	// (0x00040550) bg_popup_call2_bubble_pane_g2

0xed8b,	// (0x00040558) bg_popup_call2_bubble_pane_g3

0xed93,	// (0x00040560) bg_popup_call2_bubble_pane_g4

0xed9b,	// (0x00040568) bg_popup_call2_bubble_pane_g5

0xeda3,	// (0x00040570) bg_popup_call2_bubble_pane_g6

0xedab,	// (0x00040578) bg_popup_call2_bubble_pane_g7

0xedb3,	// (0x00040580) bg_popup_call2_bubble_pane_g8

0xedbb,	// (0x00040588) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00040ccd) bg_popup_call2_bubble_pane_g

0x542c,	// (0x00036bf9) aid_cale_week_size_cell_pane

0xce37,	// (0x0003e604) aid_cams_cif_uncrop_pane_ParamLimits

0xce37,	// (0x0003e604) aid_cams_cif_uncrop_pane

0x5a25,	// (0x000371f2) aid_cams_size_cell_ParamLimits

0x5a25,	// (0x000371f2) aid_cams_size_cell

0x5a31,	// (0x000371fe) grid_cams_pane_ParamLimits

0x5a3f,	// (0x0003720c) linegrid_cams_pane_ParamLimits

0x5b16,	// (0x000372e3) call_video_pane_t1

0x5b37,	// (0x00037304) call_video_pane_t2

0x0001,

0xf208,	// (0x000409d5) call_video_pane_t

0x6029,	// (0x000377f6) aid_cale_month_size_cell_pane_ParamLimits

0x6029,	// (0x000377f6) aid_cale_month_size_cell_pane

0xf598,	// (0x00040d65) smil_status_volume_pane_g

0x7c5d,	// (0x0003942a) volume_smil_pane_ParamLimits

0x4cc6,	// (0x00036493) aid_popup2_width_pane

0x5323,	// (0x00036af0) cell_qdial_pane_g4_ParamLimits

0x5323,	// (0x00036af0) cell_qdial_pane_g4

0x6f3a,	// (0x00038707) aid_blid_cardinal_pane_ParamLimits

0x6f4a,	// (0x00038717) aid_blid_destination_pane_ParamLimits

0x6f4a,	// (0x00038717) aid_blid_destination_pane

0xce37,	// (0x0003e604) bg_popup_call_poc_act_pane_ParamLimits

0xce37,	// (0x0003e604) bg_popup_call_poc_act_pane

0xce37,	// (0x0003e604) bg_popup_call_poc_inact_pane_ParamLimits

0xce37,	// (0x0003e604) bg_popup_call_poc_inact_pane

0xedc3,	// (0x00040590) bg_popup_call_poc_act_pane_g1

0xedcb,	// (0x00040598) bg_popup_call_poc_act_pane_g2

0xedd3,	// (0x000405a0) bg_popup_call_poc_act_pane_g3

0xed93,	// (0x00040560) bg_popup_call_poc_act_pane_g4

0xed9b,	// (0x00040568) bg_popup_call_poc_act_pane_g5

0xeddb,	// (0x000405a8) bg_popup_call_poc_act_pane_g6

0xedab,	// (0x00040578) bg_popup_call_poc_act_pane_g7

0xede3,	// (0x000405b0) bg_popup_call_poc_act_pane_g8

0xcbdc,	// (0x0003e3a9) main_usb_pane

0x7aba,	// (0x00039287) popup_cale_lunar_info_window

0x5e54,	// (0x00037621) im_reading_pane_t1_ParamLimits

0xd1d9,	// (0x0003e9a6) list_im_pane_ParamLimits

0xd1ea,	// (0x0003e9b7) scroll_pane_cp07_ParamLimits

0xcbdc,	// (0x0003e3a9) grid_highlight_pane_cp012

0xce37,	// (0x0003e604) mup_scale_pane_ParamLimits

0xd765,	// (0x0003ef32) main_usb_pane_g1_ParamLimits

0xd765,	// (0x0003ef32) main_usb_pane_g1

0x784a,	// (0x00039017) main_usb_pane_g2_ParamLimits

0x784a,	// (0x00039017) main_usb_pane_g2

0x0001,

0xf53d,	// (0x00040d0a) main_usb_pane_g_ParamLimits

0xf53d,	// (0x00040d0a) main_usb_pane_g

0x7856,	// (0x00039023) main_usb_pane_t1_ParamLimits

0x7856,	// (0x00039023) main_usb_pane_t1

0x7868,	// (0x00039035) main_usb_pane_t2_ParamLimits

0x7868,	// (0x00039035) main_usb_pane_t2

0x787a,	// (0x00039047) main_usb_pane_t3_ParamLimits

0x787a,	// (0x00039047) main_usb_pane_t3

0x788c,	// (0x00039059) main_usb_pane_t4_ParamLimits

0x788c,	// (0x00039059) main_usb_pane_t4

0x789e,	// (0x0003906b) main_usb_pane_t5_ParamLimits

0x789e,	// (0x0003906b) main_usb_pane_t5

0x78b0,	// (0x0003907d) main_usb_pane_t6_ParamLimits

0x78b0,	// (0x0003907d) main_usb_pane_t6

0x0005,

0xf542,	// (0x00040d0f) main_usb_pane_t_ParamLimits

0x6ee0,	// (0x000386ad) aid_text_placing

0x6eec,	// (0x000386b9) main_location2_pane_t1_ParamLimits

0x6f00,	// (0x000386cd) main_location2_pane_t2_ParamLimits

0x6f14,	// (0x000386e1) main_location2_pane_t3_ParamLimits

0x6f28,	// (0x000386f5) main_location2_pane_t4_ParamLimits

0x6f28,	// (0x000386f5) main_location2_pane_t4

0xf349,	// (0x00040b16) main_location2_pane_t_ParamLimits

0xce73,	// (0x0003e640) find_pinb_pane_g2_ParamLimits

0xce73,	// (0x0003e640) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0004088d) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0004088d) find_pinb_pane_g

0xce7f,	// (0x0003e64c) find_pinb_pane_t1_ParamLimits

0xce91,	// (0x0003e65e) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00040892) find_pinb_pane_t_ParamLimits

0xcbdc,	// (0x0003e3a9) main_call3_pane

0x65ec,	// (0x00037db9) cale_month_day_heading_pane_t1_ParamLimits

0x6672,	// (0x00037e3f) cale_month_day_heading_pane_t2_ParamLimits

0x66eb,	// (0x00037eb8) cale_month_day_heading_pane_t3_ParamLimits

0x6764,	// (0x00037f31) cale_month_day_heading_pane_t4_ParamLimits

0x67dd,	// (0x00037faa) cale_month_day_heading_pane_t5_ParamLimits

0x6856,	// (0x00038023) cale_month_day_heading_pane_t6_ParamLimits

0x68cf,	// (0x0003809c) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00040a0d) cale_month_day_heading_pane_t_ParamLimits

0xd434,	// (0x0003ec01) smil_status_volume_pane

0x73a1,	// (0x00038b6e) postcard_address_pane_ParamLimits

0x73a1,	// (0x00038b6e) postcard_address_pane

0x73ad,	// (0x00038b7a) postcard_message_pane_ParamLimits

0x73ad,	// (0x00038b7a) postcard_message_pane

0x780f,	// (0x00038fdc) call2_cli_visual_pane_t1_ParamLimits

0x780f,	// (0x00038fdc) call2_cli_visual_pane_t1

0xef9a,	// (0x00040767) postcard_message_pane_t1_ParamLimits

0xef9a,	// (0x00040767) postcard_message_pane_t1

0xef82,	// (0x0004074f) postcard_address_pane_t1_ParamLimits

0xef82,	// (0x0004074f) postcard_address_pane_t1

0x7d8e,	// (0x0003955b) popup_call3_audio_in_window_ParamLimits

0x7d8e,	// (0x0003955b) popup_call3_audio_in_window

0x7c72,	// (0x0003943f) bg_popup_call3_in_pane_ParamLimits

0x7c72,	// (0x0003943f) bg_popup_call3_in_pane

0x7cd4,	// (0x000394a1) popup_call3_audio_in_window_g1_ParamLimits

0x7cd4,	// (0x000394a1) popup_call3_audio_in_window_g1

0x7cec,	// (0x000394b9) popup_call3_audio_in_window_g2_ParamLimits

0x7cec,	// (0x000394b9) popup_call3_audio_in_window_g2

0x7d04,	// (0x000394d1) popup_call3_audio_in_window_g3_ParamLimits

0x7d04,	// (0x000394d1) popup_call3_audio_in_window_g3

0x0003,

0xf59f,	// (0x00040d6c) popup_call3_audio_in_window_g_ParamLimits

0xf59f,	// (0x00040d6c) popup_call3_audio_in_window_g

0x7d2c,	// (0x000394f9) popup_call3_audio_in_window_t1_ParamLimits

0x7d2c,	// (0x000394f9) popup_call3_audio_in_window_t1

0x7d54,	// (0x00039521) popup_call3_audio_in_window_t2_ParamLimits

0x7d54,	// (0x00039521) popup_call3_audio_in_window_t2

0x7d7c,	// (0x00039549) popup_call3_audio_in_window_t3_ParamLimits

0x7d7c,	// (0x00039549) popup_call3_audio_in_window_t3

0x0002,

0xf5a8,	// (0x00040d75) popup_call3_audio_in_window_t_ParamLimits

0xf5a8,	// (0x00040d75) popup_call3_audio_in_window_t

0xd0d6,	// (0x0003e8a3) bg_popup_call3_rect_pane

0xed3b,	// (0x00040508) bg_popup_call3_rect_pane_g1

0xcffb,	// (0x0003e7c8) bg_popup_call3_rect_pane_g2

0xed43,	// (0x00040510) bg_popup_call3_rect_pane_g3

0xed4b,	// (0x00040518) bg_popup_call3_rect_pane_g4

0xed53,	// (0x00040520) bg_popup_call3_rect_pane_g5

0xed5b,	// (0x00040528) bg_popup_call3_rect_pane_g6

0xed63,	// (0x00040530) bg_popup_call3_rect_pane_g7

0xc7b1,	// (0x0003df7e) mup_visualizer_osc_pane

0xc7b1,	// (0x0003df7e) mup_visualizer_spec_pane

0x7c92,	// (0x0003945f) call3_video_qcif_pane_ParamLimits

0x7c92,	// (0x0003945f) call3_video_qcif_pane

0x7ca4,	// (0x00039471) call3_video_qcif_uncrop_pane_ParamLimits

0x7ca4,	// (0x00039471) call3_video_qcif_uncrop_pane

0x7cb2,	// (0x0003947f) call3_video_subqcif_pane_ParamLimits

0x7cb2,	// (0x0003947f) call3_video_subqcif_pane

0x7cc4,	// (0x00039491) call3_video_subqcif_uncrop_pane_ParamLimits

0x7cc4,	// (0x00039491) call3_video_subqcif_uncrop_pane

0x7d1c,	// (0x000394e9) popup_call3_audio_in_window_g4_ParamLimits

0x7d1c,	// (0x000394e9) popup_call3_audio_in_window_g4

0xc7b1,	// (0x0003df7e) mup_spec_half_pane

0xc7b1,	// (0x0003df7e) mup_spec_half_pane_cp

0xc7b1,	// (0x0003df7e) mup_osc_middle_pane

0xd10c,	// (0x0003e8d9) mup_visualizer_osc_pane_g1

0xef35,	// (0x00040702) mup_spec_bar_pane_ParamLimits

0xef35,	// (0x00040702) mup_spec_bar_pane

0xd10c,	// (0x0003e8d9) mup_spec_bar_pane_g1

0xd10c,	// (0x0003e8d9) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) mup_spec_bar_pane_g

0x542c,	// (0x00036bf9) aid_cale_week_size_cell_pane_ParamLimits

0x5441,	// (0x00036c0e) bg_cale_heading_pane_ParamLimits

0xd038,	// (0x0003e805) bg_cale_pane_cp01_ParamLimits

0x5463,	// (0x00036c30) cale_week_corner_pane_ParamLimits

0x547d,	// (0x00036c4a) cale_week_day_heading_pane_ParamLimits

0x549f,	// (0x00036c6c) cale_week_scroll_pane_g1_ParamLimits

0x54bc,	// (0x00036c89) cale_week_scroll_pane_g2_ParamLimits

0x54cf,	// (0x00036c9c) cale_week_scroll_pane_g3_ParamLimits

0x54e2,	// (0x00036caf) cale_week_scroll_pane_g4_ParamLimits

0x54f5,	// (0x00036cc2) cale_week_scroll_pane_g5_ParamLimits

0x5508,	// (0x00036cd5) cale_week_scroll_pane_g6_ParamLimits

0x551b,	// (0x00036ce8) cale_week_scroll_pane_g7_ParamLimits

0x5530,	// (0x00036cfd) cale_week_scroll_pane_g8_ParamLimits

0x5545,	// (0x00036d12) cale_week_scroll_pane_g9_ParamLimits

0x5558,	// (0x00036d25) cale_week_scroll_pane_g10_ParamLimits

0x556b,	// (0x00036d38) cale_week_scroll_pane_g11_ParamLimits

0x557e,	// (0x00036d4b) cale_week_scroll_pane_g12_ParamLimits

0x5595,	// (0x00036d62) cale_week_scroll_pane_g13_ParamLimits

0x55b0,	// (0x00036d7d) cale_week_scroll_pane_g14_ParamLimits

0x55cb,	// (0x00036d98) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0004091e) cale_week_scroll_pane_g_ParamLimits

0x55fb,	// (0x00036dc8) cale_week_time_pane_ParamLimits

0x5610,	// (0x00036ddd) grid_cale_week_pane_ParamLimits

0xd055,	// (0x0003e822) listscroll_cale_week_pane_t1

0xd067,	// (0x0003e834) scroll_pane_cp08_ParamLimits

0x609d,	// (0x0003786a) cale_month_corner_pane_ParamLimits

0xd40a,	// (0x0003ebd7) cale_month_pane_t1

0x656b,	// (0x00037d38) cale_month_week_pane_ParamLimits

0xd765,	// (0x0003ef32) popup_call_status_window_g1_ParamLimits

0x6d0d,	// (0x000384da) popup_call_status_window_g2_ParamLimits

0x6d19,	// (0x000384e6) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00040a9d) popup_call_status_window_g_ParamLimits

0xd7cc,	// (0x0003ef99) aid_call2_pane

0x4007,	// (0x000357d4) msg_header_pane_g1

0x73a1,	// (0x00038b6e) postcard_address2_pane_ParamLimits

0x73a1,	// (0x00038b6e) postcard_address2_pane

0x73ad,	// (0x00038b7a) postcard_message2_pane_ParamLimits

0x73ad,	// (0x00038b7a) postcard_message2_pane

0x7c22,	// (0x000393ef) message2_row_pane_ParamLimits

0x7c22,	// (0x000393ef) message2_row_pane

0x7c3d,	// (0x0003940a) address2_row_pane_ParamLimits

0x7c3d,	// (0x0003940a) address2_row_pane

0xef02,	// (0x000406cf) postcard_message2_row_pane_g1

0xef0a,	// (0x000406d7) postcard_message2_row_pane_t1

0xef02,	// (0x000406cf) address2_row_pane_g1

0xef0a,	// (0x000406d7) address2_row_pane_t1

0x5895,	// (0x00037062) aid_size_cell_vorec

0xcbdc,	// (0x0003e3a9) main_rss_pane

0xef18,	// (0x000406e5) rss_list_single_pane_ParamLimits

0xef18,	// (0x000406e5) rss_list_single_pane

0xef26,	// (0x000406f3) rss_list_single_pane_t1

0xef26,	// (0x000406f3) rss_list_single_pane_t2

0x0001,

0xf593,	// (0x00040d60) rss_list_single_pane_t

0xcbdc,	// (0x0003e3a9) main_camera2_pane

0xcbdc,	// (0x0003e3a9) main_video2_pane

0xc7bb,	// (0x0003df88) cams_zoom_pane_cp2_ParamLimits

0xc7bb,	// (0x0003df88) cams_zoom_pane_cp2

0xc7bb,	// (0x0003df88) image2_vga_pane_ParamLimits

0xc7bb,	// (0x0003df88) image2_vga_pane

0xcec0,	// (0x0003e68d) main_camera2_pane_g1_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g1

0xcec0,	// (0x0003e68d) main_camera2_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g2

0xcec0,	// (0x0003e68d) main_camera2_pane_g3_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g3

0xcec0,	// (0x0003e68d) main_camera2_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g4

0xcec0,	// (0x0003e68d) main_camera2_pane_g5_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g5

0xcec0,	// (0x0003e68d) main_camera2_pane_g6_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g6

0xcec0,	// (0x0003e68d) main_camera2_pane_g7_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g7

0xcec0,	// (0x0003e68d) main_camera2_pane_g8_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g8

0x0008,

0xf5af,	// (0x00040d7c) main_camera2_pane_g_ParamLimits

0xf5af,	// (0x00040d7c) main_camera2_pane_g

0xd0de,	// (0x0003e8ab) main_camera2_pane_t1_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t1

0xd0de,	// (0x0003e8ab) main_camera2_pane_t2_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t2

0xd0de,	// (0x0003e8ab) main_camera2_pane_t3_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t3

0xd0de,	// (0x0003e8ab) main_camera2_pane_t4_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t4

0x0006,

0xf5c2,	// (0x00040d8f) main_camera2_pane_t_ParamLimits

0xf5c2,	// (0x00040d8f) main_camera2_pane_t

0xe77b,	// (0x0003ff48) cams_zoom_pane_cp4_ParamLimits

0xe77b,	// (0x0003ff48) cams_zoom_pane_cp4

0xce59,	// (0x0003e626) image2_cif_pane_ParamLimits

0xce59,	// (0x0003e626) image2_cif_pane

0xc7bb,	// (0x0003df88) image2_subqcif_pane_ParamLimits

0xc7bb,	// (0x0003df88) image2_subqcif_pane

0xe789,	// (0x0003ff56) main_video2_pane_g1_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g1

0xe789,	// (0x0003ff56) main_video2_pane_g2_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g2

0xe789,	// (0x0003ff56) main_video2_pane_g3_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g3

0xe789,	// (0x0003ff56) main_video2_pane_g4_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g4

0xe789,	// (0x0003ff56) main_video2_pane_g5_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g5

0xe789,	// (0x0003ff56) main_video2_pane_g6_ParamLimits

0xe789,	// (0x0003ff56) main_video2_pane_g6

0x0005,

0xf5d1,	// (0x00040d9e) main_video2_pane_g_ParamLimits

0xf5d1,	// (0x00040d9e) main_video2_pane_g

0xe797,	// (0x0003ff64) main_video2_pane_t1_ParamLimits

0xe797,	// (0x0003ff64) main_video2_pane_t1

0xe797,	// (0x0003ff64) main_video2_pane_t2_ParamLimits

0xe797,	// (0x0003ff64) main_video2_pane_t2

0xe797,	// (0x0003ff64) main_video2_pane_t3_ParamLimits

0xe797,	// (0x0003ff64) main_video2_pane_t3

0x0002,

0xf5de,	// (0x00040dab) main_video2_pane_t_ParamLimits

0xf5de,	// (0x00040dab) main_video2_pane_t

0x7946,	// (0x00039113) call_muted_g2

0x0001,

0xf585,	// (0x00040d52) call_muted_g

0xcbdc,	// (0x0003e3a9) main_mup2_pane

0xcece,	// (0x0003e69b) main_mup2_pane_g1_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g1

0xcece,	// (0x0003e69b) main_mup2_pane_g2_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g2

0xd10c,	// (0x0003e8d9) main_mup_pane_g13_cp1

0xc7b1,	// (0x0003df7e) mup_volume_pane_cp1

0xcece,	// (0x0003e69b) main_mup2_pane_g4_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g4

0xcece,	// (0x0003e69b) main_mup2_pane_g5_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g5

0xcece,	// (0x0003e69b) main_mup2_pane_g6_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g6

0xcece,	// (0x0003e69b) main_mup2_pane_g7_ParamLimits

0xcece,	// (0x0003e69b) main_mup2_pane_g7

0x0006,

0xf5e5,	// (0x00040db2) main_mup2_pane_g_ParamLimits

0xf5e5,	// (0x00040db2) main_mup2_pane_g

0xcedc,	// (0x0003e6a9) main_mup2_pane_t1_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t1

0xcedc,	// (0x0003e6a9) main_mup2_pane_t2_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t2

0xcedc,	// (0x0003e6a9) main_mup2_pane_t3_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t3

0xcedc,	// (0x0003e6a9) main_mup2_pane_t4_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t4

0xcedc,	// (0x0003e6a9) main_mup2_pane_t5_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t5

0xcedc,	// (0x0003e6a9) main_mup2_pane_t6_ParamLimits

0xcedc,	// (0x0003e6a9) main_mup2_pane_t6

0x0005,

0xf5f4,	// (0x00040dc1) main_mup2_pane_t_ParamLimits

0xf5f4,	// (0x00040dc1) main_mup2_pane_t

0x00af,	// (0x0003187c) mup2_visualizer_pane_ParamLimits

0x00af,	// (0x0003187c) mup2_visualizer_pane

0x00af,	// (0x0003187c) mup_progress_pane_cp_ParamLimits

0x00af,	// (0x0003187c) mup_progress_pane_cp

0xefb6,	// (0x00040783) mup_volume_pane_cp_ParamLimits

0xefb6,	// (0x00040783) mup_volume_pane_cp

0xceb2,	// (0x0003e67f) mup2_visualizer_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) mup2_visualizer_pane_g1

0xcec0,	// (0x0003e68d) mup2_visualizer_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) mup2_visualizer_pane_g2

0xcec0,	// (0x0003e68d) mup2_visualizer_pane_g3_ParamLimits

0xcec0,	// (0x0003e68d) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00040897) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00040897) mup2_visualizer_pane_g

0xdde2,	// (0x0003f5af) aid_size_cell_fmradio

0x7a5c,	// (0x00039229) aid_height_parent_landcape

0xd268,	// (0x0003ea35) wml_content_pane_cp

0xd270,	// (0x0003ea3d) wml_tabs_pane

0xd279,	// (0x0003ea46) popup_wml_miniature_window

0xd281,	// (0x0003ea4e) scroll_pane_cp021

0xd295,	// (0x0003ea62) wml_content_pane_comp8

0xcbdc,	// (0x0003e3a9) bg_popup_sub_pane_cp05

0xefcc,	// (0x00040799) popup_wml_miniature_window_g1

0xefd4,	// (0x000407a1) wml_miniature_view_pane

0x7dbf,	// (0x0003958c) aid_size_wml_view

0x7dc7,	// (0x00039594) wml_miniature_view_pane_g1

0x7dd0,	// (0x0003959d) wml_miniature_view_pane_g2

0x7dd9,	// (0x000395a6) wml_miniature_view_pane_g3

0x7de1,	// (0x000395ae) wml_miniature_view_pane_g4

0x7de9,	// (0x000395b6) wml_miniature_view_pane_g5

0x7df1,	// (0x000395be) wml_miniature_view_pane_g6

0x7df9,	// (0x000395c6) wml_miniature_view_pane_g7

0x7e01,	// (0x000395ce) wml_miniature_view_pane_g8

0x0007,

0xf601,	// (0x00040dce) wml_miniature_view_pane_g

0xefdc,	// (0x000407a9) background_graphic_ParamLimits

0xefdc,	// (0x000407a9) background_graphic

0xefe8,	// (0x000407b5) wml_tabs_2_pane

0xeff1,	// (0x000407be) wml_tabs_3_pane_ParamLimits

0xeff1,	// (0x000407be) wml_tabs_3_pane

0xf003,	// (0x000407d0) wml_tabs_4_pane_ParamLimits

0xf003,	// (0x000407d0) wml_tabs_4_pane

0xf019,	// (0x000407e6) wml_tabs_5_pane_ParamLimits

0xf019,	// (0x000407e6) wml_tabs_5_pane

0xf033,	// (0x00040800) wml_tabs_pane_g2_ParamLimits

0xf033,	// (0x00040800) wml_tabs_pane_g2

0xf048,	// (0x00040815) wml_tabs_pane_g3_ParamLimits

0xf048,	// (0x00040815) wml_tabs_pane_g3

0xf05d,	// (0x0004082a) wml_tabs_2_active_pane_ParamLimits

0xf05d,	// (0x0004082a) wml_tabs_2_active_pane

0xf05d,	// (0x0004082a) wml_tabs_2_passive_pane_ParamLimits

0xf05d,	// (0x0004082a) wml_tabs_2_passive_pane

0x7e09,	// (0x000395d6) wml_tabs_3_active_pane_cp_ParamLimits

0x7e09,	// (0x000395d6) wml_tabs_3_active_pane_cp

0x7e1a,	// (0x000395e7) wml_tabs_3_passive_pane_ParamLimits

0x7e1a,	// (0x000395e7) wml_tabs_3_passive_pane

0x7e2b,	// (0x000395f8) wml_tabs_3_passive_pane_cp_ParamLimits

0x7e2b,	// (0x000395f8) wml_tabs_3_passive_pane_cp

0x7e3c,	// (0x00039609) tabs_4_active_pane

0x7e44,	// (0x00039611) tabs_4_passive_pane

0x7e4c,	// (0x00039619) tabs_4_passive_pane_cp

0x7e54,	// (0x00039621) tabs_4_passive_pane_cp2

0x7842,	// (0x0003900f) aid_height_text

0x00af,	// (0x0003187c) mup_volume_cont_pane_ParamLimits

0x00af,	// (0x0003187c) mup_volume_cont_pane

0xc7b1,	// (0x0003df7e) aid_size_cell_pinb

0xc7b1,	// (0x0003df7e) aid_size_list_pinb

0x00af,	// (0x0003187c) mup2_volume_cont_pane_ParamLimits

0x00af,	// (0x0003187c) mup2_volume_cont_pane

0x7e5c,	// (0x00039629) mup2_volume_cont_pane_g1_ParamLimits

0x7e5c,	// (0x00039629) mup2_volume_cont_pane_g1

0x4cd2,	// (0x0003649f) aid_size_cell_touch_ParamLimits

0x4cd2,	// (0x0003649f) aid_size_cell_touch

0x4f7a,	// (0x00036747) touch_pane_ParamLimits

0x4f7a,	// (0x00036747) touch_pane

0xc7b1,	// (0x0003df7e) main_rss2_pane

0x002e,	// (0x000317fb) listscroll_rss2_pane

0x0037,	// (0x00031804) rss2_navigation_pane

0x003f,	// (0x0003180c) list_rss2_pane

0xd8e5,	// (0x0003f0b2) scroll_pane_cp22

0x0047,	// (0x00031814) rss2_navigation_pane_g1

0x0050,	// (0x0003181d) rss2_navigation_pane_g2

0x0058,	// (0x00031825) rss2_navigation_pane_g3

0x0002,

0xf612,	// (0x00040ddf) rss2_navigation_pane_g

0x0060,	// (0x0003182d) rss2_navigation_pane_t1

0x7e72,	// (0x0003963f) rss2_list_single_pane_ParamLimits

0x7e72,	// (0x0003963f) rss2_list_single_pane

0x006e,	// (0x0003183b) rss2_list_single_pane_t2

0x007c,	// (0x00031849) rss2_list_single_pane_t3_ParamLimits

0x007c,	// (0x00031849) rss2_list_single_pane_t3

0x0099,	// (0x00031866) rss2_list_single_pane_t4

0x6b71,	// (0x0003833e) smil_status_pane_g1

0xce59,	// (0x0003e626) main_image2_pane_ParamLimits

0xce59,	// (0x0003e626) main_image2_pane

0xcec0,	// (0x0003e68d) main_camera2_pane_g9_ParamLimits

0xcec0,	// (0x0003e68d) main_camera2_pane_g9

0xd0de,	// (0x0003e8ab) main_camera2_pane_t5_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t5

0x7dab,	// (0x00039578) main_camera2_pane_t6_ParamLimits

0x7dab,	// (0x00039578) main_camera2_pane_t6

0x7ea6,	// (0x00039673) main_image2_pane_g1_ParamLimits

0x7ea6,	// (0x00039673) main_image2_pane_g1

0x7574,	// (0x00038d41) smil2_video_pane_ParamLimits

0x7574,	// (0x00038d41) smil2_video_pane

0x3f60,	// (0x0003572d) aid_zoom_text_primary_cp

0x4f23,	// (0x000366f0) popup_preview_fixed_window

0xd1d1,	// (0x0003e99e) im_reading_pane_g1

0x7d9d,	// (0x0003956a) cams2_bc_adjust_pane_cp_ParamLimits

0x7d9d,	// (0x0003956a) cams2_bc_adjust_pane_cp

0xc7bb,	// (0x0003df88) cams2_bc_adjust_pane_ParamLimits

0xc7bb,	// (0x0003df88) cams2_bc_adjust_pane

0xd10c,	// (0x0003e8d9) cams2_bc_adjust_pane_g1

0xc7b1,	// (0x0003df7e) cams2_slider_pane

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g1

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g2

0x0006,

0xf619,	// (0x00040de6) cams2_slider_pane_g

0x504b,	// (0x00036818) calc_display_pane_ParamLimits

0x5069,	// (0x00036836) calc_paper_pane_ParamLimits

0x5085,	// (0x00036852) grid_calc_pane_ParamLimits

0x6d77,	// (0x00038544) popup_clock_digital_window_t1_ParamLimits

0xdd7f,	// (0x0003f54c) main_image_pane_t1

0x5031,	// (0x000367fe) aid_size_cell_calc_ParamLimits

0x5031,	// (0x000367fe) aid_size_cell_calc

0x7a96,	// (0x00039263) popup_blid_sat_info2_window_ParamLimits

0x7a96,	// (0x00039263) popup_blid_sat_info2_window

0x00a7,	// (0x00031874) aid_size_cell_blid

0x00af,	// (0x0003187c) bg_popup_window_pane_cp07

0x00d2,	// (0x0003189f) grid_popup_blid_pane

0x00dc,	// (0x000318a9) heading_pane_cp05_ParamLimits

0x00dc,	// (0x000318a9) heading_pane_cp05

0x01a6,	// (0x00031973) cell_popup_blid_pane_ParamLimits

0x01a6,	// (0x00031973) cell_popup_blid_pane

0x01ca,	// (0x00031997) cell_popup_blid_pane_g1

0x01d2,	// (0x0003199f) cell_popup_blid_pane_t1

0x00af,	// (0x0003187c) mup2_indicator_pane_ParamLimits

0x00af,	// (0x0003187c) mup2_indicator_pane

0xc7b1,	// (0x0003df7e) mup2_visualizer_osc_pane

0xefb6,	// (0x00040783) mup2_visualizer_spec_pane_ParamLimits

0xefb6,	// (0x00040783) mup2_visualizer_spec_pane

0xc7b1,	// (0x0003df7e) mup2_spec_half_pane

0xc7b1,	// (0x0003df7e) mup2_spec_half_pane_cp

0x01e0,	// (0x000319ad) mup2_spec_bar_pane_ParamLimits

0x01e0,	// (0x000319ad) mup2_spec_bar_pane

0xd10c,	// (0x0003e8d9) mup2_spec_bar_pane_g1

0x01ff,	// (0x000319cc) mup2_spec_bar_pane_g2

0x0001,

0xf63f,	// (0x00040e0c) mup2_spec_bar_pane_g

0xc7b1,	// (0x0003df7e) mup2_osc_middle_pane

0xd10c,	// (0x0003e8d9) mup2_visualizer_osc_pane_g1

0xc7e9,	// (0x0003dfb6) popup_number_entry_window_t1_ParamLimits

0xc7fc,	// (0x0003dfc9) popup_number_entry_window_t2_ParamLimits

0xc80e,	// (0x0003dfdb) popup_number_entry_window_t3_ParamLimits

0x4fd1,	// (0x0003679e) popup_number_entry_window_t5_ParamLimits

0x4fd1,	// (0x0003679e) popup_number_entry_window_t5

0xf06b,	// (0x00040838) popup_number_entry_window_t_ParamLimits

0xc820,	// (0x0003dfed) text_title_cp2_ParamLimits

0x7269,	// (0x00038a36) aid_hotspot_pointer_text2_pane

0x7303,	// (0x00038ad0) main_viewer_pane_g9_ParamLimits

0x7303,	// (0x00038ad0) main_viewer_pane_g9

0xd40a,	// (0x0003ebd7) cale_month_pane_t1_ParamLimits

0xd447,	// (0x0003ec14) bg_cale_pane_ParamLimits

0xd45f,	// (0x0003ec2c) list_cale_pane_ParamLimits

0xd470,	// (0x0003ec3d) listscroll_cale_day_pane_t1

0xd482,	// (0x0003ec4f) scroll_pane_cp09_ParamLimits

0x7028,	// (0x000387f5) main_mup_eq_pane_t1_ParamLimits

0x7028,	// (0x000387f5) main_mup_eq_pane_t1

0x7042,	// (0x0003880f) main_mup_eq_pane_t2_ParamLimits

0x7042,	// (0x0003880f) main_mup_eq_pane_t2

0x705a,	// (0x00038827) main_mup_eq_pane_t3_ParamLimits

0x705a,	// (0x00038827) main_mup_eq_pane_t3

0x7072,	// (0x0003883f) main_mup_eq_pane_t4_ParamLimits

0x7072,	// (0x0003883f) main_mup_eq_pane_t4

0x708a,	// (0x00038857) main_mup_eq_pane_t5_ParamLimits

0x708a,	// (0x00038857) main_mup_eq_pane_t5

0x70a2,	// (0x0003886f) main_mup_eq_pane_t6_ParamLimits

0x70a2,	// (0x0003886f) main_mup_eq_pane_t6

0x70b6,	// (0x00038883) main_mup_eq_pane_t7_ParamLimits

0x70b6,	// (0x00038883) main_mup_eq_pane_t7

0x70ca,	// (0x00038897) main_mup_eq_pane_t8_ParamLimits

0x70ca,	// (0x00038897) main_mup_eq_pane_t8

0x70e0,	// (0x000388ad) main_mup_eq_pane_t9_ParamLimits

0x70e0,	// (0x000388ad) main_mup_eq_pane_t9

0x70f8,	// (0x000388c5) main_mup_eq_pane_t10_ParamLimits

0x70f8,	// (0x000388c5) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00040b9c) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00040b9c) main_mup_eq_pane_t

0x71b5,	// (0x00038982) mup_equalizer_pane_cp5_ParamLimits

0x71cb,	// (0x00038998) mup_equalizer_pane_cp6_ParamLimits

0x71e3,	// (0x000389b0) mup_equalizer_pane_cp7_ParamLimits

0xc7b1,	// (0x0003df7e) main_gallery_pane

0xef54,	// (0x00040721) smil2_volume_pane

0xef5c,	// (0x00040729) smil_status_volume_pane_g1_ParamLimits

0xef6f,	// (0x0004073c) smil_status_volume_pane_g2_ParamLimits

0x7c50,	// (0x0003941d) smil_status_volume_pane_g3_ParamLimits

0xf598,	// (0x00040d65) smil_status_volume_pane_g_ParamLimits

0x00af,	// (0x0003187c) bg_popup_window_pane_cp07_ParamLimits

0x00bd,	// (0x0003188a) blid_firmament_pane

0xc7bb,	// (0x0003df88) aid_size_cell_gallery_ParamLimits

0xc7bb,	// (0x0003df88) aid_size_cell_gallery

0xc7bb,	// (0x0003df88) grid_gallery_pane_ParamLimits

0xc7bb,	// (0x0003df88) grid_gallery_pane

0xe77b,	// (0x0003ff48) cell_gallery_pane_ParamLimits

0xe77b,	// (0x0003ff48) cell_gallery_pane

0xce59,	// (0x0003e626) bg_cell_gallery_focus_pane_ParamLimits

0xce59,	// (0x0003e626) bg_cell_gallery_focus_pane

0xceb2,	// (0x0003e67f) cell_gallery_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) cell_gallery_pane_g1

0xceb2,	// (0x0003e67f) cell_gallery_pane_g2_ParamLimits

0xceb2,	// (0x0003e67f) cell_gallery_pane_g2

0xceb2,	// (0x0003e67f) cell_gallery_pane_g3_ParamLimits

0xceb2,	// (0x0003e67f) cell_gallery_pane_g3

0xcec0,	// (0x0003e68d) cell_gallery_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) cell_gallery_pane_g4

0x0003,

0xf644,	// (0x00040e11) cell_gallery_pane_g_ParamLimits

0xf644,	// (0x00040e11) cell_gallery_pane_g

0x0209,	// (0x000319d6) bg_cell_gallery_focus_pane_g1

0x0211,	// (0x000319de) bg_cell_gallery_focus_pane_g2

0x0219,	// (0x000319e6) bg_cell_gallery_focus_pane_g3

0x0221,	// (0x000319ee) bg_cell_gallery_focus_pane_g4

0x0229,	// (0x000319f6) bg_cell_gallery_focus_pane_g5

0x0231,	// (0x000319fe) bg_cell_gallery_focus_pane_g6

0x0239,	// (0x00031a06) bg_cell_gallery_focus_pane_g7

0x0241,	// (0x00031a0e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64d,	// (0x00040e1a) bg_cell_gallery_focus_pane_g

0x0249,	// (0x00031a16) aid_firma_cardinal

0x025d,	// (0x00031a2a) blid_firmament_pane_t1

0x0274,	// (0x00031a41) blid_firmament_pane_t2

0x028b,	// (0x00031a58) blid_firmament_pane_t3

0x02a2,	// (0x00031a6f) blid_firmament_pane_t4

0x0003,

0xf65e,	// (0x00040e2b) blid_firmament_pane_t

0x02b9,	// (0x00031a86) blid_sat_info_pane

0xd10c,	// (0x0003e8d9) blid_sat_info_pane_g1

0xd10c,	// (0x0003e8d9) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) blid_sat_info_pane_g

0x02c9,	// (0x00031a96) blid_sat_info_pane_t1

0x02d7,	// (0x00031aa4) smil2_volume_content_pane

0x02e0,	// (0x00031aad) smil2_volume_pane_g1

0xe7ab,	// (0x0003ff78) smil2_volume_content_pane_g1

0x02e8,	// (0x00031ab5) smil2_volume_content_pane_g2

0x02f1,	// (0x00031abe) smil2_volume_content_pane_g3

0x02fa,	// (0x00031ac7) smil2_volume_content_pane_g4

0x0303,	// (0x00031ad0) smil2_volume_content_pane_g5

0x030c,	// (0x00031ad9) smil2_volume_content_pane_g6

0x0315,	// (0x00031ae2) smil2_volume_content_pane_g7

0x031e,	// (0x00031aeb) smil2_volume_content_pane_g8

0x0327,	// (0x00031af4) smil2_volume_content_pane_g9

0x0330,	// (0x00031afd) smil2_volume_content_pane_g10

0x0009,

0xf667,	// (0x00040e34) smil2_volume_content_pane_g

0x5691,	// (0x00036e5e) cale_week_day_heading_pane_t1_ParamLimits

0x56ac,	// (0x00036e79) cale_week_day_heading_pane_t2_ParamLimits

0x56c7,	// (0x00036e94) cale_week_day_heading_pane_t3_ParamLimits

0x56e2,	// (0x00036eaf) cale_week_day_heading_pane_t4_ParamLimits

0x56fd,	// (0x00036eca) cale_week_day_heading_pane_t5_ParamLimits

0x5718,	// (0x00036ee5) cale_week_day_heading_pane_t6_ParamLimits

0x5733,	// (0x00036f00) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0004093f) cale_week_day_heading_pane_t_ParamLimits

0xd084,	// (0x0003e851) bg_cale_side_pane_ParamLimits

0x574e,	// (0x00036f1b) cale_week_time_pane_t1_ParamLimits

0x5768,	// (0x00036f35) cale_week_time_pane_t2_ParamLimits

0x5782,	// (0x00036f4f) cale_week_time_pane_t3_ParamLimits

0x579c,	// (0x00036f69) cale_week_time_pane_t4_ParamLimits

0x57b6,	// (0x00036f83) cale_week_time_pane_t5_ParamLimits

0x57d0,	// (0x00036f9d) cale_week_time_pane_t6_ParamLimits

0x57f0,	// (0x00036fbd) cale_week_time_pane_t7_ParamLimits

0x5812,	// (0x00036fdf) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0004094e) cale_week_time_pane_t_ParamLimits

0x5836,	// (0x00037003) cell_cale_week_pane_g2_ParamLimits

0xd084,	// (0x0003e851) bg_cale_side_pane_cp01_ParamLimits

0x6960,	// (0x0003812d) cale_month_week_pane_t1_ParamLimits

0x6979,	// (0x00038146) cale_month_week_pane_t2_ParamLimits

0x6992,	// (0x0003815f) cale_month_week_pane_t3_ParamLimits

0x69ab,	// (0x00038178) cale_month_week_pane_t4_ParamLimits

0x69c6,	// (0x00038193) cale_month_week_pane_t5_ParamLimits

0x69e7,	// (0x000381b4) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x00040a1c) cale_month_week_pane_t_ParamLimits

0x6b2e,	// (0x000382fb) cell_cale_month_pane_g1_ParamLimits

0xc7b1,	// (0x0003df7e) main_cale_event_viewer_pane

0xc7b1,	// (0x0003df7e) listscroll_cale_event_viewer_pane

0x0339,	// (0x00031b06) list_cale_ev_pane

0x0341,	// (0x00031b0e) scroll_pane_cp023

0x034d,	// (0x00031b1a) field_cale_ev_pane_ParamLimits

0x034d,	// (0x00031b1a) field_cale_ev_pane

0x036b,	// (0x00031b38) field_cale_ev_content_pane_ParamLimits

0x036b,	// (0x00031b38) field_cale_ev_content_pane

0x0377,	// (0x00031b44) field_cale_ev_pane_g1_ParamLimits

0x0377,	// (0x00031b44) field_cale_ev_pane_g1

0x0383,	// (0x00031b50) field_cale_ev_pane_g2_ParamLimits

0x0383,	// (0x00031b50) field_cale_ev_pane_g2

0x039b,	// (0x00031b68) field_cale_ev_pane_g3_ParamLimits

0x039b,	// (0x00031b68) field_cale_ev_pane_g3

0x0002,

0xf67c,	// (0x00040e49) field_cale_ev_pane_g_ParamLimits

0xf67c,	// (0x00040e49) field_cale_ev_pane_g

0x03b3,	// (0x00031b80) field_cale_ev_pane_t1_ParamLimits

0x03b3,	// (0x00031b80) field_cale_ev_pane_t1

0x03ca,	// (0x00031b97) field_cale_ev_content_pane_t1_ParamLimits

0x03ca,	// (0x00031b97) field_cale_ev_content_pane_t1

0xdc65,	// (0x0003f432) bg_button_pane_cp01

0x541c,	// (0x00036be9) listscroll_cale_week_pane_ParamLimits

0xd02f,	// (0x0003e7fc) popup_toolbar_window_cp01

0xd055,	// (0x0003e822) listscroll_cale_week_pane_t1_ParamLimits

0x541c,	// (0x00036be9) listscroll_cale_day_pane_ParamLimits

0xd02f,	// (0x0003e7fc) popup_toolbar_window_cp02

0xd470,	// (0x0003ec3d) listscroll_cale_day_pane_t1_ParamLimits

0x541c,	// (0x00036be9) main_cale_month_pane_ParamLimits

0x7b99,	// (0x00039366) popup_toolbar_window_cp03_ParamLimits

0x7b99,	// (0x00039366) popup_toolbar_window_cp03

0x748a,	// (0x00038c57) main_image_pane_g2_ParamLimits

0x748a,	// (0x00038c57) main_image_pane_g2

0x7496,	// (0x00038c63) main_image_pane_g3_ParamLimits

0x7496,	// (0x00038c63) main_image_pane_g3

0x0002,

0xf461,	// (0x00040c2e) main_image_pane_g_ParamLimits

0xf461,	// (0x00040c2e) main_image_pane_g

0xdd7f,	// (0x0003f54c) main_image_pane_t1_ParamLimits

0x74a2,	// (0x00038c6f) main_image_pane_t2_ParamLimits

0x74a2,	// (0x00038c6f) main_image_pane_t2

0x74b4,	// (0x00038c81) main_image_pane_t3_ParamLimits

0x74b4,	// (0x00038c81) main_image_pane_t3

0x74c6,	// (0x00038c93) main_image_pane_t4_ParamLimits

0x74c6,	// (0x00038c93) main_image_pane_t4

0x0003,

0xf468,	// (0x00040c35) main_image_pane_t_ParamLimits

0xf468,	// (0x00040c35) main_image_pane_t

0x74d8,	// (0x00038ca5) popup_image_details_window_cp01

0x74e2,	// (0x00038caf) popup_toobar_trans_pane_cp01_ParamLimits

0x74e2,	// (0x00038caf) popup_toobar_trans_pane_cp01

0x7ae9,	// (0x000392b6) popup_image_details_window_ParamLimits

0x7ae9,	// (0x000392b6) popup_image_details_window

0x7af7,	// (0x000392c4) popup_image_focus_window

0xc7bb,	// (0x0003df88) camera2_autofocus_pane_ParamLimits

0xc7bb,	// (0x0003df88) camera2_autofocus_pane

0xc7b1,	// (0x0003df7e) bg_popup_sub_pane_cp06

0x03e8,	// (0x00031bb5) popup_image_focus_window_g1

0x03f0,	// (0x00031bbd) popup_image_focus_window_g2

0x03f8,	// (0x00031bc5) popup_image_focus_window_g3

0x0400,	// (0x00031bcd) popup_image_focus_window_g4

0x0003,

0xf683,	// (0x00040e50) popup_image_focus_window_g

0x0408,	// (0x00031bd5) popup_image_focus_window_t1

0x0416,	// (0x00031be3) popup_image_focus_window_t2

0x0426,	// (0x00031bf3) popup_image_focus_window_t3

0x0002,

0xf68c,	// (0x00040e59) popup_image_focus_window_t

0xceb2,	// (0x0003e67f) camera2_autofocus_pane_g1

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp01

0x0434,	// (0x00031c01) popup_image_details_window_g1

0x0447,	// (0x00031c14) popup_image_details_window_g2

0x0002,

0xf69e,	// (0x00040e6b) popup_image_details_window_g

0x0470,	// (0x00031c3d) popup_image_details_window_t1

0x0482,	// (0x00031c4f) popup_image_details_window_t2

0x049b,	// (0x00031c68) popup_image_details_window_t3

0x04af,	// (0x00031c7c) popup_image_details_window_t4

0x04ca,	// (0x00031c97) popup_image_details_window_t5

0x0004,

0xf6a5,	// (0x00040e72) popup_image_details_window_t

0xcf10,	// (0x0003e6dd) bg_calc_paper_pane_ParamLimits

0xc7b1,	// (0x0003df7e) grid_highlight_pane_cp013

0x51a0,	// (0x0003696d) list_calc_pane_ParamLimits

0x51b2,	// (0x0003697f) scroll_pane_cp024

0xcf24,	// (0x0003e6f1) bg_calc_display_pane_ParamLimits

0x51ba,	// (0x00036987) calc_display_pane_t1_ParamLimits

0x51cf,	// (0x0003699c) calc_display_pane_t2_ParamLimits

0x51e4,	// (0x000369b1) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x000408bf) calc_display_pane_t_ParamLimits

0x52be,	// (0x00036a8b) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000408dc) cell_calc_pane_g

0x52c7,	// (0x00036a94) cell_calc_pane_t1

0xcf79,	// (0x0003e746) grid_highlight_pane_cp02_ParamLimits

0xcf8f,	// (0x0003e75c) toolbar_button_pane_cp01_ParamLimits

0xcf8f,	// (0x0003e75c) toolbar_button_pane_cp01

0xddc4,	// (0x0003f591) temp_image_control_pane_ParamLimits

0xddc4,	// (0x0003f591) temp_image_control_pane

0xce59,	// (0x0003e626) main_mp3_pane

0x04e4,	// (0x00031cb1) temp_image_control_pane_g1_ParamLimits

0x04e4,	// (0x00031cb1) temp_image_control_pane_g1

0x04f2,	// (0x00031cbf) temp_image_control_pane_g2_ParamLimits

0x04f2,	// (0x00031cbf) temp_image_control_pane_g2

0x0504,	// (0x00031cd1) temp_image_control_pane_g3_ParamLimits

0x0504,	// (0x00031cd1) temp_image_control_pane_g3

0x7eb2,	// (0x0003967f) temp_image_control_pane_g4_ParamLimits

0x7eb2,	// (0x0003967f) temp_image_control_pane_g4

0x0003,

0xf6b0,	// (0x00040e7d) temp_image_control_pane_g_ParamLimits

0xf6b0,	// (0x00040e7d) temp_image_control_pane_g

0x04e4,	// (0x00031cb1) main_mp3_pane_g1

0x7ec3,	// (0x00039690) main_mp3_pane_g2

0x0007,

0xf6b9,	// (0x00040e86) main_mp3_pane_g

0x0539,	// (0x00031d06) main_mp3_pane_t1

0xcec0,	// (0x0003e68d) main_camera_pane_g8_ParamLimits

0xcec0,	// (0x0003e68d) main_camera_pane_g8

0x59dd,	// (0x000371aa) main_video_pane_g7_ParamLimits

0x59dd,	// (0x000371aa) main_video_pane_g7

0xd0de,	// (0x0003e8ab) main_camera2_pane_t7_ParamLimits

0xd0de,	// (0x0003e8ab) main_camera2_pane_t7

0xd228,	// (0x0003e9f5) scroll_pane_cp025_ParamLimits

0xd228,	// (0x0003e9f5) scroll_pane_cp025

0xd23c,	// (0x0003ea09) scroll_pane_cp026_ParamLimits

0xd23c,	// (0x0003ea09) scroll_pane_cp026

0xd24b,	// (0x0003ea18) wml_content_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_touch_calib_pane

0x7f67,	// (0x00039734) main_touch_calib_pane_g1

0x7f73,	// (0x00039740) main_touch_calib_pane_g2

0x7f7f,	// (0x0003974c) main_touch_calib_pane_g3

0x7f8b,	// (0x00039758) main_touch_calib_pane_g4

0x0003,

0xf6d7,	// (0x00040ea4) main_touch_calib_pane_g

0x7f97,	// (0x00039764) main_touch_calib_pane_t1

0x7fb0,	// (0x0003977d) main_touch_calib_pane_t2

0x0004,

0xf6e0,	// (0x00040ead) main_touch_calib_pane_t

0xd9b4,	// (0x0003f181) mup_progress_pane_cp02

0xd9e9,	// (0x0003f1b6) navi_pane_g1

0xdaa4,	// (0x0003f271) navi_pane_mp_t3

0xce59,	// (0x0003e626) main_mp3_pane_ParamLimits

0x7bd6,	// (0x000393a3) navi_pane_ParamLimits

0x04e4,	// (0x00031cb1) main_mp3_pane_g1_ParamLimits

0x7ec3,	// (0x00039690) main_mp3_pane_g2_ParamLimits

0x7ecf,	// (0x0003969c) main_mp3_pane_g3_ParamLimits

0x7ecf,	// (0x0003969c) main_mp3_pane_g3

0x7edb,	// (0x000396a8) main_mp3_pane_g4_ParamLimits

0x7edb,	// (0x000396a8) main_mp3_pane_g4

0xceb2,	// (0x0003e67f) main_mp3_pane_g5_ParamLimits

0xceb2,	// (0x0003e67f) main_mp3_pane_g5

0x0514,	// (0x00031ce1) main_mp3_pane_g6_ParamLimits

0x0514,	// (0x00031ce1) main_mp3_pane_g6

0x0521,	// (0x00031cee) main_mp3_pane_g7_ParamLimits

0x0521,	// (0x00031cee) main_mp3_pane_g7

0x052d,	// (0x00031cfa) main_mp3_pane_g8_ParamLimits

0x052d,	// (0x00031cfa) main_mp3_pane_g8

0xf6b9,	// (0x00040e86) main_mp3_pane_g_ParamLimits

0x7ee7,	// (0x000396b4) main_mp3_pane_t2

0x7ef7,	// (0x000396c4) main_mp3_pane_t3

0x0547,	// (0x00031d14) main_mp3_pane_t4

0x0555,	// (0x00031d22) main_mp3_pane_t5

0x0005,

0xf6ca,	// (0x00040e97) main_mp3_pane_t

0x0563,	// (0x00031d30) mup_progress_pane_cp01

0x3f60,	// (0x0003572d) aid_zoom_text_secondary2

0x0339,	// (0x00031b06) list_cale_ev2_pane

0x0341,	// (0x00031b0e) scroll_pane_cp023_ParamLimits

0x800b,	// (0x000397d8) field_cale_ev2_pane_ParamLimits

0x800b,	// (0x000397d8) field_cale_ev2_pane

0x4095,	// (0x00035862) field_cale_ev2_pane_g1_ParamLimits

0x4095,	// (0x00035862) field_cale_ev2_pane_g1

0x40a1,	// (0x0003586e) field_cale_ev2_pane_g2_ParamLimits

0x40a1,	// (0x0003586e) field_cale_ev2_pane_g2

0x40b9,	// (0x00035886) field_cale_ev2_pane_g3_ParamLimits

0x40b9,	// (0x00035886) field_cale_ev2_pane_g3

0x0003,

0xf6eb,	// (0x00040eb8) field_cale_ev2_pane_g_ParamLimits

0xf6eb,	// (0x00040eb8) field_cale_ev2_pane_g

0x40dd,	// (0x000358aa) field_cale_ev2_pane_t1_ParamLimits

0x40dd,	// (0x000358aa) field_cale_ev2_pane_t1

0x40f4,	// (0x000358c1) field_cale_ev2_pane_t2_ParamLimits

0x40f4,	// (0x000358c1) field_cale_ev2_pane_t2

0x0001,

0xf6f4,	// (0x00040ec1) field_cale_ev2_pane_t_ParamLimits

0xf6f4,	// (0x00040ec1) field_cale_ev2_pane_t

0x736b,	// (0x00038b38) main_postcard_pane_g5_ParamLimits

0x736b,	// (0x00038b38) main_postcard_pane_g5

0x7379,	// (0x00038b46) main_postcard_pane_g6_ParamLimits

0x7379,	// (0x00038b46) main_postcard_pane_g6

0xc7bb,	// (0x0003df88) camera2_autofocus_pane_cp_ParamLimits

0xc7bb,	// (0x0003df88) camera2_autofocus_pane_cp

0xce59,	// (0x0003e626) main_mup3_pane

0x8074,	// (0x00039841) main_mup3_pane_g1_ParamLimits

0x8074,	// (0x00039841) main_mup3_pane_g1

0x8095,	// (0x00039862) main_mup3_pane_g2_ParamLimits

0x8095,	// (0x00039862) main_mup3_pane_g2

0x810f,	// (0x000398dc) main_mup3_pane_g3_ParamLimits

0x810f,	// (0x000398dc) main_mup3_pane_g3

0x8152,	// (0x0003991f) main_mup3_pane_g4_ParamLimits

0x8152,	// (0x0003991f) main_mup3_pane_g4

0x8195,	// (0x00039962) main_mup3_pane_g5_ParamLimits

0x8195,	// (0x00039962) main_mup3_pane_g5

0x81d8,	// (0x000399a5) main_mup3_pane_g6_ParamLimits

0x81d8,	// (0x000399a5) main_mup3_pane_g6

0xcec0,	// (0x0003e68d) main_mup3_pane_g7_ParamLimits

0xcec0,	// (0x0003e68d) main_mup3_pane_g7

0x0007,

0xf704,	// (0x00040ed1) main_mup3_pane_g_ParamLimits

0xf704,	// (0x00040ed1) main_mup3_pane_g

0x824e,	// (0x00039a1b) main_mup3_pane_t1_ParamLimits

0x824e,	// (0x00039a1b) main_mup3_pane_t1

0x82bd,	// (0x00039a8a) main_mup3_pane_t2_ParamLimits

0x82bd,	// (0x00039a8a) main_mup3_pane_t2

0x8386,	// (0x00039b53) main_mup3_pane_t4_ParamLimits

0x8386,	// (0x00039b53) main_mup3_pane_t4

0x83d4,	// (0x00039ba1) main_mup3_pane_t5_ParamLimits

0x83d4,	// (0x00039ba1) main_mup3_pane_t5

0x8484,	// (0x00039c51) main_mup3_pane_t6_ParamLimits

0x8484,	// (0x00039c51) main_mup3_pane_t6

0x0005,

0xf715,	// (0x00040ee2) main_mup3_pane_t_ParamLimits

0xf715,	// (0x00040ee2) main_mup3_pane_t

0x8530,	// (0x00039cfd) mup3_progress_pane_ParamLimits

0x8530,	// (0x00039cfd) mup3_progress_pane

0x85a4,	// (0x00039d71) popup_mup3_control_window_ParamLimits

0x85a4,	// (0x00039d71) popup_mup3_control_window

0x05df,	// (0x00031dac) popup_mup3_text_window

0x85bd,	// (0x00039d8a) mup3_progress_pane_t1

0x85dc,	// (0x00039da9) mup3_progress_pane_t2

0x05e7,	// (0x00031db4) mup3_progress_pane_t3

0x0002,

0xf722,	// (0x00040eef) mup3_progress_pane_t

0x0604,	// (0x00031dd1) mup_progress_pane_cp03

0xc7b1,	// (0x0003df7e) bg_tb_trans_pane_cp04

0x85fb,	// (0x00039dc8) mup3_volume_pane

0x8603,	// (0x00039dd0) popup_mup3_control_window_g1

0x860c,	// (0x00039dd9) mup3_volume_pane_g1

0x8615,	// (0x00039de2) mup3_volume_pane_g2

0x861e,	// (0x00039deb) mup3_volume_pane_g3

0x0002,

0xf729,	// (0x00040ef6) mup3_volume_pane_g

0xc7b1,	// (0x0003df7e) bg_tb_trans_pane_cp03

0x0614,	// (0x00031de1) popup_mup3_text_window_g1

0x061c,	// (0x00031de9) popup_mup3_text_window_t1

0xcf6c,	// (0x0003e739) list_calc_item_pane_g1_ParamLimits

0x001b,	// (0x000317e8) mup_volume_pane_cp_g1

0x7fc9,	// (0x00039796) main_touch_calib_pane_t3

0x7fdf,	// (0x000397ac) main_touch_calib_pane_t4

0x7ff5,	// (0x000397c2) main_touch_calib_pane_t5

0x4cbe,	// (0x0003648b) aid_cell_size_toolbar2

0x4cc6,	// (0x00036493) aid_popup3_width_pane

0x3f58,	// (0x00035725) aid_zoom_text_msg_primary

0x58df,	// (0x000370ac) vorec_t7

0xcf30,	// (0x0003e6fd) bg_calc_paper_pane_g1_ParamLimits

0xcf3c,	// (0x0003e709) bg_calc_paper_pane_g2_ParamLimits

0xcf48,	// (0x0003e715) bg_calc_paper_pane_g3_ParamLimits

0xcf54,	// (0x0003e721) bg_calc_paper_pane_g4_ParamLimits

0xcf60,	// (0x0003e72d) bg_calc_paper_pane_g5_ParamLimits

0x5223,	// (0x000369f0) bg_calc_paper_pane_g6_ParamLimits

0x5234,	// (0x00036a01) bg_calc_paper_pane_g7_ParamLimits

0x5245,	// (0x00036a12) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x000408c6) bg_calc_paper_pane_g_ParamLimits

0x5256,	// (0x00036a23) calc_bg_paper_pane_g9_ParamLimits

0xc7bb,	// (0x0003df88) image_qvga_pane_ParamLimits

0xc7bb,	// (0x0003df88) image_qvga_pane

0xce37,	// (0x0003e604) bg_popup_sub_pane_cp04_ParamLimits

0xdcfb,	// (0x0003f4c8) popup_mup_playback_window_g1_ParamLimits

0xdd07,	// (0x0003f4d4) popup_mup_playback_window_t1_ParamLimits

0xdd1c,	// (0x0003f4e9) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00040c29) popup_mup_playback_window_t_ParamLimits

0xceb2,	// (0x0003e67f) main_mup2_pane_g3_ParamLimits

0xceb2,	// (0x0003e67f) main_mup2_pane_g3

0x5bc4,	// (0x00037391) popup_toolbar_window_cp04

0xe111,	// (0x0003f8de) popup_call2_audio_second_window_g3_ParamLimits

0xe111,	// (0x0003f8de) popup_call2_audio_second_window_g3

0xe51b,	// (0x0003fce8) popup_call2_audio_first_window_g4_ParamLimits

0xe51b,	// (0x0003fce8) popup_call2_audio_first_window_g4

0xebcb,	// (0x00040398) popup_call2_audio_in_window_g4_ParamLimits

0xebcb,	// (0x00040398) popup_call2_audio_in_window_g4

0x747d,	// (0x00038c4a) aid_area_sk_bg_cut_ParamLimits

0x747d,	// (0x00038c4a) aid_area_sk_bg_cut

0xdd31,	// (0x0003f4fe) aid_area_sk_bg_cut_2_ParamLimits

0xdd31,	// (0x0003f4fe) aid_area_sk_bg_cut_2

0xc7b1,	// (0x0003df7e) aid_placing_details_win

0xc7b1,	// (0x0003df7e) aid_placing_details_win_2

0xceb2,	// (0x0003e67f) camera2_autofocus_pane_g1_ParamLimits

0x4f14,	// (0x000366e1) popup_fixed_preview_cale_window_ParamLimits

0x4f14,	// (0x000366e1) popup_fixed_preview_cale_window

0xdb22,	// (0x0003f2ef) navi_slider_pane_g3

0xdb2b,	// (0x0003f2f8) navi_slider_pane_g4

0xdb34,	// (0x0003f301) navi_slider_pane_g5

0xdb22,	// (0x0003f2ef) navi_slider_pane_g6

0x6ffc,	// (0x000387c9) navi_slider_pane_g7

0xdc32,	// (0x0003f3ff) mup_scale_pane_g3

0xdc3b,	// (0x0003f408) mup_scale_pane_g4

0xdc44,	// (0x0003f411) mup_scale_pane_g5

0x71fb,	// (0x000389c8) mup_scale_pane_g6

0x7204,	// (0x000389d1) mup_scale_pane_g7

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g3

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g4

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g5

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g6

0xd10c,	// (0x0003e8d9) cams2_slider_pane_g7

0xd10c,	// (0x0003e8d9) camera2_autofocus_pane_cp_g1

0xeedb,	// (0x000406a8) bg_popup_preview_window_pane_cp02_ParamLimits

0xeedb,	// (0x000406a8) bg_popup_preview_window_pane_cp02

0x062a,	// (0x00031df7) list_fp_cale_pane_ParamLimits

0x062a,	// (0x00031df7) list_fp_cale_pane

0x0636,	// (0x00031e03) popup_fixed_preview_cale_window_t1_ParamLimits

0x0636,	// (0x00031e03) popup_fixed_preview_cale_window_t1

0x8627,	// (0x00039df4) popup_fixed_preview_cale_window_t2_ParamLimits

0x8627,	// (0x00039df4) popup_fixed_preview_cale_window_t2

0x863c,	// (0x00039e09) popup_fixed_preview_cale_window_t3_ParamLimits

0x863c,	// (0x00039e09) popup_fixed_preview_cale_window_t3

0x0002,

0xf730,	// (0x00040efd) popup_fixed_preview_cale_window_t_ParamLimits

0xf730,	// (0x00040efd) popup_fixed_preview_cale_window_t

0x8651,	// (0x00039e1e) list_single_fp_cale_pane_ParamLimits

0x8651,	// (0x00039e1e) list_single_fp_cale_pane

0x0654,	// (0x00031e21) list_single_fp_cale_pane_g1_ParamLimits

0x0654,	// (0x00031e21) list_single_fp_cale_pane_g1

0x0660,	// (0x00031e2d) list_single_fp_cale_pane_g2_ParamLimits

0x0660,	// (0x00031e2d) list_single_fp_cale_pane_g2

0x0002,

0xf737,	// (0x00040f04) list_single_fp_cale_pane_g_ParamLimits

0xf737,	// (0x00040f04) list_single_fp_cale_pane_g

0x0679,	// (0x00031e46) list_single_fp_cale_pane_t1_ParamLimits

0x0679,	// (0x00031e46) list_single_fp_cale_pane_t1

0x068b,	// (0x00031e58) list_single_fp_cale_pane_t2_ParamLimits

0x068b,	// (0x00031e58) list_single_fp_cale_pane_t2

0x0001,

0xf73e,	// (0x00040f0b) list_single_fp_cale_pane_t_ParamLimits

0xf73e,	// (0x00040f0b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xc7b1,	// (0x0003df7e) main_dialer_pane

0xc7b1,	// (0x0003df7e) aid_cell_size_keypad

0xc7b1,	// (0x0003df7e) dialer_ne_pane

0xc7b1,	// (0x0003df7e) grid_dialer_command_1_pane

0xc7b1,	// (0x0003df7e) grid_dialer_command_2_pane

0xc7b1,	// (0x0003df7e) grid_dialer_keypad_pane

0x00af,	// (0x0003187c) bg_popup_call_pane_cp06_ParamLimits

0x00af,	// (0x0003187c) bg_popup_call_pane_cp06

0x00af,	// (0x0003187c) dialer_ne_clear_pane_ParamLimits

0x00af,	// (0x0003187c) dialer_ne_clear_pane

0xd10c,	// (0x0003e8d9) dialer_ne_pane_g1

0xd0de,	// (0x0003e8ab) dialer_ne_pane_t1_ParamLimits

0xd0de,	// (0x0003e8ab) dialer_ne_pane_t1

0x08d4,	// (0x000320a1) dialer_ne_pane_t2_ParamLimits

0x08d4,	// (0x000320a1) dialer_ne_pane_t2

0x8664,	// (0x00039e31) dialer_ne_pane_t3_ParamLimits

0x8664,	// (0x00039e31) dialer_ne_pane_t3

0x0002,

0xf743,	// (0x00040f10) dialer_ne_pane_t_ParamLimits

0xf743,	// (0x00040f10) dialer_ne_pane_t

0x8664,	// (0x00039e31) dialer_ne_pane_t3_copy1_ParamLimits

0x8664,	// (0x00039e31) dialer_ne_pane_t3_copy1

0x06be,	// (0x00031e8b) cell_dialer_keypad_pane_ParamLimits

0x06be,	// (0x00031e8b) cell_dialer_keypad_pane

0xce59,	// (0x0003e626) cell_dialer_command_1_pane_ParamLimits

0xce59,	// (0x0003e626) cell_dialer_command_1_pane

0x06d5,	// (0x00031ea2) cell_dialer_command_2_pane_ParamLimits

0x06d5,	// (0x00031ea2) cell_dialer_command_2_pane

0xce59,	// (0x0003e626) bg_button_pane_cp02_ParamLimits

0xce59,	// (0x0003e626) bg_button_pane_cp02

0xceb2,	// (0x0003e67f) cell_dialer_keypad_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) cell_dialer_keypad_pane_g1

0xce59,	// (0x0003e626) bg_button_pane_cp03_ParamLimits

0xce59,	// (0x0003e626) bg_button_pane_cp03

0xceb2,	// (0x0003e67f) cell_dialer_command_1_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) cell_dialer_command_1_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp04

0xd10c,	// (0x0003e8d9) cell_dialer_command_2_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp06

0xd10c,	// (0x0003e8d9) dialer_ne_clear_pane_g1

0xd9f5,	// (0x0003f1c2) navi_pane_g2

0xda23,	// (0x0003f1f0) navi_pane_g3

0x0002,

0xf35f,	// (0x00040b2c) navi_pane_g

0xdab2,	// (0x0003f27f) navi_pane_mv_g2

0xdad9,	// (0x0003f2a6) navi_pane_mv_g5

0x6fc7,	// (0x00038794) navi_pane_mv_t1

0xcf24,	// (0x0003e6f1) main_clock2_pane

0xc7bb,	// (0x0003df88) main_clock2_list_pane_ParamLimits

0xc7bb,	// (0x0003df88) main_clock2_list_pane

0x86da,	// (0x00039ea7) main_clock2_pane_t1_ParamLimits

0x86da,	// (0x00039ea7) main_clock2_pane_t1

0x8708,	// (0x00039ed5) main_clock2_pane_t2_ParamLimits

0x8708,	// (0x00039ed5) main_clock2_pane_t2

0x0004,

0xf74f,	// (0x00040f1c) main_clock2_pane_t_ParamLimits

0xf74f,	// (0x00040f1c) main_clock2_pane_t

0x876d,	// (0x00039f3a) popup_clock_analogue_window_cp03_ParamLimits

0x876d,	// (0x00039f3a) popup_clock_analogue_window_cp03

0x878b,	// (0x00039f58) popup_clock_digital_window_cp02_ParamLimits

0x878b,	// (0x00039f58) popup_clock_digital_window_cp02

0x8800,	// (0x00039fcd) main_clock2_list_single_pane_ParamLimits

0x8800,	// (0x00039fcd) main_clock2_list_single_pane

0xd0d6,	// (0x0003e8a3) list_highlight_pane_cp05

0x0718,	// (0x00031ee5) main_clock2_list_single_pane_t1

0x5bc4,	// (0x00037391) popup_toolbar_window_cp04_ParamLimits

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g2

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g3_ParamLimits

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g3

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g4

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g5_ParamLimits

0xcec0,	// (0x0003e68d) camera2_autofocus_pane_g5

0x0004,

0xf693,	// (0x00040e60) camera2_autofocus_pane_g_ParamLimits

0xf693,	// (0x00040e60) camera2_autofocus_pane_g

0x8035,	// (0x00039802) camera2_autofocus_pane_cp_g2

0x803d,	// (0x0003980a) camera2_autofocus_pane_cp_g3

0x8045,	// (0x00039812) camera2_autofocus_pane_cp_g4

0x804d,	// (0x0003981a) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f9,	// (0x00040ec6) camera2_autofocus_pane_cp_g

0xc7b1,	// (0x0003df7e) popup_dialer_spcha_window

0xc7b1,	// (0x0003df7e) bg_popup_sub_pane_cp07

0xc7b1,	// (0x0003df7e) list_spcha_pane

0x0726,	// (0x00031ef3) list_single_spcha_pane_ParamLimits

0x0726,	// (0x00031ef3) list_single_spcha_pane

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp06

0xd647,	// (0x0003ee14) list_single_spcha_pane_t1

0xe975,	// (0x00040142) popup_call2_audio_out_window_g4_ParamLimits

0xe975,	// (0x00040142) popup_call2_audio_out_window_g4

0xc7b1,	// (0x0003df7e) main_imed2_pane

0x7aff,	// (0x000392cc) popup_imed_adjust2_window

0x7b12,	// (0x000392df) popup_imed_trans_window_ParamLimits

0x7b12,	// (0x000392df) popup_imed_trans_window

0x0108,	// (0x000318d5) popup_blid_sat_info2_window_t1

0x0116,	// (0x000318e3) popup_blid_sat_info2_window_t2

0x000a,

0xf628,	// (0x00040df5) popup_blid_sat_info2_window_t

0x88b5,	// (0x0003a082) aid_size_cell_colour_35

0x88cf,	// (0x0003a09c) aid_size_cell_colour_112

0x88e6,	// (0x0003a0b3) aid_size_cell_effect

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp02

0xe7b4,	// (0x0003ff81) heading_imed_pane

0x8900,	// (0x0003a0cd) listscroll_imed_pane

0x0738,	// (0x00031f05) heading_imed_pane_g1

0x0740,	// (0x00031f0d) heading_imed_pane_t1

0x074e,	// (0x00031f1b) grid_imed_colour_35_pane_ParamLimits

0x074e,	// (0x00031f1b) grid_imed_colour_35_pane

0x890c,	// (0x0003a0d9) grid_imed_effect_pane

0x0766,	// (0x00031f33) list_imed_aspect_pane

0x891c,	// (0x0003a0e9) scroll_pane_cp027_ParamLimits

0x891c,	// (0x0003a0e9) scroll_pane_cp027

0x8928,	// (0x0003a0f5) cell_imed_effect_pane_ParamLimits

0x8928,	// (0x0003a0f5) cell_imed_effect_pane

0x076e,	// (0x00031f3b) cell_imed_colour_pane_ParamLimits

0x076e,	// (0x00031f3b) cell_imed_colour_pane

0x07b0,	// (0x00031f7d) cell_imed_colour_pane_g1_ParamLimits

0x07b0,	// (0x00031f7d) cell_imed_colour_pane_g1

0x07c1,	// (0x00031f8e) hgihlgiht_grid_pane_cp016_ParamLimits

0x07c1,	// (0x00031f8e) hgihlgiht_grid_pane_cp016

0x8940,	// (0x0003a10d) cell_imed_effect_pane_g1

0x8948,	// (0x0003a115) grid_highlight_pane_cp017

0x07d2,	// (0x00031f9f) list_imed_single_pane_ParamLimits

0x07d2,	// (0x00031f9f) list_imed_single_pane

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp07

0x07e7,	// (0x00031fb4) list_imed_aspect_pane_comp1_t1

0xe77b,	// (0x0003ff48) bg_tb_trans_pane_cp05

0x0809,	// (0x00031fd6) popup_imed_adjust2_window_g1

0x0830,	// (0x00031ffd) popup_imed_adjust2_window_t1

0x0848,	// (0x00032015) slider_imed_adjust_pane

0x085c,	// (0x00032029) slider_imed_adjust_pane_g1

0x086c,	// (0x00032039) slider_imed_adjust_pane_g2

0x087c,	// (0x00032049) slider_imed_adjust_pane_g3

0x088d,	// (0x0003205a) slider_imed_adjust_pane_g4

0x0003,

0xf76c,	// (0x00040f39) slider_imed_adjust_pane_g

0x8951,	// (0x0003a11e) aid_size_cell_clipart2

0x895d,	// (0x0003a12a) grid_imed_clipart_pane

0x089e,	// (0x0003206b) scroll_pane_cp031

0x8967,	// (0x0003a134) cell_imed_clipart_pane_ParamLimits

0x8967,	// (0x0003a134) cell_imed_clipart_pane

0x898a,	// (0x0003a157) cell_imed_clipart_pane_g1

0xc7b1,	// (0x0003df7e) grid_highlight_pane_cp014

0x86bc,	// (0x00039e89) main_clock2_pane_g1_ParamLimits

0x86bc,	// (0x00039e89) main_clock2_pane_g1

0x87a7,	// (0x00039f74) aid_call2_pane_cp10

0x87b9,	// (0x00039f86) aid_call_pane_cp10

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g1

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g2

0x87cb,	// (0x00039f98) popup_clock_analogue_window_cp10_g3

0x87cb,	// (0x00039f98) popup_clock_analogue_window_cp10_g4

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75a,	// (0x00040f27) popup_clock_analogue_window_cp10_g

0x87e1,	// (0x00039fae) popup_clock_analogue_window_cp10_t1

0x8812,	// (0x00039fdf) clock_digital_number_pane_cp10_ParamLimits

0x8812,	// (0x00039fdf) clock_digital_number_pane_cp10

0x882c,	// (0x00039ff9) clock_digital_number_pane_cp11_ParamLimits

0x882c,	// (0x00039ff9) clock_digital_number_pane_cp11

0x8846,	// (0x0003a013) clock_digital_number_pane_cp12_ParamLimits

0x8846,	// (0x0003a013) clock_digital_number_pane_cp12

0x8860,	// (0x0003a02d) clock_digital_number_pane_cp13_ParamLimits

0x8860,	// (0x0003a02d) clock_digital_number_pane_cp13

0x887a,	// (0x0003a047) clock_digital_separator_pane_cp10_ParamLimits

0x887a,	// (0x0003a047) clock_digital_separator_pane_cp10

0x8894,	// (0x0003a061) popup_clock_digital_window_cp02_t1_ParamLimits

0x8894,	// (0x0003a061) popup_clock_digital_window_cp02_t1

0xce2f,	// (0x0003e5fc) clock_digital_number_pane_cp10_g1

0xce2f,	// (0x0003e5fc) clock_digital_number_pane_cp10_g2

0x0001,

0xf775,	// (0x00040f42) clock_digital_number_pane_cp10_g

0xce2f,	// (0x0003e5fc) clock_digital_separator_pane_cp10_g1

0xce2f,	// (0x0003e5fc) clock_digital_separator_pane_g2_cp10

0xdae1,	// (0x0003f2ae) navi_pane_vded_g4

0xdaea,	// (0x0003f2b7) navi_pane_vded_g5

0xdaf3,	// (0x0003f2c0) navi_pane_vded_t1

0xc7b1,	// (0x0003df7e) main_vded_pane

0x8993,	// (0x0003a160) main_vded_pane_g1

0x899f,	// (0x0003a16c) main_vded_pane_g2

0x89a9,	// (0x0003a176) main_vded_pane_g3

0x0002,

0xf77a,	// (0x00040f47) main_vded_pane_g

0x89b3,	// (0x0003a180) main_vded_pane_t1

0x89c1,	// (0x0003a18e) main_vded_pane_t2

0x0001,

0xf781,	// (0x00040f4e) main_vded_pane_t

0x89cf,	// (0x0003a19c) vded_slider_pane

0x89d9,	// (0x0003a1a6) vded_video_pane

0x08a6,	// (0x00032073) vded_video_pane_g1

0x89e3,	// (0x0003a1b0) vded_video_pane_g2

0xd10c,	// (0x0003e8d9) vded_video_pane_g3

0x0002,

0xf786,	// (0x00040f53) vded_video_pane_g

0x08b0,	// (0x0003207d) vded_slider_pane_g1

0x001b,	// (0x000317e8) vded_slider_pane_g2

0x08b9,	// (0x00032086) vded_slider_pane_g3

0x08c2,	// (0x0003208f) vded_slider_pane_g4

0x08cb,	// (0x00032098) vded_slider_pane_g5

0x0004,

0xf78d,	// (0x00040f5a) vded_slider_pane_g

0x8596,	// (0x00039d63) mup3_rocker_pane_ParamLimits

0x8596,	// (0x00039d63) mup3_rocker_pane

0x89ec,	// (0x0003a1b9) mup3_control_keys_pane_g1

0x89f4,	// (0x0003a1c1) mup3_control_keys_pane_g2

0x89fc,	// (0x0003a1c9) mup3_control_keys_pane_g3

0x8a04,	// (0x0003a1d1) mup3_control_keys_pane_g4

0x0003,

0xf798,	// (0x00040f65) mup3_control_keys_pane_g

0x4f3c,	// (0x00036709) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4f3c,	// (0x00036709) popup_toolbar2_fixed_window_cp01

0x85b0,	// (0x00039d7d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x85b0,	// (0x00039d7d) popup_toolbar2_fixed_window_cp02

0xe283,	// (0x0003fa50) popup_call2_audio_second_window_t4_ParamLimits

0xe283,	// (0x0003fa50) popup_call2_audio_second_window_t4

0xe7f6,	// (0x0003ffc3) popup_call2_audio_first_window_t6_ParamLimits

0xe7f6,	// (0x0003ffc3) popup_call2_audio_first_window_t6

0xea78,	// (0x00040245) popup_call2_audio_out_window_t6_ParamLimits

0xea78,	// (0x00040245) popup_call2_audio_out_window_t6

0xc7b1,	// (0x0003df7e) main_vitu_pane

0xc7bb,	// (0x0003df88) aid_size_cell_itu_ParamLimits

0xc7bb,	// (0x0003df88) aid_size_cell_itu

0xc7bb,	// (0x0003df88) bg_popup_window_pane_cp08_ParamLimits

0xc7bb,	// (0x0003df88) bg_popup_window_pane_cp08

0xc7bb,	// (0x0003df88) field_vitu_entry_pane_ParamLimits

0xc7bb,	// (0x0003df88) field_vitu_entry_pane

0xc7bb,	// (0x0003df88) grid_vitu_function_pane_ParamLimits

0xc7bb,	// (0x0003df88) grid_vitu_function_pane

0xc7bb,	// (0x0003df88) grid_vitu_itu_pane_ParamLimits

0xc7bb,	// (0x0003df88) grid_vitu_itu_pane

0xc7bb,	// (0x0003df88) cell_vitu_itu_pane_ParamLimits

0xc7bb,	// (0x0003df88) cell_vitu_itu_pane

0xc7bb,	// (0x0003df88) cell_vitu_function_pane_ParamLimits

0xc7bb,	// (0x0003df88) cell_vitu_function_pane

0xce59,	// (0x0003e626) bg_popup_sub_pane_cp08_ParamLimits

0xce59,	// (0x0003e626) bg_popup_sub_pane_cp08

0xd126,	// (0x0003e8f3) field_vitu_entry_pane_t1_ParamLimits

0xd126,	// (0x0003e8f3) field_vitu_entry_pane_t1

0x08d4,	// (0x000320a1) field_vitu_entry_pane_t2_ParamLimits

0x08d4,	// (0x000320a1) field_vitu_entry_pane_t2

0x0001,

0xf7a1,	// (0x00040f6e) field_vitu_entry_pane_t_ParamLimits

0xf7a1,	// (0x00040f6e) field_vitu_entry_pane_t

0x00af,	// (0x0003187c) bg_button_pane_cp05_ParamLimits

0x00af,	// (0x0003187c) bg_button_pane_cp05

0x08f1,	// (0x000320be) cell_vitu_itu_pane_g1

0xe797,	// (0x0003ff64) cell_vitu_itu_pane_t1_ParamLimits

0xe797,	// (0x0003ff64) cell_vitu_itu_pane_t1

0xe797,	// (0x0003ff64) cell_vitu_itu_pane_t2_ParamLimits

0xe797,	// (0x0003ff64) cell_vitu_itu_pane_t2

0x0002,

0xf7a6,	// (0x00040f73) cell_vitu_itu_pane_t_ParamLimits

0xf7a6,	// (0x00040f73) cell_vitu_itu_pane_t

0xc7b1,	// (0x0003df7e) bg_button_pane_cp07

0xd10c,	// (0x0003e8d9) cell_vitu_function_pane_g1

0x50a9,	// (0x00036876) main_calc_pane_g1

0x4cfa,	// (0x000364c7) aid_visual_content_pane

0xc7b1,	// (0x0003df7e) main_vradio_pane

0xcec0,	// (0x0003e68d) main_vradio_pane_g1_ParamLimits

0xcec0,	// (0x0003e68d) main_vradio_pane_g1

0xcec0,	// (0x0003e68d) main_vradio_pane_g2_ParamLimits

0xcec0,	// (0x0003e68d) main_vradio_pane_g2

0x0001,

0xf7ad,	// (0x00040f7a) main_vradio_pane_g_ParamLimits

0xf7ad,	// (0x00040f7a) main_vradio_pane_g

0xd0de,	// (0x0003e8ab) main_vradio_pane_t1_ParamLimits

0xd0de,	// (0x0003e8ab) main_vradio_pane_t1

0xd0de,	// (0x0003e8ab) main_vradio_pane_t2_ParamLimits

0xd0de,	// (0x0003e8ab) main_vradio_pane_t2

0xd0de,	// (0x0003e8ab) main_vradio_pane_t3_ParamLimits

0xd0de,	// (0x0003e8ab) main_vradio_pane_t3

0x0002,

0xf7b2,	// (0x00040f7f) main_vradio_pane_t_ParamLimits

0xf7b2,	// (0x00040f7f) main_vradio_pane_t

0xc7bb,	// (0x0003df88) vradio_rocker_control_pane_ParamLimits

0xc7bb,	// (0x0003df88) vradio_rocker_control_pane

0xc7bb,	// (0x0003df88) vradio_station_info_pane_ParamLimits

0xc7bb,	// (0x0003df88) vradio_station_info_pane

0xce59,	// (0x0003e626) vradio_frequency_info_pane_ParamLimits

0xce59,	// (0x0003e626) vradio_frequency_info_pane

0xd10c,	// (0x0003e8d9) vradio_station_info_pane_g1

0xe797,	// (0x0003ff64) vradio_station_info_pane_t1_ParamLimits

0xe797,	// (0x0003ff64) vradio_station_info_pane_t1

0xd0de,	// (0x0003e8ab) vradio_station_info_pane_t2_ParamLimits

0xd0de,	// (0x0003e8ab) vradio_station_info_pane_t2

0x0001,

0xf7b9,	// (0x00040f86) vradio_station_info_pane_t_ParamLimits

0xf7b9,	// (0x00040f86) vradio_station_info_pane_t

0xc7b1,	// (0x0003df7e) vradio_tuning_pane

0x8a14,	// (0x0003a1e1) vradio_rocker_control_pane_g1

0x090d,	// (0x000320da) vradio_rocker_control_pane_g2

0x8a1c,	// (0x0003a1e9) vradio_rocker_control_pane_g3

0x8a24,	// (0x0003a1f1) vradio_rocker_control_pane_g4

0x8a2c,	// (0x0003a1f9) vradio_rocker_control_pane_g5

0x0004,

0xf7be,	// (0x00040f8b) vradio_rocker_control_pane_g

0xd10c,	// (0x0003e8d9) vradio_frequency_info_pane_g1

0xd126,	// (0x0003e8f3) vradio_frequency_info_pane_t1_ParamLimits

0xd126,	// (0x0003e8f3) vradio_frequency_info_pane_t1

0x8a34,	// (0x0003a201) vradio_tuning_pane_g1

0x8a41,	// (0x0003a20e) vradio_tuning_pane_t1

0x4d43,	// (0x00036510) area_side_right_pane_ParamLimits

0x4d43,	// (0x00036510) area_side_right_pane

0xeea2,	// (0x0004066f) status_small_pane_g1

0xeeaa,	// (0x00040677) status_small_pane_g2

0xeeb3,	// (0x00040680) status_small_pane_g3

0xeebc,	// (0x00040689) status_small_pane_g4

0x0003,

0xf58a,	// (0x00040d57) status_small_pane_g

0xeec5,	// (0x00040692) status_small_pane_t1

0xc7b1,	// (0x0003df7e) main_video3_pane

0x0915,	// (0x000320e2) cams_zoom_vslider_pane

0x091d,	// (0x000320ea) image3_wide_pane_ParamLimits

0x091d,	// (0x000320ea) image3_wide_pane

0x0937,	// (0x00032104) image3_wide_small_pane

0x0943,	// (0x00032110) main_video3_pane_g1_ParamLimits

0x0943,	// (0x00032110) main_video3_pane_g1

0x095f,	// (0x0003212c) main_video3_pane_g2_ParamLimits

0x095f,	// (0x0003212c) main_video3_pane_g2

0x0001,

0xf7c9,	// (0x00040f96) main_video3_pane_g_ParamLimits

0xf7c9,	// (0x00040f96) main_video3_pane_g

0x097b,	// (0x00032148) main_video3_pane_t1_ParamLimits

0x097b,	// (0x00032148) main_video3_pane_t1

0x09a6,	// (0x00032173) main_video3_pane_t2_ParamLimits

0x09a6,	// (0x00032173) main_video3_pane_t2

0x09d1,	// (0x0003219e) main_video3_pane_t3_ParamLimits

0x09d1,	// (0x0003219e) main_video3_pane_t3

0x0002,

0xf7ce,	// (0x00040f9b) main_video3_pane_t_ParamLimits

0xf7ce,	// (0x00040f9b) main_video3_pane_t

0x09fe,	// (0x000321cb) cams_zoom_vslider_pane_g1

0x0a07,	// (0x000321d4) cams_zoom_vslider_pane_g2

0x0001,

0xf7d5,	// (0x00040fa2) cams_zoom_vslider_pane_g

0x0a0f,	// (0x000321dc) small_slider_vertical_pane

0xd10c,	// (0x0003e8d9) small_slider_vertical_pane_g1

0xd10c,	// (0x0003e8d9) small_slider_vertical_pane_g2

0x0a17,	// (0x000321e4) small_slider_vertical_pane_g3

0x0002,

0xf7da,	// (0x00040fa7) small_slider_vertical_pane_g

0xc7b1,	// (0x0003df7e) main_hwr_training_pane

0x0a20,	// (0x000321ed) hwr_training_instruct_pane_ParamLimits

0x0a20,	// (0x000321ed) hwr_training_instruct_pane

0x8a50,	// (0x0003a21d) hwr_training_navi_pane_ParamLimits

0x8a50,	// (0x0003a21d) hwr_training_navi_pane

0x8a6a,	// (0x0003a237) hwr_training_write_pane_ParamLimits

0x8a6a,	// (0x0003a237) hwr_training_write_pane

0xc7b1,	// (0x0003df7e) bg_frame_shadow_pane

0x0a57,	// (0x00032224) hwr_training_write_pane_g1

0x0a5f,	// (0x0003222c) hwr_training_write_pane_g2

0x0a67,	// (0x00032234) hwr_training_write_pane_g3

0x0a6f,	// (0x0003223c) hwr_training_write_pane_g4

0x0a77,	// (0x00032244) hwr_training_write_pane_g5

0x0a7f,	// (0x0003224c) hwr_training_write_pane_g6

0x0a87,	// (0x00032254) hwr_training_write_pane_g7

0x0006,

0xf7e1,	// (0x00040fae) hwr_training_write_pane_g

0x8aa2,	// (0x0003a26f) hwr_training_navi_pane_g1_ParamLimits

0x8aa2,	// (0x0003a26f) hwr_training_navi_pane_g1

0x8ab4,	// (0x0003a281) hwr_training_navi_pane_g2_ParamLimits

0x8ab4,	// (0x0003a281) hwr_training_navi_pane_g2

0x8ac6,	// (0x0003a293) hwr_training_navi_pane_g3_ParamLimits

0x8ac6,	// (0x0003a293) hwr_training_navi_pane_g3

0x8ad6,	// (0x0003a2a3) hwr_training_navi_pane_g4_ParamLimits

0x8ad6,	// (0x0003a2a3) hwr_training_navi_pane_g4

0x0004,

0xf7f0,	// (0x00040fbd) hwr_training_navi_pane_g_ParamLimits

0xf7f0,	// (0x00040fbd) hwr_training_navi_pane_g

0x8af0,	// (0x0003a2bd) hwr_training_navi_pane_t1

0x8afe,	// (0x0003a2cb) list_single_hwr_training_instruct_pane_ParamLimits

0x8afe,	// (0x0003a2cb) list_single_hwr_training_instruct_pane

0x0ade,	// (0x000322ab) list_single_hwr_training_instruct_pane_t1

0x0209,	// (0x000319d6) bg_frame_shadow_pane_g1

0x0aed,	// (0x000322ba) bg_frame_shadow_pane_g2

0x0af5,	// (0x000322c2) bg_frame_shadow_pane_g3

0x0afd,	// (0x000322ca) bg_frame_shadow_pane_g4

0x0b05,	// (0x000322d2) bg_frame_shadow_pane_g5

0x0b0d,	// (0x000322da) bg_frame_shadow_pane_g6

0x0b15,	// (0x000322e2) bg_frame_shadow_pane_g7

0xcfd3,	// (0x0003e7a0) bg_frame_shadow_pane_g8

0x0007,

0xf7fb,	// (0x00040fc8) bg_frame_shadow_pane_g

0xc7b1,	// (0x0003df7e) main_video_tele_dialer_pane

0x8b27,	// (0x0003a2f4) aid_size_cell_video_keypad_ParamLimits

0x8b27,	// (0x0003a2f4) aid_size_cell_video_keypad

0x8b37,	// (0x0003a304) grid_video_dialer_keypad_pane_ParamLimits

0x8b37,	// (0x0003a304) grid_video_dialer_keypad_pane

0x8b6b,	// (0x0003a338) video_down_pane_cp_ParamLimits

0x8b6b,	// (0x0003a338) video_down_pane_cp

0x8b95,	// (0x0003a362) cell_video_dialer_keypad_pane_ParamLimits

0x8b95,	// (0x0003a362) cell_video_dialer_keypad_pane

0x0b1d,	// (0x000322ea) bg_button_pane_cp08_ParamLimits

0x0b1d,	// (0x000322ea) bg_button_pane_cp08

0x8baa,	// (0x0003a377) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8baa,	// (0x0003a377) cell_video_dialer_keypad_pane_g1

0x858a,	// (0x00039d57) mup3_rocker2_pane_ParamLimits

0x858a,	// (0x00039d57) mup3_rocker2_pane

0xd10c,	// (0x0003e8d9) mup3_rocker2_pane_g1

0x7a73,	// (0x00039240) main_dialer2_pane

0xc7b1,	// (0x0003df7e) main_mp4_pane

0x8c02,	// (0x0003a3cf) main_mp4_pane_g1_ParamLimits

0x8c02,	// (0x0003a3cf) main_mp4_pane_g1

0x8c10,	// (0x0003a3dd) main_mp4_pane_g2_ParamLimits

0x8c10,	// (0x0003a3dd) main_mp4_pane_g2

0x8c1e,	// (0x0003a3eb) main_mp4_pane_g3_ParamLimits

0x8c1e,	// (0x0003a3eb) main_mp4_pane_g3

0x8c63,	// (0x0003a430) main_mp4_pane_g4_ParamLimits

0x8c63,	// (0x0003a430) main_mp4_pane_g4

0x8c91,	// (0x0003a45e) main_mp4_pane_g5_ParamLimits

0x8c91,	// (0x0003a45e) main_mp4_pane_g5

0x0007,

0xf81b,	// (0x00040fe8) main_mp4_pane_g_ParamLimits

0xf81b,	// (0x00040fe8) main_mp4_pane_g

0x8d05,	// (0x0003a4d2) main_mp4_pane_t1_ParamLimits

0x8d05,	// (0x0003a4d2) main_mp4_pane_t1

0x8d61,	// (0x0003a52e) main_mp4_pane_t2_ParamLimits

0x8d61,	// (0x0003a52e) main_mp4_pane_t2

0x0ca5,	// (0x00032472) main_mp4_pane_t3_ParamLimits

0x0ca5,	// (0x00032472) main_mp4_pane_t3

0x8db3,	// (0x0003a580) main_mp4_pane_t4_ParamLimits

0x8db3,	// (0x0003a580) main_mp4_pane_t4

0x0003,

0xf82c,	// (0x00040ff9) main_mp4_pane_t_ParamLimits

0xf82c,	// (0x00040ff9) main_mp4_pane_t

0x8df7,	// (0x0003a5c4) mp4_progress_pane_ParamLimits

0x8df7,	// (0x0003a5c4) mp4_progress_pane

0x8e41,	// (0x0003a60e) mp4_rocker_pane_ParamLimits

0x8e41,	// (0x0003a60e) mp4_rocker_pane

0x0d81,	// (0x0003254e) mp4_progress_pane_t1

0x0d9a,	// (0x00032567) mp4_progress_pane_t2

0x0001,

0xf835,	// (0x00041002) mp4_progress_pane_t

0x0db3,	// (0x00032580) mup_progress_pane_cp04

0xd10c,	// (0x0003e8d9) mp4_rocker_pane_g1

0x8e61,	// (0x0003a62e) aid_cell_size_keypad2_ParamLimits

0x8e61,	// (0x0003a62e) aid_cell_size_keypad2

0x8e71,	// (0x0003a63e) dialer2_ne_pane_ParamLimits

0x8e71,	// (0x0003a63e) dialer2_ne_pane

0x8e7f,	// (0x0003a64c) grid_dialer2_keypad_pane_ParamLimits

0x8e7f,	// (0x0003a64c) grid_dialer2_keypad_pane

0x180f,	// (0x00032fdc) bg_popup_call_pane_cp07_ParamLimits

0x180f,	// (0x00032fdc) bg_popup_call_pane_cp07

0x8e8f,	// (0x0003a65c) dialer2_ne_pane_t1_ParamLimits

0x8e8f,	// (0x0003a65c) dialer2_ne_pane_t1

0x8eb4,	// (0x0003a681) cell_dialer2_keypad_pane_ParamLimits

0x8eb4,	// (0x0003a681) cell_dialer2_keypad_pane

0x0dd8,	// (0x000325a5) bg_button_pane_pane_cp04_ParamLimits

0x0dd8,	// (0x000325a5) bg_button_pane_pane_cp04

0x8ec9,	// (0x0003a696) cell_dialer2_keypad_pane_g1_ParamLimits

0x8ec9,	// (0x0003a696) cell_dialer2_keypad_pane_g1

0x5a86,	// (0x00037253) aid_placing_vt_set_content_ParamLimits

0x5a86,	// (0x00037253) aid_placing_vt_set_content

0x5ab2,	// (0x0003727f) aid_placing_vt_set_title_ParamLimits

0x5ab2,	// (0x0003727f) aid_placing_vt_set_title

0xc7b1,	// (0x0003df7e) main_image3_pane

0x8f63,	// (0x0003a730) area_side_right_pane_cp01_ParamLimits

0x8f63,	// (0x0003a730) area_side_right_pane_cp01

0xcece,	// (0x0003e69b) main_image3_pane_g1_ParamLimits

0xcece,	// (0x0003e69b) main_image3_pane_g1

0x8f90,	// (0x0003a75d) main_image3_pane_g2_ParamLimits

0x8f90,	// (0x0003a75d) main_image3_pane_g2

0x8fa9,	// (0x0003a776) main_image3_pane_g3_ParamLimits

0x8fa9,	// (0x0003a776) main_image3_pane_g3

0x8fc2,	// (0x0003a78f) main_image3_pane_g4_ParamLimits

0x8fc2,	// (0x0003a78f) main_image3_pane_g4

0x0003,

0xf844,	// (0x00041011) main_image3_pane_g_ParamLimits

0xf844,	// (0x00041011) main_image3_pane_g

0x8fdb,	// (0x0003a7a8) main_image3_pane_t1_ParamLimits

0x8fdb,	// (0x0003a7a8) main_image3_pane_t1

0x9000,	// (0x0003a7cd) main_image3_pane_t2_ParamLimits

0x9000,	// (0x0003a7cd) main_image3_pane_t2

0x901f,	// (0x0003a7ec) main_image3_pane_t3_ParamLimits

0x901f,	// (0x0003a7ec) main_image3_pane_t3

0x0003,

0xf84d,	// (0x0004101a) main_image3_pane_t_ParamLimits

0xf84d,	// (0x0004101a) main_image3_pane_t

0xc7bb,	// (0x0003df88) grid_sctrl_middle_pane_cp01_ParamLimits

0xc7bb,	// (0x0003df88) grid_sctrl_middle_pane_cp01

0x9080,	// (0x0003a84d) cell_sctrl_middle_pane_cp01_ParamLimits

0x9080,	// (0x0003a84d) cell_sctrl_middle_pane_cp01

0x9091,	// (0x0003a85e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9091,	// (0x0003a85e) cell_sctrl_middle_pane_cp01_g1

0xc7b1,	// (0x0003df7e) main_call4_pane

0x909e,	// (0x0003a86b) aid_size_button_call4_ParamLimits

0x909e,	// (0x0003a86b) aid_size_button_call4

0x90d4,	// (0x0003a8a1) call4_windows_pane_ParamLimits

0x90d4,	// (0x0003a8a1) call4_windows_pane

0x90e9,	// (0x0003a8b6) grid_call4_button_pane_ParamLimits

0x90e9,	// (0x0003a8b6) grid_call4_button_pane

0x9117,	// (0x0003a8e4) call4_windows_conf_pane

0x912c,	// (0x0003a8f9) popup_call4_audio_first_window_ParamLimits

0x912c,	// (0x0003a8f9) popup_call4_audio_first_window

0x917c,	// (0x0003a949) popup_call4_audio_second_window_ParamLimits

0x917c,	// (0x0003a949) popup_call4_audio_second_window

0x9195,	// (0x0003a962) popup_call4_audio_wait_window_ParamLimits

0x9195,	// (0x0003a962) popup_call4_audio_wait_window

0x91a3,	// (0x0003a970) cell_call4_button_pane_ParamLimits

0x91a3,	// (0x0003a970) cell_call4_button_pane

0x91c6,	// (0x0003a993) bg_button_pane_cp09_ParamLimits

0x91c6,	// (0x0003a993) bg_button_pane_cp09

0x91d2,	// (0x0003a99f) cell_call4_button_pane_g1_ParamLimits

0x91d2,	// (0x0003a99f) cell_call4_button_pane_g1

0x91df,	// (0x0003a9ac) cell_call4_button_pane_t1_ParamLimits

0x91df,	// (0x0003a9ac) cell_call4_button_pane_t1

0x0e50,	// (0x0003261d) popup_call4_audio_conf_window_ParamLimits

0x0e50,	// (0x0003261d) popup_call4_audio_conf_window

0x85bd,	// (0x00039d8a) mup3_progress_pane_t1_ParamLimits

0x85dc,	// (0x00039da9) mup3_progress_pane_t2_ParamLimits

0x05e7,	// (0x00031db4) mup3_progress_pane_t3_ParamLimits

0xf722,	// (0x00040eef) mup3_progress_pane_t_ParamLimits

0x0604,	// (0x00031dd1) mup_progress_pane_cp03_ParamLimits

0x8a0c,	// (0x0003a1d9) mup3_control_keys_pane_g4_copy1

0x8e25,	// (0x0003a5f2) mp4_rocker2_pane_ParamLimits

0x8e25,	// (0x0003a5f2) mp4_rocker2_pane

0x0e6c,	// (0x00032639) mp4_rocker2_pane_g1

0x0e64,	// (0x00032631) mp4_rocker2_pane_g2

0x9223,	// (0x0003a9f0) mp4_rocker2_pane_g3

0x922b,	// (0x0003a9f8) mp4_rocker2_pane_g4

0x9233,	// (0x0003aa00) mp4_rocker2_pane_g5

0x0004,

0xf856,	// (0x00041023) mp4_rocker2_pane_g

0xc7b1,	// (0x0003df7e) main_camera4_pane

0xc7b1,	// (0x0003df7e) main_video4_pane

0x8b47,	// (0x0003a314) main_video_tele_dialer_pane_t1_ParamLimits

0x8b47,	// (0x0003a314) main_video_tele_dialer_pane_t1

0x8b59,	// (0x0003a326) main_video_tele_dialer_pane_t2_ParamLimits

0x8b59,	// (0x0003a326) main_video_tele_dialer_pane_t2

0x0001,

0xf80c,	// (0x00040fd9) main_video_tele_dialer_pane_t_ParamLimits

0xf80c,	// (0x00040fd9) main_video_tele_dialer_pane_t

0x9253,	// (0x0003aa20) cam4_autofocus_pane_ParamLimits

0x9253,	// (0x0003aa20) cam4_autofocus_pane

0x926d,	// (0x0003aa3a) cam4_image_uncrop_pane_ParamLimits

0x926d,	// (0x0003aa3a) cam4_image_uncrop_pane

0x9284,	// (0x0003aa51) cam4_indicators_pane_ParamLimits

0x9284,	// (0x0003aa51) cam4_indicators_pane

0x92a0,	// (0x0003aa6d) main_camera4_pane_g1_ParamLimits

0x92a0,	// (0x0003aa6d) main_camera4_pane_g1

0x92ac,	// (0x0003aa79) main_camera4_pane_g2_ParamLimits

0x92ac,	// (0x0003aa79) main_camera4_pane_g2

0x92ac,	// (0x0003aa79) main_camera4_pane_g3_ParamLimits

0x92ac,	// (0x0003aa79) main_camera4_pane_g3

0x92b8,	// (0x0003aa85) main_camera4_pane_g4_ParamLimits

0x92b8,	// (0x0003aa85) main_camera4_pane_g4

0x92c4,	// (0x0003aa91) main_camera4_pane_g5_ParamLimits

0x92c4,	// (0x0003aa91) main_camera4_pane_g5

0x0005,

0xf861,	// (0x0004102e) main_camera4_pane_g_ParamLimits

0xf861,	// (0x0004102e) main_camera4_pane_g

0x92de,	// (0x0003aaab) main_camera4_pane_t1_ParamLimits

0x92de,	// (0x0003aaab) main_camera4_pane_t1

0xceb2,	// (0x0003e67f) bg_tb_trans_pane_cp06

0x932e,	// (0x0003aafb) cam4_indicators_pane_g1

0x933f,	// (0x0003ab0c) cam4_indicators_pane_g2

0x0002,

0xf87c,	// (0x00041049) cam4_indicators_pane_g

0x9357,	// (0x0003ab24) cam4_indicators_pane_t1

0x9381,	// (0x0003ab4e) main_video4_pane_g1_ParamLimits

0x9381,	// (0x0003ab4e) main_video4_pane_g1

0x938d,	// (0x0003ab5a) main_video4_pane_g2_ParamLimits

0x938d,	// (0x0003ab5a) main_video4_pane_g2

0x9399,	// (0x0003ab66) main_video4_pane_g3_ParamLimits

0x9399,	// (0x0003ab66) main_video4_pane_g3

0x93a5,	// (0x0003ab72) main_video4_pane_g4_ParamLimits

0x93a5,	// (0x0003ab72) main_video4_pane_g4

0x0004,

0xf883,	// (0x00041050) main_video4_pane_g_ParamLimits

0xf883,	// (0x00041050) main_video4_pane_g

0x93c5,	// (0x0003ab92) vid4_indicators_pane_ParamLimits

0x93c5,	// (0x0003ab92) vid4_indicators_pane

0x93e4,	// (0x0003abb1) video4_image_uncrop_cif_pane_ParamLimits

0x93e4,	// (0x0003abb1) video4_image_uncrop_cif_pane

0x93f3,	// (0x0003abc0) video4_image_uncrop_nhd_pane_ParamLimits

0x93f3,	// (0x0003abc0) video4_image_uncrop_nhd_pane

0x926d,	// (0x0003aa3a) video4_image_uncrop_vga_pane_ParamLimits

0x926d,	// (0x0003aa3a) video4_image_uncrop_vga_pane

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp07

0x9408,	// (0x0003abd5) vid4_indicators_pane_g1

0x941c,	// (0x0003abe9) vid4_indicators_pane_g2

0x9430,	// (0x0003abfd) vid4_indicators_pane_g3

0x0004,

0xf88e,	// (0x0004105b) vid4_indicators_pane_g

0x945d,	// (0x0003ac2a) vid4_indicators_pane_t1

0x9474,	// (0x0003ac41) cam4_autofocus_pane_g1

0x947c,	// (0x0003ac49) cam4_autofocus_pane_g2

0x9484,	// (0x0003ac51) cam4_autofocus_pane_g3

0x0002,

0xf899,	// (0x00041066) cam4_autofocus_pane_g

0x948c,	// (0x0003ac59) cam4_autofocus_pane_g3_copy1

0x8b79,	// (0x0003a346) video_down_pane_cp_t1

0x8b87,	// (0x0003a354) video_down_pane_cp_t2

0x0001,

0xf811,	// (0x00040fde) video_down_pane_cp_t

0xc7bb,	// (0x0003df88) popup_vitu2_window_ParamLimits

0xc7bb,	// (0x0003df88) popup_vitu2_window

0x9494,	// (0x0003ac61) aid_size_cell2_itu2_ParamLimits

0x9494,	// (0x0003ac61) aid_size_cell2_itu2

0x94b6,	// (0x0003ac83) aid_size_cell_itu2_ParamLimits

0x94b6,	// (0x0003ac83) aid_size_cell_itu2

0x180f,	// (0x00032fdc) bg_popup_window_pane_cp09_ParamLimits

0x180f,	// (0x00032fdc) bg_popup_window_pane_cp09

0x94fa,	// (0x0003acc7) field_vitu2_entry_pane_ParamLimits

0x94fa,	// (0x0003acc7) field_vitu2_entry_pane

0x951a,	// (0x0003ace7) grid_vitu2_function_pane_ParamLimits

0x951a,	// (0x0003ace7) grid_vitu2_function_pane

0x955e,	// (0x0003ad2b) grid_vitu2_itu_pane_ParamLimits

0x955e,	// (0x0003ad2b) grid_vitu2_itu_pane

0x95d6,	// (0x0003ada3) cell_vitu2_itu_pane_ParamLimits

0x95d6,	// (0x0003ada3) cell_vitu2_itu_pane

0x95ef,	// (0x0003adbc) cell_vitu2_function_pane_ParamLimits

0x95ef,	// (0x0003adbc) cell_vitu2_function_pane

0x0f8f,	// (0x0003275c) bg_popup_call_pane_cp08_ParamLimits

0x0f8f,	// (0x0003275c) bg_popup_call_pane_cp08

0x0fa6,	// (0x00032773) field_vitu2_entry_pane_g1

0x0fb2,	// (0x0003277f) field_vitu2_entry_pane_g2

0x0002,

0xf8a0,	// (0x0004106d) field_vitu2_entry_pane_g

0x4109,	// (0x000358d6) field_vitu2_entry_pane_t1_ParamLimits

0x4109,	// (0x000358d6) field_vitu2_entry_pane_t1

0x413e,	// (0x0003590b) field_vitu2_entry_pane_t2_ParamLimits

0x413e,	// (0x0003590b) field_vitu2_entry_pane_t2

0x0001,

0xf8a7,	// (0x00041074) field_vitu2_entry_pane_t_ParamLimits

0xf8a7,	// (0x00041074) field_vitu2_entry_pane_t

0x7d9d,	// (0x0003956a) bg_button_pane_cp010_ParamLimits

0x7d9d,	// (0x0003956a) bg_button_pane_cp010

0x9630,	// (0x0003adfd) cell_vitu2_itu_pane_g1

0x9656,	// (0x0003ae23) cell_vitu2_itu_pane_t1_ParamLimits

0x9656,	// (0x0003ae23) cell_vitu2_itu_pane_t1

0x415b,	// (0x00035928) cell_vitu2_itu_pane_t2_ParamLimits

0x415b,	// (0x00035928) cell_vitu2_itu_pane_t2

0x0002,

0xf8b1,	// (0x0004107e) cell_vitu2_itu_pane_t_ParamLimits

0xf8b1,	// (0x0004107e) cell_vitu2_itu_pane_t

0xce59,	// (0x0003e626) bg_button_pane_cp011

0x96a2,	// (0x0003ae6f) cell_vitu2_function_pane_g1

0xc7b1,	// (0x0003df7e) main_myfav_hc_pane

0x9061,	// (0x0003a82e) popup_image3_note_pane_ParamLimits

0x9061,	// (0x0003a82e) popup_image3_note_pane

0x906f,	// (0x0003a83c) popup_image3_tool_bar_pane_ParamLimits

0x906f,	// (0x0003a83c) popup_image3_tool_bar_pane

0x41d1,	// (0x0003599e) cell_vitu2_itu_pane_t3_ParamLimits

0x41d1,	// (0x0003599e) cell_vitu2_itu_pane_t3

0xc7b1,	// (0x0003df7e) bg_popup_trans_pane

0x0fe3,	// (0x000327b0) grid_image3_tool_bar_pane

0x0fed,	// (0x000327ba) bg_popup_trans_pane_g1

0xd331,	// (0x0003eafe) bg_popup_trans_pane_g2

0x0ff5,	// (0x000327c2) bg_popup_trans_pane_g3

0x0ffd,	// (0x000327ca) bg_popup_trans_pane_g4

0x1005,	// (0x000327d2) bg_popup_trans_pane_g5

0x100d,	// (0x000327da) bg_popup_trans_pane_g6

0x1015,	// (0x000327e2) bg_popup_trans_pane_g7

0x101d,	// (0x000327ea) bg_popup_trans_pane_g8

0xd311,	// (0x0003eade) bg_popup_trans_pane_g9

0x0008,

0xf8b8,	// (0x00041085) bg_popup_trans_pane_g

0x1025,	// (0x000327f2) cell_image3_tool_bar_pane_ParamLimits

0x1025,	// (0x000327f2) cell_image3_tool_bar_pane

0xd10c,	// (0x0003e8d9) cell_image3_tool_bar_pane_g1

0xc7b1,	// (0x0003df7e) bg_popup_trans_pane_cp1

0x1039,	// (0x00032806) popup_image3_note_pane_t1

0x1047,	// (0x00032814) popup_image3_note_pane_t2

0x1055,	// (0x00032822) popup_image3_note_pane_t3

0x0002,

0xf8cb,	// (0x00041098) popup_image3_note_pane_t

0x1063,	// (0x00032830) popup_image3_note_pane_t3_copy1

0x96b6,	// (0x0003ae83) bg_myfav_hc_instruction_pane_ParamLimits

0x96b6,	// (0x0003ae83) bg_myfav_hc_instruction_pane

0x96ce,	// (0x0003ae9b) cell_myfav_contact_pane_ParamLimits

0x96ce,	// (0x0003ae9b) cell_myfav_contact_pane

0x96e8,	// (0x0003aeb5) cell_myfav_contact_pane_cp1_ParamLimits

0x96e8,	// (0x0003aeb5) cell_myfav_contact_pane_cp1

0x9700,	// (0x0003aecd) cell_myfav_contact_pane_cp2_ParamLimits

0x9700,	// (0x0003aecd) cell_myfav_contact_pane_cp2

0x9718,	// (0x0003aee5) cell_myfav_contact_pane_cp3_ParamLimits

0x9718,	// (0x0003aee5) cell_myfav_contact_pane_cp3

0x972f,	// (0x0003aefc) cell_myfav_contact_pane_cp4_ParamLimits

0x972f,	// (0x0003aefc) cell_myfav_contact_pane_cp4

0x9745,	// (0x0003af12) cell_myfav_contact_pane_cp5_ParamLimits

0x9745,	// (0x0003af12) cell_myfav_contact_pane_cp5

0x9759,	// (0x0003af26) cell_myfav_contact_pane_cp6_ParamLimits

0x9759,	// (0x0003af26) cell_myfav_contact_pane_cp6

0x976d,	// (0x0003af3a) cell_myfav_contact_pane_cp7_ParamLimits

0x976d,	// (0x0003af3a) cell_myfav_contact_pane_cp7

0x1071,	// (0x0003283e) listscroll_gen_pane_cp05

0x9785,	// (0x0003af52) main_myfav_hc_pane_g1_ParamLimits

0x9785,	// (0x0003af52) main_myfav_hc_pane_g1

0x979b,	// (0x0003af68) main_myfav_hc_pane_g2_ParamLimits

0x979b,	// (0x0003af68) main_myfav_hc_pane_g2

0x0002,

0xf8d2,	// (0x0004109f) main_myfav_hc_pane_g_ParamLimits

0xf8d2,	// (0x0004109f) main_myfav_hc_pane_g

0x97cb,	// (0x0003af98) main_myfav_hc_pane_t1_ParamLimits

0x97cb,	// (0x0003af98) main_myfav_hc_pane_t1

0x107a,	// (0x00032847) main_myfav_hc_pane_t2_ParamLimits

0x107a,	// (0x00032847) main_myfav_hc_pane_t2

0x108c,	// (0x00032859) main_myfav_hc_pane_t3_ParamLimits

0x108c,	// (0x00032859) main_myfav_hc_pane_t3

0x97e2,	// (0x0003afaf) main_myfav_hc_pane_t4_ParamLimits

0x97e2,	// (0x0003afaf) main_myfav_hc_pane_t4

0x0004,

0xf8d9,	// (0x000410a6) main_myfav_hc_pane_t_ParamLimits

0xf8d9,	// (0x000410a6) main_myfav_hc_pane_t

0xd10c,	// (0x0003e8d9) bg_myfav_hc_instruction_pane_g1

0x109e,	// (0x0003286b) cell_myfav_contact_pane_g1_ParamLimits

0x109e,	// (0x0003286b) cell_myfav_contact_pane_g1

0x109e,	// (0x0003286b) cell_myfav_contact_pane_g2_ParamLimits

0x109e,	// (0x0003286b) cell_myfav_contact_pane_g2

0x10aa,	// (0x00032877) cell_myfav_contact_pane_g3_ParamLimits

0x10aa,	// (0x00032877) cell_myfav_contact_pane_g3

0xcec0,	// (0x0003e68d) cell_myfav_contact_pane_g4_ParamLimits

0xcec0,	// (0x0003e68d) cell_myfav_contact_pane_g4

0x10b7,	// (0x00032884) cell_myfav_contact_pane_g5_ParamLimits

0x10b7,	// (0x00032884) cell_myfav_contact_pane_g5

0x0004,

0xf8e4,	// (0x000410b1) cell_myfav_contact_pane_g_ParamLimits

0xf8e4,	// (0x000410b1) cell_myfav_contact_pane_g

0x97b3,	// (0x0003af80) main_myfav_hc_pane_g3_ParamLimits

0x97b3,	// (0x0003af80) main_myfav_hc_pane_g3

0x4e77,	// (0x00036644) popup_adpt_find_window

0x980c,	// (0x0003afd9) afind_page_pane_ParamLimits

0x980c,	// (0x0003afd9) afind_page_pane

0x9819,	// (0x0003afe6) aid_size_cell_afind_ParamLimits

0x9819,	// (0x0003afe6) aid_size_cell_afind

0x9833,	// (0x0003b000) bg_popup_sub_pane_cp09_ParamLimits

0x9833,	// (0x0003b000) bg_popup_sub_pane_cp09

0x9840,	// (0x0003b00d) find_pane_cp01_ParamLimits

0x9840,	// (0x0003b00d) find_pane_cp01

0x10c3,	// (0x00032890) grid_afind_control_pane_ParamLimits

0x10c3,	// (0x00032890) grid_afind_control_pane

0x984d,	// (0x0003b01a) grid_afind_pane_ParamLimits

0x984d,	// (0x0003b01a) grid_afind_pane

0x9867,	// (0x0003b034) cell_afind_pane_ParamLimits

0x9867,	// (0x0003b034) cell_afind_pane

0xd10c,	// (0x0003e8d9) afind_page_pane_g1

0x98af,	// (0x0003b07c) afind_page_pane_g2

0x98b8,	// (0x0003b085) afind_page_pane_g3

0x0002,

0xf8ef,	// (0x000410bc) afind_page_pane_g

0x98c1,	// (0x0003b08e) afind_page_pane_t1

0x10d7,	// (0x000328a4) cell_afind_grid_control_pane_ParamLimits

0x10d7,	// (0x000328a4) cell_afind_grid_control_pane

0x0dd8,	// (0x000325a5) bg_button_pane_cp69_ParamLimits

0x0dd8,	// (0x000325a5) bg_button_pane_cp69

0x98e1,	// (0x0003b0ae) cell_afind_pane_g1_ParamLimits

0x98e1,	// (0x0003b0ae) cell_afind_pane_g1

0x98ee,	// (0x0003b0bb) cell_afind_pane_t1_ParamLimits

0x98ee,	// (0x0003b0bb) cell_afind_pane_t1

0xd116,	// (0x0003e8e3) bg_button_pane_cp72

0x10e6,	// (0x000328b3) cell_afind_grid_control_pane_g1

0x75a4,	// (0x00038d71) aid_image_placing_area_ParamLimits

0x75a4,	// (0x00038d71) aid_image_placing_area

0xceb2,	// (0x0003e67f) field_vitu_entry_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) field_vitu_entry_pane_g1

0xceb2,	// (0x0003e67f) field_vitu_entry_pane_g2_ParamLimits

0xceb2,	// (0x0003e67f) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x000409b4) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x000409b4) field_vitu_entry_pane_g

0x08f1,	// (0x000320be) cell_vitu_itu_pane_g1_ParamLimits

0x08d4,	// (0x000320a1) cell_vitu_itu_pane_t3_ParamLimits

0x08d4,	// (0x000320a1) cell_vitu_itu_pane_t3

0x0d81,	// (0x0003254e) mp4_progress_pane_t1_ParamLimits

0x0d9a,	// (0x00032567) mp4_progress_pane_t2_ParamLimits

0xf835,	// (0x00041002) mp4_progress_pane_t_ParamLimits

0x0db3,	// (0x00032580) mup_progress_pane_cp04_ParamLimits

0x97f6,	// (0x0003afc3) main_myfav_hc_pane_t5_ParamLimits

0x97f6,	// (0x0003afc3) main_myfav_hc_pane_t5

0x4d06,	// (0x000364d3) aid_zoom_text_primary

0x4e77,	// (0x00036644) popup_adpt_find_window_ParamLimits

0xce59,	// (0x0003e626) main_cam_set_pane

0x9292,	// (0x0003aa5f) cam4_zoom_pane_ParamLimits

0x9292,	// (0x0003aa5f) cam4_zoom_pane

0x9900,	// (0x0003b0cd) main_cam_set_pane_g1_ParamLimits

0x9900,	// (0x0003b0cd) main_cam_set_pane_g1

0x990e,	// (0x0003b0db) main_cam_set_pane_g2_ParamLimits

0x990e,	// (0x0003b0db) main_cam_set_pane_g2

0x0001,

0xf8f6,	// (0x000410c3) main_cam_set_pane_g_ParamLimits

0xf8f6,	// (0x000410c3) main_cam_set_pane_g

0x991a,	// (0x0003b0e7) main_cam_set_pane_t1_ParamLimits

0x991a,	// (0x0003b0e7) main_cam_set_pane_t1

0x9936,	// (0x0003b103) main_cset_listscroll_pane_ParamLimits

0x9936,	// (0x0003b103) main_cset_listscroll_pane

0x9968,	// (0x0003b135) main_cset_slider_pane_ParamLimits

0x9968,	// (0x0003b135) main_cset_slider_pane

0x10f7,	// (0x000328c4) main_cset_list_pane_ParamLimits

0x10f7,	// (0x000328c4) main_cset_list_pane

0x1107,	// (0x000328d4) scroll_pane_cp028

0x9987,	// (0x0003b154) aid_area_touch_slider

0x99a3,	// (0x0003b170) cset_slider_pane

0x99c6,	// (0x0003b193) main_cset_slider_pane_g1

0x99db,	// (0x0003b1a8) main_cset_slider_pane_g2

0x0011,

0xf8fb,	// (0x000410c8) main_cset_slider_pane_g

0x1158,	// (0x00032925) main_cset_slider_pane_t1

0x9aa1,	// (0x0003b26e) main_cset_slider_pane_t2

0x9abb,	// (0x0003b288) main_cset_slider_pane_t3

0x9ad5,	// (0x0003b2a2) main_cset_slider_pane_t4

0x9af3,	// (0x0003b2c0) main_cset_slider_pane_t5

0x9b11,	// (0x0003b2de) main_cset_slider_pane_t6

0x9b28,	// (0x0003b2f5) main_cset_slider_pane_t7

0x000e,

0xf920,	// (0x000410ed) main_cset_slider_pane_t

0x9c36,	// (0x0003b403) cset_list_set_pane_ParamLimits

0x9c36,	// (0x0003b403) cset_list_set_pane

0x11f2,	// (0x000329bf) aid_position_infowindow_above

0x11fa,	// (0x000329c7) aid_position_infowindow_below

0x4223,	// (0x000359f0) cset_list_set_pane_g1_ParamLimits

0x4223,	// (0x000359f0) cset_list_set_pane_g1

0x422f,	// (0x000359fc) cset_list_set_pane_g3_ParamLimits

0x422f,	// (0x000359fc) cset_list_set_pane_g3

0x0001,

0xf93f,	// (0x0004110c) cset_list_set_pane_g_ParamLimits

0xf93f,	// (0x0004110c) cset_list_set_pane_g

0x423e,	// (0x00035a0b) cset_list_set_pane_t1_ParamLimits

0x423e,	// (0x00035a0b) cset_list_set_pane_t1

0xce59,	// (0x0003e626) list_highlight_pane_cp021_ParamLimits

0xce59,	// (0x0003e626) list_highlight_pane_cp021

0xdc32,	// (0x0003f3ff) cset_slider_pane_g1

0xdc44,	// (0x0003f411) cset_slider_pane_g2

0xdc3b,	// (0x0003f408) cset_slider_pane_g3

0x0002,

0xf944,	// (0x00041111) cset_slider_pane_g

0x9c4f,	// (0x0003b41c) aid_area_touch_cam4_zoom

0x9c57,	// (0x0003b424) cam4_zoom_cont_pane

0x9c5f,	// (0x0003b42c) cam4_zoom_pane_g1

0x9c67,	// (0x0003b434) cam4_zoom_pane_g2

0x9c6f,	// (0x0003b43c) cam4_zoom_pane_g3

0x0002,

0xf94b,	// (0x00041118) cam4_zoom_pane_g

0x0a17,	// (0x000321e4) cam4_zoom_cont_pane_g1

0x1b96,	// (0x00033363) cam4_zoom_cont_pane_g2

0x1b9f,	// (0x0003336c) cam4_zoom_cont_pane_g3

0x0002,

0xf952,	// (0x0004111f) cam4_zoom_cont_pane_g

0x90b8,	// (0x0003a885) call4_image_pane_ParamLimits

0x90b8,	// (0x0003a885) call4_image_pane

0x9117,	// (0x0003a8e4) call4_windows_conf_pane_ParamLimits

0x915a,	// (0x0003a927) popup_call4_audio_in_window_ParamLimits

0x915a,	// (0x0003a927) popup_call4_audio_in_window

0xc7b1,	// (0x0003df7e) bg_popup_call2_act_pane_cp02

0x0e48,	// (0x00032615) call4_list_conf_pane

0xd10c,	// (0x0003e8d9) call4_image_pane_g1

0xd10c,	// (0x0003e8d9) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) call4_image_pane_g

0x123d,	// (0x00032a0a) list_single_graphic_popup_conf4_pane_ParamLimits

0x123d,	// (0x00032a0a) list_single_graphic_popup_conf4_pane

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp022

0x1250,	// (0x00032a1d) list_single_graphic_popup_conf4_pane_g1

0xd851,	// (0x0003f01e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf959,	// (0x00041126) list_single_graphic_popup_conf4_pane_g

0x1258,	// (0x00032a25) list_single_graphic_popup_conf4_pane_t1

0x5c16,	// (0x000373e3) popup_vtel_slider_window_ParamLimits

0x5c16,	// (0x000373e3) popup_vtel_slider_window

0x0dc6,	// (0x00032593) dialer2_ne_pane_t2_ParamLimits

0x0dc6,	// (0x00032593) dialer2_ne_pane_t2

0x0001,

0xf83a,	// (0x00041007) dialer2_ne_pane_t_ParamLimits

0xf83a,	// (0x00041007) dialer2_ne_pane_t

0xce59,	// (0x0003e626) bg_popup_sub_pane_cp010_ParamLimits

0xce59,	// (0x0003e626) bg_popup_sub_pane_cp010

0x9c77,	// (0x0003b444) popup_vtel_slider_window_g1_ParamLimits

0x9c77,	// (0x0003b444) popup_vtel_slider_window_g1

0x9c83,	// (0x0003b450) popup_vtel_slider_window_g2_ParamLimits

0x9c83,	// (0x0003b450) popup_vtel_slider_window_g2

0x0003,

0xf95e,	// (0x0004112b) popup_vtel_slider_window_g_ParamLimits

0xf95e,	// (0x0004112b) popup_vtel_slider_window_g

0x9ccb,	// (0x0003b498) vtel_slider_pane_ParamLimits

0x9ccb,	// (0x0003b498) vtel_slider_pane

0x9cda,	// (0x0003b4a7) vtel_slider_pane_g1_ParamLimits

0x9cda,	// (0x0003b4a7) vtel_slider_pane_g1

0x9ce7,	// (0x0003b4b4) vtel_slider_pane_g2_ParamLimits

0x9ce7,	// (0x0003b4b4) vtel_slider_pane_g2

0x9cf4,	// (0x0003b4c1) vtel_slider_pane_g3_ParamLimits

0x9cf4,	// (0x0003b4c1) vtel_slider_pane_g3

0x9cda,	// (0x0003b4a7) vtel_slider_pane_g4_ParamLimits

0x9cda,	// (0x0003b4a7) vtel_slider_pane_g4

0x9d01,	// (0x0003b4ce) vtel_slider_pane_g5_ParamLimits

0x9d01,	// (0x0003b4ce) vtel_slider_pane_g5

0x0004,

0xf967,	// (0x00041134) vtel_slider_pane_g_ParamLimits

0xf967,	// (0x00041134) vtel_slider_pane_g

0xce59,	// (0x0003e626) main_gallery2_pane

0x94dc,	// (0x0003aca9) aid_size_row_itut2_dropdow_list_ParamLimits

0x94dc,	// (0x0003aca9) aid_size_row_itut2_dropdow_list

0x953c,	// (0x0003ad09) grid_vitu2_function_top_pane_ParamLimits

0x953c,	// (0x0003ad09) grid_vitu2_function_top_pane

0x9596,	// (0x0003ad63) popup_vitu2_dropdown_list_window_ParamLimits

0x9596,	// (0x0003ad63) popup_vitu2_dropdown_list_window

0x95b4,	// (0x0003ad81) popup_vitu2_match_list_window

0x9d0e,	// (0x0003b4db) cell_vitu2_function_top_pane_ParamLimits

0x9d0e,	// (0x0003b4db) cell_vitu2_function_top_pane

0x9d28,	// (0x0003b4f5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9d28,	// (0x0003b4f5) cell_vitu2_function_top_pane_cp01

0x9d44,	// (0x0003b511) cell_vitu2_function_top_wide_pane_ParamLimits

0x9d44,	// (0x0003b511) cell_vitu2_function_top_wide_pane

0xce59,	// (0x0003e626) bg_button_pane_cp012

0x9d62,	// (0x0003b52f) cell_vitu2_function_top_pane_g1

0x9d76,	// (0x0003b543) bg_button_pane_cp013_ParamLimits

0x9d76,	// (0x0003b543) bg_button_pane_cp013

0x9d92,	// (0x0003b55f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9d92,	// (0x0003b55f) cell_vitu2_function_top_wide_pane_g1

0xc7bb,	// (0x0003df88) bg_popup_sub_pane_cp20

0x9daa,	// (0x0003b577) list_vitu2_match_list_pane

0x0fed,	// (0x000327ba) bg_popup_sub_pane_cp20_g1

0x0ff5,	// (0x000327c2) bg_popup_sub_pane_cp20_g2

0xd331,	// (0x0003eafe) bg_popup_sub_pane_cp20_g3

0x0ffd,	// (0x000327ca) bg_popup_sub_pane_cp20_g4

0xd311,	// (0x0003eade) bg_popup_sub_pane_cp20_g5

0x128a,	// (0x00032a57) bg_popup_sub_pane_cp20_g6

0x100d,	// (0x000327da) bg_popup_sub_pane_cp20_g7

0x1015,	// (0x000327e2) bg_popup_sub_pane_cp20_g8

0x101d,	// (0x000327ea) bg_popup_sub_pane_cp20_g9

0x0008,

0xf972,	// (0x0004113f) bg_popup_sub_pane_cp20_g

0x9dc2,	// (0x0003b58f) list_vitu2_match_list_item_pane_ParamLimits

0x9dc2,	// (0x0003b58f) list_vitu2_match_list_item_pane

0x9dd4,	// (0x0003b5a1) list_vitu2_match_list_item_pane_t1

0xc7b1,	// (0x0003df7e) bg_popup_sub_pane_cp21

0xd0d6,	// (0x0003e8a3) grid_vitu2_dropdown_list_pane

0x9de2,	// (0x0003b5af) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9de2,	// (0x0003b5af) cell_vitu2_dropdown_list_char_pane

0x9e02,	// (0x0003b5cf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9e02,	// (0x0003b5cf) cell_vitu2_dropdown_list_ctrl_pane

0x12c4,	// (0x00032a91) cell_vitu2_dropdown_list_char_pane_g1

0x12bb,	// (0x00032a88) cell_vitu2_dropdown_list_char_pane_g2

0x12b2,	// (0x00032a7f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf985,	// (0x00041152) cell_vitu2_dropdown_list_char_pane_g

0x9e2a,	// (0x0003b5f7) cell_vitu2_dropdown_list_char_pane_t1

0x9e38,	// (0x0003b605) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9e38,	// (0x0003b605) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9e45,	// (0x0003b612) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9e45,	// (0x0003b612) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9e52,	// (0x0003b61f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9e52,	// (0x0003b61f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9e5f,	// (0x0003b62c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9e5f,	// (0x0003b62c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xceb2,	// (0x0003e67f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xceb2,	// (0x0003e67f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98c,	// (0x00041159) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98c,	// (0x00041159) cell_vitu2_dropdown_list_ctrl_pane_g

0x9e7b,	// (0x0003b648) aid_size_cell_gallery2_ParamLimits

0x9e7b,	// (0x0003b648) aid_size_cell_gallery2

0x9e95,	// (0x0003b662) grid_gallery2_pane_ParamLimits

0x9e95,	// (0x0003b662) grid_gallery2_pane

0x9eac,	// (0x0003b679) scroll_pane_cp029_ParamLimits

0x9eac,	// (0x0003b679) scroll_pane_cp029

0x9ebc,	// (0x0003b689) cell_gallery2_pane_ParamLimits

0x9ebc,	// (0x0003b689) cell_gallery2_pane

0x12cd,	// (0x00032a9a) cell_gallery2_pane_g2

0x9f11,	// (0x0003b6de) cell_gallery2_pane_g3

0x12d5,	// (0x00032aa2) cell_gallery2_pane_g4

0x12dd,	// (0x00032aaa) cell_gallery2_pane_g5

0xd0d6,	// (0x0003e8a3) grid_highlight_pane_cp10

0x95b4,	// (0x0003ad81) popup_vitu2_match_list_window_ParamLimits

0x95c6,	// (0x0003ad93) popup_vitu2_query_window_ParamLimits

0x95c6,	// (0x0003ad93) popup_vitu2_query_window

0xc7b1,	// (0x0003df7e) bg_vitu2_candi_button_pane

0x12c4,	// (0x00032a91) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x12bb,	// (0x00032a88) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x12b2,	// (0x00032a7f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4253,	// (0x00035a20) bg_button_pane_cp015

0x9f19,	// (0x0003b6e6) bg_button_pane_cp016

0x9f25,	// (0x0003b6f2) bg_button_pane_cp017

0xe77b,	// (0x0003ff48) bg_popup_sub_pane_cp22

0x12e5,	// (0x00032ab2) popup_vitu2_query_window_g1

0x428d,	// (0x00035a5a) popup_vitu2_query_window_g2

0x0002,

0xf997,	// (0x00041164) popup_vitu2_query_window_g

0x42a5,	// (0x00035a72) popup_vitu2_query_window_t1_ParamLimits

0x42a5,	// (0x00035a72) popup_vitu2_query_window_t1

0x42d8,	// (0x00035aa5) popup_vitu2_query_window_t2_ParamLimits

0x42d8,	// (0x00035aa5) popup_vitu2_query_window_t2

0x42ea,	// (0x00035ab7) popup_vitu2_query_window_t3_ParamLimits

0x42ea,	// (0x00035ab7) popup_vitu2_query_window_t3

0x9f4c,	// (0x0003b719) popup_vitu2_query_window_t4_ParamLimits

0x9f4c,	// (0x0003b719) popup_vitu2_query_window_t4

0x9f60,	// (0x0003b72d) popup_vitu2_query_window_t5_ParamLimits

0x9f60,	// (0x0003b72d) popup_vitu2_query_window_t5

0x0006,

0xf99e,	// (0x0004116b) popup_vitu2_query_window_t_ParamLimits

0xf99e,	// (0x0004116b) popup_vitu2_query_window_t

0x10ef,	// (0x000328bc) main_cset_text_pane

0x9987,	// (0x0003b154) aid_area_touch_slider_ParamLimits

0x99a3,	// (0x0003b170) cset_slider_pane_ParamLimits

0x99c6,	// (0x0003b193) main_cset_slider_pane_g1_ParamLimits

0x99db,	// (0x0003b1a8) main_cset_slider_pane_g2_ParamLimits

0x1110,	// (0x000328dd) main_cset_slider_pane_g3_ParamLimits

0x1110,	// (0x000328dd) main_cset_slider_pane_g3

0x99f0,	// (0x0003b1bd) main_cset_slider_pane_g4_ParamLimits

0x99f0,	// (0x0003b1bd) main_cset_slider_pane_g4

0x99ff,	// (0x0003b1cc) main_cset_slider_pane_g5_ParamLimits

0x99ff,	// (0x0003b1cc) main_cset_slider_pane_g5

0x9a0d,	// (0x0003b1da) main_cset_slider_pane_g6_ParamLimits

0x9a0d,	// (0x0003b1da) main_cset_slider_pane_g6

0xf8fb,	// (0x000410c8) main_cset_slider_pane_g_ParamLimits

0x1158,	// (0x00032925) main_cset_slider_pane_t1_ParamLimits

0x9aa1,	// (0x0003b26e) main_cset_slider_pane_t2_ParamLimits

0x9abb,	// (0x0003b288) main_cset_slider_pane_t3_ParamLimits

0x9ad5,	// (0x0003b2a2) main_cset_slider_pane_t4_ParamLimits

0x9af3,	// (0x0003b2c0) main_cset_slider_pane_t5_ParamLimits

0x9b11,	// (0x0003b2de) main_cset_slider_pane_t6_ParamLimits

0x9b28,	// (0x0003b2f5) main_cset_slider_pane_t7_ParamLimits

0x9b56,	// (0x0003b323) main_cset_slider_pane_t8_ParamLimits

0x9b56,	// (0x0003b323) main_cset_slider_pane_t8

0x9b7e,	// (0x0003b34b) main_cset_slider_pane_t9_ParamLimits

0x9b7e,	// (0x0003b34b) main_cset_slider_pane_t9

0x9ba6,	// (0x0003b373) main_cset_slider_pane_t10_ParamLimits

0x9ba6,	// (0x0003b373) main_cset_slider_pane_t10

0x9bce,	// (0x0003b39b) main_cset_slider_pane_t11_ParamLimits

0x9bce,	// (0x0003b39b) main_cset_slider_pane_t11

0x9bf8,	// (0x0003b3c5) main_cset_slider_pane_t12_ParamLimits

0x9bf8,	// (0x0003b3c5) main_cset_slider_pane_t12

0x9c17,	// (0x0003b3e4) main_cset_slider_pane_t13_ParamLimits

0x9c17,	// (0x0003b3e4) main_cset_slider_pane_t13

0xf920,	// (0x000410ed) main_cset_slider_pane_t_ParamLimits

0xc7b1,	// (0x0003df7e) bg_popup_sub_pane_cp011

0x12f1,	// (0x00032abe) main_cset_text_pane_g1

0x12f9,	// (0x00032ac6) main_cset_text_pane_t1

0x1307,	// (0x00032ad4) main_cset_text_pane_t2

0x1315,	// (0x00032ae2) main_cset_text_pane_t3

0x1323,	// (0x00032af0) main_cset_text_pane_t4

0x1331,	// (0x00032afe) main_cset_text_pane_t5

0x133f,	// (0x00032b0c) main_cset_text_pane_t6

0x134d,	// (0x00032b1a) main_cset_text_pane_t7

0x0006,

0xf9ad,	// (0x0004117a) main_cset_text_pane_t

0xc7b1,	// (0x0003df7e) main_cam4_burst_pane

0xc7b1,	// (0x0003df7e) main_cam5_pane

0x98cf,	// (0x0003b09c) bg_button_pane_cp019

0x98d8,	// (0x0003b0a5) bg_button_pane_cp020

0x111c,	// (0x000328e9) main_cset_slider_pane_g7_ParamLimits

0x111c,	// (0x000328e9) main_cset_slider_pane_g7

0x1128,	// (0x000328f5) main_cset_slider_pane_g8_ParamLimits

0x1128,	// (0x000328f5) main_cset_slider_pane_g8

0x9a21,	// (0x0003b1ee) main_cset_slider_pane_g9_ParamLimits

0x9a21,	// (0x0003b1ee) main_cset_slider_pane_g9

0x9a2d,	// (0x0003b1fa) main_cset_slider_pane_g10_ParamLimits

0x9a2d,	// (0x0003b1fa) main_cset_slider_pane_g10

0x9a39,	// (0x0003b206) main_cset_slider_pane_g11_ParamLimits

0x9a39,	// (0x0003b206) main_cset_slider_pane_g11

0x9a45,	// (0x0003b212) main_cset_slider_pane_g12_ParamLimits

0x9a45,	// (0x0003b212) main_cset_slider_pane_g12

0x9a51,	// (0x0003b21e) main_cset_slider_pane_g13_ParamLimits

0x9a51,	// (0x0003b21e) main_cset_slider_pane_g13

0x9a5f,	// (0x0003b22c) main_cset_slider_pane_g14_ParamLimits

0x9a5f,	// (0x0003b22c) main_cset_slider_pane_g14

0x9a6d,	// (0x0003b23a) main_cset_slider_pane_g15_ParamLimits

0x9a6d,	// (0x0003b23a) main_cset_slider_pane_g15

0x1180,	// (0x0003294d) main_cset_slider_pane_t14_ParamLimits

0x1180,	// (0x0003294d) main_cset_slider_pane_t14

0x11b9,	// (0x00032986) main_cset_slider_pane_t15_ParamLimits

0x11b9,	// (0x00032986) main_cset_slider_pane_t15

0x9f74,	// (0x0003b741) aid_cam4_burst_size_cell_ParamLimits

0x9f74,	// (0x0003b741) aid_cam4_burst_size_cell

0x9f90,	// (0x0003b75d) grid_cam4_burst_pane_ParamLimits

0x9f90,	// (0x0003b75d) grid_cam4_burst_pane

0x9fc0,	// (0x0003b78d) linegrid_cam4_burst_pane_ParamLimits

0x9fc0,	// (0x0003b78d) linegrid_cam4_burst_pane

0x9fe0,	// (0x0003b7ad) scroll_pane_cp30_ParamLimits

0x9fe0,	// (0x0003b7ad) scroll_pane_cp30

0x9fec,	// (0x0003b7b9) cell_cam4_burst_pane_ParamLimits

0x9fec,	// (0x0003b7b9) cell_cam4_burst_pane

0x1367,	// (0x00032b34) linegrid_cam4_burst_pane_g1_ParamLimits

0x1367,	// (0x00032b34) linegrid_cam4_burst_pane_g1

0xa028,	// (0x0003b7f5) linegrid_cam4_burst_pane_g2_ParamLimits

0xa028,	// (0x0003b7f5) linegrid_cam4_burst_pane_g2

0x1374,	// (0x00032b41) linegrid_cam4_burst_pane_g3_ParamLimits

0x1374,	// (0x00032b41) linegrid_cam4_burst_pane_g3

0x0002,

0xf9bc,	// (0x00041189) linegrid_cam4_burst_pane_g_ParamLimits

0xf9bc,	// (0x00041189) linegrid_cam4_burst_pane_g

0xa039,	// (0x0003b806) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa039,	// (0x0003b806) linegrid_cam4_burst_pane_g3_copy1

0x1381,	// (0x00032b4e) linegrid_cam4_burst_pane_g4_ParamLimits

0x1381,	// (0x00032b4e) linegrid_cam4_burst_pane_g4

0xa053,	// (0x0003b820) linegrid_cam4_burst_pane_g5_ParamLimits

0xa053,	// (0x0003b820) linegrid_cam4_burst_pane_g5

0xa064,	// (0x0003b831) linegrid_cam4_burst_pane_g6_ParamLimits

0xa064,	// (0x0003b831) linegrid_cam4_burst_pane_g6

0x138e,	// (0x00032b5b) linegrid_cam4_burst_pane_g7_ParamLimits

0x138e,	// (0x00032b5b) linegrid_cam4_burst_pane_g7

0xa075,	// (0x0003b842) cell_cam4_burst_pane_g1

0x13a7,	// (0x00032b74) main_cam5_pane_t1_ParamLimits

0x13a7,	// (0x00032b74) main_cam5_pane_t1

0x13b9,	// (0x00032b86) main_cam5_pane_t2_ParamLimits

0x13b9,	// (0x00032b86) main_cam5_pane_t2

0x13cb,	// (0x00032b98) main_cam5_pane_t3_ParamLimits

0x13cb,	// (0x00032b98) main_cam5_pane_t3

0x13dd,	// (0x00032baa) main_cam5_pane_t4_ParamLimits

0x13dd,	// (0x00032baa) main_cam5_pane_t4

0x13f5,	// (0x00032bc2) main_cam5_pane_t5_ParamLimits

0x13f5,	// (0x00032bc2) main_cam5_pane_t5

0x1409,	// (0x00032bd6) main_cam5_pane_t6_ParamLimits

0x1409,	// (0x00032bd6) main_cam5_pane_t6

0x141d,	// (0x00032bea) main_cam5_pane_t7_ParamLimits

0x141d,	// (0x00032bea) main_cam5_pane_t7

0x142f,	// (0x00032bfc) main_cam5_pane_t8_ParamLimits

0x142f,	// (0x00032bfc) main_cam5_pane_t8

0x144b,	// (0x00032c18) main_cam5_pane_t9_ParamLimits

0x144b,	// (0x00032c18) main_cam5_pane_t9

0x145d,	// (0x00032c2a) main_cam5_pane_t10_ParamLimits

0x145d,	// (0x00032c2a) main_cam5_pane_t10

0x146f,	// (0x00032c3c) main_cam5_pane_t11_ParamLimits

0x146f,	// (0x00032c3c) main_cam5_pane_t11

0x1481,	// (0x00032c4e) main_cam5_pane_t12_ParamLimits

0x1481,	// (0x00032c4e) main_cam5_pane_t12

0x1496,	// (0x00032c63) main_cam5_pane_t13_ParamLimits

0x1496,	// (0x00032c63) main_cam5_pane_t13

0x000c,

0xf9c8,	// (0x00041195) main_cam5_pane_t_ParamLimits

0xf9c8,	// (0x00041195) main_cam5_pane_t

0x4f2d,	// (0x000366fa) popup_scut_keymap_window_ParamLimits

0x4f2d,	// (0x000366fa) popup_scut_keymap_window

0xa088,	// (0x0003b855) aid_size_cell_brow_shortcut

0xd0d6,	// (0x0003e8a3) bg_popup_window_pane_cp010

0xa094,	// (0x0003b861) grid_scut_pane

0xa0a0,	// (0x0003b86d) cell_scut_pane_ParamLimits

0xa0a0,	// (0x0003b86d) cell_scut_pane

0xa0b7,	// (0x0003b884) cell_scut_pane_g1

0x14b3,	// (0x00032c80) cell_scut_pane_t1

0x14c2,	// (0x00032c8f) cell_scut_pane_t2

0xa0c0,	// (0x0003b88d) cell_scut_pane_t3

0x0002,

0xf9e3,	// (0x000411b0) cell_scut_pane_t

0x81e6,	// (0x000399b3) main_mup3_pane_g8_ParamLimits

0x81e6,	// (0x000399b3) main_mup3_pane_g8

0x94ea,	// (0x0003acb7) area_vitu2_query_pane_ParamLimits

0x94ea,	// (0x0003acb7) area_vitu2_query_pane

0x4268,	// (0x00035a35) input_focus_pane_cp08

0x14d1,	// (0x00032c9e) area_vitu2_query_pane_g1

0x4368,	// (0x00035b35) area_vitu2_query_pane_g2

0x0001,

0xf9ea,	// (0x000411b7) area_vitu2_query_pane_g

0xa0ce,	// (0x0003b89b) area_vitu2_query_pane_t1_ParamLimits

0xa0ce,	// (0x0003b89b) area_vitu2_query_pane_t1

0xa0e2,	// (0x0003b8af) area_vitu2_query_pane_t2_ParamLimits

0xa0e2,	// (0x0003b8af) area_vitu2_query_pane_t2

0x4379,	// (0x00035b46) area_vitu2_query_pane_t3_ParamLimits

0x4379,	// (0x00035b46) area_vitu2_query_pane_t3

0x43a1,	// (0x00035b6e) area_vitu2_query_pane_t4_ParamLimits

0x43a1,	// (0x00035b6e) area_vitu2_query_pane_t4

0x43c9,	// (0x00035b96) area_vitu2_query_pane_t5_ParamLimits

0x43c9,	// (0x00035b96) area_vitu2_query_pane_t5

0x43f1,	// (0x00035bbe) area_vitu2_query_pane_t6_ParamLimits

0x43f1,	// (0x00035bbe) area_vitu2_query_pane_t6

0x0006,

0xf9ef,	// (0x000411bc) area_vitu2_query_pane_t_ParamLimits

0xf9ef,	// (0x000411bc) area_vitu2_query_pane_t

0x9f19,	// (0x0003b6e6) bg_button_pane_cp018

0xa0f6,	// (0x0003b8c3) bg_button_pane_cp021

0x443d,	// (0x00035c0a) bg_button_pane_cp022

0x4460,	// (0x00035c2d) input_focus_pane_cp09

0xd960,	// (0x0003f12d) aid_size_touch_mv_arrow_left

0xd98b,	// (0x0003f158) aid_size_touch_mv_arrow_right

0x9a85,	// (0x0003b252) main_cset_slider_pane_g16_ParamLimits

0x9a85,	// (0x0003b252) main_cset_slider_pane_g16

0x9a93,	// (0x0003b260) main_cset_slider_pane_g17_ParamLimits

0x9a93,	// (0x0003b260) main_cset_slider_pane_g17

0xa075,	// (0x0003b842) cell_cam4_burst_pane_g1_ParamLimits

0xc7b1,	// (0x0003df7e) compa_mode_pane

0x9c8f,	// (0x0003b45c) popup_vtel_slider_window_g3_ParamLimits

0x9c8f,	// (0x0003b45c) popup_vtel_slider_window_g3

0x9ca3,	// (0x0003b470) popup_vtel_slider_window_g4_ParamLimits

0x9ca3,	// (0x0003b470) popup_vtel_slider_window_g4

0x9cb7,	// (0x0003b484) popup_vtel_slider_window_t1_ParamLimits

0x9cb7,	// (0x0003b484) popup_vtel_slider_window_t1

0xc7b1,	// (0x0003df7e) main_cl_pane

0x7aff,	// (0x000392cc) popup_imed_adjust2_window_ParamLimits

0xe77b,	// (0x0003ff48) bg_tb_trans_pane_cp05_ParamLimits

0x0809,	// (0x00031fd6) popup_imed_adjust2_window_g1_ParamLimits

0x0818,	// (0x00031fe5) popup_imed_adjust2_window_g2_ParamLimits

0x0818,	// (0x00031fe5) popup_imed_adjust2_window_g2

0x0824,	// (0x00031ff1) popup_imed_adjust2_window_g3_ParamLimits

0x0824,	// (0x00031ff1) popup_imed_adjust2_window_g3

0x0002,

0xf765,	// (0x00040f32) popup_imed_adjust2_window_g_ParamLimits

0xf765,	// (0x00040f32) popup_imed_adjust2_window_g

0x0830,	// (0x00031ffd) popup_imed_adjust2_window_t1_ParamLimits

0x0848,	// (0x00032015) slider_imed_adjust_pane_ParamLimits

0x085c,	// (0x00032029) slider_imed_adjust_pane_g1_ParamLimits

0x086c,	// (0x00032039) slider_imed_adjust_pane_g2_ParamLimits

0x087c,	// (0x00032049) slider_imed_adjust_pane_g3_ParamLimits

0x088d,	// (0x0003205a) slider_imed_adjust_pane_g4_ParamLimits

0xf76c,	// (0x00040f39) slider_imed_adjust_pane_g_ParamLimits

0x923b,	// (0x0003aa08) aid_touch_area_cam4_ParamLimits

0x923b,	// (0x0003aa08) aid_touch_area_cam4

0x924b,	// (0x0003aa18) battery_pane_cp01

0x92d2,	// (0x0003aa9f) main_camera4_pane_g6_ParamLimits

0x92d2,	// (0x0003aa9f) main_camera4_pane_g6

0x92f0,	// (0x0003aabd) main_camera4_pane_t2_ParamLimits

0x92f0,	// (0x0003aabd) main_camera4_pane_t2

0x0001,

0xf86e,	// (0x0004103b) main_camera4_pane_t_ParamLimits

0xf86e,	// (0x0004103b) main_camera4_pane_t

0x9371,	// (0x0003ab3e) aid_touch_area_vid4_ParamLimits

0x9371,	// (0x0003ab3e) aid_touch_area_vid4

0x93b1,	// (0x0003ab7e) main_video4_pane_g5_ParamLimits

0x93b1,	// (0x0003ab7e) main_video4_pane_g5

0x93d5,	// (0x0003aba2) vid4_progress_pane_ParamLimits

0x93d5,	// (0x0003aba2) vid4_progress_pane

0x114c,	// (0x00032919) main_cset_slider_pane_g18_ParamLimits

0x114c,	// (0x00032919) main_cset_slider_pane_g18

0x139b,	// (0x00032b68) cell_cam4_burst_pane_g2_ParamLimits

0x139b,	// (0x00032b68) cell_cam4_burst_pane_g2

0x0001,

0xf9c3,	// (0x00041190) cell_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00041190) cell_cam4_burst_pane_g

0xa102,	// (0x0003b8cf) bg_cl_pane_ParamLimits

0xa102,	// (0x0003b8cf) bg_cl_pane

0xa10e,	// (0x0003b8db) cl_header_pane_ParamLimits

0xa10e,	// (0x0003b8db) cl_header_pane

0xa11a,	// (0x0003b8e7) cl_listscroll_pane_ParamLimits

0xa11a,	// (0x0003b8e7) cl_listscroll_pane

0x1579,	// (0x00032d46) bg_cl_pane_g1

0x1581,	// (0x00032d4e) bg_cl_pane_g2

0x1589,	// (0x00032d56) bg_cl_pane_g3

0x1591,	// (0x00032d5e) bg_cl_pane_g4

0x1599,	// (0x00032d66) bg_cl_pane_g5

0x15a1,	// (0x00032d6e) bg_cl_pane_g6

0x15a9,	// (0x00032d76) bg_cl_pane_g7

0x15b1,	// (0x00032d7e) bg_cl_pane_g8

0x15b9,	// (0x00032d86) bg_cl_pane_g9

0x0008,

0xf9fe,	// (0x000411cb) bg_cl_pane_g

0xa126,	// (0x0003b8f3) aid_height_cl_leading_ParamLimits

0xa126,	// (0x0003b8f3) aid_height_cl_leading

0xa132,	// (0x0003b8ff) aid_height_cl_text_ParamLimits

0xa132,	// (0x0003b8ff) aid_height_cl_text

0xc7bb,	// (0x0003df88) bg_cl_header_pane_ParamLimits

0xc7bb,	// (0x0003df88) bg_cl_header_pane

0xa14a,	// (0x0003b917) cl_header_pane_g1_ParamLimits

0xa14a,	// (0x0003b917) cl_header_pane_g1

0xa157,	// (0x0003b924) cl_header_pane_t1_ParamLimits

0xa157,	// (0x0003b924) cl_header_pane_t1

0x15c1,	// (0x00032d8e) cl_list_pane

0x1107,	// (0x000328d4) hc_scroll_pane_cp01

0xd311,	// (0x0003eade) bg_cl_header_pane_g1

0x0fed,	// (0x000327ba) bg_cl_header_pane_g2

0xd331,	// (0x0003eafe) bg_cl_header_pane_g3

0x0ffd,	// (0x000327ca) bg_cl_header_pane_g4

0x0ff5,	// (0x000327c2) bg_cl_header_pane_g5

0x128a,	// (0x00032a57) bg_cl_header_pane_g6

0x1015,	// (0x000327e2) bg_cl_header_pane_g7

0x101d,	// (0x000327ea) bg_cl_header_pane_g8

0x100d,	// (0x000327da) bg_cl_header_pane_g9

0x0008,

0xfa11,	// (0x000411de) bg_cl_header_pane_g

0xa169,	// (0x0003b936) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa169,	// (0x0003b936) hc_cl_list_double_graphic_heading_pane

0xa17d,	// (0x0003b94a) hc_cl_list_single_graphic_pane_ParamLimits

0xa17d,	// (0x0003b94a) hc_cl_list_single_graphic_pane

0xa197,	// (0x0003b964) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa197,	// (0x0003b964) hc_cl_list_single_graphic_pane_g1

0xa1a3,	// (0x0003b970) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa1a3,	// (0x0003b970) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa24,	// (0x000411f1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa24,	// (0x000411f1) hc_cl_list_single_graphic_pane_g

0xa1b7,	// (0x0003b984) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa1b7,	// (0x0003b984) hc_cl_list_single_graphic_pane_t1

0xa197,	// (0x0003b964) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa197,	// (0x0003b964) hc_cl_list_double_graphic_heading_pane_g1

0xa1cc,	// (0x0003b999) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa1cc,	// (0x0003b999) hc_cl_list_double_graphic_heading_pane_g2

0xa1e0,	// (0x0003b9ad) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa1e0,	// (0x0003b9ad) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa29,	// (0x000411f6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa29,	// (0x000411f6) hc_cl_list_double_graphic_heading_pane_g

0xa1f4,	// (0x0003b9c1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa1f4,	// (0x0003b9c1) hc_cl_list_double_graphic_heading_pane_t1

0xa209,	// (0x0003b9d6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa209,	// (0x0003b9d6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa30,	// (0x000411fd) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa30,	// (0x000411fd) hc_cl_list_double_graphic_heading_pane_t

0xa226,	// (0x0003b9f3) vid4_progress_pane_g1

0xa236,	// (0x0003ba03) vid4_progress_pane_g2

0xa246,	// (0x0003ba13) vid4_progress_pane_g3

0xa258,	// (0x0003ba25) vid4_progress_pane_g4

0x0004,

0xfa35,	// (0x00041202) vid4_progress_pane_g

0xa270,	// (0x0003ba3d) vid4_progress_pane_t1

0xa286,	// (0x0003ba53) vid4_progress_pane_t2

0x0002,

0xfa40,	// (0x0004120d) vid4_progress_pane_t

0xa2b1,	// (0x0003ba7e) wait_bar_pane_cp07

0x00bd,	// (0x0003188a) blid_firmament_pane_ParamLimits

0x0100,	// (0x000318cd) popup_blid_sat_info2_window_g1

0x0124,	// (0x000318f1) popup_blid_sat_info2_window_t3

0x0132,	// (0x000318ff) popup_blid_sat_info2_window_t4

0x0140,	// (0x0003190d) popup_blid_sat_info2_window_t5

0x014e,	// (0x0003191b) popup_blid_sat_info2_window_t6

0x015e,	// (0x0003192b) popup_blid_sat_info2_window_t7

0x016c,	// (0x00031939) popup_blid_sat_info2_window_t8

0x017a,	// (0x00031947) popup_blid_sat_info2_window_t9

0x0188,	// (0x00031955) popup_blid_sat_info2_window_t10

0x0249,	// (0x00031a16) aid_firma_cardinal_ParamLimits

0x025d,	// (0x00031a2a) blid_firmament_pane_t1_ParamLimits

0x0274,	// (0x00031a41) blid_firmament_pane_t2_ParamLimits

0x028b,	// (0x00031a58) blid_firmament_pane_t3_ParamLimits

0x02a2,	// (0x00031a6f) blid_firmament_pane_t4_ParamLimits

0xf65e,	// (0x00040e2b) blid_firmament_pane_t_ParamLimits

0x02b9,	// (0x00031a86) blid_sat_info_pane_ParamLimits

0xce59,	// (0x0003e626) main_cam_set_pane_ParamLimits

0x88b5,	// (0x0003a082) aid_size_cell_colour_35_ParamLimits

0x88cf,	// (0x0003a09c) aid_size_cell_colour_112_ParamLimits

0x88e6,	// (0x0003a0b3) aid_size_cell_effect_ParamLimits

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp02_ParamLimits

0xe7b4,	// (0x0003ff81) heading_imed_pane_ParamLimits

0x8900,	// (0x0003a0cd) listscroll_imed_pane_ParamLimits

0xe52d,	// (0x0003fcfa) popup_call2_audio_first_window_g5_ParamLimits

0xe52d,	// (0x0003fcfa) popup_call2_audio_first_window_g5

0x8f31,	// (0x0003a6fe) aid_size_touch_image3_arrow_left_ParamLimits

0x8f31,	// (0x0003a6fe) aid_size_touch_image3_arrow_left

0x8f47,	// (0x0003a714) aid_size_touch_image3_arrow_right_ParamLimits

0x8f47,	// (0x0003a714) aid_size_touch_image3_arrow_right

0xa29b,	// (0x0003ba68) vid4_progress_pane_t3

0x8a82,	// (0x0003a24f) main_hwr_training_symbol_option_pane_ParamLimits

0x8a82,	// (0x0003a24f) main_hwr_training_symbol_option_pane

0x0a42,	// (0x0003220f) popup_hwr_training_preview_window_ParamLimits

0x0a42,	// (0x0003220f) popup_hwr_training_preview_window

0x8ae3,	// (0x0003a2b0) hwr_training_navi_pane_g5_ParamLimits

0x8ae3,	// (0x0003a2b0) hwr_training_navi_pane_g5

0x0fdb,	// (0x000327a8) popup_char_count_window

0xc7bb,	// (0x0003df88) bg_popup_sub_pane_cp20_ParamLimits

0x9daa,	// (0x0003b577) list_vitu2_match_list_pane_ParamLimits

0x9db6,	// (0x0003b583) vitu2_page_scroll_pane_ParamLimits

0x9db6,	// (0x0003b583) vitu2_page_scroll_pane

0x1657,	// (0x00032e24) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1657,	// (0x00032e24) list_single_hwr_training_symbol_option_pane

0x166a,	// (0x00032e37) list_single_hwr_training_symbol_option_pane_g1

0x1672,	// (0x00032e3f) list_single_hwr_training_symbol_option_pane_t1

0x1680,	// (0x00032e4d) bg_button_pane_cp023

0x1689,	// (0x00032e56) bg_button_pane_cp024

0x16bc,	// (0x00032e89) vitu2_page_scroll_pane_g1

0x16c4,	// (0x00032e91) vitu2_page_scroll_pane_g2

0x0001,

0xfa47,	// (0x00041214) vitu2_page_scroll_pane_g

0x16cc,	// (0x00032e99) vitu2_page_scroll_pane_t1

0xe7ab,	// (0x0003ff78) popup_char_count_window_g1

0x16db,	// (0x00032ea8) popup_char_count_window_g2

0xe8c1,	// (0x0004008e) popup_char_count_window_g3

0x0002,

0xfa4c,	// (0x00041219) popup_char_count_window_g

0x16e4,	// (0x00032eb1) popup_char_count_window_t1

0xc7b1,	// (0x0003df7e) main_vded2_pane

0x07f5,	// (0x00031fc2) aid_size_cell_imed_line

0x07ff,	// (0x00031fcc) grid_imed_line_width_pane

0x9441,	// (0x0003ac0e) vid4_indicators_pane_g4

0x16f2,	// (0x00032ebf) cell_imed_line_width_pane_ParamLimits

0x16f2,	// (0x00032ebf) cell_imed_line_width_pane

0x1706,	// (0x00032ed3) cell_imed_line_width_pane_g1

0x170f,	// (0x00032edc) cell_imed_line_width_pane_g2

0x0001,

0xfa53,	// (0x00041220) cell_imed_line_width_pane_g

0xa2c2,	// (0x0003ba8f) main_vded2_pane_g1_ParamLimits

0xa2c2,	// (0x0003ba8f) main_vded2_pane_g1

0xa2cf,	// (0x0003ba9c) main_vded2_pane_g2_ParamLimits

0xa2cf,	// (0x0003ba9c) main_vded2_pane_g2

0x0001,

0xfa58,	// (0x00041225) main_vded2_pane_g_ParamLimits

0xfa58,	// (0x00041225) main_vded2_pane_g

0xa2dd,	// (0x0003baaa) vded2_slider_pane_ParamLimits

0xa2dd,	// (0x0003baaa) vded2_slider_pane

0xa2ea,	// (0x0003bab7) aid_size_touch_vded2_end

0xa2f4,	// (0x0003bac1) aid_size_touch_vded2_playhead

0x1717,	// (0x00032ee4) aid_size_touch_vded2_start

0x171f,	// (0x00032eec) vded2_slider_bg_pane

0x1728,	// (0x00032ef5) vded2_slider_pane_g1

0x1731,	// (0x00032efe) vded2_slider_pane_g2

0xa2fc,	// (0x0003bac9) vded2_slider_pane_g3

0x0002,

0xfa5d,	// (0x0004122a) vded2_slider_pane_g

0x1739,	// (0x00032f06) vded2_slider_bg_pane_g1

0x1742,	// (0x00032f0f) vded2_slider_bg_pane_g2

0x174b,	// (0x00032f18) vded2_slider_bg_pane_g3

0x0002,

0xfa64,	// (0x00041231) vded2_slider_bg_pane_g

0x730f,	// (0x00038adc) aid_postcard_touch_down_pane_ParamLimits

0x730f,	// (0x00038adc) aid_postcard_touch_down_pane

0x731f,	// (0x00038aec) aid_postcard_touch_up_pane_ParamLimits

0x731f,	// (0x00038aec) aid_postcard_touch_up_pane

0xc7b1,	// (0x0003df7e) main_blid2_pane

0x7a8e,	// (0x0003925b) popup_blid2_search_window

0xc7b1,	// (0x0003df7e) blid2_gps_pane

0xc7b1,	// (0x0003df7e) blid2_navig_pane

0xc7b1,	// (0x0003df7e) blid2_search_pane

0xc7b1,	// (0x0003df7e) blid2_tripm_pane

0xa305,	// (0x0003bad2) blid2_search_pane_g1_ParamLimits

0xa305,	// (0x0003bad2) blid2_search_pane_g1

0xa315,	// (0x0003bae2) blid2_search_pane_t1_ParamLimits

0xa315,	// (0x0003bae2) blid2_search_pane_t1

0xa327,	// (0x0003baf4) aid_size_cell_blid2_gps_ParamLimits

0xa327,	// (0x0003baf4) aid_size_cell_blid2_gps

0xa337,	// (0x0003bb04) blid2_gps_pane_g1_ParamLimits

0xa337,	// (0x0003bb04) blid2_gps_pane_g1

0xa343,	// (0x0003bb10) grid_blid2_satellite_pane_ParamLimits

0xa343,	// (0x0003bb10) grid_blid2_satellite_pane

0xa353,	// (0x0003bb20) blid2_navig_pane_g1_ParamLimits

0xa353,	// (0x0003bb20) blid2_navig_pane_g1

0xa35f,	// (0x0003bb2c) blid2_navig_pane_t1_ParamLimits

0xa35f,	// (0x0003bb2c) blid2_navig_pane_t1

0xa371,	// (0x0003bb3e) blid2_navig_pane_t2_ParamLimits

0xa371,	// (0x0003bb3e) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x00041238) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x00041238) blid2_navig_pane_t

0xa383,	// (0x0003bb50) blid2_navig_ring_pane_ParamLimits

0xa383,	// (0x0003bb50) blid2_navig_ring_pane

0xa393,	// (0x0003bb60) blid2_speed_pane_ParamLimits

0xa393,	// (0x0003bb60) blid2_speed_pane

0xa39f,	// (0x0003bb6c) blid2_tripm_pane_g1_ParamLimits

0xa39f,	// (0x0003bb6c) blid2_tripm_pane_g1

0xa3af,	// (0x0003bb7c) blid2_tripm_pane_g2_ParamLimits

0xa3af,	// (0x0003bb7c) blid2_tripm_pane_g2

0xa3bb,	// (0x0003bb88) blid2_tripm_pane_g3_ParamLimits

0xa3bb,	// (0x0003bb88) blid2_tripm_pane_g3

0xa3c7,	// (0x0003bb94) blid2_tripm_pane_g4_ParamLimits

0xa3c7,	// (0x0003bb94) blid2_tripm_pane_g4

0xa3d3,	// (0x0003bba0) blid2_tripm_pane_g5_ParamLimits

0xa3d3,	// (0x0003bba0) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x0004123d) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x0004123d) blid2_tripm_pane_g

0xa3ef,	// (0x0003bbbc) blid2_tripm_pane_t1_ParamLimits

0xa3ef,	// (0x0003bbbc) blid2_tripm_pane_t1

0xa403,	// (0x0003bbd0) blid2_tripm_pane_t2_ParamLimits

0xa403,	// (0x0003bbd0) blid2_tripm_pane_t2

0xa415,	// (0x0003bbe2) blid2_tripm_pane_t3_ParamLimits

0xa415,	// (0x0003bbe2) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x0004124a) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x0004124a) blid2_tripm_pane_t

0xa447,	// (0x0003bc14) cell_blid2_satellite_pane_ParamLimits

0xa447,	// (0x0003bc14) cell_blid2_satellite_pane

0xa461,	// (0x0003bc2e) cell_blid2_satellite_pane_g1

0x1754,	// (0x00032f21) cell_blid2_satellite_pane_t1

0xd10c,	// (0x0003e8d9) blid2_speed_pane_g1

0x1762,	// (0x00032f2f) blid2_speed_pane_t1

0x1770,	// (0x00032f3d) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x00041253) blid2_speed_pane_t

0xd10c,	// (0x0003e8d9) blid2_navig_ring_pane_g1

0xa46a,	// (0x0003bc37) blid2_navig_ring_pane_g2

0xa472,	// (0x0003bc3f) blid2_navig_ring_pane_g3

0xa47a,	// (0x0003bc47) blid2_navig_ring_pane_g4

0xa482,	// (0x0003bc4f) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x00041258) blid2_navig_ring_pane_g

0xc7b1,	// (0x0003df7e) bg_popup_window_pane_cp011

0x177e,	// (0x00032f4b) popup_blid2_search_window_g1

0x1786,	// (0x00032f53) popup_blid2_search_window_t1

0x1794,	// (0x00032f61) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x00041263) popup_blid2_search_window_t

0xd220,	// (0x0003e9ed) main_browser_pane_g1

0xcf24,	// (0x0003e6f1) main_browser_pane_ParamLimits

0xce59,	// (0x0003e626) bg_button_pane_cp011_ParamLimits

0x96a2,	// (0x0003ae6f) cell_vitu2_function_pane_g1_ParamLimits

0xe77b,	// (0x0003ff48) bg_popup_sub_pane_cp22_ParamLimits

0x4268,	// (0x00035a35) input_focus_pane_cp08_ParamLimits

0x9f31,	// (0x0003b6fe) popup_vitu2_query_button_pane_ParamLimits

0x9f31,	// (0x0003b6fe) popup_vitu2_query_button_pane

0x4283,	// (0x00035a50) popup_vitu2_query_input_button_pane

0x12e5,	// (0x00032ab2) popup_vitu2_query_window_g1_ParamLimits

0x428d,	// (0x00035a5a) popup_vitu2_query_window_g2_ParamLimits

0xf997,	// (0x00041164) popup_vitu2_query_window_g_ParamLimits

0xc7b1,	// (0x0003df7e) bg_button_pane_cp026

0xa48a,	// (0x0003bc57) popup_vitu2_query_input_button_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp025

0x17a2,	// (0x00032f6f) popup_vitu2_query_button_pane_t1

0x7f07,	// (0x000396d4) main_mp3_pane_t6

0x7f17,	// (0x000396e4) popup_slider_window_cp01

0x9326,	// (0x0003aaf3) cam4_battery_pane

0x9400,	// (0x0003abcd) cam4_battery_pane_cp02

0xa21e,	// (0x0003b9eb) cam4_battery_pane_cp01

0xa21e,	// (0x0003b9eb) cam4_battery_pane_cp03

0xd10c,	// (0x0003e8d9) cam4_battery_pane_g1

0x0024,	// (0x000317f1) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x00041268) cam4_battery_pane_g

0x0196,	// (0x00031963) popup_blid_sat_info2_window_t11

0xd960,	// (0x0003f12d) aid_size_touch_mv_arrow_left_ParamLimits

0xd98b,	// (0x0003f158) aid_size_touch_mv_arrow_right_ParamLimits

0xd9e9,	// (0x0003f1b6) navi_pane_g1_ParamLimits

0xd9f5,	// (0x0003f1c2) navi_pane_g2_ParamLimits

0xda23,	// (0x0003f1f0) navi_pane_g3_ParamLimits

0xf35f,	// (0x00040b2c) navi_pane_g_ParamLimits

0x6fc7,	// (0x00038794) navi_pane_mv_t1_ParamLimits

0x890c,	// (0x0003a0d9) grid_imed_effect_pane_ParamLimits

0x5ad6,	// (0x000372a3) aid_placing_vt_slider_lsc

0xd16f,	// (0x0003e93c) aid_placing_vt_slider_prt

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp01_ParamLimits

0x0434,	// (0x00031c01) popup_image_details_window_g1_ParamLimits

0x0447,	// (0x00031c14) popup_image_details_window_g2_ParamLimits

0x045c,	// (0x00031c29) popup_image_details_window_g3_ParamLimits

0x045c,	// (0x00031c29) popup_image_details_window_g3

0xf69e,	// (0x00040e6b) popup_image_details_window_g_ParamLimits

0x0470,	// (0x00031c3d) popup_image_details_window_t1_ParamLimits

0x0482,	// (0x00031c4f) popup_image_details_window_t2_ParamLimits

0x049b,	// (0x00031c68) popup_image_details_window_t3_ParamLimits

0x04af,	// (0x00031c7c) popup_image_details_window_t4_ParamLimits

0x04ca,	// (0x00031c97) popup_image_details_window_t5_ParamLimits

0xf6a5,	// (0x00040e72) popup_image_details_window_t_ParamLimits

0xa13e,	// (0x0003b90b) cl_header_name_pane_ParamLimits

0xa13e,	// (0x0003b90b) cl_header_name_pane

0xa492,	// (0x0003bc5f) cl_header_name_pane_t1_ParamLimits

0xa492,	// (0x0003bc5f) cl_header_name_pane_t1

0xa4a9,	// (0x0003bc76) cl_header_name_pane_t2_ParamLimits

0xa4a9,	// (0x0003bc76) cl_header_name_pane_t2

0xa4d3,	// (0x0003bca0) cl_header_name_pane_t3_ParamLimits

0xa4d3,	// (0x0003bca0) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x0004126d) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x0004126d) cl_header_name_pane_t

0xdab2,	// (0x0003f27f) navi_pane_mv_g2_ParamLimits

0x0fa6,	// (0x00032773) field_vitu2_entry_pane_g1_ParamLimits

0x0fb2,	// (0x0003277f) field_vitu2_entry_pane_g2_ParamLimits

0xe789,	// (0x0003ff56) field_vitu2_entry_pane_g3_ParamLimits

0xe789,	// (0x0003ff56) field_vitu2_entry_pane_g3

0xf8a0,	// (0x0004106d) field_vitu2_entry_pane_g_ParamLimits

0x9630,	// (0x0003adfd) cell_vitu2_itu_pane_g1_ParamLimits

0x9648,	// (0x0003ae15) cell_vitu2_itu_pane_g2_ParamLimits

0x9648,	// (0x0003ae15) cell_vitu2_itu_pane_g2

0x0001,

0xf8ac,	// (0x00041079) cell_vitu2_itu_pane_g_ParamLimits

0xf8ac,	// (0x00041079) cell_vitu2_itu_pane_g

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp05_ParamLimits

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp05

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp03

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp04

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp10_ParamLimits

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp10

0x444e,	// (0x00035c1b) bg_vkb2_func_pane_cp08

0x9f19,	// (0x0003b6e6) bg_vkb2_func_pane_cp06

0xa0f6,	// (0x0003b8c3) bg_vkb2_func_pane_cp07

0x1692,	// (0x00032e5f) bg_vkb2_func_pane_cp11_ParamLimits

0x1692,	// (0x00032e5f) bg_vkb2_func_pane_cp11

0x16a7,	// (0x00032e74) bg_vkb2_func_pane_cp12_ParamLimits

0x16a7,	// (0x00032e74) bg_vkb2_func_pane_cp12

0xc7b1,	// (0x0003df7e) bg_vkb2_func_pane_cp09

0x0fed,	// (0x000327ba) bg_vkb2_func_pane_g1

0xd331,	// (0x0003eafe) bg_vkb2_func_pane_g2

0x0ff5,	// (0x000327c2) bg_vkb2_func_pane_g3

0x0ffd,	// (0x000327ca) bg_vkb2_func_pane_g4

0x128a,	// (0x00032a57) bg_vkb2_func_pane_g5

0x1015,	// (0x000327e2) bg_vkb2_func_pane_g6

0x101d,	// (0x000327ea) bg_vkb2_func_pane_g7

0x100d,	// (0x000327da) bg_vkb2_func_pane_g8

0xd311,	// (0x0003eade) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x00041274) bg_vkb2_func_pane_g

0xa3e1,	// (0x0003bbae) blid2_tripm_pane_g6_ParamLimits

0xa3e1,	// (0x0003bbae) blid2_tripm_pane_g6

0x0d79,	// (0x00032546) mp4_progress_pane_g1

0xa43b,	// (0x0003bc08) blid2_tripm_values_pane_ParamLimits

0xa43b,	// (0x0003bc08) blid2_tripm_values_pane

0xa4f8,	// (0x0003bcc5) blid2_tripm_values_pane_t1

0xa506,	// (0x0003bcd3) blid2_tripm_values_pane_t2

0xa514,	// (0x0003bce1) blid2_tripm_values_pane_t3

0xa522,	// (0x0003bcef) blid2_tripm_values_pane_t4

0xa530,	// (0x0003bcfd) blid2_tripm_values_pane_t5

0xa53e,	// (0x0003bd0b) blid2_tripm_values_pane_t6

0xa54c,	// (0x0003bd19) blid2_tripm_values_pane_t7

0xa55a,	// (0x0003bd27) blid2_tripm_values_pane_t8

0xa568,	// (0x0003bd35) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x00041287) blid2_tripm_values_pane_t

0x5b16,	// (0x000372e3) call_video_pane_t1_ParamLimits

0x5b37,	// (0x00037304) call_video_pane_t2_ParamLimits

0xf208,	// (0x000409d5) call_video_pane_t_ParamLimits

0x4007,	// (0x000357d4) msg_header_pane_g1_ParamLimits

0xdc77,	// (0x0003f444) msg_header_pane_g2_ParamLimits

0xdc77,	// (0x0003f444) msg_header_pane_g2

0x0001,

0xf402,	// (0x00040bcf) msg_header_pane_g_ParamLimits

0xf402,	// (0x00040bcf) msg_header_pane_g

0xcf24,	// (0x0003e6f1) main_clock2_pane_ParamLimits

0x8686,	// (0x00039e53) grid_clock2_toolbar_pane_ParamLimits

0x8686,	// (0x00039e53) grid_clock2_toolbar_pane

0x8686,	// (0x00039e53) listscroll_clock2_pane_ParamLimits

0x8686,	// (0x00039e53) listscroll_clock2_pane

0x8736,	// (0x00039f03) main_clock2_pane_t3_ParamLimits

0x8736,	// (0x00039f03) main_clock2_pane_t3

0x8748,	// (0x00039f15) main_clock2_pane_t4_ParamLimits

0x8748,	// (0x00039f15) main_clock2_pane_t4

0x17b0,	// (0x00032f7d) cell_clock2_toolbar_pane

0x17b8,	// (0x00032f85) cell_clock2_toolbar_pane_cp01

0x17b8,	// (0x00032f85) cell_clock2_toolbar_pane_cp02

0x17c0,	// (0x00032f8d) cell_clock2_toolbar_pane_cp03

0x17c8,	// (0x00032f95) list_clock2_pane

0xd8e5,	// (0x0003f0b2) scroll_pane_cp10

0x17d0,	// (0x00032f9d) list_single_clock2_pane_ParamLimits

0x17d0,	// (0x00032f9d) list_single_clock2_pane

0xd0d6,	// (0x0003e8a3) list_highlight_pane_cp08

0x17dd,	// (0x00032faa) list_single_clock2_pane_t1

0x17eb,	// (0x00032fb8) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0004129a) list_single_clock2_pane_t

0xc7b1,	// (0x0003df7e) bg_button_pane_cp10

0x17f9,	// (0x00032fc6) cell_clock2_toolbar_pane_g1

0x7271,	// (0x00038a3e) aid_main_viewer_pane_g1_ParamLimits

0x7271,	// (0x00038a3e) aid_main_viewer_pane_g1

0x727d,	// (0x00038a4a) aid_main_viewer_pane_g2_ParamLimits

0x727d,	// (0x00038a4a) aid_main_viewer_pane_g2

0x7289,	// (0x00038a56) aid_main_viewer_pane_g3_ParamLimits

0x7289,	// (0x00038a56) aid_main_viewer_pane_g3

0x729a,	// (0x00038a67) aid_main_viewer_pane_g4_ParamLimits

0x729a,	// (0x00038a67) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00040be0) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00040be0) aid_main_viewer_pane_g

0x7a66,	// (0x00039233) main_calc_pane_ParamLimits

0x7a73,	// (0x00039240) main_dialer2_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_cam6_pane

0xc7b1,	// (0x0003df7e) main_vid6_pane

0x8692,	// (0x00039e5f) listscroll_gen_pane_cp06_ParamLimits

0x8692,	// (0x00039e5f) listscroll_gen_pane_cp06

0x875a,	// (0x00039f27) main_clock2_pane_t5_ParamLimits

0x875a,	// (0x00039f27) main_clock2_pane_t5

0x87a7,	// (0x00039f74) aid_call2_pane_cp10_ParamLimits

0x87b9,	// (0x00039f86) aid_call_pane_cp10_ParamLimits

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g2_ParamLimits

0x87cb,	// (0x00039f98) popup_clock_analogue_window_cp10_g3_ParamLimits

0x87cb,	// (0x00039f98) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd954,	// (0x0003f121) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75a,	// (0x00040f27) popup_clock_analogue_window_cp10_g_ParamLimits

0x87e1,	// (0x00039fae) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8ede,	// (0x0003a6ab) cell_dialer2_keypad_pane_g2_ParamLimits

0x8ede,	// (0x0003a6ab) cell_dialer2_keypad_pane_g2

0x0001,

0xf83f,	// (0x0004100c) cell_dialer2_keypad_pane_g_ParamLimits

0xf83f,	// (0x0004100c) cell_dialer2_keypad_pane_g

0x8efa,	// (0x0003a6c7) cell_dialer2_keypad_pane_t1

0x9974,	// (0x0003b141) main_cset_text2_pane_ParamLimits

0x9974,	// (0x0003b141) main_cset_text2_pane

0x14d1,	// (0x00032c9e) area_vitu2_query_pane_g1_ParamLimits

0x4368,	// (0x00035b35) area_vitu2_query_pane_g2_ParamLimits

0xf9ea,	// (0x000411b7) area_vitu2_query_pane_g_ParamLimits

0x4419,	// (0x00035be6) area_vitu2_query_pane_t7_ParamLimits

0x4419,	// (0x00035be6) area_vitu2_query_pane_t7

0x9f19,	// (0x0003b6e6) bg_button_pane_cp018_ParamLimits

0xa0f6,	// (0x0003b8c3) bg_button_pane_cp021_ParamLimits

0x443d,	// (0x00035c0a) bg_button_pane_cp022_ParamLimits

0x444e,	// (0x00035c1b) bg_vkb2_func_pane_cp08_ParamLimits

0x9f19,	// (0x0003b6e6) bg_vkb2_func_pane_cp06_ParamLimits

0xa0f6,	// (0x0003b8c3) bg_vkb2_func_pane_cp07_ParamLimits

0x4460,	// (0x00035c2d) input_focus_pane_cp09_ParamLimits

0xa576,	// (0x0003bd43) cam6_autofocus_pane_ParamLimits

0xa576,	// (0x0003bd43) cam6_autofocus_pane

0xa598,	// (0x0003bd65) cam6_image_uncrop_pane_ParamLimits

0xa598,	// (0x0003bd65) cam6_image_uncrop_pane

0xa5c5,	// (0x0003bd92) cam6_indi_pane_ParamLimits

0xa5c5,	// (0x0003bd92) cam6_indi_pane

0xa5df,	// (0x0003bdac) cam6_mode_pane_ParamLimits

0xa5df,	// (0x0003bdac) cam6_mode_pane

0xa5f3,	// (0x0003bdc0) cam6_timer_pane_ParamLimits

0xa5f3,	// (0x0003bdc0) cam6_timer_pane

0xa604,	// (0x0003bdd1) cam6_zoom_pane_ParamLimits

0xa604,	// (0x0003bdd1) cam6_zoom_pane

0xa61c,	// (0x0003bde9) cam6_mode_pane_g1_ParamLimits

0xa61c,	// (0x0003bde9) cam6_mode_pane_g1

0xa628,	// (0x0003bdf5) cam6_mode_pane_g2_ParamLimits

0xa628,	// (0x0003bdf5) cam6_mode_pane_g2

0xa634,	// (0x0003be01) cam6_mode_pane_g3_ParamLimits

0xa634,	// (0x0003be01) cam6_mode_pane_g3

0xa640,	// (0x0003be0d) cam6_mode_pane_g4_ParamLimits

0xa640,	// (0x0003be0d) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x0004129f) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x0004129f) cam6_mode_pane_g

0x180f,	// (0x00032fdc) bg_tb_trans_pane_cp08_ParamLimits

0x180f,	// (0x00032fdc) bg_tb_trans_pane_cp08

0x181d,	// (0x00032fea) cam6_battery_pane_ParamLimits

0x181d,	// (0x00032fea) cam6_battery_pane

0x1833,	// (0x00033000) cam6_indi_pane_g1_ParamLimits

0x1833,	// (0x00033000) cam6_indi_pane_g1

0x1845,	// (0x00033012) cam6_indi_pane_g2_ParamLimits

0x1845,	// (0x00033012) cam6_indi_pane_g2

0x1857,	// (0x00033024) cam6_indi_pane_g3_ParamLimits

0x1857,	// (0x00033024) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x000412a8) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x000412a8) cam6_indi_pane_g

0x1869,	// (0x00033036) cam6_indi_pane_t1_ParamLimits

0x1869,	// (0x00033036) cam6_indi_pane_t1

0x9474,	// (0x0003ac41) cam6_autofocus_pane_g1

0x947c,	// (0x0003ac49) cam6_autofocus_pane_g2

0x9484,	// (0x0003ac51) cam6_autofocus_pane_g3

0x948c,	// (0x0003ac59) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x000412af) cam6_autofocus_pane_g

0x188f,	// (0x0003305c) cam6_timer_pane_g1

0x1897,	// (0x00033064) cam6_timer_pane_t1

0x18a5,	// (0x00033072) cam6_zoom_cont_pane

0x18ad,	// (0x0003307a) cam6_zoom_pane_g1

0x18b5,	// (0x00033082) cam6_zoom_pane_g2

0xa64c,	// (0x0003be19) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x000412b8) cam6_zoom_pane_g

0xd10c,	// (0x0003e8d9) cam6_battery_pane_g1

0xd10c,	// (0x0003e8d9) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) cam6_battery_pane_g

0x18bd,	// (0x0003308a) cam6_zoom_cont_pane_g1

0x18c6,	// (0x00033093) cam6_zoom_cont_pane_g2

0x18cf,	// (0x0003309c) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x000412bf) cam6_zoom_cont_pane_g

0xa669,	// (0x0003be36) cam6_mode_pane_cp_ParamLimits

0xa669,	// (0x0003be36) cam6_mode_pane_cp

0xa604,	// (0x0003bdd1) cam6_zoom_pane_cp_ParamLimits

0xa604,	// (0x0003bdd1) cam6_zoom_pane_cp

0xa67d,	// (0x0003be4a) vid6_image_uncrop_cif_pane_ParamLimits

0xa67d,	// (0x0003be4a) vid6_image_uncrop_cif_pane

0xa6a9,	// (0x0003be76) vid6_image_uncrop_nhd_pane_ParamLimits

0xa6a9,	// (0x0003be76) vid6_image_uncrop_nhd_pane

0xa598,	// (0x0003bd65) vid6_image_uncrop_vga_pane_ParamLimits

0xa598,	// (0x0003bd65) vid6_image_uncrop_vga_pane

0xa6c6,	// (0x0003be93) vid6_image_uncrop_wvga_pane_ParamLimits

0xa6c6,	// (0x0003be93) vid6_image_uncrop_wvga_pane

0xa6e3,	// (0x0003beb0) vid6_indi_pane_ParamLimits

0xa6e3,	// (0x0003beb0) vid6_indi_pane

0x180f,	// (0x00032fdc) bg_tb_trans_pane_cp09_ParamLimits

0x180f,	// (0x00032fdc) bg_tb_trans_pane_cp09

0x18e7,	// (0x000330b4) cam6_battery_pane_cp_ParamLimits

0x18e7,	// (0x000330b4) cam6_battery_pane_cp

0x18f3,	// (0x000330c0) vid6_indi_pane_g1_ParamLimits

0x18f3,	// (0x000330c0) vid6_indi_pane_g1

0x1905,	// (0x000330d2) vid6_indi_pane_g2_ParamLimits

0x1905,	// (0x000330d2) vid6_indi_pane_g2

0x1917,	// (0x000330e4) vid6_indi_pane_g3_ParamLimits

0x1917,	// (0x000330e4) vid6_indi_pane_g3

0x192c,	// (0x000330f9) vid6_indi_pane_g4_ParamLimits

0x192c,	// (0x000330f9) vid6_indi_pane_g4

0x1941,	// (0x0003310e) vid6_indi_pane_g5_ParamLimits

0x1941,	// (0x0003310e) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x000412c6) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x000412c6) vid6_indi_pane_g

0x195b,	// (0x00033128) vid6_indi_pane_t1_ParamLimits

0x195b,	// (0x00033128) vid6_indi_pane_t1

0x1971,	// (0x0003313e) vid6_indi_pane_t2_ParamLimits

0x1971,	// (0x0003313e) vid6_indi_pane_t2

0x1999,	// (0x00033166) vid6_indi_pane_t3_ParamLimits

0x1999,	// (0x00033166) vid6_indi_pane_t3

0x19c1,	// (0x0003318e) vid6_indi_pane_t4_ParamLimits

0x19c1,	// (0x0003318e) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x000412d1) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x000412d1) vid6_indi_pane_t

0x19e5,	// (0x000331b2) wait_bar_pane_cp08

0xa706,	// (0x0003bed3) main_cset_text2_pane_t1_ParamLimits

0xa706,	// (0x0003bed3) main_cset_text2_pane_t1

0xa654,	// (0x0003be21) listscroll_gen_pane_cp06_t1_ParamLimits

0xa654,	// (0x0003be21) listscroll_gen_pane_cp06_t1

0xc7b1,	// (0x0003df7e) main_cam6_set_pane

0xceb2,	// (0x0003e67f) bg_tb_trans_pane_cp06_ParamLimits

0x932e,	// (0x0003aafb) cam4_indicators_pane_g1_ParamLimits

0x933f,	// (0x0003ab0c) cam4_indicators_pane_g2_ParamLimits

0xf87c,	// (0x00041049) cam4_indicators_pane_g_ParamLimits

0x9357,	// (0x0003ab24) cam4_indicators_pane_t1_ParamLimits

0xce59,	// (0x0003e626) bg_tb_trans_pane_cp07_ParamLimits

0x9408,	// (0x0003abd5) vid4_indicators_pane_g1_ParamLimits

0x941c,	// (0x0003abe9) vid4_indicators_pane_g2_ParamLimits

0x9430,	// (0x0003abfd) vid4_indicators_pane_g3_ParamLimits

0x9441,	// (0x0003ac0e) vid4_indicators_pane_g4_ParamLimits

0xf88e,	// (0x0004105b) vid4_indicators_pane_g_ParamLimits

0x945d,	// (0x0003ac2a) vid4_indicators_pane_t1_ParamLimits

0xa226,	// (0x0003b9f3) vid4_progress_pane_g1_ParamLimits

0xa236,	// (0x0003ba03) vid4_progress_pane_g2_ParamLimits

0xa246,	// (0x0003ba13) vid4_progress_pane_g3_ParamLimits

0xa258,	// (0x0003ba25) vid4_progress_pane_g4_ParamLimits

0xfa35,	// (0x00041202) vid4_progress_pane_g_ParamLimits

0xa270,	// (0x0003ba3d) vid4_progress_pane_t1_ParamLimits

0xa286,	// (0x0003ba53) vid4_progress_pane_t2_ParamLimits

0xa29b,	// (0x0003ba68) vid4_progress_pane_t3_ParamLimits

0xfa40,	// (0x0004120d) vid4_progress_pane_t_ParamLimits

0xa2b1,	// (0x0003ba7e) wait_bar_pane_cp07_ParamLimits

0xa73d,	// (0x0003bf0a) main_cam6_set_pane_g2_ParamLimits

0xa73d,	// (0x0003bf0a) main_cam6_set_pane_g2

0xa749,	// (0x0003bf16) main_cset6_listscroll_pane_ParamLimits

0xa749,	// (0x0003bf16) main_cset6_listscroll_pane

0xa774,	// (0x0003bf41) main_cset6_slider_pane_ParamLimits

0xa774,	// (0x0003bf41) main_cset6_slider_pane

0xa780,	// (0x0003bf4d) main_cset6_text2_pane_ParamLimits

0xa780,	// (0x0003bf4d) main_cset6_text2_pane

0x19f4,	// (0x000331c1) main_cset6_text_pane

0x19fc,	// (0x000331c9) main_cset_list_pane_copy1_ParamLimits

0x19fc,	// (0x000331c9) main_cset_list_pane_copy1

0x1a0c,	// (0x000331d9) scroll_pane_cp028_copy1

0xa793,	// (0x0003bf60) cset_list_set_pane_copy1

0xa7a9,	// (0x0003bf76) aid_position_infowindow_above_copy1

0xa7b1,	// (0x0003bf7e) aid_position_infowindow_below_copy1

0x449d,	// (0x00035c6a) cset_list_set_pane_g1_copy1

0x422f,	// (0x000359fc) cset_list_set_pane_g3_copy1_ParamLimits

0x422f,	// (0x000359fc) cset_list_set_pane_g3_copy1

0x423e,	// (0x00035a0b) cset_list_set_pane_t1_copy1_ParamLimits

0x423e,	// (0x00035a0b) cset_list_set_pane_t1_copy1

0xce59,	// (0x0003e626) list_highlight_pane_cp021_copy1_ParamLimits

0xce59,	// (0x0003e626) list_highlight_pane_cp021_copy1

0x1a41,	// (0x0003320e) cset6_slider_pane_ParamLimits

0x1a41,	// (0x0003320e) cset6_slider_pane

0x1a6d,	// (0x0003323a) main_cset6_slider_pane_g1_ParamLimits

0x1a6d,	// (0x0003323a) main_cset6_slider_pane_g1

0xa7b9,	// (0x0003bf86) main_cset6_slider_pane_g2_ParamLimits

0xa7b9,	// (0x0003bf86) main_cset6_slider_pane_g2

0x1a95,	// (0x00033262) main_cset6_slider_pane_g3_ParamLimits

0x1a95,	// (0x00033262) main_cset6_slider_pane_g3

0xa7e1,	// (0x0003bfae) main_cset6_slider_pane_g4_ParamLimits

0xa7e1,	// (0x0003bfae) main_cset6_slider_pane_g4

0xa7ed,	// (0x0003bfba) main_cset6_slider_pane_g5_ParamLimits

0xa7ed,	// (0x0003bfba) main_cset6_slider_pane_g5

0x111c,	// (0x000328e9) main_cset6_slider_pane_g7_ParamLimits

0x111c,	// (0x000328e9) main_cset6_slider_pane_g7

0x1128,	// (0x000328f5) main_cset6_slider_pane_g8_ParamLimits

0x1128,	// (0x000328f5) main_cset6_slider_pane_g8

0xa7fb,	// (0x0003bfc8) main_cset6_slider_pane_g9_ParamLimits

0xa7fb,	// (0x0003bfc8) main_cset6_slider_pane_g9

0xa807,	// (0x0003bfd4) main_cset6_slider_pane_g10_ParamLimits

0xa807,	// (0x0003bfd4) main_cset6_slider_pane_g10

0xa813,	// (0x0003bfe0) main_cset6_slider_pane_g11_ParamLimits

0xa813,	// (0x0003bfe0) main_cset6_slider_pane_g11

0xa81f,	// (0x0003bfec) main_cset6_slider_pane_g12_ParamLimits

0xa81f,	// (0x0003bfec) main_cset6_slider_pane_g12

0x1134,	// (0x00032901) main_cset6_slider_pane_g13_ParamLimits

0x1134,	// (0x00032901) main_cset6_slider_pane_g13

0x1140,	// (0x0003290d) main_cset6_slider_pane_g14_ParamLimits

0x1140,	// (0x0003290d) main_cset6_slider_pane_g14

0xa82b,	// (0x0003bff8) main_cset6_slider_pane_g15_ParamLimits

0xa82b,	// (0x0003bff8) main_cset6_slider_pane_g15

0xa843,	// (0x0003c010) main_cset6_slider_pane_g16_ParamLimits

0xa843,	// (0x0003c010) main_cset6_slider_pane_g16

0xa851,	// (0x0003c01e) main_cset6_slider_pane_g17_ParamLimits

0xa851,	// (0x0003c01e) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x000412da) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x000412da) main_cset6_slider_pane_g

0x1aad,	// (0x0003327a) main_cset6_slider_pane_t1_ParamLimits

0x1aad,	// (0x0003327a) main_cset6_slider_pane_t1

0xa86b,	// (0x0003c038) main_cset6_slider_pane_t2_ParamLimits

0xa86b,	// (0x0003c038) main_cset6_slider_pane_t2

0xa896,	// (0x0003c063) main_cset6_slider_pane_t3_ParamLimits

0xa896,	// (0x0003c063) main_cset6_slider_pane_t3

0xa8c1,	// (0x0003c08e) main_cset6_slider_pane_t4_ParamLimits

0xa8c1,	// (0x0003c08e) main_cset6_slider_pane_t4

0xa8ec,	// (0x0003c0b9) main_cset6_slider_pane_t5_ParamLimits

0xa8ec,	// (0x0003c0b9) main_cset6_slider_pane_t5

0x1aee,	// (0x000332bb) main_cset6_slider_pane_t7_ParamLimits

0x1aee,	// (0x000332bb) main_cset6_slider_pane_t7

0xa919,	// (0x0003c0e6) main_cset6_slider_pane_t8_ParamLimits

0xa919,	// (0x0003c0e6) main_cset6_slider_pane_t8

0xa93d,	// (0x0003c10a) main_cset6_slider_pane_t9_ParamLimits

0xa93d,	// (0x0003c10a) main_cset6_slider_pane_t9

0xa961,	// (0x0003c12e) main_cset6_slider_pane_t10_ParamLimits

0xa961,	// (0x0003c12e) main_cset6_slider_pane_t10

0xa985,	// (0x0003c152) main_cset6_slider_pane_t11_ParamLimits

0xa985,	// (0x0003c152) main_cset6_slider_pane_t11

0x1b24,	// (0x000332f1) main_cset6_slider_pane_t14_ParamLimits

0x1b24,	// (0x000332f1) main_cset6_slider_pane_t14

0x1b5d,	// (0x0003332a) main_cset6_slider_pane_t15_ParamLimits

0x1b5d,	// (0x0003332a) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x000412ff) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x000412ff) main_cset6_slider_pane_t

0x0a17,	// (0x000321e4) cset_slider_pane_g1_copy1

0x1b96,	// (0x00033363) cset_slider_pane_g2_copy1

0x1b9f,	// (0x0003336c) cset_slider_pane_g3_copy1

0xc7b1,	// (0x0003df7e) bg_popup_sub_pane_cp011_copy1

0x1bb1,	// (0x0003337e) main_cset_text_pane_g1_copy1

0x12f9,	// (0x00032ac6) main_cset_text_pane_t1_copy1

0x1307,	// (0x00032ad4) main_cset_text_pane_t2_copy1

0x1315,	// (0x00032ae2) main_cset_text_pane_t3_copy1

0x1323,	// (0x00032af0) main_cset_text_pane_t4_copy1

0x1331,	// (0x00032afe) main_cset_text_pane_t5_copy1

0x1bb9,	// (0x00033386) main_cset_text_pane_t6_copy1

0x1bc7,	// (0x00033394) main_cset_text_pane_t7_copy1

0xa9ab,	// (0x0003c178) main_cset_text2_pane_t1_copy1

0xce59,	// (0x0003e626) main_ncimui_pane

0x7ac4,	// (0x00039291) popup_query_ncimui_window_ParamLimits

0x7ac4,	// (0x00039291) popup_query_ncimui_window

0x40d1,	// (0x0003589e) field_cale_ev2_pane_g4_ParamLimits

0x40d1,	// (0x0003589e) field_cale_ev2_pane_g4

0x8bbe,	// (0x0003a38b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8bbe,	// (0x0003a38b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf816,	// (0x00040fe3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf816,	// (0x00040fe3) cell_video_dialer_keypad_pane_g

0x8bd6,	// (0x0003a3a3) cell_video_dialer_keypad_pane_t1

0xc7b1,	// (0x0003df7e) bg_popup_window_pane_cp012

0xee43,	// (0x00040610) heading_pane_cp06

0x1bf3,	// (0x000333c0) ncim_query_content_pane

0xc7b1,	// (0x0003df7e) bg_popup_heading_pane_cp01

0x1bfb,	// (0x000333c8) ncim_heading_pane_t1

0x1c09,	// (0x000333d6) ncim_indicator_popup_pane

0x1c1b,	// (0x000333e8) ncim_query_button_pane

0x1c2f,	// (0x000333fc) ncim_query_content_pane_t1

0x1c41,	// (0x0003340e) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x00041343) ncim_query_content_pane_t

0x1c7b,	// (0x00033448) ncim_query_list_pane

0x1c8d,	// (0x0003345a) ncim_query_popup_pane

0x1c09,	// (0x000333d6) ncim_indicator_popup_pane_ParamLimits

0xaaff,	// (0x0003c2cc) ncim_query_content_pane_g1_ParamLimits

0xaaff,	// (0x0003c2cc) ncim_query_content_pane_g1

0x1c2f,	// (0x000333fc) ncim_query_content_pane_t1_ParamLimits

0x1c41,	// (0x0003340e) ncim_query_content_pane_t2_ParamLimits

0xab0b,	// (0x0003c2d8) ncim_query_content_pane_t3_ParamLimits

0xab0b,	// (0x0003c2d8) ncim_query_content_pane_t3

0xab28,	// (0x0003c2f5) ncim_query_content_pane_t4_ParamLimits

0xab28,	// (0x0003c2f5) ncim_query_content_pane_t4

0xab45,	// (0x0003c312) ncim_query_content_pane_t5_ParamLimits

0xab45,	// (0x0003c312) ncim_query_content_pane_t5

0x1c53,	// (0x00033420) ncim_query_content_pane_t6_ParamLimits

0x1c53,	// (0x00033420) ncim_query_content_pane_t6

0xfb76,	// (0x00041343) ncim_query_content_pane_t_ParamLimits

0x1c7b,	// (0x00033448) ncim_query_list_pane_ParamLimits

0x1c8d,	// (0x0003345a) ncim_query_popup_pane_ParamLimits

0x1ca1,	// (0x0003346e) wait_bar_pane_cp04

0xc7b1,	// (0x0003df7e) input_focus_pane_cp011

0x1ca9,	// (0x00033476) ncim_query_popup_pane_t1

0x1cb7,	// (0x00033484) ncim_list_query_list_pane_ParamLimits

0x1cb7,	// (0x00033484) ncim_list_query_list_pane

0xc7b1,	// (0x0003df7e) bg_button_pane_cp027

0x1cc4,	// (0x00033491) ncim_query_button_pane_g1

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp012

0x1cce,	// (0x0003349b) ncim_list_query_list_pane_g1

0x1cd6,	// (0x000334a3) ncim_list_query_list_pane_t1

0x934b,	// (0x0003ab18) cam4_indicators_pane_g3_ParamLimits

0x934b,	// (0x0003ab18) cam4_indicators_pane_g3

0x944d,	// (0x0003ac1a) vid4_indicators_pane_g5_ParamLimits

0x944d,	// (0x0003ac1a) vid4_indicators_pane_g5

0xa264,	// (0x0003ba31) vid4_progress_pane_g5_ParamLimits

0xa264,	// (0x0003ba31) vid4_progress_pane_g5

0xa9eb,	// (0x0003c1b8) main_ncimui_pane_g1

0xaa53,	// (0x0003c220) ncimui_group_query_pane_ParamLimits

0xaa53,	// (0x0003c220) ncimui_group_query_pane

0xaa9b,	// (0x0003c268) ncimui_list_pane_ParamLimits

0xaa9b,	// (0x0003c268) ncimui_list_pane

0xaac2,	// (0x0003c28f) ncimui_text_pane_ParamLimits

0xaac2,	// (0x0003c28f) ncimui_text_pane

0xab62,	// (0x0003c32f) ncimui_text_pane_t1_ParamLimits

0xab62,	// (0x0003c32f) ncimui_text_pane_t1

0x1ce4,	// (0x000334b1) ncimui_list_single_graphic_pane_ParamLimits

0x1ce4,	// (0x000334b1) ncimui_list_single_graphic_pane

0xab81,	// (0x0003c34e) ncimui_query_pane_ParamLimits

0xab81,	// (0x0003c34e) ncimui_query_pane

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp013

0x1cf4,	// (0x000334c1) ncim_list_query_list_pane_t1_copy1

0x1d02,	// (0x000334cf) ncim_list_single_graphic_pane_g1

0xab94,	// (0x0003c361) ncim_query_button_pane_cp01

0xaba0,	// (0x0003c36d) ncim_query_entry_pane_ParamLimits

0xaba0,	// (0x0003c36d) ncim_query_entry_pane

0xabb3,	// (0x0003c380) ncimui_query_pane_g1

0xabbf,	// (0x0003c38c) ncimui_query_pane_t1_ParamLimits

0xabbf,	// (0x0003c38c) ncimui_query_pane_t1

0xce59,	// (0x0003e626) input_focus_pane_cp012

0x1d0a,	// (0x000334d7) ncim_query_entry_pane_t1

0xcf24,	// (0x0003e6f1) main_im_pane_ParamLimits

0xce59,	// (0x0003e626) main_mobtv_pane_ParamLimits

0xce59,	// (0x0003e626) main_mobtv_pane

0xa85f,	// (0x0003c02c) main_cset6_slider_pane_g18_ParamLimits

0xa85f,	// (0x0003c02c) main_cset6_slider_pane_g18

0x1aa1,	// (0x0003326e) main_cset6_slider_pane_g19_ParamLimits

0x1aa1,	// (0x0003326e) main_cset6_slider_pane_g19

0xe789,	// (0x0003ff56) bg_main_mobtv_pane_ParamLimits

0xe789,	// (0x0003ff56) bg_main_mobtv_pane

0xabd8,	// (0x0003c3a5) main_mobtv_info_pane

0xabe3,	// (0x0003c3b0) main_mobtv_loading_pane_ParamLimits

0xabe3,	// (0x0003c3b0) main_mobtv_loading_pane

0x1d1c,	// (0x000334e9) main_mobtv_pg_channel_list_pane

0x1d26,	// (0x000334f3) main_mobtv_pg_hdr_pane

0xabf0,	// (0x0003c3bd) main_mobtv_programe_curr_pane_ParamLimits

0xabf0,	// (0x0003c3bd) main_mobtv_programe_curr_pane

0xabfd,	// (0x0003c3ca) main_mobtv_programe_next_pane_ParamLimits

0xabfd,	// (0x0003c3ca) main_mobtv_programe_next_pane

0x1d2f,	// (0x000334fc) popup_mobtv_noti_window

0xd10c,	// (0x0003e8d9) main_tv_pg_hdr_pane_g1

0x1d37,	// (0x00033504) main_tv_pg_hdr_pane_g2

0x1d3f,	// (0x0003350c) main_tv_pg_hdr_pane_g3

0x1d47,	// (0x00033514) main_tv_pg_hdr_pane_g4

0x1d4f,	// (0x0003351c) main_tv_pg_hdr_pane_g5

0x1d59,	// (0x00033526) main_tv_pg_hdr_pane_g6

0x1d63,	// (0x00033530) main_tv_pg_hdr_pane_g7

0x1d6d,	// (0x0003353a) main_tv_pg_hdr_pane_g8

0x1d77,	// (0x00033544) main_tv_pg_hdr_pane_g9

0x1d81,	// (0x0003354e) main_tv_pg_hdr_pane_g10

0x1d8b,	// (0x00033558) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x00041350) main_tv_pg_hdr_pane_g

0x1d95,	// (0x00033562) main_tv_pg_hdr_pane_t1

0x1da3,	// (0x00033570) main_tv_pg_hdr_pane_t2

0x1db1,	// (0x0003357e) main_tv_pg_hdr_pane_t3

0x1dc1,	// (0x0003358e) main_tv_pg_hdr_pane_t4

0x1dd1,	// (0x0003359e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x00041367) main_tv_pg_hdr_pane_t

0x1de1,	// (0x000335ae) single_mobtv_pg_channel_pane_ParamLimits

0x1de1,	// (0x000335ae) single_mobtv_pg_channel_pane

0x1df3,	// (0x000335c0) single_mobtv_pg_channel_table_pane

0xd434,	// (0x0003ec01) single_mobtv_pg_channel_thumb_pane

0x1dfc,	// (0x000335c9) single_tv_pg_channel_pane_g1

0x1e05,	// (0x000335d2) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x00041372) single_tv_pg_channel_pane_g

0xceb2,	// (0x0003e67f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xceb2,	// (0x0003e67f) bg_single_mobtv_pg_channel_thumb_pane

0x1e0e,	// (0x000335db) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1e0e,	// (0x000335db) single_mobtv_pg_channel_thumb_pane_g1

0x1e1c,	// (0x000335e9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1e1c,	// (0x000335e9) single_mobtv_pg_channel_thumb_pane_g2

0x1e28,	// (0x000335f5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1e28,	// (0x000335f5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x00041377) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x00041377) single_mobtv_pg_channel_thumb_pane_g

0x1e34,	// (0x00033601) single_mobtv_pg_channel_thumb_pane_t1

0x1e42,	// (0x0003360f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x0004137e) single_mobtv_pg_channel_thumb_pane_t

0xd10c,	// (0x0003e8d9) bg_single_mobtv_pg_channel_table_pane_g1

0xd10c,	// (0x0003e8d9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00040b90) bg_single_mobtv_pg_channel_table_pane_g

0x1e50,	// (0x0003361d) single_mobtv_pg_channel_table_pane_t1

0x1e5e,	// (0x0003362b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x00041383) single_mobtv_pg_channel_table_pane_t

0xac12,	// (0x0003c3df) main_mobtv_info_pane_g1_ParamLimits

0xac12,	// (0x0003c3df) main_mobtv_info_pane_g1

0xac2e,	// (0x0003c3fb) main_mobtv_info_pane_t1_ParamLimits

0xac2e,	// (0x0003c3fb) main_mobtv_info_pane_t1

0xaca6,	// (0x0003c473) main_mobtv_info_pane_t2_ParamLimits

0xaca6,	// (0x0003c473) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x0004138d) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x0004138d) main_mobtv_info_pane_t

0xad35,	// (0x0003c502) wait_bar_pane_cp05

0xad47,	// (0x0003c514) main_mobtv_loading_pane_g1_ParamLimits

0xad47,	// (0x0003c514) main_mobtv_loading_pane_g1

0xad55,	// (0x0003c522) main_mobtv_loading_pane_g2_ParamLimits

0xad55,	// (0x0003c522) main_mobtv_loading_pane_g2

0xad61,	// (0x0003c52e) main_mobtv_loading_pane_g3_ParamLimits

0xad61,	// (0x0003c52e) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x00041394) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x00041394) main_mobtv_loading_pane_g

0x1e6c,	// (0x00033639) main_mobtv_loading_pane_t1_ParamLimits

0x1e6c,	// (0x00033639) main_mobtv_loading_pane_t1

0x1e84,	// (0x00033651) main_mobtv_loading_pane_t2_ParamLimits

0x1e84,	// (0x00033651) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0004139b) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0004139b) main_mobtv_loading_pane_t

0xad6f,	// (0x0003c53c) wait_bar_pane_cp06_ParamLimits

0xad6f,	// (0x0003c53c) wait_bar_pane_cp06

0x1ea8,	// (0x00033675) main_mobtv_programe_curr_pane_t1

0x1eb6,	// (0x00033683) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x000413a0) main_mobtv_programe_curr_pane_t

0x1ec4,	// (0x00033691) main_mobtv_programe_next_pane_t1

0x1ed2,	// (0x0003369f) main_mobtv_programe_next_pane_t2

0x1ee0,	// (0x000336ad) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x000413a5) main_mobtv_programe_next_pane_t

0xc7b1,	// (0x0003df7e) bg_popup_mobtv_noti_window_pane

0x1eee,	// (0x000336bb) popup_mobtv_noti_window_g1

0x1ef6,	// (0x000336c3) popup_mobtv_noti_window_t1

0x1f04,	// (0x000336d1) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x000413ac) popup_mobtv_noti_window_t

0xd10c,	// (0x0003e8d9) bg_popup_mobtv_noti_window_pane_g1

0xc7b1,	// (0x0003df7e) sc_clock_pane

0xc7b1,	// (0x0003df7e) main_fs_bigclock_pane

0xa429,	// (0x0003bbf6) blid2_tripm_pane_t4_ParamLimits

0xa429,	// (0x0003bbf6) blid2_tripm_pane_t4

0xad7b,	// (0x0003c548) sc_clock_pane_g1_ParamLimits

0xad7b,	// (0x0003c548) sc_clock_pane_g1

0xad89,	// (0x0003c556) sc_clock_pane_t1_ParamLimits

0xad89,	// (0x0003c556) sc_clock_pane_t1

0xad9c,	// (0x0003c569) sc_clock_pane_t2_ParamLimits

0xad9c,	// (0x0003c569) sc_clock_pane_t2

0xadae,	// (0x0003c57b) sc_clock_pane_t3_ParamLimits

0xadae,	// (0x0003c57b) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x000413b1) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x000413b1) sc_clock_pane_t

0xb68b,	// (0x0003ce58) main_fs_bigclock_indicator_pane_ParamLimits

0xb68b,	// (0x0003ce58) main_fs_bigclock_indicator_pane

0xae31,	// (0x0003c5fe) main_fs_bigclock_pane_g1_ParamLimits

0xae31,	// (0x0003c5fe) main_fs_bigclock_pane_g1

0xb697,	// (0x0003ce64) main_fs_bigclock_pane_t1_ParamLimits

0xb697,	// (0x0003ce64) main_fs_bigclock_pane_t1

0xb6a9,	// (0x0003ce76) main_fs_bigclock_pane_t2_ParamLimits

0xb6a9,	// (0x0003ce76) main_fs_bigclock_pane_t2

0xb6bd,	// (0x0003ce8a) main_fs_bigclock_pane_t3_ParamLimits

0xb6bd,	// (0x0003ce8a) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x00041542) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x00041542) main_fs_bigclock_pane_t

0x2a93,	// (0x00034260) main_fs_bigclock_indicator_pane_g1

0x1c23,	// (0x000333f0) ncim_query_content_pane_g2_ParamLimits

0x1c23,	// (0x000333f0) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x0004133e) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x0004133e) ncim_query_content_pane_g

0xadc2,	// (0x0003c58f) sc_clock_pane_t4_ParamLimits

0xadc2,	// (0x0003c58f) sc_clock_pane_t4

0xce59,	// (0x0003e626) main_radioblah_pane

0x91f1,	// (0x0003a9be) cell_call4_button_pane_t1_copy1_ParamLimits

0x91f1,	// (0x0003a9be) cell_call4_button_pane_t1_copy1

0xaa05,	// (0x0003c1d2) main_ncimui_pane_t1_ParamLimits

0xaa05,	// (0x0003c1d2) main_ncimui_pane_t1

0xaa1f,	// (0x0003c1ec) main_ncimui_pane_t2_ParamLimits

0xaa1f,	// (0x0003c1ec) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x00041337) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x00041337) main_ncimui_pane_t

0x204a,	// (0x00033817) main_radioblah_anim_pane_ParamLimits

0x204a,	// (0x00033817) main_radioblah_anim_pane

0x205b,	// (0x00033828) main_radioblah_info_pane_ParamLimits

0x205b,	// (0x00033828) main_radioblah_info_pane

0x206f,	// (0x0003383c) main_radioblah_pane_t1_ParamLimits

0x206f,	// (0x0003383c) main_radioblah_pane_t1

0x208b,	// (0x00033858) main_radioblah_pane_t2_ParamLimits

0x208b,	// (0x00033858) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x000413d2) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x000413d2) main_radioblah_pane_t

0xae87,	// (0x0003c654) main_radioblah_rocker_ctrl_pane_ParamLimits

0xae87,	// (0x0003c654) main_radioblah_rocker_ctrl_pane

0x20d3,	// (0x000338a0) main_radioblah_info_pane_t1_ParamLimits

0x20d3,	// (0x000338a0) main_radioblah_info_pane_t1

0xaecc,	// (0x0003c699) main_radioblah_info_pane_t2_ParamLimits

0xaecc,	// (0x0003c699) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x000413db) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x000413db) main_radioblah_info_pane_t

0xd10c,	// (0x0003e8d9) main_radioblah_rocker_ctrl_pane_g1

0xaf7c,	// (0x0003c749) main_radioblah_rocker_ctrl_pane_g2

0xaf84,	// (0x0003c751) main_radioblah_rocker_ctrl_pane_g3

0xaf8c,	// (0x0003c759) main_radioblah_rocker_ctrl_pane_g4

0xaf94,	// (0x0003c761) main_radioblah_rocker_ctrl_pane_g5

0xaf9c,	// (0x0003c769) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x000413e4) main_radioblah_rocker_ctrl_pane_g

0xa9ab,	// (0x0003c178) main_cset_text2_pane_t1_copy1_ParamLimits

0x927c,	// (0x0003aa49) cam4_image_uncrop_qvga_pane

0x93bd,	// (0x0003ab8a) vid4_image_uncrop_qcif_pane

0xa5b7,	// (0x0003bd84) cam6_image_uncrop_qvga_pane_ParamLimits

0xa5b7,	// (0x0003bd84) cam6_image_uncrop_qvga_pane

0x18d7,	// (0x000330a4) vid6_image_uncrop_qcif_pane_ParamLimits

0x18d7,	// (0x000330a4) vid6_image_uncrop_qcif_pane

0xc7b1,	// (0x0003df7e) bg_popup_preview_window_pane_cp03

0x1bd5,	// (0x000333a2) list_cset_text2_pane

0x1bdd,	// (0x000333aa) main_cset6_text2_pane_g1

0x1be5,	// (0x000333b2) main_cset6_text2_pane_t1

0xafa4,	// (0x0003c771) list_cset_text2_pane_t1_ParamLimits

0xafa4,	// (0x0003c771) list_cset_text2_pane_t1

0xce59,	// (0x0003e626) main_radioblah_pane_ParamLimits

0xad21,	// (0x0003c4ee) main_mobtv_info_pane_t3_ParamLimits

0xad21,	// (0x0003c4ee) main_mobtv_info_pane_t3

0xae75,	// (0x0003c642) main_radioblah_pane_g1

0xaea0,	// (0x0003c66d) main_radioblah_info_pane_g1

0xaf21,	// (0x0003c6ee) main_radioblah_info_pane_t3_ParamLimits

0xaf21,	// (0x0003c6ee) main_radioblah_info_pane_t3

0x6b08,	// (0x000382d5) highlight_cell_cale_month_pane_ParamLimits

0x6b08,	// (0x000382d5) highlight_cell_cale_month_pane

0xc7b1,	// (0x0003df7e) main_phob_fisheye_pane

0x0648,	// (0x00031e15) scroll_pane_cp0031_ParamLimits

0x0648,	// (0x00031e15) scroll_pane_cp0031

0x19e5,	// (0x000331b2) wait_bar_pane_cp08_ParamLimits

0xa793,	// (0x0003bf60) cset_list_set_pane_copy1_ParamLimits

0x2128,	// (0x000338f5) highlight_cell_cale_month_pane_g1

0xafc5,	// (0x0003c792) highlight_cell_cale_month_pane_t1

0x15c1,	// (0x00032d8e) list_gen_pane_cp01

0x1107,	// (0x000328d4) scroll_pane_01

0xafd3,	// (0x0003c7a0) list_single_double_fisheye_pane

0x44c2,	// (0x00035c8f) list_double_fisheye_pane_g1_ParamLimits

0x44c2,	// (0x00035c8f) list_double_fisheye_pane_g1

0x44ce,	// (0x00035c9b) list_double_fisheye_pane_g2_ParamLimits

0x44ce,	// (0x00035c9b) list_double_fisheye_pane_g2

0xafdc,	// (0x0003c7a9) list_double_fisheye_pane_g3_ParamLimits

0xafdc,	// (0x0003c7a9) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x000413f1) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x000413f1) list_double_fisheye_pane_g

0x44ff,	// (0x00035ccc) list_double_fisheye_pane_t1_ParamLimits

0x44ff,	// (0x00035ccc) list_double_fisheye_pane_t1

0x451a,	// (0x00035ce7) list_double_fisheye_pane_t2_ParamLimits

0x451a,	// (0x00035ce7) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x000413fc) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x000413fc) list_double_fisheye_pane_t

0xc7b1,	// (0x0003df7e) main_call5_pane

0xade8,	// (0x0003c5b5) sc_swipe_pane_ParamLimits

0xade8,	// (0x0003c5b5) sc_swipe_pane

0xaff4,	// (0x0003c7c1) call5_image_pane_ParamLimits

0xaff4,	// (0x0003c7c1) call5_image_pane

0xb004,	// (0x0003c7d1) call5_swipe_1_pane_ParamLimits

0xb004,	// (0x0003c7d1) call5_swipe_1_pane

0xb010,	// (0x0003c7dd) call5_swipe_2_pane_ParamLimits

0xb010,	// (0x0003c7dd) call5_swipe_2_pane

0xb02a,	// (0x0003c7f7) popup_call5_audio_first_window_ParamLimits

0xb02a,	// (0x0003c7f7) popup_call5_audio_first_window

0xceb2,	// (0x0003e67f) call5_swipe_1_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) call5_swipe_1_pane_g1

0x2130,	// (0x000338fd) call5_swipe_1_pane_g2_ParamLimits

0x2130,	// (0x000338fd) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00041401) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00041401) call5_swipe_1_pane_g

0x213c,	// (0x00033909) call5_swipe_1_pane_t1_ParamLimits

0x213c,	// (0x00033909) call5_swipe_1_pane_t1

0xceb2,	// (0x0003e67f) call5_swipe_2_pane_g1_ParamLimits

0xceb2,	// (0x0003e67f) call5_swipe_2_pane_g1

0x2151,	// (0x0003391e) call5_swipe_2_pane_g2_ParamLimits

0x2151,	// (0x0003391e) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x00041406) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x00041406) call5_swipe_2_pane_g

0x215d,	// (0x0003392a) call5_swipe_2_pane_t1_ParamLimits

0x215d,	// (0x0003392a) call5_swipe_2_pane_t1

0x2172,	// (0x0003393f) sc_swipe_pane_g1_ParamLimits

0x2172,	// (0x0003393f) sc_swipe_pane_g1

0x217f,	// (0x0003394c) sc_swipe_pane_g2_ParamLimits

0x217f,	// (0x0003394c) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0004140b) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0004140b) sc_swipe_pane_g

0x218b,	// (0x00033958) sc_swipe_pane_t1_ParamLimits

0x218b,	// (0x00033958) sc_swipe_pane_t1

0xc7b1,	// (0x0003df7e) main_cmail_launcher_pane

0xb038,	// (0x0003c805) aid_size_cell_cmail_l_ParamLimits

0xb038,	// (0x0003c805) aid_size_cell_cmail_l

0xb046,	// (0x0003c813) grid_cmail_l_pane_ParamLimits

0xb046,	// (0x0003c813) grid_cmail_l_pane

0xb056,	// (0x0003c823) cell_cmail_l_pane_ParamLimits

0xb056,	// (0x0003c823) cell_cmail_l_pane

0x21a0,	// (0x0003396d) cell_cmail_l_pane_g1_ParamLimits

0x21a0,	// (0x0003396d) cell_cmail_l_pane_g1

0x21ac,	// (0x00033979) cell_cmail_l_pane_t1_ParamLimits

0x21ac,	// (0x00033979) cell_cmail_l_pane_t1

0x21c2,	// (0x0003398f) cell_cmail_l_pane_t2_ParamLimits

0x21c2,	// (0x0003398f) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x00041410) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x00041410) cell_cmail_l_pane_t

0xce59,	// (0x0003e626) grid_highlight_pane_cp018_ParamLimits

0xce59,	// (0x0003e626) grid_highlight_pane_cp018

0x4dde,	// (0x000365ab) main2_pane_ParamLimits

0x4dde,	// (0x000365ab) main2_pane

0xcfb3,	// (0x0003e780) popup_sp_fs_action_menu_bg_pane_g1

0xcfbb,	// (0x0003e788) popup_sp_fs_action_menu_bg_pane_g2

0xcfc3,	// (0x0003e790) popup_sp_fs_action_menu_bg_pane_g3

0xcfcb,	// (0x0003e798) popup_sp_fs_action_menu_bg_pane_g4

0xcfd3,	// (0x0003e7a0) popup_sp_fs_action_menu_bg_pane_g5

0xcfdb,	// (0x0003e7a8) popup_sp_fs_action_menu_bg_pane_g6

0xcfe3,	// (0x0003e7b0) popup_sp_fs_action_menu_bg_pane_g7

0xcfeb,	// (0x0003e7b8) popup_sp_fs_action_menu_bg_pane_g8

0xcff3,	// (0x0003e7c0) popup_sp_fs_action_menu_bg_pane_g9

0xcffb,	// (0x0003e7c8) popup_sp_fs_action_menu_bg_pane_g10

0xcffb,	// (0x0003e7c8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000408f8) popup_sp_fs_action_menu_bg_pane_g

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g2

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x000409a6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x000409a6) list_medium_line_x2_t3_g3_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t2

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g3_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_x2_t3_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t2

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g2_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g2

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g3

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x000409b9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x000409b9) list_medium_line_x2_t4_g4_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t2

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t3

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x000409c2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x000409c2) list_medium_line_x2_t4_g4_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g2

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g3

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x000409b9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x000409b9) list_medium_line_x2_t2_g4_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g4_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g2

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x000409a6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x000409a6) list_medium_line_x2_t2_g3_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g3_t

0x6ce9,	// (0x000384b6) main_sp_fs_list_pane_ParamLimits

0x6ce9,	// (0x000384b6) main_sp_fs_list_pane

0x6cf5,	// (0x000384c2) sp_fs_scroll_pane_ParamLimits

0x6cf5,	// (0x000384c2) sp_fs_scroll_pane

0xd647,	// (0x0003ee14) list_medium_line_x2_t3_t1

0xd647,	// (0x0003ee14) list_medium_line_x2_t3_t2

0xd647,	// (0x0003ee14) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00040a74) list_medium_line_x2_t3_t

0xd647,	// (0x0003ee14) list_medium_line_x3_t4_t1

0xd647,	// (0x0003ee14) list_medium_line_x3_t4_t2

0xd647,	// (0x0003ee14) list_medium_line_x3_t4_t3

0xd647,	// (0x0003ee14) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00040a7b) list_medium_line_x3_t4_t

0xd647,	// (0x0003ee14) list_medium_line_x4_t5_t1

0xd647,	// (0x0003ee14) list_medium_line_x4_t5_t2

0xd647,	// (0x0003ee14) list_medium_line_x4_t5_t3

0xd647,	// (0x0003ee14) list_medium_line_x4_t5_t4

0xd647,	// (0x0003ee14) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00040a84) list_medium_line_x4_t5_t

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g1

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g2

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g3

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x000409b9) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x000409b9) list_medium_line_t4_g4_g

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t1

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t2

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t3

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t4_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x000409c2) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x000409c2) list_medium_line_t4_g4_t

0x6de8,	// (0x000385b5) chi_dic_find_pane_g1

0x7a81,	// (0x0003924e) main_tport_pane

0xd647,	// (0x0003ee14) list_medium_line_plain_t1

0xceb2,	// (0x0003e67f) list_medium_line_t2_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_t2_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_t2_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_t2_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_g2_t1

0xd126,	// (0x0003e8f3) list_medium_line_t2_g2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_t2_g2_t

0x4470,	// (0x00035c3d) aid_sp_fs_list_icon_a_sm

0x4478,	// (0x00035c45) aid_sp_fs_list_icon_d

0x4480,	// (0x00035c4d) aid_sp_fs_text_primary

0x25f3,	// (0x00033dc0) aid_sp_fs_text_secondary

0xc7b1,	// (0x0003df7e) list_medium_line

0xc7b1,	// (0x0003df7e) list_medium_line_g2

0xc7b1,	// (0x0003df7e) list_medium_line_g3

0xc7b1,	// (0x0003df7e) list_medium_line_plain

0xc7b1,	// (0x0003df7e) list_medium_line_plain_t2

0xc7b1,	// (0x0003df7e) list_medium_line_plain_t3

0xc7b1,	// (0x0003df7e) list_medium_line_right_icon

0xc7b1,	// (0x0003df7e) list_medium_line_right_iconx2

0xc7b1,	// (0x0003df7e) list_medium_line_t2

0xc7b1,	// (0x0003df7e) list_medium_line_t2_g2

0xc7b1,	// (0x0003df7e) list_medium_line_t2_g3

0xc7b1,	// (0x0003df7e) list_medium_line_t2_right_icon

0xc7b1,	// (0x0003df7e) list_medium_line_t2_right_iconx2

0xc7b1,	// (0x0003df7e) list_medium_line_t3

0xc7b1,	// (0x0003df7e) list_medium_line_t3_g2

0xc7b1,	// (0x0003df7e) list_medium_line_t3_g3

0xc7b1,	// (0x0003df7e) list_medium_line_t3_right_iconx2

0xc7b1,	// (0x0003df7e) list_medium_line_t4_g4

0xc7b1,	// (0x0003df7e) list_medium_line_x2

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t2_g2

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t2_g3

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t2_g4

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t3

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t3_g2

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t3_g3

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t3_g4

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t4_g2

0xc7b1,	// (0x0003df7e) list_medium_line_x2_t4_g4

0xc7b1,	// (0x0003df7e) list_medium_line_x3

0xc7b1,	// (0x0003df7e) list_medium_line_x3_t4

0xc7b1,	// (0x0003df7e) list_medium_line_x3_t4_g4

0xc7b1,	// (0x0003df7e) list_medium_line_x4_t4

0xc7b1,	// (0x0003df7e) list_medium_line_x4_t4_g7

0xc7b1,	// (0x0003df7e) list_medium_line_x4_t5

0x4489,	// (0x00035c56) list_single_fs_dyc_pane_ParamLimits

0x4489,	// (0x00035c56) list_single_fs_dyc_pane

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g1

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g2

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g3

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g4

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g5

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g6_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x4_t4_g7_g6

0xcec0,	// (0x0003e68d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xcec0,	// (0x0003e68d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x00041318) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x00041318) list_medium_line_x4_t4_g7_g

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t1

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t2

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t3

0xd0de,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd0de,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t4

0xd0de,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd0de,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x00041327) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x00041327) list_medium_line_x4_t4_g7_t

0x44a5,	// (0x00035c72) list_single_dyc_row_pane_ParamLimits

0x44a5,	// (0x00035c72) list_single_dyc_row_pane

0xafe8,	// (0x0003c7b5) call5_gesture_pane_ParamLimits

0xafe8,	// (0x0003c7b5) call5_gesture_pane

0xb01c,	// (0x0003c7e9) call5_windows_pane_ParamLimits

0xb01c,	// (0x0003c7e9) call5_windows_pane

0xb06f,	// (0x0003c83c) call5_swipe_1_pane_cp_ParamLimits

0xb06f,	// (0x0003c83c) call5_swipe_1_pane_cp

0xb07b,	// (0x0003c848) call5_swipe_2_pane_cp_ParamLimits

0xb07b,	// (0x0003c848) call5_swipe_2_pane_cp

0xd0d6,	// (0x0003e8a3) call5_image_pane_cp

0xb087,	// (0x0003c854) popup_call5_audio_first_window_cp_ParamLimits

0xb087,	// (0x0003c854) popup_call5_audio_first_window_cp

0x2172,	// (0x0003393f) call5_swipe_1_pane_g1_cp_ParamLimits

0x2172,	// (0x0003393f) call5_swipe_1_pane_g1_cp

0x21df,	// (0x000339ac) call5_swipe_1_pane_g2_cp

0x218b,	// (0x00033958) call5_swipe_1_pane_t1_cp_ParamLimits

0x218b,	// (0x00033958) call5_swipe_1_pane_t1_cp

0x2172,	// (0x0003393f) call5_swipe_2_pane_g1_cp_ParamLimits

0x2172,	// (0x0003393f) call5_swipe_2_pane_g1_cp

0x21e7,	// (0x000339b4) call5_swipe_2_pane_g2_cp

0x21ef,	// (0x000339bc) call5_swipe_2_pane_t1_cp_ParamLimits

0x21ef,	// (0x000339bc) call5_swipe_2_pane_t1_cp

0xce59,	// (0x0003e626) main_sp_fs_email_pane

0x2204,	// (0x000339d1) main_sp_fs_listscroll_pane_te

0x453c,	// (0x00035d09) popup_sp_fs_action_menu_pane_ParamLimits

0x453c,	// (0x00035d09) popup_sp_fs_action_menu_pane

0xd10c,	// (0x0003e8d9) bg_sp_fs_ctrlbar_pane_g1

0x220d,	// (0x000339da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2216,	// (0x000339e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xeebc,	// (0x00040689) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd10c,	// (0x0003e8d9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x00041415) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x00af,	// (0x0003187c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x00af,	// (0x0003187c) bg_sp_fs_ctrlbar_ddmenu_pane

0x221f,	// (0x000339ec) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x221f,	// (0x000339ec) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x222b,	// (0x000339f8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x222b,	// (0x000339f8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x0004141e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x0004141e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2237,	// (0x00033a04) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2237,	// (0x00033a04) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd10c,	// (0x0003e8d9) list_medium_line_t2_right_icon_g1

0xd647,	// (0x0003ee14) list_medium_line_t2_right_icon_t1

0xd647,	// (0x0003ee14) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x00041423) list_medium_line_t2_right_icon_t

0xe77b,	// (0x0003ff48) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe77b,	// (0x0003ff48) bg_sp_fs_ctrlbar_pane

0xb0d8,	// (0x0003c8a5) main_sp_fs_ctrlbar_button_pane_cp01

0xb0e0,	// (0x0003c8ad) main_sp_fs_ctrlbar_ddmenu_pane

0x2289,	// (0x00033a56) main_sp_fs_ctrlbar_pane_g1

0x2295,	// (0x00033a62) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x00041428) main_sp_fs_ctrlbar_pane_g

0xb11c,	// (0x0003c8e9) main_sp_fs_ctrlbar_pane_t1

0xb157,	// (0x0003c924) main_sp_fs_ctrlbar_pane

0xb16d,	// (0x0003c93a) main_sp_fs_listscroll_pane_te_cp01

0x457e,	// (0x00035d4b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x457e,	// (0x00035d4b) popup_sp_fs_action_menu_pane_cp01

0xce59,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xce59,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp01

0x459e,	// (0x00035d6b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x459e,	// (0x00035d6b) sp_fs_action_menu_list_gene_pane_g1

0x22cb,	// (0x00033a98) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x22cb,	// (0x00033a98) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x00041436) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x00041436) sp_fs_action_menu_list_gene_pane_g

0x45ad,	// (0x00035d7a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x45ad,	// (0x00035d7a) sp_fs_action_menu_list_gene_pane_t1

0x45c5,	// (0x00035d92) sp_fs_action_menu_list_gene_pane_ParamLimits

0x45c5,	// (0x00035d92) sp_fs_action_menu_list_gene_pane

0x230f,	// (0x00033adc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x230f,	// (0x00033adc) popup_sp_fs_action_menu_bg_pane

0x45e4,	// (0x00035db1) sp_fs_action_menu_list_pane_ParamLimits

0x45e4,	// (0x00035db1) sp_fs_action_menu_list_pane

0xe8ca,	// (0x00040097) sp_fs_scroll_pane_cp01_ParamLimits

0xe8ca,	// (0x00040097) sp_fs_scroll_pane_cp01

0xd647,	// (0x0003ee14) list_medium_line_plain_t2_t1

0xd647,	// (0x0003ee14) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x00041423) list_medium_line_plain_t2_t

0xd647,	// (0x0003ee14) list_medium_line_plain_t3_t1

0xd647,	// (0x0003ee14) list_medium_line_plain_t3_t2

0xd647,	// (0x0003ee14) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00040a74) list_medium_line_plain_t3_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_x2_t2_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_x2_t2_g2_t

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_x2_t4_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t2

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t3

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x000409c2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x000409c2) list_medium_line_x2_t4_g2_t

0xd10c,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g1

0xd10c,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g2

0xd10c,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00040b95) list_medium_line_t3_right_iconx2_g

0xd647,	// (0x0003ee14) list_medium_line_t3_right_iconx2_t1

0xd647,	// (0x0003ee14) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x00041423) list_medium_line_t3_right_iconx2_t

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g1

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g2

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g3

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x000409b9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x000409b9) list_medium_line_x3_t4_g4_g

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t1

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t2

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t3

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x000409c2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x000409c2) list_medium_line_x3_t4_g4_t

0x4604,	// (0x00035dd1) list_single_dyc_row_text_pane_t1_ParamLimits

0x4604,	// (0x00035dd1) list_single_dyc_row_text_pane_t1

0x463b,	// (0x00035e08) list_single_dyc_row_text_pane_t2_ParamLimits

0x463b,	// (0x00035e08) list_single_dyc_row_text_pane_t2

0x46b1,	// (0x00035e7e) list_single_dyc_row_text_pane_t3_ParamLimits

0x46b1,	// (0x00035e7e) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x0004143b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x0004143b) list_single_dyc_row_text_pane_t

0x4782,	// (0x00035f4f) list_single_dyc_row_pane_g1_ParamLimits

0x4782,	// (0x00035f4f) list_single_dyc_row_pane_g1

0x478e,	// (0x00035f5b) list_single_dyc_row_pane_g2_ParamLimits

0x478e,	// (0x00035f5b) list_single_dyc_row_pane_g2

0x479a,	// (0x00035f67) list_single_dyc_row_pane_g3_ParamLimits

0x479a,	// (0x00035f67) list_single_dyc_row_pane_g3

0x47a6,	// (0x00035f73) list_single_dyc_row_pane_g4_ParamLimits

0x47a6,	// (0x00035f73) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x00041448) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x00041448) list_single_dyc_row_pane_g

0x47b2,	// (0x00035f7f) list_single_dyc_row_text_pane_ParamLimits

0x47b2,	// (0x00035f7f) list_single_dyc_row_text_pane

0xc7b1,	// (0x0003df7e) bg_sp_fs_scroll_pane

0x23b0,	// (0x00033b7d) thumb_sp_fs_scroll_pane

0xceb2,	// (0x0003e67f) list_medium_line_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g1

0xd126,	// (0x0003e8f3) list_medium_line_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t1

0xceb2,	// (0x0003e67f) list_medium_line_x2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_x2_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t1

0xceb2,	// (0x0003e67f) list_medium_line_x3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x3_g1

0x0eba,	// (0x00032687) list_medium_line_x3_g2_ParamLimits

0x0eba,	// (0x00032687) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x00041451) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x00041451) list_medium_line_x3_g

0x23b9,	// (0x00033b86) list_medium_line_x3_t1_ParamLimits

0x23b9,	// (0x00033b86) list_medium_line_x3_t1

0x23cd,	// (0x00033b9a) thumb_sp_fs_scroll_pane_g1

0x23d6,	// (0x00033ba3) thumb_sp_fs_scroll_pane_g2

0x23df,	// (0x00033bac) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00041456) thumb_sp_fs_scroll_pane_g

0x23cd,	// (0x00033b9a) bg_sp_fs_scroll_pane_g1

0x23d6,	// (0x00033ba3) bg_sp_fs_scroll_pane_g2

0x23df,	// (0x00033bac) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00041456) bg_sp_fs_scroll_pane_g

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g1

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g2

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g3

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g4_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x000409b9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x000409b9) list_medium_line_x2_t3_g4_g

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t1

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t2

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_x2_t3_g4_t

0xceb2,	// (0x0003e67f) list_medium_line_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_g2_t1

0xceb2,	// (0x0003e67f) list_medium_line_t3_g2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g2_g1

0xceb2,	// (0x0003e67f) list_medium_line_t3_g2_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x000409b4) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x000409b4) list_medium_line_t3_g2_g

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t1

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t2

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_t3_g2_t

0xd10c,	// (0x0003e8d9) list_medium_line_right_icon_g1

0xd647,	// (0x0003ee14) list_medium_line_right_icon_t1

0xceb2,	// (0x0003e67f) list_medium_line_t2_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g1

0xd126,	// (0x0003e8f3) list_medium_line_t2_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_t1

0xd126,	// (0x0003e8f3) list_medium_line_t2_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_t2_t

0xceb2,	// (0x0003e67f) list_medium_line_t3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g1

0xd126,	// (0x0003e8f3) list_medium_line_t3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_t1

0xd126,	// (0x0003e8f3) list_medium_line_t3_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_t2

0xd126,	// (0x0003e8f3) list_medium_line_t3_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_t3_t

0xceb2,	// (0x0003e67f) list_medium_line_g3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g3_g1

0xceb2,	// (0x0003e67f) list_medium_line_g3_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g3_g2

0xceb2,	// (0x0003e67f) list_medium_line_g3_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x000409a6) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x000409a6) list_medium_line_g3_g

0xd126,	// (0x0003e8f3) list_medium_line_g3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_g3_t1

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g1

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g2

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x000409a6) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x000409a6) list_medium_line_t2_g3_g

0xd126,	// (0x0003e8f3) list_medium_line_t2_g3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_g3_t1

0xd126,	// (0x0003e8f3) list_medium_line_t2_g3_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x00040a29) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x00040a29) list_medium_line_t2_g3_t

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g1_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g1

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g2_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g2

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g3_ParamLimits

0xceb2,	// (0x0003e67f) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x000409a6) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x000409a6) list_medium_line_t3_g3_g

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t1_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t1

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t2_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t2

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t3_ParamLimits

0xd126,	// (0x0003e8f3) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x000409ad) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x000409ad) list_medium_line_t3_g3_t

0xd10c,	// (0x0003e8d9) list_medium_line_right_iconx2_g1

0xd10c,	// (0x0003e8d9) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00040b90) list_medium_line_right_iconx2_g

0xd647,	// (0x0003ee14) list_medium_line_right_iconx2_t1

0xd10c,	// (0x0003e8d9) list_medium_line_t2_right_iconx2_g1

0xd10c,	// (0x0003e8d9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00040b90) list_medium_line_t2_right_iconx2_g

0xd647,	// (0x0003ee14) list_medium_line_t2_right_iconx2_t1

0xd647,	// (0x0003ee14) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x00041423) list_medium_line_t2_right_iconx2_t

0xd647,	// (0x0003ee14) list_medium_line_x4_t4_t1

0xd647,	// (0x0003ee14) list_medium_line_x4_t4_t2

0xd647,	// (0x0003ee14) list_medium_line_x4_t4_t3

0xd647,	// (0x0003ee14) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00040a7b) list_medium_line_x4_t4_t

0xb1a8,	// (0x0003c975) tport_appsw_pane_ParamLimits

0xb1a8,	// (0x0003c975) tport_appsw_pane

0xb1b6,	// (0x0003c983) tport_contact_pane_ParamLimits

0xb1b6,	// (0x0003c983) tport_contact_pane

0xb1c6,	// (0x0003c993) tport_listscroll_pane_ParamLimits

0xb1c6,	// (0x0003c993) tport_listscroll_pane

0xb1d6,	// (0x0003c9a3) cell_tport_appsw_pane_ParamLimits

0xb1d6,	// (0x0003c9a3) cell_tport_appsw_pane

0xcec0,	// (0x0003e68d) tport_appsw_pane_g1_ParamLimits

0xcec0,	// (0x0003e68d) tport_appsw_pane_g1

0x23e8,	// (0x00033bb5) tport_contact_pane_g1

0x23f1,	// (0x00033bbe) tport_contact_pane_t1

0x23ff,	// (0x00033bcc) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x0004145d) tport_contact_pane_t

0x240d,	// (0x00033bda) list_tport_pane

0x2416,	// (0x00033be3) scroll_pane_cp_030

0xb209,	// (0x0003c9d6) cell_tport_appsw_pane_g1

0xb219,	// (0x0003c9e6) cell_tport_appsw_pane_t1

0xb227,	// (0x0003c9f4) grid_highlight_pane_cp019

0xb22f,	// (0x0003c9fc) list_tport_double_graphic_pane_ParamLimits

0xb22f,	// (0x0003c9fc) list_tport_double_graphic_pane

0xce59,	// (0x0003e626) list_highlight_pane_cp023_ParamLimits

0xce59,	// (0x0003e626) list_highlight_pane_cp023

0xb240,	// (0x0003ca0d) list_tport_double_graphic_pane_g1_ParamLimits

0xb240,	// (0x0003ca0d) list_tport_double_graphic_pane_g1

0xb24d,	// (0x0003ca1a) list_tport_double_graphic_pane_t1_ParamLimits

0xb24d,	// (0x0003ca1a) list_tport_double_graphic_pane_t1

0xb262,	// (0x0003ca2f) list_tport_double_graphic_pane_t2_ParamLimits

0xb262,	// (0x0003ca2f) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x00041469) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x00041469) list_tport_double_graphic_pane_t

0xc7b1,	// (0x0003df7e) main_cale_note_pane

0x9616,	// (0x0003ade3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9616,	// (0x0003ade3) cell_vitu2_function_top_wide_pane_cp01

0xad35,	// (0x0003c502) wait_bar_pane_cp05_ParamLimits

0xce59,	// (0x0003e626) listscroll_cmail_pane

0x241f,	// (0x00033bec) list_cmail_pane

0xb274,	// (0x0003ca41) list_cmail_body_pane

0xb29c,	// (0x0003ca69) list_single_cmail_header_caption_pane

0xb2cb,	// (0x0003ca98) list_single_cmail_header_detail_pane_ParamLimits

0xb2cb,	// (0x0003ca98) list_single_cmail_header_detail_pane

0x242f,	// (0x00033bfc) list_single_cmail_header_caption_pane_t1

0x47d1,	// (0x00035f9e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x47d1,	// (0x00035f9e) list_single_cmail_header_detail_pane_g1

0x47e7,	// (0x00035fb4) list_single_cmail_header_detail_pane_g2_ParamLimits

0x47e7,	// (0x00035fb4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x0004146e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x0004146e) list_single_cmail_header_detail_pane_g

0x47f3,	// (0x00035fc0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x47f3,	// (0x00035fc0) list_single_cmail_header_detail_pane_t1

0x4853,	// (0x00036020) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4853,	// (0x00036020) list_single_cmail_header_editor_pane_bg

0x1e05,	// (0x000335d2) list_cmail_body_pane_g1

0x24d6,	// (0x00033ca3) list_cmail_body_pane_t1

0x0fed,	// (0x000327ba) list_single_cmail_header_editor_pane_bg_g1

0xd331,	// (0x0003eafe) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0ffd,	// (0x000327ca) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0ff5,	// (0x000327c2) list_single_cmail_header_editor_pane_bg_g1_copy3

0x128a,	// (0x00032a57) list_single_cmail_header_editor_pane_bg_g1_copy4

0x101d,	// (0x000327ea) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x100d,	// (0x000327da) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1015,	// (0x000327e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd311,	// (0x0003eade) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb304,	// (0x0003cad1) calenote_gesture_pane_ParamLimits

0xb304,	// (0x0003cad1) calenote_gesture_pane

0xb31e,	// (0x0003caeb) calenote_window_pane_ParamLimits

0xb31e,	// (0x0003caeb) calenote_window_pane

0x24e4,	// (0x00033cb1) popup_note_window_cp01

0xb336,	// (0x0003cb03) calenote_swipe_1_pane_ParamLimits

0xb336,	// (0x0003cb03) calenote_swipe_1_pane

0xb07b,	// (0x0003c848) calenote_swipe_2_pane_ParamLimits

0xb07b,	// (0x0003c848) calenote_swipe_2_pane

0x2172,	// (0x0003393f) calenote_swipe_1_pane_g1_ParamLimits

0x2172,	// (0x0003393f) calenote_swipe_1_pane_g1

0x217f,	// (0x0003394c) calenote_swipe_1_pane_g2_ParamLimits

0x217f,	// (0x0003394c) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0004140b) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0004140b) calenote_swipe_1_pane_g

0x24f6,	// (0x00033cc3) calenote_swipe_1_pane_t1_ParamLimits

0x24f6,	// (0x00033cc3) calenote_swipe_1_pane_t1

0x2172,	// (0x0003393f) calenote_swipe_2_pane_g1_ParamLimits

0x2172,	// (0x0003393f) calenote_swipe_2_pane_g1

0x2515,	// (0x00033ce2) calenote_swipe_2_pane_g2_ParamLimits

0x2515,	// (0x00033ce2) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0004147a) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0004147a) calenote_swipe_2_pane_g

0x2521,	// (0x00033cee) calenote_swipe_2_pane_t1_ParamLimits

0x2521,	// (0x00033cee) calenote_swipe_2_pane_t1

0xc7b1,	// (0x0003df7e) main_mup_navstr_pane

0x8496,	// (0x00039c63) main_mup3_pane_t7_ParamLimits

0x8496,	// (0x00039c63) main_mup3_pane_t7

0x8cbf,	// (0x0003a48c) main_mp4_pane_g6_ParamLimits

0x8cbf,	// (0x0003a48c) main_mp4_pane_g6

0x904f,	// (0x0003a81c) main_image3_pane_t4_ParamLimits

0x904f,	// (0x0003a81c) main_image3_pane_t4

0xb349,	// (0x0003cb16) popup_navstr_preview_pane_ParamLimits

0xb349,	// (0x0003cb16) popup_navstr_preview_pane

0xb355,	// (0x0003cb22) scroll_navstr_pane_ParamLimits

0xb355,	// (0x0003cb22) scroll_navstr_pane

0xc7b1,	// (0x0003df7e) bg_popup_preview_window_pane_cp04

0x2548,	// (0x00033d15) popup_navstr_preview_pane_t1

0xb361,	// (0x0003cb2e) scroll_navstr_pane_g1_ParamLimits

0xb361,	// (0x0003cb2e) scroll_navstr_pane_g1

0xb36e,	// (0x0003cb3b) scroll_navstr_pane_t1_ParamLimits

0xb36e,	// (0x0003cb3b) scroll_navstr_pane_t1

0x24ed,	// (0x00033cba) bg_button_pane_cp014

0x24ed,	// (0x00033cba) bg_button_pane_cp030

0x44e2,	// (0x00035caf) list_double_fisheye_pane_g4_ParamLimits

0x44e2,	// (0x00035caf) list_double_fisheye_pane_g4

0x44ee,	// (0x00035cbb) list_double_fisheye_pane_g5_ParamLimits

0x44ee,	// (0x00035cbb) list_double_fisheye_pane_g5

0xe8f0,	// (0x000400bd) sp_fs_scroll_pane_cp03

0x2289,	// (0x00033a56) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2295,	// (0x00033a62) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x00041428) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb11c,	// (0x0003c8e9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2427,	// (0x00033bf4) sp_fs_scroll_pane_cp02

0xd01e,	// (0x0003e7eb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd01e,	// (0x0003e7eb) popup_sp_fs_calendar_preview_list_single_pane

0xc7b1,	// (0x0003df7e) main_cam6_pano_pane

0xce59,	// (0x0003e626) main_mup3_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_phacti_pane

0xac0a,	// (0x0003c3d7) bg_button_pane_cp11

0xac22,	// (0x0003c3ef) main_mobtv_info_pane_g2_ParamLimits

0xac22,	// (0x0003c3ef) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x00041388) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x00041388) main_mobtv_info_pane_g

0xadd4,	// (0x0003c5a1) sc_clock_pane_t5_ParamLimits

0xadd4,	// (0x0003c5a1) sc_clock_pane_t5

0xae75,	// (0x0003c642) main_radioblah_pane_g1_ParamLimits

0x20a3,	// (0x00033870) main_radioblah_pane_t3_ParamLimits

0x20a3,	// (0x00033870) main_radioblah_pane_t3

0x20bb,	// (0x00033888) main_radioblah_pane_t4_ParamLimits

0x20bb,	// (0x00033888) main_radioblah_pane_t4

0xae93,	// (0x0003c660) main_radioblah_text_pane_ParamLimits

0xae93,	// (0x0003c660) main_radioblah_text_pane

0xaea0,	// (0x0003c66d) main_radioblah_info_pane_g1_ParamLimits

0xaf35,	// (0x0003c702) main_radioblah_info_pane_t4_ParamLimits

0xaf35,	// (0x0003c702) main_radioblah_info_pane_t4

0xce59,	// (0x0003e626) main_sp_fs_calendar_pane

0xb380,	// (0x0003cb4d) main_phacti_pane_g1

0xb388,	// (0x0003cb55) phacti_note_pane_ParamLimits

0xb388,	// (0x0003cb55) phacti_note_pane

0x255f,	// (0x00033d2c) phacti_term_pane_ParamLimits

0x255f,	// (0x00033d2c) phacti_term_pane

0x2574,	// (0x00033d41) phacti_note_pane_t1_ParamLimits

0x2574,	// (0x00033d41) phacti_note_pane_t1

0x486a,	// (0x00036037) phacti_term_pane_g1

0x4872,	// (0x0003603f) phacti_term_pane_t1_ParamLimits

0x4872,	// (0x0003603f) phacti_term_pane_t1

0x25bd,	// (0x00033d8a) popup_sp_fs_calendar_preview_list_single_pane_g1

0x25c5,	// (0x00033d92) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00041484) popup_sp_fs_calendar_preview_list_single_pane_g

0x25cd,	// (0x00033d9a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x25cd,	// (0x00033d9a) popup_sp_fs_calendar_preview_list_single_pane_t1

0x25e3,	// (0x00033db0) aid_popup_sp_fs_bg_corner_pane

0xd10c,	// (0x0003e8d9) popup_sp_fs_calendar_preview_bg_pane_g1

0xc7b1,	// (0x0003df7e) popup_sp_fs_calendar_preview_bg_pane

0x25eb,	// (0x00033db8) popup_sp_fs_calendar_preview_list_pane

0xe77b,	// (0x0003ff48) bg_main_sp_fs_cale_pane_ParamLimits

0xe77b,	// (0x0003ff48) bg_main_sp_fs_cale_pane

0x48a5,	// (0x00036072) listscroll_cale_mrui_pane_ParamLimits

0x48a5,	// (0x00036072) listscroll_cale_mrui_pane

0x48ba,	// (0x00036087) listscroll_sp_fs_schedule_track_pane

0x48c3,	// (0x00036090) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x48c3,	// (0x00036090) main_sp_fs_ctrlbar_pane_cp01

0x262d,	// (0x00033dfa) main_sp_fs_ribbon_pane

0x48d6,	// (0x000360a3) popup_sp_fs_cale_preview_window

0xb3eb,	// (0x0003cbb8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb3eb,	// (0x0003cbb8) list_single_sp_fs_schedule_track_pane

0xc7bb,	// (0x0003df88) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc7bb,	// (0x0003df88) bg_sp_fs_highlight_list_pane_cp03

0xb411,	// (0x0003cbde) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb411,	// (0x0003cbde) list_single_sp_fs_schedule_track_pane_g1

0xb41d,	// (0x0003cbea) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb41d,	// (0x0003cbea) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x00041489) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x00041489) list_single_sp_fs_schedule_track_pane_g

0xb429,	// (0x0003cbf6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb429,	// (0x0003cbf6) list_single_sp_fs_schedule_track_pane_t1

0xb441,	// (0x0003cc0e) sp_fs_schedule_track_pane_ParamLimits

0xb441,	// (0x0003cc0e) sp_fs_schedule_track_pane

0x2647,	// (0x00033e14) sp_fs_schedule_track_pane_g1

0x264f,	// (0x00033e1c) sp_fs_schedule_track_pane_g2

0x2657,	// (0x00033e24) sp_fs_schedule_track_pane_g3

0x265f,	// (0x00033e2c) sp_fs_schedule_track_pane_g4

0x2667,	// (0x00033e34) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x0004148e) sp_fs_schedule_track_pane_g

0x0fed,	// (0x000327ba) bg_sp_fs_schedule_viewer_highlight_g1

0xd331,	// (0x0003eafe) bg_sp_fs_schedule_viewer_highlight_g2

0x0ff5,	// (0x000327c2) bg_sp_fs_schedule_viewer_highlight_g3

0x0ffd,	// (0x000327ca) bg_sp_fs_schedule_viewer_highlight_g4

0x128a,	// (0x00032a57) bg_sp_fs_schedule_viewer_highlight_g5

0x100d,	// (0x000327da) bg_sp_fs_schedule_viewer_highlight_g6

0x1015,	// (0x000327e2) bg_sp_fs_schedule_viewer_highlight_g7

0x101d,	// (0x000327ea) bg_sp_fs_schedule_viewer_highlight_g8

0xd311,	// (0x0003eade) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x00041499) bg_sp_fs_schedule_viewer_highlight_g

0xc7b1,	// (0x0003df7e) bg_main_sp_fs_ribbon_pane

0xb451,	// (0x0003cc1e) main_sp_fs_ribbon_pane_g1

0x266f,	// (0x00033e3c) main_sp_fs_ribbon_pane_t1

0xb45a,	// (0x0003cc27) main_sp_fs_ribbon_pane_t2

0x267e,	// (0x00033e4b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x000414ac) main_sp_fs_ribbon_pane_t

0x268d,	// (0x00033e5a) main_sp_fs_ribbon_scheduler_pane

0x2695,	// (0x00033e62) bg_main_sp_fs_ribbon_pane_g1

0x269e,	// (0x00033e6b) bg_main_sp_fs_ribbon_pane_g2

0x26a7,	// (0x00033e74) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x000414b3) bg_main_sp_fs_ribbon_pane_g

0x26af,	// (0x00033e7c) main_sp_fs_ribbon_scheduler_pane_g1

0x26b8,	// (0x00033e85) main_sp_fs_ribbon_scheduler_pane_g2

0x26c1,	// (0x00033e8e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x000414ba) main_sp_fs_ribbon_scheduler_pane_g

0x26ca,	// (0x00033e97) list_cale_mrui_pane

0xb469,	// (0x0003cc36) sp_fs_scroll_pane_cp07_ParamLimits

0xb469,	// (0x0003cc36) sp_fs_scroll_pane_cp07

0xb485,	// (0x0003cc52) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb485,	// (0x0003cc52) bg_sp_fs_schedule_viewer_highlight

0x26d7,	// (0x00033ea4) list_single_sp_fs_schedule_track_pane_cp01

0x26df,	// (0x00033eac) list_sp_fs_schedule_track_pane

0x26e7,	// (0x00033eb4) sp_fs_scroll_pane_cp06_ParamLimits

0x26e7,	// (0x00033eb4) sp_fs_scroll_pane_cp06

0xd10c,	// (0x0003e8d9) bgmain_sp_fs_calendar_pane_g1

0x48e8,	// (0x000360b5) list_single_cale_mrui_pane_ParamLimits

0x48e8,	// (0x000360b5) list_single_cale_mrui_pane

0x4916,	// (0x000360e3) list_single_cale_mrui_row_pane_ParamLimits

0x4916,	// (0x000360e3) list_single_cale_mrui_row_pane

0x4923,	// (0x000360f0) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4923,	// (0x000360f0) list_single_cale_mrui_row_pane_g1

0x495b,	// (0x00036128) list_single_cale_mrui_row_pane_t1_ParamLimits

0x495b,	// (0x00036128) list_single_cale_mrui_row_pane_t1

0x496d,	// (0x0003613a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x496d,	// (0x0003613a) list_single_cale_mrui_row_pane_t2

0x49d3,	// (0x000361a0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x49d3,	// (0x000361a0) list_single_cale_mrui_row_pane_t3

0x4a02,	// (0x000361cf) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4a02,	// (0x000361cf) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x000414c8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x000414c8) list_single_cale_mrui_row_pane_t

0x4a31,	// (0x000361fe) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4a31,	// (0x000361fe) list_single_cmail_header_editor_pane_bg_cp01

0x4a51,	// (0x0003621e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4a51,	// (0x0003621e) list_single_cmail_header_editor_pane_bg_cp02

0xb492,	// (0x0003cc5f) main_radioblah_text_pane_t1_ParamLimits

0xb492,	// (0x0003cc5f) main_radioblah_text_pane_t1

0x27bb,	// (0x00033f88) cam6_indi_pane_cp01

0x27c3,	// (0x00033f90) cam6_mode_pane_cp01

0x27cb,	// (0x00033f98) cam6_pano_pane

0x27d4,	// (0x00033fa1) cam6_zoom_pane_cp01

0x27dc,	// (0x00033fa9) cam6_pano_image_pane

0x27e7,	// (0x00033fb4) cam6_pano_pane_g1

0x1e05,	// (0x000335d2) cam6_pano_pane_g2

0x27f0,	// (0x00033fbd) cam6_pano_pane_g3

0x27f9,	// (0x00033fc6) cam6_pano_pane_g4

0x08a6,	// (0x00032073) cam6_pano_pane_g5

0x2802,	// (0x00033fcf) cam6_pano_pane_g6

0x280c,	// (0x00033fd9) cam6_pano_pane_g7

0x2814,	// (0x00033fe1) cam6_pano_pane_g8

0x281d,	// (0x00033fea) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x000414d1) cam6_pano_pane_g

0xc7b1,	// (0x0003df7e) main_browser_tag_pane

0x2540,	// (0x00033d0d) grid_navstr_albumart_pane

0x2828,	// (0x00033ff5) cell_navstr_albumart_pane_ParamLimits

0x2828,	// (0x00033ff5) cell_navstr_albumart_pane

0x2848,	// (0x00034015) cell_navstr_albumart_pane_g1

0xed43,	// (0x00040510) cell_navstr_albumart_pane_g2

0xed53,	// (0x00040520) cell_navstr_albumart_pane_g3

0xed4b,	// (0x00040518) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x000414e4) cell_navstr_albumart_pane_g

0xb4ad,	// (0x0003cc7a) bt_list_pane_ParamLimits

0xb4ad,	// (0x0003cc7a) bt_list_pane

0xb4ce,	// (0x0003cc9b) bt_list_pane_t1

0xb4dd,	// (0x0003ccaa) bt_list_pane_t2

0x0001,

0xfd20,	// (0x000414ed) bt_list_pane_t

0xc7b1,	// (0x0003df7e) main_cale_prevew_pane

0xb4ec,	// (0x0003ccb9) popup_cale_preview_window_ParamLimits

0xb4ec,	// (0x0003ccb9) popup_cale_preview_window

0xce59,	// (0x0003e626) bg_popup_preview_window_pane_cp05_ParamLimits

0xce59,	// (0x0003e626) bg_popup_preview_window_pane_cp05

0x2850,	// (0x0003401d) list_cale_preview_pane_ParamLimits

0x2850,	// (0x0003401d) list_cale_preview_pane

0xb505,	// (0x0003ccd2) list_double_cale_preview_pane_ParamLimits

0xb505,	// (0x0003ccd2) list_double_cale_preview_pane

0xb517,	// (0x0003cce4) list_single_cale_preview_pane_ParamLimits

0xb517,	// (0x0003cce4) list_single_cale_preview_pane

0xb52b,	// (0x0003ccf8) list_single_cale_preview_pane_g1

0xb533,	// (0x0003cd00) list_single_cale_preview_pane_t1_ParamLimits

0xb533,	// (0x0003cd00) list_single_cale_preview_pane_t1

0xb548,	// (0x0003cd15) list_double_cale_preview_pane_g1

0xb550,	// (0x0003cd1d) list_double_cale_preview_pane_t1_ParamLimits

0xb550,	// (0x0003cd1d) list_double_cale_preview_pane_t1

0xb565,	// (0x0003cd32) list_double_cale_preview_pane_t2_ParamLimits

0xb565,	// (0x0003cd32) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x000414f2) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x000414f2) list_double_cale_preview_pane_t

0xc7b1,	// (0x0003df7e) main_ezdial_pane

0xce59,	// (0x0003e626) main_sp_fs_email_pane_ParamLimits

0xb095,	// (0x0003c862) cmail_ddmenu_btn01_pane_ParamLimits

0xb095,	// (0x0003c862) cmail_ddmenu_btn01_pane

0xb0aa,	// (0x0003c877) cmail_ddmenu_btn02_pane_ParamLimits

0xb0aa,	// (0x0003c877) cmail_ddmenu_btn02_pane

0xb0c2,	// (0x0003c88f) cmail_ddmenu_btn03_pane_ParamLimits

0xb0c2,	// (0x0003c88f) cmail_ddmenu_btn03_pane

0xb157,	// (0x0003c924) main_sp_fs_ctrlbar_pane_ParamLimits

0xb16d,	// (0x0003c93a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb274,	// (0x0003ca41) list_cmail_body_pane_ParamLimits

0x243d,	// (0x00033c0a) bg_button_pane_cp12

0x2452,	// (0x00033c1f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2452,	// (0x00033c1f) list_single_cmail_header_detail_pane_g3

0x482f,	// (0x00035ffc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x482f,	// (0x00035ffc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00041475) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00041475) list_single_cmail_header_detail_pane_t

0x4887,	// (0x00036054) phacti_term_pane_t2_ParamLimits

0x4887,	// (0x00036054) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x0004147f) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x0004147f) phacti_term_pane_t

0x285c,	// (0x00034029) aid_size_list_single_double

0xb57d,	// (0x0003cd4a) popup_ezdial_listscroll_window

0xb5a1,	// (0x0003cd6e) popup_number_entry_window_cp01

0xd0d6,	// (0x0003e8a3) bg_popup_call_pane_cp09

0x2868,	// (0x00034035) ezdial_list_pane

0x2870,	// (0x0003403d) scroll_pane_cp23

0x00af,	// (0x0003187c) bg_button_pane_cp028_ParamLimits

0x00af,	// (0x0003187c) bg_button_pane_cp028

0xb5af,	// (0x0003cd7c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb5af,	// (0x0003cd7c) cmail_ddmenu_btn01_pane_g1

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x000414f7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x000414f7) cmail_ddmenu_btn01_pane_g

0x2878,	// (0x00034045) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2878,	// (0x00034045) cmail_ddmenu_btn01_pane_t1

0xe77b,	// (0x0003ff48) bg_button_pane_cp029_ParamLimits

0xe77b,	// (0x0003ff48) bg_button_pane_cp029

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn02_pane_g1

0xb5d7,	// (0x0003cda4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb5d7,	// (0x0003cda4) cmail_ddmenu_btn02_pane_t1

0xc7bb,	// (0x0003df88) bg_button_pane_cp031_ParamLimits

0xc7bb,	// (0x0003df88) bg_button_pane_cp031

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb5bf,	// (0x0003cd8c) cmail_ddmenu_btn03_pane_g1

0xb5d7,	// (0x0003cda4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb5d7,	// (0x0003cda4) cmail_ddmenu_btn03_pane_t1

0x8efa,	// (0x0003a6c7) cell_dialer2_keypad_pane_t1_ParamLimits

0x8f14,	// (0x0003a6e1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8f14,	// (0x0003a6e1) cell_dialer2_keypad_pane_t1_copy1

0xaa4b,	// (0x0003c218) ncimui_group_button_pane

0xce59,	// (0x0003e626) main_sp_fs_calendar_pane_ParamLimits

0xb29c,	// (0x0003ca69) list_single_cmail_header_caption_pane_ParamLimits

0x489c,	// (0x00036069) aid_recal_txt_sm_pane

0xc7b1,	// (0x0003df7e) mian_recal_day_pane

0x48d6,	// (0x000360a3) popup_sp_fs_cale_preview_window_ParamLimits

0x288d,	// (0x0003405a) list_recal_day_pane

0x4a88,	// (0x00036255) list_single_recal_day_pane_ParamLimits

0x4a88,	// (0x00036255) list_single_recal_day_pane

0x28e1,	// (0x000340ae) list_single_recal_day_pane_g1_ParamLimits

0x28e1,	// (0x000340ae) list_single_recal_day_pane_g1

0x4a9a,	// (0x00036267) list_single_recal_day_pane_g2_ParamLimits

0x4a9a,	// (0x00036267) list_single_recal_day_pane_g2

0x4aa6,	// (0x00036273) list_single_recal_day_pane_g3_ParamLimits

0x4aa6,	// (0x00036273) list_single_recal_day_pane_g3

0x4ab2,	// (0x0003627f) list_single_recal_day_pane_g4_ParamLimits

0x4ab2,	// (0x0003627f) list_single_recal_day_pane_g4

0x4ac0,	// (0x0003628d) list_single_recal_day_pane_g5_ParamLimits

0x4ac0,	// (0x0003628d) list_single_recal_day_pane_g5

0x4ad6,	// (0x000362a3) list_single_recal_day_pane_g6_ParamLimits

0x4ad6,	// (0x000362a3) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x00041506) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x00041506) list_single_recal_day_pane_g

0x4aea,	// (0x000362b7) list_single_recal_day_pane_t1

0x4afc,	// (0x000362c9) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x00041511) list_single_recal_day_pane_t

0xb5fb,	// (0x0003cdc8) ncimui_query_button_pane_ParamLimits

0xb5fb,	// (0x0003cdc8) ncimui_query_button_pane

0xb60b,	// (0x0003cdd8) ncimui_query_button_pane_t1_ParamLimits

0xb60b,	// (0x0003cdd8) ncimui_query_button_pane_t1

0x2949,	// (0x00034116) ncimui_query_button_pane_t2_ParamLimits

0x2949,	// (0x00034116) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x00041516) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x00041516) ncimui_query_button_pane_t

0xb61e,	// (0x0003cdeb) query_button_pane_ParamLimits

0xb61e,	// (0x0003cdeb) query_button_pane

0xc7b1,	// (0x0003df7e) bg_button_pane_cp0028

0x295c,	// (0x00034129) query_button_pane_t1

0x7a81,	// (0x0003924e) main_tport_pane_ParamLimits

0xb17e,	// (0x0003c94b) bg_popup_window_pane_cp01_ParamLimits

0xb17e,	// (0x0003c94b) bg_popup_window_pane_cp01

0xb18c,	// (0x0003c959) heading_pane_cp08_ParamLimits

0xb18c,	// (0x0003c959) heading_pane_cp08

0xb19a,	// (0x0003c967) heading_pane_cp07_ParamLimits

0xb19a,	// (0x0003c967) heading_pane_cp07

0xb209,	// (0x0003c9d6) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00041462) cell_tport_appsw_pane_g

0x3fa7,	// (0x00035774) input_candi_list_open_g1

0xd4f4,	// (0x0003ecc1) list_cale_time_pane_g6_ParamLimits

0xd4f4,	// (0x0003ecc1) list_cale_time_pane_g6

0x7f21,	// (0x000396ee) aid_size_touch_calib_1_ParamLimits

0x7f21,	// (0x000396ee) aid_size_touch_calib_1

0x7f2d,	// (0x000396fa) aid_size_touch_calib_2_ParamLimits

0x7f2d,	// (0x000396fa) aid_size_touch_calib_2

0x7f3b,	// (0x00039708) aid_size_touch_calib_3_ParamLimits

0x7f3b,	// (0x00039708) aid_size_touch_calib_3

0x7f4b,	// (0x00039718) aid_size_touch_calib_4_ParamLimits

0x7f4b,	// (0x00039718) aid_size_touch_calib_4

0x7f59,	// (0x00039726) main_touch_calib_button_group_pane_ParamLimits

0x7f59,	// (0x00039726) main_touch_calib_button_group_pane

0x7f67,	// (0x00039734) main_touch_calib_pane_g1_ParamLimits

0x7f73,	// (0x00039740) main_touch_calib_pane_g2_ParamLimits

0x7f7f,	// (0x0003974c) main_touch_calib_pane_g3_ParamLimits

0x7f8b,	// (0x00039758) main_touch_calib_pane_g4_ParamLimits

0xf6d7,	// (0x00040ea4) main_touch_calib_pane_g_ParamLimits

0x7f97,	// (0x00039764) main_touch_calib_pane_t1_ParamLimits

0x7fb0,	// (0x0003977d) main_touch_calib_pane_t2_ParamLimits

0x7fc9,	// (0x00039796) main_touch_calib_pane_t3_ParamLimits

0x7fdf,	// (0x000397ac) main_touch_calib_pane_t4_ParamLimits

0x7ff5,	// (0x000397c2) main_touch_calib_pane_t5_ParamLimits

0xf6e0,	// (0x00040ead) main_touch_calib_pane_t_ParamLimits

0x066c,	// (0x00031e39) list_single_fp_cale_pane_g3_ParamLimits

0x066c,	// (0x00031e39) list_single_fp_cale_pane_g3

0xce59,	// (0x0003e626) bg_button_pane_cp012_ParamLimits

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp03_ParamLimits

0x9d62,	// (0x0003b52f) cell_vitu2_function_top_pane_g1_ParamLimits

0xce59,	// (0x0003e626) bg_vkb2_func_pane_cp04_ParamLimits

0xa9d3,	// (0x0003c1a0) main_ncimui_button_group_pane_ParamLimits

0xa9d3,	// (0x0003c1a0) main_ncimui_button_group_pane

0xaa39,	// (0x0003c206) main_ncimui_pane_t3_ParamLimits

0xaa39,	// (0x0003c206) main_ncimui_pane_t3

0x2556,	// (0x00033d23) phacti_button_group_pane

0x285c,	// (0x00034029) aid_size_list_single_double_ParamLimits

0xb57d,	// (0x0003cd4a) popup_ezdial_listscroll_window_ParamLimits

0xb5a1,	// (0x0003cd6e) popup_number_entry_window_cp01_ParamLimits

0xb62b,	// (0x0003cdf8) phacti_button_pane_ParamLimits

0xb62b,	// (0x0003cdf8) phacti_button_pane

0xc7b1,	// (0x0003df7e) bg_button_pane_cp14

0x296a,	// (0x00034137) phacti_button_pane_t1

0xb63c,	// (0x0003ce09) main_touch_calib_button_pane_ParamLimits

0xb63c,	// (0x0003ce09) main_touch_calib_button_pane

0xcf24,	// (0x0003e6f1) bg_button_pane_cp18_ParamLimits

0xcf24,	// (0x0003e6f1) bg_button_pane_cp18

0x2978,	// (0x00034145) main_touch_calib_button_pane_t1_ParamLimits

0x2978,	// (0x00034145) main_touch_calib_button_pane_t1

0x298e,	// (0x0003415b) main_touch_calib_button_pane_t2_ParamLimits

0x298e,	// (0x0003415b) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x0004151b) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x0004151b) main_touch_calib_button_pane_t

0xc7b1,	// (0x0003df7e) cell_ncimui_button_pane

0xc7b1,	// (0x0003df7e) bg_button_pane_cp032

0x29ac,	// (0x00034179) cell_ncimui_button_pane_t1

0x8f70,	// (0x0003a73d) image3_infobar_pane_ParamLimits

0x8f70,	// (0x0003a73d) image3_infobar_pane

0xadf6,	// (0x0003c5c3) fs_bigclock_status_pane_ParamLimits

0xadf6,	// (0x0003c5c3) fs_bigclock_status_pane

0xae03,	// (0x0003c5d0) main_fs_bigclock_clock_pane_ParamLimits

0xae03,	// (0x0003c5d0) main_fs_bigclock_clock_pane

0xae17,	// (0x0003c5e4) main_fs_bigclock_indi_pane_ParamLimits

0xae17,	// (0x0003c5e4) main_fs_bigclock_indi_pane

0xae3f,	// (0x0003c60c) main_fs_bigclock_swipe_pane_ParamLimits

0xae3f,	// (0x0003c60c) main_fs_bigclock_swipe_pane

0xc7b1,	// (0x0003df7e) main_fs_clock_dumped_data

0x1f12,	// (0x000336df) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1f12,	// (0x000336df) list_single_fs_bigclock_indicator_pane_g1

0x1f2e,	// (0x000336fb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1f2e,	// (0x000336fb) list_single_fs_bigclock_indicator_pane_g2

0x1f48,	// (0x00033715) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1f48,	// (0x00033715) list_single_fs_bigclock_indicator_pane_g3

0x1f62,	// (0x0003372f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1f62,	// (0x0003372f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x000413bc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x000413bc) list_single_fs_bigclock_indicator_pane_g

0x1f8d,	// (0x0003375a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1f8d,	// (0x0003375a) list_single_fs_bigclock_indicator_pane_t1

0x1fb5,	// (0x00033782) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1fb5,	// (0x00033782) list_single_fs_bigclock_indicator_pane_t2

0x1fdd,	// (0x000337aa) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1fdd,	// (0x000337aa) list_single_fs_bigclock_indicator_pane_t3

0x2005,	// (0x000337d2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2005,	// (0x000337d2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x000413c7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x000413c7) list_single_fs_bigclock_indicator_pane_t

0x29ba,	// (0x00034187) image3_infobar_fav_pane_ParamLimits

0x29ba,	// (0x00034187) image3_infobar_fav_pane

0x29ca,	// (0x00034197) image3_infobar_loc_pane_ParamLimits

0x29ca,	// (0x00034197) image3_infobar_loc_pane

0x29de,	// (0x000341ab) image3_infobar_time_pane_ParamLimits

0x29de,	// (0x000341ab) image3_infobar_time_pane

0xd10c,	// (0x0003e8d9) image3_infobar_time_pane_g1

0x29ee,	// (0x000341bb) image3_infobar_time_pane_t1

0xd10c,	// (0x0003e8d9) image3_infobar_loc_pane_g1

0x29fc,	// (0x000341c9) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x00041520) image3_infobar_loc_pane_g

0x2a04,	// (0x000341d1) image3_infobar_loc_pane_t1

0xd10c,	// (0x0003e8d9) image3_infobar_fav_pane_g1

0x2a12,	// (0x000341df) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x00041525) image3_infobar_fav_pane_g

0x2a1a,	// (0x000341e7) fs_bigclock_status_battery_pane

0x2a23,	// (0x000341f0) fs_bigclock_status_signal_pane

0x2a2c,	// (0x000341f9) fs_bigclock_status_title_pane

0x2a35,	// (0x00034202) fs_bigclock_status_signal_pane_g1

0x2a3e,	// (0x0003420b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x0004152a) fs_bigclock_status_signal_pane_g

0x2a46,	// (0x00034213) fs_bigclock_status_battery_pane_g1

0x2a4f,	// (0x0003421c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x0004152f) fs_bigclock_status_battery_pane_g

0x2a57,	// (0x00034224) fs_bigclock_status_title_pane_t1

0xb64c,	// (0x0003ce19) main_fs_bigclock_clock_pane_g1

0xb64c,	// (0x0003ce19) main_fs_bigclock_clock_pane_g2

0xb659,	// (0x0003ce26) main_fs_bigclock_clock_pane_g3

0xb659,	// (0x0003ce26) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x00041534) main_fs_bigclock_clock_pane_g

0xb665,	// (0x0003ce32) main_fs_bigclock_clock_pane_t1

0xb678,	// (0x0003ce45) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x0004153d) main_fs_bigclock_clock_pane_t

0x2a65,	// (0x00034232) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2a65,	// (0x00034232) list_single_fs_bigclock_indicator_pane

0x2a76,	// (0x00034243) list_single_fs_bigclock_pane_ParamLimits

0x2a76,	// (0x00034243) list_single_fs_bigclock_pane

0x2a9c,	// (0x00034269) main_fs_bigclock_indicator_pane_t1

0x2aab,	// (0x00034278) list_single_fs_bigclock_pane_g1

0x2ab3,	// (0x00034280) list_single_fs_bigclock_pane_t1

0xd10c,	// (0x0003e8d9) main_fs_bigclock_swipe_pane_g1

0x2af6,	// (0x000342c3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x0004154e) main_fs_bigclock_swipe_pane_g

0x2afe,	// (0x000342cb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2afe,	// (0x000342cb) main_fs_bigclock_swipe_pane_t1

0x6d01,	// (0x000384ce) call_type_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_btmg_pane

0x494f,	// (0x0003611c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x494f,	// (0x0003611c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x000414c1) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x000414c1) list_single_cale_mrui_row_pane_g

0x4a77,	// (0x00036244) list_recal_vselct_arw_lo_pane

0x28be,	// (0x0003408b) list_recal_vselct_arw_up_pane

0x4a7f,	// (0x0003624c) list_recal_vselct_pane

0xb6cf,	// (0x0003ce9c) btmg_button_pane

0xb6db,	// (0x0003cea8) main_btmg_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp044

0x2b1b,	// (0x000342e8) btmg_button_pane_t1

0xeed3,	// (0x000406a0) aid_listscroll_gen

0xce59,	// (0x0003e626) main_cntbar_detail_pane

0x241f,	// (0x00033bec) list_cmail_folder_pane

0xe8f0,	// (0x000400bd) sp_fs_scroll_pane_cp03_ParamLimits

0xb29c,	// (0x0003ca69) list_single_fs_dyc_pane_cp01_ParamLimits

0xb29c,	// (0x0003ca69) list_single_fs_dyc_pane_cp01

0x2b29,	// (0x000342f6) aid_size_cmail_indent

0x4b0e,	// (0x000362db) list_single_dyc_row_pane_cp01

0xb703,	// (0x0003ced0) cntbar_detail_list_pane_ParamLimits

0xb703,	// (0x0003ced0) cntbar_detail_list_pane

0xb73d,	// (0x0003cf0a) main_cntbar_detail_cont_pane_ParamLimits

0xb73d,	// (0x0003cf0a) main_cntbar_detail_cont_pane

0x6cf5,	// (0x000384c2) scroll_pane_cp032_ParamLimits

0x6cf5,	// (0x000384c2) scroll_pane_cp032

0xb749,	// (0x0003cf16) cntbar_detail_list_event_pane_ParamLimits

0xb749,	// (0x0003cf16) cntbar_detail_list_event_pane

0xb70f,	// (0x0003cedc) cntbar_detail_list_shct_pane

0xd37f,	// (0x0003eb4c) aid_list_gen

0x2b3b,	// (0x00034308) aid_scroll

0x2b44,	// (0x00034311) aid_size_touch_scroll_bar

0xe8fc,	// (0x000400c9) aid_list_double

0x4b17,	// (0x000362e4) aid_list_single

0xb75d,	// (0x0003cf2a) aid_list_single_lg

0x4b20,	// (0x000362ed) aid_list_z_g_a_sm

0x4b28,	// (0x000362f5) aid_list_z_g_d

0x4b30,	// (0x000362fd) aid_txt_z_prm

0x4b3e,	// (0x0003630b) aid_txt_z_prm_cp01

0x4b4c,	// (0x00036319) aid_txt_z_sec

0xb766,	// (0x0003cf33) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb766,	// (0x0003cf33) main_cntbar_detail_cont_pane_g1

0xb773,	// (0x0003cf40) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb773,	// (0x0003cf40) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x00041553) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x00041553) main_cntbar_detail_cont_pane_g

0x2b4d,	// (0x0003431a) main_cntbar_detail_cont_pane_t1

0x2b5b,	// (0x00034328) main_cntbar_detail_cont_pane_t2

0x2b69,	// (0x00034336) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x00041558) main_cntbar_detail_cont_pane_t

0xb77f,	// (0x0003cf4c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb77f,	// (0x0003cf4c) cell_cntbar_detail_list_shct_pane

0x2b77,	// (0x00034344) cntbar_detail_list_shct_pane_g1

0x2b80,	// (0x0003434d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x0004155f) cntbar_detail_list_shct_pane_g

0xb793,	// (0x0003cf60) cntbar_detail_list_event_pane_g1_ParamLimits

0xb793,	// (0x0003cf60) cntbar_detail_list_event_pane_g1

0xb79f,	// (0x0003cf6c) cntbar_detail_list_event_pane_g2_ParamLimits

0xb79f,	// (0x0003cf6c) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00041564) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00041564) cntbar_detail_list_event_pane_g

0xb80b,	// (0x0003cfd8) cntbar_detail_list_event_pane_t1_ParamLimits

0xb80b,	// (0x0003cfd8) cntbar_detail_list_event_pane_t1

0xb820,	// (0x0003cfed) cntbar_detail_list_event_pane_t2_ParamLimits

0xb820,	// (0x0003cfed) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00041571) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00041571) cntbar_detail_list_event_pane_t

0xd10c,	// (0x0003e8d9) cell_cntbar_detail_list_shct_pane_g1

0xdad1,	// (0x0003f29e) navi_pane_mv_g3

0xce59,	// (0x0003e626) main_cntbar_detail_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_notif_wgt_pane

0x8bfa,	// (0x0003a3c7) aid_tch_main_mp4_pane_g4

0x8e59,	// (0x0003a626) popup_slider_window_cp02

0x4a6d,	// (0x0003623a) list_recal_day_event_pane

0xb6e3,	// (0x0003ceb0) cntbar_detail_btn_pane_ParamLimits

0xb6e3,	// (0x0003ceb0) cntbar_detail_btn_pane

0xb6f3,	// (0x0003cec0) cntbar_detail_btn_pane_cp01_ParamLimits

0xb6f3,	// (0x0003cec0) cntbar_detail_btn_pane_cp01

0xb70f,	// (0x0003cedc) cntbar_detail_list_shct_pane_ParamLimits

0xb71b,	// (0x0003cee8) cntbar_detail_pane_g1_ParamLimits

0xb71b,	// (0x0003cee8) cntbar_detail_pane_g1

0xb727,	// (0x0003cef4) cntbar_detail_pane_t1_ParamLimits

0xb727,	// (0x0003cef4) cntbar_detail_pane_t1

0xb7ab,	// (0x0003cf78) cntbar_detail_list_event_pane_g3_ParamLimits

0xb7ab,	// (0x0003cf78) cntbar_detail_list_event_pane_g3

0xb7c3,	// (0x0003cf90) cntbar_detail_list_event_pane_g4_ParamLimits

0xb7c3,	// (0x0003cf90) cntbar_detail_list_event_pane_g4

0xb7db,	// (0x0003cfa8) cntbar_detail_list_event_pane_g5_ParamLimits

0xb7db,	// (0x0003cfa8) cntbar_detail_list_event_pane_g5

0xb7f3,	// (0x0003cfc0) cntbar_detail_list_event_pane_g6_ParamLimits

0xb7f3,	// (0x0003cfc0) cntbar_detail_list_event_pane_g6

0xb835,	// (0x0003d002) cntbar_detail_list_event_pane_t3_ParamLimits

0xb835,	// (0x0003d002) cntbar_detail_list_event_pane_t3

0xb847,	// (0x0003d014) popup_notif_wgt_window_ParamLimits

0xb847,	// (0x0003d014) popup_notif_wgt_window

0xb857,	// (0x0003d024) popup_submenu_window_cp01_ParamLimits

0xb857,	// (0x0003d024) popup_submenu_window_cp01

0xd0d6,	// (0x0003e8a3) bg_popup_window_pane_cp10

0x2b89,	// (0x00034356) listscroll_notif_wgt_pane

0x2b9b,	// (0x00034368) list_notif_wgt_window

0x2ba4,	// (0x00034371) scroll_pane_cp033

0xb865,	// (0x0003d032) list_notif_wgt_row_pane_ParamLimits

0xb865,	// (0x0003d032) list_notif_wgt_row_pane

0x2bad,	// (0x0003437a) aid_size_list_notif_wgt_del

0x2bba,	// (0x00034387) list_notif_wgt_row_pane_g1

0x2bc6,	// (0x00034393) list_notif_wgt_row_pane_g2

0x2bd5,	// (0x000343a2) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x00041578) list_notif_wgt_row_pane_g

0x2be2,	// (0x000343af) list_notif_wgt_row_pane_t1

0x2bf8,	// (0x000343c5) list_notif_wgt_row_pane_t2

0x2c0a,	// (0x000343d7) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x0004157f) list_notif_wgt_row_pane_t

0x12c4,	// (0x00032a91) list_recal_day_event_pane_g1

0x2c1c,	// (0x000343e9) list_recal_day_event_pane_t1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp045

0xb877,	// (0x0003d044) cntbar_detail_btn_pane_t1

0xe77b,	// (0x0003ff48) main_callh_pane_ParamLimits

0xe77b,	// (0x0003ff48) main_callh_pane

0xc7b1,	// (0x0003df7e) main_coverflow0_pane

0xc7b1,	// (0x0003df7e) main_wgtman_pane

0xae57,	// (0x0003c624) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xae57,	// (0x0003c624) main_fs_bigclock_unlock_btn_pane

0xb201,	// (0x0003c9ce) bg_button_pane_cp16

0xb211,	// (0x0003c9de) cell_tport_appsw_pane_g3

0xb885,	// (0x0003d052) cf0_flow_pane_ParamLimits

0xb885,	// (0x0003d052) cf0_flow_pane

0x2c2b,	// (0x000343f8) listscroll_cf0_pane

0x2c36,	// (0x00034403) main_cf0_pane_g1

0xb894,	// (0x0003d061) main_cf0_pane_t1_ParamLimits

0xb894,	// (0x0003d061) main_cf0_pane_t1

0xb8a8,	// (0x0003d075) main_cf0_pane_t2_ParamLimits

0xb8a8,	// (0x0003d075) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0004158b) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0004158b) main_cf0_pane_t

0x2c48,	// (0x00034415) scroll_pane_cp11

0xb8bc,	// (0x0003d089) cf0_flow_pane_g1

0xb8c4,	// (0x0003d091) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x00041590) cf0_flow_pane_g

0xb8cc,	// (0x0003d099) cf0_flow_pane_t1

0xc7b1,	// (0x0003df7e) main_call6_pane

0xc7b1,	// (0x0003df7e) main_calllock_pane

0xb8da,	// (0x0003d0a7) call6_btn_grp_pane_ParamLimits

0xb8da,	// (0x0003d0a7) call6_btn_grp_pane

0xb8e9,	// (0x0003d0b6) call6_pane_g1_ParamLimits

0xb8e9,	// (0x0003d0b6) call6_pane_g1

0xb8f9,	// (0x0003d0c6) popup_call6_1st_window_ParamLimits

0xb8f9,	// (0x0003d0c6) popup_call6_1st_window

0xb907,	// (0x0003d0d4) popup_call6_2nd_window_ParamLimits

0xb907,	// (0x0003d0d4) popup_call6_2nd_window

0xb915,	// (0x0003d0e2) cell_call6_btn_pane_ParamLimits

0xb915,	// (0x0003d0e2) cell_call6_btn_pane

0xd0d6,	// (0x0003e8a3) bg_popup_call2_in_pane_cp03

0x2c53,	// (0x00034420) popup_call6_1st_window_g1

0x2c5b,	// (0x00034428) popup_call6_1st_window_g2

0x2c63,	// (0x00034430) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x00041595) popup_call6_1st_window_g

0x2c6b,	// (0x00034438) popup_call6_1st_window_t1

0x2c7a,	// (0x00034447) popup_call6_1st_window_t2

0x2c88,	// (0x00034455) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x0004159c) popup_call6_1st_window_t

0xd0d6,	// (0x0003e8a3) bg_popup_call2_in_pane_cp04

0x2c96,	// (0x00034463) popup_call6_2nd_window_g1

0x2c9e,	// (0x0003446b) popup_call6_2nd_window_g2

0x2ca6,	// (0x00034473) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x000415a3) popup_call6_2nd_window_g

0x2cae,	// (0x0003447b) popup_call6_2nd_window_t1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp15

0x2d08,	// (0x000344d5) cell_call6_btn_pane_g1

0xb924,	// (0x0003d0f1) cell_call6_btn_pane_t1

0xb933,	// (0x0003d100) listscroll_wgtman_pane_ParamLimits

0xb933,	// (0x0003d100) listscroll_wgtman_pane

0xb94f,	// (0x0003d11c) wgtman_btn_pane_ParamLimits

0xb94f,	// (0x0003d11c) wgtman_btn_pane

0xd8e5,	// (0x0003f0b2) aid_scroll_copy1

0x2cd5,	// (0x000344a2) list_wgtman_pane

0xb984,	// (0x0003d151) wgtman_btn_pane_g1_ParamLimits

0xb984,	// (0x0003d151) wgtman_btn_pane_g1

0xb9ac,	// (0x0003d179) wgtman_btn_pane_t1_ParamLimits

0xb9ac,	// (0x0003d179) wgtman_btn_pane_t1

0x2cdf,	// (0x000344ac) wgtman_btn_pane_t2_ParamLimits

0x2cdf,	// (0x000344ac) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x000415aa) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x000415aa) wgtman_btn_pane_t

0xb9e3,	// (0x0003d1b0) listrow_wgtman_pane_ParamLimits

0xb9e3,	// (0x0003d1b0) listrow_wgtman_pane

0xb9ff,	// (0x0003d1cc) listrow_wgtman_pane_g1

0xba0c,	// (0x0003d1d9) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x000415af) listrow_wgtman_pane_g

0x4b5a,	// (0x00036327) listrow_wgtman_pane_t1

0x4b72,	// (0x0003633f) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x000415b4) listrow_wgtman_pane_t

0x4b98,	// (0x00036365) wait_bar_pane_cp09

0x2cf6,	// (0x000344c3) main_calllock_btn_pane

0x2d00,	// (0x000344cd) main_calllock_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp17

0x2d08,	// (0x000344d5) main_calllock_btn_pane_g1

0x2d11,	// (0x000344de) main_calllock_btn_pane_t1

0xc7b1,	// (0x0003df7e) main_dialer3_pane

0xc7b1,	// (0x0003df7e) main_fmrd2_pane

0xd10c,	// (0x0003e8d9) main_fs_bigclock_unlock_btn_pane_g1

0xba32,	// (0x0003d1ff) main_fs_bigclock_unlock_btn_pane_t1

0xba40,	// (0x0003d20d) area_fmrd2_info_pane_ParamLimits

0xba40,	// (0x0003d20d) area_fmrd2_info_pane

0xba4e,	// (0x0003d21b) area_fmrd2_visual_pane_ParamLimits

0xba4e,	// (0x0003d21b) area_fmrd2_visual_pane

0xba5c,	// (0x0003d229) fmrd2_indi_pane_ParamLimits

0xba5c,	// (0x0003d229) fmrd2_indi_pane

0xba69,	// (0x0003d236) area_fmrd2_visual_pane_g1

0xba71,	// (0x0003d23e) area_fmrd2_visual_pane_t1

0xba81,	// (0x0003d24e) area_fmrd2_visual_pane_t2

0xba91,	// (0x0003d25e) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x000415be) area_fmrd2_visual_pane_t

0xbaa1,	// (0x0003d26e) area_fmrd2_info_pane_g1

0xbaa9,	// (0x0003d276) area_fmrd2_info_pane_t1

0xbab9,	// (0x0003d286) area_fmrd2_info_pane_t2

0xbac9,	// (0x0003d296) area_fmrd2_info_pane_t3

0xbad9,	// (0x0003d2a6) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x000415c5) area_fmrd2_info_pane_t

0xbae7,	// (0x0003d2b4) fmrd2_indi_pane_t1

0xbaf7,	// (0x0003d2c4) fmrd2_indi_pane_t2

0xbb07,	// (0x0003d2d4) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x000415ce) fmrd2_indi_pane_t

0x1f71,	// (0x0003373e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1f71,	// (0x0003373e) list_single_fs_bigclock_indicator_pane_g5

0x2022,	// (0x000337ef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2022,	// (0x000337ef) list_single_fs_bigclock_indicator_pane_t5

0xb39e,	// (0x0003cb6b) aid_cell_bcale_month_pane_ParamLimits

0xb39e,	// (0x0003cb6b) aid_cell_bcale_month_pane

0xb3bc,	// (0x0003cb89) bcale_month_pane_ParamLimits

0xb3bc,	// (0x0003cb89) bcale_month_pane

0xb3da,	// (0x0003cba7) bcale_preview_pane_ParamLimits

0xb3da,	// (0x0003cba7) bcale_preview_pane

0x2ab3,	// (0x00034280) list_single_fs_bigclock_pane_t1_ParamLimits

0x2ad2,	// (0x0003429f) list_single_fs_bigclock_pane_t2_ParamLimits

0x2ad2,	// (0x0003429f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x00041549) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00041549) list_single_fs_bigclock_pane_t

0xba2a,	// (0x0003d1f7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x000415b9) main_fs_bigclock_unlock_btn_pane_g

0xbb15,	// (0x0003d2e2) aid_dia3_key_size_ParamLimits

0xbb15,	// (0x0003d2e2) aid_dia3_key_size

0xbb21,	// (0x0003d2ee) aid_dia3_listrow_size_ParamLimits

0xbb21,	// (0x0003d2ee) aid_dia3_listrow_size

0xbb31,	// (0x0003d2fe) dia3_keypad_fun_pane_ParamLimits

0xbb31,	// (0x0003d2fe) dia3_keypad_fun_pane

0xbb43,	// (0x0003d310) dia3_keypad_num_pane_ParamLimits

0xbb43,	// (0x0003d310) dia3_keypad_num_pane

0xbb55,	// (0x0003d322) dia3_listscroll_pane_ParamLimits

0xbb55,	// (0x0003d322) dia3_listscroll_pane

0xbb63,	// (0x0003d330) dia3_numentry_pane_ParamLimits

0xbb63,	// (0x0003d330) dia3_numentry_pane

0x2d20,	// (0x000344ed) dia3_list_pane

0x2d2b,	// (0x000344f8) scroll_pane_cp12

0xc7b1,	// (0x0003df7e) bg_dia3_numentry_pane

0xbb71,	// (0x0003d33e) dia3_numentry_pane_t1

0xbb80,	// (0x0003d34d) cell_dia3_key_num_pane

0xbb88,	// (0x0003d355) cell_dia3_key0_fun_pane_ParamLimits

0xbb88,	// (0x0003d355) cell_dia3_key0_fun_pane

0xbb95,	// (0x0003d362) cell_dia3_key1_fun_pane_ParamLimits

0xbb95,	// (0x0003d362) cell_dia3_key1_fun_pane

0xbba2,	// (0x0003d36f) dia3_listrow_pane

0x1cc4,	// (0x00033491) bg_dia3_numentry_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp21

0x2d36,	// (0x00034503) cell_dia3_key_num_pane_t1

0x2d44,	// (0x00034511) cell_dia3_key_num_pane_t2

0x2d53,	// (0x00034520) cell_dia3_key_num_pane_t3

0x2d62,	// (0x0003452f) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x000415d5) cell_dia3_key_num_pane_t

0xc7b1,	// (0x0003df7e) bg_button_pane_cp19

0xbbaf,	// (0x0003d37c) cell_dia3_key0_fun_pane_g1

0xc7b1,	// (0x0003df7e) bg_button_pane_cp20

0xbbb7,	// (0x0003d384) cell_dia3_key1_fun_pane_g1

0xbbbf,	// (0x0003d38c) area_left_week_number_pane

0xbbd2,	// (0x0003d39f) area_top_day_name_pane

0xbbe0,	// (0x0003d3ad) frame_month_view_pane

0x2d71,	// (0x0003453e) grid_month_view_pane

0xbbf5,	// (0x0003d3c2) cell_top_day_name_pane_ParamLimits

0xbbf5,	// (0x0003d3c2) cell_top_day_name_pane

0xbc0f,	// (0x0003d3dc) cell_area_left_week_number_pane_ParamLimits

0xbc0f,	// (0x0003d3dc) cell_area_left_week_number_pane

0xbc32,	// (0x0003d3ff) cell_month_view_pane_ParamLimits

0xbc32,	// (0x0003d3ff) cell_month_view_pane

0x2d7f,	// (0x0003454c) frm_month_g1

0xbc5e,	// (0x0003d42b) frm_month_g2

0xbc6f,	// (0x0003d43c) frm_month_g3

0xbc80,	// (0x0003d44d) frm_month_g4

0xbc91,	// (0x0003d45e) frm_month_g5

0xbca4,	// (0x0003d471) frm_month_g6

0xbcb7,	// (0x0003d484) frm_month_g7

0x2d8c,	// (0x00034559) frm_month_g8

0xbcca,	// (0x0003d497) frm_month_g9

0xbcd7,	// (0x0003d4a4) frm_month_g10

0xbce4,	// (0x0003d4b1) frm_month_g11

0xbcf1,	// (0x0003d4be) frm_month_g12

0xbcfe,	// (0x0003d4cb) frm_month_g13

0xbd0b,	// (0x0003d4d8) frm_month_g14

0xbd1a,	// (0x0003d4e7) frm_month_g15

0xbd29,	// (0x0003d4f6) frm_month_g16

0x000f,

0xfe11,	// (0x000415de) frm_month_g

0x2d99,	// (0x00034566) cell_top_day_name_pane_t1

0xbd38,	// (0x0003d505) cell_area_left_week_number_pane_g1

0xbd47,	// (0x0003d514) cell_area_left_week_number_pane_t1

0xceb2,	// (0x0003e67f) cell_month_view_pane_g1

0xbd5d,	// (0x0003d52a) cell_month_view_pane_t1

0xc7b1,	// (0x0003df7e) main_fps_pane

0x2251,	// (0x00033a1e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2251,	// (0x00033a1e) cmail_ddmenu_btn02_pane_cp1

0x226d,	// (0x00033a3a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x226d,	// (0x00033a3a) cmail_ddmenu_btn02_pane_cp2

0xb5cb,	// (0x0003cd98) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb5cb,	// (0x0003cd98) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x000414fc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x000414fc) cmail_ddmenu_btn02_pane_g

0xb5e9,	// (0x0003cdb6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb5e9,	// (0x0003cdb6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00041501) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00041501) cmail_ddmenu_btn02_pane_t

0xbd73,	// (0x0003d540) fps_text_pane_ParamLimits

0xbd73,	// (0x0003d540) fps_text_pane

0xbd80,	// (0x0003d54d) main_fps_pane_g1_ParamLimits

0xbd80,	// (0x0003d54d) main_fps_pane_g1

0xbd8e,	// (0x0003d55b) wait_bar_pane_cp010_ParamLimits

0xbd8e,	// (0x0003d55b) wait_bar_pane_cp010

0xbd9a,	// (0x0003d567) fps_text_pane_t1_ParamLimits

0xbd9a,	// (0x0003d567) fps_text_pane_t1

0x9302,	// (0x0003aacf) cam4_image_uncrop_pane_g1

0x930b,	// (0x0003aad8) cam4_image_uncrop_pane_g2

0x9314,	// (0x0003aae1) cam4_image_uncrop_pane_g3

0x931d,	// (0x0003aaea) cam4_image_uncrop_pane_g4

0x0003,

0xf873,	// (0x00041040) cam4_image_uncrop_pane_g

0xbba2,	// (0x0003d36f) dia3_listrow_pane_ParamLimits

0xc7b1,	// (0x0003df7e) main_phob2_pane

0xb1e3,	// (0x0003c9b0) cell_tport_appsw_pane_cp02_ParamLimits

0xb1e3,	// (0x0003c9b0) cell_tport_appsw_pane_cp02

0xb1f2,	// (0x0003c9bf) cell_tport_appsw_pane_cp03_ParamLimits

0xb1f2,	// (0x0003c9bf) cell_tport_appsw_pane_cp03

0xc7b1,	// (0x0003df7e) phob2_contact_card_pane

0xc7b1,	// (0x0003df7e) phob2_listscroll_pane

0x2dac,	// (0x00034579) phob2_list_pane

0x2db4,	// (0x00034581) scroll_pane_cp034

0xbdb3,	// (0x0003d580) phob2_cc_data_pane_ParamLimits

0xbdb3,	// (0x0003d580) phob2_cc_data_pane

0xbdcd,	// (0x0003d59a) phob2_cc_listscroll_pane_ParamLimits

0xbdcd,	// (0x0003d59a) phob2_cc_listscroll_pane

0xb9e3,	// (0x0003d1b0) list_double_large_graphic_phob2_pane_ParamLimits

0xb9e3,	// (0x0003d1b0) list_double_large_graphic_phob2_pane

0xbde7,	// (0x0003d5b4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbde7,	// (0x0003d5b4) list_double_large_graphic_phob2_pane_g1

0x4baa,	// (0x00036377) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4baa,	// (0x00036377) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x000415ff) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x000415ff) list_double_large_graphic_phob2_pane_g

0x4bd0,	// (0x0003639d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4bd0,	// (0x0003639d) list_double_large_graphic_phob2_pane_t1

0x4be5,	// (0x000363b2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4be5,	// (0x000363b2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x00041608) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x00041608) list_double_large_graphic_phob2_pane_t

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp024

0x2dbc,	// (0x00034589) phob2_cc_button_pane

0xbdf4,	// (0x0003d5c1) phob2_cc_data_pane_g1_ParamLimits

0xbdf4,	// (0x0003d5c1) phob2_cc_data_pane_g1

0xbe03,	// (0x0003d5d0) phob2_cc_data_pane_g2_ParamLimits

0xbe03,	// (0x0003d5d0) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0004160d) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0004160d) phob2_cc_data_pane_g

0xbe12,	// (0x0003d5df) phob2_cc_data_pane_t1_ParamLimits

0xbe12,	// (0x0003d5df) phob2_cc_data_pane_t1

0xbe27,	// (0x0003d5f4) phob2_cc_data_pane_t2_ParamLimits

0xbe27,	// (0x0003d5f4) phob2_cc_data_pane_t2

0xbe3c,	// (0x0003d609) phob2_cc_data_pane_t3_ParamLimits

0xbe3c,	// (0x0003d609) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x00041612) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x00041612) phob2_cc_data_pane_t

0x2dc4,	// (0x00034591) phob2_cc_list_pane_ParamLimits

0x2dc4,	// (0x00034591) phob2_cc_list_pane

0x135b,	// (0x00032b28) scroll_pane_cp035_ParamLimits

0x135b,	// (0x00032b28) scroll_pane_cp035

0xce59,	// (0x0003e626) bg_button_pane_cp033

0x2dd0,	// (0x0003459d) phob2_cc_button_pane_g1

0x2ddc,	// (0x000345a9) phob2_cc_button_pane_t1

0x2df1,	// (0x000345be) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x00041619) phob2_cc_button_pane_t

0xbe51,	// (0x0003d61e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbe51,	// (0x0003d61e) list_double_large_graphic_phob2_cc_pane

0xbec5,	// (0x0003d692) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbec5,	// (0x0003d692) list_double_large_graphic_phob2_cc_pane_g1

0x4bfa,	// (0x000363c7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4bfa,	// (0x000363c7) list_double_large_graphic_phob2_cc_pane_g2

0x4c06,	// (0x000363d3) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4c06,	// (0x000363d3) list_double_large_graphic_phob2_cc_pane_g3

0x4c12,	// (0x000363df) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4c12,	// (0x000363df) list_double_large_graphic_phob2_cc_pane_g4

0x4c1e,	// (0x000363eb) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4c1e,	// (0x000363eb) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x0004161e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x0004161e) list_double_large_graphic_phob2_cc_pane_g

0x4c2a,	// (0x000363f7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4c2a,	// (0x000363f7) list_double_large_graphic_phob2_cc_pane_t1

0x4c53,	// (0x00036420) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4c53,	// (0x00036420) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x00041629) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x00041629) list_double_large_graphic_phob2_cc_pane_t

0x2e0f,	// (0x000345dc) list_highlight_pane_cp025_ParamLimits

0x2e0f,	// (0x000345dc) list_highlight_pane_cp025

0xce59,	// (0x0003e626) bg_button_pane_cp033_ParamLimits

0x2dd0,	// (0x0003459d) phob2_cc_button_pane_g1_ParamLimits

0x2ddc,	// (0x000345a9) phob2_cc_button_pane_t1_ParamLimits

0x2df1,	// (0x000345be) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x00041619) phob2_cc_button_pane_t_ParamLimits

0x4f6e,	// (0x0003673b) popup_wgtman_window

0x1107,	// (0x000328d4) scroll_pane_cp038

0xb96c,	// (0x0003d139) wgtman_btn_pane_cp_01_ParamLimits

0xb96c,	// (0x0003d139) wgtman_btn_pane_cp_01

0x2e1d,	// (0x000345ea) wgtman_content_pane

0x2e26,	// (0x000345f3) wgtman_heading_pane

0xc7b1,	// (0x0003df7e) bg_heading_pane_cp02

0x2e2f,	// (0x000345fc) wgtman_heading_pane_g1

0x2e37,	// (0x00034604) wgtman_heading_pane_t1

0x2e45,	// (0x00034612) scroll_pane_cp036

0x2e4d,	// (0x0003461a) wgtman_list_pane

0x210d,	// (0x000338da) wgtman_list_pane_t1_ParamLimits

0x210d,	// (0x000338da) wgtman_list_pane_t1

0x9261,	// (0x0003aa2e) cam4_grid_pane

0x4253,	// (0x00035a20) bg_button_pane_cp015_ParamLimits

0x9f19,	// (0x0003b6e6) bg_button_pane_cp016_ParamLimits

0x9f25,	// (0x0003b6f2) bg_button_pane_cp017_ParamLimits

0x9f40,	// (0x0003b70d) popup_vitu2_query_window_g3_ParamLimits

0x9f40,	// (0x0003b70d) popup_vitu2_query_window_g3

0x4312,	// (0x00035adf) popup_vitu2_query_window_t6_ParamLimits

0x4312,	// (0x00035adf) popup_vitu2_query_window_t6

0x433d,	// (0x00035b0a) popup_vitu2_query_window_t7_ParamLimits

0x433d,	// (0x00035b0a) popup_vitu2_query_window_t7

0x0ea8,	// (0x00032675) cam4_grid_pane_g1

0x0eb1,	// (0x0003267e) cam4_grid_pane_g2

0x2e55,	// (0x00034622) cam4_grid_pane_g3

0x2e5e,	// (0x0003462b) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x0004162e) cam4_grid_pane_g

0x5ad6,	// (0x000372a3) aid_placing_vt_slider_lsc_ParamLimits

0x5e16,	// (0x000375e3) vidtel_button_pane_ParamLimits

0x5e16,	// (0x000375e3) vidtel_button_pane

0xc7b1,	// (0x0003df7e) bg_button_pane_cp034

0x2e69,	// (0x00034636) vidtel_button_pane_g1

0x2e71,	// (0x0003463e) vidtel_button_pane_t1

0x1266,	// (0x00032a33) aid_size_vtel_slider_touch

0x135b,	// (0x00032b28) scroll_pane_cp039

0xab94,	// (0x0003c361) ncim_query_button_pane_cp01_ParamLimits

0xabb3,	// (0x0003c380) ncimui_query_pane_g1_ParamLimits

0xce59,	// (0x0003e626) input_focus_pane_cp012_ParamLimits

0x1d0a,	// (0x000334d7) ncim_query_entry_pane_t1_ParamLimits

0x135b,	// (0x00032b28) scroll_pane_cp039_ParamLimits

0xd9bc,	// (0x0003f189) navi_pane_bcale_mc_g1

0xd9c4,	// (0x0003f191) navi_pane_bcale_mc_t1

0x22a1,	// (0x00033a6e) main_sp_fs_email_pane_g1

0x22ad,	// (0x00033a7a) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x00041431) main_sp_fs_email_pane_g

0x273e,	// (0x00033f0b) list_single_cale_mrui_row_pane_g3_ParamLimits

0x273e,	// (0x00033f0b) list_single_cale_mrui_row_pane_g3

0x4acc,	// (0x00036299) list_single_recal_day_pane_g5_event_pane

0x4ae2,	// (0x000362af) list_single_recal_day_pane_g7

0x2e87,	// (0x00034654) list_recal_day_event_pane_cp01

0x2e90,	// (0x0003465d) list_recal_vselct_arw_lo_pane_cp01

0x2e98,	// (0x00034665) list_recal_vselct_arw_up_pane_cp01

0x2ea0,	// (0x0003466d) list_recal_vselct_pane_cp01

0x12c4,	// (0x00032a91) list_recal_day_event_pane_cp01_g1

0x4c7c,	// (0x00036449) list_recal_day_event_pane_cp01_t1

0x4aea,	// (0x000362b7) list_single_recal_day_pane_t1_ParamLimits

0x4afc,	// (0x000362c9) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x00041511) list_single_recal_day_pane_t_ParamLimits

0xce37,	// (0x0003e604) bg_notes_pane_ParamLimits

0xcf02,	// (0x0003e6cf) list_notes_pane_ParamLimits

0x5191,	// (0x0003695e) scroll_pane_cp06_ParamLimits

0xcf24,	// (0x0003e6f1) main_notes_pane_ParamLimits

0xce59,	// (0x0003e626) main_welc_pane

0xbef7,	// (0x0003d6c4) main_welc_body_pane_ParamLimits

0xbef7,	// (0x0003d6c4) main_welc_body_pane

0xbf10,	// (0x0003d6dd) main_welc_opti_pane_ParamLimits

0xbf10,	// (0x0003d6dd) main_welc_opti_pane

0xbf6b,	// (0x0003d738) main_welc_pane_t1_ParamLimits

0xbf6b,	// (0x0003d738) main_welc_pane_t1

0xc0f3,	// (0x0003d8c0) main_welc_body_row_pane_ParamLimits

0xc0f3,	// (0x0003d8c0) main_welc_body_row_pane

0xc7bb,	// (0x0003df88) main_welc_opti_row_pane_ParamLimits

0xc7bb,	// (0x0003df88) main_welc_opti_row_pane

0x2ec8,	// (0x00034695) main_welc_opti_row_pane_g1

0xc11c,	// (0x0003d8e9) main_welc_opti_row_pane_t1

0x2ed0,	// (0x0003469d) main_welc_body_row_pane_t1

0x2b93,	// (0x00034360) popup_notif_wgt_heading_pane

0x2bad,	// (0x0003437a) aid_size_list_notif_wgt_del_ParamLimits

0x2bba,	// (0x00034387) list_notif_wgt_row_pane_g1_ParamLimits

0x2bc6,	// (0x00034393) list_notif_wgt_row_pane_g2_ParamLimits

0x2bd5,	// (0x000343a2) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x00041578) list_notif_wgt_row_pane_g_ParamLimits

0x2be2,	// (0x000343af) list_notif_wgt_row_pane_t1_ParamLimits

0x2bf8,	// (0x000343c5) list_notif_wgt_row_pane_t2_ParamLimits

0x2c0a,	// (0x000343d7) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x0004157f) list_notif_wgt_row_pane_t_ParamLimits

0xb9ff,	// (0x0003d1cc) listrow_wgtman_pane_g1_ParamLimits

0xba0c,	// (0x0003d1d9) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x000415af) listrow_wgtman_pane_g_ParamLimits

0x4b5a,	// (0x00036327) listrow_wgtman_pane_t1_ParamLimits

0x4b72,	// (0x0003633f) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x000415b4) listrow_wgtman_pane_t_ParamLimits

0x4b98,	// (0x00036365) wait_bar_pane_cp09_ParamLimits

0xc7b1,	// (0x0003df7e) bg_popup_heading_pane_cp02

0x2edf,	// (0x000346ac) popup_notif_wgt_heading_pane_g1

0x2ee7,	// (0x000346b4) popup_notif_wgt_heading_pane_t1

0xc7b1,	// (0x0003df7e) main_vids_pane

0xc7b1,	// (0x0003df7e) vids_listscroll_pane

0xc12b,	// (0x0003d8f8) scroll_pane_cp040

0xc7b1,	// (0x0003df7e) vids_list_pane

0xc136,	// (0x0003d903) vids_list_double_pane_ParamLimits

0xc136,	// (0x0003d903) vids_list_double_pane

0xc14e,	// (0x0003d91b) vids_list_double_pane_g1

0xc157,	// (0x0003d924) vids_list_double_pane_t1

0xc167,	// (0x0003d934) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0004164d) vids_list_double_pane_t

0xce59,	// (0x0003e626) main_ncimui_pane_ParamLimits

0xa9eb,	// (0x0003c1b8) main_ncimui_pane_g1_ParamLimits

0xa9f7,	// (0x0003c1c4) main_ncimui_pane_g2_ParamLimits

0xa9f7,	// (0x0003c1c4) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x00041332) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x00041332) main_ncimui_pane_g

0xbf29,	// (0x0003d6f6) main_welc_pane_g1_ParamLimits

0xbf29,	// (0x0003d6f6) main_welc_pane_g1

0xbf35,	// (0x0003d702) main_welc_pane_g2_ParamLimits

0xbf35,	// (0x0003d702) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x00041637) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x00041637) main_welc_pane_g

0x5173,	// (0x00036940) listscroll_mce_pane_ParamLimits

0xdb11,	// (0x0003f2de) wait_bar_pane_cp10

0xeedb,	// (0x000406a8) main_cale_day_pane_ParamLimits

0xeedb,	// (0x000406a8) main_cale_week_pane_ParamLimits

0xce37,	// (0x0003e604) main_messa_pane_ParamLimits

0x86b0,	// (0x00039e7d) main_clock2_btn_pane_ParamLimits

0x86b0,	// (0x00039e7d) main_clock2_btn_pane

0x06e6,	// (0x00031eb3) main_clock2_btn_pane_cp01_ParamLimits

0x06e6,	// (0x00031eb3) main_clock2_btn_pane_cp01

0x26ca,	// (0x00033e97) list_cale_mrui_pane_ParamLimits

0x2c40,	// (0x0003440d) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x00041586) main_cf0_pane_g

0xbbbf,	// (0x0003d38c) area_left_week_number_pane_ParamLimits

0xbbd2,	// (0x0003d39f) area_top_day_name_pane_ParamLimits

0xbbe0,	// (0x0003d3ad) frame_month_view_pane_ParamLimits

0x2d71,	// (0x0003453e) grid_month_view_pane_ParamLimits

0x2d7f,	// (0x0003454c) frm_month_g1_ParamLimits

0xbc5e,	// (0x0003d42b) frm_month_g2_ParamLimits

0xbc6f,	// (0x0003d43c) frm_month_g3_ParamLimits

0xbc80,	// (0x0003d44d) frm_month_g4_ParamLimits

0xbc91,	// (0x0003d45e) frm_month_g5_ParamLimits

0xbca4,	// (0x0003d471) frm_month_g6_ParamLimits

0xbcb7,	// (0x0003d484) frm_month_g7_ParamLimits

0x2d8c,	// (0x00034559) frm_month_g8_ParamLimits

0xbcca,	// (0x0003d497) frm_month_g9_ParamLimits

0xbcd7,	// (0x0003d4a4) frm_month_g10_ParamLimits

0xbce4,	// (0x0003d4b1) frm_month_g11_ParamLimits

0xbcf1,	// (0x0003d4be) frm_month_g12_ParamLimits

0xbcfe,	// (0x0003d4cb) frm_month_g13_ParamLimits

0xbd0b,	// (0x0003d4d8) frm_month_g14_ParamLimits

0xbd1a,	// (0x0003d4e7) frm_month_g15_ParamLimits

0xbd29,	// (0x0003d4f6) frm_month_g16_ParamLimits

0xfe11,	// (0x000415de) frm_month_g_ParamLimits

0x2d99,	// (0x00034566) cell_top_day_name_pane_t1_ParamLimits

0xbd38,	// (0x0003d505) cell_area_left_week_number_pane_g1_ParamLimits

0xbd47,	// (0x0003d514) cell_area_left_week_number_pane_t1_ParamLimits

0xceb2,	// (0x0003e67f) cell_month_view_pane_g1_ParamLimits

0xbd5d,	// (0x0003d52a) cell_month_view_pane_t1_ParamLimits

0xce2f,	// (0x0003e5fc) main_clock2_btn_pane_g1

0x2ef5,	// (0x000346c2) main_clock2_btn_pane_t1

0xce59,	// (0x0003e626) listscroll_cmail_pane_ParamLimits

0x22a1,	// (0x00033a6e) main_sp_fs_email_pane_g1_ParamLimits

0x22ad,	// (0x00033a7a) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x00041431) main_sp_fs_email_pane_g_ParamLimits

0x288d,	// (0x0003405a) list_recal_day_pane_ParamLimits

0x289e,	// (0x0003406b) mian_recal_day_pane_t1

0x46c3,	// (0x00035e90) list_single_dyc_row_text_pane_t4_ParamLimits

0x46c3,	// (0x00035e90) list_single_dyc_row_text_pane_t4

0x46fa,	// (0x00035ec7) list_single_dyc_row_text_pane_t5_ParamLimits

0x46fa,	// (0x00035ec7) list_single_dyc_row_text_pane_t5

0x4770,	// (0x00035f3d) list_single_dyc_row_text_pane_t6_ParamLimits

0x4770,	// (0x00035f3d) list_single_dyc_row_text_pane_t6

0x6c33,	// (0x00038400) aid_mgn_list_cale_time_pane

0xce59,	// (0x0003e626) main_gallery2_pane_ParamLimits

0x06fc,	// (0x00031ec9) main_clock2_pane_cp01_t1

0x070a,	// (0x00031ed7) main_clock2_pane_cp01_t3

0x0001,

0xf74a,	// (0x00040f17) main_clock2_pane_cp01_t

0x55e6,	// (0x00036db3) cale_week_scroll_pane_g16_ParamLimits

0x55e6,	// (0x00036db3) cale_week_scroll_pane_g16

0xd0d6,	// (0x0003e8a3) vorec_slider_pane

0x2e71,	// (0x0003463e) vidtel_button_pane_t1_ParamLimits

0xb64c,	// (0x0003ce19) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb64c,	// (0x0003ce19) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb659,	// (0x0003ce26) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb659,	// (0x0003ce26) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x00041534) main_fs_bigclock_clock_pane_g_ParamLimits

0xb665,	// (0x0003ce32) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb678,	// (0x0003ce45) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x0004153d) main_fs_bigclock_clock_pane_t_ParamLimits

0x8055,	// (0x00039822) main_mup3_lyrics_pane_ParamLimits

0x8055,	// (0x00039822) main_mup3_lyrics_pane

0xc19b,	// (0x0003d968) main_mup3_lyrics_pane_t1_ParamLimits

0xc19b,	// (0x0003d968) main_mup3_lyrics_pane_t1

0x8be4,	// (0x0003a3b1) aid_main_mp4_pane_t1_area

0x8bee,	// (0x0003a3bb) aid_main_mp4_pane_t2_area

0x8ced,	// (0x0003a4ba) main_mp4_pane_g7_ParamLimits

0x8ced,	// (0x0003a4ba) main_mp4_pane_g7

0x8cf9,	// (0x0003a4c6) main_mp4_pane_g8_ParamLimits

0x8cf9,	// (0x0003a4c6) main_mp4_pane_g8

0x910b,	// (0x0003a8d8) aid_call6_pane_g1_size

0xbe97,	// (0x0003d664) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbe97,	// (0x0003d664) list_double_large_graphic_phob2_other_pane

0xd493,	// (0x0003ec60) list_double_large_graphic_phob2_other_pane_g1

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp026

0xce59,	// (0x0003e626) main_welc_pane_ParamLimits

0xb0ea,	// (0x0003c8b7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb0ea,	// (0x0003c8b7) main_sp_fs_ctrlbar_pane_g3

0xb102,	// (0x0003c8cf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb102,	// (0x0003c8cf) main_sp_fs_ctrlbar_pane_g4

0xb134,	// (0x0003c901) toolbar2_fixed_button_pane_cp01

0xb13f,	// (0x0003c90c) toolbar2_fixed_button_pane_cp02

0xb14a,	// (0x0003c917) toolbar2_fixed_button_pane_cp03

0xbee8,	// (0x0003d6b5) list_welc_entry_pane_ParamLimits

0xbee8,	// (0x0003d6b5) list_welc_entry_pane

0xbf43,	// (0x0003d710) main_welc_pane_g3_ParamLimits

0xbf43,	// (0x0003d710) main_welc_pane_g3

0xbf85,	// (0x0003d752) main_welc_pane_t2_ParamLimits

0xbf85,	// (0x0003d752) main_welc_pane_t2

0xbf99,	// (0x0003d766) main_welc_pane_t3_ParamLimits

0xbf99,	// (0x0003d766) main_welc_pane_t3

0x0005,

0xfe73,	// (0x00041640) main_welc_pane_t_ParamLimits

0xfe73,	// (0x00041640) main_welc_pane_t

0xc095,	// (0x0003d862) welc_button_pane_ParamLimits

0xc095,	// (0x0003d862) welc_button_pane

0xc0e5,	// (0x0003d8b2) welc_service_logo_pane_ParamLimits

0xc0e5,	// (0x0003d8b2) welc_service_logo_pane

0xc1d1,	// (0x0003d99e) list_single_welc_entry_pane_ParamLimits

0xc1d1,	// (0x0003d99e) list_single_welc_entry_pane

0xc1e2,	// (0x0003d9af) list_single_welc_entry_pane_g1

0xc1ea,	// (0x0003d9b7) list_single_welc_entry_pane_t1

0xc1f8,	// (0x0003d9c5) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x00041652) list_single_welc_entry_pane_t

0xc7b1,	// (0x0003df7e) bg_button_pane_cp035

0x2f03,	// (0x000346d0) welc_button_pane_t1

0x2f11,	// (0x000346de) welc_service_logo_pane_g1

0x2f1a,	// (0x000346e7) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x00041657) welc_service_logo_pane_g

0xc7b1,	// (0x0003df7e) main_int_radio_pane

0x1ba8,	// (0x00033375) list_single_fs_dyc_pane_g1

0x4bb6,	// (0x00036383) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4bb6,	// (0x00036383) list_double_large_graphic_phob2_pane_g3

0x4bc2,	// (0x0003638f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x4bc2,	// (0x0003638f) list_double_large_graphic_phob2_pane_g4

0xc206,	// (0x0003d9d3) main_int_radio1_pane_ParamLimits

0xc206,	// (0x0003d9d3) main_int_radio1_pane

0x2f23,	// (0x000346f0) find_pane_cp02

0xc218,	// (0x0003d9e5) input_focus_pane_cp12_ParamLimits

0xc218,	// (0x0003d9e5) input_focus_pane_cp12

0xc224,	// (0x0003d9f1) input_focus_pane_cp13_ParamLimits

0xc224,	// (0x0003d9f1) input_focus_pane_cp13

0xc23c,	// (0x0003da09) input_focus_pane_cp14_ParamLimits

0xc23c,	// (0x0003da09) input_focus_pane_cp14

0x2f2c,	// (0x000346f9) int_radio1_listscroll_pane

0xc254,	// (0x0003da21) main_int_radio1_pane_g1_ParamLimits

0xc254,	// (0x0003da21) main_int_radio1_pane_g1

0xc264,	// (0x0003da31) main_int_radio1_pane_t1_ParamLimits

0xc264,	// (0x0003da31) main_int_radio1_pane_t1

0xc278,	// (0x0003da45) main_int_radio1_pane_t2_ParamLimits

0xc278,	// (0x0003da45) main_int_radio1_pane_t2

0xc28c,	// (0x0003da59) main_int_radio1_pane_t3_ParamLimits

0xc28c,	// (0x0003da59) main_int_radio1_pane_t3

0xc2a0,	// (0x0003da6d) main_int_radio1_pane_t4_ParamLimits

0xc2a0,	// (0x0003da6d) main_int_radio1_pane_t4

0x2f36,	// (0x00034703) main_int_radio1_pane_t5_ParamLimits

0x2f36,	// (0x00034703) main_int_radio1_pane_t5

0xc2b7,	// (0x0003da84) main_int_radio1_pane_t6_ParamLimits

0xc2b7,	// (0x0003da84) main_int_radio1_pane_t6

0xc2c9,	// (0x0003da96) main_int_radio1_pane_t7_ParamLimits

0xc2c9,	// (0x0003da96) main_int_radio1_pane_t7

0xc2db,	// (0x0003daa8) main_int_radio1_pane_t8_ParamLimits

0xc2db,	// (0x0003daa8) main_int_radio1_pane_t8

0xc2ef,	// (0x0003dabc) main_int_radio1_pane_t9_ParamLimits

0xc2ef,	// (0x0003dabc) main_int_radio1_pane_t9

0xc301,	// (0x0003dace) main_int_radio1_pane_t10_ParamLimits

0xc301,	// (0x0003dace) main_int_radio1_pane_t10

0xc332,	// (0x0003daff) main_int_radio1_pane_t11_ParamLimits

0xc332,	// (0x0003daff) main_int_radio1_pane_t11

0xc363,	// (0x0003db30) main_int_radio1_pane_t12_ParamLimits

0xc363,	// (0x0003db30) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0004165c) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0004165c) main_int_radio1_pane_t

0x2f48,	// (0x00034715) int_radio_list_pane

0x2db4,	// (0x00034581) scroll_pane_cp037

0x2f50,	// (0x0003471d) list_double_large_graphic_int_radio_pane_ParamLimits

0x2f50,	// (0x0003471d) list_double_large_graphic_int_radio_pane

0x2f69,	// (0x00034736) list_double_large_graphic_int_radio_pane_g1

0x4c8a,	// (0x00036457) list_double_large_graphic_int_radio_pane_t1

0x4c98,	// (0x00036465) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x00041675) list_double_large_graphic_int_radio_pane_t

0xc7b1,	// (0x0003df7e) list_highlight_pane_cp027

0x2eb8,	// (0x00034685) main_button_pane_4

0xbf4f,	// (0x0003d71c) main_welc_pane_g4_ParamLimits

0xbf4f,	// (0x0003d71c) main_welc_pane_g4

0xbfab,	// (0x0003d778) main_welc_pane_t4_ParamLimits

0xbfab,	// (0x0003d778) main_welc_pane_t4

0xbfbd,	// (0x0003d78a) main_welc_pane_t5_ParamLimits

0xbfbd,	// (0x0003d78a) main_welc_pane_t5

0xbfed,	// (0x0003d7ba) main_welc_pane_t6_ParamLimits

0xbfed,	// (0x0003d7ba) main_welc_pane_t6

0xc0a3,	// (0x0003d870) welc_button_pane_2_ParamLimits

0xc0a3,	// (0x0003d870) welc_button_pane_2

0xc0bb,	// (0x0003d888) welc_button_pane_3_ParamLimits

0xc0bb,	// (0x0003d888) welc_button_pane_3

0x2ec0,	// (0x0003468d) welc_button_pane_4

0xc0d5,	// (0x0003d8a2) welc_button_pane_5_ParamLimits

0xc0d5,	// (0x0003d8a2) welc_button_pane_5

0x4cfa,	// (0x000364c7) main_popup_welc_pane

0x2f9d,	// (0x0003476a) main_welc_sk_g3

0x2fa7,	// (0x00034774) main_welc_sk_g4

0x2fb1,	// (0x0003477e) main_welc_sk_t3

0x2fc1,	// (0x0003478e) main_welc_sk_t4

0x2fd1,	// (0x0003479e) popup_welc_pane_t4

0x2fdf,	// (0x000347ac) popup_welc_pane_t5

0x2fef,	// (0x000347bc) popup_welc_pane_t6

0xc7b1,	// (0x0003df7e) main_acti_pane

0xc7b1,	// (0x0003df7e) main_sso_pane

0xc37a,	// (0x0003db47) sso_body_pane_ParamLimits

0xc37a,	// (0x0003db47) sso_body_pane

0xc388,	// (0x0003db55) sso_logo_pane_ParamLimits

0xc388,	// (0x0003db55) sso_logo_pane

0xc3af,	// (0x0003db7c) sso_sk_pane_ParamLimits

0xc3af,	// (0x0003db7c) sso_sk_pane

0xd10c,	// (0x0003e8d9) main_sso_logo_pane_g1

0xc3bc,	// (0x0003db89) sso_sk_pane_t1_ParamLimits

0xc3bc,	// (0x0003db89) sso_sk_pane_t1

0xc3d0,	// (0x0003db9d) sso_sk_pane_t2_ParamLimits

0xc3d0,	// (0x0003db9d) sso_sk_pane_t2

0x0001,

0xfead,	// (0x0004167a) sso_sk_pane_t_ParamLimits

0xfead,	// (0x0004167a) sso_sk_pane_t

0x302d,	// (0x000347fa) aid_sso_gap

0x3036,	// (0x00034803) aid_sso_txt1

0x3040,	// (0x0003480d) aid_sso_txt2

0x304a,	// (0x00034817) aid_sso_txt3

0x0002,

0xfeb2,	// (0x0004167f) aid_sso_txt

0x3054,	// (0x00034821) aid_sso_widget

0xc42f,	// (0x0003dbfc) sso_btn_pane_ParamLimits

0xc42f,	// (0x0003dbfc) sso_btn_pane

0xc4a8,	// (0x0003dc75) sso_option_pane_ParamLimits

0xc4a8,	// (0x0003dc75) sso_option_pane

0xc522,	// (0x0003dcef) sso_query_pane_ParamLimits

0xc522,	// (0x0003dcef) sso_query_pane

0xc572,	// (0x0003dd3f) sso_query_pane_cp01_ParamLimits

0xc572,	// (0x0003dd3f) sso_query_pane_cp01

0xc5c4,	// (0x0003dd91) sso_t_hdr_pane_ParamLimits

0xc5c4,	// (0x0003dd91) sso_t_hdr_pane

0xc5e3,	// (0x0003ddb0) sso_t_nml_pane_ParamLimits

0xc5e3,	// (0x0003ddb0) sso_t_nml_pane

0x304a,	// (0x00034817) sso_t_sub_pane

0xc395,	// (0x0003db62) sso_popup_window_ParamLimits

0xc395,	// (0x0003db62) sso_popup_window

0xc3e2,	// (0x0003dbaf) sso_apps_pane_ParamLimits

0xc3e2,	// (0x0003dbaf) sso_apps_pane

0xc405,	// (0x0003dbd2) sso_body_pane_g1

0xc40f,	// (0x0003dbdc) sso_body_pane_t1

0xc41f,	// (0x0003dbec) sso_body_pane_t2

0x0001,

0xfeb9,	// (0x00041686) sso_body_pane_t

0xc47a,	// (0x0003dc47) sso_btn_pane_cp01_ParamLimits

0xc47a,	// (0x0003dc47) sso_btn_pane_cp01

0xc4f4,	// (0x0003dcc1) sso_prog_pane_ParamLimits

0xc4f4,	// (0x0003dcc1) sso_prog_pane

0x305e,	// (0x0003482b) sso_t_hdr_pane_t1_ParamLimits

0x305e,	// (0x0003482b) sso_t_hdr_pane_t1

0x3071,	// (0x0003483e) input_focus_pane_cp10_ParamLimits

0x3071,	// (0x0003483e) input_focus_pane_cp10

0x3087,	// (0x00034854) sso_query_pane_t1_ParamLimits

0x3087,	// (0x00034854) sso_query_pane_t1

0x309a,	// (0x00034867) sso_query_pane_t2_ParamLimits

0x309a,	// (0x00034867) sso_query_pane_t2

0x30b3,	// (0x00034880) sso_query_pane_t3_ParamLimits

0x30b3,	// (0x00034880) sso_query_pane_t3

0x30dd,	// (0x000348aa) sso_query_pane_t4_ParamLimits

0x30dd,	// (0x000348aa) sso_query_pane_t4

0x0003,

0xfebe,	// (0x0004168b) sso_query_pane_t_ParamLimits

0xfebe,	// (0x0004168b) sso_query_pane_t

0xc7b1,	// (0x0003df7e) bg_button_pane_cp22

0x2f8e,	// (0x0003475b) sso_btn_pane_t1

0xc633,	// (0x0003de00) sso_t_nml_pane_t1_ParamLimits

0xc633,	// (0x0003de00) sso_t_nml_pane_t1

0xc650,	// (0x0003de1d) sso_option_row_pane_ParamLimits

0xc650,	// (0x0003de1d) sso_option_row_pane

0xc65d,	// (0x0003de2a) sso_t_sub_pane_t1_ParamLimits

0xc65d,	// (0x0003de2a) sso_t_sub_pane_t1

0xce59,	// (0x0003e626) bg_popup_window_pane_cp11_ParamLimits

0xce59,	// (0x0003e626) bg_popup_window_pane_cp11

0xc670,	// (0x0003de3d) popup_sk_window_cp01_ParamLimits

0xc670,	// (0x0003de3d) popup_sk_window_cp01

0xc67d,	// (0x0003de4a) sso_popup_body_pane_ParamLimits

0xc67d,	// (0x0003de4a) sso_popup_body_pane

0xc68a,	// (0x0003de57) scroll_pane_cp21_ParamLimits

0xc68a,	// (0x0003de57) scroll_pane_cp21

0xc697,	// (0x0003de64) sso_popup_body_t_pane_ParamLimits

0xc697,	// (0x0003de64) sso_popup_body_t_pane

0xc6a4,	// (0x0003de71) sso_popup_body_t_hdr_pane_ParamLimits

0xc6a4,	// (0x0003de71) sso_popup_body_t_hdr_pane

0xc6b2,	// (0x0003de7f) sso_popup_body_t_nml_pane_ParamLimits

0xc6b2,	// (0x0003de7f) sso_popup_body_t_nml_pane

0xc6cd,	// (0x0003de9a) sso_popup_body_t_sub_pane_ParamLimits

0xc6cd,	// (0x0003de9a) sso_popup_body_t_sub_pane

0xc6f0,	// (0x0003debd) sso_popup_body_t_hdr_pane_t1

0xc700,	// (0x0003decd) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc700,	// (0x0003decd) sso_popup_body_t_nml_pane_t1

0xc744,	// (0x0003df11) sso_popup_body_t_sub_pane_t1_ParamLimits

0xc744,	// (0x0003df11) sso_popup_body_t_sub_pane_t1

0xd10c,	// (0x0003e8d9) sso_prog_pane_g1

0xc769,	// (0x0003df36) sso_apps_pane_comp1_ParamLimits

0xc769,	// (0x0003df36) sso_apps_pane_comp1

0xc785,	// (0x0003df52) sso_apps_pane_comp1_g1

0xc78d,	// (0x0003df5a) sso_apps_pane_comp1_t1

0xc79b,	// (0x0003df68) sso_option_row_pane_g1

0xc7a3,	// (0x0003df70) sso_option_row_pane_t1

0xbed6,	// (0x0003d6a3) bg_welc_area_ParamLimits

0xbed6,	// (0x0003d6a3) bg_welc_area

0xc023,	// (0x0003d7f0) sso_t_hdr_pane_a_t1_ParamLimits

0xc023,	// (0x0003d7f0) sso_t_hdr_pane_a_t1

0xc037,	// (0x0003d804) sso_t_nml_pane_a_t1_ParamLimits

0xc037,	// (0x0003d804) sso_t_nml_pane_a_t1

0xc061,	// (0x0003d82e) sso_t_sub_pane_a_t1_ParamLimits

0xc061,	// (0x0003d82e) sso_t_sub_pane_a_t1

0x2f8e,	// (0x0003475b) sso_btn_pane_t1_copy1

0xc7b1,	// (0x0003df7e) welc_button_pane_2_comp1

0x2ffd,	// (0x000347ca) sso_t_hdr_pane_p_t1

0x300d,	// (0x000347da) sso_t_nml_pane_p_t1

0x301d,	// (0x000347ea) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Small

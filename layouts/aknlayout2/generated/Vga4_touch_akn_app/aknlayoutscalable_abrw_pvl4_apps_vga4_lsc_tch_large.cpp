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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000ab8d3 };

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
0xfd83,	// (0x000ab656) Screen

0xfd8f,	// (0x000ab662) application_window

0xfdf7,	// (0x000ab6ca) area_bottom_pane_ParamLimits

0xfdf7,	// (0x000ab6ca) area_bottom_pane

0xfe59,	// (0x000ab72c) area_top_pane_ParamLimits

0xfe59,	// (0x000ab72c) area_top_pane

0xfeb6,	// (0x000ab789) call_video_uplink_pane_ParamLimits

0xfeb6,	// (0x000ab789) call_video_uplink_pane

0xfefb,	// (0x000ab7ce) main_pane_ParamLimits

0xfefb,	// (0x000ab7ce) main_pane

0xc62d,	// (0x000b7f00) context_pane

0x31c7,	// (0x000aea9a) navi_pane

0x31fe,	// (0x000aead1) popup_cale_events_window_ParamLimits

0x31fe,	// (0x000aead1) popup_cale_events_window

0xc640,	// (0x000b7f13) popup_mup_playback_window

0x3216,	// (0x000aeae9) signal_pane

0xa532,	// (0x000b5e05) main_browser_pane

0xa6d9,	// (0x000b5fac) main_burst_pane

0x2ecf,	// (0x000ae7a2) main_calc_pane

0xc621,	// (0x000b7ef4) main_cale_day_pane

0x2ee3,	// (0x000ae7b6) main_cale_month_pane

0xc621,	// (0x000b7ef4) main_cale_week_pane

0xa6d9,	// (0x000b5fac) main_call_pane

0x98b9,	// (0x000b518c) main_call_poc_pane

0xa6d9,	// (0x000b5fac) main_camera_pane

0xa6d9,	// (0x000b5fac) main_chi_dic_pane

0xaed8,	// (0x000b67ab) main_clock_pane

0x98b9,	// (0x000b518c) main_fmradio_pane

0xa6d9,	// (0x000b5fac) main_graph_messa_pane

0x98b9,	// (0x000b518c) main_help_pane

0xa532,	// (0x000b5e05) main_im_pane

0xa445,	// (0x000b5d18) main_image_pane_ParamLimits

0xa445,	// (0x000b5d18) main_image_pane

0x98b9,	// (0x000b518c) main_location2_pane

0xa6d9,	// (0x000b5fac) main_location_pane

0xa445,	// (0x000b5d18) main_messa_pane

0x98b9,	// (0x000b518c) main_mp2_pane

0xa6d9,	// (0x000b5fac) main_mp_pane

0x98b9,	// (0x000b518c) main_msg_pane

0x98b9,	// (0x000b518c) main_mup_eq_pane

0x98b9,	// (0x000b518c) main_mup_pane

0xa532,	// (0x000b5e05) main_notes_pane

0x98b9,	// (0x000b518c) main_pec_pane

0x98b9,	// (0x000b518c) main_phob_pane

0x98b9,	// (0x000b518c) main_pinb_pane

0x98b9,	// (0x000b518c) main_postcard_pane

0x98b9,	// (0x000b518c) main_qdial_pane

0xa6d9,	// (0x000b5fac) main_skin_pane

0x98b9,	// (0x000b518c) main_smil2_pane

0xa6d9,	// (0x000b5fac) main_smil_pane

0xa6d9,	// (0x000b5fac) main_video_pane

0xa6d9,	// (0x000b5fac) main_video_tele_pane

0xa445,	// (0x000b5d18) main_viewer_pane_ParamLimits

0xa445,	// (0x000b5d18) main_viewer_pane

0xa6d9,	// (0x000b5fac) main_vorec_pane

0x2f35,	// (0x000ae808) popup_blid_sat_info_window_ParamLimits

0x2f35,	// (0x000ae808) popup_blid_sat_info_window

0x2f99,	// (0x000ae86c) popup_dyc_status_message_window_ParamLimits

0x2f99,	// (0x000ae86c) popup_dyc_status_message_window

0x2fb3,	// (0x000ae886) popup_grid_large_graphic_window_ParamLimits

0x2fb3,	// (0x000ae886) popup_grid_large_graphic_window

0x3075,	// (0x000ae948) popup_loc_request_window_ParamLimits

0x3075,	// (0x000ae948) popup_loc_request_window

0x319b,	// (0x000aea6e) popup_wml_address_window_ParamLimits

0x319b,	// (0x000aea6e) popup_wml_address_window

0x2d0d,	// (0x000ae5e0) call_muted_g1

0x295b,	// (0x000ae22e) popup_call_audio_conf_window_ParamLimits

0x295b,	// (0x000ae22e) popup_call_audio_conf_window

0x2d1d,	// (0x000ae5f0) popup_call_audio_first_window_ParamLimits

0x2d1d,	// (0x000ae5f0) popup_call_audio_first_window

0x2d93,	// (0x000ae666) popup_call_audio_in_window_ParamLimits

0x2d93,	// (0x000ae666) popup_call_audio_in_window

0x2dcf,	// (0x000ae6a2) popup_call_audio_out_window_ParamLimits

0x2dcf,	// (0x000ae6a2) popup_call_audio_out_window

0x2e09,	// (0x000ae6dc) popup_call_audio_second_window_ParamLimits

0x2e09,	// (0x000ae6dc) popup_call_audio_second_window

0x2e5f,	// (0x000ae732) popup_call_audio_wait_window_ParamLimits

0x2e5f,	// (0x000ae732) popup_call_audio_wait_window

0x2e94,	// (0x000ae767) popup_number_entry_window_ParamLimits

0x2e94,	// (0x000ae767) popup_number_entry_window

0x9471,	// (0x000b4d44) bg_popup_call_pane_cp05_ParamLimits

0x9471,	// (0x000b4d44) bg_popup_call_pane_cp05

0x9491,	// (0x000b4d64) popup_number_entry_window_t1

0x94a4,	// (0x000b4d77) popup_number_entry_window_t2

0x94b6,	// (0x000b4d89) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000ba918) popup_number_entry_window_t

0x94fd,	// (0x000b4dd0) text_title_cp2

0x9510,	// (0x000b4de3) bg_popup_call_pane_cp_ParamLimits

0x9510,	// (0x000b4de3) bg_popup_call_pane_cp

0x951e,	// (0x000b4df1) call_thumbnail_pane

0x9526,	// (0x000b4df9) popup_call_audio_in_window_g1_ParamLimits

0x9526,	// (0x000b4df9) popup_call_audio_in_window_g1

0x9532,	// (0x000b4e05) popup_call_audio_in_window_g2_ParamLimits

0x9532,	// (0x000b4e05) popup_call_audio_in_window_g2

0x953e,	// (0x000b4e11) popup_call_audio_in_window_g3_ParamLimits

0x953e,	// (0x000b4e11) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000ba921) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000ba921) popup_call_audio_in_window_g

0x954a,	// (0x000b4e1d) popup_call_audio_in_window_t1_ParamLimits

0x954a,	// (0x000b4e1d) popup_call_audio_in_window_t1

0x9566,	// (0x000b4e39) popup_call_audio_in_window_t2_ParamLimits

0x9566,	// (0x000b4e39) popup_call_audio_in_window_t2

0x9582,	// (0x000b4e55) popup_call_audio_in_window_t3_ParamLimits

0x9582,	// (0x000b4e55) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000ba928) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000ba928) popup_call_audio_in_window_t

0x9510,	// (0x000b4de3) bg_popup_call_pane_cp01_ParamLimits

0x9510,	// (0x000b4de3) bg_popup_call_pane_cp01

0x951e,	// (0x000b4df1) call_thumbnail_pane_cp02

0x9595,	// (0x000b4e68) call_type_pane_cp022

0x959d,	// (0x000b4e70) popup_call_audio_out_window_g1_ParamLimits

0x959d,	// (0x000b4e70) popup_call_audio_out_window_g1

0x95af,	// (0x000b4e82) popup_call_audio_out_window_g2_ParamLimits

0x95af,	// (0x000b4e82) popup_call_audio_out_window_g2

0x95bb,	// (0x000b4e8e) popup_call_audio_out_window_g3_ParamLimits

0x95bb,	// (0x000b4e8e) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000ba92f) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000ba92f) popup_call_audio_out_window_g

0x95cd,	// (0x000b4ea0) popup_call_audio_out_window_t1_ParamLimits

0x95cd,	// (0x000b4ea0) popup_call_audio_out_window_t1

0x95e5,	// (0x000b4eb8) popup_call_audio_out_window_t2_ParamLimits

0x95e5,	// (0x000b4eb8) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000ba936) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000ba936) popup_call_audio_out_window_t

0x95fa,	// (0x000b4ecd) bg_popup_call_pane_ParamLimits

0x95fa,	// (0x000b4ecd) bg_popup_call_pane

0x0080,	// (0x000ab953) call_thumbnail_pane_cp_ParamLimits

0x0080,	// (0x000ab953) call_thumbnail_pane_cp

0x967e,	// (0x000b4f51) call_type_pane_cp01_ParamLimits

0x967e,	// (0x000b4f51) call_type_pane_cp01

0x96c2,	// (0x000b4f95) popup_call_audio_first_window_g1_ParamLimits

0x96c2,	// (0x000b4f95) popup_call_audio_first_window_g1

0x970e,	// (0x000b4fe1) popup_call_audio_first_window_g2_ParamLimits

0x970e,	// (0x000b4fe1) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000ba93b) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000ba93b) popup_call_audio_first_window_g

0x9752,	// (0x000b5025) popup_call_audio_first_window_t1_ParamLimits

0x9752,	// (0x000b5025) popup_call_audio_first_window_t1

0x97fe,	// (0x000b50d1) popup_call_audio_first_window_t4_ParamLimits

0x97fe,	// (0x000b50d1) popup_call_audio_first_window_t4

0x988a,	// (0x000b515d) popup_call_audio_first_window_t5_ParamLimits

0x988a,	// (0x000b515d) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000ba940) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000ba940) popup_call_audio_first_window_t

0x98b9,	// (0x000b518c) bg_popup_call_pane_cp02

0x98c3,	// (0x000b5196) call_type_pane_cp023

0x98cb,	// (0x000b519e) popup_call_audio_wait_window_g1

0x98d3,	// (0x000b51a6) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000ba947) popup_call_audio_wait_window_g

0x98db,	// (0x000b51ae) popup_call_audio_wait_window_t3

0x98e9,	// (0x000b51bc) bg_popup_call_pane_cp03_ParamLimits

0x98e9,	// (0x000b51bc) bg_popup_call_pane_cp03

0x9949,	// (0x000b521c) call_thumbnail_pane_cp011_ParamLimits

0x9949,	// (0x000b521c) call_thumbnail_pane_cp011

0x9955,	// (0x000b5228) call_type_pane_cp034_ParamLimits

0x9955,	// (0x000b5228) call_type_pane_cp034

0x9991,	// (0x000b5264) popup_call_audio_second_window_g1_ParamLimits

0x9991,	// (0x000b5264) popup_call_audio_second_window_g1

0x99cd,	// (0x000b52a0) popup_call_audio_second_window_g2_ParamLimits

0x99cd,	// (0x000b52a0) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000ba94c) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000ba94c) popup_call_audio_second_window_g

0x9a09,	// (0x000b52dc) popup_call_audio_second_window_t1_ParamLimits

0x9a09,	// (0x000b52dc) popup_call_audio_second_window_t1

0x9a8a,	// (0x000b535d) popup_call_audio_second_window_t2_ParamLimits

0x9a8a,	// (0x000b535d) popup_call_audio_second_window_t2

0x9ac0,	// (0x000b5393) popup_call_audio_second_window_t3_ParamLimits

0x9ac0,	// (0x000b5393) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000ba951) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000ba951) popup_call_audio_second_window_t

0x98b9,	// (0x000b518c) bg_popup_call_pane_cp04

0xa427,	// (0x000b5cfa) list_conf_pane

0xa42f,	// (0x000b5d02) popup_call_audio_conf_window_t1

0xa43d,	// (0x000b5d10) call_thumbnail_pane_g1

0xa445,	// (0x000b5d18) bg_pinb_pane_ParamLimits

0xa445,	// (0x000b5d18) bg_pinb_pane

0xa453,	// (0x000b5d26) find_pinb_pane

0xa445,	// (0x000b5d18) listscroll_pinb_pane_ParamLimits

0xa445,	// (0x000b5d18) listscroll_pinb_pane

0xa45d,	// (0x000b5d30) pinb_bg_pane_g1

0xa45d,	// (0x000b5d30) pinb_bg_pane_g2

0xa45d,	// (0x000b5d30) pinb_bg_pane_g3

0xa45d,	// (0x000b5d30) pinb_bg_pane_g4

0xa45d,	// (0x000b5d30) pinb_bg_pane_g5

0xa45d,	// (0x000b5d30) pinb_bg_pane_g6

0xa45d,	// (0x000b5d30) pinb_bg_pane_g7

0xa45d,	// (0x000b5d30) pinb_bg_pane_g8

0xa45d,	// (0x000b5d30) pinb_bg_pane_g9

0xa45d,	// (0x000b5d30) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000ba958) pinb_bg_pane_g

0x9445,	// (0x000b4d18) grid_pinb_pane

0x9445,	// (0x000b4d18) list_pinb_pane

0x9af6,	// (0x000b53c9) scroll_pane_cp01_ParamLimits

0x9af6,	// (0x000b53c9) scroll_pane_cp01

0xa467,	// (0x000b5d3a) find_pinb_pane_g1_ParamLimits

0xa467,	// (0x000b5d3a) find_pinb_pane_g1

0xa47f,	// (0x000b5d52) find_pinb_pane_t1

0xa491,	// (0x000b5d64) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x000ba972) find_pinb_pane_t

0xa4a6,	// (0x000b5d79) input_focus_pane_cp01_ParamLimits

0xa4a6,	// (0x000b5d79) input_focus_pane_cp01

0xa4b2,	// (0x000b5d85) cell_pinb_pane_ParamLimits

0xa4b2,	// (0x000b5d85) cell_pinb_pane

0xa4c0,	// (0x000b5d93) cell_pinb_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_pinb_pane_g1

0xa4ce,	// (0x000b5da1) cell_pinb_pane_g2_ParamLimits

0xa4ce,	// (0x000b5da1) cell_pinb_pane_g2

0xa4ce,	// (0x000b5da1) cell_pinb_pane_g3_ParamLimits

0xa4ce,	// (0x000b5da1) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x000ba977) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x000ba977) cell_pinb_pane_g

0x98b9,	// (0x000b518c) grid_highlight_pane_cp01

0xa4b2,	// (0x000b5d85) list_pinb_item_pane_ParamLimits

0xa4b2,	// (0x000b5d85) list_pinb_item_pane

0x9445,	// (0x000b4d18) list_highlight_pane_cp02

0xa4dc,	// (0x000b5daf) list_pinb_item_pane_g1_ParamLimits

0xa4dc,	// (0x000b5daf) list_pinb_item_pane_g1

0xa4ce,	// (0x000b5da1) list_pinb_item_pane_g2_ParamLimits

0xa4ce,	// (0x000b5da1) list_pinb_item_pane_g2

0xa4c0,	// (0x000b5d93) list_pinb_item_pane_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_pinb_item_pane_g3

0xa4ce,	// (0x000b5da1) list_pinb_item_pane_g4_ParamLimits

0xa4ce,	// (0x000b5da1) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x000ba97e) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x000ba97e) list_pinb_item_pane_g

0xa4ea,	// (0x000b5dbd) list_pinb_item_pane_t1_ParamLimits

0xa4ea,	// (0x000b5dbd) list_pinb_item_pane_t1

0x00c4,	// (0x000ab997) calc_display_pane

0x00e9,	// (0x000ab9bc) calc_paper_pane

0x010c,	// (0x000ab9df) grid_calc_pane

0x98b9,	// (0x000b518c) bg_list_pane_cp01

0x013a,	// (0x000aba0d) clock_g1

0x0142,	// (0x000aba15) clock_g2

0x0001,

0xf0b4,	// (0x000ba987) clock_g

0x014a,	// (0x000aba1d) clock_t1_ParamLimits

0x014a,	// (0x000aba1d) clock_t1

0x015f,	// (0x000aba32) clock_t2_ParamLimits

0x015f,	// (0x000aba32) clock_t2

0x0171,	// (0x000aba44) clock_t3_ParamLimits

0x0171,	// (0x000aba44) clock_t3

0x0183,	// (0x000aba56) clock_t4_ParamLimits

0x0183,	// (0x000aba56) clock_t4

0x0195,	// (0x000aba68) clock_t5_ParamLimits

0x0195,	// (0x000aba68) clock_t5

0x01aa,	// (0x000aba7d) clock_t6_ParamLimits

0x01aa,	// (0x000aba7d) clock_t6

0x01bc,	// (0x000aba8f) clock_t7_ParamLimits

0x01bc,	// (0x000aba8f) clock_t7

0x01ce,	// (0x000abaa1) clock_t8_ParamLimits

0x01ce,	// (0x000abaa1) clock_t8

0x01e2,	// (0x000abab5) clock_t9_ParamLimits

0x01e2,	// (0x000abab5) clock_t9

0x0008,

0xf0b9,	// (0x000ba98c) clock_t_ParamLimits

0xf0b9,	// (0x000ba98c) clock_t

0xa4fe,	// (0x000b5dd1) popup_clock_analogue_window_cp02

0xa4fe,	// (0x000b5dd1) popup_clock_digital_window_cp01

0x98b9,	// (0x000b518c) listscroll_help_pane

0x98b9,	// (0x000b518c) phob_pre_status_pane

0xa506,	// (0x000b5dd9) grid_qdial_pane

0xa445,	// (0x000b5d18) listscroll_mce_pane

0xa445,	// (0x000b5d18) bg_notes_pane

0xa510,	// (0x000b5de3) list_notes_pane

0x01f8,	// (0x000abacb) scroll_pane_cp06

0xa51e,	// (0x000b5df1) bg_calc_paper_pane

0x9b0c,	// (0x000b53df) list_calc_pane

0xa532,	// (0x000b5e05) bg_calc_display_pane

0x020c,	// (0x000abadf) calc_display_pane_t1

0x0221,	// (0x000abaf4) calc_display_pane_t2

0x9b26,	// (0x000b53f9) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x000ba99f) calc_display_pane_t

0x0236,	// (0x000abb09) cell_calc_pane_ParamLimits

0x0236,	// (0x000abb09) cell_calc_pane

0xa53e,	// (0x000b5e11) bg_calc_paper_pane_g1

0xa54a,	// (0x000b5e1d) bg_calc_paper_pane_g2

0xa556,	// (0x000b5e29) bg_calc_paper_pane_g3

0xa562,	// (0x000b5e35) bg_calc_paper_pane_g4

0xa56e,	// (0x000b5e41) bg_calc_paper_pane_g5

0x0271,	// (0x000abb44) bg_calc_paper_pane_g6

0x0284,	// (0x000abb57) bg_calc_paper_pane_g7

0x0297,	// (0x000abb6a) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x000ba9a6) bg_calc_paper_pane_g

0x02aa,	// (0x000abb7d) calc_bg_paper_pane_g9

0x02bd,	// (0x000abb90) list_calc_item_pane_ParamLimits

0x02bd,	// (0x000abb90) list_calc_item_pane

0xa57a,	// (0x000b5e4d) list_calc_item_pane_g1

0x9b38,	// (0x000b540b) list_calc_item_pane_t1_ParamLimits

0x9b38,	// (0x000b540b) list_calc_item_pane_t1

0x02d5,	// (0x000abba8) list_calc_item_pane_t2_ParamLimits

0x02d5,	// (0x000abba8) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x000ba9b7) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x000ba9b7) list_calc_item_pane_t

0xa45d,	// (0x000b5d30) cell_calc_pane_g1

0xa587,	// (0x000b5e5a) grid_highlight_pane_cp02

0x0307,	// (0x000abbda) bg_calc_display_pane_g1

0x0310,	// (0x000abbe3) bg_calc_display_pane_g2

0xa5a9,	// (0x000b5e7c) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x000ba9c1) bg_calc_display_pane_g

0x031a,	// (0x000abbed) cell_qdial_pane_ParamLimits

0x031a,	// (0x000abbed) cell_qdial_pane

0x032e,	// (0x000abc01) cell_qdial_pane_g1_ParamLimits

0x032e,	// (0x000abc01) cell_qdial_pane_g1

0x0344,	// (0x000abc17) cell_qdial_pane_g2_ParamLimits

0x0344,	// (0x000abc17) cell_qdial_pane_g2

0xa5b2,	// (0x000b5e85) cell_qdial_pane_g3_ParamLimits

0xa5b2,	// (0x000b5e85) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x000ba9c8) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x000ba9c8) cell_qdial_pane_g

0x036b,	// (0x000abc3e) cell_qdial_pane_t1_ParamLimits

0x036b,	// (0x000abc3e) cell_qdial_pane_t1

0x0383,	// (0x000abc56) cell_qdial_pane_t2_ParamLimits

0x0383,	// (0x000abc56) cell_qdial_pane_t2

0x0396,	// (0x000abc69) cell_qdial_pane_t3_ParamLimits

0x0396,	// (0x000abc69) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x000ba9d1) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x000ba9d1) cell_qdial_pane_t

0x98b9,	// (0x000b518c) grid_highlight_pane_cp04

0xa5be,	// (0x000b5e91) thumbnail_qdial_pane_ParamLimits

0xa5be,	// (0x000b5e91) thumbnail_qdial_pane

0xa61a,	// (0x000b5eed) list_help_pane

0xa623,	// (0x000b5ef6) scroll_pane_cp02

0x03a9,	// (0x000abc7c) help_list_pane_t1_ParamLimits

0x03a9,	// (0x000abc7c) help_list_pane_t1

0x9b4a,	// (0x000b541d) bg_notes_pane_g2

0x9b52,	// (0x000b5425) bg_notes_pane_g3

0x9b5a,	// (0x000b542d) notes_bg_pane_g1

0x9b62,	// (0x000b5435) notes_bg_pane_g4

0x9b6a,	// (0x000b543d) notes_bg_pane_g5

0x9b72,	// (0x000b5445) notes_bg_pane_g6

0x9b7a,	// (0x000b544d) notes_bg_pane_g7

0x9b82,	// (0x000b5455) notes_bg_pane_g8

0x9b8a,	// (0x000b545d) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x000ba9ef) notes_bg_pane_g

0x03cd,	// (0x000abca0) list_notes_text_pane_ParamLimits

0x03cd,	// (0x000abca0) list_notes_text_pane

0xa62c,	// (0x000b5eff) list_notes_text_pane_g1

0x9b92,	// (0x000b5465) list_notes_text_pane_t1

0x03e4,	// (0x000abcb7) listscroll_cale_week_pane

0x040e,	// (0x000abce1) bg_cale_heading_pane

0x0432,	// (0x000abd05) bg_cale_pane_cp01

0x044f,	// (0x000abd22) cale_week_corner_pane

0x046e,	// (0x000abd41) cale_week_day_heading_pane

0x0497,	// (0x000abd6a) cale_week_scroll_pane_g1

0x04b6,	// (0x000abd89) cale_week_scroll_pane_g2

0x04ce,	// (0x000abda1) cale_week_scroll_pane_g3

0x04e6,	// (0x000abdb9) cale_week_scroll_pane_g4

0x04fe,	// (0x000abdd1) cale_week_scroll_pane_g5

0x051e,	// (0x000abdf1) cale_week_scroll_pane_g6

0x053e,	// (0x000abe11) cale_week_scroll_pane_g7

0x0562,	// (0x000abe35) cale_week_scroll_pane_g8

0x0586,	// (0x000abe59) cale_week_scroll_pane_g9

0x059e,	// (0x000abe71) cale_week_scroll_pane_g10

0x05b6,	// (0x000abe89) cale_week_scroll_pane_g11

0x05ce,	// (0x000abea1) cale_week_scroll_pane_g12

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g13

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g14

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x000ba9fe) cale_week_scroll_pane_g

0x063a,	// (0x000abf0d) cale_week_time_pane

0x065e,	// (0x000abf31) grid_cale_week_pane

0xa661,	// (0x000b5f34) scroll_pane_cp08

0x0690,	// (0x000abf63) cell_cale_week_pane_ParamLimits

0x0690,	// (0x000abf63) cell_cale_week_pane

0x072c,	// (0x000abfff) cale_week_day_heading_pane_t1

0x0756,	// (0x000ac029) cale_week_day_heading_pane_t2

0x0785,	// (0x000ac058) cale_week_day_heading_pane_t3

0x07b4,	// (0x000ac087) cale_week_day_heading_pane_t4

0x07e3,	// (0x000ac0b6) cale_week_day_heading_pane_t5

0x0816,	// (0x000ac0e9) cale_week_day_heading_pane_t6

0x084d,	// (0x000ac120) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x000baa1f) cale_week_day_heading_pane_t

0xa67e,	// (0x000b5f51) bg_cale_side_pane

0x0877,	// (0x000ac14a) cale_week_time_pane_t1

0x0891,	// (0x000ac164) cale_week_time_pane_t2

0x08ab,	// (0x000ac17e) cale_week_time_pane_t3

0x08c5,	// (0x000ac198) cale_week_time_pane_t4

0x08df,	// (0x000ac1b2) cale_week_time_pane_t5

0x08f9,	// (0x000ac1cc) cale_week_time_pane_t6

0x0919,	// (0x000ac1ec) cale_week_time_pane_t7

0x093f,	// (0x000ac212) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x000baa2e) cale_week_time_pane_t

0x0965,	// (0x000ac238) cell_cale_week_pane_g2

0x0989,	// (0x000ac25c) cell_cale_week_pane_g3_ParamLimits

0x0989,	// (0x000ac25c) cell_cale_week_pane_g3

0xa68c,	// (0x000b5f5f) grid_highlight_pane_cp07

0xa694,	// (0x000b5f67) listscroll_gms_pane

0xa69e,	// (0x000b5f71) grid_gms_pane

0xa6a7,	// (0x000b5f7a) listscroll_gms_pane_g1

0xa6af,	// (0x000b5f82) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x000baa3f) listscroll_gms_pane_g

0x09a1,	// (0x000ac274) scroll_pane_cp010

0x09ac,	// (0x000ac27f) cell_gms_pane_ParamLimits

0x09ac,	// (0x000ac27f) cell_gms_pane

0x09c3,	// (0x000ac296) cell_gms_pane_g1

0xa6b7,	// (0x000b5f8a) cell_gms_pane_g2

0xa6bf,	// (0x000b5f92) cell_gms_pane_g3

0xa6c8,	// (0x000b5f9b) cell_gms_pane_g4

0x0003,

0xf171,	// (0x000baa44) cell_gms_pane_g

0xa6d1,	// (0x000b5fa4) grid_highlight_pane_cp09

0x2c91,	// (0x000ae564) phob_pre_status_pane_g1

0x2c99,	// (0x000ae56c) phob_pre_status_pane_g2

0x2ca1,	// (0x000ae574) phob_pre_status_pane_g3

0x2ca9,	// (0x000ae57c) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x000bae08) phob_pre_status_pane_g

0x2cb9,	// (0x000ae58c) phob_pre_status_pane_t1

0x2cc9,	// (0x000ae59c) phob_pre_status_pane_t2

0x2cd9,	// (0x000ae5ac) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x000bae13) phob_pre_status_pane_t

0xa6d9,	// (0x000b5fac) bg_list_pane_cp05

0x09d3,	// (0x000ac2a6) grid_vorec_pane

0x09dd,	// (0x000ac2b0) vorec_t1

0x09eb,	// (0x000ac2be) vorec_t2

0x09f9,	// (0x000ac2cc) vorec_t3

0x0a07,	// (0x000ac2da) vorec_t4

0xa419,	// (0x000b5cec) vorec_t5

0x8728,	// (0x000b3ffb) vorec_t6

0x0004,

0xf17a,	// (0x000baa4d) vorec_t

0x8736,	// (0x000b4009) wait_bar_pane_cp01

0x0a23,	// (0x000ac2f6) cell_vorec_pane_ParamLimits

0x0a23,	// (0x000ac2f6) cell_vorec_pane

0x9ba0,	// (0x000b5473) cell_vorec_pane_g1

0x98b9,	// (0x000b518c) grid_highlight_pane_cp05

0x9af6,	// (0x000b53c9) cams_zoom_pane

0x9af6,	// (0x000b53c9) image_vga_pane

0xa4c0,	// (0x000b5d93) main_camera_pane_g1

0xa4c0,	// (0x000b5d93) main_camera_pane_g2

0xa4c0,	// (0x000b5d93) main_camera_pane_g3

0xa4c0,	// (0x000b5d93) main_camera_pane_g4

0xa4c0,	// (0x000b5d93) main_camera_pane_g5

0xa4c0,	// (0x000b5d93) main_camera_pane_g6

0xa4c0,	// (0x000b5d93) main_camera_pane_g7

0x0007,

0xf185,	// (0x000baa58) main_camera_pane_g

0xa6e1,	// (0x000b5fb4) main_camera_pane_t1

0xa6e1,	// (0x000b5fb4) main_camera_pane_t2

0x0001,

0xf196,	// (0x000baa69) main_camera_pane_t

0x0a4c,	// (0x000ac31f) cams_zoom_pane_cp_ParamLimits

0x0a4c,	// (0x000ac31f) cams_zoom_pane_cp

0x0a80,	// (0x000ac353) image_cif_pane_ParamLimits

0x0a80,	// (0x000ac353) image_cif_pane

0x9445,	// (0x000b4d18) image_subqcif_pane

0x0a92,	// (0x000ac365) main_video_pane_g1_ParamLimits

0x0a92,	// (0x000ac365) main_video_pane_g1

0x0ac0,	// (0x000ac393) main_video_pane_g2_ParamLimits

0x0ac0,	// (0x000ac393) main_video_pane_g2

0x0afa,	// (0x000ac3cd) main_video_pane_g3_ParamLimits

0x0afa,	// (0x000ac3cd) main_video_pane_g3

0x0afa,	// (0x000ac3cd) main_video_pane_g4_ParamLimits

0x0afa,	// (0x000ac3cd) main_video_pane_g4

0x0b2e,	// (0x000ac401) main_video_pane_g5_ParamLimits

0x0b2e,	// (0x000ac401) main_video_pane_g5

0xa6f5,	// (0x000b5fc8) main_video_pane_g6_ParamLimits

0xa6f5,	// (0x000b5fc8) main_video_pane_g6

0x0006,

0xf19b,	// (0x000baa6e) main_video_pane_g_ParamLimits

0xf19b,	// (0x000baa6e) main_video_pane_g

0x0b4a,	// (0x000ac41d) main_video_pane_t1_ParamLimits

0x0b4a,	// (0x000ac41d) main_video_pane_t1

0xa70f,	// (0x000b5fe2) cams_zoom_pane_g1

0xa70f,	// (0x000b5fe2) cams_zoom_pane_g2

0xa70f,	// (0x000b5fe2) cams_zoom_pane_g3

0xa70f,	// (0x000b5fe2) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x000baa7d) cams_zoom_pane_g

0x0ba2,	// (0x000ac475) grid_cams_pane

0x0bbc,	// (0x000ac48f) linegrid_cams_pane

0x0bce,	// (0x000ac4a1) cell_cams_pane_ParamLimits

0x0bce,	// (0x000ac4a1) cell_cams_pane

0xa719,	// (0x000b5fec) cams_burst_image_pane

0xa721,	// (0x000b5ff4) cell_cams_pane_g1

0x98b9,	// (0x000b518c) grid_highlight_pane_cp03

0xa45d,	// (0x000b5d30) mp_bg_pane_g1

0x9445,	// (0x000b4d18) bg_list_pane_cp03

0x9445,	// (0x000b4d18) bg_mp_pane

0x9445,	// (0x000b4d18) grid_mp_pane

0xa70f,	// (0x000b5fe2) media_player_g1

0xac6d,	// (0x000b6540) media_player_t1

0xac6d,	// (0x000b6540) media_player_t2

0xac6d,	// (0x000b6540) media_player_t3

0xac6d,	// (0x000b6540) media_player_t4

0xac6d,	// (0x000b6540) media_player_t5

0xac6d,	// (0x000b6540) media_player_t6

0xac6d,	// (0x000b6540) media_player_t7

0x0006,

0xf51f,	// (0x000badf2) media_player_t

0x9445,	// (0x000b4d18) wait_bar_pane_cp02

0xf504,	// (0x000badd7) main_usb_pane_t

0xaed8,	// (0x000b67ab) cell_mp_pane

0xa45d,	// (0x000b5d30) cell_mp_pane_g1

0x98b9,	// (0x000b518c) grid_highlight_pane_cp06

0xa729,	// (0x000b5ffc) grid_skin_colour_pane

0xa731,	// (0x000b6004) list_highlight_pane_cp03

0x0bf0,	// (0x000ac4c3) skin_g1

0xa739,	// (0x000b600c) skin_t1

0xa748,	// (0x000b601b) skin_t2

0x0001,

0xf1d8,	// (0x000baaab) skin_t

0x0bf8,	// (0x000ac4cb) cell_skin_colour_pane_ParamLimits

0x0bf8,	// (0x000ac4cb) cell_skin_colour_pane

0xa756,	// (0x000b6029) cell_skin_colour_pane_g1

0x0c6b,	// (0x000ac53e) call_video_g1_ParamLimits

0x0c6b,	// (0x000ac53e) call_video_g1

0x0c87,	// (0x000ac55a) call_video_g2_ParamLimits

0x0c87,	// (0x000ac55a) call_video_g2

0x0001,

0xf1dd,	// (0x000baab0) call_video_g_ParamLimits

0xf1dd,	// (0x000baab0) call_video_g

0x0ccc,	// (0x000ac59f) call_video_uplink_pane_cp1_ParamLimits

0x0ccc,	// (0x000ac59f) call_video_uplink_pane_cp1

0xa768,	// (0x000b603b) call_video_uplink_pane_cp2

0x0d6d,	// (0x000ac640) video_down_crop_pane_ParamLimits

0x0d6d,	// (0x000ac640) video_down_crop_pane

0x0e56,	// (0x000ac729) video_down_pane_ParamLimits

0x0e56,	// (0x000ac729) video_down_pane

0xa770,	// (0x000b6043) video_down_subqcif_pane_ParamLimits

0xa770,	// (0x000b6043) video_down_subqcif_pane

0xa78a,	// (0x000b605d) video_down_subqcif_pane_cp_ParamLimits

0xa78a,	// (0x000b605d) video_down_subqcif_pane_cp

0xa7b2,	// (0x000b6085) im_reading_pane_ParamLimits

0xa7b2,	// (0x000b6085) im_reading_pane

0x0f61,	// (0x000ac834) im_writing_pane_ParamLimits

0x0f61,	// (0x000ac834) im_writing_pane

0x0f7f,	// (0x000ac852) im_reading_pane_t1

0xa7cc,	// (0x000b609f) list_im_pane

0xa7dd,	// (0x000b60b0) scroll_pane_cp07

0x0fbe,	// (0x000ac891) im_writing_pane_t1_ParamLimits

0x0fbe,	// (0x000ac891) im_writing_pane_t1

0xa7f6,	// (0x000b60c9) im_writing_pane_t2_ParamLimits

0xa7f6,	// (0x000b60c9) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x000baaba) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x000baaba) im_writing_pane_t

0x98b9,	// (0x000b518c) input_focus_pane_cp04

0x98b9,	// (0x000b518c) input_focus_pane_cp05

0x0fd3,	// (0x000ac8a6) list_im_single_pane_ParamLimits

0x0fd3,	// (0x000ac8a6) list_im_single_pane

0xa813,	// (0x000b60e6) list_single_im_pane_t1

0xa6d9,	// (0x000b5fac) blid_accuracy_pane

0xa6d9,	// (0x000b5fac) blid_compass_pane

0xc5d9,	// (0x000b7eac) main_location_t1

0xc5d9,	// (0x000b7eac) main_location_t2

0xc5d9,	// (0x000b7eac) main_location_t3

0x0002,

0xf52e,	// (0x000bae01) main_location_t

0x98b9,	// (0x000b518c) aid_levels_location

0xa45d,	// (0x000b5d30) blid_accuracy_pane_g1

0xa45d,	// (0x000b5d30) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x000bab09) blid_accuracy_pane_g

0xa84d,	// (0x000b6120) wml_content_pane

0xa88b,	// (0x000b615e) wml_button_pane_ParamLimits

0xa88b,	// (0x000b615e) wml_button_pane

0x0fe9,	// (0x000ac8bc) wml_list_single_large_pane_ParamLimits

0x0fe9,	// (0x000ac8bc) wml_list_single_large_pane

0x1002,	// (0x000ac8d5) wml_list_single_medium_pane_ParamLimits

0x1002,	// (0x000ac8d5) wml_list_single_medium_pane

0x101c,	// (0x000ac8ef) wml_list_single_small_pane_ParamLimits

0x101c,	// (0x000ac8ef) wml_list_single_small_pane

0xa89f,	// (0x000b6172) wml_selection_box_pane_ParamLimits

0xa89f,	// (0x000b6172) wml_selection_box_pane

0xa8b2,	// (0x000b6185) wml_list_single_pane_t1

0xa8c1,	// (0x000b6194) wml_list_single_medium_pane_t1

0xa8d0,	// (0x000b61a3) wml_list_single_large_pane_t1

0xa8df,	// (0x000b61b2) input_focus_pane_cp02_ParamLimits

0xa8df,	// (0x000b61b2) input_focus_pane_cp02

0xa8f2,	// (0x000b61c5) wml_selection_box_pane_g1

0xa8fb,	// (0x000b61ce) wml_selection_box_pane_t1_ParamLimits

0xa8fb,	// (0x000b61ce) wml_selection_box_pane_t1

0xa445,	// (0x000b5d18) bg_wml_button_pane_ParamLimits

0xa445,	// (0x000b5d18) bg_wml_button_pane

0xa913,	// (0x000b61e6) wml_button_pane_g1

0xa91b,	// (0x000b61ee) wml_button_pane_t1

0xa913,	// (0x000b61e6) wml_button_bg_pane_g1

0xa92b,	// (0x000b61fe) wml_button_bg_pane_g2

0xa933,	// (0x000b6206) wml_button_bg_pane_g3

0xa93b,	// (0x000b620e) wml_button_bg_pane_g4

0xa943,	// (0x000b6216) wml_button_bg_pane_g5

0xa94b,	// (0x000b621e) wml_button_bg_pane_g6

0xa953,	// (0x000b6226) wml_button_bg_pane_g7

0xa95b,	// (0x000b622e) wml_button_bg_pane_g8

0xa963,	// (0x000b6236) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x000baabf) wml_button_bg_pane_g

0x1038,	// (0x000ac90b) bg_list_pane_cp02

0xa96b,	// (0x000b623e) mce_header_pane_ParamLimits

0xa96b,	// (0x000b623e) mce_header_pane

0xa981,	// (0x000b6254) mce_icon_pane

0xa981,	// (0x000b6254) mce_image_pane

0xa98a,	// (0x000b625d) mce_text_pane_ParamLimits

0xa98a,	// (0x000b625d) mce_text_pane

0x1042,	// (0x000ac915) scroll_pane_cp03

0xa883,	// (0x000b6156) scroll_pane_cp04

0xa99d,	// (0x000b6270) scroll_pane_cp05_ParamLimits

0xa99d,	// (0x000b6270) scroll_pane_cp05

0x104c,	// (0x000ac91f) mce_header_field_pane_ParamLimits

0x104c,	// (0x000ac91f) mce_header_field_pane

0x1065,	// (0x000ac938) mce_header_field_pane_2_ParamLimits

0x1065,	// (0x000ac938) mce_header_field_pane_2

0x107b,	// (0x000ac94e) mce_header_field_pane_3

0x1083,	// (0x000ac956) list_single_mce_message_pane_ParamLimits

0x1083,	// (0x000ac956) list_single_mce_message_pane

0x109f,	// (0x000ac972) list_single_mce_smart_pane_ParamLimits

0x109f,	// (0x000ac972) list_single_mce_smart_pane

0xa9a9,	// (0x000b627c) input_focus_pane_cp03

0xa9b2,	// (0x000b6285) list_header_data_pane

0x10c6,	// (0x000ac999) mce_header_field_pane_t1

0x10d6,	// (0x000ac9a9) list_single_mce_header_pane_ParamLimits

0x10d6,	// (0x000ac9a9) list_single_mce_header_pane

0xa9ba,	// (0x000b628d) list_single_mce_header_pane_t1

0xa9c9,	// (0x000b629c) list_single_mce_message_pane_g1

0xa9d1,	// (0x000b62a4) list_single_mce_message_pane_t1

0x1110,	// (0x000ac9e3) bg_cale_heading_pane_cp01_ParamLimits

0x1110,	// (0x000ac9e3) bg_cale_heading_pane_cp01

0xa9df,	// (0x000b62b2) bg_cale_pane_cp02_ParamLimits

0xa9df,	// (0x000b62b2) bg_cale_pane_cp02

0x1162,	// (0x000aca35) cale_month_corner_pane

0x1181,	// (0x000aca54) cale_month_day_heading_pane_ParamLimits

0x1181,	// (0x000aca54) cale_month_day_heading_pane

0x11eb,	// (0x000acabe) cale_month_pane_g1_ParamLimits

0x11eb,	// (0x000acabe) cale_month_pane_g1

0x1232,	// (0x000acb05) cale_month_pane_g2_ParamLimits

0x1232,	// (0x000acb05) cale_month_pane_g2

0x126e,	// (0x000acb41) cale_month_pane_g3_ParamLimits

0x126e,	// (0x000acb41) cale_month_pane_g3

0x12c2,	// (0x000acb95) cale_month_pane_g4_ParamLimits

0x12c2,	// (0x000acb95) cale_month_pane_g4

0x1316,	// (0x000acbe9) cale_month_pane_g5_ParamLimits

0x1316,	// (0x000acbe9) cale_month_pane_g5

0x1372,	// (0x000acc45) cale_month_pane_g6_ParamLimits

0x1372,	// (0x000acc45) cale_month_pane_g6

0x13da,	// (0x000accad) cale_month_pane_g7_ParamLimits

0x13da,	// (0x000accad) cale_month_pane_g7

0x1446,	// (0x000acd19) cale_month_pane_g8_ParamLimits

0x1446,	// (0x000acd19) cale_month_pane_g8

0x14b2,	// (0x000acd85) cale_month_pane_g9_ParamLimits

0x14b2,	// (0x000acd85) cale_month_pane_g9

0x1516,	// (0x000acde9) cale_month_pane_g10_ParamLimits

0x1516,	// (0x000acde9) cale_month_pane_g10

0x1568,	// (0x000ace3b) cale_month_pane_g11_ParamLimits

0x1568,	// (0x000ace3b) cale_month_pane_g11

0x15ba,	// (0x000ace8d) cale_month_pane_g12_ParamLimits

0x15ba,	// (0x000ace8d) cale_month_pane_g12

0x1612,	// (0x000acee5) cale_month_pane_g13_ParamLimits

0x1612,	// (0x000acee5) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x000baad2) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x000baad2) cale_month_pane_g

0x166a,	// (0x000acf3d) cale_month_week_pane

0x168e,	// (0x000acf61) grid_cale_month_pane_ParamLimits

0x168e,	// (0x000acf61) grid_cale_month_pane

0x16ef,	// (0x000acfc2) cale_month_day_heading_pane_t1

0x1775,	// (0x000ad048) cale_month_day_heading_pane_t2

0x17ee,	// (0x000ad0c1) cale_month_day_heading_pane_t3

0x1867,	// (0x000ad13a) cale_month_day_heading_pane_t4

0x18e8,	// (0x000ad1bb) cale_month_day_heading_pane_t5

0x1971,	// (0x000ad244) cale_month_day_heading_pane_t6

0x1a02,	// (0x000ad2d5) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x000baaed) cale_month_day_heading_pane_t

0xa67e,	// (0x000b5f51) bg_cale_side_pane_cp01

0x1a93,	// (0x000ad366) cale_month_week_pane_t1

0x1aac,	// (0x000ad37f) cale_month_week_pane_t2

0x1ac5,	// (0x000ad398) cale_month_week_pane_t3

0x1ade,	// (0x000ad3b1) cale_month_week_pane_t4

0x1af7,	// (0x000ad3ca) cale_month_week_pane_t5

0x1b10,	// (0x000ad3e3) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x000baafc) cale_month_week_pane_t

0x1b35,	// (0x000ad408) cell_cale_month_pane_ParamLimits

0x1b35,	// (0x000ad408) cell_cale_month_pane

0x9baa,	// (0x000b547d) cell_cale_month_pane_g1

0x1c73,	// (0x000ad546) cell_cale_month_pane_t1_ParamLimits

0x1c73,	// (0x000ad546) cell_cale_month_pane_t1

0xa68c,	// (0x000b5f5f) grid_highlight_pane_cp08

0xa45d,	// (0x000b5d30) main_smil_g1

0x1c9f,	// (0x000ad572) smil_status_pane

0xaa1e,	// (0x000b62f1) smil_text_pane

0xc4ef,	// (0x000b7dc2) bg_popup_call3_rect_pane_g8

0xc4f7,	// (0x000b7dca) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x000bad95) bg_popup_call3_rect_pane_g

0xc6a2,	// (0x000b7f75) smil_status_volume_pane_g1

0xaa28,	// (0x000b62fb) smil_status_pane_t1

0x9d00,	// (0x000b55d3) volume_smil_pane

0xaa3f,	// (0x000b6312) list_smil_text_pane

0x1cb4,	// (0x000ad587) scroll_pane_cp011

0x1cbf,	// (0x000ad592) smil_text_list_pane_t1_ParamLimits

0x1cbf,	// (0x000ad592) smil_text_list_pane_t1

0x9bb6,	// (0x000b5489) aid_volume_smil_ParamLimits

0x9bb6,	// (0x000b5489) aid_volume_smil

0xa45d,	// (0x000b5d30) smil_volume_pane_g1

0xa45d,	// (0x000b5d30) smil_volume_pane_g2

0x0001,

0xf236,	// (0x000bab09) smil_volume_pane_g

0x03e4,	// (0x000abcb7) listscroll_cale_day_pane

0xaa49,	// (0x000b631c) bg_cale_pane

0xaa61,	// (0x000b6334) list_cale_pane

0xaa84,	// (0x000b6357) scroll_pane_cp09

0xaa95,	// (0x000b6368) cale_bg_pane_g1

0xaa9d,	// (0x000b6370) cale_bg_pane_g2

0xaaa5,	// (0x000b6378) cale_bg_pane_g3

0xaaad,	// (0x000b6380) cale_bg_pane_g4

0xaab5,	// (0x000b6388) cale_bg_pane_g5

0xaabd,	// (0x000b6390) cale_bg_pane_g6

0xaac5,	// (0x000b6398) cale_bg_pane_g7

0xaacd,	// (0x000b63a0) cale_bg_pane_g8

0xaad5,	// (0x000b63a8) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x000bab0e) cale_bg_pane_g

0xaadd,	// (0x000b63b0) list_cale_time_pane_ParamLimits

0xaadd,	// (0x000b63b0) list_cale_time_pane

0xaaf4,	// (0x000b63c7) list_cale_time_pane_g1_ParamLimits

0xaaf4,	// (0x000b63c7) list_cale_time_pane_g1

0xab00,	// (0x000b63d3) list_cale_time_pane_g2_ParamLimits

0xab00,	// (0x000b63d3) list_cale_time_pane_g2

0x1d13,	// (0x000ad5e6) list_cale_time_pane_g3_ParamLimits

0x1d13,	// (0x000ad5e6) list_cale_time_pane_g3

0x1d21,	// (0x000ad5f4) list_cale_time_pane_g4_ParamLimits

0x1d21,	// (0x000ad5f4) list_cale_time_pane_g4

0x1d2f,	// (0x000ad602) list_cale_time_pane_g5_ParamLimits

0x1d2f,	// (0x000ad602) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x000bab21) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x000bab21) list_cale_time_pane_g

0xab1a,	// (0x000b63ed) list_cale_time_pane_t1_ParamLimits

0xab1a,	// (0x000b63ed) list_cale_time_pane_t1

0xab42,	// (0x000b6415) list_cale_time_pane_t2_ParamLimits

0xab42,	// (0x000b6415) list_cale_time_pane_t2

0x1fe1,	// (0x000ad8b4) aid_blid_cardinal_pane

0x201f,	// (0x000ad8f2) compass_pane_t4

0xab6a,	// (0x000b643d) list_cale_time_pane_t4_ParamLimits

0xab6a,	// (0x000b643d) list_cale_time_pane_t4

0x202d,	// (0x000ad900) compass_pane_t5

0x203d,	// (0x000ad910) compass_pane_t6

0x204b,	// (0x000ad91e) compass_pane_t7

0xaf88,	// (0x000b685b) navi_pane_cc_t1

0xb0d5,	// (0x000b69a8) aid_phob_thumbnail_center_pane

0x25ee,	// (0x000adec1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x000bab2e) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x000bab2e) list_cale_time_pane_t

0x9510,	// (0x000b4de3) bg_popup_window_pane_cp02_ParamLimits

0x9510,	// (0x000b4de3) bg_popup_window_pane_cp02

0xab92,	// (0x000b6465) heading_pane_cp01_ParamLimits

0xab92,	// (0x000b6465) heading_pane_cp01

0xab9e,	// (0x000b6471) loc_req_pane_ParamLimits

0xab9e,	// (0x000b6471) loc_req_pane

0xabae,	// (0x000b6481) loc_type_pane_ParamLimits

0xabae,	// (0x000b6481) loc_type_pane

0xabc0,	// (0x000b6493) loc_type_pane_t1_ParamLimits

0xabc0,	// (0x000b6493) loc_type_pane_t1

0xabd2,	// (0x000b64a5) loc_type_pane_t2_ParamLimits

0xabd2,	// (0x000b64a5) loc_type_pane_t2

0xabe4,	// (0x000b64b7) loc_type_pane_t3_ParamLimits

0xabe4,	// (0x000b64b7) loc_type_pane_t3

0x0002,

0xf262,	// (0x000bab35) loc_type_pane_t_ParamLimits

0xf262,	// (0x000bab35) loc_type_pane_t

0xabf6,	// (0x000b64c9) list_loc_req_pane

0xac00,	// (0x000b64d3) scroll_pane_cp012

0x1d3d,	// (0x000ad610) list_single_loc_request_popup_menu_pane_ParamLimits

0x1d3d,	// (0x000ad610) list_single_loc_request_popup_menu_pane

0xac0b,	// (0x000b64de) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xac0b,	// (0x000b64de) list_single_loc_request_popup_menu_pane_g1

0xac17,	// (0x000b64ea) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xac17,	// (0x000b64ea) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x000bab3c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x000bab3c) list_single_loc_request_popup_menu_pane_g

0xac23,	// (0x000b64f6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xac23,	// (0x000b64f6) list_single_loc_request_popup_menu_pane_t1

0xa445,	// (0x000b5d18) bg_popup_window_pane_cp03_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_window_pane_cp03

0xac39,	// (0x000b650c) heading_loc_req_pane_ParamLimits

0xac39,	// (0x000b650c) heading_loc_req_pane

0x1d4a,	// (0x000ad61d) popup_dyc_status_message_window_g1_ParamLimits

0x1d4a,	// (0x000ad61d) popup_dyc_status_message_window_g1

0x1d5e,	// (0x000ad631) popup_dyc_status_message_window_t1_ParamLimits

0x1d5e,	// (0x000ad631) popup_dyc_status_message_window_t1

0x1d73,	// (0x000ad646) popup_dyc_status_message_window_t2_ParamLimits

0x1d73,	// (0x000ad646) popup_dyc_status_message_window_t2

0x1d88,	// (0x000ad65b) popup_dyc_status_message_window_t3_ParamLimits

0x1d88,	// (0x000ad65b) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x000bab41) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x000bab41) popup_dyc_status_message_window_t

0x98b9,	// (0x000b518c) bg_heading_pane_cp01

0xac45,	// (0x000b6518) heading_loc_req_pane_g1

0xac4d,	// (0x000b6520) heading_loc_req_pane_g2

0xac55,	// (0x000b6528) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x000bab48) heading_loc_req_pane_g

0xac5d,	// (0x000b6530) heading_loc_req_pane_t1

0xac7d,	// (0x000b6550) bg_popup_sub_pane_cp01_ParamLimits

0xac7d,	// (0x000b6550) bg_popup_sub_pane_cp01

0xac8b,	// (0x000b655e) popup_cale_events_window_g1_ParamLimits

0xac8b,	// (0x000b655e) popup_cale_events_window_g1

0xacab,	// (0x000b657e) popup_cale_events_window_g2_ParamLimits

0xacab,	// (0x000b657e) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x000bab6a) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x000bab6a) popup_cale_events_window_g

0xaccb,	// (0x000b659e) popup_cale_events_window_t1_ParamLimits

0xaccb,	// (0x000b659e) popup_cale_events_window_t1

0xacdd,	// (0x000b65b0) popup_cale_events_window_t2_ParamLimits

0xacdd,	// (0x000b65b0) popup_cale_events_window_t2

0xad1b,	// (0x000b65ee) popup_cale_events_window_t3_ParamLimits

0xad1b,	// (0x000b65ee) popup_cale_events_window_t3

0xad55,	// (0x000b6628) popup_cale_events_window_t4_ParamLimits

0xad55,	// (0x000b6628) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x000bab6f) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x000bab6f) popup_cale_events_window_t

0x1db0,	// (0x000ad683) call_type_pane

0x1dc0,	// (0x000ad693) popup_call_status_window_g1

0x1dd4,	// (0x000ad6a7) popup_call_status_window_g2

0x1de8,	// (0x000ad6bb) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x000bab78) popup_call_status_window_g

0xad8b,	// (0x000b665e) call_type_pane_g1

0xad94,	// (0x000b6667) call_type_pane_g2

0x0001,

0xf2ac,	// (0x000bab7f) call_type_pane_g

0x98b9,	// (0x000b518c) bg_popup_sub_pane_cp02

0xad9d,	// (0x000b6670) listscroll_popup_wml_pane

0xada5,	// (0x000b6678) list_wml_pane

0xadaf,	// (0x000b6682) scroll_pane_cp013

0xadba,	// (0x000b668d) list_single_graphic_popup_wml_pane_ParamLimits

0xadba,	// (0x000b668d) list_single_graphic_popup_wml_pane

0xa45d,	// (0x000b5d30) list_single_graphic_popup_wml_pane_g1

0xadce,	// (0x000b66a1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x000bab84) list_single_graphic_popup_wml_pane_g

0xadd6,	// (0x000b66a9) list_single_graphic_popup_wml_pane_t1

0xadec,	// (0x000b66bf) aid_call_pane

0xa43d,	// (0x000b5d10) popup_clock_analogue_window_g1

0xa43d,	// (0x000b5d10) popup_clock_analogue_window_g2

0x9bd8,	// (0x000b54ab) popup_clock_analogue_window_g3

0x9bd8,	// (0x000b54ab) popup_clock_analogue_window_g4

0xa45d,	// (0x000b5d30) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x000bab89) popup_clock_analogue_window_g

0x9be0,	// (0x000b54b3) popup_clock_analogue_window_t1

0x9bee,	// (0x000b54c1) clock_digital_number_pane_ParamLimits

0x9bee,	// (0x000b54c1) clock_digital_number_pane

0x9bfa,	// (0x000b54cd) clock_digital_number_pane_cp02_ParamLimits

0x9bfa,	// (0x000b54cd) clock_digital_number_pane_cp02

0x9c06,	// (0x000b54d9) clock_digital_number_pane_cp03_ParamLimits

0x9c06,	// (0x000b54d9) clock_digital_number_pane_cp03

0x9c12,	// (0x000b54e5) clock_digital_number_pane_cp04_ParamLimits

0x9c12,	// (0x000b54e5) clock_digital_number_pane_cp04

0x9c1e,	// (0x000b54f1) clock_digital_separator_pane_ParamLimits

0x9c1e,	// (0x000b54f1) clock_digital_separator_pane

0x9c2a,	// (0x000b54fd) popup_clock_digital_window_t1

0xa45d,	// (0x000b5d30) clock_digital_number_pane_g1

0xa45d,	// (0x000b5d30) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x000bab09) clock_digital_number_pane_g

0xa45d,	// (0x000b5d30) clock_digital_separator_pane_g1

0xa45d,	// (0x000b5d30) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x000bab09) clock_digital_separator_pane_g

0x98b9,	// (0x000b518c) bg_popup_window_pane_cp04

0xadf4,	// (0x000b66c7) heading_pane_cp03

0xa6d9,	// (0x000b5fac) listscroll_popup_gms_pane

0x98b9,	// (0x000b518c) grid_large_graphic_popup_pane

0xadfd,	// (0x000b66d0) listscroll_popup_gms_pane_g1

0xae06,	// (0x000b66d9) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x000bab94) listscroll_popup_gms_pane_g

0xae0f,	// (0x000b66e2) scroll_pane_cp014

0xa4b2,	// (0x000b5d85) cell_large_graphic_popup_pane_ParamLimits

0xa4b2,	// (0x000b5d85) cell_large_graphic_popup_pane

0xa4c0,	// (0x000b5d93) cell_large_graphic_popup_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_large_graphic_popup_pane_g1

0xae18,	// (0x000b66eb) cell_large_graphic_popup_pane_g2_ParamLimits

0xae18,	// (0x000b66eb) cell_large_graphic_popup_pane_g2

0xae26,	// (0x000b66f9) cell_large_graphic_popup_pane_g3_ParamLimits

0xae26,	// (0x000b66f9) cell_large_graphic_popup_pane_g3

0xae34,	// (0x000b6707) cell_large_graphic_popup_pane_g4_ParamLimits

0xae34,	// (0x000b6707) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x000bab99) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x000bab99) cell_large_graphic_popup_pane_g

0x98b9,	// (0x000b518c) grid_highlight_pane_cp010

0xa45d,	// (0x000b5d30) bg_popup_call_pane_g1

0xae45,	// (0x000b6718) list_single_graphic_popup_conf_pane_ParamLimits

0xae45,	// (0x000b6718) list_single_graphic_popup_conf_pane

0xae57,	// (0x000b672a) list_highlight_pane_cp01

0xae60,	// (0x000b6733) list_single_graphic_popup_conf_pane_g1

0xae68,	// (0x000b673b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x000baba2) list_single_graphic_popup_conf_pane_g

0xae70,	// (0x000b6743) list_single_graphic_popup_conf_pane_t1

0xae7e,	// (0x000b6751) linegrid_cams_pane_g1

0x1df8,	// (0x000ad6cb) linegrid_cams_pane_g2

0xa6bf,	// (0x000b5f92) linegrid_cams_pane_g3

0xae87,	// (0x000b675a) linegrid_cams_pane_g4

0x1e01,	// (0x000ad6d4) linegrid_cams_pane_g5

0x1e0a,	// (0x000ad6dd) linegrid_cams_pane_g6

0xa6c8,	// (0x000b5f9b) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x000baba7) linegrid_cams_pane_g

0xae90,	// (0x000b6763) popup_clock_analogue_window

0xae90,	// (0x000b6763) popup_clock_digital_window

0x98b9,	// (0x000b518c) popup_phob_thumbnail_window

0xa45d,	// (0x000b5d30) call_video_uplink_pane_g1

0xae99,	// (0x000b676c) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x000babb6) call_video_uplink_pane_g

0xaea1,	// (0x000b6774) video_uplink_pane

0xaea9,	// (0x000b677c) mce_image_pane_g1

0x1e15,	// (0x000ad6e8) mce_image_pane_g2

0x1e1f,	// (0x000ad6f2) mce_image_pane_g3

0x1e29,	// (0x000ad6fc) mce_image_pane_g4

0x1e31,	// (0x000ad704) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x000babbb) mce_image_pane_g

0xaeb3,	// (0x000b6786) control_top_pane_stacon_cp01_ParamLimits

0xaeb3,	// (0x000b6786) control_top_pane_stacon_cp01

0xaec7,	// (0x000b679a) uni_indicator_pane_stacon_cp01_ParamLimits

0xaec7,	// (0x000b679a) uni_indicator_pane_stacon_cp01

0xaed8,	// (0x000b67ab) bg_popup_sub_pane_cp03

0x1e39,	// (0x000ad70c) chi_dic_find_pane

0x1e41,	// (0x000ad714) listscroll_chi_dic_pane

0x1e4a,	// (0x000ad71d) main_pane_chidic_g1

0x1e5d,	// (0x000ad730) chi_dic_find_pane_t1

0xaee2,	// (0x000b67b5) find_chidic_pane

0xaeeb,	// (0x000b67be) chi_dic_list_pane_ParamLimits

0xaeeb,	// (0x000b67be) chi_dic_list_pane

0xaefc,	// (0x000b67cf) scroll_pane_cp020

0x1e6b,	// (0x000ad73e) find_chidic_pane_t1

0x98b9,	// (0x000b518c) input_focus_pane_cp06

0x1e7a,	// (0x000ad74d) list_chi_dic_pane_ParamLimits

0x1e7a,	// (0x000ad74d) list_chi_dic_pane

0x1e8c,	// (0x000ad75f) list_chi_dic_pane_t1_ParamLimits

0x1e8c,	// (0x000ad75f) list_chi_dic_pane_t1

0x98b9,	// (0x000b518c) list_highlight_pane_cp020

0xaf04,	// (0x000b67d7) bg_cale_heading_pane_g1

0x1e9f,	// (0x000ad772) bg_cale_heading_pane_g2

0x1ea7,	// (0x000ad77a) bg_cale_heading_pane_g3

0x1eaf,	// (0x000ad782) bg_cale_heading_pane_g4

0x1eb9,	// (0x000ad78c) bg_cale_heading_pane_g5

0x1ec3,	// (0x000ad796) bg_cale_heading_pane_g6

0x1ecb,	// (0x000ad79e) bg_cale_heading_pane_g7

0x1ed3,	// (0x000ad7a6) bg_cale_heading_pane_g8

0x1edd,	// (0x000ad7b0) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x000babc6) bg_cale_heading_pane_g

0xaf04,	// (0x000b67d7) bg_cale_side_pane_g1

0x1ee7,	// (0x000ad7ba) bg_cale_side_pane_g2

0x1ef1,	// (0x000ad7c4) bg_cale_side_pane_g3

0x1efb,	// (0x000ad7ce) bg_cale_side_pane_g4

0x1f05,	// (0x000ad7d8) bg_cale_side_pane_g5

0x1f0f,	// (0x000ad7e2) bg_cale_side_pane_g6

0x1f19,	// (0x000ad7ec) bg_cale_side_pane_g7

0x1f23,	// (0x000ad7f6) bg_cale_side_pane_g8

0x1f2b,	// (0x000ad7fe) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x000babd9) bg_cale_side_pane_g

0x1f33,	// (0x000ad806) popup_call_status_window_ParamLimits

0x1f33,	// (0x000ad806) popup_call_status_window

0xaf0c,	// (0x000b67df) stacon_top_pane

0xaf14,	// (0x000b67e7) status_pane_ParamLimits

0xaf14,	// (0x000b67e7) status_pane

0xaf29,	// (0x000b67fc) status_small_pane

0xaf31,	// (0x000b6804) control_pane

0x98b9,	// (0x000b518c) stacon_bottom_pane

0xaf39,	// (0x000b680c) list_single_mce_smart_pane_t1_ParamLimits

0xaf39,	// (0x000b680c) list_single_mce_smart_pane_t1

0xaf4c,	// (0x000b681f) list_single_mce_smart_pane_t2_ParamLimits

0xaf4c,	// (0x000b681f) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x000babec) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x000babec) list_single_mce_smart_pane_t

0x1f80,	// (0x000ad853) compass_pane

0x1f8b,	// (0x000ad85e) main_location2_pane_t1

0x1fa1,	// (0x000ad874) main_location2_pane_t2

0x1fb7,	// (0x000ad88a) main_location2_pane_t3

0x0003,

0xf31e,	// (0x000babf1) main_location2_pane_t

0xaf6b,	// (0x000b683e) compass_pane_g1_ParamLimits

0xaf6b,	// (0x000b683e) compass_pane_g1

0x2001,	// (0x000ad8d4) compass_pane_t1

0x2010,	// (0x000ad8e3) compass_pane_t2

0x0005,

0xf327,	// (0x000babfa) compass_pane_t

0x205b,	// (0x000ad92e) text_secondary_cp61

0xaf7f,	// (0x000b6852) navi_pane_cams_g5

0xafa2,	// (0x000b6875) navi_pane_im_t1

0xafb0,	// (0x000b6883) navi_pane_mp_g1_ParamLimits

0xafb0,	// (0x000b6883) navi_pane_mp_g1

0xafc4,	// (0x000b6897) navi_pane_mp_g2_ParamLimits

0xafc4,	// (0x000b6897) navi_pane_mp_g2

0xafd0,	// (0x000b68a3) navi_pane_mp_g3_ParamLimits

0xafd0,	// (0x000b68a3) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x000bac0e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x000bac0e) navi_pane_mp_g

0xafdc,	// (0x000b68af) navi_pane_mp_t1

0xafea,	// (0x000b68bd) navi_pane_mp_t2

0x0002,

0xf342,	// (0x000bac15) navi_pane_mp_t

0xb026,	// (0x000b68f9) navi_pane_vt_g1

0xafdc,	// (0x000b68af) navi_pane_vt_t1

0xb02e,	// (0x000b6901) navi_slider_pane

0xa6d9,	// (0x000b5fac) zooming_pane

0xb036,	// (0x000b6909) navi_slider_pane_g1

0x9c47,	// (0x000b551a) navi_slider_pane_g2

0x0006,

0xf349,	// (0x000bac1c) navi_slider_pane_g

0xb05a,	// (0x000b692d) aid_levels_zoom

0xb062,	// (0x000b6935) zooming_pane_g1

0xb06a,	// (0x000b693d) zooming_pane_g2

0xb06a,	// (0x000b693d) zooming_pane_g3

0x0002,

0xf358,	// (0x000bac2b) zooming_pane_g

0xb072,	// (0x000b6945) level_10_zoom

0xb07b,	// (0x000b694e) level_11_zoom

0xb084,	// (0x000b6957) level_1_zoom

0xb08d,	// (0x000b6960) level_2_zoom

0xb096,	// (0x000b6969) level_3_zoom

0xb09f,	// (0x000b6972) level_4_zoom

0xb0a8,	// (0x000b697b) level_5_zoom

0xb0b1,	// (0x000b6984) level_6_zoom

0xb0ba,	// (0x000b698d) level_7_zoom

0xb0c3,	// (0x000b6996) level_8_zoom

0xb0cc,	// (0x000b699f) level_9_zoom

0xb0dd,	// (0x000b69b0) popup_phob_thumbnail_window_g1

0xb0e5,	// (0x000b69b8) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x000bac32) popup_phob_thumbnail_window_g

0x2ce9,	// (0x000ae5bc) level_1_location

0x2cf1,	// (0x000ae5c4) level_2_location

0x2cf9,	// (0x000ae5cc) level_3_location

0x2d03,	// (0x000ae5d6) level_4_location

0xa6d9,	// (0x000b5fac) level_5_location

0x21a4,	// (0x000ada77) mce_icon_pane_g1

0x21ae,	// (0x000ada81) mce_icon_pane_g2

0x0001,

0xf364,	// (0x000bac37) mce_icon_pane_g

0xb411,	// (0x000b6ce4) main_mup_pane_g1_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g1

0xb411,	// (0x000b6ce4) main_mup_pane_g2_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g2

0xb411,	// (0x000b6ce4) main_mup_pane_g3_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g3

0xb411,	// (0x000b6ce4) main_mup_pane_g4_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g4

0xb411,	// (0x000b6ce4) main_mup_pane_g5_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g5

0xb411,	// (0x000b6ce4) main_mup_pane_g6_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g6

0xb411,	// (0x000b6ce4) main_mup_pane_g7_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g7

0xb411,	// (0x000b6ce4) main_mup_pane_g8_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g8

0xb411,	// (0x000b6ce4) main_mup_pane_g9_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g9

0xb411,	// (0x000b6ce4) main_mup_pane_g10_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g10

0xb411,	// (0x000b6ce4) main_mup_pane_g11_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g11

0xa4c0,	// (0x000b5d93) main_mup_pane_g12_ParamLimits

0xa4c0,	// (0x000b5d93) main_mup_pane_g12

0xb411,	// (0x000b6ce4) main_mup_pane_g13_ParamLimits

0xb411,	// (0x000b6ce4) main_mup_pane_g13

0x000c,

0xf369,	// (0x000bac3c) main_mup_pane_g_ParamLimits

0xf369,	// (0x000bac3c) main_mup_pane_g

0xb41f,	// (0x000b6cf2) main_mup_pane_t1_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup_pane_t1

0xb41f,	// (0x000b6cf2) main_mup_pane_t2_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup_pane_t2

0xb41f,	// (0x000b6cf2) main_mup_pane_t3_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup_pane_t3

0xa6e1,	// (0x000b5fb4) main_mup_pane_t4_ParamLimits

0xa6e1,	// (0x000b5fb4) main_mup_pane_t4

0xa6e1,	// (0x000b5fb4) main_mup_pane_t5_ParamLimits

0xa6e1,	// (0x000b5fb4) main_mup_pane_t5

0xb0ed,	// (0x000b69c0) main_mup_pane_t6_ParamLimits

0xb0ed,	// (0x000b69c0) main_mup_pane_t6

0x0005,

0xf384,	// (0x000bac57) main_mup_pane_t_ParamLimits

0xf384,	// (0x000bac57) main_mup_pane_t

0xa4b2,	// (0x000b5d85) mup_progress_pane_ParamLimits

0xa4b2,	// (0x000b5d85) mup_progress_pane

0xb433,	// (0x000b6d06) mup_visualizer_pane_ParamLimits

0xb433,	// (0x000b6d06) mup_visualizer_pane

0xb433,	// (0x000b6d06) mup_volume_pane_ParamLimits

0xb433,	// (0x000b6d06) mup_volume_pane

0xa4ce,	// (0x000b5da1) mup_visualizer_pane_g1_ParamLimits

0xa4ce,	// (0x000b5da1) mup_visualizer_pane_g1

0xb101,	// (0x000b69d4) mup_visualizer_pane_g2_ParamLimits

0xb101,	// (0x000b69d4) mup_visualizer_pane_g2

0xa4c0,	// (0x000b5d93) mup_visualizer_pane_g3_ParamLimits

0xa4c0,	// (0x000b5d93) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x000bac64) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x000bac64) mup_visualizer_pane_g

0xa70f,	// (0x000b5fe2) mup_volume_pane_g1

0xa70f,	// (0x000b5fe2) mup_volume_pane_g2

0x0001,

0xf398,	// (0x000bac6b) mup_volume_pane_g

0xa70f,	// (0x000b5fe2) mup_progress_pane_g1

0xa70f,	// (0x000b5fe2) mup_progress_pane_g2

0xa70f,	// (0x000b5fe2) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x000bac70) mup_progress_pane_g

0x98b9,	// (0x000b518c) bg_popup_window_pane_cp05

0xb10f,	// (0x000b69e2) heading_pane_cp02_ParamLimits

0xb10f,	// (0x000b69e2) heading_pane_cp02

0xb12b,	// (0x000b69fe) list_popup_blid_pane

0xb133,	// (0x000b6a06) list_blid_sat_info_pane_ParamLimits

0xb133,	// (0x000b6a06) list_blid_sat_info_pane

0xb146,	// (0x000b6a19) list_blid_sat_info_pane_g1

0xb14e,	// (0x000b6a21) list_blid_sat_info_pane_t1

0x22c2,	// (0x000adb95) mup_equalizer_pane_ParamLimits

0x22c2,	// (0x000adb95) mup_equalizer_pane

0x22e3,	// (0x000adbb6) mup_equalizer_pane_cp1_ParamLimits

0x22e3,	// (0x000adbb6) mup_equalizer_pane_cp1

0x2304,	// (0x000adbd7) mup_equalizer_pane_cp2_ParamLimits

0x2304,	// (0x000adbd7) mup_equalizer_pane_cp2

0x2329,	// (0x000adbfc) mup_equalizer_pane_cp3_ParamLimits

0x2329,	// (0x000adbfc) mup_equalizer_pane_cp3

0x2352,	// (0x000adc25) mup_equalizer_pane_cp4_ParamLimits

0x2352,	// (0x000adc25) mup_equalizer_pane_cp4

0x237b,	// (0x000adc4e) mup_equalizer_pane_cp5

0x2393,	// (0x000adc66) mup_equalizer_pane_cp6

0x23ab,	// (0x000adc7e) mup_equalizer_pane_cp7

0xc56f,	// (0x000b7e42) bg_popup_call_poc_act_pane_g9

0xc577,	// (0x000b7e4a) bg_popup_call_poc_act_pane_g10

0xc57f,	// (0x000b7e52) bg_popup_call_poc_act_pane_g11

0x000a,

0xa445,	// (0x000b5d18) mup_scale_pane

0xa45d,	// (0x000b5d30) mup_scale_pane_g1

0xb15c,	// (0x000b6a2f) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x000bac8c) mup_scale_pane_g

0xb180,	// (0x000b6a53) msg_data_pane

0xb188,	// (0x000b6a5b) scroll_pane_cp017

0x23d5,	// (0x000adca8) bg_list_pane_cp04_ParamLimits

0x23d5,	// (0x000adca8) bg_list_pane_cp04

0xb190,	// (0x000b6a63) msg_data_pane_g1

0x23fd,	// (0x000adcd0) msg_data_pane_g2

0x2407,	// (0x000adcda) msg_data_pane_g3

0x2411,	// (0x000adce4) msg_data_pane_g4

0x2419,	// (0x000adcec) msg_data_pane_g5

0x2421,	// (0x000adcf4) msg_data_pane_g6

0x2429,	// (0x000adcfc) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x000bac9b) msg_data_pane_g

0x2431,	// (0x000add04) msg_text_pane_ParamLimits

0x2431,	// (0x000add04) msg_text_pane

0x2462,	// (0x000add35) qrid_highlight_pane_cp011_ParamLimits

0x2462,	// (0x000add35) qrid_highlight_pane_cp011

0x98b9,	// (0x000b518c) msg_body_pane

0x98b9,	// (0x000b518c) msg_header_pane

0xb44a,	// (0x000b6d1d) input_focus_pane_cp07

0x2486,	// (0x000add59) msg_header_pane_t1_ParamLimits

0x2486,	// (0x000add59) msg_header_pane_t1

0x249c,	// (0x000add6f) msg_header_pane_t2_ParamLimits

0x249c,	// (0x000add6f) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x000bacaf) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x000bacaf) msg_header_pane_t

0xb45f,	// (0x000b6d32) msg_body_pane_g1

0x24b3,	// (0x000add86) msg_body_pane_t1_ParamLimits

0x24b3,	// (0x000add86) msg_body_pane_t1

0x24e4,	// (0x000addb7) msg_body_pane_t2_ParamLimits

0x24e4,	// (0x000addb7) msg_body_pane_t2

0x24f6,	// (0x000addc9) msg_body_pane_t3_ParamLimits

0x24f6,	// (0x000addc9) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x000bacb4) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x000bacb4) msg_body_pane_t

0x2542,	// (0x000ade15) main_viewer_pane_g1_ParamLimits

0x2542,	// (0x000ade15) main_viewer_pane_g1

0x2550,	// (0x000ade23) main_viewer_pane_g2_ParamLimits

0x2550,	// (0x000ade23) main_viewer_pane_g2

0x255e,	// (0x000ade31) main_viewer_pane_g3_ParamLimits

0x255e,	// (0x000ade31) main_viewer_pane_g3

0x256d,	// (0x000ade40) main_viewer_pane_g4_ParamLimits

0x256d,	// (0x000ade40) main_viewer_pane_g4

0x9c71,	// (0x000b5544) main_viewer_pane_g5_ParamLimits

0x9c71,	// (0x000b5544) main_viewer_pane_g5

0x9c71,	// (0x000b5544) main_viewer_pane_g7_ParamLimits

0x9c71,	// (0x000b5544) main_viewer_pane_g7

0x9c83,	// (0x000b5556) main_viewer_pane_g8_ParamLimits

0x9c83,	// (0x000b5556) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x000bacc4) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x000bacc4) main_viewer_pane_g

0xb467,	// (0x000b6d3a) viewer_content_pane_ParamLimits

0xb467,	// (0x000b6d3a) viewer_content_pane

0x25ab,	// (0x000ade7e) main_postcard_pane_g1_ParamLimits

0x25ab,	// (0x000ade7e) main_postcard_pane_g1

0x25c1,	// (0x000ade94) main_postcard_pane_g2_ParamLimits

0x25c1,	// (0x000ade94) main_postcard_pane_g2

0x25d7,	// (0x000adeaa) main_postcard_pane_g3_ParamLimits

0x25d7,	// (0x000adeaa) main_postcard_pane_g3

0x0005,

0xf402,	// (0x000bacd5) main_postcard_pane_g_ParamLimits

0xf402,	// (0x000bacd5) main_postcard_pane_g

0x25ee,	// (0x000adec1) main_postcard_pane_g4

0xc6b5,	// (0x000b7f88) smil_status_volume_pane_g2

0x2631,	// (0x000adf04) postcard_pane_ParamLimits

0x2631,	// (0x000adf04) postcard_pane

0xb475,	// (0x000b6d48) postcard_pane_g1_ParamLimits

0xb475,	// (0x000b6d48) postcard_pane_g1

0x2681,	// (0x000adf54) postcard_pane_g2_ParamLimits

0x2681,	// (0x000adf54) postcard_pane_g2

0x268d,	// (0x000adf60) postcard_pane_g3_ParamLimits

0x268d,	// (0x000adf60) postcard_pane_g3

0xb483,	// (0x000b6d56) postcard_pane_g4_ParamLimits

0xb483,	// (0x000b6d56) postcard_pane_g4

0x2699,	// (0x000adf6c) postcard_pane_g5_ParamLimits

0x2699,	// (0x000adf6c) postcard_pane_g5

0x26ae,	// (0x000adf81) postcard_pane_g6_ParamLimits

0x26ae,	// (0x000adf81) postcard_pane_g6

0xb475,	// (0x000b6d48) postcard_pane_g7_ParamLimits

0xb475,	// (0x000b6d48) postcard_pane_g7

0x0006,

0xf40f,	// (0x000bace2) postcard_pane_g_ParamLimits

0xf40f,	// (0x000bace2) postcard_pane_g

0x26c6,	// (0x000adf99) main_mp2_pane_g1_ParamLimits

0x26c6,	// (0x000adf99) main_mp2_pane_g1

0x26d4,	// (0x000adfa7) main_mp2_pane_g2_ParamLimits

0x26d4,	// (0x000adfa7) main_mp2_pane_g2

0x26e0,	// (0x000adfb3) main_mp2_pane_g3_ParamLimits

0x26e0,	// (0x000adfb3) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x000bacf1) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x000bacf1) main_mp2_pane_g

0x26ec,	// (0x000adfbf) main_mp2_pane_t1_ParamLimits

0x26ec,	// (0x000adfbf) main_mp2_pane_t1

0x2703,	// (0x000adfd6) main_mp2_pane_t2_ParamLimits

0x2703,	// (0x000adfd6) main_mp2_pane_t2

0x2715,	// (0x000adfe8) main_mp2_pane_t3_ParamLimits

0x2715,	// (0x000adfe8) main_mp2_pane_t3

0x0002,

0xf425,	// (0x000bacf8) main_mp2_pane_t_ParamLimits

0xf425,	// (0x000bacf8) main_mp2_pane_t

0xb491,	// (0x000b6d64) pec_content_pane_ParamLimits

0xb491,	// (0x000b6d64) pec_content_pane

0xa883,	// (0x000b6156) scroll_pane_cp015

0xb4a3,	// (0x000b6d76) pec_attribute_pane_ParamLimits

0xb4a3,	// (0x000b6d76) pec_attribute_pane

0x2727,	// (0x000adffa) pec_content_pane_g1_ParamLimits

0x2727,	// (0x000adffa) pec_content_pane_g1

0xb4b3,	// (0x000b6d86) pec_content_pane_t1_ParamLimits

0xb4b3,	// (0x000b6d86) pec_content_pane_t1

0xb4c5,	// (0x000b6d98) pec_content_pane_t2_ParamLimits

0xb4c5,	// (0x000b6d98) pec_content_pane_t2

0x0001,

0xf42c,	// (0x000bacff) pec_content_pane_t_ParamLimits

0xf42c,	// (0x000bacff) pec_content_pane_t

0x2733,	// (0x000ae006) list_single_graphic_pane_cp01_ParamLimits

0x2733,	// (0x000ae006) list_single_graphic_pane_cp01

0xa445,	// (0x000b5d18) bg_popup_sub_pane_cp04

0xb4d7,	// (0x000b6daa) popup_mup_playback_window_g1

0xb4e3,	// (0x000b6db6) popup_mup_playback_window_t1

0xb4f8,	// (0x000b6dcb) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x000bad04) popup_mup_playback_window_t

0xb52f,	// (0x000b6e02) main_image_pane_g1_ParamLimits

0xb52f,	// (0x000b6e02) main_image_pane_g1

0xb572,	// (0x000b6e45) scroll_pane_cp018_ParamLimits

0xb572,	// (0x000b6e45) scroll_pane_cp018

0xb58a,	// (0x000b6e5d) scroll_pane_cp016_ParamLimits

0xb58a,	// (0x000b6e5d) scroll_pane_cp016

0x2805,	// (0x000ae0d8) smil2_image_pane_ParamLimits

0x2805,	// (0x000ae0d8) smil2_image_pane

0x283b,	// (0x000ae10e) smil2_root_pane_ParamLimits

0x283b,	// (0x000ae10e) smil2_root_pane

0x2873,	// (0x000ae146) smil2_text_pane_ParamLimits

0x2873,	// (0x000ae146) smil2_text_pane

0x98b9,	// (0x000b518c) bg_list_pane_cp06

0xb5c6,	// (0x000b6e99) grid_radio_pane

0x98b9,	// (0x000b518c) bg_popup_window_pane_cp06

0xb5d0,	// (0x000b6ea3) main_fmradio_pane_t1

0xc587,	// (0x000b7e5a) heading_pane_cp04

0xb5de,	// (0x000b6eb1) main_fmradio_pane_t2

0xc58f,	// (0x000b7e62) popup_cale_lunar_info_window_g1

0xb5ec,	// (0x000b6ebf) main_fmradio_pane_t3

0xc597,	// (0x000b7e6a) popup_cale_lunar_info_window_g2

0xb5fc,	// (0x000b6ecf) main_fmradio_pane_t4

0x0001,

0xb60a,	// (0x000b6edd) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x000bade4) popup_cale_lunar_info_window_g

0xf446,	// (0x000bad19) main_fmradio_pane_t

0xb618,	// (0x000b6eeb) wait_bar_pane_cp03

0xb620,	// (0x000b6ef3) cell_fmradio_pane_ParamLimits

0xb620,	// (0x000b6ef3) cell_fmradio_pane

0xb475,	// (0x000b6d48) cell_fmradio_pane_g1_ParamLimits

0xb475,	// (0x000b6d48) cell_fmradio_pane_g1

0x98b9,	// (0x000b518c) grid_highlight_pane_cp011

0xb635,	// (0x000b6f08) poc_content_pane_ParamLimits

0xb635,	// (0x000b6f08) poc_content_pane

0xb647,	// (0x000b6f1a) scroll_pane_cp019

0x2903,	// (0x000ae1d6) popup_call_poc_act_window_ParamLimits

0x2903,	// (0x000ae1d6) popup_call_poc_act_window

0x2927,	// (0x000ae1fa) popup_call_poc_inact_window_ParamLimits

0x2927,	// (0x000ae1fa) popup_call_poc_inact_window

0xf4e8,	// (0x000badbb) bg_popup_call_poc_act_pane_g

0xc4ff,	// (0x000b7dd2) bg_popup_call_poc_inact_pane_g1

0xc507,	// (0x000b7dda) bg_popup_call_poc_inact_pane_g2

0xb64f,	// (0x000b6f22) popup_call_poc_act_window_g2

0xc50f,	// (0x000b7de2) bg_popup_call_poc_inact_pane_g3

0xc517,	// (0x000b7dea) bg_popup_call_poc_inact_pane_g4

0xc51f,	// (0x000b7df2) bg_popup_call_poc_inact_pane_g5

0xb657,	// (0x000b6f2a) popup_call_poc_act_window_t1_ParamLimits

0xb657,	// (0x000b6f2a) popup_call_poc_act_window_t1

0xb67f,	// (0x000b6f52) popup_call_poc_act_window_t2_ParamLimits

0xb67f,	// (0x000b6f52) popup_call_poc_act_window_t2

0xb6a7,	// (0x000b6f7a) popup_call_poc_act_window_t3_ParamLimits

0xb6a7,	// (0x000b6f7a) popup_call_poc_act_window_t3

0xb6cf,	// (0x000b6fa2) popup_call_poc_act_window_t4_ParamLimits

0xb6cf,	// (0x000b6fa2) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x000bad24) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x000bad24) popup_call_poc_act_window_t

0xc527,	// (0x000b7dfa) bg_popup_call_poc_inact_pane_g6

0xc52f,	// (0x000b7e02) bg_popup_call_poc_inact_pane_g7

0xc537,	// (0x000b7e0a) bg_popup_call_poc_inact_pane_g8

0xb6e1,	// (0x000b6fb4) popup_call_poc_inact_window_g2

0xc53f,	// (0x000b7e12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x000bada8) bg_popup_call_poc_inact_pane_g

0xb6e9,	// (0x000b6fbc) popup_call_poc_inact_window_t1_ParamLimits

0xb6e9,	// (0x000b6fbc) popup_call_poc_inact_window_t1

0xb6fe,	// (0x000b6fd1) popup_call_poc_inact_window_t2_ParamLimits

0xb6fe,	// (0x000b6fd1) popup_call_poc_inact_window_t2

0xb713,	// (0x000b6fe6) popup_call_poc_inact_window_t3_ParamLimits

0xb713,	// (0x000b6fe6) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x000bad2d) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x000bad2d) popup_call_poc_inact_window_t

0xc62d,	// (0x000b7f00) context_pane_ParamLimits

0x3216,	// (0x000aeae9) signal_pane_ParamLimits

0xa6d9,	// (0x000b5fac) main_call2_pane

0x9ccc,	// (0x000b559f) popup_phob_thumbnail2_window_ParamLimits

0x9ccc,	// (0x000b559f) popup_phob_thumbnail2_window

0x9c59,	// (0x000b552c) aid_hotspot_pointer_arrow_pane

0x9c61,	// (0x000b5534) aid_hotspot_pointer_hand_pane

0x2cb1,	// (0x000ae584) phob_pre_status_pane_g5

0x9af6,	// (0x000b53c9) cams_zoom_pane_ParamLimits

0x9af6,	// (0x000b53c9) image_vga_pane_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g2_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g3_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g4_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g5_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g6_ParamLimits

0xa4c0,	// (0x000b5d93) main_camera_pane_g7_ParamLimits

0xf185,	// (0x000baa58) main_camera_pane_g_ParamLimits

0xa6e1,	// (0x000b5fb4) main_camera_pane_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) main_camera_pane_t2_ParamLimits

0xf196,	// (0x000baa69) main_camera_pane_t_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_preview_window_pane_cp01_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_preview_window_pane_cp01

0xb728,	// (0x000b6ffb) popup_phob_thumbnail2_window_g1_ParamLimits

0xb728,	// (0x000b6ffb) popup_phob_thumbnail2_window_g1

0x98b9,	// (0x000b518c) call2_cli_visual_pane

0x295b,	// (0x000ae22e) popup_call2_audio_conf_window_ParamLimits

0x295b,	// (0x000ae22e) popup_call2_audio_conf_window

0x2983,	// (0x000ae256) popup_call2_audio_first_window_ParamLimits

0x2983,	// (0x000ae256) popup_call2_audio_first_window

0x2a19,	// (0x000ae2ec) popup_call2_audio_in_window_ParamLimits

0x2a19,	// (0x000ae2ec) popup_call2_audio_in_window

0x2a65,	// (0x000ae338) popup_call2_audio_out_window_ParamLimits

0x2a65,	// (0x000ae338) popup_call2_audio_out_window

0x2ad7,	// (0x000ae3aa) popup_call2_audio_second_window_ParamLimits

0x2ad7,	// (0x000ae3aa) popup_call2_audio_second_window

0x2b3d,	// (0x000ae410) popup_call2_audio_wait_window_ParamLimits

0x2b3d,	// (0x000ae410) popup_call2_audio_wait_window

0x98b9,	// (0x000b518c) bg_popup_call2_act_pane_cp03

0xa427,	// (0x000b5cfa) list_conf_pane_cp

0xb734,	// (0x000b7007) popup_call2_audio_conf_window_t1

0xb742,	// (0x000b7015) list_single_graphic_popup_conf2_pane_ParamLimits

0xb742,	// (0x000b7015) list_single_graphic_popup_conf2_pane

0xae57,	// (0x000b672a) list_highlight_pane_cp04

0xb755,	// (0x000b7028) list_single_graphic_popup_conf2_pane_g1

0xae68,	// (0x000b673b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x000bad34) list_single_graphic_popup_conf2_pane_g

0xb75f,	// (0x000b7032) list_single_graphic_popup_conf2_pane_t1

0xb76d,	// (0x000b7040) bg_popup_call2_act_pane_cp01_ParamLimits

0xb76d,	// (0x000b7040) bg_popup_call2_act_pane_cp01

0xb7f7,	// (0x000b70ca) call_type_pane_cp05_ParamLimits

0xb7f7,	// (0x000b70ca) call_type_pane_cp05

0xb84b,	// (0x000b711e) popup_call2_audio_second_window_g1_ParamLimits

0xb84b,	// (0x000b711e) popup_call2_audio_second_window_g1

0xb89f,	// (0x000b7172) popup_call2_audio_second_window_g2_ParamLimits

0xb89f,	// (0x000b7172) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x000bad39) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x000bad39) popup_call2_audio_second_window_g

0xb904,	// (0x000b71d7) popup_call2_audio_second_window_t1_ParamLimits

0xb904,	// (0x000b71d7) popup_call2_audio_second_window_t1

0xb9bf,	// (0x000b7292) popup_call2_audio_second_window_t2_ParamLimits

0xb9bf,	// (0x000b7292) popup_call2_audio_second_window_t2

0xba12,	// (0x000b72e5) popup_call2_audio_second_window_t3_ParamLimits

0xba12,	// (0x000b72e5) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x000bad40) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x000bad40) popup_call2_audio_second_window_t

0x98b9,	// (0x000b518c) bg_popup_call2_in_pane_cp02

0x98c3,	// (0x000b5196) call_type_pane_cp04

0x2b77,	// (0x000ae44a) popup_call2_audio_wait_window_g1

0x2b7f,	// (0x000ae452) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x000bad49) popup_call2_audio_wait_window_g

0x98db,	// (0x000b51ae) popup_call2_audio_wait_window_t3

0xbb05,	// (0x000b73d8) bg_popup_call2_act_pane_ParamLimits

0xbb05,	// (0x000b73d8) bg_popup_call2_act_pane

0xbbc5,	// (0x000b7498) call_type_pane_cp03_ParamLimits

0xbbc5,	// (0x000b7498) call_type_pane_cp03

0xbc29,	// (0x000b74fc) popup_call2_audio_first_window_g1_ParamLimits

0xbc29,	// (0x000b74fc) popup_call2_audio_first_window_g1

0xbc99,	// (0x000b756c) popup_call2_audio_first_window_g2_ParamLimits

0xbc99,	// (0x000b756c) popup_call2_audio_first_window_g2

0xbcfd,	// (0x000b75d0) popup_call2_audio_first_window_g3_ParamLimits

0xbcfd,	// (0x000b75d0) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x000bad4e) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x000bad4e) popup_call2_audio_first_window_g

0xbd85,	// (0x000b7658) popup_call2_audio_first_window_t1_ParamLimits

0xbd85,	// (0x000b7658) popup_call2_audio_first_window_t1

0xbe88,	// (0x000b775b) popup_call2_audio_first_window_t4_ParamLimits

0xbe88,	// (0x000b775b) popup_call2_audio_first_window_t4

0xbf6b,	// (0x000b783e) popup_call2_audio_first_window_t5_ParamLimits

0xbf6b,	// (0x000b783e) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x000bad59) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x000bad59) popup_call2_audio_first_window_t

0xa43d,	// (0x000b5d10) bg_popup_call2_act_pane_g1

0xc5a1,	// (0x000b7e74) popup_cale_lunar_info_window_t1

0xc5af,	// (0x000b7e82) popup_cale_lunar_info_window_t2

0xc5bd,	// (0x000b7e90) popup_cale_lunar_info_window_t3

0x98b9,	// (0x000b518c) bg_popup_call2_bubble_pane

0xc06c,	// (0x000b793f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc06c,	// (0x000b793f) bg_popup_call2_in_pane_cp01

0x9595,	// (0x000b4e68) call_type_pane_cp02

0x2b87,	// (0x000ae45a) popup_call2_audio_out_window_g1_ParamLimits

0x2b87,	// (0x000ae45a) popup_call2_audio_out_window_g1

0xc0b4,	// (0x000b7987) popup_call2_audio_out_window_g2_ParamLimits

0xc0b4,	// (0x000b7987) popup_call2_audio_out_window_g2

0x2bb3,	// (0x000ae486) popup_call2_audio_out_window_g3_ParamLimits

0x2bb3,	// (0x000ae486) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x000bad62) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x000bad62) popup_call2_audio_out_window_g

0xc0eb,	// (0x000b79be) popup_call2_audio_out_window_t1_ParamLimits

0xc0eb,	// (0x000b79be) popup_call2_audio_out_window_t1

0xc14a,	// (0x000b7a1d) popup_call2_audio_out_window_t2_ParamLimits

0xc14a,	// (0x000b7a1d) popup_call2_audio_out_window_t2

0xc19e,	// (0x000b7a71) popup_call2_audio_out_window_t3_ParamLimits

0xc19e,	// (0x000b7a71) popup_call2_audio_out_window_t3

0xc1b4,	// (0x000b7a87) popup_call2_audio_out_window_t4_ParamLimits

0xc1b4,	// (0x000b7a87) popup_call2_audio_out_window_t4

0xc1ca,	// (0x000b7a9d) popup_call2_audio_out_window_t5_ParamLimits

0xc1ca,	// (0x000b7a9d) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x000bad6b) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x000bad6b) popup_call2_audio_out_window_t

0xc22e,	// (0x000b7b01) bg_popup_call2_in_pane_ParamLimits

0xc22e,	// (0x000b7b01) bg_popup_call2_in_pane

0xc28a,	// (0x000b7b5d) popup_call2_audio_in_window_g1_ParamLimits

0xc28a,	// (0x000b7b5d) popup_call2_audio_in_window_g1

0xc2c2,	// (0x000b7b95) popup_call2_audio_in_window_g2_ParamLimits

0xc2c2,	// (0x000b7b95) popup_call2_audio_in_window_g2

0xc2fa,	// (0x000b7bcd) popup_call2_audio_in_window_g3_ParamLimits

0xc2fa,	// (0x000b7bcd) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x000bad78) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x000bad78) popup_call2_audio_in_window_g

0xc352,	// (0x000b7c25) popup_call2_audio_in_window_t1_ParamLimits

0xc352,	// (0x000b7c25) popup_call2_audio_in_window_t1

0xc3e9,	// (0x000b7cbc) popup_call2_audio_in_window_t2_ParamLimits

0xc3e9,	// (0x000b7cbc) popup_call2_audio_in_window_t2

0xc469,	// (0x000b7d3c) popup_call2_audio_in_window_t3_ParamLimits

0xc469,	// (0x000b7d3c) popup_call2_audio_in_window_t3

0xc483,	// (0x000b7d56) popup_call2_audio_in_window_t4_ParamLimits

0xc483,	// (0x000b7d56) popup_call2_audio_in_window_t4

0xc495,	// (0x000b7d68) popup_call2_audio_in_window_t5_ParamLimits

0xc495,	// (0x000b7d68) popup_call2_audio_in_window_t5

0xc4aa,	// (0x000b7d7d) popup_call2_audio_in_window_t6_ParamLimits

0xc4aa,	// (0x000b7d7d) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x000bad81) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x000bad81) popup_call2_audio_in_window_t

0xa43d,	// (0x000b5d10) bg_popup_call2_in_pane_g1

0xc5cb,	// (0x000b7e9e) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x000bade9) popup_cale_lunar_info_window_t

0xa445,	// (0x000b5d18) bg_popup_call2_rect_pane_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_call2_rect_pane

0x98b9,	// (0x000b518c) call2_cli_visual_graphic_pane

0x98b9,	// (0x000b518c) call2_cli_visual_text_pane

0x9cf3,	// (0x000b55c6) smil_status_volume_pane_g3

0x0002,

0xa45d,	// (0x000b5d30) call2_cli_visual_graphic_pane_g1

0xa45d,	// (0x000b5d30) call2_cli_visual_graphic_pane_g2

0xa45d,	// (0x000b5d30) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x000bad8e) call2_cli_visual_graphic_pane_g

0xc4bf,	// (0x000b7d92) bg_popup_call2_rect_pane_g1

0xa612,	// (0x000b5ee5) bg_popup_call2_rect_pane_g2

0xc4c7,	// (0x000b7d9a) bg_popup_call2_rect_pane_g3

0xc4cf,	// (0x000b7da2) bg_popup_call2_rect_pane_g4

0xc4d7,	// (0x000b7daa) bg_popup_call2_rect_pane_g5

0xc4df,	// (0x000b7db2) bg_popup_call2_rect_pane_g6

0xc4e7,	// (0x000b7dba) bg_popup_call2_rect_pane_g7

0xc4ef,	// (0x000b7dc2) bg_popup_call2_rect_pane_g8

0xc4f7,	// (0x000b7dca) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x000bad95) bg_popup_call2_rect_pane_g

0xc4ff,	// (0x000b7dd2) bg_popup_call2_bubble_pane_g1

0xc507,	// (0x000b7dda) bg_popup_call2_bubble_pane_g2

0xc50f,	// (0x000b7de2) bg_popup_call2_bubble_pane_g3

0xc517,	// (0x000b7dea) bg_popup_call2_bubble_pane_g4

0xc51f,	// (0x000b7df2) bg_popup_call2_bubble_pane_g5

0xc527,	// (0x000b7dfa) bg_popup_call2_bubble_pane_g6

0xc52f,	// (0x000b7e02) bg_popup_call2_bubble_pane_g7

0xc537,	// (0x000b7e0a) bg_popup_call2_bubble_pane_g8

0xc53f,	// (0x000b7e12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x000bada8) bg_popup_call2_bubble_pane_g

0x03f4,	// (0x000abcc7) aid_cale_week_size_cell_pane

0x0a38,	// (0x000ac30b) aid_cams_cif_uncrop_pane_ParamLimits

0x0a38,	// (0x000ac30b) aid_cams_cif_uncrop_pane

0x0b8e,	// (0x000ac461) aid_cams_size_cell_ParamLimits

0x0b8e,	// (0x000ac461) aid_cams_size_cell

0x0ba2,	// (0x000ac475) grid_cams_pane_ParamLimits

0x0bbc,	// (0x000ac48f) linegrid_cams_pane_ParamLimits

0x0c98,	// (0x000ac56b) call_video_pane_t1

0x0cb2,	// (0x000ac585) call_video_pane_t2

0x0001,

0xf1e2,	// (0x000baab5) call_video_pane_t

0x10ea,	// (0x000ac9bd) aid_cale_month_size_cell_pane_ParamLimits

0x10ea,	// (0x000ac9bd) aid_cale_month_size_cell_pane

0xf55a,	// (0x000bae2d) smil_status_volume_pane_g

0x9d00,	// (0x000b55d3) volume_smil_pane_ParamLimits

0xfda3,	// (0x000ab676) aid_popup2_width_pane

0x0355,	// (0x000abc28) cell_qdial_pane_g4_ParamLimits

0x0355,	// (0x000abc28) cell_qdial_pane_g4

0x1fe1,	// (0x000ad8b4) aid_blid_cardinal_pane_ParamLimits

0x1fed,	// (0x000ad8c0) aid_blid_destination_pane_ParamLimits

0x1fed,	// (0x000ad8c0) aid_blid_destination_pane

0xa445,	// (0x000b5d18) bg_popup_call_poc_act_pane_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_call_poc_act_pane

0xa445,	// (0x000b5d18) bg_popup_call_poc_inact_pane_ParamLimits

0xa445,	// (0x000b5d18) bg_popup_call_poc_inact_pane

0xc547,	// (0x000b7e1a) bg_popup_call_poc_act_pane_g1

0xc54f,	// (0x000b7e22) bg_popup_call_poc_act_pane_g2

0xc557,	// (0x000b7e2a) bg_popup_call_poc_act_pane_g3

0xc517,	// (0x000b7dea) bg_popup_call_poc_act_pane_g4

0xc51f,	// (0x000b7df2) bg_popup_call_poc_act_pane_g5

0xc55f,	// (0x000b7e32) bg_popup_call_poc_act_pane_g6

0xc52f,	// (0x000b7e02) bg_popup_call_poc_act_pane_g7

0xc567,	// (0x000b7e3a) bg_popup_call_poc_act_pane_g8

0x98b9,	// (0x000b518c) main_usb_pane

0x9ca3,	// (0x000b5576) popup_cale_lunar_info_window

0x0f7f,	// (0x000ac852) im_reading_pane_t1_ParamLimits

0xa7cc,	// (0x000b609f) list_im_pane_ParamLimits

0xa7dd,	// (0x000b60b0) scroll_pane_cp07_ParamLimits

0x98b9,	// (0x000b518c) grid_highlight_pane_cp012

0xa445,	// (0x000b5d18) mup_scale_pane_ParamLimits

0xb475,	// (0x000b6d48) main_usb_pane_g1_ParamLimits

0xb475,	// (0x000b6d48) main_usb_pane_g1

0x2c06,	// (0x000ae4d9) main_usb_pane_g2_ParamLimits

0x2c06,	// (0x000ae4d9) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x000badd2) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x000badd2) main_usb_pane_g

0x2c1c,	// (0x000ae4ef) main_usb_pane_t1_ParamLimits

0x2c1c,	// (0x000ae4ef) main_usb_pane_t1

0x2c2e,	// (0x000ae501) main_usb_pane_t2_ParamLimits

0x2c2e,	// (0x000ae501) main_usb_pane_t2

0x2c40,	// (0x000ae513) main_usb_pane_t3_ParamLimits

0x2c40,	// (0x000ae513) main_usb_pane_t3

0x2c52,	// (0x000ae525) main_usb_pane_t4_ParamLimits

0x2c52,	// (0x000ae525) main_usb_pane_t4

0x2c67,	// (0x000ae53a) main_usb_pane_t5_ParamLimits

0x2c67,	// (0x000ae53a) main_usb_pane_t5

0x2c7c,	// (0x000ae54f) main_usb_pane_t6_ParamLimits

0x2c7c,	// (0x000ae54f) main_usb_pane_t6

0x0005,

0xf504,	// (0x000badd7) main_usb_pane_t_ParamLimits

0x1f80,	// (0x000ad853) aid_text_placing

0x1f8b,	// (0x000ad85e) main_location2_pane_t1_ParamLimits

0x1fa1,	// (0x000ad874) main_location2_pane_t2_ParamLimits

0x1fb7,	// (0x000ad88a) main_location2_pane_t3_ParamLimits

0x1fcd,	// (0x000ad8a0) main_location2_pane_t4_ParamLimits

0x1fcd,	// (0x000ad8a0) main_location2_pane_t4

0xf31e,	// (0x000babf1) main_location2_pane_t_ParamLimits

0xa473,	// (0x000b5d46) find_pinb_pane_g2_ParamLimits

0xa473,	// (0x000b5d46) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000ba96d) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000ba96d) find_pinb_pane_g

0xa47f,	// (0x000b5d52) find_pinb_pane_t1_ParamLimits

0xa491,	// (0x000b5d64) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x000ba972) find_pinb_pane_t_ParamLimits

0x98b9,	// (0x000b518c) main_call3_pane

0x16ef,	// (0x000acfc2) cale_month_day_heading_pane_t1_ParamLimits

0x1775,	// (0x000ad048) cale_month_day_heading_pane_t2_ParamLimits

0x17ee,	// (0x000ad0c1) cale_month_day_heading_pane_t3_ParamLimits

0x1867,	// (0x000ad13a) cale_month_day_heading_pane_t4_ParamLimits

0x18e8,	// (0x000ad1bb) cale_month_day_heading_pane_t5_ParamLimits

0x1971,	// (0x000ad244) cale_month_day_heading_pane_t6_ParamLimits

0x1a02,	// (0x000ad2d5) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x000baaed) cale_month_day_heading_pane_t_ParamLimits

0xaa36,	// (0x000b6309) smil_status_volume_pane

0x2655,	// (0x000adf28) postcard_address_pane_ParamLimits

0x2655,	// (0x000adf28) postcard_address_pane

0x266b,	// (0x000adf3e) postcard_message_pane_ParamLimits

0x266b,	// (0x000adf3e) postcard_message_pane

0x2bdf,	// (0x000ae4b2) call2_cli_visual_pane_t1_ParamLimits

0x2bdf,	// (0x000ae4b2) call2_cli_visual_pane_t1

0xc6e0,	// (0x000b7fb3) postcard_message_pane_t1_ParamLimits

0xc6e0,	// (0x000b7fb3) postcard_message_pane_t1

0xc6c8,	// (0x000b7f9b) postcard_address_pane_t1_ParamLimits

0xc6c8,	// (0x000b7f9b) postcard_address_pane_t1

0x33d2,	// (0x000aeca5) popup_call3_audio_in_window_ParamLimits

0x33d2,	// (0x000aeca5) popup_call3_audio_in_window

0x3257,	// (0x000aeb2a) bg_popup_call3_in_pane_ParamLimits

0x3257,	// (0x000aeb2a) bg_popup_call3_in_pane

0x32d3,	// (0x000aeba6) popup_call3_audio_in_window_g1_ParamLimits

0x32d3,	// (0x000aeba6) popup_call3_audio_in_window_g1

0x32f3,	// (0x000aebc6) popup_call3_audio_in_window_g2_ParamLimits

0x32f3,	// (0x000aebc6) popup_call3_audio_in_window_g2

0x3313,	// (0x000aebe6) popup_call3_audio_in_window_g3_ParamLimits

0x3313,	// (0x000aebe6) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x000bae34) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x000bae34) popup_call3_audio_in_window_g

0x3344,	// (0x000aec17) popup_call3_audio_in_window_t1_ParamLimits

0x3344,	// (0x000aec17) popup_call3_audio_in_window_t1

0x3382,	// (0x000aec55) popup_call3_audio_in_window_t2_ParamLimits

0x3382,	// (0x000aec55) popup_call3_audio_in_window_t2

0x33c0,	// (0x000aec93) popup_call3_audio_in_window_t3_ParamLimits

0x33c0,	// (0x000aec93) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x000bae3d) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x000bae3d) popup_call3_audio_in_window_t

0xa6d9,	// (0x000b5fac) bg_popup_call3_rect_pane

0xc4bf,	// (0x000b7d92) bg_popup_call3_rect_pane_g1

0xa612,	// (0x000b5ee5) bg_popup_call3_rect_pane_g2

0xc4c7,	// (0x000b7d9a) bg_popup_call3_rect_pane_g3

0xc4cf,	// (0x000b7da2) bg_popup_call3_rect_pane_g4

0xc4d7,	// (0x000b7daa) bg_popup_call3_rect_pane_g5

0xc4df,	// (0x000b7db2) bg_popup_call3_rect_pane_g6

0xc4e7,	// (0x000b7dba) bg_popup_call3_rect_pane_g7

0x9445,	// (0x000b4d18) mup_visualizer_osc_pane

0x9445,	// (0x000b4d18) mup_visualizer_spec_pane

0x3287,	// (0x000aeb5a) call3_video_qcif_pane_ParamLimits

0x3287,	// (0x000aeb5a) call3_video_qcif_pane

0x329a,	// (0x000aeb6d) call3_video_qcif_uncrop_pane_ParamLimits

0x329a,	// (0x000aeb6d) call3_video_qcif_uncrop_pane

0x32aa,	// (0x000aeb7d) call3_video_subqcif_pane_ParamLimits

0x32aa,	// (0x000aeb7d) call3_video_subqcif_pane

0x32c0,	// (0x000aeb93) call3_video_subqcif_uncrop_pane_ParamLimits

0x32c0,	// (0x000aeb93) call3_video_subqcif_uncrop_pane

0x3333,	// (0x000aec06) popup_call3_audio_in_window_g4_ParamLimits

0x3333,	// (0x000aec06) popup_call3_audio_in_window_g4

0x9445,	// (0x000b4d18) mup_spec_half_pane

0x9445,	// (0x000b4d18) mup_spec_half_pane_cp

0x9445,	// (0x000b4d18) mup_osc_middle_pane

0xa70f,	// (0x000b5fe2) mup_visualizer_osc_pane_g1

0xc67b,	// (0x000b7f4e) mup_spec_bar_pane_ParamLimits

0xc67b,	// (0x000b7f4e) mup_spec_bar_pane

0xa70f,	// (0x000b5fe2) mup_spec_bar_pane_g1

0xa70f,	// (0x000b5fe2) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x000bac6b) mup_spec_bar_pane_g

0x03f4,	// (0x000abcc7) aid_cale_week_size_cell_pane_ParamLimits

0x040e,	// (0x000abce1) bg_cale_heading_pane_ParamLimits

0x0432,	// (0x000abd05) bg_cale_pane_cp01_ParamLimits

0x044f,	// (0x000abd22) cale_week_corner_pane_ParamLimits

0x046e,	// (0x000abd41) cale_week_day_heading_pane_ParamLimits

0x0497,	// (0x000abd6a) cale_week_scroll_pane_g1_ParamLimits

0x04b6,	// (0x000abd89) cale_week_scroll_pane_g2_ParamLimits

0x04ce,	// (0x000abda1) cale_week_scroll_pane_g3_ParamLimits

0x04e6,	// (0x000abdb9) cale_week_scroll_pane_g4_ParamLimits

0x04fe,	// (0x000abdd1) cale_week_scroll_pane_g5_ParamLimits

0x051e,	// (0x000abdf1) cale_week_scroll_pane_g6_ParamLimits

0x053e,	// (0x000abe11) cale_week_scroll_pane_g7_ParamLimits

0x0562,	// (0x000abe35) cale_week_scroll_pane_g8_ParamLimits

0x0586,	// (0x000abe59) cale_week_scroll_pane_g9_ParamLimits

0x059e,	// (0x000abe71) cale_week_scroll_pane_g10_ParamLimits

0x05b6,	// (0x000abe89) cale_week_scroll_pane_g11_ParamLimits

0x05ce,	// (0x000abea1) cale_week_scroll_pane_g12_ParamLimits

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g13_ParamLimits

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g14_ParamLimits

0x05f2,	// (0x000abec5) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x000ba9fe) cale_week_scroll_pane_g_ParamLimits

0x063a,	// (0x000abf0d) cale_week_time_pane_ParamLimits

0x065e,	// (0x000abf31) grid_cale_week_pane_ParamLimits

0xa64f,	// (0x000b5f22) listscroll_cale_week_pane_t1

0xa661,	// (0x000b5f34) scroll_pane_cp08_ParamLimits

0x1162,	// (0x000aca35) cale_month_corner_pane_ParamLimits

0xaa0c,	// (0x000b62df) cale_month_pane_t1

0x166a,	// (0x000acf3d) cale_month_week_pane_ParamLimits

0x1dc0,	// (0x000ad693) popup_call_status_window_g1_ParamLimits

0x1dd4,	// (0x000ad6a7) popup_call_status_window_g2_ParamLimits

0x1de8,	// (0x000ad6bb) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x000bab78) popup_call_status_window_g_ParamLimits

0xade4,	// (0x000b66b7) aid_call2_pane

0x2478,	// (0x000add4b) msg_header_pane_g1

0x2655,	// (0x000adf28) postcard_address2_pane_ParamLimits

0x2655,	// (0x000adf28) postcard_address2_pane

0x266b,	// (0x000adf3e) postcard_message2_pane_ParamLimits

0x266b,	// (0x000adf3e) postcard_message2_pane

0x3224,	// (0x000aeaf7) message2_row_pane_ParamLimits

0x3224,	// (0x000aeaf7) message2_row_pane

0x3244,	// (0x000aeb17) address2_row_pane_ParamLimits

0x3244,	// (0x000aeb17) address2_row_pane

0xc648,	// (0x000b7f1b) postcard_message2_row_pane_g1

0xc650,	// (0x000b7f23) postcard_message2_row_pane_t1

0xc648,	// (0x000b7f1b) address2_row_pane_g1

0xc650,	// (0x000b7f23) address2_row_pane_t1

0x09cb,	// (0x000ac29e) aid_size_cell_vorec

0x98b9,	// (0x000b518c) main_rss_pane

0xc65e,	// (0x000b7f31) rss_list_single_pane_ParamLimits

0xc65e,	// (0x000b7f31) rss_list_single_pane

0xc66c,	// (0x000b7f3f) rss_list_single_pane_t1

0xc66c,	// (0x000b7f3f) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x000bae28) rss_list_single_pane_t

0x98b9,	// (0x000b518c) main_camera2_pane

0x98b9,	// (0x000b518c) main_video2_pane

0x9d15,	// (0x000b55e8) cams_zoom_pane_cp2_ParamLimits

0x9d15,	// (0x000b55e8) cams_zoom_pane_cp2

0x9d15,	// (0x000b55e8) image2_vga_pane_ParamLimits

0x9d15,	// (0x000b55e8) image2_vga_pane

0x9d23,	// (0x000b55f6) main_camera2_pane_g1_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g1

0x9d23,	// (0x000b55f6) main_camera2_pane_g2_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g2

0x9d23,	// (0x000b55f6) main_camera2_pane_g3_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g3

0x9d23,	// (0x000b55f6) main_camera2_pane_g4_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g4

0x9d23,	// (0x000b55f6) main_camera2_pane_g5_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g5

0x9d23,	// (0x000b55f6) main_camera2_pane_g6_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g6

0x9d23,	// (0x000b55f6) main_camera2_pane_g7_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g7

0x9d23,	// (0x000b55f6) main_camera2_pane_g8_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g8

0x0008,

0xf571,	// (0x000bae44) main_camera2_pane_g_ParamLimits

0xf571,	// (0x000bae44) main_camera2_pane_g

0x33f4,	// (0x000aecc7) main_camera2_pane_t1_ParamLimits

0x33f4,	// (0x000aecc7) main_camera2_pane_t1

0x33f4,	// (0x000aecc7) main_camera2_pane_t2_ParamLimits

0x33f4,	// (0x000aecc7) main_camera2_pane_t2

0x33f4,	// (0x000aecc7) main_camera2_pane_t3_ParamLimits

0x33f4,	// (0x000aecc7) main_camera2_pane_t3

0x33f4,	// (0x000aecc7) main_camera2_pane_t4_ParamLimits

0x33f4,	// (0x000aecc7) main_camera2_pane_t4

0x0006,

0xf584,	// (0x000bae57) main_camera2_pane_t_ParamLimits

0xf584,	// (0x000bae57) main_camera2_pane_t

0x9d67,	// (0x000b563a) cams_zoom_pane_cp4_ParamLimits

0x9d67,	// (0x000b563a) cams_zoom_pane_cp4

0x3408,	// (0x000aecdb) image2_cif_pane_ParamLimits

0x3408,	// (0x000aecdb) image2_cif_pane

0x9459,	// (0x000b4d2c) image2_subqcif_pane_ParamLimits

0x9459,	// (0x000b4d2c) image2_subqcif_pane

0x3416,	// (0x000aece9) main_video2_pane_g1_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g1

0x3416,	// (0x000aece9) main_video2_pane_g2_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g2

0x3416,	// (0x000aece9) main_video2_pane_g3_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g3

0x3416,	// (0x000aece9) main_video2_pane_g4_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g4

0x3416,	// (0x000aece9) main_video2_pane_g5_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g5

0x3416,	// (0x000aece9) main_video2_pane_g6_ParamLimits

0x3416,	// (0x000aece9) main_video2_pane_g6

0x0005,

0xf593,	// (0x000bae66) main_video2_pane_g_ParamLimits

0xf593,	// (0x000bae66) main_video2_pane_g

0x3424,	// (0x000aecf7) main_video2_pane_t1_ParamLimits

0x3424,	// (0x000aecf7) main_video2_pane_t1

0x3424,	// (0x000aecf7) main_video2_pane_t2_ParamLimits

0x3424,	// (0x000aecf7) main_video2_pane_t2

0x3424,	// (0x000aecf7) main_video2_pane_t3_ParamLimits

0x3424,	// (0x000aecf7) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x000bae73) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x000bae73) main_video2_pane_t

0x2d15,	// (0x000ae5e8) call_muted_g2

0x0001,

0xf547,	// (0x000bae1a) call_muted_g

0x98b9,	// (0x000b518c) main_mup2_pane

0xb411,	// (0x000b6ce4) main_mup2_pane_g1_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g1

0xb411,	// (0x000b6ce4) main_mup2_pane_g2_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g2

0xd3c3,	// (0x000b8c96) main_mup_pane_g13_cp1

0x9467,	// (0x000b4d3a) mup_volume_pane_cp1

0xb411,	// (0x000b6ce4) main_mup2_pane_g4_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g4

0xb411,	// (0x000b6ce4) main_mup2_pane_g5_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g5

0xb411,	// (0x000b6ce4) main_mup2_pane_g6_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g6

0xb411,	// (0x000b6ce4) main_mup2_pane_g7_ParamLimits

0xb411,	// (0x000b6ce4) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x000bae7a) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x000bae7a) main_mup2_pane_g

0xb41f,	// (0x000b6cf2) main_mup2_pane_t1_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t1

0xb41f,	// (0x000b6cf2) main_mup2_pane_t2_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t2

0xb41f,	// (0x000b6cf2) main_mup2_pane_t3_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t3

0xb41f,	// (0x000b6cf2) main_mup2_pane_t4_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t4

0xb41f,	// (0x000b6cf2) main_mup2_pane_t5_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t5

0xb41f,	// (0x000b6cf2) main_mup2_pane_t6_ParamLimits

0xb41f,	// (0x000b6cf2) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x000bae89) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x000bae89) main_mup2_pane_t

0xb433,	// (0x000b6d06) mup2_visualizer_pane_ParamLimits

0xb433,	// (0x000b6d06) mup2_visualizer_pane

0xb433,	// (0x000b6d06) mup_progress_pane_cp_ParamLimits

0xb433,	// (0x000b6d06) mup_progress_pane_cp

0x9d8b,	// (0x000b565e) mup_volume_pane_cp_ParamLimits

0x9d8b,	// (0x000b565e) mup_volume_pane_cp

0xa4c0,	// (0x000b5d93) mup2_visualizer_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) mup2_visualizer_pane_g1

0xa4ce,	// (0x000b5da1) mup2_visualizer_pane_g2_ParamLimits

0xa4ce,	// (0x000b5da1) mup2_visualizer_pane_g2

0xa4ce,	// (0x000b5da1) mup2_visualizer_pane_g3_ParamLimits

0xa4ce,	// (0x000b5da1) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x000ba977) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x000ba977) mup2_visualizer_pane_g

0xb5be,	// (0x000b6e91) aid_size_cell_fmradio

0x2ec5,	// (0x000ae798) aid_height_parent_landcape

0xa86a,	// (0x000b613d) wml_content_pane_cp

0xa872,	// (0x000b6145) wml_tabs_pane

0xa87b,	// (0x000b614e) popup_wml_miniature_window

0xa883,	// (0x000b6156) scroll_pane_cp021

0xa897,	// (0x000b616a) wml_content_pane_comp8

0x98b9,	// (0x000b518c) bg_popup_sub_pane_cp05

0xc712,	// (0x000b7fe5) popup_wml_miniature_window_g1

0xc71a,	// (0x000b7fed) wml_miniature_view_pane

0x3438,	// (0x000aed0b) aid_size_wml_view

0x3440,	// (0x000aed13) wml_miniature_view_pane_g1

0x3449,	// (0x000aed1c) wml_miniature_view_pane_g2

0x3452,	// (0x000aed25) wml_miniature_view_pane_g3

0x345a,	// (0x000aed2d) wml_miniature_view_pane_g4

0x3462,	// (0x000aed35) wml_miniature_view_pane_g5

0x346a,	// (0x000aed3d) wml_miniature_view_pane_g6

0x3472,	// (0x000aed45) wml_miniature_view_pane_g7

0x347a,	// (0x000aed4d) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x000bae96) wml_miniature_view_pane_g

0xc722,	// (0x000b7ff5) background_graphic_ParamLimits

0xc722,	// (0x000b7ff5) background_graphic

0xc72e,	// (0x000b8001) wml_tabs_2_pane

0xc737,	// (0x000b800a) wml_tabs_3_pane_ParamLimits

0xc737,	// (0x000b800a) wml_tabs_3_pane

0xc749,	// (0x000b801c) wml_tabs_4_pane_ParamLimits

0xc749,	// (0x000b801c) wml_tabs_4_pane

0xc75f,	// (0x000b8032) wml_tabs_5_pane_ParamLimits

0xc75f,	// (0x000b8032) wml_tabs_5_pane

0xc779,	// (0x000b804c) wml_tabs_pane_g2_ParamLimits

0xc779,	// (0x000b804c) wml_tabs_pane_g2

0xc78e,	// (0x000b8061) wml_tabs_pane_g3_ParamLimits

0xc78e,	// (0x000b8061) wml_tabs_pane_g3

0xc7a3,	// (0x000b8076) wml_tabs_2_active_pane_ParamLimits

0xc7a3,	// (0x000b8076) wml_tabs_2_active_pane

0xc7a3,	// (0x000b8076) wml_tabs_2_passive_pane_ParamLimits

0xc7a3,	// (0x000b8076) wml_tabs_2_passive_pane

0x3482,	// (0x000aed55) wml_tabs_3_active_pane_cp_ParamLimits

0x3482,	// (0x000aed55) wml_tabs_3_active_pane_cp

0x3497,	// (0x000aed6a) wml_tabs_3_passive_pane_ParamLimits

0x3497,	// (0x000aed6a) wml_tabs_3_passive_pane

0x34aa,	// (0x000aed7d) wml_tabs_3_passive_pane_cp_ParamLimits

0x34aa,	// (0x000aed7d) wml_tabs_3_passive_pane_cp

0x34c1,	// (0x000aed94) tabs_4_active_pane

0x34c9,	// (0x000aed9c) tabs_4_passive_pane

0x34d3,	// (0x000aeda6) tabs_4_passive_pane_cp

0x34db,	// (0x000aedae) tabs_4_passive_pane_cp2

0x2bfe,	// (0x000ae4d1) aid_height_text

0xb433,	// (0x000b6d06) mup_volume_cont_pane_ParamLimits

0xb433,	// (0x000b6d06) mup_volume_cont_pane

0x9445,	// (0x000b4d18) aid_size_cell_pinb

0x9445,	// (0x000b4d18) aid_size_list_pinb

0xb433,	// (0x000b6d06) mup2_volume_cont_pane_ParamLimits

0xb433,	// (0x000b6d06) mup2_volume_cont_pane

0x9d75,	// (0x000b5648) mup2_volume_cont_pane_g1_ParamLimits

0x9d75,	// (0x000b5648) mup2_volume_cont_pane_g1

0xfdaf,	// (0x000ab682) aid_size_cell_touch_ParamLimits

0xfdaf,	// (0x000ab682) aid_size_cell_touch

0x002e,	// (0x000ab901) touch_pane_ParamLimits

0x002e,	// (0x000ab901) touch_pane

0x9467,	// (0x000b4d3a) main_rss2_pane

0xc7ba,	// (0x000b808d) listscroll_rss2_pane

0xc7c3,	// (0x000b8096) rss2_navigation_pane

0xc7cb,	// (0x000b809e) list_rss2_pane

0xaefc,	// (0x000b67cf) scroll_pane_cp22

0xc7d3,	// (0x000b80a6) rss2_navigation_pane_g1

0xc7dc,	// (0x000b80af) rss2_navigation_pane_g2

0xc7e4,	// (0x000b80b7) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x000baea7) rss2_navigation_pane_g

0xc7ec,	// (0x000b80bf) rss2_navigation_pane_t1

0x34e5,	// (0x000aedb8) rss2_list_single_pane_ParamLimits

0x34e5,	// (0x000aedb8) rss2_list_single_pane

0xc7fa,	// (0x000b80cd) rss2_list_single_pane_t2

0xc808,	// (0x000b80db) rss2_list_single_pane_t3_ParamLimits

0xc808,	// (0x000b80db) rss2_list_single_pane_t3

0xc825,	// (0x000b80f8) rss2_list_single_pane_t4

0x1caa,	// (0x000ad57d) smil_status_pane_g1

0x9459,	// (0x000b4d2c) main_image2_pane_ParamLimits

0x9459,	// (0x000b4d2c) main_image2_pane

0x9d23,	// (0x000b55f6) main_camera2_pane_g9_ParamLimits

0x9d23,	// (0x000b55f6) main_camera2_pane_g9

0x33f4,	// (0x000aecc7) main_camera2_pane_t5_ParamLimits

0x33f4,	// (0x000aecc7) main_camera2_pane_t5

0x9d31,	// (0x000b5604) main_camera2_pane_t6_ParamLimits

0x9d31,	// (0x000b5604) main_camera2_pane_t6

0x34fc,	// (0x000aedcf) main_image2_pane_g1_ParamLimits

0x34fc,	// (0x000aedcf) main_image2_pane_g1

0x28ad,	// (0x000ae180) smil2_video_pane_ParamLimits

0x28ad,	// (0x000ae180) smil2_video_pane

0xfdef,	// (0x000ab6c2) aid_zoom_text_primary_cp

0x944f,	// (0x000b4d22) popup_preview_fixed_window

0xa7c4,	// (0x000b6097) im_reading_pane_g1

0x33e6,	// (0x000aecb9) cams2_bc_adjust_pane_cp_ParamLimits

0x33e6,	// (0x000aecb9) cams2_bc_adjust_pane_cp

0x9d59,	// (0x000b562c) cams2_bc_adjust_pane_ParamLimits

0x9d59,	// (0x000b562c) cams2_bc_adjust_pane

0xd3c3,	// (0x000b8c96) cams2_bc_adjust_pane_g1

0x9467,	// (0x000b4d3a) cams2_slider_pane

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g1

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x000baeae) cams2_slider_pane_g

0x00c4,	// (0x000ab997) calc_display_pane_ParamLimits

0x00e9,	// (0x000ab9bc) calc_paper_pane_ParamLimits

0x010c,	// (0x000ab9df) grid_calc_pane_ParamLimits

0x9c2a,	// (0x000b54fd) popup_clock_digital_window_t1_ParamLimits

0xb55b,	// (0x000b6e2e) main_image_pane_t1

0x00a4,	// (0x000ab977) aid_size_cell_calc_ParamLimits

0x00a4,	// (0x000ab977) aid_size_cell_calc

0x2f1b,	// (0x000ae7ee) popup_blid_sat_info2_window_ParamLimits

0x2f1b,	// (0x000ae7ee) popup_blid_sat_info2_window

0xc833,	// (0x000b8106) aid_size_cell_blid

0xc3d2,	// (0x000b7ca5) bg_popup_window_pane_cp07

0xc850,	// (0x000b8123) grid_popup_blid_pane

0xc85a,	// (0x000b812d) heading_pane_cp05_ParamLimits

0xc85a,	// (0x000b812d) heading_pane_cp05

0xc924,	// (0x000b81f7) cell_popup_blid_pane_ParamLimits

0xc924,	// (0x000b81f7) cell_popup_blid_pane

0xc94e,	// (0x000b8221) cell_popup_blid_pane_g1

0xc956,	// (0x000b8229) cell_popup_blid_pane_t1

0xb433,	// (0x000b6d06) mup2_indicator_pane_ParamLimits

0xb433,	// (0x000b6d06) mup2_indicator_pane

0x9445,	// (0x000b4d18) mup2_visualizer_osc_pane

0xc6fc,	// (0x000b7fcf) mup2_visualizer_spec_pane_ParamLimits

0xc6fc,	// (0x000b7fcf) mup2_visualizer_spec_pane

0x9445,	// (0x000b4d18) mup2_spec_half_pane

0x9445,	// (0x000b4d18) mup2_spec_half_pane_cp

0xc964,	// (0x000b8237) mup2_spec_bar_pane_ParamLimits

0xc964,	// (0x000b8237) mup2_spec_bar_pane

0xa70f,	// (0x000b5fe2) mup2_spec_bar_pane_g1

0xc983,	// (0x000b8256) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x000baed4) mup2_spec_bar_pane_g

0x9445,	// (0x000b4d18) mup2_osc_middle_pane

0xa70f,	// (0x000b5fe2) mup2_visualizer_osc_pane_g1

0x9491,	// (0x000b4d64) popup_number_entry_window_t1_ParamLimits

0x94a4,	// (0x000b4d77) popup_number_entry_window_t2_ParamLimits

0x94b6,	// (0x000b4d89) popup_number_entry_window_t3_ParamLimits

0x94c8,	// (0x000b4d9b) popup_number_entry_window_t5_ParamLimits

0x94c8,	// (0x000b4d9b) popup_number_entry_window_t5

0xf045,	// (0x000ba918) popup_number_entry_window_t_ParamLimits

0x94fd,	// (0x000b4dd0) text_title_cp2_ParamLimits

0x9c69,	// (0x000b553c) aid_hotspot_pointer_text2_pane

0x9c8f,	// (0x000b5562) main_viewer_pane_g9_ParamLimits

0x9c8f,	// (0x000b5562) main_viewer_pane_g9

0xaa0c,	// (0x000b62df) cale_month_pane_t1_ParamLimits

0xaa49,	// (0x000b631c) bg_cale_pane_ParamLimits

0xaa61,	// (0x000b6334) list_cale_pane_ParamLimits

0xaa72,	// (0x000b6345) listscroll_cale_day_pane_t1

0xaa84,	// (0x000b6357) scroll_pane_cp09_ParamLimits

0x21b6,	// (0x000ada89) main_mup_eq_pane_t1_ParamLimits

0x21b6,	// (0x000ada89) main_mup_eq_pane_t1

0x21d2,	// (0x000adaa5) main_mup_eq_pane_t2_ParamLimits

0x21d2,	// (0x000adaa5) main_mup_eq_pane_t2

0x21ee,	// (0x000adac1) main_mup_eq_pane_t3_ParamLimits

0x21ee,	// (0x000adac1) main_mup_eq_pane_t3

0x220c,	// (0x000adadf) main_mup_eq_pane_t4_ParamLimits

0x220c,	// (0x000adadf) main_mup_eq_pane_t4

0x222a,	// (0x000adafd) main_mup_eq_pane_t5_ParamLimits

0x222a,	// (0x000adafd) main_mup_eq_pane_t5

0x2248,	// (0x000adb1b) main_mup_eq_pane_t6_ParamLimits

0x2248,	// (0x000adb1b) main_mup_eq_pane_t6

0x225e,	// (0x000adb31) main_mup_eq_pane_t7_ParamLimits

0x225e,	// (0x000adb31) main_mup_eq_pane_t7

0x2274,	// (0x000adb47) main_mup_eq_pane_t8_ParamLimits

0x2274,	// (0x000adb47) main_mup_eq_pane_t8

0x228a,	// (0x000adb5d) main_mup_eq_pane_t9_ParamLimits

0x228a,	// (0x000adb5d) main_mup_eq_pane_t9

0x22a6,	// (0x000adb79) main_mup_eq_pane_t10_ParamLimits

0x22a6,	// (0x000adb79) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x000bac77) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x000bac77) main_mup_eq_pane_t

0x237b,	// (0x000adc4e) mup_equalizer_pane_cp5_ParamLimits

0x2393,	// (0x000adc66) mup_equalizer_pane_cp6_ParamLimits

0x23ab,	// (0x000adc7e) mup_equalizer_pane_cp7_ParamLimits

0x9467,	// (0x000b4d3a) main_gallery_pane

0xc69a,	// (0x000b7f6d) smil2_volume_pane

0xc6a2,	// (0x000b7f75) smil_status_volume_pane_g1_ParamLimits

0xc6b5,	// (0x000b7f88) smil_status_volume_pane_g2_ParamLimits

0x9cf3,	// (0x000b55c6) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x000bae2d) smil_status_volume_pane_g_ParamLimits

0xc3d2,	// (0x000b7ca5) bg_popup_window_pane_cp07_ParamLimits

0xc83b,	// (0x000b810e) blid_firmament_pane

0x9af6,	// (0x000b53c9) aid_size_cell_gallery_ParamLimits

0x9af6,	// (0x000b53c9) aid_size_cell_gallery

0x9af6,	// (0x000b53c9) grid_gallery_pane_ParamLimits

0x9af6,	// (0x000b53c9) grid_gallery_pane

0xc3d2,	// (0x000b7ca5) cell_gallery_pane_ParamLimits

0xc3d2,	// (0x000b7ca5) cell_gallery_pane

0x9af6,	// (0x000b53c9) bg_cell_gallery_focus_pane_ParamLimits

0x9af6,	// (0x000b53c9) bg_cell_gallery_focus_pane

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g1

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g2_ParamLimits

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g2

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g3_ParamLimits

0xa4c0,	// (0x000b5d93) cell_gallery_pane_g3

0xa4ce,	// (0x000b5da1) cell_gallery_pane_g4_ParamLimits

0xa4ce,	// (0x000b5da1) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x000baed9) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x000baed9) cell_gallery_pane_g

0xc98d,	// (0x000b8260) bg_cell_gallery_focus_pane_g1

0xc995,	// (0x000b8268) bg_cell_gallery_focus_pane_g2

0xc99d,	// (0x000b8270) bg_cell_gallery_focus_pane_g3

0xc9a5,	// (0x000b8278) bg_cell_gallery_focus_pane_g4

0xc9ad,	// (0x000b8280) bg_cell_gallery_focus_pane_g5

0xc9b5,	// (0x000b8288) bg_cell_gallery_focus_pane_g6

0xc9bd,	// (0x000b8290) bg_cell_gallery_focus_pane_g7

0xc9c5,	// (0x000b8298) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x000baee2) bg_cell_gallery_focus_pane_g

0xc9cd,	// (0x000b82a0) aid_firma_cardinal

0xc9e1,	// (0x000b82b4) blid_firmament_pane_t1

0xc9f8,	// (0x000b82cb) blid_firmament_pane_t2

0xca0f,	// (0x000b82e2) blid_firmament_pane_t3

0xca26,	// (0x000b82f9) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x000baef3) blid_firmament_pane_t

0xca3d,	// (0x000b8310) blid_sat_info_pane

0xa70f,	// (0x000b5fe2) blid_sat_info_pane_g1

0xa70f,	// (0x000b5fe2) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x000bac6b) blid_sat_info_pane_g

0xca4d,	// (0x000b8320) blid_sat_info_pane_t1

0xca5b,	// (0x000b832e) smil2_volume_content_pane

0xca64,	// (0x000b8337) smil2_volume_pane_g1

0xa5a9,	// (0x000b5e7c) smil2_volume_content_pane_g1

0xca6c,	// (0x000b833f) smil2_volume_content_pane_g2

0xca75,	// (0x000b8348) smil2_volume_content_pane_g3

0xca7e,	// (0x000b8351) smil2_volume_content_pane_g4

0xca87,	// (0x000b835a) smil2_volume_content_pane_g5

0xca90,	// (0x000b8363) smil2_volume_content_pane_g6

0xca99,	// (0x000b836c) smil2_volume_content_pane_g7

0xcaa2,	// (0x000b8375) smil2_volume_content_pane_g8

0xcaab,	// (0x000b837e) smil2_volume_content_pane_g9

0xcab4,	// (0x000b8387) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x000baefc) smil2_volume_content_pane_g

0x072c,	// (0x000abfff) cale_week_day_heading_pane_t1_ParamLimits

0x0756,	// (0x000ac029) cale_week_day_heading_pane_t2_ParamLimits

0x0785,	// (0x000ac058) cale_week_day_heading_pane_t3_ParamLimits

0x07b4,	// (0x000ac087) cale_week_day_heading_pane_t4_ParamLimits

0x07e3,	// (0x000ac0b6) cale_week_day_heading_pane_t5_ParamLimits

0x0816,	// (0x000ac0e9) cale_week_day_heading_pane_t6_ParamLimits

0x084d,	// (0x000ac120) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x000baa1f) cale_week_day_heading_pane_t_ParamLimits

0xa67e,	// (0x000b5f51) bg_cale_side_pane_ParamLimits

0x0877,	// (0x000ac14a) cale_week_time_pane_t1_ParamLimits

0x0891,	// (0x000ac164) cale_week_time_pane_t2_ParamLimits

0x08ab,	// (0x000ac17e) cale_week_time_pane_t3_ParamLimits

0x08c5,	// (0x000ac198) cale_week_time_pane_t4_ParamLimits

0x08df,	// (0x000ac1b2) cale_week_time_pane_t5_ParamLimits

0x08f9,	// (0x000ac1cc) cale_week_time_pane_t6_ParamLimits

0x0919,	// (0x000ac1ec) cale_week_time_pane_t7_ParamLimits

0x093f,	// (0x000ac212) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x000baa2e) cale_week_time_pane_t_ParamLimits

0x0965,	// (0x000ac238) cell_cale_week_pane_g2_ParamLimits

0xa67e,	// (0x000b5f51) bg_cale_side_pane_cp01_ParamLimits

0x1a93,	// (0x000ad366) cale_month_week_pane_t1_ParamLimits

0x1aac,	// (0x000ad37f) cale_month_week_pane_t2_ParamLimits

0x1ac5,	// (0x000ad398) cale_month_week_pane_t3_ParamLimits

0x1ade,	// (0x000ad3b1) cale_month_week_pane_t4_ParamLimits

0x1af7,	// (0x000ad3ca) cale_month_week_pane_t5_ParamLimits

0x1b10,	// (0x000ad3e3) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x000baafc) cale_month_week_pane_t_ParamLimits

0x9baa,	// (0x000b547d) cell_cale_month_pane_g1_ParamLimits

0x9467,	// (0x000b4d3a) main_cale_event_viewer_pane

0x9445,	// (0x000b4d18) listscroll_cale_event_viewer_pane

0xcabd,	// (0x000b8390) list_cale_ev_pane

0xcac5,	// (0x000b8398) scroll_pane_cp023

0x3512,	// (0x000aede5) field_cale_ev_pane_ParamLimits

0x3512,	// (0x000aede5) field_cale_ev_pane

0xcad1,	// (0x000b83a4) field_cale_ev_content_pane_ParamLimits

0xcad1,	// (0x000b83a4) field_cale_ev_content_pane

0xcadd,	// (0x000b83b0) field_cale_ev_pane_g1_ParamLimits

0xcadd,	// (0x000b83b0) field_cale_ev_pane_g1

0xcae9,	// (0x000b83bc) field_cale_ev_pane_g2_ParamLimits

0xcae9,	// (0x000b83bc) field_cale_ev_pane_g2

0xcb01,	// (0x000b83d4) field_cale_ev_pane_g3_ParamLimits

0xcb01,	// (0x000b83d4) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x000baf11) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x000baf11) field_cale_ev_pane_g

0xcb19,	// (0x000b83ec) field_cale_ev_pane_t1_ParamLimits

0xcb19,	// (0x000b83ec) field_cale_ev_pane_t1

0x3536,	// (0x000aee09) field_cale_ev_content_pane_t1_ParamLimits

0x3536,	// (0x000aee09) field_cale_ev_content_pane_t1

0xb441,	// (0x000b6d14) bg_button_pane_cp01

0x03e4,	// (0x000abcb7) listscroll_cale_week_pane_ParamLimits

0xa646,	// (0x000b5f19) popup_toolbar_window_cp01

0xa64f,	// (0x000b5f22) listscroll_cale_week_pane_t1_ParamLimits

0x03e4,	// (0x000abcb7) listscroll_cale_day_pane_ParamLimits

0xa646,	// (0x000b5f19) popup_toolbar_window_cp02

0xaa72,	// (0x000b6345) listscroll_cale_day_pane_t1_ParamLimits

0x2ee3,	// (0x000ae7b6) main_cale_month_pane_ParamLimits

0x9cde,	// (0x000b55b1) popup_toolbar_window_cp03_ParamLimits

0x9cde,	// (0x000b55b1) popup_toolbar_window_cp03

0x276b,	// (0x000ae03e) main_image_pane_g2_ParamLimits

0x276b,	// (0x000ae03e) main_image_pane_g2

0x277c,	// (0x000ae04f) main_image_pane_g3_ParamLimits

0x277c,	// (0x000ae04f) main_image_pane_g3

0x0002,

0xf436,	// (0x000bad09) main_image_pane_g_ParamLimits

0xf436,	// (0x000bad09) main_image_pane_g

0xb55b,	// (0x000b6e2e) main_image_pane_t1_ParamLimits

0x278d,	// (0x000ae060) main_image_pane_t2_ParamLimits

0x278d,	// (0x000ae060) main_image_pane_t2

0x279f,	// (0x000ae072) main_image_pane_t3_ParamLimits

0x279f,	// (0x000ae072) main_image_pane_t3

0x27c7,	// (0x000ae09a) main_image_pane_t4_ParamLimits

0x27c7,	// (0x000ae09a) main_image_pane_t4

0x0003,

0xf43d,	// (0x000bad10) main_image_pane_t_ParamLimits

0xf43d,	// (0x000bad10) main_image_pane_t

0x27e7,	// (0x000ae0ba) popup_image_details_window_cp01

0x27f1,	// (0x000ae0c4) popup_toobar_trans_pane_cp01_ParamLimits

0x27f1,	// (0x000ae0c4) popup_toobar_trans_pane_cp01

0x300e,	// (0x000ae8e1) popup_image_details_window_ParamLimits

0x300e,	// (0x000ae8e1) popup_image_details_window

0x9caf,	// (0x000b5582) popup_image_focus_window

0x9d15,	// (0x000b55e8) camera2_autofocus_pane_ParamLimits

0x9d15,	// (0x000b55e8) camera2_autofocus_pane

0x9445,	// (0x000b4d18) bg_popup_sub_pane_cp06

0xcb30,	// (0x000b8403) popup_image_focus_window_g1

0xcb38,	// (0x000b840b) popup_image_focus_window_g2

0xcb40,	// (0x000b8413) popup_image_focus_window_g3

0xcb48,	// (0x000b841b) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x000baf18) popup_image_focus_window_g

0xcb50,	// (0x000b8423) popup_image_focus_window_t1

0xcb5e,	// (0x000b8431) popup_image_focus_window_t2

0xcb6e,	// (0x000b8441) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x000baf21) popup_image_focus_window_t

0xa4c0,	// (0x000b5d93) camera2_autofocus_pane_g1

0x9af6,	// (0x000b53c9) bg_tb_trans_pane_cp01

0xcb7c,	// (0x000b844f) popup_image_details_window_g1

0xcb8f,	// (0x000b8462) popup_image_details_window_g2

0x0002,

0xf660,	// (0x000baf33) popup_image_details_window_g

0xcbb8,	// (0x000b848b) popup_image_details_window_t1

0xcbca,	// (0x000b849d) popup_image_details_window_t2

0xcbe3,	// (0x000b84b6) popup_image_details_window_t3

0xcbf7,	// (0x000b84ca) popup_image_details_window_t4

0xcc12,	// (0x000b84e5) popup_image_details_window_t5

0x0004,

0xf667,	// (0x000baf3a) popup_image_details_window_t

0xa51e,	// (0x000b5df1) bg_calc_paper_pane_ParamLimits

0x9467,	// (0x000b4d3a) grid_highlight_pane_cp013

0x9b0c,	// (0x000b53df) list_calc_pane_ParamLimits

0x9b1e,	// (0x000b53f1) scroll_pane_cp024

0xa532,	// (0x000b5e05) bg_calc_display_pane_ParamLimits

0x020c,	// (0x000abadf) calc_display_pane_t1_ParamLimits

0x0221,	// (0x000abaf4) calc_display_pane_t2_ParamLimits

0x9b26,	// (0x000b53f9) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x000ba99f) calc_display_pane_t_ParamLimits

0x02ef,	// (0x000abbc2) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x000ba9bc) cell_calc_pane_g

0x02f8,	// (0x000abbcb) cell_calc_pane_t1

0xa587,	// (0x000b5e5a) grid_highlight_pane_cp02_ParamLimits

0xa59d,	// (0x000b5e70) toolbar_button_pane_cp01_ParamLimits

0xa59d,	// (0x000b5e70) toolbar_button_pane_cp01

0xb5a0,	// (0x000b6e73) temp_image_control_pane_ParamLimits

0xb5a0,	// (0x000b6e73) temp_image_control_pane

0x9459,	// (0x000b4d2c) main_mp3_pane

0xcc2c,	// (0x000b84ff) temp_image_control_pane_g1_ParamLimits

0xcc2c,	// (0x000b84ff) temp_image_control_pane_g1

0xcc3a,	// (0x000b850d) temp_image_control_pane_g2_ParamLimits

0xcc3a,	// (0x000b850d) temp_image_control_pane_g2

0xcc4c,	// (0x000b851f) temp_image_control_pane_g3_ParamLimits

0xcc4c,	// (0x000b851f) temp_image_control_pane_g3

0x3557,	// (0x000aee2a) temp_image_control_pane_g4_ParamLimits

0x3557,	// (0x000aee2a) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x000baf45) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x000baf45) temp_image_control_pane_g

0xcc2c,	// (0x000b84ff) main_mp3_pane_g1

0x356a,	// (0x000aee3d) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x000baf4e) main_mp3_pane_g

0xcc81,	// (0x000b8554) main_mp3_pane_t1

0xa4ce,	// (0x000b5da1) main_camera_pane_g8_ParamLimits

0xa4ce,	// (0x000b5da1) main_camera_pane_g8

0x0b3c,	// (0x000ac40f) main_video_pane_g7_ParamLimits

0x0b3c,	// (0x000ac40f) main_video_pane_g7

0x9d45,	// (0x000b5618) main_camera2_pane_t7_ParamLimits

0x9d45,	// (0x000b5618) main_camera2_pane_t7

0xa82a,	// (0x000b60fd) scroll_pane_cp025_ParamLimits

0xa82a,	// (0x000b60fd) scroll_pane_cp025

0xa83e,	// (0x000b6111) scroll_pane_cp026_ParamLimits

0xa83e,	// (0x000b6111) scroll_pane_cp026

0xa84d,	// (0x000b6120) wml_content_pane_ParamLimits

0x9467,	// (0x000b4d3a) main_touch_calib_pane

0x363c,	// (0x000aef0f) main_touch_calib_pane_g1

0x364e,	// (0x000aef21) main_touch_calib_pane_g2

0x3660,	// (0x000aef33) main_touch_calib_pane_g3

0x3672,	// (0x000aef45) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x000baf6c) main_touch_calib_pane_g

0x3684,	// (0x000aef57) main_touch_calib_pane_t1

0x369e,	// (0x000aef71) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x000baf75) main_touch_calib_pane_t

0xaf77,	// (0x000b684a) mup_progress_pane_cp02

0xaf96,	// (0x000b6869) navi_pane_g1

0xaff8,	// (0x000b68cb) navi_pane_mp_t3

0x9459,	// (0x000b4d2c) main_mp3_pane_ParamLimits

0x31c7,	// (0x000aea9a) navi_pane_ParamLimits

0xcc2c,	// (0x000b84ff) main_mp3_pane_g1_ParamLimits

0x356a,	// (0x000aee3d) main_mp3_pane_g2_ParamLimits

0x3576,	// (0x000aee49) main_mp3_pane_g3_ParamLimits

0x3576,	// (0x000aee49) main_mp3_pane_g3

0x3584,	// (0x000aee57) main_mp3_pane_g4_ParamLimits

0x3584,	// (0x000aee57) main_mp3_pane_g4

0xa4c0,	// (0x000b5d93) main_mp3_pane_g5_ParamLimits

0xa4c0,	// (0x000b5d93) main_mp3_pane_g5

0xcc5c,	// (0x000b852f) main_mp3_pane_g6_ParamLimits

0xcc5c,	// (0x000b852f) main_mp3_pane_g6

0xcc69,	// (0x000b853c) main_mp3_pane_g7_ParamLimits

0xcc69,	// (0x000b853c) main_mp3_pane_g7

0xcc75,	// (0x000b8548) main_mp3_pane_g8_ParamLimits

0xcc75,	// (0x000b8548) main_mp3_pane_g8

0xf67b,	// (0x000baf4e) main_mp3_pane_g_ParamLimits

0x3590,	// (0x000aee63) main_mp3_pane_t2

0x359e,	// (0x000aee71) main_mp3_pane_t3

0xcc8f,	// (0x000b8562) main_mp3_pane_t4

0xcc9d,	// (0x000b8570) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x000baf5f) main_mp3_pane_t

0xccab,	// (0x000b857e) mup_progress_pane_cp01

0xf031,	// (0x000ba904) aid_zoom_text_secondary2

0xcabd,	// (0x000b8390) list_cale_ev2_pane

0xcac5,	// (0x000b8398) scroll_pane_cp023_ParamLimits

0x36f8,	// (0x000aefcb) field_cale_ev2_pane_ParamLimits

0x36f8,	// (0x000aefcb) field_cale_ev2_pane

0x371c,	// (0x000aefef) field_cale_ev2_pane_g1_ParamLimits

0x371c,	// (0x000aefef) field_cale_ev2_pane_g1

0x3728,	// (0x000aeffb) field_cale_ev2_pane_g2_ParamLimits

0x3728,	// (0x000aeffb) field_cale_ev2_pane_g2

0x3740,	// (0x000af013) field_cale_ev2_pane_g3_ParamLimits

0x3740,	// (0x000af013) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x000baf80) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x000baf80) field_cale_ev2_pane_g

0x3758,	// (0x000af02b) field_cale_ev2_pane_t1_ParamLimits

0x3758,	// (0x000af02b) field_cale_ev2_pane_t1

0x376f,	// (0x000af042) field_cale_ev2_pane_t2_ParamLimits

0x376f,	// (0x000af042) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x000baf89) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x000baf89) field_cale_ev2_pane_t

0x2605,	// (0x000aded8) main_postcard_pane_g5_ParamLimits

0x2605,	// (0x000aded8) main_postcard_pane_g5

0x261b,	// (0x000adeee) main_postcard_pane_g6_ParamLimits

0x261b,	// (0x000adeee) main_postcard_pane_g6

0x9af6,	// (0x000b53c9) camera2_autofocus_pane_cp_ParamLimits

0x9af6,	// (0x000b53c9) camera2_autofocus_pane_cp

0x9459,	// (0x000b4d2c) main_mup3_pane

0x37ce,	// (0x000af0a1) main_mup3_pane_g1_ParamLimits

0x37ce,	// (0x000af0a1) main_mup3_pane_g1

0x37f0,	// (0x000af0c3) main_mup3_pane_g2_ParamLimits

0x37f0,	// (0x000af0c3) main_mup3_pane_g2

0x386b,	// (0x000af13e) main_mup3_pane_g3_ParamLimits

0x386b,	// (0x000af13e) main_mup3_pane_g3

0x38d5,	// (0x000af1a8) main_mup3_pane_g4_ParamLimits

0x38d5,	// (0x000af1a8) main_mup3_pane_g4

0x393f,	// (0x000af212) main_mup3_pane_g5_ParamLimits

0x393f,	// (0x000af212) main_mup3_pane_g5

0x39a9,	// (0x000af27c) main_mup3_pane_g6_ParamLimits

0x39a9,	// (0x000af27c) main_mup3_pane_g6

0xa4ce,	// (0x000b5da1) main_mup3_pane_g7_ParamLimits

0xa4ce,	// (0x000b5da1) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x000baf99) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x000baf99) main_mup3_pane_g

0x3a2d,	// (0x000af300) main_mup3_pane_t1_ParamLimits

0x3a2d,	// (0x000af300) main_mup3_pane_t1

0x3a97,	// (0x000af36a) main_mup3_pane_t2_ParamLimits

0x3a97,	// (0x000af36a) main_mup3_pane_t2

0x3b6d,	// (0x000af440) main_mup3_pane_t4_ParamLimits

0x3b6d,	// (0x000af440) main_mup3_pane_t4

0x3bcb,	// (0x000af49e) main_mup3_pane_t5_ParamLimits

0x3bcb,	// (0x000af49e) main_mup3_pane_t5

0x3c93,	// (0x000af566) main_mup3_pane_t6_ParamLimits

0x3c93,	// (0x000af566) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x000bafaa) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x000bafaa) main_mup3_pane_t

0x3d4b,	// (0x000af61e) mup3_progress_pane_ParamLimits

0x3d4b,	// (0x000af61e) mup3_progress_pane

0x3de3,	// (0x000af6b6) popup_mup3_control_window_ParamLimits

0x3de3,	// (0x000af6b6) popup_mup3_control_window

0xccb3,	// (0x000b8586) popup_mup3_text_window

0x3e19,	// (0x000af6ec) mup3_progress_pane_t1

0x3e38,	// (0x000af70b) mup3_progress_pane_t2

0xccbb,	// (0x000b858e) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x000bafb7) mup3_progress_pane_t

0xccd8,	// (0x000b85ab) mup_progress_pane_cp03

0x9445,	// (0x000b4d18) bg_tb_trans_pane_cp04

0x3e57,	// (0x000af72a) mup3_volume_pane

0x3e5f,	// (0x000af732) popup_mup3_control_window_g1

0x3e68,	// (0x000af73b) mup3_volume_pane_g1

0x3e71,	// (0x000af744) mup3_volume_pane_g2

0x3e7a,	// (0x000af74d) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x000bafbe) mup3_volume_pane_g

0x9445,	// (0x000b4d18) bg_tb_trans_pane_cp03

0xcce8,	// (0x000b85bb) popup_mup3_text_window_g1

0xccf0,	// (0x000b85c3) popup_mup3_text_window_t1

0xa57a,	// (0x000b5e4d) list_calc_item_pane_g1_ParamLimits

0xc7b1,	// (0x000b8084) mup_volume_pane_cp_g1

0x36b8,	// (0x000aef8b) main_touch_calib_pane_t3

0x36cc,	// (0x000aef9f) main_touch_calib_pane_t4

0x36e2,	// (0x000aefb5) main_touch_calib_pane_t5

0xfd9b,	// (0x000ab66e) aid_cell_size_toolbar2

0xf025,	// (0x000ba8f8) aid_popup3_width_pane

0xfddf,	// (0x000ab6b2) aid_zoom_text_msg_primary

0x0a15,	// (0x000ac2e8) vorec_t7

0xa53e,	// (0x000b5e11) bg_calc_paper_pane_g1_ParamLimits

0xa54a,	// (0x000b5e1d) bg_calc_paper_pane_g2_ParamLimits

0xa556,	// (0x000b5e29) bg_calc_paper_pane_g3_ParamLimits

0xa562,	// (0x000b5e35) bg_calc_paper_pane_g4_ParamLimits

0xa56e,	// (0x000b5e41) bg_calc_paper_pane_g5_ParamLimits

0x0271,	// (0x000abb44) bg_calc_paper_pane_g6_ParamLimits

0x0284,	// (0x000abb57) bg_calc_paper_pane_g7_ParamLimits

0x0297,	// (0x000abb6a) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x000ba9a6) bg_calc_paper_pane_g_ParamLimits

0x02aa,	// (0x000abb7d) calc_bg_paper_pane_g9_ParamLimits

0x9af6,	// (0x000b53c9) image_qvga_pane_ParamLimits

0x9af6,	// (0x000b53c9) image_qvga_pane

0xa445,	// (0x000b5d18) bg_popup_sub_pane_cp04_ParamLimits

0xb4d7,	// (0x000b6daa) popup_mup_playback_window_g1_ParamLimits

0xb4e3,	// (0x000b6db6) popup_mup_playback_window_t1_ParamLimits

0xb4f8,	// (0x000b6dcb) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x000bad04) popup_mup_playback_window_t_ParamLimits

0xa4ce,	// (0x000b5da1) main_mup2_pane_g3_ParamLimits

0xa4ce,	// (0x000b5da1) main_mup2_pane_g3

0x0d31,	// (0x000ac604) popup_toolbar_window_cp04

0xb8f3,	// (0x000b71c6) popup_call2_audio_second_window_g3_ParamLimits

0xb8f3,	// (0x000b71c6) popup_call2_audio_second_window_g3

0xbd0b,	// (0x000b75de) popup_call2_audio_first_window_g4_ParamLimits

0xbd0b,	// (0x000b75de) popup_call2_audio_first_window_g4

0xc332,	// (0x000b7c05) popup_call2_audio_in_window_g4_ParamLimits

0xc332,	// (0x000b7c05) popup_call2_audio_in_window_g4

0x274d,	// (0x000ae020) aid_area_sk_bg_cut_ParamLimits

0x274d,	// (0x000ae020) aid_area_sk_bg_cut

0xb50d,	// (0x000b6de0) aid_area_sk_bg_cut_2_ParamLimits

0xb50d,	// (0x000b6de0) aid_area_sk_bg_cut_2

0x9445,	// (0x000b4d18) aid_placing_details_win

0x9445,	// (0x000b4d18) aid_placing_details_win_2

0xa4c0,	// (0x000b5d93) camera2_autofocus_pane_g1_ParamLimits

0xffc9,	// (0x000ab89c) popup_fixed_preview_cale_window_ParamLimits

0xffc9,	// (0x000ab89c) popup_fixed_preview_cale_window

0xb03f,	// (0x000b6912) navi_slider_pane_g3

0xb048,	// (0x000b691b) navi_slider_pane_g4

0xb051,	// (0x000b6924) navi_slider_pane_g5

0xb03f,	// (0x000b6912) navi_slider_pane_g6

0x9c50,	// (0x000b5523) navi_slider_pane_g7

0xb165,	// (0x000b6a38) mup_scale_pane_g3

0xb16e,	// (0x000b6a41) mup_scale_pane_g4

0xb177,	// (0x000b6a4a) mup_scale_pane_g5

0x23c3,	// (0x000adc96) mup_scale_pane_g6

0x23cc,	// (0x000adc9f) mup_scale_pane_g7

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g3

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g4

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g5

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g6

0xd3c3,	// (0x000b8c96) cams2_slider_pane_g7

0xa70f,	// (0x000b5fe2) camera2_autofocus_pane_cp_g1

0xc621,	// (0x000b7ef4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc621,	// (0x000b7ef4) bg_popup_preview_window_pane_cp02

0xccfe,	// (0x000b85d1) list_fp_cale_pane_ParamLimits

0xccfe,	// (0x000b85d1) list_fp_cale_pane

0xcd0a,	// (0x000b85dd) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd0a,	// (0x000b85dd) popup_fixed_preview_cale_window_t1

0x3e83,	// (0x000af756) popup_fixed_preview_cale_window_t2_ParamLimits

0x3e83,	// (0x000af756) popup_fixed_preview_cale_window_t2

0x3e98,	// (0x000af76b) popup_fixed_preview_cale_window_t3_ParamLimits

0x3e98,	// (0x000af76b) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x000bafc5) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x000bafc5) popup_fixed_preview_cale_window_t

0x3eaf,	// (0x000af782) list_single_fp_cale_pane_ParamLimits

0x3eaf,	// (0x000af782) list_single_fp_cale_pane

0xcd28,	// (0x000b85fb) list_single_fp_cale_pane_g1_ParamLimits

0xcd28,	// (0x000b85fb) list_single_fp_cale_pane_g1

0xcd34,	// (0x000b8607) list_single_fp_cale_pane_g2_ParamLimits

0xcd34,	// (0x000b8607) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x000bafcc) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x000bafcc) list_single_fp_cale_pane_g

0xcd4d,	// (0x000b8620) list_single_fp_cale_pane_t1_ParamLimits

0xcd4d,	// (0x000b8620) list_single_fp_cale_pane_t1

0xcd5f,	// (0x000b8632) list_single_fp_cale_pane_t2_ParamLimits

0xcd5f,	// (0x000b8632) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x000bafd3) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x000bafd3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9467,	// (0x000b4d3a) main_dialer_pane

0x9445,	// (0x000b4d18) aid_cell_size_keypad

0x9445,	// (0x000b4d18) dialer_ne_pane

0x9445,	// (0x000b4d18) grid_dialer_command_1_pane

0x9445,	// (0x000b4d18) grid_dialer_command_2_pane

0x9445,	// (0x000b4d18) grid_dialer_keypad_pane

0x3ec4,	// (0x000af797) bg_popup_call_pane_cp06_ParamLimits

0x3ec4,	// (0x000af797) bg_popup_call_pane_cp06

0x3ec4,	// (0x000af797) dialer_ne_clear_pane_ParamLimits

0x3ec4,	// (0x000af797) dialer_ne_clear_pane

0xa70f,	// (0x000b5fe2) dialer_ne_pane_g1

0xb0ed,	// (0x000b69c0) dialer_ne_pane_t1_ParamLimits

0xb0ed,	// (0x000b69c0) dialer_ne_pane_t1

0x3ed2,	// (0x000af7a5) dialer_ne_pane_t2_ParamLimits

0x3ed2,	// (0x000af7a5) dialer_ne_pane_t2

0x3efa,	// (0x000af7cd) dialer_ne_pane_t3_ParamLimits

0x3efa,	// (0x000af7cd) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x000bafd8) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x000bafd8) dialer_ne_pane_t

0x3efa,	// (0x000af7cd) dialer_ne_pane_t3_copy1_ParamLimits

0x3efa,	// (0x000af7cd) dialer_ne_pane_t3_copy1

0xcd92,	// (0x000b8665) cell_dialer_keypad_pane_ParamLimits

0xcd92,	// (0x000b8665) cell_dialer_keypad_pane

0x9af6,	// (0x000b53c9) cell_dialer_command_1_pane_ParamLimits

0x9af6,	// (0x000b53c9) cell_dialer_command_1_pane

0xcda9,	// (0x000b867c) cell_dialer_command_2_pane_ParamLimits

0xcda9,	// (0x000b867c) cell_dialer_command_2_pane

0x9af6,	// (0x000b53c9) bg_button_pane_cp02_ParamLimits

0x9af6,	// (0x000b53c9) bg_button_pane_cp02

0xa4c0,	// (0x000b5d93) cell_dialer_keypad_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_dialer_keypad_pane_g1

0x9af6,	// (0x000b53c9) bg_button_pane_cp03_ParamLimits

0x9af6,	// (0x000b53c9) bg_button_pane_cp03

0xa4c0,	// (0x000b5d93) cell_dialer_command_1_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_dialer_command_1_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp04

0xa70f,	// (0x000b5fe2) cell_dialer_command_2_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp06

0xa70f,	// (0x000b5fe2) dialer_ne_clear_pane_g1

0x20d2,	// (0x000ad9a5) navi_pane_g2

0x2100,	// (0x000ad9d3) navi_pane_g3

0x0002,

0xf334,	// (0x000bac07) navi_pane_g

0x212b,	// (0x000ad9fe) navi_pane_mv_g2

0x2152,	// (0x000ada25) navi_pane_mv_g5

0x215a,	// (0x000ada2d) navi_pane_mv_t1

0xa532,	// (0x000b5e05) main_clock2_pane

0x9af6,	// (0x000b53c9) main_clock2_list_pane_ParamLimits

0x9af6,	// (0x000b53c9) main_clock2_list_pane

0x3f8b,	// (0x000af85e) main_clock2_pane_t1_ParamLimits

0x3f8b,	// (0x000af85e) main_clock2_pane_t1

0x3fc6,	// (0x000af899) main_clock2_pane_t2_ParamLimits

0x3fc6,	// (0x000af899) main_clock2_pane_t2

0x0004,

0xf711,	// (0x000bafe4) main_clock2_pane_t_ParamLimits

0xf711,	// (0x000bafe4) main_clock2_pane_t

0x4065,	// (0x000af938) popup_clock_analogue_window_cp03_ParamLimits

0x4065,	// (0x000af938) popup_clock_analogue_window_cp03

0x408a,	// (0x000af95d) popup_clock_digital_window_cp02_ParamLimits

0x408a,	// (0x000af95d) popup_clock_digital_window_cp02

0x4103,	// (0x000af9d6) main_clock2_list_single_pane_ParamLimits

0x4103,	// (0x000af9d6) main_clock2_list_single_pane

0xa6d9,	// (0x000b5fac) list_highlight_pane_cp05

0xcdea,	// (0x000b86bd) main_clock2_list_single_pane_t1

0x0d31,	// (0x000ac604) popup_toolbar_window_cp04_ParamLimits

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g2_ParamLimits

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g2

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g3_ParamLimits

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g3

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g4_ParamLimits

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g4

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g5_ParamLimits

0xa4ce,	// (0x000b5da1) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x000baf28) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x000baf28) camera2_autofocus_pane_g

0x3784,	// (0x000af057) camera2_autofocus_pane_cp_g2

0x378c,	// (0x000af05f) camera2_autofocus_pane_cp_g3

0x3794,	// (0x000af067) camera2_autofocus_pane_cp_g4

0x379c,	// (0x000af06f) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x000baf8e) camera2_autofocus_pane_cp_g

0x9445,	// (0x000b4d18) popup_dialer_spcha_window

0x9445,	// (0x000b4d18) bg_popup_sub_pane_cp07

0x9445,	// (0x000b4d18) list_spcha_pane

0xcdf8,	// (0x000b86cb) list_single_spcha_pane_ParamLimits

0xcdf8,	// (0x000b86cb) list_single_spcha_pane

0x9445,	// (0x000b4d18) list_highlight_pane_cp06

0xac6d,	// (0x000b6540) list_single_spcha_pane_t1

0xc0dc,	// (0x000b79af) popup_call2_audio_out_window_g4_ParamLimits

0xc0dc,	// (0x000b79af) popup_call2_audio_out_window_g4

0x9467,	// (0x000b4d3a) main_imed2_pane

0x9cb9,	// (0x000b558c) popup_imed_adjust2_window

0x3026,	// (0x000ae8f9) popup_imed_trans_window_ParamLimits

0x3026,	// (0x000ae8f9) popup_imed_trans_window

0xc886,	// (0x000b8159) popup_blid_sat_info2_window_t1

0xc894,	// (0x000b8167) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x000baebd) popup_blid_sat_info2_window_t

0x41be,	// (0x000afa91) aid_size_cell_colour_35

0x41de,	// (0x000afab1) aid_size_cell_colour_112

0x41fe,	// (0x000afad1) aid_size_cell_effect

0xb433,	// (0x000b6d06) bg_tb_trans_pane_cp02

0xab92,	// (0x000b6465) heading_imed_pane

0x421e,	// (0x000afaf1) listscroll_imed_pane

0xce0a,	// (0x000b86dd) heading_imed_pane_g1

0xce12,	// (0x000b86e5) heading_imed_pane_t1

0xce20,	// (0x000b86f3) grid_imed_colour_35_pane_ParamLimits

0xce20,	// (0x000b86f3) grid_imed_colour_35_pane

0x422a,	// (0x000afafd) grid_imed_effect_pane

0xce3c,	// (0x000b870f) list_imed_aspect_pane

0x4241,	// (0x000afb14) scroll_pane_cp027_ParamLimits

0x4241,	// (0x000afb14) scroll_pane_cp027

0x4252,	// (0x000afb25) cell_imed_effect_pane_ParamLimits

0x4252,	// (0x000afb25) cell_imed_effect_pane

0xce44,	// (0x000b8717) cell_imed_colour_pane_ParamLimits

0xce44,	// (0x000b8717) cell_imed_colour_pane

0xce8e,	// (0x000b8761) cell_imed_colour_pane_g1_ParamLimits

0xce8e,	// (0x000b8761) cell_imed_colour_pane_g1

0xce9f,	// (0x000b8772) hgihlgiht_grid_pane_cp016_ParamLimits

0xce9f,	// (0x000b8772) hgihlgiht_grid_pane_cp016

0x427d,	// (0x000afb50) cell_imed_effect_pane_g1

0x4285,	// (0x000afb58) grid_highlight_pane_cp017

0xceb0,	// (0x000b8783) list_imed_single_pane_ParamLimits

0xceb0,	// (0x000b8783) list_imed_single_pane

0x9445,	// (0x000b4d18) list_highlight_pane_cp07

0xcec4,	// (0x000b8797) list_imed_aspect_pane_comp1_t1

0xb433,	// (0x000b6d06) bg_tb_trans_pane_cp05

0xcee6,	// (0x000b87b9) popup_imed_adjust2_window_g1

0xcf0d,	// (0x000b87e0) popup_imed_adjust2_window_t1

0xcf25,	// (0x000b87f8) slider_imed_adjust_pane

0xcf39,	// (0x000b880c) slider_imed_adjust_pane_g1

0xcf49,	// (0x000b881c) slider_imed_adjust_pane_g2

0xcf59,	// (0x000b882c) slider_imed_adjust_pane_g3

0xcf6a,	// (0x000b883d) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x000bb001) slider_imed_adjust_pane_g

0x428e,	// (0x000afb61) aid_size_cell_clipart2

0xcf7b,	// (0x000b884e) grid_imed_clipart_pane

0xcf85,	// (0x000b8858) scroll_pane_cp031

0x429a,	// (0x000afb6d) cell_imed_clipart_pane_ParamLimits

0x429a,	// (0x000afb6d) cell_imed_clipart_pane

0x42b7,	// (0x000afb8a) cell_imed_clipart_pane_g1

0x9445,	// (0x000b4d18) grid_highlight_pane_cp014

0x3f69,	// (0x000af83c) main_clock2_pane_g1_ParamLimits

0x3f69,	// (0x000af83c) main_clock2_pane_g1

0x40aa,	// (0x000af97d) aid_call2_pane_cp10

0x40bc,	// (0x000af98f) aid_call_pane_cp10

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g1

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g2

0x40ce,	// (0x000af9a1) popup_clock_analogue_window_cp10_g3

0x40ce,	// (0x000af9a1) popup_clock_analogue_window_cp10_g4

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x000bafef) popup_clock_analogue_window_cp10_g

0x40e4,	// (0x000af9b7) popup_clock_analogue_window_cp10_t1

0x4115,	// (0x000af9e8) clock_digital_number_pane_cp10_ParamLimits

0x4115,	// (0x000af9e8) clock_digital_number_pane_cp10

0x412f,	// (0x000afa02) clock_digital_number_pane_cp11_ParamLimits

0x412f,	// (0x000afa02) clock_digital_number_pane_cp11

0x4149,	// (0x000afa1c) clock_digital_number_pane_cp12_ParamLimits

0x4149,	// (0x000afa1c) clock_digital_number_pane_cp12

0x4165,	// (0x000afa38) clock_digital_number_pane_cp13_ParamLimits

0x4165,	// (0x000afa38) clock_digital_number_pane_cp13

0x4181,	// (0x000afa54) clock_digital_separator_pane_cp10_ParamLimits

0x4181,	// (0x000afa54) clock_digital_separator_pane_cp10

0x419d,	// (0x000afa70) popup_clock_digital_window_cp02_t1_ParamLimits

0x419d,	// (0x000afa70) popup_clock_digital_window_cp02_t1

0xa43d,	// (0x000b5d10) clock_digital_number_pane_cp10_g1

0xa43d,	// (0x000b5d10) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x000bb00a) clock_digital_number_pane_cp10_g

0xa43d,	// (0x000b5d10) clock_digital_separator_pane_cp10_g1

0xa43d,	// (0x000b5d10) clock_digital_separator_pane_g2_cp10

0xb006,	// (0x000b68d9) navi_pane_vded_g4

0xb00f,	// (0x000b68e2) navi_pane_vded_g5

0xb018,	// (0x000b68eb) navi_pane_vded_t1

0x9467,	// (0x000b4d3a) main_vded_pane

0x42c0,	// (0x000afb93) main_vded_pane_g1

0x42cc,	// (0x000afb9f) main_vded_pane_g2

0x42d8,	// (0x000afbab) main_vded_pane_g3

0x0002,

0xf73c,	// (0x000bb00f) main_vded_pane_g

0x42e4,	// (0x000afbb7) main_vded_pane_t1

0x42f2,	// (0x000afbc5) main_vded_pane_t2

0x0001,

0xf743,	// (0x000bb016) main_vded_pane_t

0x4300,	// (0x000afbd3) vded_slider_pane

0x430a,	// (0x000afbdd) vded_video_pane

0xcf8d,	// (0x000b8860) vded_video_pane_g1

0x4316,	// (0x000afbe9) vded_video_pane_g2

0xa70f,	// (0x000b5fe2) vded_video_pane_g3

0x0002,

0xf748,	// (0x000bb01b) vded_video_pane_g

0xcf97,	// (0x000b886a) vded_slider_pane_g1

0xc7b1,	// (0x000b8084) vded_slider_pane_g2

0xcfa0,	// (0x000b8873) vded_slider_pane_g3

0xcfa9,	// (0x000b887c) vded_slider_pane_g4

0xcfb2,	// (0x000b8885) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x000bb022) vded_slider_pane_g

0x3dcd,	// (0x000af6a0) mup3_rocker_pane_ParamLimits

0x3dcd,	// (0x000af6a0) mup3_rocker_pane

0x431f,	// (0x000afbf2) mup3_control_keys_pane_g1

0x4327,	// (0x000afbfa) mup3_control_keys_pane_g2

0x432f,	// (0x000afc02) mup3_control_keys_pane_g3

0x4337,	// (0x000afc0a) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x000bb02d) mup3_control_keys_pane_g

0xfffe,	// (0x000ab8d1) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfffe,	// (0x000ab8d1) popup_toolbar2_fixed_window_cp01

0x3e03,	// (0x000af6d6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3e03,	// (0x000af6d6) popup_toolbar2_fixed_window_cp02

0xba65,	// (0x000b7338) popup_call2_audio_second_window_t4_ParamLimits

0xba65,	// (0x000b7338) popup_call2_audio_second_window_t4

0xbfa1,	// (0x000b7874) popup_call2_audio_first_window_t6_ParamLimits

0xbfa1,	// (0x000b7874) popup_call2_audio_first_window_t6

0xc1df,	// (0x000b7ab2) popup_call2_audio_out_window_t6_ParamLimits

0xc1df,	// (0x000b7ab2) popup_call2_audio_out_window_t6

0x9467,	// (0x000b4d3a) main_vitu_pane

0x9af6,	// (0x000b53c9) aid_size_cell_itu_ParamLimits

0x9af6,	// (0x000b53c9) aid_size_cell_itu

0x9af6,	// (0x000b53c9) bg_popup_window_pane_cp08_ParamLimits

0x9af6,	// (0x000b53c9) bg_popup_window_pane_cp08

0x9af6,	// (0x000b53c9) field_vitu_entry_pane_ParamLimits

0x9af6,	// (0x000b53c9) field_vitu_entry_pane

0x9af6,	// (0x000b53c9) grid_vitu_function_pane_ParamLimits

0x9af6,	// (0x000b53c9) grid_vitu_function_pane

0x9af6,	// (0x000b53c9) grid_vitu_itu_pane_ParamLimits

0x9af6,	// (0x000b53c9) grid_vitu_itu_pane

0x9af6,	// (0x000b53c9) cell_vitu_itu_pane_ParamLimits

0x9af6,	// (0x000b53c9) cell_vitu_itu_pane

0x9af6,	// (0x000b53c9) cell_vitu_function_pane_ParamLimits

0x9af6,	// (0x000b53c9) cell_vitu_function_pane

0x9af6,	// (0x000b53c9) bg_popup_sub_pane_cp08_ParamLimits

0x9af6,	// (0x000b53c9) bg_popup_sub_pane_cp08

0xa6e1,	// (0x000b5fb4) field_vitu_entry_pane_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) field_vitu_entry_pane_t1

0xcfbb,	// (0x000b888e) field_vitu_entry_pane_t2_ParamLimits

0xcfbb,	// (0x000b888e) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x000bb036) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x000bb036) field_vitu_entry_pane_t

0xc3d2,	// (0x000b7ca5) bg_button_pane_cp05_ParamLimits

0xc3d2,	// (0x000b7ca5) bg_button_pane_cp05

0xcfd8,	// (0x000b88ab) cell_vitu_itu_pane_g1

0xb41f,	// (0x000b6cf2) cell_vitu_itu_pane_t1_ParamLimits

0xb41f,	// (0x000b6cf2) cell_vitu_itu_pane_t1

0xb41f,	// (0x000b6cf2) cell_vitu_itu_pane_t2_ParamLimits

0xb41f,	// (0x000b6cf2) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x000bb03b) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x000bb03b) cell_vitu_itu_pane_t

0x9445,	// (0x000b4d18) bg_button_pane_cp07

0xa70f,	// (0x000b5fe2) cell_vitu_function_pane_g1

0x9b04,	// (0x000b53d7) main_calc_pane_g1

0xfdd3,	// (0x000ab6a6) aid_visual_content_pane

0x9467,	// (0x000b4d3a) main_vradio_pane

0xa4c0,	// (0x000b5d93) main_vradio_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) main_vradio_pane_g1

0xa4ce,	// (0x000b5da1) main_vradio_pane_g2_ParamLimits

0xa4ce,	// (0x000b5da1) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x000bb042) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x000bb042) main_vradio_pane_g

0xa6e1,	// (0x000b5fb4) main_vradio_pane_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) main_vradio_pane_t1

0xa6e1,	// (0x000b5fb4) main_vradio_pane_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) main_vradio_pane_t2

0xb0ed,	// (0x000b69c0) main_vradio_pane_t3_ParamLimits

0xb0ed,	// (0x000b69c0) main_vradio_pane_t3

0x0002,

0xf774,	// (0x000bb047) main_vradio_pane_t_ParamLimits

0xf774,	// (0x000bb047) main_vradio_pane_t

0x9af6,	// (0x000b53c9) vradio_rocker_control_pane_ParamLimits

0x9af6,	// (0x000b53c9) vradio_rocker_control_pane

0x9af6,	// (0x000b53c9) vradio_station_info_pane_ParamLimits

0x9af6,	// (0x000b53c9) vradio_station_info_pane

0x9af6,	// (0x000b53c9) vradio_frequency_info_pane_ParamLimits

0x9af6,	// (0x000b53c9) vradio_frequency_info_pane

0xa70f,	// (0x000b5fe2) vradio_station_info_pane_g1

0xb41f,	// (0x000b6cf2) vradio_station_info_pane_t1_ParamLimits

0xb41f,	// (0x000b6cf2) vradio_station_info_pane_t1

0xb0ed,	// (0x000b69c0) vradio_station_info_pane_t2_ParamLimits

0xb0ed,	// (0x000b69c0) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x000bb04e) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x000bb04e) vradio_station_info_pane_t

0x9445,	// (0x000b4d18) vradio_tuning_pane

0x4347,	// (0x000afc1a) vradio_rocker_control_pane_g1

0xcff4,	// (0x000b88c7) vradio_rocker_control_pane_g2

0x4351,	// (0x000afc24) vradio_rocker_control_pane_g3

0x435b,	// (0x000afc2e) vradio_rocker_control_pane_g4

0x4365,	// (0x000afc38) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x000bb053) vradio_rocker_control_pane_g

0xa70f,	// (0x000b5fe2) vradio_frequency_info_pane_g1

0xa6e1,	// (0x000b5fb4) vradio_frequency_info_pane_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) vradio_frequency_info_pane_t1

0x436f,	// (0x000afc42) vradio_tuning_pane_g1

0x437a,	// (0x000afc4d) vradio_tuning_pane_t1

0xfe30,	// (0x000ab703) area_side_right_pane_ParamLimits

0xfe30,	// (0x000ab703) area_side_right_pane

0xc5e8,	// (0x000b7ebb) status_small_pane_g1

0xc5f0,	// (0x000b7ec3) status_small_pane_g2

0xc5f9,	// (0x000b7ecc) status_small_pane_g3

0xc602,	// (0x000b7ed5) status_small_pane_g4

0x0003,

0xf54c,	// (0x000bae1f) status_small_pane_g

0xc60b,	// (0x000b7ede) status_small_pane_t1

0x9467,	// (0x000b4d3a) main_video3_pane

0xcffc,	// (0x000b88cf) cams_zoom_vslider_pane

0xd004,	// (0x000b88d7) image3_wide_pane_ParamLimits

0xd004,	// (0x000b88d7) image3_wide_pane

0xd01e,	// (0x000b88f1) image3_wide_small_pane

0xd02a,	// (0x000b88fd) main_video3_pane_g1_ParamLimits

0xd02a,	// (0x000b88fd) main_video3_pane_g1

0xd046,	// (0x000b8919) main_video3_pane_g2_ParamLimits

0xd046,	// (0x000b8919) main_video3_pane_g2

0x0001,

0xf78b,	// (0x000bb05e) main_video3_pane_g_ParamLimits

0xf78b,	// (0x000bb05e) main_video3_pane_g

0xd062,	// (0x000b8935) main_video3_pane_t1_ParamLimits

0xd062,	// (0x000b8935) main_video3_pane_t1

0xd08d,	// (0x000b8960) main_video3_pane_t2_ParamLimits

0xd08d,	// (0x000b8960) main_video3_pane_t2

0xd0ba,	// (0x000b898d) main_video3_pane_t3_ParamLimits

0xd0ba,	// (0x000b898d) main_video3_pane_t3

0x0002,

0xf790,	// (0x000bb063) main_video3_pane_t_ParamLimits

0xf790,	// (0x000bb063) main_video3_pane_t

0xd0e7,	// (0x000b89ba) cams_zoom_vslider_pane_g1

0xd0f0,	// (0x000b89c3) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x000bb06a) cams_zoom_vslider_pane_g

0xd0f8,	// (0x000b89cb) small_slider_vertical_pane

0xa70f,	// (0x000b5fe2) small_slider_vertical_pane_g1

0xa70f,	// (0x000b5fe2) small_slider_vertical_pane_g2

0xd100,	// (0x000b89d3) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x000bb06f) small_slider_vertical_pane_g

0x9467,	// (0x000b4d3a) main_hwr_training_pane

0xd109,	// (0x000b89dc) hwr_training_instruct_pane_ParamLimits

0xd109,	// (0x000b89dc) hwr_training_instruct_pane

0x4389,	// (0x000afc5c) hwr_training_navi_pane_ParamLimits

0x4389,	// (0x000afc5c) hwr_training_navi_pane

0x43a8,	// (0x000afc7b) hwr_training_write_pane_ParamLimits

0x43a8,	// (0x000afc7b) hwr_training_write_pane

0x9445,	// (0x000b4d18) bg_frame_shadow_pane

0xd140,	// (0x000b8a13) hwr_training_write_pane_g1

0xd148,	// (0x000b8a1b) hwr_training_write_pane_g2

0xd150,	// (0x000b8a23) hwr_training_write_pane_g3

0xd158,	// (0x000b8a2b) hwr_training_write_pane_g4

0xd160,	// (0x000b8a33) hwr_training_write_pane_g5

0xd168,	// (0x000b8a3b) hwr_training_write_pane_g6

0xd170,	// (0x000b8a43) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x000bb076) hwr_training_write_pane_g

0x9da1,	// (0x000b5674) hwr_training_navi_pane_g1_ParamLimits

0x9da1,	// (0x000b5674) hwr_training_navi_pane_g1

0x9db3,	// (0x000b5686) hwr_training_navi_pane_g2_ParamLimits

0x9db3,	// (0x000b5686) hwr_training_navi_pane_g2

0x9dc5,	// (0x000b5698) hwr_training_navi_pane_g3_ParamLimits

0x9dc5,	// (0x000b5698) hwr_training_navi_pane_g3

0x9dd5,	// (0x000b56a8) hwr_training_navi_pane_g4_ParamLimits

0x9dd5,	// (0x000b56a8) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x000bb085) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x000bb085) hwr_training_navi_pane_g

0x9de2,	// (0x000b56b5) hwr_training_navi_pane_t1

0x43f0,	// (0x000afcc3) list_single_hwr_training_instruct_pane_ParamLimits

0x43f0,	// (0x000afcc3) list_single_hwr_training_instruct_pane

0xd178,	// (0x000b8a4b) list_single_hwr_training_instruct_pane_t1

0xc98d,	// (0x000b8260) bg_frame_shadow_pane_g1

0xd187,	// (0x000b8a5a) bg_frame_shadow_pane_g2

0xd18f,	// (0x000b8a62) bg_frame_shadow_pane_g3

0xd197,	// (0x000b8a6a) bg_frame_shadow_pane_g4

0xd19f,	// (0x000b8a72) bg_frame_shadow_pane_g5

0xd1a7,	// (0x000b8a7a) bg_frame_shadow_pane_g6

0xd1af,	// (0x000b8a82) bg_frame_shadow_pane_g7

0xa5ea,	// (0x000b5ebd) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x000bb090) bg_frame_shadow_pane_g

0x9467,	// (0x000b4d3a) main_video_tele_dialer_pane

0x440c,	// (0x000afcdf) aid_size_cell_video_keypad_ParamLimits

0x440c,	// (0x000afcdf) aid_size_cell_video_keypad

0x4426,	// (0x000afcf9) grid_video_dialer_keypad_pane_ParamLimits

0x4426,	// (0x000afcf9) grid_video_dialer_keypad_pane

0x4472,	// (0x000afd45) video_down_pane_cp_ParamLimits

0x4472,	// (0x000afd45) video_down_pane_cp

0x44a4,	// (0x000afd77) cell_video_dialer_keypad_pane_ParamLimits

0x44a4,	// (0x000afd77) cell_video_dialer_keypad_pane

0xd1b7,	// (0x000b8a8a) bg_button_pane_cp08_ParamLimits

0xd1b7,	// (0x000b8a8a) bg_button_pane_cp08

0x44ca,	// (0x000afd9d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x44ca,	// (0x000afd9d) cell_video_dialer_keypad_pane_g1

0x3db7,	// (0x000af68a) mup3_rocker2_pane_ParamLimits

0x3db7,	// (0x000af68a) mup3_rocker2_pane

0xa70f,	// (0x000b5fe2) mup3_rocker2_pane_g1

0x2ef3,	// (0x000ae7c6) main_dialer2_pane

0x9467,	// (0x000b4d3a) main_mp4_pane

0x9e0e,	// (0x000b56e1) main_mp4_pane_g1_ParamLimits

0x9e0e,	// (0x000b56e1) main_mp4_pane_g1

0x9e0e,	// (0x000b56e1) main_mp4_pane_g2_ParamLimits

0x9e0e,	// (0x000b56e1) main_mp4_pane_g2

0x4505,	// (0x000afdd8) main_mp4_pane_g3_ParamLimits

0x4505,	// (0x000afdd8) main_mp4_pane_g3

0x9e1c,	// (0x000b56ef) main_mp4_pane_g4_ParamLimits

0x9e1c,	// (0x000b56ef) main_mp4_pane_g4

0x9e4a,	// (0x000b571d) main_mp4_pane_g5_ParamLimits

0x9e4a,	// (0x000b571d) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x000bb0b0) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x000bb0b0) main_mp4_pane_g

0x9ebe,	// (0x000b5791) main_mp4_pane_t1_ParamLimits

0x9ebe,	// (0x000b5791) main_mp4_pane_t1

0x9f1a,	// (0x000b57ed) main_mp4_pane_t2_ParamLimits

0x9f1a,	// (0x000b57ed) main_mp4_pane_t2

0xd1c3,	// (0x000b8a96) main_mp4_pane_t3_ParamLimits

0xd1c3,	// (0x000b8a96) main_mp4_pane_t3

0x9f6c,	// (0x000b583f) main_mp4_pane_t4_ParamLimits

0x9f6c,	// (0x000b583f) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x000bb0c1) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x000bb0c1) main_mp4_pane_t

0x9fac,	// (0x000b587f) mp4_progress_pane_ParamLimits

0x9fac,	// (0x000b587f) mp4_progress_pane

0x9ff6,	// (0x000b58c9) mp4_rocker_pane_ParamLimits

0x9ff6,	// (0x000b58c9) mp4_rocker_pane

0xd1f1,	// (0x000b8ac4) mp4_progress_pane_t1

0xd20a,	// (0x000b8add) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x000bb0ca) mp4_progress_pane_t

0xd223,	// (0x000b8af6) mup_progress_pane_cp04

0xd3c3,	// (0x000b8c96) mp4_rocker_pane_g1

0x454f,	// (0x000afe22) aid_cell_size_keypad2_ParamLimits

0x454f,	// (0x000afe22) aid_cell_size_keypad2

0x4565,	// (0x000afe38) dialer2_ne_pane_ParamLimits

0x4565,	// (0x000afe38) dialer2_ne_pane

0x457d,	// (0x000afe50) grid_dialer2_keypad_pane_ParamLimits

0x457d,	// (0x000afe50) grid_dialer2_keypad_pane

0xc3d2,	// (0x000b7ca5) bg_popup_call_pane_cp07_ParamLimits

0xc3d2,	// (0x000b7ca5) bg_popup_call_pane_cp07

0x4599,	// (0x000afe6c) dialer2_ne_pane_t1_ParamLimits

0x4599,	// (0x000afe6c) dialer2_ne_pane_t1

0x45d9,	// (0x000afeac) cell_dialer2_keypad_pane_ParamLimits

0x45d9,	// (0x000afeac) cell_dialer2_keypad_pane

0xd248,	// (0x000b8b1b) bg_button_pane_pane_cp04_ParamLimits

0xd248,	// (0x000b8b1b) bg_button_pane_pane_cp04

0x45ff,	// (0x000afed2) cell_dialer2_keypad_pane_g1_ParamLimits

0x45ff,	// (0x000afed2) cell_dialer2_keypad_pane_g1

0x0c18,	// (0x000ac4eb) aid_placing_vt_set_content_ParamLimits

0x0c18,	// (0x000ac4eb) aid_placing_vt_set_content

0x0c3c,	// (0x000ac50f) aid_placing_vt_set_title_ParamLimits

0x0c3c,	// (0x000ac50f) aid_placing_vt_set_title

0x9467,	// (0x000b4d3a) main_image3_pane

0x46c5,	// (0x000aff98) area_side_right_pane_cp01_ParamLimits

0x46c5,	// (0x000aff98) area_side_right_pane_cp01

0x9e0e,	// (0x000b56e1) main_image3_pane_g1_ParamLimits

0x9e0e,	// (0x000b56e1) main_image3_pane_g1

0x46de,	// (0x000affb1) main_image3_pane_g2_ParamLimits

0x46de,	// (0x000affb1) main_image3_pane_g2

0x4706,	// (0x000affd9) main_image3_pane_g3_ParamLimits

0x4706,	// (0x000affd9) main_image3_pane_g3

0x4730,	// (0x000b0003) main_image3_pane_g4_ParamLimits

0x4730,	// (0x000b0003) main_image3_pane_g4

0x0003,

0xf806,	// (0x000bb0d9) main_image3_pane_g_ParamLimits

0xf806,	// (0x000bb0d9) main_image3_pane_g

0x475a,	// (0x000b002d) main_image3_pane_t1_ParamLimits

0x475a,	// (0x000b002d) main_image3_pane_t1

0x47b2,	// (0x000b0085) main_image3_pane_t2_ParamLimits

0x47b2,	// (0x000b0085) main_image3_pane_t2

0x4804,	// (0x000b00d7) main_image3_pane_t3_ParamLimits

0x4804,	// (0x000b00d7) main_image3_pane_t3

0x0003,

0xf80f,	// (0x000bb0e2) main_image3_pane_t_ParamLimits

0xf80f,	// (0x000bb0e2) main_image3_pane_t

0x9af6,	// (0x000b53c9) grid_sctrl_middle_pane_cp01_ParamLimits

0x9af6,	// (0x000b53c9) grid_sctrl_middle_pane_cp01

0x488c,	// (0x000b015f) cell_sctrl_middle_pane_cp01_ParamLimits

0x488c,	// (0x000b015f) cell_sctrl_middle_pane_cp01

0x48a9,	// (0x000b017c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x48a9,	// (0x000b017c) cell_sctrl_middle_pane_cp01_g1

0x9467,	// (0x000b4d3a) main_call4_pane

0x48be,	// (0x000b0191) aid_size_button_call4_ParamLimits

0x48be,	// (0x000b0191) aid_size_button_call4

0x48f1,	// (0x000b01c4) call4_windows_pane_ParamLimits

0x48f1,	// (0x000b01c4) call4_windows_pane

0x4910,	// (0x000b01e3) grid_call4_button_pane_ParamLimits

0x4910,	// (0x000b01e3) grid_call4_button_pane

0x4947,	// (0x000b021a) call4_windows_conf_pane

0x4960,	// (0x000b0233) popup_call4_audio_first_window_ParamLimits

0x4960,	// (0x000b0233) popup_call4_audio_first_window

0x49b0,	// (0x000b0283) popup_call4_audio_second_window_ParamLimits

0x49b0,	// (0x000b0283) popup_call4_audio_second_window

0x49c9,	// (0x000b029c) popup_call4_audio_wait_window_ParamLimits

0x49c9,	// (0x000b029c) popup_call4_audio_wait_window

0x49d7,	// (0x000b02aa) cell_call4_button_pane_ParamLimits

0x49d7,	// (0x000b02aa) cell_call4_button_pane

0x49fe,	// (0x000b02d1) bg_button_pane_cp09_ParamLimits

0x49fe,	// (0x000b02d1) bg_button_pane_cp09

0x4a0a,	// (0x000b02dd) cell_call4_button_pane_g1_ParamLimits

0x4a0a,	// (0x000b02dd) cell_call4_button_pane_g1

0x4a30,	// (0x000b0303) cell_call4_button_pane_t1_ParamLimits

0x4a30,	// (0x000b0303) cell_call4_button_pane_t1

0xd25c,	// (0x000b8b2f) popup_call4_audio_conf_window_ParamLimits

0xd25c,	// (0x000b8b2f) popup_call4_audio_conf_window

0x3e19,	// (0x000af6ec) mup3_progress_pane_t1_ParamLimits

0x3e38,	// (0x000af70b) mup3_progress_pane_t2_ParamLimits

0xccbb,	// (0x000b858e) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x000bafb7) mup3_progress_pane_t_ParamLimits

0xccd8,	// (0x000b85ab) mup_progress_pane_cp03_ParamLimits

0x433f,	// (0x000afc12) mup3_control_keys_pane_g4_copy1

0x9fda,	// (0x000b58ad) mp4_rocker2_pane_ParamLimits

0x9fda,	// (0x000b58ad) mp4_rocker2_pane

0xd276,	// (0x000b8b49) mp4_rocker2_pane_g1

0xd27e,	// (0x000b8b51) mp4_rocker2_pane_g2

0xa07e,	// (0x000b5951) mp4_rocker2_pane_g3

0xa086,	// (0x000b5959) mp4_rocker2_pane_g4

0xa08e,	// (0x000b5961) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x000bb0eb) mp4_rocker2_pane_g

0x9467,	// (0x000b4d3a) main_camera4_pane

0x9467,	// (0x000b4d3a) main_video4_pane

0x4440,	// (0x000afd13) main_video_tele_dialer_pane_t1_ParamLimits

0x4440,	// (0x000afd13) main_video_tele_dialer_pane_t1

0x4459,	// (0x000afd2c) main_video_tele_dialer_pane_t2_ParamLimits

0x4459,	// (0x000afd2c) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x000bb0a1) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x000bb0a1) main_video_tele_dialer_pane_t

0x4a6e,	// (0x000b0341) cam4_autofocus_pane_ParamLimits

0x4a6e,	// (0x000b0341) cam4_autofocus_pane

0x4a84,	// (0x000b0357) cam4_image_uncrop_pane_ParamLimits

0x4a84,	// (0x000b0357) cam4_image_uncrop_pane

0x4a9d,	// (0x000b0370) cam4_indicators_pane_ParamLimits

0x4a9d,	// (0x000b0370) cam4_indicators_pane

0x4acd,	// (0x000b03a0) main_camera4_pane_g1_ParamLimits

0x4acd,	// (0x000b03a0) main_camera4_pane_g1

0x4adf,	// (0x000b03b2) main_camera4_pane_g2_ParamLimits

0x4adf,	// (0x000b03b2) main_camera4_pane_g2

0x4af2,	// (0x000b03c5) main_camera4_pane_g3_ParamLimits

0x4af2,	// (0x000b03c5) main_camera4_pane_g3

0x4b05,	// (0x000b03d8) main_camera4_pane_g4_ParamLimits

0x4b05,	// (0x000b03d8) main_camera4_pane_g4

0x4b18,	// (0x000b03eb) main_camera4_pane_g5_ParamLimits

0x4b18,	// (0x000b03eb) main_camera4_pane_g5

0x0005,

0xf823,	// (0x000bb0f6) main_camera4_pane_g_ParamLimits

0xf823,	// (0x000bb0f6) main_camera4_pane_g

0x4b3c,	// (0x000b040f) main_camera4_pane_t1_ParamLimits

0x4b3c,	// (0x000b040f) main_camera4_pane_t1

0xd3e1,	// (0x000b8cb4) bg_tb_trans_pane_cp06

0xa0bc,	// (0x000b598f) cam4_indicators_pane_g1

0xa0cd,	// (0x000b59a0) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x000bb111) cam4_indicators_pane_g

0xa0e5,	// (0x000b59b8) cam4_indicators_pane_t1

0x4ba0,	// (0x000b0473) main_video4_pane_g1_ParamLimits

0x4ba0,	// (0x000b0473) main_video4_pane_g1

0x4baf,	// (0x000b0482) main_video4_pane_g2_ParamLimits

0x4baf,	// (0x000b0482) main_video4_pane_g2

0x4bbf,	// (0x000b0492) main_video4_pane_g3_ParamLimits

0x4bbf,	// (0x000b0492) main_video4_pane_g3

0x4bcf,	// (0x000b04a2) main_video4_pane_g4_ParamLimits

0x4bcf,	// (0x000b04a2) main_video4_pane_g4

0x0004,

0xf845,	// (0x000bb118) main_video4_pane_g_ParamLimits

0xf845,	// (0x000bb118) main_video4_pane_g

0x4bef,	// (0x000b04c2) vid4_indicators_pane_ParamLimits

0x4bef,	// (0x000b04c2) vid4_indicators_pane

0x4c19,	// (0x000b04ec) video4_image_uncrop_cif_pane_ParamLimits

0x4c19,	// (0x000b04ec) video4_image_uncrop_cif_pane

0x4c33,	// (0x000b0506) video4_image_uncrop_nhd_pane_ParamLimits

0x4c33,	// (0x000b0506) video4_image_uncrop_nhd_pane

0x4a84,	// (0x000b0357) video4_image_uncrop_vga_pane_ParamLimits

0x4a84,	// (0x000b0357) video4_image_uncrop_vga_pane

0x9459,	// (0x000b4d2c) bg_tb_trans_pane_cp07

0xa113,	// (0x000b59e6) vid4_indicators_pane_g1

0xa129,	// (0x000b59fc) vid4_indicators_pane_g2

0xa13d,	// (0x000b5a10) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x000bb123) vid4_indicators_pane_g

0xa16e,	// (0x000b5a41) vid4_indicators_pane_t1

0x4c4a,	// (0x000b051d) cam4_autofocus_pane_g1

0x4c52,	// (0x000b0525) cam4_autofocus_pane_g2

0x4c5a,	// (0x000b052d) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x000bb12e) cam4_autofocus_pane_g

0x4c62,	// (0x000b0535) cam4_autofocus_pane_g3_copy1

0x4488,	// (0x000afd5b) video_down_pane_cp_t1

0x4496,	// (0x000afd69) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x000bb0a6) video_down_pane_cp_t

0x9459,	// (0x000b4d2c) popup_vitu2_window_ParamLimits

0x9459,	// (0x000b4d2c) popup_vitu2_window

0x4c6a,	// (0x000b053d) aid_size_cell2_itu2_ParamLimits

0x4c6a,	// (0x000b053d) aid_size_cell2_itu2

0x4c90,	// (0x000b0563) aid_size_cell_itu2_ParamLimits

0x4c90,	// (0x000b0563) aid_size_cell_itu2

0x4cee,	// (0x000b05c1) bg_popup_window_pane_cp09_ParamLimits

0x4cee,	// (0x000b05c1) bg_popup_window_pane_cp09

0x4cfc,	// (0x000b05cf) field_vitu2_entry_pane_ParamLimits

0x4cfc,	// (0x000b05cf) field_vitu2_entry_pane

0x4d24,	// (0x000b05f7) grid_vitu2_function_pane_ParamLimits

0x4d24,	// (0x000b05f7) grid_vitu2_function_pane

0x4d75,	// (0x000b0648) grid_vitu2_itu_pane_ParamLimits

0x4d75,	// (0x000b0648) grid_vitu2_itu_pane

0x4e05,	// (0x000b06d8) cell_vitu2_itu_pane_ParamLimits

0x4e05,	// (0x000b06d8) cell_vitu2_itu_pane

0x4e33,	// (0x000b0706) cell_vitu2_function_pane_ParamLimits

0x4e33,	// (0x000b0706) cell_vitu2_function_pane

0xd286,	// (0x000b8b59) bg_popup_call_pane_cp08_ParamLimits

0xd286,	// (0x000b8b59) bg_popup_call_pane_cp08

0xd29d,	// (0x000b8b70) field_vitu2_entry_pane_g1

0xd2a9,	// (0x000b8b7c) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x000bb135) field_vitu2_entry_pane_g

0xa185,	// (0x000b5a58) field_vitu2_entry_pane_t1_ParamLimits

0xa185,	// (0x000b5a58) field_vitu2_entry_pane_t1

0xa1b4,	// (0x000b5a87) field_vitu2_entry_pane_t2_ParamLimits

0xa1b4,	// (0x000b5a87) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x000bb13c) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x000bb13c) field_vitu2_entry_pane_t

0x4e77,	// (0x000b074a) bg_button_pane_cp010_ParamLimits

0x4e77,	// (0x000b074a) bg_button_pane_cp010

0x4e85,	// (0x000b0758) cell_vitu2_itu_pane_g1

0x4eab,	// (0x000b077e) cell_vitu2_itu_pane_t1_ParamLimits

0x4eab,	// (0x000b077e) cell_vitu2_itu_pane_t1

0xfc97,	// (0x000ab56a) cell_vitu2_itu_pane_t2_ParamLimits

0xfc97,	// (0x000ab56a) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x000bb146) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x000bb146) cell_vitu2_itu_pane_t

0x9459,	// (0x000b4d2c) bg_button_pane_cp011

0x4f09,	// (0x000b07dc) cell_vitu2_function_pane_g1

0x9467,	// (0x000b4d3a) main_myfav_hc_pane

0x4854,	// (0x000b0127) popup_image3_note_pane_ParamLimits

0x4854,	// (0x000b0127) popup_image3_note_pane

0x4870,	// (0x000b0143) popup_image3_tool_bar_pane_ParamLimits

0x4870,	// (0x000b0143) popup_image3_tool_bar_pane

0xfd25,	// (0x000ab5f8) cell_vitu2_itu_pane_t3_ParamLimits

0xfd25,	// (0x000ab5f8) cell_vitu2_itu_pane_t3

0x9445,	// (0x000b4d18) bg_popup_trans_pane

0xd2bd,	// (0x000b8b90) grid_image3_tool_bar_pane

0xd2c7,	// (0x000b8b9a) bg_popup_trans_pane_g1

0xa933,	// (0x000b6206) bg_popup_trans_pane_g2

0xd2cf,	// (0x000b8ba2) bg_popup_trans_pane_g3

0xd2d7,	// (0x000b8baa) bg_popup_trans_pane_g4

0xd2df,	// (0x000b8bb2) bg_popup_trans_pane_g5

0xd2e7,	// (0x000b8bba) bg_popup_trans_pane_g6

0xd2ef,	// (0x000b8bc2) bg_popup_trans_pane_g7

0xd2f7,	// (0x000b8bca) bg_popup_trans_pane_g8

0xa913,	// (0x000b61e6) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x000bb14d) bg_popup_trans_pane_g

0xd2ff,	// (0x000b8bd2) cell_image3_tool_bar_pane_ParamLimits

0xd2ff,	// (0x000b8bd2) cell_image3_tool_bar_pane

0xa70f,	// (0x000b5fe2) cell_image3_tool_bar_pane_g1

0x9445,	// (0x000b4d18) bg_popup_trans_pane_cp1

0xd315,	// (0x000b8be8) popup_image3_note_pane_t1

0xd323,	// (0x000b8bf6) popup_image3_note_pane_t2

0xd331,	// (0x000b8c04) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x000bb160) popup_image3_note_pane_t

0xd341,	// (0x000b8c14) popup_image3_note_pane_t3_copy1

0x4f1d,	// (0x000b07f0) bg_myfav_hc_instruction_pane_ParamLimits

0x4f1d,	// (0x000b07f0) bg_myfav_hc_instruction_pane

0x4f35,	// (0x000b0808) cell_myfav_contact_pane_ParamLimits

0x4f35,	// (0x000b0808) cell_myfav_contact_pane

0x4f51,	// (0x000b0824) cell_myfav_contact_pane_cp1_ParamLimits

0x4f51,	// (0x000b0824) cell_myfav_contact_pane_cp1

0x4f69,	// (0x000b083c) cell_myfav_contact_pane_cp2_ParamLimits

0x4f69,	// (0x000b083c) cell_myfav_contact_pane_cp2

0x4f81,	// (0x000b0854) cell_myfav_contact_pane_cp3_ParamLimits

0x4f81,	// (0x000b0854) cell_myfav_contact_pane_cp3

0x4f98,	// (0x000b086b) cell_myfav_contact_pane_cp4_ParamLimits

0x4f98,	// (0x000b086b) cell_myfav_contact_pane_cp4

0x4fb0,	// (0x000b0883) cell_myfav_contact_pane_cp5_ParamLimits

0x4fb0,	// (0x000b0883) cell_myfav_contact_pane_cp5

0x4fc4,	// (0x000b0897) cell_myfav_contact_pane_cp6_ParamLimits

0x4fc4,	// (0x000b0897) cell_myfav_contact_pane_cp6

0x4fda,	// (0x000b08ad) cell_myfav_contact_pane_cp7_ParamLimits

0x4fda,	// (0x000b08ad) cell_myfav_contact_pane_cp7

0xd34f,	// (0x000b8c22) listscroll_gen_pane_cp05

0x4ff2,	// (0x000b08c5) main_myfav_hc_pane_g1_ParamLimits

0x4ff2,	// (0x000b08c5) main_myfav_hc_pane_g1

0x500c,	// (0x000b08df) main_myfav_hc_pane_g2_ParamLimits

0x500c,	// (0x000b08df) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x000bb167) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x000bb167) main_myfav_hc_pane_g

0x5040,	// (0x000b0913) main_myfav_hc_pane_t1_ParamLimits

0x5040,	// (0x000b0913) main_myfav_hc_pane_t1

0xd358,	// (0x000b8c2b) main_myfav_hc_pane_t2_ParamLimits

0xd358,	// (0x000b8c2b) main_myfav_hc_pane_t2

0xd36a,	// (0x000b8c3d) main_myfav_hc_pane_t3_ParamLimits

0xd36a,	// (0x000b8c3d) main_myfav_hc_pane_t3

0x5057,	// (0x000b092a) main_myfav_hc_pane_t4_ParamLimits

0x5057,	// (0x000b092a) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x000bb16e) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x000bb16e) main_myfav_hc_pane_t

0xa70f,	// (0x000b5fe2) bg_myfav_hc_instruction_pane_g1

0xd37c,	// (0x000b8c4f) cell_myfav_contact_pane_g1_ParamLimits

0xd37c,	// (0x000b8c4f) cell_myfav_contact_pane_g1

0xd37c,	// (0x000b8c4f) cell_myfav_contact_pane_g2_ParamLimits

0xd37c,	// (0x000b8c4f) cell_myfav_contact_pane_g2

0xd388,	// (0x000b8c5b) cell_myfav_contact_pane_g3_ParamLimits

0xd388,	// (0x000b8c5b) cell_myfav_contact_pane_g3

0xa4ce,	// (0x000b5da1) cell_myfav_contact_pane_g4_ParamLimits

0xa4ce,	// (0x000b5da1) cell_myfav_contact_pane_g4

0xd395,	// (0x000b8c68) cell_myfav_contact_pane_g5_ParamLimits

0xd395,	// (0x000b8c68) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x000bb179) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x000bb179) cell_myfav_contact_pane_g

0x5026,	// (0x000b08f9) main_myfav_hc_pane_g3_ParamLimits

0x5026,	// (0x000b08f9) main_myfav_hc_pane_g3

0xff63,	// (0x000ab836) popup_adpt_find_window

0x5081,	// (0x000b0954) afind_page_pane_ParamLimits

0x5081,	// (0x000b0954) afind_page_pane

0x5097,	// (0x000b096a) aid_size_cell_afind_ParamLimits

0x5097,	// (0x000b096a) aid_size_cell_afind

0x50b5,	// (0x000b0988) bg_popup_sub_pane_cp09_ParamLimits

0x50b5,	// (0x000b0988) bg_popup_sub_pane_cp09

0x50c7,	// (0x000b099a) find_pane_cp01_ParamLimits

0x50c7,	// (0x000b099a) find_pane_cp01

0xd3a1,	// (0x000b8c74) grid_afind_control_pane_ParamLimits

0xd3a1,	// (0x000b8c74) grid_afind_control_pane

0x50db,	// (0x000b09ae) grid_afind_pane_ParamLimits

0x50db,	// (0x000b09ae) grid_afind_pane

0x50fd,	// (0x000b09d0) cell_afind_pane_ParamLimits

0x50fd,	// (0x000b09d0) cell_afind_pane

0xa70f,	// (0x000b5fe2) afind_page_pane_g1

0x5166,	// (0x000b0a39) afind_page_pane_g2

0x516e,	// (0x000b0a41) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x000bb184) afind_page_pane_g

0x5176,	// (0x000b0a49) afind_page_pane_t1

0xd401,	// (0x000b8cd4) cell_afind_grid_control_pane_ParamLimits

0xd401,	// (0x000b8cd4) cell_afind_grid_control_pane

0xd248,	// (0x000b8b1b) bg_button_pane_cp69_ParamLimits

0xd248,	// (0x000b8b1b) bg_button_pane_cp69

0x5184,	// (0x000b0a57) cell_afind_pane_g1_ParamLimits

0x5184,	// (0x000b0a57) cell_afind_pane_g1

0x5191,	// (0x000b0a64) cell_afind_pane_t1_ParamLimits

0x5191,	// (0x000b0a64) cell_afind_pane_t1

0xa719,	// (0x000b5fec) bg_button_pane_cp72

0xd410,	// (0x000b8ce3) cell_afind_grid_control_pane_g1

0x2940,	// (0x000ae213) aid_image_placing_area_ParamLimits

0x2940,	// (0x000ae213) aid_image_placing_area

0xa4c0,	// (0x000b5d93) field_vitu_entry_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) field_vitu_entry_pane_g1

0xa4c0,	// (0x000b5d93) field_vitu_entry_pane_g2_ParamLimits

0xa4c0,	// (0x000b5d93) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x000baa94) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x000baa94) field_vitu_entry_pane_g

0xcfd8,	// (0x000b88ab) cell_vitu_itu_pane_g1_ParamLimits

0xcfbb,	// (0x000b888e) cell_vitu_itu_pane_t3_ParamLimits

0xcfbb,	// (0x000b888e) cell_vitu_itu_pane_t3

0xd1f1,	// (0x000b8ac4) mp4_progress_pane_t1_ParamLimits

0xd20a,	// (0x000b8add) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x000bb0ca) mp4_progress_pane_t_ParamLimits

0xd223,	// (0x000b8af6) mup_progress_pane_cp04_ParamLimits

0x506b,	// (0x000b093e) main_myfav_hc_pane_t5_ParamLimits

0x506b,	// (0x000b093e) main_myfav_hc_pane_t5

0xfde7,	// (0x000ab6ba) aid_zoom_text_primary

0xff63,	// (0x000ab836) popup_adpt_find_window_ParamLimits

0x9459,	// (0x000b4d2c) main_cam_set_pane

0x4ab6,	// (0x000b0389) cam4_zoom_pane_ParamLimits

0x4ab6,	// (0x000b0389) cam4_zoom_pane

0x51a3,	// (0x000b0a76) main_cam_set_pane_g1_ParamLimits

0x51a3,	// (0x000b0a76) main_cam_set_pane_g1

0x51b1,	// (0x000b0a84) main_cam_set_pane_g2_ParamLimits

0x51b1,	// (0x000b0a84) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x000bb18b) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x000bb18b) main_cam_set_pane_g

0x51d2,	// (0x000b0aa5) main_cam_set_pane_t1_ParamLimits

0x51d2,	// (0x000b0aa5) main_cam_set_pane_t1

0x51ed,	// (0x000b0ac0) main_cset_listscroll_pane_ParamLimits

0x51ed,	// (0x000b0ac0) main_cset_listscroll_pane

0x5215,	// (0x000b0ae8) main_cset_slider_pane_ParamLimits

0x5215,	// (0x000b0ae8) main_cset_slider_pane

0xd421,	// (0x000b8cf4) main_cset_list_pane_ParamLimits

0xd421,	// (0x000b8cf4) main_cset_list_pane

0xd431,	// (0x000b8d04) scroll_pane_cp028

0x523f,	// (0x000b0b12) aid_area_touch_slider

0x525b,	// (0x000b0b2e) cset_slider_pane

0x527e,	// (0x000b0b51) main_cset_slider_pane_g1

0x5293,	// (0x000b0b66) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x000bb190) main_cset_slider_pane_g

0xd46a,	// (0x000b8d3d) main_cset_slider_pane_t1

0x5355,	// (0x000b0c28) main_cset_slider_pane_t2

0x536f,	// (0x000b0c42) main_cset_slider_pane_t3

0x5389,	// (0x000b0c5c) main_cset_slider_pane_t4

0x53a3,	// (0x000b0c76) main_cset_slider_pane_t5

0x53c1,	// (0x000b0c94) main_cset_slider_pane_t6

0x53d6,	// (0x000b0ca9) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x000bb1b5) main_cset_slider_pane_t

0x54e2,	// (0x000b0db5) cset_list_set_pane_ParamLimits

0x54e2,	// (0x000b0db5) cset_list_set_pane

0xd504,	// (0x000b8dd7) aid_position_infowindow_above

0xd50c,	// (0x000b8ddf) aid_position_infowindow_below

0x54f6,	// (0x000b0dc9) cset_list_set_pane_g1_ParamLimits

0x54f6,	// (0x000b0dc9) cset_list_set_pane_g1

0x5502,	// (0x000b0dd5) cset_list_set_pane_g3_ParamLimits

0x5502,	// (0x000b0dd5) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x000bb1d4) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x000bb1d4) cset_list_set_pane_g

0x5511,	// (0x000b0de4) cset_list_set_pane_t1_ParamLimits

0x5511,	// (0x000b0de4) cset_list_set_pane_t1

0x9af6,	// (0x000b53c9) list_highlight_pane_cp021_ParamLimits

0x9af6,	// (0x000b53c9) list_highlight_pane_cp021

0xb165,	// (0x000b6a38) cset_slider_pane_g1

0xb177,	// (0x000b6a4a) cset_slider_pane_g2

0xb16e,	// (0x000b6a41) cset_slider_pane_g3

0x0002,

0xf906,	// (0x000bb1d9) cset_slider_pane_g

0xae0f,	// (0x000b66e2) aid_area_touch_cam4_zoom

0x5526,	// (0x000b0df9) cam4_zoom_cont_pane

0x552e,	// (0x000b0e01) cam4_zoom_pane_g1

0x5536,	// (0x000b0e09) cam4_zoom_pane_g2

0x553e,	// (0x000b0e11) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x000bb1e0) cam4_zoom_pane_g

0xa1d1,	// (0x000b5aa4) cam4_zoom_cont_pane_g1

0xa1da,	// (0x000b5aad) cam4_zoom_cont_pane_g2

0xa1e3,	// (0x000b5ab6) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x000bb1e7) cam4_zoom_cont_pane_g

0x48dc,	// (0x000b01af) call4_image_pane_ParamLimits

0x48dc,	// (0x000b01af) call4_image_pane

0x4947,	// (0x000b021a) call4_windows_conf_pane_ParamLimits

0x498e,	// (0x000b0261) popup_call4_audio_in_window_ParamLimits

0x498e,	// (0x000b0261) popup_call4_audio_in_window

0x9445,	// (0x000b4d18) bg_popup_call2_act_pane_cp02

0xd254,	// (0x000b8b27) call4_list_conf_pane

0xa70f,	// (0x000b5fe2) call4_image_pane_g1

0xa70f,	// (0x000b5fe2) call4_image_pane_g2

0x0001,

0xf398,	// (0x000bac6b) call4_image_pane_g

0xd514,	// (0x000b8de7) list_single_graphic_popup_conf4_pane_ParamLimits

0xd514,	// (0x000b8de7) list_single_graphic_popup_conf4_pane

0x9445,	// (0x000b4d18) list_highlight_pane_cp022

0xd529,	// (0x000b8dfc) list_single_graphic_popup_conf4_pane_g1

0xae68,	// (0x000b673b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x000bb1ee) list_single_graphic_popup_conf4_pane_g

0xd531,	// (0x000b8e04) list_single_graphic_popup_conf4_pane_t1

0x0d53,	// (0x000ac626) popup_vtel_slider_window_ParamLimits

0x0d53,	// (0x000ac626) popup_vtel_slider_window

0xd236,	// (0x000b8b09) dialer2_ne_pane_t2_ParamLimits

0xd236,	// (0x000b8b09) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x000bb0cf) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x000bb0cf) dialer2_ne_pane_t

0xc3d2,	// (0x000b7ca5) bg_popup_sub_pane_cp010_ParamLimits

0xc3d2,	// (0x000b7ca5) bg_popup_sub_pane_cp010

0x5546,	// (0x000b0e19) popup_vtel_slider_window_g1_ParamLimits

0x5546,	// (0x000b0e19) popup_vtel_slider_window_g1

0x5559,	// (0x000b0e2c) popup_vtel_slider_window_g2_ParamLimits

0x5559,	// (0x000b0e2c) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x000bb1f3) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x000bb1f3) popup_vtel_slider_window_g

0x55af,	// (0x000b0e82) vtel_slider_pane_ParamLimits

0x55af,	// (0x000b0e82) vtel_slider_pane

0x55d1,	// (0x000b0ea4) vtel_slider_pane_g1_ParamLimits

0x55d1,	// (0x000b0ea4) vtel_slider_pane_g1

0x55e5,	// (0x000b0eb8) vtel_slider_pane_g2_ParamLimits

0x55e5,	// (0x000b0eb8) vtel_slider_pane_g2

0x55fd,	// (0x000b0ed0) vtel_slider_pane_g3_ParamLimits

0x55fd,	// (0x000b0ed0) vtel_slider_pane_g3

0x55d1,	// (0x000b0ea4) vtel_slider_pane_g4_ParamLimits

0x55d1,	// (0x000b0ea4) vtel_slider_pane_g4

0x5613,	// (0x000b0ee6) vtel_slider_pane_g5_ParamLimits

0x5613,	// (0x000b0ee6) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x000bb1fc) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x000bb1fc) vtel_slider_pane_g

0x9459,	// (0x000b4d2c) main_gallery2_pane

0x4cbc,	// (0x000b058f) aid_size_row_itut2_dropdow_list_ParamLimits

0x4cbc,	// (0x000b058f) aid_size_row_itut2_dropdow_list

0x4d4c,	// (0x000b061f) grid_vitu2_function_top_pane_ParamLimits

0x4d4c,	// (0x000b061f) grid_vitu2_function_top_pane

0x4db0,	// (0x000b0683) popup_vitu2_dropdown_list_window_ParamLimits

0x4db0,	// (0x000b0683) popup_vitu2_dropdown_list_window

0x4dd7,	// (0x000b06aa) popup_vitu2_match_list_window

0x5629,	// (0x000b0efc) cell_vitu2_function_top_pane_ParamLimits

0x5629,	// (0x000b0efc) cell_vitu2_function_top_pane

0x5643,	// (0x000b0f16) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5643,	// (0x000b0f16) cell_vitu2_function_top_pane_cp01

0x565f,	// (0x000b0f32) cell_vitu2_function_top_wide_pane_ParamLimits

0x565f,	// (0x000b0f32) cell_vitu2_function_top_wide_pane

0x9459,	// (0x000b4d2c) bg_button_pane_cp012

0x567d,	// (0x000b0f50) cell_vitu2_function_top_pane_g1

0xa1ec,	// (0x000b5abf) bg_button_pane_cp013_ParamLimits

0xa1ec,	// (0x000b5abf) bg_button_pane_cp013

0x5691,	// (0x000b0f64) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5691,	// (0x000b0f64) cell_vitu2_function_top_wide_pane_g1

0x9459,	// (0x000b4d2c) bg_popup_sub_pane_cp20

0x56a9,	// (0x000b0f7c) list_vitu2_match_list_pane

0xd2c7,	// (0x000b8b9a) bg_popup_sub_pane_cp20_g1

0xd2cf,	// (0x000b8ba2) bg_popup_sub_pane_cp20_g2

0xa933,	// (0x000b6206) bg_popup_sub_pane_cp20_g3

0xd2d7,	// (0x000b8baa) bg_popup_sub_pane_cp20_g4

0xa913,	// (0x000b61e6) bg_popup_sub_pane_cp20_g5

0xd547,	// (0x000b8e1a) bg_popup_sub_pane_cp20_g6

0xd2e7,	// (0x000b8bba) bg_popup_sub_pane_cp20_g7

0xd2ef,	// (0x000b8bc2) bg_popup_sub_pane_cp20_g8

0xd2f7,	// (0x000b8bca) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x000bb207) bg_popup_sub_pane_cp20_g

0xa208,	// (0x000b5adb) list_vitu2_match_list_item_pane_ParamLimits

0xa208,	// (0x000b5adb) list_vitu2_match_list_item_pane

0xa21a,	// (0x000b5aed) list_vitu2_match_list_item_pane_t1

0x9467,	// (0x000b4d3a) bg_popup_sub_pane_cp21

0xa6d9,	// (0x000b5fac) grid_vitu2_dropdown_list_pane

0x56c1,	// (0x000b0f94) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x56c1,	// (0x000b0f94) cell_vitu2_dropdown_list_char_pane

0x56e3,	// (0x000b0fb6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x56e3,	// (0x000b0fb6) cell_vitu2_dropdown_list_ctrl_pane

0xd54f,	// (0x000b8e22) cell_vitu2_dropdown_list_char_pane_g1

0xd558,	// (0x000b8e2b) cell_vitu2_dropdown_list_char_pane_g2

0xd561,	// (0x000b8e34) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x000bb21a) cell_vitu2_dropdown_list_char_pane_g

0x570d,	// (0x000b0fe0) cell_vitu2_dropdown_list_char_pane_t1

0x571b,	// (0x000b0fee) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x571b,	// (0x000b0fee) cell_vitu2_dropdown_list_ctrl_pane_g1

0x572b,	// (0x000b0ffe) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x572b,	// (0x000b0ffe) cell_vitu2_dropdown_list_ctrl_pane_g2

0x573c,	// (0x000b100f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x573c,	// (0x000b100f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x574c,	// (0x000b101f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x574c,	// (0x000b101f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd3e1,	// (0x000b8cb4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd3e1,	// (0x000b8cb4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x000bb221) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x000bb221) cell_vitu2_dropdown_list_ctrl_pane_g

0x5768,	// (0x000b103b) aid_size_cell_gallery2_ParamLimits

0x5768,	// (0x000b103b) aid_size_cell_gallery2

0x5786,	// (0x000b1059) grid_gallery2_pane_ParamLimits

0x5786,	// (0x000b1059) grid_gallery2_pane

0x57a0,	// (0x000b1073) scroll_pane_cp029_ParamLimits

0x57a0,	// (0x000b1073) scroll_pane_cp029

0x57b1,	// (0x000b1084) cell_gallery2_pane_ParamLimits

0x57b1,	// (0x000b1084) cell_gallery2_pane

0xd56a,	// (0x000b8e3d) cell_gallery2_pane_g2

0x5815,	// (0x000b10e8) cell_gallery2_pane_g3

0xd572,	// (0x000b8e45) cell_gallery2_pane_g4

0xd57a,	// (0x000b8e4d) cell_gallery2_pane_g5

0xa6d9,	// (0x000b5fac) grid_highlight_pane_cp10

0x4dd7,	// (0x000b06aa) popup_vitu2_match_list_window_ParamLimits

0x4dee,	// (0x000b06c1) popup_vitu2_query_window_ParamLimits

0x4dee,	// (0x000b06c1) popup_vitu2_query_window

0x9467,	// (0x000b4d3a) bg_vitu2_candi_button_pane

0xd54f,	// (0x000b8e22) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd558,	// (0x000b8e2b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd561,	// (0x000b8e34) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x581d,	// (0x000b10f0) bg_button_pane_cp015

0x5834,	// (0x000b1107) bg_button_pane_cp016

0x5840,	// (0x000b1113) bg_button_pane_cp017

0xb433,	// (0x000b6d06) bg_popup_sub_pane_cp22

0xd582,	// (0x000b8e55) popup_vitu2_query_window_g1

0x5881,	// (0x000b1154) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x000bb22c) popup_vitu2_query_window_g

0x58a7,	// (0x000b117a) popup_vitu2_query_window_t1_ParamLimits

0x58a7,	// (0x000b117a) popup_vitu2_query_window_t1

0x58dc,	// (0x000b11af) popup_vitu2_query_window_t2_ParamLimits

0x58dc,	// (0x000b11af) popup_vitu2_query_window_t2

0x58ee,	// (0x000b11c1) popup_vitu2_query_window_t3_ParamLimits

0x58ee,	// (0x000b11c1) popup_vitu2_query_window_t3

0x5916,	// (0x000b11e9) popup_vitu2_query_window_t4_ParamLimits

0x5916,	// (0x000b11e9) popup_vitu2_query_window_t4

0x592a,	// (0x000b11fd) popup_vitu2_query_window_t5_ParamLimits

0x592a,	// (0x000b11fd) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x000bb233) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x000bb233) popup_vitu2_query_window_t

0xd419,	// (0x000b8cec) main_cset_text_pane

0x523f,	// (0x000b0b12) aid_area_touch_slider_ParamLimits

0x525b,	// (0x000b0b2e) cset_slider_pane_ParamLimits

0x527e,	// (0x000b0b51) main_cset_slider_pane_g1_ParamLimits

0x5293,	// (0x000b0b66) main_cset_slider_pane_g2_ParamLimits

0xd43a,	// (0x000b8d0d) main_cset_slider_pane_g3_ParamLimits

0xd43a,	// (0x000b8d0d) main_cset_slider_pane_g3

0x52a8,	// (0x000b0b7b) main_cset_slider_pane_g4_ParamLimits

0x52a8,	// (0x000b0b7b) main_cset_slider_pane_g4

0x52b7,	// (0x000b0b8a) main_cset_slider_pane_g5_ParamLimits

0x52b7,	// (0x000b0b8a) main_cset_slider_pane_g5

0x52c5,	// (0x000b0b98) main_cset_slider_pane_g6_ParamLimits

0x52c5,	// (0x000b0b98) main_cset_slider_pane_g6

0xf8bd,	// (0x000bb190) main_cset_slider_pane_g_ParamLimits

0xd46a,	// (0x000b8d3d) main_cset_slider_pane_t1_ParamLimits

0x5355,	// (0x000b0c28) main_cset_slider_pane_t2_ParamLimits

0x536f,	// (0x000b0c42) main_cset_slider_pane_t3_ParamLimits

0x5389,	// (0x000b0c5c) main_cset_slider_pane_t4_ParamLimits

0x53a3,	// (0x000b0c76) main_cset_slider_pane_t5_ParamLimits

0x53c1,	// (0x000b0c94) main_cset_slider_pane_t6_ParamLimits

0x53d6,	// (0x000b0ca9) main_cset_slider_pane_t7_ParamLimits

0x5404,	// (0x000b0cd7) main_cset_slider_pane_t8_ParamLimits

0x5404,	// (0x000b0cd7) main_cset_slider_pane_t8

0x542c,	// (0x000b0cff) main_cset_slider_pane_t9_ParamLimits

0x542c,	// (0x000b0cff) main_cset_slider_pane_t9

0x5454,	// (0x000b0d27) main_cset_slider_pane_t10_ParamLimits

0x5454,	// (0x000b0d27) main_cset_slider_pane_t10

0x547c,	// (0x000b0d4f) main_cset_slider_pane_t11_ParamLimits

0x547c,	// (0x000b0d4f) main_cset_slider_pane_t11

0x54a6,	// (0x000b0d79) main_cset_slider_pane_t12_ParamLimits

0x54a6,	// (0x000b0d79) main_cset_slider_pane_t12

0x54c3,	// (0x000b0d96) main_cset_slider_pane_t13_ParamLimits

0x54c3,	// (0x000b0d96) main_cset_slider_pane_t13

0xf8e2,	// (0x000bb1b5) main_cset_slider_pane_t_ParamLimits

0x9445,	// (0x000b4d18) bg_popup_sub_pane_cp011

0xd58e,	// (0x000b8e61) main_cset_text_pane_g1

0xd596,	// (0x000b8e69) main_cset_text_pane_t1

0xd5a4,	// (0x000b8e77) main_cset_text_pane_t2

0xd5b2,	// (0x000b8e85) main_cset_text_pane_t3

0xd5c0,	// (0x000b8e93) main_cset_text_pane_t4

0xd5ce,	// (0x000b8ea1) main_cset_text_pane_t5

0xd5dc,	// (0x000b8eaf) main_cset_text_pane_t6

0xd5ea,	// (0x000b8ebd) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x000bb242) main_cset_text_pane_t

0x9467,	// (0x000b4d3a) main_cam4_burst_pane

0x9467,	// (0x000b4d3a) main_cam5_pane

0xd3ef,	// (0x000b8cc2) bg_button_pane_cp019

0xd3f8,	// (0x000b8ccb) bg_button_pane_cp020

0xd446,	// (0x000b8d19) main_cset_slider_pane_g7_ParamLimits

0xd446,	// (0x000b8d19) main_cset_slider_pane_g7

0xd452,	// (0x000b8d25) main_cset_slider_pane_g8_ParamLimits

0xd452,	// (0x000b8d25) main_cset_slider_pane_g8

0x52d9,	// (0x000b0bac) main_cset_slider_pane_g9_ParamLimits

0x52d9,	// (0x000b0bac) main_cset_slider_pane_g9

0x52e5,	// (0x000b0bb8) main_cset_slider_pane_g10_ParamLimits

0x52e5,	// (0x000b0bb8) main_cset_slider_pane_g10

0x52f1,	// (0x000b0bc4) main_cset_slider_pane_g11_ParamLimits

0x52f1,	// (0x000b0bc4) main_cset_slider_pane_g11

0x52fd,	// (0x000b0bd0) main_cset_slider_pane_g12_ParamLimits

0x52fd,	// (0x000b0bd0) main_cset_slider_pane_g12

0x5309,	// (0x000b0bdc) main_cset_slider_pane_g13_ParamLimits

0x5309,	// (0x000b0bdc) main_cset_slider_pane_g13

0x5315,	// (0x000b0be8) main_cset_slider_pane_g14_ParamLimits

0x5315,	// (0x000b0be8) main_cset_slider_pane_g14

0x5321,	// (0x000b0bf4) main_cset_slider_pane_g15_ParamLimits

0x5321,	// (0x000b0bf4) main_cset_slider_pane_g15

0xd492,	// (0x000b8d65) main_cset_slider_pane_t14_ParamLimits

0xd492,	// (0x000b8d65) main_cset_slider_pane_t14

0xd4cb,	// (0x000b8d9e) main_cset_slider_pane_t15_ParamLimits

0xd4cb,	// (0x000b8d9e) main_cset_slider_pane_t15

0x5994,	// (0x000b1267) aid_cam4_burst_size_cell_ParamLimits

0x5994,	// (0x000b1267) aid_cam4_burst_size_cell

0x59b4,	// (0x000b1287) grid_cam4_burst_pane_ParamLimits

0x59b4,	// (0x000b1287) grid_cam4_burst_pane

0x59ee,	// (0x000b12c1) linegrid_cam4_burst_pane_ParamLimits

0x59ee,	// (0x000b12c1) linegrid_cam4_burst_pane

0xd5f8,	// (0x000b8ecb) scroll_pane_cp30_ParamLimits

0xd5f8,	// (0x000b8ecb) scroll_pane_cp30

0x5a10,	// (0x000b12e3) cell_cam4_burst_pane_ParamLimits

0x5a10,	// (0x000b12e3) cell_cam4_burst_pane

0xd604,	// (0x000b8ed7) linegrid_cam4_burst_pane_g1_ParamLimits

0xd604,	// (0x000b8ed7) linegrid_cam4_burst_pane_g1

0x5a65,	// (0x000b1338) linegrid_cam4_burst_pane_g2_ParamLimits

0x5a65,	// (0x000b1338) linegrid_cam4_burst_pane_g2

0xd611,	// (0x000b8ee4) linegrid_cam4_burst_pane_g3_ParamLimits

0xd611,	// (0x000b8ee4) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x000bb251) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x000bb251) linegrid_cam4_burst_pane_g

0x5a76,	// (0x000b1349) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5a76,	// (0x000b1349) linegrid_cam4_burst_pane_g3_copy1

0xd61e,	// (0x000b8ef1) linegrid_cam4_burst_pane_g4_ParamLimits

0xd61e,	// (0x000b8ef1) linegrid_cam4_burst_pane_g4

0x5a94,	// (0x000b1367) linegrid_cam4_burst_pane_g5_ParamLimits

0x5a94,	// (0x000b1367) linegrid_cam4_burst_pane_g5

0x5aa5,	// (0x000b1378) linegrid_cam4_burst_pane_g6_ParamLimits

0x5aa5,	// (0x000b1378) linegrid_cam4_burst_pane_g6

0xd62b,	// (0x000b8efe) linegrid_cam4_burst_pane_g7_ParamLimits

0xd62b,	// (0x000b8efe) linegrid_cam4_burst_pane_g7

0x5abc,	// (0x000b138f) cell_cam4_burst_pane_g1

0xd644,	// (0x000b8f17) main_cam5_pane_t1_ParamLimits

0xd644,	// (0x000b8f17) main_cam5_pane_t1

0xd656,	// (0x000b8f29) main_cam5_pane_t2_ParamLimits

0xd656,	// (0x000b8f29) main_cam5_pane_t2

0xd668,	// (0x000b8f3b) main_cam5_pane_t3_ParamLimits

0xd668,	// (0x000b8f3b) main_cam5_pane_t3

0xd67a,	// (0x000b8f4d) main_cam5_pane_t4_ParamLimits

0xd67a,	// (0x000b8f4d) main_cam5_pane_t4

0xd692,	// (0x000b8f65) main_cam5_pane_t5_ParamLimits

0xd692,	// (0x000b8f65) main_cam5_pane_t5

0xd6a6,	// (0x000b8f79) main_cam5_pane_t6_ParamLimits

0xd6a6,	// (0x000b8f79) main_cam5_pane_t6

0xd6ba,	// (0x000b8f8d) main_cam5_pane_t7_ParamLimits

0xd6ba,	// (0x000b8f8d) main_cam5_pane_t7

0xd6cc,	// (0x000b8f9f) main_cam5_pane_t8_ParamLimits

0xd6cc,	// (0x000b8f9f) main_cam5_pane_t8

0xd6ea,	// (0x000b8fbd) main_cam5_pane_t9_ParamLimits

0xd6ea,	// (0x000b8fbd) main_cam5_pane_t9

0xd6fc,	// (0x000b8fcf) main_cam5_pane_t10_ParamLimits

0xd6fc,	// (0x000b8fcf) main_cam5_pane_t10

0xd70e,	// (0x000b8fe1) main_cam5_pane_t11_ParamLimits

0xd70e,	// (0x000b8fe1) main_cam5_pane_t11

0xd722,	// (0x000b8ff5) main_cam5_pane_t12_ParamLimits

0xd722,	// (0x000b8ff5) main_cam5_pane_t12

0xd739,	// (0x000b900c) main_cam5_pane_t13_ParamLimits

0xd739,	// (0x000b900c) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x000bb25d) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x000bb25d) main_cam5_pane_t

0xffe2,	// (0x000ab8b5) popup_scut_keymap_window_ParamLimits

0xffe2,	// (0x000ab8b5) popup_scut_keymap_window

0x5acf,	// (0x000b13a2) aid_size_cell_brow_shortcut

0xa6d9,	// (0x000b5fac) bg_popup_window_pane_cp010

0x5adb,	// (0x000b13ae) grid_scut_pane

0x5ae7,	// (0x000b13ba) cell_scut_pane_ParamLimits

0x5ae7,	// (0x000b13ba) cell_scut_pane

0x5b00,	// (0x000b13d3) cell_scut_pane_g1

0xd75c,	// (0x000b902f) cell_scut_pane_t1

0xd76b,	// (0x000b903e) cell_scut_pane_t2

0x5b09,	// (0x000b13dc) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x000bb278) cell_scut_pane_t

0x39bc,	// (0x000af28f) main_mup3_pane_g8_ParamLimits

0x39bc,	// (0x000af28f) main_mup3_pane_g8

0x4cd6,	// (0x000b05a9) area_vitu2_query_pane_ParamLimits

0x4cd6,	// (0x000b05a9) area_vitu2_query_pane

0x584c,	// (0x000b111f) input_focus_pane_cp08

0xd77a,	// (0x000b904d) area_vitu2_query_pane_g1

0x5b17,	// (0x000b13ea) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x000bb27f) area_vitu2_query_pane_g

0x5b2c,	// (0x000b13ff) area_vitu2_query_pane_t1_ParamLimits

0x5b2c,	// (0x000b13ff) area_vitu2_query_pane_t1

0x5b40,	// (0x000b1413) area_vitu2_query_pane_t2_ParamLimits

0x5b40,	// (0x000b1413) area_vitu2_query_pane_t2

0x5b54,	// (0x000b1427) area_vitu2_query_pane_t3_ParamLimits

0x5b54,	// (0x000b1427) area_vitu2_query_pane_t3

0xa228,	// (0x000b5afb) area_vitu2_query_pane_t4_ParamLimits

0xa228,	// (0x000b5afb) area_vitu2_query_pane_t4

0xa250,	// (0x000b5b23) area_vitu2_query_pane_t5_ParamLimits

0xa250,	// (0x000b5b23) area_vitu2_query_pane_t5

0xa278,	// (0x000b5b4b) area_vitu2_query_pane_t6_ParamLimits

0xa278,	// (0x000b5b4b) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x000bb284) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x000bb284) area_vitu2_query_pane_t

0x5b80,	// (0x000b1453) bg_button_pane_cp018

0x5b8c,	// (0x000b145f) bg_button_pane_cp021

0x5b98,	// (0x000b146b) bg_button_pane_cp022

0x5bc3,	// (0x000b1496) input_focus_pane_cp09

0x206a,	// (0x000ad93d) aid_size_touch_mv_arrow_left

0x2093,	// (0x000ad966) aid_size_touch_mv_arrow_right

0x5339,	// (0x000b0c0c) main_cset_slider_pane_g16_ParamLimits

0x5339,	// (0x000b0c0c) main_cset_slider_pane_g16

0x5347,	// (0x000b0c1a) main_cset_slider_pane_g17_ParamLimits

0x5347,	// (0x000b0c1a) main_cset_slider_pane_g17

0x5abc,	// (0x000b138f) cell_cam4_burst_pane_g1_ParamLimits

0x9445,	// (0x000b4d18) compa_mode_pane

0x5569,	// (0x000b0e3c) popup_vtel_slider_window_g3_ParamLimits

0x5569,	// (0x000b0e3c) popup_vtel_slider_window_g3

0x5580,	// (0x000b0e53) popup_vtel_slider_window_g4_ParamLimits

0x5580,	// (0x000b0e53) popup_vtel_slider_window_g4

0x5597,	// (0x000b0e6a) popup_vtel_slider_window_t1_ParamLimits

0x5597,	// (0x000b0e6a) popup_vtel_slider_window_t1

0x9467,	// (0x000b4d3a) main_cl_pane

0x9cb9,	// (0x000b558c) popup_imed_adjust2_window_ParamLimits

0xb433,	// (0x000b6d06) bg_tb_trans_pane_cp05_ParamLimits

0xcee6,	// (0x000b87b9) popup_imed_adjust2_window_g1_ParamLimits

0xcef5,	// (0x000b87c8) popup_imed_adjust2_window_g2_ParamLimits

0xcef5,	// (0x000b87c8) popup_imed_adjust2_window_g2

0xcf01,	// (0x000b87d4) popup_imed_adjust2_window_g3_ParamLimits

0xcf01,	// (0x000b87d4) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x000baffa) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x000baffa) popup_imed_adjust2_window_g

0xcf0d,	// (0x000b87e0) popup_imed_adjust2_window_t1_ParamLimits

0xcf25,	// (0x000b87f8) slider_imed_adjust_pane_ParamLimits

0xcf39,	// (0x000b880c) slider_imed_adjust_pane_g1_ParamLimits

0xcf49,	// (0x000b881c) slider_imed_adjust_pane_g2_ParamLimits

0xcf59,	// (0x000b882c) slider_imed_adjust_pane_g3_ParamLimits

0xcf6a,	// (0x000b883d) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x000bb001) slider_imed_adjust_pane_g_ParamLimits

0x4a56,	// (0x000b0329) aid_touch_area_cam4_ParamLimits

0x4a56,	// (0x000b0329) aid_touch_area_cam4

0xa096,	// (0x000b5969) battery_pane_cp01

0x4b29,	// (0x000b03fc) main_camera4_pane_g6_ParamLimits

0x4b29,	// (0x000b03fc) main_camera4_pane_g6

0x4b53,	// (0x000b0426) main_camera4_pane_t2_ParamLimits

0x4b53,	// (0x000b0426) main_camera4_pane_t2

0x0001,

0xf830,	// (0x000bb103) main_camera4_pane_t_ParamLimits

0xf830,	// (0x000bb103) main_camera4_pane_t

0x4b88,	// (0x000b045b) aid_touch_area_vid4_ParamLimits

0x4b88,	// (0x000b045b) aid_touch_area_vid4

0x4bdf,	// (0x000b04b2) main_video4_pane_g5_ParamLimits

0x4bdf,	// (0x000b04b2) main_video4_pane_g5

0x4c05,	// (0x000b04d8) vid4_progress_pane_ParamLimits

0x4c05,	// (0x000b04d8) vid4_progress_pane

0xd45e,	// (0x000b8d31) main_cset_slider_pane_g18_ParamLimits

0xd45e,	// (0x000b8d31) main_cset_slider_pane_g18

0xd638,	// (0x000b8f0b) cell_cam4_burst_pane_g2_ParamLimits

0xd638,	// (0x000b8f0b) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x000bb258) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x000bb258) cell_cam4_burst_pane_g

0xa532,	// (0x000b5e05) bg_cl_pane_ParamLimits

0xa532,	// (0x000b5e05) bg_cl_pane

0x5bd4,	// (0x000b14a7) cl_header_pane_ParamLimits

0x5bd4,	// (0x000b14a7) cl_header_pane

0x5be8,	// (0x000b14bb) cl_listscroll_pane_ParamLimits

0x5be8,	// (0x000b14bb) cl_listscroll_pane

0xd786,	// (0x000b9059) bg_cl_pane_g1

0xd78e,	// (0x000b9061) bg_cl_pane_g2

0xd796,	// (0x000b9069) bg_cl_pane_g3

0xd79e,	// (0x000b9071) bg_cl_pane_g4

0xd7a6,	// (0x000b9079) bg_cl_pane_g5

0xd7ae,	// (0x000b9081) bg_cl_pane_g6

0xd7b6,	// (0x000b9089) bg_cl_pane_g7

0xd7be,	// (0x000b9091) bg_cl_pane_g8

0xd7c6,	// (0x000b9099) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x000bb293) bg_cl_pane_g

0x5bf8,	// (0x000b14cb) aid_height_cl_leading_ParamLimits

0x5bf8,	// (0x000b14cb) aid_height_cl_leading

0x5c04,	// (0x000b14d7) aid_height_cl_text_ParamLimits

0x5c04,	// (0x000b14d7) aid_height_cl_text

0x9af6,	// (0x000b53c9) bg_cl_header_pane_ParamLimits

0x9af6,	// (0x000b53c9) bg_cl_header_pane

0x5c23,	// (0x000b14f6) cl_header_pane_g1_ParamLimits

0x5c23,	// (0x000b14f6) cl_header_pane_g1

0x5c39,	// (0x000b150c) cl_header_pane_t1_ParamLimits

0x5c39,	// (0x000b150c) cl_header_pane_t1

0xd7ce,	// (0x000b90a1) cl_list_pane

0xd431,	// (0x000b8d04) hc_scroll_pane_cp01

0xa913,	// (0x000b61e6) bg_cl_header_pane_g1

0xd2c7,	// (0x000b8b9a) bg_cl_header_pane_g2

0xa933,	// (0x000b6206) bg_cl_header_pane_g3

0xd2d7,	// (0x000b8baa) bg_cl_header_pane_g4

0xd2cf,	// (0x000b8ba2) bg_cl_header_pane_g5

0xd547,	// (0x000b8e1a) bg_cl_header_pane_g6

0xd2ef,	// (0x000b8bc2) bg_cl_header_pane_g7

0xd2f7,	// (0x000b8bca) bg_cl_header_pane_g8

0xd2e7,	// (0x000b8bba) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x000bb2a6) bg_cl_header_pane_g

0x5c52,	// (0x000b1525) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5c52,	// (0x000b1525) hc_cl_list_double_graphic_heading_pane

0x5c65,	// (0x000b1538) hc_cl_list_single_graphic_pane_ParamLimits

0x5c65,	// (0x000b1538) hc_cl_list_single_graphic_pane

0x5c7d,	// (0x000b1550) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5c7d,	// (0x000b1550) hc_cl_list_single_graphic_pane_g1

0x5c89,	// (0x000b155c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5c89,	// (0x000b155c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x000bb2b9) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x000bb2b9) hc_cl_list_single_graphic_pane_g

0x5c9d,	// (0x000b1570) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5c9d,	// (0x000b1570) hc_cl_list_single_graphic_pane_t1

0x5c7d,	// (0x000b1550) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5c7d,	// (0x000b1550) hc_cl_list_double_graphic_heading_pane_g1

0x5cb2,	// (0x000b1585) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5cb2,	// (0x000b1585) hc_cl_list_double_graphic_heading_pane_g2

0x5cc6,	// (0x000b1599) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5cc6,	// (0x000b1599) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x000bb2be) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x000bb2be) hc_cl_list_double_graphic_heading_pane_g

0x5cda,	// (0x000b15ad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5cda,	// (0x000b15ad) hc_cl_list_double_graphic_heading_pane_t1

0x5cef,	// (0x000b15c2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5cef,	// (0x000b15c2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x000bb2c5) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x000bb2c5) hc_cl_list_double_graphic_heading_pane_t

0xa2cc,	// (0x000b5b9f) vid4_progress_pane_g1

0xa2dc,	// (0x000b5baf) vid4_progress_pane_g2

0x5d04,	// (0x000b15d7) vid4_progress_pane_g3

0xa2ec,	// (0x000b5bbf) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x000bb2ca) vid4_progress_pane_g

0x5d16,	// (0x000b15e9) vid4_progress_pane_t1

0xa30a,	// (0x000b5bdd) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x000bb2d5) vid4_progress_pane_t

0x5d30,	// (0x000b1603) wait_bar_pane_cp07

0xc83b,	// (0x000b810e) blid_firmament_pane_ParamLimits

0xc87e,	// (0x000b8151) popup_blid_sat_info2_window_g1

0xc8a2,	// (0x000b8175) popup_blid_sat_info2_window_t3

0xc8b0,	// (0x000b8183) popup_blid_sat_info2_window_t4

0xc8be,	// (0x000b8191) popup_blid_sat_info2_window_t5

0xc8cc,	// (0x000b819f) popup_blid_sat_info2_window_t6

0xc8dc,	// (0x000b81af) popup_blid_sat_info2_window_t7

0xc8ea,	// (0x000b81bd) popup_blid_sat_info2_window_t8

0xc8f8,	// (0x000b81cb) popup_blid_sat_info2_window_t9

0xc906,	// (0x000b81d9) popup_blid_sat_info2_window_t10

0xc9cd,	// (0x000b82a0) aid_firma_cardinal_ParamLimits

0xc9e1,	// (0x000b82b4) blid_firmament_pane_t1_ParamLimits

0xc9f8,	// (0x000b82cb) blid_firmament_pane_t2_ParamLimits

0xca0f,	// (0x000b82e2) blid_firmament_pane_t3_ParamLimits

0xca26,	// (0x000b82f9) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x000baef3) blid_firmament_pane_t_ParamLimits

0xca3d,	// (0x000b8310) blid_sat_info_pane_ParamLimits

0x9459,	// (0x000b4d2c) main_cam_set_pane_ParamLimits

0x41be,	// (0x000afa91) aid_size_cell_colour_35_ParamLimits

0x41de,	// (0x000afab1) aid_size_cell_colour_112_ParamLimits

0x41fe,	// (0x000afad1) aid_size_cell_effect_ParamLimits

0xb433,	// (0x000b6d06) bg_tb_trans_pane_cp02_ParamLimits

0xab92,	// (0x000b6465) heading_imed_pane_ParamLimits

0x421e,	// (0x000afaf1) listscroll_imed_pane_ParamLimits

0xbd1d,	// (0x000b75f0) popup_call2_audio_first_window_g5_ParamLimits

0xbd1d,	// (0x000b75f0) popup_call2_audio_first_window_g5

0x4667,	// (0x000aff3a) aid_size_touch_image3_arrow_left_ParamLimits

0x4667,	// (0x000aff3a) aid_size_touch_image3_arrow_left

0x4693,	// (0x000aff66) aid_size_touch_image3_arrow_right_ParamLimits

0x4693,	// (0x000aff66) aid_size_touch_image3_arrow_right

0xa323,	// (0x000b5bf6) vid4_progress_pane_t3

0x43c3,	// (0x000afc96) main_hwr_training_symbol_option_pane_ParamLimits

0x43c3,	// (0x000afc96) main_hwr_training_symbol_option_pane

0xd12b,	// (0x000b89fe) popup_hwr_training_preview_window_ParamLimits

0xd12b,	// (0x000b89fe) popup_hwr_training_preview_window

0x43e3,	// (0x000afcb6) hwr_training_navi_pane_g5_ParamLimits

0x43e3,	// (0x000afcb6) hwr_training_navi_pane_g5

0xd2b5,	// (0x000b8b88) popup_char_count_window

0x9459,	// (0x000b4d2c) bg_popup_sub_pane_cp20_ParamLimits

0x56a9,	// (0x000b0f7c) list_vitu2_match_list_pane_ParamLimits

0x56b5,	// (0x000b0f88) vitu2_page_scroll_pane_ParamLimits

0x56b5,	// (0x000b0f88) vitu2_page_scroll_pane

0xd7d7,	// (0x000b90aa) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d7,	// (0x000b90aa) list_single_hwr_training_symbol_option_pane

0xd7ea,	// (0x000b90bd) list_single_hwr_training_symbol_option_pane_g1

0xd7f2,	// (0x000b90c5) list_single_hwr_training_symbol_option_pane_t1

0xd800,	// (0x000b90d3) bg_button_pane_cp023

0xd809,	// (0x000b90dc) bg_button_pane_cp024

0xd83c,	// (0x000b910f) vitu2_page_scroll_pane_g1

0xd844,	// (0x000b9117) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x000bb2dc) vitu2_page_scroll_pane_g

0xd84c,	// (0x000b911f) vitu2_page_scroll_pane_t1

0xd85b,	// (0x000b912e) popup_char_count_window_g1

0xd864,	// (0x000b9137) popup_char_count_window_g2

0xd86d,	// (0x000b9140) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x000bb2e1) popup_char_count_window_g

0xd876,	// (0x000b9149) popup_char_count_window_t1

0x9467,	// (0x000b4d3a) main_vded2_pane

0xced2,	// (0x000b87a5) aid_size_cell_imed_line

0xcedc,	// (0x000b87af) grid_imed_line_width_pane

0xa150,	// (0x000b5a23) vid4_indicators_pane_g4

0xd884,	// (0x000b9157) cell_imed_line_width_pane_ParamLimits

0xd884,	// (0x000b9157) cell_imed_line_width_pane

0xd89a,	// (0x000b916d) cell_imed_line_width_pane_g1

0xd8a3,	// (0x000b9176) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x000bb2e8) cell_imed_line_width_pane_g

0x5d57,	// (0x000b162a) main_vded2_pane_g1_ParamLimits

0x5d57,	// (0x000b162a) main_vded2_pane_g1

0x5d72,	// (0x000b1645) main_vded2_pane_g2_ParamLimits

0x5d72,	// (0x000b1645) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x000bb2ed) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x000bb2ed) main_vded2_pane_g

0x5d84,	// (0x000b1657) vded2_slider_pane_ParamLimits

0x5d84,	// (0x000b1657) vded2_slider_pane

0x5d94,	// (0x000b1667) aid_size_touch_vded2_end

0x5d9e,	// (0x000b1671) aid_size_touch_vded2_playhead

0xd8ab,	// (0x000b917e) aid_size_touch_vded2_start

0xd8b3,	// (0x000b9186) vded2_slider_bg_pane

0xd8bc,	// (0x000b918f) vded2_slider_pane_g1

0xd8c5,	// (0x000b9198) vded2_slider_pane_g2

0x5da8,	// (0x000b167b) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x000bb2f2) vded2_slider_pane_g

0xd8cd,	// (0x000b91a0) vded2_slider_bg_pane_g1

0xd8d6,	// (0x000b91a9) vded2_slider_bg_pane_g2

0xd8df,	// (0x000b91b2) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x000bb2f9) vded2_slider_bg_pane_g

0x257c,	// (0x000ade4f) aid_postcard_touch_down_pane_ParamLimits

0x257c,	// (0x000ade4f) aid_postcard_touch_down_pane

0x2594,	// (0x000ade67) aid_postcard_touch_up_pane_ParamLimits

0x2594,	// (0x000ade67) aid_postcard_touch_up_pane

0x9467,	// (0x000b4d3a) main_blid2_pane

0x9c9b,	// (0x000b556e) popup_blid2_search_window

0x9445,	// (0x000b4d18) blid2_gps_pane

0x9445,	// (0x000b4d18) blid2_navig_pane

0x9445,	// (0x000b4d18) blid2_search_pane

0x9445,	// (0x000b4d18) blid2_tripm_pane

0x5db3,	// (0x000b1686) blid2_search_pane_g1_ParamLimits

0x5db3,	// (0x000b1686) blid2_search_pane_g1

0x5dc6,	// (0x000b1699) blid2_search_pane_t1_ParamLimits

0x5dc6,	// (0x000b1699) blid2_search_pane_t1

0x5dd8,	// (0x000b16ab) aid_size_cell_blid2_gps_ParamLimits

0x5dd8,	// (0x000b16ab) aid_size_cell_blid2_gps

0x5df0,	// (0x000b16c3) blid2_gps_pane_g1_ParamLimits

0x5df0,	// (0x000b16c3) blid2_gps_pane_g1

0x5e04,	// (0x000b16d7) grid_blid2_satellite_pane_ParamLimits

0x5e04,	// (0x000b16d7) grid_blid2_satellite_pane

0x5e1c,	// (0x000b16ef) blid2_navig_pane_g1_ParamLimits

0x5e1c,	// (0x000b16ef) blid2_navig_pane_g1

0x5e28,	// (0x000b16fb) blid2_navig_pane_t1_ParamLimits

0x5e28,	// (0x000b16fb) blid2_navig_pane_t1

0x5e43,	// (0x000b1716) blid2_navig_pane_t2_ParamLimits

0x5e43,	// (0x000b1716) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x000bb300) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x000bb300) blid2_navig_pane_t

0x5e5e,	// (0x000b1731) blid2_navig_ring_pane_ParamLimits

0x5e5e,	// (0x000b1731) blid2_navig_ring_pane

0x5e79,	// (0x000b174c) blid2_speed_pane_ParamLimits

0x5e79,	// (0x000b174c) blid2_speed_pane

0x5e85,	// (0x000b1758) blid2_tripm_pane_g1_ParamLimits

0x5e85,	// (0x000b1758) blid2_tripm_pane_g1

0x5ea0,	// (0x000b1773) blid2_tripm_pane_g2_ParamLimits

0x5ea0,	// (0x000b1773) blid2_tripm_pane_g2

0x5eb3,	// (0x000b1786) blid2_tripm_pane_g3_ParamLimits

0x5eb3,	// (0x000b1786) blid2_tripm_pane_g3

0x5ec4,	// (0x000b1797) blid2_tripm_pane_g4_ParamLimits

0x5ec4,	// (0x000b1797) blid2_tripm_pane_g4

0x5ed5,	// (0x000b17a8) blid2_tripm_pane_g5_ParamLimits

0x5ed5,	// (0x000b17a8) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x000bb305) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x000bb305) blid2_tripm_pane_g

0x5efb,	// (0x000b17ce) blid2_tripm_pane_t1_ParamLimits

0x5efb,	// (0x000b17ce) blid2_tripm_pane_t1

0x5f14,	// (0x000b17e7) blid2_tripm_pane_t2_ParamLimits

0x5f14,	// (0x000b17e7) blid2_tripm_pane_t2

0x5f2d,	// (0x000b1800) blid2_tripm_pane_t3_ParamLimits

0x5f2d,	// (0x000b1800) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x000bb312) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x000bb312) blid2_tripm_pane_t

0x5f74,	// (0x000b1847) cell_blid2_satellite_pane_ParamLimits

0x5f74,	// (0x000b1847) cell_blid2_satellite_pane

0x5f90,	// (0x000b1863) cell_blid2_satellite_pane_g1

0xd8e8,	// (0x000b91bb) cell_blid2_satellite_pane_t1

0xa70f,	// (0x000b5fe2) blid2_speed_pane_g1

0xd8f6,	// (0x000b91c9) blid2_speed_pane_t1

0xd904,	// (0x000b91d7) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x000bb31b) blid2_speed_pane_t

0xa70f,	// (0x000b5fe2) blid2_navig_ring_pane_g1

0x5f99,	// (0x000b186c) blid2_navig_ring_pane_g2

0x5fa1,	// (0x000b1874) blid2_navig_ring_pane_g3

0x5fa9,	// (0x000b187c) blid2_navig_ring_pane_g4

0x5fb1,	// (0x000b1884) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x000bb320) blid2_navig_ring_pane_g

0x9445,	// (0x000b4d18) bg_popup_window_pane_cp011

0xd912,	// (0x000b91e5) popup_blid2_search_window_g1

0xd91a,	// (0x000b91ed) popup_blid2_search_window_t1

0xd928,	// (0x000b91fb) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x000bb32b) popup_blid2_search_window_t

0xa822,	// (0x000b60f5) main_browser_pane_g1

0xa532,	// (0x000b5e05) main_browser_pane_ParamLimits

0x9459,	// (0x000b4d2c) bg_button_pane_cp011_ParamLimits

0x4f09,	// (0x000b07dc) cell_vitu2_function_pane_g1_ParamLimits

0xb433,	// (0x000b6d06) bg_popup_sub_pane_cp22_ParamLimits

0x584c,	// (0x000b111f) input_focus_pane_cp08_ParamLimits

0x5868,	// (0x000b113b) popup_vitu2_query_button_pane_ParamLimits

0x5868,	// (0x000b113b) popup_vitu2_query_button_pane

0x5877,	// (0x000b114a) popup_vitu2_query_input_button_pane

0xd582,	// (0x000b8e55) popup_vitu2_query_window_g1_ParamLimits

0x5881,	// (0x000b1154) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x000bb22c) popup_vitu2_query_window_g_ParamLimits

0x9445,	// (0x000b4d18) bg_button_pane_cp026

0x5fb9,	// (0x000b188c) popup_vitu2_query_input_button_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp025

0xd936,	// (0x000b9209) popup_vitu2_query_button_pane_t1

0x35ac,	// (0x000aee7f) main_mp3_pane_t6

0x35ba,	// (0x000aee8d) popup_slider_window_cp01

0xa0b4,	// (0x000b5987) cam4_battery_pane

0xa109,	// (0x000b59dc) cam4_battery_pane_cp02

0xa2c4,	// (0x000b5b97) cam4_battery_pane_cp01

0xa2c4,	// (0x000b5b97) cam4_battery_pane_cp03

0xd3c3,	// (0x000b8c96) cam4_battery_pane_g1

0xa70f,	// (0x000b5fe2) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x000bb330) cam4_battery_pane_g

0xc914,	// (0x000b81e7) popup_blid_sat_info2_window_t11

0x206a,	// (0x000ad93d) aid_size_touch_mv_arrow_left_ParamLimits

0x2093,	// (0x000ad966) aid_size_touch_mv_arrow_right_ParamLimits

0xaf96,	// (0x000b6869) navi_pane_g1_ParamLimits

0x20d2,	// (0x000ad9a5) navi_pane_g2_ParamLimits

0x2100,	// (0x000ad9d3) navi_pane_g3_ParamLimits

0xf334,	// (0x000bac07) navi_pane_g_ParamLimits

0x215a,	// (0x000ada2d) navi_pane_mv_t1_ParamLimits

0x422a,	// (0x000afafd) grid_imed_effect_pane_ParamLimits

0x0c5b,	// (0x000ac52e) aid_placing_vt_slider_lsc

0xa75e,	// (0x000b6031) aid_placing_vt_slider_prt

0x9af6,	// (0x000b53c9) bg_tb_trans_pane_cp01_ParamLimits

0xcb7c,	// (0x000b844f) popup_image_details_window_g1_ParamLimits

0xcb8f,	// (0x000b8462) popup_image_details_window_g2_ParamLimits

0xcba4,	// (0x000b8477) popup_image_details_window_g3_ParamLimits

0xcba4,	// (0x000b8477) popup_image_details_window_g3

0xf660,	// (0x000baf33) popup_image_details_window_g_ParamLimits

0xcbb8,	// (0x000b848b) popup_image_details_window_t1_ParamLimits

0xcbca,	// (0x000b849d) popup_image_details_window_t2_ParamLimits

0xcbe3,	// (0x000b84b6) popup_image_details_window_t3_ParamLimits

0xcbf7,	// (0x000b84ca) popup_image_details_window_t4_ParamLimits

0xcc12,	// (0x000b84e5) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x000baf3a) popup_image_details_window_t_ParamLimits

0x5c10,	// (0x000b14e3) cl_header_name_pane_ParamLimits

0x5c10,	// (0x000b14e3) cl_header_name_pane

0x5fc1,	// (0x000b1894) cl_header_name_pane_t1_ParamLimits

0x5fc1,	// (0x000b1894) cl_header_name_pane_t1

0x5fe2,	// (0x000b18b5) cl_header_name_pane_t2_ParamLimits

0x5fe2,	// (0x000b18b5) cl_header_name_pane_t2

0x6024,	// (0x000b18f7) cl_header_name_pane_t3_ParamLimits

0x6024,	// (0x000b18f7) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x000bb335) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x000bb335) cl_header_name_pane_t

0x212b,	// (0x000ad9fe) navi_pane_mv_g2_ParamLimits

0xd29d,	// (0x000b8b70) field_vitu2_entry_pane_g1_ParamLimits

0xd2a9,	// (0x000b8b7c) field_vitu2_entry_pane_g2_ParamLimits

0xb411,	// (0x000b6ce4) field_vitu2_entry_pane_g3_ParamLimits

0xb411,	// (0x000b6ce4) field_vitu2_entry_pane_g3

0xf862,	// (0x000bb135) field_vitu2_entry_pane_g_ParamLimits

0x4e85,	// (0x000b0758) cell_vitu2_itu_pane_g1_ParamLimits

0x4e9d,	// (0x000b0770) cell_vitu2_itu_pane_g2_ParamLimits

0x4e9d,	// (0x000b0770) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x000bb141) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x000bb141) cell_vitu2_itu_pane_g

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp05_ParamLimits

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp05

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp03

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp04

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp10_ParamLimits

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp10

0x5bad,	// (0x000b1480) bg_vkb2_func_pane_cp08

0x5b80,	// (0x000b1453) bg_vkb2_func_pane_cp06

0x5b8c,	// (0x000b145f) bg_vkb2_func_pane_cp07

0xd812,	// (0x000b90e5) bg_vkb2_func_pane_cp11_ParamLimits

0xd812,	// (0x000b90e5) bg_vkb2_func_pane_cp11

0xd827,	// (0x000b90fa) bg_vkb2_func_pane_cp12_ParamLimits

0xd827,	// (0x000b90fa) bg_vkb2_func_pane_cp12

0x9445,	// (0x000b4d18) bg_vkb2_func_pane_cp09

0xd2c7,	// (0x000b8b9a) bg_vkb2_func_pane_g1

0xa933,	// (0x000b6206) bg_vkb2_func_pane_g2

0xd2cf,	// (0x000b8ba2) bg_vkb2_func_pane_g3

0xd2d7,	// (0x000b8baa) bg_vkb2_func_pane_g4

0xd547,	// (0x000b8e1a) bg_vkb2_func_pane_g5

0xd2ef,	// (0x000b8bc2) bg_vkb2_func_pane_g6

0xd2f7,	// (0x000b8bca) bg_vkb2_func_pane_g7

0xd2e7,	// (0x000b8bba) bg_vkb2_func_pane_g8

0xa913,	// (0x000b61e6) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x000bb33c) bg_vkb2_func_pane_g

0x5ee9,	// (0x000b17bc) blid2_tripm_pane_g6_ParamLimits

0x5ee9,	// (0x000b17bc) blid2_tripm_pane_g6

0xd1e9,	// (0x000b8abc) mp4_progress_pane_g1

0x5f60,	// (0x000b1833) blid2_tripm_values_pane_ParamLimits

0x5f60,	// (0x000b1833) blid2_tripm_values_pane

0x6055,	// (0x000b1928) blid2_tripm_values_pane_t1

0x6063,	// (0x000b1936) blid2_tripm_values_pane_t2

0xd944,	// (0x000b9217) blid2_tripm_values_pane_t3

0x6071,	// (0x000b1944) blid2_tripm_values_pane_t4

0x607f,	// (0x000b1952) blid2_tripm_values_pane_t5

0x608d,	// (0x000b1960) blid2_tripm_values_pane_t6

0xd952,	// (0x000b9225) blid2_tripm_values_pane_t7

0x609b,	// (0x000b196e) blid2_tripm_values_pane_t8

0x60a9,	// (0x000b197c) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x000bb34f) blid2_tripm_values_pane_t

0x0c98,	// (0x000ac56b) call_video_pane_t1_ParamLimits

0x0cb2,	// (0x000ac585) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x000baab5) call_video_pane_t_ParamLimits

0x2478,	// (0x000add4b) msg_header_pane_g1_ParamLimits

0xb453,	// (0x000b6d26) msg_header_pane_g2_ParamLimits

0xb453,	// (0x000b6d26) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x000bacaa) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x000bacaa) msg_header_pane_g

0xa532,	// (0x000b5e05) main_clock2_pane_ParamLimits

0x3f27,	// (0x000af7fa) grid_clock2_toolbar_pane_ParamLimits

0x3f27,	// (0x000af7fa) grid_clock2_toolbar_pane

0x3f27,	// (0x000af7fa) listscroll_clock2_pane_ParamLimits

0x3f27,	// (0x000af7fa) listscroll_clock2_pane

0x4006,	// (0x000af8d9) main_clock2_pane_t3_ParamLimits

0x4006,	// (0x000af8d9) main_clock2_pane_t3

0x4029,	// (0x000af8fc) main_clock2_pane_t4_ParamLimits

0x4029,	// (0x000af8fc) main_clock2_pane_t4

0xd960,	// (0x000b9233) cell_clock2_toolbar_pane

0xd968,	// (0x000b923b) cell_clock2_toolbar_pane_cp01

0xd968,	// (0x000b923b) cell_clock2_toolbar_pane_cp02

0xd970,	// (0x000b9243) cell_clock2_toolbar_pane_cp03

0xd978,	// (0x000b924b) list_clock2_pane

0xaefc,	// (0x000b67cf) scroll_pane_cp10

0xd980,	// (0x000b9253) list_single_clock2_pane_ParamLimits

0xd980,	// (0x000b9253) list_single_clock2_pane

0xa6d9,	// (0x000b5fac) list_highlight_pane_cp08

0xd98d,	// (0x000b9260) list_single_clock2_pane_t1

0xd99b,	// (0x000b926e) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x000bb362) list_single_clock2_pane_t

0x9445,	// (0x000b4d18) bg_button_pane_cp10

0xd9a9,	// (0x000b927c) cell_clock2_toolbar_pane_g1

0x2508,	// (0x000adddb) aid_main_viewer_pane_g1_ParamLimits

0x2508,	// (0x000adddb) aid_main_viewer_pane_g1

0x2516,	// (0x000adde9) aid_main_viewer_pane_g2_ParamLimits

0x2516,	// (0x000adde9) aid_main_viewer_pane_g2

0x2524,	// (0x000addf7) aid_main_viewer_pane_g3_ParamLimits

0x2524,	// (0x000addf7) aid_main_viewer_pane_g3

0x2533,	// (0x000ade06) aid_main_viewer_pane_g4_ParamLimits

0x2533,	// (0x000ade06) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x000bacbb) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x000bacbb) aid_main_viewer_pane_g

0x2ecf,	// (0x000ae7a2) main_calc_pane_ParamLimits

0x2ef3,	// (0x000ae7c6) main_dialer2_pane_ParamLimits

0x9467,	// (0x000b4d3a) main_cam6_pane

0x9467,	// (0x000b4d3a) main_vid6_pane

0x3f33,	// (0x000af806) listscroll_gen_pane_cp06_ParamLimits

0x3f33,	// (0x000af806) listscroll_gen_pane_cp06

0x404c,	// (0x000af91f) main_clock2_pane_t5_ParamLimits

0x404c,	// (0x000af91f) main_clock2_pane_t5

0x40aa,	// (0x000af97d) aid_call2_pane_cp10_ParamLimits

0x40bc,	// (0x000af98f) aid_call_pane_cp10_ParamLimits

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x40ce,	// (0x000af9a1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x40ce,	// (0x000af9a1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaf6b,	// (0x000b683e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x000bafef) popup_clock_analogue_window_cp10_g_ParamLimits

0x40e4,	// (0x000af9b7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4614,	// (0x000afee7) cell_dialer2_keypad_pane_g2_ParamLimits

0x4614,	// (0x000afee7) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x000bb0d4) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x000bb0d4) cell_dialer2_keypad_pane_g

0x4630,	// (0x000aff03) cell_dialer2_keypad_pane_t1

0x5231,	// (0x000b0b04) main_cset_text2_pane_ParamLimits

0x5231,	// (0x000b0b04) main_cset_text2_pane

0xd77a,	// (0x000b904d) area_vitu2_query_pane_g1_ParamLimits

0x5b17,	// (0x000b13ea) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x000bb27f) area_vitu2_query_pane_g_ParamLimits

0xa2a0,	// (0x000b5b73) area_vitu2_query_pane_t7_ParamLimits

0xa2a0,	// (0x000b5b73) area_vitu2_query_pane_t7

0x5b80,	// (0x000b1453) bg_button_pane_cp018_ParamLimits

0x5b8c,	// (0x000b145f) bg_button_pane_cp021_ParamLimits

0x5b98,	// (0x000b146b) bg_button_pane_cp022_ParamLimits

0x5bad,	// (0x000b1480) bg_vkb2_func_pane_cp08_ParamLimits

0x5b80,	// (0x000b1453) bg_vkb2_func_pane_cp06_ParamLimits

0x5b8c,	// (0x000b145f) bg_vkb2_func_pane_cp07_ParamLimits

0x5bc3,	// (0x000b1496) input_focus_pane_cp09_ParamLimits

0xa349,	// (0x000b5c1c) cam6_autofocus_pane_ParamLimits

0xa349,	// (0x000b5c1c) cam6_autofocus_pane

0x60b7,	// (0x000b198a) cam6_image_uncrop_pane_ParamLimits

0x60b7,	// (0x000b198a) cam6_image_uncrop_pane

0x60c7,	// (0x000b199a) cam6_indi_pane_ParamLimits

0x60c7,	// (0x000b199a) cam6_indi_pane

0x60dd,	// (0x000b19b0) cam6_mode_pane_ParamLimits

0x60dd,	// (0x000b19b0) cam6_mode_pane

0x60ef,	// (0x000b19c2) cam6_timer_pane_ParamLimits

0x60ef,	// (0x000b19c2) cam6_timer_pane

0x60fb,	// (0x000b19ce) cam6_zoom_pane_ParamLimits

0x60fb,	// (0x000b19ce) cam6_zoom_pane

0x6109,	// (0x000b19dc) cam6_mode_pane_g1_ParamLimits

0x6109,	// (0x000b19dc) cam6_mode_pane_g1

0x6119,	// (0x000b19ec) cam6_mode_pane_g2_ParamLimits

0x6119,	// (0x000b19ec) cam6_mode_pane_g2

0x6129,	// (0x000b19fc) cam6_mode_pane_g3_ParamLimits

0x6129,	// (0x000b19fc) cam6_mode_pane_g3

0x6139,	// (0x000b1a0c) cam6_mode_pane_g4_ParamLimits

0x6139,	// (0x000b1a0c) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x000bb367) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x000bb367) cam6_mode_pane_g

0xd3b5,	// (0x000b8c88) bg_tb_trans_pane_cp08_ParamLimits

0xd3b5,	// (0x000b8c88) bg_tb_trans_pane_cp08

0xd9b1,	// (0x000b9284) cam6_battery_pane_ParamLimits

0xd9b1,	// (0x000b9284) cam6_battery_pane

0xd9c7,	// (0x000b929a) cam6_indi_pane_g1_ParamLimits

0xd9c7,	// (0x000b929a) cam6_indi_pane_g1

0xd9d9,	// (0x000b92ac) cam6_indi_pane_g2_ParamLimits

0xd9d9,	// (0x000b92ac) cam6_indi_pane_g2

0xd9eb,	// (0x000b92be) cam6_indi_pane_g3_ParamLimits

0xd9eb,	// (0x000b92be) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x000bb370) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x000bb370) cam6_indi_pane_g

0xd9fd,	// (0x000b92d0) cam6_indi_pane_t1_ParamLimits

0xd9fd,	// (0x000b92d0) cam6_indi_pane_t1

0x4c52,	// (0x000b0525) cam6_autofocus_pane_g1

0x4c4a,	// (0x000b051d) cam6_autofocus_pane_g2

0x4c62,	// (0x000b0535) cam6_autofocus_pane_g3

0x4c5a,	// (0x000b052d) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x000bb377) cam6_autofocus_pane_g

0xda23,	// (0x000b92f6) cam6_timer_pane_g1

0xda2b,	// (0x000b92fe) cam6_timer_pane_t1

0xda39,	// (0x000b930c) cam6_zoom_cont_pane

0xda41,	// (0x000b9314) cam6_zoom_pane_g1

0xda4a,	// (0x000b931d) cam6_zoom_pane_g2

0x6149,	// (0x000b1a1c) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x000bb380) cam6_zoom_pane_g

0xa70f,	// (0x000b5fe2) cam6_battery_pane_g1

0xa70f,	// (0x000b5fe2) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x000bac6b) cam6_battery_pane_g

0xda41,	// (0x000b9314) cam6_zoom_cont_pane_g1

0xda4a,	// (0x000b931d) cam6_zoom_cont_pane_g2

0xda53,	// (0x000b9326) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x000bb387) cam6_zoom_cont_pane_g

0x6167,	// (0x000b1a3a) cam6_mode_pane_cp_ParamLimits

0x6167,	// (0x000b1a3a) cam6_mode_pane_cp

0x6179,	// (0x000b1a4c) cam6_zoom_pane_cp_ParamLimits

0x6179,	// (0x000b1a4c) cam6_zoom_pane_cp

0x6187,	// (0x000b1a5a) vid6_image_uncrop_cif_pane_ParamLimits

0x6187,	// (0x000b1a5a) vid6_image_uncrop_cif_pane

0x6197,	// (0x000b1a6a) vid6_image_uncrop_nhd_pane_ParamLimits

0x6197,	// (0x000b1a6a) vid6_image_uncrop_nhd_pane

0x61a6,	// (0x000b1a79) vid6_image_uncrop_vga_pane_ParamLimits

0x61a6,	// (0x000b1a79) vid6_image_uncrop_vga_pane

0x61b5,	// (0x000b1a88) vid6_image_uncrop_wvga_pane_ParamLimits

0x61b5,	// (0x000b1a88) vid6_image_uncrop_wvga_pane

0x61c4,	// (0x000b1a97) vid6_indi_pane_ParamLimits

0x61c4,	// (0x000b1a97) vid6_indi_pane

0xd3b5,	// (0x000b8c88) bg_tb_trans_pane_cp09_ParamLimits

0xd3b5,	// (0x000b8c88) bg_tb_trans_pane_cp09

0xda6b,	// (0x000b933e) cam6_battery_pane_cp_ParamLimits

0xda6b,	// (0x000b933e) cam6_battery_pane_cp

0xda77,	// (0x000b934a) vid6_indi_pane_g1_ParamLimits

0xda77,	// (0x000b934a) vid6_indi_pane_g1

0xda89,	// (0x000b935c) vid6_indi_pane_g2_ParamLimits

0xda89,	// (0x000b935c) vid6_indi_pane_g2

0xda9b,	// (0x000b936e) vid6_indi_pane_g3_ParamLimits

0xda9b,	// (0x000b936e) vid6_indi_pane_g3

0xdab2,	// (0x000b9385) vid6_indi_pane_g4_ParamLimits

0xdab2,	// (0x000b9385) vid6_indi_pane_g4

0xdac9,	// (0x000b939c) vid6_indi_pane_g5_ParamLimits

0xdac9,	// (0x000b939c) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x000bb38e) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x000bb38e) vid6_indi_pane_g

0xdae3,	// (0x000b93b6) vid6_indi_pane_t1_ParamLimits

0xdae3,	// (0x000b93b6) vid6_indi_pane_t1

0xdaf9,	// (0x000b93cc) vid6_indi_pane_t2_ParamLimits

0xdaf9,	// (0x000b93cc) vid6_indi_pane_t2

0xdb21,	// (0x000b93f4) vid6_indi_pane_t3_ParamLimits

0xdb21,	// (0x000b93f4) vid6_indi_pane_t3

0xdb49,	// (0x000b941c) vid6_indi_pane_t4_ParamLimits

0xdb49,	// (0x000b941c) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x000bb399) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x000bb399) vid6_indi_pane_t

0xdb6d,	// (0x000b9440) wait_bar_pane_cp08

0x61dc,	// (0x000b1aaf) main_cset_text2_pane_t1_ParamLimits

0x61dc,	// (0x000b1aaf) main_cset_text2_pane_t1

0x6152,	// (0x000b1a25) listscroll_gen_pane_cp06_t1_ParamLimits

0x6152,	// (0x000b1a25) listscroll_gen_pane_cp06_t1

0x9467,	// (0x000b4d3a) main_cam6_set_pane

0xd3e1,	// (0x000b8cb4) bg_tb_trans_pane_cp06_ParamLimits

0xa0bc,	// (0x000b598f) cam4_indicators_pane_g1_ParamLimits

0xa0cd,	// (0x000b59a0) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x000bb111) cam4_indicators_pane_g_ParamLimits

0xa0e5,	// (0x000b59b8) cam4_indicators_pane_t1_ParamLimits

0x9459,	// (0x000b4d2c) bg_tb_trans_pane_cp07_ParamLimits

0xa113,	// (0x000b59e6) vid4_indicators_pane_g1_ParamLimits

0xa129,	// (0x000b59fc) vid4_indicators_pane_g2_ParamLimits

0xa13d,	// (0x000b5a10) vid4_indicators_pane_g3_ParamLimits

0xa150,	// (0x000b5a23) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x000bb123) vid4_indicators_pane_g_ParamLimits

0xa16e,	// (0x000b5a41) vid4_indicators_pane_t1_ParamLimits

0xa2cc,	// (0x000b5b9f) vid4_progress_pane_g1_ParamLimits

0xa2dc,	// (0x000b5baf) vid4_progress_pane_g2_ParamLimits

0x5d04,	// (0x000b15d7) vid4_progress_pane_g3_ParamLimits

0xa2ec,	// (0x000b5bbf) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x000bb2ca) vid4_progress_pane_g_ParamLimits

0x5d16,	// (0x000b15e9) vid4_progress_pane_t1_ParamLimits

0xa30a,	// (0x000b5bdd) vid4_progress_pane_t2_ParamLimits

0xa323,	// (0x000b5bf6) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x000bb2d5) vid4_progress_pane_t_ParamLimits

0x5d30,	// (0x000b1603) wait_bar_pane_cp07_ParamLimits

0x61fd,	// (0x000b1ad0) main_cam6_set_pane_g2_ParamLimits

0x61fd,	// (0x000b1ad0) main_cam6_set_pane_g2

0x6223,	// (0x000b1af6) main_cset6_listscroll_pane_ParamLimits

0x6223,	// (0x000b1af6) main_cset6_listscroll_pane

0x6241,	// (0x000b1b14) main_cset6_slider_pane_ParamLimits

0x6241,	// (0x000b1b14) main_cset6_slider_pane

0x6257,	// (0x000b1b2a) main_cset6_text2_pane_ParamLimits

0x6257,	// (0x000b1b2a) main_cset6_text2_pane

0xdb7c,	// (0x000b944f) main_cset6_text_pane

0xdb84,	// (0x000b9457) main_cset_list_pane_copy1_ParamLimits

0xdb84,	// (0x000b9457) main_cset_list_pane_copy1

0xdb94,	// (0x000b9467) scroll_pane_cp028_copy1

0x6265,	// (0x000b1b38) cset_list_set_pane_copy1

0x6279,	// (0x000b1b4c) aid_position_infowindow_above_copy1

0x6281,	// (0x000b1b54) aid_position_infowindow_below_copy1

0x6289,	// (0x000b1b5c) cset_list_set_pane_g1_copy1

0x6291,	// (0x000b1b64) cset_list_set_pane_g3_copy1_ParamLimits

0x6291,	// (0x000b1b64) cset_list_set_pane_g3_copy1

0x62a0,	// (0x000b1b73) cset_list_set_pane_t1_copy1_ParamLimits

0x62a0,	// (0x000b1b73) cset_list_set_pane_t1_copy1

0x9af6,	// (0x000b53c9) list_highlight_pane_cp021_copy1_ParamLimits

0x9af6,	// (0x000b53c9) list_highlight_pane_cp021_copy1

0xdb9d,	// (0x000b9470) cset6_slider_pane_ParamLimits

0xdb9d,	// (0x000b9470) cset6_slider_pane

0xdbc9,	// (0x000b949c) main_cset6_slider_pane_g1_ParamLimits

0xdbc9,	// (0x000b949c) main_cset6_slider_pane_g1

0x62b5,	// (0x000b1b88) main_cset6_slider_pane_g2_ParamLimits

0x62b5,	// (0x000b1b88) main_cset6_slider_pane_g2

0xdbf1,	// (0x000b94c4) main_cset6_slider_pane_g3_ParamLimits

0xdbf1,	// (0x000b94c4) main_cset6_slider_pane_g3

0x62dd,	// (0x000b1bb0) main_cset6_slider_pane_g4_ParamLimits

0x62dd,	// (0x000b1bb0) main_cset6_slider_pane_g4

0x62e9,	// (0x000b1bbc) main_cset6_slider_pane_g5_ParamLimits

0x62e9,	// (0x000b1bbc) main_cset6_slider_pane_g5

0xd446,	// (0x000b8d19) main_cset6_slider_pane_g7_ParamLimits

0xd446,	// (0x000b8d19) main_cset6_slider_pane_g7

0xd452,	// (0x000b8d25) main_cset6_slider_pane_g8_ParamLimits

0xd452,	// (0x000b8d25) main_cset6_slider_pane_g8

0x52d9,	// (0x000b0bac) main_cset6_slider_pane_g9_ParamLimits

0x52d9,	// (0x000b0bac) main_cset6_slider_pane_g9

0x52e5,	// (0x000b0bb8) main_cset6_slider_pane_g10_ParamLimits

0x52e5,	// (0x000b0bb8) main_cset6_slider_pane_g10

0x52f1,	// (0x000b0bc4) main_cset6_slider_pane_g11_ParamLimits

0x52f1,	// (0x000b0bc4) main_cset6_slider_pane_g11

0x52fd,	// (0x000b0bd0) main_cset6_slider_pane_g12_ParamLimits

0x52fd,	// (0x000b0bd0) main_cset6_slider_pane_g12

0x5309,	// (0x000b0bdc) main_cset6_slider_pane_g13_ParamLimits

0x5309,	// (0x000b0bdc) main_cset6_slider_pane_g13

0x5315,	// (0x000b0be8) main_cset6_slider_pane_g14_ParamLimits

0x5315,	// (0x000b0be8) main_cset6_slider_pane_g14

0x62f7,	// (0x000b1bca) main_cset6_slider_pane_g15_ParamLimits

0x62f7,	// (0x000b1bca) main_cset6_slider_pane_g15

0x5339,	// (0x000b0c0c) main_cset6_slider_pane_g16_ParamLimits

0x5339,	// (0x000b0c0c) main_cset6_slider_pane_g16

0x5347,	// (0x000b0c1a) main_cset6_slider_pane_g17_ParamLimits

0x5347,	// (0x000b0c1a) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x000bb3a2) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x000bb3a2) main_cset6_slider_pane_g

0xdbfd,	// (0x000b94d0) main_cset6_slider_pane_t1_ParamLimits

0xdbfd,	// (0x000b94d0) main_cset6_slider_pane_t1

0x6327,	// (0x000b1bfa) main_cset6_slider_pane_t2_ParamLimits

0x6327,	// (0x000b1bfa) main_cset6_slider_pane_t2

0x6352,	// (0x000b1c25) main_cset6_slider_pane_t3_ParamLimits

0x6352,	// (0x000b1c25) main_cset6_slider_pane_t3

0x637d,	// (0x000b1c50) main_cset6_slider_pane_t4_ParamLimits

0x637d,	// (0x000b1c50) main_cset6_slider_pane_t4

0x63a8,	// (0x000b1c7b) main_cset6_slider_pane_t5_ParamLimits

0x63a8,	// (0x000b1c7b) main_cset6_slider_pane_t5

0xdc3e,	// (0x000b9511) main_cset6_slider_pane_t7_ParamLimits

0xdc3e,	// (0x000b9511) main_cset6_slider_pane_t7

0x63d5,	// (0x000b1ca8) main_cset6_slider_pane_t8_ParamLimits

0x63d5,	// (0x000b1ca8) main_cset6_slider_pane_t8

0x63f9,	// (0x000b1ccc) main_cset6_slider_pane_t9_ParamLimits

0x63f9,	// (0x000b1ccc) main_cset6_slider_pane_t9

0x641d,	// (0x000b1cf0) main_cset6_slider_pane_t10_ParamLimits

0x641d,	// (0x000b1cf0) main_cset6_slider_pane_t10

0x6441,	// (0x000b1d14) main_cset6_slider_pane_t11_ParamLimits

0x6441,	// (0x000b1d14) main_cset6_slider_pane_t11

0xdc74,	// (0x000b9547) main_cset6_slider_pane_t14_ParamLimits

0xdc74,	// (0x000b9547) main_cset6_slider_pane_t14

0xdcad,	// (0x000b9580) main_cset6_slider_pane_t15_ParamLimits

0xdcad,	// (0x000b9580) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x000bb3c7) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x000bb3c7) main_cset6_slider_pane_t

0xdce6,	// (0x000b95b9) cset_slider_pane_g1_copy1

0xdcef,	// (0x000b95c2) cset_slider_pane_g2_copy1

0xdcf8,	// (0x000b95cb) cset_slider_pane_g3_copy1

0x9445,	// (0x000b4d18) bg_popup_sub_pane_cp011_copy1

0xdd0a,	// (0x000b95dd) main_cset_text_pane_g1_copy1

0xd596,	// (0x000b8e69) main_cset_text_pane_t1_copy1

0xd5a4,	// (0x000b8e77) main_cset_text_pane_t2_copy1

0xd5b2,	// (0x000b8e85) main_cset_text_pane_t3_copy1

0xd5c0,	// (0x000b8e93) main_cset_text_pane_t4_copy1

0xd5ce,	// (0x000b8ea1) main_cset_text_pane_t5_copy1

0xdd12,	// (0x000b95e5) main_cset_text_pane_t6_copy1

0xdd20,	// (0x000b95f3) main_cset_text_pane_t7_copy1

0x61dc,	// (0x000b1aaf) main_cset_text2_pane_t1_copy1

0x9459,	// (0x000b4d2c) main_ncimui_pane

0x3181,	// (0x000aea54) popup_query_ncimui_window_ParamLimits

0x3181,	// (0x000aea54) popup_query_ncimui_window

0xb198,	// (0x000b6a6b) field_cale_ev2_pane_g4_ParamLimits

0xb198,	// (0x000b6a6b) field_cale_ev2_pane_g4

0x44df,	// (0x000afdb2) cell_video_dialer_keypad_pane_g2_ParamLimits

0x44df,	// (0x000afdb2) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x000bb0ab) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x000bb0ab) cell_video_dialer_keypad_pane_g

0x44f7,	// (0x000afdca) cell_video_dialer_keypad_pane_t1

0x9445,	// (0x000b4d18) bg_popup_window_pane_cp012

0xc587,	// (0x000b7e5a) heading_pane_cp06

0xdd4c,	// (0x000b961f) ncim_query_content_pane

0x9445,	// (0x000b4d18) bg_popup_heading_pane_cp01

0xdd54,	// (0x000b9627) ncim_heading_pane_t1

0xdd62,	// (0x000b9635) ncim_indicator_popup_pane

0xdd74,	// (0x000b9647) ncim_query_button_pane

0xdd8a,	// (0x000b965d) ncim_query_content_pane_t1

0xdd9c,	// (0x000b966f) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x000bb40b) ncim_query_content_pane_t

0xddd6,	// (0x000b96a9) ncim_query_list_pane

0xdde8,	// (0x000b96bb) ncim_query_popup_pane

0xdd62,	// (0x000b9635) ncim_indicator_popup_pane_ParamLimits

0x65ad,	// (0x000b1e80) ncim_query_content_pane_g1_ParamLimits

0x65ad,	// (0x000b1e80) ncim_query_content_pane_g1

0xdd8a,	// (0x000b965d) ncim_query_content_pane_t1_ParamLimits

0xdd9c,	// (0x000b966f) ncim_query_content_pane_t2_ParamLimits

0x65b9,	// (0x000b1e8c) ncim_query_content_pane_t3_ParamLimits

0x65b9,	// (0x000b1e8c) ncim_query_content_pane_t3

0x65e1,	// (0x000b1eb4) ncim_query_content_pane_t4_ParamLimits

0x65e1,	// (0x000b1eb4) ncim_query_content_pane_t4

0x6609,	// (0x000b1edc) ncim_query_content_pane_t5_ParamLimits

0x6609,	// (0x000b1edc) ncim_query_content_pane_t5

0xddae,	// (0x000b9681) ncim_query_content_pane_t6_ParamLimits

0xddae,	// (0x000b9681) ncim_query_content_pane_t6

0xfb38,	// (0x000bb40b) ncim_query_content_pane_t_ParamLimits

0xddd6,	// (0x000b96a9) ncim_query_list_pane_ParamLimits

0xdde8,	// (0x000b96bb) ncim_query_popup_pane_ParamLimits

0xddfc,	// (0x000b96cf) wait_bar_pane_cp04

0x9445,	// (0x000b4d18) input_focus_pane_cp011

0xde04,	// (0x000b96d7) ncim_query_popup_pane_t1

0xde12,	// (0x000b96e5) ncim_list_query_list_pane_ParamLimits

0xde12,	// (0x000b96e5) ncim_list_query_list_pane

0x9445,	// (0x000b4d18) bg_button_pane_cp027

0xde25,	// (0x000b96f8) ncim_query_button_pane_g1

0x9445,	// (0x000b4d18) list_highlight_pane_cp012

0xde2f,	// (0x000b9702) ncim_list_query_list_pane_g1

0xde37,	// (0x000b970a) ncim_list_query_list_pane_t1

0xa0d9,	// (0x000b59ac) cam4_indicators_pane_g3_ParamLimits

0xa0d9,	// (0x000b59ac) cam4_indicators_pane_g3

0xa15c,	// (0x000b5a2f) vid4_indicators_pane_g5_ParamLimits

0xa15c,	// (0x000b5a2f) vid4_indicators_pane_g5

0xa2fb,	// (0x000b5bce) vid4_progress_pane_g5_ParamLimits

0xa2fb,	// (0x000b5bce) vid4_progress_pane_g5

0x6498,	// (0x000b1d6b) main_ncimui_pane_g1

0x6501,	// (0x000b1dd4) ncimui_group_query_pane_ParamLimits

0x6501,	// (0x000b1dd4) ncimui_group_query_pane

0x6549,	// (0x000b1e1c) ncimui_list_pane_ParamLimits

0x6549,	// (0x000b1e1c) ncimui_list_pane

0x6570,	// (0x000b1e43) ncimui_text_pane_ParamLimits

0x6570,	// (0x000b1e43) ncimui_text_pane

0x6631,	// (0x000b1f04) ncimui_text_pane_t1_ParamLimits

0x6631,	// (0x000b1f04) ncimui_text_pane_t1

0xde45,	// (0x000b9718) ncimui_list_single_graphic_pane_ParamLimits

0xde45,	// (0x000b9718) ncimui_list_single_graphic_pane

0x664f,	// (0x000b1f22) ncimui_query_pane_ParamLimits

0x664f,	// (0x000b1f22) ncimui_query_pane

0x9445,	// (0x000b4d18) list_highlight_pane_cp013

0xde55,	// (0x000b9728) ncim_list_query_list_pane_t1_copy1

0xde2f,	// (0x000b9702) ncim_list_single_graphic_pane_g1

0x6662,	// (0x000b1f35) ncim_query_button_pane_cp01

0x666e,	// (0x000b1f41) ncim_query_entry_pane_ParamLimits

0x666e,	// (0x000b1f41) ncim_query_entry_pane

0x6681,	// (0x000b1f54) ncimui_query_pane_g1

0x668d,	// (0x000b1f60) ncimui_query_pane_t1_ParamLimits

0x668d,	// (0x000b1f60) ncimui_query_pane_t1

0x9af6,	// (0x000b53c9) input_focus_pane_cp012

0xde63,	// (0x000b9736) ncim_query_entry_pane_t1

0xa532,	// (0x000b5e05) main_im_pane_ParamLimits

0x9459,	// (0x000b4d2c) main_mobtv_pane_ParamLimits

0x9459,	// (0x000b4d2c) main_mobtv_pane

0x630f,	// (0x000b1be2) main_cset6_slider_pane_g18_ParamLimits

0x630f,	// (0x000b1be2) main_cset6_slider_pane_g18

0x631b,	// (0x000b1bee) main_cset6_slider_pane_g19_ParamLimits

0x631b,	// (0x000b1bee) main_cset6_slider_pane_g19

0xa4dc,	// (0x000b5daf) bg_main_mobtv_pane_ParamLimits

0xa4dc,	// (0x000b5daf) bg_main_mobtv_pane

0x66a6,	// (0x000b1f79) main_mobtv_info_pane

0x66b1,	// (0x000b1f84) main_mobtv_loading_pane_ParamLimits

0x66b1,	// (0x000b1f84) main_mobtv_loading_pane

0xde75,	// (0x000b9748) main_mobtv_pg_channel_list_pane

0xde7f,	// (0x000b9752) main_mobtv_pg_hdr_pane

0x66be,	// (0x000b1f91) main_mobtv_programe_curr_pane_ParamLimits

0x66be,	// (0x000b1f91) main_mobtv_programe_curr_pane

0x66cb,	// (0x000b1f9e) main_mobtv_programe_next_pane_ParamLimits

0x66cb,	// (0x000b1f9e) main_mobtv_programe_next_pane

0xde88,	// (0x000b975b) popup_mobtv_noti_window

0xa70f,	// (0x000b5fe2) main_tv_pg_hdr_pane_g1

0xde92,	// (0x000b9765) main_tv_pg_hdr_pane_g2

0xde9a,	// (0x000b976d) main_tv_pg_hdr_pane_g3

0xdea2,	// (0x000b9775) main_tv_pg_hdr_pane_g4

0xdeaa,	// (0x000b977d) main_tv_pg_hdr_pane_g5

0xdeb4,	// (0x000b9787) main_tv_pg_hdr_pane_g6

0xdebe,	// (0x000b9791) main_tv_pg_hdr_pane_g7

0xdec8,	// (0x000b979b) main_tv_pg_hdr_pane_g8

0xded2,	// (0x000b97a5) main_tv_pg_hdr_pane_g9

0xdedc,	// (0x000b97af) main_tv_pg_hdr_pane_g10

0xdee6,	// (0x000b97b9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x000bb418) main_tv_pg_hdr_pane_g

0xdef0,	// (0x000b97c3) main_tv_pg_hdr_pane_t1

0xdefe,	// (0x000b97d1) main_tv_pg_hdr_pane_t2

0xdf0c,	// (0x000b97df) main_tv_pg_hdr_pane_t3

0xdf1c,	// (0x000b97ef) main_tv_pg_hdr_pane_t4

0xdf2c,	// (0x000b97ff) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x000bb42f) main_tv_pg_hdr_pane_t

0xdf3c,	// (0x000b980f) single_mobtv_pg_channel_pane_ParamLimits

0xdf3c,	// (0x000b980f) single_mobtv_pg_channel_pane

0xdf4e,	// (0x000b9821) single_mobtv_pg_channel_table_pane

0xdf57,	// (0x000b982a) single_mobtv_pg_channel_thumb_pane

0xdf60,	// (0x000b9833) single_tv_pg_channel_pane_g1

0xdf69,	// (0x000b983c) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x000bb43a) single_tv_pg_channel_pane_g

0xa4c0,	// (0x000b5d93) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa4c0,	// (0x000b5d93) bg_single_mobtv_pg_channel_thumb_pane

0xdf72,	// (0x000b9845) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf72,	// (0x000b9845) single_mobtv_pg_channel_thumb_pane_g1

0xdf80,	// (0x000b9853) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf80,	// (0x000b9853) single_mobtv_pg_channel_thumb_pane_g2

0xdf8c,	// (0x000b985f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf8c,	// (0x000b985f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x000bb43f) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x000bb43f) single_mobtv_pg_channel_thumb_pane_g

0xdf98,	// (0x000b986b) single_mobtv_pg_channel_thumb_pane_t1

0xdfa6,	// (0x000b9879) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x000bb446) single_mobtv_pg_channel_thumb_pane_t

0xa70f,	// (0x000b5fe2) bg_single_mobtv_pg_channel_table_pane_g1

0xa70f,	// (0x000b5fe2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x000bac6b) bg_single_mobtv_pg_channel_table_pane_g

0xdfb4,	// (0x000b9887) single_mobtv_pg_channel_table_pane_t1

0xdfc2,	// (0x000b9895) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x000bb44b) single_mobtv_pg_channel_table_pane_t

0x66e0,	// (0x000b1fb3) main_mobtv_info_pane_g1_ParamLimits

0x66e0,	// (0x000b1fb3) main_mobtv_info_pane_g1

0x66fe,	// (0x000b1fd1) main_mobtv_info_pane_t1_ParamLimits

0x66fe,	// (0x000b1fd1) main_mobtv_info_pane_t1

0x6776,	// (0x000b2049) main_mobtv_info_pane_t2_ParamLimits

0x6776,	// (0x000b2049) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x000bb455) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x000bb455) main_mobtv_info_pane_t

0x6807,	// (0x000b20da) wait_bar_pane_cp05

0x6819,	// (0x000b20ec) main_mobtv_loading_pane_g1_ParamLimits

0x6819,	// (0x000b20ec) main_mobtv_loading_pane_g1

0x682a,	// (0x000b20fd) main_mobtv_loading_pane_g2_ParamLimits

0x682a,	// (0x000b20fd) main_mobtv_loading_pane_g2

0x6836,	// (0x000b2109) main_mobtv_loading_pane_g3_ParamLimits

0x6836,	// (0x000b2109) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x000bb45c) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x000bb45c) main_mobtv_loading_pane_g

0xdfd0,	// (0x000b98a3) main_mobtv_loading_pane_t1_ParamLimits

0xdfd0,	// (0x000b98a3) main_mobtv_loading_pane_t1

0xdfe8,	// (0x000b98bb) main_mobtv_loading_pane_t2_ParamLimits

0xdfe8,	// (0x000b98bb) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x000bb463) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x000bb463) main_mobtv_loading_pane_t

0x6849,	// (0x000b211c) wait_bar_pane_cp06_ParamLimits

0x6849,	// (0x000b211c) wait_bar_pane_cp06

0xe00c,	// (0x000b98df) main_mobtv_programe_curr_pane_t1

0xe01a,	// (0x000b98ed) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x000bb468) main_mobtv_programe_curr_pane_t

0xe028,	// (0x000b98fb) main_mobtv_programe_next_pane_t1

0xe036,	// (0x000b9909) main_mobtv_programe_next_pane_t2

0xe044,	// (0x000b9917) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x000bb46d) main_mobtv_programe_next_pane_t

0x9445,	// (0x000b4d18) bg_popup_mobtv_noti_window_pane

0xe052,	// (0x000b9925) popup_mobtv_noti_window_g1

0xe05a,	// (0x000b992d) popup_mobtv_noti_window_t1

0xe068,	// (0x000b993b) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x000bb474) popup_mobtv_noti_window_t

0xa70f,	// (0x000b5fe2) bg_popup_mobtv_noti_window_pane_g1

0x9467,	// (0x000b4d3a) sc_clock_pane

0x9467,	// (0x000b4d3a) main_fs_bigclock_pane

0x5f4a,	// (0x000b181d) blid2_tripm_pane_t4_ParamLimits

0x5f4a,	// (0x000b181d) blid2_tripm_pane_t4

0x6858,	// (0x000b212b) sc_clock_pane_g1_ParamLimits

0x6858,	// (0x000b212b) sc_clock_pane_g1

0x686a,	// (0x000b213d) sc_clock_pane_t1_ParamLimits

0x686a,	// (0x000b213d) sc_clock_pane_t1

0x688e,	// (0x000b2161) sc_clock_pane_t2_ParamLimits

0x688e,	// (0x000b2161) sc_clock_pane_t2

0x68a6,	// (0x000b2179) sc_clock_pane_t3_ParamLimits

0x68a6,	// (0x000b2179) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x000bb479) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x000bb479) sc_clock_pane_t

0x7861,	// (0x000b3134) main_fs_bigclock_indicator_pane_ParamLimits

0x7861,	// (0x000b3134) main_fs_bigclock_indicator_pane

0x696c,	// (0x000b223f) main_fs_bigclock_pane_g1_ParamLimits

0x696c,	// (0x000b223f) main_fs_bigclock_pane_g1

0x786d,	// (0x000b3140) main_fs_bigclock_pane_t1_ParamLimits

0x786d,	// (0x000b3140) main_fs_bigclock_pane_t1

0x787f,	// (0x000b3152) main_fs_bigclock_pane_t2_ParamLimits

0x787f,	// (0x000b3152) main_fs_bigclock_pane_t2

0x7893,	// (0x000b3166) main_fs_bigclock_pane_t3_ParamLimits

0x7893,	// (0x000b3166) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x000bb60a) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x000bb60a) main_fs_bigclock_pane_t

0xe759,	// (0x000ba02c) main_fs_bigclock_indicator_pane_g1

0xdd7c,	// (0x000b964f) ncim_query_content_pane_g2_ParamLimits

0xdd7c,	// (0x000b964f) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x000bb406) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x000bb406) ncim_query_content_pane_g

0x68bd,	// (0x000b2190) sc_clock_pane_t4_ParamLimits

0x68bd,	// (0x000b2190) sc_clock_pane_t4

0x9459,	// (0x000b4d2c) main_radioblah_pane

0xa04c,	// (0x000b591f) cell_call4_button_pane_t1_copy1_ParamLimits

0xa04c,	// (0x000b591f) cell_call4_button_pane_t1_copy1

0x64b0,	// (0x000b1d83) main_ncimui_pane_t1_ParamLimits

0x64b0,	// (0x000b1d83) main_ncimui_pane_t1

0x64ca,	// (0x000b1d9d) main_ncimui_pane_t2_ParamLimits

0x64ca,	// (0x000b1d9d) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x000bb3ff) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x000bb3ff) main_ncimui_pane_t

0xe076,	// (0x000b9949) main_radioblah_anim_pane_ParamLimits

0xe076,	// (0x000b9949) main_radioblah_anim_pane

0xe087,	// (0x000b995a) main_radioblah_info_pane_ParamLimits

0xe087,	// (0x000b995a) main_radioblah_info_pane

0xe09b,	// (0x000b996e) main_radioblah_pane_t1_ParamLimits

0xe09b,	// (0x000b996e) main_radioblah_pane_t1

0xe0b7,	// (0x000b998a) main_radioblah_pane_t2_ParamLimits

0xe0b7,	// (0x000b998a) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x000bb49a) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x000bb49a) main_radioblah_pane_t

0x6b15,	// (0x000b23e8) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6b15,	// (0x000b23e8) main_radioblah_rocker_ctrl_pane

0xe0ff,	// (0x000b99d2) main_radioblah_info_pane_t1_ParamLimits

0xe0ff,	// (0x000b99d2) main_radioblah_info_pane_t1

0x6b6d,	// (0x000b2440) main_radioblah_info_pane_t2_ParamLimits

0x6b6d,	// (0x000b2440) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x000bb4a3) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x000bb4a3) main_radioblah_info_pane_t

0xa70f,	// (0x000b5fe2) main_radioblah_rocker_ctrl_pane_g1

0x6c1d,	// (0x000b24f0) main_radioblah_rocker_ctrl_pane_g2

0x6c25,	// (0x000b24f8) main_radioblah_rocker_ctrl_pane_g3

0x6c2d,	// (0x000b2500) main_radioblah_rocker_ctrl_pane_g4

0x6c35,	// (0x000b2508) main_radioblah_rocker_ctrl_pane_g5

0x6c3d,	// (0x000b2510) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x000bb4ac) main_radioblah_rocker_ctrl_pane_g

0x61dc,	// (0x000b1aaf) main_cset_text2_pane_t1_copy1_ParamLimits

0xa0aa,	// (0x000b597d) cam4_image_uncrop_qvga_pane

0xa0ff,	// (0x000b59d2) vid4_image_uncrop_qcif_pane

0xa349,	// (0x000b5c1c) cam6_image_uncrop_qvga_pane_ParamLimits

0xa349,	// (0x000b5c1c) cam6_image_uncrop_qvga_pane

0xda5b,	// (0x000b932e) vid6_image_uncrop_qcif_pane_ParamLimits

0xda5b,	// (0x000b932e) vid6_image_uncrop_qcif_pane

0x9445,	// (0x000b4d18) bg_popup_preview_window_pane_cp03

0xdd2e,	// (0x000b9601) list_cset_text2_pane

0xdd36,	// (0x000b9609) main_cset6_text2_pane_g1

0xdd3e,	// (0x000b9611) main_cset6_text2_pane_t1

0xe3ab,	// (0x000b9c7e) list_cset_text2_pane_t1_ParamLimits

0xe3ab,	// (0x000b9c7e) list_cset_text2_pane_t1

0x9459,	// (0x000b4d2c) main_radioblah_pane_ParamLimits

0x67f3,	// (0x000b20c6) main_mobtv_info_pane_t3_ParamLimits

0x67f3,	// (0x000b20c6) main_mobtv_info_pane_t3

0x6b03,	// (0x000b23d6) main_radioblah_pane_g1

0x6b3d,	// (0x000b2410) main_radioblah_info_pane_g1

0x6bc2,	// (0x000b2495) main_radioblah_info_pane_t3_ParamLimits

0x6bc2,	// (0x000b2495) main_radioblah_info_pane_t3

0x1c4d,	// (0x000ad520) highlight_cell_cale_month_pane_ParamLimits

0x1c4d,	// (0x000ad520) highlight_cell_cale_month_pane

0x9467,	// (0x000b4d3a) main_phob_fisheye_pane

0xcd1c,	// (0x000b85ef) scroll_pane_cp0031_ParamLimits

0xcd1c,	// (0x000b85ef) scroll_pane_cp0031

0xdb6d,	// (0x000b9440) wait_bar_pane_cp08_ParamLimits

0x6265,	// (0x000b1b38) cset_list_set_pane_copy1_ParamLimits

0xe139,	// (0x000b9a0c) highlight_cell_cale_month_pane_g1

0x6c45,	// (0x000b2518) highlight_cell_cale_month_pane_t1

0xd7ce,	// (0x000b90a1) list_gen_pane_cp01

0xd431,	// (0x000b8d04) scroll_pane_01

0x6c53,	// (0x000b2526) list_single_double_fisheye_pane

0x6c5c,	// (0x000b252f) list_double_fisheye_pane_g1_ParamLimits

0x6c5c,	// (0x000b252f) list_double_fisheye_pane_g1

0x6c68,	// (0x000b253b) list_double_fisheye_pane_g2_ParamLimits

0x6c68,	// (0x000b253b) list_double_fisheye_pane_g2

0x6c7c,	// (0x000b254f) list_double_fisheye_pane_g3_ParamLimits

0x6c7c,	// (0x000b254f) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x000bb4b9) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x000bb4b9) list_double_fisheye_pane_g

0x6ca5,	// (0x000b2578) list_double_fisheye_pane_t1_ParamLimits

0x6ca5,	// (0x000b2578) list_double_fisheye_pane_t1

0x6cc0,	// (0x000b2593) list_double_fisheye_pane_t2_ParamLimits

0x6cc0,	// (0x000b2593) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x000bb4c4) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x000bb4c4) list_double_fisheye_pane_t

0x9467,	// (0x000b4d3a) main_call5_pane

0x68e8,	// (0x000b21bb) sc_swipe_pane_ParamLimits

0x68e8,	// (0x000b21bb) sc_swipe_pane

0x6cf5,	// (0x000b25c8) call5_image_pane_ParamLimits

0x6cf5,	// (0x000b25c8) call5_image_pane

0x6d12,	// (0x000b25e5) call5_swipe_1_pane_ParamLimits

0x6d12,	// (0x000b25e5) call5_swipe_1_pane

0x6d25,	// (0x000b25f8) call5_swipe_2_pane_ParamLimits

0x6d25,	// (0x000b25f8) call5_swipe_2_pane

0x6d50,	// (0x000b2623) popup_call5_audio_first_window_ParamLimits

0x6d50,	// (0x000b2623) popup_call5_audio_first_window

0xa4c0,	// (0x000b5d93) call5_swipe_1_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) call5_swipe_1_pane_g1

0xe141,	// (0x000b9a14) call5_swipe_1_pane_g2_ParamLimits

0xe141,	// (0x000b9a14) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x000bb4c9) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x000bb4c9) call5_swipe_1_pane_g

0xe14d,	// (0x000b9a20) call5_swipe_1_pane_t1_ParamLimits

0xe14d,	// (0x000b9a20) call5_swipe_1_pane_t1

0xa4c0,	// (0x000b5d93) call5_swipe_2_pane_g1_ParamLimits

0xa4c0,	// (0x000b5d93) call5_swipe_2_pane_g1

0xe162,	// (0x000b9a35) call5_swipe_2_pane_g2_ParamLimits

0xe162,	// (0x000b9a35) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x000bb4ce) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x000bb4ce) call5_swipe_2_pane_g

0xe16e,	// (0x000b9a41) call5_swipe_2_pane_t1_ParamLimits

0xe16e,	// (0x000b9a41) call5_swipe_2_pane_t1

0xe183,	// (0x000b9a56) sc_swipe_pane_g1_ParamLimits

0xe183,	// (0x000b9a56) sc_swipe_pane_g1

0xe190,	// (0x000b9a63) sc_swipe_pane_g2_ParamLimits

0xe190,	// (0x000b9a63) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x000bb4d3) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x000bb4d3) sc_swipe_pane_g

0xe19c,	// (0x000b9a6f) sc_swipe_pane_t1_ParamLimits

0xe19c,	// (0x000b9a6f) sc_swipe_pane_t1

0x9467,	// (0x000b4d3a) main_cmail_launcher_pane

0x6d65,	// (0x000b2638) aid_size_cell_cmail_l_ParamLimits

0x6d65,	// (0x000b2638) aid_size_cell_cmail_l

0x6d7a,	// (0x000b264d) grid_cmail_l_pane_ParamLimits

0x6d7a,	// (0x000b264d) grid_cmail_l_pane

0x6d94,	// (0x000b2667) cell_cmail_l_pane_ParamLimits

0x6d94,	// (0x000b2667) cell_cmail_l_pane

0x6db5,	// (0x000b2688) cell_cmail_l_pane_g1_ParamLimits

0x6db5,	// (0x000b2688) cell_cmail_l_pane_g1

0x6dc1,	// (0x000b2694) cell_cmail_l_pane_t1_ParamLimits

0x6dc1,	// (0x000b2694) cell_cmail_l_pane_t1

0x6dd7,	// (0x000b26aa) cell_cmail_l_pane_t2_ParamLimits

0x6dd7,	// (0x000b26aa) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x000bb4d8) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x000bb4d8) cell_cmail_l_pane_t

0x9af6,	// (0x000b53c9) grid_highlight_pane_cp018_ParamLimits

0x9af6,	// (0x000b53c9) grid_highlight_pane_cp018

0xfeca,	// (0x000ab79d) main2_pane_ParamLimits

0xfeca,	// (0x000ab79d) main2_pane

0xa5ca,	// (0x000b5e9d) popup_sp_fs_action_menu_bg_pane_g1

0xa5d2,	// (0x000b5ea5) popup_sp_fs_action_menu_bg_pane_g2

0xa5da,	// (0x000b5ead) popup_sp_fs_action_menu_bg_pane_g3

0xa5e2,	// (0x000b5eb5) popup_sp_fs_action_menu_bg_pane_g4

0xa5ea,	// (0x000b5ebd) popup_sp_fs_action_menu_bg_pane_g5

0xa5f2,	// (0x000b5ec5) popup_sp_fs_action_menu_bg_pane_g6

0xa5fa,	// (0x000b5ecd) popup_sp_fs_action_menu_bg_pane_g7

0xa602,	// (0x000b5ed5) popup_sp_fs_action_menu_bg_pane_g8

0xa60a,	// (0x000b5edd) popup_sp_fs_action_menu_bg_pane_g9

0xa612,	// (0x000b5ee5) popup_sp_fs_action_menu_bg_pane_g10

0xa612,	// (0x000b5ee5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x000ba9d8) popup_sp_fs_action_menu_bg_pane_g

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x000baa86) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x000baa86) list_medium_line_x2_t3_g3_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g3_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_x2_t3_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g2_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g3

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x000baa99) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x000baa99) list_medium_line_x2_t4_g4_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t3

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x000baaa2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x000baaa2) list_medium_line_x2_t4_g4_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g3

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x000baa99) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x000baa99) list_medium_line_x2_t2_g4_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g4_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g4_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x000baa86) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x000baa86) list_medium_line_x2_t2_g3_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g3_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g3_t

0x1da4,	// (0x000ad677) main_sp_fs_list_pane_ParamLimits

0x1da4,	// (0x000ad677) main_sp_fs_list_pane

0xb405,	// (0x000b6cd8) sp_fs_scroll_pane_ParamLimits

0xb405,	// (0x000b6cd8) sp_fs_scroll_pane

0xac6d,	// (0x000b6540) list_medium_line_x2_t3_t1

0xac6d,	// (0x000b6540) list_medium_line_x2_t3_t2

0xac6d,	// (0x000b6540) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x000bab4f) list_medium_line_x2_t3_t

0xac6d,	// (0x000b6540) list_medium_line_x3_t4_t1

0xac6d,	// (0x000b6540) list_medium_line_x3_t4_t2

0xac6d,	// (0x000b6540) list_medium_line_x3_t4_t3

0xac6d,	// (0x000b6540) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x000bab56) list_medium_line_x3_t4_t

0xac6d,	// (0x000b6540) list_medium_line_x4_t5_t1

0xac6d,	// (0x000b6540) list_medium_line_x4_t5_t2

0xac6d,	// (0x000b6540) list_medium_line_x4_t5_t3

0xac6d,	// (0x000b6540) list_medium_line_x4_t5_t4

0xac6d,	// (0x000b6540) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x000bab5f) list_medium_line_x4_t5_t

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g1

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g2

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g3

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x000baa99) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x000baa99) list_medium_line_t4_g4_g

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t3

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t4_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x000baaa2) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x000baaa2) list_medium_line_t4_g4_t

0x1e52,	// (0x000ad725) chi_dic_find_pane_g1

0x2f07,	// (0x000ae7da) main_tport_pane

0xac6d,	// (0x000b6540) list_medium_line_plain_t1

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_t2_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_t2_g2_t

0xa338,	// (0x000b5c0b) aid_sp_fs_list_icon_a_sm

0xb1a4,	// (0x000b6a77) aid_sp_fs_list_icon_d

0xc3e0,	// (0x000b7cb3) aid_sp_fs_text_primary

0xa340,	// (0x000b5c13) aid_sp_fs_text_secondary

0x9445,	// (0x000b4d18) list_medium_line

0x9445,	// (0x000b4d18) list_medium_line_g2

0x9445,	// (0x000b4d18) list_medium_line_g3

0x9445,	// (0x000b4d18) list_medium_line_plain

0x9445,	// (0x000b4d18) list_medium_line_plain_t2

0x9445,	// (0x000b4d18) list_medium_line_plain_t3

0x9445,	// (0x000b4d18) list_medium_line_right_icon

0x9445,	// (0x000b4d18) list_medium_line_right_iconx2

0x9445,	// (0x000b4d18) list_medium_line_t2

0x9445,	// (0x000b4d18) list_medium_line_t2_g2

0x9445,	// (0x000b4d18) list_medium_line_t2_g3

0x9445,	// (0x000b4d18) list_medium_line_t2_right_icon

0x9445,	// (0x000b4d18) list_medium_line_t2_right_iconx2

0x9445,	// (0x000b4d18) list_medium_line_t3

0x9445,	// (0x000b4d18) list_medium_line_t3_g2

0x9445,	// (0x000b4d18) list_medium_line_t3_g3

0x9445,	// (0x000b4d18) list_medium_line_t3_right_iconx2

0x9445,	// (0x000b4d18) list_medium_line_t4_g4

0x9445,	// (0x000b4d18) list_medium_line_x2

0x9445,	// (0x000b4d18) list_medium_line_x2_t2_g2

0x9445,	// (0x000b4d18) list_medium_line_x2_t2_g3

0x9445,	// (0x000b4d18) list_medium_line_x2_t2_g4

0x9445,	// (0x000b4d18) list_medium_line_x2_t3

0x9445,	// (0x000b4d18) list_medium_line_x2_t3_g2

0x9445,	// (0x000b4d18) list_medium_line_x2_t3_g3

0x9445,	// (0x000b4d18) list_medium_line_x2_t3_g4

0x9445,	// (0x000b4d18) list_medium_line_x2_t4_g2

0x9445,	// (0x000b4d18) list_medium_line_x2_t4_g4

0x9445,	// (0x000b4d18) list_medium_line_x3

0x9445,	// (0x000b4d18) list_medium_line_x3_t4

0x9445,	// (0x000b4d18) list_medium_line_x3_t4_g4

0x9445,	// (0x000b4d18) list_medium_line_x4_t4

0x9445,	// (0x000b4d18) list_medium_line_x4_t4_g7

0x9445,	// (0x000b4d18) list_medium_line_x4_t5

0x5d43,	// (0x000b1616) list_single_fs_dyc_pane_ParamLimits

0x5d43,	// (0x000b1616) list_single_fs_dyc_pane

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g3

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g4

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g5

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x4_t4_g7_g6

0xa4ce,	// (0x000b5da1) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa4ce,	// (0x000b5da1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x000bb3e0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x000bb3e0) list_medium_line_x4_t4_g7_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x4_t4_g7_t3

0xb0ed,	// (0x000b69c0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb0ed,	// (0x000b69c0) list_medium_line_x4_t4_g7_t4

0xb0ed,	// (0x000b69c0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb0ed,	// (0x000b69c0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x000bb3ef) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x000bb3ef) list_medium_line_x4_t4_g7_t

0x6467,	// (0x000b1d3a) list_single_dyc_row_pane_ParamLimits

0x6467,	// (0x000b1d3a) list_single_dyc_row_pane

0x6ce2,	// (0x000b25b5) call5_gesture_pane_ParamLimits

0x6ce2,	// (0x000b25b5) call5_gesture_pane

0x6d38,	// (0x000b260b) call5_windows_pane_ParamLimits

0x6d38,	// (0x000b260b) call5_windows_pane

0x6df4,	// (0x000b26c7) call5_swipe_1_pane_cp_ParamLimits

0x6df4,	// (0x000b26c7) call5_swipe_1_pane_cp

0x6e00,	// (0x000b26d3) call5_swipe_2_pane_cp_ParamLimits

0x6e00,	// (0x000b26d3) call5_swipe_2_pane_cp

0xa6d9,	// (0x000b5fac) call5_image_pane_cp

0x6e0c,	// (0x000b26df) popup_call5_audio_first_window_cp_ParamLimits

0x6e0c,	// (0x000b26df) popup_call5_audio_first_window_cp

0xe183,	// (0x000b9a56) call5_swipe_1_pane_g1_cp_ParamLimits

0xe183,	// (0x000b9a56) call5_swipe_1_pane_g1_cp

0xe1b1,	// (0x000b9a84) call5_swipe_1_pane_g2_cp

0xe19c,	// (0x000b9a6f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe19c,	// (0x000b9a6f) call5_swipe_1_pane_t1_cp

0xe183,	// (0x000b9a56) call5_swipe_2_pane_g1_cp_ParamLimits

0xe183,	// (0x000b9a56) call5_swipe_2_pane_g1_cp

0xe1b9,	// (0x000b9a8c) call5_swipe_2_pane_g2_cp

0xe1c1,	// (0x000b9a94) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1c1,	// (0x000b9a94) call5_swipe_2_pane_t1_cp

0x9af6,	// (0x000b53c9) main_sp_fs_email_pane

0xe1d6,	// (0x000b9aa9) main_sp_fs_listscroll_pane_te

0x6e1a,	// (0x000b26ed) popup_sp_fs_action_menu_pane_ParamLimits

0x6e1a,	// (0x000b26ed) popup_sp_fs_action_menu_pane

0xa70f,	// (0x000b5fe2) bg_sp_fs_ctrlbar_pane_g1

0xe1df,	// (0x000b9ab2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e8,	// (0x000b9abb) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1f1,	// (0x000b9ac4) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa70f,	// (0x000b5fe2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x000bb4dd) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc3d2,	// (0x000b7ca5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc3d2,	// (0x000b7ca5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1fa,	// (0x000b9acd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1fa,	// (0x000b9acd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe206,	// (0x000b9ad9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe206,	// (0x000b9ad9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x000bb4e6) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x000bb4e6) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe212,	// (0x000b9ae5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe212,	// (0x000b9ae5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa70f,	// (0x000b5fe2) list_medium_line_t2_right_icon_g1

0xac6d,	// (0x000b6540) list_medium_line_t2_right_icon_t1

0xac6d,	// (0x000b6540) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x000bb4eb) list_medium_line_t2_right_icon_t

0xb433,	// (0x000b6d06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb433,	// (0x000b6d06) bg_sp_fs_ctrlbar_pane

0x6ead,	// (0x000b2780) main_sp_fs_ctrlbar_button_pane_cp01

0x6eb7,	// (0x000b278a) main_sp_fs_ctrlbar_ddmenu_pane

0xe266,	// (0x000b9b39) main_sp_fs_ctrlbar_pane_g1

0xe272,	// (0x000b9b45) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x000bb4f0) main_sp_fs_ctrlbar_pane_g

0x6ef5,	// (0x000b27c8) main_sp_fs_ctrlbar_pane_t1

0x6f34,	// (0x000b2807) main_sp_fs_ctrlbar_pane

0x6f58,	// (0x000b282b) main_sp_fs_listscroll_pane_te_cp01

0x6f78,	// (0x000b284b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6f78,	// (0x000b284b) popup_sp_fs_action_menu_pane_cp01

0x9af6,	// (0x000b53c9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9af6,	// (0x000b53c9) bg_sp_fs_highlight_list_pane_cp01

0xa357,	// (0x000b5c2a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa357,	// (0x000b5c2a) sp_fs_action_menu_list_gene_pane_g1

0xe299,	// (0x000b9b6c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe299,	// (0x000b9b6c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x000bb4fe) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x000bb4fe) sp_fs_action_menu_list_gene_pane_g

0xa366,	// (0x000b5c39) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa366,	// (0x000b5c39) sp_fs_action_menu_list_gene_pane_t1

0xa37e,	// (0x000b5c51) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa37e,	// (0x000b5c51) sp_fs_action_menu_list_gene_pane

0xe2a6,	// (0x000b9b79) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2a6,	// (0x000b9b79) popup_sp_fs_action_menu_bg_pane

0xa3a1,	// (0x000b5c74) sp_fs_action_menu_list_pane_ParamLimits

0xa3a1,	// (0x000b5c74) sp_fs_action_menu_list_pane

0x6f9d,	// (0x000b2870) sp_fs_scroll_pane_cp01_ParamLimits

0x6f9d,	// (0x000b2870) sp_fs_scroll_pane_cp01

0xac6d,	// (0x000b6540) list_medium_line_plain_t2_t1

0xac6d,	// (0x000b6540) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x000bb4eb) list_medium_line_plain_t2_t

0xac6d,	// (0x000b6540) list_medium_line_plain_t3_t1

0xac6d,	// (0x000b6540) list_medium_line_plain_t3_t2

0xac6d,	// (0x000b6540) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x000bab4f) list_medium_line_plain_t3_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_x2_t2_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_x2_t2_g2_t

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_x2_t4_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t3

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x000baaa2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x000baaa2) list_medium_line_x2_t4_g2_t

0xa70f,	// (0x000b5fe2) list_medium_line_t3_right_iconx2_g1

0xa70f,	// (0x000b5fe2) list_medium_line_t3_right_iconx2_g2

0xa70f,	// (0x000b5fe2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x000bac70) list_medium_line_t3_right_iconx2_g

0xac6d,	// (0x000b6540) list_medium_line_t3_right_iconx2_t1

0xac6d,	// (0x000b6540) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x000bb4eb) list_medium_line_t3_right_iconx2_t

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g3

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x000baa99) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x000baa99) list_medium_line_x3_t4_g4_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t3

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x000baaa2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x000baaa2) list_medium_line_x3_t4_g4_t

0x6fc3,	// (0x000b2896) list_single_dyc_row_text_pane_t1_ParamLimits

0x6fc3,	// (0x000b2896) list_single_dyc_row_text_pane_t1

0x700c,	// (0x000b28df) list_single_dyc_row_text_pane_t2_ParamLimits

0x700c,	// (0x000b28df) list_single_dyc_row_text_pane_t2

0xa3c5,	// (0x000b5c98) list_single_dyc_row_text_pane_t3_ParamLimits

0xa3c5,	// (0x000b5c98) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x000bb503) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x000bb503) list_single_dyc_row_text_pane_t

0xa3e9,	// (0x000b5cbc) list_single_dyc_row_pane_g1_ParamLimits

0xa3e9,	// (0x000b5cbc) list_single_dyc_row_pane_g1

0xa3f5,	// (0x000b5cc8) list_single_dyc_row_pane_g2_ParamLimits

0xa3f5,	// (0x000b5cc8) list_single_dyc_row_pane_g2

0xb1ac,	// (0x000b6a7f) list_single_dyc_row_pane_g3_ParamLimits

0xb1ac,	// (0x000b6a7f) list_single_dyc_row_pane_g3

0xb1b8,	// (0x000b6a8b) list_single_dyc_row_pane_g4_ParamLimits

0xb1b8,	// (0x000b6a8b) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x000bb510) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x000bb510) list_single_dyc_row_pane_g

0xb1c4,	// (0x000b6a97) list_single_dyc_row_text_pane_ParamLimits

0xb1c4,	// (0x000b6a97) list_single_dyc_row_text_pane

0x9445,	// (0x000b4d18) bg_sp_fs_scroll_pane

0xe2b4,	// (0x000b9b87) thumb_sp_fs_scroll_pane

0xa4c0,	// (0x000b5d93) list_medium_line_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g1

0xa6e1,	// (0x000b5fb4) list_medium_line_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_x2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t1

0xa4c0,	// (0x000b5d93) list_medium_line_x3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x3_g1

0xd3e1,	// (0x000b8cb4) list_medium_line_x3_g2_ParamLimits

0xd3e1,	// (0x000b8cb4) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x000bb519) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x000bb519) list_medium_line_x3_g

0xe2bd,	// (0x000b9b90) list_medium_line_x3_t1_ParamLimits

0xe2bd,	// (0x000b9b90) list_medium_line_x3_t1

0xe2d1,	// (0x000b9ba4) thumb_sp_fs_scroll_pane_g1

0xe2da,	// (0x000b9bad) thumb_sp_fs_scroll_pane_g2

0xe2e3,	// (0x000b9bb6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x000bb51e) thumb_sp_fs_scroll_pane_g

0xe2d1,	// (0x000b9ba4) bg_sp_fs_scroll_pane_g1

0xe2da,	// (0x000b9bad) bg_sp_fs_scroll_pane_g2

0xe2e3,	// (0x000b9bb6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x000bb51e) bg_sp_fs_scroll_pane_g

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g1

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g2

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g3

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x000baa99) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x000baa99) list_medium_line_x2_t3_g4_g

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_x2_t3_g4_t

0xa4c0,	// (0x000b5d93) list_medium_line_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_g2_t1

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g2_g1

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g2_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x000baa94) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x000baa94) list_medium_line_t3_g2_g

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_t3_g2_t

0xa70f,	// (0x000b5fe2) list_medium_line_right_icon_g1

0xac6d,	// (0x000b6540) list_medium_line_right_icon_t1

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g1

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_t2_t

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g1

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_t3_t

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g1

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g2

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x000baa86) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x000baa86) list_medium_line_g3_g

0xa6e1,	// (0x000b5fb4) list_medium_line_g3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_g3_t1

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g1

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g2

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x000baa86) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x000baa86) list_medium_line_t2_g3_g

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g3_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g3_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x000baa69) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x000baa69) list_medium_line_t2_g3_t

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g1_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g1

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g2_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g2

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g3_ParamLimits

0xa4c0,	// (0x000b5d93) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x000baa86) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x000baa86) list_medium_line_t3_g3_g

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t1_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t1

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t2_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t2

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t3_ParamLimits

0xa6e1,	// (0x000b5fb4) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x000baa8d) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x000baa8d) list_medium_line_t3_g3_t

0xa70f,	// (0x000b5fe2) list_medium_line_right_iconx2_g1

0xa70f,	// (0x000b5fe2) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x000bac6b) list_medium_line_right_iconx2_g

0xac6d,	// (0x000b6540) list_medium_line_right_iconx2_t1

0xa70f,	// (0x000b5fe2) list_medium_line_t2_right_iconx2_g1

0xa70f,	// (0x000b5fe2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x000bac6b) list_medium_line_t2_right_iconx2_g

0xac6d,	// (0x000b6540) list_medium_line_t2_right_iconx2_t1

0xac6d,	// (0x000b6540) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x000bb4eb) list_medium_line_t2_right_iconx2_t

0xac6d,	// (0x000b6540) list_medium_line_x4_t4_t1

0xac6d,	// (0x000b6540) list_medium_line_x4_t4_t2

0xac6d,	// (0x000b6540) list_medium_line_x4_t4_t3

0xac6d,	// (0x000b6540) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x000bab56) list_medium_line_x4_t4_t

0x7185,	// (0x000b2a58) tport_appsw_pane_ParamLimits

0x7185,	// (0x000b2a58) tport_appsw_pane

0x719d,	// (0x000b2a70) tport_contact_pane_ParamLimits

0x719d,	// (0x000b2a70) tport_contact_pane

0x71b8,	// (0x000b2a8b) tport_listscroll_pane_ParamLimits

0x71b8,	// (0x000b2a8b) tport_listscroll_pane

0x71d0,	// (0x000b2aa3) cell_tport_appsw_pane_ParamLimits

0x71d0,	// (0x000b2aa3) cell_tport_appsw_pane

0xb411,	// (0x000b6ce4) tport_appsw_pane_g1_ParamLimits

0xb411,	// (0x000b6ce4) tport_appsw_pane_g1

0x721a,	// (0x000b2aed) tport_contact_pane_g1

0x7223,	// (0x000b2af6) tport_contact_pane_t1

0x7231,	// (0x000b2b04) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x000bb525) tport_contact_pane_t

0xe2ec,	// (0x000b9bbf) list_tport_pane

0xe2f5,	// (0x000b9bc8) scroll_pane_cp_030

0x7247,	// (0x000b2b1a) cell_tport_appsw_pane_g1

0x7257,	// (0x000b2b2a) cell_tport_appsw_pane_t1

0x7265,	// (0x000b2b38) grid_highlight_pane_cp019

0x726d,	// (0x000b2b40) list_tport_double_graphic_pane_ParamLimits

0x726d,	// (0x000b2b40) list_tport_double_graphic_pane

0x9af6,	// (0x000b53c9) list_highlight_pane_cp023_ParamLimits

0x9af6,	// (0x000b53c9) list_highlight_pane_cp023

0x727a,	// (0x000b2b4d) list_tport_double_graphic_pane_g1_ParamLimits

0x727a,	// (0x000b2b4d) list_tport_double_graphic_pane_g1

0x7287,	// (0x000b2b5a) list_tport_double_graphic_pane_t1_ParamLimits

0x7287,	// (0x000b2b5a) list_tport_double_graphic_pane_t1

0x729c,	// (0x000b2b6f) list_tport_double_graphic_pane_t2_ParamLimits

0x729c,	// (0x000b2b6f) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x000bb531) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x000bb531) list_tport_double_graphic_pane_t

0x9445,	// (0x000b4d18) main_cale_note_pane

0x4e5c,	// (0x000b072f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4e5c,	// (0x000b072f) cell_vitu2_function_top_wide_pane_cp01

0x6807,	// (0x000b20da) wait_bar_pane_cp05_ParamLimits

0x9af6,	// (0x000b53c9) listscroll_cmail_pane

0xe306,	// (0x000b9bd9) list_cmail_pane

0x72ae,	// (0x000b2b81) list_cmail_body_pane

0x72c5,	// (0x000b2b98) list_single_cmail_header_caption_pane

0x72df,	// (0x000b2bb2) list_single_cmail_header_detail_pane_ParamLimits

0x72df,	// (0x000b2bb2) list_single_cmail_header_detail_pane

0xe31d,	// (0x000b9bf0) list_single_cmail_header_caption_pane_t1

0x7312,	// (0x000b2be5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7312,	// (0x000b2be5) list_single_cmail_header_detail_pane_g1

0xb1e3,	// (0x000b6ab6) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb1e3,	// (0x000b6ab6) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x000bb536) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x000bb536) list_single_cmail_header_detail_pane_g

0x732a,	// (0x000b2bfd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x732a,	// (0x000b2bfd) list_single_cmail_header_detail_pane_t1

0x7366,	// (0x000b2c39) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7366,	// (0x000b2c39) list_single_cmail_header_editor_pane_bg

0xdf69,	// (0x000b983c) list_cmail_body_pane_g1

0xe341,	// (0x000b9c14) list_cmail_body_pane_t1

0xd2c7,	// (0x000b8b9a) list_single_cmail_header_editor_pane_bg_g1

0xa933,	// (0x000b6206) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2d7,	// (0x000b8baa) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2cf,	// (0x000b8ba2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd547,	// (0x000b8e1a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2f7,	// (0x000b8bca) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2e7,	// (0x000b8bba) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2ef,	// (0x000b8bc2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa913,	// (0x000b61e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x737d,	// (0x000b2c50) calenote_gesture_pane_ParamLimits

0x737d,	// (0x000b2c50) calenote_gesture_pane

0x739d,	// (0x000b2c70) calenote_window_pane_ParamLimits

0x739d,	// (0x000b2c70) calenote_window_pane

0xe34f,	// (0x000b9c22) popup_note_window_cp01

0x73b9,	// (0x000b2c8c) calenote_swipe_1_pane_ParamLimits

0x73b9,	// (0x000b2c8c) calenote_swipe_1_pane

0x6e00,	// (0x000b26d3) calenote_swipe_2_pane_ParamLimits

0x6e00,	// (0x000b26d3) calenote_swipe_2_pane

0xe183,	// (0x000b9a56) calenote_swipe_1_pane_g1_ParamLimits

0xe183,	// (0x000b9a56) calenote_swipe_1_pane_g1

0xe190,	// (0x000b9a63) calenote_swipe_1_pane_g2_ParamLimits

0xe190,	// (0x000b9a63) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x000bb4d3) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x000bb4d3) calenote_swipe_1_pane_g

0xe361,	// (0x000b9c34) calenote_swipe_1_pane_t1_ParamLimits

0xe361,	// (0x000b9c34) calenote_swipe_1_pane_t1

0xe183,	// (0x000b9a56) calenote_swipe_2_pane_g1_ParamLimits

0xe183,	// (0x000b9a56) calenote_swipe_2_pane_g1

0xe380,	// (0x000b9c53) calenote_swipe_2_pane_g2_ParamLimits

0xe380,	// (0x000b9c53) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x000bb542) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x000bb542) calenote_swipe_2_pane_g

0xe38c,	// (0x000b9c5f) calenote_swipe_2_pane_t1_ParamLimits

0xe38c,	// (0x000b9c5f) calenote_swipe_2_pane_t1

0x9445,	// (0x000b4d18) main_mup_navstr_pane

0x3ca5,	// (0x000af578) main_mup3_pane_t7_ParamLimits

0x3ca5,	// (0x000af578) main_mup3_pane_t7

0x9e78,	// (0x000b574b) main_mp4_pane_g6_ParamLimits

0x9e78,	// (0x000b574b) main_mp4_pane_g6

0xa03a,	// (0x000b590d) main_image3_pane_t4_ParamLimits

0xa03a,	// (0x000b590d) main_image3_pane_t4

0x73ce,	// (0x000b2ca1) popup_navstr_preview_pane_ParamLimits

0x73ce,	// (0x000b2ca1) popup_navstr_preview_pane

0x73de,	// (0x000b2cb1) scroll_navstr_pane_ParamLimits

0x73de,	// (0x000b2cb1) scroll_navstr_pane

0x9445,	// (0x000b4d18) bg_popup_preview_window_pane_cp04

0xe3cd,	// (0x000b9ca0) popup_navstr_preview_pane_t1

0x73f2,	// (0x000b2cc5) scroll_navstr_pane_g1_ParamLimits

0x73f2,	// (0x000b2cc5) scroll_navstr_pane_g1

0x7406,	// (0x000b2cd9) scroll_navstr_pane_t1_ParamLimits

0x7406,	// (0x000b2cd9) scroll_navstr_pane_t1

0xe358,	// (0x000b9c2b) bg_button_pane_cp014

0xe358,	// (0x000b9c2b) bg_button_pane_cp030

0x6c88,	// (0x000b255b) list_double_fisheye_pane_g4_ParamLimits

0x6c88,	// (0x000b255b) list_double_fisheye_pane_g4

0x6c94,	// (0x000b2567) list_double_fisheye_pane_g5_ParamLimits

0x6c94,	// (0x000b2567) list_double_fisheye_pane_g5

0xb405,	// (0x000b6cd8) sp_fs_scroll_pane_cp03

0xe266,	// (0x000b9b39) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe272,	// (0x000b9b45) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x000bb4f0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6ef5,	// (0x000b27c8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe315,	// (0x000b9be8) sp_fs_scroll_pane_cp02

0xa635,	// (0x000b5f08) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa635,	// (0x000b5f08) popup_sp_fs_calendar_preview_list_single_pane

0x9445,	// (0x000b4d18) main_cam6_pano_pane

0x9459,	// (0x000b4d2c) main_mup3_pane_ParamLimits

0x9445,	// (0x000b4d18) main_phacti_pane

0x66d8,	// (0x000b1fab) bg_button_pane_cp11

0x66f2,	// (0x000b1fc5) main_mobtv_info_pane_g2_ParamLimits

0x66f2,	// (0x000b1fc5) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x000bb450) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x000bb450) main_mobtv_info_pane_g

0x68cf,	// (0x000b21a2) sc_clock_pane_t5_ParamLimits

0x68cf,	// (0x000b21a2) sc_clock_pane_t5

0x6b03,	// (0x000b23d6) main_radioblah_pane_g1_ParamLimits

0xe0cf,	// (0x000b99a2) main_radioblah_pane_t3_ParamLimits

0xe0cf,	// (0x000b99a2) main_radioblah_pane_t3

0xe0e7,	// (0x000b99ba) main_radioblah_pane_t4_ParamLimits

0xe0e7,	// (0x000b99ba) main_radioblah_pane_t4

0x6b2b,	// (0x000b23fe) main_radioblah_text_pane_ParamLimits

0x6b2b,	// (0x000b23fe) main_radioblah_text_pane

0x6b3d,	// (0x000b2410) main_radioblah_info_pane_g1_ParamLimits

0x6bd6,	// (0x000b24a9) main_radioblah_info_pane_t4_ParamLimits

0x6bd6,	// (0x000b24a9) main_radioblah_info_pane_t4

0x9af6,	// (0x000b53c9) main_sp_fs_calendar_pane

0x741d,	// (0x000b2cf0) main_phacti_pane_g1

0x7425,	// (0x000b2cf8) phacti_note_pane_ParamLimits

0x7425,	// (0x000b2cf8) phacti_note_pane

0xe3e4,	// (0x000b9cb7) phacti_term_pane_ParamLimits

0xe3e4,	// (0x000b9cb7) phacti_term_pane

0xe3f9,	// (0x000b9ccc) phacti_note_pane_t1_ParamLimits

0xe3f9,	// (0x000b9ccc) phacti_note_pane_t1

0xb213,	// (0x000b6ae6) phacti_term_pane_g1

0xb21b,	// (0x000b6aee) phacti_term_pane_t1_ParamLimits

0xb21b,	// (0x000b6aee) phacti_term_pane_t1

0xe410,	// (0x000b9ce3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe418,	// (0x000b9ceb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x000bb54c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe420,	// (0x000b9cf3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe420,	// (0x000b9cf3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe436,	// (0x000b9d09) aid_popup_sp_fs_bg_corner_pane

0xa70f,	// (0x000b5fe2) popup_sp_fs_calendar_preview_bg_pane_g1

0x9445,	// (0x000b4d18) popup_sp_fs_calendar_preview_bg_pane

0xe43e,	// (0x000b9d11) popup_sp_fs_calendar_preview_list_pane

0xb433,	// (0x000b6d06) bg_main_sp_fs_cale_pane_ParamLimits

0xb433,	// (0x000b6d06) bg_main_sp_fs_cale_pane

0xb24e,	// (0x000b6b21) listscroll_cale_mrui_pane_ParamLimits

0xb24e,	// (0x000b6b21) listscroll_cale_mrui_pane

0xb263,	// (0x000b6b36) listscroll_sp_fs_schedule_track_pane

0xb26c,	// (0x000b6b3f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb26c,	// (0x000b6b3f) main_sp_fs_ctrlbar_pane_cp01

0xe446,	// (0x000b9d19) main_sp_fs_ribbon_pane

0xb27f,	// (0x000b6b52) popup_sp_fs_cale_preview_window

0x749a,	// (0x000b2d6d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x749a,	// (0x000b2d6d) list_single_sp_fs_schedule_track_pane

0x9af6,	// (0x000b53c9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9af6,	// (0x000b53c9) bg_sp_fs_highlight_list_pane_cp03

0x74ad,	// (0x000b2d80) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x74ad,	// (0x000b2d80) list_single_sp_fs_schedule_track_pane_g1

0x74b9,	// (0x000b2d8c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x74b9,	// (0x000b2d8c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x000bb551) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x000bb551) list_single_sp_fs_schedule_track_pane_g

0x74c5,	// (0x000b2d98) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x74c5,	// (0x000b2d98) list_single_sp_fs_schedule_track_pane_t1

0x74e7,	// (0x000b2dba) sp_fs_schedule_track_pane_ParamLimits

0x74e7,	// (0x000b2dba) sp_fs_schedule_track_pane

0xe44e,	// (0x000b9d21) sp_fs_schedule_track_pane_g1

0xe456,	// (0x000b9d29) sp_fs_schedule_track_pane_g2

0xe45e,	// (0x000b9d31) sp_fs_schedule_track_pane_g3

0xe466,	// (0x000b9d39) sp_fs_schedule_track_pane_g4

0xe46e,	// (0x000b9d41) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x000bb556) sp_fs_schedule_track_pane_g

0xd2c7,	// (0x000b8b9a) bg_sp_fs_schedule_viewer_highlight_g1

0xa933,	// (0x000b6206) bg_sp_fs_schedule_viewer_highlight_g2

0xd2cf,	// (0x000b8ba2) bg_sp_fs_schedule_viewer_highlight_g3

0xd2d7,	// (0x000b8baa) bg_sp_fs_schedule_viewer_highlight_g4

0xd547,	// (0x000b8e1a) bg_sp_fs_schedule_viewer_highlight_g5

0xd2e7,	// (0x000b8bba) bg_sp_fs_schedule_viewer_highlight_g6

0xd2ef,	// (0x000b8bc2) bg_sp_fs_schedule_viewer_highlight_g7

0xd2f7,	// (0x000b8bca) bg_sp_fs_schedule_viewer_highlight_g8

0xa913,	// (0x000b61e6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x000bb561) bg_sp_fs_schedule_viewer_highlight_g

0x9445,	// (0x000b4d18) bg_main_sp_fs_ribbon_pane

0x74fc,	// (0x000b2dcf) main_sp_fs_ribbon_pane_g1

0xe476,	// (0x000b9d49) main_sp_fs_ribbon_pane_t1

0x7505,	// (0x000b2dd8) main_sp_fs_ribbon_pane_t2

0xe485,	// (0x000b9d58) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x000bb574) main_sp_fs_ribbon_pane_t

0xe494,	// (0x000b9d67) main_sp_fs_ribbon_scheduler_pane

0xe49c,	// (0x000b9d6f) bg_main_sp_fs_ribbon_pane_g1

0xe4a5,	// (0x000b9d78) bg_main_sp_fs_ribbon_pane_g2

0xe4ae,	// (0x000b9d81) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x000bb57b) bg_main_sp_fs_ribbon_pane_g

0xe4b6,	// (0x000b9d89) main_sp_fs_ribbon_scheduler_pane_g1

0xe4bf,	// (0x000b9d92) main_sp_fs_ribbon_scheduler_pane_g2

0xe4c8,	// (0x000b9d9b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x000bb582) main_sp_fs_ribbon_scheduler_pane_g

0xe4d1,	// (0x000b9da4) list_cale_mrui_pane

0x7514,	// (0x000b2de7) sp_fs_scroll_pane_cp07_ParamLimits

0x7514,	// (0x000b2de7) sp_fs_scroll_pane_cp07

0x7530,	// (0x000b2e03) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7530,	// (0x000b2e03) bg_sp_fs_schedule_viewer_highlight

0xe4de,	// (0x000b9db1) list_single_sp_fs_schedule_track_pane_cp01

0xe4e6,	// (0x000b9db9) list_sp_fs_schedule_track_pane

0xe4ee,	// (0x000b9dc1) sp_fs_scroll_pane_cp06_ParamLimits

0xe4ee,	// (0x000b9dc1) sp_fs_scroll_pane_cp06

0xa70f,	// (0x000b5fe2) bgmain_sp_fs_calendar_pane_g1

0x7542,	// (0x000b2e15) list_single_cale_mrui_pane_ParamLimits

0x7542,	// (0x000b2e15) list_single_cale_mrui_pane

0xb291,	// (0x000b6b64) list_single_cale_mrui_row_pane_ParamLimits

0xb291,	// (0x000b6b64) list_single_cale_mrui_row_pane

0xb29e,	// (0x000b6b71) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb29e,	// (0x000b6b71) list_single_cale_mrui_row_pane_g1

0xb2d6,	// (0x000b6ba9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb2d6,	// (0x000b6ba9) list_single_cale_mrui_row_pane_t1

0x7562,	// (0x000b2e35) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7562,	// (0x000b2e35) list_single_cale_mrui_row_pane_t2

0xb2e8,	// (0x000b6bbb) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb2e8,	// (0x000b6bbb) list_single_cale_mrui_row_pane_t3

0xb317,	// (0x000b6bea) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb317,	// (0x000b6bea) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x000bb590) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x000bb590) list_single_cale_mrui_row_pane_t

0x75c8,	// (0x000b2e9b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x75c8,	// (0x000b2e9b) list_single_cmail_header_editor_pane_bg_cp01

0x75f4,	// (0x000b2ec7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x75f4,	// (0x000b2ec7) list_single_cmail_header_editor_pane_bg_cp02

0x7614,	// (0x000b2ee7) main_radioblah_text_pane_t1_ParamLimits

0x7614,	// (0x000b2ee7) main_radioblah_text_pane_t1

0xe50d,	// (0x000b9de0) cam6_indi_pane_cp01

0xe515,	// (0x000b9de8) cam6_mode_pane_cp01

0xe51d,	// (0x000b9df0) cam6_pano_pane

0xe526,	// (0x000b9df9) cam6_zoom_pane_cp01

0xe530,	// (0x000b9e03) cam6_pano_image_pane

0xe539,	// (0x000b9e0c) cam6_pano_pane_g1

0xdf69,	// (0x000b983c) cam6_pano_pane_g2

0xe542,	// (0x000b9e15) cam6_pano_pane_g3

0xe54b,	// (0x000b9e1e) cam6_pano_pane_g4

0xcf8d,	// (0x000b8860) cam6_pano_pane_g5

0xe554,	// (0x000b9e27) cam6_pano_pane_g6

0xe55c,	// (0x000b9e2f) cam6_pano_pane_g7

0xe564,	// (0x000b9e37) cam6_pano_pane_g8

0xe56d,	// (0x000b9e40) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x000bb599) cam6_pano_pane_g

0x9445,	// (0x000b4d18) main_browser_tag_pane

0xe3c5,	// (0x000b9c98) grid_navstr_albumart_pane

0xe578,	// (0x000b9e4b) cell_navstr_albumart_pane_ParamLimits

0xe578,	// (0x000b9e4b) cell_navstr_albumart_pane

0xe594,	// (0x000b9e67) cell_navstr_albumart_pane_g1

0xc4c7,	// (0x000b7d9a) cell_navstr_albumart_pane_g2

0xc4d7,	// (0x000b7daa) cell_navstr_albumart_pane_g3

0xc4cf,	// (0x000b7da2) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x000bb5ac) cell_navstr_albumart_pane_g

0x762f,	// (0x000b2f02) bt_list_pane_ParamLimits

0x762f,	// (0x000b2f02) bt_list_pane

0x7645,	// (0x000b2f18) bt_list_pane_t1

0x7654,	// (0x000b2f27) bt_list_pane_t2

0x0001,

0xfce2,	// (0x000bb5b5) bt_list_pane_t

0x9445,	// (0x000b4d18) main_cale_prevew_pane

0x7663,	// (0x000b2f36) popup_cale_preview_window_ParamLimits

0x7663,	// (0x000b2f36) popup_cale_preview_window

0x9af6,	// (0x000b53c9) bg_popup_preview_window_pane_cp05_ParamLimits

0x9af6,	// (0x000b53c9) bg_popup_preview_window_pane_cp05

0xe59c,	// (0x000b9e6f) list_cale_preview_pane_ParamLimits

0xe59c,	// (0x000b9e6f) list_cale_preview_pane

0x7680,	// (0x000b2f53) list_double_cale_preview_pane_ParamLimits

0x7680,	// (0x000b2f53) list_double_cale_preview_pane

0x7694,	// (0x000b2f67) list_single_cale_preview_pane_ParamLimits

0x7694,	// (0x000b2f67) list_single_cale_preview_pane

0x76ac,	// (0x000b2f7f) list_single_cale_preview_pane_g1

0x76b4,	// (0x000b2f87) list_single_cale_preview_pane_t1_ParamLimits

0x76b4,	// (0x000b2f87) list_single_cale_preview_pane_t1

0x76c9,	// (0x000b2f9c) list_double_cale_preview_pane_g1

0x76d1,	// (0x000b2fa4) list_double_cale_preview_pane_t1_ParamLimits

0x76d1,	// (0x000b2fa4) list_double_cale_preview_pane_t1

0x76e6,	// (0x000b2fb9) list_double_cale_preview_pane_t2_ParamLimits

0x76e6,	// (0x000b2fb9) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x000bb5ba) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x000bb5ba) list_double_cale_preview_pane_t

0x9445,	// (0x000b4d18) main_ezdial_pane

0x9af6,	// (0x000b53c9) main_sp_fs_email_pane_ParamLimits

0x6e60,	// (0x000b2733) cmail_ddmenu_btn01_pane_ParamLimits

0x6e60,	// (0x000b2733) cmail_ddmenu_btn01_pane

0x6e73,	// (0x000b2746) cmail_ddmenu_btn02_pane_ParamLimits

0x6e73,	// (0x000b2746) cmail_ddmenu_btn02_pane

0x6e96,	// (0x000b2769) cmail_ddmenu_btn03_pane_ParamLimits

0x6e96,	// (0x000b2769) cmail_ddmenu_btn03_pane

0x6f34,	// (0x000b2807) main_sp_fs_ctrlbar_pane_ParamLimits

0x6f58,	// (0x000b282b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x72ae,	// (0x000b2b81) list_cmail_body_pane_ParamLimits

0xe32b,	// (0x000b9bfe) bg_button_pane_cp12

0xe334,	// (0x000b9c07) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe334,	// (0x000b9c07) list_single_cmail_header_detail_pane_g3

0xb1ef,	// (0x000b6ac2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xb1ef,	// (0x000b6ac2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x000bb53d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x000bb53d) list_single_cmail_header_detail_pane_t

0xb230,	// (0x000b6b03) phacti_term_pane_t2_ParamLimits

0xb230,	// (0x000b6b03) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x000bb547) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x000bb547) phacti_term_pane_t

0xe5a8,	// (0x000b9e7b) aid_size_list_single_double

0x76fe,	// (0x000b2fd1) popup_ezdial_listscroll_window

0x771a,	// (0x000b2fed) popup_number_entry_window_cp01

0xa6d9,	// (0x000b5fac) bg_popup_call_pane_cp09

0xe5b4,	// (0x000b9e87) ezdial_list_pane

0xe5bc,	// (0x000b9e8f) scroll_pane_cp23

0xb433,	// (0x000b6d06) bg_button_pane_cp028_ParamLimits

0xb433,	// (0x000b6d06) bg_button_pane_cp028

0x7728,	// (0x000b2ffb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7728,	// (0x000b2ffb) cmail_ddmenu_btn01_pane_g1

0x7737,	// (0x000b300a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7737,	// (0x000b300a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x000bb5bf) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x000bb5bf) cmail_ddmenu_btn01_pane_g

0xe5c4,	// (0x000b9e97) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5c4,	// (0x000b9e97) cmail_ddmenu_btn01_pane_t1

0xb433,	// (0x000b6d06) bg_button_pane_cp029_ParamLimits

0xb433,	// (0x000b6d06) bg_button_pane_cp029

0x774d,	// (0x000b3020) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x774d,	// (0x000b3020) cmail_ddmenu_btn02_pane_g1

0x7768,	// (0x000b303b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7768,	// (0x000b303b) cmail_ddmenu_btn02_pane_t1

0x9af6,	// (0x000b53c9) bg_button_pane_cp031_ParamLimits

0x9af6,	// (0x000b53c9) bg_button_pane_cp031

0x774d,	// (0x000b3020) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x774d,	// (0x000b3020) cmail_ddmenu_btn03_pane_g1

0x7768,	// (0x000b303b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7768,	// (0x000b303b) cmail_ddmenu_btn03_pane_t1

0x4630,	// (0x000aff03) cell_dialer2_keypad_pane_t1_ParamLimits

0x464a,	// (0x000aff1d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x464a,	// (0x000aff1d) cell_dialer2_keypad_pane_t1_copy1

0x64f9,	// (0x000b1dcc) ncimui_group_button_pane

0x9af6,	// (0x000b53c9) main_sp_fs_calendar_pane_ParamLimits

0x72c5,	// (0x000b2b98) list_single_cmail_header_caption_pane_ParamLimits

0xb245,	// (0x000b6b18) aid_recal_txt_sm_pane

0x9445,	// (0x000b4d18) mian_recal_day_pane

0xb27f,	// (0x000b6b52) popup_sp_fs_cale_preview_window_ParamLimits

0xe5da,	// (0x000b9ead) list_recal_day_pane

0xb364,	// (0x000b6c37) list_single_recal_day_pane_ParamLimits

0xb364,	// (0x000b6c37) list_single_recal_day_pane

0xe601,	// (0x000b9ed4) list_single_recal_day_pane_g1_ParamLimits

0xe601,	// (0x000b9ed4) list_single_recal_day_pane_g1

0xb376,	// (0x000b6c49) list_single_recal_day_pane_g2_ParamLimits

0xb376,	// (0x000b6c49) list_single_recal_day_pane_g2

0xb382,	// (0x000b6c55) list_single_recal_day_pane_g3_ParamLimits

0xb382,	// (0x000b6c55) list_single_recal_day_pane_g3

0x778f,	// (0x000b3062) list_single_recal_day_pane_g4_ParamLimits

0x778f,	// (0x000b3062) list_single_recal_day_pane_g4

0xb38e,	// (0x000b6c61) list_single_recal_day_pane_g5_ParamLimits

0xb38e,	// (0x000b6c61) list_single_recal_day_pane_g5

0xb39a,	// (0x000b6c6d) list_single_recal_day_pane_g6_ParamLimits

0xb39a,	// (0x000b6c6d) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x000bb5ce) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x000bb5ce) list_single_recal_day_pane_g

0xb3ae,	// (0x000b6c81) list_single_recal_day_pane_t1

0xb3c0,	// (0x000b6c93) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x000bb5d9) list_single_recal_day_pane_t

0x77a7,	// (0x000b307a) ncimui_query_button_pane_ParamLimits

0x77a7,	// (0x000b307a) ncimui_query_button_pane

0x77b7,	// (0x000b308a) ncimui_query_button_pane_t1_ParamLimits

0x77b7,	// (0x000b308a) ncimui_query_button_pane_t1

0xe60d,	// (0x000b9ee0) ncimui_query_button_pane_t2_ParamLimits

0xe60d,	// (0x000b9ee0) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x000bb5de) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x000bb5de) ncimui_query_button_pane_t

0x77ca,	// (0x000b309d) query_button_pane_ParamLimits

0x77ca,	// (0x000b309d) query_button_pane

0x9445,	// (0x000b4d18) bg_button_pane_cp0028

0xe620,	// (0x000b9ef3) query_button_pane_t1

0x2f07,	// (0x000ae7da) main_tport_pane_ParamLimits

0x7141,	// (0x000b2a14) bg_popup_window_pane_cp01_ParamLimits

0x7141,	// (0x000b2a14) bg_popup_window_pane_cp01

0x715a,	// (0x000b2a2d) heading_pane_cp08_ParamLimits

0x715a,	// (0x000b2a2d) heading_pane_cp08

0x7170,	// (0x000b2a43) heading_pane_cp07_ParamLimits

0x7170,	// (0x000b2a43) heading_pane_cp07

0x7247,	// (0x000b2b1a) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x000bb52a) cell_tport_appsw_pane_g

0x23f5,	// (0x000adcc8) input_candi_list_open_g1

0xab0d,	// (0x000b63e0) list_cale_time_pane_g6_ParamLimits

0xab0d,	// (0x000b63e0) list_cale_time_pane_g6

0x35c4,	// (0x000aee97) aid_size_touch_calib_1_ParamLimits

0x35c4,	// (0x000aee97) aid_size_touch_calib_1

0x35d6,	// (0x000aeea9) aid_size_touch_calib_2_ParamLimits

0x35d6,	// (0x000aeea9) aid_size_touch_calib_2

0x35ee,	// (0x000aeec1) aid_size_touch_calib_3_ParamLimits

0x35ee,	// (0x000aeec1) aid_size_touch_calib_3

0x360c,	// (0x000aeedf) aid_size_touch_calib_4_ParamLimits

0x360c,	// (0x000aeedf) aid_size_touch_calib_4

0x3624,	// (0x000aeef7) main_touch_calib_button_group_pane_ParamLimits

0x3624,	// (0x000aeef7) main_touch_calib_button_group_pane

0x363c,	// (0x000aef0f) main_touch_calib_pane_g1_ParamLimits

0x364e,	// (0x000aef21) main_touch_calib_pane_g2_ParamLimits

0x3660,	// (0x000aef33) main_touch_calib_pane_g3_ParamLimits

0x3672,	// (0x000aef45) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x000baf6c) main_touch_calib_pane_g_ParamLimits

0x3684,	// (0x000aef57) main_touch_calib_pane_t1_ParamLimits

0x369e,	// (0x000aef71) main_touch_calib_pane_t2_ParamLimits

0x36b8,	// (0x000aef8b) main_touch_calib_pane_t3_ParamLimits

0x36cc,	// (0x000aef9f) main_touch_calib_pane_t4_ParamLimits

0x36e2,	// (0x000aefb5) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x000baf75) main_touch_calib_pane_t_ParamLimits

0xcd40,	// (0x000b8613) list_single_fp_cale_pane_g3_ParamLimits

0xcd40,	// (0x000b8613) list_single_fp_cale_pane_g3

0x9459,	// (0x000b4d2c) bg_button_pane_cp012_ParamLimits

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp03_ParamLimits

0x567d,	// (0x000b0f50) cell_vitu2_function_top_pane_g1_ParamLimits

0x9459,	// (0x000b4d2c) bg_vkb2_func_pane_cp04_ParamLimits

0x6484,	// (0x000b1d57) main_ncimui_button_group_pane_ParamLimits

0x6484,	// (0x000b1d57) main_ncimui_button_group_pane

0x64e4,	// (0x000b1db7) main_ncimui_pane_t3_ParamLimits

0x64e4,	// (0x000b1db7) main_ncimui_pane_t3

0xe3db,	// (0x000b9cae) phacti_button_group_pane

0xe5a8,	// (0x000b9e7b) aid_size_list_single_double_ParamLimits

0x76fe,	// (0x000b2fd1) popup_ezdial_listscroll_window_ParamLimits

0x771a,	// (0x000b2fed) popup_number_entry_window_cp01_ParamLimits

0x77dd,	// (0x000b30b0) phacti_button_pane_ParamLimits

0x77dd,	// (0x000b30b0) phacti_button_pane

0x9445,	// (0x000b4d18) bg_button_pane_cp14

0xe62e,	// (0x000b9f01) phacti_button_pane_t1

0x77ee,	// (0x000b30c1) main_touch_calib_button_pane_ParamLimits

0x77ee,	// (0x000b30c1) main_touch_calib_button_pane

0xa532,	// (0x000b5e05) bg_button_pane_cp18_ParamLimits

0xa532,	// (0x000b5e05) bg_button_pane_cp18

0xe63c,	// (0x000b9f0f) main_touch_calib_button_pane_t1_ParamLimits

0xe63c,	// (0x000b9f0f) main_touch_calib_button_pane_t1

0xe652,	// (0x000b9f25) main_touch_calib_button_pane_t2_ParamLimits

0xe652,	// (0x000b9f25) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x000bb5e3) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x000bb5e3) main_touch_calib_button_pane_t

0x9445,	// (0x000b4d18) cell_ncimui_button_pane

0x9445,	// (0x000b4d18) bg_button_pane_cp032

0xe670,	// (0x000b9f43) cell_ncimui_button_pane_t1

0xa018,	// (0x000b58eb) image3_infobar_pane_ParamLimits

0xa018,	// (0x000b58eb) image3_infobar_pane

0x68fb,	// (0x000b21ce) fs_bigclock_status_pane_ParamLimits

0x68fb,	// (0x000b21ce) fs_bigclock_status_pane

0x6908,	// (0x000b21db) main_fs_bigclock_clock_pane_ParamLimits

0x6908,	// (0x000b21db) main_fs_bigclock_clock_pane

0x693a,	// (0x000b220d) main_fs_bigclock_indi_pane_ParamLimits

0x693a,	// (0x000b220d) main_fs_bigclock_indi_pane

0x697a,	// (0x000b224d) main_fs_bigclock_swipe_pane_ParamLimits

0x697a,	// (0x000b224d) main_fs_bigclock_swipe_pane

0x9445,	// (0x000b4d18) main_fs_clock_dumped_data

0x69c6,	// (0x000b2299) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x69c6,	// (0x000b2299) list_single_fs_bigclock_indicator_pane_g1

0x69df,	// (0x000b22b2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x69df,	// (0x000b22b2) list_single_fs_bigclock_indicator_pane_g2

0x69f9,	// (0x000b22cc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x69f9,	// (0x000b22cc) list_single_fs_bigclock_indicator_pane_g3

0x6a13,	// (0x000b22e6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x6a13,	// (0x000b22e6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x000bb484) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x000bb484) list_single_fs_bigclock_indicator_pane_g

0x6a42,	// (0x000b2315) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x6a42,	// (0x000b2315) list_single_fs_bigclock_indicator_pane_t1

0x6a6a,	// (0x000b233d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6a6a,	// (0x000b233d) list_single_fs_bigclock_indicator_pane_t2

0x6a92,	// (0x000b2365) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x6a92,	// (0x000b2365) list_single_fs_bigclock_indicator_pane_t3

0x6aba,	// (0x000b238d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x6aba,	// (0x000b238d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x000bb48f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x000bb48f) list_single_fs_bigclock_indicator_pane_t

0xe67e,	// (0x000b9f51) image3_infobar_fav_pane_ParamLimits

0xe67e,	// (0x000b9f51) image3_infobar_fav_pane

0xe68e,	// (0x000b9f61) image3_infobar_loc_pane_ParamLimits

0xe68e,	// (0x000b9f61) image3_infobar_loc_pane

0xe6a4,	// (0x000b9f77) image3_infobar_time_pane_ParamLimits

0xe6a4,	// (0x000b9f77) image3_infobar_time_pane

0xa70f,	// (0x000b5fe2) image3_infobar_time_pane_g1

0xe6b4,	// (0x000b9f87) image3_infobar_time_pane_t1

0xa70f,	// (0x000b5fe2) image3_infobar_loc_pane_g1

0xe6c2,	// (0x000b9f95) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x000bb5e8) image3_infobar_loc_pane_g

0xe6ca,	// (0x000b9f9d) image3_infobar_loc_pane_t1

0xa70f,	// (0x000b5fe2) image3_infobar_fav_pane_g1

0xe6d8,	// (0x000b9fab) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x000bb5ed) image3_infobar_fav_pane_g

0xe6e0,	// (0x000b9fb3) fs_bigclock_status_battery_pane

0xe6e9,	// (0x000b9fbc) fs_bigclock_status_signal_pane

0xe6f2,	// (0x000b9fc5) fs_bigclock_status_title_pane

0xe6fb,	// (0x000b9fce) fs_bigclock_status_signal_pane_g1

0xe704,	// (0x000b9fd7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x000bb5f2) fs_bigclock_status_signal_pane_g

0xe70c,	// (0x000b9fdf) fs_bigclock_status_battery_pane_g1

0xe715,	// (0x000b9fe8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x000bb5f7) fs_bigclock_status_battery_pane_g

0xe71d,	// (0x000b9ff0) fs_bigclock_status_title_pane_t1

0x7803,	// (0x000b30d6) main_fs_bigclock_clock_pane_g1

0x7803,	// (0x000b30d6) main_fs_bigclock_clock_pane_g2

0x7816,	// (0x000b30e9) main_fs_bigclock_clock_pane_g3

0x7816,	// (0x000b30e9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x000bb5fc) main_fs_bigclock_clock_pane_g

0x782d,	// (0x000b3100) main_fs_bigclock_clock_pane_t1

0x7843,	// (0x000b3116) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x000bb605) main_fs_bigclock_clock_pane_t

0xe72b,	// (0x000b9ffe) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe72b,	// (0x000b9ffe) list_single_fs_bigclock_indicator_pane

0xe73c,	// (0x000ba00f) list_single_fs_bigclock_pane_ParamLimits

0xe73c,	// (0x000ba00f) list_single_fs_bigclock_pane

0xe762,	// (0x000ba035) main_fs_bigclock_indicator_pane_t1

0xe771,	// (0x000ba044) list_single_fs_bigclock_pane_g1

0xe779,	// (0x000ba04c) list_single_fs_bigclock_pane_t1

0xa70f,	// (0x000b5fe2) main_fs_bigclock_swipe_pane_g1

0xe7bc,	// (0x000ba08f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x000bb616) main_fs_bigclock_swipe_pane_g

0xe7c4,	// (0x000ba097) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7c4,	// (0x000ba097) main_fs_bigclock_swipe_pane_t1

0x1db0,	// (0x000ad683) call_type_pane_ParamLimits

0x9445,	// (0x000b4d18) main_btmg_pane

0xb2ca,	// (0x000b6b9d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb2ca,	// (0x000b6b9d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x000bb589) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x000bb589) list_single_cale_mrui_row_pane_g

0xb352,	// (0x000b6c25) list_recal_vselct_arw_lo_pane

0xe5f9,	// (0x000b9ecc) list_recal_vselct_arw_up_pane

0xb35a,	// (0x000b6c2d) list_recal_vselct_pane

0x78a5,	// (0x000b3178) btmg_button_pane

0x78af,	// (0x000b3182) main_btmg_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp044

0xe7e1,	// (0x000ba0b4) btmg_button_pane_t1

0xc619,	// (0x000b7eec) aid_listscroll_gen

0x9af6,	// (0x000b53c9) main_cntbar_detail_pane

0xe2fe,	// (0x000b9bd1) list_cmail_folder_pane

0xb405,	// (0x000b6cd8) sp_fs_scroll_pane_cp03_ParamLimits

0x78b9,	// (0x000b318c) list_single_fs_dyc_pane_cp01_ParamLimits

0x78b9,	// (0x000b318c) list_single_fs_dyc_pane_cp01

0xe7ef,	// (0x000ba0c2) aid_size_cmail_indent

0xb3d2,	// (0x000b6ca5) list_single_dyc_row_pane_cp01

0x7907,	// (0x000b31da) cntbar_detail_list_pane_ParamLimits

0x7907,	// (0x000b31da) cntbar_detail_list_pane

0x7959,	// (0x000b322c) main_cntbar_detail_cont_pane_ParamLimits

0x7959,	// (0x000b322c) main_cntbar_detail_cont_pane

0xb405,	// (0x000b6cd8) scroll_pane_cp032_ParamLimits

0xb405,	// (0x000b6cd8) scroll_pane_cp032

0x796d,	// (0x000b3240) cntbar_detail_list_event_pane_ParamLimits

0x796d,	// (0x000b3240) cntbar_detail_list_event_pane

0x7919,	// (0x000b31ec) cntbar_detail_list_shct_pane

0xa981,	// (0x000b6254) aid_list_gen

0xe7f8,	// (0x000ba0cb) aid_scroll

0xe801,	// (0x000ba0d4) aid_size_touch_scroll_bar

0x6c53,	// (0x000b2526) aid_list_double

0x797d,	// (0x000b3250) aid_list_single

0x797d,	// (0x000b3250) aid_list_single_lg

0x7986,	// (0x000b3259) aid_list_z_g_a_sm

0x798e,	// (0x000b3261) aid_list_z_g_d

0x7996,	// (0x000b3269) aid_txt_z_prm

0x79a4,	// (0x000b3277) aid_txt_z_prm_cp01

0x79b2,	// (0x000b3285) aid_txt_z_sec

0x79c0,	// (0x000b3293) main_cntbar_detail_cont_pane_g1_ParamLimits

0x79c0,	// (0x000b3293) main_cntbar_detail_cont_pane_g1

0x79d4,	// (0x000b32a7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x79d4,	// (0x000b32a7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x000bb61b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x000bb61b) main_cntbar_detail_cont_pane_g

0xe80a,	// (0x000ba0dd) main_cntbar_detail_cont_pane_t1

0xe818,	// (0x000ba0eb) main_cntbar_detail_cont_pane_t2

0xe826,	// (0x000ba0f9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x000bb620) main_cntbar_detail_cont_pane_t

0x79e4,	// (0x000b32b7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x79e4,	// (0x000b32b7) cell_cntbar_detail_list_shct_pane

0xe834,	// (0x000ba107) cntbar_detail_list_shct_pane_g1

0xe83d,	// (0x000ba110) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x000bb627) cntbar_detail_list_shct_pane_g

0x79f6,	// (0x000b32c9) cntbar_detail_list_event_pane_g1_ParamLimits

0x79f6,	// (0x000b32c9) cntbar_detail_list_event_pane_g1

0x7a02,	// (0x000b32d5) cntbar_detail_list_event_pane_g2_ParamLimits

0x7a02,	// (0x000b32d5) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x000bb62c) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x000bb62c) cntbar_detail_list_event_pane_g

0x7a70,	// (0x000b3343) cntbar_detail_list_event_pane_t1_ParamLimits

0x7a70,	// (0x000b3343) cntbar_detail_list_event_pane_t1

0x7a85,	// (0x000b3358) cntbar_detail_list_event_pane_t2_ParamLimits

0x7a85,	// (0x000b3358) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x000bb639) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x000bb639) cntbar_detail_list_event_pane_t

0xa70f,	// (0x000b5fe2) cell_cntbar_detail_list_shct_pane_g1

0x214a,	// (0x000ada1d) navi_pane_mv_g3

0x9af6,	// (0x000b53c9) main_cntbar_detail_pane_ParamLimits

0x9445,	// (0x000b4d18) main_notif_wgt_pane

0x9e06,	// (0x000b56d9) aid_tch_main_mp4_pane_g4

0xa00e,	// (0x000b58e1) popup_slider_window_cp02

0xb348,	// (0x000b6c1b) list_recal_day_event_pane

0x78d3,	// (0x000b31a6) cntbar_detail_btn_pane_ParamLimits

0x78d3,	// (0x000b31a6) cntbar_detail_btn_pane

0x78ec,	// (0x000b31bf) cntbar_detail_btn_pane_cp01_ParamLimits

0x78ec,	// (0x000b31bf) cntbar_detail_btn_pane_cp01

0x7919,	// (0x000b31ec) cntbar_detail_list_shct_pane_ParamLimits

0x7929,	// (0x000b31fc) cntbar_detail_pane_g1_ParamLimits

0x7929,	// (0x000b31fc) cntbar_detail_pane_g1

0x793d,	// (0x000b3210) cntbar_detail_pane_t1_ParamLimits

0x793d,	// (0x000b3210) cntbar_detail_pane_t1

0x7a0e,	// (0x000b32e1) cntbar_detail_list_event_pane_g3_ParamLimits

0x7a0e,	// (0x000b32e1) cntbar_detail_list_event_pane_g3

0x7a26,	// (0x000b32f9) cntbar_detail_list_event_pane_g4_ParamLimits

0x7a26,	// (0x000b32f9) cntbar_detail_list_event_pane_g4

0x7a3e,	// (0x000b3311) cntbar_detail_list_event_pane_g5_ParamLimits

0x7a3e,	// (0x000b3311) cntbar_detail_list_event_pane_g5

0x7a56,	// (0x000b3329) cntbar_detail_list_event_pane_g6_ParamLimits

0x7a56,	// (0x000b3329) cntbar_detail_list_event_pane_g6

0x7a9a,	// (0x000b336d) cntbar_detail_list_event_pane_t3_ParamLimits

0x7a9a,	// (0x000b336d) cntbar_detail_list_event_pane_t3

0x7aac,	// (0x000b337f) popup_notif_wgt_window_ParamLimits

0x7aac,	// (0x000b337f) popup_notif_wgt_window

0x7ac5,	// (0x000b3398) popup_submenu_window_cp01_ParamLimits

0x7ac5,	// (0x000b3398) popup_submenu_window_cp01

0xa6d9,	// (0x000b5fac) bg_popup_window_pane_cp10

0xe846,	// (0x000ba119) listscroll_notif_wgt_pane

0xe858,	// (0x000ba12b) list_notif_wgt_window

0xe861,	// (0x000ba134) scroll_pane_cp033

0x7ad9,	// (0x000b33ac) list_notif_wgt_row_pane_ParamLimits

0x7ad9,	// (0x000b33ac) list_notif_wgt_row_pane

0xe86a,	// (0x000ba13d) aid_size_list_notif_wgt_del

0xe877,	// (0x000ba14a) list_notif_wgt_row_pane_g1

0xe883,	// (0x000ba156) list_notif_wgt_row_pane_g2

0xe892,	// (0x000ba165) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x000bb640) list_notif_wgt_row_pane_g

0xe89f,	// (0x000ba172) list_notif_wgt_row_pane_t1

0xe8b5,	// (0x000ba188) list_notif_wgt_row_pane_t2

0xe8c7,	// (0x000ba19a) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x000bb647) list_notif_wgt_row_pane_t

0xd561,	// (0x000b8e34) list_recal_day_event_pane_g1

0xe8d9,	// (0x000ba1ac) list_recal_day_event_pane_t1

0x9445,	// (0x000b4d18) bg_button_pane_cp045

0x7ae9,	// (0x000b33bc) cntbar_detail_btn_pane_t1

0xb433,	// (0x000b6d06) main_callh_pane_ParamLimits

0xb433,	// (0x000b6d06) main_callh_pane

0x9445,	// (0x000b4d18) main_coverflow0_pane

0x9445,	// (0x000b4d18) main_wgtman_pane

0x699b,	// (0x000b226e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x699b,	// (0x000b226e) main_fs_bigclock_unlock_btn_pane

0x723f,	// (0x000b2b12) bg_button_pane_cp16

0x724f,	// (0x000b2b22) cell_tport_appsw_pane_g3

0x7af7,	// (0x000b33ca) cf0_flow_pane_ParamLimits

0x7af7,	// (0x000b33ca) cf0_flow_pane

0xe8e8,	// (0x000ba1bb) listscroll_cf0_pane

0xe8f3,	// (0x000ba1c6) main_cf0_pane_g1

0x7b0c,	// (0x000b33df) main_cf0_pane_t1_ParamLimits

0x7b0c,	// (0x000b33df) main_cf0_pane_t1

0x7b23,	// (0x000b33f6) main_cf0_pane_t2_ParamLimits

0x7b23,	// (0x000b33f6) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x000bb653) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x000bb653) main_cf0_pane_t

0xe905,	// (0x000ba1d8) scroll_pane_cp11

0x7b3a,	// (0x000b340d) cf0_flow_pane_g1

0x7b46,	// (0x000b3419) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x000bb658) cf0_flow_pane_g

0x7b52,	// (0x000b3425) cf0_flow_pane_t1

0x9445,	// (0x000b4d18) main_call6_pane

0x9445,	// (0x000b4d18) main_calllock_pane

0x7b64,	// (0x000b3437) call6_btn_grp_pane_ParamLimits

0x7b64,	// (0x000b3437) call6_btn_grp_pane

0x7b7e,	// (0x000b3451) call6_pane_g1_ParamLimits

0x7b7e,	// (0x000b3451) call6_pane_g1

0x7b97,	// (0x000b346a) popup_call6_1st_window_ParamLimits

0x7b97,	// (0x000b346a) popup_call6_1st_window

0x7bab,	// (0x000b347e) popup_call6_2nd_window_ParamLimits

0x7bab,	// (0x000b347e) popup_call6_2nd_window

0x7bbf,	// (0x000b3492) cell_call6_btn_pane_ParamLimits

0x7bbf,	// (0x000b3492) cell_call6_btn_pane

0xa6d9,	// (0x000b5fac) bg_popup_call2_in_pane_cp03

0xe910,	// (0x000ba1e3) popup_call6_1st_window_g1

0xe918,	// (0x000ba1eb) popup_call6_1st_window_g2

0xe920,	// (0x000ba1f3) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x000bb65d) popup_call6_1st_window_g

0xe928,	// (0x000ba1fb) popup_call6_1st_window_t1

0xe937,	// (0x000ba20a) popup_call6_1st_window_t2

0xe947,	// (0x000ba21a) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x000bb664) popup_call6_1st_window_t

0xa6d9,	// (0x000b5fac) bg_popup_call2_in_pane_cp04

0xe957,	// (0x000ba22a) popup_call6_2nd_window_g1

0xe95f,	// (0x000ba232) popup_call6_2nd_window_g2

0xe967,	// (0x000ba23a) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x000bb66b) popup_call6_2nd_window_g

0xe96f,	// (0x000ba242) popup_call6_2nd_window_t1

0x9467,	// (0x000b4d3a) bg_button_pane_cp15

0xa401,	// (0x000b5cd4) cell_call6_btn_pane_g1

0xa40a,	// (0x000b5cdd) cell_call6_btn_pane_t1

0x7bd3,	// (0x000b34a6) listscroll_wgtman_pane_ParamLimits

0x7bd3,	// (0x000b34a6) listscroll_wgtman_pane

0x7bf4,	// (0x000b34c7) wgtman_btn_pane_ParamLimits

0x7bf4,	// (0x000b34c7) wgtman_btn_pane

0xaefc,	// (0x000b67cf) aid_scroll_copy1

0xe97e,	// (0x000ba251) list_wgtman_pane

0x7c37,	// (0x000b350a) wgtman_btn_pane_g1_ParamLimits

0x7c37,	// (0x000b350a) wgtman_btn_pane_g1

0x7c63,	// (0x000b3536) wgtman_btn_pane_t1_ParamLimits

0x7c63,	// (0x000b3536) wgtman_btn_pane_t1

0xe988,	// (0x000ba25b) wgtman_btn_pane_t2_ParamLimits

0xe988,	// (0x000ba25b) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x000bb672) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x000bb672) wgtman_btn_pane_t

0x7ca0,	// (0x000b3573) listrow_wgtman_pane_ParamLimits

0x7ca0,	// (0x000b3573) listrow_wgtman_pane

0x7cb4,	// (0x000b3587) listrow_wgtman_pane_g1

0x7cc1,	// (0x000b3594) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x000bb677) listrow_wgtman_pane_g

0x7cdf,	// (0x000b35b2) listrow_wgtman_pane_t1

0x7cf7,	// (0x000b35ca) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x000bb67c) listrow_wgtman_pane_t

0x7d1d,	// (0x000b35f0) wait_bar_pane_cp09

0xe99f,	// (0x000ba272) main_calllock_btn_pane

0xe9a9,	// (0x000ba27c) main_calllock_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp17

0xe9b5,	// (0x000ba288) main_calllock_btn_pane_g1

0xe9be,	// (0x000ba291) main_calllock_btn_pane_t1

0x9445,	// (0x000b4d18) main_dialer3_pane

0x9445,	// (0x000b4d18) main_fmrd2_pane

0xa70f,	// (0x000b5fe2) main_fs_bigclock_unlock_btn_pane_g1

0x7d37,	// (0x000b360a) main_fs_bigclock_unlock_btn_pane_t1

0x7d45,	// (0x000b3618) area_fmrd2_info_pane_ParamLimits

0x7d45,	// (0x000b3618) area_fmrd2_info_pane

0x7d56,	// (0x000b3629) area_fmrd2_visual_pane_ParamLimits

0x7d56,	// (0x000b3629) area_fmrd2_visual_pane

0x7d64,	// (0x000b3637) fmrd2_indi_pane_ParamLimits

0x7d64,	// (0x000b3637) fmrd2_indi_pane

0x7d71,	// (0x000b3644) area_fmrd2_visual_pane_g1

0x7d79,	// (0x000b364c) area_fmrd2_visual_pane_t1

0x7d89,	// (0x000b365c) area_fmrd2_visual_pane_t2

0x7d99,	// (0x000b366c) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x000bb686) area_fmrd2_visual_pane_t

0x7da9,	// (0x000b367c) area_fmrd2_info_pane_g1

0x7db1,	// (0x000b3684) area_fmrd2_info_pane_t1

0x7dc1,	// (0x000b3694) area_fmrd2_info_pane_t2

0x7dd1,	// (0x000b36a4) area_fmrd2_info_pane_t3

0x7de1,	// (0x000b36b4) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x000bb68d) area_fmrd2_info_pane_t

0x7df1,	// (0x000b36c4) fmrd2_indi_pane_t1

0x7e01,	// (0x000b36d4) fmrd2_indi_pane_t2

0x7e11,	// (0x000b36e4) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x000bb696) fmrd2_indi_pane_t

0x6a24,	// (0x000b22f7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x6a24,	// (0x000b22f7) list_single_fs_bigclock_indicator_pane_g5

0x6ad9,	// (0x000b23ac) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x6ad9,	// (0x000b23ac) list_single_fs_bigclock_indicator_pane_t5

0x7439,	// (0x000b2d0c) aid_cell_bcale_month_pane_ParamLimits

0x7439,	// (0x000b2d0c) aid_cell_bcale_month_pane

0x7457,	// (0x000b2d2a) bcale_month_pane_ParamLimits

0x7457,	// (0x000b2d2a) bcale_month_pane

0x747b,	// (0x000b2d4e) bcale_preview_pane_ParamLimits

0x747b,	// (0x000b2d4e) bcale_preview_pane

0xe779,	// (0x000ba04c) list_single_fs_bigclock_pane_t1_ParamLimits

0xe798,	// (0x000ba06b) list_single_fs_bigclock_pane_t2_ParamLimits

0xe798,	// (0x000ba06b) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x000bb611) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x000bb611) list_single_fs_bigclock_pane_t

0x7d2f,	// (0x000b3602) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x000bb681) main_fs_bigclock_unlock_btn_pane_g

0x7e21,	// (0x000b36f4) aid_dia3_key_size_ParamLimits

0x7e21,	// (0x000b36f4) aid_dia3_key_size

0x7e35,	// (0x000b3708) aid_dia3_listrow_size_ParamLimits

0x7e35,	// (0x000b3708) aid_dia3_listrow_size

0x7e4f,	// (0x000b3722) dia3_keypad_fun_pane_ParamLimits

0x7e4f,	// (0x000b3722) dia3_keypad_fun_pane

0x7e69,	// (0x000b373c) dia3_keypad_num_pane_ParamLimits

0x7e69,	// (0x000b373c) dia3_keypad_num_pane

0x7e83,	// (0x000b3756) dia3_listscroll_pane_ParamLimits

0x7e83,	// (0x000b3756) dia3_listscroll_pane

0x7e99,	// (0x000b376c) dia3_numentry_pane_ParamLimits

0x7e99,	// (0x000b376c) dia3_numentry_pane

0xe9cd,	// (0x000ba2a0) dia3_list_pane

0x7eb3,	// (0x000b3786) scroll_pane_cp12

0x9445,	// (0x000b4d18) bg_dia3_numentry_pane

0x7ebe,	// (0x000b3791) dia3_numentry_pane_t1

0x7ecd,	// (0x000b37a0) cell_dia3_key_num_pane

0x7ed5,	// (0x000b37a8) cell_dia3_key0_fun_pane_ParamLimits

0x7ed5,	// (0x000b37a8) cell_dia3_key0_fun_pane

0x7ee9,	// (0x000b37bc) cell_dia3_key1_fun_pane_ParamLimits

0x7ee9,	// (0x000b37bc) cell_dia3_key1_fun_pane

0x7efe,	// (0x000b37d1) dia3_listrow_pane

0xde25,	// (0x000b96f8) bg_dia3_numentry_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp21

0x7f10,	// (0x000b37e3) cell_dia3_key_num_pane_t1

0x7f1e,	// (0x000b37f1) cell_dia3_key_num_pane_t2

0x7f1e,	// (0x000b37f1) cell_dia3_key_num_pane_t3

0x7f1e,	// (0x000b37f1) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x000bb69d) cell_dia3_key_num_pane_t

0x9445,	// (0x000b4d18) bg_button_pane_cp19

0x7f2d,	// (0x000b3800) cell_dia3_key0_fun_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp20

0x7f35,	// (0x000b3808) cell_dia3_key1_fun_pane_g1

0x7f3d,	// (0x000b3810) area_left_week_number_pane

0x7f4b,	// (0x000b381e) area_top_day_name_pane

0x7f5e,	// (0x000b3831) frame_month_view_pane

0xe9d8,	// (0x000ba2ab) grid_month_view_pane

0x7f73,	// (0x000b3846) cell_top_day_name_pane_ParamLimits

0x7f73,	// (0x000b3846) cell_top_day_name_pane

0x7fa2,	// (0x000b3875) cell_area_left_week_number_pane_ParamLimits

0x7fa2,	// (0x000b3875) cell_area_left_week_number_pane

0x7fb8,	// (0x000b388b) cell_month_view_pane_ParamLimits

0x7fb8,	// (0x000b388b) cell_month_view_pane

0xe9e6,	// (0x000ba2b9) frm_month_g1

0x7fe9,	// (0x000b38bc) frm_month_g2

0x7ffc,	// (0x000b38cf) frm_month_g3

0x800f,	// (0x000b38e2) frm_month_g4

0x8022,	// (0x000b38f5) frm_month_g5

0x8035,	// (0x000b3908) frm_month_g6

0x804a,	// (0x000b391d) frm_month_g7

0xe9f3,	// (0x000ba2c6) frm_month_g8

0x805f,	// (0x000b3932) frm_month_g9

0x806f,	// (0x000b3942) frm_month_g10

0x807f,	// (0x000b3952) frm_month_g11

0x808f,	// (0x000b3962) frm_month_g12

0x80a1,	// (0x000b3974) frm_month_g13

0x80b5,	// (0x000b3988) frm_month_g14

0x80c9,	// (0x000b399c) frm_month_g15

0x80dd,	// (0x000b39b0) frm_month_g16

0x000f,

0xfdd3,	// (0x000bb6a6) frm_month_g

0xea00,	// (0x000ba2d3) cell_top_day_name_pane_t1

0x80f1,	// (0x000b39c4) cell_area_left_week_number_pane_g1

0x80fd,	// (0x000b39d0) cell_area_left_week_number_pane_t1

0xa4c0,	// (0x000b5d93) cell_month_view_pane_g1

0x8110,	// (0x000b39e3) cell_month_view_pane_t1

0x9445,	// (0x000b4d18) main_fps_pane

0xe22c,	// (0x000b9aff) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe22c,	// (0x000b9aff) cmail_ddmenu_btn02_pane_cp1

0xe248,	// (0x000b9b1b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe248,	// (0x000b9b1b) cmail_ddmenu_btn02_pane_cp2

0x775c,	// (0x000b302f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x775c,	// (0x000b302f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x000bb5c4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x000bb5c4) cmail_ddmenu_btn02_pane_g

0x777d,	// (0x000b3050) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x777d,	// (0x000b3050) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x000bb5c9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x000bb5c9) cmail_ddmenu_btn02_pane_t

0x8123,	// (0x000b39f6) fps_text_pane_ParamLimits

0x8123,	// (0x000b39f6) fps_text_pane

0x813a,	// (0x000b3a0d) main_fps_pane_g1_ParamLimits

0x813a,	// (0x000b3a0d) main_fps_pane_g1

0x8152,	// (0x000b3a25) wait_bar_pane_cp010_ParamLimits

0x8152,	// (0x000b3a25) wait_bar_pane_cp010

0x8165,	// (0x000b3a38) fps_text_pane_t1_ParamLimits

0x8165,	// (0x000b3a38) fps_text_pane_t1

0xd3cd,	// (0x000b8ca0) cam4_image_uncrop_pane_g1

0xd3d6,	// (0x000b8ca9) cam4_image_uncrop_pane_g2

0x4b74,	// (0x000b0447) cam4_image_uncrop_pane_g3

0x4b7d,	// (0x000b0450) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x000bb108) cam4_image_uncrop_pane_g

0x7efe,	// (0x000b37d1) dia3_listrow_pane_ParamLimits

0x9445,	// (0x000b4d18) main_phob2_pane

0x71e9,	// (0x000b2abc) cell_tport_appsw_pane_cp02_ParamLimits

0x71e9,	// (0x000b2abc) cell_tport_appsw_pane_cp02

0x71fd,	// (0x000b2ad0) cell_tport_appsw_pane_cp03_ParamLimits

0x71fd,	// (0x000b2ad0) cell_tport_appsw_pane_cp03

0x9445,	// (0x000b4d18) phob2_contact_card_pane

0x9445,	// (0x000b4d18) phob2_listscroll_pane

0xea13,	// (0x000ba2e6) phob2_list_pane

0xea1b,	// (0x000ba2ee) scroll_pane_cp034

0x817d,	// (0x000b3a50) phob2_cc_data_pane_ParamLimits

0x817d,	// (0x000b3a50) phob2_cc_data_pane

0x8196,	// (0x000b3a69) phob2_cc_listscroll_pane_ParamLimits

0x8196,	// (0x000b3a69) phob2_cc_listscroll_pane

0x81b7,	// (0x000b3a8a) list_double_large_graphic_phob2_pane_ParamLimits

0x81b7,	// (0x000b3a8a) list_double_large_graphic_phob2_pane

0x81cb,	// (0x000b3a9e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x81cb,	// (0x000b3a9e) list_double_large_graphic_phob2_pane_g1

0x81d8,	// (0x000b3aab) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x81d8,	// (0x000b3aab) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x000bb6c7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x000bb6c7) list_double_large_graphic_phob2_pane_g

0x81fe,	// (0x000b3ad1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x81fe,	// (0x000b3ad1) list_double_large_graphic_phob2_pane_t1

0x8213,	// (0x000b3ae6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8213,	// (0x000b3ae6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x000bb6d0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x000bb6d0) list_double_large_graphic_phob2_pane_t

0x9445,	// (0x000b4d18) list_highlight_pane_cp024

0x8228,	// (0x000b3afb) phob2_cc_button_pane

0x8234,	// (0x000b3b07) phob2_cc_data_pane_g1_ParamLimits

0x8234,	// (0x000b3b07) phob2_cc_data_pane_g1

0x824a,	// (0x000b3b1d) phob2_cc_data_pane_g2_ParamLimits

0x824a,	// (0x000b3b1d) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x000bb6d5) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x000bb6d5) phob2_cc_data_pane_g

0x8262,	// (0x000b3b35) phob2_cc_data_pane_t1_ParamLimits

0x8262,	// (0x000b3b35) phob2_cc_data_pane_t1

0x8292,	// (0x000b3b65) phob2_cc_data_pane_t2_ParamLimits

0x8292,	// (0x000b3b65) phob2_cc_data_pane_t2

0x82c2,	// (0x000b3b95) phob2_cc_data_pane_t3_ParamLimits

0x82c2,	// (0x000b3b95) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x000bb6da) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x000bb6da) phob2_cc_data_pane_t

0xea23,	// (0x000ba2f6) phob2_cc_list_pane_ParamLimits

0xea23,	// (0x000ba2f6) phob2_cc_list_pane

0xd5f8,	// (0x000b8ecb) scroll_pane_cp035_ParamLimits

0xd5f8,	// (0x000b8ecb) scroll_pane_cp035

0x9af6,	// (0x000b53c9) bg_button_pane_cp033

0x82f2,	// (0x000b3bc5) phob2_cc_button_pane_g1

0x82fe,	// (0x000b3bd1) phob2_cc_button_pane_t1

0x8313,	// (0x000b3be6) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x000bb6e1) phob2_cc_button_pane_t

0x8325,	// (0x000b3bf8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8325,	// (0x000b3bf8) list_double_large_graphic_phob2_cc_pane

0x835c,	// (0x000b3c2f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x835c,	// (0x000b3c2f) list_double_large_graphic_phob2_cc_pane_g1

0x8368,	// (0x000b3c3b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8368,	// (0x000b3c3b) list_double_large_graphic_phob2_cc_pane_g2

0x8374,	// (0x000b3c47) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8374,	// (0x000b3c47) list_double_large_graphic_phob2_cc_pane_g3

0x8380,	// (0x000b3c53) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8380,	// (0x000b3c53) list_double_large_graphic_phob2_cc_pane_g4

0x838c,	// (0x000b3c5f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x838c,	// (0x000b3c5f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x000bb6e6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x000bb6e6) list_double_large_graphic_phob2_cc_pane_g

0x8398,	// (0x000b3c6b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8398,	// (0x000b3c6b) list_double_large_graphic_phob2_cc_pane_t1

0x83c1,	// (0x000b3c94) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x83c1,	// (0x000b3c94) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x000bb6f1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x000bb6f1) list_double_large_graphic_phob2_cc_pane_t

0xea2f,	// (0x000ba302) list_highlight_pane_cp025_ParamLimits

0xea2f,	// (0x000ba302) list_highlight_pane_cp025

0x9af6,	// (0x000b53c9) bg_button_pane_cp033_ParamLimits

0x82f2,	// (0x000b3bc5) phob2_cc_button_pane_g1_ParamLimits

0x82fe,	// (0x000b3bd1) phob2_cc_button_pane_t1_ParamLimits

0x8313,	// (0x000b3be6) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x000bb6e1) phob2_cc_button_pane_t_ParamLimits

0x0022,	// (0x000ab8f5) popup_wgtman_window

0xd431,	// (0x000b8d04) scroll_pane_cp038

0x7c19,	// (0x000b34ec) wgtman_btn_pane_cp_01_ParamLimits

0x7c19,	// (0x000b34ec) wgtman_btn_pane_cp_01

0xea3d,	// (0x000ba310) wgtman_content_pane

0xea46,	// (0x000ba319) wgtman_heading_pane

0x9445,	// (0x000b4d18) bg_heading_pane_cp02

0xea4f,	// (0x000ba322) wgtman_heading_pane_g1

0xea57,	// (0x000ba32a) wgtman_heading_pane_t1

0xea65,	// (0x000ba338) scroll_pane_cp036

0xea6d,	// (0x000ba340) wgtman_list_pane

0xe3ab,	// (0x000b9c7e) wgtman_list_pane_t1_ParamLimits

0xe3ab,	// (0x000b9c7e) wgtman_list_pane_t1

0xa09e,	// (0x000b5971) cam4_grid_pane

0x581d,	// (0x000b10f0) bg_button_pane_cp015_ParamLimits

0x5834,	// (0x000b1107) bg_button_pane_cp016_ParamLimits

0x5840,	// (0x000b1113) bg_button_pane_cp017_ParamLimits

0x589b,	// (0x000b116e) popup_vitu2_query_window_g3_ParamLimits

0x589b,	// (0x000b116e) popup_vitu2_query_window_g3

0x593e,	// (0x000b1211) popup_vitu2_query_window_t6_ParamLimits

0x593e,	// (0x000b1211) popup_vitu2_query_window_t6

0x5969,	// (0x000b123c) popup_vitu2_query_window_t7_ParamLimits

0x5969,	// (0x000b123c) popup_vitu2_query_window_t7

0xd3cd,	// (0x000b8ca0) cam4_grid_pane_g1

0xd3d6,	// (0x000b8ca9) cam4_grid_pane_g2

0xea75,	// (0x000ba348) cam4_grid_pane_g3

0xea7e,	// (0x000ba351) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x000bb6f6) cam4_grid_pane_g

0x0c5b,	// (0x000ac52e) aid_placing_vt_slider_lsc_ParamLimits

0x0f48,	// (0x000ac81b) vidtel_button_pane_ParamLimits

0x0f48,	// (0x000ac81b) vidtel_button_pane

0x9445,	// (0x000b4d18) bg_button_pane_cp034

0xea89,	// (0x000ba35c) vidtel_button_pane_g1

0xea91,	// (0x000ba364) vidtel_button_pane_t1

0xd53f,	// (0x000b8e12) aid_size_vtel_slider_touch

0xd5f8,	// (0x000b8ecb) scroll_pane_cp039

0x6662,	// (0x000b1f35) ncim_query_button_pane_cp01_ParamLimits

0x6681,	// (0x000b1f54) ncimui_query_pane_g1_ParamLimits

0x9af6,	// (0x000b53c9) input_focus_pane_cp012_ParamLimits

0xde63,	// (0x000b9736) ncim_query_entry_pane_t1_ParamLimits

0xd5f8,	// (0x000b8ecb) scroll_pane_cp039_ParamLimits

0x20bc,	// (0x000ad98f) navi_pane_bcale_mc_g1

0x20c4,	// (0x000ad997) navi_pane_bcale_mc_t1

0xe27e,	// (0x000b9b51) main_sp_fs_email_pane_g1

0xe28a,	// (0x000b9b5d) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x000bb4f9) main_sp_fs_email_pane_g

0xe500,	// (0x000b9dd3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe500,	// (0x000b9dd3) list_single_cale_mrui_row_pane_g3

0x779d,	// (0x000b3070) list_single_recal_day_pane_g5_event_pane

0xb3a6,	// (0x000b6c79) list_single_recal_day_pane_g7

0xeaa7,	// (0x000ba37a) list_recal_day_event_pane_cp01

0xeab0,	// (0x000ba383) list_recal_vselct_arw_lo_pane_cp01

0xeab8,	// (0x000ba38b) list_recal_vselct_arw_up_pane_cp01

0xeac0,	// (0x000ba393) list_recal_vselct_pane_cp01

0xd561,	// (0x000b8e34) list_recal_day_event_pane_cp01_g1

0xb3db,	// (0x000b6cae) list_recal_day_event_pane_cp01_t1

0xb3ae,	// (0x000b6c81) list_single_recal_day_pane_t1_ParamLimits

0xb3c0,	// (0x000b6c93) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x000bb5d9) list_single_recal_day_pane_t_ParamLimits

0xa445,	// (0x000b5d18) bg_notes_pane_ParamLimits

0xa510,	// (0x000b5de3) list_notes_pane_ParamLimits

0x01f8,	// (0x000abacb) scroll_pane_cp06_ParamLimits

0xa532,	// (0x000b5e05) main_notes_pane_ParamLimits

0x9af6,	// (0x000b53c9) main_welc_pane

0x8417,	// (0x000b3cea) main_welc_body_pane_ParamLimits

0x8417,	// (0x000b3cea) main_welc_body_pane

0x8436,	// (0x000b3d09) main_welc_opti_pane_ParamLimits

0x8436,	// (0x000b3d09) main_welc_opti_pane

0x84b6,	// (0x000b3d89) main_welc_pane_t1_ParamLimits

0x84b6,	// (0x000b3d89) main_welc_pane_t1

0x86be,	// (0x000b3f91) main_welc_body_row_pane_ParamLimits

0x86be,	// (0x000b3f91) main_welc_body_row_pane

0xa4b2,	// (0x000b5d85) main_welc_opti_row_pane_ParamLimits

0xa4b2,	// (0x000b5d85) main_welc_opti_row_pane

0xeada,	// (0x000ba3ad) main_welc_opti_row_pane_g1

0x86d2,	// (0x000b3fa5) main_welc_opti_row_pane_t1

0xeae2,	// (0x000ba3b5) main_welc_body_row_pane_t1

0xe850,	// (0x000ba123) popup_notif_wgt_heading_pane

0xe86a,	// (0x000ba13d) aid_size_list_notif_wgt_del_ParamLimits

0xe877,	// (0x000ba14a) list_notif_wgt_row_pane_g1_ParamLimits

0xe883,	// (0x000ba156) list_notif_wgt_row_pane_g2_ParamLimits

0xe892,	// (0x000ba165) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x000bb640) list_notif_wgt_row_pane_g_ParamLimits

0xe89f,	// (0x000ba172) list_notif_wgt_row_pane_t1_ParamLimits

0xe8b5,	// (0x000ba188) list_notif_wgt_row_pane_t2_ParamLimits

0xe8c7,	// (0x000ba19a) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x000bb647) list_notif_wgt_row_pane_t_ParamLimits

0x7cb4,	// (0x000b3587) listrow_wgtman_pane_g1_ParamLimits

0x7cc1,	// (0x000b3594) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x000bb677) listrow_wgtman_pane_g_ParamLimits

0x7cdf,	// (0x000b35b2) listrow_wgtman_pane_t1_ParamLimits

0x7cf7,	// (0x000b35ca) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x000bb67c) listrow_wgtman_pane_t_ParamLimits

0x7d1d,	// (0x000b35f0) wait_bar_pane_cp09_ParamLimits

0x9445,	// (0x000b4d18) bg_popup_heading_pane_cp02

0xeaf1,	// (0x000ba3c4) popup_notif_wgt_heading_pane_g1

0xeaf9,	// (0x000ba3cc) popup_notif_wgt_heading_pane_t1

0x9445,	// (0x000b4d18) main_vids_pane

0x9445,	// (0x000b4d18) vids_listscroll_pane

0x86e1,	// (0x000b3fb4) scroll_pane_cp040

0x9445,	// (0x000b4d18) vids_list_pane

0x86ec,	// (0x000b3fbf) vids_list_double_pane_ParamLimits

0x86ec,	// (0x000b3fbf) vids_list_double_pane

0x86ff,	// (0x000b3fd2) vids_list_double_pane_g1

0x8708,	// (0x000b3fdb) vids_list_double_pane_t1

0x8718,	// (0x000b3feb) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x000bb715) vids_list_double_pane_t

0x9459,	// (0x000b4d2c) main_ncimui_pane_ParamLimits

0x6498,	// (0x000b1d6b) main_ncimui_pane_g1_ParamLimits

0x64a4,	// (0x000b1d77) main_ncimui_pane_g2_ParamLimits

0x64a4,	// (0x000b1d77) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x000bb3fa) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x000bb3fa) main_ncimui_pane_g

0x8455,	// (0x000b3d28) main_welc_pane_g1_ParamLimits

0x8455,	// (0x000b3d28) main_welc_pane_g1

0x846a,	// (0x000b3d3d) main_welc_pane_g2_ParamLimits

0x846a,	// (0x000b3d3d) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x000bb6ff) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x000bb6ff) main_welc_pane_g

0xa445,	// (0x000b5d18) listscroll_mce_pane_ParamLimits

0x219c,	// (0x000ada6f) wait_bar_pane_cp10

0xc621,	// (0x000b7ef4) main_cale_day_pane_ParamLimits

0xc621,	// (0x000b7ef4) main_cale_week_pane_ParamLimits

0xa445,	// (0x000b5d18) main_messa_pane_ParamLimits

0x3f57,	// (0x000af82a) main_clock2_btn_pane_ParamLimits

0x3f57,	// (0x000af82a) main_clock2_btn_pane

0xcdba,	// (0x000b868d) main_clock2_btn_pane_cp01_ParamLimits

0xcdba,	// (0x000b868d) main_clock2_btn_pane_cp01

0xe4d1,	// (0x000b9da4) list_cale_mrui_pane_ParamLimits

0xe8fd,	// (0x000ba1d0) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x000bb64e) main_cf0_pane_g

0x7f3d,	// (0x000b3810) area_left_week_number_pane_ParamLimits

0x7f4b,	// (0x000b381e) area_top_day_name_pane_ParamLimits

0x7f5e,	// (0x000b3831) frame_month_view_pane_ParamLimits

0xe9d8,	// (0x000ba2ab) grid_month_view_pane_ParamLimits

0xe9e6,	// (0x000ba2b9) frm_month_g1_ParamLimits

0x7fe9,	// (0x000b38bc) frm_month_g2_ParamLimits

0x7ffc,	// (0x000b38cf) frm_month_g3_ParamLimits

0x800f,	// (0x000b38e2) frm_month_g4_ParamLimits

0x8022,	// (0x000b38f5) frm_month_g5_ParamLimits

0x8035,	// (0x000b3908) frm_month_g6_ParamLimits

0x804a,	// (0x000b391d) frm_month_g7_ParamLimits

0xe9f3,	// (0x000ba2c6) frm_month_g8_ParamLimits

0x805f,	// (0x000b3932) frm_month_g9_ParamLimits

0x806f,	// (0x000b3942) frm_month_g10_ParamLimits

0x807f,	// (0x000b3952) frm_month_g11_ParamLimits

0x808f,	// (0x000b3962) frm_month_g12_ParamLimits

0x80a1,	// (0x000b3974) frm_month_g13_ParamLimits

0x80b5,	// (0x000b3988) frm_month_g14_ParamLimits

0x80c9,	// (0x000b399c) frm_month_g15_ParamLimits

0x80dd,	// (0x000b39b0) frm_month_g16_ParamLimits

0xfdd3,	// (0x000bb6a6) frm_month_g_ParamLimits

0xea00,	// (0x000ba2d3) cell_top_day_name_pane_t1_ParamLimits

0x80f1,	// (0x000b39c4) cell_area_left_week_number_pane_g1_ParamLimits

0x80fd,	// (0x000b39d0) cell_area_left_week_number_pane_t1_ParamLimits

0xa4c0,	// (0x000b5d93) cell_month_view_pane_g1_ParamLimits

0x8110,	// (0x000b39e3) cell_month_view_pane_t1_ParamLimits

0xa43d,	// (0x000b5d10) main_clock2_btn_pane_g1

0xeb07,	// (0x000ba3da) main_clock2_btn_pane_t1

0x9af6,	// (0x000b53c9) listscroll_cmail_pane_ParamLimits

0xe27e,	// (0x000b9b51) main_sp_fs_email_pane_g1_ParamLimits

0xe28a,	// (0x000b9b5d) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x000bb4f9) main_sp_fs_email_pane_g_ParamLimits

0xe5da,	// (0x000b9ead) list_recal_day_pane_ParamLimits

0xe5eb,	// (0x000b9ebe) mian_recal_day_pane_t1

0x7082,	// (0x000b2955) list_single_dyc_row_text_pane_t4_ParamLimits

0x7082,	// (0x000b2955) list_single_dyc_row_text_pane_t4

0x70cb,	// (0x000b299e) list_single_dyc_row_text_pane_t5_ParamLimits

0x70cb,	// (0x000b299e) list_single_dyc_row_text_pane_t5

0xa3d7,	// (0x000b5caa) list_single_dyc_row_text_pane_t6_ParamLimits

0xa3d7,	// (0x000b5caa) list_single_dyc_row_text_pane_t6

0x1d0b,	// (0x000ad5de) aid_mgn_list_cale_time_pane

0x9459,	// (0x000b4d2c) main_gallery2_pane_ParamLimits

0xcdce,	// (0x000b86a1) main_clock2_pane_cp01_t1

0xcddc,	// (0x000b86af) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x000bafdf) main_clock2_pane_cp01_t

0x0616,	// (0x000abee9) cale_week_scroll_pane_g16_ParamLimits

0x0616,	// (0x000abee9) cale_week_scroll_pane_g16

0xa6d9,	// (0x000b5fac) vorec_slider_pane

0xea91,	// (0x000ba364) vidtel_button_pane_t1_ParamLimits

0x7803,	// (0x000b30d6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7803,	// (0x000b30d6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x7816,	// (0x000b30e9) main_fs_bigclock_clock_pane_g3_ParamLimits

0x7816,	// (0x000b30e9) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x000bb5fc) main_fs_bigclock_clock_pane_g_ParamLimits

0x782d,	// (0x000b3100) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7843,	// (0x000b3116) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x000bb605) main_fs_bigclock_clock_pane_t_ParamLimits

0x37a4,	// (0x000af077) main_mup3_lyrics_pane_ParamLimits

0x37a4,	// (0x000af077) main_mup3_lyrics_pane

0x8740,	// (0x000b4013) main_mup3_lyrics_pane_t1_ParamLimits

0x8740,	// (0x000b4013) main_mup3_lyrics_pane_t1

0x9df0,	// (0x000b56c3) aid_main_mp4_pane_t1_area

0x9dfa,	// (0x000b56cd) aid_main_mp4_pane_t2_area

0x9ea6,	// (0x000b5779) main_mp4_pane_g7_ParamLimits

0x9ea6,	// (0x000b5779) main_mp4_pane_g7

0x9eb2,	// (0x000b5785) main_mp4_pane_g8_ParamLimits

0x9eb2,	// (0x000b5785) main_mp4_pane_g8

0x493b,	// (0x000b020e) aid_call6_pane_g1_size

0x8344,	// (0x000b3c17) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8344,	// (0x000b3c17) list_double_large_graphic_phob2_other_pane

0xaa95,	// (0x000b6368) list_double_large_graphic_phob2_other_pane_g1

0x9445,	// (0x000b4d18) list_highlight_pane_cp026

0x9af6,	// (0x000b53c9) main_welc_pane_ParamLimits

0x6ec1,	// (0x000b2794) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6ec1,	// (0x000b2794) main_sp_fs_ctrlbar_pane_g3

0x6edb,	// (0x000b27ae) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6edb,	// (0x000b27ae) main_sp_fs_ctrlbar_pane_g4

0x6f0f,	// (0x000b27e2) toolbar2_fixed_button_pane_cp01

0x6f1a,	// (0x000b27ed) toolbar2_fixed_button_pane_cp02

0x6f27,	// (0x000b27fa) toolbar2_fixed_button_pane_cp03

0x83fd,	// (0x000b3cd0) list_welc_entry_pane_ParamLimits

0x83fd,	// (0x000b3cd0) list_welc_entry_pane

0x847f,	// (0x000b3d52) main_welc_pane_g3_ParamLimits

0x847f,	// (0x000b3d52) main_welc_pane_g3

0x84d8,	// (0x000b3dab) main_welc_pane_t2_ParamLimits

0x84d8,	// (0x000b3dab) main_welc_pane_t2

0x84f3,	// (0x000b3dc6) main_welc_pane_t3_ParamLimits

0x84f3,	// (0x000b3dc6) main_welc_pane_t3

0x0005,

0xfe35,	// (0x000bb708) main_welc_pane_t_ParamLimits

0xfe35,	// (0x000bb708) main_welc_pane_t

0x862d,	// (0x000b3f00) welc_button_pane_ParamLimits

0x862d,	// (0x000b3f00) welc_button_pane

0x86ab,	// (0x000b3f7e) welc_service_logo_pane_ParamLimits

0x86ab,	// (0x000b3f7e) welc_service_logo_pane

0x875b,	// (0x000b402e) list_single_welc_entry_pane_ParamLimits

0x875b,	// (0x000b402e) list_single_welc_entry_pane

0x876e,	// (0x000b4041) list_single_welc_entry_pane_g1

0x8778,	// (0x000b404b) list_single_welc_entry_pane_t1

0x8786,	// (0x000b4059) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x000bb71a) list_single_welc_entry_pane_t

0x9445,	// (0x000b4d18) bg_button_pane_cp035

0x8794,	// (0x000b4067) welc_button_pane_t1

0xeb15,	// (0x000ba3e8) welc_service_logo_pane_g1

0xeb1e,	// (0x000ba3f1) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x000bb71f) welc_service_logo_pane_g

0x9467,	// (0x000b4d3a) main_int_radio_pane

0xdd01,	// (0x000b95d4) list_single_fs_dyc_pane_g1

0x81e4,	// (0x000b3ab7) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x81e4,	// (0x000b3ab7) list_double_large_graphic_phob2_pane_g3

0x81f0,	// (0x000b3ac3) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x81f0,	// (0x000b3ac3) list_double_large_graphic_phob2_pane_g4

0x87a2,	// (0x000b4075) main_int_radio1_pane_ParamLimits

0x87a2,	// (0x000b4075) main_int_radio1_pane

0xeb27,	// (0x000ba3fa) find_pane_cp02

0x87bf,	// (0x000b4092) input_focus_pane_cp12_ParamLimits

0x87bf,	// (0x000b4092) input_focus_pane_cp12

0x87cf,	// (0x000b40a2) input_focus_pane_cp13_ParamLimits

0x87cf,	// (0x000b40a2) input_focus_pane_cp13

0x87e3,	// (0x000b40b6) input_focus_pane_cp14_ParamLimits

0x87e3,	// (0x000b40b6) input_focus_pane_cp14

0xeb30,	// (0x000ba403) int_radio1_listscroll_pane

0x87f7,	// (0x000b40ca) main_int_radio1_pane_g1_ParamLimits

0x87f7,	// (0x000b40ca) main_int_radio1_pane_g1

0x880d,	// (0x000b40e0) main_int_radio1_pane_t1_ParamLimits

0x880d,	// (0x000b40e0) main_int_radio1_pane_t1

0x8826,	// (0x000b40f9) main_int_radio1_pane_t2_ParamLimits

0x8826,	// (0x000b40f9) main_int_radio1_pane_t2

0x8841,	// (0x000b4114) main_int_radio1_pane_t3_ParamLimits

0x8841,	// (0x000b4114) main_int_radio1_pane_t3

0x885c,	// (0x000b412f) main_int_radio1_pane_t4_ParamLimits

0x885c,	// (0x000b412f) main_int_radio1_pane_t4

0xeb3a,	// (0x000ba40d) main_int_radio1_pane_t5_ParamLimits

0xeb3a,	// (0x000ba40d) main_int_radio1_pane_t5

0x886e,	// (0x000b4141) main_int_radio1_pane_t6_ParamLimits

0x886e,	// (0x000b4141) main_int_radio1_pane_t6

0x8883,	// (0x000b4156) main_int_radio1_pane_t7_ParamLimits

0x8883,	// (0x000b4156) main_int_radio1_pane_t7

0x8898,	// (0x000b416b) main_int_radio1_pane_t8_ParamLimits

0x8898,	// (0x000b416b) main_int_radio1_pane_t8

0x88b5,	// (0x000b4188) main_int_radio1_pane_t9_ParamLimits

0x88b5,	// (0x000b4188) main_int_radio1_pane_t9

0x88c7,	// (0x000b419a) main_int_radio1_pane_t10_ParamLimits

0x88c7,	// (0x000b419a) main_int_radio1_pane_t10

0x88ed,	// (0x000b41c0) main_int_radio1_pane_t11_ParamLimits

0x88ed,	// (0x000b41c0) main_int_radio1_pane_t11

0x8913,	// (0x000b41e6) main_int_radio1_pane_t12_ParamLimits

0x8913,	// (0x000b41e6) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x000bb724) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x000bb724) main_int_radio1_pane_t

0xea13,	// (0x000ba2e6) int_radio_list_pane

0xea1b,	// (0x000ba2ee) scroll_pane_cp037

0xeb4c,	// (0x000ba41f) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb4c,	// (0x000ba41f) list_double_large_graphic_int_radio_pane

0xeb60,	// (0x000ba433) list_double_large_graphic_int_radio_pane_g1

0xb3e9,	// (0x000b6cbc) list_double_large_graphic_int_radio_pane_t1

0xb3f7,	// (0x000b6cca) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x000bb73d) list_double_large_graphic_int_radio_pane_t

0x9445,	// (0x000b4d18) list_highlight_pane_cp027

0xeaca,	// (0x000ba39d) main_button_pane_4

0x8492,	// (0x000b3d65) main_welc_pane_g4_ParamLimits

0x8492,	// (0x000b3d65) main_welc_pane_g4

0x850e,	// (0x000b3de1) main_welc_pane_t4_ParamLimits

0x850e,	// (0x000b3de1) main_welc_pane_t4

0x8525,	// (0x000b3df8) main_welc_pane_t5_ParamLimits

0x8525,	// (0x000b3df8) main_welc_pane_t5

0x8566,	// (0x000b3e39) main_welc_pane_t6_ParamLimits

0x8566,	// (0x000b3e39) main_welc_pane_t6

0x8642,	// (0x000b3f15) welc_button_pane_2_ParamLimits

0x8642,	// (0x000b3f15) welc_button_pane_2

0x8660,	// (0x000b3f33) welc_button_pane_3_ParamLimits

0x8660,	// (0x000b3f33) welc_button_pane_3

0xead2,	// (0x000ba3a5) welc_button_pane_4

0x8681,	// (0x000b3f54) welc_button_pane_5_ParamLimits

0x8681,	// (0x000b3f54) welc_button_pane_5

0xf039,	// (0x000ba90c) main_popup_welc_pane

0xeb78,	// (0x000ba44b) main_welc_sk_g3

0xeb82,	// (0x000ba455) main_welc_sk_g4

0xeb8c,	// (0x000ba45f) main_welc_sk_t3

0xeb9c,	// (0x000ba46f) main_welc_sk_t4

0xebac,	// (0x000ba47f) popup_welc_pane_t4

0xebba,	// (0x000ba48d) popup_welc_pane_t5

0xebc8,	// (0x000ba49b) popup_welc_pane_t6

0x9467,	// (0x000b4d3a) main_acti_pane

0x9445,	// (0x000b4d18) main_sso_pane

0x8925,	// (0x000b41f8) sso_body_pane_ParamLimits

0x8925,	// (0x000b41f8) sso_body_pane

0x893a,	// (0x000b420d) sso_logo_pane_ParamLimits

0x893a,	// (0x000b420d) sso_logo_pane

0x896a,	// (0x000b423d) sso_sk_pane_ParamLimits

0x896a,	// (0x000b423d) sso_sk_pane

0xa70f,	// (0x000b5fe2) main_sso_logo_pane_g1

0x897c,	// (0x000b424f) sso_sk_pane_t1_ParamLimits

0x897c,	// (0x000b424f) sso_sk_pane_t1

0x8996,	// (0x000b4269) sso_sk_pane_t2_ParamLimits

0x8996,	// (0x000b4269) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x000bb742) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x000bb742) sso_sk_pane_t

0xec0a,	// (0x000ba4dd) aid_sso_gap

0xec13,	// (0x000ba4e6) aid_sso_txt1

0xec1d,	// (0x000ba4f0) aid_sso_txt2

0xec27,	// (0x000ba4fa) aid_sso_txt3

0x0002,

0xfe74,	// (0x000bb747) aid_sso_txt

0xec31,	// (0x000ba504) aid_sso_widget

0x8a00,	// (0x000b42d3) sso_btn_pane_ParamLimits

0x8a00,	// (0x000b42d3) sso_btn_pane

0x8a88,	// (0x000b435b) sso_option_pane_ParamLimits

0x8a88,	// (0x000b435b) sso_option_pane

0x8b0a,	// (0x000b43dd) sso_query_pane_ParamLimits

0x8b0a,	// (0x000b43dd) sso_query_pane

0x8b60,	// (0x000b4433) sso_query_pane_cp01_ParamLimits

0x8b60,	// (0x000b4433) sso_query_pane_cp01

0x8bc0,	// (0x000b4493) sso_t_hdr_pane_ParamLimits

0x8bc0,	// (0x000b4493) sso_t_hdr_pane

0x8bea,	// (0x000b44bd) sso_t_nml_pane_ParamLimits

0x8bea,	// (0x000b44bd) sso_t_nml_pane

0xec3b,	// (0x000ba50e) sso_t_sub_pane

0x8947,	// (0x000b421a) sso_popup_window_ParamLimits

0x8947,	// (0x000b421a) sso_popup_window

0x89ac,	// (0x000b427f) sso_apps_pane_ParamLimits

0x89ac,	// (0x000b427f) sso_apps_pane

0x89d6,	// (0x000b42a9) sso_body_pane_g1

0x89e0,	// (0x000b42b3) sso_body_pane_t1

0x89f0,	// (0x000b42c3) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x000bb74e) sso_body_pane_t

0x8a52,	// (0x000b4325) sso_btn_pane_cp01_ParamLimits

0x8a52,	// (0x000b4325) sso_btn_pane_cp01

0x8ade,	// (0x000b43b1) sso_prog_pane_ParamLimits

0x8ade,	// (0x000b43b1) sso_prog_pane

0x8c40,	// (0x000b4513) sso_t_hdr_pane_t1_ParamLimits

0x8c40,	// (0x000b4513) sso_t_hdr_pane_t1

0xec50,	// (0x000ba523) input_focus_pane_cp10_ParamLimits

0xec50,	// (0x000ba523) input_focus_pane_cp10

0xec6a,	// (0x000ba53d) sso_query_pane_t1_ParamLimits

0xec6a,	// (0x000ba53d) sso_query_pane_t1

0xec7d,	// (0x000ba550) sso_query_pane_t2_ParamLimits

0xec7d,	// (0x000ba550) sso_query_pane_t2

0xec97,	// (0x000ba56a) sso_query_pane_t3_ParamLimits

0xec97,	// (0x000ba56a) sso_query_pane_t3

0xecc1,	// (0x000ba594) sso_query_pane_t4_ParamLimits

0xecc1,	// (0x000ba594) sso_query_pane_t4

0x0003,

0xfe80,	// (0x000bb753) sso_query_pane_t_ParamLimits

0xfe80,	// (0x000bb753) sso_query_pane_t

0x9445,	// (0x000b4d18) bg_button_pane_cp22

0xeb69,	// (0x000ba43c) sso_btn_pane_t1

0x8c53,	// (0x000b4526) sso_t_nml_pane_t1_ParamLimits

0x8c53,	// (0x000b4526) sso_t_nml_pane_t1

0x8c6e,	// (0x000b4541) sso_option_row_pane_ParamLimits

0x8c6e,	// (0x000b4541) sso_option_row_pane

0xece5,	// (0x000ba5b8) sso_t_sub_pane_t1_ParamLimits

0xece5,	// (0x000ba5b8) sso_t_sub_pane_t1

0x9af6,	// (0x000b53c9) bg_popup_window_pane_cp11_ParamLimits

0x9af6,	// (0x000b53c9) bg_popup_window_pane_cp11

0xed02,	// (0x000ba5d5) popup_sk_window_cp01_ParamLimits

0xed02,	// (0x000ba5d5) popup_sk_window_cp01

0xed0f,	// (0x000ba5e2) sso_popup_body_pane_ParamLimits

0xed0f,	// (0x000ba5e2) sso_popup_body_pane

0xed1c,	// (0x000ba5ef) scroll_pane_cp21_ParamLimits

0xed1c,	// (0x000ba5ef) scroll_pane_cp21

0xed29,	// (0x000ba5fc) sso_popup_body_t_pane_ParamLimits

0xed29,	// (0x000ba5fc) sso_popup_body_t_pane

0xed36,	// (0x000ba609) sso_popup_body_t_hdr_pane_ParamLimits

0xed36,	// (0x000ba609) sso_popup_body_t_hdr_pane

0xed49,	// (0x000ba61c) sso_popup_body_t_nml_pane_ParamLimits

0xed49,	// (0x000ba61c) sso_popup_body_t_nml_pane

0xed67,	// (0x000ba63a) sso_popup_body_t_sub_pane_ParamLimits

0xed67,	// (0x000ba63a) sso_popup_body_t_sub_pane

0xed8a,	// (0x000ba65d) sso_popup_body_t_hdr_pane_t1

0x8c81,	// (0x000b4554) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8c81,	// (0x000b4554) sso_popup_body_t_nml_pane_t1

0xed9a,	// (0x000ba66d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed9a,	// (0x000ba66d) sso_popup_body_t_sub_pane_t1

0xa70f,	// (0x000b5fe2) sso_prog_pane_g1

0x8cbc,	// (0x000b458f) sso_apps_pane_comp1_ParamLimits

0x8cbc,	// (0x000b458f) sso_apps_pane_comp1

0xedbf,	// (0x000ba692) sso_apps_pane_comp1_g1

0xedc7,	// (0x000ba69a) sso_apps_pane_comp1_t1

0xede3,	// (0x000ba6b6) sso_option_row_pane_g1

0xedeb,	// (0x000ba6be) sso_option_row_pane_t1

0x83ea,	// (0x000b3cbd) bg_welc_area_ParamLimits

0x83ea,	// (0x000b3cbd) bg_welc_area

0x85a4,	// (0x000b3e77) sso_t_hdr_pane_a_t1_ParamLimits

0x85a4,	// (0x000b3e77) sso_t_hdr_pane_a_t1

0x85bf,	// (0x000b3e92) sso_t_nml_pane_a_t1_ParamLimits

0x85bf,	// (0x000b3e92) sso_t_nml_pane_a_t1

0x85f2,	// (0x000b3ec5) sso_t_sub_pane_a_t1_ParamLimits

0x85f2,	// (0x000b3ec5) sso_t_sub_pane_a_t1

0xeb69,	// (0x000ba43c) sso_btn_pane_t1_copy1

0x9445,	// (0x000b4d18) welc_button_pane_2_comp1

0xebd8,	// (0x000ba4ab) sso_t_hdr_pane_p_t1

0xebe8,	// (0x000ba4bb) sso_t_nml_pane_p_t1

0xebf8,	// (0x000ba4cb) sso_t_sub_pane_p_t1

0xe306,	// (0x000b9bd9) list_cmail_pane_ParamLimits

0x8699,	// (0x000b3f6c) welc_button_pane_cp01_ParamLimits

0x8699,	// (0x000b3f6c) welc_button_pane_cp01

0x9445,	// (0x000b4d18) main_att_pane

0xedd5,	// (0x000ba6a8) input_focus_pane_cp10_t1

0xedeb,	// (0x000ba6be) sso_option_row_pane_t1_ParamLimits

0x8cd6,	// (0x000b45a9) main_att_body_pane_ParamLimits

0x8cd6,	// (0x000b45a9) main_att_body_pane

0x8d0b,	// (0x000b45de) att_btn_pane_ParamLimits

0x8d0b,	// (0x000b45de) att_btn_pane

0x8d32,	// (0x000b4605) att_btn_pane_cp01_ParamLimits

0x8d32,	// (0x000b4605) att_btn_pane_cp01

0x8d52,	// (0x000b4625) att_li_srv_pane_ParamLimits

0x8d52,	// (0x000b4625) att_li_srv_pane

0x8d6f,	// (0x000b4642) att_opt_pane_ParamLimits

0x8d6f,	// (0x000b4642) att_opt_pane

0x8dbd,	// (0x000b4690) att_query_pane_ParamLimits

0x8dbd,	// (0x000b4690) att_query_pane

0x8e09,	// (0x000b46dc) att_query_pane_cp01_ParamLimits

0x8e09,	// (0x000b46dc) att_query_pane_cp01

0x8e55,	// (0x000b4728) att_t_hdr_pane_ParamLimits

0x8e55,	// (0x000b4728) att_t_hdr_pane

0x8eb9,	// (0x000b478c) att_t_nml_pane_ParamLimits

0x8eb9,	// (0x000b478c) att_t_nml_pane

0x8f06,	// (0x000b47d9) att_t_nml_pane_cp01_ParamLimits

0x8f06,	// (0x000b47d9) att_t_nml_pane_cp01

0x8f34,	// (0x000b4807) att_t_nmlb_pane_ParamLimits

0x8f34,	// (0x000b4807) att_t_nmlb_pane

0x8f51,	// (0x000b4824) att_term_pane_ParamLimits

0x8f51,	// (0x000b4824) att_term_pane

0x8fa1,	// (0x000b4874) main_att_body_pane_g1_ParamLimits

0x8fa1,	// (0x000b4874) main_att_body_pane_g1

0xee01,	// (0x000ba6d4) att_t_hdr_pane_t1_ParamLimits

0xee01,	// (0x000ba6d4) att_t_hdr_pane_t1

0xee1a,	// (0x000ba6ed) att_t_nml_pane_t1_ParamLimits

0xee1a,	// (0x000ba6ed) att_t_nml_pane_t1

0xee3f,	// (0x000ba712) att_btn_pane_t1

0x9445,	// (0x000b4d18) bg_button_pane_cp23

0x8fd8,	// (0x000b48ab) att_li_srv_row_pane_ParamLimits

0x8fd8,	// (0x000b48ab) att_li_srv_row_pane

0xee4f,	// (0x000ba722) att_t_nmlb_pane_t1_ParamLimits

0xee4f,	// (0x000ba722) att_t_nmlb_pane_t1

0xee68,	// (0x000ba73b) att_query_pane_t1

0xee77,	// (0x000ba74a) att_query_pane_t2

0xee86,	// (0x000ba759) att_query_pane_t3

0x0002,

0xfe89,	// (0x000bb75c) att_query_pane_t

0xee95,	// (0x000ba768) input_focus_pane_cp11

0xee9e,	// (0x000ba771) att_term_pane_t1_ParamLimits

0xee9e,	// (0x000ba771) att_term_pane_t1

0x9445,	// (0x000b4d18) att_opt_row_pane

0xeebb,	// (0x000ba78e) att_opt_row_pane_g1

0xeec3,	// (0x000ba796) att_opt_row_pane_t1_ParamLimits

0xeec3,	// (0x000ba796) att_opt_row_pane_t1

0x8fe8,	// (0x000b48bb) att_li_srv_row_pane_g1

0x8ff0,	// (0x000b48c3) att_li_srv_row_pane_t1

0x9005,	// (0x000b48d8) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x000bb763) att_li_srv_row_pane_t

0x9445,	// (0x000b4d18) main_call7_pane

0x9445,	// (0x000b4d18) main_vod_pane

0xec3b,	// (0x000ba50e) sso_t_sub_pane_ParamLimits

0x8cec,	// (0x000b45bf) att_btn_emg_pane_ParamLimits

0x8cec,	// (0x000b45bf) att_btn_emg_pane

0x8ff0,	// (0x000b48c3) att_li_srv_row_pane_t1_ParamLimits

0x9005,	// (0x000b48d8) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x000bb763) att_li_srv_row_pane_t_ParamLimits

0xeedc,	// (0x000ba7af) att_btn_close_pane_g1

0x9445,	// (0x000b4d18) bg_button_pane_cp24

0x901a,	// (0x000b48ed) main_vod_body_pane_ParamLimits

0x901a,	// (0x000b48ed) main_vod_body_pane

0x902e,	// (0x000b4901) main_vod_body_pane_g1_ParamLimits

0x902e,	// (0x000b4901) main_vod_body_pane_g1

0x9062,	// (0x000b4935) scroll_pane_cp24_ParamLimits

0x9062,	// (0x000b4935) scroll_pane_cp24

0x90b0,	// (0x000b4983) vod_btn_pane_ParamLimits

0x90b0,	// (0x000b4983) vod_btn_pane

0x90f4,	// (0x000b49c7) vod_det_pane_ParamLimits

0x90f4,	// (0x000b49c7) vod_det_pane

0x9126,	// (0x000b49f9) vod_logo_g1_ParamLimits

0x9126,	// (0x000b49f9) vod_logo_g1

0x9164,	// (0x000b4a37) vod_opt_pane_ParamLimits

0x9164,	// (0x000b4a37) vod_opt_pane

0x9197,	// (0x000b4a6a) vod_opt_pane_cp01_ParamLimits

0x9197,	// (0x000b4a6a) vod_opt_pane_cp01

0x91c3,	// (0x000b4a96) vod_query_pane_ParamLimits

0x91c3,	// (0x000b4a96) vod_query_pane

0x91f0,	// (0x000b4ac3) vod_query_pane_cp01_ParamLimits

0x91f0,	// (0x000b4ac3) vod_query_pane_cp01

0x91fc,	// (0x000b4acf) vod_t_nml_pane_ParamLimits

0x91fc,	// (0x000b4acf) vod_t_nml_pane

0x92b1,	// (0x000b4b84) vod_t_nml_pane_cp01_ParamLimits

0x92b1,	// (0x000b4b84) vod_t_nml_pane_cp01

0x92ed,	// (0x000b4bc0) vod_t_sub_pane_ParamLimits

0x92ed,	// (0x000b4bc0) vod_t_sub_pane

0x9322,	// (0x000b4bf5) vod_t_sub_pane_cp01_ParamLimits

0x9322,	// (0x000b4bf5) vod_t_sub_pane_cp01

0xee95,	// (0x000ba768) vod_query_field_pane

0xee68,	// (0x000ba73b) vod_query_pane_t1

0x9445,	// (0x000b4d18) bg_button_pane_cp25

0xeee4,	// (0x000ba7b7) sso_btn_pane_t1_copy2

0x934e,	// (0x000b4c21) vod_t_nml_pane_t1_ParamLimits

0x934e,	// (0x000b4c21) vod_t_nml_pane_t1

0xeef4,	// (0x000ba7c7) vod_opt_row_pane_ParamLimits

0xeef4,	// (0x000ba7c7) vod_opt_row_pane

0xef06,	// (0x000ba7d9) vod_t_sub_pane_t1_ParamLimits

0xef06,	// (0x000ba7d9) vod_t_sub_pane_t1

0x9385,	// (0x000b4c58) vod_det_cell_pane_ParamLimits

0x9385,	// (0x000b4c58) vod_det_cell_pane

0x9445,	// (0x000b4d18) input_focus_pane_cp15

0xef1f,	// (0x000ba7f2) vod_query_field_pane_t1

0xef2d,	// (0x000ba800) vod_opt_row_pane_g1_ParamLimits

0xef2d,	// (0x000ba800) vod_opt_row_pane_g1

0xef39,	// (0x000ba80c) vod_opt_row_pane_t1_ParamLimits

0xef39,	// (0x000ba80c) vod_opt_row_pane_t1

0xef5e,	// (0x000ba831) vod_det_cell_field_pane

0xef67,	// (0x000ba83a) vod_det_cell_pane_g1

0xee68,	// (0x000ba73b) vod_det_cell_pane_t1

0x9445,	// (0x000b4d18) input_focus_pane_cp16

0xef1f,	// (0x000ba7f2) vod_det_cell_field_pane_t1

0x9399,	// (0x000b4c6c) call7_btn_grp_pane_ParamLimits

0x9399,	// (0x000b4c6c) call7_btn_grp_pane

0x93b3,	// (0x000b4c86) call7_bubble_pane_ParamLimits

0x93b3,	// (0x000b4c86) call7_bubble_pane

0x93cb,	// (0x000b4c9e) cell_call7_btn_pane_ParamLimits

0x93cb,	// (0x000b4c9e) cell_call7_btn_pane

0x93df,	// (0x000b4cb2) call7_pane_g1_ParamLimits

0x93df,	// (0x000b4cb2) call7_pane_g1

0x93f1,	// (0x000b4cc4) call7_windows_conf_pane_ParamLimits

0x93f1,	// (0x000b4cc4) call7_windows_conf_pane

0x940f,	// (0x000b4ce2) popup_call7_1st_window_ParamLimits

0x940f,	// (0x000b4ce2) popup_call7_1st_window

0x9421,	// (0x000b4cf4) popup_call7_2nd_window_ParamLimits

0x9421,	// (0x000b4cf4) popup_call7_2nd_window

0x9433,	// (0x000b4d06) popup_call7_3rd_window_ParamLimits

0x9433,	// (0x000b4d06) popup_call7_3rd_window

0x9445,	// (0x000b4d18) bg_button_pane_cp26

0xe9b5,	// (0x000ba288) cell_call7_btn_pane_g1

0xef6f,	// (0x000ba842) cell_call7_btn_pane_t1

0x9445,	// (0x000b4d18) bg_popup_window_pane_cp12

0xef7e,	// (0x000ba851) popup_call7_1st_window_g1

0xef86,	// (0x000ba859) popup_call7_1st_window_g2

0xef8e,	// (0x000ba861) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x000bb768) popup_call7_1st_window_g

0xef96,	// (0x000ba869) popup_call7_1st_window_t1

0xefa5,	// (0x000ba878) popup_call7_1st_window_t2

0xefb5,	// (0x000ba888) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x000bb76f) popup_call7_1st_window_t

0x9445,	// (0x000b4d18) bg_popup_window_pane_cp13

0xefc5,	// (0x000ba898) popup_call7_2nd_window_g1

0xefcd,	// (0x000ba8a0) popup_call7_2nd_window_g2

0xefd5,	// (0x000ba8a8) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x000bb776) popup_call7_2nd_window_g

0xefdd,	// (0x000ba8b0) popup_call7_2nd_window_t1

0x9445,	// (0x000b4d18) bg_popup_window_pane_cp14

0xefec,	// (0x000ba8bf) call7_list_conf_pane

0xeff4,	// (0x000ba8c7) call7_list_conf_row_pane_ParamLimits

0xeff4,	// (0x000ba8c7) call7_list_conf_row_pane

0xf007,	// (0x000ba8da) call7_list_conf_row_pane_g1

0xf00f,	// (0x000ba8e2) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x000bb77d) call7_list_conf_row_pane_g

0xf017,	// (0x000ba8ea) call7_list_conf_row_pane_t1

0x9445,	// (0x000b4d18) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large

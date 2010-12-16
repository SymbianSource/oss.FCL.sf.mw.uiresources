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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006d475 };

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
0x5ec2,	// (0x00073337) Screen

0x5ece,	// (0x00073343) application_window

0x5f22,	// (0x00073397) area_bottom_pane_ParamLimits

0x5f22,	// (0x00073397) area_bottom_pane

0x5f80,	// (0x000733f5) area_top_pane_ParamLimits

0x5f80,	// (0x000733f5) area_top_pane

0x5fe4,	// (0x00073459) call_video_uplink_pane_ParamLimits

0x5fe4,	// (0x00073459) call_video_uplink_pane

0x6023,	// (0x00073498) main_pane_ParamLimits

0x6023,	// (0x00073498) main_pane

0x3b96,	// (0x0007100b) context_pane

0x8e39,	// (0x000762ae) navi_pane

0x8e62,	// (0x000762d7) popup_cale_events_window_ParamLimits

0x8e62,	// (0x000762d7) popup_cale_events_window

0x3ba9,	// (0x0007101e) popup_mup_playback_window

0x8e7a,	// (0x000762ef) signal_pane

0x1b6f,	// (0x0006efe4) main_browser_pane

0x1d4c,	// (0x0006f1c1) main_burst_pane

0x8ca9,	// (0x0007611e) main_calc_pane

0x3b8a,	// (0x00070fff) main_cale_day_pane

0x64a7,	// (0x0007391c) main_cale_month_pane

0x3b8a,	// (0x00070fff) main_cale_week_pane

0x1d4c,	// (0x0006f1c1) main_call_pane

0x17fd,	// (0x0006ec72) main_call_poc_pane

0x1d4c,	// (0x0006f1c1) main_camera_pane

0x1d4c,	// (0x0006f1c1) main_chi_dic_pane

0x2502,	// (0x0006f977) main_clock_pane

0x17fd,	// (0x0006ec72) main_fmradio_pane

0x1d4c,	// (0x0006f1c1) main_graph_messa_pane

0x17fd,	// (0x0006ec72) main_help_pane

0x1b6f,	// (0x0006efe4) main_im_pane

0x1a58,	// (0x0006eecd) main_image_pane_ParamLimits

0x1a58,	// (0x0006eecd) main_image_pane

0x17fd,	// (0x0006ec72) main_location2_pane

0x1d4c,	// (0x0006f1c1) main_location_pane

0x1a58,	// (0x0006eecd) main_messa_pane

0x17fd,	// (0x0006ec72) main_mp2_pane

0x1d4c,	// (0x0006f1c1) main_mp_pane

0x17fd,	// (0x0006ec72) main_msg_pane

0x17fd,	// (0x0006ec72) main_mup_eq_pane

0x17fd,	// (0x0006ec72) main_mup_pane

0x1b6f,	// (0x0006efe4) main_notes_pane

0x17fd,	// (0x0006ec72) main_pec_pane

0x17fd,	// (0x0006ec72) main_phob_pane

0x17fd,	// (0x0006ec72) main_pinb_pane

0x17fd,	// (0x0006ec72) main_postcard_pane

0x17fd,	// (0x0006ec72) main_qdial_pane

0x1d4c,	// (0x0006f1c1) main_skin_pane

0x17fd,	// (0x0006ec72) main_smil2_pane

0x1d4c,	// (0x0006f1c1) main_smil_pane

0x1d4c,	// (0x0006f1c1) main_video_pane

0x1d4c,	// (0x0006f1c1) main_video_tele_pane

0x1a58,	// (0x0006eecd) main_viewer_pane_ParamLimits

0x1a58,	// (0x0006eecd) main_viewer_pane

0x1d4c,	// (0x0006f1c1) main_vorec_pane

0x8ce9,	// (0x0007615e) popup_blid_sat_info_window_ParamLimits

0x8ce9,	// (0x0007615e) popup_blid_sat_info_window

0x8d0f,	// (0x00076184) popup_dyc_status_message_window_ParamLimits

0x8d0f,	// (0x00076184) popup_dyc_status_message_window

0x8d1f,	// (0x00076194) popup_grid_large_graphic_window_ParamLimits

0x8d1f,	// (0x00076194) popup_grid_large_graphic_window

0x8db4,	// (0x00076229) popup_loc_request_window_ParamLimits

0x8db4,	// (0x00076229) popup_loc_request_window

0x8e0d,	// (0x00076282) popup_wml_address_window_ParamLimits

0x8e0d,	// (0x00076282) popup_wml_address_window

0x8b79,	// (0x00075fee) call_muted_g1

0x8869,	// (0x00075cde) popup_call_audio_conf_window_ParamLimits

0x8869,	// (0x00075cde) popup_call_audio_conf_window

0x8b89,	// (0x00075ffe) popup_call_audio_first_window_ParamLimits

0x8b89,	// (0x00075ffe) popup_call_audio_first_window

0x8bc9,	// (0x0007603e) popup_call_audio_in_window_ParamLimits

0x8bc9,	// (0x0007603e) popup_call_audio_in_window

0x8bed,	// (0x00076062) popup_call_audio_out_window_ParamLimits

0x8bed,	// (0x00076062) popup_call_audio_out_window

0x8c0f,	// (0x00076084) popup_call_audio_second_window_ParamLimits

0x8c0f,	// (0x00076084) popup_call_audio_second_window

0x8c3f,	// (0x000760b4) popup_call_audio_wait_window_ParamLimits

0x8c3f,	// (0x000760b4) popup_call_audio_wait_window

0x8c60,	// (0x000760d5) popup_number_entry_window_ParamLimits

0x8c60,	// (0x000760d5) popup_number_entry_window

0xebd2,	// (0x0007c047) bg_popup_call_pane_cp05_ParamLimits

0xebd2,	// (0x0007c047) bg_popup_call_pane_cp05

0xebf2,	// (0x0007c067) popup_number_entry_window_t1

0xec05,	// (0x0007c07a) popup_number_entry_window_t2

0xec17,	// (0x0007c08c) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0007c492) popup_number_entry_window_t

0xec5e,	// (0x0007c0d3) text_title_cp2

0xec71,	// (0x0007c0e6) bg_popup_call_pane_cp_ParamLimits

0xec71,	// (0x0007c0e6) bg_popup_call_pane_cp

0xec7f,	// (0x0007c0f4) call_thumbnail_pane

0xec87,	// (0x0007c0fc) popup_call_audio_in_window_g1_ParamLimits

0xec87,	// (0x0007c0fc) popup_call_audio_in_window_g1

0xec93,	// (0x0007c108) popup_call_audio_in_window_g2_ParamLimits

0xec93,	// (0x0007c108) popup_call_audio_in_window_g2

0xec9f,	// (0x0007c114) popup_call_audio_in_window_g3_ParamLimits

0xec9f,	// (0x0007c114) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0007c49b) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0007c49b) popup_call_audio_in_window_g

0xecab,	// (0x0007c120) popup_call_audio_in_window_t1_ParamLimits

0xecab,	// (0x0007c120) popup_call_audio_in_window_t1

0xecc7,	// (0x0007c13c) popup_call_audio_in_window_t2_ParamLimits

0xecc7,	// (0x0007c13c) popup_call_audio_in_window_t2

0xece3,	// (0x0007c158) popup_call_audio_in_window_t3_ParamLimits

0xece3,	// (0x0007c158) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0007c4a2) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0007c4a2) popup_call_audio_in_window_t

0xec71,	// (0x0007c0e6) bg_popup_call_pane_cp01_ParamLimits

0xec71,	// (0x0007c0e6) bg_popup_call_pane_cp01

0xec7f,	// (0x0007c0f4) call_thumbnail_pane_cp02

0xecf6,	// (0x0007c16b) call_type_pane_cp022

0xecfe,	// (0x0007c173) popup_call_audio_out_window_g1_ParamLimits

0xecfe,	// (0x0007c173) popup_call_audio_out_window_g1

0xed10,	// (0x0007c185) popup_call_audio_out_window_g2_ParamLimits

0xed10,	// (0x0007c185) popup_call_audio_out_window_g2

0xed1c,	// (0x0007c191) popup_call_audio_out_window_g3_ParamLimits

0xed1c,	// (0x0007c191) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0007c4a9) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0007c4a9) popup_call_audio_out_window_g

0xed2e,	// (0x0007c1a3) popup_call_audio_out_window_t1_ParamLimits

0xed2e,	// (0x0007c1a3) popup_call_audio_out_window_t1

0xed46,	// (0x0007c1bb) popup_call_audio_out_window_t2_ParamLimits

0xed46,	// (0x0007c1bb) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0007c4b0) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0007c4b0) popup_call_audio_out_window_t

0xed5b,	// (0x0007c1d0) bg_popup_call_pane_ParamLimits

0xed5b,	// (0x0007c1d0) bg_popup_call_pane

0x61ea,	// (0x0007365f) call_thumbnail_pane_cp_ParamLimits

0x61ea,	// (0x0007365f) call_thumbnail_pane_cp

0xeddf,	// (0x0007c254) call_type_pane_cp01_ParamLimits

0xeddf,	// (0x0007c254) call_type_pane_cp01

0xee23,	// (0x0007c298) popup_call_audio_first_window_g1_ParamLimits

0xee23,	// (0x0007c298) popup_call_audio_first_window_g1

0xee6f,	// (0x0007c2e4) popup_call_audio_first_window_g2_ParamLimits

0xee6f,	// (0x0007c2e4) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0007c4b5) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0007c4b5) popup_call_audio_first_window_g

0xeeb3,	// (0x0007c328) popup_call_audio_first_window_t1_ParamLimits

0xeeb3,	// (0x0007c328) popup_call_audio_first_window_t1

0xef5f,	// (0x0007c3d4) popup_call_audio_first_window_t4_ParamLimits

0xef5f,	// (0x0007c3d4) popup_call_audio_first_window_t4

0x17ce,	// (0x0006ec43) popup_call_audio_first_window_t5_ParamLimits

0x17ce,	// (0x0006ec43) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0007c4ba) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0007c4ba) popup_call_audio_first_window_t

0x17fd,	// (0x0006ec72) bg_popup_call_pane_cp02

0x1807,	// (0x0006ec7c) call_type_pane_cp023

0x180f,	// (0x0006ec84) popup_call_audio_wait_window_g1

0x1817,	// (0x0006ec8c) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0007c4c1) popup_call_audio_wait_window_g

0x181f,	// (0x0006ec94) popup_call_audio_wait_window_t3

0x182d,	// (0x0006eca2) bg_popup_call_pane_cp03_ParamLimits

0x182d,	// (0x0006eca2) bg_popup_call_pane_cp03

0x188d,	// (0x0006ed02) call_thumbnail_pane_cp011_ParamLimits

0x188d,	// (0x0006ed02) call_thumbnail_pane_cp011

0x1899,	// (0x0006ed0e) call_type_pane_cp034_ParamLimits

0x1899,	// (0x0006ed0e) call_type_pane_cp034

0x18d5,	// (0x0006ed4a) popup_call_audio_second_window_g1_ParamLimits

0x18d5,	// (0x0006ed4a) popup_call_audio_second_window_g1

0x1911,	// (0x0006ed86) popup_call_audio_second_window_g2_ParamLimits

0x1911,	// (0x0006ed86) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0007c4c6) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0007c4c6) popup_call_audio_second_window_g

0x194d,	// (0x0006edc2) popup_call_audio_second_window_t1_ParamLimits

0x194d,	// (0x0006edc2) popup_call_audio_second_window_t1

0x19ce,	// (0x0006ee43) popup_call_audio_second_window_t2_ParamLimits

0x19ce,	// (0x0006ee43) popup_call_audio_second_window_t2

0x1a04,	// (0x0006ee79) popup_call_audio_second_window_t3_ParamLimits

0x1a04,	// (0x0006ee79) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0007c4cb) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0007c4cb) popup_call_audio_second_window_t

0x17fd,	// (0x0006ec72) bg_popup_call_pane_cp04

0x1a3a,	// (0x0006eeaf) list_conf_pane

0x1a42,	// (0x0006eeb7) popup_call_audio_conf_window_t1

0x1a50,	// (0x0006eec5) call_thumbnail_pane_g1

0x1a58,	// (0x0006eecd) bg_pinb_pane_ParamLimits

0x1a58,	// (0x0006eecd) bg_pinb_pane

0x1a66,	// (0x0006eedb) find_pinb_pane

0x1a58,	// (0x0006eecd) listscroll_pinb_pane_ParamLimits

0x1a58,	// (0x0006eecd) listscroll_pinb_pane

0x1a70,	// (0x0006eee5) pinb_bg_pane_g1

0x1a70,	// (0x0006eee5) pinb_bg_pane_g2

0x1a70,	// (0x0006eee5) pinb_bg_pane_g3

0x1a70,	// (0x0006eee5) pinb_bg_pane_g4

0x1a70,	// (0x0006eee5) pinb_bg_pane_g5

0x1a70,	// (0x0006eee5) pinb_bg_pane_g6

0x1a70,	// (0x0006eee5) pinb_bg_pane_g7

0x1a70,	// (0x0006eee5) pinb_bg_pane_g8

0x1a70,	// (0x0006eee5) pinb_bg_pane_g9

0x1a70,	// (0x0006eee5) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0007c4d2) pinb_bg_pane_g

0xebc8,	// (0x0007c03d) grid_pinb_pane

0xebc8,	// (0x0007c03d) list_pinb_pane

0xefeb,	// (0x0007c460) scroll_pane_cp01_ParamLimits

0xefeb,	// (0x0007c460) scroll_pane_cp01

0x1a7a,	// (0x0006eeef) find_pinb_pane_g1_ParamLimits

0x1a7a,	// (0x0006eeef) find_pinb_pane_g1

0x1a92,	// (0x0006ef07) find_pinb_pane_t1

0x1aa4,	// (0x0006ef19) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0007c4ec) find_pinb_pane_t

0x1ab9,	// (0x0006ef2e) input_focus_pane_cp01_ParamLimits

0x1ab9,	// (0x0006ef2e) input_focus_pane_cp01

0x1ac5,	// (0x0006ef3a) cell_pinb_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cell_pinb_pane

0x1ad3,	// (0x0006ef48) cell_pinb_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_pinb_pane_g1

0x1ae1,	// (0x0006ef56) cell_pinb_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) cell_pinb_pane_g2

0x1ae1,	// (0x0006ef56) cell_pinb_pane_g3_ParamLimits

0x1ae1,	// (0x0006ef56) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0007c4f1) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0007c4f1) cell_pinb_pane_g

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp01

0x1ac5,	// (0x0006ef3a) list_pinb_item_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) list_pinb_item_pane

0xebc8,	// (0x0007c03d) list_highlight_pane_cp02

0x1aef,	// (0x0006ef64) list_pinb_item_pane_g1_ParamLimits

0x1aef,	// (0x0006ef64) list_pinb_item_pane_g1

0x1ae1,	// (0x0006ef56) list_pinb_item_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) list_pinb_item_pane_g2

0x1ad3,	// (0x0006ef48) list_pinb_item_pane_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_pinb_item_pane_g3

0x1ae1,	// (0x0006ef56) list_pinb_item_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0007c4f8) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0007c4f8) list_pinb_item_pane_g

0x1afd,	// (0x0006ef72) list_pinb_item_pane_t1_ParamLimits

0x1afd,	// (0x0006ef72) list_pinb_item_pane_t1

0x6228,	// (0x0007369d) calc_display_pane

0x6246,	// (0x000736bb) calc_paper_pane

0x6262,	// (0x000736d7) grid_calc_pane

0xebc8,	// (0x0007c03d) bg_list_pane_cp01

0x1b11,	// (0x0006ef86) clock_g1

0x1b11,	// (0x0006ef86) clock_g2

0x0001,

0xf08c,	// (0x0007c501) clock_g

0x1b1b,	// (0x0006ef90) clock_t1_ParamLimits

0x1b1b,	// (0x0006ef90) clock_t1

0x1b2f,	// (0x0006efa4) clock_t2_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t2

0x1b2f,	// (0x0006efa4) clock_t3_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t3

0x1b2f,	// (0x0006efa4) clock_t4_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t4

0x1b1b,	// (0x0006ef90) clock_t5_ParamLimits

0x1b1b,	// (0x0006ef90) clock_t5

0x1b2f,	// (0x0006efa4) clock_t6_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t6

0x1b2f,	// (0x0006efa4) clock_t7_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t7

0x1b2f,	// (0x0006efa4) clock_t8_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t8

0x1b2f,	// (0x0006efa4) clock_t9_ParamLimits

0x1b2f,	// (0x0006efa4) clock_t9

0x0008,

0xf091,	// (0x0007c506) clock_t_ParamLimits

0xf091,	// (0x0007c506) clock_t

0xebc8,	// (0x0007c03d) popup_clock_analogue_window_cp02

0xebc8,	// (0x0007c03d) popup_clock_digital_window_cp01

0x17fd,	// (0x0006ec72) listscroll_help_pane

0x17fd,	// (0x0006ec72) phob_pre_status_pane

0x1b43,	// (0x0006efb8) grid_qdial_pane

0x1a58,	// (0x0006eecd) listscroll_mce_pane

0x1a58,	// (0x0006eecd) bg_notes_pane

0x1b4d,	// (0x0006efc2) list_notes_pane

0x628e,	// (0x00073703) scroll_pane_cp06

0x1b5b,	// (0x0006efd0) bg_calc_paper_pane

0x629d,	// (0x00073712) list_calc_pane

0x1b6f,	// (0x0006efe4) bg_calc_display_pane

0x62b7,	// (0x0007372c) calc_display_pane_t1

0x62cc,	// (0x00073741) calc_display_pane_t2

0x62e1,	// (0x00073756) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0007c519) calc_display_pane_t

0x62f3,	// (0x00073768) cell_calc_pane_ParamLimits

0x62f3,	// (0x00073768) cell_calc_pane

0x1b7b,	// (0x0006eff0) bg_calc_paper_pane_g1

0x1b93,	// (0x0006f008) bg_calc_paper_pane_g2

0x1b87,	// (0x0006effc) bg_calc_paper_pane_g3

0x1bab,	// (0x0006f020) bg_calc_paper_pane_g4

0x1b9f,	// (0x0006f014) bg_calc_paper_pane_g5

0x6322,	// (0x00073797) bg_calc_paper_pane_g6

0x6333,	// (0x000737a8) bg_calc_paper_pane_g7

0x6344,	// (0x000737b9) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0007c520) bg_calc_paper_pane_g

0x6355,	// (0x000737ca) calc_bg_paper_pane_g9

0x6366,	// (0x000737db) list_calc_item_pane_ParamLimits

0x6366,	// (0x000737db) list_calc_item_pane

0x1bb7,	// (0x0006f02c) list_calc_item_pane_g1

0x6387,	// (0x000737fc) list_calc_item_pane_t1_ParamLimits

0x6387,	// (0x000737fc) list_calc_item_pane_t1

0x6399,	// (0x0007380e) list_calc_item_pane_t2_ParamLimits

0x6399,	// (0x0007380e) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0007c531) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0007c531) list_calc_item_pane_t

0x1a70,	// (0x0006eee5) cell_calc_pane_g1

0x1bc4,	// (0x0006f039) grid_highlight_pane_cp02

0xe312,	// (0x0007b787) bg_calc_display_pane_g1

0x63c9,	// (0x0007383e) bg_calc_display_pane_g2

0xe31b,	// (0x0007b790) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0007c53b) bg_calc_display_pane_g

0x63d3,	// (0x00073848) cell_qdial_pane_ParamLimits

0x63d3,	// (0x00073848) cell_qdial_pane

0x63e9,	// (0x0007385e) cell_qdial_pane_g1_ParamLimits

0x63e9,	// (0x0007385e) cell_qdial_pane_g1

0x63f6,	// (0x0007386b) cell_qdial_pane_g2_ParamLimits

0x63f6,	// (0x0007386b) cell_qdial_pane_g2

0x1be6,	// (0x0006f05b) cell_qdial_pane_g3_ParamLimits

0x1be6,	// (0x0006f05b) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0007c542) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0007c542) cell_qdial_pane_g

0x6414,	// (0x00073889) cell_qdial_pane_t1_ParamLimits

0x6414,	// (0x00073889) cell_qdial_pane_t1

0x642c,	// (0x000738a1) cell_qdial_pane_t2_ParamLimits

0x642c,	// (0x000738a1) cell_qdial_pane_t2

0x643f,	// (0x000738b4) cell_qdial_pane_t3_ParamLimits

0x643f,	// (0x000738b4) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0007c54b) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0007c54b) cell_qdial_pane_t

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp04

0x1bf2,	// (0x0006f067) thumbnail_qdial_pane_ParamLimits

0x1bf2,	// (0x0006f067) thumbnail_qdial_pane

0x1c4e,	// (0x0006f0c3) list_help_pane

0x1c57,	// (0x0006f0cc) scroll_pane_cp02

0x6452,	// (0x000738c7) help_list_pane_t1_ParamLimits

0x6452,	// (0x000738c7) help_list_pane_t1

0x1c68,	// (0x0006f0dd) bg_notes_pane_g2

0x1c60,	// (0x0006f0d5) bg_notes_pane_g3

0x1c70,	// (0x0006f0e5) notes_bg_pane_g1

0x1c80,	// (0x0006f0f5) notes_bg_pane_g4

0x1c78,	// (0x0006f0ed) notes_bg_pane_g5

0x1c88,	// (0x0006f0fd) notes_bg_pane_g6

0x1c90,	// (0x0006f105) notes_bg_pane_g7

0x1ca0,	// (0x0006f115) notes_bg_pane_g8

0x1c98,	// (0x0006f10d) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0007c569) notes_bg_pane_g

0x6479,	// (0x000738ee) list_notes_text_pane_ParamLimits

0x6479,	// (0x000738ee) list_notes_text_pane

0x1ca8,	// (0x0006f11d) list_notes_text_pane_g1

0x553e,	// (0x000729b3) list_notes_text_pane_t1

0x64a7,	// (0x0007391c) listscroll_cale_week_pane

0x64d3,	// (0x00073948) bg_cale_heading_pane

0x64fc,	// (0x00073971) bg_cale_pane_cp01

0x651e,	// (0x00073993) cale_week_corner_pane

0x653d,	// (0x000739b2) cale_week_day_heading_pane

0x656b,	// (0x000739e0) cale_week_scroll_pane_g1

0x658f,	// (0x00073a04) cale_week_scroll_pane_g2

0x65a7,	// (0x00073a1c) cale_week_scroll_pane_g3

0x65bf,	// (0x00073a34) cale_week_scroll_pane_g4

0x65d7,	// (0x00073a4c) cale_week_scroll_pane_g5

0x65ef,	// (0x00073a64) cale_week_scroll_pane_g6

0x660f,	// (0x00073a84) cale_week_scroll_pane_g7

0x662f,	// (0x00073aa4) cale_week_scroll_pane_g8

0x664f,	// (0x00073ac4) cale_week_scroll_pane_g9

0x666c,	// (0x00073ae1) cale_week_scroll_pane_g10

0x6689,	// (0x00073afe) cale_week_scroll_pane_g11

0x66a8,	// (0x00073b1d) cale_week_scroll_pane_g12

0x66cd,	// (0x00073b42) cale_week_scroll_pane_g13

0x66f6,	// (0x00073b6b) cale_week_scroll_pane_g14

0x671f,	// (0x00073b94) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0007c578) cale_week_scroll_pane_g

0x6768,	// (0x00073bdd) cale_week_time_pane

0x6788,	// (0x00073bfd) grid_cale_week_pane

0x1cd4,	// (0x0006f149) scroll_pane_cp08

0x67b9,	// (0x00073c2e) cell_cale_week_pane_ParamLimits

0x67b9,	// (0x00073c2e) cell_cale_week_pane

0x6849,	// (0x00073cbe) cale_week_day_heading_pane_t1

0x6871,	// (0x00073ce6) cale_week_day_heading_pane_t2

0x689e,	// (0x00073d13) cale_week_day_heading_pane_t3

0x68cb,	// (0x00073d40) cale_week_day_heading_pane_t4

0x68f8,	// (0x00073d6d) cale_week_day_heading_pane_t5

0x6925,	// (0x00073d9a) cale_week_day_heading_pane_t6

0x6952,	// (0x00073dc7) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0007c599) cale_week_day_heading_pane_t

0x1cf1,	// (0x0006f166) bg_cale_side_pane

0x697a,	// (0x00073def) cale_week_time_pane_t1

0x699e,	// (0x00073e13) cale_week_time_pane_t2

0x69c2,	// (0x00073e37) cale_week_time_pane_t3

0x69e6,	// (0x00073e5b) cale_week_time_pane_t4

0x6a0a,	// (0x00073e7f) cale_week_time_pane_t5

0x6a30,	// (0x00073ea5) cale_week_time_pane_t6

0x6a58,	// (0x00073ecd) cale_week_time_pane_t7

0x6a84,	// (0x00073ef9) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0007c5a8) cale_week_time_pane_t

0x6ab4,	// (0x00073f29) cell_cale_week_pane_g2

0x6ad8,	// (0x00073f4d) cell_cale_week_pane_g3_ParamLimits

0x6ad8,	// (0x00073f4d) cell_cale_week_pane_g3

0x1cff,	// (0x0006f174) grid_highlight_pane_cp07

0x1d07,	// (0x0006f17c) listscroll_gms_pane

0x1d11,	// (0x0006f186) grid_gms_pane

0x1d1a,	// (0x0006f18f) listscroll_gms_pane_g1

0x1d22,	// (0x0006f197) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0007c5b9) listscroll_gms_pane_g

0x6af0,	// (0x00073f65) scroll_pane_cp010

0x6afb,	// (0x00073f70) cell_gms_pane_ParamLimits

0x6afb,	// (0x00073f70) cell_gms_pane

0x6b0e,	// (0x00073f83) cell_gms_pane_g1

0x1d2a,	// (0x0006f19f) cell_gms_pane_g2

0x1d32,	// (0x0006f1a7) cell_gms_pane_g3

0x1d3b,	// (0x0006f1b0) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0007c5be) cell_gms_pane_g

0x1d44,	// (0x0006f1b9) grid_highlight_pane_cp09

0x8afd,	// (0x00075f72) phob_pre_status_pane_g1

0x8b05,	// (0x00075f7a) phob_pre_status_pane_g2

0x8b0d,	// (0x00075f82) phob_pre_status_pane_g3

0x8b15,	// (0x00075f8a) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x0007c964) phob_pre_status_pane_g

0x8b25,	// (0x00075f9a) phob_pre_status_pane_t1

0x8b35,	// (0x00075faa) phob_pre_status_pane_t2

0x8b45,	// (0x00075fba) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x0007c96f) phob_pre_status_pane_t

0x1d4c,	// (0x0006f1c1) bg_list_pane_cp05

0x6b1e,	// (0x00073f93) grid_vorec_pane

0x6b28,	// (0x00073f9d) vorec_t1

0x6b36,	// (0x00073fab) vorec_t2

0x6b44,	// (0x00073fb9) vorec_t3

0x6b52,	// (0x00073fc7) vorec_t4

0xd5bd,	// (0x0007aa32) vorec_t5

0xd5cb,	// (0x0007aa40) vorec_t6

0x0004,

0xf152,	// (0x0007c5c7) vorec_t

0xd5d9,	// (0x0007aa4e) wait_bar_pane_cp01

0x6b6e,	// (0x00073fe3) cell_vorec_pane_ParamLimits

0x6b6e,	// (0x00073fe3) cell_vorec_pane

0x6b83,	// (0x00073ff8) cell_vorec_pane_g1

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp05

0x1ac5,	// (0x0006ef3a) cams_zoom_pane

0x1ac5,	// (0x0006ef3a) image_vga_pane

0x1ae1,	// (0x0006ef56) main_camera_pane_g1

0x1ae1,	// (0x0006ef56) main_camera_pane_g2

0x1ae1,	// (0x0006ef56) main_camera_pane_g3

0x1ae1,	// (0x0006ef56) main_camera_pane_g4

0x1ae1,	// (0x0006ef56) main_camera_pane_g5

0x1ae1,	// (0x0006ef56) main_camera_pane_g6

0x1ae1,	// (0x0006ef56) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0007c5d2) main_camera_pane_g

0x1b2f,	// (0x0006efa4) main_camera_pane_t1

0x1b2f,	// (0x0006efa4) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0007c5e3) main_camera_pane_t

0x6b8d,	// (0x00074002) cams_zoom_pane_cp_ParamLimits

0x6b8d,	// (0x00074002) cams_zoom_pane_cp

0x6bbb,	// (0x00074030) image_cif_pane_ParamLimits

0x6bbb,	// (0x00074030) image_cif_pane

0xebc8,	// (0x0007c03d) image_subqcif_pane

0x6bc9,	// (0x0007403e) main_video_pane_g1_ParamLimits

0x6bc9,	// (0x0007403e) main_video_pane_g1

0x6bf1,	// (0x00074066) main_video_pane_g2_ParamLimits

0x6bf1,	// (0x00074066) main_video_pane_g2

0x6c24,	// (0x00074099) main_video_pane_g3_ParamLimits

0x6c24,	// (0x00074099) main_video_pane_g3

0x6c24,	// (0x00074099) main_video_pane_g4_ParamLimits

0x6c24,	// (0x00074099) main_video_pane_g4

0x6c52,	// (0x000740c7) main_video_pane_g5_ParamLimits

0x6c52,	// (0x000740c7) main_video_pane_g5

0x1d54,	// (0x0006f1c9) main_video_pane_g6_ParamLimits

0x1d54,	// (0x0006f1c9) main_video_pane_g6

0x0006,

0xf173,	// (0x0007c5e8) main_video_pane_g_ParamLimits

0xf173,	// (0x0007c5e8) main_video_pane_g

0x6c6e,	// (0x000740e3) main_video_pane_t1_ParamLimits

0x6c6e,	// (0x000740e3) main_video_pane_t1

0x1b11,	// (0x0006ef86) cams_zoom_pane_g1

0x1b11,	// (0x0006ef86) cams_zoom_pane_g2

0x1b11,	// (0x0006ef86) cams_zoom_pane_g3

0x1b11,	// (0x0006ef86) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0007c5f7) cams_zoom_pane_g

0x1ac5,	// (0x0006ef3a) grid_cams_pane

0x1ac5,	// (0x0006ef3a) linegrid_cams_pane

0x6ca8,	// (0x0007411d) cell_cams_pane_ParamLimits

0x6ca8,	// (0x0007411d) cell_cams_pane

0xebc8,	// (0x0007c03d) cams_burst_image_pane

0x1b11,	// (0x0006ef86) cell_cams_pane_g1

0xebc8,	// (0x0007c03d) grid_highlight_pane_cp03

0x1a70,	// (0x0006eee5) mp_bg_pane_g1

0xebc8,	// (0x0007c03d) bg_list_pane_cp03

0xebc8,	// (0x0007c03d) bg_mp_pane

0xebc8,	// (0x0007c03d) grid_mp_pane

0x1b11,	// (0x0006ef86) media_player_g1

0x2267,	// (0x0006f6dc) media_player_t1

0x2267,	// (0x0006f6dc) media_player_t2

0x2267,	// (0x0006f6dc) media_player_t3

0x2267,	// (0x0006f6dc) media_player_t4

0x2267,	// (0x0006f6dc) media_player_t5

0x2267,	// (0x0006f6dc) media_player_t6

0x2267,	// (0x0006f6dc) media_player_t7

0x0006,

0xf4d9,	// (0x0007c94e) media_player_t

0xebc8,	// (0x0007c03d) wait_bar_pane_cp02

0xf4be,	// (0x0007c933) main_usb_pane_t

0x2502,	// (0x0006f977) cell_mp_pane

0x1a70,	// (0x0006eee5) cell_mp_pane_g1

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp06

0x1d6e,	// (0x0006f1e3) grid_skin_colour_pane

0x1d76,	// (0x0006f1eb) list_highlight_pane_cp03

0x6cbd,	// (0x00074132) skin_g1

0x1d7e,	// (0x0006f1f3) skin_t1

0x1d8d,	// (0x0006f202) skin_t2

0x0001,

0xf1b0,	// (0x0007c625) skin_t

0x6cc7,	// (0x0007413c) cell_skin_colour_pane_ParamLimits

0x6cc7,	// (0x0007413c) cell_skin_colour_pane

0x1d9b,	// (0x0006f210) cell_skin_colour_pane_g1

0x6d47,	// (0x000741bc) call_video_g1_ParamLimits

0x6d47,	// (0x000741bc) call_video_g1

0x6d57,	// (0x000741cc) call_video_g2_ParamLimits

0x6d57,	// (0x000741cc) call_video_g2

0x0001,

0xf1b5,	// (0x0007c62a) call_video_g_ParamLimits

0xf1b5,	// (0x0007c62a) call_video_g

0x6da7,	// (0x0007421c) call_video_uplink_pane_cp1_ParamLimits

0x6da7,	// (0x0007421c) call_video_uplink_pane_cp1

0x1dad,	// (0x0006f222) call_video_uplink_pane_cp2

0x6e63,	// (0x000742d8) video_down_crop_pane_ParamLimits

0x6e63,	// (0x000742d8) video_down_crop_pane

0x6f54,	// (0x000743c9) video_down_pane_ParamLimits

0x6f54,	// (0x000743c9) video_down_pane

0x1db5,	// (0x0006f22a) video_down_subqcif_pane_ParamLimits

0x1db5,	// (0x0006f22a) video_down_subqcif_pane

0x1dcf,	// (0x0006f244) video_down_subqcif_pane_cp_ParamLimits

0x1dcf,	// (0x0006f244) video_down_subqcif_pane_cp

0x1df5,	// (0x0006f26a) im_reading_pane_ParamLimits

0x1df5,	// (0x0006f26a) im_reading_pane

0x7071,	// (0x000744e6) im_writing_pane_ParamLimits

0x7071,	// (0x000744e6) im_writing_pane

0x708f,	// (0x00074504) im_reading_pane_t1

0x1e0f,	// (0x0006f284) list_im_pane

0x1e20,	// (0x0006f295) scroll_pane_cp07

0x70d1,	// (0x00074546) im_writing_pane_t1_ParamLimits

0x70d1,	// (0x00074546) im_writing_pane_t1

0x1e39,	// (0x0006f2ae) im_writing_pane_t2_ParamLimits

0x1e39,	// (0x0006f2ae) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0007c634) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0007c634) im_writing_pane_t

0x17fd,	// (0x0006ec72) input_focus_pane_cp04

0x17fd,	// (0x0006ec72) input_focus_pane_cp05

0x70e3,	// (0x00074558) list_im_single_pane_ParamLimits

0x70e3,	// (0x00074558) list_im_single_pane

0x1e56,	// (0x0006f2cb) list_single_im_pane_t1

0x1d4c,	// (0x0006f1c1) blid_accuracy_pane

0x1d4c,	// (0x0006f1c1) blid_compass_pane

0x3b42,	// (0x00070fb7) main_location_t1

0x3b42,	// (0x00070fb7) main_location_t2

0x3b42,	// (0x00070fb7) main_location_t3

0x0002,

0xf4e8,	// (0x0007c95d) main_location_t

0x17fd,	// (0x0006ec72) aid_levels_location

0x1a70,	// (0x0006eee5) blid_accuracy_pane_g1

0x1a70,	// (0x0006eee5) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x0007c688) blid_accuracy_pane_g

0x1e90,	// (0x0006f305) wml_content_pane

0x1ece,	// (0x0006f343) wml_button_pane_ParamLimits

0x1ece,	// (0x0006f343) wml_button_pane

0x70fc,	// (0x00074571) wml_list_single_large_pane_ParamLimits

0x70fc,	// (0x00074571) wml_list_single_large_pane

0x711e,	// (0x00074593) wml_list_single_medium_pane_ParamLimits

0x711e,	// (0x00074593) wml_list_single_medium_pane

0x7141,	// (0x000745b6) wml_list_single_small_pane_ParamLimits

0x7141,	// (0x000745b6) wml_list_single_small_pane

0x1ee2,	// (0x0006f357) wml_selection_box_pane_ParamLimits

0x1ee2,	// (0x0006f357) wml_selection_box_pane

0x1ef5,	// (0x0006f36a) wml_list_single_pane_t1

0x1f04,	// (0x0006f379) wml_list_single_medium_pane_t1

0x1f13,	// (0x0006f388) wml_list_single_large_pane_t1

0x1f22,	// (0x0006f397) input_focus_pane_cp02_ParamLimits

0x1f22,	// (0x0006f397) input_focus_pane_cp02

0x1f35,	// (0x0006f3aa) wml_selection_box_pane_g1

0x1f3e,	// (0x0006f3b3) wml_selection_box_pane_t1_ParamLimits

0x1f3e,	// (0x0006f3b3) wml_selection_box_pane_t1

0x1a58,	// (0x0006eecd) bg_wml_button_pane_ParamLimits

0x1a58,	// (0x0006eecd) bg_wml_button_pane

0x1f56,	// (0x0006f3cb) wml_button_pane_g1

0x1f5e,	// (0x0006f3d3) wml_button_pane_t1

0x1f56,	// (0x0006f3cb) wml_button_bg_pane_g1

0x1f6e,	// (0x0006f3e3) wml_button_bg_pane_g2

0x1f76,	// (0x0006f3eb) wml_button_bg_pane_g3

0x1f7e,	// (0x0006f3f3) wml_button_bg_pane_g4

0x1f86,	// (0x0006f3fb) wml_button_bg_pane_g5

0x1f8e,	// (0x0006f403) wml_button_bg_pane_g6

0x1f96,	// (0x0006f40b) wml_button_bg_pane_g7

0x1f9e,	// (0x0006f413) wml_button_bg_pane_g8

0x1fa6,	// (0x0006f41b) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0007c639) wml_button_bg_pane_g

0x7169,	// (0x000745de) bg_list_pane_cp02

0x1fae,	// (0x0006f423) mce_header_pane_ParamLimits

0x1fae,	// (0x0006f423) mce_header_pane

0x1fc4,	// (0x0006f439) mce_icon_pane

0x1fc4,	// (0x0006f439) mce_image_pane

0x1fcd,	// (0x0006f442) mce_text_pane_ParamLimits

0x1fcd,	// (0x0006f442) mce_text_pane

0x7173,	// (0x000745e8) scroll_pane_cp03

0x1ec6,	// (0x0006f33b) scroll_pane_cp04

0x1fe0,	// (0x0006f455) scroll_pane_cp05_ParamLimits

0x1fe0,	// (0x0006f455) scroll_pane_cp05

0x717d,	// (0x000745f2) mce_header_field_pane_ParamLimits

0x717d,	// (0x000745f2) mce_header_field_pane

0x719f,	// (0x00074614) mce_header_field_pane_2_ParamLimits

0x719f,	// (0x00074614) mce_header_field_pane_2

0x71b5,	// (0x0007462a) mce_header_field_pane_3

0x71bd,	// (0x00074632) list_single_mce_message_pane_ParamLimits

0x71bd,	// (0x00074632) list_single_mce_message_pane

0x71dc,	// (0x00074651) list_single_mce_smart_pane_ParamLimits

0x71dc,	// (0x00074651) list_single_mce_smart_pane

0x1fec,	// (0x0006f461) input_focus_pane_cp03

0x1ff5,	// (0x0006f46a) list_header_data_pane

0x7206,	// (0x0007467b) mce_header_field_pane_t1

0x7216,	// (0x0007468b) list_single_mce_header_pane_ParamLimits

0x7216,	// (0x0007468b) list_single_mce_header_pane

0x1ffd,	// (0x0006f472) list_single_mce_header_pane_t1

0x200c,	// (0x0006f481) list_single_mce_message_pane_g1

0x2014,	// (0x0006f489) list_single_mce_message_pane_t1

0x725a,	// (0x000746cf) bg_cale_heading_pane_cp01_ParamLimits

0x725a,	// (0x000746cf) bg_cale_heading_pane_cp01

0x2022,	// (0x0006f497) bg_cale_pane_cp02_ParamLimits

0x2022,	// (0x0006f497) bg_cale_pane_cp02

0x72ac,	// (0x00074721) cale_month_corner_pane

0x72cb,	// (0x00074740) cale_month_day_heading_pane_ParamLimits

0x72cb,	// (0x00074740) cale_month_day_heading_pane

0x732d,	// (0x000747a2) cale_month_pane_g1_ParamLimits

0x732d,	// (0x000747a2) cale_month_pane_g1

0x7374,	// (0x000747e9) cale_month_pane_g2_ParamLimits

0x7374,	// (0x000747e9) cale_month_pane_g2

0x73ac,	// (0x00074821) cale_month_pane_g3_ParamLimits

0x73ac,	// (0x00074821) cale_month_pane_g3

0x7400,	// (0x00074875) cale_month_pane_g4_ParamLimits

0x7400,	// (0x00074875) cale_month_pane_g4

0x7454,	// (0x000748c9) cale_month_pane_g5_ParamLimits

0x7454,	// (0x000748c9) cale_month_pane_g5

0x74a8,	// (0x0007491d) cale_month_pane_g6_ParamLimits

0x74a8,	// (0x0007491d) cale_month_pane_g6

0x750c,	// (0x00074981) cale_month_pane_g7_ParamLimits

0x750c,	// (0x00074981) cale_month_pane_g7

0x7570,	// (0x000749e5) cale_month_pane_g8_ParamLimits

0x7570,	// (0x000749e5) cale_month_pane_g8

0x75d4,	// (0x00074a49) cale_month_pane_g9_ParamLimits

0x75d4,	// (0x00074a49) cale_month_pane_g9

0x762e,	// (0x00074aa3) cale_month_pane_g10_ParamLimits

0x762e,	// (0x00074aa3) cale_month_pane_g10

0x7680,	// (0x00074af5) cale_month_pane_g11_ParamLimits

0x7680,	// (0x00074af5) cale_month_pane_g11

0x76ce,	// (0x00074b43) cale_month_pane_g12_ParamLimits

0x76ce,	// (0x00074b43) cale_month_pane_g12

0x771e,	// (0x00074b93) cale_month_pane_g13_ParamLimits

0x771e,	// (0x00074b93) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0007c64c) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0007c64c) cale_month_pane_g

0x776e,	// (0x00074be3) cale_month_week_pane

0x778e,	// (0x00074c03) grid_cale_month_pane_ParamLimits

0x778e,	// (0x00074c03) grid_cale_month_pane

0x77e7,	// (0x00074c5c) cale_month_day_heading_pane_t1

0x7869,	// (0x00074cde) cale_month_day_heading_pane_t2

0x78e2,	// (0x00074d57) cale_month_day_heading_pane_t3

0x795b,	// (0x00074dd0) cale_month_day_heading_pane_t4

0x79d4,	// (0x00074e49) cale_month_day_heading_pane_t5

0x7a55,	// (0x00074eca) cale_month_day_heading_pane_t6

0x7ade,	// (0x00074f53) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0007c667) cale_month_day_heading_pane_t

0x1cf1,	// (0x0006f166) bg_cale_side_pane_cp01

0x7b67,	// (0x00074fdc) cale_month_week_pane_t1

0x7b80,	// (0x00074ff5) cale_month_week_pane_t2

0x7b99,	// (0x0007500e) cale_month_week_pane_t3

0x7bb2,	// (0x00075027) cale_month_week_pane_t4

0x7bcb,	// (0x00075040) cale_month_week_pane_t5

0x7be8,	// (0x0007505d) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0007c676) cale_month_week_pane_t

0x7c0b,	// (0x00075080) cell_cale_month_pane_ParamLimits

0x7c0b,	// (0x00075080) cell_cale_month_pane

0x7d39,	// (0x000751ae) cell_cale_month_pane_g1

0x7d45,	// (0x000751ba) cell_cale_month_pane_t1_ParamLimits

0x7d45,	// (0x000751ba) cell_cale_month_pane_t1

0x1cff,	// (0x0006f174) grid_highlight_pane_cp08

0x1a70,	// (0x0006eee5) main_smil_g1

0x7d71,	// (0x000751e6) smil_status_pane

0x2061,	// (0x0006f4d6) smil_text_pane

0x1ca0,	// (0x0006f115) bg_popup_call3_rect_pane_g8

0x1c98,	// (0x0006f10d) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0007c68d) bg_popup_call3_rect_pane_g

0x3c1e,	// (0x00071093) smil_status_volume_pane_g1

0x206b,	// (0x0006f4e0) smil_status_pane_t1

0x8ec2,	// (0x00076337) volume_smil_pane

0x2082,	// (0x0006f4f7) list_smil_text_pane

0x7d84,	// (0x000751f9) scroll_pane_cp011

0x7d8f,	// (0x00075204) smil_text_list_pane_t1_ParamLimits

0x7d8f,	// (0x00075204) smil_text_list_pane_t1

0x7de3,	// (0x00075258) aid_volume_smil_ParamLimits

0x7de3,	// (0x00075258) aid_volume_smil

0x1a70,	// (0x0006eee5) smil_volume_pane_g1

0x1a70,	// (0x0006eee5) smil_volume_pane_g2

0x0001,

0xf213,	// (0x0007c688) smil_volume_pane_g

0x64a7,	// (0x0007391c) listscroll_cale_day_pane

0x2095,	// (0x0006f50a) bg_cale_pane

0x20ad,	// (0x0006f522) list_cale_pane

0x20d0,	// (0x0006f545) scroll_pane_cp09

0x1c70,	// (0x0006f0e5) cale_bg_pane_g1

0x1c68,	// (0x0006f0dd) cale_bg_pane_g2

0x1c60,	// (0x0006f0d5) cale_bg_pane_g3

0x1c80,	// (0x0006f0f5) cale_bg_pane_g4

0x1c78,	// (0x0006f0ed) cale_bg_pane_g5

0x1c88,	// (0x0006f0fd) cale_bg_pane_g6

0x1c90,	// (0x0006f105) cale_bg_pane_g7

0x1ca0,	// (0x0006f115) cale_bg_pane_g8

0x1c98,	// (0x0006f10d) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0007c68d) cale_bg_pane_g

0x20e1,	// (0x0006f556) list_cale_time_pane_ParamLimits

0x20e1,	// (0x0006f556) list_cale_time_pane

0x20f8,	// (0x0006f56d) list_cale_time_pane_g1_ParamLimits

0x20f8,	// (0x0006f56d) list_cale_time_pane_g1

0x2104,	// (0x0006f579) list_cale_time_pane_g2_ParamLimits

0x2104,	// (0x0006f579) list_cale_time_pane_g2

0x7e0d,	// (0x00075282) list_cale_time_pane_g3_ParamLimits

0x7e0d,	// (0x00075282) list_cale_time_pane_g3

0x7e1b,	// (0x00075290) list_cale_time_pane_g4_ParamLimits

0x7e1b,	// (0x00075290) list_cale_time_pane_g4

0x7e29,	// (0x0007529e) list_cale_time_pane_g5_ParamLimits

0x7e29,	// (0x0007529e) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0007c6a0) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0007c6a0) list_cale_time_pane_g

0x211e,	// (0x0006f593) list_cale_time_pane_t1_ParamLimits

0x211e,	// (0x0006f593) list_cale_time_pane_t1

0x2146,	// (0x0006f5bb) list_cale_time_pane_t2_ParamLimits

0x2146,	// (0x0006f5bb) list_cale_time_pane_t2

0x80fb,	// (0x00075570) aid_blid_cardinal_pane

0x813d,	// (0x000755b2) compass_pane_t4

0x216e,	// (0x0006f5e3) list_cale_time_pane_t4_ParamLimits

0x216e,	// (0x0006f5e3) list_cale_time_pane_t4

0x814b,	// (0x000755c0) compass_pane_t5

0x815b,	// (0x000755d0) compass_pane_t6

0x8169,	// (0x000755de) compass_pane_t7

0x25b2,	// (0x0006fa27) navi_pane_cc_t1

0x26ff,	// (0x0006fb74) aid_phob_thumbnail_center_pane

0x8632,	// (0x00075aa7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0007c6ad) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0007c6ad) list_cale_time_pane_t

0xec71,	// (0x0007c0e6) bg_popup_window_pane_cp02_ParamLimits

0xec71,	// (0x0007c0e6) bg_popup_window_pane_cp02

0x2196,	// (0x0006f60b) heading_pane_cp01_ParamLimits

0x2196,	// (0x0006f60b) heading_pane_cp01

0x21a2,	// (0x0006f617) loc_req_pane_ParamLimits

0x21a2,	// (0x0006f617) loc_req_pane

0x21b4,	// (0x0006f629) loc_type_pane_ParamLimits

0x21b4,	// (0x0006f629) loc_type_pane

0x21c6,	// (0x0006f63b) loc_type_pane_t1_ParamLimits

0x21c6,	// (0x0006f63b) loc_type_pane_t1

0x21d8,	// (0x0006f64d) loc_type_pane_t2_ParamLimits

0x21d8,	// (0x0006f64d) loc_type_pane_t2

0x21ea,	// (0x0006f65f) loc_type_pane_t3_ParamLimits

0x21ea,	// (0x0006f65f) loc_type_pane_t3

0x0002,

0xf23f,	// (0x0007c6b4) loc_type_pane_t_ParamLimits

0xf23f,	// (0x0007c6b4) loc_type_pane_t

0x21fc,	// (0x0006f671) list_loc_req_pane

0x2206,	// (0x0006f67b) scroll_pane_cp012

0x7e37,	// (0x000752ac) list_single_loc_request_popup_menu_pane_ParamLimits

0x7e37,	// (0x000752ac) list_single_loc_request_popup_menu_pane

0x2211,	// (0x0006f686) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2211,	// (0x0006f686) list_single_loc_request_popup_menu_pane_g1

0x221d,	// (0x0006f692) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x221d,	// (0x0006f692) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0007c6bb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0007c6bb) list_single_loc_request_popup_menu_pane_g

0x2229,	// (0x0006f69e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2229,	// (0x0006f69e) list_single_loc_request_popup_menu_pane_t1

0x7e49,	// (0x000752be) bg_popup_window_pane_cp03_ParamLimits

0x7e49,	// (0x000752be) bg_popup_window_pane_cp03

0x7e57,	// (0x000752cc) heading_loc_req_pane_ParamLimits

0x7e57,	// (0x000752cc) heading_loc_req_pane

0x7e63,	// (0x000752d8) popup_dyc_status_message_window_g1_ParamLimits

0x7e63,	// (0x000752d8) popup_dyc_status_message_window_g1

0x7e6f,	// (0x000752e4) popup_dyc_status_message_window_t1_ParamLimits

0x7e6f,	// (0x000752e4) popup_dyc_status_message_window_t1

0x7e81,	// (0x000752f6) popup_dyc_status_message_window_t2_ParamLimits

0x7e81,	// (0x000752f6) popup_dyc_status_message_window_t2

0x7e93,	// (0x00075308) popup_dyc_status_message_window_t3_ParamLimits

0x7e93,	// (0x00075308) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x0007c6c0) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x0007c6c0) popup_dyc_status_message_window_t

0x17fd,	// (0x0006ec72) bg_heading_pane_cp01

0x223f,	// (0x0006f6b4) heading_loc_req_pane_g1

0x2247,	// (0x0006f6bc) heading_loc_req_pane_g2

0x224f,	// (0x0006f6c4) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x0007c6c7) heading_loc_req_pane_g

0x2257,	// (0x0006f6cc) heading_loc_req_pane_t1

0x2277,	// (0x0006f6ec) bg_popup_sub_pane_cp01_ParamLimits

0x2277,	// (0x0006f6ec) bg_popup_sub_pane_cp01

0x2285,	// (0x0006f6fa) popup_cale_events_window_g1_ParamLimits

0x2285,	// (0x0006f6fa) popup_cale_events_window_g1

0x22a5,	// (0x0006f71a) popup_cale_events_window_g2_ParamLimits

0x22a5,	// (0x0006f71a) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x0007c6e9) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x0007c6e9) popup_cale_events_window_g

0x22c5,	// (0x0006f73a) popup_cale_events_window_t1_ParamLimits

0x22c5,	// (0x0006f73a) popup_cale_events_window_t1

0x22d7,	// (0x0006f74c) popup_cale_events_window_t2_ParamLimits

0x22d7,	// (0x0006f74c) popup_cale_events_window_t2

0x2315,	// (0x0006f78a) popup_cale_events_window_t3_ParamLimits

0x2315,	// (0x0006f78a) popup_cale_events_window_t3

0x234f,	// (0x0006f7c4) popup_cale_events_window_t4_ParamLimits

0x234f,	// (0x0006f7c4) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0007c6ee) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0007c6ee) popup_cale_events_window_t

0x7ebd,	// (0x00075332) call_type_pane

0x32c5,	// (0x0007073a) popup_call_status_window_g1

0x7ec9,	// (0x0007533e) popup_call_status_window_g2

0x7ed5,	// (0x0007534a) popup_call_status_window_g3

0x0002,

0xf282,	// (0x0007c6f7) popup_call_status_window_g

0x23b6,	// (0x0006f82b) call_type_pane_g1

0x23bf,	// (0x0006f834) call_type_pane_g2

0x0001,

0xf289,	// (0x0007c6fe) call_type_pane_g

0x17fd,	// (0x0006ec72) bg_popup_sub_pane_cp02

0x23c8,	// (0x0006f83d) listscroll_popup_wml_pane

0x23d0,	// (0x0006f845) list_wml_pane

0x23da,	// (0x0006f84f) scroll_pane_cp013

0x23e5,	// (0x0006f85a) list_single_graphic_popup_wml_pane_ParamLimits

0x23e5,	// (0x0006f85a) list_single_graphic_popup_wml_pane

0x1a70,	// (0x0006eee5) list_single_graphic_popup_wml_pane_g1

0x23f9,	// (0x0006f86e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x0007c703) list_single_graphic_popup_wml_pane_g

0x2401,	// (0x0006f876) list_single_graphic_popup_wml_pane_t1

0x240f,	// (0x0006f884) aid_call_pane

0x1a50,	// (0x0006eec5) popup_clock_analogue_window_g1

0x1a50,	// (0x0006eec5) popup_clock_analogue_window_g2

0x7ee1,	// (0x00075356) popup_clock_analogue_window_g3

0x7ee1,	// (0x00075356) popup_clock_analogue_window_g4

0x1a70,	// (0x0006eee5) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x0007c708) popup_clock_analogue_window_g

0x7ee9,	// (0x0007535e) popup_clock_analogue_window_t1

0x7ef7,	// (0x0007536c) clock_digital_number_pane_ParamLimits

0x7ef7,	// (0x0007536c) clock_digital_number_pane

0x7f03,	// (0x00075378) clock_digital_number_pane_cp02_ParamLimits

0x7f03,	// (0x00075378) clock_digital_number_pane_cp02

0x7f0f,	// (0x00075384) clock_digital_number_pane_cp03_ParamLimits

0x7f0f,	// (0x00075384) clock_digital_number_pane_cp03

0x7f1b,	// (0x00075390) clock_digital_number_pane_cp04_ParamLimits

0x7f1b,	// (0x00075390) clock_digital_number_pane_cp04

0x7f27,	// (0x0007539c) clock_digital_separator_pane_ParamLimits

0x7f27,	// (0x0007539c) clock_digital_separator_pane

0x7f33,	// (0x000753a8) popup_clock_digital_window_t1

0x1a70,	// (0x0006eee5) clock_digital_number_pane_g1

0x1a70,	// (0x0006eee5) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x0007c688) clock_digital_number_pane_g

0x1a70,	// (0x0006eee5) clock_digital_separator_pane_g1

0x1a70,	// (0x0006eee5) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x0007c688) clock_digital_separator_pane_g

0x17fd,	// (0x0006ec72) bg_popup_window_pane_cp04

0x241f,	// (0x0006f894) heading_pane_cp03

0x1d4c,	// (0x0006f1c1) listscroll_popup_gms_pane

0x17fd,	// (0x0006ec72) grid_large_graphic_popup_pane

0x2427,	// (0x0006f89c) listscroll_popup_gms_pane_g1

0x2430,	// (0x0006f8a5) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x0007c713) listscroll_popup_gms_pane_g

0x2439,	// (0x0006f8ae) scroll_pane_cp014

0x1ac5,	// (0x0006ef3a) cell_large_graphic_popup_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cell_large_graphic_popup_pane

0x1ad3,	// (0x0006ef48) cell_large_graphic_popup_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_large_graphic_popup_pane_g1

0x2442,	// (0x0006f8b7) cell_large_graphic_popup_pane_g2_ParamLimits

0x2442,	// (0x0006f8b7) cell_large_graphic_popup_pane_g2

0x2450,	// (0x0006f8c5) cell_large_graphic_popup_pane_g3_ParamLimits

0x2450,	// (0x0006f8c5) cell_large_graphic_popup_pane_g3

0x245e,	// (0x0006f8d3) cell_large_graphic_popup_pane_g4_ParamLimits

0x245e,	// (0x0006f8d3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x0007c718) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x0007c718) cell_large_graphic_popup_pane_g

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp010

0x1a70,	// (0x0006eee5) bg_popup_call_pane_g1

0x246f,	// (0x0006f8e4) list_single_graphic_popup_conf_pane_ParamLimits

0x246f,	// (0x0006f8e4) list_single_graphic_popup_conf_pane

0x2481,	// (0x0006f8f6) list_highlight_pane_cp01

0x248a,	// (0x0006f8ff) list_single_graphic_popup_conf_pane_g1

0x2492,	// (0x0006f907) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0007c721) list_single_graphic_popup_conf_pane_g

0x249a,	// (0x0006f90f) list_single_graphic_popup_conf_pane_t1

0x24a8,	// (0x0006f91d) linegrid_cams_pane_g1

0x7f50,	// (0x000753c5) linegrid_cams_pane_g2

0x1d32,	// (0x0006f1a7) linegrid_cams_pane_g3

0x24b1,	// (0x0006f926) linegrid_cams_pane_g4

0x7f59,	// (0x000753ce) linegrid_cams_pane_g5

0x7f62,	// (0x000753d7) linegrid_cams_pane_g6

0x1d3b,	// (0x0006f1b0) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x0007c726) linegrid_cams_pane_g

0x24ba,	// (0x0006f92f) popup_clock_analogue_window

0x24ba,	// (0x0006f92f) popup_clock_digital_window

0x17fd,	// (0x0006ec72) popup_phob_thumbnail_window

0x1a70,	// (0x0006eee5) call_video_uplink_pane_g1

0x24c3,	// (0x0006f938) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x0007c735) call_video_uplink_pane_g

0x24cb,	// (0x0006f940) video_uplink_pane

0x24d3,	// (0x0006f948) mce_image_pane_g1

0x7f6d,	// (0x000753e2) mce_image_pane_g2

0x7f77,	// (0x000753ec) mce_image_pane_g3

0x7f81,	// (0x000753f6) mce_image_pane_g4

0x7f89,	// (0x000753fe) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x0007c73a) mce_image_pane_g

0x24dd,	// (0x0006f952) control_top_pane_stacon_cp01_ParamLimits

0x24dd,	// (0x0006f952) control_top_pane_stacon_cp01

0x24f1,	// (0x0006f966) uni_indicator_pane_stacon_cp01_ParamLimits

0x24f1,	// (0x0006f966) uni_indicator_pane_stacon_cp01

0x2502,	// (0x0006f977) bg_popup_sub_pane_cp03

0x7f91,	// (0x00075406) chi_dic_find_pane

0x7f99,	// (0x0007540e) listscroll_chi_dic_pane

0x7fa2,	// (0x00075417) main_pane_chidic_g1

0x7fb5,	// (0x0007542a) chi_dic_find_pane_t1

0x250c,	// (0x0006f981) find_chidic_pane

0x2515,	// (0x0006f98a) chi_dic_list_pane_ParamLimits

0x2515,	// (0x0006f98a) chi_dic_list_pane

0x2526,	// (0x0006f99b) scroll_pane_cp020

0x7fc3,	// (0x00075438) find_chidic_pane_t1

0x17fd,	// (0x0006ec72) input_focus_pane_cp06

0x7fd2,	// (0x00075447) list_chi_dic_pane_ParamLimits

0x7fd2,	// (0x00075447) list_chi_dic_pane

0x7fe7,	// (0x0007545c) list_chi_dic_pane_t1_ParamLimits

0x7fe7,	// (0x0007545c) list_chi_dic_pane_t1

0x17fd,	// (0x0006ec72) list_highlight_pane_cp020

0x252e,	// (0x0006f9a3) bg_cale_heading_pane_g1

0x7ffa,	// (0x0007546f) bg_cale_heading_pane_g2

0x8002,	// (0x00075477) bg_cale_heading_pane_g3

0x800a,	// (0x0007547f) bg_cale_heading_pane_g4

0x8014,	// (0x00075489) bg_cale_heading_pane_g5

0x801e,	// (0x00075493) bg_cale_heading_pane_g6

0x8026,	// (0x0007549b) bg_cale_heading_pane_g7

0x802e,	// (0x000754a3) bg_cale_heading_pane_g8

0x8038,	// (0x000754ad) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x0007c745) bg_cale_heading_pane_g

0x252e,	// (0x0006f9a3) bg_cale_side_pane_g1

0x8042,	// (0x000754b7) bg_cale_side_pane_g2

0x804c,	// (0x000754c1) bg_cale_side_pane_g3

0x8056,	// (0x000754cb) bg_cale_side_pane_g4

0x8060,	// (0x000754d5) bg_cale_side_pane_g5

0x806a,	// (0x000754df) bg_cale_side_pane_g6

0x8074,	// (0x000754e9) bg_cale_side_pane_g7

0x807e,	// (0x000754f3) bg_cale_side_pane_g8

0x8086,	// (0x000754fb) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x0007c758) bg_cale_side_pane_g

0x808e,	// (0x00075503) popup_call_status_window_ParamLimits

0x808e,	// (0x00075503) popup_call_status_window

0x2536,	// (0x0006f9ab) stacon_top_pane

0x253e,	// (0x0006f9b3) status_pane_ParamLimits

0x253e,	// (0x0006f9b3) status_pane

0x2553,	// (0x0006f9c8) status_small_pane

0x255b,	// (0x0006f9d0) control_pane

0x17fd,	// (0x0006ec72) stacon_bottom_pane

0x2563,	// (0x0006f9d8) list_single_mce_smart_pane_t1_ParamLimits

0x2563,	// (0x0006f9d8) list_single_mce_smart_pane_t1

0x2576,	// (0x0006f9eb) list_single_mce_smart_pane_t2_ParamLimits

0x2576,	// (0x0006f9eb) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x0007c76b) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x0007c76b) list_single_mce_smart_pane_t

0x809a,	// (0x0007550f) compass_pane

0x80a5,	// (0x0007551a) main_location2_pane_t1

0x80bb,	// (0x00075530) main_location2_pane_t2

0x80d1,	// (0x00075546) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x0007c770) main_location2_pane_t

0x2595,	// (0x0006fa0a) compass_pane_g1_ParamLimits

0x2595,	// (0x0006fa0a) compass_pane_g1

0x811f,	// (0x00075594) compass_pane_t1

0x812e,	// (0x000755a3) compass_pane_t2

0x0005,

0xf304,	// (0x0007c779) compass_pane_t

0x8179,	// (0x000755ee) text_secondary_cp61

0x25a9,	// (0x0006fa1e) navi_pane_cams_g5

0x25cc,	// (0x0006fa41) navi_pane_im_t1

0x25da,	// (0x0006fa4f) navi_pane_mp_g1_ParamLimits

0x25da,	// (0x0006fa4f) navi_pane_mp_g1

0x25ee,	// (0x0006fa63) navi_pane_mp_g2_ParamLimits

0x25ee,	// (0x0006fa63) navi_pane_mp_g2

0x25fa,	// (0x0006fa6f) navi_pane_mp_g3_ParamLimits

0x25fa,	// (0x0006fa6f) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0007c78d) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0007c78d) navi_pane_mp_g

0x2606,	// (0x0006fa7b) navi_pane_mp_t1

0x2614,	// (0x0006fa89) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x0007c794) navi_pane_mp_t

0x2650,	// (0x0006fac5) navi_pane_vt_g1

0x2606,	// (0x0006fa7b) navi_pane_vt_t1

0x2658,	// (0x0006facd) navi_slider_pane

0x1d4c,	// (0x0006f1c1) zooming_pane

0x2660,	// (0x0006fad5) navi_slider_pane_g1

0x82ae,	// (0x00075723) navi_slider_pane_g2

0x0006,

0xf326,	// (0x0007c79b) navi_slider_pane_g

0x2684,	// (0x0006faf9) aid_levels_zoom

0x268c,	// (0x0006fb01) zooming_pane_g1

0x2694,	// (0x0006fb09) zooming_pane_g2

0x2694,	// (0x0006fb09) zooming_pane_g3

0x0002,

0xf335,	// (0x0007c7aa) zooming_pane_g

0x269c,	// (0x0006fb11) level_10_zoom

0x26a5,	// (0x0006fb1a) level_11_zoom

0x26ae,	// (0x0006fb23) level_1_zoom

0x26b7,	// (0x0006fb2c) level_2_zoom

0x26c0,	// (0x0006fb35) level_3_zoom

0x26c9,	// (0x0006fb3e) level_4_zoom

0x26d2,	// (0x0006fb47) level_5_zoom

0x26db,	// (0x0006fb50) level_6_zoom

0x26e4,	// (0x0006fb59) level_7_zoom

0x26ed,	// (0x0006fb62) level_8_zoom

0x26f6,	// (0x0006fb6b) level_9_zoom

0x2707,	// (0x0006fb7c) popup_phob_thumbnail_window_g1

0x270f,	// (0x0006fb84) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x0007c7b1) popup_phob_thumbnail_window_g

0x8b55,	// (0x00075fca) level_1_location

0x8b5d,	// (0x00075fd2) level_2_location

0x8b65,	// (0x00075fda) level_3_location

0x8b6f,	// (0x00075fe4) level_4_location

0x1d4c,	// (0x0006f1c1) level_5_location

0x82c0,	// (0x00075735) mce_icon_pane_g1

0x82c8,	// (0x0007573d) mce_icon_pane_g2

0x0001,

0xf341,	// (0x0007c7b6) mce_icon_pane_g

0x82d0,	// (0x00075745) main_mup_pane_g1_ParamLimits

0x82d0,	// (0x00075745) main_mup_pane_g1

0x1aef,	// (0x0006ef64) main_mup_pane_g2_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g2

0x1aef,	// (0x0006ef64) main_mup_pane_g3_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g3

0x1aef,	// (0x0006ef64) main_mup_pane_g4_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g4

0x1aef,	// (0x0006ef64) main_mup_pane_g5_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g5

0x1aef,	// (0x0006ef64) main_mup_pane_g6_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g6

0x1aef,	// (0x0006ef64) main_mup_pane_g7_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g7

0x1aef,	// (0x0006ef64) main_mup_pane_g8_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g8

0x1aef,	// (0x0006ef64) main_mup_pane_g9_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g9

0x1aef,	// (0x0006ef64) main_mup_pane_g10_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g10

0x1aef,	// (0x0006ef64) main_mup_pane_g11_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g11

0x1ae1,	// (0x0006ef56) main_mup_pane_g12_ParamLimits

0x1ae1,	// (0x0006ef56) main_mup_pane_g12

0x1aef,	// (0x0006ef64) main_mup_pane_g13_ParamLimits

0x1aef,	// (0x0006ef64) main_mup_pane_g13

0x000c,

0xf346,	// (0x0007c7bb) main_mup_pane_g_ParamLimits

0xf346,	// (0x0007c7bb) main_mup_pane_g

0x1afd,	// (0x0006ef72) main_mup_pane_t1_ParamLimits

0x1afd,	// (0x0006ef72) main_mup_pane_t1

0x1afd,	// (0x0006ef72) main_mup_pane_t2_ParamLimits

0x1afd,	// (0x0006ef72) main_mup_pane_t2

0x1afd,	// (0x0006ef72) main_mup_pane_t3_ParamLimits

0x1afd,	// (0x0006ef72) main_mup_pane_t3

0x1b2f,	// (0x0006efa4) main_mup_pane_t4_ParamLimits

0x1b2f,	// (0x0006efa4) main_mup_pane_t4

0x1b2f,	// (0x0006efa4) main_mup_pane_t5_ParamLimits

0x1b2f,	// (0x0006efa4) main_mup_pane_t5

0x1b1b,	// (0x0006ef90) main_mup_pane_t6_ParamLimits

0x1b1b,	// (0x0006ef90) main_mup_pane_t6

0x0005,

0xf361,	// (0x0007c7d6) main_mup_pane_t_ParamLimits

0xf361,	// (0x0007c7d6) main_mup_pane_t

0xefeb,	// (0x0007c460) mup_progress_pane_ParamLimits

0xefeb,	// (0x0007c460) mup_progress_pane

0x3da4,	// (0x00071219) mup_visualizer_pane_ParamLimits

0x3da4,	// (0x00071219) mup_visualizer_pane

0x3da4,	// (0x00071219) mup_volume_pane_ParamLimits

0x3da4,	// (0x00071219) mup_volume_pane

0x1ae1,	// (0x0006ef56) mup_visualizer_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) mup_visualizer_pane_g1

0x2747,	// (0x0006fbbc) mup_visualizer_pane_g2_ParamLimits

0x2747,	// (0x0006fbbc) mup_visualizer_pane_g2

0x1ad3,	// (0x0006ef48) mup_visualizer_pane_g3_ParamLimits

0x1ad3,	// (0x0006ef48) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x0007c7e3) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x0007c7e3) mup_visualizer_pane_g

0x1b11,	// (0x0006ef86) mup_volume_pane_g1

0x1b11,	// (0x0006ef86) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0007c501) mup_volume_pane_g

0x1b11,	// (0x0006ef86) mup_progress_pane_g1

0x1b11,	// (0x0006ef86) mup_progress_pane_g2

0x1b11,	// (0x0006ef86) mup_progress_pane_g3

0x0002,

0xf375,	// (0x0007c7ea) mup_progress_pane_g

0x17fd,	// (0x0006ec72) bg_popup_window_pane_cp05

0x2755,	// (0x0006fbca) heading_pane_cp02_ParamLimits

0x2755,	// (0x0006fbca) heading_pane_cp02

0x2771,	// (0x0006fbe6) list_popup_blid_pane

0x2779,	// (0x0006fbee) list_blid_sat_info_pane_ParamLimits

0x2779,	// (0x0006fbee) list_blid_sat_info_pane

0x278c,	// (0x0006fc01) list_blid_sat_info_pane_g1

0x2794,	// (0x0006fc09) list_blid_sat_info_pane_t1

0x83df,	// (0x00075854) mup_equalizer_pane_ParamLimits

0x83df,	// (0x00075854) mup_equalizer_pane

0x8400,	// (0x00075875) mup_equalizer_pane_cp1_ParamLimits

0x8400,	// (0x00075875) mup_equalizer_pane_cp1

0x8421,	// (0x00075896) mup_equalizer_pane_cp2_ParamLimits

0x8421,	// (0x00075896) mup_equalizer_pane_cp2

0x8442,	// (0x000758b7) mup_equalizer_pane_cp3_ParamLimits

0x8442,	// (0x000758b7) mup_equalizer_pane_cp3

0x8467,	// (0x000758dc) mup_equalizer_pane_cp4_ParamLimits

0x8467,	// (0x000758dc) mup_equalizer_pane_cp4

0x848c,	// (0x00075901) mup_equalizer_pane_cp5

0x84a4,	// (0x00075919) mup_equalizer_pane_cp6

0x84bc,	// (0x00075931) mup_equalizer_pane_cp7

0x3ae0,	// (0x00070f55) bg_popup_call_poc_act_pane_g9

0x3ae8,	// (0x00070f5d) bg_popup_call_poc_act_pane_g10

0x3af0,	// (0x00070f65) bg_popup_call_poc_act_pane_g11

0x000a,

0x1a58,	// (0x0006eecd) mup_scale_pane

0x1a70,	// (0x0006eee5) mup_scale_pane_g1

0x27a2,	// (0x0006fc17) mup_scale_pane_g2

0x0006,

0xf391,	// (0x0007c806) mup_scale_pane_g

0x27c6,	// (0x0006fc3b) msg_data_pane

0x27ce,	// (0x0006fc43) scroll_pane_cp017

0x554c,	// (0x000729c1) bg_list_pane_cp04_ParamLimits

0x554c,	// (0x000729c1) bg_list_pane_cp04

0x27de,	// (0x0006fc53) msg_data_pane_g1

0x84e6,	// (0x0007595b) msg_data_pane_g2

0x84f0,	// (0x00075965) msg_data_pane_g3

0x84fa,	// (0x0007596f) msg_data_pane_g4

0x8502,	// (0x00075977) msg_data_pane_g5

0x850a,	// (0x0007597f) msg_data_pane_g6

0x8512,	// (0x00075987) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x0007c815) msg_data_pane_g

0x5574,	// (0x000729e9) msg_text_pane_ParamLimits

0x5574,	// (0x000729e9) msg_text_pane

0x851a,	// (0x0007598f) qrid_highlight_pane_cp011_ParamLimits

0x851a,	// (0x0007598f) qrid_highlight_pane_cp011

0x17fd,	// (0x0006ec72) msg_body_pane

0x1a58,	// (0x0006eecd) msg_header_pane

0x55aa,	// (0x00072a1f) input_focus_pane_cp07

0x55cd,	// (0x00072a42) msg_header_pane_t1_ParamLimits

0x55cd,	// (0x00072a42) msg_header_pane_t1

0x55e9,	// (0x00072a5e) msg_header_pane_t2_ParamLimits

0x55e9,	// (0x00072a5e) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x0007c829) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x0007c829) msg_header_pane_t

0x2857,	// (0x0006fccc) msg_body_pane_g1

0x5609,	// (0x00072a7e) msg_body_pane_t1_ParamLimits

0x5609,	// (0x00072a7e) msg_body_pane_t1

0x563a,	// (0x00072aaf) msg_body_pane_t2_ParamLimits

0x563a,	// (0x00072aaf) msg_body_pane_t2

0x564c,	// (0x00072ac1) msg_body_pane_t3_ParamLimits

0x564c,	// (0x00072ac1) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0007c82e) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0007c82e) msg_body_pane_t

0x8582,	// (0x000759f7) main_viewer_pane_g1_ParamLimits

0x8582,	// (0x000759f7) main_viewer_pane_g1

0x858e,	// (0x00075a03) main_viewer_pane_g2_ParamLimits

0x858e,	// (0x00075a03) main_viewer_pane_g2

0x859a,	// (0x00075a0f) main_viewer_pane_g3_ParamLimits

0x859a,	// (0x00075a0f) main_viewer_pane_g3

0x85ab,	// (0x00075a20) main_viewer_pane_g4_ParamLimits

0x85ab,	// (0x00075a20) main_viewer_pane_g4

0x85bc,	// (0x00075a31) main_viewer_pane_g5_ParamLimits

0x85bc,	// (0x00075a31) main_viewer_pane_g5

0x85bc,	// (0x00075a31) main_viewer_pane_g7_ParamLimits

0x85bc,	// (0x00075a31) main_viewer_pane_g7

0x85ce,	// (0x00075a43) main_viewer_pane_g8_ParamLimits

0x85ce,	// (0x00075a43) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0007c83e) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0007c83e) main_viewer_pane_g

0x28b4,	// (0x0006fd29) viewer_content_pane_ParamLimits

0x28b4,	// (0x0006fd29) viewer_content_pane

0x8606,	// (0x00075a7b) main_postcard_pane_g1_ParamLimits

0x8606,	// (0x00075a7b) main_postcard_pane_g1

0x8614,	// (0x00075a89) main_postcard_pane_g2_ParamLimits

0x8614,	// (0x00075a89) main_postcard_pane_g2

0x8622,	// (0x00075a97) main_postcard_pane_g3_ParamLimits

0x8622,	// (0x00075a97) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0007c84f) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0007c84f) main_postcard_pane_g

0x8632,	// (0x00075aa7) main_postcard_pane_g4

0x3c0b,	// (0x00071080) smil_status_volume_pane_g2

0x865e,	// (0x00075ad3) postcard_pane_ParamLimits

0x865e,	// (0x00075ad3) postcard_pane

0x32c5,	// (0x0007073a) postcard_pane_g1_ParamLimits

0x32c5,	// (0x0007073a) postcard_pane_g1

0x8698,	// (0x00075b0d) postcard_pane_g2_ParamLimits

0x8698,	// (0x00075b0d) postcard_pane_g2

0x86a4,	// (0x00075b19) postcard_pane_g3_ParamLimits

0x86a4,	// (0x00075b19) postcard_pane_g3

0x28d0,	// (0x0006fd45) postcard_pane_g4_ParamLimits

0x28d0,	// (0x0006fd45) postcard_pane_g4

0x86b0,	// (0x00075b25) postcard_pane_g5_ParamLimits

0x86b0,	// (0x00075b25) postcard_pane_g5

0x86bc,	// (0x00075b31) postcard_pane_g6_ParamLimits

0x86bc,	// (0x00075b31) postcard_pane_g6

0x28c2,	// (0x0006fd37) postcard_pane_g7_ParamLimits

0x28c2,	// (0x0006fd37) postcard_pane_g7

0x0006,

0xf3e7,	// (0x0007c85c) postcard_pane_g_ParamLimits

0xf3e7,	// (0x0007c85c) postcard_pane_g

0x86ca,	// (0x00075b3f) main_mp2_pane_g1_ParamLimits

0x86ca,	// (0x00075b3f) main_mp2_pane_g1

0x86d8,	// (0x00075b4d) main_mp2_pane_g2_ParamLimits

0x86d8,	// (0x00075b4d) main_mp2_pane_g2

0x86e4,	// (0x00075b59) main_mp2_pane_g3_ParamLimits

0x86e4,	// (0x00075b59) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x0007c86b) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x0007c86b) main_mp2_pane_g

0x86f0,	// (0x00075b65) main_mp2_pane_t1_ParamLimits

0x86f0,	// (0x00075b65) main_mp2_pane_t1

0x8707,	// (0x00075b7c) main_mp2_pane_t2_ParamLimits

0x8707,	// (0x00075b7c) main_mp2_pane_t2

0x871b,	// (0x00075b90) main_mp2_pane_t3_ParamLimits

0x871b,	// (0x00075b90) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x0007c872) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x0007c872) main_mp2_pane_t

0xefeb,	// (0x0007c460) pec_content_pane_ParamLimits

0xefeb,	// (0x0007c460) pec_content_pane

0xebc8,	// (0x0007c03d) scroll_pane_cp015

0x2739,	// (0x0006fbae) pec_attribute_pane_ParamLimits

0x2739,	// (0x0006fbae) pec_attribute_pane

0x1ad3,	// (0x0006ef48) pec_content_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) pec_content_pane_g1

0x28de,	// (0x0006fd53) pec_content_pane_t1_ParamLimits

0x28de,	// (0x0006fd53) pec_content_pane_t1

0x28f2,	// (0x0006fd67) pec_content_pane_t2_ParamLimits

0x28f2,	// (0x0006fd67) pec_content_pane_t2

0x0001,

0xf404,	// (0x0007c879) pec_content_pane_t_ParamLimits

0xf404,	// (0x0007c879) pec_content_pane_t

0x1ac5,	// (0x0006ef3a) list_single_graphic_pane_cp01_ParamLimits

0x1ac5,	// (0x0006ef3a) list_single_graphic_pane_cp01

0x1a58,	// (0x0006eecd) bg_popup_sub_pane_cp04

0x2906,	// (0x0006fd7b) popup_mup_playback_window_g1

0x2912,	// (0x0006fd87) popup_mup_playback_window_t1

0x2927,	// (0x0006fd9c) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0007c87e) popup_mup_playback_window_t

0x295e,	// (0x0006fdd3) main_image_pane_g1_ParamLimits

0x295e,	// (0x0006fdd3) main_image_pane_g1

0x29a1,	// (0x0006fe16) scroll_pane_cp018_ParamLimits

0x29a1,	// (0x0006fe16) scroll_pane_cp018

0x29b9,	// (0x0006fe2e) scroll_pane_cp016_ParamLimits

0x29b9,	// (0x0006fe2e) scroll_pane_cp016

0x879e,	// (0x00075c13) smil2_image_pane_ParamLimits

0x879e,	// (0x00075c13) smil2_image_pane

0x87d4,	// (0x00075c49) smil2_root_pane_ParamLimits

0x87d4,	// (0x00075c49) smil2_root_pane

0x8800,	// (0x00075c75) smil2_text_pane_ParamLimits

0x8800,	// (0x00075c75) smil2_text_pane

0xebc8,	// (0x0007c03d) bg_list_pane_cp06

0xebc8,	// (0x0007c03d) grid_radio_pane

0x17fd,	// (0x0006ec72) bg_popup_window_pane_cp06

0x2267,	// (0x0006f6dc) main_fmradio_pane_t1

0x241f,	// (0x0006f894) heading_pane_cp04

0x2267,	// (0x0006f6dc) main_fmradio_pane_t2

0x3af8,	// (0x00070f6d) popup_cale_lunar_info_window_g1

0x2267,	// (0x0006f6dc) main_fmradio_pane_t3

0x3b00,	// (0x00070f75) popup_cale_lunar_info_window_g2

0x2267,	// (0x0006f6dc) main_fmradio_pane_t4

0x0001,

0x2267,	// (0x0006f6dc) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x0007c940) popup_cale_lunar_info_window_g

0xf269,	// (0x0007c6de) main_fmradio_pane_t

0xebc8,	// (0x0007c03d) wait_bar_pane_cp03

0x1ac5,	// (0x0006ef3a) cell_fmradio_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cell_fmradio_pane

0x1ad3,	// (0x0006ef48) cell_fmradio_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_fmradio_pane_g1

0xebc8,	// (0x0007c03d) grid_highlight_pane_cp011

0x29ed,	// (0x0006fe62) poc_content_pane_ParamLimits

0x29ed,	// (0x0006fe62) poc_content_pane

0x29ff,	// (0x0006fe74) scroll_pane_cp019

0x8840,	// (0x00075cb5) popup_call_poc_act_window_ParamLimits

0x8840,	// (0x00075cb5) popup_call_poc_act_window

0x884d,	// (0x00075cc2) popup_call_poc_inact_window_ParamLimits

0x884d,	// (0x00075cc2) popup_call_poc_inact_window

0xf4a2,	// (0x0007c917) bg_popup_call_poc_act_pane_g

0x3a70,	// (0x00070ee5) bg_popup_call_poc_inact_pane_g1

0x3a78,	// (0x00070eed) bg_popup_call_poc_inact_pane_g2

0x2a07,	// (0x0006fe7c) popup_call_poc_act_window_g2

0x3a80,	// (0x00070ef5) bg_popup_call_poc_inact_pane_g3

0x3a88,	// (0x00070efd) bg_popup_call_poc_inact_pane_g4

0x3a90,	// (0x00070f05) bg_popup_call_poc_inact_pane_g5

0x2a0f,	// (0x0006fe84) popup_call_poc_act_window_t1_ParamLimits

0x2a0f,	// (0x0006fe84) popup_call_poc_act_window_t1

0x2a37,	// (0x0006feac) popup_call_poc_act_window_t2_ParamLimits

0x2a37,	// (0x0006feac) popup_call_poc_act_window_t2

0x2a5f,	// (0x0006fed4) popup_call_poc_act_window_t3_ParamLimits

0x2a5f,	// (0x0006fed4) popup_call_poc_act_window_t3

0x2a87,	// (0x0006fefc) popup_call_poc_act_window_t4_ParamLimits

0x2a87,	// (0x0006fefc) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x0007c893) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x0007c893) popup_call_poc_act_window_t

0x3a98,	// (0x00070f0d) bg_popup_call_poc_inact_pane_g6

0x3aa0,	// (0x00070f15) bg_popup_call_poc_inact_pane_g7

0x3aa8,	// (0x00070f1d) bg_popup_call_poc_inact_pane_g8

0x2a99,	// (0x0006ff0e) popup_call_poc_inact_window_g2

0x3ab0,	// (0x00070f25) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x0007c904) bg_popup_call_poc_inact_pane_g

0x2aa1,	// (0x0006ff16) popup_call_poc_inact_window_t1_ParamLimits

0x2aa1,	// (0x0006ff16) popup_call_poc_inact_window_t1

0x2ab6,	// (0x0006ff2b) popup_call_poc_inact_window_t2_ParamLimits

0x2ab6,	// (0x0006ff2b) popup_call_poc_inact_window_t2

0x2acb,	// (0x0006ff40) popup_call_poc_inact_window_t3_ParamLimits

0x2acb,	// (0x0006ff40) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x0007c89c) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x0007c89c) popup_call_poc_inact_window_t

0x3b96,	// (0x0007100b) context_pane_ParamLimits

0x8e7a,	// (0x000762ef) signal_pane_ParamLimits

0x1d4c,	// (0x0006f1c1) main_call2_pane

0x8de6,	// (0x0007625b) popup_phob_thumbnail2_window_ParamLimits

0x8de6,	// (0x0007625b) popup_phob_thumbnail2_window

0x8530,	// (0x000759a5) aid_hotspot_pointer_arrow_pane

0x8538,	// (0x000759ad) aid_hotspot_pointer_hand_pane

0x8b1d,	// (0x00075f92) phob_pre_status_pane_g5

0x1ac5,	// (0x0006ef3a) cams_zoom_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) image_vga_pane_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g3_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g5_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g6_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0007c5d2) main_camera_pane_g_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0007c5e3) main_camera_pane_t_ParamLimits

0x1a58,	// (0x0006eecd) bg_popup_preview_window_pane_cp01_ParamLimits

0x1a58,	// (0x0006eecd) bg_popup_preview_window_pane_cp01

0x2ae0,	// (0x0006ff55) popup_phob_thumbnail2_window_g1_ParamLimits

0x2ae0,	// (0x0006ff55) popup_phob_thumbnail2_window_g1

0x17fd,	// (0x0006ec72) call2_cli_visual_pane

0x8869,	// (0x00075cde) popup_call2_audio_conf_window_ParamLimits

0x8869,	// (0x00075cde) popup_call2_audio_conf_window

0x8882,	// (0x00075cf7) popup_call2_audio_first_window_ParamLimits

0x8882,	// (0x00075cf7) popup_call2_audio_first_window

0x8920,	// (0x00075d95) popup_call2_audio_in_window_ParamLimits

0x8920,	// (0x00075d95) popup_call2_audio_in_window

0x8964,	// (0x00075dd9) popup_call2_audio_out_window_ParamLimits

0x8964,	// (0x00075dd9) popup_call2_audio_out_window

0x89ce,	// (0x00075e43) popup_call2_audio_second_window_ParamLimits

0x89ce,	// (0x00075e43) popup_call2_audio_second_window

0x8a2c,	// (0x00075ea1) popup_call2_audio_wait_window_ParamLimits

0x8a2c,	// (0x00075ea1) popup_call2_audio_wait_window

0x17fd,	// (0x0006ec72) bg_popup_call2_act_pane_cp03

0x1a3a,	// (0x0006eeaf) list_conf_pane_cp

0x2aec,	// (0x0006ff61) popup_call2_audio_conf_window_t1

0x2afa,	// (0x0006ff6f) list_single_graphic_popup_conf2_pane_ParamLimits

0x2afa,	// (0x0006ff6f) list_single_graphic_popup_conf2_pane

0x2481,	// (0x0006f8f6) list_highlight_pane_cp04

0x2b0d,	// (0x0006ff82) list_single_graphic_popup_conf2_pane_g1

0x2492,	// (0x0006f907) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x0007c8a3) list_single_graphic_popup_conf2_pane_g

0x2b17,	// (0x0006ff8c) list_single_graphic_popup_conf2_pane_t1

0x2b25,	// (0x0006ff9a) bg_popup_call2_act_pane_cp01_ParamLimits

0x2b25,	// (0x0006ff9a) bg_popup_call2_act_pane_cp01

0x2baf,	// (0x00070024) call_type_pane_cp05_ParamLimits

0x2baf,	// (0x00070024) call_type_pane_cp05

0x2c03,	// (0x00070078) popup_call2_audio_second_window_g1_ParamLimits

0x2c03,	// (0x00070078) popup_call2_audio_second_window_g1

0x2c57,	// (0x000700cc) popup_call2_audio_second_window_g2_ParamLimits

0x2c57,	// (0x000700cc) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x0007c8a8) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x0007c8a8) popup_call2_audio_second_window_g

0x2cbc,	// (0x00070131) popup_call2_audio_second_window_t1_ParamLimits

0x2cbc,	// (0x00070131) popup_call2_audio_second_window_t1

0x2f87,	// (0x000703fc) popup_call2_audio_second_window_t2_ParamLimits

0x2f87,	// (0x000703fc) popup_call2_audio_second_window_t2

0x2fda,	// (0x0007044f) popup_call2_audio_second_window_t3_ParamLimits

0x2fda,	// (0x0007044f) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0007c8af) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0007c8af) popup_call2_audio_second_window_t

0x17fd,	// (0x0006ec72) bg_popup_call2_in_pane_cp02

0x1807,	// (0x0006ec7c) call_type_pane_cp04

0x8a6b,	// (0x00075ee0) popup_call2_audio_wait_window_g1

0x8a73,	// (0x00075ee8) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x0007c8b8) popup_call2_audio_wait_window_g

0x181f,	// (0x0006ec94) popup_call2_audio_wait_window_t3

0x30cd,	// (0x00070542) bg_popup_call2_act_pane_ParamLimits

0x30cd,	// (0x00070542) bg_popup_call2_act_pane

0x318d,	// (0x00070602) call_type_pane_cp03_ParamLimits

0x318d,	// (0x00070602) call_type_pane_cp03

0x31f1,	// (0x00070666) popup_call2_audio_first_window_g1_ParamLimits

0x31f1,	// (0x00070666) popup_call2_audio_first_window_g1

0x3261,	// (0x000706d6) popup_call2_audio_first_window_g2_ParamLimits

0x3261,	// (0x000706d6) popup_call2_audio_first_window_g2

0x32c5,	// (0x0007073a) popup_call2_audio_first_window_g3_ParamLimits

0x32c5,	// (0x0007073a) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0007c8bd) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0007c8bd) popup_call2_audio_first_window_g

0x334d,	// (0x000707c2) popup_call2_audio_first_window_t1_ParamLimits

0x334d,	// (0x000707c2) popup_call2_audio_first_window_t1

0x3450,	// (0x000708c5) popup_call2_audio_first_window_t4_ParamLimits

0x3450,	// (0x000708c5) popup_call2_audio_first_window_t4

0x3533,	// (0x000709a8) popup_call2_audio_first_window_t5_ParamLimits

0x3533,	// (0x000709a8) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x0007c8c8) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x0007c8c8) popup_call2_audio_first_window_t

0x1a50,	// (0x0006eec5) bg_popup_call2_act_pane_g1

0x3b0a,	// (0x00070f7f) popup_cale_lunar_info_window_t1

0x3b18,	// (0x00070f8d) popup_cale_lunar_info_window_t2

0x3b26,	// (0x00070f9b) popup_cale_lunar_info_window_t3

0x17fd,	// (0x0006ec72) bg_popup_call2_bubble_pane

0x3634,	// (0x00070aa9) bg_popup_call2_in_pane_cp01_ParamLimits

0x3634,	// (0x00070aa9) bg_popup_call2_in_pane_cp01

0xecf6,	// (0x0007c16b) call_type_pane_cp02

0x8a7b,	// (0x00075ef0) popup_call2_audio_out_window_g1_ParamLimits

0x8a7b,	// (0x00075ef0) popup_call2_audio_out_window_g1

0x367c,	// (0x00070af1) popup_call2_audio_out_window_g2_ParamLimits

0x367c,	// (0x00070af1) popup_call2_audio_out_window_g2

0x8aa7,	// (0x00075f1c) popup_call2_audio_out_window_g3_ParamLimits

0x8aa7,	// (0x00075f1c) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x0007c8d1) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x0007c8d1) popup_call2_audio_out_window_g

0x36b3,	// (0x00070b28) popup_call2_audio_out_window_t1_ParamLimits

0x36b3,	// (0x00070b28) popup_call2_audio_out_window_t1

0x3712,	// (0x00070b87) popup_call2_audio_out_window_t2_ParamLimits

0x3712,	// (0x00070b87) popup_call2_audio_out_window_t2

0x3766,	// (0x00070bdb) popup_call2_audio_out_window_t3_ParamLimits

0x3766,	// (0x00070bdb) popup_call2_audio_out_window_t3

0x377c,	// (0x00070bf1) popup_call2_audio_out_window_t4_ParamLimits

0x377c,	// (0x00070bf1) popup_call2_audio_out_window_t4

0x3792,	// (0x00070c07) popup_call2_audio_out_window_t5_ParamLimits

0x3792,	// (0x00070c07) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x0007c8da) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x0007c8da) popup_call2_audio_out_window_t

0x37f6,	// (0x00070c6b) bg_popup_call2_in_pane_ParamLimits

0x37f6,	// (0x00070c6b) bg_popup_call2_in_pane

0x3852,	// (0x00070cc7) popup_call2_audio_in_window_g1_ParamLimits

0x3852,	// (0x00070cc7) popup_call2_audio_in_window_g1

0x388a,	// (0x00070cff) popup_call2_audio_in_window_g2_ParamLimits

0x388a,	// (0x00070cff) popup_call2_audio_in_window_g2

0x38c2,	// (0x00070d37) popup_call2_audio_in_window_g3_ParamLimits

0x38c2,	// (0x00070d37) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x0007c8e7) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x0007c8e7) popup_call2_audio_in_window_g

0x391a,	// (0x00070d8f) popup_call2_audio_in_window_t1_ParamLimits

0x391a,	// (0x00070d8f) popup_call2_audio_in_window_t1

0x399a,	// (0x00070e0f) popup_call2_audio_in_window_t2_ParamLimits

0x399a,	// (0x00070e0f) popup_call2_audio_in_window_t2

0x3a1a,	// (0x00070e8f) popup_call2_audio_in_window_t3_ParamLimits

0x3a1a,	// (0x00070e8f) popup_call2_audio_in_window_t3

0x3a34,	// (0x00070ea9) popup_call2_audio_in_window_t4_ParamLimits

0x3a34,	// (0x00070ea9) popup_call2_audio_in_window_t4

0x3a46,	// (0x00070ebb) popup_call2_audio_in_window_t5_ParamLimits

0x3a46,	// (0x00070ebb) popup_call2_audio_in_window_t5

0x3a5b,	// (0x00070ed0) popup_call2_audio_in_window_t6_ParamLimits

0x3a5b,	// (0x00070ed0) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x0007c8f0) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x0007c8f0) popup_call2_audio_in_window_t

0x1a50,	// (0x0006eec5) bg_popup_call2_in_pane_g1

0x3b34,	// (0x00070fa9) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x0007c945) popup_cale_lunar_info_window_t

0x1a58,	// (0x0006eecd) bg_popup_call2_rect_pane_ParamLimits

0x1a58,	// (0x0006eecd) bg_popup_call2_rect_pane

0x17fd,	// (0x0006ec72) call2_cli_visual_graphic_pane

0x17fd,	// (0x0006ec72) call2_cli_visual_text_pane

0x8eb5,	// (0x0007632a) smil_status_volume_pane_g3

0x0002,

0x1a70,	// (0x0006eee5) call2_cli_visual_graphic_pane_g1

0x1a70,	// (0x0006eee5) call2_cli_visual_graphic_pane_g2

0x1a70,	// (0x0006eee5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x0007c8fd) call2_cli_visual_graphic_pane_g

0x1c70,	// (0x0006f0e5) bg_popup_call2_rect_pane_g1

0x1c68,	// (0x0006f0dd) bg_popup_call2_rect_pane_g2

0x1c60,	// (0x0006f0d5) bg_popup_call2_rect_pane_g3

0x1c80,	// (0x0006f0f5) bg_popup_call2_rect_pane_g4

0x1c78,	// (0x0006f0ed) bg_popup_call2_rect_pane_g5

0x1c88,	// (0x0006f0fd) bg_popup_call2_rect_pane_g6

0x1c90,	// (0x0006f105) bg_popup_call2_rect_pane_g7

0x1ca0,	// (0x0006f115) bg_popup_call2_rect_pane_g8

0x1c98,	// (0x0006f10d) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0007c68d) bg_popup_call2_rect_pane_g

0x3a70,	// (0x00070ee5) bg_popup_call2_bubble_pane_g1

0x3a78,	// (0x00070eed) bg_popup_call2_bubble_pane_g2

0x3a80,	// (0x00070ef5) bg_popup_call2_bubble_pane_g3

0x3a88,	// (0x00070efd) bg_popup_call2_bubble_pane_g4

0x3a90,	// (0x00070f05) bg_popup_call2_bubble_pane_g5

0x3a98,	// (0x00070f0d) bg_popup_call2_bubble_pane_g6

0x3aa0,	// (0x00070f15) bg_popup_call2_bubble_pane_g7

0x3aa8,	// (0x00070f1d) bg_popup_call2_bubble_pane_g8

0x3ab0,	// (0x00070f25) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x0007c904) bg_popup_call2_bubble_pane_g

0x64b9,	// (0x0007392e) aid_cale_week_size_cell_pane

0x1a58,	// (0x0006eecd) aid_cams_cif_uncrop_pane_ParamLimits

0x1a58,	// (0x0006eecd) aid_cams_cif_uncrop_pane

0x1ac5,	// (0x0006ef3a) aid_cams_size_cell_ParamLimits

0x1ac5,	// (0x0006ef3a) aid_cams_size_cell

0x1ac5,	// (0x0006ef3a) grid_cams_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) linegrid_cams_pane_ParamLimits

0x6d6d,	// (0x000741e2) call_video_pane_t1

0x6d8a,	// (0x000741ff) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0007c62f) call_video_pane_t

0x7234,	// (0x000746a9) aid_cale_month_size_cell_pane_ParamLimits

0x7234,	// (0x000746a9) aid_cale_month_size_cell_pane

0xf514,	// (0x0007c989) smil_status_volume_pane_g

0x8ec2,	// (0x00076337) volume_smil_pane_ParamLimits

0x5ee2,	// (0x00073357) aid_popup2_width_pane

0x6407,	// (0x0007387c) cell_qdial_pane_g4_ParamLimits

0x6407,	// (0x0007387c) cell_qdial_pane_g4

0x80fb,	// (0x00075570) aid_blid_cardinal_pane_ParamLimits

0x810b,	// (0x00075580) aid_blid_destination_pane_ParamLimits

0x810b,	// (0x00075580) aid_blid_destination_pane

0x1a58,	// (0x0006eecd) bg_popup_call_poc_act_pane_ParamLimits

0x1a58,	// (0x0006eecd) bg_popup_call_poc_act_pane

0x1a58,	// (0x0006eecd) bg_popup_call_poc_inact_pane_ParamLimits

0x1a58,	// (0x0006eecd) bg_popup_call_poc_inact_pane

0x3ab8,	// (0x00070f2d) bg_popup_call_poc_act_pane_g1

0x3ac0,	// (0x00070f35) bg_popup_call_poc_act_pane_g2

0x3ac8,	// (0x00070f3d) bg_popup_call_poc_act_pane_g3

0x3a88,	// (0x00070efd) bg_popup_call_poc_act_pane_g4

0x3a90,	// (0x00070f05) bg_popup_call_poc_act_pane_g5

0x3ad0,	// (0x00070f45) bg_popup_call_poc_act_pane_g6

0x3aa0,	// (0x00070f15) bg_popup_call_poc_act_pane_g7

0x3ad8,	// (0x00070f4d) bg_popup_call_poc_act_pane_g8

0x17fd,	// (0x0006ec72) main_usb_pane

0x8d03,	// (0x00076178) popup_cale_lunar_info_window

0x708f,	// (0x00074504) im_reading_pane_t1_ParamLimits

0x1e0f,	// (0x0006f284) list_im_pane_ParamLimits

0x1e20,	// (0x0006f295) scroll_pane_cp07_ParamLimits

0x17fd,	// (0x0006ec72) grid_highlight_pane_cp012

0x1a58,	// (0x0006eecd) mup_scale_pane_ParamLimits

0x1ae1,	// (0x0006ef56) main_usb_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) main_usb_pane_g1

0x1ae1,	// (0x0006ef56) main_usb_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x0007c92e) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x0007c92e) main_usb_pane_g

0x1b2f,	// (0x0006efa4) main_usb_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t1

0x1b2f,	// (0x0006efa4) main_usb_pane_t2_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t2

0x1b2f,	// (0x0006efa4) main_usb_pane_t3_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t3

0x1b2f,	// (0x0006efa4) main_usb_pane_t4_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t4

0x1b2f,	// (0x0006efa4) main_usb_pane_t5_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t5

0x1b2f,	// (0x0006efa4) main_usb_pane_t6_ParamLimits

0x1b2f,	// (0x0006efa4) main_usb_pane_t6

0x0005,

0xf4be,	// (0x0007c933) main_usb_pane_t_ParamLimits

0x809a,	// (0x0007550f) aid_text_placing

0x80a5,	// (0x0007551a) main_location2_pane_t1_ParamLimits

0x80bb,	// (0x00075530) main_location2_pane_t2_ParamLimits

0x80d1,	// (0x00075546) main_location2_pane_t3_ParamLimits

0x80e7,	// (0x0007555c) main_location2_pane_t4_ParamLimits

0x80e7,	// (0x0007555c) main_location2_pane_t4

0xf2fb,	// (0x0007c770) main_location2_pane_t_ParamLimits

0x1a86,	// (0x0006eefb) find_pinb_pane_g2_ParamLimits

0x1a86,	// (0x0006eefb) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0007c4e7) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0007c4e7) find_pinb_pane_g

0x1a92,	// (0x0006ef07) find_pinb_pane_t1_ParamLimits

0x1aa4,	// (0x0006ef19) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0007c4ec) find_pinb_pane_t_ParamLimits

0x17fd,	// (0x0006ec72) main_call3_pane

0x77e7,	// (0x00074c5c) cale_month_day_heading_pane_t1_ParamLimits

0x7869,	// (0x00074cde) cale_month_day_heading_pane_t2_ParamLimits

0x78e2,	// (0x00074d57) cale_month_day_heading_pane_t3_ParamLimits

0x795b,	// (0x00074dd0) cale_month_day_heading_pane_t4_ParamLimits

0x79d4,	// (0x00074e49) cale_month_day_heading_pane_t5_ParamLimits

0x7a55,	// (0x00074eca) cale_month_day_heading_pane_t6_ParamLimits

0x7ade,	// (0x00074f53) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0007c667) cale_month_day_heading_pane_t_ParamLimits

0x2079,	// (0x0006f4ee) smil_status_volume_pane

0x867c,	// (0x00075af1) postcard_address_pane_ParamLimits

0x867c,	// (0x00075af1) postcard_address_pane

0x868a,	// (0x00075aff) postcard_message_pane_ParamLimits

0x868a,	// (0x00075aff) postcard_message_pane

0x8ad3,	// (0x00075f48) call2_cli_visual_pane_t1_ParamLimits

0x8ad3,	// (0x00075f48) call2_cli_visual_pane_t1

0x3c49,	// (0x000710be) postcard_message_pane_t1_ParamLimits

0x3c49,	// (0x000710be) postcard_message_pane_t1

0x3c31,	// (0x000710a6) postcard_address_pane_t1_ParamLimits

0x3c31,	// (0x000710a6) postcard_address_pane_t1

0x8ff9,	// (0x0007646e) popup_call3_audio_in_window_ParamLimits

0x8ff9,	// (0x0007646e) popup_call3_audio_in_window

0x8ed7,	// (0x0007634c) bg_popup_call3_in_pane_ParamLimits

0x8ed7,	// (0x0007634c) bg_popup_call3_in_pane

0x8f3f,	// (0x000763b4) popup_call3_audio_in_window_g1_ParamLimits

0x8f3f,	// (0x000763b4) popup_call3_audio_in_window_g1

0x8f57,	// (0x000763cc) popup_call3_audio_in_window_g2_ParamLimits

0x8f57,	// (0x000763cc) popup_call3_audio_in_window_g2

0x8f6f,	// (0x000763e4) popup_call3_audio_in_window_g3_ParamLimits

0x8f6f,	// (0x000763e4) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x0007c990) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x0007c990) popup_call3_audio_in_window_g

0x8f97,	// (0x0007640c) popup_call3_audio_in_window_t1_ParamLimits

0x8f97,	// (0x0007640c) popup_call3_audio_in_window_t1

0x8fbf,	// (0x00076434) popup_call3_audio_in_window_t2_ParamLimits

0x8fbf,	// (0x00076434) popup_call3_audio_in_window_t2

0x8fe7,	// (0x0007645c) popup_call3_audio_in_window_t3_ParamLimits

0x8fe7,	// (0x0007645c) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x0007c999) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x0007c999) popup_call3_audio_in_window_t

0x1d4c,	// (0x0006f1c1) bg_popup_call3_rect_pane

0x1c70,	// (0x0006f0e5) bg_popup_call3_rect_pane_g1

0x1c68,	// (0x0006f0dd) bg_popup_call3_rect_pane_g2

0x1c60,	// (0x0006f0d5) bg_popup_call3_rect_pane_g3

0x1c80,	// (0x0006f0f5) bg_popup_call3_rect_pane_g4

0x1c78,	// (0x0006f0ed) bg_popup_call3_rect_pane_g5

0x1c88,	// (0x0006f0fd) bg_popup_call3_rect_pane_g6

0x1c90,	// (0x0006f105) bg_popup_call3_rect_pane_g7

0xebc8,	// (0x0007c03d) mup_visualizer_osc_pane

0xebc8,	// (0x0007c03d) mup_visualizer_spec_pane

0x8ef7,	// (0x0007636c) call3_video_qcif_pane_ParamLimits

0x8ef7,	// (0x0007636c) call3_video_qcif_pane

0x8f09,	// (0x0007637e) call3_video_qcif_uncrop_pane_ParamLimits

0x8f09,	// (0x0007637e) call3_video_qcif_uncrop_pane

0x8f19,	// (0x0007638e) call3_video_subqcif_pane_ParamLimits

0x8f19,	// (0x0007638e) call3_video_subqcif_pane

0x8f2d,	// (0x000763a2) call3_video_subqcif_uncrop_pane_ParamLimits

0x8f2d,	// (0x000763a2) call3_video_subqcif_uncrop_pane

0x8f87,	// (0x000763fc) popup_call3_audio_in_window_g4_ParamLimits

0x8f87,	// (0x000763fc) popup_call3_audio_in_window_g4

0xebc8,	// (0x0007c03d) mup_spec_half_pane

0xebc8,	// (0x0007c03d) mup_spec_half_pane_cp

0xebc8,	// (0x0007c03d) mup_osc_middle_pane

0x1b11,	// (0x0006ef86) mup_visualizer_osc_pane_g1

0x3be4,	// (0x00071059) mup_spec_bar_pane_ParamLimits

0x3be4,	// (0x00071059) mup_spec_bar_pane

0x1b11,	// (0x0006ef86) mup_spec_bar_pane_g1

0x1b11,	// (0x0006ef86) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0007c501) mup_spec_bar_pane_g

0x64b9,	// (0x0007392e) aid_cale_week_size_cell_pane_ParamLimits

0x64d3,	// (0x00073948) bg_cale_heading_pane_ParamLimits

0x64fc,	// (0x00073971) bg_cale_pane_cp01_ParamLimits

0x651e,	// (0x00073993) cale_week_corner_pane_ParamLimits

0x653d,	// (0x000739b2) cale_week_day_heading_pane_ParamLimits

0x656b,	// (0x000739e0) cale_week_scroll_pane_g1_ParamLimits

0x658f,	// (0x00073a04) cale_week_scroll_pane_g2_ParamLimits

0x65a7,	// (0x00073a1c) cale_week_scroll_pane_g3_ParamLimits

0x65bf,	// (0x00073a34) cale_week_scroll_pane_g4_ParamLimits

0x65d7,	// (0x00073a4c) cale_week_scroll_pane_g5_ParamLimits

0x65ef,	// (0x00073a64) cale_week_scroll_pane_g6_ParamLimits

0x660f,	// (0x00073a84) cale_week_scroll_pane_g7_ParamLimits

0x662f,	// (0x00073aa4) cale_week_scroll_pane_g8_ParamLimits

0x664f,	// (0x00073ac4) cale_week_scroll_pane_g9_ParamLimits

0x666c,	// (0x00073ae1) cale_week_scroll_pane_g10_ParamLimits

0x6689,	// (0x00073afe) cale_week_scroll_pane_g11_ParamLimits

0x66a8,	// (0x00073b1d) cale_week_scroll_pane_g12_ParamLimits

0x66cd,	// (0x00073b42) cale_week_scroll_pane_g13_ParamLimits

0x66f6,	// (0x00073b6b) cale_week_scroll_pane_g14_ParamLimits

0x671f,	// (0x00073b94) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0007c578) cale_week_scroll_pane_g_ParamLimits

0x6768,	// (0x00073bdd) cale_week_time_pane_ParamLimits

0x6788,	// (0x00073bfd) grid_cale_week_pane_ParamLimits

0x1cc2,	// (0x0006f137) listscroll_cale_week_pane_t1

0x1cd4,	// (0x0006f149) scroll_pane_cp08_ParamLimits

0x72ac,	// (0x00074721) cale_month_corner_pane_ParamLimits

0x204f,	// (0x0006f4c4) cale_month_pane_t1

0x776e,	// (0x00074be3) cale_month_week_pane_ParamLimits

0x32c5,	// (0x0007073a) popup_call_status_window_g1_ParamLimits

0x7ec9,	// (0x0007533e) popup_call_status_window_g2_ParamLimits

0x7ed5,	// (0x0007534a) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x0007c6f7) popup_call_status_window_g_ParamLimits

0x2417,	// (0x0006f88c) aid_call2_pane

0x55bf,	// (0x00072a34) msg_header_pane_g1

0x867c,	// (0x00075af1) postcard_address2_pane_ParamLimits

0x867c,	// (0x00075af1) postcard_address2_pane

0x868a,	// (0x00075aff) postcard_message2_pane_ParamLimits

0x868a,	// (0x00075aff) postcard_message2_pane

0x8e88,	// (0x000762fd) message2_row_pane_ParamLimits

0x8e88,	// (0x000762fd) message2_row_pane

0x8ea2,	// (0x00076317) address2_row_pane_ParamLimits

0x8ea2,	// (0x00076317) address2_row_pane

0x3bb1,	// (0x00071026) postcard_message2_row_pane_g1

0x3bb9,	// (0x0007102e) postcard_message2_row_pane_t1

0x3bb1,	// (0x00071026) address2_row_pane_g1

0x3bb9,	// (0x0007102e) address2_row_pane_t1

0x6b16,	// (0x00073f8b) aid_size_cell_vorec

0x17fd,	// (0x0006ec72) main_rss_pane

0x3bc7,	// (0x0007103c) rss_list_single_pane_ParamLimits

0x3bc7,	// (0x0007103c) rss_list_single_pane

0x3bd5,	// (0x0007104a) rss_list_single_pane_t1

0x3bd5,	// (0x0007104a) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x0007c984) rss_list_single_pane_t

0x17fd,	// (0x0006ec72) main_camera2_pane

0x17fd,	// (0x0006ec72) main_video2_pane

0x1ac5,	// (0x0006ef3a) cams_zoom_pane_cp2_ParamLimits

0x1ac5,	// (0x0006ef3a) cams_zoom_pane_cp2

0x1ac5,	// (0x0006ef3a) image2_vga_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) image2_vga_pane

0x1ae1,	// (0x0006ef56) main_camera2_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g1

0x1ae1,	// (0x0006ef56) main_camera2_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g2

0x1ae1,	// (0x0006ef56) main_camera2_pane_g3_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g3

0x1ae1,	// (0x0006ef56) main_camera2_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g4

0x1ae1,	// (0x0006ef56) main_camera2_pane_g5_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g5

0x1ae1,	// (0x0006ef56) main_camera2_pane_g6_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g6

0x1ae1,	// (0x0006ef56) main_camera2_pane_g7_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g7

0x1ae1,	// (0x0006ef56) main_camera2_pane_g8_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x0007c9a0) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x0007c9a0) main_camera2_pane_g

0x1b2f,	// (0x0006efa4) main_camera2_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t1

0x1b2f,	// (0x0006efa4) main_camera2_pane_t2_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t2

0x1b2f,	// (0x0006efa4) main_camera2_pane_t3_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t3

0x1b2f,	// (0x0006efa4) main_camera2_pane_t4_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x0007c9b3) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x0007c9b3) main_camera2_pane_t

0x2739,	// (0x0006fbae) cams_zoom_pane_cp4_ParamLimits

0x2739,	// (0x0006fbae) cams_zoom_pane_cp4

0xefeb,	// (0x0007c460) image2_cif_pane_ParamLimits

0xefeb,	// (0x0007c460) image2_cif_pane

0x1ac5,	// (0x0006ef3a) image2_subqcif_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) image2_subqcif_pane

0x2717,	// (0x0006fb8c) main_video2_pane_g1_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g1

0x2717,	// (0x0006fb8c) main_video2_pane_g2_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g2

0x2717,	// (0x0006fb8c) main_video2_pane_g3_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g3

0x2717,	// (0x0006fb8c) main_video2_pane_g4_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g4

0x2717,	// (0x0006fb8c) main_video2_pane_g5_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g5

0x2717,	// (0x0006fb8c) main_video2_pane_g6_ParamLimits

0x2717,	// (0x0006fb8c) main_video2_pane_g6

0x0005,

0xf54d,	// (0x0007c9c2) main_video2_pane_g_ParamLimits

0xf54d,	// (0x0007c9c2) main_video2_pane_g

0x2725,	// (0x0006fb9a) main_video2_pane_t1_ParamLimits

0x2725,	// (0x0006fb9a) main_video2_pane_t1

0x2725,	// (0x0006fb9a) main_video2_pane_t2_ParamLimits

0x2725,	// (0x0006fb9a) main_video2_pane_t2

0x2725,	// (0x0006fb9a) main_video2_pane_t3_ParamLimits

0x2725,	// (0x0006fb9a) main_video2_pane_t3

0x0002,

0xf55a,	// (0x0007c9cf) main_video2_pane_t_ParamLimits

0xf55a,	// (0x0007c9cf) main_video2_pane_t

0x8b81,	// (0x00075ff6) call_muted_g2

0x0001,

0xf501,	// (0x0007c976) call_muted_g

0x17fd,	// (0x0006ec72) main_mup2_pane

0x1aef,	// (0x0006ef64) main_mup2_pane_g1_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g1

0x1aef,	// (0x0006ef64) main_mup2_pane_g2_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g2

0x1b11,	// (0x0006ef86) main_mup_pane_g13_cp1

0xebc8,	// (0x0007c03d) mup_volume_pane_cp1

0x1aef,	// (0x0006ef64) main_mup2_pane_g4_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g4

0x1aef,	// (0x0006ef64) main_mup2_pane_g5_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g5

0x1aef,	// (0x0006ef64) main_mup2_pane_g6_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g6

0x1aef,	// (0x0006ef64) main_mup2_pane_g7_ParamLimits

0x1aef,	// (0x0006ef64) main_mup2_pane_g7

0x0006,

0xf561,	// (0x0007c9d6) main_mup2_pane_g_ParamLimits

0xf561,	// (0x0007c9d6) main_mup2_pane_g

0x1afd,	// (0x0006ef72) main_mup2_pane_t1_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t1

0x1afd,	// (0x0006ef72) main_mup2_pane_t2_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t2

0x1afd,	// (0x0006ef72) main_mup2_pane_t3_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t3

0x1afd,	// (0x0006ef72) main_mup2_pane_t4_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t4

0x1afd,	// (0x0006ef72) main_mup2_pane_t5_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t5

0x1afd,	// (0x0006ef72) main_mup2_pane_t6_ParamLimits

0x1afd,	// (0x0006ef72) main_mup2_pane_t6

0x0005,

0xf570,	// (0x0007c9e5) main_mup2_pane_t_ParamLimits

0xf570,	// (0x0007c9e5) main_mup2_pane_t

0x3da4,	// (0x00071219) mup2_visualizer_pane_ParamLimits

0x3da4,	// (0x00071219) mup2_visualizer_pane

0x3da4,	// (0x00071219) mup_progress_pane_cp_ParamLimits

0x3da4,	// (0x00071219) mup_progress_pane_cp

0x3c65,	// (0x000710da) mup_volume_pane_cp_ParamLimits

0x3c65,	// (0x000710da) mup_volume_pane_cp

0x1ad3,	// (0x0006ef48) mup2_visualizer_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) mup2_visualizer_pane_g1

0x1ae1,	// (0x0006ef56) mup2_visualizer_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) mup2_visualizer_pane_g2

0x1ae1,	// (0x0006ef56) mup2_visualizer_pane_g3_ParamLimits

0x1ae1,	// (0x0006ef56) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0007c4f1) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0007c4f1) mup2_visualizer_pane_g

0xebc8,	// (0x0007c03d) aid_size_cell_fmradio

0x8c97,	// (0x0007610c) aid_height_parent_landcape

0x1ead,	// (0x0006f322) wml_content_pane_cp

0x1eb5,	// (0x0006f32a) wml_tabs_pane

0x1ebe,	// (0x0006f333) popup_wml_miniature_window

0x1ec6,	// (0x0006f33b) scroll_pane_cp021

0x1eda,	// (0x0006f34f) wml_content_pane_comp8

0x17fd,	// (0x0006ec72) bg_popup_sub_pane_cp05

0x3c7b,	// (0x000710f0) popup_wml_miniature_window_g1

0x3c83,	// (0x000710f8) wml_miniature_view_pane

0x9016,	// (0x0007648b) aid_size_wml_view

0x901e,	// (0x00076493) wml_miniature_view_pane_g1

0x9027,	// (0x0007649c) wml_miniature_view_pane_g2

0x9030,	// (0x000764a5) wml_miniature_view_pane_g3

0x9038,	// (0x000764ad) wml_miniature_view_pane_g4

0x9040,	// (0x000764b5) wml_miniature_view_pane_g5

0x9048,	// (0x000764bd) wml_miniature_view_pane_g6

0x9050,	// (0x000764c5) wml_miniature_view_pane_g7

0x9058,	// (0x000764cd) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x0007c9f2) wml_miniature_view_pane_g

0x3c8b,	// (0x00071100) background_graphic_ParamLimits

0x3c8b,	// (0x00071100) background_graphic

0x3c97,	// (0x0007110c) wml_tabs_2_pane

0x3ca0,	// (0x00071115) wml_tabs_3_pane_ParamLimits

0x3ca0,	// (0x00071115) wml_tabs_3_pane

0x3cb2,	// (0x00071127) wml_tabs_4_pane_ParamLimits

0x3cb2,	// (0x00071127) wml_tabs_4_pane

0x3cc8,	// (0x0007113d) wml_tabs_5_pane_ParamLimits

0x3cc8,	// (0x0007113d) wml_tabs_5_pane

0x3ce2,	// (0x00071157) wml_tabs_pane_g2_ParamLimits

0x3ce2,	// (0x00071157) wml_tabs_pane_g2

0x3cf7,	// (0x0007116c) wml_tabs_pane_g3_ParamLimits

0x3cf7,	// (0x0007116c) wml_tabs_pane_g3

0x3d0c,	// (0x00071181) wml_tabs_2_active_pane_ParamLimits

0x3d0c,	// (0x00071181) wml_tabs_2_active_pane

0x3d0c,	// (0x00071181) wml_tabs_2_passive_pane_ParamLimits

0x3d0c,	// (0x00071181) wml_tabs_2_passive_pane

0x9060,	// (0x000764d5) wml_tabs_3_active_pane_cp_ParamLimits

0x9060,	// (0x000764d5) wml_tabs_3_active_pane_cp

0x9073,	// (0x000764e8) wml_tabs_3_passive_pane_ParamLimits

0x9073,	// (0x000764e8) wml_tabs_3_passive_pane

0x9084,	// (0x000764f9) wml_tabs_3_passive_pane_cp_ParamLimits

0x9084,	// (0x000764f9) wml_tabs_3_passive_pane_cp

0x9099,	// (0x0007650e) tabs_4_active_pane

0x90a1,	// (0x00076516) tabs_4_passive_pane

0x90a9,	// (0x0007651e) tabs_4_passive_pane_cp

0x90b1,	// (0x00076526) tabs_4_passive_pane_cp2

0x8af5,	// (0x00075f6a) aid_height_text

0x3da4,	// (0x00071219) mup_volume_cont_pane_ParamLimits

0x3da4,	// (0x00071219) mup_volume_cont_pane

0xebc8,	// (0x0007c03d) aid_size_cell_pinb

0xebc8,	// (0x0007c03d) aid_size_list_pinb

0x3da4,	// (0x00071219) mup2_volume_cont_pane_ParamLimits

0x3da4,	// (0x00071219) mup2_volume_cont_pane

0x90bb,	// (0x00076530) mup2_volume_cont_pane_g1_ParamLimits

0x90bb,	// (0x00076530) mup2_volume_cont_pane_g1

0x5eee,	// (0x00073363) aid_size_cell_touch_ParamLimits

0x5eee,	// (0x00073363) aid_size_cell_touch

0x6193,	// (0x00073608) touch_pane_ParamLimits

0x6193,	// (0x00073608) touch_pane

0xebc8,	// (0x0007c03d) main_rss2_pane

0x3d23,	// (0x00071198) listscroll_rss2_pane

0x3d2c,	// (0x000711a1) rss2_navigation_pane

0x3d34,	// (0x000711a9) list_rss2_pane

0x2526,	// (0x0006f99b) scroll_pane_cp22

0x3d3c,	// (0x000711b1) rss2_navigation_pane_g1

0x3d45,	// (0x000711ba) rss2_navigation_pane_g2

0x3d4d,	// (0x000711c2) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x0007ca03) rss2_navigation_pane_g

0x3d55,	// (0x000711ca) rss2_navigation_pane_t1

0x90d1,	// (0x00076546) rss2_list_single_pane_ParamLimits

0x90d1,	// (0x00076546) rss2_list_single_pane

0x3d63,	// (0x000711d8) rss2_list_single_pane_t2

0x3d71,	// (0x000711e6) rss2_list_single_pane_t3_ParamLimits

0x3d71,	// (0x000711e6) rss2_list_single_pane_t3

0x3d8e,	// (0x00071203) rss2_list_single_pane_t4

0x7d7c,	// (0x000751f1) smil_status_pane_g1

0xefeb,	// (0x0007c460) main_image2_pane_ParamLimits

0xefeb,	// (0x0007c460) main_image2_pane

0x1ae1,	// (0x0006ef56) main_camera2_pane_g9_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera2_pane_g9

0x1b2f,	// (0x0006efa4) main_camera2_pane_t5_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t5

0x46c2,	// (0x00071b37) main_camera2_pane_t6_ParamLimits

0x46c2,	// (0x00071b37) main_camera2_pane_t6

0x90f4,	// (0x00076569) main_image2_pane_g1_ParamLimits

0x90f4,	// (0x00076569) main_image2_pane_g1

0x882a,	// (0x00075c9f) smil2_video_pane_ParamLimits

0x882a,	// (0x00075c9f) smil2_video_pane

0x5536,	// (0x000729ab) aid_zoom_text_primary_cp

0x613c,	// (0x000735b1) popup_preview_fixed_window

0x1e07,	// (0x0006f27c) im_reading_pane_g1

0x9008,	// (0x0007647d) cams2_bc_adjust_pane_cp_ParamLimits

0x9008,	// (0x0007647d) cams2_bc_adjust_pane_cp

0x1ac5,	// (0x0006ef3a) cams2_bc_adjust_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cams2_bc_adjust_pane

0x1b11,	// (0x0006ef86) cams2_bc_adjust_pane_g1

0xebc8,	// (0x0007c03d) cams2_slider_pane

0x1b11,	// (0x0006ef86) cams2_slider_pane_g1

0x1b11,	// (0x0006ef86) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x0007ca0a) cams2_slider_pane_g

0x6228,	// (0x0007369d) calc_display_pane_ParamLimits

0x6246,	// (0x000736bb) calc_paper_pane_ParamLimits

0x6262,	// (0x000736d7) grid_calc_pane_ParamLimits

0x7f33,	// (0x000753a8) popup_clock_digital_window_t1_ParamLimits

0x298a,	// (0x0006fdff) main_image_pane_t1

0x620e,	// (0x00073683) aid_size_cell_calc_ParamLimits

0x620e,	// (0x00073683) aid_size_cell_calc

0x8cd9,	// (0x0007614e) popup_blid_sat_info2_window_ParamLimits

0x8cd9,	// (0x0007614e) popup_blid_sat_info2_window

0x3d9c,	// (0x00071211) aid_size_cell_blid

0x3da4,	// (0x00071219) bg_popup_window_pane_cp07

0x3dc7,	// (0x0007123c) grid_popup_blid_pane

0x3dd1,	// (0x00071246) heading_pane_cp05_ParamLimits

0x3dd1,	// (0x00071246) heading_pane_cp05

0x3e9b,	// (0x00071310) cell_popup_blid_pane_ParamLimits

0x3e9b,	// (0x00071310) cell_popup_blid_pane

0x3ec5,	// (0x0007133a) cell_popup_blid_pane_g1

0x3ecd,	// (0x00071342) cell_popup_blid_pane_t1

0x3da4,	// (0x00071219) mup2_indicator_pane_ParamLimits

0x3da4,	// (0x00071219) mup2_indicator_pane

0xebc8,	// (0x0007c03d) mup2_visualizer_osc_pane

0x3c65,	// (0x000710da) mup2_visualizer_spec_pane_ParamLimits

0x3c65,	// (0x000710da) mup2_visualizer_spec_pane

0xebc8,	// (0x0007c03d) mup2_spec_half_pane

0xebc8,	// (0x0007c03d) mup2_spec_half_pane_cp

0x3edb,	// (0x00071350) mup2_spec_bar_pane_ParamLimits

0x3edb,	// (0x00071350) mup2_spec_bar_pane

0x1b11,	// (0x0006ef86) mup2_spec_bar_pane_g1

0x3efa,	// (0x0007136f) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0007ca30) mup2_spec_bar_pane_g

0xebc8,	// (0x0007c03d) mup2_osc_middle_pane

0x1b11,	// (0x0006ef86) mup2_visualizer_osc_pane_g1

0xebf2,	// (0x0007c067) popup_number_entry_window_t1_ParamLimits

0xec05,	// (0x0007c07a) popup_number_entry_window_t2_ParamLimits

0xec17,	// (0x0007c08c) popup_number_entry_window_t3_ParamLimits

0xec29,	// (0x0007c09e) popup_number_entry_window_t5_ParamLimits

0xec29,	// (0x0007c09e) popup_number_entry_window_t5

0xf01d,	// (0x0007c492) popup_number_entry_window_t_ParamLimits

0xec5e,	// (0x0007c0d3) text_title_cp2_ParamLimits

0x8540,	// (0x000759b5) aid_hotspot_pointer_text2_pane

0x85da,	// (0x00075a4f) main_viewer_pane_g9_ParamLimits

0x85da,	// (0x00075a4f) main_viewer_pane_g9

0x204f,	// (0x0006f4c4) cale_month_pane_t1_ParamLimits

0x2095,	// (0x0006f50a) bg_cale_pane_ParamLimits

0x20ad,	// (0x0006f522) list_cale_pane_ParamLimits

0x20be,	// (0x0006f533) listscroll_cale_day_pane_t1

0x20d0,	// (0x0006f545) scroll_pane_cp09_ParamLimits

0x82e3,	// (0x00075758) main_mup_eq_pane_t1_ParamLimits

0x82e3,	// (0x00075758) main_mup_eq_pane_t1

0x82ff,	// (0x00075774) main_mup_eq_pane_t2_ParamLimits

0x82ff,	// (0x00075774) main_mup_eq_pane_t2

0x831b,	// (0x00075790) main_mup_eq_pane_t3_ParamLimits

0x831b,	// (0x00075790) main_mup_eq_pane_t3

0x8335,	// (0x000757aa) main_mup_eq_pane_t4_ParamLimits

0x8335,	// (0x000757aa) main_mup_eq_pane_t4

0x834f,	// (0x000757c4) main_mup_eq_pane_t5_ParamLimits

0x834f,	// (0x000757c4) main_mup_eq_pane_t5

0x8369,	// (0x000757de) main_mup_eq_pane_t6_ParamLimits

0x8369,	// (0x000757de) main_mup_eq_pane_t6

0x837f,	// (0x000757f4) main_mup_eq_pane_t7_ParamLimits

0x837f,	// (0x000757f4) main_mup_eq_pane_t7

0x8395,	// (0x0007580a) main_mup_eq_pane_t8_ParamLimits

0x8395,	// (0x0007580a) main_mup_eq_pane_t8

0x83ab,	// (0x00075820) main_mup_eq_pane_t9_ParamLimits

0x83ab,	// (0x00075820) main_mup_eq_pane_t9

0x83c7,	// (0x0007583c) main_mup_eq_pane_t10_ParamLimits

0x83c7,	// (0x0007583c) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x0007c7f1) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x0007c7f1) main_mup_eq_pane_t

0x848c,	// (0x00075901) mup_equalizer_pane_cp5_ParamLimits

0x84a4,	// (0x00075919) mup_equalizer_pane_cp6_ParamLimits

0x84bc,	// (0x00075931) mup_equalizer_pane_cp7_ParamLimits

0xebc8,	// (0x0007c03d) main_gallery_pane

0x3c03,	// (0x00071078) smil2_volume_pane

0x3c1e,	// (0x00071093) smil_status_volume_pane_g1_ParamLimits

0x3c0b,	// (0x00071080) smil_status_volume_pane_g2_ParamLimits

0x8eb5,	// (0x0007632a) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x0007c989) smil_status_volume_pane_g_ParamLimits

0x3da4,	// (0x00071219) bg_popup_window_pane_cp07_ParamLimits

0x3db2,	// (0x00071227) blid_firmament_pane

0x1ac5,	// (0x0006ef3a) aid_size_cell_gallery_ParamLimits

0x1ac5,	// (0x0006ef3a) aid_size_cell_gallery

0x1ac5,	// (0x0006ef3a) grid_gallery_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) grid_gallery_pane

0x2739,	// (0x0006fbae) cell_gallery_pane_ParamLimits

0x2739,	// (0x0006fbae) cell_gallery_pane

0xefeb,	// (0x0007c460) bg_cell_gallery_focus_pane_ParamLimits

0xefeb,	// (0x0007c460) bg_cell_gallery_focus_pane

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g1

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g2_ParamLimits

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g2

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g3_ParamLimits

0x1ad3,	// (0x0006ef48) cell_gallery_pane_g3

0x1ae1,	// (0x0006ef56) cell_gallery_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x0007ca35) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x0007ca35) cell_gallery_pane_g

0x3f04,	// (0x00071379) bg_cell_gallery_focus_pane_g1

0x3f0c,	// (0x00071381) bg_cell_gallery_focus_pane_g2

0x3f14,	// (0x00071389) bg_cell_gallery_focus_pane_g3

0x3f1c,	// (0x00071391) bg_cell_gallery_focus_pane_g4

0x3f24,	// (0x00071399) bg_cell_gallery_focus_pane_g5

0x3f2c,	// (0x000713a1) bg_cell_gallery_focus_pane_g6

0x3f34,	// (0x000713a9) bg_cell_gallery_focus_pane_g7

0x3f3c,	// (0x000713b1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0007ca3e) bg_cell_gallery_focus_pane_g

0x3f44,	// (0x000713b9) aid_firma_cardinal

0x3f58,	// (0x000713cd) blid_firmament_pane_t1

0x3f6f,	// (0x000713e4) blid_firmament_pane_t2

0x3f86,	// (0x000713fb) blid_firmament_pane_t3

0x3f9d,	// (0x00071412) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x0007ca4f) blid_firmament_pane_t

0x3fb4,	// (0x00071429) blid_sat_info_pane

0x1b11,	// (0x0006ef86) blid_sat_info_pane_g1

0x1b11,	// (0x0006ef86) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0007c501) blid_sat_info_pane_g

0x3fc4,	// (0x00071439) blid_sat_info_pane_t1

0x3fd2,	// (0x00071447) smil2_volume_content_pane

0x3fdb,	// (0x00071450) smil2_volume_pane_g1

0x2393,	// (0x0006f808) smil2_volume_content_pane_g1

0x3fe3,	// (0x00071458) smil2_volume_content_pane_g2

0x3fec,	// (0x00071461) smil2_volume_content_pane_g3

0x3ff5,	// (0x0007146a) smil2_volume_content_pane_g4

0x3ffe,	// (0x00071473) smil2_volume_content_pane_g5

0x4007,	// (0x0007147c) smil2_volume_content_pane_g6

0x4010,	// (0x00071485) smil2_volume_content_pane_g7

0x4019,	// (0x0007148e) smil2_volume_content_pane_g8

0x4022,	// (0x00071497) smil2_volume_content_pane_g9

0x402b,	// (0x000714a0) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x0007ca58) smil2_volume_content_pane_g

0x6849,	// (0x00073cbe) cale_week_day_heading_pane_t1_ParamLimits

0x6871,	// (0x00073ce6) cale_week_day_heading_pane_t2_ParamLimits

0x689e,	// (0x00073d13) cale_week_day_heading_pane_t3_ParamLimits

0x68cb,	// (0x00073d40) cale_week_day_heading_pane_t4_ParamLimits

0x68f8,	// (0x00073d6d) cale_week_day_heading_pane_t5_ParamLimits

0x6925,	// (0x00073d9a) cale_week_day_heading_pane_t6_ParamLimits

0x6952,	// (0x00073dc7) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0007c599) cale_week_day_heading_pane_t_ParamLimits

0x1cf1,	// (0x0006f166) bg_cale_side_pane_ParamLimits

0x697a,	// (0x00073def) cale_week_time_pane_t1_ParamLimits

0x699e,	// (0x00073e13) cale_week_time_pane_t2_ParamLimits

0x69c2,	// (0x00073e37) cale_week_time_pane_t3_ParamLimits

0x69e6,	// (0x00073e5b) cale_week_time_pane_t4_ParamLimits

0x6a0a,	// (0x00073e7f) cale_week_time_pane_t5_ParamLimits

0x6a30,	// (0x00073ea5) cale_week_time_pane_t6_ParamLimits

0x6a58,	// (0x00073ecd) cale_week_time_pane_t7_ParamLimits

0x6a84,	// (0x00073ef9) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0007c5a8) cale_week_time_pane_t_ParamLimits

0x6ab4,	// (0x00073f29) cell_cale_week_pane_g2_ParamLimits

0x1cf1,	// (0x0006f166) bg_cale_side_pane_cp01_ParamLimits

0x7b67,	// (0x00074fdc) cale_month_week_pane_t1_ParamLimits

0x7b80,	// (0x00074ff5) cale_month_week_pane_t2_ParamLimits

0x7b99,	// (0x0007500e) cale_month_week_pane_t3_ParamLimits

0x7bb2,	// (0x00075027) cale_month_week_pane_t4_ParamLimits

0x7bcb,	// (0x00075040) cale_month_week_pane_t5_ParamLimits

0x7be8,	// (0x0007505d) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0007c676) cale_month_week_pane_t_ParamLimits

0x7d39,	// (0x000751ae) cell_cale_month_pane_g1_ParamLimits

0xebc8,	// (0x0007c03d) main_cale_event_viewer_pane

0xebc8,	// (0x0007c03d) listscroll_cale_event_viewer_pane

0x4034,	// (0x000714a9) list_cale_ev_pane

0x403c,	// (0x000714b1) scroll_pane_cp023

0x9100,	// (0x00076575) field_cale_ev_pane_ParamLimits

0x9100,	// (0x00076575) field_cale_ev_pane

0x4048,	// (0x000714bd) field_cale_ev_content_pane_ParamLimits

0x4048,	// (0x000714bd) field_cale_ev_content_pane

0x4054,	// (0x000714c9) field_cale_ev_pane_g1_ParamLimits

0x4054,	// (0x000714c9) field_cale_ev_pane_g1

0x4060,	// (0x000714d5) field_cale_ev_pane_g2_ParamLimits

0x4060,	// (0x000714d5) field_cale_ev_pane_g2

0x4078,	// (0x000714ed) field_cale_ev_pane_g3_ParamLimits

0x4078,	// (0x000714ed) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x0007ca6d) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x0007ca6d) field_cale_ev_pane_g

0x4090,	// (0x00071505) field_cale_ev_pane_t1_ParamLimits

0x4090,	// (0x00071505) field_cale_ev_pane_t1

0x9124,	// (0x00076599) field_cale_ev_content_pane_t1_ParamLimits

0x9124,	// (0x00076599) field_cale_ev_content_pane_t1

0x27e6,	// (0x0006fc5b) bg_button_pane_cp01

0x64a7,	// (0x0007391c) listscroll_cale_week_pane_ParamLimits

0x208c,	// (0x0006f501) popup_toolbar_window_cp01

0x1cc2,	// (0x0006f137) listscroll_cale_week_pane_t1_ParamLimits

0x64a7,	// (0x0007391c) listscroll_cale_day_pane_ParamLimits

0x208c,	// (0x0006f501) popup_toolbar_window_cp02

0x20be,	// (0x0006f533) listscroll_cale_day_pane_t1_ParamLimits

0x64a7,	// (0x0007391c) main_cale_month_pane_ParamLimits

0x8df8,	// (0x0007626d) popup_toolbar_window_cp03_ParamLimits

0x8df8,	// (0x0007626d) popup_toolbar_window_cp03

0x873a,	// (0x00075baf) main_image_pane_g2_ParamLimits

0x873a,	// (0x00075baf) main_image_pane_g2

0x8746,	// (0x00075bbb) main_image_pane_g3_ParamLimits

0x8746,	// (0x00075bbb) main_image_pane_g3

0x0002,

0xf40e,	// (0x0007c883) main_image_pane_g_ParamLimits

0xf40e,	// (0x0007c883) main_image_pane_g

0x298a,	// (0x0006fdff) main_image_pane_t1_ParamLimits

0x8752,	// (0x00075bc7) main_image_pane_t2_ParamLimits

0x8752,	// (0x00075bc7) main_image_pane_t2

0x8764,	// (0x00075bd9) main_image_pane_t3_ParamLimits

0x8764,	// (0x00075bd9) main_image_pane_t3

0x8776,	// (0x00075beb) main_image_pane_t4_ParamLimits

0x8776,	// (0x00075beb) main_image_pane_t4

0x0003,

0xf415,	// (0x0007c88a) main_image_pane_t_ParamLimits

0xf415,	// (0x0007c88a) main_image_pane_t

0x8788,	// (0x00075bfd) popup_image_details_window_cp01

0x8792,	// (0x00075c07) popup_toobar_trans_pane_cp01_ParamLimits

0x8792,	// (0x00075c07) popup_toobar_trans_pane_cp01

0x8d3a,	// (0x000761af) popup_image_details_window_ParamLimits

0x8d3a,	// (0x000761af) popup_image_details_window

0x8d48,	// (0x000761bd) popup_image_focus_window

0x1ac5,	// (0x0006ef3a) camera2_autofocus_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) camera2_autofocus_pane

0xebc8,	// (0x0007c03d) bg_popup_sub_pane_cp06

0x40a7,	// (0x0007151c) popup_image_focus_window_g1

0x40af,	// (0x00071524) popup_image_focus_window_g2

0x40b7,	// (0x0007152c) popup_image_focus_window_g3

0x40bf,	// (0x00071534) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x0007ca74) popup_image_focus_window_g

0x40c7,	// (0x0007153c) popup_image_focus_window_t1

0x40d5,	// (0x0007154a) popup_image_focus_window_t2

0x40e5,	// (0x0007155a) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x0007ca7d) popup_image_focus_window_t

0x1ad3,	// (0x0006ef48) camera2_autofocus_pane_g1

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp01

0x40f3,	// (0x00071568) popup_image_details_window_g1

0x4106,	// (0x0007157b) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x0007ca8f) popup_image_details_window_g

0x412f,	// (0x000715a4) popup_image_details_window_t1

0x4141,	// (0x000715b6) popup_image_details_window_t2

0x415a,	// (0x000715cf) popup_image_details_window_t3

0x416e,	// (0x000715e3) popup_image_details_window_t4

0x4189,	// (0x000715fe) popup_image_details_window_t5

0x0004,

0xf621,	// (0x0007ca96) popup_image_details_window_t

0x1b5b,	// (0x0006efd0) bg_calc_paper_pane_ParamLimits

0xebc8,	// (0x0007c03d) grid_highlight_pane_cp013

0x629d,	// (0x00073712) list_calc_pane_ParamLimits

0x62af,	// (0x00073724) scroll_pane_cp024

0x1b6f,	// (0x0006efe4) bg_calc_display_pane_ParamLimits

0x62b7,	// (0x0007372c) calc_display_pane_t1_ParamLimits

0x62cc,	// (0x00073741) calc_display_pane_t2_ParamLimits

0x62e1,	// (0x00073756) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0007c519) calc_display_pane_t_ParamLimits

0x63b1,	// (0x00073826) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0007c536) cell_calc_pane_g

0x63ba,	// (0x0007382f) cell_calc_pane_t1

0x1bc4,	// (0x0006f039) grid_highlight_pane_cp02_ParamLimits

0x1bda,	// (0x0006f04f) toolbar_button_pane_cp01_ParamLimits

0x1bda,	// (0x0006f04f) toolbar_button_pane_cp01

0x29cf,	// (0x0006fe44) temp_image_control_pane_ParamLimits

0x29cf,	// (0x0006fe44) temp_image_control_pane

0xefeb,	// (0x0007c460) main_mp3_pane

0x41a3,	// (0x00071618) temp_image_control_pane_g1_ParamLimits

0x41a3,	// (0x00071618) temp_image_control_pane_g1

0x41b1,	// (0x00071626) temp_image_control_pane_g2_ParamLimits

0x41b1,	// (0x00071626) temp_image_control_pane_g2

0x41c3,	// (0x00071638) temp_image_control_pane_g3_ParamLimits

0x41c3,	// (0x00071638) temp_image_control_pane_g3

0x913f,	// (0x000765b4) temp_image_control_pane_g4_ParamLimits

0x913f,	// (0x000765b4) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x0007caa1) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x0007caa1) temp_image_control_pane_g

0x41a3,	// (0x00071618) main_mp3_pane_g1

0x9150,	// (0x000765c5) main_mp3_pane_g2

0x0007,

0xf635,	// (0x0007caaa) main_mp3_pane_g

0x41f8,	// (0x0007166d) main_mp3_pane_t1

0x1ae1,	// (0x0006ef56) main_camera_pane_g8_ParamLimits

0x1ae1,	// (0x0006ef56) main_camera_pane_g8

0x6c60,	// (0x000740d5) main_video_pane_g7_ParamLimits

0x6c60,	// (0x000740d5) main_video_pane_g7

0x1b2f,	// (0x0006efa4) main_camera2_pane_t7_ParamLimits

0x1b2f,	// (0x0006efa4) main_camera2_pane_t7

0x1e6d,	// (0x0006f2e2) scroll_pane_cp025_ParamLimits

0x1e6d,	// (0x0006f2e2) scroll_pane_cp025

0x1e81,	// (0x0006f2f6) scroll_pane_cp026_ParamLimits

0x1e81,	// (0x0006f2f6) scroll_pane_cp026

0x1e90,	// (0x0006f305) wml_content_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_touch_calib_pane

0x91f4,	// (0x00076669) main_touch_calib_pane_g1

0x9200,	// (0x00076675) main_touch_calib_pane_g2

0x920c,	// (0x00076681) main_touch_calib_pane_g3

0x9218,	// (0x0007668d) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x0007cac8) main_touch_calib_pane_g

0x9224,	// (0x00076699) main_touch_calib_pane_t1

0x923b,	// (0x000766b0) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x0007cad1) main_touch_calib_pane_t

0x25a1,	// (0x0006fa16) mup_progress_pane_cp02

0x25c0,	// (0x0006fa35) navi_pane_g1

0x2622,	// (0x0006fa97) navi_pane_mp_t3

0xefeb,	// (0x0007c460) main_mp3_pane_ParamLimits

0x8e39,	// (0x000762ae) navi_pane_ParamLimits

0x41a3,	// (0x00071618) main_mp3_pane_g1_ParamLimits

0x9150,	// (0x000765c5) main_mp3_pane_g2_ParamLimits

0x915c,	// (0x000765d1) main_mp3_pane_g3_ParamLimits

0x915c,	// (0x000765d1) main_mp3_pane_g3

0x9168,	// (0x000765dd) main_mp3_pane_g4_ParamLimits

0x9168,	// (0x000765dd) main_mp3_pane_g4

0x1ad3,	// (0x0006ef48) main_mp3_pane_g5_ParamLimits

0x1ad3,	// (0x0006ef48) main_mp3_pane_g5

0x41d3,	// (0x00071648) main_mp3_pane_g6_ParamLimits

0x41d3,	// (0x00071648) main_mp3_pane_g6

0x41e0,	// (0x00071655) main_mp3_pane_g7_ParamLimits

0x41e0,	// (0x00071655) main_mp3_pane_g7

0x41ec,	// (0x00071661) main_mp3_pane_g8_ParamLimits

0x41ec,	// (0x00071661) main_mp3_pane_g8

0xf635,	// (0x0007caaa) main_mp3_pane_g_ParamLimits

0x9174,	// (0x000765e9) main_mp3_pane_t2

0x9184,	// (0x000765f9) main_mp3_pane_t3

0x4206,	// (0x0007167b) main_mp3_pane_t4

0x4214,	// (0x00071689) main_mp3_pane_t5

0x0005,

0xf646,	// (0x0007cabb) main_mp3_pane_t

0x4222,	// (0x00071697) mup_progress_pane_cp01

0x8ca1,	// (0x00076116) aid_zoom_text_secondary2

0x4034,	// (0x000714a9) list_cale_ev2_pane

0x403c,	// (0x000714b1) scroll_pane_cp023_ParamLimits

0x9296,	// (0x0007670b) field_cale_ev2_pane_ParamLimits

0x9296,	// (0x0007670b) field_cale_ev2_pane

0x92b1,	// (0x00076726) field_cale_ev2_pane_g1_ParamLimits

0x92b1,	// (0x00076726) field_cale_ev2_pane_g1

0x92bd,	// (0x00076732) field_cale_ev2_pane_g2_ParamLimits

0x92bd,	// (0x00076732) field_cale_ev2_pane_g2

0x92d5,	// (0x0007674a) field_cale_ev2_pane_g3_ParamLimits

0x92d5,	// (0x0007674a) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x0007cadc) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x0007cadc) field_cale_ev2_pane_g

0x565e,	// (0x00072ad3) field_cale_ev2_pane_t1_ParamLimits

0x565e,	// (0x00072ad3) field_cale_ev2_pane_t1

0x5675,	// (0x00072aea) field_cale_ev2_pane_t2_ParamLimits

0x5675,	// (0x00072aea) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x0007cae5) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x0007cae5) field_cale_ev2_pane_t

0x8642,	// (0x00075ab7) main_postcard_pane_g5_ParamLimits

0x8642,	// (0x00075ab7) main_postcard_pane_g5

0x8650,	// (0x00075ac5) main_postcard_pane_g6_ParamLimits

0x8650,	// (0x00075ac5) main_postcard_pane_g6

0x1ac5,	// (0x0006ef3a) camera2_autofocus_pane_cp_ParamLimits

0x1ac5,	// (0x0006ef3a) camera2_autofocus_pane_cp

0xefeb,	// (0x0007c460) main_mup3_pane

0x933c,	// (0x000767b1) main_mup3_pane_g1_ParamLimits

0x933c,	// (0x000767b1) main_mup3_pane_g1

0x938b,	// (0x00076800) main_mup3_pane_g2_ParamLimits

0x938b,	// (0x00076800) main_mup3_pane_g2

0x93e6,	// (0x0007685b) main_mup3_pane_g3_ParamLimits

0x93e6,	// (0x0007685b) main_mup3_pane_g3

0x9449,	// (0x000768be) main_mup3_pane_g4_ParamLimits

0x9449,	// (0x000768be) main_mup3_pane_g4

0x94ac,	// (0x00076921) main_mup3_pane_g5_ParamLimits

0x94ac,	// (0x00076921) main_mup3_pane_g5

0x950f,	// (0x00076984) main_mup3_pane_g6_ParamLimits

0x950f,	// (0x00076984) main_mup3_pane_g6

0x1ae1,	// (0x0006ef56) main_mup3_pane_g7_ParamLimits

0x1ae1,	// (0x0006ef56) main_mup3_pane_g7

0x0007,

0xf680,	// (0x0007caf5) main_mup3_pane_g_ParamLimits

0xf680,	// (0x0007caf5) main_mup3_pane_g

0x9587,	// (0x000769fc) main_mup3_pane_t1_ParamLimits

0x9587,	// (0x000769fc) main_mup3_pane_t1

0x9660,	// (0x00076ad5) main_mup3_pane_t2_ParamLimits

0x9660,	// (0x00076ad5) main_mup3_pane_t2

0x973d,	// (0x00076bb2) main_mup3_pane_t4_ParamLimits

0x973d,	// (0x00076bb2) main_mup3_pane_t4

0x974f,	// (0x00076bc4) main_mup3_pane_t5_ParamLimits

0x974f,	// (0x00076bc4) main_mup3_pane_t5

0x981d,	// (0x00076c92) main_mup3_pane_t6_ParamLimits

0x981d,	// (0x00076c92) main_mup3_pane_t6

0x0005,

0xf691,	// (0x0007cb06) main_mup3_pane_t_ParamLimits

0xf691,	// (0x0007cb06) main_mup3_pane_t

0x98ba,	// (0x00076d2f) mup3_progress_pane_ParamLimits

0x98ba,	// (0x00076d2f) mup3_progress_pane

0x0d7e,	// (0x0006e1f3) popup_mup3_control_window_ParamLimits

0x0d7e,	// (0x0006e1f3) popup_mup3_control_window

0x4236,	// (0x000716ab) popup_mup3_text_window

0x991d,	// (0x00076d92) mup3_progress_pane_t1

0x9933,	// (0x00076da8) mup3_progress_pane_t2

0x423e,	// (0x000716b3) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x0007cb13) mup3_progress_pane_t

0x4255,	// (0x000716ca) mup_progress_pane_cp03

0x4266,	// (0x000716db) bg_tb_trans_pane_cp04

0x4266,	// (0x000716db) mup3_volume_pane

0x426e,	// (0x000716e3) popup_mup3_control_window_g1

0x426e,	// (0x000716e3) mup3_volume_pane_g1

0x426e,	// (0x000716e3) mup3_volume_pane_g2

0x426e,	// (0x000716e3) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x0007cb1a) mup3_volume_pane_g

0xebc8,	// (0x0007c03d) bg_tb_trans_pane_cp03

0x4276,	// (0x000716eb) popup_mup3_text_window_g1

0x427e,	// (0x000716f3) popup_mup3_text_window_t1

0x1bb7,	// (0x0006f02c) list_calc_item_pane_g1_ParamLimits

0x3d1a,	// (0x0007118f) mup_volume_pane_cp_g1

0x9254,	// (0x000766c9) main_touch_calib_pane_t3

0x926a,	// (0x000766df) main_touch_calib_pane_t4

0x9280,	// (0x000766f5) main_touch_calib_pane_t5

0x5eda,	// (0x0007334f) aid_cell_size_toolbar2

0x5ee2,	// (0x00073357) aid_popup3_width_pane

0x5526,	// (0x0007299b) aid_zoom_text_msg_primary

0x6b60,	// (0x00073fd5) vorec_t7

0x1b7b,	// (0x0006eff0) bg_calc_paper_pane_g1_ParamLimits

0x1b93,	// (0x0006f008) bg_calc_paper_pane_g2_ParamLimits

0x1b87,	// (0x0006effc) bg_calc_paper_pane_g3_ParamLimits

0x1bab,	// (0x0006f020) bg_calc_paper_pane_g4_ParamLimits

0x1b9f,	// (0x0006f014) bg_calc_paper_pane_g5_ParamLimits

0x6322,	// (0x00073797) bg_calc_paper_pane_g6_ParamLimits

0x6333,	// (0x000737a8) bg_calc_paper_pane_g7_ParamLimits

0x6344,	// (0x000737b9) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0007c520) bg_calc_paper_pane_g_ParamLimits

0x6355,	// (0x000737ca) calc_bg_paper_pane_g9_ParamLimits

0x1ac5,	// (0x0006ef3a) image_qvga_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) image_qvga_pane

0x1a58,	// (0x0006eecd) bg_popup_sub_pane_cp04_ParamLimits

0x2906,	// (0x0006fd7b) popup_mup_playback_window_g1_ParamLimits

0x2912,	// (0x0006fd87) popup_mup_playback_window_t1_ParamLimits

0x2927,	// (0x0006fd9c) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0007c87e) popup_mup_playback_window_t_ParamLimits

0x1ad3,	// (0x0006ef48) main_mup2_pane_g3_ParamLimits

0x1ad3,	// (0x0006ef48) main_mup2_pane_g3

0x6e01,	// (0x00074276) popup_toolbar_window_cp04

0x2cab,	// (0x00070120) popup_call2_audio_second_window_g3_ParamLimits

0x2cab,	// (0x00070120) popup_call2_audio_second_window_g3

0x32d3,	// (0x00070748) popup_call2_audio_first_window_g4_ParamLimits

0x32d3,	// (0x00070748) popup_call2_audio_first_window_g4

0x38fa,	// (0x00070d6f) popup_call2_audio_in_window_g4_ParamLimits

0x38fa,	// (0x00070d6f) popup_call2_audio_in_window_g4

0x872d,	// (0x00075ba2) aid_area_sk_bg_cut_ParamLimits

0x872d,	// (0x00075ba2) aid_area_sk_bg_cut

0x293c,	// (0x0006fdb1) aid_area_sk_bg_cut_2_ParamLimits

0x293c,	// (0x0006fdb1) aid_area_sk_bg_cut_2

0xebc8,	// (0x0007c03d) aid_placing_details_win

0xebc8,	// (0x0007c03d) aid_placing_details_win_2

0x1ad3,	// (0x0006ef48) camera2_autofocus_pane_g1_ParamLimits

0x612d,	// (0x000735a2) popup_fixed_preview_cale_window_ParamLimits

0x612d,	// (0x000735a2) popup_fixed_preview_cale_window

0x267b,	// (0x0006faf0) navi_slider_pane_g3

0x2672,	// (0x0006fae7) navi_slider_pane_g4

0x2669,	// (0x0006fade) navi_slider_pane_g5

0x267b,	// (0x0006faf0) navi_slider_pane_g6

0x82b7,	// (0x0007572c) navi_slider_pane_g7

0x27ab,	// (0x0006fc20) mup_scale_pane_g3

0x27b4,	// (0x0006fc29) mup_scale_pane_g4

0x27bd,	// (0x0006fc32) mup_scale_pane_g5

0x84d4,	// (0x00075949) mup_scale_pane_g6

0x84dd,	// (0x00075952) mup_scale_pane_g7

0x1b11,	// (0x0006ef86) cams2_slider_pane_g3

0x1b11,	// (0x0006ef86) cams2_slider_pane_g4

0x1b11,	// (0x0006ef86) cams2_slider_pane_g5

0x1b11,	// (0x0006ef86) cams2_slider_pane_g6

0x1b11,	// (0x0006ef86) cams2_slider_pane_g7

0x1b11,	// (0x0006ef86) camera2_autofocus_pane_cp_g1

0x3b8a,	// (0x00070fff) bg_popup_preview_window_pane_cp02_ParamLimits

0x3b8a,	// (0x00070fff) bg_popup_preview_window_pane_cp02

0x428c,	// (0x00071701) list_fp_cale_pane_ParamLimits

0x428c,	// (0x00071701) list_fp_cale_pane

0x4298,	// (0x0007170d) popup_fixed_preview_cale_window_t1_ParamLimits

0x4298,	// (0x0007170d) popup_fixed_preview_cale_window_t1

0x9949,	// (0x00076dbe) popup_fixed_preview_cale_window_t2_ParamLimits

0x9949,	// (0x00076dbe) popup_fixed_preview_cale_window_t2

0x995e,	// (0x00076dd3) popup_fixed_preview_cale_window_t3_ParamLimits

0x995e,	// (0x00076dd3) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0007cb21) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0007cb21) popup_fixed_preview_cale_window_t

0x9973,	// (0x00076de8) list_single_fp_cale_pane_ParamLimits

0x9973,	// (0x00076de8) list_single_fp_cale_pane

0x42b6,	// (0x0007172b) list_single_fp_cale_pane_g1_ParamLimits

0x42b6,	// (0x0007172b) list_single_fp_cale_pane_g1

0x42c2,	// (0x00071737) list_single_fp_cale_pane_g2_ParamLimits

0x42c2,	// (0x00071737) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x0007cb28) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x0007cb28) list_single_fp_cale_pane_g

0x42db,	// (0x00071750) list_single_fp_cale_pane_t1_ParamLimits

0x42db,	// (0x00071750) list_single_fp_cale_pane_t1

0x42ed,	// (0x00071762) list_single_fp_cale_pane_t2_ParamLimits

0x42ed,	// (0x00071762) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0007cb2f) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0007cb2f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xebc8,	// (0x0007c03d) main_dialer_pane

0xebc8,	// (0x0007c03d) aid_cell_size_keypad

0xebc8,	// (0x0007c03d) dialer_ne_pane

0xebc8,	// (0x0007c03d) grid_dialer_command_1_pane

0xebc8,	// (0x0007c03d) grid_dialer_command_2_pane

0xebc8,	// (0x0007c03d) grid_dialer_keypad_pane

0x3da4,	// (0x00071219) bg_popup_call_pane_cp06_ParamLimits

0x3da4,	// (0x00071219) bg_popup_call_pane_cp06

0x3da4,	// (0x00071219) dialer_ne_clear_pane_ParamLimits

0x3da4,	// (0x00071219) dialer_ne_clear_pane

0x1b11,	// (0x0006ef86) dialer_ne_pane_g1

0x1b2f,	// (0x0006efa4) dialer_ne_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) dialer_ne_pane_t1

0x4551,	// (0x000719c6) dialer_ne_pane_t2_ParamLimits

0x4551,	// (0x000719c6) dialer_ne_pane_t2

0x9983,	// (0x00076df8) dialer_ne_pane_t3_ParamLimits

0x9983,	// (0x00076df8) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x0007cb34) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x0007cb34) dialer_ne_pane_t

0x9983,	// (0x00076df8) dialer_ne_pane_t3_copy1_ParamLimits

0x9983,	// (0x00076df8) dialer_ne_pane_t3_copy1

0x4320,	// (0x00071795) cell_dialer_keypad_pane_ParamLimits

0x4320,	// (0x00071795) cell_dialer_keypad_pane

0xefeb,	// (0x0007c460) cell_dialer_command_1_pane_ParamLimits

0xefeb,	// (0x0007c460) cell_dialer_command_1_pane

0x4337,	// (0x000717ac) cell_dialer_command_2_pane_ParamLimits

0x4337,	// (0x000717ac) cell_dialer_command_2_pane

0xefeb,	// (0x0007c460) bg_button_pane_cp02_ParamLimits

0xefeb,	// (0x0007c460) bg_button_pane_cp02

0x1ad3,	// (0x0006ef48) cell_dialer_keypad_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_dialer_keypad_pane_g1

0xefeb,	// (0x0007c460) bg_button_pane_cp03_ParamLimits

0xefeb,	// (0x0007c460) bg_button_pane_cp03

0x1ad3,	// (0x0006ef48) cell_dialer_command_1_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_dialer_command_1_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp04

0x1b11,	// (0x0006ef86) cell_dialer_command_2_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp06

0x1b11,	// (0x0006ef86) dialer_ne_clear_pane_g1

0x81f2,	// (0x00075667) navi_pane_g2

0x8220,	// (0x00075695) navi_pane_g3

0x0002,

0xf311,	// (0x0007c786) navi_pane_g

0x824b,	// (0x000756c0) navi_pane_mv_g2

0x8272,	// (0x000756e7) navi_pane_mv_g5

0x827a,	// (0x000756ef) navi_pane_mv_t1

0x1b6f,	// (0x0006efe4) main_clock2_pane

0x1ac5,	// (0x0006ef3a) main_clock2_list_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) main_clock2_list_pane

0x99f8,	// (0x00076e6d) main_clock2_pane_t1_ParamLimits

0x99f8,	// (0x00076e6d) main_clock2_pane_t1

0x9a26,	// (0x00076e9b) main_clock2_pane_t2_ParamLimits

0x9a26,	// (0x00076e9b) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0007cb40) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0007cb40) main_clock2_pane_t

0x9a8b,	// (0x00076f00) popup_clock_analogue_window_cp03_ParamLimits

0x9a8b,	// (0x00076f00) popup_clock_analogue_window_cp03

0x9aa9,	// (0x00076f1e) popup_clock_digital_window_cp02_ParamLimits

0x9aa9,	// (0x00076f1e) popup_clock_digital_window_cp02

0x9b1e,	// (0x00076f93) main_clock2_list_single_pane_ParamLimits

0x9b1e,	// (0x00076f93) main_clock2_list_single_pane

0x1d4c,	// (0x0006f1c1) list_highlight_pane_cp05

0x4378,	// (0x000717ed) main_clock2_list_single_pane_t1

0x6e01,	// (0x00074276) popup_toolbar_window_cp04_ParamLimits

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g2

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g3_ParamLimits

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g3

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g4

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g5_ParamLimits

0x1ae1,	// (0x0006ef56) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x0007ca84) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x0007ca84) camera2_autofocus_pane_g

0x92f9,	// (0x0007676e) camera2_autofocus_pane_cp_g2

0x9301,	// (0x00076776) camera2_autofocus_pane_cp_g3

0x9309,	// (0x0007677e) camera2_autofocus_pane_cp_g4

0x9311,	// (0x00076786) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x0007caea) camera2_autofocus_pane_cp_g

0xebc8,	// (0x0007c03d) popup_dialer_spcha_window

0xebc8,	// (0x0007c03d) bg_popup_sub_pane_cp07

0xebc8,	// (0x0007c03d) list_spcha_pane

0x4386,	// (0x000717fb) list_single_spcha_pane_ParamLimits

0x4386,	// (0x000717fb) list_single_spcha_pane

0xebc8,	// (0x0007c03d) list_highlight_pane_cp06

0x2267,	// (0x0006f6dc) list_single_spcha_pane_t1

0x36a4,	// (0x00070b19) popup_call2_audio_out_window_g4_ParamLimits

0x36a4,	// (0x00070b19) popup_call2_audio_out_window_g4

0xebc8,	// (0x0007c03d) main_imed2_pane

0x8d52,	// (0x000761c7) popup_imed_adjust2_window

0x8d65,	// (0x000761da) popup_imed_trans_window_ParamLimits

0x8d65,	// (0x000761da) popup_imed_trans_window

0x3dfd,	// (0x00071272) popup_blid_sat_info2_window_t1

0x3e0b,	// (0x00071280) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x0007ca19) popup_blid_sat_info2_window_t

0x9bd5,	// (0x0007704a) aid_size_cell_colour_35

0x9bef,	// (0x00077064) aid_size_cell_colour_112

0x9c06,	// (0x0007707b) aid_size_cell_effect

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp02

0x23aa,	// (0x0006f81f) heading_imed_pane

0x9c20,	// (0x00077095) listscroll_imed_pane

0x4398,	// (0x0007180d) heading_imed_pane_g1

0x43a0,	// (0x00071815) heading_imed_pane_t1

0x43ae,	// (0x00071823) grid_imed_colour_35_pane_ParamLimits

0x43ae,	// (0x00071823) grid_imed_colour_35_pane

0x9c2c,	// (0x000770a1) grid_imed_effect_pane

0x43ca,	// (0x0007183f) list_imed_aspect_pane

0x9c3c,	// (0x000770b1) scroll_pane_cp027_ParamLimits

0x9c3c,	// (0x000770b1) scroll_pane_cp027

0x9c48,	// (0x000770bd) cell_imed_effect_pane_ParamLimits

0x9c48,	// (0x000770bd) cell_imed_effect_pane

0x43d2,	// (0x00071847) cell_imed_colour_pane_ParamLimits

0x43d2,	// (0x00071847) cell_imed_colour_pane

0x441c,	// (0x00071891) cell_imed_colour_pane_g1_ParamLimits

0x441c,	// (0x00071891) cell_imed_colour_pane_g1

0x442d,	// (0x000718a2) hgihlgiht_grid_pane_cp016_ParamLimits

0x442d,	// (0x000718a2) hgihlgiht_grid_pane_cp016

0x9c64,	// (0x000770d9) cell_imed_effect_pane_g1

0x9c6c,	// (0x000770e1) grid_highlight_pane_cp017

0x443e,	// (0x000718b3) list_imed_single_pane_ParamLimits

0x443e,	// (0x000718b3) list_imed_single_pane

0xebc8,	// (0x0007c03d) list_highlight_pane_cp07

0x4452,	// (0x000718c7) list_imed_aspect_pane_comp1_t1

0x2739,	// (0x0006fbae) bg_tb_trans_pane_cp05

0x4474,	// (0x000718e9) popup_imed_adjust2_window_g1

0x449b,	// (0x00071910) popup_imed_adjust2_window_t1

0x44b3,	// (0x00071928) slider_imed_adjust_pane

0x44c7,	// (0x0007193c) slider_imed_adjust_pane_g1

0x44d7,	// (0x0007194c) slider_imed_adjust_pane_g2

0x44e7,	// (0x0007195c) slider_imed_adjust_pane_g3

0x44f8,	// (0x0007196d) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x0007cb5d) slider_imed_adjust_pane_g

0x9c75,	// (0x000770ea) aid_size_cell_clipart2

0x4509,	// (0x0007197e) grid_imed_clipart_pane

0x27ce,	// (0x0006fc43) scroll_pane_cp031

0x9c81,	// (0x000770f6) cell_imed_clipart_pane_ParamLimits

0x9c81,	// (0x000770f6) cell_imed_clipart_pane

0x9c9f,	// (0x00077114) cell_imed_clipart_pane_g1

0xebc8,	// (0x0007c03d) grid_highlight_pane_cp014

0x99da,	// (0x00076e4f) main_clock2_pane_g1_ParamLimits

0x99da,	// (0x00076e4f) main_clock2_pane_g1

0x9ac5,	// (0x00076f3a) aid_call2_pane_cp10

0x9ad7,	// (0x00076f4c) aid_call_pane_cp10

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g1

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g2

0x9ae9,	// (0x00076f5e) popup_clock_analogue_window_cp10_g3

0x9ae9,	// (0x00076f5e) popup_clock_analogue_window_cp10_g4

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x0007cb4b) popup_clock_analogue_window_cp10_g

0x9aff,	// (0x00076f74) popup_clock_analogue_window_cp10_t1

0x9b30,	// (0x00076fa5) clock_digital_number_pane_cp10_ParamLimits

0x9b30,	// (0x00076fa5) clock_digital_number_pane_cp10

0x9b4a,	// (0x00076fbf) clock_digital_number_pane_cp11_ParamLimits

0x9b4a,	// (0x00076fbf) clock_digital_number_pane_cp11

0x9b64,	// (0x00076fd9) clock_digital_number_pane_cp12_ParamLimits

0x9b64,	// (0x00076fd9) clock_digital_number_pane_cp12

0x9b7e,	// (0x00076ff3) clock_digital_number_pane_cp13_ParamLimits

0x9b7e,	// (0x00076ff3) clock_digital_number_pane_cp13

0x9b9a,	// (0x0007700f) clock_digital_separator_pane_cp10_ParamLimits

0x9b9a,	// (0x0007700f) clock_digital_separator_pane_cp10

0x9bb4,	// (0x00077029) popup_clock_digital_window_cp02_t1_ParamLimits

0x9bb4,	// (0x00077029) popup_clock_digital_window_cp02_t1

0x1a50,	// (0x0006eec5) clock_digital_number_pane_cp10_g1

0x1a50,	// (0x0006eec5) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x0007cb66) clock_digital_number_pane_cp10_g

0x1a50,	// (0x0006eec5) clock_digital_separator_pane_cp10_g1

0x1a50,	// (0x0006eec5) clock_digital_separator_pane_g2_cp10

0x2630,	// (0x0006faa5) navi_pane_vded_g4

0x2639,	// (0x0006faae) navi_pane_vded_g5

0x2642,	// (0x0006fab7) navi_pane_vded_t1

0xebc8,	// (0x0007c03d) main_vded_pane

0x9ca8,	// (0x0007711d) main_vded_pane_g1

0x9cb4,	// (0x00077129) main_vded_pane_g2

0x9cbe,	// (0x00077133) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x0007cb6b) main_vded_pane_g

0x9cc8,	// (0x0007713d) main_vded_pane_t1

0x9cd6,	// (0x0007714b) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x0007cb72) main_vded_pane_t

0x9ce4,	// (0x00077159) vded_slider_pane

0x9cee,	// (0x00077163) vded_video_pane

0x4513,	// (0x00071988) vded_video_pane_g1

0x9cfa,	// (0x0007716f) vded_video_pane_g2

0x1b11,	// (0x0006ef86) vded_video_pane_g3

0x0002,

0xf702,	// (0x0007cb77) vded_video_pane_g

0x451d,	// (0x00071992) vded_slider_pane_g1

0x3d1a,	// (0x0007118f) vded_slider_pane_g2

0x4526,	// (0x0007199b) vded_slider_pane_g3

0x452f,	// (0x000719a4) vded_slider_pane_g4

0x4538,	// (0x000719ad) vded_slider_pane_g5

0x0004,

0xf709,	// (0x0007cb7e) vded_slider_pane_g

0x0d7e,	// (0x0006e1f3) mup3_rocker_pane_ParamLimits

0x0d7e,	// (0x0006e1f3) mup3_rocker_pane

0x426e,	// (0x000716e3) mup3_control_keys_pane_g1

0x4541,	// (0x000719b6) mup3_control_keys_pane_g2

0x426e,	// (0x000716e3) mup3_control_keys_pane_g3

0x4549,	// (0x000719be) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x0007cb89) mup3_control_keys_pane_g

0x6155,	// (0x000735ca) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6155,	// (0x000735ca) popup_toolbar2_fixed_window_cp01

0x0d7e,	// (0x0006e1f3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x0d7e,	// (0x0006e1f3) popup_toolbar2_fixed_window_cp02

0x302d,	// (0x000704a2) popup_call2_audio_second_window_t4_ParamLimits

0x302d,	// (0x000704a2) popup_call2_audio_second_window_t4

0x3569,	// (0x000709de) popup_call2_audio_first_window_t6_ParamLimits

0x3569,	// (0x000709de) popup_call2_audio_first_window_t6

0x37a7,	// (0x00070c1c) popup_call2_audio_out_window_t6_ParamLimits

0x37a7,	// (0x00070c1c) popup_call2_audio_out_window_t6

0xebc8,	// (0x0007c03d) main_vitu_pane

0x1ac5,	// (0x0006ef3a) aid_size_cell_itu_ParamLimits

0x1ac5,	// (0x0006ef3a) aid_size_cell_itu

0x1ac5,	// (0x0006ef3a) bg_popup_window_pane_cp08_ParamLimits

0x1ac5,	// (0x0006ef3a) bg_popup_window_pane_cp08

0x1ac5,	// (0x0006ef3a) field_vitu_entry_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) field_vitu_entry_pane

0x1ac5,	// (0x0006ef3a) grid_vitu_function_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) grid_vitu_function_pane

0x1ac5,	// (0x0006ef3a) grid_vitu_itu_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) grid_vitu_itu_pane

0x1ac5,	// (0x0006ef3a) cell_vitu_itu_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cell_vitu_itu_pane

0x1ac5,	// (0x0006ef3a) cell_vitu_function_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) cell_vitu_function_pane

0xefeb,	// (0x0007c460) bg_popup_sub_pane_cp08_ParamLimits

0xefeb,	// (0x0007c460) bg_popup_sub_pane_cp08

0x1b1b,	// (0x0006ef90) field_vitu_entry_pane_t1_ParamLimits

0x1b1b,	// (0x0006ef90) field_vitu_entry_pane_t1

0x4551,	// (0x000719c6) field_vitu_entry_pane_t2_ParamLimits

0x4551,	// (0x000719c6) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x0007cb92) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x0007cb92) field_vitu_entry_pane_t

0x3da4,	// (0x00071219) bg_button_pane_cp05_ParamLimits

0x3da4,	// (0x00071219) bg_button_pane_cp05

0x456e,	// (0x000719e3) cell_vitu_itu_pane_g1

0x2725,	// (0x0006fb9a) cell_vitu_itu_pane_t1_ParamLimits

0x2725,	// (0x0006fb9a) cell_vitu_itu_pane_t1

0x2725,	// (0x0006fb9a) cell_vitu_itu_pane_t2_ParamLimits

0x2725,	// (0x0006fb9a) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x0007cb97) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x0007cb97) cell_vitu_itu_pane_t

0xebc8,	// (0x0007c03d) bg_button_pane_cp07

0x1b11,	// (0x0006ef86) cell_vitu_function_pane_g1

0x6286,	// (0x000736fb) main_calc_pane_g1

0x5f16,	// (0x0007338b) aid_visual_content_pane

0xebc8,	// (0x0007c03d) main_vradio_pane

0x1ae1,	// (0x0006ef56) main_vradio_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) main_vradio_pane_g1

0x1ae1,	// (0x0006ef56) main_vradio_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x0007c92e) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x0007c92e) main_vradio_pane_g

0x1b2f,	// (0x0006efa4) main_vradio_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) main_vradio_pane_t1

0x1b2f,	// (0x0006efa4) main_vradio_pane_t2_ParamLimits

0x1b2f,	// (0x0006efa4) main_vradio_pane_t2

0x1b2f,	// (0x0006efa4) main_vradio_pane_t3_ParamLimits

0x1b2f,	// (0x0006efa4) main_vradio_pane_t3

0x0002,

0xf729,	// (0x0007cb9e) main_vradio_pane_t_ParamLimits

0xf729,	// (0x0007cb9e) main_vradio_pane_t

0x1ac5,	// (0x0006ef3a) vradio_rocker_control_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) vradio_rocker_control_pane

0x1ac5,	// (0x0006ef3a) vradio_station_info_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) vradio_station_info_pane

0xefeb,	// (0x0007c460) vradio_frequency_info_pane_ParamLimits

0xefeb,	// (0x0007c460) vradio_frequency_info_pane

0x1b11,	// (0x0006ef86) vradio_station_info_pane_g1

0x2725,	// (0x0006fb9a) vradio_station_info_pane_t1_ParamLimits

0x2725,	// (0x0006fb9a) vradio_station_info_pane_t1

0x1b2f,	// (0x0006efa4) vradio_station_info_pane_t2_ParamLimits

0x1b2f,	// (0x0006efa4) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x0007cba5) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x0007cba5) vradio_station_info_pane_t

0xebc8,	// (0x0007c03d) vradio_tuning_pane

0x9d03,	// (0x00077178) vradio_rocker_control_pane_g1

0x458a,	// (0x000719ff) vradio_rocker_control_pane_g2

0x9d0b,	// (0x00077180) vradio_rocker_control_pane_g3

0x9d13,	// (0x00077188) vradio_rocker_control_pane_g4

0x9d1d,	// (0x00077192) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x0007cbaa) vradio_rocker_control_pane_g

0x1b11,	// (0x0006ef86) vradio_frequency_info_pane_g1

0x1b1b,	// (0x0006ef90) vradio_frequency_info_pane_t1_ParamLimits

0x1b1b,	// (0x0006ef90) vradio_frequency_info_pane_t1

0x9d25,	// (0x0007719a) vradio_tuning_pane_g1

0x9d32,	// (0x000771a7) vradio_tuning_pane_t1

0x5f57,	// (0x000733cc) area_side_right_pane_ParamLimits

0x5f57,	// (0x000733cc) area_side_right_pane

0x3b51,	// (0x00070fc6) status_small_pane_g1

0x3b59,	// (0x00070fce) status_small_pane_g2

0x3b62,	// (0x00070fd7) status_small_pane_g3

0x3b6b,	// (0x00070fe0) status_small_pane_g4

0x0003,

0xf506,	// (0x0007c97b) status_small_pane_g

0x3b74,	// (0x00070fe9) status_small_pane_t1

0xebc8,	// (0x0007c03d) main_video3_pane

0xebc8,	// (0x0007c03d) cams_zoom_vslider_pane

0x4592,	// (0x00071a07) image3_wide_pane_ParamLimits

0x4592,	// (0x00071a07) image3_wide_pane

0xebc8,	// (0x0007c03d) image3_wide_small_pane

0x45ac,	// (0x00071a21) main_video3_pane_g1_ParamLimits

0x45ac,	// (0x00071a21) main_video3_pane_g1

0x45ac,	// (0x00071a21) main_video3_pane_g2_ParamLimits

0x45ac,	// (0x00071a21) main_video3_pane_g2

0x0001,

0xf740,	// (0x0007cbb5) main_video3_pane_g_ParamLimits

0xf740,	// (0x0007cbb5) main_video3_pane_g

0x45ca,	// (0x00071a3f) main_video3_pane_t1_ParamLimits

0x45ca,	// (0x00071a3f) main_video3_pane_t1

0x45ca,	// (0x00071a3f) main_video3_pane_t2_ParamLimits

0x45ca,	// (0x00071a3f) main_video3_pane_t2

0x45ca,	// (0x00071a3f) main_video3_pane_t3_ParamLimits

0x45ca,	// (0x00071a3f) main_video3_pane_t3

0x0002,

0xf745,	// (0x0007cbba) main_video3_pane_t_ParamLimits

0xf745,	// (0x0007cbba) main_video3_pane_t

0x1b11,	// (0x0006ef86) cams_zoom_vslider_pane_g1

0x1b11,	// (0x0006ef86) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0007c501) cams_zoom_vslider_pane_g

0xebc8,	// (0x0007c03d) small_slider_vertical_pane

0x1b11,	// (0x0006ef86) small_slider_vertical_pane_g1

0x1b11,	// (0x0006ef86) small_slider_vertical_pane_g2

0x45f1,	// (0x00071a66) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0007cbc1) small_slider_vertical_pane_g

0xebc8,	// (0x0007c03d) main_hwr_training_pane

0x45fa,	// (0x00071a6f) hwr_training_instruct_pane_ParamLimits

0x45fa,	// (0x00071a6f) hwr_training_instruct_pane

0x9d41,	// (0x000771b6) hwr_training_navi_pane_ParamLimits

0x9d41,	// (0x000771b6) hwr_training_navi_pane

0x9d5b,	// (0x000771d0) hwr_training_write_pane_ParamLimits

0x9d5b,	// (0x000771d0) hwr_training_write_pane

0xebc8,	// (0x0007c03d) bg_frame_shadow_pane

0x4631,	// (0x00071aa6) hwr_training_write_pane_g1

0x4639,	// (0x00071aae) hwr_training_write_pane_g2

0x4641,	// (0x00071ab6) hwr_training_write_pane_g3

0x4649,	// (0x00071abe) hwr_training_write_pane_g4

0x4651,	// (0x00071ac6) hwr_training_write_pane_g5

0x4659,	// (0x00071ace) hwr_training_write_pane_g6

0x4661,	// (0x00071ad6) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x0007cbc8) hwr_training_write_pane_g

0x9d93,	// (0x00077208) hwr_training_navi_pane_g1_ParamLimits

0x9d93,	// (0x00077208) hwr_training_navi_pane_g1

0x9da5,	// (0x0007721a) hwr_training_navi_pane_g2_ParamLimits

0x9da5,	// (0x0007721a) hwr_training_navi_pane_g2

0x9db7,	// (0x0007722c) hwr_training_navi_pane_g3_ParamLimits

0x9db7,	// (0x0007722c) hwr_training_navi_pane_g3

0x9dc7,	// (0x0007723c) hwr_training_navi_pane_g4_ParamLimits

0x9dc7,	// (0x0007723c) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x0007cbd7) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x0007cbd7) hwr_training_navi_pane_g

0x9de1,	// (0x00077256) hwr_training_navi_pane_t1

0x9def,	// (0x00077264) list_single_hwr_training_instruct_pane_ParamLimits

0x9def,	// (0x00077264) list_single_hwr_training_instruct_pane

0x4669,	// (0x00071ade) list_single_hwr_training_instruct_pane_t1

0x3f04,	// (0x00071379) bg_frame_shadow_pane_g1

0x4678,	// (0x00071aed) bg_frame_shadow_pane_g2

0x4680,	// (0x00071af5) bg_frame_shadow_pane_g3

0x4688,	// (0x00071afd) bg_frame_shadow_pane_g4

0x4690,	// (0x00071b05) bg_frame_shadow_pane_g5

0x4698,	// (0x00071b0d) bg_frame_shadow_pane_g6

0x46a0,	// (0x00071b15) bg_frame_shadow_pane_g7

0x1c1e,	// (0x0006f093) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x0007cbe2) bg_frame_shadow_pane_g

0xebc8,	// (0x0007c03d) main_video_tele_dialer_pane

0x9e08,	// (0x0007727d) aid_size_cell_video_keypad_ParamLimits

0x9e08,	// (0x0007727d) aid_size_cell_video_keypad

0x9e18,	// (0x0007728d) grid_video_dialer_keypad_pane_ParamLimits

0x9e18,	// (0x0007728d) grid_video_dialer_keypad_pane

0x9e4a,	// (0x000772bf) video_down_pane_cp_ParamLimits

0x9e4a,	// (0x000772bf) video_down_pane_cp

0x9e74,	// (0x000772e9) cell_video_dialer_keypad_pane_ParamLimits

0x9e74,	// (0x000772e9) cell_video_dialer_keypad_pane

0x46a8,	// (0x00071b1d) bg_button_pane_cp08_ParamLimits

0x46a8,	// (0x00071b1d) bg_button_pane_cp08

0x9e8b,	// (0x00077300) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9e8b,	// (0x00077300) cell_video_dialer_keypad_pane_g1

0x0d7e,	// (0x0006e1f3) mup3_rocker2_pane_ParamLimits

0x0d7e,	// (0x0006e1f3) mup3_rocker2_pane

0x1b11,	// (0x0006ef86) mup3_rocker2_pane_g1

0x8cb6,	// (0x0007612b) main_dialer2_pane

0xebc8,	// (0x0007c03d) main_mp4_pane

0x9ee4,	// (0x00077359) main_mp4_pane_g1_ParamLimits

0x9ee4,	// (0x00077359) main_mp4_pane_g1

0x9f06,	// (0x0007737b) main_mp4_pane_g2_ParamLimits

0x9f06,	// (0x0007737b) main_mp4_pane_g2

0x9f24,	// (0x00077399) main_mp4_pane_g3_ParamLimits

0x9f24,	// (0x00077399) main_mp4_pane_g3

0x9f5f,	// (0x000773d4) main_mp4_pane_g4_ParamLimits

0x9f5f,	// (0x000773d4) main_mp4_pane_g4

0x9f87,	// (0x000773fc) main_mp4_pane_g5_ParamLimits

0x9f87,	// (0x000773fc) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x0007cc02) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x0007cc02) main_mp4_pane_g

0x9fef,	// (0x00077464) main_mp4_pane_t1_ParamLimits

0x9fef,	// (0x00077464) main_mp4_pane_t1

0xa051,	// (0x000774c6) main_mp4_pane_t2_ParamLimits

0xa051,	// (0x000774c6) main_mp4_pane_t2

0xa0b5,	// (0x0007752a) main_mp4_pane_t3_ParamLimits

0xa0b5,	// (0x0007752a) main_mp4_pane_t3

0xa113,	// (0x00077588) main_mp4_pane_t4_ParamLimits

0xa113,	// (0x00077588) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x0007cc13) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x0007cc13) main_mp4_pane_t

0xa171,	// (0x000775e6) mp4_progress_pane_ParamLimits

0xa171,	// (0x000775e6) mp4_progress_pane

0xe324,	// (0x0007b799) mp4_rocker_pane_ParamLimits

0xe324,	// (0x0007b799) mp4_rocker_pane

0xe338,	// (0x0007b7ad) mp4_progress_pane_t1

0xe356,	// (0x0007b7cb) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x0007cc1c) mp4_progress_pane_t

0xe375,	// (0x0007b7ea) mup_progress_pane_cp04

0x1b11,	// (0x0006ef86) mp4_rocker_pane_g1

0x1ac5,	// (0x0006ef3a) aid_cell_size_keypad2_ParamLimits

0x1ac5,	// (0x0006ef3a) aid_cell_size_keypad2

0x1ac5,	// (0x0006ef3a) dialer2_ne_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) dialer2_ne_pane

0x1ac5,	// (0x0006ef3a) grid_dialer2_keypad_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) grid_dialer2_keypad_pane

0x46b4,	// (0x00071b29) bg_popup_call_pane_cp07_ParamLimits

0x46b4,	// (0x00071b29) bg_popup_call_pane_cp07

0xa1af,	// (0x00077624) dialer2_ne_pane_t1_ParamLimits

0xa1af,	// (0x00077624) dialer2_ne_pane_t1

0x4320,	// (0x00071795) cell_dialer2_keypad_pane_ParamLimits

0x4320,	// (0x00071795) cell_dialer2_keypad_pane

0x3da4,	// (0x00071219) bg_button_pane_pane_cp04_ParamLimits

0x3da4,	// (0x00071219) bg_button_pane_pane_cp04

0x1ad3,	// (0x0006ef48) cell_dialer2_keypad_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) cell_dialer2_keypad_pane_g1

0x6ce5,	// (0x0007415a) aid_placing_vt_set_content_ParamLimits

0x6ce5,	// (0x0007415a) aid_placing_vt_set_content

0x6d0d,	// (0x00074182) aid_placing_vt_set_title_ParamLimits

0x6d0d,	// (0x00074182) aid_placing_vt_set_title

0xebc8,	// (0x0007c03d) main_image3_pane

0xa206,	// (0x0007767b) area_side_right_pane_cp01_ParamLimits

0xa206,	// (0x0007767b) area_side_right_pane_cp01

0x1aef,	// (0x0006ef64) main_image3_pane_g1_ParamLimits

0x1aef,	// (0x0006ef64) main_image3_pane_g1

0xa235,	// (0x000776aa) main_image3_pane_g2_ParamLimits

0xa235,	// (0x000776aa) main_image3_pane_g2

0xa24e,	// (0x000776c3) main_image3_pane_g3_ParamLimits

0xa24e,	// (0x000776c3) main_image3_pane_g3

0xa267,	// (0x000776dc) main_image3_pane_g4_ParamLimits

0xa267,	// (0x000776dc) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x0007cc2b) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x0007cc2b) main_image3_pane_g

0xa280,	// (0x000776f5) main_image3_pane_t1_ParamLimits

0xa280,	// (0x000776f5) main_image3_pane_t1

0xa2a5,	// (0x0007771a) main_image3_pane_t2_ParamLimits

0xa2a5,	// (0x0007771a) main_image3_pane_t2

0xa2c4,	// (0x00077739) main_image3_pane_t3_ParamLimits

0xa2c4,	// (0x00077739) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x0007cc34) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x0007cc34) main_image3_pane_t

0x1ac5,	// (0x0006ef3a) grid_sctrl_middle_pane_cp01_ParamLimits

0x1ac5,	// (0x0006ef3a) grid_sctrl_middle_pane_cp01

0xa325,	// (0x0007779a) cell_sctrl_middle_pane_cp01_ParamLimits

0xa325,	// (0x0007779a) cell_sctrl_middle_pane_cp01

0xa336,	// (0x000777ab) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa336,	// (0x000777ab) cell_sctrl_middle_pane_cp01_g1

0xebc8,	// (0x0007c03d) main_call4_pane

0xa343,	// (0x000777b8) aid_size_button_call4_ParamLimits

0xa343,	// (0x000777b8) aid_size_button_call4

0xa379,	// (0x000777ee) call4_windows_pane_ParamLimits

0xa379,	// (0x000777ee) call4_windows_pane

0xa38e,	// (0x00077803) grid_call4_button_pane_ParamLimits

0xa38e,	// (0x00077803) grid_call4_button_pane

0xa3be,	// (0x00077833) call4_windows_conf_pane

0xa3d7,	// (0x0007784c) popup_call4_audio_first_window_ParamLimits

0xa3d7,	// (0x0007784c) popup_call4_audio_first_window

0xa427,	// (0x0007789c) popup_call4_audio_second_window_ParamLimits

0xa427,	// (0x0007789c) popup_call4_audio_second_window

0xa440,	// (0x000778b5) popup_call4_audio_wait_window_ParamLimits

0xa440,	// (0x000778b5) popup_call4_audio_wait_window

0xa44e,	// (0x000778c3) cell_call4_button_pane_ParamLimits

0xa44e,	// (0x000778c3) cell_call4_button_pane

0xa471,	// (0x000778e6) bg_button_pane_cp09_ParamLimits

0xa471,	// (0x000778e6) bg_button_pane_cp09

0xa47d,	// (0x000778f2) cell_call4_button_pane_g1_ParamLimits

0xa47d,	// (0x000778f2) cell_call4_button_pane_g1

0xa48a,	// (0x000778ff) cell_call4_button_pane_t1_ParamLimits

0xa48a,	// (0x000778ff) cell_call4_button_pane_t1

0xe3be,	// (0x0007b833) popup_call4_audio_conf_window_ParamLimits

0xe3be,	// (0x0007b833) popup_call4_audio_conf_window

0x991d,	// (0x00076d92) mup3_progress_pane_t1_ParamLimits

0x9933,	// (0x00076da8) mup3_progress_pane_t2_ParamLimits

0x423e,	// (0x000716b3) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x0007cb13) mup3_progress_pane_t_ParamLimits

0x4255,	// (0x000716ca) mup_progress_pane_cp03_ParamLimits

0x426e,	// (0x000716e3) mup3_control_keys_pane_g4_copy1

0xe324,	// (0x0007b799) mp4_rocker2_pane_ParamLimits

0xe324,	// (0x0007b799) mp4_rocker2_pane

0x426e,	// (0x000716e3) mp4_rocker2_pane_g1

0x426e,	// (0x000716e3) mp4_rocker2_pane_g2

0x426e,	// (0x000716e3) mp4_rocker2_pane_g3

0x426e,	// (0x000716e3) mp4_rocker2_pane_g4

0x426e,	// (0x000716e3) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x0007cc3d) mp4_rocker2_pane_g

0xebc8,	// (0x0007c03d) main_camera4_pane

0xebc8,	// (0x0007c03d) main_video4_pane

0x9e26,	// (0x0007729b) main_video_tele_dialer_pane_t1_ParamLimits

0x9e26,	// (0x0007729b) main_video_tele_dialer_pane_t1

0x9e38,	// (0x000772ad) main_video_tele_dialer_pane_t2_ParamLimits

0x9e38,	// (0x000772ad) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x0007cbf3) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x0007cbf3) main_video_tele_dialer_pane_t

0xa4e6,	// (0x0007795b) cam4_autofocus_pane_ParamLimits

0xa4e6,	// (0x0007795b) cam4_autofocus_pane

0xa4fe,	// (0x00077973) cam4_image_uncrop_pane_ParamLimits

0xa4fe,	// (0x00077973) cam4_image_uncrop_pane

0xa517,	// (0x0007798c) cam4_indicators_pane_ParamLimits

0xa517,	// (0x0007798c) cam4_indicators_pane

0xa533,	// (0x000779a8) main_camera4_pane_g1_ParamLimits

0xa533,	// (0x000779a8) main_camera4_pane_g1

0xa53f,	// (0x000779b4) main_camera4_pane_g2_ParamLimits

0xa53f,	// (0x000779b4) main_camera4_pane_g2

0xa53f,	// (0x000779b4) main_camera4_pane_g3_ParamLimits

0xa53f,	// (0x000779b4) main_camera4_pane_g3

0xa54b,	// (0x000779c0) main_camera4_pane_g4_ParamLimits

0xa54b,	// (0x000779c0) main_camera4_pane_g4

0xa557,	// (0x000779cc) main_camera4_pane_g5_ParamLimits

0xa557,	// (0x000779cc) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x0007cc48) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x0007cc48) main_camera4_pane_g

0xa571,	// (0x000779e6) main_camera4_pane_t1_ParamLimits

0xa571,	// (0x000779e6) main_camera4_pane_t1

0x1ad3,	// (0x0006ef48) bg_tb_trans_pane_cp06

0xa5c3,	// (0x00077a38) cam4_indicators_pane_g1

0xa5d4,	// (0x00077a49) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x0007cc63) cam4_indicators_pane_g

0xa5ec,	// (0x00077a61) cam4_indicators_pane_t1

0xa616,	// (0x00077a8b) main_video4_pane_g1_ParamLimits

0xa616,	// (0x00077a8b) main_video4_pane_g1

0xa622,	// (0x00077a97) main_video4_pane_g2_ParamLimits

0xa622,	// (0x00077a97) main_video4_pane_g2

0xa62e,	// (0x00077aa3) main_video4_pane_g3_ParamLimits

0xa62e,	// (0x00077aa3) main_video4_pane_g3

0xa63a,	// (0x00077aaf) main_video4_pane_g4_ParamLimits

0xa63a,	// (0x00077aaf) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x0007cc6a) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x0007cc6a) main_video4_pane_g

0xa65c,	// (0x00077ad1) vid4_indicators_pane_ParamLimits

0xa65c,	// (0x00077ad1) vid4_indicators_pane

0xa67b,	// (0x00077af0) video4_image_uncrop_cif_pane_ParamLimits

0xa67b,	// (0x00077af0) video4_image_uncrop_cif_pane

0xa68a,	// (0x00077aff) video4_image_uncrop_nhd_pane_ParamLimits

0xa68a,	// (0x00077aff) video4_image_uncrop_nhd_pane

0xa4fe,	// (0x00077973) video4_image_uncrop_vga_pane_ParamLimits

0xa4fe,	// (0x00077973) video4_image_uncrop_vga_pane

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp07

0xa6a3,	// (0x00077b18) vid4_indicators_pane_g1

0xa6b9,	// (0x00077b2e) vid4_indicators_pane_g2

0xa6cd,	// (0x00077b42) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x0007cc75) vid4_indicators_pane_g

0xa6fe,	// (0x00077b73) vid4_indicators_pane_t1

0xa715,	// (0x00077b8a) cam4_autofocus_pane_g1

0xa71d,	// (0x00077b92) cam4_autofocus_pane_g2

0xa725,	// (0x00077b9a) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x0007cc80) cam4_autofocus_pane_g

0xa72d,	// (0x00077ba2) cam4_autofocus_pane_g3_copy1

0x9e58,	// (0x000772cd) video_down_pane_cp_t1

0x9e66,	// (0x000772db) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x0007cbf8) video_down_pane_cp_t

0x1ac5,	// (0x0006ef3a) popup_vitu2_window_ParamLimits

0x1ac5,	// (0x0006ef3a) popup_vitu2_window

0xa735,	// (0x00077baa) aid_size_cell2_itu2_ParamLimits

0xa735,	// (0x00077baa) aid_size_cell2_itu2

0xa757,	// (0x00077bcc) aid_size_cell_itu2_ParamLimits

0xa757,	// (0x00077bcc) aid_size_cell_itu2

0x46b4,	// (0x00071b29) bg_popup_window_pane_cp09_ParamLimits

0x46b4,	// (0x00071b29) bg_popup_window_pane_cp09

0xa79b,	// (0x00077c10) field_vitu2_entry_pane_ParamLimits

0xa79b,	// (0x00077c10) field_vitu2_entry_pane

0xa7bb,	// (0x00077c30) grid_vitu2_function_pane_ParamLimits

0xa7bb,	// (0x00077c30) grid_vitu2_function_pane

0xa7ff,	// (0x00077c74) grid_vitu2_itu_pane_ParamLimits

0xa7ff,	// (0x00077c74) grid_vitu2_itu_pane

0xa875,	// (0x00077cea) cell_vitu2_itu_pane_ParamLimits

0xa875,	// (0x00077cea) cell_vitu2_itu_pane

0xa890,	// (0x00077d05) cell_vitu2_function_pane_ParamLimits

0xa890,	// (0x00077d05) cell_vitu2_function_pane

0xe3d8,	// (0x0007b84d) bg_popup_call_pane_cp08_ParamLimits

0xe3d8,	// (0x0007b84d) bg_popup_call_pane_cp08

0xe3ef,	// (0x0007b864) field_vitu2_entry_pane_g1

0xe3fb,	// (0x0007b870) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x0007cc87) field_vitu2_entry_pane_g

0xe407,	// (0x0007b87c) field_vitu2_entry_pane_t1_ParamLimits

0xe407,	// (0x0007b87c) field_vitu2_entry_pane_t1

0xe436,	// (0x0007b8ab) field_vitu2_entry_pane_t2_ParamLimits

0xe436,	// (0x0007b8ab) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x0007cc8e) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x0007cc8e) field_vitu2_entry_pane_t

0x9008,	// (0x0007647d) bg_button_pane_cp010_ParamLimits

0x9008,	// (0x0007647d) bg_button_pane_cp010

0xa8d4,	// (0x00077d49) cell_vitu2_itu_pane_g1

0xa8fa,	// (0x00077d6f) cell_vitu2_itu_pane_t1_ParamLimits

0xa8fa,	// (0x00077d6f) cell_vitu2_itu_pane_t1

0xa946,	// (0x00077dbb) cell_vitu2_itu_pane_t2_ParamLimits

0xa946,	// (0x00077dbb) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x0007cc98) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x0007cc98) cell_vitu2_itu_pane_t

0xefeb,	// (0x0007c460) bg_button_pane_cp011

0xaa0e,	// (0x00077e83) cell_vitu2_function_pane_g1

0xebc8,	// (0x0007c03d) main_myfav_hc_pane

0xa306,	// (0x0007777b) popup_image3_note_pane_ParamLimits

0xa306,	// (0x0007777b) popup_image3_note_pane

0xa314,	// (0x00077789) popup_image3_tool_bar_pane_ParamLimits

0xa314,	// (0x00077789) popup_image3_tool_bar_pane

0xa9bc,	// (0x00077e31) cell_vitu2_itu_pane_t3_ParamLimits

0xa9bc,	// (0x00077e31) cell_vitu2_itu_pane_t3

0xebc8,	// (0x0007c03d) bg_popup_trans_pane

0xe45b,	// (0x0007b8d0) grid_image3_tool_bar_pane

0xe465,	// (0x0007b8da) bg_popup_trans_pane_g1

0x1f76,	// (0x0006f3eb) bg_popup_trans_pane_g2

0xe46d,	// (0x0007b8e2) bg_popup_trans_pane_g3

0xe475,	// (0x0007b8ea) bg_popup_trans_pane_g4

0xe47d,	// (0x0007b8f2) bg_popup_trans_pane_g5

0xe485,	// (0x0007b8fa) bg_popup_trans_pane_g6

0xe48d,	// (0x0007b902) bg_popup_trans_pane_g7

0xe495,	// (0x0007b90a) bg_popup_trans_pane_g8

0x1f56,	// (0x0006f3cb) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x0007cc9f) bg_popup_trans_pane_g

0xe49d,	// (0x0007b912) cell_image3_tool_bar_pane_ParamLimits

0xe49d,	// (0x0007b912) cell_image3_tool_bar_pane

0x1b11,	// (0x0006ef86) cell_image3_tool_bar_pane_g1

0xebc8,	// (0x0007c03d) bg_popup_trans_pane_cp1

0xe4b3,	// (0x0007b928) popup_image3_note_pane_t1

0xe4c1,	// (0x0007b936) popup_image3_note_pane_t2

0xe4cf,	// (0x0007b944) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x0007ccb2) popup_image3_note_pane_t

0xe4df,	// (0x0007b954) popup_image3_note_pane_t3_copy1

0xaa22,	// (0x00077e97) bg_myfav_hc_instruction_pane_ParamLimits

0xaa22,	// (0x00077e97) bg_myfav_hc_instruction_pane

0xaa3a,	// (0x00077eaf) cell_myfav_contact_pane_ParamLimits

0xaa3a,	// (0x00077eaf) cell_myfav_contact_pane

0xaa54,	// (0x00077ec9) cell_myfav_contact_pane_cp1_ParamLimits

0xaa54,	// (0x00077ec9) cell_myfav_contact_pane_cp1

0xaa6c,	// (0x00077ee1) cell_myfav_contact_pane_cp2_ParamLimits

0xaa6c,	// (0x00077ee1) cell_myfav_contact_pane_cp2

0xaa84,	// (0x00077ef9) cell_myfav_contact_pane_cp3_ParamLimits

0xaa84,	// (0x00077ef9) cell_myfav_contact_pane_cp3

0xaa9b,	// (0x00077f10) cell_myfav_contact_pane_cp4_ParamLimits

0xaa9b,	// (0x00077f10) cell_myfav_contact_pane_cp4

0xaab1,	// (0x00077f26) cell_myfav_contact_pane_cp5_ParamLimits

0xaab1,	// (0x00077f26) cell_myfav_contact_pane_cp5

0xaac5,	// (0x00077f3a) cell_myfav_contact_pane_cp6_ParamLimits

0xaac5,	// (0x00077f3a) cell_myfav_contact_pane_cp6

0xaad9,	// (0x00077f4e) cell_myfav_contact_pane_cp7_ParamLimits

0xaad9,	// (0x00077f4e) cell_myfav_contact_pane_cp7

0xe4ed,	// (0x0007b962) listscroll_gen_pane_cp05

0xaaf1,	// (0x00077f66) main_myfav_hc_pane_g1_ParamLimits

0xaaf1,	// (0x00077f66) main_myfav_hc_pane_g1

0xab0b,	// (0x00077f80) main_myfav_hc_pane_g2_ParamLimits

0xab0b,	// (0x00077f80) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x0007ccb9) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x0007ccb9) main_myfav_hc_pane_g

0xab3d,	// (0x00077fb2) main_myfav_hc_pane_t1_ParamLimits

0xab3d,	// (0x00077fb2) main_myfav_hc_pane_t1

0xe4f6,	// (0x0007b96b) main_myfav_hc_pane_t2_ParamLimits

0xe4f6,	// (0x0007b96b) main_myfav_hc_pane_t2

0xe508,	// (0x0007b97d) main_myfav_hc_pane_t3_ParamLimits

0xe508,	// (0x0007b97d) main_myfav_hc_pane_t3

0xab54,	// (0x00077fc9) main_myfav_hc_pane_t4_ParamLimits

0xab54,	// (0x00077fc9) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0007ccc0) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0007ccc0) main_myfav_hc_pane_t

0x1b11,	// (0x0006ef86) bg_myfav_hc_instruction_pane_g1

0xe51a,	// (0x0007b98f) cell_myfav_contact_pane_g1_ParamLimits

0xe51a,	// (0x0007b98f) cell_myfav_contact_pane_g1

0xe51a,	// (0x0007b98f) cell_myfav_contact_pane_g2_ParamLimits

0xe51a,	// (0x0007b98f) cell_myfav_contact_pane_g2

0xe526,	// (0x0007b99b) cell_myfav_contact_pane_g3_ParamLimits

0xe526,	// (0x0007b99b) cell_myfav_contact_pane_g3

0x1ae1,	// (0x0006ef56) cell_myfav_contact_pane_g4_ParamLimits

0x1ae1,	// (0x0006ef56) cell_myfav_contact_pane_g4

0xe533,	// (0x0007b9a8) cell_myfav_contact_pane_g5_ParamLimits

0xe533,	// (0x0007b9a8) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x0007cccb) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x0007cccb) cell_myfav_contact_pane_g

0xab25,	// (0x00077f9a) main_myfav_hc_pane_g3_ParamLimits

0xab25,	// (0x00077f9a) main_myfav_hc_pane_g3

0x6091,	// (0x00073506) popup_adpt_find_window

0xab7e,	// (0x00077ff3) afind_page_pane_ParamLimits

0xab7e,	// (0x00077ff3) afind_page_pane

0xab8b,	// (0x00078000) aid_size_cell_afind_ParamLimits

0xab8b,	// (0x00078000) aid_size_cell_afind

0xaba5,	// (0x0007801a) bg_popup_sub_pane_cp09_ParamLimits

0xaba5,	// (0x0007801a) bg_popup_sub_pane_cp09

0xabb6,	// (0x0007802b) find_pane_cp01_ParamLimits

0xabb6,	// (0x0007802b) find_pane_cp01

0xe53f,	// (0x0007b9b4) grid_afind_control_pane_ParamLimits

0xe53f,	// (0x0007b9b4) grid_afind_control_pane

0xabc9,	// (0x0007803e) grid_afind_pane_ParamLimits

0xabc9,	// (0x0007803e) grid_afind_pane

0xabe5,	// (0x0007805a) cell_afind_pane_ParamLimits

0xabe5,	// (0x0007805a) cell_afind_pane

0x1b11,	// (0x0006ef86) afind_page_pane_g1

0xac2d,	// (0x000780a2) afind_page_pane_g2

0xac35,	// (0x000780aa) afind_page_pane_g3

0x0002,

0xf861,	// (0x0007ccd6) afind_page_pane_g

0xac3d,	// (0x000780b2) afind_page_pane_t1

0xe565,	// (0x0007b9da) cell_afind_grid_control_pane_ParamLimits

0xe565,	// (0x0007b9da) cell_afind_grid_control_pane

0xe574,	// (0x0007b9e9) bg_button_pane_cp69_ParamLimits

0xe574,	// (0x0007b9e9) bg_button_pane_cp69

0xac4b,	// (0x000780c0) cell_afind_pane_g1_ParamLimits

0xac4b,	// (0x000780c0) cell_afind_pane_g1

0xac58,	// (0x000780cd) cell_afind_pane_t1_ParamLimits

0xac58,	// (0x000780cd) cell_afind_pane_t1

0xe580,	// (0x0007b9f5) bg_button_pane_cp72

0xe588,	// (0x0007b9fd) cell_afind_grid_control_pane_g1

0x885a,	// (0x00075ccf) aid_image_placing_area_ParamLimits

0x885a,	// (0x00075ccf) aid_image_placing_area

0x1ad3,	// (0x0006ef48) field_vitu_entry_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) field_vitu_entry_pane_g1

0x1ad3,	// (0x0006ef48) field_vitu_entry_pane_g2_ParamLimits

0x1ad3,	// (0x0006ef48) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0007c60e) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0007c60e) field_vitu_entry_pane_g

0x456e,	// (0x000719e3) cell_vitu_itu_pane_g1_ParamLimits

0x4551,	// (0x000719c6) cell_vitu_itu_pane_t3_ParamLimits

0x4551,	// (0x000719c6) cell_vitu_itu_pane_t3

0xe338,	// (0x0007b7ad) mp4_progress_pane_t1_ParamLimits

0xe356,	// (0x0007b7cb) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x0007cc1c) mp4_progress_pane_t_ParamLimits

0xe375,	// (0x0007b7ea) mup_progress_pane_cp04_ParamLimits

0xab68,	// (0x00077fdd) main_myfav_hc_pane_t5_ParamLimits

0xab68,	// (0x00077fdd) main_myfav_hc_pane_t5

0x552e,	// (0x000729a3) aid_zoom_text_primary

0x6091,	// (0x00073506) popup_adpt_find_window_ParamLimits

0xefeb,	// (0x0007c460) main_cam_set_pane

0xa525,	// (0x0007799a) cam4_zoom_pane_ParamLimits

0xa525,	// (0x0007799a) cam4_zoom_pane

0xac6a,	// (0x000780df) main_cam_set_pane_g1_ParamLimits

0xac6a,	// (0x000780df) main_cam_set_pane_g1

0xac78,	// (0x000780ed) main_cam_set_pane_g2_ParamLimits

0xac78,	// (0x000780ed) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x0007ccdd) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x0007ccdd) main_cam_set_pane_g

0xac84,	// (0x000780f9) main_cam_set_pane_t1_ParamLimits

0xac84,	// (0x000780f9) main_cam_set_pane_t1

0xaca0,	// (0x00078115) main_cset_listscroll_pane_ParamLimits

0xaca0,	// (0x00078115) main_cset_listscroll_pane

0xacd4,	// (0x00078149) main_cset_slider_pane_ParamLimits

0xacd4,	// (0x00078149) main_cset_slider_pane

0xe599,	// (0x0007ba0e) main_cset_list_pane_ParamLimits

0xe599,	// (0x0007ba0e) main_cset_list_pane

0xe5a9,	// (0x0007ba1e) scroll_pane_cp028

0xacf5,	// (0x0007816a) aid_area_touch_slider

0xad11,	// (0x00078186) cset_slider_pane

0xad34,	// (0x000781a9) main_cset_slider_pane_g1

0xad49,	// (0x000781be) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x0007cce2) main_cset_slider_pane_g

0xe5e2,	// (0x0007ba57) main_cset_slider_pane_t1

0xae05,	// (0x0007827a) main_cset_slider_pane_t2

0xae1f,	// (0x00078294) main_cset_slider_pane_t3

0xae39,	// (0x000782ae) main_cset_slider_pane_t4

0xae53,	// (0x000782c8) main_cset_slider_pane_t5

0xae6d,	// (0x000782e2) main_cset_slider_pane_t6

0xae82,	// (0x000782f7) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x0007cd07) main_cset_slider_pane_t

0xaf86,	// (0x000783fb) cset_list_set_pane_ParamLimits

0xaf86,	// (0x000783fb) cset_list_set_pane

0xe67c,	// (0x0007baf1) aid_position_infowindow_above

0xe684,	// (0x0007baf9) aid_position_infowindow_below

0xaf97,	// (0x0007840c) cset_list_set_pane_g1_ParamLimits

0xaf97,	// (0x0007840c) cset_list_set_pane_g1

0x568a,	// (0x00072aff) cset_list_set_pane_g3_ParamLimits

0x568a,	// (0x00072aff) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x0007cd26) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x0007cd26) cset_list_set_pane_g

0x5699,	// (0x00072b0e) cset_list_set_pane_t1_ParamLimits

0x5699,	// (0x00072b0e) cset_list_set_pane_t1

0xefeb,	// (0x0007c460) list_highlight_pane_cp021_ParamLimits

0xefeb,	// (0x0007c460) list_highlight_pane_cp021

0x27ab,	// (0x0006fc20) cset_slider_pane_g1

0x27bd,	// (0x0006fc32) cset_slider_pane_g2

0x27b4,	// (0x0006fc29) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x0007cd2b) cset_slider_pane_g

0xe68c,	// (0x0007bb01) aid_area_touch_cam4_zoom

0xafa3,	// (0x00078418) cam4_zoom_cont_pane

0xafab,	// (0x00078420) cam4_zoom_pane_g1

0xafb3,	// (0x00078428) cam4_zoom_pane_g2

0xafbb,	// (0x00078430) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x0007cd32) cam4_zoom_pane_g

0xe695,	// (0x0007bb0a) cam4_zoom_cont_pane_g1

0xe69e,	// (0x0007bb13) cam4_zoom_cont_pane_g2

0xe6a7,	// (0x0007bb1c) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x0007cd39) cam4_zoom_cont_pane_g

0xa35d,	// (0x000777d2) call4_image_pane_ParamLimits

0xa35d,	// (0x000777d2) call4_image_pane

0xa3be,	// (0x00077833) call4_windows_conf_pane_ParamLimits

0xa405,	// (0x0007787a) popup_call4_audio_in_window_ParamLimits

0xa405,	// (0x0007787a) popup_call4_audio_in_window

0xebc8,	// (0x0007c03d) bg_popup_call2_act_pane_cp02

0xe3b6,	// (0x0007b82b) call4_list_conf_pane

0x1b11,	// (0x0006ef86) call4_image_pane_g1

0x1b11,	// (0x0006ef86) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0007c501) call4_image_pane_g

0xe6b0,	// (0x0007bb25) list_single_graphic_popup_conf4_pane_ParamLimits

0xe6b0,	// (0x0007bb25) list_single_graphic_popup_conf4_pane

0xebc8,	// (0x0007c03d) list_highlight_pane_cp022

0xe6c5,	// (0x0007bb3a) list_single_graphic_popup_conf4_pane_g1

0x2492,	// (0x0006f907) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0007cd40) list_single_graphic_popup_conf4_pane_g

0xe6cd,	// (0x0007bb42) list_single_graphic_popup_conf4_pane_t1

0x6e55,	// (0x000742ca) popup_vtel_slider_window_ParamLimits

0x6e55,	// (0x000742ca) popup_vtel_slider_window

0xe388,	// (0x0007b7fd) dialer2_ne_pane_t2_ParamLimits

0xe388,	// (0x0007b7fd) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0007cc21) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0007cc21) dialer2_ne_pane_t

0xefeb,	// (0x0007c460) bg_popup_sub_pane_cp010_ParamLimits

0xefeb,	// (0x0007c460) bg_popup_sub_pane_cp010

0xafc3,	// (0x00078438) popup_vtel_slider_window_g1_ParamLimits

0xafc3,	// (0x00078438) popup_vtel_slider_window_g1

0xafcf,	// (0x00078444) popup_vtel_slider_window_g2_ParamLimits

0xafcf,	// (0x00078444) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x0007cd45) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x0007cd45) popup_vtel_slider_window_g

0xb017,	// (0x0007848c) vtel_slider_pane_ParamLimits

0xb017,	// (0x0007848c) vtel_slider_pane

0xb026,	// (0x0007849b) vtel_slider_pane_g1_ParamLimits

0xb026,	// (0x0007849b) vtel_slider_pane_g1

0xb033,	// (0x000784a8) vtel_slider_pane_g2_ParamLimits

0xb033,	// (0x000784a8) vtel_slider_pane_g2

0xb040,	// (0x000784b5) vtel_slider_pane_g3_ParamLimits

0xb040,	// (0x000784b5) vtel_slider_pane_g3

0xb026,	// (0x0007849b) vtel_slider_pane_g4_ParamLimits

0xb026,	// (0x0007849b) vtel_slider_pane_g4

0xb04d,	// (0x000784c2) vtel_slider_pane_g5_ParamLimits

0xb04d,	// (0x000784c2) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x0007cd4e) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x0007cd4e) vtel_slider_pane_g

0xefeb,	// (0x0007c460) main_gallery2_pane

0xa77d,	// (0x00077bf2) aid_size_row_itut2_dropdow_list_ParamLimits

0xa77d,	// (0x00077bf2) aid_size_row_itut2_dropdow_list

0xa7dd,	// (0x00077c52) grid_vitu2_function_top_pane_ParamLimits

0xa7dd,	// (0x00077c52) grid_vitu2_function_top_pane

0xa833,	// (0x00077ca8) popup_vitu2_dropdown_list_window_ParamLimits

0xa833,	// (0x00077ca8) popup_vitu2_dropdown_list_window

0xa851,	// (0x00077cc6) popup_vitu2_match_list_window

0xb05a,	// (0x000784cf) cell_vitu2_function_top_pane_ParamLimits

0xb05a,	// (0x000784cf) cell_vitu2_function_top_pane

0xb074,	// (0x000784e9) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb074,	// (0x000784e9) cell_vitu2_function_top_pane_cp01

0xb090,	// (0x00078505) cell_vitu2_function_top_wide_pane_ParamLimits

0xb090,	// (0x00078505) cell_vitu2_function_top_wide_pane

0xefeb,	// (0x0007c460) bg_button_pane_cp012

0xb0ae,	// (0x00078523) cell_vitu2_function_top_pane_g1

0xb0c2,	// (0x00078537) bg_button_pane_cp013_ParamLimits

0xb0c2,	// (0x00078537) bg_button_pane_cp013

0xb0de,	// (0x00078553) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb0de,	// (0x00078553) cell_vitu2_function_top_wide_pane_g1

0x1ac5,	// (0x0006ef3a) bg_popup_sub_pane_cp20

0xb0f6,	// (0x0007856b) list_vitu2_match_list_pane

0xe465,	// (0x0007b8da) bg_popup_sub_pane_cp20_g1

0xe46d,	// (0x0007b8e2) bg_popup_sub_pane_cp20_g2

0x1f76,	// (0x0006f3eb) bg_popup_sub_pane_cp20_g3

0xe475,	// (0x0007b8ea) bg_popup_sub_pane_cp20_g4

0x1f56,	// (0x0006f3cb) bg_popup_sub_pane_cp20_g5

0xe6e3,	// (0x0007bb58) bg_popup_sub_pane_cp20_g6

0xe485,	// (0x0007b8fa) bg_popup_sub_pane_cp20_g7

0xe48d,	// (0x0007b902) bg_popup_sub_pane_cp20_g8

0xe495,	// (0x0007b90a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x0007cd59) bg_popup_sub_pane_cp20_g

0xb10e,	// (0x00078583) list_vitu2_match_list_item_pane_ParamLimits

0xb10e,	// (0x00078583) list_vitu2_match_list_item_pane

0xb120,	// (0x00078595) list_vitu2_match_list_item_pane_t1

0xebc8,	// (0x0007c03d) bg_popup_sub_pane_cp21

0x1d4c,	// (0x0006f1c1) grid_vitu2_dropdown_list_pane

0xb12e,	// (0x000785a3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb12e,	// (0x000785a3) cell_vitu2_dropdown_list_char_pane

0xb152,	// (0x000785c7) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb152,	// (0x000785c7) cell_vitu2_dropdown_list_ctrl_pane

0xe6eb,	// (0x0007bb60) cell_vitu2_dropdown_list_char_pane_g1

0xe6f4,	// (0x0007bb69) cell_vitu2_dropdown_list_char_pane_g2

0xe6fd,	// (0x0007bb72) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x0007cd6c) cell_vitu2_dropdown_list_char_pane_g

0xb17c,	// (0x000785f1) cell_vitu2_dropdown_list_char_pane_t1

0xb18a,	// (0x000785ff) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb18a,	// (0x000785ff) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb19a,	// (0x0007860f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb19a,	// (0x0007860f) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb1ab,	// (0x00078620) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb1ab,	// (0x00078620) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb1bb,	// (0x00078630) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb1bb,	// (0x00078630) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1ad3,	// (0x0006ef48) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1ad3,	// (0x0006ef48) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x0007cd73) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x0007cd73) cell_vitu2_dropdown_list_ctrl_pane_g

0xb1d4,	// (0x00078649) aid_size_cell_gallery2_ParamLimits

0xb1d4,	// (0x00078649) aid_size_cell_gallery2

0xb1ee,	// (0x00078663) grid_gallery2_pane_ParamLimits

0xb1ee,	// (0x00078663) grid_gallery2_pane

0xb205,	// (0x0007867a) scroll_pane_cp029_ParamLimits

0xb205,	// (0x0007867a) scroll_pane_cp029

0xb215,	// (0x0007868a) cell_gallery2_pane_ParamLimits

0xb215,	// (0x0007868a) cell_gallery2_pane

0xe706,	// (0x0007bb7b) cell_gallery2_pane_g2

0xb26c,	// (0x000786e1) cell_gallery2_pane_g3

0xe70e,	// (0x0007bb83) cell_gallery2_pane_g4

0xe716,	// (0x0007bb8b) cell_gallery2_pane_g5

0x1d4c,	// (0x0006f1c1) grid_highlight_pane_cp10

0xa851,	// (0x00077cc6) popup_vitu2_match_list_window_ParamLimits

0xa865,	// (0x00077cda) popup_vitu2_query_window_ParamLimits

0xa865,	// (0x00077cda) popup_vitu2_query_window

0xebc8,	// (0x0007c03d) bg_vitu2_candi_button_pane

0xe6eb,	// (0x0007bb60) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe6f4,	// (0x0007bb69) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe6fd,	// (0x0007bb72) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb274,	// (0x000786e9) bg_button_pane_cp015

0xb289,	// (0x000786fe) bg_button_pane_cp016

0xb295,	// (0x0007870a) bg_button_pane_cp017

0x2739,	// (0x0006fbae) bg_popup_sub_pane_cp22

0xe71e,	// (0x0007bb93) popup_vitu2_query_window_g1

0xb2d6,	// (0x0007874b) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0007cd7e) popup_vitu2_query_window_g

0xb2fa,	// (0x0007876f) popup_vitu2_query_window_t1_ParamLimits

0xb2fa,	// (0x0007876f) popup_vitu2_query_window_t1

0xb32d,	// (0x000787a2) popup_vitu2_query_window_t2_ParamLimits

0xb32d,	// (0x000787a2) popup_vitu2_query_window_t2

0xb33f,	// (0x000787b4) popup_vitu2_query_window_t3_ParamLimits

0xb33f,	// (0x000787b4) popup_vitu2_query_window_t3

0xb367,	// (0x000787dc) popup_vitu2_query_window_t4_ParamLimits

0xb367,	// (0x000787dc) popup_vitu2_query_window_t4

0xb37b,	// (0x000787f0) popup_vitu2_query_window_t5_ParamLimits

0xb37b,	// (0x000787f0) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x0007cd85) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x0007cd85) popup_vitu2_query_window_t

0xe591,	// (0x0007ba06) main_cset_text_pane

0xacf5,	// (0x0007816a) aid_area_touch_slider_ParamLimits

0xad11,	// (0x00078186) cset_slider_pane_ParamLimits

0xad34,	// (0x000781a9) main_cset_slider_pane_g1_ParamLimits

0xad49,	// (0x000781be) main_cset_slider_pane_g2_ParamLimits

0xe5b2,	// (0x0007ba27) main_cset_slider_pane_g3_ParamLimits

0xe5b2,	// (0x0007ba27) main_cset_slider_pane_g3

0xad5e,	// (0x000781d3) main_cset_slider_pane_g4_ParamLimits

0xad5e,	// (0x000781d3) main_cset_slider_pane_g4

0xad6d,	// (0x000781e2) main_cset_slider_pane_g5_ParamLimits

0xad6d,	// (0x000781e2) main_cset_slider_pane_g5

0xad79,	// (0x000781ee) main_cset_slider_pane_g6_ParamLimits

0xad79,	// (0x000781ee) main_cset_slider_pane_g6

0xf86d,	// (0x0007cce2) main_cset_slider_pane_g_ParamLimits

0xe5e2,	// (0x0007ba57) main_cset_slider_pane_t1_ParamLimits

0xae05,	// (0x0007827a) main_cset_slider_pane_t2_ParamLimits

0xae1f,	// (0x00078294) main_cset_slider_pane_t3_ParamLimits

0xae39,	// (0x000782ae) main_cset_slider_pane_t4_ParamLimits

0xae53,	// (0x000782c8) main_cset_slider_pane_t5_ParamLimits

0xae6d,	// (0x000782e2) main_cset_slider_pane_t6_ParamLimits

0xae82,	// (0x000782f7) main_cset_slider_pane_t7_ParamLimits

0xaeac,	// (0x00078321) main_cset_slider_pane_t8_ParamLimits

0xaeac,	// (0x00078321) main_cset_slider_pane_t8

0xaed4,	// (0x00078349) main_cset_slider_pane_t9_ParamLimits

0xaed4,	// (0x00078349) main_cset_slider_pane_t9

0xaefc,	// (0x00078371) main_cset_slider_pane_t10_ParamLimits

0xaefc,	// (0x00078371) main_cset_slider_pane_t10

0xaf24,	// (0x00078399) main_cset_slider_pane_t11_ParamLimits

0xaf24,	// (0x00078399) main_cset_slider_pane_t11

0xaf4c,	// (0x000783c1) main_cset_slider_pane_t12_ParamLimits

0xaf4c,	// (0x000783c1) main_cset_slider_pane_t12

0xaf69,	// (0x000783de) main_cset_slider_pane_t13_ParamLimits

0xaf69,	// (0x000783de) main_cset_slider_pane_t13

0xf892,	// (0x0007cd07) main_cset_slider_pane_t_ParamLimits

0xebc8,	// (0x0007c03d) bg_popup_sub_pane_cp011

0xe72a,	// (0x0007bb9f) main_cset_text_pane_g1

0xe732,	// (0x0007bba7) main_cset_text_pane_t1

0xe740,	// (0x0007bbb5) main_cset_text_pane_t2

0xe74e,	// (0x0007bbc3) main_cset_text_pane_t3

0xe75c,	// (0x0007bbd1) main_cset_text_pane_t4

0xe76a,	// (0x0007bbdf) main_cset_text_pane_t5

0xe778,	// (0x0007bbed) main_cset_text_pane_t6

0xe786,	// (0x0007bbfb) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x0007cd94) main_cset_text_pane_t

0xebc8,	// (0x0007c03d) main_cam4_burst_pane

0xebc8,	// (0x0007c03d) main_cam5_pane

0xe553,	// (0x0007b9c8) bg_button_pane_cp019

0xe55c,	// (0x0007b9d1) bg_button_pane_cp020

0xe5be,	// (0x0007ba33) main_cset_slider_pane_g7_ParamLimits

0xe5be,	// (0x0007ba33) main_cset_slider_pane_g7

0xe5ca,	// (0x0007ba3f) main_cset_slider_pane_g8_ParamLimits

0xe5ca,	// (0x0007ba3f) main_cset_slider_pane_g8

0xad8d,	// (0x00078202) main_cset_slider_pane_g9_ParamLimits

0xad8d,	// (0x00078202) main_cset_slider_pane_g9

0xad99,	// (0x0007820e) main_cset_slider_pane_g10_ParamLimits

0xad99,	// (0x0007820e) main_cset_slider_pane_g10

0xada5,	// (0x0007821a) main_cset_slider_pane_g11_ParamLimits

0xada5,	// (0x0007821a) main_cset_slider_pane_g11

0xadb1,	// (0x00078226) main_cset_slider_pane_g12_ParamLimits

0xadb1,	// (0x00078226) main_cset_slider_pane_g12

0xadbd,	// (0x00078232) main_cset_slider_pane_g13_ParamLimits

0xadbd,	// (0x00078232) main_cset_slider_pane_g13

0xadc9,	// (0x0007823e) main_cset_slider_pane_g14_ParamLimits

0xadc9,	// (0x0007823e) main_cset_slider_pane_g14

0xadd5,	// (0x0007824a) main_cset_slider_pane_g15_ParamLimits

0xadd5,	// (0x0007824a) main_cset_slider_pane_g15

0xe60a,	// (0x0007ba7f) main_cset_slider_pane_t14_ParamLimits

0xe60a,	// (0x0007ba7f) main_cset_slider_pane_t14

0xe643,	// (0x0007bab8) main_cset_slider_pane_t15_ParamLimits

0xe643,	// (0x0007bab8) main_cset_slider_pane_t15

0xb3e5,	// (0x0007885a) aid_cam4_burst_size_cell_ParamLimits

0xb3e5,	// (0x0007885a) aid_cam4_burst_size_cell

0xb401,	// (0x00078876) grid_cam4_burst_pane_ParamLimits

0xb401,	// (0x00078876) grid_cam4_burst_pane

0xb433,	// (0x000788a8) linegrid_cam4_burst_pane_ParamLimits

0xb433,	// (0x000788a8) linegrid_cam4_burst_pane

0xb451,	// (0x000788c6) scroll_pane_cp30_ParamLimits

0xb451,	// (0x000788c6) scroll_pane_cp30

0xb45d,	// (0x000788d2) cell_cam4_burst_pane_ParamLimits

0xb45d,	// (0x000788d2) cell_cam4_burst_pane

0xe794,	// (0x0007bc09) linegrid_cam4_burst_pane_g1_ParamLimits

0xe794,	// (0x0007bc09) linegrid_cam4_burst_pane_g1

0xb49d,	// (0x00078912) linegrid_cam4_burst_pane_g2_ParamLimits

0xb49d,	// (0x00078912) linegrid_cam4_burst_pane_g2

0xe7a1,	// (0x0007bc16) linegrid_cam4_burst_pane_g3_ParamLimits

0xe7a1,	// (0x0007bc16) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0007cda3) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0007cda3) linegrid_cam4_burst_pane_g

0xb4ae,	// (0x00078923) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb4ae,	// (0x00078923) linegrid_cam4_burst_pane_g3_copy1

0xe7ae,	// (0x0007bc23) linegrid_cam4_burst_pane_g4_ParamLimits

0xe7ae,	// (0x0007bc23) linegrid_cam4_burst_pane_g4

0xb4c8,	// (0x0007893d) linegrid_cam4_burst_pane_g5_ParamLimits

0xb4c8,	// (0x0007893d) linegrid_cam4_burst_pane_g5

0xb4d9,	// (0x0007894e) linegrid_cam4_burst_pane_g6_ParamLimits

0xb4d9,	// (0x0007894e) linegrid_cam4_burst_pane_g6

0xe7bb,	// (0x0007bc30) linegrid_cam4_burst_pane_g7_ParamLimits

0xe7bb,	// (0x0007bc30) linegrid_cam4_burst_pane_g7

0xb4f0,	// (0x00078965) cell_cam4_burst_pane_g1

0xe7d4,	// (0x0007bc49) main_cam5_pane_t1_ParamLimits

0xe7d4,	// (0x0007bc49) main_cam5_pane_t1

0xe7e6,	// (0x0007bc5b) main_cam5_pane_t2_ParamLimits

0xe7e6,	// (0x0007bc5b) main_cam5_pane_t2

0xe7f8,	// (0x0007bc6d) main_cam5_pane_t3_ParamLimits

0xe7f8,	// (0x0007bc6d) main_cam5_pane_t3

0xe80a,	// (0x0007bc7f) main_cam5_pane_t4_ParamLimits

0xe80a,	// (0x0007bc7f) main_cam5_pane_t4

0xe822,	// (0x0007bc97) main_cam5_pane_t5_ParamLimits

0xe822,	// (0x0007bc97) main_cam5_pane_t5

0xe836,	// (0x0007bcab) main_cam5_pane_t6_ParamLimits

0xe836,	// (0x0007bcab) main_cam5_pane_t6

0xe84a,	// (0x0007bcbf) main_cam5_pane_t7_ParamLimits

0xe84a,	// (0x0007bcbf) main_cam5_pane_t7

0xe85c,	// (0x0007bcd1) main_cam5_pane_t8_ParamLimits

0xe85c,	// (0x0007bcd1) main_cam5_pane_t8

0xe87a,	// (0x0007bcef) main_cam5_pane_t9_ParamLimits

0xe87a,	// (0x0007bcef) main_cam5_pane_t9

0xe88c,	// (0x0007bd01) main_cam5_pane_t10_ParamLimits

0xe88c,	// (0x0007bd01) main_cam5_pane_t10

0xe89e,	// (0x0007bd13) main_cam5_pane_t11_ParamLimits

0xe89e,	// (0x0007bd13) main_cam5_pane_t11

0xe8b2,	// (0x0007bd27) main_cam5_pane_t12_ParamLimits

0xe8b2,	// (0x0007bd27) main_cam5_pane_t12

0xe8c9,	// (0x0007bd3e) main_cam5_pane_t13_ParamLimits

0xe8c9,	// (0x0007bd3e) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0007cdaf) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0007cdaf) main_cam5_pane_t

0x6146,	// (0x000735bb) popup_scut_keymap_window_ParamLimits

0x6146,	// (0x000735bb) popup_scut_keymap_window

0xb503,	// (0x00078978) aid_size_cell_brow_shortcut

0x1d4c,	// (0x0006f1c1) bg_popup_window_pane_cp010

0xb50f,	// (0x00078984) grid_scut_pane

0xb51b,	// (0x00078990) cell_scut_pane_ParamLimits

0xb51b,	// (0x00078990) cell_scut_pane

0xb536,	// (0x000789ab) cell_scut_pane_g1

0xe8ec,	// (0x0007bd61) cell_scut_pane_t1

0xe8fb,	// (0x0007bd70) cell_scut_pane_t2

0xb53f,	// (0x000789b4) cell_scut_pane_t3

0x0002,

0xf955,	// (0x0007cdca) cell_scut_pane_t

0x951b,	// (0x00076990) main_mup3_pane_g8_ParamLimits

0x951b,	// (0x00076990) main_mup3_pane_g8

0xa78b,	// (0x00077c00) area_vitu2_query_pane_ParamLimits

0xa78b,	// (0x00077c00) area_vitu2_query_pane

0xb2a1,	// (0x00078716) input_focus_pane_cp08

0xe90a,	// (0x0007bd7f) area_vitu2_query_pane_g1

0xb54d,	// (0x000789c2) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0007cdd1) area_vitu2_query_pane_g

0xb55e,	// (0x000789d3) area_vitu2_query_pane_t1_ParamLimits

0xb55e,	// (0x000789d3) area_vitu2_query_pane_t1

0xb572,	// (0x000789e7) area_vitu2_query_pane_t2_ParamLimits

0xb572,	// (0x000789e7) area_vitu2_query_pane_t2

0xb586,	// (0x000789fb) area_vitu2_query_pane_t3_ParamLimits

0xb586,	// (0x000789fb) area_vitu2_query_pane_t3

0xe916,	// (0x0007bd8b) area_vitu2_query_pane_t4_ParamLimits

0xe916,	// (0x0007bd8b) area_vitu2_query_pane_t4

0xe93e,	// (0x0007bdb3) area_vitu2_query_pane_t5_ParamLimits

0xe93e,	// (0x0007bdb3) area_vitu2_query_pane_t5

0xe966,	// (0x0007bddb) area_vitu2_query_pane_t6_ParamLimits

0xe966,	// (0x0007bddb) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x0007cdd6) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x0007cdd6) area_vitu2_query_pane_t

0xb289,	// (0x000786fe) bg_button_pane_cp018

0xb5ae,	// (0x00078a23) bg_button_pane_cp021

0xb5ba,	// (0x00078a2f) bg_button_pane_cp022

0xb5dd,	// (0x00078a52) input_focus_pane_cp09

0x8188,	// (0x000755fd) aid_size_touch_mv_arrow_left

0x81b3,	// (0x00075628) aid_size_touch_mv_arrow_right

0xaded,	// (0x00078262) main_cset_slider_pane_g16_ParamLimits

0xaded,	// (0x00078262) main_cset_slider_pane_g16

0xadf9,	// (0x0007826e) main_cset_slider_pane_g17_ParamLimits

0xadf9,	// (0x0007826e) main_cset_slider_pane_g17

0xb4f0,	// (0x00078965) cell_cam4_burst_pane_g1_ParamLimits

0xebc8,	// (0x0007c03d) compa_mode_pane

0xafdb,	// (0x00078450) popup_vtel_slider_window_g3_ParamLimits

0xafdb,	// (0x00078450) popup_vtel_slider_window_g3

0xafef,	// (0x00078464) popup_vtel_slider_window_g4_ParamLimits

0xafef,	// (0x00078464) popup_vtel_slider_window_g4

0xb003,	// (0x00078478) popup_vtel_slider_window_t1_ParamLimits

0xb003,	// (0x00078478) popup_vtel_slider_window_t1

0xebc8,	// (0x0007c03d) main_cl_pane

0x8d52,	// (0x000761c7) popup_imed_adjust2_window_ParamLimits

0x2739,	// (0x0006fbae) bg_tb_trans_pane_cp05_ParamLimits

0x4474,	// (0x000718e9) popup_imed_adjust2_window_g1_ParamLimits

0x4483,	// (0x000718f8) popup_imed_adjust2_window_g2_ParamLimits

0x4483,	// (0x000718f8) popup_imed_adjust2_window_g2

0x448f,	// (0x00071904) popup_imed_adjust2_window_g3_ParamLimits

0x448f,	// (0x00071904) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x0007cb56) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x0007cb56) popup_imed_adjust2_window_g

0x449b,	// (0x00071910) popup_imed_adjust2_window_t1_ParamLimits

0x44b3,	// (0x00071928) slider_imed_adjust_pane_ParamLimits

0x44c7,	// (0x0007193c) slider_imed_adjust_pane_g1_ParamLimits

0x44d7,	// (0x0007194c) slider_imed_adjust_pane_g2_ParamLimits

0x44e7,	// (0x0007195c) slider_imed_adjust_pane_g3_ParamLimits

0x44f8,	// (0x0007196d) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x0007cb5d) slider_imed_adjust_pane_g_ParamLimits

0xa4ce,	// (0x00077943) aid_touch_area_cam4_ParamLimits

0xa4ce,	// (0x00077943) aid_touch_area_cam4

0xa4de,	// (0x00077953) battery_pane_cp01

0xa565,	// (0x000779da) main_camera4_pane_g6_ParamLimits

0xa565,	// (0x000779da) main_camera4_pane_g6

0xa583,	// (0x000779f8) main_camera4_pane_t2_ParamLimits

0xa583,	// (0x000779f8) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x0007cc55) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x0007cc55) main_camera4_pane_t

0xa606,	// (0x00077a7b) aid_touch_area_vid4_ParamLimits

0xa606,	// (0x00077a7b) aid_touch_area_vid4

0xa646,	// (0x00077abb) main_video4_pane_g5_ParamLimits

0xa646,	// (0x00077abb) main_video4_pane_g5

0xa66c,	// (0x00077ae1) vid4_progress_pane_ParamLimits

0xa66c,	// (0x00077ae1) vid4_progress_pane

0xe5d6,	// (0x0007ba4b) main_cset_slider_pane_g18_ParamLimits

0xe5d6,	// (0x0007ba4b) main_cset_slider_pane_g18

0xe7c8,	// (0x0007bc3d) cell_cam4_burst_pane_g2_ParamLimits

0xe7c8,	// (0x0007bc3d) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x0007cdaa) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x0007cdaa) cell_cam4_burst_pane_g

0xb5ee,	// (0x00078a63) bg_cl_pane_ParamLimits

0xb5ee,	// (0x00078a63) bg_cl_pane

0xb5fa,	// (0x00078a6f) cl_header_pane_ParamLimits

0xb5fa,	// (0x00078a6f) cl_header_pane

0xb606,	// (0x00078a7b) cl_listscroll_pane_ParamLimits

0xb606,	// (0x00078a7b) cl_listscroll_pane

0xe9b2,	// (0x0007be27) bg_cl_pane_g1

0xe9ba,	// (0x0007be2f) bg_cl_pane_g2

0xe9c2,	// (0x0007be37) bg_cl_pane_g3

0xe9ca,	// (0x0007be3f) bg_cl_pane_g4

0xe9d2,	// (0x0007be47) bg_cl_pane_g5

0xe9da,	// (0x0007be4f) bg_cl_pane_g6

0xe9e2,	// (0x0007be57) bg_cl_pane_g7

0xe9ea,	// (0x0007be5f) bg_cl_pane_g8

0xe9f2,	// (0x0007be67) bg_cl_pane_g9

0x0008,

0xf970,	// (0x0007cde5) bg_cl_pane_g

0xb612,	// (0x00078a87) aid_height_cl_leading_ParamLimits

0xb612,	// (0x00078a87) aid_height_cl_leading

0xb61e,	// (0x00078a93) aid_height_cl_text_ParamLimits

0xb61e,	// (0x00078a93) aid_height_cl_text

0x1ac5,	// (0x0006ef3a) bg_cl_header_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) bg_cl_header_pane

0xb636,	// (0x00078aab) cl_header_pane_g1_ParamLimits

0xb636,	// (0x00078aab) cl_header_pane_g1

0xb643,	// (0x00078ab8) cl_header_pane_t1_ParamLimits

0xb643,	// (0x00078ab8) cl_header_pane_t1

0xe9fa,	// (0x0007be6f) cl_list_pane

0xe5a9,	// (0x0007ba1e) hc_scroll_pane_cp01

0x1f56,	// (0x0006f3cb) bg_cl_header_pane_g1

0xe465,	// (0x0007b8da) bg_cl_header_pane_g2

0x1f76,	// (0x0006f3eb) bg_cl_header_pane_g3

0xe475,	// (0x0007b8ea) bg_cl_header_pane_g4

0xe46d,	// (0x0007b8e2) bg_cl_header_pane_g5

0xe6e3,	// (0x0007bb58) bg_cl_header_pane_g6

0xe48d,	// (0x0007b902) bg_cl_header_pane_g7

0xe495,	// (0x0007b90a) bg_cl_header_pane_g8

0xe485,	// (0x0007b8fa) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x0007cdf8) bg_cl_header_pane_g

0xb655,	// (0x00078aca) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb655,	// (0x00078aca) hc_cl_list_double_graphic_heading_pane

0xb665,	// (0x00078ada) hc_cl_list_single_graphic_pane_ParamLimits

0xb665,	// (0x00078ada) hc_cl_list_single_graphic_pane

0xb677,	// (0x00078aec) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb677,	// (0x00078aec) hc_cl_list_single_graphic_pane_g1

0xb683,	// (0x00078af8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb683,	// (0x00078af8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x0007ce0b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x0007ce0b) hc_cl_list_single_graphic_pane_g

0xb697,	// (0x00078b0c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb697,	// (0x00078b0c) hc_cl_list_single_graphic_pane_t1

0xb677,	// (0x00078aec) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb677,	// (0x00078aec) hc_cl_list_double_graphic_heading_pane_g1

0xb6ac,	// (0x00078b21) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb6ac,	// (0x00078b21) hc_cl_list_double_graphic_heading_pane_g2

0xb6c0,	// (0x00078b35) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb6c0,	// (0x00078b35) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0007ce10) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0007ce10) hc_cl_list_double_graphic_heading_pane_g

0xb6d4,	// (0x00078b49) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb6d4,	// (0x00078b49) hc_cl_list_double_graphic_heading_pane_t1

0xb6e9,	// (0x00078b5e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb6e9,	// (0x00078b5e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x0007ce17) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x0007ce17) hc_cl_list_double_graphic_heading_pane_t

0xb706,	// (0x00078b7b) vid4_progress_pane_g1

0xb716,	// (0x00078b8b) vid4_progress_pane_g2

0xb726,	// (0x00078b9b) vid4_progress_pane_g3

0xb738,	// (0x00078bad) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0007ce1c) vid4_progress_pane_g

0xb756,	// (0x00078bcb) vid4_progress_pane_t1

0xb770,	// (0x00078be5) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x0007ce27) vid4_progress_pane_t

0xb79e,	// (0x00078c13) wait_bar_pane_cp07

0x3db2,	// (0x00071227) blid_firmament_pane_ParamLimits

0x3df5,	// (0x0007126a) popup_blid_sat_info2_window_g1

0x3e19,	// (0x0007128e) popup_blid_sat_info2_window_t3

0x3e27,	// (0x0007129c) popup_blid_sat_info2_window_t4

0x3e35,	// (0x000712aa) popup_blid_sat_info2_window_t5

0x3e43,	// (0x000712b8) popup_blid_sat_info2_window_t6

0x3e53,	// (0x000712c8) popup_blid_sat_info2_window_t7

0x3e61,	// (0x000712d6) popup_blid_sat_info2_window_t8

0x3e6f,	// (0x000712e4) popup_blid_sat_info2_window_t9

0x3e7d,	// (0x000712f2) popup_blid_sat_info2_window_t10

0x3f44,	// (0x000713b9) aid_firma_cardinal_ParamLimits

0x3f58,	// (0x000713cd) blid_firmament_pane_t1_ParamLimits

0x3f6f,	// (0x000713e4) blid_firmament_pane_t2_ParamLimits

0x3f86,	// (0x000713fb) blid_firmament_pane_t3_ParamLimits

0x3f9d,	// (0x00071412) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x0007ca4f) blid_firmament_pane_t_ParamLimits

0x3fb4,	// (0x00071429) blid_sat_info_pane_ParamLimits

0xefeb,	// (0x0007c460) main_cam_set_pane_ParamLimits

0x9bd5,	// (0x0007704a) aid_size_cell_colour_35_ParamLimits

0x9bef,	// (0x00077064) aid_size_cell_colour_112_ParamLimits

0x9c06,	// (0x0007707b) aid_size_cell_effect_ParamLimits

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp02_ParamLimits

0x23aa,	// (0x0006f81f) heading_imed_pane_ParamLimits

0x9c20,	// (0x00077095) listscroll_imed_pane_ParamLimits

0x32e5,	// (0x0007075a) popup_call2_audio_first_window_g5_ParamLimits

0x32e5,	// (0x0007075a) popup_call2_audio_first_window_g5

0xa1d4,	// (0x00077649) aid_size_touch_image3_arrow_left_ParamLimits

0xa1d4,	// (0x00077649) aid_size_touch_image3_arrow_left

0xa1ea,	// (0x0007765f) aid_size_touch_image3_arrow_right_ParamLimits

0xa1ea,	// (0x0007765f) aid_size_touch_image3_arrow_right

0xb789,	// (0x00078bfe) vid4_progress_pane_t3

0x9d73,	// (0x000771e8) main_hwr_training_symbol_option_pane_ParamLimits

0x9d73,	// (0x000771e8) main_hwr_training_symbol_option_pane

0x461c,	// (0x00071a91) popup_hwr_training_preview_window_ParamLimits

0x461c,	// (0x00071a91) popup_hwr_training_preview_window

0x9dd4,	// (0x00077249) hwr_training_navi_pane_g5_ParamLimits

0x9dd4,	// (0x00077249) hwr_training_navi_pane_g5

0xe453,	// (0x0007b8c8) popup_char_count_window

0x1ac5,	// (0x0006ef3a) bg_popup_sub_pane_cp20_ParamLimits

0xb0f6,	// (0x0007856b) list_vitu2_match_list_pane_ParamLimits

0xb102,	// (0x00078577) vitu2_page_scroll_pane_ParamLimits

0xb102,	// (0x00078577) vitu2_page_scroll_pane

0xea0c,	// (0x0007be81) list_single_hwr_training_symbol_option_pane_ParamLimits

0xea0c,	// (0x0007be81) list_single_hwr_training_symbol_option_pane

0xea1f,	// (0x0007be94) list_single_hwr_training_symbol_option_pane_g1

0xea27,	// (0x0007be9c) list_single_hwr_training_symbol_option_pane_t1

0xea35,	// (0x0007beaa) bg_button_pane_cp023

0xea3e,	// (0x0007beb3) bg_button_pane_cp024

0xea71,	// (0x0007bee6) vitu2_page_scroll_pane_g1

0xea79,	// (0x0007beee) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0007ce2e) vitu2_page_scroll_pane_g

0xea81,	// (0x0007bef6) vitu2_page_scroll_pane_t1

0xe312,	// (0x0007b787) popup_char_count_window_g1

0xea90,	// (0x0007bf05) popup_char_count_window_g2

0xe31b,	// (0x0007b790) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0007ce33) popup_char_count_window_g

0xea99,	// (0x0007bf0e) popup_char_count_window_t1

0xebc8,	// (0x0007c03d) main_vded2_pane

0x4460,	// (0x000718d5) aid_size_cell_imed_line

0x446a,	// (0x000718df) grid_imed_line_width_pane

0xa6e0,	// (0x00077b55) vid4_indicators_pane_g4

0xeaa7,	// (0x0007bf1c) cell_imed_line_width_pane_ParamLimits

0xeaa7,	// (0x0007bf1c) cell_imed_line_width_pane

0xeabd,	// (0x0007bf32) cell_imed_line_width_pane_g1

0xeac6,	// (0x0007bf3b) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x0007ce3a) cell_imed_line_width_pane_g

0xb7b9,	// (0x00078c2e) main_vded2_pane_g1_ParamLimits

0xb7b9,	// (0x00078c2e) main_vded2_pane_g1

0xb7c8,	// (0x00078c3d) main_vded2_pane_g2_ParamLimits

0xb7c8,	// (0x00078c3d) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0007ce3f) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0007ce3f) main_vded2_pane_g

0xb7d6,	// (0x00078c4b) vded2_slider_pane_ParamLimits

0xb7d6,	// (0x00078c4b) vded2_slider_pane

0xb7e3,	// (0x00078c58) aid_size_touch_vded2_end

0xb7ed,	// (0x00078c62) aid_size_touch_vded2_playhead

0xeace,	// (0x0007bf43) aid_size_touch_vded2_start

0xead6,	// (0x0007bf4b) vded2_slider_bg_pane

0xeadf,	// (0x0007bf54) vded2_slider_pane_g1

0xeae8,	// (0x0007bf5d) vded2_slider_pane_g2

0xb7f5,	// (0x00078c6a) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x0007ce44) vded2_slider_pane_g

0xeaf0,	// (0x0007bf65) vded2_slider_bg_pane_g1

0xeaf9,	// (0x0007bf6e) vded2_slider_bg_pane_g2

0xeb02,	// (0x0007bf77) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x0007ce4b) vded2_slider_bg_pane_g

0x85e6,	// (0x00075a5b) aid_postcard_touch_down_pane_ParamLimits

0x85e6,	// (0x00075a5b) aid_postcard_touch_down_pane

0x85f6,	// (0x00075a6b) aid_postcard_touch_up_pane_ParamLimits

0x85f6,	// (0x00075a6b) aid_postcard_touch_up_pane

0xebc8,	// (0x0007c03d) main_blid2_pane

0x8cd1,	// (0x00076146) popup_blid2_search_window

0xebc8,	// (0x0007c03d) blid2_gps_pane

0xebc8,	// (0x0007c03d) blid2_navig_pane

0xebc8,	// (0x0007c03d) blid2_search_pane

0xebc8,	// (0x0007c03d) blid2_tripm_pane

0xb7fe,	// (0x00078c73) blid2_search_pane_g1_ParamLimits

0xb7fe,	// (0x00078c73) blid2_search_pane_g1

0xb80a,	// (0x00078c7f) blid2_search_pane_t1_ParamLimits

0xb80a,	// (0x00078c7f) blid2_search_pane_t1

0xb81c,	// (0x00078c91) aid_size_cell_blid2_gps_ParamLimits

0xb81c,	// (0x00078c91) aid_size_cell_blid2_gps

0xb82c,	// (0x00078ca1) blid2_gps_pane_g1_ParamLimits

0xb82c,	// (0x00078ca1) blid2_gps_pane_g1

0xb838,	// (0x00078cad) grid_blid2_satellite_pane_ParamLimits

0xb838,	// (0x00078cad) grid_blid2_satellite_pane

0xb846,	// (0x00078cbb) blid2_navig_pane_g1_ParamLimits

0xb846,	// (0x00078cbb) blid2_navig_pane_g1

0xb852,	// (0x00078cc7) blid2_navig_pane_t1_ParamLimits

0xb852,	// (0x00078cc7) blid2_navig_pane_t1

0xb864,	// (0x00078cd9) blid2_navig_pane_t2_ParamLimits

0xb864,	// (0x00078cd9) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x0007ce52) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x0007ce52) blid2_navig_pane_t

0xb876,	// (0x00078ceb) blid2_navig_ring_pane_ParamLimits

0xb876,	// (0x00078ceb) blid2_navig_ring_pane

0xb886,	// (0x00078cfb) blid2_speed_pane_ParamLimits

0xb886,	// (0x00078cfb) blid2_speed_pane

0xb892,	// (0x00078d07) blid2_tripm_pane_g1_ParamLimits

0xb892,	// (0x00078d07) blid2_tripm_pane_g1

0xb8a2,	// (0x00078d17) blid2_tripm_pane_g2_ParamLimits

0xb8a2,	// (0x00078d17) blid2_tripm_pane_g2

0xb8ae,	// (0x00078d23) blid2_tripm_pane_g3_ParamLimits

0xb8ae,	// (0x00078d23) blid2_tripm_pane_g3

0xb8ba,	// (0x00078d2f) blid2_tripm_pane_g4_ParamLimits

0xb8ba,	// (0x00078d2f) blid2_tripm_pane_g4

0xb8c6,	// (0x00078d3b) blid2_tripm_pane_g5_ParamLimits

0xb8c6,	// (0x00078d3b) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x0007ce57) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x0007ce57) blid2_tripm_pane_g

0xb8e2,	// (0x00078d57) blid2_tripm_pane_t1_ParamLimits

0xb8e2,	// (0x00078d57) blid2_tripm_pane_t1

0xb8f4,	// (0x00078d69) blid2_tripm_pane_t2_ParamLimits

0xb8f4,	// (0x00078d69) blid2_tripm_pane_t2

0xb906,	// (0x00078d7b) blid2_tripm_pane_t3_ParamLimits

0xb906,	// (0x00078d7b) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x0007ce64) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x0007ce64) blid2_tripm_pane_t

0xb938,	// (0x00078dad) cell_blid2_satellite_pane_ParamLimits

0xb938,	// (0x00078dad) cell_blid2_satellite_pane

0xb956,	// (0x00078dcb) cell_blid2_satellite_pane_g1

0xeb0b,	// (0x0007bf80) cell_blid2_satellite_pane_t1

0x1b11,	// (0x0006ef86) blid2_speed_pane_g1

0xeb19,	// (0x0007bf8e) blid2_speed_pane_t1

0xeb27,	// (0x0007bf9c) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x0007ce6d) blid2_speed_pane_t

0x1b11,	// (0x0006ef86) blid2_navig_ring_pane_g1

0xb95f,	// (0x00078dd4) blid2_navig_ring_pane_g2

0xb967,	// (0x00078ddc) blid2_navig_ring_pane_g3

0xb96f,	// (0x00078de4) blid2_navig_ring_pane_g4

0xb977,	// (0x00078dec) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x0007ce72) blid2_navig_ring_pane_g

0xebc8,	// (0x0007c03d) bg_popup_window_pane_cp011

0xeb35,	// (0x0007bfaa) popup_blid2_search_window_g1

0xeb3d,	// (0x0007bfb2) popup_blid2_search_window_t1

0xeb4b,	// (0x0007bfc0) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x0007ce7d) popup_blid2_search_window_t

0x1e65,	// (0x0006f2da) main_browser_pane_g1

0x1b6f,	// (0x0006efe4) main_browser_pane_ParamLimits

0xefeb,	// (0x0007c460) bg_button_pane_cp011_ParamLimits

0xaa0e,	// (0x00077e83) cell_vitu2_function_pane_g1_ParamLimits

0x2739,	// (0x0006fbae) bg_popup_sub_pane_cp22_ParamLimits

0xb2a1,	// (0x00078716) input_focus_pane_cp08_ParamLimits

0xb2bd,	// (0x00078732) popup_vitu2_query_button_pane_ParamLimits

0xb2bd,	// (0x00078732) popup_vitu2_query_button_pane

0xb2cc,	// (0x00078741) popup_vitu2_query_input_button_pane

0xe71e,	// (0x0007bb93) popup_vitu2_query_window_g1_ParamLimits

0xb2d6,	// (0x0007874b) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0007cd7e) popup_vitu2_query_window_g_ParamLimits

0xebc8,	// (0x0007c03d) bg_button_pane_cp026

0xb97f,	// (0x00078df4) popup_vitu2_query_input_button_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp025

0xeb59,	// (0x0007bfce) popup_vitu2_query_button_pane_t1

0x9194,	// (0x00076609) main_mp3_pane_t6

0x91a4,	// (0x00076619) popup_slider_window_cp01

0xa5bb,	// (0x00077a30) cam4_battery_pane

0xa699,	// (0x00077b0e) cam4_battery_pane_cp02

0xb6fe,	// (0x00078b73) cam4_battery_pane_cp01

0xb6fe,	// (0x00078b73) cam4_battery_pane_cp03

0x1b11,	// (0x0006ef86) cam4_battery_pane_g1

0xeb67,	// (0x0007bfdc) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x0007ce82) cam4_battery_pane_g

0x3e8b,	// (0x00071300) popup_blid_sat_info2_window_t11

0x8188,	// (0x000755fd) aid_size_touch_mv_arrow_left_ParamLimits

0x81b3,	// (0x00075628) aid_size_touch_mv_arrow_right_ParamLimits

0x25c0,	// (0x0006fa35) navi_pane_g1_ParamLimits

0x81f2,	// (0x00075667) navi_pane_g2_ParamLimits

0x8220,	// (0x00075695) navi_pane_g3_ParamLimits

0xf311,	// (0x0007c786) navi_pane_g_ParamLimits

0x827a,	// (0x000756ef) navi_pane_mv_t1_ParamLimits

0x9c2c,	// (0x000770a1) grid_imed_effect_pane_ParamLimits

0x6d2f,	// (0x000741a4) aid_placing_vt_slider_lsc

0x1da3,	// (0x0006f218) aid_placing_vt_slider_prt

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp01_ParamLimits

0x40f3,	// (0x00071568) popup_image_details_window_g1_ParamLimits

0x4106,	// (0x0007157b) popup_image_details_window_g2_ParamLimits

0x411b,	// (0x00071590) popup_image_details_window_g3_ParamLimits

0x411b,	// (0x00071590) popup_image_details_window_g3

0xf61a,	// (0x0007ca8f) popup_image_details_window_g_ParamLimits

0x412f,	// (0x000715a4) popup_image_details_window_t1_ParamLimits

0x4141,	// (0x000715b6) popup_image_details_window_t2_ParamLimits

0x415a,	// (0x000715cf) popup_image_details_window_t3_ParamLimits

0x416e,	// (0x000715e3) popup_image_details_window_t4_ParamLimits

0x4189,	// (0x000715fe) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x0007ca96) popup_image_details_window_t_ParamLimits

0xb62a,	// (0x00078a9f) cl_header_name_pane_ParamLimits

0xb62a,	// (0x00078a9f) cl_header_name_pane

0xb987,	// (0x00078dfc) cl_header_name_pane_t1_ParamLimits

0xb987,	// (0x00078dfc) cl_header_name_pane_t1

0xb99e,	// (0x00078e13) cl_header_name_pane_t2_ParamLimits

0xb99e,	// (0x00078e13) cl_header_name_pane_t2

0xb9c8,	// (0x00078e3d) cl_header_name_pane_t3_ParamLimits

0xb9c8,	// (0x00078e3d) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x0007ce87) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x0007ce87) cl_header_name_pane_t

0x824b,	// (0x000756c0) navi_pane_mv_g2_ParamLimits

0xe3ef,	// (0x0007b864) field_vitu2_entry_pane_g1_ParamLimits

0xe3fb,	// (0x0007b870) field_vitu2_entry_pane_g2_ParamLimits

0x2717,	// (0x0006fb8c) field_vitu2_entry_pane_g3_ParamLimits

0x2717,	// (0x0006fb8c) field_vitu2_entry_pane_g3

0xf812,	// (0x0007cc87) field_vitu2_entry_pane_g_ParamLimits

0xa8d4,	// (0x00077d49) cell_vitu2_itu_pane_g1_ParamLimits

0xa8ec,	// (0x00077d61) cell_vitu2_itu_pane_g2_ParamLimits

0xa8ec,	// (0x00077d61) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x0007cc93) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x0007cc93) cell_vitu2_itu_pane_g

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp05_ParamLimits

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp05

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp03

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp04

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp10_ParamLimits

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp10

0xb5cb,	// (0x00078a40) bg_vkb2_func_pane_cp08

0xb289,	// (0x000786fe) bg_vkb2_func_pane_cp06

0xb5ae,	// (0x00078a23) bg_vkb2_func_pane_cp07

0xea47,	// (0x0007bebc) bg_vkb2_func_pane_cp11_ParamLimits

0xea47,	// (0x0007bebc) bg_vkb2_func_pane_cp11

0xea5c,	// (0x0007bed1) bg_vkb2_func_pane_cp12_ParamLimits

0xea5c,	// (0x0007bed1) bg_vkb2_func_pane_cp12

0xebc8,	// (0x0007c03d) bg_vkb2_func_pane_cp09

0xe465,	// (0x0007b8da) bg_vkb2_func_pane_g1

0x1f76,	// (0x0006f3eb) bg_vkb2_func_pane_g2

0xe46d,	// (0x0007b8e2) bg_vkb2_func_pane_g3

0xe475,	// (0x0007b8ea) bg_vkb2_func_pane_g4

0xe6e3,	// (0x0007bb58) bg_vkb2_func_pane_g5

0xe48d,	// (0x0007b902) bg_vkb2_func_pane_g6

0xe495,	// (0x0007b90a) bg_vkb2_func_pane_g7

0xe485,	// (0x0007b8fa) bg_vkb2_func_pane_g8

0x1f56,	// (0x0006f3cb) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0007ce8e) bg_vkb2_func_pane_g

0xb8d4,	// (0x00078d49) blid2_tripm_pane_g6_ParamLimits

0xb8d4,	// (0x00078d49) blid2_tripm_pane_g6

0xe330,	// (0x0007b7a5) mp4_progress_pane_g1

0xb92c,	// (0x00078da1) blid2_tripm_values_pane_ParamLimits

0xb92c,	// (0x00078da1) blid2_tripm_values_pane

0xb9ed,	// (0x00078e62) blid2_tripm_values_pane_t1

0xb9fb,	// (0x00078e70) blid2_tripm_values_pane_t2

0xeb71,	// (0x0007bfe6) blid2_tripm_values_pane_t3

0xba09,	// (0x00078e7e) blid2_tripm_values_pane_t4

0xba17,	// (0x00078e8c) blid2_tripm_values_pane_t5

0xba25,	// (0x00078e9a) blid2_tripm_values_pane_t6

0xeb7f,	// (0x0007bff4) blid2_tripm_values_pane_t7

0xba33,	// (0x00078ea8) blid2_tripm_values_pane_t8

0xba41,	// (0x00078eb6) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0007cea1) blid2_tripm_values_pane_t

0x6d6d,	// (0x000741e2) call_video_pane_t1_ParamLimits

0x6d8a,	// (0x000741ff) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0007c62f) call_video_pane_t_ParamLimits

0x55bf,	// (0x00072a34) msg_header_pane_g1_ParamLimits

0x280f,	// (0x0006fc84) msg_header_pane_g2_ParamLimits

0x280f,	// (0x0006fc84) msg_header_pane_g2

0x0001,

0xf3af,	// (0x0007c824) msg_header_pane_g_ParamLimits

0xf3af,	// (0x0007c824) msg_header_pane_g

0x1b6f,	// (0x0006efe4) main_clock2_pane_ParamLimits

0x99a5,	// (0x00076e1a) grid_clock2_toolbar_pane_ParamLimits

0x99a5,	// (0x00076e1a) grid_clock2_toolbar_pane

0x99a5,	// (0x00076e1a) listscroll_clock2_pane_ParamLimits

0x99a5,	// (0x00076e1a) listscroll_clock2_pane

0x9a54,	// (0x00076ec9) main_clock2_pane_t3_ParamLimits

0x9a54,	// (0x00076ec9) main_clock2_pane_t3

0x9a66,	// (0x00076edb) main_clock2_pane_t4_ParamLimits

0x9a66,	// (0x00076edb) main_clock2_pane_t4

0xeb8d,	// (0x0007c002) cell_clock2_toolbar_pane

0xeb95,	// (0x0007c00a) cell_clock2_toolbar_pane_cp01

0xeb95,	// (0x0007c00a) cell_clock2_toolbar_pane_cp02

0xeb9d,	// (0x0007c012) cell_clock2_toolbar_pane_cp03

0xeba5,	// (0x0007c01a) list_clock2_pane

0x2526,	// (0x0006f99b) scroll_pane_cp10

0xebad,	// (0x0007c022) list_single_clock2_pane_ParamLimits

0xebad,	// (0x0007c022) list_single_clock2_pane

0x1d4c,	// (0x0006f1c1) list_highlight_pane_cp08

0xebba,	// (0x0007c02f) list_single_clock2_pane_t1

0x02fd,	// (0x0006d772) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x0007ceb4) list_single_clock2_pane_t

0xebc8,	// (0x0007c03d) bg_button_pane_cp10

0x030b,	// (0x0006d780) cell_clock2_toolbar_pane_g1

0x8548,	// (0x000759bd) aid_main_viewer_pane_g1_ParamLimits

0x8548,	// (0x000759bd) aid_main_viewer_pane_g1

0x8554,	// (0x000759c9) aid_main_viewer_pane_g2_ParamLimits

0x8554,	// (0x000759c9) aid_main_viewer_pane_g2

0x8560,	// (0x000759d5) aid_main_viewer_pane_g3_ParamLimits

0x8560,	// (0x000759d5) aid_main_viewer_pane_g3

0x8571,	// (0x000759e6) aid_main_viewer_pane_g4_ParamLimits

0x8571,	// (0x000759e6) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x0007c835) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x0007c835) aid_main_viewer_pane_g

0x8ca9,	// (0x0007611e) main_calc_pane_ParamLimits

0x8cb6,	// (0x0007612b) main_dialer2_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_cam6_pane

0xebc8,	// (0x0007c03d) main_vid6_pane

0x99b1,	// (0x00076e26) listscroll_gen_pane_cp06_ParamLimits

0x99b1,	// (0x00076e26) listscroll_gen_pane_cp06

0x9a78,	// (0x00076eed) main_clock2_pane_t5_ParamLimits

0x9a78,	// (0x00076eed) main_clock2_pane_t5

0x9ac5,	// (0x00076f3a) aid_call2_pane_cp10_ParamLimits

0x9ad7,	// (0x00076f4c) aid_call_pane_cp10_ParamLimits

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ae9,	// (0x00076f5e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ae9,	// (0x00076f5e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2595,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x0007cb4b) popup_clock_analogue_window_cp10_g_ParamLimits

0x9aff,	// (0x00076f74) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe39a,	// (0x0007b80f) cell_dialer2_keypad_pane_g2_ParamLimits

0xe39a,	// (0x0007b80f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x0007cc26) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x0007cc26) cell_dialer2_keypad_pane_g

0x1b1b,	// (0x0006ef90) cell_dialer2_keypad_pane_t1

0xace2,	// (0x00078157) main_cset_text2_pane_ParamLimits

0xace2,	// (0x00078157) main_cset_text2_pane

0xe90a,	// (0x0007bd7f) area_vitu2_query_pane_g1_ParamLimits

0xb54d,	// (0x000789c2) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0007cdd1) area_vitu2_query_pane_g_ParamLimits

0xe98e,	// (0x0007be03) area_vitu2_query_pane_t7_ParamLimits

0xe98e,	// (0x0007be03) area_vitu2_query_pane_t7

0xb289,	// (0x000786fe) bg_button_pane_cp018_ParamLimits

0xb5ae,	// (0x00078a23) bg_button_pane_cp021_ParamLimits

0xb5ba,	// (0x00078a2f) bg_button_pane_cp022_ParamLimits

0xb5cb,	// (0x00078a40) bg_vkb2_func_pane_cp08_ParamLimits

0xb289,	// (0x000786fe) bg_vkb2_func_pane_cp06_ParamLimits

0xb5ae,	// (0x00078a23) bg_vkb2_func_pane_cp07_ParamLimits

0xb5dd,	// (0x00078a52) input_focus_pane_cp09_ParamLimits

0xba4f,	// (0x00078ec4) cam6_autofocus_pane_ParamLimits

0xba4f,	// (0x00078ec4) cam6_autofocus_pane

0xba71,	// (0x00078ee6) cam6_image_uncrop_pane_ParamLimits

0xba71,	// (0x00078ee6) cam6_image_uncrop_pane

0xbaa7,	// (0x00078f1c) cam6_indi_pane_ParamLimits

0xbaa7,	// (0x00078f1c) cam6_indi_pane

0xbac1,	// (0x00078f36) cam6_mode_pane_ParamLimits

0xbac1,	// (0x00078f36) cam6_mode_pane

0xbad5,	// (0x00078f4a) cam6_timer_pane_ParamLimits

0xbad5,	// (0x00078f4a) cam6_timer_pane

0xbae9,	// (0x00078f5e) cam6_zoom_pane_ParamLimits

0xbae9,	// (0x00078f5e) cam6_zoom_pane

0xbb05,	// (0x00078f7a) cam6_mode_pane_g1_ParamLimits

0xbb05,	// (0x00078f7a) cam6_mode_pane_g1

0xbb11,	// (0x00078f86) cam6_mode_pane_g2_ParamLimits

0xbb11,	// (0x00078f86) cam6_mode_pane_g2

0xbb1d,	// (0x00078f92) cam6_mode_pane_g3_ParamLimits

0xbb1d,	// (0x00078f92) cam6_mode_pane_g3

0xbb29,	// (0x00078f9e) cam6_mode_pane_g4_ParamLimits

0xbb29,	// (0x00078f9e) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x0007ceb9) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x0007ceb9) cam6_mode_pane_g

0x46b4,	// (0x00071b29) bg_tb_trans_pane_cp08_ParamLimits

0x46b4,	// (0x00071b29) bg_tb_trans_pane_cp08

0x0321,	// (0x0006d796) cam6_battery_pane_ParamLimits

0x0321,	// (0x0006d796) cam6_battery_pane

0x0337,	// (0x0006d7ac) cam6_indi_pane_g1_ParamLimits

0x0337,	// (0x0006d7ac) cam6_indi_pane_g1

0x0349,	// (0x0006d7be) cam6_indi_pane_g2_ParamLimits

0x0349,	// (0x0006d7be) cam6_indi_pane_g2

0x035b,	// (0x0006d7d0) cam6_indi_pane_g3_ParamLimits

0x035b,	// (0x0006d7d0) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0007cec2) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0007cec2) cam6_indi_pane_g

0x036d,	// (0x0006d7e2) cam6_indi_pane_t1_ParamLimits

0x036d,	// (0x0006d7e2) cam6_indi_pane_t1

0xa715,	// (0x00077b8a) cam6_autofocus_pane_g1

0xa71d,	// (0x00077b92) cam6_autofocus_pane_g2

0xa725,	// (0x00077b9a) cam6_autofocus_pane_g3

0xa72d,	// (0x00077ba2) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x0007cec9) cam6_autofocus_pane_g

0x0393,	// (0x0006d808) cam6_timer_pane_g1

0x039b,	// (0x0006d810) cam6_timer_pane_t1

0x03a9,	// (0x0006d81e) cam6_zoom_cont_pane

0x03b1,	// (0x0006d826) cam6_zoom_pane_g1

0x03ba,	// (0x0006d82f) cam6_zoom_pane_g2

0xbb35,	// (0x00078faa) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x0007ced2) cam6_zoom_pane_g

0x1b11,	// (0x0006ef86) cam6_battery_pane_g1

0x1b11,	// (0x0006ef86) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0007c501) cam6_battery_pane_g

0x03b1,	// (0x0006d826) cam6_zoom_cont_pane_g1

0x03ba,	// (0x0006d82f) cam6_zoom_cont_pane_g2

0x03c3,	// (0x0006d838) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x0007ced9) cam6_zoom_cont_pane_g

0xbb53,	// (0x00078fc8) cam6_mode_pane_cp_ParamLimits

0xbb53,	// (0x00078fc8) cam6_mode_pane_cp

0xbb67,	// (0x00078fdc) cam6_zoom_pane_cp_ParamLimits

0xbb67,	// (0x00078fdc) cam6_zoom_pane_cp

0xbb83,	// (0x00078ff8) vid6_image_uncrop_cif_pane_ParamLimits

0xbb83,	// (0x00078ff8) vid6_image_uncrop_cif_pane

0xbbaf,	// (0x00079024) vid6_image_uncrop_nhd_pane_ParamLimits

0xbbaf,	// (0x00079024) vid6_image_uncrop_nhd_pane

0xbbce,	// (0x00079043) vid6_image_uncrop_vga_pane_ParamLimits

0xbbce,	// (0x00079043) vid6_image_uncrop_vga_pane

0xbbed,	// (0x00079062) vid6_image_uncrop_wvga_pane_ParamLimits

0xbbed,	// (0x00079062) vid6_image_uncrop_wvga_pane

0xbc0c,	// (0x00079081) vid6_indi_pane_ParamLimits

0xbc0c,	// (0x00079081) vid6_indi_pane

0x46b4,	// (0x00071b29) bg_tb_trans_pane_cp09_ParamLimits

0x46b4,	// (0x00071b29) bg_tb_trans_pane_cp09

0x03db,	// (0x0006d850) cam6_battery_pane_cp_ParamLimits

0x03db,	// (0x0006d850) cam6_battery_pane_cp

0x03e7,	// (0x0006d85c) vid6_indi_pane_g1_ParamLimits

0x03e7,	// (0x0006d85c) vid6_indi_pane_g1

0x03f9,	// (0x0006d86e) vid6_indi_pane_g2_ParamLimits

0x03f9,	// (0x0006d86e) vid6_indi_pane_g2

0x040b,	// (0x0006d880) vid6_indi_pane_g3_ParamLimits

0x040b,	// (0x0006d880) vid6_indi_pane_g3

0x0422,	// (0x0006d897) vid6_indi_pane_g4_ParamLimits

0x0422,	// (0x0006d897) vid6_indi_pane_g4

0x0439,	// (0x0006d8ae) vid6_indi_pane_g5_ParamLimits

0x0439,	// (0x0006d8ae) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0007cee0) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0007cee0) vid6_indi_pane_g

0x0453,	// (0x0006d8c8) vid6_indi_pane_t1_ParamLimits

0x0453,	// (0x0006d8c8) vid6_indi_pane_t1

0x0469,	// (0x0006d8de) vid6_indi_pane_t2_ParamLimits

0x0469,	// (0x0006d8de) vid6_indi_pane_t2

0x0491,	// (0x0006d906) vid6_indi_pane_t3_ParamLimits

0x0491,	// (0x0006d906) vid6_indi_pane_t3

0x04b9,	// (0x0006d92e) vid6_indi_pane_t4_ParamLimits

0x04b9,	// (0x0006d92e) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x0007ceeb) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x0007ceeb) vid6_indi_pane_t

0x04dd,	// (0x0006d952) wait_bar_pane_cp08

0xbc31,	// (0x000790a6) main_cset_text2_pane_t1_ParamLimits

0xbc31,	// (0x000790a6) main_cset_text2_pane_t1

0xbb3e,	// (0x00078fb3) listscroll_gen_pane_cp06_t1_ParamLimits

0xbb3e,	// (0x00078fb3) listscroll_gen_pane_cp06_t1

0xebc8,	// (0x0007c03d) main_cam6_set_pane

0x1ad3,	// (0x0006ef48) bg_tb_trans_pane_cp06_ParamLimits

0xa5c3,	// (0x00077a38) cam4_indicators_pane_g1_ParamLimits

0xa5d4,	// (0x00077a49) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x0007cc63) cam4_indicators_pane_g_ParamLimits

0xa5ec,	// (0x00077a61) cam4_indicators_pane_t1_ParamLimits

0xefeb,	// (0x0007c460) bg_tb_trans_pane_cp07_ParamLimits

0xa6a3,	// (0x00077b18) vid4_indicators_pane_g1_ParamLimits

0xa6b9,	// (0x00077b2e) vid4_indicators_pane_g2_ParamLimits

0xa6cd,	// (0x00077b42) vid4_indicators_pane_g3_ParamLimits

0xa6e0,	// (0x00077b55) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x0007cc75) vid4_indicators_pane_g_ParamLimits

0xa6fe,	// (0x00077b73) vid4_indicators_pane_t1_ParamLimits

0xb706,	// (0x00078b7b) vid4_progress_pane_g1_ParamLimits

0xb716,	// (0x00078b8b) vid4_progress_pane_g2_ParamLimits

0xb726,	// (0x00078b9b) vid4_progress_pane_g3_ParamLimits

0xb738,	// (0x00078bad) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0007ce1c) vid4_progress_pane_g_ParamLimits

0xb756,	// (0x00078bcb) vid4_progress_pane_t1_ParamLimits

0xb770,	// (0x00078be5) vid4_progress_pane_t2_ParamLimits

0xb789,	// (0x00078bfe) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x0007ce27) vid4_progress_pane_t_ParamLimits

0xb79e,	// (0x00078c13) wait_bar_pane_cp07_ParamLimits

0xbc58,	// (0x000790cd) main_cam6_set_pane_g2_ParamLimits

0xbc58,	// (0x000790cd) main_cam6_set_pane_g2

0xbc64,	// (0x000790d9) main_cset6_listscroll_pane_ParamLimits

0xbc64,	// (0x000790d9) main_cset6_listscroll_pane

0xbc91,	// (0x00079106) main_cset6_slider_pane_ParamLimits

0xbc91,	// (0x00079106) main_cset6_slider_pane

0xbc9d,	// (0x00079112) main_cset6_text2_pane_ParamLimits

0xbc9d,	// (0x00079112) main_cset6_text2_pane

0x04ec,	// (0x0006d961) main_cset6_text_pane

0x04f4,	// (0x0006d969) main_cset_list_pane_copy1_ParamLimits

0x04f4,	// (0x0006d969) main_cset_list_pane_copy1

0x0504,	// (0x0006d979) scroll_pane_cp028_copy1

0xbcb0,	// (0x00079125) cset_list_set_pane_copy1

0xbcc0,	// (0x00079135) aid_position_infowindow_above_copy1

0xbcc8,	// (0x0007913d) aid_position_infowindow_below_copy1

0xbcd0,	// (0x00079145) cset_list_set_pane_g1_copy1

0x56d3,	// (0x00072b48) cset_list_set_pane_g3_copy1_ParamLimits

0x56d3,	// (0x00072b48) cset_list_set_pane_g3_copy1

0x56e2,	// (0x00072b57) cset_list_set_pane_t1_copy1_ParamLimits

0x56e2,	// (0x00072b57) cset_list_set_pane_t1_copy1

0xefeb,	// (0x0007c460) list_highlight_pane_cp021_copy1_ParamLimits

0xefeb,	// (0x0007c460) list_highlight_pane_cp021_copy1

0x050d,	// (0x0006d982) cset6_slider_pane_ParamLimits

0x050d,	// (0x0006d982) cset6_slider_pane

0x0539,	// (0x0006d9ae) main_cset6_slider_pane_g1_ParamLimits

0x0539,	// (0x0006d9ae) main_cset6_slider_pane_g1

0xbcd8,	// (0x0007914d) main_cset6_slider_pane_g2_ParamLimits

0xbcd8,	// (0x0007914d) main_cset6_slider_pane_g2

0x0561,	// (0x0006d9d6) main_cset6_slider_pane_g3_ParamLimits

0x0561,	// (0x0006d9d6) main_cset6_slider_pane_g3

0xbd00,	// (0x00079175) main_cset6_slider_pane_g4_ParamLimits

0xbd00,	// (0x00079175) main_cset6_slider_pane_g4

0xbd0c,	// (0x00079181) main_cset6_slider_pane_g5_ParamLimits

0xbd0c,	// (0x00079181) main_cset6_slider_pane_g5

0xe5be,	// (0x0007ba33) main_cset6_slider_pane_g7_ParamLimits

0xe5be,	// (0x0007ba33) main_cset6_slider_pane_g7

0xe5ca,	// (0x0007ba3f) main_cset6_slider_pane_g8_ParamLimits

0xe5ca,	// (0x0007ba3f) main_cset6_slider_pane_g8

0xbd18,	// (0x0007918d) main_cset6_slider_pane_g9_ParamLimits

0xbd18,	// (0x0007918d) main_cset6_slider_pane_g9

0xbd24,	// (0x00079199) main_cset6_slider_pane_g10_ParamLimits

0xbd24,	// (0x00079199) main_cset6_slider_pane_g10

0xbd30,	// (0x000791a5) main_cset6_slider_pane_g11_ParamLimits

0xbd30,	// (0x000791a5) main_cset6_slider_pane_g11

0xbd3c,	// (0x000791b1) main_cset6_slider_pane_g12_ParamLimits

0xbd3c,	// (0x000791b1) main_cset6_slider_pane_g12

0xbd48,	// (0x000791bd) main_cset6_slider_pane_g13_ParamLimits

0xbd48,	// (0x000791bd) main_cset6_slider_pane_g13

0xbd54,	// (0x000791c9) main_cset6_slider_pane_g14_ParamLimits

0xbd54,	// (0x000791c9) main_cset6_slider_pane_g14

0xbd60,	// (0x000791d5) main_cset6_slider_pane_g15_ParamLimits

0xbd60,	// (0x000791d5) main_cset6_slider_pane_g15

0xbd78,	// (0x000791ed) main_cset6_slider_pane_g16_ParamLimits

0xbd78,	// (0x000791ed) main_cset6_slider_pane_g16

0xbd84,	// (0x000791f9) main_cset6_slider_pane_g17_ParamLimits

0xbd84,	// (0x000791f9) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x0007cef4) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x0007cef4) main_cset6_slider_pane_g

0x056d,	// (0x0006d9e2) main_cset6_slider_pane_t1_ParamLimits

0x056d,	// (0x0006d9e2) main_cset6_slider_pane_t1

0xbda8,	// (0x0007921d) main_cset6_slider_pane_t2_ParamLimits

0xbda8,	// (0x0007921d) main_cset6_slider_pane_t2

0xbdd3,	// (0x00079248) main_cset6_slider_pane_t3_ParamLimits

0xbdd3,	// (0x00079248) main_cset6_slider_pane_t3

0xbdfe,	// (0x00079273) main_cset6_slider_pane_t4_ParamLimits

0xbdfe,	// (0x00079273) main_cset6_slider_pane_t4

0xbe29,	// (0x0007929e) main_cset6_slider_pane_t5_ParamLimits

0xbe29,	// (0x0007929e) main_cset6_slider_pane_t5

0x05ae,	// (0x0006da23) main_cset6_slider_pane_t7_ParamLimits

0x05ae,	// (0x0006da23) main_cset6_slider_pane_t7

0xbe54,	// (0x000792c9) main_cset6_slider_pane_t8_ParamLimits

0xbe54,	// (0x000792c9) main_cset6_slider_pane_t8

0xbe78,	// (0x000792ed) main_cset6_slider_pane_t9_ParamLimits

0xbe78,	// (0x000792ed) main_cset6_slider_pane_t9

0xbe9c,	// (0x00079311) main_cset6_slider_pane_t10_ParamLimits

0xbe9c,	// (0x00079311) main_cset6_slider_pane_t10

0xbec0,	// (0x00079335) main_cset6_slider_pane_t11_ParamLimits

0xbec0,	// (0x00079335) main_cset6_slider_pane_t11

0x05e4,	// (0x0006da59) main_cset6_slider_pane_t14_ParamLimits

0x05e4,	// (0x0006da59) main_cset6_slider_pane_t14

0x061d,	// (0x0006da92) main_cset6_slider_pane_t15_ParamLimits

0x061d,	// (0x0006da92) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x0007cf19) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x0007cf19) main_cset6_slider_pane_t

0xe695,	// (0x0007bb0a) cset_slider_pane_g1_copy1

0xe69e,	// (0x0007bb13) cset_slider_pane_g2_copy1

0xe6a7,	// (0x0007bb1c) cset_slider_pane_g3_copy1

0xebc8,	// (0x0007c03d) bg_popup_sub_pane_cp011_copy1

0x065f,	// (0x0006dad4) main_cset_text_pane_g1_copy1

0xe732,	// (0x0007bba7) main_cset_text_pane_t1_copy1

0xe740,	// (0x0007bbb5) main_cset_text_pane_t2_copy1

0xe74e,	// (0x0007bbc3) main_cset_text_pane_t3_copy1

0xe75c,	// (0x0007bbd1) main_cset_text_pane_t4_copy1

0xe76a,	// (0x0007bbdf) main_cset_text_pane_t5_copy1

0x0667,	// (0x0006dadc) main_cset_text_pane_t6_copy1

0x0675,	// (0x0006daea) main_cset_text_pane_t7_copy1

0xbee4,	// (0x00079359) main_cset_text2_pane_t1_copy1

0xefeb,	// (0x0007c460) main_ncimui_pane

0x8d0f,	// (0x00076184) popup_query_ncimui_window_ParamLimits

0x8d0f,	// (0x00076184) popup_query_ncimui_window

0x92ed,	// (0x00076762) field_cale_ev2_pane_g4_ParamLimits

0x92ed,	// (0x00076762) field_cale_ev2_pane_g4

0x9ea0,	// (0x00077315) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9ea0,	// (0x00077315) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x0007cbfd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x0007cbfd) cell_video_dialer_keypad_pane_g

0x9eb8,	// (0x0007732d) cell_video_dialer_keypad_pane_t1

0xebc8,	// (0x0007c03d) bg_popup_window_pane_cp012

0x241f,	// (0x0006f894) heading_pane_cp06

0x06a1,	// (0x0006db16) ncim_query_content_pane

0xebc8,	// (0x0007c03d) bg_popup_heading_pane_cp01

0x06a9,	// (0x0006db1e) ncim_heading_pane_t1

0x06b7,	// (0x0006db2c) ncim_indicator_popup_pane

0x06c9,	// (0x0006db3e) ncim_query_button_pane

0x06df,	// (0x0006db54) ncim_query_content_pane_t1

0x06f1,	// (0x0006db66) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x0007cf5d) ncim_query_content_pane_t

0x072b,	// (0x0006dba0) ncim_query_list_pane

0x073d,	// (0x0006dbb2) ncim_query_popup_pane

0x06b7,	// (0x0006db2c) ncim_indicator_popup_pane_ParamLimits

0xc040,	// (0x000794b5) ncim_query_content_pane_g1_ParamLimits

0xc040,	// (0x000794b5) ncim_query_content_pane_g1

0x06df,	// (0x0006db54) ncim_query_content_pane_t1_ParamLimits

0x06f1,	// (0x0006db66) ncim_query_content_pane_t2_ParamLimits

0xc04c,	// (0x000794c1) ncim_query_content_pane_t3_ParamLimits

0xc04c,	// (0x000794c1) ncim_query_content_pane_t3

0xc069,	// (0x000794de) ncim_query_content_pane_t4_ParamLimits

0xc069,	// (0x000794de) ncim_query_content_pane_t4

0xc086,	// (0x000794fb) ncim_query_content_pane_t5_ParamLimits

0xc086,	// (0x000794fb) ncim_query_content_pane_t5

0x0703,	// (0x0006db78) ncim_query_content_pane_t6_ParamLimits

0x0703,	// (0x0006db78) ncim_query_content_pane_t6

0xfae8,	// (0x0007cf5d) ncim_query_content_pane_t_ParamLimits

0x072b,	// (0x0006dba0) ncim_query_list_pane_ParamLimits

0x073d,	// (0x0006dbb2) ncim_query_popup_pane_ParamLimits

0x0751,	// (0x0006dbc6) wait_bar_pane_cp04

0xebc8,	// (0x0007c03d) input_focus_pane_cp011

0x0759,	// (0x0006dbce) ncim_query_popup_pane_t1

0x0767,	// (0x0006dbdc) ncim_list_query_list_pane_ParamLimits

0x0767,	// (0x0006dbdc) ncim_list_query_list_pane

0xebc8,	// (0x0007c03d) bg_button_pane_cp027

0x077a,	// (0x0006dbef) ncim_query_button_pane_g1

0xebc8,	// (0x0007c03d) list_highlight_pane_cp012

0x0784,	// (0x0006dbf9) ncim_list_query_list_pane_g1

0x078c,	// (0x0006dc01) ncim_list_query_list_pane_t1

0xa5e0,	// (0x00077a55) cam4_indicators_pane_g3_ParamLimits

0xa5e0,	// (0x00077a55) cam4_indicators_pane_g3

0xa6ec,	// (0x00077b61) vid4_indicators_pane_g5_ParamLimits

0xa6ec,	// (0x00077b61) vid4_indicators_pane_g5

0xb747,	// (0x00078bbc) vid4_progress_pane_g5_ParamLimits

0xb747,	// (0x00078bbc) vid4_progress_pane_g5

0xbf16,	// (0x0007938b) main_ncimui_pane_g1

0xbf82,	// (0x000793f7) ncimui_group_query_pane_ParamLimits

0xbf82,	// (0x000793f7) ncimui_group_query_pane

0xbfdc,	// (0x00079451) ncimui_list_pane_ParamLimits

0xbfdc,	// (0x00079451) ncimui_list_pane

0xc003,	// (0x00079478) ncimui_text_pane_ParamLimits

0xc003,	// (0x00079478) ncimui_text_pane

0xc0a3,	// (0x00079518) ncimui_text_pane_t1_ParamLimits

0xc0a3,	// (0x00079518) ncimui_text_pane_t1

0x079a,	// (0x0006dc0f) ncimui_list_single_graphic_pane_ParamLimits

0x079a,	// (0x0006dc0f) ncimui_list_single_graphic_pane

0xc0c2,	// (0x00079537) ncimui_query_pane_ParamLimits

0xc0c2,	// (0x00079537) ncimui_query_pane

0xebc8,	// (0x0007c03d) list_highlight_pane_cp013

0x07aa,	// (0x0006dc1f) ncim_list_query_list_pane_t1_copy1

0x0784,	// (0x0006dbf9) ncim_list_single_graphic_pane_g1

0xc0d5,	// (0x0007954a) ncim_query_button_pane_cp01

0xc0e1,	// (0x00079556) ncim_query_entry_pane_ParamLimits

0xc0e1,	// (0x00079556) ncim_query_entry_pane

0xc0f4,	// (0x00079569) ncimui_query_pane_g1

0xc100,	// (0x00079575) ncimui_query_pane_t1_ParamLimits

0xc100,	// (0x00079575) ncimui_query_pane_t1

0xefeb,	// (0x0007c460) input_focus_pane_cp012

0x07b8,	// (0x0006dc2d) ncim_query_entry_pane_t1

0x1b6f,	// (0x0006efe4) main_im_pane_ParamLimits

0xefeb,	// (0x0007c460) main_mobtv_pane_ParamLimits

0xefeb,	// (0x0007c460) main_mobtv_pane

0xbd90,	// (0x00079205) main_cset6_slider_pane_g18_ParamLimits

0xbd90,	// (0x00079205) main_cset6_slider_pane_g18

0xbd9c,	// (0x00079211) main_cset6_slider_pane_g19_ParamLimits

0xbd9c,	// (0x00079211) main_cset6_slider_pane_g19

0x2717,	// (0x0006fb8c) bg_main_mobtv_pane_ParamLimits

0x2717,	// (0x0006fb8c) bg_main_mobtv_pane

0xc119,	// (0x0007958e) main_mobtv_info_pane

0xc124,	// (0x00079599) main_mobtv_loading_pane_ParamLimits

0xc124,	// (0x00079599) main_mobtv_loading_pane

0x07ca,	// (0x0006dc3f) main_mobtv_pg_channel_list_pane

0x07d4,	// (0x0006dc49) main_mobtv_pg_hdr_pane

0xc131,	// (0x000795a6) main_mobtv_programe_curr_pane_ParamLimits

0xc131,	// (0x000795a6) main_mobtv_programe_curr_pane

0xc13e,	// (0x000795b3) main_mobtv_programe_next_pane_ParamLimits

0xc13e,	// (0x000795b3) main_mobtv_programe_next_pane

0x07dd,	// (0x0006dc52) popup_mobtv_noti_window

0x1b11,	// (0x0006ef86) main_tv_pg_hdr_pane_g1

0x07e7,	// (0x0006dc5c) main_tv_pg_hdr_pane_g2

0x07ef,	// (0x0006dc64) main_tv_pg_hdr_pane_g3

0x07f7,	// (0x0006dc6c) main_tv_pg_hdr_pane_g4

0x07ff,	// (0x0006dc74) main_tv_pg_hdr_pane_g5

0x0809,	// (0x0006dc7e) main_tv_pg_hdr_pane_g6

0x0813,	// (0x0006dc88) main_tv_pg_hdr_pane_g7

0x081d,	// (0x0006dc92) main_tv_pg_hdr_pane_g8

0x0827,	// (0x0006dc9c) main_tv_pg_hdr_pane_g9

0x0831,	// (0x0006dca6) main_tv_pg_hdr_pane_g10

0x083b,	// (0x0006dcb0) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x0007cf6a) main_tv_pg_hdr_pane_g

0x0845,	// (0x0006dcba) main_tv_pg_hdr_pane_t1

0x0853,	// (0x0006dcc8) main_tv_pg_hdr_pane_t2

0x0861,	// (0x0006dcd6) main_tv_pg_hdr_pane_t3

0x0871,	// (0x0006dce6) main_tv_pg_hdr_pane_t4

0x0881,	// (0x0006dcf6) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x0007cf81) main_tv_pg_hdr_pane_t

0x0891,	// (0x0006dd06) single_mobtv_pg_channel_pane_ParamLimits

0x0891,	// (0x0006dd06) single_mobtv_pg_channel_pane

0x08a3,	// (0x0006dd18) single_mobtv_pg_channel_table_pane

0x08ac,	// (0x0006dd21) single_mobtv_pg_channel_thumb_pane

0x08b5,	// (0x0006dd2a) single_tv_pg_channel_pane_g1

0x08be,	// (0x0006dd33) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x0007cf8c) single_tv_pg_channel_pane_g

0x1ad3,	// (0x0006ef48) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1ad3,	// (0x0006ef48) bg_single_mobtv_pg_channel_thumb_pane

0x08c7,	// (0x0006dd3c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x08c7,	// (0x0006dd3c) single_mobtv_pg_channel_thumb_pane_g1

0x08d5,	// (0x0006dd4a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x08d5,	// (0x0006dd4a) single_mobtv_pg_channel_thumb_pane_g2

0x08e1,	// (0x0006dd56) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x08e1,	// (0x0006dd56) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x0007cf91) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x0007cf91) single_mobtv_pg_channel_thumb_pane_g

0x08ed,	// (0x0006dd62) single_mobtv_pg_channel_thumb_pane_t1

0x08fb,	// (0x0006dd70) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x0007cf98) single_mobtv_pg_channel_thumb_pane_t

0x1b11,	// (0x0006ef86) bg_single_mobtv_pg_channel_table_pane_g1

0x1b11,	// (0x0006ef86) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0007c501) bg_single_mobtv_pg_channel_table_pane_g

0x0909,	// (0x0006dd7e) single_mobtv_pg_channel_table_pane_t1

0x0917,	// (0x0006dd8c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x0007cf9d) single_mobtv_pg_channel_table_pane_t

0xc153,	// (0x000795c8) main_mobtv_info_pane_g1_ParamLimits

0xc153,	// (0x000795c8) main_mobtv_info_pane_g1

0xc16f,	// (0x000795e4) main_mobtv_info_pane_t1_ParamLimits

0xc16f,	// (0x000795e4) main_mobtv_info_pane_t1

0xc1e7,	// (0x0007965c) main_mobtv_info_pane_t2_ParamLimits

0xc1e7,	// (0x0007965c) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x0007cfa7) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x0007cfa7) main_mobtv_info_pane_t

0xc278,	// (0x000796ed) wait_bar_pane_cp05

0xc28a,	// (0x000796ff) main_mobtv_loading_pane_g1_ParamLimits

0xc28a,	// (0x000796ff) main_mobtv_loading_pane_g1

0xc296,	// (0x0007970b) main_mobtv_loading_pane_g2_ParamLimits

0xc296,	// (0x0007970b) main_mobtv_loading_pane_g2

0xc2a2,	// (0x00079717) main_mobtv_loading_pane_g3_ParamLimits

0xc2a2,	// (0x00079717) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0007cfae) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0007cfae) main_mobtv_loading_pane_g

0x0925,	// (0x0006dd9a) main_mobtv_loading_pane_t1_ParamLimits

0x0925,	// (0x0006dd9a) main_mobtv_loading_pane_t1

0x093d,	// (0x0006ddb2) main_mobtv_loading_pane_t2_ParamLimits

0x093d,	// (0x0006ddb2) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x0007cfb5) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x0007cfb5) main_mobtv_loading_pane_t

0xc2b0,	// (0x00079725) wait_bar_pane_cp06_ParamLimits

0xc2b0,	// (0x00079725) wait_bar_pane_cp06

0x0961,	// (0x0006ddd6) main_mobtv_programe_curr_pane_t1

0x096f,	// (0x0006dde4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x0007cfba) main_mobtv_programe_curr_pane_t

0x097d,	// (0x0006ddf2) main_mobtv_programe_next_pane_t1

0x098b,	// (0x0006de00) main_mobtv_programe_next_pane_t2

0x0999,	// (0x0006de0e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0007cfbf) main_mobtv_programe_next_pane_t

0xebc8,	// (0x0007c03d) bg_popup_mobtv_noti_window_pane

0x09a7,	// (0x0006de1c) popup_mobtv_noti_window_g1

0x09af,	// (0x0006de24) popup_mobtv_noti_window_t1

0x09bd,	// (0x0006de32) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x0007cfc6) popup_mobtv_noti_window_t

0x1b11,	// (0x0006ef86) bg_popup_mobtv_noti_window_pane_g1

0xebc8,	// (0x0007c03d) sc_clock_pane

0xebc8,	// (0x0007c03d) main_fs_bigclock_pane

0xb91a,	// (0x00078d8f) blid2_tripm_pane_t4_ParamLimits

0xb91a,	// (0x00078d8f) blid2_tripm_pane_t4

0x1ae1,	// (0x0006ef56) sc_clock_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) sc_clock_pane_g1

0x1b2f,	// (0x0006efa4) sc_clock_pane_t1_ParamLimits

0x1b2f,	// (0x0006efa4) sc_clock_pane_t1

0x1b2f,	// (0x0006efa4) sc_clock_pane_t2_ParamLimits

0x1b2f,	// (0x0006efa4) sc_clock_pane_t2

0x1b2f,	// (0x0006efa4) sc_clock_pane_t3_ParamLimits

0x1b2f,	// (0x0006efa4) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x0007cfcb) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x0007cfcb) sc_clock_pane_t

0xcbbc,	// (0x0007a031) main_fs_bigclock_indicator_pane_ParamLimits

0xcbbc,	// (0x0007a031) main_fs_bigclock_indicator_pane

0xc305,	// (0x0007977a) main_fs_bigclock_pane_g1_ParamLimits

0xc305,	// (0x0007977a) main_fs_bigclock_pane_g1

0xcbc8,	// (0x0007a03d) main_fs_bigclock_pane_t1_ParamLimits

0xcbc8,	// (0x0007a03d) main_fs_bigclock_pane_t1

0xcbda,	// (0x0007a04f) main_fs_bigclock_pane_t2_ParamLimits

0xcbda,	// (0x0007a04f) main_fs_bigclock_pane_t2

0xcbee,	// (0x0007a063) main_fs_bigclock_pane_t3_ParamLimits

0xcbee,	// (0x0007a063) main_fs_bigclock_pane_t3

0x0002,

0xfcd9,	// (0x0007d14e) main_fs_bigclock_pane_t_ParamLimits

0xfcd9,	// (0x0007d14e) main_fs_bigclock_pane_t

0x1051,	// (0x0006e4c6) main_fs_bigclock_indicator_pane_g1

0x06d1,	// (0x0006db46) ncim_query_content_pane_g2_ParamLimits

0x06d1,	// (0x0006db46) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x0007cf58) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x0007cf58) ncim_query_content_pane_g

0x1b2f,	// (0x0006efa4) sc_clock_pane_t4_ParamLimits

0x1b2f,	// (0x0006efa4) sc_clock_pane_t4

0xefeb,	// (0x0007c460) main_radioblah_pane

0xa49c,	// (0x00077911) cell_call4_button_pane_t1_copy1_ParamLimits

0xa49c,	// (0x00077911) cell_call4_button_pane_t1_copy1

0xbf32,	// (0x000793a7) main_ncimui_pane_t1_ParamLimits

0xbf32,	// (0x000793a7) main_ncimui_pane_t1

0xbf4c,	// (0x000793c1) main_ncimui_pane_t2_ParamLimits

0xbf4c,	// (0x000793c1) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x0007cf51) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x0007cf51) main_ncimui_pane_t

0x2739,	// (0x0006fbae) main_radioblah_anim_pane_ParamLimits

0x2739,	// (0x0006fbae) main_radioblah_anim_pane

0x2739,	// (0x0006fbae) main_radioblah_info_pane_ParamLimits

0x2739,	// (0x0006fbae) main_radioblah_info_pane

0x2725,	// (0x0006fb9a) main_radioblah_pane_t1_ParamLimits

0x2725,	// (0x0006fb9a) main_radioblah_pane_t1

0x2725,	// (0x0006fb9a) main_radioblah_pane_t2_ParamLimits

0x2725,	// (0x0006fb9a) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0007cfec) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0007cfec) main_radioblah_pane_t

0x1ac5,	// (0x0006ef3a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) main_radioblah_rocker_ctrl_pane

0x46c2,	// (0x00071b37) main_radioblah_info_pane_t1_ParamLimits

0x46c2,	// (0x00071b37) main_radioblah_info_pane_t1

0x09fb,	// (0x0006de70) main_radioblah_info_pane_t2_ParamLimits

0x09fb,	// (0x0006de70) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x0007cff5) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x0007cff5) main_radioblah_info_pane_t

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g1

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g2

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g3

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g4

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g5

0x1b11,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0007cffe) main_radioblah_rocker_ctrl_pane_g

0xbee4,	// (0x00079359) main_cset_text2_pane_t1_copy1_ParamLimits

0xa50d,	// (0x00077982) cam4_image_uncrop_qvga_pane

0xa652,	// (0x00077ac7) vid4_image_uncrop_qcif_pane

0xba99,	// (0x00078f0e) cam6_image_uncrop_qvga_pane_ParamLimits

0xba99,	// (0x00078f0e) cam6_image_uncrop_qvga_pane

0x03cb,	// (0x0006d840) vid6_image_uncrop_qcif_pane_ParamLimits

0x03cb,	// (0x0006d840) vid6_image_uncrop_qcif_pane

0xebc8,	// (0x0007c03d) bg_popup_preview_window_pane_cp03

0x0683,	// (0x0006daf8) list_cset_text2_pane

0x068b,	// (0x0006db00) main_cset6_text2_pane_g1

0x0693,	// (0x0006db08) main_cset6_text2_pane_t1

0xc492,	// (0x00079907) list_cset_text2_pane_t1_ParamLimits

0xc492,	// (0x00079907) list_cset_text2_pane_t1

0xefeb,	// (0x0007c460) main_radioblah_pane_ParamLimits

0xc264,	// (0x000796d9) main_mobtv_info_pane_t3_ParamLimits

0xc264,	// (0x000796d9) main_mobtv_info_pane_t3

0x2717,	// (0x0006fb8c) main_radioblah_pane_g1

0x09cb,	// (0x0006de40) main_radioblah_info_pane_g1

0x1b2f,	// (0x0006efa4) main_radioblah_info_pane_t3_ParamLimits

0x1b2f,	// (0x0006efa4) main_radioblah_info_pane_t3

0x7d13,	// (0x00075188) highlight_cell_cale_month_pane_ParamLimits

0x7d13,	// (0x00075188) highlight_cell_cale_month_pane

0xebc8,	// (0x0007c03d) main_phob_fisheye_pane

0x42aa,	// (0x0007171f) scroll_pane_cp0031_ParamLimits

0x42aa,	// (0x0007171f) scroll_pane_cp0031

0x04dd,	// (0x0006d952) wait_bar_pane_cp08_ParamLimits

0xbcb0,	// (0x00079125) cset_list_set_pane_copy1_ParamLimits

0x0a64,	// (0x0006ded9) highlight_cell_cale_month_pane_g1

0xc4a9,	// (0x0007991e) highlight_cell_cale_month_pane_t1

0xe9fa,	// (0x0007be6f) list_gen_pane_cp01

0xe5a9,	// (0x0007ba1e) scroll_pane_01

0xc4b7,	// (0x0007992c) list_single_double_fisheye_pane

0xc4c0,	// (0x00079935) list_double_fisheye_pane_g1_ParamLimits

0xc4c0,	// (0x00079935) list_double_fisheye_pane_g1

0xc4cc,	// (0x00079941) list_double_fisheye_pane_g2_ParamLimits

0xc4cc,	// (0x00079941) list_double_fisheye_pane_g2

0xc4e0,	// (0x00079955) list_double_fisheye_pane_g3_ParamLimits

0xc4e0,	// (0x00079955) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x0007d00b) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x0007d00b) list_double_fisheye_pane_g

0xc509,	// (0x0007997e) list_double_fisheye_pane_t1_ParamLimits

0xc509,	// (0x0007997e) list_double_fisheye_pane_t1

0xc524,	// (0x00079999) list_double_fisheye_pane_t2_ParamLimits

0xc524,	// (0x00079999) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x0007d016) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x0007d016) list_double_fisheye_pane_t

0xebc8,	// (0x0007c03d) main_call5_pane

0x1ac5,	// (0x0006ef3a) sc_swipe_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) sc_swipe_pane

0xc552,	// (0x000799c7) call5_image_pane_ParamLimits

0xc552,	// (0x000799c7) call5_image_pane

0xc564,	// (0x000799d9) call5_swipe_1_pane_ParamLimits

0xc564,	// (0x000799d9) call5_swipe_1_pane

0xc570,	// (0x000799e5) call5_swipe_2_pane_ParamLimits

0xc570,	// (0x000799e5) call5_swipe_2_pane

0xc58a,	// (0x000799ff) popup_call5_audio_first_window_ParamLimits

0xc58a,	// (0x000799ff) popup_call5_audio_first_window

0x1ad3,	// (0x0006ef48) call5_swipe_1_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) call5_swipe_1_pane_g1

0x0a6c,	// (0x0006dee1) call5_swipe_1_pane_g2_ParamLimits

0x0a6c,	// (0x0006dee1) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x0007d01b) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x0007d01b) call5_swipe_1_pane_g

0x0a78,	// (0x0006deed) call5_swipe_1_pane_t1_ParamLimits

0x0a78,	// (0x0006deed) call5_swipe_1_pane_t1

0x1ad3,	// (0x0006ef48) call5_swipe_2_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) call5_swipe_2_pane_g1

0x0a8d,	// (0x0006df02) call5_swipe_2_pane_g2_ParamLimits

0x0a8d,	// (0x0006df02) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0007d020) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0007d020) call5_swipe_2_pane_g

0x0a99,	// (0x0006df0e) call5_swipe_2_pane_t1_ParamLimits

0x0a99,	// (0x0006df0e) call5_swipe_2_pane_t1

0x1ad3,	// (0x0006ef48) sc_swipe_pane_g1_ParamLimits

0x1ad3,	// (0x0006ef48) sc_swipe_pane_g1

0x1ae1,	// (0x0006ef56) sc_swipe_pane_g2_ParamLimits

0x1ae1,	// (0x0006ef56) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x0007d025) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x0007d025) sc_swipe_pane_g

0x1b1b,	// (0x0006ef90) sc_swipe_pane_t1_ParamLimits

0x1b1b,	// (0x0006ef90) sc_swipe_pane_t1

0xebc8,	// (0x0007c03d) main_cmail_launcher_pane

0xc59a,	// (0x00079a0f) aid_size_cell_cmail_l_ParamLimits

0xc59a,	// (0x00079a0f) aid_size_cell_cmail_l

0xc5a8,	// (0x00079a1d) grid_cmail_l_pane_ParamLimits

0xc5a8,	// (0x00079a1d) grid_cmail_l_pane

0xc5b6,	// (0x00079a2b) cell_cmail_l_pane_ParamLimits

0xc5b6,	// (0x00079a2b) cell_cmail_l_pane

0xc5d1,	// (0x00079a46) cell_cmail_l_pane_g1_ParamLimits

0xc5d1,	// (0x00079a46) cell_cmail_l_pane_g1

0xc5dd,	// (0x00079a52) cell_cmail_l_pane_t1_ParamLimits

0xc5dd,	// (0x00079a52) cell_cmail_l_pane_t1

0xc5f3,	// (0x00079a68) cell_cmail_l_pane_t2_ParamLimits

0xc5f3,	// (0x00079a68) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x0007d02a) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x0007d02a) cell_cmail_l_pane_t

0xefeb,	// (0x0007c460) grid_highlight_pane_cp018_ParamLimits

0xefeb,	// (0x0007c460) grid_highlight_pane_cp018

0x5ff8,	// (0x0007346d) main2_pane_ParamLimits

0x5ff8,	// (0x0007346d) main2_pane

0x1bfe,	// (0x0006f073) popup_sp_fs_action_menu_bg_pane_g1

0x1c06,	// (0x0006f07b) popup_sp_fs_action_menu_bg_pane_g2

0x1c0e,	// (0x0006f083) popup_sp_fs_action_menu_bg_pane_g3

0x1c16,	// (0x0006f08b) popup_sp_fs_action_menu_bg_pane_g4

0x1c1e,	// (0x0006f093) popup_sp_fs_action_menu_bg_pane_g5

0x1c26,	// (0x0006f09b) popup_sp_fs_action_menu_bg_pane_g6

0x1c2e,	// (0x0006f0a3) popup_sp_fs_action_menu_bg_pane_g7

0x1c36,	// (0x0006f0ab) popup_sp_fs_action_menu_bg_pane_g8

0x1c3e,	// (0x0006f0b3) popup_sp_fs_action_menu_bg_pane_g9

0x1c46,	// (0x0006f0bb) popup_sp_fs_action_menu_bg_pane_g10

0x1c46,	// (0x0006f0bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0007c552) popup_sp_fs_action_menu_bg_pane_g

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0007c600) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0007c600) list_medium_line_x2_t3_g3_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g3_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_x2_t3_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g2_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g3

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0007c613) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0007c613) list_medium_line_x2_t4_g4_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t3

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0007c61c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0007c61c) list_medium_line_x2_t4_g4_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g3

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0007c613) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0007c613) list_medium_line_x2_t2_g4_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g4_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g4_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0007c600) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0007c600) list_medium_line_x2_t2_g3_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g3_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g3_t

0x7ea5,	// (0x0007531a) main_sp_fs_list_pane_ParamLimits

0x7ea5,	// (0x0007531a) main_sp_fs_list_pane

0x7eb1,	// (0x00075326) sp_fs_scroll_pane_ParamLimits

0x7eb1,	// (0x00075326) sp_fs_scroll_pane

0x2267,	// (0x0006f6dc) list_medium_line_x2_t3_t1

0x2267,	// (0x0006f6dc) list_medium_line_x2_t3_t2

0x2267,	// (0x0006f6dc) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0007c6ce) list_medium_line_x2_t3_t

0x2267,	// (0x0006f6dc) list_medium_line_x3_t4_t1

0x2267,	// (0x0006f6dc) list_medium_line_x3_t4_t2

0x2267,	// (0x0006f6dc) list_medium_line_x3_t4_t3

0x2267,	// (0x0006f6dc) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x0007c6d5) list_medium_line_x3_t4_t

0x2267,	// (0x0006f6dc) list_medium_line_x4_t5_t1

0x2267,	// (0x0006f6dc) list_medium_line_x4_t5_t2

0x2267,	// (0x0006f6dc) list_medium_line_x4_t5_t3

0x2267,	// (0x0006f6dc) list_medium_line_x4_t5_t4

0x2267,	// (0x0006f6dc) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0007c6de) list_medium_line_x4_t5_t

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g1

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g2

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g3

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0007c613) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0007c613) list_medium_line_t4_g4_g

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t2

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t3

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t4_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0007c61c) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0007c61c) list_medium_line_t4_g4_t

0x7faa,	// (0x0007541f) chi_dic_find_pane_g1

0x8cc4,	// (0x00076139) main_tport_pane

0x2267,	// (0x0006f6dc) list_medium_line_plain_t1

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_t2_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_t2_g2_t

0x56ae,	// (0x00072b23) aid_sp_fs_list_icon_a_sm

0xb7b1,	// (0x00078c26) aid_sp_fs_list_icon_d

0xea03,	// (0x0007be78) aid_sp_fs_text_primary

0x56b6,	// (0x00072b2b) aid_sp_fs_text_secondary

0xebc8,	// (0x0007c03d) list_medium_line

0xebc8,	// (0x0007c03d) list_medium_line_g2

0xebc8,	// (0x0007c03d) list_medium_line_g3

0xebc8,	// (0x0007c03d) list_medium_line_plain

0xebc8,	// (0x0007c03d) list_medium_line_plain_t2

0xebc8,	// (0x0007c03d) list_medium_line_plain_t3

0xebc8,	// (0x0007c03d) list_medium_line_right_icon

0xebc8,	// (0x0007c03d) list_medium_line_right_iconx2

0xebc8,	// (0x0007c03d) list_medium_line_t2

0xebc8,	// (0x0007c03d) list_medium_line_t2_g2

0xebc8,	// (0x0007c03d) list_medium_line_t2_g3

0xebc8,	// (0x0007c03d) list_medium_line_t2_right_icon

0xebc8,	// (0x0007c03d) list_medium_line_t2_right_iconx2

0xebc8,	// (0x0007c03d) list_medium_line_t3

0xebc8,	// (0x0007c03d) list_medium_line_t3_g2

0xebc8,	// (0x0007c03d) list_medium_line_t3_g3

0xebc8,	// (0x0007c03d) list_medium_line_t3_right_iconx2

0xebc8,	// (0x0007c03d) list_medium_line_t4_g4

0xebc8,	// (0x0007c03d) list_medium_line_x2

0xebc8,	// (0x0007c03d) list_medium_line_x2_t2_g2

0xebc8,	// (0x0007c03d) list_medium_line_x2_t2_g3

0xebc8,	// (0x0007c03d) list_medium_line_x2_t2_g4

0xebc8,	// (0x0007c03d) list_medium_line_x2_t3

0xebc8,	// (0x0007c03d) list_medium_line_x2_t3_g2

0xebc8,	// (0x0007c03d) list_medium_line_x2_t3_g3

0xebc8,	// (0x0007c03d) list_medium_line_x2_t3_g4

0xebc8,	// (0x0007c03d) list_medium_line_x2_t4_g2

0xebc8,	// (0x0007c03d) list_medium_line_x2_t4_g4

0xebc8,	// (0x0007c03d) list_medium_line_x3

0xebc8,	// (0x0007c03d) list_medium_line_x3_t4

0xebc8,	// (0x0007c03d) list_medium_line_x3_t4_g4

0xebc8,	// (0x0007c03d) list_medium_line_x4_t4

0xebc8,	// (0x0007c03d) list_medium_line_x4_t4_g7

0xebc8,	// (0x0007c03d) list_medium_line_x4_t5

0x56bf,	// (0x00072b34) list_single_fs_dyc_pane_ParamLimits

0x56bf,	// (0x00072b34) list_single_fs_dyc_pane

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g3

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g4

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g5

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x4_t4_g7_g6

0x1ae1,	// (0x0006ef56) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1ae1,	// (0x0006ef56) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0007cf32) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0007cf32) list_medium_line_x4_t4_g7_g

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x4_t4_g7_t3

0x1b2f,	// (0x0006efa4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1b2f,	// (0x0006efa4) list_medium_line_x4_t4_g7_t4

0x1b2f,	// (0x0006efa4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1b2f,	// (0x0006efa4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0007cf41) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0007cf41) list_medium_line_x4_t4_g7_t

0x56f7,	// (0x00072b6c) list_single_dyc_row_pane_ParamLimits

0x56f7,	// (0x00072b6c) list_single_dyc_row_pane

0xc546,	// (0x000799bb) call5_gesture_pane_ParamLimits

0xc546,	// (0x000799bb) call5_gesture_pane

0xc57c,	// (0x000799f1) call5_windows_pane_ParamLimits

0xc57c,	// (0x000799f1) call5_windows_pane

0xc610,	// (0x00079a85) call5_swipe_1_pane_cp_ParamLimits

0xc610,	// (0x00079a85) call5_swipe_1_pane_cp

0xc61c,	// (0x00079a91) call5_swipe_2_pane_cp_ParamLimits

0xc61c,	// (0x00079a91) call5_swipe_2_pane_cp

0x1d4c,	// (0x0006f1c1) call5_image_pane_cp

0xc628,	// (0x00079a9d) popup_call5_audio_first_window_cp_ParamLimits

0xc628,	// (0x00079a9d) popup_call5_audio_first_window_cp

0x0aae,	// (0x0006df23) call5_swipe_1_pane_g1_cp_ParamLimits

0x0aae,	// (0x0006df23) call5_swipe_1_pane_g1_cp

0x0abb,	// (0x0006df30) call5_swipe_1_pane_g2_cp

0x0ac3,	// (0x0006df38) call5_swipe_1_pane_t1_cp_ParamLimits

0x0ac3,	// (0x0006df38) call5_swipe_1_pane_t1_cp

0x0aae,	// (0x0006df23) call5_swipe_2_pane_g1_cp_ParamLimits

0x0aae,	// (0x0006df23) call5_swipe_2_pane_g1_cp

0x0ad8,	// (0x0006df4d) call5_swipe_2_pane_g2_cp

0x0ae0,	// (0x0006df55) call5_swipe_2_pane_t1_cp_ParamLimits

0x0ae0,	// (0x0006df55) call5_swipe_2_pane_t1_cp

0xefeb,	// (0x0007c460) main_sp_fs_email_pane

0xe68c,	// (0x0007bb01) main_sp_fs_listscroll_pane_te

0xc636,	// (0x00079aab) popup_sp_fs_action_menu_pane_ParamLimits

0xc636,	// (0x00079aab) popup_sp_fs_action_menu_pane

0x1b11,	// (0x0006ef86) bg_sp_fs_ctrlbar_pane_g1

0x0af5,	// (0x0006df6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0afe,	// (0x0006df73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x0b07,	// (0x0006df7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1b11,	// (0x0006ef86) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0007d02f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3da4,	// (0x00071219) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3da4,	// (0x00071219) bg_sp_fs_ctrlbar_ddmenu_pane

0x0b10,	// (0x0006df85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0b10,	// (0x0006df85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b1c,	// (0x0006df91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0b1c,	// (0x0006df91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x0007d038) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x0007d038) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0b28,	// (0x0006df9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0b28,	// (0x0006df9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1b11,	// (0x0006ef86) list_medium_line_t2_right_icon_g1

0x2267,	// (0x0006f6dc) list_medium_line_t2_right_icon_t1

0x2267,	// (0x0006f6dc) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x0007d03d) list_medium_line_t2_right_icon_t

0x2739,	// (0x0006fbae) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2739,	// (0x0006fbae) bg_sp_fs_ctrlbar_pane

0xc6d5,	// (0x00079b4a) main_sp_fs_ctrlbar_button_pane_cp01

0xc6dd,	// (0x00079b52) main_sp_fs_ctrlbar_ddmenu_pane

0x0b7c,	// (0x0006dff1) main_sp_fs_ctrlbar_pane_g1

0x0b88,	// (0x0006dffd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0007d042) main_sp_fs_ctrlbar_pane_g

0xc71b,	// (0x00079b90) main_sp_fs_ctrlbar_pane_t1

0xc758,	// (0x00079bcd) main_sp_fs_ctrlbar_pane

0xc772,	// (0x00079be7) main_sp_fs_listscroll_pane_te_cp01

0x5714,	// (0x00072b89) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5714,	// (0x00072b89) popup_sp_fs_action_menu_pane_cp01

0xefeb,	// (0x0007c460) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefeb,	// (0x0007c460) bg_sp_fs_highlight_list_pane_cp01

0x5734,	// (0x00072ba9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5734,	// (0x00072ba9) sp_fs_action_menu_list_gene_pane_g1

0x0baf,	// (0x0006e024) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0baf,	// (0x0006e024) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x0007d050) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x0007d050) sp_fs_action_menu_list_gene_pane_g

0x5743,	// (0x00072bb8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5743,	// (0x00072bb8) sp_fs_action_menu_list_gene_pane_t1

0x575b,	// (0x00072bd0) sp_fs_action_menu_list_gene_pane_ParamLimits

0x575b,	// (0x00072bd0) sp_fs_action_menu_list_gene_pane

0x0bbc,	// (0x0006e031) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0bbc,	// (0x0006e031) popup_sp_fs_action_menu_bg_pane

0x577e,	// (0x00072bf3) sp_fs_action_menu_list_pane_ParamLimits

0x577e,	// (0x00072bf3) sp_fs_action_menu_list_pane

0x57a2,	// (0x00072c17) sp_fs_scroll_pane_cp01_ParamLimits

0x57a2,	// (0x00072c17) sp_fs_scroll_pane_cp01

0x2267,	// (0x0006f6dc) list_medium_line_plain_t2_t1

0x2267,	// (0x0006f6dc) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x0007d03d) list_medium_line_plain_t2_t

0x2267,	// (0x0006f6dc) list_medium_line_plain_t3_t1

0x2267,	// (0x0006f6dc) list_medium_line_plain_t3_t2

0x2267,	// (0x0006f6dc) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0007c6ce) list_medium_line_plain_t3_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_x2_t2_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_x2_t2_g2_t

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_x2_t4_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t3

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0007c61c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0007c61c) list_medium_line_x2_t4_g2_t

0x1b11,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g1

0x1b11,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g2

0x1b11,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x0007c7ea) list_medium_line_t3_right_iconx2_g

0x2267,	// (0x0006f6dc) list_medium_line_t3_right_iconx2_t1

0x2267,	// (0x0006f6dc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0007d03d) list_medium_line_t3_right_iconx2_t

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g3

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0007c613) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0007c613) list_medium_line_x3_t4_g4_g

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t3

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0007c61c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0007c61c) list_medium_line_x3_t4_g4_t

0x57c8,	// (0x00072c3d) list_single_dyc_row_text_pane_t1_ParamLimits

0x57c8,	// (0x00072c3d) list_single_dyc_row_text_pane_t1

0x580b,	// (0x00072c80) list_single_dyc_row_text_pane_t2_ParamLimits

0x580b,	// (0x00072c80) list_single_dyc_row_text_pane_t2

0x5881,	// (0x00072cf6) list_single_dyc_row_text_pane_t3_ParamLimits

0x5881,	// (0x00072cf6) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x0007d055) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x0007d055) list_single_dyc_row_text_pane_t

0x5960,	// (0x00072dd5) list_single_dyc_row_pane_g1_ParamLimits

0x5960,	// (0x00072dd5) list_single_dyc_row_pane_g1

0x596c,	// (0x00072de1) list_single_dyc_row_pane_g2_ParamLimits

0x596c,	// (0x00072de1) list_single_dyc_row_pane_g2

0x5978,	// (0x00072ded) list_single_dyc_row_pane_g3_ParamLimits

0x5978,	// (0x00072ded) list_single_dyc_row_pane_g3

0x598b,	// (0x00072e00) list_single_dyc_row_pane_g4_ParamLimits

0x598b,	// (0x00072e00) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x0007d062) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x0007d062) list_single_dyc_row_pane_g

0x59dd,	// (0x00072e52) list_single_dyc_row_text_pane_ParamLimits

0x59dd,	// (0x00072e52) list_single_dyc_row_text_pane

0xebc8,	// (0x0007c03d) bg_sp_fs_scroll_pane

0x0bca,	// (0x0006e03f) thumb_sp_fs_scroll_pane

0x1ad3,	// (0x0006ef48) list_medium_line_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g1

0x1b1b,	// (0x0006ef90) list_medium_line_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_x2_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t1

0x1ad3,	// (0x0006ef48) list_medium_line_x3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x3_g1

0x0147,	// (0x0006d5bc) list_medium_line_x3_g2_ParamLimits

0x0147,	// (0x0006d5bc) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x0007d071) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x0007d071) list_medium_line_x3_g

0x0bd3,	// (0x0006e048) list_medium_line_x3_t1_ParamLimits

0x0bd3,	// (0x0006e048) list_medium_line_x3_t1

0x0be7,	// (0x0006e05c) thumb_sp_fs_scroll_pane_g1

0x0bf0,	// (0x0006e065) thumb_sp_fs_scroll_pane_g2

0x0bf9,	// (0x0006e06e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0007d076) thumb_sp_fs_scroll_pane_g

0x0be7,	// (0x0006e05c) bg_sp_fs_scroll_pane_g1

0x0bf0,	// (0x0006e065) bg_sp_fs_scroll_pane_g2

0x0bf9,	// (0x0006e06e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0007d076) bg_sp_fs_scroll_pane_g

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g1

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g2

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g3

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0007c613) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0007c613) list_medium_line_x2_t3_g4_g

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t1

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t2

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_x2_t3_g4_t

0x1ad3,	// (0x0006ef48) list_medium_line_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_g2_t1

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g2_g1

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g2_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0007c60e) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0007c60e) list_medium_line_t3_g2_g

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t2

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_t3_g2_t

0x1b11,	// (0x0006ef86) list_medium_line_right_icon_g1

0x2267,	// (0x0006f6dc) list_medium_line_right_icon_t1

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g1

0x1b1b,	// (0x0006ef90) list_medium_line_t2_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t2_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_t2_t

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g1

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t2

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_t3_t

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g1

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g2

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0007c600) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0007c600) list_medium_line_g3_g

0x1b1b,	// (0x0006ef90) list_medium_line_g3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_g3_t1

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g1

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g2

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0007c600) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0007c600) list_medium_line_t2_g3_g

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g3_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g3_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x0007c683) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x0007c683) list_medium_line_t2_g3_t

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g1_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g1

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g2_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g2

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g3_ParamLimits

0x1ad3,	// (0x0006ef48) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0007c600) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0007c600) list_medium_line_t3_g3_g

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t1_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t1

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t2_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t2

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t3_ParamLimits

0x1b1b,	// (0x0006ef90) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0007c607) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0007c607) list_medium_line_t3_g3_t

0x1b11,	// (0x0006ef86) list_medium_line_right_iconx2_g1

0x1b11,	// (0x0006ef86) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0007c501) list_medium_line_right_iconx2_g

0x2267,	// (0x0006f6dc) list_medium_line_right_iconx2_t1

0x1b11,	// (0x0006ef86) list_medium_line_t2_right_iconx2_g1

0x1b11,	// (0x0006ef86) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0007c501) list_medium_line_t2_right_iconx2_g

0x2267,	// (0x0006f6dc) list_medium_line_t2_right_iconx2_t1

0x2267,	// (0x0006f6dc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0007d03d) list_medium_line_t2_right_iconx2_t

0x2267,	// (0x0006f6dc) list_medium_line_x4_t4_t1

0x2267,	// (0x0006f6dc) list_medium_line_x4_t4_t2

0x2267,	// (0x0006f6dc) list_medium_line_x4_t4_t3

0x2267,	// (0x0006f6dc) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x0007c6d5) list_medium_line_x4_t4_t

0xc7b7,	// (0x00079c2c) tport_appsw_pane_ParamLimits

0xc7b7,	// (0x00079c2c) tport_appsw_pane

0xc7c5,	// (0x00079c3a) tport_contact_pane_ParamLimits

0xc7c5,	// (0x00079c3a) tport_contact_pane

0xc7d5,	// (0x00079c4a) tport_listscroll_pane_ParamLimits

0xc7d5,	// (0x00079c4a) tport_listscroll_pane

0xc7e5,	// (0x00079c5a) cell_tport_appsw_pane_ParamLimits

0xc7e5,	// (0x00079c5a) cell_tport_appsw_pane

0x1ae1,	// (0x0006ef56) tport_appsw_pane_g1_ParamLimits

0x1ae1,	// (0x0006ef56) tport_appsw_pane_g1

0xc812,	// (0x00079c87) tport_contact_pane_g1

0xc81b,	// (0x00079c90) tport_contact_pane_t1

0xc829,	// (0x00079c9e) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x0007d07d) tport_contact_pane_t

0x0c02,	// (0x0006e077) list_tport_pane

0x0c0b,	// (0x0006e080) scroll_pane_cp_030

0xc83f,	// (0x00079cb4) cell_tport_appsw_pane_g1

0xc84f,	// (0x00079cc4) cell_tport_appsw_pane_t1

0xc85d,	// (0x00079cd2) grid_highlight_pane_cp019

0xc865,	// (0x00079cda) list_tport_double_graphic_pane_ParamLimits

0xc865,	// (0x00079cda) list_tport_double_graphic_pane

0xefeb,	// (0x0007c460) list_highlight_pane_cp023_ParamLimits

0xefeb,	// (0x0007c460) list_highlight_pane_cp023

0xc872,	// (0x00079ce7) list_tport_double_graphic_pane_g1_ParamLimits

0xc872,	// (0x00079ce7) list_tport_double_graphic_pane_g1

0xc87f,	// (0x00079cf4) list_tport_double_graphic_pane_t1_ParamLimits

0xc87f,	// (0x00079cf4) list_tport_double_graphic_pane_t1

0xc894,	// (0x00079d09) list_tport_double_graphic_pane_t2_ParamLimits

0xc894,	// (0x00079d09) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x0007d089) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x0007d089) list_tport_double_graphic_pane_t

0xebc8,	// (0x0007c03d) main_cale_note_pane

0xa8b9,	// (0x00077d2e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa8b9,	// (0x00077d2e) cell_vitu2_function_top_wide_pane_cp01

0xc278,	// (0x000796ed) wait_bar_pane_cp05_ParamLimits

0xefeb,	// (0x0007c460) listscroll_cmail_pane

0x0c1c,	// (0x0006e091) list_cmail_pane

0xc8a6,	// (0x00079d1b) list_cmail_body_pane

0xc8c0,	// (0x00079d35) list_single_cmail_header_caption_pane

0xc8e0,	// (0x00079d55) list_single_cmail_header_detail_pane_ParamLimits

0xc8e0,	// (0x00079d55) list_single_cmail_header_detail_pane

0x0c33,	// (0x0006e0a8) list_single_cmail_header_caption_pane_t1

0x5a02,	// (0x00072e77) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5a02,	// (0x00072e77) list_single_cmail_header_detail_pane_g1

0xc916,	// (0x00079d8b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc916,	// (0x00079d8b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x0007d08e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x0007d08e) list_single_cmail_header_detail_pane_g

0x5a1a,	// (0x00072e8f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5a1a,	// (0x00072e8f) list_single_cmail_header_detail_pane_t1

0x5a7a,	// (0x00072eef) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5a7a,	// (0x00072eef) list_single_cmail_header_editor_pane_bg

0x08be,	// (0x0006dd33) list_cmail_body_pane_g1

0x0c57,	// (0x0006e0cc) list_cmail_body_pane_t1

0xe465,	// (0x0007b8da) list_single_cmail_header_editor_pane_bg_g1

0x1f76,	// (0x0006f3eb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe475,	// (0x0007b8ea) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe46d,	// (0x0007b8e2) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe6e3,	// (0x0007bb58) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe495,	// (0x0007b90a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe485,	// (0x0007b8fa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe48d,	// (0x0007b902) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1f56,	// (0x0006f3cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc922,	// (0x00079d97) calenote_gesture_pane_ParamLimits

0xc922,	// (0x00079d97) calenote_gesture_pane

0xc93c,	// (0x00079db1) calenote_window_pane_ParamLimits

0xc93c,	// (0x00079db1) calenote_window_pane

0x0c65,	// (0x0006e0da) popup_note_window_cp01

0xc954,	// (0x00079dc9) calenote_swipe_1_pane_ParamLimits

0xc954,	// (0x00079dc9) calenote_swipe_1_pane

0xc61c,	// (0x00079a91) calenote_swipe_2_pane_ParamLimits

0xc61c,	// (0x00079a91) calenote_swipe_2_pane

0x0aae,	// (0x0006df23) calenote_swipe_1_pane_g1_ParamLimits

0x0aae,	// (0x0006df23) calenote_swipe_1_pane_g1

0x0c77,	// (0x0006e0ec) calenote_swipe_1_pane_g2_ParamLimits

0x0c77,	// (0x0006e0ec) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x0007d09a) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x0007d09a) calenote_swipe_1_pane_g

0x0c83,	// (0x0006e0f8) calenote_swipe_1_pane_t1_ParamLimits

0x0c83,	// (0x0006e0f8) calenote_swipe_1_pane_t1

0x0aae,	// (0x0006df23) calenote_swipe_2_pane_g1_ParamLimits

0x0aae,	// (0x0006df23) calenote_swipe_2_pane_g1

0x0ca2,	// (0x0006e117) calenote_swipe_2_pane_g2_ParamLimits

0x0ca2,	// (0x0006e117) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x0007d09f) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x0007d09f) calenote_swipe_2_pane_g

0x0cae,	// (0x0006e123) calenote_swipe_2_pane_t1_ParamLimits

0x0cae,	// (0x0006e123) calenote_swipe_2_pane_t1

0xebc8,	// (0x0007c03d) main_mup_navstr_pane

0x982f,	// (0x00076ca4) main_mup3_pane_t7_ParamLimits

0x982f,	// (0x00076ca4) main_mup3_pane_t7

0x9faf,	// (0x00077424) main_mp4_pane_g6_ParamLimits

0x9faf,	// (0x00077424) main_mp4_pane_g6

0xa2f4,	// (0x00077769) main_image3_pane_t4_ParamLimits

0xa2f4,	// (0x00077769) main_image3_pane_t4

0xc967,	// (0x00079ddc) popup_navstr_preview_pane_ParamLimits

0xc967,	// (0x00079ddc) popup_navstr_preview_pane

0xc973,	// (0x00079de8) scroll_navstr_pane_ParamLimits

0xc973,	// (0x00079de8) scroll_navstr_pane

0xebc8,	// (0x0007c03d) bg_popup_preview_window_pane_cp04

0x0cd5,	// (0x0006e14a) popup_navstr_preview_pane_t1

0xc97f,	// (0x00079df4) scroll_navstr_pane_g1_ParamLimits

0xc97f,	// (0x00079df4) scroll_navstr_pane_g1

0xc98c,	// (0x00079e01) scroll_navstr_pane_t1_ParamLimits

0xc98c,	// (0x00079e01) scroll_navstr_pane_t1

0x0c6e,	// (0x0006e0e3) bg_button_pane_cp014

0x0c6e,	// (0x0006e0e3) bg_button_pane_cp030

0xc4ec,	// (0x00079961) list_double_fisheye_pane_g4_ParamLimits

0xc4ec,	// (0x00079961) list_double_fisheye_pane_g4

0xc4f8,	// (0x0007996d) list_double_fisheye_pane_g5_ParamLimits

0xc4f8,	// (0x0007996d) list_double_fisheye_pane_g5

0xeff9,	// (0x0007c46e) sp_fs_scroll_pane_cp03

0x0b7c,	// (0x0006dff1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0b88,	// (0x0006dffd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0007d042) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc71b,	// (0x00079b90) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0c2b,	// (0x0006e0a0) sp_fs_scroll_pane_cp02

0x1cb1,	// (0x0006f126) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1cb1,	// (0x0006f126) popup_sp_fs_calendar_preview_list_single_pane

0xebc8,	// (0x0007c03d) main_cam6_pano_pane

0xefeb,	// (0x0007c460) main_mup3_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_phacti_pane

0xc14b,	// (0x000795c0) bg_button_pane_cp11

0xc163,	// (0x000795d8) main_mobtv_info_pane_g2_ParamLimits

0xc163,	// (0x000795d8) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x0007cfa2) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x0007cfa2) main_mobtv_info_pane_g

0x1b2f,	// (0x0006efa4) sc_clock_pane_t5_ParamLimits

0x1b2f,	// (0x0006efa4) sc_clock_pane_t5

0x2717,	// (0x0006fb8c) main_radioblah_pane_g1_ParamLimits

0x2725,	// (0x0006fb9a) main_radioblah_pane_t3_ParamLimits

0x2725,	// (0x0006fb9a) main_radioblah_pane_t3

0x2725,	// (0x0006fb9a) main_radioblah_pane_t4_ParamLimits

0x2725,	// (0x0006fb9a) main_radioblah_pane_t4

0x1ac5,	// (0x0006ef3a) main_radioblah_text_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) main_radioblah_text_pane

0x09cb,	// (0x0006de40) main_radioblah_info_pane_g1_ParamLimits

0x0a0f,	// (0x0006de84) main_radioblah_info_pane_t4_ParamLimits

0x0a0f,	// (0x0006de84) main_radioblah_info_pane_t4

0xefeb,	// (0x0007c460) main_sp_fs_calendar_pane

0xc99e,	// (0x00079e13) main_phacti_pane_g1

0xc9a6,	// (0x00079e1b) phacti_note_pane_ParamLimits

0xc9a6,	// (0x00079e1b) phacti_note_pane

0x0cec,	// (0x0006e161) phacti_term_pane_ParamLimits

0x0cec,	// (0x0006e161) phacti_term_pane

0x0d01,	// (0x0006e176) phacti_note_pane_t1_ParamLimits

0x0d01,	// (0x0006e176) phacti_note_pane_t1

0x5a91,	// (0x00072f06) phacti_term_pane_g1

0x5a99,	// (0x00072f0e) phacti_term_pane_t1_ParamLimits

0x5a99,	// (0x00072f0e) phacti_term_pane_t1

0x0d18,	// (0x0006e18d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0d20,	// (0x0006e195) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x0007d0a9) popup_sp_fs_calendar_preview_list_single_pane_g

0x0d28,	// (0x0006e19d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0d28,	// (0x0006e19d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0d3e,	// (0x0006e1b3) aid_popup_sp_fs_bg_corner_pane

0x1b11,	// (0x0006ef86) popup_sp_fs_calendar_preview_bg_pane_g1

0xebc8,	// (0x0007c03d) popup_sp_fs_calendar_preview_bg_pane

0x0d46,	// (0x0006e1bb) popup_sp_fs_calendar_preview_list_pane

0x0d4e,	// (0x0006e1c3) bg_main_sp_fs_cale_pane_ParamLimits

0x0d4e,	// (0x0006e1c3) bg_main_sp_fs_cale_pane

0x0d66,	// (0x0006e1db) listscroll_cale_mrui_pane_ParamLimits

0x0d66,	// (0x0006e1db) listscroll_cale_mrui_pane

0x4266,	// (0x000716db) listscroll_sp_fs_schedule_track_pane

0x5acc,	// (0x00072f41) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5acc,	// (0x00072f41) main_sp_fs_ctrlbar_pane_cp01

0x4266,	// (0x000716db) main_sp_fs_ribbon_pane

0x5ae2,	// (0x00072f57) popup_sp_fs_cale_preview_window

0x0d7e,	// (0x0006e1f3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x0d7e,	// (0x0006e1f3) list_single_sp_fs_schedule_track_pane

0x0d7e,	// (0x0006e1f3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0d7e,	// (0x0006e1f3) bg_sp_fs_highlight_list_pane_cp03

0x950f,	// (0x00076984) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x950f,	// (0x00076984) list_single_sp_fs_schedule_track_pane_g1

0x950f,	// (0x00076984) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x950f,	// (0x00076984) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0007d0ae) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0007d0ae) list_single_sp_fs_schedule_track_pane_g

0xc9bc,	// (0x00079e31) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc9bc,	// (0x00079e31) list_single_sp_fs_schedule_track_pane_t1

0xe324,	// (0x0007b799) sp_fs_schedule_track_pane_ParamLimits

0xe324,	// (0x0007b799) sp_fs_schedule_track_pane

0x426e,	// (0x000716e3) sp_fs_schedule_track_pane_g1

0x426e,	// (0x000716e3) sp_fs_schedule_track_pane_g2

0x426e,	// (0x000716e3) sp_fs_schedule_track_pane_g3

0x426e,	// (0x000716e3) sp_fs_schedule_track_pane_g4

0x426e,	// (0x000716e3) sp_fs_schedule_track_pane_g5

0x0004,

0xf7c8,	// (0x0007cc3d) sp_fs_schedule_track_pane_g

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g1

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g2

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g3

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g4

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g5

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g6

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g7

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g8

0x426e,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3e,	// (0x0007d0b3) bg_sp_fs_schedule_viewer_highlight_g

0x4266,	// (0x000716db) bg_main_sp_fs_ribbon_pane

0x426e,	// (0x000716e3) main_sp_fs_ribbon_pane_g1

0x0d8a,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t1

0x0d8a,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t2

0x0d8a,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc51,	// (0x0007d0c6) main_sp_fs_ribbon_pane_t

0x4266,	// (0x000716db) main_sp_fs_ribbon_scheduler_pane

0x426e,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g1

0x426e,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g2

0x426e,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x0007cb1a) bg_main_sp_fs_ribbon_pane_g

0x426e,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g1

0x426e,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g2

0x426e,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x0007cb1a) main_sp_fs_ribbon_scheduler_pane_g

0x0d98,	// (0x0006e20d) list_cale_mrui_pane

0xc9ce,	// (0x00079e43) sp_fs_scroll_pane_cp07_ParamLimits

0xc9ce,	// (0x00079e43) sp_fs_scroll_pane_cp07

0x0d7e,	// (0x0006e1f3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x0d7e,	// (0x0006e1f3) bg_sp_fs_schedule_viewer_highlight

0x4266,	// (0x000716db) list_single_sp_fs_schedule_track_pane_cp01

0x4266,	// (0x000716db) list_sp_fs_schedule_track_pane

0x0da5,	// (0x0006e21a) sp_fs_scroll_pane_cp06_ParamLimits

0x0da5,	// (0x0006e21a) sp_fs_scroll_pane_cp06

0x1b11,	// (0x0006ef86) bgmain_sp_fs_calendar_pane_g1

0x5af4,	// (0x00072f69) list_single_cale_mrui_pane_ParamLimits

0x5af4,	// (0x00072f69) list_single_cale_mrui_pane

0x5b17,	// (0x00072f8c) list_single_cale_mrui_row_pane_ParamLimits

0x5b17,	// (0x00072f8c) list_single_cale_mrui_row_pane

0x5b24,	// (0x00072f99) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5b24,	// (0x00072f99) list_single_cale_mrui_row_pane_g1

0x5b5c,	// (0x00072fd1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5b5c,	// (0x00072fd1) list_single_cale_mrui_row_pane_t1

0x5b6e,	// (0x00072fe3) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5b6e,	// (0x00072fe3) list_single_cale_mrui_row_pane_t2

0x5bd4,	// (0x00073049) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5bd4,	// (0x00073049) list_single_cale_mrui_row_pane_t3

0x5c03,	// (0x00073078) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5c03,	// (0x00073078) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc5f,	// (0x0007d0d4) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc5f,	// (0x0007d0d4) list_single_cale_mrui_row_pane_t

0x5c34,	// (0x000730a9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5c34,	// (0x000730a9) list_single_cmail_header_editor_pane_bg_cp01

0x5c5e,	// (0x000730d3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5c5e,	// (0x000730d3) list_single_cmail_header_editor_pane_bg_cp02

0x0dc6,	// (0x0006e23b) main_radioblah_text_pane_t1_ParamLimits

0x0dc6,	// (0x0006e23b) main_radioblah_text_pane_t1

0x0de0,	// (0x0006e255) cam6_indi_pane_cp01

0x0de8,	// (0x0006e25d) cam6_mode_pane_cp01

0x0df0,	// (0x0006e265) cam6_pano_pane

0x0df9,	// (0x0006e26e) cam6_zoom_pane_cp01

0x0e03,	// (0x0006e278) cam6_pano_image_pane

0x0e0c,	// (0x0006e281) cam6_pano_pane_g1

0x08be,	// (0x0006dd33) cam6_pano_pane_g2

0x0e15,	// (0x0006e28a) cam6_pano_pane_g3

0x0e1e,	// (0x0006e293) cam6_pano_pane_g4

0x4513,	// (0x00071988) cam6_pano_pane_g5

0x0e27,	// (0x0006e29c) cam6_pano_pane_g6

0x0e2f,	// (0x0006e2a4) cam6_pano_pane_g7

0x0e37,	// (0x0006e2ac) cam6_pano_pane_g8

0x0e40,	// (0x0006e2b5) cam6_pano_pane_g9

0x0008,

0xfc68,	// (0x0007d0dd) cam6_pano_pane_g

0xebc8,	// (0x0007c03d) main_browser_tag_pane

0x0ccd,	// (0x0006e142) grid_navstr_albumart_pane

0x0e4b,	// (0x0006e2c0) cell_navstr_albumart_pane_ParamLimits

0x0e4b,	// (0x0006e2c0) cell_navstr_albumart_pane

0x0e67,	// (0x0006e2dc) cell_navstr_albumart_pane_g1

0x0e6f,	// (0x0006e2e4) cell_navstr_albumart_pane_g2

0x0e77,	// (0x0006e2ec) cell_navstr_albumart_pane_g3

0x0e7f,	// (0x0006e2f4) cell_navstr_albumart_pane_g4

0x0003,

0xfc7b,	// (0x0007d0f0) cell_navstr_albumart_pane_g

0xc9ea,	// (0x00079e5f) bt_list_pane_ParamLimits

0xc9ea,	// (0x00079e5f) bt_list_pane

0xca03,	// (0x00079e78) bt_list_pane_t1

0xca12,	// (0x00079e87) bt_list_pane_t2

0x0001,

0xfc84,	// (0x0007d0f9) bt_list_pane_t

0xebc8,	// (0x0007c03d) main_cale_prevew_pane

0xca21,	// (0x00079e96) popup_cale_preview_window_ParamLimits

0xca21,	// (0x00079e96) popup_cale_preview_window

0xefeb,	// (0x0007c460) bg_popup_preview_window_pane_cp05_ParamLimits

0xefeb,	// (0x0007c460) bg_popup_preview_window_pane_cp05

0x0e87,	// (0x0006e2fc) list_cale_preview_pane_ParamLimits

0x0e87,	// (0x0006e2fc) list_cale_preview_pane

0xca3e,	// (0x00079eb3) list_double_cale_preview_pane_ParamLimits

0xca3e,	// (0x00079eb3) list_double_cale_preview_pane

0xca52,	// (0x00079ec7) list_single_cale_preview_pane_ParamLimits

0xca52,	// (0x00079ec7) list_single_cale_preview_pane

0xca6a,	// (0x00079edf) list_single_cale_preview_pane_g1

0xca72,	// (0x00079ee7) list_single_cale_preview_pane_t1_ParamLimits

0xca72,	// (0x00079ee7) list_single_cale_preview_pane_t1

0xca87,	// (0x00079efc) list_double_cale_preview_pane_g1

0xca8f,	// (0x00079f04) list_double_cale_preview_pane_t1_ParamLimits

0xca8f,	// (0x00079f04) list_double_cale_preview_pane_t1

0xcaa4,	// (0x00079f19) list_double_cale_preview_pane_t2_ParamLimits

0xcaa4,	// (0x00079f19) list_double_cale_preview_pane_t2

0x0001,

0xfc89,	// (0x0007d0fe) list_double_cale_preview_pane_t_ParamLimits

0xfc89,	// (0x0007d0fe) list_double_cale_preview_pane_t

0xebc8,	// (0x0007c03d) main_ezdial_pane

0xefeb,	// (0x0007c460) main_sp_fs_email_pane_ParamLimits

0xc67c,	// (0x00079af1) cmail_ddmenu_btn01_pane_ParamLimits

0xc67c,	// (0x00079af1) cmail_ddmenu_btn01_pane

0xc699,	// (0x00079b0e) cmail_ddmenu_btn02_pane_ParamLimits

0xc699,	// (0x00079b0e) cmail_ddmenu_btn02_pane

0xc6b7,	// (0x00079b2c) cmail_ddmenu_btn03_pane_ParamLimits

0xc6b7,	// (0x00079b2c) cmail_ddmenu_btn03_pane

0xc758,	// (0x00079bcd) main_sp_fs_ctrlbar_pane_ParamLimits

0xc772,	// (0x00079be7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc8a6,	// (0x00079d1b) list_cmail_body_pane_ParamLimits

0x0c41,	// (0x0006e0b6) bg_button_pane_cp12

0x0c4a,	// (0x0006e0bf) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0c4a,	// (0x0006e0bf) list_single_cmail_header_detail_pane_g3

0x5a56,	// (0x00072ecb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5a56,	// (0x00072ecb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x0007d095) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x0007d095) list_single_cmail_header_detail_pane_t

0x5aae,	// (0x00072f23) phacti_term_pane_t2_ParamLimits

0x5aae,	// (0x00072f23) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x0007d0a4) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x0007d0a4) phacti_term_pane_t

0x0e93,	// (0x0006e308) aid_size_list_single_double

0xcabc,	// (0x00079f31) popup_ezdial_listscroll_window

0x0e9f,	// (0x0006e314) popup_number_entry_window_cp01

0x1d4c,	// (0x0006f1c1) bg_popup_call_pane_cp09

0x0eac,	// (0x0006e321) ezdial_list_pane

0x0eb4,	// (0x0006e329) scroll_pane_cp23

0x3da4,	// (0x00071219) bg_button_pane_cp028_ParamLimits

0x3da4,	// (0x00071219) bg_button_pane_cp028

0xcad8,	// (0x00079f4d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcad8,	// (0x00079f4d) cmail_ddmenu_btn01_pane_g1

0xcaea,	// (0x00079f5f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcaea,	// (0x00079f5f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc8e,	// (0x0007d103) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc8e,	// (0x0007d103) cmail_ddmenu_btn01_pane_g

0x0ebc,	// (0x0006e331) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0ebc,	// (0x0006e331) cmail_ddmenu_btn01_pane_t1

0x2739,	// (0x0006fbae) bg_button_pane_cp029_ParamLimits

0x2739,	// (0x0006fbae) bg_button_pane_cp029

0xcaf6,	// (0x00079f6b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcaf6,	// (0x00079f6b) cmail_ddmenu_btn02_pane_g1

0xcb0e,	// (0x00079f83) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcb0e,	// (0x00079f83) cmail_ddmenu_btn02_pane_t1

0x1ac5,	// (0x0006ef3a) bg_button_pane_cp031_ParamLimits

0x1ac5,	// (0x0006ef3a) bg_button_pane_cp031

0xcaf6,	// (0x00079f6b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcaf6,	// (0x00079f6b) cmail_ddmenu_btn03_pane_g1

0xcb0e,	// (0x00079f83) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcb0e,	// (0x00079f83) cmail_ddmenu_btn03_pane_t1

0x1b1b,	// (0x0006ef90) cell_dialer2_keypad_pane_t1_ParamLimits

0x4551,	// (0x000719c6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4551,	// (0x000719c6) cell_dialer2_keypad_pane_t1_copy1

0xbf78,	// (0x000793ed) ncimui_group_button_pane

0xefeb,	// (0x0007c460) main_sp_fs_calendar_pane_ParamLimits

0xc8c0,	// (0x00079d35) list_single_cmail_header_caption_pane_ParamLimits

0x5ac3,	// (0x00072f38) aid_recal_txt_sm_pane

0xebc8,	// (0x0007c03d) mian_recal_day_pane

0x5ae2,	// (0x00072f57) popup_sp_fs_cale_preview_window_ParamLimits

0x0ed2,	// (0x0006e347) list_recal_day_pane

0x5c98,	// (0x0007310d) list_single_recal_day_pane_ParamLimits

0x5c98,	// (0x0007310d) list_single_recal_day_pane

0x0ef9,	// (0x0006e36e) list_single_recal_day_pane_g1_ParamLimits

0x0ef9,	// (0x0006e36e) list_single_recal_day_pane_g1

0x5caa,	// (0x0007311f) list_single_recal_day_pane_g2_ParamLimits

0x5caa,	// (0x0007311f) list_single_recal_day_pane_g2

0x5cb6,	// (0x0007312b) list_single_recal_day_pane_g3_ParamLimits

0x5cb6,	// (0x0007312b) list_single_recal_day_pane_g3

0x5cc2,	// (0x00073137) list_single_recal_day_pane_g4_ParamLimits

0x5cc2,	// (0x00073137) list_single_recal_day_pane_g4

0x5cd0,	// (0x00073145) list_single_recal_day_pane_g5_ParamLimits

0x5cd0,	// (0x00073145) list_single_recal_day_pane_g5

0x5ce6,	// (0x0007315b) list_single_recal_day_pane_g6_ParamLimits

0x5ce6,	// (0x0007315b) list_single_recal_day_pane_g6

0x0004,

0xfc9d,	// (0x0007d112) list_single_recal_day_pane_g_ParamLimits

0xfc9d,	// (0x0007d112) list_single_recal_day_pane_g

0x5cfa,	// (0x0007316f) list_single_recal_day_pane_t1

0x5d0c,	// (0x00073181) list_single_recal_day_pane_t2

0x0001,

0xfca8,	// (0x0007d11d) list_single_recal_day_pane_t

0xcb32,	// (0x00079fa7) ncimui_query_button_pane_ParamLimits

0xcb32,	// (0x00079fa7) ncimui_query_button_pane

0xcb42,	// (0x00079fb7) ncimui_query_button_pane_t1_ParamLimits

0xcb42,	// (0x00079fb7) ncimui_query_button_pane_t1

0x0f05,	// (0x0006e37a) ncimui_query_button_pane_t2_ParamLimits

0x0f05,	// (0x0006e37a) ncimui_query_button_pane_t2

0x0001,

0xfcad,	// (0x0007d122) ncimui_query_button_pane_t_ParamLimits

0xfcad,	// (0x0007d122) ncimui_query_button_pane_t

0xcb55,	// (0x00079fca) query_button_pane_ParamLimits

0xcb55,	// (0x00079fca) query_button_pane

0xebc8,	// (0x0007c03d) bg_button_pane_cp0028

0x0f18,	// (0x0006e38d) query_button_pane_t1

0x8cc4,	// (0x00076139) main_tport_pane_ParamLimits

0xc78d,	// (0x00079c02) bg_popup_window_pane_cp01_ParamLimits

0xc78d,	// (0x00079c02) bg_popup_window_pane_cp01

0xc79b,	// (0x00079c10) heading_pane_cp08_ParamLimits

0xc79b,	// (0x00079c10) heading_pane_cp08

0xc7a9,	// (0x00079c1e) heading_pane_cp07_ParamLimits

0xc7a9,	// (0x00079c1e) heading_pane_cp07

0xc83f,	// (0x00079cb4) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x0007d082) cell_tport_appsw_pane_g

0x556c,	// (0x000729e1) input_candi_list_open_g1

0x2111,	// (0x0006f586) list_cale_time_pane_g6_ParamLimits

0x2111,	// (0x0006f586) list_cale_time_pane_g6

0x91ae,	// (0x00076623) aid_size_touch_calib_1_ParamLimits

0x91ae,	// (0x00076623) aid_size_touch_calib_1

0x91ba,	// (0x0007662f) aid_size_touch_calib_2_ParamLimits

0x91ba,	// (0x0007662f) aid_size_touch_calib_2

0x91c8,	// (0x0007663d) aid_size_touch_calib_3_ParamLimits

0x91c8,	// (0x0007663d) aid_size_touch_calib_3

0x91d8,	// (0x0007664d) aid_size_touch_calib_4_ParamLimits

0x91d8,	// (0x0007664d) aid_size_touch_calib_4

0x91e6,	// (0x0007665b) main_touch_calib_button_group_pane_ParamLimits

0x91e6,	// (0x0007665b) main_touch_calib_button_group_pane

0x91f4,	// (0x00076669) main_touch_calib_pane_g1_ParamLimits

0x9200,	// (0x00076675) main_touch_calib_pane_g2_ParamLimits

0x920c,	// (0x00076681) main_touch_calib_pane_g3_ParamLimits

0x9218,	// (0x0007668d) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x0007cac8) main_touch_calib_pane_g_ParamLimits

0x9224,	// (0x00076699) main_touch_calib_pane_t1_ParamLimits

0x923b,	// (0x000766b0) main_touch_calib_pane_t2_ParamLimits

0x9254,	// (0x000766c9) main_touch_calib_pane_t3_ParamLimits

0x926a,	// (0x000766df) main_touch_calib_pane_t4_ParamLimits

0x9280,	// (0x000766f5) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x0007cad1) main_touch_calib_pane_t_ParamLimits

0x42ce,	// (0x00071743) list_single_fp_cale_pane_g3_ParamLimits

0x42ce,	// (0x00071743) list_single_fp_cale_pane_g3

0xefeb,	// (0x0007c460) bg_button_pane_cp012_ParamLimits

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp03_ParamLimits

0xb0ae,	// (0x00078523) cell_vitu2_function_top_pane_g1_ParamLimits

0xefeb,	// (0x0007c460) bg_vkb2_func_pane_cp04_ParamLimits

0xbefe,	// (0x00079373) main_ncimui_button_group_pane_ParamLimits

0xbefe,	// (0x00079373) main_ncimui_button_group_pane

0xbf66,	// (0x000793db) main_ncimui_pane_t3_ParamLimits

0xbf66,	// (0x000793db) main_ncimui_pane_t3

0x0ce3,	// (0x0006e158) phacti_button_group_pane

0x0e93,	// (0x0006e308) aid_size_list_single_double_ParamLimits

0xcabc,	// (0x00079f31) popup_ezdial_listscroll_window_ParamLimits

0x0e9f,	// (0x0006e314) popup_number_entry_window_cp01_ParamLimits

0xcb62,	// (0x00079fd7) phacti_button_pane_ParamLimits

0xcb62,	// (0x00079fd7) phacti_button_pane

0xebc8,	// (0x0007c03d) bg_button_pane_cp14

0x0f26,	// (0x0006e39b) phacti_button_pane_t1

0xcb73,	// (0x00079fe8) main_touch_calib_button_pane_ParamLimits

0xcb73,	// (0x00079fe8) main_touch_calib_button_pane

0x1b6f,	// (0x0006efe4) bg_button_pane_cp18_ParamLimits

0x1b6f,	// (0x0006efe4) bg_button_pane_cp18

0x0f34,	// (0x0006e3a9) main_touch_calib_button_pane_t1_ParamLimits

0x0f34,	// (0x0006e3a9) main_touch_calib_button_pane_t1

0x0f4a,	// (0x0006e3bf) main_touch_calib_button_pane_t2_ParamLimits

0x0f4a,	// (0x0006e3bf) main_touch_calib_button_pane_t2

0x0001,

0xfcb2,	// (0x0007d127) main_touch_calib_button_pane_t_ParamLimits

0xfcb2,	// (0x0007d127) main_touch_calib_button_pane_t

0xebc8,	// (0x0007c03d) cell_ncimui_button_pane

0xebc8,	// (0x0007c03d) bg_button_pane_cp032

0x0f68,	// (0x0006e3dd) cell_ncimui_button_pane_t1

0xa213,	// (0x00077688) image3_infobar_pane_ParamLimits

0xa213,	// (0x00077688) image3_infobar_pane

0xc2bc,	// (0x00079731) fs_bigclock_status_pane_ParamLimits

0xc2bc,	// (0x00079731) fs_bigclock_status_pane

0xc2c9,	// (0x0007973e) main_fs_bigclock_clock_pane_ParamLimits

0xc2c9,	// (0x0007973e) main_fs_bigclock_clock_pane

0xc2e5,	// (0x0007975a) main_fs_bigclock_indi_pane_ParamLimits

0xc2e5,	// (0x0007975a) main_fs_bigclock_indi_pane

0xc313,	// (0x00079788) main_fs_bigclock_swipe_pane_ParamLimits

0xc313,	// (0x00079788) main_fs_bigclock_swipe_pane

0xebc8,	// (0x0007c03d) main_fs_clock_dumped_data

0xc34d,	// (0x000797c2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc34d,	// (0x000797c2) list_single_fs_bigclock_indicator_pane_g1

0xc36c,	// (0x000797e1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc36c,	// (0x000797e1) list_single_fs_bigclock_indicator_pane_g2

0xc386,	// (0x000797fb) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc386,	// (0x000797fb) list_single_fs_bigclock_indicator_pane_g3

0xc3a2,	// (0x00079817) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc3a2,	// (0x00079817) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x0007cfd6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x0007cfd6) list_single_fs_bigclock_indicator_pane_g

0xc3d1,	// (0x00079846) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc3d1,	// (0x00079846) list_single_fs_bigclock_indicator_pane_t1

0xc3f9,	// (0x0007986e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc3f9,	// (0x0007986e) list_single_fs_bigclock_indicator_pane_t2

0xc421,	// (0x00079896) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc421,	// (0x00079896) list_single_fs_bigclock_indicator_pane_t3

0xc449,	// (0x000798be) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc449,	// (0x000798be) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0007cfe1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0007cfe1) list_single_fs_bigclock_indicator_pane_t

0x0f76,	// (0x0006e3eb) image3_infobar_fav_pane_ParamLimits

0x0f76,	// (0x0006e3eb) image3_infobar_fav_pane

0x0f86,	// (0x0006e3fb) image3_infobar_loc_pane_ParamLimits

0x0f86,	// (0x0006e3fb) image3_infobar_loc_pane

0x0f9c,	// (0x0006e411) image3_infobar_time_pane_ParamLimits

0x0f9c,	// (0x0006e411) image3_infobar_time_pane

0x1b11,	// (0x0006ef86) image3_infobar_time_pane_g1

0x0fac,	// (0x0006e421) image3_infobar_time_pane_t1

0x1b11,	// (0x0006ef86) image3_infobar_loc_pane_g1

0x0fba,	// (0x0006e42f) image3_infobar_loc_pane_g2

0x0001,

0xfcb7,	// (0x0007d12c) image3_infobar_loc_pane_g

0x0fc2,	// (0x0006e437) image3_infobar_loc_pane_t1

0x1b11,	// (0x0006ef86) image3_infobar_fav_pane_g1

0x0fd0,	// (0x0006e445) image3_infobar_fav_pane_g2

0x0001,

0xfcbc,	// (0x0007d131) image3_infobar_fav_pane_g

0x0fd8,	// (0x0006e44d) fs_bigclock_status_battery_pane

0x0fe1,	// (0x0006e456) fs_bigclock_status_signal_pane

0x0fea,	// (0x0006e45f) fs_bigclock_status_title_pane

0x0ff3,	// (0x0006e468) fs_bigclock_status_signal_pane_g1

0x0ffc,	// (0x0006e471) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc1,	// (0x0007d136) fs_bigclock_status_signal_pane_g

0x1004,	// (0x0006e479) fs_bigclock_status_battery_pane_g1

0x100d,	// (0x0006e482) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc6,	// (0x0007d13b) fs_bigclock_status_battery_pane_g

0x1015,	// (0x0006e48a) fs_bigclock_status_title_pane_t1

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g1

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g2

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g3

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfccb,	// (0x0007d140) main_fs_bigclock_clock_pane_g

0xcb93,	// (0x0007a008) main_fs_bigclock_clock_pane_t1

0xcba9,	// (0x0007a01e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd4,	// (0x0007d149) main_fs_bigclock_clock_pane_t

0x1023,	// (0x0006e498) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1023,	// (0x0006e498) list_single_fs_bigclock_indicator_pane

0x1034,	// (0x0006e4a9) list_single_fs_bigclock_pane_ParamLimits

0x1034,	// (0x0006e4a9) list_single_fs_bigclock_pane

0x105a,	// (0x0006e4cf) main_fs_bigclock_indicator_pane_t1

0x1069,	// (0x0006e4de) list_single_fs_bigclock_pane_g1

0x1071,	// (0x0006e4e6) list_single_fs_bigclock_pane_t1

0x1b11,	// (0x0006ef86) main_fs_bigclock_swipe_pane_g1

0x10b4,	// (0x0006e529) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce5,	// (0x0007d15a) main_fs_bigclock_swipe_pane_g

0x10bc,	// (0x0006e531) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x10bc,	// (0x0006e531) main_fs_bigclock_swipe_pane_t1

0x7ebd,	// (0x00075332) call_type_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_btmg_pane

0x5b50,	// (0x00072fc5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5b50,	// (0x00072fc5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc58,	// (0x0007d0cd) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc58,	// (0x0007d0cd) list_single_cale_mrui_row_pane_g

0x5c86,	// (0x000730fb) list_recal_vselct_arw_lo_pane

0x0ef1,	// (0x0006e366) list_recal_vselct_arw_up_pane

0x5c8e,	// (0x00073103) list_recal_vselct_pane

0xcc00,	// (0x0007a075) btmg_button_pane

0xcc0c,	// (0x0007a081) main_btmg_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp044

0x10d9,	// (0x0006e54e) btmg_button_pane_t1

0x3b82,	// (0x00070ff7) aid_listscroll_gen

0xefeb,	// (0x0007c460) main_cntbar_detail_pane

0x0c14,	// (0x0006e089) list_cmail_folder_pane

0xeff9,	// (0x0007c46e) sp_fs_scroll_pane_cp03_ParamLimits

0x5d1e,	// (0x00073193) list_single_fs_dyc_pane_cp01_ParamLimits

0x5d1e,	// (0x00073193) list_single_fs_dyc_pane_cp01

0x10e7,	// (0x0006e55c) aid_size_cmail_indent

0x5d3b,	// (0x000731b0) list_single_dyc_row_pane_cp01

0xcc34,	// (0x0007a0a9) cntbar_detail_list_pane_ParamLimits

0xcc34,	// (0x0007a0a9) cntbar_detail_list_pane

0xcc74,	// (0x0007a0e9) main_cntbar_detail_cont_pane_ParamLimits

0xcc74,	// (0x0007a0e9) main_cntbar_detail_cont_pane

0x7eb1,	// (0x00075326) scroll_pane_cp032_ParamLimits

0x7eb1,	// (0x00075326) scroll_pane_cp032

0xcc80,	// (0x0007a0f5) cntbar_detail_list_event_pane_ParamLimits

0xcc80,	// (0x0007a0f5) cntbar_detail_list_event_pane

0xcc42,	// (0x0007a0b7) cntbar_detail_list_shct_pane

0x1fc4,	// (0x0006f439) aid_list_gen

0x10f0,	// (0x0006e565) aid_scroll

0x10f9,	// (0x0006e56e) aid_size_touch_scroll_bar

0xcc90,	// (0x0007a105) aid_list_double

0x15c2,	// (0x0006ea37) aid_list_single

0x15c2,	// (0x0006ea37) aid_list_single_lg

0x5d44,	// (0x000731b9) aid_list_z_g_a_sm

0xcc99,	// (0x0007a10e) aid_list_z_g_d

0x5d4c,	// (0x000731c1) aid_txt_z_prm

0x5d5a,	// (0x000731cf) aid_txt_z_prm_cp01

0x5d68,	// (0x000731dd) aid_txt_z_sec

0xcca1,	// (0x0007a116) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcca1,	// (0x0007a116) main_cntbar_detail_cont_pane_g1

0xccae,	// (0x0007a123) main_cntbar_detail_cont_pane_g2_ParamLimits

0xccae,	// (0x0007a123) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcea,	// (0x0007d15f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcea,	// (0x0007d15f) main_cntbar_detail_cont_pane_g

0x1102,	// (0x0006e577) main_cntbar_detail_cont_pane_t1

0x1110,	// (0x0006e585) main_cntbar_detail_cont_pane_t2

0x111e,	// (0x0006e593) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcef,	// (0x0007d164) main_cntbar_detail_cont_pane_t

0xccba,	// (0x0007a12f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xccba,	// (0x0007a12f) cell_cntbar_detail_list_shct_pane

0x112c,	// (0x0006e5a1) cntbar_detail_list_shct_pane_g1

0x1135,	// (0x0006e5aa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf6,	// (0x0007d16b) cntbar_detail_list_shct_pane_g

0xccce,	// (0x0007a143) cntbar_detail_list_event_pane_g1_ParamLimits

0xccce,	// (0x0007a143) cntbar_detail_list_event_pane_g1

0xccda,	// (0x0007a14f) cntbar_detail_list_event_pane_g2_ParamLimits

0xccda,	// (0x0007a14f) cntbar_detail_list_event_pane_g2

0x0005,

0xfcfb,	// (0x0007d170) cntbar_detail_list_event_pane_g_ParamLimits

0xfcfb,	// (0x0007d170) cntbar_detail_list_event_pane_g

0xcd48,	// (0x0007a1bd) cntbar_detail_list_event_pane_t1_ParamLimits

0xcd48,	// (0x0007a1bd) cntbar_detail_list_event_pane_t1

0xcd5d,	// (0x0007a1d2) cntbar_detail_list_event_pane_t2_ParamLimits

0xcd5d,	// (0x0007a1d2) cntbar_detail_list_event_pane_t2

0x0002,

0xfd08,	// (0x0007d17d) cntbar_detail_list_event_pane_t_ParamLimits

0xfd08,	// (0x0007d17d) cntbar_detail_list_event_pane_t

0x1b11,	// (0x0006ef86) cell_cntbar_detail_list_shct_pane_g1

0x826a,	// (0x000756df) navi_pane_mv_g3

0xefeb,	// (0x0007c460) main_cntbar_detail_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_notif_wgt_pane

0x9edc,	// (0x00077351) aid_tch_main_mp4_pane_g4

0xa1a5,	// (0x0007761a) popup_slider_window_cp02

0x5c7c,	// (0x000730f1) list_recal_day_event_pane

0xcc14,	// (0x0007a089) cntbar_detail_btn_pane_ParamLimits

0xcc14,	// (0x0007a089) cntbar_detail_btn_pane

0xcc24,	// (0x0007a099) cntbar_detail_btn_pane_cp01_ParamLimits

0xcc24,	// (0x0007a099) cntbar_detail_btn_pane_cp01

0xcc42,	// (0x0007a0b7) cntbar_detail_list_shct_pane_ParamLimits

0xcc4e,	// (0x0007a0c3) cntbar_detail_pane_g1_ParamLimits

0xcc4e,	// (0x0007a0c3) cntbar_detail_pane_g1

0xcc5e,	// (0x0007a0d3) cntbar_detail_pane_t1_ParamLimits

0xcc5e,	// (0x0007a0d3) cntbar_detail_pane_t1

0xcce6,	// (0x0007a15b) cntbar_detail_list_event_pane_g3_ParamLimits

0xcce6,	// (0x0007a15b) cntbar_detail_list_event_pane_g3

0xccfe,	// (0x0007a173) cntbar_detail_list_event_pane_g4_ParamLimits

0xccfe,	// (0x0007a173) cntbar_detail_list_event_pane_g4

0xcd16,	// (0x0007a18b) cntbar_detail_list_event_pane_g5_ParamLimits

0xcd16,	// (0x0007a18b) cntbar_detail_list_event_pane_g5

0xcd2e,	// (0x0007a1a3) cntbar_detail_list_event_pane_g6_ParamLimits

0xcd2e,	// (0x0007a1a3) cntbar_detail_list_event_pane_g6

0xcd72,	// (0x0007a1e7) cntbar_detail_list_event_pane_t3_ParamLimits

0xcd72,	// (0x0007a1e7) cntbar_detail_list_event_pane_t3

0xcd84,	// (0x0007a1f9) popup_notif_wgt_window_ParamLimits

0xcd84,	// (0x0007a1f9) popup_notif_wgt_window

0xcd94,	// (0x0007a209) popup_submenu_window_cp01_ParamLimits

0xcd94,	// (0x0007a209) popup_submenu_window_cp01

0x1d4c,	// (0x0006f1c1) bg_popup_window_pane_cp10

0x113e,	// (0x0006e5b3) listscroll_notif_wgt_pane

0x1150,	// (0x0006e5c5) list_notif_wgt_window

0x1159,	// (0x0006e5ce) scroll_pane_cp033

0xcda4,	// (0x0007a219) list_notif_wgt_row_pane_ParamLimits

0xcda4,	// (0x0007a219) list_notif_wgt_row_pane

0x1162,	// (0x0006e5d7) aid_size_list_notif_wgt_del

0x116f,	// (0x0006e5e4) list_notif_wgt_row_pane_g1

0x117b,	// (0x0006e5f0) list_notif_wgt_row_pane_g2

0x118a,	// (0x0006e5ff) list_notif_wgt_row_pane_g3

0x0002,

0xfd0f,	// (0x0007d184) list_notif_wgt_row_pane_g

0x1197,	// (0x0006e60c) list_notif_wgt_row_pane_t1

0x11ad,	// (0x0006e622) list_notif_wgt_row_pane_t2

0x11bf,	// (0x0006e634) list_notif_wgt_row_pane_t3

0x0002,

0xfd16,	// (0x0007d18b) list_notif_wgt_row_pane_t

0xe6eb,	// (0x0007bb60) list_recal_day_event_pane_g1

0x11d1,	// (0x0006e646) list_recal_day_event_pane_t1

0xebc8,	// (0x0007c03d) bg_button_pane_cp045

0xcdb8,	// (0x0007a22d) cntbar_detail_btn_pane_t1

0x2739,	// (0x0006fbae) main_callh_pane_ParamLimits

0x2739,	// (0x0006fbae) main_callh_pane

0xebc8,	// (0x0007c03d) main_coverflow0_pane

0xebc8,	// (0x0007c03d) main_wgtman_pane

0xc32b,	// (0x000797a0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc32b,	// (0x000797a0) main_fs_bigclock_unlock_btn_pane

0xc837,	// (0x00079cac) bg_button_pane_cp16

0xc847,	// (0x00079cbc) cell_tport_appsw_pane_g3

0xcdc6,	// (0x0007a23b) cf0_flow_pane_ParamLimits

0xcdc6,	// (0x0007a23b) cf0_flow_pane

0x11e0,	// (0x0006e655) listscroll_cf0_pane

0x11eb,	// (0x0006e660) main_cf0_pane_g1

0xcdd5,	// (0x0007a24a) main_cf0_pane_t1_ParamLimits

0xcdd5,	// (0x0007a24a) main_cf0_pane_t1

0xcde9,	// (0x0007a25e) main_cf0_pane_t2_ParamLimits

0xcde9,	// (0x0007a25e) main_cf0_pane_t2

0x0001,

0xfd22,	// (0x0007d197) main_cf0_pane_t_ParamLimits

0xfd22,	// (0x0007d197) main_cf0_pane_t

0x11fd,	// (0x0006e672) scroll_pane_cp11

0xcdfd,	// (0x0007a272) cf0_flow_pane_g1

0xce05,	// (0x0007a27a) cf0_flow_pane_g2

0x0001,

0xfd27,	// (0x0007d19c) cf0_flow_pane_g

0xce0d,	// (0x0007a282) cf0_flow_pane_t1

0xebc8,	// (0x0007c03d) main_call6_pane

0xebc8,	// (0x0007c03d) main_calllock_pane

0xce1b,	// (0x0007a290) call6_btn_grp_pane_ParamLimits

0xce1b,	// (0x0007a290) call6_btn_grp_pane

0xce28,	// (0x0007a29d) call6_pane_g1_ParamLimits

0xce28,	// (0x0007a29d) call6_pane_g1

0xce38,	// (0x0007a2ad) popup_call6_1st_window_ParamLimits

0xce38,	// (0x0007a2ad) popup_call6_1st_window

0xce48,	// (0x0007a2bd) popup_call6_2nd_window_ParamLimits

0xce48,	// (0x0007a2bd) popup_call6_2nd_window

0xce58,	// (0x0007a2cd) cell_call6_btn_pane_ParamLimits

0xce58,	// (0x0007a2cd) cell_call6_btn_pane

0x1d4c,	// (0x0006f1c1) bg_popup_call2_in_pane_cp03

0x1208,	// (0x0006e67d) popup_call6_1st_window_g1

0x1210,	// (0x0006e685) popup_call6_1st_window_g2

0x1218,	// (0x0006e68d) popup_call6_1st_window_g3

0x0002,

0xfd2c,	// (0x0007d1a1) popup_call6_1st_window_g

0x1220,	// (0x0006e695) popup_call6_1st_window_t1

0x122f,	// (0x0006e6a4) popup_call6_1st_window_t2

0x123f,	// (0x0006e6b4) popup_call6_1st_window_t3

0x0002,

0xfd33,	// (0x0007d1a8) popup_call6_1st_window_t

0x1d4c,	// (0x0006f1c1) bg_popup_call2_in_pane_cp04

0x124f,	// (0x0006e6c4) popup_call6_2nd_window_g1

0x1257,	// (0x0006e6cc) popup_call6_2nd_window_g2

0x125f,	// (0x0006e6d4) popup_call6_2nd_window_g3

0x0002,

0xfd3a,	// (0x0007d1af) popup_call6_2nd_window_g

0x1267,	// (0x0006e6dc) popup_call6_2nd_window_t1

0xebc8,	// (0x0007c03d) bg_button_pane_cp15

0x12c5,	// (0x0006e73a) cell_call6_btn_pane_g1

0x17bf,	// (0x0006ec34) cell_call6_btn_pane_t1

0xce69,	// (0x0007a2de) listscroll_wgtman_pane_ParamLimits

0xce69,	// (0x0007a2de) listscroll_wgtman_pane

0xce85,	// (0x0007a2fa) wgtman_btn_pane_ParamLimits

0xce85,	// (0x0007a2fa) wgtman_btn_pane

0x2526,	// (0x0006f99b) aid_scroll_copy1

0x128e,	// (0x0006e703) list_wgtman_pane

0xceba,	// (0x0007a32f) wgtman_btn_pane_g1_ParamLimits

0xceba,	// (0x0007a32f) wgtman_btn_pane_g1

0xcee2,	// (0x0007a357) wgtman_btn_pane_t1_ParamLimits

0xcee2,	// (0x0007a357) wgtman_btn_pane_t1

0x1298,	// (0x0006e70d) wgtman_btn_pane_t2_ParamLimits

0x1298,	// (0x0006e70d) wgtman_btn_pane_t2

0x0001,

0xfd41,	// (0x0007d1b6) wgtman_btn_pane_t_ParamLimits

0xfd41,	// (0x0007d1b6) wgtman_btn_pane_t

0xcf19,	// (0x0007a38e) listrow_wgtman_pane_ParamLimits

0xcf19,	// (0x0007a38e) listrow_wgtman_pane

0xcf30,	// (0x0007a3a5) listrow_wgtman_pane_g1

0xcf3d,	// (0x0007a3b2) listrow_wgtman_pane_g2

0x0001,

0xfd46,	// (0x0007d1bb) listrow_wgtman_pane_g

0x5d76,	// (0x000731eb) listrow_wgtman_pane_t1

0x5d8e,	// (0x00073203) listrow_wgtman_pane_t2

0x0001,

0xfd4b,	// (0x0007d1c0) listrow_wgtman_pane_t

0x5db4,	// (0x00073229) wait_bar_pane_cp09

0x12af,	// (0x0006e724) main_calllock_btn_pane

0x12b9,	// (0x0006e72e) main_calllock_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp17

0x12c5,	// (0x0006e73a) main_calllock_btn_pane_g1

0x12ce,	// (0x0006e743) main_calllock_btn_pane_t1

0xebc8,	// (0x0007c03d) main_dialer3_pane

0xebc8,	// (0x0007c03d) main_fmrd2_pane

0x1b11,	// (0x0006ef86) main_fs_bigclock_unlock_btn_pane_g1

0xcf63,	// (0x0007a3d8) main_fs_bigclock_unlock_btn_pane_t1

0xcf71,	// (0x0007a3e6) area_fmrd2_info_pane_ParamLimits

0xcf71,	// (0x0007a3e6) area_fmrd2_info_pane

0xcf7d,	// (0x0007a3f2) area_fmrd2_visual_pane_ParamLimits

0xcf7d,	// (0x0007a3f2) area_fmrd2_visual_pane

0xcf8b,	// (0x0007a400) fmrd2_indi_pane_ParamLimits

0xcf8b,	// (0x0007a400) fmrd2_indi_pane

0xcf98,	// (0x0007a40d) area_fmrd2_visual_pane_g1

0xcfa0,	// (0x0007a415) area_fmrd2_visual_pane_t1

0xcfb0,	// (0x0007a425) area_fmrd2_visual_pane_t2

0xcfc0,	// (0x0007a435) area_fmrd2_visual_pane_t3

0x0002,

0xfd55,	// (0x0007d1ca) area_fmrd2_visual_pane_t

0xcfd0,	// (0x0007a445) area_fmrd2_info_pane_g1

0xcfd8,	// (0x0007a44d) area_fmrd2_info_pane_t1

0xcfe8,	// (0x0007a45d) area_fmrd2_info_pane_t2

0xcff8,	// (0x0007a46d) area_fmrd2_info_pane_t3

0xd008,	// (0x0007a47d) area_fmrd2_info_pane_t4

0x0003,

0xfd5c,	// (0x0007d1d1) area_fmrd2_info_pane_t

0xd018,	// (0x0007a48d) fmrd2_indi_pane_t1

0xd028,	// (0x0007a49d) fmrd2_indi_pane_t2

0xd038,	// (0x0007a4ad) fmrd2_indi_pane_t3

0x0002,

0xfd65,	// (0x0007d1da) fmrd2_indi_pane_t

0xc3b3,	// (0x00079828) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc3b3,	// (0x00079828) list_single_fs_bigclock_indicator_pane_g5

0xc468,	// (0x000798dd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc468,	// (0x000798dd) list_single_fs_bigclock_indicator_pane_t5

0xe324,	// (0x0007b799) aid_cell_bcale_month_pane_ParamLimits

0xe324,	// (0x0007b799) aid_cell_bcale_month_pane

0xe324,	// (0x0007b799) bcale_month_pane_ParamLimits

0xe324,	// (0x0007b799) bcale_month_pane

0x0d7e,	// (0x0006e1f3) bcale_preview_pane_ParamLimits

0x0d7e,	// (0x0006e1f3) bcale_preview_pane

0x1071,	// (0x0006e4e6) list_single_fs_bigclock_pane_t1_ParamLimits

0x1090,	// (0x0006e505) list_single_fs_bigclock_pane_t2_ParamLimits

0x1090,	// (0x0006e505) list_single_fs_bigclock_pane_t2

0x0001,

0xfce0,	// (0x0007d155) list_single_fs_bigclock_pane_t_ParamLimits

0xfce0,	// (0x0007d155) list_single_fs_bigclock_pane_t

0xcf5b,	// (0x0007a3d0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd50,	// (0x0007d1c5) main_fs_bigclock_unlock_btn_pane_g

0xd048,	// (0x0007a4bd) aid_dia3_key_size_ParamLimits

0xd048,	// (0x0007a4bd) aid_dia3_key_size

0xd054,	// (0x0007a4c9) aid_dia3_listrow_size_ParamLimits

0xd054,	// (0x0007a4c9) aid_dia3_listrow_size

0xd064,	// (0x0007a4d9) dia3_keypad_fun_pane_ParamLimits

0xd064,	// (0x0007a4d9) dia3_keypad_fun_pane

0xd074,	// (0x0007a4e9) dia3_keypad_num_pane_ParamLimits

0xd074,	// (0x0007a4e9) dia3_keypad_num_pane

0xd084,	// (0x0007a4f9) dia3_listscroll_pane_ParamLimits

0xd084,	// (0x0007a4f9) dia3_listscroll_pane

0xd092,	// (0x0007a507) dia3_numentry_pane_ParamLimits

0xd092,	// (0x0007a507) dia3_numentry_pane

0x12dd,	// (0x0006e752) dia3_list_pane

0xd0a0,	// (0x0007a515) scroll_pane_cp12

0xebc8,	// (0x0007c03d) bg_dia3_numentry_pane

0xd0ab,	// (0x0007a520) dia3_numentry_pane_t1

0xd0ba,	// (0x0007a52f) cell_dia3_key_num_pane

0xd0c2,	// (0x0007a537) cell_dia3_key0_fun_pane_ParamLimits

0xd0c2,	// (0x0007a537) cell_dia3_key0_fun_pane

0xd0cf,	// (0x0007a544) cell_dia3_key1_fun_pane_ParamLimits

0xd0cf,	// (0x0007a544) cell_dia3_key1_fun_pane

0xd0dc,	// (0x0007a551) dia3_listrow_pane

0x077a,	// (0x0006dbef) bg_dia3_numentry_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp21

0xd0e9,	// (0x0007a55e) cell_dia3_key_num_pane_t1

0xd0f7,	// (0x0007a56c) cell_dia3_key_num_pane_t2

0xd106,	// (0x0007a57b) cell_dia3_key_num_pane_t3

0xd115,	// (0x0007a58a) cell_dia3_key_num_pane_t4

0x0003,

0xfd6c,	// (0x0007d1e1) cell_dia3_key_num_pane_t

0xebc8,	// (0x0007c03d) bg_button_pane_cp19

0xd124,	// (0x0007a599) cell_dia3_key0_fun_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp20

0xd12c,	// (0x0007a5a1) cell_dia3_key1_fun_pane_g1

0xf005,	// (0x0007c47a) area_left_week_number_pane

0xf005,	// (0x0007c47a) area_top_day_name_pane

0xf005,	// (0x0007c47a) frame_month_view_pane

0xf005,	// (0x0007c47a) grid_month_view_pane

0xf005,	// (0x0007c47a) cell_top_day_name_pane_ParamLimits

0xf005,	// (0x0007c47a) cell_top_day_name_pane

0xf005,	// (0x0007c47a) cell_area_left_week_number_pane_ParamLimits

0xf005,	// (0x0007c47a) cell_area_left_week_number_pane

0xf005,	// (0x0007c47a) cell_month_view_pane_ParamLimits

0xf005,	// (0x0007c47a) cell_month_view_pane

0xf011,	// (0x0007c486) frm_month_g1

0xf011,	// (0x0007c486) frm_month_g2

0xf011,	// (0x0007c486) frm_month_g3

0xf011,	// (0x0007c486) frm_month_g4

0xf011,	// (0x0007c486) frm_month_g5

0xf011,	// (0x0007c486) frm_month_g6

0xf011,	// (0x0007c486) frm_month_g7

0xf011,	// (0x0007c486) frm_month_g8

0xf011,	// (0x0007c486) frm_month_g9

0xf011,	// (0x0007c486) frm_month_g10

0xf011,	// (0x0007c486) frm_month_g11

0xf011,	// (0x0007c486) frm_month_g12

0xf011,	// (0x0007c486) frm_month_g13

0xf011,	// (0x0007c486) frm_month_g14

0xf011,	// (0x0007c486) frm_month_g15

0xf011,	// (0x0007c486) frm_month_g16

0x000f,

0xfd75,	// (0x0007d1ea) frm_month_g

0x12e7,	// (0x0006e75c) cell_top_day_name_pane_t1

0xf011,	// (0x0007c486) cell_area_left_week_number_pane_g1

0x12e7,	// (0x0006e75c) cell_area_left_week_number_pane_t1

0xf011,	// (0x0007c486) cell_month_view_pane_g1

0x12e7,	// (0x0006e75c) cell_month_view_pane_t1

0xebc8,	// (0x0007c03d) main_fps_pane

0x0b42,	// (0x0006dfb7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0b42,	// (0x0006dfb7) cmail_ddmenu_btn02_pane_cp1

0x0b5e,	// (0x0006dfd3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0b5e,	// (0x0006dfd3) cmail_ddmenu_btn02_pane_cp2

0xcb02,	// (0x00079f77) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcb02,	// (0x00079f77) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc93,	// (0x0007d108) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc93,	// (0x0007d108) cmail_ddmenu_btn02_pane_g

0xcb20,	// (0x00079f95) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcb20,	// (0x00079f95) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc98,	// (0x0007d10d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc98,	// (0x0007d10d) cmail_ddmenu_btn02_pane_t

0xd134,	// (0x0007a5a9) fps_text_pane_ParamLimits

0xd134,	// (0x0007a5a9) fps_text_pane

0xd141,	// (0x0007a5b6) main_fps_pane_g1_ParamLimits

0xd141,	// (0x0007a5b6) main_fps_pane_g1

0xd14d,	// (0x0007a5c2) wait_bar_pane_cp010_ParamLimits

0xd14d,	// (0x0007a5c2) wait_bar_pane_cp010

0xd159,	// (0x0007a5ce) fps_text_pane_t1_ParamLimits

0xd159,	// (0x0007a5ce) fps_text_pane_t1

0xa595,	// (0x00077a0a) cam4_image_uncrop_pane_g1

0xa59e,	// (0x00077a13) cam4_image_uncrop_pane_g2

0xa5a7,	// (0x00077a1c) cam4_image_uncrop_pane_g3

0xa5b0,	// (0x00077a25) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x0007cc5a) cam4_image_uncrop_pane_g

0xd0dc,	// (0x0007a551) dia3_listrow_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_phob2_pane

0xc7f4,	// (0x00079c69) cell_tport_appsw_pane_cp02_ParamLimits

0xc7f4,	// (0x00079c69) cell_tport_appsw_pane_cp02

0xc803,	// (0x00079c78) cell_tport_appsw_pane_cp03_ParamLimits

0xc803,	// (0x00079c78) cell_tport_appsw_pane_cp03

0xebc8,	// (0x0007c03d) phob2_contact_card_pane

0xebc8,	// (0x0007c03d) phob2_listscroll_pane

0x12f9,	// (0x0006e76e) phob2_list_pane

0x1301,	// (0x0006e776) scroll_pane_cp034

0xd172,	// (0x0007a5e7) phob2_cc_data_pane_ParamLimits

0xd172,	// (0x0007a5e7) phob2_cc_data_pane

0xd189,	// (0x0007a5fe) phob2_cc_listscroll_pane_ParamLimits

0xd189,	// (0x0007a5fe) phob2_cc_listscroll_pane

0xca3e,	// (0x00079eb3) list_double_large_graphic_phob2_pane_ParamLimits

0xca3e,	// (0x00079eb3) list_double_large_graphic_phob2_pane

0xd1a5,	// (0x0007a61a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd1a5,	// (0x0007a61a) list_double_large_graphic_phob2_pane_g1

0x5dc6,	// (0x0007323b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x5dc6,	// (0x0007323b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd96,	// (0x0007d20b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd96,	// (0x0007d20b) list_double_large_graphic_phob2_pane_g

0x5dde,	// (0x00073253) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x5dde,	// (0x00073253) list_double_large_graphic_phob2_pane_t1

0x5df3,	// (0x00073268) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x5df3,	// (0x00073268) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd9f,	// (0x0007d214) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd9f,	// (0x0007d214) list_double_large_graphic_phob2_pane_t

0x1ac5,	// (0x0006ef3a) list_highlight_pane_cp024

0xd1c0,	// (0x0007a635) phob2_cc_button_pane

0xd1ca,	// (0x0007a63f) phob2_cc_data_pane_g1_ParamLimits

0xd1ca,	// (0x0007a63f) phob2_cc_data_pane_g1

0xd1de,	// (0x0007a653) phob2_cc_data_pane_g2_ParamLimits

0xd1de,	// (0x0007a653) phob2_cc_data_pane_g2

0x0001,

0xfda4,	// (0x0007d219) phob2_cc_data_pane_g_ParamLimits

0xfda4,	// (0x0007d219) phob2_cc_data_pane_g

0xd1f2,	// (0x0007a667) phob2_cc_data_pane_t1_ParamLimits

0xd1f2,	// (0x0007a667) phob2_cc_data_pane_t1

0xd214,	// (0x0007a689) phob2_cc_data_pane_t2_ParamLimits

0xd214,	// (0x0007a689) phob2_cc_data_pane_t2

0xd236,	// (0x0007a6ab) phob2_cc_data_pane_t3_ParamLimits

0xd236,	// (0x0007a6ab) phob2_cc_data_pane_t3

0x0002,

0xfda9,	// (0x0007d21e) phob2_cc_data_pane_t_ParamLimits

0xfda9,	// (0x0007d21e) phob2_cc_data_pane_t

0x1309,	// (0x0006e77e) phob2_cc_list_pane_ParamLimits

0x1309,	// (0x0006e77e) phob2_cc_list_pane

0x027d,	// (0x0006d6f2) scroll_pane_cp035_ParamLimits

0x027d,	// (0x0006d6f2) scroll_pane_cp035

0xefeb,	// (0x0007c460) bg_button_pane_cp033

0xd257,	// (0x0007a6cc) phob2_cc_button_pane_g1

0xd263,	// (0x0007a6d8) phob2_cc_button_pane_t1

0xd278,	// (0x0007a6ed) phob2_cc_button_pane_t2

0x0001,

0xfdb0,	// (0x0007d225) phob2_cc_button_pane_t

0xd28a,	// (0x0007a6ff) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd28a,	// (0x0007a6ff) list_double_large_graphic_phob2_cc_pane

0xd2d7,	// (0x0007a74c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd2d7,	// (0x0007a74c) list_double_large_graphic_phob2_cc_pane_g1

0x5e08,	// (0x0007327d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5e08,	// (0x0007327d) list_double_large_graphic_phob2_cc_pane_g2

0x5e17,	// (0x0007328c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5e17,	// (0x0007328c) list_double_large_graphic_phob2_cc_pane_g3

0x5e26,	// (0x0007329b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5e26,	// (0x0007329b) list_double_large_graphic_phob2_cc_pane_g4

0x5e37,	// (0x000732ac) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5e37,	// (0x000732ac) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb5,	// (0x0007d22a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb5,	// (0x0007d22a) list_double_large_graphic_phob2_cc_pane_g

0x5e46,	// (0x000732bb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5e46,	// (0x000732bb) list_double_large_graphic_phob2_cc_pane_t1

0x5e6f,	// (0x000732e4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5e6f,	// (0x000732e4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc0,	// (0x0007d235) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc0,	// (0x0007d235) list_double_large_graphic_phob2_cc_pane_t

0x1315,	// (0x0006e78a) list_highlight_pane_cp025_ParamLimits

0x1315,	// (0x0006e78a) list_highlight_pane_cp025

0xefeb,	// (0x0007c460) bg_button_pane_cp033_ParamLimits

0xd257,	// (0x0007a6cc) phob2_cc_button_pane_g1_ParamLimits

0xd263,	// (0x0007a6d8) phob2_cc_button_pane_t1_ParamLimits

0xd278,	// (0x0007a6ed) phob2_cc_button_pane_t2_ParamLimits

0xfdb0,	// (0x0007d225) phob2_cc_button_pane_t_ParamLimits

0x6187,	// (0x000735fc) popup_wgtman_window

0xe5a9,	// (0x0007ba1e) scroll_pane_cp038

0xcea2,	// (0x0007a317) wgtman_btn_pane_cp_01_ParamLimits

0xcea2,	// (0x0007a317) wgtman_btn_pane_cp_01

0x1323,	// (0x0006e798) wgtman_content_pane

0x132c,	// (0x0006e7a1) wgtman_heading_pane

0xebc8,	// (0x0007c03d) bg_heading_pane_cp02

0x1335,	// (0x0006e7aa) wgtman_heading_pane_g1

0x133d,	// (0x0006e7b2) wgtman_heading_pane_t1

0x134b,	// (0x0006e7c0) scroll_pane_cp036

0x1353,	// (0x0006e7c8) wgtman_list_pane

0x0a4a,	// (0x0006debf) wgtman_list_pane_t1_ParamLimits

0x0a4a,	// (0x0006debf) wgtman_list_pane_t1

0xa4f2,	// (0x00077967) cam4_grid_pane

0xb274,	// (0x000786e9) bg_button_pane_cp015_ParamLimits

0xb289,	// (0x000786fe) bg_button_pane_cp016_ParamLimits

0xb295,	// (0x0007870a) bg_button_pane_cp017_ParamLimits

0xb2ee,	// (0x00078763) popup_vitu2_query_window_g3_ParamLimits

0xb2ee,	// (0x00078763) popup_vitu2_query_window_g3

0xb38f,	// (0x00078804) popup_vitu2_query_window_t6_ParamLimits

0xb38f,	// (0x00078804) popup_vitu2_query_window_t6

0xb3ba,	// (0x0007882f) popup_vitu2_query_window_t7_ParamLimits

0xb3ba,	// (0x0007882f) popup_vitu2_query_window_t7

0x0133,	// (0x0006d5a8) cam4_grid_pane_g1

0x013c,	// (0x0006d5b1) cam4_grid_pane_g2

0x135b,	// (0x0006e7d0) cam4_grid_pane_g3

0x1364,	// (0x0006e7d9) cam4_grid_pane_g4

0x0003,

0xfdc5,	// (0x0007d23a) cam4_grid_pane_g

0x6d2f,	// (0x000741a4) aid_placing_vt_slider_lsc_ParamLimits

0x704f,	// (0x000744c4) vidtel_button_pane_ParamLimits

0x704f,	// (0x000744c4) vidtel_button_pane

0xebc8,	// (0x0007c03d) bg_button_pane_cp034

0x136f,	// (0x0006e7e4) vidtel_button_pane_g1

0x1377,	// (0x0006e7ec) vidtel_button_pane_t1

0xe6db,	// (0x0007bb50) aid_size_vtel_slider_touch

0x027d,	// (0x0006d6f2) scroll_pane_cp039

0xc0d5,	// (0x0007954a) ncim_query_button_pane_cp01_ParamLimits

0xc0f4,	// (0x00079569) ncimui_query_pane_g1_ParamLimits

0xefeb,	// (0x0007c460) input_focus_pane_cp012_ParamLimits

0x07b8,	// (0x0006dc2d) ncim_query_entry_pane_t1_ParamLimits

0x027d,	// (0x0006d6f2) scroll_pane_cp039_ParamLimits

0x81dc,	// (0x00075651) navi_pane_bcale_mc_g1

0x81e4,	// (0x00075659) navi_pane_bcale_mc_t1

0x0b94,	// (0x0006e009) main_sp_fs_email_pane_g1

0x0ba0,	// (0x0006e015) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x0007d04b) main_sp_fs_email_pane_g

0x0db9,	// (0x0006e22e) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0db9,	// (0x0006e22e) list_single_cale_mrui_row_pane_g3

0x5cdc,	// (0x00073151) list_single_recal_day_pane_g5_event_pane

0x5cf2,	// (0x00073167) list_single_recal_day_pane_g7

0x138d,	// (0x0006e802) list_recal_day_event_pane_cp01

0x1396,	// (0x0006e80b) list_recal_vselct_arw_lo_pane_cp01

0x139e,	// (0x0006e813) list_recal_vselct_arw_up_pane_cp01

0x13a6,	// (0x0006e81b) list_recal_vselct_pane_cp01

0xe6eb,	// (0x0007bb60) list_recal_day_event_pane_cp01_g1

0x5e98,	// (0x0007330d) list_recal_day_event_pane_cp01_t1

0x5cfa,	// (0x0007316f) list_single_recal_day_pane_t1_ParamLimits

0x5d0c,	// (0x00073181) list_single_recal_day_pane_t2_ParamLimits

0xfca8,	// (0x0007d11d) list_single_recal_day_pane_t_ParamLimits

0x1a58,	// (0x0006eecd) bg_notes_pane_ParamLimits

0x1b4d,	// (0x0006efc2) list_notes_pane_ParamLimits

0x628e,	// (0x00073703) scroll_pane_cp06_ParamLimits

0x1b6f,	// (0x0006efe4) main_notes_pane_ParamLimits

0xefeb,	// (0x0007c460) main_welc_pane

0xd322,	// (0x0007a797) main_welc_body_pane_ParamLimits

0xd322,	// (0x0007a797) main_welc_body_pane

0xd33d,	// (0x0007a7b2) main_welc_opti_pane_ParamLimits

0xd33d,	// (0x0007a7b2) main_welc_opti_pane

0xd394,	// (0x0007a809) main_welc_pane_t1_ParamLimits

0xd394,	// (0x0007a809) main_welc_pane_t1

0xd54c,	// (0x0007a9c1) main_welc_body_row_pane_ParamLimits

0xd54c,	// (0x0007a9c1) main_welc_body_row_pane

0x1ac5,	// (0x0006ef3a) main_welc_opti_row_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) main_welc_opti_row_pane

0x13b8,	// (0x0006e82d) main_welc_opti_row_pane_g1

0xd566,	// (0x0007a9db) main_welc_opti_row_pane_t1

0x13c0,	// (0x0006e835) main_welc_body_row_pane_t1

0x1148,	// (0x0006e5bd) popup_notif_wgt_heading_pane

0x1162,	// (0x0006e5d7) aid_size_list_notif_wgt_del_ParamLimits

0x116f,	// (0x0006e5e4) list_notif_wgt_row_pane_g1_ParamLimits

0x117b,	// (0x0006e5f0) list_notif_wgt_row_pane_g2_ParamLimits

0x118a,	// (0x0006e5ff) list_notif_wgt_row_pane_g3_ParamLimits

0xfd0f,	// (0x0007d184) list_notif_wgt_row_pane_g_ParamLimits

0x1197,	// (0x0006e60c) list_notif_wgt_row_pane_t1_ParamLimits

0x11ad,	// (0x0006e622) list_notif_wgt_row_pane_t2_ParamLimits

0x11bf,	// (0x0006e634) list_notif_wgt_row_pane_t3_ParamLimits

0xfd16,	// (0x0007d18b) list_notif_wgt_row_pane_t_ParamLimits

0xcf30,	// (0x0007a3a5) listrow_wgtman_pane_g1_ParamLimits

0xcf3d,	// (0x0007a3b2) listrow_wgtman_pane_g2_ParamLimits

0xfd46,	// (0x0007d1bb) listrow_wgtman_pane_g_ParamLimits

0x5d76,	// (0x000731eb) listrow_wgtman_pane_t1_ParamLimits

0x5d8e,	// (0x00073203) listrow_wgtman_pane_t2_ParamLimits

0xfd4b,	// (0x0007d1c0) listrow_wgtman_pane_t_ParamLimits

0x5db4,	// (0x00073229) wait_bar_pane_cp09_ParamLimits

0xebc8,	// (0x0007c03d) bg_popup_heading_pane_cp02

0x13cf,	// (0x0006e844) popup_notif_wgt_heading_pane_g1

0x13d7,	// (0x0006e84c) popup_notif_wgt_heading_pane_t1

0xebc8,	// (0x0007c03d) main_vids_pane

0xebc8,	// (0x0007c03d) vids_listscroll_pane

0xd575,	// (0x0007a9ea) scroll_pane_cp040

0xebc8,	// (0x0007c03d) vids_list_pane

0xd580,	// (0x0007a9f5) vids_list_double_pane_ParamLimits

0xd580,	// (0x0007a9f5) vids_list_double_pane

0xd594,	// (0x0007aa09) vids_list_double_pane_g1

0xd59d,	// (0x0007aa12) vids_list_double_pane_t1

0xd5ad,	// (0x0007aa22) vids_list_double_pane_t2

0x0001,

0xfde4,	// (0x0007d259) vids_list_double_pane_t

0xefeb,	// (0x0007c460) main_ncimui_pane_ParamLimits

0xbf16,	// (0x0007938b) main_ncimui_pane_g1_ParamLimits

0xbf24,	// (0x00079399) main_ncimui_pane_g2_ParamLimits

0xbf24,	// (0x00079399) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x0007cf4c) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x0007cf4c) main_ncimui_pane_g

0xd358,	// (0x0007a7cd) main_welc_pane_g1_ParamLimits

0xd358,	// (0x0007a7cd) main_welc_pane_g1

0xd364,	// (0x0007a7d9) main_welc_pane_g2_ParamLimits

0xd364,	// (0x0007a7d9) main_welc_pane_g2

0x0003,

0xfdce,	// (0x0007d243) main_welc_pane_g_ParamLimits

0xfdce,	// (0x0007d243) main_welc_pane_g

0x1a58,	// (0x0006eecd) listscroll_mce_pane_ParamLimits

0x82a6,	// (0x0007571b) wait_bar_pane_cp10

0x3b8a,	// (0x00070fff) main_cale_day_pane_ParamLimits

0x3b8a,	// (0x00070fff) main_cale_week_pane_ParamLimits

0x1a58,	// (0x0006eecd) main_messa_pane_ParamLimits

0x99ce,	// (0x00076e43) main_clock2_btn_pane_ParamLimits

0x99ce,	// (0x00076e43) main_clock2_btn_pane

0x4348,	// (0x000717bd) main_clock2_btn_pane_cp01_ParamLimits

0x4348,	// (0x000717bd) main_clock2_btn_pane_cp01

0x0d98,	// (0x0006e20d) list_cale_mrui_pane_ParamLimits

0x11f5,	// (0x0006e66a) main_cf0_pane_g2

0x0001,

0xfd1d,	// (0x0007d192) main_cf0_pane_g

0xf005,	// (0x0007c47a) area_left_week_number_pane_ParamLimits

0xf005,	// (0x0007c47a) area_top_day_name_pane_ParamLimits

0xf005,	// (0x0007c47a) frame_month_view_pane_ParamLimits

0xf005,	// (0x0007c47a) grid_month_view_pane_ParamLimits

0xf011,	// (0x0007c486) frm_month_g1_ParamLimits

0xf011,	// (0x0007c486) frm_month_g2_ParamLimits

0xf011,	// (0x0007c486) frm_month_g3_ParamLimits

0xf011,	// (0x0007c486) frm_month_g4_ParamLimits

0xf011,	// (0x0007c486) frm_month_g5_ParamLimits

0xf011,	// (0x0007c486) frm_month_g6_ParamLimits

0xf011,	// (0x0007c486) frm_month_g7_ParamLimits

0xf011,	// (0x0007c486) frm_month_g8_ParamLimits

0xf011,	// (0x0007c486) frm_month_g9_ParamLimits

0xf011,	// (0x0007c486) frm_month_g10_ParamLimits

0xf011,	// (0x0007c486) frm_month_g11_ParamLimits

0xf011,	// (0x0007c486) frm_month_g12_ParamLimits

0xf011,	// (0x0007c486) frm_month_g13_ParamLimits

0xf011,	// (0x0007c486) frm_month_g14_ParamLimits

0xf011,	// (0x0007c486) frm_month_g15_ParamLimits

0xf011,	// (0x0007c486) frm_month_g16_ParamLimits

0xfd75,	// (0x0007d1ea) frm_month_g_ParamLimits

0x12e7,	// (0x0006e75c) cell_top_day_name_pane_t1_ParamLimits

0xf011,	// (0x0007c486) cell_area_left_week_number_pane_g1_ParamLimits

0x12e7,	// (0x0006e75c) cell_area_left_week_number_pane_t1_ParamLimits

0xf011,	// (0x0007c486) cell_month_view_pane_g1_ParamLimits

0x12e7,	// (0x0006e75c) cell_month_view_pane_t1_ParamLimits

0x1a50,	// (0x0006eec5) main_clock2_btn_pane_g1

0x13e5,	// (0x0006e85a) main_clock2_btn_pane_t1

0xefeb,	// (0x0007c460) listscroll_cmail_pane_ParamLimits

0x0b94,	// (0x0006e009) main_sp_fs_email_pane_g1_ParamLimits

0x0ba0,	// (0x0006e015) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x0007d04b) main_sp_fs_email_pane_g_ParamLimits

0x0ed2,	// (0x0006e347) list_recal_day_pane_ParamLimits

0x0ee3,	// (0x0006e358) mian_recal_day_pane_t1

0x5893,	// (0x00072d08) list_single_dyc_row_text_pane_t4_ParamLimits

0x5893,	// (0x00072d08) list_single_dyc_row_text_pane_t4

0x58d8,	// (0x00072d4d) list_single_dyc_row_text_pane_t5_ParamLimits

0x58d8,	// (0x00072d4d) list_single_dyc_row_text_pane_t5

0x594e,	// (0x00072dc3) list_single_dyc_row_text_pane_t6_ParamLimits

0x594e,	// (0x00072dc3) list_single_dyc_row_text_pane_t6

0x7e05,	// (0x0007527a) aid_mgn_list_cale_time_pane

0xefeb,	// (0x0007c460) main_gallery2_pane_ParamLimits

0x435c,	// (0x000717d1) main_clock2_pane_cp01_t1

0x436a,	// (0x000717df) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x0007cb3b) main_clock2_pane_cp01_t

0x6748,	// (0x00073bbd) cale_week_scroll_pane_g16_ParamLimits

0x6748,	// (0x00073bbd) cale_week_scroll_pane_g16

0x1d4c,	// (0x0006f1c1) vorec_slider_pane

0x1377,	// (0x0006e7ec) vidtel_button_pane_t1_ParamLimits

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcb83,	// (0x00079ff8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfccb,	// (0x0007d140) main_fs_bigclock_clock_pane_g_ParamLimits

0xcb93,	// (0x0007a008) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcba9,	// (0x0007a01e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd4,	// (0x0007d149) main_fs_bigclock_clock_pane_t_ParamLimits

0x9319,	// (0x0007678e) main_mup3_lyrics_pane_ParamLimits

0x9319,	// (0x0007678e) main_mup3_lyrics_pane

0xd5e2,	// (0x0007aa57) main_mup3_lyrics_pane_t1_ParamLimits

0xd5e2,	// (0x0007aa57) main_mup3_lyrics_pane_t1

0x9ec6,	// (0x0007733b) aid_main_mp4_pane_t1_area

0x9ed0,	// (0x00077345) aid_main_mp4_pane_t2_area

0x9fd7,	// (0x0007744c) main_mp4_pane_g7_ParamLimits

0x9fd7,	// (0x0007744c) main_mp4_pane_g7

0x9fe3,	// (0x00077458) main_mp4_pane_g8_ParamLimits

0x9fe3,	// (0x00077458) main_mp4_pane_g8

0xa3b2,	// (0x00077827) aid_call6_pane_g1_size

0xd2b6,	// (0x0007a72b) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd2b6,	// (0x0007a72b) list_double_large_graphic_phob2_other_pane

0xd609,	// (0x0007aa7e) list_double_large_graphic_phob2_other_pane_g1

0xebc8,	// (0x0007c03d) list_highlight_pane_cp026

0xefeb,	// (0x0007c460) main_welc_pane_ParamLimits

0xc6e7,	// (0x00079b5c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc6e7,	// (0x00079b5c) main_sp_fs_ctrlbar_pane_g3

0xc701,	// (0x00079b76) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc701,	// (0x00079b76) main_sp_fs_ctrlbar_pane_g4

0xc733,	// (0x00079ba8) toolbar2_fixed_button_pane_cp01

0xc73e,	// (0x00079bb3) toolbar2_fixed_button_pane_cp02

0xc74b,	// (0x00079bc0) toolbar2_fixed_button_pane_cp03

0xd306,	// (0x0007a77b) list_welc_entry_pane_ParamLimits

0xd306,	// (0x0007a77b) list_welc_entry_pane

0xd372,	// (0x0007a7e7) main_welc_pane_g3_ParamLimits

0xd372,	// (0x0007a7e7) main_welc_pane_g3

0xd3b2,	// (0x0007a827) main_welc_pane_t2_ParamLimits

0xd3b2,	// (0x0007a827) main_welc_pane_t2

0xd3c6,	// (0x0007a83b) main_welc_pane_t3_ParamLimits

0xd3c6,	// (0x0007a83b) main_welc_pane_t3

0x0005,

0xfdd7,	// (0x0007d24c) main_welc_pane_t_ParamLimits

0xfdd7,	// (0x0007d24c) main_welc_pane_t

0xd4d0,	// (0x0007a945) welc_button_pane_ParamLimits

0xd4d0,	// (0x0007a945) welc_button_pane

0xd53e,	// (0x0007a9b3) welc_service_logo_pane_ParamLimits

0xd53e,	// (0x0007a9b3) welc_service_logo_pane

0xd611,	// (0x0007aa86) list_single_welc_entry_pane_ParamLimits

0xd611,	// (0x0007aa86) list_single_welc_entry_pane

0xd622,	// (0x0007aa97) list_single_welc_entry_pane_g1

0xd62a,	// (0x0007aa9f) list_single_welc_entry_pane_t1

0xd638,	// (0x0007aaad) list_single_welc_entry_pane_t2

0x0001,

0xfde9,	// (0x0007d25e) list_single_welc_entry_pane_t

0xebc8,	// (0x0007c03d) bg_button_pane_cp035

0x13f3,	// (0x0006e868) welc_button_pane_t1

0xd646,	// (0x0007aabb) welc_service_logo_pane_g1

0xd64f,	// (0x0007aac4) welc_service_logo_pane_g2

0x0001,

0xfdee,	// (0x0007d263) welc_service_logo_pane_g

0xebc8,	// (0x0007c03d) main_int_radio_pane

0x0656,	// (0x0006dacb) list_single_fs_dyc_pane_g1

0x5dd2,	// (0x00073247) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x5dd2,	// (0x00073247) list_double_large_graphic_phob2_pane_g3

0xd1b2,	// (0x0007a627) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd1b2,	// (0x0007a627) list_double_large_graphic_phob2_pane_g4

0xd658,	// (0x0007aacd) main_int_radio1_pane_ParamLimits

0xd658,	// (0x0007aacd) main_int_radio1_pane

0x1401,	// (0x0006e876) find_pane_cp02

0xd66e,	// (0x0007aae3) input_focus_pane_cp12_ParamLimits

0xd66e,	// (0x0007aae3) input_focus_pane_cp12

0xd67a,	// (0x0007aaef) input_focus_pane_cp13_ParamLimits

0xd67a,	// (0x0007aaef) input_focus_pane_cp13

0xd692,	// (0x0007ab07) input_focus_pane_cp14_ParamLimits

0xd692,	// (0x0007ab07) input_focus_pane_cp14

0x140a,	// (0x0006e87f) int_radio1_listscroll_pane

0xd6aa,	// (0x0007ab1f) main_int_radio1_pane_g1_ParamLimits

0xd6aa,	// (0x0007ab1f) main_int_radio1_pane_g1

0xd6b6,	// (0x0007ab2b) main_int_radio1_pane_t1_ParamLimits

0xd6b6,	// (0x0007ab2b) main_int_radio1_pane_t1

0xd6c8,	// (0x0007ab3d) main_int_radio1_pane_t2_ParamLimits

0xd6c8,	// (0x0007ab3d) main_int_radio1_pane_t2

0xd6dc,	// (0x0007ab51) main_int_radio1_pane_t3_ParamLimits

0xd6dc,	// (0x0007ab51) main_int_radio1_pane_t3

0xd6f0,	// (0x0007ab65) main_int_radio1_pane_t4_ParamLimits

0xd6f0,	// (0x0007ab65) main_int_radio1_pane_t4

0x1414,	// (0x0006e889) main_int_radio1_pane_t5_ParamLimits

0x1414,	// (0x0006e889) main_int_radio1_pane_t5

0xd707,	// (0x0007ab7c) main_int_radio1_pane_t6_ParamLimits

0xd707,	// (0x0007ab7c) main_int_radio1_pane_t6

0xd719,	// (0x0007ab8e) main_int_radio1_pane_t7_ParamLimits

0xd719,	// (0x0007ab8e) main_int_radio1_pane_t7

0xd72b,	// (0x0007aba0) main_int_radio1_pane_t8_ParamLimits

0xd72b,	// (0x0007aba0) main_int_radio1_pane_t8

0xd73d,	// (0x0007abb2) main_int_radio1_pane_t9_ParamLimits

0xd73d,	// (0x0007abb2) main_int_radio1_pane_t9

0xd74f,	// (0x0007abc4) main_int_radio1_pane_t10_ParamLimits

0xd74f,	// (0x0007abc4) main_int_radio1_pane_t10

0xd780,	// (0x0007abf5) main_int_radio1_pane_t11_ParamLimits

0xd780,	// (0x0007abf5) main_int_radio1_pane_t11

0xd7b1,	// (0x0007ac26) main_int_radio1_pane_t12_ParamLimits

0xd7b1,	// (0x0007ac26) main_int_radio1_pane_t12

0x000b,

0xfdf3,	// (0x0007d268) main_int_radio1_pane_t_ParamLimits

0xfdf3,	// (0x0007d268) main_int_radio1_pane_t

0x12f9,	// (0x0006e76e) int_radio_list_pane

0x1301,	// (0x0006e776) scroll_pane_cp037

0x1426,	// (0x0006e89b) list_double_large_graphic_int_radio_pane_ParamLimits

0x1426,	// (0x0006e89b) list_double_large_graphic_int_radio_pane

0x143a,	// (0x0006e8af) list_double_large_graphic_int_radio_pane_g1

0x5ea6,	// (0x0007331b) list_double_large_graphic_int_radio_pane_t1

0x5eb4,	// (0x00073329) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0c,	// (0x0007d281) list_double_large_graphic_int_radio_pane_t

0xebc8,	// (0x0007c03d) list_highlight_pane_cp027

0x13b0,	// (0x0006e825) main_button_pane_4

0xd37e,	// (0x0007a7f3) main_welc_pane_g4_ParamLimits

0xd37e,	// (0x0007a7f3) main_welc_pane_g4

0xd3d8,	// (0x0007a84d) main_welc_pane_t4_ParamLimits

0xd3d8,	// (0x0007a84d) main_welc_pane_t4

0xd3ec,	// (0x0007a861) main_welc_pane_t5_ParamLimits

0xd3ec,	// (0x0007a861) main_welc_pane_t5

0xd424,	// (0x0007a899) main_welc_pane_t6_ParamLimits

0xd424,	// (0x0007a899) main_welc_pane_t6

0xd4de,	// (0x0007a953) welc_button_pane_2_ParamLimits

0xd4de,	// (0x0007a953) welc_button_pane_2

0xd4fe,	// (0x0007a973) welc_button_pane_3_ParamLimits

0xd4fe,	// (0x0007a973) welc_button_pane_3

0x13b0,	// (0x0006e825) welc_button_pane_4

0xd520,	// (0x0007a995) welc_button_pane_5_ParamLimits

0xd520,	// (0x0007a995) welc_button_pane_5

0x5f16,	// (0x0007338b) main_popup_welc_pane

0x145b,	// (0x0006e8d0) main_welc_sk_g3

0x1465,	// (0x0006e8da) main_welc_sk_g4

0x146f,	// (0x0006e8e4) main_welc_sk_t3

0x147f,	// (0x0006e8f4) main_welc_sk_t4

0x148f,	// (0x0006e904) popup_welc_pane_t4

0x149d,	// (0x0006e912) popup_welc_pane_t5

0x14ab,	// (0x0006e920) popup_welc_pane_t6

0xebc8,	// (0x0007c03d) main_acti_pane

0xebc8,	// (0x0007c03d) main_sso_pane

0xd7c8,	// (0x0007ac3d) sso_body_pane_ParamLimits

0xd7c8,	// (0x0007ac3d) sso_body_pane

0xd7e3,	// (0x0007ac58) sso_logo_pane_ParamLimits

0xd7e3,	// (0x0007ac58) sso_logo_pane

0xd812,	// (0x0007ac87) sso_sk_pane_ParamLimits

0xd812,	// (0x0007ac87) sso_sk_pane

0xd81f,	// (0x0007ac94) main_sso_logo_pane_g1

0xd828,	// (0x0007ac9d) sso_sk_pane_t1_ParamLimits

0xd828,	// (0x0007ac9d) sso_sk_pane_t1

0xd83c,	// (0x0007acb1) sso_sk_pane_t2_ParamLimits

0xd83c,	// (0x0007acb1) sso_sk_pane_t2

0x0001,

0xfe11,	// (0x0007d286) sso_sk_pane_t_ParamLimits

0xfe11,	// (0x0007d286) sso_sk_pane_t

0x14ed,	// (0x0006e962) aid_sso_gap

0x14f6,	// (0x0006e96b) aid_sso_txt1

0x1500,	// (0x0006e975) aid_sso_txt2

0x150a,	// (0x0006e97f) aid_sso_txt3

0x0002,

0xfe16,	// (0x0007d28b) aid_sso_txt

0x1514,	// (0x0006e989) aid_sso_widget

0xd899,	// (0x0007ad0e) sso_btn_pane_ParamLimits

0xd899,	// (0x0007ad0e) sso_btn_pane

0xd91f,	// (0x0007ad94) sso_option_pane_ParamLimits

0xd91f,	// (0x0007ad94) sso_option_pane

0xd9c7,	// (0x0007ae3c) sso_query_pane_ParamLimits

0xd9c7,	// (0x0007ae3c) sso_query_pane

0xda17,	// (0x0007ae8c) sso_query_pane_cp01_ParamLimits

0xda17,	// (0x0007ae8c) sso_query_pane_cp01

0xda6d,	// (0x0007aee2) sso_t_hdr_pane_ParamLimits

0xda6d,	// (0x0007aee2) sso_t_hdr_pane

0xda91,	// (0x0007af06) sso_t_nml_pane_ParamLimits

0xda91,	// (0x0007af06) sso_t_nml_pane

0x151e,	// (0x0006e993) sso_t_sub_pane

0xd7f0,	// (0x0007ac65) sso_popup_window_ParamLimits

0xd7f0,	// (0x0007ac65) sso_popup_window

0xd84e,	// (0x0007acc3) sso_apps_pane_ParamLimits

0xd84e,	// (0x0007acc3) sso_apps_pane

0xd871,	// (0x0007ace6) sso_body_pane_g1

0xd879,	// (0x0007acee) sso_body_pane_t1

0xd889,	// (0x0007acfe) sso_body_pane_t2

0x0001,

0xfe1d,	// (0x0007d292) sso_body_pane_t

0xd8df,	// (0x0007ad54) sso_btn_pane_cp01_ParamLimits

0xd8df,	// (0x0007ad54) sso_btn_pane_cp01

0xd99b,	// (0x0007ae10) sso_prog_pane_ParamLimits

0xd99b,	// (0x0007ae10) sso_prog_pane

0xdaf1,	// (0x0007af66) sso_t_hdr_pane_t1_ParamLimits

0xdaf1,	// (0x0007af66) sso_t_hdr_pane_t1

0x1533,	// (0x0006e9a8) input_focus_pane_cp10_ParamLimits

0x1533,	// (0x0006e9a8) input_focus_pane_cp10

0x1547,	// (0x0006e9bc) sso_query_pane_t1_ParamLimits

0x1547,	// (0x0006e9bc) sso_query_pane_t1

0x155a,	// (0x0006e9cf) sso_query_pane_t2_ParamLimits

0x155a,	// (0x0006e9cf) sso_query_pane_t2

0x1574,	// (0x0006e9e9) sso_query_pane_t3_ParamLimits

0x1574,	// (0x0006e9e9) sso_query_pane_t3

0x159e,	// (0x0006ea13) sso_query_pane_t4_ParamLimits

0x159e,	// (0x0006ea13) sso_query_pane_t4

0x0003,

0xfe22,	// (0x0007d297) sso_query_pane_t_ParamLimits

0xfe22,	// (0x0007d297) sso_query_pane_t

0x15c2,	// (0x0006ea37) bg_button_pane_cp22

0x15cb,	// (0x0006ea40) sso_btn_pane_t1

0xdb0a,	// (0x0007af7f) sso_t_nml_pane_t1_ParamLimits

0xdb0a,	// (0x0007af7f) sso_t_nml_pane_t1

0x15da,	// (0x0006ea4f) sso_option_row_pane_ParamLimits

0x15da,	// (0x0006ea4f) sso_option_row_pane

0x15e7,	// (0x0006ea5c) sso_t_sub_pane_t1_ParamLimits

0x15e7,	// (0x0006ea5c) sso_t_sub_pane_t1

0xefeb,	// (0x0007c460) bg_popup_window_pane_cp11_ParamLimits

0xefeb,	// (0x0007c460) bg_popup_window_pane_cp11

0x1604,	// (0x0006ea79) popup_sk_window_cp01_ParamLimits

0x1604,	// (0x0006ea79) popup_sk_window_cp01

0x1611,	// (0x0006ea86) sso_popup_body_pane_ParamLimits

0x1611,	// (0x0006ea86) sso_popup_body_pane

0x161e,	// (0x0006ea93) scroll_pane_cp21_ParamLimits

0x161e,	// (0x0006ea93) scroll_pane_cp21

0x162b,	// (0x0006eaa0) sso_popup_body_t_pane_ParamLimits

0x162b,	// (0x0006eaa0) sso_popup_body_t_pane

0x1638,	// (0x0006eaad) sso_popup_body_t_hdr_pane_ParamLimits

0x1638,	// (0x0006eaad) sso_popup_body_t_hdr_pane

0xdb27,	// (0x0007af9c) sso_popup_body_t_nml_pane_ParamLimits

0xdb27,	// (0x0007af9c) sso_popup_body_t_nml_pane

0xdb45,	// (0x0007afba) sso_popup_body_t_sub_pane_ParamLimits

0xdb45,	// (0x0007afba) sso_popup_body_t_sub_pane

0x164a,	// (0x0006eabf) sso_popup_body_t_hdr_pane_t1

0xdb68,	// (0x0007afdd) sso_popup_body_t_nml_pane_t1_ParamLimits

0xdb68,	// (0x0007afdd) sso_popup_body_t_nml_pane_t1

0x165a,	// (0x0006eacf) sso_popup_body_t_sub_pane_t1_ParamLimits

0x165a,	// (0x0006eacf) sso_popup_body_t_sub_pane_t1

0x1b11,	// (0x0006ef86) sso_prog_pane_g1

0xdbb2,	// (0x0007b027) sso_apps_pane_comp1_ParamLimits

0xdbb2,	// (0x0007b027) sso_apps_pane_comp1

0x167f,	// (0x0006eaf4) sso_apps_pane_comp1_g1

0x1687,	// (0x0006eafc) sso_apps_pane_comp1_t1

0x16a3,	// (0x0006eb18) sso_option_row_pane_g1

0x16bb,	// (0x0006eb30) sso_option_row_pane_t1

0x0c1c,	// (0x0006e091) list_cmail_pane_ParamLimits

0xebc8,	// (0x0007c03d) main_call7_pane

0xd2e8,	// (0x0007a75d) bg_welc_area_ParamLimits

0xd2e8,	// (0x0007a75d) bg_welc_area

0xd45e,	// (0x0007a8d3) sso_t_hdr_pane_a_t1_ParamLimits

0xd45e,	// (0x0007a8d3) sso_t_hdr_pane_a_t1

0xd472,	// (0x0007a8e7) sso_t_nml_pane_a_t1_ParamLimits

0xd472,	// (0x0007a8e7) sso_t_nml_pane_a_t1

0xd49c,	// (0x0007a911) sso_t_sub_pane_a_t1_ParamLimits

0xd49c,	// (0x0007a911) sso_t_sub_pane_a_t1

0xd530,	// (0x0007a9a5) welc_button_pane_cp01_ParamLimits

0xd530,	// (0x0007a9a5) welc_button_pane_cp01

0x1443,	// (0x0006e8b8) sso_btn_pane_t1_copy1

0x1452,	// (0x0006e8c7) welc_button_pane_2_comp1

0x14bb,	// (0x0006e930) sso_t_hdr_pane_p_t1

0x14cb,	// (0x0006e940) sso_t_nml_pane_p_t1

0x14db,	// (0x0006e950) sso_t_sub_pane_p_t1

0xebc8,	// (0x0007c03d) main_att_pane

0xebc8,	// (0x0007c03d) main_vod_pane

0x151e,	// (0x0006e993) sso_t_sub_pane_ParamLimits

0x1695,	// (0x0006eb0a) input_focus_pane_cp10_t1

0x16bb,	// (0x0006eb30) sso_option_row_pane_t1_ParamLimits

0xdbc7,	// (0x0007b03c) main_att_body_pane_ParamLimits

0xdbc7,	// (0x0007b03c) main_att_body_pane

0xdbdb,	// (0x0007b050) att_btn_emg_pane_ParamLimits

0xdbdb,	// (0x0007b050) att_btn_emg_pane

0xdbf3,	// (0x0007b068) att_btn_pane_ParamLimits

0xdbf3,	// (0x0007b068) att_btn_pane

0xdc5d,	// (0x0007b0d2) att_btn_pane_cp01_ParamLimits

0xdc5d,	// (0x0007b0d2) att_btn_pane_cp01

0xdc8f,	// (0x0007b104) att_li_srv_pane_ParamLimits

0xdc8f,	// (0x0007b104) att_li_srv_pane

0xdca1,	// (0x0007b116) att_opt_pane_ParamLimits

0xdca1,	// (0x0007b116) att_opt_pane

0xdce5,	// (0x0007b15a) att_query_pane_ParamLimits

0xdce5,	// (0x0007b15a) att_query_pane

0xdd55,	// (0x0007b1ca) att_query_pane_cp01_ParamLimits

0xdd55,	// (0x0007b1ca) att_query_pane_cp01

0xdd99,	// (0x0007b20e) att_t_hdr_pane_ParamLimits

0xdd99,	// (0x0007b20e) att_t_hdr_pane

0xde01,	// (0x0007b276) att_t_nml_pane_ParamLimits

0xde01,	// (0x0007b276) att_t_nml_pane

0xde77,	// (0x0007b2ec) att_t_nml_pane_cp01_ParamLimits

0xde77,	// (0x0007b2ec) att_t_nml_pane_cp01

0xde9b,	// (0x0007b310) att_t_nmlb_pane_ParamLimits

0xde9b,	// (0x0007b310) att_t_nmlb_pane

0xdf01,	// (0x0007b376) att_term_pane_ParamLimits

0xdf01,	// (0x0007b376) att_term_pane

0xdf47,	// (0x0007b3bc) main_att_body_pane_g1_ParamLimits

0xdf47,	// (0x0007b3bc) main_att_body_pane_g1

0x16d7,	// (0x0006eb4c) att_t_hdr_pane_t1_ParamLimits

0x16d7,	// (0x0006eb4c) att_t_hdr_pane_t1

0x16ea,	// (0x0006eb5f) att_t_nml_pane_t1_ParamLimits

0x16ea,	// (0x0006eb5f) att_t_nml_pane_t1

0x15cb,	// (0x0006ea40) att_btn_pane_t1

0x15c2,	// (0x0006ea37) bg_button_pane_cp23

0xdf71,	// (0x0007b3e6) att_li_srv_row_pane_ParamLimits

0xdf71,	// (0x0007b3e6) att_li_srv_row_pane

0x170f,	// (0x0006eb84) att_t_nmlb_pane_t1_ParamLimits

0x170f,	// (0x0006eb84) att_t_nmlb_pane_t1

0x172b,	// (0x0006eba0) att_query_pane_t1

0x173a,	// (0x0006ebaf) att_query_pane_t2

0x1749,	// (0x0006ebbe) att_query_pane_t3

0x0002,

0xfe30,	// (0x0007d2a5) att_query_pane_t

0x1758,	// (0x0006ebcd) input_focus_pane_cp11

0x1761,	// (0x0006ebd6) att_term_pane_t1_ParamLimits

0x1761,	// (0x0006ebd6) att_term_pane_t1

0xebc8,	// (0x0007c03d) att_opt_row_pane

0x177e,	// (0x0006ebf3) att_opt_row_pane_g1

0x1786,	// (0x0006ebfb) att_opt_row_pane_t1_ParamLimits

0x1786,	// (0x0006ebfb) att_opt_row_pane_t1

0xdf81,	// (0x0007b3f6) att_li_srv_row_pane_g1

0xdf89,	// (0x0007b3fe) att_li_srv_row_pane_t1_ParamLimits

0xdf89,	// (0x0007b3fe) att_li_srv_row_pane_t1

0xdf89,	// (0x0007b3fe) att_li_srv_row_pane_t2_ParamLimits

0xdf89,	// (0x0007b3fe) att_li_srv_row_pane_t2

0x0001,

0xfe37,	// (0x0007d2ac) att_li_srv_row_pane_t_ParamLimits

0xfe37,	// (0x0007d2ac) att_li_srv_row_pane_t

0x179f,	// (0x0006ec14) att_btn_close_pane_g1

0xebc8,	// (0x0007c03d) bg_button_pane_cp24

0x8cb6,	// (0x0007612b) main_vod_body_pane_ParamLimits

0x8cb6,	// (0x0007612b) main_vod_body_pane

0xdf9e,	// (0x0007b413) main_vod_body_pane_g1_ParamLimits

0xdf9e,	// (0x0007b413) main_vod_body_pane_g1

0xdfce,	// (0x0007b443) scroll_pane_cp24_ParamLimits

0xdfce,	// (0x0007b443) scroll_pane_cp24

0xe016,	// (0x0007b48b) vod_btn_pane_ParamLimits

0xe016,	// (0x0007b48b) vod_btn_pane

0xe054,	// (0x0007b4c9) vod_det_pane_ParamLimits

0xe054,	// (0x0007b4c9) vod_det_pane

0xe080,	// (0x0007b4f5) vod_logo_g1_ParamLimits

0xe080,	// (0x0007b4f5) vod_logo_g1

0xe0ba,	// (0x0007b52f) vod_opt_pane_ParamLimits

0xe0ba,	// (0x0007b52f) vod_opt_pane

0xe0ea,	// (0x0007b55f) vod_opt_pane_cp01_ParamLimits

0xe0ea,	// (0x0007b55f) vod_opt_pane_cp01

0xe112,	// (0x0007b587) vod_query_pane_ParamLimits

0xe112,	// (0x0007b587) vod_query_pane

0xe13a,	// (0x0007b5af) vod_query_pane_cp01_ParamLimits

0xe13a,	// (0x0007b5af) vod_query_pane_cp01

0xe146,	// (0x0007b5bb) vod_t_nml_pane_ParamLimits

0xe146,	// (0x0007b5bb) vod_t_nml_pane

0xe1f0,	// (0x0007b665) vod_t_nml_pane_cp01_ParamLimits

0xe1f0,	// (0x0007b665) vod_t_nml_pane_cp01

0xe228,	// (0x0007b69d) vod_t_sub_pane_ParamLimits

0xe228,	// (0x0007b69d) vod_t_sub_pane

0xe254,	// (0x0007b6c9) vod_t_sub_pane_cp01_ParamLimits

0xe254,	// (0x0007b6c9) vod_t_sub_pane_cp01

0x1758,	// (0x0006ebcd) vod_query_field_pane

0x17a7,	// (0x0006ec1c) vod_query_pane_t1

0x17b6,	// (0x0006ec2b) bg_button_pane_cp25

0x15cb,	// (0x0006ea40) sso_btn_pane_t1_copy2

0xe27c,	// (0x0007b6f1) vod_t_nml_pane_t1_ParamLimits

0xe27c,	// (0x0007b6f1) vod_t_nml_pane_t1

0x2d77,	// (0x000701ec) vod_opt_row_pane_ParamLimits

0x2d77,	// (0x000701ec) vod_opt_row_pane

0x2d89,	// (0x000701fe) vod_t_sub_pane_t1_ParamLimits

0x2d89,	// (0x000701fe) vod_t_sub_pane_t1

0x2da2,	// (0x00070217) vod_det_cell_pane_ParamLimits

0x2da2,	// (0x00070217) vod_det_cell_pane

0xebc8,	// (0x0007c03d) input_focus_pane_cp15

0x2db3,	// (0x00070228) vod_query_field_pane_t1

0x2dc1,	// (0x00070236) vod_opt_row_pane_g1_ParamLimits

0x2dc1,	// (0x00070236) vod_opt_row_pane_g1

0x2dcd,	// (0x00070242) vod_opt_row_pane_t1_ParamLimits

0x2dcd,	// (0x00070242) vod_opt_row_pane_t1

0x2def,	// (0x00070264) vod_det_cell_field_pane

0x2df8,	// (0x0007026d) vod_det_cell_pane_g1

0x2e00,	// (0x00070275) vod_det_cell_pane_t1

0xebc8,	// (0x0007c03d) input_focus_pane_cp16

0x2e0f,	// (0x00070284) vod_det_cell_field_pane_t1

0xce1b,	// (0x0007a290) call7_btn_grp_pane_ParamLimits

0xce1b,	// (0x0007a290) call7_btn_grp_pane

0x1ac5,	// (0x0006ef3a) call7_bubble_pane_ParamLimits

0x1ac5,	// (0x0006ef3a) call7_bubble_pane

0xce58,	// (0x0007a2cd) cell_call7_btn_pane_ParamLimits

0xce58,	// (0x0007a2cd) cell_call7_btn_pane

0xe2b7,	// (0x0007b72c) call7_pane_g1_ParamLimits

0xe2b7,	// (0x0007b72c) call7_pane_g1

0xe2c6,	// (0x0007b73b) call7_windows_conf_pane_ParamLimits

0xe2c6,	// (0x0007b73b) call7_windows_conf_pane

0xe2e8,	// (0x0007b75d) popup_call7_1st_window_ParamLimits

0xe2e8,	// (0x0007b75d) popup_call7_1st_window

0xe2f6,	// (0x0007b76b) popup_call7_2nd_window_ParamLimits

0xe2f6,	// (0x0007b76b) popup_call7_2nd_window

0xe304,	// (0x0007b779) popup_call7_3rd_window_ParamLimits

0xe304,	// (0x0007b779) popup_call7_3rd_window

0xebc8,	// (0x0007c03d) bg_button_pane_cp26

0x12c5,	// (0x0006e73a) cell_call7_btn_pane_g1

0x17bf,	// (0x0006ec34) cell_call7_btn_pane_t1

0xebc8,	// (0x0007c03d) bg_popup_window_pane_cp12

0x2e1d,	// (0x00070292) popup_call7_1st_window_g1

0x2e25,	// (0x0007029a) popup_call7_1st_window_g2

0x2e2d,	// (0x000702a2) popup_call7_1st_window_g3

0x0002,

0xfe3c,	// (0x0007d2b1) popup_call7_1st_window_g

0x2e35,	// (0x000702aa) popup_call7_1st_window_t1

0x2e44,	// (0x000702b9) popup_call7_1st_window_t2

0x2e54,	// (0x000702c9) popup_call7_1st_window_t3

0x0002,

0xfe43,	// (0x0007d2b8) popup_call7_1st_window_t

0xebc8,	// (0x0007c03d) bg_popup_window_pane_cp13

0x2e64,	// (0x000702d9) popup_call7_2nd_window_g1

0x2e6c,	// (0x000702e1) popup_call7_2nd_window_g2

0x2e74,	// (0x000702e9) popup_call7_2nd_window_g3

0x0002,

0xfe4a,	// (0x0007d2bf) popup_call7_2nd_window_g

0x2e7c,	// (0x000702f1) popup_call7_2nd_window_t1

0xebc8,	// (0x0007c03d) bg_popup_window_pane_cp14

0x2e8b,	// (0x00070300) call7_list_conf_pane

0x2e93,	// (0x00070308) call7_list_conf_row_pane_ParamLimits

0x2e93,	// (0x00070308) call7_list_conf_row_pane

0x2ea6,	// (0x0007031b) call7_list_conf_row_pane_g1

0x2eae,	// (0x00070323) call7_list_conf_row_pane_g2

0x0001,

0xfe51,	// (0x0007d2c6) call7_list_conf_row_pane_g

0x2eb6,	// (0x0007032b) call7_list_conf_row_pane_t1

0xebc8,	// (0x0007c03d) list_highlight_pane_cp22

0xd96d,	// (0x0007ade2) sso_option_pane_cp01_ParamLimits

0xd96d,	// (0x0007ade2) sso_option_pane_cp01

0x1a58,	// (0x0006eecd) msg_header_pane_ParamLimits

0x27e6,	// (0x0006fc5b) bg_button_pane_cp01_ParamLimits

0x55aa,	// (0x00072a1f) input_focus_pane_cp07_ParamLimits

0xc783,	// (0x00079bf8) popup_email_progress_window

0x1b11,	// (0x0006ef86) popup_email_progress_window_g1

0x2ec4,	// (0x00070339) popup_email_progress_window_g2

0x0001,

0xfe56,	// (0x0007d2cb) popup_email_progress_window_g

0x2ecc,	// (0x00070341) popup_email_progress_window_t1

0xebc8,	// (0x0007c03d) cmail_conv_pane

0x59a1,	// (0x00072e16) list_single_dyc_row_pane_g5_ParamLimits

0x59a1,	// (0x00072e16) list_single_dyc_row_pane_g5

0x59ad,	// (0x00072e22) list_single_dyc_row_pane_g6_ParamLimits

0x59ad,	// (0x00072e22) list_single_dyc_row_pane_g6

0x59c5,	// (0x00072e3a) list_single_dyc_row_pane_g7_ParamLimits

0x59c5,	// (0x00072e3a) list_single_dyc_row_pane_g7

0xd316,	// (0x0007a78b) main_button_pane_5_ParamLimits

0xd316,	// (0x0007a78b) main_button_pane_5

0xd7d7,	// (0x0007ac4c) sso_emg_call_btn_pane_ParamLimits

0xd7d7,	// (0x0007ac4c) sso_emg_call_btn_pane

0xdae1,	// (0x0007af56) sso_t_sub_pane_cp01_ParamLimits

0xdae1,	// (0x0007af56) sso_t_sub_pane_cp01

0x16a3,	// (0x0006eb18) sso_option_row_pane_g1_ParamLimits

0x16af,	// (0x0006eb24) sso_option_row_pane_g2_ParamLimits

0x16af,	// (0x0006eb24) sso_option_row_pane_g2

0x0001,

0xfe2b,	// (0x0007d2a0) sso_option_row_pane_g_ParamLimits

0xfe2b,	// (0x0007d2a0) sso_option_row_pane_g

0xdc75,	// (0x0007b0ea) att_btn_pane_cp02_ParamLimits

0xdc75,	// (0x0007b0ea) att_btn_pane_cp02

0x2eda,	// (0x0007034f) cmail_conv_hdr_pane

0x2ee3,	// (0x00070358) list_cmail_conv_pane

0x2eed,	// (0x00070362) scroll_pane_cp31

0x2ef5,	// (0x0007036a) cmail_conv_hdr_pane_t1

0x2f03,	// (0x00070378) cmail_conv_hdr_pane_t2

0x0001,

0xfe5b,	// (0x0007d2d0) cmail_conv_hdr_pane_t

0x2f11,	// (0x00070386) bubble_cmail_conv_pane_ParamLimits

0x2f11,	// (0x00070386) bubble_cmail_conv_pane

0x0d3e,	// (0x0006e1b3) aid_size_colorization_pane

0x1d4c,	// (0x0006f1c1) bg_bubble_cmail_conv_pane

0x2f2d,	// (0x000703a2) body_bubble_cmail_conv_pane

0x223f,	// (0x0006f6b4) bubble_cmail_conv_pane_g1

0x2247,	// (0x0006f6bc) bubble_cmail_conv_pane_g2

0x224f,	// (0x0006f6c4) bubble_cmail_conv_pane_g3

0x0002,

0xf252,	// (0x0007c6c7) bubble_cmail_conv_pane_g

0x2f35,	// (0x000703aa) bubble_cmail_conv_pane_t1

0x2f43,	// (0x000703b8) bg_bubble_cmail_conv_pane_g1

0x2f4c,	// (0x000703c1) bg_bubble_cmail_conv_pane_g2

0x2f55,	// (0x000703ca) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe60,	// (0x0007d2d5) bg_bubble_cmail_conv_pane_g

0x2f5e,	// (0x000703d3) body_bubble_cmail_conv_pane_t1_ParamLimits

0x2f5e,	// (0x000703d3) body_bubble_cmail_conv_pane_t1

0x2f75,	// (0x000703ea) body_bubble_cmail_conv_pane_t2_ParamLimits

0x2f75,	// (0x000703ea) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe67,	// (0x0007d2dc) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe67,	// (0x0007d2dc) body_bubble_cmail_conv_pane_t

0x1ac5,	// (0x0006ef3a) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Large

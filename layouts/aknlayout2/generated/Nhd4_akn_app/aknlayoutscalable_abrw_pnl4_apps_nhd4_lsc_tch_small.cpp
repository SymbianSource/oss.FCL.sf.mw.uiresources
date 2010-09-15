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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00069963 };

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
0x0660,	// (0x00069fc3) Screen

0x066c,	// (0x00069fcf) application_window

0x06a8,	// (0x0006a00b) area_bottom_pane_ParamLimits

0x06a8,	// (0x0006a00b) area_bottom_pane

0x06e1,	// (0x0006a044) area_top_pane_ParamLimits

0x06e1,	// (0x0006a044) area_top_pane

0x9067,	// (0x000729ca) call_video_uplink_pane_ParamLimits

0x9067,	// (0x000729ca) call_video_uplink_pane

0x076f,	// (0x0006a0d2) main_pane_ParamLimits

0x076f,	// (0x0006a0d2) main_pane

0xcecd,	// (0x00076830) context_pane

0x33ab,	// (0x0006cd0e) navi_pane

0x33dd,	// (0x0006cd40) popup_cale_events_window_ParamLimits

0x33dd,	// (0x0006cd40) popup_cale_events_window

0xcee0,	// (0x00076843) popup_mup_playback_window

0x33f5,	// (0x0006cd58) signal_pane

0xaf37,	// (0x0007489a) main_browser_pane

0xb0f2,	// (0x00074a55) main_burst_pane

0x3101,	// (0x0006ca64) main_calc_pane

0xcec1,	// (0x00076824) main_cale_day_pane

0x3115,	// (0x0006ca78) main_cale_month_pane

0xcec1,	// (0x00076824) main_cale_week_pane

0xb0f2,	// (0x00074a55) main_call_pane

0xabef,	// (0x00074552) main_call_poc_pane

0xb0f2,	// (0x00074a55) main_camera_pane

0xb0f2,	// (0x00074a55) main_chi_dic_pane

0xb8d0,	// (0x00075233) main_clock_pane

0xabef,	// (0x00074552) main_fmradio_pane

0xb0f2,	// (0x00074a55) main_graph_messa_pane

0xabef,	// (0x00074552) main_help_pane

0xaf37,	// (0x0007489a) main_im_pane

0xae4a,	// (0x000747ad) main_image_pane_ParamLimits

0xae4a,	// (0x000747ad) main_image_pane

0xabef,	// (0x00074552) main_location2_pane

0xb0f2,	// (0x00074a55) main_location_pane

0xae4a,	// (0x000747ad) main_messa_pane

0xabef,	// (0x00074552) main_mp2_pane

0xb0f2,	// (0x00074a55) main_mp_pane

0xabef,	// (0x00074552) main_msg_pane

0xabef,	// (0x00074552) main_mup_eq_pane

0xabef,	// (0x00074552) main_mup_pane

0xaf37,	// (0x0007489a) main_notes_pane

0xabef,	// (0x00074552) main_pec_pane

0xabef,	// (0x00074552) main_phob_pane

0xabef,	// (0x00074552) main_pinb_pane

0xabef,	// (0x00074552) main_postcard_pane

0xabef,	// (0x00074552) main_qdial_pane

0xb0f2,	// (0x00074a55) main_skin_pane

0xabef,	// (0x00074552) main_smil2_pane

0xb0f2,	// (0x00074a55) main_smil_pane

0xb0f2,	// (0x00074a55) main_video_pane

0xb0f2,	// (0x00074a55) main_video_tele_pane

0xae4a,	// (0x000747ad) main_viewer_pane_ParamLimits

0xae4a,	// (0x000747ad) main_viewer_pane

0xb0f2,	// (0x00074a55) main_vorec_pane

0x3167,	// (0x0006caca) popup_blid_sat_info_window_ParamLimits

0x3167,	// (0x0006caca) popup_blid_sat_info_window

0x31bf,	// (0x0006cb22) popup_dyc_status_message_window_ParamLimits

0x31bf,	// (0x0006cb22) popup_dyc_status_message_window

0x31d7,	// (0x0006cb3a) popup_grid_large_graphic_window_ParamLimits

0x31d7,	// (0x0006cb3a) popup_grid_large_graphic_window

0x3287,	// (0x0006cbea) popup_loc_request_window_ParamLimits

0x3287,	// (0x0006cbea) popup_loc_request_window

0x3383,	// (0x0006cce6) popup_wml_address_window_ParamLimits

0x3383,	// (0x0006cce6) popup_wml_address_window

0x2f3b,	// (0x0006c89e) call_muted_g1

0x2bae,	// (0x0006c511) popup_call_audio_conf_window_ParamLimits

0x2bae,	// (0x0006c511) popup_call_audio_conf_window

0x2f4f,	// (0x0006c8b2) popup_call_audio_first_window_ParamLimits

0x2f4f,	// (0x0006c8b2) popup_call_audio_first_window

0x2fc5,	// (0x0006c928) popup_call_audio_in_window_ParamLimits

0x2fc5,	// (0x0006c928) popup_call_audio_in_window

0x3001,	// (0x0006c964) popup_call_audio_out_window_ParamLimits

0x3001,	// (0x0006c964) popup_call_audio_out_window

0x303b,	// (0x0006c99e) popup_call_audio_second_window_ParamLimits

0x303b,	// (0x0006c99e) popup_call_audio_second_window

0x3091,	// (0x0006c9f4) popup_call_audio_wait_window_ParamLimits

0x3091,	// (0x0006c9f4) popup_call_audio_wait_window

0x30c6,	// (0x0006ca29) popup_number_entry_window_ParamLimits

0x30c6,	// (0x0006ca29) popup_number_entry_window

0xa2d7,	// (0x00073c3a) bg_popup_call_pane_cp05_ParamLimits

0xa2d7,	// (0x00073c3a) bg_popup_call_pane_cp05

0xa2f7,	// (0x00073c5a) popup_number_entry_window_t1

0xa30a,	// (0x00073c6d) popup_number_entry_window_t2

0xa31c,	// (0x00073c7f) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x000789a8) popup_number_entry_window_t

0xa833,	// (0x00074196) text_title_cp2

0xa846,	// (0x000741a9) bg_popup_call_pane_cp_ParamLimits

0xa846,	// (0x000741a9) bg_popup_call_pane_cp

0xa854,	// (0x000741b7) call_thumbnail_pane

0xa85c,	// (0x000741bf) popup_call_audio_in_window_g1_ParamLimits

0xa85c,	// (0x000741bf) popup_call_audio_in_window_g1

0xa868,	// (0x000741cb) popup_call_audio_in_window_g2_ParamLimits

0xa868,	// (0x000741cb) popup_call_audio_in_window_g2

0xa874,	// (0x000741d7) popup_call_audio_in_window_g3_ParamLimits

0xa874,	// (0x000741d7) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x000789b1) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x000789b1) popup_call_audio_in_window_g

0xa880,	// (0x000741e3) popup_call_audio_in_window_t1_ParamLimits

0xa880,	// (0x000741e3) popup_call_audio_in_window_t1

0xa89c,	// (0x000741ff) popup_call_audio_in_window_t2_ParamLimits

0xa89c,	// (0x000741ff) popup_call_audio_in_window_t2

0xa8b8,	// (0x0007421b) popup_call_audio_in_window_t3_ParamLimits

0xa8b8,	// (0x0007421b) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x000789b8) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x000789b8) popup_call_audio_in_window_t

0xa846,	// (0x000741a9) bg_popup_call_pane_cp01_ParamLimits

0xa846,	// (0x000741a9) bg_popup_call_pane_cp01

0xa854,	// (0x000741b7) call_thumbnail_pane_cp02

0xa8cb,	// (0x0007422e) call_type_pane_cp022

0xa8d3,	// (0x00074236) popup_call_audio_out_window_g1_ParamLimits

0xa8d3,	// (0x00074236) popup_call_audio_out_window_g1

0xa8e5,	// (0x00074248) popup_call_audio_out_window_g2_ParamLimits

0xa8e5,	// (0x00074248) popup_call_audio_out_window_g2

0xa8f1,	// (0x00074254) popup_call_audio_out_window_g3_ParamLimits

0xa8f1,	// (0x00074254) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x000789bf) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x000789bf) popup_call_audio_out_window_g

0xa903,	// (0x00074266) popup_call_audio_out_window_t1_ParamLimits

0xa903,	// (0x00074266) popup_call_audio_out_window_t1

0xa91b,	// (0x0007427e) popup_call_audio_out_window_t2_ParamLimits

0xa91b,	// (0x0007427e) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x000789c6) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x000789c6) popup_call_audio_out_window_t

0xa930,	// (0x00074293) bg_popup_call_pane_ParamLimits

0xa930,	// (0x00074293) bg_popup_call_pane

0x08c5,	// (0x0006a228) call_thumbnail_pane_cp_ParamLimits

0x08c5,	// (0x0006a228) call_thumbnail_pane_cp

0xa9b4,	// (0x00074317) call_type_pane_cp01_ParamLimits

0xa9b4,	// (0x00074317) call_type_pane_cp01

0xa9f8,	// (0x0007435b) popup_call_audio_first_window_g1_ParamLimits

0xa9f8,	// (0x0007435b) popup_call_audio_first_window_g1

0xaa44,	// (0x000743a7) popup_call_audio_first_window_g2_ParamLimits

0xaa44,	// (0x000743a7) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x000789cb) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x000789cb) popup_call_audio_first_window_g

0xaa88,	// (0x000743eb) popup_call_audio_first_window_t1_ParamLimits

0xaa88,	// (0x000743eb) popup_call_audio_first_window_t1

0xab34,	// (0x00074497) popup_call_audio_first_window_t4_ParamLimits

0xab34,	// (0x00074497) popup_call_audio_first_window_t4

0xabc0,	// (0x00074523) popup_call_audio_first_window_t5_ParamLimits

0xabc0,	// (0x00074523) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x000789d0) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x000789d0) popup_call_audio_first_window_t

0xabef,	// (0x00074552) bg_popup_call_pane_cp02

0xabf9,	// (0x0007455c) call_type_pane_cp023

0xac01,	// (0x00074564) popup_call_audio_wait_window_g1

0xac09,	// (0x0007456c) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x000789d7) popup_call_audio_wait_window_g

0xac11,	// (0x00074574) popup_call_audio_wait_window_t3

0xac1f,	// (0x00074582) bg_popup_call_pane_cp03_ParamLimits

0xac1f,	// (0x00074582) bg_popup_call_pane_cp03

0xac7f,	// (0x000745e2) call_thumbnail_pane_cp011_ParamLimits

0xac7f,	// (0x000745e2) call_thumbnail_pane_cp011

0xac8b,	// (0x000745ee) call_type_pane_cp034_ParamLimits

0xac8b,	// (0x000745ee) call_type_pane_cp034

0xacc7,	// (0x0007462a) popup_call_audio_second_window_g1_ParamLimits

0xacc7,	// (0x0007462a) popup_call_audio_second_window_g1

0xad03,	// (0x00074666) popup_call_audio_second_window_g2_ParamLimits

0xad03,	// (0x00074666) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x000789dc) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x000789dc) popup_call_audio_second_window_g

0xad3f,	// (0x000746a2) popup_call_audio_second_window_t1_ParamLimits

0xad3f,	// (0x000746a2) popup_call_audio_second_window_t1

0xadc0,	// (0x00074723) popup_call_audio_second_window_t2_ParamLimits

0xadc0,	// (0x00074723) popup_call_audio_second_window_t2

0xadf6,	// (0x00074759) popup_call_audio_second_window_t3_ParamLimits

0xadf6,	// (0x00074759) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x000789e1) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x000789e1) popup_call_audio_second_window_t

0xabef,	// (0x00074552) bg_popup_call_pane_cp04

0xae2c,	// (0x0007478f) list_conf_pane

0xae34,	// (0x00074797) popup_call_audio_conf_window_t1

0xae42,	// (0x000747a5) call_thumbnail_pane_g1

0xae4a,	// (0x000747ad) bg_pinb_pane_ParamLimits

0xae4a,	// (0x000747ad) bg_pinb_pane

0xae58,	// (0x000747bb) find_pinb_pane

0xae4a,	// (0x000747ad) listscroll_pinb_pane_ParamLimits

0xae4a,	// (0x000747ad) listscroll_pinb_pane

0xae62,	// (0x000747c5) pinb_bg_pane_g1

0xae62,	// (0x000747c5) pinb_bg_pane_g2

0xae62,	// (0x000747c5) pinb_bg_pane_g3

0xae62,	// (0x000747c5) pinb_bg_pane_g4

0xae62,	// (0x000747c5) pinb_bg_pane_g5

0xae62,	// (0x000747c5) pinb_bg_pane_g6

0xae62,	// (0x000747c5) pinb_bg_pane_g7

0xae62,	// (0x000747c5) pinb_bg_pane_g8

0xae62,	// (0x000747c5) pinb_bg_pane_g9

0xae62,	// (0x000747c5) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x000789e8) pinb_bg_pane_g

0xa2cd,	// (0x00073c30) grid_pinb_pane

0xa2cd,	// (0x00073c30) list_pinb_pane

0xa32e,	// (0x00073c91) scroll_pane_cp01_ParamLimits

0xa32e,	// (0x00073c91) scroll_pane_cp01

0xae6c,	// (0x000747cf) find_pinb_pane_g1_ParamLimits

0xae6c,	// (0x000747cf) find_pinb_pane_g1

0xae84,	// (0x000747e7) find_pinb_pane_t1

0xae96,	// (0x000747f9) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x00078a02) find_pinb_pane_t

0xaeab,	// (0x0007480e) input_focus_pane_cp01_ParamLimits

0xaeab,	// (0x0007480e) input_focus_pane_cp01

0xaeb7,	// (0x0007481a) cell_pinb_pane_ParamLimits

0xaeb7,	// (0x0007481a) cell_pinb_pane

0xaec5,	// (0x00074828) cell_pinb_pane_g1_ParamLimits

0xaec5,	// (0x00074828) cell_pinb_pane_g1

0xaed3,	// (0x00074836) cell_pinb_pane_g2_ParamLimits

0xaed3,	// (0x00074836) cell_pinb_pane_g2

0xaed3,	// (0x00074836) cell_pinb_pane_g3_ParamLimits

0xaed3,	// (0x00074836) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x00078a07) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x00078a07) cell_pinb_pane_g

0xabef,	// (0x00074552) grid_highlight_pane_cp01

0xaeb7,	// (0x0007481a) list_pinb_item_pane_ParamLimits

0xaeb7,	// (0x0007481a) list_pinb_item_pane

0xa2cd,	// (0x00073c30) list_highlight_pane_cp02

0xaee1,	// (0x00074844) list_pinb_item_pane_g1_ParamLimits

0xaee1,	// (0x00074844) list_pinb_item_pane_g1

0xaed3,	// (0x00074836) list_pinb_item_pane_g2_ParamLimits

0xaed3,	// (0x00074836) list_pinb_item_pane_g2

0xaec5,	// (0x00074828) list_pinb_item_pane_g3_ParamLimits

0xaec5,	// (0x00074828) list_pinb_item_pane_g3

0xaed3,	// (0x00074836) list_pinb_item_pane_g4_ParamLimits

0xaed3,	// (0x00074836) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x00078a0e) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x00078a0e) list_pinb_item_pane_g

0xaeef,	// (0x00074852) list_pinb_item_pane_t1_ParamLimits

0xaeef,	// (0x00074852) list_pinb_item_pane_t1

0x0907,	// (0x0006a26a) calc_display_pane

0x092c,	// (0x0006a28f) calc_paper_pane

0x094f,	// (0x0006a2b2) grid_calc_pane

0xabef,	// (0x00074552) bg_list_pane_cp01

0x097d,	// (0x0006a2e0) clock_g1

0x0985,	// (0x0006a2e8) clock_g2

0x0001,

0xf0b4,	// (0x00078a17) clock_g

0x098d,	// (0x0006a2f0) clock_t1_ParamLimits

0x098d,	// (0x0006a2f0) clock_t1

0x09a2,	// (0x0006a305) clock_t2_ParamLimits

0x09a2,	// (0x0006a305) clock_t2

0x09b4,	// (0x0006a317) clock_t3_ParamLimits

0x09b4,	// (0x0006a317) clock_t3

0x09c6,	// (0x0006a329) clock_t4_ParamLimits

0x09c6,	// (0x0006a329) clock_t4

0x09d8,	// (0x0006a33b) clock_t5_ParamLimits

0x09d8,	// (0x0006a33b) clock_t5

0x09ed,	// (0x0006a350) clock_t6_ParamLimits

0x09ed,	// (0x0006a350) clock_t6

0x09ff,	// (0x0006a362) clock_t7_ParamLimits

0x09ff,	// (0x0006a362) clock_t7

0x0a11,	// (0x0006a374) clock_t8_ParamLimits

0x0a11,	// (0x0006a374) clock_t8

0x0a25,	// (0x0006a388) clock_t9_ParamLimits

0x0a25,	// (0x0006a388) clock_t9

0x0008,

0xf0b9,	// (0x00078a1c) clock_t_ParamLimits

0xf0b9,	// (0x00078a1c) clock_t

0xaf03,	// (0x00074866) popup_clock_analogue_window_cp02

0xaf03,	// (0x00074866) popup_clock_digital_window_cp01

0xabef,	// (0x00074552) listscroll_help_pane

0xabef,	// (0x00074552) phob_pre_status_pane

0xaf0b,	// (0x0007486e) grid_qdial_pane

0xae4a,	// (0x000747ad) listscroll_mce_pane

0xae4a,	// (0x000747ad) bg_notes_pane

0xaf15,	// (0x00074878) list_notes_pane

0x0a39,	// (0x0006a39c) scroll_pane_cp06

0xaf23,	// (0x00074886) bg_calc_paper_pane

0x90a5,	// (0x00072a08) list_calc_pane

0xaf37,	// (0x0007489a) bg_calc_display_pane

0x0a4d,	// (0x0006a3b0) calc_display_pane_t1

0x0a5f,	// (0x0006a3c2) calc_display_pane_t2

0x90bf,	// (0x00072a22) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x00078a2f) calc_display_pane_t

0x0a71,	// (0x0006a3d4) cell_calc_pane_ParamLimits

0x0a71,	// (0x0006a3d4) cell_calc_pane

0xaf43,	// (0x000748a6) bg_calc_paper_pane_g1

0xaf4f,	// (0x000748b2) bg_calc_paper_pane_g2

0xaf5b,	// (0x000748be) bg_calc_paper_pane_g3

0xaf67,	// (0x000748ca) bg_calc_paper_pane_g4

0xaf73,	// (0x000748d6) bg_calc_paper_pane_g5

0x0aa6,	// (0x0006a409) bg_calc_paper_pane_g6

0x0ab5,	// (0x0006a418) bg_calc_paper_pane_g7

0x0ac4,	// (0x0006a427) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x00078a36) bg_calc_paper_pane_g

0x0ad7,	// (0x0006a43a) calc_bg_paper_pane_g9

0x0aea,	// (0x0006a44d) list_calc_item_pane_ParamLimits

0x0aea,	// (0x0006a44d) list_calc_item_pane

0xaf7f,	// (0x000748e2) list_calc_item_pane_g1

0x90d1,	// (0x00072a34) list_calc_item_pane_t1_ParamLimits

0x90d1,	// (0x00072a34) list_calc_item_pane_t1

0x0aff,	// (0x0006a462) list_calc_item_pane_t2_ParamLimits

0x0aff,	// (0x0006a462) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x00078a47) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x00078a47) list_calc_item_pane_t

0xae62,	// (0x000747c5) cell_calc_pane_g1

0xaf8c,	// (0x000748ef) grid_highlight_pane_cp02

0xd8ef,	// (0x00077252) bg_calc_display_pane_g1

0x0b31,	// (0x0006a494) bg_calc_display_pane_g2

0xafae,	// (0x00074911) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x00078a51) bg_calc_display_pane_g

0x0b3b,	// (0x0006a49e) cell_qdial_pane_ParamLimits

0x0b3b,	// (0x0006a49e) cell_qdial_pane

0x0b4f,	// (0x0006a4b2) cell_qdial_pane_g1_ParamLimits

0x0b4f,	// (0x0006a4b2) cell_qdial_pane_g1

0x0b65,	// (0x0006a4c8) cell_qdial_pane_g2_ParamLimits

0x0b65,	// (0x0006a4c8) cell_qdial_pane_g2

0xafb7,	// (0x0007491a) cell_qdial_pane_g3_ParamLimits

0xafb7,	// (0x0007491a) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x00078a58) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x00078a58) cell_qdial_pane_g

0x0b8b,	// (0x0006a4ee) cell_qdial_pane_t1_ParamLimits

0x0b8b,	// (0x0006a4ee) cell_qdial_pane_t1

0x0ba3,	// (0x0006a506) cell_qdial_pane_t2_ParamLimits

0x0ba3,	// (0x0006a506) cell_qdial_pane_t2

0x0bb6,	// (0x0006a519) cell_qdial_pane_t3_ParamLimits

0x0bb6,	// (0x0006a519) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x00078a61) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x00078a61) cell_qdial_pane_t

0xabef,	// (0x00074552) grid_highlight_pane_cp04

0xafc3,	// (0x00074926) thumbnail_qdial_pane_ParamLimits

0xafc3,	// (0x00074926) thumbnail_qdial_pane

0xb01f,	// (0x00074982) list_help_pane

0xb028,	// (0x0007498b) scroll_pane_cp02

0x0bc9,	// (0x0006a52c) help_list_pane_t1_ParamLimits

0x0bc9,	// (0x0006a52c) help_list_pane_t1

0x90e3,	// (0x00072a46) bg_notes_pane_g2

0x90eb,	// (0x00072a4e) bg_notes_pane_g3

0x90f3,	// (0x00072a56) notes_bg_pane_g1

0x90fb,	// (0x00072a5e) notes_bg_pane_g4

0x9103,	// (0x00072a66) notes_bg_pane_g5

0x910b,	// (0x00072a6e) notes_bg_pane_g6

0x9113,	// (0x00072a76) notes_bg_pane_g7

0x911b,	// (0x00072a7e) notes_bg_pane_g8

0x9123,	// (0x00072a86) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x00078a7f) notes_bg_pane_g

0x0be8,	// (0x0006a54b) list_notes_text_pane_ParamLimits

0x0be8,	// (0x0006a54b) list_notes_text_pane

0xb031,	// (0x00074994) list_notes_text_pane_g1

0x0bfe,	// (0x0006a561) list_notes_text_pane_t1

0x0c0c,	// (0x0006a56f) listscroll_cale_week_pane

0x0c38,	// (0x0006a59b) bg_cale_heading_pane

0xb054,	// (0x000749b7) bg_cale_pane_cp01

0x0c50,	// (0x0006a5b3) cale_week_corner_pane

0x0c6f,	// (0x0006a5d2) cale_week_day_heading_pane

0x0c8c,	// (0x0006a5ef) cale_week_scroll_pane_g1

0x0c9f,	// (0x0006a602) cale_week_scroll_pane_g2

0x0cb7,	// (0x0006a61a) cale_week_scroll_pane_g3

0x0ccf,	// (0x0006a632) cale_week_scroll_pane_g4

0x0ce7,	// (0x0006a64a) cale_week_scroll_pane_g5

0x0d07,	// (0x0006a66a) cale_week_scroll_pane_g6

0x0d27,	// (0x0006a68a) cale_week_scroll_pane_g7

0x0d47,	// (0x0006a6aa) cale_week_scroll_pane_g8

0x0d6b,	// (0x0006a6ce) cale_week_scroll_pane_g9

0x0d83,	// (0x0006a6e6) cale_week_scroll_pane_g10

0x0d9b,	// (0x0006a6fe) cale_week_scroll_pane_g11

0x0db3,	// (0x0006a716) cale_week_scroll_pane_g12

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g13

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g14

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x00078a8e) cale_week_scroll_pane_g

0x0e07,	// (0x0006a76a) cale_week_time_pane

0x0e2b,	// (0x0006a78e) grid_cale_week_pane

0xb083,	// (0x000749e6) scroll_pane_cp08

0x0e51,	// (0x0006a7b4) cell_cale_week_pane_ParamLimits

0x0e51,	// (0x0006a7b4) cell_cale_week_pane

0x0edf,	// (0x0006a842) cale_week_day_heading_pane_t1

0x0f09,	// (0x0006a86c) cale_week_day_heading_pane_t2

0x0f38,	// (0x0006a89b) cale_week_day_heading_pane_t3

0x0f67,	// (0x0006a8ca) cale_week_day_heading_pane_t4

0x0f96,	// (0x0006a8f9) cale_week_day_heading_pane_t5

0x0fcd,	// (0x0006a930) cale_week_day_heading_pane_t6

0x1004,	// (0x0006a967) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x00078aaf) cale_week_day_heading_pane_t

0xb0a0,	// (0x00074a03) bg_cale_side_pane

0x102e,	// (0x0006a991) cale_week_time_pane_t1

0x1048,	// (0x0006a9ab) cale_week_time_pane_t2

0x1062,	// (0x0006a9c5) cale_week_time_pane_t3

0x107c,	// (0x0006a9df) cale_week_time_pane_t4

0x1096,	// (0x0006a9f9) cale_week_time_pane_t5

0x10b0,	// (0x0006aa13) cale_week_time_pane_t6

0x10ca,	// (0x0006aa2d) cale_week_time_pane_t7

0x10e4,	// (0x0006aa47) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x00078abe) cale_week_time_pane_t

0x1104,	// (0x0006aa67) cell_cale_week_pane_g2

0x1128,	// (0x0006aa8b) cell_cale_week_pane_g3_ParamLimits

0x1128,	// (0x0006aa8b) cell_cale_week_pane_g3

0xb0ae,	// (0x00074a11) grid_highlight_pane_cp07

0xb0b6,	// (0x00074a19) listscroll_gms_pane

0xb0c0,	// (0x00074a23) grid_gms_pane

0xb0c9,	// (0x00074a2c) listscroll_gms_pane_g1

0xb0d1,	// (0x00074a34) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x00078acf) listscroll_gms_pane_g

0x1140,	// (0x0006aaa3) scroll_pane_cp010

0x114b,	// (0x0006aaae) cell_gms_pane_ParamLimits

0x114b,	// (0x0006aaae) cell_gms_pane

0x115d,	// (0x0006aac0) cell_gms_pane_g1

0xb0d9,	// (0x00074a3c) cell_gms_pane_g2

0xb031,	// (0x00074994) cell_gms_pane_g3

0xb0e1,	// (0x00074a44) cell_gms_pane_g4

0x0003,

0xf171,	// (0x00078ad4) cell_gms_pane_g

0xb0ea,	// (0x00074a4d) grid_highlight_pane_cp09

0x2ec3,	// (0x0006c826) phob_pre_status_pane_g1

0x2ecb,	// (0x0006c82e) phob_pre_status_pane_g2

0x2ed3,	// (0x0006c836) phob_pre_status_pane_g3

0x2edb,	// (0x0006c83e) phob_pre_status_pane_g4

0x0004,

0xf548,	// (0x00078eab) phob_pre_status_pane_g

0x2eeb,	// (0x0006c84e) phob_pre_status_pane_t1

0x2ef9,	// (0x0006c85c) phob_pre_status_pane_t2

0x2f09,	// (0x0006c86c) phob_pre_status_pane_t3

0x0002,

0xf553,	// (0x00078eb6) phob_pre_status_pane_t

0xb0f2,	// (0x00074a55) bg_list_pane_cp05

0x116d,	// (0x0006aad0) grid_vorec_pane

0x1175,	// (0x0006aad8) vorec_t1

0x1183,	// (0x0006aae6) vorec_t2

0x1191,	// (0x0006aaf4) vorec_t3

0x119f,	// (0x0006ab02) vorec_t4

0x97fc,	// (0x0007315f) vorec_t5

0x8362,	// (0x00071cc5) vorec_t6

0x0004,

0xf17a,	// (0x00078add) vorec_t

0x8370,	// (0x00071cd3) wait_bar_pane_cp01

0x11bb,	// (0x0006ab1e) cell_vorec_pane_ParamLimits

0x11bb,	// (0x0006ab1e) cell_vorec_pane

0x912b,	// (0x00072a8e) cell_vorec_pane_g1

0xabef,	// (0x00074552) grid_highlight_pane_cp05

0xa32e,	// (0x00073c91) cams_zoom_pane

0xa32e,	// (0x00073c91) image_vga_pane

0xaec5,	// (0x00074828) main_camera_pane_g1

0xaec5,	// (0x00074828) main_camera_pane_g2

0xaec5,	// (0x00074828) main_camera_pane_g3

0xaec5,	// (0x00074828) main_camera_pane_g4

0xaec5,	// (0x00074828) main_camera_pane_g5

0xaec5,	// (0x00074828) main_camera_pane_g6

0xaec5,	// (0x00074828) main_camera_pane_g7

0x0007,

0xf185,	// (0x00078ae8) main_camera_pane_g

0xb0fa,	// (0x00074a5d) main_camera_pane_t1

0xb0fa,	// (0x00074a5d) main_camera_pane_t2

0x0001,

0xf196,	// (0x00078af9) main_camera_pane_t

0x11e2,	// (0x0006ab45) cams_zoom_pane_cp_ParamLimits

0x11e2,	// (0x0006ab45) cams_zoom_pane_cp

0x1216,	// (0x0006ab79) image_cif_pane_ParamLimits

0x1216,	// (0x0006ab79) image_cif_pane

0xa2cd,	// (0x00073c30) image_subqcif_pane

0x1228,	// (0x0006ab8b) main_video_pane_g1_ParamLimits

0x1228,	// (0x0006ab8b) main_video_pane_g1

0x1256,	// (0x0006abb9) main_video_pane_g2_ParamLimits

0x1256,	// (0x0006abb9) main_video_pane_g2

0x1290,	// (0x0006abf3) main_video_pane_g3_ParamLimits

0x1290,	// (0x0006abf3) main_video_pane_g3

0x1290,	// (0x0006abf3) main_video_pane_g4_ParamLimits

0x1290,	// (0x0006abf3) main_video_pane_g4

0x12c4,	// (0x0006ac27) main_video_pane_g5_ParamLimits

0x12c4,	// (0x0006ac27) main_video_pane_g5

0xb10e,	// (0x00074a71) main_video_pane_g6_ParamLimits

0xb10e,	// (0x00074a71) main_video_pane_g6

0x0006,

0xf19b,	// (0x00078afe) main_video_pane_g_ParamLimits

0xf19b,	// (0x00078afe) main_video_pane_g

0x12e0,	// (0x0006ac43) main_video_pane_t1_ParamLimits

0x12e0,	// (0x0006ac43) main_video_pane_t1

0xb128,	// (0x00074a8b) cams_zoom_pane_g1

0xb128,	// (0x00074a8b) cams_zoom_pane_g2

0xb128,	// (0x00074a8b) cams_zoom_pane_g3

0xb128,	// (0x00074a8b) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x00078b0d) cams_zoom_pane_g

0x1338,	// (0x0006ac9b) grid_cams_pane

0x1352,	// (0x0006acb5) linegrid_cams_pane

0x1365,	// (0x0006acc8) cell_cams_pane_ParamLimits

0x1365,	// (0x0006acc8) cell_cams_pane

0xb132,	// (0x00074a95) cams_burst_image_pane

0xb13a,	// (0x00074a9d) cell_cams_pane_g1

0xabef,	// (0x00074552) grid_highlight_pane_cp03

0xae62,	// (0x000747c5) mp_bg_pane_g1

0xa2cd,	// (0x00073c30) bg_list_pane_cp03

0xa2cd,	// (0x00073c30) bg_mp_pane

0xa2cd,	// (0x00073c30) grid_mp_pane

0xb128,	// (0x00074a8b) media_player_g1

0xb664,	// (0x00074fc7) media_player_t1

0xb664,	// (0x00074fc7) media_player_t2

0xb664,	// (0x00074fc7) media_player_t3

0xb664,	// (0x00074fc7) media_player_t4

0xb664,	// (0x00074fc7) media_player_t5

0xb664,	// (0x00074fc7) media_player_t6

0xb664,	// (0x00074fc7) media_player_t7

0x0006,

0xf532,	// (0x00078e95) media_player_t

0xa2cd,	// (0x00073c30) wait_bar_pane_cp02

0xf517,	// (0x00078e7a) main_usb_pane_t

0xb8d0,	// (0x00075233) cell_mp_pane

0xae62,	// (0x000747c5) cell_mp_pane_g1

0xabef,	// (0x00074552) grid_highlight_pane_cp06

0xb142,	// (0x00074aa5) grid_skin_colour_pane

0xb14a,	// (0x00074aad) list_highlight_pane_cp03

0x1385,	// (0x0006ace8) skin_g1

0xb152,	// (0x00074ab5) skin_t1

0xb161,	// (0x00074ac4) skin_t2

0x0001,

0xf1d8,	// (0x00078b3b) skin_t

0x138d,	// (0x0006acf0) cell_skin_colour_pane_ParamLimits

0x138d,	// (0x0006acf0) cell_skin_colour_pane

0xb16f,	// (0x00074ad2) cell_skin_colour_pane_g1

0x1406,	// (0x0006ad69) call_video_g1_ParamLimits

0x1406,	// (0x0006ad69) call_video_g1

0x1422,	// (0x0006ad85) call_video_g2_ParamLimits

0x1422,	// (0x0006ad85) call_video_g2

0x0001,

0xf1dd,	// (0x00078b40) call_video_g_ParamLimits

0xf1dd,	// (0x00078b40) call_video_g

0x1474,	// (0x0006add7) call_video_uplink_pane_cp1_ParamLimits

0x1474,	// (0x0006add7) call_video_uplink_pane_cp1

0xb181,	// (0x00074ae4) call_video_uplink_pane_cp2

0x1513,	// (0x0006ae76) video_down_crop_pane_ParamLimits

0x1513,	// (0x0006ae76) video_down_crop_pane

0x15fc,	// (0x0006af5f) video_down_pane_ParamLimits

0x15fc,	// (0x0006af5f) video_down_pane

0xb189,	// (0x00074aec) video_down_subqcif_pane_ParamLimits

0xb189,	// (0x00074aec) video_down_subqcif_pane

0xb1a1,	// (0x00074b04) video_down_subqcif_pane_cp_ParamLimits

0xb1a1,	// (0x00074b04) video_down_subqcif_pane_cp

0xb1c7,	// (0x00074b2a) im_reading_pane_ParamLimits

0xb1c7,	// (0x00074b2a) im_reading_pane

0x170c,	// (0x0006b06f) im_writing_pane_ParamLimits

0x170c,	// (0x0006b06f) im_writing_pane

0x1722,	// (0x0006b085) im_reading_pane_t1

0xb1e1,	// (0x00074b44) list_im_pane

0xb1f2,	// (0x00074b55) scroll_pane_cp07

0x175c,	// (0x0006b0bf) im_writing_pane_t1_ParamLimits

0x175c,	// (0x0006b0bf) im_writing_pane_t1

0xb20b,	// (0x00074b6e) im_writing_pane_t2_ParamLimits

0xb20b,	// (0x00074b6e) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x00078b4a) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x00078b4a) im_writing_pane_t

0xabef,	// (0x00074552) input_focus_pane_cp04

0xabef,	// (0x00074552) input_focus_pane_cp05

0x1771,	// (0x0006b0d4) list_im_single_pane_ParamLimits

0x1771,	// (0x0006b0d4) list_im_single_pane

0x1786,	// (0x0006b0e9) list_single_im_pane_t1

0xb0f2,	// (0x00074a55) blid_accuracy_pane

0xb0f2,	// (0x00074a55) blid_compass_pane

0xce79,	// (0x000767dc) main_location_t1

0xce79,	// (0x000767dc) main_location_t2

0xce79,	// (0x000767dc) main_location_t3

0x0002,

0xf541,	// (0x00078ea4) main_location_t

0xabef,	// (0x00074552) aid_levels_location

0xae62,	// (0x000747c5) blid_accuracy_pane_g1

0xae62,	// (0x000747c5) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00078b99) blid_accuracy_pane_g

0xb253,	// (0x00074bb6) wml_content_pane

0xb291,	// (0x00074bf4) wml_button_pane_ParamLimits

0xb291,	// (0x00074bf4) wml_button_pane

0x1795,	// (0x0006b0f8) wml_list_single_large_pane_ParamLimits

0x1795,	// (0x0006b0f8) wml_list_single_large_pane

0x17aa,	// (0x0006b10d) wml_list_single_medium_pane_ParamLimits

0x17aa,	// (0x0006b10d) wml_list_single_medium_pane

0x17c1,	// (0x0006b124) wml_list_single_small_pane_ParamLimits

0x17c1,	// (0x0006b124) wml_list_single_small_pane

0xb2a5,	// (0x00074c08) wml_selection_box_pane_ParamLimits

0xb2a5,	// (0x00074c08) wml_selection_box_pane

0xb2b8,	// (0x00074c1b) wml_list_single_pane_t1

0xb2c7,	// (0x00074c2a) wml_list_single_medium_pane_t1

0xb2d6,	// (0x00074c39) wml_list_single_large_pane_t1

0xb2e5,	// (0x00074c48) input_focus_pane_cp02_ParamLimits

0xb2e5,	// (0x00074c48) input_focus_pane_cp02

0xb2f8,	// (0x00074c5b) wml_selection_box_pane_g1

0xb301,	// (0x00074c64) wml_selection_box_pane_t1_ParamLimits

0xb301,	// (0x00074c64) wml_selection_box_pane_t1

0xae4a,	// (0x000747ad) bg_wml_button_pane_ParamLimits

0xae4a,	// (0x000747ad) bg_wml_button_pane

0xb322,	// (0x00074c85) wml_button_pane_g1

0xb32a,	// (0x00074c8d) wml_button_pane_t1

0xb322,	// (0x00074c85) wml_button_bg_pane_g1

0xb33a,	// (0x00074c9d) wml_button_bg_pane_g2

0xb342,	// (0x00074ca5) wml_button_bg_pane_g3

0xb34a,	// (0x00074cad) wml_button_bg_pane_g4

0xb352,	// (0x00074cb5) wml_button_bg_pane_g5

0xb35a,	// (0x00074cbd) wml_button_bg_pane_g6

0xb362,	// (0x00074cc5) wml_button_bg_pane_g7

0xb36a,	// (0x00074ccd) wml_button_bg_pane_g8

0xb372,	// (0x00074cd5) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x00078b4f) wml_button_bg_pane_g

0x17da,	// (0x0006b13d) bg_list_pane_cp02

0xb37a,	// (0x00074cdd) mce_header_pane_ParamLimits

0xb37a,	// (0x00074cdd) mce_header_pane

0xb390,	// (0x00074cf3) mce_icon_pane

0xb390,	// (0x00074cf3) mce_image_pane

0xb399,	// (0x00074cfc) mce_text_pane_ParamLimits

0xb399,	// (0x00074cfc) mce_text_pane

0x17e2,	// (0x0006b145) scroll_pane_cp03

0xb289,	// (0x00074bec) scroll_pane_cp04

0xb3ac,	// (0x00074d0f) scroll_pane_cp05_ParamLimits

0xb3ac,	// (0x00074d0f) scroll_pane_cp05

0x17ec,	// (0x0006b14f) mce_header_field_pane_ParamLimits

0x17ec,	// (0x0006b14f) mce_header_field_pane

0x1803,	// (0x0006b166) mce_header_field_pane_2_ParamLimits

0x1803,	// (0x0006b166) mce_header_field_pane_2

0x1819,	// (0x0006b17c) mce_header_field_pane_3

0x1821,	// (0x0006b184) list_single_mce_message_pane_ParamLimits

0x1821,	// (0x0006b184) list_single_mce_message_pane

0x1837,	// (0x0006b19a) list_single_mce_smart_pane_ParamLimits

0x1837,	// (0x0006b19a) list_single_mce_smart_pane

0xb3b8,	// (0x00074d1b) input_focus_pane_cp03

0xb3c1,	// (0x00074d24) list_header_data_pane

0x1858,	// (0x0006b1bb) mce_header_field_pane_t1

0x1868,	// (0x0006b1cb) list_single_mce_header_pane_ParamLimits

0x1868,	// (0x0006b1cb) list_single_mce_header_pane

0xb3c9,	// (0x00074d2c) list_single_mce_header_pane_t1

0xb3d8,	// (0x00074d3b) list_single_mce_message_pane_g1

0xb3e0,	// (0x00074d43) list_single_mce_message_pane_t1

0x18a2,	// (0x0006b205) bg_cale_heading_pane_cp01_ParamLimits

0x18a2,	// (0x0006b205) bg_cale_heading_pane_cp01

0xb3ee,	// (0x00074d51) bg_cale_pane_cp02_ParamLimits

0xb3ee,	// (0x00074d51) bg_cale_pane_cp02

0x18dc,	// (0x0006b23f) cale_month_corner_pane

0x18fb,	// (0x0006b25e) cale_month_day_heading_pane_ParamLimits

0x18fb,	// (0x0006b25e) cale_month_day_heading_pane

0x194d,	// (0x0006b2b0) cale_month_pane_g1_ParamLimits

0x194d,	// (0x0006b2b0) cale_month_pane_g1

0x197c,	// (0x0006b2df) cale_month_pane_g2_ParamLimits

0x197c,	// (0x0006b2df) cale_month_pane_g2

0x19ac,	// (0x0006b30f) cale_month_pane_g3_ParamLimits

0x19ac,	// (0x0006b30f) cale_month_pane_g3

0x19e8,	// (0x0006b34b) cale_month_pane_g4_ParamLimits

0x19e8,	// (0x0006b34b) cale_month_pane_g4

0x1a24,	// (0x0006b387) cale_month_pane_g5_ParamLimits

0x1a24,	// (0x0006b387) cale_month_pane_g5

0x1a6c,	// (0x0006b3cf) cale_month_pane_g6_ParamLimits

0x1a6c,	// (0x0006b3cf) cale_month_pane_g6

0x1ab8,	// (0x0006b41b) cale_month_pane_g7_ParamLimits

0x1ab8,	// (0x0006b41b) cale_month_pane_g7

0x1b08,	// (0x0006b46b) cale_month_pane_g8_ParamLimits

0x1b08,	// (0x0006b46b) cale_month_pane_g8

0x1b5c,	// (0x0006b4bf) cale_month_pane_g9_ParamLimits

0x1b5c,	// (0x0006b4bf) cale_month_pane_g9

0x1bae,	// (0x0006b511) cale_month_pane_g10_ParamLimits

0x1bae,	// (0x0006b511) cale_month_pane_g10

0x1c00,	// (0x0006b563) cale_month_pane_g11_ParamLimits

0x1c00,	// (0x0006b563) cale_month_pane_g11

0x1c52,	// (0x0006b5b5) cale_month_pane_g12_ParamLimits

0x1c52,	// (0x0006b5b5) cale_month_pane_g12

0x1ca4,	// (0x0006b607) cale_month_pane_g13_ParamLimits

0x1ca4,	// (0x0006b607) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x00078b62) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x00078b62) cale_month_pane_g

0x1cf6,	// (0x0006b659) cale_month_week_pane

0x1d1a,	// (0x0006b67d) grid_cale_month_pane_ParamLimits

0x1d1a,	// (0x0006b67d) grid_cale_month_pane

0x1d63,	// (0x0006b6c6) cale_month_day_heading_pane_t1

0x1da5,	// (0x0006b708) cale_month_day_heading_pane_t2

0x1dda,	// (0x0006b73d) cale_month_day_heading_pane_t3

0x1e0f,	// (0x0006b772) cale_month_day_heading_pane_t4

0x1e4c,	// (0x0006b7af) cale_month_day_heading_pane_t5

0x1e91,	// (0x0006b7f4) cale_month_day_heading_pane_t6

0x1ed6,	// (0x0006b839) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x00078b7d) cale_month_day_heading_pane_t

0xb0a0,	// (0x00074a03) bg_cale_side_pane_cp01

0x1f23,	// (0x0006b886) cale_month_week_pane_t1

0x1f3c,	// (0x0006b89f) cale_month_week_pane_t2

0x1f55,	// (0x0006b8b8) cale_month_week_pane_t3

0x1f6e,	// (0x0006b8d1) cale_month_week_pane_t4

0x1f87,	// (0x0006b8ea) cale_month_week_pane_t5

0x1fa0,	// (0x0006b903) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x00078b8c) cale_month_week_pane_t

0x1fb9,	// (0x0006b91c) cell_cale_month_pane_ParamLimits

0x1fb9,	// (0x0006b91c) cell_cale_month_pane

0x9135,	// (0x00072a98) cell_cale_month_pane_g1

0x20e7,	// (0x0006ba4a) cell_cale_month_pane_t1_ParamLimits

0x20e7,	// (0x0006ba4a) cell_cale_month_pane_t1

0xb0ae,	// (0x00074a11) grid_highlight_pane_cp08

0xae62,	// (0x000747c5) main_smil_g1

0x2113,	// (0x0006ba76) smil_status_pane

0xb42d,	// (0x00074d90) smil_text_pane

0xcd43,	// (0x000766a6) bg_popup_call3_rect_pane_g8

0xcd4b,	// (0x000766ae) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x00078e25) bg_popup_call3_rect_pane_g

0xcf42,	// (0x000768a5) smil_status_volume_pane_g1

0xb437,	// (0x00074d9a) smil_status_pane_t1

0x927b,	// (0x00072bde) volume_smil_pane

0xb44e,	// (0x00074db1) list_smil_text_pane

0x2128,	// (0x0006ba8b) scroll_pane_cp011

0x2133,	// (0x0006ba96) smil_text_list_pane_t1_ParamLimits

0x2133,	// (0x0006ba96) smil_text_list_pane_t1

0x9141,	// (0x00072aa4) aid_volume_smil_ParamLimits

0x9141,	// (0x00072aa4) aid_volume_smil

0xae62,	// (0x000747c5) smil_volume_pane_g1

0xae62,	// (0x000747c5) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00078b99) smil_volume_pane_g

0x0c0c,	// (0x0006a56f) listscroll_cale_day_pane

0xb458,	// (0x00074dbb) bg_cale_pane

0xb470,	// (0x00074dd3) list_cale_pane

0xb493,	// (0x00074df6) scroll_pane_cp09

0xb4a4,	// (0x00074e07) cale_bg_pane_g1

0xb4ac,	// (0x00074e0f) cale_bg_pane_g2

0xb4b4,	// (0x00074e17) cale_bg_pane_g3

0xb4bc,	// (0x00074e1f) cale_bg_pane_g4

0xb4c4,	// (0x00074e27) cale_bg_pane_g5

0xb4cc,	// (0x00074e2f) cale_bg_pane_g6

0xb4d4,	// (0x00074e37) cale_bg_pane_g7

0xb4dc,	// (0x00074e3f) cale_bg_pane_g8

0xb4e4,	// (0x00074e47) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00078b9e) cale_bg_pane_g

0x217f,	// (0x0006bae2) list_cale_time_pane_ParamLimits

0x217f,	// (0x0006bae2) list_cale_time_pane

0xb4ec,	// (0x00074e4f) list_cale_time_pane_g1_ParamLimits

0xb4ec,	// (0x00074e4f) list_cale_time_pane_g1

0xb4f8,	// (0x00074e5b) list_cale_time_pane_g2_ParamLimits

0xb4f8,	// (0x00074e5b) list_cale_time_pane_g2

0x2195,	// (0x0006baf8) list_cale_time_pane_g3_ParamLimits

0x2195,	// (0x0006baf8) list_cale_time_pane_g3

0x21a3,	// (0x0006bb06) list_cale_time_pane_g4_ParamLimits

0x21a3,	// (0x0006bb06) list_cale_time_pane_g4

0x21b1,	// (0x0006bb14) list_cale_time_pane_g5_ParamLimits

0x21b1,	// (0x0006bb14) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00078bb1) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00078bb1) list_cale_time_pane_g

0xb512,	// (0x00074e75) list_cale_time_pane_t1_ParamLimits

0xb512,	// (0x00074e75) list_cale_time_pane_t1

0xb53a,	// (0x00074e9d) list_cale_time_pane_t2_ParamLimits

0xb53a,	// (0x00074e9d) list_cale_time_pane_t2

0x243e,	// (0x0006bda1) aid_blid_cardinal_pane

0x247c,	// (0x0006bddf) compass_pane_t4

0xb562,	// (0x00074ec5) list_cale_time_pane_t4_ParamLimits

0xb562,	// (0x00074ec5) list_cale_time_pane_t4

0x248a,	// (0x0006bded) compass_pane_t5

0x2498,	// (0x0006bdfb) compass_pane_t6

0x24a6,	// (0x0006be09) compass_pane_t7

0xb9ea,	// (0x0007534d) navi_pane_cc_t1

0xbbc7,	// (0x0007552a) aid_phob_thumbnail_center_pane

0x2871,	// (0x0006c1d4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00078bbe) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00078bbe) list_cale_time_pane_t

0xa846,	// (0x000741a9) bg_popup_window_pane_cp02_ParamLimits

0xa846,	// (0x000741a9) bg_popup_window_pane_cp02

0xb58a,	// (0x00074eed) heading_pane_cp01_ParamLimits

0xb58a,	// (0x00074eed) heading_pane_cp01

0xb596,	// (0x00074ef9) loc_req_pane_ParamLimits

0xb596,	// (0x00074ef9) loc_req_pane

0xb5a6,	// (0x00074f09) loc_type_pane_ParamLimits

0xb5a6,	// (0x00074f09) loc_type_pane

0xb5b8,	// (0x00074f1b) loc_type_pane_t1_ParamLimits

0xb5b8,	// (0x00074f1b) loc_type_pane_t1

0xb5ca,	// (0x00074f2d) loc_type_pane_t2_ParamLimits

0xb5ca,	// (0x00074f2d) loc_type_pane_t2

0xb5dc,	// (0x00074f3f) loc_type_pane_t3_ParamLimits

0xb5dc,	// (0x00074f3f) loc_type_pane_t3

0x0002,

0xf262,	// (0x00078bc5) loc_type_pane_t_ParamLimits

0xf262,	// (0x00078bc5) loc_type_pane_t

0xb5ee,	// (0x00074f51) list_loc_req_pane

0xb5f8,	// (0x00074f5b) scroll_pane_cp012

0x21bf,	// (0x0006bb22) list_single_loc_request_popup_menu_pane_ParamLimits

0x21bf,	// (0x0006bb22) list_single_loc_request_popup_menu_pane

0xb603,	// (0x00074f66) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb603,	// (0x00074f66) list_single_loc_request_popup_menu_pane_g1

0xb60f,	// (0x00074f72) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb60f,	// (0x00074f72) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00078bcc) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00078bcc) list_single_loc_request_popup_menu_pane_g

0xb61b,	// (0x00074f7e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb61b,	// (0x00074f7e) list_single_loc_request_popup_menu_pane_t1

0xae4a,	// (0x000747ad) bg_popup_window_pane_cp03_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_window_pane_cp03

0xb631,	// (0x00074f94) heading_loc_req_pane_ParamLimits

0xb631,	// (0x00074f94) heading_loc_req_pane

0x21cc,	// (0x0006bb2f) popup_dyc_status_message_window_g1_ParamLimits

0x21cc,	// (0x0006bb2f) popup_dyc_status_message_window_g1

0x21e0,	// (0x0006bb43) popup_dyc_status_message_window_t1_ParamLimits

0x21e0,	// (0x0006bb43) popup_dyc_status_message_window_t1

0x21f5,	// (0x0006bb58) popup_dyc_status_message_window_t2_ParamLimits

0x21f5,	// (0x0006bb58) popup_dyc_status_message_window_t2

0x220a,	// (0x0006bb6d) popup_dyc_status_message_window_t3_ParamLimits

0x220a,	// (0x0006bb6d) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00078bd1) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00078bd1) popup_dyc_status_message_window_t

0xabef,	// (0x00074552) bg_heading_pane_cp01

0xb63d,	// (0x00074fa0) heading_loc_req_pane_g1

0xb645,	// (0x00074fa8) heading_loc_req_pane_g2

0xb64d,	// (0x00074fb0) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00078bd8) heading_loc_req_pane_g

0xb655,	// (0x00074fb8) heading_loc_req_pane_t1

0xb674,	// (0x00074fd7) bg_popup_sub_pane_cp01_ParamLimits

0xb674,	// (0x00074fd7) bg_popup_sub_pane_cp01

0xb682,	// (0x00074fe5) popup_cale_events_window_g1_ParamLimits

0xb682,	// (0x00074fe5) popup_cale_events_window_g1

0xb6a2,	// (0x00075005) popup_cale_events_window_g2_ParamLimits

0xb6a2,	// (0x00075005) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00078bfa) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00078bfa) popup_cale_events_window_g

0xb6c2,	// (0x00075025) popup_cale_events_window_t1_ParamLimits

0xb6c2,	// (0x00075025) popup_cale_events_window_t1

0xb6d4,	// (0x00075037) popup_cale_events_window_t2_ParamLimits

0xb6d4,	// (0x00075037) popup_cale_events_window_t2

0xb712,	// (0x00075075) popup_cale_events_window_t3_ParamLimits

0xb712,	// (0x00075075) popup_cale_events_window_t3

0xb74c,	// (0x000750af) popup_cale_events_window_t4_ParamLimits

0xb74c,	// (0x000750af) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00078bff) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00078bff) popup_cale_events_window_t

0x2232,	// (0x0006bb95) call_type_pane

0x2242,	// (0x0006bba5) popup_call_status_window_g1

0x2256,	// (0x0006bbb9) popup_call_status_window_g2

0x226a,	// (0x0006bbcd) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00078c08) popup_call_status_window_g

0xb782,	// (0x000750e5) call_type_pane_g1

0xb78b,	// (0x000750ee) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00078c0f) call_type_pane_g

0xabef,	// (0x00074552) bg_popup_sub_pane_cp02

0xb794,	// (0x000750f7) listscroll_popup_wml_pane

0xb79c,	// (0x000750ff) list_wml_pane

0xb7a6,	// (0x00075109) scroll_pane_cp013

0xb7b1,	// (0x00075114) list_single_graphic_popup_wml_pane_ParamLimits

0xb7b1,	// (0x00075114) list_single_graphic_popup_wml_pane

0xae62,	// (0x000747c5) list_single_graphic_popup_wml_pane_g1

0xb7c5,	// (0x00075128) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00078c14) list_single_graphic_popup_wml_pane_g

0xb7cd,	// (0x00075130) list_single_graphic_popup_wml_pane_t1

0xb7e3,	// (0x00075146) aid_call_pane

0xae42,	// (0x000747a5) popup_clock_analogue_window_g1

0xae42,	// (0x000747a5) popup_clock_analogue_window_g2

0x9163,	// (0x00072ac6) popup_clock_analogue_window_g3

0x9163,	// (0x00072ac6) popup_clock_analogue_window_g4

0xae62,	// (0x000747c5) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00078c19) popup_clock_analogue_window_g

0x916b,	// (0x00072ace) popup_clock_analogue_window_t1

0x9179,	// (0x00072adc) clock_digital_number_pane_ParamLimits

0x9179,	// (0x00072adc) clock_digital_number_pane

0x9185,	// (0x00072ae8) clock_digital_number_pane_cp02_ParamLimits

0x9185,	// (0x00072ae8) clock_digital_number_pane_cp02

0x9191,	// (0x00072af4) clock_digital_number_pane_cp03_ParamLimits

0x9191,	// (0x00072af4) clock_digital_number_pane_cp03

0x919d,	// (0x00072b00) clock_digital_number_pane_cp04_ParamLimits

0x919d,	// (0x00072b00) clock_digital_number_pane_cp04

0x91a9,	// (0x00072b0c) clock_digital_separator_pane_ParamLimits

0x91a9,	// (0x00072b0c) clock_digital_separator_pane

0x91b5,	// (0x00072b18) popup_clock_digital_window_t1

0xae62,	// (0x000747c5) clock_digital_number_pane_g1

0xae62,	// (0x000747c5) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00078b99) clock_digital_number_pane_g

0xae62,	// (0x000747c5) clock_digital_separator_pane_g1

0xae62,	// (0x000747c5) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00078b99) clock_digital_separator_pane_g

0xabef,	// (0x00074552) bg_popup_window_pane_cp04

0xb7eb,	// (0x0007514e) heading_pane_cp03

0xb0f2,	// (0x00074a55) listscroll_popup_gms_pane

0xabef,	// (0x00074552) grid_large_graphic_popup_pane

0xb7f4,	// (0x00075157) listscroll_popup_gms_pane_g1

0xb7fd,	// (0x00075160) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00078c24) listscroll_popup_gms_pane_g

0xb806,	// (0x00075169) scroll_pane_cp014

0xaeb7,	// (0x0007481a) cell_large_graphic_popup_pane_ParamLimits

0xaeb7,	// (0x0007481a) cell_large_graphic_popup_pane

0xaec5,	// (0x00074828) cell_large_graphic_popup_pane_g1_ParamLimits

0xaec5,	// (0x00074828) cell_large_graphic_popup_pane_g1

0xb80f,	// (0x00075172) cell_large_graphic_popup_pane_g2_ParamLimits

0xb80f,	// (0x00075172) cell_large_graphic_popup_pane_g2

0xb81d,	// (0x00075180) cell_large_graphic_popup_pane_g3_ParamLimits

0xb81d,	// (0x00075180) cell_large_graphic_popup_pane_g3

0xb82b,	// (0x0007518e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb82b,	// (0x0007518e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00078c29) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00078c29) cell_large_graphic_popup_pane_g

0xabef,	// (0x00074552) grid_highlight_pane_cp010

0xae62,	// (0x000747c5) bg_popup_call_pane_g1

0xb83c,	// (0x0007519f) list_single_graphic_popup_conf_pane_ParamLimits

0xb83c,	// (0x0007519f) list_single_graphic_popup_conf_pane

0xb84f,	// (0x000751b2) list_highlight_pane_cp01

0xb858,	// (0x000751bb) list_single_graphic_popup_conf_pane_g1

0xb860,	// (0x000751c3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00078c32) list_single_graphic_popup_conf_pane_g

0xb868,	// (0x000751cb) list_single_graphic_popup_conf_pane_t1

0xb876,	// (0x000751d9) linegrid_cams_pane_g1

0x2279,	// (0x0006bbdc) linegrid_cams_pane_g2

0xb031,	// (0x00074994) linegrid_cams_pane_g3

0xb87f,	// (0x000751e2) linegrid_cams_pane_g4

0x2282,	// (0x0006bbe5) linegrid_cams_pane_g5

0x228b,	// (0x0006bbee) linegrid_cams_pane_g6

0xb0e1,	// (0x00074a44) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00078c37) linegrid_cams_pane_g

0xb888,	// (0x000751eb) popup_clock_analogue_window

0xb888,	// (0x000751eb) popup_clock_digital_window

0xabef,	// (0x00074552) popup_phob_thumbnail_window

0xae62,	// (0x000747c5) call_video_uplink_pane_g1

0xb891,	// (0x000751f4) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00078c46) call_video_uplink_pane_g

0xb899,	// (0x000751fc) video_uplink_pane

0xb8a1,	// (0x00075204) mce_image_pane_g1

0x2296,	// (0x0006bbf9) mce_image_pane_g2

0x229e,	// (0x0006bc01) mce_image_pane_g3

0x22a6,	// (0x0006bc09) mce_image_pane_g4

0x22b0,	// (0x0006bc13) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00078c4b) mce_image_pane_g

0xb8ab,	// (0x0007520e) control_top_pane_stacon_cp01_ParamLimits

0xb8ab,	// (0x0007520e) control_top_pane_stacon_cp01

0xb8bf,	// (0x00075222) uni_indicator_pane_stacon_cp01_ParamLimits

0xb8bf,	// (0x00075222) uni_indicator_pane_stacon_cp01

0xb8d0,	// (0x00075233) bg_popup_sub_pane_cp03

0x22b8,	// (0x0006bc1b) chi_dic_find_pane

0x22c0,	// (0x0006bc23) listscroll_chi_dic_pane

0x22c9,	// (0x0006bc2c) main_pane_chidic_g1

0x22dc,	// (0x0006bc3f) chi_dic_find_pane_t1

0xb8da,	// (0x0007523d) find_chidic_pane

0xb8e3,	// (0x00075246) chi_dic_list_pane_ParamLimits

0xb8e3,	// (0x00075246) chi_dic_list_pane

0xb8f4,	// (0x00075257) scroll_pane_cp020

0x22ea,	// (0x0006bc4d) find_chidic_pane_t1

0xabef,	// (0x00074552) input_focus_pane_cp06

0x22f9,	// (0x0006bc5c) list_chi_dic_pane_ParamLimits

0x22f9,	// (0x0006bc5c) list_chi_dic_pane

0x230b,	// (0x0006bc6e) list_chi_dic_pane_t1_ParamLimits

0x230b,	// (0x0006bc6e) list_chi_dic_pane_t1

0xabef,	// (0x00074552) list_highlight_pane_cp020

0xb8fc,	// (0x0007525f) bg_cale_heading_pane_g1

0x231e,	// (0x0006bc81) bg_cale_heading_pane_g2

0x2326,	// (0x0006bc89) bg_cale_heading_pane_g3

0x232e,	// (0x0006bc91) bg_cale_heading_pane_g4

0x2338,	// (0x0006bc9b) bg_cale_heading_pane_g5

0x2342,	// (0x0006bca5) bg_cale_heading_pane_g6

0x234a,	// (0x0006bcad) bg_cale_heading_pane_g7

0x2352,	// (0x0006bcb5) bg_cale_heading_pane_g8

0x235c,	// (0x0006bcbf) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00078c56) bg_cale_heading_pane_g

0xb8fc,	// (0x0007525f) bg_cale_side_pane_g1

0x2366,	// (0x0006bcc9) bg_cale_side_pane_g2

0x236e,	// (0x0006bcd1) bg_cale_side_pane_g3

0x2376,	// (0x0006bcd9) bg_cale_side_pane_g4

0x237e,	// (0x0006bce1) bg_cale_side_pane_g5

0x2386,	// (0x0006bce9) bg_cale_side_pane_g6

0x238e,	// (0x0006bcf1) bg_cale_side_pane_g7

0x2396,	// (0x0006bcf9) bg_cale_side_pane_g8

0x239e,	// (0x0006bd01) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00078c69) bg_cale_side_pane_g

0x23a6,	// (0x0006bd09) popup_call_status_window_ParamLimits

0x23a6,	// (0x0006bd09) popup_call_status_window

0xb904,	// (0x00075267) stacon_top_pane

0xb90c,	// (0x0007526f) status_pane_ParamLimits

0xb90c,	// (0x0007526f) status_pane

0xb921,	// (0x00075284) status_small_pane

0xb929,	// (0x0007528c) control_pane

0xabef,	// (0x00074552) stacon_bottom_pane

0xb931,	// (0x00075294) list_single_mce_smart_pane_t1_ParamLimits

0xb931,	// (0x00075294) list_single_mce_smart_pane_t1

0xb944,	// (0x000752a7) list_single_mce_smart_pane_t2_ParamLimits

0xb944,	// (0x000752a7) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00078c7c) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00078c7c) list_single_mce_smart_pane_t

0x23ed,	// (0x0006bd50) compass_pane

0x23f6,	// (0x0006bd59) main_location2_pane_t1

0x2408,	// (0x0006bd6b) main_location2_pane_t2

0x241a,	// (0x0006bd7d) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00078c81) main_location2_pane_t

0xb963,	// (0x000752c6) compass_pane_g1_ParamLimits

0xb963,	// (0x000752c6) compass_pane_g1

0x245e,	// (0x0006bdc1) compass_pane_t1

0x246d,	// (0x0006bdd0) compass_pane_t2

0x0005,

0xf327,	// (0x00078c8a) compass_pane_t

0x24b4,	// (0x0006be17) text_secondary_cp61

0xb9e1,	// (0x00075344) navi_pane_cams_g5

0xba5d,	// (0x000753c0) navi_pane_im_t1

0xba6b,	// (0x000753ce) navi_pane_mp_g1_ParamLimits

0xba6b,	// (0x000753ce) navi_pane_mp_g1

0xba7f,	// (0x000753e2) navi_pane_mp_g2_ParamLimits

0xba7f,	// (0x000753e2) navi_pane_mp_g2

0xba8b,	// (0x000753ee) navi_pane_mp_g3_ParamLimits

0xba8b,	// (0x000753ee) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00078c9e) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00078c9e) navi_pane_mp_g

0xba97,	// (0x000753fa) navi_pane_mp_t1

0xbaa5,	// (0x00075408) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00078ca5) navi_pane_mp_t

0xbb10,	// (0x00075473) navi_pane_vt_g1

0xba97,	// (0x000753fa) navi_pane_vt_t1

0xbb18,	// (0x0007547b) navi_slider_pane

0xb0f2,	// (0x00074a55) zooming_pane

0xbb28,	// (0x0007548b) navi_slider_pane_g1

0x91d2,	// (0x00072b35) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00078cac) navi_slider_pane_g

0xbb4c,	// (0x000754af) aid_levels_zoom

0xbb54,	// (0x000754b7) zooming_pane_g1

0xbb5c,	// (0x000754bf) zooming_pane_g2

0xbb5c,	// (0x000754bf) zooming_pane_g3

0x0002,

0xf358,	// (0x00078cbb) zooming_pane_g

0xbb64,	// (0x000754c7) level_10_zoom

0xbb6d,	// (0x000754d0) level_11_zoom

0xbb76,	// (0x000754d9) level_1_zoom

0xbb7f,	// (0x000754e2) level_2_zoom

0xbb88,	// (0x000754eb) level_3_zoom

0xbb91,	// (0x000754f4) level_4_zoom

0xbb9a,	// (0x000754fd) level_5_zoom

0xbba3,	// (0x00075506) level_6_zoom

0xbbac,	// (0x0007550f) level_7_zoom

0xbbb5,	// (0x00075518) level_8_zoom

0xbbbe,	// (0x00075521) level_9_zoom

0xbbcf,	// (0x00075532) popup_phob_thumbnail_window_g1

0xbbd7,	// (0x0007553a) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00078cc2) popup_phob_thumbnail_window_g

0x2f19,	// (0x0006c87c) level_1_location

0x2f21,	// (0x0006c884) level_2_location

0x2f29,	// (0x0006c88c) level_3_location

0x2f31,	// (0x0006c894) level_4_location

0xb0f2,	// (0x00074a55) level_5_location

0x2505,	// (0x0006be68) mce_icon_pane_g1

0x250f,	// (0x0006be72) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00078cc7) mce_icon_pane_g

0xbbdf,	// (0x00075542) main_mup_pane_g1_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g1

0xbbdf,	// (0x00075542) main_mup_pane_g2_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g2

0xbbdf,	// (0x00075542) main_mup_pane_g3_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g3

0xbbdf,	// (0x00075542) main_mup_pane_g4_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g4

0xbbdf,	// (0x00075542) main_mup_pane_g5_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g5

0xbbdf,	// (0x00075542) main_mup_pane_g6_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g6

0xbbdf,	// (0x00075542) main_mup_pane_g7_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g7

0xbbdf,	// (0x00075542) main_mup_pane_g8_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g8

0xbbdf,	// (0x00075542) main_mup_pane_g9_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g9

0xbbdf,	// (0x00075542) main_mup_pane_g10_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g10

0xbbdf,	// (0x00075542) main_mup_pane_g11_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g11

0xaec5,	// (0x00074828) main_mup_pane_g12_ParamLimits

0xaec5,	// (0x00074828) main_mup_pane_g12

0xbbdf,	// (0x00075542) main_mup_pane_g13_ParamLimits

0xbbdf,	// (0x00075542) main_mup_pane_g13

0x000c,

0xf369,	// (0x00078ccc) main_mup_pane_g_ParamLimits

0xf369,	// (0x00078ccc) main_mup_pane_g

0xbbed,	// (0x00075550) main_mup_pane_t1_ParamLimits

0xbbed,	// (0x00075550) main_mup_pane_t1

0xbbed,	// (0x00075550) main_mup_pane_t2_ParamLimits

0xbbed,	// (0x00075550) main_mup_pane_t2

0xbbed,	// (0x00075550) main_mup_pane_t3_ParamLimits

0xbbed,	// (0x00075550) main_mup_pane_t3

0xb0fa,	// (0x00074a5d) main_mup_pane_t4_ParamLimits

0xb0fa,	// (0x00074a5d) main_mup_pane_t4

0xb0fa,	// (0x00074a5d) main_mup_pane_t5_ParamLimits

0xb0fa,	// (0x00074a5d) main_mup_pane_t5

0xbc01,	// (0x00075564) main_mup_pane_t6_ParamLimits

0xbc01,	// (0x00075564) main_mup_pane_t6

0x0005,

0xf384,	// (0x00078ce7) main_mup_pane_t_ParamLimits

0xf384,	// (0x00078ce7) main_mup_pane_t

0xaeb7,	// (0x0007481a) mup_progress_pane_ParamLimits

0xaeb7,	// (0x0007481a) mup_progress_pane

0xbc15,	// (0x00075578) mup_visualizer_pane_ParamLimits

0xbc15,	// (0x00075578) mup_visualizer_pane

0xbc15,	// (0x00075578) mup_volume_pane_ParamLimits

0xbc15,	// (0x00075578) mup_volume_pane

0xaed3,	// (0x00074836) mup_visualizer_pane_g1_ParamLimits

0xaed3,	// (0x00074836) mup_visualizer_pane_g1

0xbc23,	// (0x00075586) mup_visualizer_pane_g2_ParamLimits

0xbc23,	// (0x00075586) mup_visualizer_pane_g2

0xaec5,	// (0x00074828) mup_visualizer_pane_g3_ParamLimits

0xaec5,	// (0x00074828) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00078cf4) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00078cf4) mup_visualizer_pane_g

0xb128,	// (0x00074a8b) mup_volume_pane_g1

0xb128,	// (0x00074a8b) mup_volume_pane_g2

0x0001,

0xf398,	// (0x00078cfb) mup_volume_pane_g

0xb128,	// (0x00074a8b) mup_progress_pane_g1

0xb128,	// (0x00074a8b) mup_progress_pane_g2

0xb128,	// (0x00074a8b) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x00078d00) mup_progress_pane_g

0xabef,	// (0x00074552) bg_popup_window_pane_cp05

0xbc31,	// (0x00075594) heading_pane_cp02_ParamLimits

0xbc31,	// (0x00075594) heading_pane_cp02

0xbc4b,	// (0x000755ae) list_popup_blid_pane

0xbc53,	// (0x000755b6) list_blid_sat_info_pane_ParamLimits

0xbc53,	// (0x000755b6) list_blid_sat_info_pane

0xbc66,	// (0x000755c9) list_blid_sat_info_pane_g1

0xbc6e,	// (0x000755d1) list_blid_sat_info_pane_t1

0x260f,	// (0x0006bf72) mup_equalizer_pane_ParamLimits

0x260f,	// (0x0006bf72) mup_equalizer_pane

0x2628,	// (0x0006bf8b) mup_equalizer_pane_cp1_ParamLimits

0x2628,	// (0x0006bf8b) mup_equalizer_pane_cp1

0x2645,	// (0x0006bfa8) mup_equalizer_pane_cp2_ParamLimits

0x2645,	// (0x0006bfa8) mup_equalizer_pane_cp2

0x2662,	// (0x0006bfc5) mup_equalizer_pane_cp3_ParamLimits

0x2662,	// (0x0006bfc5) mup_equalizer_pane_cp3

0x2683,	// (0x0006bfe6) mup_equalizer_pane_cp4_ParamLimits

0x2683,	// (0x0006bfe6) mup_equalizer_pane_cp4

0x26a4,	// (0x0006c007) mup_equalizer_pane_cp5

0x26b8,	// (0x0006c01b) mup_equalizer_pane_cp6

0x26cc,	// (0x0006c02f) mup_equalizer_pane_cp7

0xcdc3,	// (0x00076726) bg_popup_call_poc_act_pane_g9

0xcdcb,	// (0x0007672e) bg_popup_call_poc_act_pane_g10

0xcdd3,	// (0x00076736) bg_popup_call_poc_act_pane_g11

0x000a,

0xae4a,	// (0x000747ad) mup_scale_pane

0xae62,	// (0x000747c5) mup_scale_pane_g1

0xbc7c,	// (0x000755df) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x00078d1c) mup_scale_pane_g

0xbca0,	// (0x00075603) msg_data_pane

0xbca8,	// (0x0007560b) scroll_pane_cp017

0x26f2,	// (0x0006c055) bg_list_pane_cp04_ParamLimits

0x26f2,	// (0x0006c055) bg_list_pane_cp04

0xbcb0,	// (0x00075613) msg_data_pane_g1

0x270a,	// (0x0006c06d) msg_data_pane_g2

0x2712,	// (0x0006c075) msg_data_pane_g3

0x271a,	// (0x0006c07d) msg_data_pane_g4

0x2722,	// (0x0006c085) msg_data_pane_g5

0x272a,	// (0x0006c08d) msg_data_pane_g6

0x2732,	// (0x0006c095) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x00078d2b) msg_data_pane_g

0x273a,	// (0x0006c09d) msg_text_pane_ParamLimits

0x273a,	// (0x0006c09d) msg_text_pane

0x2769,	// (0x0006c0cc) qrid_highlight_pane_cp011_ParamLimits

0x2769,	// (0x0006c0cc) qrid_highlight_pane_cp011

0xabef,	// (0x00074552) msg_body_pane

0xabef,	// (0x00074552) msg_header_pane

0xbcc1,	// (0x00075624) input_focus_pane_cp07

0x9d6d,	// (0x000736d0) msg_header_pane_t1_ParamLimits

0x9d6d,	// (0x000736d0) msg_header_pane_t1

0x9d83,	// (0x000736e6) msg_header_pane_t2_ParamLimits

0x9d83,	// (0x000736e6) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x00078d3f) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x00078d3f) msg_header_pane_t

0xbcd6,	// (0x00075639) msg_body_pane_g1

0x9d9a,	// (0x000736fd) msg_body_pane_t1_ParamLimits

0x9d9a,	// (0x000736fd) msg_body_pane_t1

0x9dcb,	// (0x0007372e) msg_body_pane_t2_ParamLimits

0x9dcb,	// (0x0007372e) msg_body_pane_t2

0x9ddd,	// (0x00073740) msg_body_pane_t3_ParamLimits

0x9ddd,	// (0x00073740) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x00078d44) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x00078d44) msg_body_pane_t

0x27c7,	// (0x0006c12a) main_viewer_pane_g1_ParamLimits

0x27c7,	// (0x0006c12a) main_viewer_pane_g1

0x27d5,	// (0x0006c138) main_viewer_pane_g2_ParamLimits

0x27d5,	// (0x0006c138) main_viewer_pane_g2

0x27e3,	// (0x0006c146) main_viewer_pane_g3_ParamLimits

0x27e3,	// (0x0006c146) main_viewer_pane_g3

0x27f2,	// (0x0006c155) main_viewer_pane_g4_ParamLimits

0x27f2,	// (0x0006c155) main_viewer_pane_g4

0x91fc,	// (0x00072b5f) main_viewer_pane_g5_ParamLimits

0x91fc,	// (0x00072b5f) main_viewer_pane_g5

0x91fc,	// (0x00072b5f) main_viewer_pane_g7_ParamLimits

0x91fc,	// (0x00072b5f) main_viewer_pane_g7

0xb603,	// (0x00074f66) main_viewer_pane_g8_ParamLimits

0xb603,	// (0x00074f66) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x00078d54) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x00078d54) main_viewer_pane_g

0xbcde,	// (0x00075641) viewer_content_pane_ParamLimits

0xbcde,	// (0x00075641) viewer_content_pane

0x282e,	// (0x0006c191) main_postcard_pane_g1_ParamLimits

0x282e,	// (0x0006c191) main_postcard_pane_g1

0x2844,	// (0x0006c1a7) main_postcard_pane_g2_ParamLimits

0x2844,	// (0x0006c1a7) main_postcard_pane_g2

0x285a,	// (0x0006c1bd) main_postcard_pane_g3_ParamLimits

0x285a,	// (0x0006c1bd) main_postcard_pane_g3

0x0005,

0xf402,	// (0x00078d65) main_postcard_pane_g_ParamLimits

0xf402,	// (0x00078d65) main_postcard_pane_g

0x2871,	// (0x0006c1d4) main_postcard_pane_g4

0xcf55,	// (0x000768b8) smil_status_volume_pane_g2

0x28b4,	// (0x0006c217) postcard_pane_ParamLimits

0x28b4,	// (0x0006c217) postcard_pane

0xbcec,	// (0x0007564f) postcard_pane_g1_ParamLimits

0xbcec,	// (0x0007564f) postcard_pane_g1

0x28f6,	// (0x0006c259) postcard_pane_g2_ParamLimits

0x28f6,	// (0x0006c259) postcard_pane_g2

0x2902,	// (0x0006c265) postcard_pane_g3_ParamLimits

0x2902,	// (0x0006c265) postcard_pane_g3

0xbcfa,	// (0x0007565d) postcard_pane_g4_ParamLimits

0xbcfa,	// (0x0007565d) postcard_pane_g4

0x290e,	// (0x0006c271) postcard_pane_g5_ParamLimits

0x290e,	// (0x0006c271) postcard_pane_g5

0x2923,	// (0x0006c286) postcard_pane_g6_ParamLimits

0x2923,	// (0x0006c286) postcard_pane_g6

0xbcec,	// (0x0007564f) postcard_pane_g7_ParamLimits

0xbcec,	// (0x0007564f) postcard_pane_g7

0x0006,

0xf40f,	// (0x00078d72) postcard_pane_g_ParamLimits

0xf40f,	// (0x00078d72) postcard_pane_g

0x2937,	// (0x0006c29a) main_mp2_pane_g1_ParamLimits

0x2937,	// (0x0006c29a) main_mp2_pane_g1

0x2943,	// (0x0006c2a6) main_mp2_pane_g2_ParamLimits

0x2943,	// (0x0006c2a6) main_mp2_pane_g2

0x294f,	// (0x0006c2b2) main_mp2_pane_g3_ParamLimits

0x294f,	// (0x0006c2b2) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x00078d81) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x00078d81) main_mp2_pane_g

0x295b,	// (0x0006c2be) main_mp2_pane_t1_ParamLimits

0x295b,	// (0x0006c2be) main_mp2_pane_t1

0x2970,	// (0x0006c2d3) main_mp2_pane_t2_ParamLimits

0x2970,	// (0x0006c2d3) main_mp2_pane_t2

0x2982,	// (0x0006c2e5) main_mp2_pane_t3_ParamLimits

0x2982,	// (0x0006c2e5) main_mp2_pane_t3

0x0002,

0xf425,	// (0x00078d88) main_mp2_pane_t_ParamLimits

0xf425,	// (0x00078d88) main_mp2_pane_t

0xbd08,	// (0x0007566b) pec_content_pane_ParamLimits

0xbd08,	// (0x0007566b) pec_content_pane

0xb289,	// (0x00074bec) scroll_pane_cp015

0xbd1a,	// (0x0007567d) pec_attribute_pane_ParamLimits

0xbd1a,	// (0x0007567d) pec_attribute_pane

0x2994,	// (0x0006c2f7) pec_content_pane_g1_ParamLimits

0x2994,	// (0x0006c2f7) pec_content_pane_g1

0xbd2a,	// (0x0007568d) pec_content_pane_t1_ParamLimits

0xbd2a,	// (0x0007568d) pec_content_pane_t1

0xbd3c,	// (0x0007569f) pec_content_pane_t2_ParamLimits

0xbd3c,	// (0x0007569f) pec_content_pane_t2

0x0001,

0xf42c,	// (0x00078d8f) pec_content_pane_t_ParamLimits

0xf42c,	// (0x00078d8f) pec_content_pane_t

0x29a0,	// (0x0006c303) list_single_graphic_pane_cp01_ParamLimits

0x29a0,	// (0x0006c303) list_single_graphic_pane_cp01

0xae4a,	// (0x000747ad) bg_popup_sub_pane_cp04

0xbd4e,	// (0x000756b1) popup_mup_playback_window_g1

0xbd5a,	// (0x000756bd) popup_mup_playback_window_t1

0xbd6f,	// (0x000756d2) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x00078d94) popup_mup_playback_window_t

0xbda6,	// (0x00075709) main_image_pane_g1_ParamLimits

0xbda6,	// (0x00075709) main_image_pane_g1

0xbde9,	// (0x0007574c) scroll_pane_cp018_ParamLimits

0xbde9,	// (0x0007574c) scroll_pane_cp018

0xbe01,	// (0x00075764) scroll_pane_cp016_ParamLimits

0xbe01,	// (0x00075764) scroll_pane_cp016

0x2a6e,	// (0x0006c3d1) smil2_image_pane_ParamLimits

0x2a6e,	// (0x0006c3d1) smil2_image_pane

0x2a9e,	// (0x0006c401) smil2_root_pane_ParamLimits

0x2a9e,	// (0x0006c401) smil2_root_pane

0x2ad6,	// (0x0006c439) smil2_text_pane_ParamLimits

0x2ad6,	// (0x0006c439) smil2_text_pane

0xabef,	// (0x00074552) bg_list_pane_cp06

0xbe3d,	// (0x000757a0) grid_radio_pane

0xabef,	// (0x00074552) bg_popup_window_pane_cp06

0xbe45,	// (0x000757a8) main_fmradio_pane_t1

0xce1b,	// (0x0007677e) heading_pane_cp04

0xbe53,	// (0x000757b6) main_fmradio_pane_t2

0xce23,	// (0x00076786) popup_cale_lunar_info_window_g1

0xbe61,	// (0x000757c4) main_fmradio_pane_t3

0xce39,	// (0x0007679c) popup_cale_lunar_info_window_g2

0xbe6f,	// (0x000757d2) main_fmradio_pane_t4

0x0001,

0xbe7d,	// (0x000757e0) main_fmradio_pane_t5

0x0004,

0xf524,	// (0x00078e87) popup_cale_lunar_info_window_g

0xf446,	// (0x00078da9) main_fmradio_pane_t

0xbe8b,	// (0x000757ee) wait_bar_pane_cp03

0xbe93,	// (0x000757f6) cell_fmradio_pane_ParamLimits

0xbe93,	// (0x000757f6) cell_fmradio_pane

0xbcec,	// (0x0007564f) cell_fmradio_pane_g1_ParamLimits

0xbcec,	// (0x0007564f) cell_fmradio_pane_g1

0xabef,	// (0x00074552) grid_highlight_pane_cp011

0xbea6,	// (0x00075809) poc_content_pane_ParamLimits

0xbea6,	// (0x00075809) poc_content_pane

0xbeb8,	// (0x0007581b) scroll_pane_cp019

0x2b56,	// (0x0006c4b9) popup_call_poc_act_window_ParamLimits

0x2b56,	// (0x0006c4b9) popup_call_poc_act_window

0x2b7a,	// (0x0006c4dd) popup_call_poc_inact_window_ParamLimits

0x2b7a,	// (0x0006c4dd) popup_call_poc_inact_window

0xf4e8,	// (0x00078e4b) bg_popup_call_poc_act_pane_g

0xcddb,	// (0x0007673e) bg_popup_call_poc_inact_pane_g1

0xcde3,	// (0x00076746) bg_popup_call_poc_inact_pane_g2

0xbec0,	// (0x00075823) popup_call_poc_act_window_g2

0xcdeb,	// (0x0007674e) bg_popup_call_poc_inact_pane_g3

0xcd6b,	// (0x000766ce) bg_popup_call_poc_inact_pane_g4

0xcdf3,	// (0x00076756) bg_popup_call_poc_inact_pane_g5

0xbec8,	// (0x0007582b) popup_call_poc_act_window_t1_ParamLimits

0xbec8,	// (0x0007582b) popup_call_poc_act_window_t1

0xbef0,	// (0x00075853) popup_call_poc_act_window_t2_ParamLimits

0xbef0,	// (0x00075853) popup_call_poc_act_window_t2

0xbf18,	// (0x0007587b) popup_call_poc_act_window_t3_ParamLimits

0xbf18,	// (0x0007587b) popup_call_poc_act_window_t3

0xbf40,	// (0x000758a3) popup_call_poc_act_window_t4_ParamLimits

0xbf40,	// (0x000758a3) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x00078db4) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x00078db4) popup_call_poc_act_window_t

0xcdfb,	// (0x0007675e) bg_popup_call_poc_inact_pane_g6

0xce03,	// (0x00076766) bg_popup_call_poc_inact_pane_g7

0xce0b,	// (0x0007676e) bg_popup_call_poc_inact_pane_g8

0xbf52,	// (0x000758b5) popup_call_poc_inact_window_g2

0xce13,	// (0x00076776) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ff,	// (0x00078e62) bg_popup_call_poc_inact_pane_g

0xbf5a,	// (0x000758bd) popup_call_poc_inact_window_t1_ParamLimits

0xbf5a,	// (0x000758bd) popup_call_poc_inact_window_t1

0xbf6f,	// (0x000758d2) popup_call_poc_inact_window_t2_ParamLimits

0xbf6f,	// (0x000758d2) popup_call_poc_inact_window_t2

0xbf84,	// (0x000758e7) popup_call_poc_inact_window_t3_ParamLimits

0xbf84,	// (0x000758e7) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x00078dbd) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x00078dbd) popup_call_poc_inact_window_t

0xcecd,	// (0x00076830) context_pane_ParamLimits

0x33f5,	// (0x0006cd58) signal_pane_ParamLimits

0xb0f2,	// (0x00074a55) main_call2_pane

0x9247,	// (0x00072baa) popup_phob_thumbnail2_window_ParamLimits

0x9247,	// (0x00072baa) popup_phob_thumbnail2_window

0x91e4,	// (0x00072b47) aid_hotspot_pointer_arrow_pane

0x91ec,	// (0x00072b4f) aid_hotspot_pointer_hand_pane

0x2ee3,	// (0x0006c846) phob_pre_status_pane_g5

0xa32e,	// (0x00073c91) cams_zoom_pane_ParamLimits

0xa32e,	// (0x00073c91) image_vga_pane_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g1_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g2_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g3_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g4_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g5_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g6_ParamLimits

0xaec5,	// (0x00074828) main_camera_pane_g7_ParamLimits

0xf185,	// (0x00078ae8) main_camera_pane_g_ParamLimits

0xb0fa,	// (0x00074a5d) main_camera_pane_t1_ParamLimits

0xb0fa,	// (0x00074a5d) main_camera_pane_t2_ParamLimits

0xf196,	// (0x00078af9) main_camera_pane_t_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_preview_window_pane_cp01_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_preview_window_pane_cp01

0xbf99,	// (0x000758fc) popup_phob_thumbnail2_window_g1_ParamLimits

0xbf99,	// (0x000758fc) popup_phob_thumbnail2_window_g1

0xabef,	// (0x00074552) call2_cli_visual_pane

0x2bae,	// (0x0006c511) popup_call2_audio_conf_window_ParamLimits

0x2bae,	// (0x0006c511) popup_call2_audio_conf_window

0x2bce,	// (0x0006c531) popup_call2_audio_first_window_ParamLimits

0x2bce,	// (0x0006c531) popup_call2_audio_first_window

0x2c64,	// (0x0006c5c7) popup_call2_audio_in_window_ParamLimits

0x2c64,	// (0x0006c5c7) popup_call2_audio_in_window

0x2cac,	// (0x0006c60f) popup_call2_audio_out_window_ParamLimits

0x2cac,	// (0x0006c60f) popup_call2_audio_out_window

0x2d16,	// (0x0006c679) popup_call2_audio_second_window_ParamLimits

0x2d16,	// (0x0006c679) popup_call2_audio_second_window

0x2d7c,	// (0x0006c6df) popup_call2_audio_wait_window_ParamLimits

0x2d7c,	// (0x0006c6df) popup_call2_audio_wait_window

0xabef,	// (0x00074552) bg_popup_call2_act_pane_cp03

0xae2c,	// (0x0007478f) list_conf_pane_cp

0xbfa5,	// (0x00075908) popup_call2_audio_conf_window_t1

0xbfb3,	// (0x00075916) list_single_graphic_popup_conf2_pane_ParamLimits

0xbfb3,	// (0x00075916) list_single_graphic_popup_conf2_pane

0xb84f,	// (0x000751b2) list_highlight_pane_cp04

0xbfc6,	// (0x00075929) list_single_graphic_popup_conf2_pane_g1

0xb860,	// (0x000751c3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x00078dc4) list_single_graphic_popup_conf2_pane_g

0xbfd0,	// (0x00075933) list_single_graphic_popup_conf2_pane_t1

0xbfde,	// (0x00075941) bg_popup_call2_act_pane_cp01_ParamLimits

0xbfde,	// (0x00075941) bg_popup_call2_act_pane_cp01

0xc068,	// (0x000759cb) call_type_pane_cp05_ParamLimits

0xc068,	// (0x000759cb) call_type_pane_cp05

0xc0bc,	// (0x00075a1f) popup_call2_audio_second_window_g1_ParamLimits

0xc0bc,	// (0x00075a1f) popup_call2_audio_second_window_g1

0xc110,	// (0x00075a73) popup_call2_audio_second_window_g2_ParamLimits

0xc110,	// (0x00075a73) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x00078dc9) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x00078dc9) popup_call2_audio_second_window_g

0xc175,	// (0x00075ad8) popup_call2_audio_second_window_t1_ParamLimits

0xc175,	// (0x00075ad8) popup_call2_audio_second_window_t1

0xc230,	// (0x00075b93) popup_call2_audio_second_window_t2_ParamLimits

0xc230,	// (0x00075b93) popup_call2_audio_second_window_t2

0xc283,	// (0x00075be6) popup_call2_audio_second_window_t3_ParamLimits

0xc283,	// (0x00075be6) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x00078dd0) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x00078dd0) popup_call2_audio_second_window_t

0xabef,	// (0x00074552) bg_popup_call2_in_pane_cp02

0xabf9,	// (0x0007455c) call_type_pane_cp04

0x2db6,	// (0x0006c719) popup_call2_audio_wait_window_g1

0x2dbe,	// (0x0006c721) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x00078dd9) popup_call2_audio_wait_window_g

0xac11,	// (0x00074574) popup_call2_audio_wait_window_t3

0xc376,	// (0x00075cd9) bg_popup_call2_act_pane_ParamLimits

0xc376,	// (0x00075cd9) bg_popup_call2_act_pane

0xc436,	// (0x00075d99) call_type_pane_cp03_ParamLimits

0xc436,	// (0x00075d99) call_type_pane_cp03

0xc49a,	// (0x00075dfd) popup_call2_audio_first_window_g1_ParamLimits

0xc49a,	// (0x00075dfd) popup_call2_audio_first_window_g1

0xc50a,	// (0x00075e6d) popup_call2_audio_first_window_g2_ParamLimits

0xc50a,	// (0x00075e6d) popup_call2_audio_first_window_g2

0xc56e,	// (0x00075ed1) popup_call2_audio_first_window_g3_ParamLimits

0xc56e,	// (0x00075ed1) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x00078dde) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x00078dde) popup_call2_audio_first_window_g

0xc5f6,	// (0x00075f59) popup_call2_audio_first_window_t1_ParamLimits

0xc5f6,	// (0x00075f59) popup_call2_audio_first_window_t1

0xc6f9,	// (0x0007605c) popup_call2_audio_first_window_t4_ParamLimits

0xc6f9,	// (0x0007605c) popup_call2_audio_first_window_t4

0xc7dc,	// (0x0007613f) popup_call2_audio_first_window_t5_ParamLimits

0xc7dc,	// (0x0007613f) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x00078de9) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x00078de9) popup_call2_audio_first_window_t

0xae42,	// (0x000747a5) bg_popup_call2_act_pane_g1

0xce41,	// (0x000767a4) popup_cale_lunar_info_window_t1

0xce4f,	// (0x000767b2) popup_cale_lunar_info_window_t2

0xce5d,	// (0x000767c0) popup_cale_lunar_info_window_t3

0xabef,	// (0x00074552) bg_popup_call2_bubble_pane

0xc8dd,	// (0x00076240) bg_popup_call2_in_pane_cp01_ParamLimits

0xc8dd,	// (0x00076240) bg_popup_call2_in_pane_cp01

0xa8cb,	// (0x0007422e) call_type_pane_cp02

0x2dc6,	// (0x0006c729) popup_call2_audio_out_window_g1_ParamLimits

0x2dc6,	// (0x0006c729) popup_call2_audio_out_window_g1

0xc925,	// (0x00076288) popup_call2_audio_out_window_g2_ParamLimits

0xc925,	// (0x00076288) popup_call2_audio_out_window_g2

0x2df2,	// (0x0006c755) popup_call2_audio_out_window_g3_ParamLimits

0x2df2,	// (0x0006c755) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x00078df2) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x00078df2) popup_call2_audio_out_window_g

0xc95c,	// (0x000762bf) popup_call2_audio_out_window_t1_ParamLimits

0xc95c,	// (0x000762bf) popup_call2_audio_out_window_t1

0xc9bb,	// (0x0007631e) popup_call2_audio_out_window_t2_ParamLimits

0xc9bb,	// (0x0007631e) popup_call2_audio_out_window_t2

0xca0f,	// (0x00076372) popup_call2_audio_out_window_t3_ParamLimits

0xca0f,	// (0x00076372) popup_call2_audio_out_window_t3

0xca25,	// (0x00076388) popup_call2_audio_out_window_t4_ParamLimits

0xca25,	// (0x00076388) popup_call2_audio_out_window_t4

0xca3b,	// (0x0007639e) popup_call2_audio_out_window_t5_ParamLimits

0xca3b,	// (0x0007639e) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x00078dfb) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x00078dfb) popup_call2_audio_out_window_t

0xca9f,	// (0x00076402) bg_popup_call2_in_pane_ParamLimits

0xca9f,	// (0x00076402) bg_popup_call2_in_pane

0xcafb,	// (0x0007645e) popup_call2_audio_in_window_g1_ParamLimits

0xcafb,	// (0x0007645e) popup_call2_audio_in_window_g1

0xcb33,	// (0x00076496) popup_call2_audio_in_window_g2_ParamLimits

0xcb33,	// (0x00076496) popup_call2_audio_in_window_g2

0xcb6b,	// (0x000764ce) popup_call2_audio_in_window_g3_ParamLimits

0xcb6b,	// (0x000764ce) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x00078e08) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x00078e08) popup_call2_audio_in_window_g

0xcbc3,	// (0x00076526) popup_call2_audio_in_window_t1_ParamLimits

0xcbc3,	// (0x00076526) popup_call2_audio_in_window_t1

0xcc43,	// (0x000765a6) popup_call2_audio_in_window_t2_ParamLimits

0xcc43,	// (0x000765a6) popup_call2_audio_in_window_t2

0xccc3,	// (0x00076626) popup_call2_audio_in_window_t3_ParamLimits

0xccc3,	// (0x00076626) popup_call2_audio_in_window_t3

0xccdd,	// (0x00076640) popup_call2_audio_in_window_t4_ParamLimits

0xccdd,	// (0x00076640) popup_call2_audio_in_window_t4

0xccef,	// (0x00076652) popup_call2_audio_in_window_t5_ParamLimits

0xccef,	// (0x00076652) popup_call2_audio_in_window_t5

0xcd01,	// (0x00076664) popup_call2_audio_in_window_t6_ParamLimits

0xcd01,	// (0x00076664) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x00078e11) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x00078e11) popup_call2_audio_in_window_t

0xae42,	// (0x000747a5) bg_popup_call2_in_pane_g1

0xce6b,	// (0x000767ce) popup_cale_lunar_info_window_t4

0x0003,

0xf529,	// (0x00078e8c) popup_cale_lunar_info_window_t

0xae4a,	// (0x000747ad) bg_popup_call2_rect_pane_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_call2_rect_pane

0xabef,	// (0x00074552) call2_cli_visual_graphic_pane

0xabef,	// (0x00074552) call2_cli_visual_text_pane

0x926e,	// (0x00072bd1) smil_status_volume_pane_g3

0x0002,

0xae62,	// (0x000747c5) call2_cli_visual_graphic_pane_g1

0xae62,	// (0x000747c5) call2_cli_visual_graphic_pane_g2

0xae62,	// (0x000747c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x00078e1e) call2_cli_visual_graphic_pane_g

0xcd13,	// (0x00076676) bg_popup_call2_rect_pane_g1

0xb017,	// (0x0007497a) bg_popup_call2_rect_pane_g2

0xcd1b,	// (0x0007667e) bg_popup_call2_rect_pane_g3

0xcd23,	// (0x00076686) bg_popup_call2_rect_pane_g4

0xcd2b,	// (0x0007668e) bg_popup_call2_rect_pane_g5

0xcd33,	// (0x00076696) bg_popup_call2_rect_pane_g6

0xcd3b,	// (0x0007669e) bg_popup_call2_rect_pane_g7

0xcd43,	// (0x000766a6) bg_popup_call2_rect_pane_g8

0xcd4b,	// (0x000766ae) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x00078e25) bg_popup_call2_rect_pane_g

0xcd53,	// (0x000766b6) bg_popup_call2_bubble_pane_g1

0xcd5b,	// (0x000766be) bg_popup_call2_bubble_pane_g2

0xcd63,	// (0x000766c6) bg_popup_call2_bubble_pane_g3

0xcd6b,	// (0x000766ce) bg_popup_call2_bubble_pane_g4

0xcd73,	// (0x000766d6) bg_popup_call2_bubble_pane_g5

0xcd7b,	// (0x000766de) bg_popup_call2_bubble_pane_g6

0xcd83,	// (0x000766e6) bg_popup_call2_bubble_pane_g7

0xcd8b,	// (0x000766ee) bg_popup_call2_bubble_pane_g8

0xcd93,	// (0x000766f6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x00078e38) bg_popup_call2_bubble_pane_g

0x0c1e,	// (0x0006a581) aid_cale_week_size_cell_pane

0x11ce,	// (0x0006ab31) aid_cams_cif_uncrop_pane_ParamLimits

0x11ce,	// (0x0006ab31) aid_cams_cif_uncrop_pane

0x1324,	// (0x0006ac87) aid_cams_size_cell_ParamLimits

0x1324,	// (0x0006ac87) aid_cams_size_cell

0x1338,	// (0x0006ac9b) grid_cams_pane_ParamLimits

0x1352,	// (0x0006acb5) linegrid_cams_pane_ParamLimits

0x1438,	// (0x0006ad9b) call_video_pane_t1

0x1456,	// (0x0006adb9) call_video_pane_t2

0x0001,

0xf1e2,	// (0x00078b45) call_video_pane_t

0x187c,	// (0x0006b1df) aid_cale_month_size_cell_pane_ParamLimits

0x187c,	// (0x0006b1df) aid_cale_month_size_cell_pane

0xf56d,	// (0x00078ed0) smil_status_volume_pane_g

0x927b,	// (0x00072bde) volume_smil_pane_ParamLimits

0x9020,	// (0x00072983) aid_popup2_width_pane

0x0b75,	// (0x0006a4d8) cell_qdial_pane_g4_ParamLimits

0x0b75,	// (0x0006a4d8) cell_qdial_pane_g4

0x243e,	// (0x0006bda1) aid_blid_cardinal_pane_ParamLimits

0x244a,	// (0x0006bdad) aid_blid_destination_pane_ParamLimits

0x244a,	// (0x0006bdad) aid_blid_destination_pane

0xae4a,	// (0x000747ad) bg_popup_call_poc_act_pane_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_call_poc_act_pane

0xae4a,	// (0x000747ad) bg_popup_call_poc_inact_pane_ParamLimits

0xae4a,	// (0x000747ad) bg_popup_call_poc_inact_pane

0xcd9b,	// (0x000766fe) bg_popup_call_poc_act_pane_g1

0xcda3,	// (0x00076706) bg_popup_call_poc_act_pane_g2

0xcdab,	// (0x0007670e) bg_popup_call_poc_act_pane_g3

0xcd6b,	// (0x000766ce) bg_popup_call_poc_act_pane_g4

0xcd73,	// (0x000766d6) bg_popup_call_poc_act_pane_g5

0xcdb3,	// (0x00076716) bg_popup_call_poc_act_pane_g6

0xcd83,	// (0x000766e6) bg_popup_call_poc_act_pane_g7

0xcdbb,	// (0x0007671e) bg_popup_call_poc_act_pane_g8

0xabef,	// (0x00074552) main_usb_pane

0x9222,	// (0x00072b85) popup_cale_lunar_info_window

0x1722,	// (0x0006b085) im_reading_pane_t1_ParamLimits

0xb1e1,	// (0x00074b44) list_im_pane_ParamLimits

0xb1f2,	// (0x00074b55) scroll_pane_cp07_ParamLimits

0xabef,	// (0x00074552) grid_highlight_pane_cp012

0xae4a,	// (0x000747ad) mup_scale_pane_ParamLimits

0xbcec,	// (0x0007564f) main_usb_pane_g1_ParamLimits

0xbcec,	// (0x0007564f) main_usb_pane_g1

0x2e41,	// (0x0006c7a4) main_usb_pane_g2_ParamLimits

0x2e41,	// (0x0006c7a4) main_usb_pane_g2

0x0001,

0xf512,	// (0x00078e75) main_usb_pane_g_ParamLimits

0xf512,	// (0x00078e75) main_usb_pane_g

0x2e57,	// (0x0006c7ba) main_usb_pane_t1_ParamLimits

0x2e57,	// (0x0006c7ba) main_usb_pane_t1

0x2e69,	// (0x0006c7cc) main_usb_pane_t2_ParamLimits

0x2e69,	// (0x0006c7cc) main_usb_pane_t2

0x2e7b,	// (0x0006c7de) main_usb_pane_t3_ParamLimits

0x2e7b,	// (0x0006c7de) main_usb_pane_t3

0x2e8d,	// (0x0006c7f0) main_usb_pane_t4_ParamLimits

0x2e8d,	// (0x0006c7f0) main_usb_pane_t4

0x2e9f,	// (0x0006c802) main_usb_pane_t5_ParamLimits

0x2e9f,	// (0x0006c802) main_usb_pane_t5

0x2eb1,	// (0x0006c814) main_usb_pane_t6_ParamLimits

0x2eb1,	// (0x0006c814) main_usb_pane_t6

0x0005,

0xf517,	// (0x00078e7a) main_usb_pane_t_ParamLimits

0x23ed,	// (0x0006bd50) aid_text_placing

0x23f6,	// (0x0006bd59) main_location2_pane_t1_ParamLimits

0x2408,	// (0x0006bd6b) main_location2_pane_t2_ParamLimits

0x241a,	// (0x0006bd7d) main_location2_pane_t3_ParamLimits

0x242c,	// (0x0006bd8f) main_location2_pane_t4_ParamLimits

0x242c,	// (0x0006bd8f) main_location2_pane_t4

0xf31e,	// (0x00078c81) main_location2_pane_t_ParamLimits

0xae78,	// (0x000747db) find_pinb_pane_g2_ParamLimits

0xae78,	// (0x000747db) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x000789fd) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x000789fd) find_pinb_pane_g

0xae84,	// (0x000747e7) find_pinb_pane_t1_ParamLimits

0xae96,	// (0x000747f9) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x00078a02) find_pinb_pane_t_ParamLimits

0xabef,	// (0x00074552) main_call3_pane

0x1d63,	// (0x0006b6c6) cale_month_day_heading_pane_t1_ParamLimits

0x1da5,	// (0x0006b708) cale_month_day_heading_pane_t2_ParamLimits

0x1dda,	// (0x0006b73d) cale_month_day_heading_pane_t3_ParamLimits

0x1e0f,	// (0x0006b772) cale_month_day_heading_pane_t4_ParamLimits

0x1e4c,	// (0x0006b7af) cale_month_day_heading_pane_t5_ParamLimits

0x1e91,	// (0x0006b7f4) cale_month_day_heading_pane_t6_ParamLimits

0x1ed6,	// (0x0006b839) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x00078b7d) cale_month_day_heading_pane_t_ParamLimits

0xb445,	// (0x00074da8) smil_status_volume_pane

0x28d2,	// (0x0006c235) postcard_address_pane_ParamLimits

0x28d2,	// (0x0006c235) postcard_address_pane

0x28e4,	// (0x0006c247) postcard_message_pane_ParamLimits

0x28e4,	// (0x0006c247) postcard_message_pane

0x2e1e,	// (0x0006c781) call2_cli_visual_pane_t1_ParamLimits

0x2e1e,	// (0x0006c781) call2_cli_visual_pane_t1

0xcf80,	// (0x000768e3) postcard_message_pane_t1_ParamLimits

0xcf80,	// (0x000768e3) postcard_message_pane_t1

0xcf68,	// (0x000768cb) postcard_address_pane_t1_ParamLimits

0xcf68,	// (0x000768cb) postcard_address_pane_t1

0x35a8,	// (0x0006cf0b) popup_call3_audio_in_window_ParamLimits

0x35a8,	// (0x0006cf0b) popup_call3_audio_in_window

0x3433,	// (0x0006cd96) bg_popup_call3_in_pane_ParamLimits

0x3433,	// (0x0006cd96) bg_popup_call3_in_pane

0x34a9,	// (0x0006ce0c) popup_call3_audio_in_window_g1_ParamLimits

0x34a9,	// (0x0006ce0c) popup_call3_audio_in_window_g1

0x34c9,	// (0x0006ce2c) popup_call3_audio_in_window_g2_ParamLimits

0x34c9,	// (0x0006ce2c) popup_call3_audio_in_window_g2

0x34e9,	// (0x0006ce4c) popup_call3_audio_in_window_g3_ParamLimits

0x34e9,	// (0x0006ce4c) popup_call3_audio_in_window_g3

0x0003,

0xf574,	// (0x00078ed7) popup_call3_audio_in_window_g_ParamLimits

0xf574,	// (0x00078ed7) popup_call3_audio_in_window_g

0x351a,	// (0x0006ce7d) popup_call3_audio_in_window_t1_ParamLimits

0x351a,	// (0x0006ce7d) popup_call3_audio_in_window_t1

0x3558,	// (0x0006cebb) popup_call3_audio_in_window_t2_ParamLimits

0x3558,	// (0x0006cebb) popup_call3_audio_in_window_t2

0x3596,	// (0x0006cef9) popup_call3_audio_in_window_t3_ParamLimits

0x3596,	// (0x0006cef9) popup_call3_audio_in_window_t3

0x0002,

0xf57d,	// (0x00078ee0) popup_call3_audio_in_window_t_ParamLimits

0xf57d,	// (0x00078ee0) popup_call3_audio_in_window_t

0xb0f2,	// (0x00074a55) bg_popup_call3_rect_pane

0xcd13,	// (0x00076676) bg_popup_call3_rect_pane_g1

0xb017,	// (0x0007497a) bg_popup_call3_rect_pane_g2

0xcd1b,	// (0x0007667e) bg_popup_call3_rect_pane_g3

0xcd23,	// (0x00076686) bg_popup_call3_rect_pane_g4

0xcd2b,	// (0x0007668e) bg_popup_call3_rect_pane_g5

0xcd33,	// (0x00076696) bg_popup_call3_rect_pane_g6

0xcd3b,	// (0x0007669e) bg_popup_call3_rect_pane_g7

0xa2cd,	// (0x00073c30) mup_visualizer_osc_pane

0xa2cd,	// (0x00073c30) mup_visualizer_spec_pane

0x3463,	// (0x0006cdc6) call3_video_qcif_pane_ParamLimits

0x3463,	// (0x0006cdc6) call3_video_qcif_pane

0x3476,	// (0x0006cdd9) call3_video_qcif_uncrop_pane_ParamLimits

0x3476,	// (0x0006cdd9) call3_video_qcif_uncrop_pane

0x3484,	// (0x0006cde7) call3_video_subqcif_pane_ParamLimits

0x3484,	// (0x0006cde7) call3_video_subqcif_pane

0x3498,	// (0x0006cdfb) call3_video_subqcif_uncrop_pane_ParamLimits

0x3498,	// (0x0006cdfb) call3_video_subqcif_uncrop_pane

0x3509,	// (0x0006ce6c) popup_call3_audio_in_window_g4_ParamLimits

0x3509,	// (0x0006ce6c) popup_call3_audio_in_window_g4

0xa2cd,	// (0x00073c30) mup_spec_half_pane

0xa2cd,	// (0x00073c30) mup_spec_half_pane_cp

0xa2cd,	// (0x00073c30) mup_osc_middle_pane

0xb128,	// (0x00074a8b) mup_visualizer_osc_pane_g1

0xcf1b,	// (0x0007687e) mup_spec_bar_pane_ParamLimits

0xcf1b,	// (0x0007687e) mup_spec_bar_pane

0xb128,	// (0x00074a8b) mup_spec_bar_pane_g1

0xb128,	// (0x00074a8b) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x00078cfb) mup_spec_bar_pane_g

0x0c1e,	// (0x0006a581) aid_cale_week_size_cell_pane_ParamLimits

0x0c38,	// (0x0006a59b) bg_cale_heading_pane_ParamLimits

0xb054,	// (0x000749b7) bg_cale_pane_cp01_ParamLimits

0x0c50,	// (0x0006a5b3) cale_week_corner_pane_ParamLimits

0x0c6f,	// (0x0006a5d2) cale_week_day_heading_pane_ParamLimits

0x0c8c,	// (0x0006a5ef) cale_week_scroll_pane_g1_ParamLimits

0x0c9f,	// (0x0006a602) cale_week_scroll_pane_g2_ParamLimits

0x0cb7,	// (0x0006a61a) cale_week_scroll_pane_g3_ParamLimits

0x0ccf,	// (0x0006a632) cale_week_scroll_pane_g4_ParamLimits

0x0ce7,	// (0x0006a64a) cale_week_scroll_pane_g5_ParamLimits

0x0d07,	// (0x0006a66a) cale_week_scroll_pane_g6_ParamLimits

0x0d27,	// (0x0006a68a) cale_week_scroll_pane_g7_ParamLimits

0x0d47,	// (0x0006a6aa) cale_week_scroll_pane_g8_ParamLimits

0x0d6b,	// (0x0006a6ce) cale_week_scroll_pane_g9_ParamLimits

0x0d83,	// (0x0006a6e6) cale_week_scroll_pane_g10_ParamLimits

0x0d9b,	// (0x0006a6fe) cale_week_scroll_pane_g11_ParamLimits

0x0db3,	// (0x0006a716) cale_week_scroll_pane_g12_ParamLimits

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g13_ParamLimits

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g14_ParamLimits

0x0dcb,	// (0x0006a72e) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x00078a8e) cale_week_scroll_pane_g_ParamLimits

0x0e07,	// (0x0006a76a) cale_week_time_pane_ParamLimits

0x0e2b,	// (0x0006a78e) grid_cale_week_pane_ParamLimits

0xb071,	// (0x000749d4) listscroll_cale_week_pane_t1

0xb083,	// (0x000749e6) scroll_pane_cp08_ParamLimits

0x18dc,	// (0x0006b23f) cale_month_corner_pane_ParamLimits

0xb41b,	// (0x00074d7e) cale_month_pane_t1

0x1cf6,	// (0x0006b659) cale_month_week_pane_ParamLimits

0x2242,	// (0x0006bba5) popup_call_status_window_g1_ParamLimits

0x2256,	// (0x0006bbb9) popup_call_status_window_g2_ParamLimits

0x226a,	// (0x0006bbcd) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00078c08) popup_call_status_window_g_ParamLimits

0xb7db,	// (0x0007513e) aid_call2_pane

0x277f,	// (0x0006c0e2) msg_header_pane_g1

0x28d2,	// (0x0006c235) postcard_address2_pane_ParamLimits

0x28d2,	// (0x0006c235) postcard_address2_pane

0x28e4,	// (0x0006c247) postcard_message2_pane_ParamLimits

0x28e4,	// (0x0006c247) postcard_message2_pane

0x3403,	// (0x0006cd66) message2_row_pane_ParamLimits

0x3403,	// (0x0006cd66) message2_row_pane

0x3420,	// (0x0006cd83) address2_row_pane_ParamLimits

0x3420,	// (0x0006cd83) address2_row_pane

0xcee8,	// (0x0007684b) postcard_message2_row_pane_g1

0xcef0,	// (0x00076853) postcard_message2_row_pane_t1

0xcee8,	// (0x0007684b) address2_row_pane_g1

0xcef0,	// (0x00076853) address2_row_pane_t1

0x1165,	// (0x0006aac8) aid_size_cell_vorec

0xabef,	// (0x00074552) main_rss_pane

0xcefe,	// (0x00076861) rss_list_single_pane_ParamLimits

0xcefe,	// (0x00076861) rss_list_single_pane

0xcf0c,	// (0x0007686f) rss_list_single_pane_t1

0xcf0c,	// (0x0007686f) rss_list_single_pane_t2

0x0001,

0xf568,	// (0x00078ecb) rss_list_single_pane_t

0xabef,	// (0x00074552) main_camera2_pane

0xabef,	// (0x00074552) main_video2_pane

0x9290,	// (0x00072bf3) cams_zoom_pane_cp2_ParamLimits

0x9290,	// (0x00072bf3) cams_zoom_pane_cp2

0x9290,	// (0x00072bf3) image2_vga_pane_ParamLimits

0x9290,	// (0x00072bf3) image2_vga_pane

0x929e,	// (0x00072c01) main_camera2_pane_g1_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g1

0x929e,	// (0x00072c01) main_camera2_pane_g2_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g2

0x929e,	// (0x00072c01) main_camera2_pane_g3_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g3

0x929e,	// (0x00072c01) main_camera2_pane_g4_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g4

0x929e,	// (0x00072c01) main_camera2_pane_g5_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g5

0x929e,	// (0x00072c01) main_camera2_pane_g6_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g6

0x929e,	// (0x00072c01) main_camera2_pane_g7_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g7

0x929e,	// (0x00072c01) main_camera2_pane_g8_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g8

0x0008,

0xf584,	// (0x00078ee7) main_camera2_pane_g_ParamLimits

0xf584,	// (0x00078ee7) main_camera2_pane_g

0x35ca,	// (0x0006cf2d) main_camera2_pane_t1_ParamLimits

0x35ca,	// (0x0006cf2d) main_camera2_pane_t1

0x35ca,	// (0x0006cf2d) main_camera2_pane_t2_ParamLimits

0x35ca,	// (0x0006cf2d) main_camera2_pane_t2

0x35ca,	// (0x0006cf2d) main_camera2_pane_t3_ParamLimits

0x35ca,	// (0x0006cf2d) main_camera2_pane_t3

0x35ca,	// (0x0006cf2d) main_camera2_pane_t4_ParamLimits

0x35ca,	// (0x0006cf2d) main_camera2_pane_t4

0x0006,

0xf597,	// (0x00078efa) main_camera2_pane_t_ParamLimits

0xf597,	// (0x00078efa) main_camera2_pane_t

0x92e2,	// (0x00072c45) cams_zoom_pane_cp4_ParamLimits

0x92e2,	// (0x00072c45) cams_zoom_pane_cp4

0x35de,	// (0x0006cf41) image2_cif_pane_ParamLimits

0x35de,	// (0x0006cf41) image2_cif_pane

0x9085,	// (0x000729e8) image2_subqcif_pane_ParamLimits

0x9085,	// (0x000729e8) image2_subqcif_pane

0x35ec,	// (0x0006cf4f) main_video2_pane_g1_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g1

0x35ec,	// (0x0006cf4f) main_video2_pane_g2_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g2

0x35ec,	// (0x0006cf4f) main_video2_pane_g3_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g3

0x35ec,	// (0x0006cf4f) main_video2_pane_g4_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g4

0x35ec,	// (0x0006cf4f) main_video2_pane_g5_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g5

0x35ec,	// (0x0006cf4f) main_video2_pane_g6_ParamLimits

0x35ec,	// (0x0006cf4f) main_video2_pane_g6

0x0005,

0xf5a6,	// (0x00078f09) main_video2_pane_g_ParamLimits

0xf5a6,	// (0x00078f09) main_video2_pane_g

0x35fa,	// (0x0006cf5d) main_video2_pane_t1_ParamLimits

0x35fa,	// (0x0006cf5d) main_video2_pane_t1

0x35fa,	// (0x0006cf5d) main_video2_pane_t2_ParamLimits

0x35fa,	// (0x0006cf5d) main_video2_pane_t2

0x35fa,	// (0x0006cf5d) main_video2_pane_t3_ParamLimits

0x35fa,	// (0x0006cf5d) main_video2_pane_t3

0x0002,

0xf5b3,	// (0x00078f16) main_video2_pane_t_ParamLimits

0xf5b3,	// (0x00078f16) main_video2_pane_t

0x2f45,	// (0x0006c8a8) call_muted_g2

0x0001,

0xf55a,	// (0x00078ebd) call_muted_g

0xabef,	// (0x00074552) main_mup2_pane

0xbbdf,	// (0x00075542) main_mup2_pane_g1_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g1

0xbbdf,	// (0x00075542) main_mup2_pane_g2_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g2

0xde4c,	// (0x000777af) main_mup_pane_g13_cp1

0x9093,	// (0x000729f6) mup_volume_pane_cp1

0xbbdf,	// (0x00075542) main_mup2_pane_g4_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g4

0xbbdf,	// (0x00075542) main_mup2_pane_g5_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g5

0xbbdf,	// (0x00075542) main_mup2_pane_g6_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g6

0xbbdf,	// (0x00075542) main_mup2_pane_g7_ParamLimits

0xbbdf,	// (0x00075542) main_mup2_pane_g7

0x0006,

0xf5ba,	// (0x00078f1d) main_mup2_pane_g_ParamLimits

0xf5ba,	// (0x00078f1d) main_mup2_pane_g

0xbbed,	// (0x00075550) main_mup2_pane_t1_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t1

0xbbed,	// (0x00075550) main_mup2_pane_t2_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t2

0xbbed,	// (0x00075550) main_mup2_pane_t3_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t3

0xbbed,	// (0x00075550) main_mup2_pane_t4_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t4

0xbbed,	// (0x00075550) main_mup2_pane_t5_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t5

0xbbed,	// (0x00075550) main_mup2_pane_t6_ParamLimits

0xbbed,	// (0x00075550) main_mup2_pane_t6

0x0005,

0xf5c9,	// (0x00078f2c) main_mup2_pane_t_ParamLimits

0xf5c9,	// (0x00078f2c) main_mup2_pane_t

0xbc15,	// (0x00075578) mup2_visualizer_pane_ParamLimits

0xbc15,	// (0x00075578) mup2_visualizer_pane

0xbc15,	// (0x00075578) mup_progress_pane_cp_ParamLimits

0xbc15,	// (0x00075578) mup_progress_pane_cp

0x9306,	// (0x00072c69) mup_volume_pane_cp_ParamLimits

0x9306,	// (0x00072c69) mup_volume_pane_cp

0xaec5,	// (0x00074828) mup2_visualizer_pane_g1_ParamLimits

0xaec5,	// (0x00074828) mup2_visualizer_pane_g1

0xaed3,	// (0x00074836) mup2_visualizer_pane_g2_ParamLimits

0xaed3,	// (0x00074836) mup2_visualizer_pane_g2

0xaed3,	// (0x00074836) mup2_visualizer_pane_g3_ParamLimits

0xaed3,	// (0x00074836) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x00078a07) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x00078a07) mup2_visualizer_pane_g

0xbe35,	// (0x00075798) aid_size_cell_fmradio

0x30f7,	// (0x0006ca5a) aid_height_parent_landcape

0xb270,	// (0x00074bd3) wml_content_pane_cp

0xb278,	// (0x00074bdb) wml_tabs_pane

0xb281,	// (0x00074be4) popup_wml_miniature_window

0xb289,	// (0x00074bec) scroll_pane_cp021

0xb29d,	// (0x00074c00) wml_content_pane_comp8

0xabef,	// (0x00074552) bg_popup_sub_pane_cp05

0xcfb2,	// (0x00076915) popup_wml_miniature_window_g1

0xcfba,	// (0x0007691d) wml_miniature_view_pane

0x360e,	// (0x0006cf71) aid_size_wml_view

0x3616,	// (0x0006cf79) wml_miniature_view_pane_g1

0x361f,	// (0x0006cf82) wml_miniature_view_pane_g2

0x3628,	// (0x0006cf8b) wml_miniature_view_pane_g3

0x3630,	// (0x0006cf93) wml_miniature_view_pane_g4

0x3638,	// (0x0006cf9b) wml_miniature_view_pane_g5

0x3640,	// (0x0006cfa3) wml_miniature_view_pane_g6

0x3648,	// (0x0006cfab) wml_miniature_view_pane_g7

0x3650,	// (0x0006cfb3) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x00078f39) wml_miniature_view_pane_g

0xcfc2,	// (0x00076925) background_graphic_ParamLimits

0xcfc2,	// (0x00076925) background_graphic

0xcfce,	// (0x00076931) wml_tabs_2_pane

0xcfd7,	// (0x0007693a) wml_tabs_3_pane_ParamLimits

0xcfd7,	// (0x0007693a) wml_tabs_3_pane

0xcfe9,	// (0x0007694c) wml_tabs_4_pane_ParamLimits

0xcfe9,	// (0x0007694c) wml_tabs_4_pane

0xcfff,	// (0x00076962) wml_tabs_5_pane_ParamLimits

0xcfff,	// (0x00076962) wml_tabs_5_pane

0xd019,	// (0x0007697c) wml_tabs_pane_g2_ParamLimits

0xd019,	// (0x0007697c) wml_tabs_pane_g2

0xd02e,	// (0x00076991) wml_tabs_pane_g3_ParamLimits

0xd02e,	// (0x00076991) wml_tabs_pane_g3

0xd043,	// (0x000769a6) wml_tabs_2_active_pane_ParamLimits

0xd043,	// (0x000769a6) wml_tabs_2_active_pane

0xd043,	// (0x000769a6) wml_tabs_2_passive_pane_ParamLimits

0xd043,	// (0x000769a6) wml_tabs_2_passive_pane

0x3658,	// (0x0006cfbb) wml_tabs_3_active_pane_cp_ParamLimits

0x3658,	// (0x0006cfbb) wml_tabs_3_active_pane_cp

0x366d,	// (0x0006cfd0) wml_tabs_3_passive_pane_ParamLimits

0x366d,	// (0x0006cfd0) wml_tabs_3_passive_pane

0x3680,	// (0x0006cfe3) wml_tabs_3_passive_pane_cp_ParamLimits

0x3680,	// (0x0006cfe3) wml_tabs_3_passive_pane_cp

0x3697,	// (0x0006cffa) tabs_4_active_pane

0x369f,	// (0x0006d002) tabs_4_passive_pane

0x36a9,	// (0x0006d00c) tabs_4_passive_pane_cp

0x36b1,	// (0x0006d014) tabs_4_passive_pane_cp2

0x2e39,	// (0x0006c79c) aid_height_text

0xbc15,	// (0x00075578) mup_volume_cont_pane_ParamLimits

0xbc15,	// (0x00075578) mup_volume_cont_pane

0xa2cd,	// (0x00073c30) aid_size_cell_pinb

0xa2cd,	// (0x00073c30) aid_size_list_pinb

0xbc15,	// (0x00075578) mup2_volume_cont_pane_ParamLimits

0xbc15,	// (0x00075578) mup2_volume_cont_pane

0x92f0,	// (0x00072c53) mup2_volume_cont_pane_g1_ParamLimits

0x92f0,	// (0x00072c53) mup2_volume_cont_pane_g1

0x0678,	// (0x00069fdb) aid_size_cell_touch_ParamLimits

0x0678,	// (0x00069fdb) aid_size_cell_touch

0x083e,	// (0x0006a1a1) touch_pane_ParamLimits

0x083e,	// (0x0006a1a1) touch_pane

0x9093,	// (0x000729f6) main_rss2_pane

0xd05a,	// (0x000769bd) listscroll_rss2_pane

0xd063,	// (0x000769c6) rss2_navigation_pane

0xd06b,	// (0x000769ce) list_rss2_pane

0xb8f4,	// (0x00075257) scroll_pane_cp22

0xd073,	// (0x000769d6) rss2_navigation_pane_g1

0xd07c,	// (0x000769df) rss2_navigation_pane_g2

0xd084,	// (0x000769e7) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x00078f4a) rss2_navigation_pane_g

0xd08c,	// (0x000769ef) rss2_navigation_pane_t1

0x36bb,	// (0x0006d01e) rss2_list_single_pane_ParamLimits

0x36bb,	// (0x0006d01e) rss2_list_single_pane

0xd09a,	// (0x000769fd) rss2_list_single_pane_t2

0xd0a8,	// (0x00076a0b) rss2_list_single_pane_t3_ParamLimits

0xd0a8,	// (0x00076a0b) rss2_list_single_pane_t3

0xd0c5,	// (0x00076a28) rss2_list_single_pane_t4

0x211e,	// (0x0006ba81) smil_status_pane_g1

0x9085,	// (0x000729e8) main_image2_pane_ParamLimits

0x9085,	// (0x000729e8) main_image2_pane

0x929e,	// (0x00072c01) main_camera2_pane_g9_ParamLimits

0x929e,	// (0x00072c01) main_camera2_pane_g9

0x35ca,	// (0x0006cf2d) main_camera2_pane_t5_ParamLimits

0x35ca,	// (0x0006cf2d) main_camera2_pane_t5

0x92ac,	// (0x00072c0f) main_camera2_pane_t6_ParamLimits

0x92ac,	// (0x00072c0f) main_camera2_pane_t6

0x36d1,	// (0x0006d034) main_image2_pane_g1_ParamLimits

0x36d1,	// (0x0006d034) main_image2_pane_g1

0x2b0c,	// (0x0006c46f) smil2_video_pane_ParamLimits

0x2b0c,	// (0x0006c46f) smil2_video_pane

0x903c,	// (0x0007299f) aid_zoom_text_primary_cp

0x907b,	// (0x000729de) popup_preview_fixed_window

0xb1d9,	// (0x00074b3c) im_reading_pane_g1

0x35bc,	// (0x0006cf1f) cams2_bc_adjust_pane_cp_ParamLimits

0x35bc,	// (0x0006cf1f) cams2_bc_adjust_pane_cp

0x92d4,	// (0x00072c37) cams2_bc_adjust_pane_ParamLimits

0x92d4,	// (0x00072c37) cams2_bc_adjust_pane

0xde4c,	// (0x000777af) cams2_bc_adjust_pane_g1

0x9093,	// (0x000729f6) cams2_slider_pane

0xde4c,	// (0x000777af) cams2_slider_pane_g1

0xde4c,	// (0x000777af) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x00078f51) cams2_slider_pane_g

0x0907,	// (0x0006a26a) calc_display_pane_ParamLimits

0x092c,	// (0x0006a28f) calc_paper_pane_ParamLimits

0x094f,	// (0x0006a2b2) grid_calc_pane_ParamLimits

0x91b5,	// (0x00072b18) popup_clock_digital_window_t1_ParamLimits

0xbdd2,	// (0x00075735) main_image_pane_t1

0x08e9,	// (0x0006a24c) aid_size_cell_calc_ParamLimits

0x08e9,	// (0x0006a24c) aid_size_cell_calc

0x314f,	// (0x0006cab2) popup_blid_sat_info2_window_ParamLimits

0x314f,	// (0x0006cab2) popup_blid_sat_info2_window

0xd0d3,	// (0x00076a36) aid_size_cell_blid

0xce2b,	// (0x0007678e) bg_popup_window_pane_cp07

0xd0f0,	// (0x00076a53) grid_popup_blid_pane

0xd0fa,	// (0x00076a5d) heading_pane_cp05_ParamLimits

0xd0fa,	// (0x00076a5d) heading_pane_cp05

0xd1c4,	// (0x00076b27) cell_popup_blid_pane_ParamLimits

0xd1c4,	// (0x00076b27) cell_popup_blid_pane

0xd1e8,	// (0x00076b4b) cell_popup_blid_pane_g1

0xd1f0,	// (0x00076b53) cell_popup_blid_pane_t1

0xbc15,	// (0x00075578) mup2_indicator_pane_ParamLimits

0xbc15,	// (0x00075578) mup2_indicator_pane

0xa2cd,	// (0x00073c30) mup2_visualizer_osc_pane

0xcf9c,	// (0x000768ff) mup2_visualizer_spec_pane_ParamLimits

0xcf9c,	// (0x000768ff) mup2_visualizer_spec_pane

0xa2cd,	// (0x00073c30) mup2_spec_half_pane

0xa2cd,	// (0x00073c30) mup2_spec_half_pane_cp

0xd1fe,	// (0x00076b61) mup2_spec_bar_pane_ParamLimits

0xd1fe,	// (0x00076b61) mup2_spec_bar_pane

0xb128,	// (0x00074a8b) mup2_spec_bar_pane_g1

0xd21d,	// (0x00076b80) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x00078f77) mup2_spec_bar_pane_g

0xa2cd,	// (0x00073c30) mup2_osc_middle_pane

0xb128,	// (0x00074a8b) mup2_visualizer_osc_pane_g1

0xa2f7,	// (0x00073c5a) popup_number_entry_window_t1_ParamLimits

0xa30a,	// (0x00073c6d) popup_number_entry_window_t2_ParamLimits

0xa31c,	// (0x00073c7f) popup_number_entry_window_t3_ParamLimits

0x0890,	// (0x0006a1f3) popup_number_entry_window_t5_ParamLimits

0x0890,	// (0x0006a1f3) popup_number_entry_window_t5

0xf045,	// (0x000789a8) popup_number_entry_window_t_ParamLimits

0xa833,	// (0x00074196) text_title_cp2_ParamLimits

0x91f4,	// (0x00072b57) aid_hotspot_pointer_text2_pane

0x920e,	// (0x00072b71) main_viewer_pane_g9_ParamLimits

0x920e,	// (0x00072b71) main_viewer_pane_g9

0xb41b,	// (0x00074d7e) cale_month_pane_t1_ParamLimits

0xb458,	// (0x00074dbb) bg_cale_pane_ParamLimits

0xb470,	// (0x00074dd3) list_cale_pane_ParamLimits

0xb481,	// (0x00074de4) listscroll_cale_day_pane_t1

0xb493,	// (0x00074df6) scroll_pane_cp09_ParamLimits

0x2517,	// (0x0006be7a) main_mup_eq_pane_t1_ParamLimits

0x2517,	// (0x0006be7a) main_mup_eq_pane_t1

0x2531,	// (0x0006be94) main_mup_eq_pane_t2_ParamLimits

0x2531,	// (0x0006be94) main_mup_eq_pane_t2

0x254b,	// (0x0006beae) main_mup_eq_pane_t3_ParamLimits

0x254b,	// (0x0006beae) main_mup_eq_pane_t3

0x2567,	// (0x0006beca) main_mup_eq_pane_t4_ParamLimits

0x2567,	// (0x0006beca) main_mup_eq_pane_t4

0x2583,	// (0x0006bee6) main_mup_eq_pane_t5_ParamLimits

0x2583,	// (0x0006bee6) main_mup_eq_pane_t5

0x259f,	// (0x0006bf02) main_mup_eq_pane_t6_ParamLimits

0x259f,	// (0x0006bf02) main_mup_eq_pane_t6

0x25b3,	// (0x0006bf16) main_mup_eq_pane_t7_ParamLimits

0x25b3,	// (0x0006bf16) main_mup_eq_pane_t7

0x25c7,	// (0x0006bf2a) main_mup_eq_pane_t8_ParamLimits

0x25c7,	// (0x0006bf2a) main_mup_eq_pane_t8

0x25db,	// (0x0006bf3e) main_mup_eq_pane_t9_ParamLimits

0x25db,	// (0x0006bf3e) main_mup_eq_pane_t9

0x25f5,	// (0x0006bf58) main_mup_eq_pane_t10_ParamLimits

0x25f5,	// (0x0006bf58) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x00078d07) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x00078d07) main_mup_eq_pane_t

0x26a4,	// (0x0006c007) mup_equalizer_pane_cp5_ParamLimits

0x26b8,	// (0x0006c01b) mup_equalizer_pane_cp6_ParamLimits

0x26cc,	// (0x0006c02f) mup_equalizer_pane_cp7_ParamLimits

0x9093,	// (0x000729f6) main_gallery_pane

0xcf3a,	// (0x0007689d) smil2_volume_pane

0xcf42,	// (0x000768a5) smil_status_volume_pane_g1_ParamLimits

0xcf55,	// (0x000768b8) smil_status_volume_pane_g2_ParamLimits

0x926e,	// (0x00072bd1) smil_status_volume_pane_g3_ParamLimits

0xf56d,	// (0x00078ed0) smil_status_volume_pane_g_ParamLimits

0xce2b,	// (0x0007678e) bg_popup_window_pane_cp07_ParamLimits

0xd0db,	// (0x00076a3e) blid_firmament_pane

0xa32e,	// (0x00073c91) aid_size_cell_gallery_ParamLimits

0xa32e,	// (0x00073c91) aid_size_cell_gallery

0xa32e,	// (0x00073c91) grid_gallery_pane_ParamLimits

0xa32e,	// (0x00073c91) grid_gallery_pane

0xce2b,	// (0x0007678e) cell_gallery_pane_ParamLimits

0xce2b,	// (0x0007678e) cell_gallery_pane

0xa32e,	// (0x00073c91) bg_cell_gallery_focus_pane_ParamLimits

0xa32e,	// (0x00073c91) bg_cell_gallery_focus_pane

0xaec5,	// (0x00074828) cell_gallery_pane_g1_ParamLimits

0xaec5,	// (0x00074828) cell_gallery_pane_g1

0xaec5,	// (0x00074828) cell_gallery_pane_g2_ParamLimits

0xaec5,	// (0x00074828) cell_gallery_pane_g2

0xaec5,	// (0x00074828) cell_gallery_pane_g3_ParamLimits

0xaec5,	// (0x00074828) cell_gallery_pane_g3

0xaed3,	// (0x00074836) cell_gallery_pane_g4_ParamLimits

0xaed3,	// (0x00074836) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x00078f7c) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x00078f7c) cell_gallery_pane_g

0xd227,	// (0x00076b8a) bg_cell_gallery_focus_pane_g1

0xd22f,	// (0x00076b92) bg_cell_gallery_focus_pane_g2

0xd237,	// (0x00076b9a) bg_cell_gallery_focus_pane_g3

0xd23f,	// (0x00076ba2) bg_cell_gallery_focus_pane_g4

0xd247,	// (0x00076baa) bg_cell_gallery_focus_pane_g5

0xd24f,	// (0x00076bb2) bg_cell_gallery_focus_pane_g6

0xd257,	// (0x00076bba) bg_cell_gallery_focus_pane_g7

0xd25f,	// (0x00076bc2) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x00078f85) bg_cell_gallery_focus_pane_g

0xd267,	// (0x00076bca) aid_firma_cardinal

0xd27b,	// (0x00076bde) blid_firmament_pane_t1

0xd292,	// (0x00076bf5) blid_firmament_pane_t2

0xd2a9,	// (0x00076c0c) blid_firmament_pane_t3

0xd2c0,	// (0x00076c23) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x00078f96) blid_firmament_pane_t

0xd2d7,	// (0x00076c3a) blid_sat_info_pane

0xb128,	// (0x00074a8b) blid_sat_info_pane_g1

0xb128,	// (0x00074a8b) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x00078cfb) blid_sat_info_pane_g

0xd2e7,	// (0x00076c4a) blid_sat_info_pane_t1

0xd2f5,	// (0x00076c58) smil2_volume_content_pane

0xd2fe,	// (0x00076c61) smil2_volume_pane_g1

0xafae,	// (0x00074911) smil2_volume_content_pane_g1

0xd306,	// (0x00076c69) smil2_volume_content_pane_g2

0xd30f,	// (0x00076c72) smil2_volume_content_pane_g3

0xd318,	// (0x00076c7b) smil2_volume_content_pane_g4

0xd321,	// (0x00076c84) smil2_volume_content_pane_g5

0xd32a,	// (0x00076c8d) smil2_volume_content_pane_g6

0xd333,	// (0x00076c96) smil2_volume_content_pane_g7

0xd33c,	// (0x00076c9f) smil2_volume_content_pane_g8

0xd345,	// (0x00076ca8) smil2_volume_content_pane_g9

0xd34e,	// (0x00076cb1) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x00078f9f) smil2_volume_content_pane_g

0x0edf,	// (0x0006a842) cale_week_day_heading_pane_t1_ParamLimits

0x0f09,	// (0x0006a86c) cale_week_day_heading_pane_t2_ParamLimits

0x0f38,	// (0x0006a89b) cale_week_day_heading_pane_t3_ParamLimits

0x0f67,	// (0x0006a8ca) cale_week_day_heading_pane_t4_ParamLimits

0x0f96,	// (0x0006a8f9) cale_week_day_heading_pane_t5_ParamLimits

0x0fcd,	// (0x0006a930) cale_week_day_heading_pane_t6_ParamLimits

0x1004,	// (0x0006a967) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x00078aaf) cale_week_day_heading_pane_t_ParamLimits

0xb0a0,	// (0x00074a03) bg_cale_side_pane_ParamLimits

0x102e,	// (0x0006a991) cale_week_time_pane_t1_ParamLimits

0x1048,	// (0x0006a9ab) cale_week_time_pane_t2_ParamLimits

0x1062,	// (0x0006a9c5) cale_week_time_pane_t3_ParamLimits

0x107c,	// (0x0006a9df) cale_week_time_pane_t4_ParamLimits

0x1096,	// (0x0006a9f9) cale_week_time_pane_t5_ParamLimits

0x10b0,	// (0x0006aa13) cale_week_time_pane_t6_ParamLimits

0x10ca,	// (0x0006aa2d) cale_week_time_pane_t7_ParamLimits

0x10e4,	// (0x0006aa47) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x00078abe) cale_week_time_pane_t_ParamLimits

0x1104,	// (0x0006aa67) cell_cale_week_pane_g2_ParamLimits

0xb0a0,	// (0x00074a03) bg_cale_side_pane_cp01_ParamLimits

0x1f23,	// (0x0006b886) cale_month_week_pane_t1_ParamLimits

0x1f3c,	// (0x0006b89f) cale_month_week_pane_t2_ParamLimits

0x1f55,	// (0x0006b8b8) cale_month_week_pane_t3_ParamLimits

0x1f6e,	// (0x0006b8d1) cale_month_week_pane_t4_ParamLimits

0x1f87,	// (0x0006b8ea) cale_month_week_pane_t5_ParamLimits

0x1fa0,	// (0x0006b903) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x00078b8c) cale_month_week_pane_t_ParamLimits

0x9135,	// (0x00072a98) cell_cale_month_pane_g1_ParamLimits

0x9093,	// (0x000729f6) main_cale_event_viewer_pane

0xa2cd,	// (0x00073c30) listscroll_cale_event_viewer_pane

0xd357,	// (0x00076cba) list_cale_ev_pane

0xd35f,	// (0x00076cc2) scroll_pane_cp023

0xd36b,	// (0x00076cce) field_cale_ev_pane_ParamLimits

0xd36b,	// (0x00076cce) field_cale_ev_pane

0xd389,	// (0x00076cec) field_cale_ev_content_pane_ParamLimits

0xd389,	// (0x00076cec) field_cale_ev_content_pane

0xd395,	// (0x00076cf8) field_cale_ev_pane_g1_ParamLimits

0xd395,	// (0x00076cf8) field_cale_ev_pane_g1

0xd3a1,	// (0x00076d04) field_cale_ev_pane_g2_ParamLimits

0xd3a1,	// (0x00076d04) field_cale_ev_pane_g2

0xd3b9,	// (0x00076d1c) field_cale_ev_pane_g3_ParamLimits

0xd3b9,	// (0x00076d1c) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x00078fb4) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x00078fb4) field_cale_ev_pane_g

0xd3d1,	// (0x00076d34) field_cale_ev_pane_t1_ParamLimits

0xd3d1,	// (0x00076d34) field_cale_ev_pane_t1

0xd3e8,	// (0x00076d4b) field_cale_ev_content_pane_t1_ParamLimits

0xd3e8,	// (0x00076d4b) field_cale_ev_content_pane_t1

0xbcb8,	// (0x0007561b) bg_button_pane_cp01

0x0c0c,	// (0x0006a56f) listscroll_cale_week_pane_ParamLimits

0xb04b,	// (0x000749ae) popup_toolbar_window_cp01

0xb071,	// (0x000749d4) listscroll_cale_week_pane_t1_ParamLimits

0x0c0c,	// (0x0006a56f) listscroll_cale_day_pane_ParamLimits

0xb04b,	// (0x000749ae) popup_toolbar_window_cp02

0xb481,	// (0x00074de4) listscroll_cale_day_pane_t1_ParamLimits

0x3115,	// (0x0006ca78) main_cale_month_pane_ParamLimits

0x9259,	// (0x00072bbc) popup_toolbar_window_cp03_ParamLimits

0x9259,	// (0x00072bbc) popup_toolbar_window_cp03

0x29d4,	// (0x0006c337) main_image_pane_g2_ParamLimits

0x29d4,	// (0x0006c337) main_image_pane_g2

0x29e5,	// (0x0006c348) main_image_pane_g3_ParamLimits

0x29e5,	// (0x0006c348) main_image_pane_g3

0x0002,

0xf436,	// (0x00078d99) main_image_pane_g_ParamLimits

0xf436,	// (0x00078d99) main_image_pane_g

0xbdd2,	// (0x00075735) main_image_pane_t1_ParamLimits

0x29f6,	// (0x0006c359) main_image_pane_t2_ParamLimits

0x29f6,	// (0x0006c359) main_image_pane_t2

0x2a08,	// (0x0006c36b) main_image_pane_t3_ParamLimits

0x2a08,	// (0x0006c36b) main_image_pane_t3

0x2a30,	// (0x0006c393) main_image_pane_t4_ParamLimits

0x2a30,	// (0x0006c393) main_image_pane_t4

0x0003,

0xf43d,	// (0x00078da0) main_image_pane_t_ParamLimits

0xf43d,	// (0x00078da0) main_image_pane_t

0x2a50,	// (0x0006c3b3) popup_image_details_window_cp01

0x2a5a,	// (0x0006c3bd) popup_toobar_trans_pane_cp01_ParamLimits

0x2a5a,	// (0x0006c3bd) popup_toobar_trans_pane_cp01

0x3220,	// (0x0006cb83) popup_image_details_window_ParamLimits

0x3220,	// (0x0006cb83) popup_image_details_window

0x922c,	// (0x00072b8f) popup_image_focus_window

0x9290,	// (0x00072bf3) camera2_autofocus_pane_ParamLimits

0x9290,	// (0x00072bf3) camera2_autofocus_pane

0xa2cd,	// (0x00073c30) bg_popup_sub_pane_cp06

0xd406,	// (0x00076d69) popup_image_focus_window_g1

0xd40e,	// (0x00076d71) popup_image_focus_window_g2

0xd416,	// (0x00076d79) popup_image_focus_window_g3

0xd41e,	// (0x00076d81) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x00078fbb) popup_image_focus_window_g

0xd426,	// (0x00076d89) popup_image_focus_window_t1

0xd434,	// (0x00076d97) popup_image_focus_window_t2

0xd444,	// (0x00076da7) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x00078fc4) popup_image_focus_window_t

0xaec5,	// (0x00074828) camera2_autofocus_pane_g1

0xa32e,	// (0x00073c91) bg_tb_trans_pane_cp01

0xd452,	// (0x00076db5) popup_image_details_window_g1

0xd465,	// (0x00076dc8) popup_image_details_window_g2

0x0002,

0xf673,	// (0x00078fd6) popup_image_details_window_g

0xd48e,	// (0x00076df1) popup_image_details_window_t1

0xd4a0,	// (0x00076e03) popup_image_details_window_t2

0xd4b9,	// (0x00076e1c) popup_image_details_window_t3

0xd4cd,	// (0x00076e30) popup_image_details_window_t4

0xd4e8,	// (0x00076e4b) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x00078fdd) popup_image_details_window_t

0xaf23,	// (0x00074886) bg_calc_paper_pane_ParamLimits

0x9093,	// (0x000729f6) grid_highlight_pane_cp013

0x90a5,	// (0x00072a08) list_calc_pane_ParamLimits

0x90b7,	// (0x00072a1a) scroll_pane_cp024

0xaf37,	// (0x0007489a) bg_calc_display_pane_ParamLimits

0x0a4d,	// (0x0006a3b0) calc_display_pane_t1_ParamLimits

0x0a5f,	// (0x0006a3c2) calc_display_pane_t2_ParamLimits

0x90bf,	// (0x00072a22) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x00078a2f) calc_display_pane_t_ParamLimits

0x0b19,	// (0x0006a47c) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x00078a4c) cell_calc_pane_g

0x0b22,	// (0x0006a485) cell_calc_pane_t1

0xaf8c,	// (0x000748ef) grid_highlight_pane_cp02_ParamLimits

0xafa2,	// (0x00074905) toolbar_button_pane_cp01_ParamLimits

0xafa2,	// (0x00074905) toolbar_button_pane_cp01

0xbe17,	// (0x0007577a) temp_image_control_pane_ParamLimits

0xbe17,	// (0x0007577a) temp_image_control_pane

0x9085,	// (0x000729e8) main_mp3_pane

0xd502,	// (0x00076e65) temp_image_control_pane_g1_ParamLimits

0xd502,	// (0x00076e65) temp_image_control_pane_g1

0xd510,	// (0x00076e73) temp_image_control_pane_g2_ParamLimits

0xd510,	// (0x00076e73) temp_image_control_pane_g2

0xd522,	// (0x00076e85) temp_image_control_pane_g3_ParamLimits

0xd522,	// (0x00076e85) temp_image_control_pane_g3

0x36e7,	// (0x0006d04a) temp_image_control_pane_g4_ParamLimits

0x36e7,	// (0x0006d04a) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x00078fe8) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x00078fe8) temp_image_control_pane_g

0xd502,	// (0x00076e65) main_mp3_pane_g1

0x36fa,	// (0x0006d05d) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x00078ff1) main_mp3_pane_g

0xd557,	// (0x00076eba) main_mp3_pane_t1

0xaed3,	// (0x00074836) main_camera_pane_g8_ParamLimits

0xaed3,	// (0x00074836) main_camera_pane_g8

0x12d2,	// (0x0006ac35) main_video_pane_g7_ParamLimits

0x12d2,	// (0x0006ac35) main_video_pane_g7

0x92c0,	// (0x00072c23) main_camera2_pane_t7_ParamLimits

0x92c0,	// (0x00072c23) main_camera2_pane_t7

0xb230,	// (0x00074b93) scroll_pane_cp025_ParamLimits

0xb230,	// (0x00074b93) scroll_pane_cp025

0xb244,	// (0x00074ba7) scroll_pane_cp026_ParamLimits

0xb244,	// (0x00074ba7) scroll_pane_cp026

0xb253,	// (0x00074bb6) wml_content_pane_ParamLimits

0x9093,	// (0x000729f6) main_touch_calib_pane

0x37ce,	// (0x0006d131) main_touch_calib_pane_g1

0x37e0,	// (0x0006d143) main_touch_calib_pane_g2

0x37f2,	// (0x0006d155) main_touch_calib_pane_g3

0x3804,	// (0x0006d167) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x0007900f) main_touch_calib_pane_g

0x3816,	// (0x0006d179) main_touch_calib_pane_t1

0x3830,	// (0x0006d193) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x00079018) main_touch_calib_pane_t

0xb9c3,	// (0x00075326) mup_progress_pane_cp02

0xb9f8,	// (0x0007535b) navi_pane_g1

0xbab3,	// (0x00075416) navi_pane_mp_t3

0x9085,	// (0x000729e8) main_mp3_pane_ParamLimits

0x33ab,	// (0x0006cd0e) navi_pane_ParamLimits

0xd502,	// (0x00076e65) main_mp3_pane_g1_ParamLimits

0x36fa,	// (0x0006d05d) main_mp3_pane_g2_ParamLimits

0x3708,	// (0x0006d06b) main_mp3_pane_g3_ParamLimits

0x3708,	// (0x0006d06b) main_mp3_pane_g3

0x3716,	// (0x0006d079) main_mp3_pane_g4_ParamLimits

0x3716,	// (0x0006d079) main_mp3_pane_g4

0xaec5,	// (0x00074828) main_mp3_pane_g5_ParamLimits

0xaec5,	// (0x00074828) main_mp3_pane_g5

0xd532,	// (0x00076e95) main_mp3_pane_g6_ParamLimits

0xd532,	// (0x00076e95) main_mp3_pane_g6

0xd53f,	// (0x00076ea2) main_mp3_pane_g7_ParamLimits

0xd53f,	// (0x00076ea2) main_mp3_pane_g7

0xd54b,	// (0x00076eae) main_mp3_pane_g8_ParamLimits

0xd54b,	// (0x00076eae) main_mp3_pane_g8

0xf68e,	// (0x00078ff1) main_mp3_pane_g_ParamLimits

0x3722,	// (0x0006d085) main_mp3_pane_t2

0x3730,	// (0x0006d093) main_mp3_pane_t3

0xd565,	// (0x00076ec8) main_mp3_pane_t4

0xd573,	// (0x00076ed6) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x00079002) main_mp3_pane_t

0xd581,	// (0x00076ee4) mup_progress_pane_cp01

0x903c,	// (0x0007299f) aid_zoom_text_secondary2

0xd357,	// (0x00076cba) list_cale_ev2_pane

0xd35f,	// (0x00076cc2) scroll_pane_cp023_ParamLimits

0x3886,	// (0x0006d1e9) field_cale_ev2_pane_ParamLimits

0x3886,	// (0x0006d1e9) field_cale_ev2_pane

0x9def,	// (0x00073752) field_cale_ev2_pane_g1_ParamLimits

0x9def,	// (0x00073752) field_cale_ev2_pane_g1

0x9dfb,	// (0x0007375e) field_cale_ev2_pane_g2_ParamLimits

0x9dfb,	// (0x0007375e) field_cale_ev2_pane_g2

0x9e13,	// (0x00073776) field_cale_ev2_pane_g3_ParamLimits

0x9e13,	// (0x00073776) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x00079023) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x00079023) field_cale_ev2_pane_g

0x9e37,	// (0x0007379a) field_cale_ev2_pane_t1_ParamLimits

0x9e37,	// (0x0007379a) field_cale_ev2_pane_t1

0x9e4e,	// (0x000737b1) field_cale_ev2_pane_t2_ParamLimits

0x9e4e,	// (0x000737b1) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x0007902c) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x0007902c) field_cale_ev2_pane_t

0x2888,	// (0x0006c1eb) main_postcard_pane_g5_ParamLimits

0x2888,	// (0x0006c1eb) main_postcard_pane_g5

0x289e,	// (0x0006c201) main_postcard_pane_g6_ParamLimits

0x289e,	// (0x0006c201) main_postcard_pane_g6

0xa32e,	// (0x00073c91) camera2_autofocus_pane_cp_ParamLimits

0xa32e,	// (0x00073c91) camera2_autofocus_pane_cp

0x9085,	// (0x000729e8) main_mup3_pane

0x38eb,	// (0x0006d24e) main_mup3_pane_g1_ParamLimits

0x38eb,	// (0x0006d24e) main_mup3_pane_g1

0x390d,	// (0x0006d270) main_mup3_pane_g2_ParamLimits

0x390d,	// (0x0006d270) main_mup3_pane_g2

0x398d,	// (0x0006d2f0) main_mup3_pane_g3_ParamLimits

0x398d,	// (0x0006d2f0) main_mup3_pane_g3

0x39d3,	// (0x0006d336) main_mup3_pane_g4_ParamLimits

0x39d3,	// (0x0006d336) main_mup3_pane_g4

0x3a19,	// (0x0006d37c) main_mup3_pane_g5_ParamLimits

0x3a19,	// (0x0006d37c) main_mup3_pane_g5

0x3a5f,	// (0x0006d3c2) main_mup3_pane_g6_ParamLimits

0x3a5f,	// (0x0006d3c2) main_mup3_pane_g6

0xaed3,	// (0x00074836) main_mup3_pane_g7_ParamLimits

0xaed3,	// (0x00074836) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x0007903c) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x0007903c) main_mup3_pane_g

0x3add,	// (0x0006d440) main_mup3_pane_t1_ParamLimits

0x3add,	// (0x0006d440) main_mup3_pane_t1

0x3b51,	// (0x0006d4b4) main_mup3_pane_t2_ParamLimits

0x3b51,	// (0x0006d4b4) main_mup3_pane_t2

0x3c25,	// (0x0006d588) main_mup3_pane_t4_ParamLimits

0x3c25,	// (0x0006d588) main_mup3_pane_t4

0x3c7b,	// (0x0006d5de) main_mup3_pane_t5_ParamLimits

0x3c7b,	// (0x0006d5de) main_mup3_pane_t5

0x3d37,	// (0x0006d69a) main_mup3_pane_t6_ParamLimits

0x3d37,	// (0x0006d69a) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x0007904d) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x0007904d) main_mup3_pane_t

0x3def,	// (0x0006d752) mup3_progress_pane_ParamLimits

0x3def,	// (0x0006d752) mup3_progress_pane

0x3e7b,	// (0x0006d7de) popup_mup3_control_window_ParamLimits

0x3e7b,	// (0x0006d7de) popup_mup3_control_window

0xd589,	// (0x00076eec) popup_mup3_text_window

0x3ead,	// (0x0006d810) mup3_progress_pane_t1

0x3ecc,	// (0x0006d82f) mup3_progress_pane_t2

0xd591,	// (0x00076ef4) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x0007905a) mup3_progress_pane_t

0xd5ae,	// (0x00076f11) mup_progress_pane_cp03

0xa2cd,	// (0x00073c30) bg_tb_trans_pane_cp04

0x3eeb,	// (0x0006d84e) mup3_volume_pane

0x3ef3,	// (0x0006d856) popup_mup3_control_window_g1

0x3efc,	// (0x0006d85f) mup3_volume_pane_g1

0x3f05,	// (0x0006d868) mup3_volume_pane_g2

0x3f0e,	// (0x0006d871) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x00079061) mup3_volume_pane_g

0xa2cd,	// (0x00073c30) bg_tb_trans_pane_cp03

0xd5be,	// (0x00076f21) popup_mup3_text_window_g1

0xd5c6,	// (0x00076f29) popup_mup3_text_window_t1

0xaf7f,	// (0x000748e2) list_calc_item_pane_g1_ParamLimits

0xd051,	// (0x000769b4) mup_volume_pane_cp_g1

0x384a,	// (0x0006d1ad) main_touch_calib_pane_t3

0x385e,	// (0x0006d1c1) main_touch_calib_pane_t4

0x3872,	// (0x0006d1d5) main_touch_calib_pane_t5

0x9018,	// (0x0007297b) aid_cell_size_toolbar2

0x9020,	// (0x00072983) aid_popup3_width_pane

0x902c,	// (0x0007298f) aid_zoom_text_msg_primary

0x11ad,	// (0x0006ab10) vorec_t7

0xaf43,	// (0x000748a6) bg_calc_paper_pane_g1_ParamLimits

0xaf4f,	// (0x000748b2) bg_calc_paper_pane_g2_ParamLimits

0xaf5b,	// (0x000748be) bg_calc_paper_pane_g3_ParamLimits

0xaf67,	// (0x000748ca) bg_calc_paper_pane_g4_ParamLimits

0xaf73,	// (0x000748d6) bg_calc_paper_pane_g5_ParamLimits

0x0aa6,	// (0x0006a409) bg_calc_paper_pane_g6_ParamLimits

0x0ab5,	// (0x0006a418) bg_calc_paper_pane_g7_ParamLimits

0x0ac4,	// (0x0006a427) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x00078a36) bg_calc_paper_pane_g_ParamLimits

0x0ad7,	// (0x0006a43a) calc_bg_paper_pane_g9_ParamLimits

0xa32e,	// (0x00073c91) image_qvga_pane_ParamLimits

0xa32e,	// (0x00073c91) image_qvga_pane

0xae4a,	// (0x000747ad) bg_popup_sub_pane_cp04_ParamLimits

0xbd4e,	// (0x000756b1) popup_mup_playback_window_g1_ParamLimits

0xbd5a,	// (0x000756bd) popup_mup_playback_window_t1_ParamLimits

0xbd6f,	// (0x000756d2) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x00078d94) popup_mup_playback_window_t_ParamLimits

0xaed3,	// (0x00074836) main_mup2_pane_g3_ParamLimits

0xaed3,	// (0x00074836) main_mup2_pane_g3

0x14d9,	// (0x0006ae3c) popup_toolbar_window_cp04

0xc164,	// (0x00075ac7) popup_call2_audio_second_window_g3_ParamLimits

0xc164,	// (0x00075ac7) popup_call2_audio_second_window_g3

0xc57c,	// (0x00075edf) popup_call2_audio_first_window_g4_ParamLimits

0xc57c,	// (0x00075edf) popup_call2_audio_first_window_g4

0xcba3,	// (0x00076506) popup_call2_audio_in_window_g4_ParamLimits

0xcba3,	// (0x00076506) popup_call2_audio_in_window_g4

0x29b6,	// (0x0006c319) aid_area_sk_bg_cut_ParamLimits

0x29b6,	// (0x0006c319) aid_area_sk_bg_cut

0xbd84,	// (0x000756e7) aid_area_sk_bg_cut_2_ParamLimits

0xbd84,	// (0x000756e7) aid_area_sk_bg_cut_2

0xa2cd,	// (0x00073c30) aid_placing_details_win

0xa2cd,	// (0x00073c30) aid_placing_details_win_2

0xaec5,	// (0x00074828) camera2_autofocus_pane_g1_ParamLimits

0x07d7,	// (0x0006a13a) popup_fixed_preview_cale_window_ParamLimits

0x07d7,	// (0x0006a13a) popup_fixed_preview_cale_window

0xbb31,	// (0x00075494) navi_slider_pane_g3

0xbb3a,	// (0x0007549d) navi_slider_pane_g4

0xbb43,	// (0x000754a6) navi_slider_pane_g5

0xbb31,	// (0x00075494) navi_slider_pane_g6

0x91db,	// (0x00072b3e) navi_slider_pane_g7

0xbc85,	// (0x000755e8) mup_scale_pane_g3

0xbc8e,	// (0x000755f1) mup_scale_pane_g4

0xbc97,	// (0x000755fa) mup_scale_pane_g5

0x26e0,	// (0x0006c043) mup_scale_pane_g6

0x26e9,	// (0x0006c04c) mup_scale_pane_g7

0xde4c,	// (0x000777af) cams2_slider_pane_g3

0xde4c,	// (0x000777af) cams2_slider_pane_g4

0xde4c,	// (0x000777af) cams2_slider_pane_g5

0xde4c,	// (0x000777af) cams2_slider_pane_g6

0xde4c,	// (0x000777af) cams2_slider_pane_g7

0xb128,	// (0x00074a8b) camera2_autofocus_pane_cp_g1

0xcec1,	// (0x00076824) bg_popup_preview_window_pane_cp02_ParamLimits

0xcec1,	// (0x00076824) bg_popup_preview_window_pane_cp02

0xd5d4,	// (0x00076f37) list_fp_cale_pane_ParamLimits

0xd5d4,	// (0x00076f37) list_fp_cale_pane

0xd5e0,	// (0x00076f43) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5e0,	// (0x00076f43) popup_fixed_preview_cale_window_t1

0x3f17,	// (0x0006d87a) popup_fixed_preview_cale_window_t2_ParamLimits

0x3f17,	// (0x0006d87a) popup_fixed_preview_cale_window_t2

0x3f2c,	// (0x0006d88f) popup_fixed_preview_cale_window_t3_ParamLimits

0x3f2c,	// (0x0006d88f) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x00079068) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x00079068) popup_fixed_preview_cale_window_t

0x3f41,	// (0x0006d8a4) list_single_fp_cale_pane_ParamLimits

0x3f41,	// (0x0006d8a4) list_single_fp_cale_pane

0xd5fe,	// (0x00076f61) list_single_fp_cale_pane_g1_ParamLimits

0xd5fe,	// (0x00076f61) list_single_fp_cale_pane_g1

0xd60a,	// (0x00076f6d) list_single_fp_cale_pane_g2_ParamLimits

0xd60a,	// (0x00076f6d) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x0007906f) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x0007906f) list_single_fp_cale_pane_g

0xd623,	// (0x00076f86) list_single_fp_cale_pane_t1_ParamLimits

0xd623,	// (0x00076f86) list_single_fp_cale_pane_t1

0xd635,	// (0x00076f98) list_single_fp_cale_pane_t2_ParamLimits

0xd635,	// (0x00076f98) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x00079076) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x00079076) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9093,	// (0x000729f6) main_dialer_pane

0xa2cd,	// (0x00073c30) aid_cell_size_keypad

0xa2cd,	// (0x00073c30) dialer_ne_pane

0xa2cd,	// (0x00073c30) grid_dialer_command_1_pane

0xa2cd,	// (0x00073c30) grid_dialer_command_2_pane

0xa2cd,	// (0x00073c30) grid_dialer_keypad_pane

0x3f57,	// (0x0006d8ba) bg_popup_call_pane_cp06_ParamLimits

0x3f57,	// (0x0006d8ba) bg_popup_call_pane_cp06

0x3f57,	// (0x0006d8ba) dialer_ne_clear_pane_ParamLimits

0x3f57,	// (0x0006d8ba) dialer_ne_clear_pane

0xb128,	// (0x00074a8b) dialer_ne_pane_g1

0xbc01,	// (0x00075564) dialer_ne_pane_t1_ParamLimits

0xbc01,	// (0x00075564) dialer_ne_pane_t1

0x3f65,	// (0x0006d8c8) dialer_ne_pane_t2_ParamLimits

0x3f65,	// (0x0006d8c8) dialer_ne_pane_t2

0x3f8d,	// (0x0006d8f0) dialer_ne_pane_t3_ParamLimits

0x3f8d,	// (0x0006d8f0) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x0007907b) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x0007907b) dialer_ne_pane_t

0x3f8d,	// (0x0006d8f0) dialer_ne_pane_t3_copy1_ParamLimits

0x3f8d,	// (0x0006d8f0) dialer_ne_pane_t3_copy1

0xd668,	// (0x00076fcb) cell_dialer_keypad_pane_ParamLimits

0xd668,	// (0x00076fcb) cell_dialer_keypad_pane

0xa32e,	// (0x00073c91) cell_dialer_command_1_pane_ParamLimits

0xa32e,	// (0x00073c91) cell_dialer_command_1_pane

0xd67f,	// (0x00076fe2) cell_dialer_command_2_pane_ParamLimits

0xd67f,	// (0x00076fe2) cell_dialer_command_2_pane

0xa32e,	// (0x00073c91) bg_button_pane_cp02_ParamLimits

0xa32e,	// (0x00073c91) bg_button_pane_cp02

0xaec5,	// (0x00074828) cell_dialer_keypad_pane_g1_ParamLimits

0xaec5,	// (0x00074828) cell_dialer_keypad_pane_g1

0xa32e,	// (0x00073c91) bg_button_pane_cp03_ParamLimits

0xa32e,	// (0x00073c91) bg_button_pane_cp03

0xaec5,	// (0x00074828) cell_dialer_command_1_pane_g1_ParamLimits

0xaec5,	// (0x00074828) cell_dialer_command_1_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp04

0xb128,	// (0x00074a8b) cell_dialer_command_2_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp06

0xb128,	// (0x00074a8b) dialer_ne_clear_pane_g1

0xba04,	// (0x00075367) navi_pane_g2

0xba32,	// (0x00075395) navi_pane_g3

0x0002,

0xf334,	// (0x00078c97) navi_pane_g

0xbac1,	// (0x00075424) navi_pane_mv_g2

0xbae8,	// (0x0007544b) navi_pane_mv_g5

0x24c3,	// (0x0006be26) navi_pane_mv_t1

0xaf37,	// (0x0007489a) main_clock2_pane

0xa32e,	// (0x00073c91) main_clock2_list_pane_ParamLimits

0xa32e,	// (0x00073c91) main_clock2_list_pane

0x4023,	// (0x0006d986) main_clock2_pane_t1_ParamLimits

0x4023,	// (0x0006d986) main_clock2_pane_t1

0x405e,	// (0x0006d9c1) main_clock2_pane_t2_ParamLimits

0x405e,	// (0x0006d9c1) main_clock2_pane_t2

0x0004,

0xf724,	// (0x00079087) main_clock2_pane_t_ParamLimits

0xf724,	// (0x00079087) main_clock2_pane_t

0x40fe,	// (0x0006da61) popup_clock_analogue_window_cp03_ParamLimits

0x40fe,	// (0x0006da61) popup_clock_analogue_window_cp03

0x4123,	// (0x0006da86) popup_clock_digital_window_cp02_ParamLimits

0x4123,	// (0x0006da86) popup_clock_digital_window_cp02

0x419c,	// (0x0006daff) main_clock2_list_single_pane_ParamLimits

0x419c,	// (0x0006daff) main_clock2_list_single_pane

0xb0f2,	// (0x00074a55) list_highlight_pane_cp05

0xd6c2,	// (0x00077025) main_clock2_list_single_pane_t1

0x14d9,	// (0x0006ae3c) popup_toolbar_window_cp04_ParamLimits

0xaed3,	// (0x00074836) camera2_autofocus_pane_g2_ParamLimits

0xaed3,	// (0x00074836) camera2_autofocus_pane_g2

0xaed3,	// (0x00074836) camera2_autofocus_pane_g3_ParamLimits

0xaed3,	// (0x00074836) camera2_autofocus_pane_g3

0xaed3,	// (0x00074836) camera2_autofocus_pane_g4_ParamLimits

0xaed3,	// (0x00074836) camera2_autofocus_pane_g4

0xaed3,	// (0x00074836) camera2_autofocus_pane_g5_ParamLimits

0xaed3,	// (0x00074836) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x00078fcb) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x00078fcb) camera2_autofocus_pane_g

0x38a7,	// (0x0006d20a) camera2_autofocus_pane_cp_g2

0x38af,	// (0x0006d212) camera2_autofocus_pane_cp_g3

0x38b7,	// (0x0006d21a) camera2_autofocus_pane_cp_g4

0x38bf,	// (0x0006d222) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x00079031) camera2_autofocus_pane_cp_g

0xa2cd,	// (0x00073c30) popup_dialer_spcha_window

0xa2cd,	// (0x00073c30) bg_popup_sub_pane_cp07

0xa2cd,	// (0x00073c30) list_spcha_pane

0xd6d0,	// (0x00077033) list_single_spcha_pane_ParamLimits

0xd6d0,	// (0x00077033) list_single_spcha_pane

0xa2cd,	// (0x00073c30) list_highlight_pane_cp06

0xb664,	// (0x00074fc7) list_single_spcha_pane_t1

0xc94d,	// (0x000762b0) popup_call2_audio_out_window_g4_ParamLimits

0xc94d,	// (0x000762b0) popup_call2_audio_out_window_g4

0x9093,	// (0x000729f6) main_imed2_pane

0x9234,	// (0x00072b97) popup_imed_adjust2_window

0x3238,	// (0x0006cb9b) popup_imed_trans_window_ParamLimits

0x3238,	// (0x0006cb9b) popup_imed_trans_window

0xd126,	// (0x00076a89) popup_blid_sat_info2_window_t1

0xd134,	// (0x00076a97) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x00078f60) popup_blid_sat_info2_window_t

0x424d,	// (0x0006dbb0) aid_size_cell_colour_35

0x426d,	// (0x0006dbd0) aid_size_cell_colour_112

0x428d,	// (0x0006dbf0) aid_size_cell_effect

0xbc15,	// (0x00075578) bg_tb_trans_pane_cp02

0xb58a,	// (0x00074eed) heading_imed_pane

0x42ad,	// (0x0006dc10) listscroll_imed_pane

0xd6e2,	// (0x00077045) heading_imed_pane_g1

0xd6ea,	// (0x0007704d) heading_imed_pane_t1

0xd6f8,	// (0x0007705b) grid_imed_colour_35_pane_ParamLimits

0xd6f8,	// (0x0007705b) grid_imed_colour_35_pane

0x42b9,	// (0x0006dc1c) grid_imed_effect_pane

0xd710,	// (0x00077073) list_imed_aspect_pane

0x42cf,	// (0x0006dc32) scroll_pane_cp027_ParamLimits

0x42cf,	// (0x0006dc32) scroll_pane_cp027

0x42e0,	// (0x0006dc43) cell_imed_effect_pane_ParamLimits

0x42e0,	// (0x0006dc43) cell_imed_effect_pane

0xd718,	// (0x0007707b) cell_imed_colour_pane_ParamLimits

0xd718,	// (0x0007707b) cell_imed_colour_pane

0xd75a,	// (0x000770bd) cell_imed_colour_pane_g1_ParamLimits

0xd75a,	// (0x000770bd) cell_imed_colour_pane_g1

0xd76b,	// (0x000770ce) hgihlgiht_grid_pane_cp016_ParamLimits

0xd76b,	// (0x000770ce) hgihlgiht_grid_pane_cp016

0x4307,	// (0x0006dc6a) cell_imed_effect_pane_g1

0x430f,	// (0x0006dc72) grid_highlight_pane_cp017

0xd77c,	// (0x000770df) list_imed_single_pane_ParamLimits

0xd77c,	// (0x000770df) list_imed_single_pane

0xa2cd,	// (0x00073c30) list_highlight_pane_cp07

0xd791,	// (0x000770f4) list_imed_aspect_pane_comp1_t1

0xbc15,	// (0x00075578) bg_tb_trans_pane_cp05

0xd7b3,	// (0x00077116) popup_imed_adjust2_window_g1

0xd7da,	// (0x0007713d) popup_imed_adjust2_window_t1

0xd7f2,	// (0x00077155) slider_imed_adjust_pane

0xd806,	// (0x00077169) slider_imed_adjust_pane_g1

0xd816,	// (0x00077179) slider_imed_adjust_pane_g2

0xd826,	// (0x00077189) slider_imed_adjust_pane_g3

0xd837,	// (0x0007719a) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x000790a4) slider_imed_adjust_pane_g

0x4318,	// (0x0006dc7b) aid_size_cell_clipart2

0x4324,	// (0x0006dc87) grid_imed_clipart_pane

0xd848,	// (0x000771ab) scroll_pane_cp031

0x432e,	// (0x0006dc91) cell_imed_clipart_pane_ParamLimits

0x432e,	// (0x0006dc91) cell_imed_clipart_pane

0x4350,	// (0x0006dcb3) cell_imed_clipart_pane_g1

0xa2cd,	// (0x00073c30) grid_highlight_pane_cp014

0x3fff,	// (0x0006d962) main_clock2_pane_g1_ParamLimits

0x3fff,	// (0x0006d962) main_clock2_pane_g1

0x4143,	// (0x0006daa6) aid_call2_pane_cp10

0x4155,	// (0x0006dab8) aid_call_pane_cp10

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g1

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g2

0x4167,	// (0x0006daca) popup_clock_analogue_window_cp10_g3

0x4167,	// (0x0006daca) popup_clock_analogue_window_cp10_g4

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x00079092) popup_clock_analogue_window_cp10_g

0x417d,	// (0x0006dae0) popup_clock_analogue_window_cp10_t1

0x41ae,	// (0x0006db11) clock_digital_number_pane_cp10_ParamLimits

0x41ae,	// (0x0006db11) clock_digital_number_pane_cp10

0x41c6,	// (0x0006db29) clock_digital_number_pane_cp11_ParamLimits

0x41c6,	// (0x0006db29) clock_digital_number_pane_cp11

0x41de,	// (0x0006db41) clock_digital_number_pane_cp12_ParamLimits

0x41de,	// (0x0006db41) clock_digital_number_pane_cp12

0x41f8,	// (0x0006db5b) clock_digital_number_pane_cp13_ParamLimits

0x41f8,	// (0x0006db5b) clock_digital_number_pane_cp13

0x4212,	// (0x0006db75) clock_digital_separator_pane_cp10_ParamLimits

0x4212,	// (0x0006db75) clock_digital_separator_pane_cp10

0x422c,	// (0x0006db8f) popup_clock_digital_window_cp02_t1_ParamLimits

0x422c,	// (0x0006db8f) popup_clock_digital_window_cp02_t1

0xae42,	// (0x000747a5) clock_digital_number_pane_cp10_g1

0xae42,	// (0x000747a5) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x000790ad) clock_digital_number_pane_cp10_g

0xae42,	// (0x000747a5) clock_digital_separator_pane_cp10_g1

0xae42,	// (0x000747a5) clock_digital_separator_pane_g2_cp10

0xbaf0,	// (0x00075453) navi_pane_vded_g4

0xbaf9,	// (0x0007545c) navi_pane_vded_g5

0xbb02,	// (0x00075465) navi_pane_vded_t1

0x9093,	// (0x000729f6) main_vded_pane

0x4359,	// (0x0006dcbc) main_vded_pane_g1

0x4363,	// (0x0006dcc6) main_vded_pane_g2

0x436d,	// (0x0006dcd0) main_vded_pane_g3

0x0002,

0xf74f,	// (0x000790b2) main_vded_pane_g

0x4377,	// (0x0006dcda) main_vded_pane_t1

0x4385,	// (0x0006dce8) main_vded_pane_t2

0x0001,

0xf756,	// (0x000790b9) main_vded_pane_t

0x4393,	// (0x0006dcf6) vded_slider_pane

0x439b,	// (0x0006dcfe) vded_video_pane

0xd850,	// (0x000771b3) vded_video_pane_g1

0x43a3,	// (0x0006dd06) vded_video_pane_g2

0xb128,	// (0x00074a8b) vded_video_pane_g3

0x0002,

0xf75b,	// (0x000790be) vded_video_pane_g

0xd85a,	// (0x000771bd) vded_slider_pane_g1

0xd051,	// (0x000769b4) vded_slider_pane_g2

0xd863,	// (0x000771c6) vded_slider_pane_g3

0xd86c,	// (0x000771cf) vded_slider_pane_g4

0xd875,	// (0x000771d8) vded_slider_pane_g5

0x0004,

0xf762,	// (0x000790c5) vded_slider_pane_g

0x3e63,	// (0x0006d7c6) mup3_rocker_pane_ParamLimits

0x3e63,	// (0x0006d7c6) mup3_rocker_pane

0x43ac,	// (0x0006dd0f) mup3_control_keys_pane_g1

0x43b4,	// (0x0006dd17) mup3_control_keys_pane_g2

0x43bc,	// (0x0006dd1f) mup3_control_keys_pane_g3

0x43c4,	// (0x0006dd27) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x000790d0) mup3_control_keys_pane_g

0x080e,	// (0x0006a171) popup_toolbar2_fixed_window_cp01_ParamLimits

0x080e,	// (0x0006a171) popup_toolbar2_fixed_window_cp01

0x3e97,	// (0x0006d7fa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3e97,	// (0x0006d7fa) popup_toolbar2_fixed_window_cp02

0xc2d6,	// (0x00075c39) popup_call2_audio_second_window_t4_ParamLimits

0xc2d6,	// (0x00075c39) popup_call2_audio_second_window_t4

0xc812,	// (0x00076175) popup_call2_audio_first_window_t6_ParamLimits

0xc812,	// (0x00076175) popup_call2_audio_first_window_t6

0xca50,	// (0x000763b3) popup_call2_audio_out_window_t6_ParamLimits

0xca50,	// (0x000763b3) popup_call2_audio_out_window_t6

0x9093,	// (0x000729f6) main_vitu_pane

0xa32e,	// (0x00073c91) aid_size_cell_itu_ParamLimits

0xa32e,	// (0x00073c91) aid_size_cell_itu

0xa32e,	// (0x00073c91) bg_popup_window_pane_cp08_ParamLimits

0xa32e,	// (0x00073c91) bg_popup_window_pane_cp08

0xa32e,	// (0x00073c91) field_vitu_entry_pane_ParamLimits

0xa32e,	// (0x00073c91) field_vitu_entry_pane

0xa32e,	// (0x00073c91) grid_vitu_function_pane_ParamLimits

0xa32e,	// (0x00073c91) grid_vitu_function_pane

0xa32e,	// (0x00073c91) grid_vitu_itu_pane_ParamLimits

0xa32e,	// (0x00073c91) grid_vitu_itu_pane

0xa32e,	// (0x00073c91) cell_vitu_itu_pane_ParamLimits

0xa32e,	// (0x00073c91) cell_vitu_itu_pane

0xa32e,	// (0x00073c91) cell_vitu_function_pane_ParamLimits

0xa32e,	// (0x00073c91) cell_vitu_function_pane

0xa32e,	// (0x00073c91) bg_popup_sub_pane_cp08_ParamLimits

0xa32e,	// (0x00073c91) bg_popup_sub_pane_cp08

0xb0fa,	// (0x00074a5d) field_vitu_entry_pane_t1_ParamLimits

0xb0fa,	// (0x00074a5d) field_vitu_entry_pane_t1

0xd87e,	// (0x000771e1) field_vitu_entry_pane_t2_ParamLimits

0xd87e,	// (0x000771e1) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x000790d9) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x000790d9) field_vitu_entry_pane_t

0xce2b,	// (0x0007678e) bg_button_pane_cp05_ParamLimits

0xce2b,	// (0x0007678e) bg_button_pane_cp05

0xd89b,	// (0x000771fe) cell_vitu_itu_pane_g1

0xbbed,	// (0x00075550) cell_vitu_itu_pane_t1_ParamLimits

0xbbed,	// (0x00075550) cell_vitu_itu_pane_t1

0xbbed,	// (0x00075550) cell_vitu_itu_pane_t2_ParamLimits

0xbbed,	// (0x00075550) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x000790de) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x000790de) cell_vitu_itu_pane_t

0xa2cd,	// (0x00073c30) bg_button_pane_cp07

0xb128,	// (0x00074a8b) cell_vitu_function_pane_g1

0x909d,	// (0x00072a00) main_calc_pane_g1

0x069c,	// (0x00069fff) aid_visual_content_pane

0x9093,	// (0x000729f6) main_vradio_pane

0xaec5,	// (0x00074828) main_vradio_pane_g1_ParamLimits

0xaec5,	// (0x00074828) main_vradio_pane_g1

0xaed3,	// (0x00074836) main_vradio_pane_g2_ParamLimits

0xaed3,	// (0x00074836) main_vradio_pane_g2

0x0001,

0xf782,	// (0x000790e5) main_vradio_pane_g_ParamLimits

0xf782,	// (0x000790e5) main_vradio_pane_g

0xb0fa,	// (0x00074a5d) main_vradio_pane_t1_ParamLimits

0xb0fa,	// (0x00074a5d) main_vradio_pane_t1

0xb0fa,	// (0x00074a5d) main_vradio_pane_t2_ParamLimits

0xb0fa,	// (0x00074a5d) main_vradio_pane_t2

0xbc01,	// (0x00075564) main_vradio_pane_t3_ParamLimits

0xbc01,	// (0x00075564) main_vradio_pane_t3

0x0002,

0xf787,	// (0x000790ea) main_vradio_pane_t_ParamLimits

0xf787,	// (0x000790ea) main_vradio_pane_t

0xa32e,	// (0x00073c91) vradio_rocker_control_pane_ParamLimits

0xa32e,	// (0x00073c91) vradio_rocker_control_pane

0xa32e,	// (0x00073c91) vradio_station_info_pane_ParamLimits

0xa32e,	// (0x00073c91) vradio_station_info_pane

0xa32e,	// (0x00073c91) vradio_frequency_info_pane_ParamLimits

0xa32e,	// (0x00073c91) vradio_frequency_info_pane

0xb128,	// (0x00074a8b) vradio_station_info_pane_g1

0xbbed,	// (0x00075550) vradio_station_info_pane_t1_ParamLimits

0xbbed,	// (0x00075550) vradio_station_info_pane_t1

0xbc01,	// (0x00075564) vradio_station_info_pane_t2_ParamLimits

0xbc01,	// (0x00075564) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x000790f1) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x000790f1) vradio_station_info_pane_t

0xa2cd,	// (0x00073c30) vradio_tuning_pane

0x43d4,	// (0x0006dd37) vradio_rocker_control_pane_g1

0xd8b7,	// (0x0007721a) vradio_rocker_control_pane_g2

0x43de,	// (0x0006dd41) vradio_rocker_control_pane_g3

0x43e8,	// (0x0006dd4b) vradio_rocker_control_pane_g4

0x43f2,	// (0x0006dd55) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x000790f6) vradio_rocker_control_pane_g

0xb128,	// (0x00074a8b) vradio_frequency_info_pane_g1

0xb0fa,	// (0x00074a5d) vradio_frequency_info_pane_t1_ParamLimits

0xb0fa,	// (0x00074a5d) vradio_frequency_info_pane_t1

0x43fc,	// (0x0006dd5f) vradio_tuning_pane_g1

0x4407,	// (0x0006dd6a) vradio_tuning_pane_t1

0x9044,	// (0x000729a7) area_side_right_pane_ParamLimits

0x9044,	// (0x000729a7) area_side_right_pane

0xce88,	// (0x000767eb) status_small_pane_g1

0xce90,	// (0x000767f3) status_small_pane_g2

0xce99,	// (0x000767fc) status_small_pane_g3

0xcea2,	// (0x00076805) status_small_pane_g4

0x0003,

0xf55f,	// (0x00078ec2) status_small_pane_g

0xceab,	// (0x0007680e) status_small_pane_t1

0x9093,	// (0x000729f6) main_video3_pane

0xd8bf,	// (0x00077222) cams_zoom_vslider_pane

0xd8c7,	// (0x0007722a) image3_wide_pane_ParamLimits

0xd8c7,	// (0x0007722a) image3_wide_pane

0xd904,	// (0x00077267) image3_wide_small_pane

0xd910,	// (0x00077273) main_video3_pane_g1_ParamLimits

0xd910,	// (0x00077273) main_video3_pane_g1

0xd92c,	// (0x0007728f) main_video3_pane_g2_ParamLimits

0xd92c,	// (0x0007728f) main_video3_pane_g2

0x0001,

0xf79e,	// (0x00079101) main_video3_pane_g_ParamLimits

0xf79e,	// (0x00079101) main_video3_pane_g

0xd948,	// (0x000772ab) main_video3_pane_t1_ParamLimits

0xd948,	// (0x000772ab) main_video3_pane_t1

0xd973,	// (0x000772d6) main_video3_pane_t2_ParamLimits

0xd973,	// (0x000772d6) main_video3_pane_t2

0xd99e,	// (0x00077301) main_video3_pane_t3_ParamLimits

0xd99e,	// (0x00077301) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x00079106) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x00079106) main_video3_pane_t

0xd9cb,	// (0x0007732e) cams_zoom_vslider_pane_g1

0xd9d4,	// (0x00077337) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x0007910d) cams_zoom_vslider_pane_g

0xd9dc,	// (0x0007733f) small_slider_vertical_pane

0xb128,	// (0x00074a8b) small_slider_vertical_pane_g1

0xb128,	// (0x00074a8b) small_slider_vertical_pane_g2

0xd9e4,	// (0x00077347) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x00079112) small_slider_vertical_pane_g

0x9093,	// (0x000729f6) main_hwr_training_pane

0xd9ed,	// (0x00077350) hwr_training_instruct_pane_ParamLimits

0xd9ed,	// (0x00077350) hwr_training_instruct_pane

0x4416,	// (0x0006dd79) hwr_training_navi_pane_ParamLimits

0x4416,	// (0x0006dd79) hwr_training_navi_pane

0x4435,	// (0x0006dd98) hwr_training_write_pane_ParamLimits

0x4435,	// (0x0006dd98) hwr_training_write_pane

0xa2cd,	// (0x00073c30) bg_frame_shadow_pane

0xda24,	// (0x00077387) hwr_training_write_pane_g1

0xda2c,	// (0x0007738f) hwr_training_write_pane_g2

0xda34,	// (0x00077397) hwr_training_write_pane_g3

0xda3c,	// (0x0007739f) hwr_training_write_pane_g4

0xda44,	// (0x000773a7) hwr_training_write_pane_g5

0xda4c,	// (0x000773af) hwr_training_write_pane_g6

0xda54,	// (0x000773b7) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x00079119) hwr_training_write_pane_g

0x931c,	// (0x00072c7f) hwr_training_navi_pane_g1_ParamLimits

0x931c,	// (0x00072c7f) hwr_training_navi_pane_g1

0x932e,	// (0x00072c91) hwr_training_navi_pane_g2_ParamLimits

0x932e,	// (0x00072c91) hwr_training_navi_pane_g2

0x9340,	// (0x00072ca3) hwr_training_navi_pane_g3_ParamLimits

0x9340,	// (0x00072ca3) hwr_training_navi_pane_g3

0x9350,	// (0x00072cb3) hwr_training_navi_pane_g4_ParamLimits

0x9350,	// (0x00072cb3) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x00079128) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x00079128) hwr_training_navi_pane_g

0x935d,	// (0x00072cc0) hwr_training_navi_pane_t1

0x447f,	// (0x0006dde2) list_single_hwr_training_instruct_pane_ParamLimits

0x447f,	// (0x0006dde2) list_single_hwr_training_instruct_pane

0xda5c,	// (0x000773bf) list_single_hwr_training_instruct_pane_t1

0xd227,	// (0x00076b8a) bg_frame_shadow_pane_g1

0xda6b,	// (0x000773ce) bg_frame_shadow_pane_g2

0xda73,	// (0x000773d6) bg_frame_shadow_pane_g3

0xda7b,	// (0x000773de) bg_frame_shadow_pane_g4

0xda83,	// (0x000773e6) bg_frame_shadow_pane_g5

0xda8b,	// (0x000773ee) bg_frame_shadow_pane_g6

0xda93,	// (0x000773f6) bg_frame_shadow_pane_g7

0xafef,	// (0x00074952) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x00079133) bg_frame_shadow_pane_g

0x9093,	// (0x000729f6) main_video_tele_dialer_pane

0x4495,	// (0x0006ddf8) aid_size_cell_video_keypad_ParamLimits

0x4495,	// (0x0006ddf8) aid_size_cell_video_keypad

0x44af,	// (0x0006de12) grid_video_dialer_keypad_pane_ParamLimits

0x44af,	// (0x0006de12) grid_video_dialer_keypad_pane

0x44fd,	// (0x0006de60) video_down_pane_cp_ParamLimits

0x44fd,	// (0x0006de60) video_down_pane_cp

0x452f,	// (0x0006de92) cell_video_dialer_keypad_pane_ParamLimits

0x452f,	// (0x0006de92) cell_video_dialer_keypad_pane

0xda9b,	// (0x000773fe) bg_button_pane_cp08_ParamLimits

0xda9b,	// (0x000773fe) bg_button_pane_cp08

0x4551,	// (0x0006deb4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4551,	// (0x0006deb4) cell_video_dialer_keypad_pane_g1

0x3e4d,	// (0x0006d7b0) mup3_rocker2_pane_ParamLimits

0x3e4d,	// (0x0006d7b0) mup3_rocker2_pane

0xb128,	// (0x00074a8b) mup3_rocker2_pane_g1

0x3127,	// (0x0006ca8a) main_dialer2_pane

0x9093,	// (0x000729f6) main_mp4_pane

0x9389,	// (0x00072cec) main_mp4_pane_g1_ParamLimits

0x9389,	// (0x00072cec) main_mp4_pane_g1

0x9389,	// (0x00072cec) main_mp4_pane_g2_ParamLimits

0x9389,	// (0x00072cec) main_mp4_pane_g2

0x458b,	// (0x0006deee) main_mp4_pane_g3_ParamLimits

0x458b,	// (0x0006deee) main_mp4_pane_g3

0x9397,	// (0x00072cfa) main_mp4_pane_g4_ParamLimits

0x9397,	// (0x00072cfa) main_mp4_pane_g4

0x93c5,	// (0x00072d28) main_mp4_pane_g5_ParamLimits

0x93c5,	// (0x00072d28) main_mp4_pane_g5

0x0007,

0xf7f0,	// (0x00079153) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x00079153) main_mp4_pane_g

0x9439,	// (0x00072d9c) main_mp4_pane_t1_ParamLimits

0x9439,	// (0x00072d9c) main_mp4_pane_t1

0x9495,	// (0x00072df8) main_mp4_pane_t2_ParamLimits

0x9495,	// (0x00072df8) main_mp4_pane_t2

0xdaa7,	// (0x0007740a) main_mp4_pane_t3_ParamLimits

0xdaa7,	// (0x0007740a) main_mp4_pane_t3

0x94e7,	// (0x00072e4a) main_mp4_pane_t4_ParamLimits

0x94e7,	// (0x00072e4a) main_mp4_pane_t4

0x0003,

0xf801,	// (0x00079164) main_mp4_pane_t_ParamLimits

0xf801,	// (0x00079164) main_mp4_pane_t

0x952b,	// (0x00072e8e) mp4_progress_pane_ParamLimits

0x952b,	// (0x00072e8e) mp4_progress_pane

0x9575,	// (0x00072ed8) mp4_rocker_pane_ParamLimits

0x9575,	// (0x00072ed8) mp4_rocker_pane

0xdad5,	// (0x00077438) mp4_progress_pane_t1

0xdaee,	// (0x00077451) mp4_progress_pane_t2

0x0001,

0xf80a,	// (0x0007916d) mp4_progress_pane_t

0xdb07,	// (0x0007746a) mup_progress_pane_cp04

0xde4c,	// (0x000777af) mp4_rocker_pane_g1

0x45c7,	// (0x0006df2a) aid_cell_size_keypad2_ParamLimits

0x45c7,	// (0x0006df2a) aid_cell_size_keypad2

0x45dd,	// (0x0006df40) dialer2_ne_pane_ParamLimits

0x45dd,	// (0x0006df40) dialer2_ne_pane

0x45f7,	// (0x0006df5a) grid_dialer2_keypad_pane_ParamLimits

0x45f7,	// (0x0006df5a) grid_dialer2_keypad_pane

0xce2b,	// (0x0007678e) bg_popup_call_pane_cp07_ParamLimits

0xce2b,	// (0x0007678e) bg_popup_call_pane_cp07

0x4613,	// (0x0006df76) dialer2_ne_pane_t1_ParamLimits

0x4613,	// (0x0006df76) dialer2_ne_pane_t1

0x464f,	// (0x0006dfb2) cell_dialer2_keypad_pane_ParamLimits

0x464f,	// (0x0006dfb2) cell_dialer2_keypad_pane

0xdb2c,	// (0x0007748f) bg_button_pane_pane_cp04_ParamLimits

0xdb2c,	// (0x0007748f) bg_button_pane_pane_cp04

0x4671,	// (0x0006dfd4) cell_dialer2_keypad_pane_g1_ParamLimits

0x4671,	// (0x0006dfd4) cell_dialer2_keypad_pane_g1

0x13ad,	// (0x0006ad10) aid_placing_vt_set_content_ParamLimits

0x13ad,	// (0x0006ad10) aid_placing_vt_set_content

0x13d5,	// (0x0006ad38) aid_placing_vt_set_title_ParamLimits

0x13d5,	// (0x0006ad38) aid_placing_vt_set_title

0x9093,	// (0x000729f6) main_image3_pane

0x4737,	// (0x0006e09a) area_side_right_pane_cp01_ParamLimits

0x4737,	// (0x0006e09a) area_side_right_pane_cp01

0x9389,	// (0x00072cec) main_image3_pane_g1_ParamLimits

0x9389,	// (0x00072cec) main_image3_pane_g1

0x474e,	// (0x0006e0b1) main_image3_pane_g2_ParamLimits

0x474e,	// (0x0006e0b1) main_image3_pane_g2

0x4776,	// (0x0006e0d9) main_image3_pane_g3_ParamLimits

0x4776,	// (0x0006e0d9) main_image3_pane_g3

0x47a0,	// (0x0006e103) main_image3_pane_g4_ParamLimits

0x47a0,	// (0x0006e103) main_image3_pane_g4

0x0003,

0xf819,	// (0x0007917c) main_image3_pane_g_ParamLimits

0xf819,	// (0x0007917c) main_image3_pane_g

0x47ca,	// (0x0006e12d) main_image3_pane_t1_ParamLimits

0x47ca,	// (0x0006e12d) main_image3_pane_t1

0x4822,	// (0x0006e185) main_image3_pane_t2_ParamLimits

0x4822,	// (0x0006e185) main_image3_pane_t2

0x4874,	// (0x0006e1d7) main_image3_pane_t3_ParamLimits

0x4874,	// (0x0006e1d7) main_image3_pane_t3

0x0003,

0xf822,	// (0x00079185) main_image3_pane_t_ParamLimits

0xf822,	// (0x00079185) main_image3_pane_t

0xa32e,	// (0x00073c91) grid_sctrl_middle_pane_cp01_ParamLimits

0xa32e,	// (0x00073c91) grid_sctrl_middle_pane_cp01

0x48fc,	// (0x0006e25f) cell_sctrl_middle_pane_cp01_ParamLimits

0x48fc,	// (0x0006e25f) cell_sctrl_middle_pane_cp01

0x4919,	// (0x0006e27c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4919,	// (0x0006e27c) cell_sctrl_middle_pane_cp01_g1

0x9093,	// (0x000729f6) main_call4_pane

0x492f,	// (0x0006e292) aid_size_button_call4_ParamLimits

0x492f,	// (0x0006e292) aid_size_button_call4

0x4962,	// (0x0006e2c5) call4_windows_pane_ParamLimits

0x4962,	// (0x0006e2c5) call4_windows_pane

0x4981,	// (0x0006e2e4) grid_call4_button_pane_ParamLimits

0x4981,	// (0x0006e2e4) grid_call4_button_pane

0x49b4,	// (0x0006e317) call4_windows_conf_pane

0x49c9,	// (0x0006e32c) popup_call4_audio_first_window_ParamLimits

0x49c9,	// (0x0006e32c) popup_call4_audio_first_window

0x4a19,	// (0x0006e37c) popup_call4_audio_second_window_ParamLimits

0x4a19,	// (0x0006e37c) popup_call4_audio_second_window

0x4a30,	// (0x0006e393) popup_call4_audio_wait_window_ParamLimits

0x4a30,	// (0x0006e393) popup_call4_audio_wait_window

0x4a3e,	// (0x0006e3a1) cell_call4_button_pane_ParamLimits

0x4a3e,	// (0x0006e3a1) cell_call4_button_pane

0x4a63,	// (0x0006e3c6) bg_button_pane_cp09_ParamLimits

0x4a63,	// (0x0006e3c6) bg_button_pane_cp09

0x4a6f,	// (0x0006e3d2) cell_call4_button_pane_g1_ParamLimits

0x4a6f,	// (0x0006e3d2) cell_call4_button_pane_g1

0x4a95,	// (0x0006e3f8) cell_call4_button_pane_t1_ParamLimits

0x4a95,	// (0x0006e3f8) cell_call4_button_pane_t1

0xdb40,	// (0x000774a3) popup_call4_audio_conf_window_ParamLimits

0xdb40,	// (0x000774a3) popup_call4_audio_conf_window

0x3ead,	// (0x0006d810) mup3_progress_pane_t1_ParamLimits

0x3ecc,	// (0x0006d82f) mup3_progress_pane_t2_ParamLimits

0xd591,	// (0x00076ef4) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x0007905a) mup3_progress_pane_t_ParamLimits

0xd5ae,	// (0x00076f11) mup_progress_pane_cp03_ParamLimits

0x43cc,	// (0x0006dd2f) mup3_control_keys_pane_g4_copy1

0x9559,	// (0x00072ebc) mp4_rocker2_pane_ParamLimits

0x9559,	// (0x00072ebc) mp4_rocker2_pane

0xdb54,	// (0x000774b7) mp4_rocker2_pane_g1

0xdb5c,	// (0x000774bf) mp4_rocker2_pane_g2

0x95f9,	// (0x00072f5c) mp4_rocker2_pane_g3

0x9601,	// (0x00072f64) mp4_rocker2_pane_g4

0x9609,	// (0x00072f6c) mp4_rocker2_pane_g5

0x0004,

0xf82b,	// (0x0007918e) mp4_rocker2_pane_g

0x9093,	// (0x000729f6) main_camera4_pane

0x9093,	// (0x000729f6) main_video4_pane

0x44cb,	// (0x0006de2e) main_video_tele_dialer_pane_t1_ParamLimits

0x44cb,	// (0x0006de2e) main_video_tele_dialer_pane_t1

0x44e4,	// (0x0006de47) main_video_tele_dialer_pane_t2_ParamLimits

0x44e4,	// (0x0006de47) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x00079144) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x00079144) main_video_tele_dialer_pane_t

0x4ad7,	// (0x0006e43a) cam4_autofocus_pane_ParamLimits

0x4ad7,	// (0x0006e43a) cam4_autofocus_pane

0x4aed,	// (0x0006e450) cam4_image_uncrop_pane_ParamLimits

0x4aed,	// (0x0006e450) cam4_image_uncrop_pane

0x4b07,	// (0x0006e46a) cam4_indicators_pane_ParamLimits

0x4b07,	// (0x0006e46a) cam4_indicators_pane

0x4b32,	// (0x0006e495) main_camera4_pane_g1_ParamLimits

0x4b32,	// (0x0006e495) main_camera4_pane_g1

0x4b44,	// (0x0006e4a7) main_camera4_pane_g2_ParamLimits

0x4b44,	// (0x0006e4a7) main_camera4_pane_g2

0x4b57,	// (0x0006e4ba) main_camera4_pane_g3_ParamLimits

0x4b57,	// (0x0006e4ba) main_camera4_pane_g3

0x4b6a,	// (0x0006e4cd) main_camera4_pane_g4_ParamLimits

0x4b6a,	// (0x0006e4cd) main_camera4_pane_g4

0x4b7d,	// (0x0006e4e0) main_camera4_pane_g5_ParamLimits

0x4b7d,	// (0x0006e4e0) main_camera4_pane_g5

0x0005,

0xf836,	// (0x00079199) main_camera4_pane_g_ParamLimits

0xf836,	// (0x00079199) main_camera4_pane_g

0x4ba1,	// (0x0006e504) main_camera4_pane_t1_ParamLimits

0x4ba1,	// (0x0006e504) main_camera4_pane_t1

0xe936,	// (0x00078299) bg_tb_trans_pane_cp06

0x9635,	// (0x00072f98) cam4_indicators_pane_g1

0x9646,	// (0x00072fa9) cam4_indicators_pane_g2

0x0002,

0xf851,	// (0x000791b4) cam4_indicators_pane_g

0x965e,	// (0x00072fc1) cam4_indicators_pane_t1

0x4c05,	// (0x0006e568) main_video4_pane_g1_ParamLimits

0x4c05,	// (0x0006e568) main_video4_pane_g1

0x4c14,	// (0x0006e577) main_video4_pane_g2_ParamLimits

0x4c14,	// (0x0006e577) main_video4_pane_g2

0x4c23,	// (0x0006e586) main_video4_pane_g3_ParamLimits

0x4c23,	// (0x0006e586) main_video4_pane_g3

0x4c32,	// (0x0006e595) main_video4_pane_g4_ParamLimits

0x4c32,	// (0x0006e595) main_video4_pane_g4

0x0004,

0xf858,	// (0x000791bb) main_video4_pane_g_ParamLimits

0xf858,	// (0x000791bb) main_video4_pane_g

0x4c50,	// (0x0006e5b3) vid4_indicators_pane_ParamLimits

0x4c50,	// (0x0006e5b3) vid4_indicators_pane

0x4c7e,	// (0x0006e5e1) video4_image_uncrop_cif_pane_ParamLimits

0x4c7e,	// (0x0006e5e1) video4_image_uncrop_cif_pane

0x4c98,	// (0x0006e5fb) video4_image_uncrop_nhd_pane_ParamLimits

0x4c98,	// (0x0006e5fb) video4_image_uncrop_nhd_pane

0x4aed,	// (0x0006e450) video4_image_uncrop_vga_pane_ParamLimits

0x4aed,	// (0x0006e450) video4_image_uncrop_vga_pane

0x9085,	// (0x000729e8) bg_tb_trans_pane_cp07

0x9688,	// (0x00072feb) vid4_indicators_pane_g1

0x969c,	// (0x00072fff) vid4_indicators_pane_g2

0x96b0,	// (0x00073013) vid4_indicators_pane_g3

0x0004,

0xf863,	// (0x000791c6) vid4_indicators_pane_g

0x96dd,	// (0x00073040) vid4_indicators_pane_t1

0x4cac,	// (0x0006e60f) cam4_autofocus_pane_g1

0x4cb4,	// (0x0006e617) cam4_autofocus_pane_g2

0x4cbc,	// (0x0006e61f) cam4_autofocus_pane_g3

0x0002,

0xf86e,	// (0x000791d1) cam4_autofocus_pane_g

0x4cc4,	// (0x0006e627) cam4_autofocus_pane_g3_copy1

0x4513,	// (0x0006de76) video_down_pane_cp_t1

0x4521,	// (0x0006de84) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x00079149) video_down_pane_cp_t

0x9085,	// (0x000729e8) popup_vitu2_window_ParamLimits

0x9085,	// (0x000729e8) popup_vitu2_window

0x4ccc,	// (0x0006e62f) aid_size_cell2_itu2_ParamLimits

0x4ccc,	// (0x0006e62f) aid_size_cell2_itu2

0x4cf2,	// (0x0006e655) aid_size_cell_itu2_ParamLimits

0x4cf2,	// (0x0006e655) aid_size_cell_itu2

0x4d4e,	// (0x0006e6b1) bg_popup_window_pane_cp09_ParamLimits

0x4d4e,	// (0x0006e6b1) bg_popup_window_pane_cp09

0x4d5c,	// (0x0006e6bf) field_vitu2_entry_pane_ParamLimits

0x4d5c,	// (0x0006e6bf) field_vitu2_entry_pane

0x4d82,	// (0x0006e6e5) grid_vitu2_function_pane_ParamLimits

0x4d82,	// (0x0006e6e5) grid_vitu2_function_pane

0x4dd3,	// (0x0006e736) grid_vitu2_itu_pane_ParamLimits

0x4dd3,	// (0x0006e736) grid_vitu2_itu_pane

0x4e69,	// (0x0006e7cc) cell_vitu2_itu_pane_ParamLimits

0x4e69,	// (0x0006e7cc) cell_vitu2_itu_pane

0x4e95,	// (0x0006e7f8) cell_vitu2_function_pane_ParamLimits

0x4e95,	// (0x0006e7f8) cell_vitu2_function_pane

0xdb64,	// (0x000774c7) bg_popup_call_pane_cp08_ParamLimits

0xdb64,	// (0x000774c7) bg_popup_call_pane_cp08

0xdb7b,	// (0x000774de) field_vitu2_entry_pane_g1

0xdb87,	// (0x000774ea) field_vitu2_entry_pane_g2

0x0002,

0xf875,	// (0x000791d8) field_vitu2_entry_pane_g

0x4ed4,	// (0x0006e837) field_vitu2_entry_pane_t1_ParamLimits

0x4ed4,	// (0x0006e837) field_vitu2_entry_pane_t1

0xa33c,	// (0x00073c9f) field_vitu2_entry_pane_t2_ParamLimits

0xa33c,	// (0x00073c9f) field_vitu2_entry_pane_t2

0x0001,

0xf87c,	// (0x000791df) field_vitu2_entry_pane_t_ParamLimits

0xf87c,	// (0x000791df) field_vitu2_entry_pane_t

0x4f06,	// (0x0006e869) bg_button_pane_cp010_ParamLimits

0x4f06,	// (0x0006e869) bg_button_pane_cp010

0x4f14,	// (0x0006e877) cell_vitu2_itu_pane_g1

0x4f3a,	// (0x0006e89d) cell_vitu2_itu_pane_t1_ParamLimits

0x4f3a,	// (0x0006e89d) cell_vitu2_itu_pane_t1

0x0574,	// (0x00069ed7) cell_vitu2_itu_pane_t2_ParamLimits

0x0574,	// (0x00069ed7) cell_vitu2_itu_pane_t2

0x0002,

0xf886,	// (0x000791e9) cell_vitu2_itu_pane_t_ParamLimits

0xf886,	// (0x000791e9) cell_vitu2_itu_pane_t

0x9085,	// (0x000729e8) bg_button_pane_cp011

0x4f98,	// (0x0006e8fb) cell_vitu2_function_pane_g1

0x9093,	// (0x000729f6) main_myfav_hc_pane

0x48c4,	// (0x0006e227) popup_image3_note_pane_ParamLimits

0x48c4,	// (0x0006e227) popup_image3_note_pane

0x48e0,	// (0x0006e243) popup_image3_tool_bar_pane_ParamLimits

0x48e0,	// (0x0006e243) popup_image3_tool_bar_pane

0x0602,	// (0x00069f65) cell_vitu2_itu_pane_t3_ParamLimits

0x0602,	// (0x00069f65) cell_vitu2_itu_pane_t3

0xa2cd,	// (0x00073c30) bg_popup_trans_pane

0xdb9b,	// (0x000774fe) grid_image3_tool_bar_pane

0xdba5,	// (0x00077508) bg_popup_trans_pane_g1

0xb342,	// (0x00074ca5) bg_popup_trans_pane_g2

0xdbad,	// (0x00077510) bg_popup_trans_pane_g3

0xdbb5,	// (0x00077518) bg_popup_trans_pane_g4

0xdbbd,	// (0x00077520) bg_popup_trans_pane_g5

0xdbc5,	// (0x00077528) bg_popup_trans_pane_g6

0xdbcd,	// (0x00077530) bg_popup_trans_pane_g7

0xdbd5,	// (0x00077538) bg_popup_trans_pane_g8

0xb322,	// (0x00074c85) bg_popup_trans_pane_g9

0x0008,

0xf88d,	// (0x000791f0) bg_popup_trans_pane_g

0xdbdd,	// (0x00077540) cell_image3_tool_bar_pane_ParamLimits

0xdbdd,	// (0x00077540) cell_image3_tool_bar_pane

0xb128,	// (0x00074a8b) cell_image3_tool_bar_pane_g1

0xa2cd,	// (0x00073c30) bg_popup_trans_pane_cp1

0xdbf1,	// (0x00077554) popup_image3_note_pane_t1

0xdbff,	// (0x00077562) popup_image3_note_pane_t2

0xdc0d,	// (0x00077570) popup_image3_note_pane_t3

0x0002,

0xf8a0,	// (0x00079203) popup_image3_note_pane_t

0xdc1b,	// (0x0007757e) popup_image3_note_pane_t3_copy1

0x4fab,	// (0x0006e90e) bg_myfav_hc_instruction_pane_ParamLimits

0x4fab,	// (0x0006e90e) bg_myfav_hc_instruction_pane

0x4fbf,	// (0x0006e922) cell_myfav_contact_pane_ParamLimits

0x4fbf,	// (0x0006e922) cell_myfav_contact_pane

0x4fdd,	// (0x0006e940) cell_myfav_contact_pane_cp1_ParamLimits

0x4fdd,	// (0x0006e940) cell_myfav_contact_pane_cp1

0x4ff5,	// (0x0006e958) cell_myfav_contact_pane_cp2_ParamLimits

0x4ff5,	// (0x0006e958) cell_myfav_contact_pane_cp2

0x500d,	// (0x0006e970) cell_myfav_contact_pane_cp3_ParamLimits

0x500d,	// (0x0006e970) cell_myfav_contact_pane_cp3

0x5024,	// (0x0006e987) cell_myfav_contact_pane_cp4_ParamLimits

0x5024,	// (0x0006e987) cell_myfav_contact_pane_cp4

0x503c,	// (0x0006e99f) cell_myfav_contact_pane_cp5_ParamLimits

0x503c,	// (0x0006e99f) cell_myfav_contact_pane_cp5

0x5050,	// (0x0006e9b3) cell_myfav_contact_pane_cp6_ParamLimits

0x5050,	// (0x0006e9b3) cell_myfav_contact_pane_cp6

0x5066,	// (0x0006e9c9) cell_myfav_contact_pane_cp7_ParamLimits

0x5066,	// (0x0006e9c9) cell_myfav_contact_pane_cp7

0xdc29,	// (0x0007758c) listscroll_gen_pane_cp05

0x5080,	// (0x0006e9e3) main_myfav_hc_pane_g1_ParamLimits

0x5080,	// (0x0006e9e3) main_myfav_hc_pane_g1

0x509a,	// (0x0006e9fd) main_myfav_hc_pane_g2_ParamLimits

0x509a,	// (0x0006e9fd) main_myfav_hc_pane_g2

0x0002,

0xf8a7,	// (0x0007920a) main_myfav_hc_pane_g_ParamLimits

0xf8a7,	// (0x0007920a) main_myfav_hc_pane_g

0x50cc,	// (0x0006ea2f) main_myfav_hc_pane_t1_ParamLimits

0x50cc,	// (0x0006ea2f) main_myfav_hc_pane_t1

0xdc32,	// (0x00077595) main_myfav_hc_pane_t2_ParamLimits

0xdc32,	// (0x00077595) main_myfav_hc_pane_t2

0xdc44,	// (0x000775a7) main_myfav_hc_pane_t3_ParamLimits

0xdc44,	// (0x000775a7) main_myfav_hc_pane_t3

0x50e3,	// (0x0006ea46) main_myfav_hc_pane_t4_ParamLimits

0x50e3,	// (0x0006ea46) main_myfav_hc_pane_t4

0x0004,

0xf8ae,	// (0x00079211) main_myfav_hc_pane_t_ParamLimits

0xf8ae,	// (0x00079211) main_myfav_hc_pane_t

0xb128,	// (0x00074a8b) bg_myfav_hc_instruction_pane_g1

0xdc56,	// (0x000775b9) cell_myfav_contact_pane_g1_ParamLimits

0xdc56,	// (0x000775b9) cell_myfav_contact_pane_g1

0xdc56,	// (0x000775b9) cell_myfav_contact_pane_g2_ParamLimits

0xdc56,	// (0x000775b9) cell_myfav_contact_pane_g2

0xdc62,	// (0x000775c5) cell_myfav_contact_pane_g3_ParamLimits

0xdc62,	// (0x000775c5) cell_myfav_contact_pane_g3

0xaed3,	// (0x00074836) cell_myfav_contact_pane_g4_ParamLimits

0xaed3,	// (0x00074836) cell_myfav_contact_pane_g4

0xdc6f,	// (0x000775d2) cell_myfav_contact_pane_g5_ParamLimits

0xdc6f,	// (0x000775d2) cell_myfav_contact_pane_g5

0x0004,

0xf8b9,	// (0x0007921c) cell_myfav_contact_pane_g_ParamLimits

0xf8b9,	// (0x0007921c) cell_myfav_contact_pane_g

0x50b4,	// (0x0006ea17) main_myfav_hc_pane_g3_ParamLimits

0x50b4,	// (0x0006ea17) main_myfav_hc_pane_g3

0x050e,	// (0x00069e71) popup_adpt_find_window

0x510b,	// (0x0006ea6e) afind_page_pane_ParamLimits

0x510b,	// (0x0006ea6e) afind_page_pane

0x5121,	// (0x0006ea84) aid_size_cell_afind_ParamLimits

0x5121,	// (0x0006ea84) aid_size_cell_afind

0x513f,	// (0x0006eaa2) bg_popup_sub_pane_cp09_ParamLimits

0x513f,	// (0x0006eaa2) bg_popup_sub_pane_cp09

0x5151,	// (0x0006eab4) find_pane_cp01_ParamLimits

0x5151,	// (0x0006eab4) find_pane_cp01

0xdc7b,	// (0x000775de) grid_afind_control_pane_ParamLimits

0xdc7b,	// (0x000775de) grid_afind_control_pane

0x5165,	// (0x0006eac8) grid_afind_pane_ParamLimits

0x5165,	// (0x0006eac8) grid_afind_pane

0x5187,	// (0x0006eaea) cell_afind_pane_ParamLimits

0x5187,	// (0x0006eaea) cell_afind_pane

0xb128,	// (0x00074a8b) afind_page_pane_g1

0x51ee,	// (0x0006eb51) afind_page_pane_g2

0x51f6,	// (0x0006eb59) afind_page_pane_g3

0x0002,

0xf8c4,	// (0x00079227) afind_page_pane_g

0x51fe,	// (0x0006eb61) afind_page_pane_t1

0xdca1,	// (0x00077604) cell_afind_grid_control_pane_ParamLimits

0xdca1,	// (0x00077604) cell_afind_grid_control_pane

0xdb2c,	// (0x0007748f) bg_button_pane_cp69_ParamLimits

0xdb2c,	// (0x0007748f) bg_button_pane_cp69

0x520c,	// (0x0006eb6f) cell_afind_pane_g1_ParamLimits

0x520c,	// (0x0006eb6f) cell_afind_pane_g1

0x5219,	// (0x0006eb7c) cell_afind_pane_t1_ParamLimits

0x5219,	// (0x0006eb7c) cell_afind_pane_t1

0xb132,	// (0x00074a95) bg_button_pane_cp72

0xdcb0,	// (0x00077613) cell_afind_grid_control_pane_g1

0x2b93,	// (0x0006c4f6) aid_image_placing_area_ParamLimits

0x2b93,	// (0x0006c4f6) aid_image_placing_area

0xaec5,	// (0x00074828) field_vitu_entry_pane_g1_ParamLimits

0xaec5,	// (0x00074828) field_vitu_entry_pane_g1

0xaec5,	// (0x00074828) field_vitu_entry_pane_g2_ParamLimits

0xaec5,	// (0x00074828) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x00078b24) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x00078b24) field_vitu_entry_pane_g

0xd89b,	// (0x000771fe) cell_vitu_itu_pane_g1_ParamLimits

0xd87e,	// (0x000771e1) cell_vitu_itu_pane_t3_ParamLimits

0xd87e,	// (0x000771e1) cell_vitu_itu_pane_t3

0xdad5,	// (0x00077438) mp4_progress_pane_t1_ParamLimits

0xdaee,	// (0x00077451) mp4_progress_pane_t2_ParamLimits

0xf80a,	// (0x0007916d) mp4_progress_pane_t_ParamLimits

0xdb07,	// (0x0007746a) mup_progress_pane_cp04_ParamLimits

0x50f7,	// (0x0006ea5a) main_myfav_hc_pane_t5_ParamLimits

0x50f7,	// (0x0006ea5a) main_myfav_hc_pane_t5

0x9034,	// (0x00072997) aid_zoom_text_primary

0x050e,	// (0x00069e71) popup_adpt_find_window_ParamLimits

0x9085,	// (0x000729e8) main_cam_set_pane

0x4b1e,	// (0x0006e481) cam4_zoom_pane_ParamLimits

0x4b1e,	// (0x0006e481) cam4_zoom_pane

0x522b,	// (0x0006eb8e) main_cam_set_pane_g1_ParamLimits

0x522b,	// (0x0006eb8e) main_cam_set_pane_g1

0x5239,	// (0x0006eb9c) main_cam_set_pane_g2_ParamLimits

0x5239,	// (0x0006eb9c) main_cam_set_pane_g2

0x0001,

0xf8cb,	// (0x0007922e) main_cam_set_pane_g_ParamLimits

0xf8cb,	// (0x0007922e) main_cam_set_pane_g

0x525a,	// (0x0006ebbd) main_cam_set_pane_t1_ParamLimits

0x525a,	// (0x0006ebbd) main_cam_set_pane_t1

0x5275,	// (0x0006ebd8) main_cset_listscroll_pane_ParamLimits

0x5275,	// (0x0006ebd8) main_cset_listscroll_pane

0x529b,	// (0x0006ebfe) main_cset_slider_pane_ParamLimits

0x529b,	// (0x0006ebfe) main_cset_slider_pane

0xdcc1,	// (0x00077624) main_cset_list_pane_ParamLimits

0xdcc1,	// (0x00077624) main_cset_list_pane

0xdcd1,	// (0x00077634) scroll_pane_cp028

0x52c1,	// (0x0006ec24) aid_area_touch_slider

0x52dd,	// (0x0006ec40) cset_slider_pane

0x5300,	// (0x0006ec63) main_cset_slider_pane_g1

0x5315,	// (0x0006ec78) main_cset_slider_pane_g2

0x0011,

0xf8d0,	// (0x00079233) main_cset_slider_pane_g

0xdd22,	// (0x00077685) main_cset_slider_pane_t1

0x53b9,	// (0x0006ed1c) main_cset_slider_pane_t2

0x53d3,	// (0x0006ed36) main_cset_slider_pane_t3

0x53ed,	// (0x0006ed50) main_cset_slider_pane_t4

0x5407,	// (0x0006ed6a) main_cset_slider_pane_t5

0x5421,	// (0x0006ed84) main_cset_slider_pane_t6

0x5436,	// (0x0006ed99) main_cset_slider_pane_t7

0x000e,

0xf8f5,	// (0x00079258) main_cset_slider_pane_t

0x553a,	// (0x0006ee9d) cset_list_set_pane_ParamLimits

0x553a,	// (0x0006ee9d) cset_list_set_pane

0xddbc,	// (0x0007771f) aid_position_infowindow_above

0xddc4,	// (0x00077727) aid_position_infowindow_below

0x554c,	// (0x0006eeaf) cset_list_set_pane_g1_ParamLimits

0x554c,	// (0x0006eeaf) cset_list_set_pane_g1

0x5558,	// (0x0006eebb) cset_list_set_pane_g3_ParamLimits

0x5558,	// (0x0006eebb) cset_list_set_pane_g3

0x0001,

0xf914,	// (0x00079277) cset_list_set_pane_g_ParamLimits

0xf914,	// (0x00079277) cset_list_set_pane_g

0x5567,	// (0x0006eeca) cset_list_set_pane_t1_ParamLimits

0x5567,	// (0x0006eeca) cset_list_set_pane_t1

0xa32e,	// (0x00073c91) list_highlight_pane_cp021_ParamLimits

0xa32e,	// (0x00073c91) list_highlight_pane_cp021

0xbc85,	// (0x000755e8) cset_slider_pane_g1

0xbc97,	// (0x000755fa) cset_slider_pane_g2

0xbc8e,	// (0x000755f1) cset_slider_pane_g3

0x0002,

0xf919,	// (0x0007927c) cset_slider_pane_g

0x96f4,	// (0x00073057) aid_area_touch_cam4_zoom

0x96fc,	// (0x0007305f) cam4_zoom_cont_pane

0x9704,	// (0x00073067) cam4_zoom_pane_g1

0x970c,	// (0x0007306f) cam4_zoom_pane_g2

0x557c,	// (0x0006eedf) cam4_zoom_pane_g3

0x0002,

0xf920,	// (0x00079283) cam4_zoom_pane_g

0x9714,	// (0x00073077) cam4_zoom_cont_pane_g1

0x971d,	// (0x00073080) cam4_zoom_cont_pane_g2

0x9726,	// (0x00073089) cam4_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x0007928a) cam4_zoom_cont_pane_g

0x494d,	// (0x0006e2b0) call4_image_pane_ParamLimits

0x494d,	// (0x0006e2b0) call4_image_pane

0x49b4,	// (0x0006e317) call4_windows_conf_pane_ParamLimits

0x49f7,	// (0x0006e35a) popup_call4_audio_in_window_ParamLimits

0x49f7,	// (0x0006e35a) popup_call4_audio_in_window

0xa2cd,	// (0x00073c30) bg_popup_call2_act_pane_cp02

0xdb38,	// (0x0007749b) call4_list_conf_pane

0xb128,	// (0x00074a8b) call4_image_pane_g1

0xb128,	// (0x00074a8b) call4_image_pane_g2

0x0001,

0xf398,	// (0x00078cfb) call4_image_pane_g

0xddcc,	// (0x0007772f) list_single_graphic_popup_conf4_pane_ParamLimits

0xddcc,	// (0x0007772f) list_single_graphic_popup_conf4_pane

0xa2cd,	// (0x00073c30) list_highlight_pane_cp022

0xdddf,	// (0x00077742) list_single_graphic_popup_conf4_pane_g1

0xb860,	// (0x000751c3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92e,	// (0x00079291) list_single_graphic_popup_conf4_pane_g

0xdde7,	// (0x0007774a) list_single_graphic_popup_conf4_pane_t1

0x14f9,	// (0x0006ae5c) popup_vtel_slider_window_ParamLimits

0x14f9,	// (0x0006ae5c) popup_vtel_slider_window

0xdb1a,	// (0x0007747d) dialer2_ne_pane_t2_ParamLimits

0xdb1a,	// (0x0007747d) dialer2_ne_pane_t2

0x0001,

0xf80f,	// (0x00079172) dialer2_ne_pane_t_ParamLimits

0xf80f,	// (0x00079172) dialer2_ne_pane_t

0xce2b,	// (0x0007678e) bg_popup_sub_pane_cp010_ParamLimits

0xce2b,	// (0x0007678e) bg_popup_sub_pane_cp010

0x5584,	// (0x0006eee7) popup_vtel_slider_window_g1_ParamLimits

0x5584,	// (0x0006eee7) popup_vtel_slider_window_g1

0x5597,	// (0x0006eefa) popup_vtel_slider_window_g2_ParamLimits

0x5597,	// (0x0006eefa) popup_vtel_slider_window_g2

0x0003,

0xf933,	// (0x00079296) popup_vtel_slider_window_g_ParamLimits

0xf933,	// (0x00079296) popup_vtel_slider_window_g

0x55ed,	// (0x0006ef50) vtel_slider_pane_ParamLimits

0x55ed,	// (0x0006ef50) vtel_slider_pane

0x560f,	// (0x0006ef72) vtel_slider_pane_g1_ParamLimits

0x560f,	// (0x0006ef72) vtel_slider_pane_g1

0x5623,	// (0x0006ef86) vtel_slider_pane_g2_ParamLimits

0x5623,	// (0x0006ef86) vtel_slider_pane_g2

0x563b,	// (0x0006ef9e) vtel_slider_pane_g3_ParamLimits

0x563b,	// (0x0006ef9e) vtel_slider_pane_g3

0x560f,	// (0x0006ef72) vtel_slider_pane_g4_ParamLimits

0x560f,	// (0x0006ef72) vtel_slider_pane_g4

0x5651,	// (0x0006efb4) vtel_slider_pane_g5_ParamLimits

0x5651,	// (0x0006efb4) vtel_slider_pane_g5

0x0004,

0xf93c,	// (0x0007929f) vtel_slider_pane_g_ParamLimits

0xf93c,	// (0x0007929f) vtel_slider_pane_g

0x9085,	// (0x000729e8) main_gallery2_pane

0x4d1e,	// (0x0006e681) aid_size_row_itut2_dropdow_list_ParamLimits

0x4d1e,	// (0x0006e681) aid_size_row_itut2_dropdow_list

0x4daa,	// (0x0006e70d) grid_vitu2_function_top_pane_ParamLimits

0x4daa,	// (0x0006e70d) grid_vitu2_function_top_pane

0x4e14,	// (0x0006e777) popup_vitu2_dropdown_list_window_ParamLimits

0x4e14,	// (0x0006e777) popup_vitu2_dropdown_list_window

0x4e3b,	// (0x0006e79e) popup_vitu2_match_list_window

0x5667,	// (0x0006efca) cell_vitu2_function_top_pane_ParamLimits

0x5667,	// (0x0006efca) cell_vitu2_function_top_pane

0x567f,	// (0x0006efe2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x567f,	// (0x0006efe2) cell_vitu2_function_top_pane_cp01

0x569b,	// (0x0006effe) cell_vitu2_function_top_wide_pane_ParamLimits

0x569b,	// (0x0006effe) cell_vitu2_function_top_wide_pane

0x9085,	// (0x000729e8) bg_button_pane_cp012

0x56b9,	// (0x0006f01c) cell_vitu2_function_top_pane_g1

0x972f,	// (0x00073092) bg_button_pane_cp013_ParamLimits

0x972f,	// (0x00073092) bg_button_pane_cp013

0x56cd,	// (0x0006f030) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x56cd,	// (0x0006f030) cell_vitu2_function_top_wide_pane_g1

0x9085,	// (0x000729e8) bg_popup_sub_pane_cp20

0x56e5,	// (0x0006f048) list_vitu2_match_list_pane

0xdba5,	// (0x00077508) bg_popup_sub_pane_cp20_g1

0xdbad,	// (0x00077510) bg_popup_sub_pane_cp20_g2

0xb342,	// (0x00074ca5) bg_popup_sub_pane_cp20_g3

0xdbb5,	// (0x00077518) bg_popup_sub_pane_cp20_g4

0xb322,	// (0x00074c85) bg_popup_sub_pane_cp20_g5

0xddfd,	// (0x00077760) bg_popup_sub_pane_cp20_g6

0xdbc5,	// (0x00077528) bg_popup_sub_pane_cp20_g7

0xdbcd,	// (0x00077530) bg_popup_sub_pane_cp20_g8

0xdbd5,	// (0x00077538) bg_popup_sub_pane_cp20_g9

0x0008,

0xf947,	// (0x000792aa) bg_popup_sub_pane_cp20_g

0x974b,	// (0x000730ae) list_vitu2_match_list_item_pane_ParamLimits

0x974b,	// (0x000730ae) list_vitu2_match_list_item_pane

0x975d,	// (0x000730c0) list_vitu2_match_list_item_pane_t1

0x9093,	// (0x000729f6) bg_popup_sub_pane_cp21

0xb0f2,	// (0x00074a55) grid_vitu2_dropdown_list_pane

0x56fd,	// (0x0006f060) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x56fd,	// (0x0006f060) cell_vitu2_dropdown_list_char_pane

0x571d,	// (0x0006f080) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x571d,	// (0x0006f080) cell_vitu2_dropdown_list_ctrl_pane

0xde05,	// (0x00077768) cell_vitu2_dropdown_list_char_pane_g1

0xde0e,	// (0x00077771) cell_vitu2_dropdown_list_char_pane_g2

0xde17,	// (0x0007777a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95a,	// (0x000792bd) cell_vitu2_dropdown_list_char_pane_g

0x5745,	// (0x0006f0a8) cell_vitu2_dropdown_list_char_pane_t1

0x5753,	// (0x0006f0b6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5753,	// (0x0006f0b6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5760,	// (0x0006f0c3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5760,	// (0x0006f0c3) cell_vitu2_dropdown_list_ctrl_pane_g2

0x576d,	// (0x0006f0d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x576d,	// (0x0006f0d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0x577a,	// (0x0006f0dd) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x577a,	// (0x0006f0dd) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe936,	// (0x00078299) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe936,	// (0x00078299) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf961,	// (0x000792c4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf961,	// (0x000792c4) cell_vitu2_dropdown_list_ctrl_pane_g

0x5796,	// (0x0006f0f9) aid_size_cell_gallery2_ParamLimits

0x5796,	// (0x0006f0f9) aid_size_cell_gallery2

0x57b4,	// (0x0006f117) grid_gallery2_pane_ParamLimits

0x57b4,	// (0x0006f117) grid_gallery2_pane

0x57ce,	// (0x0006f131) scroll_pane_cp029_ParamLimits

0x57ce,	// (0x0006f131) scroll_pane_cp029

0x57df,	// (0x0006f142) cell_gallery2_pane_ParamLimits

0x57df,	// (0x0006f142) cell_gallery2_pane

0xde20,	// (0x00077783) cell_gallery2_pane_g2

0x583e,	// (0x0006f1a1) cell_gallery2_pane_g3

0xde28,	// (0x0007778b) cell_gallery2_pane_g4

0xde30,	// (0x00077793) cell_gallery2_pane_g5

0xb0f2,	// (0x00074a55) grid_highlight_pane_cp10

0x4e3b,	// (0x0006e79e) popup_vitu2_match_list_window_ParamLimits

0x4e50,	// (0x0006e7b3) popup_vitu2_query_window_ParamLimits

0x4e50,	// (0x0006e7b3) popup_vitu2_query_window

0x9093,	// (0x000729f6) bg_vitu2_candi_button_pane

0xde05,	// (0x00077768) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xde0e,	// (0x00077771) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xde17,	// (0x0007777a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5846,	// (0x0006f1a9) bg_button_pane_cp015

0x5857,	// (0x0006f1ba) bg_button_pane_cp016

0x5863,	// (0x0006f1c6) bg_button_pane_cp017

0xbc15,	// (0x00075578) bg_popup_sub_pane_cp22

0xde38,	// (0x0007779b) popup_vitu2_query_window_g1

0x58a1,	// (0x0006f204) popup_vitu2_query_window_g2

0x0002,

0xf96c,	// (0x000792cf) popup_vitu2_query_window_g

0x58c3,	// (0x0006f226) popup_vitu2_query_window_t1_ParamLimits

0x58c3,	// (0x0006f226) popup_vitu2_query_window_t1

0x58f6,	// (0x0006f259) popup_vitu2_query_window_t2_ParamLimits

0x58f6,	// (0x0006f259) popup_vitu2_query_window_t2

0x5908,	// (0x0006f26b) popup_vitu2_query_window_t3_ParamLimits

0x5908,	// (0x0006f26b) popup_vitu2_query_window_t3

0x5930,	// (0x0006f293) popup_vitu2_query_window_t4_ParamLimits

0x5930,	// (0x0006f293) popup_vitu2_query_window_t4

0x5944,	// (0x0006f2a7) popup_vitu2_query_window_t5_ParamLimits

0x5944,	// (0x0006f2a7) popup_vitu2_query_window_t5

0x0006,

0xf973,	// (0x000792d6) popup_vitu2_query_window_t_ParamLimits

0xf973,	// (0x000792d6) popup_vitu2_query_window_t

0xdcb9,	// (0x0007761c) main_cset_text_pane

0x52c1,	// (0x0006ec24) aid_area_touch_slider_ParamLimits

0x52dd,	// (0x0006ec40) cset_slider_pane_ParamLimits

0x5300,	// (0x0006ec63) main_cset_slider_pane_g1_ParamLimits

0x5315,	// (0x0006ec78) main_cset_slider_pane_g2_ParamLimits

0xdcda,	// (0x0007763d) main_cset_slider_pane_g3_ParamLimits

0xdcda,	// (0x0007763d) main_cset_slider_pane_g3

0x532a,	// (0x0006ec8d) main_cset_slider_pane_g4_ParamLimits

0x532a,	// (0x0006ec8d) main_cset_slider_pane_g4

0x5339,	// (0x0006ec9c) main_cset_slider_pane_g5_ParamLimits

0x5339,	// (0x0006ec9c) main_cset_slider_pane_g5

0x5345,	// (0x0006eca8) main_cset_slider_pane_g6_ParamLimits

0x5345,	// (0x0006eca8) main_cset_slider_pane_g6

0xf8d0,	// (0x00079233) main_cset_slider_pane_g_ParamLimits

0xdd22,	// (0x00077685) main_cset_slider_pane_t1_ParamLimits

0x53b9,	// (0x0006ed1c) main_cset_slider_pane_t2_ParamLimits

0x53d3,	// (0x0006ed36) main_cset_slider_pane_t3_ParamLimits

0x53ed,	// (0x0006ed50) main_cset_slider_pane_t4_ParamLimits

0x5407,	// (0x0006ed6a) main_cset_slider_pane_t5_ParamLimits

0x5421,	// (0x0006ed84) main_cset_slider_pane_t6_ParamLimits

0x5436,	// (0x0006ed99) main_cset_slider_pane_t7_ParamLimits

0x5460,	// (0x0006edc3) main_cset_slider_pane_t8_ParamLimits

0x5460,	// (0x0006edc3) main_cset_slider_pane_t8

0x5488,	// (0x0006edeb) main_cset_slider_pane_t9_ParamLimits

0x5488,	// (0x0006edeb) main_cset_slider_pane_t9

0x54b0,	// (0x0006ee13) main_cset_slider_pane_t10_ParamLimits

0x54b0,	// (0x0006ee13) main_cset_slider_pane_t10

0x54d8,	// (0x0006ee3b) main_cset_slider_pane_t11_ParamLimits

0x54d8,	// (0x0006ee3b) main_cset_slider_pane_t11

0x5500,	// (0x0006ee63) main_cset_slider_pane_t12_ParamLimits

0x5500,	// (0x0006ee63) main_cset_slider_pane_t12

0x551d,	// (0x0006ee80) main_cset_slider_pane_t13_ParamLimits

0x551d,	// (0x0006ee80) main_cset_slider_pane_t13

0xf8f5,	// (0x00079258) main_cset_slider_pane_t_ParamLimits

0xa2cd,	// (0x00073c30) bg_popup_sub_pane_cp011

0xde44,	// (0x000777a7) main_cset_text_pane_g1

0xde56,	// (0x000777b9) main_cset_text_pane_t1

0xde64,	// (0x000777c7) main_cset_text_pane_t2

0xde72,	// (0x000777d5) main_cset_text_pane_t3

0xde80,	// (0x000777e3) main_cset_text_pane_t4

0xde8e,	// (0x000777f1) main_cset_text_pane_t5

0xde9c,	// (0x000777ff) main_cset_text_pane_t6

0xdeaa,	// (0x0007780d) main_cset_text_pane_t7

0x0006,

0xf982,	// (0x000792e5) main_cset_text_pane_t

0x9093,	// (0x000729f6) main_cam4_burst_pane

0x9093,	// (0x000729f6) main_cam5_pane

0xdc8f,	// (0x000775f2) bg_button_pane_cp019

0xdc98,	// (0x000775fb) bg_button_pane_cp020

0xdce6,	// (0x00077649) main_cset_slider_pane_g7_ParamLimits

0xdce6,	// (0x00077649) main_cset_slider_pane_g7

0xdcf2,	// (0x00077655) main_cset_slider_pane_g8_ParamLimits

0xdcf2,	// (0x00077655) main_cset_slider_pane_g8

0x5359,	// (0x0006ecbc) main_cset_slider_pane_g9_ParamLimits

0x5359,	// (0x0006ecbc) main_cset_slider_pane_g9

0x5365,	// (0x0006ecc8) main_cset_slider_pane_g10_ParamLimits

0x5365,	// (0x0006ecc8) main_cset_slider_pane_g10

0x5371,	// (0x0006ecd4) main_cset_slider_pane_g11_ParamLimits

0x5371,	// (0x0006ecd4) main_cset_slider_pane_g11

0x537d,	// (0x0006ece0) main_cset_slider_pane_g12_ParamLimits

0x537d,	// (0x0006ece0) main_cset_slider_pane_g12

0x5389,	// (0x0006ecec) main_cset_slider_pane_g13_ParamLimits

0x5389,	// (0x0006ecec) main_cset_slider_pane_g13

0x5395,	// (0x0006ecf8) main_cset_slider_pane_g14_ParamLimits

0x5395,	// (0x0006ecf8) main_cset_slider_pane_g14

0x53a1,	// (0x0006ed04) main_cset_slider_pane_g15_ParamLimits

0x53a1,	// (0x0006ed04) main_cset_slider_pane_g15

0xdd4a,	// (0x000776ad) main_cset_slider_pane_t14_ParamLimits

0xdd4a,	// (0x000776ad) main_cset_slider_pane_t14

0xdd83,	// (0x000776e6) main_cset_slider_pane_t15_ParamLimits

0xdd83,	// (0x000776e6) main_cset_slider_pane_t15

0x59ae,	// (0x0006f311) aid_cam4_burst_size_cell_ParamLimits

0x59ae,	// (0x0006f311) aid_cam4_burst_size_cell

0x59ce,	// (0x0006f331) grid_cam4_burst_pane_ParamLimits

0x59ce,	// (0x0006f331) grid_cam4_burst_pane

0x5a06,	// (0x0006f369) linegrid_cam4_burst_pane_ParamLimits

0x5a06,	// (0x0006f369) linegrid_cam4_burst_pane

0xdeb8,	// (0x0007781b) scroll_pane_cp30_ParamLimits

0xdeb8,	// (0x0007781b) scroll_pane_cp30

0x5a2a,	// (0x0006f38d) cell_cam4_burst_pane_ParamLimits

0x5a2a,	// (0x0006f38d) cell_cam4_burst_pane

0xdec4,	// (0x00077827) linegrid_cam4_burst_pane_g1_ParamLimits

0xdec4,	// (0x00077827) linegrid_cam4_burst_pane_g1

0x5a77,	// (0x0006f3da) linegrid_cam4_burst_pane_g2_ParamLimits

0x5a77,	// (0x0006f3da) linegrid_cam4_burst_pane_g2

0xded1,	// (0x00077834) linegrid_cam4_burst_pane_g3_ParamLimits

0xded1,	// (0x00077834) linegrid_cam4_burst_pane_g3

0x0002,

0xf991,	// (0x000792f4) linegrid_cam4_burst_pane_g_ParamLimits

0xf991,	// (0x000792f4) linegrid_cam4_burst_pane_g

0x5a88,	// (0x0006f3eb) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5a88,	// (0x0006f3eb) linegrid_cam4_burst_pane_g3_copy1

0xdede,	// (0x00077841) linegrid_cam4_burst_pane_g4_ParamLimits

0xdede,	// (0x00077841) linegrid_cam4_burst_pane_g4

0x5aa2,	// (0x0006f405) linegrid_cam4_burst_pane_g5_ParamLimits

0x5aa2,	// (0x0006f405) linegrid_cam4_burst_pane_g5

0x5ab3,	// (0x0006f416) linegrid_cam4_burst_pane_g6_ParamLimits

0x5ab3,	// (0x0006f416) linegrid_cam4_burst_pane_g6

0xdeeb,	// (0x0007784e) linegrid_cam4_burst_pane_g7_ParamLimits

0xdeeb,	// (0x0007784e) linegrid_cam4_burst_pane_g7

0x5aca,	// (0x0006f42d) cell_cam4_burst_pane_g1

0xdf04,	// (0x00077867) main_cam5_pane_t1_ParamLimits

0xdf04,	// (0x00077867) main_cam5_pane_t1

0xdf16,	// (0x00077879) main_cam5_pane_t2_ParamLimits

0xdf16,	// (0x00077879) main_cam5_pane_t2

0xdf28,	// (0x0007788b) main_cam5_pane_t3_ParamLimits

0xdf28,	// (0x0007788b) main_cam5_pane_t3

0xdf3a,	// (0x0007789d) main_cam5_pane_t4_ParamLimits

0xdf3a,	// (0x0007789d) main_cam5_pane_t4

0xdf52,	// (0x000778b5) main_cam5_pane_t5_ParamLimits

0xdf52,	// (0x000778b5) main_cam5_pane_t5

0xdf66,	// (0x000778c9) main_cam5_pane_t6_ParamLimits

0xdf66,	// (0x000778c9) main_cam5_pane_t6

0xdf7a,	// (0x000778dd) main_cam5_pane_t7_ParamLimits

0xdf7a,	// (0x000778dd) main_cam5_pane_t7

0xdf8c,	// (0x000778ef) main_cam5_pane_t8_ParamLimits

0xdf8c,	// (0x000778ef) main_cam5_pane_t8

0xdfa8,	// (0x0007790b) main_cam5_pane_t9_ParamLimits

0xdfa8,	// (0x0007790b) main_cam5_pane_t9

0xdfba,	// (0x0007791d) main_cam5_pane_t10_ParamLimits

0xdfba,	// (0x0007791d) main_cam5_pane_t10

0xdfcc,	// (0x0007792f) main_cam5_pane_t11_ParamLimits

0xdfcc,	// (0x0007792f) main_cam5_pane_t11

0xdfde,	// (0x00077941) main_cam5_pane_t12_ParamLimits

0xdfde,	// (0x00077941) main_cam5_pane_t12

0xdff3,	// (0x00077956) main_cam5_pane_t13_ParamLimits

0xdff3,	// (0x00077956) main_cam5_pane_t13

0x000c,

0xf99d,	// (0x00079300) main_cam5_pane_t_ParamLimits

0xf99d,	// (0x00079300) main_cam5_pane_t

0x07f2,	// (0x0006a155) popup_scut_keymap_window_ParamLimits

0x07f2,	// (0x0006a155) popup_scut_keymap_window

0x5add,	// (0x0006f440) aid_size_cell_brow_shortcut

0xb0f2,	// (0x00074a55) bg_popup_window_pane_cp010

0x5ae9,	// (0x0006f44c) grid_scut_pane

0x5af5,	// (0x0006f458) cell_scut_pane_ParamLimits

0x5af5,	// (0x0006f458) cell_scut_pane

0x5b0c,	// (0x0006f46f) cell_scut_pane_g1

0xe010,	// (0x00077973) cell_scut_pane_t1

0xe01f,	// (0x00077982) cell_scut_pane_t2

0x5b15,	// (0x0006f478) cell_scut_pane_t3

0x0002,

0xf9b8,	// (0x0007931b) cell_scut_pane_t

0x3a70,	// (0x0006d3d3) main_mup3_pane_g8_ParamLimits

0x3a70,	// (0x0006d3d3) main_mup3_pane_g8

0x4d36,	// (0x0006e699) area_vitu2_query_pane_ParamLimits

0x4d36,	// (0x0006e699) area_vitu2_query_pane

0x586f,	// (0x0006f1d2) input_focus_pane_cp08

0xe02e,	// (0x00077991) area_vitu2_query_pane_g1

0x5b23,	// (0x0006f486) area_vitu2_query_pane_g2

0x0001,

0xf9bf,	// (0x00079322) area_vitu2_query_pane_g

0x5b32,	// (0x0006f495) area_vitu2_query_pane_t1_ParamLimits

0x5b32,	// (0x0006f495) area_vitu2_query_pane_t1

0x5b46,	// (0x0006f4a9) area_vitu2_query_pane_t2_ParamLimits

0x5b46,	// (0x0006f4a9) area_vitu2_query_pane_t2

0x5b5a,	// (0x0006f4bd) area_vitu2_query_pane_t3_ParamLimits

0x5b5a,	// (0x0006f4bd) area_vitu2_query_pane_t3

0xa359,	// (0x00073cbc) area_vitu2_query_pane_t4_ParamLimits

0xa359,	// (0x00073cbc) area_vitu2_query_pane_t4

0xa381,	// (0x00073ce4) area_vitu2_query_pane_t5_ParamLimits

0xa381,	// (0x00073ce4) area_vitu2_query_pane_t5

0xa3a9,	// (0x00073d0c) area_vitu2_query_pane_t6_ParamLimits

0xa3a9,	// (0x00073d0c) area_vitu2_query_pane_t6

0x0006,

0xf9c4,	// (0x00079327) area_vitu2_query_pane_t_ParamLimits

0xf9c4,	// (0x00079327) area_vitu2_query_pane_t

0x5b82,	// (0x0006f4e5) bg_button_pane_cp018

0x5b8e,	// (0x0006f4f1) bg_button_pane_cp021

0x5b9a,	// (0x0006f4fd) bg_button_pane_cp022

0x5bb9,	// (0x0006f51c) input_focus_pane_cp09

0xb96f,	// (0x000752d2) aid_size_touch_mv_arrow_left

0xb99a,	// (0x000752fd) aid_size_touch_mv_arrow_right

0xdcfe,	// (0x00077661) main_cset_slider_pane_g16_ParamLimits

0xdcfe,	// (0x00077661) main_cset_slider_pane_g16

0xdd0a,	// (0x0007766d) main_cset_slider_pane_g17_ParamLimits

0xdd0a,	// (0x0007766d) main_cset_slider_pane_g17

0x5aca,	// (0x0006f42d) cell_cam4_burst_pane_g1_ParamLimits

0xa2cd,	// (0x00073c30) compa_mode_pane

0x55a7,	// (0x0006ef0a) popup_vtel_slider_window_g3_ParamLimits

0x55a7,	// (0x0006ef0a) popup_vtel_slider_window_g3

0x55be,	// (0x0006ef21) popup_vtel_slider_window_g4_ParamLimits

0x55be,	// (0x0006ef21) popup_vtel_slider_window_g4

0x55d5,	// (0x0006ef38) popup_vtel_slider_window_t1_ParamLimits

0x55d5,	// (0x0006ef38) popup_vtel_slider_window_t1

0x9093,	// (0x000729f6) main_cl_pane

0x9234,	// (0x00072b97) popup_imed_adjust2_window_ParamLimits

0xbc15,	// (0x00075578) bg_tb_trans_pane_cp05_ParamLimits

0xd7b3,	// (0x00077116) popup_imed_adjust2_window_g1_ParamLimits

0xd7c2,	// (0x00077125) popup_imed_adjust2_window_g2_ParamLimits

0xd7c2,	// (0x00077125) popup_imed_adjust2_window_g2

0xd7ce,	// (0x00077131) popup_imed_adjust2_window_g3_ParamLimits

0xd7ce,	// (0x00077131) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x0007909d) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x0007909d) popup_imed_adjust2_window_g

0xd7da,	// (0x0007713d) popup_imed_adjust2_window_t1_ParamLimits

0xd7f2,	// (0x00077155) slider_imed_adjust_pane_ParamLimits

0xd806,	// (0x00077169) slider_imed_adjust_pane_g1_ParamLimits

0xd816,	// (0x00077179) slider_imed_adjust_pane_g2_ParamLimits

0xd826,	// (0x00077189) slider_imed_adjust_pane_g3_ParamLimits

0xd837,	// (0x0007719a) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x000790a4) slider_imed_adjust_pane_g_ParamLimits

0x4abf,	// (0x0006e422) aid_touch_area_cam4_ParamLimits

0x4abf,	// (0x0006e422) aid_touch_area_cam4

0x9611,	// (0x00072f74) battery_pane_cp01

0x4b8e,	// (0x0006e4f1) main_camera4_pane_g6_ParamLimits

0x4b8e,	// (0x0006e4f1) main_camera4_pane_g6

0x4bb8,	// (0x0006e51b) main_camera4_pane_t2_ParamLimits

0x4bb8,	// (0x0006e51b) main_camera4_pane_t2

0x0001,

0xf843,	// (0x000791a6) main_camera4_pane_t_ParamLimits

0xf843,	// (0x000791a6) main_camera4_pane_t

0x4bed,	// (0x0006e550) aid_touch_area_vid4_ParamLimits

0x4bed,	// (0x0006e550) aid_touch_area_vid4

0x4c41,	// (0x0006e5a4) main_video4_pane_g5_ParamLimits

0x4c41,	// (0x0006e5a4) main_video4_pane_g5

0x4c66,	// (0x0006e5c9) vid4_progress_pane_ParamLimits

0x4c66,	// (0x0006e5c9) vid4_progress_pane

0xdd16,	// (0x00077679) main_cset_slider_pane_g18_ParamLimits

0xdd16,	// (0x00077679) main_cset_slider_pane_g18

0xdef8,	// (0x0007785b) cell_cam4_burst_pane_g2_ParamLimits

0xdef8,	// (0x0007785b) cell_cam4_burst_pane_g2

0x0001,

0xf998,	// (0x000792fb) cell_cam4_burst_pane_g_ParamLimits

0xf998,	// (0x000792fb) cell_cam4_burst_pane_g

0xaf37,	// (0x0007489a) bg_cl_pane_ParamLimits

0xaf37,	// (0x0007489a) bg_cl_pane

0x5bc9,	// (0x0006f52c) cl_header_pane_ParamLimits

0x5bc9,	// (0x0006f52c) cl_header_pane

0x5bdd,	// (0x0006f540) cl_listscroll_pane_ParamLimits

0x5bdd,	// (0x0006f540) cl_listscroll_pane

0xe03a,	// (0x0007799d) bg_cl_pane_g1

0xe042,	// (0x000779a5) bg_cl_pane_g2

0xe04a,	// (0x000779ad) bg_cl_pane_g3

0xe052,	// (0x000779b5) bg_cl_pane_g4

0xe05a,	// (0x000779bd) bg_cl_pane_g5

0xe062,	// (0x000779c5) bg_cl_pane_g6

0xe06a,	// (0x000779cd) bg_cl_pane_g7

0xe072,	// (0x000779d5) bg_cl_pane_g8

0xe07a,	// (0x000779dd) bg_cl_pane_g9

0x0008,

0xf9d3,	// (0x00079336) bg_cl_pane_g

0x5bed,	// (0x0006f550) aid_height_cl_leading_ParamLimits

0x5bed,	// (0x0006f550) aid_height_cl_leading

0x5bf9,	// (0x0006f55c) aid_height_cl_text_ParamLimits

0x5bf9,	// (0x0006f55c) aid_height_cl_text

0xa32e,	// (0x00073c91) bg_cl_header_pane_ParamLimits

0xa32e,	// (0x00073c91) bg_cl_header_pane

0x5c18,	// (0x0006f57b) cl_header_pane_g1_ParamLimits

0x5c18,	// (0x0006f57b) cl_header_pane_g1

0x5c2e,	// (0x0006f591) cl_header_pane_t1_ParamLimits

0x5c2e,	// (0x0006f591) cl_header_pane_t1

0xe082,	// (0x000779e5) cl_list_pane

0xdcd1,	// (0x00077634) hc_scroll_pane_cp01

0xb322,	// (0x00074c85) bg_cl_header_pane_g1

0xdba5,	// (0x00077508) bg_cl_header_pane_g2

0xb342,	// (0x00074ca5) bg_cl_header_pane_g3

0xdbb5,	// (0x00077518) bg_cl_header_pane_g4

0xdbad,	// (0x00077510) bg_cl_header_pane_g5

0xddfd,	// (0x00077760) bg_cl_header_pane_g6

0xdbcd,	// (0x00077530) bg_cl_header_pane_g7

0xdbd5,	// (0x00077538) bg_cl_header_pane_g8

0xdbc5,	// (0x00077528) bg_cl_header_pane_g9

0x0008,

0xf9e6,	// (0x00079349) bg_cl_header_pane_g

0x5c47,	// (0x0006f5aa) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5c47,	// (0x0006f5aa) hc_cl_list_double_graphic_heading_pane

0x5c58,	// (0x0006f5bb) hc_cl_list_single_graphic_pane_ParamLimits

0x5c58,	// (0x0006f5bb) hc_cl_list_single_graphic_pane

0x5c71,	// (0x0006f5d4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5c71,	// (0x0006f5d4) hc_cl_list_single_graphic_pane_g1

0x5c7d,	// (0x0006f5e0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5c7d,	// (0x0006f5e0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f9,	// (0x0007935c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f9,	// (0x0007935c) hc_cl_list_single_graphic_pane_g

0x5c91,	// (0x0006f5f4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5c91,	// (0x0006f5f4) hc_cl_list_single_graphic_pane_t1

0x5c71,	// (0x0006f5d4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5c71,	// (0x0006f5d4) hc_cl_list_double_graphic_heading_pane_g1

0x5ca6,	// (0x0006f609) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5ca6,	// (0x0006f609) hc_cl_list_double_graphic_heading_pane_g2

0x5cba,	// (0x0006f61d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5cba,	// (0x0006f61d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fe,	// (0x00079361) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fe,	// (0x00079361) hc_cl_list_double_graphic_heading_pane_g

0x5cce,	// (0x0006f631) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5cce,	// (0x0006f631) hc_cl_list_double_graphic_heading_pane_t1

0x5ce3,	// (0x0006f646) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5ce3,	// (0x0006f646) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa05,	// (0x00079368) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa05,	// (0x00079368) hc_cl_list_double_graphic_heading_pane_t

0x9773,	// (0x000730d6) vid4_progress_pane_g1

0x9783,	// (0x000730e6) vid4_progress_pane_g2

0x5cf8,	// (0x0006f65b) vid4_progress_pane_g3

0x9793,	// (0x000730f6) vid4_progress_pane_g4

0x0004,

0xfa0a,	// (0x0007936d) vid4_progress_pane_g

0x5d0a,	// (0x0006f66d) vid4_progress_pane_t1

0x97ab,	// (0x0007310e) vid4_progress_pane_t2

0x0002,

0xfa15,	// (0x00079378) vid4_progress_pane_t

0x5d20,	// (0x0006f683) wait_bar_pane_cp07

0xd0db,	// (0x00076a3e) blid_firmament_pane_ParamLimits

0xd11e,	// (0x00076a81) popup_blid_sat_info2_window_g1

0xd142,	// (0x00076aa5) popup_blid_sat_info2_window_t3

0xd150,	// (0x00076ab3) popup_blid_sat_info2_window_t4

0xd15e,	// (0x00076ac1) popup_blid_sat_info2_window_t5

0xd16c,	// (0x00076acf) popup_blid_sat_info2_window_t6

0xd17c,	// (0x00076adf) popup_blid_sat_info2_window_t7

0xd18a,	// (0x00076aed) popup_blid_sat_info2_window_t8

0xd198,	// (0x00076afb) popup_blid_sat_info2_window_t9

0xd1a6,	// (0x00076b09) popup_blid_sat_info2_window_t10

0xd267,	// (0x00076bca) aid_firma_cardinal_ParamLimits

0xd27b,	// (0x00076bde) blid_firmament_pane_t1_ParamLimits

0xd292,	// (0x00076bf5) blid_firmament_pane_t2_ParamLimits

0xd2a9,	// (0x00076c0c) blid_firmament_pane_t3_ParamLimits

0xd2c0,	// (0x00076c23) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x00078f96) blid_firmament_pane_t_ParamLimits

0xd2d7,	// (0x00076c3a) blid_sat_info_pane_ParamLimits

0x9085,	// (0x000729e8) main_cam_set_pane_ParamLimits

0x424d,	// (0x0006dbb0) aid_size_cell_colour_35_ParamLimits

0x426d,	// (0x0006dbd0) aid_size_cell_colour_112_ParamLimits

0x428d,	// (0x0006dbf0) aid_size_cell_effect_ParamLimits

0xbc15,	// (0x00075578) bg_tb_trans_pane_cp02_ParamLimits

0xb58a,	// (0x00074eed) heading_imed_pane_ParamLimits

0x42ad,	// (0x0006dc10) listscroll_imed_pane_ParamLimits

0xc58e,	// (0x00075ef1) popup_call2_audio_first_window_g5_ParamLimits

0xc58e,	// (0x00075ef1) popup_call2_audio_first_window_g5

0x46d9,	// (0x0006e03c) aid_size_touch_image3_arrow_left_ParamLimits

0x46d9,	// (0x0006e03c) aid_size_touch_image3_arrow_left

0x4705,	// (0x0006e068) aid_size_touch_image3_arrow_right_ParamLimits

0x4705,	// (0x0006e068) aid_size_touch_image3_arrow_right

0x97c0,	// (0x00073123) vid4_progress_pane_t3

0x4450,	// (0x0006ddb3) main_hwr_training_symbol_option_pane_ParamLimits

0x4450,	// (0x0006ddb3) main_hwr_training_symbol_option_pane

0xda0f,	// (0x00077372) popup_hwr_training_preview_window_ParamLimits

0xda0f,	// (0x00077372) popup_hwr_training_preview_window

0x4470,	// (0x0006ddd3) hwr_training_navi_pane_g5_ParamLimits

0x4470,	// (0x0006ddd3) hwr_training_navi_pane_g5

0xdb93,	// (0x000774f6) popup_char_count_window

0x9085,	// (0x000729e8) bg_popup_sub_pane_cp20_ParamLimits

0x56e5,	// (0x0006f048) list_vitu2_match_list_pane_ParamLimits

0x56f1,	// (0x0006f054) vitu2_page_scroll_pane_ParamLimits

0x56f1,	// (0x0006f054) vitu2_page_scroll_pane

0xe08b,	// (0x000779ee) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe08b,	// (0x000779ee) list_single_hwr_training_symbol_option_pane

0xe09e,	// (0x00077a01) list_single_hwr_training_symbol_option_pane_g1

0xe0a6,	// (0x00077a09) list_single_hwr_training_symbol_option_pane_t1

0xe0b4,	// (0x00077a17) bg_button_pane_cp023

0xe0bd,	// (0x00077a20) bg_button_pane_cp024

0xe0f0,	// (0x00077a53) vitu2_page_scroll_pane_g1

0xe0f8,	// (0x00077a5b) vitu2_page_scroll_pane_g2

0x0001,

0xfa1c,	// (0x0007937f) vitu2_page_scroll_pane_g

0xe100,	// (0x00077a63) vitu2_page_scroll_pane_t1

0xafae,	// (0x00074911) popup_char_count_window_g1

0xe10f,	// (0x00077a72) popup_char_count_window_g2

0xd8ef,	// (0x00077252) popup_char_count_window_g3

0x0002,

0xfa21,	// (0x00079384) popup_char_count_window_g

0xe118,	// (0x00077a7b) popup_char_count_window_t1

0x9093,	// (0x000729f6) main_vded2_pane

0xd79f,	// (0x00077102) aid_size_cell_imed_line

0xd7a9,	// (0x0007710c) grid_imed_line_width_pane

0x96c1,	// (0x00073024) vid4_indicators_pane_g4

0xe126,	// (0x00077a89) cell_imed_line_width_pane_ParamLimits

0xe126,	// (0x00077a89) cell_imed_line_width_pane

0xe13a,	// (0x00077a9d) cell_imed_line_width_pane_g1

0xe143,	// (0x00077aa6) cell_imed_line_width_pane_g2

0x0001,

0xfa28,	// (0x0007938b) cell_imed_line_width_pane_g

0x5d45,	// (0x0006f6a8) main_vded2_pane_g1_ParamLimits

0x5d45,	// (0x0006f6a8) main_vded2_pane_g1

0x5d5b,	// (0x0006f6be) main_vded2_pane_g2_ParamLimits

0x5d5b,	// (0x0006f6be) main_vded2_pane_g2

0x0001,

0xfa2d,	// (0x00079390) main_vded2_pane_g_ParamLimits

0xfa2d,	// (0x00079390) main_vded2_pane_g

0x5d6d,	// (0x0006f6d0) vded2_slider_pane_ParamLimits

0x5d6d,	// (0x0006f6d0) vded2_slider_pane

0x5d7d,	// (0x0006f6e0) aid_size_touch_vded2_end

0x5d87,	// (0x0006f6ea) aid_size_touch_vded2_playhead

0xe14b,	// (0x00077aae) aid_size_touch_vded2_start

0xe153,	// (0x00077ab6) vded2_slider_bg_pane

0xe15c,	// (0x00077abf) vded2_slider_pane_g1

0xe165,	// (0x00077ac8) vded2_slider_pane_g2

0x5d91,	// (0x0006f6f4) vded2_slider_pane_g3

0x0002,

0xfa32,	// (0x00079395) vded2_slider_pane_g

0xe16d,	// (0x00077ad0) vded2_slider_bg_pane_g1

0xe176,	// (0x00077ad9) vded2_slider_bg_pane_g2

0xe17f,	// (0x00077ae2) vded2_slider_bg_pane_g3

0x0002,

0xfa39,	// (0x0007939c) vded2_slider_bg_pane_g

0x2801,	// (0x0006c164) aid_postcard_touch_down_pane_ParamLimits

0x2801,	// (0x0006c164) aid_postcard_touch_down_pane

0x2817,	// (0x0006c17a) aid_postcard_touch_up_pane_ParamLimits

0x2817,	// (0x0006c17a) aid_postcard_touch_up_pane

0x9093,	// (0x000729f6) main_blid2_pane

0x921a,	// (0x00072b7d) popup_blid2_search_window

0xa2cd,	// (0x00073c30) blid2_gps_pane

0xa2cd,	// (0x00073c30) blid2_navig_pane

0xa2cd,	// (0x00073c30) blid2_search_pane

0xa2cd,	// (0x00073c30) blid2_tripm_pane

0x5d9c,	// (0x0006f6ff) blid2_search_pane_g1_ParamLimits

0x5d9c,	// (0x0006f6ff) blid2_search_pane_g1

0x5db4,	// (0x0006f717) blid2_search_pane_t1_ParamLimits

0x5db4,	// (0x0006f717) blid2_search_pane_t1

0x5dc6,	// (0x0006f729) aid_size_cell_blid2_gps_ParamLimits

0x5dc6,	// (0x0006f729) aid_size_cell_blid2_gps

0x5dde,	// (0x0006f741) blid2_gps_pane_g1_ParamLimits

0x5dde,	// (0x0006f741) blid2_gps_pane_g1

0x5df2,	// (0x0006f755) grid_blid2_satellite_pane_ParamLimits

0x5df2,	// (0x0006f755) grid_blid2_satellite_pane

0x5e0c,	// (0x0006f76f) blid2_navig_pane_g1_ParamLimits

0x5e0c,	// (0x0006f76f) blid2_navig_pane_g1

0x5e18,	// (0x0006f77b) blid2_navig_pane_t1_ParamLimits

0x5e18,	// (0x0006f77b) blid2_navig_pane_t1

0x5e33,	// (0x0006f796) blid2_navig_pane_t2_ParamLimits

0x5e33,	// (0x0006f796) blid2_navig_pane_t2

0x0001,

0xfa40,	// (0x000793a3) blid2_navig_pane_t_ParamLimits

0xfa40,	// (0x000793a3) blid2_navig_pane_t

0x5e4e,	// (0x0006f7b1) blid2_navig_ring_pane_ParamLimits

0x5e4e,	// (0x0006f7b1) blid2_navig_ring_pane

0x5e67,	// (0x0006f7ca) blid2_speed_pane_ParamLimits

0x5e67,	// (0x0006f7ca) blid2_speed_pane

0x5e73,	// (0x0006f7d6) blid2_tripm_pane_g1_ParamLimits

0x5e73,	// (0x0006f7d6) blid2_tripm_pane_g1

0x5e8e,	// (0x0006f7f1) blid2_tripm_pane_g2_ParamLimits

0x5e8e,	// (0x0006f7f1) blid2_tripm_pane_g2

0x5ea2,	// (0x0006f805) blid2_tripm_pane_g3_ParamLimits

0x5ea2,	// (0x0006f805) blid2_tripm_pane_g3

0x5eb6,	// (0x0006f819) blid2_tripm_pane_g4_ParamLimits

0x5eb6,	// (0x0006f819) blid2_tripm_pane_g4

0x5eca,	// (0x0006f82d) blid2_tripm_pane_g5_ParamLimits

0x5eca,	// (0x0006f82d) blid2_tripm_pane_g5

0x0005,

0xfa45,	// (0x000793a8) blid2_tripm_pane_g_ParamLimits

0xfa45,	// (0x000793a8) blid2_tripm_pane_g

0x5ef0,	// (0x0006f853) blid2_tripm_pane_t1_ParamLimits

0x5ef0,	// (0x0006f853) blid2_tripm_pane_t1

0x5f0b,	// (0x0006f86e) blid2_tripm_pane_t2_ParamLimits

0x5f0b,	// (0x0006f86e) blid2_tripm_pane_t2

0x5f24,	// (0x0006f887) blid2_tripm_pane_t3_ParamLimits

0x5f24,	// (0x0006f887) blid2_tripm_pane_t3

0x0003,

0xfa52,	// (0x000793b5) blid2_tripm_pane_t_ParamLimits

0xfa52,	// (0x000793b5) blid2_tripm_pane_t

0x5f6b,	// (0x0006f8ce) cell_blid2_satellite_pane_ParamLimits

0x5f6b,	// (0x0006f8ce) cell_blid2_satellite_pane

0x5f89,	// (0x0006f8ec) cell_blid2_satellite_pane_g1

0xe188,	// (0x00077aeb) cell_blid2_satellite_pane_t1

0xb128,	// (0x00074a8b) blid2_speed_pane_g1

0xe196,	// (0x00077af9) blid2_speed_pane_t1

0xe1a4,	// (0x00077b07) blid2_speed_pane_t2

0x0001,

0x0183,	// (0x00069ae6) blid2_speed_pane_t

0xb128,	// (0x00074a8b) blid2_navig_ring_pane_g1

0x5f92,	// (0x0006f8f5) blid2_navig_ring_pane_g2

0x5f9a,	// (0x0006f8fd) blid2_navig_ring_pane_g3

0x5fa2,	// (0x0006f905) blid2_navig_ring_pane_g4

0x5faa,	// (0x0006f90d) blid2_navig_ring_pane_g5

0x0004,

0xfa5b,	// (0x000793be) blid2_navig_ring_pane_g

0xa2cd,	// (0x00073c30) bg_popup_window_pane_cp011

0xe1b2,	// (0x00077b15) popup_blid2_search_window_g1

0xe1ba,	// (0x00077b1d) popup_blid2_search_window_t1

0xe1c8,	// (0x00077b2b) popup_blid2_search_window_t2

0x0001,

0x0193,	// (0x00069af6) popup_blid2_search_window_t

0xb228,	// (0x00074b8b) main_browser_pane_g1

0xaf37,	// (0x0007489a) main_browser_pane_ParamLimits

0x9085,	// (0x000729e8) bg_button_pane_cp011_ParamLimits

0x4f98,	// (0x0006e8fb) cell_vitu2_function_pane_g1_ParamLimits

0xbc15,	// (0x00075578) bg_popup_sub_pane_cp22_ParamLimits

0x586f,	// (0x0006f1d2) input_focus_pane_cp08_ParamLimits

0x588a,	// (0x0006f1ed) popup_vitu2_query_button_pane_ParamLimits

0x588a,	// (0x0006f1ed) popup_vitu2_query_button_pane

0x5899,	// (0x0006f1fc) popup_vitu2_query_input_button_pane

0xde38,	// (0x0007779b) popup_vitu2_query_window_g1_ParamLimits

0x58a1,	// (0x0006f204) popup_vitu2_query_window_g2_ParamLimits

0xf96c,	// (0x000792cf) popup_vitu2_query_window_g_ParamLimits

0xa2cd,	// (0x00073c30) bg_button_pane_cp026

0x5fb2,	// (0x0006f915) popup_vitu2_query_input_button_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp025

0xe1d6,	// (0x00077b39) popup_vitu2_query_button_pane_t1

0x373e,	// (0x0006d0a1) main_mp3_pane_t6

0x374c,	// (0x0006d0af) popup_slider_window_cp01

0x962d,	// (0x00072f90) cam4_battery_pane

0x9680,	// (0x00072fe3) cam4_battery_pane_cp02

0x976b,	// (0x000730ce) cam4_battery_pane_cp01

0x976b,	// (0x000730ce) cam4_battery_pane_cp03

0xde4c,	// (0x000777af) cam4_battery_pane_g1

0xb128,	// (0x00074a8b) cam4_battery_pane_g2

0x0001,

0xfa66,	// (0x000793c9) cam4_battery_pane_g

0xd1b4,	// (0x00076b17) popup_blid_sat_info2_window_t11

0xb96f,	// (0x000752d2) aid_size_touch_mv_arrow_left_ParamLimits

0xb99a,	// (0x000752fd) aid_size_touch_mv_arrow_right_ParamLimits

0xb9f8,	// (0x0007535b) navi_pane_g1_ParamLimits

0xba04,	// (0x00075367) navi_pane_g2_ParamLimits

0xba32,	// (0x00075395) navi_pane_g3_ParamLimits

0xf334,	// (0x00078c97) navi_pane_g_ParamLimits

0x24c3,	// (0x0006be26) navi_pane_mv_t1_ParamLimits

0x42b9,	// (0x0006dc1c) grid_imed_effect_pane_ParamLimits

0x13f6,	// (0x0006ad59) aid_placing_vt_slider_lsc

0xb177,	// (0x00074ada) aid_placing_vt_slider_prt

0xa32e,	// (0x00073c91) bg_tb_trans_pane_cp01_ParamLimits

0xd452,	// (0x00076db5) popup_image_details_window_g1_ParamLimits

0xd465,	// (0x00076dc8) popup_image_details_window_g2_ParamLimits

0xd47a,	// (0x00076ddd) popup_image_details_window_g3_ParamLimits

0xd47a,	// (0x00076ddd) popup_image_details_window_g3

0xf673,	// (0x00078fd6) popup_image_details_window_g_ParamLimits

0xd48e,	// (0x00076df1) popup_image_details_window_t1_ParamLimits

0xd4a0,	// (0x00076e03) popup_image_details_window_t2_ParamLimits

0xd4b9,	// (0x00076e1c) popup_image_details_window_t3_ParamLimits

0xd4cd,	// (0x00076e30) popup_image_details_window_t4_ParamLimits

0xd4e8,	// (0x00076e4b) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x00078fdd) popup_image_details_window_t_ParamLimits

0x5c05,	// (0x0006f568) cl_header_name_pane_ParamLimits

0x5c05,	// (0x0006f568) cl_header_name_pane

0x5fba,	// (0x0006f91d) cl_header_name_pane_t1_ParamLimits

0x5fba,	// (0x0006f91d) cl_header_name_pane_t1

0x5fdb,	// (0x0006f93e) cl_header_name_pane_t2_ParamLimits

0x5fdb,	// (0x0006f93e) cl_header_name_pane_t2

0x601d,	// (0x0006f980) cl_header_name_pane_t3_ParamLimits

0x601d,	// (0x0006f980) cl_header_name_pane_t3

0x0002,

0xfa6b,	// (0x000793ce) cl_header_name_pane_t_ParamLimits

0xfa6b,	// (0x000793ce) cl_header_name_pane_t

0xbac1,	// (0x00075424) navi_pane_mv_g2_ParamLimits

0xdb7b,	// (0x000774de) field_vitu2_entry_pane_g1_ParamLimits

0xdb87,	// (0x000774ea) field_vitu2_entry_pane_g2_ParamLimits

0xbbdf,	// (0x00075542) field_vitu2_entry_pane_g3_ParamLimits

0xbbdf,	// (0x00075542) field_vitu2_entry_pane_g3

0xf875,	// (0x000791d8) field_vitu2_entry_pane_g_ParamLimits

0x4f14,	// (0x0006e877) cell_vitu2_itu_pane_g1_ParamLimits

0x4f2c,	// (0x0006e88f) cell_vitu2_itu_pane_g2_ParamLimits

0x4f2c,	// (0x0006e88f) cell_vitu2_itu_pane_g2

0x0001,

0xf881,	// (0x000791e4) cell_vitu2_itu_pane_g_ParamLimits

0xf881,	// (0x000791e4) cell_vitu2_itu_pane_g

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp05_ParamLimits

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp05

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp03

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp04

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp10_ParamLimits

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp10

0x5ba9,	// (0x0006f50c) bg_vkb2_func_pane_cp08

0x5b82,	// (0x0006f4e5) bg_vkb2_func_pane_cp06

0x5b8e,	// (0x0006f4f1) bg_vkb2_func_pane_cp07

0xe0c6,	// (0x00077a29) bg_vkb2_func_pane_cp11_ParamLimits

0xe0c6,	// (0x00077a29) bg_vkb2_func_pane_cp11

0xe0db,	// (0x00077a3e) bg_vkb2_func_pane_cp12_ParamLimits

0xe0db,	// (0x00077a3e) bg_vkb2_func_pane_cp12

0xa2cd,	// (0x00073c30) bg_vkb2_func_pane_cp09

0xdba5,	// (0x00077508) bg_vkb2_func_pane_g1

0xb342,	// (0x00074ca5) bg_vkb2_func_pane_g2

0xdbad,	// (0x00077510) bg_vkb2_func_pane_g3

0xdbb5,	// (0x00077518) bg_vkb2_func_pane_g4

0xddfd,	// (0x00077760) bg_vkb2_func_pane_g5

0xdbcd,	// (0x00077530) bg_vkb2_func_pane_g6

0xdbd5,	// (0x00077538) bg_vkb2_func_pane_g7

0xdbc5,	// (0x00077528) bg_vkb2_func_pane_g8

0xb322,	// (0x00074c85) bg_vkb2_func_pane_g9

0x0008,

0xfa72,	// (0x000793d5) bg_vkb2_func_pane_g

0x5ede,	// (0x0006f841) blid2_tripm_pane_g6_ParamLimits

0x5ede,	// (0x0006f841) blid2_tripm_pane_g6

0xdacd,	// (0x00077430) mp4_progress_pane_g1

0x5f57,	// (0x0006f8ba) blid2_tripm_values_pane_ParamLimits

0x5f57,	// (0x0006f8ba) blid2_tripm_values_pane

0x604e,	// (0x0006f9b1) blid2_tripm_values_pane_t1

0x605c,	// (0x0006f9bf) blid2_tripm_values_pane_t2

0x606a,	// (0x0006f9cd) blid2_tripm_values_pane_t3

0x6078,	// (0x0006f9db) blid2_tripm_values_pane_t4

0x6086,	// (0x0006f9e9) blid2_tripm_values_pane_t5

0x6094,	// (0x0006f9f7) blid2_tripm_values_pane_t6

0x60a2,	// (0x0006fa05) blid2_tripm_values_pane_t7

0x60b0,	// (0x0006fa13) blid2_tripm_values_pane_t8

0x60be,	// (0x0006fa21) blid2_tripm_values_pane_t9

0x0008,

0xfa85,	// (0x000793e8) blid2_tripm_values_pane_t

0x1438,	// (0x0006ad9b) call_video_pane_t1_ParamLimits

0x1456,	// (0x0006adb9) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x00078b45) call_video_pane_t_ParamLimits

0x277f,	// (0x0006c0e2) msg_header_pane_g1_ParamLimits

0xbcca,	// (0x0007562d) msg_header_pane_g2_ParamLimits

0xbcca,	// (0x0007562d) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x00078d3a) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x00078d3a) msg_header_pane_g

0xaf37,	// (0x0007489a) main_clock2_pane_ParamLimits

0x3fba,	// (0x0006d91d) grid_clock2_toolbar_pane_ParamLimits

0x3fba,	// (0x0006d91d) grid_clock2_toolbar_pane

0x3fba,	// (0x0006d91d) listscroll_clock2_pane_ParamLimits

0x3fba,	// (0x0006d91d) listscroll_clock2_pane

0x409e,	// (0x0006da01) main_clock2_pane_t3_ParamLimits

0x409e,	// (0x0006da01) main_clock2_pane_t3

0x40c2,	// (0x0006da25) main_clock2_pane_t4_ParamLimits

0x40c2,	// (0x0006da25) main_clock2_pane_t4

0xe1e4,	// (0x00077b47) cell_clock2_toolbar_pane

0xe1ec,	// (0x00077b4f) cell_clock2_toolbar_pane_cp01

0xe1ec,	// (0x00077b4f) cell_clock2_toolbar_pane_cp02

0xe1f4,	// (0x00077b57) cell_clock2_toolbar_pane_cp03

0xe1fc,	// (0x00077b5f) list_clock2_pane

0xb8f4,	// (0x00075257) scroll_pane_cp10

0xe204,	// (0x00077b67) list_single_clock2_pane_ParamLimits

0xe204,	// (0x00077b67) list_single_clock2_pane

0xb0f2,	// (0x00074a55) list_highlight_pane_cp08

0xe211,	// (0x00077b74) list_single_clock2_pane_t1

0xe21f,	// (0x00077b82) list_single_clock2_pane_t2

0x0001,

0x01b7,	// (0x00069b1a) list_single_clock2_pane_t

0xa2cd,	// (0x00073c30) bg_button_pane_cp10

0xe22d,	// (0x00077b90) cell_clock2_toolbar_pane_g1

0x278d,	// (0x0006c0f0) aid_main_viewer_pane_g1_ParamLimits

0x278d,	// (0x0006c0f0) aid_main_viewer_pane_g1

0x279b,	// (0x0006c0fe) aid_main_viewer_pane_g2_ParamLimits

0x279b,	// (0x0006c0fe) aid_main_viewer_pane_g2

0x27a9,	// (0x0006c10c) aid_main_viewer_pane_g3_ParamLimits

0x27a9,	// (0x0006c10c) aid_main_viewer_pane_g3

0x27b8,	// (0x0006c11b) aid_main_viewer_pane_g4_ParamLimits

0x27b8,	// (0x0006c11b) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x00078d4b) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x00078d4b) aid_main_viewer_pane_g

0x3101,	// (0x0006ca64) main_calc_pane_ParamLimits

0x3127,	// (0x0006ca8a) main_dialer2_pane_ParamLimits

0x9093,	// (0x000729f6) main_cam6_pane

0x9093,	// (0x000729f6) main_vid6_pane

0x3fc6,	// (0x0006d929) listscroll_gen_pane_cp06_ParamLimits

0x3fc6,	// (0x0006d929) listscroll_gen_pane_cp06

0x40e5,	// (0x0006da48) main_clock2_pane_t5_ParamLimits

0x40e5,	// (0x0006da48) main_clock2_pane_t5

0x4143,	// (0x0006daa6) aid_call2_pane_cp10_ParamLimits

0x4155,	// (0x0006dab8) aid_call_pane_cp10_ParamLimits

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4167,	// (0x0006daca) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4167,	// (0x0006daca) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb963,	// (0x000752c6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x00079092) popup_clock_analogue_window_cp10_g_ParamLimits

0x417d,	// (0x0006dae0) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4686,	// (0x0006dfe9) cell_dialer2_keypad_pane_g2_ParamLimits

0x4686,	// (0x0006dfe9) cell_dialer2_keypad_pane_g2

0x0001,

0xf814,	// (0x00079177) cell_dialer2_keypad_pane_g_ParamLimits

0xf814,	// (0x00079177) cell_dialer2_keypad_pane_g

0x46a2,	// (0x0006e005) cell_dialer2_keypad_pane_t1

0x52b3,	// (0x0006ec16) main_cset_text2_pane_ParamLimits

0x52b3,	// (0x0006ec16) main_cset_text2_pane

0xe02e,	// (0x00077991) area_vitu2_query_pane_g1_ParamLimits

0x5b23,	// (0x0006f486) area_vitu2_query_pane_g2_ParamLimits

0xf9bf,	// (0x00079322) area_vitu2_query_pane_g_ParamLimits

0xa3d1,	// (0x00073d34) area_vitu2_query_pane_t7_ParamLimits

0xa3d1,	// (0x00073d34) area_vitu2_query_pane_t7

0x5b82,	// (0x0006f4e5) bg_button_pane_cp018_ParamLimits

0x5b8e,	// (0x0006f4f1) bg_button_pane_cp021_ParamLimits

0x5b9a,	// (0x0006f4fd) bg_button_pane_cp022_ParamLimits

0x5ba9,	// (0x0006f50c) bg_vkb2_func_pane_cp08_ParamLimits

0x5b82,	// (0x0006f4e5) bg_vkb2_func_pane_cp06_ParamLimits

0x5b8e,	// (0x0006f4f1) bg_vkb2_func_pane_cp07_ParamLimits

0x5bb9,	// (0x0006f51c) input_focus_pane_cp09_ParamLimits

0x60cc,	// (0x0006fa2f) cam6_autofocus_pane_ParamLimits

0x60cc,	// (0x0006fa2f) cam6_autofocus_pane

0x60d8,	// (0x0006fa3b) cam6_image_uncrop_pane_ParamLimits

0x60d8,	// (0x0006fa3b) cam6_image_uncrop_pane

0x60e8,	// (0x0006fa4b) cam6_indi_pane_ParamLimits

0x60e8,	// (0x0006fa4b) cam6_indi_pane

0x60fe,	// (0x0006fa61) cam6_mode_pane_ParamLimits

0x60fe,	// (0x0006fa61) cam6_mode_pane

0x6110,	// (0x0006fa73) cam6_timer_pane_ParamLimits

0x6110,	// (0x0006fa73) cam6_timer_pane

0x611c,	// (0x0006fa7f) cam6_zoom_pane_ParamLimits

0x611c,	// (0x0006fa7f) cam6_zoom_pane

0x6129,	// (0x0006fa8c) cam6_mode_pane_g1_ParamLimits

0x6129,	// (0x0006fa8c) cam6_mode_pane_g1

0x6139,	// (0x0006fa9c) cam6_mode_pane_g2_ParamLimits

0x6139,	// (0x0006fa9c) cam6_mode_pane_g2

0x6149,	// (0x0006faac) cam6_mode_pane_g3_ParamLimits

0x6149,	// (0x0006faac) cam6_mode_pane_g3

0x6159,	// (0x0006fabc) cam6_mode_pane_g4_ParamLimits

0x6159,	// (0x0006fabc) cam6_mode_pane_g4

0x0003,

0xfa98,	// (0x000793fb) cam6_mode_pane_g_ParamLimits

0xfa98,	// (0x000793fb) cam6_mode_pane_g

0xd8e1,	// (0x00077244) bg_tb_trans_pane_cp08_ParamLimits

0xd8e1,	// (0x00077244) bg_tb_trans_pane_cp08

0xe235,	// (0x00077b98) cam6_battery_pane_ParamLimits

0xe235,	// (0x00077b98) cam6_battery_pane

0xe24b,	// (0x00077bae) cam6_indi_pane_g1_ParamLimits

0xe24b,	// (0x00077bae) cam6_indi_pane_g1

0xe25d,	// (0x00077bc0) cam6_indi_pane_g2_ParamLimits

0xe25d,	// (0x00077bc0) cam6_indi_pane_g2

0xe26f,	// (0x00077bd2) cam6_indi_pane_g3_ParamLimits

0xe26f,	// (0x00077bd2) cam6_indi_pane_g3

0x0002,

0x01c5,	// (0x00069b28) cam6_indi_pane_g_ParamLimits

0x01c5,	// (0x00069b28) cam6_indi_pane_g

0xe281,	// (0x00077be4) cam6_indi_pane_t1_ParamLimits

0xe281,	// (0x00077be4) cam6_indi_pane_t1

0x4cb4,	// (0x0006e617) cam6_autofocus_pane_g1

0x4cac,	// (0x0006e60f) cam6_autofocus_pane_g2

0x4cc4,	// (0x0006e627) cam6_autofocus_pane_g3

0x4cbc,	// (0x0006e61f) cam6_autofocus_pane_g4

0x0003,

0xfaa1,	// (0x00079404) cam6_autofocus_pane_g

0xe2a7,	// (0x00077c0a) cam6_timer_pane_g1

0xe2af,	// (0x00077c12) cam6_timer_pane_t1

0xe2bd,	// (0x00077c20) cam6_zoom_cont_pane

0xe2c5,	// (0x00077c28) cam6_zoom_pane_g1

0xe2ce,	// (0x00077c31) cam6_zoom_pane_g2

0x6169,	// (0x0006facc) cam6_zoom_pane_g3

0x0002,

0xfaaa,	// (0x0007940d) cam6_zoom_pane_g

0xb128,	// (0x00074a8b) cam6_battery_pane_g1

0xb128,	// (0x00074a8b) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x00078cfb) cam6_battery_pane_g

0xe2c5,	// (0x00077c28) cam6_zoom_cont_pane_g1

0xe2ce,	// (0x00077c31) cam6_zoom_cont_pane_g2

0xe2d7,	// (0x00077c3a) cam6_zoom_cont_pane_g3

0x0002,

0x01dc,	// (0x00069b3f) cam6_zoom_cont_pane_g

0x6187,	// (0x0006faea) cam6_mode_pane_cp_ParamLimits

0x6187,	// (0x0006faea) cam6_mode_pane_cp

0x6199,	// (0x0006fafc) cam6_zoom_pane_cp_ParamLimits

0x6199,	// (0x0006fafc) cam6_zoom_pane_cp

0x61a5,	// (0x0006fb08) vid6_image_uncrop_cif_pane_ParamLimits

0x61a5,	// (0x0006fb08) vid6_image_uncrop_cif_pane

0x61b5,	// (0x0006fb18) vid6_image_uncrop_nhd_pane_ParamLimits

0x61b5,	// (0x0006fb18) vid6_image_uncrop_nhd_pane

0x61c4,	// (0x0006fb27) vid6_image_uncrop_vga_pane_ParamLimits

0x61c4,	// (0x0006fb27) vid6_image_uncrop_vga_pane

0x61d3,	// (0x0006fb36) vid6_image_uncrop_wvga_pane_ParamLimits

0x61d3,	// (0x0006fb36) vid6_image_uncrop_wvga_pane

0x61e2,	// (0x0006fb45) vid6_indi_pane_ParamLimits

0x61e2,	// (0x0006fb45) vid6_indi_pane

0xd8e1,	// (0x00077244) bg_tb_trans_pane_cp09_ParamLimits

0xd8e1,	// (0x00077244) bg_tb_trans_pane_cp09

0xe2ef,	// (0x00077c52) cam6_battery_pane_cp_ParamLimits

0xe2ef,	// (0x00077c52) cam6_battery_pane_cp

0xe2fb,	// (0x00077c5e) vid6_indi_pane_g1_ParamLimits

0xe2fb,	// (0x00077c5e) vid6_indi_pane_g1

0xe30d,	// (0x00077c70) vid6_indi_pane_g2_ParamLimits

0xe30d,	// (0x00077c70) vid6_indi_pane_g2

0xe31f,	// (0x00077c82) vid6_indi_pane_g3_ParamLimits

0xe31f,	// (0x00077c82) vid6_indi_pane_g3

0xe334,	// (0x00077c97) vid6_indi_pane_g4_ParamLimits

0xe334,	// (0x00077c97) vid6_indi_pane_g4

0xe349,	// (0x00077cac) vid6_indi_pane_g5_ParamLimits

0xe349,	// (0x00077cac) vid6_indi_pane_g5

0x0004,

0x01e3,	// (0x00069b46) vid6_indi_pane_g_ParamLimits

0x01e3,	// (0x00069b46) vid6_indi_pane_g

0xe363,	// (0x00077cc6) vid6_indi_pane_t1_ParamLimits

0xe363,	// (0x00077cc6) vid6_indi_pane_t1

0xe379,	// (0x00077cdc) vid6_indi_pane_t2_ParamLimits

0xe379,	// (0x00077cdc) vid6_indi_pane_t2

0xe3a1,	// (0x00077d04) vid6_indi_pane_t3_ParamLimits

0xe3a1,	// (0x00077d04) vid6_indi_pane_t3

0xe3c9,	// (0x00077d2c) vid6_indi_pane_t4_ParamLimits

0xe3c9,	// (0x00077d2c) vid6_indi_pane_t4

0x0003,

0x01ee,	// (0x00069b51) vid6_indi_pane_t_ParamLimits

0x01ee,	// (0x00069b51) vid6_indi_pane_t

0xe3ed,	// (0x00077d50) wait_bar_pane_cp08

0x61fa,	// (0x0006fb5d) main_cset_text2_pane_t1_ParamLimits

0x61fa,	// (0x0006fb5d) main_cset_text2_pane_t1

0x6172,	// (0x0006fad5) listscroll_gen_pane_cp06_t1_ParamLimits

0x6172,	// (0x0006fad5) listscroll_gen_pane_cp06_t1

0x9093,	// (0x000729f6) main_cam6_set_pane

0xe936,	// (0x00078299) bg_tb_trans_pane_cp06_ParamLimits

0x9635,	// (0x00072f98) cam4_indicators_pane_g1_ParamLimits

0x9646,	// (0x00072fa9) cam4_indicators_pane_g2_ParamLimits

0xf851,	// (0x000791b4) cam4_indicators_pane_g_ParamLimits

0x965e,	// (0x00072fc1) cam4_indicators_pane_t1_ParamLimits

0x9085,	// (0x000729e8) bg_tb_trans_pane_cp07_ParamLimits

0x9688,	// (0x00072feb) vid4_indicators_pane_g1_ParamLimits

0x969c,	// (0x00072fff) vid4_indicators_pane_g2_ParamLimits

0x96b0,	// (0x00073013) vid4_indicators_pane_g3_ParamLimits

0x96c1,	// (0x00073024) vid4_indicators_pane_g4_ParamLimits

0xf863,	// (0x000791c6) vid4_indicators_pane_g_ParamLimits

0x96dd,	// (0x00073040) vid4_indicators_pane_t1_ParamLimits

0x9773,	// (0x000730d6) vid4_progress_pane_g1_ParamLimits

0x9783,	// (0x000730e6) vid4_progress_pane_g2_ParamLimits

0x5cf8,	// (0x0006f65b) vid4_progress_pane_g3_ParamLimits

0x9793,	// (0x000730f6) vid4_progress_pane_g4_ParamLimits

0xfa0a,	// (0x0007936d) vid4_progress_pane_g_ParamLimits

0x5d0a,	// (0x0006f66d) vid4_progress_pane_t1_ParamLimits

0x97ab,	// (0x0007310e) vid4_progress_pane_t2_ParamLimits

0x97c0,	// (0x00073123) vid4_progress_pane_t3_ParamLimits

0xfa15,	// (0x00079378) vid4_progress_pane_t_ParamLimits

0x5d20,	// (0x0006f683) wait_bar_pane_cp07_ParamLimits

0x6218,	// (0x0006fb7b) main_cam6_set_pane_g2_ParamLimits

0x6218,	// (0x0006fb7b) main_cam6_set_pane_g2

0x623c,	// (0x0006fb9f) main_cset6_listscroll_pane_ParamLimits

0x623c,	// (0x0006fb9f) main_cset6_listscroll_pane

0x6258,	// (0x0006fbbb) main_cset6_slider_pane_ParamLimits

0x6258,	// (0x0006fbbb) main_cset6_slider_pane

0x626e,	// (0x0006fbd1) main_cset6_text2_pane_ParamLimits

0x626e,	// (0x0006fbd1) main_cset6_text2_pane

0xe3fc,	// (0x00077d5f) main_cset6_text_pane

0xe404,	// (0x00077d67) main_cset_list_pane_copy1_ParamLimits

0xe404,	// (0x00077d67) main_cset_list_pane_copy1

0xe414,	// (0x00077d77) scroll_pane_cp028_copy1

0x627c,	// (0x0006fbdf) cset_list_set_pane_copy1

0x628e,	// (0x0006fbf1) aid_position_infowindow_above_copy1

0x6296,	// (0x0006fbf9) aid_position_infowindow_below_copy1

0x629e,	// (0x0006fc01) cset_list_set_pane_g1_copy1

0x62a6,	// (0x0006fc09) cset_list_set_pane_g3_copy1_ParamLimits

0x62a6,	// (0x0006fc09) cset_list_set_pane_g3_copy1

0x62b5,	// (0x0006fc18) cset_list_set_pane_t1_copy1_ParamLimits

0x62b5,	// (0x0006fc18) cset_list_set_pane_t1_copy1

0xa32e,	// (0x00073c91) list_highlight_pane_cp021_copy1_ParamLimits

0xa32e,	// (0x00073c91) list_highlight_pane_cp021_copy1

0xe41d,	// (0x00077d80) cset6_slider_pane_ParamLimits

0xe41d,	// (0x00077d80) cset6_slider_pane

0xe449,	// (0x00077dac) main_cset6_slider_pane_g1_ParamLimits

0xe449,	// (0x00077dac) main_cset6_slider_pane_g1

0x62ca,	// (0x0006fc2d) main_cset6_slider_pane_g2_ParamLimits

0x62ca,	// (0x0006fc2d) main_cset6_slider_pane_g2

0xe471,	// (0x00077dd4) main_cset6_slider_pane_g3_ParamLimits

0xe471,	// (0x00077dd4) main_cset6_slider_pane_g3

0x62f2,	// (0x0006fc55) main_cset6_slider_pane_g4_ParamLimits

0x62f2,	// (0x0006fc55) main_cset6_slider_pane_g4

0xe47d,	// (0x00077de0) main_cset6_slider_pane_g5_ParamLimits

0xe47d,	// (0x00077de0) main_cset6_slider_pane_g5

0xdce6,	// (0x00077649) main_cset6_slider_pane_g7_ParamLimits

0xdce6,	// (0x00077649) main_cset6_slider_pane_g7

0xdcf2,	// (0x00077655) main_cset6_slider_pane_g8_ParamLimits

0xdcf2,	// (0x00077655) main_cset6_slider_pane_g8

0x5359,	// (0x0006ecbc) main_cset6_slider_pane_g9_ParamLimits

0x5359,	// (0x0006ecbc) main_cset6_slider_pane_g9

0x5365,	// (0x0006ecc8) main_cset6_slider_pane_g10_ParamLimits

0x5365,	// (0x0006ecc8) main_cset6_slider_pane_g10

0x5371,	// (0x0006ecd4) main_cset6_slider_pane_g11_ParamLimits

0x5371,	// (0x0006ecd4) main_cset6_slider_pane_g11

0x537d,	// (0x0006ece0) main_cset6_slider_pane_g12_ParamLimits

0x537d,	// (0x0006ece0) main_cset6_slider_pane_g12

0x5389,	// (0x0006ecec) main_cset6_slider_pane_g13_ParamLimits

0x5389,	// (0x0006ecec) main_cset6_slider_pane_g13

0x5395,	// (0x0006ecf8) main_cset6_slider_pane_g14_ParamLimits

0x5395,	// (0x0006ecf8) main_cset6_slider_pane_g14

0x62fe,	// (0x0006fc61) main_cset6_slider_pane_g15_ParamLimits

0x62fe,	// (0x0006fc61) main_cset6_slider_pane_g15

0xdcfe,	// (0x00077661) main_cset6_slider_pane_g16_ParamLimits

0xdcfe,	// (0x00077661) main_cset6_slider_pane_g16

0xdd0a,	// (0x0007766d) main_cset6_slider_pane_g17_ParamLimits

0xdd0a,	// (0x0007766d) main_cset6_slider_pane_g17

0x0011,

0xfab1,	// (0x00079414) main_cset6_slider_pane_g_ParamLimits

0xfab1,	// (0x00079414) main_cset6_slider_pane_g

0xe489,	// (0x00077dec) main_cset6_slider_pane_t1_ParamLimits

0xe489,	// (0x00077dec) main_cset6_slider_pane_t1

0x632e,	// (0x0006fc91) main_cset6_slider_pane_t2_ParamLimits

0x632e,	// (0x0006fc91) main_cset6_slider_pane_t2

0x6359,	// (0x0006fcbc) main_cset6_slider_pane_t3_ParamLimits

0x6359,	// (0x0006fcbc) main_cset6_slider_pane_t3

0x6384,	// (0x0006fce7) main_cset6_slider_pane_t4_ParamLimits

0x6384,	// (0x0006fce7) main_cset6_slider_pane_t4

0x63af,	// (0x0006fd12) main_cset6_slider_pane_t5_ParamLimits

0x63af,	// (0x0006fd12) main_cset6_slider_pane_t5

0xe4ca,	// (0x00077e2d) main_cset6_slider_pane_t7_ParamLimits

0xe4ca,	// (0x00077e2d) main_cset6_slider_pane_t7

0x63da,	// (0x0006fd3d) main_cset6_slider_pane_t8_ParamLimits

0x63da,	// (0x0006fd3d) main_cset6_slider_pane_t8

0x63fe,	// (0x0006fd61) main_cset6_slider_pane_t9_ParamLimits

0x63fe,	// (0x0006fd61) main_cset6_slider_pane_t9

0x6422,	// (0x0006fd85) main_cset6_slider_pane_t10_ParamLimits

0x6422,	// (0x0006fd85) main_cset6_slider_pane_t10

0x6446,	// (0x0006fda9) main_cset6_slider_pane_t11_ParamLimits

0x6446,	// (0x0006fda9) main_cset6_slider_pane_t11

0xe500,	// (0x00077e63) main_cset6_slider_pane_t14_ParamLimits

0xe500,	// (0x00077e63) main_cset6_slider_pane_t14

0xe539,	// (0x00077e9c) main_cset6_slider_pane_t15_ParamLimits

0xe539,	// (0x00077e9c) main_cset6_slider_pane_t15

0x000b,

0xfad6,	// (0x00079439) main_cset6_slider_pane_t_ParamLimits

0xfad6,	// (0x00079439) main_cset6_slider_pane_t

0xd9e4,	// (0x00077347) cset_slider_pane_g1_copy1

0xe572,	// (0x00077ed5) cset_slider_pane_g2_copy1

0xe57b,	// (0x00077ede) cset_slider_pane_g3_copy1

0xa2cd,	// (0x00073c30) bg_popup_sub_pane_cp011_copy1

0xe58d,	// (0x00077ef0) main_cset_text_pane_g1_copy1

0xde56,	// (0x000777b9) main_cset_text_pane_t1_copy1

0xde64,	// (0x000777c7) main_cset_text_pane_t2_copy1

0xde72,	// (0x000777d5) main_cset_text_pane_t3_copy1

0xde80,	// (0x000777e3) main_cset_text_pane_t4_copy1

0xde8e,	// (0x000777f1) main_cset_text_pane_t5_copy1

0xe595,	// (0x00077ef8) main_cset_text_pane_t6_copy1

0xe5a3,	// (0x00077f06) main_cset_text_pane_t7_copy1

0x61fa,	// (0x0006fb5d) main_cset_text2_pane_t1_copy1

0x9085,	// (0x000729e8) main_ncimui_pane

0x336b,	// (0x0006ccce) popup_query_ncimui_window_ParamLimits

0x336b,	// (0x0006ccce) popup_query_ncimui_window

0x9e2b,	// (0x0007378e) field_cale_ev2_pane_g4_ParamLimits

0x9e2b,	// (0x0007378e) field_cale_ev2_pane_g4

0x4565,	// (0x0006dec8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4565,	// (0x0006dec8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x0007914e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x0007914e) cell_video_dialer_keypad_pane_g

0x457d,	// (0x0006dee0) cell_video_dialer_keypad_pane_t1

0xa2cd,	// (0x00073c30) bg_popup_window_pane_cp012

0xce1b,	// (0x0007677e) heading_pane_cp06

0xe5cf,	// (0x00077f32) ncim_query_content_pane

0xa2cd,	// (0x00073c30) bg_popup_heading_pane_cp01

0xe5d7,	// (0x00077f3a) ncim_heading_pane_t1

0xe5e5,	// (0x00077f48) ncim_indicator_popup_pane

0xe5f7,	// (0x00077f5a) ncim_query_button_pane

0xe60b,	// (0x00077f6e) ncim_query_content_pane_t1

0xe61d,	// (0x00077f80) ncim_query_content_pane_t2

0x0005,

0xfb1a,	// (0x0007947d) ncim_query_content_pane_t

0xe657,	// (0x00077fba) ncim_query_list_pane

0xe669,	// (0x00077fcc) ncim_query_popup_pane

0xe5e5,	// (0x00077f48) ncim_indicator_popup_pane_ParamLimits

0x65b0,	// (0x0006ff13) ncim_query_content_pane_g1_ParamLimits

0x65b0,	// (0x0006ff13) ncim_query_content_pane_g1

0xe60b,	// (0x00077f6e) ncim_query_content_pane_t1_ParamLimits

0xe61d,	// (0x00077f80) ncim_query_content_pane_t2_ParamLimits

0x65bc,	// (0x0006ff1f) ncim_query_content_pane_t3_ParamLimits

0x65bc,	// (0x0006ff1f) ncim_query_content_pane_t3

0x65e4,	// (0x0006ff47) ncim_query_content_pane_t4_ParamLimits

0x65e4,	// (0x0006ff47) ncim_query_content_pane_t4

0x660c,	// (0x0006ff6f) ncim_query_content_pane_t5_ParamLimits

0x660c,	// (0x0006ff6f) ncim_query_content_pane_t5

0xe62f,	// (0x00077f92) ncim_query_content_pane_t6_ParamLimits

0xe62f,	// (0x00077f92) ncim_query_content_pane_t6

0xfb1a,	// (0x0007947d) ncim_query_content_pane_t_ParamLimits

0xe657,	// (0x00077fba) ncim_query_list_pane_ParamLimits

0xe669,	// (0x00077fcc) ncim_query_popup_pane_ParamLimits

0xe67d,	// (0x00077fe0) wait_bar_pane_cp04

0xa2cd,	// (0x00073c30) input_focus_pane_cp011

0xe685,	// (0x00077fe8) ncim_query_popup_pane_t1

0xe693,	// (0x00077ff6) ncim_list_query_list_pane_ParamLimits

0xe693,	// (0x00077ff6) ncim_list_query_list_pane

0xa2cd,	// (0x00073c30) bg_button_pane_cp027

0xe6a0,	// (0x00078003) ncim_query_button_pane_g1

0xa2cd,	// (0x00073c30) list_highlight_pane_cp012

0xe6aa,	// (0x0007800d) ncim_list_query_list_pane_g1

0xe6b2,	// (0x00078015) ncim_list_query_list_pane_t1

0x9652,	// (0x00072fb5) cam4_indicators_pane_g3_ParamLimits

0x9652,	// (0x00072fb5) cam4_indicators_pane_g3

0x96cd,	// (0x00073030) vid4_indicators_pane_g5_ParamLimits

0x96cd,	// (0x00073030) vid4_indicators_pane_g5

0x979f,	// (0x00073102) vid4_progress_pane_g5_ParamLimits

0x979f,	// (0x00073102) vid4_progress_pane_g5

0x649b,	// (0x0006fdfe) main_ncimui_pane_g1

0x6504,	// (0x0006fe67) ncimui_group_query_pane_ParamLimits

0x6504,	// (0x0006fe67) ncimui_group_query_pane

0x654c,	// (0x0006feaf) ncimui_list_pane_ParamLimits

0x654c,	// (0x0006feaf) ncimui_list_pane

0x6573,	// (0x0006fed6) ncimui_text_pane_ParamLimits

0x6573,	// (0x0006fed6) ncimui_text_pane

0x6634,	// (0x0006ff97) ncimui_text_pane_t1_ParamLimits

0x6634,	// (0x0006ff97) ncimui_text_pane_t1

0xe6c0,	// (0x00078023) ncimui_list_single_graphic_pane_ParamLimits

0xe6c0,	// (0x00078023) ncimui_list_single_graphic_pane

0x6652,	// (0x0006ffb5) ncimui_query_pane_ParamLimits

0x6652,	// (0x0006ffb5) ncimui_query_pane

0xa2cd,	// (0x00073c30) list_highlight_pane_cp013

0xe6d0,	// (0x00078033) ncim_list_query_list_pane_t1_copy1

0xe6de,	// (0x00078041) ncim_list_single_graphic_pane_g1

0x6665,	// (0x0006ffc8) ncim_query_button_pane_cp01

0x6671,	// (0x0006ffd4) ncim_query_entry_pane_ParamLimits

0x6671,	// (0x0006ffd4) ncim_query_entry_pane

0x6684,	// (0x0006ffe7) ncimui_query_pane_g1

0x6690,	// (0x0006fff3) ncimui_query_pane_t1_ParamLimits

0x6690,	// (0x0006fff3) ncimui_query_pane_t1

0xa32e,	// (0x00073c91) input_focus_pane_cp012

0xe6e6,	// (0x00078049) ncim_query_entry_pane_t1

0xaf37,	// (0x0007489a) main_im_pane_ParamLimits

0x9085,	// (0x000729e8) main_mobtv_pane_ParamLimits

0x9085,	// (0x000729e8) main_mobtv_pane

0x6316,	// (0x0006fc79) main_cset6_slider_pane_g18_ParamLimits

0x6316,	// (0x0006fc79) main_cset6_slider_pane_g18

0x6322,	// (0x0006fc85) main_cset6_slider_pane_g19_ParamLimits

0x6322,	// (0x0006fc85) main_cset6_slider_pane_g19

0xaee1,	// (0x00074844) bg_main_mobtv_pane_ParamLimits

0xaee1,	// (0x00074844) bg_main_mobtv_pane

0x66a9,	// (0x0007000c) main_mobtv_info_pane

0x66b2,	// (0x00070015) main_mobtv_loading_pane_ParamLimits

0x66b2,	// (0x00070015) main_mobtv_loading_pane

0xe6f8,	// (0x0007805b) main_mobtv_pg_channel_list_pane

0xe702,	// (0x00078065) main_mobtv_pg_hdr_pane

0x66bf,	// (0x00070022) main_mobtv_programe_curr_pane_ParamLimits

0x66bf,	// (0x00070022) main_mobtv_programe_curr_pane

0x66cc,	// (0x0007002f) main_mobtv_programe_next_pane_ParamLimits

0x66cc,	// (0x0007002f) main_mobtv_programe_next_pane

0xe70b,	// (0x0007806e) popup_mobtv_noti_window

0xb128,	// (0x00074a8b) main_tv_pg_hdr_pane_g1

0xe713,	// (0x00078076) main_tv_pg_hdr_pane_g2

0xe71b,	// (0x0007807e) main_tv_pg_hdr_pane_g3

0xe723,	// (0x00078086) main_tv_pg_hdr_pane_g4

0xe72b,	// (0x0007808e) main_tv_pg_hdr_pane_g5

0xe735,	// (0x00078098) main_tv_pg_hdr_pane_g6

0xe73f,	// (0x000780a2) main_tv_pg_hdr_pane_g7

0xe749,	// (0x000780ac) main_tv_pg_hdr_pane_g8

0xe753,	// (0x000780b6) main_tv_pg_hdr_pane_g9

0xe75d,	// (0x000780c0) main_tv_pg_hdr_pane_g10

0xe767,	// (0x000780ca) main_tv_pg_hdr_pane_g11

0x000a,

0xfb27,	// (0x0007948a) main_tv_pg_hdr_pane_g

0xe771,	// (0x000780d4) main_tv_pg_hdr_pane_t1

0xe77f,	// (0x000780e2) main_tv_pg_hdr_pane_t2

0xe78d,	// (0x000780f0) main_tv_pg_hdr_pane_t3

0xe79d,	// (0x00078100) main_tv_pg_hdr_pane_t4

0xe7ad,	// (0x00078110) main_tv_pg_hdr_pane_t5

0x0004,

0x025e,	// (0x00069bc1) main_tv_pg_hdr_pane_t

0xe7bd,	// (0x00078120) single_mobtv_pg_channel_pane_ParamLimits

0xe7bd,	// (0x00078120) single_mobtv_pg_channel_pane

0xe7cf,	// (0x00078132) single_mobtv_pg_channel_table_pane

0xb445,	// (0x00074da8) single_mobtv_pg_channel_thumb_pane

0xe7d8,	// (0x0007813b) single_tv_pg_channel_pane_g1

0xe7e1,	// (0x00078144) single_tv_pg_channel_pane_g2

0x0001,

0x0269,	// (0x00069bcc) single_tv_pg_channel_pane_g

0xaec5,	// (0x00074828) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaec5,	// (0x00074828) bg_single_mobtv_pg_channel_thumb_pane

0xe7ea,	// (0x0007814d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe7ea,	// (0x0007814d) single_mobtv_pg_channel_thumb_pane_g1

0xe7f8,	// (0x0007815b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe7f8,	// (0x0007815b) single_mobtv_pg_channel_thumb_pane_g2

0xe804,	// (0x00078167) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe804,	// (0x00078167) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb3e,	// (0x000794a1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb3e,	// (0x000794a1) single_mobtv_pg_channel_thumb_pane_g

0xe810,	// (0x00078173) single_mobtv_pg_channel_thumb_pane_t1

0xe81e,	// (0x00078181) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb45,	// (0x000794a8) single_mobtv_pg_channel_thumb_pane_t

0xb128,	// (0x00074a8b) bg_single_mobtv_pg_channel_table_pane_g1

0xb128,	// (0x00074a8b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x00078cfb) bg_single_mobtv_pg_channel_table_pane_g

0xe82c,	// (0x0007818f) single_mobtv_pg_channel_table_pane_t1

0xe83a,	// (0x0007819d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb4a,	// (0x000794ad) single_mobtv_pg_channel_table_pane_t

0x66e1,	// (0x00070044) main_mobtv_info_pane_g1_ParamLimits

0x66e1,	// (0x00070044) main_mobtv_info_pane_g1

0x66ff,	// (0x00070062) main_mobtv_info_pane_t1_ParamLimits

0x66ff,	// (0x00070062) main_mobtv_info_pane_t1

0x6777,	// (0x000700da) main_mobtv_info_pane_t2_ParamLimits

0x6777,	// (0x000700da) main_mobtv_info_pane_t2

0x0002,

0xfb54,	// (0x000794b7) main_mobtv_info_pane_t_ParamLimits

0xfb54,	// (0x000794b7) main_mobtv_info_pane_t

0x6806,	// (0x00070169) wait_bar_pane_cp05

0x6818,	// (0x0007017b) main_mobtv_loading_pane_g1_ParamLimits

0x6818,	// (0x0007017b) main_mobtv_loading_pane_g1

0x682b,	// (0x0007018e) main_mobtv_loading_pane_g2_ParamLimits

0x682b,	// (0x0007018e) main_mobtv_loading_pane_g2

0x6837,	// (0x0007019a) main_mobtv_loading_pane_g3_ParamLimits

0x6837,	// (0x0007019a) main_mobtv_loading_pane_g3

0x0002,

0xfb5b,	// (0x000794be) main_mobtv_loading_pane_g_ParamLimits

0xfb5b,	// (0x000794be) main_mobtv_loading_pane_g

0xe848,	// (0x000781ab) main_mobtv_loading_pane_t1_ParamLimits

0xe848,	// (0x000781ab) main_mobtv_loading_pane_t1

0xe860,	// (0x000781c3) main_mobtv_loading_pane_t2_ParamLimits

0xe860,	// (0x000781c3) main_mobtv_loading_pane_t2

0x0001,

0xfb62,	// (0x000794c5) main_mobtv_loading_pane_t_ParamLimits

0xfb62,	// (0x000794c5) main_mobtv_loading_pane_t

0x684a,	// (0x000701ad) wait_bar_pane_cp06_ParamLimits

0x684a,	// (0x000701ad) wait_bar_pane_cp06

0xe884,	// (0x000781e7) main_mobtv_programe_curr_pane_t1

0xe892,	// (0x000781f5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb67,	// (0x000794ca) main_mobtv_programe_curr_pane_t

0xe8a0,	// (0x00078203) main_mobtv_programe_next_pane_t1

0xe8ae,	// (0x00078211) main_mobtv_programe_next_pane_t2

0xe8bc,	// (0x0007821f) main_mobtv_programe_next_pane_t3

0x0002,

0xfb6c,	// (0x000794cf) main_mobtv_programe_next_pane_t

0xa2cd,	// (0x00073c30) bg_popup_mobtv_noti_window_pane

0xe8ca,	// (0x0007822d) popup_mobtv_noti_window_g1

0xe8d2,	// (0x00078235) popup_mobtv_noti_window_t1

0xe8e0,	// (0x00078243) popup_mobtv_noti_window_t2

0x0001,

0xfb73,	// (0x000794d6) popup_mobtv_noti_window_t

0xb128,	// (0x00074a8b) bg_popup_mobtv_noti_window_pane_g1

0x9093,	// (0x000729f6) sc_clock_pane

0x9093,	// (0x000729f6) main_fs_bigclock_pane

0x5f41,	// (0x0006f8a4) blid2_tripm_pane_t4_ParamLimits

0x5f41,	// (0x0006f8a4) blid2_tripm_pane_t4

0x6859,	// (0x000701bc) sc_clock_pane_g1_ParamLimits

0x6859,	// (0x000701bc) sc_clock_pane_g1

0x686b,	// (0x000701ce) sc_clock_pane_t1_ParamLimits

0x686b,	// (0x000701ce) sc_clock_pane_t1

0x688d,	// (0x000701f0) sc_clock_pane_t2_ParamLimits

0x688d,	// (0x000701f0) sc_clock_pane_t2

0x68a5,	// (0x00070208) sc_clock_pane_t3_ParamLimits

0x68a5,	// (0x00070208) sc_clock_pane_t3

0x0004,

0xfb78,	// (0x000794db) sc_clock_pane_t_ParamLimits

0xfb78,	// (0x000794db) sc_clock_pane_t

0x7621,	// (0x00070f84) main_fs_bigclock_indicator_pane_ParamLimits

0x7621,	// (0x00070f84) main_fs_bigclock_indicator_pane

0x694b,	// (0x000702ae) main_fs_bigclock_pane_g1_ParamLimits

0x694b,	// (0x000702ae) main_fs_bigclock_pane_g1

0x762d,	// (0x00070f90) main_fs_bigclock_pane_t1_ParamLimits

0x762d,	// (0x00070f90) main_fs_bigclock_pane_t1

0x763f,	// (0x00070fa2) main_fs_bigclock_pane_t2_ParamLimits

0x763f,	// (0x00070fa2) main_fs_bigclock_pane_t2

0x7653,	// (0x00070fb6) main_fs_bigclock_pane_t3_ParamLimits

0x7653,	// (0x00070fb6) main_fs_bigclock_pane_t3

0x0002,

0xfcfa,	// (0x0007965d) main_fs_bigclock_pane_t_ParamLimits

0xfcfa,	// (0x0007965d) main_fs_bigclock_pane_t

0x9954,	// (0x000732b7) main_fs_bigclock_indicator_pane_g1

0xe5ff,	// (0x00077f62) ncim_query_content_pane_g2_ParamLimits

0xe5ff,	// (0x00077f62) ncim_query_content_pane_g2

0x0001,

0xfb15,	// (0x00079478) ncim_query_content_pane_g_ParamLimits

0xfb15,	// (0x00079478) ncim_query_content_pane_g

0x68be,	// (0x00070221) sc_clock_pane_t4_ParamLimits

0x68be,	// (0x00070221) sc_clock_pane_t4

0x9085,	// (0x000729e8) main_radioblah_pane

0x95c7,	// (0x00072f2a) cell_call4_button_pane_t1_copy1_ParamLimits

0x95c7,	// (0x00072f2a) cell_call4_button_pane_t1_copy1

0x64b3,	// (0x0006fe16) main_ncimui_pane_t1_ParamLimits

0x64b3,	// (0x0006fe16) main_ncimui_pane_t1

0x64cd,	// (0x0006fe30) main_ncimui_pane_t2_ParamLimits

0x64cd,	// (0x0006fe30) main_ncimui_pane_t2

0x0002,

0xfb0e,	// (0x00079471) main_ncimui_pane_t_ParamLimits

0xfb0e,	// (0x00079471) main_ncimui_pane_t

0xea4f,	// (0x000783b2) main_radioblah_anim_pane_ParamLimits

0xea4f,	// (0x000783b2) main_radioblah_anim_pane

0xea60,	// (0x000783c3) main_radioblah_info_pane_ParamLimits

0xea60,	// (0x000783c3) main_radioblah_info_pane

0xea74,	// (0x000783d7) main_radioblah_pane_t1_ParamLimits

0xea74,	// (0x000783d7) main_radioblah_pane_t1

0xea90,	// (0x000783f3) main_radioblah_pane_t2_ParamLimits

0xea90,	// (0x000783f3) main_radioblah_pane_t2

0x0003,

0xfb99,	// (0x000794fc) main_radioblah_pane_t_ParamLimits

0xfb99,	// (0x000794fc) main_radioblah_pane_t

0x69aa,	// (0x0007030d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x69aa,	// (0x0007030d) main_radioblah_rocker_ctrl_pane

0xead8,	// (0x0007843b) main_radioblah_info_pane_t1_ParamLimits

0xead8,	// (0x0007843b) main_radioblah_info_pane_t1

0x6a02,	// (0x00070365) main_radioblah_info_pane_t2_ParamLimits

0x6a02,	// (0x00070365) main_radioblah_info_pane_t2

0x0003,

0xfba2,	// (0x00079505) main_radioblah_info_pane_t_ParamLimits

0xfba2,	// (0x00079505) main_radioblah_info_pane_t

0xb128,	// (0x00074a8b) main_radioblah_rocker_ctrl_pane_g1

0x6ab2,	// (0x00070415) main_radioblah_rocker_ctrl_pane_g2

0x6aba,	// (0x0007041d) main_radioblah_rocker_ctrl_pane_g3

0x6ac2,	// (0x00070425) main_radioblah_rocker_ctrl_pane_g4

0x6aca,	// (0x0007042d) main_radioblah_rocker_ctrl_pane_g5

0x6ad2,	// (0x00070435) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbab,	// (0x0007950e) main_radioblah_rocker_ctrl_pane_g

0x61fa,	// (0x0006fb5d) main_cset_text2_pane_t1_copy1_ParamLimits

0x9625,	// (0x00072f88) cam4_image_uncrop_qvga_pane

0x9678,	// (0x00072fdb) vid4_image_uncrop_qcif_pane

0x97d6,	// (0x00073139) cam6_image_uncrop_qvga_pane_ParamLimits

0x97d6,	// (0x00073139) cam6_image_uncrop_qvga_pane

0xe2df,	// (0x00077c42) vid6_image_uncrop_qcif_pane_ParamLimits

0xe2df,	// (0x00077c42) vid6_image_uncrop_qcif_pane

0xa2cd,	// (0x00073c30) bg_popup_preview_window_pane_cp03

0xe5b1,	// (0x00077f14) list_cset_text2_pane

0xe5b9,	// (0x00077f1c) main_cset6_text2_pane_g1

0xe5c1,	// (0x00077f24) main_cset6_text2_pane_t1

0xeb12,	// (0x00078475) list_cset_text2_pane_t1_ParamLimits

0xeb12,	// (0x00078475) list_cset_text2_pane_t1

0x9085,	// (0x000729e8) main_radioblah_pane_ParamLimits

0x67f2,	// (0x00070155) main_mobtv_info_pane_t3_ParamLimits

0x67f2,	// (0x00070155) main_mobtv_info_pane_t3

0x6998,	// (0x000702fb) main_radioblah_pane_g1

0x69d2,	// (0x00070335) main_radioblah_info_pane_g1

0x6a57,	// (0x000703ba) main_radioblah_info_pane_t3_ParamLimits

0x6a57,	// (0x000703ba) main_radioblah_info_pane_t3

0x20c1,	// (0x0006ba24) highlight_cell_cale_month_pane_ParamLimits

0x20c1,	// (0x0006ba24) highlight_cell_cale_month_pane

0x9093,	// (0x000729f6) main_phob_fisheye_pane

0xd5f2,	// (0x00076f55) scroll_pane_cp0031_ParamLimits

0xd5f2,	// (0x00076f55) scroll_pane_cp0031

0xe3ed,	// (0x00077d50) wait_bar_pane_cp08_ParamLimits

0x627c,	// (0x0006fbdf) cset_list_set_pane_copy1_ParamLimits

0xeb2d,	// (0x00078490) highlight_cell_cale_month_pane_g1

0x6ada,	// (0x0007043d) highlight_cell_cale_month_pane_t1

0xe082,	// (0x000779e5) list_gen_pane_cp01

0xdcd1,	// (0x00077634) scroll_pane_01

0x6ae8,	// (0x0007044b) list_single_double_fisheye_pane

0x6af1,	// (0x00070454) list_double_fisheye_pane_g1_ParamLimits

0x6af1,	// (0x00070454) list_double_fisheye_pane_g1

0x6afd,	// (0x00070460) list_double_fisheye_pane_g2_ParamLimits

0x6afd,	// (0x00070460) list_double_fisheye_pane_g2

0x6b11,	// (0x00070474) list_double_fisheye_pane_g3_ParamLimits

0x6b11,	// (0x00070474) list_double_fisheye_pane_g3

0x0004,

0xfbb8,	// (0x0007951b) list_double_fisheye_pane_g_ParamLimits

0xfbb8,	// (0x0007951b) list_double_fisheye_pane_g

0x6b3a,	// (0x0007049d) list_double_fisheye_pane_t1_ParamLimits

0x6b3a,	// (0x0007049d) list_double_fisheye_pane_t1

0x6b55,	// (0x000704b8) list_double_fisheye_pane_t2_ParamLimits

0x6b55,	// (0x000704b8) list_double_fisheye_pane_t2

0x0001,

0xfbc3,	// (0x00079526) list_double_fisheye_pane_t_ParamLimits

0xfbc3,	// (0x00079526) list_double_fisheye_pane_t

0x9093,	// (0x000729f6) main_call5_pane

0x68e9,	// (0x0007024c) sc_swipe_pane_ParamLimits

0x68e9,	// (0x0007024c) sc_swipe_pane

0x6b8a,	// (0x000704ed) call5_image_pane_ParamLimits

0x6b8a,	// (0x000704ed) call5_image_pane

0x6ba7,	// (0x0007050a) call5_swipe_1_pane_ParamLimits

0x6ba7,	// (0x0007050a) call5_swipe_1_pane

0x6bba,	// (0x0007051d) call5_swipe_2_pane_ParamLimits

0x6bba,	// (0x0007051d) call5_swipe_2_pane

0x6be5,	// (0x00070548) popup_call5_audio_first_window_ParamLimits

0x6be5,	// (0x00070548) popup_call5_audio_first_window

0xaec5,	// (0x00074828) call5_swipe_1_pane_g1_ParamLimits

0xaec5,	// (0x00074828) call5_swipe_1_pane_g1

0xeb35,	// (0x00078498) call5_swipe_1_pane_g2_ParamLimits

0xeb35,	// (0x00078498) call5_swipe_1_pane_g2

0x0001,

0xfbc8,	// (0x0007952b) call5_swipe_1_pane_g_ParamLimits

0xfbc8,	// (0x0007952b) call5_swipe_1_pane_g

0xeb41,	// (0x000784a4) call5_swipe_1_pane_t1_ParamLimits

0xeb41,	// (0x000784a4) call5_swipe_1_pane_t1

0xaec5,	// (0x00074828) call5_swipe_2_pane_g1_ParamLimits

0xaec5,	// (0x00074828) call5_swipe_2_pane_g1

0xeb56,	// (0x000784b9) call5_swipe_2_pane_g2_ParamLimits

0xeb56,	// (0x000784b9) call5_swipe_2_pane_g2

0x0001,

0xfbcd,	// (0x00079530) call5_swipe_2_pane_g_ParamLimits

0xfbcd,	// (0x00079530) call5_swipe_2_pane_g

0xeb62,	// (0x000784c5) call5_swipe_2_pane_t1_ParamLimits

0xeb62,	// (0x000784c5) call5_swipe_2_pane_t1

0xeb77,	// (0x000784da) sc_swipe_pane_g1_ParamLimits

0xeb77,	// (0x000784da) sc_swipe_pane_g1

0xeb84,	// (0x000784e7) sc_swipe_pane_g2_ParamLimits

0xeb84,	// (0x000784e7) sc_swipe_pane_g2

0x0001,

0xfbd2,	// (0x00079535) sc_swipe_pane_g_ParamLimits

0xfbd2,	// (0x00079535) sc_swipe_pane_g

0xeb90,	// (0x000784f3) sc_swipe_pane_t1_ParamLimits

0xeb90,	// (0x000784f3) sc_swipe_pane_t1

0x9093,	// (0x000729f6) main_cmail_launcher_pane

0x6bf6,	// (0x00070559) aid_size_cell_cmail_l_ParamLimits

0x6bf6,	// (0x00070559) aid_size_cell_cmail_l

0x6c04,	// (0x00070567) grid_cmail_l_pane_ParamLimits

0x6c04,	// (0x00070567) grid_cmail_l_pane

0x6c1e,	// (0x00070581) cell_cmail_l_pane_ParamLimits

0x6c1e,	// (0x00070581) cell_cmail_l_pane

0xeba5,	// (0x00078508) cell_cmail_l_pane_g1_ParamLimits

0xeba5,	// (0x00078508) cell_cmail_l_pane_g1

0xebb1,	// (0x00078514) cell_cmail_l_pane_t1_ParamLimits

0xebb1,	// (0x00078514) cell_cmail_l_pane_t1

0xebc7,	// (0x0007852a) cell_cmail_l_pane_t2_ParamLimits

0xebc7,	// (0x0007852a) cell_cmail_l_pane_t2

0x0001,

0xfbd7,	// (0x0007953a) cell_cmail_l_pane_t_ParamLimits

0xfbd7,	// (0x0007953a) cell_cmail_l_pane_t

0xa32e,	// (0x00073c91) grid_highlight_pane_cp018_ParamLimits

0xa32e,	// (0x00073c91) grid_highlight_pane_cp018

0x073e,	// (0x0006a0a1) main2_pane_ParamLimits

0x073e,	// (0x0006a0a1) main2_pane

0xafcf,	// (0x00074932) popup_sp_fs_action_menu_bg_pane_g1

0xafd7,	// (0x0007493a) popup_sp_fs_action_menu_bg_pane_g2

0xafdf,	// (0x00074942) popup_sp_fs_action_menu_bg_pane_g3

0xafe7,	// (0x0007494a) popup_sp_fs_action_menu_bg_pane_g4

0xafef,	// (0x00074952) popup_sp_fs_action_menu_bg_pane_g5

0xaff7,	// (0x0007495a) popup_sp_fs_action_menu_bg_pane_g6

0xafff,	// (0x00074962) popup_sp_fs_action_menu_bg_pane_g7

0xb007,	// (0x0007496a) popup_sp_fs_action_menu_bg_pane_g8

0xb00f,	// (0x00074972) popup_sp_fs_action_menu_bg_pane_g9

0xb017,	// (0x0007497a) popup_sp_fs_action_menu_bg_pane_g10

0xb017,	// (0x0007497a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x00078a68) popup_sp_fs_action_menu_bg_pane_g

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g2

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x00078b16) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x00078b16) list_medium_line_x2_t3_g3_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g3_t

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g2_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_x2_t3_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g2_t

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g2

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g3

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x00078b29) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x00078b29) list_medium_line_x2_t4_g4_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t3

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x00078b32) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x00078b32) list_medium_line_x2_t4_g4_t

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g2

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g3

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x00078b29) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x00078b29) list_medium_line_x2_t2_g4_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g4_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g4_t

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g2

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x00078b16) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x00078b16) list_medium_line_x2_t2_g3_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g3_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g3_t

0x2226,	// (0x0006bb89) main_sp_fs_list_pane_ParamLimits

0x2226,	// (0x0006bb89) main_sp_fs_list_pane

0xd8f8,	// (0x0007725b) sp_fs_scroll_pane_ParamLimits

0xd8f8,	// (0x0007725b) sp_fs_scroll_pane

0xb664,	// (0x00074fc7) list_medium_line_x2_t3_t1

0xb664,	// (0x00074fc7) list_medium_line_x2_t3_t2

0xb664,	// (0x00074fc7) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00078bdf) list_medium_line_x2_t3_t

0xb664,	// (0x00074fc7) list_medium_line_x3_t4_t1

0xb664,	// (0x00074fc7) list_medium_line_x3_t4_t2

0xb664,	// (0x00074fc7) list_medium_line_x3_t4_t3

0xb664,	// (0x00074fc7) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00078be6) list_medium_line_x3_t4_t

0xb664,	// (0x00074fc7) list_medium_line_x4_t5_t1

0xb664,	// (0x00074fc7) list_medium_line_x4_t5_t2

0xb664,	// (0x00074fc7) list_medium_line_x4_t5_t3

0xb664,	// (0x00074fc7) list_medium_line_x4_t5_t4

0xb664,	// (0x00074fc7) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00078bef) list_medium_line_x4_t5_t

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g1

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g2

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g3

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x00078b29) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x00078b29) list_medium_line_t4_g4_g

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t2

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t3

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t4_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x00078b32) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x00078b32) list_medium_line_t4_g4_t

0x22d1,	// (0x0006bc34) chi_dic_find_pane_g1

0x313b,	// (0x0006ca9e) main_tport_pane

0xb664,	// (0x00074fc7) list_medium_line_plain_t1

0xaec5,	// (0x00074828) list_medium_line_t2_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g2_g1

0xaec5,	// (0x00074828) list_medium_line_t2_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_t2_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_t2_g2_t

0xa3f5,	// (0x00073d58) aid_sp_fs_list_icon_a_sm

0xa3fd,	// (0x00073d60) aid_sp_fs_list_icon_d

0xa405,	// (0x00073d68) aid_sp_fs_text_primary

0xe944,	// (0x000782a7) aid_sp_fs_text_secondary

0xa2cd,	// (0x00073c30) list_medium_line

0xa2cd,	// (0x00073c30) list_medium_line_g2

0xa2cd,	// (0x00073c30) list_medium_line_g3

0xa2cd,	// (0x00073c30) list_medium_line_plain

0xa2cd,	// (0x00073c30) list_medium_line_plain_t2

0xa2cd,	// (0x00073c30) list_medium_line_plain_t3

0xa2cd,	// (0x00073c30) list_medium_line_right_icon

0xa2cd,	// (0x00073c30) list_medium_line_right_iconx2

0xa2cd,	// (0x00073c30) list_medium_line_t2

0xa2cd,	// (0x00073c30) list_medium_line_t2_g2

0xa2cd,	// (0x00073c30) list_medium_line_t2_g3

0xa2cd,	// (0x00073c30) list_medium_line_t2_right_icon

0xa2cd,	// (0x00073c30) list_medium_line_t2_right_iconx2

0xa2cd,	// (0x00073c30) list_medium_line_t3

0xa2cd,	// (0x00073c30) list_medium_line_t3_g2

0xa2cd,	// (0x00073c30) list_medium_line_t3_g3

0xa2cd,	// (0x00073c30) list_medium_line_t3_right_iconx2

0xa2cd,	// (0x00073c30) list_medium_line_t4_g4

0xa2cd,	// (0x00073c30) list_medium_line_x2

0xa2cd,	// (0x00073c30) list_medium_line_x2_t2_g2

0xa2cd,	// (0x00073c30) list_medium_line_x2_t2_g3

0xa2cd,	// (0x00073c30) list_medium_line_x2_t2_g4

0xa2cd,	// (0x00073c30) list_medium_line_x2_t3

0xa2cd,	// (0x00073c30) list_medium_line_x2_t3_g2

0xa2cd,	// (0x00073c30) list_medium_line_x2_t3_g3

0xa2cd,	// (0x00073c30) list_medium_line_x2_t3_g4

0xa2cd,	// (0x00073c30) list_medium_line_x2_t4_g2

0xa2cd,	// (0x00073c30) list_medium_line_x2_t4_g4

0xa2cd,	// (0x00073c30) list_medium_line_x3

0xa2cd,	// (0x00073c30) list_medium_line_x3_t4

0xa2cd,	// (0x00073c30) list_medium_line_x3_t4_g4

0xa2cd,	// (0x00073c30) list_medium_line_x4_t4

0xa2cd,	// (0x00073c30) list_medium_line_x4_t4_g7

0xa2cd,	// (0x00073c30) list_medium_line_x4_t5

0x5d31,	// (0x0006f694) list_single_fs_dyc_pane_ParamLimits

0x5d31,	// (0x0006f694) list_single_fs_dyc_pane

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g1

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g2

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g3

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g4

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g5

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x4_t4_g7_g6

0xaed3,	// (0x00074836) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaed3,	// (0x00074836) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaef,	// (0x00079452) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaef,	// (0x00079452) list_medium_line_x4_t4_g7_g

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x4_t4_g7_t3

0xbc01,	// (0x00075564) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbc01,	// (0x00075564) list_medium_line_x4_t4_g7_t4

0xbc01,	// (0x00075564) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbc01,	// (0x00075564) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafe,	// (0x00079461) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafe,	// (0x00079461) list_medium_line_x4_t4_g7_t

0x646a,	// (0x0006fdcd) list_single_dyc_row_pane_ParamLimits

0x646a,	// (0x0006fdcd) list_single_dyc_row_pane

0x6b77,	// (0x000704da) call5_gesture_pane_ParamLimits

0x6b77,	// (0x000704da) call5_gesture_pane

0x6bcd,	// (0x00070530) call5_windows_pane_ParamLimits

0x6bcd,	// (0x00070530) call5_windows_pane

0x6c38,	// (0x0007059b) call5_swipe_1_pane_cp_ParamLimits

0x6c38,	// (0x0007059b) call5_swipe_1_pane_cp

0x6c44,	// (0x000705a7) call5_swipe_2_pane_cp_ParamLimits

0x6c44,	// (0x000705a7) call5_swipe_2_pane_cp

0xb0f2,	// (0x00074a55) call5_image_pane_cp

0x6c50,	// (0x000705b3) popup_call5_audio_first_window_cp_ParamLimits

0x6c50,	// (0x000705b3) popup_call5_audio_first_window_cp

0xeb77,	// (0x000784da) call5_swipe_1_pane_g1_cp_ParamLimits

0xeb77,	// (0x000784da) call5_swipe_1_pane_g1_cp

0xebe4,	// (0x00078547) call5_swipe_1_pane_g2_cp

0xeb90,	// (0x000784f3) call5_swipe_1_pane_t1_cp_ParamLimits

0xeb90,	// (0x000784f3) call5_swipe_1_pane_t1_cp

0xeb77,	// (0x000784da) call5_swipe_2_pane_g1_cp_ParamLimits

0xeb77,	// (0x000784da) call5_swipe_2_pane_g1_cp

0xebec,	// (0x0007854f) call5_swipe_2_pane_g2_cp

0xebf4,	// (0x00078557) call5_swipe_2_pane_t1_cp_ParamLimits

0xebf4,	// (0x00078557) call5_swipe_2_pane_t1_cp

0xa32e,	// (0x00073c91) main_sp_fs_email_pane

0xec09,	// (0x0007856c) main_sp_fs_listscroll_pane_te

0x6c5e,	// (0x000705c1) popup_sp_fs_action_menu_pane_ParamLimits

0x6c5e,	// (0x000705c1) popup_sp_fs_action_menu_pane

0xb128,	// (0x00074a8b) bg_sp_fs_ctrlbar_pane_g1

0xec12,	// (0x00078575) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xec1b,	// (0x0007857e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcea2,	// (0x00076805) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xb128,	// (0x00074a8b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbdc,	// (0x0007953f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xce2b,	// (0x0007678e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xce2b,	// (0x0007678e) bg_sp_fs_ctrlbar_ddmenu_pane

0xec24,	// (0x00078587) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xec24,	// (0x00078587) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xec30,	// (0x00078593) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xec30,	// (0x00078593) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe5,	// (0x00079548) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe5,	// (0x00079548) main_sp_fs_ctrlbar_ddmenu_pane_g

0xec3c,	// (0x0007859f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xec3c,	// (0x0007859f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb128,	// (0x00074a8b) list_medium_line_t2_right_icon_g1

0xb664,	// (0x00074fc7) list_medium_line_t2_right_icon_t1

0xb664,	// (0x00074fc7) list_medium_line_t2_right_icon_t2

0x0001,

0xfbea,	// (0x0007954d) list_medium_line_t2_right_icon_t

0xbc15,	// (0x00075578) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbc15,	// (0x00075578) bg_sp_fs_ctrlbar_pane

0x6ce8,	// (0x0007064b) main_sp_fs_ctrlbar_button_pane_cp01

0x6cf2,	// (0x00070655) main_sp_fs_ctrlbar_ddmenu_pane

0xec8e,	// (0x000785f1) main_sp_fs_ctrlbar_pane_g1

0xec9a,	// (0x000785fd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbef,	// (0x00079552) main_sp_fs_ctrlbar_pane_g

0x6d30,	// (0x00070693) main_sp_fs_ctrlbar_pane_t1

0x6d6f,	// (0x000706d2) main_sp_fs_ctrlbar_pane

0x6d93,	// (0x000706f6) main_sp_fs_listscroll_pane_te_cp01

0x6db3,	// (0x00070716) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6db3,	// (0x00070716) popup_sp_fs_action_menu_pane_cp01

0xa32e,	// (0x00073c91) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa32e,	// (0x00073c91) bg_sp_fs_highlight_list_pane_cp01

0xa40e,	// (0x00073d71) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa40e,	// (0x00073d71) sp_fs_action_menu_list_gene_pane_g1

0xecc1,	// (0x00078624) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xecc1,	// (0x00078624) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbfd,	// (0x00079560) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbfd,	// (0x00079560) sp_fs_action_menu_list_gene_pane_g

0xa41d,	// (0x00073d80) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa41d,	// (0x00073d80) sp_fs_action_menu_list_gene_pane_t1

0xa435,	// (0x00073d98) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa435,	// (0x00073d98) sp_fs_action_menu_list_gene_pane

0xecce,	// (0x00078631) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xecce,	// (0x00078631) popup_sp_fs_action_menu_bg_pane

0xa454,	// (0x00073db7) sp_fs_action_menu_list_pane_ParamLimits

0xa454,	// (0x00073db7) sp_fs_action_menu_list_pane

0x6dd8,	// (0x0007073b) sp_fs_scroll_pane_cp01_ParamLimits

0x6dd8,	// (0x0007073b) sp_fs_scroll_pane_cp01

0xb664,	// (0x00074fc7) list_medium_line_plain_t2_t1

0xb664,	// (0x00074fc7) list_medium_line_plain_t2_t2

0x0001,

0xfbea,	// (0x0007954d) list_medium_line_plain_t2_t

0xb664,	// (0x00074fc7) list_medium_line_plain_t3_t1

0xb664,	// (0x00074fc7) list_medium_line_plain_t3_t2

0xb664,	// (0x00074fc7) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00078bdf) list_medium_line_plain_t3_t

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g2_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_x2_t2_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_x2_t2_g2_t

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g2_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_x2_t4_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t3

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x00078b32) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x00078b32) list_medium_line_x2_t4_g2_t

0xb128,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g1

0xb128,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g2

0xb128,	// (0x00074a8b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x00078d00) list_medium_line_t3_right_iconx2_g

0xb664,	// (0x00074fc7) list_medium_line_t3_right_iconx2_t1

0xb664,	// (0x00074fc7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbea,	// (0x0007954d) list_medium_line_t3_right_iconx2_t

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g1

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g2

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g3

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x00078b29) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x00078b29) list_medium_line_x3_t4_g4_g

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t3

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x00078b32) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x00078b32) list_medium_line_x3_t4_g4_t

0x6dfe,	// (0x00070761) list_single_dyc_row_text_pane_t1_ParamLimits

0x6dfe,	// (0x00070761) list_single_dyc_row_text_pane_t1

0x6e47,	// (0x000707aa) list_single_dyc_row_text_pane_t2_ParamLimits

0x6e47,	// (0x000707aa) list_single_dyc_row_text_pane_t2

0xa474,	// (0x00073dd7) list_single_dyc_row_text_pane_t3_ParamLimits

0xa474,	// (0x00073dd7) list_single_dyc_row_text_pane_t3

0x0005,

0xfc02,	// (0x00079565) list_single_dyc_row_text_pane_t_ParamLimits

0xfc02,	// (0x00079565) list_single_dyc_row_text_pane_t

0xa498,	// (0x00073dfb) list_single_dyc_row_pane_g1_ParamLimits

0xa498,	// (0x00073dfb) list_single_dyc_row_pane_g1

0xa4a4,	// (0x00073e07) list_single_dyc_row_pane_g2_ParamLimits

0xa4a4,	// (0x00073e07) list_single_dyc_row_pane_g2

0xa4b0,	// (0x00073e13) list_single_dyc_row_pane_g3_ParamLimits

0xa4b0,	// (0x00073e13) list_single_dyc_row_pane_g3

0xa4bc,	// (0x00073e1f) list_single_dyc_row_pane_g4_ParamLimits

0xa4bc,	// (0x00073e1f) list_single_dyc_row_pane_g4

0x0003,

0xfc0f,	// (0x00079572) list_single_dyc_row_pane_g_ParamLimits

0xfc0f,	// (0x00079572) list_single_dyc_row_pane_g

0xa4c8,	// (0x00073e2b) list_single_dyc_row_text_pane_ParamLimits

0xa4c8,	// (0x00073e2b) list_single_dyc_row_text_pane

0xa2cd,	// (0x00073c30) bg_sp_fs_scroll_pane

0xecdc,	// (0x0007863f) thumb_sp_fs_scroll_pane

0xaec5,	// (0x00074828) list_medium_line_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g1

0xb0fa,	// (0x00074a5d) list_medium_line_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t1

0xaec5,	// (0x00074828) list_medium_line_x2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_g1

0xaec5,	// (0x00074828) list_medium_line_x2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_x2_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t1

0xaec5,	// (0x00074828) list_medium_line_x3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x3_g1

0xe936,	// (0x00078299) list_medium_line_x3_g2_ParamLimits

0xe936,	// (0x00078299) list_medium_line_x3_g2

0x0001,

0xfc18,	// (0x0007957b) list_medium_line_x3_g_ParamLimits

0xfc18,	// (0x0007957b) list_medium_line_x3_g

0xece5,	// (0x00078648) list_medium_line_x3_t1_ParamLimits

0xece5,	// (0x00078648) list_medium_line_x3_t1

0xecf9,	// (0x0007865c) thumb_sp_fs_scroll_pane_g1

0xed02,	// (0x00078665) thumb_sp_fs_scroll_pane_g2

0xed0b,	// (0x0007866e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc1d,	// (0x00079580) thumb_sp_fs_scroll_pane_g

0xecf9,	// (0x0007865c) bg_sp_fs_scroll_pane_g1

0xed02,	// (0x00078665) bg_sp_fs_scroll_pane_g2

0xed0b,	// (0x0007866e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc1d,	// (0x00079580) bg_sp_fs_scroll_pane_g

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g1

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g2

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g3

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x00078b29) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x00078b29) list_medium_line_x2_t3_g4_g

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t1

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t2

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_x2_t3_g4_t

0xaec5,	// (0x00074828) list_medium_line_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g2_g1

0xaec5,	// (0x00074828) list_medium_line_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_g2_t1

0xaec5,	// (0x00074828) list_medium_line_t3_g2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g2_g1

0xaec5,	// (0x00074828) list_medium_line_t3_g2_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x00078b24) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x00078b24) list_medium_line_t3_g2_g

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t2

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_t3_g2_t

0xb128,	// (0x00074a8b) list_medium_line_right_icon_g1

0xb664,	// (0x00074fc7) list_medium_line_right_icon_t1

0xaec5,	// (0x00074828) list_medium_line_t2_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g1

0xb0fa,	// (0x00074a5d) list_medium_line_t2_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t2_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_t2_t

0xaec5,	// (0x00074828) list_medium_line_t3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g1

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t2

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_t3_t

0xaec5,	// (0x00074828) list_medium_line_g3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g3_g1

0xaec5,	// (0x00074828) list_medium_line_g3_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g3_g2

0xaec5,	// (0x00074828) list_medium_line_g3_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x00078b16) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x00078b16) list_medium_line_g3_g

0xb0fa,	// (0x00074a5d) list_medium_line_g3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_g3_t1

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g1

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g2

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x00078b16) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x00078b16) list_medium_line_t2_g3_g

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g3_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g3_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x00078af9) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x00078af9) list_medium_line_t2_g3_t

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g1_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g1

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g2_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g2

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g3_ParamLimits

0xaec5,	// (0x00074828) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x00078b16) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x00078b16) list_medium_line_t3_g3_g

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t1_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t1

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t2_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t2

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t3_ParamLimits

0xb0fa,	// (0x00074a5d) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x00078b1d) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x00078b1d) list_medium_line_t3_g3_t

0xb128,	// (0x00074a8b) list_medium_line_right_iconx2_g1

0xb128,	// (0x00074a8b) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x00078cfb) list_medium_line_right_iconx2_g

0xb664,	// (0x00074fc7) list_medium_line_right_iconx2_t1

0xb128,	// (0x00074a8b) list_medium_line_t2_right_iconx2_g1

0xb128,	// (0x00074a8b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x00078cfb) list_medium_line_t2_right_iconx2_g

0xb664,	// (0x00074fc7) list_medium_line_t2_right_iconx2_t1

0xb664,	// (0x00074fc7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbea,	// (0x0007954d) list_medium_line_t2_right_iconx2_t

0xb664,	// (0x00074fc7) list_medium_line_x4_t4_t1

0xb664,	// (0x00074fc7) list_medium_line_x4_t4_t2

0xb664,	// (0x00074fc7) list_medium_line_x4_t4_t3

0xb664,	// (0x00074fc7) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00078be6) list_medium_line_x4_t4_t

0x6fbf,	// (0x00070922) tport_appsw_pane_ParamLimits

0x6fbf,	// (0x00070922) tport_appsw_pane

0x6fd7,	// (0x0007093a) tport_contact_pane_ParamLimits

0x6fd7,	// (0x0007093a) tport_contact_pane

0x6fef,	// (0x00070952) tport_listscroll_pane_ParamLimits

0x6fef,	// (0x00070952) tport_listscroll_pane

0x7009,	// (0x0007096c) cell_tport_appsw_pane_ParamLimits

0x7009,	// (0x0007096c) cell_tport_appsw_pane

0xbbdf,	// (0x00075542) tport_appsw_pane_g1_ParamLimits

0xbbdf,	// (0x00075542) tport_appsw_pane_g1

0xed14,	// (0x00078677) tport_contact_pane_g1

0xed1d,	// (0x00078680) tport_contact_pane_t1

0xed2b,	// (0x0007868e) tport_contact_pane_t2

0x0001,

0xfc24,	// (0x00079587) tport_contact_pane_t

0xed39,	// (0x0007869c) list_tport_pane

0xed42,	// (0x000786a5) scroll_pane_cp_030

0x7051,	// (0x000709b4) cell_tport_appsw_pane_g1

0x7061,	// (0x000709c4) cell_tport_appsw_pane_t1

0x706f,	// (0x000709d2) grid_highlight_pane_cp019

0x7077,	// (0x000709da) list_tport_double_graphic_pane_ParamLimits

0x7077,	// (0x000709da) list_tport_double_graphic_pane

0xa32e,	// (0x00073c91) list_highlight_pane_cp023_ParamLimits

0xa32e,	// (0x00073c91) list_highlight_pane_cp023

0x7084,	// (0x000709e7) list_tport_double_graphic_pane_g1_ParamLimits

0x7084,	// (0x000709e7) list_tport_double_graphic_pane_g1

0x7091,	// (0x000709f4) list_tport_double_graphic_pane_t1_ParamLimits

0x7091,	// (0x000709f4) list_tport_double_graphic_pane_t1

0x70a6,	// (0x00070a09) list_tport_double_graphic_pane_t2_ParamLimits

0x70a6,	// (0x00070a09) list_tport_double_graphic_pane_t2

0x0001,

0xfc30,	// (0x00079593) list_tport_double_graphic_pane_t_ParamLimits

0xfc30,	// (0x00079593) list_tport_double_graphic_pane_t

0xa2cd,	// (0x00073c30) main_cale_note_pane

0x4eba,	// (0x0006e81d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4eba,	// (0x0006e81d) cell_vitu2_function_top_wide_pane_cp01

0x6806,	// (0x00070169) wait_bar_pane_cp05_ParamLimits

0xa32e,	// (0x00073c91) listscroll_cmail_pane

0xed53,	// (0x000786b6) list_cmail_pane

0x70b8,	// (0x00070a1b) list_cmail_body_pane

0x70ce,	// (0x00070a31) list_single_cmail_header_caption_pane

0x70e5,	// (0x00070a48) list_single_cmail_header_detail_pane_ParamLimits

0x70e5,	// (0x00070a48) list_single_cmail_header_detail_pane

0xed6a,	// (0x000786cd) list_single_cmail_header_caption_pane_t1

0x7113,	// (0x00070a76) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7113,	// (0x00070a76) list_single_cmail_header_detail_pane_g1

0xa4e7,	// (0x00073e4a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa4e7,	// (0x00073e4a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc35,	// (0x00079598) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc35,	// (0x00079598) list_single_cmail_header_detail_pane_g

0x712b,	// (0x00070a8e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x712b,	// (0x00070a8e) list_single_cmail_header_detail_pane_t1

0x7169,	// (0x00070acc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7169,	// (0x00070acc) list_single_cmail_header_editor_pane_bg

0xe7e1,	// (0x00078144) list_cmail_body_pane_g1

0xed8e,	// (0x000786f1) list_cmail_body_pane_t1

0xdba5,	// (0x00077508) list_single_cmail_header_editor_pane_bg_g1

0xb342,	// (0x00074ca5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdbb5,	// (0x00077518) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdbad,	// (0x00077510) list_single_cmail_header_editor_pane_bg_g1_copy3

0xddfd,	// (0x00077760) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdbd5,	// (0x00077538) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdbc5,	// (0x00077528) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdbcd,	// (0x00077530) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb322,	// (0x00074c85) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7182,	// (0x00070ae5) calenote_gesture_pane_ParamLimits

0x7182,	// (0x00070ae5) calenote_gesture_pane

0x71a2,	// (0x00070b05) calenote_window_pane_ParamLimits

0x71a2,	// (0x00070b05) calenote_window_pane

0xed9c,	// (0x000786ff) popup_note_window_cp01

0x71be,	// (0x00070b21) calenote_swipe_1_pane_ParamLimits

0x71be,	// (0x00070b21) calenote_swipe_1_pane

0x6c44,	// (0x000705a7) calenote_swipe_2_pane_ParamLimits

0x6c44,	// (0x000705a7) calenote_swipe_2_pane

0xeb77,	// (0x000784da) calenote_swipe_1_pane_g1_ParamLimits

0xeb77,	// (0x000784da) calenote_swipe_1_pane_g1

0xeb84,	// (0x000784e7) calenote_swipe_1_pane_g2_ParamLimits

0xeb84,	// (0x000784e7) calenote_swipe_1_pane_g2

0x0001,

0xfbd2,	// (0x00079535) calenote_swipe_1_pane_g_ParamLimits

0xfbd2,	// (0x00079535) calenote_swipe_1_pane_g

0xedae,	// (0x00078711) calenote_swipe_1_pane_t1_ParamLimits

0xedae,	// (0x00078711) calenote_swipe_1_pane_t1

0xeb77,	// (0x000784da) calenote_swipe_2_pane_g1_ParamLimits

0xeb77,	// (0x000784da) calenote_swipe_2_pane_g1

0xedcd,	// (0x00078730) calenote_swipe_2_pane_g2_ParamLimits

0xedcd,	// (0x00078730) calenote_swipe_2_pane_g2

0x0001,

0xfc41,	// (0x000795a4) calenote_swipe_2_pane_g_ParamLimits

0xfc41,	// (0x000795a4) calenote_swipe_2_pane_g

0xedd9,	// (0x0007873c) calenote_swipe_2_pane_t1_ParamLimits

0xedd9,	// (0x0007873c) calenote_swipe_2_pane_t1

0xa2cd,	// (0x00073c30) main_mup_navstr_pane

0x3d49,	// (0x0006d6ac) main_mup3_pane_t7_ParamLimits

0x3d49,	// (0x0006d6ac) main_mup3_pane_t7

0x93f3,	// (0x00072d56) main_mp4_pane_g6_ParamLimits

0x93f3,	// (0x00072d56) main_mp4_pane_g6

0x95b5,	// (0x00072f18) main_image3_pane_t4_ParamLimits

0x95b5,	// (0x00072f18) main_image3_pane_t4

0x71d3,	// (0x00070b36) popup_navstr_preview_pane_ParamLimits

0x71d3,	// (0x00070b36) popup_navstr_preview_pane

0x71e7,	// (0x00070b4a) scroll_navstr_pane_ParamLimits

0x71e7,	// (0x00070b4a) scroll_navstr_pane

0xa2cd,	// (0x00073c30) bg_popup_preview_window_pane_cp04

0xee00,	// (0x00078763) popup_navstr_preview_pane_t1

0x71fb,	// (0x00070b5e) scroll_navstr_pane_g1_ParamLimits

0x71fb,	// (0x00070b5e) scroll_navstr_pane_g1

0x720f,	// (0x00070b72) scroll_navstr_pane_t1_ParamLimits

0x720f,	// (0x00070b72) scroll_navstr_pane_t1

0xeda5,	// (0x00078708) bg_button_pane_cp014

0xeda5,	// (0x00078708) bg_button_pane_cp030

0x6b1d,	// (0x00070480) list_double_fisheye_pane_g4_ParamLimits

0x6b1d,	// (0x00070480) list_double_fisheye_pane_g4

0x6b29,	// (0x0007048c) list_double_fisheye_pane_g5_ParamLimits

0x6b29,	// (0x0007048c) list_double_fisheye_pane_g5

0xd8f8,	// (0x0007725b) sp_fs_scroll_pane_cp03

0xec8e,	// (0x000785f1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xec9a,	// (0x000785fd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbef,	// (0x00079552) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6d30,	// (0x00070693) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xed62,	// (0x000786c5) sp_fs_scroll_pane_cp02

0xb03a,	// (0x0007499d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb03a,	// (0x0007499d) popup_sp_fs_calendar_preview_list_single_pane

0xa2cd,	// (0x00073c30) main_cam6_pano_pane

0x9085,	// (0x000729e8) main_mup3_pane_ParamLimits

0xa2cd,	// (0x00073c30) main_phacti_pane

0x66d9,	// (0x0007003c) bg_button_pane_cp11

0x66f3,	// (0x00070056) main_mobtv_info_pane_g2_ParamLimits

0x66f3,	// (0x00070056) main_mobtv_info_pane_g2

0x0001,

0xfb4f,	// (0x000794b2) main_mobtv_info_pane_g_ParamLimits

0xfb4f,	// (0x000794b2) main_mobtv_info_pane_g

0x68d0,	// (0x00070233) sc_clock_pane_t5_ParamLimits

0x68d0,	// (0x00070233) sc_clock_pane_t5

0x6998,	// (0x000702fb) main_radioblah_pane_g1_ParamLimits

0xeaa8,	// (0x0007840b) main_radioblah_pane_t3_ParamLimits

0xeaa8,	// (0x0007840b) main_radioblah_pane_t3

0xeac0,	// (0x00078423) main_radioblah_pane_t4_ParamLimits

0xeac0,	// (0x00078423) main_radioblah_pane_t4

0x69c0,	// (0x00070323) main_radioblah_text_pane_ParamLimits

0x69c0,	// (0x00070323) main_radioblah_text_pane

0x69d2,	// (0x00070335) main_radioblah_info_pane_g1_ParamLimits

0x6a6b,	// (0x000703ce) main_radioblah_info_pane_t4_ParamLimits

0x6a6b,	// (0x000703ce) main_radioblah_info_pane_t4

0xa32e,	// (0x00073c91) main_sp_fs_calendar_pane

0x7226,	// (0x00070b89) main_phacti_pane_g1

0x722e,	// (0x00070b91) phacti_note_pane_ParamLimits

0x722e,	// (0x00070b91) phacti_note_pane

0xee17,	// (0x0007877a) phacti_term_pane_ParamLimits

0xee17,	// (0x0007877a) phacti_term_pane

0xee2c,	// (0x0007878f) phacti_note_pane_t1_ParamLimits

0xee2c,	// (0x0007878f) phacti_note_pane_t1

0xa517,	// (0x00073e7a) phacti_term_pane_g1

0xa51f,	// (0x00073e82) phacti_term_pane_t1_ParamLimits

0xa51f,	// (0x00073e82) phacti_term_pane_t1

0xee43,	// (0x000787a6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xee4b,	// (0x000787ae) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc4b,	// (0x000795ae) popup_sp_fs_calendar_preview_list_single_pane_g

0xee53,	// (0x000787b6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xee53,	// (0x000787b6) popup_sp_fs_calendar_preview_list_single_pane_t1

0xee69,	// (0x000787cc) aid_popup_sp_fs_bg_corner_pane

0xb128,	// (0x00074a8b) popup_sp_fs_calendar_preview_bg_pane_g1

0xa2cd,	// (0x00073c30) popup_sp_fs_calendar_preview_bg_pane

0xee71,	// (0x000787d4) popup_sp_fs_calendar_preview_list_pane

0xbc15,	// (0x00075578) bg_main_sp_fs_cale_pane_ParamLimits

0xbc15,	// (0x00075578) bg_main_sp_fs_cale_pane

0xa552,	// (0x00073eb5) listscroll_cale_mrui_pane_ParamLimits

0xa552,	// (0x00073eb5) listscroll_cale_mrui_pane

0xa567,	// (0x00073eca) listscroll_sp_fs_schedule_track_pane

0xa570,	// (0x00073ed3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa570,	// (0x00073ed3) main_sp_fs_ctrlbar_pane_cp01

0xee79,	// (0x000787dc) main_sp_fs_ribbon_pane

0xa583,	// (0x00073ee6) popup_sp_fs_cale_preview_window

0x72a3,	// (0x00070c06) list_single_sp_fs_schedule_track_pane_ParamLimits

0x72a3,	// (0x00070c06) list_single_sp_fs_schedule_track_pane

0xa32e,	// (0x00073c91) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa32e,	// (0x00073c91) bg_sp_fs_highlight_list_pane_cp03

0x72b7,	// (0x00070c1a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x72b7,	// (0x00070c1a) list_single_sp_fs_schedule_track_pane_g1

0x72c3,	// (0x00070c26) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x72c3,	// (0x00070c26) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc50,	// (0x000795b3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc50,	// (0x000795b3) list_single_sp_fs_schedule_track_pane_g

0x72cf,	// (0x00070c32) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x72cf,	// (0x00070c32) list_single_sp_fs_schedule_track_pane_t1

0x72e9,	// (0x00070c4c) sp_fs_schedule_track_pane_ParamLimits

0x72e9,	// (0x00070c4c) sp_fs_schedule_track_pane

0xee81,	// (0x000787e4) sp_fs_schedule_track_pane_g1

0xee89,	// (0x000787ec) sp_fs_schedule_track_pane_g2

0xee91,	// (0x000787f4) sp_fs_schedule_track_pane_g3

0xee99,	// (0x000787fc) sp_fs_schedule_track_pane_g4

0xeea1,	// (0x00078804) sp_fs_schedule_track_pane_g5

0x0004,

0xfc55,	// (0x000795b8) sp_fs_schedule_track_pane_g

0xdba5,	// (0x00077508) bg_sp_fs_schedule_viewer_highlight_g1

0xb342,	// (0x00074ca5) bg_sp_fs_schedule_viewer_highlight_g2

0xdbad,	// (0x00077510) bg_sp_fs_schedule_viewer_highlight_g3

0xdbb5,	// (0x00077518) bg_sp_fs_schedule_viewer_highlight_g4

0xddfd,	// (0x00077760) bg_sp_fs_schedule_viewer_highlight_g5

0xdbc5,	// (0x00077528) bg_sp_fs_schedule_viewer_highlight_g6

0xdbcd,	// (0x00077530) bg_sp_fs_schedule_viewer_highlight_g7

0xdbd5,	// (0x00077538) bg_sp_fs_schedule_viewer_highlight_g8

0xb322,	// (0x00074c85) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc60,	// (0x000795c3) bg_sp_fs_schedule_viewer_highlight_g

0xa2cd,	// (0x00073c30) bg_main_sp_fs_ribbon_pane

0x72fa,	// (0x00070c5d) main_sp_fs_ribbon_pane_g1

0xeea9,	// (0x0007880c) main_sp_fs_ribbon_pane_t1

0x7303,	// (0x00070c66) main_sp_fs_ribbon_pane_t2

0xeeb8,	// (0x0007881b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc73,	// (0x000795d6) main_sp_fs_ribbon_pane_t

0xeec7,	// (0x0007882a) main_sp_fs_ribbon_scheduler_pane

0xeecf,	// (0x00078832) bg_main_sp_fs_ribbon_pane_g1

0xeed8,	// (0x0007883b) bg_main_sp_fs_ribbon_pane_g2

0xeee1,	// (0x00078844) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc7a,	// (0x000795dd) bg_main_sp_fs_ribbon_pane_g

0xeee9,	// (0x0007884c) main_sp_fs_ribbon_scheduler_pane_g1

0xeef2,	// (0x00078855) main_sp_fs_ribbon_scheduler_pane_g2

0xeefb,	// (0x0007885e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc81,	// (0x000795e4) main_sp_fs_ribbon_scheduler_pane_g

0xef04,	// (0x00078867) list_cale_mrui_pane

0x7312,	// (0x00070c75) sp_fs_scroll_pane_cp07_ParamLimits

0x7312,	// (0x00070c75) sp_fs_scroll_pane_cp07

0x732e,	// (0x00070c91) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x732e,	// (0x00070c91) bg_sp_fs_schedule_viewer_highlight

0xef11,	// (0x00078874) list_single_sp_fs_schedule_track_pane_cp01

0xef19,	// (0x0007887c) list_sp_fs_schedule_track_pane

0xef21,	// (0x00078884) sp_fs_scroll_pane_cp06_ParamLimits

0xef21,	// (0x00078884) sp_fs_scroll_pane_cp06

0xb128,	// (0x00074a8b) bgmain_sp_fs_calendar_pane_g1

0x733e,	// (0x00070ca1) list_single_cale_mrui_pane_ParamLimits

0x733e,	// (0x00070ca1) list_single_cale_mrui_pane

0xa595,	// (0x00073ef8) list_single_cale_mrui_row_pane_ParamLimits

0xa595,	// (0x00073ef8) list_single_cale_mrui_row_pane

0xa5a2,	// (0x00073f05) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa5a2,	// (0x00073f05) list_single_cale_mrui_row_pane_g1

0xa5da,	// (0x00073f3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa5da,	// (0x00073f3d) list_single_cale_mrui_row_pane_t1

0x735f,	// (0x00070cc2) list_single_cale_mrui_row_pane_t2_ParamLimits

0x735f,	// (0x00070cc2) list_single_cale_mrui_row_pane_t2

0xa5ec,	// (0x00073f4f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa5ec,	// (0x00073f4f) list_single_cale_mrui_row_pane_t3

0xa61b,	// (0x00073f7e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa61b,	// (0x00073f7e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc8f,	// (0x000795f2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc8f,	// (0x000795f2) list_single_cale_mrui_row_pane_t

0x73c7,	// (0x00070d2a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x73c7,	// (0x00070d2a) list_single_cmail_header_editor_pane_bg_cp01

0x73f5,	// (0x00070d58) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x73f5,	// (0x00070d58) list_single_cmail_header_editor_pane_bg_cp02

0x7415,	// (0x00070d78) main_radioblah_text_pane_t1_ParamLimits

0x7415,	// (0x00070d78) main_radioblah_text_pane_t1

0xef40,	// (0x000788a3) cam6_indi_pane_cp01

0xef48,	// (0x000788ab) cam6_mode_pane_cp01

0xef50,	// (0x000788b3) cam6_pano_pane

0xef59,	// (0x000788bc) cam6_zoom_pane_cp01

0xef61,	// (0x000788c4) cam6_pano_image_pane

0xef6c,	// (0x000788cf) cam6_pano_pane_g1

0xe7e1,	// (0x00078144) cam6_pano_pane_g2

0xef75,	// (0x000788d8) cam6_pano_pane_g3

0xef7e,	// (0x000788e1) cam6_pano_pane_g4

0xd850,	// (0x000771b3) cam6_pano_pane_g5

0xef87,	// (0x000788ea) cam6_pano_pane_g6

0xef91,	// (0x000788f4) cam6_pano_pane_g7

0xef99,	// (0x000788fc) cam6_pano_pane_g8

0xefa2,	// (0x00078905) cam6_pano_pane_g9

0x0008,

0xfc98,	// (0x000795fb) cam6_pano_pane_g

0xa2cd,	// (0x00073c30) main_browser_tag_pane

0xedf8,	// (0x0007875b) grid_navstr_albumart_pane

0xefad,	// (0x00078910) cell_navstr_albumart_pane_ParamLimits

0xefad,	// (0x00078910) cell_navstr_albumart_pane

0xefcd,	// (0x00078930) cell_navstr_albumart_pane_g1

0xcd1b,	// (0x0007667e) cell_navstr_albumart_pane_g2

0xcd2b,	// (0x0007668e) cell_navstr_albumart_pane_g3

0xcd23,	// (0x00076686) cell_navstr_albumart_pane_g4

0x0003,

0xfcab,	// (0x0007960e) cell_navstr_albumart_pane_g

0x7430,	// (0x00070d93) bt_list_pane_ParamLimits

0x7430,	// (0x00070d93) bt_list_pane

0x7444,	// (0x00070da7) bt_list_pane_t1

0x7453,	// (0x00070db6) bt_list_pane_t2

0x0001,

0xfcb4,	// (0x00079617) bt_list_pane_t

0xa2cd,	// (0x00073c30) main_cale_prevew_pane

0x7462,	// (0x00070dc5) popup_cale_preview_window_ParamLimits

0x7462,	// (0x00070dc5) popup_cale_preview_window

0xa32e,	// (0x00073c91) bg_popup_preview_window_pane_cp05_ParamLimits

0xa32e,	// (0x00073c91) bg_popup_preview_window_pane_cp05

0xefd5,	// (0x00078938) list_cale_preview_pane_ParamLimits

0xefd5,	// (0x00078938) list_cale_preview_pane

0x747b,	// (0x00070dde) list_double_cale_preview_pane_ParamLimits

0x747b,	// (0x00070dde) list_double_cale_preview_pane

0xdbdd,	// (0x00077540) list_single_cale_preview_pane_ParamLimits

0xdbdd,	// (0x00077540) list_single_cale_preview_pane

0x748d,	// (0x00070df0) list_single_cale_preview_pane_g1

0x7495,	// (0x00070df8) list_single_cale_preview_pane_t1_ParamLimits

0x7495,	// (0x00070df8) list_single_cale_preview_pane_t1

0x74aa,	// (0x00070e0d) list_double_cale_preview_pane_g1

0x74b2,	// (0x00070e15) list_double_cale_preview_pane_t1_ParamLimits

0x74b2,	// (0x00070e15) list_double_cale_preview_pane_t1

0x74c7,	// (0x00070e2a) list_double_cale_preview_pane_t2_ParamLimits

0x74c7,	// (0x00070e2a) list_double_cale_preview_pane_t2

0x0001,

0xfcb9,	// (0x0007961c) list_double_cale_preview_pane_t_ParamLimits

0xfcb9,	// (0x0007961c) list_double_cale_preview_pane_t

0xa2cd,	// (0x00073c30) main_ezdial_pane

0xa32e,	// (0x00073c91) main_sp_fs_email_pane_ParamLimits

0x6ca0,	// (0x00070603) cmail_ddmenu_btn01_pane_ParamLimits

0x6ca0,	// (0x00070603) cmail_ddmenu_btn01_pane

0x6cb3,	// (0x00070616) cmail_ddmenu_btn02_pane_ParamLimits

0x6cb3,	// (0x00070616) cmail_ddmenu_btn02_pane

0x6cd6,	// (0x00070639) cmail_ddmenu_btn03_pane_ParamLimits

0x6cd6,	// (0x00070639) cmail_ddmenu_btn03_pane

0x6d6f,	// (0x000706d2) main_sp_fs_ctrlbar_pane_ParamLimits

0x6d93,	// (0x000706f6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x70b8,	// (0x00070a1b) list_cmail_body_pane_ParamLimits

0xed78,	// (0x000786db) bg_button_pane_cp12

0xed81,	// (0x000786e4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xed81,	// (0x000786e4) list_single_cmail_header_detail_pane_g3

0xa4f3,	// (0x00073e56) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa4f3,	// (0x00073e56) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc3c,	// (0x0007959f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc3c,	// (0x0007959f) list_single_cmail_header_detail_pane_t

0xa534,	// (0x00073e97) phacti_term_pane_t2_ParamLimits

0xa534,	// (0x00073e97) phacti_term_pane_t2

0x0001,

0xfc46,	// (0x000795a9) phacti_term_pane_t_ParamLimits

0xfc46,	// (0x000795a9) phacti_term_pane_t

0xefe1,	// (0x00078944) aid_size_list_single_double

0x74df,	// (0x00070e42) popup_ezdial_listscroll_window

0x74fb,	// (0x00070e5e) popup_number_entry_window_cp01

0xb0f2,	// (0x00074a55) bg_popup_call_pane_cp09

0xefed,	// (0x00078950) ezdial_list_pane

0xeff5,	// (0x00078958) scroll_pane_cp23

0xbc15,	// (0x00075578) bg_button_pane_cp028_ParamLimits

0xbc15,	// (0x00075578) bg_button_pane_cp028

0x7509,	// (0x00070e6c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7509,	// (0x00070e6c) cmail_ddmenu_btn01_pane_g1

0x7515,	// (0x00070e78) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x7515,	// (0x00070e78) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcbe,	// (0x00079621) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcbe,	// (0x00079621) cmail_ddmenu_btn01_pane_g

0xeffd,	// (0x00078960) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeffd,	// (0x00078960) cmail_ddmenu_btn01_pane_t1

0xbc15,	// (0x00075578) bg_button_pane_cp029_ParamLimits

0xbc15,	// (0x00075578) bg_button_pane_cp029

0x7521,	// (0x00070e84) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7521,	// (0x00070e84) cmail_ddmenu_btn02_pane_g1

0x7539,	// (0x00070e9c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7539,	// (0x00070e9c) cmail_ddmenu_btn02_pane_t1

0xa32e,	// (0x00073c91) bg_button_pane_cp031_ParamLimits

0xa32e,	// (0x00073c91) bg_button_pane_cp031

0x7521,	// (0x00070e84) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7521,	// (0x00070e84) cmail_ddmenu_btn03_pane_g1

0x7539,	// (0x00070e9c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7539,	// (0x00070e9c) cmail_ddmenu_btn03_pane_t1

0x46a2,	// (0x0006e005) cell_dialer2_keypad_pane_t1_ParamLimits

0x46bc,	// (0x0006e01f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x46bc,	// (0x0006e01f) cell_dialer2_keypad_pane_t1_copy1

0x64fc,	// (0x0006fe5f) ncimui_group_button_pane

0xa32e,	// (0x00073c91) main_sp_fs_calendar_pane_ParamLimits

0x70ce,	// (0x00070a31) list_single_cmail_header_caption_pane_ParamLimits

0xa549,	// (0x00073eac) aid_recal_txt_sm_pane

0xa2cd,	// (0x00073c30) mian_recal_day_pane

0xa583,	// (0x00073ee6) popup_sp_fs_cale_preview_window_ParamLimits

0xf012,	// (0x00078975) list_recal_day_pane

0xa665,	// (0x00073fc8) list_single_recal_day_pane_ParamLimits

0xa665,	// (0x00073fc8) list_single_recal_day_pane

0xf039,	// (0x0007899c) list_single_recal_day_pane_g1_ParamLimits

0xf039,	// (0x0007899c) list_single_recal_day_pane_g1

0xa677,	// (0x00073fda) list_single_recal_day_pane_g2_ParamLimits

0xa677,	// (0x00073fda) list_single_recal_day_pane_g2

0xa683,	// (0x00073fe6) list_single_recal_day_pane_g3_ParamLimits

0xa683,	// (0x00073fe6) list_single_recal_day_pane_g3

0x755d,	// (0x00070ec0) list_single_recal_day_pane_g4_ParamLimits

0x755d,	// (0x00070ec0) list_single_recal_day_pane_g4

0xa68f,	// (0x00073ff2) list_single_recal_day_pane_g5_ParamLimits

0xa68f,	// (0x00073ff2) list_single_recal_day_pane_g5

0xa69b,	// (0x00073ffe) list_single_recal_day_pane_g6_ParamLimits

0xa69b,	// (0x00073ffe) list_single_recal_day_pane_g6

0x0004,

0xfccd,	// (0x00079630) list_single_recal_day_pane_g_ParamLimits

0xfccd,	// (0x00079630) list_single_recal_day_pane_g

0xa6af,	// (0x00074012) list_single_recal_day_pane_t1

0xa6c1,	// (0x00074024) list_single_recal_day_pane_t2

0x0001,

0xfcd8,	// (0x0007963b) list_single_recal_day_pane_t

0x7575,	// (0x00070ed8) ncimui_query_button_pane_ParamLimits

0x7575,	// (0x00070ed8) ncimui_query_button_pane

0x7585,	// (0x00070ee8) ncimui_query_button_pane_t1_ParamLimits

0x7585,	// (0x00070ee8) ncimui_query_button_pane_t1

0x980a,	// (0x0007316d) ncimui_query_button_pane_t2_ParamLimits

0x980a,	// (0x0007316d) ncimui_query_button_pane_t2

0x0001,

0xfcdd,	// (0x00079640) ncimui_query_button_pane_t_ParamLimits

0xfcdd,	// (0x00079640) ncimui_query_button_pane_t

0x7598,	// (0x00070efb) query_button_pane_ParamLimits

0x7598,	// (0x00070efb) query_button_pane

0xa2cd,	// (0x00073c30) bg_button_pane_cp0028

0x981d,	// (0x00073180) query_button_pane_t1

0x313b,	// (0x0006ca9e) main_tport_pane_ParamLimits

0x6f7c,	// (0x000708df) bg_popup_window_pane_cp01_ParamLimits

0x6f7c,	// (0x000708df) bg_popup_window_pane_cp01

0x6f97,	// (0x000708fa) heading_pane_cp08_ParamLimits

0x6f97,	// (0x000708fa) heading_pane_cp08

0x6faa,	// (0x0007090d) heading_pane_cp07_ParamLimits

0x6faa,	// (0x0007090d) heading_pane_cp07

0x7051,	// (0x000709b4) cell_tport_appsw_pane_g2

0x0002,

0xfc29,	// (0x0007958c) cell_tport_appsw_pane_g

0x9d65,	// (0x000736c8) input_candi_list_open_g1

0xb505,	// (0x00074e68) list_cale_time_pane_g6_ParamLimits

0xb505,	// (0x00074e68) list_cale_time_pane_g6

0x3756,	// (0x0006d0b9) aid_size_touch_calib_1_ParamLimits

0x3756,	// (0x0006d0b9) aid_size_touch_calib_1

0x3768,	// (0x0006d0cb) aid_size_touch_calib_2_ParamLimits

0x3768,	// (0x0006d0cb) aid_size_touch_calib_2

0x3780,	// (0x0006d0e3) aid_size_touch_calib_3_ParamLimits

0x3780,	// (0x0006d0e3) aid_size_touch_calib_3

0x379e,	// (0x0006d101) aid_size_touch_calib_4_ParamLimits

0x379e,	// (0x0006d101) aid_size_touch_calib_4

0x37b6,	// (0x0006d119) main_touch_calib_button_group_pane_ParamLimits

0x37b6,	// (0x0006d119) main_touch_calib_button_group_pane

0x37ce,	// (0x0006d131) main_touch_calib_pane_g1_ParamLimits

0x37e0,	// (0x0006d143) main_touch_calib_pane_g2_ParamLimits

0x37f2,	// (0x0006d155) main_touch_calib_pane_g3_ParamLimits

0x3804,	// (0x0006d167) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x0007900f) main_touch_calib_pane_g_ParamLimits

0x3816,	// (0x0006d179) main_touch_calib_pane_t1_ParamLimits

0x3830,	// (0x0006d193) main_touch_calib_pane_t2_ParamLimits

0x384a,	// (0x0006d1ad) main_touch_calib_pane_t3_ParamLimits

0x385e,	// (0x0006d1c1) main_touch_calib_pane_t4_ParamLimits

0x3872,	// (0x0006d1d5) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x00079018) main_touch_calib_pane_t_ParamLimits

0xd616,	// (0x00076f79) list_single_fp_cale_pane_g3_ParamLimits

0xd616,	// (0x00076f79) list_single_fp_cale_pane_g3

0x9085,	// (0x000729e8) bg_button_pane_cp012_ParamLimits

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp03_ParamLimits

0x56b9,	// (0x0006f01c) cell_vitu2_function_top_pane_g1_ParamLimits

0x9085,	// (0x000729e8) bg_vkb2_func_pane_cp04_ParamLimits

0x6487,	// (0x0006fdea) main_ncimui_button_group_pane_ParamLimits

0x6487,	// (0x0006fdea) main_ncimui_button_group_pane

0x64e7,	// (0x0006fe4a) main_ncimui_pane_t3_ParamLimits

0x64e7,	// (0x0006fe4a) main_ncimui_pane_t3

0xee0e,	// (0x00078771) phacti_button_group_pane

0xefe1,	// (0x00078944) aid_size_list_single_double_ParamLimits

0x74df,	// (0x00070e42) popup_ezdial_listscroll_window_ParamLimits

0x74fb,	// (0x00070e5e) popup_number_entry_window_cp01_ParamLimits

0x75ab,	// (0x00070f0e) phacti_button_pane_ParamLimits

0x75ab,	// (0x00070f0e) phacti_button_pane

0xa2cd,	// (0x00073c30) bg_button_pane_cp14

0x982b,	// (0x0007318e) phacti_button_pane_t1

0x75bc,	// (0x00070f1f) main_touch_calib_button_pane_ParamLimits

0x75bc,	// (0x00070f1f) main_touch_calib_button_pane

0xaf37,	// (0x0007489a) bg_button_pane_cp18_ParamLimits

0xaf37,	// (0x0007489a) bg_button_pane_cp18

0x9839,	// (0x0007319c) main_touch_calib_button_pane_t1_ParamLimits

0x9839,	// (0x0007319c) main_touch_calib_button_pane_t1

0x984f,	// (0x000731b2) main_touch_calib_button_pane_t2_ParamLimits

0x984f,	// (0x000731b2) main_touch_calib_button_pane_t2

0x0001,

0x036f,	// (0x00069cd2) main_touch_calib_button_pane_t_ParamLimits

0x036f,	// (0x00069cd2) main_touch_calib_button_pane_t

0xa2cd,	// (0x00073c30) cell_ncimui_button_pane

0xa2cd,	// (0x00073c30) bg_button_pane_cp032

0x986d,	// (0x000731d0) cell_ncimui_button_pane_t1

0x9595,	// (0x00072ef8) image3_infobar_pane_ParamLimits

0x9595,	// (0x00072ef8) image3_infobar_pane

0x68fc,	// (0x0007025f) fs_bigclock_status_pane_ParamLimits

0x68fc,	// (0x0007025f) fs_bigclock_status_pane

0x6909,	// (0x0007026c) main_fs_bigclock_clock_pane_ParamLimits

0x6909,	// (0x0007026c) main_fs_bigclock_clock_pane

0x6927,	// (0x0007028a) main_fs_bigclock_indi_pane_ParamLimits

0x6927,	// (0x0007028a) main_fs_bigclock_indi_pane

0x6959,	// (0x000702bc) main_fs_bigclock_swipe_pane_ParamLimits

0x6959,	// (0x000702bc) main_fs_bigclock_swipe_pane

0xa2cd,	// (0x00073c30) main_fs_clock_dumped_data

0xe8ee,	// (0x00078251) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe8ee,	// (0x00078251) list_single_fs_bigclock_indicator_pane_g1

0xe90a,	// (0x0007826d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe90a,	// (0x0007826d) list_single_fs_bigclock_indicator_pane_g2

0xe94d,	// (0x000782b0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe94d,	// (0x000782b0) list_single_fs_bigclock_indicator_pane_g3

0xe967,	// (0x000782ca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe967,	// (0x000782ca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb83,	// (0x000794e6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb83,	// (0x000794e6) list_single_fs_bigclock_indicator_pane_g

0xe992,	// (0x000782f5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe992,	// (0x000782f5) list_single_fs_bigclock_indicator_pane_t1

0xe9ba,	// (0x0007831d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe9ba,	// (0x0007831d) list_single_fs_bigclock_indicator_pane_t2

0xe9e2,	// (0x00078345) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe9e2,	// (0x00078345) list_single_fs_bigclock_indicator_pane_t3

0xea0a,	// (0x0007836d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xea0a,	// (0x0007836d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb8e,	// (0x000794f1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb8e,	// (0x000794f1) list_single_fs_bigclock_indicator_pane_t

0x987b,	// (0x000731de) image3_infobar_fav_pane_ParamLimits

0x987b,	// (0x000731de) image3_infobar_fav_pane

0x988b,	// (0x000731ee) image3_infobar_loc_pane_ParamLimits

0x988b,	// (0x000731ee) image3_infobar_loc_pane

0x989f,	// (0x00073202) image3_infobar_time_pane_ParamLimits

0x989f,	// (0x00073202) image3_infobar_time_pane

0xb128,	// (0x00074a8b) image3_infobar_time_pane_g1

0x98af,	// (0x00073212) image3_infobar_time_pane_t1

0xb128,	// (0x00074a8b) image3_infobar_loc_pane_g1

0x98bd,	// (0x00073220) image3_infobar_loc_pane_g2

0x0001,

0xfce2,	// (0x00079645) image3_infobar_loc_pane_g

0x98c5,	// (0x00073228) image3_infobar_loc_pane_t1

0xb128,	// (0x00074a8b) image3_infobar_fav_pane_g1

0x98d3,	// (0x00073236) image3_infobar_fav_pane_g2

0x0001,

0xfce7,	// (0x0007964a) image3_infobar_fav_pane_g

0x98db,	// (0x0007323e) fs_bigclock_status_battery_pane

0x98e4,	// (0x00073247) fs_bigclock_status_signal_pane

0x98ed,	// (0x00073250) fs_bigclock_status_title_pane

0x98f6,	// (0x00073259) fs_bigclock_status_signal_pane_g1

0x98ff,	// (0x00073262) fs_bigclock_status_signal_pane_g2

0x0001,

0x037e,	// (0x00069ce1) fs_bigclock_status_signal_pane_g

0x9907,	// (0x0007326a) fs_bigclock_status_battery_pane_g1

0x9910,	// (0x00073273) fs_bigclock_status_battery_pane_g2

0x0001,

0x0383,	// (0x00069ce6) fs_bigclock_status_battery_pane_g

0x9918,	// (0x0007327b) fs_bigclock_status_title_pane_t1

0x75d1,	// (0x00070f34) main_fs_bigclock_clock_pane_g1

0x75d1,	// (0x00070f34) main_fs_bigclock_clock_pane_g2

0x75e2,	// (0x00070f45) main_fs_bigclock_clock_pane_g3

0x75e2,	// (0x00070f45) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcec,	// (0x0007964f) main_fs_bigclock_clock_pane_g

0x75f5,	// (0x00070f58) main_fs_bigclock_clock_pane_t1

0x760b,	// (0x00070f6e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcf5,	// (0x00079658) main_fs_bigclock_clock_pane_t

0x9926,	// (0x00073289) list_single_fs_bigclock_indicator_pane_ParamLimits

0x9926,	// (0x00073289) list_single_fs_bigclock_indicator_pane

0x9937,	// (0x0007329a) list_single_fs_bigclock_pane_ParamLimits

0x9937,	// (0x0007329a) list_single_fs_bigclock_pane

0x995d,	// (0x000732c0) main_fs_bigclock_indicator_pane_t1

0x996c,	// (0x000732cf) list_single_fs_bigclock_pane_g1

0x9974,	// (0x000732d7) list_single_fs_bigclock_pane_t1

0xb128,	// (0x00074a8b) main_fs_bigclock_swipe_pane_g1

0x99b7,	// (0x0007331a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd01,	// (0x00079664) main_fs_bigclock_swipe_pane_g

0x99bf,	// (0x00073322) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x99bf,	// (0x00073322) main_fs_bigclock_swipe_pane_t1

0x2232,	// (0x0006bb95) call_type_pane_ParamLimits

0xa2cd,	// (0x00073c30) main_btmg_pane

0xa5ce,	// (0x00073f31) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa5ce,	// (0x00073f31) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc88,	// (0x000795eb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc88,	// (0x000795eb) list_single_cale_mrui_row_pane_g

0xa654,	// (0x00073fb7) list_recal_vselct_arw_lo_pane

0xf031,	// (0x00078994) list_recal_vselct_arw_up_pane

0xa65c,	// (0x00073fbf) list_recal_vselct_pane

0x7665,	// (0x00070fc8) btmg_button_pane

0x766f,	// (0x00070fd2) main_btmg_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp044

0x99dc,	// (0x0007333f) btmg_button_pane_t1

0xceb9,	// (0x0007681c) aid_listscroll_gen

0xa32e,	// (0x00073c91) main_cntbar_detail_pane

0xed4b,	// (0x000786ae) list_cmail_folder_pane

0xd8f8,	// (0x0007725b) sp_fs_scroll_pane_cp03_ParamLimits

0x70ce,	// (0x00070a31) list_single_fs_dyc_pane_cp01_ParamLimits

0x70ce,	// (0x00070a31) list_single_fs_dyc_pane_cp01

0x99ea,	// (0x0007334d) aid_size_cmail_indent

0xa6d3,	// (0x00074036) list_single_dyc_row_pane_cp01

0x76ab,	// (0x0007100e) cntbar_detail_list_pane_ParamLimits

0x76ab,	// (0x0007100e) cntbar_detail_list_pane

0x76f7,	// (0x0007105a) main_cntbar_detail_cont_pane_ParamLimits

0x76f7,	// (0x0007105a) main_cntbar_detail_cont_pane

0xd8f8,	// (0x0007725b) scroll_pane_cp032_ParamLimits

0xd8f8,	// (0x0007725b) scroll_pane_cp032

0x9e63,	// (0x000737c6) cntbar_detail_list_event_pane_ParamLimits

0x9e63,	// (0x000737c6) cntbar_detail_list_event_pane

0x76bb,	// (0x0007101e) cntbar_detail_list_shct_pane

0xb390,	// (0x00074cf3) aid_list_gen

0x99f3,	// (0x00073356) aid_scroll

0x99fc,	// (0x0007335f) aid_size_touch_scroll_bar

0xb319,	// (0x00074c7c) aid_list_double

0x770b,	// (0x0007106e) aid_list_single

0x770b,	// (0x0007106e) aid_list_single_lg

0xa6dc,	// (0x0007403f) aid_list_z_g_a_sm

0xa6e4,	// (0x00074047) aid_list_z_g_d

0xa6ec,	// (0x0007404f) aid_txt_z_prm

0xa6fa,	// (0x0007405d) aid_txt_z_prm_cp01

0xa708,	// (0x0007406b) aid_txt_z_sec

0x7714,	// (0x00071077) main_cntbar_detail_cont_pane_g1_ParamLimits

0x7714,	// (0x00071077) main_cntbar_detail_cont_pane_g1

0x7728,	// (0x0007108b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7728,	// (0x0007108b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd06,	// (0x00079669) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd06,	// (0x00079669) main_cntbar_detail_cont_pane_g

0x9a05,	// (0x00073368) main_cntbar_detail_cont_pane_t1

0x9a13,	// (0x00073376) main_cntbar_detail_cont_pane_t2

0x9a21,	// (0x00073384) main_cntbar_detail_cont_pane_t3

0x0002,

0x03ac,	// (0x00069d0f) main_cntbar_detail_cont_pane_t

0x7738,	// (0x0007109b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7738,	// (0x0007109b) cell_cntbar_detail_list_shct_pane

0x9a2f,	// (0x00073392) cntbar_detail_list_shct_pane_g1

0x9a38,	// (0x0007339b) cntbar_detail_list_shct_pane_g2

0x0001,

0x03b3,	// (0x00069d16) cntbar_detail_list_shct_pane_g

0x774c,	// (0x000710af) cntbar_detail_list_event_pane_g1_ParamLimits

0x774c,	// (0x000710af) cntbar_detail_list_event_pane_g1

0x7758,	// (0x000710bb) cntbar_detail_list_event_pane_g2_ParamLimits

0x7758,	// (0x000710bb) cntbar_detail_list_event_pane_g2

0x0005,

0xfd0b,	// (0x0007966e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd0b,	// (0x0007966e) cntbar_detail_list_event_pane_g

0x77c4,	// (0x00071127) cntbar_detail_list_event_pane_t1_ParamLimits

0x77c4,	// (0x00071127) cntbar_detail_list_event_pane_t1

0x77d9,	// (0x0007113c) cntbar_detail_list_event_pane_t2_ParamLimits

0x77d9,	// (0x0007113c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd18,	// (0x0007967b) cntbar_detail_list_event_pane_t_ParamLimits

0xfd18,	// (0x0007967b) cntbar_detail_list_event_pane_t

0xb128,	// (0x00074a8b) cell_cntbar_detail_list_shct_pane_g1

0xbae0,	// (0x00075443) navi_pane_mv_g3

0xa32e,	// (0x00073c91) main_cntbar_detail_pane_ParamLimits

0xa2cd,	// (0x00073c30) main_notif_wgt_pane

0x9381,	// (0x00072ce4) aid_tch_main_mp4_pane_g4

0x958d,	// (0x00072ef0) popup_slider_window_cp02

0xa64a,	// (0x00073fad) list_recal_day_event_pane

0x7679,	// (0x00070fdc) cntbar_detail_btn_pane_ParamLimits

0x7679,	// (0x00070fdc) cntbar_detail_btn_pane

0x7692,	// (0x00070ff5) cntbar_detail_btn_pane_cp01_ParamLimits

0x7692,	// (0x00070ff5) cntbar_detail_btn_pane_cp01

0x76bb,	// (0x0007101e) cntbar_detail_list_shct_pane_ParamLimits

0x76cb,	// (0x0007102e) cntbar_detail_pane_g1_ParamLimits

0x76cb,	// (0x0007102e) cntbar_detail_pane_g1

0x76db,	// (0x0007103e) cntbar_detail_pane_t1_ParamLimits

0x76db,	// (0x0007103e) cntbar_detail_pane_t1

0x7764,	// (0x000710c7) cntbar_detail_list_event_pane_g3_ParamLimits

0x7764,	// (0x000710c7) cntbar_detail_list_event_pane_g3

0x777c,	// (0x000710df) cntbar_detail_list_event_pane_g4_ParamLimits

0x777c,	// (0x000710df) cntbar_detail_list_event_pane_g4

0x7794,	// (0x000710f7) cntbar_detail_list_event_pane_g5_ParamLimits

0x7794,	// (0x000710f7) cntbar_detail_list_event_pane_g5

0x77ac,	// (0x0007110f) cntbar_detail_list_event_pane_g6_ParamLimits

0x77ac,	// (0x0007110f) cntbar_detail_list_event_pane_g6

0x77ee,	// (0x00071151) cntbar_detail_list_event_pane_t3_ParamLimits

0x77ee,	// (0x00071151) cntbar_detail_list_event_pane_t3

0x7800,	// (0x00071163) popup_notif_wgt_window_ParamLimits

0x7800,	// (0x00071163) popup_notif_wgt_window

0x7819,	// (0x0007117c) popup_submenu_window_cp01_ParamLimits

0x7819,	// (0x0007117c) popup_submenu_window_cp01

0xb0f2,	// (0x00074a55) bg_popup_window_pane_cp10

0x9a41,	// (0x000733a4) listscroll_notif_wgt_pane

0x9a53,	// (0x000733b6) list_notif_wgt_window

0x9a5c,	// (0x000733bf) scroll_pane_cp033

0x782b,	// (0x0007118e) list_notif_wgt_row_pane_ParamLimits

0x782b,	// (0x0007118e) list_notif_wgt_row_pane

0x9a65,	// (0x000733c8) aid_size_list_notif_wgt_del

0x9a72,	// (0x000733d5) list_notif_wgt_row_pane_g1

0x9a7e,	// (0x000733e1) list_notif_wgt_row_pane_g2

0x9a8d,	// (0x000733f0) list_notif_wgt_row_pane_g3

0x0002,

0x03cc,	// (0x00069d2f) list_notif_wgt_row_pane_g

0x9a9a,	// (0x000733fd) list_notif_wgt_row_pane_t1

0x9ab0,	// (0x00073413) list_notif_wgt_row_pane_t2

0x9ac2,	// (0x00073425) list_notif_wgt_row_pane_t3

0x0002,

0x03d3,	// (0x00069d36) list_notif_wgt_row_pane_t

0xde17,	// (0x0007777a) list_recal_day_event_pane_g1

0x9ad4,	// (0x00073437) list_recal_day_event_pane_t1

0xa2cd,	// (0x00073c30) bg_button_pane_cp045

0x783b,	// (0x0007119e) cntbar_detail_btn_pane_t1

0xbc15,	// (0x00075578) main_callh_pane_ParamLimits

0xbc15,	// (0x00075578) main_callh_pane

0xa2cd,	// (0x00073c30) main_coverflow0_pane

0xa2cd,	// (0x00073c30) main_wgtman_pane

0x6971,	// (0x000702d4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6971,	// (0x000702d4) main_fs_bigclock_unlock_btn_pane

0x7049,	// (0x000709ac) bg_button_pane_cp16

0x7059,	// (0x000709bc) cell_tport_appsw_pane_g3

0x7849,	// (0x000711ac) cf0_flow_pane_ParamLimits

0x7849,	// (0x000711ac) cf0_flow_pane

0x9ae3,	// (0x00073446) listscroll_cf0_pane

0x9aee,	// (0x00073451) main_cf0_pane_g1

0x785e,	// (0x000711c1) main_cf0_pane_t1_ParamLimits

0x785e,	// (0x000711c1) main_cf0_pane_t1

0x7875,	// (0x000711d8) main_cf0_pane_t2_ParamLimits

0x7875,	// (0x000711d8) main_cf0_pane_t2

0x0001,

0xfd1f,	// (0x00079682) main_cf0_pane_t_ParamLimits

0xfd1f,	// (0x00079682) main_cf0_pane_t

0x9b00,	// (0x00073463) scroll_pane_cp11

0x788c,	// (0x000711ef) cf0_flow_pane_g1

0x7894,	// (0x000711f7) cf0_flow_pane_g2

0x0001,

0xfd24,	// (0x00079687) cf0_flow_pane_g

0x789c,	// (0x000711ff) cf0_flow_pane_t1

0xa2cd,	// (0x00073c30) main_call6_pane

0xa2cd,	// (0x00073c30) main_calllock_pane

0x78aa,	// (0x0007120d) call6_btn_grp_pane_ParamLimits

0x78aa,	// (0x0007120d) call6_btn_grp_pane

0x78c4,	// (0x00071227) call6_pane_g1_ParamLimits

0x78c4,	// (0x00071227) call6_pane_g1

0x78da,	// (0x0007123d) popup_call6_1st_window_ParamLimits

0x78da,	// (0x0007123d) popup_call6_1st_window

0x78eb,	// (0x0007124e) popup_call6_2nd_window_ParamLimits

0x78eb,	// (0x0007124e) popup_call6_2nd_window

0x78fc,	// (0x0007125f) cell_call6_btn_pane_ParamLimits

0x78fc,	// (0x0007125f) cell_call6_btn_pane

0xb0f2,	// (0x00074a55) bg_popup_call2_in_pane_cp03

0x9b0b,	// (0x0007346e) popup_call6_1st_window_g1

0x9b13,	// (0x00073476) popup_call6_1st_window_g2

0x9b1b,	// (0x0007347e) popup_call6_1st_window_g3

0x0002,

0x03e9,	// (0x00069d4c) popup_call6_1st_window_g

0x9b23,	// (0x00073486) popup_call6_1st_window_t1

0x9b32,	// (0x00073495) popup_call6_1st_window_t2

0x9b40,	// (0x000734a3) popup_call6_1st_window_t3

0x0002,

0x03f0,	// (0x00069d53) popup_call6_1st_window_t

0xb0f2,	// (0x00074a55) bg_popup_call2_in_pane_cp04

0x9b4e,	// (0x000734b1) popup_call6_2nd_window_g1

0x9b56,	// (0x000734b9) popup_call6_2nd_window_g2

0x9b5e,	// (0x000734c1) popup_call6_2nd_window_g3

0x0002,

0x03f7,	// (0x00069d5a) popup_call6_2nd_window_g

0x9b66,	// (0x000734c9) popup_call6_2nd_window_t1

0x9093,	// (0x000729f6) bg_button_pane_cp15

0x97e4,	// (0x00073147) cell_call6_btn_pane_g1

0x97ed,	// (0x00073150) cell_call6_btn_pane_t1

0x7910,	// (0x00071273) listscroll_wgtman_pane_ParamLimits

0x7910,	// (0x00071273) listscroll_wgtman_pane

0x7931,	// (0x00071294) wgtman_btn_pane_ParamLimits

0x7931,	// (0x00071294) wgtman_btn_pane

0xb8f4,	// (0x00075257) aid_scroll_copy1

0x9b75,	// (0x000734d8) list_wgtman_pane

0x7974,	// (0x000712d7) wgtman_btn_pane_g1_ParamLimits

0x7974,	// (0x000712d7) wgtman_btn_pane_g1

0x79a0,	// (0x00071303) wgtman_btn_pane_t1_ParamLimits

0x79a0,	// (0x00071303) wgtman_btn_pane_t1

0x9b7f,	// (0x000734e2) wgtman_btn_pane_t2_ParamLimits

0x9b7f,	// (0x000734e2) wgtman_btn_pane_t2

0x0001,

0xfd29,	// (0x0007968c) wgtman_btn_pane_t_ParamLimits

0xfd29,	// (0x0007968c) wgtman_btn_pane_t

0x79dd,	// (0x00071340) listrow_wgtman_pane_ParamLimits

0x79dd,	// (0x00071340) listrow_wgtman_pane

0x79f0,	// (0x00071353) listrow_wgtman_pane_g1

0x79fd,	// (0x00071360) listrow_wgtman_pane_g2

0x0001,

0xfd2e,	// (0x00079691) listrow_wgtman_pane_g

0x7a1b,	// (0x0007137e) listrow_wgtman_pane_t1

0x7a33,	// (0x00071396) listrow_wgtman_pane_t2

0x0001,

0xfd33,	// (0x00079696) listrow_wgtman_pane_t

0x7a59,	// (0x000713bc) wait_bar_pane_cp09

0x9b96,	// (0x000734f9) main_calllock_btn_pane

0x9ba0,	// (0x00073503) main_calllock_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp17

0x9ba8,	// (0x0007350b) main_calllock_btn_pane_g1

0x9bb1,	// (0x00073514) main_calllock_btn_pane_t1

0xa2cd,	// (0x00073c30) main_dialer3_pane

0xa2cd,	// (0x00073c30) main_fmrd2_pane

0xb128,	// (0x00074a8b) main_fs_bigclock_unlock_btn_pane_g1

0x7a73,	// (0x000713d6) main_fs_bigclock_unlock_btn_pane_t1

0x7a81,	// (0x000713e4) area_fmrd2_info_pane_ParamLimits

0x7a81,	// (0x000713e4) area_fmrd2_info_pane

0x7a92,	// (0x000713f5) area_fmrd2_visual_pane_ParamLimits

0x7a92,	// (0x000713f5) area_fmrd2_visual_pane

0x7aa0,	// (0x00071403) fmrd2_indi_pane_ParamLimits

0x7aa0,	// (0x00071403) fmrd2_indi_pane

0x7aad,	// (0x00071410) area_fmrd2_visual_pane_g1

0x7ab5,	// (0x00071418) area_fmrd2_visual_pane_t1

0x7ac5,	// (0x00071428) area_fmrd2_visual_pane_t2

0x7ad5,	// (0x00071438) area_fmrd2_visual_pane_t3

0x0002,

0xfd3d,	// (0x000796a0) area_fmrd2_visual_pane_t

0x7ae5,	// (0x00071448) area_fmrd2_info_pane_g1

0x7aed,	// (0x00071450) area_fmrd2_info_pane_t1

0x7afd,	// (0x00071460) area_fmrd2_info_pane_t2

0x7b0d,	// (0x00071470) area_fmrd2_info_pane_t3

0x7b1d,	// (0x00071480) area_fmrd2_info_pane_t4

0x0003,

0xfd44,	// (0x000796a7) area_fmrd2_info_pane_t

0x7b2b,	// (0x0007148e) fmrd2_indi_pane_t1

0x7b3b,	// (0x0007149e) fmrd2_indi_pane_t2

0x7b4b,	// (0x000714ae) fmrd2_indi_pane_t3

0x0002,

0xfd4d,	// (0x000796b0) fmrd2_indi_pane_t

0xe976,	// (0x000782d9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe976,	// (0x000782d9) list_single_fs_bigclock_indicator_pane_g5

0xea27,	// (0x0007838a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xea27,	// (0x0007838a) list_single_fs_bigclock_indicator_pane_t5

0x7242,	// (0x00070ba5) aid_cell_bcale_month_pane_ParamLimits

0x7242,	// (0x00070ba5) aid_cell_bcale_month_pane

0x7260,	// (0x00070bc3) bcale_month_pane_ParamLimits

0x7260,	// (0x00070bc3) bcale_month_pane

0x7284,	// (0x00070be7) bcale_preview_pane_ParamLimits

0x7284,	// (0x00070be7) bcale_preview_pane

0x9974,	// (0x000732d7) list_single_fs_bigclock_pane_t1_ParamLimits

0x9993,	// (0x000732f6) list_single_fs_bigclock_pane_t2_ParamLimits

0x9993,	// (0x000732f6) list_single_fs_bigclock_pane_t2

0x0001,

0x039d,	// (0x00069d00) list_single_fs_bigclock_pane_t_ParamLimits

0x039d,	// (0x00069d00) list_single_fs_bigclock_pane_t

0x7a6b,	// (0x000713ce) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd38,	// (0x0007969b) main_fs_bigclock_unlock_btn_pane_g

0x7b5b,	// (0x000714be) aid_dia3_key_size_ParamLimits

0x7b5b,	// (0x000714be) aid_dia3_key_size

0x7b6a,	// (0x000714cd) aid_dia3_listrow_size_ParamLimits

0x7b6a,	// (0x000714cd) aid_dia3_listrow_size

0x7b7f,	// (0x000714e2) dia3_keypad_fun_pane_ParamLimits

0x7b7f,	// (0x000714e2) dia3_keypad_fun_pane

0x7b9b,	// (0x000714fe) dia3_keypad_num_pane_ParamLimits

0x7b9b,	// (0x000714fe) dia3_keypad_num_pane

0x7bb6,	// (0x00071519) dia3_listscroll_pane_ParamLimits

0x7bb6,	// (0x00071519) dia3_listscroll_pane

0x7bc9,	// (0x0007152c) dia3_numentry_pane_ParamLimits

0x7bc9,	// (0x0007152c) dia3_numentry_pane

0x9bc0,	// (0x00073523) dia3_list_pane

0x9bcb,	// (0x0007352e) scroll_pane_cp12

0xa2cd,	// (0x00073c30) bg_dia3_numentry_pane

0x7be1,	// (0x00071544) dia3_numentry_pane_t1

0x7bf0,	// (0x00071553) cell_dia3_key_num_pane

0x7bf8,	// (0x0007155b) cell_dia3_key0_fun_pane_ParamLimits

0x7bf8,	// (0x0007155b) cell_dia3_key0_fun_pane

0x7c0c,	// (0x0007156f) cell_dia3_key1_fun_pane_ParamLimits

0x7c0c,	// (0x0007156f) cell_dia3_key1_fun_pane

0x7c24,	// (0x00071587) dia3_listrow_pane

0xe6a0,	// (0x00078003) bg_dia3_numentry_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp21

0x9bd6,	// (0x00073539) cell_dia3_key_num_pane_t1

0x9be4,	// (0x00073547) cell_dia3_key_num_pane_t2

0x9bf3,	// (0x00073556) cell_dia3_key_num_pane_t3

0x9c02,	// (0x00073565) cell_dia3_key_num_pane_t4

0x0003,

0x0429,	// (0x00069d8c) cell_dia3_key_num_pane_t

0xa2cd,	// (0x00073c30) bg_button_pane_cp19

0x7c36,	// (0x00071599) cell_dia3_key0_fun_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp20

0x7c3e,	// (0x000715a1) cell_dia3_key1_fun_pane_g1

0x7c46,	// (0x000715a9) area_left_week_number_pane

0x7c52,	// (0x000715b5) area_top_day_name_pane

0x7c65,	// (0x000715c8) frame_month_view_pane

0x9c11,	// (0x00073574) grid_month_view_pane

0x7c78,	// (0x000715db) cell_top_day_name_pane_ParamLimits

0x7c78,	// (0x000715db) cell_top_day_name_pane

0x7ca5,	// (0x00071608) cell_area_left_week_number_pane_ParamLimits

0x7ca5,	// (0x00071608) cell_area_left_week_number_pane

0x7cb9,	// (0x0007161c) cell_month_view_pane_ParamLimits

0x7cb9,	// (0x0007161c) cell_month_view_pane

0x9c1f,	// (0x00073582) frm_month_g1

0x7ce6,	// (0x00071649) frm_month_g2

0x7cf9,	// (0x0007165c) frm_month_g3

0x7d0c,	// (0x0007166f) frm_month_g4

0x7d1f,	// (0x00071682) frm_month_g5

0x7d32,	// (0x00071695) frm_month_g6

0x7d45,	// (0x000716a8) frm_month_g7

0x9c2c,	// (0x0007358f) frm_month_g8

0x7d58,	// (0x000716bb) frm_month_g9

0x7d68,	// (0x000716cb) frm_month_g10

0x7d78,	// (0x000716db) frm_month_g11

0x7d88,	// (0x000716eb) frm_month_g12

0x7d9a,	// (0x000716fd) frm_month_g13

0x7dac,	// (0x0007170f) frm_month_g14

0x7dc0,	// (0x00071723) frm_month_g15

0x7dd4,	// (0x00071737) frm_month_g16

0x000f,

0xfd54,	// (0x000796b7) frm_month_g

0x9c39,	// (0x0007359c) cell_top_day_name_pane_t1

0x7de8,	// (0x0007174b) cell_area_left_week_number_pane_g1

0x7df4,	// (0x00071757) cell_area_left_week_number_pane_t1

0xaec5,	// (0x00074828) cell_month_view_pane_g1

0x7e07,	// (0x0007176a) cell_month_view_pane_t1

0xa2cd,	// (0x00073c30) main_fps_pane

0xec56,	// (0x000785b9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xec56,	// (0x000785b9) cmail_ddmenu_btn02_pane_cp1

0xec72,	// (0x000785d5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xec72,	// (0x000785d5) cmail_ddmenu_btn02_pane_cp2

0x752d,	// (0x00070e90) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x752d,	// (0x00070e90) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcc3,	// (0x00079626) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcc3,	// (0x00079626) cmail_ddmenu_btn02_pane_g

0x754b,	// (0x00070eae) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x754b,	// (0x00070eae) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcc8,	// (0x0007962b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcc8,	// (0x0007962b) cmail_ddmenu_btn02_pane_t

0x7e1a,	// (0x0007177d) fps_text_pane_ParamLimits

0x7e1a,	// (0x0007177d) fps_text_pane

0x7e31,	// (0x00071794) main_fps_pane_g1_ParamLimits

0x7e31,	// (0x00071794) main_fps_pane_g1

0x7e4b,	// (0x000717ae) wait_bar_pane_cp010_ParamLimits

0x7e4b,	// (0x000717ae) wait_bar_pane_cp010

0x7e5c,	// (0x000717bf) fps_text_pane_t1_ParamLimits

0x7e5c,	// (0x000717bf) fps_text_pane_t1

0xe924,	// (0x00078287) cam4_image_uncrop_pane_g1

0xe92d,	// (0x00078290) cam4_image_uncrop_pane_g2

0x4bd9,	// (0x0006e53c) cam4_image_uncrop_pane_g3

0x4be2,	// (0x0006e545) cam4_image_uncrop_pane_g4

0x0003,

0xf848,	// (0x000791ab) cam4_image_uncrop_pane_g

0x7c24,	// (0x00071587) dia3_listrow_pane_ParamLimits

0xa2cd,	// (0x00073c30) main_phob2_pane

0x701a,	// (0x0007097d) cell_tport_appsw_pane_cp02_ParamLimits

0x701a,	// (0x0007097d) cell_tport_appsw_pane_cp02

0x702e,	// (0x00070991) cell_tport_appsw_pane_cp03_ParamLimits

0x702e,	// (0x00070991) cell_tport_appsw_pane_cp03

0xa2cd,	// (0x00073c30) phob2_contact_card_pane

0xa2cd,	// (0x00073c30) phob2_listscroll_pane

0x9c4c,	// (0x000735af) phob2_list_pane

0x9c54,	// (0x000735b7) scroll_pane_cp034

0x7e74,	// (0x000717d7) phob2_cc_data_pane_ParamLimits

0x7e74,	// (0x000717d7) phob2_cc_data_pane

0x7e93,	// (0x000717f6) phob2_cc_listscroll_pane_ParamLimits

0x7e93,	// (0x000717f6) phob2_cc_listscroll_pane

0x79dd,	// (0x00071340) list_double_large_graphic_phob2_pane_ParamLimits

0x79dd,	// (0x00071340) list_double_large_graphic_phob2_pane

0x7eb1,	// (0x00071814) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7eb1,	// (0x00071814) list_double_large_graphic_phob2_pane_g1

0x7ebe,	// (0x00071821) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7ebe,	// (0x00071821) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd75,	// (0x000796d8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd75,	// (0x000796d8) list_double_large_graphic_phob2_pane_g

0x7ee4,	// (0x00071847) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7ee4,	// (0x00071847) list_double_large_graphic_phob2_pane_t1

0x7ef9,	// (0x0007185c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7ef9,	// (0x0007185c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd7e,	// (0x000796e1) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd7e,	// (0x000796e1) list_double_large_graphic_phob2_pane_t

0xa2cd,	// (0x00073c30) list_highlight_pane_cp024

0x9c5c,	// (0x000735bf) phob2_cc_button_pane

0x7f0e,	// (0x00071871) phob2_cc_data_pane_g1_ParamLimits

0x7f0e,	// (0x00071871) phob2_cc_data_pane_g1

0x7f25,	// (0x00071888) phob2_cc_data_pane_g2_ParamLimits

0x7f25,	// (0x00071888) phob2_cc_data_pane_g2

0x0001,

0xfd83,	// (0x000796e6) phob2_cc_data_pane_g_ParamLimits

0xfd83,	// (0x000796e6) phob2_cc_data_pane_g

0x7f37,	// (0x0007189a) phob2_cc_data_pane_t1_ParamLimits

0x7f37,	// (0x0007189a) phob2_cc_data_pane_t1

0x7f4f,	// (0x000718b2) phob2_cc_data_pane_t2_ParamLimits

0x7f4f,	// (0x000718b2) phob2_cc_data_pane_t2

0x7f67,	// (0x000718ca) phob2_cc_data_pane_t3_ParamLimits

0x7f67,	// (0x000718ca) phob2_cc_data_pane_t3

0x0002,

0xfd88,	// (0x000796eb) phob2_cc_data_pane_t_ParamLimits

0xfd88,	// (0x000796eb) phob2_cc_data_pane_t

0x9c64,	// (0x000735c7) phob2_cc_list_pane_ParamLimits

0x9c64,	// (0x000735c7) phob2_cc_list_pane

0xdeb8,	// (0x0007781b) scroll_pane_cp035_ParamLimits

0xdeb8,	// (0x0007781b) scroll_pane_cp035

0xa32e,	// (0x00073c91) bg_button_pane_cp033

0x9c70,	// (0x000735d3) phob2_cc_button_pane_g1

0x9c7c,	// (0x000735df) phob2_cc_button_pane_t1

0x9c91,	// (0x000735f4) phob2_cc_button_pane_t2

0x0001,

0x046d,	// (0x00069dd0) phob2_cc_button_pane_t

0x7f7f,	// (0x000718e2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x7f7f,	// (0x000718e2) list_double_large_graphic_phob2_cc_pane

0x7fb1,	// (0x00071914) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x7fb1,	// (0x00071914) list_double_large_graphic_phob2_cc_pane_g1

0x7fbd,	// (0x00071920) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7fbd,	// (0x00071920) list_double_large_graphic_phob2_cc_pane_g2

0x7fc9,	// (0x0007192c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7fc9,	// (0x0007192c) list_double_large_graphic_phob2_cc_pane_g3

0x7fd5,	// (0x00071938) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7fd5,	// (0x00071938) list_double_large_graphic_phob2_cc_pane_g4

0x7fe1,	// (0x00071944) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7fe1,	// (0x00071944) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd8f,	// (0x000796f2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd8f,	// (0x000796f2) list_double_large_graphic_phob2_cc_pane_g

0x7fed,	// (0x00071950) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7fed,	// (0x00071950) list_double_large_graphic_phob2_cc_pane_t1

0x8016,	// (0x00071979) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8016,	// (0x00071979) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd9a,	// (0x000796fd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd9a,	// (0x000796fd) list_double_large_graphic_phob2_cc_pane_t

0x9ca3,	// (0x00073606) list_highlight_pane_cp025_ParamLimits

0x9ca3,	// (0x00073606) list_highlight_pane_cp025

0xa32e,	// (0x00073c91) bg_button_pane_cp033_ParamLimits

0x9c70,	// (0x000735d3) phob2_cc_button_pane_g1_ParamLimits

0x9c7c,	// (0x000735df) phob2_cc_button_pane_t1_ParamLimits

0x9c91,	// (0x000735f4) phob2_cc_button_pane_t2_ParamLimits

0x046d,	// (0x00069dd0) phob2_cc_button_pane_t_ParamLimits

0x0832,	// (0x0006a195) popup_wgtman_window

0xdcd1,	// (0x00077634) scroll_pane_cp038

0x7956,	// (0x000712b9) wgtman_btn_pane_cp_01_ParamLimits

0x7956,	// (0x000712b9) wgtman_btn_pane_cp_01

0x9cb1,	// (0x00073614) wgtman_content_pane

0x9cba,	// (0x0007361d) wgtman_heading_pane

0xa2cd,	// (0x00073c30) bg_heading_pane_cp02

0x9cc3,	// (0x00073626) wgtman_heading_pane_g1

0x9ccb,	// (0x0007362e) wgtman_heading_pane_t1

0x9cd9,	// (0x0007363c) scroll_pane_cp036

0x9ce1,	// (0x00073644) wgtman_list_pane

0xeb12,	// (0x00078475) wgtman_list_pane_t1_ParamLimits

0xeb12,	// (0x00078475) wgtman_list_pane_t1

0x9619,	// (0x00072f7c) cam4_grid_pane

0x5846,	// (0x0006f1a9) bg_button_pane_cp015_ParamLimits

0x5857,	// (0x0006f1ba) bg_button_pane_cp016_ParamLimits

0x5863,	// (0x0006f1c6) bg_button_pane_cp017_ParamLimits

0x58b7,	// (0x0006f21a) popup_vitu2_query_window_g3_ParamLimits

0x58b7,	// (0x0006f21a) popup_vitu2_query_window_g3

0x5958,	// (0x0006f2bb) popup_vitu2_query_window_t6_ParamLimits

0x5958,	// (0x0006f2bb) popup_vitu2_query_window_t6

0x5983,	// (0x0006f2e6) popup_vitu2_query_window_t7_ParamLimits

0x5983,	// (0x0006f2e6) popup_vitu2_query_window_t7

0xe924,	// (0x00078287) cam4_grid_pane_g1

0xe92d,	// (0x00078290) cam4_grid_pane_g2

0x9ce9,	// (0x0007364c) cam4_grid_pane_g3

0x9cf2,	// (0x00073655) cam4_grid_pane_g4

0x0003,

0xfd9f,	// (0x00079702) cam4_grid_pane_g

0x13f6,	// (0x0006ad59) aid_placing_vt_slider_lsc_ParamLimits

0x16f3,	// (0x0006b056) vidtel_button_pane_ParamLimits

0x16f3,	// (0x0006b056) vidtel_button_pane

0xa2cd,	// (0x00073c30) bg_button_pane_cp034

0x9cfd,	// (0x00073660) vidtel_button_pane_g1

0x9d05,	// (0x00073668) vidtel_button_pane_t1

0xddf5,	// (0x00077758) aid_size_vtel_slider_touch

0xdeb8,	// (0x0007781b) scroll_pane_cp039

0x6665,	// (0x0006ffc8) ncim_query_button_pane_cp01_ParamLimits

0x6684,	// (0x0006ffe7) ncimui_query_pane_g1_ParamLimits

0xa32e,	// (0x00073c91) input_focus_pane_cp012_ParamLimits

0xe6e6,	// (0x00078049) ncim_query_entry_pane_t1_ParamLimits

0xdeb8,	// (0x0007781b) scroll_pane_cp039_ParamLimits

0xb9cb,	// (0x0007532e) navi_pane_bcale_mc_g1

0xb9d3,	// (0x00075336) navi_pane_bcale_mc_t1

0xeca6,	// (0x00078609) main_sp_fs_email_pane_g1

0xecb2,	// (0x00078615) main_sp_fs_email_pane_g2

0x0001,

0xfbf8,	// (0x0007955b) main_sp_fs_email_pane_g

0xef33,	// (0x00078896) list_single_cale_mrui_row_pane_g3_ParamLimits

0xef33,	// (0x00078896) list_single_cale_mrui_row_pane_g3

0x756b,	// (0x00070ece) list_single_recal_day_pane_g5_event_pane

0xa6a7,	// (0x0007400a) list_single_recal_day_pane_g7

0x9d1b,	// (0x0007367e) list_recal_day_event_pane_cp01

0x9d24,	// (0x00073687) list_recal_vselct_arw_lo_pane_cp01

0x9d2c,	// (0x0007368f) list_recal_vselct_arw_up_pane_cp01

0x9d34,	// (0x00073697) list_recal_vselct_pane_cp01

0xde17,	// (0x0007777a) list_recal_day_event_pane_cp01_g1

0xa716,	// (0x00074079) list_recal_day_event_pane_cp01_t1

0xa6af,	// (0x00074012) list_single_recal_day_pane_t1_ParamLimits

0xa6c1,	// (0x00074024) list_single_recal_day_pane_t2_ParamLimits

0xfcd8,	// (0x0007963b) list_single_recal_day_pane_t_ParamLimits

0xae4a,	// (0x000747ad) bg_notes_pane_ParamLimits

0xaf15,	// (0x00074878) list_notes_pane_ParamLimits

0x0a39,	// (0x0006a39c) scroll_pane_cp06_ParamLimits

0xaf37,	// (0x0007489a) main_notes_pane_ParamLimits

0xa32e,	// (0x00073c91) main_welc_pane

0x806c,	// (0x000719cf) main_welc_body_pane_ParamLimits

0x806c,	// (0x000719cf) main_welc_body_pane

0x8089,	// (0x000719ec) main_welc_opti_pane_ParamLimits

0x8089,	// (0x000719ec) main_welc_opti_pane

0x8102,	// (0x00071a65) main_welc_pane_t1_ParamLimits

0x8102,	// (0x00071a65) main_welc_pane_t1

0x82fa,	// (0x00071c5d) main_welc_body_row_pane_ParamLimits

0x82fa,	// (0x00071c5d) main_welc_body_row_pane

0xaeb7,	// (0x0007481a) main_welc_opti_row_pane_ParamLimits

0xaeb7,	// (0x0007481a) main_welc_opti_row_pane

0x9d4e,	// (0x000736b1) main_welc_opti_row_pane_g1

0x830f,	// (0x00071c72) main_welc_opti_row_pane_t1

0x9d56,	// (0x000736b9) main_welc_body_row_pane_t1

0x9a4b,	// (0x000733ae) popup_notif_wgt_heading_pane

0x9a65,	// (0x000733c8) aid_size_list_notif_wgt_del_ParamLimits

0x9a72,	// (0x000733d5) list_notif_wgt_row_pane_g1_ParamLimits

0x9a7e,	// (0x000733e1) list_notif_wgt_row_pane_g2_ParamLimits

0x9a8d,	// (0x000733f0) list_notif_wgt_row_pane_g3_ParamLimits

0x03cc,	// (0x00069d2f) list_notif_wgt_row_pane_g_ParamLimits

0x9a9a,	// (0x000733fd) list_notif_wgt_row_pane_t1_ParamLimits

0x9ab0,	// (0x00073413) list_notif_wgt_row_pane_t2_ParamLimits

0x9ac2,	// (0x00073425) list_notif_wgt_row_pane_t3_ParamLimits

0x03d3,	// (0x00069d36) list_notif_wgt_row_pane_t_ParamLimits

0x79f0,	// (0x00071353) listrow_wgtman_pane_g1_ParamLimits

0x79fd,	// (0x00071360) listrow_wgtman_pane_g2_ParamLimits

0xfd2e,	// (0x00079691) listrow_wgtman_pane_g_ParamLimits

0x7a1b,	// (0x0007137e) listrow_wgtman_pane_t1_ParamLimits

0x7a33,	// (0x00071396) listrow_wgtman_pane_t2_ParamLimits

0xfd33,	// (0x00079696) listrow_wgtman_pane_t_ParamLimits

0x7a59,	// (0x000713bc) wait_bar_pane_cp09_ParamLimits

0xa2cd,	// (0x00073c30) bg_popup_heading_pane_cp02

0x9e73,	// (0x000737d6) popup_notif_wgt_heading_pane_g1

0x9e7b,	// (0x000737de) popup_notif_wgt_heading_pane_t1

0xa2cd,	// (0x00073c30) main_vids_pane

0xa2cd,	// (0x00073c30) vids_listscroll_pane

0x831e,	// (0x00071c81) scroll_pane_cp040

0xa2cd,	// (0x00073c30) vids_list_pane

0x8329,	// (0x00071c8c) vids_list_double_pane_ParamLimits

0x8329,	// (0x00071c8c) vids_list_double_pane

0x833a,	// (0x00071c9d) vids_list_double_pane_g1

0x8343,	// (0x00071ca6) vids_list_double_pane_t1

0x8352,	// (0x00071cb5) vids_list_double_pane_t2

0x0001,

0xfdbe,	// (0x00079721) vids_list_double_pane_t

0x9085,	// (0x000729e8) main_ncimui_pane_ParamLimits

0x649b,	// (0x0006fdfe) main_ncimui_pane_g1_ParamLimits

0x64a7,	// (0x0006fe0a) main_ncimui_pane_g2_ParamLimits

0x64a7,	// (0x0006fe0a) main_ncimui_pane_g2

0x0001,

0xfb09,	// (0x0007946c) main_ncimui_pane_g_ParamLimits

0xfb09,	// (0x0007946c) main_ncimui_pane_g

0x80a4,	// (0x00071a07) main_welc_pane_g1_ParamLimits

0x80a4,	// (0x00071a07) main_welc_pane_g1

0x80b9,	// (0x00071a1c) main_welc_pane_g2_ParamLimits

0x80b9,	// (0x00071a1c) main_welc_pane_g2

0x0003,

0xfda8,	// (0x0007970b) main_welc_pane_g_ParamLimits

0xfda8,	// (0x0007970b) main_welc_pane_g

0xae4a,	// (0x000747ad) listscroll_mce_pane_ParamLimits

0xbb20,	// (0x00075483) wait_bar_pane_cp10

0xcec1,	// (0x00076824) main_cale_day_pane_ParamLimits

0xcec1,	// (0x00076824) main_cale_week_pane_ParamLimits

0xae4a,	// (0x000747ad) main_messa_pane_ParamLimits

0x3feb,	// (0x0006d94e) main_clock2_btn_pane_ParamLimits

0x3feb,	// (0x0006d94e) main_clock2_btn_pane

0xd690,	// (0x00076ff3) main_clock2_btn_pane_cp01_ParamLimits

0xd690,	// (0x00076ff3) main_clock2_btn_pane_cp01

0xef04,	// (0x00078867) list_cale_mrui_pane_ParamLimits

0x9af8,	// (0x0007345b) main_cf0_pane_g2

0x0001,

0x03da,	// (0x00069d3d) main_cf0_pane_g

0x7c46,	// (0x000715a9) area_left_week_number_pane_ParamLimits

0x7c52,	// (0x000715b5) area_top_day_name_pane_ParamLimits

0x7c65,	// (0x000715c8) frame_month_view_pane_ParamLimits

0x9c11,	// (0x00073574) grid_month_view_pane_ParamLimits

0x9c1f,	// (0x00073582) frm_month_g1_ParamLimits

0x7ce6,	// (0x00071649) frm_month_g2_ParamLimits

0x7cf9,	// (0x0007165c) frm_month_g3_ParamLimits

0x7d0c,	// (0x0007166f) frm_month_g4_ParamLimits

0x7d1f,	// (0x00071682) frm_month_g5_ParamLimits

0x7d32,	// (0x00071695) frm_month_g6_ParamLimits

0x7d45,	// (0x000716a8) frm_month_g7_ParamLimits

0x9c2c,	// (0x0007358f) frm_month_g8_ParamLimits

0x7d58,	// (0x000716bb) frm_month_g9_ParamLimits

0x7d68,	// (0x000716cb) frm_month_g10_ParamLimits

0x7d78,	// (0x000716db) frm_month_g11_ParamLimits

0x7d88,	// (0x000716eb) frm_month_g12_ParamLimits

0x7d9a,	// (0x000716fd) frm_month_g13_ParamLimits

0x7dac,	// (0x0007170f) frm_month_g14_ParamLimits

0x7dc0,	// (0x00071723) frm_month_g15_ParamLimits

0x7dd4,	// (0x00071737) frm_month_g16_ParamLimits

0xfd54,	// (0x000796b7) frm_month_g_ParamLimits

0x9c39,	// (0x0007359c) cell_top_day_name_pane_t1_ParamLimits

0x7de8,	// (0x0007174b) cell_area_left_week_number_pane_g1_ParamLimits

0x7df4,	// (0x00071757) cell_area_left_week_number_pane_t1_ParamLimits

0xaec5,	// (0x00074828) cell_month_view_pane_g1_ParamLimits

0x7e07,	// (0x0007176a) cell_month_view_pane_t1_ParamLimits

0xae42,	// (0x000747a5) main_clock2_btn_pane_g1

0x9e89,	// (0x000737ec) main_clock2_btn_pane_t1

0xa32e,	// (0x00073c91) listscroll_cmail_pane_ParamLimits

0xeca6,	// (0x00078609) main_sp_fs_email_pane_g1_ParamLimits

0xecb2,	// (0x00078615) main_sp_fs_email_pane_g2_ParamLimits

0xfbf8,	// (0x0007955b) main_sp_fs_email_pane_g_ParamLimits

0xf012,	// (0x00078975) list_recal_day_pane_ParamLimits

0xf023,	// (0x00078986) mian_recal_day_pane_t1

0x6ebd,	// (0x00070820) list_single_dyc_row_text_pane_t4_ParamLimits

0x6ebd,	// (0x00070820) list_single_dyc_row_text_pane_t4

0x6f06,	// (0x00070869) list_single_dyc_row_text_pane_t5_ParamLimits

0x6f06,	// (0x00070869) list_single_dyc_row_text_pane_t5

0xa486,	// (0x00073de9) list_single_dyc_row_text_pane_t6_ParamLimits

0xa486,	// (0x00073de9) list_single_dyc_row_text_pane_t6

0x2177,	// (0x0006bada) aid_mgn_list_cale_time_pane

0x9085,	// (0x000729e8) main_gallery2_pane_ParamLimits

0xd6a6,	// (0x00077009) main_clock2_pane_cp01_t1

0xd6b4,	// (0x00077017) main_clock2_pane_cp01_t3

0x0001,

0xf71f,	// (0x00079082) main_clock2_pane_cp01_t

0x0de3,	// (0x0006a746) cale_week_scroll_pane_g16_ParamLimits

0x0de3,	// (0x0006a746) cale_week_scroll_pane_g16

0xb0f2,	// (0x00074a55) vorec_slider_pane

0x9d05,	// (0x00073668) vidtel_button_pane_t1_ParamLimits

0x75d1,	// (0x00070f34) main_fs_bigclock_clock_pane_g1_ParamLimits

0x75d1,	// (0x00070f34) main_fs_bigclock_clock_pane_g2_ParamLimits

0x75e2,	// (0x00070f45) main_fs_bigclock_clock_pane_g3_ParamLimits

0x75e2,	// (0x00070f45) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcec,	// (0x0007964f) main_fs_bigclock_clock_pane_g_ParamLimits

0x75f5,	// (0x00070f58) main_fs_bigclock_clock_pane_t1_ParamLimits

0x760b,	// (0x00070f6e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcf5,	// (0x00079658) main_fs_bigclock_clock_pane_t_ParamLimits

0x38c7,	// (0x0006d22a) main_mup3_lyrics_pane_ParamLimits

0x38c7,	// (0x0006d22a) main_mup3_lyrics_pane

0x837a,	// (0x00071cdd) main_mup3_lyrics_pane_t1_ParamLimits

0x837a,	// (0x00071cdd) main_mup3_lyrics_pane_t1

0x936b,	// (0x00072cce) aid_main_mp4_pane_t1_area

0x9375,	// (0x00072cd8) aid_main_mp4_pane_t2_area

0x9421,	// (0x00072d84) main_mp4_pane_g7_ParamLimits

0x9421,	// (0x00072d84) main_mp4_pane_g7

0x942d,	// (0x00072d90) main_mp4_pane_g8_ParamLimits

0x942d,	// (0x00072d90) main_mp4_pane_g8

0x49aa,	// (0x0006e30d) aid_call6_pane_g1_size

0x7f9a,	// (0x000718fd) list_double_large_graphic_phob2_other_pane_ParamLimits

0x7f9a,	// (0x000718fd) list_double_large_graphic_phob2_other_pane

0xb8fc,	// (0x0007525f) list_double_large_graphic_phob2_other_pane_g1

0xa2cd,	// (0x00073c30) list_highlight_pane_cp026

0xa32e,	// (0x00073c91) main_welc_pane_ParamLimits

0x6cfc,	// (0x0007065f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6cfc,	// (0x0007065f) main_sp_fs_ctrlbar_pane_g3

0x6d16,	// (0x00070679) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6d16,	// (0x00070679) main_sp_fs_ctrlbar_pane_g4

0x6d4a,	// (0x000706ad) toolbar2_fixed_button_pane_cp01

0x6d55,	// (0x000706b8) toolbar2_fixed_button_pane_cp02

0x6d62,	// (0x000706c5) toolbar2_fixed_button_pane_cp03

0x8052,	// (0x000719b5) list_welc_entry_pane_ParamLimits

0x8052,	// (0x000719b5) list_welc_entry_pane

0x80ce,	// (0x00071a31) main_welc_pane_g3_ParamLimits

0x80ce,	// (0x00071a31) main_welc_pane_g3

0x8120,	// (0x00071a83) main_welc_pane_t2_ParamLimits

0x8120,	// (0x00071a83) main_welc_pane_t2

0x813b,	// (0x00071a9e) main_welc_pane_t3_ParamLimits

0x813b,	// (0x00071a9e) main_welc_pane_t3

0x0005,

0xfdb1,	// (0x00079714) main_welc_pane_t_ParamLimits

0xfdb1,	// (0x00079714) main_welc_pane_t

0x826b,	// (0x00071bce) welc_button_pane_ParamLimits

0x826b,	// (0x00071bce) welc_button_pane

0x82e5,	// (0x00071c48) welc_service_logo_pane_ParamLimits

0x82e5,	// (0x00071c48) welc_service_logo_pane

0x8396,	// (0x00071cf9) list_single_welc_entry_pane_ParamLimits

0x8396,	// (0x00071cf9) list_single_welc_entry_pane

0x83a7,	// (0x00071d0a) list_single_welc_entry_pane_g1

0x83af,	// (0x00071d12) list_single_welc_entry_pane_t1

0x83bd,	// (0x00071d20) list_single_welc_entry_pane_t2

0x0001,

0xfdc3,	// (0x00079726) list_single_welc_entry_pane_t

0xa2cd,	// (0x00073c30) bg_button_pane_cp035

0x83cb,	// (0x00071d2e) welc_button_pane_t1

0x9e97,	// (0x000737fa) welc_service_logo_pane_g1

0x9ea0,	// (0x00073803) welc_service_logo_pane_g2

0x0001,

0xfdc8,	// (0x0007972b) welc_service_logo_pane_g

0x9093,	// (0x000729f6) main_int_radio_pane

0xe584,	// (0x00077ee7) list_single_fs_dyc_pane_g1

0x7eca,	// (0x0007182d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7eca,	// (0x0007182d) list_double_large_graphic_phob2_pane_g3

0x7ed6,	// (0x00071839) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7ed6,	// (0x00071839) list_double_large_graphic_phob2_pane_g4

0x83d9,	// (0x00071d3c) main_int_radio1_pane_ParamLimits

0x83d9,	// (0x00071d3c) main_int_radio1_pane

0x9ea9,	// (0x0007380c) find_pane_cp02

0x83f6,	// (0x00071d59) input_focus_pane_cp12_ParamLimits

0x83f6,	// (0x00071d59) input_focus_pane_cp12

0x8406,	// (0x00071d69) input_focus_pane_cp13_ParamLimits

0x8406,	// (0x00071d69) input_focus_pane_cp13

0x841a,	// (0x00071d7d) input_focus_pane_cp14_ParamLimits

0x841a,	// (0x00071d7d) input_focus_pane_cp14

0x9eb2,	// (0x00073815) int_radio1_listscroll_pane

0x842e,	// (0x00071d91) main_int_radio1_pane_g1_ParamLimits

0x842e,	// (0x00071d91) main_int_radio1_pane_g1

0x8446,	// (0x00071da9) main_int_radio1_pane_t1_ParamLimits

0x8446,	// (0x00071da9) main_int_radio1_pane_t1

0x8461,	// (0x00071dc4) main_int_radio1_pane_t2_ParamLimits

0x8461,	// (0x00071dc4) main_int_radio1_pane_t2

0x847c,	// (0x00071ddf) main_int_radio1_pane_t3_ParamLimits

0x847c,	// (0x00071ddf) main_int_radio1_pane_t3

0x8497,	// (0x00071dfa) main_int_radio1_pane_t4_ParamLimits

0x8497,	// (0x00071dfa) main_int_radio1_pane_t4

0x9ebc,	// (0x0007381f) main_int_radio1_pane_t5_ParamLimits

0x9ebc,	// (0x0007381f) main_int_radio1_pane_t5

0x84a9,	// (0x00071e0c) main_int_radio1_pane_t6_ParamLimits

0x84a9,	// (0x00071e0c) main_int_radio1_pane_t6

0x84be,	// (0x00071e21) main_int_radio1_pane_t7_ParamLimits

0x84be,	// (0x00071e21) main_int_radio1_pane_t7

0x84d3,	// (0x00071e36) main_int_radio1_pane_t8_ParamLimits

0x84d3,	// (0x00071e36) main_int_radio1_pane_t8

0x84f2,	// (0x00071e55) main_int_radio1_pane_t9_ParamLimits

0x84f2,	// (0x00071e55) main_int_radio1_pane_t9

0x8504,	// (0x00071e67) main_int_radio1_pane_t10_ParamLimits

0x8504,	// (0x00071e67) main_int_radio1_pane_t10

0x852a,	// (0x00071e8d) main_int_radio1_pane_t11_ParamLimits

0x852a,	// (0x00071e8d) main_int_radio1_pane_t11

0x8550,	// (0x00071eb3) main_int_radio1_pane_t12_ParamLimits

0x8550,	// (0x00071eb3) main_int_radio1_pane_t12

0x000b,

0xfdcd,	// (0x00079730) main_int_radio1_pane_t_ParamLimits

0xfdcd,	// (0x00079730) main_int_radio1_pane_t

0x9ece,	// (0x00073831) int_radio_list_pane

0x9c54,	// (0x000735b7) scroll_pane_cp037

0x9ed6,	// (0x00073839) list_double_large_graphic_int_radio_pane_ParamLimits

0x9ed6,	// (0x00073839) list_double_large_graphic_int_radio_pane

0x9eef,	// (0x00073852) list_double_large_graphic_int_radio_pane_g1

0xa724,	// (0x00074087) list_double_large_graphic_int_radio_pane_t1

0xa732,	// (0x00074095) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfde6,	// (0x00079749) list_double_large_graphic_int_radio_pane_t

0xa2cd,	// (0x00073c30) list_highlight_pane_cp027

0x9d3e,	// (0x000736a1) main_button_pane_4

0x80e1,	// (0x00071a44) main_welc_pane_g4_ParamLimits

0x80e1,	// (0x00071a44) main_welc_pane_g4

0x8154,	// (0x00071ab7) main_welc_pane_t4_ParamLimits

0x8154,	// (0x00071ab7) main_welc_pane_t4

0x816b,	// (0x00071ace) main_welc_pane_t5_ParamLimits

0x816b,	// (0x00071ace) main_welc_pane_t5

0x81a8,	// (0x00071b0b) main_welc_pane_t6_ParamLimits

0x81a8,	// (0x00071b0b) main_welc_pane_t6

0x8282,	// (0x00071be5) welc_button_pane_2_ParamLimits

0x8282,	// (0x00071be5) welc_button_pane_2

0x829e,	// (0x00071c01) welc_button_pane_3_ParamLimits

0x829e,	// (0x00071c01) welc_button_pane_3

0x9d46,	// (0x000736a9) welc_button_pane_4

0x82bd,	// (0x00071c20) welc_button_pane_5_ParamLimits

0x82bd,	// (0x00071c20) welc_button_pane_5

0x069c,	// (0x00069fff) main_popup_welc_pane

0x9f07,	// (0x0007386a) main_welc_sk_g3

0x9f11,	// (0x00073874) main_welc_sk_g4

0x9f1b,	// (0x0007387e) main_welc_sk_t3

0x9f2b,	// (0x0007388e) main_welc_sk_t4

0x9f3b,	// (0x0007389e) popup_welc_pane_t4

0x9f49,	// (0x000738ac) popup_welc_pane_t5

0x9f57,	// (0x000738ba) popup_welc_pane_t6

0x9093,	// (0x000729f6) main_acti_pane

0xa2cd,	// (0x00073c30) main_sso_pane

0x8562,	// (0x00071ec5) sso_body_pane_ParamLimits

0x8562,	// (0x00071ec5) sso_body_pane

0x8576,	// (0x00071ed9) sso_logo_pane_ParamLimits

0x8576,	// (0x00071ed9) sso_logo_pane

0x85a6,	// (0x00071f09) sso_sk_pane_ParamLimits

0x85a6,	// (0x00071f09) sso_sk_pane

0xb128,	// (0x00074a8b) main_sso_logo_pane_g1

0x85b8,	// (0x00071f1b) sso_sk_pane_t1_ParamLimits

0x85b8,	// (0x00071f1b) sso_sk_pane_t1

0x85d2,	// (0x00071f35) sso_sk_pane_t2_ParamLimits

0x85d2,	// (0x00071f35) sso_sk_pane_t2

0x0001,

0xfdeb,	// (0x0007974e) sso_sk_pane_t_ParamLimits

0xfdeb,	// (0x0007974e) sso_sk_pane_t

0x9f95,	// (0x000738f8) aid_sso_gap

0x9f9e,	// (0x00073901) aid_sso_txt1

0x9fa8,	// (0x0007390b) aid_sso_txt2

0x9fb2,	// (0x00073915) aid_sso_txt3

0x0002,

0xfdf0,	// (0x00079753) aid_sso_txt

0x9fbc,	// (0x0007391f) aid_sso_widget

0x863c,	// (0x00071f9f) sso_btn_pane_ParamLimits

0x863c,	// (0x00071f9f) sso_btn_pane

0x86c4,	// (0x00072027) sso_option_pane_ParamLimits

0x86c4,	// (0x00072027) sso_option_pane

0x8744,	// (0x000720a7) sso_query_pane_ParamLimits

0x8744,	// (0x000720a7) sso_query_pane

0x879a,	// (0x000720fd) sso_query_pane_cp01_ParamLimits

0x879a,	// (0x000720fd) sso_query_pane_cp01

0x87f2,	// (0x00072155) sso_t_hdr_pane_ParamLimits

0x87f2,	// (0x00072155) sso_t_hdr_pane

0x881c,	// (0x0007217f) sso_t_nml_pane_ParamLimits

0x881c,	// (0x0007217f) sso_t_nml_pane

0x9fc6,	// (0x00073929) sso_t_sub_pane

0x8583,	// (0x00071ee6) sso_popup_window_ParamLimits

0x8583,	// (0x00071ee6) sso_popup_window

0x85e8,	// (0x00071f4b) sso_apps_pane_ParamLimits

0x85e8,	// (0x00071f4b) sso_apps_pane

0x8612,	// (0x00071f75) sso_body_pane_g1

0x861c,	// (0x00071f7f) sso_body_pane_t1

0x862c,	// (0x00071f8f) sso_body_pane_t2

0x0001,

0xfdf7,	// (0x0007975a) sso_body_pane_t

0x868e,	// (0x00071ff1) sso_btn_pane_cp01_ParamLimits

0x868e,	// (0x00071ff1) sso_btn_pane_cp01

0x8718,	// (0x0007207b) sso_prog_pane_ParamLimits

0x8718,	// (0x0007207b) sso_prog_pane

0x8872,	// (0x000721d5) sso_t_hdr_pane_t1_ParamLimits

0x8872,	// (0x000721d5) sso_t_hdr_pane_t1

0x9fdb,	// (0x0007393e) input_focus_pane_cp10_ParamLimits

0x9fdb,	// (0x0007393e) input_focus_pane_cp10

0x9ff5,	// (0x00073958) sso_query_pane_t1_ParamLimits

0x9ff5,	// (0x00073958) sso_query_pane_t1

0xa008,	// (0x0007396b) sso_query_pane_t2_ParamLimits

0xa008,	// (0x0007396b) sso_query_pane_t2

0xa023,	// (0x00073986) sso_query_pane_t3_ParamLimits

0xa023,	// (0x00073986) sso_query_pane_t3

0xa04d,	// (0x000739b0) sso_query_pane_t4_ParamLimits

0xa04d,	// (0x000739b0) sso_query_pane_t4

0x0003,

0xfdfc,	// (0x0007975f) sso_query_pane_t_ParamLimits

0xfdfc,	// (0x0007975f) sso_query_pane_t

0xa2cd,	// (0x00073c30) bg_button_pane_cp22

0x9ef8,	// (0x0007385b) sso_btn_pane_t1

0x8885,	// (0x000721e8) sso_t_nml_pane_t1_ParamLimits

0x8885,	// (0x000721e8) sso_t_nml_pane_t1

0xa071,	// (0x000739d4) sso_option_row_pane_ParamLimits

0xa071,	// (0x000739d4) sso_option_row_pane

0xa084,	// (0x000739e7) sso_t_sub_pane_t1_ParamLimits

0xa084,	// (0x000739e7) sso_t_sub_pane_t1

0xa32e,	// (0x00073c91) bg_popup_window_pane_cp11_ParamLimits

0xa32e,	// (0x00073c91) bg_popup_window_pane_cp11

0xa0a1,	// (0x00073a04) popup_sk_window_cp01_ParamLimits

0xa0a1,	// (0x00073a04) popup_sk_window_cp01

0xa0ae,	// (0x00073a11) sso_popup_body_pane_ParamLimits

0xa0ae,	// (0x00073a11) sso_popup_body_pane

0xa0bb,	// (0x00073a1e) scroll_pane_cp21_ParamLimits

0xa0bb,	// (0x00073a1e) scroll_pane_cp21

0xa0c8,	// (0x00073a2b) sso_popup_body_t_pane_ParamLimits

0xa0c8,	// (0x00073a2b) sso_popup_body_t_pane

0xa0d5,	// (0x00073a38) sso_popup_body_t_hdr_pane_ParamLimits

0xa0d5,	// (0x00073a38) sso_popup_body_t_hdr_pane

0xa0e8,	// (0x00073a4b) sso_popup_body_t_nml_pane_ParamLimits

0xa0e8,	// (0x00073a4b) sso_popup_body_t_nml_pane

0xa106,	// (0x00073a69) sso_popup_body_t_sub_pane_ParamLimits

0xa106,	// (0x00073a69) sso_popup_body_t_sub_pane

0xa129,	// (0x00073a8c) sso_popup_body_t_hdr_pane_t1

0x88a0,	// (0x00072203) sso_popup_body_t_nml_pane_t1_ParamLimits

0x88a0,	// (0x00072203) sso_popup_body_t_nml_pane_t1

0xa139,	// (0x00073a9c) sso_popup_body_t_sub_pane_t1_ParamLimits

0xa139,	// (0x00073a9c) sso_popup_body_t_sub_pane_t1

0xb128,	// (0x00074a8b) sso_prog_pane_g1

0x88da,	// (0x0007223d) sso_apps_pane_comp1_ParamLimits

0x88da,	// (0x0007223d) sso_apps_pane_comp1

0xa15e,	// (0x00073ac1) sso_apps_pane_comp1_g1

0xa166,	// (0x00073ac9) sso_apps_pane_comp1_t1

0xa182,	// (0x00073ae5) sso_option_row_pane_g1

0xa18a,	// (0x00073aed) sso_option_row_pane_t1

0x803f,	// (0x000719a2) bg_welc_area_ParamLimits

0x803f,	// (0x000719a2) bg_welc_area

0x81e6,	// (0x00071b49) sso_t_hdr_pane_a_t1_ParamLimits

0x81e6,	// (0x00071b49) sso_t_hdr_pane_a_t1

0x8201,	// (0x00071b64) sso_t_nml_pane_a_t1_ParamLimits

0x8201,	// (0x00071b64) sso_t_nml_pane_a_t1

0x8230,	// (0x00071b93) sso_t_sub_pane_a_t1_ParamLimits

0x8230,	// (0x00071b93) sso_t_sub_pane_a_t1

0x9ef8,	// (0x0007385b) sso_btn_pane_t1_copy1

0xa2cd,	// (0x00073c30) welc_button_pane_2_comp1

0x9f65,	// (0x000738c8) sso_t_hdr_pane_p_t1

0x9f75,	// (0x000738d8) sso_t_nml_pane_p_t1

0x9f85,	// (0x000738e8) sso_t_sub_pane_p_t1

0xed53,	// (0x000786b6) list_cmail_pane_ParamLimits

0x82d3,	// (0x00071c36) welc_button_pane_cp01_ParamLimits

0x82d3,	// (0x00071c36) welc_button_pane_cp01

0xa2cd,	// (0x00073c30) main_att_pane

0xa174,	// (0x00073ad7) input_focus_pane_cp10_t1

0xa18a,	// (0x00073aed) sso_option_row_pane_t1_ParamLimits

0x88f4,	// (0x00072257) main_att_body_pane_ParamLimits

0x88f4,	// (0x00072257) main_att_body_pane

0x8929,	// (0x0007228c) att_btn_pane_ParamLimits

0x8929,	// (0x0007228c) att_btn_pane

0x894e,	// (0x000722b1) att_btn_pane_cp01_ParamLimits

0x894e,	// (0x000722b1) att_btn_pane_cp01

0x896e,	// (0x000722d1) att_li_srv_pane_ParamLimits

0x896e,	// (0x000722d1) att_li_srv_pane

0x898b,	// (0x000722ee) att_opt_pane_ParamLimits

0x898b,	// (0x000722ee) att_opt_pane

0x89d7,	// (0x0007233a) att_query_pane_ParamLimits

0x89d7,	// (0x0007233a) att_query_pane

0x8a23,	// (0x00072386) att_query_pane_cp01_ParamLimits

0x8a23,	// (0x00072386) att_query_pane_cp01

0x8a6f,	// (0x000723d2) att_t_hdr_pane_ParamLimits

0x8a6f,	// (0x000723d2) att_t_hdr_pane

0x8ac7,	// (0x0007242a) att_t_nml_pane_ParamLimits

0x8ac7,	// (0x0007242a) att_t_nml_pane

0x8b00,	// (0x00072463) att_t_nml_pane_cp01_ParamLimits

0x8b00,	// (0x00072463) att_t_nml_pane_cp01

0x8b2c,	// (0x0007248f) att_t_nmlb_pane_ParamLimits

0x8b2c,	// (0x0007248f) att_t_nmlb_pane

0x8b49,	// (0x000724ac) att_term_pane_ParamLimits

0x8b49,	// (0x000724ac) att_term_pane

0x8b95,	// (0x000724f8) main_att_body_pane_g1_ParamLimits

0x8b95,	// (0x000724f8) main_att_body_pane_g1

0xa1a0,	// (0x00073b03) att_t_hdr_pane_t1_ParamLimits

0xa1a0,	// (0x00073b03) att_t_hdr_pane_t1

0xa1b9,	// (0x00073b1c) att_t_nml_pane_t1_ParamLimits

0xa1b9,	// (0x00073b1c) att_t_nml_pane_t1

0xa1de,	// (0x00073b41) att_btn_pane_t1

0xa2cd,	// (0x00073c30) bg_button_pane_cp23

0x8bcc,	// (0x0007252f) att_li_srv_row_pane_ParamLimits

0x8bcc,	// (0x0007252f) att_li_srv_row_pane

0xa1ee,	// (0x00073b51) att_t_nmlb_pane_t1_ParamLimits

0xa1ee,	// (0x00073b51) att_t_nmlb_pane_t1

0xa207,	// (0x00073b6a) att_query_pane_t1

0xa216,	// (0x00073b79) att_query_pane_t2

0xa225,	// (0x00073b88) att_query_pane_t3

0x0002,

0xfe05,	// (0x00079768) att_query_pane_t

0xa234,	// (0x00073b97) input_focus_pane_cp11

0xa23d,	// (0x00073ba0) att_term_pane_t1_ParamLimits

0xa23d,	// (0x00073ba0) att_term_pane_t1

0xa2cd,	// (0x00073c30) att_opt_row_pane

0xa25a,	// (0x00073bbd) att_opt_row_pane_g1

0xa262,	// (0x00073bc5) att_opt_row_pane_t1_ParamLimits

0xa262,	// (0x00073bc5) att_opt_row_pane_t1

0x8bdc,	// (0x0007253f) att_li_srv_row_pane_g1

0x8be4,	// (0x00072547) att_li_srv_row_pane_t1

0x8bf9,	// (0x0007255c) att_li_srv_row_pane_t2

0x0001,

0xfe0c,	// (0x0007976f) att_li_srv_row_pane_t

0xa2cd,	// (0x00073c30) main_call7_pane

0xa2cd,	// (0x00073c30) main_vod_pane

0x9fc6,	// (0x00073929) sso_t_sub_pane_ParamLimits

0x890a,	// (0x0007226d) att_btn_emg_pane_ParamLimits

0x890a,	// (0x0007226d) att_btn_emg_pane

0x8be4,	// (0x00072547) att_li_srv_row_pane_t1_ParamLimits

0x8bf9,	// (0x0007255c) att_li_srv_row_pane_t2_ParamLimits

0xfe0c,	// (0x0007976f) att_li_srv_row_pane_t_ParamLimits

0xa27b,	// (0x00073bde) att_btn_close_pane_g1

0xa2cd,	// (0x00073c30) bg_button_pane_cp24

0x8c0e,	// (0x00072571) main_vod_body_pane_ParamLimits

0x8c0e,	// (0x00072571) main_vod_body_pane

0x8c22,	// (0x00072585) main_vod_body_pane_g1_ParamLimits

0x8c22,	// (0x00072585) main_vod_body_pane_g1

0x8c56,	// (0x000725b9) scroll_pane_cp24_ParamLimits

0x8c56,	// (0x000725b9) scroll_pane_cp24

0x8ca4,	// (0x00072607) vod_btn_pane_ParamLimits

0x8ca4,	// (0x00072607) vod_btn_pane

0x8ce8,	// (0x0007264b) vod_det_pane_ParamLimits

0x8ce8,	// (0x0007264b) vod_det_pane

0x8d18,	// (0x0007267b) vod_logo_g1_ParamLimits

0x8d18,	// (0x0007267b) vod_logo_g1

0x8d56,	// (0x000726b9) vod_opt_pane_ParamLimits

0x8d56,	// (0x000726b9) vod_opt_pane

0x8d89,	// (0x000726ec) vod_opt_pane_cp01_ParamLimits

0x8d89,	// (0x000726ec) vod_opt_pane_cp01

0x8db5,	// (0x00072718) vod_query_pane_ParamLimits

0x8db5,	// (0x00072718) vod_query_pane

0x8de2,	// (0x00072745) vod_query_pane_cp01_ParamLimits

0x8de2,	// (0x00072745) vod_query_pane_cp01

0x8dee,	// (0x00072751) vod_t_nml_pane_ParamLimits

0x8dee,	// (0x00072751) vod_t_nml_pane

0x8e97,	// (0x000727fa) vod_t_nml_pane_cp01_ParamLimits

0x8e97,	// (0x000727fa) vod_t_nml_pane_cp01

0x8ed3,	// (0x00072836) vod_t_sub_pane_ParamLimits

0x8ed3,	// (0x00072836) vod_t_sub_pane

0x8f08,	// (0x0007286b) vod_t_sub_pane_cp01_ParamLimits

0x8f08,	// (0x0007286b) vod_t_sub_pane_cp01

0xa234,	// (0x00073b97) vod_query_field_pane

0xa207,	// (0x00073b6a) vod_query_pane_t1

0xa2cd,	// (0x00073c30) bg_button_pane_cp25

0xa283,	// (0x00073be6) sso_btn_pane_t1_copy2

0x8f34,	// (0x00072897) vod_t_nml_pane_t1_ParamLimits

0x8f34,	// (0x00072897) vod_t_nml_pane_t1

0xa293,	// (0x00073bf6) vod_opt_row_pane_ParamLimits

0xa293,	// (0x00073bf6) vod_opt_row_pane

0xa2a5,	// (0x00073c08) vod_t_sub_pane_t1_ParamLimits

0xa2a5,	// (0x00073c08) vod_t_sub_pane_t1

0x8f63,	// (0x000728c6) vod_det_cell_pane_ParamLimits

0x8f63,	// (0x000728c6) vod_det_cell_pane

0xa2cd,	// (0x00073c30) input_focus_pane_cp15

0xa740,	// (0x000740a3) vod_query_field_pane_t1

0xa74e,	// (0x000740b1) vod_opt_row_pane_g1_ParamLimits

0xa74e,	// (0x000740b1) vod_opt_row_pane_g1

0xa75a,	// (0x000740bd) vod_opt_row_pane_t1_ParamLimits

0xa75a,	// (0x000740bd) vod_opt_row_pane_t1

0xa77f,	// (0x000740e2) vod_det_cell_field_pane

0xa788,	// (0x000740eb) vod_det_cell_pane_g1

0xa207,	// (0x00073b6a) vod_det_cell_pane_t1

0xa2cd,	// (0x00073c30) input_focus_pane_cp16

0xa740,	// (0x000740a3) vod_det_cell_field_pane_t1

0x8f77,	// (0x000728da) call7_btn_grp_pane_ParamLimits

0x8f77,	// (0x000728da) call7_btn_grp_pane

0x8f91,	// (0x000728f4) call7_bubble_pane_ParamLimits

0x8f91,	// (0x000728f4) call7_bubble_pane

0x8fa8,	// (0x0007290b) cell_call7_btn_pane_ParamLimits

0x8fa8,	// (0x0007290b) cell_call7_btn_pane

0x8fbc,	// (0x0007291f) call7_pane_g1_ParamLimits

0x8fbc,	// (0x0007291f) call7_pane_g1

0x8fcb,	// (0x0007292e) call7_windows_conf_pane_ParamLimits

0x8fcb,	// (0x0007292e) call7_windows_conf_pane

0x8fe5,	// (0x00072948) popup_call7_1st_window_ParamLimits

0x8fe5,	// (0x00072948) popup_call7_1st_window

0x8ff6,	// (0x00072959) popup_call7_2nd_window_ParamLimits

0x8ff6,	// (0x00072959) popup_call7_2nd_window

0x9007,	// (0x0007296a) popup_call7_3rd_window_ParamLimits

0x9007,	// (0x0007296a) popup_call7_3rd_window

0xa2cd,	// (0x00073c30) bg_button_pane_cp26

0x9ba8,	// (0x0007350b) cell_call7_btn_pane_g1

0xa2be,	// (0x00073c21) cell_call7_btn_pane_t1

0xa2cd,	// (0x00073c30) bg_popup_window_pane_cp12

0xa790,	// (0x000740f3) popup_call7_1st_window_g1

0xa798,	// (0x000740fb) popup_call7_1st_window_g2

0xa7a0,	// (0x00074103) popup_call7_1st_window_g3

0x0002,

0xfe11,	// (0x00079774) popup_call7_1st_window_g

0xa7a8,	// (0x0007410b) popup_call7_1st_window_t1

0xa7b7,	// (0x0007411a) popup_call7_1st_window_t2

0xa7c5,	// (0x00074128) popup_call7_1st_window_t3

0x0002,

0xfe18,	// (0x0007977b) popup_call7_1st_window_t

0xa2cd,	// (0x00073c30) bg_popup_window_pane_cp13

0xa7d3,	// (0x00074136) popup_call7_2nd_window_g1

0xa7db,	// (0x0007413e) popup_call7_2nd_window_g2

0xa7e3,	// (0x00074146) popup_call7_2nd_window_g3

0x0002,

0xfe1f,	// (0x00079782) popup_call7_2nd_window_g

0xa7eb,	// (0x0007414e) popup_call7_2nd_window_t1

0xa2cd,	// (0x00073c30) bg_popup_window_pane_cp14

0xa7fa,	// (0x0007415d) call7_list_conf_pane

0xa802,	// (0x00074165) call7_list_conf_row_pane_ParamLimits

0xa802,	// (0x00074165) call7_list_conf_row_pane

0xa815,	// (0x00074178) call7_list_conf_row_pane_g1

0xa81d,	// (0x00074180) call7_list_conf_row_pane_g2

0x0001,

0xfe26,	// (0x00079789) call7_list_conf_row_pane_g

0xa825,	// (0x00074188) call7_list_conf_row_pane_t1

0xa2cd,	// (0x00073c30) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small

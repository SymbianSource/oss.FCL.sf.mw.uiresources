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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0003dd60 };

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
0x4119,	// (0x00041e79) Screen

0x4125,	// (0x00041e85) application_window

0x4161,	// (0x00041ec1) area_bottom_pane_ParamLimits

0x4161,	// (0x00041ec1) area_bottom_pane

0x419a,	// (0x00041efa) area_top_pane_ParamLimits

0x419a,	// (0x00041efa) area_top_pane

0xcced,	// (0x0004aa4d) call_video_uplink_pane_ParamLimits

0xcced,	// (0x0004aa4d) call_video_uplink_pane

0x4228,	// (0x00041f88) main_pane_ParamLimits

0x4228,	// (0x00041f88) main_pane

0x2954,	// (0x000406b4) context_pane

0x6e5a,	// (0x00044bba) navi_pane

0x6e8c,	// (0x00044bec) popup_cale_events_window_ParamLimits

0x6e8c,	// (0x00044bec) popup_cale_events_window

0x2967,	// (0x000406c7) popup_mup_playback_window

0x6ea4,	// (0x00044c04) signal_pane

0x0991,	// (0x0003e6f1) main_browser_pane

0x0b43,	// (0x0003e8a3) main_burst_pane

0x6bc2,	// (0x00044922) main_calc_pane

0x2948,	// (0x000406a8) main_cale_day_pane

0x4738,	// (0x00042498) main_cale_month_pane

0x2948,	// (0x000406a8) main_cale_week_pane

0x0b43,	// (0x0003e8a3) main_call_pane

0x0649,	// (0x0003e3a9) main_call_poc_pane

0x0b43,	// (0x0003e8a3) main_camera_pane

0x0b43,	// (0x0003e8a3) main_chi_dic_pane

0x132e,	// (0x0003f08e) main_clock_pane

0x0649,	// (0x0003e3a9) main_fmradio_pane

0x0b43,	// (0x0003e8a3) main_graph_messa_pane

0x0649,	// (0x0003e3a9) main_help_pane

0x0991,	// (0x0003e6f1) main_im_pane

0x08a4,	// (0x0003e604) main_image_pane_ParamLimits

0x08a4,	// (0x0003e604) main_image_pane

0x0649,	// (0x0003e3a9) main_location2_pane

0x0b43,	// (0x0003e8a3) main_location_pane

0x08a4,	// (0x0003e604) main_messa_pane

0x0649,	// (0x0003e3a9) main_mp2_pane

0x0b43,	// (0x0003e8a3) main_mp_pane

0x0649,	// (0x0003e3a9) main_msg_pane

0x0649,	// (0x0003e3a9) main_mup_eq_pane

0x0649,	// (0x0003e3a9) main_mup_pane

0x0991,	// (0x0003e6f1) main_notes_pane

0x0649,	// (0x0003e3a9) main_pec_pane

0x0649,	// (0x0003e3a9) main_phob_pane

0x0649,	// (0x0003e3a9) main_pinb_pane

0x0649,	// (0x0003e3a9) main_postcard_pane

0x0649,	// (0x0003e3a9) main_qdial_pane

0x0b43,	// (0x0003e8a3) main_skin_pane

0x0649,	// (0x0003e3a9) main_smil2_pane

0x0b43,	// (0x0003e8a3) main_smil_pane

0x0b43,	// (0x0003e8a3) main_video_pane

0x0b43,	// (0x0003e8a3) main_video_tele_pane

0x08a4,	// (0x0003e604) main_viewer_pane_ParamLimits

0x08a4,	// (0x0003e604) main_viewer_pane

0x0b43,	// (0x0003e8a3) main_vorec_pane

0x6c16,	// (0x00044976) popup_blid_sat_info_window_ParamLimits

0x6c16,	// (0x00044976) popup_blid_sat_info_window

0x6c6e,	// (0x000449ce) popup_dyc_status_message_window_ParamLimits

0x6c6e,	// (0x000449ce) popup_dyc_status_message_window

0x6c86,	// (0x000449e6) popup_grid_large_graphic_window_ParamLimits

0x6c86,	// (0x000449e6) popup_grid_large_graphic_window

0x6d36,	// (0x00044a96) popup_loc_request_window_ParamLimits

0x6d36,	// (0x00044a96) popup_loc_request_window

0x6e32,	// (0x00044b92) popup_wml_address_window_ParamLimits

0x6e32,	// (0x00044b92) popup_wml_address_window

0x69fc,	// (0x0004475c) call_muted_g1

0x666f,	// (0x000443cf) popup_call_audio_conf_window_ParamLimits

0x666f,	// (0x000443cf) popup_call_audio_conf_window

0x6a10,	// (0x00044770) popup_call_audio_first_window_ParamLimits

0x6a10,	// (0x00044770) popup_call_audio_first_window

0x6a86,	// (0x000447e6) popup_call_audio_in_window_ParamLimits

0x6a86,	// (0x000447e6) popup_call_audio_in_window

0x6ac2,	// (0x00044822) popup_call_audio_out_window_ParamLimits

0x6ac2,	// (0x00044822) popup_call_audio_out_window

0x6afc,	// (0x0004485c) popup_call_audio_second_window_ParamLimits

0x6afc,	// (0x0004485c) popup_call_audio_second_window

0x6b52,	// (0x000448b2) popup_call_audio_wait_window_ParamLimits

0x6b52,	// (0x000448b2) popup_call_audio_wait_window

0x6b87,	// (0x000448e7) popup_number_entry_window_ParamLimits

0x6b87,	// (0x000448e7) popup_number_entry_window

0x0236,	// (0x0003df96) bg_popup_call_pane_cp05_ParamLimits

0x0236,	// (0x0003df96) bg_popup_call_pane_cp05

0x0256,	// (0x0003dfb6) popup_number_entry_window_t1

0x0269,	// (0x0003dfc9) popup_number_entry_window_t2

0x027b,	// (0x0003dfdb) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0004cdcb) popup_number_entry_window_t

0x028d,	// (0x0003dfed) text_title_cp2

0x02a0,	// (0x0003e000) bg_popup_call_pane_cp_ParamLimits

0x02a0,	// (0x0003e000) bg_popup_call_pane_cp

0x02ae,	// (0x0003e00e) call_thumbnail_pane

0x02b6,	// (0x0003e016) popup_call_audio_in_window_g1_ParamLimits

0x02b6,	// (0x0003e016) popup_call_audio_in_window_g1

0x02c2,	// (0x0003e022) popup_call_audio_in_window_g2_ParamLimits

0x02c2,	// (0x0003e022) popup_call_audio_in_window_g2

0x02ce,	// (0x0003e02e) popup_call_audio_in_window_g3_ParamLimits

0x02ce,	// (0x0003e02e) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0004cdd4) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0004cdd4) popup_call_audio_in_window_g

0x02da,	// (0x0003e03a) popup_call_audio_in_window_t1_ParamLimits

0x02da,	// (0x0003e03a) popup_call_audio_in_window_t1

0x02f6,	// (0x0003e056) popup_call_audio_in_window_t2_ParamLimits

0x02f6,	// (0x0003e056) popup_call_audio_in_window_t2

0x0312,	// (0x0003e072) popup_call_audio_in_window_t3_ParamLimits

0x0312,	// (0x0003e072) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0004cddb) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0004cddb) popup_call_audio_in_window_t

0x02a0,	// (0x0003e000) bg_popup_call_pane_cp01_ParamLimits

0x02a0,	// (0x0003e000) bg_popup_call_pane_cp01

0x02ae,	// (0x0003e00e) call_thumbnail_pane_cp02

0x0325,	// (0x0003e085) call_type_pane_cp022

0x032d,	// (0x0003e08d) popup_call_audio_out_window_g1_ParamLimits

0x032d,	// (0x0003e08d) popup_call_audio_out_window_g1

0x033f,	// (0x0003e09f) popup_call_audio_out_window_g2_ParamLimits

0x033f,	// (0x0003e09f) popup_call_audio_out_window_g2

0x034b,	// (0x0003e0ab) popup_call_audio_out_window_g3_ParamLimits

0x034b,	// (0x0003e0ab) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0004cde2) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0004cde2) popup_call_audio_out_window_g

0x035d,	// (0x0003e0bd) popup_call_audio_out_window_t1_ParamLimits

0x035d,	// (0x0003e0bd) popup_call_audio_out_window_t1

0x0375,	// (0x0003e0d5) popup_call_audio_out_window_t2_ParamLimits

0x0375,	// (0x0003e0d5) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0004cde9) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0004cde9) popup_call_audio_out_window_t

0x038a,	// (0x0003e0ea) bg_popup_call_pane_ParamLimits

0x038a,	// (0x0003e0ea) bg_popup_call_pane

0x43e5,	// (0x00042145) call_thumbnail_pane_cp_ParamLimits

0x43e5,	// (0x00042145) call_thumbnail_pane_cp

0x040e,	// (0x0003e16e) call_type_pane_cp01_ParamLimits

0x040e,	// (0x0003e16e) call_type_pane_cp01

0x0452,	// (0x0003e1b2) popup_call_audio_first_window_g1_ParamLimits

0x0452,	// (0x0003e1b2) popup_call_audio_first_window_g1

0x049e,	// (0x0003e1fe) popup_call_audio_first_window_g2_ParamLimits

0x049e,	// (0x0003e1fe) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0004cdee) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0004cdee) popup_call_audio_first_window_g

0x04e2,	// (0x0003e242) popup_call_audio_first_window_t1_ParamLimits

0x04e2,	// (0x0003e242) popup_call_audio_first_window_t1

0x058e,	// (0x0003e2ee) popup_call_audio_first_window_t4_ParamLimits

0x058e,	// (0x0003e2ee) popup_call_audio_first_window_t4

0x061a,	// (0x0003e37a) popup_call_audio_first_window_t5_ParamLimits

0x061a,	// (0x0003e37a) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0004cdf3) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0004cdf3) popup_call_audio_first_window_t

0x0649,	// (0x0003e3a9) bg_popup_call_pane_cp02

0x0653,	// (0x0003e3b3) call_type_pane_cp023

0x065b,	// (0x0003e3bb) popup_call_audio_wait_window_g1

0x0663,	// (0x0003e3c3) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0004cdfa) popup_call_audio_wait_window_g

0x066b,	// (0x0003e3cb) popup_call_audio_wait_window_t3

0x0679,	// (0x0003e3d9) bg_popup_call_pane_cp03_ParamLimits

0x0679,	// (0x0003e3d9) bg_popup_call_pane_cp03

0x06d9,	// (0x0003e439) call_thumbnail_pane_cp011_ParamLimits

0x06d9,	// (0x0003e439) call_thumbnail_pane_cp011

0x06e5,	// (0x0003e445) call_type_pane_cp034_ParamLimits

0x06e5,	// (0x0003e445) call_type_pane_cp034

0x0721,	// (0x0003e481) popup_call_audio_second_window_g1_ParamLimits

0x0721,	// (0x0003e481) popup_call_audio_second_window_g1

0x075d,	// (0x0003e4bd) popup_call_audio_second_window_g2_ParamLimits

0x075d,	// (0x0003e4bd) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0004cdff) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0004cdff) popup_call_audio_second_window_g

0x0799,	// (0x0003e4f9) popup_call_audio_second_window_t1_ParamLimits

0x0799,	// (0x0003e4f9) popup_call_audio_second_window_t1

0x081a,	// (0x0003e57a) popup_call_audio_second_window_t2_ParamLimits

0x081a,	// (0x0003e57a) popup_call_audio_second_window_t2

0x0850,	// (0x0003e5b0) popup_call_audio_second_window_t3_ParamLimits

0x0850,	// (0x0003e5b0) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0004ce04) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0004ce04) popup_call_audio_second_window_t

0x0649,	// (0x0003e3a9) bg_popup_call_pane_cp04

0x0886,	// (0x0003e5e6) list_conf_pane

0x088e,	// (0x0003e5ee) popup_call_audio_conf_window_t1

0x089c,	// (0x0003e5fc) call_thumbnail_pane_g1

0x08a4,	// (0x0003e604) bg_pinb_pane_ParamLimits

0x08a4,	// (0x0003e604) bg_pinb_pane

0x08b2,	// (0x0003e612) find_pinb_pane

0x08a4,	// (0x0003e604) listscroll_pinb_pane_ParamLimits

0x08a4,	// (0x0003e604) listscroll_pinb_pane

0x08bc,	// (0x0003e61c) pinb_bg_pane_g1

0x08bc,	// (0x0003e61c) pinb_bg_pane_g2

0x08bc,	// (0x0003e61c) pinb_bg_pane_g3

0x08bc,	// (0x0003e61c) pinb_bg_pane_g4

0x08bc,	// (0x0003e61c) pinb_bg_pane_g5

0x08bc,	// (0x0003e61c) pinb_bg_pane_g6

0x08bc,	// (0x0003e61c) pinb_bg_pane_g7

0x08bc,	// (0x0003e61c) pinb_bg_pane_g8

0x08bc,	// (0x0003e61c) pinb_bg_pane_g9

0x08bc,	// (0x0003e61c) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0004ce0b) pinb_bg_pane_g

0x021e,	// (0x0003df7e) grid_pinb_pane

0x021e,	// (0x0003df7e) list_pinb_pane

0x08c6,	// (0x0003e626) scroll_pane_cp01_ParamLimits

0x08c6,	// (0x0003e626) scroll_pane_cp01

0x08d4,	// (0x0003e634) find_pinb_pane_g1_ParamLimits

0x08d4,	// (0x0003e634) find_pinb_pane_g1

0x08ec,	// (0x0003e64c) find_pinb_pane_t1

0x08fe,	// (0x0003e65e) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0004ce25) find_pinb_pane_t

0x0913,	// (0x0003e673) input_focus_pane_cp01_ParamLimits

0x0913,	// (0x0003e673) input_focus_pane_cp01

0x0228,	// (0x0003df88) cell_pinb_pane_ParamLimits

0x0228,	// (0x0003df88) cell_pinb_pane

0x091f,	// (0x0003e67f) cell_pinb_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) cell_pinb_pane_g1

0x092d,	// (0x0003e68d) cell_pinb_pane_g2_ParamLimits

0x092d,	// (0x0003e68d) cell_pinb_pane_g2

0x092d,	// (0x0003e68d) cell_pinb_pane_g3_ParamLimits

0x092d,	// (0x0003e68d) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0004ce2a) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0004ce2a) cell_pinb_pane_g

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp01

0x0228,	// (0x0003df88) list_pinb_item_pane_ParamLimits

0x0228,	// (0x0003df88) list_pinb_item_pane

0x021e,	// (0x0003df7e) list_highlight_pane_cp02

0x093b,	// (0x0003e69b) list_pinb_item_pane_g1_ParamLimits

0x093b,	// (0x0003e69b) list_pinb_item_pane_g1

0x092d,	// (0x0003e68d) list_pinb_item_pane_g2_ParamLimits

0x092d,	// (0x0003e68d) list_pinb_item_pane_g2

0x091f,	// (0x0003e67f) list_pinb_item_pane_g3_ParamLimits

0x091f,	// (0x0003e67f) list_pinb_item_pane_g3

0x092d,	// (0x0003e68d) list_pinb_item_pane_g4_ParamLimits

0x092d,	// (0x0003e68d) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0004ce31) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0004ce31) list_pinb_item_pane_g

0x0949,	// (0x0003e6a9) list_pinb_item_pane_t1_ParamLimits

0x0949,	// (0x0003e6a9) list_pinb_item_pane_t1

0x4427,	// (0x00042187) calc_display_pane

0x444c,	// (0x000421ac) calc_paper_pane

0x446f,	// (0x000421cf) grid_calc_pane

0x0649,	// (0x0003e3a9) bg_list_pane_cp01

0x449d,	// (0x000421fd) clock_g1

0x44a5,	// (0x00042205) clock_g2

0x0001,

0xf0da,	// (0x0004ce3a) clock_g

0x44ad,	// (0x0004220d) clock_t1_ParamLimits

0x44ad,	// (0x0004220d) clock_t1

0x44c2,	// (0x00042222) clock_t2_ParamLimits

0x44c2,	// (0x00042222) clock_t2

0x44d4,	// (0x00042234) clock_t3_ParamLimits

0x44d4,	// (0x00042234) clock_t3

0x44e6,	// (0x00042246) clock_t4_ParamLimits

0x44e6,	// (0x00042246) clock_t4

0x44f8,	// (0x00042258) clock_t5_ParamLimits

0x44f8,	// (0x00042258) clock_t5

0x450d,	// (0x0004226d) clock_t6_ParamLimits

0x450d,	// (0x0004226d) clock_t6

0x451f,	// (0x0004227f) clock_t7_ParamLimits

0x451f,	// (0x0004227f) clock_t7

0x4531,	// (0x00042291) clock_t8_ParamLimits

0x4531,	// (0x00042291) clock_t8

0x4545,	// (0x000422a5) clock_t9_ParamLimits

0x4545,	// (0x000422a5) clock_t9

0x0008,

0xf0df,	// (0x0004ce3f) clock_t_ParamLimits

0xf0df,	// (0x0004ce3f) clock_t

0x095d,	// (0x0003e6bd) popup_clock_analogue_window_cp02

0x095d,	// (0x0003e6bd) popup_clock_digital_window_cp01

0x0649,	// (0x0003e3a9) listscroll_help_pane

0x0649,	// (0x0003e3a9) phob_pre_status_pane

0x0965,	// (0x0003e6c5) grid_qdial_pane

0x4559,	// (0x000422b9) listscroll_mce_pane

0x08a4,	// (0x0003e604) bg_notes_pane

0x096f,	// (0x0003e6cf) list_notes_pane

0x4573,	// (0x000422d3) scroll_pane_cp06

0x097d,	// (0x0003e6dd) bg_calc_paper_pane

0xcd13,	// (0x0004aa73) list_calc_pane

0x0991,	// (0x0003e6f1) bg_calc_display_pane

0x4587,	// (0x000422e7) calc_display_pane_t1

0x4599,	// (0x000422f9) calc_display_pane_t2

0xcd2d,	// (0x0004aa8d) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0004ce52) calc_display_pane_t

0x45ab,	// (0x0004230b) cell_calc_pane_ParamLimits

0x45ab,	// (0x0004230b) cell_calc_pane

0x099d,	// (0x0003e6fd) bg_calc_paper_pane_g1

0x09a9,	// (0x0003e709) bg_calc_paper_pane_g2

0x09b5,	// (0x0003e715) bg_calc_paper_pane_g3

0x09c1,	// (0x0003e721) bg_calc_paper_pane_g4

0x09cd,	// (0x0003e72d) bg_calc_paper_pane_g5

0x45e0,	// (0x00042340) bg_calc_paper_pane_g6

0x45ef,	// (0x0004234f) bg_calc_paper_pane_g7

0x45fe,	// (0x0004235e) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0004ce59) bg_calc_paper_pane_g

0x4611,	// (0x00042371) calc_bg_paper_pane_g9

0x4624,	// (0x00042384) list_calc_item_pane_ParamLimits

0x4624,	// (0x00042384) list_calc_item_pane

0x09d9,	// (0x0003e739) list_calc_item_pane_g1

0xcd3f,	// (0x0004aa9f) list_calc_item_pane_t1_ParamLimits

0xcd3f,	// (0x0004aa9f) list_calc_item_pane_t1

0x4639,	// (0x00042399) list_calc_item_pane_t2_ParamLimits

0x4639,	// (0x00042399) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0004ce6a) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0004ce6a) list_calc_item_pane_t

0x08bc,	// (0x0003e61c) cell_calc_pane_g1

0x09e6,	// (0x0003e746) grid_highlight_pane_cp02

0x2218,	// (0x0003ff78) bg_calc_display_pane_g1

0x466b,	// (0x000423cb) bg_calc_display_pane_g2

0x232e,	// (0x0004008e) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0004ce74) bg_calc_display_pane_g

0x4675,	// (0x000423d5) cell_qdial_pane_ParamLimits

0x4675,	// (0x000423d5) cell_qdial_pane

0x4689,	// (0x000423e9) cell_qdial_pane_g1_ParamLimits

0x4689,	// (0x000423e9) cell_qdial_pane_g1

0x469f,	// (0x000423ff) cell_qdial_pane_g2_ParamLimits

0x469f,	// (0x000423ff) cell_qdial_pane_g2

0x0a08,	// (0x0003e768) cell_qdial_pane_g3_ParamLimits

0x0a08,	// (0x0003e768) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0004ce7b) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0004ce7b) cell_qdial_pane_g

0x46c5,	// (0x00042425) cell_qdial_pane_t1_ParamLimits

0x46c5,	// (0x00042425) cell_qdial_pane_t1

0x46dd,	// (0x0004243d) cell_qdial_pane_t2_ParamLimits

0x46dd,	// (0x0004243d) cell_qdial_pane_t2

0x46f0,	// (0x00042450) cell_qdial_pane_t3_ParamLimits

0x46f0,	// (0x00042450) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0004ce84) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0004ce84) cell_qdial_pane_t

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp04

0x0a14,	// (0x0003e774) thumbnail_qdial_pane_ParamLimits

0x0a14,	// (0x0003e774) thumbnail_qdial_pane

0x0a70,	// (0x0003e7d0) list_help_pane

0x0a79,	// (0x0003e7d9) scroll_pane_cp02

0x4703,	// (0x00042463) help_list_pane_t1_ParamLimits

0x4703,	// (0x00042463) help_list_pane_t1

0xcd51,	// (0x0004aab1) bg_notes_pane_g2

0xcd59,	// (0x0004aab9) bg_notes_pane_g3

0xcd61,	// (0x0004aac1) notes_bg_pane_g1

0xcd69,	// (0x0004aac9) notes_bg_pane_g4

0xcd71,	// (0x0004aad1) notes_bg_pane_g5

0xcd79,	// (0x0004aad9) notes_bg_pane_g6

0xcd81,	// (0x0004aae1) notes_bg_pane_g7

0xcd89,	// (0x0004aae9) notes_bg_pane_g8

0xcd91,	// (0x0004aaf1) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0004cea2) notes_bg_pane_g

0x4722,	// (0x00042482) list_notes_text_pane_ParamLimits

0x4722,	// (0x00042482) list_notes_text_pane

0x0a82,	// (0x0003e7e2) list_notes_text_pane_g1

0x3934,	// (0x00041694) list_notes_text_pane_t1

0x4738,	// (0x00042498) listscroll_cale_week_pane

0x4764,	// (0x000424c4) bg_cale_heading_pane

0x0aa5,	// (0x0003e805) bg_cale_pane_cp01

0x477c,	// (0x000424dc) cale_week_corner_pane

0x479b,	// (0x000424fb) cale_week_day_heading_pane

0x47b8,	// (0x00042518) cale_week_scroll_pane_g1

0x47cb,	// (0x0004252b) cale_week_scroll_pane_g2

0x47e3,	// (0x00042543) cale_week_scroll_pane_g3

0x47fb,	// (0x0004255b) cale_week_scroll_pane_g4

0x4813,	// (0x00042573) cale_week_scroll_pane_g5

0x4833,	// (0x00042593) cale_week_scroll_pane_g6

0x4853,	// (0x000425b3) cale_week_scroll_pane_g7

0x4873,	// (0x000425d3) cale_week_scroll_pane_g8

0x4897,	// (0x000425f7) cale_week_scroll_pane_g9

0x48af,	// (0x0004260f) cale_week_scroll_pane_g10

0x48c7,	// (0x00042627) cale_week_scroll_pane_g11

0x48df,	// (0x0004263f) cale_week_scroll_pane_g12

0x48f7,	// (0x00042657) cale_week_scroll_pane_g13

0x48f7,	// (0x00042657) cale_week_scroll_pane_g14

0x48f7,	// (0x00042657) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0004ceb1) cale_week_scroll_pane_g

0x4933,	// (0x00042693) cale_week_time_pane

0x4957,	// (0x000426b7) grid_cale_week_pane

0x0ad4,	// (0x0003e834) scroll_pane_cp08

0x497d,	// (0x000426dd) cell_cale_week_pane_ParamLimits

0x497d,	// (0x000426dd) cell_cale_week_pane

0x4a0b,	// (0x0004276b) cale_week_day_heading_pane_t1

0x4a35,	// (0x00042795) cale_week_day_heading_pane_t2

0x4a64,	// (0x000427c4) cale_week_day_heading_pane_t3

0x4a93,	// (0x000427f3) cale_week_day_heading_pane_t4

0x4ac2,	// (0x00042822) cale_week_day_heading_pane_t5

0x4af9,	// (0x00042859) cale_week_day_heading_pane_t6

0x4b30,	// (0x00042890) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0004ced2) cale_week_day_heading_pane_t

0x0af1,	// (0x0003e851) bg_cale_side_pane

0x4b5a,	// (0x000428ba) cale_week_time_pane_t1

0x4b74,	// (0x000428d4) cale_week_time_pane_t2

0x4b8e,	// (0x000428ee) cale_week_time_pane_t3

0x4ba8,	// (0x00042908) cale_week_time_pane_t4

0x4bc2,	// (0x00042922) cale_week_time_pane_t5

0x4bdc,	// (0x0004293c) cale_week_time_pane_t6

0x4bf6,	// (0x00042956) cale_week_time_pane_t7

0x4c10,	// (0x00042970) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0004cee1) cale_week_time_pane_t

0x4c30,	// (0x00042990) cell_cale_week_pane_g2

0x4c54,	// (0x000429b4) cell_cale_week_pane_g3_ParamLimits

0x4c54,	// (0x000429b4) cell_cale_week_pane_g3

0x0aff,	// (0x0003e85f) grid_highlight_pane_cp07

0x0b07,	// (0x0003e867) listscroll_gms_pane

0x0b11,	// (0x0003e871) grid_gms_pane

0x0b1a,	// (0x0003e87a) listscroll_gms_pane_g1

0x0b22,	// (0x0003e882) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0004cef2) listscroll_gms_pane_g

0x4c6c,	// (0x000429cc) scroll_pane_cp010

0x4c77,	// (0x000429d7) cell_gms_pane_ParamLimits

0x4c77,	// (0x000429d7) cell_gms_pane

0x4c89,	// (0x000429e9) cell_gms_pane_g1

0x0b2a,	// (0x0003e88a) cell_gms_pane_g2

0x0a82,	// (0x0003e7e2) cell_gms_pane_g3

0x0b32,	// (0x0003e892) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0004cef7) cell_gms_pane_g

0x0b3b,	// (0x0003e89b) grid_highlight_pane_cp09

0x6984,	// (0x000446e4) phob_pre_status_pane_g1

0x698c,	// (0x000446ec) phob_pre_status_pane_g2

0x6994,	// (0x000446f4) phob_pre_status_pane_g3

0x699c,	// (0x000446fc) phob_pre_status_pane_g4

0x0004,

0xf56e,	// (0x0004d2ce) phob_pre_status_pane_g

0x69ac,	// (0x0004470c) phob_pre_status_pane_t1

0x69ba,	// (0x0004471a) phob_pre_status_pane_t2

0x69ca,	// (0x0004472a) phob_pre_status_pane_t3

0x0002,

0xf579,	// (0x0004d2d9) phob_pre_status_pane_t

0x0b43,	// (0x0003e8a3) bg_list_pane_cp05

0x4c99,	// (0x000429f9) grid_vorec_pane

0x4ca1,	// (0x00042a01) vorec_t1

0x4caf,	// (0x00042a0f) vorec_t2

0x4cbd,	// (0x00042a1d) vorec_t3

0x4ccb,	// (0x00042a2b) vorec_t4

0xc727,	// (0x0004a487) vorec_t5

0xc735,	// (0x0004a495) vorec_t6

0x0004,

0xf1a0,	// (0x0004cf00) vorec_t

0xc743,	// (0x0004a4a3) wait_bar_pane_cp01

0x4ce7,	// (0x00042a47) cell_vorec_pane_ParamLimits

0x4ce7,	// (0x00042a47) cell_vorec_pane

0xcd99,	// (0x0004aaf9) cell_vorec_pane_g1

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp05

0x08c6,	// (0x0003e626) cams_zoom_pane

0x08c6,	// (0x0003e626) image_vga_pane

0x091f,	// (0x0003e67f) main_camera_pane_g1

0x091f,	// (0x0003e67f) main_camera_pane_g2

0x091f,	// (0x0003e67f) main_camera_pane_g3

0x091f,	// (0x0003e67f) main_camera_pane_g4

0x091f,	// (0x0003e67f) main_camera_pane_g5

0x091f,	// (0x0003e67f) main_camera_pane_g6

0x091f,	// (0x0003e67f) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0004cf0b) main_camera_pane_g

0x0b93,	// (0x0003e8f3) main_camera_pane_t1

0x0b93,	// (0x0003e8f3) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0004cf1c) main_camera_pane_t

0x4d0e,	// (0x00042a6e) cams_zoom_pane_cp_ParamLimits

0x4d0e,	// (0x00042a6e) cams_zoom_pane_cp

0x4d42,	// (0x00042aa2) image_cif_pane_ParamLimits

0x4d42,	// (0x00042aa2) image_cif_pane

0x021e,	// (0x0003df7e) image_subqcif_pane

0x4d54,	// (0x00042ab4) main_video_pane_g1_ParamLimits

0x4d54,	// (0x00042ab4) main_video_pane_g1

0x4d82,	// (0x00042ae2) main_video_pane_g2_ParamLimits

0x4d82,	// (0x00042ae2) main_video_pane_g2

0x4dbc,	// (0x00042b1c) main_video_pane_g3_ParamLimits

0x4dbc,	// (0x00042b1c) main_video_pane_g3

0x4dbc,	// (0x00042b1c) main_video_pane_g4_ParamLimits

0x4dbc,	// (0x00042b1c) main_video_pane_g4

0x4df0,	// (0x00042b50) main_video_pane_g5_ParamLimits

0x4df0,	// (0x00042b50) main_video_pane_g5

0x0b5f,	// (0x0003e8bf) main_video_pane_g6_ParamLimits

0x0b5f,	// (0x0003e8bf) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0004cf21) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0004cf21) main_video_pane_g

0x4e0c,	// (0x00042b6c) main_video_pane_t1_ParamLimits

0x4e0c,	// (0x00042b6c) main_video_pane_t1

0x0b79,	// (0x0003e8d9) cams_zoom_pane_g1

0x0b79,	// (0x0003e8d9) cams_zoom_pane_g2

0x0b79,	// (0x0003e8d9) cams_zoom_pane_g3

0x0b79,	// (0x0003e8d9) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0004cf30) cams_zoom_pane_g

0x4e64,	// (0x00042bc4) grid_cams_pane

0x4e7e,	// (0x00042bde) linegrid_cams_pane

0x4e91,	// (0x00042bf1) cell_cams_pane_ParamLimits

0x4e91,	// (0x00042bf1) cell_cams_pane

0x0b83,	// (0x0003e8e3) cams_burst_image_pane

0x0b8b,	// (0x0003e8eb) cell_cams_pane_g1

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp03

0x08bc,	// (0x0003e61c) mp_bg_pane_g1

0x021e,	// (0x0003df7e) bg_list_pane_cp03

0x021e,	// (0x0003df7e) bg_mp_pane

0x021e,	// (0x0003df7e) grid_mp_pane

0x0b79,	// (0x0003e8d9) media_player_g1

0x10b4,	// (0x0003ee14) media_player_t1

0x10b4,	// (0x0003ee14) media_player_t2

0x10b4,	// (0x0003ee14) media_player_t3

0x10b4,	// (0x0003ee14) media_player_t4

0x10b4,	// (0x0003ee14) media_player_t5

0x10b4,	// (0x0003ee14) media_player_t6

0x10b4,	// (0x0003ee14) media_player_t7

0x0006,

0xf558,	// (0x0004d2b8) media_player_t

0x021e,	// (0x0003df7e) wait_bar_pane_cp02

0xf53d,	// (0x0004d29d) main_usb_pane_t

0x132e,	// (0x0003f08e) cell_mp_pane

0x08bc,	// (0x0003e61c) cell_mp_pane_g1

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp06

0x0ba7,	// (0x0003e907) grid_skin_colour_pane

0x0baf,	// (0x0003e90f) list_highlight_pane_cp03

0x4eb1,	// (0x00042c11) skin_g1

0x0bb7,	// (0x0003e917) skin_t1

0x0bc6,	// (0x0003e926) skin_t2

0x0001,

0xf1fe,	// (0x0004cf5e) skin_t

0x4eb9,	// (0x00042c19) cell_skin_colour_pane_ParamLimits

0x4eb9,	// (0x00042c19) cell_skin_colour_pane

0x0bd4,	// (0x0003e934) cell_skin_colour_pane_g1

0x4f32,	// (0x00042c92) call_video_g1_ParamLimits

0x4f32,	// (0x00042c92) call_video_g1

0x4f4e,	// (0x00042cae) call_video_g2_ParamLimits

0x4f4e,	// (0x00042cae) call_video_g2

0x0001,

0xf203,	// (0x0004cf63) call_video_g_ParamLimits

0xf203,	// (0x0004cf63) call_video_g

0x4fa0,	// (0x00042d00) call_video_uplink_pane_cp1_ParamLimits

0x4fa0,	// (0x00042d00) call_video_uplink_pane_cp1

0x0be6,	// (0x0003e946) call_video_uplink_pane_cp2

0x503f,	// (0x00042d9f) video_down_crop_pane_ParamLimits

0x503f,	// (0x00042d9f) video_down_crop_pane

0x5128,	// (0x00042e88) video_down_pane_ParamLimits

0x5128,	// (0x00042e88) video_down_pane

0x0bee,	// (0x0003e94e) video_down_subqcif_pane_ParamLimits

0x0bee,	// (0x0003e94e) video_down_subqcif_pane

0x0c06,	// (0x0003e966) video_down_subqcif_pane_cp_ParamLimits

0x0c06,	// (0x0003e966) video_down_subqcif_pane_cp

0x0c2c,	// (0x0003e98c) im_reading_pane_ParamLimits

0x0c2c,	// (0x0003e98c) im_reading_pane

0x5238,	// (0x00042f98) im_writing_pane_ParamLimits

0x5238,	// (0x00042f98) im_writing_pane

0x524e,	// (0x00042fae) im_reading_pane_t1

0x0c46,	// (0x0003e9a6) list_im_pane

0x0c57,	// (0x0003e9b7) scroll_pane_cp07

0x5288,	// (0x00042fe8) im_writing_pane_t1_ParamLimits

0x5288,	// (0x00042fe8) im_writing_pane_t1

0x0c70,	// (0x0003e9d0) im_writing_pane_t2_ParamLimits

0x0c70,	// (0x0003e9d0) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0004cf6d) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0004cf6d) im_writing_pane_t

0x0649,	// (0x0003e3a9) input_focus_pane_cp04

0x0649,	// (0x0003e3a9) input_focus_pane_cp05

0x529d,	// (0x00042ffd) list_im_single_pane_ParamLimits

0x529d,	// (0x00042ffd) list_im_single_pane

0x52b2,	// (0x00043012) list_single_im_pane_t1

0x0b43,	// (0x0003e8a3) blid_accuracy_pane

0x0b43,	// (0x0003e8a3) blid_compass_pane

0x2900,	// (0x00040660) main_location_t1

0x2900,	// (0x00040660) main_location_t2

0x2900,	// (0x00040660) main_location_t3

0x0002,

0xf567,	// (0x0004d2c7) main_location_t

0x0649,	// (0x0003e3a9) aid_levels_location

0x08bc,	// (0x0003e61c) blid_accuracy_pane_g1

0x08bc,	// (0x0003e61c) blid_accuracy_pane_g2

0x0001,

0xf25c,	// (0x0004cfbc) blid_accuracy_pane_g

0x0cb8,	// (0x0003ea18) wml_content_pane

0x0cf6,	// (0x0003ea56) wml_button_pane_ParamLimits

0x0cf6,	// (0x0003ea56) wml_button_pane

0x52c1,	// (0x00043021) wml_list_single_large_pane_ParamLimits

0x52c1,	// (0x00043021) wml_list_single_large_pane

0x52d6,	// (0x00043036) wml_list_single_medium_pane_ParamLimits

0x52d6,	// (0x00043036) wml_list_single_medium_pane

0x52ed,	// (0x0004304d) wml_list_single_small_pane_ParamLimits

0x52ed,	// (0x0004304d) wml_list_single_small_pane

0x0d0a,	// (0x0003ea6a) wml_selection_box_pane_ParamLimits

0x0d0a,	// (0x0003ea6a) wml_selection_box_pane

0x0d1d,	// (0x0003ea7d) wml_list_single_pane_t1

0x0d2c,	// (0x0003ea8c) wml_list_single_medium_pane_t1

0x0d3b,	// (0x0003ea9b) wml_list_single_large_pane_t1

0x0d4a,	// (0x0003eaaa) input_focus_pane_cp02_ParamLimits

0x0d4a,	// (0x0003eaaa) input_focus_pane_cp02

0x0d5d,	// (0x0003eabd) wml_selection_box_pane_g1

0x0d66,	// (0x0003eac6) wml_selection_box_pane_t1_ParamLimits

0x0d66,	// (0x0003eac6) wml_selection_box_pane_t1

0x08a4,	// (0x0003e604) bg_wml_button_pane_ParamLimits

0x08a4,	// (0x0003e604) bg_wml_button_pane

0x0d7e,	// (0x0003eade) wml_button_pane_g1

0x0d86,	// (0x0003eae6) wml_button_pane_t1

0x0d7e,	// (0x0003eade) wml_button_bg_pane_g1

0x0d96,	// (0x0003eaf6) wml_button_bg_pane_g2

0x0d9e,	// (0x0003eafe) wml_button_bg_pane_g3

0x0da6,	// (0x0003eb06) wml_button_bg_pane_g4

0x0dae,	// (0x0003eb0e) wml_button_bg_pane_g5

0x0db6,	// (0x0003eb16) wml_button_bg_pane_g6

0x0dbe,	// (0x0003eb1e) wml_button_bg_pane_g7

0x0dc6,	// (0x0003eb26) wml_button_bg_pane_g8

0x0dce,	// (0x0003eb2e) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0004cf72) wml_button_bg_pane_g

0x5306,	// (0x00043066) bg_list_pane_cp02

0x0dd6,	// (0x0003eb36) mce_header_pane_ParamLimits

0x0dd6,	// (0x0003eb36) mce_header_pane

0x0dec,	// (0x0003eb4c) mce_icon_pane

0x0dec,	// (0x0003eb4c) mce_image_pane

0x0df5,	// (0x0003eb55) mce_text_pane_ParamLimits

0x0df5,	// (0x0003eb55) mce_text_pane

0x530e,	// (0x0004306e) scroll_pane_cp03

0x0cee,	// (0x0003ea4e) scroll_pane_cp04

0x0e08,	// (0x0003eb68) scroll_pane_cp05_ParamLimits

0x0e08,	// (0x0003eb68) scroll_pane_cp05

0x5316,	// (0x00043076) mce_header_field_pane_ParamLimits

0x5316,	// (0x00043076) mce_header_field_pane

0x532d,	// (0x0004308d) mce_header_field_pane_2_ParamLimits

0x532d,	// (0x0004308d) mce_header_field_pane_2

0x5343,	// (0x000430a3) mce_header_field_pane_3

0x534b,	// (0x000430ab) list_single_mce_message_pane_ParamLimits

0x534b,	// (0x000430ab) list_single_mce_message_pane

0x535a,	// (0x000430ba) list_single_mce_smart_pane_ParamLimits

0x535a,	// (0x000430ba) list_single_mce_smart_pane

0x0e14,	// (0x0003eb74) input_focus_pane_cp03

0x0e1d,	// (0x0003eb7d) list_header_data_pane

0x5374,	// (0x000430d4) mce_header_field_pane_t1

0x5382,	// (0x000430e2) list_single_mce_header_pane_ParamLimits

0x5382,	// (0x000430e2) list_single_mce_header_pane

0x0e25,	// (0x0003eb85) list_single_mce_header_pane_t1

0x0e34,	// (0x0003eb94) list_single_mce_message_pane_g1

0x0e3c,	// (0x0003eb9c) list_single_mce_message_pane_t1

0x53bc,	// (0x0004311c) bg_cale_heading_pane_cp01_ParamLimits

0x53bc,	// (0x0004311c) bg_cale_heading_pane_cp01

0x0e4a,	// (0x0003ebaa) bg_cale_pane_cp02_ParamLimits

0x0e4a,	// (0x0003ebaa) bg_cale_pane_cp02

0x53f6,	// (0x00043156) cale_month_corner_pane

0x5415,	// (0x00043175) cale_month_day_heading_pane_ParamLimits

0x5415,	// (0x00043175) cale_month_day_heading_pane

0x5467,	// (0x000431c7) cale_month_pane_g1_ParamLimits

0x5467,	// (0x000431c7) cale_month_pane_g1

0x5496,	// (0x000431f6) cale_month_pane_g2_ParamLimits

0x5496,	// (0x000431f6) cale_month_pane_g2

0x54c6,	// (0x00043226) cale_month_pane_g3_ParamLimits

0x54c6,	// (0x00043226) cale_month_pane_g3

0x5502,	// (0x00043262) cale_month_pane_g4_ParamLimits

0x5502,	// (0x00043262) cale_month_pane_g4

0x553e,	// (0x0004329e) cale_month_pane_g5_ParamLimits

0x553e,	// (0x0004329e) cale_month_pane_g5

0x5586,	// (0x000432e6) cale_month_pane_g6_ParamLimits

0x5586,	// (0x000432e6) cale_month_pane_g6

0x55d2,	// (0x00043332) cale_month_pane_g7_ParamLimits

0x55d2,	// (0x00043332) cale_month_pane_g7

0x5622,	// (0x00043382) cale_month_pane_g8_ParamLimits

0x5622,	// (0x00043382) cale_month_pane_g8

0x5676,	// (0x000433d6) cale_month_pane_g9_ParamLimits

0x5676,	// (0x000433d6) cale_month_pane_g9

0x56c8,	// (0x00043428) cale_month_pane_g10_ParamLimits

0x56c8,	// (0x00043428) cale_month_pane_g10

0x571a,	// (0x0004347a) cale_month_pane_g11_ParamLimits

0x571a,	// (0x0004347a) cale_month_pane_g11

0x576c,	// (0x000434cc) cale_month_pane_g12_ParamLimits

0x576c,	// (0x000434cc) cale_month_pane_g12

0x57be,	// (0x0004351e) cale_month_pane_g13_ParamLimits

0x57be,	// (0x0004351e) cale_month_pane_g13

0x000c,

0xf225,	// (0x0004cf85) cale_month_pane_g_ParamLimits

0xf225,	// (0x0004cf85) cale_month_pane_g

0x5810,	// (0x00043570) cale_month_week_pane

0x5834,	// (0x00043594) grid_cale_month_pane_ParamLimits

0x5834,	// (0x00043594) grid_cale_month_pane

0x587d,	// (0x000435dd) cale_month_day_heading_pane_t1

0x58bf,	// (0x0004361f) cale_month_day_heading_pane_t2

0x58f4,	// (0x00043654) cale_month_day_heading_pane_t3

0x5929,	// (0x00043689) cale_month_day_heading_pane_t4

0x5966,	// (0x000436c6) cale_month_day_heading_pane_t5

0x59ab,	// (0x0004370b) cale_month_day_heading_pane_t6

0x59f0,	// (0x00043750) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0004cfa0) cale_month_day_heading_pane_t

0x0af1,	// (0x0003e851) bg_cale_side_pane_cp01

0x5a3d,	// (0x0004379d) cale_month_week_pane_t1

0x5a56,	// (0x000437b6) cale_month_week_pane_t2

0x5a6f,	// (0x000437cf) cale_month_week_pane_t3

0x5a88,	// (0x000437e8) cale_month_week_pane_t4

0x5aa1,	// (0x00043801) cale_month_week_pane_t5

0x5aba,	// (0x0004381a) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0004cfaf) cale_month_week_pane_t

0x5ad3,	// (0x00043833) cell_cale_month_pane_ParamLimits

0x5ad3,	// (0x00043833) cell_cale_month_pane

0xcda3,	// (0x0004ab03) cell_cale_month_pane_g1

0x5c01,	// (0x00043961) cell_cale_month_pane_t1_ParamLimits

0x5c01,	// (0x00043961) cell_cale_month_pane_t1

0x0aff,	// (0x0003e85f) grid_highlight_pane_cp08

0x08bc,	// (0x0003e61c) main_smil_g1

0x5c2d,	// (0x0004398d) smil_status_pane

0x0e89,	// (0x0003ebe9) smil_text_pane

0x27d8,	// (0x00040538) bg_popup_call3_rect_pane_g8

0x27e0,	// (0x00040540) bg_popup_call3_rect_pane_g9

0x0008,

0xf4e8,	// (0x0004d248) bg_popup_call3_rect_pane_g

0x29c9,	// (0x00040729) smil_status_volume_pane_g1

0x0e93,	// (0x0003ebf3) smil_status_pane_t1

0xcf7f,	// (0x0004acdf) volume_smil_pane

0x0eaa,	// (0x0003ec0a) list_smil_text_pane

0x5c42,	// (0x000439a2) scroll_pane_cp011

0x5c4d,	// (0x000439ad) smil_text_list_pane_t1_ParamLimits

0x5c4d,	// (0x000439ad) smil_text_list_pane_t1

0xcdaf,	// (0x0004ab0f) aid_volume_smil_ParamLimits

0xcdaf,	// (0x0004ab0f) aid_volume_smil

0x08bc,	// (0x0003e61c) smil_volume_pane_g1

0x08bc,	// (0x0003e61c) smil_volume_pane_g2

0x0001,

0xf25c,	// (0x0004cfbc) smil_volume_pane_g

0x4738,	// (0x00042498) listscroll_cale_day_pane

0x0eb4,	// (0x0003ec14) bg_cale_pane

0x0ecc,	// (0x0003ec2c) list_cale_pane

0x0eef,	// (0x0003ec4f) scroll_pane_cp09

0x0f00,	// (0x0003ec60) cale_bg_pane_g1

0x0f08,	// (0x0003ec68) cale_bg_pane_g2

0x0f10,	// (0x0003ec70) cale_bg_pane_g3

0x0f18,	// (0x0003ec78) cale_bg_pane_g4

0x0f20,	// (0x0003ec80) cale_bg_pane_g5

0x0f28,	// (0x0003ec88) cale_bg_pane_g6

0x0f30,	// (0x0003ec90) cale_bg_pane_g7

0x0f38,	// (0x0003ec98) cale_bg_pane_g8

0x0f40,	// (0x0003eca0) cale_bg_pane_g9

0x0008,

0xf261,	// (0x0004cfc1) cale_bg_pane_g

0x5c99,	// (0x000439f9) list_cale_time_pane_ParamLimits

0x5c99,	// (0x000439f9) list_cale_time_pane

0x0f48,	// (0x0003eca8) list_cale_time_pane_g1_ParamLimits

0x0f48,	// (0x0003eca8) list_cale_time_pane_g1

0x0f54,	// (0x0003ecb4) list_cale_time_pane_g2_ParamLimits

0x0f54,	// (0x0003ecb4) list_cale_time_pane_g2

0x5caf,	// (0x00043a0f) list_cale_time_pane_g3_ParamLimits

0x5caf,	// (0x00043a0f) list_cale_time_pane_g3

0x5cbd,	// (0x00043a1d) list_cale_time_pane_g4_ParamLimits

0x5cbd,	// (0x00043a1d) list_cale_time_pane_g4

0x5ccb,	// (0x00043a2b) list_cale_time_pane_g5_ParamLimits

0x5ccb,	// (0x00043a2b) list_cale_time_pane_g5

0x0005,

0xf274,	// (0x0004cfd4) list_cale_time_pane_g_ParamLimits

0xf274,	// (0x0004cfd4) list_cale_time_pane_g

0x0f6e,	// (0x0003ecce) list_cale_time_pane_t1_ParamLimits

0x0f6e,	// (0x0003ecce) list_cale_time_pane_t1

0x0f96,	// (0x0003ecf6) list_cale_time_pane_t2_ParamLimits

0x0f96,	// (0x0003ecf6) list_cale_time_pane_t2

0x5f56,	// (0x00043cb6) aid_blid_cardinal_pane

0x5f94,	// (0x00043cf4) compass_pane_t4

0x0fbe,	// (0x0003ed1e) list_cale_time_pane_t4_ParamLimits

0x0fbe,	// (0x0003ed1e) list_cale_time_pane_t4

0x5fa2,	// (0x00043d02) compass_pane_t5

0x5fb0,	// (0x00043d10) compass_pane_t6

0x5fbe,	// (0x00043d1e) compass_pane_t7

0x1448,	// (0x0003f1a8) navi_pane_cc_t1

0x1625,	// (0x0003f385) aid_phob_thumbnail_center_pane

0x6332,	// (0x00044092) main_postcard_pane_g4_ParamLimits

0x0002,

0xf281,	// (0x0004cfe1) list_cale_time_pane_t_ParamLimits

0xf281,	// (0x0004cfe1) list_cale_time_pane_t

0x02a0,	// (0x0003e000) bg_popup_window_pane_cp02_ParamLimits

0x02a0,	// (0x0003e000) bg_popup_window_pane_cp02

0x0fe6,	// (0x0003ed46) heading_pane_cp01_ParamLimits

0x0fe6,	// (0x0003ed46) heading_pane_cp01

0x0ff2,	// (0x0003ed52) loc_req_pane_ParamLimits

0x0ff2,	// (0x0003ed52) loc_req_pane

0x1002,	// (0x0003ed62) loc_type_pane_ParamLimits

0x1002,	// (0x0003ed62) loc_type_pane

0x1014,	// (0x0003ed74) loc_type_pane_t1_ParamLimits

0x1014,	// (0x0003ed74) loc_type_pane_t1

0x1026,	// (0x0003ed86) loc_type_pane_t2_ParamLimits

0x1026,	// (0x0003ed86) loc_type_pane_t2

0x1038,	// (0x0003ed98) loc_type_pane_t3_ParamLimits

0x1038,	// (0x0003ed98) loc_type_pane_t3

0x0002,

0xf288,	// (0x0004cfe8) loc_type_pane_t_ParamLimits

0xf288,	// (0x0004cfe8) loc_type_pane_t

0x104a,	// (0x0003edaa) list_loc_req_pane

0x1054,	// (0x0003edb4) scroll_pane_cp012

0x5cd9,	// (0x00043a39) list_single_loc_request_popup_menu_pane_ParamLimits

0x5cd9,	// (0x00043a39) list_single_loc_request_popup_menu_pane

0x105f,	// (0x0003edbf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x105f,	// (0x0003edbf) list_single_loc_request_popup_menu_pane_g1

0x106b,	// (0x0003edcb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x106b,	// (0x0003edcb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf28f,	// (0x0004cfef) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf28f,	// (0x0004cfef) list_single_loc_request_popup_menu_pane_g

0x1077,	// (0x0003edd7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1077,	// (0x0003edd7) list_single_loc_request_popup_menu_pane_t1

0x08a4,	// (0x0003e604) bg_popup_window_pane_cp03_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_window_pane_cp03

0x2221,	// (0x0003ff81) heading_loc_req_pane_ParamLimits

0x2221,	// (0x0003ff81) heading_loc_req_pane

0x5ce6,	// (0x00043a46) popup_dyc_status_message_window_g1_ParamLimits

0x5ce6,	// (0x00043a46) popup_dyc_status_message_window_g1

0x5cfa,	// (0x00043a5a) popup_dyc_status_message_window_t1_ParamLimits

0x5cfa,	// (0x00043a5a) popup_dyc_status_message_window_t1

0x5d0f,	// (0x00043a6f) popup_dyc_status_message_window_t2_ParamLimits

0x5d0f,	// (0x00043a6f) popup_dyc_status_message_window_t2

0x5d24,	// (0x00043a84) popup_dyc_status_message_window_t3_ParamLimits

0x5d24,	// (0x00043a84) popup_dyc_status_message_window_t3

0x0002,

0xf294,	// (0x0004cff4) popup_dyc_status_message_window_t_ParamLimits

0xf294,	// (0x0004cff4) popup_dyc_status_message_window_t

0x0649,	// (0x0003e3a9) bg_heading_pane_cp01

0x108d,	// (0x0003eded) heading_loc_req_pane_g1

0x1095,	// (0x0003edf5) heading_loc_req_pane_g2

0x109d,	// (0x0003edfd) heading_loc_req_pane_g3

0x0002,

0xf29b,	// (0x0004cffb) heading_loc_req_pane_g

0x10a5,	// (0x0003ee05) heading_loc_req_pane_t1

0x10c4,	// (0x0003ee24) bg_popup_sub_pane_cp01_ParamLimits

0x10c4,	// (0x0003ee24) bg_popup_sub_pane_cp01

0x10d2,	// (0x0003ee32) popup_cale_events_window_g1_ParamLimits

0x10d2,	// (0x0003ee32) popup_cale_events_window_g1

0x10f2,	// (0x0003ee52) popup_cale_events_window_g2_ParamLimits

0x10f2,	// (0x0003ee52) popup_cale_events_window_g2

0x0001,

0xf2bd,	// (0x0004d01d) popup_cale_events_window_g_ParamLimits

0xf2bd,	// (0x0004d01d) popup_cale_events_window_g

0x1112,	// (0x0003ee72) popup_cale_events_window_t1_ParamLimits

0x1112,	// (0x0003ee72) popup_cale_events_window_t1

0x1124,	// (0x0003ee84) popup_cale_events_window_t2_ParamLimits

0x1124,	// (0x0003ee84) popup_cale_events_window_t2

0x1162,	// (0x0003eec2) popup_cale_events_window_t3_ParamLimits

0x1162,	// (0x0003eec2) popup_cale_events_window_t3

0x119c,	// (0x0003eefc) popup_cale_events_window_t4_ParamLimits

0x119c,	// (0x0003eefc) popup_cale_events_window_t4

0x0003,

0xf2c2,	// (0x0004d022) popup_cale_events_window_t_ParamLimits

0xf2c2,	// (0x0004d022) popup_cale_events_window_t

0x5d4c,	// (0x00043aac) call_type_pane

0x5d5c,	// (0x00043abc) popup_call_status_window_g1

0x5d70,	// (0x00043ad0) popup_call_status_window_g2

0x5d84,	// (0x00043ae4) popup_call_status_window_g3

0x0002,

0xf2cb,	// (0x0004d02b) popup_call_status_window_g

0x11e0,	// (0x0003ef40) call_type_pane_g1

0x11e9,	// (0x0003ef49) call_type_pane_g2

0x0001,

0xf2d2,	// (0x0004d032) call_type_pane_g

0x0649,	// (0x0003e3a9) bg_popup_sub_pane_cp02

0x11f2,	// (0x0003ef52) listscroll_popup_wml_pane

0x11fa,	// (0x0003ef5a) list_wml_pane

0x1204,	// (0x0003ef64) scroll_pane_cp013

0x120f,	// (0x0003ef6f) list_single_graphic_popup_wml_pane_ParamLimits

0x120f,	// (0x0003ef6f) list_single_graphic_popup_wml_pane

0x08bc,	// (0x0003e61c) list_single_graphic_popup_wml_pane_g1

0x1223,	// (0x0003ef83) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2d7,	// (0x0004d037) list_single_graphic_popup_wml_pane_g

0x122b,	// (0x0003ef8b) list_single_graphic_popup_wml_pane_t1

0x1241,	// (0x0003efa1) aid_call_pane

0x089c,	// (0x0003e5fc) popup_clock_analogue_window_g1

0x089c,	// (0x0003e5fc) popup_clock_analogue_window_g2

0xcdd1,	// (0x0004ab31) popup_clock_analogue_window_g3

0xcdd1,	// (0x0004ab31) popup_clock_analogue_window_g4

0x08bc,	// (0x0003e61c) popup_clock_analogue_window_g5

0x0004,

0xf2dc,	// (0x0004d03c) popup_clock_analogue_window_g

0xcdd9,	// (0x0004ab39) popup_clock_analogue_window_t1

0xcde7,	// (0x0004ab47) clock_digital_number_pane_ParamLimits

0xcde7,	// (0x0004ab47) clock_digital_number_pane

0xcdf3,	// (0x0004ab53) clock_digital_number_pane_cp02_ParamLimits

0xcdf3,	// (0x0004ab53) clock_digital_number_pane_cp02

0xcdff,	// (0x0004ab5f) clock_digital_number_pane_cp03_ParamLimits

0xcdff,	// (0x0004ab5f) clock_digital_number_pane_cp03

0xce0b,	// (0x0004ab6b) clock_digital_number_pane_cp04_ParamLimits

0xce0b,	// (0x0004ab6b) clock_digital_number_pane_cp04

0xce17,	// (0x0004ab77) clock_digital_separator_pane_ParamLimits

0xce17,	// (0x0004ab77) clock_digital_separator_pane

0xce23,	// (0x0004ab83) popup_clock_digital_window_t1

0x08bc,	// (0x0003e61c) clock_digital_number_pane_g1

0x08bc,	// (0x0003e61c) clock_digital_number_pane_g2

0x0001,

0xf25c,	// (0x0004cfbc) clock_digital_number_pane_g

0x08bc,	// (0x0003e61c) clock_digital_separator_pane_g1

0x08bc,	// (0x0003e61c) clock_digital_separator_pane_g2

0x0001,

0xf25c,	// (0x0004cfbc) clock_digital_separator_pane_g

0x0649,	// (0x0003e3a9) bg_popup_window_pane_cp04

0x1249,	// (0x0003efa9) heading_pane_cp03

0x0b43,	// (0x0003e8a3) listscroll_popup_gms_pane

0x0649,	// (0x0003e3a9) grid_large_graphic_popup_pane

0x1252,	// (0x0003efb2) listscroll_popup_gms_pane_g1

0x125b,	// (0x0003efbb) listscroll_popup_gms_pane_g2

0x0001,

0xf2e7,	// (0x0004d047) listscroll_popup_gms_pane_g

0x1264,	// (0x0003efc4) scroll_pane_cp014

0x0228,	// (0x0003df88) cell_large_graphic_popup_pane_ParamLimits

0x0228,	// (0x0003df88) cell_large_graphic_popup_pane

0x091f,	// (0x0003e67f) cell_large_graphic_popup_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) cell_large_graphic_popup_pane_g1

0x126d,	// (0x0003efcd) cell_large_graphic_popup_pane_g2_ParamLimits

0x126d,	// (0x0003efcd) cell_large_graphic_popup_pane_g2

0x127b,	// (0x0003efdb) cell_large_graphic_popup_pane_g3_ParamLimits

0x127b,	// (0x0003efdb) cell_large_graphic_popup_pane_g3

0x1289,	// (0x0003efe9) cell_large_graphic_popup_pane_g4_ParamLimits

0x1289,	// (0x0003efe9) cell_large_graphic_popup_pane_g4

0x0003,

0xf2ec,	// (0x0004d04c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2ec,	// (0x0004d04c) cell_large_graphic_popup_pane_g

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp010

0x08bc,	// (0x0003e61c) bg_popup_call_pane_g1

0x129a,	// (0x0003effa) list_single_graphic_popup_conf_pane_ParamLimits

0x129a,	// (0x0003effa) list_single_graphic_popup_conf_pane

0x12ad,	// (0x0003f00d) list_highlight_pane_cp01

0x12b6,	// (0x0003f016) list_single_graphic_popup_conf_pane_g1

0x12be,	// (0x0003f01e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2f5,	// (0x0004d055) list_single_graphic_popup_conf_pane_g

0x12c6,	// (0x0003f026) list_single_graphic_popup_conf_pane_t1

0x12d4,	// (0x0003f034) linegrid_cams_pane_g1

0x5d93,	// (0x00043af3) linegrid_cams_pane_g2

0x0a82,	// (0x0003e7e2) linegrid_cams_pane_g3

0x12dd,	// (0x0003f03d) linegrid_cams_pane_g4

0x5d9c,	// (0x00043afc) linegrid_cams_pane_g5

0x5da5,	// (0x00043b05) linegrid_cams_pane_g6

0x0b32,	// (0x0003e892) linegrid_cams_pane_g7

0x0006,

0xf2fa,	// (0x0004d05a) linegrid_cams_pane_g

0x12e6,	// (0x0003f046) popup_clock_analogue_window

0x12e6,	// (0x0003f046) popup_clock_digital_window

0x0649,	// (0x0003e3a9) popup_phob_thumbnail_window

0x08bc,	// (0x0003e61c) call_video_uplink_pane_g1

0x12ef,	// (0x0003f04f) call_video_uplink_pane_g2

0x0001,

0xf309,	// (0x0004d069) call_video_uplink_pane_g

0x12f7,	// (0x0003f057) video_uplink_pane

0x12ff,	// (0x0003f05f) mce_image_pane_g1

0x5db0,	// (0x00043b10) mce_image_pane_g2

0x5db8,	// (0x00043b18) mce_image_pane_g3

0x5dc0,	// (0x00043b20) mce_image_pane_g4

0x5dc8,	// (0x00043b28) mce_image_pane_g5

0x0004,

0xf30e,	// (0x0004d06e) mce_image_pane_g

0x1309,	// (0x0003f069) control_top_pane_stacon_cp01_ParamLimits

0x1309,	// (0x0003f069) control_top_pane_stacon_cp01

0x131d,	// (0x0003f07d) uni_indicator_pane_stacon_cp01_ParamLimits

0x131d,	// (0x0003f07d) uni_indicator_pane_stacon_cp01

0x132e,	// (0x0003f08e) bg_popup_sub_pane_cp03

0x5dd0,	// (0x00043b30) chi_dic_find_pane

0x5dd8,	// (0x00043b38) listscroll_chi_dic_pane

0x5de1,	// (0x00043b41) main_pane_chidic_g1

0x5df4,	// (0x00043b54) chi_dic_find_pane_t1

0x1338,	// (0x0003f098) find_chidic_pane

0x1341,	// (0x0003f0a1) chi_dic_list_pane_ParamLimits

0x1341,	// (0x0003f0a1) chi_dic_list_pane

0x1352,	// (0x0003f0b2) scroll_pane_cp020

0x5e02,	// (0x00043b62) find_chidic_pane_t1

0x0649,	// (0x0003e3a9) input_focus_pane_cp06

0x5e11,	// (0x00043b71) list_chi_dic_pane_ParamLimits

0x5e11,	// (0x00043b71) list_chi_dic_pane

0x5e23,	// (0x00043b83) list_chi_dic_pane_t1_ParamLimits

0x5e23,	// (0x00043b83) list_chi_dic_pane_t1

0x0649,	// (0x0003e3a9) list_highlight_pane_cp020

0x135a,	// (0x0003f0ba) bg_cale_heading_pane_g1

0x5e36,	// (0x00043b96) bg_cale_heading_pane_g2

0x5e3e,	// (0x00043b9e) bg_cale_heading_pane_g3

0x5e46,	// (0x00043ba6) bg_cale_heading_pane_g4

0x5e50,	// (0x00043bb0) bg_cale_heading_pane_g5

0x5e5a,	// (0x00043bba) bg_cale_heading_pane_g6

0x5e62,	// (0x00043bc2) bg_cale_heading_pane_g7

0x5e6a,	// (0x00043bca) bg_cale_heading_pane_g8

0x5e74,	// (0x00043bd4) bg_cale_heading_pane_g9

0x0008,

0xf319,	// (0x0004d079) bg_cale_heading_pane_g

0x135a,	// (0x0003f0ba) bg_cale_side_pane_g1

0x5e7e,	// (0x00043bde) bg_cale_side_pane_g2

0x5e86,	// (0x00043be6) bg_cale_side_pane_g3

0x5e8e,	// (0x00043bee) bg_cale_side_pane_g4

0x5e96,	// (0x00043bf6) bg_cale_side_pane_g5

0x5e9e,	// (0x00043bfe) bg_cale_side_pane_g6

0x5ea6,	// (0x00043c06) bg_cale_side_pane_g7

0x5eae,	// (0x00043c0e) bg_cale_side_pane_g8

0x5eb6,	// (0x00043c16) bg_cale_side_pane_g9

0x0008,

0xf32c,	// (0x0004d08c) bg_cale_side_pane_g

0x5ebe,	// (0x00043c1e) popup_call_status_window_ParamLimits

0x5ebe,	// (0x00043c1e) popup_call_status_window

0x1362,	// (0x0003f0c2) stacon_top_pane

0x136a,	// (0x0003f0ca) status_pane_ParamLimits

0x136a,	// (0x0003f0ca) status_pane

0x137f,	// (0x0003f0df) status_small_pane

0x1387,	// (0x0003f0e7) control_pane

0x0649,	// (0x0003e3a9) stacon_bottom_pane

0x138f,	// (0x0003f0ef) list_single_mce_smart_pane_t1_ParamLimits

0x138f,	// (0x0003f0ef) list_single_mce_smart_pane_t1

0x13a2,	// (0x0003f102) list_single_mce_smart_pane_t2_ParamLimits

0x13a2,	// (0x0003f102) list_single_mce_smart_pane_t2

0x0001,

0xf33f,	// (0x0004d09f) list_single_mce_smart_pane_t_ParamLimits

0xf33f,	// (0x0004d09f) list_single_mce_smart_pane_t

0x5f05,	// (0x00043c65) compass_pane

0x5f0e,	// (0x00043c6e) main_location2_pane_t1

0x5f20,	// (0x00043c80) main_location2_pane_t2

0x5f32,	// (0x00043c92) main_location2_pane_t3

0x0003,

0xf344,	// (0x0004d0a4) main_location2_pane_t

0x13c1,	// (0x0003f121) compass_pane_g1_ParamLimits

0x13c1,	// (0x0003f121) compass_pane_g1

0x5f76,	// (0x00043cd6) compass_pane_t1

0x5f85,	// (0x00043ce5) compass_pane_t2

0x0005,

0xf34d,	// (0x0004d0ad) compass_pane_t

0x5fcc,	// (0x00043d2c) text_secondary_cp61

0x143f,	// (0x0003f19f) navi_pane_cams_g5

0x14bb,	// (0x0003f21b) navi_pane_im_t1

0x14c9,	// (0x0003f229) navi_pane_mp_g1_ParamLimits

0x14c9,	// (0x0003f229) navi_pane_mp_g1

0x14dd,	// (0x0003f23d) navi_pane_mp_g2_ParamLimits

0x14dd,	// (0x0003f23d) navi_pane_mp_g2

0x14e9,	// (0x0003f249) navi_pane_mp_g3_ParamLimits

0x14e9,	// (0x0003f249) navi_pane_mp_g3

0x0002,

0xf361,	// (0x0004d0c1) navi_pane_mp_g_ParamLimits

0xf361,	// (0x0004d0c1) navi_pane_mp_g

0x14f5,	// (0x0003f255) navi_pane_mp_t1

0x1503,	// (0x0003f263) navi_pane_mp_t2

0x0002,

0xf368,	// (0x0004d0c8) navi_pane_mp_t

0x156e,	// (0x0003f2ce) navi_pane_vt_g1

0x14f5,	// (0x0003f255) navi_pane_vt_t1

0x1576,	// (0x0003f2d6) navi_slider_pane

0x0b43,	// (0x0003e8a3) zooming_pane

0x1586,	// (0x0003f2e6) navi_slider_pane_g1

0xce40,	// (0x0004aba0) navi_slider_pane_g2

0x0006,

0xf36f,	// (0x0004d0cf) navi_slider_pane_g

0x15aa,	// (0x0003f30a) aid_levels_zoom

0x15b2,	// (0x0003f312) zooming_pane_g1

0x15ba,	// (0x0003f31a) zooming_pane_g2

0x15ba,	// (0x0003f31a) zooming_pane_g3

0x0002,

0xf37e,	// (0x0004d0de) zooming_pane_g

0x15c2,	// (0x0003f322) level_10_zoom

0x15cb,	// (0x0003f32b) level_11_zoom

0x15d4,	// (0x0003f334) level_1_zoom

0x15dd,	// (0x0003f33d) level_2_zoom

0x15e6,	// (0x0003f346) level_3_zoom

0x15ef,	// (0x0003f34f) level_4_zoom

0x15f8,	// (0x0003f358) level_5_zoom

0x1601,	// (0x0003f361) level_6_zoom

0x160a,	// (0x0003f36a) level_7_zoom

0x1613,	// (0x0003f373) level_8_zoom

0x161c,	// (0x0003f37c) level_9_zoom

0x162d,	// (0x0003f38d) popup_phob_thumbnail_window_g1

0x1635,	// (0x0003f395) popup_phob_thumbnail_window_g2

0x0001,

0xf385,	// (0x0004d0e5) popup_phob_thumbnail_window_g

0x69da,	// (0x0004473a) level_1_location

0x69e2,	// (0x00044742) level_2_location

0x69ea,	// (0x0004474a) level_3_location

0x69f2,	// (0x00044752) level_4_location

0x0b43,	// (0x0003e8a3) level_5_location

0x601d,	// (0x00043d7d) mce_icon_pane_g1

0x6025,	// (0x00043d85) mce_icon_pane_g2

0x0001,

0xf38a,	// (0x0004d0ea) mce_icon_pane_g

0x21f6,	// (0x0003ff56) main_mup_pane_g1_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g1

0x21f6,	// (0x0003ff56) main_mup_pane_g2_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g2

0x21f6,	// (0x0003ff56) main_mup_pane_g3_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g3

0x21f6,	// (0x0003ff56) main_mup_pane_g4_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g4

0x21f6,	// (0x0003ff56) main_mup_pane_g5_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g5

0x21f6,	// (0x0003ff56) main_mup_pane_g6_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g6

0x21f6,	// (0x0003ff56) main_mup_pane_g7_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g7

0x21f6,	// (0x0003ff56) main_mup_pane_g8_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g8

0x21f6,	// (0x0003ff56) main_mup_pane_g9_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g9

0x21f6,	// (0x0003ff56) main_mup_pane_g10_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g10

0x21f6,	// (0x0003ff56) main_mup_pane_g11_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g11

0x091f,	// (0x0003e67f) main_mup_pane_g12_ParamLimits

0x091f,	// (0x0003e67f) main_mup_pane_g12

0x21f6,	// (0x0003ff56) main_mup_pane_g13_ParamLimits

0x21f6,	// (0x0003ff56) main_mup_pane_g13

0x000c,

0xf38f,	// (0x0004d0ef) main_mup_pane_g_ParamLimits

0xf38f,	// (0x0004d0ef) main_mup_pane_g

0x2204,	// (0x0003ff64) main_mup_pane_t1_ParamLimits

0x2204,	// (0x0003ff64) main_mup_pane_t1

0x2204,	// (0x0003ff64) main_mup_pane_t2_ParamLimits

0x2204,	// (0x0003ff64) main_mup_pane_t2

0x2204,	// (0x0003ff64) main_mup_pane_t3_ParamLimits

0x2204,	// (0x0003ff64) main_mup_pane_t3

0x0b93,	// (0x0003e8f3) main_mup_pane_t4_ParamLimits

0x0b93,	// (0x0003e8f3) main_mup_pane_t4

0x0b93,	// (0x0003e8f3) main_mup_pane_t5_ParamLimits

0x0b93,	// (0x0003e8f3) main_mup_pane_t5

0x0b4b,	// (0x0003e8ab) main_mup_pane_t6_ParamLimits

0x0b4b,	// (0x0003e8ab) main_mup_pane_t6

0x0005,

0xf3aa,	// (0x0004d10a) main_mup_pane_t_ParamLimits

0xf3aa,	// (0x0004d10a) main_mup_pane_t

0x0228,	// (0x0003df88) mup_progress_pane_ParamLimits

0x0228,	// (0x0003df88) mup_progress_pane

0x21e8,	// (0x0003ff48) mup_visualizer_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup_visualizer_pane

0x21e8,	// (0x0003ff48) mup_volume_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup_volume_pane

0x092d,	// (0x0003e68d) mup_visualizer_pane_g1_ParamLimits

0x092d,	// (0x0003e68d) mup_visualizer_pane_g1

0x163d,	// (0x0003f39d) mup_visualizer_pane_g2_ParamLimits

0x163d,	// (0x0003f39d) mup_visualizer_pane_g2

0x091f,	// (0x0003e67f) mup_visualizer_pane_g3_ParamLimits

0x091f,	// (0x0003e67f) mup_visualizer_pane_g3

0x0002,

0xf3b7,	// (0x0004d117) mup_visualizer_pane_g_ParamLimits

0xf3b7,	// (0x0004d117) mup_visualizer_pane_g

0x0b79,	// (0x0003e8d9) mup_volume_pane_g1

0x0b79,	// (0x0003e8d9) mup_volume_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) mup_volume_pane_g

0x0b79,	// (0x0003e8d9) mup_progress_pane_g1

0x0b79,	// (0x0003e8d9) mup_progress_pane_g2

0x0b79,	// (0x0003e8d9) mup_progress_pane_g3

0x0002,

0xf3c3,	// (0x0004d123) mup_progress_pane_g

0x0649,	// (0x0003e3a9) bg_popup_window_pane_cp05

0x164b,	// (0x0003f3ab) heading_pane_cp02_ParamLimits

0x164b,	// (0x0003f3ab) heading_pane_cp02

0x1665,	// (0x0003f3c5) list_popup_blid_pane

0x166d,	// (0x0003f3cd) list_blid_sat_info_pane_ParamLimits

0x166d,	// (0x0003f3cd) list_blid_sat_info_pane

0x1680,	// (0x0003f3e0) list_blid_sat_info_pane_g1

0x1688,	// (0x0003f3e8) list_blid_sat_info_pane_t1

0x6125,	// (0x00043e85) mup_equalizer_pane_ParamLimits

0x6125,	// (0x00043e85) mup_equalizer_pane

0x613e,	// (0x00043e9e) mup_equalizer_pane_cp1_ParamLimits

0x613e,	// (0x00043e9e) mup_equalizer_pane_cp1

0x615b,	// (0x00043ebb) mup_equalizer_pane_cp2_ParamLimits

0x615b,	// (0x00043ebb) mup_equalizer_pane_cp2

0x6178,	// (0x00043ed8) mup_equalizer_pane_cp3_ParamLimits

0x6178,	// (0x00043ed8) mup_equalizer_pane_cp3

0x6199,	// (0x00043ef9) mup_equalizer_pane_cp4_ParamLimits

0x6199,	// (0x00043ef9) mup_equalizer_pane_cp4

0x61ba,	// (0x00043f1a) mup_equalizer_pane_cp5

0x61ce,	// (0x00043f2e) mup_equalizer_pane_cp6

0x61e2,	// (0x00043f42) mup_equalizer_pane_cp7

0x2858,	// (0x000405b8) bg_popup_call_poc_act_pane_g9

0x2860,	// (0x000405c0) bg_popup_call_poc_act_pane_g10

0x2868,	// (0x000405c8) bg_popup_call_poc_act_pane_g11

0x000a,

0x08a4,	// (0x0003e604) mup_scale_pane

0x08bc,	// (0x0003e61c) mup_scale_pane_g1

0x1696,	// (0x0003f3f6) mup_scale_pane_g2

0x0006,

0xf3df,	// (0x0004d13f) mup_scale_pane_g

0x16ba,	// (0x0003f41a) msg_data_pane

0x16c2,	// (0x0003f422) scroll_pane_cp017

0x3942,	// (0x000416a2) bg_list_pane_cp04_ParamLimits

0x3942,	// (0x000416a2) bg_list_pane_cp04

0x16ca,	// (0x0003f42a) msg_data_pane_g1

0x6208,	// (0x00043f68) msg_data_pane_g2

0x6210,	// (0x00043f70) msg_data_pane_g3

0x6218,	// (0x00043f78) msg_data_pane_g4

0x6220,	// (0x00043f80) msg_data_pane_g5

0x6228,	// (0x00043f88) msg_data_pane_g6

0x6230,	// (0x00043f90) msg_data_pane_g7

0x0006,

0xf3ee,	// (0x0004d14e) msg_data_pane_g

0x395a,	// (0x000416ba) msg_text_pane_ParamLimits

0x395a,	// (0x000416ba) msg_text_pane

0x6238,	// (0x00043f98) qrid_highlight_pane_cp011_ParamLimits

0x6238,	// (0x00043f98) qrid_highlight_pane_cp011

0x0649,	// (0x0003e3a9) msg_body_pane

0x0649,	// (0x0003e3a9) msg_header_pane

0x16db,	// (0x0003f43b) input_focus_pane_cp07

0xce5a,	// (0x0004abba) msg_header_pane_t1_ParamLimits

0xce5a,	// (0x0004abba) msg_header_pane_t1

0xce70,	// (0x0004abd0) msg_header_pane_t2_ParamLimits

0xce70,	// (0x0004abd0) msg_header_pane_t2

0x0001,

0xf402,	// (0x0004d162) msg_header_pane_t_ParamLimits

0xf402,	// (0x0004d162) msg_header_pane_t

0x16f0,	// (0x0003f450) msg_body_pane_g1

0xce87,	// (0x0004abe7) msg_body_pane_t1_ParamLimits

0xce87,	// (0x0004abe7) msg_body_pane_t1

0xceb8,	// (0x0004ac18) msg_body_pane_t2_ParamLimits

0xceb8,	// (0x0004ac18) msg_body_pane_t2

0xceca,	// (0x0004ac2a) msg_body_pane_t3_ParamLimits

0xceca,	// (0x0004ac2a) msg_body_pane_t3

0x0002,

0xf407,	// (0x0004d167) msg_body_pane_t_ParamLimits

0xf407,	// (0x0004d167) msg_body_pane_t

0x6288,	// (0x00043fe8) main_viewer_pane_g1_ParamLimits

0x6288,	// (0x00043fe8) main_viewer_pane_g1

0x6296,	// (0x00043ff6) main_viewer_pane_g2_ParamLimits

0x6296,	// (0x00043ff6) main_viewer_pane_g2

0x62a4,	// (0x00044004) main_viewer_pane_g3_ParamLimits

0x62a4,	// (0x00044004) main_viewer_pane_g3

0x62b3,	// (0x00044013) main_viewer_pane_g4_ParamLimits

0x62b3,	// (0x00044013) main_viewer_pane_g4

0xcef4,	// (0x0004ac54) main_viewer_pane_g5_ParamLimits

0xcef4,	// (0x0004ac54) main_viewer_pane_g5

0xcef4,	// (0x0004ac54) main_viewer_pane_g7_ParamLimits

0xcef4,	// (0x0004ac54) main_viewer_pane_g7

0xcf06,	// (0x0004ac66) main_viewer_pane_g8_ParamLimits

0xcf06,	// (0x0004ac66) main_viewer_pane_g8

0x0007,

0xf417,	// (0x0004d177) main_viewer_pane_g_ParamLimits

0xf417,	// (0x0004d177) main_viewer_pane_g

0x16f8,	// (0x0003f458) viewer_content_pane_ParamLimits

0x16f8,	// (0x0003f458) viewer_content_pane

0x62ef,	// (0x0004404f) main_postcard_pane_g1_ParamLimits

0x62ef,	// (0x0004404f) main_postcard_pane_g1

0x6305,	// (0x00044065) main_postcard_pane_g2_ParamLimits

0x6305,	// (0x00044065) main_postcard_pane_g2

0x631b,	// (0x0004407b) main_postcard_pane_g3_ParamLimits

0x631b,	// (0x0004407b) main_postcard_pane_g3

0x0005,

0xf428,	// (0x0004d188) main_postcard_pane_g_ParamLimits

0xf428,	// (0x0004d188) main_postcard_pane_g

0x6332,	// (0x00044092) main_postcard_pane_g4

0x29dc,	// (0x0004073c) smil_status_volume_pane_g2

0x6375,	// (0x000440d5) postcard_pane_ParamLimits

0x6375,	// (0x000440d5) postcard_pane

0x1714,	// (0x0003f474) postcard_pane_g1_ParamLimits

0x1714,	// (0x0003f474) postcard_pane_g1

0x63b7,	// (0x00044117) postcard_pane_g2_ParamLimits

0x63b7,	// (0x00044117) postcard_pane_g2

0x63c3,	// (0x00044123) postcard_pane_g3_ParamLimits

0x63c3,	// (0x00044123) postcard_pane_g3

0x1706,	// (0x0003f466) postcard_pane_g4_ParamLimits

0x1706,	// (0x0003f466) postcard_pane_g4

0x63cf,	// (0x0004412f) postcard_pane_g5_ParamLimits

0x63cf,	// (0x0004412f) postcard_pane_g5

0x63e4,	// (0x00044144) postcard_pane_g6_ParamLimits

0x63e4,	// (0x00044144) postcard_pane_g6

0x1714,	// (0x0003f474) postcard_pane_g7_ParamLimits

0x1714,	// (0x0003f474) postcard_pane_g7

0x0006,

0xf435,	// (0x0004d195) postcard_pane_g_ParamLimits

0xf435,	// (0x0004d195) postcard_pane_g

0x63f8,	// (0x00044158) main_mp2_pane_g1_ParamLimits

0x63f8,	// (0x00044158) main_mp2_pane_g1

0x6404,	// (0x00044164) main_mp2_pane_g2_ParamLimits

0x6404,	// (0x00044164) main_mp2_pane_g2

0x6410,	// (0x00044170) main_mp2_pane_g3_ParamLimits

0x6410,	// (0x00044170) main_mp2_pane_g3

0x0002,

0xf444,	// (0x0004d1a4) main_mp2_pane_g_ParamLimits

0xf444,	// (0x0004d1a4) main_mp2_pane_g

0x641c,	// (0x0004417c) main_mp2_pane_t1_ParamLimits

0x641c,	// (0x0004417c) main_mp2_pane_t1

0x6431,	// (0x00044191) main_mp2_pane_t2_ParamLimits

0x6431,	// (0x00044191) main_mp2_pane_t2

0x6443,	// (0x000441a3) main_mp2_pane_t3_ParamLimits

0x6443,	// (0x000441a3) main_mp2_pane_t3

0x0002,

0xf44b,	// (0x0004d1ab) main_mp2_pane_t_ParamLimits

0xf44b,	// (0x0004d1ab) main_mp2_pane_t

0x1722,	// (0x0003f482) pec_content_pane_ParamLimits

0x1722,	// (0x0003f482) pec_content_pane

0x0cee,	// (0x0003ea4e) scroll_pane_cp015

0x1734,	// (0x0003f494) pec_attribute_pane_ParamLimits

0x1734,	// (0x0003f494) pec_attribute_pane

0x6455,	// (0x000441b5) pec_content_pane_g1_ParamLimits

0x6455,	// (0x000441b5) pec_content_pane_g1

0x1744,	// (0x0003f4a4) pec_content_pane_t1_ParamLimits

0x1744,	// (0x0003f4a4) pec_content_pane_t1

0x1756,	// (0x0003f4b6) pec_content_pane_t2_ParamLimits

0x1756,	// (0x0003f4b6) pec_content_pane_t2

0x0001,

0xf452,	// (0x0004d1b2) pec_content_pane_t_ParamLimits

0xf452,	// (0x0004d1b2) pec_content_pane_t

0x6461,	// (0x000441c1) list_single_graphic_pane_cp01_ParamLimits

0x6461,	// (0x000441c1) list_single_graphic_pane_cp01

0x08a4,	// (0x0003e604) bg_popup_sub_pane_cp04

0x1768,	// (0x0003f4c8) popup_mup_playback_window_g1

0x1774,	// (0x0003f4d4) popup_mup_playback_window_t1

0x1789,	// (0x0003f4e9) popup_mup_playback_window_t2

0x0001,

0xf457,	// (0x0004d1b7) popup_mup_playback_window_t

0x17c0,	// (0x0003f520) main_image_pane_g1_ParamLimits

0x17c0,	// (0x0003f520) main_image_pane_g1

0x1803,	// (0x0003f563) scroll_pane_cp018_ParamLimits

0x1803,	// (0x0003f563) scroll_pane_cp018

0x181b,	// (0x0003f57b) scroll_pane_cp016_ParamLimits

0x181b,	// (0x0003f57b) scroll_pane_cp016

0x652f,	// (0x0004428f) smil2_image_pane_ParamLimits

0x652f,	// (0x0004428f) smil2_image_pane

0x655f,	// (0x000442bf) smil2_root_pane_ParamLimits

0x655f,	// (0x000442bf) smil2_root_pane

0x6597,	// (0x000442f7) smil2_text_pane_ParamLimits

0x6597,	// (0x000442f7) smil2_text_pane

0x0649,	// (0x0003e3a9) bg_list_pane_cp06

0x1857,	// (0x0003f5b7) grid_radio_pane

0x0649,	// (0x0003e3a9) bg_popup_window_pane_cp06

0x185f,	// (0x0003f5bf) main_fmradio_pane_t1

0x28b0,	// (0x00040610) heading_pane_cp04

0x186d,	// (0x0003f5cd) main_fmradio_pane_t2

0x28b8,	// (0x00040618) popup_cale_lunar_info_window_g1

0x187b,	// (0x0003f5db) main_fmradio_pane_t3

0x28c0,	// (0x00040620) popup_cale_lunar_info_window_g2

0x1889,	// (0x0003f5e9) main_fmradio_pane_t4

0x0001,

0x1897,	// (0x0003f5f7) main_fmradio_pane_t5

0x0004,

0xf54a,	// (0x0004d2aa) popup_cale_lunar_info_window_g

0xf46c,	// (0x0004d1cc) main_fmradio_pane_t

0x18a5,	// (0x0003f605) wait_bar_pane_cp03

0x18ad,	// (0x0003f60d) cell_fmradio_pane_ParamLimits

0x18ad,	// (0x0003f60d) cell_fmradio_pane

0x1714,	// (0x0003f474) cell_fmradio_pane_g1_ParamLimits

0x1714,	// (0x0003f474) cell_fmradio_pane_g1

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp011

0x18c0,	// (0x0003f620) poc_content_pane_ParamLimits

0x18c0,	// (0x0003f620) poc_content_pane

0x18d2,	// (0x0003f632) scroll_pane_cp019

0x6617,	// (0x00044377) popup_call_poc_act_window_ParamLimits

0x6617,	// (0x00044377) popup_call_poc_act_window

0x663b,	// (0x0004439b) popup_call_poc_inact_window_ParamLimits

0x663b,	// (0x0004439b) popup_call_poc_inact_window

0xf50e,	// (0x0004d26e) bg_popup_call_poc_act_pane_g

0x2870,	// (0x000405d0) bg_popup_call_poc_inact_pane_g1

0x2878,	// (0x000405d8) bg_popup_call_poc_inact_pane_g2

0x18da,	// (0x0003f63a) popup_call_poc_act_window_g2

0x2880,	// (0x000405e0) bg_popup_call_poc_inact_pane_g3

0x2800,	// (0x00040560) bg_popup_call_poc_inact_pane_g4

0x2888,	// (0x000405e8) bg_popup_call_poc_inact_pane_g5

0x18e2,	// (0x0003f642) popup_call_poc_act_window_t1_ParamLimits

0x18e2,	// (0x0003f642) popup_call_poc_act_window_t1

0x190a,	// (0x0003f66a) popup_call_poc_act_window_t2_ParamLimits

0x190a,	// (0x0003f66a) popup_call_poc_act_window_t2

0x1932,	// (0x0003f692) popup_call_poc_act_window_t3_ParamLimits

0x1932,	// (0x0003f692) popup_call_poc_act_window_t3

0x195a,	// (0x0003f6ba) popup_call_poc_act_window_t4_ParamLimits

0x195a,	// (0x0003f6ba) popup_call_poc_act_window_t4

0x0003,

0xf477,	// (0x0004d1d7) popup_call_poc_act_window_t_ParamLimits

0xf477,	// (0x0004d1d7) popup_call_poc_act_window_t

0x2890,	// (0x000405f0) bg_popup_call_poc_inact_pane_g6

0x2898,	// (0x000405f8) bg_popup_call_poc_inact_pane_g7

0x28a0,	// (0x00040600) bg_popup_call_poc_inact_pane_g8

0x196c,	// (0x0003f6cc) popup_call_poc_inact_window_g2

0x28a8,	// (0x00040608) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf525,	// (0x0004d285) bg_popup_call_poc_inact_pane_g

0x1974,	// (0x0003f6d4) popup_call_poc_inact_window_t1_ParamLimits

0x1974,	// (0x0003f6d4) popup_call_poc_inact_window_t1

0x1989,	// (0x0003f6e9) popup_call_poc_inact_window_t2_ParamLimits

0x1989,	// (0x0003f6e9) popup_call_poc_inact_window_t2

0x199e,	// (0x0003f6fe) popup_call_poc_inact_window_t3_ParamLimits

0x199e,	// (0x0003f6fe) popup_call_poc_inact_window_t3

0x0002,

0xf480,	// (0x0004d1e0) popup_call_poc_inact_window_t_ParamLimits

0xf480,	// (0x0004d1e0) popup_call_poc_inact_window_t

0x2954,	// (0x000406b4) context_pane_ParamLimits

0x6ea4,	// (0x00044c04) signal_pane_ParamLimits

0x0b43,	// (0x0003e8a3) main_call2_pane

0xcf4b,	// (0x0004acab) popup_phob_thumbnail2_window_ParamLimits

0xcf4b,	// (0x0004acab) popup_phob_thumbnail2_window

0xcedc,	// (0x0004ac3c) aid_hotspot_pointer_arrow_pane

0xcee4,	// (0x0004ac44) aid_hotspot_pointer_hand_pane

0x69a4,	// (0x00044704) phob_pre_status_pane_g5

0x08c6,	// (0x0003e626) cams_zoom_pane_ParamLimits

0x08c6,	// (0x0003e626) image_vga_pane_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g2_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g3_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g4_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g5_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g6_ParamLimits

0x091f,	// (0x0003e67f) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0004cf0b) main_camera_pane_g_ParamLimits

0x0b93,	// (0x0003e8f3) main_camera_pane_t1_ParamLimits

0x0b93,	// (0x0003e8f3) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0004cf1c) main_camera_pane_t_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_preview_window_pane_cp01_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_preview_window_pane_cp01

0x19b3,	// (0x0003f713) popup_phob_thumbnail2_window_g1_ParamLimits

0x19b3,	// (0x0003f713) popup_phob_thumbnail2_window_g1

0x0649,	// (0x0003e3a9) call2_cli_visual_pane

0x666f,	// (0x000443cf) popup_call2_audio_conf_window_ParamLimits

0x666f,	// (0x000443cf) popup_call2_audio_conf_window

0x668f,	// (0x000443ef) popup_call2_audio_first_window_ParamLimits

0x668f,	// (0x000443ef) popup_call2_audio_first_window

0x6725,	// (0x00044485) popup_call2_audio_in_window_ParamLimits

0x6725,	// (0x00044485) popup_call2_audio_in_window

0x676d,	// (0x000444cd) popup_call2_audio_out_window_ParamLimits

0x676d,	// (0x000444cd) popup_call2_audio_out_window

0x67d7,	// (0x00044537) popup_call2_audio_second_window_ParamLimits

0x67d7,	// (0x00044537) popup_call2_audio_second_window

0x683d,	// (0x0004459d) popup_call2_audio_wait_window_ParamLimits

0x683d,	// (0x0004459d) popup_call2_audio_wait_window

0x0649,	// (0x0003e3a9) bg_popup_call2_act_pane_cp03

0x0886,	// (0x0003e5e6) list_conf_pane_cp

0x19bf,	// (0x0003f71f) popup_call2_audio_conf_window_t1

0x19cd,	// (0x0003f72d) list_single_graphic_popup_conf2_pane_ParamLimits

0x19cd,	// (0x0003f72d) list_single_graphic_popup_conf2_pane

0x12ad,	// (0x0003f00d) list_highlight_pane_cp04

0x19e0,	// (0x0003f740) list_single_graphic_popup_conf2_pane_g1

0x12be,	// (0x0003f01e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf487,	// (0x0004d1e7) list_single_graphic_popup_conf2_pane_g

0x19ea,	// (0x0003f74a) list_single_graphic_popup_conf2_pane_t1

0x19f8,	// (0x0003f758) bg_popup_call2_act_pane_cp01_ParamLimits

0x19f8,	// (0x0003f758) bg_popup_call2_act_pane_cp01

0x1a82,	// (0x0003f7e2) call_type_pane_cp05_ParamLimits

0x1a82,	// (0x0003f7e2) call_type_pane_cp05

0x1ad6,	// (0x0003f836) popup_call2_audio_second_window_g1_ParamLimits

0x1ad6,	// (0x0003f836) popup_call2_audio_second_window_g1

0x1b2a,	// (0x0003f88a) popup_call2_audio_second_window_g2_ParamLimits

0x1b2a,	// (0x0003f88a) popup_call2_audio_second_window_g2

0x0002,

0xf48c,	// (0x0004d1ec) popup_call2_audio_second_window_g_ParamLimits

0xf48c,	// (0x0004d1ec) popup_call2_audio_second_window_g

0x1b8f,	// (0x0003f8ef) popup_call2_audio_second_window_t1_ParamLimits

0x1b8f,	// (0x0003f8ef) popup_call2_audio_second_window_t1

0x1c4a,	// (0x0003f9aa) popup_call2_audio_second_window_t2_ParamLimits

0x1c4a,	// (0x0003f9aa) popup_call2_audio_second_window_t2

0x1c9d,	// (0x0003f9fd) popup_call2_audio_second_window_t3_ParamLimits

0x1c9d,	// (0x0003f9fd) popup_call2_audio_second_window_t3

0x0003,

0xf493,	// (0x0004d1f3) popup_call2_audio_second_window_t_ParamLimits

0xf493,	// (0x0004d1f3) popup_call2_audio_second_window_t

0x0649,	// (0x0003e3a9) bg_popup_call2_in_pane_cp02

0x0653,	// (0x0003e3b3) call_type_pane_cp04

0x6877,	// (0x000445d7) popup_call2_audio_wait_window_g1

0x687f,	// (0x000445df) popup_call2_audio_wait_window_g2

0x0001,

0xf49c,	// (0x0004d1fc) popup_call2_audio_wait_window_g

0x066b,	// (0x0003e3cb) popup_call2_audio_wait_window_t3

0x1d90,	// (0x0003faf0) bg_popup_call2_act_pane_ParamLimits

0x1d90,	// (0x0003faf0) bg_popup_call2_act_pane

0x1e50,	// (0x0003fbb0) call_type_pane_cp03_ParamLimits

0x1e50,	// (0x0003fbb0) call_type_pane_cp03

0x1eb4,	// (0x0003fc14) popup_call2_audio_first_window_g1_ParamLimits

0x1eb4,	// (0x0003fc14) popup_call2_audio_first_window_g1

0x1f24,	// (0x0003fc84) popup_call2_audio_first_window_g2_ParamLimits

0x1f24,	// (0x0003fc84) popup_call2_audio_first_window_g2

0x11d2,	// (0x0003ef32) popup_call2_audio_first_window_g3_ParamLimits

0x11d2,	// (0x0003ef32) popup_call2_audio_first_window_g3

0x0004,

0xf4a1,	// (0x0004d201) popup_call2_audio_first_window_g_ParamLimits

0xf4a1,	// (0x0004d201) popup_call2_audio_first_window_g

0x2002,	// (0x0003fd62) popup_call2_audio_first_window_t1_ParamLimits

0x2002,	// (0x0003fd62) popup_call2_audio_first_window_t1

0x2105,	// (0x0003fe65) popup_call2_audio_first_window_t4_ParamLimits

0x2105,	// (0x0003fe65) popup_call2_audio_first_window_t4

0x222d,	// (0x0003ff8d) popup_call2_audio_first_window_t5_ParamLimits

0x222d,	// (0x0003ff8d) popup_call2_audio_first_window_t5

0x0003,

0xf4ac,	// (0x0004d20c) popup_call2_audio_first_window_t_ParamLimits

0xf4ac,	// (0x0004d20c) popup_call2_audio_first_window_t

0x089c,	// (0x0003e5fc) bg_popup_call2_act_pane_g1

0x28c8,	// (0x00040628) popup_cale_lunar_info_window_t1

0x28d6,	// (0x00040636) popup_cale_lunar_info_window_t2

0x28e4,	// (0x00040644) popup_cale_lunar_info_window_t3

0x0649,	// (0x0003e3a9) bg_popup_call2_bubble_pane

0x2372,	// (0x000400d2) bg_popup_call2_in_pane_cp01_ParamLimits

0x2372,	// (0x000400d2) bg_popup_call2_in_pane_cp01

0x0325,	// (0x0003e085) call_type_pane_cp02

0x6887,	// (0x000445e7) popup_call2_audio_out_window_g1_ParamLimits

0x6887,	// (0x000445e7) popup_call2_audio_out_window_g1

0x23ba,	// (0x0004011a) popup_call2_audio_out_window_g2_ParamLimits

0x23ba,	// (0x0004011a) popup_call2_audio_out_window_g2

0x68b3,	// (0x00044613) popup_call2_audio_out_window_g3_ParamLimits

0x68b3,	// (0x00044613) popup_call2_audio_out_window_g3

0x0003,

0xf4b5,	// (0x0004d215) popup_call2_audio_out_window_g_ParamLimits

0xf4b5,	// (0x0004d215) popup_call2_audio_out_window_g

0x23f1,	// (0x00040151) popup_call2_audio_out_window_t1_ParamLimits

0x23f1,	// (0x00040151) popup_call2_audio_out_window_t1

0x2450,	// (0x000401b0) popup_call2_audio_out_window_t2_ParamLimits

0x2450,	// (0x000401b0) popup_call2_audio_out_window_t2

0x24a4,	// (0x00040204) popup_call2_audio_out_window_t3_ParamLimits

0x24a4,	// (0x00040204) popup_call2_audio_out_window_t3

0x24ba,	// (0x0004021a) popup_call2_audio_out_window_t4_ParamLimits

0x24ba,	// (0x0004021a) popup_call2_audio_out_window_t4

0x24d0,	// (0x00040230) popup_call2_audio_out_window_t5_ParamLimits

0x24d0,	// (0x00040230) popup_call2_audio_out_window_t5

0x0005,

0xf4be,	// (0x0004d21e) popup_call2_audio_out_window_t_ParamLimits

0xf4be,	// (0x0004d21e) popup_call2_audio_out_window_t

0x2534,	// (0x00040294) bg_popup_call2_in_pane_ParamLimits

0x2534,	// (0x00040294) bg_popup_call2_in_pane

0x2590,	// (0x000402f0) popup_call2_audio_in_window_g1_ParamLimits

0x2590,	// (0x000402f0) popup_call2_audio_in_window_g1

0x25c8,	// (0x00040328) popup_call2_audio_in_window_g2_ParamLimits

0x25c8,	// (0x00040328) popup_call2_audio_in_window_g2

0x2600,	// (0x00040360) popup_call2_audio_in_window_g3_ParamLimits

0x2600,	// (0x00040360) popup_call2_audio_in_window_g3

0x0003,

0xf4cb,	// (0x0004d22b) popup_call2_audio_in_window_g_ParamLimits

0xf4cb,	// (0x0004d22b) popup_call2_audio_in_window_g

0x2658,	// (0x000403b8) popup_call2_audio_in_window_t1_ParamLimits

0x2658,	// (0x000403b8) popup_call2_audio_in_window_t1

0x26d8,	// (0x00040438) popup_call2_audio_in_window_t2_ParamLimits

0x26d8,	// (0x00040438) popup_call2_audio_in_window_t2

0x2758,	// (0x000404b8) popup_call2_audio_in_window_t3_ParamLimits

0x2758,	// (0x000404b8) popup_call2_audio_in_window_t3

0x2772,	// (0x000404d2) popup_call2_audio_in_window_t4_ParamLimits

0x2772,	// (0x000404d2) popup_call2_audio_in_window_t4

0x2784,	// (0x000404e4) popup_call2_audio_in_window_t5_ParamLimits

0x2784,	// (0x000404e4) popup_call2_audio_in_window_t5

0x2796,	// (0x000404f6) popup_call2_audio_in_window_t6_ParamLimits

0x2796,	// (0x000404f6) popup_call2_audio_in_window_t6

0x0005,

0xf4d4,	// (0x0004d234) popup_call2_audio_in_window_t_ParamLimits

0xf4d4,	// (0x0004d234) popup_call2_audio_in_window_t

0x089c,	// (0x0003e5fc) bg_popup_call2_in_pane_g1

0x28f2,	// (0x00040652) popup_cale_lunar_info_window_t4

0x0003,

0xf54f,	// (0x0004d2af) popup_cale_lunar_info_window_t

0x08a4,	// (0x0003e604) bg_popup_call2_rect_pane_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_call2_rect_pane

0x0649,	// (0x0003e3a9) call2_cli_visual_graphic_pane

0x0649,	// (0x0003e3a9) call2_cli_visual_text_pane

0xcf72,	// (0x0004acd2) smil_status_volume_pane_g3

0x0002,

0x08bc,	// (0x0003e61c) call2_cli_visual_graphic_pane_g1

0x08bc,	// (0x0003e61c) call2_cli_visual_graphic_pane_g2

0x08bc,	// (0x0003e61c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e1,	// (0x0004d241) call2_cli_visual_graphic_pane_g

0x27a8,	// (0x00040508) bg_popup_call2_rect_pane_g1

0x0a68,	// (0x0003e7c8) bg_popup_call2_rect_pane_g2

0x27b0,	// (0x00040510) bg_popup_call2_rect_pane_g3

0x27b8,	// (0x00040518) bg_popup_call2_rect_pane_g4

0x27c0,	// (0x00040520) bg_popup_call2_rect_pane_g5

0x27c8,	// (0x00040528) bg_popup_call2_rect_pane_g6

0x27d0,	// (0x00040530) bg_popup_call2_rect_pane_g7

0x27d8,	// (0x00040538) bg_popup_call2_rect_pane_g8

0x27e0,	// (0x00040540) bg_popup_call2_rect_pane_g9

0x0008,

0xf4e8,	// (0x0004d248) bg_popup_call2_rect_pane_g

0x27e8,	// (0x00040548) bg_popup_call2_bubble_pane_g1

0x27f0,	// (0x00040550) bg_popup_call2_bubble_pane_g2

0x27f8,	// (0x00040558) bg_popup_call2_bubble_pane_g3

0x2800,	// (0x00040560) bg_popup_call2_bubble_pane_g4

0x2808,	// (0x00040568) bg_popup_call2_bubble_pane_g5

0x2810,	// (0x00040570) bg_popup_call2_bubble_pane_g6

0x2818,	// (0x00040578) bg_popup_call2_bubble_pane_g7

0x2820,	// (0x00040580) bg_popup_call2_bubble_pane_g8

0x2828,	// (0x00040588) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4fb,	// (0x0004d25b) bg_popup_call2_bubble_pane_g

0x474a,	// (0x000424aa) aid_cale_week_size_cell_pane

0x4cfa,	// (0x00042a5a) aid_cams_cif_uncrop_pane_ParamLimits

0x4cfa,	// (0x00042a5a) aid_cams_cif_uncrop_pane

0x4e50,	// (0x00042bb0) aid_cams_size_cell_ParamLimits

0x4e50,	// (0x00042bb0) aid_cams_size_cell

0x4e64,	// (0x00042bc4) grid_cams_pane_ParamLimits

0x4e7e,	// (0x00042bde) linegrid_cams_pane_ParamLimits

0x4f64,	// (0x00042cc4) call_video_pane_t1

0x4f82,	// (0x00042ce2) call_video_pane_t2

0x0001,

0xf208,	// (0x0004cf68) call_video_pane_t

0x5396,	// (0x000430f6) aid_cale_month_size_cell_pane_ParamLimits

0x5396,	// (0x000430f6) aid_cale_month_size_cell_pane

0xf593,	// (0x0004d2f3) smil_status_volume_pane_g

0xcf7f,	// (0x0004acdf) volume_smil_pane_ParamLimits

0xcca6,	// (0x0004aa06) aid_popup2_width_pane

0x46af,	// (0x0004240f) cell_qdial_pane_g4_ParamLimits

0x46af,	// (0x0004240f) cell_qdial_pane_g4

0x5f56,	// (0x00043cb6) aid_blid_cardinal_pane_ParamLimits

0x5f62,	// (0x00043cc2) aid_blid_destination_pane_ParamLimits

0x5f62,	// (0x00043cc2) aid_blid_destination_pane

0x08a4,	// (0x0003e604) bg_popup_call_poc_act_pane_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_call_poc_act_pane

0x08a4,	// (0x0003e604) bg_popup_call_poc_inact_pane_ParamLimits

0x08a4,	// (0x0003e604) bg_popup_call_poc_inact_pane

0x2830,	// (0x00040590) bg_popup_call_poc_act_pane_g1

0x2838,	// (0x00040598) bg_popup_call_poc_act_pane_g2

0x2840,	// (0x000405a0) bg_popup_call_poc_act_pane_g3

0x2800,	// (0x00040560) bg_popup_call_poc_act_pane_g4

0x2808,	// (0x00040568) bg_popup_call_poc_act_pane_g5

0x2848,	// (0x000405a8) bg_popup_call_poc_act_pane_g6

0x2818,	// (0x00040578) bg_popup_call_poc_act_pane_g7

0x2850,	// (0x000405b0) bg_popup_call_poc_act_pane_g8

0x0649,	// (0x0003e3a9) main_usb_pane

0xcf26,	// (0x0004ac86) popup_cale_lunar_info_window

0x524e,	// (0x00042fae) im_reading_pane_t1_ParamLimits

0x0c46,	// (0x0003e9a6) list_im_pane_ParamLimits

0x0c57,	// (0x0003e9b7) scroll_pane_cp07_ParamLimits

0x0649,	// (0x0003e3a9) grid_highlight_pane_cp012

0x08a4,	// (0x0003e604) mup_scale_pane_ParamLimits

0x1714,	// (0x0003f474) main_usb_pane_g1_ParamLimits

0x1714,	// (0x0003f474) main_usb_pane_g1

0x6902,	// (0x00044662) main_usb_pane_g2_ParamLimits

0x6902,	// (0x00044662) main_usb_pane_g2

0x0001,

0xf538,	// (0x0004d298) main_usb_pane_g_ParamLimits

0xf538,	// (0x0004d298) main_usb_pane_g

0x6918,	// (0x00044678) main_usb_pane_t1_ParamLimits

0x6918,	// (0x00044678) main_usb_pane_t1

0x692a,	// (0x0004468a) main_usb_pane_t2_ParamLimits

0x692a,	// (0x0004468a) main_usb_pane_t2

0x693c,	// (0x0004469c) main_usb_pane_t3_ParamLimits

0x693c,	// (0x0004469c) main_usb_pane_t3

0x694e,	// (0x000446ae) main_usb_pane_t4_ParamLimits

0x694e,	// (0x000446ae) main_usb_pane_t4

0x6960,	// (0x000446c0) main_usb_pane_t5_ParamLimits

0x6960,	// (0x000446c0) main_usb_pane_t5

0x6972,	// (0x000446d2) main_usb_pane_t6_ParamLimits

0x6972,	// (0x000446d2) main_usb_pane_t6

0x0005,

0xf53d,	// (0x0004d29d) main_usb_pane_t_ParamLimits

0x5f05,	// (0x00043c65) aid_text_placing

0x5f0e,	// (0x00043c6e) main_location2_pane_t1_ParamLimits

0x5f20,	// (0x00043c80) main_location2_pane_t2_ParamLimits

0x5f32,	// (0x00043c92) main_location2_pane_t3_ParamLimits

0x5f44,	// (0x00043ca4) main_location2_pane_t4_ParamLimits

0x5f44,	// (0x00043ca4) main_location2_pane_t4

0xf344,	// (0x0004d0a4) main_location2_pane_t_ParamLimits

0x08e0,	// (0x0003e640) find_pinb_pane_g2_ParamLimits

0x08e0,	// (0x0003e640) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0004ce20) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0004ce20) find_pinb_pane_g

0x08ec,	// (0x0003e64c) find_pinb_pane_t1_ParamLimits

0x08fe,	// (0x0003e65e) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0004ce25) find_pinb_pane_t_ParamLimits

0x0649,	// (0x0003e3a9) main_call3_pane

0x587d,	// (0x000435dd) cale_month_day_heading_pane_t1_ParamLimits

0x58bf,	// (0x0004361f) cale_month_day_heading_pane_t2_ParamLimits

0x58f4,	// (0x00043654) cale_month_day_heading_pane_t3_ParamLimits

0x5929,	// (0x00043689) cale_month_day_heading_pane_t4_ParamLimits

0x5966,	// (0x000436c6) cale_month_day_heading_pane_t5_ParamLimits

0x59ab,	// (0x0004370b) cale_month_day_heading_pane_t6_ParamLimits

0x59f0,	// (0x00043750) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0004cfa0) cale_month_day_heading_pane_t_ParamLimits

0x0ea1,	// (0x0003ec01) smil_status_volume_pane

0x6393,	// (0x000440f3) postcard_address_pane_ParamLimits

0x6393,	// (0x000440f3) postcard_address_pane

0x63a5,	// (0x00044105) postcard_message_pane_ParamLimits

0x63a5,	// (0x00044105) postcard_message_pane

0x68df,	// (0x0004463f) call2_cli_visual_pane_t1_ParamLimits

0x68df,	// (0x0004463f) call2_cli_visual_pane_t1

0x2a07,	// (0x00040767) postcard_message_pane_t1_ParamLimits

0x2a07,	// (0x00040767) postcard_message_pane_t1

0x29ef,	// (0x0004074f) postcard_address_pane_t1_ParamLimits

0x29ef,	// (0x0004074f) postcard_address_pane_t1

0x7057,	// (0x00044db7) popup_call3_audio_in_window_ParamLimits

0x7057,	// (0x00044db7) popup_call3_audio_in_window

0x6ee2,	// (0x00044c42) bg_popup_call3_in_pane_ParamLimits

0x6ee2,	// (0x00044c42) bg_popup_call3_in_pane

0x6f58,	// (0x00044cb8) popup_call3_audio_in_window_g1_ParamLimits

0x6f58,	// (0x00044cb8) popup_call3_audio_in_window_g1

0x6f78,	// (0x00044cd8) popup_call3_audio_in_window_g2_ParamLimits

0x6f78,	// (0x00044cd8) popup_call3_audio_in_window_g2

0x6f98,	// (0x00044cf8) popup_call3_audio_in_window_g3_ParamLimits

0x6f98,	// (0x00044cf8) popup_call3_audio_in_window_g3

0x0003,

0xf59a,	// (0x0004d2fa) popup_call3_audio_in_window_g_ParamLimits

0xf59a,	// (0x0004d2fa) popup_call3_audio_in_window_g

0x6fc9,	// (0x00044d29) popup_call3_audio_in_window_t1_ParamLimits

0x6fc9,	// (0x00044d29) popup_call3_audio_in_window_t1

0x7007,	// (0x00044d67) popup_call3_audio_in_window_t2_ParamLimits

0x7007,	// (0x00044d67) popup_call3_audio_in_window_t2

0x7045,	// (0x00044da5) popup_call3_audio_in_window_t3_ParamLimits

0x7045,	// (0x00044da5) popup_call3_audio_in_window_t3

0x0002,

0xf5a3,	// (0x0004d303) popup_call3_audio_in_window_t_ParamLimits

0xf5a3,	// (0x0004d303) popup_call3_audio_in_window_t

0x0b43,	// (0x0003e8a3) bg_popup_call3_rect_pane

0x27a8,	// (0x00040508) bg_popup_call3_rect_pane_g1

0x0a68,	// (0x0003e7c8) bg_popup_call3_rect_pane_g2

0x27b0,	// (0x00040510) bg_popup_call3_rect_pane_g3

0x27b8,	// (0x00040518) bg_popup_call3_rect_pane_g4

0x27c0,	// (0x00040520) bg_popup_call3_rect_pane_g5

0x27c8,	// (0x00040528) bg_popup_call3_rect_pane_g6

0x27d0,	// (0x00040530) bg_popup_call3_rect_pane_g7

0x021e,	// (0x0003df7e) mup_visualizer_osc_pane

0x021e,	// (0x0003df7e) mup_visualizer_spec_pane

0x6f12,	// (0x00044c72) call3_video_qcif_pane_ParamLimits

0x6f12,	// (0x00044c72) call3_video_qcif_pane

0x6f25,	// (0x00044c85) call3_video_qcif_uncrop_pane_ParamLimits

0x6f25,	// (0x00044c85) call3_video_qcif_uncrop_pane

0x6f33,	// (0x00044c93) call3_video_subqcif_pane_ParamLimits

0x6f33,	// (0x00044c93) call3_video_subqcif_pane

0x6f47,	// (0x00044ca7) call3_video_subqcif_uncrop_pane_ParamLimits

0x6f47,	// (0x00044ca7) call3_video_subqcif_uncrop_pane

0x6fb8,	// (0x00044d18) popup_call3_audio_in_window_g4_ParamLimits

0x6fb8,	// (0x00044d18) popup_call3_audio_in_window_g4

0x021e,	// (0x0003df7e) mup_spec_half_pane

0x021e,	// (0x0003df7e) mup_spec_half_pane_cp

0x021e,	// (0x0003df7e) mup_osc_middle_pane

0x0b79,	// (0x0003e8d9) mup_visualizer_osc_pane_g1

0x29a2,	// (0x00040702) mup_spec_bar_pane_ParamLimits

0x29a2,	// (0x00040702) mup_spec_bar_pane

0x0b79,	// (0x0003e8d9) mup_spec_bar_pane_g1

0x0b79,	// (0x0003e8d9) mup_spec_bar_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) mup_spec_bar_pane_g

0x474a,	// (0x000424aa) aid_cale_week_size_cell_pane_ParamLimits

0x4764,	// (0x000424c4) bg_cale_heading_pane_ParamLimits

0x0aa5,	// (0x0003e805) bg_cale_pane_cp01_ParamLimits

0x477c,	// (0x000424dc) cale_week_corner_pane_ParamLimits

0x479b,	// (0x000424fb) cale_week_day_heading_pane_ParamLimits

0x47b8,	// (0x00042518) cale_week_scroll_pane_g1_ParamLimits

0x47cb,	// (0x0004252b) cale_week_scroll_pane_g2_ParamLimits

0x47e3,	// (0x00042543) cale_week_scroll_pane_g3_ParamLimits

0x47fb,	// (0x0004255b) cale_week_scroll_pane_g4_ParamLimits

0x4813,	// (0x00042573) cale_week_scroll_pane_g5_ParamLimits

0x4833,	// (0x00042593) cale_week_scroll_pane_g6_ParamLimits

0x4853,	// (0x000425b3) cale_week_scroll_pane_g7_ParamLimits

0x4873,	// (0x000425d3) cale_week_scroll_pane_g8_ParamLimits

0x4897,	// (0x000425f7) cale_week_scroll_pane_g9_ParamLimits

0x48af,	// (0x0004260f) cale_week_scroll_pane_g10_ParamLimits

0x48c7,	// (0x00042627) cale_week_scroll_pane_g11_ParamLimits

0x48df,	// (0x0004263f) cale_week_scroll_pane_g12_ParamLimits

0x48f7,	// (0x00042657) cale_week_scroll_pane_g13_ParamLimits

0x48f7,	// (0x00042657) cale_week_scroll_pane_g14_ParamLimits

0x48f7,	// (0x00042657) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0004ceb1) cale_week_scroll_pane_g_ParamLimits

0x4933,	// (0x00042693) cale_week_time_pane_ParamLimits

0x4957,	// (0x000426b7) grid_cale_week_pane_ParamLimits

0x0ac2,	// (0x0003e822) listscroll_cale_week_pane_t1

0x0ad4,	// (0x0003e834) scroll_pane_cp08_ParamLimits

0x53f6,	// (0x00043156) cale_month_corner_pane_ParamLimits

0x0e77,	// (0x0003ebd7) cale_month_pane_t1

0x5810,	// (0x00043570) cale_month_week_pane_ParamLimits

0x5d5c,	// (0x00043abc) popup_call_status_window_g1_ParamLimits

0x5d70,	// (0x00043ad0) popup_call_status_window_g2_ParamLimits

0x5d84,	// (0x00043ae4) popup_call_status_window_g3_ParamLimits

0xf2cb,	// (0x0004d02b) popup_call_status_window_g_ParamLimits

0x1239,	// (0x0003ef99) aid_call2_pane

0x3989,	// (0x000416e9) msg_header_pane_g1

0x6393,	// (0x000440f3) postcard_address2_pane_ParamLimits

0x6393,	// (0x000440f3) postcard_address2_pane

0x63a5,	// (0x00044105) postcard_message2_pane_ParamLimits

0x63a5,	// (0x00044105) postcard_message2_pane

0x6eb2,	// (0x00044c12) message2_row_pane_ParamLimits

0x6eb2,	// (0x00044c12) message2_row_pane

0x6ecf,	// (0x00044c2f) address2_row_pane_ParamLimits

0x6ecf,	// (0x00044c2f) address2_row_pane

0x296f,	// (0x000406cf) postcard_message2_row_pane_g1

0x2977,	// (0x000406d7) postcard_message2_row_pane_t1

0x296f,	// (0x000406cf) address2_row_pane_g1

0x2977,	// (0x000406d7) address2_row_pane_t1

0x4c91,	// (0x000429f1) aid_size_cell_vorec

0x0649,	// (0x0003e3a9) main_rss_pane

0x2985,	// (0x000406e5) rss_list_single_pane_ParamLimits

0x2985,	// (0x000406e5) rss_list_single_pane

0x2993,	// (0x000406f3) rss_list_single_pane_t1

0x2993,	// (0x000406f3) rss_list_single_pane_t2

0x0001,

0xf58e,	// (0x0004d2ee) rss_list_single_pane_t

0x0649,	// (0x0003e3a9) main_camera2_pane

0x0649,	// (0x0003e3a9) main_video2_pane

0xcf94,	// (0x0004acf4) cams_zoom_pane_cp2_ParamLimits

0xcf94,	// (0x0004acf4) cams_zoom_pane_cp2

0xcf94,	// (0x0004acf4) image2_vga_pane_ParamLimits

0xcf94,	// (0x0004acf4) image2_vga_pane

0xcfa2,	// (0x0004ad02) main_camera2_pane_g1_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g1

0xcfa2,	// (0x0004ad02) main_camera2_pane_g2_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g2

0xcfa2,	// (0x0004ad02) main_camera2_pane_g3_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g3

0xcfa2,	// (0x0004ad02) main_camera2_pane_g4_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g4

0xcfa2,	// (0x0004ad02) main_camera2_pane_g5_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g5

0xcfa2,	// (0x0004ad02) main_camera2_pane_g6_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g6

0xcfa2,	// (0x0004ad02) main_camera2_pane_g7_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g7

0xcfa2,	// (0x0004ad02) main_camera2_pane_g8_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g8

0x0008,

0xf5aa,	// (0x0004d30a) main_camera2_pane_g_ParamLimits

0xf5aa,	// (0x0004d30a) main_camera2_pane_g

0x7079,	// (0x00044dd9) main_camera2_pane_t1_ParamLimits

0x7079,	// (0x00044dd9) main_camera2_pane_t1

0x7079,	// (0x00044dd9) main_camera2_pane_t2_ParamLimits

0x7079,	// (0x00044dd9) main_camera2_pane_t2

0x7079,	// (0x00044dd9) main_camera2_pane_t3_ParamLimits

0x7079,	// (0x00044dd9) main_camera2_pane_t3

0x7079,	// (0x00044dd9) main_camera2_pane_t4_ParamLimits

0x7079,	// (0x00044dd9) main_camera2_pane_t4

0x0006,

0xf5bd,	// (0x0004d31d) main_camera2_pane_t_ParamLimits

0xf5bd,	// (0x0004d31d) main_camera2_pane_t

0xcfc4,	// (0x0004ad24) cams_zoom_pane_cp4_ParamLimits

0xcfc4,	// (0x0004ad24) cams_zoom_pane_cp4

0x708d,	// (0x00044ded) image2_cif_pane_ParamLimits

0x708d,	// (0x00044ded) image2_cif_pane

0x08c6,	// (0x0003e626) image2_subqcif_pane_ParamLimits

0x08c6,	// (0x0003e626) image2_subqcif_pane

0x709b,	// (0x00044dfb) main_video2_pane_g1_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g1

0x709b,	// (0x00044dfb) main_video2_pane_g2_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g2

0x709b,	// (0x00044dfb) main_video2_pane_g3_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g3

0x709b,	// (0x00044dfb) main_video2_pane_g4_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g4

0x709b,	// (0x00044dfb) main_video2_pane_g5_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g5

0x709b,	// (0x00044dfb) main_video2_pane_g6_ParamLimits

0x709b,	// (0x00044dfb) main_video2_pane_g6

0x0005,

0xf5cc,	// (0x0004d32c) main_video2_pane_g_ParamLimits

0xf5cc,	// (0x0004d32c) main_video2_pane_g

0x70a9,	// (0x00044e09) main_video2_pane_t1_ParamLimits

0x70a9,	// (0x00044e09) main_video2_pane_t1

0x70a9,	// (0x00044e09) main_video2_pane_t2_ParamLimits

0x70a9,	// (0x00044e09) main_video2_pane_t2

0x70a9,	// (0x00044e09) main_video2_pane_t3_ParamLimits

0x70a9,	// (0x00044e09) main_video2_pane_t3

0x0002,

0xf5d9,	// (0x0004d339) main_video2_pane_t_ParamLimits

0xf5d9,	// (0x0004d339) main_video2_pane_t

0x6a06,	// (0x00044766) call_muted_g2

0x0001,

0xf580,	// (0x0004d2e0) call_muted_g

0x0649,	// (0x0003e3a9) main_mup2_pane

0x21f6,	// (0x0003ff56) main_mup2_pane_g1_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g1

0x21f6,	// (0x0003ff56) main_mup2_pane_g2_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g2

0x0b79,	// (0x0003e8d9) main_mup_pane_g13_cp1

0x021e,	// (0x0003df7e) mup_volume_pane_cp1

0x21f6,	// (0x0003ff56) main_mup2_pane_g4_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g4

0x21f6,	// (0x0003ff56) main_mup2_pane_g5_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g5

0x21f6,	// (0x0003ff56) main_mup2_pane_g6_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g6

0x21f6,	// (0x0003ff56) main_mup2_pane_g7_ParamLimits

0x21f6,	// (0x0003ff56) main_mup2_pane_g7

0x0006,

0xf5e0,	// (0x0004d340) main_mup2_pane_g_ParamLimits

0xf5e0,	// (0x0004d340) main_mup2_pane_g

0x2204,	// (0x0003ff64) main_mup2_pane_t1_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t1

0x2204,	// (0x0003ff64) main_mup2_pane_t2_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t2

0x2204,	// (0x0003ff64) main_mup2_pane_t3_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t3

0x2204,	// (0x0003ff64) main_mup2_pane_t4_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t4

0x2204,	// (0x0003ff64) main_mup2_pane_t5_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t5

0x2204,	// (0x0003ff64) main_mup2_pane_t6_ParamLimits

0x2204,	// (0x0003ff64) main_mup2_pane_t6

0x0005,

0xf5ef,	// (0x0004d34f) main_mup2_pane_t_ParamLimits

0xf5ef,	// (0x0004d34f) main_mup2_pane_t

0x21e8,	// (0x0003ff48) mup2_visualizer_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup2_visualizer_pane

0x21e8,	// (0x0003ff48) mup_progress_pane_cp_ParamLimits

0x21e8,	// (0x0003ff48) mup_progress_pane_cp

0x2a23,	// (0x00040783) mup_volume_pane_cp_ParamLimits

0x2a23,	// (0x00040783) mup_volume_pane_cp

0x091f,	// (0x0003e67f) mup2_visualizer_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) mup2_visualizer_pane_g1

0x092d,	// (0x0003e68d) mup2_visualizer_pane_g2_ParamLimits

0x092d,	// (0x0003e68d) mup2_visualizer_pane_g2

0x092d,	// (0x0003e68d) mup2_visualizer_pane_g3_ParamLimits

0x092d,	// (0x0003e68d) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0004ce2a) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0004ce2a) mup2_visualizer_pane_g

0x184f,	// (0x0003f5af) aid_size_cell_fmradio

0x6bb8,	// (0x00044918) aid_height_parent_landcape

0x0cd5,	// (0x0003ea35) wml_content_pane_cp

0x0cdd,	// (0x0003ea3d) wml_tabs_pane

0x0ce6,	// (0x0003ea46) popup_wml_miniature_window

0x0cee,	// (0x0003ea4e) scroll_pane_cp021

0x0d02,	// (0x0003ea62) wml_content_pane_comp8

0x0649,	// (0x0003e3a9) bg_popup_sub_pane_cp05

0x2a39,	// (0x00040799) popup_wml_miniature_window_g1

0x2a41,	// (0x000407a1) wml_miniature_view_pane

0x70bd,	// (0x00044e1d) aid_size_wml_view

0x70c5,	// (0x00044e25) wml_miniature_view_pane_g1

0x70ce,	// (0x00044e2e) wml_miniature_view_pane_g2

0x70d7,	// (0x00044e37) wml_miniature_view_pane_g3

0x70df,	// (0x00044e3f) wml_miniature_view_pane_g4

0x70e7,	// (0x00044e47) wml_miniature_view_pane_g5

0x70ef,	// (0x00044e4f) wml_miniature_view_pane_g6

0x70f7,	// (0x00044e57) wml_miniature_view_pane_g7

0x70ff,	// (0x00044e5f) wml_miniature_view_pane_g8

0x0007,

0xf5fc,	// (0x0004d35c) wml_miniature_view_pane_g

0x2a49,	// (0x000407a9) background_graphic_ParamLimits

0x2a49,	// (0x000407a9) background_graphic

0x2a55,	// (0x000407b5) wml_tabs_2_pane

0x2a5e,	// (0x000407be) wml_tabs_3_pane_ParamLimits

0x2a5e,	// (0x000407be) wml_tabs_3_pane

0x2a70,	// (0x000407d0) wml_tabs_4_pane_ParamLimits

0x2a70,	// (0x000407d0) wml_tabs_4_pane

0x2a86,	// (0x000407e6) wml_tabs_5_pane_ParamLimits

0x2a86,	// (0x000407e6) wml_tabs_5_pane

0x2aa0,	// (0x00040800) wml_tabs_pane_g2_ParamLimits

0x2aa0,	// (0x00040800) wml_tabs_pane_g2

0x2ab5,	// (0x00040815) wml_tabs_pane_g3_ParamLimits

0x2ab5,	// (0x00040815) wml_tabs_pane_g3

0x2aca,	// (0x0004082a) wml_tabs_2_active_pane_ParamLimits

0x2aca,	// (0x0004082a) wml_tabs_2_active_pane

0x2aca,	// (0x0004082a) wml_tabs_2_passive_pane_ParamLimits

0x2aca,	// (0x0004082a) wml_tabs_2_passive_pane

0x7107,	// (0x00044e67) wml_tabs_3_active_pane_cp_ParamLimits

0x7107,	// (0x00044e67) wml_tabs_3_active_pane_cp

0x711c,	// (0x00044e7c) wml_tabs_3_passive_pane_ParamLimits

0x711c,	// (0x00044e7c) wml_tabs_3_passive_pane

0x712f,	// (0x00044e8f) wml_tabs_3_passive_pane_cp_ParamLimits

0x712f,	// (0x00044e8f) wml_tabs_3_passive_pane_cp

0x7146,	// (0x00044ea6) tabs_4_active_pane

0x714e,	// (0x00044eae) tabs_4_passive_pane

0x7158,	// (0x00044eb8) tabs_4_passive_pane_cp

0x7160,	// (0x00044ec0) tabs_4_passive_pane_cp2

0x68fa,	// (0x0004465a) aid_height_text

0x21e8,	// (0x0003ff48) mup_volume_cont_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup_volume_cont_pane

0x021e,	// (0x0003df7e) aid_size_cell_pinb

0x021e,	// (0x0003df7e) aid_size_list_pinb

0x21e8,	// (0x0003ff48) mup2_volume_cont_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup2_volume_cont_pane

0xcfd2,	// (0x0004ad32) mup2_volume_cont_pane_g1_ParamLimits

0xcfd2,	// (0x0004ad32) mup2_volume_cont_pane_g1

0x4131,	// (0x00041e91) aid_size_cell_touch_ParamLimits

0x4131,	// (0x00041e91) aid_size_cell_touch

0x435e,	// (0x000420be) touch_pane_ParamLimits

0x435e,	// (0x000420be) touch_pane

0x021e,	// (0x0003df7e) main_rss2_pane

0x7173,	// (0x00044ed3) listscroll_rss2_pane

0x717c,	// (0x00044edc) rss2_navigation_pane

0x7184,	// (0x00044ee4) list_rss2_pane

0x1352,	// (0x0003f0b2) scroll_pane_cp22

0x718c,	// (0x00044eec) rss2_navigation_pane_g1

0x7195,	// (0x00044ef5) rss2_navigation_pane_g2

0x719d,	// (0x00044efd) rss2_navigation_pane_g3

0x0002,

0xf60d,	// (0x0004d36d) rss2_navigation_pane_g

0x71a5,	// (0x00044f05) rss2_navigation_pane_t1

0x71b3,	// (0x00044f13) rss2_list_single_pane_ParamLimits

0x71b3,	// (0x00044f13) rss2_list_single_pane

0x71c9,	// (0x00044f29) rss2_list_single_pane_t2

0x71d7,	// (0x00044f37) rss2_list_single_pane_t3_ParamLimits

0x71d7,	// (0x00044f37) rss2_list_single_pane_t3

0x71f4,	// (0x00044f54) rss2_list_single_pane_t4

0x5c38,	// (0x00043998) smil_status_pane_g1

0x08c6,	// (0x0003e626) main_image2_pane_ParamLimits

0x08c6,	// (0x0003e626) main_image2_pane

0xcfa2,	// (0x0004ad02) main_camera2_pane_g9_ParamLimits

0xcfa2,	// (0x0004ad02) main_camera2_pane_g9

0x7079,	// (0x00044dd9) main_camera2_pane_t5_ParamLimits

0x7079,	// (0x00044dd9) main_camera2_pane_t5

0xcfb0,	// (0x0004ad10) main_camera2_pane_t6_ParamLimits

0xcfb0,	// (0x0004ad10) main_camera2_pane_t6

0x7202,	// (0x00044f62) main_image2_pane_g1_ParamLimits

0x7202,	// (0x00044f62) main_image2_pane_g1

0x65cd,	// (0x0004432d) smil2_video_pane_ParamLimits

0x65cd,	// (0x0004432d) smil2_video_pane

0xccc2,	// (0x0004aa22) aid_zoom_text_primary_cp

0xcd01,	// (0x0004aa61) popup_preview_fixed_window

0x0c3e,	// (0x0003e99e) im_reading_pane_g1

0x706b,	// (0x00044dcb) cams2_bc_adjust_pane_cp_ParamLimits

0x706b,	// (0x00044dcb) cams2_bc_adjust_pane_cp

0x21e8,	// (0x0003ff48) cams2_bc_adjust_pane_ParamLimits

0x21e8,	// (0x0003ff48) cams2_bc_adjust_pane

0x0b79,	// (0x0003e8d9) cams2_bc_adjust_pane_g1

0x021e,	// (0x0003df7e) cams2_slider_pane

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g1

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g2

0x0006,

0xf614,	// (0x0004d374) cams2_slider_pane_g

0x4427,	// (0x00042187) calc_display_pane_ParamLimits

0x444c,	// (0x000421ac) calc_paper_pane_ParamLimits

0x446f,	// (0x000421cf) grid_calc_pane_ParamLimits

0xce23,	// (0x0004ab83) popup_clock_digital_window_t1_ParamLimits

0x17ec,	// (0x0003f54c) main_image_pane_t1

0x4409,	// (0x00042169) aid_size_cell_calc_ParamLimits

0x4409,	// (0x00042169) aid_size_cell_calc

0x6bfe,	// (0x0004495e) popup_blid_sat_info2_window_ParamLimits

0x6bfe,	// (0x0004495e) popup_blid_sat_info2_window

0x7218,	// (0x00044f78) aid_size_cell_blid

0x708d,	// (0x00044ded) bg_popup_window_pane_cp07

0x7235,	// (0x00044f95) grid_popup_blid_pane

0x723f,	// (0x00044f9f) heading_pane_cp05_ParamLimits

0x723f,	// (0x00044f9f) heading_pane_cp05

0x7309,	// (0x00045069) cell_popup_blid_pane_ParamLimits

0x7309,	// (0x00045069) cell_popup_blid_pane

0x732d,	// (0x0004508d) cell_popup_blid_pane_g1

0x7335,	// (0x00045095) cell_popup_blid_pane_t1

0x21e8,	// (0x0003ff48) mup2_indicator_pane_ParamLimits

0x21e8,	// (0x0003ff48) mup2_indicator_pane

0x021e,	// (0x0003df7e) mup2_visualizer_osc_pane

0x2a23,	// (0x00040783) mup2_visualizer_spec_pane_ParamLimits

0x2a23,	// (0x00040783) mup2_visualizer_spec_pane

0x021e,	// (0x0003df7e) mup2_spec_half_pane

0x021e,	// (0x0003df7e) mup2_spec_half_pane_cp

0x7343,	// (0x000450a3) mup2_spec_bar_pane_ParamLimits

0x7343,	// (0x000450a3) mup2_spec_bar_pane

0x0b79,	// (0x0003e8d9) mup2_spec_bar_pane_g1

0x7362,	// (0x000450c2) mup2_spec_bar_pane_g2

0x0001,

0xf63a,	// (0x0004d39a) mup2_spec_bar_pane_g

0x021e,	// (0x0003df7e) mup2_osc_middle_pane

0x0b79,	// (0x0003e8d9) mup2_visualizer_osc_pane_g1

0x0256,	// (0x0003dfb6) popup_number_entry_window_t1_ParamLimits

0x0269,	// (0x0003dfc9) popup_number_entry_window_t2_ParamLimits

0x027b,	// (0x0003dfdb) popup_number_entry_window_t3_ParamLimits

0x43b0,	// (0x00042110) popup_number_entry_window_t5_ParamLimits

0x43b0,	// (0x00042110) popup_number_entry_window_t5

0xf06b,	// (0x0004cdcb) popup_number_entry_window_t_ParamLimits

0x028d,	// (0x0003dfed) text_title_cp2_ParamLimits

0xceec,	// (0x0004ac4c) aid_hotspot_pointer_text2_pane

0xcf12,	// (0x0004ac72) main_viewer_pane_g9_ParamLimits

0xcf12,	// (0x0004ac72) main_viewer_pane_g9

0x0e77,	// (0x0003ebd7) cale_month_pane_t1_ParamLimits

0x0eb4,	// (0x0003ec14) bg_cale_pane_ParamLimits

0x0ecc,	// (0x0003ec2c) list_cale_pane_ParamLimits

0x0edd,	// (0x0003ec3d) listscroll_cale_day_pane_t1

0x0eef,	// (0x0003ec4f) scroll_pane_cp09_ParamLimits

0x602d,	// (0x00043d8d) main_mup_eq_pane_t1_ParamLimits

0x602d,	// (0x00043d8d) main_mup_eq_pane_t1

0x6047,	// (0x00043da7) main_mup_eq_pane_t2_ParamLimits

0x6047,	// (0x00043da7) main_mup_eq_pane_t2

0x6061,	// (0x00043dc1) main_mup_eq_pane_t3_ParamLimits

0x6061,	// (0x00043dc1) main_mup_eq_pane_t3

0x607d,	// (0x00043ddd) main_mup_eq_pane_t4_ParamLimits

0x607d,	// (0x00043ddd) main_mup_eq_pane_t4

0x6099,	// (0x00043df9) main_mup_eq_pane_t5_ParamLimits

0x6099,	// (0x00043df9) main_mup_eq_pane_t5

0x60b5,	// (0x00043e15) main_mup_eq_pane_t6_ParamLimits

0x60b5,	// (0x00043e15) main_mup_eq_pane_t6

0x60c9,	// (0x00043e29) main_mup_eq_pane_t7_ParamLimits

0x60c9,	// (0x00043e29) main_mup_eq_pane_t7

0x60dd,	// (0x00043e3d) main_mup_eq_pane_t8_ParamLimits

0x60dd,	// (0x00043e3d) main_mup_eq_pane_t8

0x60f1,	// (0x00043e51) main_mup_eq_pane_t9_ParamLimits

0x60f1,	// (0x00043e51) main_mup_eq_pane_t9

0x610b,	// (0x00043e6b) main_mup_eq_pane_t10_ParamLimits

0x610b,	// (0x00043e6b) main_mup_eq_pane_t10

0x0009,

0xf3ca,	// (0x0004d12a) main_mup_eq_pane_t_ParamLimits

0xf3ca,	// (0x0004d12a) main_mup_eq_pane_t

0x61ba,	// (0x00043f1a) mup_equalizer_pane_cp5_ParamLimits

0x61ce,	// (0x00043f2e) mup_equalizer_pane_cp6_ParamLimits

0x61e2,	// (0x00043f42) mup_equalizer_pane_cp7_ParamLimits

0x021e,	// (0x0003df7e) main_gallery_pane

0x29c1,	// (0x00040721) smil2_volume_pane

0x29c9,	// (0x00040729) smil_status_volume_pane_g1_ParamLimits

0x29dc,	// (0x0004073c) smil_status_volume_pane_g2_ParamLimits

0xcf72,	// (0x0004acd2) smil_status_volume_pane_g3_ParamLimits

0xf593,	// (0x0004d2f3) smil_status_volume_pane_g_ParamLimits

0x708d,	// (0x00044ded) bg_popup_window_pane_cp07_ParamLimits

0x7220,	// (0x00044f80) blid_firmament_pane

0x08c6,	// (0x0003e626) aid_size_cell_gallery_ParamLimits

0x08c6,	// (0x0003e626) aid_size_cell_gallery

0x08c6,	// (0x0003e626) grid_gallery_pane_ParamLimits

0x08c6,	// (0x0003e626) grid_gallery_pane

0x708d,	// (0x00044ded) cell_gallery_pane_ParamLimits

0x708d,	// (0x00044ded) cell_gallery_pane

0x08c6,	// (0x0003e626) bg_cell_gallery_focus_pane_ParamLimits

0x08c6,	// (0x0003e626) bg_cell_gallery_focus_pane

0x091f,	// (0x0003e67f) cell_gallery_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) cell_gallery_pane_g1

0x091f,	// (0x0003e67f) cell_gallery_pane_g2_ParamLimits

0x091f,	// (0x0003e67f) cell_gallery_pane_g2

0x091f,	// (0x0003e67f) cell_gallery_pane_g3_ParamLimits

0x091f,	// (0x0003e67f) cell_gallery_pane_g3

0x092d,	// (0x0003e68d) cell_gallery_pane_g4_ParamLimits

0x092d,	// (0x0003e68d) cell_gallery_pane_g4

0x0003,

0xf63f,	// (0x0004d39f) cell_gallery_pane_g_ParamLimits

0xf63f,	// (0x0004d39f) cell_gallery_pane_g

0x736c,	// (0x000450cc) bg_cell_gallery_focus_pane_g1

0x7374,	// (0x000450d4) bg_cell_gallery_focus_pane_g2

0x737c,	// (0x000450dc) bg_cell_gallery_focus_pane_g3

0x7384,	// (0x000450e4) bg_cell_gallery_focus_pane_g4

0x738c,	// (0x000450ec) bg_cell_gallery_focus_pane_g5

0x7394,	// (0x000450f4) bg_cell_gallery_focus_pane_g6

0x739c,	// (0x000450fc) bg_cell_gallery_focus_pane_g7

0x73a4,	// (0x00045104) bg_cell_gallery_focus_pane_g8

0x0007,

0xf648,	// (0x0004d3a8) bg_cell_gallery_focus_pane_g

0x73ac,	// (0x0004510c) aid_firma_cardinal

0x73c0,	// (0x00045120) blid_firmament_pane_t1

0x73d7,	// (0x00045137) blid_firmament_pane_t2

0x73ee,	// (0x0004514e) blid_firmament_pane_t3

0x7405,	// (0x00045165) blid_firmament_pane_t4

0x0003,

0xf659,	// (0x0004d3b9) blid_firmament_pane_t

0x741c,	// (0x0004517c) blid_sat_info_pane

0x0b79,	// (0x0003e8d9) blid_sat_info_pane_g1

0x0b79,	// (0x0003e8d9) blid_sat_info_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) blid_sat_info_pane_g

0x742c,	// (0x0004518c) blid_sat_info_pane_t1

0x743a,	// (0x0004519a) smil2_volume_content_pane

0x7443,	// (0x000451a3) smil2_volume_pane_g1

0x2218,	// (0x0003ff78) smil2_volume_content_pane_g1

0x744b,	// (0x000451ab) smil2_volume_content_pane_g2

0x7454,	// (0x000451b4) smil2_volume_content_pane_g3

0x745d,	// (0x000451bd) smil2_volume_content_pane_g4

0x7466,	// (0x000451c6) smil2_volume_content_pane_g5

0x746f,	// (0x000451cf) smil2_volume_content_pane_g6

0x7478,	// (0x000451d8) smil2_volume_content_pane_g7

0x7481,	// (0x000451e1) smil2_volume_content_pane_g8

0x748a,	// (0x000451ea) smil2_volume_content_pane_g9

0x7493,	// (0x000451f3) smil2_volume_content_pane_g10

0x0009,

0xf662,	// (0x0004d3c2) smil2_volume_content_pane_g

0x4a0b,	// (0x0004276b) cale_week_day_heading_pane_t1_ParamLimits

0x4a35,	// (0x00042795) cale_week_day_heading_pane_t2_ParamLimits

0x4a64,	// (0x000427c4) cale_week_day_heading_pane_t3_ParamLimits

0x4a93,	// (0x000427f3) cale_week_day_heading_pane_t4_ParamLimits

0x4ac2,	// (0x00042822) cale_week_day_heading_pane_t5_ParamLimits

0x4af9,	// (0x00042859) cale_week_day_heading_pane_t6_ParamLimits

0x4b30,	// (0x00042890) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0004ced2) cale_week_day_heading_pane_t_ParamLimits

0x0af1,	// (0x0003e851) bg_cale_side_pane_ParamLimits

0x4b5a,	// (0x000428ba) cale_week_time_pane_t1_ParamLimits

0x4b74,	// (0x000428d4) cale_week_time_pane_t2_ParamLimits

0x4b8e,	// (0x000428ee) cale_week_time_pane_t3_ParamLimits

0x4ba8,	// (0x00042908) cale_week_time_pane_t4_ParamLimits

0x4bc2,	// (0x00042922) cale_week_time_pane_t5_ParamLimits

0x4bdc,	// (0x0004293c) cale_week_time_pane_t6_ParamLimits

0x4bf6,	// (0x00042956) cale_week_time_pane_t7_ParamLimits

0x4c10,	// (0x00042970) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0004cee1) cale_week_time_pane_t_ParamLimits

0x4c30,	// (0x00042990) cell_cale_week_pane_g2_ParamLimits

0x0af1,	// (0x0003e851) bg_cale_side_pane_cp01_ParamLimits

0x5a3d,	// (0x0004379d) cale_month_week_pane_t1_ParamLimits

0x5a56,	// (0x000437b6) cale_month_week_pane_t2_ParamLimits

0x5a6f,	// (0x000437cf) cale_month_week_pane_t3_ParamLimits

0x5a88,	// (0x000437e8) cale_month_week_pane_t4_ParamLimits

0x5aa1,	// (0x00043801) cale_month_week_pane_t5_ParamLimits

0x5aba,	// (0x0004381a) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0004cfaf) cale_month_week_pane_t_ParamLimits

0xcda3,	// (0x0004ab03) cell_cale_month_pane_g1_ParamLimits

0x021e,	// (0x0003df7e) main_cale_event_viewer_pane

0x021e,	// (0x0003df7e) listscroll_cale_event_viewer_pane

0x749c,	// (0x000451fc) list_cale_ev_pane

0x74a4,	// (0x00045204) scroll_pane_cp023

0x74b0,	// (0x00045210) field_cale_ev_pane_ParamLimits

0x74b0,	// (0x00045210) field_cale_ev_pane

0x74ce,	// (0x0004522e) field_cale_ev_content_pane_ParamLimits

0x74ce,	// (0x0004522e) field_cale_ev_content_pane

0x74da,	// (0x0004523a) field_cale_ev_pane_g1_ParamLimits

0x74da,	// (0x0004523a) field_cale_ev_pane_g1

0x74e6,	// (0x00045246) field_cale_ev_pane_g2_ParamLimits

0x74e6,	// (0x00045246) field_cale_ev_pane_g2

0x74fe,	// (0x0004525e) field_cale_ev_pane_g3_ParamLimits

0x74fe,	// (0x0004525e) field_cale_ev_pane_g3

0x0002,

0xf677,	// (0x0004d3d7) field_cale_ev_pane_g_ParamLimits

0xf677,	// (0x0004d3d7) field_cale_ev_pane_g

0x7516,	// (0x00045276) field_cale_ev_pane_t1_ParamLimits

0x7516,	// (0x00045276) field_cale_ev_pane_t1

0x752d,	// (0x0004528d) field_cale_ev_content_pane_t1_ParamLimits

0x752d,	// (0x0004528d) field_cale_ev_content_pane_t1

0x16d2,	// (0x0003f432) bg_button_pane_cp01

0x4738,	// (0x00042498) listscroll_cale_week_pane_ParamLimits

0x0a9c,	// (0x0003e7fc) popup_toolbar_window_cp01

0x0ac2,	// (0x0003e822) listscroll_cale_week_pane_t1_ParamLimits

0x4738,	// (0x00042498) listscroll_cale_day_pane_ParamLimits

0x0a9c,	// (0x0003e7fc) popup_toolbar_window_cp02

0x0edd,	// (0x0003ec3d) listscroll_cale_day_pane_t1_ParamLimits

0x4738,	// (0x00042498) main_cale_month_pane_ParamLimits

0xcf5d,	// (0x0004acbd) popup_toolbar_window_cp03_ParamLimits

0xcf5d,	// (0x0004acbd) popup_toolbar_window_cp03

0x6495,	// (0x000441f5) main_image_pane_g2_ParamLimits

0x6495,	// (0x000441f5) main_image_pane_g2

0x64a6,	// (0x00044206) main_image_pane_g3_ParamLimits

0x64a6,	// (0x00044206) main_image_pane_g3

0x0002,

0xf45c,	// (0x0004d1bc) main_image_pane_g_ParamLimits

0xf45c,	// (0x0004d1bc) main_image_pane_g

0x17ec,	// (0x0003f54c) main_image_pane_t1_ParamLimits

0x64b7,	// (0x00044217) main_image_pane_t2_ParamLimits

0x64b7,	// (0x00044217) main_image_pane_t2

0x64c9,	// (0x00044229) main_image_pane_t3_ParamLimits

0x64c9,	// (0x00044229) main_image_pane_t3

0x64f1,	// (0x00044251) main_image_pane_t4_ParamLimits

0x64f1,	// (0x00044251) main_image_pane_t4

0x0003,

0xf463,	// (0x0004d1c3) main_image_pane_t_ParamLimits

0xf463,	// (0x0004d1c3) main_image_pane_t

0x6511,	// (0x00044271) popup_image_details_window_cp01

0x651b,	// (0x0004427b) popup_toobar_trans_pane_cp01_ParamLimits

0x651b,	// (0x0004427b) popup_toobar_trans_pane_cp01

0x6ccf,	// (0x00044a2f) popup_image_details_window_ParamLimits

0x6ccf,	// (0x00044a2f) popup_image_details_window

0xcf30,	// (0x0004ac90) popup_image_focus_window

0xcf94,	// (0x0004acf4) camera2_autofocus_pane_ParamLimits

0xcf94,	// (0x0004acf4) camera2_autofocus_pane

0x021e,	// (0x0003df7e) bg_popup_sub_pane_cp06

0x754b,	// (0x000452ab) popup_image_focus_window_g1

0x7553,	// (0x000452b3) popup_image_focus_window_g2

0x755b,	// (0x000452bb) popup_image_focus_window_g3

0x7563,	// (0x000452c3) popup_image_focus_window_g4

0x0003,

0xf67e,	// (0x0004d3de) popup_image_focus_window_g

0x756b,	// (0x000452cb) popup_image_focus_window_t1

0x7579,	// (0x000452d9) popup_image_focus_window_t2

0x7589,	// (0x000452e9) popup_image_focus_window_t3

0x0002,

0xf687,	// (0x0004d3e7) popup_image_focus_window_t

0x091f,	// (0x0003e67f) camera2_autofocus_pane_g1

0x08c6,	// (0x0003e626) bg_tb_trans_pane_cp01

0x7597,	// (0x000452f7) popup_image_details_window_g1

0x75aa,	// (0x0004530a) popup_image_details_window_g2

0x0002,

0xf699,	// (0x0004d3f9) popup_image_details_window_g

0x75d3,	// (0x00045333) popup_image_details_window_t1

0x75e5,	// (0x00045345) popup_image_details_window_t2

0x75fe,	// (0x0004535e) popup_image_details_window_t3

0x7612,	// (0x00045372) popup_image_details_window_t4

0x762d,	// (0x0004538d) popup_image_details_window_t5

0x0004,

0xf6a0,	// (0x0004d400) popup_image_details_window_t

0x097d,	// (0x0003e6dd) bg_calc_paper_pane_ParamLimits

0x021e,	// (0x0003df7e) grid_highlight_pane_cp013

0xcd13,	// (0x0004aa73) list_calc_pane_ParamLimits

0xcd25,	// (0x0004aa85) scroll_pane_cp024

0x0991,	// (0x0003e6f1) bg_calc_display_pane_ParamLimits

0x4587,	// (0x000422e7) calc_display_pane_t1_ParamLimits

0x4599,	// (0x000422f9) calc_display_pane_t2_ParamLimits

0xcd2d,	// (0x0004aa8d) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0004ce52) calc_display_pane_t_ParamLimits

0x4653,	// (0x000423b3) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0004ce6f) cell_calc_pane_g

0x465c,	// (0x000423bc) cell_calc_pane_t1

0x09e6,	// (0x0003e746) grid_highlight_pane_cp02_ParamLimits

0x09fc,	// (0x0003e75c) toolbar_button_pane_cp01_ParamLimits

0x09fc,	// (0x0003e75c) toolbar_button_pane_cp01

0x1831,	// (0x0003f591) temp_image_control_pane_ParamLimits

0x1831,	// (0x0003f591) temp_image_control_pane

0x08c6,	// (0x0003e626) main_mp3_pane

0x7647,	// (0x000453a7) temp_image_control_pane_g1_ParamLimits

0x7647,	// (0x000453a7) temp_image_control_pane_g1

0x7655,	// (0x000453b5) temp_image_control_pane_g2_ParamLimits

0x7655,	// (0x000453b5) temp_image_control_pane_g2

0x7667,	// (0x000453c7) temp_image_control_pane_g3_ParamLimits

0x7667,	// (0x000453c7) temp_image_control_pane_g3

0x7677,	// (0x000453d7) temp_image_control_pane_g4_ParamLimits

0x7677,	// (0x000453d7) temp_image_control_pane_g4

0x0003,

0xf6ab,	// (0x0004d40b) temp_image_control_pane_g_ParamLimits

0xf6ab,	// (0x0004d40b) temp_image_control_pane_g

0x7647,	// (0x000453a7) main_mp3_pane_g1

0x768a,	// (0x000453ea) main_mp3_pane_g2

0x0007,

0xf6b4,	// (0x0004d414) main_mp3_pane_g

0x76d7,	// (0x00045437) main_mp3_pane_t1

0x092d,	// (0x0003e68d) main_camera_pane_g8_ParamLimits

0x092d,	// (0x0003e68d) main_camera_pane_g8

0x4dfe,	// (0x00042b5e) main_video_pane_g7_ParamLimits

0x4dfe,	// (0x00042b5e) main_video_pane_g7

0x0b4b,	// (0x0003e8ab) main_camera2_pane_t7_ParamLimits

0x0b4b,	// (0x0003e8ab) main_camera2_pane_t7

0x0c95,	// (0x0003e9f5) scroll_pane_cp025_ParamLimits

0x0c95,	// (0x0003e9f5) scroll_pane_cp025

0x0ca9,	// (0x0003ea09) scroll_pane_cp026_ParamLimits

0x0ca9,	// (0x0003ea09) scroll_pane_cp026

0x0cb8,	// (0x0003ea18) wml_content_pane_ParamLimits

0x021e,	// (0x0003df7e) main_touch_calib_pane

0x77b5,	// (0x00045515) main_touch_calib_pane_g1

0x77c7,	// (0x00045527) main_touch_calib_pane_g2

0x77d9,	// (0x00045539) main_touch_calib_pane_g3

0x77eb,	// (0x0004554b) main_touch_calib_pane_g4

0x0003,

0xf6d2,	// (0x0004d432) main_touch_calib_pane_g

0x77fd,	// (0x0004555d) main_touch_calib_pane_t1

0x7817,	// (0x00045577) main_touch_calib_pane_t2

0x0004,

0xf6db,	// (0x0004d43b) main_touch_calib_pane_t

0x1421,	// (0x0003f181) mup_progress_pane_cp02

0x1456,	// (0x0003f1b6) navi_pane_g1

0x1511,	// (0x0003f271) navi_pane_mp_t3

0x08c6,	// (0x0003e626) main_mp3_pane_ParamLimits

0x6e5a,	// (0x00044bba) navi_pane_ParamLimits

0x7647,	// (0x000453a7) main_mp3_pane_g1_ParamLimits

0x768a,	// (0x000453ea) main_mp3_pane_g2_ParamLimits

0x7698,	// (0x000453f8) main_mp3_pane_g3_ParamLimits

0x7698,	// (0x000453f8) main_mp3_pane_g3

0x76a6,	// (0x00045406) main_mp3_pane_g4_ParamLimits

0x76a6,	// (0x00045406) main_mp3_pane_g4

0x091f,	// (0x0003e67f) main_mp3_pane_g5_ParamLimits

0x091f,	// (0x0003e67f) main_mp3_pane_g5

0x76b2,	// (0x00045412) main_mp3_pane_g6_ParamLimits

0x76b2,	// (0x00045412) main_mp3_pane_g6

0x76bf,	// (0x0004541f) main_mp3_pane_g7_ParamLimits

0x76bf,	// (0x0004541f) main_mp3_pane_g7

0x76cb,	// (0x0004542b) main_mp3_pane_g8_ParamLimits

0x76cb,	// (0x0004542b) main_mp3_pane_g8

0xf6b4,	// (0x0004d414) main_mp3_pane_g_ParamLimits

0x76e5,	// (0x00045445) main_mp3_pane_t2

0x76f3,	// (0x00045453) main_mp3_pane_t3

0x7701,	// (0x00045461) main_mp3_pane_t4

0x770f,	// (0x0004546f) main_mp3_pane_t5

0x0005,

0xf6c5,	// (0x0004d425) main_mp3_pane_t

0x772b,	// (0x0004548b) mup_progress_pane_cp01

0xccc2,	// (0x0004aa22) aid_zoom_text_secondary2

0x749c,	// (0x000451fc) list_cale_ev2_pane

0x74a4,	// (0x00045204) scroll_pane_cp023_ParamLimits

0x786d,	// (0x000455cd) field_cale_ev2_pane_ParamLimits

0x786d,	// (0x000455cd) field_cale_ev2_pane

0xcfe8,	// (0x0004ad48) field_cale_ev2_pane_g1_ParamLimits

0xcfe8,	// (0x0004ad48) field_cale_ev2_pane_g1

0xcff4,	// (0x0004ad54) field_cale_ev2_pane_g2_ParamLimits

0xcff4,	// (0x0004ad54) field_cale_ev2_pane_g2

0xd00c,	// (0x0004ad6c) field_cale_ev2_pane_g3_ParamLimits

0xd00c,	// (0x0004ad6c) field_cale_ev2_pane_g3

0x0003,

0xf6e6,	// (0x0004d446) field_cale_ev2_pane_g_ParamLimits

0xf6e6,	// (0x0004d446) field_cale_ev2_pane_g

0xd030,	// (0x0004ad90) field_cale_ev2_pane_t1_ParamLimits

0xd030,	// (0x0004ad90) field_cale_ev2_pane_t1

0xd047,	// (0x0004ada7) field_cale_ev2_pane_t2_ParamLimits

0xd047,	// (0x0004ada7) field_cale_ev2_pane_t2

0x0001,

0xf6ef,	// (0x0004d44f) field_cale_ev2_pane_t_ParamLimits

0xf6ef,	// (0x0004d44f) field_cale_ev2_pane_t

0x6349,	// (0x000440a9) main_postcard_pane_g5_ParamLimits

0x6349,	// (0x000440a9) main_postcard_pane_g5

0x635f,	// (0x000440bf) main_postcard_pane_g6_ParamLimits

0x635f,	// (0x000440bf) main_postcard_pane_g6

0x08c6,	// (0x0003e626) camera2_autofocus_pane_cp_ParamLimits

0x08c6,	// (0x0003e626) camera2_autofocus_pane_cp

0x08c6,	// (0x0003e626) main_mup3_pane

0x78d2,	// (0x00045632) main_mup3_pane_g1_ParamLimits

0x78d2,	// (0x00045632) main_mup3_pane_g1

0x78f4,	// (0x00045654) main_mup3_pane_g2_ParamLimits

0x78f4,	// (0x00045654) main_mup3_pane_g2

0x7974,	// (0x000456d4) main_mup3_pane_g3_ParamLimits

0x7974,	// (0x000456d4) main_mup3_pane_g3

0x79ba,	// (0x0004571a) main_mup3_pane_g4_ParamLimits

0x79ba,	// (0x0004571a) main_mup3_pane_g4

0x7a00,	// (0x00045760) main_mup3_pane_g5_ParamLimits

0x7a00,	// (0x00045760) main_mup3_pane_g5

0x7a46,	// (0x000457a6) main_mup3_pane_g6_ParamLimits

0x7a46,	// (0x000457a6) main_mup3_pane_g6

0x092d,	// (0x0003e68d) main_mup3_pane_g7_ParamLimits

0x092d,	// (0x0003e68d) main_mup3_pane_g7

0x0007,

0xf6ff,	// (0x0004d45f) main_mup3_pane_g_ParamLimits

0xf6ff,	// (0x0004d45f) main_mup3_pane_g

0x7ac4,	// (0x00045824) main_mup3_pane_t1_ParamLimits

0x7ac4,	// (0x00045824) main_mup3_pane_t1

0x7b38,	// (0x00045898) main_mup3_pane_t2_ParamLimits

0x7b38,	// (0x00045898) main_mup3_pane_t2

0x7c0c,	// (0x0004596c) main_mup3_pane_t4_ParamLimits

0x7c0c,	// (0x0004596c) main_mup3_pane_t4

0x7c62,	// (0x000459c2) main_mup3_pane_t5_ParamLimits

0x7c62,	// (0x000459c2) main_mup3_pane_t5

0x7d1e,	// (0x00045a7e) main_mup3_pane_t6_ParamLimits

0x7d1e,	// (0x00045a7e) main_mup3_pane_t6

0x0005,

0xf710,	// (0x0004d470) main_mup3_pane_t_ParamLimits

0xf710,	// (0x0004d470) main_mup3_pane_t

0x7dd6,	// (0x00045b36) mup3_progress_pane_ParamLimits

0x7dd6,	// (0x00045b36) mup3_progress_pane

0x7e62,	// (0x00045bc2) popup_mup3_control_window_ParamLimits

0x7e62,	// (0x00045bc2) popup_mup3_control_window

0x7e7e,	// (0x00045bde) popup_mup3_text_window

0x7e9c,	// (0x00045bfc) mup3_progress_pane_t1

0x7ebb,	// (0x00045c1b) mup3_progress_pane_t2

0x7eda,	// (0x00045c3a) mup3_progress_pane_t3

0x0002,

0xf71d,	// (0x0004d47d) mup3_progress_pane_t

0x7ef7,	// (0x00045c57) mup_progress_pane_cp03

0x021e,	// (0x0003df7e) bg_tb_trans_pane_cp04

0x7f07,	// (0x00045c67) mup3_volume_pane

0x7f0f,	// (0x00045c6f) popup_mup3_control_window_g1

0x7f18,	// (0x00045c78) mup3_volume_pane_g1

0x7f21,	// (0x00045c81) mup3_volume_pane_g2

0x7f2a,	// (0x00045c8a) mup3_volume_pane_g3

0x0002,

0xf724,	// (0x0004d484) mup3_volume_pane_g

0x021e,	// (0x0003df7e) bg_tb_trans_pane_cp03

0x7f33,	// (0x00045c93) popup_mup3_text_window_g1

0x7f3b,	// (0x00045c9b) popup_mup3_text_window_t1

0x09d9,	// (0x0003e739) list_calc_item_pane_g1_ParamLimits

0x716a,	// (0x00044eca) mup_volume_pane_cp_g1

0x7831,	// (0x00045591) main_touch_calib_pane_t3

0x7845,	// (0x000455a5) main_touch_calib_pane_t4

0x7859,	// (0x000455b9) main_touch_calib_pane_t5

0xcc9e,	// (0x0004a9fe) aid_cell_size_toolbar2

0xcca6,	// (0x0004aa06) aid_popup3_width_pane

0xccb2,	// (0x0004aa12) aid_zoom_text_msg_primary

0x4cd9,	// (0x00042a39) vorec_t7

0x099d,	// (0x0003e6fd) bg_calc_paper_pane_g1_ParamLimits

0x09a9,	// (0x0003e709) bg_calc_paper_pane_g2_ParamLimits

0x09b5,	// (0x0003e715) bg_calc_paper_pane_g3_ParamLimits

0x09c1,	// (0x0003e721) bg_calc_paper_pane_g4_ParamLimits

0x09cd,	// (0x0003e72d) bg_calc_paper_pane_g5_ParamLimits

0x45e0,	// (0x00042340) bg_calc_paper_pane_g6_ParamLimits

0x45ef,	// (0x0004234f) bg_calc_paper_pane_g7_ParamLimits

0x45fe,	// (0x0004235e) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0004ce59) bg_calc_paper_pane_g_ParamLimits

0x4611,	// (0x00042371) calc_bg_paper_pane_g9_ParamLimits

0x08c6,	// (0x0003e626) image_qvga_pane_ParamLimits

0x08c6,	// (0x0003e626) image_qvga_pane

0x08a4,	// (0x0003e604) bg_popup_sub_pane_cp04_ParamLimits

0x1768,	// (0x0003f4c8) popup_mup_playback_window_g1_ParamLimits

0x1774,	// (0x0003f4d4) popup_mup_playback_window_t1_ParamLimits

0x1789,	// (0x0003f4e9) popup_mup_playback_window_t2_ParamLimits

0xf457,	// (0x0004d1b7) popup_mup_playback_window_t_ParamLimits

0x092d,	// (0x0003e68d) main_mup2_pane_g3_ParamLimits

0x092d,	// (0x0003e68d) main_mup2_pane_g3

0x5005,	// (0x00042d65) popup_toolbar_window_cp04

0x1b7e,	// (0x0003f8de) popup_call2_audio_second_window_g3_ParamLimits

0x1b7e,	// (0x0003f8de) popup_call2_audio_second_window_g3

0x1f88,	// (0x0003fce8) popup_call2_audio_first_window_g4_ParamLimits

0x1f88,	// (0x0003fce8) popup_call2_audio_first_window_g4

0x2638,	// (0x00040398) popup_call2_audio_in_window_g4_ParamLimits

0x2638,	// (0x00040398) popup_call2_audio_in_window_g4

0x6477,	// (0x000441d7) aid_area_sk_bg_cut_ParamLimits

0x6477,	// (0x000441d7) aid_area_sk_bg_cut

0x179e,	// (0x0003f4fe) aid_area_sk_bg_cut_2_ParamLimits

0x179e,	// (0x0003f4fe) aid_area_sk_bg_cut_2

0x021e,	// (0x0003df7e) aid_placing_details_win

0x021e,	// (0x0003df7e) aid_placing_details_win_2

0x091f,	// (0x0003e67f) camera2_autofocus_pane_g1_ParamLimits

0x42f7,	// (0x00042057) popup_fixed_preview_cale_window_ParamLimits

0x42f7,	// (0x00042057) popup_fixed_preview_cale_window

0x158f,	// (0x0003f2ef) navi_slider_pane_g3

0x1598,	// (0x0003f2f8) navi_slider_pane_g4

0x15a1,	// (0x0003f301) navi_slider_pane_g5

0x158f,	// (0x0003f2ef) navi_slider_pane_g6

0xce49,	// (0x0004aba9) navi_slider_pane_g7

0x169f,	// (0x0003f3ff) mup_scale_pane_g3

0x16a8,	// (0x0003f408) mup_scale_pane_g4

0x16b1,	// (0x0003f411) mup_scale_pane_g5

0x61f6,	// (0x00043f56) mup_scale_pane_g6

0x61ff,	// (0x00043f5f) mup_scale_pane_g7

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g3

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g4

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g5

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g6

0x0b79,	// (0x0003e8d9) cams2_slider_pane_g7

0x0b79,	// (0x0003e8d9) camera2_autofocus_pane_cp_g1

0x2948,	// (0x000406a8) bg_popup_preview_window_pane_cp02_ParamLimits

0x2948,	// (0x000406a8) bg_popup_preview_window_pane_cp02

0x7f49,	// (0x00045ca9) list_fp_cale_pane_ParamLimits

0x7f49,	// (0x00045ca9) list_fp_cale_pane

0x7f55,	// (0x00045cb5) popup_fixed_preview_cale_window_t1_ParamLimits

0x7f55,	// (0x00045cb5) popup_fixed_preview_cale_window_t1

0x7f67,	// (0x00045cc7) popup_fixed_preview_cale_window_t2_ParamLimits

0x7f67,	// (0x00045cc7) popup_fixed_preview_cale_window_t2

0x7f7c,	// (0x00045cdc) popup_fixed_preview_cale_window_t3_ParamLimits

0x7f7c,	// (0x00045cdc) popup_fixed_preview_cale_window_t3

0x0002,

0xf72b,	// (0x0004d48b) popup_fixed_preview_cale_window_t_ParamLimits

0xf72b,	// (0x0004d48b) popup_fixed_preview_cale_window_t

0x7f9d,	// (0x00045cfd) list_single_fp_cale_pane_ParamLimits

0x7f9d,	// (0x00045cfd) list_single_fp_cale_pane

0x7fb3,	// (0x00045d13) list_single_fp_cale_pane_g1_ParamLimits

0x7fb3,	// (0x00045d13) list_single_fp_cale_pane_g1

0x7fbf,	// (0x00045d1f) list_single_fp_cale_pane_g2_ParamLimits

0x7fbf,	// (0x00045d1f) list_single_fp_cale_pane_g2

0x0002,

0xf732,	// (0x0004d492) list_single_fp_cale_pane_g_ParamLimits

0xf732,	// (0x0004d492) list_single_fp_cale_pane_g

0x7fd8,	// (0x00045d38) list_single_fp_cale_pane_t1_ParamLimits

0x7fd8,	// (0x00045d38) list_single_fp_cale_pane_t1

0x7fea,	// (0x00045d4a) list_single_fp_cale_pane_t2_ParamLimits

0x7fea,	// (0x00045d4a) list_single_fp_cale_pane_t2

0x0001,

0xf739,	// (0x0004d499) list_single_fp_cale_pane_t_ParamLimits

0xf739,	// (0x0004d499) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x021e,	// (0x0003df7e) main_dialer_pane

0x021e,	// (0x0003df7e) aid_cell_size_keypad

0x021e,	// (0x0003df7e) dialer_ne_pane

0x021e,	// (0x0003df7e) grid_dialer_command_1_pane

0x021e,	// (0x0003df7e) grid_dialer_command_2_pane

0x021e,	// (0x0003df7e) grid_dialer_keypad_pane

0x801d,	// (0x00045d7d) bg_popup_call_pane_cp06_ParamLimits

0x801d,	// (0x00045d7d) bg_popup_call_pane_cp06

0x801d,	// (0x00045d7d) dialer_ne_clear_pane_ParamLimits

0x801d,	// (0x00045d7d) dialer_ne_clear_pane

0x0b79,	// (0x0003e8d9) dialer_ne_pane_g1

0x0b4b,	// (0x0003e8ab) dialer_ne_pane_t1_ParamLimits

0x0b4b,	// (0x0003e8ab) dialer_ne_pane_t1

0x802b,	// (0x00045d8b) dialer_ne_pane_t2_ParamLimits

0x802b,	// (0x00045d8b) dialer_ne_pane_t2

0x8053,	// (0x00045db3) dialer_ne_pane_t3_ParamLimits

0x8053,	// (0x00045db3) dialer_ne_pane_t3

0x0002,

0xf73e,	// (0x0004d49e) dialer_ne_pane_t_ParamLimits

0xf73e,	// (0x0004d49e) dialer_ne_pane_t

0x8053,	// (0x00045db3) dialer_ne_pane_t3_copy1_ParamLimits

0x8053,	// (0x00045db3) dialer_ne_pane_t3_copy1

0x8080,	// (0x00045de0) cell_dialer_keypad_pane_ParamLimits

0x8080,	// (0x00045de0) cell_dialer_keypad_pane

0x08c6,	// (0x0003e626) cell_dialer_command_1_pane_ParamLimits

0x08c6,	// (0x0003e626) cell_dialer_command_1_pane

0x8097,	// (0x00045df7) cell_dialer_command_2_pane_ParamLimits

0x8097,	// (0x00045df7) cell_dialer_command_2_pane

0x08c6,	// (0x0003e626) bg_button_pane_cp02_ParamLimits

0x08c6,	// (0x0003e626) bg_button_pane_cp02

0x091f,	// (0x0003e67f) cell_dialer_keypad_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) cell_dialer_keypad_pane_g1

0x08c6,	// (0x0003e626) bg_button_pane_cp03_ParamLimits

0x08c6,	// (0x0003e626) bg_button_pane_cp03

0x091f,	// (0x0003e67f) cell_dialer_command_1_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) cell_dialer_command_1_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp04

0x0b79,	// (0x0003e8d9) cell_dialer_command_2_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp06

0x0b79,	// (0x0003e8d9) dialer_ne_clear_pane_g1

0x1462,	// (0x0003f1c2) navi_pane_g2

0x1490,	// (0x0003f1f0) navi_pane_g3

0x0002,

0xf35a,	// (0x0004d0ba) navi_pane_g

0x151f,	// (0x0003f27f) navi_pane_mv_g2

0x1546,	// (0x0003f2a6) navi_pane_mv_g5

0x5fdb,	// (0x00043d3b) navi_pane_mv_t1

0x0991,	// (0x0003e6f1) main_clock2_pane

0x08c6,	// (0x0003e626) main_clock2_list_pane_ParamLimits

0x08c6,	// (0x0003e626) main_clock2_list_pane

0x8143,	// (0x00045ea3) main_clock2_pane_t1_ParamLimits

0x8143,	// (0x00045ea3) main_clock2_pane_t1

0x817e,	// (0x00045ede) main_clock2_pane_t2_ParamLimits

0x817e,	// (0x00045ede) main_clock2_pane_t2

0x0004,

0xf74a,	// (0x0004d4aa) main_clock2_pane_t_ParamLimits

0xf74a,	// (0x0004d4aa) main_clock2_pane_t

0x821e,	// (0x00045f7e) popup_clock_analogue_window_cp03_ParamLimits

0x821e,	// (0x00045f7e) popup_clock_analogue_window_cp03

0x8243,	// (0x00045fa3) popup_clock_digital_window_cp02_ParamLimits

0x8243,	// (0x00045fa3) popup_clock_digital_window_cp02

0x82bc,	// (0x0004601c) main_clock2_list_single_pane_ParamLimits

0x82bc,	// (0x0004601c) main_clock2_list_single_pane

0x0b43,	// (0x0003e8a3) list_highlight_pane_cp05

0x82ce,	// (0x0004602e) main_clock2_list_single_pane_t1

0x5005,	// (0x00042d65) popup_toolbar_window_cp04_ParamLimits

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g2_ParamLimits

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g2

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g3_ParamLimits

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g3

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g4_ParamLimits

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g4

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g5_ParamLimits

0x092d,	// (0x0003e68d) camera2_autofocus_pane_g5

0x0004,

0xf68e,	// (0x0004d3ee) camera2_autofocus_pane_g_ParamLimits

0xf68e,	// (0x0004d3ee) camera2_autofocus_pane_g

0x788e,	// (0x000455ee) camera2_autofocus_pane_cp_g2

0x7896,	// (0x000455f6) camera2_autofocus_pane_cp_g3

0x789e,	// (0x000455fe) camera2_autofocus_pane_cp_g4

0x78a6,	// (0x00045606) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f4,	// (0x0004d454) camera2_autofocus_pane_cp_g

0x021e,	// (0x0003df7e) popup_dialer_spcha_window

0x021e,	// (0x0003df7e) bg_popup_sub_pane_cp07

0x021e,	// (0x0003df7e) list_spcha_pane

0x837b,	// (0x000460db) list_single_spcha_pane_ParamLimits

0x837b,	// (0x000460db) list_single_spcha_pane

0x021e,	// (0x0003df7e) list_highlight_pane_cp06

0x10b4,	// (0x0003ee14) list_single_spcha_pane_t1

0x23e2,	// (0x00040142) popup_call2_audio_out_window_g4_ParamLimits

0x23e2,	// (0x00040142) popup_call2_audio_out_window_g4

0x021e,	// (0x0003df7e) main_imed2_pane

0xcf38,	// (0x0004ac98) popup_imed_adjust2_window

0x6ce7,	// (0x00044a47) popup_imed_trans_window_ParamLimits

0x6ce7,	// (0x00044a47) popup_imed_trans_window

0x726b,	// (0x00044fcb) popup_blid_sat_info2_window_t1

0x7279,	// (0x00044fd9) popup_blid_sat_info2_window_t2

0x000a,

0xf623,	// (0x0004d383) popup_blid_sat_info2_window_t

0x838d,	// (0x000460ed) aid_size_cell_colour_35

0x83ad,	// (0x0004610d) aid_size_cell_colour_112

0x83cd,	// (0x0004612d) aid_size_cell_effect

0x21e8,	// (0x0003ff48) bg_tb_trans_pane_cp02

0x0fe6,	// (0x0003ed46) heading_imed_pane

0x83ed,	// (0x0004614d) listscroll_imed_pane

0x83f9,	// (0x00046159) heading_imed_pane_g1

0x8401,	// (0x00046161) heading_imed_pane_t1

0x840f,	// (0x0004616f) grid_imed_colour_35_pane_ParamLimits

0x840f,	// (0x0004616f) grid_imed_colour_35_pane

0x8427,	// (0x00046187) grid_imed_effect_pane

0x843d,	// (0x0004619d) list_imed_aspect_pane

0x8445,	// (0x000461a5) scroll_pane_cp027_ParamLimits

0x8445,	// (0x000461a5) scroll_pane_cp027

0x8456,	// (0x000461b6) cell_imed_effect_pane_ParamLimits

0x8456,	// (0x000461b6) cell_imed_effect_pane

0x847d,	// (0x000461dd) cell_imed_colour_pane_ParamLimits

0x847d,	// (0x000461dd) cell_imed_colour_pane

0x84bf,	// (0x0004621f) cell_imed_colour_pane_g1_ParamLimits

0x84bf,	// (0x0004621f) cell_imed_colour_pane_g1

0x84d0,	// (0x00046230) hgihlgiht_grid_pane_cp016_ParamLimits

0x84d0,	// (0x00046230) hgihlgiht_grid_pane_cp016

0x84e1,	// (0x00046241) cell_imed_effect_pane_g1

0x84e9,	// (0x00046249) grid_highlight_pane_cp017

0x84f2,	// (0x00046252) list_imed_single_pane_ParamLimits

0x84f2,	// (0x00046252) list_imed_single_pane

0x021e,	// (0x0003df7e) list_highlight_pane_cp07

0x8507,	// (0x00046267) list_imed_aspect_pane_comp1_t1

0x21e8,	// (0x0003ff48) bg_tb_trans_pane_cp05

0x8529,	// (0x00046289) popup_imed_adjust2_window_g1

0x8550,	// (0x000462b0) popup_imed_adjust2_window_t1

0x8568,	// (0x000462c8) slider_imed_adjust_pane

0x857c,	// (0x000462dc) slider_imed_adjust_pane_g1

0x858c,	// (0x000462ec) slider_imed_adjust_pane_g2

0x859c,	// (0x000462fc) slider_imed_adjust_pane_g3

0x85ad,	// (0x0004630d) slider_imed_adjust_pane_g4

0x0003,

0xf767,	// (0x0004d4c7) slider_imed_adjust_pane_g

0x85be,	// (0x0004631e) aid_size_cell_clipart2

0x85ca,	// (0x0004632a) grid_imed_clipart_pane

0x85d4,	// (0x00046334) scroll_pane_cp031

0x85dc,	// (0x0004633c) cell_imed_clipart_pane_ParamLimits

0x85dc,	// (0x0004633c) cell_imed_clipart_pane

0x85fe,	// (0x0004635e) cell_imed_clipart_pane_g1

0x021e,	// (0x0003df7e) grid_highlight_pane_cp014

0x811f,	// (0x00045e7f) main_clock2_pane_g1_ParamLimits

0x811f,	// (0x00045e7f) main_clock2_pane_g1

0x8263,	// (0x00045fc3) aid_call2_pane_cp10

0x8275,	// (0x00045fd5) aid_call_pane_cp10

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g1

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g2

0x8287,	// (0x00045fe7) popup_clock_analogue_window_cp10_g3

0x8287,	// (0x00045fe7) popup_clock_analogue_window_cp10_g4

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g5

0x0004,

0xf755,	// (0x0004d4b5) popup_clock_analogue_window_cp10_g

0x829d,	// (0x00045ffd) popup_clock_analogue_window_cp10_t1

0x82dc,	// (0x0004603c) clock_digital_number_pane_cp10_ParamLimits

0x82dc,	// (0x0004603c) clock_digital_number_pane_cp10

0x82f4,	// (0x00046054) clock_digital_number_pane_cp11_ParamLimits

0x82f4,	// (0x00046054) clock_digital_number_pane_cp11

0x830c,	// (0x0004606c) clock_digital_number_pane_cp12_ParamLimits

0x830c,	// (0x0004606c) clock_digital_number_pane_cp12

0x8326,	// (0x00046086) clock_digital_number_pane_cp13_ParamLimits

0x8326,	// (0x00046086) clock_digital_number_pane_cp13

0x8340,	// (0x000460a0) clock_digital_separator_pane_cp10_ParamLimits

0x8340,	// (0x000460a0) clock_digital_separator_pane_cp10

0x835a,	// (0x000460ba) popup_clock_digital_window_cp02_t1_ParamLimits

0x835a,	// (0x000460ba) popup_clock_digital_window_cp02_t1

0x089c,	// (0x0003e5fc) clock_digital_number_pane_cp10_g1

0x089c,	// (0x0003e5fc) clock_digital_number_pane_cp10_g2

0x0001,

0xf770,	// (0x0004d4d0) clock_digital_number_pane_cp10_g

0x089c,	// (0x0003e5fc) clock_digital_separator_pane_cp10_g1

0x089c,	// (0x0003e5fc) clock_digital_separator_pane_g2_cp10

0x154e,	// (0x0003f2ae) navi_pane_vded_g4

0x1557,	// (0x0003f2b7) navi_pane_vded_g5

0x1560,	// (0x0003f2c0) navi_pane_vded_t1

0x021e,	// (0x0003df7e) main_vded_pane

0x8607,	// (0x00046367) main_vded_pane_g1

0x8611,	// (0x00046371) main_vded_pane_g2

0x861b,	// (0x0004637b) main_vded_pane_g3

0x0002,

0xf775,	// (0x0004d4d5) main_vded_pane_g

0x8625,	// (0x00046385) main_vded_pane_t1

0x8633,	// (0x00046393) main_vded_pane_t2

0x0001,

0xf77c,	// (0x0004d4dc) main_vded_pane_t

0x8641,	// (0x000463a1) vded_slider_pane

0x8649,	// (0x000463a9) vded_video_pane

0x8651,	// (0x000463b1) vded_video_pane_g1

0x865b,	// (0x000463bb) vded_video_pane_g2

0x0b79,	// (0x0003e8d9) vded_video_pane_g3

0x0002,

0xf781,	// (0x0004d4e1) vded_video_pane_g

0x8664,	// (0x000463c4) vded_slider_pane_g1

0x716a,	// (0x00044eca) vded_slider_pane_g2

0x866d,	// (0x000463cd) vded_slider_pane_g3

0x8676,	// (0x000463d6) vded_slider_pane_g4

0x867f,	// (0x000463df) vded_slider_pane_g5

0x0004,

0xf788,	// (0x0004d4e8) vded_slider_pane_g

0x7e4a,	// (0x00045baa) mup3_rocker_pane_ParamLimits

0x7e4a,	// (0x00045baa) mup3_rocker_pane

0x8688,	// (0x000463e8) mup3_control_keys_pane_g1

0x8690,	// (0x000463f0) mup3_control_keys_pane_g2

0x8698,	// (0x000463f8) mup3_control_keys_pane_g3

0x86a0,	// (0x00046400) mup3_control_keys_pane_g4

0x0003,

0xf793,	// (0x0004d4f3) mup3_control_keys_pane_g

0x432e,	// (0x0004208e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x432e,	// (0x0004208e) popup_toolbar2_fixed_window_cp01

0x7e86,	// (0x00045be6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7e86,	// (0x00045be6) popup_toolbar2_fixed_window_cp02

0x1cf0,	// (0x0003fa50) popup_call2_audio_second_window_t4_ParamLimits

0x1cf0,	// (0x0003fa50) popup_call2_audio_second_window_t4

0x2263,	// (0x0003ffc3) popup_call2_audio_first_window_t6_ParamLimits

0x2263,	// (0x0003ffc3) popup_call2_audio_first_window_t6

0x24e5,	// (0x00040245) popup_call2_audio_out_window_t6_ParamLimits

0x24e5,	// (0x00040245) popup_call2_audio_out_window_t6

0x021e,	// (0x0003df7e) main_vitu_pane

0x08c6,	// (0x0003e626) aid_size_cell_itu_ParamLimits

0x08c6,	// (0x0003e626) aid_size_cell_itu

0x08c6,	// (0x0003e626) bg_popup_window_pane_cp08_ParamLimits

0x08c6,	// (0x0003e626) bg_popup_window_pane_cp08

0x08c6,	// (0x0003e626) field_vitu_entry_pane_ParamLimits

0x08c6,	// (0x0003e626) field_vitu_entry_pane

0x08c6,	// (0x0003e626) grid_vitu_function_pane_ParamLimits

0x08c6,	// (0x0003e626) grid_vitu_function_pane

0x08c6,	// (0x0003e626) grid_vitu_itu_pane_ParamLimits

0x08c6,	// (0x0003e626) grid_vitu_itu_pane

0x08c6,	// (0x0003e626) cell_vitu_itu_pane_ParamLimits

0x08c6,	// (0x0003e626) cell_vitu_itu_pane

0x08c6,	// (0x0003e626) cell_vitu_function_pane_ParamLimits

0x08c6,	// (0x0003e626) cell_vitu_function_pane

0x08c6,	// (0x0003e626) bg_popup_sub_pane_cp08_ParamLimits

0x08c6,	// (0x0003e626) bg_popup_sub_pane_cp08

0x0b93,	// (0x0003e8f3) field_vitu_entry_pane_t1_ParamLimits

0x0b93,	// (0x0003e8f3) field_vitu_entry_pane_t1

0x86b0,	// (0x00046410) field_vitu_entry_pane_t2_ParamLimits

0x86b0,	// (0x00046410) field_vitu_entry_pane_t2

0x0001,

0xf79c,	// (0x0004d4fc) field_vitu_entry_pane_t_ParamLimits

0xf79c,	// (0x0004d4fc) field_vitu_entry_pane_t

0x708d,	// (0x00044ded) bg_button_pane_cp05_ParamLimits

0x708d,	// (0x00044ded) bg_button_pane_cp05

0x86cd,	// (0x0004642d) cell_vitu_itu_pane_g1

0x2204,	// (0x0003ff64) cell_vitu_itu_pane_t1_ParamLimits

0x2204,	// (0x0003ff64) cell_vitu_itu_pane_t1

0x2204,	// (0x0003ff64) cell_vitu_itu_pane_t2_ParamLimits

0x2204,	// (0x0003ff64) cell_vitu_itu_pane_t2

0x0002,

0xf7a1,	// (0x0004d501) cell_vitu_itu_pane_t_ParamLimits

0xf7a1,	// (0x0004d501) cell_vitu_itu_pane_t

0x021e,	// (0x0003df7e) bg_button_pane_cp07

0x0b79,	// (0x0003e8d9) cell_vitu_function_pane_g1

0xcd0b,	// (0x0004aa6b) main_calc_pane_g1

0x4155,	// (0x00041eb5) aid_visual_content_pane

0x021e,	// (0x0003df7e) main_vradio_pane

0x091f,	// (0x0003e67f) main_vradio_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) main_vradio_pane_g1

0x092d,	// (0x0003e68d) main_vradio_pane_g2_ParamLimits

0x092d,	// (0x0003e68d) main_vradio_pane_g2

0x0001,

0xf7a8,	// (0x0004d508) main_vradio_pane_g_ParamLimits

0xf7a8,	// (0x0004d508) main_vradio_pane_g

0x0b93,	// (0x0003e8f3) main_vradio_pane_t1_ParamLimits

0x0b93,	// (0x0003e8f3) main_vradio_pane_t1

0x0b93,	// (0x0003e8f3) main_vradio_pane_t2_ParamLimits

0x0b93,	// (0x0003e8f3) main_vradio_pane_t2

0x0b4b,	// (0x0003e8ab) main_vradio_pane_t3_ParamLimits

0x0b4b,	// (0x0003e8ab) main_vradio_pane_t3

0x0002,

0xf7ad,	// (0x0004d50d) main_vradio_pane_t_ParamLimits

0xf7ad,	// (0x0004d50d) main_vradio_pane_t

0x08c6,	// (0x0003e626) vradio_rocker_control_pane_ParamLimits

0x08c6,	// (0x0003e626) vradio_rocker_control_pane

0x08c6,	// (0x0003e626) vradio_station_info_pane_ParamLimits

0x08c6,	// (0x0003e626) vradio_station_info_pane

0x08c6,	// (0x0003e626) vradio_frequency_info_pane_ParamLimits

0x08c6,	// (0x0003e626) vradio_frequency_info_pane

0x0b79,	// (0x0003e8d9) vradio_station_info_pane_g1

0x2204,	// (0x0003ff64) vradio_station_info_pane_t1_ParamLimits

0x2204,	// (0x0003ff64) vradio_station_info_pane_t1

0x0b4b,	// (0x0003e8ab) vradio_station_info_pane_t2_ParamLimits

0x0b4b,	// (0x0003e8ab) vradio_station_info_pane_t2

0x0001,

0xf7b4,	// (0x0004d514) vradio_station_info_pane_t_ParamLimits

0xf7b4,	// (0x0004d514) vradio_station_info_pane_t

0x021e,	// (0x0003df7e) vradio_tuning_pane

0x86e9,	// (0x00046449) vradio_rocker_control_pane_g1

0x86f3,	// (0x00046453) vradio_rocker_control_pane_g2

0x86fb,	// (0x0004645b) vradio_rocker_control_pane_g3

0x8705,	// (0x00046465) vradio_rocker_control_pane_g4

0x870f,	// (0x0004646f) vradio_rocker_control_pane_g5

0x0004,

0xf7b9,	// (0x0004d519) vradio_rocker_control_pane_g

0x0b79,	// (0x0003e8d9) vradio_frequency_info_pane_g1

0x0b93,	// (0x0003e8f3) vradio_frequency_info_pane_t1_ParamLimits

0x0b93,	// (0x0003e8f3) vradio_frequency_info_pane_t1

0x8719,	// (0x00046479) vradio_tuning_pane_g1

0x8724,	// (0x00046484) vradio_tuning_pane_t1

0xccca,	// (0x0004aa2a) area_side_right_pane_ParamLimits

0xccca,	// (0x0004aa2a) area_side_right_pane

0x290f,	// (0x0004066f) status_small_pane_g1

0x2917,	// (0x00040677) status_small_pane_g2

0x2920,	// (0x00040680) status_small_pane_g3

0x2929,	// (0x00040689) status_small_pane_g4

0x0003,

0xf585,	// (0x0004d2e5) status_small_pane_g

0x2932,	// (0x00040692) status_small_pane_t1

0x021e,	// (0x0003df7e) main_video3_pane

0x8733,	// (0x00046493) cams_zoom_vslider_pane

0x873b,	// (0x0004649b) image3_wide_pane_ParamLimits

0x873b,	// (0x0004649b) image3_wide_pane

0x8755,	// (0x000464b5) image3_wide_small_pane

0x8761,	// (0x000464c1) main_video3_pane_g1_ParamLimits

0x8761,	// (0x000464c1) main_video3_pane_g1

0x877d,	// (0x000464dd) main_video3_pane_g2_ParamLimits

0x877d,	// (0x000464dd) main_video3_pane_g2

0x0001,

0xf7c4,	// (0x0004d524) main_video3_pane_g_ParamLimits

0xf7c4,	// (0x0004d524) main_video3_pane_g

0x8799,	// (0x000464f9) main_video3_pane_t1_ParamLimits

0x8799,	// (0x000464f9) main_video3_pane_t1

0x87c4,	// (0x00046524) main_video3_pane_t2_ParamLimits

0x87c4,	// (0x00046524) main_video3_pane_t2

0x87ef,	// (0x0004654f) main_video3_pane_t3_ParamLimits

0x87ef,	// (0x0004654f) main_video3_pane_t3

0x0002,

0xf7c9,	// (0x0004d529) main_video3_pane_t_ParamLimits

0xf7c9,	// (0x0004d529) main_video3_pane_t

0x881c,	// (0x0004657c) cams_zoom_vslider_pane_g1

0x8825,	// (0x00046585) cams_zoom_vslider_pane_g2

0x0001,

0xf7d0,	// (0x0004d530) cams_zoom_vslider_pane_g

0x882d,	// (0x0004658d) small_slider_vertical_pane

0x0b79,	// (0x0003e8d9) small_slider_vertical_pane_g1

0x0b79,	// (0x0003e8d9) small_slider_vertical_pane_g2

0x8835,	// (0x00046595) small_slider_vertical_pane_g3

0x0002,

0xf7d5,	// (0x0004d535) small_slider_vertical_pane_g

0x021e,	// (0x0003df7e) main_hwr_training_pane

0x883e,	// (0x0004659e) hwr_training_instruct_pane_ParamLimits

0x883e,	// (0x0004659e) hwr_training_instruct_pane

0x8860,	// (0x000465c0) hwr_training_navi_pane_ParamLimits

0x8860,	// (0x000465c0) hwr_training_navi_pane

0x887f,	// (0x000465df) hwr_training_write_pane_ParamLimits

0x887f,	// (0x000465df) hwr_training_write_pane

0x021e,	// (0x0003df7e) bg_frame_shadow_pane

0x88cf,	// (0x0004662f) hwr_training_write_pane_g1

0x88d7,	// (0x00046637) hwr_training_write_pane_g2

0x88df,	// (0x0004663f) hwr_training_write_pane_g3

0x88e7,	// (0x00046647) hwr_training_write_pane_g4

0x88ef,	// (0x0004664f) hwr_training_write_pane_g5

0x88f7,	// (0x00046657) hwr_training_write_pane_g6

0x88ff,	// (0x0004665f) hwr_training_write_pane_g7

0x0006,

0xf7dc,	// (0x0004d53c) hwr_training_write_pane_g

0xd05c,	// (0x0004adbc) hwr_training_navi_pane_g1_ParamLimits

0xd05c,	// (0x0004adbc) hwr_training_navi_pane_g1

0xd06e,	// (0x0004adce) hwr_training_navi_pane_g2_ParamLimits

0xd06e,	// (0x0004adce) hwr_training_navi_pane_g2

0xd080,	// (0x0004ade0) hwr_training_navi_pane_g3_ParamLimits

0xd080,	// (0x0004ade0) hwr_training_navi_pane_g3

0xd090,	// (0x0004adf0) hwr_training_navi_pane_g4_ParamLimits

0xd090,	// (0x0004adf0) hwr_training_navi_pane_g4

0x0004,

0xf7eb,	// (0x0004d54b) hwr_training_navi_pane_g_ParamLimits

0xf7eb,	// (0x0004d54b) hwr_training_navi_pane_g

0xd09d,	// (0x0004adfd) hwr_training_navi_pane_t1

0x8916,	// (0x00046676) list_single_hwr_training_instruct_pane_ParamLimits

0x8916,	// (0x00046676) list_single_hwr_training_instruct_pane

0x892c,	// (0x0004668c) list_single_hwr_training_instruct_pane_t1

0x736c,	// (0x000450cc) bg_frame_shadow_pane_g1

0x893b,	// (0x0004669b) bg_frame_shadow_pane_g2

0x8943,	// (0x000466a3) bg_frame_shadow_pane_g3

0x894b,	// (0x000466ab) bg_frame_shadow_pane_g4

0x8953,	// (0x000466b3) bg_frame_shadow_pane_g5

0x895b,	// (0x000466bb) bg_frame_shadow_pane_g6

0x8963,	// (0x000466c3) bg_frame_shadow_pane_g7

0x0a40,	// (0x0003e7a0) bg_frame_shadow_pane_g8

0x0007,

0xf7f6,	// (0x0004d556) bg_frame_shadow_pane_g

0x021e,	// (0x0003df7e) main_video_tele_dialer_pane

0x896b,	// (0x000466cb) aid_size_cell_video_keypad_ParamLimits

0x896b,	// (0x000466cb) aid_size_cell_video_keypad

0x8985,	// (0x000466e5) grid_video_dialer_keypad_pane_ParamLimits

0x8985,	// (0x000466e5) grid_video_dialer_keypad_pane

0x89d3,	// (0x00046733) video_down_pane_cp_ParamLimits

0x89d3,	// (0x00046733) video_down_pane_cp

0x8a05,	// (0x00046765) cell_video_dialer_keypad_pane_ParamLimits

0x8a05,	// (0x00046765) cell_video_dialer_keypad_pane

0x8a27,	// (0x00046787) bg_button_pane_cp08_ParamLimits

0x8a27,	// (0x00046787) bg_button_pane_cp08

0x8a33,	// (0x00046793) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8a33,	// (0x00046793) cell_video_dialer_keypad_pane_g1

0x7e34,	// (0x00045b94) mup3_rocker2_pane_ParamLimits

0x7e34,	// (0x00045b94) mup3_rocker2_pane

0x0b79,	// (0x0003e8d9) mup3_rocker2_pane_g1

0x6bd6,	// (0x00044936) main_dialer2_pane

0x021e,	// (0x0003df7e) main_mp4_pane

0xd0c9,	// (0x0004ae29) main_mp4_pane_g1_ParamLimits

0xd0c9,	// (0x0004ae29) main_mp4_pane_g1

0xd0c9,	// (0x0004ae29) main_mp4_pane_g2_ParamLimits

0xd0c9,	// (0x0004ae29) main_mp4_pane_g2

0x8a6d,	// (0x000467cd) main_mp4_pane_g3_ParamLimits

0x8a6d,	// (0x000467cd) main_mp4_pane_g3

0xd0d7,	// (0x0004ae37) main_mp4_pane_g4_ParamLimits

0xd0d7,	// (0x0004ae37) main_mp4_pane_g4

0xd105,	// (0x0004ae65) main_mp4_pane_g5_ParamLimits

0xd105,	// (0x0004ae65) main_mp4_pane_g5

0x0007,

0xf816,	// (0x0004d576) main_mp4_pane_g_ParamLimits

0xf816,	// (0x0004d576) main_mp4_pane_g

0xd179,	// (0x0004aed9) main_mp4_pane_t1_ParamLimits

0xd179,	// (0x0004aed9) main_mp4_pane_t1

0xd1d5,	// (0x0004af35) main_mp4_pane_t2_ParamLimits

0xd1d5,	// (0x0004af35) main_mp4_pane_t2

0x8aa9,	// (0x00046809) main_mp4_pane_t3_ParamLimits

0x8aa9,	// (0x00046809) main_mp4_pane_t3

0xd227,	// (0x0004af87) main_mp4_pane_t4_ParamLimits

0xd227,	// (0x0004af87) main_mp4_pane_t4

0x0003,

0xf827,	// (0x0004d587) main_mp4_pane_t_ParamLimits

0xf827,	// (0x0004d587) main_mp4_pane_t

0xd26b,	// (0x0004afcb) mp4_progress_pane_ParamLimits

0xd26b,	// (0x0004afcb) mp4_progress_pane

0xd2b5,	// (0x0004b015) mp4_rocker_pane_ParamLimits

0xd2b5,	// (0x0004b015) mp4_rocker_pane

0x8ad7,	// (0x00046837) mp4_progress_pane_t1

0x8af0,	// (0x00046850) mp4_progress_pane_t2

0x0001,

0xf830,	// (0x0004d590) mp4_progress_pane_t

0x8b09,	// (0x00046869) mup_progress_pane_cp04

0x0b79,	// (0x0003e8d9) mp4_rocker_pane_g1

0x8b1c,	// (0x0004687c) aid_cell_size_keypad2_ParamLimits

0x8b1c,	// (0x0004687c) aid_cell_size_keypad2

0x8b32,	// (0x00046892) dialer2_ne_pane_ParamLimits

0x8b32,	// (0x00046892) dialer2_ne_pane

0x8b4c,	// (0x000468ac) grid_dialer2_keypad_pane_ParamLimits

0x8b4c,	// (0x000468ac) grid_dialer2_keypad_pane

0x708d,	// (0x00044ded) bg_popup_call_pane_cp07_ParamLimits

0x708d,	// (0x00044ded) bg_popup_call_pane_cp07

0x8b68,	// (0x000468c8) dialer2_ne_pane_t1_ParamLimits

0x8b68,	// (0x000468c8) dialer2_ne_pane_t1

0x8bb6,	// (0x00046916) cell_dialer2_keypad_pane_ParamLimits

0x8bb6,	// (0x00046916) cell_dialer2_keypad_pane

0x8bd8,	// (0x00046938) bg_button_pane_pane_cp04_ParamLimits

0x8bd8,	// (0x00046938) bg_button_pane_pane_cp04

0x8be4,	// (0x00046944) cell_dialer2_keypad_pane_g1_ParamLimits

0x8be4,	// (0x00046944) cell_dialer2_keypad_pane_g1

0x4ed9,	// (0x00042c39) aid_placing_vt_set_content_ParamLimits

0x4ed9,	// (0x00042c39) aid_placing_vt_set_content

0x4f01,	// (0x00042c61) aid_placing_vt_set_title_ParamLimits

0x4f01,	// (0x00042c61) aid_placing_vt_set_title

0x021e,	// (0x0003df7e) main_image3_pane

0x8caa,	// (0x00046a0a) area_side_right_pane_cp01_ParamLimits

0x8caa,	// (0x00046a0a) area_side_right_pane_cp01

0xd0c9,	// (0x0004ae29) main_image3_pane_g1_ParamLimits

0xd0c9,	// (0x0004ae29) main_image3_pane_g1

0x8cc1,	// (0x00046a21) main_image3_pane_g2_ParamLimits

0x8cc1,	// (0x00046a21) main_image3_pane_g2

0x8ce9,	// (0x00046a49) main_image3_pane_g3_ParamLimits

0x8ce9,	// (0x00046a49) main_image3_pane_g3

0x8d13,	// (0x00046a73) main_image3_pane_g4_ParamLimits

0x8d13,	// (0x00046a73) main_image3_pane_g4

0x0003,

0xf83f,	// (0x0004d59f) main_image3_pane_g_ParamLimits

0xf83f,	// (0x0004d59f) main_image3_pane_g

0x8d3d,	// (0x00046a9d) main_image3_pane_t1_ParamLimits

0x8d3d,	// (0x00046a9d) main_image3_pane_t1

0x8d95,	// (0x00046af5) main_image3_pane_t2_ParamLimits

0x8d95,	// (0x00046af5) main_image3_pane_t2

0x8de7,	// (0x00046b47) main_image3_pane_t3_ParamLimits

0x8de7,	// (0x00046b47) main_image3_pane_t3

0x0003,

0xf848,	// (0x0004d5a8) main_image3_pane_t_ParamLimits

0xf848,	// (0x0004d5a8) main_image3_pane_t

0x08c6,	// (0x0003e626) grid_sctrl_middle_pane_cp01_ParamLimits

0x08c6,	// (0x0003e626) grid_sctrl_middle_pane_cp01

0x8e6f,	// (0x00046bcf) cell_sctrl_middle_pane_cp01_ParamLimits

0x8e6f,	// (0x00046bcf) cell_sctrl_middle_pane_cp01

0x8e8c,	// (0x00046bec) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8e8c,	// (0x00046bec) cell_sctrl_middle_pane_cp01_g1

0x021e,	// (0x0003df7e) main_call4_pane

0x8ea2,	// (0x00046c02) aid_size_button_call4_ParamLimits

0x8ea2,	// (0x00046c02) aid_size_button_call4

0x8ed5,	// (0x00046c35) call4_windows_pane_ParamLimits

0x8ed5,	// (0x00046c35) call4_windows_pane

0x8ef4,	// (0x00046c54) grid_call4_button_pane_ParamLimits

0x8ef4,	// (0x00046c54) grid_call4_button_pane

0x8f27,	// (0x00046c87) call4_windows_conf_pane

0x8f3c,	// (0x00046c9c) popup_call4_audio_first_window_ParamLimits

0x8f3c,	// (0x00046c9c) popup_call4_audio_first_window

0x8f8c,	// (0x00046cec) popup_call4_audio_second_window_ParamLimits

0x8f8c,	// (0x00046cec) popup_call4_audio_second_window

0x8fa3,	// (0x00046d03) popup_call4_audio_wait_window_ParamLimits

0x8fa3,	// (0x00046d03) popup_call4_audio_wait_window

0x8fb1,	// (0x00046d11) cell_call4_button_pane_ParamLimits

0x8fb1,	// (0x00046d11) cell_call4_button_pane

0x8fd6,	// (0x00046d36) bg_button_pane_cp09_ParamLimits

0x8fd6,	// (0x00046d36) bg_button_pane_cp09

0x8fe2,	// (0x00046d42) cell_call4_button_pane_g1_ParamLimits

0x8fe2,	// (0x00046d42) cell_call4_button_pane_g1

0x9008,	// (0x00046d68) cell_call4_button_pane_t1_ParamLimits

0x9008,	// (0x00046d68) cell_call4_button_pane_t1

0x903a,	// (0x00046d9a) popup_call4_audio_conf_window_ParamLimits

0x903a,	// (0x00046d9a) popup_call4_audio_conf_window

0x7e9c,	// (0x00045bfc) mup3_progress_pane_t1_ParamLimits

0x7ebb,	// (0x00045c1b) mup3_progress_pane_t2_ParamLimits

0x7eda,	// (0x00045c3a) mup3_progress_pane_t3_ParamLimits

0xf71d,	// (0x0004d47d) mup3_progress_pane_t_ParamLimits

0x7ef7,	// (0x00045c57) mup_progress_pane_cp03_ParamLimits

0x86a8,	// (0x00046408) mup3_control_keys_pane_g4_copy1

0xd299,	// (0x0004aff9) mp4_rocker2_pane_ParamLimits

0xd299,	// (0x0004aff9) mp4_rocker2_pane

0x904e,	// (0x00046dae) mp4_rocker2_pane_g1

0x9056,	// (0x00046db6) mp4_rocker2_pane_g2

0xd339,	// (0x0004b099) mp4_rocker2_pane_g3

0xd341,	// (0x0004b0a1) mp4_rocker2_pane_g4

0xd349,	// (0x0004b0a9) mp4_rocker2_pane_g5

0x0004,

0xf851,	// (0x0004d5b1) mp4_rocker2_pane_g

0x021e,	// (0x0003df7e) main_camera4_pane

0x021e,	// (0x0003df7e) main_video4_pane

0x89a1,	// (0x00046701) main_video_tele_dialer_pane_t1_ParamLimits

0x89a1,	// (0x00046701) main_video_tele_dialer_pane_t1

0x89ba,	// (0x0004671a) main_video_tele_dialer_pane_t2_ParamLimits

0x89ba,	// (0x0004671a) main_video_tele_dialer_pane_t2

0x0001,

0xf807,	// (0x0004d567) main_video_tele_dialer_pane_t_ParamLimits

0xf807,	// (0x0004d567) main_video_tele_dialer_pane_t

0x9076,	// (0x00046dd6) cam4_autofocus_pane_ParamLimits

0x9076,	// (0x00046dd6) cam4_autofocus_pane

0x908c,	// (0x00046dec) cam4_image_uncrop_pane_ParamLimits

0x908c,	// (0x00046dec) cam4_image_uncrop_pane

0x90a6,	// (0x00046e06) cam4_indicators_pane_ParamLimits

0x90a6,	// (0x00046e06) cam4_indicators_pane

0x90d1,	// (0x00046e31) main_camera4_pane_g1_ParamLimits

0x90d1,	// (0x00046e31) main_camera4_pane_g1

0x90e3,	// (0x00046e43) main_camera4_pane_g2_ParamLimits

0x90e3,	// (0x00046e43) main_camera4_pane_g2

0x90f6,	// (0x00046e56) main_camera4_pane_g3_ParamLimits

0x90f6,	// (0x00046e56) main_camera4_pane_g3

0x9109,	// (0x00046e69) main_camera4_pane_g4_ParamLimits

0x9109,	// (0x00046e69) main_camera4_pane_g4

0x911c,	// (0x00046e7c) main_camera4_pane_g5_ParamLimits

0x911c,	// (0x00046e7c) main_camera4_pane_g5

0x0005,

0xf85c,	// (0x0004d5bc) main_camera4_pane_g_ParamLimits

0xf85c,	// (0x0004d5bc) main_camera4_pane_g

0x9140,	// (0x00046ea0) main_camera4_pane_t1_ParamLimits

0x9140,	// (0x00046ea0) main_camera4_pane_t1

0x091f,	// (0x0003e67f) bg_tb_trans_pane_cp06

0xd375,	// (0x0004b0d5) cam4_indicators_pane_g1

0xd386,	// (0x0004b0e6) cam4_indicators_pane_g2

0x0002,

0xf877,	// (0x0004d5d7) cam4_indicators_pane_g

0xd39e,	// (0x0004b0fe) cam4_indicators_pane_t1

0x91b6,	// (0x00046f16) main_video4_pane_g1_ParamLimits

0x91b6,	// (0x00046f16) main_video4_pane_g1

0x91c5,	// (0x00046f25) main_video4_pane_g2_ParamLimits

0x91c5,	// (0x00046f25) main_video4_pane_g2

0x91d4,	// (0x00046f34) main_video4_pane_g3_ParamLimits

0x91d4,	// (0x00046f34) main_video4_pane_g3

0x91e3,	// (0x00046f43) main_video4_pane_g4_ParamLimits

0x91e3,	// (0x00046f43) main_video4_pane_g4

0x0004,

0xf87e,	// (0x0004d5de) main_video4_pane_g_ParamLimits

0xf87e,	// (0x0004d5de) main_video4_pane_g

0x9201,	// (0x00046f61) vid4_indicators_pane_ParamLimits

0x9201,	// (0x00046f61) vid4_indicators_pane

0x922f,	// (0x00046f8f) video4_image_uncrop_cif_pane_ParamLimits

0x922f,	// (0x00046f8f) video4_image_uncrop_cif_pane

0x9249,	// (0x00046fa9) video4_image_uncrop_nhd_pane_ParamLimits

0x9249,	// (0x00046fa9) video4_image_uncrop_nhd_pane

0x908c,	// (0x00046dec) video4_image_uncrop_vga_pane_ParamLimits

0x908c,	// (0x00046dec) video4_image_uncrop_vga_pane

0x08c6,	// (0x0003e626) bg_tb_trans_pane_cp07

0xd3c8,	// (0x0004b128) vid4_indicators_pane_g1

0xd3dc,	// (0x0004b13c) vid4_indicators_pane_g2

0xd3f0,	// (0x0004b150) vid4_indicators_pane_g3

0x0004,

0xf889,	// (0x0004d5e9) vid4_indicators_pane_g

0xd41d,	// (0x0004b17d) vid4_indicators_pane_t1

0x925d,	// (0x00046fbd) cam4_autofocus_pane_g1

0x9265,	// (0x00046fc5) cam4_autofocus_pane_g2

0x926d,	// (0x00046fcd) cam4_autofocus_pane_g3

0x0002,

0xf894,	// (0x0004d5f4) cam4_autofocus_pane_g

0x9275,	// (0x00046fd5) cam4_autofocus_pane_g3_copy1

0x89e9,	// (0x00046749) video_down_pane_cp_t1

0x89f7,	// (0x00046757) video_down_pane_cp_t2

0x0001,

0xf80c,	// (0x0004d56c) video_down_pane_cp_t

0x08c6,	// (0x0003e626) popup_vitu2_window_ParamLimits

0x08c6,	// (0x0003e626) popup_vitu2_window

0x927d,	// (0x00046fdd) aid_size_cell2_itu2_ParamLimits

0x927d,	// (0x00046fdd) aid_size_cell2_itu2

0x92a3,	// (0x00047003) aid_size_cell_itu2_ParamLimits

0x92a3,	// (0x00047003) aid_size_cell_itu2

0x801d,	// (0x00045d7d) bg_popup_window_pane_cp09_ParamLimits

0x801d,	// (0x00045d7d) bg_popup_window_pane_cp09

0x92ff,	// (0x0004705f) field_vitu2_entry_pane_ParamLimits

0x92ff,	// (0x0004705f) field_vitu2_entry_pane

0x9325,	// (0x00047085) grid_vitu2_function_pane_ParamLimits

0x9325,	// (0x00047085) grid_vitu2_function_pane

0x9376,	// (0x000470d6) grid_vitu2_itu_pane_ParamLimits

0x9376,	// (0x000470d6) grid_vitu2_itu_pane

0x940c,	// (0x0004716c) cell_vitu2_itu_pane_ParamLimits

0x940c,	// (0x0004716c) cell_vitu2_itu_pane

0x9438,	// (0x00047198) cell_vitu2_function_pane_ParamLimits

0x9438,	// (0x00047198) cell_vitu2_function_pane

0x9477,	// (0x000471d7) bg_popup_call_pane_cp08_ParamLimits

0x9477,	// (0x000471d7) bg_popup_call_pane_cp08

0x948e,	// (0x000471ee) field_vitu2_entry_pane_g1

0x949a,	// (0x000471fa) field_vitu2_entry_pane_g2

0x0002,

0xf89b,	// (0x0004d5fb) field_vitu2_entry_pane_g

0x3997,	// (0x000416f7) field_vitu2_entry_pane_t1_ParamLimits

0x3997,	// (0x000416f7) field_vitu2_entry_pane_t1

0xd434,	// (0x0004b194) field_vitu2_entry_pane_t2_ParamLimits

0xd434,	// (0x0004b194) field_vitu2_entry_pane_t2

0x0001,

0xf8a2,	// (0x0004d602) field_vitu2_entry_pane_t_ParamLimits

0xf8a2,	// (0x0004d602) field_vitu2_entry_pane_t

0x94ae,	// (0x0004720e) bg_button_pane_cp010_ParamLimits

0x94ae,	// (0x0004720e) bg_button_pane_cp010

0x94bc,	// (0x0004721c) cell_vitu2_itu_pane_g1

0x94e2,	// (0x00047242) cell_vitu2_itu_pane_t1_ParamLimits

0x94e2,	// (0x00047242) cell_vitu2_itu_pane_t1

0x39c9,	// (0x00041729) cell_vitu2_itu_pane_t2_ParamLimits

0x39c9,	// (0x00041729) cell_vitu2_itu_pane_t2

0x0002,

0xf8ac,	// (0x0004d60c) cell_vitu2_itu_pane_t_ParamLimits

0xf8ac,	// (0x0004d60c) cell_vitu2_itu_pane_t

0x08c6,	// (0x0003e626) bg_button_pane_cp011

0x9540,	// (0x000472a0) cell_vitu2_function_pane_g1

0x021e,	// (0x0003df7e) main_myfav_hc_pane

0x8e37,	// (0x00046b97) popup_image3_note_pane_ParamLimits

0x8e37,	// (0x00046b97) popup_image3_note_pane

0x8e53,	// (0x00046bb3) popup_image3_tool_bar_pane_ParamLimits

0x8e53,	// (0x00046bb3) popup_image3_tool_bar_pane

0x3a57,	// (0x000417b7) cell_vitu2_itu_pane_t3_ParamLimits

0x3a57,	// (0x000417b7) cell_vitu2_itu_pane_t3

0x021e,	// (0x0003df7e) bg_popup_trans_pane

0x9553,	// (0x000472b3) grid_image3_tool_bar_pane

0x955d,	// (0x000472bd) bg_popup_trans_pane_g1

0x0d9e,	// (0x0003eafe) bg_popup_trans_pane_g2

0x9565,	// (0x000472c5) bg_popup_trans_pane_g3

0x956d,	// (0x000472cd) bg_popup_trans_pane_g4

0x9575,	// (0x000472d5) bg_popup_trans_pane_g5

0x957d,	// (0x000472dd) bg_popup_trans_pane_g6

0x9585,	// (0x000472e5) bg_popup_trans_pane_g7

0x958d,	// (0x000472ed) bg_popup_trans_pane_g8

0x0d7e,	// (0x0003eade) bg_popup_trans_pane_g9

0x0008,

0xf8b3,	// (0x0004d613) bg_popup_trans_pane_g

0x9595,	// (0x000472f5) cell_image3_tool_bar_pane_ParamLimits

0x9595,	// (0x000472f5) cell_image3_tool_bar_pane

0x0b79,	// (0x0003e8d9) cell_image3_tool_bar_pane_g1

0x021e,	// (0x0003df7e) bg_popup_trans_pane_cp1

0x95a9,	// (0x00047309) popup_image3_note_pane_t1

0x95b7,	// (0x00047317) popup_image3_note_pane_t2

0x95c5,	// (0x00047325) popup_image3_note_pane_t3

0x0002,

0xf8c6,	// (0x0004d626) popup_image3_note_pane_t

0x95d3,	// (0x00047333) popup_image3_note_pane_t3_copy1

0x95e1,	// (0x00047341) bg_myfav_hc_instruction_pane_ParamLimits

0x95e1,	// (0x00047341) bg_myfav_hc_instruction_pane

0x95f5,	// (0x00047355) cell_myfav_contact_pane_ParamLimits

0x95f5,	// (0x00047355) cell_myfav_contact_pane

0x9613,	// (0x00047373) cell_myfav_contact_pane_cp1_ParamLimits

0x9613,	// (0x00047373) cell_myfav_contact_pane_cp1

0x962b,	// (0x0004738b) cell_myfav_contact_pane_cp2_ParamLimits

0x962b,	// (0x0004738b) cell_myfav_contact_pane_cp2

0x9643,	// (0x000473a3) cell_myfav_contact_pane_cp3_ParamLimits

0x9643,	// (0x000473a3) cell_myfav_contact_pane_cp3

0x965a,	// (0x000473ba) cell_myfav_contact_pane_cp4_ParamLimits

0x965a,	// (0x000473ba) cell_myfav_contact_pane_cp4

0x9672,	// (0x000473d2) cell_myfav_contact_pane_cp5_ParamLimits

0x9672,	// (0x000473d2) cell_myfav_contact_pane_cp5

0x9686,	// (0x000473e6) cell_myfav_contact_pane_cp6_ParamLimits

0x9686,	// (0x000473e6) cell_myfav_contact_pane_cp6

0x969c,	// (0x000473fc) cell_myfav_contact_pane_cp7_ParamLimits

0x969c,	// (0x000473fc) cell_myfav_contact_pane_cp7

0x96b6,	// (0x00047416) listscroll_gen_pane_cp05

0x96bf,	// (0x0004741f) main_myfav_hc_pane_g1_ParamLimits

0x96bf,	// (0x0004741f) main_myfav_hc_pane_g1

0x96d9,	// (0x00047439) main_myfav_hc_pane_g2_ParamLimits

0x96d9,	// (0x00047439) main_myfav_hc_pane_g2

0x0002,

0xf8cd,	// (0x0004d62d) main_myfav_hc_pane_g_ParamLimits

0xf8cd,	// (0x0004d62d) main_myfav_hc_pane_g

0x970b,	// (0x0004746b) main_myfav_hc_pane_t1_ParamLimits

0x970b,	// (0x0004746b) main_myfav_hc_pane_t1

0x9722,	// (0x00047482) main_myfav_hc_pane_t2_ParamLimits

0x9722,	// (0x00047482) main_myfav_hc_pane_t2

0x9734,	// (0x00047494) main_myfav_hc_pane_t3_ParamLimits

0x9734,	// (0x00047494) main_myfav_hc_pane_t3

0x9746,	// (0x000474a6) main_myfav_hc_pane_t4_ParamLimits

0x9746,	// (0x000474a6) main_myfav_hc_pane_t4

0x0004,

0xf8d4,	// (0x0004d634) main_myfav_hc_pane_t_ParamLimits

0xf8d4,	// (0x0004d634) main_myfav_hc_pane_t

0x0b79,	// (0x0003e8d9) bg_myfav_hc_instruction_pane_g1

0x976e,	// (0x000474ce) cell_myfav_contact_pane_g1_ParamLimits

0x976e,	// (0x000474ce) cell_myfav_contact_pane_g1

0x976e,	// (0x000474ce) cell_myfav_contact_pane_g2_ParamLimits

0x976e,	// (0x000474ce) cell_myfav_contact_pane_g2

0x977a,	// (0x000474da) cell_myfav_contact_pane_g3_ParamLimits

0x977a,	// (0x000474da) cell_myfav_contact_pane_g3

0x092d,	// (0x0003e68d) cell_myfav_contact_pane_g4_ParamLimits

0x092d,	// (0x0003e68d) cell_myfav_contact_pane_g4

0x9787,	// (0x000474e7) cell_myfav_contact_pane_g5_ParamLimits

0x9787,	// (0x000474e7) cell_myfav_contact_pane_g5

0x0004,

0xf8df,	// (0x0004d63f) cell_myfav_contact_pane_g_ParamLimits

0xf8df,	// (0x0004d63f) cell_myfav_contact_pane_g

0x96f3,	// (0x00047453) main_myfav_hc_pane_g3_ParamLimits

0x96f3,	// (0x00047453) main_myfav_hc_pane_g3

0x4290,	// (0x00041ff0) popup_adpt_find_window

0x9793,	// (0x000474f3) afind_page_pane_ParamLimits

0x9793,	// (0x000474f3) afind_page_pane

0x97a8,	// (0x00047508) aid_size_cell_afind_ParamLimits

0x97a8,	// (0x00047508) aid_size_cell_afind

0x97c6,	// (0x00047526) bg_popup_sub_pane_cp09_ParamLimits

0x97c6,	// (0x00047526) bg_popup_sub_pane_cp09

0x97d3,	// (0x00047533) find_pane_cp01_ParamLimits

0x97d3,	// (0x00047533) find_pane_cp01

0x97e0,	// (0x00047540) grid_afind_control_pane_ParamLimits

0x97e0,	// (0x00047540) grid_afind_control_pane

0x97f4,	// (0x00047554) grid_afind_pane_ParamLimits

0x97f4,	// (0x00047554) grid_afind_pane

0x9813,	// (0x00047573) cell_afind_pane_ParamLimits

0x9813,	// (0x00047573) cell_afind_pane

0x0b79,	// (0x0003e8d9) afind_page_pane_g1

0x987a,	// (0x000475da) afind_page_pane_g2

0x9883,	// (0x000475e3) afind_page_pane_g3

0x0002,

0xf8ea,	// (0x0004d64a) afind_page_pane_g

0x988c,	// (0x000475ec) afind_page_pane_t1

0x98ac,	// (0x0004760c) cell_afind_grid_control_pane_ParamLimits

0x98ac,	// (0x0004760c) cell_afind_grid_control_pane

0x8bd8,	// (0x00046938) bg_button_pane_cp69_ParamLimits

0x8bd8,	// (0x00046938) bg_button_pane_cp69

0x98bb,	// (0x0004761b) cell_afind_pane_g1_ParamLimits

0x98bb,	// (0x0004761b) cell_afind_pane_g1

0x98c8,	// (0x00047628) cell_afind_pane_t1_ParamLimits

0x98c8,	// (0x00047628) cell_afind_pane_t1

0x0b83,	// (0x0003e8e3) bg_button_pane_cp72

0x98da,	// (0x0004763a) cell_afind_grid_control_pane_g1

0x6654,	// (0x000443b4) aid_image_placing_area_ParamLimits

0x6654,	// (0x000443b4) aid_image_placing_area

0x091f,	// (0x0003e67f) field_vitu_entry_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) field_vitu_entry_pane_g1

0x091f,	// (0x0003e67f) field_vitu_entry_pane_g2_ParamLimits

0x091f,	// (0x0003e67f) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0004cf47) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0004cf47) field_vitu_entry_pane_g

0x86cd,	// (0x0004642d) cell_vitu_itu_pane_g1_ParamLimits

0x86b0,	// (0x00046410) cell_vitu_itu_pane_t3_ParamLimits

0x86b0,	// (0x00046410) cell_vitu_itu_pane_t3

0x8ad7,	// (0x00046837) mp4_progress_pane_t1_ParamLimits

0x8af0,	// (0x00046850) mp4_progress_pane_t2_ParamLimits

0xf830,	// (0x0004d590) mp4_progress_pane_t_ParamLimits

0x8b09,	// (0x00046869) mup_progress_pane_cp04_ParamLimits

0x975a,	// (0x000474ba) main_myfav_hc_pane_t5_ParamLimits

0x975a,	// (0x000474ba) main_myfav_hc_pane_t5

0xccba,	// (0x0004aa1a) aid_zoom_text_primary

0x4290,	// (0x00041ff0) popup_adpt_find_window_ParamLimits

0x08c6,	// (0x0003e626) main_cam_set_pane

0x90bd,	// (0x00046e1d) cam4_zoom_pane_ParamLimits

0x90bd,	// (0x00046e1d) cam4_zoom_pane

0x98e3,	// (0x00047643) main_cam_set_pane_g1_ParamLimits

0x98e3,	// (0x00047643) main_cam_set_pane_g1

0x98f1,	// (0x00047651) main_cam_set_pane_g2_ParamLimits

0x98f1,	// (0x00047651) main_cam_set_pane_g2

0x0001,

0xf8f1,	// (0x0004d651) main_cam_set_pane_g_ParamLimits

0xf8f1,	// (0x0004d651) main_cam_set_pane_g

0x9912,	// (0x00047672) main_cam_set_pane_t1_ParamLimits

0x9912,	// (0x00047672) main_cam_set_pane_t1

0x992d,	// (0x0004768d) main_cset_listscroll_pane_ParamLimits

0x992d,	// (0x0004768d) main_cset_listscroll_pane

0x9953,	// (0x000476b3) main_cset_slider_pane_ParamLimits

0x9953,	// (0x000476b3) main_cset_slider_pane

0x9981,	// (0x000476e1) main_cset_list_pane_ParamLimits

0x9981,	// (0x000476e1) main_cset_list_pane

0x9991,	// (0x000476f1) scroll_pane_cp028

0x999a,	// (0x000476fa) aid_area_touch_slider

0x99b6,	// (0x00047716) cset_slider_pane

0x99d9,	// (0x00047739) main_cset_slider_pane_g1

0x99ee,	// (0x0004774e) main_cset_slider_pane_g2

0x0011,

0xf8f6,	// (0x0004d656) main_cset_slider_pane_g

0x9ada,	// (0x0004783a) main_cset_slider_pane_t1

0x9b02,	// (0x00047862) main_cset_slider_pane_t2

0x9b1c,	// (0x0004787c) main_cset_slider_pane_t3

0x9b36,	// (0x00047896) main_cset_slider_pane_t4

0x9b50,	// (0x000478b0) main_cset_slider_pane_t5

0x9b6a,	// (0x000478ca) main_cset_slider_pane_t6

0x9b7f,	// (0x000478df) main_cset_slider_pane_t7

0x000e,

0xf91b,	// (0x0004d67b) main_cset_slider_pane_t

0x9cf5,	// (0x00047a55) cset_list_set_pane_ParamLimits

0x9cf5,	// (0x00047a55) cset_list_set_pane

0x9d07,	// (0x00047a67) aid_position_infowindow_above

0x9d0f,	// (0x00047a6f) aid_position_infowindow_below

0x3ab5,	// (0x00041815) cset_list_set_pane_g1_ParamLimits

0x3ab5,	// (0x00041815) cset_list_set_pane_g1

0x3ac1,	// (0x00041821) cset_list_set_pane_g3_ParamLimits

0x3ac1,	// (0x00041821) cset_list_set_pane_g3

0x0001,

0xf93a,	// (0x0004d69a) cset_list_set_pane_g_ParamLimits

0xf93a,	// (0x0004d69a) cset_list_set_pane_g

0x3ad0,	// (0x00041830) cset_list_set_pane_t1_ParamLimits

0x3ad0,	// (0x00041830) cset_list_set_pane_t1

0x08c6,	// (0x0003e626) list_highlight_pane_cp021_ParamLimits

0x08c6,	// (0x0003e626) list_highlight_pane_cp021

0x169f,	// (0x0003f3ff) cset_slider_pane_g1

0x16b1,	// (0x0003f411) cset_slider_pane_g2

0x16a8,	// (0x0003f408) cset_slider_pane_g3

0x0002,

0xf93f,	// (0x0004d69f) cset_slider_pane_g

0xd451,	// (0x0004b1b1) aid_area_touch_cam4_zoom

0xd459,	// (0x0004b1b9) cam4_zoom_cont_pane

0xd461,	// (0x0004b1c1) cam4_zoom_pane_g1

0xd469,	// (0x0004b1c9) cam4_zoom_pane_g2

0x9d17,	// (0x00047a77) cam4_zoom_pane_g3

0x0002,

0xf946,	// (0x0004d6a6) cam4_zoom_pane_g

0x8835,	// (0x00046595) cam4_zoom_cont_pane_g1

0xd471,	// (0x0004b1d1) cam4_zoom_cont_pane_g2

0xd47a,	// (0x0004b1da) cam4_zoom_cont_pane_g3

0x0002,

0xf94d,	// (0x0004d6ad) cam4_zoom_cont_pane_g

0x8ec0,	// (0x00046c20) call4_image_pane_ParamLimits

0x8ec0,	// (0x00046c20) call4_image_pane

0x8f27,	// (0x00046c87) call4_windows_conf_pane_ParamLimits

0x8f6a,	// (0x00046cca) popup_call4_audio_in_window_ParamLimits

0x8f6a,	// (0x00046cca) popup_call4_audio_in_window

0x021e,	// (0x0003df7e) bg_popup_call2_act_pane_cp02

0x9032,	// (0x00046d92) call4_list_conf_pane

0x0b79,	// (0x0003e8d9) call4_image_pane_g1

0x0b79,	// (0x0003e8d9) call4_image_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) call4_image_pane_g

0x9d1f,	// (0x00047a7f) list_single_graphic_popup_conf4_pane_ParamLimits

0x9d1f,	// (0x00047a7f) list_single_graphic_popup_conf4_pane

0x021e,	// (0x0003df7e) list_highlight_pane_cp022

0x9d32,	// (0x00047a92) list_single_graphic_popup_conf4_pane_g1

0x12be,	// (0x0003f01e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf954,	// (0x0004d6b4) list_single_graphic_popup_conf4_pane_g

0x9d3a,	// (0x00047a9a) list_single_graphic_popup_conf4_pane_t1

0x5025,	// (0x00042d85) popup_vtel_slider_window_ParamLimits

0x5025,	// (0x00042d85) popup_vtel_slider_window

0x8ba4,	// (0x00046904) dialer2_ne_pane_t2_ParamLimits

0x8ba4,	// (0x00046904) dialer2_ne_pane_t2

0x0001,

0xf835,	// (0x0004d595) dialer2_ne_pane_t_ParamLimits

0xf835,	// (0x0004d595) dialer2_ne_pane_t

0x708d,	// (0x00044ded) bg_popup_sub_pane_cp010_ParamLimits

0x708d,	// (0x00044ded) bg_popup_sub_pane_cp010

0x9d50,	// (0x00047ab0) popup_vtel_slider_window_g1_ParamLimits

0x9d50,	// (0x00047ab0) popup_vtel_slider_window_g1

0x9d63,	// (0x00047ac3) popup_vtel_slider_window_g2_ParamLimits

0x9d63,	// (0x00047ac3) popup_vtel_slider_window_g2

0x0003,

0xf959,	// (0x0004d6b9) popup_vtel_slider_window_g_ParamLimits

0xf959,	// (0x0004d6b9) popup_vtel_slider_window_g

0x9db9,	// (0x00047b19) vtel_slider_pane_ParamLimits

0x9db9,	// (0x00047b19) vtel_slider_pane

0x9ddb,	// (0x00047b3b) vtel_slider_pane_g1_ParamLimits

0x9ddb,	// (0x00047b3b) vtel_slider_pane_g1

0x9def,	// (0x00047b4f) vtel_slider_pane_g2_ParamLimits

0x9def,	// (0x00047b4f) vtel_slider_pane_g2

0x9e07,	// (0x00047b67) vtel_slider_pane_g3_ParamLimits

0x9e07,	// (0x00047b67) vtel_slider_pane_g3

0x9ddb,	// (0x00047b3b) vtel_slider_pane_g4_ParamLimits

0x9ddb,	// (0x00047b3b) vtel_slider_pane_g4

0x9e1d,	// (0x00047b7d) vtel_slider_pane_g5_ParamLimits

0x9e1d,	// (0x00047b7d) vtel_slider_pane_g5

0x0004,

0xf962,	// (0x0004d6c2) vtel_slider_pane_g_ParamLimits

0xf962,	// (0x0004d6c2) vtel_slider_pane_g

0x08c6,	// (0x0003e626) main_gallery2_pane

0x92cf,	// (0x0004702f) aid_size_row_itut2_dropdow_list_ParamLimits

0x92cf,	// (0x0004702f) aid_size_row_itut2_dropdow_list

0x934d,	// (0x000470ad) grid_vitu2_function_top_pane_ParamLimits

0x934d,	// (0x000470ad) grid_vitu2_function_top_pane

0x93b7,	// (0x00047117) popup_vitu2_dropdown_list_window_ParamLimits

0x93b7,	// (0x00047117) popup_vitu2_dropdown_list_window

0x93de,	// (0x0004713e) popup_vitu2_match_list_window

0x9e33,	// (0x00047b93) cell_vitu2_function_top_pane_ParamLimits

0x9e33,	// (0x00047b93) cell_vitu2_function_top_pane

0x9e4b,	// (0x00047bab) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9e4b,	// (0x00047bab) cell_vitu2_function_top_pane_cp01

0x9e67,	// (0x00047bc7) cell_vitu2_function_top_wide_pane_ParamLimits

0x9e67,	// (0x00047bc7) cell_vitu2_function_top_wide_pane

0x08c6,	// (0x0003e626) bg_button_pane_cp012

0x9e85,	// (0x00047be5) cell_vitu2_function_top_pane_g1

0xd483,	// (0x0004b1e3) bg_button_pane_cp013_ParamLimits

0xd483,	// (0x0004b1e3) bg_button_pane_cp013

0x9e99,	// (0x00047bf9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9e99,	// (0x00047bf9) cell_vitu2_function_top_wide_pane_g1

0x08c6,	// (0x0003e626) bg_popup_sub_pane_cp20

0x9eb1,	// (0x00047c11) list_vitu2_match_list_pane

0x955d,	// (0x000472bd) bg_popup_sub_pane_cp20_g1

0x9565,	// (0x000472c5) bg_popup_sub_pane_cp20_g2

0x0d9e,	// (0x0003eafe) bg_popup_sub_pane_cp20_g3

0x956d,	// (0x000472cd) bg_popup_sub_pane_cp20_g4

0x0d7e,	// (0x0003eade) bg_popup_sub_pane_cp20_g5

0x9ec9,	// (0x00047c29) bg_popup_sub_pane_cp20_g6

0x957d,	// (0x000472dd) bg_popup_sub_pane_cp20_g7

0x9585,	// (0x000472e5) bg_popup_sub_pane_cp20_g8

0x958d,	// (0x000472ed) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96d,	// (0x0004d6cd) bg_popup_sub_pane_cp20_g

0xd49f,	// (0x0004b1ff) list_vitu2_match_list_item_pane_ParamLimits

0xd49f,	// (0x0004b1ff) list_vitu2_match_list_item_pane

0xd4b1,	// (0x0004b211) list_vitu2_match_list_item_pane_t1

0x021e,	// (0x0003df7e) bg_popup_sub_pane_cp21

0x0b43,	// (0x0003e8a3) grid_vitu2_dropdown_list_pane

0x9ed1,	// (0x00047c31) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9ed1,	// (0x00047c31) cell_vitu2_dropdown_list_char_pane

0x9ef1,	// (0x00047c51) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9ef1,	// (0x00047c51) cell_vitu2_dropdown_list_ctrl_pane

0x9f19,	// (0x00047c79) cell_vitu2_dropdown_list_char_pane_g1

0x9f22,	// (0x00047c82) cell_vitu2_dropdown_list_char_pane_g2

0x9f2b,	// (0x00047c8b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf980,	// (0x0004d6e0) cell_vitu2_dropdown_list_char_pane_g

0x9f34,	// (0x00047c94) cell_vitu2_dropdown_list_char_pane_t1

0x9f42,	// (0x00047ca2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9f42,	// (0x00047ca2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9f4f,	// (0x00047caf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9f4f,	// (0x00047caf) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9f5c,	// (0x00047cbc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9f5c,	// (0x00047cbc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9f69,	// (0x00047cc9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9f69,	// (0x00047cc9) cell_vitu2_dropdown_list_ctrl_pane_g4

0x091f,	// (0x0003e67f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x091f,	// (0x0003e67f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf987,	// (0x0004d6e7) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf987,	// (0x0004d6e7) cell_vitu2_dropdown_list_ctrl_pane_g

0x9f85,	// (0x00047ce5) aid_size_cell_gallery2_ParamLimits

0x9f85,	// (0x00047ce5) aid_size_cell_gallery2

0x9fa3,	// (0x00047d03) grid_gallery2_pane_ParamLimits

0x9fa3,	// (0x00047d03) grid_gallery2_pane

0x9fbd,	// (0x00047d1d) scroll_pane_cp029_ParamLimits

0x9fbd,	// (0x00047d1d) scroll_pane_cp029

0x9fce,	// (0x00047d2e) cell_gallery2_pane_ParamLimits

0x9fce,	// (0x00047d2e) cell_gallery2_pane

0xa02d,	// (0x00047d8d) cell_gallery2_pane_g2

0xa035,	// (0x00047d95) cell_gallery2_pane_g3

0xa03d,	// (0x00047d9d) cell_gallery2_pane_g4

0xa045,	// (0x00047da5) cell_gallery2_pane_g5

0x0b43,	// (0x0003e8a3) grid_highlight_pane_cp10

0x93de,	// (0x0004713e) popup_vitu2_match_list_window_ParamLimits

0x93f3,	// (0x00047153) popup_vitu2_query_window_ParamLimits

0x93f3,	// (0x00047153) popup_vitu2_query_window

0x021e,	// (0x0003df7e) bg_vitu2_candi_button_pane

0x9f19,	// (0x00047c79) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x9f22,	// (0x00047c82) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x9f2b,	// (0x00047c8b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3ae5,	// (0x00041845) bg_button_pane_cp015

0xa04d,	// (0x00047dad) bg_button_pane_cp016

0xa059,	// (0x00047db9) bg_button_pane_cp017

0x21e8,	// (0x0003ff48) bg_popup_sub_pane_cp22

0xa074,	// (0x00047dd4) popup_vitu2_query_window_g1

0x3b19,	// (0x00041879) popup_vitu2_query_window_g2

0x0002,

0xf992,	// (0x0004d6f2) popup_vitu2_query_window_g

0x3b2f,	// (0x0004188f) popup_vitu2_query_window_t1_ParamLimits

0x3b2f,	// (0x0004188f) popup_vitu2_query_window_t1

0x3b62,	// (0x000418c2) popup_vitu2_query_window_t2_ParamLimits

0x3b62,	// (0x000418c2) popup_vitu2_query_window_t2

0x3b74,	// (0x000418d4) popup_vitu2_query_window_t3_ParamLimits

0x3b74,	// (0x000418d4) popup_vitu2_query_window_t3

0xa08c,	// (0x00047dec) popup_vitu2_query_window_t4_ParamLimits

0xa08c,	// (0x00047dec) popup_vitu2_query_window_t4

0xa0a0,	// (0x00047e00) popup_vitu2_query_window_t5_ParamLimits

0xa0a0,	// (0x00047e00) popup_vitu2_query_window_t5

0x0006,

0xf999,	// (0x0004d6f9) popup_vitu2_query_window_t_ParamLimits

0xf999,	// (0x0004d6f9) popup_vitu2_query_window_t

0x9979,	// (0x000476d9) main_cset_text_pane

0x999a,	// (0x000476fa) aid_area_touch_slider_ParamLimits

0x99b6,	// (0x00047716) cset_slider_pane_ParamLimits

0x99d9,	// (0x00047739) main_cset_slider_pane_g1_ParamLimits

0x99ee,	// (0x0004774e) main_cset_slider_pane_g2_ParamLimits

0x9a03,	// (0x00047763) main_cset_slider_pane_g3_ParamLimits

0x9a03,	// (0x00047763) main_cset_slider_pane_g3

0x9a0f,	// (0x0004776f) main_cset_slider_pane_g4_ParamLimits

0x9a0f,	// (0x0004776f) main_cset_slider_pane_g4

0x9a1e,	// (0x0004777e) main_cset_slider_pane_g5_ParamLimits

0x9a1e,	// (0x0004777e) main_cset_slider_pane_g5

0x9a2a,	// (0x0004778a) main_cset_slider_pane_g6_ParamLimits

0x9a2a,	// (0x0004778a) main_cset_slider_pane_g6

0xf8f6,	// (0x0004d656) main_cset_slider_pane_g_ParamLimits

0x9ada,	// (0x0004783a) main_cset_slider_pane_t1_ParamLimits

0x9b02,	// (0x00047862) main_cset_slider_pane_t2_ParamLimits

0x9b1c,	// (0x0004787c) main_cset_slider_pane_t3_ParamLimits

0x9b36,	// (0x00047896) main_cset_slider_pane_t4_ParamLimits

0x9b50,	// (0x000478b0) main_cset_slider_pane_t5_ParamLimits

0x9b6a,	// (0x000478ca) main_cset_slider_pane_t6_ParamLimits

0x9b7f,	// (0x000478df) main_cset_slider_pane_t7_ParamLimits

0x9ba9,	// (0x00047909) main_cset_slider_pane_t8_ParamLimits

0x9ba9,	// (0x00047909) main_cset_slider_pane_t8

0x9bd1,	// (0x00047931) main_cset_slider_pane_t9_ParamLimits

0x9bd1,	// (0x00047931) main_cset_slider_pane_t9

0x9bf9,	// (0x00047959) main_cset_slider_pane_t10_ParamLimits

0x9bf9,	// (0x00047959) main_cset_slider_pane_t10

0x9c21,	// (0x00047981) main_cset_slider_pane_t11_ParamLimits

0x9c21,	// (0x00047981) main_cset_slider_pane_t11

0x9c49,	// (0x000479a9) main_cset_slider_pane_t12_ParamLimits

0x9c49,	// (0x000479a9) main_cset_slider_pane_t12

0x9c66,	// (0x000479c6) main_cset_slider_pane_t13_ParamLimits

0x9c66,	// (0x000479c6) main_cset_slider_pane_t13

0xf91b,	// (0x0004d67b) main_cset_slider_pane_t_ParamLimits

0x021e,	// (0x0003df7e) bg_popup_sub_pane_cp011

0xa0b4,	// (0x00047e14) main_cset_text_pane_g1

0xa0bc,	// (0x00047e1c) main_cset_text_pane_t1

0xa0ca,	// (0x00047e2a) main_cset_text_pane_t2

0xa0d8,	// (0x00047e38) main_cset_text_pane_t3

0xa0e6,	// (0x00047e46) main_cset_text_pane_t4

0xa0f4,	// (0x00047e54) main_cset_text_pane_t5

0xa102,	// (0x00047e62) main_cset_text_pane_t6

0xa110,	// (0x00047e70) main_cset_text_pane_t7

0x0006,

0xf9a8,	// (0x0004d708) main_cset_text_pane_t

0x021e,	// (0x0003df7e) main_cam4_burst_pane

0x021e,	// (0x0003df7e) main_cam5_pane

0x989a,	// (0x000475fa) bg_button_pane_cp019

0x98a3,	// (0x00047603) bg_button_pane_cp020

0x9a3e,	// (0x0004779e) main_cset_slider_pane_g7_ParamLimits

0x9a3e,	// (0x0004779e) main_cset_slider_pane_g7

0x9a4a,	// (0x000477aa) main_cset_slider_pane_g8_ParamLimits

0x9a4a,	// (0x000477aa) main_cset_slider_pane_g8

0x9a56,	// (0x000477b6) main_cset_slider_pane_g9_ParamLimits

0x9a56,	// (0x000477b6) main_cset_slider_pane_g9

0x9a62,	// (0x000477c2) main_cset_slider_pane_g10_ParamLimits

0x9a62,	// (0x000477c2) main_cset_slider_pane_g10

0x9a6e,	// (0x000477ce) main_cset_slider_pane_g11_ParamLimits

0x9a6e,	// (0x000477ce) main_cset_slider_pane_g11

0x9a7a,	// (0x000477da) main_cset_slider_pane_g12_ParamLimits

0x9a7a,	// (0x000477da) main_cset_slider_pane_g12

0x9a86,	// (0x000477e6) main_cset_slider_pane_g13_ParamLimits

0x9a86,	// (0x000477e6) main_cset_slider_pane_g13

0x9a92,	// (0x000477f2) main_cset_slider_pane_g14_ParamLimits

0x9a92,	// (0x000477f2) main_cset_slider_pane_g14

0x9a9e,	// (0x000477fe) main_cset_slider_pane_g15_ParamLimits

0x9a9e,	// (0x000477fe) main_cset_slider_pane_g15

0x9c83,	// (0x000479e3) main_cset_slider_pane_t14_ParamLimits

0x9c83,	// (0x000479e3) main_cset_slider_pane_t14

0x9cbc,	// (0x00047a1c) main_cset_slider_pane_t15_ParamLimits

0x9cbc,	// (0x00047a1c) main_cset_slider_pane_t15

0xa11e,	// (0x00047e7e) aid_cam4_burst_size_cell_ParamLimits

0xa11e,	// (0x00047e7e) aid_cam4_burst_size_cell

0xa13e,	// (0x00047e9e) grid_cam4_burst_pane_ParamLimits

0xa13e,	// (0x00047e9e) grid_cam4_burst_pane

0xa176,	// (0x00047ed6) linegrid_cam4_burst_pane_ParamLimits

0xa176,	// (0x00047ed6) linegrid_cam4_burst_pane

0xa19a,	// (0x00047efa) scroll_pane_cp30_ParamLimits

0xa19a,	// (0x00047efa) scroll_pane_cp30

0xa1a6,	// (0x00047f06) cell_cam4_burst_pane_ParamLimits

0xa1a6,	// (0x00047f06) cell_cam4_burst_pane

0xa1f3,	// (0x00047f53) linegrid_cam4_burst_pane_g1_ParamLimits

0xa1f3,	// (0x00047f53) linegrid_cam4_burst_pane_g1

0xa200,	// (0x00047f60) linegrid_cam4_burst_pane_g2_ParamLimits

0xa200,	// (0x00047f60) linegrid_cam4_burst_pane_g2

0xa211,	// (0x00047f71) linegrid_cam4_burst_pane_g3_ParamLimits

0xa211,	// (0x00047f71) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b7,	// (0x0004d717) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b7,	// (0x0004d717) linegrid_cam4_burst_pane_g

0xa21e,	// (0x00047f7e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa21e,	// (0x00047f7e) linegrid_cam4_burst_pane_g3_copy1

0xa238,	// (0x00047f98) linegrid_cam4_burst_pane_g4_ParamLimits

0xa238,	// (0x00047f98) linegrid_cam4_burst_pane_g4

0xa245,	// (0x00047fa5) linegrid_cam4_burst_pane_g5_ParamLimits

0xa245,	// (0x00047fa5) linegrid_cam4_burst_pane_g5

0xa256,	// (0x00047fb6) linegrid_cam4_burst_pane_g6_ParamLimits

0xa256,	// (0x00047fb6) linegrid_cam4_burst_pane_g6

0xa26d,	// (0x00047fcd) linegrid_cam4_burst_pane_g7_ParamLimits

0xa26d,	// (0x00047fcd) linegrid_cam4_burst_pane_g7

0xa27a,	// (0x00047fda) cell_cam4_burst_pane_g1

0xa299,	// (0x00047ff9) main_cam5_pane_t1_ParamLimits

0xa299,	// (0x00047ff9) main_cam5_pane_t1

0xa2ab,	// (0x0004800b) main_cam5_pane_t2_ParamLimits

0xa2ab,	// (0x0004800b) main_cam5_pane_t2

0xa2bd,	// (0x0004801d) main_cam5_pane_t3_ParamLimits

0xa2bd,	// (0x0004801d) main_cam5_pane_t3

0xa2cf,	// (0x0004802f) main_cam5_pane_t4_ParamLimits

0xa2cf,	// (0x0004802f) main_cam5_pane_t4

0xa2e7,	// (0x00048047) main_cam5_pane_t5_ParamLimits

0xa2e7,	// (0x00048047) main_cam5_pane_t5

0xa2fb,	// (0x0004805b) main_cam5_pane_t6_ParamLimits

0xa2fb,	// (0x0004805b) main_cam5_pane_t6

0xa30f,	// (0x0004806f) main_cam5_pane_t7_ParamLimits

0xa30f,	// (0x0004806f) main_cam5_pane_t7

0xa321,	// (0x00048081) main_cam5_pane_t8_ParamLimits

0xa321,	// (0x00048081) main_cam5_pane_t8

0xa33d,	// (0x0004809d) main_cam5_pane_t9_ParamLimits

0xa33d,	// (0x0004809d) main_cam5_pane_t9

0xa34f,	// (0x000480af) main_cam5_pane_t10_ParamLimits

0xa34f,	// (0x000480af) main_cam5_pane_t10

0xa361,	// (0x000480c1) main_cam5_pane_t11_ParamLimits

0xa361,	// (0x000480c1) main_cam5_pane_t11

0xa373,	// (0x000480d3) main_cam5_pane_t12_ParamLimits

0xa373,	// (0x000480d3) main_cam5_pane_t12

0xa388,	// (0x000480e8) main_cam5_pane_t13_ParamLimits

0xa388,	// (0x000480e8) main_cam5_pane_t13

0x000c,

0xf9c3,	// (0x0004d723) main_cam5_pane_t_ParamLimits

0xf9c3,	// (0x0004d723) main_cam5_pane_t

0x4312,	// (0x00042072) popup_scut_keymap_window_ParamLimits

0x4312,	// (0x00042072) popup_scut_keymap_window

0xa3a5,	// (0x00048105) aid_size_cell_brow_shortcut

0x0b43,	// (0x0003e8a3) bg_popup_window_pane_cp010

0xa3b1,	// (0x00048111) grid_scut_pane

0xa3bd,	// (0x0004811d) cell_scut_pane_ParamLimits

0xa3bd,	// (0x0004811d) cell_scut_pane

0xa3d4,	// (0x00048134) cell_scut_pane_g1

0xa3dd,	// (0x0004813d) cell_scut_pane_t1

0xa3ec,	// (0x0004814c) cell_scut_pane_t2

0xa3fb,	// (0x0004815b) cell_scut_pane_t3

0x0002,

0xf9de,	// (0x0004d73e) cell_scut_pane_t

0x7a57,	// (0x000457b7) main_mup3_pane_g8_ParamLimits

0x7a57,	// (0x000457b7) main_mup3_pane_g8

0x92e7,	// (0x00047047) area_vitu2_query_pane_ParamLimits

0x92e7,	// (0x00047047) area_vitu2_query_pane

0x3af6,	// (0x00041856) input_focus_pane_cp08

0xa409,	// (0x00048169) area_vitu2_query_pane_g1

0x3bf2,	// (0x00041952) area_vitu2_query_pane_g2

0x0001,

0xf9e5,	// (0x0004d745) area_vitu2_query_pane_g

0xa415,	// (0x00048175) area_vitu2_query_pane_t1_ParamLimits

0xa415,	// (0x00048175) area_vitu2_query_pane_t1

0xa429,	// (0x00048189) area_vitu2_query_pane_t2_ParamLimits

0xa429,	// (0x00048189) area_vitu2_query_pane_t2

0x3c01,	// (0x00041961) area_vitu2_query_pane_t3_ParamLimits

0x3c01,	// (0x00041961) area_vitu2_query_pane_t3

0xd4bf,	// (0x0004b21f) area_vitu2_query_pane_t4_ParamLimits

0xd4bf,	// (0x0004b21f) area_vitu2_query_pane_t4

0xd4e7,	// (0x0004b247) area_vitu2_query_pane_t5_ParamLimits

0xd4e7,	// (0x0004b247) area_vitu2_query_pane_t5

0xd50f,	// (0x0004b26f) area_vitu2_query_pane_t6_ParamLimits

0xd50f,	// (0x0004b26f) area_vitu2_query_pane_t6

0x0006,

0xf9ea,	// (0x0004d74a) area_vitu2_query_pane_t_ParamLimits

0xf9ea,	// (0x0004d74a) area_vitu2_query_pane_t

0xa43d,	// (0x0004819d) bg_button_pane_cp018

0xa449,	// (0x000481a9) bg_button_pane_cp021

0x3c29,	// (0x00041989) bg_button_pane_cp022

0x3c48,	// (0x000419a8) input_focus_pane_cp09

0x13cd,	// (0x0003f12d) aid_size_touch_mv_arrow_left

0x13f8,	// (0x0003f158) aid_size_touch_mv_arrow_right

0x9ab6,	// (0x00047816) main_cset_slider_pane_g16_ParamLimits

0x9ab6,	// (0x00047816) main_cset_slider_pane_g16

0x9ac2,	// (0x00047822) main_cset_slider_pane_g17_ParamLimits

0x9ac2,	// (0x00047822) main_cset_slider_pane_g17

0xa27a,	// (0x00047fda) cell_cam4_burst_pane_g1_ParamLimits

0x021e,	// (0x0003df7e) compa_mode_pane

0x9d73,	// (0x00047ad3) popup_vtel_slider_window_g3_ParamLimits

0x9d73,	// (0x00047ad3) popup_vtel_slider_window_g3

0x9d8a,	// (0x00047aea) popup_vtel_slider_window_g4_ParamLimits

0x9d8a,	// (0x00047aea) popup_vtel_slider_window_g4

0x9da1,	// (0x00047b01) popup_vtel_slider_window_t1_ParamLimits

0x9da1,	// (0x00047b01) popup_vtel_slider_window_t1

0x021e,	// (0x0003df7e) main_cl_pane

0xcf38,	// (0x0004ac98) popup_imed_adjust2_window_ParamLimits

0x21e8,	// (0x0003ff48) bg_tb_trans_pane_cp05_ParamLimits

0x8529,	// (0x00046289) popup_imed_adjust2_window_g1_ParamLimits

0x8538,	// (0x00046298) popup_imed_adjust2_window_g2_ParamLimits

0x8538,	// (0x00046298) popup_imed_adjust2_window_g2

0x8544,	// (0x000462a4) popup_imed_adjust2_window_g3_ParamLimits

0x8544,	// (0x000462a4) popup_imed_adjust2_window_g3

0x0002,

0xf760,	// (0x0004d4c0) popup_imed_adjust2_window_g_ParamLimits

0xf760,	// (0x0004d4c0) popup_imed_adjust2_window_g

0x8550,	// (0x000462b0) popup_imed_adjust2_window_t1_ParamLimits

0x8568,	// (0x000462c8) slider_imed_adjust_pane_ParamLimits

0x857c,	// (0x000462dc) slider_imed_adjust_pane_g1_ParamLimits

0x858c,	// (0x000462ec) slider_imed_adjust_pane_g2_ParamLimits

0x859c,	// (0x000462fc) slider_imed_adjust_pane_g3_ParamLimits

0x85ad,	// (0x0004630d) slider_imed_adjust_pane_g4_ParamLimits

0xf767,	// (0x0004d4c7) slider_imed_adjust_pane_g_ParamLimits

0x905e,	// (0x00046dbe) aid_touch_area_cam4_ParamLimits

0x905e,	// (0x00046dbe) aid_touch_area_cam4

0xd351,	// (0x0004b0b1) battery_pane_cp01

0x912d,	// (0x00046e8d) main_camera4_pane_g6_ParamLimits

0x912d,	// (0x00046e8d) main_camera4_pane_g6

0x9157,	// (0x00046eb7) main_camera4_pane_t2_ParamLimits

0x9157,	// (0x00046eb7) main_camera4_pane_t2

0x0001,

0xf869,	// (0x0004d5c9) main_camera4_pane_t_ParamLimits

0xf869,	// (0x0004d5c9) main_camera4_pane_t

0x919e,	// (0x00046efe) aid_touch_area_vid4_ParamLimits

0x919e,	// (0x00046efe) aid_touch_area_vid4

0x91f2,	// (0x00046f52) main_video4_pane_g5_ParamLimits

0x91f2,	// (0x00046f52) main_video4_pane_g5

0x9217,	// (0x00046f77) vid4_progress_pane_ParamLimits

0x9217,	// (0x00046f77) vid4_progress_pane

0x9ace,	// (0x0004782e) main_cset_slider_pane_g18_ParamLimits

0x9ace,	// (0x0004782e) main_cset_slider_pane_g18

0xa28d,	// (0x00047fed) cell_cam4_burst_pane_g2_ParamLimits

0xa28d,	// (0x00047fed) cell_cam4_burst_pane_g2

0x0001,

0xf9be,	// (0x0004d71e) cell_cam4_burst_pane_g_ParamLimits

0xf9be,	// (0x0004d71e) cell_cam4_burst_pane_g

0x0991,	// (0x0003e6f1) bg_cl_pane_ParamLimits

0x0991,	// (0x0003e6f1) bg_cl_pane

0xa455,	// (0x000481b5) cl_header_pane_ParamLimits

0xa455,	// (0x000481b5) cl_header_pane

0xa469,	// (0x000481c9) cl_listscroll_pane_ParamLimits

0xa469,	// (0x000481c9) cl_listscroll_pane

0xa479,	// (0x000481d9) bg_cl_pane_g1

0xa481,	// (0x000481e1) bg_cl_pane_g2

0xa489,	// (0x000481e9) bg_cl_pane_g3

0xa491,	// (0x000481f1) bg_cl_pane_g4

0xa499,	// (0x000481f9) bg_cl_pane_g5

0xa4a1,	// (0x00048201) bg_cl_pane_g6

0xa4a9,	// (0x00048209) bg_cl_pane_g7

0xa4b1,	// (0x00048211) bg_cl_pane_g8

0xa4b9,	// (0x00048219) bg_cl_pane_g9

0x0008,

0xf9f9,	// (0x0004d759) bg_cl_pane_g

0xa4c1,	// (0x00048221) aid_height_cl_leading_ParamLimits

0xa4c1,	// (0x00048221) aid_height_cl_leading

0xa4cd,	// (0x0004822d) aid_height_cl_text_ParamLimits

0xa4cd,	// (0x0004822d) aid_height_cl_text

0x08c6,	// (0x0003e626) bg_cl_header_pane_ParamLimits

0x08c6,	// (0x0003e626) bg_cl_header_pane

0xa4ec,	// (0x0004824c) cl_header_pane_g1_ParamLimits

0xa4ec,	// (0x0004824c) cl_header_pane_g1

0xa502,	// (0x00048262) cl_header_pane_t1_ParamLimits

0xa502,	// (0x00048262) cl_header_pane_t1

0xa51b,	// (0x0004827b) cl_list_pane

0x9991,	// (0x000476f1) hc_scroll_pane_cp01

0x0d7e,	// (0x0003eade) bg_cl_header_pane_g1

0x955d,	// (0x000472bd) bg_cl_header_pane_g2

0x0d9e,	// (0x0003eafe) bg_cl_header_pane_g3

0x956d,	// (0x000472cd) bg_cl_header_pane_g4

0x9565,	// (0x000472c5) bg_cl_header_pane_g5

0x9ec9,	// (0x00047c29) bg_cl_header_pane_g6

0x9585,	// (0x000472e5) bg_cl_header_pane_g7

0x958d,	// (0x000472ed) bg_cl_header_pane_g8

0x957d,	// (0x000472dd) bg_cl_header_pane_g9

0x0008,

0xfa0c,	// (0x0004d76c) bg_cl_header_pane_g

0xa524,	// (0x00048284) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa524,	// (0x00048284) hc_cl_list_double_graphic_heading_pane

0xa535,	// (0x00048295) hc_cl_list_single_graphic_pane_ParamLimits

0xa535,	// (0x00048295) hc_cl_list_single_graphic_pane

0xa54e,	// (0x000482ae) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa54e,	// (0x000482ae) hc_cl_list_single_graphic_pane_g1

0xa55a,	// (0x000482ba) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa55a,	// (0x000482ba) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa1f,	// (0x0004d77f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa1f,	// (0x0004d77f) hc_cl_list_single_graphic_pane_g

0xa56e,	// (0x000482ce) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa56e,	// (0x000482ce) hc_cl_list_single_graphic_pane_t1

0xa54e,	// (0x000482ae) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa54e,	// (0x000482ae) hc_cl_list_double_graphic_heading_pane_g1

0xa583,	// (0x000482e3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa583,	// (0x000482e3) hc_cl_list_double_graphic_heading_pane_g2

0xa597,	// (0x000482f7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa597,	// (0x000482f7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa24,	// (0x0004d784) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa24,	// (0x0004d784) hc_cl_list_double_graphic_heading_pane_g

0xa5ab,	// (0x0004830b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa5ab,	// (0x0004830b) hc_cl_list_double_graphic_heading_pane_t1

0xa5c0,	// (0x00048320) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa5c0,	// (0x00048320) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2b,	// (0x0004d78b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2b,	// (0x0004d78b) hc_cl_list_double_graphic_heading_pane_t

0xefeb,	// (0x0004cd4b) vid4_progress_pane_g1

0xeffb,	// (0x0004cd5b) vid4_progress_pane_g2

0xa5d5,	// (0x00048335) vid4_progress_pane_g3

0xf00b,	// (0x0004cd6b) vid4_progress_pane_g4

0x0004,

0xfa30,	// (0x0004d790) vid4_progress_pane_g

0xa5e7,	// (0x00048347) vid4_progress_pane_t1

0xf023,	// (0x0004cd83) vid4_progress_pane_t2

0x0002,

0xfa3b,	// (0x0004d79b) vid4_progress_pane_t

0xa5fd,	// (0x0004835d) wait_bar_pane_cp07

0x7220,	// (0x00044f80) blid_firmament_pane_ParamLimits

0x7263,	// (0x00044fc3) popup_blid_sat_info2_window_g1

0x7287,	// (0x00044fe7) popup_blid_sat_info2_window_t3

0x7295,	// (0x00044ff5) popup_blid_sat_info2_window_t4

0x72a3,	// (0x00045003) popup_blid_sat_info2_window_t5

0x72b1,	// (0x00045011) popup_blid_sat_info2_window_t6

0x72c1,	// (0x00045021) popup_blid_sat_info2_window_t7

0x72cf,	// (0x0004502f) popup_blid_sat_info2_window_t8

0x72dd,	// (0x0004503d) popup_blid_sat_info2_window_t9

0x72eb,	// (0x0004504b) popup_blid_sat_info2_window_t10

0x73ac,	// (0x0004510c) aid_firma_cardinal_ParamLimits

0x73c0,	// (0x00045120) blid_firmament_pane_t1_ParamLimits

0x73d7,	// (0x00045137) blid_firmament_pane_t2_ParamLimits

0x73ee,	// (0x0004514e) blid_firmament_pane_t3_ParamLimits

0x7405,	// (0x00045165) blid_firmament_pane_t4_ParamLimits

0xf659,	// (0x0004d3b9) blid_firmament_pane_t_ParamLimits

0x741c,	// (0x0004517c) blid_sat_info_pane_ParamLimits

0x08c6,	// (0x0003e626) main_cam_set_pane_ParamLimits

0x838d,	// (0x000460ed) aid_size_cell_colour_35_ParamLimits

0x83ad,	// (0x0004610d) aid_size_cell_colour_112_ParamLimits

0x83cd,	// (0x0004612d) aid_size_cell_effect_ParamLimits

0x21e8,	// (0x0003ff48) bg_tb_trans_pane_cp02_ParamLimits

0x0fe6,	// (0x0003ed46) heading_imed_pane_ParamLimits

0x83ed,	// (0x0004614d) listscroll_imed_pane_ParamLimits

0x1f9a,	// (0x0003fcfa) popup_call2_audio_first_window_g5_ParamLimits

0x1f9a,	// (0x0003fcfa) popup_call2_audio_first_window_g5

0x8c4c,	// (0x000469ac) aid_size_touch_image3_arrow_left_ParamLimits

0x8c4c,	// (0x000469ac) aid_size_touch_image3_arrow_left

0x8c78,	// (0x000469d8) aid_size_touch_image3_arrow_right_ParamLimits

0x8c78,	// (0x000469d8) aid_size_touch_image3_arrow_right

0xf038,	// (0x0004cd98) vid4_progress_pane_t3

0x889a,	// (0x000465fa) main_hwr_training_symbol_option_pane_ParamLimits

0x889a,	// (0x000465fa) main_hwr_training_symbol_option_pane

0x88ba,	// (0x0004661a) popup_hwr_training_preview_window_ParamLimits

0x88ba,	// (0x0004661a) popup_hwr_training_preview_window

0x8907,	// (0x00046667) hwr_training_navi_pane_g5_ParamLimits

0x8907,	// (0x00046667) hwr_training_navi_pane_g5

0x94a6,	// (0x00047206) popup_char_count_window

0x08c6,	// (0x0003e626) bg_popup_sub_pane_cp20_ParamLimits

0x9eb1,	// (0x00047c11) list_vitu2_match_list_pane_ParamLimits

0x9ebd,	// (0x00047c1d) vitu2_page_scroll_pane_ParamLimits

0x9ebd,	// (0x00047c1d) vitu2_page_scroll_pane

0xd57d,	// (0x0004b2dd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd57d,	// (0x0004b2dd) list_single_hwr_training_symbol_option_pane

0xd590,	// (0x0004b2f0) list_single_hwr_training_symbol_option_pane_g1

0xd598,	// (0x0004b2f8) list_single_hwr_training_symbol_option_pane_t1

0xd5a6,	// (0x0004b306) bg_button_pane_cp023

0xd5af,	// (0x0004b30f) bg_button_pane_cp024

0xd5e2,	// (0x0004b342) vitu2_page_scroll_pane_g1

0xd5ea,	// (0x0004b34a) vitu2_page_scroll_pane_g2

0x0001,

0xfa42,	// (0x0004d7a2) vitu2_page_scroll_pane_g

0xd5f2,	// (0x0004b352) vitu2_page_scroll_pane_t1

0x2218,	// (0x0003ff78) popup_char_count_window_g1

0xd601,	// (0x0004b361) popup_char_count_window_g2

0x232e,	// (0x0004008e) popup_char_count_window_g3

0x0002,

0xfa47,	// (0x0004d7a7) popup_char_count_window_g

0xd60a,	// (0x0004b36a) popup_char_count_window_t1

0x021e,	// (0x0003df7e) main_vded2_pane

0x8515,	// (0x00046275) aid_size_cell_imed_line

0x851f,	// (0x0004627f) grid_imed_line_width_pane

0xd401,	// (0x0004b161) vid4_indicators_pane_g4

0xd618,	// (0x0004b378) cell_imed_line_width_pane_ParamLimits

0xd618,	// (0x0004b378) cell_imed_line_width_pane

0xd62c,	// (0x0004b38c) cell_imed_line_width_pane_g1

0xd635,	// (0x0004b395) cell_imed_line_width_pane_g2

0x0001,

0xfa4e,	// (0x0004d7ae) cell_imed_line_width_pane_g

0xa60e,	// (0x0004836e) main_vded2_pane_g1_ParamLimits

0xa60e,	// (0x0004836e) main_vded2_pane_g1

0xa624,	// (0x00048384) main_vded2_pane_g2_ParamLimits

0xa624,	// (0x00048384) main_vded2_pane_g2

0x0001,

0xfa53,	// (0x0004d7b3) main_vded2_pane_g_ParamLimits

0xfa53,	// (0x0004d7b3) main_vded2_pane_g

0xa636,	// (0x00048396) vded2_slider_pane_ParamLimits

0xa636,	// (0x00048396) vded2_slider_pane

0xa646,	// (0x000483a6) aid_size_touch_vded2_end

0xa650,	// (0x000483b0) aid_size_touch_vded2_playhead

0xd63d,	// (0x0004b39d) aid_size_touch_vded2_start

0xd645,	// (0x0004b3a5) vded2_slider_bg_pane

0xd64e,	// (0x0004b3ae) vded2_slider_pane_g1

0xd657,	// (0x0004b3b7) vded2_slider_pane_g2

0xa65a,	// (0x000483ba) vded2_slider_pane_g3

0x0002,

0xfa58,	// (0x0004d7b8) vded2_slider_pane_g

0xd65f,	// (0x0004b3bf) vded2_slider_bg_pane_g1

0xd668,	// (0x0004b3c8) vded2_slider_bg_pane_g2

0xd671,	// (0x0004b3d1) vded2_slider_bg_pane_g3

0x0002,

0xfa5f,	// (0x0004d7bf) vded2_slider_bg_pane_g

0x62c2,	// (0x00044022) aid_postcard_touch_down_pane_ParamLimits

0x62c2,	// (0x00044022) aid_postcard_touch_down_pane

0x62d8,	// (0x00044038) aid_postcard_touch_up_pane_ParamLimits

0x62d8,	// (0x00044038) aid_postcard_touch_up_pane

0x021e,	// (0x0003df7e) main_blid2_pane

0xcf1e,	// (0x0004ac7e) popup_blid2_search_window

0x021e,	// (0x0003df7e) blid2_gps_pane

0x021e,	// (0x0003df7e) blid2_navig_pane

0x021e,	// (0x0003df7e) blid2_search_pane

0x021e,	// (0x0003df7e) blid2_tripm_pane

0xa665,	// (0x000483c5) blid2_search_pane_g1_ParamLimits

0xa665,	// (0x000483c5) blid2_search_pane_g1

0xa67d,	// (0x000483dd) blid2_search_pane_t1_ParamLimits

0xa67d,	// (0x000483dd) blid2_search_pane_t1

0xa68f,	// (0x000483ef) aid_size_cell_blid2_gps_ParamLimits

0xa68f,	// (0x000483ef) aid_size_cell_blid2_gps

0xa6a7,	// (0x00048407) blid2_gps_pane_g1_ParamLimits

0xa6a7,	// (0x00048407) blid2_gps_pane_g1

0xa6bb,	// (0x0004841b) grid_blid2_satellite_pane_ParamLimits

0xa6bb,	// (0x0004841b) grid_blid2_satellite_pane

0xa6d5,	// (0x00048435) blid2_navig_pane_g1_ParamLimits

0xa6d5,	// (0x00048435) blid2_navig_pane_g1

0xa6e1,	// (0x00048441) blid2_navig_pane_t1_ParamLimits

0xa6e1,	// (0x00048441) blid2_navig_pane_t1

0xa6fc,	// (0x0004845c) blid2_navig_pane_t2_ParamLimits

0xa6fc,	// (0x0004845c) blid2_navig_pane_t2

0x0001,

0xfa66,	// (0x0004d7c6) blid2_navig_pane_t_ParamLimits

0xfa66,	// (0x0004d7c6) blid2_navig_pane_t

0xa717,	// (0x00048477) blid2_navig_ring_pane_ParamLimits

0xa717,	// (0x00048477) blid2_navig_ring_pane

0xa730,	// (0x00048490) blid2_speed_pane_ParamLimits

0xa730,	// (0x00048490) blid2_speed_pane

0xa73c,	// (0x0004849c) blid2_tripm_pane_g1_ParamLimits

0xa73c,	// (0x0004849c) blid2_tripm_pane_g1

0xa757,	// (0x000484b7) blid2_tripm_pane_g2_ParamLimits

0xa757,	// (0x000484b7) blid2_tripm_pane_g2

0xa76b,	// (0x000484cb) blid2_tripm_pane_g3_ParamLimits

0xa76b,	// (0x000484cb) blid2_tripm_pane_g3

0xa77f,	// (0x000484df) blid2_tripm_pane_g4_ParamLimits

0xa77f,	// (0x000484df) blid2_tripm_pane_g4

0xa793,	// (0x000484f3) blid2_tripm_pane_g5_ParamLimits

0xa793,	// (0x000484f3) blid2_tripm_pane_g5

0x0005,

0xfa6b,	// (0x0004d7cb) blid2_tripm_pane_g_ParamLimits

0xfa6b,	// (0x0004d7cb) blid2_tripm_pane_g

0xa7b9,	// (0x00048519) blid2_tripm_pane_t1_ParamLimits

0xa7b9,	// (0x00048519) blid2_tripm_pane_t1

0xa7d4,	// (0x00048534) blid2_tripm_pane_t2_ParamLimits

0xa7d4,	// (0x00048534) blid2_tripm_pane_t2

0xa7ed,	// (0x0004854d) blid2_tripm_pane_t3_ParamLimits

0xa7ed,	// (0x0004854d) blid2_tripm_pane_t3

0x0003,

0xfa78,	// (0x0004d7d8) blid2_tripm_pane_t_ParamLimits

0xfa78,	// (0x0004d7d8) blid2_tripm_pane_t

0xa834,	// (0x00048594) cell_blid2_satellite_pane_ParamLimits

0xa834,	// (0x00048594) cell_blid2_satellite_pane

0xa852,	// (0x000485b2) cell_blid2_satellite_pane_g1

0xd67a,	// (0x0004b3da) cell_blid2_satellite_pane_t1

0x0b79,	// (0x0003e8d9) blid2_speed_pane_g1

0xd688,	// (0x0004b3e8) blid2_speed_pane_t1

0xd696,	// (0x0004b3f6) blid2_speed_pane_t2

0x0001,

0xfa81,	// (0x0004d7e1) blid2_speed_pane_t

0x0b79,	// (0x0003e8d9) blid2_navig_ring_pane_g1

0xa85b,	// (0x000485bb) blid2_navig_ring_pane_g2

0xa863,	// (0x000485c3) blid2_navig_ring_pane_g3

0xa86b,	// (0x000485cb) blid2_navig_ring_pane_g4

0xa873,	// (0x000485d3) blid2_navig_ring_pane_g5

0x0004,

0xfa86,	// (0x0004d7e6) blid2_navig_ring_pane_g

0x021e,	// (0x0003df7e) bg_popup_window_pane_cp011

0xd6a4,	// (0x0004b404) popup_blid2_search_window_g1

0xd6ac,	// (0x0004b40c) popup_blid2_search_window_t1

0xd6ba,	// (0x0004b41a) popup_blid2_search_window_t2

0x0001,

0xfa91,	// (0x0004d7f1) popup_blid2_search_window_t

0x0c8d,	// (0x0003e9ed) main_browser_pane_g1

0x0991,	// (0x0003e6f1) main_browser_pane_ParamLimits

0x08c6,	// (0x0003e626) bg_button_pane_cp011_ParamLimits

0x9540,	// (0x000472a0) cell_vitu2_function_pane_g1_ParamLimits

0x21e8,	// (0x0003ff48) bg_popup_sub_pane_cp22_ParamLimits

0x3af6,	// (0x00041856) input_focus_pane_cp08_ParamLimits

0xa065,	// (0x00047dc5) popup_vitu2_query_button_pane_ParamLimits

0xa065,	// (0x00047dc5) popup_vitu2_query_button_pane

0x3b11,	// (0x00041871) popup_vitu2_query_input_button_pane

0xa074,	// (0x00047dd4) popup_vitu2_query_window_g1_ParamLimits

0x3b19,	// (0x00041879) popup_vitu2_query_window_g2_ParamLimits

0xf992,	// (0x0004d6f2) popup_vitu2_query_window_g_ParamLimits

0x021e,	// (0x0003df7e) bg_button_pane_cp026

0xa87b,	// (0x000485db) popup_vitu2_query_input_button_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp025

0xd6c8,	// (0x0004b428) popup_vitu2_query_button_pane_t1

0x771d,	// (0x0004547d) main_mp3_pane_t6

0x7733,	// (0x00045493) popup_slider_window_cp01

0xd36d,	// (0x0004b0cd) cam4_battery_pane

0xd3c0,	// (0x0004b120) cam4_battery_pane_cp02

0xefe3,	// (0x0004cd43) cam4_battery_pane_cp01

0xefe3,	// (0x0004cd43) cam4_battery_pane_cp03

0x0b79,	// (0x0003e8d9) cam4_battery_pane_g1

0xa883,	// (0x000485e3) cam4_battery_pane_g2

0x0001,

0xfa96,	// (0x0004d7f6) cam4_battery_pane_g

0x72f9,	// (0x00045059) popup_blid_sat_info2_window_t11

0x13cd,	// (0x0003f12d) aid_size_touch_mv_arrow_left_ParamLimits

0x13f8,	// (0x0003f158) aid_size_touch_mv_arrow_right_ParamLimits

0x1456,	// (0x0003f1b6) navi_pane_g1_ParamLimits

0x1462,	// (0x0003f1c2) navi_pane_g2_ParamLimits

0x1490,	// (0x0003f1f0) navi_pane_g3_ParamLimits

0xf35a,	// (0x0004d0ba) navi_pane_g_ParamLimits

0x5fdb,	// (0x00043d3b) navi_pane_mv_t1_ParamLimits

0x8427,	// (0x00046187) grid_imed_effect_pane_ParamLimits

0x4f22,	// (0x00042c82) aid_placing_vt_slider_lsc

0x0bdc,	// (0x0003e93c) aid_placing_vt_slider_prt

0x08c6,	// (0x0003e626) bg_tb_trans_pane_cp01_ParamLimits

0x7597,	// (0x000452f7) popup_image_details_window_g1_ParamLimits

0x75aa,	// (0x0004530a) popup_image_details_window_g2_ParamLimits

0x75bf,	// (0x0004531f) popup_image_details_window_g3_ParamLimits

0x75bf,	// (0x0004531f) popup_image_details_window_g3

0xf699,	// (0x0004d3f9) popup_image_details_window_g_ParamLimits

0x75d3,	// (0x00045333) popup_image_details_window_t1_ParamLimits

0x75e5,	// (0x00045345) popup_image_details_window_t2_ParamLimits

0x75fe,	// (0x0004535e) popup_image_details_window_t3_ParamLimits

0x7612,	// (0x00045372) popup_image_details_window_t4_ParamLimits

0x762d,	// (0x0004538d) popup_image_details_window_t5_ParamLimits

0xf6a0,	// (0x0004d400) popup_image_details_window_t_ParamLimits

0xa4d9,	// (0x00048239) cl_header_name_pane_ParamLimits

0xa4d9,	// (0x00048239) cl_header_name_pane

0xa88d,	// (0x000485ed) cl_header_name_pane_t1_ParamLimits

0xa88d,	// (0x000485ed) cl_header_name_pane_t1

0xa8ae,	// (0x0004860e) cl_header_name_pane_t2_ParamLimits

0xa8ae,	// (0x0004860e) cl_header_name_pane_t2

0xa8f0,	// (0x00048650) cl_header_name_pane_t3_ParamLimits

0xa8f0,	// (0x00048650) cl_header_name_pane_t3

0x0002,

0xfa9b,	// (0x0004d7fb) cl_header_name_pane_t_ParamLimits

0xfa9b,	// (0x0004d7fb) cl_header_name_pane_t

0x151f,	// (0x0003f27f) navi_pane_mv_g2_ParamLimits

0x948e,	// (0x000471ee) field_vitu2_entry_pane_g1_ParamLimits

0x949a,	// (0x000471fa) field_vitu2_entry_pane_g2_ParamLimits

0x21f6,	// (0x0003ff56) field_vitu2_entry_pane_g3_ParamLimits

0x21f6,	// (0x0003ff56) field_vitu2_entry_pane_g3

0xf89b,	// (0x0004d5fb) field_vitu2_entry_pane_g_ParamLimits

0x94bc,	// (0x0004721c) cell_vitu2_itu_pane_g1_ParamLimits

0x94d4,	// (0x00047234) cell_vitu2_itu_pane_g2_ParamLimits

0x94d4,	// (0x00047234) cell_vitu2_itu_pane_g2

0x0001,

0xf8a7,	// (0x0004d607) cell_vitu2_itu_pane_g_ParamLimits

0xf8a7,	// (0x0004d607) cell_vitu2_itu_pane_g

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp05_ParamLimits

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp05

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp03

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp04

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp10_ParamLimits

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp10

0x3c38,	// (0x00041998) bg_vkb2_func_pane_cp08

0xa43d,	// (0x0004819d) bg_vkb2_func_pane_cp06

0xa449,	// (0x000481a9) bg_vkb2_func_pane_cp07

0xd5b8,	// (0x0004b318) bg_vkb2_func_pane_cp11_ParamLimits

0xd5b8,	// (0x0004b318) bg_vkb2_func_pane_cp11

0xd5cd,	// (0x0004b32d) bg_vkb2_func_pane_cp12_ParamLimits

0xd5cd,	// (0x0004b32d) bg_vkb2_func_pane_cp12

0x021e,	// (0x0003df7e) bg_vkb2_func_pane_cp09

0x955d,	// (0x000472bd) bg_vkb2_func_pane_g1

0x0d9e,	// (0x0003eafe) bg_vkb2_func_pane_g2

0x9565,	// (0x000472c5) bg_vkb2_func_pane_g3

0x956d,	// (0x000472cd) bg_vkb2_func_pane_g4

0x9ec9,	// (0x00047c29) bg_vkb2_func_pane_g5

0x9585,	// (0x000472e5) bg_vkb2_func_pane_g6

0x958d,	// (0x000472ed) bg_vkb2_func_pane_g7

0x957d,	// (0x000472dd) bg_vkb2_func_pane_g8

0x0d7e,	// (0x0003eade) bg_vkb2_func_pane_g9

0x0008,

0xfaa2,	// (0x0004d802) bg_vkb2_func_pane_g

0xa7a7,	// (0x00048507) blid2_tripm_pane_g6_ParamLimits

0xa7a7,	// (0x00048507) blid2_tripm_pane_g6

0x8acf,	// (0x0004682f) mp4_progress_pane_g1

0xa820,	// (0x00048580) blid2_tripm_values_pane_ParamLimits

0xa820,	// (0x00048580) blid2_tripm_values_pane

0xa921,	// (0x00048681) blid2_tripm_values_pane_t1

0xa92f,	// (0x0004868f) blid2_tripm_values_pane_t2

0xa93d,	// (0x0004869d) blid2_tripm_values_pane_t3

0xa94b,	// (0x000486ab) blid2_tripm_values_pane_t4

0xa959,	// (0x000486b9) blid2_tripm_values_pane_t5

0xa967,	// (0x000486c7) blid2_tripm_values_pane_t6

0xa975,	// (0x000486d5) blid2_tripm_values_pane_t7

0xa983,	// (0x000486e3) blid2_tripm_values_pane_t8

0xa991,	// (0x000486f1) blid2_tripm_values_pane_t9

0x0008,

0xfab5,	// (0x0004d815) blid2_tripm_values_pane_t

0x4f64,	// (0x00042cc4) call_video_pane_t1_ParamLimits

0x4f82,	// (0x00042ce2) call_video_pane_t2_ParamLimits

0xf208,	// (0x0004cf68) call_video_pane_t_ParamLimits

0x3989,	// (0x000416e9) msg_header_pane_g1_ParamLimits

0x16e4,	// (0x0003f444) msg_header_pane_g2_ParamLimits

0x16e4,	// (0x0003f444) msg_header_pane_g2

0x0001,

0xf3fd,	// (0x0004d15d) msg_header_pane_g_ParamLimits

0xf3fd,	// (0x0004d15d) msg_header_pane_g

0x0991,	// (0x0003e6f1) main_clock2_pane_ParamLimits

0x80a8,	// (0x00045e08) grid_clock2_toolbar_pane_ParamLimits

0x80a8,	// (0x00045e08) grid_clock2_toolbar_pane

0x80a8,	// (0x00045e08) listscroll_clock2_pane_ParamLimits

0x80a8,	// (0x00045e08) listscroll_clock2_pane

0x81be,	// (0x00045f1e) main_clock2_pane_t3_ParamLimits

0x81be,	// (0x00045f1e) main_clock2_pane_t3

0x81e2,	// (0x00045f42) main_clock2_pane_t4_ParamLimits

0x81e2,	// (0x00045f42) main_clock2_pane_t4

0xd6d6,	// (0x0004b436) cell_clock2_toolbar_pane

0xd6de,	// (0x0004b43e) cell_clock2_toolbar_pane_cp01

0xd6de,	// (0x0004b43e) cell_clock2_toolbar_pane_cp02

0xd6e6,	// (0x0004b446) cell_clock2_toolbar_pane_cp03

0xd6ee,	// (0x0004b44e) list_clock2_pane

0x1352,	// (0x0003f0b2) scroll_pane_cp10

0xd6f6,	// (0x0004b456) list_single_clock2_pane_ParamLimits

0xd6f6,	// (0x0004b456) list_single_clock2_pane

0x0b43,	// (0x0003e8a3) list_highlight_pane_cp08

0xd703,	// (0x0004b463) list_single_clock2_pane_t1

0xd711,	// (0x0004b471) list_single_clock2_pane_t2

0x0001,

0xfac8,	// (0x0004d828) list_single_clock2_pane_t

0x021e,	// (0x0003df7e) bg_button_pane_cp10

0xd71f,	// (0x0004b47f) cell_clock2_toolbar_pane_g1

0x624e,	// (0x00043fae) aid_main_viewer_pane_g1_ParamLimits

0x624e,	// (0x00043fae) aid_main_viewer_pane_g1

0x625c,	// (0x00043fbc) aid_main_viewer_pane_g2_ParamLimits

0x625c,	// (0x00043fbc) aid_main_viewer_pane_g2

0x626a,	// (0x00043fca) aid_main_viewer_pane_g3_ParamLimits

0x626a,	// (0x00043fca) aid_main_viewer_pane_g3

0x6279,	// (0x00043fd9) aid_main_viewer_pane_g4_ParamLimits

0x6279,	// (0x00043fd9) aid_main_viewer_pane_g4

0x0003,

0xf40e,	// (0x0004d16e) aid_main_viewer_pane_g_ParamLimits

0xf40e,	// (0x0004d16e) aid_main_viewer_pane_g

0x6bc2,	// (0x00044922) main_calc_pane_ParamLimits

0x6bd6,	// (0x00044936) main_dialer2_pane_ParamLimits

0x021e,	// (0x0003df7e) main_cam6_pane

0x021e,	// (0x0003df7e) main_vid6_pane

0x80b4,	// (0x00045e14) listscroll_gen_pane_cp06_ParamLimits

0x80b4,	// (0x00045e14) listscroll_gen_pane_cp06

0x8205,	// (0x00045f65) main_clock2_pane_t5_ParamLimits

0x8205,	// (0x00045f65) main_clock2_pane_t5

0x8263,	// (0x00045fc3) aid_call2_pane_cp10_ParamLimits

0x8275,	// (0x00045fd5) aid_call_pane_cp10_ParamLimits

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g1_ParamLimits

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8287,	// (0x00045fe7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8287,	// (0x00045fe7) popup_clock_analogue_window_cp10_g4_ParamLimits

0x13c1,	// (0x0003f121) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf755,	// (0x0004d4b5) popup_clock_analogue_window_cp10_g_ParamLimits

0x829d,	// (0x00045ffd) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8bf9,	// (0x00046959) cell_dialer2_keypad_pane_g2_ParamLimits

0x8bf9,	// (0x00046959) cell_dialer2_keypad_pane_g2

0x0001,

0xf83a,	// (0x0004d59a) cell_dialer2_keypad_pane_g_ParamLimits

0xf83a,	// (0x0004d59a) cell_dialer2_keypad_pane_g

0x8c15,	// (0x00046975) cell_dialer2_keypad_pane_t1

0x996b,	// (0x000476cb) main_cset_text2_pane_ParamLimits

0x996b,	// (0x000476cb) main_cset_text2_pane

0xa409,	// (0x00048169) area_vitu2_query_pane_g1_ParamLimits

0x3bf2,	// (0x00041952) area_vitu2_query_pane_g2_ParamLimits

0xf9e5,	// (0x0004d745) area_vitu2_query_pane_g_ParamLimits

0xd537,	// (0x0004b297) area_vitu2_query_pane_t7_ParamLimits

0xd537,	// (0x0004b297) area_vitu2_query_pane_t7

0xa43d,	// (0x0004819d) bg_button_pane_cp018_ParamLimits

0xa449,	// (0x000481a9) bg_button_pane_cp021_ParamLimits

0x3c29,	// (0x00041989) bg_button_pane_cp022_ParamLimits

0x3c38,	// (0x00041998) bg_vkb2_func_pane_cp08_ParamLimits

0xa43d,	// (0x0004819d) bg_vkb2_func_pane_cp06_ParamLimits

0xa449,	// (0x000481a9) bg_vkb2_func_pane_cp07_ParamLimits

0x3c48,	// (0x000419a8) input_focus_pane_cp09_ParamLimits

0xf04e,	// (0x0004cdae) cam6_autofocus_pane_ParamLimits

0xf04e,	// (0x0004cdae) cam6_autofocus_pane

0xa99f,	// (0x000486ff) cam6_image_uncrop_pane_ParamLimits

0xa99f,	// (0x000486ff) cam6_image_uncrop_pane

0xa9ae,	// (0x0004870e) cam6_indi_pane_ParamLimits

0xa9ae,	// (0x0004870e) cam6_indi_pane

0xa9c4,	// (0x00048724) cam6_mode_pane_ParamLimits

0xa9c4,	// (0x00048724) cam6_mode_pane

0xa9d6,	// (0x00048736) cam6_timer_pane_ParamLimits

0xa9d6,	// (0x00048736) cam6_timer_pane

0xa9e6,	// (0x00048746) cam6_zoom_pane_ParamLimits

0xa9e6,	// (0x00048746) cam6_zoom_pane

0xa9f2,	// (0x00048752) cam6_mode_pane_g1_ParamLimits

0xa9f2,	// (0x00048752) cam6_mode_pane_g1

0xaa02,	// (0x00048762) cam6_mode_pane_g2_ParamLimits

0xaa02,	// (0x00048762) cam6_mode_pane_g2

0xaa12,	// (0x00048772) cam6_mode_pane_g3_ParamLimits

0xaa12,	// (0x00048772) cam6_mode_pane_g3

0xaa22,	// (0x00048782) cam6_mode_pane_g4_ParamLimits

0xaa22,	// (0x00048782) cam6_mode_pane_g4

0x0003,

0xfacd,	// (0x0004d82d) cam6_mode_pane_g_ParamLimits

0xfacd,	// (0x0004d82d) cam6_mode_pane_g

0xcfc4,	// (0x0004ad24) bg_tb_trans_pane_cp08_ParamLimits

0xcfc4,	// (0x0004ad24) bg_tb_trans_pane_cp08

0xd727,	// (0x0004b487) cam6_battery_pane_ParamLimits

0xd727,	// (0x0004b487) cam6_battery_pane

0xd73d,	// (0x0004b49d) cam6_indi_pane_g1_ParamLimits

0xd73d,	// (0x0004b49d) cam6_indi_pane_g1

0xd74f,	// (0x0004b4af) cam6_indi_pane_g2_ParamLimits

0xd74f,	// (0x0004b4af) cam6_indi_pane_g2

0xd761,	// (0x0004b4c1) cam6_indi_pane_g3_ParamLimits

0xd761,	// (0x0004b4c1) cam6_indi_pane_g3

0x0002,

0xfad6,	// (0x0004d836) cam6_indi_pane_g_ParamLimits

0xfad6,	// (0x0004d836) cam6_indi_pane_g

0xd773,	// (0x0004b4d3) cam6_indi_pane_t1_ParamLimits

0xd773,	// (0x0004b4d3) cam6_indi_pane_t1

0xaa32,	// (0x00048792) cam6_autofocus_pane_g1

0xaa3a,	// (0x0004879a) cam6_autofocus_pane_g2

0xaa42,	// (0x000487a2) cam6_autofocus_pane_g3

0xaa4a,	// (0x000487aa) cam6_autofocus_pane_g4

0x0003,

0xfadd,	// (0x0004d83d) cam6_autofocus_pane_g

0xd799,	// (0x0004b4f9) cam6_timer_pane_g1

0xd7a1,	// (0x0004b501) cam6_timer_pane_t1

0xd7af,	// (0x0004b50f) cam6_zoom_cont_pane

0xd7b7,	// (0x0004b517) cam6_zoom_pane_g1

0xd7bf,	// (0x0004b51f) cam6_zoom_pane_g2

0xaa52,	// (0x000487b2) cam6_zoom_pane_g3

0x0002,

0xfae6,	// (0x0004d846) cam6_zoom_pane_g

0x0b79,	// (0x0003e8d9) cam6_battery_pane_g1

0x0b79,	// (0x0003e8d9) cam6_battery_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) cam6_battery_pane_g

0xd7c7,	// (0x0004b527) cam6_zoom_cont_pane_g1

0xd7d0,	// (0x0004b530) cam6_zoom_cont_pane_g2

0xd7d9,	// (0x0004b539) cam6_zoom_cont_pane_g3

0x0002,

0xfaed,	// (0x0004d84d) cam6_zoom_cont_pane_g

0xaa6f,	// (0x000487cf) cam6_mode_pane_cp_ParamLimits

0xaa6f,	// (0x000487cf) cam6_mode_pane_cp

0xa9e6,	// (0x00048746) cam6_zoom_pane_cp_ParamLimits

0xa9e6,	// (0x00048746) cam6_zoom_pane_cp

0xaa81,	// (0x000487e1) vid6_image_uncrop_cif_pane_ParamLimits

0xaa81,	// (0x000487e1) vid6_image_uncrop_cif_pane

0xaa91,	// (0x000487f1) vid6_image_uncrop_nhd_pane_ParamLimits

0xaa91,	// (0x000487f1) vid6_image_uncrop_nhd_pane

0xa99f,	// (0x000486ff) vid6_image_uncrop_vga_pane_ParamLimits

0xa99f,	// (0x000486ff) vid6_image_uncrop_vga_pane

0xaaa0,	// (0x00048800) vid6_image_uncrop_wvga_pane_ParamLimits

0xaaa0,	// (0x00048800) vid6_image_uncrop_wvga_pane

0xaaaf,	// (0x0004880f) vid6_indi_pane_ParamLimits

0xaaaf,	// (0x0004880f) vid6_indi_pane

0xcfc4,	// (0x0004ad24) bg_tb_trans_pane_cp09_ParamLimits

0xcfc4,	// (0x0004ad24) bg_tb_trans_pane_cp09

0xd7f1,	// (0x0004b551) cam6_battery_pane_cp_ParamLimits

0xd7f1,	// (0x0004b551) cam6_battery_pane_cp

0xd7fd,	// (0x0004b55d) vid6_indi_pane_g1_ParamLimits

0xd7fd,	// (0x0004b55d) vid6_indi_pane_g1

0xd80f,	// (0x0004b56f) vid6_indi_pane_g2_ParamLimits

0xd80f,	// (0x0004b56f) vid6_indi_pane_g2

0xd821,	// (0x0004b581) vid6_indi_pane_g3_ParamLimits

0xd821,	// (0x0004b581) vid6_indi_pane_g3

0xd836,	// (0x0004b596) vid6_indi_pane_g4_ParamLimits

0xd836,	// (0x0004b596) vid6_indi_pane_g4

0xd84b,	// (0x0004b5ab) vid6_indi_pane_g5_ParamLimits

0xd84b,	// (0x0004b5ab) vid6_indi_pane_g5

0x0004,

0xfaf4,	// (0x0004d854) vid6_indi_pane_g_ParamLimits

0xfaf4,	// (0x0004d854) vid6_indi_pane_g

0xd865,	// (0x0004b5c5) vid6_indi_pane_t1_ParamLimits

0xd865,	// (0x0004b5c5) vid6_indi_pane_t1

0xd87b,	// (0x0004b5db) vid6_indi_pane_t2_ParamLimits

0xd87b,	// (0x0004b5db) vid6_indi_pane_t2

0xd8a3,	// (0x0004b603) vid6_indi_pane_t3_ParamLimits

0xd8a3,	// (0x0004b603) vid6_indi_pane_t3

0xd8cb,	// (0x0004b62b) vid6_indi_pane_t4_ParamLimits

0xd8cb,	// (0x0004b62b) vid6_indi_pane_t4

0x0003,

0xfaff,	// (0x0004d85f) vid6_indi_pane_t_ParamLimits

0xfaff,	// (0x0004d85f) vid6_indi_pane_t

0xd8ef,	// (0x0004b64f) wait_bar_pane_cp08

0xaac7,	// (0x00048827) main_cset_text2_pane_t1_ParamLimits

0xaac7,	// (0x00048827) main_cset_text2_pane_t1

0xaa5a,	// (0x000487ba) listscroll_gen_pane_cp06_t1_ParamLimits

0xaa5a,	// (0x000487ba) listscroll_gen_pane_cp06_t1

0x021e,	// (0x0003df7e) main_cam6_set_pane

0x091f,	// (0x0003e67f) bg_tb_trans_pane_cp06_ParamLimits

0xd375,	// (0x0004b0d5) cam4_indicators_pane_g1_ParamLimits

0xd386,	// (0x0004b0e6) cam4_indicators_pane_g2_ParamLimits

0xf877,	// (0x0004d5d7) cam4_indicators_pane_g_ParamLimits

0xd39e,	// (0x0004b0fe) cam4_indicators_pane_t1_ParamLimits

0x08c6,	// (0x0003e626) bg_tb_trans_pane_cp07_ParamLimits

0xd3c8,	// (0x0004b128) vid4_indicators_pane_g1_ParamLimits

0xd3dc,	// (0x0004b13c) vid4_indicators_pane_g2_ParamLimits

0xd3f0,	// (0x0004b150) vid4_indicators_pane_g3_ParamLimits

0xd401,	// (0x0004b161) vid4_indicators_pane_g4_ParamLimits

0xf889,	// (0x0004d5e9) vid4_indicators_pane_g_ParamLimits

0xd41d,	// (0x0004b17d) vid4_indicators_pane_t1_ParamLimits

0xefeb,	// (0x0004cd4b) vid4_progress_pane_g1_ParamLimits

0xeffb,	// (0x0004cd5b) vid4_progress_pane_g2_ParamLimits

0xa5d5,	// (0x00048335) vid4_progress_pane_g3_ParamLimits

0xf00b,	// (0x0004cd6b) vid4_progress_pane_g4_ParamLimits

0xfa30,	// (0x0004d790) vid4_progress_pane_g_ParamLimits

0xa5e7,	// (0x00048347) vid4_progress_pane_t1_ParamLimits

0xf023,	// (0x0004cd83) vid4_progress_pane_t2_ParamLimits

0xf038,	// (0x0004cd98) vid4_progress_pane_t3_ParamLimits

0xfa3b,	// (0x0004d79b) vid4_progress_pane_t_ParamLimits

0xa5fd,	// (0x0004835d) wait_bar_pane_cp07_ParamLimits

0xaae5,	// (0x00048845) main_cam6_set_pane_g2_ParamLimits

0xaae5,	// (0x00048845) main_cam6_set_pane_g2

0xab09,	// (0x00048869) main_cset6_listscroll_pane_ParamLimits

0xab09,	// (0x00048869) main_cset6_listscroll_pane

0xab25,	// (0x00048885) main_cset6_slider_pane_ParamLimits

0xab25,	// (0x00048885) main_cset6_slider_pane

0xab3b,	// (0x0004889b) main_cset6_text2_pane_ParamLimits

0xab3b,	// (0x0004889b) main_cset6_text2_pane

0xd8fe,	// (0x0004b65e) main_cset6_text_pane

0xd906,	// (0x0004b666) main_cset_list_pane_copy1_ParamLimits

0xd906,	// (0x0004b666) main_cset_list_pane_copy1

0xd916,	// (0x0004b676) scroll_pane_cp028_copy1

0xab49,	// (0x000488a9) cset_list_set_pane_copy1

0xab5b,	// (0x000488bb) aid_position_infowindow_above_copy1

0xab63,	// (0x000488c3) aid_position_infowindow_below_copy1

0x3c6c,	// (0x000419cc) cset_list_set_pane_g1_copy1

0x3c74,	// (0x000419d4) cset_list_set_pane_g3_copy1_ParamLimits

0x3c74,	// (0x000419d4) cset_list_set_pane_g3_copy1

0x3c83,	// (0x000419e3) cset_list_set_pane_t1_copy1_ParamLimits

0x3c83,	// (0x000419e3) cset_list_set_pane_t1_copy1

0x08c6,	// (0x0003e626) list_highlight_pane_cp021_copy1_ParamLimits

0x08c6,	// (0x0003e626) list_highlight_pane_cp021_copy1

0xd91f,	// (0x0004b67f) cset6_slider_pane_ParamLimits

0xd91f,	// (0x0004b67f) cset6_slider_pane

0xd94b,	// (0x0004b6ab) main_cset6_slider_pane_g1_ParamLimits

0xd94b,	// (0x0004b6ab) main_cset6_slider_pane_g1

0xab6b,	// (0x000488cb) main_cset6_slider_pane_g2_ParamLimits

0xab6b,	// (0x000488cb) main_cset6_slider_pane_g2

0xd973,	// (0x0004b6d3) main_cset6_slider_pane_g3_ParamLimits

0xd973,	// (0x0004b6d3) main_cset6_slider_pane_g3

0xab93,	// (0x000488f3) main_cset6_slider_pane_g4_ParamLimits

0xab93,	// (0x000488f3) main_cset6_slider_pane_g4

0xd97f,	// (0x0004b6df) main_cset6_slider_pane_g5_ParamLimits

0xd97f,	// (0x0004b6df) main_cset6_slider_pane_g5

0x9a3e,	// (0x0004779e) main_cset6_slider_pane_g7_ParamLimits

0x9a3e,	// (0x0004779e) main_cset6_slider_pane_g7

0x9a4a,	// (0x000477aa) main_cset6_slider_pane_g8_ParamLimits

0x9a4a,	// (0x000477aa) main_cset6_slider_pane_g8

0x9a56,	// (0x000477b6) main_cset6_slider_pane_g9_ParamLimits

0x9a56,	// (0x000477b6) main_cset6_slider_pane_g9

0x9a62,	// (0x000477c2) main_cset6_slider_pane_g10_ParamLimits

0x9a62,	// (0x000477c2) main_cset6_slider_pane_g10

0x9a6e,	// (0x000477ce) main_cset6_slider_pane_g11_ParamLimits

0x9a6e,	// (0x000477ce) main_cset6_slider_pane_g11

0x9a7a,	// (0x000477da) main_cset6_slider_pane_g12_ParamLimits

0x9a7a,	// (0x000477da) main_cset6_slider_pane_g12

0x9a86,	// (0x000477e6) main_cset6_slider_pane_g13_ParamLimits

0x9a86,	// (0x000477e6) main_cset6_slider_pane_g13

0x9a92,	// (0x000477f2) main_cset6_slider_pane_g14_ParamLimits

0x9a92,	// (0x000477f2) main_cset6_slider_pane_g14

0xab9f,	// (0x000488ff) main_cset6_slider_pane_g15_ParamLimits

0xab9f,	// (0x000488ff) main_cset6_slider_pane_g15

0x9ab6,	// (0x00047816) main_cset6_slider_pane_g16_ParamLimits

0x9ab6,	// (0x00047816) main_cset6_slider_pane_g16

0x9ac2,	// (0x00047822) main_cset6_slider_pane_g17_ParamLimits

0x9ac2,	// (0x00047822) main_cset6_slider_pane_g17

0x0011,

0xfb08,	// (0x0004d868) main_cset6_slider_pane_g_ParamLimits

0xfb08,	// (0x0004d868) main_cset6_slider_pane_g

0xd98b,	// (0x0004b6eb) main_cset6_slider_pane_t1_ParamLimits

0xd98b,	// (0x0004b6eb) main_cset6_slider_pane_t1

0xabcf,	// (0x0004892f) main_cset6_slider_pane_t2_ParamLimits

0xabcf,	// (0x0004892f) main_cset6_slider_pane_t2

0xabfa,	// (0x0004895a) main_cset6_slider_pane_t3_ParamLimits

0xabfa,	// (0x0004895a) main_cset6_slider_pane_t3

0xac25,	// (0x00048985) main_cset6_slider_pane_t4_ParamLimits

0xac25,	// (0x00048985) main_cset6_slider_pane_t4

0xac50,	// (0x000489b0) main_cset6_slider_pane_t5_ParamLimits

0xac50,	// (0x000489b0) main_cset6_slider_pane_t5

0xd9cc,	// (0x0004b72c) main_cset6_slider_pane_t7_ParamLimits

0xd9cc,	// (0x0004b72c) main_cset6_slider_pane_t7

0xac7b,	// (0x000489db) main_cset6_slider_pane_t8_ParamLimits

0xac7b,	// (0x000489db) main_cset6_slider_pane_t8

0xac9f,	// (0x000489ff) main_cset6_slider_pane_t9_ParamLimits

0xac9f,	// (0x000489ff) main_cset6_slider_pane_t9

0xacc3,	// (0x00048a23) main_cset6_slider_pane_t10_ParamLimits

0xacc3,	// (0x00048a23) main_cset6_slider_pane_t10

0xace7,	// (0x00048a47) main_cset6_slider_pane_t11_ParamLimits

0xace7,	// (0x00048a47) main_cset6_slider_pane_t11

0xda02,	// (0x0004b762) main_cset6_slider_pane_t14_ParamLimits

0xda02,	// (0x0004b762) main_cset6_slider_pane_t14

0xda3b,	// (0x0004b79b) main_cset6_slider_pane_t15_ParamLimits

0xda3b,	// (0x0004b79b) main_cset6_slider_pane_t15

0x000b,

0xfb2d,	// (0x0004d88d) main_cset6_slider_pane_t_ParamLimits

0xfb2d,	// (0x0004d88d) main_cset6_slider_pane_t

0x8835,	// (0x00046595) cset_slider_pane_g1_copy1

0xd471,	// (0x0004b1d1) cset_slider_pane_g2_copy1

0xd47a,	// (0x0004b1da) cset_slider_pane_g3_copy1

0x021e,	// (0x0003df7e) bg_popup_sub_pane_cp011_copy1

0xda7d,	// (0x0004b7dd) main_cset_text_pane_g1_copy1

0xa0bc,	// (0x00047e1c) main_cset_text_pane_t1_copy1

0xa0ca,	// (0x00047e2a) main_cset_text_pane_t2_copy1

0xa0d8,	// (0x00047e38) main_cset_text_pane_t3_copy1

0xa0e6,	// (0x00047e46) main_cset_text_pane_t4_copy1

0xa0f4,	// (0x00047e54) main_cset_text_pane_t5_copy1

0xda85,	// (0x0004b7e5) main_cset_text_pane_t6_copy1

0xda93,	// (0x0004b7f3) main_cset_text_pane_t7_copy1

0xaac7,	// (0x00048827) main_cset_text2_pane_t1_copy1

0x08c6,	// (0x0003e626) main_ncimui_pane

0x6e1a,	// (0x00044b7a) popup_query_ncimui_window_ParamLimits

0x6e1a,	// (0x00044b7a) popup_query_ncimui_window

0xd024,	// (0x0004ad84) field_cale_ev2_pane_g4_ParamLimits

0xd024,	// (0x0004ad84) field_cale_ev2_pane_g4

0x8a47,	// (0x000467a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8a47,	// (0x000467a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf811,	// (0x0004d571) cell_video_dialer_keypad_pane_g_ParamLimits

0xf811,	// (0x0004d571) cell_video_dialer_keypad_pane_g

0x8a5f,	// (0x000467bf) cell_video_dialer_keypad_pane_t1

0x021e,	// (0x0003df7e) bg_popup_window_pane_cp012

0x28b0,	// (0x00040610) heading_pane_cp06

0xdabf,	// (0x0004b81f) ncim_query_content_pane

0x021e,	// (0x0003df7e) bg_popup_heading_pane_cp01

0xdac7,	// (0x0004b827) ncim_heading_pane_t1

0xdad5,	// (0x0004b835) ncim_indicator_popup_pane

0xdae7,	// (0x0004b847) ncim_query_button_pane

0xdafb,	// (0x0004b85b) ncim_query_content_pane_t1

0xdb0d,	// (0x0004b86d) ncim_query_content_pane_t2

0x0005,

0xfb71,	// (0x0004d8d1) ncim_query_content_pane_t

0xdb47,	// (0x0004b8a7) ncim_query_list_pane

0xdb59,	// (0x0004b8b9) ncim_query_popup_pane

0xdad5,	// (0x0004b835) ncim_indicator_popup_pane_ParamLimits

0xae34,	// (0x00048b94) ncim_query_content_pane_g1_ParamLimits

0xae34,	// (0x00048b94) ncim_query_content_pane_g1

0xdafb,	// (0x0004b85b) ncim_query_content_pane_t1_ParamLimits

0xdb0d,	// (0x0004b86d) ncim_query_content_pane_t2_ParamLimits

0xae40,	// (0x00048ba0) ncim_query_content_pane_t3_ParamLimits

0xae40,	// (0x00048ba0) ncim_query_content_pane_t3

0xae68,	// (0x00048bc8) ncim_query_content_pane_t4_ParamLimits

0xae68,	// (0x00048bc8) ncim_query_content_pane_t4

0xae90,	// (0x00048bf0) ncim_query_content_pane_t5_ParamLimits

0xae90,	// (0x00048bf0) ncim_query_content_pane_t5

0xdb1f,	// (0x0004b87f) ncim_query_content_pane_t6_ParamLimits

0xdb1f,	// (0x0004b87f) ncim_query_content_pane_t6

0xfb71,	// (0x0004d8d1) ncim_query_content_pane_t_ParamLimits

0xdb47,	// (0x0004b8a7) ncim_query_list_pane_ParamLimits

0xdb59,	// (0x0004b8b9) ncim_query_popup_pane_ParamLimits

0xdb6d,	// (0x0004b8cd) wait_bar_pane_cp04

0x021e,	// (0x0003df7e) input_focus_pane_cp011

0xdb75,	// (0x0004b8d5) ncim_query_popup_pane_t1

0xdb83,	// (0x0004b8e3) ncim_list_query_list_pane_ParamLimits

0xdb83,	// (0x0004b8e3) ncim_list_query_list_pane

0x021e,	// (0x0003df7e) bg_button_pane_cp027

0xdb90,	// (0x0004b8f0) ncim_query_button_pane_g1

0x021e,	// (0x0003df7e) list_highlight_pane_cp012

0xdb9a,	// (0x0004b8fa) ncim_list_query_list_pane_g1

0xdba2,	// (0x0004b902) ncim_list_query_list_pane_t1

0xd392,	// (0x0004b0f2) cam4_indicators_pane_g3_ParamLimits

0xd392,	// (0x0004b0f2) cam4_indicators_pane_g3

0xd40d,	// (0x0004b16d) vid4_indicators_pane_g5_ParamLimits

0xd40d,	// (0x0004b16d) vid4_indicators_pane_g5

0xf017,	// (0x0004cd77) vid4_progress_pane_g5_ParamLimits

0xf017,	// (0x0004cd77) vid4_progress_pane_g5

0xad1f,	// (0x00048a7f) main_ncimui_pane_g1

0xad88,	// (0x00048ae8) ncimui_group_query_pane_ParamLimits

0xad88,	// (0x00048ae8) ncimui_group_query_pane

0xadd0,	// (0x00048b30) ncimui_list_pane_ParamLimits

0xadd0,	// (0x00048b30) ncimui_list_pane

0xadf7,	// (0x00048b57) ncimui_text_pane_ParamLimits

0xadf7,	// (0x00048b57) ncimui_text_pane

0xaeb8,	// (0x00048c18) ncimui_text_pane_t1_ParamLimits

0xaeb8,	// (0x00048c18) ncimui_text_pane_t1

0xdbb0,	// (0x0004b910) ncimui_list_single_graphic_pane_ParamLimits

0xdbb0,	// (0x0004b910) ncimui_list_single_graphic_pane

0xaed6,	// (0x00048c36) ncimui_query_pane_ParamLimits

0xaed6,	// (0x00048c36) ncimui_query_pane

0x021e,	// (0x0003df7e) list_highlight_pane_cp013

0xdbc0,	// (0x0004b920) ncim_list_query_list_pane_t1_copy1

0xdbce,	// (0x0004b92e) ncim_list_single_graphic_pane_g1

0xaee9,	// (0x00048c49) ncim_query_button_pane_cp01

0xaef5,	// (0x00048c55) ncim_query_entry_pane_ParamLimits

0xaef5,	// (0x00048c55) ncim_query_entry_pane

0xaf08,	// (0x00048c68) ncimui_query_pane_g1

0xaf14,	// (0x00048c74) ncimui_query_pane_t1_ParamLimits

0xaf14,	// (0x00048c74) ncimui_query_pane_t1

0x08c6,	// (0x0003e626) input_focus_pane_cp012

0xdbd6,	// (0x0004b936) ncim_query_entry_pane_t1

0x0991,	// (0x0003e6f1) main_im_pane_ParamLimits

0x08c6,	// (0x0003e626) main_mobtv_pane_ParamLimits

0x08c6,	// (0x0003e626) main_mobtv_pane

0xabb7,	// (0x00048917) main_cset6_slider_pane_g18_ParamLimits

0xabb7,	// (0x00048917) main_cset6_slider_pane_g18

0xabc3,	// (0x00048923) main_cset6_slider_pane_g19_ParamLimits

0xabc3,	// (0x00048923) main_cset6_slider_pane_g19

0x093b,	// (0x0003e69b) bg_main_mobtv_pane_ParamLimits

0x093b,	// (0x0003e69b) bg_main_mobtv_pane

0xaf2d,	// (0x00048c8d) main_mobtv_info_pane

0xaf36,	// (0x00048c96) main_mobtv_loading_pane_ParamLimits

0xaf36,	// (0x00048c96) main_mobtv_loading_pane

0xdbe8,	// (0x0004b948) main_mobtv_pg_channel_list_pane

0xdbf2,	// (0x0004b952) main_mobtv_pg_hdr_pane

0xaf43,	// (0x00048ca3) main_mobtv_programe_curr_pane_ParamLimits

0xaf43,	// (0x00048ca3) main_mobtv_programe_curr_pane

0xaf50,	// (0x00048cb0) main_mobtv_programe_next_pane_ParamLimits

0xaf50,	// (0x00048cb0) main_mobtv_programe_next_pane

0xdbfb,	// (0x0004b95b) popup_mobtv_noti_window

0x0b79,	// (0x0003e8d9) main_tv_pg_hdr_pane_g1

0xdc03,	// (0x0004b963) main_tv_pg_hdr_pane_g2

0xdc0b,	// (0x0004b96b) main_tv_pg_hdr_pane_g3

0xdc13,	// (0x0004b973) main_tv_pg_hdr_pane_g4

0xdc1b,	// (0x0004b97b) main_tv_pg_hdr_pane_g5

0xdc25,	// (0x0004b985) main_tv_pg_hdr_pane_g6

0xdc2f,	// (0x0004b98f) main_tv_pg_hdr_pane_g7

0xdc39,	// (0x0004b999) main_tv_pg_hdr_pane_g8

0xdc43,	// (0x0004b9a3) main_tv_pg_hdr_pane_g9

0xdc4d,	// (0x0004b9ad) main_tv_pg_hdr_pane_g10

0xdc57,	// (0x0004b9b7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb7e,	// (0x0004d8de) main_tv_pg_hdr_pane_g

0xdc61,	// (0x0004b9c1) main_tv_pg_hdr_pane_t1

0xdc6f,	// (0x0004b9cf) main_tv_pg_hdr_pane_t2

0xdc7d,	// (0x0004b9dd) main_tv_pg_hdr_pane_t3

0xdc8d,	// (0x0004b9ed) main_tv_pg_hdr_pane_t4

0xdc9d,	// (0x0004b9fd) main_tv_pg_hdr_pane_t5

0x0004,

0xfb95,	// (0x0004d8f5) main_tv_pg_hdr_pane_t

0xdcad,	// (0x0004ba0d) single_mobtv_pg_channel_pane_ParamLimits

0xdcad,	// (0x0004ba0d) single_mobtv_pg_channel_pane

0xdcbf,	// (0x0004ba1f) single_mobtv_pg_channel_table_pane

0x0ea1,	// (0x0003ec01) single_mobtv_pg_channel_thumb_pane

0xdcc8,	// (0x0004ba28) single_tv_pg_channel_pane_g1

0xdcd1,	// (0x0004ba31) single_tv_pg_channel_pane_g2

0x0001,

0xfba0,	// (0x0004d900) single_tv_pg_channel_pane_g

0x091f,	// (0x0003e67f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x091f,	// (0x0003e67f) bg_single_mobtv_pg_channel_thumb_pane

0xdcda,	// (0x0004ba3a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdcda,	// (0x0004ba3a) single_mobtv_pg_channel_thumb_pane_g1

0xdce8,	// (0x0004ba48) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdce8,	// (0x0004ba48) single_mobtv_pg_channel_thumb_pane_g2

0xdcf4,	// (0x0004ba54) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdcf4,	// (0x0004ba54) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba5,	// (0x0004d905) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba5,	// (0x0004d905) single_mobtv_pg_channel_thumb_pane_g

0xdd00,	// (0x0004ba60) single_mobtv_pg_channel_thumb_pane_t1

0xdd0e,	// (0x0004ba6e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbac,	// (0x0004d90c) single_mobtv_pg_channel_thumb_pane_t

0x0b79,	// (0x0003e8d9) bg_single_mobtv_pg_channel_table_pane_g1

0x0b79,	// (0x0003e8d9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3be,	// (0x0004d11e) bg_single_mobtv_pg_channel_table_pane_g

0xdd1c,	// (0x0004ba7c) single_mobtv_pg_channel_table_pane_t1

0xdd2a,	// (0x0004ba8a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb1,	// (0x0004d911) single_mobtv_pg_channel_table_pane_t

0xaf65,	// (0x00048cc5) main_mobtv_info_pane_g1_ParamLimits

0xaf65,	// (0x00048cc5) main_mobtv_info_pane_g1

0xaf83,	// (0x00048ce3) main_mobtv_info_pane_t1_ParamLimits

0xaf83,	// (0x00048ce3) main_mobtv_info_pane_t1

0xaffb,	// (0x00048d5b) main_mobtv_info_pane_t2_ParamLimits

0xaffb,	// (0x00048d5b) main_mobtv_info_pane_t2

0x0002,

0xfbbb,	// (0x0004d91b) main_mobtv_info_pane_t_ParamLimits

0xfbbb,	// (0x0004d91b) main_mobtv_info_pane_t

0xb08a,	// (0x00048dea) wait_bar_pane_cp05

0xb09c,	// (0x00048dfc) main_mobtv_loading_pane_g1_ParamLimits

0xb09c,	// (0x00048dfc) main_mobtv_loading_pane_g1

0xb0af,	// (0x00048e0f) main_mobtv_loading_pane_g2_ParamLimits

0xb0af,	// (0x00048e0f) main_mobtv_loading_pane_g2

0xb0bb,	// (0x00048e1b) main_mobtv_loading_pane_g3_ParamLimits

0xb0bb,	// (0x00048e1b) main_mobtv_loading_pane_g3

0x0002,

0xfbc2,	// (0x0004d922) main_mobtv_loading_pane_g_ParamLimits

0xfbc2,	// (0x0004d922) main_mobtv_loading_pane_g

0xdd38,	// (0x0004ba98) main_mobtv_loading_pane_t1_ParamLimits

0xdd38,	// (0x0004ba98) main_mobtv_loading_pane_t1

0xdd50,	// (0x0004bab0) main_mobtv_loading_pane_t2_ParamLimits

0xdd50,	// (0x0004bab0) main_mobtv_loading_pane_t2

0x0001,

0xfbc9,	// (0x0004d929) main_mobtv_loading_pane_t_ParamLimits

0xfbc9,	// (0x0004d929) main_mobtv_loading_pane_t

0xb0ce,	// (0x00048e2e) wait_bar_pane_cp06_ParamLimits

0xb0ce,	// (0x00048e2e) wait_bar_pane_cp06

0xdd74,	// (0x0004bad4) main_mobtv_programe_curr_pane_t1

0xdd82,	// (0x0004bae2) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbce,	// (0x0004d92e) main_mobtv_programe_curr_pane_t

0xdd90,	// (0x0004baf0) main_mobtv_programe_next_pane_t1

0xdd9e,	// (0x0004bafe) main_mobtv_programe_next_pane_t2

0xddac,	// (0x0004bb0c) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd3,	// (0x0004d933) main_mobtv_programe_next_pane_t

0x021e,	// (0x0003df7e) bg_popup_mobtv_noti_window_pane

0xddba,	// (0x0004bb1a) popup_mobtv_noti_window_g1

0xddc2,	// (0x0004bb22) popup_mobtv_noti_window_t1

0xddd0,	// (0x0004bb30) popup_mobtv_noti_window_t2

0x0001,

0xfbda,	// (0x0004d93a) popup_mobtv_noti_window_t

0x0b79,	// (0x0003e8d9) bg_popup_mobtv_noti_window_pane_g1

0x021e,	// (0x0003df7e) sc_clock_pane

0x021e,	// (0x0003df7e) main_fs_bigclock_pane

0xa80a,	// (0x0004856a) blid2_tripm_pane_t4_ParamLimits

0xa80a,	// (0x0004856a) blid2_tripm_pane_t4

0xb0dd,	// (0x00048e3d) sc_clock_pane_g1_ParamLimits

0xb0dd,	// (0x00048e3d) sc_clock_pane_g1

0xb0ef,	// (0x00048e4f) sc_clock_pane_t1_ParamLimits

0xb0ef,	// (0x00048e4f) sc_clock_pane_t1

0xb111,	// (0x00048e71) sc_clock_pane_t2_ParamLimits

0xb111,	// (0x00048e71) sc_clock_pane_t2

0xb129,	// (0x00048e89) sc_clock_pane_t3_ParamLimits

0xb129,	// (0x00048e89) sc_clock_pane_t3

0x0004,

0xfbdf,	// (0x0004d93f) sc_clock_pane_t_ParamLimits

0xfbdf,	// (0x0004d93f) sc_clock_pane_t

0xbb0e,	// (0x0004986e) main_fs_bigclock_indicator_pane_ParamLimits

0xbb0e,	// (0x0004986e) main_fs_bigclock_indicator_pane

0xb1cf,	// (0x00048f2f) main_fs_bigclock_pane_g1_ParamLimits

0xb1cf,	// (0x00048f2f) main_fs_bigclock_pane_g1

0xbb1a,	// (0x0004987a) main_fs_bigclock_pane_t1_ParamLimits

0xbb1a,	// (0x0004987a) main_fs_bigclock_pane_t1

0xbb2c,	// (0x0004988c) main_fs_bigclock_pane_t2_ParamLimits

0xbb2c,	// (0x0004988c) main_fs_bigclock_pane_t2

0xbb40,	// (0x000498a0) main_fs_bigclock_pane_t3_ParamLimits

0xbb40,	// (0x000498a0) main_fs_bigclock_pane_t3

0x0002,

0xfd70,	// (0x0004dad0) main_fs_bigclock_pane_t_ParamLimits

0xfd70,	// (0x0004dad0) main_fs_bigclock_pane_t

0xe95f,	// (0x0004c6bf) main_fs_bigclock_indicator_pane_g1

0xdaef,	// (0x0004b84f) ncim_query_content_pane_g2_ParamLimits

0xdaef,	// (0x0004b84f) ncim_query_content_pane_g2

0x0001,

0xfb6c,	// (0x0004d8cc) ncim_query_content_pane_g_ParamLimits

0xfb6c,	// (0x0004d8cc) ncim_query_content_pane_g

0xb142,	// (0x00048ea2) sc_clock_pane_t4_ParamLimits

0xb142,	// (0x00048ea2) sc_clock_pane_t4

0x08c6,	// (0x0003e626) main_radioblah_pane

0xd307,	// (0x0004b067) cell_call4_button_pane_t1_copy1_ParamLimits

0xd307,	// (0x0004b067) cell_call4_button_pane_t1_copy1

0xad37,	// (0x00048a97) main_ncimui_pane_t1_ParamLimits

0xad37,	// (0x00048a97) main_ncimui_pane_t1

0xad51,	// (0x00048ab1) main_ncimui_pane_t2_ParamLimits

0xad51,	// (0x00048ab1) main_ncimui_pane_t2

0x0002,

0xfb65,	// (0x0004d8c5) main_ncimui_pane_t_ParamLimits

0xfb65,	// (0x0004d8c5) main_ncimui_pane_t

0xdf16,	// (0x0004bc76) main_radioblah_anim_pane_ParamLimits

0xdf16,	// (0x0004bc76) main_radioblah_anim_pane

0xdf27,	// (0x0004bc87) main_radioblah_info_pane_ParamLimits

0xdf27,	// (0x0004bc87) main_radioblah_info_pane

0xdf3b,	// (0x0004bc9b) main_radioblah_pane_t1_ParamLimits

0xdf3b,	// (0x0004bc9b) main_radioblah_pane_t1

0xdf57,	// (0x0004bcb7) main_radioblah_pane_t2_ParamLimits

0xdf57,	// (0x0004bcb7) main_radioblah_pane_t2

0x0003,

0xfc00,	// (0x0004d960) main_radioblah_pane_t_ParamLimits

0xfc00,	// (0x0004d960) main_radioblah_pane_t

0xb22e,	// (0x00048f8e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb22e,	// (0x00048f8e) main_radioblah_rocker_ctrl_pane

0xdf9f,	// (0x0004bcff) main_radioblah_info_pane_t1_ParamLimits

0xdf9f,	// (0x0004bcff) main_radioblah_info_pane_t1

0xb286,	// (0x00048fe6) main_radioblah_info_pane_t2_ParamLimits

0xb286,	// (0x00048fe6) main_radioblah_info_pane_t2

0x0003,

0xfc09,	// (0x0004d969) main_radioblah_info_pane_t_ParamLimits

0xfc09,	// (0x0004d969) main_radioblah_info_pane_t

0x0b79,	// (0x0003e8d9) main_radioblah_rocker_ctrl_pane_g1

0xb336,	// (0x00049096) main_radioblah_rocker_ctrl_pane_g2

0xb33e,	// (0x0004909e) main_radioblah_rocker_ctrl_pane_g3

0xb346,	// (0x000490a6) main_radioblah_rocker_ctrl_pane_g4

0xb34e,	// (0x000490ae) main_radioblah_rocker_ctrl_pane_g5

0xb356,	// (0x000490b6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc12,	// (0x0004d972) main_radioblah_rocker_ctrl_pane_g

0xaac7,	// (0x00048827) main_cset_text2_pane_t1_copy1_ParamLimits

0xd365,	// (0x0004b0c5) cam4_image_uncrop_qvga_pane

0xd3b8,	// (0x0004b118) vid4_image_uncrop_qcif_pane

0xf04e,	// (0x0004cdae) cam6_image_uncrop_qvga_pane_ParamLimits

0xf04e,	// (0x0004cdae) cam6_image_uncrop_qvga_pane

0xd7e1,	// (0x0004b541) vid6_image_uncrop_qcif_pane_ParamLimits

0xd7e1,	// (0x0004b541) vid6_image_uncrop_qcif_pane

0x021e,	// (0x0003df7e) bg_popup_preview_window_pane_cp03

0xdaa1,	// (0x0004b801) list_cset_text2_pane

0xdaa9,	// (0x0004b809) main_cset6_text2_pane_g1

0xdab1,	// (0x0004b811) main_cset6_text2_pane_t1

0xdfd9,	// (0x0004bd39) list_cset_text2_pane_t1_ParamLimits

0xdfd9,	// (0x0004bd39) list_cset_text2_pane_t1

0x08c6,	// (0x0003e626) main_radioblah_pane_ParamLimits

0xb076,	// (0x00048dd6) main_mobtv_info_pane_t3_ParamLimits

0xb076,	// (0x00048dd6) main_mobtv_info_pane_t3

0xb21c,	// (0x00048f7c) main_radioblah_pane_g1

0xb256,	// (0x00048fb6) main_radioblah_info_pane_g1

0xb2db,	// (0x0004903b) main_radioblah_info_pane_t3_ParamLimits

0xb2db,	// (0x0004903b) main_radioblah_info_pane_t3

0x5bdb,	// (0x0004393b) highlight_cell_cale_month_pane_ParamLimits

0x5bdb,	// (0x0004393b) highlight_cell_cale_month_pane

0x021e,	// (0x0003df7e) main_phob_fisheye_pane

0x7f91,	// (0x00045cf1) scroll_pane_cp0031_ParamLimits

0x7f91,	// (0x00045cf1) scroll_pane_cp0031

0xd8ef,	// (0x0004b64f) wait_bar_pane_cp08_ParamLimits

0xab49,	// (0x000488a9) cset_list_set_pane_copy1_ParamLimits

0xdff4,	// (0x0004bd54) highlight_cell_cale_month_pane_g1

0xb35e,	// (0x000490be) highlight_cell_cale_month_pane_t1

0xa51b,	// (0x0004827b) list_gen_pane_cp01

0x9991,	// (0x000476f1) scroll_pane_01

0xb36c,	// (0x000490cc) list_single_double_fisheye_pane

0x3cb5,	// (0x00041a15) list_double_fisheye_pane_g1_ParamLimits

0x3cb5,	// (0x00041a15) list_double_fisheye_pane_g1

0x3cc1,	// (0x00041a21) list_double_fisheye_pane_g2_ParamLimits

0x3cc1,	// (0x00041a21) list_double_fisheye_pane_g2

0xb375,	// (0x000490d5) list_double_fisheye_pane_g3_ParamLimits

0xb375,	// (0x000490d5) list_double_fisheye_pane_g3

0x0004,

0xfc1f,	// (0x0004d97f) list_double_fisheye_pane_g_ParamLimits

0xfc1f,	// (0x0004d97f) list_double_fisheye_pane_g

0x3cf2,	// (0x00041a52) list_double_fisheye_pane_t1_ParamLimits

0x3cf2,	// (0x00041a52) list_double_fisheye_pane_t1

0x3d0d,	// (0x00041a6d) list_double_fisheye_pane_t2_ParamLimits

0x3d0d,	// (0x00041a6d) list_double_fisheye_pane_t2

0x0001,

0xfc2a,	// (0x0004d98a) list_double_fisheye_pane_t_ParamLimits

0xfc2a,	// (0x0004d98a) list_double_fisheye_pane_t

0x021e,	// (0x0003df7e) main_call5_pane

0xb16d,	// (0x00048ecd) sc_swipe_pane_ParamLimits

0xb16d,	// (0x00048ecd) sc_swipe_pane

0xb394,	// (0x000490f4) call5_image_pane_ParamLimits

0xb394,	// (0x000490f4) call5_image_pane

0xb3b1,	// (0x00049111) call5_swipe_1_pane_ParamLimits

0xb3b1,	// (0x00049111) call5_swipe_1_pane

0xb3c4,	// (0x00049124) call5_swipe_2_pane_ParamLimits

0xb3c4,	// (0x00049124) call5_swipe_2_pane

0xb3ef,	// (0x0004914f) popup_call5_audio_first_window_ParamLimits

0xb3ef,	// (0x0004914f) popup_call5_audio_first_window

0x091f,	// (0x0003e67f) call5_swipe_1_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) call5_swipe_1_pane_g1

0xdffc,	// (0x0004bd5c) call5_swipe_1_pane_g2_ParamLimits

0xdffc,	// (0x0004bd5c) call5_swipe_1_pane_g2

0x0001,

0xfc2f,	// (0x0004d98f) call5_swipe_1_pane_g_ParamLimits

0xfc2f,	// (0x0004d98f) call5_swipe_1_pane_g

0xe008,	// (0x0004bd68) call5_swipe_1_pane_t1_ParamLimits

0xe008,	// (0x0004bd68) call5_swipe_1_pane_t1

0x091f,	// (0x0003e67f) call5_swipe_2_pane_g1_ParamLimits

0x091f,	// (0x0003e67f) call5_swipe_2_pane_g1

0xe01d,	// (0x0004bd7d) call5_swipe_2_pane_g2_ParamLimits

0xe01d,	// (0x0004bd7d) call5_swipe_2_pane_g2

0x0001,

0xfc34,	// (0x0004d994) call5_swipe_2_pane_g_ParamLimits

0xfc34,	// (0x0004d994) call5_swipe_2_pane_g

0xe029,	// (0x0004bd89) call5_swipe_2_pane_t1_ParamLimits

0xe029,	// (0x0004bd89) call5_swipe_2_pane_t1

0xe03e,	// (0x0004bd9e) sc_swipe_pane_g1_ParamLimits

0xe03e,	// (0x0004bd9e) sc_swipe_pane_g1

0xe04b,	// (0x0004bdab) sc_swipe_pane_g2_ParamLimits

0xe04b,	// (0x0004bdab) sc_swipe_pane_g2

0x0001,

0xfc39,	// (0x0004d999) sc_swipe_pane_g_ParamLimits

0xfc39,	// (0x0004d999) sc_swipe_pane_g

0xe057,	// (0x0004bdb7) sc_swipe_pane_t1_ParamLimits

0xe057,	// (0x0004bdb7) sc_swipe_pane_t1

0x021e,	// (0x0003df7e) main_cmail_launcher_pane

0xb400,	// (0x00049160) aid_size_cell_cmail_l_ParamLimits

0xb400,	// (0x00049160) aid_size_cell_cmail_l

0xb40e,	// (0x0004916e) grid_cmail_l_pane_ParamLimits

0xb40e,	// (0x0004916e) grid_cmail_l_pane

0xb428,	// (0x00049188) cell_cmail_l_pane_ParamLimits

0xb428,	// (0x00049188) cell_cmail_l_pane

0xe06c,	// (0x0004bdcc) cell_cmail_l_pane_g1_ParamLimits

0xe06c,	// (0x0004bdcc) cell_cmail_l_pane_g1

0xe078,	// (0x0004bdd8) cell_cmail_l_pane_t1_ParamLimits

0xe078,	// (0x0004bdd8) cell_cmail_l_pane_t1

0xe08e,	// (0x0004bdee) cell_cmail_l_pane_t2_ParamLimits

0xe08e,	// (0x0004bdee) cell_cmail_l_pane_t2

0x0001,

0xfc3e,	// (0x0004d99e) cell_cmail_l_pane_t_ParamLimits

0xfc3e,	// (0x0004d99e) cell_cmail_l_pane_t

0x08c6,	// (0x0003e626) grid_highlight_pane_cp018_ParamLimits

0x08c6,	// (0x0003e626) grid_highlight_pane_cp018

0x41f7,	// (0x00041f57) main2_pane_ParamLimits

0x41f7,	// (0x00041f57) main2_pane

0x0a20,	// (0x0003e780) popup_sp_fs_action_menu_bg_pane_g1

0x0a28,	// (0x0003e788) popup_sp_fs_action_menu_bg_pane_g2

0x0a30,	// (0x0003e790) popup_sp_fs_action_menu_bg_pane_g3

0x0a38,	// (0x0003e798) popup_sp_fs_action_menu_bg_pane_g4

0x0a40,	// (0x0003e7a0) popup_sp_fs_action_menu_bg_pane_g5

0x0a48,	// (0x0003e7a8) popup_sp_fs_action_menu_bg_pane_g6

0x0a50,	// (0x0003e7b0) popup_sp_fs_action_menu_bg_pane_g7

0x0a58,	// (0x0003e7b8) popup_sp_fs_action_menu_bg_pane_g8

0x0a60,	// (0x0003e7c0) popup_sp_fs_action_menu_bg_pane_g9

0x0a68,	// (0x0003e7c8) popup_sp_fs_action_menu_bg_pane_g10

0x0a68,	// (0x0003e7c8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0004ce8b) popup_sp_fs_action_menu_bg_pane_g

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g2

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0004cf39) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0004cf39) list_medium_line_x2_t3_g3_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g3_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t3_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g2_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g2

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g3

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t4_g4_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t3

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0004cf55) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0004cf55) list_medium_line_x2_t4_g4_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g2

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g3

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t2_g4_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g4_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g2

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0004cf39) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0004cf39) list_medium_line_x2_t2_g3_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g3_t

0x5d40,	// (0x00043aa0) main_sp_fs_list_pane_ParamLimits

0x5d40,	// (0x00043aa0) main_sp_fs_list_pane

0x235d,	// (0x000400bd) sp_fs_scroll_pane_ParamLimits

0x235d,	// (0x000400bd) sp_fs_scroll_pane

0x10b4,	// (0x0003ee14) list_medium_line_x2_t3_t1

0x10b4,	// (0x0003ee14) list_medium_line_x2_t3_t2

0x10b4,	// (0x0003ee14) list_medium_line_x2_t3_t3

0x0002,

0xf2a2,	// (0x0004d002) list_medium_line_x2_t3_t

0x10b4,	// (0x0003ee14) list_medium_line_x3_t4_t1

0x10b4,	// (0x0003ee14) list_medium_line_x3_t4_t2

0x10b4,	// (0x0003ee14) list_medium_line_x3_t4_t3

0x10b4,	// (0x0003ee14) list_medium_line_x3_t4_t4

0x0003,

0xf2a9,	// (0x0004d009) list_medium_line_x3_t4_t

0x10b4,	// (0x0003ee14) list_medium_line_x4_t5_t1

0x10b4,	// (0x0003ee14) list_medium_line_x4_t5_t2

0x10b4,	// (0x0003ee14) list_medium_line_x4_t5_t3

0x10b4,	// (0x0003ee14) list_medium_line_x4_t5_t4

0x10b4,	// (0x0003ee14) list_medium_line_x4_t5_t5

0x0004,

0xf2b2,	// (0x0004d012) list_medium_line_x4_t5_t

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g1

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g2

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g3

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0004cf4c) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0004cf4c) list_medium_line_t4_g4_g

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t2

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t3

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t4_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0004cf55) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0004cf55) list_medium_line_t4_g4_t

0x5de9,	// (0x00043b49) chi_dic_find_pane_g1

0x6bea,	// (0x0004494a) main_tport_pane

0x10b4,	// (0x0003ee14) list_medium_line_plain_t1

0x091f,	// (0x0003e67f) list_medium_line_t2_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_t2_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_t2_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g2_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_g2_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_g2_t

0xd55b,	// (0x0004b2bb) aid_sp_fs_list_icon_a_sm

0xd563,	// (0x0004b2c3) aid_sp_fs_list_icon_d

0xd56b,	// (0x0004b2cb) aid_sp_fs_text_primary

0xd574,	// (0x0004b2d4) aid_sp_fs_text_secondary

0x021e,	// (0x0003df7e) list_medium_line

0x021e,	// (0x0003df7e) list_medium_line_g2

0x021e,	// (0x0003df7e) list_medium_line_g3

0x021e,	// (0x0003df7e) list_medium_line_plain

0x021e,	// (0x0003df7e) list_medium_line_plain_t2

0x021e,	// (0x0003df7e) list_medium_line_plain_t3

0x021e,	// (0x0003df7e) list_medium_line_right_icon

0x021e,	// (0x0003df7e) list_medium_line_right_iconx2

0x021e,	// (0x0003df7e) list_medium_line_t2

0x021e,	// (0x0003df7e) list_medium_line_t2_g2

0x021e,	// (0x0003df7e) list_medium_line_t2_g3

0x021e,	// (0x0003df7e) list_medium_line_t2_right_icon

0x021e,	// (0x0003df7e) list_medium_line_t2_right_iconx2

0x021e,	// (0x0003df7e) list_medium_line_t3

0x021e,	// (0x0003df7e) list_medium_line_t3_g2

0x021e,	// (0x0003df7e) list_medium_line_t3_g3

0x021e,	// (0x0003df7e) list_medium_line_t3_right_iconx2

0x021e,	// (0x0003df7e) list_medium_line_t4_g4

0x021e,	// (0x0003df7e) list_medium_line_x2

0x021e,	// (0x0003df7e) list_medium_line_x2_t2_g2

0x021e,	// (0x0003df7e) list_medium_line_x2_t2_g3

0x021e,	// (0x0003df7e) list_medium_line_x2_t2_g4

0x021e,	// (0x0003df7e) list_medium_line_x2_t3

0x021e,	// (0x0003df7e) list_medium_line_x2_t3_g2

0x021e,	// (0x0003df7e) list_medium_line_x2_t3_g3

0x021e,	// (0x0003df7e) list_medium_line_x2_t3_g4

0x021e,	// (0x0003df7e) list_medium_line_x2_t4_g2

0x021e,	// (0x0003df7e) list_medium_line_x2_t4_g4

0x021e,	// (0x0003df7e) list_medium_line_x3

0x021e,	// (0x0003df7e) list_medium_line_x3_t4

0x021e,	// (0x0003df7e) list_medium_line_x3_t4_g4

0x021e,	// (0x0003df7e) list_medium_line_x4_t4

0x021e,	// (0x0003df7e) list_medium_line_x4_t4_g7

0x021e,	// (0x0003df7e) list_medium_line_x4_t5

0x3c58,	// (0x000419b8) list_single_fs_dyc_pane_ParamLimits

0x3c58,	// (0x000419b8) list_single_fs_dyc_pane

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g1

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g2

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g3

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g4

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g5

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x4_t4_g7_g6

0x092d,	// (0x0003e68d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x092d,	// (0x0003e68d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb46,	// (0x0004d8a6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb46,	// (0x0004d8a6) list_medium_line_x4_t4_g7_g

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x4_t4_g7_t3

0x0b4b,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0b4b,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t4

0x0b4b,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0b4b,	// (0x0003e8ab) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb55,	// (0x0004d8b5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb55,	// (0x0004d8b5) list_medium_line_x4_t4_g7_t

0x3c98,	// (0x000419f8) list_single_dyc_row_pane_ParamLimits

0x3c98,	// (0x000419f8) list_single_dyc_row_pane

0xb381,	// (0x000490e1) call5_gesture_pane_ParamLimits

0xb381,	// (0x000490e1) call5_gesture_pane

0xb3d7,	// (0x00049137) call5_windows_pane_ParamLimits

0xb3d7,	// (0x00049137) call5_windows_pane

0xb442,	// (0x000491a2) call5_swipe_1_pane_cp_ParamLimits

0xb442,	// (0x000491a2) call5_swipe_1_pane_cp

0xb44e,	// (0x000491ae) call5_swipe_2_pane_cp_ParamLimits

0xb44e,	// (0x000491ae) call5_swipe_2_pane_cp

0x0b43,	// (0x0003e8a3) call5_image_pane_cp

0xb45a,	// (0x000491ba) popup_call5_audio_first_window_cp_ParamLimits

0xb45a,	// (0x000491ba) popup_call5_audio_first_window_cp

0xe03e,	// (0x0004bd9e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe03e,	// (0x0004bd9e) call5_swipe_1_pane_g1_cp

0xe0ab,	// (0x0004be0b) call5_swipe_1_pane_g2_cp

0xe057,	// (0x0004bdb7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe057,	// (0x0004bdb7) call5_swipe_1_pane_t1_cp

0xe03e,	// (0x0004bd9e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe03e,	// (0x0004bd9e) call5_swipe_2_pane_g1_cp

0xe0b3,	// (0x0004be13) call5_swipe_2_pane_g2_cp

0xe0bb,	// (0x0004be1b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe0bb,	// (0x0004be1b) call5_swipe_2_pane_t1_cp

0x08c6,	// (0x0003e626) main_sp_fs_email_pane

0xe0d0,	// (0x0004be30) main_sp_fs_listscroll_pane_te

0xb468,	// (0x000491c8) popup_sp_fs_action_menu_pane_ParamLimits

0xb468,	// (0x000491c8) popup_sp_fs_action_menu_pane

0x0b79,	// (0x0003e8d9) bg_sp_fs_ctrlbar_pane_g1

0xe0d9,	// (0x0004be39) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0e2,	// (0x0004be42) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2929,	// (0x00040689) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0b79,	// (0x0003e8d9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc43,	// (0x0004d9a3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x708d,	// (0x00044ded) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x708d,	// (0x00044ded) bg_sp_fs_ctrlbar_ddmenu_pane

0xe0eb,	// (0x0004be4b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe0eb,	// (0x0004be4b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe0f7,	// (0x0004be57) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe0f7,	// (0x0004be57) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4c,	// (0x0004d9ac) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4c,	// (0x0004d9ac) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe103,	// (0x0004be63) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe103,	// (0x0004be63) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0b79,	// (0x0003e8d9) list_medium_line_t2_right_icon_g1

0x10b4,	// (0x0003ee14) list_medium_line_t2_right_icon_t1

0x10b4,	// (0x0003ee14) list_medium_line_t2_right_icon_t2

0x0001,

0xfc51,	// (0x0004d9b1) list_medium_line_t2_right_icon_t

0x21e8,	// (0x0003ff48) bg_sp_fs_ctrlbar_pane_ParamLimits

0x21e8,	// (0x0003ff48) bg_sp_fs_ctrlbar_pane

0xb4f2,	// (0x00049252) main_sp_fs_ctrlbar_button_pane_cp01

0xb4fc,	// (0x0004925c) main_sp_fs_ctrlbar_ddmenu_pane

0xe155,	// (0x0004beb5) main_sp_fs_ctrlbar_pane_g1

0xe161,	// (0x0004bec1) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc56,	// (0x0004d9b6) main_sp_fs_ctrlbar_pane_g

0xb53a,	// (0x0004929a) main_sp_fs_ctrlbar_pane_t1

0xb579,	// (0x000492d9) main_sp_fs_ctrlbar_pane

0xb59d,	// (0x000492fd) main_sp_fs_listscroll_pane_te_cp01

0x3d2f,	// (0x00041a8f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3d2f,	// (0x00041a8f) popup_sp_fs_action_menu_pane_cp01

0x08c6,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x08c6,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp01

0xe188,	// (0x0004bee8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe188,	// (0x0004bee8) sp_fs_action_menu_list_gene_pane_g1

0xe197,	// (0x0004bef7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe197,	// (0x0004bef7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc64,	// (0x0004d9c4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc64,	// (0x0004d9c4) sp_fs_action_menu_list_gene_pane_g

0xe1a4,	// (0x0004bf04) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe1a4,	// (0x0004bf04) sp_fs_action_menu_list_gene_pane_t1

0xe1bc,	// (0x0004bf1c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe1bc,	// (0x0004bf1c) sp_fs_action_menu_list_gene_pane

0xe1db,	// (0x0004bf3b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe1db,	// (0x0004bf3b) popup_sp_fs_action_menu_bg_pane

0xe1e9,	// (0x0004bf49) sp_fs_action_menu_list_pane_ParamLimits

0xe1e9,	// (0x0004bf49) sp_fs_action_menu_list_pane

0x3d54,	// (0x00041ab4) sp_fs_scroll_pane_cp01_ParamLimits

0x3d54,	// (0x00041ab4) sp_fs_scroll_pane_cp01

0x10b4,	// (0x0003ee14) list_medium_line_plain_t2_t1

0x10b4,	// (0x0003ee14) list_medium_line_plain_t2_t2

0x0001,

0xfc51,	// (0x0004d9b1) list_medium_line_plain_t2_t

0x10b4,	// (0x0003ee14) list_medium_line_plain_t3_t1

0x10b4,	// (0x0003ee14) list_medium_line_plain_t3_t2

0x10b4,	// (0x0003ee14) list_medium_line_plain_t3_t3

0x0002,

0xf2a2,	// (0x0004d002) list_medium_line_plain_t3_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t2_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_x2_t2_g2_t

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_x2_t4_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t3

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0004cf55) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0004cf55) list_medium_line_x2_t4_g2_t

0x0b79,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g1

0x0b79,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g2

0x0b79,	// (0x0003e8d9) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c3,	// (0x0004d123) list_medium_line_t3_right_iconx2_g

0x10b4,	// (0x0003ee14) list_medium_line_t3_right_iconx2_t1

0x10b4,	// (0x0003ee14) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc51,	// (0x0004d9b1) list_medium_line_t3_right_iconx2_t

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g1

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g2

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g3

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0004cf4c) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0004cf4c) list_medium_line_x3_t4_g4_g

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t3

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0004cf55) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0004cf55) list_medium_line_x3_t4_g4_t

0x3d7a,	// (0x00041ada) list_single_dyc_row_text_pane_t1_ParamLimits

0x3d7a,	// (0x00041ada) list_single_dyc_row_text_pane_t1

0x3dc3,	// (0x00041b23) list_single_dyc_row_text_pane_t2_ParamLimits

0x3dc3,	// (0x00041b23) list_single_dyc_row_text_pane_t2

0xe209,	// (0x0004bf69) list_single_dyc_row_text_pane_t3_ParamLimits

0xe209,	// (0x0004bf69) list_single_dyc_row_text_pane_t3

0x0005,

0xfc69,	// (0x0004d9c9) list_single_dyc_row_text_pane_t_ParamLimits

0xfc69,	// (0x0004d9c9) list_single_dyc_row_text_pane_t

0xe22d,	// (0x0004bf8d) list_single_dyc_row_pane_g1_ParamLimits

0xe22d,	// (0x0004bf8d) list_single_dyc_row_pane_g1

0xe239,	// (0x0004bf99) list_single_dyc_row_pane_g2_ParamLimits

0xe239,	// (0x0004bf99) list_single_dyc_row_pane_g2

0xe245,	// (0x0004bfa5) list_single_dyc_row_pane_g3_ParamLimits

0xe245,	// (0x0004bfa5) list_single_dyc_row_pane_g3

0xe251,	// (0x0004bfb1) list_single_dyc_row_pane_g4_ParamLimits

0xe251,	// (0x0004bfb1) list_single_dyc_row_pane_g4

0x0003,

0xfc76,	// (0x0004d9d6) list_single_dyc_row_pane_g_ParamLimits

0xfc76,	// (0x0004d9d6) list_single_dyc_row_pane_g

0xe25d,	// (0x0004bfbd) list_single_dyc_row_text_pane_ParamLimits

0xe25d,	// (0x0004bfbd) list_single_dyc_row_text_pane

0x021e,	// (0x0003df7e) bg_sp_fs_scroll_pane

0xe27c,	// (0x0004bfdc) thumb_sp_fs_scroll_pane

0x091f,	// (0x0003e67f) list_medium_line_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g1

0x0b93,	// (0x0003e8f3) list_medium_line_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t1

0x091f,	// (0x0003e67f) list_medium_line_x2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_x2_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t1

0x091f,	// (0x0003e67f) list_medium_line_x3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x3_g1

0xb5bd,	// (0x0004931d) list_medium_line_x3_g2_ParamLimits

0xb5bd,	// (0x0004931d) list_medium_line_x3_g2

0x0001,

0xfc7f,	// (0x0004d9df) list_medium_line_x3_g_ParamLimits

0xfc7f,	// (0x0004d9df) list_medium_line_x3_g

0xe285,	// (0x0004bfe5) list_medium_line_x3_t1_ParamLimits

0xe285,	// (0x0004bfe5) list_medium_line_x3_t1

0xe299,	// (0x0004bff9) thumb_sp_fs_scroll_pane_g1

0xe2a2,	// (0x0004c002) thumb_sp_fs_scroll_pane_g2

0xe2ab,	// (0x0004c00b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x0004d9e4) thumb_sp_fs_scroll_pane_g

0xe299,	// (0x0004bff9) bg_sp_fs_scroll_pane_g1

0xe2a2,	// (0x0004c002) bg_sp_fs_scroll_pane_g2

0xe2ab,	// (0x0004c00b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc84,	// (0x0004d9e4) bg_sp_fs_scroll_pane_g

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g1

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g2

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g3

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0004cf4c) list_medium_line_x2_t3_g4_g

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t1

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t2

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_x2_t3_g4_t

0x091f,	// (0x0003e67f) list_medium_line_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_g2_t1

0x091f,	// (0x0003e67f) list_medium_line_t3_g2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g2_g1

0x091f,	// (0x0003e67f) list_medium_line_t3_g2_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0004cf47) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0004cf47) list_medium_line_t3_g2_g

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t2

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_t3_g2_t

0x0b79,	// (0x0003e8d9) list_medium_line_right_icon_g1

0x10b4,	// (0x0003ee14) list_medium_line_right_icon_t1

0x091f,	// (0x0003e67f) list_medium_line_t2_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g1

0x0b93,	// (0x0003e8f3) list_medium_line_t2_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t2_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_t

0x091f,	// (0x0003e67f) list_medium_line_t3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g1

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t2

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_t3_t

0x091f,	// (0x0003e67f) list_medium_line_g3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g3_g1

0x091f,	// (0x0003e67f) list_medium_line_g3_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g3_g2

0x091f,	// (0x0003e67f) list_medium_line_g3_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0004cf39) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0004cf39) list_medium_line_g3_g

0x0b93,	// (0x0003e8f3) list_medium_line_g3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_g3_t1

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g1

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g2

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0004cf39) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0004cf39) list_medium_line_t2_g3_g

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g3_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g3_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t2_g3_t2

0x0001,

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_g3_t_ParamLimits

0xf1bc,	// (0x0004cf1c) list_medium_line_t2_g3_t

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g1_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g1

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g2_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g2

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g3_ParamLimits

0x091f,	// (0x0003e67f) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0004cf39) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0004cf39) list_medium_line_t3_g3_g

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t1_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t1

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t2_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t2

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t3_ParamLimits

0x0b93,	// (0x0003e8f3) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0004cf40) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0004cf40) list_medium_line_t3_g3_t

0x0b79,	// (0x0003e8d9) list_medium_line_right_iconx2_g1

0x0b79,	// (0x0003e8d9) list_medium_line_right_iconx2_g2

0x0001,

0xf3be,	// (0x0004d11e) list_medium_line_right_iconx2_g

0x10b4,	// (0x0003ee14) list_medium_line_right_iconx2_t1

0x0b79,	// (0x0003e8d9) list_medium_line_t2_right_iconx2_g1

0x0b79,	// (0x0003e8d9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3be,	// (0x0004d11e) list_medium_line_t2_right_iconx2_g

0x10b4,	// (0x0003ee14) list_medium_line_t2_right_iconx2_t1

0x10b4,	// (0x0003ee14) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc51,	// (0x0004d9b1) list_medium_line_t2_right_iconx2_t

0x10b4,	// (0x0003ee14) list_medium_line_x4_t4_t1

0x10b4,	// (0x0003ee14) list_medium_line_x4_t4_t2

0x10b4,	// (0x0003ee14) list_medium_line_x4_t4_t3

0x10b4,	// (0x0003ee14) list_medium_line_x4_t4_t4

0x0003,

0xf2a9,	// (0x0004d009) list_medium_line_x4_t4_t

0xb60e,	// (0x0004936e) tport_appsw_pane_ParamLimits

0xb60e,	// (0x0004936e) tport_appsw_pane

0xb626,	// (0x00049386) tport_contact_pane_ParamLimits

0xb626,	// (0x00049386) tport_contact_pane

0xb63e,	// (0x0004939e) tport_listscroll_pane_ParamLimits

0xb63e,	// (0x0004939e) tport_listscroll_pane

0xb658,	// (0x000493b8) cell_tport_appsw_pane_ParamLimits

0xb658,	// (0x000493b8) cell_tport_appsw_pane

0x21f6,	// (0x0003ff56) tport_appsw_pane_g1_ParamLimits

0x21f6,	// (0x0003ff56) tport_appsw_pane_g1

0xe2b4,	// (0x0004c014) tport_contact_pane_g1

0xe2bd,	// (0x0004c01d) tport_contact_pane_t1

0xe2cb,	// (0x0004c02b) tport_contact_pane_t2

0x0001,

0xfc8b,	// (0x0004d9eb) tport_contact_pane_t

0xe2d9,	// (0x0004c039) list_tport_pane

0xe2e2,	// (0x0004c042) scroll_pane_cp_030

0xb6a0,	// (0x00049400) cell_tport_appsw_pane_g1

0xb6b0,	// (0x00049410) cell_tport_appsw_pane_t1

0xb6be,	// (0x0004941e) grid_highlight_pane_cp019

0xb6c6,	// (0x00049426) list_tport_double_graphic_pane_ParamLimits

0xb6c6,	// (0x00049426) list_tport_double_graphic_pane

0x08c6,	// (0x0003e626) list_highlight_pane_cp023_ParamLimits

0x08c6,	// (0x0003e626) list_highlight_pane_cp023

0xb6d3,	// (0x00049433) list_tport_double_graphic_pane_g1_ParamLimits

0xb6d3,	// (0x00049433) list_tport_double_graphic_pane_g1

0xb6e0,	// (0x00049440) list_tport_double_graphic_pane_t1_ParamLimits

0xb6e0,	// (0x00049440) list_tport_double_graphic_pane_t1

0xb6f5,	// (0x00049455) list_tport_double_graphic_pane_t2_ParamLimits

0xb6f5,	// (0x00049455) list_tport_double_graphic_pane_t2

0x0001,

0xfc97,	// (0x0004d9f7) list_tport_double_graphic_pane_t_ParamLimits

0xfc97,	// (0x0004d9f7) list_tport_double_graphic_pane_t

0x021e,	// (0x0003df7e) main_cale_note_pane

0x945d,	// (0x000471bd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x945d,	// (0x000471bd) cell_vitu2_function_top_wide_pane_cp01

0xb08a,	// (0x00048dea) wait_bar_pane_cp05_ParamLimits

0x08c6,	// (0x0003e626) listscroll_cmail_pane

0xe2eb,	// (0x0004c04b) list_cmail_pane

0xb707,	// (0x00049467) list_cmail_body_pane

0xb71d,	// (0x0004947d) list_single_cmail_header_caption_pane

0xb734,	// (0x00049494) list_single_cmail_header_detail_pane_ParamLimits

0xb734,	// (0x00049494) list_single_cmail_header_detail_pane

0xe2fb,	// (0x0004c05b) list_single_cmail_header_caption_pane_t1

0x3ef8,	// (0x00041c58) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3ef8,	// (0x00041c58) list_single_cmail_header_detail_pane_g1

0xe312,	// (0x0004c072) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe312,	// (0x0004c072) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9c,	// (0x0004d9fc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9c,	// (0x0004d9fc) list_single_cmail_header_detail_pane_g

0xe32b,	// (0x0004c08b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe32b,	// (0x0004c08b) list_single_cmail_header_detail_pane_t1

0xe38b,	// (0x0004c0eb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe38b,	// (0x0004c0eb) list_single_cmail_header_editor_pane_bg

0xdcd1,	// (0x0004ba31) list_cmail_body_pane_g1

0xe3a2,	// (0x0004c102) list_cmail_body_pane_t1

0x955d,	// (0x000472bd) list_single_cmail_header_editor_pane_bg_g1

0x0d9e,	// (0x0003eafe) list_single_cmail_header_editor_pane_bg_g1_copy1

0x956d,	// (0x000472cd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x9565,	// (0x000472c5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x9ec9,	// (0x00047c29) list_single_cmail_header_editor_pane_bg_g1_copy4

0x958d,	// (0x000472ed) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x957d,	// (0x000472dd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x9585,	// (0x000472e5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0d7e,	// (0x0003eade) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb75e,	// (0x000494be) calenote_gesture_pane_ParamLimits

0xb75e,	// (0x000494be) calenote_gesture_pane

0xb77e,	// (0x000494de) calenote_window_pane_ParamLimits

0xb77e,	// (0x000494de) calenote_window_pane

0xe3b0,	// (0x0004c110) popup_note_window_cp01

0xb79a,	// (0x000494fa) calenote_swipe_1_pane_ParamLimits

0xb79a,	// (0x000494fa) calenote_swipe_1_pane

0xb44e,	// (0x000491ae) calenote_swipe_2_pane_ParamLimits

0xb44e,	// (0x000491ae) calenote_swipe_2_pane

0xe03e,	// (0x0004bd9e) calenote_swipe_1_pane_g1_ParamLimits

0xe03e,	// (0x0004bd9e) calenote_swipe_1_pane_g1

0xe04b,	// (0x0004bdab) calenote_swipe_1_pane_g2_ParamLimits

0xe04b,	// (0x0004bdab) calenote_swipe_1_pane_g2

0x0001,

0xfc39,	// (0x0004d999) calenote_swipe_1_pane_g_ParamLimits

0xfc39,	// (0x0004d999) calenote_swipe_1_pane_g

0xe3c2,	// (0x0004c122) calenote_swipe_1_pane_t1_ParamLimits

0xe3c2,	// (0x0004c122) calenote_swipe_1_pane_t1

0xe03e,	// (0x0004bd9e) calenote_swipe_2_pane_g1_ParamLimits

0xe03e,	// (0x0004bd9e) calenote_swipe_2_pane_g1

0xe3e1,	// (0x0004c141) calenote_swipe_2_pane_g2_ParamLimits

0xe3e1,	// (0x0004c141) calenote_swipe_2_pane_g2

0x0001,

0xfca8,	// (0x0004da08) calenote_swipe_2_pane_g_ParamLimits

0xfca8,	// (0x0004da08) calenote_swipe_2_pane_g

0xe3ed,	// (0x0004c14d) calenote_swipe_2_pane_t1_ParamLimits

0xe3ed,	// (0x0004c14d) calenote_swipe_2_pane_t1

0x021e,	// (0x0003df7e) main_mup_navstr_pane

0x7d30,	// (0x00045a90) main_mup3_pane_t7_ParamLimits

0x7d30,	// (0x00045a90) main_mup3_pane_t7

0xd133,	// (0x0004ae93) main_mp4_pane_g6_ParamLimits

0xd133,	// (0x0004ae93) main_mp4_pane_g6

0xd2f5,	// (0x0004b055) main_image3_pane_t4_ParamLimits

0xd2f5,	// (0x0004b055) main_image3_pane_t4

0xb7af,	// (0x0004950f) popup_navstr_preview_pane_ParamLimits

0xb7af,	// (0x0004950f) popup_navstr_preview_pane

0xb7c3,	// (0x00049523) scroll_navstr_pane_ParamLimits

0xb7c3,	// (0x00049523) scroll_navstr_pane

0x021e,	// (0x0003df7e) bg_popup_preview_window_pane_cp04

0xe414,	// (0x0004c174) popup_navstr_preview_pane_t1

0xb7d7,	// (0x00049537) scroll_navstr_pane_g1_ParamLimits

0xb7d7,	// (0x00049537) scroll_navstr_pane_g1

0xb7eb,	// (0x0004954b) scroll_navstr_pane_t1_ParamLimits

0xb7eb,	// (0x0004954b) scroll_navstr_pane_t1

0xe3b9,	// (0x0004c119) bg_button_pane_cp014

0xe3b9,	// (0x0004c119) bg_button_pane_cp030

0x3cd5,	// (0x00041a35) list_double_fisheye_pane_g4_ParamLimits

0x3cd5,	// (0x00041a35) list_double_fisheye_pane_g4

0x3ce1,	// (0x00041a41) list_double_fisheye_pane_g5_ParamLimits

0x3ce1,	// (0x00041a41) list_double_fisheye_pane_g5

0x235d,	// (0x000400bd) sp_fs_scroll_pane_cp03

0xe155,	// (0x0004beb5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe161,	// (0x0004bec1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc56,	// (0x0004d9b6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb53a,	// (0x0004929a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe2f3,	// (0x0004c053) sp_fs_scroll_pane_cp02

0x0a8b,	// (0x0003e7eb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0a8b,	// (0x0003e7eb) popup_sp_fs_calendar_preview_list_single_pane

0x021e,	// (0x0003df7e) main_cam6_pano_pane

0x08c6,	// (0x0003e626) main_mup3_pane_ParamLimits

0x021e,	// (0x0003df7e) main_phacti_pane

0xaf5d,	// (0x00048cbd) bg_button_pane_cp11

0xaf77,	// (0x00048cd7) main_mobtv_info_pane_g2_ParamLimits

0xaf77,	// (0x00048cd7) main_mobtv_info_pane_g2

0x0001,

0xfbb6,	// (0x0004d916) main_mobtv_info_pane_g_ParamLimits

0xfbb6,	// (0x0004d916) main_mobtv_info_pane_g

0xb154,	// (0x00048eb4) sc_clock_pane_t5_ParamLimits

0xb154,	// (0x00048eb4) sc_clock_pane_t5

0xb21c,	// (0x00048f7c) main_radioblah_pane_g1_ParamLimits

0xdf6f,	// (0x0004bccf) main_radioblah_pane_t3_ParamLimits

0xdf6f,	// (0x0004bccf) main_radioblah_pane_t3

0xdf87,	// (0x0004bce7) main_radioblah_pane_t4_ParamLimits

0xdf87,	// (0x0004bce7) main_radioblah_pane_t4

0xb244,	// (0x00048fa4) main_radioblah_text_pane_ParamLimits

0xb244,	// (0x00048fa4) main_radioblah_text_pane

0xb256,	// (0x00048fb6) main_radioblah_info_pane_g1_ParamLimits

0xb2ef,	// (0x0004904f) main_radioblah_info_pane_t4_ParamLimits

0xb2ef,	// (0x0004904f) main_radioblah_info_pane_t4

0x08c6,	// (0x0003e626) main_sp_fs_calendar_pane

0xb802,	// (0x00049562) main_phacti_pane_g1

0xb80a,	// (0x0004956a) phacti_note_pane_ParamLimits

0xb80a,	// (0x0004956a) phacti_note_pane

0xe42b,	// (0x0004c18b) phacti_term_pane_ParamLimits

0xe42b,	// (0x0004c18b) phacti_term_pane

0xe440,	// (0x0004c1a0) phacti_note_pane_t1_ParamLimits

0xe440,	// (0x0004c1a0) phacti_note_pane_t1

0xe457,	// (0x0004c1b7) phacti_term_pane_g1

0xe45f,	// (0x0004c1bf) phacti_term_pane_t1_ParamLimits

0xe45f,	// (0x0004c1bf) phacti_term_pane_t1

0xe489,	// (0x0004c1e9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe491,	// (0x0004c1f1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb2,	// (0x0004da12) popup_sp_fs_calendar_preview_list_single_pane_g

0xe499,	// (0x0004c1f9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe499,	// (0x0004c1f9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe4af,	// (0x0004c20f) aid_popup_sp_fs_bg_corner_pane

0x0b79,	// (0x0003e8d9) popup_sp_fs_calendar_preview_bg_pane_g1

0x021e,	// (0x0003df7e) popup_sp_fs_calendar_preview_bg_pane

0xe4b7,	// (0x0004c217) popup_sp_fs_calendar_preview_list_pane

0x21e8,	// (0x0003ff48) bg_main_sp_fs_cale_pane_ParamLimits

0x21e8,	// (0x0003ff48) bg_main_sp_fs_cale_pane

0xe4c8,	// (0x0004c228) listscroll_cale_mrui_pane_ParamLimits

0xe4c8,	// (0x0004c228) listscroll_cale_mrui_pane

0xe4dd,	// (0x0004c23d) listscroll_sp_fs_schedule_track_pane

0xe4e6,	// (0x0004c246) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe4e6,	// (0x0004c246) main_sp_fs_ctrlbar_pane_cp01

0xe4f9,	// (0x0004c259) main_sp_fs_ribbon_pane

0xe501,	// (0x0004c261) popup_sp_fs_cale_preview_window

0xb87f,	// (0x000495df) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb87f,	// (0x000495df) list_single_sp_fs_schedule_track_pane

0x08c6,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x08c6,	// (0x0003e626) bg_sp_fs_highlight_list_pane_cp03

0xb893,	// (0x000495f3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb893,	// (0x000495f3) list_single_sp_fs_schedule_track_pane_g1

0xb89f,	// (0x000495ff) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb89f,	// (0x000495ff) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb7,	// (0x0004da17) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb7,	// (0x0004da17) list_single_sp_fs_schedule_track_pane_g

0xb8ab,	// (0x0004960b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb8ab,	// (0x0004960b) list_single_sp_fs_schedule_track_pane_t1

0xb8c5,	// (0x00049625) sp_fs_schedule_track_pane_ParamLimits

0xb8c5,	// (0x00049625) sp_fs_schedule_track_pane

0xe513,	// (0x0004c273) sp_fs_schedule_track_pane_g1

0xe51b,	// (0x0004c27b) sp_fs_schedule_track_pane_g2

0xe523,	// (0x0004c283) sp_fs_schedule_track_pane_g3

0xe52b,	// (0x0004c28b) sp_fs_schedule_track_pane_g4

0xe533,	// (0x0004c293) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbc,	// (0x0004da1c) sp_fs_schedule_track_pane_g

0x955d,	// (0x000472bd) bg_sp_fs_schedule_viewer_highlight_g1

0x0d9e,	// (0x0003eafe) bg_sp_fs_schedule_viewer_highlight_g2

0x9565,	// (0x000472c5) bg_sp_fs_schedule_viewer_highlight_g3

0x956d,	// (0x000472cd) bg_sp_fs_schedule_viewer_highlight_g4

0x9ec9,	// (0x00047c29) bg_sp_fs_schedule_viewer_highlight_g5

0x957d,	// (0x000472dd) bg_sp_fs_schedule_viewer_highlight_g6

0x9585,	// (0x000472e5) bg_sp_fs_schedule_viewer_highlight_g7

0x958d,	// (0x000472ed) bg_sp_fs_schedule_viewer_highlight_g8

0x0d7e,	// (0x0003eade) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc7,	// (0x0004da27) bg_sp_fs_schedule_viewer_highlight_g

0x021e,	// (0x0003df7e) bg_main_sp_fs_ribbon_pane

0xb8d6,	// (0x00049636) main_sp_fs_ribbon_pane_g1

0xe53b,	// (0x0004c29b) main_sp_fs_ribbon_pane_t1

0xb8df,	// (0x0004963f) main_sp_fs_ribbon_pane_t2

0xe54a,	// (0x0004c2aa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcda,	// (0x0004da3a) main_sp_fs_ribbon_pane_t

0xe559,	// (0x0004c2b9) main_sp_fs_ribbon_scheduler_pane

0xe561,	// (0x0004c2c1) bg_main_sp_fs_ribbon_pane_g1

0xe56a,	// (0x0004c2ca) bg_main_sp_fs_ribbon_pane_g2

0xe573,	// (0x0004c2d3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce1,	// (0x0004da41) bg_main_sp_fs_ribbon_pane_g

0xe57b,	// (0x0004c2db) main_sp_fs_ribbon_scheduler_pane_g1

0xe584,	// (0x0004c2e4) main_sp_fs_ribbon_scheduler_pane_g2

0xe58d,	// (0x0004c2ed) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce8,	// (0x0004da48) main_sp_fs_ribbon_scheduler_pane_g

0xe596,	// (0x0004c2f6) list_cale_mrui_pane

0xb8ee,	// (0x0004964e) sp_fs_scroll_pane_cp07_ParamLimits

0xb8ee,	// (0x0004964e) sp_fs_scroll_pane_cp07

0xb90a,	// (0x0004966a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb90a,	// (0x0004966a) bg_sp_fs_schedule_viewer_highlight

0xe5a3,	// (0x0004c303) list_single_sp_fs_schedule_track_pane_cp01

0xe5ab,	// (0x0004c30b) list_sp_fs_schedule_track_pane

0xe5b3,	// (0x0004c313) sp_fs_scroll_pane_cp06_ParamLimits

0xe5b3,	// (0x0004c313) sp_fs_scroll_pane_cp06

0x0b79,	// (0x0003e8d9) bgmain_sp_fs_calendar_pane_g1

0x3f10,	// (0x00041c70) list_single_cale_mrui_pane_ParamLimits

0x3f10,	// (0x00041c70) list_single_cale_mrui_pane

0xe5c5,	// (0x0004c325) list_single_cale_mrui_row_pane_ParamLimits

0xe5c5,	// (0x0004c325) list_single_cale_mrui_row_pane

0xe5d2,	// (0x0004c332) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe5d2,	// (0x0004c332) list_single_cale_mrui_row_pane_g1

0xe617,	// (0x0004c377) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe617,	// (0x0004c377) list_single_cale_mrui_row_pane_t1

0x3f31,	// (0x00041c91) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3f31,	// (0x00041c91) list_single_cale_mrui_row_pane_t2

0xe629,	// (0x0004c389) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe629,	// (0x0004c389) list_single_cale_mrui_row_pane_t3

0xe658,	// (0x0004c3b8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe658,	// (0x0004c3b8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf6,	// (0x0004da56) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf6,	// (0x0004da56) list_single_cale_mrui_row_pane_t

0x3f99,	// (0x00041cf9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x3f99,	// (0x00041cf9) list_single_cmail_header_editor_pane_bg_cp01

0x3fbf,	// (0x00041d1f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x3fbf,	// (0x00041d1f) list_single_cmail_header_editor_pane_bg_cp02

0xb91a,	// (0x0004967a) main_radioblah_text_pane_t1_ParamLimits

0xb91a,	// (0x0004967a) main_radioblah_text_pane_t1

0xe687,	// (0x0004c3e7) cam6_indi_pane_cp01

0xe68f,	// (0x0004c3ef) cam6_mode_pane_cp01

0xe697,	// (0x0004c3f7) cam6_pano_pane

0xe6a0,	// (0x0004c400) cam6_zoom_pane_cp01

0xe6a8,	// (0x0004c408) cam6_pano_image_pane

0xe6b3,	// (0x0004c413) cam6_pano_pane_g1

0xdcd1,	// (0x0004ba31) cam6_pano_pane_g2

0xe6bc,	// (0x0004c41c) cam6_pano_pane_g3

0xe6c5,	// (0x0004c425) cam6_pano_pane_g4

0x8651,	// (0x000463b1) cam6_pano_pane_g5

0xe6ce,	// (0x0004c42e) cam6_pano_pane_g6

0xe6d8,	// (0x0004c438) cam6_pano_pane_g7

0xe6e0,	// (0x0004c440) cam6_pano_pane_g8

0xe6e9,	// (0x0004c449) cam6_pano_pane_g9

0x0008,

0xfcff,	// (0x0004da5f) cam6_pano_pane_g

0x021e,	// (0x0003df7e) main_browser_tag_pane

0xe40c,	// (0x0004c16c) grid_navstr_albumart_pane

0xe6f4,	// (0x0004c454) cell_navstr_albumart_pane_ParamLimits

0xe6f4,	// (0x0004c454) cell_navstr_albumart_pane

0xe714,	// (0x0004c474) cell_navstr_albumart_pane_g1

0x27b0,	// (0x00040510) cell_navstr_albumart_pane_g2

0x27c0,	// (0x00040520) cell_navstr_albumart_pane_g3

0x27b8,	// (0x00040518) cell_navstr_albumart_pane_g4

0x0003,

0xfd12,	// (0x0004da72) cell_navstr_albumart_pane_g

0xb935,	// (0x00049695) bt_list_pane_ParamLimits

0xb935,	// (0x00049695) bt_list_pane

0xb949,	// (0x000496a9) bt_list_pane_t1

0xb958,	// (0x000496b8) bt_list_pane_t2

0x0001,

0xfd1b,	// (0x0004da7b) bt_list_pane_t

0x021e,	// (0x0003df7e) main_cale_prevew_pane

0xb967,	// (0x000496c7) popup_cale_preview_window_ParamLimits

0xb967,	// (0x000496c7) popup_cale_preview_window

0x08c6,	// (0x0003e626) bg_popup_preview_window_pane_cp05_ParamLimits

0x08c6,	// (0x0003e626) bg_popup_preview_window_pane_cp05

0xe71c,	// (0x0004c47c) list_cale_preview_pane_ParamLimits

0xe71c,	// (0x0004c47c) list_cale_preview_pane

0xb980,	// (0x000496e0) list_double_cale_preview_pane_ParamLimits

0xb980,	// (0x000496e0) list_double_cale_preview_pane

0x9595,	// (0x000472f5) list_single_cale_preview_pane_ParamLimits

0x9595,	// (0x000472f5) list_single_cale_preview_pane

0xb992,	// (0x000496f2) list_single_cale_preview_pane_g1

0xb99a,	// (0x000496fa) list_single_cale_preview_pane_t1_ParamLimits

0xb99a,	// (0x000496fa) list_single_cale_preview_pane_t1

0xb9af,	// (0x0004970f) list_double_cale_preview_pane_g1

0xb9b7,	// (0x00049717) list_double_cale_preview_pane_t1_ParamLimits

0xb9b7,	// (0x00049717) list_double_cale_preview_pane_t1

0xb9cc,	// (0x0004972c) list_double_cale_preview_pane_t2_ParamLimits

0xb9cc,	// (0x0004972c) list_double_cale_preview_pane_t2

0x0001,

0xfd20,	// (0x0004da80) list_double_cale_preview_pane_t_ParamLimits

0xfd20,	// (0x0004da80) list_double_cale_preview_pane_t

0x021e,	// (0x0003df7e) main_ezdial_pane

0x08c6,	// (0x0003e626) main_sp_fs_email_pane_ParamLimits

0xb4aa,	// (0x0004920a) cmail_ddmenu_btn01_pane_ParamLimits

0xb4aa,	// (0x0004920a) cmail_ddmenu_btn01_pane

0xb4bd,	// (0x0004921d) cmail_ddmenu_btn02_pane_ParamLimits

0xb4bd,	// (0x0004921d) cmail_ddmenu_btn02_pane

0xb4e0,	// (0x00049240) cmail_ddmenu_btn03_pane_ParamLimits

0xb4e0,	// (0x00049240) cmail_ddmenu_btn03_pane

0xb579,	// (0x000492d9) main_sp_fs_ctrlbar_pane_ParamLimits

0xb59d,	// (0x000492fd) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb707,	// (0x00049467) list_cmail_body_pane_ParamLimits

0xe309,	// (0x0004c069) bg_button_pane_cp12

0xe31e,	// (0x0004c07e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe31e,	// (0x0004c07e) list_single_cmail_header_detail_pane_g3

0xe367,	// (0x0004c0c7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe367,	// (0x0004c0c7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca3,	// (0x0004da03) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca3,	// (0x0004da03) list_single_cmail_header_detail_pane_t

0xe474,	// (0x0004c1d4) phacti_term_pane_t2_ParamLimits

0xe474,	// (0x0004c1d4) phacti_term_pane_t2

0x0001,

0xfcad,	// (0x0004da0d) phacti_term_pane_t_ParamLimits

0xfcad,	// (0x0004da0d) phacti_term_pane_t

0xe728,	// (0x0004c488) aid_size_list_single_double

0xb9e4,	// (0x00049744) popup_ezdial_listscroll_window

0xba00,	// (0x00049760) popup_number_entry_window_cp01

0x0b43,	// (0x0003e8a3) bg_popup_call_pane_cp09

0xe734,	// (0x0004c494) ezdial_list_pane

0xe73c,	// (0x0004c49c) scroll_pane_cp23

0x21e8,	// (0x0003ff48) bg_button_pane_cp028_ParamLimits

0x21e8,	// (0x0003ff48) bg_button_pane_cp028

0xba0e,	// (0x0004976e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xba0e,	// (0x0004976e) cmail_ddmenu_btn01_pane_g1

0xba1a,	// (0x0004977a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xba1a,	// (0x0004977a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd25,	// (0x0004da85) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd25,	// (0x0004da85) cmail_ddmenu_btn01_pane_g

0xe744,	// (0x0004c4a4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe744,	// (0x0004c4a4) cmail_ddmenu_btn01_pane_t1

0x21e8,	// (0x0003ff48) bg_button_pane_cp029_ParamLimits

0x21e8,	// (0x0003ff48) bg_button_pane_cp029

0xba26,	// (0x00049786) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xba26,	// (0x00049786) cmail_ddmenu_btn02_pane_g1

0xba3e,	// (0x0004979e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xba3e,	// (0x0004979e) cmail_ddmenu_btn02_pane_t1

0x08c6,	// (0x0003e626) bg_button_pane_cp031_ParamLimits

0x08c6,	// (0x0003e626) bg_button_pane_cp031

0xba26,	// (0x00049786) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xba26,	// (0x00049786) cmail_ddmenu_btn03_pane_g1

0xba3e,	// (0x0004979e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xba3e,	// (0x0004979e) cmail_ddmenu_btn03_pane_t1

0x8c15,	// (0x00046975) cell_dialer2_keypad_pane_t1_ParamLimits

0x8c2f,	// (0x0004698f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8c2f,	// (0x0004698f) cell_dialer2_keypad_pane_t1_copy1

0xad80,	// (0x00048ae0) ncimui_group_button_pane

0x08c6,	// (0x0003e626) main_sp_fs_calendar_pane_ParamLimits

0xb71d,	// (0x0004947d) list_single_cmail_header_caption_pane_ParamLimits

0xe4bf,	// (0x0004c21f) aid_recal_txt_sm_pane

0x021e,	// (0x0003df7e) mian_recal_day_pane

0xe501,	// (0x0004c261) popup_sp_fs_cale_preview_window_ParamLimits

0xe759,	// (0x0004c4b9) list_recal_day_pane

0xe79b,	// (0x0004c4fb) list_single_recal_day_pane_ParamLimits

0xe79b,	// (0x0004c4fb) list_single_recal_day_pane

0xe7ad,	// (0x0004c50d) list_single_recal_day_pane_g1_ParamLimits

0xe7ad,	// (0x0004c50d) list_single_recal_day_pane_g1

0xe7b9,	// (0x0004c519) list_single_recal_day_pane_g2_ParamLimits

0xe7b9,	// (0x0004c519) list_single_recal_day_pane_g2

0xe7c5,	// (0x0004c525) list_single_recal_day_pane_g3_ParamLimits

0xe7c5,	// (0x0004c525) list_single_recal_day_pane_g3

0x3fdf,	// (0x00041d3f) list_single_recal_day_pane_g4_ParamLimits

0x3fdf,	// (0x00041d3f) list_single_recal_day_pane_g4

0xe7d1,	// (0x0004c531) list_single_recal_day_pane_g5_ParamLimits

0xe7d1,	// (0x0004c531) list_single_recal_day_pane_g5

0xe7dd,	// (0x0004c53d) list_single_recal_day_pane_g6_ParamLimits

0xe7dd,	// (0x0004c53d) list_single_recal_day_pane_g6

0x0004,

0xfd34,	// (0x0004da94) list_single_recal_day_pane_g_ParamLimits

0xfd34,	// (0x0004da94) list_single_recal_day_pane_g

0xe7f1,	// (0x0004c551) list_single_recal_day_pane_t1

0xe803,	// (0x0004c563) list_single_recal_day_pane_t2

0x0001,

0xfd3f,	// (0x0004da9f) list_single_recal_day_pane_t

0xba62,	// (0x000497c2) ncimui_query_button_pane_ParamLimits

0xba62,	// (0x000497c2) ncimui_query_button_pane

0xba72,	// (0x000497d2) ncimui_query_button_pane_t1_ParamLimits

0xba72,	// (0x000497d2) ncimui_query_button_pane_t1

0xe815,	// (0x0004c575) ncimui_query_button_pane_t2_ParamLimits

0xe815,	// (0x0004c575) ncimui_query_button_pane_t2

0x0001,

0xfd44,	// (0x0004daa4) ncimui_query_button_pane_t_ParamLimits

0xfd44,	// (0x0004daa4) ncimui_query_button_pane_t

0xba85,	// (0x000497e5) query_button_pane_ParamLimits

0xba85,	// (0x000497e5) query_button_pane

0x021e,	// (0x0003df7e) bg_button_pane_cp0028

0xe828,	// (0x0004c588) query_button_pane_t1

0x6bea,	// (0x0004494a) main_tport_pane_ParamLimits

0xb5cb,	// (0x0004932b) bg_popup_window_pane_cp01_ParamLimits

0xb5cb,	// (0x0004932b) bg_popup_window_pane_cp01

0xb5e6,	// (0x00049346) heading_pane_cp08_ParamLimits

0xb5e6,	// (0x00049346) heading_pane_cp08

0xb5f9,	// (0x00049359) heading_pane_cp07_ParamLimits

0xb5f9,	// (0x00049359) heading_pane_cp07

0xb6a0,	// (0x00049400) cell_tport_appsw_pane_g2

0x0002,

0xfc90,	// (0x0004d9f0) cell_tport_appsw_pane_g

0xce52,	// (0x0004abb2) input_candi_list_open_g1

0x0f61,	// (0x0003ecc1) list_cale_time_pane_g6_ParamLimits

0x0f61,	// (0x0003ecc1) list_cale_time_pane_g6

0x773d,	// (0x0004549d) aid_size_touch_calib_1_ParamLimits

0x773d,	// (0x0004549d) aid_size_touch_calib_1

0x774f,	// (0x000454af) aid_size_touch_calib_2_ParamLimits

0x774f,	// (0x000454af) aid_size_touch_calib_2

0x7767,	// (0x000454c7) aid_size_touch_calib_3_ParamLimits

0x7767,	// (0x000454c7) aid_size_touch_calib_3

0x7785,	// (0x000454e5) aid_size_touch_calib_4_ParamLimits

0x7785,	// (0x000454e5) aid_size_touch_calib_4

0x779d,	// (0x000454fd) main_touch_calib_button_group_pane_ParamLimits

0x779d,	// (0x000454fd) main_touch_calib_button_group_pane

0x77b5,	// (0x00045515) main_touch_calib_pane_g1_ParamLimits

0x77c7,	// (0x00045527) main_touch_calib_pane_g2_ParamLimits

0x77d9,	// (0x00045539) main_touch_calib_pane_g3_ParamLimits

0x77eb,	// (0x0004554b) main_touch_calib_pane_g4_ParamLimits

0xf6d2,	// (0x0004d432) main_touch_calib_pane_g_ParamLimits

0x77fd,	// (0x0004555d) main_touch_calib_pane_t1_ParamLimits

0x7817,	// (0x00045577) main_touch_calib_pane_t2_ParamLimits

0x7831,	// (0x00045591) main_touch_calib_pane_t3_ParamLimits

0x7845,	// (0x000455a5) main_touch_calib_pane_t4_ParamLimits

0x7859,	// (0x000455b9) main_touch_calib_pane_t5_ParamLimits

0xf6db,	// (0x0004d43b) main_touch_calib_pane_t_ParamLimits

0x7fcb,	// (0x00045d2b) list_single_fp_cale_pane_g3_ParamLimits

0x7fcb,	// (0x00045d2b) list_single_fp_cale_pane_g3

0x08c6,	// (0x0003e626) bg_button_pane_cp012_ParamLimits

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp03_ParamLimits

0x9e85,	// (0x00047be5) cell_vitu2_function_top_pane_g1_ParamLimits

0x08c6,	// (0x0003e626) bg_vkb2_func_pane_cp04_ParamLimits

0xad0b,	// (0x00048a6b) main_ncimui_button_group_pane_ParamLimits

0xad0b,	// (0x00048a6b) main_ncimui_button_group_pane

0xad6b,	// (0x00048acb) main_ncimui_pane_t3_ParamLimits

0xad6b,	// (0x00048acb) main_ncimui_pane_t3

0xe422,	// (0x0004c182) phacti_button_group_pane

0xe728,	// (0x0004c488) aid_size_list_single_double_ParamLimits

0xb9e4,	// (0x00049744) popup_ezdial_listscroll_window_ParamLimits

0xba00,	// (0x00049760) popup_number_entry_window_cp01_ParamLimits

0xba98,	// (0x000497f8) phacti_button_pane_ParamLimits

0xba98,	// (0x000497f8) phacti_button_pane

0x021e,	// (0x0003df7e) bg_button_pane_cp14

0xe836,	// (0x0004c596) phacti_button_pane_t1

0xbaa9,	// (0x00049809) main_touch_calib_button_pane_ParamLimits

0xbaa9,	// (0x00049809) main_touch_calib_button_pane

0x0991,	// (0x0003e6f1) bg_button_pane_cp18_ParamLimits

0x0991,	// (0x0003e6f1) bg_button_pane_cp18

0xe844,	// (0x0004c5a4) main_touch_calib_button_pane_t1_ParamLimits

0xe844,	// (0x0004c5a4) main_touch_calib_button_pane_t1

0xe85a,	// (0x0004c5ba) main_touch_calib_button_pane_t2_ParamLimits

0xe85a,	// (0x0004c5ba) main_touch_calib_button_pane_t2

0x0001,

0xfd49,	// (0x0004daa9) main_touch_calib_button_pane_t_ParamLimits

0xfd49,	// (0x0004daa9) main_touch_calib_button_pane_t

0x021e,	// (0x0003df7e) cell_ncimui_button_pane

0x021e,	// (0x0003df7e) bg_button_pane_cp032

0xe878,	// (0x0004c5d8) cell_ncimui_button_pane_t1

0xd2d5,	// (0x0004b035) image3_infobar_pane_ParamLimits

0xd2d5,	// (0x0004b035) image3_infobar_pane

0xb180,	// (0x00048ee0) fs_bigclock_status_pane_ParamLimits

0xb180,	// (0x00048ee0) fs_bigclock_status_pane

0xb18d,	// (0x00048eed) main_fs_bigclock_clock_pane_ParamLimits

0xb18d,	// (0x00048eed) main_fs_bigclock_clock_pane

0xb1ab,	// (0x00048f0b) main_fs_bigclock_indi_pane_ParamLimits

0xb1ab,	// (0x00048f0b) main_fs_bigclock_indi_pane

0xb1dd,	// (0x00048f3d) main_fs_bigclock_swipe_pane_ParamLimits

0xb1dd,	// (0x00048f3d) main_fs_bigclock_swipe_pane

0x021e,	// (0x0003df7e) main_fs_clock_dumped_data

0xddde,	// (0x0004bb3e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xddde,	// (0x0004bb3e) list_single_fs_bigclock_indicator_pane_g1

0xddfa,	// (0x0004bb5a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xddfa,	// (0x0004bb5a) list_single_fs_bigclock_indicator_pane_g2

0xde14,	// (0x0004bb74) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xde14,	// (0x0004bb74) list_single_fs_bigclock_indicator_pane_g3

0xde2e,	// (0x0004bb8e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xde2e,	// (0x0004bb8e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbea,	// (0x0004d94a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbea,	// (0x0004d94a) list_single_fs_bigclock_indicator_pane_g

0xde59,	// (0x0004bbb9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde59,	// (0x0004bbb9) list_single_fs_bigclock_indicator_pane_t1

0xde81,	// (0x0004bbe1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde81,	// (0x0004bbe1) list_single_fs_bigclock_indicator_pane_t2

0xdea9,	// (0x0004bc09) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdea9,	// (0x0004bc09) list_single_fs_bigclock_indicator_pane_t3

0xded1,	// (0x0004bc31) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xded1,	// (0x0004bc31) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf5,	// (0x0004d955) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf5,	// (0x0004d955) list_single_fs_bigclock_indicator_pane_t

0xe886,	// (0x0004c5e6) image3_infobar_fav_pane_ParamLimits

0xe886,	// (0x0004c5e6) image3_infobar_fav_pane

0xe896,	// (0x0004c5f6) image3_infobar_loc_pane_ParamLimits

0xe896,	// (0x0004c5f6) image3_infobar_loc_pane

0xe8aa,	// (0x0004c60a) image3_infobar_time_pane_ParamLimits

0xe8aa,	// (0x0004c60a) image3_infobar_time_pane

0x0b79,	// (0x0003e8d9) image3_infobar_time_pane_g1

0xe8ba,	// (0x0004c61a) image3_infobar_time_pane_t1

0x0b79,	// (0x0003e8d9) image3_infobar_loc_pane_g1

0xe8c8,	// (0x0004c628) image3_infobar_loc_pane_g2

0x0001,

0xfd4e,	// (0x0004daae) image3_infobar_loc_pane_g

0xe8d0,	// (0x0004c630) image3_infobar_loc_pane_t1

0x0b79,	// (0x0003e8d9) image3_infobar_fav_pane_g1

0xe8de,	// (0x0004c63e) image3_infobar_fav_pane_g2

0x0001,

0xfd53,	// (0x0004dab3) image3_infobar_fav_pane_g

0xe8e6,	// (0x0004c646) fs_bigclock_status_battery_pane

0xe8ef,	// (0x0004c64f) fs_bigclock_status_signal_pane

0xe8f8,	// (0x0004c658) fs_bigclock_status_title_pane

0xe901,	// (0x0004c661) fs_bigclock_status_signal_pane_g1

0xe90a,	// (0x0004c66a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd58,	// (0x0004dab8) fs_bigclock_status_signal_pane_g

0xe912,	// (0x0004c672) fs_bigclock_status_battery_pane_g1

0xe91b,	// (0x0004c67b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5d,	// (0x0004dabd) fs_bigclock_status_battery_pane_g

0xe923,	// (0x0004c683) fs_bigclock_status_title_pane_t1

0xbabe,	// (0x0004981e) main_fs_bigclock_clock_pane_g1

0xbabe,	// (0x0004981e) main_fs_bigclock_clock_pane_g2

0xbacf,	// (0x0004982f) main_fs_bigclock_clock_pane_g3

0xbacf,	// (0x0004982f) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd62,	// (0x0004dac2) main_fs_bigclock_clock_pane_g

0xbae2,	// (0x00049842) main_fs_bigclock_clock_pane_t1

0xbaf8,	// (0x00049858) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6b,	// (0x0004dacb) main_fs_bigclock_clock_pane_t

0xe931,	// (0x0004c691) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe931,	// (0x0004c691) list_single_fs_bigclock_indicator_pane

0xe942,	// (0x0004c6a2) list_single_fs_bigclock_pane_ParamLimits

0xe942,	// (0x0004c6a2) list_single_fs_bigclock_pane

0xe968,	// (0x0004c6c8) main_fs_bigclock_indicator_pane_t1

0xe977,	// (0x0004c6d7) list_single_fs_bigclock_pane_g1

0xe97f,	// (0x0004c6df) list_single_fs_bigclock_pane_t1

0x0b79,	// (0x0003e8d9) main_fs_bigclock_swipe_pane_g1

0xe9c2,	// (0x0004c722) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7c,	// (0x0004dadc) main_fs_bigclock_swipe_pane_g

0xe9ca,	// (0x0004c72a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9ca,	// (0x0004c72a) main_fs_bigclock_swipe_pane_t1

0x5d4c,	// (0x00043aac) call_type_pane_ParamLimits

0x021e,	// (0x0003df7e) main_btmg_pane

0xe5fe,	// (0x0004c35e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe5fe,	// (0x0004c35e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcef,	// (0x0004da4f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcef,	// (0x0004da4f) list_single_cale_mrui_row_pane_g

0xe782,	// (0x0004c4e2) list_recal_vselct_arw_lo_pane

0xe78a,	// (0x0004c4ea) list_recal_vselct_arw_up_pane

0xe792,	// (0x0004c4f2) list_recal_vselct_pane

0xbb52,	// (0x000498b2) btmg_button_pane

0xbb5c,	// (0x000498bc) main_btmg_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp044

0xe9e7,	// (0x0004c747) btmg_button_pane_t1

0x2940,	// (0x000406a0) aid_listscroll_gen

0x08c6,	// (0x0003e626) main_cntbar_detail_pane

0xe2eb,	// (0x0004c04b) list_cmail_folder_pane

0x235d,	// (0x000400bd) sp_fs_scroll_pane_cp03_ParamLimits

0xb71d,	// (0x0004947d) list_single_fs_dyc_pane_cp01_ParamLimits

0xb71d,	// (0x0004947d) list_single_fs_dyc_pane_cp01

0xe9f5,	// (0x0004c755) aid_size_cmail_indent

0xe9fe,	// (0x0004c75e) list_single_dyc_row_pane_cp01

0xbb98,	// (0x000498f8) cntbar_detail_list_pane_ParamLimits

0xbb98,	// (0x000498f8) cntbar_detail_list_pane

0xbbe4,	// (0x00049944) main_cntbar_detail_cont_pane_ParamLimits

0xbbe4,	// (0x00049944) main_cntbar_detail_cont_pane

0x235d,	// (0x000400bd) scroll_pane_cp032_ParamLimits

0x235d,	// (0x000400bd) scroll_pane_cp032

0xbbf8,	// (0x00049958) cntbar_detail_list_event_pane_ParamLimits

0xbbf8,	// (0x00049958) cntbar_detail_list_event_pane

0xbba8,	// (0x00049908) cntbar_detail_list_shct_pane

0x0dec,	// (0x0003eb4c) aid_list_gen

0xea07,	// (0x0004c767) aid_scroll

0xea10,	// (0x0004c770) aid_size_touch_scroll_bar

0x2369,	// (0x000400c9) aid_list_double

0xbc08,	// (0x00049968) aid_list_single

0xbc08,	// (0x00049968) aid_list_single_lg

0xea19,	// (0x0004c779) aid_list_z_g_a_sm

0xea21,	// (0x0004c781) aid_list_z_g_d

0xea29,	// (0x0004c789) aid_txt_z_prm

0xea37,	// (0x0004c797) aid_txt_z_prm_cp01

0xea45,	// (0x0004c7a5) aid_txt_z_sec

0xbc11,	// (0x00049971) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbc11,	// (0x00049971) main_cntbar_detail_cont_pane_g1

0xbc25,	// (0x00049985) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbc25,	// (0x00049985) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd81,	// (0x0004dae1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd81,	// (0x0004dae1) main_cntbar_detail_cont_pane_g

0xea53,	// (0x0004c7b3) main_cntbar_detail_cont_pane_t1

0xea61,	// (0x0004c7c1) main_cntbar_detail_cont_pane_t2

0xea6f,	// (0x0004c7cf) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd86,	// (0x0004dae6) main_cntbar_detail_cont_pane_t

0xbc35,	// (0x00049995) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbc35,	// (0x00049995) cell_cntbar_detail_list_shct_pane

0xea7d,	// (0x0004c7dd) cntbar_detail_list_shct_pane_g1

0xea86,	// (0x0004c7e6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8d,	// (0x0004daed) cntbar_detail_list_shct_pane_g

0xbc49,	// (0x000499a9) cntbar_detail_list_event_pane_g1_ParamLimits

0xbc49,	// (0x000499a9) cntbar_detail_list_event_pane_g1

0xbc55,	// (0x000499b5) cntbar_detail_list_event_pane_g2_ParamLimits

0xbc55,	// (0x000499b5) cntbar_detail_list_event_pane_g2

0x0005,

0xfd92,	// (0x0004daf2) cntbar_detail_list_event_pane_g_ParamLimits

0xfd92,	// (0x0004daf2) cntbar_detail_list_event_pane_g

0xbcc1,	// (0x00049a21) cntbar_detail_list_event_pane_t1_ParamLimits

0xbcc1,	// (0x00049a21) cntbar_detail_list_event_pane_t1

0xbcd6,	// (0x00049a36) cntbar_detail_list_event_pane_t2_ParamLimits

0xbcd6,	// (0x00049a36) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9f,	// (0x0004daff) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9f,	// (0x0004daff) cntbar_detail_list_event_pane_t

0x0b79,	// (0x0003e8d9) cell_cntbar_detail_list_shct_pane_g1

0x153e,	// (0x0003f29e) navi_pane_mv_g3

0x08c6,	// (0x0003e626) main_cntbar_detail_pane_ParamLimits

0x021e,	// (0x0003df7e) main_notif_wgt_pane

0xd0c1,	// (0x0004ae21) aid_tch_main_mp4_pane_g4

0xd2cd,	// (0x0004b02d) popup_slider_window_cp02

0xe778,	// (0x0004c4d8) list_recal_day_event_pane

0xbb66,	// (0x000498c6) cntbar_detail_btn_pane_ParamLimits

0xbb66,	// (0x000498c6) cntbar_detail_btn_pane

0xbb7f,	// (0x000498df) cntbar_detail_btn_pane_cp01_ParamLimits

0xbb7f,	// (0x000498df) cntbar_detail_btn_pane_cp01

0xbba8,	// (0x00049908) cntbar_detail_list_shct_pane_ParamLimits

0xbbb8,	// (0x00049918) cntbar_detail_pane_g1_ParamLimits

0xbbb8,	// (0x00049918) cntbar_detail_pane_g1

0xbbc8,	// (0x00049928) cntbar_detail_pane_t1_ParamLimits

0xbbc8,	// (0x00049928) cntbar_detail_pane_t1

0xbc61,	// (0x000499c1) cntbar_detail_list_event_pane_g3_ParamLimits

0xbc61,	// (0x000499c1) cntbar_detail_list_event_pane_g3

0xbc79,	// (0x000499d9) cntbar_detail_list_event_pane_g4_ParamLimits

0xbc79,	// (0x000499d9) cntbar_detail_list_event_pane_g4

0xbc91,	// (0x000499f1) cntbar_detail_list_event_pane_g5_ParamLimits

0xbc91,	// (0x000499f1) cntbar_detail_list_event_pane_g5

0xbca9,	// (0x00049a09) cntbar_detail_list_event_pane_g6_ParamLimits

0xbca9,	// (0x00049a09) cntbar_detail_list_event_pane_g6

0xbceb,	// (0x00049a4b) cntbar_detail_list_event_pane_t3_ParamLimits

0xbceb,	// (0x00049a4b) cntbar_detail_list_event_pane_t3

0xbcfd,	// (0x00049a5d) popup_notif_wgt_window_ParamLimits

0xbcfd,	// (0x00049a5d) popup_notif_wgt_window

0xbd16,	// (0x00049a76) popup_submenu_window_cp01_ParamLimits

0xbd16,	// (0x00049a76) popup_submenu_window_cp01

0x0b43,	// (0x0003e8a3) bg_popup_window_pane_cp10

0xea8f,	// (0x0004c7ef) listscroll_notif_wgt_pane

0xeaa1,	// (0x0004c801) list_notif_wgt_window

0xeaaa,	// (0x0004c80a) scroll_pane_cp033

0xbd28,	// (0x00049a88) list_notif_wgt_row_pane_ParamLimits

0xbd28,	// (0x00049a88) list_notif_wgt_row_pane

0xeab3,	// (0x0004c813) aid_size_list_notif_wgt_del

0xeac0,	// (0x0004c820) list_notif_wgt_row_pane_g1

0xeacc,	// (0x0004c82c) list_notif_wgt_row_pane_g2

0xeadb,	// (0x0004c83b) list_notif_wgt_row_pane_g3

0x0002,

0xfda6,	// (0x0004db06) list_notif_wgt_row_pane_g

0xeae8,	// (0x0004c848) list_notif_wgt_row_pane_t1

0xeafe,	// (0x0004c85e) list_notif_wgt_row_pane_t2

0xeb10,	// (0x0004c870) list_notif_wgt_row_pane_t3

0x0002,

0xfdad,	// (0x0004db0d) list_notif_wgt_row_pane_t

0x9f19,	// (0x00047c79) list_recal_day_event_pane_g1

0xeb22,	// (0x0004c882) list_recal_day_event_pane_t1

0x021e,	// (0x0003df7e) bg_button_pane_cp045

0xbd38,	// (0x00049a98) cntbar_detail_btn_pane_t1

0x21e8,	// (0x0003ff48) main_callh_pane_ParamLimits

0x21e8,	// (0x0003ff48) main_callh_pane

0x021e,	// (0x0003df7e) main_coverflow0_pane

0x021e,	// (0x0003df7e) main_wgtman_pane

0xb1f5,	// (0x00048f55) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb1f5,	// (0x00048f55) main_fs_bigclock_unlock_btn_pane

0xb698,	// (0x000493f8) bg_button_pane_cp16

0xb6a8,	// (0x00049408) cell_tport_appsw_pane_g3

0xbd46,	// (0x00049aa6) cf0_flow_pane_ParamLimits

0xbd46,	// (0x00049aa6) cf0_flow_pane

0xeb31,	// (0x0004c891) listscroll_cf0_pane

0xeb3c,	// (0x0004c89c) main_cf0_pane_g1

0xbd5b,	// (0x00049abb) main_cf0_pane_t1_ParamLimits

0xbd5b,	// (0x00049abb) main_cf0_pane_t1

0xbd72,	// (0x00049ad2) main_cf0_pane_t2_ParamLimits

0xbd72,	// (0x00049ad2) main_cf0_pane_t2

0x0001,

0xfdb9,	// (0x0004db19) main_cf0_pane_t_ParamLimits

0xfdb9,	// (0x0004db19) main_cf0_pane_t

0xeb4e,	// (0x0004c8ae) scroll_pane_cp11

0xbd89,	// (0x00049ae9) cf0_flow_pane_g1

0xbd91,	// (0x00049af1) cf0_flow_pane_g2

0x0001,

0xfdbe,	// (0x0004db1e) cf0_flow_pane_g

0xbd99,	// (0x00049af9) cf0_flow_pane_t1

0x021e,	// (0x0003df7e) main_call6_pane

0x021e,	// (0x0003df7e) main_calllock_pane

0xbda7,	// (0x00049b07) call6_btn_grp_pane_ParamLimits

0xbda7,	// (0x00049b07) call6_btn_grp_pane

0xbdc1,	// (0x00049b21) call6_pane_g1_ParamLimits

0xbdc1,	// (0x00049b21) call6_pane_g1

0xbdd7,	// (0x00049b37) popup_call6_1st_window_ParamLimits

0xbdd7,	// (0x00049b37) popup_call6_1st_window

0xbde8,	// (0x00049b48) popup_call6_2nd_window_ParamLimits

0xbde8,	// (0x00049b48) popup_call6_2nd_window

0xbdf9,	// (0x00049b59) cell_call6_btn_pane_ParamLimits

0xbdf9,	// (0x00049b59) cell_call6_btn_pane

0x0b43,	// (0x0003e8a3) bg_popup_call2_in_pane_cp03

0xeb59,	// (0x0004c8b9) popup_call6_1st_window_g1

0xeb61,	// (0x0004c8c1) popup_call6_1st_window_g2

0xeb69,	// (0x0004c8c9) popup_call6_1st_window_g3

0x0002,

0xfdc3,	// (0x0004db23) popup_call6_1st_window_g

0xeb71,	// (0x0004c8d1) popup_call6_1st_window_t1

0xeb80,	// (0x0004c8e0) popup_call6_1st_window_t2

0xeb8e,	// (0x0004c8ee) popup_call6_1st_window_t3

0x0002,

0xfdca,	// (0x0004db2a) popup_call6_1st_window_t

0x0b43,	// (0x0003e8a3) bg_popup_call2_in_pane_cp04

0xeb9c,	// (0x0004c8fc) popup_call6_2nd_window_g1

0xeba4,	// (0x0004c904) popup_call6_2nd_window_g2

0xebac,	// (0x0004c90c) popup_call6_2nd_window_g3

0x0002,

0xfdd1,	// (0x0004db31) popup_call6_2nd_window_g

0xebb4,	// (0x0004c914) popup_call6_2nd_window_t1

0x021e,	// (0x0003df7e) bg_button_pane_cp15

0xebc3,	// (0x0004c923) cell_call6_btn_pane_g1

0xf05c,	// (0x0004cdbc) cell_call6_btn_pane_t1

0xbe0d,	// (0x00049b6d) listscroll_wgtman_pane_ParamLimits

0xbe0d,	// (0x00049b6d) listscroll_wgtman_pane

0xbe2e,	// (0x00049b8e) wgtman_btn_pane_ParamLimits

0xbe2e,	// (0x00049b8e) wgtman_btn_pane

0x1352,	// (0x0003f0b2) aid_scroll_copy1

0xebcc,	// (0x0004c92c) list_wgtman_pane

0xbe71,	// (0x00049bd1) wgtman_btn_pane_g1_ParamLimits

0xbe71,	// (0x00049bd1) wgtman_btn_pane_g1

0xbe9d,	// (0x00049bfd) wgtman_btn_pane_t1_ParamLimits

0xbe9d,	// (0x00049bfd) wgtman_btn_pane_t1

0xebd6,	// (0x0004c936) wgtman_btn_pane_t2_ParamLimits

0xebd6,	// (0x0004c936) wgtman_btn_pane_t2

0x0001,

0xfdd8,	// (0x0004db38) wgtman_btn_pane_t_ParamLimits

0xfdd8,	// (0x0004db38) wgtman_btn_pane_t

0xbeda,	// (0x00049c3a) listrow_wgtman_pane_ParamLimits

0xbeda,	// (0x00049c3a) listrow_wgtman_pane

0xbeed,	// (0x00049c4d) listrow_wgtman_pane_g1

0xbefa,	// (0x00049c5a) listrow_wgtman_pane_g2

0x0001,

0xfddd,	// (0x0004db3d) listrow_wgtman_pane_g

0x3ff7,	// (0x00041d57) listrow_wgtman_pane_t1

0x400f,	// (0x00041d6f) listrow_wgtman_pane_t2

0x0001,

0xfde2,	// (0x0004db42) listrow_wgtman_pane_t

0x4035,	// (0x00041d95) wait_bar_pane_cp09

0xebed,	// (0x0004c94d) main_calllock_btn_pane

0xebf7,	// (0x0004c957) main_calllock_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp17

0xebc3,	// (0x0004c923) main_calllock_btn_pane_g1

0xebff,	// (0x0004c95f) main_calllock_btn_pane_t1

0x021e,	// (0x0003df7e) main_dialer3_pane

0x021e,	// (0x0003df7e) main_fmrd2_pane

0x0b79,	// (0x0003e8d9) main_fs_bigclock_unlock_btn_pane_g1

0xbf20,	// (0x00049c80) main_fs_bigclock_unlock_btn_pane_t1

0xbf2e,	// (0x00049c8e) area_fmrd2_info_pane_ParamLimits

0xbf2e,	// (0x00049c8e) area_fmrd2_info_pane

0xbf3f,	// (0x00049c9f) area_fmrd2_visual_pane_ParamLimits

0xbf3f,	// (0x00049c9f) area_fmrd2_visual_pane

0xbf4d,	// (0x00049cad) fmrd2_indi_pane_ParamLimits

0xbf4d,	// (0x00049cad) fmrd2_indi_pane

0xbf5a,	// (0x00049cba) area_fmrd2_visual_pane_g1

0xbf62,	// (0x00049cc2) area_fmrd2_visual_pane_t1

0xbf72,	// (0x00049cd2) area_fmrd2_visual_pane_t2

0xbf82,	// (0x00049ce2) area_fmrd2_visual_pane_t3

0x0002,

0xfdec,	// (0x0004db4c) area_fmrd2_visual_pane_t

0xbf92,	// (0x00049cf2) area_fmrd2_info_pane_g1

0xbf9a,	// (0x00049cfa) area_fmrd2_info_pane_t1

0xbfaa,	// (0x00049d0a) area_fmrd2_info_pane_t2

0xbfba,	// (0x00049d1a) area_fmrd2_info_pane_t3

0xbfca,	// (0x00049d2a) area_fmrd2_info_pane_t4

0x0003,

0xfdf3,	// (0x0004db53) area_fmrd2_info_pane_t

0xbfd8,	// (0x00049d38) fmrd2_indi_pane_t1

0xbfe8,	// (0x00049d48) fmrd2_indi_pane_t2

0xbff8,	// (0x00049d58) fmrd2_indi_pane_t3

0x0002,

0xfdfc,	// (0x0004db5c) fmrd2_indi_pane_t

0xde3d,	// (0x0004bb9d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xde3d,	// (0x0004bb9d) list_single_fs_bigclock_indicator_pane_g5

0xdeee,	// (0x0004bc4e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdeee,	// (0x0004bc4e) list_single_fs_bigclock_indicator_pane_t5

0xb81e,	// (0x0004957e) aid_cell_bcale_month_pane_ParamLimits

0xb81e,	// (0x0004957e) aid_cell_bcale_month_pane

0xb83c,	// (0x0004959c) bcale_month_pane_ParamLimits

0xb83c,	// (0x0004959c) bcale_month_pane

0xb860,	// (0x000495c0) bcale_preview_pane_ParamLimits

0xb860,	// (0x000495c0) bcale_preview_pane

0xe97f,	// (0x0004c6df) list_single_fs_bigclock_pane_t1_ParamLimits

0xe99e,	// (0x0004c6fe) list_single_fs_bigclock_pane_t2_ParamLimits

0xe99e,	// (0x0004c6fe) list_single_fs_bigclock_pane_t2

0x0001,

0xfd77,	// (0x0004dad7) list_single_fs_bigclock_pane_t_ParamLimits

0xfd77,	// (0x0004dad7) list_single_fs_bigclock_pane_t

0xbf18,	// (0x00049c78) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde7,	// (0x0004db47) main_fs_bigclock_unlock_btn_pane_g

0xc008,	// (0x00049d68) aid_dia3_key_size_ParamLimits

0xc008,	// (0x00049d68) aid_dia3_key_size

0xc017,	// (0x00049d77) aid_dia3_listrow_size_ParamLimits

0xc017,	// (0x00049d77) aid_dia3_listrow_size

0xc02c,	// (0x00049d8c) dia3_keypad_fun_pane_ParamLimits

0xc02c,	// (0x00049d8c) dia3_keypad_fun_pane

0xc048,	// (0x00049da8) dia3_keypad_num_pane_ParamLimits

0xc048,	// (0x00049da8) dia3_keypad_num_pane

0xc063,	// (0x00049dc3) dia3_listscroll_pane_ParamLimits

0xc063,	// (0x00049dc3) dia3_listscroll_pane

0xc076,	// (0x00049dd6) dia3_numentry_pane_ParamLimits

0xc076,	// (0x00049dd6) dia3_numentry_pane

0xec0e,	// (0x0004c96e) dia3_list_pane

0xec19,	// (0x0004c979) scroll_pane_cp12

0x021e,	// (0x0003df7e) bg_dia3_numentry_pane

0xc08e,	// (0x00049dee) dia3_numentry_pane_t1

0xc09d,	// (0x00049dfd) cell_dia3_key_num_pane

0xc0a5,	// (0x00049e05) cell_dia3_key0_fun_pane_ParamLimits

0xc0a5,	// (0x00049e05) cell_dia3_key0_fun_pane

0xc0b9,	// (0x00049e19) cell_dia3_key1_fun_pane_ParamLimits

0xc0b9,	// (0x00049e19) cell_dia3_key1_fun_pane

0xc0d1,	// (0x00049e31) dia3_listrow_pane

0xdb90,	// (0x0004b8f0) bg_dia3_numentry_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp21

0xec24,	// (0x0004c984) cell_dia3_key_num_pane_t1

0xec32,	// (0x0004c992) cell_dia3_key_num_pane_t2

0xec41,	// (0x0004c9a1) cell_dia3_key_num_pane_t3

0xec50,	// (0x0004c9b0) cell_dia3_key_num_pane_t4

0x0003,

0xfe03,	// (0x0004db63) cell_dia3_key_num_pane_t

0x021e,	// (0x0003df7e) bg_button_pane_cp19

0xc0e3,	// (0x00049e43) cell_dia3_key0_fun_pane_g1

0x021e,	// (0x0003df7e) bg_button_pane_cp20

0xc0eb,	// (0x00049e4b) cell_dia3_key1_fun_pane_g1

0xc0f3,	// (0x00049e53) area_left_week_number_pane

0xc0ff,	// (0x00049e5f) area_top_day_name_pane

0xc112,	// (0x00049e72) frame_month_view_pane

0xec5f,	// (0x0004c9bf) grid_month_view_pane

0xc125,	// (0x00049e85) cell_top_day_name_pane_ParamLimits

0xc125,	// (0x00049e85) cell_top_day_name_pane

0xc152,	// (0x00049eb2) cell_area_left_week_number_pane_ParamLimits

0xc152,	// (0x00049eb2) cell_area_left_week_number_pane

0xc166,	// (0x00049ec6) cell_month_view_pane_ParamLimits

0xc166,	// (0x00049ec6) cell_month_view_pane

0xec6d,	// (0x0004c9cd) frm_month_g1

0xc193,	// (0x00049ef3) frm_month_g2

0xc1a6,	// (0x00049f06) frm_month_g3

0xc1b9,	// (0x00049f19) frm_month_g4

0xc1cc,	// (0x00049f2c) frm_month_g5

0xc1df,	// (0x00049f3f) frm_month_g6

0xc1f2,	// (0x00049f52) frm_month_g7

0xec7a,	// (0x0004c9da) frm_month_g8

0xc205,	// (0x00049f65) frm_month_g9

0xc215,	// (0x00049f75) frm_month_g10

0xc225,	// (0x00049f85) frm_month_g11

0xc235,	// (0x00049f95) frm_month_g12

0xc247,	// (0x00049fa7) frm_month_g13

0xc259,	// (0x00049fb9) frm_month_g14

0xc26d,	// (0x00049fcd) frm_month_g15

0xc281,	// (0x00049fe1) frm_month_g16

0x000f,

0xfe0c,	// (0x0004db6c) frm_month_g

0xec87,	// (0x0004c9e7) cell_top_day_name_pane_t1

0xc295,	// (0x00049ff5) cell_area_left_week_number_pane_g1

0xc2a1,	// (0x0004a001) cell_area_left_week_number_pane_t1

0x091f,	// (0x0003e67f) cell_month_view_pane_g1

0xc2b4,	// (0x0004a014) cell_month_view_pane_t1

0x021e,	// (0x0003df7e) main_fps_pane

0xe11d,	// (0x0004be7d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe11d,	// (0x0004be7d) cmail_ddmenu_btn02_pane_cp1

0xe139,	// (0x0004be99) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe139,	// (0x0004be99) cmail_ddmenu_btn02_pane_cp2

0xba32,	// (0x00049792) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xba32,	// (0x00049792) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2a,	// (0x0004da8a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2a,	// (0x0004da8a) cmail_ddmenu_btn02_pane_g

0xba50,	// (0x000497b0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xba50,	// (0x000497b0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2f,	// (0x0004da8f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2f,	// (0x0004da8f) cmail_ddmenu_btn02_pane_t

0xc2c7,	// (0x0004a027) fps_text_pane_ParamLimits

0xc2c7,	// (0x0004a027) fps_text_pane

0xc2de,	// (0x0004a03e) main_fps_pane_g1_ParamLimits

0xc2de,	// (0x0004a03e) main_fps_pane_g1

0xc2f8,	// (0x0004a058) wait_bar_pane_cp010_ParamLimits

0xc2f8,	// (0x0004a058) wait_bar_pane_cp010

0xc309,	// (0x0004a069) fps_text_pane_t1_ParamLimits

0xc309,	// (0x0004a069) fps_text_pane_t1

0x9178,	// (0x00046ed8) cam4_image_uncrop_pane_g1

0x9181,	// (0x00046ee1) cam4_image_uncrop_pane_g2

0x918a,	// (0x00046eea) cam4_image_uncrop_pane_g3

0x9193,	// (0x00046ef3) cam4_image_uncrop_pane_g4

0x0003,

0xf86e,	// (0x0004d5ce) cam4_image_uncrop_pane_g

0xc0d1,	// (0x00049e31) dia3_listrow_pane_ParamLimits

0x021e,	// (0x0003df7e) main_phob2_pane

0xb669,	// (0x000493c9) cell_tport_appsw_pane_cp02_ParamLimits

0xb669,	// (0x000493c9) cell_tport_appsw_pane_cp02

0xb67d,	// (0x000493dd) cell_tport_appsw_pane_cp03_ParamLimits

0xb67d,	// (0x000493dd) cell_tport_appsw_pane_cp03

0x021e,	// (0x0003df7e) phob2_contact_card_pane

0x021e,	// (0x0003df7e) phob2_listscroll_pane

0xec9a,	// (0x0004c9fa) phob2_list_pane

0xeca2,	// (0x0004ca02) scroll_pane_cp034

0xc321,	// (0x0004a081) phob2_cc_data_pane_ParamLimits

0xc321,	// (0x0004a081) phob2_cc_data_pane

0xc340,	// (0x0004a0a0) phob2_cc_listscroll_pane_ParamLimits

0xc340,	// (0x0004a0a0) phob2_cc_listscroll_pane

0xbeda,	// (0x00049c3a) list_double_large_graphic_phob2_pane_ParamLimits

0xbeda,	// (0x00049c3a) list_double_large_graphic_phob2_pane

0xc35e,	// (0x0004a0be) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc35e,	// (0x0004a0be) list_double_large_graphic_phob2_pane_g1

0x4047,	// (0x00041da7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4047,	// (0x00041da7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2d,	// (0x0004db8d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2d,	// (0x0004db8d) list_double_large_graphic_phob2_pane_g

0x406d,	// (0x00041dcd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x406d,	// (0x00041dcd) list_double_large_graphic_phob2_pane_t1

0x4082,	// (0x00041de2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4082,	// (0x00041de2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe36,	// (0x0004db96) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe36,	// (0x0004db96) list_double_large_graphic_phob2_pane_t

0x021e,	// (0x0003df7e) list_highlight_pane_cp024

0xecaa,	// (0x0004ca0a) phob2_cc_button_pane

0xc36b,	// (0x0004a0cb) phob2_cc_data_pane_g1_ParamLimits

0xc36b,	// (0x0004a0cb) phob2_cc_data_pane_g1

0xc382,	// (0x0004a0e2) phob2_cc_data_pane_g2_ParamLimits

0xc382,	// (0x0004a0e2) phob2_cc_data_pane_g2

0x0001,

0xfe3b,	// (0x0004db9b) phob2_cc_data_pane_g_ParamLimits

0xfe3b,	// (0x0004db9b) phob2_cc_data_pane_g

0xc394,	// (0x0004a0f4) phob2_cc_data_pane_t1_ParamLimits

0xc394,	// (0x0004a0f4) phob2_cc_data_pane_t1

0xc3ac,	// (0x0004a10c) phob2_cc_data_pane_t2_ParamLimits

0xc3ac,	// (0x0004a10c) phob2_cc_data_pane_t2

0xc3c4,	// (0x0004a124) phob2_cc_data_pane_t3_ParamLimits

0xc3c4,	// (0x0004a124) phob2_cc_data_pane_t3

0x0002,

0xfe40,	// (0x0004dba0) phob2_cc_data_pane_t_ParamLimits

0xfe40,	// (0x0004dba0) phob2_cc_data_pane_t

0xecb2,	// (0x0004ca12) phob2_cc_list_pane_ParamLimits

0xecb2,	// (0x0004ca12) phob2_cc_list_pane

0xa19a,	// (0x00047efa) scroll_pane_cp035_ParamLimits

0xa19a,	// (0x00047efa) scroll_pane_cp035

0x08c6,	// (0x0003e626) bg_button_pane_cp033

0xecbe,	// (0x0004ca1e) phob2_cc_button_pane_g1

0xecca,	// (0x0004ca2a) phob2_cc_button_pane_t1

0xecdf,	// (0x0004ca3f) phob2_cc_button_pane_t2

0x0001,

0xfe47,	// (0x0004dba7) phob2_cc_button_pane_t

0xc3dc,	// (0x0004a13c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc3dc,	// (0x0004a13c) list_double_large_graphic_phob2_cc_pane

0xc40e,	// (0x0004a16e) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc40e,	// (0x0004a16e) list_double_large_graphic_phob2_cc_pane_g1

0x4097,	// (0x00041df7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4097,	// (0x00041df7) list_double_large_graphic_phob2_cc_pane_g2

0x40a3,	// (0x00041e03) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x40a3,	// (0x00041e03) list_double_large_graphic_phob2_cc_pane_g3

0x40af,	// (0x00041e0f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x40af,	// (0x00041e0f) list_double_large_graphic_phob2_cc_pane_g4

0x40bb,	// (0x00041e1b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x40bb,	// (0x00041e1b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4c,	// (0x0004dbac) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4c,	// (0x0004dbac) list_double_large_graphic_phob2_cc_pane_g

0x40c7,	// (0x00041e27) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x40c7,	// (0x00041e27) list_double_large_graphic_phob2_cc_pane_t1

0x40f0,	// (0x00041e50) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x40f0,	// (0x00041e50) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe57,	// (0x0004dbb7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe57,	// (0x0004dbb7) list_double_large_graphic_phob2_cc_pane_t

0xecf1,	// (0x0004ca51) list_highlight_pane_cp025_ParamLimits

0xecf1,	// (0x0004ca51) list_highlight_pane_cp025

0x08c6,	// (0x0003e626) bg_button_pane_cp033_ParamLimits

0xecbe,	// (0x0004ca1e) phob2_cc_button_pane_g1_ParamLimits

0xecca,	// (0x0004ca2a) phob2_cc_button_pane_t1_ParamLimits

0xecdf,	// (0x0004ca3f) phob2_cc_button_pane_t2_ParamLimits

0xfe47,	// (0x0004dba7) phob2_cc_button_pane_t_ParamLimits

0x4352,	// (0x000420b2) popup_wgtman_window

0x9991,	// (0x000476f1) scroll_pane_cp038

0xbe53,	// (0x00049bb3) wgtman_btn_pane_cp_01_ParamLimits

0xbe53,	// (0x00049bb3) wgtman_btn_pane_cp_01

0xecff,	// (0x0004ca5f) wgtman_content_pane

0xed08,	// (0x0004ca68) wgtman_heading_pane

0x021e,	// (0x0003df7e) bg_heading_pane_cp02

0xed11,	// (0x0004ca71) wgtman_heading_pane_g1

0xed19,	// (0x0004ca79) wgtman_heading_pane_t1

0xed27,	// (0x0004ca87) scroll_pane_cp036

0xed2f,	// (0x0004ca8f) wgtman_list_pane

0xdfd9,	// (0x0004bd39) wgtman_list_pane_t1_ParamLimits

0xdfd9,	// (0x0004bd39) wgtman_list_pane_t1

0xd359,	// (0x0004b0b9) cam4_grid_pane

0x3ae5,	// (0x00041845) bg_button_pane_cp015_ParamLimits

0xa04d,	// (0x00047dad) bg_button_pane_cp016_ParamLimits

0xa059,	// (0x00047db9) bg_button_pane_cp017_ParamLimits

0xa080,	// (0x00047de0) popup_vitu2_query_window_g3_ParamLimits

0xa080,	// (0x00047de0) popup_vitu2_query_window_g3

0x3b9c,	// (0x000418fc) popup_vitu2_query_window_t6_ParamLimits

0x3b9c,	// (0x000418fc) popup_vitu2_query_window_t6

0x3bc7,	// (0x00041927) popup_vitu2_query_window_t7_ParamLimits

0x3bc7,	// (0x00041927) popup_vitu2_query_window_t7

0x9178,	// (0x00046ed8) cam4_grid_pane_g1

0x9181,	// (0x00046ee1) cam4_grid_pane_g2

0xed37,	// (0x0004ca97) cam4_grid_pane_g3

0xed40,	// (0x0004caa0) cam4_grid_pane_g4

0x0003,

0xfe5c,	// (0x0004dbbc) cam4_grid_pane_g

0x4f22,	// (0x00042c82) aid_placing_vt_slider_lsc_ParamLimits

0x521f,	// (0x00042f7f) vidtel_button_pane_ParamLimits

0x521f,	// (0x00042f7f) vidtel_button_pane

0x021e,	// (0x0003df7e) bg_button_pane_cp034

0xed4b,	// (0x0004caab) vidtel_button_pane_g1

0xed53,	// (0x0004cab3) vidtel_button_pane_t1

0x9d48,	// (0x00047aa8) aid_size_vtel_slider_touch

0xa19a,	// (0x00047efa) scroll_pane_cp039

0xaee9,	// (0x00048c49) ncim_query_button_pane_cp01_ParamLimits

0xaf08,	// (0x00048c68) ncimui_query_pane_g1_ParamLimits

0x08c6,	// (0x0003e626) input_focus_pane_cp012_ParamLimits

0xdbd6,	// (0x0004b936) ncim_query_entry_pane_t1_ParamLimits

0xa19a,	// (0x00047efa) scroll_pane_cp039_ParamLimits

0x1429,	// (0x0003f189) navi_pane_bcale_mc_g1

0x1431,	// (0x0003f191) navi_pane_bcale_mc_t1

0xe16d,	// (0x0004becd) main_sp_fs_email_pane_g1

0xe179,	// (0x0004bed9) main_sp_fs_email_pane_g2

0x0001,

0xfc5f,	// (0x0004d9bf) main_sp_fs_email_pane_g

0xe60a,	// (0x0004c36a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe60a,	// (0x0004c36a) list_single_cale_mrui_row_pane_g3

0x3fed,	// (0x00041d4d) list_single_recal_day_pane_g5_event_pane

0xe7e9,	// (0x0004c549) list_single_recal_day_pane_g7

0xed69,	// (0x0004cac9) list_recal_day_event_pane_cp01

0xed72,	// (0x0004cad2) list_recal_vselct_arw_lo_pane_cp01

0xed7a,	// (0x0004cada) list_recal_vselct_arw_up_pane_cp01

0xed82,	// (0x0004cae2) list_recal_vselct_pane_cp01

0x9f19,	// (0x00047c79) list_recal_day_event_pane_cp01_g1

0xed8c,	// (0x0004caec) list_recal_day_event_pane_cp01_t1

0xe7f1,	// (0x0004c551) list_single_recal_day_pane_t1_ParamLimits

0xe803,	// (0x0004c563) list_single_recal_day_pane_t2_ParamLimits

0xfd3f,	// (0x0004da9f) list_single_recal_day_pane_t_ParamLimits

0x08a4,	// (0x0003e604) bg_notes_pane_ParamLimits

0x096f,	// (0x0003e6cf) list_notes_pane_ParamLimits

0x4573,	// (0x000422d3) scroll_pane_cp06_ParamLimits

0x0991,	// (0x0003e6f1) main_notes_pane_ParamLimits

0x08c6,	// (0x0003e626) main_welc_pane

0xc449,	// (0x0004a1a9) main_welc_body_pane_ParamLimits

0xc449,	// (0x0004a1a9) main_welc_body_pane

0xc466,	// (0x0004a1c6) main_welc_opti_pane_ParamLimits

0xc466,	// (0x0004a1c6) main_welc_opti_pane

0xc4dc,	// (0x0004a23c) main_welc_pane_t1_ParamLimits

0xc4dc,	// (0x0004a23c) main_welc_pane_t1

0xc6bf,	// (0x0004a41f) main_welc_body_row_pane_ParamLimits

0xc6bf,	// (0x0004a41f) main_welc_body_row_pane

0x0228,	// (0x0003df88) main_welc_opti_row_pane_ParamLimits

0x0228,	// (0x0003df88) main_welc_opti_row_pane

0xedaa,	// (0x0004cb0a) main_welc_opti_row_pane_g1

0xc6d4,	// (0x0004a434) main_welc_opti_row_pane_t1

0xedb2,	// (0x0004cb12) main_welc_body_row_pane_t1

0xea99,	// (0x0004c7f9) popup_notif_wgt_heading_pane

0xeab3,	// (0x0004c813) aid_size_list_notif_wgt_del_ParamLimits

0xeac0,	// (0x0004c820) list_notif_wgt_row_pane_g1_ParamLimits

0xeacc,	// (0x0004c82c) list_notif_wgt_row_pane_g2_ParamLimits

0xeadb,	// (0x0004c83b) list_notif_wgt_row_pane_g3_ParamLimits

0xfda6,	// (0x0004db06) list_notif_wgt_row_pane_g_ParamLimits

0xeae8,	// (0x0004c848) list_notif_wgt_row_pane_t1_ParamLimits

0xeafe,	// (0x0004c85e) list_notif_wgt_row_pane_t2_ParamLimits

0xeb10,	// (0x0004c870) list_notif_wgt_row_pane_t3_ParamLimits

0xfdad,	// (0x0004db0d) list_notif_wgt_row_pane_t_ParamLimits

0xbeed,	// (0x00049c4d) listrow_wgtman_pane_g1_ParamLimits

0xbefa,	// (0x00049c5a) listrow_wgtman_pane_g2_ParamLimits

0xfddd,	// (0x0004db3d) listrow_wgtman_pane_g_ParamLimits

0x3ff7,	// (0x00041d57) listrow_wgtman_pane_t1_ParamLimits

0x400f,	// (0x00041d6f) listrow_wgtman_pane_t2_ParamLimits

0xfde2,	// (0x0004db42) listrow_wgtman_pane_t_ParamLimits

0x4035,	// (0x00041d95) wait_bar_pane_cp09_ParamLimits

0x021e,	// (0x0003df7e) bg_popup_heading_pane_cp02

0xedc1,	// (0x0004cb21) popup_notif_wgt_heading_pane_g1

0xedc9,	// (0x0004cb29) popup_notif_wgt_heading_pane_t1

0x021e,	// (0x0003df7e) main_vids_pane

0x021e,	// (0x0003df7e) vids_listscroll_pane

0xc6e3,	// (0x0004a443) scroll_pane_cp040

0x021e,	// (0x0003df7e) vids_list_pane

0xc6ee,	// (0x0004a44e) vids_list_double_pane_ParamLimits

0xc6ee,	// (0x0004a44e) vids_list_double_pane

0xc6ff,	// (0x0004a45f) vids_list_double_pane_g1

0xc708,	// (0x0004a468) vids_list_double_pane_t1

0xc717,	// (0x0004a477) vids_list_double_pane_t2

0x0001,

0xfe7b,	// (0x0004dbdb) vids_list_double_pane_t

0x08c6,	// (0x0003e626) main_ncimui_pane_ParamLimits

0xad1f,	// (0x00048a7f) main_ncimui_pane_g1_ParamLimits

0xad2b,	// (0x00048a8b) main_ncimui_pane_g2_ParamLimits

0xad2b,	// (0x00048a8b) main_ncimui_pane_g2

0x0001,

0xfb60,	// (0x0004d8c0) main_ncimui_pane_g_ParamLimits

0xfb60,	// (0x0004d8c0) main_ncimui_pane_g

0xc481,	// (0x0004a1e1) main_welc_pane_g1_ParamLimits

0xc481,	// (0x0004a1e1) main_welc_pane_g1

0xc496,	// (0x0004a1f6) main_welc_pane_g2_ParamLimits

0xc496,	// (0x0004a1f6) main_welc_pane_g2

0x0003,

0xfe65,	// (0x0004dbc5) main_welc_pane_g_ParamLimits

0xfe65,	// (0x0004dbc5) main_welc_pane_g

0x4559,	// (0x000422b9) listscroll_mce_pane_ParamLimits

0x157e,	// (0x0003f2de) wait_bar_pane_cp10

0x2948,	// (0x000406a8) main_cale_day_pane_ParamLimits

0x2948,	// (0x000406a8) main_cale_week_pane_ParamLimits

0x08a4,	// (0x0003e604) main_messa_pane_ParamLimits

0x80d9,	// (0x00045e39) main_clock2_btn_pane_ParamLimits

0x80d9,	// (0x00045e39) main_clock2_btn_pane

0x80ed,	// (0x00045e4d) main_clock2_btn_pane_cp01_ParamLimits

0x80ed,	// (0x00045e4d) main_clock2_btn_pane_cp01

0xe596,	// (0x0004c2f6) list_cale_mrui_pane_ParamLimits

0xeb46,	// (0x0004c8a6) main_cf0_pane_g2

0x0001,

0xfdb4,	// (0x0004db14) main_cf0_pane_g

0xc0f3,	// (0x00049e53) area_left_week_number_pane_ParamLimits

0xc0ff,	// (0x00049e5f) area_top_day_name_pane_ParamLimits

0xc112,	// (0x00049e72) frame_month_view_pane_ParamLimits

0xec5f,	// (0x0004c9bf) grid_month_view_pane_ParamLimits

0xec6d,	// (0x0004c9cd) frm_month_g1_ParamLimits

0xc193,	// (0x00049ef3) frm_month_g2_ParamLimits

0xc1a6,	// (0x00049f06) frm_month_g3_ParamLimits

0xc1b9,	// (0x00049f19) frm_month_g4_ParamLimits

0xc1cc,	// (0x00049f2c) frm_month_g5_ParamLimits

0xc1df,	// (0x00049f3f) frm_month_g6_ParamLimits

0xc1f2,	// (0x00049f52) frm_month_g7_ParamLimits

0xec7a,	// (0x0004c9da) frm_month_g8_ParamLimits

0xc205,	// (0x00049f65) frm_month_g9_ParamLimits

0xc215,	// (0x00049f75) frm_month_g10_ParamLimits

0xc225,	// (0x00049f85) frm_month_g11_ParamLimits

0xc235,	// (0x00049f95) frm_month_g12_ParamLimits

0xc247,	// (0x00049fa7) frm_month_g13_ParamLimits

0xc259,	// (0x00049fb9) frm_month_g14_ParamLimits

0xc26d,	// (0x00049fcd) frm_month_g15_ParamLimits

0xc281,	// (0x00049fe1) frm_month_g16_ParamLimits

0xfe0c,	// (0x0004db6c) frm_month_g_ParamLimits

0xec87,	// (0x0004c9e7) cell_top_day_name_pane_t1_ParamLimits

0xc295,	// (0x00049ff5) cell_area_left_week_number_pane_g1_ParamLimits

0xc2a1,	// (0x0004a001) cell_area_left_week_number_pane_t1_ParamLimits

0x091f,	// (0x0003e67f) cell_month_view_pane_g1_ParamLimits

0xc2b4,	// (0x0004a014) cell_month_view_pane_t1_ParamLimits

0x089c,	// (0x0003e5fc) main_clock2_btn_pane_g1

0xedd7,	// (0x0004cb37) main_clock2_btn_pane_t1

0x08c6,	// (0x0003e626) listscroll_cmail_pane_ParamLimits

0xe16d,	// (0x0004becd) main_sp_fs_email_pane_g1_ParamLimits

0xe179,	// (0x0004bed9) main_sp_fs_email_pane_g2_ParamLimits

0xfc5f,	// (0x0004d9bf) main_sp_fs_email_pane_g_ParamLimits

0xe759,	// (0x0004c4b9) list_recal_day_pane_ParamLimits

0xe76a,	// (0x0004c4ca) mian_recal_day_pane_t1

0x3e39,	// (0x00041b99) list_single_dyc_row_text_pane_t4_ParamLimits

0x3e39,	// (0x00041b99) list_single_dyc_row_text_pane_t4

0x3e82,	// (0x00041be2) list_single_dyc_row_text_pane_t5_ParamLimits

0x3e82,	// (0x00041be2) list_single_dyc_row_text_pane_t5

0xe21b,	// (0x0004bf7b) list_single_dyc_row_text_pane_t6_ParamLimits

0xe21b,	// (0x0004bf7b) list_single_dyc_row_text_pane_t6

0x5c91,	// (0x000439f1) aid_mgn_list_cale_time_pane

0x08c6,	// (0x0003e626) main_gallery2_pane_ParamLimits

0x8103,	// (0x00045e63) main_clock2_pane_cp01_t1

0x8111,	// (0x00045e71) main_clock2_pane_cp01_t3

0x0001,

0xf745,	// (0x0004d4a5) main_clock2_pane_cp01_t

0x490f,	// (0x0004266f) cale_week_scroll_pane_g16_ParamLimits

0x490f,	// (0x0004266f) cale_week_scroll_pane_g16

0x0b43,	// (0x0003e8a3) vorec_slider_pane

0xed53,	// (0x0004cab3) vidtel_button_pane_t1_ParamLimits

0xbabe,	// (0x0004981e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbabe,	// (0x0004981e) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbacf,	// (0x0004982f) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbacf,	// (0x0004982f) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd62,	// (0x0004dac2) main_fs_bigclock_clock_pane_g_ParamLimits

0xbae2,	// (0x00049842) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbaf8,	// (0x00049858) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6b,	// (0x0004dacb) main_fs_bigclock_clock_pane_t_ParamLimits

0x78ae,	// (0x0004560e) main_mup3_lyrics_pane_ParamLimits

0x78ae,	// (0x0004560e) main_mup3_lyrics_pane

0xc74d,	// (0x0004a4ad) main_mup3_lyrics_pane_t1_ParamLimits

0xc74d,	// (0x0004a4ad) main_mup3_lyrics_pane_t1

0xd0ab,	// (0x0004ae0b) aid_main_mp4_pane_t1_area

0xd0b5,	// (0x0004ae15) aid_main_mp4_pane_t2_area

0xd161,	// (0x0004aec1) main_mp4_pane_g7_ParamLimits

0xd161,	// (0x0004aec1) main_mp4_pane_g7

0xd16d,	// (0x0004aecd) main_mp4_pane_g8_ParamLimits

0xd16d,	// (0x0004aecd) main_mp4_pane_g8

0x8f1d,	// (0x00046c7d) aid_call6_pane_g1_size

0xc3f7,	// (0x0004a157) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc3f7,	// (0x0004a157) list_double_large_graphic_phob2_other_pane

0x135a,	// (0x0003f0ba) list_double_large_graphic_phob2_other_pane_g1

0x021e,	// (0x0003df7e) list_highlight_pane_cp026

0x08c6,	// (0x0003e626) main_welc_pane_ParamLimits

0xb506,	// (0x00049266) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb506,	// (0x00049266) main_sp_fs_ctrlbar_pane_g3

0xb520,	// (0x00049280) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb520,	// (0x00049280) main_sp_fs_ctrlbar_pane_g4

0xb554,	// (0x000492b4) toolbar2_fixed_button_pane_cp01

0xb55f,	// (0x000492bf) toolbar2_fixed_button_pane_cp02

0xb56c,	// (0x000492cc) toolbar2_fixed_button_pane_cp03

0xc42d,	// (0x0004a18d) list_welc_entry_pane_ParamLimits

0xc42d,	// (0x0004a18d) list_welc_entry_pane

0xc4ab,	// (0x0004a20b) main_welc_pane_g3_ParamLimits

0xc4ab,	// (0x0004a20b) main_welc_pane_g3

0xc4fa,	// (0x0004a25a) main_welc_pane_t2_ParamLimits

0xc4fa,	// (0x0004a25a) main_welc_pane_t2

0xc514,	// (0x0004a274) main_welc_pane_t3_ParamLimits

0xc514,	// (0x0004a274) main_welc_pane_t3

0x0005,

0xfe6e,	// (0x0004dbce) main_welc_pane_t_ParamLimits

0xfe6e,	// (0x0004dbce) main_welc_pane_t

0xc643,	// (0x0004a3a3) welc_button_pane_ParamLimits

0xc643,	// (0x0004a3a3) welc_button_pane

0xc6ab,	// (0x0004a40b) welc_service_logo_pane_ParamLimits

0xc6ab,	// (0x0004a40b) welc_service_logo_pane

0xc769,	// (0x0004a4c9) list_single_welc_entry_pane_ParamLimits

0xc769,	// (0x0004a4c9) list_single_welc_entry_pane

0xc77a,	// (0x0004a4da) list_single_welc_entry_pane_g1

0xc782,	// (0x0004a4e2) list_single_welc_entry_pane_t1

0xc790,	// (0x0004a4f0) list_single_welc_entry_pane_t2

0x0001,

0xfe80,	// (0x0004dbe0) list_single_welc_entry_pane_t

0x021e,	// (0x0003df7e) bg_button_pane_cp035

0xede5,	// (0x0004cb45) welc_button_pane_t1

0xedf3,	// (0x0004cb53) welc_service_logo_pane_g1

0xedfc,	// (0x0004cb5c) welc_service_logo_pane_g2

0x0001,

0xfe85,	// (0x0004dbe5) welc_service_logo_pane_g

0x021e,	// (0x0003df7e) main_int_radio_pane

0xda74,	// (0x0004b7d4) list_single_fs_dyc_pane_g1

0x4053,	// (0x00041db3) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4053,	// (0x00041db3) list_double_large_graphic_phob2_pane_g3

0x405f,	// (0x00041dbf) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x405f,	// (0x00041dbf) list_double_large_graphic_phob2_pane_g4

0xc79e,	// (0x0004a4fe) main_int_radio1_pane_ParamLimits

0xc79e,	// (0x0004a4fe) main_int_radio1_pane

0xee05,	// (0x0004cb65) find_pane_cp02

0xc7bb,	// (0x0004a51b) input_focus_pane_cp12_ParamLimits

0xc7bb,	// (0x0004a51b) input_focus_pane_cp12

0xc7cb,	// (0x0004a52b) input_focus_pane_cp13_ParamLimits

0xc7cb,	// (0x0004a52b) input_focus_pane_cp13

0xc7df,	// (0x0004a53f) input_focus_pane_cp14_ParamLimits

0xc7df,	// (0x0004a53f) input_focus_pane_cp14

0xee0e,	// (0x0004cb6e) int_radio1_listscroll_pane

0xc7f3,	// (0x0004a553) main_int_radio1_pane_g1_ParamLimits

0xc7f3,	// (0x0004a553) main_int_radio1_pane_g1

0xc80b,	// (0x0004a56b) main_int_radio1_pane_t1_ParamLimits

0xc80b,	// (0x0004a56b) main_int_radio1_pane_t1

0xc826,	// (0x0004a586) main_int_radio1_pane_t2_ParamLimits

0xc826,	// (0x0004a586) main_int_radio1_pane_t2

0xc841,	// (0x0004a5a1) main_int_radio1_pane_t3_ParamLimits

0xc841,	// (0x0004a5a1) main_int_radio1_pane_t3

0xc85c,	// (0x0004a5bc) main_int_radio1_pane_t4_ParamLimits

0xc85c,	// (0x0004a5bc) main_int_radio1_pane_t4

0xee18,	// (0x0004cb78) main_int_radio1_pane_t5_ParamLimits

0xee18,	// (0x0004cb78) main_int_radio1_pane_t5

0xc86e,	// (0x0004a5ce) main_int_radio1_pane_t6_ParamLimits

0xc86e,	// (0x0004a5ce) main_int_radio1_pane_t6

0xc883,	// (0x0004a5e3) main_int_radio1_pane_t7_ParamLimits

0xc883,	// (0x0004a5e3) main_int_radio1_pane_t7

0xc898,	// (0x0004a5f8) main_int_radio1_pane_t8_ParamLimits

0xc898,	// (0x0004a5f8) main_int_radio1_pane_t8

0xc8b7,	// (0x0004a617) main_int_radio1_pane_t9_ParamLimits

0xc8b7,	// (0x0004a617) main_int_radio1_pane_t9

0xc8c9,	// (0x0004a629) main_int_radio1_pane_t10_ParamLimits

0xc8c9,	// (0x0004a629) main_int_radio1_pane_t10

0xc8ef,	// (0x0004a64f) main_int_radio1_pane_t11_ParamLimits

0xc8ef,	// (0x0004a64f) main_int_radio1_pane_t11

0xc915,	// (0x0004a675) main_int_radio1_pane_t12_ParamLimits

0xc915,	// (0x0004a675) main_int_radio1_pane_t12

0x000b,

0xfe8a,	// (0x0004dbea) main_int_radio1_pane_t_ParamLimits

0xfe8a,	// (0x0004dbea) main_int_radio1_pane_t

0xee2a,	// (0x0004cb8a) int_radio_list_pane

0xeca2,	// (0x0004ca02) scroll_pane_cp037

0xee32,	// (0x0004cb92) list_double_large_graphic_int_radio_pane_ParamLimits

0xee32,	// (0x0004cb92) list_double_large_graphic_int_radio_pane

0xee4b,	// (0x0004cbab) list_double_large_graphic_int_radio_pane_g1

0xee54,	// (0x0004cbb4) list_double_large_graphic_int_radio_pane_t1

0xee62,	// (0x0004cbc2) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea3,	// (0x0004dc03) list_double_large_graphic_int_radio_pane_t

0x021e,	// (0x0003df7e) list_highlight_pane_cp027

0xed9a,	// (0x0004cafa) main_button_pane_4

0xc4bb,	// (0x0004a21b) main_welc_pane_g4_ParamLimits

0xc4bb,	// (0x0004a21b) main_welc_pane_g4

0xc52c,	// (0x0004a28c) main_welc_pane_t4_ParamLimits

0xc52c,	// (0x0004a28c) main_welc_pane_t4

0xc543,	// (0x0004a2a3) main_welc_pane_t5_ParamLimits

0xc543,	// (0x0004a2a3) main_welc_pane_t5

0xc580,	// (0x0004a2e0) main_welc_pane_t6_ParamLimits

0xc580,	// (0x0004a2e0) main_welc_pane_t6

0xc65a,	// (0x0004a3ba) welc_button_pane_2_ParamLimits

0xc65a,	// (0x0004a3ba) welc_button_pane_2

0xc676,	// (0x0004a3d6) welc_button_pane_3_ParamLimits

0xc676,	// (0x0004a3d6) welc_button_pane_3

0xeda2,	// (0x0004cb02) welc_button_pane_4

0xc695,	// (0x0004a3f5) welc_button_pane_5_ParamLimits

0xc695,	// (0x0004a3f5) welc_button_pane_5

0x4155,	// (0x00041eb5) main_popup_welc_pane

0xee7f,	// (0x0004cbdf) main_welc_sk_g3

0xee89,	// (0x0004cbe9) main_welc_sk_g4

0xee93,	// (0x0004cbf3) main_welc_sk_t3

0xeea3,	// (0x0004cc03) main_welc_sk_t4

0xeeb3,	// (0x0004cc13) popup_welc_pane_t4

0xeec1,	// (0x0004cc21) popup_welc_pane_t5

0xeed1,	// (0x0004cc31) popup_welc_pane_t6

0x021e,	// (0x0003df7e) main_acti_pane

0x021e,	// (0x0003df7e) main_sso_pane

0xc927,	// (0x0004a687) sso_body_pane_ParamLimits

0xc927,	// (0x0004a687) sso_body_pane

0xc93b,	// (0x0004a69b) sso_logo_pane_ParamLimits

0xc93b,	// (0x0004a69b) sso_logo_pane

0xc967,	// (0x0004a6c7) sso_sk_pane_ParamLimits

0xc967,	// (0x0004a6c7) sso_sk_pane

0x0b79,	// (0x0003e8d9) main_sso_logo_pane_g1

0xc979,	// (0x0004a6d9) sso_sk_pane_t1_ParamLimits

0xc979,	// (0x0004a6d9) sso_sk_pane_t1

0xc993,	// (0x0004a6f3) sso_sk_pane_t2_ParamLimits

0xc993,	// (0x0004a6f3) sso_sk_pane_t2

0x0001,

0xfea8,	// (0x0004dc08) sso_sk_pane_t_ParamLimits

0xfea8,	// (0x0004dc08) sso_sk_pane_t

0xef0f,	// (0x0004cc6f) aid_sso_gap

0xef18,	// (0x0004cc78) aid_sso_txt1

0xef22,	// (0x0004cc82) aid_sso_txt2

0xef2c,	// (0x0004cc8c) aid_sso_txt3

0x0002,

0xfead,	// (0x0004dc0d) aid_sso_txt

0xef36,	// (0x0004cc96) aid_sso_widget

0xc9fd,	// (0x0004a75d) sso_btn_pane_ParamLimits

0xc9fd,	// (0x0004a75d) sso_btn_pane

0xca85,	// (0x0004a7e5) sso_option_pane_ParamLimits

0xca85,	// (0x0004a7e5) sso_option_pane

0xcb05,	// (0x0004a865) sso_query_pane_ParamLimits

0xcb05,	// (0x0004a865) sso_query_pane

0xcb5b,	// (0x0004a8bb) sso_query_pane_cp01_ParamLimits

0xcb5b,	// (0x0004a8bb) sso_query_pane_cp01

0xcbb5,	// (0x0004a915) sso_t_hdr_pane_ParamLimits

0xcbb5,	// (0x0004a915) sso_t_hdr_pane

0xcbd9,	// (0x0004a939) sso_t_nml_pane_ParamLimits

0xcbd9,	// (0x0004a939) sso_t_nml_pane

0xef2c,	// (0x0004cc8c) sso_t_sub_pane

0xc948,	// (0x0004a6a8) sso_popup_window_ParamLimits

0xc948,	// (0x0004a6a8) sso_popup_window

0xc9a9,	// (0x0004a709) sso_apps_pane_ParamLimits

0xc9a9,	// (0x0004a709) sso_apps_pane

0xc9d3,	// (0x0004a733) sso_body_pane_g1

0xc9dd,	// (0x0004a73d) sso_body_pane_t1

0xc9ed,	// (0x0004a74d) sso_body_pane_t2

0x0001,

0xfeb4,	// (0x0004dc14) sso_body_pane_t

0xca4f,	// (0x0004a7af) sso_btn_pane_cp01_ParamLimits

0xca4f,	// (0x0004a7af) sso_btn_pane_cp01

0xcad9,	// (0x0004a839) sso_prog_pane_ParamLimits

0xcad9,	// (0x0004a839) sso_prog_pane

0xef40,	// (0x0004cca0) sso_t_hdr_pane_t1_ParamLimits

0xef40,	// (0x0004cca0) sso_t_hdr_pane_t1

0xef53,	// (0x0004ccb3) input_focus_pane_cp10_ParamLimits

0xef53,	// (0x0004ccb3) input_focus_pane_cp10

0xef69,	// (0x0004ccc9) sso_query_pane_t1_ParamLimits

0xef69,	// (0x0004ccc9) sso_query_pane_t1

0xef7c,	// (0x0004ccdc) sso_query_pane_t2_ParamLimits

0xef7c,	// (0x0004ccdc) sso_query_pane_t2

0xef95,	// (0x0004ccf5) sso_query_pane_t3_ParamLimits

0xef95,	// (0x0004ccf5) sso_query_pane_t3

0xefbf,	// (0x0004cd1f) sso_query_pane_t4_ParamLimits

0xefbf,	// (0x0004cd1f) sso_query_pane_t4

0x0003,

0xfeb9,	// (0x0004dc19) sso_query_pane_t_ParamLimits

0xfeb9,	// (0x0004dc19) sso_query_pane_t

0x021e,	// (0x0003df7e) bg_button_pane_cp22

0xee70,	// (0x0004cbd0) sso_btn_pane_t1

0xcc2f,	// (0x0004a98f) sso_t_nml_pane_t1_ParamLimits

0xcc2f,	// (0x0004a98f) sso_t_nml_pane_t1

0x00bd,	// (0x0003de1d) sso_option_row_pane_ParamLimits

0x00bd,	// (0x0003de1d) sso_option_row_pane

0x00ca,	// (0x0003de2a) sso_t_sub_pane_t1_ParamLimits

0x00ca,	// (0x0003de2a) sso_t_sub_pane_t1

0x08c6,	// (0x0003e626) bg_popup_window_pane_cp11_ParamLimits

0x08c6,	// (0x0003e626) bg_popup_window_pane_cp11

0x00dd,	// (0x0003de3d) popup_sk_window_cp01_ParamLimits

0x00dd,	// (0x0003de3d) popup_sk_window_cp01

0x00ea,	// (0x0003de4a) sso_popup_body_pane_ParamLimits

0x00ea,	// (0x0003de4a) sso_popup_body_pane

0x00f7,	// (0x0003de57) scroll_pane_cp21_ParamLimits

0x00f7,	// (0x0003de57) scroll_pane_cp21

0x0104,	// (0x0003de64) sso_popup_body_t_pane_ParamLimits

0x0104,	// (0x0003de64) sso_popup_body_t_pane

0x0111,	// (0x0003de71) sso_popup_body_t_hdr_pane_ParamLimits

0x0111,	// (0x0003de71) sso_popup_body_t_hdr_pane

0x011f,	// (0x0003de7f) sso_popup_body_t_nml_pane_ParamLimits

0x011f,	// (0x0003de7f) sso_popup_body_t_nml_pane

0x013a,	// (0x0003de9a) sso_popup_body_t_sub_pane_ParamLimits

0x013a,	// (0x0003de9a) sso_popup_body_t_sub_pane

0x015d,	// (0x0003debd) sso_popup_body_t_hdr_pane_t1

0xcc4a,	// (0x0004a9aa) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcc4a,	// (0x0004a9aa) sso_popup_body_t_nml_pane_t1

0x01b1,	// (0x0003df11) sso_popup_body_t_sub_pane_t1_ParamLimits

0x01b1,	// (0x0003df11) sso_popup_body_t_sub_pane_t1

0x0b79,	// (0x0003e8d9) sso_prog_pane_g1

0xcc84,	// (0x0004a9e4) sso_apps_pane_comp1_ParamLimits

0xcc84,	// (0x0004a9e4) sso_apps_pane_comp1

0x01f2,	// (0x0003df52) sso_apps_pane_comp1_g1

0x01fa,	// (0x0003df5a) sso_apps_pane_comp1_t1

0x0208,	// (0x0003df68) sso_option_row_pane_g1

0x0210,	// (0x0003df70) sso_option_row_pane_t1

0xc41a,	// (0x0004a17a) bg_welc_area_ParamLimits

0xc41a,	// (0x0004a17a) bg_welc_area

0xc5be,	// (0x0004a31e) sso_t_hdr_pane_a_t1_ParamLimits

0xc5be,	// (0x0004a31e) sso_t_hdr_pane_a_t1

0xc5d9,	// (0x0004a339) sso_t_nml_pane_a_t1_ParamLimits

0xc5d9,	// (0x0004a339) sso_t_nml_pane_a_t1

0xc608,	// (0x0004a368) sso_t_sub_pane_a_t1_ParamLimits

0xc608,	// (0x0004a368) sso_t_sub_pane_a_t1

0xee70,	// (0x0004cbd0) sso_btn_pane_t1_copy1

0x021e,	// (0x0003df7e) welc_button_pane_2_comp1

0xeedf,	// (0x0004cc3f) sso_t_hdr_pane_p_t1

0xeeef,	// (0x0004cc4f) sso_t_nml_pane_p_t1

0xeeff,	// (0x0004cc5f) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Small

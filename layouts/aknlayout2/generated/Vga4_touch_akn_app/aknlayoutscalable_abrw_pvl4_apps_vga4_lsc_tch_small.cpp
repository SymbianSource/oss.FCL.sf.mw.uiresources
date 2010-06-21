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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006e006 };

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
0xfc68,	// (0x0006dc6e) Screen

0xfc74,	// (0x0006dc7a) application_window

0xfcdc,	// (0x0006dce2) area_bottom_pane_ParamLimits

0xfcdc,	// (0x0006dce2) area_bottom_pane

0xfd3e,	// (0x0006dd44) area_top_pane_ParamLimits

0xfd3e,	// (0x0006dd44) area_top_pane

0xfd9b,	// (0x0006dda1) call_video_uplink_pane_ParamLimits

0xfd9b,	// (0x0006dda1) call_video_uplink_pane

0xfde0,	// (0x0006dde6) main_pane_ParamLimits

0xfde0,	// (0x0006dde6) main_pane

0xca3e,	// (0x0007aa44) context_pane

0x36bc,	// (0x000716c2) navi_pane

0x36f0,	// (0x000716f6) popup_cale_events_window_ParamLimits

0x36f0,	// (0x000716f6) popup_cale_events_window

0xca51,	// (0x0007aa57) popup_mup_playback_window

0x3708,	// (0x0007170e) signal_pane

0xa9ed,	// (0x000789f3) main_browser_pane

0xab9e,	// (0x00078ba4) main_burst_pane

0x33c4,	// (0x000713ca) main_calc_pane

0xca24,	// (0x0007aa2a) main_cale_day_pane

0x33d8,	// (0x000713de) main_cale_month_pane

0xca24,	// (0x0007aa2a) main_cale_week_pane

0xab9e,	// (0x00078ba4) main_call_pane

0x9b43,	// (0x00077b49) main_call_poc_pane

0xab9e,	// (0x00078ba4) main_camera_pane

0xab9e,	// (0x00078ba4) main_chi_dic_pane

0xb39a,	// (0x000793a0) main_clock_pane

0x9b43,	// (0x00077b49) main_fmradio_pane

0xab9e,	// (0x00078ba4) main_graph_messa_pane

0x9b43,	// (0x00077b49) main_help_pane

0xa9ed,	// (0x000789f3) main_im_pane

0x9d9e,	// (0x00077da4) main_image_pane_ParamLimits

0x9d9e,	// (0x00077da4) main_image_pane

0x9b43,	// (0x00077b49) main_location2_pane

0xab9e,	// (0x00078ba4) main_location_pane

0x9d9e,	// (0x00077da4) main_messa_pane

0x9b43,	// (0x00077b49) main_mp2_pane

0xab9e,	// (0x00078ba4) main_mp_pane

0x9b43,	// (0x00077b49) main_msg_pane

0x9b43,	// (0x00077b49) main_mup_eq_pane

0x9b43,	// (0x00077b49) main_mup_pane

0xa9ed,	// (0x000789f3) main_notes_pane

0x9b43,	// (0x00077b49) main_pec_pane

0x9b43,	// (0x00077b49) main_phob_pane

0x9b43,	// (0x00077b49) main_pinb_pane

0x9b43,	// (0x00077b49) main_postcard_pane

0x9b43,	// (0x00077b49) main_qdial_pane

0xab9e,	// (0x00078ba4) main_skin_pane

0x9b43,	// (0x00077b49) main_smil2_pane

0xab9e,	// (0x00078ba4) main_smil_pane

0xab9e,	// (0x00078ba4) main_video_pane

0xab9e,	// (0x00078ba4) main_video_tele_pane

0x9d9e,	// (0x00077da4) main_viewer_pane_ParamLimits

0x9d9e,	// (0x00077da4) main_viewer_pane

0xab9e,	// (0x00078ba4) main_vorec_pane

0x342a,	// (0x00071430) popup_blid_sat_info_window_ParamLimits

0x342a,	// (0x00071430) popup_blid_sat_info_window

0x348e,	// (0x00071494) popup_dyc_status_message_window_ParamLimits

0x348e,	// (0x00071494) popup_dyc_status_message_window

0x34a8,	// (0x000714ae) popup_grid_large_graphic_window_ParamLimits

0x34a8,	// (0x000714ae) popup_grid_large_graphic_window

0x356a,	// (0x00071570) popup_loc_request_window_ParamLimits

0x356a,	// (0x00071570) popup_loc_request_window

0x3690,	// (0x00071696) popup_wml_address_window_ParamLimits

0x3690,	// (0x00071696) popup_wml_address_window

0x3202,	// (0x00071208) call_muted_g1

0x2e93,	// (0x00070e99) popup_call_audio_conf_window_ParamLimits

0x2e93,	// (0x00070e99) popup_call_audio_conf_window

0x3212,	// (0x00071218) popup_call_audio_first_window_ParamLimits

0x3212,	// (0x00071218) popup_call_audio_first_window

0x3288,	// (0x0007128e) popup_call_audio_in_window_ParamLimits

0x3288,	// (0x0007128e) popup_call_audio_in_window

0x32c4,	// (0x000712ca) popup_call_audio_out_window_ParamLimits

0x32c4,	// (0x000712ca) popup_call_audio_out_window

0x32fe,	// (0x00071304) popup_call_audio_second_window_ParamLimits

0x32fe,	// (0x00071304) popup_call_audio_second_window

0x3354,	// (0x0007135a) popup_call_audio_wait_window_ParamLimits

0x3354,	// (0x0007135a) popup_call_audio_wait_window

0x3389,	// (0x0007138f) popup_number_entry_window_ParamLimits

0x3389,	// (0x0007138f) popup_number_entry_window

0x96fb,	// (0x00077701) bg_popup_call_pane_cp05_ParamLimits

0x96fb,	// (0x00077701) bg_popup_call_pane_cp05

0x971b,	// (0x00077721) popup_number_entry_window_t1

0x972e,	// (0x00077734) popup_number_entry_window_t2

0x9740,	// (0x00077746) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007d0cc) popup_number_entry_window_t

0x9787,	// (0x0007778d) text_title_cp2

0x979a,	// (0x000777a0) bg_popup_call_pane_cp_ParamLimits

0x979a,	// (0x000777a0) bg_popup_call_pane_cp

0x97a8,	// (0x000777ae) call_thumbnail_pane

0x97b0,	// (0x000777b6) popup_call_audio_in_window_g1_ParamLimits

0x97b0,	// (0x000777b6) popup_call_audio_in_window_g1

0x97bc,	// (0x000777c2) popup_call_audio_in_window_g2_ParamLimits

0x97bc,	// (0x000777c2) popup_call_audio_in_window_g2

0x97c8,	// (0x000777ce) popup_call_audio_in_window_g3_ParamLimits

0x97c8,	// (0x000777ce) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007d0d5) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007d0d5) popup_call_audio_in_window_g

0x97d4,	// (0x000777da) popup_call_audio_in_window_t1_ParamLimits

0x97d4,	// (0x000777da) popup_call_audio_in_window_t1

0x97f0,	// (0x000777f6) popup_call_audio_in_window_t2_ParamLimits

0x97f0,	// (0x000777f6) popup_call_audio_in_window_t2

0x980c,	// (0x00077812) popup_call_audio_in_window_t3_ParamLimits

0x980c,	// (0x00077812) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007d0dc) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007d0dc) popup_call_audio_in_window_t

0x979a,	// (0x000777a0) bg_popup_call_pane_cp01_ParamLimits

0x979a,	// (0x000777a0) bg_popup_call_pane_cp01

0x97a8,	// (0x000777ae) call_thumbnail_pane_cp02

0x981f,	// (0x00077825) call_type_pane_cp022

0x9827,	// (0x0007782d) popup_call_audio_out_window_g1_ParamLimits

0x9827,	// (0x0007782d) popup_call_audio_out_window_g1

0x9839,	// (0x0007783f) popup_call_audio_out_window_g2_ParamLimits

0x9839,	// (0x0007783f) popup_call_audio_out_window_g2

0x9845,	// (0x0007784b) popup_call_audio_out_window_g3_ParamLimits

0x9845,	// (0x0007784b) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007d0e3) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007d0e3) popup_call_audio_out_window_g

0x9857,	// (0x0007785d) popup_call_audio_out_window_t1_ParamLimits

0x9857,	// (0x0007785d) popup_call_audio_out_window_t1

0x986f,	// (0x00077875) popup_call_audio_out_window_t2_ParamLimits

0x986f,	// (0x00077875) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007d0ea) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007d0ea) popup_call_audio_out_window_t

0x9884,	// (0x0007788a) bg_popup_call_pane_ParamLimits

0x9884,	// (0x0007788a) bg_popup_call_pane

0xff7d,	// (0x0006df83) call_thumbnail_pane_cp_ParamLimits

0xff7d,	// (0x0006df83) call_thumbnail_pane_cp

0x9908,	// (0x0007790e) call_type_pane_cp01_ParamLimits

0x9908,	// (0x0007790e) call_type_pane_cp01

0x994c,	// (0x00077952) popup_call_audio_first_window_g1_ParamLimits

0x994c,	// (0x00077952) popup_call_audio_first_window_g1

0x9998,	// (0x0007799e) popup_call_audio_first_window_g2_ParamLimits

0x9998,	// (0x0007799e) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007d0ef) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007d0ef) popup_call_audio_first_window_g

0x99dc,	// (0x000779e2) popup_call_audio_first_window_t1_ParamLimits

0x99dc,	// (0x000779e2) popup_call_audio_first_window_t1

0x9a88,	// (0x00077a8e) popup_call_audio_first_window_t4_ParamLimits

0x9a88,	// (0x00077a8e) popup_call_audio_first_window_t4

0x9b14,	// (0x00077b1a) popup_call_audio_first_window_t5_ParamLimits

0x9b14,	// (0x00077b1a) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007d0f4) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007d0f4) popup_call_audio_first_window_t

0x9b43,	// (0x00077b49) bg_popup_call_pane_cp02

0x9b4d,	// (0x00077b53) call_type_pane_cp023

0x9b55,	// (0x00077b5b) popup_call_audio_wait_window_g1

0x9b5d,	// (0x00077b63) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007d0fb) popup_call_audio_wait_window_g

0x9b65,	// (0x00077b6b) popup_call_audio_wait_window_t3

0x9b73,	// (0x00077b79) bg_popup_call_pane_cp03_ParamLimits

0x9b73,	// (0x00077b79) bg_popup_call_pane_cp03

0x9bd3,	// (0x00077bd9) call_thumbnail_pane_cp011_ParamLimits

0x9bd3,	// (0x00077bd9) call_thumbnail_pane_cp011

0x9bdf,	// (0x00077be5) call_type_pane_cp034_ParamLimits

0x9bdf,	// (0x00077be5) call_type_pane_cp034

0x9c1b,	// (0x00077c21) popup_call_audio_second_window_g1_ParamLimits

0x9c1b,	// (0x00077c21) popup_call_audio_second_window_g1

0x9c57,	// (0x00077c5d) popup_call_audio_second_window_g2_ParamLimits

0x9c57,	// (0x00077c5d) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007d100) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007d100) popup_call_audio_second_window_g

0x9c93,	// (0x00077c99) popup_call_audio_second_window_t1_ParamLimits

0x9c93,	// (0x00077c99) popup_call_audio_second_window_t1

0x9d14,	// (0x00077d1a) popup_call_audio_second_window_t2_ParamLimits

0x9d14,	// (0x00077d1a) popup_call_audio_second_window_t2

0x9d4a,	// (0x00077d50) popup_call_audio_second_window_t3_ParamLimits

0x9d4a,	// (0x00077d50) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007d105) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007d105) popup_call_audio_second_window_t

0x9b43,	// (0x00077b49) bg_popup_call_pane_cp04

0x9d80,	// (0x00077d86) list_conf_pane

0x9d88,	// (0x00077d8e) popup_call_audio_conf_window_t1

0x9d96,	// (0x00077d9c) call_thumbnail_pane_g1

0x9d9e,	// (0x00077da4) bg_pinb_pane_ParamLimits

0x9d9e,	// (0x00077da4) bg_pinb_pane

0x9dac,	// (0x00077db2) find_pinb_pane

0x9db5,	// (0x00077dbb) listscroll_pinb_pane_ParamLimits

0x9db5,	// (0x00077dbb) listscroll_pinb_pane

0x9dc4,	// (0x00077dca) pinb_bg_pane_g1

0xffa1,	// (0x0006dfa7) pinb_bg_pane_g2

0xffad,	// (0x0006dfb3) pinb_bg_pane_g3

0xffb9,	// (0x0006dfbf) pinb_bg_pane_g4

0xffc5,	// (0x0006dfcb) pinb_bg_pane_g5

0xffd1,	// (0x0006dfd7) pinb_bg_pane_g6

0xffdc,	// (0x0006dfe2) pinb_bg_pane_g7

0xffe7,	// (0x0006dfed) pinb_bg_pane_g8

0xfff2,	// (0x0006dff8) pinb_bg_pane_g9

0xfffc,	// (0x0006e002) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007d10c) pinb_bg_pane_g

0x0019,	// (0x0006e01f) grid_pinb_pane

0x0024,	// (0x0006e02a) list_pinb_pane

0x002f,	// (0x0006e035) scroll_pane_cp01_ParamLimits

0x002f,	// (0x0006e035) scroll_pane_cp01

0x9dce,	// (0x00077dd4) find_pinb_pane_g1_ParamLimits

0x9dce,	// (0x00077dd4) find_pinb_pane_g1

0x9de6,	// (0x00077dec) find_pinb_pane_t1

0x9df8,	// (0x00077dfe) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007d126) find_pinb_pane_t

0x9e0d,	// (0x00077e13) input_focus_pane_cp01_ParamLimits

0x9e0d,	// (0x00077e13) input_focus_pane_cp01

0x0041,	// (0x0006e047) cell_pinb_pane_ParamLimits

0x0041,	// (0x0006e047) cell_pinb_pane

0x0063,	// (0x0006e069) cell_pinb_pane_g1_ParamLimits

0x0063,	// (0x0006e069) cell_pinb_pane_g1

0x0077,	// (0x0006e07d) cell_pinb_pane_g2_ParamLimits

0x0077,	// (0x0006e07d) cell_pinb_pane_g2

0x9e19,	// (0x00077e1f) cell_pinb_pane_g3_ParamLimits

0x9e19,	// (0x00077e1f) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007d12b) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007d12b) cell_pinb_pane_g

0x9b43,	// (0x00077b49) grid_highlight_pane_cp01

0x0083,	// (0x0006e089) list_pinb_item_pane_ParamLimits

0x0083,	// (0x0006e089) list_pinb_item_pane

0x9b43,	// (0x00077b49) list_highlight_pane_cp02

0x0096,	// (0x0006e09c) list_pinb_item_pane_g1_ParamLimits

0x0096,	// (0x0006e09c) list_pinb_item_pane_g1

0x00a3,	// (0x0006e0a9) list_pinb_item_pane_g2_ParamLimits

0x00a3,	// (0x0006e0a9) list_pinb_item_pane_g2

0x00af,	// (0x0006e0b5) list_pinb_item_pane_g3_ParamLimits

0x00af,	// (0x0006e0b5) list_pinb_item_pane_g3

0x00c0,	// (0x0006e0c6) list_pinb_item_pane_g4_ParamLimits

0x00c0,	// (0x0006e0c6) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007d132) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007d132) list_pinb_item_pane_g

0x00cc,	// (0x0006e0d2) list_pinb_item_pane_t1_ParamLimits

0x00cc,	// (0x0006e0d2) list_pinb_item_pane_t1

0x0103,	// (0x0006e109) calc_display_pane

0x0128,	// (0x0006e12e) calc_paper_pane

0x014b,	// (0x0006e151) grid_calc_pane

0x9b43,	// (0x00077b49) bg_list_pane_cp01

0x0179,	// (0x0006e17f) clock_g1

0x0181,	// (0x0006e187) clock_g2

0x0001,

0xf135,	// (0x0007d13b) clock_g

0x0189,	// (0x0006e18f) clock_t1_ParamLimits

0x0189,	// (0x0006e18f) clock_t1

0x019e,	// (0x0006e1a4) clock_t2_ParamLimits

0x019e,	// (0x0006e1a4) clock_t2

0x01b0,	// (0x0006e1b6) clock_t3_ParamLimits

0x01b0,	// (0x0006e1b6) clock_t3

0x01c2,	// (0x0006e1c8) clock_t4_ParamLimits

0x01c2,	// (0x0006e1c8) clock_t4

0x01d4,	// (0x0006e1da) clock_t5_ParamLimits

0x01d4,	// (0x0006e1da) clock_t5

0x01e9,	// (0x0006e1ef) clock_t6_ParamLimits

0x01e9,	// (0x0006e1ef) clock_t6

0x01fb,	// (0x0006e201) clock_t7_ParamLimits

0x01fb,	// (0x0006e201) clock_t7

0x020d,	// (0x0006e213) clock_t8_ParamLimits

0x020d,	// (0x0006e213) clock_t8

0x0221,	// (0x0006e227) clock_t9_ParamLimits

0x0221,	// (0x0006e227) clock_t9

0x0008,

0xf13a,	// (0x0007d140) clock_t_ParamLimits

0xf13a,	// (0x0007d140) clock_t

0x9e2d,	// (0x00077e33) popup_clock_analogue_window_cp02

0x9e2d,	// (0x00077e33) popup_clock_digital_window_cp01

0x9e35,	// (0x00077e3b) listscroll_help_pane

0x9b43,	// (0x00077b49) phob_pre_status_pane

0x9e3f,	// (0x00077e45) grid_qdial_pane

0x9d9e,	// (0x00077da4) listscroll_mce_pane

0x9d9e,	// (0x00077da4) bg_notes_pane

0x9e49,	// (0x00077e4f) list_notes_pane

0x0237,	// (0x0006e23d) scroll_pane_cp06

0x9e57,	// (0x00077e5d) bg_calc_paper_pane

0x9e6b,	// (0x00077e71) list_calc_pane

0xa9ed,	// (0x000789f3) bg_calc_display_pane

0x024b,	// (0x0006e251) calc_display_pane_t1

0x025d,	// (0x0006e263) calc_display_pane_t2

0x9e85,	// (0x00077e8b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007d153) calc_display_pane_t

0x026f,	// (0x0006e275) cell_calc_pane_ParamLimits

0x026f,	// (0x0006e275) cell_calc_pane

0xa9f9,	// (0x000789ff) bg_calc_paper_pane_g1

0xaa05,	// (0x00078a0b) bg_calc_paper_pane_g2

0xaa11,	// (0x00078a17) bg_calc_paper_pane_g3

0xaa1d,	// (0x00078a23) bg_calc_paper_pane_g4

0xaa29,	// (0x00078a2f) bg_calc_paper_pane_g5

0x02aa,	// (0x0006e2b0) bg_calc_paper_pane_g6

0x02b8,	// (0x0006e2be) bg_calc_paper_pane_g7

0x02c6,	// (0x0006e2cc) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007d15a) bg_calc_paper_pane_g

0x02d9,	// (0x0006e2df) calc_bg_paper_pane_g9

0x02ec,	// (0x0006e2f2) list_calc_item_pane_ParamLimits

0x02ec,	// (0x0006e2f2) list_calc_item_pane

0xaa35,	// (0x00078a3b) list_calc_item_pane_g1

0x9e97,	// (0x00077e9d) list_calc_item_pane_t1_ParamLimits

0x9e97,	// (0x00077e9d) list_calc_item_pane_t1

0x0304,	// (0x0006e30a) list_calc_item_pane_t2_ParamLimits

0x0304,	// (0x0006e30a) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007d16b) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007d16b) list_calc_item_pane_t

0xaa42,	// (0x00078a48) cell_calc_pane_g1

0xaa4c,	// (0x00078a52) grid_highlight_pane_cp02

0x0336,	// (0x0006e33c) bg_calc_display_pane_g1

0x033f,	// (0x0006e345) bg_calc_display_pane_g2

0xaa6e,	// (0x00078a74) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007d175) bg_calc_display_pane_g

0x0349,	// (0x0006e34f) cell_qdial_pane_ParamLimits

0x0349,	// (0x0006e34f) cell_qdial_pane

0x035d,	// (0x0006e363) cell_qdial_pane_g1_ParamLimits

0x035d,	// (0x0006e363) cell_qdial_pane_g1

0x0373,	// (0x0006e379) cell_qdial_pane_g2_ParamLimits

0x0373,	// (0x0006e379) cell_qdial_pane_g2

0xaa77,	// (0x00078a7d) cell_qdial_pane_g3_ParamLimits

0xaa77,	// (0x00078a7d) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007d17c) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007d17c) cell_qdial_pane_g

0x039a,	// (0x0006e3a0) cell_qdial_pane_t1_ParamLimits

0x039a,	// (0x0006e3a0) cell_qdial_pane_t1

0x03b2,	// (0x0006e3b8) cell_qdial_pane_t2_ParamLimits

0x03b2,	// (0x0006e3b8) cell_qdial_pane_t2

0x03c5,	// (0x0006e3cb) cell_qdial_pane_t3_ParamLimits

0x03c5,	// (0x0006e3cb) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007d185) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007d185) cell_qdial_pane_t

0x9b43,	// (0x00077b49) grid_highlight_pane_cp04

0xaa83,	// (0x00078a89) thumbnail_qdial_pane_ParamLimits

0xaa83,	// (0x00078a89) thumbnail_qdial_pane

0xaadf,	// (0x00078ae5) list_help_pane

0xaae8,	// (0x00078aee) scroll_pane_cp02

0x03d8,	// (0x0006e3de) help_list_pane_t1_ParamLimits

0x03d8,	// (0x0006e3de) help_list_pane_t1

0x9ea9,	// (0x00077eaf) bg_notes_pane_g2

0x9eb1,	// (0x00077eb7) bg_notes_pane_g3

0x9eb9,	// (0x00077ebf) notes_bg_pane_g1

0x9ec1,	// (0x00077ec7) notes_bg_pane_g4

0x9ec9,	// (0x00077ecf) notes_bg_pane_g5

0x9ed1,	// (0x00077ed7) notes_bg_pane_g6

0x9ed9,	// (0x00077edf) notes_bg_pane_g7

0x9ee1,	// (0x00077ee7) notes_bg_pane_g8

0x9ee9,	// (0x00077eef) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007d1a3) notes_bg_pane_g

0x03fc,	// (0x0006e402) list_notes_text_pane_ParamLimits

0x03fc,	// (0x0006e402) list_notes_text_pane

0xaaf1,	// (0x00078af7) list_notes_text_pane_g1

0x0413,	// (0x0006e419) list_notes_text_pane_t1

0x0421,	// (0x0006e427) listscroll_cale_week_pane

0x044b,	// (0x0006e451) bg_cale_heading_pane

0x046f,	// (0x0006e475) bg_cale_pane_cp01

0x048c,	// (0x0006e492) cale_week_corner_pane

0x04ab,	// (0x0006e4b1) cale_week_day_heading_pane

0x04d4,	// (0x0006e4da) cale_week_scroll_pane_g1

0x04f3,	// (0x0006e4f9) cale_week_scroll_pane_g2

0x050b,	// (0x0006e511) cale_week_scroll_pane_g3

0x0523,	// (0x0006e529) cale_week_scroll_pane_g4

0x053b,	// (0x0006e541) cale_week_scroll_pane_g5

0x055b,	// (0x0006e561) cale_week_scroll_pane_g6

0x057b,	// (0x0006e581) cale_week_scroll_pane_g7

0x059f,	// (0x0006e5a5) cale_week_scroll_pane_g8

0x05c3,	// (0x0006e5c9) cale_week_scroll_pane_g9

0x05db,	// (0x0006e5e1) cale_week_scroll_pane_g10

0x05f3,	// (0x0006e5f9) cale_week_scroll_pane_g11

0x060b,	// (0x0006e611) cale_week_scroll_pane_g12

0x062f,	// (0x0006e635) cale_week_scroll_pane_g13

0x062f,	// (0x0006e635) cale_week_scroll_pane_g14

0x062f,	// (0x0006e635) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007d1b2) cale_week_scroll_pane_g

0x0677,	// (0x0006e67d) cale_week_time_pane

0x069b,	// (0x0006e6a1) grid_cale_week_pane

0xab26,	// (0x00078b2c) scroll_pane_cp08

0x06cd,	// (0x0006e6d3) cell_cale_week_pane_ParamLimits

0x06cd,	// (0x0006e6d3) cell_cale_week_pane

0x0769,	// (0x0006e76f) cale_week_day_heading_pane_t1

0x0793,	// (0x0006e799) cale_week_day_heading_pane_t2

0x07c2,	// (0x0006e7c8) cale_week_day_heading_pane_t3

0x07f1,	// (0x0006e7f7) cale_week_day_heading_pane_t4

0x0820,	// (0x0006e826) cale_week_day_heading_pane_t5

0x0853,	// (0x0006e859) cale_week_day_heading_pane_t6

0x088a,	// (0x0006e890) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007d1d3) cale_week_day_heading_pane_t

0xab43,	// (0x00078b49) bg_cale_side_pane

0x08b4,	// (0x0006e8ba) cale_week_time_pane_t1

0x08ce,	// (0x0006e8d4) cale_week_time_pane_t2

0x08e8,	// (0x0006e8ee) cale_week_time_pane_t3

0x0902,	// (0x0006e908) cale_week_time_pane_t4

0x091c,	// (0x0006e922) cale_week_time_pane_t5

0x0936,	// (0x0006e93c) cale_week_time_pane_t6

0x0956,	// (0x0006e95c) cale_week_time_pane_t7

0x097c,	// (0x0006e982) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007d1e2) cale_week_time_pane_t

0x09a2,	// (0x0006e9a8) cell_cale_week_pane_g2

0x09c6,	// (0x0006e9cc) cell_cale_week_pane_g3_ParamLimits

0x09c6,	// (0x0006e9cc) cell_cale_week_pane_g3

0xab51,	// (0x00078b57) grid_highlight_pane_cp07

0xab59,	// (0x00078b5f) listscroll_gms_pane

0xab63,	// (0x00078b69) grid_gms_pane

0xab6c,	// (0x00078b72) listscroll_gms_pane_g1

0xab74,	// (0x00078b7a) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007d1f3) listscroll_gms_pane_g

0x09de,	// (0x0006e9e4) scroll_pane_cp010

0x09e9,	// (0x0006e9ef) cell_gms_pane_ParamLimits

0x09e9,	// (0x0006e9ef) cell_gms_pane

0x0a00,	// (0x0006ea06) cell_gms_pane_g1

0xab7c,	// (0x00078b82) cell_gms_pane_g2

0xab84,	// (0x00078b8a) cell_gms_pane_g3

0xab8d,	// (0x00078b93) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007d1f8) cell_gms_pane_g

0xab96,	// (0x00078b9c) grid_highlight_pane_cp09

0x31aa,	// (0x000711b0) phob_pre_status_pane_g1

0x31b2,	// (0x000711b8) phob_pre_status_pane_g2

0x31ba,	// (0x000711c0) phob_pre_status_pane_g3

0x31c2,	// (0x000711c8) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0007d5e3) phob_pre_status_pane_g

0x31d2,	// (0x000711d8) phob_pre_status_pane_t1

0x31e2,	// (0x000711e8) phob_pre_status_pane_t2

0x31f2,	// (0x000711f8) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0007d5ee) phob_pre_status_pane_t

0xab9e,	// (0x00078ba4) bg_list_pane_cp05

0x0a10,	// (0x0006ea16) grid_vorec_pane

0x0a1a,	// (0x0006ea20) vorec_t1

0x0a28,	// (0x0006ea2e) vorec_t2

0x0a36,	// (0x0006ea3c) vorec_t3

0x0a44,	// (0x0006ea4a) vorec_t4

0x969a,	// (0x000776a0) vorec_t5

0x96a8,	// (0x000776ae) vorec_t6

0x0004,

0xf1fb,	// (0x0007d201) vorec_t

0x96b6,	// (0x000776bc) wait_bar_pane_cp01

0xaba6,	// (0x00078bac) cell_vorec_pane_ParamLimits

0xaba6,	// (0x00078bac) cell_vorec_pane

0x9ef1,	// (0x00077ef7) cell_vorec_pane_g1

0x9b43,	// (0x00077b49) grid_highlight_pane_cp05

0x0a76,	// (0x0006ea7c) cams_zoom_pane

0x0a85,	// (0x0006ea8b) image_vga_pane

0x0a9f,	// (0x0006eaa5) main_camera_pane_g1

0x0ab1,	// (0x0006eab7) main_camera_pane_g2

0x0ac1,	// (0x0006eac7) main_camera_pane_g3

0x0ad5,	// (0x0006eadb) main_camera_pane_g4

0x0ae9,	// (0x0006eaef) main_camera_pane_g5

0x0afd,	// (0x0006eb03) main_camera_pane_g6

0x0b11,	// (0x0006eb17) main_camera_pane_g7

0x0007,

0xf206,	// (0x0007d20c) main_camera_pane_g

0x0b25,	// (0x0006eb2b) main_camera_pane_t1

0x0b3b,	// (0x0006eb41) main_camera_pane_t2

0x0001,

0xf217,	// (0x0007d21d) main_camera_pane_t

0x0b79,	// (0x0006eb7f) cams_zoom_pane_cp_ParamLimits

0x0b79,	// (0x0006eb7f) cams_zoom_pane_cp

0x0ba1,	// (0x0006eba7) image_cif_pane_ParamLimits

0x0ba1,	// (0x0006eba7) image_cif_pane

0x0bdc,	// (0x0006ebe2) image_subqcif_pane

0x0be6,	// (0x0006ebec) main_video_pane_g1_ParamLimits

0x0be6,	// (0x0006ebec) main_video_pane_g1

0x0c0a,	// (0x0006ec10) main_video_pane_g2_ParamLimits

0x0c0a,	// (0x0006ec10) main_video_pane_g2

0x0c40,	// (0x0006ec46) main_video_pane_g3_ParamLimits

0x0c40,	// (0x0006ec46) main_video_pane_g3

0x0c6e,	// (0x0006ec74) main_video_pane_g4_ParamLimits

0x0c6e,	// (0x0006ec74) main_video_pane_g4

0x0c9c,	// (0x0006eca2) main_video_pane_g5_ParamLimits

0x0c9c,	// (0x0006eca2) main_video_pane_g5

0xabc7,	// (0x00078bcd) main_video_pane_g6_ParamLimits

0xabc7,	// (0x00078bcd) main_video_pane_g6

0x0006,

0xf21c,	// (0x0007d222) main_video_pane_g_ParamLimits

0xf21c,	// (0x0007d222) main_video_pane_g

0x0cc5,	// (0x0006eccb) main_video_pane_t1_ParamLimits

0x0cc5,	// (0x0006eccb) main_video_pane_t1

0xabe1,	// (0x00078be7) cams_zoom_pane_g1

0xabea,	// (0x00078bf0) cams_zoom_pane_g2

0xabf3,	// (0x00078bf9) cams_zoom_pane_g3

0xabfc,	// (0x00078c02) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0007d231) cams_zoom_pane_g

0x0d22,	// (0x0006ed28) grid_cams_pane

0x0d3c,	// (0x0006ed42) linegrid_cams_pane

0x0d4e,	// (0x0006ed54) cell_cams_pane_ParamLimits

0x0d4e,	// (0x0006ed54) cell_cams_pane

0xac05,	// (0x00078c0b) cams_burst_image_pane

0xac0d,	// (0x00078c13) cell_cams_pane_g1

0x9b43,	// (0x00077b49) grid_highlight_pane_cp03

0xaa42,	// (0x00078a48) mp_bg_pane_g1

0x9b43,	// (0x00077b49) bg_list_pane_cp03

0xc947,	// (0x0007a94d) bg_mp_pane

0xc94f,	// (0x0007a955) grid_mp_pane

0xc957,	// (0x0007a95d) media_player_g1

0xc961,	// (0x0007a967) media_player_t1

0xc96f,	// (0x0007a975) media_player_t2

0xc97d,	// (0x0007a983) media_player_t3

0xc98b,	// (0x0007a991) media_player_t4

0xc999,	// (0x0007a99f) media_player_t5

0xc9a7,	// (0x0007a9ad) media_player_t6

0xc9b5,	// (0x0007a9bb) media_player_t7

0x0006,

0xf5c7,	// (0x0007d5cd) media_player_t

0xc9c3,	// (0x0007a9c9) wait_bar_pane_cp02

0xf5ac,	// (0x0007d5b2) main_usb_pane_t

0x31a1,	// (0x000711a7) cell_mp_pane

0xaa42,	// (0x00078a48) cell_mp_pane_g1

0x9b43,	// (0x00077b49) grid_highlight_pane_cp06

0xac15,	// (0x00078c1b) grid_skin_colour_pane

0xac1d,	// (0x00078c23) list_highlight_pane_cp03

0x0e87,	// (0x0006ee8d) skin_g1

0xac25,	// (0x00078c2b) skin_t1

0xac34,	// (0x00078c3a) skin_t2

0x0001,

0xf260,	// (0x0007d266) skin_t

0x0e91,	// (0x0006ee97) cell_skin_colour_pane_ParamLimits

0x0e91,	// (0x0006ee97) cell_skin_colour_pane

0xac42,	// (0x00078c48) cell_skin_colour_pane_g1

0x0f04,	// (0x0006ef0a) call_video_g1_ParamLimits

0x0f04,	// (0x0006ef0a) call_video_g1

0x0f20,	// (0x0006ef26) call_video_g2_ParamLimits

0x0f20,	// (0x0006ef26) call_video_g2

0x0001,

0xf265,	// (0x0007d26b) call_video_g_ParamLimits

0xf265,	// (0x0007d26b) call_video_g

0x0f65,	// (0x0006ef6b) call_video_uplink_pane_cp1_ParamLimits

0x0f65,	// (0x0006ef6b) call_video_uplink_pane_cp1

0xac54,	// (0x00078c5a) call_video_uplink_pane_cp2

0x1006,	// (0x0006f00c) video_down_crop_pane_ParamLimits

0x1006,	// (0x0006f00c) video_down_crop_pane

0x10ef,	// (0x0006f0f5) video_down_pane_ParamLimits

0x10ef,	// (0x0006f0f5) video_down_pane

0xac5c,	// (0x00078c62) video_down_subqcif_pane_ParamLimits

0xac5c,	// (0x00078c62) video_down_subqcif_pane

0xac76,	// (0x00078c7c) video_down_subqcif_pane_cp_ParamLimits

0xac76,	// (0x00078c7c) video_down_subqcif_pane_cp

0xac9e,	// (0x00078ca4) im_reading_pane_ParamLimits

0xac9e,	// (0x00078ca4) im_reading_pane

0x11fa,	// (0x0006f200) im_writing_pane_ParamLimits

0x11fa,	// (0x0006f200) im_writing_pane

0x1218,	// (0x0006f21e) im_reading_pane_t1

0xacb8,	// (0x00078cbe) list_im_pane

0xacc9,	// (0x00078ccf) scroll_pane_cp07

0x1257,	// (0x0006f25d) im_writing_pane_t1_ParamLimits

0x1257,	// (0x0006f25d) im_writing_pane_t1

0xace2,	// (0x00078ce8) im_writing_pane_t2_ParamLimits

0xace2,	// (0x00078ce8) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0007d275) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0007d275) im_writing_pane_t

0x9b43,	// (0x00077b49) input_focus_pane_cp04

0x9b43,	// (0x00077b49) input_focus_pane_cp05

0x126c,	// (0x0006f272) list_im_single_pane_ParamLimits

0x126c,	// (0x0006f272) list_im_single_pane

0x1285,	// (0x0006f28b) list_single_im_pane_t1

0x3161,	// (0x00071167) blid_accuracy_pane

0x3169,	// (0x0007116f) blid_compass_pane

0x3173,	// (0x00071179) main_location_t1

0x3183,	// (0x00071189) main_location_t2

0x3193,	// (0x00071199) main_location_t3

0x0002,

0xf5d6,	// (0x0007d5dc) main_location_t

0x9b43,	// (0x00077b49) aid_levels_location

0xaa42,	// (0x00078a48) blid_accuracy_pane_g1

0xaa42,	// (0x00078a48) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0007d2d7) blid_accuracy_pane_g

0xad2a,	// (0x00078d30) wml_content_pane

0xad68,	// (0x00078d6e) wml_button_pane_ParamLimits

0xad68,	// (0x00078d6e) wml_button_pane

0x1294,	// (0x0006f29a) wml_list_single_large_pane_ParamLimits

0x1294,	// (0x0006f29a) wml_list_single_large_pane

0x12ad,	// (0x0006f2b3) wml_list_single_medium_pane_ParamLimits

0x12ad,	// (0x0006f2b3) wml_list_single_medium_pane

0x12c7,	// (0x0006f2cd) wml_list_single_small_pane_ParamLimits

0x12c7,	// (0x0006f2cd) wml_list_single_small_pane

0xad7c,	// (0x00078d82) wml_selection_box_pane_ParamLimits

0xad7c,	// (0x00078d82) wml_selection_box_pane

0xad8f,	// (0x00078d95) wml_list_single_pane_t1

0xad9e,	// (0x00078da4) wml_list_single_medium_pane_t1

0xadad,	// (0x00078db3) wml_list_single_large_pane_t1

0xadbc,	// (0x00078dc2) input_focus_pane_cp02_ParamLimits

0xadbc,	// (0x00078dc2) input_focus_pane_cp02

0xadcf,	// (0x00078dd5) wml_selection_box_pane_g1

0xadd8,	// (0x00078dde) wml_selection_box_pane_t1_ParamLimits

0xadd8,	// (0x00078dde) wml_selection_box_pane_t1

0x9d9e,	// (0x00077da4) bg_wml_button_pane_ParamLimits

0x9d9e,	// (0x00077da4) bg_wml_button_pane

0xadf0,	// (0x00078df6) wml_button_pane_g1

0xadf8,	// (0x00078dfe) wml_button_pane_t1

0xadf0,	// (0x00078df6) wml_button_bg_pane_g1

0xae08,	// (0x00078e0e) wml_button_bg_pane_g2

0xae10,	// (0x00078e16) wml_button_bg_pane_g3

0xae18,	// (0x00078e1e) wml_button_bg_pane_g4

0xae20,	// (0x00078e26) wml_button_bg_pane_g5

0xae28,	// (0x00078e2e) wml_button_bg_pane_g6

0xae30,	// (0x00078e36) wml_button_bg_pane_g7

0xae38,	// (0x00078e3e) wml_button_bg_pane_g8

0xae40,	// (0x00078e46) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0007d27a) wml_button_bg_pane_g

0x12e6,	// (0x0006f2ec) bg_list_pane_cp02

0xae48,	// (0x00078e4e) mce_header_pane_ParamLimits

0xae48,	// (0x00078e4e) mce_header_pane

0xae5e,	// (0x00078e64) mce_icon_pane

0xae5e,	// (0x00078e64) mce_image_pane

0xae67,	// (0x00078e6d) mce_text_pane_ParamLimits

0xae67,	// (0x00078e6d) mce_text_pane

0x12f0,	// (0x0006f2f6) scroll_pane_cp03

0xad60,	// (0x00078d66) scroll_pane_cp04

0xae7a,	// (0x00078e80) scroll_pane_cp05_ParamLimits

0xae7a,	// (0x00078e80) scroll_pane_cp05

0x12fa,	// (0x0006f300) mce_header_field_pane_ParamLimits

0x12fa,	// (0x0006f300) mce_header_field_pane

0x1313,	// (0x0006f319) mce_header_field_pane_2_ParamLimits

0x1313,	// (0x0006f319) mce_header_field_pane_2

0x1329,	// (0x0006f32f) mce_header_field_pane_3

0x1331,	// (0x0006f337) list_single_mce_message_pane_ParamLimits

0x1331,	// (0x0006f337) list_single_mce_message_pane

0x134d,	// (0x0006f353) list_single_mce_smart_pane_ParamLimits

0x134d,	// (0x0006f353) list_single_mce_smart_pane

0xae86,	// (0x00078e8c) input_focus_pane_cp03

0xae8f,	// (0x00078e95) list_header_data_pane

0x1374,	// (0x0006f37a) mce_header_field_pane_t1

0x1384,	// (0x0006f38a) list_single_mce_header_pane_ParamLimits

0x1384,	// (0x0006f38a) list_single_mce_header_pane

0xae97,	// (0x00078e9d) list_single_mce_header_pane_t1

0xaea6,	// (0x00078eac) list_single_mce_message_pane_g1

0xaeae,	// (0x00078eb4) list_single_mce_message_pane_t1

0x13be,	// (0x0006f3c4) bg_cale_heading_pane_cp01_ParamLimits

0x13be,	// (0x0006f3c4) bg_cale_heading_pane_cp01

0xaebc,	// (0x00078ec2) bg_cale_pane_cp02_ParamLimits

0xaebc,	// (0x00078ec2) bg_cale_pane_cp02

0x1410,	// (0x0006f416) cale_month_corner_pane

0x142f,	// (0x0006f435) cale_month_day_heading_pane_ParamLimits

0x142f,	// (0x0006f435) cale_month_day_heading_pane

0x1499,	// (0x0006f49f) cale_month_pane_g1_ParamLimits

0x1499,	// (0x0006f49f) cale_month_pane_g1

0x14e0,	// (0x0006f4e6) cale_month_pane_g2_ParamLimits

0x14e0,	// (0x0006f4e6) cale_month_pane_g2

0x151c,	// (0x0006f522) cale_month_pane_g3_ParamLimits

0x151c,	// (0x0006f522) cale_month_pane_g3

0x1570,	// (0x0006f576) cale_month_pane_g4_ParamLimits

0x1570,	// (0x0006f576) cale_month_pane_g4

0x15c4,	// (0x0006f5ca) cale_month_pane_g5_ParamLimits

0x15c4,	// (0x0006f5ca) cale_month_pane_g5

0x1620,	// (0x0006f626) cale_month_pane_g6_ParamLimits

0x1620,	// (0x0006f626) cale_month_pane_g6

0x1688,	// (0x0006f68e) cale_month_pane_g7_ParamLimits

0x1688,	// (0x0006f68e) cale_month_pane_g7

0x16f4,	// (0x0006f6fa) cale_month_pane_g8_ParamLimits

0x16f4,	// (0x0006f6fa) cale_month_pane_g8

0x1760,	// (0x0006f766) cale_month_pane_g9_ParamLimits

0x1760,	// (0x0006f766) cale_month_pane_g9

0x17c4,	// (0x0006f7ca) cale_month_pane_g10_ParamLimits

0x17c4,	// (0x0006f7ca) cale_month_pane_g10

0x1816,	// (0x0006f81c) cale_month_pane_g11_ParamLimits

0x1816,	// (0x0006f81c) cale_month_pane_g11

0x1868,	// (0x0006f86e) cale_month_pane_g12_ParamLimits

0x1868,	// (0x0006f86e) cale_month_pane_g12

0x18c0,	// (0x0006f8c6) cale_month_pane_g13_ParamLimits

0x18c0,	// (0x0006f8c6) cale_month_pane_g13

0x000c,

0xf287,	// (0x0007d28d) cale_month_pane_g_ParamLimits

0xf287,	// (0x0007d28d) cale_month_pane_g

0x1918,	// (0x0006f91e) cale_month_week_pane

0x193c,	// (0x0006f942) grid_cale_month_pane_ParamLimits

0x193c,	// (0x0006f942) grid_cale_month_pane

0x199d,	// (0x0006f9a3) cale_month_day_heading_pane_t1

0x1a23,	// (0x0006fa29) cale_month_day_heading_pane_t2

0x1a9c,	// (0x0006faa2) cale_month_day_heading_pane_t3

0x1b15,	// (0x0006fb1b) cale_month_day_heading_pane_t4

0x1b96,	// (0x0006fb9c) cale_month_day_heading_pane_t5

0x1c1f,	// (0x0006fc25) cale_month_day_heading_pane_t6

0x1cb0,	// (0x0006fcb6) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0007d2a8) cale_month_day_heading_pane_t

0xab43,	// (0x00078b49) bg_cale_side_pane_cp01

0x1d41,	// (0x0006fd47) cale_month_week_pane_t1

0x1d5a,	// (0x0006fd60) cale_month_week_pane_t2

0x1d73,	// (0x0006fd79) cale_month_week_pane_t3

0x1d8c,	// (0x0006fd92) cale_month_week_pane_t4

0x1da5,	// (0x0006fdab) cale_month_week_pane_t5

0x1dbe,	// (0x0006fdc4) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0007d2b7) cale_month_week_pane_t

0x1de3,	// (0x0006fde9) cell_cale_month_pane_ParamLimits

0x1de3,	// (0x0006fde9) cell_cale_month_pane

0x9efb,	// (0x00077f01) cell_cale_month_pane_g1

0x1f57,	// (0x0006ff5d) cell_cale_month_pane_t1_ParamLimits

0x1f57,	// (0x0006ff5d) cell_cale_month_pane_t1

0xab51,	// (0x00078b57) grid_highlight_pane_cp08

0xaa42,	// (0x00078a48) main_smil_g1

0x1f83,	// (0x0006ff89) smil_status_pane

0xaefb,	// (0x00078f01) smil_text_pane

0xc865,	// (0x0007a86b) bg_popup_call3_rect_pane_g8

0xc86d,	// (0x0007a873) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0007d570) bg_popup_call3_rect_pane_g

0xcacb,	// (0x0007aad1) smil_status_volume_pane_g1

0xaf05,	// (0x00078f0b) smil_status_pane_t1

0xa051,	// (0x00078057) volume_smil_pane

0xaf1c,	// (0x00078f22) list_smil_text_pane

0x1f98,	// (0x0006ff9e) scroll_pane_cp011

0x1fa3,	// (0x0006ffa9) smil_text_list_pane_t1_ParamLimits

0x1fa3,	// (0x0006ffa9) smil_text_list_pane_t1

0x9f07,	// (0x00077f0d) aid_volume_smil_ParamLimits

0x9f07,	// (0x00077f0d) aid_volume_smil

0xaa42,	// (0x00078a48) smil_volume_pane_g1

0xaa42,	// (0x00078a48) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0007d2d7) smil_volume_pane_g

0x0421,	// (0x0006e427) listscroll_cale_day_pane

0xaf26,	// (0x00078f2c) bg_cale_pane

0xaf3e,	// (0x00078f44) list_cale_pane

0xaf61,	// (0x00078f67) scroll_pane_cp09

0xaf72,	// (0x00078f78) cale_bg_pane_g1

0xaf7a,	// (0x00078f80) cale_bg_pane_g2

0xaf82,	// (0x00078f88) cale_bg_pane_g3

0xaf8a,	// (0x00078f90) cale_bg_pane_g4

0xaf92,	// (0x00078f98) cale_bg_pane_g5

0xaf9a,	// (0x00078fa0) cale_bg_pane_g6

0xafa2,	// (0x00078fa8) cale_bg_pane_g7

0xafaa,	// (0x00078fb0) cale_bg_pane_g8

0xafb2,	// (0x00078fb8) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0007d2dc) cale_bg_pane_g

0x1ff6,	// (0x0006fffc) list_cale_time_pane_ParamLimits

0x1ff6,	// (0x0006fffc) list_cale_time_pane

0xafba,	// (0x00078fc0) list_cale_time_pane_g1_ParamLimits

0xafba,	// (0x00078fc0) list_cale_time_pane_g1

0xafc6,	// (0x00078fcc) list_cale_time_pane_g2_ParamLimits

0xafc6,	// (0x00078fcc) list_cale_time_pane_g2

0x2010,	// (0x00070016) list_cale_time_pane_g3_ParamLimits

0x2010,	// (0x00070016) list_cale_time_pane_g3

0x201e,	// (0x00070024) list_cale_time_pane_g4_ParamLimits

0x201e,	// (0x00070024) list_cale_time_pane_g4

0x202c,	// (0x00070032) list_cale_time_pane_g5_ParamLimits

0x202c,	// (0x00070032) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0007d2ef) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0007d2ef) list_cale_time_pane_g

0xafe0,	// (0x00078fe6) list_cale_time_pane_t1_ParamLimits

0xafe0,	// (0x00078fe6) list_cale_time_pane_t1

0xb008,	// (0x0007900e) list_cale_time_pane_t2_ParamLimits

0xb008,	// (0x0007900e) list_cale_time_pane_t2

0x23d3,	// (0x000703d9) aid_blid_cardinal_pane

0x2415,	// (0x0007041b) compass_pane_t4

0xb030,	// (0x00079036) list_cale_time_pane_t4_ParamLimits

0xb030,	// (0x00079036) list_cale_time_pane_t4

0x2423,	// (0x00070429) compass_pane_t5

0x2433,	// (0x00070439) compass_pane_t6

0x2441,	// (0x00070447) compass_pane_t7

0xb4b4,	// (0x000794ba) navi_pane_cc_t1

0xb693,	// (0x00079699) aid_phob_thumbnail_center_pane

0x2b24,	// (0x00070b2a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0007d2fc) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0007d2fc) list_cale_time_pane_t

0x979a,	// (0x000777a0) bg_popup_window_pane_cp02_ParamLimits

0x979a,	// (0x000777a0) bg_popup_window_pane_cp02

0xb058,	// (0x0007905e) heading_pane_cp01_ParamLimits

0xb058,	// (0x0007905e) heading_pane_cp01

0xb064,	// (0x0007906a) loc_req_pane_ParamLimits

0xb064,	// (0x0007906a) loc_req_pane

0xb074,	// (0x0007907a) loc_type_pane_ParamLimits

0xb074,	// (0x0007907a) loc_type_pane

0xb086,	// (0x0007908c) loc_type_pane_t1_ParamLimits

0xb086,	// (0x0007908c) loc_type_pane_t1

0xb098,	// (0x0007909e) loc_type_pane_t2_ParamLimits

0xb098,	// (0x0007909e) loc_type_pane_t2

0xb0aa,	// (0x000790b0) loc_type_pane_t3_ParamLimits

0xb0aa,	// (0x000790b0) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0007d303) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0007d303) loc_type_pane_t

0xb0bc,	// (0x000790c2) list_loc_req_pane

0xb0c6,	// (0x000790cc) scroll_pane_cp012

0x203a,	// (0x00070040) list_single_loc_request_popup_menu_pane_ParamLimits

0x203a,	// (0x00070040) list_single_loc_request_popup_menu_pane

0xb0d1,	// (0x000790d7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb0d1,	// (0x000790d7) list_single_loc_request_popup_menu_pane_g1

0xb0dd,	// (0x000790e3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb0dd,	// (0x000790e3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0007d30a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0007d30a) list_single_loc_request_popup_menu_pane_g

0xb0e9,	// (0x000790ef) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb0e9,	// (0x000790ef) list_single_loc_request_popup_menu_pane_t1

0x9d9e,	// (0x00077da4) bg_popup_window_pane_cp03_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_window_pane_cp03

0xb0ff,	// (0x00079105) heading_loc_req_pane_ParamLimits

0xb0ff,	// (0x00079105) heading_loc_req_pane

0x2047,	// (0x0007004d) popup_dyc_status_message_window_g1_ParamLimits

0x2047,	// (0x0007004d) popup_dyc_status_message_window_g1

0x205b,	// (0x00070061) popup_dyc_status_message_window_t1_ParamLimits

0x205b,	// (0x00070061) popup_dyc_status_message_window_t1

0x2070,	// (0x00070076) popup_dyc_status_message_window_t2_ParamLimits

0x2070,	// (0x00070076) popup_dyc_status_message_window_t2

0x2085,	// (0x0007008b) popup_dyc_status_message_window_t3_ParamLimits

0x2085,	// (0x0007008b) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0007d30f) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0007d30f) popup_dyc_status_message_window_t

0x9b43,	// (0x00077b49) bg_heading_pane_cp01

0xb10b,	// (0x00079111) heading_loc_req_pane_g1

0xb113,	// (0x00079119) heading_loc_req_pane_g2

0xb11b,	// (0x00079121) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0007d316) heading_loc_req_pane_g

0xb123,	// (0x00079129) heading_loc_req_pane_t1

0xb133,	// (0x00079139) bg_popup_sub_pane_cp01_ParamLimits

0xb133,	// (0x00079139) bg_popup_sub_pane_cp01

0xb141,	// (0x00079147) popup_cale_events_window_g1_ParamLimits

0xb141,	// (0x00079147) popup_cale_events_window_g1

0xb161,	// (0x00079167) popup_cale_events_window_g2_ParamLimits

0xb161,	// (0x00079167) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0007d34a) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0007d34a) popup_cale_events_window_g

0xb181,	// (0x00079187) popup_cale_events_window_t1_ParamLimits

0xb181,	// (0x00079187) popup_cale_events_window_t1

0xb193,	// (0x00079199) popup_cale_events_window_t2_ParamLimits

0xb193,	// (0x00079199) popup_cale_events_window_t2

0xb1d1,	// (0x000791d7) popup_cale_events_window_t3_ParamLimits

0xb1d1,	// (0x000791d7) popup_cale_events_window_t3

0xb20b,	// (0x00079211) popup_cale_events_window_t4_ParamLimits

0xb20b,	// (0x00079211) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0007d34f) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0007d34f) popup_cale_events_window_t

0x217e,	// (0x00070184) call_type_pane

0x218e,	// (0x00070194) popup_call_status_window_g1

0x21a2,	// (0x000701a8) popup_call_status_window_g2

0x21b6,	// (0x000701bc) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0007d358) popup_call_status_window_g

0xb241,	// (0x00079247) call_type_pane_g1

0xb24a,	// (0x00079250) call_type_pane_g2

0x0001,

0xf359,	// (0x0007d35f) call_type_pane_g

0x9b43,	// (0x00077b49) bg_popup_sub_pane_cp02

0xb253,	// (0x00079259) listscroll_popup_wml_pane

0xb25b,	// (0x00079261) list_wml_pane

0xb265,	// (0x0007926b) scroll_pane_cp013

0xb270,	// (0x00079276) list_single_graphic_popup_wml_pane_ParamLimits

0xb270,	// (0x00079276) list_single_graphic_popup_wml_pane

0xaa42,	// (0x00078a48) list_single_graphic_popup_wml_pane_g1

0xb284,	// (0x0007928a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0007d364) list_single_graphic_popup_wml_pane_g

0xb28c,	// (0x00079292) list_single_graphic_popup_wml_pane_t1

0xb2a2,	// (0x000792a8) aid_call_pane

0x9d96,	// (0x00077d9c) popup_clock_analogue_window_g1

0x9d96,	// (0x00077d9c) popup_clock_analogue_window_g2

0x9f29,	// (0x00077f2f) popup_clock_analogue_window_g3

0x9f29,	// (0x00077f2f) popup_clock_analogue_window_g4

0xaa42,	// (0x00078a48) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0007d369) popup_clock_analogue_window_g

0x9f31,	// (0x00077f37) popup_clock_analogue_window_t1

0x9f3f,	// (0x00077f45) clock_digital_number_pane_ParamLimits

0x9f3f,	// (0x00077f45) clock_digital_number_pane

0x9f4b,	// (0x00077f51) clock_digital_number_pane_cp02_ParamLimits

0x9f4b,	// (0x00077f51) clock_digital_number_pane_cp02

0x9f57,	// (0x00077f5d) clock_digital_number_pane_cp03_ParamLimits

0x9f57,	// (0x00077f5d) clock_digital_number_pane_cp03

0x9f63,	// (0x00077f69) clock_digital_number_pane_cp04_ParamLimits

0x9f63,	// (0x00077f69) clock_digital_number_pane_cp04

0x9f6f,	// (0x00077f75) clock_digital_separator_pane_ParamLimits

0x9f6f,	// (0x00077f75) clock_digital_separator_pane

0x9f7b,	// (0x00077f81) popup_clock_digital_window_t1

0xaa42,	// (0x00078a48) clock_digital_number_pane_g1

0xaa42,	// (0x00078a48) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0007d2d7) clock_digital_number_pane_g

0xaa42,	// (0x00078a48) clock_digital_separator_pane_g1

0xaa42,	// (0x00078a48) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0007d2d7) clock_digital_separator_pane_g

0x9b43,	// (0x00077b49) bg_popup_window_pane_cp04

0xb2aa,	// (0x000792b0) heading_pane_cp03

0xb2b2,	// (0x000792b8) listscroll_popup_gms_pane

0xb2ba,	// (0x000792c0) grid_large_graphic_popup_pane

0xb2c4,	// (0x000792ca) listscroll_popup_gms_pane_g1

0xb2cc,	// (0x000792d2) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0007d374) listscroll_popup_gms_pane_g

0xad60,	// (0x00078d66) scroll_pane_cp014

0x21c6,	// (0x000701cc) cell_large_graphic_popup_pane_ParamLimits

0x21c6,	// (0x000701cc) cell_large_graphic_popup_pane

0x21de,	// (0x000701e4) cell_large_graphic_popup_pane_g1_ParamLimits

0x21de,	// (0x000701e4) cell_large_graphic_popup_pane_g1

0xb2d4,	// (0x000792da) cell_large_graphic_popup_pane_g2_ParamLimits

0xb2d4,	// (0x000792da) cell_large_graphic_popup_pane_g2

0xb2e0,	// (0x000792e6) cell_large_graphic_popup_pane_g3_ParamLimits

0xb2e0,	// (0x000792e6) cell_large_graphic_popup_pane_g3

0xb2ed,	// (0x000792f3) cell_large_graphic_popup_pane_g4_ParamLimits

0xb2ed,	// (0x000792f3) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0007d379) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0007d379) cell_large_graphic_popup_pane_g

0xb2fd,	// (0x00079303) grid_highlight_pane_cp010

0xaa42,	// (0x00078a48) bg_popup_call_pane_g1

0xb307,	// (0x0007930d) list_single_graphic_popup_conf_pane_ParamLimits

0xb307,	// (0x0007930d) list_single_graphic_popup_conf_pane

0xb319,	// (0x0007931f) list_highlight_pane_cp01

0xb322,	// (0x00079328) list_single_graphic_popup_conf_pane_g1

0xb32a,	// (0x00079330) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0007d382) list_single_graphic_popup_conf_pane_g

0xb332,	// (0x00079338) list_single_graphic_popup_conf_pane_t1

0xb340,	// (0x00079346) linegrid_cams_pane_g1

0x21ea,	// (0x000701f0) linegrid_cams_pane_g2

0xab84,	// (0x00078b8a) linegrid_cams_pane_g3

0xb349,	// (0x0007934f) linegrid_cams_pane_g4

0x21f3,	// (0x000701f9) linegrid_cams_pane_g5

0x21fc,	// (0x00070202) linegrid_cams_pane_g6

0xab8d,	// (0x00078b93) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0007d387) linegrid_cams_pane_g

0xb352,	// (0x00079358) popup_clock_analogue_window

0xb352,	// (0x00079358) popup_clock_digital_window

0x9b43,	// (0x00077b49) popup_phob_thumbnail_window

0xaa42,	// (0x00078a48) call_video_uplink_pane_g1

0xb35b,	// (0x00079361) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0007d396) call_video_uplink_pane_g

0xb363,	// (0x00079369) video_uplink_pane

0xb36b,	// (0x00079371) mce_image_pane_g1

0x2207,	// (0x0007020d) mce_image_pane_g2

0x2211,	// (0x00070217) mce_image_pane_g3

0x221b,	// (0x00070221) mce_image_pane_g4

0x2223,	// (0x00070229) mce_image_pane_g5

0x0004,

0xf395,	// (0x0007d39b) mce_image_pane_g

0xb375,	// (0x0007937b) control_top_pane_stacon_cp01_ParamLimits

0xb375,	// (0x0007937b) control_top_pane_stacon_cp01

0xb389,	// (0x0007938f) uni_indicator_pane_stacon_cp01_ParamLimits

0xb389,	// (0x0007938f) uni_indicator_pane_stacon_cp01

0xb39a,	// (0x000793a0) bg_popup_sub_pane_cp03

0x222b,	// (0x00070231) chi_dic_find_pane

0x2233,	// (0x00070239) listscroll_chi_dic_pane

0x223c,	// (0x00070242) main_pane_chidic_g1

0x224f,	// (0x00070255) chi_dic_find_pane_t1

0xb3a4,	// (0x000793aa) find_chidic_pane

0xb3ad,	// (0x000793b3) chi_dic_list_pane_ParamLimits

0xb3ad,	// (0x000793b3) chi_dic_list_pane

0xb3be,	// (0x000793c4) scroll_pane_cp020

0x225d,	// (0x00070263) find_chidic_pane_t1

0x9b43,	// (0x00077b49) input_focus_pane_cp06

0x226c,	// (0x00070272) list_chi_dic_pane_ParamLimits

0x226c,	// (0x00070272) list_chi_dic_pane

0x227e,	// (0x00070284) list_chi_dic_pane_t1_ParamLimits

0x227e,	// (0x00070284) list_chi_dic_pane_t1

0x9b43,	// (0x00077b49) list_highlight_pane_cp020

0xb3c6,	// (0x000793cc) bg_cale_heading_pane_g1

0x2291,	// (0x00070297) bg_cale_heading_pane_g2

0x2299,	// (0x0007029f) bg_cale_heading_pane_g3

0x22a1,	// (0x000702a7) bg_cale_heading_pane_g4

0x22ab,	// (0x000702b1) bg_cale_heading_pane_g5

0x22b5,	// (0x000702bb) bg_cale_heading_pane_g6

0x22bd,	// (0x000702c3) bg_cale_heading_pane_g7

0x22c5,	// (0x000702cb) bg_cale_heading_pane_g8

0x22cf,	// (0x000702d5) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0007d3a6) bg_cale_heading_pane_g

0xb3c6,	// (0x000793cc) bg_cale_side_pane_g1

0x22d9,	// (0x000702df) bg_cale_side_pane_g2

0x22e3,	// (0x000702e9) bg_cale_side_pane_g3

0x22ed,	// (0x000702f3) bg_cale_side_pane_g4

0x22f7,	// (0x000702fd) bg_cale_side_pane_g5

0x2301,	// (0x00070307) bg_cale_side_pane_g6

0x230b,	// (0x00070311) bg_cale_side_pane_g7

0x2315,	// (0x0007031b) bg_cale_side_pane_g8

0x231d,	// (0x00070323) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0007d3b9) bg_cale_side_pane_g

0x2325,	// (0x0007032b) popup_call_status_window_ParamLimits

0x2325,	// (0x0007032b) popup_call_status_window

0xb3ce,	// (0x000793d4) stacon_top_pane

0xb3d6,	// (0x000793dc) status_pane_ParamLimits

0xb3d6,	// (0x000793dc) status_pane

0xb3eb,	// (0x000793f1) status_small_pane

0xb3f3,	// (0x000793f9) control_pane

0x9b43,	// (0x00077b49) stacon_bottom_pane

0xb3fb,	// (0x00079401) list_single_mce_smart_pane_t1_ParamLimits

0xb3fb,	// (0x00079401) list_single_mce_smart_pane_t1

0xb40e,	// (0x00079414) list_single_mce_smart_pane_t2_ParamLimits

0xb40e,	// (0x00079414) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0007d3cc) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0007d3cc) list_single_mce_smart_pane_t

0x2372,	// (0x00070378) compass_pane

0x237d,	// (0x00070383) main_location2_pane_t1

0x2393,	// (0x00070399) main_location2_pane_t2

0x23a9,	// (0x000703af) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0007d3d1) main_location2_pane_t

0xb42d,	// (0x00079433) compass_pane_g1_ParamLimits

0xb42d,	// (0x00079433) compass_pane_g1

0x23f7,	// (0x000703fd) compass_pane_t1

0x2406,	// (0x0007040c) compass_pane_t2

0x0005,

0xf3d4,	// (0x0007d3da) compass_pane_t

0x2451,	// (0x00070457) text_secondary_cp61

0xb4ab,	// (0x000794b1) navi_pane_cams_g5

0xb527,	// (0x0007952d) navi_pane_im_t1

0xb535,	// (0x0007953b) navi_pane_mp_g1_ParamLimits

0xb535,	// (0x0007953b) navi_pane_mp_g1

0xb549,	// (0x0007954f) navi_pane_mp_g2_ParamLimits

0xb549,	// (0x0007954f) navi_pane_mp_g2

0xb555,	// (0x0007955b) navi_pane_mp_g3_ParamLimits

0xb555,	// (0x0007955b) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0007d3ee) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0007d3ee) navi_pane_mp_g

0xb561,	// (0x00079567) navi_pane_mp_t1

0xb56f,	// (0x00079575) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0007d3f5) navi_pane_mp_t

0xb5dc,	// (0x000795e2) navi_pane_vt_g1

0xb561,	// (0x00079567) navi_pane_vt_t1

0xb5e4,	// (0x000795ea) navi_slider_pane

0xab9e,	// (0x00078ba4) zooming_pane

0xb5f4,	// (0x000795fa) navi_slider_pane_g1

0x9f98,	// (0x00077f9e) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0007d3fc) navi_slider_pane_g

0xb618,	// (0x0007961e) aid_levels_zoom

0xb620,	// (0x00079626) zooming_pane_g1

0xb628,	// (0x0007962e) zooming_pane_g2

0xb628,	// (0x0007962e) zooming_pane_g3

0x0002,

0xf405,	// (0x0007d40b) zooming_pane_g

0xb630,	// (0x00079636) level_10_zoom

0xb639,	// (0x0007963f) level_11_zoom

0xb642,	// (0x00079648) level_1_zoom

0xb64b,	// (0x00079651) level_2_zoom

0xb654,	// (0x0007965a) level_3_zoom

0xb65d,	// (0x00079663) level_4_zoom

0xb666,	// (0x0007966c) level_5_zoom

0xb66f,	// (0x00079675) level_6_zoom

0xb678,	// (0x0007967e) level_7_zoom

0xb681,	// (0x00079687) level_8_zoom

0xb68a,	// (0x00079690) level_9_zoom

0xb69b,	// (0x000796a1) popup_phob_thumbnail_window_g1

0xb6a3,	// (0x000796a9) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0007d412) popup_phob_thumbnail_window_g

0xc9cb,	// (0x0007a9d1) level_1_location

0xc9d3,	// (0x0007a9d9) level_2_location

0xc9db,	// (0x0007a9e1) level_3_location

0xc9e3,	// (0x0007a9e9) level_4_location

0xab9e,	// (0x00078ba4) level_5_location

0x24a2,	// (0x000704a8) mce_icon_pane_g1

0x24ac,	// (0x000704b2) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0007d417) mce_icon_pane_g

0x24b4,	// (0x000704ba) main_mup_pane_g1_ParamLimits

0x24b4,	// (0x000704ba) main_mup_pane_g1

0x24ca,	// (0x000704d0) main_mup_pane_g2_ParamLimits

0x24ca,	// (0x000704d0) main_mup_pane_g2

0x24e2,	// (0x000704e8) main_mup_pane_g3_ParamLimits

0x24e2,	// (0x000704e8) main_mup_pane_g3

0x24fa,	// (0x00070500) main_mup_pane_g4_ParamLimits

0x24fa,	// (0x00070500) main_mup_pane_g4

0x250c,	// (0x00070512) main_mup_pane_g5_ParamLimits

0x250c,	// (0x00070512) main_mup_pane_g5

0x2528,	// (0x0007052e) main_mup_pane_g6_ParamLimits

0x2528,	// (0x0007052e) main_mup_pane_g6

0x2542,	// (0x00070548) main_mup_pane_g7_ParamLimits

0x2542,	// (0x00070548) main_mup_pane_g7

0x2560,	// (0x00070566) main_mup_pane_g8_ParamLimits

0x2560,	// (0x00070566) main_mup_pane_g8

0x257e,	// (0x00070584) main_mup_pane_g9_ParamLimits

0x257e,	// (0x00070584) main_mup_pane_g9

0x259a,	// (0x000705a0) main_mup_pane_g10_ParamLimits

0x259a,	// (0x000705a0) main_mup_pane_g10

0x25b8,	// (0x000705be) main_mup_pane_g11_ParamLimits

0x25b8,	// (0x000705be) main_mup_pane_g11

0x25d2,	// (0x000705d8) main_mup_pane_g12_ParamLimits

0x25d2,	// (0x000705d8) main_mup_pane_g12

0x25e8,	// (0x000705ee) main_mup_pane_g13_ParamLimits

0x25e8,	// (0x000705ee) main_mup_pane_g13

0x000c,

0xf416,	// (0x0007d41c) main_mup_pane_g_ParamLimits

0xf416,	// (0x0007d41c) main_mup_pane_g

0x25fc,	// (0x00070602) main_mup_pane_t1_ParamLimits

0x25fc,	// (0x00070602) main_mup_pane_t1

0x2618,	// (0x0007061e) main_mup_pane_t2_ParamLimits

0x2618,	// (0x0007061e) main_mup_pane_t2

0x2630,	// (0x00070636) main_mup_pane_t3_ParamLimits

0x2630,	// (0x00070636) main_mup_pane_t3

0x2648,	// (0x0007064e) main_mup_pane_t4_ParamLimits

0x2648,	// (0x0007064e) main_mup_pane_t4

0x2666,	// (0x0007066c) main_mup_pane_t5_ParamLimits

0x2666,	// (0x0007066c) main_mup_pane_t5

0x267b,	// (0x00070681) main_mup_pane_t6_ParamLimits

0x267b,	// (0x00070681) main_mup_pane_t6

0x0005,

0xf431,	// (0x0007d437) main_mup_pane_t_ParamLimits

0xf431,	// (0x0007d437) main_mup_pane_t

0x268d,	// (0x00070693) mup_progress_pane_ParamLimits

0x268d,	// (0x00070693) mup_progress_pane

0x2699,	// (0x0007069f) mup_visualizer_pane_ParamLimits

0x2699,	// (0x0007069f) mup_visualizer_pane

0x26cd,	// (0x000706d3) mup_volume_pane_ParamLimits

0x26cd,	// (0x000706d3) mup_volume_pane

0xb6ab,	// (0x000796b1) mup_visualizer_pane_g1_ParamLimits

0xb6ab,	// (0x000796b1) mup_visualizer_pane_g1

0xb6ab,	// (0x000796b1) mup_visualizer_pane_g2_ParamLimits

0xb6ab,	// (0x000796b1) mup_visualizer_pane_g2

0xb42d,	// (0x00079433) mup_visualizer_pane_g3_ParamLimits

0xb42d,	// (0x00079433) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0007d444) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0007d444) mup_visualizer_pane_g

0xaa42,	// (0x00078a48) mup_volume_pane_g1

0xb6c1,	// (0x000796c7) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0007d44b) mup_volume_pane_g

0xaa42,	// (0x00078a48) mup_progress_pane_g1

0xb6ca,	// (0x000796d0) mup_progress_pane_g2

0xb6d3,	// (0x000796d9) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0007d450) mup_progress_pane_g

0x9b43,	// (0x00077b49) bg_popup_window_pane_cp05

0xb6dc,	// (0x000796e2) heading_pane_cp02_ParamLimits

0xb6dc,	// (0x000796e2) heading_pane_cp02

0xb6f8,	// (0x000796fe) list_popup_blid_pane

0xb700,	// (0x00079706) list_blid_sat_info_pane_ParamLimits

0xb700,	// (0x00079706) list_blid_sat_info_pane

0xb713,	// (0x00079719) list_blid_sat_info_pane_g1

0xb71b,	// (0x00079721) list_blid_sat_info_pane_t1

0x27f7,	// (0x000707fd) mup_equalizer_pane_ParamLimits

0x27f7,	// (0x000707fd) mup_equalizer_pane

0x2818,	// (0x0007081e) mup_equalizer_pane_cp1_ParamLimits

0x2818,	// (0x0007081e) mup_equalizer_pane_cp1

0x2839,	// (0x0007083f) mup_equalizer_pane_cp2_ParamLimits

0x2839,	// (0x0007083f) mup_equalizer_pane_cp2

0x285e,	// (0x00070864) mup_equalizer_pane_cp3_ParamLimits

0x285e,	// (0x00070864) mup_equalizer_pane_cp3

0x2887,	// (0x0007088d) mup_equalizer_pane_cp4_ParamLimits

0x2887,	// (0x0007088d) mup_equalizer_pane_cp4

0x28b0,	// (0x000708b6) mup_equalizer_pane_cp5

0x28c8,	// (0x000708ce) mup_equalizer_pane_cp6

0x28e0,	// (0x000708e6) mup_equalizer_pane_cp7

0xc8e5,	// (0x0007a8eb) bg_popup_call_poc_act_pane_g9

0xc8ed,	// (0x0007a8f3) bg_popup_call_poc_act_pane_g10

0xc8f5,	// (0x0007a8fb) bg_popup_call_poc_act_pane_g11

0x000a,

0x9d9e,	// (0x00077da4) mup_scale_pane

0xaa42,	// (0x00078a48) mup_scale_pane_g1

0xb729,	// (0x0007972f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0007d46c) mup_scale_pane_g

0xb74d,	// (0x00079753) msg_data_pane

0xb755,	// (0x0007975b) scroll_pane_cp017

0x290a,	// (0x00070910) bg_list_pane_cp04_ParamLimits

0x290a,	// (0x00070910) bg_list_pane_cp04

0xb75d,	// (0x00079763) msg_data_pane_g1

0x2930,	// (0x00070936) msg_data_pane_g2

0x293a,	// (0x00070940) msg_data_pane_g3

0x2944,	// (0x0007094a) msg_data_pane_g4

0x294c,	// (0x00070952) msg_data_pane_g5

0x2954,	// (0x0007095a) msg_data_pane_g6

0x295c,	// (0x00070962) msg_data_pane_g7

0x0006,

0xf475,	// (0x0007d47b) msg_data_pane_g

0x2964,	// (0x0007096a) msg_text_pane_ParamLimits

0x2964,	// (0x0007096a) msg_text_pane

0x29a1,	// (0x000709a7) qrid_highlight_pane_cp011_ParamLimits

0x29a1,	// (0x000709a7) qrid_highlight_pane_cp011

0x9b43,	// (0x00077b49) msg_body_pane

0x9b43,	// (0x00077b49) msg_header_pane

0xb76e,	// (0x00079774) input_focus_pane_cp07

0x29c5,	// (0x000709cb) msg_header_pane_t1_ParamLimits

0x29c5,	// (0x000709cb) msg_header_pane_t1

0x29d7,	// (0x000709dd) msg_header_pane_t2_ParamLimits

0x29d7,	// (0x000709dd) msg_header_pane_t2

0x0001,

0xf489,	// (0x0007d48f) msg_header_pane_t_ParamLimits

0xf489,	// (0x0007d48f) msg_header_pane_t

0xb783,	// (0x00079789) msg_body_pane_g1

0x29e9,	// (0x000709ef) msg_body_pane_t1_ParamLimits

0x29e9,	// (0x000709ef) msg_body_pane_t1

0x2a1a,	// (0x00070a20) msg_body_pane_t2_ParamLimits

0x2a1a,	// (0x00070a20) msg_body_pane_t2

0x2a2c,	// (0x00070a32) msg_body_pane_t3_ParamLimits

0x2a2c,	// (0x00070a32) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0007d494) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0007d494) msg_body_pane_t

0x2a78,	// (0x00070a7e) main_viewer_pane_g1_ParamLimits

0x2a78,	// (0x00070a7e) main_viewer_pane_g1

0x2a86,	// (0x00070a8c) main_viewer_pane_g2_ParamLimits

0x2a86,	// (0x00070a8c) main_viewer_pane_g2

0x2a94,	// (0x00070a9a) main_viewer_pane_g3_ParamLimits

0x2a94,	// (0x00070a9a) main_viewer_pane_g3

0x2aa3,	// (0x00070aa9) main_viewer_pane_g4_ParamLimits

0x2aa3,	// (0x00070aa9) main_viewer_pane_g4

0x9fc2,	// (0x00077fc8) main_viewer_pane_g5_ParamLimits

0x9fc2,	// (0x00077fc8) main_viewer_pane_g5

0x9fc2,	// (0x00077fc8) main_viewer_pane_g7_ParamLimits

0x9fc2,	// (0x00077fc8) main_viewer_pane_g7

0x9fd4,	// (0x00077fda) main_viewer_pane_g8_ParamLimits

0x9fd4,	// (0x00077fda) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0007d4a4) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0007d4a4) main_viewer_pane_g

0xb78b,	// (0x00079791) viewer_content_pane_ParamLimits

0xb78b,	// (0x00079791) viewer_content_pane

0x2ae1,	// (0x00070ae7) main_postcard_pane_g1_ParamLimits

0x2ae1,	// (0x00070ae7) main_postcard_pane_g1

0x2af7,	// (0x00070afd) main_postcard_pane_g2_ParamLimits

0x2af7,	// (0x00070afd) main_postcard_pane_g2

0x2b0d,	// (0x00070b13) main_postcard_pane_g3_ParamLimits

0x2b0d,	// (0x00070b13) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0007d4b5) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0007d4b5) main_postcard_pane_g

0x2b24,	// (0x00070b2a) main_postcard_pane_g4

0xcade,	// (0x0007aae4) smil_status_volume_pane_g2

0x2b67,	// (0x00070b6d) postcard_pane_ParamLimits

0x2b67,	// (0x00070b6d) postcard_pane

0xb799,	// (0x0007979f) postcard_pane_g1_ParamLimits

0xb799,	// (0x0007979f) postcard_pane_g1

0x2bb7,	// (0x00070bbd) postcard_pane_g2_ParamLimits

0x2bb7,	// (0x00070bbd) postcard_pane_g2

0x2bc3,	// (0x00070bc9) postcard_pane_g3_ParamLimits

0x2bc3,	// (0x00070bc9) postcard_pane_g3

0xb7a7,	// (0x000797ad) postcard_pane_g4_ParamLimits

0xb7a7,	// (0x000797ad) postcard_pane_g4

0x2bcf,	// (0x00070bd5) postcard_pane_g5_ParamLimits

0x2bcf,	// (0x00070bd5) postcard_pane_g5

0x2be4,	// (0x00070bea) postcard_pane_g6_ParamLimits

0x2be4,	// (0x00070bea) postcard_pane_g6

0xb799,	// (0x0007979f) postcard_pane_g7_ParamLimits

0xb799,	// (0x0007979f) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0007d4c2) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0007d4c2) postcard_pane_g

0x2bfc,	// (0x00070c02) main_mp2_pane_g1_ParamLimits

0x2bfc,	// (0x00070c02) main_mp2_pane_g1

0x2c0a,	// (0x00070c10) main_mp2_pane_g2_ParamLimits

0x2c0a,	// (0x00070c10) main_mp2_pane_g2

0x2c16,	// (0x00070c1c) main_mp2_pane_g3_ParamLimits

0x2c16,	// (0x00070c1c) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0007d4d1) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0007d4d1) main_mp2_pane_g

0x2c22,	// (0x00070c28) main_mp2_pane_t1_ParamLimits

0x2c22,	// (0x00070c28) main_mp2_pane_t1

0x2c39,	// (0x00070c3f) main_mp2_pane_t2_ParamLimits

0x2c39,	// (0x00070c3f) main_mp2_pane_t2

0x2c4d,	// (0x00070c53) main_mp2_pane_t3_ParamLimits

0x2c4d,	// (0x00070c53) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0007d4d8) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0007d4d8) main_mp2_pane_t

0xb7b5,	// (0x000797bb) pec_content_pane_ParamLimits

0xb7b5,	// (0x000797bb) pec_content_pane

0xad60,	// (0x00078d66) scroll_pane_cp015

0xb7c7,	// (0x000797cd) pec_attribute_pane_ParamLimits

0xb7c7,	// (0x000797cd) pec_attribute_pane

0x2c5f,	// (0x00070c65) pec_content_pane_g1_ParamLimits

0x2c5f,	// (0x00070c65) pec_content_pane_g1

0xb7d7,	// (0x000797dd) pec_content_pane_t1_ParamLimits

0xb7d7,	// (0x000797dd) pec_content_pane_t1

0xb7e9,	// (0x000797ef) pec_content_pane_t2_ParamLimits

0xb7e9,	// (0x000797ef) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0007d4df) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0007d4df) pec_content_pane_t

0x2c6b,	// (0x00070c71) list_single_graphic_pane_cp01_ParamLimits

0x2c6b,	// (0x00070c71) list_single_graphic_pane_cp01

0x9d9e,	// (0x00077da4) bg_popup_sub_pane_cp04

0xb7fb,	// (0x00079801) popup_mup_playback_window_g1

0xb807,	// (0x0007980d) popup_mup_playback_window_t1

0xb81c,	// (0x00079822) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0007d4e4) popup_mup_playback_window_t

0xb853,	// (0x00079859) main_image_pane_g1_ParamLimits

0xb853,	// (0x00079859) main_image_pane_g1

0xb896,	// (0x0007989c) scroll_pane_cp018_ParamLimits

0xb896,	// (0x0007989c) scroll_pane_cp018

0xb8ae,	// (0x000798b4) scroll_pane_cp016_ParamLimits

0xb8ae,	// (0x000798b4) scroll_pane_cp016

0x2d3d,	// (0x00070d43) smil2_image_pane_ParamLimits

0x2d3d,	// (0x00070d43) smil2_image_pane

0x2d73,	// (0x00070d79) smil2_root_pane_ParamLimits

0x2d73,	// (0x00070d79) smil2_root_pane

0x2dab,	// (0x00070db1) smil2_text_pane_ParamLimits

0x2dab,	// (0x00070db1) smil2_text_pane

0x9b43,	// (0x00077b49) bg_list_pane_cp06

0xb8ea,	// (0x000798f0) grid_radio_pane

0x9b43,	// (0x00077b49) bg_popup_window_pane_cp06

0xb8f4,	// (0x000798fa) main_fmradio_pane_t1

0xb2aa,	// (0x000792b0) heading_pane_cp04

0xb902,	// (0x00079908) main_fmradio_pane_t2

0xc8fd,	// (0x0007a903) popup_cale_lunar_info_window_g1

0xb910,	// (0x00079916) main_fmradio_pane_t3

0xc905,	// (0x0007a90b) popup_cale_lunar_info_window_g2

0xb920,	// (0x00079926) main_fmradio_pane_t4

0x0001,

0xb92e,	// (0x00079934) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0007d5bf) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0007d4f9) main_fmradio_pane_t

0xb93c,	// (0x00079942) wait_bar_pane_cp03

0xb944,	// (0x0007994a) cell_fmradio_pane_ParamLimits

0xb944,	// (0x0007994a) cell_fmradio_pane

0xb799,	// (0x0007979f) cell_fmradio_pane_g1_ParamLimits

0xb799,	// (0x0007979f) cell_fmradio_pane_g1

0x9b43,	// (0x00077b49) grid_highlight_pane_cp011

0xb959,	// (0x0007995f) poc_content_pane_ParamLimits

0xb959,	// (0x0007995f) poc_content_pane

0xb96b,	// (0x00079971) scroll_pane_cp019

0x2e3b,	// (0x00070e41) popup_call_poc_act_window_ParamLimits

0x2e3b,	// (0x00070e41) popup_call_poc_act_window

0x2e5f,	// (0x00070e65) popup_call_poc_inact_window_ParamLimits

0x2e5f,	// (0x00070e65) popup_call_poc_inact_window

0xf590,	// (0x0007d596) bg_popup_call_poc_act_pane_g

0xc875,	// (0x0007a87b) bg_popup_call_poc_inact_pane_g1

0xc87d,	// (0x0007a883) bg_popup_call_poc_inact_pane_g2

0xb973,	// (0x00079979) popup_call_poc_act_window_g2

0xc885,	// (0x0007a88b) bg_popup_call_poc_inact_pane_g3

0xc88d,	// (0x0007a893) bg_popup_call_poc_inact_pane_g4

0xc895,	// (0x0007a89b) bg_popup_call_poc_inact_pane_g5

0xb97b,	// (0x00079981) popup_call_poc_act_window_t1_ParamLimits

0xb97b,	// (0x00079981) popup_call_poc_act_window_t1

0xb9a3,	// (0x000799a9) popup_call_poc_act_window_t2_ParamLimits

0xb9a3,	// (0x000799a9) popup_call_poc_act_window_t2

0xb9cb,	// (0x000799d1) popup_call_poc_act_window_t3_ParamLimits

0xb9cb,	// (0x000799d1) popup_call_poc_act_window_t3

0xb9f3,	// (0x000799f9) popup_call_poc_act_window_t4_ParamLimits

0xb9f3,	// (0x000799f9) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0007d504) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0007d504) popup_call_poc_act_window_t

0xc89d,	// (0x0007a8a3) bg_popup_call_poc_inact_pane_g6

0xc8a5,	// (0x0007a8ab) bg_popup_call_poc_inact_pane_g7

0xc8ad,	// (0x0007a8b3) bg_popup_call_poc_inact_pane_g8

0xba05,	// (0x00079a0b) popup_call_poc_inact_window_g2

0xc8b5,	// (0x0007a8bb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0007d583) bg_popup_call_poc_inact_pane_g

0xba0d,	// (0x00079a13) popup_call_poc_inact_window_t1_ParamLimits

0xba0d,	// (0x00079a13) popup_call_poc_inact_window_t1

0xba22,	// (0x00079a28) popup_call_poc_inact_window_t2_ParamLimits

0xba22,	// (0x00079a28) popup_call_poc_inact_window_t2

0xba37,	// (0x00079a3d) popup_call_poc_inact_window_t3_ParamLimits

0xba37,	// (0x00079a3d) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0007d50d) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0007d50d) popup_call_poc_inact_window_t

0xca3e,	// (0x0007aa44) context_pane_ParamLimits

0x3708,	// (0x0007170e) signal_pane_ParamLimits

0xab9e,	// (0x00078ba4) main_call2_pane

0xa01d,	// (0x00078023) popup_phob_thumbnail2_window_ParamLimits

0xa01d,	// (0x00078023) popup_phob_thumbnail2_window

0x9faa,	// (0x00077fb0) aid_hotspot_pointer_arrow_pane

0x9fb2,	// (0x00077fb8) aid_hotspot_pointer_hand_pane

0x31ca,	// (0x000711d0) phob_pre_status_pane_g5

0x0a76,	// (0x0006ea7c) cams_zoom_pane_ParamLimits

0x0a85,	// (0x0006ea8b) image_vga_pane_ParamLimits

0x0a9f,	// (0x0006eaa5) main_camera_pane_g1_ParamLimits

0x0ab1,	// (0x0006eab7) main_camera_pane_g2_ParamLimits

0x0ac1,	// (0x0006eac7) main_camera_pane_g3_ParamLimits

0x0ad5,	// (0x0006eadb) main_camera_pane_g4_ParamLimits

0x0ae9,	// (0x0006eaef) main_camera_pane_g5_ParamLimits

0x0afd,	// (0x0006eb03) main_camera_pane_g6_ParamLimits

0x0b11,	// (0x0006eb17) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0007d20c) main_camera_pane_g_ParamLimits

0x0b25,	// (0x0006eb2b) main_camera_pane_t1_ParamLimits

0x0b3b,	// (0x0006eb41) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0007d21d) main_camera_pane_t_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_preview_window_pane_cp01_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_preview_window_pane_cp01

0xba4c,	// (0x00079a52) popup_phob_thumbnail2_window_g1_ParamLimits

0xba4c,	// (0x00079a52) popup_phob_thumbnail2_window_g1

0x9b43,	// (0x00077b49) call2_cli_visual_pane

0x2e93,	// (0x00070e99) popup_call2_audio_conf_window_ParamLimits

0x2e93,	// (0x00070e99) popup_call2_audio_conf_window

0x2ebb,	// (0x00070ec1) popup_call2_audio_first_window_ParamLimits

0x2ebb,	// (0x00070ec1) popup_call2_audio_first_window

0x2f51,	// (0x00070f57) popup_call2_audio_in_window_ParamLimits

0x2f51,	// (0x00070f57) popup_call2_audio_in_window

0x2f9d,	// (0x00070fa3) popup_call2_audio_out_window_ParamLimits

0x2f9d,	// (0x00070fa3) popup_call2_audio_out_window

0x300f,	// (0x00071015) popup_call2_audio_second_window_ParamLimits

0x300f,	// (0x00071015) popup_call2_audio_second_window

0x3075,	// (0x0007107b) popup_call2_audio_wait_window_ParamLimits

0x3075,	// (0x0007107b) popup_call2_audio_wait_window

0x9b43,	// (0x00077b49) bg_popup_call2_act_pane_cp03

0x9d80,	// (0x00077d86) list_conf_pane_cp

0xba58,	// (0x00079a5e) popup_call2_audio_conf_window_t1

0xba66,	// (0x00079a6c) list_single_graphic_popup_conf2_pane_ParamLimits

0xba66,	// (0x00079a6c) list_single_graphic_popup_conf2_pane

0xb319,	// (0x0007931f) list_highlight_pane_cp04

0xba79,	// (0x00079a7f) list_single_graphic_popup_conf2_pane_g1

0xb32a,	// (0x00079330) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0007d514) list_single_graphic_popup_conf2_pane_g

0xba83,	// (0x00079a89) list_single_graphic_popup_conf2_pane_t1

0xba91,	// (0x00079a97) bg_popup_call2_act_pane_cp01_ParamLimits

0xba91,	// (0x00079a97) bg_popup_call2_act_pane_cp01

0xbb1b,	// (0x00079b21) call_type_pane_cp05_ParamLimits

0xbb1b,	// (0x00079b21) call_type_pane_cp05

0xbb6f,	// (0x00079b75) popup_call2_audio_second_window_g1_ParamLimits

0xbb6f,	// (0x00079b75) popup_call2_audio_second_window_g1

0xbbc3,	// (0x00079bc9) popup_call2_audio_second_window_g2_ParamLimits

0xbbc3,	// (0x00079bc9) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0007d519) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0007d519) popup_call2_audio_second_window_g

0xbc28,	// (0x00079c2e) popup_call2_audio_second_window_t1_ParamLimits

0xbc28,	// (0x00079c2e) popup_call2_audio_second_window_t1

0xbd08,	// (0x00079d0e) popup_call2_audio_second_window_t2_ParamLimits

0xbd08,	// (0x00079d0e) popup_call2_audio_second_window_t2

0xbd5b,	// (0x00079d61) popup_call2_audio_second_window_t3_ParamLimits

0xbd5b,	// (0x00079d61) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0007d520) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0007d520) popup_call2_audio_second_window_t

0x9b43,	// (0x00077b49) bg_popup_call2_in_pane_cp02

0x9b4d,	// (0x00077b53) call_type_pane_cp04

0x9b55,	// (0x00077b5b) popup_call2_audio_wait_window_g1

0x9b5d,	// (0x00077b63) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007d0fb) popup_call2_audio_wait_window_g

0x9b65,	// (0x00077b6b) popup_call2_audio_wait_window_t3

0xbe4e,	// (0x00079e54) bg_popup_call2_act_pane_ParamLimits

0xbe4e,	// (0x00079e54) bg_popup_call2_act_pane

0xbf0e,	// (0x00079f14) call_type_pane_cp03_ParamLimits

0xbf0e,	// (0x00079f14) call_type_pane_cp03

0xbf72,	// (0x00079f78) popup_call2_audio_first_window_g1_ParamLimits

0xbf72,	// (0x00079f78) popup_call2_audio_first_window_g1

0xbfe2,	// (0x00079fe8) popup_call2_audio_first_window_g2_ParamLimits

0xbfe2,	// (0x00079fe8) popup_call2_audio_first_window_g2

0xb6ab,	// (0x000796b1) popup_call2_audio_first_window_g3_ParamLimits

0xb6ab,	// (0x000796b1) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0007d529) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0007d529) popup_call2_audio_first_window_g

0xc0c0,	// (0x0007a0c6) popup_call2_audio_first_window_t1_ParamLimits

0xc0c0,	// (0x0007a0c6) popup_call2_audio_first_window_t1

0xc1c3,	// (0x0007a1c9) popup_call2_audio_first_window_t4_ParamLimits

0xc1c3,	// (0x0007a1c9) popup_call2_audio_first_window_t4

0xc2a6,	// (0x0007a2ac) popup_call2_audio_first_window_t5_ParamLimits

0xc2a6,	// (0x0007a2ac) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0007d534) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0007d534) popup_call2_audio_first_window_t

0x9d96,	// (0x00077d9c) bg_popup_call2_act_pane_g1

0xc90f,	// (0x0007a915) popup_cale_lunar_info_window_t1

0xc91d,	// (0x0007a923) popup_cale_lunar_info_window_t2

0xc92b,	// (0x0007a931) popup_cale_lunar_info_window_t3

0x9b43,	// (0x00077b49) bg_popup_call2_bubble_pane

0xc3a7,	// (0x0007a3ad) bg_popup_call2_in_pane_cp01_ParamLimits

0xc3a7,	// (0x0007a3ad) bg_popup_call2_in_pane_cp01

0x981f,	// (0x00077825) call_type_pane_cp02

0xc3ef,	// (0x0007a3f5) popup_call2_audio_out_window_g1_ParamLimits

0xc3ef,	// (0x0007a3f5) popup_call2_audio_out_window_g1

0xc41b,	// (0x0007a421) popup_call2_audio_out_window_g2_ParamLimits

0xc41b,	// (0x0007a421) popup_call2_audio_out_window_g2

0xc443,	// (0x0007a449) popup_call2_audio_out_window_g3_ParamLimits

0xc443,	// (0x0007a449) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0007d53d) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0007d53d) popup_call2_audio_out_window_g

0xc47e,	// (0x0007a484) popup_call2_audio_out_window_t1_ParamLimits

0xc47e,	// (0x0007a484) popup_call2_audio_out_window_t1

0xc4dd,	// (0x0007a4e3) popup_call2_audio_out_window_t2_ParamLimits

0xc4dd,	// (0x0007a4e3) popup_call2_audio_out_window_t2

0xc531,	// (0x0007a537) popup_call2_audio_out_window_t3_ParamLimits

0xc531,	// (0x0007a537) popup_call2_audio_out_window_t3

0xc547,	// (0x0007a54d) popup_call2_audio_out_window_t4_ParamLimits

0xc547,	// (0x0007a54d) popup_call2_audio_out_window_t4

0xc55d,	// (0x0007a563) popup_call2_audio_out_window_t5_ParamLimits

0xc55d,	// (0x0007a563) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0007d546) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0007d546) popup_call2_audio_out_window_t

0xc5c1,	// (0x0007a5c7) bg_popup_call2_in_pane_ParamLimits

0xc5c1,	// (0x0007a5c7) bg_popup_call2_in_pane

0xc61d,	// (0x0007a623) popup_call2_audio_in_window_g1_ParamLimits

0xc61d,	// (0x0007a623) popup_call2_audio_in_window_g1

0xc655,	// (0x0007a65b) popup_call2_audio_in_window_g2_ParamLimits

0xc655,	// (0x0007a65b) popup_call2_audio_in_window_g2

0xc68d,	// (0x0007a693) popup_call2_audio_in_window_g3_ParamLimits

0xc68d,	// (0x0007a693) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0007d553) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0007d553) popup_call2_audio_in_window_g

0xc6e5,	// (0x0007a6eb) popup_call2_audio_in_window_t1_ParamLimits

0xc6e5,	// (0x0007a6eb) popup_call2_audio_in_window_t1

0xc765,	// (0x0007a76b) popup_call2_audio_in_window_t2_ParamLimits

0xc765,	// (0x0007a76b) popup_call2_audio_in_window_t2

0xc7e5,	// (0x0007a7eb) popup_call2_audio_in_window_t3_ParamLimits

0xc7e5,	// (0x0007a7eb) popup_call2_audio_in_window_t3

0xc7ff,	// (0x0007a805) popup_call2_audio_in_window_t4_ParamLimits

0xc7ff,	// (0x0007a805) popup_call2_audio_in_window_t4

0xc811,	// (0x0007a817) popup_call2_audio_in_window_t5_ParamLimits

0xc811,	// (0x0007a817) popup_call2_audio_in_window_t5

0xc823,	// (0x0007a829) popup_call2_audio_in_window_t6_ParamLimits

0xc823,	// (0x0007a829) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0007d55c) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0007d55c) popup_call2_audio_in_window_t

0x9d96,	// (0x00077d9c) bg_popup_call2_in_pane_g1

0xc939,	// (0x0007a93f) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0007d5c4) popup_cale_lunar_info_window_t

0x9d9e,	// (0x00077da4) bg_popup_call2_rect_pane_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_call2_rect_pane

0x9b43,	// (0x00077b49) call2_cli_visual_graphic_pane

0x9b43,	// (0x00077b49) call2_cli_visual_text_pane

0xa044,	// (0x0007804a) smil_status_volume_pane_g3

0x0002,

0xaa42,	// (0x00078a48) call2_cli_visual_graphic_pane_g1

0xaa42,	// (0x00078a48) call2_cli_visual_graphic_pane_g2

0xaa42,	// (0x00078a48) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0007d569) call2_cli_visual_graphic_pane_g

0xc835,	// (0x0007a83b) bg_popup_call2_rect_pane_g1

0xaad7,	// (0x00078add) bg_popup_call2_rect_pane_g2

0xc83d,	// (0x0007a843) bg_popup_call2_rect_pane_g3

0xc845,	// (0x0007a84b) bg_popup_call2_rect_pane_g4

0xc84d,	// (0x0007a853) bg_popup_call2_rect_pane_g5

0xc855,	// (0x0007a85b) bg_popup_call2_rect_pane_g6

0xc85d,	// (0x0007a863) bg_popup_call2_rect_pane_g7

0xc865,	// (0x0007a86b) bg_popup_call2_rect_pane_g8

0xc86d,	// (0x0007a873) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0007d570) bg_popup_call2_rect_pane_g

0xc875,	// (0x0007a87b) bg_popup_call2_bubble_pane_g1

0xc87d,	// (0x0007a883) bg_popup_call2_bubble_pane_g2

0xc885,	// (0x0007a88b) bg_popup_call2_bubble_pane_g3

0xc88d,	// (0x0007a893) bg_popup_call2_bubble_pane_g4

0xc895,	// (0x0007a89b) bg_popup_call2_bubble_pane_g5

0xc89d,	// (0x0007a8a3) bg_popup_call2_bubble_pane_g6

0xc8a5,	// (0x0007a8ab) bg_popup_call2_bubble_pane_g7

0xc8ad,	// (0x0007a8b3) bg_popup_call2_bubble_pane_g8

0xc8b5,	// (0x0007a8bb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0007d583) bg_popup_call2_bubble_pane_g

0x0431,	// (0x0006e437) aid_cale_week_size_cell_pane

0x0b55,	// (0x0006eb5b) aid_cams_cif_uncrop_pane_ParamLimits

0x0b55,	// (0x0006eb5b) aid_cams_cif_uncrop_pane

0x0d0e,	// (0x0006ed14) aid_cams_size_cell_ParamLimits

0x0d0e,	// (0x0006ed14) aid_cams_size_cell

0x0d22,	// (0x0006ed28) grid_cams_pane_ParamLimits

0x0d3c,	// (0x0006ed42) linegrid_cams_pane_ParamLimits

0x0f31,	// (0x0006ef37) call_video_pane_t1

0x0f4b,	// (0x0006ef51) call_video_pane_t2

0x0001,

0xf26a,	// (0x0007d270) call_video_pane_t

0x1398,	// (0x0006f39e) aid_cale_month_size_cell_pane_ParamLimits

0x1398,	// (0x0006f39e) aid_cale_month_size_cell_pane

0xf607,	// (0x0007d60d) smil_status_volume_pane_g

0xa051,	// (0x00078057) volume_smil_pane_ParamLimits

0xfc88,	// (0x0006dc8e) aid_popup2_width_pane

0x0384,	// (0x0006e38a) cell_qdial_pane_g4_ParamLimits

0x0384,	// (0x0006e38a) cell_qdial_pane_g4

0x23d3,	// (0x000703d9) aid_blid_cardinal_pane_ParamLimits

0x23e3,	// (0x000703e9) aid_blid_destination_pane_ParamLimits

0x23e3,	// (0x000703e9) aid_blid_destination_pane

0x9d9e,	// (0x00077da4) bg_popup_call_poc_act_pane_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_call_poc_act_pane

0x9d9e,	// (0x00077da4) bg_popup_call_poc_inact_pane_ParamLimits

0x9d9e,	// (0x00077da4) bg_popup_call_poc_inact_pane

0xc8bd,	// (0x0007a8c3) bg_popup_call_poc_act_pane_g1

0xc8c5,	// (0x0007a8cb) bg_popup_call_poc_act_pane_g2

0xc8cd,	// (0x0007a8d3) bg_popup_call_poc_act_pane_g3

0xc88d,	// (0x0007a893) bg_popup_call_poc_act_pane_g4

0xc895,	// (0x0007a89b) bg_popup_call_poc_act_pane_g5

0xc8d5,	// (0x0007a8db) bg_popup_call_poc_act_pane_g6

0xc8a5,	// (0x0007a8ab) bg_popup_call_poc_act_pane_g7

0xc8dd,	// (0x0007a8e3) bg_popup_call_poc_act_pane_g8

0x9b43,	// (0x00077b49) main_usb_pane

0x9ff4,	// (0x00077ffa) popup_cale_lunar_info_window

0x1218,	// (0x0006f21e) im_reading_pane_t1_ParamLimits

0xacb8,	// (0x00078cbe) list_im_pane_ParamLimits

0xacc9,	// (0x00078ccf) scroll_pane_cp07_ParamLimits

0x9b43,	// (0x00077b49) grid_highlight_pane_cp012

0x9d9e,	// (0x00077da4) mup_scale_pane_ParamLimits

0xb799,	// (0x0007979f) main_usb_pane_g1_ParamLimits

0xb799,	// (0x0007979f) main_usb_pane_g1

0x30d6,	// (0x000710dc) main_usb_pane_g2_ParamLimits

0x30d6,	// (0x000710dc) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0007d5ad) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0007d5ad) main_usb_pane_g

0x30ec,	// (0x000710f2) main_usb_pane_t1_ParamLimits

0x30ec,	// (0x000710f2) main_usb_pane_t1

0x30fe,	// (0x00071104) main_usb_pane_t2_ParamLimits

0x30fe,	// (0x00071104) main_usb_pane_t2

0x3110,	// (0x00071116) main_usb_pane_t3_ParamLimits

0x3110,	// (0x00071116) main_usb_pane_t3

0x3122,	// (0x00071128) main_usb_pane_t4_ParamLimits

0x3122,	// (0x00071128) main_usb_pane_t4

0x3137,	// (0x0007113d) main_usb_pane_t5_ParamLimits

0x3137,	// (0x0007113d) main_usb_pane_t5

0x314c,	// (0x00071152) main_usb_pane_t6_ParamLimits

0x314c,	// (0x00071152) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0007d5b2) main_usb_pane_t_ParamLimits

0x2372,	// (0x00070378) aid_text_placing

0x237d,	// (0x00070383) main_location2_pane_t1_ParamLimits

0x2393,	// (0x00070399) main_location2_pane_t2_ParamLimits

0x23a9,	// (0x000703af) main_location2_pane_t3_ParamLimits

0x23bf,	// (0x000703c5) main_location2_pane_t4_ParamLimits

0x23bf,	// (0x000703c5) main_location2_pane_t4

0xf3cb,	// (0x0007d3d1) main_location2_pane_t_ParamLimits

0x9dda,	// (0x00077de0) find_pinb_pane_g2_ParamLimits

0x9dda,	// (0x00077de0) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007d121) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007d121) find_pinb_pane_g

0x9de6,	// (0x00077dec) find_pinb_pane_t1_ParamLimits

0x9df8,	// (0x00077dfe) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007d126) find_pinb_pane_t_ParamLimits

0x9b43,	// (0x00077b49) main_call3_pane

0x199d,	// (0x0006f9a3) cale_month_day_heading_pane_t1_ParamLimits

0x1a23,	// (0x0006fa29) cale_month_day_heading_pane_t2_ParamLimits

0x1a9c,	// (0x0006faa2) cale_month_day_heading_pane_t3_ParamLimits

0x1b15,	// (0x0006fb1b) cale_month_day_heading_pane_t4_ParamLimits

0x1b96,	// (0x0006fb9c) cale_month_day_heading_pane_t5_ParamLimits

0x1c1f,	// (0x0006fc25) cale_month_day_heading_pane_t6_ParamLimits

0x1cb0,	// (0x0006fcb6) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0007d2a8) cale_month_day_heading_pane_t_ParamLimits

0xaf13,	// (0x00078f19) smil_status_volume_pane

0x2b8b,	// (0x00070b91) postcard_address_pane_ParamLimits

0x2b8b,	// (0x00070b91) postcard_address_pane

0x2ba1,	// (0x00070ba7) postcard_message_pane_ParamLimits

0x2ba1,	// (0x00070ba7) postcard_message_pane

0x30af,	// (0x000710b5) call2_cli_visual_pane_t1_ParamLimits

0x30af,	// (0x000710b5) call2_cli_visual_pane_t1

0x3919,	// (0x0007191f) postcard_message_pane_t1_ParamLimits

0x3919,	// (0x0007191f) postcard_message_pane_t1

0xcaf1,	// (0x0007aaf7) postcard_address_pane_t1_ParamLimits

0xcaf1,	// (0x0007aaf7) postcard_address_pane_t1

0x3905,	// (0x0007190b) popup_call3_audio_in_window_ParamLimits

0x3905,	// (0x0007190b) popup_call3_audio_in_window

0x378a,	// (0x00071790) bg_popup_call3_in_pane_ParamLimits

0x378a,	// (0x00071790) bg_popup_call3_in_pane

0x3806,	// (0x0007180c) popup_call3_audio_in_window_g1_ParamLimits

0x3806,	// (0x0007180c) popup_call3_audio_in_window_g1

0x3826,	// (0x0007182c) popup_call3_audio_in_window_g2_ParamLimits

0x3826,	// (0x0007182c) popup_call3_audio_in_window_g2

0x3846,	// (0x0007184c) popup_call3_audio_in_window_g3_ParamLimits

0x3846,	// (0x0007184c) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0007d614) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0007d614) popup_call3_audio_in_window_g

0x3877,	// (0x0007187d) popup_call3_audio_in_window_t1_ParamLimits

0x3877,	// (0x0007187d) popup_call3_audio_in_window_t1

0x38b5,	// (0x000718bb) popup_call3_audio_in_window_t2_ParamLimits

0x38b5,	// (0x000718bb) popup_call3_audio_in_window_t2

0x38f3,	// (0x000718f9) popup_call3_audio_in_window_t3_ParamLimits

0x38f3,	// (0x000718f9) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0007d61d) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0007d61d) popup_call3_audio_in_window_t

0xab9e,	// (0x00078ba4) bg_popup_call3_rect_pane

0xc835,	// (0x0007a83b) bg_popup_call3_rect_pane_g1

0xaad7,	// (0x00078add) bg_popup_call3_rect_pane_g2

0xc83d,	// (0x0007a843) bg_popup_call3_rect_pane_g3

0xc845,	// (0x0007a84b) bg_popup_call3_rect_pane_g4

0xc84d,	// (0x0007a853) bg_popup_call3_rect_pane_g5

0xc855,	// (0x0007a85b) bg_popup_call3_rect_pane_g6

0xc85d,	// (0x0007a863) bg_popup_call3_rect_pane_g7

0x26e3,	// (0x000706e9) mup_visualizer_osc_pane

0xb6b9,	// (0x000796bf) mup_visualizer_spec_pane

0x37ba,	// (0x000717c0) call3_video_qcif_pane_ParamLimits

0x37ba,	// (0x000717c0) call3_video_qcif_pane

0x37cd,	// (0x000717d3) call3_video_qcif_uncrop_pane_ParamLimits

0x37cd,	// (0x000717d3) call3_video_qcif_uncrop_pane

0x37dd,	// (0x000717e3) call3_video_subqcif_pane_ParamLimits

0x37dd,	// (0x000717e3) call3_video_subqcif_pane

0x37f3,	// (0x000717f9) call3_video_subqcif_uncrop_pane_ParamLimits

0x37f3,	// (0x000717f9) call3_video_subqcif_uncrop_pane

0x3866,	// (0x0007186c) popup_call3_audio_in_window_g4_ParamLimits

0x3866,	// (0x0007186c) popup_call3_audio_in_window_g4

0x3779,	// (0x0007177f) mup_spec_half_pane

0x3782,	// (0x00071788) mup_spec_half_pane_cp

0xcab1,	// (0x0007aab7) mup_osc_middle_pane

0xcaba,	// (0x0007aac0) mup_visualizer_osc_pane_g1

0x3759,	// (0x0007175f) mup_spec_bar_pane_ParamLimits

0x3759,	// (0x0007175f) mup_spec_bar_pane

0xca9e,	// (0x0007aaa4) mup_spec_bar_pane_g1

0xcaa8,	// (0x0007aaae) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0007d608) mup_spec_bar_pane_g

0x0431,	// (0x0006e437) aid_cale_week_size_cell_pane_ParamLimits

0x044b,	// (0x0006e451) bg_cale_heading_pane_ParamLimits

0x046f,	// (0x0006e475) bg_cale_pane_cp01_ParamLimits

0x048c,	// (0x0006e492) cale_week_corner_pane_ParamLimits

0x04ab,	// (0x0006e4b1) cale_week_day_heading_pane_ParamLimits

0x04d4,	// (0x0006e4da) cale_week_scroll_pane_g1_ParamLimits

0x04f3,	// (0x0006e4f9) cale_week_scroll_pane_g2_ParamLimits

0x050b,	// (0x0006e511) cale_week_scroll_pane_g3_ParamLimits

0x0523,	// (0x0006e529) cale_week_scroll_pane_g4_ParamLimits

0x053b,	// (0x0006e541) cale_week_scroll_pane_g5_ParamLimits

0x055b,	// (0x0006e561) cale_week_scroll_pane_g6_ParamLimits

0x057b,	// (0x0006e581) cale_week_scroll_pane_g7_ParamLimits

0x059f,	// (0x0006e5a5) cale_week_scroll_pane_g8_ParamLimits

0x05c3,	// (0x0006e5c9) cale_week_scroll_pane_g9_ParamLimits

0x05db,	// (0x0006e5e1) cale_week_scroll_pane_g10_ParamLimits

0x05f3,	// (0x0006e5f9) cale_week_scroll_pane_g11_ParamLimits

0x060b,	// (0x0006e611) cale_week_scroll_pane_g12_ParamLimits

0x062f,	// (0x0006e635) cale_week_scroll_pane_g13_ParamLimits

0x062f,	// (0x0006e635) cale_week_scroll_pane_g14_ParamLimits

0x062f,	// (0x0006e635) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007d1b2) cale_week_scroll_pane_g_ParamLimits

0x0677,	// (0x0006e67d) cale_week_time_pane_ParamLimits

0x069b,	// (0x0006e6a1) grid_cale_week_pane_ParamLimits

0xab14,	// (0x00078b1a) listscroll_cale_week_pane_t1

0xab26,	// (0x00078b2c) scroll_pane_cp08_ParamLimits

0x1410,	// (0x0006f416) cale_month_corner_pane_ParamLimits

0xaee9,	// (0x00078eef) cale_month_pane_t1

0x1918,	// (0x0006f91e) cale_month_week_pane_ParamLimits

0x218e,	// (0x00070194) popup_call_status_window_g1_ParamLimits

0x21a2,	// (0x000701a8) popup_call_status_window_g2_ParamLimits

0x21b6,	// (0x000701bc) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0007d358) popup_call_status_window_g_ParamLimits

0xb29a,	// (0x000792a0) aid_call2_pane

0x29b7,	// (0x000709bd) msg_header_pane_g1

0x2b8b,	// (0x00070b91) postcard_address2_pane_ParamLimits

0x2b8b,	// (0x00070b91) postcard_address2_pane

0x2ba1,	// (0x00070ba7) postcard_message2_pane_ParamLimits

0x2ba1,	// (0x00070ba7) postcard_message2_pane

0x3716,	// (0x0007171c) message2_row_pane_ParamLimits

0x3716,	// (0x0007171c) message2_row_pane

0xca59,	// (0x0007aa5f) address2_row_pane_ParamLimits

0xca59,	// (0x0007aa5f) address2_row_pane

0xca6c,	// (0x0007aa72) postcard_message2_row_pane_g1

0xca74,	// (0x0007aa7a) postcard_message2_row_pane_t1

0xca6c,	// (0x0007aa72) address2_row_pane_g1

0xca74,	// (0x0007aa7a) address2_row_pane_t1

0x0a08,	// (0x0006ea0e) aid_size_cell_vorec

0x9b43,	// (0x00077b49) main_rss_pane

0x3739,	// (0x0007173f) rss_list_single_pane_ParamLimits

0x3739,	// (0x0007173f) rss_list_single_pane

0xca82,	// (0x0007aa88) rss_list_single_pane_t1

0xca90,	// (0x0007aa96) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0007d603) rss_list_single_pane_t

0x9b43,	// (0x00077b49) main_camera2_pane

0x9b43,	// (0x00077b49) main_video2_pane

0x3988,	// (0x0007198e) cams_zoom_pane_cp2_ParamLimits

0x3988,	// (0x0007198e) cams_zoom_pane_cp2

0x399f,	// (0x000719a5) image2_vga_pane_ParamLimits

0x399f,	// (0x000719a5) image2_vga_pane

0x39e7,	// (0x000719ed) main_camera2_pane_g1_ParamLimits

0x39e7,	// (0x000719ed) main_camera2_pane_g1

0x3a07,	// (0x00071a0d) main_camera2_pane_g2_ParamLimits

0x3a07,	// (0x00071a0d) main_camera2_pane_g2

0x3a1e,	// (0x00071a24) main_camera2_pane_g3_ParamLimits

0x3a1e,	// (0x00071a24) main_camera2_pane_g3

0x3a35,	// (0x00071a3b) main_camera2_pane_g4_ParamLimits

0x3a35,	// (0x00071a3b) main_camera2_pane_g4

0x3a4c,	// (0x00071a52) main_camera2_pane_g5_ParamLimits

0x3a4c,	// (0x00071a52) main_camera2_pane_g5

0x3a63,	// (0x00071a69) main_camera2_pane_g6_ParamLimits

0x3a63,	// (0x00071a69) main_camera2_pane_g6

0x3a7a,	// (0x00071a80) main_camera2_pane_g7_ParamLimits

0x3a7a,	// (0x00071a80) main_camera2_pane_g7

0x3a91,	// (0x00071a97) main_camera2_pane_g8_ParamLimits

0x3a91,	// (0x00071a97) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0007d624) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0007d624) main_camera2_pane_g

0x3abf,	// (0x00071ac5) main_camera2_pane_t1_ParamLimits

0x3abf,	// (0x00071ac5) main_camera2_pane_t1

0x3af4,	// (0x00071afa) main_camera2_pane_t2_ParamLimits

0x3af4,	// (0x00071afa) main_camera2_pane_t2

0x3b11,	// (0x00071b17) main_camera2_pane_t3_ParamLimits

0x3b11,	// (0x00071b17) main_camera2_pane_t3

0x3b6f,	// (0x00071b75) main_camera2_pane_t4_ParamLimits

0x3b6f,	// (0x00071b75) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0007d637) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0007d637) main_camera2_pane_t

0x3bf8,	// (0x00071bfe) cams_zoom_pane_cp4_ParamLimits

0x3bf8,	// (0x00071bfe) cams_zoom_pane_cp4

0x3c0e,	// (0x00071c14) image2_cif_pane_ParamLimits

0x3c0e,	// (0x00071c14) image2_cif_pane

0x3c39,	// (0x00071c3f) image2_subqcif_pane_ParamLimits

0x3c39,	// (0x00071c3f) image2_subqcif_pane

0x3c54,	// (0x00071c5a) main_video2_pane_g1_ParamLimits

0x3c54,	// (0x00071c5a) main_video2_pane_g1

0x3c6e,	// (0x00071c74) main_video2_pane_g2_ParamLimits

0x3c6e,	// (0x00071c74) main_video2_pane_g2

0x3c84,	// (0x00071c8a) main_video2_pane_g3_ParamLimits

0x3c84,	// (0x00071c8a) main_video2_pane_g3

0x3c9a,	// (0x00071ca0) main_video2_pane_g4_ParamLimits

0x3c9a,	// (0x00071ca0) main_video2_pane_g4

0x3cb0,	// (0x00071cb6) main_video2_pane_g5_ParamLimits

0x3cb0,	// (0x00071cb6) main_video2_pane_g5

0x3cc6,	// (0x00071ccc) main_video2_pane_g6_ParamLimits

0x3cc6,	// (0x00071ccc) main_video2_pane_g6

0x0005,

0xf640,	// (0x0007d646) main_video2_pane_g_ParamLimits

0xf640,	// (0x0007d646) main_video2_pane_g

0x3ce0,	// (0x00071ce6) main_video2_pane_t1_ParamLimits

0x3ce0,	// (0x00071ce6) main_video2_pane_t1

0x3d04,	// (0x00071d0a) main_video2_pane_t2_ParamLimits

0x3d04,	// (0x00071d0a) main_video2_pane_t2

0x3d54,	// (0x00071d5a) main_video2_pane_t3_ParamLimits

0x3d54,	// (0x00071d5a) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0007d653) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0007d653) main_video2_pane_t

0x320a,	// (0x00071210) call_muted_g2

0x0001,

0xf5ef,	// (0x0007d5f5) call_muted_g

0x9b43,	// (0x00077b49) main_mup2_pane

0x3d9c,	// (0x00071da2) main_mup2_pane_g1_ParamLimits

0x3d9c,	// (0x00071da2) main_mup2_pane_g1

0x3da8,	// (0x00071dae) main_mup2_pane_g2_ParamLimits

0x3da8,	// (0x00071dae) main_mup2_pane_g2

0xa0ba,	// (0x000780c0) main_mup_pane_g13_cp1

0xa0c2,	// (0x000780c8) mup_volume_pane_cp1

0x3dc6,	// (0x00071dcc) main_mup2_pane_g4_ParamLimits

0x3dc6,	// (0x00071dcc) main_mup2_pane_g4

0x3dd8,	// (0x00071dde) main_mup2_pane_g5_ParamLimits

0x3dd8,	// (0x00071dde) main_mup2_pane_g5

0x3dea,	// (0x00071df0) main_mup2_pane_g6_ParamLimits

0x3dea,	// (0x00071df0) main_mup2_pane_g6

0x3dfc,	// (0x00071e02) main_mup2_pane_g7_ParamLimits

0x3dfc,	// (0x00071e02) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0007d65a) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0007d65a) main_mup2_pane_g

0x3e14,	// (0x00071e1a) main_mup2_pane_t1_ParamLimits

0x3e14,	// (0x00071e1a) main_mup2_pane_t1

0x3e2a,	// (0x00071e30) main_mup2_pane_t2_ParamLimits

0x3e2a,	// (0x00071e30) main_mup2_pane_t2

0x3e40,	// (0x00071e46) main_mup2_pane_t3_ParamLimits

0x3e40,	// (0x00071e46) main_mup2_pane_t3

0x3e56,	// (0x00071e5c) main_mup2_pane_t4_ParamLimits

0x3e56,	// (0x00071e5c) main_mup2_pane_t4

0x3e6e,	// (0x00071e74) main_mup2_pane_t5_ParamLimits

0x3e6e,	// (0x00071e74) main_mup2_pane_t5

0x3e86,	// (0x00071e8c) main_mup2_pane_t6_ParamLimits

0x3e86,	// (0x00071e8c) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0007d669) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0007d669) main_mup2_pane_t

0x3eb6,	// (0x00071ebc) mup2_visualizer_pane_ParamLimits

0x3eb6,	// (0x00071ebc) mup2_visualizer_pane

0x3ee4,	// (0x00071eea) mup_progress_pane_cp_ParamLimits

0x3ee4,	// (0x00071eea) mup_progress_pane_cp

0xa0a5,	// (0x000780ab) mup_volume_pane_cp_ParamLimits

0xa0a5,	// (0x000780ab) mup_volume_pane_cp

0x3efa,	// (0x00071f00) mup2_visualizer_pane_g1_ParamLimits

0x3efa,	// (0x00071f00) mup2_visualizer_pane_g1

0xcb08,	// (0x0007ab0e) mup2_visualizer_pane_g2_ParamLimits

0xcb08,	// (0x0007ab0e) mup2_visualizer_pane_g2

0x3f0f,	// (0x00071f15) mup2_visualizer_pane_g3_ParamLimits

0x3f0f,	// (0x00071f15) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0007d676) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0007d676) mup2_visualizer_pane_g

0xb8e2,	// (0x000798e8) aid_size_cell_fmradio

0x33ba,	// (0x000713c0) aid_height_parent_landcape

0xad47,	// (0x00078d4d) wml_content_pane_cp

0xad4f,	// (0x00078d55) wml_tabs_pane

0xad58,	// (0x00078d5e) popup_wml_miniature_window

0xad60,	// (0x00078d66) scroll_pane_cp021

0xad74,	// (0x00078d7a) wml_content_pane_comp8

0x9b43,	// (0x00077b49) bg_popup_sub_pane_cp05

0xcb26,	// (0x0007ab2c) popup_wml_miniature_window_g1

0xcb2e,	// (0x0007ab34) wml_miniature_view_pane

0x3f1b,	// (0x00071f21) aid_size_wml_view

0x3f23,	// (0x00071f29) wml_miniature_view_pane_g1

0x3f2c,	// (0x00071f32) wml_miniature_view_pane_g2

0x3f35,	// (0x00071f3b) wml_miniature_view_pane_g3

0x3f3d,	// (0x00071f43) wml_miniature_view_pane_g4

0x3f45,	// (0x00071f4b) wml_miniature_view_pane_g5

0x3f4d,	// (0x00071f53) wml_miniature_view_pane_g6

0x3f55,	// (0x00071f5b) wml_miniature_view_pane_g7

0x3f5d,	// (0x00071f63) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0007d67d) wml_miniature_view_pane_g

0xcb36,	// (0x0007ab3c) background_graphic_ParamLimits

0xcb36,	// (0x0007ab3c) background_graphic

0xcb42,	// (0x0007ab48) wml_tabs_2_pane

0xcb4b,	// (0x0007ab51) wml_tabs_3_pane_ParamLimits

0xcb4b,	// (0x0007ab51) wml_tabs_3_pane

0xcb5d,	// (0x0007ab63) wml_tabs_4_pane_ParamLimits

0xcb5d,	// (0x0007ab63) wml_tabs_4_pane

0xcb73,	// (0x0007ab79) wml_tabs_5_pane_ParamLimits

0xcb73,	// (0x0007ab79) wml_tabs_5_pane

0xcb8d,	// (0x0007ab93) wml_tabs_pane_g2_ParamLimits

0xcb8d,	// (0x0007ab93) wml_tabs_pane_g2

0xcba1,	// (0x0007aba7) wml_tabs_pane_g3_ParamLimits

0xcba1,	// (0x0007aba7) wml_tabs_pane_g3

0x3f65,	// (0x00071f6b) wml_tabs_2_active_pane_ParamLimits

0x3f65,	// (0x00071f6b) wml_tabs_2_active_pane

0x3f79,	// (0x00071f7f) wml_tabs_2_passive_pane_ParamLimits

0x3f79,	// (0x00071f7f) wml_tabs_2_passive_pane

0x3f8d,	// (0x00071f93) wml_tabs_3_active_pane_cp_ParamLimits

0x3f8d,	// (0x00071f93) wml_tabs_3_active_pane_cp

0x3fa2,	// (0x00071fa8) wml_tabs_3_passive_pane_ParamLimits

0x3fa2,	// (0x00071fa8) wml_tabs_3_passive_pane

0x3fb5,	// (0x00071fbb) wml_tabs_3_passive_pane_cp_ParamLimits

0x3fb5,	// (0x00071fbb) wml_tabs_3_passive_pane_cp

0x3fcc,	// (0x00071fd2) tabs_4_active_pane

0x3fd4,	// (0x00071fda) tabs_4_passive_pane

0x3fde,	// (0x00071fe4) tabs_4_passive_pane_cp

0x3fe6,	// (0x00071fec) tabs_4_passive_pane_cp2

0x30ce,	// (0x000710d4) aid_height_text

0x26b5,	// (0x000706bb) mup_volume_cont_pane_ParamLimits

0x26b5,	// (0x000706bb) mup_volume_cont_pane

0x0007,	// (0x0006e00d) aid_size_cell_pinb

0x0011,	// (0x0006e017) aid_size_list_pinb

0x3ed0,	// (0x00071ed6) mup2_volume_cont_pane_ParamLimits

0x3ed0,	// (0x00071ed6) mup2_volume_cont_pane

0xa091,	// (0x00078097) mup2_volume_cont_pane_g1_ParamLimits

0xa091,	// (0x00078097) mup2_volume_cont_pane_g1

0xfc94,	// (0x0006dc9a) aid_size_cell_touch_ParamLimits

0xfc94,	// (0x0006dc9a) aid_size_cell_touch

0xff2b,	// (0x0006df31) touch_pane_ParamLimits

0xff2b,	// (0x0006df31) touch_pane

0xf0b4,	// (0x0007d0ba) main_rss2_pane

0xcbbe,	// (0x0007abc4) listscroll_rss2_pane

0xcbc7,	// (0x0007abcd) rss2_navigation_pane

0xcbcf,	// (0x0007abd5) list_rss2_pane

0xb3be,	// (0x000793c4) scroll_pane_cp22

0xcbd7,	// (0x0007abdd) rss2_navigation_pane_g1

0xcbe0,	// (0x0007abe6) rss2_navigation_pane_g2

0xcbe8,	// (0x0007abee) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0007d68e) rss2_navigation_pane_g

0xcbf0,	// (0x0007abf6) rss2_navigation_pane_t1

0x3ff0,	// (0x00071ff6) rss2_list_single_pane_ParamLimits

0x3ff0,	// (0x00071ff6) rss2_list_single_pane

0xcbfe,	// (0x0007ac04) rss2_list_single_pane_t2

0xcc0c,	// (0x0007ac12) rss2_list_single_pane_t3_ParamLimits

0xcc0c,	// (0x0007ac12) rss2_list_single_pane_t3

0xcc29,	// (0x0007ac2f) rss2_list_single_pane_t4

0x1f8e,	// (0x0006ff94) smil_status_pane_g1

0x96ed,	// (0x000776f3) main_image2_pane_ParamLimits

0x96ed,	// (0x000776f3) main_image2_pane

0x3aa8,	// (0x00071aae) main_camera2_pane_g9_ParamLimits

0x3aa8,	// (0x00071aae) main_camera2_pane_g9

0x3bc4,	// (0x00071bca) main_camera2_pane_t5_ParamLimits

0x3bc4,	// (0x00071bca) main_camera2_pane_t5

0xa066,	// (0x0007806c) main_camera2_pane_t6_ParamLimits

0xa066,	// (0x0007806c) main_camera2_pane_t6

0x400a,	// (0x00072010) main_image2_pane_g1_ParamLimits

0x400a,	// (0x00072010) main_image2_pane_g1

0x2de5,	// (0x00070deb) smil2_video_pane_ParamLimits

0x2de5,	// (0x00070deb) smil2_video_pane

0xfcd4,	// (0x0006dcda) aid_zoom_text_primary_cp

0xfecb,	// (0x0006ded1) popup_preview_fixed_window

0xacb0,	// (0x00078cb6) im_reading_pane_g1

0x397a,	// (0x00071980) cams2_bc_adjust_pane_cp_ParamLimits

0x397a,	// (0x00071980) cams2_bc_adjust_pane_cp

0x3bea,	// (0x00071bf0) cams2_bc_adjust_pane_ParamLimits

0x3bea,	// (0x00071bf0) cams2_bc_adjust_pane

0xd022,	// (0x0007b028) cams2_bc_adjust_pane_g1

0xa0ca,	// (0x000780d0) cams2_slider_pane

0xa0d3,	// (0x000780d9) cams2_slider_pane_g1

0xa0dc,	// (0x000780e2) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0007d695) cams2_slider_pane_g

0x0103,	// (0x0006e109) calc_display_pane_ParamLimits

0x0128,	// (0x0006e12e) calc_paper_pane_ParamLimits

0x014b,	// (0x0006e151) grid_calc_pane_ParamLimits

0x9f7b,	// (0x00077f81) popup_clock_digital_window_t1_ParamLimits

0xb87f,	// (0x00079885) main_image_pane_t1

0x00e3,	// (0x0006e0e9) aid_size_cell_calc_ParamLimits

0x00e3,	// (0x0006e0e9) aid_size_cell_calc

0x3410,	// (0x00071416) popup_blid_sat_info2_window_ParamLimits

0x3410,	// (0x00071416) popup_blid_sat_info2_window

0xcc3f,	// (0x0007ac45) aid_size_cell_blid

0xcc47,	// (0x0007ac4d) bg_popup_window_pane_cp07

0xcc6a,	// (0x0007ac70) grid_popup_blid_pane

0xcc74,	// (0x0007ac7a) heading_pane_cp05_ParamLimits

0xcc74,	// (0x0007ac7a) heading_pane_cp05

0xcd3e,	// (0x0007ad44) cell_popup_blid_pane_ParamLimits

0xcd3e,	// (0x0007ad44) cell_popup_blid_pane

0xcd68,	// (0x0007ad6e) cell_popup_blid_pane_g1

0xcd70,	// (0x0007ad76) cell_popup_blid_pane_t1

0x3ea0,	// (0x00071ea6) mup2_indicator_pane_ParamLimits

0x3ea0,	// (0x00071ea6) mup2_indicator_pane

0xab9e,	// (0x00078ba4) mup2_visualizer_osc_pane

0xcb14,	// (0x0007ab1a) mup2_visualizer_spec_pane_ParamLimits

0xcb14,	// (0x0007ab1a) mup2_visualizer_spec_pane

0x4020,	// (0x00072026) mup2_spec_half_pane

0x4029,	// (0x0007202f) mup2_spec_half_pane_cp

0x4031,	// (0x00072037) mup2_spec_bar_pane_ParamLimits

0x4031,	// (0x00072037) mup2_spec_bar_pane

0xca9e,	// (0x0007aaa4) mup2_spec_bar_pane_g1

0xcaa8,	// (0x0007aaae) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0007d608) mup2_spec_bar_pane_g

0x4051,	// (0x00072057) mup2_osc_middle_pane

0xcaba,	// (0x0007aac0) mup2_visualizer_osc_pane_g1

0x971b,	// (0x00077721) popup_number_entry_window_t1_ParamLimits

0x972e,	// (0x00077734) popup_number_entry_window_t2_ParamLimits

0x9740,	// (0x00077746) popup_number_entry_window_t3_ParamLimits

0x9752,	// (0x00077758) popup_number_entry_window_t5_ParamLimits

0x9752,	// (0x00077758) popup_number_entry_window_t5

0xf0c6,	// (0x0007d0cc) popup_number_entry_window_t_ParamLimits

0x9787,	// (0x0007778d) text_title_cp2_ParamLimits

0x9fba,	// (0x00077fc0) aid_hotspot_pointer_text2_pane

0x9fe0,	// (0x00077fe6) main_viewer_pane_g9_ParamLimits

0x9fe0,	// (0x00077fe6) main_viewer_pane_g9

0xaee9,	// (0x00078eef) cale_month_pane_t1_ParamLimits

0xaf26,	// (0x00078f2c) bg_cale_pane_ParamLimits

0xaf3e,	// (0x00078f44) list_cale_pane_ParamLimits

0xaf4f,	// (0x00078f55) listscroll_cale_day_pane_t1

0xaf61,	// (0x00078f67) scroll_pane_cp09_ParamLimits

0x26eb,	// (0x000706f1) main_mup_eq_pane_t1_ParamLimits

0x26eb,	// (0x000706f1) main_mup_eq_pane_t1

0x2707,	// (0x0007070d) main_mup_eq_pane_t2_ParamLimits

0x2707,	// (0x0007070d) main_mup_eq_pane_t2

0x2723,	// (0x00070729) main_mup_eq_pane_t3_ParamLimits

0x2723,	// (0x00070729) main_mup_eq_pane_t3

0x2741,	// (0x00070747) main_mup_eq_pane_t4_ParamLimits

0x2741,	// (0x00070747) main_mup_eq_pane_t4

0x275f,	// (0x00070765) main_mup_eq_pane_t5_ParamLimits

0x275f,	// (0x00070765) main_mup_eq_pane_t5

0x277d,	// (0x00070783) main_mup_eq_pane_t6_ParamLimits

0x277d,	// (0x00070783) main_mup_eq_pane_t6

0x2793,	// (0x00070799) main_mup_eq_pane_t7_ParamLimits

0x2793,	// (0x00070799) main_mup_eq_pane_t7

0x27a9,	// (0x000707af) main_mup_eq_pane_t8_ParamLimits

0x27a9,	// (0x000707af) main_mup_eq_pane_t8

0x27bf,	// (0x000707c5) main_mup_eq_pane_t9_ParamLimits

0x27bf,	// (0x000707c5) main_mup_eq_pane_t9

0x27db,	// (0x000707e1) main_mup_eq_pane_t10_ParamLimits

0x27db,	// (0x000707e1) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0007d457) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0007d457) main_mup_eq_pane_t

0x28b0,	// (0x000708b6) mup_equalizer_pane_cp5_ParamLimits

0x28c8,	// (0x000708ce) mup_equalizer_pane_cp6_ParamLimits

0x28e0,	// (0x000708e6) mup_equalizer_pane_cp7_ParamLimits

0xf0b4,	// (0x0007d0ba) main_gallery_pane

0xcac3,	// (0x0007aac9) smil2_volume_pane

0xcacb,	// (0x0007aad1) smil_status_volume_pane_g1_ParamLimits

0xcade,	// (0x0007aae4) smil_status_volume_pane_g2_ParamLimits

0xa044,	// (0x0007804a) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0007d60d) smil_status_volume_pane_g_ParamLimits

0xcc47,	// (0x0007ac4d) bg_popup_window_pane_cp07_ParamLimits

0xcc55,	// (0x0007ac5b) blid_firmament_pane

0x405a,	// (0x00072060) aid_size_cell_gallery_ParamLimits

0x405a,	// (0x00072060) aid_size_cell_gallery

0x4070,	// (0x00072076) grid_gallery_pane_ParamLimits

0x4070,	// (0x00072076) grid_gallery_pane

0x408b,	// (0x00072091) cell_gallery_pane_ParamLimits

0x408b,	// (0x00072091) cell_gallery_pane

0xcd7e,	// (0x0007ad84) bg_cell_gallery_focus_pane_ParamLimits

0xcd7e,	// (0x0007ad84) bg_cell_gallery_focus_pane

0xcd90,	// (0x0007ad96) cell_gallery_pane_g1_ParamLimits

0xcd90,	// (0x0007ad96) cell_gallery_pane_g1

0x40dc,	// (0x000720e2) cell_gallery_pane_g2_ParamLimits

0x40dc,	// (0x000720e2) cell_gallery_pane_g2

0x40e9,	// (0x000720ef) cell_gallery_pane_g3_ParamLimits

0x40e9,	// (0x000720ef) cell_gallery_pane_g3

0xcd9c,	// (0x0007ada2) cell_gallery_pane_g4_ParamLimits

0xcd9c,	// (0x0007ada2) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0007d6bb) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0007d6bb) cell_gallery_pane_g

0xcda8,	// (0x0007adae) bg_cell_gallery_focus_pane_g1

0xcdb0,	// (0x0007adb6) bg_cell_gallery_focus_pane_g2

0xcdb8,	// (0x0007adbe) bg_cell_gallery_focus_pane_g3

0xcdc0,	// (0x0007adc6) bg_cell_gallery_focus_pane_g4

0xcdc8,	// (0x0007adce) bg_cell_gallery_focus_pane_g5

0xcdd0,	// (0x0007add6) bg_cell_gallery_focus_pane_g6

0xcdd8,	// (0x0007adde) bg_cell_gallery_focus_pane_g7

0xcde0,	// (0x0007ade6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0007d6c4) bg_cell_gallery_focus_pane_g

0xcde8,	// (0x0007adee) aid_firma_cardinal

0xcdfc,	// (0x0007ae02) blid_firmament_pane_t1

0xce13,	// (0x0007ae19) blid_firmament_pane_t2

0xce2a,	// (0x0007ae30) blid_firmament_pane_t3

0xce41,	// (0x0007ae47) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0007d6d5) blid_firmament_pane_t

0xce58,	// (0x0007ae5e) blid_sat_info_pane

0xce68,	// (0x0007ae6e) blid_sat_info_pane_g1

0xce68,	// (0x0007ae6e) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0007d6de) blid_sat_info_pane_g

0xce72,	// (0x0007ae78) blid_sat_info_pane_t1

0xce80,	// (0x0007ae86) smil2_volume_content_pane

0xce89,	// (0x0007ae8f) smil2_volume_pane_g1

0xaa6e,	// (0x00078a74) smil2_volume_content_pane_g1

0xce91,	// (0x0007ae97) smil2_volume_content_pane_g2

0xce9a,	// (0x0007aea0) smil2_volume_content_pane_g3

0xcea3,	// (0x0007aea9) smil2_volume_content_pane_g4

0xceac,	// (0x0007aeb2) smil2_volume_content_pane_g5

0xceb5,	// (0x0007aebb) smil2_volume_content_pane_g6

0xcebe,	// (0x0007aec4) smil2_volume_content_pane_g7

0xcec7,	// (0x0007aecd) smil2_volume_content_pane_g8

0xced0,	// (0x0007aed6) smil2_volume_content_pane_g9

0xced9,	// (0x0007aedf) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0007d6e3) smil2_volume_content_pane_g

0x0769,	// (0x0006e76f) cale_week_day_heading_pane_t1_ParamLimits

0x0793,	// (0x0006e799) cale_week_day_heading_pane_t2_ParamLimits

0x07c2,	// (0x0006e7c8) cale_week_day_heading_pane_t3_ParamLimits

0x07f1,	// (0x0006e7f7) cale_week_day_heading_pane_t4_ParamLimits

0x0820,	// (0x0006e826) cale_week_day_heading_pane_t5_ParamLimits

0x0853,	// (0x0006e859) cale_week_day_heading_pane_t6_ParamLimits

0x088a,	// (0x0006e890) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007d1d3) cale_week_day_heading_pane_t_ParamLimits

0xab43,	// (0x00078b49) bg_cale_side_pane_ParamLimits

0x08b4,	// (0x0006e8ba) cale_week_time_pane_t1_ParamLimits

0x08ce,	// (0x0006e8d4) cale_week_time_pane_t2_ParamLimits

0x08e8,	// (0x0006e8ee) cale_week_time_pane_t3_ParamLimits

0x0902,	// (0x0006e908) cale_week_time_pane_t4_ParamLimits

0x091c,	// (0x0006e922) cale_week_time_pane_t5_ParamLimits

0x0936,	// (0x0006e93c) cale_week_time_pane_t6_ParamLimits

0x0956,	// (0x0006e95c) cale_week_time_pane_t7_ParamLimits

0x097c,	// (0x0006e982) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007d1e2) cale_week_time_pane_t_ParamLimits

0x09a2,	// (0x0006e9a8) cell_cale_week_pane_g2_ParamLimits

0xab43,	// (0x00078b49) bg_cale_side_pane_cp01_ParamLimits

0x1d41,	// (0x0006fd47) cale_month_week_pane_t1_ParamLimits

0x1d5a,	// (0x0006fd60) cale_month_week_pane_t2_ParamLimits

0x1d73,	// (0x0006fd79) cale_month_week_pane_t3_ParamLimits

0x1d8c,	// (0x0006fd92) cale_month_week_pane_t4_ParamLimits

0x1da5,	// (0x0006fdab) cale_month_week_pane_t5_ParamLimits

0x1dbe,	// (0x0006fdc4) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0007d2b7) cale_month_week_pane_t_ParamLimits

0x9efb,	// (0x00077f01) cell_cale_month_pane_g1_ParamLimits

0xf0b4,	// (0x0007d0ba) main_cale_event_viewer_pane

0x96e3,	// (0x000776e9) listscroll_cale_event_viewer_pane

0xcee2,	// (0x0007aee8) list_cale_ev_pane

0xceea,	// (0x0007aef0) scroll_pane_cp023

0x40f6,	// (0x000720fc) field_cale_ev_pane_ParamLimits

0x40f6,	// (0x000720fc) field_cale_ev_pane

0xcef6,	// (0x0007aefc) field_cale_ev_content_pane_ParamLimits

0xcef6,	// (0x0007aefc) field_cale_ev_content_pane

0xcf02,	// (0x0007af08) field_cale_ev_pane_g1_ParamLimits

0xcf02,	// (0x0007af08) field_cale_ev_pane_g1

0xcf0e,	// (0x0007af14) field_cale_ev_pane_g2_ParamLimits

0xcf0e,	// (0x0007af14) field_cale_ev_pane_g2

0xcf26,	// (0x0007af2c) field_cale_ev_pane_g3_ParamLimits

0xcf26,	// (0x0007af2c) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0007d6f8) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0007d6f8) field_cale_ev_pane_g

0xcf3e,	// (0x0007af44) field_cale_ev_pane_t1_ParamLimits

0xcf3e,	// (0x0007af44) field_cale_ev_pane_t1

0x411a,	// (0x00072120) field_cale_ev_content_pane_t1_ParamLimits

0x411a,	// (0x00072120) field_cale_ev_content_pane_t1

0xb765,	// (0x0007976b) bg_button_pane_cp01

0x0421,	// (0x0006e427) listscroll_cale_week_pane_ParamLimits

0xab0b,	// (0x00078b11) popup_toolbar_window_cp01

0xab14,	// (0x00078b1a) listscroll_cale_week_pane_t1_ParamLimits

0x0421,	// (0x0006e427) listscroll_cale_day_pane_ParamLimits

0xab0b,	// (0x00078b11) popup_toolbar_window_cp02

0xaf4f,	// (0x00078f55) listscroll_cale_day_pane_t1_ParamLimits

0x33d8,	// (0x000713de) main_cale_month_pane_ParamLimits

0xa02f,	// (0x00078035) popup_toolbar_window_cp03_ParamLimits

0xa02f,	// (0x00078035) popup_toolbar_window_cp03

0x2ca3,	// (0x00070ca9) main_image_pane_g2_ParamLimits

0x2ca3,	// (0x00070ca9) main_image_pane_g2

0x2cb4,	// (0x00070cba) main_image_pane_g3_ParamLimits

0x2cb4,	// (0x00070cba) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0007d4e9) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0007d4e9) main_image_pane_g

0xb87f,	// (0x00079885) main_image_pane_t1_ParamLimits

0x2cc5,	// (0x00070ccb) main_image_pane_t2_ParamLimits

0x2cc5,	// (0x00070ccb) main_image_pane_t2

0x2cd7,	// (0x00070cdd) main_image_pane_t3_ParamLimits

0x2cd7,	// (0x00070cdd) main_image_pane_t3

0x2cff,	// (0x00070d05) main_image_pane_t4_ParamLimits

0x2cff,	// (0x00070d05) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0007d4f0) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0007d4f0) main_image_pane_t

0x2d1f,	// (0x00070d25) popup_image_details_window_cp01

0x2d29,	// (0x00070d2f) popup_toobar_trans_pane_cp01_ParamLimits

0x2d29,	// (0x00070d2f) popup_toobar_trans_pane_cp01

0x3503,	// (0x00071509) popup_image_details_window_ParamLimits

0x3503,	// (0x00071509) popup_image_details_window

0xa000,	// (0x00078006) popup_image_focus_window

0x3934,	// (0x0007193a) camera2_autofocus_pane_ParamLimits

0x3934,	// (0x0007193a) camera2_autofocus_pane

0x96e3,	// (0x000776e9) bg_popup_sub_pane_cp06

0xcf55,	// (0x0007af5b) popup_image_focus_window_g1

0xcf5d,	// (0x0007af63) popup_image_focus_window_g2

0xcf65,	// (0x0007af6b) popup_image_focus_window_g3

0xcf6d,	// (0x0007af73) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0007d6ff) popup_image_focus_window_g

0xcf75,	// (0x0007af7b) popup_image_focus_window_t1

0xcf83,	// (0x0007af89) popup_image_focus_window_t2

0xcf93,	// (0x0007af99) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0007d708) popup_image_focus_window_t

0xcfa1,	// (0x0007afa7) camera2_autofocus_pane_g1

0xbce3,	// (0x00079ce9) bg_tb_trans_pane_cp01

0xcfaf,	// (0x0007afb5) popup_image_details_window_g1

0xcfc2,	// (0x0007afc8) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0007d71a) popup_image_details_window_g

0xcfeb,	// (0x0007aff1) popup_image_details_window_t1

0xcffd,	// (0x0007b003) popup_image_details_window_t2

0xd02a,	// (0x0007b030) popup_image_details_window_t3

0xd03e,	// (0x0007b044) popup_image_details_window_t4

0xd059,	// (0x0007b05f) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0007d721) popup_image_details_window_t

0x9e57,	// (0x00077e5d) bg_calc_paper_pane_ParamLimits

0xf0b4,	// (0x0007d0ba) grid_highlight_pane_cp013

0x9e6b,	// (0x00077e71) list_calc_pane_ParamLimits

0x9e7d,	// (0x00077e83) scroll_pane_cp024

0xa9ed,	// (0x000789f3) bg_calc_display_pane_ParamLimits

0x024b,	// (0x0006e251) calc_display_pane_t1_ParamLimits

0x025d,	// (0x0006e263) calc_display_pane_t2_ParamLimits

0x9e85,	// (0x00077e8b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007d153) calc_display_pane_t_ParamLimits

0x031e,	// (0x0006e324) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007d170) cell_calc_pane_g

0x0327,	// (0x0006e32d) cell_calc_pane_t1

0xaa4c,	// (0x00078a52) grid_highlight_pane_cp02_ParamLimits

0xaa62,	// (0x00078a68) toolbar_button_pane_cp01_ParamLimits

0xaa62,	// (0x00078a68) toolbar_button_pane_cp01

0xb8c4,	// (0x000798ca) temp_image_control_pane_ParamLimits

0xb8c4,	// (0x000798ca) temp_image_control_pane

0x96ed,	// (0x000776f3) main_mp3_pane

0xd073,	// (0x0007b079) temp_image_control_pane_g1_ParamLimits

0xd073,	// (0x0007b079) temp_image_control_pane_g1

0xd081,	// (0x0007b087) temp_image_control_pane_g2_ParamLimits

0xd081,	// (0x0007b087) temp_image_control_pane_g2

0xd093,	// (0x0007b099) temp_image_control_pane_g3_ParamLimits

0xd093,	// (0x0007b099) temp_image_control_pane_g3

0x416b,	// (0x00072171) temp_image_control_pane_g4_ParamLimits

0x416b,	// (0x00072171) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0007d72c) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0007d72c) temp_image_control_pane_g

0xd073,	// (0x0007b079) main_mp3_pane_g1

0x417e,	// (0x00072184) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0007d735) main_mp3_pane_g

0xd0d6,	// (0x0007b0dc) main_mp3_pane_t1

0xabbb,	// (0x00078bc1) main_camera_pane_g8_ParamLimits

0xabbb,	// (0x00078bc1) main_camera_pane_g8

0x0cb4,	// (0x0006ecba) main_video_pane_g7_ParamLimits

0x0cb4,	// (0x0006ecba) main_video_pane_g7

0xa07f,	// (0x00078085) main_camera2_pane_t7_ParamLimits

0xa07f,	// (0x00078085) main_camera2_pane_t7

0xad07,	// (0x00078d0d) scroll_pane_cp025_ParamLimits

0xad07,	// (0x00078d0d) scroll_pane_cp025

0xad1b,	// (0x00078d21) scroll_pane_cp026_ParamLimits

0xad1b,	// (0x00078d21) scroll_pane_cp026

0xad2a,	// (0x00078d30) wml_content_pane_ParamLimits

0xf0b4,	// (0x0007d0ba) main_touch_calib_pane

0x4250,	// (0x00072256) main_touch_calib_pane_g1

0x4262,	// (0x00072268) main_touch_calib_pane_g2

0x4274,	// (0x0007227a) main_touch_calib_pane_g3

0x4286,	// (0x0007228c) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0007d753) main_touch_calib_pane_g

0x4298,	// (0x0007229e) main_touch_calib_pane_t1

0x42b2,	// (0x000722b8) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0007d75c) main_touch_calib_pane_t

0xb48d,	// (0x00079493) mup_progress_pane_cp02

0xb4c2,	// (0x000794c8) navi_pane_g1

0xb57d,	// (0x00079583) navi_pane_mp_t3

0x96ed,	// (0x000776f3) main_mp3_pane_ParamLimits

0x36bc,	// (0x000716c2) navi_pane_ParamLimits

0xd073,	// (0x0007b079) main_mp3_pane_g1_ParamLimits

0x417e,	// (0x00072184) main_mp3_pane_g2_ParamLimits

0x418a,	// (0x00072190) main_mp3_pane_g3_ParamLimits

0x418a,	// (0x00072190) main_mp3_pane_g3

0x4198,	// (0x0007219e) main_mp3_pane_g4_ParamLimits

0x4198,	// (0x0007219e) main_mp3_pane_g4

0xd0a3,	// (0x0007b0a9) main_mp3_pane_g5_ParamLimits

0xd0a3,	// (0x0007b0a9) main_mp3_pane_g5

0xd0b1,	// (0x0007b0b7) main_mp3_pane_g6_ParamLimits

0xd0b1,	// (0x0007b0b7) main_mp3_pane_g6

0xd0be,	// (0x0007b0c4) main_mp3_pane_g7_ParamLimits

0xd0be,	// (0x0007b0c4) main_mp3_pane_g7

0xd0ca,	// (0x0007b0d0) main_mp3_pane_g8_ParamLimits

0xd0ca,	// (0x0007b0d0) main_mp3_pane_g8

0xf72f,	// (0x0007d735) main_mp3_pane_g_ParamLimits

0x41a4,	// (0x000721aa) main_mp3_pane_t2

0x41b2,	// (0x000721b8) main_mp3_pane_t3

0xd0e4,	// (0x0007b0ea) main_mp3_pane_t4

0xd0f2,	// (0x0007b0f8) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0007d746) main_mp3_pane_t

0xd100,	// (0x0007b106) mup_progress_pane_cp01

0xf0be,	// (0x0007d0c4) aid_zoom_text_secondary2

0xcee2,	// (0x0007aee8) list_cale_ev2_pane

0xceea,	// (0x0007aef0) scroll_pane_cp023_ParamLimits

0x430c,	// (0x00072312) field_cale_ev2_pane_ParamLimits

0x430c,	// (0x00072312) field_cale_ev2_pane

0x4330,	// (0x00072336) field_cale_ev2_pane_g1_ParamLimits

0x4330,	// (0x00072336) field_cale_ev2_pane_g1

0x433c,	// (0x00072342) field_cale_ev2_pane_g2_ParamLimits

0x433c,	// (0x00072342) field_cale_ev2_pane_g2

0x4354,	// (0x0007235a) field_cale_ev2_pane_g3_ParamLimits

0x4354,	// (0x0007235a) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0007d767) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0007d767) field_cale_ev2_pane_g

0x436c,	// (0x00072372) field_cale_ev2_pane_t1_ParamLimits

0x436c,	// (0x00072372) field_cale_ev2_pane_t1

0x4383,	// (0x00072389) field_cale_ev2_pane_t2_ParamLimits

0x4383,	// (0x00072389) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0007d770) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0007d770) field_cale_ev2_pane_t

0x2b3b,	// (0x00070b41) main_postcard_pane_g5_ParamLimits

0x2b3b,	// (0x00070b41) main_postcard_pane_g5

0x2b51,	// (0x00070b57) main_postcard_pane_g6_ParamLimits

0x2b51,	// (0x00070b57) main_postcard_pane_g6

0x0a60,	// (0x0006ea66) camera2_autofocus_pane_cp_ParamLimits

0x0a60,	// (0x0006ea66) camera2_autofocus_pane_cp

0x96ed,	// (0x000776f3) main_mup3_pane

0x43e2,	// (0x000723e8) main_mup3_pane_g1_ParamLimits

0x43e2,	// (0x000723e8) main_mup3_pane_g1

0x4404,	// (0x0007240a) main_mup3_pane_g2_ParamLimits

0x4404,	// (0x0007240a) main_mup3_pane_g2

0x447f,	// (0x00072485) main_mup3_pane_g3_ParamLimits

0x447f,	// (0x00072485) main_mup3_pane_g3

0x44e9,	// (0x000724ef) main_mup3_pane_g4_ParamLimits

0x44e9,	// (0x000724ef) main_mup3_pane_g4

0x4553,	// (0x00072559) main_mup3_pane_g5_ParamLimits

0x4553,	// (0x00072559) main_mup3_pane_g5

0x45bd,	// (0x000725c3) main_mup3_pane_g6_ParamLimits

0x45bd,	// (0x000725c3) main_mup3_pane_g6

0xd108,	// (0x0007b10e) main_mup3_pane_g7_ParamLimits

0xd108,	// (0x0007b10e) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0007d780) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0007d780) main_mup3_pane_g

0x463d,	// (0x00072643) main_mup3_pane_t1_ParamLimits

0x463d,	// (0x00072643) main_mup3_pane_t1

0x46af,	// (0x000726b5) main_mup3_pane_t2_ParamLimits

0x46af,	// (0x000726b5) main_mup3_pane_t2

0x4781,	// (0x00072787) main_mup3_pane_t4_ParamLimits

0x4781,	// (0x00072787) main_mup3_pane_t4

0x47df,	// (0x000727e5) main_mup3_pane_t5_ParamLimits

0x47df,	// (0x000727e5) main_mup3_pane_t5

0x489b,	// (0x000728a1) main_mup3_pane_t6_ParamLimits

0x489b,	// (0x000728a1) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0007d791) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0007d791) main_mup3_pane_t

0x4953,	// (0x00072959) mup3_progress_pane_ParamLimits

0x4953,	// (0x00072959) mup3_progress_pane

0x49eb,	// (0x000729f1) popup_mup3_control_window_ParamLimits

0x49eb,	// (0x000729f1) popup_mup3_control_window

0xd116,	// (0x0007b11c) popup_mup3_text_window

0x4a21,	// (0x00072a27) mup3_progress_pane_t1

0x4a40,	// (0x00072a46) mup3_progress_pane_t2

0xd11e,	// (0x0007b124) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0007d79e) mup3_progress_pane_t

0xd13b,	// (0x0007b141) mup_progress_pane_cp03

0x96e3,	// (0x000776e9) bg_tb_trans_pane_cp04

0x4a5f,	// (0x00072a65) mup3_volume_pane

0x4a67,	// (0x00072a6d) popup_mup3_control_window_g1

0x4a70,	// (0x00072a76) mup3_volume_pane_g1

0x4a79,	// (0x00072a7f) mup3_volume_pane_g2

0x4a82,	// (0x00072a88) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0007d7a5) mup3_volume_pane_g

0x96e3,	// (0x000776e9) bg_tb_trans_pane_cp03

0xd14b,	// (0x0007b151) popup_mup3_text_window_g1

0xd153,	// (0x0007b159) popup_mup3_text_window_t1

0xaa35,	// (0x00078a3b) list_calc_item_pane_g1_ParamLimits

0xcbb5,	// (0x0007abbb) mup_volume_pane_cp_g1

0x42cc,	// (0x000722d2) main_touch_calib_pane_t3

0x42e0,	// (0x000722e6) main_touch_calib_pane_t4

0x42f6,	// (0x000722fc) main_touch_calib_pane_t5

0xfc80,	// (0x0006dc86) aid_cell_size_toolbar2

0xf0a8,	// (0x0007d0ae) aid_popup3_width_pane

0xfcc4,	// (0x0006dcca) aid_zoom_text_msg_primary

0x0a52,	// (0x0006ea58) vorec_t7

0xa9f9,	// (0x000789ff) bg_calc_paper_pane_g1_ParamLimits

0xaa05,	// (0x00078a0b) bg_calc_paper_pane_g2_ParamLimits

0xaa11,	// (0x00078a17) bg_calc_paper_pane_g3_ParamLimits

0xaa1d,	// (0x00078a23) bg_calc_paper_pane_g4_ParamLimits

0xaa29,	// (0x00078a2f) bg_calc_paper_pane_g5_ParamLimits

0x02aa,	// (0x0006e2b0) bg_calc_paper_pane_g6_ParamLimits

0x02b8,	// (0x0006e2be) bg_calc_paper_pane_g7_ParamLimits

0x02c6,	// (0x0006e2cc) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007d15a) bg_calc_paper_pane_g_ParamLimits

0x02d9,	// (0x0006e2df) calc_bg_paper_pane_g9_ParamLimits

0x0bc2,	// (0x0006ebc8) image_qvga_pane_ParamLimits

0x0bc2,	// (0x0006ebc8) image_qvga_pane

0x9d9e,	// (0x00077da4) bg_popup_sub_pane_cp04_ParamLimits

0xb7fb,	// (0x00079801) popup_mup_playback_window_g1_ParamLimits

0xb807,	// (0x0007980d) popup_mup_playback_window_t1_ParamLimits

0xb81c,	// (0x00079822) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0007d4e4) popup_mup_playback_window_t_ParamLimits

0x3db8,	// (0x00071dbe) main_mup2_pane_g3_ParamLimits

0x3db8,	// (0x00071dbe) main_mup2_pane_g3

0x0fca,	// (0x0006efd0) popup_toolbar_window_cp04

0xbc17,	// (0x00079c1d) popup_call2_audio_second_window_g3_ParamLimits

0xbc17,	// (0x00079c1d) popup_call2_audio_second_window_g3

0xc046,	// (0x0007a04c) popup_call2_audio_first_window_g4_ParamLimits

0xc046,	// (0x0007a04c) popup_call2_audio_first_window_g4

0xc6c5,	// (0x0007a6cb) popup_call2_audio_in_window_g4_ParamLimits

0xc6c5,	// (0x0007a6cb) popup_call2_audio_in_window_g4

0x2c85,	// (0x00070c8b) aid_area_sk_bg_cut_ParamLimits

0x2c85,	// (0x00070c8b) aid_area_sk_bg_cut

0xb831,	// (0x00079837) aid_area_sk_bg_cut_2_ParamLimits

0xb831,	// (0x00079837) aid_area_sk_bg_cut_2

0x40cc,	// (0x000720d2) aid_placing_details_win

0x40d4,	// (0x000720da) aid_placing_details_win_2

0xcfa1,	// (0x0007afa7) camera2_autofocus_pane_g1_ParamLimits

0xfeb2,	// (0x0006deb8) popup_fixed_preview_cale_window_ParamLimits

0xfeb2,	// (0x0006deb8) popup_fixed_preview_cale_window

0xb5fd,	// (0x00079603) navi_slider_pane_g3

0xb606,	// (0x0007960c) navi_slider_pane_g4

0xb60f,	// (0x00079615) navi_slider_pane_g5

0xb5fd,	// (0x00079603) navi_slider_pane_g6

0x9fa1,	// (0x00077fa7) navi_slider_pane_g7

0xb732,	// (0x00079738) mup_scale_pane_g3

0xb73b,	// (0x00079741) mup_scale_pane_g4

0xb744,	// (0x0007974a) mup_scale_pane_g5

0x28f8,	// (0x000708fe) mup_scale_pane_g6

0x2901,	// (0x00070907) mup_scale_pane_g7

0xb5fd,	// (0x00079603) cams2_slider_pane_g3

0xcc37,	// (0x0007ac3d) cams2_slider_pane_g4

0xa0e5,	// (0x000780eb) cams2_slider_pane_g5

0xb5fd,	// (0x00079603) cams2_slider_pane_g6

0xa0ed,	// (0x000780f3) cams2_slider_pane_g7

0xce68,	// (0x0007ae6e) camera2_autofocus_pane_cp_g1

0xca24,	// (0x0007aa2a) bg_popup_preview_window_pane_cp02_ParamLimits

0xca24,	// (0x0007aa2a) bg_popup_preview_window_pane_cp02

0xd161,	// (0x0007b167) list_fp_cale_pane_ParamLimits

0xd161,	// (0x0007b167) list_fp_cale_pane

0xd16d,	// (0x0007b173) popup_fixed_preview_cale_window_t1_ParamLimits

0xd16d,	// (0x0007b173) popup_fixed_preview_cale_window_t1

0x4a8b,	// (0x00072a91) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a8b,	// (0x00072a91) popup_fixed_preview_cale_window_t2

0x4aa0,	// (0x00072aa6) popup_fixed_preview_cale_window_t3_ParamLimits

0x4aa0,	// (0x00072aa6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0007d7ac) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0007d7ac) popup_fixed_preview_cale_window_t

0x4ab7,	// (0x00072abd) list_single_fp_cale_pane_ParamLimits

0x4ab7,	// (0x00072abd) list_single_fp_cale_pane

0xd18b,	// (0x0007b191) list_single_fp_cale_pane_g1_ParamLimits

0xd18b,	// (0x0007b191) list_single_fp_cale_pane_g1

0xd197,	// (0x0007b19d) list_single_fp_cale_pane_g2_ParamLimits

0xd197,	// (0x0007b19d) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0007d7b3) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0007d7b3) list_single_fp_cale_pane_g

0xd1b0,	// (0x0007b1b6) list_single_fp_cale_pane_t1_ParamLimits

0xd1b0,	// (0x0007b1b6) list_single_fp_cale_pane_t1

0xd1c2,	// (0x0007b1c8) list_single_fp_cale_pane_t2_ParamLimits

0xd1c2,	// (0x0007b1c8) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0007d7ba) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0007d7ba) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xf0b4,	// (0x0007d0ba) main_dialer_pane

0x4acf,	// (0x00072ad5) aid_cell_size_keypad

0x4ad9,	// (0x00072adf) dialer_ne_pane

0x4ae3,	// (0x00072ae9) grid_dialer_command_1_pane

0x4aeb,	// (0x00072af1) grid_dialer_command_2_pane

0x4af3,	// (0x00072af9) grid_dialer_keypad_pane

0x4b07,	// (0x00072b0d) bg_popup_call_pane_cp06_ParamLimits

0x4b07,	// (0x00072b0d) bg_popup_call_pane_cp06

0x4b13,	// (0x00072b19) dialer_ne_clear_pane_ParamLimits

0x4b13,	// (0x00072b19) dialer_ne_clear_pane

0xd1f5,	// (0x0007b1fb) dialer_ne_pane_g1

0xd1fd,	// (0x0007b203) dialer_ne_pane_t1_ParamLimits

0xd1fd,	// (0x0007b203) dialer_ne_pane_t1

0x4b1f,	// (0x00072b25) dialer_ne_pane_t2_ParamLimits

0x4b1f,	// (0x00072b25) dialer_ne_pane_t2

0x4b49,	// (0x00072b4f) dialer_ne_pane_t3_ParamLimits

0x4b49,	// (0x00072b4f) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0007d7bf) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0007d7bf) dialer_ne_pane_t

0x4b79,	// (0x00072b7f) dialer_ne_pane_t3_copy1_ParamLimits

0x4b79,	// (0x00072b7f) dialer_ne_pane_t3_copy1

0x4ba8,	// (0x00072bae) cell_dialer_keypad_pane_ParamLimits

0x4ba8,	// (0x00072bae) cell_dialer_keypad_pane

0x4bbf,	// (0x00072bc5) cell_dialer_command_1_pane_ParamLimits

0x4bbf,	// (0x00072bc5) cell_dialer_command_1_pane

0x4bd5,	// (0x00072bdb) cell_dialer_command_2_pane_ParamLimits

0x4bd5,	// (0x00072bdb) cell_dialer_command_2_pane

0xd20f,	// (0x0007b215) bg_button_pane_cp02_ParamLimits

0xd20f,	// (0x0007b215) bg_button_pane_cp02

0x4be4,	// (0x00072bea) cell_dialer_keypad_pane_g1_ParamLimits

0x4be4,	// (0x00072bea) cell_dialer_keypad_pane_g1

0xd20f,	// (0x0007b215) bg_button_pane_cp03_ParamLimits

0xd20f,	// (0x0007b215) bg_button_pane_cp03

0x4bf5,	// (0x00072bfb) cell_dialer_command_1_pane_g1_ParamLimits

0x4bf5,	// (0x00072bfb) cell_dialer_command_1_pane_g1

0xd21b,	// (0x0007b221) bg_button_pane_cp04

0x4c09,	// (0x00072c0f) cell_dialer_command_2_pane_g1

0xab9e,	// (0x00078ba4) bg_button_pane_cp06

0xd223,	// (0x0007b229) dialer_ne_clear_pane_g1

0xb4ce,	// (0x000794d4) navi_pane_g2

0xb4fc,	// (0x00079502) navi_pane_g3

0x0002,

0xf3e1,	// (0x0007d3e7) navi_pane_g

0xb58b,	// (0x00079591) navi_pane_mv_g2

0xb5b4,	// (0x000795ba) navi_pane_mv_g5

0x2460,	// (0x00070466) navi_pane_mv_t1

0xa9ed,	// (0x000789f3) main_clock2_pane

0xbce3,	// (0x00079ce9) main_clock2_list_pane_ParamLimits

0xbce3,	// (0x00079ce9) main_clock2_list_pane

0x4c75,	// (0x00072c7b) main_clock2_pane_t1_ParamLimits

0x4c75,	// (0x00072c7b) main_clock2_pane_t1

0x4cb0,	// (0x00072cb6) main_clock2_pane_t2_ParamLimits

0x4cb0,	// (0x00072cb6) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0007d7cb) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0007d7cb) main_clock2_pane_t

0x4d4f,	// (0x00072d55) popup_clock_analogue_window_cp03_ParamLimits

0x4d4f,	// (0x00072d55) popup_clock_analogue_window_cp03

0x4d74,	// (0x00072d7a) popup_clock_digital_window_cp02_ParamLimits

0x4d74,	// (0x00072d7a) popup_clock_digital_window_cp02

0x4ded,	// (0x00072df3) main_clock2_list_single_pane_ParamLimits

0x4ded,	// (0x00072df3) main_clock2_list_single_pane

0xab9e,	// (0x00078ba4) list_highlight_pane_cp05

0xd25b,	// (0x0007b261) main_clock2_list_single_pane_t1

0x0fca,	// (0x0006efd0) popup_toolbar_window_cp04_ParamLimits

0x413b,	// (0x00072141) camera2_autofocus_pane_g2_ParamLimits

0x413b,	// (0x00072141) camera2_autofocus_pane_g2

0x4147,	// (0x0007214d) camera2_autofocus_pane_g3_ParamLimits

0x4147,	// (0x0007214d) camera2_autofocus_pane_g3

0x4153,	// (0x00072159) camera2_autofocus_pane_g4_ParamLimits

0x4153,	// (0x00072159) camera2_autofocus_pane_g4

0x415f,	// (0x00072165) camera2_autofocus_pane_g5_ParamLimits

0x415f,	// (0x00072165) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0007d70f) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0007d70f) camera2_autofocus_pane_g

0x4398,	// (0x0007239e) camera2_autofocus_pane_cp_g2

0x43a0,	// (0x000723a6) camera2_autofocus_pane_cp_g3

0x43a8,	// (0x000723ae) camera2_autofocus_pane_cp_g4

0x43b0,	// (0x000723b6) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0007d775) camera2_autofocus_pane_cp_g

0x4aff,	// (0x00072b05) popup_dialer_spcha_window

0x96e3,	// (0x000776e9) bg_popup_sub_pane_cp07

0xd269,	// (0x0007b26f) list_spcha_pane

0xd271,	// (0x0007b277) list_single_spcha_pane_ParamLimits

0xd271,	// (0x0007b277) list_single_spcha_pane

0x96e3,	// (0x000776e9) list_highlight_pane_cp06

0xd282,	// (0x0007b288) list_single_spcha_pane_t1

0xc46f,	// (0x0007a475) popup_call2_audio_out_window_g4_ParamLimits

0xc46f,	// (0x0007a475) popup_call2_audio_out_window_g4

0xf0b4,	// (0x0007d0ba) main_imed2_pane

0xa00a,	// (0x00078010) popup_imed_adjust2_window

0x351b,	// (0x00071521) popup_imed_trans_window_ParamLimits

0x351b,	// (0x00071521) popup_imed_trans_window

0xcca0,	// (0x0007aca6) popup_blid_sat_info2_window_t1

0xccae,	// (0x0007acb4) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0007d6a4) popup_blid_sat_info2_window_t

0x4ea8,	// (0x00072eae) aid_size_cell_colour_35

0x4ec8,	// (0x00072ece) aid_size_cell_colour_112

0x4ee8,	// (0x00072eee) aid_size_cell_effect

0xca30,	// (0x0007aa36) bg_tb_trans_pane_cp02

0xb058,	// (0x0007905e) heading_imed_pane

0x4f08,	// (0x00072f0e) listscroll_imed_pane

0xd290,	// (0x0007b296) heading_imed_pane_g1

0xd298,	// (0x0007b29e) heading_imed_pane_t1

0xd2a6,	// (0x0007b2ac) grid_imed_colour_35_pane_ParamLimits

0xd2a6,	// (0x0007b2ac) grid_imed_colour_35_pane

0x4f14,	// (0x00072f1a) grid_imed_effect_pane

0xd2c2,	// (0x0007b2c8) list_imed_aspect_pane

0x4f2b,	// (0x00072f31) scroll_pane_cp027_ParamLimits

0x4f2b,	// (0x00072f31) scroll_pane_cp027

0x4f3c,	// (0x00072f42) cell_imed_effect_pane_ParamLimits

0x4f3c,	// (0x00072f42) cell_imed_effect_pane

0xd2ca,	// (0x0007b2d0) cell_imed_colour_pane_ParamLimits

0xd2ca,	// (0x0007b2d0) cell_imed_colour_pane

0xd314,	// (0x0007b31a) cell_imed_colour_pane_g1_ParamLimits

0xd314,	// (0x0007b31a) cell_imed_colour_pane_g1

0xd325,	// (0x0007b32b) hgihlgiht_grid_pane_cp016_ParamLimits

0xd325,	// (0x0007b32b) hgihlgiht_grid_pane_cp016

0x4f67,	// (0x00072f6d) cell_imed_effect_pane_g1

0x4f6f,	// (0x00072f75) grid_highlight_pane_cp017

0xd336,	// (0x0007b33c) list_imed_single_pane_ParamLimits

0xd336,	// (0x0007b33c) list_imed_single_pane

0x96e3,	// (0x000776e9) list_highlight_pane_cp07

0xd34a,	// (0x0007b350) list_imed_aspect_pane_comp1_t1

0xca30,	// (0x0007aa36) bg_tb_trans_pane_cp05

0xd36c,	// (0x0007b372) popup_imed_adjust2_window_g1

0xd393,	// (0x0007b399) popup_imed_adjust2_window_t1

0xd3ab,	// (0x0007b3b1) slider_imed_adjust_pane

0xd3bf,	// (0x0007b3c5) slider_imed_adjust_pane_g1

0xd3cf,	// (0x0007b3d5) slider_imed_adjust_pane_g2

0xd3df,	// (0x0007b3e5) slider_imed_adjust_pane_g3

0xd3f0,	// (0x0007b3f6) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0007d7e8) slider_imed_adjust_pane_g

0x4f78,	// (0x00072f7e) aid_size_cell_clipart2

0xd401,	// (0x0007b407) grid_imed_clipart_pane

0xd40b,	// (0x0007b411) scroll_pane_cp031

0x4f84,	// (0x00072f8a) cell_imed_clipart_pane_ParamLimits

0x4f84,	// (0x00072f8a) cell_imed_clipart_pane

0x4fa1,	// (0x00072fa7) cell_imed_clipart_pane_g1

0x96e3,	// (0x000776e9) grid_highlight_pane_cp014

0x4c53,	// (0x00072c59) main_clock2_pane_g1_ParamLimits

0x4c53,	// (0x00072c59) main_clock2_pane_g1

0x4d94,	// (0x00072d9a) aid_call2_pane_cp10

0x4da6,	// (0x00072dac) aid_call_pane_cp10

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g1

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g2

0x4db8,	// (0x00072dbe) popup_clock_analogue_window_cp10_g3

0x4db8,	// (0x00072dbe) popup_clock_analogue_window_cp10_g4

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0007d7d6) popup_clock_analogue_window_cp10_g

0x4dce,	// (0x00072dd4) popup_clock_analogue_window_cp10_t1

0x4dff,	// (0x00072e05) clock_digital_number_pane_cp10_ParamLimits

0x4dff,	// (0x00072e05) clock_digital_number_pane_cp10

0x4e19,	// (0x00072e1f) clock_digital_number_pane_cp11_ParamLimits

0x4e19,	// (0x00072e1f) clock_digital_number_pane_cp11

0x4e33,	// (0x00072e39) clock_digital_number_pane_cp12_ParamLimits

0x4e33,	// (0x00072e39) clock_digital_number_pane_cp12

0x4e4f,	// (0x00072e55) clock_digital_number_pane_cp13_ParamLimits

0x4e4f,	// (0x00072e55) clock_digital_number_pane_cp13

0x4e6b,	// (0x00072e71) clock_digital_separator_pane_cp10_ParamLimits

0x4e6b,	// (0x00072e71) clock_digital_separator_pane_cp10

0x4e87,	// (0x00072e8d) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e87,	// (0x00072e8d) popup_clock_digital_window_cp02_t1

0x9d96,	// (0x00077d9c) clock_digital_number_pane_cp10_g1

0x9d96,	// (0x00077d9c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0007d7f1) clock_digital_number_pane_cp10_g

0x9d96,	// (0x00077d9c) clock_digital_separator_pane_cp10_g1

0x9d96,	// (0x00077d9c) clock_digital_separator_pane_g2_cp10

0xb5bc,	// (0x000795c2) navi_pane_vded_g4

0xb5c5,	// (0x000795cb) navi_pane_vded_g5

0xb5ce,	// (0x000795d4) navi_pane_vded_t1

0xf0b4,	// (0x0007d0ba) main_vded_pane

0x4faa,	// (0x00072fb0) main_vded_pane_g1

0x4fb6,	// (0x00072fbc) main_vded_pane_g2

0x4fc2,	// (0x00072fc8) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0007d7f6) main_vded_pane_g

0x4fce,	// (0x00072fd4) main_vded_pane_t1

0x4fdc,	// (0x00072fe2) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0007d7fd) main_vded_pane_t

0x4fea,	// (0x00072ff0) vded_slider_pane

0x4ff4,	// (0x00072ffa) vded_video_pane

0xd413,	// (0x0007b419) vded_video_pane_g1

0x5000,	// (0x00073006) vded_video_pane_g2

0xce68,	// (0x0007ae6e) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0007d802) vded_video_pane_g

0xd41d,	// (0x0007b423) vded_slider_pane_g1

0xcbb5,	// (0x0007abbb) vded_slider_pane_g2

0xd426,	// (0x0007b42c) vded_slider_pane_g3

0xd42f,	// (0x0007b435) vded_slider_pane_g4

0xd438,	// (0x0007b43e) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0007d809) vded_slider_pane_g

0x49d5,	// (0x000729db) mup3_rocker_pane_ParamLimits

0x49d5,	// (0x000729db) mup3_rocker_pane

0x5009,	// (0x0007300f) mup3_control_keys_pane_g1

0x5011,	// (0x00073017) mup3_control_keys_pane_g2

0x5019,	// (0x0007301f) mup3_control_keys_pane_g3

0x5021,	// (0x00073027) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0007d814) mup3_control_keys_pane_g

0xfef1,	// (0x0006def7) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfef1,	// (0x0006def7) popup_toolbar2_fixed_window_cp01

0x4a0b,	// (0x00072a11) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4a0b,	// (0x00072a11) popup_toolbar2_fixed_window_cp02

0xbdae,	// (0x00079db4) popup_call2_audio_second_window_t4_ParamLimits

0xbdae,	// (0x00079db4) popup_call2_audio_second_window_t4

0xc2dc,	// (0x0007a2e2) popup_call2_audio_first_window_t6_ParamLimits

0xc2dc,	// (0x0007a2e2) popup_call2_audio_first_window_t6

0xc572,	// (0x0007a578) popup_call2_audio_out_window_t6_ParamLimits

0xc572,	// (0x0007a578) popup_call2_audio_out_window_t6

0xf0b4,	// (0x0007d0ba) main_vitu_pane

0x5031,	// (0x00073037) aid_size_cell_itu_ParamLimits

0x5031,	// (0x00073037) aid_size_cell_itu

0xbce3,	// (0x00079ce9) bg_popup_window_pane_cp08_ParamLimits

0xbce3,	// (0x00079ce9) bg_popup_window_pane_cp08

0x5047,	// (0x0007304d) field_vitu_entry_pane_ParamLimits

0x5047,	// (0x0007304d) field_vitu_entry_pane

0x505e,	// (0x00073064) grid_vitu_function_pane_ParamLimits

0x505e,	// (0x00073064) grid_vitu_function_pane

0x5079,	// (0x0007307f) grid_vitu_itu_pane_ParamLimits

0x5079,	// (0x0007307f) grid_vitu_itu_pane

0x5097,	// (0x0007309d) cell_vitu_itu_pane_ParamLimits

0x5097,	// (0x0007309d) cell_vitu_itu_pane

0x50bd,	// (0x000730c3) cell_vitu_function_pane_ParamLimits

0x50bd,	// (0x000730c3) cell_vitu_function_pane

0xbce3,	// (0x00079ce9) bg_popup_sub_pane_cp08_ParamLimits

0xbce3,	// (0x00079ce9) bg_popup_sub_pane_cp08

0x50d8,	// (0x000730de) field_vitu_entry_pane_t1_ParamLimits

0x50d8,	// (0x000730de) field_vitu_entry_pane_t1

0xd459,	// (0x0007b45f) field_vitu_entry_pane_t2_ParamLimits

0xd459,	// (0x0007b45f) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0007d822) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0007d822) field_vitu_entry_pane_t

0xd476,	// (0x0007b47c) bg_button_pane_cp05_ParamLimits

0xd476,	// (0x0007b47c) bg_button_pane_cp05

0x50f8,	// (0x000730fe) cell_vitu_itu_pane_g1

0x5110,	// (0x00073116) cell_vitu_itu_pane_t1_ParamLimits

0x5110,	// (0x00073116) cell_vitu_itu_pane_t1

0x5122,	// (0x00073128) cell_vitu_itu_pane_t2_ParamLimits

0x5122,	// (0x00073128) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0007d827) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0007d827) cell_vitu_itu_pane_t

0xd484,	// (0x0007b48a) bg_button_pane_cp07

0x5157,	// (0x0007315d) cell_vitu_function_pane_g1

0x9e25,	// (0x00077e2b) main_calc_pane_g1

0xfcb8,	// (0x0006dcbe) aid_visual_content_pane

0xf0b4,	// (0x0007d0ba) main_vradio_pane

0x5160,	// (0x00073166) main_vradio_pane_g1_ParamLimits

0x5160,	// (0x00073166) main_vradio_pane_g1

0xd48e,	// (0x0007b494) main_vradio_pane_g2_ParamLimits

0xd48e,	// (0x0007b494) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0007d82e) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0007d82e) main_vradio_pane_g

0x5177,	// (0x0007317d) main_vradio_pane_t1_ParamLimits

0x5177,	// (0x0007317d) main_vradio_pane_t1

0x518c,	// (0x00073192) main_vradio_pane_t2_ParamLimits

0x518c,	// (0x00073192) main_vradio_pane_t2

0xd49b,	// (0x0007b4a1) main_vradio_pane_t3_ParamLimits

0xd49b,	// (0x0007b4a1) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0007d833) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0007d833) main_vradio_pane_t

0x51a1,	// (0x000731a7) vradio_rocker_control_pane_ParamLimits

0x51a1,	// (0x000731a7) vradio_rocker_control_pane

0x51b3,	// (0x000731b9) vradio_station_info_pane_ParamLimits

0x51b3,	// (0x000731b9) vradio_station_info_pane

0xd4af,	// (0x0007b4b5) vradio_frequency_info_pane_ParamLimits

0xd4af,	// (0x0007b4b5) vradio_frequency_info_pane

0xce68,	// (0x0007ae6e) vradio_station_info_pane_g1

0xd4be,	// (0x0007b4c4) vradio_station_info_pane_t1_ParamLimits

0xd4be,	// (0x0007b4c4) vradio_station_info_pane_t1

0xd4e0,	// (0x0007b4e6) vradio_station_info_pane_t2_ParamLimits

0xd4e0,	// (0x0007b4e6) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0007d83a) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0007d83a) vradio_station_info_pane_t

0xd4f2,	// (0x0007b4f8) vradio_tuning_pane

0xd4fa,	// (0x0007b500) vradio_rocker_control_pane_g1

0xd502,	// (0x0007b508) vradio_rocker_control_pane_g2

0xd50a,	// (0x0007b510) vradio_rocker_control_pane_g3

0xd512,	// (0x0007b518) vradio_rocker_control_pane_g4

0xd51a,	// (0x0007b520) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0007d83f) vradio_rocker_control_pane_g

0x51c3,	// (0x000731c9) vradio_frequency_info_pane_g1

0xd522,	// (0x0007b528) vradio_frequency_info_pane_t1_ParamLimits

0xd522,	// (0x0007b528) vradio_frequency_info_pane_t1

0x51cd,	// (0x000731d3) vradio_tuning_pane_g1

0x51d8,	// (0x000731de) vradio_tuning_pane_t1

0xfd15,	// (0x0006dd1b) area_side_right_pane_ParamLimits

0xfd15,	// (0x0006dd1b) area_side_right_pane

0xc9eb,	// (0x0007a9f1) status_small_pane_g1

0xc9f3,	// (0x0007a9f9) status_small_pane_g2

0xc9fc,	// (0x0007aa02) status_small_pane_g3

0xca05,	// (0x0007aa0b) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0007d5fa) status_small_pane_g

0xca0e,	// (0x0007aa14) status_small_pane_t1

0xf0b4,	// (0x0007d0ba) main_video3_pane

0xd536,	// (0x0007b53c) cams_zoom_vslider_pane

0xd53e,	// (0x0007b544) image3_wide_pane_ParamLimits

0xd53e,	// (0x0007b544) image3_wide_pane

0xd558,	// (0x0007b55e) image3_wide_small_pane

0xd564,	// (0x0007b56a) main_video3_pane_g1_ParamLimits

0xd564,	// (0x0007b56a) main_video3_pane_g1

0xd580,	// (0x0007b586) main_video3_pane_g2_ParamLimits

0xd580,	// (0x0007b586) main_video3_pane_g2

0x0001,

0xf844,	// (0x0007d84a) main_video3_pane_g_ParamLimits

0xf844,	// (0x0007d84a) main_video3_pane_g

0xd59c,	// (0x0007b5a2) main_video3_pane_t1_ParamLimits

0xd59c,	// (0x0007b5a2) main_video3_pane_t1

0xd5c7,	// (0x0007b5cd) main_video3_pane_t2_ParamLimits

0xd5c7,	// (0x0007b5cd) main_video3_pane_t2

0xd5f4,	// (0x0007b5fa) main_video3_pane_t3_ParamLimits

0xd5f4,	// (0x0007b5fa) main_video3_pane_t3

0x0002,

0xf849,	// (0x0007d84f) main_video3_pane_t_ParamLimits

0xf849,	// (0x0007d84f) main_video3_pane_t

0xd621,	// (0x0007b627) cams_zoom_vslider_pane_g1

0xd62a,	// (0x0007b630) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0007d856) cams_zoom_vslider_pane_g

0xd632,	// (0x0007b638) small_slider_vertical_pane

0xce68,	// (0x0007ae6e) small_slider_vertical_pane_g1

0xce68,	// (0x0007ae6e) small_slider_vertical_pane_g2

0xd63a,	// (0x0007b640) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0007d85b) small_slider_vertical_pane_g

0xf0b4,	// (0x0007d0ba) main_hwr_training_pane

0xd643,	// (0x0007b649) hwr_training_instruct_pane_ParamLimits

0xd643,	// (0x0007b649) hwr_training_instruct_pane

0x51e7,	// (0x000731ed) hwr_training_navi_pane_ParamLimits

0x51e7,	// (0x000731ed) hwr_training_navi_pane

0x5206,	// (0x0007320c) hwr_training_write_pane_ParamLimits

0x5206,	// (0x0007320c) hwr_training_write_pane

0x96e3,	// (0x000776e9) bg_frame_shadow_pane

0xd67a,	// (0x0007b680) hwr_training_write_pane_g1

0xd682,	// (0x0007b688) hwr_training_write_pane_g2

0xd68a,	// (0x0007b690) hwr_training_write_pane_g3

0xd692,	// (0x0007b698) hwr_training_write_pane_g4

0xd69a,	// (0x0007b6a0) hwr_training_write_pane_g5

0xd6a2,	// (0x0007b6a8) hwr_training_write_pane_g6

0xd6aa,	// (0x0007b6b0) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0007d862) hwr_training_write_pane_g

0xa102,	// (0x00078108) hwr_training_navi_pane_g1_ParamLimits

0xa102,	// (0x00078108) hwr_training_navi_pane_g1

0xa114,	// (0x0007811a) hwr_training_navi_pane_g2_ParamLimits

0xa114,	// (0x0007811a) hwr_training_navi_pane_g2

0xa126,	// (0x0007812c) hwr_training_navi_pane_g3_ParamLimits

0xa126,	// (0x0007812c) hwr_training_navi_pane_g3

0xa136,	// (0x0007813c) hwr_training_navi_pane_g4_ParamLimits

0xa136,	// (0x0007813c) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0007d871) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0007d871) hwr_training_navi_pane_g

0xa143,	// (0x00078149) hwr_training_navi_pane_t1

0x524e,	// (0x00073254) list_single_hwr_training_instruct_pane_ParamLimits

0x524e,	// (0x00073254) list_single_hwr_training_instruct_pane

0xd6b2,	// (0x0007b6b8) list_single_hwr_training_instruct_pane_t1

0xcda8,	// (0x0007adae) bg_frame_shadow_pane_g1

0xd6c1,	// (0x0007b6c7) bg_frame_shadow_pane_g2

0xd6c9,	// (0x0007b6cf) bg_frame_shadow_pane_g3

0xd6d1,	// (0x0007b6d7) bg_frame_shadow_pane_g4

0xd6d9,	// (0x0007b6df) bg_frame_shadow_pane_g5

0xd6e1,	// (0x0007b6e7) bg_frame_shadow_pane_g6

0xd6e9,	// (0x0007b6ef) bg_frame_shadow_pane_g7

0xaaaf,	// (0x00078ab5) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0007d87c) bg_frame_shadow_pane_g

0xf0b4,	// (0x0007d0ba) main_video_tele_dialer_pane

0x526a,	// (0x00073270) aid_size_cell_video_keypad_ParamLimits

0x526a,	// (0x00073270) aid_size_cell_video_keypad

0x5284,	// (0x0007328a) grid_video_dialer_keypad_pane_ParamLimits

0x5284,	// (0x0007328a) grid_video_dialer_keypad_pane

0x52d0,	// (0x000732d6) video_down_pane_cp_ParamLimits

0x52d0,	// (0x000732d6) video_down_pane_cp

0x5302,	// (0x00073308) cell_video_dialer_keypad_pane_ParamLimits

0x5302,	// (0x00073308) cell_video_dialer_keypad_pane

0xd6f1,	// (0x0007b6f7) bg_button_pane_cp08_ParamLimits

0xd6f1,	// (0x0007b6f7) bg_button_pane_cp08

0x5328,	// (0x0007332e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5328,	// (0x0007332e) cell_video_dialer_keypad_pane_g1

0x49bf,	// (0x000729c5) mup3_rocker2_pane_ParamLimits

0x49bf,	// (0x000729c5) mup3_rocker2_pane

0xce68,	// (0x0007ae6e) mup3_rocker2_pane_g1

0x33e8,	// (0x000713ee) main_dialer2_pane

0xf0b4,	// (0x0007d0ba) main_mp4_pane

0xa16f,	// (0x00078175) main_mp4_pane_g1_ParamLimits

0xa16f,	// (0x00078175) main_mp4_pane_g1

0xa16f,	// (0x00078175) main_mp4_pane_g2_ParamLimits

0xa16f,	// (0x00078175) main_mp4_pane_g2

0x5363,	// (0x00073369) main_mp4_pane_g3_ParamLimits

0x5363,	// (0x00073369) main_mp4_pane_g3

0xa17d,	// (0x00078183) main_mp4_pane_g4_ParamLimits

0xa17d,	// (0x00078183) main_mp4_pane_g4

0xa1ab,	// (0x000781b1) main_mp4_pane_g5_ParamLimits

0xa1ab,	// (0x000781b1) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0007d89c) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0007d89c) main_mp4_pane_g

0xa21f,	// (0x00078225) main_mp4_pane_t1_ParamLimits

0xa21f,	// (0x00078225) main_mp4_pane_t1

0xa27b,	// (0x00078281) main_mp4_pane_t2_ParamLimits

0xa27b,	// (0x00078281) main_mp4_pane_t2

0xd6fd,	// (0x0007b703) main_mp4_pane_t3_ParamLimits

0xd6fd,	// (0x0007b703) main_mp4_pane_t3

0xa2cd,	// (0x000782d3) main_mp4_pane_t4_ParamLimits

0xa2cd,	// (0x000782d3) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007d8ad) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007d8ad) main_mp4_pane_t

0xa30d,	// (0x00078313) mp4_progress_pane_ParamLimits

0xa30d,	// (0x00078313) mp4_progress_pane

0xa357,	// (0x0007835d) mp4_rocker_pane_ParamLimits

0xa357,	// (0x0007835d) mp4_rocker_pane

0xd72b,	// (0x0007b731) mp4_progress_pane_t1

0xd744,	// (0x0007b74a) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007d8b6) mp4_progress_pane_t

0xd75d,	// (0x0007b763) mup_progress_pane_cp04

0xd770,	// (0x0007b776) mp4_rocker_pane_g1

0x53ad,	// (0x000733b3) aid_cell_size_keypad2_ParamLimits

0x53ad,	// (0x000733b3) aid_cell_size_keypad2

0x53c3,	// (0x000733c9) dialer2_ne_pane_ParamLimits

0x53c3,	// (0x000733c9) dialer2_ne_pane

0x53db,	// (0x000733e1) grid_dialer2_keypad_pane_ParamLimits

0x53db,	// (0x000733e1) grid_dialer2_keypad_pane

0xcc47,	// (0x0007ac4d) bg_popup_call_pane_cp07_ParamLimits

0xcc47,	// (0x0007ac4d) bg_popup_call_pane_cp07

0x53f7,	// (0x000733fd) dialer2_ne_pane_t1_ParamLimits

0x53f7,	// (0x000733fd) dialer2_ne_pane_t1

0x5437,	// (0x0007343d) cell_dialer2_keypad_pane_ParamLimits

0x5437,	// (0x0007343d) cell_dialer2_keypad_pane

0xd78c,	// (0x0007b792) bg_button_pane_pane_cp04_ParamLimits

0xd78c,	// (0x0007b792) bg_button_pane_pane_cp04

0x545d,	// (0x00073463) cell_dialer2_keypad_pane_g1_ParamLimits

0x545d,	// (0x00073463) cell_dialer2_keypad_pane_g1

0x0eb1,	// (0x0006eeb7) aid_placing_vt_set_content_ParamLimits

0x0eb1,	// (0x0006eeb7) aid_placing_vt_set_content

0x0ed5,	// (0x0006eedb) aid_placing_vt_set_title_ParamLimits

0x0ed5,	// (0x0006eedb) aid_placing_vt_set_title

0xf0b4,	// (0x0007d0ba) main_image3_pane

0x5523,	// (0x00073529) area_side_right_pane_cp01_ParamLimits

0x5523,	// (0x00073529) area_side_right_pane_cp01

0xa16f,	// (0x00078175) main_image3_pane_g1_ParamLimits

0xa16f,	// (0x00078175) main_image3_pane_g1

0x553c,	// (0x00073542) main_image3_pane_g2_ParamLimits

0x553c,	// (0x00073542) main_image3_pane_g2

0x5564,	// (0x0007356a) main_image3_pane_g3_ParamLimits

0x5564,	// (0x0007356a) main_image3_pane_g3

0x558e,	// (0x00073594) main_image3_pane_g4_ParamLimits

0x558e,	// (0x00073594) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007d8c5) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007d8c5) main_image3_pane_g

0x55b8,	// (0x000735be) main_image3_pane_t1_ParamLimits

0x55b8,	// (0x000735be) main_image3_pane_t1

0x5610,	// (0x00073616) main_image3_pane_t2_ParamLimits

0x5610,	// (0x00073616) main_image3_pane_t2

0x5662,	// (0x00073668) main_image3_pane_t3_ParamLimits

0x5662,	// (0x00073668) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007d8ce) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007d8ce) main_image3_pane_t

0xbce3,	// (0x00079ce9) grid_sctrl_middle_pane_cp01_ParamLimits

0xbce3,	// (0x00079ce9) grid_sctrl_middle_pane_cp01

0x56ea,	// (0x000736f0) cell_sctrl_middle_pane_cp01_ParamLimits

0x56ea,	// (0x000736f0) cell_sctrl_middle_pane_cp01

0x5707,	// (0x0007370d) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5707,	// (0x0007370d) cell_sctrl_middle_pane_cp01_g1

0xf0b4,	// (0x0007d0ba) main_call4_pane

0x571c,	// (0x00073722) aid_size_button_call4_ParamLimits

0x571c,	// (0x00073722) aid_size_button_call4

0x574f,	// (0x00073755) call4_windows_pane_ParamLimits

0x574f,	// (0x00073755) call4_windows_pane

0x576e,	// (0x00073774) grid_call4_button_pane_ParamLimits

0x576e,	// (0x00073774) grid_call4_button_pane

0x57a5,	// (0x000737ab) call4_windows_conf_pane

0x57c0,	// (0x000737c6) popup_call4_audio_first_window_ParamLimits

0x57c0,	// (0x000737c6) popup_call4_audio_first_window

0x5812,	// (0x00073818) popup_call4_audio_second_window_ParamLimits

0x5812,	// (0x00073818) popup_call4_audio_second_window

0x582b,	// (0x00073831) popup_call4_audio_wait_window_ParamLimits

0x582b,	// (0x00073831) popup_call4_audio_wait_window

0x5839,	// (0x0007383f) cell_call4_button_pane_ParamLimits

0x5839,	// (0x0007383f) cell_call4_button_pane

0x5860,	// (0x00073866) bg_button_pane_cp09_ParamLimits

0x5860,	// (0x00073866) bg_button_pane_cp09

0x586c,	// (0x00073872) cell_call4_button_pane_g1_ParamLimits

0x586c,	// (0x00073872) cell_call4_button_pane_g1

0x5892,	// (0x00073898) cell_call4_button_pane_t1_ParamLimits

0x5892,	// (0x00073898) cell_call4_button_pane_t1

0xd7a0,	// (0x0007b7a6) popup_call4_audio_conf_window_ParamLimits

0xd7a0,	// (0x0007b7a6) popup_call4_audio_conf_window

0x4a21,	// (0x00072a27) mup3_progress_pane_t1_ParamLimits

0x4a40,	// (0x00072a46) mup3_progress_pane_t2_ParamLimits

0xd11e,	// (0x0007b124) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0007d79e) mup3_progress_pane_t_ParamLimits

0xd13b,	// (0x0007b141) mup_progress_pane_cp03_ParamLimits

0x5029,	// (0x0007302f) mup3_control_keys_pane_g4_copy1

0xa33b,	// (0x00078341) mp4_rocker2_pane_ParamLimits

0xa33b,	// (0x00078341) mp4_rocker2_pane

0xd7ba,	// (0x0007b7c0) mp4_rocker2_pane_g1

0xd7c2,	// (0x0007b7c8) mp4_rocker2_pane_g2

0xa3dd,	// (0x000783e3) mp4_rocker2_pane_g3

0xa3e5,	// (0x000783eb) mp4_rocker2_pane_g4

0xa3ed,	// (0x000783f3) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007d8d7) mp4_rocker2_pane_g

0xf0b4,	// (0x0007d0ba) main_camera4_pane

0xf0b4,	// (0x0007d0ba) main_video4_pane

0x529e,	// (0x000732a4) main_video_tele_dialer_pane_t1_ParamLimits

0x529e,	// (0x000732a4) main_video_tele_dialer_pane_t1

0x52b7,	// (0x000732bd) main_video_tele_dialer_pane_t2_ParamLimits

0x52b7,	// (0x000732bd) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0007d88d) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0007d88d) main_video_tele_dialer_pane_t

0x58d0,	// (0x000738d6) cam4_autofocus_pane_ParamLimits

0x58d0,	// (0x000738d6) cam4_autofocus_pane

0x58e6,	// (0x000738ec) cam4_image_uncrop_pane_ParamLimits

0x58e6,	// (0x000738ec) cam4_image_uncrop_pane

0x58ff,	// (0x00073905) cam4_indicators_pane_ParamLimits

0x58ff,	// (0x00073905) cam4_indicators_pane

0x592f,	// (0x00073935) main_camera4_pane_g1_ParamLimits

0x592f,	// (0x00073935) main_camera4_pane_g1

0x5941,	// (0x00073947) main_camera4_pane_g2_ParamLimits

0x5941,	// (0x00073947) main_camera4_pane_g2

0x5954,	// (0x0007395a) main_camera4_pane_g3_ParamLimits

0x5954,	// (0x0007395a) main_camera4_pane_g3

0x5967,	// (0x0007396d) main_camera4_pane_g4_ParamLimits

0x5967,	// (0x0007396d) main_camera4_pane_g4

0x597a,	// (0x00073980) main_camera4_pane_g5_ParamLimits

0x597a,	// (0x00073980) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007d8e2) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007d8e2) main_camera4_pane_g

0x599e,	// (0x000739a4) main_camera4_pane_t1_ParamLimits

0x599e,	// (0x000739a4) main_camera4_pane_t1

0xa413,	// (0x00078419) bg_tb_trans_pane_cp06

0xa429,	// (0x0007842f) cam4_indicators_pane_g1

0xa43a,	// (0x00078440) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007d8fd) cam4_indicators_pane_g

0xa452,	// (0x00078458) cam4_indicators_pane_t1

0x5a02,	// (0x00073a08) main_video4_pane_g1_ParamLimits

0x5a02,	// (0x00073a08) main_video4_pane_g1

0x5a11,	// (0x00073a17) main_video4_pane_g2_ParamLimits

0x5a11,	// (0x00073a17) main_video4_pane_g2

0x5a20,	// (0x00073a26) main_video4_pane_g3_ParamLimits

0x5a20,	// (0x00073a26) main_video4_pane_g3

0x5a2f,	// (0x00073a35) main_video4_pane_g4_ParamLimits

0x5a2f,	// (0x00073a35) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007d904) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007d904) main_video4_pane_g

0x5a4d,	// (0x00073a53) vid4_indicators_pane_ParamLimits

0x5a4d,	// (0x00073a53) vid4_indicators_pane

0x5a7b,	// (0x00073a81) video4_image_uncrop_cif_pane_ParamLimits

0x5a7b,	// (0x00073a81) video4_image_uncrop_cif_pane

0x5a95,	// (0x00073a9b) video4_image_uncrop_nhd_pane_ParamLimits

0x5a95,	// (0x00073a9b) video4_image_uncrop_nhd_pane

0x58e6,	// (0x000738ec) video4_image_uncrop_vga_pane_ParamLimits

0x58e6,	// (0x000738ec) video4_image_uncrop_vga_pane

0x96ed,	// (0x000776f3) bg_tb_trans_pane_cp07

0xa480,	// (0x00078486) vid4_indicators_pane_g1

0xa496,	// (0x0007849c) vid4_indicators_pane_g2

0xa4aa,	// (0x000784b0) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007d90f) vid4_indicators_pane_g

0xa4db,	// (0x000784e1) vid4_indicators_pane_t1

0x5aab,	// (0x00073ab1) cam4_autofocus_pane_g1

0x5ab3,	// (0x00073ab9) cam4_autofocus_pane_g2

0x5abb,	// (0x00073ac1) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007d91a) cam4_autofocus_pane_g

0x5ac3,	// (0x00073ac9) cam4_autofocus_pane_g3_copy1

0x52e6,	// (0x000732ec) video_down_pane_cp_t1

0x52f4,	// (0x000732fa) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0007d892) video_down_pane_cp_t

0x96ed,	// (0x000776f3) popup_vitu2_window_ParamLimits

0x96ed,	// (0x000776f3) popup_vitu2_window

0x5acb,	// (0x00073ad1) aid_size_cell2_itu2_ParamLimits

0x5acb,	// (0x00073ad1) aid_size_cell2_itu2

0x5af1,	// (0x00073af7) aid_size_cell_itu2_ParamLimits

0x5af1,	// (0x00073af7) aid_size_cell_itu2

0x5b51,	// (0x00073b57) bg_popup_window_pane_cp09_ParamLimits

0x5b51,	// (0x00073b57) bg_popup_window_pane_cp09

0x5b5f,	// (0x00073b65) field_vitu2_entry_pane_ParamLimits

0x5b5f,	// (0x00073b65) field_vitu2_entry_pane

0x5b87,	// (0x00073b8d) grid_vitu2_function_pane_ParamLimits

0x5b87,	// (0x00073b8d) grid_vitu2_function_pane

0x5bd8,	// (0x00073bde) grid_vitu2_itu_pane_ParamLimits

0x5bd8,	// (0x00073bde) grid_vitu2_itu_pane

0x5c68,	// (0x00073c6e) cell_vitu2_itu_pane_ParamLimits

0x5c68,	// (0x00073c6e) cell_vitu2_itu_pane

0x5c95,	// (0x00073c9b) cell_vitu2_function_pane_ParamLimits

0x5c95,	// (0x00073c9b) cell_vitu2_function_pane

0xd7ca,	// (0x0007b7d0) bg_popup_call_pane_cp08_ParamLimits

0xd7ca,	// (0x0007b7d0) bg_popup_call_pane_cp08

0xd7e1,	// (0x0007b7e7) field_vitu2_entry_pane_g1

0xd7ed,	// (0x0007b7f3) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007d921) field_vitu2_entry_pane_g

0x5cd9,	// (0x00073cdf) field_vitu2_entry_pane_t1_ParamLimits

0x5cd9,	// (0x00073cdf) field_vitu2_entry_pane_t1

0xa4f2,	// (0x000784f8) field_vitu2_entry_pane_t2_ParamLimits

0xa4f2,	// (0x000784f8) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007d928) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007d928) field_vitu2_entry_pane_t

0x5d08,	// (0x00073d0e) bg_button_pane_cp010_ParamLimits

0x5d08,	// (0x00073d0e) bg_button_pane_cp010

0xa50f,	// (0x00078515) cell_vitu2_itu_pane_g1

0x5d24,	// (0x00073d2a) cell_vitu2_itu_pane_t1_ParamLimits

0x5d24,	// (0x00073d2a) cell_vitu2_itu_pane_t1

0xfb7c,	// (0x0006db82) cell_vitu2_itu_pane_t2_ParamLimits

0xfb7c,	// (0x0006db82) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007d932) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007d932) cell_vitu2_itu_pane_t

0x96ed,	// (0x000776f3) bg_button_pane_cp011

0x5d82,	// (0x00073d88) cell_vitu2_function_pane_g1

0xf0b4,	// (0x0007d0ba) main_myfav_hc_pane

0x56b2,	// (0x000736b8) popup_image3_note_pane_ParamLimits

0x56b2,	// (0x000736b8) popup_image3_note_pane

0x56ce,	// (0x000736d4) popup_image3_tool_bar_pane_ParamLimits

0x56ce,	// (0x000736d4) popup_image3_tool_bar_pane

0xfc0a,	// (0x0006dc10) cell_vitu2_itu_pane_t3_ParamLimits

0xfc0a,	// (0x0006dc10) cell_vitu2_itu_pane_t3

0x96e3,	// (0x000776e9) bg_popup_trans_pane

0xd80f,	// (0x0007b815) grid_image3_tool_bar_pane

0xd819,	// (0x0007b81f) bg_popup_trans_pane_g1

0xae10,	// (0x00078e16) bg_popup_trans_pane_g2

0xd821,	// (0x0007b827) bg_popup_trans_pane_g3

0xd829,	// (0x0007b82f) bg_popup_trans_pane_g4

0xd831,	// (0x0007b837) bg_popup_trans_pane_g5

0xd839,	// (0x0007b83f) bg_popup_trans_pane_g6

0xd841,	// (0x0007b847) bg_popup_trans_pane_g7

0xd849,	// (0x0007b84f) bg_popup_trans_pane_g8

0xadf0,	// (0x00078df6) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007d939) bg_popup_trans_pane_g

0xd851,	// (0x0007b857) cell_image3_tool_bar_pane_ParamLimits

0xd851,	// (0x0007b857) cell_image3_tool_bar_pane

0xce68,	// (0x0007ae6e) cell_image3_tool_bar_pane_g1

0x96e3,	// (0x000776e9) bg_popup_trans_pane_cp1

0xd867,	// (0x0007b86d) popup_image3_note_pane_t1

0xd875,	// (0x0007b87b) popup_image3_note_pane_t2

0xd883,	// (0x0007b889) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007d94c) popup_image3_note_pane_t

0xd893,	// (0x0007b899) popup_image3_note_pane_t3_copy1

0x5d96,	// (0x00073d9c) bg_myfav_hc_instruction_pane_ParamLimits

0x5d96,	// (0x00073d9c) bg_myfav_hc_instruction_pane

0x5dae,	// (0x00073db4) cell_myfav_contact_pane_ParamLimits

0x5dae,	// (0x00073db4) cell_myfav_contact_pane

0x5dca,	// (0x00073dd0) cell_myfav_contact_pane_cp1_ParamLimits

0x5dca,	// (0x00073dd0) cell_myfav_contact_pane_cp1

0x5de2,	// (0x00073de8) cell_myfav_contact_pane_cp2_ParamLimits

0x5de2,	// (0x00073de8) cell_myfav_contact_pane_cp2

0x5dfa,	// (0x00073e00) cell_myfav_contact_pane_cp3_ParamLimits

0x5dfa,	// (0x00073e00) cell_myfav_contact_pane_cp3

0x5e11,	// (0x00073e17) cell_myfav_contact_pane_cp4_ParamLimits

0x5e11,	// (0x00073e17) cell_myfav_contact_pane_cp4

0x5e29,	// (0x00073e2f) cell_myfav_contact_pane_cp5_ParamLimits

0x5e29,	// (0x00073e2f) cell_myfav_contact_pane_cp5

0x5e3d,	// (0x00073e43) cell_myfav_contact_pane_cp6_ParamLimits

0x5e3d,	// (0x00073e43) cell_myfav_contact_pane_cp6

0x5e53,	// (0x00073e59) cell_myfav_contact_pane_cp7_ParamLimits

0x5e53,	// (0x00073e59) cell_myfav_contact_pane_cp7

0xd8a1,	// (0x0007b8a7) listscroll_gen_pane_cp05

0x5e6b,	// (0x00073e71) main_myfav_hc_pane_g1_ParamLimits

0x5e6b,	// (0x00073e71) main_myfav_hc_pane_g1

0x5e85,	// (0x00073e8b) main_myfav_hc_pane_g2_ParamLimits

0x5e85,	// (0x00073e8b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007d953) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007d953) main_myfav_hc_pane_g

0x5eb9,	// (0x00073ebf) main_myfav_hc_pane_t1_ParamLimits

0x5eb9,	// (0x00073ebf) main_myfav_hc_pane_t1

0xd8aa,	// (0x0007b8b0) main_myfav_hc_pane_t2_ParamLimits

0xd8aa,	// (0x0007b8b0) main_myfav_hc_pane_t2

0xd8bc,	// (0x0007b8c2) main_myfav_hc_pane_t3_ParamLimits

0xd8bc,	// (0x0007b8c2) main_myfav_hc_pane_t3

0x5ed0,	// (0x00073ed6) main_myfav_hc_pane_t4_ParamLimits

0x5ed0,	// (0x00073ed6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007d95a) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007d95a) main_myfav_hc_pane_t

0xce68,	// (0x0007ae6e) bg_myfav_hc_instruction_pane_g1

0xd8ce,	// (0x0007b8d4) cell_myfav_contact_pane_g1_ParamLimits

0xd8ce,	// (0x0007b8d4) cell_myfav_contact_pane_g1

0xd8ce,	// (0x0007b8d4) cell_myfav_contact_pane_g2_ParamLimits

0xd8ce,	// (0x0007b8d4) cell_myfav_contact_pane_g2

0xd8da,	// (0x0007b8e0) cell_myfav_contact_pane_g3_ParamLimits

0xd8da,	// (0x0007b8e0) cell_myfav_contact_pane_g3

0xd108,	// (0x0007b10e) cell_myfav_contact_pane_g4_ParamLimits

0xd108,	// (0x0007b10e) cell_myfav_contact_pane_g4

0xd8e7,	// (0x0007b8ed) cell_myfav_contact_pane_g5_ParamLimits

0xd8e7,	// (0x0007b8ed) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007d965) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007d965) cell_myfav_contact_pane_g

0x5e9f,	// (0x00073ea5) main_myfav_hc_pane_g3_ParamLimits

0x5e9f,	// (0x00073ea5) main_myfav_hc_pane_g3

0xfe4a,	// (0x0006de50) popup_adpt_find_window

0x5efa,	// (0x00073f00) afind_page_pane_ParamLimits

0x5efa,	// (0x00073f00) afind_page_pane

0x5f0f,	// (0x00073f15) aid_size_cell_afind_ParamLimits

0x5f0f,	// (0x00073f15) aid_size_cell_afind

0x5f2d,	// (0x00073f33) bg_popup_sub_pane_cp09_ParamLimits

0x5f2d,	// (0x00073f33) bg_popup_sub_pane_cp09

0x5f3a,	// (0x00073f40) find_pane_cp01_ParamLimits

0x5f3a,	// (0x00073f40) find_pane_cp01

0xd8f3,	// (0x0007b8f9) grid_afind_control_pane_ParamLimits

0xd8f3,	// (0x0007b8f9) grid_afind_control_pane

0x5f47,	// (0x00073f4d) grid_afind_pane_ParamLimits

0x5f47,	// (0x00073f4d) grid_afind_pane

0x5f69,	// (0x00073f6f) cell_afind_pane_ParamLimits

0x5f69,	// (0x00073f6f) cell_afind_pane

0xce68,	// (0x0007ae6e) afind_page_pane_g1

0x5fd6,	// (0x00073fdc) afind_page_pane_g2

0x5fdf,	// (0x00073fe5) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007d970) afind_page_pane_g

0x5fe8,	// (0x00073fee) afind_page_pane_t1

0xd907,	// (0x0007b90d) cell_afind_grid_control_pane_ParamLimits

0xd907,	// (0x0007b90d) cell_afind_grid_control_pane

0xd78c,	// (0x0007b792) bg_button_pane_cp69_ParamLimits

0xd78c,	// (0x0007b792) bg_button_pane_cp69

0x6008,	// (0x0007400e) cell_afind_pane_g1_ParamLimits

0x6008,	// (0x0007400e) cell_afind_pane_g1

0x6015,	// (0x0007401b) cell_afind_pane_t1_ParamLimits

0x6015,	// (0x0007401b) cell_afind_pane_t1

0xac05,	// (0x00078c0b) bg_button_pane_cp72

0xd916,	// (0x0007b91c) cell_afind_grid_control_pane_g1

0x2e78,	// (0x00070e7e) aid_image_placing_area_ParamLimits

0x2e78,	// (0x00070e7e) aid_image_placing_area

0xd441,	// (0x0007b447) field_vitu_entry_pane_g1_ParamLimits

0xd441,	// (0x0007b447) field_vitu_entry_pane_g1

0xd44d,	// (0x0007b453) field_vitu_entry_pane_g2_ParamLimits

0xd44d,	// (0x0007b453) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0007d81d) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0007d81d) field_vitu_entry_pane_g

0x50f8,	// (0x000730fe) cell_vitu_itu_pane_g1_ParamLimits

0x513a,	// (0x00073140) cell_vitu_itu_pane_t3_ParamLimits

0x513a,	// (0x00073140) cell_vitu_itu_pane_t3

0xd72b,	// (0x0007b731) mp4_progress_pane_t1_ParamLimits

0xd744,	// (0x0007b74a) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007d8b6) mp4_progress_pane_t_ParamLimits

0xd75d,	// (0x0007b763) mup_progress_pane_cp04_ParamLimits

0x5ee4,	// (0x00073eea) main_myfav_hc_pane_t5_ParamLimits

0x5ee4,	// (0x00073eea) main_myfav_hc_pane_t5

0xfccc,	// (0x0006dcd2) aid_zoom_text_primary

0xfe4a,	// (0x0006de50) popup_adpt_find_window_ParamLimits

0x96ed,	// (0x000776f3) main_cam_set_pane

0x5918,	// (0x0007391e) cam4_zoom_pane_ParamLimits

0x5918,	// (0x0007391e) cam4_zoom_pane

0x6027,	// (0x0007402d) main_cam_set_pane_g1_ParamLimits

0x6027,	// (0x0007402d) main_cam_set_pane_g1

0x6035,	// (0x0007403b) main_cam_set_pane_g2_ParamLimits

0x6035,	// (0x0007403b) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007d977) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007d977) main_cam_set_pane_g

0x6056,	// (0x0007405c) main_cam_set_pane_t1_ParamLimits

0x6056,	// (0x0007405c) main_cam_set_pane_t1

0x6071,	// (0x00074077) main_cset_listscroll_pane_ParamLimits

0x6071,	// (0x00074077) main_cset_listscroll_pane

0x6095,	// (0x0007409b) main_cset_slider_pane_ParamLimits

0x6095,	// (0x0007409b) main_cset_slider_pane

0xd927,	// (0x0007b92d) main_cset_list_pane_ParamLimits

0xd927,	// (0x0007b92d) main_cset_list_pane

0xd937,	// (0x0007b93d) scroll_pane_cp028

0x60bf,	// (0x000740c5) aid_area_touch_slider

0x60db,	// (0x000740e1) cset_slider_pane

0x6105,	// (0x0007410b) main_cset_slider_pane_g1

0x611a,	// (0x00074120) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007d97c) main_cset_slider_pane_g

0xd970,	// (0x0007b976) main_cset_slider_pane_t1

0x61dc,	// (0x000741e2) main_cset_slider_pane_t2

0x61f6,	// (0x000741fc) main_cset_slider_pane_t3

0x6210,	// (0x00074216) main_cset_slider_pane_t4

0x622a,	// (0x00074230) main_cset_slider_pane_t5

0x6248,	// (0x0007424e) main_cset_slider_pane_t6

0x625f,	// (0x00074265) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007d9a1) main_cset_slider_pane_t

0x636b,	// (0x00074371) cset_list_set_pane_ParamLimits

0x636b,	// (0x00074371) cset_list_set_pane

0x637f,	// (0x00074385) aid_position_infowindow_above

0x6387,	// (0x0007438d) aid_position_infowindow_below

0x638f,	// (0x00074395) cset_list_set_pane_g1_ParamLimits

0x638f,	// (0x00074395) cset_list_set_pane_g1

0x639b,	// (0x000743a1) cset_list_set_pane_g3_ParamLimits

0x639b,	// (0x000743a1) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007d9c0) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007d9c0) cset_list_set_pane_g

0x63aa,	// (0x000743b0) cset_list_set_pane_t1_ParamLimits

0x63aa,	// (0x000743b0) cset_list_set_pane_t1

0xbce3,	// (0x00079ce9) list_highlight_pane_cp021_ParamLimits

0xbce3,	// (0x00079ce9) list_highlight_pane_cp021

0xb732,	// (0x00079738) cset_slider_pane_g1

0xb744,	// (0x0007974a) cset_slider_pane_g2

0xb73b,	// (0x00079741) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007d9c5) cset_slider_pane_g

0xa521,	// (0x00078527) aid_area_touch_cam4_zoom

0x63bf,	// (0x000743c5) cam4_zoom_cont_pane

0x63c7,	// (0x000743cd) cam4_zoom_pane_g1

0x63cf,	// (0x000743d5) cam4_zoom_pane_g2

0x63d7,	// (0x000743dd) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007d9cc) cam4_zoom_pane_g

0xa52a,	// (0x00078530) cam4_zoom_cont_pane_g1

0xa533,	// (0x00078539) cam4_zoom_cont_pane_g2

0xa53c,	// (0x00078542) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007d9d3) cam4_zoom_cont_pane_g

0x573a,	// (0x00073740) call4_image_pane_ParamLimits

0x573a,	// (0x00073740) call4_image_pane

0x57a5,	// (0x000737ab) call4_windows_conf_pane_ParamLimits

0x57f0,	// (0x000737f6) popup_call4_audio_in_window_ParamLimits

0x57f0,	// (0x000737f6) popup_call4_audio_in_window

0x96e3,	// (0x000776e9) bg_popup_call2_act_pane_cp02

0xd798,	// (0x0007b79e) call4_list_conf_pane

0xce68,	// (0x0007ae6e) call4_image_pane_g1

0xce68,	// (0x0007ae6e) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0007d6de) call4_image_pane_g

0xda10,	// (0x0007ba16) list_single_graphic_popup_conf4_pane_ParamLimits

0xda10,	// (0x0007ba16) list_single_graphic_popup_conf4_pane

0x96e3,	// (0x000776e9) list_highlight_pane_cp022

0xda25,	// (0x0007ba2b) list_single_graphic_popup_conf4_pane_g1

0xb32a,	// (0x00079330) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007d9da) list_single_graphic_popup_conf4_pane_g

0xda2d,	// (0x0007ba33) list_single_graphic_popup_conf4_pane_t1

0x0fec,	// (0x0006eff2) popup_vtel_slider_window_ParamLimits

0x0fec,	// (0x0006eff2) popup_vtel_slider_window

0xd77a,	// (0x0007b780) dialer2_ne_pane_t2_ParamLimits

0xd77a,	// (0x0007b780) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007d8bb) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007d8bb) dialer2_ne_pane_t

0xcc47,	// (0x0007ac4d) bg_popup_sub_pane_cp010_ParamLimits

0xcc47,	// (0x0007ac4d) bg_popup_sub_pane_cp010

0x63e0,	// (0x000743e6) popup_vtel_slider_window_g1_ParamLimits

0x63e0,	// (0x000743e6) popup_vtel_slider_window_g1

0x63f3,	// (0x000743f9) popup_vtel_slider_window_g2_ParamLimits

0x63f3,	// (0x000743f9) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007d9df) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007d9df) popup_vtel_slider_window_g

0x6449,	// (0x0007444f) vtel_slider_pane_ParamLimits

0x6449,	// (0x0007444f) vtel_slider_pane

0x646b,	// (0x00074471) vtel_slider_pane_g1_ParamLimits

0x646b,	// (0x00074471) vtel_slider_pane_g1

0x647f,	// (0x00074485) vtel_slider_pane_g2_ParamLimits

0x647f,	// (0x00074485) vtel_slider_pane_g2

0x6497,	// (0x0007449d) vtel_slider_pane_g3_ParamLimits

0x6497,	// (0x0007449d) vtel_slider_pane_g3

0x646b,	// (0x00074471) vtel_slider_pane_g4_ParamLimits

0x646b,	// (0x00074471) vtel_slider_pane_g4

0x64ad,	// (0x000744b3) vtel_slider_pane_g5_ParamLimits

0x64ad,	// (0x000744b3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007d9e8) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007d9e8) vtel_slider_pane_g

0x96ed,	// (0x000776f3) main_gallery2_pane

0x5b1d,	// (0x00073b23) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b1d,	// (0x00073b23) aid_size_row_itut2_dropdow_list

0x5baf,	// (0x00073bb5) grid_vitu2_function_top_pane_ParamLimits

0x5baf,	// (0x00073bb5) grid_vitu2_function_top_pane

0x5c13,	// (0x00073c19) popup_vitu2_dropdown_list_window_ParamLimits

0x5c13,	// (0x00073c19) popup_vitu2_dropdown_list_window

0x5c3c,	// (0x00073c42) popup_vitu2_match_list_window

0x64d1,	// (0x000744d7) cell_vitu2_function_top_pane_ParamLimits

0x64d1,	// (0x000744d7) cell_vitu2_function_top_pane

0x64f3,	// (0x000744f9) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64f3,	// (0x000744f9) cell_vitu2_function_top_pane_cp01

0x650f,	// (0x00074515) cell_vitu2_function_top_wide_pane_ParamLimits

0x650f,	// (0x00074515) cell_vitu2_function_top_wide_pane

0x96ed,	// (0x000776f3) bg_button_pane_cp012

0x652b,	// (0x00074531) cell_vitu2_function_top_pane_g1

0xa545,	// (0x0007854b) bg_button_pane_cp013_ParamLimits

0xa545,	// (0x0007854b) bg_button_pane_cp013

0x653f,	// (0x00074545) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x653f,	// (0x00074545) cell_vitu2_function_top_wide_pane_g1

0x96ed,	// (0x000776f3) bg_popup_sub_pane_cp20

0x6557,	// (0x0007455d) list_vitu2_match_list_pane

0xd819,	// (0x0007b81f) bg_popup_sub_pane_cp20_g1

0xd821,	// (0x0007b827) bg_popup_sub_pane_cp20_g2

0xae10,	// (0x00078e16) bg_popup_sub_pane_cp20_g3

0xd829,	// (0x0007b82f) bg_popup_sub_pane_cp20_g4

0xadf0,	// (0x00078df6) bg_popup_sub_pane_cp20_g5

0xda43,	// (0x0007ba49) bg_popup_sub_pane_cp20_g6

0xd839,	// (0x0007b83f) bg_popup_sub_pane_cp20_g7

0xd841,	// (0x0007b847) bg_popup_sub_pane_cp20_g8

0xd849,	// (0x0007b84f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007d9f3) bg_popup_sub_pane_cp20_g

0xa561,	// (0x00078567) list_vitu2_match_list_item_pane_ParamLimits

0xa561,	// (0x00078567) list_vitu2_match_list_item_pane

0xa573,	// (0x00078579) list_vitu2_match_list_item_pane_t1

0xf0b4,	// (0x0007d0ba) bg_popup_sub_pane_cp21

0xa581,	// (0x00078587) grid_vitu2_dropdown_list_pane

0x65c1,	// (0x000745c7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65c1,	// (0x000745c7) cell_vitu2_dropdown_list_char_pane

0x65e4,	// (0x000745ea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65e4,	// (0x000745ea) cell_vitu2_dropdown_list_ctrl_pane

0xda4b,	// (0x0007ba51) cell_vitu2_dropdown_list_char_pane_g1

0xda54,	// (0x0007ba5a) cell_vitu2_dropdown_list_char_pane_g2

0xda5d,	// (0x0007ba63) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007da10) cell_vitu2_dropdown_list_char_pane_g

0x6612,	// (0x00074618) cell_vitu2_dropdown_list_char_pane_t1

0x6620,	// (0x00074626) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6620,	// (0x00074626) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6630,	// (0x00074636) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6630,	// (0x00074636) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6641,	// (0x00074647) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6641,	// (0x00074647) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6651,	// (0x00074657) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6651,	// (0x00074657) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa413,	// (0x00078419) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa413,	// (0x00078419) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007da17) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007da17) cell_vitu2_dropdown_list_ctrl_pane_g

0x666d,	// (0x00074673) aid_size_cell_gallery2_ParamLimits

0x666d,	// (0x00074673) aid_size_cell_gallery2

0x668b,	// (0x00074691) grid_gallery2_pane_ParamLimits

0x668b,	// (0x00074691) grid_gallery2_pane

0x66a5,	// (0x000746ab) scroll_pane_cp029_ParamLimits

0x66a5,	// (0x000746ab) scroll_pane_cp029

0x66b6,	// (0x000746bc) cell_gallery2_pane_ParamLimits

0x66b6,	// (0x000746bc) cell_gallery2_pane

0xda66,	// (0x0007ba6c) cell_gallery2_pane_g2

0x671a,	// (0x00074720) cell_gallery2_pane_g3

0xda6e,	// (0x0007ba74) cell_gallery2_pane_g4

0xda76,	// (0x0007ba7c) cell_gallery2_pane_g5

0xab9e,	// (0x00078ba4) grid_highlight_pane_cp10

0x5c3c,	// (0x00073c42) popup_vitu2_match_list_window_ParamLimits

0x5c53,	// (0x00073c59) popup_vitu2_query_window_ParamLimits

0x5c53,	// (0x00073c59) popup_vitu2_query_window

0xf0b4,	// (0x0007d0ba) bg_vitu2_candi_button_pane

0xda4b,	// (0x0007ba51) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xda54,	// (0x0007ba5a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda5d,	// (0x0007ba63) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6722,	// (0x00074728) bg_button_pane_cp015

0x6736,	// (0x0007473c) bg_button_pane_cp016

0x6749,	// (0x0007474f) bg_button_pane_cp017

0xca30,	// (0x0007aa36) bg_popup_sub_pane_cp22

0xda7e,	// (0x0007ba84) popup_vitu2_query_window_g1

0x678e,	// (0x00074794) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007da22) popup_vitu2_query_window_g

0x67ad,	// (0x000747b3) popup_vitu2_query_window_t1_ParamLimits

0x67ad,	// (0x000747b3) popup_vitu2_query_window_t1

0x67e2,	// (0x000747e8) popup_vitu2_query_window_t2_ParamLimits

0x67e2,	// (0x000747e8) popup_vitu2_query_window_t2

0x67f4,	// (0x000747fa) popup_vitu2_query_window_t3_ParamLimits

0x67f4,	// (0x000747fa) popup_vitu2_query_window_t3

0x681c,	// (0x00074822) popup_vitu2_query_window_t4_ParamLimits

0x681c,	// (0x00074822) popup_vitu2_query_window_t4

0x683d,	// (0x00074843) popup_vitu2_query_window_t5_ParamLimits

0x683d,	// (0x00074843) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007da29) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007da29) popup_vitu2_query_window_t

0xd91f,	// (0x0007b925) main_cset_text_pane

0x60bf,	// (0x000740c5) aid_area_touch_slider_ParamLimits

0x60db,	// (0x000740e1) cset_slider_pane_ParamLimits

0x6105,	// (0x0007410b) main_cset_slider_pane_g1_ParamLimits

0x611a,	// (0x00074120) main_cset_slider_pane_g2_ParamLimits

0xd940,	// (0x0007b946) main_cset_slider_pane_g3_ParamLimits

0xd940,	// (0x0007b946) main_cset_slider_pane_g3

0x612f,	// (0x00074135) main_cset_slider_pane_g4_ParamLimits

0x612f,	// (0x00074135) main_cset_slider_pane_g4

0x613e,	// (0x00074144) main_cset_slider_pane_g5_ParamLimits

0x613e,	// (0x00074144) main_cset_slider_pane_g5

0x614c,	// (0x00074152) main_cset_slider_pane_g6_ParamLimits

0x614c,	// (0x00074152) main_cset_slider_pane_g6

0xf976,	// (0x0007d97c) main_cset_slider_pane_g_ParamLimits

0xd970,	// (0x0007b976) main_cset_slider_pane_t1_ParamLimits

0x61dc,	// (0x000741e2) main_cset_slider_pane_t2_ParamLimits

0x61f6,	// (0x000741fc) main_cset_slider_pane_t3_ParamLimits

0x6210,	// (0x00074216) main_cset_slider_pane_t4_ParamLimits

0x622a,	// (0x00074230) main_cset_slider_pane_t5_ParamLimits

0x6248,	// (0x0007424e) main_cset_slider_pane_t6_ParamLimits

0x625f,	// (0x00074265) main_cset_slider_pane_t7_ParamLimits

0x628d,	// (0x00074293) main_cset_slider_pane_t8_ParamLimits

0x628d,	// (0x00074293) main_cset_slider_pane_t8

0x62b5,	// (0x000742bb) main_cset_slider_pane_t9_ParamLimits

0x62b5,	// (0x000742bb) main_cset_slider_pane_t9

0x62dd,	// (0x000742e3) main_cset_slider_pane_t10_ParamLimits

0x62dd,	// (0x000742e3) main_cset_slider_pane_t10

0x6305,	// (0x0007430b) main_cset_slider_pane_t11_ParamLimits

0x6305,	// (0x0007430b) main_cset_slider_pane_t11

0x632f,	// (0x00074335) main_cset_slider_pane_t12_ParamLimits

0x632f,	// (0x00074335) main_cset_slider_pane_t12

0x634c,	// (0x00074352) main_cset_slider_pane_t13_ParamLimits

0x634c,	// (0x00074352) main_cset_slider_pane_t13

0xf99b,	// (0x0007d9a1) main_cset_slider_pane_t_ParamLimits

0x96e3,	// (0x000776e9) bg_popup_sub_pane_cp011

0xda8a,	// (0x0007ba90) main_cset_text_pane_g1

0xda92,	// (0x0007ba98) main_cset_text_pane_t1

0xdaa0,	// (0x0007baa6) main_cset_text_pane_t2

0xdaae,	// (0x0007bab4) main_cset_text_pane_t3

0xdabc,	// (0x0007bac2) main_cset_text_pane_t4

0xdaca,	// (0x0007bad0) main_cset_text_pane_t5

0xdad8,	// (0x0007bade) main_cset_text_pane_t6

0xdae6,	// (0x0007baec) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007da38) main_cset_text_pane_t

0xf0b4,	// (0x0007d0ba) main_cam4_burst_pane

0xf0b4,	// (0x0007d0ba) main_cam5_pane

0x5ff6,	// (0x00073ffc) bg_button_pane_cp019

0x5fff,	// (0x00074005) bg_button_pane_cp020

0xd94c,	// (0x0007b952) main_cset_slider_pane_g7_ParamLimits

0xd94c,	// (0x0007b952) main_cset_slider_pane_g7

0xd958,	// (0x0007b95e) main_cset_slider_pane_g8_ParamLimits

0xd958,	// (0x0007b95e) main_cset_slider_pane_g8

0x6160,	// (0x00074166) main_cset_slider_pane_g9_ParamLimits

0x6160,	// (0x00074166) main_cset_slider_pane_g9

0x616c,	// (0x00074172) main_cset_slider_pane_g10_ParamLimits

0x616c,	// (0x00074172) main_cset_slider_pane_g10

0x6178,	// (0x0007417e) main_cset_slider_pane_g11_ParamLimits

0x6178,	// (0x0007417e) main_cset_slider_pane_g11

0x6184,	// (0x0007418a) main_cset_slider_pane_g12_ParamLimits

0x6184,	// (0x0007418a) main_cset_slider_pane_g12

0x6190,	// (0x00074196) main_cset_slider_pane_g13_ParamLimits

0x6190,	// (0x00074196) main_cset_slider_pane_g13

0x619c,	// (0x000741a2) main_cset_slider_pane_g14_ParamLimits

0x619c,	// (0x000741a2) main_cset_slider_pane_g14

0x61a8,	// (0x000741ae) main_cset_slider_pane_g15_ParamLimits

0x61a8,	// (0x000741ae) main_cset_slider_pane_g15

0xd99e,	// (0x0007b9a4) main_cset_slider_pane_t14_ParamLimits

0xd99e,	// (0x0007b9a4) main_cset_slider_pane_t14

0xd9d7,	// (0x0007b9dd) main_cset_slider_pane_t15_ParamLimits

0xd9d7,	// (0x0007b9dd) main_cset_slider_pane_t15

0x68b4,	// (0x000748ba) aid_cam4_burst_size_cell_ParamLimits

0x68b4,	// (0x000748ba) aid_cam4_burst_size_cell

0x68d4,	// (0x000748da) grid_cam4_burst_pane_ParamLimits

0x68d4,	// (0x000748da) grid_cam4_burst_pane

0x690e,	// (0x00074914) linegrid_cam4_burst_pane_ParamLimits

0x690e,	// (0x00074914) linegrid_cam4_burst_pane

0xdaf4,	// (0x0007bafa) scroll_pane_cp30_ParamLimits

0xdaf4,	// (0x0007bafa) scroll_pane_cp30

0x6930,	// (0x00074936) cell_cam4_burst_pane_ParamLimits

0x6930,	// (0x00074936) cell_cam4_burst_pane

0xdb00,	// (0x0007bb06) linegrid_cam4_burst_pane_g1_ParamLimits

0xdb00,	// (0x0007bb06) linegrid_cam4_burst_pane_g1

0x6985,	// (0x0007498b) linegrid_cam4_burst_pane_g2_ParamLimits

0x6985,	// (0x0007498b) linegrid_cam4_burst_pane_g2

0xdb0d,	// (0x0007bb13) linegrid_cam4_burst_pane_g3_ParamLimits

0xdb0d,	// (0x0007bb13) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007da47) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007da47) linegrid_cam4_burst_pane_g

0x6996,	// (0x0007499c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6996,	// (0x0007499c) linegrid_cam4_burst_pane_g3_copy1

0xdb1a,	// (0x0007bb20) linegrid_cam4_burst_pane_g4_ParamLimits

0xdb1a,	// (0x0007bb20) linegrid_cam4_burst_pane_g4

0x69b4,	// (0x000749ba) linegrid_cam4_burst_pane_g5_ParamLimits

0x69b4,	// (0x000749ba) linegrid_cam4_burst_pane_g5

0x69c5,	// (0x000749cb) linegrid_cam4_burst_pane_g6_ParamLimits

0x69c5,	// (0x000749cb) linegrid_cam4_burst_pane_g6

0xdb27,	// (0x0007bb2d) linegrid_cam4_burst_pane_g7_ParamLimits

0xdb27,	// (0x0007bb2d) linegrid_cam4_burst_pane_g7

0x69dc,	// (0x000749e2) cell_cam4_burst_pane_g1

0xdb40,	// (0x0007bb46) main_cam5_pane_t1_ParamLimits

0xdb40,	// (0x0007bb46) main_cam5_pane_t1

0xdb52,	// (0x0007bb58) main_cam5_pane_t2_ParamLimits

0xdb52,	// (0x0007bb58) main_cam5_pane_t2

0xdb64,	// (0x0007bb6a) main_cam5_pane_t3_ParamLimits

0xdb64,	// (0x0007bb6a) main_cam5_pane_t3

0xdb76,	// (0x0007bb7c) main_cam5_pane_t4_ParamLimits

0xdb76,	// (0x0007bb7c) main_cam5_pane_t4

0xdb8e,	// (0x0007bb94) main_cam5_pane_t5_ParamLimits

0xdb8e,	// (0x0007bb94) main_cam5_pane_t5

0xdba2,	// (0x0007bba8) main_cam5_pane_t6_ParamLimits

0xdba2,	// (0x0007bba8) main_cam5_pane_t6

0xdbb6,	// (0x0007bbbc) main_cam5_pane_t7_ParamLimits

0xdbb6,	// (0x0007bbbc) main_cam5_pane_t7

0xdbc8,	// (0x0007bbce) main_cam5_pane_t8_ParamLimits

0xdbc8,	// (0x0007bbce) main_cam5_pane_t8

0xdbe6,	// (0x0007bbec) main_cam5_pane_t9_ParamLimits

0xdbe6,	// (0x0007bbec) main_cam5_pane_t9

0xdbf8,	// (0x0007bbfe) main_cam5_pane_t10_ParamLimits

0xdbf8,	// (0x0007bbfe) main_cam5_pane_t10

0xdc0a,	// (0x0007bc10) main_cam5_pane_t11_ParamLimits

0xdc0a,	// (0x0007bc10) main_cam5_pane_t11

0xdc1e,	// (0x0007bc24) main_cam5_pane_t12_ParamLimits

0xdc1e,	// (0x0007bc24) main_cam5_pane_t12

0xdc35,	// (0x0007bc3b) main_cam5_pane_t13_ParamLimits

0xdc35,	// (0x0007bc3b) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007da53) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007da53) main_cam5_pane_t

0xfed5,	// (0x0006dedb) popup_scut_keymap_window_ParamLimits

0xfed5,	// (0x0006dedb) popup_scut_keymap_window

0x69ef,	// (0x000749f5) aid_size_cell_brow_shortcut

0xab9e,	// (0x00078ba4) bg_popup_window_pane_cp010

0x69fb,	// (0x00074a01) grid_scut_pane

0x6a07,	// (0x00074a0d) cell_scut_pane_ParamLimits

0x6a07,	// (0x00074a0d) cell_scut_pane

0x6a20,	// (0x00074a26) cell_scut_pane_g1

0xdc58,	// (0x0007bc5e) cell_scut_pane_t1

0xdc67,	// (0x0007bc6d) cell_scut_pane_t2

0x6a29,	// (0x00074a2f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007da6e) cell_scut_pane_t

0x45d0,	// (0x000725d6) main_mup3_pane_g8_ParamLimits

0x45d0,	// (0x000725d6) main_mup3_pane_g8

0x5b39,	// (0x00073b3f) area_vitu2_query_pane_ParamLimits

0x5b39,	// (0x00073b3f) area_vitu2_query_pane

0x675c,	// (0x00074762) input_focus_pane_cp08

0xdc76,	// (0x0007bc7c) area_vitu2_query_pane_g1

0x6a37,	// (0x00074a3d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007da75) area_vitu2_query_pane_g

0x6a48,	// (0x00074a4e) area_vitu2_query_pane_t1_ParamLimits

0x6a48,	// (0x00074a4e) area_vitu2_query_pane_t1

0x6a5c,	// (0x00074a62) area_vitu2_query_pane_t2_ParamLimits

0x6a5c,	// (0x00074a62) area_vitu2_query_pane_t2

0x6a70,	// (0x00074a76) area_vitu2_query_pane_t3_ParamLimits

0x6a70,	// (0x00074a76) area_vitu2_query_pane_t3

0xa589,	// (0x0007858f) area_vitu2_query_pane_t4_ParamLimits

0xa589,	// (0x0007858f) area_vitu2_query_pane_t4

0xa5b1,	// (0x000785b7) area_vitu2_query_pane_t5_ParamLimits

0xa5b1,	// (0x000785b7) area_vitu2_query_pane_t5

0xa5d9,	// (0x000785df) area_vitu2_query_pane_t6_ParamLimits

0xa5d9,	// (0x000785df) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007da7a) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007da7a) area_vitu2_query_pane_t

0x6a98,	// (0x00074a9e) bg_button_pane_cp018

0x6aa6,	// (0x00074aac) bg_button_pane_cp021

0x6ab2,	// (0x00074ab8) bg_button_pane_cp022

0x6ac3,	// (0x00074ac9) input_focus_pane_cp09

0xb439,	// (0x0007943f) aid_size_touch_mv_arrow_left

0xb464,	// (0x0007946a) aid_size_touch_mv_arrow_right

0x61c0,	// (0x000741c6) main_cset_slider_pane_g16_ParamLimits

0x61c0,	// (0x000741c6) main_cset_slider_pane_g16

0x61ce,	// (0x000741d4) main_cset_slider_pane_g17_ParamLimits

0x61ce,	// (0x000741d4) main_cset_slider_pane_g17

0x69dc,	// (0x000749e2) cell_cam4_burst_pane_g1_ParamLimits

0x96e3,	// (0x000776e9) compa_mode_pane

0x6403,	// (0x00074409) popup_vtel_slider_window_g3_ParamLimits

0x6403,	// (0x00074409) popup_vtel_slider_window_g3

0x641a,	// (0x00074420) popup_vtel_slider_window_g4_ParamLimits

0x641a,	// (0x00074420) popup_vtel_slider_window_g4

0x6431,	// (0x00074437) popup_vtel_slider_window_t1_ParamLimits

0x6431,	// (0x00074437) popup_vtel_slider_window_t1

0xf0b4,	// (0x0007d0ba) main_cl_pane

0xa00a,	// (0x00078010) popup_imed_adjust2_window_ParamLimits

0xca30,	// (0x0007aa36) bg_tb_trans_pane_cp05_ParamLimits

0xd36c,	// (0x0007b372) popup_imed_adjust2_window_g1_ParamLimits

0xd37b,	// (0x0007b381) popup_imed_adjust2_window_g2_ParamLimits

0xd37b,	// (0x0007b381) popup_imed_adjust2_window_g2

0xd387,	// (0x0007b38d) popup_imed_adjust2_window_g3_ParamLimits

0xd387,	// (0x0007b38d) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0007d7e1) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0007d7e1) popup_imed_adjust2_window_g

0xd393,	// (0x0007b399) popup_imed_adjust2_window_t1_ParamLimits

0xd3ab,	// (0x0007b3b1) slider_imed_adjust_pane_ParamLimits

0xd3bf,	// (0x0007b3c5) slider_imed_adjust_pane_g1_ParamLimits

0xd3cf,	// (0x0007b3d5) slider_imed_adjust_pane_g2_ParamLimits

0xd3df,	// (0x0007b3e5) slider_imed_adjust_pane_g3_ParamLimits

0xd3f0,	// (0x0007b3f6) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0007d7e8) slider_imed_adjust_pane_g_ParamLimits

0x58b8,	// (0x000738be) aid_touch_area_cam4_ParamLimits

0x58b8,	// (0x000738be) aid_touch_area_cam4

0xa3f5,	// (0x000783fb) battery_pane_cp01

0x598b,	// (0x00073991) main_camera4_pane_g6_ParamLimits

0x598b,	// (0x00073991) main_camera4_pane_g6

0x59b5,	// (0x000739bb) main_camera4_pane_t2_ParamLimits

0x59b5,	// (0x000739bb) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007d8ef) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007d8ef) main_camera4_pane_t

0x59ea,	// (0x000739f0) aid_touch_area_vid4_ParamLimits

0x59ea,	// (0x000739f0) aid_touch_area_vid4

0x5a3e,	// (0x00073a44) main_video4_pane_g5_ParamLimits

0x5a3e,	// (0x00073a44) main_video4_pane_g5

0x5a63,	// (0x00073a69) vid4_progress_pane_ParamLimits

0x5a63,	// (0x00073a69) vid4_progress_pane

0xd964,	// (0x0007b96a) main_cset_slider_pane_g18_ParamLimits

0xd964,	// (0x0007b96a) main_cset_slider_pane_g18

0xdb34,	// (0x0007bb3a) cell_cam4_burst_pane_g2_ParamLimits

0xdb34,	// (0x0007bb3a) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007da4e) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007da4e) cell_cam4_burst_pane_g

0xa9ed,	// (0x000789f3) bg_cl_pane_ParamLimits

0xa9ed,	// (0x000789f3) bg_cl_pane

0x6ad4,	// (0x00074ada) cl_header_pane_ParamLimits

0x6ad4,	// (0x00074ada) cl_header_pane

0x6ae8,	// (0x00074aee) cl_listscroll_pane_ParamLimits

0x6ae8,	// (0x00074aee) cl_listscroll_pane

0xdc82,	// (0x0007bc88) bg_cl_pane_g1

0xdc8a,	// (0x0007bc90) bg_cl_pane_g2

0xdc92,	// (0x0007bc98) bg_cl_pane_g3

0xdc9a,	// (0x0007bca0) bg_cl_pane_g4

0xdca2,	// (0x0007bca8) bg_cl_pane_g5

0xdcaa,	// (0x0007bcb0) bg_cl_pane_g6

0xdcb2,	// (0x0007bcb8) bg_cl_pane_g7

0xdcba,	// (0x0007bcc0) bg_cl_pane_g8

0xdcc2,	// (0x0007bcc8) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007da89) bg_cl_pane_g

0x6af8,	// (0x00074afe) aid_height_cl_leading_ParamLimits

0x6af8,	// (0x00074afe) aid_height_cl_leading

0x6b04,	// (0x00074b0a) aid_height_cl_text_ParamLimits

0x6b04,	// (0x00074b0a) aid_height_cl_text

0xbce3,	// (0x00079ce9) bg_cl_header_pane_ParamLimits

0xbce3,	// (0x00079ce9) bg_cl_header_pane

0x6b23,	// (0x00074b29) cl_header_pane_g1_ParamLimits

0x6b23,	// (0x00074b29) cl_header_pane_g1

0x6b39,	// (0x00074b3f) cl_header_pane_t1_ParamLimits

0x6b39,	// (0x00074b3f) cl_header_pane_t1

0xdcca,	// (0x0007bcd0) cl_list_pane

0xd937,	// (0x0007b93d) hc_scroll_pane_cp01

0xadf0,	// (0x00078df6) bg_cl_header_pane_g1

0xd819,	// (0x0007b81f) bg_cl_header_pane_g2

0xae10,	// (0x00078e16) bg_cl_header_pane_g3

0xd829,	// (0x0007b82f) bg_cl_header_pane_g4

0xd821,	// (0x0007b827) bg_cl_header_pane_g5

0xda43,	// (0x0007ba49) bg_cl_header_pane_g6

0xd841,	// (0x0007b847) bg_cl_header_pane_g7

0xd849,	// (0x0007b84f) bg_cl_header_pane_g8

0xd839,	// (0x0007b83f) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007da9c) bg_cl_header_pane_g

0x6b52,	// (0x00074b58) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b52,	// (0x00074b58) hc_cl_list_double_graphic_heading_pane

0x6b65,	// (0x00074b6b) hc_cl_list_single_graphic_pane_ParamLimits

0x6b65,	// (0x00074b6b) hc_cl_list_single_graphic_pane

0x6b7d,	// (0x00074b83) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b7d,	// (0x00074b83) hc_cl_list_single_graphic_pane_g1

0x6b89,	// (0x00074b8f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b89,	// (0x00074b8f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007daaf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007daaf) hc_cl_list_single_graphic_pane_g

0x6b9d,	// (0x00074ba3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b9d,	// (0x00074ba3) hc_cl_list_single_graphic_pane_t1

0x6b7d,	// (0x00074b83) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b7d,	// (0x00074b83) hc_cl_list_double_graphic_heading_pane_g1

0x6bb2,	// (0x00074bb8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6bb2,	// (0x00074bb8) hc_cl_list_double_graphic_heading_pane_g2

0x6bc6,	// (0x00074bcc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6bc6,	// (0x00074bcc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007dab4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007dab4) hc_cl_list_double_graphic_heading_pane_g

0x6bda,	// (0x00074be0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bda,	// (0x00074be0) hc_cl_list_double_graphic_heading_pane_t1

0x6bef,	// (0x00074bf5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bef,	// (0x00074bf5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007dabb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007dabb) hc_cl_list_double_graphic_heading_pane_t

0xa62d,	// (0x00078633) vid4_progress_pane_g1

0xa63d,	// (0x00078643) vid4_progress_pane_g2

0x6c04,	// (0x00074c0a) vid4_progress_pane_g3

0xa43a,	// (0x00078440) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007dac0) vid4_progress_pane_g

0x6c16,	// (0x00074c1c) vid4_progress_pane_t1

0xa64d,	// (0x00078653) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007dacb) vid4_progress_pane_t

0x6c2e,	// (0x00074c34) wait_bar_pane_cp07

0xcc55,	// (0x0007ac5b) blid_firmament_pane_ParamLimits

0xcc98,	// (0x0007ac9e) popup_blid_sat_info2_window_g1

0xccbc,	// (0x0007acc2) popup_blid_sat_info2_window_t3

0xccca,	// (0x0007acd0) popup_blid_sat_info2_window_t4

0xccd8,	// (0x0007acde) popup_blid_sat_info2_window_t5

0xcce6,	// (0x0007acec) popup_blid_sat_info2_window_t6

0xccf6,	// (0x0007acfc) popup_blid_sat_info2_window_t7

0xcd04,	// (0x0007ad0a) popup_blid_sat_info2_window_t8

0xcd12,	// (0x0007ad18) popup_blid_sat_info2_window_t9

0xcd20,	// (0x0007ad26) popup_blid_sat_info2_window_t10

0xcde8,	// (0x0007adee) aid_firma_cardinal_ParamLimits

0xcdfc,	// (0x0007ae02) blid_firmament_pane_t1_ParamLimits

0xce13,	// (0x0007ae19) blid_firmament_pane_t2_ParamLimits

0xce2a,	// (0x0007ae30) blid_firmament_pane_t3_ParamLimits

0xce41,	// (0x0007ae47) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0007d6d5) blid_firmament_pane_t_ParamLimits

0xce58,	// (0x0007ae5e) blid_sat_info_pane_ParamLimits

0x96ed,	// (0x000776f3) main_cam_set_pane_ParamLimits

0x4ea8,	// (0x00072eae) aid_size_cell_colour_35_ParamLimits

0x4ec8,	// (0x00072ece) aid_size_cell_colour_112_ParamLimits

0x4ee8,	// (0x00072eee) aid_size_cell_effect_ParamLimits

0xca30,	// (0x0007aa36) bg_tb_trans_pane_cp02_ParamLimits

0xb058,	// (0x0007905e) heading_imed_pane_ParamLimits

0x4f08,	// (0x00072f0e) listscroll_imed_pane_ParamLimits

0xc058,	// (0x0007a05e) popup_call2_audio_first_window_g5_ParamLimits

0xc058,	// (0x0007a05e) popup_call2_audio_first_window_g5

0x54c5,	// (0x000734cb) aid_size_touch_image3_arrow_left_ParamLimits

0x54c5,	// (0x000734cb) aid_size_touch_image3_arrow_left

0x54f1,	// (0x000734f7) aid_size_touch_image3_arrow_right_ParamLimits

0x54f1,	// (0x000734f7) aid_size_touch_image3_arrow_right

0xa662,	// (0x00078668) vid4_progress_pane_t3

0x5221,	// (0x00073227) main_hwr_training_symbol_option_pane_ParamLimits

0x5221,	// (0x00073227) main_hwr_training_symbol_option_pane

0xd665,	// (0x0007b66b) popup_hwr_training_preview_window_ParamLimits

0xd665,	// (0x0007b66b) popup_hwr_training_preview_window

0x5241,	// (0x00073247) hwr_training_navi_pane_g5_ParamLimits

0x5241,	// (0x00073247) hwr_training_navi_pane_g5

0xd807,	// (0x0007b80d) popup_char_count_window

0x96ed,	// (0x000776f3) bg_popup_sub_pane_cp20_ParamLimits

0x6557,	// (0x0007455d) list_vitu2_match_list_pane_ParamLimits

0x6566,	// (0x0007456c) vitu2_page_scroll_pane_ParamLimits

0x6566,	// (0x0007456c) vitu2_page_scroll_pane

0xdcdc,	// (0x0007bce2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdcdc,	// (0x0007bce2) list_single_hwr_training_symbol_option_pane

0xdcef,	// (0x0007bcf5) list_single_hwr_training_symbol_option_pane_g1

0xdcf7,	// (0x0007bcfd) list_single_hwr_training_symbol_option_pane_t1

0xdd05,	// (0x0007bd0b) bg_button_pane_cp023

0xdd0e,	// (0x0007bd14) bg_button_pane_cp024

0x6c70,	// (0x00074c76) vitu2_page_scroll_pane_g1

0x6c78,	// (0x00074c7e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007dad2) vitu2_page_scroll_pane_g

0x6c82,	// (0x00074c88) vitu2_page_scroll_pane_t1

0xdd41,	// (0x0007bd47) popup_char_count_window_g1

0xdd4a,	// (0x0007bd50) popup_char_count_window_g2

0xdd53,	// (0x0007bd59) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007dad7) popup_char_count_window_g

0xdd5c,	// (0x0007bd62) popup_char_count_window_t1

0xf0b4,	// (0x0007d0ba) main_vded2_pane

0xd358,	// (0x0007b35e) aid_size_cell_imed_line

0xd362,	// (0x0007b368) grid_imed_line_width_pane

0xa4bd,	// (0x000784c3) vid4_indicators_pane_g4

0xdd6a,	// (0x0007bd70) cell_imed_line_width_pane_ParamLimits

0xdd6a,	// (0x0007bd70) cell_imed_line_width_pane

0xdd80,	// (0x0007bd86) cell_imed_line_width_pane_g1

0xd022,	// (0x0007b028) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007dade) cell_imed_line_width_pane_g

0x6c91,	// (0x00074c97) main_vded2_pane_g1_ParamLimits

0x6c91,	// (0x00074c97) main_vded2_pane_g1

0x6cac,	// (0x00074cb2) main_vded2_pane_g2_ParamLimits

0x6cac,	// (0x00074cb2) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007dae3) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007dae3) main_vded2_pane_g

0x6cbe,	// (0x00074cc4) vded2_slider_pane_ParamLimits

0x6cbe,	// (0x00074cc4) vded2_slider_pane

0x6cce,	// (0x00074cd4) aid_size_touch_vded2_end

0x6cd8,	// (0x00074cde) aid_size_touch_vded2_playhead

0xdd89,	// (0x0007bd8f) aid_size_touch_vded2_start

0xdd91,	// (0x0007bd97) vded2_slider_bg_pane

0xdd9a,	// (0x0007bda0) vded2_slider_pane_g1

0xdda3,	// (0x0007bda9) vded2_slider_pane_g2

0x6ce2,	// (0x00074ce8) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007dae8) vded2_slider_pane_g

0xddab,	// (0x0007bdb1) vded2_slider_bg_pane_g1

0xddb4,	// (0x0007bdba) vded2_slider_bg_pane_g2

0xddbd,	// (0x0007bdc3) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007daef) vded2_slider_bg_pane_g

0x2ab2,	// (0x00070ab8) aid_postcard_touch_down_pane_ParamLimits

0x2ab2,	// (0x00070ab8) aid_postcard_touch_down_pane

0x2aca,	// (0x00070ad0) aid_postcard_touch_up_pane_ParamLimits

0x2aca,	// (0x00070ad0) aid_postcard_touch_up_pane

0xf0b4,	// (0x0007d0ba) main_blid2_pane

0x9fec,	// (0x00077ff2) popup_blid2_search_window

0x96e3,	// (0x000776e9) blid2_gps_pane

0x96e3,	// (0x000776e9) blid2_navig_pane

0x96e3,	// (0x000776e9) blid2_search_pane

0x96e3,	// (0x000776e9) blid2_tripm_pane

0x6ced,	// (0x00074cf3) blid2_search_pane_g1_ParamLimits

0x6ced,	// (0x00074cf3) blid2_search_pane_g1

0x6d00,	// (0x00074d06) blid2_search_pane_t1_ParamLimits

0x6d00,	// (0x00074d06) blid2_search_pane_t1

0x6d12,	// (0x00074d18) aid_size_cell_blid2_gps_ParamLimits

0x6d12,	// (0x00074d18) aid_size_cell_blid2_gps

0x6d2a,	// (0x00074d30) blid2_gps_pane_g1_ParamLimits

0x6d2a,	// (0x00074d30) blid2_gps_pane_g1

0x6d3e,	// (0x00074d44) grid_blid2_satellite_pane_ParamLimits

0x6d3e,	// (0x00074d44) grid_blid2_satellite_pane

0x6d56,	// (0x00074d5c) blid2_navig_pane_g1_ParamLimits

0x6d56,	// (0x00074d5c) blid2_navig_pane_g1

0x6d62,	// (0x00074d68) blid2_navig_pane_t1_ParamLimits

0x6d62,	// (0x00074d68) blid2_navig_pane_t1

0x6d7d,	// (0x00074d83) blid2_navig_pane_t2_ParamLimits

0x6d7d,	// (0x00074d83) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007daf6) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007daf6) blid2_navig_pane_t

0x6d98,	// (0x00074d9e) blid2_navig_ring_pane_ParamLimits

0x6d98,	// (0x00074d9e) blid2_navig_ring_pane

0x6db3,	// (0x00074db9) blid2_speed_pane_ParamLimits

0x6db3,	// (0x00074db9) blid2_speed_pane

0x6dbf,	// (0x00074dc5) blid2_tripm_pane_g1_ParamLimits

0x6dbf,	// (0x00074dc5) blid2_tripm_pane_g1

0x6dda,	// (0x00074de0) blid2_tripm_pane_g2_ParamLimits

0x6dda,	// (0x00074de0) blid2_tripm_pane_g2

0x6dee,	// (0x00074df4) blid2_tripm_pane_g3_ParamLimits

0x6dee,	// (0x00074df4) blid2_tripm_pane_g3

0x6e02,	// (0x00074e08) blid2_tripm_pane_g4_ParamLimits

0x6e02,	// (0x00074e08) blid2_tripm_pane_g4

0x6e16,	// (0x00074e1c) blid2_tripm_pane_g5_ParamLimits

0x6e16,	// (0x00074e1c) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007dafb) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007dafb) blid2_tripm_pane_g

0x6e3c,	// (0x00074e42) blid2_tripm_pane_t1_ParamLimits

0x6e3c,	// (0x00074e42) blid2_tripm_pane_t1

0x6e55,	// (0x00074e5b) blid2_tripm_pane_t2_ParamLimits

0x6e55,	// (0x00074e5b) blid2_tripm_pane_t2

0x6e6e,	// (0x00074e74) blid2_tripm_pane_t3_ParamLimits

0x6e6e,	// (0x00074e74) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007db08) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007db08) blid2_tripm_pane_t

0x6eb5,	// (0x00074ebb) cell_blid2_satellite_pane_ParamLimits

0x6eb5,	// (0x00074ebb) cell_blid2_satellite_pane

0x6ed1,	// (0x00074ed7) cell_blid2_satellite_pane_g1

0xddc6,	// (0x0007bdcc) cell_blid2_satellite_pane_t1

0xce68,	// (0x0007ae6e) blid2_speed_pane_g1

0xddd4,	// (0x0007bdda) blid2_speed_pane_t1

0xdde2,	// (0x0007bde8) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007db11) blid2_speed_pane_t

0xce68,	// (0x0007ae6e) blid2_navig_ring_pane_g1

0x6eda,	// (0x00074ee0) blid2_navig_ring_pane_g2

0x6ee2,	// (0x00074ee8) blid2_navig_ring_pane_g3

0x6eea,	// (0x00074ef0) blid2_navig_ring_pane_g4

0x6ef2,	// (0x00074ef8) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007db16) blid2_navig_ring_pane_g

0x96e3,	// (0x000776e9) bg_popup_window_pane_cp011

0xddf0,	// (0x0007bdf6) popup_blid2_search_window_g1

0xddf8,	// (0x0007bdfe) popup_blid2_search_window_t1

0xde06,	// (0x0007be0c) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007db21) popup_blid2_search_window_t

0xacff,	// (0x00078d05) main_browser_pane_g1

0xa9ed,	// (0x000789f3) main_browser_pane_ParamLimits

0x96ed,	// (0x000776f3) bg_button_pane_cp011_ParamLimits

0x5d82,	// (0x00073d88) cell_vitu2_function_pane_g1_ParamLimits

0xca30,	// (0x0007aa36) bg_popup_sub_pane_cp22_ParamLimits

0x675c,	// (0x00074762) input_focus_pane_cp08_ParamLimits

0x6773,	// (0x00074779) popup_vitu2_query_button_pane_ParamLimits

0x6773,	// (0x00074779) popup_vitu2_query_button_pane

0x6784,	// (0x0007478a) popup_vitu2_query_input_button_pane

0xda7e,	// (0x0007ba84) popup_vitu2_query_window_g1_ParamLimits

0x678e,	// (0x00074794) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007da22) popup_vitu2_query_window_g_ParamLimits

0x96e3,	// (0x000776e9) bg_button_pane_cp026

0x6efa,	// (0x00074f00) popup_vitu2_query_input_button_pane_g1

0x96e3,	// (0x000776e9) bg_button_pane_cp025

0xde14,	// (0x0007be1a) popup_vitu2_query_button_pane_t1

0x41c0,	// (0x000721c6) main_mp3_pane_t6

0x41ce,	// (0x000721d4) popup_slider_window_cp01

0xa421,	// (0x00078427) cam4_battery_pane

0xa476,	// (0x0007847c) cam4_battery_pane_cp02

0xa625,	// (0x0007862b) cam4_battery_pane_cp01

0xa625,	// (0x0007862b) cam4_battery_pane_cp03

0xd770,	// (0x0007b776) cam4_battery_pane_g1

0xce68,	// (0x0007ae6e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007db26) cam4_battery_pane_g

0xcd2e,	// (0x0007ad34) popup_blid_sat_info2_window_t11

0xb439,	// (0x0007943f) aid_size_touch_mv_arrow_left_ParamLimits

0xb464,	// (0x0007946a) aid_size_touch_mv_arrow_right_ParamLimits

0xb4c2,	// (0x000794c8) navi_pane_g1_ParamLimits

0xb4ce,	// (0x000794d4) navi_pane_g2_ParamLimits

0xb4fc,	// (0x00079502) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0007d3e7) navi_pane_g_ParamLimits

0x2460,	// (0x00070466) navi_pane_mv_t1_ParamLimits

0x4f14,	// (0x00072f1a) grid_imed_effect_pane_ParamLimits

0x0ef4,	// (0x0006eefa) aid_placing_vt_slider_lsc

0xac4a,	// (0x00078c50) aid_placing_vt_slider_prt

0xbce3,	// (0x00079ce9) bg_tb_trans_pane_cp01_ParamLimits

0xcfaf,	// (0x0007afb5) popup_image_details_window_g1_ParamLimits

0xcfc2,	// (0x0007afc8) popup_image_details_window_g2_ParamLimits

0xcfd7,	// (0x0007afdd) popup_image_details_window_g3_ParamLimits

0xcfd7,	// (0x0007afdd) popup_image_details_window_g3

0xf714,	// (0x0007d71a) popup_image_details_window_g_ParamLimits

0xcfeb,	// (0x0007aff1) popup_image_details_window_t1_ParamLimits

0xcffd,	// (0x0007b003) popup_image_details_window_t2_ParamLimits

0xd02a,	// (0x0007b030) popup_image_details_window_t3_ParamLimits

0xd03e,	// (0x0007b044) popup_image_details_window_t4_ParamLimits

0xd059,	// (0x0007b05f) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0007d721) popup_image_details_window_t_ParamLimits

0x6b10,	// (0x00074b16) cl_header_name_pane_ParamLimits

0x6b10,	// (0x00074b16) cl_header_name_pane

0x6f02,	// (0x00074f08) cl_header_name_pane_t1_ParamLimits

0x6f02,	// (0x00074f08) cl_header_name_pane_t1

0x6f23,	// (0x00074f29) cl_header_name_pane_t2_ParamLimits

0x6f23,	// (0x00074f29) cl_header_name_pane_t2

0x6f65,	// (0x00074f6b) cl_header_name_pane_t3_ParamLimits

0x6f65,	// (0x00074f6b) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007db2b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007db2b) cl_header_name_pane_t

0xb58b,	// (0x00079591) navi_pane_mv_g2_ParamLimits

0xd7e1,	// (0x0007b7e7) field_vitu2_entry_pane_g1_ParamLimits

0xd7ed,	// (0x0007b7f3) field_vitu2_entry_pane_g2_ParamLimits

0xd7f9,	// (0x0007b7ff) field_vitu2_entry_pane_g3_ParamLimits

0xd7f9,	// (0x0007b7ff) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007d921) field_vitu2_entry_pane_g_ParamLimits

0xa50f,	// (0x00078515) cell_vitu2_itu_pane_g1_ParamLimits

0x5d16,	// (0x00073d1c) cell_vitu2_itu_pane_g2_ParamLimits

0x5d16,	// (0x00073d1c) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007d92d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007d92d) cell_vitu2_itu_pane_g

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp05_ParamLimits

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp05

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp03

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp04

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp10_ParamLimits

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp10

0x6ab2,	// (0x00074ab8) bg_vkb2_func_pane_cp08

0x6a98,	// (0x00074a9e) bg_vkb2_func_pane_cp06

0x6aa6,	// (0x00074aac) bg_vkb2_func_pane_cp07

0xdd17,	// (0x0007bd1d) bg_vkb2_func_pane_cp11_ParamLimits

0xdd17,	// (0x0007bd1d) bg_vkb2_func_pane_cp11

0xdd2c,	// (0x0007bd32) bg_vkb2_func_pane_cp12_ParamLimits

0xdd2c,	// (0x0007bd32) bg_vkb2_func_pane_cp12

0x96e3,	// (0x000776e9) bg_vkb2_func_pane_cp09

0xd819,	// (0x0007b81f) bg_vkb2_func_pane_g1

0xae10,	// (0x00078e16) bg_vkb2_func_pane_g2

0xd821,	// (0x0007b827) bg_vkb2_func_pane_g3

0xd829,	// (0x0007b82f) bg_vkb2_func_pane_g4

0xda43,	// (0x0007ba49) bg_vkb2_func_pane_g5

0xd841,	// (0x0007b847) bg_vkb2_func_pane_g6

0xd849,	// (0x0007b84f) bg_vkb2_func_pane_g7

0xd839,	// (0x0007b83f) bg_vkb2_func_pane_g8

0xadf0,	// (0x00078df6) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007db32) bg_vkb2_func_pane_g

0x6e2a,	// (0x00074e30) blid2_tripm_pane_g6_ParamLimits

0x6e2a,	// (0x00074e30) blid2_tripm_pane_g6

0xd723,	// (0x0007b729) mp4_progress_pane_g1

0x6ea1,	// (0x00074ea7) blid2_tripm_values_pane_ParamLimits

0x6ea1,	// (0x00074ea7) blid2_tripm_values_pane

0x6f96,	// (0x00074f9c) blid2_tripm_values_pane_t1

0x6fa4,	// (0x00074faa) blid2_tripm_values_pane_t2

0x6fb2,	// (0x00074fb8) blid2_tripm_values_pane_t3

0x6fc0,	// (0x00074fc6) blid2_tripm_values_pane_t4

0x6fce,	// (0x00074fd4) blid2_tripm_values_pane_t5

0x6fdc,	// (0x00074fe2) blid2_tripm_values_pane_t6

0x6fea,	// (0x00074ff0) blid2_tripm_values_pane_t7

0x6ff8,	// (0x00074ffe) blid2_tripm_values_pane_t8

0x7006,	// (0x0007500c) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007db45) blid2_tripm_values_pane_t

0x0f31,	// (0x0006ef37) call_video_pane_t1_ParamLimits

0x0f4b,	// (0x0006ef51) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0007d270) call_video_pane_t_ParamLimits

0x29b7,	// (0x000709bd) msg_header_pane_g1_ParamLimits

0xb777,	// (0x0007977d) msg_header_pane_g2_ParamLimits

0xb777,	// (0x0007977d) msg_header_pane_g2

0x0001,

0xf484,	// (0x0007d48a) msg_header_pane_g_ParamLimits

0xf484,	// (0x0007d48a) msg_header_pane_g

0xa9ed,	// (0x000789f3) main_clock2_pane_ParamLimits

0x4c11,	// (0x00072c17) grid_clock2_toolbar_pane_ParamLimits

0x4c11,	// (0x00072c17) grid_clock2_toolbar_pane

0x4c11,	// (0x00072c17) listscroll_clock2_pane_ParamLimits

0x4c11,	// (0x00072c17) listscroll_clock2_pane

0x4cf0,	// (0x00072cf6) main_clock2_pane_t3_ParamLimits

0x4cf0,	// (0x00072cf6) main_clock2_pane_t3

0x4d13,	// (0x00072d19) main_clock2_pane_t4_ParamLimits

0x4d13,	// (0x00072d19) main_clock2_pane_t4

0xde22,	// (0x0007be28) cell_clock2_toolbar_pane

0xde2a,	// (0x0007be30) cell_clock2_toolbar_pane_cp01

0xde2a,	// (0x0007be30) cell_clock2_toolbar_pane_cp02

0xde32,	// (0x0007be38) cell_clock2_toolbar_pane_cp03

0xde3a,	// (0x0007be40) list_clock2_pane

0xb3be,	// (0x000793c4) scroll_pane_cp10

0xde42,	// (0x0007be48) list_single_clock2_pane_ParamLimits

0xde42,	// (0x0007be48) list_single_clock2_pane

0xab9e,	// (0x00078ba4) list_highlight_pane_cp08

0xde4f,	// (0x0007be55) list_single_clock2_pane_t1

0xde5d,	// (0x0007be63) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007db58) list_single_clock2_pane_t

0x96e3,	// (0x000776e9) bg_button_pane_cp10

0xde6b,	// (0x0007be71) cell_clock2_toolbar_pane_g1

0x2a3e,	// (0x00070a44) aid_main_viewer_pane_g1_ParamLimits

0x2a3e,	// (0x00070a44) aid_main_viewer_pane_g1

0x2a4c,	// (0x00070a52) aid_main_viewer_pane_g2_ParamLimits

0x2a4c,	// (0x00070a52) aid_main_viewer_pane_g2

0x2a5a,	// (0x00070a60) aid_main_viewer_pane_g3_ParamLimits

0x2a5a,	// (0x00070a60) aid_main_viewer_pane_g3

0x2a69,	// (0x00070a6f) aid_main_viewer_pane_g4_ParamLimits

0x2a69,	// (0x00070a6f) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0007d49b) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0007d49b) aid_main_viewer_pane_g

0x33c4,	// (0x000713ca) main_calc_pane_ParamLimits

0x33e8,	// (0x000713ee) main_dialer2_pane_ParamLimits

0xf0b4,	// (0x0007d0ba) main_cam6_pane

0xf0b4,	// (0x0007d0ba) main_vid6_pane

0x4c1d,	// (0x00072c23) listscroll_gen_pane_cp06_ParamLimits

0x4c1d,	// (0x00072c23) listscroll_gen_pane_cp06

0x4d36,	// (0x00072d3c) main_clock2_pane_t5_ParamLimits

0x4d36,	// (0x00072d3c) main_clock2_pane_t5

0x4d94,	// (0x00072d9a) aid_call2_pane_cp10_ParamLimits

0x4da6,	// (0x00072dac) aid_call_pane_cp10_ParamLimits

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4db8,	// (0x00072dbe) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4db8,	// (0x00072dbe) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb42d,	// (0x00079433) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0007d7d6) popup_clock_analogue_window_cp10_g_ParamLimits

0x4dce,	// (0x00072dd4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5472,	// (0x00073478) cell_dialer2_keypad_pane_g2_ParamLimits

0x5472,	// (0x00073478) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007d8c0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007d8c0) cell_dialer2_keypad_pane_g

0x548e,	// (0x00073494) cell_dialer2_keypad_pane_t1

0x60b1,	// (0x000740b7) main_cset_text2_pane_ParamLimits

0x60b1,	// (0x000740b7) main_cset_text2_pane

0xdc76,	// (0x0007bc7c) area_vitu2_query_pane_g1_ParamLimits

0x6a37,	// (0x00074a3d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007da75) area_vitu2_query_pane_g_ParamLimits

0xa601,	// (0x00078607) area_vitu2_query_pane_t7_ParamLimits

0xa601,	// (0x00078607) area_vitu2_query_pane_t7

0x6a98,	// (0x00074a9e) bg_button_pane_cp018_ParamLimits

0x6aa6,	// (0x00074aac) bg_button_pane_cp021_ParamLimits

0x6ab2,	// (0x00074ab8) bg_button_pane_cp022_ParamLimits

0x6ab2,	// (0x00074ab8) bg_vkb2_func_pane_cp08_ParamLimits

0x6a98,	// (0x00074a9e) bg_vkb2_func_pane_cp06_ParamLimits

0x6aa6,	// (0x00074aac) bg_vkb2_func_pane_cp07_ParamLimits

0x6ac3,	// (0x00074ac9) input_focus_pane_cp09_ParamLimits

0xa690,	// (0x00078696) cam6_autofocus_pane_ParamLimits

0xa690,	// (0x00078696) cam6_autofocus_pane

0x7014,	// (0x0007501a) cam6_image_uncrop_pane_ParamLimits

0x7014,	// (0x0007501a) cam6_image_uncrop_pane

0x7023,	// (0x00075029) cam6_indi_pane_ParamLimits

0x7023,	// (0x00075029) cam6_indi_pane

0x7039,	// (0x0007503f) cam6_mode_pane_ParamLimits

0x7039,	// (0x0007503f) cam6_mode_pane

0x704b,	// (0x00075051) cam6_timer_pane_ParamLimits

0x704b,	// (0x00075051) cam6_timer_pane

0x7057,	// (0x0007505d) cam6_zoom_pane_ParamLimits

0x7057,	// (0x0007505d) cam6_zoom_pane

0x7065,	// (0x0007506b) cam6_mode_pane_g1_ParamLimits

0x7065,	// (0x0007506b) cam6_mode_pane_g1

0x7075,	// (0x0007507b) cam6_mode_pane_g2_ParamLimits

0x7075,	// (0x0007507b) cam6_mode_pane_g2

0x7085,	// (0x0007508b) cam6_mode_pane_g3_ParamLimits

0x7085,	// (0x0007508b) cam6_mode_pane_g3

0x7095,	// (0x0007509b) cam6_mode_pane_g4_ParamLimits

0x7095,	// (0x0007509b) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007db5d) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007db5d) cam6_mode_pane_g

0xde73,	// (0x0007be79) bg_tb_trans_pane_cp08_ParamLimits

0xde73,	// (0x0007be79) bg_tb_trans_pane_cp08

0xde81,	// (0x0007be87) cam6_battery_pane_ParamLimits

0xde81,	// (0x0007be87) cam6_battery_pane

0xde97,	// (0x0007be9d) cam6_indi_pane_g1_ParamLimits

0xde97,	// (0x0007be9d) cam6_indi_pane_g1

0xdea9,	// (0x0007beaf) cam6_indi_pane_g2_ParamLimits

0xdea9,	// (0x0007beaf) cam6_indi_pane_g2

0xdebb,	// (0x0007bec1) cam6_indi_pane_g3_ParamLimits

0xdebb,	// (0x0007bec1) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007db66) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007db66) cam6_indi_pane_g

0xdecd,	// (0x0007bed3) cam6_indi_pane_t1_ParamLimits

0xdecd,	// (0x0007bed3) cam6_indi_pane_t1

0x5ab3,	// (0x00073ab9) cam6_autofocus_pane_g1

0x5aab,	// (0x00073ab1) cam6_autofocus_pane_g2

0x5ac3,	// (0x00073ac9) cam6_autofocus_pane_g3

0x5abb,	// (0x00073ac1) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007db6d) cam6_autofocus_pane_g

0xdef3,	// (0x0007bef9) cam6_timer_pane_g1

0xdefb,	// (0x0007bf01) cam6_timer_pane_t1

0xdf09,	// (0x0007bf0f) cam6_zoom_cont_pane

0xdf11,	// (0x0007bf17) cam6_zoom_pane_g1

0xdf19,	// (0x0007bf1f) cam6_zoom_pane_g2

0x70a5,	// (0x000750ab) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007db76) cam6_zoom_pane_g

0xce68,	// (0x0007ae6e) cam6_battery_pane_g1

0xce68,	// (0x0007ae6e) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0007d6de) cam6_battery_pane_g

0xdf21,	// (0x0007bf27) cam6_zoom_cont_pane_g1

0xdf2a,	// (0x0007bf30) cam6_zoom_cont_pane_g2

0xdf33,	// (0x0007bf39) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007db7d) cam6_zoom_cont_pane_g

0x70c2,	// (0x000750c8) cam6_mode_pane_cp_ParamLimits

0x70c2,	// (0x000750c8) cam6_mode_pane_cp

0x70d4,	// (0x000750da) cam6_zoom_pane_cp_ParamLimits

0x70d4,	// (0x000750da) cam6_zoom_pane_cp

0x70e2,	// (0x000750e8) vid6_image_uncrop_cif_pane_ParamLimits

0x70e2,	// (0x000750e8) vid6_image_uncrop_cif_pane

0x70f2,	// (0x000750f8) vid6_image_uncrop_nhd_pane_ParamLimits

0x70f2,	// (0x000750f8) vid6_image_uncrop_nhd_pane

0x7101,	// (0x00075107) vid6_image_uncrop_vga_pane_ParamLimits

0x7101,	// (0x00075107) vid6_image_uncrop_vga_pane

0x7110,	// (0x00075116) vid6_image_uncrop_wvga_pane_ParamLimits

0x7110,	// (0x00075116) vid6_image_uncrop_wvga_pane

0x711f,	// (0x00075125) vid6_indi_pane_ParamLimits

0x711f,	// (0x00075125) vid6_indi_pane

0xde73,	// (0x0007be79) bg_tb_trans_pane_cp09_ParamLimits

0xde73,	// (0x0007be79) bg_tb_trans_pane_cp09

0xdf4b,	// (0x0007bf51) cam6_battery_pane_cp_ParamLimits

0xdf4b,	// (0x0007bf51) cam6_battery_pane_cp

0xdf57,	// (0x0007bf5d) vid6_indi_pane_g1_ParamLimits

0xdf57,	// (0x0007bf5d) vid6_indi_pane_g1

0xdf69,	// (0x0007bf6f) vid6_indi_pane_g2_ParamLimits

0xdf69,	// (0x0007bf6f) vid6_indi_pane_g2

0xdf7b,	// (0x0007bf81) vid6_indi_pane_g3_ParamLimits

0xdf7b,	// (0x0007bf81) vid6_indi_pane_g3

0xdf92,	// (0x0007bf98) vid6_indi_pane_g4_ParamLimits

0xdf92,	// (0x0007bf98) vid6_indi_pane_g4

0xdfa9,	// (0x0007bfaf) vid6_indi_pane_g5_ParamLimits

0xdfa9,	// (0x0007bfaf) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007db84) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007db84) vid6_indi_pane_g

0xdfc3,	// (0x0007bfc9) vid6_indi_pane_t1_ParamLimits

0xdfc3,	// (0x0007bfc9) vid6_indi_pane_t1

0xdfd9,	// (0x0007bfdf) vid6_indi_pane_t2_ParamLimits

0xdfd9,	// (0x0007bfdf) vid6_indi_pane_t2

0xe001,	// (0x0007c007) vid6_indi_pane_t3_ParamLimits

0xe001,	// (0x0007c007) vid6_indi_pane_t3

0xe029,	// (0x0007c02f) vid6_indi_pane_t4_ParamLimits

0xe029,	// (0x0007c02f) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007db8f) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007db8f) vid6_indi_pane_t

0xe04d,	// (0x0007c053) wait_bar_pane_cp08

0x7137,	// (0x0007513d) main_cset_text2_pane_t1_ParamLimits

0x7137,	// (0x0007513d) main_cset_text2_pane_t1

0x70ad,	// (0x000750b3) listscroll_gen_pane_cp06_t1_ParamLimits

0x70ad,	// (0x000750b3) listscroll_gen_pane_cp06_t1

0xf0b4,	// (0x0007d0ba) main_cam6_set_pane

0xa413,	// (0x00078419) bg_tb_trans_pane_cp06_ParamLimits

0xa429,	// (0x0007842f) cam4_indicators_pane_g1_ParamLimits

0xa43a,	// (0x00078440) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007d8fd) cam4_indicators_pane_g_ParamLimits

0xa452,	// (0x00078458) cam4_indicators_pane_t1_ParamLimits

0x96ed,	// (0x000776f3) bg_tb_trans_pane_cp07_ParamLimits

0xa480,	// (0x00078486) vid4_indicators_pane_g1_ParamLimits

0xa496,	// (0x0007849c) vid4_indicators_pane_g2_ParamLimits

0xa4aa,	// (0x000784b0) vid4_indicators_pane_g3_ParamLimits

0xa4bd,	// (0x000784c3) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007d90f) vid4_indicators_pane_g_ParamLimits

0xa4db,	// (0x000784e1) vid4_indicators_pane_t1_ParamLimits

0xa62d,	// (0x00078633) vid4_progress_pane_g1_ParamLimits

0xa63d,	// (0x00078643) vid4_progress_pane_g2_ParamLimits

0x6c04,	// (0x00074c0a) vid4_progress_pane_g3_ParamLimits

0xa43a,	// (0x00078440) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007dac0) vid4_progress_pane_g_ParamLimits

0x6c16,	// (0x00074c1c) vid4_progress_pane_t1_ParamLimits

0xa64d,	// (0x00078653) vid4_progress_pane_t2_ParamLimits

0xa662,	// (0x00078668) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007dacb) vid4_progress_pane_t_ParamLimits

0x6c2e,	// (0x00074c34) wait_bar_pane_cp07_ParamLimits

0x7158,	// (0x0007515e) main_cam6_set_pane_g2_ParamLimits

0x7158,	// (0x0007515e) main_cam6_set_pane_g2

0x717e,	// (0x00075184) main_cset6_listscroll_pane_ParamLimits

0x717e,	// (0x00075184) main_cset6_listscroll_pane

0x719c,	// (0x000751a2) main_cset6_slider_pane_ParamLimits

0x719c,	// (0x000751a2) main_cset6_slider_pane

0x71b2,	// (0x000751b8) main_cset6_text2_pane_ParamLimits

0x71b2,	// (0x000751b8) main_cset6_text2_pane

0xe05c,	// (0x0007c062) main_cset6_text_pane

0xe064,	// (0x0007c06a) main_cset_list_pane_copy1_ParamLimits

0xe064,	// (0x0007c06a) main_cset_list_pane_copy1

0xe074,	// (0x0007c07a) scroll_pane_cp028_copy1

0x71c0,	// (0x000751c6) cset_list_set_pane_copy1

0x71d4,	// (0x000751da) aid_position_infowindow_above_copy1

0x71dc,	// (0x000751e2) aid_position_infowindow_below_copy1

0x71e4,	// (0x000751ea) cset_list_set_pane_g1_copy1

0x71ec,	// (0x000751f2) cset_list_set_pane_g3_copy1_ParamLimits

0x71ec,	// (0x000751f2) cset_list_set_pane_g3_copy1

0x71fb,	// (0x00075201) cset_list_set_pane_t1_copy1_ParamLimits

0x71fb,	// (0x00075201) cset_list_set_pane_t1_copy1

0xbce3,	// (0x00079ce9) list_highlight_pane_cp021_copy1_ParamLimits

0xbce3,	// (0x00079ce9) list_highlight_pane_cp021_copy1

0xe07d,	// (0x0007c083) cset6_slider_pane_ParamLimits

0xe07d,	// (0x0007c083) cset6_slider_pane

0xe0a9,	// (0x0007c0af) main_cset6_slider_pane_g1_ParamLimits

0xe0a9,	// (0x0007c0af) main_cset6_slider_pane_g1

0x7210,	// (0x00075216) main_cset6_slider_pane_g2_ParamLimits

0x7210,	// (0x00075216) main_cset6_slider_pane_g2

0xe0d1,	// (0x0007c0d7) main_cset6_slider_pane_g3_ParamLimits

0xe0d1,	// (0x0007c0d7) main_cset6_slider_pane_g3

0x7238,	// (0x0007523e) main_cset6_slider_pane_g4_ParamLimits

0x7238,	// (0x0007523e) main_cset6_slider_pane_g4

0x7244,	// (0x0007524a) main_cset6_slider_pane_g5_ParamLimits

0x7244,	// (0x0007524a) main_cset6_slider_pane_g5

0xd94c,	// (0x0007b952) main_cset6_slider_pane_g7_ParamLimits

0xd94c,	// (0x0007b952) main_cset6_slider_pane_g7

0xd958,	// (0x0007b95e) main_cset6_slider_pane_g8_ParamLimits

0xd958,	// (0x0007b95e) main_cset6_slider_pane_g8

0x6160,	// (0x00074166) main_cset6_slider_pane_g9_ParamLimits

0x6160,	// (0x00074166) main_cset6_slider_pane_g9

0x616c,	// (0x00074172) main_cset6_slider_pane_g10_ParamLimits

0x616c,	// (0x00074172) main_cset6_slider_pane_g10

0x6178,	// (0x0007417e) main_cset6_slider_pane_g11_ParamLimits

0x6178,	// (0x0007417e) main_cset6_slider_pane_g11

0x6184,	// (0x0007418a) main_cset6_slider_pane_g12_ParamLimits

0x6184,	// (0x0007418a) main_cset6_slider_pane_g12

0x6190,	// (0x00074196) main_cset6_slider_pane_g13_ParamLimits

0x6190,	// (0x00074196) main_cset6_slider_pane_g13

0x619c,	// (0x000741a2) main_cset6_slider_pane_g14_ParamLimits

0x619c,	// (0x000741a2) main_cset6_slider_pane_g14

0x7252,	// (0x00075258) main_cset6_slider_pane_g15_ParamLimits

0x7252,	// (0x00075258) main_cset6_slider_pane_g15

0x61c0,	// (0x000741c6) main_cset6_slider_pane_g16_ParamLimits

0x61c0,	// (0x000741c6) main_cset6_slider_pane_g16

0x61ce,	// (0x000741d4) main_cset6_slider_pane_g17_ParamLimits

0x61ce,	// (0x000741d4) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007db98) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007db98) main_cset6_slider_pane_g

0xe0dd,	// (0x0007c0e3) main_cset6_slider_pane_t1_ParamLimits

0xe0dd,	// (0x0007c0e3) main_cset6_slider_pane_t1

0x7282,	// (0x00075288) main_cset6_slider_pane_t2_ParamLimits

0x7282,	// (0x00075288) main_cset6_slider_pane_t2

0x72ad,	// (0x000752b3) main_cset6_slider_pane_t3_ParamLimits

0x72ad,	// (0x000752b3) main_cset6_slider_pane_t3

0x72d8,	// (0x000752de) main_cset6_slider_pane_t4_ParamLimits

0x72d8,	// (0x000752de) main_cset6_slider_pane_t4

0x7305,	// (0x0007530b) main_cset6_slider_pane_t5_ParamLimits

0x7305,	// (0x0007530b) main_cset6_slider_pane_t5

0xe11e,	// (0x0007c124) main_cset6_slider_pane_t7_ParamLimits

0xe11e,	// (0x0007c124) main_cset6_slider_pane_t7

0x7332,	// (0x00075338) main_cset6_slider_pane_t8_ParamLimits

0x7332,	// (0x00075338) main_cset6_slider_pane_t8

0x7356,	// (0x0007535c) main_cset6_slider_pane_t9_ParamLimits

0x7356,	// (0x0007535c) main_cset6_slider_pane_t9

0x737a,	// (0x00075380) main_cset6_slider_pane_t10_ParamLimits

0x737a,	// (0x00075380) main_cset6_slider_pane_t10

0x739e,	// (0x000753a4) main_cset6_slider_pane_t11_ParamLimits

0x739e,	// (0x000753a4) main_cset6_slider_pane_t11

0xe154,	// (0x0007c15a) main_cset6_slider_pane_t14_ParamLimits

0xe154,	// (0x0007c15a) main_cset6_slider_pane_t14

0xe18d,	// (0x0007c193) main_cset6_slider_pane_t15_ParamLimits

0xe18d,	// (0x0007c193) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007dbbd) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007dbbd) main_cset6_slider_pane_t

0xe1c6,	// (0x0007c1cc) cset_slider_pane_g1_copy1

0xe1cf,	// (0x0007c1d5) cset_slider_pane_g2_copy1

0xe1d8,	// (0x0007c1de) cset_slider_pane_g3_copy1

0x96e3,	// (0x000776e9) bg_popup_sub_pane_cp011_copy1

0xe1e1,	// (0x0007c1e7) main_cset_text_pane_g1_copy1

0xda92,	// (0x0007ba98) main_cset_text_pane_t1_copy1

0xdaa0,	// (0x0007baa6) main_cset_text_pane_t2_copy1

0xdaae,	// (0x0007bab4) main_cset_text_pane_t3_copy1

0xdabc,	// (0x0007bac2) main_cset_text_pane_t4_copy1

0xdaca,	// (0x0007bad0) main_cset_text_pane_t5_copy1

0xe1e9,	// (0x0007c1ef) main_cset_text_pane_t6_copy1

0xe1f7,	// (0x0007c1fd) main_cset_text_pane_t7_copy1

0x7137,	// (0x0007513d) main_cset_text2_pane_t1_copy1

0x96ed,	// (0x000776f3) main_ncimui_pane

0x3676,	// (0x0007167c) popup_query_ncimui_window_ParamLimits

0x3676,	// (0x0007167c) popup_query_ncimui_window

0xa0f6,	// (0x000780fc) field_cale_ev2_pane_g4_ParamLimits

0xa0f6,	// (0x000780fc) field_cale_ev2_pane_g4

0x533d,	// (0x00073343) cell_video_dialer_keypad_pane_g2_ParamLimits

0x533d,	// (0x00073343) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0007d897) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0007d897) cell_video_dialer_keypad_pane_g

0x5355,	// (0x0007335b) cell_video_dialer_keypad_pane_t1

0x96e3,	// (0x000776e9) bg_popup_window_pane_cp012

0xb2aa,	// (0x000792b0) heading_pane_cp06

0xe223,	// (0x0007c229) ncim_query_content_pane

0x96e3,	// (0x000776e9) bg_popup_heading_pane_cp01

0xe22b,	// (0x0007c231) ncim_heading_pane_t1

0xe239,	// (0x0007c23f) ncim_indicator_popup_pane

0xe24b,	// (0x0007c251) ncim_query_button_pane

0xe261,	// (0x0007c267) ncim_query_content_pane_t1

0xe273,	// (0x0007c279) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007dc01) ncim_query_content_pane_t

0xe2ad,	// (0x0007c2b3) ncim_query_list_pane

0xe2bf,	// (0x0007c2c5) ncim_query_popup_pane

0xe239,	// (0x0007c23f) ncim_indicator_popup_pane_ParamLimits

0x75c3,	// (0x000755c9) ncim_query_content_pane_g1_ParamLimits

0x75c3,	// (0x000755c9) ncim_query_content_pane_g1

0xe261,	// (0x0007c267) ncim_query_content_pane_t1_ParamLimits

0xe273,	// (0x0007c279) ncim_query_content_pane_t2_ParamLimits

0x75cf,	// (0x000755d5) ncim_query_content_pane_t3_ParamLimits

0x75cf,	// (0x000755d5) ncim_query_content_pane_t3

0x75f7,	// (0x000755fd) ncim_query_content_pane_t4_ParamLimits

0x75f7,	// (0x000755fd) ncim_query_content_pane_t4

0x761f,	// (0x00075625) ncim_query_content_pane_t5_ParamLimits

0x761f,	// (0x00075625) ncim_query_content_pane_t5

0xe285,	// (0x0007c28b) ncim_query_content_pane_t6_ParamLimits

0xe285,	// (0x0007c28b) ncim_query_content_pane_t6

0xfbfb,	// (0x0007dc01) ncim_query_content_pane_t_ParamLimits

0xe2ad,	// (0x0007c2b3) ncim_query_list_pane_ParamLimits

0xe2bf,	// (0x0007c2c5) ncim_query_popup_pane_ParamLimits

0xe2d3,	// (0x0007c2d9) wait_bar_pane_cp04

0x96e3,	// (0x000776e9) input_focus_pane_cp011

0xe2db,	// (0x0007c2e1) ncim_query_popup_pane_t1

0xe2e9,	// (0x0007c2ef) ncim_list_query_list_pane_ParamLimits

0xe2e9,	// (0x0007c2ef) ncim_list_query_list_pane

0x96e3,	// (0x000776e9) bg_button_pane_cp027

0xe2fc,	// (0x0007c302) ncim_query_button_pane_g1

0x96e3,	// (0x000776e9) list_highlight_pane_cp012

0xe331,	// (0x0007c337) ncim_list_query_list_pane_g1

0xe339,	// (0x0007c33f) ncim_list_query_list_pane_t1

0xa446,	// (0x0007844c) cam4_indicators_pane_g3_ParamLimits

0xa446,	// (0x0007844c) cam4_indicators_pane_g3

0xa4c9,	// (0x000784cf) vid4_indicators_pane_g5_ParamLimits

0xa4c9,	// (0x000784cf) vid4_indicators_pane_g5

0xa446,	// (0x0007844c) vid4_progress_pane_g5_ParamLimits

0xa446,	// (0x0007844c) vid4_progress_pane_g5

0x74ae,	// (0x000754b4) main_ncimui_pane_g1

0x7517,	// (0x0007551d) ncimui_group_query_pane_ParamLimits

0x7517,	// (0x0007551d) ncimui_group_query_pane

0x755f,	// (0x00075565) ncimui_list_pane_ParamLimits

0x755f,	// (0x00075565) ncimui_list_pane

0x7586,	// (0x0007558c) ncimui_text_pane_ParamLimits

0x7586,	// (0x0007558c) ncimui_text_pane

0x7647,	// (0x0007564d) ncimui_text_pane_t1_ParamLimits

0x7647,	// (0x0007564d) ncimui_text_pane_t1

0xe347,	// (0x0007c34d) ncimui_list_single_graphic_pane_ParamLimits

0xe347,	// (0x0007c34d) ncimui_list_single_graphic_pane

0x7665,	// (0x0007566b) ncimui_query_pane_ParamLimits

0x7665,	// (0x0007566b) ncimui_query_pane

0x96e3,	// (0x000776e9) list_highlight_pane_cp013

0xe357,	// (0x0007c35d) ncim_list_query_list_pane_t1_copy1

0xe331,	// (0x0007c337) ncim_list_single_graphic_pane_g1

0x7678,	// (0x0007567e) ncim_query_button_pane_cp01

0x7684,	// (0x0007568a) ncim_query_entry_pane_ParamLimits

0x7684,	// (0x0007568a) ncim_query_entry_pane

0x7697,	// (0x0007569d) ncimui_query_pane_g1

0x76a3,	// (0x000756a9) ncimui_query_pane_t1_ParamLimits

0x76a3,	// (0x000756a9) ncimui_query_pane_t1

0xbce3,	// (0x00079ce9) input_focus_pane_cp012

0xe365,	// (0x0007c36b) ncim_query_entry_pane_t1

0xa9ed,	// (0x000789f3) main_im_pane_ParamLimits

0x96ed,	// (0x000776f3) main_mobtv_pane_ParamLimits

0x96ed,	// (0x000776f3) main_mobtv_pane

0x726a,	// (0x00075270) main_cset6_slider_pane_g18_ParamLimits

0x726a,	// (0x00075270) main_cset6_slider_pane_g18

0x7276,	// (0x0007527c) main_cset6_slider_pane_g19_ParamLimits

0x7276,	// (0x0007527c) main_cset6_slider_pane_g19

0x76bc,	// (0x000756c2) bg_main_mobtv_pane_ParamLimits

0x76bc,	// (0x000756c2) bg_main_mobtv_pane

0x76ca,	// (0x000756d0) main_mobtv_info_pane

0x76d5,	// (0x000756db) main_mobtv_loading_pane_ParamLimits

0x76d5,	// (0x000756db) main_mobtv_loading_pane

0xe377,	// (0x0007c37d) main_mobtv_pg_channel_list_pane

0xe381,	// (0x0007c387) main_mobtv_pg_hdr_pane

0x76e2,	// (0x000756e8) main_mobtv_programe_curr_pane_ParamLimits

0x76e2,	// (0x000756e8) main_mobtv_programe_curr_pane

0x76ef,	// (0x000756f5) main_mobtv_programe_next_pane_ParamLimits

0x76ef,	// (0x000756f5) main_mobtv_programe_next_pane

0xe38a,	// (0x0007c390) popup_mobtv_noti_window

0xce68,	// (0x0007ae6e) main_tv_pg_hdr_pane_g1

0xe394,	// (0x0007c39a) main_tv_pg_hdr_pane_g2

0xe39c,	// (0x0007c3a2) main_tv_pg_hdr_pane_g3

0xe3a4,	// (0x0007c3aa) main_tv_pg_hdr_pane_g4

0xe3ac,	// (0x0007c3b2) main_tv_pg_hdr_pane_g5

0xe3b6,	// (0x0007c3bc) main_tv_pg_hdr_pane_g6

0xe3c0,	// (0x0007c3c6) main_tv_pg_hdr_pane_g7

0xe3ca,	// (0x0007c3d0) main_tv_pg_hdr_pane_g8

0xe3d4,	// (0x0007c3da) main_tv_pg_hdr_pane_g9

0xe3de,	// (0x0007c3e4) main_tv_pg_hdr_pane_g10

0xe3e8,	// (0x0007c3ee) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007dc0e) main_tv_pg_hdr_pane_g

0xe3f2,	// (0x0007c3f8) main_tv_pg_hdr_pane_t1

0xe400,	// (0x0007c406) main_tv_pg_hdr_pane_t2

0xe40e,	// (0x0007c414) main_tv_pg_hdr_pane_t3

0xe41e,	// (0x0007c424) main_tv_pg_hdr_pane_t4

0xe42e,	// (0x0007c434) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007dc25) main_tv_pg_hdr_pane_t

0xe43e,	// (0x0007c444) single_mobtv_pg_channel_pane_ParamLimits

0xe43e,	// (0x0007c444) single_mobtv_pg_channel_pane

0xe450,	// (0x0007c456) single_mobtv_pg_channel_table_pane

0xe459,	// (0x0007c45f) single_mobtv_pg_channel_thumb_pane

0xe462,	// (0x0007c468) single_tv_pg_channel_pane_g1

0xe46b,	// (0x0007c471) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007dc30) single_tv_pg_channel_pane_g

0xd0a3,	// (0x0007b0a9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd0a3,	// (0x0007b0a9) bg_single_mobtv_pg_channel_thumb_pane

0xe474,	// (0x0007c47a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe474,	// (0x0007c47a) single_mobtv_pg_channel_thumb_pane_g1

0xe482,	// (0x0007c488) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe482,	// (0x0007c488) single_mobtv_pg_channel_thumb_pane_g2

0xe48e,	// (0x0007c494) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe48e,	// (0x0007c494) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007dc35) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007dc35) single_mobtv_pg_channel_thumb_pane_g

0xe49a,	// (0x0007c4a0) single_mobtv_pg_channel_thumb_pane_t1

0xe4a8,	// (0x0007c4ae) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007dc3c) single_mobtv_pg_channel_thumb_pane_t

0xce68,	// (0x0007ae6e) bg_single_mobtv_pg_channel_table_pane_g1

0xce68,	// (0x0007ae6e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0007d6de) bg_single_mobtv_pg_channel_table_pane_g

0xe4b6,	// (0x0007c4bc) single_mobtv_pg_channel_table_pane_t1

0xe4c4,	// (0x0007c4ca) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007dc41) single_mobtv_pg_channel_table_pane_t

0x7704,	// (0x0007570a) main_mobtv_info_pane_g1_ParamLimits

0x7704,	// (0x0007570a) main_mobtv_info_pane_g1

0x7722,	// (0x00075728) main_mobtv_info_pane_t1_ParamLimits

0x7722,	// (0x00075728) main_mobtv_info_pane_t1

0x779a,	// (0x000757a0) main_mobtv_info_pane_t2_ParamLimits

0x779a,	// (0x000757a0) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007dc4b) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007dc4b) main_mobtv_info_pane_t

0x782b,	// (0x00075831) wait_bar_pane_cp05

0x783d,	// (0x00075843) main_mobtv_loading_pane_g1_ParamLimits

0x783d,	// (0x00075843) main_mobtv_loading_pane_g1

0x784e,	// (0x00075854) main_mobtv_loading_pane_g2_ParamLimits

0x784e,	// (0x00075854) main_mobtv_loading_pane_g2

0x785a,	// (0x00075860) main_mobtv_loading_pane_g3_ParamLimits

0x785a,	// (0x00075860) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007dc52) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007dc52) main_mobtv_loading_pane_g

0xe4d2,	// (0x0007c4d8) main_mobtv_loading_pane_t1_ParamLimits

0xe4d2,	// (0x0007c4d8) main_mobtv_loading_pane_t1

0xe4ea,	// (0x0007c4f0) main_mobtv_loading_pane_t2_ParamLimits

0xe4ea,	// (0x0007c4f0) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007dc59) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007dc59) main_mobtv_loading_pane_t

0x786d,	// (0x00075873) wait_bar_pane_cp06_ParamLimits

0x786d,	// (0x00075873) wait_bar_pane_cp06

0xe50e,	// (0x0007c514) main_mobtv_programe_curr_pane_t1

0xe51c,	// (0x0007c522) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007dc5e) main_mobtv_programe_curr_pane_t

0xe52a,	// (0x0007c530) main_mobtv_programe_next_pane_t1

0xe538,	// (0x0007c53e) main_mobtv_programe_next_pane_t2

0xe546,	// (0x0007c54c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007dc63) main_mobtv_programe_next_pane_t

0x96e3,	// (0x000776e9) bg_popup_mobtv_noti_window_pane

0xe554,	// (0x0007c55a) popup_mobtv_noti_window_g1

0xe55c,	// (0x0007c562) popup_mobtv_noti_window_t1

0xe56a,	// (0x0007c570) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007dc6a) popup_mobtv_noti_window_t

0xce68,	// (0x0007ae6e) bg_popup_mobtv_noti_window_pane_g1

0xff21,	// (0x0006df27) sc_clock_pane

0xf0b4,	// (0x0007d0ba) main_fs_bigclock_pane

0x6e8b,	// (0x00074e91) blid2_tripm_pane_t4_ParamLimits

0x6e8b,	// (0x00074e91) blid2_tripm_pane_t4

0x787c,	// (0x00075882) sc_clock_pane_g1_ParamLimits

0x787c,	// (0x00075882) sc_clock_pane_g1

0x788e,	// (0x00075894) sc_clock_pane_t1_ParamLimits

0x788e,	// (0x00075894) sc_clock_pane_t1

0x78b2,	// (0x000758b8) sc_clock_pane_t2_ParamLimits

0x78b2,	// (0x000758b8) sc_clock_pane_t2

0x78ca,	// (0x000758d0) sc_clock_pane_t3_ParamLimits

0x78ca,	// (0x000758d0) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007dc6f) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007dc6f) sc_clock_pane_t

0x8a9c,	// (0x00076aa2) main_fs_bigclock_indicator_pane_ParamLimits

0x8a9c,	// (0x00076aa2) main_fs_bigclock_indicator_pane

0x7990,	// (0x00075996) main_fs_bigclock_pane_g1_ParamLimits

0x7990,	// (0x00075996) main_fs_bigclock_pane_g1

0x8aa8,	// (0x00076aae) main_fs_bigclock_pane_t1_ParamLimits

0x8aa8,	// (0x00076aae) main_fs_bigclock_pane_t1

0x8aba,	// (0x00076ac0) main_fs_bigclock_pane_t2_ParamLimits

0x8aba,	// (0x00076ac0) main_fs_bigclock_pane_t2

0x8ace,	// (0x00076ad4) main_fs_bigclock_pane_t3_ParamLimits

0x8ace,	// (0x00076ad4) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007de79) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007de79) main_fs_bigclock_pane_t

0xecd9,	// (0x0007ccdf) main_fs_bigclock_indicator_pane_g1

0xe253,	// (0x0007c259) ncim_query_content_pane_g2_ParamLimits

0xe253,	// (0x0007c259) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007dbfc) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007dbfc) ncim_query_content_pane_g

0x78e1,	// (0x000758e7) sc_clock_pane_t4_ParamLimits

0x78e1,	// (0x000758e7) sc_clock_pane_t4

0x96ed,	// (0x000776f3) main_radioblah_pane

0xa3ab,	// (0x000783b1) cell_call4_button_pane_t1_copy1_ParamLimits

0xa3ab,	// (0x000783b1) cell_call4_button_pane_t1_copy1

0x74c6,	// (0x000754cc) main_ncimui_pane_t1_ParamLimits

0x74c6,	// (0x000754cc) main_ncimui_pane_t1

0x74e0,	// (0x000754e6) main_ncimui_pane_t2_ParamLimits

0x74e0,	// (0x000754e6) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007dbf5) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007dbf5) main_ncimui_pane_t

0xe578,	// (0x0007c57e) main_radioblah_anim_pane_ParamLimits

0xe578,	// (0x0007c57e) main_radioblah_anim_pane

0xe589,	// (0x0007c58f) main_radioblah_info_pane_ParamLimits

0xe589,	// (0x0007c58f) main_radioblah_info_pane

0xe59d,	// (0x0007c5a3) main_radioblah_pane_t1_ParamLimits

0xe59d,	// (0x0007c5a3) main_radioblah_pane_t1

0xe5b9,	// (0x0007c5bf) main_radioblah_pane_t2_ParamLimits

0xe5b9,	// (0x0007c5bf) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007dc90) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007dc90) main_radioblah_pane_t

0x7b39,	// (0x00075b3f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b39,	// (0x00075b3f) main_radioblah_rocker_ctrl_pane

0xe601,	// (0x0007c607) main_radioblah_info_pane_t1_ParamLimits

0xe601,	// (0x0007c607) main_radioblah_info_pane_t1

0x7b91,	// (0x00075b97) main_radioblah_info_pane_t2_ParamLimits

0x7b91,	// (0x00075b97) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007dc99) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007dc99) main_radioblah_info_pane_t

0xce68,	// (0x0007ae6e) main_radioblah_rocker_ctrl_pane_g1

0x7c41,	// (0x00075c47) main_radioblah_rocker_ctrl_pane_g2

0x7c49,	// (0x00075c4f) main_radioblah_rocker_ctrl_pane_g3

0x7c51,	// (0x00075c57) main_radioblah_rocker_ctrl_pane_g4

0x7c59,	// (0x00075c5f) main_radioblah_rocker_ctrl_pane_g5

0x7c61,	// (0x00075c67) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007dca2) main_radioblah_rocker_ctrl_pane_g

0x7137,	// (0x0007513d) main_cset_text2_pane_t1_copy1_ParamLimits

0xa409,	// (0x0007840f) cam4_image_uncrop_qvga_pane

0xa46c,	// (0x00078472) vid4_image_uncrop_qcif_pane

0xa690,	// (0x00078696) cam6_image_uncrop_qvga_pane_ParamLimits

0xa690,	// (0x00078696) cam6_image_uncrop_qvga_pane

0xdf3b,	// (0x0007bf41) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf3b,	// (0x0007bf41) vid6_image_uncrop_qcif_pane

0x96e3,	// (0x000776e9) bg_popup_preview_window_pane_cp03

0xe205,	// (0x0007c20b) list_cset_text2_pane

0xe20d,	// (0x0007c213) main_cset6_text2_pane_g1

0xe215,	// (0x0007c21b) main_cset6_text2_pane_t1

0xe63b,	// (0x0007c641) list_cset_text2_pane_t1_ParamLimits

0xe63b,	// (0x0007c641) list_cset_text2_pane_t1

0x96ed,	// (0x000776f3) main_radioblah_pane_ParamLimits

0x7817,	// (0x0007581d) main_mobtv_info_pane_t3_ParamLimits

0x7817,	// (0x0007581d) main_mobtv_info_pane_t3

0x7b27,	// (0x00075b2d) main_radioblah_pane_g1

0x7b61,	// (0x00075b67) main_radioblah_info_pane_g1

0x7be6,	// (0x00075bec) main_radioblah_info_pane_t3_ParamLimits

0x7be6,	// (0x00075bec) main_radioblah_info_pane_t3

0x1f07,	// (0x0006ff0d) highlight_cell_cale_month_pane_ParamLimits

0x1f07,	// (0x0006ff0d) highlight_cell_cale_month_pane

0xf0b4,	// (0x0007d0ba) main_phob_fisheye_pane

0xd17f,	// (0x0007b185) scroll_pane_cp0031_ParamLimits

0xd17f,	// (0x0007b185) scroll_pane_cp0031

0xe04d,	// (0x0007c053) wait_bar_pane_cp08_ParamLimits

0x71c0,	// (0x000751c6) cset_list_set_pane_copy1_ParamLimits

0xe655,	// (0x0007c65b) highlight_cell_cale_month_pane_g1

0x7c69,	// (0x00075c6f) highlight_cell_cale_month_pane_t1

0xdcca,	// (0x0007bcd0) list_gen_pane_cp01

0xd937,	// (0x0007b93d) scroll_pane_01

0x7c77,	// (0x00075c7d) list_single_double_fisheye_pane

0x7c80,	// (0x00075c86) list_double_fisheye_pane_g1_ParamLimits

0x7c80,	// (0x00075c86) list_double_fisheye_pane_g1

0x7c8c,	// (0x00075c92) list_double_fisheye_pane_g2_ParamLimits

0x7c8c,	// (0x00075c92) list_double_fisheye_pane_g2

0x7ca0,	// (0x00075ca6) list_double_fisheye_pane_g3_ParamLimits

0x7ca0,	// (0x00075ca6) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007dcaf) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007dcaf) list_double_fisheye_pane_g

0x7cc9,	// (0x00075ccf) list_double_fisheye_pane_t1_ParamLimits

0x7cc9,	// (0x00075ccf) list_double_fisheye_pane_t1

0x7ce4,	// (0x00075cea) list_double_fisheye_pane_t2_ParamLimits

0x7ce4,	// (0x00075cea) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007dcba) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007dcba) list_double_fisheye_pane_t

0xf0b4,	// (0x0007d0ba) main_call5_pane

0x790c,	// (0x00075912) sc_swipe_pane_ParamLimits

0x790c,	// (0x00075912) sc_swipe_pane

0x7d19,	// (0x00075d1f) call5_image_pane_ParamLimits

0x7d19,	// (0x00075d1f) call5_image_pane

0x7d36,	// (0x00075d3c) call5_swipe_1_pane_ParamLimits

0x7d36,	// (0x00075d3c) call5_swipe_1_pane

0x7d49,	// (0x00075d4f) call5_swipe_2_pane_ParamLimits

0x7d49,	// (0x00075d4f) call5_swipe_2_pane

0x7d74,	// (0x00075d7a) popup_call5_audio_first_window_ParamLimits

0x7d74,	// (0x00075d7a) popup_call5_audio_first_window

0xd0a3,	// (0x0007b0a9) call5_swipe_1_pane_g1_ParamLimits

0xd0a3,	// (0x0007b0a9) call5_swipe_1_pane_g1

0xe65d,	// (0x0007c663) call5_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x0007c663) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007dcbf) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007dcbf) call5_swipe_1_pane_g

0xe669,	// (0x0007c66f) call5_swipe_1_pane_t1_ParamLimits

0xe669,	// (0x0007c66f) call5_swipe_1_pane_t1

0xd0a3,	// (0x0007b0a9) call5_swipe_2_pane_g1_ParamLimits

0xd0a3,	// (0x0007b0a9) call5_swipe_2_pane_g1

0xe67e,	// (0x0007c684) call5_swipe_2_pane_g2_ParamLimits

0xe67e,	// (0x0007c684) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007dcc4) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007dcc4) call5_swipe_2_pane_g

0xe68a,	// (0x0007c690) call5_swipe_2_pane_t1_ParamLimits

0xe68a,	// (0x0007c690) call5_swipe_2_pane_t1

0xe69f,	// (0x0007c6a5) sc_swipe_pane_g1_ParamLimits

0xe69f,	// (0x0007c6a5) sc_swipe_pane_g1

0xe6ac,	// (0x0007c6b2) sc_swipe_pane_g2_ParamLimits

0xe6ac,	// (0x0007c6b2) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007dcc9) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007dcc9) sc_swipe_pane_g

0xe6b8,	// (0x0007c6be) sc_swipe_pane_t1_ParamLimits

0xe6b8,	// (0x0007c6be) sc_swipe_pane_t1

0xf0b4,	// (0x0007d0ba) main_cmail_launcher_pane

0x7d89,	// (0x00075d8f) aid_size_cell_cmail_l_ParamLimits

0x7d89,	// (0x00075d8f) aid_size_cell_cmail_l

0x7d97,	// (0x00075d9d) grid_cmail_l_pane_ParamLimits

0x7d97,	// (0x00075d9d) grid_cmail_l_pane

0x7db0,	// (0x00075db6) cell_cmail_l_pane_ParamLimits

0x7db0,	// (0x00075db6) cell_cmail_l_pane

0xe6cd,	// (0x0007c6d3) cell_cmail_l_pane_g1_ParamLimits

0xe6cd,	// (0x0007c6d3) cell_cmail_l_pane_g1

0xe6d9,	// (0x0007c6df) cell_cmail_l_pane_t1_ParamLimits

0xe6d9,	// (0x0007c6df) cell_cmail_l_pane_t1

0xe6ef,	// (0x0007c6f5) cell_cmail_l_pane_t2_ParamLimits

0xe6ef,	// (0x0007c6f5) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007dcce) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007dcce) cell_cmail_l_pane_t

0xbce3,	// (0x00079ce9) grid_highlight_pane_cp018_ParamLimits

0xbce3,	// (0x00079ce9) grid_highlight_pane_cp018

0xfdaf,	// (0x0006ddb5) main2_pane_ParamLimits

0xfdaf,	// (0x0006ddb5) main2_pane

0xaa8f,	// (0x00078a95) popup_sp_fs_action_menu_bg_pane_g1

0xaa97,	// (0x00078a9d) popup_sp_fs_action_menu_bg_pane_g2

0xaa9f,	// (0x00078aa5) popup_sp_fs_action_menu_bg_pane_g3

0xaaa7,	// (0x00078aad) popup_sp_fs_action_menu_bg_pane_g4

0xaaaf,	// (0x00078ab5) popup_sp_fs_action_menu_bg_pane_g5

0xaab7,	// (0x00078abd) popup_sp_fs_action_menu_bg_pane_g6

0xaabf,	// (0x00078ac5) popup_sp_fs_action_menu_bg_pane_g7

0xaac7,	// (0x00078acd) popup_sp_fs_action_menu_bg_pane_g8

0xaacf,	// (0x00078ad5) popup_sp_fs_action_menu_bg_pane_g9

0xaad7,	// (0x00078add) popup_sp_fs_action_menu_bg_pane_g10

0xaad7,	// (0x00078add) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007d18c) popup_sp_fs_action_menu_bg_pane_g

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g3_g1

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t3_g3_g2

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0007d23a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0007d23a) list_medium_line_x2_t3_g3_g

0x0d94,	// (0x0006ed9a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d94,	// (0x0006ed9a) list_medium_line_x2_t3_g3_t1

0x0da9,	// (0x0006edaf) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0da9,	// (0x0006edaf) list_medium_line_x2_t3_g3_t2

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0007d241) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0007d241) list_medium_line_x2_t3_g3_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g2_g1

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0007d248) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0007d248) list_medium_line_x2_t3_g2_g

0x0dd2,	// (0x0006edd8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0dd2,	// (0x0006edd8) list_medium_line_x2_t3_g2_t1

0x0de8,	// (0x0006edee) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0de8,	// (0x0006edee) list_medium_line_x2_t3_g2_t2

0x0dfa,	// (0x0006ee00) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0dfa,	// (0x0006ee00) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0007d24d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0007d24d) list_medium_line_x2_t3_g2_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t4_g4_g1

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t4_g4_g2

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t4_g4_g3

0x0e24,	// (0x0006ee2a) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0e24,	// (0x0006ee2a) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0007d254) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0007d254) list_medium_line_x2_t4_g4_g

0x0e30,	// (0x0006ee36) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0e30,	// (0x0006ee36) list_medium_line_x2_t4_g4_t1

0x0e4a,	// (0x0006ee50) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0e4a,	// (0x0006ee50) list_medium_line_x2_t4_g4_t2

0x0e60,	// (0x0006ee66) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0e60,	// (0x0006ee66) list_medium_line_x2_t4_g4_t3

0x0e75,	// (0x0006ee7b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0e75,	// (0x0006ee7b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0007d25d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0007d25d) list_medium_line_x2_t4_g4_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g4_g1

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t2_g4_g2

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t2_g4_g3

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0007d2c4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0007d2c4) list_medium_line_x2_t2_g4_g

0x1f2d,	// (0x0006ff33) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1f2d,	// (0x0006ff33) list_medium_line_x2_t2_g4_t1

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0007d2cd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0007d2cd) list_medium_line_x2_t2_g4_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g3_g1

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t2_g3_g2

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0007d23a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0007d23a) list_medium_line_x2_t2_g3_g

0x1f42,	// (0x0006ff48) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1f42,	// (0x0006ff48) list_medium_line_x2_t2_g3_t1

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0007d2d2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0007d2d2) list_medium_line_x2_t2_g3_t

0x20a1,	// (0x000700a7) main_sp_fs_list_pane_ParamLimits

0x20a1,	// (0x000700a7) main_sp_fs_list_pane

0xd016,	// (0x0007b01c) sp_fs_scroll_pane_ParamLimits

0xd016,	// (0x0007b01c) sp_fs_scroll_pane

0x20ad,	// (0x000700b3) list_medium_line_x2_t3_t1

0x20bd,	// (0x000700c3) list_medium_line_x2_t3_t2

0x20cb,	// (0x000700d1) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0007d31d) list_medium_line_x2_t3_t

0x20d9,	// (0x000700df) list_medium_line_x3_t4_t1

0x20e9,	// (0x000700ef) list_medium_line_x3_t4_t2

0x20f7,	// (0x000700fd) list_medium_line_x3_t4_t3

0x20cb,	// (0x000700d1) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0007d324) list_medium_line_x3_t4_t

0x2105,	// (0x0007010b) list_medium_line_x4_t5_t1

0x2115,	// (0x0007011b) list_medium_line_x4_t5_t2

0x20f7,	// (0x000700fd) list_medium_line_x4_t5_t3

0x2123,	// (0x00070129) list_medium_line_x4_t5_t4

0x20cb,	// (0x000700d1) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0007d32d) list_medium_line_x4_t5_t

0x0d70,	// (0x0006ed76) list_medium_line_t4_g4_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_t4_g4_g1

0x0e24,	// (0x0006ee2a) list_medium_line_t4_g4_g2_ParamLimits

0x0e24,	// (0x0006ee2a) list_medium_line_t4_g4_g2

0x2131,	// (0x00070137) list_medium_line_t4_g4_g3_ParamLimits

0x2131,	// (0x00070137) list_medium_line_t4_g4_g3

0x0d88,	// (0x0006ed8e) list_medium_line_t4_g4_g4_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0007d338) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0007d338) list_medium_line_t4_g4_g

0x213d,	// (0x00070143) list_medium_line_t4_g4_t1_ParamLimits

0x213d,	// (0x00070143) list_medium_line_t4_g4_t1

0x2152,	// (0x00070158) list_medium_line_t4_g4_t2_ParamLimits

0x2152,	// (0x00070158) list_medium_line_t4_g4_t2

0x2168,	// (0x0007016e) list_medium_line_t4_g4_t3_ParamLimits

0x2168,	// (0x0007016e) list_medium_line_t4_g4_t3

0x0dbd,	// (0x0006edc3) list_medium_line_t4_g4_t4_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0007d341) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0007d341) list_medium_line_t4_g4_t

0x2244,	// (0x0007024a) chi_dic_find_pane_g1

0x33fc,	// (0x00071402) main_tport_pane

0x64c3,	// (0x000744c9) list_medium_line_plain_t1

0x6575,	// (0x0007457b) list_medium_line_t2_g2_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t2_g2_g1

0x6581,	// (0x00074587) list_medium_line_t2_g2_g2_ParamLimits

0x6581,	// (0x00074587) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007da06) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007da06) list_medium_line_t2_g2_g

0x658d,	// (0x00074593) list_medium_line_t2_g2_t1_ParamLimits

0x658d,	// (0x00074593) list_medium_line_t2_g2_t1

0x65a7,	// (0x000745ad) list_medium_line_t2_g2_t2_ParamLimits

0x65a7,	// (0x000745ad) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007da0b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007da0b) list_medium_line_t2_g2_t

0xa677,	// (0x0007867d) aid_sp_fs_list_icon_a_sm

0xa67f,	// (0x00078685) aid_sp_fs_list_icon_d

0xa687,	// (0x0007868d) aid_sp_fs_text_primary

0xdcd3,	// (0x0007bcd9) aid_sp_fs_text_secondary

0x6c41,	// (0x00074c47) list_medium_line

0x6c41,	// (0x00074c47) list_medium_line_g2

0x6c41,	// (0x00074c47) list_medium_line_g3

0x6c41,	// (0x00074c47) list_medium_line_plain

0x6c41,	// (0x00074c47) list_medium_line_plain_t2

0x6c41,	// (0x00074c47) list_medium_line_plain_t3

0x6c41,	// (0x00074c47) list_medium_line_right_icon

0x6c41,	// (0x00074c47) list_medium_line_right_iconx2

0x6c41,	// (0x00074c47) list_medium_line_t2

0x6c41,	// (0x00074c47) list_medium_line_t2_g2

0x6c41,	// (0x00074c47) list_medium_line_t2_g3

0x6c41,	// (0x00074c47) list_medium_line_t2_right_icon

0x6c41,	// (0x00074c47) list_medium_line_t2_right_iconx2

0x6c41,	// (0x00074c47) list_medium_line_t3

0x6c41,	// (0x00074c47) list_medium_line_t3_g2

0x6c41,	// (0x00074c47) list_medium_line_t3_g3

0x6c41,	// (0x00074c47) list_medium_line_t3_right_iconx2

0x6c4a,	// (0x00074c50) list_medium_line_t4_g4

0x6c41,	// (0x00074c47) list_medium_line_x2

0x6c41,	// (0x00074c47) list_medium_line_x2_t2_g2

0x6c41,	// (0x00074c47) list_medium_line_x2_t2_g3

0x6c41,	// (0x00074c47) list_medium_line_x2_t2_g4

0x6c41,	// (0x00074c47) list_medium_line_x2_t3

0x6c41,	// (0x00074c47) list_medium_line_x2_t3_g2

0x6c41,	// (0x00074c47) list_medium_line_x2_t3_g3

0x6c41,	// (0x00074c47) list_medium_line_x2_t3_g4

0x6c41,	// (0x00074c47) list_medium_line_x2_t4_g2

0x6c41,	// (0x00074c47) list_medium_line_x2_t4_g4

0x6c53,	// (0x00074c59) list_medium_line_x3

0x6c53,	// (0x00074c59) list_medium_line_x3_t4

0x6c53,	// (0x00074c59) list_medium_line_x3_t4_g4

0x6c4a,	// (0x00074c50) list_medium_line_x4_t4

0x6c4a,	// (0x00074c50) list_medium_line_x4_t4_g7

0x6c4a,	// (0x00074c50) list_medium_line_x4_t5

0x6c5c,	// (0x00074c62) list_single_fs_dyc_pane_ParamLimits

0x6c5c,	// (0x00074c62) list_single_fs_dyc_pane

0x0d70,	// (0x0006ed76) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x4_t4_g7_g1

0x73c4,	// (0x000753ca) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73c4,	// (0x000753ca) list_medium_line_x4_t4_g7_g2

0x73d0,	// (0x000753d6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73d0,	// (0x000753d6) list_medium_line_x4_t4_g7_g3

0x73df,	// (0x000753e5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73df,	// (0x000753e5) list_medium_line_x4_t4_g7_g4

0x73eb,	// (0x000753f1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73eb,	// (0x000753f1) list_medium_line_x4_t4_g7_g5

0x73fa,	// (0x00075400) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73fa,	// (0x00075400) list_medium_line_x4_t4_g7_g6

0x7409,	// (0x0007540f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7409,	// (0x0007540f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007dbd6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007dbd6) list_medium_line_x4_t4_g7_g

0x7415,	// (0x0007541b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7415,	// (0x0007541b) list_medium_line_x4_t4_g7_t1

0x742a,	// (0x00075430) list_medium_line_x4_t4_g7_t2_ParamLimits

0x742a,	// (0x00075430) list_medium_line_x4_t4_g7_t2

0x743f,	// (0x00075445) list_medium_line_x4_t4_g7_t3_ParamLimits

0x743f,	// (0x00075445) list_medium_line_x4_t4_g7_t3

0x7454,	// (0x0007545a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7454,	// (0x0007545a) list_medium_line_x4_t4_g7_t4

0x7466,	// (0x0007546c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7466,	// (0x0007546c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007dbe5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007dbe5) list_medium_line_x4_t4_g7_t

0x7478,	// (0x0007547e) list_single_dyc_row_pane_ParamLimits

0x7478,	// (0x0007547e) list_single_dyc_row_pane

0x7d06,	// (0x00075d0c) call5_gesture_pane_ParamLimits

0x7d06,	// (0x00075d0c) call5_gesture_pane

0x7d5c,	// (0x00075d62) call5_windows_pane_ParamLimits

0x7d5c,	// (0x00075d62) call5_windows_pane

0x7dc2,	// (0x00075dc8) call5_swipe_1_pane_cp_ParamLimits

0x7dc2,	// (0x00075dc8) call5_swipe_1_pane_cp

0x7dce,	// (0x00075dd4) call5_swipe_2_pane_cp_ParamLimits

0x7dce,	// (0x00075dd4) call5_swipe_2_pane_cp

0xab9e,	// (0x00078ba4) call5_image_pane_cp

0x7dda,	// (0x00075de0) popup_call5_audio_first_window_cp_ParamLimits

0x7dda,	// (0x00075de0) popup_call5_audio_first_window_cp

0xe69f,	// (0x0007c6a5) call5_swipe_1_pane_g1_cp_ParamLimits

0xe69f,	// (0x0007c6a5) call5_swipe_1_pane_g1_cp

0xe70c,	// (0x0007c712) call5_swipe_1_pane_g2_cp

0xe6b8,	// (0x0007c6be) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6b8,	// (0x0007c6be) call5_swipe_1_pane_t1_cp

0xe69f,	// (0x0007c6a5) call5_swipe_2_pane_g1_cp_ParamLimits

0xe69f,	// (0x0007c6a5) call5_swipe_2_pane_g1_cp

0xe714,	// (0x0007c71a) call5_swipe_2_pane_g2_cp

0xe71c,	// (0x0007c722) call5_swipe_2_pane_t1_cp_ParamLimits

0xe71c,	// (0x0007c722) call5_swipe_2_pane_t1_cp

0xbce3,	// (0x00079ce9) main_sp_fs_email_pane

0xe306,	// (0x0007c30c) main_sp_fs_listscroll_pane_te

0x7de8,	// (0x00075dee) popup_sp_fs_action_menu_pane_ParamLimits

0x7de8,	// (0x00075dee) popup_sp_fs_action_menu_pane

0xce68,	// (0x0007ae6e) bg_sp_fs_ctrlbar_pane_g1

0xe731,	// (0x0007c737) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe73a,	// (0x0007c740) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe743,	// (0x0007c749) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xce68,	// (0x0007ae6e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007dcd3) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcc47,	// (0x0007ac4d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcc47,	// (0x0007ac4d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe74c,	// (0x0007c752) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe74c,	// (0x0007c752) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe758,	// (0x0007c75e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe758,	// (0x0007c75e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007dcdc) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007dcdc) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe764,	// (0x0007c76a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe764,	// (0x0007c76a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7e2e,	// (0x00075e34) list_medium_line_t2_right_icon_g1

0x7e36,	// (0x00075e3c) list_medium_line_t2_right_icon_t1

0x7e46,	// (0x00075e4c) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007dce1) list_medium_line_t2_right_icon_t

0xca30,	// (0x0007aa36) bg_sp_fs_ctrlbar_pane_ParamLimits

0xca30,	// (0x0007aa36) bg_sp_fs_ctrlbar_pane

0x7ea2,	// (0x00075ea8) main_sp_fs_ctrlbar_button_pane_cp01

0x7eac,	// (0x00075eb2) main_sp_fs_ctrlbar_ddmenu_pane

0xe7b8,	// (0x0007c7be) main_sp_fs_ctrlbar_pane_g1

0xe7c4,	// (0x0007c7ca) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007dce6) main_sp_fs_ctrlbar_pane_g

0xe7d0,	// (0x0007c7d6) main_sp_fs_ctrlbar_pane_t1

0x7eb6,	// (0x00075ebc) main_sp_fs_ctrlbar_pane

0x7eda,	// (0x00075ee0) main_sp_fs_listscroll_pane_te_cp01

0x7efa,	// (0x00075f00) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7efa,	// (0x00075f00) popup_sp_fs_action_menu_pane_cp01

0xbce3,	// (0x00079ce9) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xbce3,	// (0x00079ce9) bg_sp_fs_highlight_list_pane_cp01

0xa69e,	// (0x000786a4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa69e,	// (0x000786a4) sp_fs_action_menu_list_gene_pane_g1

0xe800,	// (0x0007c806) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe800,	// (0x0007c806) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007dcf0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007dcf0) sp_fs_action_menu_list_gene_pane_g

0xa6ad,	// (0x000786b3) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6ad,	// (0x000786b3) sp_fs_action_menu_list_gene_pane_t1

0xa6c5,	// (0x000786cb) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6c5,	// (0x000786cb) sp_fs_action_menu_list_gene_pane

0xe80d,	// (0x0007c813) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe80d,	// (0x0007c813) popup_sp_fs_action_menu_bg_pane

0xa6e8,	// (0x000786ee) sp_fs_action_menu_list_pane_ParamLimits

0xa6e8,	// (0x000786ee) sp_fs_action_menu_list_pane

0x7f2a,	// (0x00075f30) sp_fs_scroll_pane_cp01_ParamLimits

0x7f2a,	// (0x00075f30) sp_fs_scroll_pane_cp01

0x7f50,	// (0x00075f56) list_medium_line_plain_t2_t1

0x7f60,	// (0x00075f66) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007dcf5) list_medium_line_plain_t2_t

0x7f70,	// (0x00075f76) list_medium_line_plain_t3_t1

0x7f80,	// (0x00075f86) list_medium_line_plain_t3_t2

0x7f8e,	// (0x00075f94) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007dcfa) list_medium_line_plain_t3_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t2_g2_g1

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0007d248) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0007d248) list_medium_line_x2_t2_g2_g

0x213d,	// (0x00070143) list_medium_line_x2_t2_g2_t1_ParamLimits

0x213d,	// (0x00070143) list_medium_line_x2_t2_g2_t1

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007dd01) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007dd01) list_medium_line_x2_t2_g2_t

0x0d70,	// (0x0006ed76) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t4_g2_g1

0x7f9c,	// (0x00075fa2) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7f9c,	// (0x00075fa2) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007dd06) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007dd06) list_medium_line_x2_t4_g2_g

0x7fae,	// (0x00075fb4) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7fae,	// (0x00075fb4) list_medium_line_x2_t4_g2_t1

0x7fc8,	// (0x00075fce) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7fc8,	// (0x00075fce) list_medium_line_x2_t4_g2_t2

0x7fde,	// (0x00075fe4) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7fde,	// (0x00075fe4) list_medium_line_x2_t4_g2_t3

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007dd0b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007dd0b) list_medium_line_x2_t4_g2_t

0x7ff3,	// (0x00075ff9) list_medium_line_t3_right_iconx2_g1

0x7e2e,	// (0x00075e34) list_medium_line_t3_right_iconx2_g2

0x7ffb,	// (0x00076001) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007dd14) list_medium_line_t3_right_iconx2_g

0x8005,	// (0x0007600b) list_medium_line_t3_right_iconx2_t1

0x8015,	// (0x0007601b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007dd1b) list_medium_line_t3_right_iconx2_t

0x0d70,	// (0x0006ed76) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x3_t4_g4_g1

0x0d7c,	// (0x0006ed82) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x3_t4_g4_g2

0x0e24,	// (0x0006ee2a) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0e24,	// (0x0006ee2a) list_medium_line_x3_t4_g4_g3

0x8023,	// (0x00076029) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8023,	// (0x00076029) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007dd20) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007dd20) list_medium_line_x3_t4_g4_g

0x802f,	// (0x00076035) list_medium_line_x3_t4_g4_t1_ParamLimits

0x802f,	// (0x00076035) list_medium_line_x3_t4_g4_t1

0x8046,	// (0x0007604c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8046,	// (0x0007604c) list_medium_line_x3_t4_g4_t2

0x805f,	// (0x00076065) list_medium_line_x3_t4_g4_t3_ParamLimits

0x805f,	// (0x00076065) list_medium_line_x3_t4_g4_t3

0x8074,	// (0x0007607a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8074,	// (0x0007607a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007dd29) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007dd29) list_medium_line_x3_t4_g4_t

0x8091,	// (0x00076097) list_single_dyc_row_text_pane_t1_ParamLimits

0x8091,	// (0x00076097) list_single_dyc_row_text_pane_t1

0x80da,	// (0x000760e0) list_single_dyc_row_text_pane_t2_ParamLimits

0x80da,	// (0x000760e0) list_single_dyc_row_text_pane_t2

0xa70c,	// (0x00078712) list_single_dyc_row_text_pane_t3_ParamLimits

0xa70c,	// (0x00078712) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007dd32) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007dd32) list_single_dyc_row_text_pane_t

0xa730,	// (0x00078736) list_single_dyc_row_pane_g1_ParamLimits

0xa730,	// (0x00078736) list_single_dyc_row_pane_g1

0xa73c,	// (0x00078742) list_single_dyc_row_pane_g2_ParamLimits

0xa73c,	// (0x00078742) list_single_dyc_row_pane_g2

0xa748,	// (0x0007874e) list_single_dyc_row_pane_g3_ParamLimits

0xa748,	// (0x0007874e) list_single_dyc_row_pane_g3

0xa754,	// (0x0007875a) list_single_dyc_row_pane_g4_ParamLimits

0xa754,	// (0x0007875a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007dd3f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007dd3f) list_single_dyc_row_pane_g

0xa760,	// (0x00078766) list_single_dyc_row_text_pane_ParamLimits

0xa760,	// (0x00078766) list_single_dyc_row_text_pane

0x96e3,	// (0x000776e9) bg_sp_fs_scroll_pane

0xe81b,	// (0x0007c821) thumb_sp_fs_scroll_pane

0x6575,	// (0x0007457b) list_medium_line_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_g1

0x820f,	// (0x00076215) list_medium_line_t1_ParamLimits

0x820f,	// (0x00076215) list_medium_line_t1

0x0d70,	// (0x0006ed76) list_medium_line_x2_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_g1

0x0d7c,	// (0x0006ed82) list_medium_line_x2_g2_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007dd48) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007dd48) list_medium_line_x2_g

0xa77f,	// (0x00078785) list_medium_line_x2_t1_ParamLimits

0xa77f,	// (0x00078785) list_medium_line_x2_t1

0x0d70,	// (0x0006ed76) list_medium_line_x3_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x3_g1

0x0d7c,	// (0x0006ed82) list_medium_line_x3_g2_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007dd48) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007dd48) list_medium_line_x3_g

0xa77f,	// (0x00078785) list_medium_line_x3_t1_ParamLimits

0xa77f,	// (0x00078785) list_medium_line_x3_t1

0xe824,	// (0x0007c82a) thumb_sp_fs_scroll_pane_g1

0xe82d,	// (0x0007c833) thumb_sp_fs_scroll_pane_g2

0xe836,	// (0x0007c83c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007dd4d) thumb_sp_fs_scroll_pane_g

0xe824,	// (0x0007c82a) bg_sp_fs_scroll_pane_g1

0xe82d,	// (0x0007c833) bg_sp_fs_scroll_pane_g2

0xe836,	// (0x0007c83c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007dd4d) bg_sp_fs_scroll_pane_g

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d70,	// (0x0006ed76) list_medium_line_x2_t3_g4_g1

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0e18,	// (0x0006ee1e) list_medium_line_x2_t3_g4_g2

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d7c,	// (0x0006ed82) list_medium_line_x2_t3_g4_g3

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d88,	// (0x0006ed8e) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0007d2c4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0007d2c4) list_medium_line_x2_t3_g4_g

0x8224,	// (0x0007622a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8224,	// (0x0007622a) list_medium_line_x2_t3_g4_t1

0x823a,	// (0x00076240) list_medium_line_x2_t3_g4_t2_ParamLimits

0x823a,	// (0x00076240) list_medium_line_x2_t3_g4_t2

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0dbd,	// (0x0006edc3) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007dd54) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007dd54) list_medium_line_x2_t3_g4_t

0x6575,	// (0x0007457b) list_medium_line_g2_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_g2_g1

0x6581,	// (0x00074587) list_medium_line_g2_g2_ParamLimits

0x6581,	// (0x00074587) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007da06) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007da06) list_medium_line_g2_g

0x8254,	// (0x0007625a) list_medium_line_g2_t1_ParamLimits

0x8254,	// (0x0007625a) list_medium_line_g2_t1

0x6575,	// (0x0007457b) list_medium_line_t3_g2_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t3_g2_g1

0x6581,	// (0x00074587) list_medium_line_t3_g2_g2_ParamLimits

0x6581,	// (0x00074587) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007da06) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007da06) list_medium_line_t3_g2_g

0x8269,	// (0x0007626f) list_medium_line_t3_g2_t1_ParamLimits

0x8269,	// (0x0007626f) list_medium_line_t3_g2_t1

0x8283,	// (0x00076289) list_medium_line_t3_g2_t2_ParamLimits

0x8283,	// (0x00076289) list_medium_line_t3_g2_t2

0x8299,	// (0x0007629f) list_medium_line_t3_g2_t3_ParamLimits

0x8299,	// (0x0007629f) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007dd5b) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007dd5b) list_medium_line_t3_g2_t

0x7e2e,	// (0x00075e34) list_medium_line_right_icon_g1

0x82b3,	// (0x000762b9) list_medium_line_right_icon_t1

0x6575,	// (0x0007457b) list_medium_line_t2_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t2_g1

0x82c1,	// (0x000762c7) list_medium_line_t2_t1_ParamLimits

0x82c1,	// (0x000762c7) list_medium_line_t2_t1

0x82db,	// (0x000762e1) list_medium_line_t2_t2_ParamLimits

0x82db,	// (0x000762e1) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007dd62) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007dd62) list_medium_line_t2_t

0x6575,	// (0x0007457b) list_medium_line_t3_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t3_g1

0x82f4,	// (0x000762fa) list_medium_line_t3_t1_ParamLimits

0x82f4,	// (0x000762fa) list_medium_line_t3_t1

0x830e,	// (0x00076314) list_medium_line_t3_t2_ParamLimits

0x830e,	// (0x00076314) list_medium_line_t3_t2

0x8324,	// (0x0007632a) list_medium_line_t3_t3_ParamLimits

0x8324,	// (0x0007632a) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007dd67) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007dd67) list_medium_line_t3_t

0x6575,	// (0x0007457b) list_medium_line_g3_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_g3_g1

0x8339,	// (0x0007633f) list_medium_line_g3_g2_ParamLimits

0x8339,	// (0x0007633f) list_medium_line_g3_g2

0x6581,	// (0x00074587) list_medium_line_g3_g3_ParamLimits

0x6581,	// (0x00074587) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007dd6e) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007dd6e) list_medium_line_g3_g

0x8345,	// (0x0007634b) list_medium_line_g3_t1_ParamLimits

0x8345,	// (0x0007634b) list_medium_line_g3_t1

0x6575,	// (0x0007457b) list_medium_line_t2_g3_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t2_g3_g1

0x8339,	// (0x0007633f) list_medium_line_t2_g3_g2_ParamLimits

0x8339,	// (0x0007633f) list_medium_line_t2_g3_g2

0x6581,	// (0x00074587) list_medium_line_t2_g3_g3_ParamLimits

0x6581,	// (0x00074587) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007dd6e) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007dd6e) list_medium_line_t2_g3_g

0x835a,	// (0x00076360) list_medium_line_t2_g3_t1_ParamLimits

0x835a,	// (0x00076360) list_medium_line_t2_g3_t1

0x8374,	// (0x0007637a) list_medium_line_t2_g3_t2_ParamLimits

0x8374,	// (0x0007637a) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007dd75) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007dd75) list_medium_line_t2_g3_t

0x6575,	// (0x0007457b) list_medium_line_t3_g3_g1_ParamLimits

0x6575,	// (0x0007457b) list_medium_line_t3_g3_g1

0x8339,	// (0x0007633f) list_medium_line_t3_g3_g2_ParamLimits

0x8339,	// (0x0007633f) list_medium_line_t3_g3_g2

0x6581,	// (0x00074587) list_medium_line_t3_g3_g3_ParamLimits

0x6581,	// (0x00074587) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007dd6e) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007dd6e) list_medium_line_t3_g3_g

0x838e,	// (0x00076394) list_medium_line_t3_g3_t1_ParamLimits

0x838e,	// (0x00076394) list_medium_line_t3_g3_t1

0x83a7,	// (0x000763ad) list_medium_line_t3_g3_t2_ParamLimits

0x83a7,	// (0x000763ad) list_medium_line_t3_g3_t2

0x83bd,	// (0x000763c3) list_medium_line_t3_g3_t3_ParamLimits

0x83bd,	// (0x000763c3) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007dd7a) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007dd7a) list_medium_line_t3_g3_t

0x7ff3,	// (0x00075ff9) list_medium_line_right_iconx2_g1

0x7e2e,	// (0x00075e34) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007dd81) list_medium_line_right_iconx2_g

0x83d7,	// (0x000763dd) list_medium_line_right_iconx2_t1

0x7ff3,	// (0x00075ff9) list_medium_line_t2_right_iconx2_g1

0x7e2e,	// (0x00075e34) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007dd81) list_medium_line_t2_right_iconx2_g

0x83e5,	// (0x000763eb) list_medium_line_t2_right_iconx2_t1

0x83f5,	// (0x000763fb) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007dd86) list_medium_line_t2_right_iconx2_t

0x8407,	// (0x0007640d) list_medium_line_x4_t4_t1

0x8415,	// (0x0007641b) list_medium_line_x4_t4_t2

0x8425,	// (0x0007642b) list_medium_line_x4_t4_t3

0x8435,	// (0x0007643b) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007dd8b) list_medium_line_x4_t4_t

0x8486,	// (0x0007648c) tport_appsw_pane_ParamLimits

0x8486,	// (0x0007648c) tport_appsw_pane

0x849d,	// (0x000764a3) tport_contact_pane_ParamLimits

0x849d,	// (0x000764a3) tport_contact_pane

0x84b5,	// (0x000764bb) tport_listscroll_pane_ParamLimits

0x84b5,	// (0x000764bb) tport_listscroll_pane

0x84c9,	// (0x000764cf) cell_tport_appsw_pane_ParamLimits

0x84c9,	// (0x000764cf) cell_tport_appsw_pane

0xd7f9,	// (0x0007b7ff) tport_appsw_pane_g1_ParamLimits

0xd7f9,	// (0x0007b7ff) tport_appsw_pane_g1

0xe83f,	// (0x0007c845) tport_contact_pane_g1

0xe848,	// (0x0007c84e) tport_contact_pane_t1

0xe856,	// (0x0007c85c) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007dd94) tport_contact_pane_t

0xe864,	// (0x0007c86a) list_tport_pane

0xe86d,	// (0x0007c873) scroll_pane_cp_030

0x8513,	// (0x00076519) cell_tport_appsw_pane_g1

0x8523,	// (0x00076529) cell_tport_appsw_pane_t1

0x8531,	// (0x00076537) grid_highlight_pane_cp019

0x8539,	// (0x0007653f) list_tport_double_graphic_pane_ParamLimits

0x8539,	// (0x0007653f) list_tport_double_graphic_pane

0xbce3,	// (0x00079ce9) list_highlight_pane_cp023_ParamLimits

0xbce3,	// (0x00079ce9) list_highlight_pane_cp023

0x8550,	// (0x00076556) list_tport_double_graphic_pane_g1_ParamLimits

0x8550,	// (0x00076556) list_tport_double_graphic_pane_g1

0x855d,	// (0x00076563) list_tport_double_graphic_pane_t1_ParamLimits

0x855d,	// (0x00076563) list_tport_double_graphic_pane_t1

0x8572,	// (0x00076578) list_tport_double_graphic_pane_t2_ParamLimits

0x8572,	// (0x00076578) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007dda0) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007dda0) list_tport_double_graphic_pane_t

0x96e3,	// (0x000776e9) main_cale_note_pane

0x5cbe,	// (0x00073cc4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cbe,	// (0x00073cc4) cell_vitu2_function_top_wide_pane_cp01

0x782b,	// (0x00075831) wait_bar_pane_cp05_ParamLimits

0xbce3,	// (0x00079ce9) listscroll_cmail_pane

0xe876,	// (0x0007c87c) list_cmail_pane

0x8584,	// (0x0007658a) list_cmail_body_pane

0x859b,	// (0x000765a1) list_single_cmail_header_caption_pane

0xe886,	// (0x0007c88c) list_single_cmail_header_detail_pane_ParamLimits

0xe886,	// (0x0007c88c) list_single_cmail_header_detail_pane

0xe8b8,	// (0x0007c8be) list_single_cmail_header_caption_pane_t1

0x85b8,	// (0x000765be) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85b8,	// (0x000765be) list_single_cmail_header_detail_pane_g1

0xa795,	// (0x0007879b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa795,	// (0x0007879b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007dda5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007dda5) list_single_cmail_header_detail_pane_g

0xa7a1,	// (0x000787a7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7a1,	// (0x000787a7) list_single_cmail_header_detail_pane_t1

0xa801,	// (0x00078807) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa801,	// (0x00078807) list_single_cmail_header_editor_pane_bg

0xe46b,	// (0x0007c471) list_cmail_body_pane_g1

0xe8dc,	// (0x0007c8e2) list_cmail_body_pane_t1

0xd819,	// (0x0007b81f) list_single_cmail_header_editor_pane_bg_g1

0xae10,	// (0x00078e16) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd829,	// (0x0007b82f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd821,	// (0x0007b827) list_single_cmail_header_editor_pane_bg_g1_copy3

0xda43,	// (0x0007ba49) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd849,	// (0x0007b84f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd839,	// (0x0007b83f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd841,	// (0x0007b847) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xadf0,	// (0x00078df6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85d0,	// (0x000765d6) calenote_gesture_pane_ParamLimits

0x85d0,	// (0x000765d6) calenote_gesture_pane

0x85f0,	// (0x000765f6) calenote_window_pane_ParamLimits

0x85f0,	// (0x000765f6) calenote_window_pane

0xe8ea,	// (0x0007c8f0) popup_note_window_cp01

0x860c,	// (0x00076612) calenote_swipe_1_pane_ParamLimits

0x860c,	// (0x00076612) calenote_swipe_1_pane

0x7dce,	// (0x00075dd4) calenote_swipe_2_pane_ParamLimits

0x7dce,	// (0x00075dd4) calenote_swipe_2_pane

0xe69f,	// (0x0007c6a5) calenote_swipe_1_pane_g1_ParamLimits

0xe69f,	// (0x0007c6a5) calenote_swipe_1_pane_g1

0xe6ac,	// (0x0007c6b2) calenote_swipe_1_pane_g2_ParamLimits

0xe6ac,	// (0x0007c6b2) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007dcc9) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007dcc9) calenote_swipe_1_pane_g

0xe8fc,	// (0x0007c902) calenote_swipe_1_pane_t1_ParamLimits

0xe8fc,	// (0x0007c902) calenote_swipe_1_pane_t1

0xe69f,	// (0x0007c6a5) calenote_swipe_2_pane_g1_ParamLimits

0xe69f,	// (0x0007c6a5) calenote_swipe_2_pane_g1

0xe91b,	// (0x0007c921) calenote_swipe_2_pane_g2_ParamLimits

0xe91b,	// (0x0007c921) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007ddb1) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007ddb1) calenote_swipe_2_pane_g

0xe927,	// (0x0007c92d) calenote_swipe_2_pane_t1_ParamLimits

0xe927,	// (0x0007c92d) calenote_swipe_2_pane_t1

0x96e3,	// (0x000776e9) main_mup_navstr_pane

0x48ad,	// (0x000728b3) main_mup3_pane_t7_ParamLimits

0x48ad,	// (0x000728b3) main_mup3_pane_t7

0xa1d9,	// (0x000781df) main_mp4_pane_g6_ParamLimits

0xa1d9,	// (0x000781df) main_mp4_pane_g6

0xa399,	// (0x0007839f) main_image3_pane_t4_ParamLimits

0xa399,	// (0x0007839f) main_image3_pane_t4

0x8621,	// (0x00076627) popup_navstr_preview_pane_ParamLimits

0x8621,	// (0x00076627) popup_navstr_preview_pane

0x8631,	// (0x00076637) scroll_navstr_pane_ParamLimits

0x8631,	// (0x00076637) scroll_navstr_pane

0x96e3,	// (0x000776e9) bg_popup_preview_window_pane_cp04

0xe94e,	// (0x0007c954) popup_navstr_preview_pane_t1

0x8645,	// (0x0007664b) scroll_navstr_pane_g1_ParamLimits

0x8645,	// (0x0007664b) scroll_navstr_pane_g1

0x8659,	// (0x0007665f) scroll_navstr_pane_t1_ParamLimits

0x8659,	// (0x0007665f) scroll_navstr_pane_t1

0xe8f3,	// (0x0007c8f9) bg_button_pane_cp014

0xe8f3,	// (0x0007c8f9) bg_button_pane_cp030

0x7cac,	// (0x00075cb2) list_double_fisheye_pane_g4_ParamLimits

0x7cac,	// (0x00075cb2) list_double_fisheye_pane_g4

0x7cb8,	// (0x00075cbe) list_double_fisheye_pane_g5_ParamLimits

0x7cb8,	// (0x00075cbe) list_double_fisheye_pane_g5

0xd016,	// (0x0007b01c) sp_fs_scroll_pane_cp03

0xe7b8,	// (0x0007c7be) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7c4,	// (0x0007c7ca) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007dce6) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7d0,	// (0x0007c7d6) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe87e,	// (0x0007c884) sp_fs_scroll_pane_cp02

0xaafa,	// (0x00078b00) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaafa,	// (0x00078b00) popup_sp_fs_calendar_preview_list_single_pane

0x96e3,	// (0x000776e9) main_cam6_pano_pane

0x96ed,	// (0x000776f3) main_mup3_pane_ParamLimits

0x96e3,	// (0x000776e9) main_phacti_pane

0x76fc,	// (0x00075702) bg_button_pane_cp11

0x7716,	// (0x0007571c) main_mobtv_info_pane_g2_ParamLimits

0x7716,	// (0x0007571c) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007dc46) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007dc46) main_mobtv_info_pane_g

0x78f3,	// (0x000758f9) sc_clock_pane_t5_ParamLimits

0x78f3,	// (0x000758f9) sc_clock_pane_t5

0x7b27,	// (0x00075b2d) main_radioblah_pane_g1_ParamLimits

0xe5d1,	// (0x0007c5d7) main_radioblah_pane_t3_ParamLimits

0xe5d1,	// (0x0007c5d7) main_radioblah_pane_t3

0xe5e9,	// (0x0007c5ef) main_radioblah_pane_t4_ParamLimits

0xe5e9,	// (0x0007c5ef) main_radioblah_pane_t4

0x7b4f,	// (0x00075b55) main_radioblah_text_pane_ParamLimits

0x7b4f,	// (0x00075b55) main_radioblah_text_pane

0x7b61,	// (0x00075b67) main_radioblah_info_pane_g1_ParamLimits

0x7bfa,	// (0x00075c00) main_radioblah_info_pane_t4_ParamLimits

0x7bfa,	// (0x00075c00) main_radioblah_info_pane_t4

0xbce3,	// (0x00079ce9) main_sp_fs_calendar_pane

0x8670,	// (0x00076676) main_phacti_pane_g1

0x8678,	// (0x0007667e) phacti_note_pane_ParamLimits

0x8678,	// (0x0007667e) phacti_note_pane

0xe965,	// (0x0007c96b) phacti_term_pane_ParamLimits

0xe965,	// (0x0007c96b) phacti_term_pane

0xe97a,	// (0x0007c980) phacti_note_pane_t1_ParamLimits

0xe97a,	// (0x0007c980) phacti_note_pane_t1

0xa818,	// (0x0007881e) phacti_term_pane_g1

0xa820,	// (0x00078826) phacti_term_pane_t1_ParamLimits

0xa820,	// (0x00078826) phacti_term_pane_t1

0xe991,	// (0x0007c997) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe999,	// (0x0007c99f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007ddbb) popup_sp_fs_calendar_preview_list_single_pane_g

0xe9a1,	// (0x0007c9a7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe9a1,	// (0x0007c9a7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b7,	// (0x0007c9bd) aid_popup_sp_fs_bg_corner_pane

0xce68,	// (0x0007ae6e) popup_sp_fs_calendar_preview_bg_pane_g1

0x96e3,	// (0x000776e9) popup_sp_fs_calendar_preview_bg_pane

0xe9bf,	// (0x0007c9c5) popup_sp_fs_calendar_preview_list_pane

0xca30,	// (0x0007aa36) bg_main_sp_fs_cale_pane_ParamLimits

0xca30,	// (0x0007aa36) bg_main_sp_fs_cale_pane

0xa853,	// (0x00078859) listscroll_cale_mrui_pane_ParamLimits

0xa853,	// (0x00078859) listscroll_cale_mrui_pane

0xa868,	// (0x0007886e) listscroll_sp_fs_schedule_track_pane

0xa871,	// (0x00078877) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa871,	// (0x00078877) main_sp_fs_ctrlbar_pane_cp01

0xe9c7,	// (0x0007c9cd) main_sp_fs_ribbon_pane

0xa884,	// (0x0007888a) popup_sp_fs_cale_preview_window

0x86ed,	// (0x000766f3) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86ed,	// (0x000766f3) list_single_sp_fs_schedule_track_pane

0xbce3,	// (0x00079ce9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xbce3,	// (0x00079ce9) bg_sp_fs_highlight_list_pane_cp03

0x8701,	// (0x00076707) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8701,	// (0x00076707) list_single_sp_fs_schedule_track_pane_g1

0x870d,	// (0x00076713) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x870d,	// (0x00076713) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007ddc0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007ddc0) list_single_sp_fs_schedule_track_pane_g

0x8719,	// (0x0007671f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8719,	// (0x0007671f) list_single_sp_fs_schedule_track_pane_t1

0x873b,	// (0x00076741) sp_fs_schedule_track_pane_ParamLimits

0x873b,	// (0x00076741) sp_fs_schedule_track_pane

0xe9cf,	// (0x0007c9d5) sp_fs_schedule_track_pane_g1

0xe9d7,	// (0x0007c9dd) sp_fs_schedule_track_pane_g2

0xe9df,	// (0x0007c9e5) sp_fs_schedule_track_pane_g3

0xe9e7,	// (0x0007c9ed) sp_fs_schedule_track_pane_g4

0xe9ef,	// (0x0007c9f5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007ddc5) sp_fs_schedule_track_pane_g

0xd819,	// (0x0007b81f) bg_sp_fs_schedule_viewer_highlight_g1

0xae10,	// (0x00078e16) bg_sp_fs_schedule_viewer_highlight_g2

0xd821,	// (0x0007b827) bg_sp_fs_schedule_viewer_highlight_g3

0xd829,	// (0x0007b82f) bg_sp_fs_schedule_viewer_highlight_g4

0xda43,	// (0x0007ba49) bg_sp_fs_schedule_viewer_highlight_g5

0xd839,	// (0x0007b83f) bg_sp_fs_schedule_viewer_highlight_g6

0xd841,	// (0x0007b847) bg_sp_fs_schedule_viewer_highlight_g7

0xd849,	// (0x0007b84f) bg_sp_fs_schedule_viewer_highlight_g8

0xadf0,	// (0x00078df6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007ddd0) bg_sp_fs_schedule_viewer_highlight_g

0x96e3,	// (0x000776e9) bg_main_sp_fs_ribbon_pane

0x8750,	// (0x00076756) main_sp_fs_ribbon_pane_g1

0xe9f7,	// (0x0007c9fd) main_sp_fs_ribbon_pane_t1

0x8759,	// (0x0007675f) main_sp_fs_ribbon_pane_t2

0xea06,	// (0x0007ca0c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007dde3) main_sp_fs_ribbon_pane_t

0xea15,	// (0x0007ca1b) main_sp_fs_ribbon_scheduler_pane

0xea1d,	// (0x0007ca23) bg_main_sp_fs_ribbon_pane_g1

0xea26,	// (0x0007ca2c) bg_main_sp_fs_ribbon_pane_g2

0xea2f,	// (0x0007ca35) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007ddea) bg_main_sp_fs_ribbon_pane_g

0xea37,	// (0x0007ca3d) main_sp_fs_ribbon_scheduler_pane_g1

0xea40,	// (0x0007ca46) main_sp_fs_ribbon_scheduler_pane_g2

0xea49,	// (0x0007ca4f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007ddf1) main_sp_fs_ribbon_scheduler_pane_g

0xea52,	// (0x0007ca58) list_cale_mrui_pane

0x8768,	// (0x0007676e) sp_fs_scroll_pane_cp07_ParamLimits

0x8768,	// (0x0007676e) sp_fs_scroll_pane_cp07

0x8784,	// (0x0007678a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8784,	// (0x0007678a) bg_sp_fs_schedule_viewer_highlight

0xea5f,	// (0x0007ca65) list_single_sp_fs_schedule_track_pane_cp01

0xea67,	// (0x0007ca6d) list_sp_fs_schedule_track_pane

0xea6f,	// (0x0007ca75) sp_fs_scroll_pane_cp06_ParamLimits

0xea6f,	// (0x0007ca75) sp_fs_scroll_pane_cp06

0xce68,	// (0x0007ae6e) bgmain_sp_fs_calendar_pane_g1

0x8796,	// (0x0007679c) list_single_cale_mrui_pane_ParamLimits

0x8796,	// (0x0007679c) list_single_cale_mrui_pane

0xa896,	// (0x0007889c) list_single_cale_mrui_row_pane_ParamLimits

0xa896,	// (0x0007889c) list_single_cale_mrui_row_pane

0xa8a3,	// (0x000788a9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8a3,	// (0x000788a9) list_single_cale_mrui_row_pane_g1

0xa8db,	// (0x000788e1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa8db,	// (0x000788e1) list_single_cale_mrui_row_pane_t1

0x87ba,	// (0x000767c0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87ba,	// (0x000767c0) list_single_cale_mrui_row_pane_t2

0xa8ed,	// (0x000788f3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa8ed,	// (0x000788f3) list_single_cale_mrui_row_pane_t3

0xa91c,	// (0x00078922) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa91c,	// (0x00078922) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007ddff) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007ddff) list_single_cale_mrui_row_pane_t

0x8820,	// (0x00076826) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8820,	// (0x00076826) list_single_cmail_header_editor_pane_bg_cp01

0x8844,	// (0x0007684a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8844,	// (0x0007684a) list_single_cmail_header_editor_pane_bg_cp02

0x8862,	// (0x00076868) main_radioblah_text_pane_t1_ParamLimits

0x8862,	// (0x00076868) main_radioblah_text_pane_t1

0xea8e,	// (0x0007ca94) cam6_indi_pane_cp01

0xea96,	// (0x0007ca9c) cam6_mode_pane_cp01

0xea9e,	// (0x0007caa4) cam6_pano_pane

0xeaa7,	// (0x0007caad) cam6_zoom_pane_cp01

0xeab1,	// (0x0007cab7) cam6_pano_image_pane

0xeaba,	// (0x0007cac0) cam6_pano_pane_g1

0xe46b,	// (0x0007c471) cam6_pano_pane_g2

0xeac3,	// (0x0007cac9) cam6_pano_pane_g3

0xeacc,	// (0x0007cad2) cam6_pano_pane_g4

0xd413,	// (0x0007b419) cam6_pano_pane_g5

0xead5,	// (0x0007cadb) cam6_pano_pane_g6

0xeadd,	// (0x0007cae3) cam6_pano_pane_g7

0xeae5,	// (0x0007caeb) cam6_pano_pane_g8

0xeaee,	// (0x0007caf4) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007de08) cam6_pano_pane_g

0x96e3,	// (0x000776e9) main_browser_tag_pane

0xe946,	// (0x0007c94c) grid_navstr_albumart_pane

0xeaf9,	// (0x0007caff) cell_navstr_albumart_pane_ParamLimits

0xeaf9,	// (0x0007caff) cell_navstr_albumart_pane

0xeb15,	// (0x0007cb1b) cell_navstr_albumart_pane_g1

0xc83d,	// (0x0007a843) cell_navstr_albumart_pane_g2

0xc84d,	// (0x0007a853) cell_navstr_albumart_pane_g3

0xc845,	// (0x0007a84b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007de1b) cell_navstr_albumart_pane_g

0x887d,	// (0x00076883) bt_list_pane_ParamLimits

0x887d,	// (0x00076883) bt_list_pane

0x8893,	// (0x00076899) bt_list_pane_t1

0x88a2,	// (0x000768a8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007de24) bt_list_pane_t

0x96e3,	// (0x000776e9) main_cale_prevew_pane

0x88b1,	// (0x000768b7) popup_cale_preview_window_ParamLimits

0x88b1,	// (0x000768b7) popup_cale_preview_window

0xbce3,	// (0x00079ce9) bg_popup_preview_window_pane_cp05_ParamLimits

0xbce3,	// (0x00079ce9) bg_popup_preview_window_pane_cp05

0xeb1d,	// (0x0007cb23) list_cale_preview_pane_ParamLimits

0xeb1d,	// (0x0007cb23) list_cale_preview_pane

0x88ce,	// (0x000768d4) list_double_cale_preview_pane_ParamLimits

0x88ce,	// (0x000768d4) list_double_cale_preview_pane

0x88e2,	// (0x000768e8) list_single_cale_preview_pane_ParamLimits

0x88e2,	// (0x000768e8) list_single_cale_preview_pane

0x88fa,	// (0x00076900) list_single_cale_preview_pane_g1

0x8902,	// (0x00076908) list_single_cale_preview_pane_t1_ParamLimits

0x8902,	// (0x00076908) list_single_cale_preview_pane_t1

0x8917,	// (0x0007691d) list_double_cale_preview_pane_g1

0x891f,	// (0x00076925) list_double_cale_preview_pane_t1_ParamLimits

0x891f,	// (0x00076925) list_double_cale_preview_pane_t1

0x8934,	// (0x0007693a) list_double_cale_preview_pane_t2_ParamLimits

0x8934,	// (0x0007693a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007de29) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007de29) list_double_cale_preview_pane_t

0x96e3,	// (0x000776e9) main_ezdial_pane

0xbce3,	// (0x00079ce9) main_sp_fs_email_pane_ParamLimits

0x7e58,	// (0x00075e5e) cmail_ddmenu_btn01_pane_ParamLimits

0x7e58,	// (0x00075e5e) cmail_ddmenu_btn01_pane

0x7e6b,	// (0x00075e71) cmail_ddmenu_btn02_pane_ParamLimits

0x7e6b,	// (0x00075e71) cmail_ddmenu_btn02_pane

0x7e8e,	// (0x00075e94) cmail_ddmenu_btn03_pane_ParamLimits

0x7e8e,	// (0x00075e94) cmail_ddmenu_btn03_pane

0x7eb6,	// (0x00075ebc) main_sp_fs_ctrlbar_pane_ParamLimits

0x7eda,	// (0x00075ee0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8584,	// (0x0007658a) list_cmail_body_pane_ParamLimits

0xe8c6,	// (0x0007c8cc) bg_button_pane_cp12

0xe8cf,	// (0x0007c8d5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8cf,	// (0x0007c8d5) list_single_cmail_header_detail_pane_g3

0xa7dd,	// (0x000787e3) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa7dd,	// (0x000787e3) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007ddac) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007ddac) list_single_cmail_header_detail_pane_t

0xa835,	// (0x0007883b) phacti_term_pane_t2_ParamLimits

0xa835,	// (0x0007883b) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007ddb6) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007ddb6) phacti_term_pane_t

0xeb29,	// (0x0007cb2f) aid_size_list_single_double

0x894c,	// (0x00076952) popup_ezdial_listscroll_window

0x8968,	// (0x0007696e) popup_number_entry_window_cp01

0xab9e,	// (0x00078ba4) bg_popup_call_pane_cp09

0xeb35,	// (0x0007cb3b) ezdial_list_pane

0xeb3d,	// (0x0007cb43) scroll_pane_cp23

0xca30,	// (0x0007aa36) bg_button_pane_cp028_ParamLimits

0xca30,	// (0x0007aa36) bg_button_pane_cp028

0x8976,	// (0x0007697c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8976,	// (0x0007697c) cmail_ddmenu_btn01_pane_g1

0x8982,	// (0x00076988) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8982,	// (0x00076988) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007de2e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007de2e) cmail_ddmenu_btn01_pane_g

0xeb45,	// (0x0007cb4b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb45,	// (0x0007cb4b) cmail_ddmenu_btn01_pane_t1

0xca30,	// (0x0007aa36) bg_button_pane_cp029_ParamLimits

0xca30,	// (0x0007aa36) bg_button_pane_cp029

0x898e,	// (0x00076994) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x898e,	// (0x00076994) cmail_ddmenu_btn02_pane_g1

0x89a6,	// (0x000769ac) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89a6,	// (0x000769ac) cmail_ddmenu_btn02_pane_t1

0xbce3,	// (0x00079ce9) bg_button_pane_cp031_ParamLimits

0xbce3,	// (0x00079ce9) bg_button_pane_cp031

0x898e,	// (0x00076994) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x898e,	// (0x00076994) cmail_ddmenu_btn03_pane_g1

0x89a6,	// (0x000769ac) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89a6,	// (0x000769ac) cmail_ddmenu_btn03_pane_t1

0x548e,	// (0x00073494) cell_dialer2_keypad_pane_t1_ParamLimits

0x54a8,	// (0x000734ae) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x54a8,	// (0x000734ae) cell_dialer2_keypad_pane_t1_copy1

0x750f,	// (0x00075515) ncimui_group_button_pane

0xbce3,	// (0x00079ce9) main_sp_fs_calendar_pane_ParamLimits

0x859b,	// (0x000765a1) list_single_cmail_header_caption_pane_ParamLimits

0xa84a,	// (0x00078850) aid_recal_txt_sm_pane

0x96e3,	// (0x000776e9) mian_recal_day_pane

0xa884,	// (0x0007888a) popup_sp_fs_cale_preview_window_ParamLimits

0xeb5a,	// (0x0007cb60) list_recal_day_pane

0xa967,	// (0x0007896d) list_single_recal_day_pane_ParamLimits

0xa967,	// (0x0007896d) list_single_recal_day_pane

0xeb81,	// (0x0007cb87) list_single_recal_day_pane_g1_ParamLimits

0xeb81,	// (0x0007cb87) list_single_recal_day_pane_g1

0xa979,	// (0x0007897f) list_single_recal_day_pane_g2_ParamLimits

0xa979,	// (0x0007897f) list_single_recal_day_pane_g2

0xa985,	// (0x0007898b) list_single_recal_day_pane_g3_ParamLimits

0xa985,	// (0x0007898b) list_single_recal_day_pane_g3

0x89ca,	// (0x000769d0) list_single_recal_day_pane_g4_ParamLimits

0x89ca,	// (0x000769d0) list_single_recal_day_pane_g4

0xa991,	// (0x00078997) list_single_recal_day_pane_g5_ParamLimits

0xa991,	// (0x00078997) list_single_recal_day_pane_g5

0xa99d,	// (0x000789a3) list_single_recal_day_pane_g6_ParamLimits

0xa99d,	// (0x000789a3) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007de3d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007de3d) list_single_recal_day_pane_g

0xa9b1,	// (0x000789b7) list_single_recal_day_pane_t1

0xa9c3,	// (0x000789c9) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007de48) list_single_recal_day_pane_t

0x89e2,	// (0x000769e8) ncimui_query_button_pane_ParamLimits

0x89e2,	// (0x000769e8) ncimui_query_button_pane

0x89f2,	// (0x000769f8) ncimui_query_button_pane_t1_ParamLimits

0x89f2,	// (0x000769f8) ncimui_query_button_pane_t1

0xeb8d,	// (0x0007cb93) ncimui_query_button_pane_t2_ParamLimits

0xeb8d,	// (0x0007cb93) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007de4d) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007de4d) ncimui_query_button_pane_t

0x8a05,	// (0x00076a0b) query_button_pane_ParamLimits

0x8a05,	// (0x00076a0b) query_button_pane

0x96e3,	// (0x000776e9) bg_button_pane_cp0028

0xeba0,	// (0x0007cba6) query_button_pane_t1

0x33fc,	// (0x00071402) main_tport_pane_ParamLimits

0x8445,	// (0x0007644b) bg_popup_window_pane_cp01_ParamLimits

0x8445,	// (0x0007644b) bg_popup_window_pane_cp01

0x845e,	// (0x00076464) heading_pane_cp08_ParamLimits

0x845e,	// (0x00076464) heading_pane_cp08

0x8471,	// (0x00076477) heading_pane_cp07_ParamLimits

0x8471,	// (0x00076477) heading_pane_cp07

0x8513,	// (0x00076519) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007dd99) cell_tport_appsw_pane_g

0x2928,	// (0x0007092e) input_candi_list_open_g1

0xafd3,	// (0x00078fd9) list_cale_time_pane_g6_ParamLimits

0xafd3,	// (0x00078fd9) list_cale_time_pane_g6

0x41d8,	// (0x000721de) aid_size_touch_calib_1_ParamLimits

0x41d8,	// (0x000721de) aid_size_touch_calib_1

0x41ea,	// (0x000721f0) aid_size_touch_calib_2_ParamLimits

0x41ea,	// (0x000721f0) aid_size_touch_calib_2

0x4202,	// (0x00072208) aid_size_touch_calib_3_ParamLimits

0x4202,	// (0x00072208) aid_size_touch_calib_3

0x4220,	// (0x00072226) aid_size_touch_calib_4_ParamLimits

0x4220,	// (0x00072226) aid_size_touch_calib_4

0x4238,	// (0x0007223e) main_touch_calib_button_group_pane_ParamLimits

0x4238,	// (0x0007223e) main_touch_calib_button_group_pane

0x4250,	// (0x00072256) main_touch_calib_pane_g1_ParamLimits

0x4262,	// (0x00072268) main_touch_calib_pane_g2_ParamLimits

0x4274,	// (0x0007227a) main_touch_calib_pane_g3_ParamLimits

0x4286,	// (0x0007228c) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0007d753) main_touch_calib_pane_g_ParamLimits

0x4298,	// (0x0007229e) main_touch_calib_pane_t1_ParamLimits

0x42b2,	// (0x000722b8) main_touch_calib_pane_t2_ParamLimits

0x42cc,	// (0x000722d2) main_touch_calib_pane_t3_ParamLimits

0x42e0,	// (0x000722e6) main_touch_calib_pane_t4_ParamLimits

0x42f6,	// (0x000722fc) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0007d75c) main_touch_calib_pane_t_ParamLimits

0xd1a3,	// (0x0007b1a9) list_single_fp_cale_pane_g3_ParamLimits

0xd1a3,	// (0x0007b1a9) list_single_fp_cale_pane_g3

0x96ed,	// (0x000776f3) bg_button_pane_cp012_ParamLimits

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp03_ParamLimits

0x652b,	// (0x00074531) cell_vitu2_function_top_pane_g1_ParamLimits

0x96ed,	// (0x000776f3) bg_vkb2_func_pane_cp04_ParamLimits

0x749a,	// (0x000754a0) main_ncimui_button_group_pane_ParamLimits

0x749a,	// (0x000754a0) main_ncimui_button_group_pane

0x74fa,	// (0x00075500) main_ncimui_pane_t3_ParamLimits

0x74fa,	// (0x00075500) main_ncimui_pane_t3

0xe95c,	// (0x0007c962) phacti_button_group_pane

0xeb29,	// (0x0007cb2f) aid_size_list_single_double_ParamLimits

0x894c,	// (0x00076952) popup_ezdial_listscroll_window_ParamLimits

0x8968,	// (0x0007696e) popup_number_entry_window_cp01_ParamLimits

0x8a18,	// (0x00076a1e) phacti_button_pane_ParamLimits

0x8a18,	// (0x00076a1e) phacti_button_pane

0x96e3,	// (0x000776e9) bg_button_pane_cp14

0xebae,	// (0x0007cbb4) phacti_button_pane_t1

0x8a29,	// (0x00076a2f) main_touch_calib_button_pane_ParamLimits

0x8a29,	// (0x00076a2f) main_touch_calib_button_pane

0xa9ed,	// (0x000789f3) bg_button_pane_cp18_ParamLimits

0xa9ed,	// (0x000789f3) bg_button_pane_cp18

0xebbc,	// (0x0007cbc2) main_touch_calib_button_pane_t1_ParamLimits

0xebbc,	// (0x0007cbc2) main_touch_calib_button_pane_t1

0xebd2,	// (0x0007cbd8) main_touch_calib_button_pane_t2_ParamLimits

0xebd2,	// (0x0007cbd8) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007de52) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007de52) main_touch_calib_button_pane_t

0x96e3,	// (0x000776e9) cell_ncimui_button_pane

0x96e3,	// (0x000776e9) bg_button_pane_cp032

0xebf0,	// (0x0007cbf6) cell_ncimui_button_pane_t1

0xa377,	// (0x0007837d) image3_infobar_pane_ParamLimits

0xa377,	// (0x0007837d) image3_infobar_pane

0x791f,	// (0x00075925) fs_bigclock_status_pane_ParamLimits

0x791f,	// (0x00075925) fs_bigclock_status_pane

0x792c,	// (0x00075932) main_fs_bigclock_clock_pane_ParamLimits

0x792c,	// (0x00075932) main_fs_bigclock_clock_pane

0x795e,	// (0x00075964) main_fs_bigclock_indi_pane_ParamLimits

0x795e,	// (0x00075964) main_fs_bigclock_indi_pane

0x799e,	// (0x000759a4) main_fs_bigclock_swipe_pane_ParamLimits

0x799e,	// (0x000759a4) main_fs_bigclock_swipe_pane

0x96e3,	// (0x000776e9) main_fs_clock_dumped_data

0x79ea,	// (0x000759f0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x79ea,	// (0x000759f0) list_single_fs_bigclock_indicator_pane_g1

0x7a03,	// (0x00075a09) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7a03,	// (0x00075a09) list_single_fs_bigclock_indicator_pane_g2

0x7a1d,	// (0x00075a23) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7a1d,	// (0x00075a23) list_single_fs_bigclock_indicator_pane_g3

0x7a37,	// (0x00075a3d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7a37,	// (0x00075a3d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007dc7a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007dc7a) list_single_fs_bigclock_indicator_pane_g

0x7a66,	// (0x00075a6c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7a66,	// (0x00075a6c) list_single_fs_bigclock_indicator_pane_t1

0x7a8e,	// (0x00075a94) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7a8e,	// (0x00075a94) list_single_fs_bigclock_indicator_pane_t2

0x7ab6,	// (0x00075abc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7ab6,	// (0x00075abc) list_single_fs_bigclock_indicator_pane_t3

0x7ade,	// (0x00075ae4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7ade,	// (0x00075ae4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007dc85) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007dc85) list_single_fs_bigclock_indicator_pane_t

0xebfe,	// (0x0007cc04) image3_infobar_fav_pane_ParamLimits

0xebfe,	// (0x0007cc04) image3_infobar_fav_pane

0xec0e,	// (0x0007cc14) image3_infobar_loc_pane_ParamLimits

0xec0e,	// (0x0007cc14) image3_infobar_loc_pane

0xec24,	// (0x0007cc2a) image3_infobar_time_pane_ParamLimits

0xec24,	// (0x0007cc2a) image3_infobar_time_pane

0xce68,	// (0x0007ae6e) image3_infobar_time_pane_g1

0xec34,	// (0x0007cc3a) image3_infobar_time_pane_t1

0xce68,	// (0x0007ae6e) image3_infobar_loc_pane_g1

0xec42,	// (0x0007cc48) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007de57) image3_infobar_loc_pane_g

0xec4a,	// (0x0007cc50) image3_infobar_loc_pane_t1

0xce68,	// (0x0007ae6e) image3_infobar_fav_pane_g1

0xec58,	// (0x0007cc5e) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007de5c) image3_infobar_fav_pane_g

0xec60,	// (0x0007cc66) fs_bigclock_status_battery_pane

0xec69,	// (0x0007cc6f) fs_bigclock_status_signal_pane

0xec72,	// (0x0007cc78) fs_bigclock_status_title_pane

0xec7b,	// (0x0007cc81) fs_bigclock_status_signal_pane_g1

0xec84,	// (0x0007cc8a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007de61) fs_bigclock_status_signal_pane_g

0xec8c,	// (0x0007cc92) fs_bigclock_status_battery_pane_g1

0xec95,	// (0x0007cc9b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007de66) fs_bigclock_status_battery_pane_g

0xec9d,	// (0x0007cca3) fs_bigclock_status_title_pane_t1

0x8a3e,	// (0x00076a44) main_fs_bigclock_clock_pane_g1

0x8a3e,	// (0x00076a44) main_fs_bigclock_clock_pane_g2

0x8a51,	// (0x00076a57) main_fs_bigclock_clock_pane_g3

0x8a51,	// (0x00076a57) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007de6b) main_fs_bigclock_clock_pane_g

0x8a68,	// (0x00076a6e) main_fs_bigclock_clock_pane_t1

0x8a7e,	// (0x00076a84) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007de74) main_fs_bigclock_clock_pane_t

0xecab,	// (0x0007ccb1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xecab,	// (0x0007ccb1) list_single_fs_bigclock_indicator_pane

0xecbc,	// (0x0007ccc2) list_single_fs_bigclock_pane_ParamLimits

0xecbc,	// (0x0007ccc2) list_single_fs_bigclock_pane

0xece2,	// (0x0007cce8) main_fs_bigclock_indicator_pane_t1

0xecf1,	// (0x0007ccf7) list_single_fs_bigclock_pane_g1

0xecf9,	// (0x0007ccff) list_single_fs_bigclock_pane_t1

0xce68,	// (0x0007ae6e) main_fs_bigclock_swipe_pane_g1

0xed3c,	// (0x0007cd42) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007de85) main_fs_bigclock_swipe_pane_g

0xed44,	// (0x0007cd4a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed44,	// (0x0007cd4a) main_fs_bigclock_swipe_pane_t1

0x217e,	// (0x00070184) call_type_pane_ParamLimits

0x96e3,	// (0x000776e9) main_btmg_pane

0xa8cf,	// (0x000788d5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa8cf,	// (0x000788d5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007ddf8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007ddf8) list_single_cale_mrui_row_pane_g

0xa955,	// (0x0007895b) list_recal_vselct_arw_lo_pane

0xeb79,	// (0x0007cb7f) list_recal_vselct_arw_up_pane

0xa95d,	// (0x00078963) list_recal_vselct_pane

0x8ae0,	// (0x00076ae6) btmg_button_pane

0x8aea,	// (0x00076af0) main_btmg_pane_g1

0x96e3,	// (0x000776e9) bg_button_pane_cp044

0xed61,	// (0x0007cd67) btmg_button_pane_t1

0xca1c,	// (0x0007aa22) aid_listscroll_gen

0xbce3,	// (0x00079ce9) main_cntbar_detail_pane

0xe876,	// (0x0007c87c) list_cmail_folder_pane

0xd016,	// (0x0007b01c) sp_fs_scroll_pane_cp03_ParamLimits

0x8af4,	// (0x00076afa) list_single_fs_dyc_pane_cp01_ParamLimits

0x8af4,	// (0x00076afa) list_single_fs_dyc_pane_cp01

0xed6f,	// (0x0007cd75) aid_size_cmail_indent

0xbcf1,	// (0x00079cf7) list_single_dyc_row_pane_cp01

0x8b43,	// (0x00076b49) cntbar_detail_list_pane_ParamLimits

0x8b43,	// (0x00076b49) cntbar_detail_list_pane

0x8b95,	// (0x00076b9b) main_cntbar_detail_cont_pane_ParamLimits

0x8b95,	// (0x00076b9b) main_cntbar_detail_cont_pane

0xd016,	// (0x0007b01c) scroll_pane_cp032_ParamLimits

0xd016,	// (0x0007b01c) scroll_pane_cp032

0x8ba9,	// (0x00076baf) cntbar_detail_list_event_pane_ParamLimits

0x8ba9,	// (0x00076baf) cntbar_detail_list_event_pane

0x8b55,	// (0x00076b5b) cntbar_detail_list_shct_pane

0xae5e,	// (0x00078e64) aid_list_gen

0xed78,	// (0x0007cd7e) aid_scroll

0xed81,	// (0x0007cd87) aid_size_touch_scroll_bar

0x6c41,	// (0x00074c47) aid_list_double

0x8bb9,	// (0x00076bbf) aid_list_single

0x6c41,	// (0x00074c47) aid_list_single_lg

0x8bc2,	// (0x00076bc8) aid_list_z_g_a_sm

0x8bca,	// (0x00076bd0) aid_list_z_g_d

0x8bd2,	// (0x00076bd8) aid_txt_z_prm

0x8be0,	// (0x00076be6) aid_txt_z_prm_cp01

0x8bee,	// (0x00076bf4) aid_txt_z_sec

0x8bfc,	// (0x00076c02) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bfc,	// (0x00076c02) main_cntbar_detail_cont_pane_g1

0x8c10,	// (0x00076c16) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8c10,	// (0x00076c16) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007de8a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007de8a) main_cntbar_detail_cont_pane_g

0xed8a,	// (0x0007cd90) main_cntbar_detail_cont_pane_t1

0xed98,	// (0x0007cd9e) main_cntbar_detail_cont_pane_t2

0xeda6,	// (0x0007cdac) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007de8f) main_cntbar_detail_cont_pane_t

0x8c20,	// (0x00076c26) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8c20,	// (0x00076c26) cell_cntbar_detail_list_shct_pane

0xedb4,	// (0x0007cdba) cntbar_detail_list_shct_pane_g1

0xedbd,	// (0x0007cdc3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007de96) cntbar_detail_list_shct_pane_g

0x8c32,	// (0x00076c38) cntbar_detail_list_event_pane_g1_ParamLimits

0x8c32,	// (0x00076c38) cntbar_detail_list_event_pane_g1

0x8c3e,	// (0x00076c44) cntbar_detail_list_event_pane_g2_ParamLimits

0x8c3e,	// (0x00076c44) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007de9b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007de9b) cntbar_detail_list_event_pane_g

0x8cac,	// (0x00076cb2) cntbar_detail_list_event_pane_t1_ParamLimits

0x8cac,	// (0x00076cb2) cntbar_detail_list_event_pane_t1

0x8cc1,	// (0x00076cc7) cntbar_detail_list_event_pane_t2_ParamLimits

0x8cc1,	// (0x00076cc7) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007dea8) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007dea8) cntbar_detail_list_event_pane_t

0xce68,	// (0x0007ae6e) cell_cntbar_detail_list_shct_pane_g1

0xb5ac,	// (0x000795b2) navi_pane_mv_g3

0xbce3,	// (0x00079ce9) main_cntbar_detail_pane_ParamLimits

0x96e3,	// (0x000776e9) main_notif_wgt_pane

0xa167,	// (0x0007816d) aid_tch_main_mp4_pane_g4

0xa36f,	// (0x00078375) popup_slider_window_cp02

0xa94b,	// (0x00078951) list_recal_day_event_pane

0x8b0f,	// (0x00076b15) cntbar_detail_btn_pane_ParamLimits

0x8b0f,	// (0x00076b15) cntbar_detail_btn_pane

0x8b28,	// (0x00076b2e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b28,	// (0x00076b2e) cntbar_detail_btn_pane_cp01

0x8b55,	// (0x00076b5b) cntbar_detail_list_shct_pane_ParamLimits

0x8b65,	// (0x00076b6b) cntbar_detail_pane_g1_ParamLimits

0x8b65,	// (0x00076b6b) cntbar_detail_pane_g1

0x8b79,	// (0x00076b7f) cntbar_detail_pane_t1_ParamLimits

0x8b79,	// (0x00076b7f) cntbar_detail_pane_t1

0x8c4a,	// (0x00076c50) cntbar_detail_list_event_pane_g3_ParamLimits

0x8c4a,	// (0x00076c50) cntbar_detail_list_event_pane_g3

0x8c62,	// (0x00076c68) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c62,	// (0x00076c68) cntbar_detail_list_event_pane_g4

0x8c7a,	// (0x00076c80) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c7a,	// (0x00076c80) cntbar_detail_list_event_pane_g5

0x8c92,	// (0x00076c98) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c92,	// (0x00076c98) cntbar_detail_list_event_pane_g6

0x8cd6,	// (0x00076cdc) cntbar_detail_list_event_pane_t3_ParamLimits

0x8cd6,	// (0x00076cdc) cntbar_detail_list_event_pane_t3

0x8ce8,	// (0x00076cee) popup_notif_wgt_window_ParamLimits

0x8ce8,	// (0x00076cee) popup_notif_wgt_window

0x8d01,	// (0x00076d07) popup_submenu_window_cp01_ParamLimits

0x8d01,	// (0x00076d07) popup_submenu_window_cp01

0xab9e,	// (0x00078ba4) bg_popup_window_pane_cp10

0xedc6,	// (0x0007cdcc) listscroll_notif_wgt_pane

0xedd8,	// (0x0007cdde) list_notif_wgt_window

0xede1,	// (0x0007cde7) scroll_pane_cp033

0x8d15,	// (0x00076d1b) list_notif_wgt_row_pane_ParamLimits

0x8d15,	// (0x00076d1b) list_notif_wgt_row_pane

0xedea,	// (0x0007cdf0) aid_size_list_notif_wgt_del

0xedf7,	// (0x0007cdfd) list_notif_wgt_row_pane_g1

0xee03,	// (0x0007ce09) list_notif_wgt_row_pane_g2

0xee12,	// (0x0007ce18) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007deaf) list_notif_wgt_row_pane_g

0xee1f,	// (0x0007ce25) list_notif_wgt_row_pane_t1

0xee35,	// (0x0007ce3b) list_notif_wgt_row_pane_t2

0xee47,	// (0x0007ce4d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007deb6) list_notif_wgt_row_pane_t

0xda5d,	// (0x0007ba63) list_recal_day_event_pane_g1

0xee59,	// (0x0007ce5f) list_recal_day_event_pane_t1

0x96e3,	// (0x000776e9) bg_button_pane_cp045

0x8d25,	// (0x00076d2b) cntbar_detail_btn_pane_t1

0xca30,	// (0x0007aa36) main_callh_pane_ParamLimits

0xca30,	// (0x0007aa36) main_callh_pane

0x96e3,	// (0x000776e9) main_coverflow0_pane

0x96e3,	// (0x000776e9) main_wgtman_pane

0x79bf,	// (0x000759c5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79bf,	// (0x000759c5) main_fs_bigclock_unlock_btn_pane

0x850b,	// (0x00076511) bg_button_pane_cp16

0x851b,	// (0x00076521) cell_tport_appsw_pane_g3

0x8d33,	// (0x00076d39) cf0_flow_pane_ParamLimits

0x8d33,	// (0x00076d39) cf0_flow_pane

0xee68,	// (0x0007ce6e) listscroll_cf0_pane

0xee73,	// (0x0007ce79) main_cf0_pane_g1

0x8d48,	// (0x00076d4e) main_cf0_pane_t1_ParamLimits

0x8d48,	// (0x00076d4e) main_cf0_pane_t1

0x8d5f,	// (0x00076d65) main_cf0_pane_t2_ParamLimits

0x8d5f,	// (0x00076d65) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007dec2) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007dec2) main_cf0_pane_t

0xee85,	// (0x0007ce8b) scroll_pane_cp11

0x8d76,	// (0x00076d7c) cf0_flow_pane_g1

0x8d82,	// (0x00076d88) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007dec7) cf0_flow_pane_g

0x8d8e,	// (0x00076d94) cf0_flow_pane_t1

0x96e3,	// (0x000776e9) main_call6_pane

0x96e3,	// (0x000776e9) main_calllock_pane

0x8da0,	// (0x00076da6) call6_btn_grp_pane_ParamLimits

0x8da0,	// (0x00076da6) call6_btn_grp_pane

0x8dba,	// (0x00076dc0) call6_pane_g1_ParamLimits

0x8dba,	// (0x00076dc0) call6_pane_g1

0x8dd3,	// (0x00076dd9) popup_call6_1st_window_ParamLimits

0x8dd3,	// (0x00076dd9) popup_call6_1st_window

0x8de7,	// (0x00076ded) popup_call6_2nd_window_ParamLimits

0x8de7,	// (0x00076ded) popup_call6_2nd_window

0x8dfb,	// (0x00076e01) cell_call6_btn_pane_ParamLimits

0x8dfb,	// (0x00076e01) cell_call6_btn_pane

0xab9e,	// (0x00078ba4) bg_popup_call2_in_pane_cp03

0xee90,	// (0x0007ce96) popup_call6_1st_window_g1

0xee98,	// (0x0007ce9e) popup_call6_1st_window_g2

0xeea0,	// (0x0007cea6) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007decc) popup_call6_1st_window_g

0xeea8,	// (0x0007ceae) popup_call6_1st_window_t1

0xeeb7,	// (0x0007cebd) popup_call6_1st_window_t2

0xeec7,	// (0x0007cecd) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007ded3) popup_call6_1st_window_t

0xab9e,	// (0x00078ba4) bg_popup_call2_in_pane_cp04

0xee90,	// (0x0007ce96) popup_call6_2nd_window_g1

0xee98,	// (0x0007ce9e) popup_call6_2nd_window_g2

0xeea0,	// (0x0007cea6) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007decc) popup_call6_2nd_window_g

0xeea8,	// (0x0007ceae) popup_call6_2nd_window_t1

0xf0b4,	// (0x0007d0ba) bg_button_pane_cp15

0xa9d5,	// (0x000789db) cell_call6_btn_pane_g1

0xa9de,	// (0x000789e4) cell_call6_btn_pane_t1

0x8e0f,	// (0x00076e15) listscroll_wgtman_pane_ParamLimits

0x8e0f,	// (0x00076e15) listscroll_wgtman_pane

0x8e30,	// (0x00076e36) wgtman_btn_pane_ParamLimits

0x8e30,	// (0x00076e36) wgtman_btn_pane

0xb3be,	// (0x000793c4) aid_scroll_copy1

0xeed7,	// (0x0007cedd) list_wgtman_pane

0x8e73,	// (0x00076e79) wgtman_btn_pane_g1_ParamLimits

0x8e73,	// (0x00076e79) wgtman_btn_pane_g1

0x8e9f,	// (0x00076ea5) wgtman_btn_pane_t1_ParamLimits

0x8e9f,	// (0x00076ea5) wgtman_btn_pane_t1

0xeee1,	// (0x0007cee7) wgtman_btn_pane_t2_ParamLimits

0xeee1,	// (0x0007cee7) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007deda) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007deda) wgtman_btn_pane_t

0x8edc,	// (0x00076ee2) listrow_wgtman_pane_ParamLimits

0x8edc,	// (0x00076ee2) listrow_wgtman_pane

0x8ef0,	// (0x00076ef6) listrow_wgtman_pane_g1

0x8efd,	// (0x00076f03) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007dedf) listrow_wgtman_pane_g

0x8f1b,	// (0x00076f21) listrow_wgtman_pane_t1

0x8f33,	// (0x00076f39) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007dee4) listrow_wgtman_pane_t

0x8f59,	// (0x00076f5f) wait_bar_pane_cp09

0xeef8,	// (0x0007cefe) main_calllock_btn_pane

0xef02,	// (0x0007cf08) main_calllock_pane_g1

0x96e3,	// (0x000776e9) bg_button_pane_cp17

0xef0e,	// (0x0007cf14) main_calllock_btn_pane_g1

0xef17,	// (0x0007cf1d) main_calllock_btn_pane_t1

0x96e3,	// (0x000776e9) main_dialer3_pane

0x96e3,	// (0x000776e9) main_fmrd2_pane

0xce68,	// (0x0007ae6e) main_fs_bigclock_unlock_btn_pane_g1

0x8f73,	// (0x00076f79) main_fs_bigclock_unlock_btn_pane_t1

0x8f81,	// (0x00076f87) area_fmrd2_info_pane_ParamLimits

0x8f81,	// (0x00076f87) area_fmrd2_info_pane

0x8f92,	// (0x00076f98) area_fmrd2_visual_pane_ParamLimits

0x8f92,	// (0x00076f98) area_fmrd2_visual_pane

0x8fa0,	// (0x00076fa6) fmrd2_indi_pane_ParamLimits

0x8fa0,	// (0x00076fa6) fmrd2_indi_pane

0x8fad,	// (0x00076fb3) area_fmrd2_visual_pane_g1

0x8fb5,	// (0x00076fbb) area_fmrd2_visual_pane_t1

0x8fc5,	// (0x00076fcb) area_fmrd2_visual_pane_t2

0x8fd5,	// (0x00076fdb) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007deee) area_fmrd2_visual_pane_t

0x8fe5,	// (0x00076feb) area_fmrd2_info_pane_g1

0x8fed,	// (0x00076ff3) area_fmrd2_info_pane_t1

0x8ffd,	// (0x00077003) area_fmrd2_info_pane_t2

0x900d,	// (0x00077013) area_fmrd2_info_pane_t3

0x901d,	// (0x00077023) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007def5) area_fmrd2_info_pane_t

0x902d,	// (0x00077033) fmrd2_indi_pane_t1

0x903d,	// (0x00077043) fmrd2_indi_pane_t2

0x904d,	// (0x00077053) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007defe) fmrd2_indi_pane_t

0x7a48,	// (0x00075a4e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7a48,	// (0x00075a4e) list_single_fs_bigclock_indicator_pane_g5

0x7afd,	// (0x00075b03) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7afd,	// (0x00075b03) list_single_fs_bigclock_indicator_pane_t5

0x868c,	// (0x00076692) aid_cell_bcale_month_pane_ParamLimits

0x868c,	// (0x00076692) aid_cell_bcale_month_pane

0x86aa,	// (0x000766b0) bcale_month_pane_ParamLimits

0x86aa,	// (0x000766b0) bcale_month_pane

0x86ce,	// (0x000766d4) bcale_preview_pane_ParamLimits

0x86ce,	// (0x000766d4) bcale_preview_pane

0xecf9,	// (0x0007ccff) list_single_fs_bigclock_pane_t1_ParamLimits

0xed18,	// (0x0007cd1e) list_single_fs_bigclock_pane_t2_ParamLimits

0xed18,	// (0x0007cd1e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007de80) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007de80) list_single_fs_bigclock_pane_t

0x8f6b,	// (0x00076f71) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007dee9) main_fs_bigclock_unlock_btn_pane_g

0x905d,	// (0x00077063) aid_dia3_key_size_ParamLimits

0x905d,	// (0x00077063) aid_dia3_key_size

0x9071,	// (0x00077077) aid_dia3_listrow_size_ParamLimits

0x9071,	// (0x00077077) aid_dia3_listrow_size

0x908b,	// (0x00077091) dia3_keypad_fun_pane_ParamLimits

0x908b,	// (0x00077091) dia3_keypad_fun_pane

0x90a7,	// (0x000770ad) dia3_keypad_num_pane_ParamLimits

0x90a7,	// (0x000770ad) dia3_keypad_num_pane

0x90c3,	// (0x000770c9) dia3_listscroll_pane_ParamLimits

0x90c3,	// (0x000770c9) dia3_listscroll_pane

0x90d9,	// (0x000770df) dia3_numentry_pane_ParamLimits

0x90d9,	// (0x000770df) dia3_numentry_pane

0xef26,	// (0x0007cf2c) dia3_list_pane

0x90f2,	// (0x000770f8) scroll_pane_cp12

0x96e3,	// (0x000776e9) bg_dia3_numentry_pane

0x90fd,	// (0x00077103) dia3_numentry_pane_t1

0x910c,	// (0x00077112) cell_dia3_key_num_pane

0x9114,	// (0x0007711a) cell_dia3_key0_fun_pane_ParamLimits

0x9114,	// (0x0007711a) cell_dia3_key0_fun_pane

0x9128,	// (0x0007712e) cell_dia3_key1_fun_pane_ParamLimits

0x9128,	// (0x0007712e) cell_dia3_key1_fun_pane

0x913f,	// (0x00077145) dia3_listrow_pane

0xe2fc,	// (0x0007c302) bg_dia3_numentry_pane_g1

0x96e3,	// (0x000776e9) bg_button_pane_cp21

0x9151,	// (0x00077157) cell_dia3_key_num_pane_t1

0x915f,	// (0x00077165) cell_dia3_key_num_pane_t2

0x916e,	// (0x00077174) cell_dia3_key_num_pane_t3

0x917d,	// (0x00077183) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007df05) cell_dia3_key_num_pane_t

0x96e3,	// (0x000776e9) bg_button_pane_cp19

0x918c,	// (0x00077192) cell_dia3_key0_fun_pane_g1

0x96e3,	// (0x000776e9) bg_button_pane_cp20

0x918c,	// (0x00077192) cell_dia3_key1_fun_pane_g1

0x9194,	// (0x0007719a) area_left_week_number_pane

0x91a2,	// (0x000771a8) area_top_day_name_pane

0x91b5,	// (0x000771bb) frame_month_view_pane

0xef31,	// (0x0007cf37) grid_month_view_pane

0x91ca,	// (0x000771d0) cell_top_day_name_pane_ParamLimits

0x91ca,	// (0x000771d0) cell_top_day_name_pane

0x91f9,	// (0x000771ff) cell_area_left_week_number_pane_ParamLimits

0x91f9,	// (0x000771ff) cell_area_left_week_number_pane

0x920f,	// (0x00077215) cell_month_view_pane_ParamLimits

0x920f,	// (0x00077215) cell_month_view_pane

0xef3f,	// (0x0007cf45) frm_month_g1

0x9240,	// (0x00077246) frm_month_g2

0x9253,	// (0x00077259) frm_month_g3

0x9266,	// (0x0007726c) frm_month_g4

0x9279,	// (0x0007727f) frm_month_g5

0x928c,	// (0x00077292) frm_month_g6

0x92a1,	// (0x000772a7) frm_month_g7

0xef4c,	// (0x0007cf52) frm_month_g8

0x92b6,	// (0x000772bc) frm_month_g9

0x92c6,	// (0x000772cc) frm_month_g10

0x92d6,	// (0x000772dc) frm_month_g11

0x92e6,	// (0x000772ec) frm_month_g12

0x92f8,	// (0x000772fe) frm_month_g13

0x930c,	// (0x00077312) frm_month_g14

0x9320,	// (0x00077326) frm_month_g15

0x9334,	// (0x0007733a) frm_month_g16

0x000f,

0xff08,	// (0x0007df0e) frm_month_g

0xef59,	// (0x0007cf5f) cell_top_day_name_pane_t1

0x9348,	// (0x0007734e) cell_area_left_week_number_pane_g1

0x9354,	// (0x0007735a) cell_area_left_week_number_pane_t1

0xd0a3,	// (0x0007b0a9) cell_month_view_pane_g1

0x9367,	// (0x0007736d) cell_month_view_pane_t1

0x96e3,	// (0x000776e9) main_fps_pane

0xe77e,	// (0x0007c784) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe77e,	// (0x0007c784) cmail_ddmenu_btn02_pane_cp1

0xe79a,	// (0x0007c7a0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe79a,	// (0x0007c7a0) cmail_ddmenu_btn02_pane_cp2

0x899a,	// (0x000769a0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x899a,	// (0x000769a0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007de33) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007de33) cmail_ddmenu_btn02_pane_g

0x89b8,	// (0x000769be) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89b8,	// (0x000769be) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007de38) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007de38) cmail_ddmenu_btn02_pane_t

0x937a,	// (0x00077380) fps_text_pane_ParamLimits

0x937a,	// (0x00077380) fps_text_pane

0x9391,	// (0x00077397) main_fps_pane_g1_ParamLimits

0x9391,	// (0x00077397) main_fps_pane_g1

0x93a9,	// (0x000773af) wait_bar_pane_cp010_ParamLimits

0x93a9,	// (0x000773af) wait_bar_pane_cp010

0x93bc,	// (0x000773c2) fps_text_pane_t1_ParamLimits

0x93bc,	// (0x000773c2) fps_text_pane_t1

0xe31d,	// (0x0007c323) cam4_image_uncrop_pane_g1

0xe326,	// (0x0007c32c) cam4_image_uncrop_pane_g2

0x59d6,	// (0x000739dc) cam4_image_uncrop_pane_g3

0x59df,	// (0x000739e5) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007d8f4) cam4_image_uncrop_pane_g

0x913f,	// (0x00077145) dia3_listrow_pane_ParamLimits

0x96e3,	// (0x000776e9) main_phob2_pane

0x84de,	// (0x000764e4) cell_tport_appsw_pane_cp02_ParamLimits

0x84de,	// (0x000764e4) cell_tport_appsw_pane_cp02

0x84f2,	// (0x000764f8) cell_tport_appsw_pane_cp03_ParamLimits

0x84f2,	// (0x000764f8) cell_tport_appsw_pane_cp03

0x96e3,	// (0x000776e9) phob2_contact_card_pane

0x96e3,	// (0x000776e9) phob2_listscroll_pane

0xef6c,	// (0x0007cf72) phob2_list_pane

0xef74,	// (0x0007cf7a) scroll_pane_cp034

0x93d4,	// (0x000773da) phob2_cc_data_pane_ParamLimits

0x93d4,	// (0x000773da) phob2_cc_data_pane

0x93ed,	// (0x000773f3) phob2_cc_listscroll_pane_ParamLimits

0x93ed,	// (0x000773f3) phob2_cc_listscroll_pane

0x8edc,	// (0x00076ee2) list_double_large_graphic_phob2_pane_ParamLimits

0x8edc,	// (0x00076ee2) list_double_large_graphic_phob2_pane

0x940f,	// (0x00077415) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x940f,	// (0x00077415) list_double_large_graphic_phob2_pane_g1

0x9425,	// (0x0007742b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9425,	// (0x0007742b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007df2f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007df2f) list_double_large_graphic_phob2_pane_g

0x9431,	// (0x00077437) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9431,	// (0x00077437) list_double_large_graphic_phob2_pane_t1

0x9446,	// (0x0007744c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9446,	// (0x0007744c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007df34) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007df34) list_double_large_graphic_phob2_pane_t

0x96e3,	// (0x000776e9) list_highlight_pane_cp024

0x9458,	// (0x0007745e) phob2_cc_button_pane

0x9462,	// (0x00077468) phob2_cc_data_pane_g1_ParamLimits

0x9462,	// (0x00077468) phob2_cc_data_pane_g1

0x947a,	// (0x00077480) phob2_cc_data_pane_g2_ParamLimits

0x947a,	// (0x00077480) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007df39) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007df39) phob2_cc_data_pane_g

0x948a,	// (0x00077490) phob2_cc_data_pane_t1_ParamLimits

0x948a,	// (0x00077490) phob2_cc_data_pane_t1

0x94ac,	// (0x000774b2) phob2_cc_data_pane_t2_ParamLimits

0x94ac,	// (0x000774b2) phob2_cc_data_pane_t2

0x94ce,	// (0x000774d4) phob2_cc_data_pane_t3_ParamLimits

0x94ce,	// (0x000774d4) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007df3e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007df3e) phob2_cc_data_pane_t

0xef7c,	// (0x0007cf82) phob2_cc_list_pane_ParamLimits

0xef7c,	// (0x0007cf82) phob2_cc_list_pane

0xdaf4,	// (0x0007bafa) scroll_pane_cp035_ParamLimits

0xdaf4,	// (0x0007bafa) scroll_pane_cp035

0xbce3,	// (0x00079ce9) bg_button_pane_cp033

0xef88,	// (0x0007cf8e) phob2_cc_button_pane_g1

0xef94,	// (0x0007cf9a) phob2_cc_button_pane_t1

0xefa9,	// (0x0007cfaf) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007df45) phob2_cc_button_pane_t

0x94f0,	// (0x000774f6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x94f0,	// (0x000774f6) list_double_large_graphic_phob2_cc_pane

0x952e,	// (0x00077534) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x952e,	// (0x00077534) list_double_large_graphic_phob2_cc_pane_g1

0x953a,	// (0x00077540) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x953a,	// (0x00077540) list_double_large_graphic_phob2_cc_pane_g2

0x9546,	// (0x0007754c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9546,	// (0x0007754c) list_double_large_graphic_phob2_cc_pane_g3

0x9552,	// (0x00077558) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9552,	// (0x00077558) list_double_large_graphic_phob2_cc_pane_g4

0x955e,	// (0x00077564) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x955e,	// (0x00077564) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007df4a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007df4a) list_double_large_graphic_phob2_cc_pane_g

0x956a,	// (0x00077570) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x956a,	// (0x00077570) list_double_large_graphic_phob2_cc_pane_t1

0x9593,	// (0x00077599) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9593,	// (0x00077599) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007df55) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007df55) list_double_large_graphic_phob2_cc_pane_t

0xefbb,	// (0x0007cfc1) list_highlight_pane_cp025_ParamLimits

0xefbb,	// (0x0007cfc1) list_highlight_pane_cp025

0xbce3,	// (0x00079ce9) bg_button_pane_cp033_ParamLimits

0xef88,	// (0x0007cf8e) phob2_cc_button_pane_g1_ParamLimits

0xef94,	// (0x0007cf9a) phob2_cc_button_pane_t1_ParamLimits

0xefa9,	// (0x0007cfaf) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007df45) phob2_cc_button_pane_t_ParamLimits

0xff15,	// (0x0006df1b) popup_wgtman_window

0xd937,	// (0x0007b93d) scroll_pane_cp038

0x8e55,	// (0x00076e5b) wgtman_btn_pane_cp_01_ParamLimits

0x8e55,	// (0x00076e5b) wgtman_btn_pane_cp_01

0xefc9,	// (0x0007cfcf) wgtman_content_pane

0xefd2,	// (0x0007cfd8) wgtman_heading_pane

0x96e3,	// (0x000776e9) bg_heading_pane_cp02

0xefdb,	// (0x0007cfe1) wgtman_heading_pane_g1

0xefe3,	// (0x0007cfe9) wgtman_heading_pane_t1

0xeff1,	// (0x0007cff7) scroll_pane_cp036

0xeff9,	// (0x0007cfff) wgtman_list_pane

0xe63b,	// (0x0007c641) wgtman_list_pane_t1_ParamLimits

0xe63b,	// (0x0007c641) wgtman_list_pane_t1

0xa3fd,	// (0x00078403) cam4_grid_pane

0x6722,	// (0x00074728) bg_button_pane_cp015_ParamLimits

0x6736,	// (0x0007473c) bg_button_pane_cp016_ParamLimits

0x6749,	// (0x0007474f) bg_button_pane_cp017_ParamLimits

0x67a1,	// (0x000747a7) popup_vitu2_query_window_g3_ParamLimits

0x67a1,	// (0x000747a7) popup_vitu2_query_window_g3

0x685e,	// (0x00074864) popup_vitu2_query_window_t6_ParamLimits

0x685e,	// (0x00074864) popup_vitu2_query_window_t6

0x6889,	// (0x0007488f) popup_vitu2_query_window_t7_ParamLimits

0x6889,	// (0x0007488f) popup_vitu2_query_window_t7

0xe31d,	// (0x0007c323) cam4_grid_pane_g1

0xe326,	// (0x0007c32c) cam4_grid_pane_g2

0xf001,	// (0x0007d007) cam4_grid_pane_g3

0xf00a,	// (0x0007d010) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007df5a) cam4_grid_pane_g

0x0ef4,	// (0x0006eefa) aid_placing_vt_slider_lsc_ParamLimits

0x11e1,	// (0x0006f1e7) vidtel_button_pane_ParamLimits

0x11e1,	// (0x0006f1e7) vidtel_button_pane

0x96e3,	// (0x000776e9) bg_button_pane_cp034

0xf015,	// (0x0007d01b) vidtel_button_pane_g1

0xf01d,	// (0x0007d023) vidtel_button_pane_t1

0xda3b,	// (0x0007ba41) aid_size_vtel_slider_touch

0xdaf4,	// (0x0007bafa) scroll_pane_cp039

0x7678,	// (0x0007567e) ncim_query_button_pane_cp01_ParamLimits

0x7697,	// (0x0007569d) ncimui_query_pane_g1_ParamLimits

0xbce3,	// (0x00079ce9) input_focus_pane_cp012_ParamLimits

0xe365,	// (0x0007c36b) ncim_query_entry_pane_t1_ParamLimits

0xdaf4,	// (0x0007bafa) scroll_pane_cp039_ParamLimits

0xb495,	// (0x0007949b) navi_pane_bcale_mc_g1

0xb49d,	// (0x000794a3) navi_pane_bcale_mc_t1

0xe7e5,	// (0x0007c7eb) main_sp_fs_email_pane_g1

0xe7f1,	// (0x0007c7f7) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007dceb) main_sp_fs_email_pane_g

0xea81,	// (0x0007ca87) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea81,	// (0x0007ca87) list_single_cale_mrui_row_pane_g3

0x89d8,	// (0x000769de) list_single_recal_day_pane_g5_event_pane

0xa9a9,	// (0x000789af) list_single_recal_day_pane_g7

0xf033,	// (0x0007d039) list_recal_day_event_pane_cp01

0xf03c,	// (0x0007d042) list_recal_vselct_arw_lo_pane_cp01

0xf044,	// (0x0007d04a) list_recal_vselct_arw_up_pane_cp01

0xf04c,	// (0x0007d052) list_recal_vselct_pane_cp01

0xda5d,	// (0x0007ba63) list_recal_day_event_pane_cp01_g1

0xbcfa,	// (0x00079d00) list_recal_day_event_pane_cp01_t1

0xa9b1,	// (0x000789b7) list_single_recal_day_pane_t1_ParamLimits

0xa9c3,	// (0x000789c9) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007de48) list_single_recal_day_pane_t_ParamLimits

0x9d9e,	// (0x00077da4) bg_notes_pane_ParamLimits

0x9e49,	// (0x00077e4f) list_notes_pane_ParamLimits

0x0237,	// (0x0006e23d) scroll_pane_cp06_ParamLimits

0xa9ed,	// (0x000789f3) main_notes_pane_ParamLimits

0x96e3,	// (0x000776e9) main_welc_pane

0x95bc,	// (0x000775c2) main_welc_body_pane_ParamLimits

0x95bc,	// (0x000775c2) main_welc_body_pane

0x95db,	// (0x000775e1) main_welc_opti_pane_ParamLimits

0x95db,	// (0x000775e1) main_welc_opti_pane

0x9624,	// (0x0007762a) main_welc_pane_t1_ParamLimits

0x9624,	// (0x0007762a) main_welc_pane_t1

0xf056,	// (0x0007d05c) main_welc_body_row_pane_ParamLimits

0xf056,	// (0x0007d05c) main_welc_body_row_pane

0xe30f,	// (0x0007c315) main_welc_opti_row_pane_ParamLimits

0xe30f,	// (0x0007c315) main_welc_opti_row_pane

0xf06d,	// (0x0007d073) main_welc_opti_row_pane_g1

0x9646,	// (0x0007764c) main_welc_opti_row_pane_t1

0xf075,	// (0x0007d07b) main_welc_body_row_pane_t1

0xedd0,	// (0x0007cdd6) popup_notif_wgt_heading_pane

0xedea,	// (0x0007cdf0) aid_size_list_notif_wgt_del_ParamLimits

0xedf7,	// (0x0007cdfd) list_notif_wgt_row_pane_g1_ParamLimits

0xee03,	// (0x0007ce09) list_notif_wgt_row_pane_g2_ParamLimits

0xee12,	// (0x0007ce18) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007deaf) list_notif_wgt_row_pane_g_ParamLimits

0xee1f,	// (0x0007ce25) list_notif_wgt_row_pane_t1_ParamLimits

0xee35,	// (0x0007ce3b) list_notif_wgt_row_pane_t2_ParamLimits

0xee47,	// (0x0007ce4d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007deb6) list_notif_wgt_row_pane_t_ParamLimits

0x8ef0,	// (0x00076ef6) listrow_wgtman_pane_g1_ParamLimits

0x8efd,	// (0x00076f03) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007dedf) listrow_wgtman_pane_g_ParamLimits

0x8f1b,	// (0x00076f21) listrow_wgtman_pane_t1_ParamLimits

0x8f33,	// (0x00076f39) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007dee4) listrow_wgtman_pane_t_ParamLimits

0x8f59,	// (0x00076f5f) wait_bar_pane_cp09_ParamLimits

0x96e3,	// (0x000776e9) bg_popup_heading_pane_cp02

0xf084,	// (0x0007d08a) popup_notif_wgt_heading_pane_g1

0xf08c,	// (0x0007d092) popup_notif_wgt_heading_pane_t1

0x96e3,	// (0x000776e9) main_vids_pane

0x96e3,	// (0x000776e9) vids_listscroll_pane

0x9655,	// (0x0007765b) scroll_pane_cp040

0x96e3,	// (0x000776e9) vids_list_pane

0x9660,	// (0x00077666) vids_list_double_pane_ParamLimits

0x9660,	// (0x00077666) vids_list_double_pane

0x9671,	// (0x00077677) vids_list_double_pane_g1

0x967a,	// (0x00077680) vids_list_double_pane_t1

0x968a,	// (0x00077690) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007df68) vids_list_double_pane_t

0x96ed,	// (0x000776f3) main_ncimui_pane_ParamLimits

0x74ae,	// (0x000754b4) main_ncimui_pane_g1_ParamLimits

0x74ba,	// (0x000754c0) main_ncimui_pane_g2_ParamLimits

0x74ba,	// (0x000754c0) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007dbf0) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007dbf0) main_ncimui_pane_g

0x95fa,	// (0x00077600) main_welc_pane_g1_ParamLimits

0x95fa,	// (0x00077600) main_welc_pane_g1

0x960f,	// (0x00077615) main_welc_pane_g2_ParamLimits

0x960f,	// (0x00077615) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007df63) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007df63) main_welc_pane_g

0x9d9e,	// (0x00077da4) listscroll_mce_pane_ParamLimits

0xb5ec,	// (0x000795f2) wait_bar_pane_cp10

0xca24,	// (0x0007aa2a) main_cale_day_pane_ParamLimits

0xca24,	// (0x0007aa2a) main_cale_week_pane_ParamLimits

0x9d9e,	// (0x00077da4) main_messa_pane_ParamLimits

0x4c41,	// (0x00072c47) main_clock2_btn_pane_ParamLimits

0x4c41,	// (0x00072c47) main_clock2_btn_pane

0xd22b,	// (0x0007b231) main_clock2_btn_pane_cp01_ParamLimits

0xd22b,	// (0x0007b231) main_clock2_btn_pane_cp01

0xea52,	// (0x0007ca58) list_cale_mrui_pane_ParamLimits

0xee7d,	// (0x0007ce83) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007debd) main_cf0_pane_g

0x9194,	// (0x0007719a) area_left_week_number_pane_ParamLimits

0x91a2,	// (0x000771a8) area_top_day_name_pane_ParamLimits

0x91b5,	// (0x000771bb) frame_month_view_pane_ParamLimits

0xef31,	// (0x0007cf37) grid_month_view_pane_ParamLimits

0xef3f,	// (0x0007cf45) frm_month_g1_ParamLimits

0x9240,	// (0x00077246) frm_month_g2_ParamLimits

0x9253,	// (0x00077259) frm_month_g3_ParamLimits

0x9266,	// (0x0007726c) frm_month_g4_ParamLimits

0x9279,	// (0x0007727f) frm_month_g5_ParamLimits

0x928c,	// (0x00077292) frm_month_g6_ParamLimits

0x92a1,	// (0x000772a7) frm_month_g7_ParamLimits

0xef4c,	// (0x0007cf52) frm_month_g8_ParamLimits

0x92b6,	// (0x000772bc) frm_month_g9_ParamLimits

0x92c6,	// (0x000772cc) frm_month_g10_ParamLimits

0x92d6,	// (0x000772dc) frm_month_g11_ParamLimits

0x92e6,	// (0x000772ec) frm_month_g12_ParamLimits

0x92f8,	// (0x000772fe) frm_month_g13_ParamLimits

0x930c,	// (0x00077312) frm_month_g14_ParamLimits

0x9320,	// (0x00077326) frm_month_g15_ParamLimits

0x9334,	// (0x0007733a) frm_month_g16_ParamLimits

0xff08,	// (0x0007df0e) frm_month_g_ParamLimits

0xef59,	// (0x0007cf5f) cell_top_day_name_pane_t1_ParamLimits

0x9348,	// (0x0007734e) cell_area_left_week_number_pane_g1_ParamLimits

0x9354,	// (0x0007735a) cell_area_left_week_number_pane_t1_ParamLimits

0xd0a3,	// (0x0007b0a9) cell_month_view_pane_g1_ParamLimits

0x9367,	// (0x0007736d) cell_month_view_pane_t1_ParamLimits

0x9d96,	// (0x00077d9c) main_clock2_btn_pane_g1

0xf09a,	// (0x0007d0a0) main_clock2_btn_pane_t1

0xbce3,	// (0x00079ce9) listscroll_cmail_pane_ParamLimits

0xe7e5,	// (0x0007c7eb) main_sp_fs_email_pane_g1_ParamLimits

0xe7f1,	// (0x0007c7f7) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007dceb) main_sp_fs_email_pane_g_ParamLimits

0xeb5a,	// (0x0007cb60) list_recal_day_pane_ParamLimits

0xeb6b,	// (0x0007cb71) mian_recal_day_pane_t1

0x8150,	// (0x00076156) list_single_dyc_row_text_pane_t4_ParamLimits

0x8150,	// (0x00076156) list_single_dyc_row_text_pane_t4

0x8199,	// (0x0007619f) list_single_dyc_row_text_pane_t5_ParamLimits

0x8199,	// (0x0007619f) list_single_dyc_row_text_pane_t5

0xa71e,	// (0x00078724) list_single_dyc_row_text_pane_t6_ParamLimits

0xa71e,	// (0x00078724) list_single_dyc_row_text_pane_t6

0x1fee,	// (0x0006fff4) aid_mgn_list_cale_time_pane

0x96ed,	// (0x000776f3) main_gallery2_pane_ParamLimits

0xd23f,	// (0x0007b245) main_clock2_pane_cp01_t1

0xd24d,	// (0x0007b253) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0007d7c6) main_clock2_pane_cp01_t

0x0653,	// (0x0006e659) cale_week_scroll_pane_g16_ParamLimits

0x0653,	// (0x0006e659) cale_week_scroll_pane_g16

0xab9e,	// (0x00078ba4) vorec_slider_pane

0xf01d,	// (0x0007d023) vidtel_button_pane_t1_ParamLimits

0x8a3e,	// (0x00076a44) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8a3e,	// (0x00076a44) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8a51,	// (0x00076a57) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8a51,	// (0x00076a57) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0007de6b) main_fs_bigclock_clock_pane_g_ParamLimits

0x8a68,	// (0x00076a6e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8a7e,	// (0x00076a84) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0007de74) main_fs_bigclock_clock_pane_t_ParamLimits

0x43b8,	// (0x000723be) main_mup3_lyrics_pane_ParamLimits

0x43b8,	// (0x000723be) main_mup3_lyrics_pane

0x96c0,	// (0x000776c6) main_mup3_lyrics_pane_t1_ParamLimits

0x96c0,	// (0x000776c6) main_mup3_lyrics_pane_t1

0xa151,	// (0x00078157) aid_main_mp4_pane_t1_area

0xa15b,	// (0x00078161) aid_main_mp4_pane_t2_area

0xa207,	// (0x0007820d) main_mp4_pane_g7_ParamLimits

0xa207,	// (0x0007820d) main_mp4_pane_g7

0xa213,	// (0x00078219) main_mp4_pane_g8_ParamLimits

0xa213,	// (0x00078219) main_mp4_pane_g8

0x5799,	// (0x0007379f) aid_call6_pane_g1_size

0x951e,	// (0x00077524) list_double_large_graphic_phob2_other_pane_ParamLimits

0x951e,	// (0x00077524) list_double_large_graphic_phob2_other_pane

0x96db,	// (0x000776e1) list_double_large_graphic_phob2_other_pane_g1

0x96e3,	// (0x000776e9) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00087539 };

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
0x22da,	// (0x00089813) Screen

0x22e6,	// (0x0008981f) application_window

0x233a,	// (0x00089873) area_bottom_pane_ParamLimits

0x233a,	// (0x00089873) area_bottom_pane

0x2373,	// (0x000898ac) area_top_pane_ParamLimits

0x2373,	// (0x000898ac) area_top_pane

0x0290,	// (0x000877c9) call_video_uplink_pane_ParamLimits

0x0290,	// (0x000877c9) call_video_uplink_pane

0x23ed,	// (0x00089926) main_pane_ParamLimits

0x23ed,	// (0x00089926) main_pane

0xc470,	// (0x000939a9) context_pane

0x5a76,	// (0x0008cfaf) navi_pane

0x5aa6,	// (0x0008cfdf) popup_cale_events_window_ParamLimits

0x5aa6,	// (0x0008cfdf) popup_cale_events_window

0xc483,	// (0x000939bc) popup_mup_playback_window

0x5abe,	// (0x0008cff7) signal_pane

0x09e7,	// (0x00087f20) main_browser_pane

0xafb2,	// (0x000924eb) main_burst_pane

0x5778,	// (0x0008ccb1) main_calc_pane

0xafb2,	// (0x000924eb) main_cale_day_pane

0x09e7,	// (0x00087f20) main_cale_month_pane

0xafb2,	// (0x000924eb) main_cale_week_pane

0xafb2,	// (0x000924eb) main_call_pane

0x06c1,	// (0x00087bfa) main_call_poc_pane

0xafb2,	// (0x000924eb) main_camera_pane

0xafb2,	// (0x000924eb) main_chi_dic_pane

0xae54,	// (0x0009238d) main_clock_pane

0x06c1,	// (0x00087bfa) main_fmradio_pane

0xafb2,	// (0x000924eb) main_graph_messa_pane

0x06c1,	// (0x00087bfa) main_help_pane

0x09e7,	// (0x00087f20) main_im_pane

0x091c,	// (0x00087e55) main_image_pane_ParamLimits

0x091c,	// (0x00087e55) main_image_pane

0x06c1,	// (0x00087bfa) main_location2_pane

0xafb2,	// (0x000924eb) main_location_pane

0x06c1,	// (0x00087bfa) main_messa_pane

0x06c1,	// (0x00087bfa) main_mp2_pane

0xafb2,	// (0x000924eb) main_mp_pane

0x06c1,	// (0x00087bfa) main_msg_pane

0x06c1,	// (0x00087bfa) main_mup_eq_pane

0x06c1,	// (0x00087bfa) main_mup_pane

0xafb2,	// (0x000924eb) main_notes_pane

0x06c1,	// (0x00087bfa) main_pec_pane

0x06c1,	// (0x00087bfa) main_phob_pane

0x06c1,	// (0x00087bfa) main_pinb_pane

0x06c1,	// (0x00087bfa) main_postcard_pane

0x06c1,	// (0x00087bfa) main_qdial_pane

0xafb2,	// (0x000924eb) main_skin_pane

0x06c1,	// (0x00087bfa) main_smil2_pane

0xafb2,	// (0x000924eb) main_smil_pane

0xafb2,	// (0x000924eb) main_video_pane

0xafb2,	// (0x000924eb) main_video_tele_pane

0x091c,	// (0x00087e55) main_viewer_pane_ParamLimits

0x091c,	// (0x00087e55) main_viewer_pane

0xafb2,	// (0x000924eb) main_vorec_pane

0x57ce,	// (0x0008cd07) popup_blid_sat_info_window_ParamLimits

0x57ce,	// (0x0008cd07) popup_blid_sat_info_window

0x5832,	// (0x0008cd6b) popup_dyc_status_message_window_ParamLimits

0x5832,	// (0x0008cd6b) popup_dyc_status_message_window

0x584c,	// (0x0008cd85) popup_grid_large_graphic_window_ParamLimits

0x584c,	// (0x0008cd85) popup_grid_large_graphic_window

0x590e,	// (0x0008ce47) popup_loc_request_window_ParamLimits

0x590e,	// (0x0008ce47) popup_loc_request_window

0x5a4a,	// (0x0008cf83) popup_wml_address_window_ParamLimits

0x5a4a,	// (0x0008cf83) popup_wml_address_window

0x55b6,	// (0x0008caef) call_muted_g1

0x5247,	// (0x0008c780) popup_call_audio_conf_window_ParamLimits

0x5247,	// (0x0008c780) popup_call_audio_conf_window

0x55c6,	// (0x0008caff) popup_call_audio_first_window_ParamLimits

0x55c6,	// (0x0008caff) popup_call_audio_first_window

0x563c,	// (0x0008cb75) popup_call_audio_in_window_ParamLimits

0x563c,	// (0x0008cb75) popup_call_audio_in_window

0x5678,	// (0x0008cbb1) popup_call_audio_out_window_ParamLimits

0x5678,	// (0x0008cbb1) popup_call_audio_out_window

0x56b2,	// (0x0008cbeb) popup_call_audio_second_window_ParamLimits

0x56b2,	// (0x0008cbeb) popup_call_audio_second_window

0x5708,	// (0x0008cc41) popup_call_audio_wait_window_ParamLimits

0x5708,	// (0x0008cc41) popup_call_audio_wait_window

0x573d,	// (0x0008cc76) popup_number_entry_window_ParamLimits

0x573d,	// (0x0008cc76) popup_number_entry_window

0x02ae,	// (0x000877e7) bg_popup_call_pane_cp05_ParamLimits

0x02ae,	// (0x000877e7) bg_popup_call_pane_cp05

0x02ce,	// (0x00087807) popup_number_entry_window_t1

0x02e1,	// (0x0008781a) popup_number_entry_window_t2

0x02f3,	// (0x0008782c) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00096668) popup_number_entry_window_t

0x0305,	// (0x0008783e) text_title_cp2

0x0318,	// (0x00087851) bg_popup_call_pane_cp_ParamLimits

0x0318,	// (0x00087851) bg_popup_call_pane_cp

0x0326,	// (0x0008785f) call_thumbnail_pane

0x032e,	// (0x00087867) popup_call_audio_in_window_g1_ParamLimits

0x032e,	// (0x00087867) popup_call_audio_in_window_g1

0x033a,	// (0x00087873) popup_call_audio_in_window_g2_ParamLimits

0x033a,	// (0x00087873) popup_call_audio_in_window_g2

0x0346,	// (0x0008787f) popup_call_audio_in_window_g3_ParamLimits

0x0346,	// (0x0008787f) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00096671) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00096671) popup_call_audio_in_window_g

0x0352,	// (0x0008788b) popup_call_audio_in_window_t1_ParamLimits

0x0352,	// (0x0008788b) popup_call_audio_in_window_t1

0x036e,	// (0x000878a7) popup_call_audio_in_window_t2_ParamLimits

0x036e,	// (0x000878a7) popup_call_audio_in_window_t2

0x038a,	// (0x000878c3) popup_call_audio_in_window_t3_ParamLimits

0x038a,	// (0x000878c3) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00096678) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00096678) popup_call_audio_in_window_t

0x0318,	// (0x00087851) bg_popup_call_pane_cp01_ParamLimits

0x0318,	// (0x00087851) bg_popup_call_pane_cp01

0x0326,	// (0x0008785f) call_thumbnail_pane_cp02

0x039d,	// (0x000878d6) call_type_pane_cp022

0x03a5,	// (0x000878de) popup_call_audio_out_window_g1_ParamLimits

0x03a5,	// (0x000878de) popup_call_audio_out_window_g1

0x03b7,	// (0x000878f0) popup_call_audio_out_window_g2_ParamLimits

0x03b7,	// (0x000878f0) popup_call_audio_out_window_g2

0x03c3,	// (0x000878fc) popup_call_audio_out_window_g3_ParamLimits

0x03c3,	// (0x000878fc) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0009667f) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0009667f) popup_call_audio_out_window_g

0x03d5,	// (0x0008790e) popup_call_audio_out_window_t1_ParamLimits

0x03d5,	// (0x0008790e) popup_call_audio_out_window_t1

0x03ed,	// (0x00087926) popup_call_audio_out_window_t2_ParamLimits

0x03ed,	// (0x00087926) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00096686) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00096686) popup_call_audio_out_window_t

0x0402,	// (0x0008793b) bg_popup_call_pane_ParamLimits

0x0402,	// (0x0008793b) bg_popup_call_pane

0x25a0,	// (0x00089ad9) call_thumbnail_pane_cp_ParamLimits

0x25a0,	// (0x00089ad9) call_thumbnail_pane_cp

0x0486,	// (0x000879bf) call_type_pane_cp01_ParamLimits

0x0486,	// (0x000879bf) call_type_pane_cp01

0x04ca,	// (0x00087a03) popup_call_audio_first_window_g1_ParamLimits

0x04ca,	// (0x00087a03) popup_call_audio_first_window_g1

0x0516,	// (0x00087a4f) popup_call_audio_first_window_g2_ParamLimits

0x0516,	// (0x00087a4f) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0009668b) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0009668b) popup_call_audio_first_window_g

0x055a,	// (0x00087a93) popup_call_audio_first_window_t1_ParamLimits

0x055a,	// (0x00087a93) popup_call_audio_first_window_t1

0x0606,	// (0x00087b3f) popup_call_audio_first_window_t4_ParamLimits

0x0606,	// (0x00087b3f) popup_call_audio_first_window_t4

0x0692,	// (0x00087bcb) popup_call_audio_first_window_t5_ParamLimits

0x0692,	// (0x00087bcb) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00096690) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00096690) popup_call_audio_first_window_t

0x06c1,	// (0x00087bfa) bg_popup_call_pane_cp02

0x06cb,	// (0x00087c04) call_type_pane_cp023

0x06d3,	// (0x00087c0c) popup_call_audio_wait_window_g1

0x06db,	// (0x00087c14) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00096697) popup_call_audio_wait_window_g

0x06e3,	// (0x00087c1c) popup_call_audio_wait_window_t3

0x06f1,	// (0x00087c2a) bg_popup_call_pane_cp03_ParamLimits

0x06f1,	// (0x00087c2a) bg_popup_call_pane_cp03

0x0751,	// (0x00087c8a) call_thumbnail_pane_cp011_ParamLimits

0x0751,	// (0x00087c8a) call_thumbnail_pane_cp011

0x075d,	// (0x00087c96) call_type_pane_cp034_ParamLimits

0x075d,	// (0x00087c96) call_type_pane_cp034

0x0799,	// (0x00087cd2) popup_call_audio_second_window_g1_ParamLimits

0x0799,	// (0x00087cd2) popup_call_audio_second_window_g1

0x07d5,	// (0x00087d0e) popup_call_audio_second_window_g2_ParamLimits

0x07d5,	// (0x00087d0e) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0009669c) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0009669c) popup_call_audio_second_window_g

0x0811,	// (0x00087d4a) popup_call_audio_second_window_t1_ParamLimits

0x0811,	// (0x00087d4a) popup_call_audio_second_window_t1

0x0892,	// (0x00087dcb) popup_call_audio_second_window_t2_ParamLimits

0x0892,	// (0x00087dcb) popup_call_audio_second_window_t2

0x08c8,	// (0x00087e01) popup_call_audio_second_window_t3_ParamLimits

0x08c8,	// (0x00087e01) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x000966a1) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x000966a1) popup_call_audio_second_window_t

0x06c1,	// (0x00087bfa) bg_popup_call_pane_cp04

0x08fe,	// (0x00087e37) list_conf_pane

0x0906,	// (0x00087e3f) popup_call_audio_conf_window_t1

0x0914,	// (0x00087e4d) call_thumbnail_pane_g1

0x091c,	// (0x00087e55) bg_pinb_pane_ParamLimits

0x091c,	// (0x00087e55) bg_pinb_pane

0x092a,	// (0x00087e63) find_pinb_pane

0x0933,	// (0x00087e6c) listscroll_pinb_pane_ParamLimits

0x0933,	// (0x00087e6c) listscroll_pinb_pane

0x0942,	// (0x00087e7b) pinb_bg_pane_g1

0x25c4,	// (0x00089afd) pinb_bg_pane_g2

0x25d0,	// (0x00089b09) pinb_bg_pane_g3

0x25dc,	// (0x00089b15) pinb_bg_pane_g4

0x25e8,	// (0x00089b21) pinb_bg_pane_g5

0x25f4,	// (0x00089b2d) pinb_bg_pane_g6

0x25ff,	// (0x00089b38) pinb_bg_pane_g7

0x260a,	// (0x00089b43) pinb_bg_pane_g8

0x2615,	// (0x00089b4e) pinb_bg_pane_g9

0x261f,	// (0x00089b58) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x000966a8) pinb_bg_pane_g

0x263c,	// (0x00089b75) grid_pinb_pane

0x2647,	// (0x00089b80) list_pinb_pane

0x2652,	// (0x00089b8b) scroll_pane_cp01_ParamLimits

0x2652,	// (0x00089b8b) scroll_pane_cp01

0x094c,	// (0x00087e85) find_pinb_pane_g1_ParamLimits

0x094c,	// (0x00087e85) find_pinb_pane_g1

0x0964,	// (0x00087e9d) find_pinb_pane_t1

0x0976,	// (0x00087eaf) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000966c2) find_pinb_pane_t

0x098b,	// (0x00087ec4) input_focus_pane_cp01_ParamLimits

0x098b,	// (0x00087ec4) input_focus_pane_cp01

0x2664,	// (0x00089b9d) cell_pinb_pane_ParamLimits

0x2664,	// (0x00089b9d) cell_pinb_pane

0x2686,	// (0x00089bbf) cell_pinb_pane_g1_ParamLimits

0x2686,	// (0x00089bbf) cell_pinb_pane_g1

0x269a,	// (0x00089bd3) cell_pinb_pane_g2_ParamLimits

0x269a,	// (0x00089bd3) cell_pinb_pane_g2

0x0997,	// (0x00087ed0) cell_pinb_pane_g3_ParamLimits

0x0997,	// (0x00087ed0) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000966c7) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000966c7) cell_pinb_pane_g

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp01

0x26a6,	// (0x00089bdf) list_pinb_item_pane_ParamLimits

0x26a6,	// (0x00089bdf) list_pinb_item_pane

0x06c1,	// (0x00087bfa) list_highlight_pane_cp02

0x26b9,	// (0x00089bf2) list_pinb_item_pane_g1_ParamLimits

0x26b9,	// (0x00089bf2) list_pinb_item_pane_g1

0x26c6,	// (0x00089bff) list_pinb_item_pane_g2_ParamLimits

0x26c6,	// (0x00089bff) list_pinb_item_pane_g2

0x26d2,	// (0x00089c0b) list_pinb_item_pane_g3_ParamLimits

0x26d2,	// (0x00089c0b) list_pinb_item_pane_g3

0x26e3,	// (0x00089c1c) list_pinb_item_pane_g4_ParamLimits

0x26e3,	// (0x00089c1c) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000966ce) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000966ce) list_pinb_item_pane_g

0x26ef,	// (0x00089c28) list_pinb_item_pane_t1_ParamLimits

0x26ef,	// (0x00089c28) list_pinb_item_pane_t1

0x2724,	// (0x00089c5d) calc_display_pane

0x274a,	// (0x00089c83) calc_paper_pane

0x276d,	// (0x00089ca6) grid_calc_pane

0x06c1,	// (0x00087bfa) bg_list_pane_cp01

0x279b,	// (0x00089cd4) clock_g1

0x27a3,	// (0x00089cdc) clock_g2

0x0001,

0xf19e,	// (0x000966d7) clock_g

0x27ab,	// (0x00089ce4) clock_t1_ParamLimits

0x27ab,	// (0x00089ce4) clock_t1

0x27c0,	// (0x00089cf9) clock_t2_ParamLimits

0x27c0,	// (0x00089cf9) clock_t2

0x27d2,	// (0x00089d0b) clock_t3_ParamLimits

0x27d2,	// (0x00089d0b) clock_t3

0x27e4,	// (0x00089d1d) clock_t4_ParamLimits

0x27e4,	// (0x00089d1d) clock_t4

0x27f6,	// (0x00089d2f) clock_t5_ParamLimits

0x27f6,	// (0x00089d2f) clock_t5

0x280b,	// (0x00089d44) clock_t6_ParamLimits

0x280b,	// (0x00089d44) clock_t6

0x281d,	// (0x00089d56) clock_t7_ParamLimits

0x281d,	// (0x00089d56) clock_t7

0x282f,	// (0x00089d68) clock_t8_ParamLimits

0x282f,	// (0x00089d68) clock_t8

0x2843,	// (0x00089d7c) clock_t9_ParamLimits

0x2843,	// (0x00089d7c) clock_t9

0x0008,

0xf1a3,	// (0x000966dc) clock_t_ParamLimits

0xf1a3,	// (0x000966dc) clock_t

0x09a3,	// (0x00087edc) popup_clock_analogue_window_cp02

0x09a3,	// (0x00087edc) popup_clock_digital_window_cp01

0x09ab,	// (0x00087ee4) listscroll_help_pane

0x06c1,	// (0x00087bfa) phob_pre_status_pane

0x09b5,	// (0x00087eee) grid_qdial_pane

0x06c1,	// (0x00087bfa) listscroll_mce_pane

0x09bf,	// (0x00087ef8) bg_notes_pane

0x09c9,	// (0x00087f02) list_notes_pane

0x2859,	// (0x00089d92) scroll_pane_cp06

0x09d3,	// (0x00087f0c) bg_calc_paper_pane

0xabf7,	// (0x00092130) list_calc_pane

0x09e7,	// (0x00087f20) bg_calc_display_pane

0x2864,	// (0x00089d9d) calc_display_pane_t1

0x2876,	// (0x00089daf) calc_display_pane_t2

0xac11,	// (0x0009214a) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000966ef) calc_display_pane_t

0x2888,	// (0x00089dc1) cell_calc_pane_ParamLimits

0x2888,	// (0x00089dc1) cell_calc_pane

0x09f3,	// (0x00087f2c) bg_calc_paper_pane_g1

0x09ff,	// (0x00087f38) bg_calc_paper_pane_g2

0x0a0b,	// (0x00087f44) bg_calc_paper_pane_g3

0x0a17,	// (0x00087f50) bg_calc_paper_pane_g4

0x0a23,	// (0x00087f5c) bg_calc_paper_pane_g5

0x28c3,	// (0x00089dfc) bg_calc_paper_pane_g6

0x28d6,	// (0x00089e0f) bg_calc_paper_pane_g7

0x28e9,	// (0x00089e22) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x000966f6) bg_calc_paper_pane_g

0x28fa,	// (0x00089e33) calc_bg_paper_pane_g9

0x290b,	// (0x00089e44) list_calc_item_pane_ParamLimits

0x290b,	// (0x00089e44) list_calc_item_pane

0x0a2f,	// (0x00087f68) list_calc_item_pane_g1

0xac23,	// (0x0009215c) list_calc_item_pane_t1_ParamLimits

0xac23,	// (0x0009215c) list_calc_item_pane_t1

0x291f,	// (0x00089e58) list_calc_item_pane_t2_ParamLimits

0x291f,	// (0x00089e58) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00096707) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00096707) list_calc_item_pane_t

0x0a3c,	// (0x00087f75) cell_calc_pane_g1

0x0a46,	// (0x00087f7f) grid_highlight_pane_cp02

0x0a68,	// (0x00087fa1) bg_calc_display_pane_g1

0xac35,	// (0x0009216e) bg_calc_display_pane_g2

0x0a71,	// (0x00087faa) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x00096711) bg_calc_display_pane_g

0x2951,	// (0x00089e8a) cell_qdial_pane_ParamLimits

0x2951,	// (0x00089e8a) cell_qdial_pane

0x2967,	// (0x00089ea0) cell_qdial_pane_g1_ParamLimits

0x2967,	// (0x00089ea0) cell_qdial_pane_g1

0x297d,	// (0x00089eb6) cell_qdial_pane_g2_ParamLimits

0x297d,	// (0x00089eb6) cell_qdial_pane_g2

0x0a7a,	// (0x00087fb3) cell_qdial_pane_g3_ParamLimits

0x0a7a,	// (0x00087fb3) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00096718) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00096718) cell_qdial_pane_g

0x29a3,	// (0x00089edc) cell_qdial_pane_t1_ParamLimits

0x29a3,	// (0x00089edc) cell_qdial_pane_t1

0x29bb,	// (0x00089ef4) cell_qdial_pane_t2_ParamLimits

0x29bb,	// (0x00089ef4) cell_qdial_pane_t2

0x29ce,	// (0x00089f07) cell_qdial_pane_t3_ParamLimits

0x29ce,	// (0x00089f07) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x00096721) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x00096721) cell_qdial_pane_t

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp04

0x0a86,	// (0x00087fbf) thumbnail_qdial_pane_ParamLimits

0x0a86,	// (0x00087fbf) thumbnail_qdial_pane

0x0ae2,	// (0x0008801b) list_help_pane

0x0aeb,	// (0x00088024) scroll_pane_cp02

0x29e1,	// (0x00089f1a) help_list_pane_t1_ParamLimits

0x29e1,	// (0x00089f1a) help_list_pane_t1

0xac3f,	// (0x00092178) bg_notes_pane_g2

0xac47,	// (0x00092180) bg_notes_pane_g3

0xac4f,	// (0x00092188) notes_bg_pane_g1

0xac57,	// (0x00092190) notes_bg_pane_g4

0xac5f,	// (0x00092198) notes_bg_pane_g5

0xac67,	// (0x000921a0) notes_bg_pane_g6

0xac6f,	// (0x000921a8) notes_bg_pane_g7

0xac77,	// (0x000921b0) notes_bg_pane_g8

0xac7f,	// (0x000921b8) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0009673f) notes_bg_pane_g

0xf118,	// (0x00096651) list_notes_text_pane_ParamLimits

0xf118,	// (0x00096651) list_notes_text_pane

0x0af4,	// (0x0008802d) list_notes_text_pane_g1

0x2a05,	// (0x00089f3e) list_notes_text_pane_t1

0x09e7,	// (0x00087f20) listscroll_cale_week_pane

0x2a30,	// (0x00089f69) bg_cale_heading_pane

0x0b0e,	// (0x00088047) bg_cale_pane_cp01

0x2a4c,	// (0x00089f85) cale_week_corner_pane

0x2a62,	// (0x00089f9b) cale_week_day_heading_pane

0x2a7e,	// (0x00089fb7) cale_week_scroll_pane_g1

0x2a97,	// (0x00089fd0) cale_week_scroll_pane_g2

0x2aa8,	// (0x00089fe1) cale_week_scroll_pane_g3

0x2ab9,	// (0x00089ff2) cale_week_scroll_pane_g4

0x2aca,	// (0x0008a003) cale_week_scroll_pane_g5

0x2adb,	// (0x0008a014) cale_week_scroll_pane_g6

0x2aec,	// (0x0008a025) cale_week_scroll_pane_g7

0x2afd,	// (0x0008a036) cale_week_scroll_pane_g8

0x2b0e,	// (0x0008a047) cale_week_scroll_pane_g9

0x2b1f,	// (0x0008a058) cale_week_scroll_pane_g10

0x2b30,	// (0x0008a069) cale_week_scroll_pane_g11

0x2b41,	// (0x0008a07a) cale_week_scroll_pane_g12

0x2b52,	// (0x0008a08b) cale_week_scroll_pane_g13

0x2b6b,	// (0x0008a0a4) cale_week_scroll_pane_g14

0x2b84,	// (0x0008a0bd) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0009674e) cale_week_scroll_pane_g

0x2b9d,	// (0x0008a0d6) cale_week_time_pane

0x2bae,	// (0x0008a0e7) grid_cale_week_pane

0x2bc9,	// (0x0008a102) scroll_pane_cp08

0x2be1,	// (0x0008a11a) cell_cale_week_pane_ParamLimits

0x2be1,	// (0x0008a11a) cell_cale_week_pane

0x2c29,	// (0x0008a162) cale_week_day_heading_pane_t1

0x2c3d,	// (0x0008a176) cale_week_day_heading_pane_t2

0x2c51,	// (0x0008a18a) cale_week_day_heading_pane_t3

0x2c65,	// (0x0008a19e) cale_week_day_heading_pane_t4

0x2c79,	// (0x0008a1b2) cale_week_day_heading_pane_t5

0x2c8d,	// (0x0008a1c6) cale_week_day_heading_pane_t6

0x2ca1,	// (0x0008a1da) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0009676d) cale_week_day_heading_pane_t

0x0b39,	// (0x00088072) bg_cale_side_pane

0x2cb5,	// (0x0008a1ee) cale_week_time_pane_t1

0x2ccd,	// (0x0008a206) cale_week_time_pane_t2

0x2ce5,	// (0x0008a21e) cale_week_time_pane_t3

0x2cfd,	// (0x0008a236) cale_week_time_pane_t4

0x2d15,	// (0x0008a24e) cale_week_time_pane_t5

0x2d2d,	// (0x0008a266) cale_week_time_pane_t6

0x2d45,	// (0x0008a27e) cale_week_time_pane_t7

0x2d61,	// (0x0008a29a) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x0009677c) cale_week_time_pane_t

0x2d81,	// (0x0008a2ba) cell_cale_week_pane_g2

0x2d92,	// (0x0008a2cb) cell_cale_week_pane_g3_ParamLimits

0x2d92,	// (0x0008a2cb) cell_cale_week_pane_g3

0x0b47,	// (0x00088080) grid_highlight_pane_cp07

0x0b4f,	// (0x00088088) listscroll_gms_pane

0x0b59,	// (0x00088092) grid_gms_pane

0x0b62,	// (0x0008809b) listscroll_gms_pane_g1

0x0b6a,	// (0x000880a3) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0009678d) listscroll_gms_pane_g

0x2daa,	// (0x0008a2e3) scroll_pane_cp010

0x2db5,	// (0x0008a2ee) cell_gms_pane_ParamLimits

0x2db5,	// (0x0008a2ee) cell_gms_pane

0x2dcf,	// (0x0008a308) cell_gms_pane_g1

0x0b72,	// (0x000880ab) cell_gms_pane_g2

0x0b7a,	// (0x000880b3) cell_gms_pane_g3

0x0b83,	// (0x000880bc) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00096792) cell_gms_pane_g

0x0b8c,	// (0x000880c5) grid_highlight_pane_cp09

0x555e,	// (0x0008ca97) phob_pre_status_pane_g1

0x5566,	// (0x0008ca9f) phob_pre_status_pane_g2

0x556e,	// (0x0008caa7) phob_pre_status_pane_g3

0x5576,	// (0x0008caaf) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00096b81) phob_pre_status_pane_g

0x5586,	// (0x0008cabf) phob_pre_status_pane_t1

0x5596,	// (0x0008cacf) phob_pre_status_pane_t2

0x55a6,	// (0x0008cadf) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00096b8c) phob_pre_status_pane_t

0x06c1,	// (0x00087bfa) bg_list_pane_cp05

0x2ddf,	// (0x0008a318) grid_vorec_pane

0xac87,	// (0x000921c0) vorec_t1

0xac95,	// (0x000921ce) vorec_t2

0xaca3,	// (0x000921dc) vorec_t3

0xacb1,	// (0x000921ea) vorec_t4

0xacbf,	// (0x000921f8) vorec_t5

0xaccd,	// (0x00092206) vorec_t6

0x0006,

0xf262,	// (0x0009679b) vorec_t

0xace9,	// (0x00092222) wait_bar_pane_cp01

0x2de9,	// (0x0008a322) cell_vorec_pane_ParamLimits

0x2de9,	// (0x0008a322) cell_vorec_pane

0x0b94,	// (0x000880cd) cell_vorec_pane_g1

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp05

0x2e14,	// (0x0008a34d) cams_zoom_pane

0x2e23,	// (0x0008a35c) image_vga_pane

0x2e3d,	// (0x0008a376) main_camera_pane_g1

0x2e4f,	// (0x0008a388) main_camera_pane_g2

0x2e5f,	// (0x0008a398) main_camera_pane_g3

0x2e73,	// (0x0008a3ac) main_camera_pane_g4

0x2e87,	// (0x0008a3c0) main_camera_pane_g5

0x2e9b,	// (0x0008a3d4) main_camera_pane_g6

0x2eaf,	// (0x0008a3e8) main_camera_pane_g7

0x0007,

0xf271,	// (0x000967aa) main_camera_pane_g

0x2ec3,	// (0x0008a3fc) main_camera_pane_t1

0x2ed9,	// (0x0008a412) main_camera_pane_t2

0x0001,

0xf282,	// (0x000967bb) main_camera_pane_t

0x2f17,	// (0x0008a450) cams_zoom_pane_cp_ParamLimits

0x2f17,	// (0x0008a450) cams_zoom_pane_cp

0x2f3f,	// (0x0008a478) image_cif_pane_ParamLimits

0x2f3f,	// (0x0008a478) image_cif_pane

0x2f7a,	// (0x0008a4b3) image_subqcif_pane

0x2f84,	// (0x0008a4bd) main_video_pane_g1_ParamLimits

0x2f84,	// (0x0008a4bd) main_video_pane_g1

0x2fa8,	// (0x0008a4e1) main_video_pane_g2_ParamLimits

0x2fa8,	// (0x0008a4e1) main_video_pane_g2

0x2fde,	// (0x0008a517) main_video_pane_g3_ParamLimits

0x2fde,	// (0x0008a517) main_video_pane_g3

0x300c,	// (0x0008a545) main_video_pane_g4_ParamLimits

0x300c,	// (0x0008a545) main_video_pane_g4

0x303a,	// (0x0008a573) main_video_pane_g5_ParamLimits

0x303a,	// (0x0008a573) main_video_pane_g5

0x0baa,	// (0x000880e3) main_video_pane_g6_ParamLimits

0x0baa,	// (0x000880e3) main_video_pane_g6

0x0006,

0xf287,	// (0x000967c0) main_video_pane_g_ParamLimits

0xf287,	// (0x000967c0) main_video_pane_g

0x3063,	// (0x0008a59c) main_video_pane_t1_ParamLimits

0x3063,	// (0x0008a59c) main_video_pane_t1

0x0bc4,	// (0x000880fd) cams_zoom_pane_g1

0x0bcd,	// (0x00088106) cams_zoom_pane_g2

0x0bd6,	// (0x0008810f) cams_zoom_pane_g3

0x0bdf,	// (0x00088118) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x000967cf) cams_zoom_pane_g

0x30c0,	// (0x0008a5f9) grid_cams_pane

0x30da,	// (0x0008a613) linegrid_cams_pane

0x30ee,	// (0x0008a627) cell_cams_pane_ParamLimits

0x30ee,	// (0x0008a627) cell_cams_pane

0x0be8,	// (0x00088121) cams_burst_image_pane

0x0bf0,	// (0x00088129) cell_cams_pane_g1

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp03

0x0a3c,	// (0x00087f75) mp_bg_pane_g1

0x06c1,	// (0x00087bfa) bg_list_pane_cp03

0xc342,	// (0x0009387b) bg_mp_pane

0xc34a,	// (0x00093883) grid_mp_pane

0xc352,	// (0x0009388b) media_player_g1

0xc35c,	// (0x00093895) media_player_t1

0xc36a,	// (0x000938a3) media_player_t2

0xc378,	// (0x000938b1) media_player_t3

0xc386,	// (0x000938bf) media_player_t4

0xc394,	// (0x000938cd) media_player_t5

0xc3a2,	// (0x000938db) media_player_t6

0xc3b0,	// (0x000938e9) media_player_t7

0x0006,

0xf632,	// (0x00096b6b) media_player_t

0xc3be,	// (0x000938f7) wait_bar_pane_cp02

0xf617,	// (0x00096b50) main_usb_pane_t

0x5555,	// (0x0008ca8e) cell_mp_pane

0x0a3c,	// (0x00087f75) cell_mp_pane_g1

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp06

0x0bf8,	// (0x00088131) grid_skin_colour_pane

0x0c00,	// (0x00088139) list_highlight_pane_cp03

0x3227,	// (0x0008a760) skin_g1

0x0c08,	// (0x00088141) skin_t1

0x0c17,	// (0x00088150) skin_t2

0x0001,

0xf2cb,	// (0x00096804) skin_t

0x3231,	// (0x0008a76a) cell_skin_colour_pane_ParamLimits

0x3231,	// (0x0008a76a) cell_skin_colour_pane

0x0c25,	// (0x0008815e) cell_skin_colour_pane_g1

0x328d,	// (0x0008a7c6) call_video_g1_ParamLimits

0x328d,	// (0x0008a7c6) call_video_g1

0x32a9,	// (0x0008a7e2) call_video_g2_ParamLimits

0x32a9,	// (0x0008a7e2) call_video_g2

0x0001,

0xf2d0,	// (0x00096809) call_video_g_ParamLimits

0xf2d0,	// (0x00096809) call_video_g

0x32df,	// (0x0008a818) call_video_uplink_pane_cp1_ParamLimits

0x32df,	// (0x0008a818) call_video_uplink_pane_cp1

0x0c3f,	// (0x00088178) call_video_uplink_pane_cp2

0x335f,	// (0x0008a898) video_down_crop_pane_ParamLimits

0x335f,	// (0x0008a898) video_down_crop_pane

0x3425,	// (0x0008a95e) video_down_pane_ParamLimits

0x3425,	// (0x0008a95e) video_down_pane

0x0c47,	// (0x00088180) video_down_subqcif_pane_ParamLimits

0x0c47,	// (0x00088180) video_down_subqcif_pane

0x0c61,	// (0x0008819a) video_down_subqcif_pane_cp_ParamLimits

0x0c61,	// (0x0008819a) video_down_subqcif_pane_cp

0x0c87,	// (0x000881c0) im_reading_pane_ParamLimits

0x0c87,	// (0x000881c0) im_reading_pane

0x34f1,	// (0x0008aa2a) im_writing_pane_ParamLimits

0x34f1,	// (0x0008aa2a) im_writing_pane

0x350f,	// (0x0008aa48) im_reading_pane_t1

0x0ca1,	// (0x000881da) list_im_pane

0x0cb2,	// (0x000881eb) scroll_pane_cp07

0x354e,	// (0x0008aa87) im_writing_pane_t1_ParamLimits

0x354e,	// (0x0008aa87) im_writing_pane_t1

0x0ccb,	// (0x00088204) im_writing_pane_t2_ParamLimits

0x0ccb,	// (0x00088204) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00096813) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00096813) im_writing_pane_t

0x06c1,	// (0x00087bfa) input_focus_pane_cp04

0x06c1,	// (0x00087bfa) input_focus_pane_cp05

0x3563,	// (0x0008aa9c) list_im_single_pane_ParamLimits

0x3563,	// (0x0008aa9c) list_im_single_pane

0x357c,	// (0x0008aab5) list_single_im_pane_t1

0x5515,	// (0x0008ca4e) blid_accuracy_pane

0x551d,	// (0x0008ca56) blid_compass_pane

0x5527,	// (0x0008ca60) main_location_t1

0x5537,	// (0x0008ca70) main_location_t2

0x5547,	// (0x0008ca80) main_location_t3

0x0002,

0xf641,	// (0x00096b7a) main_location_t

0x06c1,	// (0x00087bfa) aid_levels_location

0x0a3c,	// (0x00087f75) blid_accuracy_pane_g1

0x0a3c,	// (0x00087f75) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00096875) blid_accuracy_pane_g

0x0d13,	// (0x0008824c) wml_content_pane

0x0d51,	// (0x0008828a) wml_button_pane_ParamLimits

0x0d51,	// (0x0008828a) wml_button_pane

0x358b,	// (0x0008aac4) wml_list_single_large_pane_ParamLimits

0x358b,	// (0x0008aac4) wml_list_single_large_pane

0x35a4,	// (0x0008aadd) wml_list_single_medium_pane_ParamLimits

0x35a4,	// (0x0008aadd) wml_list_single_medium_pane

0x35be,	// (0x0008aaf7) wml_list_single_small_pane_ParamLimits

0x35be,	// (0x0008aaf7) wml_list_single_small_pane

0x0d65,	// (0x0008829e) wml_selection_box_pane_ParamLimits

0x0d65,	// (0x0008829e) wml_selection_box_pane

0x0d78,	// (0x000882b1) wml_list_single_pane_t1

0x0d87,	// (0x000882c0) wml_list_single_medium_pane_t1

0x0d96,	// (0x000882cf) wml_list_single_large_pane_t1

0x0da5,	// (0x000882de) input_focus_pane_cp02_ParamLimits

0x0da5,	// (0x000882de) input_focus_pane_cp02

0x0db8,	// (0x000882f1) wml_selection_box_pane_g1

0x0dc1,	// (0x000882fa) wml_selection_box_pane_t1_ParamLimits

0x0dc1,	// (0x000882fa) wml_selection_box_pane_t1

0x091c,	// (0x00087e55) bg_wml_button_pane_ParamLimits

0x091c,	// (0x00087e55) bg_wml_button_pane

0x0dd9,	// (0x00088312) wml_button_pane_g1

0x0de1,	// (0x0008831a) wml_button_pane_t1

0x0dd9,	// (0x00088312) wml_button_bg_pane_g1

0x0df1,	// (0x0008832a) wml_button_bg_pane_g2

0x0df9,	// (0x00088332) wml_button_bg_pane_g3

0x0e01,	// (0x0008833a) wml_button_bg_pane_g4

0x0e09,	// (0x00088342) wml_button_bg_pane_g5

0x0e11,	// (0x0008834a) wml_button_bg_pane_g6

0x0e19,	// (0x00088352) wml_button_bg_pane_g7

0x0e21,	// (0x0008835a) wml_button_bg_pane_g8

0x0e29,	// (0x00088362) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00096818) wml_button_bg_pane_g

0x35dd,	// (0x0008ab16) bg_list_pane_cp02

0x0e31,	// (0x0008836a) mce_header_pane_ParamLimits

0x0e31,	// (0x0008836a) mce_header_pane

0x0e47,	// (0x00088380) mce_icon_pane

0x0e47,	// (0x00088380) mce_image_pane

0x0e50,	// (0x00088389) mce_text_pane_ParamLimits

0x0e50,	// (0x00088389) mce_text_pane

0x35e7,	// (0x0008ab20) scroll_pane_cp03

0x0d49,	// (0x00088282) scroll_pane_cp04

0x0e63,	// (0x0008839c) scroll_pane_cp05_ParamLimits

0x0e63,	// (0x0008839c) scroll_pane_cp05

0x35f1,	// (0x0008ab2a) mce_header_field_pane_ParamLimits

0x35f1,	// (0x0008ab2a) mce_header_field_pane

0x360a,	// (0x0008ab43) mce_header_field_pane_2_ParamLimits

0x360a,	// (0x0008ab43) mce_header_field_pane_2

0x3620,	// (0x0008ab59) mce_header_field_pane_3

0x3628,	// (0x0008ab61) list_single_mce_message_pane_ParamLimits

0x3628,	// (0x0008ab61) list_single_mce_message_pane

0x3644,	// (0x0008ab7d) list_single_mce_smart_pane_ParamLimits

0x3644,	// (0x0008ab7d) list_single_mce_smart_pane

0x0e6f,	// (0x000883a8) input_focus_pane_cp03

0x366b,	// (0x0008aba4) list_header_data_pane

0x3673,	// (0x0008abac) mce_header_field_pane_t1

0x3683,	// (0x0008abbc) list_single_mce_header_pane_ParamLimits

0x3683,	// (0x0008abbc) list_single_mce_header_pane

0x3697,	// (0x0008abd0) list_single_mce_header_pane_t1

0x36a6,	// (0x0008abdf) list_single_mce_message_pane_g1

0x36ae,	// (0x0008abe7) list_single_mce_message_pane_t1

0x36da,	// (0x0008ac13) bg_cale_heading_pane_cp01_ParamLimits

0x36da,	// (0x0008ac13) bg_cale_heading_pane_cp01

0x370d,	// (0x0008ac46) bg_cale_pane_cp02_ParamLimits

0x370d,	// (0x0008ac46) bg_cale_pane_cp02

0x3730,	// (0x0008ac69) cale_month_corner_pane

0x3746,	// (0x0008ac7f) cale_month_day_heading_pane_ParamLimits

0x3746,	// (0x0008ac7f) cale_month_day_heading_pane

0x3779,	// (0x0008acb2) cale_month_pane_g1_ParamLimits

0x3779,	// (0x0008acb2) cale_month_pane_g1

0x37a5,	// (0x0008acde) cale_month_pane_g2_ParamLimits

0x37a5,	// (0x0008acde) cale_month_pane_g2

0x37c6,	// (0x0008acff) cale_month_pane_g3_ParamLimits

0x37c6,	// (0x0008acff) cale_month_pane_g3

0x3802,	// (0x0008ad3b) cale_month_pane_g4_ParamLimits

0x3802,	// (0x0008ad3b) cale_month_pane_g4

0x383e,	// (0x0008ad77) cale_month_pane_g5_ParamLimits

0x383e,	// (0x0008ad77) cale_month_pane_g5

0x387a,	// (0x0008adb3) cale_month_pane_g6_ParamLimits

0x387a,	// (0x0008adb3) cale_month_pane_g6

0x38b6,	// (0x0008adef) cale_month_pane_g7_ParamLimits

0x38b6,	// (0x0008adef) cale_month_pane_g7

0x38f2,	// (0x0008ae2b) cale_month_pane_g8_ParamLimits

0x38f2,	// (0x0008ae2b) cale_month_pane_g8

0x392e,	// (0x0008ae67) cale_month_pane_g9_ParamLimits

0x392e,	// (0x0008ae67) cale_month_pane_g9

0x3964,	// (0x0008ae9d) cale_month_pane_g10_ParamLimits

0x3964,	// (0x0008ae9d) cale_month_pane_g10

0x398e,	// (0x0008aec7) cale_month_pane_g11_ParamLimits

0x398e,	// (0x0008aec7) cale_month_pane_g11

0x39b8,	// (0x0008aef1) cale_month_pane_g12_ParamLimits

0x39b8,	// (0x0008aef1) cale_month_pane_g12

0x39e6,	// (0x0008af1f) cale_month_pane_g13_ParamLimits

0x39e6,	// (0x0008af1f) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x0009682b) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x0009682b) cale_month_pane_g

0x3a26,	// (0x0008af5f) cale_month_week_pane

0x3a37,	// (0x0008af70) grid_cale_month_pane_ParamLimits

0x3a37,	// (0x0008af70) grid_cale_month_pane

0x3a65,	// (0x0008af9e) cale_month_day_heading_pane_t1

0x3ac3,	// (0x0008affc) cale_month_day_heading_pane_t2

0x3b28,	// (0x0008b061) cale_month_day_heading_pane_t3

0x3b8d,	// (0x0008b0c6) cale_month_day_heading_pane_t4

0x3bf2,	// (0x0008b12b) cale_month_day_heading_pane_t5

0x3c57,	// (0x0008b190) cale_month_day_heading_pane_t6

0x3cbc,	// (0x0008b1f5) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00096846) cale_month_day_heading_pane_t

0x0b39,	// (0x00088072) bg_cale_side_pane_cp01

0x3d21,	// (0x0008b25a) cale_month_week_pane_t1

0x3d38,	// (0x0008b271) cale_month_week_pane_t2

0x3d4f,	// (0x0008b288) cale_month_week_pane_t3

0x3d66,	// (0x0008b29f) cale_month_week_pane_t4

0x3d7d,	// (0x0008b2b6) cale_month_week_pane_t5

0x3d94,	// (0x0008b2cd) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00096855) cale_month_week_pane_t

0x3db3,	// (0x0008b2ec) cell_cale_month_pane_ParamLimits

0x3db3,	// (0x0008b2ec) cell_cale_month_pane

0xacf1,	// (0x0009222a) cell_cale_month_pane_g1

0x3e8b,	// (0x0008b3c4) cell_cale_month_pane_t1_ParamLimits

0x3e8b,	// (0x0008b3c4) cell_cale_month_pane_t1

0x0b47,	// (0x00088080) grid_highlight_pane_cp08

0x0a3c,	// (0x00087f75) main_smil_g1

0x3ea7,	// (0x0008b3e0) smil_status_pane

0x3eb2,	// (0x0008b3eb) smil_text_pane

0xc260,	// (0x00093799) bg_popup_call3_rect_pane_g8

0xc268,	// (0x000937a1) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00096b0e) bg_popup_call3_rect_pane_g

0xc4fd,	// (0x00093a36) smil_status_volume_pane_g1

0x3ec6,	// (0x0008b3ff) smil_status_pane_t1

0xc530,	// (0x00093a69) volume_smil_pane

0x3edd,	// (0x0008b416) list_smil_text_pane

0x3ee7,	// (0x0008b420) scroll_pane_cp011

0x3ef2,	// (0x0008b42b) smil_text_list_pane_t1_ParamLimits

0x3ef2,	// (0x0008b42b) smil_text_list_pane_t1

0xacfd,	// (0x00092236) aid_volume_smil_ParamLimits

0xacfd,	// (0x00092236) aid_volume_smil

0x0a3c,	// (0x00087f75) smil_volume_pane_g1

0x0a3c,	// (0x00087f75) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00096875) smil_volume_pane_g

0x09e7,	// (0x00087f20) listscroll_cale_day_pane

0x3f47,	// (0x0008b480) bg_cale_pane

0x3f5f,	// (0x0008b498) list_cale_pane

0x3f70,	// (0x0008b4a9) scroll_pane_cp09

0x3f81,	// (0x0008b4ba) cale_bg_pane_g1

0x3f89,	// (0x0008b4c2) cale_bg_pane_g2

0x3f91,	// (0x0008b4ca) cale_bg_pane_g3

0x3f99,	// (0x0008b4d2) cale_bg_pane_g4

0x3fa1,	// (0x0008b4da) cale_bg_pane_g5

0x3fa9,	// (0x0008b4e2) cale_bg_pane_g6

0x3fb1,	// (0x0008b4ea) cale_bg_pane_g7

0x3fb9,	// (0x0008b4f2) cale_bg_pane_g8

0x3fc1,	// (0x0008b4fa) cale_bg_pane_g9

0x0008,

0xf341,	// (0x0009687a) cale_bg_pane_g

0x3fc9,	// (0x0008b502) list_cale_time_pane_ParamLimits

0x3fc9,	// (0x0008b502) list_cale_time_pane

0x3fde,	// (0x0008b517) list_cale_time_pane_g1_ParamLimits

0x3fde,	// (0x0008b517) list_cale_time_pane_g1

0x3fea,	// (0x0008b523) list_cale_time_pane_g2_ParamLimits

0x3fea,	// (0x0008b523) list_cale_time_pane_g2

0x3ff7,	// (0x0008b530) list_cale_time_pane_g3_ParamLimits

0x3ff7,	// (0x0008b530) list_cale_time_pane_g3

0x4005,	// (0x0008b53e) list_cale_time_pane_g4_ParamLimits

0x4005,	// (0x0008b53e) list_cale_time_pane_g4

0x4013,	// (0x0008b54c) list_cale_time_pane_g5_ParamLimits

0x4013,	// (0x0008b54c) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0009688d) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0009688d) list_cale_time_pane_g

0x402e,	// (0x0008b567) list_cale_time_pane_t1_ParamLimits

0x402e,	// (0x0008b567) list_cale_time_pane_t1

0x4056,	// (0x0008b58f) list_cale_time_pane_t2_ParamLimits

0x4056,	// (0x0008b58f) list_cale_time_pane_t2

0x46bf,	// (0x0008bbf8) aid_blid_cardinal_pane

0x4701,	// (0x0008bc3a) compass_pane_t4

0x407e,	// (0x0008b5b7) list_cale_time_pane_t4_ParamLimits

0x407e,	// (0x0008b5b7) list_cale_time_pane_t4

0x470f,	// (0x0008bc48) compass_pane_t5

0x471f,	// (0x0008bc58) compass_pane_t6

0x472d,	// (0x0008bc66) compass_pane_t7

0xaf04,	// (0x0009243d) navi_pane_cc_t1

0xb06b,	// (0x000925a4) aid_phob_thumbnail_center_pane

0x4edb,	// (0x0008c414) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x0009689a) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x0009689a) list_cale_time_pane_t

0x0318,	// (0x00087851) bg_popup_window_pane_cp02_ParamLimits

0x0318,	// (0x00087851) bg_popup_window_pane_cp02

0x40a6,	// (0x0008b5df) heading_pane_cp01_ParamLimits

0x40a6,	// (0x0008b5df) heading_pane_cp01

0x40b2,	// (0x0008b5eb) loc_req_pane_ParamLimits

0x40b2,	// (0x0008b5eb) loc_req_pane

0x40c2,	// (0x0008b5fb) loc_type_pane_ParamLimits

0x40c2,	// (0x0008b5fb) loc_type_pane

0x40d4,	// (0x0008b60d) loc_type_pane_t1_ParamLimits

0x40d4,	// (0x0008b60d) loc_type_pane_t1

0x40e6,	// (0x0008b61f) loc_type_pane_t2_ParamLimits

0x40e6,	// (0x0008b61f) loc_type_pane_t2

0x40f8,	// (0x0008b631) loc_type_pane_t3_ParamLimits

0x40f8,	// (0x0008b631) loc_type_pane_t3

0x0002,

0xf368,	// (0x000968a1) loc_type_pane_t_ParamLimits

0xf368,	// (0x000968a1) loc_type_pane_t

0x410a,	// (0x0008b643) list_loc_req_pane

0x4114,	// (0x0008b64d) scroll_pane_cp012

0x411f,	// (0x0008b658) list_single_loc_request_popup_menu_pane_ParamLimits

0x411f,	// (0x0008b658) list_single_loc_request_popup_menu_pane

0x412c,	// (0x0008b665) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x412c,	// (0x0008b665) list_single_loc_request_popup_menu_pane_g1

0x4138,	// (0x0008b671) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x4138,	// (0x0008b671) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x000968a8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x000968a8) list_single_loc_request_popup_menu_pane_g

0x4144,	// (0x0008b67d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x4144,	// (0x0008b67d) list_single_loc_request_popup_menu_pane_t1

0x091c,	// (0x00087e55) bg_popup_window_pane_cp03_ParamLimits

0x091c,	// (0x00087e55) bg_popup_window_pane_cp03

0xad1f,	// (0x00092258) heading_loc_req_pane_ParamLimits

0xad1f,	// (0x00092258) heading_loc_req_pane

0x415a,	// (0x0008b693) popup_dyc_status_message_window_g1_ParamLimits

0x415a,	// (0x0008b693) popup_dyc_status_message_window_g1

0x416e,	// (0x0008b6a7) popup_dyc_status_message_window_t1_ParamLimits

0x416e,	// (0x0008b6a7) popup_dyc_status_message_window_t1

0x4183,	// (0x0008b6bc) popup_dyc_status_message_window_t2_ParamLimits

0x4183,	// (0x0008b6bc) popup_dyc_status_message_window_t2

0x4198,	// (0x0008b6d1) popup_dyc_status_message_window_t3_ParamLimits

0x4198,	// (0x0008b6d1) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x000968ad) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x000968ad) popup_dyc_status_message_window_t

0x06c1,	// (0x00087bfa) bg_heading_pane_cp01

0x41b4,	// (0x0008b6ed) heading_loc_req_pane_g1

0x41bc,	// (0x0008b6f5) heading_loc_req_pane_g2

0x41c4,	// (0x0008b6fd) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000968b4) heading_loc_req_pane_g

0x41cc,	// (0x0008b705) heading_loc_req_pane_t1

0x42c5,	// (0x0008b7fe) bg_popup_sub_pane_cp01_ParamLimits

0x42c5,	// (0x0008b7fe) bg_popup_sub_pane_cp01

0x42d3,	// (0x0008b80c) popup_cale_events_window_g1_ParamLimits

0x42d3,	// (0x0008b80c) popup_cale_events_window_g1

0x42f3,	// (0x0008b82c) popup_cale_events_window_g2_ParamLimits

0x42f3,	// (0x0008b82c) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000968e8) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000968e8) popup_cale_events_window_g

0x4313,	// (0x0008b84c) popup_cale_events_window_t1_ParamLimits

0x4313,	// (0x0008b84c) popup_cale_events_window_t1

0x4325,	// (0x0008b85e) popup_cale_events_window_t2_ParamLimits

0x4325,	// (0x0008b85e) popup_cale_events_window_t2

0x4363,	// (0x0008b89c) popup_cale_events_window_t3_ParamLimits

0x4363,	// (0x0008b89c) popup_cale_events_window_t3

0x439d,	// (0x0008b8d6) popup_cale_events_window_t4_ParamLimits

0x439d,	// (0x0008b8d6) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000968ed) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000968ed) popup_cale_events_window_t

0x43d3,	// (0x0008b90c) call_type_pane

0x43e3,	// (0x0008b91c) popup_call_status_window_g1

0x43f7,	// (0x0008b930) popup_call_status_window_g2

0x440b,	// (0x0008b944) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000968f6) popup_call_status_window_g

0x441b,	// (0x0008b954) call_type_pane_g1

0x4424,	// (0x0008b95d) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000968fd) call_type_pane_g

0x06c1,	// (0x00087bfa) bg_popup_sub_pane_cp02

0x442d,	// (0x0008b966) listscroll_popup_wml_pane

0x4435,	// (0x0008b96e) list_wml_pane

0x443f,	// (0x0008b978) scroll_pane_cp013

0x444a,	// (0x0008b983) list_single_graphic_popup_wml_pane_ParamLimits

0x444a,	// (0x0008b983) list_single_graphic_popup_wml_pane

0x0a3c,	// (0x00087f75) list_single_graphic_popup_wml_pane_g1

0x445e,	// (0x0008b997) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00096902) list_single_graphic_popup_wml_pane_g

0x4466,	// (0x0008b99f) list_single_graphic_popup_wml_pane_t1

0x447c,	// (0x0008b9b5) aid_call_pane

0x0914,	// (0x00087e4d) popup_clock_analogue_window_g1

0x0914,	// (0x00087e4d) popup_clock_analogue_window_g2

0xad2b,	// (0x00092264) popup_clock_analogue_window_g3

0xad2b,	// (0x00092264) popup_clock_analogue_window_g4

0x0a3c,	// (0x00087f75) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00096907) popup_clock_analogue_window_g

0xad33,	// (0x0009226c) popup_clock_analogue_window_t1

0xad41,	// (0x0009227a) clock_digital_number_pane_ParamLimits

0xad41,	// (0x0009227a) clock_digital_number_pane

0xad4d,	// (0x00092286) clock_digital_number_pane_cp02_ParamLimits

0xad4d,	// (0x00092286) clock_digital_number_pane_cp02

0xad59,	// (0x00092292) clock_digital_number_pane_cp03_ParamLimits

0xad59,	// (0x00092292) clock_digital_number_pane_cp03

0xad65,	// (0x0009229e) clock_digital_number_pane_cp04_ParamLimits

0xad65,	// (0x0009229e) clock_digital_number_pane_cp04

0xad71,	// (0x000922aa) clock_digital_separator_pane_ParamLimits

0xad71,	// (0x000922aa) clock_digital_separator_pane

0xad7d,	// (0x000922b6) popup_clock_digital_window_t1

0x0a3c,	// (0x00087f75) clock_digital_number_pane_g1

0x0a3c,	// (0x00087f75) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00096875) clock_digital_number_pane_g

0x0a3c,	// (0x00087f75) clock_digital_separator_pane_g1

0x0a3c,	// (0x00087f75) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00096875) clock_digital_separator_pane_g

0x06c1,	// (0x00087bfa) bg_popup_window_pane_cp04

0x4484,	// (0x0008b9bd) heading_pane_cp03

0x448c,	// (0x0008b9c5) listscroll_popup_gms_pane

0x4494,	// (0x0008b9cd) grid_large_graphic_popup_pane

0x449e,	// (0x0008b9d7) listscroll_popup_gms_pane_g1

0x44a6,	// (0x0008b9df) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00096912) listscroll_popup_gms_pane_g

0x0d49,	// (0x00088282) scroll_pane_cp014

0x44ae,	// (0x0008b9e7) cell_large_graphic_popup_pane_ParamLimits

0x44ae,	// (0x0008b9e7) cell_large_graphic_popup_pane

0x44c6,	// (0x0008b9ff) cell_large_graphic_popup_pane_g1_ParamLimits

0x44c6,	// (0x0008b9ff) cell_large_graphic_popup_pane_g1

0x44d2,	// (0x0008ba0b) cell_large_graphic_popup_pane_g2_ParamLimits

0x44d2,	// (0x0008ba0b) cell_large_graphic_popup_pane_g2

0xad9a,	// (0x000922d3) cell_large_graphic_popup_pane_g3_ParamLimits

0xad9a,	// (0x000922d3) cell_large_graphic_popup_pane_g3

0xada7,	// (0x000922e0) cell_large_graphic_popup_pane_g4_ParamLimits

0xada7,	// (0x000922e0) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00096917) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00096917) cell_large_graphic_popup_pane_g

0xadb7,	// (0x000922f0) grid_highlight_pane_cp010

0x0a3c,	// (0x00087f75) bg_popup_call_pane_g1

0xadc1,	// (0x000922fa) list_single_graphic_popup_conf_pane_ParamLimits

0xadc1,	// (0x000922fa) list_single_graphic_popup_conf_pane

0xadd3,	// (0x0009230c) list_highlight_pane_cp01

0xaddc,	// (0x00092315) list_single_graphic_popup_conf_pane_g1

0xade4,	// (0x0009231d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00096920) list_single_graphic_popup_conf_pane_g

0xadec,	// (0x00092325) list_single_graphic_popup_conf_pane_t1

0xadfa,	// (0x00092333) linegrid_cams_pane_g1

0x44de,	// (0x0008ba17) linegrid_cams_pane_g2

0x0b7a,	// (0x000880b3) linegrid_cams_pane_g3

0xae03,	// (0x0009233c) linegrid_cams_pane_g4

0x44e7,	// (0x0008ba20) linegrid_cams_pane_g5

0x44f0,	// (0x0008ba29) linegrid_cams_pane_g6

0x0b83,	// (0x000880bc) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00096925) linegrid_cams_pane_g

0xae0c,	// (0x00092345) popup_clock_analogue_window

0xae0c,	// (0x00092345) popup_clock_digital_window

0x06c1,	// (0x00087bfa) popup_phob_thumbnail_window

0x0a3c,	// (0x00087f75) call_video_uplink_pane_g1

0xae15,	// (0x0009234e) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00096934) call_video_uplink_pane_g

0xae1d,	// (0x00092356) video_uplink_pane

0xae25,	// (0x0009235e) mce_image_pane_g1

0x44fb,	// (0x0008ba34) mce_image_pane_g2

0x4505,	// (0x0008ba3e) mce_image_pane_g3

0x450f,	// (0x0008ba48) mce_image_pane_g4

0x4517,	// (0x0008ba50) mce_image_pane_g5

0x0004,

0xf400,	// (0x00096939) mce_image_pane_g

0xae2f,	// (0x00092368) control_top_pane_stacon_cp01_ParamLimits

0xae2f,	// (0x00092368) control_top_pane_stacon_cp01

0xae43,	// (0x0009237c) uni_indicator_pane_stacon_cp01_ParamLimits

0xae43,	// (0x0009237c) uni_indicator_pane_stacon_cp01

0xae54,	// (0x0009238d) bg_popup_sub_pane_cp03

0x451f,	// (0x0008ba58) chi_dic_find_pane

0x4527,	// (0x0008ba60) listscroll_chi_dic_pane

0x4530,	// (0x0008ba69) main_pane_chidic_g1

0x4543,	// (0x0008ba7c) chi_dic_find_pane_t1

0xae5e,	// (0x00092397) find_chidic_pane

0xae67,	// (0x000923a0) chi_dic_list_pane_ParamLimits

0xae67,	// (0x000923a0) chi_dic_list_pane

0xae78,	// (0x000923b1) scroll_pane_cp020

0x4551,	// (0x0008ba8a) find_chidic_pane_t1

0x06c1,	// (0x00087bfa) input_focus_pane_cp06

0x4560,	// (0x0008ba99) list_chi_dic_pane_ParamLimits

0x4560,	// (0x0008ba99) list_chi_dic_pane

0x4572,	// (0x0008baab) list_chi_dic_pane_t1_ParamLimits

0x4572,	// (0x0008baab) list_chi_dic_pane_t1

0x06c1,	// (0x00087bfa) list_highlight_pane_cp020

0xae80,	// (0x000923b9) bg_cale_heading_pane_g1

0x4585,	// (0x0008babe) bg_cale_heading_pane_g2

0x458d,	// (0x0008bac6) bg_cale_heading_pane_g3

0x4595,	// (0x0008bace) bg_cale_heading_pane_g4

0x459d,	// (0x0008bad6) bg_cale_heading_pane_g5

0x45a5,	// (0x0008bade) bg_cale_heading_pane_g6

0x45ad,	// (0x0008bae6) bg_cale_heading_pane_g7

0x45b5,	// (0x0008baee) bg_cale_heading_pane_g8

0x45bd,	// (0x0008baf6) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00096944) bg_cale_heading_pane_g

0xae80,	// (0x000923b9) bg_cale_side_pane_g1

0x45c5,	// (0x0008bafe) bg_cale_side_pane_g2

0x45cf,	// (0x0008bb08) bg_cale_side_pane_g3

0x45d9,	// (0x0008bb12) bg_cale_side_pane_g4

0x45e3,	// (0x0008bb1c) bg_cale_side_pane_g5

0x45ed,	// (0x0008bb26) bg_cale_side_pane_g6

0x45f7,	// (0x0008bb30) bg_cale_side_pane_g7

0x4601,	// (0x0008bb3a) bg_cale_side_pane_g8

0x4609,	// (0x0008bb42) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00096957) bg_cale_side_pane_g

0x4611,	// (0x0008bb4a) popup_call_status_window_ParamLimits

0x4611,	// (0x0008bb4a) popup_call_status_window

0xae88,	// (0x000923c1) stacon_top_pane

0xae90,	// (0x000923c9) status_pane_ParamLimits

0xae90,	// (0x000923c9) status_pane

0xaea5,	// (0x000923de) status_small_pane

0xaead,	// (0x000923e6) control_pane

0x06c1,	// (0x00087bfa) stacon_bottom_pane

0xaeb5,	// (0x000923ee) list_single_mce_smart_pane_t1_ParamLimits

0xaeb5,	// (0x000923ee) list_single_mce_smart_pane_t1

0xaec8,	// (0x00092401) list_single_mce_smart_pane_t2_ParamLimits

0xaec8,	// (0x00092401) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x0009696a) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x0009696a) list_single_mce_smart_pane_t

0x465e,	// (0x0008bb97) compass_pane

0x4669,	// (0x0008bba2) main_location2_pane_t1

0x467f,	// (0x0008bbb8) main_location2_pane_t2

0x4695,	// (0x0008bbce) main_location2_pane_t3

0x0003,

0xf436,	// (0x0009696f) main_location2_pane_t

0xaee7,	// (0x00092420) compass_pane_g1_ParamLimits

0xaee7,	// (0x00092420) compass_pane_g1

0x46e3,	// (0x0008bc1c) compass_pane_t1

0x46f2,	// (0x0008bc2b) compass_pane_t2

0x0005,

0xf43f,	// (0x00096978) compass_pane_t

0x473d,	// (0x0008bc76) text_secondary_cp61

0xaefb,	// (0x00092434) navi_pane_cams_g5

0xaf1e,	// (0x00092457) navi_pane_im_t1

0xaf2c,	// (0x00092465) navi_pane_mp_g1_ParamLimits

0xaf2c,	// (0x00092465) navi_pane_mp_g1

0xaf40,	// (0x00092479) navi_pane_mp_g2_ParamLimits

0xaf40,	// (0x00092479) navi_pane_mp_g2

0xaf4c,	// (0x00092485) navi_pane_mp_g3_ParamLimits

0xaf4c,	// (0x00092485) navi_pane_mp_g3

0x0002,

0xf453,	// (0x0009698c) navi_pane_mp_g_ParamLimits

0xf453,	// (0x0009698c) navi_pane_mp_g

0xaf58,	// (0x00092491) navi_pane_mp_t1

0xaf66,	// (0x0009249f) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00096993) navi_pane_mp_t

0xafa2,	// (0x000924db) navi_pane_vt_g1

0xaf58,	// (0x00092491) navi_pane_vt_t1

0xafaa,	// (0x000924e3) navi_slider_pane

0xafb2,	// (0x000924eb) zooming_pane

0xafba,	// (0x000924f3) navi_slider_pane_g1

0xafc3,	// (0x000924fc) navi_slider_pane_g2

0x0006,

0xf461,	// (0x0009699a) navi_slider_pane_g

0xaff0,	// (0x00092529) aid_levels_zoom

0xaff8,	// (0x00092531) zooming_pane_g1

0xb000,	// (0x00092539) zooming_pane_g2

0xb000,	// (0x00092539) zooming_pane_g3

0x0002,

0xf470,	// (0x000969a9) zooming_pane_g

0xb008,	// (0x00092541) level_10_zoom

0xb011,	// (0x0009254a) level_11_zoom

0xb01a,	// (0x00092553) level_1_zoom

0xb023,	// (0x0009255c) level_2_zoom

0xb02c,	// (0x00092565) level_3_zoom

0xb035,	// (0x0009256e) level_4_zoom

0xb03e,	// (0x00092577) level_5_zoom

0xb047,	// (0x00092580) level_6_zoom

0xb050,	// (0x00092589) level_7_zoom

0xb059,	// (0x00092592) level_8_zoom

0xb062,	// (0x0009259b) level_9_zoom

0xb073,	// (0x000925ac) popup_phob_thumbnail_window_g1

0xb07b,	// (0x000925b4) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x000969b0) popup_phob_thumbnail_window_g

0xc3c6,	// (0x000938ff) level_1_location

0xc3ce,	// (0x00093907) level_2_location

0xc3d6,	// (0x0009390f) level_3_location

0xc3de,	// (0x00093917) level_4_location

0xafb2,	// (0x000924eb) level_5_location

0x4868,	// (0x0008bda1) mce_icon_pane_g1

0x4870,	// (0x0008bda9) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x000969b5) mce_icon_pane_g

0x4878,	// (0x0008bdb1) main_mup_pane_g1_ParamLimits

0x4878,	// (0x0008bdb1) main_mup_pane_g1

0x488e,	// (0x0008bdc7) main_mup_pane_g2_ParamLimits

0x488e,	// (0x0008bdc7) main_mup_pane_g2

0x48a6,	// (0x0008bddf) main_mup_pane_g3_ParamLimits

0x48a6,	// (0x0008bddf) main_mup_pane_g3

0x48be,	// (0x0008bdf7) main_mup_pane_g4_ParamLimits

0x48be,	// (0x0008bdf7) main_mup_pane_g4

0x48d0,	// (0x0008be09) main_mup_pane_g5_ParamLimits

0x48d0,	// (0x0008be09) main_mup_pane_g5

0x48ec,	// (0x0008be25) main_mup_pane_g6_ParamLimits

0x48ec,	// (0x0008be25) main_mup_pane_g6

0x4906,	// (0x0008be3f) main_mup_pane_g7_ParamLimits

0x4906,	// (0x0008be3f) main_mup_pane_g7

0x4924,	// (0x0008be5d) main_mup_pane_g8_ParamLimits

0x4924,	// (0x0008be5d) main_mup_pane_g8

0x4942,	// (0x0008be7b) main_mup_pane_g9_ParamLimits

0x4942,	// (0x0008be7b) main_mup_pane_g9

0x495e,	// (0x0008be97) main_mup_pane_g10_ParamLimits

0x495e,	// (0x0008be97) main_mup_pane_g10

0x497c,	// (0x0008beb5) main_mup_pane_g11_ParamLimits

0x497c,	// (0x0008beb5) main_mup_pane_g11

0x4996,	// (0x0008becf) main_mup_pane_g12_ParamLimits

0x4996,	// (0x0008becf) main_mup_pane_g12

0x49ac,	// (0x0008bee5) main_mup_pane_g13_ParamLimits

0x49ac,	// (0x0008bee5) main_mup_pane_g13

0x000c,

0xf481,	// (0x000969ba) main_mup_pane_g_ParamLimits

0xf481,	// (0x000969ba) main_mup_pane_g

0x49c0,	// (0x0008bef9) main_mup_pane_t1_ParamLimits

0x49c0,	// (0x0008bef9) main_mup_pane_t1

0x49dc,	// (0x0008bf15) main_mup_pane_t2_ParamLimits

0x49dc,	// (0x0008bf15) main_mup_pane_t2

0x49f4,	// (0x0008bf2d) main_mup_pane_t3_ParamLimits

0x49f4,	// (0x0008bf2d) main_mup_pane_t3

0x4a0c,	// (0x0008bf45) main_mup_pane_t4_ParamLimits

0x4a0c,	// (0x0008bf45) main_mup_pane_t4

0x4a2a,	// (0x0008bf63) main_mup_pane_t5_ParamLimits

0x4a2a,	// (0x0008bf63) main_mup_pane_t5

0x4a3f,	// (0x0008bf78) main_mup_pane_t6_ParamLimits

0x4a3f,	// (0x0008bf78) main_mup_pane_t6

0x0005,

0xf49c,	// (0x000969d5) main_mup_pane_t_ParamLimits

0xf49c,	// (0x000969d5) main_mup_pane_t

0x4a51,	// (0x0008bf8a) mup_progress_pane_ParamLimits

0x4a51,	// (0x0008bf8a) mup_progress_pane

0x4a5d,	// (0x0008bf96) mup_visualizer_pane_ParamLimits

0x4a5d,	// (0x0008bf96) mup_visualizer_pane

0x4a91,	// (0x0008bfca) mup_volume_pane_ParamLimits

0x4a91,	// (0x0008bfca) mup_volume_pane

0xb083,	// (0x000925bc) mup_visualizer_pane_g1_ParamLimits

0xb083,	// (0x000925bc) mup_visualizer_pane_g1

0xb083,	// (0x000925bc) mup_visualizer_pane_g2_ParamLimits

0xb083,	// (0x000925bc) mup_visualizer_pane_g2

0xaee7,	// (0x00092420) mup_visualizer_pane_g3_ParamLimits

0xaee7,	// (0x00092420) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x000969e2) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x000969e2) mup_visualizer_pane_g

0x0a3c,	// (0x00087f75) mup_volume_pane_g1

0xb099,	// (0x000925d2) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x000969e9) mup_volume_pane_g

0x0a3c,	// (0x00087f75) mup_progress_pane_g1

0xb0a2,	// (0x000925db) mup_progress_pane_g2

0xb0ab,	// (0x000925e4) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x000969ee) mup_progress_pane_g

0x06c1,	// (0x00087bfa) bg_popup_window_pane_cp05

0xb0b4,	// (0x000925ed) heading_pane_cp02_ParamLimits

0xb0b4,	// (0x000925ed) heading_pane_cp02

0xb0d0,	// (0x00092609) list_popup_blid_pane

0xb0d8,	// (0x00092611) list_blid_sat_info_pane_ParamLimits

0xb0d8,	// (0x00092611) list_blid_sat_info_pane

0xb0eb,	// (0x00092624) list_blid_sat_info_pane_g1

0xb0f3,	// (0x0009262c) list_blid_sat_info_pane_t1

0x4bbb,	// (0x0008c0f4) mup_equalizer_pane_ParamLimits

0x4bbb,	// (0x0008c0f4) mup_equalizer_pane

0x4bdc,	// (0x0008c115) mup_equalizer_pane_cp1_ParamLimits

0x4bdc,	// (0x0008c115) mup_equalizer_pane_cp1

0x4bfd,	// (0x0008c136) mup_equalizer_pane_cp2_ParamLimits

0x4bfd,	// (0x0008c136) mup_equalizer_pane_cp2

0x4c22,	// (0x0008c15b) mup_equalizer_pane_cp3_ParamLimits

0x4c22,	// (0x0008c15b) mup_equalizer_pane_cp3

0x4c4b,	// (0x0008c184) mup_equalizer_pane_cp4_ParamLimits

0x4c4b,	// (0x0008c184) mup_equalizer_pane_cp4

0x4c74,	// (0x0008c1ad) mup_equalizer_pane_cp5

0x4c8c,	// (0x0008c1c5) mup_equalizer_pane_cp6

0x4ca4,	// (0x0008c1dd) mup_equalizer_pane_cp7

0xc2e0,	// (0x00093819) bg_popup_call_poc_act_pane_g9

0xc2e8,	// (0x00093821) bg_popup_call_poc_act_pane_g10

0xc2f0,	// (0x00093829) bg_popup_call_poc_act_pane_g11

0x000a,

0x091c,	// (0x00087e55) mup_scale_pane

0x0a3c,	// (0x00087f75) mup_scale_pane_g1

0xb101,	// (0x0009263a) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00096a0a) mup_scale_pane_g

0xb125,	// (0x0009265e) msg_data_pane

0xb12d,	// (0x00092666) scroll_pane_cp017

0x4cce,	// (0x0008c207) bg_list_pane_cp04_ParamLimits

0x4cce,	// (0x0008c207) bg_list_pane_cp04

0xb135,	// (0x0009266e) msg_data_pane_g1

0x4cf6,	// (0x0008c22f) msg_data_pane_g2

0x4d00,	// (0x0008c239) msg_data_pane_g3

0x4d0a,	// (0x0008c243) msg_data_pane_g4

0x4d12,	// (0x0008c24b) msg_data_pane_g5

0x4d1a,	// (0x0008c253) msg_data_pane_g6

0x4d22,	// (0x0008c25b) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00096a19) msg_data_pane_g

0x4d2a,	// (0x0008c263) msg_text_pane_ParamLimits

0x4d2a,	// (0x0008c263) msg_text_pane

0x4d56,	// (0x0008c28f) qrid_highlight_pane_cp011_ParamLimits

0x4d56,	// (0x0008c28f) qrid_highlight_pane_cp011

0x06c1,	// (0x00087bfa) msg_body_pane

0x06c1,	// (0x00087bfa) msg_header_pane

0xb146,	// (0x0009267f) input_focus_pane_cp07

0x4d7a,	// (0x0008c2b3) msg_header_pane_t1_ParamLimits

0x4d7a,	// (0x0008c2b3) msg_header_pane_t1

0x4d8e,	// (0x0008c2c7) msg_header_pane_t2_ParamLimits

0x4d8e,	// (0x0008c2c7) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00096a2d) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00096a2d) msg_header_pane_t

0xb15b,	// (0x00092694) msg_body_pane_g1

0x4da0,	// (0x0008c2d9) msg_body_pane_t1_ParamLimits

0x4da0,	// (0x0008c2d9) msg_body_pane_t1

0x4dd1,	// (0x0008c30a) msg_body_pane_t2_ParamLimits

0x4dd1,	// (0x0008c30a) msg_body_pane_t2

0x4de3,	// (0x0008c31c) msg_body_pane_t3_ParamLimits

0x4de3,	// (0x0008c31c) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00096a32) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00096a32) msg_body_pane_t

0x4e2f,	// (0x0008c368) main_viewer_pane_g1_ParamLimits

0x4e2f,	// (0x0008c368) main_viewer_pane_g1

0x4e3d,	// (0x0008c376) main_viewer_pane_g2_ParamLimits

0x4e3d,	// (0x0008c376) main_viewer_pane_g2

0x4e4b,	// (0x0008c384) main_viewer_pane_g3_ParamLimits

0x4e4b,	// (0x0008c384) main_viewer_pane_g3

0x4e5a,	// (0x0008c393) main_viewer_pane_g4_ParamLimits

0x4e5a,	// (0x0008c393) main_viewer_pane_g4

0xb17b,	// (0x000926b4) main_viewer_pane_g5_ParamLimits

0xb17b,	// (0x000926b4) main_viewer_pane_g5

0xb17b,	// (0x000926b4) main_viewer_pane_g7_ParamLimits

0xb17b,	// (0x000926b4) main_viewer_pane_g7

0xb18d,	// (0x000926c6) main_viewer_pane_g8_ParamLimits

0xb18d,	// (0x000926c6) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00096a42) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00096a42) main_viewer_pane_g

0xb1a5,	// (0x000926de) viewer_content_pane_ParamLimits

0xb1a5,	// (0x000926de) viewer_content_pane

0x4e98,	// (0x0008c3d1) main_postcard_pane_g1_ParamLimits

0x4e98,	// (0x0008c3d1) main_postcard_pane_g1

0x4eae,	// (0x0008c3e7) main_postcard_pane_g2_ParamLimits

0x4eae,	// (0x0008c3e7) main_postcard_pane_g2

0x4ec4,	// (0x0008c3fd) main_postcard_pane_g3_ParamLimits

0x4ec4,	// (0x0008c3fd) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00096a53) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00096a53) main_postcard_pane_g

0x4edb,	// (0x0008c414) main_postcard_pane_g4

0xc510,	// (0x00093a49) smil_status_volume_pane_g2

0x4f1e,	// (0x0008c457) postcard_pane_ParamLimits

0x4f1e,	// (0x0008c457) postcard_pane

0xb1b3,	// (0x000926ec) postcard_pane_g1_ParamLimits

0xb1b3,	// (0x000926ec) postcard_pane_g1

0x4f6e,	// (0x0008c4a7) postcard_pane_g2_ParamLimits

0x4f6e,	// (0x0008c4a7) postcard_pane_g2

0x4f7a,	// (0x0008c4b3) postcard_pane_g3_ParamLimits

0x4f7a,	// (0x0008c4b3) postcard_pane_g3

0xb1c1,	// (0x000926fa) postcard_pane_g4_ParamLimits

0xb1c1,	// (0x000926fa) postcard_pane_g4

0x4f86,	// (0x0008c4bf) postcard_pane_g5_ParamLimits

0x4f86,	// (0x0008c4bf) postcard_pane_g5

0x4f98,	// (0x0008c4d1) postcard_pane_g6_ParamLimits

0x4f98,	// (0x0008c4d1) postcard_pane_g6

0xb1b3,	// (0x000926ec) postcard_pane_g7_ParamLimits

0xb1b3,	// (0x000926ec) postcard_pane_g7

0x0006,

0xf527,	// (0x00096a60) postcard_pane_g_ParamLimits

0xf527,	// (0x00096a60) postcard_pane_g

0x4fb0,	// (0x0008c4e9) main_mp2_pane_g1_ParamLimits

0x4fb0,	// (0x0008c4e9) main_mp2_pane_g1

0x4fbe,	// (0x0008c4f7) main_mp2_pane_g2_ParamLimits

0x4fbe,	// (0x0008c4f7) main_mp2_pane_g2

0x4fca,	// (0x0008c503) main_mp2_pane_g3_ParamLimits

0x4fca,	// (0x0008c503) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00096a6f) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00096a6f) main_mp2_pane_g

0x4fd6,	// (0x0008c50f) main_mp2_pane_t1_ParamLimits

0x4fd6,	// (0x0008c50f) main_mp2_pane_t1

0x4fed,	// (0x0008c526) main_mp2_pane_t2_ParamLimits

0x4fed,	// (0x0008c526) main_mp2_pane_t2

0x5001,	// (0x0008c53a) main_mp2_pane_t3_ParamLimits

0x5001,	// (0x0008c53a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00096a76) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00096a76) main_mp2_pane_t

0xb1cf,	// (0x00092708) pec_content_pane_ParamLimits

0xb1cf,	// (0x00092708) pec_content_pane

0x0d49,	// (0x00088282) scroll_pane_cp015

0xb1e1,	// (0x0009271a) pec_attribute_pane_ParamLimits

0xb1e1,	// (0x0009271a) pec_attribute_pane

0x5013,	// (0x0008c54c) pec_content_pane_g1_ParamLimits

0x5013,	// (0x0008c54c) pec_content_pane_g1

0xb1f1,	// (0x0009272a) pec_content_pane_t1_ParamLimits

0xb1f1,	// (0x0009272a) pec_content_pane_t1

0xb203,	// (0x0009273c) pec_content_pane_t2_ParamLimits

0xb203,	// (0x0009273c) pec_content_pane_t2

0x0001,

0xf544,	// (0x00096a7d) pec_content_pane_t_ParamLimits

0xf544,	// (0x00096a7d) pec_content_pane_t

0x501f,	// (0x0008c558) list_single_graphic_pane_cp01_ParamLimits

0x501f,	// (0x0008c558) list_single_graphic_pane_cp01

0x091c,	// (0x00087e55) bg_popup_sub_pane_cp04

0xb215,	// (0x0009274e) popup_mup_playback_window_g1

0xb221,	// (0x0009275a) popup_mup_playback_window_t1

0xb236,	// (0x0009276f) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00096a82) popup_mup_playback_window_t

0xb26d,	// (0x000927a6) main_image_pane_g1_ParamLimits

0xb26d,	// (0x000927a6) main_image_pane_g1

0xb2b0,	// (0x000927e9) scroll_pane_cp018_ParamLimits

0xb2b0,	// (0x000927e9) scroll_pane_cp018

0xb2c8,	// (0x00092801) scroll_pane_cp016_ParamLimits

0xb2c8,	// (0x00092801) scroll_pane_cp016

0x50f1,	// (0x0008c62a) smil2_image_pane_ParamLimits

0x50f1,	// (0x0008c62a) smil2_image_pane

0x5127,	// (0x0008c660) smil2_root_pane_ParamLimits

0x5127,	// (0x0008c660) smil2_root_pane

0x515f,	// (0x0008c698) smil2_text_pane_ParamLimits

0x515f,	// (0x0008c698) smil2_text_pane

0x06c1,	// (0x00087bfa) bg_list_pane_cp06

0xb304,	// (0x0009283d) grid_radio_pane

0x06c1,	// (0x00087bfa) bg_popup_window_pane_cp06

0xb30e,	// (0x00092847) main_fmradio_pane_t1

0x4484,	// (0x0008b9bd) heading_pane_cp04

0xb31c,	// (0x00092855) main_fmradio_pane_t2

0xc2f8,	// (0x00093831) popup_cale_lunar_info_window_g1

0xb32a,	// (0x00092863) main_fmradio_pane_t3

0xc300,	// (0x00093839) popup_cale_lunar_info_window_g2

0xb33a,	// (0x00092873) main_fmradio_pane_t4

0x0001,

0xb348,	// (0x00092881) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00096b5d) popup_cale_lunar_info_window_g

0xf55e,	// (0x00096a97) main_fmradio_pane_t

0xb356,	// (0x0009288f) wait_bar_pane_cp03

0xb35e,	// (0x00092897) cell_fmradio_pane_ParamLimits

0xb35e,	// (0x00092897) cell_fmradio_pane

0xb1b3,	// (0x000926ec) cell_fmradio_pane_g1_ParamLimits

0xb1b3,	// (0x000926ec) cell_fmradio_pane_g1

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp011

0xb373,	// (0x000928ac) poc_content_pane_ParamLimits

0xb373,	// (0x000928ac) poc_content_pane

0xb385,	// (0x000928be) scroll_pane_cp019

0x51ef,	// (0x0008c728) popup_call_poc_act_window_ParamLimits

0x51ef,	// (0x0008c728) popup_call_poc_act_window

0x5213,	// (0x0008c74c) popup_call_poc_inact_window_ParamLimits

0x5213,	// (0x0008c74c) popup_call_poc_inact_window

0xf5fb,	// (0x00096b34) bg_popup_call_poc_act_pane_g

0xc270,	// (0x000937a9) bg_popup_call_poc_inact_pane_g1

0xc278,	// (0x000937b1) bg_popup_call_poc_inact_pane_g2

0xb38d,	// (0x000928c6) popup_call_poc_act_window_g2

0xc280,	// (0x000937b9) bg_popup_call_poc_inact_pane_g3

0xc288,	// (0x000937c1) bg_popup_call_poc_inact_pane_g4

0xc290,	// (0x000937c9) bg_popup_call_poc_inact_pane_g5

0xb395,	// (0x000928ce) popup_call_poc_act_window_t1_ParamLimits

0xb395,	// (0x000928ce) popup_call_poc_act_window_t1

0xb3bd,	// (0x000928f6) popup_call_poc_act_window_t2_ParamLimits

0xb3bd,	// (0x000928f6) popup_call_poc_act_window_t2

0xb3e5,	// (0x0009291e) popup_call_poc_act_window_t3_ParamLimits

0xb3e5,	// (0x0009291e) popup_call_poc_act_window_t3

0xb40d,	// (0x00092946) popup_call_poc_act_window_t4_ParamLimits

0xb40d,	// (0x00092946) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00096aa2) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00096aa2) popup_call_poc_act_window_t

0xc298,	// (0x000937d1) bg_popup_call_poc_inact_pane_g6

0xc2a0,	// (0x000937d9) bg_popup_call_poc_inact_pane_g7

0xc2a8,	// (0x000937e1) bg_popup_call_poc_inact_pane_g8

0xb41f,	// (0x00092958) popup_call_poc_inact_window_g2

0xc2b0,	// (0x000937e9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00096b21) bg_popup_call_poc_inact_pane_g

0xb427,	// (0x00092960) popup_call_poc_inact_window_t1_ParamLimits

0xb427,	// (0x00092960) popup_call_poc_inact_window_t1

0xb43c,	// (0x00092975) popup_call_poc_inact_window_t2_ParamLimits

0xb43c,	// (0x00092975) popup_call_poc_inact_window_t2

0xb451,	// (0x0009298a) popup_call_poc_inact_window_t3_ParamLimits

0xb451,	// (0x0009298a) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00096aab) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00096aab) popup_call_poc_inact_window_t

0xc470,	// (0x000939a9) context_pane_ParamLimits

0x5abe,	// (0x0008cff7) signal_pane_ParamLimits

0xafb2,	// (0x000924eb) main_call2_pane

0xc45e,	// (0x00093997) popup_phob_thumbnail2_window_ParamLimits

0xc45e,	// (0x00093997) popup_phob_thumbnail2_window

0xb163,	// (0x0009269c) aid_hotspot_pointer_arrow_pane

0xb16b,	// (0x000926a4) aid_hotspot_pointer_hand_pane

0x557e,	// (0x0008cab7) phob_pre_status_pane_g5

0x2e14,	// (0x0008a34d) cams_zoom_pane_ParamLimits

0x2e23,	// (0x0008a35c) image_vga_pane_ParamLimits

0x2e3d,	// (0x0008a376) main_camera_pane_g1_ParamLimits

0x2e4f,	// (0x0008a388) main_camera_pane_g2_ParamLimits

0x2e5f,	// (0x0008a398) main_camera_pane_g3_ParamLimits

0x2e73,	// (0x0008a3ac) main_camera_pane_g4_ParamLimits

0x2e87,	// (0x0008a3c0) main_camera_pane_g5_ParamLimits

0x2e9b,	// (0x0008a3d4) main_camera_pane_g6_ParamLimits

0x2eaf,	// (0x0008a3e8) main_camera_pane_g7_ParamLimits

0xf271,	// (0x000967aa) main_camera_pane_g_ParamLimits

0x2ec3,	// (0x0008a3fc) main_camera_pane_t1_ParamLimits

0x2ed9,	// (0x0008a412) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000967bb) main_camera_pane_t_ParamLimits

0x091c,	// (0x00087e55) bg_popup_preview_window_pane_cp01_ParamLimits

0x091c,	// (0x00087e55) bg_popup_preview_window_pane_cp01

0xb466,	// (0x0009299f) popup_phob_thumbnail2_window_g1_ParamLimits

0xb466,	// (0x0009299f) popup_phob_thumbnail2_window_g1

0x06c1,	// (0x00087bfa) call2_cli_visual_pane

0x5247,	// (0x0008c780) popup_call2_audio_conf_window_ParamLimits

0x5247,	// (0x0008c780) popup_call2_audio_conf_window

0x526f,	// (0x0008c7a8) popup_call2_audio_first_window_ParamLimits

0x526f,	// (0x0008c7a8) popup_call2_audio_first_window

0x5305,	// (0x0008c83e) popup_call2_audio_in_window_ParamLimits

0x5305,	// (0x0008c83e) popup_call2_audio_in_window

0x5351,	// (0x0008c88a) popup_call2_audio_out_window_ParamLimits

0x5351,	// (0x0008c88a) popup_call2_audio_out_window

0x53c3,	// (0x0008c8fc) popup_call2_audio_second_window_ParamLimits

0x53c3,	// (0x0008c8fc) popup_call2_audio_second_window

0x5429,	// (0x0008c962) popup_call2_audio_wait_window_ParamLimits

0x5429,	// (0x0008c962) popup_call2_audio_wait_window

0x06c1,	// (0x00087bfa) bg_popup_call2_act_pane_cp03

0x08fe,	// (0x00087e37) list_conf_pane_cp

0xb472,	// (0x000929ab) popup_call2_audio_conf_window_t1

0xb480,	// (0x000929b9) list_single_graphic_popup_conf2_pane_ParamLimits

0xb480,	// (0x000929b9) list_single_graphic_popup_conf2_pane

0xadd3,	// (0x0009230c) list_highlight_pane_cp04

0xb493,	// (0x000929cc) list_single_graphic_popup_conf2_pane_g1

0xade4,	// (0x0009231d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00096ab2) list_single_graphic_popup_conf2_pane_g

0xb49d,	// (0x000929d6) list_single_graphic_popup_conf2_pane_t1

0xb4ab,	// (0x000929e4) bg_popup_call2_act_pane_cp01_ParamLimits

0xb4ab,	// (0x000929e4) bg_popup_call2_act_pane_cp01

0xb535,	// (0x00092a6e) call_type_pane_cp05_ParamLimits

0xb535,	// (0x00092a6e) call_type_pane_cp05

0xb589,	// (0x00092ac2) popup_call2_audio_second_window_g1_ParamLimits

0xb589,	// (0x00092ac2) popup_call2_audio_second_window_g1

0xb5dd,	// (0x00092b16) popup_call2_audio_second_window_g2_ParamLimits

0xb5dd,	// (0x00092b16) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00096ab7) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00096ab7) popup_call2_audio_second_window_g

0xb642,	// (0x00092b7b) popup_call2_audio_second_window_t1_ParamLimits

0xb642,	// (0x00092b7b) popup_call2_audio_second_window_t1

0xb6fd,	// (0x00092c36) popup_call2_audio_second_window_t2_ParamLimits

0xb6fd,	// (0x00092c36) popup_call2_audio_second_window_t2

0xb750,	// (0x00092c89) popup_call2_audio_second_window_t3_ParamLimits

0xb750,	// (0x00092c89) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00096abe) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00096abe) popup_call2_audio_second_window_t

0x06c1,	// (0x00087bfa) bg_popup_call2_in_pane_cp02

0x06cb,	// (0x00087c04) call_type_pane_cp04

0x06d3,	// (0x00087c0c) popup_call2_audio_wait_window_g1

0x06db,	// (0x00087c14) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00096697) popup_call2_audio_wait_window_g

0x06e3,	// (0x00087c1c) popup_call2_audio_wait_window_t3

0xb843,	// (0x00092d7c) bg_popup_call2_act_pane_ParamLimits

0xb843,	// (0x00092d7c) bg_popup_call2_act_pane

0xb903,	// (0x00092e3c) call_type_pane_cp03_ParamLimits

0xb903,	// (0x00092e3c) call_type_pane_cp03

0xb967,	// (0x00092ea0) popup_call2_audio_first_window_g1_ParamLimits

0xb967,	// (0x00092ea0) popup_call2_audio_first_window_g1

0xb9d7,	// (0x00092f10) popup_call2_audio_first_window_g2_ParamLimits

0xb9d7,	// (0x00092f10) popup_call2_audio_first_window_g2

0xb083,	// (0x000925bc) popup_call2_audio_first_window_g3_ParamLimits

0xb083,	// (0x000925bc) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00096ac7) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00096ac7) popup_call2_audio_first_window_g

0xbab5,	// (0x00092fee) popup_call2_audio_first_window_t1_ParamLimits

0xbab5,	// (0x00092fee) popup_call2_audio_first_window_t1

0xbbb8,	// (0x000930f1) popup_call2_audio_first_window_t4_ParamLimits

0xbbb8,	// (0x000930f1) popup_call2_audio_first_window_t4

0xbc9b,	// (0x000931d4) popup_call2_audio_first_window_t5_ParamLimits

0xbc9b,	// (0x000931d4) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00096ad2) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00096ad2) popup_call2_audio_first_window_t

0x0914,	// (0x00087e4d) bg_popup_call2_act_pane_g1

0xc30a,	// (0x00093843) popup_cale_lunar_info_window_t1

0xc318,	// (0x00093851) popup_cale_lunar_info_window_t2

0xc326,	// (0x0009385f) popup_cale_lunar_info_window_t3

0x06c1,	// (0x00087bfa) bg_popup_call2_bubble_pane

0xbd9c,	// (0x000932d5) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd9c,	// (0x000932d5) bg_popup_call2_in_pane_cp01

0x039d,	// (0x000878d6) call_type_pane_cp02

0xbde4,	// (0x0009331d) popup_call2_audio_out_window_g1_ParamLimits

0xbde4,	// (0x0009331d) popup_call2_audio_out_window_g1

0xbe10,	// (0x00093349) popup_call2_audio_out_window_g2_ParamLimits

0xbe10,	// (0x00093349) popup_call2_audio_out_window_g2

0xbe38,	// (0x00093371) popup_call2_audio_out_window_g3_ParamLimits

0xbe38,	// (0x00093371) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00096adb) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00096adb) popup_call2_audio_out_window_g

0xbe73,	// (0x000933ac) popup_call2_audio_out_window_t1_ParamLimits

0xbe73,	// (0x000933ac) popup_call2_audio_out_window_t1

0xbed2,	// (0x0009340b) popup_call2_audio_out_window_t2_ParamLimits

0xbed2,	// (0x0009340b) popup_call2_audio_out_window_t2

0xbf26,	// (0x0009345f) popup_call2_audio_out_window_t3_ParamLimits

0xbf26,	// (0x0009345f) popup_call2_audio_out_window_t3

0xbf3c,	// (0x00093475) popup_call2_audio_out_window_t4_ParamLimits

0xbf3c,	// (0x00093475) popup_call2_audio_out_window_t4

0xbf52,	// (0x0009348b) popup_call2_audio_out_window_t5_ParamLimits

0xbf52,	// (0x0009348b) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00096ae4) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00096ae4) popup_call2_audio_out_window_t

0xbfb6,	// (0x000934ef) bg_popup_call2_in_pane_ParamLimits

0xbfb6,	// (0x000934ef) bg_popup_call2_in_pane

0xc012,	// (0x0009354b) popup_call2_audio_in_window_g1_ParamLimits

0xc012,	// (0x0009354b) popup_call2_audio_in_window_g1

0xc04a,	// (0x00093583) popup_call2_audio_in_window_g2_ParamLimits

0xc04a,	// (0x00093583) popup_call2_audio_in_window_g2

0xc082,	// (0x000935bb) popup_call2_audio_in_window_g3_ParamLimits

0xc082,	// (0x000935bb) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00096af1) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00096af1) popup_call2_audio_in_window_g

0xc0da,	// (0x00093613) popup_call2_audio_in_window_t1_ParamLimits

0xc0da,	// (0x00093613) popup_call2_audio_in_window_t1

0xc15a,	// (0x00093693) popup_call2_audio_in_window_t2_ParamLimits

0xc15a,	// (0x00093693) popup_call2_audio_in_window_t2

0xc1da,	// (0x00093713) popup_call2_audio_in_window_t3_ParamLimits

0xc1da,	// (0x00093713) popup_call2_audio_in_window_t3

0xc1f4,	// (0x0009372d) popup_call2_audio_in_window_t4_ParamLimits

0xc1f4,	// (0x0009372d) popup_call2_audio_in_window_t4

0xc206,	// (0x0009373f) popup_call2_audio_in_window_t5_ParamLimits

0xc206,	// (0x0009373f) popup_call2_audio_in_window_t5

0xc21b,	// (0x00093754) popup_call2_audio_in_window_t6_ParamLimits

0xc21b,	// (0x00093754) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00096afa) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00096afa) popup_call2_audio_in_window_t

0x0914,	// (0x00087e4d) bg_popup_call2_in_pane_g1

0xc334,	// (0x0009386d) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00096b62) popup_cale_lunar_info_window_t

0x091c,	// (0x00087e55) bg_popup_call2_rect_pane_ParamLimits

0x091c,	// (0x00087e55) bg_popup_call2_rect_pane

0x06c1,	// (0x00087bfa) call2_cli_visual_graphic_pane

0x06c1,	// (0x00087bfa) call2_cli_visual_text_pane

0xc523,	// (0x00093a5c) smil_status_volume_pane_g3

0x0002,

0x0a3c,	// (0x00087f75) call2_cli_visual_graphic_pane_g1

0x0a3c,	// (0x00087f75) call2_cli_visual_graphic_pane_g2

0x0a3c,	// (0x00087f75) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00096b07) call2_cli_visual_graphic_pane_g

0xc230,	// (0x00093769) bg_popup_call2_rect_pane_g1

0x0ada,	// (0x00088013) bg_popup_call2_rect_pane_g2

0xc238,	// (0x00093771) bg_popup_call2_rect_pane_g3

0xc240,	// (0x00093779) bg_popup_call2_rect_pane_g4

0xc248,	// (0x00093781) bg_popup_call2_rect_pane_g5

0xc250,	// (0x00093789) bg_popup_call2_rect_pane_g6

0xc258,	// (0x00093791) bg_popup_call2_rect_pane_g7

0xc260,	// (0x00093799) bg_popup_call2_rect_pane_g8

0xc268,	// (0x000937a1) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00096b0e) bg_popup_call2_rect_pane_g

0xc270,	// (0x000937a9) bg_popup_call2_bubble_pane_g1

0xc278,	// (0x000937b1) bg_popup_call2_bubble_pane_g2

0xc280,	// (0x000937b9) bg_popup_call2_bubble_pane_g3

0xc288,	// (0x000937c1) bg_popup_call2_bubble_pane_g4

0xc290,	// (0x000937c9) bg_popup_call2_bubble_pane_g5

0xc298,	// (0x000937d1) bg_popup_call2_bubble_pane_g6

0xc2a0,	// (0x000937d9) bg_popup_call2_bubble_pane_g7

0xc2a8,	// (0x000937e1) bg_popup_call2_bubble_pane_g8

0xc2b0,	// (0x000937e9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00096b21) bg_popup_call2_bubble_pane_g

0x2a1d,	// (0x00089f56) aid_cale_week_size_cell_pane

0x2ef3,	// (0x0008a42c) aid_cams_cif_uncrop_pane_ParamLimits

0x2ef3,	// (0x0008a42c) aid_cams_cif_uncrop_pane

0x30ac,	// (0x0008a5e5) aid_cams_size_cell_ParamLimits

0x30ac,	// (0x0008a5e5) aid_cams_size_cell

0x30c0,	// (0x0008a5f9) grid_cams_pane_ParamLimits

0x30da,	// (0x0008a613) linegrid_cams_pane_ParamLimits

0x32bb,	// (0x0008a7f4) call_video_pane_t1

0x32cd,	// (0x0008a806) call_video_pane_t2

0x0001,

0xf2d5,	// (0x0009680e) call_video_pane_t

0x36bc,	// (0x0008abf5) aid_cale_month_size_cell_pane_ParamLimits

0x36bc,	// (0x0008abf5) aid_cale_month_size_cell_pane

0xf672,	// (0x00096bab) smil_status_volume_pane_g

0xc530,	// (0x00093a69) volume_smil_pane_ParamLimits

0x025f,	// (0x00087798) aid_popup2_width_pane

0x298e,	// (0x00089ec7) cell_qdial_pane_g4_ParamLimits

0x298e,	// (0x00089ec7) cell_qdial_pane_g4

0x46bf,	// (0x0008bbf8) aid_blid_cardinal_pane_ParamLimits

0x46cf,	// (0x0008bc08) aid_blid_destination_pane_ParamLimits

0x46cf,	// (0x0008bc08) aid_blid_destination_pane

0x091c,	// (0x00087e55) bg_popup_call_poc_act_pane_ParamLimits

0x091c,	// (0x00087e55) bg_popup_call_poc_act_pane

0x091c,	// (0x00087e55) bg_popup_call_poc_inact_pane_ParamLimits

0x091c,	// (0x00087e55) bg_popup_call_poc_inact_pane

0xc2b8,	// (0x000937f1) bg_popup_call_poc_act_pane_g1

0xc2c0,	// (0x000937f9) bg_popup_call_poc_act_pane_g2

0xc2c8,	// (0x00093801) bg_popup_call_poc_act_pane_g3

0xc288,	// (0x000937c1) bg_popup_call_poc_act_pane_g4

0xc290,	// (0x000937c9) bg_popup_call_poc_act_pane_g5

0xc2d0,	// (0x00093809) bg_popup_call_poc_act_pane_g6

0xc2a0,	// (0x000937d9) bg_popup_call_poc_act_pane_g7

0xc2d8,	// (0x00093811) bg_popup_call_poc_act_pane_g8

0x06c1,	// (0x00087bfa) main_usb_pane

0xc435,	// (0x0009396e) popup_cale_lunar_info_window

0x350f,	// (0x0008aa48) im_reading_pane_t1_ParamLimits

0x0ca1,	// (0x000881da) list_im_pane_ParamLimits

0x0cb2,	// (0x000881eb) scroll_pane_cp07_ParamLimits

0x06c1,	// (0x00087bfa) grid_highlight_pane_cp012

0x091c,	// (0x00087e55) mup_scale_pane_ParamLimits

0xb1b3,	// (0x000926ec) main_usb_pane_g1_ParamLimits

0xb1b3,	// (0x000926ec) main_usb_pane_g1

0x548a,	// (0x0008c9c3) main_usb_pane_g2_ParamLimits

0x548a,	// (0x0008c9c3) main_usb_pane_g2

0x0001,

0xf612,	// (0x00096b4b) main_usb_pane_g_ParamLimits

0xf612,	// (0x00096b4b) main_usb_pane_g

0x54a0,	// (0x0008c9d9) main_usb_pane_t1_ParamLimits

0x54a0,	// (0x0008c9d9) main_usb_pane_t1

0x54b2,	// (0x0008c9eb) main_usb_pane_t2_ParamLimits

0x54b2,	// (0x0008c9eb) main_usb_pane_t2

0x54c4,	// (0x0008c9fd) main_usb_pane_t3_ParamLimits

0x54c4,	// (0x0008c9fd) main_usb_pane_t3

0x54d6,	// (0x0008ca0f) main_usb_pane_t4_ParamLimits

0x54d6,	// (0x0008ca0f) main_usb_pane_t4

0x54eb,	// (0x0008ca24) main_usb_pane_t5_ParamLimits

0x54eb,	// (0x0008ca24) main_usb_pane_t5

0x5500,	// (0x0008ca39) main_usb_pane_t6_ParamLimits

0x5500,	// (0x0008ca39) main_usb_pane_t6

0x0005,

0xf617,	// (0x00096b50) main_usb_pane_t_ParamLimits

0x465e,	// (0x0008bb97) aid_text_placing

0x4669,	// (0x0008bba2) main_location2_pane_t1_ParamLimits

0x467f,	// (0x0008bbb8) main_location2_pane_t2_ParamLimits

0x4695,	// (0x0008bbce) main_location2_pane_t3_ParamLimits

0x46ab,	// (0x0008bbe4) main_location2_pane_t4_ParamLimits

0x46ab,	// (0x0008bbe4) main_location2_pane_t4

0xf436,	// (0x0009696f) main_location2_pane_t_ParamLimits

0x0958,	// (0x00087e91) find_pinb_pane_g2_ParamLimits

0x0958,	// (0x00087e91) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000966bd) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000966bd) find_pinb_pane_g

0x0964,	// (0x00087e9d) find_pinb_pane_t1_ParamLimits

0x0976,	// (0x00087eaf) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000966c2) find_pinb_pane_t_ParamLimits

0x06c1,	// (0x00087bfa) main_call3_pane

0x3a65,	// (0x0008af9e) cale_month_day_heading_pane_t1_ParamLimits

0x3ac3,	// (0x0008affc) cale_month_day_heading_pane_t2_ParamLimits

0x3b28,	// (0x0008b061) cale_month_day_heading_pane_t3_ParamLimits

0x3b8d,	// (0x0008b0c6) cale_month_day_heading_pane_t4_ParamLimits

0x3bf2,	// (0x0008b12b) cale_month_day_heading_pane_t5_ParamLimits

0x3c57,	// (0x0008b190) cale_month_day_heading_pane_t6_ParamLimits

0x3cbc,	// (0x0008b1f5) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00096846) cale_month_day_heading_pane_t_ParamLimits

0x3ed4,	// (0x0008b40d) smil_status_volume_pane

0x4f42,	// (0x0008c47b) postcard_address_pane_ParamLimits

0x4f42,	// (0x0008c47b) postcard_address_pane

0x4f58,	// (0x0008c491) postcard_message_pane_ParamLimits

0x4f58,	// (0x0008c491) postcard_message_pane

0x5463,	// (0x0008c99c) call2_cli_visual_pane_t1_ParamLimits

0x5463,	// (0x0008c99c) call2_cli_visual_pane_t1

0x5ccf,	// (0x0008d208) postcard_message_pane_t1_ParamLimits

0x5ccf,	// (0x0008d208) postcard_message_pane_t1

0xc545,	// (0x00093a7e) postcard_address_pane_t1_ParamLimits

0xc545,	// (0x00093a7e) postcard_address_pane_t1

0x5cbb,	// (0x0008d1f4) popup_call3_audio_in_window_ParamLimits

0x5cbb,	// (0x0008d1f4) popup_call3_audio_in_window

0x5b40,	// (0x0008d079) bg_popup_call3_in_pane_ParamLimits

0x5b40,	// (0x0008d079) bg_popup_call3_in_pane

0x5bbc,	// (0x0008d0f5) popup_call3_audio_in_window_g1_ParamLimits

0x5bbc,	// (0x0008d0f5) popup_call3_audio_in_window_g1

0x5bdc,	// (0x0008d115) popup_call3_audio_in_window_g2_ParamLimits

0x5bdc,	// (0x0008d115) popup_call3_audio_in_window_g2

0x5bfc,	// (0x0008d135) popup_call3_audio_in_window_g3_ParamLimits

0x5bfc,	// (0x0008d135) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00096bb2) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00096bb2) popup_call3_audio_in_window_g

0x5c2d,	// (0x0008d166) popup_call3_audio_in_window_t1_ParamLimits

0x5c2d,	// (0x0008d166) popup_call3_audio_in_window_t1

0x5c6b,	// (0x0008d1a4) popup_call3_audio_in_window_t2_ParamLimits

0x5c6b,	// (0x0008d1a4) popup_call3_audio_in_window_t2

0x5ca9,	// (0x0008d1e2) popup_call3_audio_in_window_t3_ParamLimits

0x5ca9,	// (0x0008d1e2) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00096bbb) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00096bbb) popup_call3_audio_in_window_t

0xafb2,	// (0x000924eb) bg_popup_call3_rect_pane

0xc230,	// (0x00093769) bg_popup_call3_rect_pane_g1

0x0ada,	// (0x00088013) bg_popup_call3_rect_pane_g2

0xc238,	// (0x00093771) bg_popup_call3_rect_pane_g3

0xc240,	// (0x00093779) bg_popup_call3_rect_pane_g4

0xc248,	// (0x00093781) bg_popup_call3_rect_pane_g5

0xc250,	// (0x00093789) bg_popup_call3_rect_pane_g6

0xc258,	// (0x00093791) bg_popup_call3_rect_pane_g7

0x4aa7,	// (0x0008bfe0) mup_visualizer_osc_pane

0xb091,	// (0x000925ca) mup_visualizer_spec_pane

0x5b70,	// (0x0008d0a9) call3_video_qcif_pane_ParamLimits

0x5b70,	// (0x0008d0a9) call3_video_qcif_pane

0x5b83,	// (0x0008d0bc) call3_video_qcif_uncrop_pane_ParamLimits

0x5b83,	// (0x0008d0bc) call3_video_qcif_uncrop_pane

0x5b93,	// (0x0008d0cc) call3_video_subqcif_pane_ParamLimits

0x5b93,	// (0x0008d0cc) call3_video_subqcif_pane

0x5ba9,	// (0x0008d0e2) call3_video_subqcif_uncrop_pane_ParamLimits

0x5ba9,	// (0x0008d0e2) call3_video_subqcif_uncrop_pane

0x5c1c,	// (0x0008d155) popup_call3_audio_in_window_g4_ParamLimits

0x5c1c,	// (0x0008d155) popup_call3_audio_in_window_g4

0x5b2f,	// (0x0008d068) mup_spec_half_pane

0x5b38,	// (0x0008d071) mup_spec_half_pane_cp

0xc4e3,	// (0x00093a1c) mup_osc_middle_pane

0xc4ec,	// (0x00093a25) mup_visualizer_osc_pane_g1

0x5b0f,	// (0x0008d048) mup_spec_bar_pane_ParamLimits

0x5b0f,	// (0x0008d048) mup_spec_bar_pane

0xc4d0,	// (0x00093a09) mup_spec_bar_pane_g1

0xc4da,	// (0x00093a13) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00096ba6) mup_spec_bar_pane_g

0x2a1d,	// (0x00089f56) aid_cale_week_size_cell_pane_ParamLimits

0x2a30,	// (0x00089f69) bg_cale_heading_pane_ParamLimits

0x0b0e,	// (0x00088047) bg_cale_pane_cp01_ParamLimits

0x2a4c,	// (0x00089f85) cale_week_corner_pane_ParamLimits

0x2a62,	// (0x00089f9b) cale_week_day_heading_pane_ParamLimits

0x2a7e,	// (0x00089fb7) cale_week_scroll_pane_g1_ParamLimits

0x2a97,	// (0x00089fd0) cale_week_scroll_pane_g2_ParamLimits

0x2aa8,	// (0x00089fe1) cale_week_scroll_pane_g3_ParamLimits

0x2ab9,	// (0x00089ff2) cale_week_scroll_pane_g4_ParamLimits

0x2aca,	// (0x0008a003) cale_week_scroll_pane_g5_ParamLimits

0x2adb,	// (0x0008a014) cale_week_scroll_pane_g6_ParamLimits

0x2aec,	// (0x0008a025) cale_week_scroll_pane_g7_ParamLimits

0x2afd,	// (0x0008a036) cale_week_scroll_pane_g8_ParamLimits

0x2b0e,	// (0x0008a047) cale_week_scroll_pane_g9_ParamLimits

0x2b1f,	// (0x0008a058) cale_week_scroll_pane_g10_ParamLimits

0x2b30,	// (0x0008a069) cale_week_scroll_pane_g11_ParamLimits

0x2b41,	// (0x0008a07a) cale_week_scroll_pane_g12_ParamLimits

0x2b52,	// (0x0008a08b) cale_week_scroll_pane_g13_ParamLimits

0x2b6b,	// (0x0008a0a4) cale_week_scroll_pane_g14_ParamLimits

0x2b84,	// (0x0008a0bd) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0009674e) cale_week_scroll_pane_g_ParamLimits

0x2b9d,	// (0x0008a0d6) cale_week_time_pane_ParamLimits

0x2bae,	// (0x0008a0e7) grid_cale_week_pane_ParamLimits

0x0b27,	// (0x00088060) listscroll_cale_week_pane_t1

0x2bc9,	// (0x0008a102) scroll_pane_cp08_ParamLimits

0x3730,	// (0x0008ac69) cale_month_corner_pane_ParamLimits

0x3a14,	// (0x0008af4d) cale_month_pane_t1

0x3a26,	// (0x0008af5f) cale_month_week_pane_ParamLimits

0x43e3,	// (0x0008b91c) popup_call_status_window_g1_ParamLimits

0x43f7,	// (0x0008b930) popup_call_status_window_g2_ParamLimits

0x440b,	// (0x0008b944) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000968f6) popup_call_status_window_g_ParamLimits

0x4474,	// (0x0008b9ad) aid_call2_pane

0x4d6c,	// (0x0008c2a5) msg_header_pane_g1

0x4f42,	// (0x0008c47b) postcard_address2_pane_ParamLimits

0x4f42,	// (0x0008c47b) postcard_address2_pane

0x4f58,	// (0x0008c491) postcard_message2_pane_ParamLimits

0x4f58,	// (0x0008c491) postcard_message2_pane

0x5acc,	// (0x0008d005) message2_row_pane_ParamLimits

0x5acc,	// (0x0008d005) message2_row_pane

0xc48b,	// (0x000939c4) address2_row_pane_ParamLimits

0xc48b,	// (0x000939c4) address2_row_pane

0xc49e,	// (0x000939d7) postcard_message2_row_pane_g1

0xc4a6,	// (0x000939df) postcard_message2_row_pane_t1

0xc49e,	// (0x000939d7) address2_row_pane_g1

0xc4a6,	// (0x000939df) address2_row_pane_t1

0x2dd7,	// (0x0008a310) aid_size_cell_vorec

0x06c1,	// (0x00087bfa) main_rss_pane

0x5aef,	// (0x0008d028) rss_list_single_pane_ParamLimits

0x5aef,	// (0x0008d028) rss_list_single_pane

0xc4b4,	// (0x000939ed) rss_list_single_pane_t1

0xc4c2,	// (0x000939fb) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00096ba1) rss_list_single_pane_t

0x06c1,	// (0x00087bfa) main_camera2_pane

0x06c1,	// (0x00087bfa) main_video2_pane

0x5d3e,	// (0x0008d277) cams_zoom_pane_cp2_ParamLimits

0x5d3e,	// (0x0008d277) cams_zoom_pane_cp2

0x5d55,	// (0x0008d28e) image2_vga_pane_ParamLimits

0x5d55,	// (0x0008d28e) image2_vga_pane

0x5d9d,	// (0x0008d2d6) main_camera2_pane_g1_ParamLimits

0x5d9d,	// (0x0008d2d6) main_camera2_pane_g1

0x5dbd,	// (0x0008d2f6) main_camera2_pane_g2_ParamLimits

0x5dbd,	// (0x0008d2f6) main_camera2_pane_g2

0x5dd4,	// (0x0008d30d) main_camera2_pane_g3_ParamLimits

0x5dd4,	// (0x0008d30d) main_camera2_pane_g3

0x5deb,	// (0x0008d324) main_camera2_pane_g4_ParamLimits

0x5deb,	// (0x0008d324) main_camera2_pane_g4

0x5e02,	// (0x0008d33b) main_camera2_pane_g5_ParamLimits

0x5e02,	// (0x0008d33b) main_camera2_pane_g5

0x5e19,	// (0x0008d352) main_camera2_pane_g6_ParamLimits

0x5e19,	// (0x0008d352) main_camera2_pane_g6

0x5e30,	// (0x0008d369) main_camera2_pane_g7_ParamLimits

0x5e30,	// (0x0008d369) main_camera2_pane_g7

0x5e47,	// (0x0008d380) main_camera2_pane_g8_ParamLimits

0x5e47,	// (0x0008d380) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00096bc2) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00096bc2) main_camera2_pane_g

0x5e75,	// (0x0008d3ae) main_camera2_pane_t1_ParamLimits

0x5e75,	// (0x0008d3ae) main_camera2_pane_t1

0x5eaa,	// (0x0008d3e3) main_camera2_pane_t2_ParamLimits

0x5eaa,	// (0x0008d3e3) main_camera2_pane_t2

0x5ec7,	// (0x0008d400) main_camera2_pane_t3_ParamLimits

0x5ec7,	// (0x0008d400) main_camera2_pane_t3

0x5f25,	// (0x0008d45e) main_camera2_pane_t4_ParamLimits

0x5f25,	// (0x0008d45e) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00096bd5) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00096bd5) main_camera2_pane_t

0x5fae,	// (0x0008d4e7) cams_zoom_pane_cp4_ParamLimits

0x5fae,	// (0x0008d4e7) cams_zoom_pane_cp4

0x5fc4,	// (0x0008d4fd) image2_cif_pane_ParamLimits

0x5fc4,	// (0x0008d4fd) image2_cif_pane

0x5fef,	// (0x0008d528) image2_subqcif_pane_ParamLimits

0x5fef,	// (0x0008d528) image2_subqcif_pane

0x600a,	// (0x0008d543) main_video2_pane_g1_ParamLimits

0x600a,	// (0x0008d543) main_video2_pane_g1

0x6024,	// (0x0008d55d) main_video2_pane_g2_ParamLimits

0x6024,	// (0x0008d55d) main_video2_pane_g2

0x603a,	// (0x0008d573) main_video2_pane_g3_ParamLimits

0x603a,	// (0x0008d573) main_video2_pane_g3

0x6050,	// (0x0008d589) main_video2_pane_g4_ParamLimits

0x6050,	// (0x0008d589) main_video2_pane_g4

0x6066,	// (0x0008d59f) main_video2_pane_g5_ParamLimits

0x6066,	// (0x0008d59f) main_video2_pane_g5

0x607c,	// (0x0008d5b5) main_video2_pane_g6_ParamLimits

0x607c,	// (0x0008d5b5) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00096be4) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00096be4) main_video2_pane_g

0x6096,	// (0x0008d5cf) main_video2_pane_t1_ParamLimits

0x6096,	// (0x0008d5cf) main_video2_pane_t1

0x60ba,	// (0x0008d5f3) main_video2_pane_t2_ParamLimits

0x60ba,	// (0x0008d5f3) main_video2_pane_t2

0x610a,	// (0x0008d643) main_video2_pane_t3_ParamLimits

0x610a,	// (0x0008d643) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00096bf1) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00096bf1) main_video2_pane_t

0x55be,	// (0x0008caf7) call_muted_g2

0x0001,

0xf65a,	// (0x00096b93) call_muted_g

0x06c1,	// (0x00087bfa) main_mup2_pane

0x6152,	// (0x0008d68b) main_mup2_pane_g1_ParamLimits

0x6152,	// (0x0008d68b) main_mup2_pane_g1

0x615e,	// (0x0008d697) main_mup2_pane_g2_ParamLimits

0x615e,	// (0x0008d697) main_mup2_pane_g2

0xeaf4,	// (0x0009602d) main_mup_pane_g13_cp1

0xeafc,	// (0x00096035) mup_volume_pane_cp1

0x617c,	// (0x0008d6b5) main_mup2_pane_g4_ParamLimits

0x617c,	// (0x0008d6b5) main_mup2_pane_g4

0x618e,	// (0x0008d6c7) main_mup2_pane_g5_ParamLimits

0x618e,	// (0x0008d6c7) main_mup2_pane_g5

0x61a0,	// (0x0008d6d9) main_mup2_pane_g6_ParamLimits

0x61a0,	// (0x0008d6d9) main_mup2_pane_g6

0x61b2,	// (0x0008d6eb) main_mup2_pane_g7_ParamLimits

0x61b2,	// (0x0008d6eb) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00096bf8) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00096bf8) main_mup2_pane_g

0x61ca,	// (0x0008d703) main_mup2_pane_t1_ParamLimits

0x61ca,	// (0x0008d703) main_mup2_pane_t1

0x61e0,	// (0x0008d719) main_mup2_pane_t2_ParamLimits

0x61e0,	// (0x0008d719) main_mup2_pane_t2

0x61f6,	// (0x0008d72f) main_mup2_pane_t3_ParamLimits

0x61f6,	// (0x0008d72f) main_mup2_pane_t3

0x620c,	// (0x0008d745) main_mup2_pane_t4_ParamLimits

0x620c,	// (0x0008d745) main_mup2_pane_t4

0x6224,	// (0x0008d75d) main_mup2_pane_t5_ParamLimits

0x6224,	// (0x0008d75d) main_mup2_pane_t5

0x623c,	// (0x0008d775) main_mup2_pane_t6_ParamLimits

0x623c,	// (0x0008d775) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00096c07) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00096c07) main_mup2_pane_t

0x626c,	// (0x0008d7a5) mup2_visualizer_pane_ParamLimits

0x626c,	// (0x0008d7a5) mup2_visualizer_pane

0x629a,	// (0x0008d7d3) mup_progress_pane_cp_ParamLimits

0x629a,	// (0x0008d7d3) mup_progress_pane_cp

0xead6,	// (0x0009600f) mup_volume_pane_cp_ParamLimits

0xead6,	// (0x0009600f) mup_volume_pane_cp

0x62b0,	// (0x0008d7e9) mup2_visualizer_pane_g1_ParamLimits

0x62b0,	// (0x0008d7e9) mup2_visualizer_pane_g1

0xc587,	// (0x00093ac0) mup2_visualizer_pane_g2_ParamLimits

0xc587,	// (0x00093ac0) mup2_visualizer_pane_g2

0x62c5,	// (0x0008d7fe) mup2_visualizer_pane_g3_ParamLimits

0x62c5,	// (0x0008d7fe) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00096c14) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00096c14) mup2_visualizer_pane_g

0xb2fc,	// (0x00092835) aid_size_cell_fmradio

0x576e,	// (0x0008cca7) aid_height_parent_landcape

0x0d30,	// (0x00088269) wml_content_pane_cp

0x0d38,	// (0x00088271) wml_tabs_pane

0x0d41,	// (0x0008827a) popup_wml_miniature_window

0x0d49,	// (0x00088282) scroll_pane_cp021

0x0d5d,	// (0x00088296) wml_content_pane_comp8

0x06c1,	// (0x00087bfa) bg_popup_sub_pane_cp05

0xc5a5,	// (0x00093ade) popup_wml_miniature_window_g1

0xc5ad,	// (0x00093ae6) wml_miniature_view_pane

0x62d1,	// (0x0008d80a) aid_size_wml_view

0x62d9,	// (0x0008d812) wml_miniature_view_pane_g1

0x62e2,	// (0x0008d81b) wml_miniature_view_pane_g2

0x62eb,	// (0x0008d824) wml_miniature_view_pane_g3

0x62f3,	// (0x0008d82c) wml_miniature_view_pane_g4

0x62fb,	// (0x0008d834) wml_miniature_view_pane_g5

0x6303,	// (0x0008d83c) wml_miniature_view_pane_g6

0x630b,	// (0x0008d844) wml_miniature_view_pane_g7

0x6313,	// (0x0008d84c) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00096c1b) wml_miniature_view_pane_g

0xc5b5,	// (0x00093aee) background_graphic_ParamLimits

0xc5b5,	// (0x00093aee) background_graphic

0xc5c1,	// (0x00093afa) wml_tabs_2_pane

0xc5ca,	// (0x00093b03) wml_tabs_3_pane_ParamLimits

0xc5ca,	// (0x00093b03) wml_tabs_3_pane

0xc5dc,	// (0x00093b15) wml_tabs_4_pane_ParamLimits

0xc5dc,	// (0x00093b15) wml_tabs_4_pane

0xc5f2,	// (0x00093b2b) wml_tabs_5_pane_ParamLimits

0xc5f2,	// (0x00093b2b) wml_tabs_5_pane

0xc60c,	// (0x00093b45) wml_tabs_pane_g2_ParamLimits

0xc60c,	// (0x00093b45) wml_tabs_pane_g2

0xc620,	// (0x00093b59) wml_tabs_pane_g3_ParamLimits

0xc620,	// (0x00093b59) wml_tabs_pane_g3

0x631b,	// (0x0008d854) wml_tabs_2_active_pane_ParamLimits

0x631b,	// (0x0008d854) wml_tabs_2_active_pane

0x632f,	// (0x0008d868) wml_tabs_2_passive_pane_ParamLimits

0x632f,	// (0x0008d868) wml_tabs_2_passive_pane

0x6343,	// (0x0008d87c) wml_tabs_3_active_pane_cp_ParamLimits

0x6343,	// (0x0008d87c) wml_tabs_3_active_pane_cp

0x6358,	// (0x0008d891) wml_tabs_3_passive_pane_ParamLimits

0x6358,	// (0x0008d891) wml_tabs_3_passive_pane

0x636b,	// (0x0008d8a4) wml_tabs_3_passive_pane_cp_ParamLimits

0x636b,	// (0x0008d8a4) wml_tabs_3_passive_pane_cp

0x6382,	// (0x0008d8bb) tabs_4_active_pane

0x638a,	// (0x0008d8c3) tabs_4_passive_pane

0x6394,	// (0x0008d8cd) tabs_4_passive_pane_cp

0x639c,	// (0x0008d8d5) tabs_4_passive_pane_cp2

0x5482,	// (0x0008c9bb) aid_height_text

0x4a79,	// (0x0008bfb2) mup_volume_cont_pane_ParamLimits

0x4a79,	// (0x0008bfb2) mup_volume_cont_pane

0x262a,	// (0x00089b63) aid_size_cell_pinb

0x2634,	// (0x00089b6d) aid_size_list_pinb

0x6286,	// (0x0008d7bf) mup2_volume_cont_pane_ParamLimits

0x6286,	// (0x0008d7bf) mup2_volume_cont_pane

0xeac2,	// (0x00095ffb) mup2_volume_cont_pane_g1_ParamLimits

0xeac2,	// (0x00095ffb) mup2_volume_cont_pane_g1

0x22f2,	// (0x0008982b) aid_size_cell_touch_ParamLimits

0x22f2,	// (0x0008982b) aid_size_cell_touch

0x2519,	// (0x00089a52) touch_pane_ParamLimits

0x2519,	// (0x00089a52) touch_pane

0x024d,	// (0x00087786) main_rss2_pane

0xeb04,	// (0x0009603d) listscroll_rss2_pane

0xeb0d,	// (0x00096046) rss2_navigation_pane

0xeb15,	// (0x0009604e) list_rss2_pane

0xae78,	// (0x000923b1) scroll_pane_cp22

0xeb1d,	// (0x00096056) rss2_navigation_pane_g1

0xeb26,	// (0x0009605f) rss2_navigation_pane_g2

0xeb2e,	// (0x00096067) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00096c2c) rss2_navigation_pane_g

0xeb36,	// (0x0009606f) rss2_navigation_pane_t1

0x63a6,	// (0x0008d8df) rss2_list_single_pane_ParamLimits

0x63a6,	// (0x0008d8df) rss2_list_single_pane

0xeb44,	// (0x0009607d) rss2_list_single_pane_t2

0xeb52,	// (0x0009608b) rss2_list_single_pane_t3_ParamLimits

0xeb52,	// (0x0009608b) rss2_list_single_pane_t3

0xeb6f,	// (0x000960a8) rss2_list_single_pane_t4

0x3ebc,	// (0x0008b3f5) smil_status_pane_g1

0xabd7,	// (0x00092110) main_image2_pane_ParamLimits

0xabd7,	// (0x00092110) main_image2_pane

0x5e5e,	// (0x0008d397) main_camera2_pane_g9_ParamLimits

0x5e5e,	// (0x0008d397) main_camera2_pane_g9

0x5f7a,	// (0x0008d4b3) main_camera2_pane_t5_ParamLimits

0x5f7a,	// (0x0008d4b3) main_camera2_pane_t5

0xc55c,	// (0x00093a95) main_camera2_pane_t6_ParamLimits

0xc55c,	// (0x00093a95) main_camera2_pane_t6

0x63c0,	// (0x0008d8f9) main_image2_pane_g1_ParamLimits

0x63c0,	// (0x0008d8f9) main_image2_pane_g1

0x5199,	// (0x0008c6d2) smil2_video_pane_ParamLimits

0x5199,	// (0x0008c6d2) smil2_video_pane

0x2332,	// (0x0008986b) aid_zoom_text_primary_cp

0x02a4,	// (0x000877dd) popup_preview_fixed_window

0x0c99,	// (0x000881d2) im_reading_pane_g1

0x5d30,	// (0x0008d269) cams2_bc_adjust_pane_cp_ParamLimits

0x5d30,	// (0x0008d269) cams2_bc_adjust_pane_cp

0x5fa0,	// (0x0008d4d9) cams2_bc_adjust_pane_ParamLimits

0x5fa0,	// (0x0008d4d9) cams2_bc_adjust_pane

0x13c5,	// (0x000888fe) cams2_bc_adjust_pane_g1

0xeb7d,	// (0x000960b6) cams2_slider_pane

0xeb86,	// (0x000960bf) cams2_slider_pane_g1

0xeb8f,	// (0x000960c8) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00096c33) cams2_slider_pane_g

0x2724,	// (0x00089c5d) calc_display_pane_ParamLimits

0x274a,	// (0x00089c83) calc_paper_pane_ParamLimits

0x276d,	// (0x00089ca6) grid_calc_pane_ParamLimits

0xad7d,	// (0x000922b6) popup_clock_digital_window_t1_ParamLimits

0xb299,	// (0x000927d2) main_image_pane_t1

0x2706,	// (0x00089c3f) aid_size_cell_calc_ParamLimits

0x2706,	// (0x00089c3f) aid_size_cell_calc

0x57b4,	// (0x0008cced) popup_blid_sat_info2_window_ParamLimits

0x57b4,	// (0x0008cced) popup_blid_sat_info2_window

0xebb1,	// (0x000960ea) aid_size_cell_blid

0xebb9,	// (0x000960f2) bg_popup_window_pane_cp07

0xebdc,	// (0x00096115) grid_popup_blid_pane

0xebe6,	// (0x0009611f) heading_pane_cp05_ParamLimits

0xebe6,	// (0x0009611f) heading_pane_cp05

0xecb0,	// (0x000961e9) cell_popup_blid_pane_ParamLimits

0xecb0,	// (0x000961e9) cell_popup_blid_pane

0xecda,	// (0x00096213) cell_popup_blid_pane_g1

0xece2,	// (0x0009621b) cell_popup_blid_pane_t1

0x6256,	// (0x0008d78f) mup2_indicator_pane_ParamLimits

0x6256,	// (0x0008d78f) mup2_indicator_pane

0xafb2,	// (0x000924eb) mup2_visualizer_osc_pane

0xc593,	// (0x00093acc) mup2_visualizer_spec_pane_ParamLimits

0xc593,	// (0x00093acc) mup2_visualizer_spec_pane

0x63d6,	// (0x0008d90f) mup2_spec_half_pane

0x63df,	// (0x0008d918) mup2_spec_half_pane_cp

0x63e7,	// (0x0008d920) mup2_spec_bar_pane_ParamLimits

0x63e7,	// (0x0008d920) mup2_spec_bar_pane

0xc4d0,	// (0x00093a09) mup2_spec_bar_pane_g1

0xc4da,	// (0x00093a13) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00096ba6) mup2_spec_bar_pane_g

0x6407,	// (0x0008d940) mup2_osc_middle_pane

0xc4ec,	// (0x00093a25) mup2_visualizer_osc_pane_g1

0x02ce,	// (0x00087807) popup_number_entry_window_t1_ParamLimits

0x02e1,	// (0x0008781a) popup_number_entry_window_t2_ParamLimits

0x02f3,	// (0x0008782c) popup_number_entry_window_t3_ParamLimits

0x256b,	// (0x00089aa4) popup_number_entry_window_t5_ParamLimits

0x256b,	// (0x00089aa4) popup_number_entry_window_t5

0xf12f,	// (0x00096668) popup_number_entry_window_t_ParamLimits

0x0305,	// (0x0008783e) text_title_cp2_ParamLimits

0xb173,	// (0x000926ac) aid_hotspot_pointer_text2_pane

0xb199,	// (0x000926d2) main_viewer_pane_g9_ParamLimits

0xb199,	// (0x000926d2) main_viewer_pane_g9

0x3a14,	// (0x0008af4d) cale_month_pane_t1_ParamLimits

0x3f47,	// (0x0008b480) bg_cale_pane_ParamLimits

0x3f5f,	// (0x0008b498) list_cale_pane_ParamLimits

0x0b27,	// (0x00088060) listscroll_cale_day_pane_t1

0x3f70,	// (0x0008b4a9) scroll_pane_cp09_ParamLimits

0x4aaf,	// (0x0008bfe8) main_mup_eq_pane_t1_ParamLimits

0x4aaf,	// (0x0008bfe8) main_mup_eq_pane_t1

0x4acb,	// (0x0008c004) main_mup_eq_pane_t2_ParamLimits

0x4acb,	// (0x0008c004) main_mup_eq_pane_t2

0x4ae7,	// (0x0008c020) main_mup_eq_pane_t3_ParamLimits

0x4ae7,	// (0x0008c020) main_mup_eq_pane_t3

0x4b05,	// (0x0008c03e) main_mup_eq_pane_t4_ParamLimits

0x4b05,	// (0x0008c03e) main_mup_eq_pane_t4

0x4b23,	// (0x0008c05c) main_mup_eq_pane_t5_ParamLimits

0x4b23,	// (0x0008c05c) main_mup_eq_pane_t5

0x4b41,	// (0x0008c07a) main_mup_eq_pane_t6_ParamLimits

0x4b41,	// (0x0008c07a) main_mup_eq_pane_t6

0x4b57,	// (0x0008c090) main_mup_eq_pane_t7_ParamLimits

0x4b57,	// (0x0008c090) main_mup_eq_pane_t7

0x4b6d,	// (0x0008c0a6) main_mup_eq_pane_t8_ParamLimits

0x4b6d,	// (0x0008c0a6) main_mup_eq_pane_t8

0x4b83,	// (0x0008c0bc) main_mup_eq_pane_t9_ParamLimits

0x4b83,	// (0x0008c0bc) main_mup_eq_pane_t9

0x4b9f,	// (0x0008c0d8) main_mup_eq_pane_t10_ParamLimits

0x4b9f,	// (0x0008c0d8) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x000969f5) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x000969f5) main_mup_eq_pane_t

0x4c74,	// (0x0008c1ad) mup_equalizer_pane_cp5_ParamLimits

0x4c8c,	// (0x0008c1c5) mup_equalizer_pane_cp6_ParamLimits

0x4ca4,	// (0x0008c1dd) mup_equalizer_pane_cp7_ParamLimits

0x024d,	// (0x00087786) main_gallery_pane

0xc4f5,	// (0x00093a2e) smil2_volume_pane

0xc4fd,	// (0x00093a36) smil_status_volume_pane_g1_ParamLimits

0xc510,	// (0x00093a49) smil_status_volume_pane_g2_ParamLimits

0xc523,	// (0x00093a5c) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00096bab) smil_status_volume_pane_g_ParamLimits

0xebb9,	// (0x000960f2) bg_popup_window_pane_cp07_ParamLimits

0xebc7,	// (0x00096100) blid_firmament_pane

0x6410,	// (0x0008d949) aid_size_cell_gallery_ParamLimits

0x6410,	// (0x0008d949) aid_size_cell_gallery

0x6426,	// (0x0008d95f) grid_gallery_pane_ParamLimits

0x6426,	// (0x0008d95f) grid_gallery_pane

0x6441,	// (0x0008d97a) cell_gallery_pane_ParamLimits

0x6441,	// (0x0008d97a) cell_gallery_pane

0xecf0,	// (0x00096229) bg_cell_gallery_focus_pane_ParamLimits

0xecf0,	// (0x00096229) bg_cell_gallery_focus_pane

0xed02,	// (0x0009623b) cell_gallery_pane_g1_ParamLimits

0xed02,	// (0x0009623b) cell_gallery_pane_g1

0x6492,	// (0x0008d9cb) cell_gallery_pane_g2_ParamLimits

0x6492,	// (0x0008d9cb) cell_gallery_pane_g2

0x649f,	// (0x0008d9d8) cell_gallery_pane_g3_ParamLimits

0x649f,	// (0x0008d9d8) cell_gallery_pane_g3

0xed0e,	// (0x00096247) cell_gallery_pane_g4_ParamLimits

0xed0e,	// (0x00096247) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00096c59) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00096c59) cell_gallery_pane_g

0xed1a,	// (0x00096253) bg_cell_gallery_focus_pane_g1

0xed22,	// (0x0009625b) bg_cell_gallery_focus_pane_g2

0xed2a,	// (0x00096263) bg_cell_gallery_focus_pane_g3

0xed32,	// (0x0009626b) bg_cell_gallery_focus_pane_g4

0x0e78,	// (0x000883b1) bg_cell_gallery_focus_pane_g5

0x0e80,	// (0x000883b9) bg_cell_gallery_focus_pane_g6

0x0e88,	// (0x000883c1) bg_cell_gallery_focus_pane_g7

0x0e90,	// (0x000883c9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00096c62) bg_cell_gallery_focus_pane_g

0x0e98,	// (0x000883d1) aid_firma_cardinal

0x0eac,	// (0x000883e5) blid_firmament_pane_t1

0x0ec3,	// (0x000883fc) blid_firmament_pane_t2

0x0eda,	// (0x00088413) blid_firmament_pane_t3

0x0ef1,	// (0x0008842a) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00096c73) blid_firmament_pane_t

0x0f08,	// (0x00088441) blid_sat_info_pane

0x0f18,	// (0x00088451) blid_sat_info_pane_g1

0x0f18,	// (0x00088451) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00096c7c) blid_sat_info_pane_g

0x0f22,	// (0x0008845b) blid_sat_info_pane_t1

0x0f30,	// (0x00088469) smil2_volume_content_pane

0x0f39,	// (0x00088472) smil2_volume_pane_g1

0x0f41,	// (0x0008847a) smil2_volume_content_pane_g1

0x0f4a,	// (0x00088483) smil2_volume_content_pane_g2

0x0f53,	// (0x0008848c) smil2_volume_content_pane_g3

0x0f5c,	// (0x00088495) smil2_volume_content_pane_g4

0x0f65,	// (0x0008849e) smil2_volume_content_pane_g5

0x0f6e,	// (0x000884a7) smil2_volume_content_pane_g6

0x0f77,	// (0x000884b0) smil2_volume_content_pane_g7

0x0f80,	// (0x000884b9) smil2_volume_content_pane_g8

0x0f89,	// (0x000884c2) smil2_volume_content_pane_g9

0x0f92,	// (0x000884cb) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00096c81) smil2_volume_content_pane_g

0x2c29,	// (0x0008a162) cale_week_day_heading_pane_t1_ParamLimits

0x2c3d,	// (0x0008a176) cale_week_day_heading_pane_t2_ParamLimits

0x2c51,	// (0x0008a18a) cale_week_day_heading_pane_t3_ParamLimits

0x2c65,	// (0x0008a19e) cale_week_day_heading_pane_t4_ParamLimits

0x2c79,	// (0x0008a1b2) cale_week_day_heading_pane_t5_ParamLimits

0x2c8d,	// (0x0008a1c6) cale_week_day_heading_pane_t6_ParamLimits

0x2ca1,	// (0x0008a1da) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0009676d) cale_week_day_heading_pane_t_ParamLimits

0x0b39,	// (0x00088072) bg_cale_side_pane_ParamLimits

0x2cb5,	// (0x0008a1ee) cale_week_time_pane_t1_ParamLimits

0x2ccd,	// (0x0008a206) cale_week_time_pane_t2_ParamLimits

0x2ce5,	// (0x0008a21e) cale_week_time_pane_t3_ParamLimits

0x2cfd,	// (0x0008a236) cale_week_time_pane_t4_ParamLimits

0x2d15,	// (0x0008a24e) cale_week_time_pane_t5_ParamLimits

0x2d2d,	// (0x0008a266) cale_week_time_pane_t6_ParamLimits

0x2d45,	// (0x0008a27e) cale_week_time_pane_t7_ParamLimits

0x2d61,	// (0x0008a29a) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x0009677c) cale_week_time_pane_t_ParamLimits

0x2d81,	// (0x0008a2ba) cell_cale_week_pane_g2_ParamLimits

0x0b39,	// (0x00088072) bg_cale_side_pane_cp01_ParamLimits

0x3d21,	// (0x0008b25a) cale_month_week_pane_t1_ParamLimits

0x3d38,	// (0x0008b271) cale_month_week_pane_t2_ParamLimits

0x3d4f,	// (0x0008b288) cale_month_week_pane_t3_ParamLimits

0x3d66,	// (0x0008b29f) cale_month_week_pane_t4_ParamLimits

0x3d7d,	// (0x0008b2b6) cale_month_week_pane_t5_ParamLimits

0x3d94,	// (0x0008b2cd) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00096855) cale_month_week_pane_t_ParamLimits

0xacf1,	// (0x0009222a) cell_cale_month_pane_g1_ParamLimits

0x024d,	// (0x00087786) main_cale_event_viewer_pane

0x024d,	// (0x00087786) listscroll_cale_event_viewer_pane

0x0f9b,	// (0x000884d4) list_cale_ev_pane

0x0fa3,	// (0x000884dc) scroll_pane_cp023

0x64ac,	// (0x0008d9e5) field_cale_ev_pane_ParamLimits

0x64ac,	// (0x0008d9e5) field_cale_ev_pane

0x0faf,	// (0x000884e8) field_cale_ev_content_pane_ParamLimits

0x0faf,	// (0x000884e8) field_cale_ev_content_pane

0x0fbb,	// (0x000884f4) field_cale_ev_pane_g1_ParamLimits

0x0fbb,	// (0x000884f4) field_cale_ev_pane_g1

0x0fc7,	// (0x00088500) field_cale_ev_pane_g2_ParamLimits

0x0fc7,	// (0x00088500) field_cale_ev_pane_g2

0x0fdf,	// (0x00088518) field_cale_ev_pane_g3_ParamLimits

0x0fdf,	// (0x00088518) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00096c96) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00096c96) field_cale_ev_pane_g

0x0ff7,	// (0x00088530) field_cale_ev_pane_t1_ParamLimits

0x0ff7,	// (0x00088530) field_cale_ev_pane_t1

0x64d0,	// (0x0008da09) field_cale_ev_content_pane_t1_ParamLimits

0x64d0,	// (0x0008da09) field_cale_ev_content_pane_t1

0xb13d,	// (0x00092676) bg_button_pane_cp01

0x09e7,	// (0x00087f20) listscroll_cale_week_pane_ParamLimits

0x2a13,	// (0x00089f4c) popup_toolbar_window_cp01

0x0b27,	// (0x00088060) listscroll_cale_week_pane_t1_ParamLimits

0x09e7,	// (0x00087f20) listscroll_cale_day_pane_ParamLimits

0x3f3d,	// (0x0008b476) popup_toolbar_window_cp02

0x0b27,	// (0x00088060) listscroll_cale_day_pane_t1_ParamLimits

0x09e7,	// (0x00087f20) main_cale_month_pane_ParamLimits

0x5a34,	// (0x0008cf6d) popup_toolbar_window_cp03_ParamLimits

0x5a34,	// (0x0008cf6d) popup_toolbar_window_cp03

0x5057,	// (0x0008c590) main_image_pane_g2_ParamLimits

0x5057,	// (0x0008c590) main_image_pane_g2

0x5068,	// (0x0008c5a1) main_image_pane_g3_ParamLimits

0x5068,	// (0x0008c5a1) main_image_pane_g3

0x0002,

0xf54e,	// (0x00096a87) main_image_pane_g_ParamLimits

0xf54e,	// (0x00096a87) main_image_pane_g

0xb299,	// (0x000927d2) main_image_pane_t1_ParamLimits

0x5079,	// (0x0008c5b2) main_image_pane_t2_ParamLimits

0x5079,	// (0x0008c5b2) main_image_pane_t2

0x508b,	// (0x0008c5c4) main_image_pane_t3_ParamLimits

0x508b,	// (0x0008c5c4) main_image_pane_t3

0x50b3,	// (0x0008c5ec) main_image_pane_t4_ParamLimits

0x50b3,	// (0x0008c5ec) main_image_pane_t4

0x0003,

0xf555,	// (0x00096a8e) main_image_pane_t_ParamLimits

0xf555,	// (0x00096a8e) main_image_pane_t

0x50d3,	// (0x0008c60c) popup_image_details_window_cp01

0x50dd,	// (0x0008c616) popup_toobar_trans_pane_cp01_ParamLimits

0x50dd,	// (0x0008c616) popup_toobar_trans_pane_cp01

0x58a7,	// (0x0008cde0) popup_image_details_window_ParamLimits

0x58a7,	// (0x0008cde0) popup_image_details_window

0xc441,	// (0x0009397a) popup_image_focus_window

0x5cea,	// (0x0008d223) camera2_autofocus_pane_ParamLimits

0x5cea,	// (0x0008d223) camera2_autofocus_pane

0x024d,	// (0x00087786) bg_popup_sub_pane_cp06

0x100e,	// (0x00088547) popup_image_focus_window_g1

0x1016,	// (0x0008854f) popup_image_focus_window_g2

0x101e,	// (0x00088557) popup_image_focus_window_g3

0x1026,	// (0x0008855f) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00096c9d) popup_image_focus_window_g

0x102e,	// (0x00088567) popup_image_focus_window_t1

0x103c,	// (0x00088575) popup_image_focus_window_t2

0x104c,	// (0x00088585) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00096ca6) popup_image_focus_window_t

0x105a,	// (0x00088593) camera2_autofocus_pane_g1

0xabd7,	// (0x00092110) bg_tb_trans_pane_cp01

0x1068,	// (0x000885a1) popup_image_details_window_g1

0x107b,	// (0x000885b4) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00096cb8) popup_image_details_window_g

0x10a4,	// (0x000885dd) popup_image_details_window_t1

0x10b6,	// (0x000885ef) popup_image_details_window_t2

0x10cf,	// (0x00088608) popup_image_details_window_t3

0x10e3,	// (0x0008861c) popup_image_details_window_t4

0x10fe,	// (0x00088637) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00096cbf) popup_image_details_window_t

0x09d3,	// (0x00087f0c) bg_calc_paper_pane_ParamLimits

0xabed,	// (0x00092126) grid_highlight_pane_cp013

0xabf7,	// (0x00092130) list_calc_pane_ParamLimits

0xac09,	// (0x00092142) scroll_pane_cp024

0x09e7,	// (0x00087f20) bg_calc_display_pane_ParamLimits

0x2864,	// (0x00089d9d) calc_display_pane_t1_ParamLimits

0x2876,	// (0x00089daf) calc_display_pane_t2_ParamLimits

0xac11,	// (0x0009214a) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000966ef) calc_display_pane_t_ParamLimits

0x2939,	// (0x00089e72) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x0009670c) cell_calc_pane_g

0x2942,	// (0x00089e7b) cell_calc_pane_t1

0x0a46,	// (0x00087f7f) grid_highlight_pane_cp02_ParamLimits

0x0a5c,	// (0x00087f95) toolbar_button_pane_cp01_ParamLimits

0x0a5c,	// (0x00087f95) toolbar_button_pane_cp01

0xb2de,	// (0x00092817) temp_image_control_pane_ParamLimits

0xb2de,	// (0x00092817) temp_image_control_pane

0xabd7,	// (0x00092110) main_mp3_pane

0x1118,	// (0x00088651) temp_image_control_pane_g1_ParamLimits

0x1118,	// (0x00088651) temp_image_control_pane_g1

0x1126,	// (0x0008865f) temp_image_control_pane_g2_ParamLimits

0x1126,	// (0x0008865f) temp_image_control_pane_g2

0x1138,	// (0x00088671) temp_image_control_pane_g3_ParamLimits

0x1138,	// (0x00088671) temp_image_control_pane_g3

0x6521,	// (0x0008da5a) temp_image_control_pane_g4_ParamLimits

0x6521,	// (0x0008da5a) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00096cca) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00096cca) temp_image_control_pane_g

0x1118,	// (0x00088651) main_mp3_pane_g1

0x6534,	// (0x0008da6d) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00096cd3) main_mp3_pane_g

0x117b,	// (0x000886b4) main_mp3_pane_t1

0x0b9e,	// (0x000880d7) main_camera_pane_g8_ParamLimits

0x0b9e,	// (0x000880d7) main_camera_pane_g8

0x3052,	// (0x0008a58b) main_video_pane_g7_ParamLimits

0x3052,	// (0x0008a58b) main_video_pane_g7

0xc575,	// (0x00093aae) main_camera2_pane_t7_ParamLimits

0xc575,	// (0x00093aae) main_camera2_pane_t7

0x0cf0,	// (0x00088229) scroll_pane_cp025_ParamLimits

0x0cf0,	// (0x00088229) scroll_pane_cp025

0x0d04,	// (0x0008823d) scroll_pane_cp026_ParamLimits

0x0d04,	// (0x0008823d) scroll_pane_cp026

0x0d13,	// (0x0008824c) wml_content_pane_ParamLimits

0x024d,	// (0x00087786) main_touch_calib_pane

0x65fb,	// (0x0008db34) main_touch_calib_pane_g1

0x6607,	// (0x0008db40) main_touch_calib_pane_g2

0x6613,	// (0x0008db4c) main_touch_calib_pane_g3

0x661f,	// (0x0008db58) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00096cf1) main_touch_calib_pane_g

0x662b,	// (0x0008db64) main_touch_calib_pane_t1

0x6645,	// (0x0008db7e) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00096cfa) main_touch_calib_pane_t

0xaef3,	// (0x0009242c) mup_progress_pane_cp02

0xaf12,	// (0x0009244b) navi_pane_g1

0xaf74,	// (0x000924ad) navi_pane_mp_t3

0xabd7,	// (0x00092110) main_mp3_pane_ParamLimits

0x5a76,	// (0x0008cfaf) navi_pane_ParamLimits

0x1118,	// (0x00088651) main_mp3_pane_g1_ParamLimits

0x6534,	// (0x0008da6d) main_mp3_pane_g2_ParamLimits

0x6540,	// (0x0008da79) main_mp3_pane_g3_ParamLimits

0x6540,	// (0x0008da79) main_mp3_pane_g3

0x654e,	// (0x0008da87) main_mp3_pane_g4_ParamLimits

0x654e,	// (0x0008da87) main_mp3_pane_g4

0x1148,	// (0x00088681) main_mp3_pane_g5_ParamLimits

0x1148,	// (0x00088681) main_mp3_pane_g5

0x1156,	// (0x0008868f) main_mp3_pane_g6_ParamLimits

0x1156,	// (0x0008868f) main_mp3_pane_g6

0x1163,	// (0x0008869c) main_mp3_pane_g7_ParamLimits

0x1163,	// (0x0008869c) main_mp3_pane_g7

0x116f,	// (0x000886a8) main_mp3_pane_g8_ParamLimits

0x116f,	// (0x000886a8) main_mp3_pane_g8

0xf79a,	// (0x00096cd3) main_mp3_pane_g_ParamLimits

0x655a,	// (0x0008da93) main_mp3_pane_t2

0x6568,	// (0x0008daa1) main_mp3_pane_t3

0x1189,	// (0x000886c2) main_mp3_pane_t4

0x1197,	// (0x000886d0) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00096ce4) main_mp3_pane_t

0x11a5,	// (0x000886de) mup_progress_pane_cp01

0x2332,	// (0x0008986b) aid_zoom_text_secondary2

0x0f9b,	// (0x000884d4) list_cale_ev2_pane

0x0fa3,	// (0x000884dc) scroll_pane_cp023_ParamLimits

0x669d,	// (0x0008dbd6) field_cale_ev2_pane_ParamLimits

0x669d,	// (0x0008dbd6) field_cale_ev2_pane

0xc634,	// (0x00093b6d) field_cale_ev2_pane_g1_ParamLimits

0xc634,	// (0x00093b6d) field_cale_ev2_pane_g1

0xc640,	// (0x00093b79) field_cale_ev2_pane_g2_ParamLimits

0xc640,	// (0x00093b79) field_cale_ev2_pane_g2

0xc658,	// (0x00093b91) field_cale_ev2_pane_g3_ParamLimits

0xc658,	// (0x00093b91) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00096d05) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00096d05) field_cale_ev2_pane_g

0xc67c,	// (0x00093bb5) field_cale_ev2_pane_t1_ParamLimits

0xc67c,	// (0x00093bb5) field_cale_ev2_pane_t1

0xc693,	// (0x00093bcc) field_cale_ev2_pane_t2_ParamLimits

0xc693,	// (0x00093bcc) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00096d0e) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00096d0e) field_cale_ev2_pane_t

0x4ef2,	// (0x0008c42b) main_postcard_pane_g5_ParamLimits

0x4ef2,	// (0x0008c42b) main_postcard_pane_g5

0x4f08,	// (0x0008c441) main_postcard_pane_g6_ParamLimits

0x4f08,	// (0x0008c441) main_postcard_pane_g6

0x2dfe,	// (0x0008a337) camera2_autofocus_pane_cp_ParamLimits

0x2dfe,	// (0x0008a337) camera2_autofocus_pane_cp

0xabd7,	// (0x00092110) main_mup3_pane

0x66e1,	// (0x0008dc1a) main_mup3_pane_g1_ParamLimits

0x66e1,	// (0x0008dc1a) main_mup3_pane_g1

0x6703,	// (0x0008dc3c) main_mup3_pane_g2_ParamLimits

0x6703,	// (0x0008dc3c) main_mup3_pane_g2

0x6786,	// (0x0008dcbf) main_mup3_pane_g3_ParamLimits

0x6786,	// (0x0008dcbf) main_mup3_pane_g3

0x67ca,	// (0x0008dd03) main_mup3_pane_g4_ParamLimits

0x67ca,	// (0x0008dd03) main_mup3_pane_g4

0x680e,	// (0x0008dd47) main_mup3_pane_g5_ParamLimits

0x680e,	// (0x0008dd47) main_mup3_pane_g5

0x6852,	// (0x0008dd8b) main_mup3_pane_g6_ParamLimits

0x6852,	// (0x0008dd8b) main_mup3_pane_g6

0x11ad,	// (0x000886e6) main_mup3_pane_g7_ParamLimits

0x11ad,	// (0x000886e6) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00096d1e) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00096d1e) main_mup3_pane_g

0x68ce,	// (0x0008de07) main_mup3_pane_t1_ParamLimits

0x68ce,	// (0x0008de07) main_mup3_pane_t1

0x6948,	// (0x0008de81) main_mup3_pane_t2_ParamLimits

0x6948,	// (0x0008de81) main_mup3_pane_t2

0x6a22,	// (0x0008df5b) main_mup3_pane_t4_ParamLimits

0x6a22,	// (0x0008df5b) main_mup3_pane_t4

0x6a80,	// (0x0008dfb9) main_mup3_pane_t5_ParamLimits

0x6a80,	// (0x0008dfb9) main_mup3_pane_t5

0x6b38,	// (0x0008e071) main_mup3_pane_t6_ParamLimits

0x6b38,	// (0x0008e071) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00096d2f) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00096d2f) main_mup3_pane_t

0x6bee,	// (0x0008e127) mup3_progress_pane_ParamLimits

0x6bee,	// (0x0008e127) mup3_progress_pane

0x6c72,	// (0x0008e1ab) popup_mup3_control_window_ParamLimits

0x6c72,	// (0x0008e1ab) popup_mup3_control_window

0x11bb,	// (0x000886f4) popup_mup3_text_window

0x6ca8,	// (0x0008e1e1) mup3_progress_pane_t1

0x6cbf,	// (0x0008e1f8) mup3_progress_pane_t2

0x11c3,	// (0x000886fc) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00096d3c) mup3_progress_pane_t

0x11da,	// (0x00088713) mup_progress_pane_cp03

0x024d,	// (0x00087786) bg_tb_trans_pane_cp04

0x6cd6,	// (0x0008e20f) mup3_volume_pane

0x6cde,	// (0x0008e217) popup_mup3_control_window_g1

0x6ce7,	// (0x0008e220) mup3_volume_pane_g1

0x6cf0,	// (0x0008e229) mup3_volume_pane_g2

0x6cf9,	// (0x0008e232) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00096d43) mup3_volume_pane_g

0x024d,	// (0x00087786) bg_tb_trans_pane_cp03

0x11ea,	// (0x00088723) popup_mup3_text_window_g1

0x11f2,	// (0x0008872b) popup_mup3_text_window_t1

0x0a2f,	// (0x00087f68) list_calc_item_pane_g1_ParamLimits

0xeaeb,	// (0x00096024) mup_volume_pane_cp_g1

0x665f,	// (0x0008db98) main_touch_calib_pane_t3

0x6673,	// (0x0008dbac) main_touch_calib_pane_t4

0x6687,	// (0x0008dbc0) main_touch_calib_pane_t5

0x0257,	// (0x00087790) aid_cell_size_toolbar2

0x025f,	// (0x00087798) aid_popup3_width_pane

0x2322,	// (0x0008985b) aid_zoom_text_msg_primary

0xacdb,	// (0x00092214) vorec_t7

0x09f3,	// (0x00087f2c) bg_calc_paper_pane_g1_ParamLimits

0x09ff,	// (0x00087f38) bg_calc_paper_pane_g2_ParamLimits

0x0a0b,	// (0x00087f44) bg_calc_paper_pane_g3_ParamLimits

0x0a17,	// (0x00087f50) bg_calc_paper_pane_g4_ParamLimits

0x0a23,	// (0x00087f5c) bg_calc_paper_pane_g5_ParamLimits

0x28c3,	// (0x00089dfc) bg_calc_paper_pane_g6_ParamLimits

0x28d6,	// (0x00089e0f) bg_calc_paper_pane_g7_ParamLimits

0x28e9,	// (0x00089e22) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x000966f6) bg_calc_paper_pane_g_ParamLimits

0x28fa,	// (0x00089e33) calc_bg_paper_pane_g9_ParamLimits

0x2f60,	// (0x0008a499) image_qvga_pane_ParamLimits

0x2f60,	// (0x0008a499) image_qvga_pane

0x091c,	// (0x00087e55) bg_popup_sub_pane_cp04_ParamLimits

0xb215,	// (0x0009274e) popup_mup_playback_window_g1_ParamLimits

0xb221,	// (0x0009275a) popup_mup_playback_window_t1_ParamLimits

0xb236,	// (0x0009276f) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00096a82) popup_mup_playback_window_t_ParamLimits

0x616e,	// (0x0008d6a7) main_mup2_pane_g3_ParamLimits

0x616e,	// (0x0008d6a7) main_mup2_pane_g3

0x3323,	// (0x0008a85c) popup_toolbar_window_cp04

0xb631,	// (0x00092b6a) popup_call2_audio_second_window_g3_ParamLimits

0xb631,	// (0x00092b6a) popup_call2_audio_second_window_g3

0xba3b,	// (0x00092f74) popup_call2_audio_first_window_g4_ParamLimits

0xba3b,	// (0x00092f74) popup_call2_audio_first_window_g4

0xc0ba,	// (0x000935f3) popup_call2_audio_in_window_g4_ParamLimits

0xc0ba,	// (0x000935f3) popup_call2_audio_in_window_g4

0x5039,	// (0x0008c572) aid_area_sk_bg_cut_ParamLimits

0x5039,	// (0x0008c572) aid_area_sk_bg_cut

0xb24b,	// (0x00092784) aid_area_sk_bg_cut_2_ParamLimits

0xb24b,	// (0x00092784) aid_area_sk_bg_cut_2

0x6482,	// (0x0008d9bb) aid_placing_details_win

0x648a,	// (0x0008d9c3) aid_placing_details_win_2

0x105a,	// (0x00088593) camera2_autofocus_pane_g1_ParamLimits

0x24c4,	// (0x000899fd) popup_fixed_preview_cale_window_ParamLimits

0x24c4,	// (0x000899fd) popup_fixed_preview_cale_window

0xafcc,	// (0x00092505) navi_slider_pane_g3

0xafd5,	// (0x0009250e) navi_slider_pane_g4

0xafde,	// (0x00092517) navi_slider_pane_g5

0xafcc,	// (0x00092505) navi_slider_pane_g6

0xafe7,	// (0x00092520) navi_slider_pane_g7

0xb10a,	// (0x00092643) mup_scale_pane_g3

0xb113,	// (0x0009264c) mup_scale_pane_g4

0xb11c,	// (0x00092655) mup_scale_pane_g5

0x4cbc,	// (0x0008c1f5) mup_scale_pane_g6

0x4cc5,	// (0x0008c1fe) mup_scale_pane_g7

0xafcc,	// (0x00092505) cams2_slider_pane_g3

0xeb98,	// (0x000960d1) cams2_slider_pane_g4

0xeba0,	// (0x000960d9) cams2_slider_pane_g5

0xafcc,	// (0x00092505) cams2_slider_pane_g6

0xeba8,	// (0x000960e1) cams2_slider_pane_g7

0x0f18,	// (0x00088451) camera2_autofocus_pane_cp_g1

0x1200,	// (0x00088739) bg_popup_preview_window_pane_cp02_ParamLimits

0x1200,	// (0x00088739) bg_popup_preview_window_pane_cp02

0x120c,	// (0x00088745) list_fp_cale_pane_ParamLimits

0x120c,	// (0x00088745) list_fp_cale_pane

0x1218,	// (0x00088751) popup_fixed_preview_cale_window_t1_ParamLimits

0x1218,	// (0x00088751) popup_fixed_preview_cale_window_t1

0x6d02,	// (0x0008e23b) popup_fixed_preview_cale_window_t2_ParamLimits

0x6d02,	// (0x0008e23b) popup_fixed_preview_cale_window_t2

0x6d17,	// (0x0008e250) popup_fixed_preview_cale_window_t3_ParamLimits

0x6d17,	// (0x0008e250) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00096d4a) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00096d4a) popup_fixed_preview_cale_window_t

0x6d2e,	// (0x0008e267) list_single_fp_cale_pane_ParamLimits

0x6d2e,	// (0x0008e267) list_single_fp_cale_pane

0x1236,	// (0x0008876f) list_single_fp_cale_pane_g1_ParamLimits

0x1236,	// (0x0008876f) list_single_fp_cale_pane_g1

0x1242,	// (0x0008877b) list_single_fp_cale_pane_g2_ParamLimits

0x1242,	// (0x0008877b) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00096d51) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00096d51) list_single_fp_cale_pane_g

0x125b,	// (0x00088794) list_single_fp_cale_pane_t1_ParamLimits

0x125b,	// (0x00088794) list_single_fp_cale_pane_t1

0x126d,	// (0x000887a6) list_single_fp_cale_pane_t2_ParamLimits

0x126d,	// (0x000887a6) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00096d58) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00096d58) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x024d,	// (0x00087786) main_dialer_pane

0x6d46,	// (0x0008e27f) aid_cell_size_keypad

0x6d50,	// (0x0008e289) dialer_ne_pane

0x6d5a,	// (0x0008e293) grid_dialer_command_1_pane

0x6d62,	// (0x0008e29b) grid_dialer_command_2_pane

0x6d6a,	// (0x0008e2a3) grid_dialer_keypad_pane

0x6d7e,	// (0x0008e2b7) bg_popup_call_pane_cp06_ParamLimits

0x6d7e,	// (0x0008e2b7) bg_popup_call_pane_cp06

0x6d8a,	// (0x0008e2c3) dialer_ne_clear_pane_ParamLimits

0x6d8a,	// (0x0008e2c3) dialer_ne_clear_pane

0x12a0,	// (0x000887d9) dialer_ne_pane_g1

0x12a8,	// (0x000887e1) dialer_ne_pane_t1_ParamLimits

0x12a8,	// (0x000887e1) dialer_ne_pane_t1

0x6d96,	// (0x0008e2cf) dialer_ne_pane_t2_ParamLimits

0x6d96,	// (0x0008e2cf) dialer_ne_pane_t2

0x6dc0,	// (0x0008e2f9) dialer_ne_pane_t3_ParamLimits

0x6dc0,	// (0x0008e2f9) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x00096d5d) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x00096d5d) dialer_ne_pane_t

0x6df0,	// (0x0008e329) dialer_ne_pane_t3_copy1_ParamLimits

0x6df0,	// (0x0008e329) dialer_ne_pane_t3_copy1

0x6e1f,	// (0x0008e358) cell_dialer_keypad_pane_ParamLimits

0x6e1f,	// (0x0008e358) cell_dialer_keypad_pane

0x6e36,	// (0x0008e36f) cell_dialer_command_1_pane_ParamLimits

0x6e36,	// (0x0008e36f) cell_dialer_command_1_pane

0x6e4c,	// (0x0008e385) cell_dialer_command_2_pane_ParamLimits

0x6e4c,	// (0x0008e385) cell_dialer_command_2_pane

0x12ba,	// (0x000887f3) bg_button_pane_cp02_ParamLimits

0x12ba,	// (0x000887f3) bg_button_pane_cp02

0x6e5b,	// (0x0008e394) cell_dialer_keypad_pane_g1_ParamLimits

0x6e5b,	// (0x0008e394) cell_dialer_keypad_pane_g1

0x12ba,	// (0x000887f3) bg_button_pane_cp03_ParamLimits

0x12ba,	// (0x000887f3) bg_button_pane_cp03

0x6e70,	// (0x0008e3a9) cell_dialer_command_1_pane_g1_ParamLimits

0x6e70,	// (0x0008e3a9) cell_dialer_command_1_pane_g1

0x12c6,	// (0x000887ff) bg_button_pane_cp04

0x6e84,	// (0x0008e3bd) cell_dialer_command_2_pane_g1

0xafb2,	// (0x000924eb) bg_button_pane_cp06

0x12ce,	// (0x00088807) dialer_ne_clear_pane_g1

0x479e,	// (0x0008bcd7) navi_pane_g2

0x47cc,	// (0x0008bd05) navi_pane_g3

0x0002,

0xf44c,	// (0x00096985) navi_pane_g

0x47f7,	// (0x0008bd30) navi_pane_mv_g2

0x481e,	// (0x0008bd57) navi_pane_mv_g5

0x4826,	// (0x0008bd5f) navi_pane_mv_t1

0x09e7,	// (0x00087f20) main_clock2_pane

0x6ebc,	// (0x0008e3f5) main_clock2_list_pane_ParamLimits

0x6ebc,	// (0x0008e3f5) main_clock2_list_pane

0x6ef4,	// (0x0008e42d) main_clock2_pane_t1_ParamLimits

0x6ef4,	// (0x0008e42d) main_clock2_pane_t1

0x6f30,	// (0x0008e469) main_clock2_pane_t2_ParamLimits

0x6f30,	// (0x0008e469) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00096d64) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00096d64) main_clock2_pane_t

0x6fbc,	// (0x0008e4f5) popup_clock_analogue_window_cp03_ParamLimits

0x6fbc,	// (0x0008e4f5) popup_clock_analogue_window_cp03

0x6fe3,	// (0x0008e51c) popup_clock_digital_window_cp02_ParamLimits

0x6fe3,	// (0x0008e51c) popup_clock_digital_window_cp02

0x705c,	// (0x0008e595) main_clock2_list_single_pane_ParamLimits

0x705c,	// (0x0008e595) main_clock2_list_single_pane

0xafb2,	// (0x000924eb) list_highlight_pane_cp05

0x12d6,	// (0x0008880f) main_clock2_list_single_pane_t1

0x3323,	// (0x0008a85c) popup_toolbar_window_cp04_ParamLimits

0x64f1,	// (0x0008da2a) camera2_autofocus_pane_g2_ParamLimits

0x64f1,	// (0x0008da2a) camera2_autofocus_pane_g2

0x64fd,	// (0x0008da36) camera2_autofocus_pane_g3_ParamLimits

0x64fd,	// (0x0008da36) camera2_autofocus_pane_g3

0x6509,	// (0x0008da42) camera2_autofocus_pane_g4_ParamLimits

0x6509,	// (0x0008da42) camera2_autofocus_pane_g4

0x6515,	// (0x0008da4e) camera2_autofocus_pane_g5_ParamLimits

0x6515,	// (0x0008da4e) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00096cad) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00096cad) camera2_autofocus_pane_g

0x66c1,	// (0x0008dbfa) camera2_autofocus_pane_cp_g2

0x66c9,	// (0x0008dc02) camera2_autofocus_pane_cp_g3

0x66d1,	// (0x0008dc0a) camera2_autofocus_pane_cp_g4

0x66d9,	// (0x0008dc12) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00096d13) camera2_autofocus_pane_cp_g

0x6d76,	// (0x0008e2af) popup_dialer_spcha_window

0x024d,	// (0x00087786) bg_popup_sub_pane_cp07

0x12e4,	// (0x0008881d) list_spcha_pane

0x12ec,	// (0x00088825) list_single_spcha_pane_ParamLimits

0x12ec,	// (0x00088825) list_single_spcha_pane

0x024d,	// (0x00087786) list_highlight_pane_cp06

0x12fd,	// (0x00088836) list_single_spcha_pane_t1

0xbe64,	// (0x0009339d) popup_call2_audio_out_window_g4_ParamLimits

0xbe64,	// (0x0009339d) popup_call2_audio_out_window_g4

0x024d,	// (0x00087786) main_imed2_pane

0xc44b,	// (0x00093984) popup_imed_adjust2_window

0x58bf,	// (0x0008cdf8) popup_imed_trans_window_ParamLimits

0x58bf,	// (0x0008cdf8) popup_imed_trans_window

0xec12,	// (0x0009614b) popup_blid_sat_info2_window_t1

0xec20,	// (0x00096159) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00096c42) popup_blid_sat_info2_window_t

0x7112,	// (0x0008e64b) aid_size_cell_colour_35

0x7132,	// (0x0008e66b) aid_size_cell_colour_112

0x7152,	// (0x0008e68b) aid_size_cell_effect

0xc41f,	// (0x00093958) bg_tb_trans_pane_cp02

0x40a6,	// (0x0008b5df) heading_imed_pane

0x7172,	// (0x0008e6ab) listscroll_imed_pane

0x130b,	// (0x00088844) heading_imed_pane_g1

0x1313,	// (0x0008884c) heading_imed_pane_t1

0x1321,	// (0x0008885a) grid_imed_colour_35_pane_ParamLimits

0x1321,	// (0x0008885a) grid_imed_colour_35_pane

0x717e,	// (0x0008e6b7) grid_imed_effect_pane

0x133d,	// (0x00088876) list_imed_aspect_pane

0x7195,	// (0x0008e6ce) scroll_pane_cp027_ParamLimits

0x7195,	// (0x0008e6ce) scroll_pane_cp027

0x71a6,	// (0x0008e6df) cell_imed_effect_pane_ParamLimits

0x71a6,	// (0x0008e6df) cell_imed_effect_pane

0x1345,	// (0x0008887e) cell_imed_colour_pane_ParamLimits

0x1345,	// (0x0008887e) cell_imed_colour_pane

0x138f,	// (0x000888c8) cell_imed_colour_pane_g1_ParamLimits

0x138f,	// (0x000888c8) cell_imed_colour_pane_g1

0x13a0,	// (0x000888d9) hgihlgiht_grid_pane_cp016_ParamLimits

0x13a0,	// (0x000888d9) hgihlgiht_grid_pane_cp016

0x71cb,	// (0x0008e704) cell_imed_effect_pane_g1

0x71d3,	// (0x0008e70c) grid_highlight_pane_cp017

0x13b1,	// (0x000888ea) list_imed_single_pane_ParamLimits

0x13b1,	// (0x000888ea) list_imed_single_pane

0x024d,	// (0x00087786) list_highlight_pane_cp07

0xc6a8,	// (0x00093be1) list_imed_aspect_pane_comp1_t1

0xc41f,	// (0x00093958) bg_tb_trans_pane_cp05

0xc6ca,	// (0x00093c03) popup_imed_adjust2_window_g1

0xc6f1,	// (0x00093c2a) popup_imed_adjust2_window_t1

0xc709,	// (0x00093c42) slider_imed_adjust_pane

0xc71d,	// (0x00093c56) slider_imed_adjust_pane_g1

0xc72d,	// (0x00093c66) slider_imed_adjust_pane_g2

0xc73d,	// (0x00093c76) slider_imed_adjust_pane_g3

0xc74e,	// (0x00093c87) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00096d81) slider_imed_adjust_pane_g

0x71dc,	// (0x0008e715) aid_size_cell_clipart2

0x71e8,	// (0x0008e721) grid_imed_clipart_pane

0xc75f,	// (0x00093c98) scroll_pane_cp031

0x71f2,	// (0x0008e72b) cell_imed_clipart_pane_ParamLimits

0x71f2,	// (0x0008e72b) cell_imed_clipart_pane

0x720f,	// (0x0008e748) cell_imed_clipart_pane_g1

0x024d,	// (0x00087786) grid_highlight_pane_cp014

0x6ed1,	// (0x0008e40a) main_clock2_pane_g1_ParamLimits

0x6ed1,	// (0x0008e40a) main_clock2_pane_g1

0x7003,	// (0x0008e53c) aid_call2_pane_cp10

0x7015,	// (0x0008e54e) aid_call_pane_cp10

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g1

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g2

0x7027,	// (0x0008e560) popup_clock_analogue_window_cp10_g3

0x7027,	// (0x0008e560) popup_clock_analogue_window_cp10_g4

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x00096d6f) popup_clock_analogue_window_cp10_g

0x703d,	// (0x0008e576) popup_clock_analogue_window_cp10_t1

0x706e,	// (0x0008e5a7) clock_digital_number_pane_cp10_ParamLimits

0x706e,	// (0x0008e5a7) clock_digital_number_pane_cp10

0x7088,	// (0x0008e5c1) clock_digital_number_pane_cp11_ParamLimits

0x7088,	// (0x0008e5c1) clock_digital_number_pane_cp11

0x70a2,	// (0x0008e5db) clock_digital_number_pane_cp12_ParamLimits

0x70a2,	// (0x0008e5db) clock_digital_number_pane_cp12

0x70bc,	// (0x0008e5f5) clock_digital_number_pane_cp13_ParamLimits

0x70bc,	// (0x0008e5f5) clock_digital_number_pane_cp13

0x70d6,	// (0x0008e60f) clock_digital_separator_pane_cp10_ParamLimits

0x70d6,	// (0x0008e60f) clock_digital_separator_pane_cp10

0x70f0,	// (0x0008e629) popup_clock_digital_window_cp02_t1_ParamLimits

0x70f0,	// (0x0008e629) popup_clock_digital_window_cp02_t1

0x0914,	// (0x00087e4d) clock_digital_number_pane_cp10_g1

0x0914,	// (0x00087e4d) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00096d8a) clock_digital_number_pane_cp10_g

0x0914,	// (0x00087e4d) clock_digital_separator_pane_cp10_g1

0x0914,	// (0x00087e4d) clock_digital_separator_pane_g2_cp10

0xaf82,	// (0x000924bb) navi_pane_vded_g4

0xaf8b,	// (0x000924c4) navi_pane_vded_g5

0xaf94,	// (0x000924cd) navi_pane_vded_t1

0x024d,	// (0x00087786) main_vded_pane

0x7218,	// (0x0008e751) main_vded_pane_g1

0x7224,	// (0x0008e75d) main_vded_pane_g2

0x7230,	// (0x0008e769) main_vded_pane_g3

0x0002,

0xf856,	// (0x00096d8f) main_vded_pane_g

0x723c,	// (0x0008e775) main_vded_pane_t1

0x724a,	// (0x0008e783) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00096d96) main_vded_pane_t

0x7258,	// (0x0008e791) vded_slider_pane

0x7262,	// (0x0008e79b) vded_video_pane

0xc767,	// (0x00093ca0) vded_video_pane_g1

0x726e,	// (0x0008e7a7) vded_video_pane_g2

0x0f18,	// (0x00088451) vded_video_pane_g3

0x0002,

0xf862,	// (0x00096d9b) vded_video_pane_g

0xc771,	// (0x00093caa) vded_slider_pane_g1

0xeaeb,	// (0x00096024) vded_slider_pane_g2

0xc77a,	// (0x00093cb3) vded_slider_pane_g3

0xc783,	// (0x00093cbc) vded_slider_pane_g4

0xc78c,	// (0x00093cc5) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00096da2) vded_slider_pane_g

0x6c5c,	// (0x0008e195) mup3_rocker_pane_ParamLimits

0x6c5c,	// (0x0008e195) mup3_rocker_pane

0x7277,	// (0x0008e7b0) mup3_control_keys_pane_g1

0x727f,	// (0x0008e7b8) mup3_control_keys_pane_g2

0x7287,	// (0x0008e7c0) mup3_control_keys_pane_g3

0x728f,	// (0x0008e7c8) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x00096dad) mup3_control_keys_pane_g

0x24fb,	// (0x00089a34) popup_toolbar2_fixed_window_cp01_ParamLimits

0x24fb,	// (0x00089a34) popup_toolbar2_fixed_window_cp01

0x6c92,	// (0x0008e1cb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6c92,	// (0x0008e1cb) popup_toolbar2_fixed_window_cp02

0xb7a3,	// (0x00092cdc) popup_call2_audio_second_window_t4_ParamLimits

0xb7a3,	// (0x00092cdc) popup_call2_audio_second_window_t4

0xbcd1,	// (0x0009320a) popup_call2_audio_first_window_t6_ParamLimits

0xbcd1,	// (0x0009320a) popup_call2_audio_first_window_t6

0xbf67,	// (0x000934a0) popup_call2_audio_out_window_t6_ParamLimits

0xbf67,	// (0x000934a0) popup_call2_audio_out_window_t6

0x024d,	// (0x00087786) main_vitu_pane

0x729f,	// (0x0008e7d8) aid_size_cell_itu_ParamLimits

0x729f,	// (0x0008e7d8) aid_size_cell_itu

0xabd7,	// (0x00092110) bg_popup_window_pane_cp08_ParamLimits

0xabd7,	// (0x00092110) bg_popup_window_pane_cp08

0x72b5,	// (0x0008e7ee) field_vitu_entry_pane_ParamLimits

0x72b5,	// (0x0008e7ee) field_vitu_entry_pane

0x72cc,	// (0x0008e805) grid_vitu_function_pane_ParamLimits

0x72cc,	// (0x0008e805) grid_vitu_function_pane

0x72e7,	// (0x0008e820) grid_vitu_itu_pane_ParamLimits

0x72e7,	// (0x0008e820) grid_vitu_itu_pane

0x7305,	// (0x0008e83e) cell_vitu_itu_pane_ParamLimits

0x7305,	// (0x0008e83e) cell_vitu_itu_pane

0x732b,	// (0x0008e864) cell_vitu_function_pane_ParamLimits

0x732b,	// (0x0008e864) cell_vitu_function_pane

0xabd7,	// (0x00092110) bg_popup_sub_pane_cp08_ParamLimits

0xabd7,	// (0x00092110) bg_popup_sub_pane_cp08

0x7346,	// (0x0008e87f) field_vitu_entry_pane_t1_ParamLimits

0x7346,	// (0x0008e87f) field_vitu_entry_pane_t1

0xc7ad,	// (0x00093ce6) field_vitu_entry_pane_t2_ParamLimits

0xc7ad,	// (0x00093ce6) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x00096dbb) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x00096dbb) field_vitu_entry_pane_t

0xc7ca,	// (0x00093d03) bg_button_pane_cp05_ParamLimits

0xc7ca,	// (0x00093d03) bg_button_pane_cp05

0x7366,	// (0x0008e89f) cell_vitu_itu_pane_g1

0x737e,	// (0x0008e8b7) cell_vitu_itu_pane_t1_ParamLimits

0x737e,	// (0x0008e8b7) cell_vitu_itu_pane_t1

0x7390,	// (0x0008e8c9) cell_vitu_itu_pane_t2_ParamLimits

0x7390,	// (0x0008e8c9) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x00096dc0) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x00096dc0) cell_vitu_itu_pane_t

0xc7d8,	// (0x00093d11) bg_button_pane_cp07

0x73c5,	// (0x0008e8fe) cell_vitu_function_pane_g1

0xabe5,	// (0x0009211e) main_calc_pane_g1

0x2316,	// (0x0008984f) aid_visual_content_pane

0x024d,	// (0x00087786) main_vradio_pane

0x73ce,	// (0x0008e907) main_vradio_pane_g1_ParamLimits

0x73ce,	// (0x0008e907) main_vradio_pane_g1

0xc7e2,	// (0x00093d1b) main_vradio_pane_g2_ParamLimits

0xc7e2,	// (0x00093d1b) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00096dc7) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00096dc7) main_vradio_pane_g

0x73e5,	// (0x0008e91e) main_vradio_pane_t1_ParamLimits

0x73e5,	// (0x0008e91e) main_vradio_pane_t1

0x73fa,	// (0x0008e933) main_vradio_pane_t2_ParamLimits

0x73fa,	// (0x0008e933) main_vradio_pane_t2

0xc7ef,	// (0x00093d28) main_vradio_pane_t3_ParamLimits

0xc7ef,	// (0x00093d28) main_vradio_pane_t3

0x0002,

0xf893,	// (0x00096dcc) main_vradio_pane_t_ParamLimits

0xf893,	// (0x00096dcc) main_vradio_pane_t

0x740f,	// (0x0008e948) vradio_rocker_control_pane_ParamLimits

0x740f,	// (0x0008e948) vradio_rocker_control_pane

0x7421,	// (0x0008e95a) vradio_station_info_pane_ParamLimits

0x7421,	// (0x0008e95a) vradio_station_info_pane

0xc803,	// (0x00093d3c) vradio_frequency_info_pane_ParamLimits

0xc803,	// (0x00093d3c) vradio_frequency_info_pane

0x0f18,	// (0x00088451) vradio_station_info_pane_g1

0xc812,	// (0x00093d4b) vradio_station_info_pane_t1_ParamLimits

0xc812,	// (0x00093d4b) vradio_station_info_pane_t1

0xc834,	// (0x00093d6d) vradio_station_info_pane_t2_ParamLimits

0xc834,	// (0x00093d6d) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00096dd3) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00096dd3) vradio_station_info_pane_t

0xc846,	// (0x00093d7f) vradio_tuning_pane

0xc84e,	// (0x00093d87) vradio_rocker_control_pane_g1

0xc856,	// (0x00093d8f) vradio_rocker_control_pane_g2

0xc85e,	// (0x00093d97) vradio_rocker_control_pane_g3

0xc866,	// (0x00093d9f) vradio_rocker_control_pane_g4

0xc86e,	// (0x00093da7) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00096dd8) vradio_rocker_control_pane_g

0x7431,	// (0x0008e96a) vradio_frequency_info_pane_g1

0xc876,	// (0x00093daf) vradio_frequency_info_pane_t1_ParamLimits

0xc876,	// (0x00093daf) vradio_frequency_info_pane_t1

0x743b,	// (0x0008e974) vradio_tuning_pane_g1

0x7446,	// (0x0008e97f) vradio_tuning_pane_t1

0x026b,	// (0x000877a4) area_side_right_pane_ParamLimits

0x026b,	// (0x000877a4) area_side_right_pane

0xc3e6,	// (0x0009391f) status_small_pane_g1

0xc3ee,	// (0x00093927) status_small_pane_g2

0xc3f7,	// (0x00093930) status_small_pane_g3

0xc400,	// (0x00093939) status_small_pane_g4

0x0003,

0xf65f,	// (0x00096b98) status_small_pane_g

0xc409,	// (0x00093942) status_small_pane_t1

0x024d,	// (0x00087786) main_video3_pane

0xc88a,	// (0x00093dc3) cams_zoom_vslider_pane

0xc892,	// (0x00093dcb) image3_wide_pane_ParamLimits

0xc892,	// (0x00093dcb) image3_wide_pane

0xc8ac,	// (0x00093de5) image3_wide_small_pane

0xc8b8,	// (0x00093df1) main_video3_pane_g1_ParamLimits

0xc8b8,	// (0x00093df1) main_video3_pane_g1

0xc8d4,	// (0x00093e0d) main_video3_pane_g2_ParamLimits

0xc8d4,	// (0x00093e0d) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x00096de3) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x00096de3) main_video3_pane_g

0xc8f0,	// (0x00093e29) main_video3_pane_t1_ParamLimits

0xc8f0,	// (0x00093e29) main_video3_pane_t1

0xc91b,	// (0x00093e54) main_video3_pane_t2_ParamLimits

0xc91b,	// (0x00093e54) main_video3_pane_t2

0xc948,	// (0x00093e81) main_video3_pane_t3_ParamLimits

0xc948,	// (0x00093e81) main_video3_pane_t3

0x0002,

0xf8af,	// (0x00096de8) main_video3_pane_t_ParamLimits

0xf8af,	// (0x00096de8) main_video3_pane_t

0xc975,	// (0x00093eae) cams_zoom_vslider_pane_g1

0xc97e,	// (0x00093eb7) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x00096def) cams_zoom_vslider_pane_g

0xc986,	// (0x00093ebf) small_slider_vertical_pane

0x0f18,	// (0x00088451) small_slider_vertical_pane_g1

0x0f18,	// (0x00088451) small_slider_vertical_pane_g2

0xc98e,	// (0x00093ec7) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x00096df4) small_slider_vertical_pane_g

0x024d,	// (0x00087786) main_hwr_training_pane

0xc997,	// (0x00093ed0) hwr_training_instruct_pane_ParamLimits

0xc997,	// (0x00093ed0) hwr_training_instruct_pane

0x7455,	// (0x0008e98e) hwr_training_navi_pane_ParamLimits

0x7455,	// (0x0008e98e) hwr_training_navi_pane

0x7474,	// (0x0008e9ad) hwr_training_write_pane_ParamLimits

0x7474,	// (0x0008e9ad) hwr_training_write_pane

0x024d,	// (0x00087786) bg_frame_shadow_pane

0xc9ce,	// (0x00093f07) hwr_training_write_pane_g1

0xc9d6,	// (0x00093f0f) hwr_training_write_pane_g2

0xc9de,	// (0x00093f17) hwr_training_write_pane_g3

0xc9e6,	// (0x00093f1f) hwr_training_write_pane_g4

0xc9ee,	// (0x00093f27) hwr_training_write_pane_g5

0xc9f6,	// (0x00093f2f) hwr_training_write_pane_g6

0xc9fe,	// (0x00093f37) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x00096dfb) hwr_training_write_pane_g

0xed3a,	// (0x00096273) hwr_training_navi_pane_g1_ParamLimits

0xed3a,	// (0x00096273) hwr_training_navi_pane_g1

0xed4c,	// (0x00096285) hwr_training_navi_pane_g2_ParamLimits

0xed4c,	// (0x00096285) hwr_training_navi_pane_g2

0xed5e,	// (0x00096297) hwr_training_navi_pane_g3_ParamLimits

0xed5e,	// (0x00096297) hwr_training_navi_pane_g3

0xed6e,	// (0x000962a7) hwr_training_navi_pane_g4_ParamLimits

0xed6e,	// (0x000962a7) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x00096e0a) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x00096e0a) hwr_training_navi_pane_g

0xed7b,	// (0x000962b4) hwr_training_navi_pane_t1

0x74bc,	// (0x0008e9f5) list_single_hwr_training_instruct_pane_ParamLimits

0x74bc,	// (0x0008e9f5) list_single_hwr_training_instruct_pane

0xca06,	// (0x00093f3f) list_single_hwr_training_instruct_pane_t1

0xed1a,	// (0x00096253) bg_frame_shadow_pane_g1

0xca15,	// (0x00093f4e) bg_frame_shadow_pane_g2

0xca1d,	// (0x00093f56) bg_frame_shadow_pane_g3

0xca25,	// (0x00093f5e) bg_frame_shadow_pane_g4

0xca2d,	// (0x00093f66) bg_frame_shadow_pane_g5

0xca35,	// (0x00093f6e) bg_frame_shadow_pane_g6

0xca3d,	// (0x00093f76) bg_frame_shadow_pane_g7

0x0ab2,	// (0x00087feb) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x00096e15) bg_frame_shadow_pane_g

0x024d,	// (0x00087786) main_video_tele_dialer_pane

0x74d8,	// (0x0008ea11) aid_size_cell_video_keypad_ParamLimits

0x74d8,	// (0x0008ea11) aid_size_cell_video_keypad

0x74f2,	// (0x0008ea2b) grid_video_dialer_keypad_pane_ParamLimits

0x74f2,	// (0x0008ea2b) grid_video_dialer_keypad_pane

0x7540,	// (0x0008ea79) video_down_pane_cp_ParamLimits

0x7540,	// (0x0008ea79) video_down_pane_cp

0x7574,	// (0x0008eaad) cell_video_dialer_keypad_pane_ParamLimits

0x7574,	// (0x0008eaad) cell_video_dialer_keypad_pane

0xca45,	// (0x00093f7e) bg_button_pane_cp08_ParamLimits

0xca45,	// (0x00093f7e) bg_button_pane_cp08

0x759a,	// (0x0008ead3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x759a,	// (0x0008ead3) cell_video_dialer_keypad_pane_g1

0x6c46,	// (0x0008e17f) mup3_rocker2_pane_ParamLimits

0x6c46,	// (0x0008e17f) mup3_rocker2_pane

0x0f18,	// (0x00088451) mup3_rocker2_pane_g1

0x578c,	// (0x0008ccc5) main_dialer2_pane

0x024d,	// (0x00087786) main_mp4_pane

0xed91,	// (0x000962ca) main_mp4_pane_g1_ParamLimits

0xed91,	// (0x000962ca) main_mp4_pane_g1

0xed91,	// (0x000962ca) main_mp4_pane_g2_ParamLimits

0xed91,	// (0x000962ca) main_mp4_pane_g2

0x75d5,	// (0x0008eb0e) main_mp4_pane_g3_ParamLimits

0x75d5,	// (0x0008eb0e) main_mp4_pane_g3

0xed9f,	// (0x000962d8) main_mp4_pane_g4_ParamLimits

0xed9f,	// (0x000962d8) main_mp4_pane_g4

0xedb9,	// (0x000962f2) main_mp4_pane_g5_ParamLimits

0xedb9,	// (0x000962f2) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x00096e35) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x00096e35) main_mp4_pane_g

0xeded,	// (0x00096326) main_mp4_pane_t1_ParamLimits

0xeded,	// (0x00096326) main_mp4_pane_t1

0xee49,	// (0x00096382) main_mp4_pane_t2_ParamLimits

0xee49,	// (0x00096382) main_mp4_pane_t2

0xca51,	// (0x00093f8a) main_mp4_pane_t3_ParamLimits

0xca51,	// (0x00093f8a) main_mp4_pane_t3

0xee9b,	// (0x000963d4) main_mp4_pane_t4_ParamLimits

0xee9b,	// (0x000963d4) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00096e42) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00096e42) main_mp4_pane_t

0xeedb,	// (0x00096414) mp4_progress_pane_ParamLimits

0xeedb,	// (0x00096414) mp4_progress_pane

0xef25,	// (0x0009645e) mp4_rocker_pane_ParamLimits

0xef25,	// (0x0009645e) mp4_rocker_pane

0xca79,	// (0x00093fb2) mp4_progress_pane_t1

0xca92,	// (0x00093fcb) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x00096e4b) mp4_progress_pane_t

0xcaab,	// (0x00093fe4) mup_progress_pane_cp04

0xcab7,	// (0x00093ff0) mp4_rocker_pane_g1

0x761f,	// (0x0008eb58) aid_cell_size_keypad2_ParamLimits

0x761f,	// (0x0008eb58) aid_cell_size_keypad2

0x7635,	// (0x0008eb6e) dialer2_ne_pane_ParamLimits

0x7635,	// (0x0008eb6e) dialer2_ne_pane

0x764d,	// (0x0008eb86) grid_dialer2_keypad_pane_ParamLimits

0x764d,	// (0x0008eb86) grid_dialer2_keypad_pane

0xebb9,	// (0x000960f2) bg_popup_call_pane_cp07_ParamLimits

0xebb9,	// (0x000960f2) bg_popup_call_pane_cp07

0x7669,	// (0x0008eba2) dialer2_ne_pane_t1_ParamLimits

0x7669,	// (0x0008eba2) dialer2_ne_pane_t1

0x76a9,	// (0x0008ebe2) cell_dialer2_keypad_pane_ParamLimits

0x76a9,	// (0x0008ebe2) cell_dialer2_keypad_pane

0xcad3,	// (0x0009400c) bg_button_pane_pane_cp04_ParamLimits

0xcad3,	// (0x0009400c) bg_button_pane_pane_cp04

0x76cf,	// (0x0008ec08) cell_dialer2_keypad_pane_g1_ParamLimits

0x76cf,	// (0x0008ec08) cell_dialer2_keypad_pane_g1

0x3251,	// (0x0008a78a) aid_placing_vt_set_content_ParamLimits

0x3251,	// (0x0008a78a) aid_placing_vt_set_content

0x3271,	// (0x0008a7aa) aid_placing_vt_set_title_ParamLimits

0x3271,	// (0x0008a7aa) aid_placing_vt_set_title

0x024d,	// (0x00087786) main_image3_pane

0x7795,	// (0x0008ecce) area_side_right_pane_cp01_ParamLimits

0x7795,	// (0x0008ecce) area_side_right_pane_cp01

0xed91,	// (0x000962ca) main_image3_pane_g1_ParamLimits

0xed91,	// (0x000962ca) main_image3_pane_g1

0x77ae,	// (0x0008ece7) main_image3_pane_g2_ParamLimits

0x77ae,	// (0x0008ece7) main_image3_pane_g2

0x77d6,	// (0x0008ed0f) main_image3_pane_g3_ParamLimits

0x77d6,	// (0x0008ed0f) main_image3_pane_g3

0x7800,	// (0x0008ed39) main_image3_pane_g4_ParamLimits

0x7800,	// (0x0008ed39) main_image3_pane_g4

0x0003,

0xf921,	// (0x00096e5a) main_image3_pane_g_ParamLimits

0xf921,	// (0x00096e5a) main_image3_pane_g

0x782a,	// (0x0008ed63) main_image3_pane_t1_ParamLimits

0x782a,	// (0x0008ed63) main_image3_pane_t1

0x7882,	// (0x0008edbb) main_image3_pane_t2_ParamLimits

0x7882,	// (0x0008edbb) main_image3_pane_t2

0x78d4,	// (0x0008ee0d) main_image3_pane_t3_ParamLimits

0x78d4,	// (0x0008ee0d) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00096e63) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00096e63) main_image3_pane_t

0xabd7,	// (0x00092110) grid_sctrl_middle_pane_cp01_ParamLimits

0xabd7,	// (0x00092110) grid_sctrl_middle_pane_cp01

0x795c,	// (0x0008ee95) cell_sctrl_middle_pane_cp01_ParamLimits

0x795c,	// (0x0008ee95) cell_sctrl_middle_pane_cp01

0x7979,	// (0x0008eeb2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7979,	// (0x0008eeb2) cell_sctrl_middle_pane_cp01_g1

0x024d,	// (0x00087786) main_call4_pane

0x798e,	// (0x0008eec7) aid_size_button_call4_ParamLimits

0x798e,	// (0x0008eec7) aid_size_button_call4

0x79c1,	// (0x0008eefa) call4_windows_pane_ParamLimits

0x79c1,	// (0x0008eefa) call4_windows_pane

0x79e3,	// (0x0008ef1c) grid_call4_button_pane_ParamLimits

0x79e3,	// (0x0008ef1c) grid_call4_button_pane

0xcadf,	// (0x00094018) call4_windows_conf_pane

0xcafa,	// (0x00094033) popup_call4_audio_first_window_ParamLimits

0xcafa,	// (0x00094033) popup_call4_audio_first_window

0xcb48,	// (0x00094081) popup_call4_audio_second_window_ParamLimits

0xcb48,	// (0x00094081) popup_call4_audio_second_window

0xcb5e,	// (0x00094097) popup_call4_audio_wait_window_ParamLimits

0xcb5e,	// (0x00094097) popup_call4_audio_wait_window

0x7a0e,	// (0x0008ef47) cell_call4_button_pane_ParamLimits

0x7a0e,	// (0x0008ef47) cell_call4_button_pane

0x7a35,	// (0x0008ef6e) bg_button_pane_cp09_ParamLimits

0x7a35,	// (0x0008ef6e) bg_button_pane_cp09

0x7a41,	// (0x0008ef7a) cell_call4_button_pane_g1_ParamLimits

0x7a41,	// (0x0008ef7a) cell_call4_button_pane_g1

0x7a67,	// (0x0008efa0) cell_call4_button_pane_t1_ParamLimits

0x7a67,	// (0x0008efa0) cell_call4_button_pane_t1

0xcba6,	// (0x000940df) popup_call4_audio_conf_window_ParamLimits

0xcba6,	// (0x000940df) popup_call4_audio_conf_window

0x6ca8,	// (0x0008e1e1) mup3_progress_pane_t1_ParamLimits

0x6cbf,	// (0x0008e1f8) mup3_progress_pane_t2_ParamLimits

0x11c3,	// (0x000886fc) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00096d3c) mup3_progress_pane_t_ParamLimits

0x11da,	// (0x00088713) mup_progress_pane_cp03_ParamLimits

0x7297,	// (0x0008e7d0) mup3_control_keys_pane_g4_copy1

0xef09,	// (0x00096442) mp4_rocker2_pane_ParamLimits

0xef09,	// (0x00096442) mp4_rocker2_pane

0xcbc0,	// (0x000940f9) mp4_rocker2_pane_g1

0xcbc8,	// (0x00094101) mp4_rocker2_pane_g2

0xef7b,	// (0x000964b4) mp4_rocker2_pane_g3

0xef83,	// (0x000964bc) mp4_rocker2_pane_g4

0xef8b,	// (0x000964c4) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x00096e6c) mp4_rocker2_pane_g

0x024d,	// (0x00087786) main_camera4_pane

0x024d,	// (0x00087786) main_video4_pane

0x750e,	// (0x0008ea47) main_video_tele_dialer_pane_t1_ParamLimits

0x750e,	// (0x0008ea47) main_video_tele_dialer_pane_t1

0x7527,	// (0x0008ea60) main_video_tele_dialer_pane_t2_ParamLimits

0x7527,	// (0x0008ea60) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x00096e26) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x00096e26) main_video_tele_dialer_pane_t

0x7aa5,	// (0x0008efde) cam4_autofocus_pane_ParamLimits

0x7aa5,	// (0x0008efde) cam4_autofocus_pane

0x7abb,	// (0x0008eff4) cam4_image_uncrop_pane_ParamLimits

0x7abb,	// (0x0008eff4) cam4_image_uncrop_pane

0x7ad4,	// (0x0008f00d) cam4_indicators_pane_ParamLimits

0x7ad4,	// (0x0008f00d) cam4_indicators_pane

0x7b03,	// (0x0008f03c) main_camera4_pane_g1_ParamLimits

0x7b03,	// (0x0008f03c) main_camera4_pane_g1

0x7b0f,	// (0x0008f048) main_camera4_pane_g2_ParamLimits

0x7b0f,	// (0x0008f048) main_camera4_pane_g2

0x7b1b,	// (0x0008f054) main_camera4_pane_g3_ParamLimits

0x7b1b,	// (0x0008f054) main_camera4_pane_g3

0x7b27,	// (0x0008f060) main_camera4_pane_g4_ParamLimits

0x7b27,	// (0x0008f060) main_camera4_pane_g4

0x7b33,	// (0x0008f06c) main_camera4_pane_g5_ParamLimits

0x7b33,	// (0x0008f06c) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00096e77) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00096e77) main_camera4_pane_g

0x7b50,	// (0x0008f089) main_camera4_pane_t1_ParamLimits

0x7b50,	// (0x0008f089) main_camera4_pane_t1

0x7b88,	// (0x0008f0c1) bg_tb_trans_pane_cp06

0x7b96,	// (0x0008f0cf) cam4_indicators_pane_g1

0x7ba3,	// (0x0008f0dc) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00096e89) cam4_indicators_pane_g

0x7bbb,	// (0x0008f0f4) cam4_indicators_pane_t1

0x7be5,	// (0x0008f11e) main_video4_pane_g1_ParamLimits

0x7be5,	// (0x0008f11e) main_video4_pane_g1

0x7bf7,	// (0x0008f130) main_video4_pane_g2_ParamLimits

0x7bf7,	// (0x0008f130) main_video4_pane_g2

0x7c0b,	// (0x0008f144) main_video4_pane_g3_ParamLimits

0x7c0b,	// (0x0008f144) main_video4_pane_g3

0x7c1b,	// (0x0008f154) main_video4_pane_g4_ParamLimits

0x7c1b,	// (0x0008f154) main_video4_pane_g4

0x0004,

0xf957,	// (0x00096e90) main_video4_pane_g_ParamLimits

0xf957,	// (0x00096e90) main_video4_pane_g

0x7c3b,	// (0x0008f174) vid4_indicators_pane_ParamLimits

0x7c3b,	// (0x0008f174) vid4_indicators_pane

0x7c6b,	// (0x0008f1a4) video4_image_uncrop_cif_pane_ParamLimits

0x7c6b,	// (0x0008f1a4) video4_image_uncrop_cif_pane

0x7c85,	// (0x0008f1be) video4_image_uncrop_nhd_pane_ParamLimits

0x7c85,	// (0x0008f1be) video4_image_uncrop_nhd_pane

0x7abb,	// (0x0008eff4) video4_image_uncrop_vga_pane_ParamLimits

0x7abb,	// (0x0008eff4) video4_image_uncrop_vga_pane

0xefb7,	// (0x000964f0) bg_tb_trans_pane_cp07

0x7b96,	// (0x0008f0cf) vid4_indicators_pane_g1

0x7c9b,	// (0x0008f1d4) vid4_indicators_pane_g2

0x7ca8,	// (0x0008f1e1) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x00096e9b) vid4_indicators_pane_g

0x7cc1,	// (0x0008f1fa) vid4_indicators_pane_t1

0x7cd3,	// (0x0008f20c) cam4_autofocus_pane_g1

0x7cdb,	// (0x0008f214) cam4_autofocus_pane_g2

0x7ce3,	// (0x0008f21c) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00096ea6) cam4_autofocus_pane_g

0x7ceb,	// (0x0008f224) cam4_autofocus_pane_g3_copy1

0x7558,	// (0x0008ea91) video_down_pane_cp_t1

0x7566,	// (0x0008ea9f) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x00096e2b) video_down_pane_cp_t

0xabd7,	// (0x00092110) popup_vitu2_window_ParamLimits

0xabd7,	// (0x00092110) popup_vitu2_window

0x7cf3,	// (0x0008f22c) aid_size_cell2_itu2_ParamLimits

0x7cf3,	// (0x0008f22c) aid_size_cell2_itu2

0x7d19,	// (0x0008f252) aid_size_cell_itu2_ParamLimits

0x7d19,	// (0x0008f252) aid_size_cell_itu2

0x7d77,	// (0x0008f2b0) bg_popup_window_pane_cp09_ParamLimits

0x7d77,	// (0x0008f2b0) bg_popup_window_pane_cp09

0x7d85,	// (0x0008f2be) field_vitu2_entry_pane_ParamLimits

0x7d85,	// (0x0008f2be) field_vitu2_entry_pane

0x7dad,	// (0x0008f2e6) grid_vitu2_function_pane_ParamLimits

0x7dad,	// (0x0008f2e6) grid_vitu2_function_pane

0x7dfe,	// (0x0008f337) grid_vitu2_itu_pane_ParamLimits

0x7dfe,	// (0x0008f337) grid_vitu2_itu_pane

0x7e89,	// (0x0008f3c2) cell_vitu2_itu_pane_ParamLimits

0x7e89,	// (0x0008f3c2) cell_vitu2_itu_pane

0x7eaf,	// (0x0008f3e8) cell_vitu2_function_pane_ParamLimits

0x7eaf,	// (0x0008f3e8) cell_vitu2_function_pane

0xcbd0,	// (0x00094109) bg_popup_call_pane_cp08_ParamLimits

0xcbd0,	// (0x00094109) bg_popup_call_pane_cp08

0xcbe9,	// (0x00094122) field_vitu2_entry_pane_g1

0xcbf5,	// (0x0009412e) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x00096ead) field_vitu2_entry_pane_g

0x7ef3,	// (0x0008f42c) field_vitu2_entry_pane_t1_ParamLimits

0x7ef3,	// (0x0008f42c) field_vitu2_entry_pane_t1

0xcc0f,	// (0x00094148) field_vitu2_entry_pane_t2_ParamLimits

0xcc0f,	// (0x00094148) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00096eb4) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00096eb4) field_vitu2_entry_pane_t

0x7f10,	// (0x0008f449) bg_button_pane_cp010_ParamLimits

0x7f10,	// (0x0008f449) bg_button_pane_cp010

0x7f1e,	// (0x0008f457) cell_vitu2_itu_pane_g1

0x7f3c,	// (0x0008f475) cell_vitu2_itu_pane_t1_ParamLimits

0x7f3c,	// (0x0008f475) cell_vitu2_itu_pane_t1

0x21fe,	// (0x00089737) cell_vitu2_itu_pane_t2_ParamLimits

0x21fe,	// (0x00089737) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x00096ebe) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x00096ebe) cell_vitu2_itu_pane_t

0xefcf,	// (0x00096508) bg_button_pane_cp011

0x7fa2,	// (0x0008f4db) cell_vitu2_function_pane_g1

0x024d,	// (0x00087786) main_myfav_hc_pane

0x7924,	// (0x0008ee5d) popup_image3_note_pane_ParamLimits

0x7924,	// (0x0008ee5d) popup_image3_note_pane

0x7940,	// (0x0008ee79) popup_image3_tool_bar_pane_ParamLimits

0x7940,	// (0x0008ee79) popup_image3_tool_bar_pane

0x2282,	// (0x000897bb) cell_vitu2_itu_pane_t3_ParamLimits

0x2282,	// (0x000897bb) cell_vitu2_itu_pane_t3

0x024d,	// (0x00087786) bg_popup_trans_pane

0xcc34,	// (0x0009416d) grid_image3_tool_bar_pane

0xcc3e,	// (0x00094177) bg_popup_trans_pane_g1

0x0df9,	// (0x00088332) bg_popup_trans_pane_g2

0xcc46,	// (0x0009417f) bg_popup_trans_pane_g3

0xcc4e,	// (0x00094187) bg_popup_trans_pane_g4

0xcc56,	// (0x0009418f) bg_popup_trans_pane_g5

0xcc5e,	// (0x00094197) bg_popup_trans_pane_g6

0xcc66,	// (0x0009419f) bg_popup_trans_pane_g7

0xcc6e,	// (0x000941a7) bg_popup_trans_pane_g8

0x0dd9,	// (0x00088312) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00096ec5) bg_popup_trans_pane_g

0xcc76,	// (0x000941af) cell_image3_tool_bar_pane_ParamLimits

0xcc76,	// (0x000941af) cell_image3_tool_bar_pane

0x0f18,	// (0x00088451) cell_image3_tool_bar_pane_g1

0x024d,	// (0x00087786) bg_popup_trans_pane_cp1

0xcc8c,	// (0x000941c5) popup_image3_note_pane_t1

0xcc9a,	// (0x000941d3) popup_image3_note_pane_t2

0xcca8,	// (0x000941e1) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00096ed8) popup_image3_note_pane_t

0xccb8,	// (0x000941f1) popup_image3_note_pane_t3_copy1

0x7fb6,	// (0x0008f4ef) bg_myfav_hc_instruction_pane_ParamLimits

0x7fb6,	// (0x0008f4ef) bg_myfav_hc_instruction_pane

0x7fce,	// (0x0008f507) cell_myfav_contact_pane_ParamLimits

0x7fce,	// (0x0008f507) cell_myfav_contact_pane

0x7fea,	// (0x0008f523) cell_myfav_contact_pane_cp1_ParamLimits

0x7fea,	// (0x0008f523) cell_myfav_contact_pane_cp1

0x8002,	// (0x0008f53b) cell_myfav_contact_pane_cp2_ParamLimits

0x8002,	// (0x0008f53b) cell_myfav_contact_pane_cp2

0x801a,	// (0x0008f553) cell_myfav_contact_pane_cp3_ParamLimits

0x801a,	// (0x0008f553) cell_myfav_contact_pane_cp3

0x8031,	// (0x0008f56a) cell_myfav_contact_pane_cp4_ParamLimits

0x8031,	// (0x0008f56a) cell_myfav_contact_pane_cp4

0x8049,	// (0x0008f582) cell_myfav_contact_pane_cp5_ParamLimits

0x8049,	// (0x0008f582) cell_myfav_contact_pane_cp5

0x805d,	// (0x0008f596) cell_myfav_contact_pane_cp6_ParamLimits

0x805d,	// (0x0008f596) cell_myfav_contact_pane_cp6

0x8073,	// (0x0008f5ac) cell_myfav_contact_pane_cp7_ParamLimits

0x8073,	// (0x0008f5ac) cell_myfav_contact_pane_cp7

0xccc6,	// (0x000941ff) listscroll_gen_pane_cp05

0x808b,	// (0x0008f5c4) main_myfav_hc_pane_g1_ParamLimits

0x808b,	// (0x0008f5c4) main_myfav_hc_pane_g1

0x80a5,	// (0x0008f5de) main_myfav_hc_pane_g2_ParamLimits

0x80a5,	// (0x0008f5de) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x00096edf) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x00096edf) main_myfav_hc_pane_g

0x80d9,	// (0x0008f612) main_myfav_hc_pane_t1_ParamLimits

0x80d9,	// (0x0008f612) main_myfav_hc_pane_t1

0xcccf,	// (0x00094208) main_myfav_hc_pane_t2_ParamLimits

0xcccf,	// (0x00094208) main_myfav_hc_pane_t2

0xcce1,	// (0x0009421a) main_myfav_hc_pane_t3_ParamLimits

0xcce1,	// (0x0009421a) main_myfav_hc_pane_t3

0x80f0,	// (0x0008f629) main_myfav_hc_pane_t4_ParamLimits

0x80f0,	// (0x0008f629) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x00096ee6) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x00096ee6) main_myfav_hc_pane_t

0x0f18,	// (0x00088451) bg_myfav_hc_instruction_pane_g1

0xccf3,	// (0x0009422c) cell_myfav_contact_pane_g1_ParamLimits

0xccf3,	// (0x0009422c) cell_myfav_contact_pane_g1

0xccf3,	// (0x0009422c) cell_myfav_contact_pane_g2_ParamLimits

0xccf3,	// (0x0009422c) cell_myfav_contact_pane_g2

0xccff,	// (0x00094238) cell_myfav_contact_pane_g3_ParamLimits

0xccff,	// (0x00094238) cell_myfav_contact_pane_g3

0x11ad,	// (0x000886e6) cell_myfav_contact_pane_g4_ParamLimits

0x11ad,	// (0x000886e6) cell_myfav_contact_pane_g4

0xcd0c,	// (0x00094245) cell_myfav_contact_pane_g5_ParamLimits

0xcd0c,	// (0x00094245) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x00096ef1) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x00096ef1) cell_myfav_contact_pane_g

0x80bf,	// (0x0008f5f8) main_myfav_hc_pane_g3_ParamLimits

0x80bf,	// (0x0008f5f8) main_myfav_hc_pane_g3

0x245b,	// (0x00089994) popup_adpt_find_window

0x811a,	// (0x0008f653) afind_page_pane_ParamLimits

0x811a,	// (0x0008f653) afind_page_pane

0x812f,	// (0x0008f668) aid_size_cell_afind_ParamLimits

0x812f,	// (0x0008f668) aid_size_cell_afind

0x814d,	// (0x0008f686) bg_popup_sub_pane_cp09_ParamLimits

0x814d,	// (0x0008f686) bg_popup_sub_pane_cp09

0x815a,	// (0x0008f693) find_pane_cp01_ParamLimits

0x815a,	// (0x0008f693) find_pane_cp01

0xcd18,	// (0x00094251) grid_afind_control_pane_ParamLimits

0xcd18,	// (0x00094251) grid_afind_control_pane

0x8167,	// (0x0008f6a0) grid_afind_pane_ParamLimits

0x8167,	// (0x0008f6a0) grid_afind_pane

0x8189,	// (0x0008f6c2) cell_afind_pane_ParamLimits

0x8189,	// (0x0008f6c2) cell_afind_pane

0x0f18,	// (0x00088451) afind_page_pane_g1

0x81f0,	// (0x0008f729) afind_page_pane_g2

0x81f9,	// (0x0008f732) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x00096efc) afind_page_pane_g

0x8202,	// (0x0008f73b) afind_page_pane_t1

0xcd2c,	// (0x00094265) cell_afind_grid_control_pane_ParamLimits

0xcd2c,	// (0x00094265) cell_afind_grid_control_pane

0xcad3,	// (0x0009400c) bg_button_pane_cp69_ParamLimits

0xcad3,	// (0x0009400c) bg_button_pane_cp69

0x8222,	// (0x0008f75b) cell_afind_pane_g1_ParamLimits

0x8222,	// (0x0008f75b) cell_afind_pane_g1

0x822f,	// (0x0008f768) cell_afind_pane_t1_ParamLimits

0x822f,	// (0x0008f768) cell_afind_pane_t1

0x0be8,	// (0x00088121) bg_button_pane_cp72

0xcd3b,	// (0x00094274) cell_afind_grid_control_pane_g1

0x522c,	// (0x0008c765) aid_image_placing_area_ParamLimits

0x522c,	// (0x0008c765) aid_image_placing_area

0xc795,	// (0x00093cce) field_vitu_entry_pane_g1_ParamLimits

0xc795,	// (0x00093cce) field_vitu_entry_pane_g1

0xc7a1,	// (0x00093cda) field_vitu_entry_pane_g2_ParamLimits

0xc7a1,	// (0x00093cda) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00096db6) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00096db6) field_vitu_entry_pane_g

0x7366,	// (0x0008e89f) cell_vitu_itu_pane_g1_ParamLimits

0x73a8,	// (0x0008e8e1) cell_vitu_itu_pane_t3_ParamLimits

0x73a8,	// (0x0008e8e1) cell_vitu_itu_pane_t3

0xca79,	// (0x00093fb2) mp4_progress_pane_t1_ParamLimits

0xca92,	// (0x00093fcb) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x00096e4b) mp4_progress_pane_t_ParamLimits

0xcaab,	// (0x00093fe4) mup_progress_pane_cp04_ParamLimits

0x8104,	// (0x0008f63d) main_myfav_hc_pane_t5_ParamLimits

0x8104,	// (0x0008f63d) main_myfav_hc_pane_t5

0x232a,	// (0x00089863) aid_zoom_text_primary

0x245b,	// (0x00089994) popup_adpt_find_window_ParamLimits

0xabd7,	// (0x00092110) main_cam_set_pane

0x7aed,	// (0x0008f026) cam4_zoom_pane_ParamLimits

0x7aed,	// (0x0008f026) cam4_zoom_pane

0x8241,	// (0x0008f77a) main_cam_set_pane_g1_ParamLimits

0x8241,	// (0x0008f77a) main_cam_set_pane_g1

0x824f,	// (0x0008f788) main_cam_set_pane_g2_ParamLimits

0x824f,	// (0x0008f788) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x00096f03) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x00096f03) main_cam_set_pane_g

0x8272,	// (0x0008f7ab) main_cam_set_pane_t1_ParamLimits

0x8272,	// (0x0008f7ab) main_cam_set_pane_t1

0x828d,	// (0x0008f7c6) main_cset_listscroll_pane_ParamLimits

0x828d,	// (0x0008f7c6) main_cset_listscroll_pane

0x82b1,	// (0x0008f7ea) main_cset_slider_pane_ParamLimits

0x82b1,	// (0x0008f7ea) main_cset_slider_pane

0xcd4c,	// (0x00094285) main_cset_list_pane_ParamLimits

0xcd4c,	// (0x00094285) main_cset_list_pane

0xcd5c,	// (0x00094295) scroll_pane_cp028

0x82db,	// (0x0008f814) aid_area_touch_slider

0x82f7,	// (0x0008f830) cset_slider_pane

0x8321,	// (0x0008f85a) main_cset_slider_pane_g1

0x8336,	// (0x0008f86f) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x00096f08) main_cset_slider_pane_g

0xcd95,	// (0x000942ce) main_cset_slider_pane_t1

0x83f8,	// (0x0008f931) main_cset_slider_pane_t2

0x8412,	// (0x0008f94b) main_cset_slider_pane_t3

0x842c,	// (0x0008f965) main_cset_slider_pane_t4

0x8446,	// (0x0008f97f) main_cset_slider_pane_t5

0x8464,	// (0x0008f99d) main_cset_slider_pane_t6

0x847b,	// (0x0008f9b4) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x00096f2d) main_cset_slider_pane_t

0x8587,	// (0x0008fac0) cset_list_set_pane_ParamLimits

0x8587,	// (0x0008fac0) cset_list_set_pane

0x859b,	// (0x0008fad4) aid_position_infowindow_above

0x85a3,	// (0x0008fadc) aid_position_infowindow_below

0xce35,	// (0x0009436e) cset_list_set_pane_g1_ParamLimits

0xce35,	// (0x0009436e) cset_list_set_pane_g1

0x85ab,	// (0x0008fae4) cset_list_set_pane_g3_ParamLimits

0x85ab,	// (0x0008fae4) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x00096f4c) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x00096f4c) cset_list_set_pane_g

0x85ba,	// (0x0008faf3) cset_list_set_pane_t1_ParamLimits

0x85ba,	// (0x0008faf3) cset_list_set_pane_t1

0xabd7,	// (0x00092110) list_highlight_pane_cp021_ParamLimits

0xabd7,	// (0x00092110) list_highlight_pane_cp021

0xb10a,	// (0x00092643) cset_slider_pane_g1

0xb11c,	// (0x00092655) cset_slider_pane_g2

0xb113,	// (0x0009264c) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00096f51) cset_slider_pane_g

0xefdd,	// (0x00096516) aid_area_touch_cam4_zoom

0xefe5,	// (0x0009651e) cam4_zoom_cont_pane

0xefed,	// (0x00096526) cam4_zoom_pane_g1

0xeff5,	// (0x0009652e) cam4_zoom_pane_g2

0x85cf,	// (0x0008fb08) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00096f58) cam4_zoom_pane_g

0xeffd,	// (0x00096536) cam4_zoom_cont_pane_g1

0xf006,	// (0x0009653f) cam4_zoom_cont_pane_g2

0xf00f,	// (0x00096548) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x00096f5f) cam4_zoom_cont_pane_g

0x79ac,	// (0x0008eee5) call4_image_pane_ParamLimits

0x79ac,	// (0x0008eee5) call4_image_pane

0xcadf,	// (0x00094018) call4_windows_conf_pane_ParamLimits

0xcb26,	// (0x0009405f) popup_call4_audio_in_window_ParamLimits

0xcb26,	// (0x0009405f) popup_call4_audio_in_window

0x024d,	// (0x00087786) bg_popup_call2_act_pane_cp02

0xcb9e,	// (0x000940d7) call4_list_conf_pane

0x0f18,	// (0x00088451) call4_image_pane_g1

0x0f18,	// (0x00088451) call4_image_pane_g2

0x0001,

0xf743,	// (0x00096c7c) call4_image_pane_g

0xce41,	// (0x0009437a) list_single_graphic_popup_conf4_pane_ParamLimits

0xce41,	// (0x0009437a) list_single_graphic_popup_conf4_pane

0x024d,	// (0x00087786) list_highlight_pane_cp022

0xce56,	// (0x0009438f) list_single_graphic_popup_conf4_pane_g1

0xade4,	// (0x0009231d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00096f66) list_single_graphic_popup_conf4_pane_g

0xce5e,	// (0x00094397) list_single_graphic_popup_conf4_pane_t1

0x3345,	// (0x0008a87e) popup_vtel_slider_window_ParamLimits

0x3345,	// (0x0008a87e) popup_vtel_slider_window

0xcac1,	// (0x00093ffa) dialer2_ne_pane_t2_ParamLimits

0xcac1,	// (0x00093ffa) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x00096e50) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x00096e50) dialer2_ne_pane_t

0xebb9,	// (0x000960f2) bg_popup_sub_pane_cp010_ParamLimits

0xebb9,	// (0x000960f2) bg_popup_sub_pane_cp010

0x85d7,	// (0x0008fb10) popup_vtel_slider_window_g1_ParamLimits

0x85d7,	// (0x0008fb10) popup_vtel_slider_window_g1

0x85ea,	// (0x0008fb23) popup_vtel_slider_window_g2_ParamLimits

0x85ea,	// (0x0008fb23) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x00096f6b) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x00096f6b) popup_vtel_slider_window_g

0x8640,	// (0x0008fb79) vtel_slider_pane_ParamLimits

0x8640,	// (0x0008fb79) vtel_slider_pane

0x8662,	// (0x0008fb9b) vtel_slider_pane_g1_ParamLimits

0x8662,	// (0x0008fb9b) vtel_slider_pane_g1

0x8676,	// (0x0008fbaf) vtel_slider_pane_g2_ParamLimits

0x8676,	// (0x0008fbaf) vtel_slider_pane_g2

0x868e,	// (0x0008fbc7) vtel_slider_pane_g3_ParamLimits

0x868e,	// (0x0008fbc7) vtel_slider_pane_g3

0x8662,	// (0x0008fb9b) vtel_slider_pane_g4_ParamLimits

0x8662,	// (0x0008fb9b) vtel_slider_pane_g4

0x86a4,	// (0x0008fbdd) vtel_slider_pane_g5_ParamLimits

0x86a4,	// (0x0008fbdd) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00096f74) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00096f74) vtel_slider_pane_g

0x024d,	// (0x00087786) main_gallery2_pane

0x7d45,	// (0x0008f27e) aid_size_row_itut2_dropdow_list_ParamLimits

0x7d45,	// (0x0008f27e) aid_size_row_itut2_dropdow_list

0x7dd5,	// (0x0008f30e) grid_vitu2_function_top_pane_ParamLimits

0x7dd5,	// (0x0008f30e) grid_vitu2_function_top_pane

0x7e34,	// (0x0008f36d) popup_vitu2_dropdown_list_window_ParamLimits

0x7e34,	// (0x0008f36d) popup_vitu2_dropdown_list_window

0x7e5d,	// (0x0008f396) popup_vitu2_match_list_window

0x86ba,	// (0x0008fbf3) cell_vitu2_function_top_pane_ParamLimits

0x86ba,	// (0x0008fbf3) cell_vitu2_function_top_pane

0x86da,	// (0x0008fc13) cell_vitu2_function_top_pane_cp01_ParamLimits

0x86da,	// (0x0008fc13) cell_vitu2_function_top_pane_cp01

0x86f8,	// (0x0008fc31) cell_vitu2_function_top_wide_pane_ParamLimits

0x86f8,	// (0x0008fc31) cell_vitu2_function_top_wide_pane

0xefcf,	// (0x00096508) bg_button_pane_cp012

0x8716,	// (0x0008fc4f) cell_vitu2_function_top_pane_g1

0xf018,	// (0x00096551) bg_button_pane_cp013_ParamLimits

0xf018,	// (0x00096551) bg_button_pane_cp013

0x872a,	// (0x0008fc63) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x872a,	// (0x0008fc63) cell_vitu2_function_top_wide_pane_g1

0xefcf,	// (0x00096508) bg_popup_sub_pane_cp20

0x8742,	// (0x0008fc7b) list_vitu2_match_list_pane

0xcc3e,	// (0x00094177) bg_popup_sub_pane_cp20_g1

0xcc46,	// (0x0009417f) bg_popup_sub_pane_cp20_g2

0x0df9,	// (0x00088332) bg_popup_sub_pane_cp20_g3

0xcc4e,	// (0x00094187) bg_popup_sub_pane_cp20_g4

0x0dd9,	// (0x00088312) bg_popup_sub_pane_cp20_g5

0xce7a,	// (0x000943b3) bg_popup_sub_pane_cp20_g6

0xcc5e,	// (0x00094197) bg_popup_sub_pane_cp20_g7

0xcc66,	// (0x0009419f) bg_popup_sub_pane_cp20_g8

0xcc6e,	// (0x000941a7) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x00096f7f) bg_popup_sub_pane_cp20_g

0xf034,	// (0x0009656d) list_vitu2_match_list_item_pane_ParamLimits

0xf034,	// (0x0009656d) list_vitu2_match_list_item_pane

0xf046,	// (0x0009657f) list_vitu2_match_list_item_pane_t1

0xabed,	// (0x00092126) bg_popup_sub_pane_cp21

0xf054,	// (0x0009658d) grid_vitu2_dropdown_list_pane

0x878c,	// (0x0008fcc5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x878c,	// (0x0008fcc5) cell_vitu2_dropdown_list_char_pane

0x87af,	// (0x0008fce8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x87af,	// (0x0008fce8) cell_vitu2_dropdown_list_ctrl_pane

0xce9a,	// (0x000943d3) cell_vitu2_dropdown_list_char_pane_g1

0xcea3,	// (0x000943dc) cell_vitu2_dropdown_list_char_pane_g2

0xceac,	// (0x000943e5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x00096f9c) cell_vitu2_dropdown_list_char_pane_g

0x87dd,	// (0x0008fd16) cell_vitu2_dropdown_list_char_pane_t1

0x87eb,	// (0x0008fd24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x87eb,	// (0x0008fd24) cell_vitu2_dropdown_list_ctrl_pane_g1

0x87fb,	// (0x0008fd34) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x87fb,	// (0x0008fd34) cell_vitu2_dropdown_list_ctrl_pane_g2

0x880c,	// (0x0008fd45) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x880c,	// (0x0008fd45) cell_vitu2_dropdown_list_ctrl_pane_g3

0x881c,	// (0x0008fd55) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x881c,	// (0x0008fd55) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf05c,	// (0x00096595) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf05c,	// (0x00096595) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00096fa3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00096fa3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8838,	// (0x0008fd71) aid_size_cell_gallery2_ParamLimits

0x8838,	// (0x0008fd71) aid_size_cell_gallery2

0x884e,	// (0x0008fd87) grid_gallery2_pane_ParamLimits

0x884e,	// (0x0008fd87) grid_gallery2_pane

0x8862,	// (0x0008fd9b) scroll_pane_cp029_ParamLimits

0x8862,	// (0x0008fd9b) scroll_pane_cp029

0x886e,	// (0x0008fda7) cell_gallery2_pane_ParamLimits

0x886e,	// (0x0008fda7) cell_gallery2_pane

0xceb5,	// (0x000943ee) cell_gallery2_pane_g2

0x88a8,	// (0x0008fde1) cell_gallery2_pane_g3

0xcebf,	// (0x000943f8) cell_gallery2_pane_g4

0xcec7,	// (0x00094400) cell_gallery2_pane_g5

0xafb2,	// (0x000924eb) grid_highlight_pane_cp10

0x7e5d,	// (0x0008f396) popup_vitu2_match_list_window_ParamLimits

0x7e74,	// (0x0008f3ad) popup_vitu2_query_window_ParamLimits

0x7e74,	// (0x0008f3ad) popup_vitu2_query_window

0xabed,	// (0x00092126) bg_vitu2_candi_button_pane

0xce9a,	// (0x000943d3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcea3,	// (0x000943dc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xceac,	// (0x000943e5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x88b0,	// (0x0008fde9) bg_button_pane_cp015

0x88ba,	// (0x0008fdf3) bg_button_pane_cp016

0x88c4,	// (0x0008fdfd) bg_button_pane_cp017

0xabd7,	// (0x00092110) bg_popup_sub_pane_cp22

0xcecf,	// (0x00094408) popup_vitu2_query_window_g1

0x88ec,	// (0x0008fe25) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x00096fae) popup_vitu2_query_window_g

0x88fa,	// (0x0008fe33) popup_vitu2_query_window_t1_ParamLimits

0x88fa,	// (0x0008fe33) popup_vitu2_query_window_t1

0x8922,	// (0x0008fe5b) popup_vitu2_query_window_t2_ParamLimits

0x8922,	// (0x0008fe5b) popup_vitu2_query_window_t2

0x8934,	// (0x0008fe6d) popup_vitu2_query_window_t3_ParamLimits

0x8934,	// (0x0008fe6d) popup_vitu2_query_window_t3

0x895c,	// (0x0008fe95) popup_vitu2_query_window_t4_ParamLimits

0x895c,	// (0x0008fe95) popup_vitu2_query_window_t4

0x8970,	// (0x0008fea9) popup_vitu2_query_window_t5_ParamLimits

0x8970,	// (0x0008fea9) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00096fb3) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00096fb3) popup_vitu2_query_window_t

0xcd44,	// (0x0009427d) main_cset_text_pane

0x82db,	// (0x0008f814) aid_area_touch_slider_ParamLimits

0x82f7,	// (0x0008f830) cset_slider_pane_ParamLimits

0x8321,	// (0x0008f85a) main_cset_slider_pane_g1_ParamLimits

0x8336,	// (0x0008f86f) main_cset_slider_pane_g2_ParamLimits

0xcd65,	// (0x0009429e) main_cset_slider_pane_g3_ParamLimits

0xcd65,	// (0x0009429e) main_cset_slider_pane_g3

0x834b,	// (0x0008f884) main_cset_slider_pane_g4_ParamLimits

0x834b,	// (0x0008f884) main_cset_slider_pane_g4

0x835a,	// (0x0008f893) main_cset_slider_pane_g5_ParamLimits

0x835a,	// (0x0008f893) main_cset_slider_pane_g5

0x8368,	// (0x0008f8a1) main_cset_slider_pane_g6_ParamLimits

0x8368,	// (0x0008f8a1) main_cset_slider_pane_g6

0xf9cf,	// (0x00096f08) main_cset_slider_pane_g_ParamLimits

0xcd95,	// (0x000942ce) main_cset_slider_pane_t1_ParamLimits

0x83f8,	// (0x0008f931) main_cset_slider_pane_t2_ParamLimits

0x8412,	// (0x0008f94b) main_cset_slider_pane_t3_ParamLimits

0x842c,	// (0x0008f965) main_cset_slider_pane_t4_ParamLimits

0x8446,	// (0x0008f97f) main_cset_slider_pane_t5_ParamLimits

0x8464,	// (0x0008f99d) main_cset_slider_pane_t6_ParamLimits

0x847b,	// (0x0008f9b4) main_cset_slider_pane_t7_ParamLimits

0x84a9,	// (0x0008f9e2) main_cset_slider_pane_t8_ParamLimits

0x84a9,	// (0x0008f9e2) main_cset_slider_pane_t8

0x84d1,	// (0x0008fa0a) main_cset_slider_pane_t9_ParamLimits

0x84d1,	// (0x0008fa0a) main_cset_slider_pane_t9

0x84f9,	// (0x0008fa32) main_cset_slider_pane_t10_ParamLimits

0x84f9,	// (0x0008fa32) main_cset_slider_pane_t10

0x8521,	// (0x0008fa5a) main_cset_slider_pane_t11_ParamLimits

0x8521,	// (0x0008fa5a) main_cset_slider_pane_t11

0x854b,	// (0x0008fa84) main_cset_slider_pane_t12_ParamLimits

0x854b,	// (0x0008fa84) main_cset_slider_pane_t12

0x8568,	// (0x0008faa1) main_cset_slider_pane_t13_ParamLimits

0x8568,	// (0x0008faa1) main_cset_slider_pane_t13

0xf9f4,	// (0x00096f2d) main_cset_slider_pane_t_ParamLimits

0x024d,	// (0x00087786) bg_popup_sub_pane_cp011

0xcedb,	// (0x00094414) main_cset_text_pane_g1

0xcee3,	// (0x0009441c) main_cset_text_pane_t1

0xcef1,	// (0x0009442a) main_cset_text_pane_t2

0xceff,	// (0x00094438) main_cset_text_pane_t3

0xcf0d,	// (0x00094446) main_cset_text_pane_t4

0xcf1b,	// (0x00094454) main_cset_text_pane_t5

0xcf29,	// (0x00094462) main_cset_text_pane_t6

0xcf37,	// (0x00094470) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x00096fbe) main_cset_text_pane_t

0x024d,	// (0x00087786) main_cam4_burst_pane

0x024d,	// (0x00087786) main_cam5_pane

0x8210,	// (0x0008f749) bg_button_pane_cp019

0x8219,	// (0x0008f752) bg_button_pane_cp020

0xcd71,	// (0x000942aa) main_cset_slider_pane_g7_ParamLimits

0xcd71,	// (0x000942aa) main_cset_slider_pane_g7

0xcd7d,	// (0x000942b6) main_cset_slider_pane_g8_ParamLimits

0xcd7d,	// (0x000942b6) main_cset_slider_pane_g8

0x837c,	// (0x0008f8b5) main_cset_slider_pane_g9_ParamLimits

0x837c,	// (0x0008f8b5) main_cset_slider_pane_g9

0x8388,	// (0x0008f8c1) main_cset_slider_pane_g10_ParamLimits

0x8388,	// (0x0008f8c1) main_cset_slider_pane_g10

0x8394,	// (0x0008f8cd) main_cset_slider_pane_g11_ParamLimits

0x8394,	// (0x0008f8cd) main_cset_slider_pane_g11

0x83a0,	// (0x0008f8d9) main_cset_slider_pane_g12_ParamLimits

0x83a0,	// (0x0008f8d9) main_cset_slider_pane_g12

0x83ac,	// (0x0008f8e5) main_cset_slider_pane_g13_ParamLimits

0x83ac,	// (0x0008f8e5) main_cset_slider_pane_g13

0x83b8,	// (0x0008f8f1) main_cset_slider_pane_g14_ParamLimits

0x83b8,	// (0x0008f8f1) main_cset_slider_pane_g14

0x83c4,	// (0x0008f8fd) main_cset_slider_pane_g15_ParamLimits

0x83c4,	// (0x0008f8fd) main_cset_slider_pane_g15

0xcdc3,	// (0x000942fc) main_cset_slider_pane_t14_ParamLimits

0xcdc3,	// (0x000942fc) main_cset_slider_pane_t14

0xcdfc,	// (0x00094335) main_cset_slider_pane_t15_ParamLimits

0xcdfc,	// (0x00094335) main_cset_slider_pane_t15

0x8984,	// (0x0008febd) aid_cam4_burst_size_cell_ParamLimits

0x8984,	// (0x0008febd) aid_cam4_burst_size_cell

0x89a4,	// (0x0008fedd) grid_cam4_burst_pane_ParamLimits

0x89a4,	// (0x0008fedd) grid_cam4_burst_pane

0x89de,	// (0x0008ff17) linegrid_cam4_burst_pane_ParamLimits

0x89de,	// (0x0008ff17) linegrid_cam4_burst_pane

0x8a02,	// (0x0008ff3b) scroll_pane_cp30_ParamLimits

0x8a02,	// (0x0008ff3b) scroll_pane_cp30

0x8a0e,	// (0x0008ff47) cell_cam4_burst_pane_ParamLimits

0x8a0e,	// (0x0008ff47) cell_cam4_burst_pane

0xcf45,	// (0x0009447e) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf45,	// (0x0009447e) linegrid_cam4_burst_pane_g1

0x8a63,	// (0x0008ff9c) linegrid_cam4_burst_pane_g2_ParamLimits

0x8a63,	// (0x0008ff9c) linegrid_cam4_burst_pane_g2

0xcf52,	// (0x0009448b) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf52,	// (0x0009448b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x00096fcd) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x00096fcd) linegrid_cam4_burst_pane_g

0x8a74,	// (0x0008ffad) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8a74,	// (0x0008ffad) linegrid_cam4_burst_pane_g3_copy1

0xcf5f,	// (0x00094498) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf5f,	// (0x00094498) linegrid_cam4_burst_pane_g4

0x8a92,	// (0x0008ffcb) linegrid_cam4_burst_pane_g5_ParamLimits

0x8a92,	// (0x0008ffcb) linegrid_cam4_burst_pane_g5

0x8aa3,	// (0x0008ffdc) linegrid_cam4_burst_pane_g6_ParamLimits

0x8aa3,	// (0x0008ffdc) linegrid_cam4_burst_pane_g6

0xcf6c,	// (0x000944a5) linegrid_cam4_burst_pane_g7_ParamLimits

0xcf6c,	// (0x000944a5) linegrid_cam4_burst_pane_g7

0x8aba,	// (0x0008fff3) cell_cam4_burst_pane_g1

0xcf85,	// (0x000944be) main_cam5_pane_t1_ParamLimits

0xcf85,	// (0x000944be) main_cam5_pane_t1

0xcf97,	// (0x000944d0) main_cam5_pane_t2_ParamLimits

0xcf97,	// (0x000944d0) main_cam5_pane_t2

0xcfa9,	// (0x000944e2) main_cam5_pane_t3_ParamLimits

0xcfa9,	// (0x000944e2) main_cam5_pane_t3

0xcfbb,	// (0x000944f4) main_cam5_pane_t4_ParamLimits

0xcfbb,	// (0x000944f4) main_cam5_pane_t4

0xcfd3,	// (0x0009450c) main_cam5_pane_t5_ParamLimits

0xcfd3,	// (0x0009450c) main_cam5_pane_t5

0xcfe7,	// (0x00094520) main_cam5_pane_t6_ParamLimits

0xcfe7,	// (0x00094520) main_cam5_pane_t6

0xcffb,	// (0x00094534) main_cam5_pane_t7_ParamLimits

0xcffb,	// (0x00094534) main_cam5_pane_t7

0xd00d,	// (0x00094546) main_cam5_pane_t8_ParamLimits

0xd00d,	// (0x00094546) main_cam5_pane_t8

0xd02b,	// (0x00094564) main_cam5_pane_t9_ParamLimits

0xd02b,	// (0x00094564) main_cam5_pane_t9

0xd03d,	// (0x00094576) main_cam5_pane_t10_ParamLimits

0xd03d,	// (0x00094576) main_cam5_pane_t10

0xd04f,	// (0x00094588) main_cam5_pane_t11_ParamLimits

0xd04f,	// (0x00094588) main_cam5_pane_t11

0xd063,	// (0x0009459c) main_cam5_pane_t12_ParamLimits

0xd063,	// (0x0009459c) main_cam5_pane_t12

0xd07a,	// (0x000945b3) main_cam5_pane_t13_ParamLimits

0xd07a,	// (0x000945b3) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00096fd9) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00096fd9) main_cam5_pane_t

0x24df,	// (0x00089a18) popup_scut_keymap_window_ParamLimits

0x24df,	// (0x00089a18) popup_scut_keymap_window

0x8acd,	// (0x00090006) aid_size_cell_brow_shortcut

0xafb2,	// (0x000924eb) bg_popup_window_pane_cp010

0x8ad9,	// (0x00090012) grid_scut_pane

0x8ae5,	// (0x0009001e) cell_scut_pane_ParamLimits

0x8ae5,	// (0x0009001e) cell_scut_pane

0x8afe,	// (0x00090037) cell_scut_pane_g1

0xd09d,	// (0x000945d6) cell_scut_pane_t1

0xd0ac,	// (0x000945e5) cell_scut_pane_t2

0x8b07,	// (0x00090040) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x00096ff4) cell_scut_pane_t

0x6865,	// (0x0008dd9e) main_mup3_pane_g8_ParamLimits

0x6865,	// (0x0008dd9e) main_mup3_pane_g8

0x7d5f,	// (0x0008f298) area_vitu2_query_pane_ParamLimits

0x7d5f,	// (0x0008f298) area_vitu2_query_pane

0x88ce,	// (0x0008fe07) input_focus_pane_cp08

0xd0bb,	// (0x000945f4) area_vitu2_query_pane_g1

0x8b15,	// (0x0009004e) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x00096ffb) area_vitu2_query_pane_g

0x8b28,	// (0x00090061) area_vitu2_query_pane_t1_ParamLimits

0x8b28,	// (0x00090061) area_vitu2_query_pane_t1

0x8b3c,	// (0x00090075) area_vitu2_query_pane_t2_ParamLimits

0x8b3c,	// (0x00090075) area_vitu2_query_pane_t2

0x8b50,	// (0x00090089) area_vitu2_query_pane_t3_ParamLimits

0x8b50,	// (0x00090089) area_vitu2_query_pane_t3

0xd0c7,	// (0x00094600) area_vitu2_query_pane_t4_ParamLimits

0xd0c7,	// (0x00094600) area_vitu2_query_pane_t4

0xd0ef,	// (0x00094628) area_vitu2_query_pane_t5_ParamLimits

0xd0ef,	// (0x00094628) area_vitu2_query_pane_t5

0xd117,	// (0x00094650) area_vitu2_query_pane_t6_ParamLimits

0xd117,	// (0x00094650) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x00097000) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x00097000) area_vitu2_query_pane_t

0x8b78,	// (0x000900b1) bg_button_pane_cp018

0x8b86,	// (0x000900bf) bg_button_pane_cp021

0x8b92,	// (0x000900cb) bg_button_pane_cp022

0x8ba3,	// (0x000900dc) input_focus_pane_cp09

0x474c,	// (0x0008bc85) aid_size_touch_mv_arrow_left

0x4775,	// (0x0008bcae) aid_size_touch_mv_arrow_right

0x83dc,	// (0x0008f915) main_cset_slider_pane_g16_ParamLimits

0x83dc,	// (0x0008f915) main_cset_slider_pane_g16

0x83ea,	// (0x0008f923) main_cset_slider_pane_g17_ParamLimits

0x83ea,	// (0x0008f923) main_cset_slider_pane_g17

0x8aba,	// (0x0008fff3) cell_cam4_burst_pane_g1_ParamLimits

0x024d,	// (0x00087786) compa_mode_pane

0x85fa,	// (0x0008fb33) popup_vtel_slider_window_g3_ParamLimits

0x85fa,	// (0x0008fb33) popup_vtel_slider_window_g3

0x8611,	// (0x0008fb4a) popup_vtel_slider_window_g4_ParamLimits

0x8611,	// (0x0008fb4a) popup_vtel_slider_window_g4

0x8628,	// (0x0008fb61) popup_vtel_slider_window_t1_ParamLimits

0x8628,	// (0x0008fb61) popup_vtel_slider_window_t1

0x024d,	// (0x00087786) main_cl_pane

0xc44b,	// (0x00093984) popup_imed_adjust2_window_ParamLimits

0xc41f,	// (0x00093958) bg_tb_trans_pane_cp05_ParamLimits

0xc6ca,	// (0x00093c03) popup_imed_adjust2_window_g1_ParamLimits

0xc6d9,	// (0x00093c12) popup_imed_adjust2_window_g2_ParamLimits

0xc6d9,	// (0x00093c12) popup_imed_adjust2_window_g2

0xc6e5,	// (0x00093c1e) popup_imed_adjust2_window_g3_ParamLimits

0xc6e5,	// (0x00093c1e) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00096d7a) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00096d7a) popup_imed_adjust2_window_g

0xc6f1,	// (0x00093c2a) popup_imed_adjust2_window_t1_ParamLimits

0xc709,	// (0x00093c42) slider_imed_adjust_pane_ParamLimits

0xc71d,	// (0x00093c56) slider_imed_adjust_pane_g1_ParamLimits

0xc72d,	// (0x00093c66) slider_imed_adjust_pane_g2_ParamLimits

0xc73d,	// (0x00093c76) slider_imed_adjust_pane_g3_ParamLimits

0xc74e,	// (0x00093c87) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00096d81) slider_imed_adjust_pane_g_ParamLimits

0x7a8d,	// (0x0008efc6) aid_touch_area_cam4_ParamLimits

0x7a8d,	// (0x0008efc6) aid_touch_area_cam4

0xef93,	// (0x000964cc) battery_pane_cp01

0x7b44,	// (0x0008f07d) main_camera4_pane_g6_ParamLimits

0x7b44,	// (0x0008f07d) main_camera4_pane_g6

0x7b67,	// (0x0008f0a0) main_camera4_pane_t2_ParamLimits

0x7b67,	// (0x0008f0a0) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00096e84) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00096e84) main_camera4_pane_t

0x7bcd,	// (0x0008f106) aid_touch_area_vid4_ParamLimits

0x7bcd,	// (0x0008f106) aid_touch_area_vid4

0x7c2b,	// (0x0008f164) main_video4_pane_g5_ParamLimits

0x7c2b,	// (0x0008f164) main_video4_pane_g5

0x7c52,	// (0x0008f18b) vid4_progress_pane_ParamLimits

0x7c52,	// (0x0008f18b) vid4_progress_pane

0xcd89,	// (0x000942c2) main_cset_slider_pane_g18_ParamLimits

0xcd89,	// (0x000942c2) main_cset_slider_pane_g18

0xcf79,	// (0x000944b2) cell_cam4_burst_pane_g2_ParamLimits

0xcf79,	// (0x000944b2) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00096fd4) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00096fd4) cell_cam4_burst_pane_g

0x09e7,	// (0x00087f20) bg_cl_pane_ParamLimits

0x09e7,	// (0x00087f20) bg_cl_pane

0x8bb4,	// (0x000900ed) cl_header_pane_ParamLimits

0x8bb4,	// (0x000900ed) cl_header_pane

0x8bc8,	// (0x00090101) cl_listscroll_pane_ParamLimits

0x8bc8,	// (0x00090101) cl_listscroll_pane

0xd163,	// (0x0009469c) bg_cl_pane_g1

0xd16b,	// (0x000946a4) bg_cl_pane_g2

0xd173,	// (0x000946ac) bg_cl_pane_g3

0xd17b,	// (0x000946b4) bg_cl_pane_g4

0xd183,	// (0x000946bc) bg_cl_pane_g5

0xd18b,	// (0x000946c4) bg_cl_pane_g6

0xd193,	// (0x000946cc) bg_cl_pane_g7

0xd19b,	// (0x000946d4) bg_cl_pane_g8

0xd1a3,	// (0x000946dc) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x0009700f) bg_cl_pane_g

0x8bd8,	// (0x00090111) aid_height_cl_leading_ParamLimits

0x8bd8,	// (0x00090111) aid_height_cl_leading

0x8be4,	// (0x0009011d) aid_height_cl_text_ParamLimits

0x8be4,	// (0x0009011d) aid_height_cl_text

0xabd7,	// (0x00092110) bg_cl_header_pane_ParamLimits

0xabd7,	// (0x00092110) bg_cl_header_pane

0x8c03,	// (0x0009013c) cl_header_pane_g1_ParamLimits

0x8c03,	// (0x0009013c) cl_header_pane_g1

0x8c19,	// (0x00090152) cl_header_pane_t1_ParamLimits

0x8c19,	// (0x00090152) cl_header_pane_t1

0xd1ab,	// (0x000946e4) cl_list_pane

0xcd5c,	// (0x00094295) hc_scroll_pane_cp01

0x0dd9,	// (0x00088312) bg_cl_header_pane_g1

0xcc3e,	// (0x00094177) bg_cl_header_pane_g2

0x0df9,	// (0x00088332) bg_cl_header_pane_g3

0xcc4e,	// (0x00094187) bg_cl_header_pane_g4

0xcc46,	// (0x0009417f) bg_cl_header_pane_g5

0xce7a,	// (0x000943b3) bg_cl_header_pane_g6

0xcc66,	// (0x0009419f) bg_cl_header_pane_g7

0xcc6e,	// (0x000941a7) bg_cl_header_pane_g8

0xcc5e,	// (0x00094197) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x00097022) bg_cl_header_pane_g

0x8c32,	// (0x0009016b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8c32,	// (0x0009016b) hc_cl_list_double_graphic_heading_pane

0x8c45,	// (0x0009017e) hc_cl_list_single_graphic_pane_ParamLimits

0x8c45,	// (0x0009017e) hc_cl_list_single_graphic_pane

0x8c5d,	// (0x00090196) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8c5d,	// (0x00090196) hc_cl_list_single_graphic_pane_g1

0x8c69,	// (0x000901a2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8c69,	// (0x000901a2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x00097035) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x00097035) hc_cl_list_single_graphic_pane_g

0x8c7d,	// (0x000901b6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8c7d,	// (0x000901b6) hc_cl_list_single_graphic_pane_t1

0x8c5d,	// (0x00090196) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8c5d,	// (0x00090196) hc_cl_list_double_graphic_heading_pane_g1

0x8c92,	// (0x000901cb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8c92,	// (0x000901cb) hc_cl_list_double_graphic_heading_pane_g2

0x8ca6,	// (0x000901df) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ca6,	// (0x000901df) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x0009703a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x0009703a) hc_cl_list_double_graphic_heading_pane_g

0x8cba,	// (0x000901f3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8cba,	// (0x000901f3) hc_cl_list_double_graphic_heading_pane_t1

0x8ccf,	// (0x00090208) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ccf,	// (0x00090208) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00097041) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00097041) hc_cl_list_double_graphic_heading_pane_t

0xf072,	// (0x000965ab) vid4_progress_pane_g1

0xf07e,	// (0x000965b7) vid4_progress_pane_g2

0xf08a,	// (0x000965c3) vid4_progress_pane_g3

0xf099,	// (0x000965d2) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00097046) vid4_progress_pane_g

0xf0b7,	// (0x000965f0) vid4_progress_pane_t1

0xf0cd,	// (0x00096606) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00097051) vid4_progress_pane_t

0xf0f8,	// (0x00096631) wait_bar_pane_cp07

0xebc7,	// (0x00096100) blid_firmament_pane_ParamLimits

0xec0a,	// (0x00096143) popup_blid_sat_info2_window_g1

0xec2e,	// (0x00096167) popup_blid_sat_info2_window_t3

0xec3c,	// (0x00096175) popup_blid_sat_info2_window_t4

0xec4a,	// (0x00096183) popup_blid_sat_info2_window_t5

0xec58,	// (0x00096191) popup_blid_sat_info2_window_t6

0xec68,	// (0x000961a1) popup_blid_sat_info2_window_t7

0xec76,	// (0x000961af) popup_blid_sat_info2_window_t8

0xec84,	// (0x000961bd) popup_blid_sat_info2_window_t9

0xec92,	// (0x000961cb) popup_blid_sat_info2_window_t10

0x0e98,	// (0x000883d1) aid_firma_cardinal_ParamLimits

0x0eac,	// (0x000883e5) blid_firmament_pane_t1_ParamLimits

0x0ec3,	// (0x000883fc) blid_firmament_pane_t2_ParamLimits

0x0eda,	// (0x00088413) blid_firmament_pane_t3_ParamLimits

0x0ef1,	// (0x0008842a) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00096c73) blid_firmament_pane_t_ParamLimits

0x0f08,	// (0x00088441) blid_sat_info_pane_ParamLimits

0xabd7,	// (0x00092110) main_cam_set_pane_ParamLimits

0x7112,	// (0x0008e64b) aid_size_cell_colour_35_ParamLimits

0x7132,	// (0x0008e66b) aid_size_cell_colour_112_ParamLimits

0x7152,	// (0x0008e68b) aid_size_cell_effect_ParamLimits

0xc41f,	// (0x00093958) bg_tb_trans_pane_cp02_ParamLimits

0x40a6,	// (0x0008b5df) heading_imed_pane_ParamLimits

0x7172,	// (0x0008e6ab) listscroll_imed_pane_ParamLimits

0xba4d,	// (0x00092f86) popup_call2_audio_first_window_g5_ParamLimits

0xba4d,	// (0x00092f86) popup_call2_audio_first_window_g5

0x7737,	// (0x0008ec70) aid_size_touch_image3_arrow_left_ParamLimits

0x7737,	// (0x0008ec70) aid_size_touch_image3_arrow_left

0x7763,	// (0x0008ec9c) aid_size_touch_image3_arrow_right_ParamLimits

0x7763,	// (0x0008ec9c) aid_size_touch_image3_arrow_right

0xf0e3,	// (0x0009661c) vid4_progress_pane_t3

0x748f,	// (0x0008e9c8) main_hwr_training_symbol_option_pane_ParamLimits

0x748f,	// (0x0008e9c8) main_hwr_training_symbol_option_pane

0xc9b9,	// (0x00093ef2) popup_hwr_training_preview_window_ParamLimits

0xc9b9,	// (0x00093ef2) popup_hwr_training_preview_window

0x74af,	// (0x0008e9e8) hwr_training_navi_pane_g5_ParamLimits

0x74af,	// (0x0008e9e8) hwr_training_navi_pane_g5

0xcc2c,	// (0x00094165) popup_char_count_window

0xefcf,	// (0x00096508) bg_popup_sub_pane_cp20_ParamLimits

0x8742,	// (0x0008fc7b) list_vitu2_match_list_pane_ParamLimits

0x8751,	// (0x0008fc8a) vitu2_page_scroll_pane_ParamLimits

0x8751,	// (0x0008fc8a) vitu2_page_scroll_pane

0xd20e,	// (0x00094747) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd20e,	// (0x00094747) list_single_hwr_training_symbol_option_pane

0xd221,	// (0x0009475a) list_single_hwr_training_symbol_option_pane_g1

0xd229,	// (0x00094762) list_single_hwr_training_symbol_option_pane_t1

0xd237,	// (0x00094770) bg_button_pane_cp023

0xd240,	// (0x00094779) bg_button_pane_cp024

0x8cee,	// (0x00090227) vitu2_page_scroll_pane_g1

0x8cf6,	// (0x0009022f) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00097058) vitu2_page_scroll_pane_g

0x8d00,	// (0x00090239) vitu2_page_scroll_pane_t1

0xeaeb,	// (0x00096024) popup_char_count_window_g1

0xd273,	// (0x000947ac) popup_char_count_window_g2

0xd27c,	// (0x000947b5) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0009705d) popup_char_count_window_g

0xd285,	// (0x000947be) popup_char_count_window_t1

0x024d,	// (0x00087786) main_vded2_pane

0xc6b6,	// (0x00093bef) aid_size_cell_imed_line

0xc6c0,	// (0x00093bf9) grid_imed_line_width_pane

0x7cb5,	// (0x0008f1ee) vid4_indicators_pane_g4

0xd293,	// (0x000947cc) cell_imed_line_width_pane_ParamLimits

0xd293,	// (0x000947cc) cell_imed_line_width_pane

0xd2a9,	// (0x000947e2) cell_imed_line_width_pane_g1

0x13c5,	// (0x000888fe) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00097064) cell_imed_line_width_pane_g

0x8d0f,	// (0x00090248) main_vded2_pane_g1_ParamLimits

0x8d0f,	// (0x00090248) main_vded2_pane_g1

0x8d2a,	// (0x00090263) main_vded2_pane_g2_ParamLimits

0x8d2a,	// (0x00090263) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00097069) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00097069) main_vded2_pane_g

0x8d3c,	// (0x00090275) vded2_slider_pane_ParamLimits

0x8d3c,	// (0x00090275) vded2_slider_pane

0x8d4c,	// (0x00090285) aid_size_touch_vded2_end

0x8d56,	// (0x0009028f) aid_size_touch_vded2_playhead

0xd2b2,	// (0x000947eb) aid_size_touch_vded2_start

0xd2ba,	// (0x000947f3) vded2_slider_bg_pane

0xd2c3,	// (0x000947fc) vded2_slider_pane_g1

0xd2cc,	// (0x00094805) vded2_slider_pane_g2

0x8d60,	// (0x00090299) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0009706e) vded2_slider_pane_g

0xd2d4,	// (0x0009480d) vded2_slider_bg_pane_g1

0xd2dd,	// (0x00094816) vded2_slider_bg_pane_g2

0xd2e6,	// (0x0009481f) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00097075) vded2_slider_bg_pane_g

0x4e69,	// (0x0008c3a2) aid_postcard_touch_down_pane_ParamLimits

0x4e69,	// (0x0008c3a2) aid_postcard_touch_down_pane

0x4e81,	// (0x0008c3ba) aid_postcard_touch_up_pane_ParamLimits

0x4e81,	// (0x0008c3ba) aid_postcard_touch_up_pane

0x024d,	// (0x00087786) main_blid2_pane

0xc42d,	// (0x00093966) popup_blid2_search_window

0x024d,	// (0x00087786) blid2_gps_pane

0x024d,	// (0x00087786) blid2_navig_pane

0x024d,	// (0x00087786) blid2_search_pane

0x024d,	// (0x00087786) blid2_tripm_pane

0x8d6b,	// (0x000902a4) blid2_search_pane_g1_ParamLimits

0x8d6b,	// (0x000902a4) blid2_search_pane_g1

0x8d83,	// (0x000902bc) blid2_search_pane_t1_ParamLimits

0x8d83,	// (0x000902bc) blid2_search_pane_t1

0x8d95,	// (0x000902ce) aid_size_cell_blid2_gps_ParamLimits

0x8d95,	// (0x000902ce) aid_size_cell_blid2_gps

0x8dad,	// (0x000902e6) blid2_gps_pane_g1_ParamLimits

0x8dad,	// (0x000902e6) blid2_gps_pane_g1

0x8dc1,	// (0x000902fa) grid_blid2_satellite_pane_ParamLimits

0x8dc1,	// (0x000902fa) grid_blid2_satellite_pane

0x8dd9,	// (0x00090312) blid2_navig_pane_g1_ParamLimits

0x8dd9,	// (0x00090312) blid2_navig_pane_g1

0x8de5,	// (0x0009031e) blid2_navig_pane_t1_ParamLimits

0x8de5,	// (0x0009031e) blid2_navig_pane_t1

0x8e00,	// (0x00090339) blid2_navig_pane_t2_ParamLimits

0x8e00,	// (0x00090339) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0009707c) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0009707c) blid2_navig_pane_t

0x8e1b,	// (0x00090354) blid2_navig_ring_pane_ParamLimits

0x8e1b,	// (0x00090354) blid2_navig_ring_pane

0x8e36,	// (0x0009036f) blid2_speed_pane_ParamLimits

0x8e36,	// (0x0009036f) blid2_speed_pane

0x8e42,	// (0x0009037b) blid2_tripm_pane_g1_ParamLimits

0x8e42,	// (0x0009037b) blid2_tripm_pane_g1

0x8e5d,	// (0x00090396) blid2_tripm_pane_g2_ParamLimits

0x8e5d,	// (0x00090396) blid2_tripm_pane_g2

0x8e71,	// (0x000903aa) blid2_tripm_pane_g3_ParamLimits

0x8e71,	// (0x000903aa) blid2_tripm_pane_g3

0x8e85,	// (0x000903be) blid2_tripm_pane_g4_ParamLimits

0x8e85,	// (0x000903be) blid2_tripm_pane_g4

0x8e99,	// (0x000903d2) blid2_tripm_pane_g5_ParamLimits

0x8e99,	// (0x000903d2) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00097081) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00097081) blid2_tripm_pane_g

0x8ebf,	// (0x000903f8) blid2_tripm_pane_t1_ParamLimits

0x8ebf,	// (0x000903f8) blid2_tripm_pane_t1

0x8eda,	// (0x00090413) blid2_tripm_pane_t2_ParamLimits

0x8eda,	// (0x00090413) blid2_tripm_pane_t2

0x8ef3,	// (0x0009042c) blid2_tripm_pane_t3_ParamLimits

0x8ef3,	// (0x0009042c) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0009708e) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0009708e) blid2_tripm_pane_t

0x8f3a,	// (0x00090473) cell_blid2_satellite_pane_ParamLimits

0x8f3a,	// (0x00090473) cell_blid2_satellite_pane

0x8f56,	// (0x0009048f) cell_blid2_satellite_pane_g1

0xd2ef,	// (0x00094828) cell_blid2_satellite_pane_t1

0x0f18,	// (0x00088451) blid2_speed_pane_g1

0xd2fd,	// (0x00094836) blid2_speed_pane_t1

0xd30b,	// (0x00094844) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00097097) blid2_speed_pane_t

0x0f18,	// (0x00088451) blid2_navig_ring_pane_g1

0x8f5f,	// (0x00090498) blid2_navig_ring_pane_g2

0x8f67,	// (0x000904a0) blid2_navig_ring_pane_g3

0x8f6f,	// (0x000904a8) blid2_navig_ring_pane_g4

0x8f77,	// (0x000904b0) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0009709c) blid2_navig_ring_pane_g

0x024d,	// (0x00087786) bg_popup_window_pane_cp011

0xd319,	// (0x00094852) popup_blid2_search_window_g1

0xd321,	// (0x0009485a) popup_blid2_search_window_t1

0xd32f,	// (0x00094868) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x000970a7) popup_blid2_search_window_t

0x0ce8,	// (0x00088221) main_browser_pane_g1

0x09e7,	// (0x00087f20) main_browser_pane_ParamLimits

0xefcf,	// (0x00096508) bg_button_pane_cp011_ParamLimits

0x7fa2,	// (0x0008f4db) cell_vitu2_function_pane_g1_ParamLimits

0xabd7,	// (0x00092110) bg_popup_sub_pane_cp22_ParamLimits

0x88ce,	// (0x0008fe07) input_focus_pane_cp08_ParamLimits

0x88db,	// (0x0008fe14) popup_vitu2_query_button_pane_ParamLimits

0x88db,	// (0x0008fe14) popup_vitu2_query_button_pane

0x88b0,	// (0x0008fde9) popup_vitu2_query_input_button_pane

0xcecf,	// (0x00094408) popup_vitu2_query_window_g1_ParamLimits

0x88ec,	// (0x0008fe25) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x00096fae) popup_vitu2_query_window_g_ParamLimits

0x024d,	// (0x00087786) bg_button_pane_cp026

0x8f7f,	// (0x000904b8) popup_vitu2_query_input_button_pane_g1

0x024d,	// (0x00087786) bg_button_pane_cp025

0xd33d,	// (0x00094876) popup_vitu2_query_button_pane_t1

0x6576,	// (0x0008daaf) main_mp3_pane_t6

0x6584,	// (0x0008dabd) popup_slider_window_cp01

0xefa5,	// (0x000964de) cam4_battery_pane

0xefc5,	// (0x000964fe) cam4_battery_pane_cp02

0x8ce4,	// (0x0009021d) cam4_battery_pane_cp01

0xf06a,	// (0x000965a3) cam4_battery_pane_cp03

0xcab7,	// (0x00093ff0) cam4_battery_pane_g1

0x0f18,	// (0x00088451) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x000970ac) cam4_battery_pane_g

0xeca0,	// (0x000961d9) popup_blid_sat_info2_window_t11

0x474c,	// (0x0008bc85) aid_size_touch_mv_arrow_left_ParamLimits

0x4775,	// (0x0008bcae) aid_size_touch_mv_arrow_right_ParamLimits

0xaf12,	// (0x0009244b) navi_pane_g1_ParamLimits

0x479e,	// (0x0008bcd7) navi_pane_g2_ParamLimits

0x47cc,	// (0x0008bd05) navi_pane_g3_ParamLimits

0xf44c,	// (0x00096985) navi_pane_g_ParamLimits

0x4826,	// (0x0008bd5f) navi_pane_mv_t1_ParamLimits

0x717e,	// (0x0008e6b7) grid_imed_effect_pane_ParamLimits

0x0c2d,	// (0x00088166) aid_placing_vt_slider_lsc

0x0c35,	// (0x0008816e) aid_placing_vt_slider_prt

0xabd7,	// (0x00092110) bg_tb_trans_pane_cp01_ParamLimits

0x1068,	// (0x000885a1) popup_image_details_window_g1_ParamLimits

0x107b,	// (0x000885b4) popup_image_details_window_g2_ParamLimits

0x1090,	// (0x000885c9) popup_image_details_window_g3_ParamLimits

0x1090,	// (0x000885c9) popup_image_details_window_g3

0xf77f,	// (0x00096cb8) popup_image_details_window_g_ParamLimits

0x10a4,	// (0x000885dd) popup_image_details_window_t1_ParamLimits

0x10b6,	// (0x000885ef) popup_image_details_window_t2_ParamLimits

0x10cf,	// (0x00088608) popup_image_details_window_t3_ParamLimits

0x10e3,	// (0x0008861c) popup_image_details_window_t4_ParamLimits

0x10fe,	// (0x00088637) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00096cbf) popup_image_details_window_t_ParamLimits

0x8bf0,	// (0x00090129) cl_header_name_pane_ParamLimits

0x8bf0,	// (0x00090129) cl_header_name_pane

0x8f87,	// (0x000904c0) cl_header_name_pane_t1_ParamLimits

0x8f87,	// (0x000904c0) cl_header_name_pane_t1

0x8fa8,	// (0x000904e1) cl_header_name_pane_t2_ParamLimits

0x8fa8,	// (0x000904e1) cl_header_name_pane_t2

0x8fea,	// (0x00090523) cl_header_name_pane_t3_ParamLimits

0x8fea,	// (0x00090523) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x000970b1) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x000970b1) cl_header_name_pane_t

0x47f7,	// (0x0008bd30) navi_pane_mv_g2_ParamLimits

0xcbe9,	// (0x00094122) field_vitu2_entry_pane_g1_ParamLimits

0xcbf5,	// (0x0009412e) field_vitu2_entry_pane_g2_ParamLimits

0xcc01,	// (0x0009413a) field_vitu2_entry_pane_g3_ParamLimits

0xcc01,	// (0x0009413a) field_vitu2_entry_pane_g3

0xf974,	// (0x00096ead) field_vitu2_entry_pane_g_ParamLimits

0x7f1e,	// (0x0008f457) cell_vitu2_itu_pane_g1_ParamLimits

0x7f2e,	// (0x0008f467) cell_vitu2_itu_pane_g2_ParamLimits

0x7f2e,	// (0x0008f467) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00096eb9) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00096eb9) cell_vitu2_itu_pane_g

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp05_ParamLimits

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp05

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp03

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp04

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp10_ParamLimits

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp10

0x8b92,	// (0x000900cb) bg_vkb2_func_pane_cp08

0x8b78,	// (0x000900b1) bg_vkb2_func_pane_cp06

0x8b86,	// (0x000900bf) bg_vkb2_func_pane_cp07

0xd249,	// (0x00094782) bg_vkb2_func_pane_cp11_ParamLimits

0xd249,	// (0x00094782) bg_vkb2_func_pane_cp11

0xd25e,	// (0x00094797) bg_vkb2_func_pane_cp12_ParamLimits

0xd25e,	// (0x00094797) bg_vkb2_func_pane_cp12

0x024d,	// (0x00087786) bg_vkb2_func_pane_cp09

0xcc3e,	// (0x00094177) bg_vkb2_func_pane_g1

0x0df9,	// (0x00088332) bg_vkb2_func_pane_g2

0xcc46,	// (0x0009417f) bg_vkb2_func_pane_g3

0xcc4e,	// (0x00094187) bg_vkb2_func_pane_g4

0xce7a,	// (0x000943b3) bg_vkb2_func_pane_g5

0xcc66,	// (0x0009419f) bg_vkb2_func_pane_g6

0xcc6e,	// (0x000941a7) bg_vkb2_func_pane_g7

0xcc5e,	// (0x00094197) bg_vkb2_func_pane_g8

0x0dd9,	// (0x00088312) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x000970b8) bg_vkb2_func_pane_g

0x8ead,	// (0x000903e6) blid2_tripm_pane_g6_ParamLimits

0x8ead,	// (0x000903e6) blid2_tripm_pane_g6

0xca71,	// (0x00093faa) mp4_progress_pane_g1

0x8f26,	// (0x0009045f) blid2_tripm_values_pane_ParamLimits

0x8f26,	// (0x0009045f) blid2_tripm_values_pane

0x901b,	// (0x00090554) blid2_tripm_values_pane_t1

0x9029,	// (0x00090562) blid2_tripm_values_pane_t2

0x9037,	// (0x00090570) blid2_tripm_values_pane_t3

0x9045,	// (0x0009057e) blid2_tripm_values_pane_t4

0x9053,	// (0x0009058c) blid2_tripm_values_pane_t5

0x9061,	// (0x0009059a) blid2_tripm_values_pane_t6

0x906f,	// (0x000905a8) blid2_tripm_values_pane_t7

0x907d,	// (0x000905b6) blid2_tripm_values_pane_t8

0x908b,	// (0x000905c4) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x000970cb) blid2_tripm_values_pane_t

0x32bb,	// (0x0008a7f4) call_video_pane_t1_ParamLimits

0x32cd,	// (0x0008a806) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x0009680e) call_video_pane_t_ParamLimits

0x4d6c,	// (0x0008c2a5) msg_header_pane_g1_ParamLimits

0xb14f,	// (0x00092688) msg_header_pane_g2_ParamLimits

0xb14f,	// (0x00092688) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00096a28) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00096a28) msg_header_pane_g

0x09e7,	// (0x00087f20) main_clock2_pane_ParamLimits

0x6e8c,	// (0x0008e3c5) grid_clock2_toolbar_pane_ParamLimits

0x6e8c,	// (0x0008e3c5) grid_clock2_toolbar_pane

0x6e8c,	// (0x0008e3c5) listscroll_clock2_pane_ParamLimits

0x6e8c,	// (0x0008e3c5) listscroll_clock2_pane

0x6f70,	// (0x0008e4a9) main_clock2_pane_t3_ParamLimits

0x6f70,	// (0x0008e4a9) main_clock2_pane_t3

0x6f8b,	// (0x0008e4c4) main_clock2_pane_t4_ParamLimits

0x6f8b,	// (0x0008e4c4) main_clock2_pane_t4

0xd34b,	// (0x00094884) cell_clock2_toolbar_pane

0xd353,	// (0x0009488c) cell_clock2_toolbar_pane_cp01

0xd353,	// (0x0009488c) cell_clock2_toolbar_pane_cp02

0xd35b,	// (0x00094894) cell_clock2_toolbar_pane_cp03

0xd363,	// (0x0009489c) list_clock2_pane

0xae78,	// (0x000923b1) scroll_pane_cp10

0xd36b,	// (0x000948a4) list_single_clock2_pane_ParamLimits

0xd36b,	// (0x000948a4) list_single_clock2_pane

0xafb2,	// (0x000924eb) list_highlight_pane_cp08

0xd378,	// (0x000948b1) list_single_clock2_pane_t1

0xd386,	// (0x000948bf) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x000970de) list_single_clock2_pane_t

0x024d,	// (0x00087786) bg_button_pane_cp10

0xd394,	// (0x000948cd) cell_clock2_toolbar_pane_g1

0x4df5,	// (0x0008c32e) aid_main_viewer_pane_g1_ParamLimits

0x4df5,	// (0x0008c32e) aid_main_viewer_pane_g1

0x4e03,	// (0x0008c33c) aid_main_viewer_pane_g2_ParamLimits

0x4e03,	// (0x0008c33c) aid_main_viewer_pane_g2

0x4e11,	// (0x0008c34a) aid_main_viewer_pane_g3_ParamLimits

0x4e11,	// (0x0008c34a) aid_main_viewer_pane_g3

0x4e20,	// (0x0008c359) aid_main_viewer_pane_g4_ParamLimits

0x4e20,	// (0x0008c359) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00096a39) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00096a39) aid_main_viewer_pane_g

0x5778,	// (0x0008ccb1) main_calc_pane_ParamLimits

0x578c,	// (0x0008ccc5) main_dialer2_pane_ParamLimits

0x024d,	// (0x00087786) main_cam6_pane

0x024d,	// (0x00087786) main_vid6_pane

0x6e98,	// (0x0008e3d1) listscroll_gen_pane_cp06_ParamLimits

0x6e98,	// (0x0008e3d1) listscroll_gen_pane_cp06

0x6fa6,	// (0x0008e4df) main_clock2_pane_t5_ParamLimits

0x6fa6,	// (0x0008e4df) main_clock2_pane_t5

0x7003,	// (0x0008e53c) aid_call2_pane_cp10_ParamLimits

0x7015,	// (0x0008e54e) aid_call_pane_cp10_ParamLimits

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7027,	// (0x0008e560) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7027,	// (0x0008e560) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaee7,	// (0x00092420) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x00096d6f) popup_clock_analogue_window_cp10_g_ParamLimits

0x703d,	// (0x0008e576) popup_clock_analogue_window_cp10_t1_ParamLimits

0x76e4,	// (0x0008ec1d) cell_dialer2_keypad_pane_g2_ParamLimits

0x76e4,	// (0x0008ec1d) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00096e55) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00096e55) cell_dialer2_keypad_pane_g

0x7700,	// (0x0008ec39) cell_dialer2_keypad_pane_t1

0x82cd,	// (0x0008f806) main_cset_text2_pane_ParamLimits

0x82cd,	// (0x0008f806) main_cset_text2_pane

0xd0bb,	// (0x000945f4) area_vitu2_query_pane_g1_ParamLimits

0x8b15,	// (0x0009004e) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x00096ffb) area_vitu2_query_pane_g_ParamLimits

0xd13f,	// (0x00094678) area_vitu2_query_pane_t7_ParamLimits

0xd13f,	// (0x00094678) area_vitu2_query_pane_t7

0x8b78,	// (0x000900b1) bg_button_pane_cp018_ParamLimits

0x8b86,	// (0x000900bf) bg_button_pane_cp021_ParamLimits

0x8b92,	// (0x000900cb) bg_button_pane_cp022_ParamLimits

0x8b92,	// (0x000900cb) bg_vkb2_func_pane_cp08_ParamLimits

0x8b78,	// (0x000900b1) bg_vkb2_func_pane_cp06_ParamLimits

0x8b86,	// (0x000900bf) bg_vkb2_func_pane_cp07_ParamLimits

0x8ba3,	// (0x000900dc) input_focus_pane_cp09_ParamLimits

0xf10a,	// (0x00096643) cam6_autofocus_pane_ParamLimits

0xf10a,	// (0x00096643) cam6_autofocus_pane

0x9099,	// (0x000905d2) cam6_image_uncrop_pane_ParamLimits

0x9099,	// (0x000905d2) cam6_image_uncrop_pane

0x90a8,	// (0x000905e1) cam6_indi_pane_ParamLimits

0x90a8,	// (0x000905e1) cam6_indi_pane

0x90be,	// (0x000905f7) cam6_mode_pane_ParamLimits

0x90be,	// (0x000905f7) cam6_mode_pane

0x90d0,	// (0x00090609) cam6_timer_pane_ParamLimits

0x90d0,	// (0x00090609) cam6_timer_pane

0x90dc,	// (0x00090615) cam6_zoom_pane_ParamLimits

0x90dc,	// (0x00090615) cam6_zoom_pane

0x90ea,	// (0x00090623) cam6_mode_pane_g1_ParamLimits

0x90ea,	// (0x00090623) cam6_mode_pane_g1

0x90fa,	// (0x00090633) cam6_mode_pane_g2_ParamLimits

0x90fa,	// (0x00090633) cam6_mode_pane_g2

0x910a,	// (0x00090643) cam6_mode_pane_g3_ParamLimits

0x910a,	// (0x00090643) cam6_mode_pane_g3

0x911a,	// (0x00090653) cam6_mode_pane_g4_ParamLimits

0x911a,	// (0x00090653) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x000970e3) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x000970e3) cam6_mode_pane_g

0xd39c,	// (0x000948d5) bg_tb_trans_pane_cp08_ParamLimits

0xd39c,	// (0x000948d5) bg_tb_trans_pane_cp08

0xd3aa,	// (0x000948e3) cam6_battery_pane_ParamLimits

0xd3aa,	// (0x000948e3) cam6_battery_pane

0xd3c0,	// (0x000948f9) cam6_indi_pane_g1_ParamLimits

0xd3c0,	// (0x000948f9) cam6_indi_pane_g1

0xd3d2,	// (0x0009490b) cam6_indi_pane_g2_ParamLimits

0xd3d2,	// (0x0009490b) cam6_indi_pane_g2

0xd3e4,	// (0x0009491d) cam6_indi_pane_g3_ParamLimits

0xd3e4,	// (0x0009491d) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x000970ec) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x000970ec) cam6_indi_pane_g

0xd3f6,	// (0x0009492f) cam6_indi_pane_t1_ParamLimits

0xd3f6,	// (0x0009492f) cam6_indi_pane_t1

0x7cdb,	// (0x0008f214) cam6_autofocus_pane_g1

0x7cd3,	// (0x0008f20c) cam6_autofocus_pane_g2

0x7ceb,	// (0x0008f224) cam6_autofocus_pane_g3

0x7ce3,	// (0x0008f21c) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x000970f3) cam6_autofocus_pane_g

0xd41c,	// (0x00094955) cam6_timer_pane_g1

0xd424,	// (0x0009495d) cam6_timer_pane_t1

0xd432,	// (0x0009496b) cam6_zoom_cont_pane

0xd43a,	// (0x00094973) cam6_zoom_pane_g1

0xd442,	// (0x0009497b) cam6_zoom_pane_g2

0x912a,	// (0x00090663) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x000970fc) cam6_zoom_pane_g

0x0f18,	// (0x00088451) cam6_battery_pane_g1

0x0f18,	// (0x00088451) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00096c7c) cam6_battery_pane_g

0xd44a,	// (0x00094983) cam6_zoom_cont_pane_g1

0xd453,	// (0x0009498c) cam6_zoom_cont_pane_g2

0xd45c,	// (0x00094995) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x00097103) cam6_zoom_cont_pane_g

0x9147,	// (0x00090680) cam6_mode_pane_cp_ParamLimits

0x9147,	// (0x00090680) cam6_mode_pane_cp

0x9159,	// (0x00090692) cam6_zoom_pane_cp_ParamLimits

0x9159,	// (0x00090692) cam6_zoom_pane_cp

0x9167,	// (0x000906a0) vid6_image_uncrop_cif_pane_ParamLimits

0x9167,	// (0x000906a0) vid6_image_uncrop_cif_pane

0x9177,	// (0x000906b0) vid6_image_uncrop_nhd_pane_ParamLimits

0x9177,	// (0x000906b0) vid6_image_uncrop_nhd_pane

0x9186,	// (0x000906bf) vid6_image_uncrop_vga_pane_ParamLimits

0x9186,	// (0x000906bf) vid6_image_uncrop_vga_pane

0x9195,	// (0x000906ce) vid6_image_uncrop_wvga_pane_ParamLimits

0x9195,	// (0x000906ce) vid6_image_uncrop_wvga_pane

0x91a4,	// (0x000906dd) vid6_indi_pane_ParamLimits

0x91a4,	// (0x000906dd) vid6_indi_pane

0xd39c,	// (0x000948d5) bg_tb_trans_pane_cp09_ParamLimits

0xd39c,	// (0x000948d5) bg_tb_trans_pane_cp09

0xd474,	// (0x000949ad) cam6_battery_pane_cp_ParamLimits

0xd474,	// (0x000949ad) cam6_battery_pane_cp

0xd480,	// (0x000949b9) vid6_indi_pane_g1_ParamLimits

0xd480,	// (0x000949b9) vid6_indi_pane_g1

0xd492,	// (0x000949cb) vid6_indi_pane_g2_ParamLimits

0xd492,	// (0x000949cb) vid6_indi_pane_g2

0xd4a4,	// (0x000949dd) vid6_indi_pane_g3_ParamLimits

0xd4a4,	// (0x000949dd) vid6_indi_pane_g3

0xd4bb,	// (0x000949f4) vid6_indi_pane_g4_ParamLimits

0xd4bb,	// (0x000949f4) vid6_indi_pane_g4

0xd4d2,	// (0x00094a0b) vid6_indi_pane_g5_ParamLimits

0xd4d2,	// (0x00094a0b) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x0009710a) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x0009710a) vid6_indi_pane_g

0xd4ec,	// (0x00094a25) vid6_indi_pane_t1_ParamLimits

0xd4ec,	// (0x00094a25) vid6_indi_pane_t1

0xd502,	// (0x00094a3b) vid6_indi_pane_t2_ParamLimits

0xd502,	// (0x00094a3b) vid6_indi_pane_t2

0xd52a,	// (0x00094a63) vid6_indi_pane_t3_ParamLimits

0xd52a,	// (0x00094a63) vid6_indi_pane_t3

0xd552,	// (0x00094a8b) vid6_indi_pane_t4_ParamLimits

0xd552,	// (0x00094a8b) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x00097115) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x00097115) vid6_indi_pane_t

0xd576,	// (0x00094aaf) wait_bar_pane_cp08

0x91bc,	// (0x000906f5) main_cset_text2_pane_t1_ParamLimits

0x91bc,	// (0x000906f5) main_cset_text2_pane_t1

0x9132,	// (0x0009066b) listscroll_gen_pane_cp06_t1_ParamLimits

0x9132,	// (0x0009066b) listscroll_gen_pane_cp06_t1

0x024d,	// (0x00087786) main_cam6_set_pane

0x7b88,	// (0x0008f0c1) bg_tb_trans_pane_cp06_ParamLimits

0x7b96,	// (0x0008f0cf) cam4_indicators_pane_g1_ParamLimits

0x7ba3,	// (0x0008f0dc) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00096e89) cam4_indicators_pane_g_ParamLimits

0x7bbb,	// (0x0008f0f4) cam4_indicators_pane_t1_ParamLimits

0xefb7,	// (0x000964f0) bg_tb_trans_pane_cp07_ParamLimits

0x7b96,	// (0x0008f0cf) vid4_indicators_pane_g1_ParamLimits

0x7c9b,	// (0x0008f1d4) vid4_indicators_pane_g2_ParamLimits

0x7ca8,	// (0x0008f1e1) vid4_indicators_pane_g3_ParamLimits

0x7cb5,	// (0x0008f1ee) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x00096e9b) vid4_indicators_pane_g_ParamLimits

0x7cc1,	// (0x0008f1fa) vid4_indicators_pane_t1_ParamLimits

0xf072,	// (0x000965ab) vid4_progress_pane_g1_ParamLimits

0xf07e,	// (0x000965b7) vid4_progress_pane_g2_ParamLimits

0xf08a,	// (0x000965c3) vid4_progress_pane_g3_ParamLimits

0xf099,	// (0x000965d2) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00097046) vid4_progress_pane_g_ParamLimits

0xf0b7,	// (0x000965f0) vid4_progress_pane_t1_ParamLimits

0xf0cd,	// (0x00096606) vid4_progress_pane_t2_ParamLimits

0xf0e3,	// (0x0009661c) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00097051) vid4_progress_pane_t_ParamLimits

0xf0f8,	// (0x00096631) wait_bar_pane_cp07_ParamLimits

0x91dd,	// (0x00090716) main_cam6_set_pane_g2_ParamLimits

0x91dd,	// (0x00090716) main_cam6_set_pane_g2

0x9203,	// (0x0009073c) main_cset6_listscroll_pane_ParamLimits

0x9203,	// (0x0009073c) main_cset6_listscroll_pane

0x9221,	// (0x0009075a) main_cset6_slider_pane_ParamLimits

0x9221,	// (0x0009075a) main_cset6_slider_pane

0x9237,	// (0x00090770) main_cset6_text2_pane_ParamLimits

0x9237,	// (0x00090770) main_cset6_text2_pane

0xd585,	// (0x00094abe) main_cset6_text_pane

0xd58d,	// (0x00094ac6) main_cset_list_pane_copy1_ParamLimits

0xd58d,	// (0x00094ac6) main_cset_list_pane_copy1

0xd59d,	// (0x00094ad6) scroll_pane_cp028_copy1

0x9245,	// (0x0009077e) cset_list_set_pane_copy1

0x9259,	// (0x00090792) aid_position_infowindow_above_copy1

0x9261,	// (0x0009079a) aid_position_infowindow_below_copy1

0x9269,	// (0x000907a2) cset_list_set_pane_g1_copy1

0xd5a6,	// (0x00094adf) cset_list_set_pane_g3_copy1_ParamLimits

0xd5a6,	// (0x00094adf) cset_list_set_pane_g3_copy1

0xd5b5,	// (0x00094aee) cset_list_set_pane_t1_copy1_ParamLimits

0xd5b5,	// (0x00094aee) cset_list_set_pane_t1_copy1

0xabd7,	// (0x00092110) list_highlight_pane_cp021_copy1_ParamLimits

0xabd7,	// (0x00092110) list_highlight_pane_cp021_copy1

0xd5ca,	// (0x00094b03) cset6_slider_pane_ParamLimits

0xd5ca,	// (0x00094b03) cset6_slider_pane

0xd5f6,	// (0x00094b2f) main_cset6_slider_pane_g1_ParamLimits

0xd5f6,	// (0x00094b2f) main_cset6_slider_pane_g1

0x9271,	// (0x000907aa) main_cset6_slider_pane_g2_ParamLimits

0x9271,	// (0x000907aa) main_cset6_slider_pane_g2

0xd61e,	// (0x00094b57) main_cset6_slider_pane_g3_ParamLimits

0xd61e,	// (0x00094b57) main_cset6_slider_pane_g3

0x9299,	// (0x000907d2) main_cset6_slider_pane_g4_ParamLimits

0x9299,	// (0x000907d2) main_cset6_slider_pane_g4

0x92a5,	// (0x000907de) main_cset6_slider_pane_g5_ParamLimits

0x92a5,	// (0x000907de) main_cset6_slider_pane_g5

0xcd71,	// (0x000942aa) main_cset6_slider_pane_g7_ParamLimits

0xcd71,	// (0x000942aa) main_cset6_slider_pane_g7

0xcd7d,	// (0x000942b6) main_cset6_slider_pane_g8_ParamLimits

0xcd7d,	// (0x000942b6) main_cset6_slider_pane_g8

0x837c,	// (0x0008f8b5) main_cset6_slider_pane_g9_ParamLimits

0x837c,	// (0x0008f8b5) main_cset6_slider_pane_g9

0x8388,	// (0x0008f8c1) main_cset6_slider_pane_g10_ParamLimits

0x8388,	// (0x0008f8c1) main_cset6_slider_pane_g10

0x8394,	// (0x0008f8cd) main_cset6_slider_pane_g11_ParamLimits

0x8394,	// (0x0008f8cd) main_cset6_slider_pane_g11

0x83a0,	// (0x0008f8d9) main_cset6_slider_pane_g12_ParamLimits

0x83a0,	// (0x0008f8d9) main_cset6_slider_pane_g12

0x83ac,	// (0x0008f8e5) main_cset6_slider_pane_g13_ParamLimits

0x83ac,	// (0x0008f8e5) main_cset6_slider_pane_g13

0x83b8,	// (0x0008f8f1) main_cset6_slider_pane_g14_ParamLimits

0x83b8,	// (0x0008f8f1) main_cset6_slider_pane_g14

0x92b3,	// (0x000907ec) main_cset6_slider_pane_g15_ParamLimits

0x92b3,	// (0x000907ec) main_cset6_slider_pane_g15

0x83dc,	// (0x0008f915) main_cset6_slider_pane_g16_ParamLimits

0x83dc,	// (0x0008f915) main_cset6_slider_pane_g16

0x83ea,	// (0x0008f923) main_cset6_slider_pane_g17_ParamLimits

0x83ea,	// (0x0008f923) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x0009711e) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x0009711e) main_cset6_slider_pane_g

0xd62a,	// (0x00094b63) main_cset6_slider_pane_t1_ParamLimits

0xd62a,	// (0x00094b63) main_cset6_slider_pane_t1

0x92e3,	// (0x0009081c) main_cset6_slider_pane_t2_ParamLimits

0x92e3,	// (0x0009081c) main_cset6_slider_pane_t2

0x930e,	// (0x00090847) main_cset6_slider_pane_t3_ParamLimits

0x930e,	// (0x00090847) main_cset6_slider_pane_t3

0x9339,	// (0x00090872) main_cset6_slider_pane_t4_ParamLimits

0x9339,	// (0x00090872) main_cset6_slider_pane_t4

0x9366,	// (0x0009089f) main_cset6_slider_pane_t5_ParamLimits

0x9366,	// (0x0009089f) main_cset6_slider_pane_t5

0xd66b,	// (0x00094ba4) main_cset6_slider_pane_t7_ParamLimits

0xd66b,	// (0x00094ba4) main_cset6_slider_pane_t7

0x9393,	// (0x000908cc) main_cset6_slider_pane_t8_ParamLimits

0x9393,	// (0x000908cc) main_cset6_slider_pane_t8

0x93b7,	// (0x000908f0) main_cset6_slider_pane_t9_ParamLimits

0x93b7,	// (0x000908f0) main_cset6_slider_pane_t9

0x93db,	// (0x00090914) main_cset6_slider_pane_t10_ParamLimits

0x93db,	// (0x00090914) main_cset6_slider_pane_t10

0x93ff,	// (0x00090938) main_cset6_slider_pane_t11_ParamLimits

0x93ff,	// (0x00090938) main_cset6_slider_pane_t11

0xd6a1,	// (0x00094bda) main_cset6_slider_pane_t14_ParamLimits

0xd6a1,	// (0x00094bda) main_cset6_slider_pane_t14

0xd6da,	// (0x00094c13) main_cset6_slider_pane_t15_ParamLimits

0xd6da,	// (0x00094c13) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00097143) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00097143) main_cset6_slider_pane_t

0xd713,	// (0x00094c4c) cset_slider_pane_g1_copy1

0xd71c,	// (0x00094c55) cset_slider_pane_g2_copy1

0xd725,	// (0x00094c5e) cset_slider_pane_g3_copy1

0x024d,	// (0x00087786) bg_popup_sub_pane_cp011_copy1

0xcedb,	// (0x00094414) main_cset_text_pane_g1_copy1

0xcee3,	// (0x0009441c) main_cset_text_pane_t1_copy1

0xcef1,	// (0x0009442a) main_cset_text_pane_t2_copy1

0xceff,	// (0x00094438) main_cset_text_pane_t3_copy1

0xcf0d,	// (0x00094446) main_cset_text_pane_t4_copy1

0xcf1b,	// (0x00094454) main_cset_text_pane_t5_copy1

0xcf29,	// (0x00094462) main_cset_text_pane_t6_copy1

0xcf37,	// (0x00094470) main_cset_text_pane_t7_copy1

0x91bc,	// (0x000906f5) main_cset_text2_pane_t1_copy1

0x024d,	// (0x00087786) main_ncimui_pane

0x5a1a,	// (0x0008cf53) popup_query_ncimui_window_ParamLimits

0x5a1a,	// (0x0008cf53) popup_query_ncimui_window

0xc670,	// (0x00093ba9) field_cale_ev2_pane_g4_ParamLimits

0xc670,	// (0x00093ba9) field_cale_ev2_pane_g4

0x75af,	// (0x0008eae8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x75af,	// (0x0008eae8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x00096e30) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x00096e30) cell_video_dialer_keypad_pane_g

0x75c7,	// (0x0008eb00) cell_video_dialer_keypad_pane_t1

0x024d,	// (0x00087786) bg_popup_window_pane_cp012

0x4484,	// (0x0008b9bd) heading_pane_cp06

0xd81d,	// (0x00094d56) ncim_query_content_pane

0x024d,	// (0x00087786) bg_popup_heading_pane_cp01

0xd825,	// (0x00094d5e) ncim_heading_pane_t1

0xd833,	// (0x00094d6c) ncim_indicator_popup_pane

0xd845,	// (0x00094d7e) ncim_query_button_pane

0xd85b,	// (0x00094d94) ncim_query_content_pane_t1

0xd86d,	// (0x00094da6) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00097182) ncim_query_content_pane_t

0xd8a7,	// (0x00094de0) ncim_query_list_pane

0xd8b9,	// (0x00094df2) ncim_query_popup_pane

0xd833,	// (0x00094d6c) ncim_indicator_popup_pane_ParamLimits

0x94eb,	// (0x00090a24) ncim_query_content_pane_g1_ParamLimits

0x94eb,	// (0x00090a24) ncim_query_content_pane_g1

0xd85b,	// (0x00094d94) ncim_query_content_pane_t1_ParamLimits

0xd86d,	// (0x00094da6) ncim_query_content_pane_t2_ParamLimits

0x94f7,	// (0x00090a30) ncim_query_content_pane_t3_ParamLimits

0x94f7,	// (0x00090a30) ncim_query_content_pane_t3

0x951f,	// (0x00090a58) ncim_query_content_pane_t4_ParamLimits

0x951f,	// (0x00090a58) ncim_query_content_pane_t4

0x9547,	// (0x00090a80) ncim_query_content_pane_t5_ParamLimits

0x9547,	// (0x00090a80) ncim_query_content_pane_t5

0xd87f,	// (0x00094db8) ncim_query_content_pane_t6_ParamLimits

0xd87f,	// (0x00094db8) ncim_query_content_pane_t6

0xfc49,	// (0x00097182) ncim_query_content_pane_t_ParamLimits

0xd8a7,	// (0x00094de0) ncim_query_list_pane_ParamLimits

0xd8b9,	// (0x00094df2) ncim_query_popup_pane_ParamLimits

0xd8cd,	// (0x00094e06) wait_bar_pane_cp04

0x024d,	// (0x00087786) input_focus_pane_cp011

0xd8d5,	// (0x00094e0e) ncim_query_popup_pane_t1

0xd8e3,	// (0x00094e1c) ncim_list_query_list_pane_ParamLimits

0xd8e3,	// (0x00094e1c) ncim_list_query_list_pane

0x024d,	// (0x00087786) bg_button_pane_cp027

0xd8f6,	// (0x00094e2f) ncim_query_button_pane_g1

0x024d,	// (0x00087786) list_highlight_pane_cp012

0xd900,	// (0x00094e39) ncim_list_query_list_pane_g1

0xd908,	// (0x00094e41) ncim_list_query_list_pane_t1

0x7baf,	// (0x0008f0e8) cam4_indicators_pane_g3_ParamLimits

0x7baf,	// (0x0008f0e8) cam4_indicators_pane_g3

0x7baf,	// (0x0008f0e8) vid4_indicators_pane_g5_ParamLimits

0x7baf,	// (0x0008f0e8) vid4_indicators_pane_g5

0xf0a8,	// (0x000965e1) vid4_progress_pane_g5_ParamLimits

0xf0a8,	// (0x000965e1) vid4_progress_pane_g5

0x9433,	// (0x0009096c) main_ncimui_pane_g1

0x9479,	// (0x000909b2) ncimui_group_query_pane_ParamLimits

0x9479,	// (0x000909b2) ncimui_group_query_pane

0x94ad,	// (0x000909e6) ncimui_list_pane_ParamLimits

0x94ad,	// (0x000909e6) ncimui_list_pane

0x94c7,	// (0x00090a00) ncimui_text_pane_ParamLimits

0x94c7,	// (0x00090a00) ncimui_text_pane

0x956f,	// (0x00090aa8) ncimui_text_pane_t1_ParamLimits

0x956f,	// (0x00090aa8) ncimui_text_pane_t1

0xd916,	// (0x00094e4f) ncimui_list_single_graphic_pane_ParamLimits

0xd916,	// (0x00094e4f) ncimui_list_single_graphic_pane

0x958c,	// (0x00090ac5) ncimui_query_pane_ParamLimits

0x958c,	// (0x00090ac5) ncimui_query_pane

0x024d,	// (0x00087786) list_highlight_pane_cp013

0xd926,	// (0x00094e5f) ncim_list_query_list_pane_t1_copy1

0xd900,	// (0x00094e39) ncim_list_single_graphic_pane_g1

0xd934,	// (0x00094e6d) ncim_query_button_pane_cp01

0xd93c,	// (0x00094e75) ncim_query_entry_pane_ParamLimits

0xd93c,	// (0x00094e75) ncim_query_entry_pane

0xd94c,	// (0x00094e85) ncimui_query_pane_g1

0xd954,	// (0x00094e8d) ncimui_query_pane_t1_ParamLimits

0xd954,	// (0x00094e8d) ncimui_query_pane_t1

0x024d,	// (0x00087786) input_focus_pane_cp012

0xd8d5,	// (0x00094e0e) ncim_query_entry_pane_t1

0x09e7,	// (0x00087f20) main_im_pane_ParamLimits

0xabd7,	// (0x00092110) main_mobtv_pane_ParamLimits

0xabd7,	// (0x00092110) main_mobtv_pane

0x92cb,	// (0x00090804) main_cset6_slider_pane_g18_ParamLimits

0x92cb,	// (0x00090804) main_cset6_slider_pane_g18

0x92d7,	// (0x00090810) main_cset6_slider_pane_g19_ParamLimits

0x92d7,	// (0x00090810) main_cset6_slider_pane_g19

0xd96a,	// (0x00094ea3) bg_main_mobtv_pane_ParamLimits

0xd96a,	// (0x00094ea3) bg_main_mobtv_pane

0x959c,	// (0x00090ad5) main_mobtv_info_pane

0x95a7,	// (0x00090ae0) main_mobtv_loading_pane_ParamLimits

0x95a7,	// (0x00090ae0) main_mobtv_loading_pane

0xd978,	// (0x00094eb1) main_mobtv_pg_channel_list_pane

0xd982,	// (0x00094ebb) main_mobtv_pg_hdr_pane

0x95b4,	// (0x00090aed) main_mobtv_programe_curr_pane_ParamLimits

0x95b4,	// (0x00090aed) main_mobtv_programe_curr_pane

0x95c1,	// (0x00090afa) main_mobtv_programe_next_pane_ParamLimits

0x95c1,	// (0x00090afa) main_mobtv_programe_next_pane

0xd98b,	// (0x00094ec4) popup_mobtv_noti_window

0x0f18,	// (0x00088451) main_tv_pg_hdr_pane_g1

0xd995,	// (0x00094ece) main_tv_pg_hdr_pane_g2

0xd99d,	// (0x00094ed6) main_tv_pg_hdr_pane_g3

0xd9a5,	// (0x00094ede) main_tv_pg_hdr_pane_g4

0xd9ad,	// (0x00094ee6) main_tv_pg_hdr_pane_g5

0xd9b7,	// (0x00094ef0) main_tv_pg_hdr_pane_g6

0xd9c1,	// (0x00094efa) main_tv_pg_hdr_pane_g7

0xd9cb,	// (0x00094f04) main_tv_pg_hdr_pane_g8

0xd9d5,	// (0x00094f0e) main_tv_pg_hdr_pane_g9

0xd9df,	// (0x00094f18) main_tv_pg_hdr_pane_g10

0xd9e9,	// (0x00094f22) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0009718f) main_tv_pg_hdr_pane_g

0xd9f3,	// (0x00094f2c) main_tv_pg_hdr_pane_t1

0xda01,	// (0x00094f3a) main_tv_pg_hdr_pane_t2

0xda0f,	// (0x00094f48) main_tv_pg_hdr_pane_t3

0xda1f,	// (0x00094f58) main_tv_pg_hdr_pane_t4

0xda2f,	// (0x00094f68) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x000971a6) main_tv_pg_hdr_pane_t

0xda3f,	// (0x00094f78) single_mobtv_pg_channel_pane_ParamLimits

0xda3f,	// (0x00094f78) single_mobtv_pg_channel_pane

0xda51,	// (0x00094f8a) single_mobtv_pg_channel_table_pane

0xda5a,	// (0x00094f93) single_mobtv_pg_channel_thumb_pane

0xda63,	// (0x00094f9c) single_tv_pg_channel_pane_g1

0xda6c,	// (0x00094fa5) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x000971b1) single_tv_pg_channel_pane_g

0x1148,	// (0x00088681) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1148,	// (0x00088681) bg_single_mobtv_pg_channel_thumb_pane

0xda75,	// (0x00094fae) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda75,	// (0x00094fae) single_mobtv_pg_channel_thumb_pane_g1

0xda83,	// (0x00094fbc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda83,	// (0x00094fbc) single_mobtv_pg_channel_thumb_pane_g2

0xda8f,	// (0x00094fc8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda8f,	// (0x00094fc8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x000971b6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x000971b6) single_mobtv_pg_channel_thumb_pane_g

0xda9b,	// (0x00094fd4) single_mobtv_pg_channel_thumb_pane_t1

0xdaa9,	// (0x00094fe2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x000971bd) single_mobtv_pg_channel_thumb_pane_t

0x0f18,	// (0x00088451) bg_single_mobtv_pg_channel_table_pane_g1

0x0f18,	// (0x00088451) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00096c7c) bg_single_mobtv_pg_channel_table_pane_g

0xdab7,	// (0x00094ff0) single_mobtv_pg_channel_table_pane_t1

0xdac5,	// (0x00094ffe) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x000971c2) single_mobtv_pg_channel_table_pane_t

0x95d6,	// (0x00090b0f) main_mobtv_info_pane_g1_ParamLimits

0x95d6,	// (0x00090b0f) main_mobtv_info_pane_g1

0x95f4,	// (0x00090b2d) main_mobtv_info_pane_t1_ParamLimits

0x95f4,	// (0x00090b2d) main_mobtv_info_pane_t1

0x966c,	// (0x00090ba5) main_mobtv_info_pane_t2_ParamLimits

0x966c,	// (0x00090ba5) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x000971cc) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x000971cc) main_mobtv_info_pane_t

0x96fd,	// (0x00090c36) wait_bar_pane_cp05

0x970f,	// (0x00090c48) main_mobtv_loading_pane_g1_ParamLimits

0x970f,	// (0x00090c48) main_mobtv_loading_pane_g1

0x9720,	// (0x00090c59) main_mobtv_loading_pane_g2_ParamLimits

0x9720,	// (0x00090c59) main_mobtv_loading_pane_g2

0x972c,	// (0x00090c65) main_mobtv_loading_pane_g3_ParamLimits

0x972c,	// (0x00090c65) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x000971d3) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x000971d3) main_mobtv_loading_pane_g

0xdad3,	// (0x0009500c) main_mobtv_loading_pane_t1_ParamLimits

0xdad3,	// (0x0009500c) main_mobtv_loading_pane_t1

0xdaeb,	// (0x00095024) main_mobtv_loading_pane_t2_ParamLimits

0xdaeb,	// (0x00095024) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x000971da) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x000971da) main_mobtv_loading_pane_t

0x973f,	// (0x00090c78) wait_bar_pane_cp06_ParamLimits

0x973f,	// (0x00090c78) wait_bar_pane_cp06

0xdb0f,	// (0x00095048) main_mobtv_programe_curr_pane_t1

0xdb1d,	// (0x00095056) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x000971df) main_mobtv_programe_curr_pane_t

0xdb2b,	// (0x00095064) main_mobtv_programe_next_pane_t1

0xdb39,	// (0x00095072) main_mobtv_programe_next_pane_t2

0xdb47,	// (0x00095080) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x000971e4) main_mobtv_programe_next_pane_t

0x024d,	// (0x00087786) bg_popup_mobtv_noti_window_pane

0xdb55,	// (0x0009508e) popup_mobtv_noti_window_g1

0xdb5d,	// (0x00095096) popup_mobtv_noti_window_t1

0xdb6b,	// (0x000950a4) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x000971eb) popup_mobtv_noti_window_t

0x0f18,	// (0x00088451) bg_popup_mobtv_noti_window_pane_g1

0x024d,	// (0x00087786) sc_clock_pane

0x024d,	// (0x00087786) main_fs_bigclock_pane

0x8f10,	// (0x00090449) blid2_tripm_pane_t4_ParamLimits

0x8f10,	// (0x00090449) blid2_tripm_pane_t4

0x974e,	// (0x00090c87) sc_clock_pane_g1_ParamLimits

0x974e,	// (0x00090c87) sc_clock_pane_g1

0x9760,	// (0x00090c99) sc_clock_pane_t1_ParamLimits

0x9760,	// (0x00090c99) sc_clock_pane_t1

0x9784,	// (0x00090cbd) sc_clock_pane_t2_ParamLimits

0x9784,	// (0x00090cbd) sc_clock_pane_t2

0x979c,	// (0x00090cd5) sc_clock_pane_t3_ParamLimits

0x979c,	// (0x00090cd5) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x000971f0) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x000971f0) sc_clock_pane_t

0xa546,	// (0x00091a7f) main_fs_bigclock_indicator_pane_ParamLimits

0xa546,	// (0x00091a7f) main_fs_bigclock_indicator_pane

0x1118,	// (0x00088651) main_fs_bigclock_pane_g1_ParamLimits

0x1118,	// (0x00088651) main_fs_bigclock_pane_g1

0xa552,	// (0x00091a8b) main_fs_bigclock_pane_t1_ParamLimits

0xa552,	// (0x00091a8b) main_fs_bigclock_pane_t1

0xa564,	// (0x00091a9d) main_fs_bigclock_pane_t2_ParamLimits

0xa564,	// (0x00091a9d) main_fs_bigclock_pane_t2

0xa578,	// (0x00091ab1) main_fs_bigclock_pane_t3_ParamLimits

0xa578,	// (0x00091ab1) main_fs_bigclock_pane_t3

0x0002,

0xfeb6,	// (0x000973ef) main_fs_bigclock_pane_t_ParamLimits

0xfeb6,	// (0x000973ef) main_fs_bigclock_pane_t

0xe7c2,	// (0x00095cfb) main_fs_bigclock_indicator_pane_g1

0xd84d,	// (0x00094d86) ncim_query_content_pane_g2_ParamLimits

0xd84d,	// (0x00094d86) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0009717d) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0009717d) ncim_query_content_pane_g

0x97b1,	// (0x00090cea) sc_clock_pane_t4_ParamLimits

0x97b1,	// (0x00090cea) sc_clock_pane_t4

0xabd7,	// (0x00092110) main_radioblah_pane

0xcb6c,	// (0x000940a5) cell_call4_button_pane_t1_copy1_ParamLimits

0xcb6c,	// (0x000940a5) cell_call4_button_pane_t1_copy1

0x943b,	// (0x00090974) main_ncimui_pane_t1_ParamLimits

0x943b,	// (0x00090974) main_ncimui_pane_t1

0x944d,	// (0x00090986) main_ncimui_pane_t2_ParamLimits

0x944d,	// (0x00090986) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00097176) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00097176) main_ncimui_pane_t

0xdca3,	// (0x000951dc) main_radioblah_anim_pane_ParamLimits

0xdca3,	// (0x000951dc) main_radioblah_anim_pane

0xdcb4,	// (0x000951ed) main_radioblah_info_pane_ParamLimits

0xdcb4,	// (0x000951ed) main_radioblah_info_pane

0xdcc8,	// (0x00095201) main_radioblah_pane_t1_ParamLimits

0xdcc8,	// (0x00095201) main_radioblah_pane_t1

0xdce4,	// (0x0009521d) main_radioblah_pane_t2_ParamLimits

0xdce4,	// (0x0009521d) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x00097211) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x00097211) main_radioblah_pane_t

0x985f,	// (0x00090d98) main_radioblah_rocker_ctrl_pane_ParamLimits

0x985f,	// (0x00090d98) main_radioblah_rocker_ctrl_pane

0xdd2c,	// (0x00095265) main_radioblah_info_pane_t1_ParamLimits

0xdd2c,	// (0x00095265) main_radioblah_info_pane_t1

0x98b7,	// (0x00090df0) main_radioblah_info_pane_t2_ParamLimits

0x98b7,	// (0x00090df0) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x0009721a) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x0009721a) main_radioblah_info_pane_t

0x0f18,	// (0x00088451) main_radioblah_rocker_ctrl_pane_g1

0x9967,	// (0x00090ea0) main_radioblah_rocker_ctrl_pane_g2

0x996f,	// (0x00090ea8) main_radioblah_rocker_ctrl_pane_g3

0x9977,	// (0x00090eb0) main_radioblah_rocker_ctrl_pane_g4

0x997f,	// (0x00090eb8) main_radioblah_rocker_ctrl_pane_g5

0x9987,	// (0x00090ec0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x00097223) main_radioblah_rocker_ctrl_pane_g

0x91bc,	// (0x000906f5) main_cset_text2_pane_t1_copy1_ParamLimits

0xef9b,	// (0x000964d4) cam4_image_uncrop_qvga_pane

0xefad,	// (0x000964e6) vid4_image_uncrop_qcif_pane

0xf10a,	// (0x00096643) cam6_image_uncrop_qvga_pane_ParamLimits

0xf10a,	// (0x00096643) cam6_image_uncrop_qvga_pane

0xd464,	// (0x0009499d) vid6_image_uncrop_qcif_pane_ParamLimits

0xd464,	// (0x0009499d) vid6_image_uncrop_qcif_pane

0x024d,	// (0x00087786) bg_popup_preview_window_pane_cp03

0xd7ff,	// (0x00094d38) list_cset_text2_pane

0xd807,	// (0x00094d40) main_cset6_text2_pane_g1

0xd80f,	// (0x00094d48) main_cset6_text2_pane_t1

0x998f,	// (0x00090ec8) list_cset_text2_pane_t1_ParamLimits

0x998f,	// (0x00090ec8) list_cset_text2_pane_t1

0xabd7,	// (0x00092110) main_radioblah_pane_ParamLimits

0x96e9,	// (0x00090c22) main_mobtv_info_pane_t3_ParamLimits

0x96e9,	// (0x00090c22) main_mobtv_info_pane_t3

0x984d,	// (0x00090d86) main_radioblah_pane_g1

0x9887,	// (0x00090dc0) main_radioblah_info_pane_g1

0x990c,	// (0x00090e45) main_radioblah_info_pane_t3_ParamLimits

0x990c,	// (0x00090e45) main_radioblah_info_pane_t3

0x3e43,	// (0x0008b37c) highlight_cell_cale_month_pane_ParamLimits

0x3e43,	// (0x0008b37c) highlight_cell_cale_month_pane

0x024d,	// (0x00087786) main_phob_fisheye_pane

0x122a,	// (0x00088763) scroll_pane_cp0031_ParamLimits

0x122a,	// (0x00088763) scroll_pane_cp0031

0xd576,	// (0x00094aaf) wait_bar_pane_cp08_ParamLimits

0x9245,	// (0x0009077e) cset_list_set_pane_copy1_ParamLimits

0xdd66,	// (0x0009529f) highlight_cell_cale_month_pane_g1

0x99a9,	// (0x00090ee2) highlight_cell_cale_month_pane_t1

0xd1ab,	// (0x000946e4) list_gen_pane_cp01

0xcd5c,	// (0x00094295) scroll_pane_01

0x99b7,	// (0x00090ef0) list_single_double_fisheye_pane

0xdd6e,	// (0x000952a7) list_double_fisheye_pane_g1_ParamLimits

0xdd6e,	// (0x000952a7) list_double_fisheye_pane_g1

0xdd7a,	// (0x000952b3) list_double_fisheye_pane_g2_ParamLimits

0xdd7a,	// (0x000952b3) list_double_fisheye_pane_g2

0x99c0,	// (0x00090ef9) list_double_fisheye_pane_g3_ParamLimits

0x99c0,	// (0x00090ef9) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x00097230) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x00097230) list_double_fisheye_pane_g

0x99cc,	// (0x00090f05) list_double_fisheye_pane_t1_ParamLimits

0x99cc,	// (0x00090f05) list_double_fisheye_pane_t1

0x99e7,	// (0x00090f20) list_double_fisheye_pane_t2_ParamLimits

0x99e7,	// (0x00090f20) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x0009723b) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x0009723b) list_double_fisheye_pane_t

0x024d,	// (0x00087786) main_call5_pane

0x97dc,	// (0x00090d15) sc_swipe_pane_ParamLimits

0x97dc,	// (0x00090d15) sc_swipe_pane

0x9a1c,	// (0x00090f55) call5_image_pane_ParamLimits

0x9a1c,	// (0x00090f55) call5_image_pane

0x9a39,	// (0x00090f72) call5_swipe_1_pane_ParamLimits

0x9a39,	// (0x00090f72) call5_swipe_1_pane

0x9a4c,	// (0x00090f85) call5_swipe_2_pane_ParamLimits

0x9a4c,	// (0x00090f85) call5_swipe_2_pane

0x9a79,	// (0x00090fb2) popup_call5_audio_first_window_ParamLimits

0x9a79,	// (0x00090fb2) popup_call5_audio_first_window

0x1148,	// (0x00088681) call5_swipe_1_pane_g1_ParamLimits

0x1148,	// (0x00088681) call5_swipe_1_pane_g1

0xddab,	// (0x000952e4) call5_swipe_1_pane_g2_ParamLimits

0xddab,	// (0x000952e4) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x00097240) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x00097240) call5_swipe_1_pane_g

0xddb7,	// (0x000952f0) call5_swipe_1_pane_t1_ParamLimits

0xddb7,	// (0x000952f0) call5_swipe_1_pane_t1

0x1148,	// (0x00088681) call5_swipe_2_pane_g1_ParamLimits

0x1148,	// (0x00088681) call5_swipe_2_pane_g1

0xddcc,	// (0x00095305) call5_swipe_2_pane_g2_ParamLimits

0xddcc,	// (0x00095305) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00097245) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00097245) call5_swipe_2_pane_g

0xddd8,	// (0x00095311) call5_swipe_2_pane_t1_ParamLimits

0xddd8,	// (0x00095311) call5_swipe_2_pane_t1

0xdded,	// (0x00095326) sc_swipe_pane_g1_ParamLimits

0xdded,	// (0x00095326) sc_swipe_pane_g1

0xddfa,	// (0x00095333) sc_swipe_pane_g2_ParamLimits

0xddfa,	// (0x00095333) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x0009724a) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x0009724a) sc_swipe_pane_g

0xde06,	// (0x0009533f) sc_swipe_pane_t1_ParamLimits

0xde06,	// (0x0009533f) sc_swipe_pane_t1

0x024d,	// (0x00087786) main_cmail_launcher_pane

0x9a8e,	// (0x00090fc7) aid_size_cell_cmail_l_ParamLimits

0x9a8e,	// (0x00090fc7) aid_size_cell_cmail_l

0x9aa8,	// (0x00090fe1) grid_cmail_l_pane_ParamLimits

0x9aa8,	// (0x00090fe1) grid_cmail_l_pane

0x9ac4,	// (0x00090ffd) cell_cmail_l_pane_ParamLimits

0x9ac4,	// (0x00090ffd) cell_cmail_l_pane

0x9aec,	// (0x00091025) cell_cmail_l_pane_g1_ParamLimits

0x9aec,	// (0x00091025) cell_cmail_l_pane_g1

0x9af8,	// (0x00091031) cell_cmail_l_pane_t1_ParamLimits

0x9af8,	// (0x00091031) cell_cmail_l_pane_t1

0xde1b,	// (0x00095354) cell_cmail_l_pane_t2_ParamLimits

0xde1b,	// (0x00095354) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0009724f) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0009724f) cell_cmail_l_pane_t

0xabd7,	// (0x00092110) grid_highlight_pane_cp018_ParamLimits

0xabd7,	// (0x00092110) grid_highlight_pane_cp018

0x23d0,	// (0x00089909) main2_pane_ParamLimits

0x23d0,	// (0x00089909) main2_pane

0x0a92,	// (0x00087fcb) popup_sp_fs_action_menu_bg_pane_g1

0x0a9a,	// (0x00087fd3) popup_sp_fs_action_menu_bg_pane_g2

0x0aa2,	// (0x00087fdb) popup_sp_fs_action_menu_bg_pane_g3

0x0aaa,	// (0x00087fe3) popup_sp_fs_action_menu_bg_pane_g4

0x0ab2,	// (0x00087feb) popup_sp_fs_action_menu_bg_pane_g5

0x0aba,	// (0x00087ff3) popup_sp_fs_action_menu_bg_pane_g6

0x0ac2,	// (0x00087ffb) popup_sp_fs_action_menu_bg_pane_g7

0x0aca,	// (0x00088003) popup_sp_fs_action_menu_bg_pane_g8

0x0ad2,	// (0x0008800b) popup_sp_fs_action_menu_bg_pane_g9

0x0ada,	// (0x00088013) popup_sp_fs_action_menu_bg_pane_g10

0x0ada,	// (0x00088013) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00096728) popup_sp_fs_action_menu_bg_pane_g

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g3_g1

0x311c,	// (0x0008a655) list_medium_line_x2_t3_g3_g2_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_t3_g3_g2

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x000967d8) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x000967d8) list_medium_line_x2_t3_g3_g

0x3134,	// (0x0008a66d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3134,	// (0x0008a66d) list_medium_line_x2_t3_g3_t1

0x3149,	// (0x0008a682) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3149,	// (0x0008a682) list_medium_line_x2_t3_g3_t2

0x315d,	// (0x0008a696) list_medium_line_x2_t3_g3_t3_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x000967df) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x000967df) list_medium_line_x2_t3_g3_t

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g2_g1

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x000967e6) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x000967e6) list_medium_line_x2_t3_g2_g

0x3172,	// (0x0008a6ab) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3172,	// (0x0008a6ab) list_medium_line_x2_t3_g2_t1

0x3188,	// (0x0008a6c1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3188,	// (0x0008a6c1) list_medium_line_x2_t3_g2_t2

0x319a,	// (0x0008a6d3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x319a,	// (0x0008a6d3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x000967eb) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x000967eb) list_medium_line_x2_t3_g2_t

0x3110,	// (0x0008a649) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t4_g4_g1

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t4_g4_g2_ParamLimits

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t4_g4_g2

0x311c,	// (0x0008a655) list_medium_line_x2_t4_g4_g3_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_t4_g4_g3

0x31c4,	// (0x0008a6fd) list_medium_line_x2_t4_g4_g4_ParamLimits

0x31c4,	// (0x0008a6fd) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x000967f2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x000967f2) list_medium_line_x2_t4_g4_g

0x31d0,	// (0x0008a709) list_medium_line_x2_t4_g4_t1_ParamLimits

0x31d0,	// (0x0008a709) list_medium_line_x2_t4_g4_t1

0x31ea,	// (0x0008a723) list_medium_line_x2_t4_g4_t2_ParamLimits

0x31ea,	// (0x0008a723) list_medium_line_x2_t4_g4_t2

0x3200,	// (0x0008a739) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3200,	// (0x0008a739) list_medium_line_x2_t4_g4_t3

0x3215,	// (0x0008a74e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3215,	// (0x0008a74e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x000967fb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x000967fb) list_medium_line_x2_t4_g4_t

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g4_g1

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t2_g4_g2_ParamLimits

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t2_g4_g2

0x311c,	// (0x0008a655) list_medium_line_x2_t2_g4_g3_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_t2_g4_g3

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00096862) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00096862) list_medium_line_x2_t2_g4_g

0x3e61,	// (0x0008b39a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3e61,	// (0x0008b39a) list_medium_line_x2_t2_g4_t1

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g4_t2_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x0009686b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x0009686b) list_medium_line_x2_t2_g4_t

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g3_g1

0x311c,	// (0x0008a655) list_medium_line_x2_t2_g3_g2_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_t2_g3_g2

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x000967d8) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x000967d8) list_medium_line_x2_t2_g3_g

0x3e76,	// (0x0008b3af) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3e76,	// (0x0008b3af) list_medium_line_x2_t2_g3_t1

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g3_t2_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00096870) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00096870) list_medium_line_x2_t2_g3_t

0x41dc,	// (0x0008b715) main_sp_fs_list_pane_ParamLimits

0x41dc,	// (0x0008b715) main_sp_fs_list_pane

0x41e8,	// (0x0008b721) sp_fs_scroll_pane_ParamLimits

0x41e8,	// (0x0008b721) sp_fs_scroll_pane

0x41f4,	// (0x0008b72d) list_medium_line_x2_t3_t1

0x4204,	// (0x0008b73d) list_medium_line_x2_t3_t2

0x4212,	// (0x0008b74b) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000968bb) list_medium_line_x2_t3_t

0x4220,	// (0x0008b759) list_medium_line_x3_t4_t1

0x4230,	// (0x0008b769) list_medium_line_x3_t4_t2

0x423e,	// (0x0008b777) list_medium_line_x3_t4_t3

0x4212,	// (0x0008b74b) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000968c2) list_medium_line_x3_t4_t

0x424c,	// (0x0008b785) list_medium_line_x4_t5_t1

0x425c,	// (0x0008b795) list_medium_line_x4_t5_t2

0x423e,	// (0x0008b777) list_medium_line_x4_t5_t3

0x426a,	// (0x0008b7a3) list_medium_line_x4_t5_t4

0x4212,	// (0x0008b74b) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000968cb) list_medium_line_x4_t5_t

0x3110,	// (0x0008a649) list_medium_line_t4_g4_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_t4_g4_g1

0x31c4,	// (0x0008a6fd) list_medium_line_t4_g4_g2_ParamLimits

0x31c4,	// (0x0008a6fd) list_medium_line_t4_g4_g2

0x4278,	// (0x0008b7b1) list_medium_line_t4_g4_g3_ParamLimits

0x4278,	// (0x0008b7b1) list_medium_line_t4_g4_g3

0x3128,	// (0x0008a661) list_medium_line_t4_g4_g4_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000968d6) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000968d6) list_medium_line_t4_g4_g

0x4284,	// (0x0008b7bd) list_medium_line_t4_g4_t1_ParamLimits

0x4284,	// (0x0008b7bd) list_medium_line_t4_g4_t1

0x4299,	// (0x0008b7d2) list_medium_line_t4_g4_t2_ParamLimits

0x4299,	// (0x0008b7d2) list_medium_line_t4_g4_t2

0x42af,	// (0x0008b7e8) list_medium_line_t4_g4_t3_ParamLimits

0x42af,	// (0x0008b7e8) list_medium_line_t4_g4_t3

0x315d,	// (0x0008a696) list_medium_line_t4_g4_t4_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000968df) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000968df) list_medium_line_t4_g4_t

0x4538,	// (0x0008ba71) chi_dic_find_pane_g1

0x57a0,	// (0x0008ccd9) main_tport_pane

0xce6c,	// (0x000943a5) list_medium_line_plain_t1

0xce82,	// (0x000943bb) list_medium_line_t2_g2_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t2_g2_g1

0xce8e,	// (0x000943c7) list_medium_line_t2_g2_g2_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00096f92) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00096f92) list_medium_line_t2_g2_g

0x8760,	// (0x0008fc99) list_medium_line_t2_g2_t1_ParamLimits

0x8760,	// (0x0008fc99) list_medium_line_t2_g2_t1

0x8777,	// (0x0008fcb0) list_medium_line_t2_g2_t2_ParamLimits

0x8777,	// (0x0008fcb0) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00096f97) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00096f97) list_medium_line_t2_g2_t

0xd1b4,	// (0x000946ed) aid_sp_fs_list_icon_a_sm

0xd1bc,	// (0x000946f5) aid_sp_fs_list_icon_d

0xd1c4,	// (0x000946fd) aid_sp_fs_text_primary

0xd1cd,	// (0x00094706) aid_sp_fs_text_secondary

0xd1d6,	// (0x0009470f) list_medium_line

0xd1d6,	// (0x0009470f) list_medium_line_g2

0xd1d6,	// (0x0009470f) list_medium_line_g3

0xd1d6,	// (0x0009470f) list_medium_line_plain

0xd1d6,	// (0x0009470f) list_medium_line_plain_t2

0xd1d6,	// (0x0009470f) list_medium_line_plain_t3

0xd1d6,	// (0x0009470f) list_medium_line_right_icon

0xd1d6,	// (0x0009470f) list_medium_line_right_iconx2

0xd1d6,	// (0x0009470f) list_medium_line_t2

0xd1d6,	// (0x0009470f) list_medium_line_t2_g2

0xd1d6,	// (0x0009470f) list_medium_line_t2_g3

0xd1d6,	// (0x0009470f) list_medium_line_t2_right_icon

0xd1d6,	// (0x0009470f) list_medium_line_t2_right_iconx2

0xd1d6,	// (0x0009470f) list_medium_line_t3

0xd1d6,	// (0x0009470f) list_medium_line_t3_g2

0xd1d6,	// (0x0009470f) list_medium_line_t3_g3

0xd1d6,	// (0x0009470f) list_medium_line_t3_right_iconx2

0xd1df,	// (0x00094718) list_medium_line_t4_g4

0xd1e8,	// (0x00094721) list_medium_line_x2

0xd1e8,	// (0x00094721) list_medium_line_x2_t2_g2

0xd1e8,	// (0x00094721) list_medium_line_x2_t2_g3

0xd1e8,	// (0x00094721) list_medium_line_x2_t2_g4

0xd1e8,	// (0x00094721) list_medium_line_x2_t3

0xd1e8,	// (0x00094721) list_medium_line_x2_t3_g2

0xd1e8,	// (0x00094721) list_medium_line_x2_t3_g3

0xd1e8,	// (0x00094721) list_medium_line_x2_t3_g4

0xd1e8,	// (0x00094721) list_medium_line_x2_t4_g2

0xd1e8,	// (0x00094721) list_medium_line_x2_t4_g4

0xd1f1,	// (0x0009472a) list_medium_line_x3

0xd1f1,	// (0x0009472a) list_medium_line_x3_t4

0xd1f1,	// (0x0009472a) list_medium_line_x3_t4_g4

0xd1df,	// (0x00094718) list_medium_line_x4_t4

0xd1df,	// (0x00094718) list_medium_line_x4_t4_g7

0xd1df,	// (0x00094718) list_medium_line_x4_t5

0xd1fa,	// (0x00094733) list_single_fs_dyc_pane_ParamLimits

0xd1fa,	// (0x00094733) list_single_fs_dyc_pane

0x3110,	// (0x0008a649) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x4_t4_g7_g1

0xd72e,	// (0x00094c67) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd72e,	// (0x00094c67) list_medium_line_x4_t4_g7_g2

0xd73a,	// (0x00094c73) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd73a,	// (0x00094c73) list_medium_line_x4_t4_g7_g3

0xd749,	// (0x00094c82) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd749,	// (0x00094c82) list_medium_line_x4_t4_g7_g4

0xd755,	// (0x00094c8e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd755,	// (0x00094c8e) list_medium_line_x4_t4_g7_g5

0xd764,	// (0x00094c9d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd764,	// (0x00094c9d) list_medium_line_x4_t4_g7_g6

0xd773,	// (0x00094cac) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd773,	// (0x00094cac) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0009715c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0009715c) list_medium_line_x4_t4_g7_g

0xd77f,	// (0x00094cb8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd77f,	// (0x00094cb8) list_medium_line_x4_t4_g7_t1

0xd794,	// (0x00094ccd) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd794,	// (0x00094ccd) list_medium_line_x4_t4_g7_t2

0xd7a9,	// (0x00094ce2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd7a9,	// (0x00094ce2) list_medium_line_x4_t4_g7_t3

0xd7be,	// (0x00094cf7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd7be,	// (0x00094cf7) list_medium_line_x4_t4_g7_t4

0xd7d0,	// (0x00094d09) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd7d0,	// (0x00094d09) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0009716b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0009716b) list_medium_line_x4_t4_g7_t

0xd7e2,	// (0x00094d1b) list_single_dyc_row_pane_ParamLimits

0xd7e2,	// (0x00094d1b) list_single_dyc_row_pane

0x9a09,	// (0x00090f42) call5_gesture_pane_ParamLimits

0x9a09,	// (0x00090f42) call5_gesture_pane

0x9a5f,	// (0x00090f98) call5_windows_pane_ParamLimits

0x9a5f,	// (0x00090f98) call5_windows_pane

0x9b0e,	// (0x00091047) call5_swipe_1_pane_cp_ParamLimits

0x9b0e,	// (0x00091047) call5_swipe_1_pane_cp

0x9b1a,	// (0x00091053) call5_swipe_2_pane_cp_ParamLimits

0x9b1a,	// (0x00091053) call5_swipe_2_pane_cp

0xafb2,	// (0x000924eb) call5_image_pane_cp

0x9b26,	// (0x0009105f) popup_call5_audio_first_window_cp_ParamLimits

0x9b26,	// (0x0009105f) popup_call5_audio_first_window_cp

0xdded,	// (0x00095326) call5_swipe_1_pane_g1_cp_ParamLimits

0xdded,	// (0x00095326) call5_swipe_1_pane_g1_cp

0xde2d,	// (0x00095366) call5_swipe_1_pane_g2_cp

0xde06,	// (0x0009533f) call5_swipe_1_pane_t1_cp_ParamLimits

0xde06,	// (0x0009533f) call5_swipe_1_pane_t1_cp

0xdded,	// (0x00095326) call5_swipe_2_pane_g1_cp_ParamLimits

0xdded,	// (0x00095326) call5_swipe_2_pane_g1_cp

0xde35,	// (0x0009536e) call5_swipe_2_pane_g2_cp

0xde3d,	// (0x00095376) call5_swipe_2_pane_t1_cp_ParamLimits

0xde3d,	// (0x00095376) call5_swipe_2_pane_t1_cp

0xabd7,	// (0x00092110) main_sp_fs_email_pane

0xde52,	// (0x0009538b) main_sp_fs_listscroll_pane_te

0xde5b,	// (0x00095394) popup_sp_fs_action_menu_pane_ParamLimits

0xde5b,	// (0x00095394) popup_sp_fs_action_menu_pane

0x0f18,	// (0x00088451) bg_sp_fs_ctrlbar_pane_g1

0xdea1,	// (0x000953da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdeaa,	// (0x000953e3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdeb3,	// (0x000953ec) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0f18,	// (0x00088451) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00097254) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xebb9,	// (0x000960f2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xebb9,	// (0x000960f2) bg_sp_fs_ctrlbar_ddmenu_pane

0xdebc,	// (0x000953f5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdebc,	// (0x000953f5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdec8,	// (0x00095401) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdec8,	// (0x00095401) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0009725d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0009725d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xded4,	// (0x0009540d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xded4,	// (0x0009540d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xdeee,	// (0x00095427) list_medium_line_t2_right_icon_g1

0x9b34,	// (0x0009106d) list_medium_line_t2_right_icon_t1

0x9b44,	// (0x0009107d) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00097262) list_medium_line_t2_right_icon_t

0xc41f,	// (0x00093958) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc41f,	// (0x00093958) bg_sp_fs_ctrlbar_pane

0x9b9a,	// (0x000910d3) main_sp_fs_ctrlbar_button_pane_cp01

0x9ba2,	// (0x000910db) main_sp_fs_ctrlbar_ddmenu_pane

0xdf30,	// (0x00095469) main_sp_fs_ctrlbar_pane_g1

0xdf3c,	// (0x00095475) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00097267) main_sp_fs_ctrlbar_pane_g

0xdf48,	// (0x00095481) main_sp_fs_ctrlbar_pane_t1

0x9bac,	// (0x000910e5) main_sp_fs_ctrlbar_pane

0x9bd0,	// (0x00091109) main_sp_fs_listscroll_pane_te_cp01

0x9bf0,	// (0x00091129) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9bf0,	// (0x00091129) popup_sp_fs_action_menu_pane_cp01

0xabd7,	// (0x00092110) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xabd7,	// (0x00092110) bg_sp_fs_highlight_list_pane_cp01

0xdf5d,	// (0x00095496) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdf5d,	// (0x00095496) sp_fs_action_menu_list_gene_pane_g1

0xdf6c,	// (0x000954a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdf6c,	// (0x000954a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0009726c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0009726c) sp_fs_action_menu_list_gene_pane_g

0xdf79,	// (0x000954b2) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdf79,	// (0x000954b2) sp_fs_action_menu_list_gene_pane_t1

0xdf91,	// (0x000954ca) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdf91,	// (0x000954ca) sp_fs_action_menu_list_gene_pane

0xdfb4,	// (0x000954ed) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdfb4,	// (0x000954ed) popup_sp_fs_action_menu_bg_pane

0xdfc2,	// (0x000954fb) sp_fs_action_menu_list_pane_ParamLimits

0xdfc2,	// (0x000954fb) sp_fs_action_menu_list_pane

0xdfe6,	// (0x0009551f) sp_fs_scroll_pane_cp01_ParamLimits

0xdfe6,	// (0x0009551f) sp_fs_scroll_pane_cp01

0x9c0c,	// (0x00091145) list_medium_line_plain_t2_t1

0x9c1c,	// (0x00091155) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00097271) list_medium_line_plain_t2_t

0x9c2a,	// (0x00091163) list_medium_line_plain_t3_t1

0x9c3a,	// (0x00091173) list_medium_line_plain_t3_t2

0x9c48,	// (0x00091181) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00097276) list_medium_line_plain_t3_t

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t2_g2_g1

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x000967e6) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x000967e6) list_medium_line_x2_t2_g2_g

0x4284,	// (0x0008b7bd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x4284,	// (0x0008b7bd) list_medium_line_x2_t2_g2_t1

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g2_t2_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0009727d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0009727d) list_medium_line_x2_t2_g2_t

0x3110,	// (0x0008a649) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t4_g2_g1

0xe00c,	// (0x00095545) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe00c,	// (0x00095545) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd49,	// (0x00097282) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd49,	// (0x00097282) list_medium_line_x2_t4_g2_g

0x9c56,	// (0x0009118f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9c56,	// (0x0009118f) list_medium_line_x2_t4_g2_t1

0x9c70,	// (0x000911a9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9c70,	// (0x000911a9) list_medium_line_x2_t4_g2_t2

0x9c86,	// (0x000911bf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9c86,	// (0x000911bf) list_medium_line_x2_t4_g2_t3

0x315d,	// (0x0008a696) list_medium_line_x2_t4_g2_t4_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd4e,	// (0x00097287) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd4e,	// (0x00097287) list_medium_line_x2_t4_g2_t

0xe01e,	// (0x00095557) list_medium_line_t3_right_iconx2_g1

0xdeee,	// (0x00095427) list_medium_line_t3_right_iconx2_g2

0x9c9b,	// (0x000911d4) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd57,	// (0x00097290) list_medium_line_t3_right_iconx2_g

0x9ca5,	// (0x000911de) list_medium_line_t3_right_iconx2_t1

0x9cb5,	// (0x000911ee) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd5e,	// (0x00097297) list_medium_line_t3_right_iconx2_t

0x3110,	// (0x0008a649) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x3_t4_g4_g1

0x311c,	// (0x0008a655) list_medium_line_x3_t4_g4_g2_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x3_t4_g4_g2

0x31c4,	// (0x0008a6fd) list_medium_line_x3_t4_g4_g3_ParamLimits

0x31c4,	// (0x0008a6fd) list_medium_line_x3_t4_g4_g3

0xe026,	// (0x0009555f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe026,	// (0x0009555f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd63,	// (0x0009729c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd63,	// (0x0009729c) list_medium_line_x3_t4_g4_g

0x9cc3,	// (0x000911fc) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9cc3,	// (0x000911fc) list_medium_line_x3_t4_g4_t1

0x9cda,	// (0x00091213) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9cda,	// (0x00091213) list_medium_line_x3_t4_g4_t2

0xe032,	// (0x0009556b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe032,	// (0x0009556b) list_medium_line_x3_t4_g4_t3

0xe047,	// (0x00095580) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe047,	// (0x00095580) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd6c,	// (0x000972a5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd6c,	// (0x000972a5) list_medium_line_x3_t4_g4_t

0x9cef,	// (0x00091228) list_single_dyc_row_text_pane_t1_ParamLimits

0x9cef,	// (0x00091228) list_single_dyc_row_text_pane_t1

0x9d36,	// (0x0009126f) list_single_dyc_row_text_pane_t2_ParamLimits

0x9d36,	// (0x0009126f) list_single_dyc_row_text_pane_t2

0xe064,	// (0x0009559d) list_single_dyc_row_text_pane_t3_ParamLimits

0xe064,	// (0x0009559d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd75,	// (0x000972ae) list_single_dyc_row_text_pane_t_ParamLimits

0xfd75,	// (0x000972ae) list_single_dyc_row_text_pane_t

0xe076,	// (0x000955af) list_single_dyc_row_pane_g1_ParamLimits

0xe076,	// (0x000955af) list_single_dyc_row_pane_g1

0xe082,	// (0x000955bb) list_single_dyc_row_pane_g2_ParamLimits

0xe082,	// (0x000955bb) list_single_dyc_row_pane_g2

0xe08e,	// (0x000955c7) list_single_dyc_row_pane_g3_ParamLimits

0xe08e,	// (0x000955c7) list_single_dyc_row_pane_g3

0xe09a,	// (0x000955d3) list_single_dyc_row_pane_g4_ParamLimits

0xe09a,	// (0x000955d3) list_single_dyc_row_pane_g4

0x0003,

0xfd7c,	// (0x000972b5) list_single_dyc_row_pane_g_ParamLimits

0xfd7c,	// (0x000972b5) list_single_dyc_row_pane_g

0xe0a6,	// (0x000955df) list_single_dyc_row_text_pane_ParamLimits

0xe0a6,	// (0x000955df) list_single_dyc_row_text_pane

0x024d,	// (0x00087786) bg_sp_fs_scroll_pane

0xe0c5,	// (0x000955fe) thumb_sp_fs_scroll_pane

0xce82,	// (0x000943bb) list_medium_line_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_g1

0xe0ce,	// (0x00095607) list_medium_line_t1_ParamLimits

0xe0ce,	// (0x00095607) list_medium_line_t1

0x3110,	// (0x0008a649) list_medium_line_x2_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_g1

0x311c,	// (0x0008a655) list_medium_line_x2_g2_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_g2

0x0001,

0xfd85,	// (0x000972be) list_medium_line_x2_g_ParamLimits

0xfd85,	// (0x000972be) list_medium_line_x2_g

0xe0e3,	// (0x0009561c) list_medium_line_x2_t1_ParamLimits

0xe0e3,	// (0x0009561c) list_medium_line_x2_t1

0x3110,	// (0x0008a649) list_medium_line_x3_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x3_g1

0x311c,	// (0x0008a655) list_medium_line_x3_g2_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x3_g2

0x0001,

0xfd85,	// (0x000972be) list_medium_line_x3_g_ParamLimits

0xfd85,	// (0x000972be) list_medium_line_x3_g

0xe0e3,	// (0x0009561c) list_medium_line_x3_t1_ParamLimits

0xe0e3,	// (0x0009561c) list_medium_line_x3_t1

0xe0f9,	// (0x00095632) thumb_sp_fs_scroll_pane_g1

0xe102,	// (0x0009563b) thumb_sp_fs_scroll_pane_g2

0xe10b,	// (0x00095644) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000972c3) thumb_sp_fs_scroll_pane_g

0xe0f9,	// (0x00095632) bg_sp_fs_scroll_pane_g1

0xe102,	// (0x0009563b) bg_sp_fs_scroll_pane_g2

0xe10b,	// (0x00095644) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd8a,	// (0x000972c3) bg_sp_fs_scroll_pane_g

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3110,	// (0x0008a649) list_medium_line_x2_t3_g4_g1

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t3_g4_g2_ParamLimits

0x31b8,	// (0x0008a6f1) list_medium_line_x2_t3_g4_g2

0x311c,	// (0x0008a655) list_medium_line_x2_t3_g4_g3_ParamLimits

0x311c,	// (0x0008a655) list_medium_line_x2_t3_g4_g3

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3128,	// (0x0008a661) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00096862) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00096862) list_medium_line_x2_t3_g4_g

0x9d90,	// (0x000912c9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9d90,	// (0x000912c9) list_medium_line_x2_t3_g4_t1

0x9da6,	// (0x000912df) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9da6,	// (0x000912df) list_medium_line_x2_t3_g4_t2

0x315d,	// (0x0008a696) list_medium_line_x2_t3_g4_t3_ParamLimits

0x315d,	// (0x0008a696) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd91,	// (0x000972ca) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd91,	// (0x000972ca) list_medium_line_x2_t3_g4_t

0xce82,	// (0x000943bb) list_medium_line_g2_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_g2_g1

0xce8e,	// (0x000943c7) list_medium_line_g2_g2_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00096f92) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00096f92) list_medium_line_g2_g

0xe114,	// (0x0009564d) list_medium_line_g2_t1_ParamLimits

0xe114,	// (0x0009564d) list_medium_line_g2_t1

0xce82,	// (0x000943bb) list_medium_line_t3_g2_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t3_g2_g1

0xce8e,	// (0x000943c7) list_medium_line_t3_g2_g2_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00096f92) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00096f92) list_medium_line_t3_g2_g

0x9dbf,	// (0x000912f8) list_medium_line_t3_g2_t1_ParamLimits

0x9dbf,	// (0x000912f8) list_medium_line_t3_g2_t1

0x9dd6,	// (0x0009130f) list_medium_line_t3_g2_t2_ParamLimits

0x9dd6,	// (0x0009130f) list_medium_line_t3_g2_t2

0x9deb,	// (0x00091324) list_medium_line_t3_g2_t3_ParamLimits

0x9deb,	// (0x00091324) list_medium_line_t3_g2_t3

0x0002,

0xfd98,	// (0x000972d1) list_medium_line_t3_g2_t_ParamLimits

0xfd98,	// (0x000972d1) list_medium_line_t3_g2_t

0xdeee,	// (0x00095427) list_medium_line_right_icon_g1

0xe129,	// (0x00095662) list_medium_line_right_icon_t1

0xce82,	// (0x000943bb) list_medium_line_t2_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t2_g1

0x9e04,	// (0x0009133d) list_medium_line_t2_t1_ParamLimits

0x9e04,	// (0x0009133d) list_medium_line_t2_t1

0x9e1e,	// (0x00091357) list_medium_line_t2_t2_ParamLimits

0x9e1e,	// (0x00091357) list_medium_line_t2_t2

0x0001,

0xfd9f,	// (0x000972d8) list_medium_line_t2_t_ParamLimits

0xfd9f,	// (0x000972d8) list_medium_line_t2_t

0xce82,	// (0x000943bb) list_medium_line_t3_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t3_g1

0x9e33,	// (0x0009136c) list_medium_line_t3_t1_ParamLimits

0x9e33,	// (0x0009136c) list_medium_line_t3_t1

0x9e4a,	// (0x00091383) list_medium_line_t3_t2_ParamLimits

0x9e4a,	// (0x00091383) list_medium_line_t3_t2

0x9e5f,	// (0x00091398) list_medium_line_t3_t3_ParamLimits

0x9e5f,	// (0x00091398) list_medium_line_t3_t3

0x0002,

0xfda4,	// (0x000972dd) list_medium_line_t3_t_ParamLimits

0xfda4,	// (0x000972dd) list_medium_line_t3_t

0xce82,	// (0x000943bb) list_medium_line_g3_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_g3_g1

0xe137,	// (0x00095670) list_medium_line_g3_g2_ParamLimits

0xe137,	// (0x00095670) list_medium_line_g3_g2

0xce8e,	// (0x000943c7) list_medium_line_g3_g3_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_g3_g3

0x0002,

0xfdab,	// (0x000972e4) list_medium_line_g3_g_ParamLimits

0xfdab,	// (0x000972e4) list_medium_line_g3_g

0xe143,	// (0x0009567c) list_medium_line_g3_t1_ParamLimits

0xe143,	// (0x0009567c) list_medium_line_g3_t1

0xce82,	// (0x000943bb) list_medium_line_t2_g3_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t2_g3_g1

0xe137,	// (0x00095670) list_medium_line_t2_g3_g2_ParamLimits

0xe137,	// (0x00095670) list_medium_line_t2_g3_g2

0xce8e,	// (0x000943c7) list_medium_line_t2_g3_g3_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_t2_g3_g3

0x0002,

0xfdab,	// (0x000972e4) list_medium_line_t2_g3_g_ParamLimits

0xfdab,	// (0x000972e4) list_medium_line_t2_g3_g

0x9e71,	// (0x000913aa) list_medium_line_t2_g3_t1_ParamLimits

0x9e71,	// (0x000913aa) list_medium_line_t2_g3_t1

0x9e88,	// (0x000913c1) list_medium_line_t2_g3_t2_ParamLimits

0x9e88,	// (0x000913c1) list_medium_line_t2_g3_t2

0x0001,

0xfdb2,	// (0x000972eb) list_medium_line_t2_g3_t_ParamLimits

0xfdb2,	// (0x000972eb) list_medium_line_t2_g3_t

0xce82,	// (0x000943bb) list_medium_line_t3_g3_g1_ParamLimits

0xce82,	// (0x000943bb) list_medium_line_t3_g3_g1

0xe137,	// (0x00095670) list_medium_line_t3_g3_g2_ParamLimits

0xe137,	// (0x00095670) list_medium_line_t3_g3_g2

0xce8e,	// (0x000943c7) list_medium_line_t3_g3_g3_ParamLimits

0xce8e,	// (0x000943c7) list_medium_line_t3_g3_g3

0x0002,

0xfdab,	// (0x000972e4) list_medium_line_t3_g3_g_ParamLimits

0xfdab,	// (0x000972e4) list_medium_line_t3_g3_g

0x9e9d,	// (0x000913d6) list_medium_line_t3_g3_t1_ParamLimits

0x9e9d,	// (0x000913d6) list_medium_line_t3_g3_t1

0x9eb6,	// (0x000913ef) list_medium_line_t3_g3_t2_ParamLimits

0x9eb6,	// (0x000913ef) list_medium_line_t3_g3_t2

0x9ecc,	// (0x00091405) list_medium_line_t3_g3_t3_ParamLimits

0x9ecc,	// (0x00091405) list_medium_line_t3_g3_t3

0x0002,

0xfdb7,	// (0x000972f0) list_medium_line_t3_g3_t_ParamLimits

0xfdb7,	// (0x000972f0) list_medium_line_t3_g3_t

0xe01e,	// (0x00095557) list_medium_line_right_iconx2_g1

0xdeee,	// (0x00095427) list_medium_line_right_iconx2_g2

0x0001,

0xfdbe,	// (0x000972f7) list_medium_line_right_iconx2_g

0xe158,	// (0x00095691) list_medium_line_right_iconx2_t1

0xe01e,	// (0x00095557) list_medium_line_t2_right_iconx2_g1

0xdeee,	// (0x00095427) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdbe,	// (0x000972f7) list_medium_line_t2_right_iconx2_g

0x9ee6,	// (0x0009141f) list_medium_line_t2_right_iconx2_t1

0x9ef6,	// (0x0009142f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdc3,	// (0x000972fc) list_medium_line_t2_right_iconx2_t

0xe166,	// (0x0009569f) list_medium_line_x4_t4_t1

0x9f04,	// (0x0009143d) list_medium_line_x4_t4_t2

0x9f14,	// (0x0009144d) list_medium_line_x4_t4_t3

0x9f24,	// (0x0009145d) list_medium_line_x4_t4_t4

0x0003,

0xfdc8,	// (0x00097301) list_medium_line_x4_t4_t

0x9f6e,	// (0x000914a7) tport_appsw_pane_ParamLimits

0x9f6e,	// (0x000914a7) tport_appsw_pane

0x9f81,	// (0x000914ba) tport_contact_pane_ParamLimits

0x9f81,	// (0x000914ba) tport_contact_pane

0x9f94,	// (0x000914cd) tport_listscroll_pane_ParamLimits

0x9f94,	// (0x000914cd) tport_listscroll_pane

0x9faa,	// (0x000914e3) cell_tport_appsw_pane_ParamLimits

0x9faa,	// (0x000914e3) cell_tport_appsw_pane

0xcc01,	// (0x0009413a) tport_appsw_pane_g1_ParamLimits

0xcc01,	// (0x0009413a) tport_appsw_pane_g1

0xe174,	// (0x000956ad) tport_contact_pane_g1

0xe17d,	// (0x000956b6) tport_contact_pane_t1

0xe18b,	// (0x000956c4) tport_contact_pane_t2

0x0001,

0xfdd1,	// (0x0009730a) tport_contact_pane_t

0xe199,	// (0x000956d2) list_tport_pane

0xe1a2,	// (0x000956db) scroll_pane_cp_030

0x9fc7,	// (0x00091500) cell_tport_appsw_pane_g1

0xe1ab,	// (0x000956e4) cell_tport_appsw_pane_t1

0x024d,	// (0x00087786) grid_highlight_pane_cp019

0x9fdf,	// (0x00091518) list_tport_double_graphic_pane_ParamLimits

0x9fdf,	// (0x00091518) list_tport_double_graphic_pane

0xabd7,	// (0x00092110) list_highlight_pane_cp023_ParamLimits

0xabd7,	// (0x00092110) list_highlight_pane_cp023

0x9fef,	// (0x00091528) list_tport_double_graphic_pane_g1_ParamLimits

0x9fef,	// (0x00091528) list_tport_double_graphic_pane_g1

0x9ffc,	// (0x00091535) list_tport_double_graphic_pane_t1_ParamLimits

0x9ffc,	// (0x00091535) list_tport_double_graphic_pane_t1

0xa011,	// (0x0009154a) list_tport_double_graphic_pane_t2_ParamLimits

0xa011,	// (0x0009154a) list_tport_double_graphic_pane_t2

0x0001,

0xfddd,	// (0x00097316) list_tport_double_graphic_pane_t_ParamLimits

0xfddd,	// (0x00097316) list_tport_double_graphic_pane_t

0x024d,	// (0x00087786) main_cale_note_pane

0x7ed8,	// (0x0008f411) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7ed8,	// (0x0008f411) cell_vitu2_function_top_wide_pane_cp01

0x96fd,	// (0x00090c36) wait_bar_pane_cp05_ParamLimits

0x024d,	// (0x00087786) listscroll_cmail_pane

0xe1c1,	// (0x000956fa) list_cmail_pane

0xa02d,	// (0x00091566) list_cmail_body_pane

0xa045,	// (0x0009157e) list_single_cmail_header_caption_pane

0xa065,	// (0x0009159e) list_single_cmail_header_detail_pane_ParamLimits

0xa065,	// (0x0009159e) list_single_cmail_header_detail_pane

0xa097,	// (0x000915d0) list_single_cmail_header_caption_pane_t1

0xa0a7,	// (0x000915e0) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa0a7,	// (0x000915e0) list_single_cmail_header_detail_pane_g1

0xe1e1,	// (0x0009571a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe1e1,	// (0x0009571a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfde2,	// (0x0009731b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfde2,	// (0x0009731b) list_single_cmail_header_detail_pane_g

0xe1fa,	// (0x00095733) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe1fa,	// (0x00095733) list_single_cmail_header_detail_pane_t1

0xe238,	// (0x00095771) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe238,	// (0x00095771) list_single_cmail_header_editor_pane_bg

0xda6c,	// (0x00094fa5) list_cmail_body_pane_g1

0xe24a,	// (0x00095783) list_cmail_body_pane_t1

0xcc3e,	// (0x00094177) list_single_cmail_header_editor_pane_bg_g1

0x0df9,	// (0x00088332) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc4e,	// (0x00094187) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc46,	// (0x0009417f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce7a,	// (0x000943b3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc6e,	// (0x000941a7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc5e,	// (0x00094197) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc66,	// (0x0009419f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0dd9,	// (0x00088312) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa0e5,	// (0x0009161e) calenote_gesture_pane_ParamLimits

0xa0e5,	// (0x0009161e) calenote_gesture_pane

0xa105,	// (0x0009163e) calenote_window_pane_ParamLimits

0xa105,	// (0x0009163e) calenote_window_pane

0xe258,	// (0x00095791) popup_note_window_cp01

0xa121,	// (0x0009165a) calenote_swipe_1_pane_ParamLimits

0xa121,	// (0x0009165a) calenote_swipe_1_pane

0x9b1a,	// (0x00091053) calenote_swipe_2_pane_ParamLimits

0x9b1a,	// (0x00091053) calenote_swipe_2_pane

0xdded,	// (0x00095326) calenote_swipe_1_pane_g1_ParamLimits

0xdded,	// (0x00095326) calenote_swipe_1_pane_g1

0xddfa,	// (0x00095333) calenote_swipe_1_pane_g2_ParamLimits

0xddfa,	// (0x00095333) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x0009724a) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x0009724a) calenote_swipe_1_pane_g

0xe26a,	// (0x000957a3) calenote_swipe_1_pane_t1_ParamLimits

0xe26a,	// (0x000957a3) calenote_swipe_1_pane_t1

0xdded,	// (0x00095326) calenote_swipe_2_pane_g1_ParamLimits

0xdded,	// (0x00095326) calenote_swipe_2_pane_g1

0xe289,	// (0x000957c2) calenote_swipe_2_pane_g2_ParamLimits

0xe289,	// (0x000957c2) calenote_swipe_2_pane_g2

0x0001,

0xfdee,	// (0x00097327) calenote_swipe_2_pane_g_ParamLimits

0xfdee,	// (0x00097327) calenote_swipe_2_pane_g

0xe295,	// (0x000957ce) calenote_swipe_2_pane_t1_ParamLimits

0xe295,	// (0x000957ce) calenote_swipe_2_pane_t1

0x024d,	// (0x00087786) main_mup_navstr_pane

0x6b4a,	// (0x0008e083) main_mup3_pane_t7_ParamLimits

0x6b4a,	// (0x0008e083) main_mup3_pane_t7

0xedd3,	// (0x0009630c) main_mp4_pane_g6_ParamLimits

0xedd3,	// (0x0009630c) main_mp4_pane_g6

0xef69,	// (0x000964a2) main_image3_pane_t4_ParamLimits

0xef69,	// (0x000964a2) main_image3_pane_t4

0xa136,	// (0x0009166f) popup_navstr_preview_pane_ParamLimits

0xa136,	// (0x0009166f) popup_navstr_preview_pane

0xa146,	// (0x0009167f) scroll_navstr_pane_ParamLimits

0xa146,	// (0x0009167f) scroll_navstr_pane

0x024d,	// (0x00087786) bg_popup_preview_window_pane_cp04

0xe2bc,	// (0x000957f5) popup_navstr_preview_pane_t1

0xa15a,	// (0x00091693) scroll_navstr_pane_g1_ParamLimits

0xa15a,	// (0x00091693) scroll_navstr_pane_g1

0xa16e,	// (0x000916a7) scroll_navstr_pane_t1_ParamLimits

0xa16e,	// (0x000916a7) scroll_navstr_pane_t1

0xe261,	// (0x0009579a) bg_button_pane_cp014

0xe261,	// (0x0009579a) bg_button_pane_cp030

0xdd8e,	// (0x000952c7) list_double_fisheye_pane_g4_ParamLimits

0xdd8e,	// (0x000952c7) list_double_fisheye_pane_g4

0xdd9a,	// (0x000952d3) list_double_fisheye_pane_g5_ParamLimits

0xdd9a,	// (0x000952d3) list_double_fisheye_pane_g5

0xe1c9,	// (0x00095702) sp_fs_scroll_pane_cp03

0xdf30,	// (0x00095469) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf3c,	// (0x00095475) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00097267) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdf48,	// (0x00095481) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa023,	// (0x0009155c) sp_fs_scroll_pane_cp02

0x0afd,	// (0x00088036) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0afd,	// (0x00088036) popup_sp_fs_calendar_preview_list_single_pane

0x024d,	// (0x00087786) main_cam6_pano_pane

0xabd7,	// (0x00092110) main_mup3_pane_ParamLimits

0x024d,	// (0x00087786) main_phacti_pane

0x95ce,	// (0x00090b07) bg_button_pane_cp11

0x95e8,	// (0x00090b21) main_mobtv_info_pane_g2_ParamLimits

0x95e8,	// (0x00090b21) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x000971c7) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x000971c7) main_mobtv_info_pane_g

0x97c3,	// (0x00090cfc) sc_clock_pane_t5_ParamLimits

0x97c3,	// (0x00090cfc) sc_clock_pane_t5

0x984d,	// (0x00090d86) main_radioblah_pane_g1_ParamLimits

0xdcfc,	// (0x00095235) main_radioblah_pane_t3_ParamLimits

0xdcfc,	// (0x00095235) main_radioblah_pane_t3

0xdd14,	// (0x0009524d) main_radioblah_pane_t4_ParamLimits

0xdd14,	// (0x0009524d) main_radioblah_pane_t4

0x9875,	// (0x00090dae) main_radioblah_text_pane_ParamLimits

0x9875,	// (0x00090dae) main_radioblah_text_pane

0x9887,	// (0x00090dc0) main_radioblah_info_pane_g1_ParamLimits

0x9920,	// (0x00090e59) main_radioblah_info_pane_t4_ParamLimits

0x9920,	// (0x00090e59) main_radioblah_info_pane_t4

0xabd7,	// (0x00092110) main_sp_fs_calendar_pane

0xa185,	// (0x000916be) main_phacti_pane_g1

0xa18d,	// (0x000916c6) phacti_note_pane_ParamLimits

0xa18d,	// (0x000916c6) phacti_note_pane

0xe2d3,	// (0x0009580c) phacti_term_pane_ParamLimits

0xe2d3,	// (0x0009580c) phacti_term_pane

0xe2e8,	// (0x00095821) phacti_note_pane_t1_ParamLimits

0xe2e8,	// (0x00095821) phacti_note_pane_t1

0xe2ff,	// (0x00095838) phacti_term_pane_g1

0xe307,	// (0x00095840) phacti_term_pane_t1_ParamLimits

0xe307,	// (0x00095840) phacti_term_pane_t1

0xe331,	// (0x0009586a) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe339,	// (0x00095872) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf8,	// (0x00097331) popup_sp_fs_calendar_preview_list_single_pane_g

0xe341,	// (0x0009587a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe341,	// (0x0009587a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe357,	// (0x00095890) aid_popup_sp_fs_bg_corner_pane

0x0f18,	// (0x00088451) popup_sp_fs_calendar_preview_bg_pane_g1

0x024d,	// (0x00087786) popup_sp_fs_calendar_preview_bg_pane

0xe35f,	// (0x00095898) popup_sp_fs_calendar_preview_list_pane

0xabd7,	// (0x00092110) bg_main_sp_fs_cale_pane_ParamLimits

0xabd7,	// (0x00092110) bg_main_sp_fs_cale_pane

0xe370,	// (0x000958a9) listscroll_cale_mrui_pane_ParamLimits

0xe370,	// (0x000958a9) listscroll_cale_mrui_pane

0xe384,	// (0x000958bd) listscroll_sp_fs_schedule_track_pane

0xe38d,	// (0x000958c6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe38d,	// (0x000958c6) main_sp_fs_ctrlbar_pane_cp01

0xe39e,	// (0x000958d7) main_sp_fs_ribbon_pane

0xe3a6,	// (0x000958df) popup_sp_fs_cale_preview_window

0xa1e4,	// (0x0009171d) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa1e4,	// (0x0009171d) list_single_sp_fs_schedule_track_pane

0xabd7,	// (0x00092110) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xabd7,	// (0x00092110) bg_sp_fs_highlight_list_pane_cp03

0xa1f8,	// (0x00091731) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa1f8,	// (0x00091731) list_single_sp_fs_schedule_track_pane_g1

0xa204,	// (0x0009173d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa204,	// (0x0009173d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdfd,	// (0x00097336) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdfd,	// (0x00097336) list_single_sp_fs_schedule_track_pane_g

0xa210,	// (0x00091749) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa210,	// (0x00091749) list_single_sp_fs_schedule_track_pane_t1

0xa232,	// (0x0009176b) sp_fs_schedule_track_pane_ParamLimits

0xa232,	// (0x0009176b) sp_fs_schedule_track_pane

0xe3b8,	// (0x000958f1) sp_fs_schedule_track_pane_g1

0xe3c0,	// (0x000958f9) sp_fs_schedule_track_pane_g2

0xe3c8,	// (0x00095901) sp_fs_schedule_track_pane_g3

0xe3d0,	// (0x00095909) sp_fs_schedule_track_pane_g4

0xe3d8,	// (0x00095911) sp_fs_schedule_track_pane_g5

0x0004,

0xfe02,	// (0x0009733b) sp_fs_schedule_track_pane_g

0xcc3e,	// (0x00094177) bg_sp_fs_schedule_viewer_highlight_g1

0x0df9,	// (0x00088332) bg_sp_fs_schedule_viewer_highlight_g2

0xcc46,	// (0x0009417f) bg_sp_fs_schedule_viewer_highlight_g3

0xcc4e,	// (0x00094187) bg_sp_fs_schedule_viewer_highlight_g4

0xce7a,	// (0x000943b3) bg_sp_fs_schedule_viewer_highlight_g5

0xcc5e,	// (0x00094197) bg_sp_fs_schedule_viewer_highlight_g6

0xcc66,	// (0x0009419f) bg_sp_fs_schedule_viewer_highlight_g7

0xcc6e,	// (0x000941a7) bg_sp_fs_schedule_viewer_highlight_g8

0x0dd9,	// (0x00088312) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe0d,	// (0x00097346) bg_sp_fs_schedule_viewer_highlight_g

0x024d,	// (0x00087786) bg_main_sp_fs_ribbon_pane

0xa247,	// (0x00091780) main_sp_fs_ribbon_pane_g1

0xe3e0,	// (0x00095919) main_sp_fs_ribbon_pane_t1

0xa250,	// (0x00091789) main_sp_fs_ribbon_pane_t2

0xe3ef,	// (0x00095928) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe20,	// (0x00097359) main_sp_fs_ribbon_pane_t

0xe3fe,	// (0x00095937) main_sp_fs_ribbon_scheduler_pane

0xe406,	// (0x0009593f) bg_main_sp_fs_ribbon_pane_g1

0xe40f,	// (0x00095948) bg_main_sp_fs_ribbon_pane_g2

0xe418,	// (0x00095951) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe27,	// (0x00097360) bg_main_sp_fs_ribbon_pane_g

0xe420,	// (0x00095959) main_sp_fs_ribbon_scheduler_pane_g1

0xe429,	// (0x00095962) main_sp_fs_ribbon_scheduler_pane_g2

0xe432,	// (0x0009596b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe2e,	// (0x00097367) main_sp_fs_ribbon_scheduler_pane_g

0xe43b,	// (0x00095974) list_cale_mrui_pane

0xa25f,	// (0x00091798) sp_fs_scroll_pane_cp07_ParamLimits

0xa25f,	// (0x00091798) sp_fs_scroll_pane_cp07

0xa275,	// (0x000917ae) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa275,	// (0x000917ae) bg_sp_fs_schedule_viewer_highlight

0xe444,	// (0x0009597d) list_single_sp_fs_schedule_track_pane_cp01

0xe44c,	// (0x00095985) list_sp_fs_schedule_track_pane

0xe454,	// (0x0009598d) sp_fs_scroll_pane_cp06_ParamLimits

0xe454,	// (0x0009598d) sp_fs_scroll_pane_cp06

0x0f18,	// (0x00088451) bgmain_sp_fs_calendar_pane_g1

0xa287,	// (0x000917c0) list_single_cale_mrui_pane_ParamLimits

0xa287,	// (0x000917c0) list_single_cale_mrui_pane

0xe466,	// (0x0009599f) list_single_cale_mrui_row_pane_ParamLimits

0xe466,	// (0x0009599f) list_single_cale_mrui_row_pane

0xe473,	// (0x000959ac) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe473,	// (0x000959ac) list_single_cale_mrui_row_pane_g1

0xe4ab,	// (0x000959e4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe4ab,	// (0x000959e4) list_single_cale_mrui_row_pane_t1

0xa2ae,	// (0x000917e7) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa2ae,	// (0x000917e7) list_single_cale_mrui_row_pane_t2

0xe4bd,	// (0x000959f6) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe4bd,	// (0x000959f6) list_single_cale_mrui_row_pane_t3

0xe4ec,	// (0x00095a25) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe4ec,	// (0x00095a25) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe3a,	// (0x00097373) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe3a,	// (0x00097373) list_single_cale_mrui_row_pane_t

0xa314,	// (0x0009184d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa314,	// (0x0009184d) list_single_cmail_header_editor_pane_bg_cp01

0xa338,	// (0x00091871) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa338,	// (0x00091871) list_single_cmail_header_editor_pane_bg_cp02

0xa354,	// (0x0009188d) main_radioblah_text_pane_t1_ParamLimits

0xa354,	// (0x0009188d) main_radioblah_text_pane_t1

0xe51b,	// (0x00095a54) cam6_indi_pane_cp01

0xe523,	// (0x00095a5c) cam6_mode_pane_cp01

0xe52b,	// (0x00095a64) cam6_pano_pane

0xe534,	// (0x00095a6d) cam6_zoom_pane_cp01

0xe53e,	// (0x00095a77) cam6_pano_image_pane

0xe547,	// (0x00095a80) cam6_pano_pane_g1

0xda6c,	// (0x00094fa5) cam6_pano_pane_g2

0xe550,	// (0x00095a89) cam6_pano_pane_g3

0xe559,	// (0x00095a92) cam6_pano_pane_g4

0xc767,	// (0x00093ca0) cam6_pano_pane_g5

0xe562,	// (0x00095a9b) cam6_pano_pane_g6

0xe56a,	// (0x00095aa3) cam6_pano_pane_g7

0xe572,	// (0x00095aab) cam6_pano_pane_g8

0xe57b,	// (0x00095ab4) cam6_pano_pane_g9

0x0008,

0xfe43,	// (0x0009737c) cam6_pano_pane_g

0x024d,	// (0x00087786) main_browser_tag_pane

0xe2b4,	// (0x000957ed) grid_navstr_albumart_pane

0xe586,	// (0x00095abf) cell_navstr_albumart_pane_ParamLimits

0xe586,	// (0x00095abf) cell_navstr_albumart_pane

0xe5a2,	// (0x00095adb) cell_navstr_albumart_pane_g1

0xc238,	// (0x00093771) cell_navstr_albumart_pane_g2

0xc248,	// (0x00093781) cell_navstr_albumart_pane_g3

0xc240,	// (0x00093779) cell_navstr_albumart_pane_g4

0x0003,

0xfe56,	// (0x0009738f) cell_navstr_albumart_pane_g

0xa36f,	// (0x000918a8) bt_list_pane_ParamLimits

0xa36f,	// (0x000918a8) bt_list_pane

0xa385,	// (0x000918be) bt_list_pane_t1

0xa394,	// (0x000918cd) bt_list_pane_t2

0x0001,

0xfe5f,	// (0x00097398) bt_list_pane_t

0x024d,	// (0x00087786) main_cale_prevew_pane

0xa3a3,	// (0x000918dc) popup_cale_preview_window_ParamLimits

0xa3a3,	// (0x000918dc) popup_cale_preview_window

0xabd7,	// (0x00092110) bg_popup_preview_window_pane_cp05_ParamLimits

0xabd7,	// (0x00092110) bg_popup_preview_window_pane_cp05

0xe5aa,	// (0x00095ae3) list_cale_preview_pane_ParamLimits

0xe5aa,	// (0x00095ae3) list_cale_preview_pane

0xa3be,	// (0x000918f7) list_double_cale_preview_pane_ParamLimits

0xa3be,	// (0x000918f7) list_double_cale_preview_pane

0xa3d2,	// (0x0009190b) list_single_cale_preview_pane_ParamLimits

0xa3d2,	// (0x0009190b) list_single_cale_preview_pane

0xa3ea,	// (0x00091923) list_single_cale_preview_pane_g1

0xa3f2,	// (0x0009192b) list_single_cale_preview_pane_t1_ParamLimits

0xa3f2,	// (0x0009192b) list_single_cale_preview_pane_t1

0xa407,	// (0x00091940) list_double_cale_preview_pane_g1

0xa40f,	// (0x00091948) list_double_cale_preview_pane_t1_ParamLimits

0xa40f,	// (0x00091948) list_double_cale_preview_pane_t1

0xa424,	// (0x0009195d) list_double_cale_preview_pane_t2_ParamLimits

0xa424,	// (0x0009195d) list_double_cale_preview_pane_t2

0x0001,

0xfe64,	// (0x0009739d) list_double_cale_preview_pane_t_ParamLimits

0xfe64,	// (0x0009739d) list_double_cale_preview_pane_t

0x024d,	// (0x00087786) main_ezdial_pane

0xabd7,	// (0x00092110) main_sp_fs_email_pane_ParamLimits

0x9b52,	// (0x0009108b) cmail_ddmenu_btn01_pane_ParamLimits

0x9b52,	// (0x0009108b) cmail_ddmenu_btn01_pane

0x9b65,	// (0x0009109e) cmail_ddmenu_btn02_pane_ParamLimits

0x9b65,	// (0x0009109e) cmail_ddmenu_btn02_pane

0x9b88,	// (0x000910c1) cmail_ddmenu_btn03_pane_ParamLimits

0x9b88,	// (0x000910c1) cmail_ddmenu_btn03_pane

0x9bac,	// (0x000910e5) main_sp_fs_ctrlbar_pane_ParamLimits

0x9bd0,	// (0x00091109) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa02d,	// (0x00091566) list_cmail_body_pane_ParamLimits

0xe1d8,	// (0x00095711) bg_button_pane_cp12

0xe1ed,	// (0x00095726) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe1ed,	// (0x00095726) list_single_cmail_header_detail_pane_g3

0xa0bf,	// (0x000915f8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa0bf,	// (0x000915f8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde9,	// (0x00097322) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde9,	// (0x00097322) list_single_cmail_header_detail_pane_t

0xe31c,	// (0x00095855) phacti_term_pane_t2_ParamLimits

0xe31c,	// (0x00095855) phacti_term_pane_t2

0x0001,

0xfdf3,	// (0x0009732c) phacti_term_pane_t_ParamLimits

0xfdf3,	// (0x0009732c) phacti_term_pane_t

0xe5b6,	// (0x00095aef) aid_size_list_single_double

0xa43c,	// (0x00091975) popup_ezdial_listscroll_window

0xa458,	// (0x00091991) popup_number_entry_window_cp01

0xafb2,	// (0x000924eb) bg_popup_call_pane_cp09

0xe5c2,	// (0x00095afb) ezdial_list_pane

0xe5ca,	// (0x00095b03) scroll_pane_cp23

0xc41f,	// (0x00093958) bg_button_pane_cp028_ParamLimits

0xc41f,	// (0x00093958) bg_button_pane_cp028

0xa466,	// (0x0009199f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa466,	// (0x0009199f) cmail_ddmenu_btn01_pane_g1

0xa472,	// (0x000919ab) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa472,	// (0x000919ab) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe69,	// (0x000973a2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe69,	// (0x000973a2) cmail_ddmenu_btn01_pane_g

0xe5d2,	// (0x00095b0b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5d2,	// (0x00095b0b) cmail_ddmenu_btn01_pane_t1

0xc41f,	// (0x00093958) bg_button_pane_cp029_ParamLimits

0xc41f,	// (0x00093958) bg_button_pane_cp029

0xa47e,	// (0x000919b7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa47e,	// (0x000919b7) cmail_ddmenu_btn02_pane_g1

0xa496,	// (0x000919cf) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa496,	// (0x000919cf) cmail_ddmenu_btn02_pane_t1

0xabd7,	// (0x00092110) bg_button_pane_cp031_ParamLimits

0xabd7,	// (0x00092110) bg_button_pane_cp031

0xa47e,	// (0x000919b7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa47e,	// (0x000919b7) cmail_ddmenu_btn03_pane_g1

0xa496,	// (0x000919cf) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa496,	// (0x000919cf) cmail_ddmenu_btn03_pane_t1

0x7700,	// (0x0008ec39) cell_dialer2_keypad_pane_t1_ParamLimits

0x771a,	// (0x0008ec53) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x771a,	// (0x0008ec53) cell_dialer2_keypad_pane_t1_copy1

0x9471,	// (0x000909aa) ncimui_group_button_pane

0xabd7,	// (0x00092110) main_sp_fs_calendar_pane_ParamLimits

0xa045,	// (0x0009157e) list_single_cmail_header_caption_pane_ParamLimits

0xe367,	// (0x000958a0) aid_recal_txt_sm_pane

0x024d,	// (0x00087786) mian_recal_day_pane

0xe3a6,	// (0x000958df) popup_sp_fs_cale_preview_window_ParamLimits

0x024d,	// (0x00087786) list_recal_day_pane

0xe600,	// (0x00095b39) list_single_recal_day_pane_ParamLimits

0xe600,	// (0x00095b39) list_single_recal_day_pane

0xe612,	// (0x00095b4b) list_single_recal_day_pane_g1_ParamLimits

0xe612,	// (0x00095b4b) list_single_recal_day_pane_g1

0xe61e,	// (0x00095b57) list_single_recal_day_pane_g2_ParamLimits

0xe61e,	// (0x00095b57) list_single_recal_day_pane_g2

0xe62a,	// (0x00095b63) list_single_recal_day_pane_g3_ParamLimits

0xe62a,	// (0x00095b63) list_single_recal_day_pane_g3

0xa4ba,	// (0x000919f3) list_single_recal_day_pane_g4_ParamLimits

0xa4ba,	// (0x000919f3) list_single_recal_day_pane_g4

0xe636,	// (0x00095b6f) list_single_recal_day_pane_g5_ParamLimits

0xe636,	// (0x00095b6f) list_single_recal_day_pane_g5

0xe642,	// (0x00095b7b) list_single_recal_day_pane_g6_ParamLimits

0xe642,	// (0x00095b7b) list_single_recal_day_pane_g6

0x0005,

0xfe78,	// (0x000973b1) list_single_recal_day_pane_g_ParamLimits

0xfe78,	// (0x000973b1) list_single_recal_day_pane_g

0xe64e,	// (0x00095b87) list_single_recal_day_pane_t1

0xe65c,	// (0x00095b95) list_single_recal_day_pane_t2

0x0001,

0xfe85,	// (0x000973be) list_single_recal_day_pane_t

0xa4c8,	// (0x00091a01) ncimui_query_button_pane_ParamLimits

0xa4c8,	// (0x00091a01) ncimui_query_button_pane

0xa4d8,	// (0x00091a11) ncimui_query_button_pane_t1_ParamLimits

0xa4d8,	// (0x00091a11) ncimui_query_button_pane_t1

0xe66a,	// (0x00095ba3) ncimui_query_button_pane_t2_ParamLimits

0xe66a,	// (0x00095ba3) ncimui_query_button_pane_t2

0x0001,

0xfe8a,	// (0x000973c3) ncimui_query_button_pane_t_ParamLimits

0xfe8a,	// (0x000973c3) ncimui_query_button_pane_t

0xa4eb,	// (0x00091a24) query_button_pane_ParamLimits

0xa4eb,	// (0x00091a24) query_button_pane

0x024d,	// (0x00087786) bg_button_pane_cp0028

0xe67d,	// (0x00095bb6) query_button_pane_t1

0x57a0,	// (0x0008ccd9) main_tport_pane_ParamLimits

0x9f34,	// (0x0009146d) bg_popup_window_pane_cp01_ParamLimits

0x9f34,	// (0x0009146d) bg_popup_window_pane_cp01

0x9f4a,	// (0x00091483) heading_pane_cp08_ParamLimits

0x9f4a,	// (0x00091483) heading_pane_cp08

0x9f5b,	// (0x00091494) heading_pane_cp07_ParamLimits

0x9f5b,	// (0x00091494) heading_pane_cp07

0x9fcf,	// (0x00091508) cell_tport_appsw_pane_g2

0x0002,

0xfdd6,	// (0x0009730f) cell_tport_appsw_pane_g

0x4cee,	// (0x0008c227) input_candi_list_open_g1

0x4021,	// (0x0008b55a) list_cale_time_pane_g6_ParamLimits

0x4021,	// (0x0008b55a) list_cale_time_pane_g6

0x658e,	// (0x0008dac7) aid_size_touch_calib_1_ParamLimits

0x658e,	// (0x0008dac7) aid_size_touch_calib_1

0x659a,	// (0x0008dad3) aid_size_touch_calib_2_ParamLimits

0x659a,	// (0x0008dad3) aid_size_touch_calib_2

0x65b0,	// (0x0008dae9) aid_size_touch_calib_3_ParamLimits

0x65b0,	// (0x0008dae9) aid_size_touch_calib_3

0x65ce,	// (0x0008db07) aid_size_touch_calib_4_ParamLimits

0x65ce,	// (0x0008db07) aid_size_touch_calib_4

0x65e4,	// (0x0008db1d) main_touch_calib_button_group_pane_ParamLimits

0x65e4,	// (0x0008db1d) main_touch_calib_button_group_pane

0x65fb,	// (0x0008db34) main_touch_calib_pane_g1_ParamLimits

0x6607,	// (0x0008db40) main_touch_calib_pane_g2_ParamLimits

0x6613,	// (0x0008db4c) main_touch_calib_pane_g3_ParamLimits

0x661f,	// (0x0008db58) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00096cf1) main_touch_calib_pane_g_ParamLimits

0x662b,	// (0x0008db64) main_touch_calib_pane_t1_ParamLimits

0x6645,	// (0x0008db7e) main_touch_calib_pane_t2_ParamLimits

0x665f,	// (0x0008db98) main_touch_calib_pane_t3_ParamLimits

0x6673,	// (0x0008dbac) main_touch_calib_pane_t4_ParamLimits

0x6687,	// (0x0008dbc0) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00096cfa) main_touch_calib_pane_t_ParamLimits

0x124e,	// (0x00088787) list_single_fp_cale_pane_g3_ParamLimits

0x124e,	// (0x00088787) list_single_fp_cale_pane_g3

0xefcf,	// (0x00096508) bg_button_pane_cp012_ParamLimits

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp03_ParamLimits

0x8716,	// (0x0008fc4f) cell_vitu2_function_top_pane_g1_ParamLimits

0xefcf,	// (0x00096508) bg_vkb2_func_pane_cp04_ParamLimits

0x9425,	// (0x0009095e) main_ncimui_button_group_pane_ParamLimits

0x9425,	// (0x0009095e) main_ncimui_button_group_pane

0x945f,	// (0x00090998) main_ncimui_pane_t3_ParamLimits

0x945f,	// (0x00090998) main_ncimui_pane_t3

0xe2ca,	// (0x00095803) phacti_button_group_pane

0xe5b6,	// (0x00095aef) aid_size_list_single_double_ParamLimits

0xa43c,	// (0x00091975) popup_ezdial_listscroll_window_ParamLimits

0xa458,	// (0x00091991) popup_number_entry_window_cp01_ParamLimits

0xa4fe,	// (0x00091a37) phacti_button_pane_ParamLimits

0xa4fe,	// (0x00091a37) phacti_button_pane

0x024d,	// (0x00087786) bg_button_pane_cp14

0xe68b,	// (0x00095bc4) phacti_button_pane_t1

0xa50f,	// (0x00091a48) main_touch_calib_button_pane_ParamLimits

0xa50f,	// (0x00091a48) main_touch_calib_button_pane

0x09e7,	// (0x00087f20) bg_button_pane_cp18_ParamLimits

0x09e7,	// (0x00087f20) bg_button_pane_cp18

0xe699,	// (0x00095bd2) main_touch_calib_button_pane_t1_ParamLimits

0xe699,	// (0x00095bd2) main_touch_calib_button_pane_t1

0xe6af,	// (0x00095be8) main_touch_calib_button_pane_t2_ParamLimits

0xe6af,	// (0x00095be8) main_touch_calib_button_pane_t2

0x0001,

0xfe8f,	// (0x000973c8) main_touch_calib_button_pane_t_ParamLimits

0xfe8f,	// (0x000973c8) main_touch_calib_button_pane_t

0x024d,	// (0x00087786) cell_ncimui_button_pane

0x024d,	// (0x00087786) bg_button_pane_cp032

0xe6cd,	// (0x00095c06) cell_ncimui_button_pane_t1

0xef47,	// (0x00096480) image3_infobar_pane_ParamLimits

0xef47,	// (0x00096480) image3_infobar_pane

0x97ef,	// (0x00090d28) fs_bigclock_status_pane_ParamLimits

0x97ef,	// (0x00090d28) fs_bigclock_status_pane

0x97fc,	// (0x00090d35) main_fs_bigclock_clock_pane_ParamLimits

0x97fc,	// (0x00090d35) main_fs_bigclock_clock_pane

0x980f,	// (0x00090d48) main_fs_bigclock_indi_pane_ParamLimits

0x980f,	// (0x00090d48) main_fs_bigclock_indi_pane

0x982a,	// (0x00090d63) main_fs_bigclock_swipe_pane_ParamLimits

0x982a,	// (0x00090d63) main_fs_bigclock_swipe_pane

0x024d,	// (0x00087786) main_fs_clock_dumped_data

0xdb79,	// (0x000950b2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb79,	// (0x000950b2) list_single_fs_bigclock_indicator_pane_g1

0xdb99,	// (0x000950d2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb99,	// (0x000950d2) list_single_fs_bigclock_indicator_pane_g2

0xdbb3,	// (0x000950ec) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdbb3,	// (0x000950ec) list_single_fs_bigclock_indicator_pane_g3

0xdbcf,	// (0x00095108) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbcf,	// (0x00095108) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x000971fb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x000971fb) list_single_fs_bigclock_indicator_pane_g

0xdbf5,	// (0x0009512e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbf5,	// (0x0009512e) list_single_fs_bigclock_indicator_pane_t1

0xdc1d,	// (0x00095156) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdc1d,	// (0x00095156) list_single_fs_bigclock_indicator_pane_t2

0xdc45,	// (0x0009517e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc45,	// (0x0009517e) list_single_fs_bigclock_indicator_pane_t3

0xdc6f,	// (0x000951a8) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc6f,	// (0x000951a8) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x00097206) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x00097206) list_single_fs_bigclock_indicator_pane_t

0xe6db,	// (0x00095c14) image3_infobar_fav_pane_ParamLimits

0xe6db,	// (0x00095c14) image3_infobar_fav_pane

0xe6eb,	// (0x00095c24) image3_infobar_loc_pane_ParamLimits

0xe6eb,	// (0x00095c24) image3_infobar_loc_pane

0xe701,	// (0x00095c3a) image3_infobar_time_pane_ParamLimits

0xe701,	// (0x00095c3a) image3_infobar_time_pane

0x0f18,	// (0x00088451) image3_infobar_time_pane_g1

0xe711,	// (0x00095c4a) image3_infobar_time_pane_t1

0x0f18,	// (0x00088451) image3_infobar_loc_pane_g1

0xe71f,	// (0x00095c58) image3_infobar_loc_pane_g2

0x0001,

0xfe94,	// (0x000973cd) image3_infobar_loc_pane_g

0xe727,	// (0x00095c60) image3_infobar_loc_pane_t1

0x0f18,	// (0x00088451) image3_infobar_fav_pane_g1

0xe735,	// (0x00095c6e) image3_infobar_fav_pane_g2

0x0001,

0xfe99,	// (0x000973d2) image3_infobar_fav_pane_g

0xe73d,	// (0x00095c76) fs_bigclock_status_battery_pane

0xe746,	// (0x00095c7f) fs_bigclock_status_signal_pane

0xe74f,	// (0x00095c88) fs_bigclock_status_title_pane

0xe758,	// (0x00095c91) fs_bigclock_status_signal_pane_g1

0xe761,	// (0x00095c9a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe9e,	// (0x000973d7) fs_bigclock_status_signal_pane_g

0xe769,	// (0x00095ca2) fs_bigclock_status_battery_pane_g1

0xe772,	// (0x00095cab) fs_bigclock_status_battery_pane_g2

0x0001,

0xfea3,	// (0x000973dc) fs_bigclock_status_battery_pane_g

0xe77a,	// (0x00095cb3) fs_bigclock_status_title_pane_t1

0x0f18,	// (0x00088451) main_fs_bigclock_clock_pane_g1

0xe788,	// (0x00095cc1) main_fs_bigclock_clock_pane_g2

0xe788,	// (0x00095cc1) main_fs_bigclock_clock_pane_g3

0xe788,	// (0x00095cc1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea8,	// (0x000973e1) main_fs_bigclock_clock_pane_g

0xe794,	// (0x00095ccd) main_fs_bigclock_clock_pane_t1

0xe7a2,	// (0x00095cdb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeb1,	// (0x000973ea) main_fs_bigclock_clock_pane_t

0xe7b1,	// (0x00095cea) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe7b1,	// (0x00095cea) list_single_fs_bigclock_indicator_pane

0xa524,	// (0x00091a5d) list_single_fs_bigclock_pane_ParamLimits

0xa524,	// (0x00091a5d) list_single_fs_bigclock_pane

0xe7cb,	// (0x00095d04) main_fs_bigclock_indicator_pane_t1

0xe7da,	// (0x00095d13) list_single_fs_bigclock_pane_g1

0xe7e2,	// (0x00095d1b) list_single_fs_bigclock_pane_t1

0x0f18,	// (0x00088451) main_fs_bigclock_swipe_pane_g1

0xe820,	// (0x00095d59) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfec2,	// (0x000973fb) main_fs_bigclock_swipe_pane_g

0xe828,	// (0x00095d61) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe828,	// (0x00095d61) main_fs_bigclock_swipe_pane_t1

0x43d3,	// (0x0008b90c) call_type_pane_ParamLimits

0x024d,	// (0x00087786) main_btmg_pane

0xe49f,	// (0x000959d8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe49f,	// (0x000959d8) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe35,	// (0x0009736e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe35,	// (0x0009736e) list_single_cale_mrui_row_pane_g

0xe5f0,	// (0x00095b29) list_recal_vselct_arw_lo_pane

0xe5f8,	// (0x00095b31) list_recal_vselct_arw_up_pane

0xd1cd,	// (0x00094706) list_recal_vselct_pane

0xe845,	// (0x00095d7e) btmg_button_pane

0xa58a,	// (0x00091ac3) main_btmg_pane_g1

0x024d,	// (0x00087786) bg_button_pane_cp044

0xe84f,	// (0x00095d88) btmg_button_pane_t1

0xc417,	// (0x00093950) aid_listscroll_gen

0xabd7,	// (0x00092110) main_cntbar_detail_pane

0xe1b9,	// (0x000956f2) list_cmail_folder_pane

0xe1c9,	// (0x00095702) sp_fs_scroll_pane_cp03_ParamLimits

0xa594,	// (0x00091acd) list_single_fs_dyc_pane_cp01_ParamLimits

0xa594,	// (0x00091acd) list_single_fs_dyc_pane_cp01

0xe85d,	// (0x00095d96) aid_size_cmail_indent

0xe866,	// (0x00095d9f) list_single_dyc_row_pane_cp01

0xa5de,	// (0x00091b17) cntbar_detail_list_pane_ParamLimits

0xa5de,	// (0x00091b17) cntbar_detail_list_pane

0xa630,	// (0x00091b69) main_cntbar_detail_cont_pane_ParamLimits

0xa630,	// (0x00091b69) main_cntbar_detail_cont_pane

0x41e8,	// (0x0008b721) scroll_pane_cp032_ParamLimits

0x41e8,	// (0x0008b721) scroll_pane_cp032

0xa644,	// (0x00091b7d) cntbar_detail_list_event_pane_ParamLimits

0xa644,	// (0x00091b7d) cntbar_detail_list_event_pane

0xa5f0,	// (0x00091b29) cntbar_detail_list_shct_pane

0x0e47,	// (0x00088380) aid_list_gen

0xe86f,	// (0x00095da8) aid_scroll

0xe878,	// (0x00095db1) aid_size_touch_scroll_bar

0xe881,	// (0x00095dba) aid_list_double

0xe88a,	// (0x00095dc3) aid_list_single

0x0082,	// (0x000875bb) aid_list_single_lg

0xe893,	// (0x00095dcc) aid_list_z_g_a_sm

0xe89b,	// (0x00095dd4) aid_list_z_g_d

0xe8a3,	// (0x00095ddc) aid_txt_z_prm

0xe8b1,	// (0x00095dea) aid_txt_z_prm_cp01

0xe8bf,	// (0x00095df8) aid_txt_z_sec

0xa654,	// (0x00091b8d) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa654,	// (0x00091b8d) main_cntbar_detail_cont_pane_g1

0xa668,	// (0x00091ba1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa668,	// (0x00091ba1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec7,	// (0x00097400) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec7,	// (0x00097400) main_cntbar_detail_cont_pane_g

0xe8cd,	// (0x00095e06) main_cntbar_detail_cont_pane_t1

0xe8db,	// (0x00095e14) main_cntbar_detail_cont_pane_t2

0xe8e9,	// (0x00095e22) main_cntbar_detail_cont_pane_t3

0x0002,

0xfecc,	// (0x00097405) main_cntbar_detail_cont_pane_t

0xa678,	// (0x00091bb1) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa678,	// (0x00091bb1) cell_cntbar_detail_list_shct_pane

0xe8f7,	// (0x00095e30) cntbar_detail_list_shct_pane_g1

0xe900,	// (0x00095e39) cntbar_detail_list_shct_pane_g2

0x0001,

0xfed3,	// (0x0009740c) cntbar_detail_list_shct_pane_g

0xa68a,	// (0x00091bc3) cntbar_detail_list_event_pane_g1_ParamLimits

0xa68a,	// (0x00091bc3) cntbar_detail_list_event_pane_g1

0xa696,	// (0x00091bcf) cntbar_detail_list_event_pane_g2_ParamLimits

0xa696,	// (0x00091bcf) cntbar_detail_list_event_pane_g2

0x0005,

0xfed8,	// (0x00097411) cntbar_detail_list_event_pane_g_ParamLimits

0xfed8,	// (0x00097411) cntbar_detail_list_event_pane_g

0xa704,	// (0x00091c3d) cntbar_detail_list_event_pane_t1_ParamLimits

0xa704,	// (0x00091c3d) cntbar_detail_list_event_pane_t1

0xa719,	// (0x00091c52) cntbar_detail_list_event_pane_t2_ParamLimits

0xa719,	// (0x00091c52) cntbar_detail_list_event_pane_t2

0x0002,

0xfee5,	// (0x0009741e) cntbar_detail_list_event_pane_t_ParamLimits

0xfee5,	// (0x0009741e) cntbar_detail_list_event_pane_t

0x0f18,	// (0x00088451) cell_cntbar_detail_list_shct_pane_g1

0x4816,	// (0x0008bd4f) navi_pane_mv_g3

0xabd7,	// (0x00092110) main_cntbar_detail_pane_ParamLimits

0x024d,	// (0x00087786) main_notif_wgt_pane

0xed89,	// (0x000962c2) aid_tch_main_mp4_pane_g4

0xef3d,	// (0x00096476) popup_slider_window_cp02

0xe5e7,	// (0x00095b20) list_recal_day_event_pane

0xa5ae,	// (0x00091ae7) cntbar_detail_btn_pane_ParamLimits

0xa5ae,	// (0x00091ae7) cntbar_detail_btn_pane

0xa5c6,	// (0x00091aff) cntbar_detail_btn_pane_cp01_ParamLimits

0xa5c6,	// (0x00091aff) cntbar_detail_btn_pane_cp01

0xa5f0,	// (0x00091b29) cntbar_detail_list_shct_pane_ParamLimits

0xa600,	// (0x00091b39) cntbar_detail_pane_g1_ParamLimits

0xa600,	// (0x00091b39) cntbar_detail_pane_g1

0xa614,	// (0x00091b4d) cntbar_detail_pane_t1_ParamLimits

0xa614,	// (0x00091b4d) cntbar_detail_pane_t1

0xa6a2,	// (0x00091bdb) cntbar_detail_list_event_pane_g3_ParamLimits

0xa6a2,	// (0x00091bdb) cntbar_detail_list_event_pane_g3

0xa6ba,	// (0x00091bf3) cntbar_detail_list_event_pane_g4_ParamLimits

0xa6ba,	// (0x00091bf3) cntbar_detail_list_event_pane_g4

0xa6d2,	// (0x00091c0b) cntbar_detail_list_event_pane_g5_ParamLimits

0xa6d2,	// (0x00091c0b) cntbar_detail_list_event_pane_g5

0xa6ea,	// (0x00091c23) cntbar_detail_list_event_pane_g6_ParamLimits

0xa6ea,	// (0x00091c23) cntbar_detail_list_event_pane_g6

0xa72e,	// (0x00091c67) cntbar_detail_list_event_pane_t3_ParamLimits

0xa72e,	// (0x00091c67) cntbar_detail_list_event_pane_t3

0xa740,	// (0x00091c79) popup_notif_wgt_window_ParamLimits

0xa740,	// (0x00091c79) popup_notif_wgt_window

0xa759,	// (0x00091c92) popup_submenu_window_cp01_ParamLimits

0xa759,	// (0x00091c92) popup_submenu_window_cp01

0xafb2,	// (0x000924eb) bg_popup_window_pane_cp10

0xe909,	// (0x00095e42) listscroll_notif_wgt_pane

0xe913,	// (0x00095e4c) list_notif_wgt_window

0xe91c,	// (0x00095e55) scroll_pane_cp033

0xe925,	// (0x00095e5e) list_notif_wgt_row_pane_ParamLimits

0xe925,	// (0x00095e5e) list_notif_wgt_row_pane

0xe939,	// (0x00095e72) aid_size_list_notif_wgt_del

0xe942,	// (0x00095e7b) list_notif_wgt_row_pane_g1

0xe94a,	// (0x00095e83) list_notif_wgt_row_pane_g2

0xe952,	// (0x00095e8b) list_notif_wgt_row_pane_g3

0x0002,

0xfeec,	// (0x00097425) list_notif_wgt_row_pane_g

0xe95b,	// (0x00095e94) list_notif_wgt_row_pane_t1

0xe969,	// (0x00095ea2) list_notif_wgt_row_pane_t2

0xe977,	// (0x00095eb0) list_notif_wgt_row_pane_t3

0x0002,

0xfef3,	// (0x0009742c) list_notif_wgt_row_pane_t

0xceac,	// (0x000943e5) list_recal_day_event_pane_g1

0xe985,	// (0x00095ebe) list_recal_day_event_pane_t1

0x024d,	// (0x00087786) bg_button_pane_cp045

0xe994,	// (0x00095ecd) cntbar_detail_btn_pane_t1

0xc41f,	// (0x00093958) main_callh_pane_ParamLimits

0xc41f,	// (0x00093958) main_callh_pane

0x024d,	// (0x00087786) main_coverflow0_pane

0x024d,	// (0x00087786) main_wgtman_pane

0x9838,	// (0x00090d71) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9838,	// (0x00090d71) main_fs_bigclock_unlock_btn_pane

0x9fbf,	// (0x000914f8) bg_button_pane_cp16

0x9fd7,	// (0x00091510) cell_tport_appsw_pane_g3

0xa76b,	// (0x00091ca4) cf0_flow_pane_ParamLimits

0xa76b,	// (0x00091ca4) cf0_flow_pane

0xe9a2,	// (0x00095edb) listscroll_cf0_pane

0xe9ab,	// (0x00095ee4) main_cf0_pane_g1

0xa780,	// (0x00091cb9) main_cf0_pane_t1_ParamLimits

0xa780,	// (0x00091cb9) main_cf0_pane_t1

0xa798,	// (0x00091cd1) main_cf0_pane_t2_ParamLimits

0xa798,	// (0x00091cd1) main_cf0_pane_t2

0x0001,

0xfefa,	// (0x00097433) main_cf0_pane_t_ParamLimits

0xfefa,	// (0x00097433) main_cf0_pane_t

0xe9b5,	// (0x00095eee) scroll_pane_cp11

0xa7b0,	// (0x00091ce9) cf0_flow_pane_g1

0xa7bc,	// (0x00091cf5) cf0_flow_pane_g2

0x0001,

0xfeff,	// (0x00097438) cf0_flow_pane_g

0xa7c8,	// (0x00091d01) cf0_flow_pane_t1

0x024d,	// (0x00087786) main_call6_pane

0x024d,	// (0x00087786) main_calllock_pane

0xa7da,	// (0x00091d13) call6_btn_grp_pane_ParamLimits

0xa7da,	// (0x00091d13) call6_btn_grp_pane

0xa7f6,	// (0x00091d2f) call6_pane_g1_ParamLimits

0xa7f6,	// (0x00091d2f) call6_pane_g1

0xa80c,	// (0x00091d45) popup_call6_1st_window_ParamLimits

0xa80c,	// (0x00091d45) popup_call6_1st_window

0xa81d,	// (0x00091d56) popup_call6_2nd_window_ParamLimits

0xa81d,	// (0x00091d56) popup_call6_2nd_window

0xa82e,	// (0x00091d67) cell_call6_btn_pane_ParamLimits

0xa82e,	// (0x00091d67) cell_call6_btn_pane

0xafb2,	// (0x000924eb) bg_popup_call2_in_pane_cp03

0xe9c0,	// (0x00095ef9) popup_call6_1st_window_g1

0xe9c8,	// (0x00095f01) popup_call6_1st_window_g2

0xe9d0,	// (0x00095f09) popup_call6_1st_window_g3

0x0002,

0xff04,	// (0x0009743d) popup_call6_1st_window_g

0xe9d8,	// (0x00095f11) popup_call6_1st_window_t1

0xe9e7,	// (0x00095f20) popup_call6_1st_window_t2

0xe9f7,	// (0x00095f30) popup_call6_1st_window_t3

0x0002,

0xff0b,	// (0x00097444) popup_call6_1st_window_t

0xafb2,	// (0x000924eb) bg_popup_call2_in_pane_cp04

0xe9c0,	// (0x00095ef9) popup_call6_2nd_window_g1

0xe9c8,	// (0x00095f01) popup_call6_2nd_window_g2

0xe9d0,	// (0x00095f09) popup_call6_2nd_window_g3

0x0002,

0xff04,	// (0x0009743d) popup_call6_2nd_window_g

0xe9d8,	// (0x00095f11) popup_call6_2nd_window_t1

0x024d,	// (0x00087786) bg_button_pane_cp15

0xea07,	// (0x00095f40) cell_call6_btn_pane_g1

0xea10,	// (0x00095f49) cell_call6_btn_pane_t1

0xa842,	// (0x00091d7b) listscroll_wgtman_pane_ParamLimits

0xa842,	// (0x00091d7b) listscroll_wgtman_pane

0xa85a,	// (0x00091d93) wgtman_btn_pane_ParamLimits

0xa85a,	// (0x00091d93) wgtman_btn_pane

0xae78,	// (0x000923b1) aid_scroll_copy1

0xea1f,	// (0x00095f58) list_wgtman_pane

0xa873,	// (0x00091dac) wgtman_btn_pane_g1_ParamLimits

0xa873,	// (0x00091dac) wgtman_btn_pane_g1

0xa887,	// (0x00091dc0) wgtman_btn_pane_t1_ParamLimits

0xa887,	// (0x00091dc0) wgtman_btn_pane_t1

0xea29,	// (0x00095f62) wgtman_btn_pane_t2_ParamLimits

0xea29,	// (0x00095f62) wgtman_btn_pane_t2

0x0001,

0xff12,	// (0x0009744b) wgtman_btn_pane_t_ParamLimits

0xff12,	// (0x0009744b) wgtman_btn_pane_t

0xea3d,	// (0x00095f76) listrow_wgtman_pane_ParamLimits

0xea3d,	// (0x00095f76) listrow_wgtman_pane

0xea51,	// (0x00095f8a) listrow_wgtman_pane_g1

0xa8a2,	// (0x00091ddb) listrow_wgtman_pane_g2

0x0001,

0xff17,	// (0x00097450) listrow_wgtman_pane_g

0xea5a,	// (0x00095f93) listrow_wgtman_pane_t1

0xea68,	// (0x00095fa1) listrow_wgtman_pane_t2

0x0001,

0xff1c,	// (0x00097455) listrow_wgtman_pane_t

0xea76,	// (0x00095faf) wait_bar_pane_cp09

0xea7e,	// (0x00095fb7) main_calllock_btn_pane

0xea88,	// (0x00095fc1) main_calllock_pane_g1

0x024d,	// (0x00087786) bg_button_pane_cp17

0xea94,	// (0x00095fcd) main_calllock_btn_pane_g1

0xea9d,	// (0x00095fd6) main_calllock_btn_pane_t1

0x024d,	// (0x00087786) main_dialer3_pane

0x024d,	// (0x00087786) main_fmrd2_pane

0x0f18,	// (0x00088451) main_fs_bigclock_unlock_btn_pane_g1

0xeab4,	// (0x00095fed) main_fs_bigclock_unlock_btn_pane_t1

0xa8ac,	// (0x00091de5) area_fmrd2_info_pane_ParamLimits

0xa8ac,	// (0x00091de5) area_fmrd2_info_pane

0xa8c0,	// (0x00091df9) area_fmrd2_visual_pane_ParamLimits

0xa8c0,	// (0x00091df9) area_fmrd2_visual_pane

0xa8ce,	// (0x00091e07) fmrd2_indi_pane_ParamLimits

0xa8ce,	// (0x00091e07) fmrd2_indi_pane

0xa8db,	// (0x00091e14) area_fmrd2_visual_pane_g1

0xa8e3,	// (0x00091e1c) area_fmrd2_visual_pane_t1

0xa8f3,	// (0x00091e2c) area_fmrd2_visual_pane_t2

0xa903,	// (0x00091e3c) area_fmrd2_visual_pane_t3

0x0002,

0xff26,	// (0x0009745f) area_fmrd2_visual_pane_t

0xa913,	// (0x00091e4c) area_fmrd2_info_pane_g1

0xa91b,	// (0x00091e54) area_fmrd2_info_pane_t1

0xa92b,	// (0x00091e64) area_fmrd2_info_pane_t2

0xa93b,	// (0x00091e74) area_fmrd2_info_pane_t3

0xa94b,	// (0x00091e84) area_fmrd2_info_pane_t4

0x0003,

0xff2d,	// (0x00097466) area_fmrd2_info_pane_t

0xa95b,	// (0x00091e94) fmrd2_indi_pane_t1

0xa96b,	// (0x00091ea4) fmrd2_indi_pane_t2

0xa97b,	// (0x00091eb4) fmrd2_indi_pane_t3

0x0002,

0xff36,	// (0x0009746f) fmrd2_indi_pane_t

0xdbde,	// (0x00095117) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbde,	// (0x00095117) list_single_fs_bigclock_indicator_pane_g5

0xdc84,	// (0x000951bd) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc84,	// (0x000951bd) list_single_fs_bigclock_indicator_pane_t5

0xa1a1,	// (0x000916da) aid_cell_bcale_month_pane_ParamLimits

0xa1a1,	// (0x000916da) aid_cell_bcale_month_pane

0xa1b3,	// (0x000916ec) bcale_month_pane_ParamLimits

0xa1b3,	// (0x000916ec) bcale_month_pane

0xa1cb,	// (0x00091704) bcale_preview_pane_ParamLimits

0xa1cb,	// (0x00091704) bcale_preview_pane

0xe7e2,	// (0x00095d1b) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7fc,	// (0x00095d35) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7fc,	// (0x00095d35) list_single_fs_bigclock_pane_t2

0x0001,

0xfebd,	// (0x000973f6) list_single_fs_bigclock_pane_t_ParamLimits

0xfebd,	// (0x000973f6) list_single_fs_bigclock_pane_t

0xeaac,	// (0x00095fe5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff21,	// (0x0009745a) main_fs_bigclock_unlock_btn_pane_g

0xa98b,	// (0x00091ec4) aid_dia3_key_size_ParamLimits

0xa98b,	// (0x00091ec4) aid_dia3_key_size

0xa99a,	// (0x00091ed3) aid_dia3_listrow_size_ParamLimits

0xa99a,	// (0x00091ed3) aid_dia3_listrow_size

0xa9a8,	// (0x00091ee1) dia3_keypad_fun_pane_ParamLimits

0xa9a8,	// (0x00091ee1) dia3_keypad_fun_pane

0xa9c4,	// (0x00091efd) dia3_keypad_num_pane_ParamLimits

0xa9c4,	// (0x00091efd) dia3_keypad_num_pane

0xa9dd,	// (0x00091f16) dia3_listscroll_pane_ParamLimits

0xa9dd,	// (0x00091f16) dia3_listscroll_pane

0xa9f0,	// (0x00091f29) dia3_numentry_pane_ParamLimits

0xa9f0,	// (0x00091f29) dia3_numentry_pane

0x003b,	// (0x00087574) dia3_list_pane

0x0046,	// (0x0008757f) scroll_pane_cp12

0x024d,	// (0x00087786) bg_dia3_numentry_pane

0x0051,	// (0x0008758a) dia3_numentry_pane_t1

0xaa01,	// (0x00091f3a) cell_dia3_key_num_pane

0xaa09,	// (0x00091f42) cell_dia3_key0_fun_pane_ParamLimits

0xaa09,	// (0x00091f42) cell_dia3_key0_fun_pane

0xaa1d,	// (0x00091f56) cell_dia3_key1_fun_pane_ParamLimits

0xaa1d,	// (0x00091f56) cell_dia3_key1_fun_pane

0xaa35,	// (0x00091f6e) dia3_listrow_pane

0xd8f6,	// (0x00094e2f) bg_dia3_numentry_pane_g1

0x024d,	// (0x00087786) bg_button_pane_cp21

0x008b,	// (0x000875c4) cell_dia3_key_num_pane_t1

0x0099,	// (0x000875d2) cell_dia3_key_num_pane_t2

0x00a8,	// (0x000875e1) cell_dia3_key_num_pane_t3

0x00b7,	// (0x000875f0) cell_dia3_key_num_pane_t4

0x0003,

0xff3d,	// (0x00097476) cell_dia3_key_num_pane_t

0x024d,	// (0x00087786) bg_button_pane_cp19

0xaa3e,	// (0x00091f77) cell_dia3_key0_fun_pane_g1

0x024d,	// (0x00087786) bg_button_pane_cp20

0xaa46,	// (0x00091f7f) cell_dia3_key1_fun_pane_g1

0xaa4e,	// (0x00091f87) area_left_week_number_pane

0xaa57,	// (0x00091f90) area_top_day_name_pane

0xaa60,	// (0x00091f99) frame_month_view_pane

0xaa6c,	// (0x00091fa5) grid_month_view_pane

0xaa76,	// (0x00091faf) cell_top_day_name_pane_ParamLimits

0xaa76,	// (0x00091faf) cell_top_day_name_pane

0xaa92,	// (0x00091fcb) cell_area_left_week_number_pane_ParamLimits

0xaa92,	// (0x00091fcb) cell_area_left_week_number_pane

0xaaa8,	// (0x00091fe1) cell_month_view_pane_ParamLimits

0xaaa8,	// (0x00091fe1) cell_month_view_pane

0x014b,	// (0x00087684) frm_month_g1

0xaac9,	// (0x00092002) frm_month_g2

0xaad3,	// (0x0009200c) frm_month_g3

0xaadd,	// (0x00092016) frm_month_g4

0xaae7,	// (0x00092020) frm_month_g5

0xaaf1,	// (0x0009202a) frm_month_g6

0xaafd,	// (0x00092036) frm_month_g7

0x0190,	// (0x000876c9) frm_month_g8

0xab09,	// (0x00092042) frm_month_g9

0xab12,	// (0x0009204b) frm_month_g10

0xab1b,	// (0x00092054) frm_month_g11

0xab24,	// (0x0009205d) frm_month_g12

0xab2d,	// (0x00092066) frm_month_g13

0xab36,	// (0x0009206f) frm_month_g14

0xab41,	// (0x0009207a) frm_month_g15

0xab4c,	// (0x00092085) frm_month_g16

0x000f,

0xff46,	// (0x0009747f) frm_month_g

0xab57,	// (0x00092090) cell_top_day_name_pane_t1

0xab66,	// (0x0009209f) cell_area_left_week_number_pane_g1

0xab57,	// (0x00092090) cell_area_left_week_number_pane_t1

0x0f18,	// (0x00088451) cell_month_view_pane_g1

0xab6e,	// (0x000920a7) cell_month_view_pane_t1

0x024d,	// (0x00087786) main_fps_pane

0xdef6,	// (0x0009542f) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdef6,	// (0x0009542f) cmail_ddmenu_btn02_pane_cp1

0xdf12,	// (0x0009544b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf12,	// (0x0009544b) cmail_ddmenu_btn02_pane_cp2

0xa48a,	// (0x000919c3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa48a,	// (0x000919c3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe6e,	// (0x000973a7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe6e,	// (0x000973a7) cmail_ddmenu_btn02_pane_g

0xa4a8,	// (0x000919e1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa4a8,	// (0x000919e1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe73,	// (0x000973ac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe73,	// (0x000973ac) cmail_ddmenu_btn02_pane_t

0xab7d,	// (0x000920b6) fps_text_pane_ParamLimits

0xab7d,	// (0x000920b6) fps_text_pane

0xab94,	// (0x000920cd) main_fps_pane_g1_ParamLimits

0xab94,	// (0x000920cd) main_fps_pane_g1

0xabac,	// (0x000920e5) wait_bar_pane_cp010_ParamLimits

0xabac,	// (0x000920e5) wait_bar_pane_cp010

0xabbf,	// (0x000920f8) fps_text_pane_t1_ParamLimits

0xabbf,	// (0x000920f8) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large

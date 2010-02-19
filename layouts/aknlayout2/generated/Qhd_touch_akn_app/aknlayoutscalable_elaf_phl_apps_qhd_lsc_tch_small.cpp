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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00041fa2 };

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
0x1679,	// (0x0004361b) Screen

0x1685,	// (0x00043627) application_window

0x16c1,	// (0x00043663) area_bottom_pane_ParamLimits

0x16c1,	// (0x00043663) area_bottom_pane

0x16fa,	// (0x0004369c) area_top_pane_ParamLimits

0x16fa,	// (0x0004369c) area_top_pane

0xa67a,	// (0x0004c61c) call_video_uplink_pane_ParamLimits

0xa67a,	// (0x0004c61c) call_video_uplink_pane

0x176f,	// (0x00043711) main_pane_ParamLimits

0x176f,	// (0x00043711) main_pane

0xe43f,	// (0x000503e1) context_pane

0x46d1,	// (0x00046673) navi_pane

0x46f9,	// (0x0004669b) popup_cale_events_window_ParamLimits

0x46f9,	// (0x0004669b) popup_cale_events_window

0xe452,	// (0x000503f4) popup_mup_playback_window

0x4711,	// (0x000466b3) signal_pane

0xc50b,	// (0x0004e4ad) main_browser_pane

0xcfde,	// (0x0004ef80) main_burst_pane

0x4423,	// (0x000463c5) main_calc_pane

0xcfde,	// (0x0004ef80) main_cale_day_pane

0xc50b,	// (0x0004e4ad) main_cale_month_pane

0xcfde,	// (0x0004ef80) main_cale_week_pane

0xcfde,	// (0x0004ef80) main_call_pane

0xc1dd,	// (0x0004e17f) main_call_poc_pane

0xcfde,	// (0x0004ef80) main_camera_pane

0xcfde,	// (0x0004ef80) main_chi_dic_pane

0xce63,	// (0x0004ee05) main_clock_pane

0xc1dd,	// (0x0004e17f) main_fmradio_pane

0xcfde,	// (0x0004ef80) main_graph_messa_pane

0xc1dd,	// (0x0004e17f) main_help_pane

0xc50b,	// (0x0004e4ad) main_im_pane

0xc438,	// (0x0004e3da) main_image_pane_ParamLimits

0xc438,	// (0x0004e3da) main_image_pane

0xc1dd,	// (0x0004e17f) main_location2_pane

0xcfde,	// (0x0004ef80) main_location_pane

0xc1dd,	// (0x0004e17f) main_messa_pane

0xc1dd,	// (0x0004e17f) main_mp2_pane

0xcfde,	// (0x0004ef80) main_mp_pane

0xc1dd,	// (0x0004e17f) main_msg_pane

0xc1dd,	// (0x0004e17f) main_mup_eq_pane

0xc1dd,	// (0x0004e17f) main_mup_pane

0xc50b,	// (0x0004e4ad) main_notes_pane

0xc1dd,	// (0x0004e17f) main_pec_pane

0xc1dd,	// (0x0004e17f) main_phob_pane

0xc1dd,	// (0x0004e17f) main_pinb_pane

0xc1dd,	// (0x0004e17f) main_postcard_pane

0xc1dd,	// (0x0004e17f) main_qdial_pane

0xcfde,	// (0x0004ef80) main_skin_pane

0xc1dd,	// (0x0004e17f) main_smil2_pane

0xcfde,	// (0x0004ef80) main_smil_pane

0xcfde,	// (0x0004ef80) main_video_pane

0xcfde,	// (0x0004ef80) main_video_tele_pane

0xc438,	// (0x0004e3da) main_viewer_pane_ParamLimits

0xc438,	// (0x0004e3da) main_viewer_pane

0xcfde,	// (0x0004ef80) main_vorec_pane

0x4477,	// (0x00046419) popup_blid_sat_info_window_ParamLimits

0x4477,	// (0x00046419) popup_blid_sat_info_window

0x44cf,	// (0x00046471) popup_dyc_status_message_window_ParamLimits

0x44cf,	// (0x00046471) popup_dyc_status_message_window

0x44e9,	// (0x0004648b) popup_grid_large_graphic_window_ParamLimits

0x44e9,	// (0x0004648b) popup_grid_large_graphic_window

0x45a5,	// (0x00046547) popup_loc_request_window_ParamLimits

0x45a5,	// (0x00046547) popup_loc_request_window

0x46a9,	// (0x0004664b) popup_wml_address_window_ParamLimits

0x46a9,	// (0x0004664b) popup_wml_address_window

0x425d,	// (0x000461ff) call_muted_g1

0x3f12,	// (0x00045eb4) popup_call_audio_conf_window_ParamLimits

0x3f12,	// (0x00045eb4) popup_call_audio_conf_window

0x4271,	// (0x00046213) popup_call_audio_first_window_ParamLimits

0x4271,	// (0x00046213) popup_call_audio_first_window

0x42e7,	// (0x00046289) popup_call_audio_in_window_ParamLimits

0x42e7,	// (0x00046289) popup_call_audio_in_window

0x4323,	// (0x000462c5) popup_call_audio_out_window_ParamLimits

0x4323,	// (0x000462c5) popup_call_audio_out_window

0x435d,	// (0x000462ff) popup_call_audio_second_window_ParamLimits

0x435d,	// (0x000462ff) popup_call_audio_second_window

0x43b3,	// (0x00046355) popup_call_audio_wait_window_ParamLimits

0x43b3,	// (0x00046355) popup_call_audio_wait_window

0x43e8,	// (0x0004638a) popup_number_entry_window_ParamLimits

0x43e8,	// (0x0004638a) popup_number_entry_window

0xbdca,	// (0x0004dd6c) bg_popup_call_pane_cp05_ParamLimits

0xbdca,	// (0x0004dd6c) bg_popup_call_pane_cp05

0xbdea,	// (0x0004dd8c) popup_number_entry_window_t1

0xbdfd,	// (0x0004dd9f) popup_number_entry_window_t2

0xbe0f,	// (0x0004ddb1) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00051089) popup_number_entry_window_t

0xbe21,	// (0x0004ddc3) text_title_cp2

0xbe34,	// (0x0004ddd6) bg_popup_call_pane_cp_ParamLimits

0xbe34,	// (0x0004ddd6) bg_popup_call_pane_cp

0xbe42,	// (0x0004dde4) call_thumbnail_pane

0xbe4a,	// (0x0004ddec) popup_call_audio_in_window_g1_ParamLimits

0xbe4a,	// (0x0004ddec) popup_call_audio_in_window_g1

0xbe56,	// (0x0004ddf8) popup_call_audio_in_window_g2_ParamLimits

0xbe56,	// (0x0004ddf8) popup_call_audio_in_window_g2

0xbe62,	// (0x0004de04) popup_call_audio_in_window_g3_ParamLimits

0xbe62,	// (0x0004de04) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00051092) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00051092) popup_call_audio_in_window_g

0xbe6e,	// (0x0004de10) popup_call_audio_in_window_t1_ParamLimits

0xbe6e,	// (0x0004de10) popup_call_audio_in_window_t1

0xbe8a,	// (0x0004de2c) popup_call_audio_in_window_t2_ParamLimits

0xbe8a,	// (0x0004de2c) popup_call_audio_in_window_t2

0xbea6,	// (0x0004de48) popup_call_audio_in_window_t3_ParamLimits

0xbea6,	// (0x0004de48) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00051099) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00051099) popup_call_audio_in_window_t

0xbe34,	// (0x0004ddd6) bg_popup_call_pane_cp01_ParamLimits

0xbe34,	// (0x0004ddd6) bg_popup_call_pane_cp01

0xbe42,	// (0x0004dde4) call_thumbnail_pane_cp02

0xbeb9,	// (0x0004de5b) call_type_pane_cp022

0xbec1,	// (0x0004de63) popup_call_audio_out_window_g1_ParamLimits

0xbec1,	// (0x0004de63) popup_call_audio_out_window_g1

0xbed3,	// (0x0004de75) popup_call_audio_out_window_g2_ParamLimits

0xbed3,	// (0x0004de75) popup_call_audio_out_window_g2

0xbedf,	// (0x0004de81) popup_call_audio_out_window_g3_ParamLimits

0xbedf,	// (0x0004de81) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x000510a0) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x000510a0) popup_call_audio_out_window_g

0xbef1,	// (0x0004de93) popup_call_audio_out_window_t1_ParamLimits

0xbef1,	// (0x0004de93) popup_call_audio_out_window_t1

0xbf09,	// (0x0004deab) popup_call_audio_out_window_t2_ParamLimits

0xbf09,	// (0x0004deab) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x000510a7) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x000510a7) popup_call_audio_out_window_t

0xbf1e,	// (0x0004dec0) bg_popup_call_pane_ParamLimits

0xbf1e,	// (0x0004dec0) bg_popup_call_pane

0x1925,	// (0x000438c7) call_thumbnail_pane_cp_ParamLimits

0x1925,	// (0x000438c7) call_thumbnail_pane_cp

0xbfa2,	// (0x0004df44) call_type_pane_cp01_ParamLimits

0xbfa2,	// (0x0004df44) call_type_pane_cp01

0xbfe6,	// (0x0004df88) popup_call_audio_first_window_g1_ParamLimits

0xbfe6,	// (0x0004df88) popup_call_audio_first_window_g1

0xc032,	// (0x0004dfd4) popup_call_audio_first_window_g2_ParamLimits

0xc032,	// (0x0004dfd4) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x000510ac) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x000510ac) popup_call_audio_first_window_g

0xc076,	// (0x0004e018) popup_call_audio_first_window_t1_ParamLimits

0xc076,	// (0x0004e018) popup_call_audio_first_window_t1

0xc122,	// (0x0004e0c4) popup_call_audio_first_window_t4_ParamLimits

0xc122,	// (0x0004e0c4) popup_call_audio_first_window_t4

0xc1ae,	// (0x0004e150) popup_call_audio_first_window_t5_ParamLimits

0xc1ae,	// (0x0004e150) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x000510b1) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x000510b1) popup_call_audio_first_window_t

0xc1dd,	// (0x0004e17f) bg_popup_call_pane_cp02

0xc1e7,	// (0x0004e189) call_type_pane_cp023

0xc1ef,	// (0x0004e191) popup_call_audio_wait_window_g1

0xc1f7,	// (0x0004e199) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x000510b8) popup_call_audio_wait_window_g

0xc1ff,	// (0x0004e1a1) popup_call_audio_wait_window_t3

0xc20d,	// (0x0004e1af) bg_popup_call_pane_cp03_ParamLimits

0xc20d,	// (0x0004e1af) bg_popup_call_pane_cp03

0xc26d,	// (0x0004e20f) call_thumbnail_pane_cp011_ParamLimits

0xc26d,	// (0x0004e20f) call_thumbnail_pane_cp011

0xc279,	// (0x0004e21b) call_type_pane_cp034_ParamLimits

0xc279,	// (0x0004e21b) call_type_pane_cp034

0xc2b5,	// (0x0004e257) popup_call_audio_second_window_g1_ParamLimits

0xc2b5,	// (0x0004e257) popup_call_audio_second_window_g1

0xc2f1,	// (0x0004e293) popup_call_audio_second_window_g2_ParamLimits

0xc2f1,	// (0x0004e293) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x000510bd) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x000510bd) popup_call_audio_second_window_g

0xc32d,	// (0x0004e2cf) popup_call_audio_second_window_t1_ParamLimits

0xc32d,	// (0x0004e2cf) popup_call_audio_second_window_t1

0xc3ae,	// (0x0004e350) popup_call_audio_second_window_t2_ParamLimits

0xc3ae,	// (0x0004e350) popup_call_audio_second_window_t2

0xc3e4,	// (0x0004e386) popup_call_audio_second_window_t3_ParamLimits

0xc3e4,	// (0x0004e386) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x000510c2) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x000510c2) popup_call_audio_second_window_t

0xc1dd,	// (0x0004e17f) bg_popup_call_pane_cp04

0xc41a,	// (0x0004e3bc) list_conf_pane

0xc422,	// (0x0004e3c4) popup_call_audio_conf_window_t1

0xc430,	// (0x0004e3d2) call_thumbnail_pane_g1

0xc438,	// (0x0004e3da) bg_pinb_pane_ParamLimits

0xc438,	// (0x0004e3da) bg_pinb_pane

0xc446,	// (0x0004e3e8) find_pinb_pane

0xc44f,	// (0x0004e3f1) listscroll_pinb_pane_ParamLimits

0xc44f,	// (0x0004e3f1) listscroll_pinb_pane

0xc45e,	// (0x0004e400) pinb_bg_pane_g1

0x1949,	// (0x000438eb) pinb_bg_pane_g2

0x1955,	// (0x000438f7) pinb_bg_pane_g3

0x1961,	// (0x00043903) pinb_bg_pane_g4

0x196d,	// (0x0004390f) pinb_bg_pane_g5

0x1979,	// (0x0004391b) pinb_bg_pane_g6

0x1984,	// (0x00043926) pinb_bg_pane_g7

0x198f,	// (0x00043931) pinb_bg_pane_g8

0x199a,	// (0x0004393c) pinb_bg_pane_g9

0x19a4,	// (0x00043946) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x000510c9) pinb_bg_pane_g

0x19c1,	// (0x00043963) grid_pinb_pane

0x19ca,	// (0x0004396c) list_pinb_pane

0x19d3,	// (0x00043975) scroll_pane_cp01_ParamLimits

0x19d3,	// (0x00043975) scroll_pane_cp01

0xc468,	// (0x0004e40a) find_pinb_pane_g1_ParamLimits

0xc468,	// (0x0004e40a) find_pinb_pane_g1

0xc480,	// (0x0004e422) find_pinb_pane_t1

0xc492,	// (0x0004e434) find_pinb_pane_t2

0x0001,

0xf141,	// (0x000510e3) find_pinb_pane_t

0xc4a7,	// (0x0004e449) input_focus_pane_cp01_ParamLimits

0xc4a7,	// (0x0004e449) input_focus_pane_cp01

0x19e5,	// (0x00043987) cell_pinb_pane_ParamLimits

0x19e5,	// (0x00043987) cell_pinb_pane

0x1a0e,	// (0x000439b0) cell_pinb_pane_g1_ParamLimits

0x1a0e,	// (0x000439b0) cell_pinb_pane_g1

0x1a1e,	// (0x000439c0) cell_pinb_pane_g2_ParamLimits

0x1a1e,	// (0x000439c0) cell_pinb_pane_g2

0xc4b3,	// (0x0004e455) cell_pinb_pane_g3_ParamLimits

0xc4b3,	// (0x0004e455) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x000510e8) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x000510e8) cell_pinb_pane_g

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp01

0x1a2a,	// (0x000439cc) list_pinb_item_pane_ParamLimits

0x1a2a,	// (0x000439cc) list_pinb_item_pane

0xc1dd,	// (0x0004e17f) list_highlight_pane_cp02

0x1a3c,	// (0x000439de) list_pinb_item_pane_g1_ParamLimits

0x1a3c,	// (0x000439de) list_pinb_item_pane_g1

0x1a49,	// (0x000439eb) list_pinb_item_pane_g2_ParamLimits

0x1a49,	// (0x000439eb) list_pinb_item_pane_g2

0x1a55,	// (0x000439f7) list_pinb_item_pane_g3_ParamLimits

0x1a55,	// (0x000439f7) list_pinb_item_pane_g3

0x1a66,	// (0x00043a08) list_pinb_item_pane_g4_ParamLimits

0x1a66,	// (0x00043a08) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x000510ef) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x000510ef) list_pinb_item_pane_g

0x1a72,	// (0x00043a14) list_pinb_item_pane_t1_ParamLimits

0x1a72,	// (0x00043a14) list_pinb_item_pane_t1

0x1aa7,	// (0x00043a49) calc_display_pane

0x1acf,	// (0x00043a71) calc_paper_pane

0x1af2,	// (0x00043a94) grid_calc_pane

0xc1dd,	// (0x0004e17f) bg_list_pane_cp01

0x1b20,	// (0x00043ac2) clock_g1

0x1b28,	// (0x00043aca) clock_g2

0x0001,

0xf156,	// (0x000510f8) clock_g

0x1b30,	// (0x00043ad2) clock_t1_ParamLimits

0x1b30,	// (0x00043ad2) clock_t1

0x1b45,	// (0x00043ae7) clock_t2_ParamLimits

0x1b45,	// (0x00043ae7) clock_t2

0x1b57,	// (0x00043af9) clock_t3_ParamLimits

0x1b57,	// (0x00043af9) clock_t3

0x1b69,	// (0x00043b0b) clock_t4_ParamLimits

0x1b69,	// (0x00043b0b) clock_t4

0x1b7b,	// (0x00043b1d) clock_t5_ParamLimits

0x1b7b,	// (0x00043b1d) clock_t5

0x1b90,	// (0x00043b32) clock_t6_ParamLimits

0x1b90,	// (0x00043b32) clock_t6

0x1ba2,	// (0x00043b44) clock_t7_ParamLimits

0x1ba2,	// (0x00043b44) clock_t7

0x1bb4,	// (0x00043b56) clock_t8_ParamLimits

0x1bb4,	// (0x00043b56) clock_t8

0x1bc8,	// (0x00043b6a) clock_t9_ParamLimits

0x1bc8,	// (0x00043b6a) clock_t9

0x0008,

0xf15b,	// (0x000510fd) clock_t_ParamLimits

0xf15b,	// (0x000510fd) clock_t

0xc4bf,	// (0x0004e461) popup_clock_analogue_window_cp02

0xc4bf,	// (0x0004e461) popup_clock_digital_window_cp01

0xc4c7,	// (0x0004e469) listscroll_help_pane

0xc1dd,	// (0x0004e17f) phob_pre_status_pane

0xc4d1,	// (0x0004e473) grid_qdial_pane

0xc1dd,	// (0x0004e17f) listscroll_mce_pane

0xc4db,	// (0x0004e47d) bg_notes_pane

0xc4e9,	// (0x0004e48b) list_notes_pane

0x1bdc,	// (0x00043b7e) scroll_pane_cp06

0xc4f7,	// (0x0004e499) bg_calc_paper_pane

0xa6a0,	// (0x0004c642) list_calc_pane

0xc50b,	// (0x0004e4ad) bg_calc_display_pane

0x1bf0,	// (0x00043b92) calc_display_pane_t1

0x1c02,	// (0x00043ba4) calc_display_pane_t2

0xa6ba,	// (0x0004c65c) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00051110) calc_display_pane_t

0x1c14,	// (0x00043bb6) cell_calc_pane_ParamLimits

0x1c14,	// (0x00043bb6) cell_calc_pane

0xc517,	// (0x0004e4b9) bg_calc_paper_pane_g1

0xc523,	// (0x0004e4c5) bg_calc_paper_pane_g2

0xc52f,	// (0x0004e4d1) bg_calc_paper_pane_g3

0xc53b,	// (0x0004e4dd) bg_calc_paper_pane_g4

0xc547,	// (0x0004e4e9) bg_calc_paper_pane_g5

0x1c49,	// (0x00043beb) bg_calc_paper_pane_g6

0x1c58,	// (0x00043bfa) bg_calc_paper_pane_g7

0x1c67,	// (0x00043c09) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00051117) bg_calc_paper_pane_g

0x1c7a,	// (0x00043c1c) calc_bg_paper_pane_g9

0x1c8d,	// (0x00043c2f) list_calc_item_pane_ParamLimits

0x1c8d,	// (0x00043c2f) list_calc_item_pane

0xc553,	// (0x0004e4f5) list_calc_item_pane_g1

0xa6cc,	// (0x0004c66e) list_calc_item_pane_t1_ParamLimits

0xa6cc,	// (0x0004c66e) list_calc_item_pane_t1

0x1ca5,	// (0x00043c47) list_calc_item_pane_t2_ParamLimits

0x1ca5,	// (0x00043c47) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00051128) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00051128) list_calc_item_pane_t

0xc560,	// (0x0004e502) cell_calc_pane_g1

0xc56a,	// (0x0004e50c) grid_highlight_pane_cp02

0x1cd7,	// (0x00043c79) bg_calc_display_pane_g1

0x1ce0,	// (0x00043c82) bg_calc_display_pane_g2

0x1cea,	// (0x00043c8c) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00051132) bg_calc_display_pane_g

0x1cf3,	// (0x00043c95) cell_qdial_pane_ParamLimits

0x1cf3,	// (0x00043c95) cell_qdial_pane

0x1d07,	// (0x00043ca9) cell_qdial_pane_g1_ParamLimits

0x1d07,	// (0x00043ca9) cell_qdial_pane_g1

0x1d1d,	// (0x00043cbf) cell_qdial_pane_g2_ParamLimits

0x1d1d,	// (0x00043cbf) cell_qdial_pane_g2

0xc58c,	// (0x0004e52e) cell_qdial_pane_g3_ParamLimits

0xc58c,	// (0x0004e52e) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00051139) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00051139) cell_qdial_pane_g

0x1d44,	// (0x00043ce6) cell_qdial_pane_t1_ParamLimits

0x1d44,	// (0x00043ce6) cell_qdial_pane_t1

0x1d5c,	// (0x00043cfe) cell_qdial_pane_t2_ParamLimits

0x1d5c,	// (0x00043cfe) cell_qdial_pane_t2

0x1d6f,	// (0x00043d11) cell_qdial_pane_t3_ParamLimits

0x1d6f,	// (0x00043d11) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00051142) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00051142) cell_qdial_pane_t

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp04

0xc598,	// (0x0004e53a) thumbnail_qdial_pane_ParamLimits

0xc598,	// (0x0004e53a) thumbnail_qdial_pane

0xc5f4,	// (0x0004e596) list_help_pane

0xc5fd,	// (0x0004e59f) scroll_pane_cp02

0x1d82,	// (0x00043d24) help_list_pane_t1_ParamLimits

0x1d82,	// (0x00043d24) help_list_pane_t1

0xa6de,	// (0x0004c680) bg_notes_pane_g2

0xa6e6,	// (0x0004c688) bg_notes_pane_g3

0xa6ee,	// (0x0004c690) notes_bg_pane_g1

0xa6f6,	// (0x0004c698) notes_bg_pane_g4

0xa6fe,	// (0x0004c6a0) notes_bg_pane_g5

0xa706,	// (0x0004c6a8) notes_bg_pane_g6

0xa70e,	// (0x0004c6b0) notes_bg_pane_g7

0xa716,	// (0x0004c6b8) notes_bg_pane_g8

0xa71e,	// (0x0004c6c0) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00051160) notes_bg_pane_g

0x1d9f,	// (0x00043d41) list_notes_text_pane_ParamLimits

0x1d9f,	// (0x00043d41) list_notes_text_pane

0xc606,	// (0x0004e5a8) list_notes_text_pane_g1

0x0b94,	// (0x00042b36) list_notes_text_pane_t1

0xc50b,	// (0x0004e4ad) listscroll_cale_week_pane

0x1dd1,	// (0x00043d73) bg_cale_heading_pane

0xc620,	// (0x0004e5c2) bg_cale_pane_cp01

0x1de5,	// (0x00043d87) cale_week_corner_pane

0x1dfb,	// (0x00043d9d) cale_week_day_heading_pane

0x1e0f,	// (0x00043db1) cale_week_scroll_pane_g1

0x1e20,	// (0x00043dc2) cale_week_scroll_pane_g2

0x1e31,	// (0x00043dd3) cale_week_scroll_pane_g3

0x1e42,	// (0x00043de4) cale_week_scroll_pane_g4

0x1e53,	// (0x00043df5) cale_week_scroll_pane_g5

0x1e66,	// (0x00043e08) cale_week_scroll_pane_g6

0x1e79,	// (0x00043e1b) cale_week_scroll_pane_g7

0x1e8c,	// (0x00043e2e) cale_week_scroll_pane_g8

0x1e9f,	// (0x00043e41) cale_week_scroll_pane_g9

0x1eb0,	// (0x00043e52) cale_week_scroll_pane_g10

0x1ec1,	// (0x00043e63) cale_week_scroll_pane_g11

0x1ed2,	// (0x00043e74) cale_week_scroll_pane_g12

0x1ee3,	// (0x00043e85) cale_week_scroll_pane_g13

0x1ef4,	// (0x00043e96) cale_week_scroll_pane_g14

0x1f05,	// (0x00043ea7) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0005116f) cale_week_scroll_pane_g

0x1f16,	// (0x00043eb8) cale_week_time_pane

0x1f29,	// (0x00043ecb) grid_cale_week_pane

0x1f3e,	// (0x00043ee0) scroll_pane_cp08

0x1f58,	// (0x00043efa) cell_cale_week_pane_ParamLimits

0x1f58,	// (0x00043efa) cell_cale_week_pane

0x1f98,	// (0x00043f3a) cale_week_day_heading_pane_t1

0x1fc2,	// (0x00043f64) cale_week_day_heading_pane_t2

0x1fec,	// (0x00043f8e) cale_week_day_heading_pane_t3

0x2016,	// (0x00043fb8) cale_week_day_heading_pane_t4

0x2040,	// (0x00043fe2) cale_week_day_heading_pane_t5

0x206a,	// (0x0004400c) cale_week_day_heading_pane_t6

0x2096,	// (0x00044038) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0005118e) cale_week_day_heading_pane_t

0xc64b,	// (0x0004e5ed) bg_cale_side_pane

0x20c0,	// (0x00044062) cale_week_time_pane_t1

0x20d8,	// (0x0004407a) cale_week_time_pane_t2

0x20f0,	// (0x00044092) cale_week_time_pane_t3

0x2108,	// (0x000440aa) cale_week_time_pane_t4

0x2120,	// (0x000440c2) cale_week_time_pane_t5

0x2138,	// (0x000440da) cale_week_time_pane_t6

0x2150,	// (0x000440f2) cale_week_time_pane_t7

0x2168,	// (0x0004410a) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0005119d) cale_week_time_pane_t

0x2180,	// (0x00044122) cell_cale_week_pane_g2

0x2199,	// (0x0004413b) cell_cale_week_pane_g3_ParamLimits

0x2199,	// (0x0004413b) cell_cale_week_pane_g3

0xc659,	// (0x0004e5fb) grid_highlight_pane_cp07

0xc661,	// (0x0004e603) listscroll_gms_pane

0xc66b,	// (0x0004e60d) grid_gms_pane

0xc674,	// (0x0004e616) listscroll_gms_pane_g1

0xc67c,	// (0x0004e61e) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x000511ae) listscroll_gms_pane_g

0x21b1,	// (0x00044153) scroll_pane_cp010

0x21bc,	// (0x0004415e) cell_gms_pane_ParamLimits

0x21bc,	// (0x0004415e) cell_gms_pane

0x21ce,	// (0x00044170) cell_gms_pane_g1

0xc684,	// (0x0004e626) cell_gms_pane_g2

0xc68c,	// (0x0004e62e) cell_gms_pane_g3

0xc695,	// (0x0004e637) cell_gms_pane_g4

0x0003,

0xf211,	// (0x000511b3) cell_gms_pane_g

0xc69e,	// (0x0004e640) grid_highlight_pane_cp09

0x4207,	// (0x000461a9) phob_pre_status_pane_g1

0x420f,	// (0x000461b1) phob_pre_status_pane_g2

0x4217,	// (0x000461b9) phob_pre_status_pane_g3

0x421f,	// (0x000461c1) phob_pre_status_pane_g4

0x0004,

0xf52d,	// (0x000514cf) phob_pre_status_pane_g

0x422f,	// (0x000461d1) phob_pre_status_pane_t1

0x423d,	// (0x000461df) phob_pre_status_pane_t2

0x424d,	// (0x000461ef) phob_pre_status_pane_t3

0x0002,

0xf538,	// (0x000514da) phob_pre_status_pane_t

0xc1dd,	// (0x0004e17f) bg_list_pane_cp05

0x21de,	// (0x00044180) grid_vorec_pane

0xa726,	// (0x0004c6c8) vorec_t1

0xa734,	// (0x0004c6d6) vorec_t2

0xa742,	// (0x0004c6e4) vorec_t3

0xa750,	// (0x0004c6f2) vorec_t4

0xa75e,	// (0x0004c700) vorec_t5

0xa76c,	// (0x0004c70e) vorec_t6

0x0006,

0xf21a,	// (0x000511bc) vorec_t

0xa788,	// (0x0004c72a) wait_bar_pane_cp01

0x21e6,	// (0x00044188) cell_vorec_pane_ParamLimits

0x21e6,	// (0x00044188) cell_vorec_pane

0xc6a6,	// (0x0004e648) cell_vorec_pane_g1

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp05

0x2211,	// (0x000441b3) cams_zoom_pane

0x2220,	// (0x000441c2) image_vga_pane

0x223a,	// (0x000441dc) main_camera_pane_g1

0x224c,	// (0x000441ee) main_camera_pane_g2

0x225c,	// (0x000441fe) main_camera_pane_g3

0x226c,	// (0x0004420e) main_camera_pane_g4

0x227c,	// (0x0004421e) main_camera_pane_g5

0x228c,	// (0x0004422e) main_camera_pane_g6

0x229e,	// (0x00044240) main_camera_pane_g7

0x0007,

0xf229,	// (0x000511cb) main_camera_pane_g

0x22ae,	// (0x00044250) main_camera_pane_t1

0x22c4,	// (0x00044266) main_camera_pane_t2

0x0001,

0xf23a,	// (0x000511dc) main_camera_pane_t

0x22fe,	// (0x000442a0) cams_zoom_pane_cp_ParamLimits

0x22fe,	// (0x000442a0) cams_zoom_pane_cp

0x2326,	// (0x000442c8) image_cif_pane_ParamLimits

0x2326,	// (0x000442c8) image_cif_pane

0x2361,	// (0x00044303) image_subqcif_pane

0x2369,	// (0x0004430b) main_video_pane_g1_ParamLimits

0x2369,	// (0x0004430b) main_video_pane_g1

0x238d,	// (0x0004432f) main_video_pane_g2_ParamLimits

0x238d,	// (0x0004432f) main_video_pane_g2

0x23c1,	// (0x00044363) main_video_pane_g3_ParamLimits

0x23c1,	// (0x00044363) main_video_pane_g3

0x23ef,	// (0x00044391) main_video_pane_g4_ParamLimits

0x23ef,	// (0x00044391) main_video_pane_g4

0x241d,	// (0x000443bf) main_video_pane_g5_ParamLimits

0x241d,	// (0x000443bf) main_video_pane_g5

0xc6bc,	// (0x0004e65e) main_video_pane_g6_ParamLimits

0xc6bc,	// (0x0004e65e) main_video_pane_g6

0x0006,

0xf23f,	// (0x000511e1) main_video_pane_g_ParamLimits

0xf23f,	// (0x000511e1) main_video_pane_g

0x2446,	// (0x000443e8) main_video_pane_t1_ParamLimits

0x2446,	// (0x000443e8) main_video_pane_t1

0xc6d6,	// (0x0004e678) cams_zoom_pane_g1

0xc6df,	// (0x0004e681) cams_zoom_pane_g2

0xc6e8,	// (0x0004e68a) cams_zoom_pane_g3

0xc6f1,	// (0x0004e693) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x000511f0) cams_zoom_pane_g

0x24a3,	// (0x00044445) grid_cams_pane

0x24bd,	// (0x0004445f) linegrid_cams_pane

0x24d1,	// (0x00044473) cell_cams_pane_ParamLimits

0x24d1,	// (0x00044473) cell_cams_pane

0xc6fa,	// (0x0004e69c) cams_burst_image_pane

0xc702,	// (0x0004e6a4) cell_cams_pane_g1

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp03

0xc560,	// (0x0004e502) mp_bg_pane_g1

0xc1dd,	// (0x0004e17f) bg_list_pane_cp03

0xe317,	// (0x000502b9) bg_mp_pane

0xe31f,	// (0x000502c1) grid_mp_pane

0xe327,	// (0x000502c9) media_player_g1

0xe32f,	// (0x000502d1) media_player_t1

0xe33d,	// (0x000502df) media_player_t2

0xe34b,	// (0x000502ed) media_player_t3

0xe359,	// (0x000502fb) media_player_t4

0xe367,	// (0x00050309) media_player_t5

0xe375,	// (0x00050317) media_player_t6

0xe383,	// (0x00050325) media_player_t7

0x0006,

0x0217,	// (0x000421b9) media_player_t

0xe391,	// (0x00050333) wait_bar_pane_cp02

0xf519,	// (0x000514bb) main_usb_pane_t

0x41fe,	// (0x000461a0) cell_mp_pane

0xc560,	// (0x0004e502) cell_mp_pane_g1

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp06

0xc70a,	// (0x0004e6ac) grid_skin_colour_pane

0xc712,	// (0x0004e6b4) list_highlight_pane_cp03

0x24f1,	// (0x00044493) skin_g1

0xc71a,	// (0x0004e6bc) skin_t1

0xc729,	// (0x0004e6cb) skin_t2

0x0001,

0xf283,	// (0x00051225) skin_t

0x24f9,	// (0x0004449b) cell_skin_colour_pane_ParamLimits

0x24f9,	// (0x0004449b) cell_skin_colour_pane

0xc737,	// (0x0004e6d9) cell_skin_colour_pane_g1

0x2572,	// (0x00044514) call_video_g1_ParamLimits

0x2572,	// (0x00044514) call_video_g1

0x258e,	// (0x00044530) call_video_g2_ParamLimits

0x258e,	// (0x00044530) call_video_g2

0x0001,

0xf288,	// (0x0005122a) call_video_g_ParamLimits

0xf288,	// (0x0005122a) call_video_g

0x25e0,	// (0x00044582) call_video_uplink_pane_cp1_ParamLimits

0x25e0,	// (0x00044582) call_video_uplink_pane_cp1

0xc749,	// (0x0004e6eb) call_video_uplink_pane_cp2

0x267f,	// (0x00044621) video_down_crop_pane_ParamLimits

0x267f,	// (0x00044621) video_down_crop_pane

0x2776,	// (0x00044718) video_down_pane_ParamLimits

0x2776,	// (0x00044718) video_down_pane

0xc751,	// (0x0004e6f3) video_down_subqcif_pane_ParamLimits

0xc751,	// (0x0004e6f3) video_down_subqcif_pane

0xc769,	// (0x0004e70b) video_down_subqcif_pane_cp_ParamLimits

0xc769,	// (0x0004e70b) video_down_subqcif_pane_cp

0xc78f,	// (0x0004e731) im_reading_pane_ParamLimits

0xc78f,	// (0x0004e731) im_reading_pane

0x2884,	// (0x00044826) im_writing_pane_ParamLimits

0x2884,	// (0x00044826) im_writing_pane

0x289a,	// (0x0004483c) im_reading_pane_t1

0xc7a9,	// (0x0004e74b) list_im_pane

0xc7ba,	// (0x0004e75c) scroll_pane_cp07

0x28d3,	// (0x00044875) im_writing_pane_t1_ParamLimits

0x28d3,	// (0x00044875) im_writing_pane_t1

0xc7d3,	// (0x0004e775) im_writing_pane_t2_ParamLimits

0xc7d3,	// (0x0004e775) im_writing_pane_t2

0x0001,

0xf292,	// (0x00051234) im_writing_pane_t_ParamLimits

0xf292,	// (0x00051234) im_writing_pane_t

0xc1dd,	// (0x0004e17f) input_focus_pane_cp04

0xc1dd,	// (0x0004e17f) input_focus_pane_cp05

0x28e8,	// (0x0004488a) list_im_single_pane_ParamLimits

0x28e8,	// (0x0004488a) list_im_single_pane

0x28fc,	// (0x0004489e) list_single_im_pane_t1

0x41be,	// (0x00046160) blid_accuracy_pane

0x41c6,	// (0x00046168) blid_compass_pane

0x41d0,	// (0x00046172) main_location_t1

0x41e0,	// (0x00046182) main_location_t2

0x41f0,	// (0x00046192) main_location_t3

0x0002,

0xf526,	// (0x000514c8) main_location_t

0xc1dd,	// (0x0004e17f) aid_levels_location

0xc560,	// (0x0004e502) blid_accuracy_pane_g1

0xc560,	// (0x0004e502) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00051296) blid_accuracy_pane_g

0xc81b,	// (0x0004e7bd) wml_content_pane

0xc859,	// (0x0004e7fb) wml_button_pane_ParamLimits

0xc859,	// (0x0004e7fb) wml_button_pane

0x290b,	// (0x000448ad) wml_list_single_large_pane_ParamLimits

0x290b,	// (0x000448ad) wml_list_single_large_pane

0x2920,	// (0x000448c2) wml_list_single_medium_pane_ParamLimits

0x2920,	// (0x000448c2) wml_list_single_medium_pane

0x2936,	// (0x000448d8) wml_list_single_small_pane_ParamLimits

0x2936,	// (0x000448d8) wml_list_single_small_pane

0xc86d,	// (0x0004e80f) wml_selection_box_pane_ParamLimits

0xc86d,	// (0x0004e80f) wml_selection_box_pane

0xc880,	// (0x0004e822) wml_list_single_pane_t1

0xc88f,	// (0x0004e831) wml_list_single_medium_pane_t1

0xc89e,	// (0x0004e840) wml_list_single_large_pane_t1

0xc8ad,	// (0x0004e84f) input_focus_pane_cp02_ParamLimits

0xc8ad,	// (0x0004e84f) input_focus_pane_cp02

0xc8c0,	// (0x0004e862) wml_selection_box_pane_g1

0xc8c9,	// (0x0004e86b) wml_selection_box_pane_t1_ParamLimits

0xc8c9,	// (0x0004e86b) wml_selection_box_pane_t1

0xc438,	// (0x0004e3da) bg_wml_button_pane_ParamLimits

0xc438,	// (0x0004e3da) bg_wml_button_pane

0xc8e1,	// (0x0004e883) wml_button_pane_g1

0xc8e9,	// (0x0004e88b) wml_button_pane_t1

0xc8e1,	// (0x0004e883) wml_button_bg_pane_g1

0xc8f9,	// (0x0004e89b) wml_button_bg_pane_g2

0xc901,	// (0x0004e8a3) wml_button_bg_pane_g3

0xc909,	// (0x0004e8ab) wml_button_bg_pane_g4

0xc911,	// (0x0004e8b3) wml_button_bg_pane_g5

0xc919,	// (0x0004e8bb) wml_button_bg_pane_g6

0xc921,	// (0x0004e8c3) wml_button_bg_pane_g7

0xc929,	// (0x0004e8cb) wml_button_bg_pane_g8

0xc931,	// (0x0004e8d3) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00051239) wml_button_bg_pane_g

0x294e,	// (0x000448f0) bg_list_pane_cp02

0xc939,	// (0x0004e8db) mce_header_pane_ParamLimits

0xc939,	// (0x0004e8db) mce_header_pane

0xc94f,	// (0x0004e8f1) mce_icon_pane

0xc94f,	// (0x0004e8f1) mce_image_pane

0xc958,	// (0x0004e8fa) mce_text_pane_ParamLimits

0xc958,	// (0x0004e8fa) mce_text_pane

0x2956,	// (0x000448f8) scroll_pane_cp03

0xc851,	// (0x0004e7f3) scroll_pane_cp04

0xc96b,	// (0x0004e90d) scroll_pane_cp05_ParamLimits

0xc96b,	// (0x0004e90d) scroll_pane_cp05

0x2960,	// (0x00044902) mce_header_field_pane_ParamLimits

0x2960,	// (0x00044902) mce_header_field_pane

0x2977,	// (0x00044919) mce_header_field_pane_2_ParamLimits

0x2977,	// (0x00044919) mce_header_field_pane_2

0x298d,	// (0x0004492f) mce_header_field_pane_3

0x2995,	// (0x00044937) list_single_mce_message_pane_ParamLimits

0x2995,	// (0x00044937) list_single_mce_message_pane

0x29aa,	// (0x0004494c) list_single_mce_smart_pane_ParamLimits

0x29aa,	// (0x0004494c) list_single_mce_smart_pane

0xc977,	// (0x0004e919) input_focus_pane_cp03

0xc980,	// (0x0004e922) list_header_data_pane

0x29ca,	// (0x0004496c) mce_header_field_pane_t1

0x29da,	// (0x0004497c) list_single_mce_header_pane_ParamLimits

0x29da,	// (0x0004497c) list_single_mce_header_pane

0xc988,	// (0x0004e92a) list_single_mce_header_pane_t1

0xc997,	// (0x0004e939) list_single_mce_message_pane_g1

0xc99f,	// (0x0004e941) list_single_mce_message_pane_t1

0x2a0c,	// (0x000449ae) bg_cale_heading_pane_cp01_ParamLimits

0x2a0c,	// (0x000449ae) bg_cale_heading_pane_cp01

0xc9ad,	// (0x0004e94f) bg_cale_pane_cp02_ParamLimits

0xc9ad,	// (0x0004e94f) bg_cale_pane_cp02

0x2a2f,	// (0x000449d1) cale_month_corner_pane

0x2a45,	// (0x000449e7) cale_month_day_heading_pane_ParamLimits

0x2a45,	// (0x000449e7) cale_month_day_heading_pane

0x2a78,	// (0x00044a1a) cale_month_pane_g1_ParamLimits

0x2a78,	// (0x00044a1a) cale_month_pane_g1

0x2a94,	// (0x00044a36) cale_month_pane_g2_ParamLimits

0x2a94,	// (0x00044a36) cale_month_pane_g2

0x2aaf,	// (0x00044a51) cale_month_pane_g3_ParamLimits

0x2aaf,	// (0x00044a51) cale_month_pane_g3

0x2adb,	// (0x00044a7d) cale_month_pane_g4_ParamLimits

0x2adb,	// (0x00044a7d) cale_month_pane_g4

0x2b07,	// (0x00044aa9) cale_month_pane_g5_ParamLimits

0x2b07,	// (0x00044aa9) cale_month_pane_g5

0x2b3b,	// (0x00044add) cale_month_pane_g6_ParamLimits

0x2b3b,	// (0x00044add) cale_month_pane_g6

0x2b77,	// (0x00044b19) cale_month_pane_g7_ParamLimits

0x2b77,	// (0x00044b19) cale_month_pane_g7

0x2bb3,	// (0x00044b55) cale_month_pane_g8_ParamLimits

0x2bb3,	// (0x00044b55) cale_month_pane_g8

0x2bef,	// (0x00044b91) cale_month_pane_g9_ParamLimits

0x2bef,	// (0x00044b91) cale_month_pane_g9

0x2c29,	// (0x00044bcb) cale_month_pane_g10_ParamLimits

0x2c29,	// (0x00044bcb) cale_month_pane_g10

0x2c63,	// (0x00044c05) cale_month_pane_g11_ParamLimits

0x2c63,	// (0x00044c05) cale_month_pane_g11

0x2c9d,	// (0x00044c3f) cale_month_pane_g12_ParamLimits

0x2c9d,	// (0x00044c3f) cale_month_pane_g12

0x2cd7,	// (0x00044c79) cale_month_pane_g13_ParamLimits

0x2cd7,	// (0x00044c79) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0005124c) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0005124c) cale_month_pane_g

0x2d11,	// (0x00044cb3) cale_month_week_pane

0x2d24,	// (0x00044cc6) grid_cale_month_pane_ParamLimits

0x2d24,	// (0x00044cc6) grid_cale_month_pane

0x2d52,	// (0x00044cf4) cale_month_day_heading_pane_t1

0x2db0,	// (0x00044d52) cale_month_day_heading_pane_t2

0x2e15,	// (0x00044db7) cale_month_day_heading_pane_t3

0x2e7a,	// (0x00044e1c) cale_month_day_heading_pane_t4

0x2edf,	// (0x00044e81) cale_month_day_heading_pane_t5

0x2f54,	// (0x00044ef6) cale_month_day_heading_pane_t6

0x2fc9,	// (0x00044f6b) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00051267) cale_month_day_heading_pane_t

0xc64b,	// (0x0004e5ed) bg_cale_side_pane_cp01

0x303e,	// (0x00044fe0) cale_month_week_pane_t1

0x3055,	// (0x00044ff7) cale_month_week_pane_t2

0x306c,	// (0x0004500e) cale_month_week_pane_t3

0x3083,	// (0x00045025) cale_month_week_pane_t4

0x309a,	// (0x0004503c) cale_month_week_pane_t5

0x30b1,	// (0x00045053) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00051276) cale_month_week_pane_t

0x30c8,	// (0x0004506a) cell_cale_month_pane_ParamLimits

0x30c8,	// (0x0004506a) cell_cale_month_pane

0xa85a,	// (0x0004c7fc) cell_cale_month_pane_g1

0x319e,	// (0x00045140) cell_cale_month_pane_t1_ParamLimits

0x319e,	// (0x00045140) cell_cale_month_pane_t1

0xc659,	// (0x0004e5fb) grid_highlight_pane_cp08

0xc560,	// (0x0004e502) main_smil_g1

0x31ba,	// (0x0004515c) smil_status_pane

0xc9e2,	// (0x0004e984) smil_text_pane

0xe237,	// (0x000501d9) bg_popup_call3_rect_pane_g8

0xe23f,	// (0x000501e1) bg_popup_call3_rect_pane_g9

0x0008,

0x01ba,	// (0x0004215c) bg_popup_call3_rect_pane_g

0xe4b9,	// (0x0005045b) smil_status_volume_pane_g1

0xc9ec,	// (0x0004e98e) smil_status_pane_t1

0xa9d1,	// (0x0004c973) volume_smil_pane

0xca03,	// (0x0004e9a5) list_smil_text_pane

0x31cd,	// (0x0004516f) scroll_pane_cp011

0x31d8,	// (0x0004517a) smil_text_list_pane_t1_ParamLimits

0x31d8,	// (0x0004517a) smil_text_list_pane_t1

0xa866,	// (0x0004c808) aid_volume_smil_ParamLimits

0xa866,	// (0x0004c808) aid_volume_smil

0xc560,	// (0x0004e502) smil_volume_pane_g1

0xc560,	// (0x0004e502) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00051296) smil_volume_pane_g

0xc50b,	// (0x0004e4ad) listscroll_cale_day_pane

0xca0d,	// (0x0004e9af) bg_cale_pane

0xca25,	// (0x0004e9c7) list_cale_pane

0xca36,	// (0x0004e9d8) scroll_pane_cp09

0xca47,	// (0x0004e9e9) cale_bg_pane_g1

0xca4f,	// (0x0004e9f1) cale_bg_pane_g2

0xca57,	// (0x0004e9f9) cale_bg_pane_g3

0xca5f,	// (0x0004ea01) cale_bg_pane_g4

0xca67,	// (0x0004ea09) cale_bg_pane_g5

0xca6f,	// (0x0004ea11) cale_bg_pane_g6

0xca77,	// (0x0004ea19) cale_bg_pane_g7

0xca7f,	// (0x0004ea21) cale_bg_pane_g8

0xca87,	// (0x0004ea29) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0005129b) cale_bg_pane_g

0x321e,	// (0x000451c0) list_cale_time_pane_ParamLimits

0x321e,	// (0x000451c0) list_cale_time_pane

0xca8f,	// (0x0004ea31) list_cale_time_pane_g1_ParamLimits

0xca8f,	// (0x0004ea31) list_cale_time_pane_g1

0xca9b,	// (0x0004ea3d) list_cale_time_pane_g2_ParamLimits

0xca9b,	// (0x0004ea3d) list_cale_time_pane_g2

0x3231,	// (0x000451d3) list_cale_time_pane_g3_ParamLimits

0x3231,	// (0x000451d3) list_cale_time_pane_g3

0x323f,	// (0x000451e1) list_cale_time_pane_g4_ParamLimits

0x323f,	// (0x000451e1) list_cale_time_pane_g4

0x324d,	// (0x000451ef) list_cale_time_pane_g5_ParamLimits

0x324d,	// (0x000451ef) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x000512ae) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x000512ae) list_cale_time_pane_g

0xcab5,	// (0x0004ea57) list_cale_time_pane_t1_ParamLimits

0xcab5,	// (0x0004ea57) list_cale_time_pane_t1

0xcadd,	// (0x0004ea7f) list_cale_time_pane_t2_ParamLimits

0xcadd,	// (0x0004ea7f) list_cale_time_pane_t2

0x34ef,	// (0x00045491) aid_blid_cardinal_pane

0x352d,	// (0x000454cf) compass_pane_t4

0xcb05,	// (0x0004eaa7) list_cale_time_pane_t4_ParamLimits

0xcb05,	// (0x0004eaa7) list_cale_time_pane_t4

0x353b,	// (0x000454dd) compass_pane_t5

0x3549,	// (0x000454eb) compass_pane_t6

0x3557,	// (0x000454f9) compass_pane_t7

0xcf30,	// (0x0004eed2) navi_pane_cc_t1

0xd093,	// (0x0004f035) aid_phob_thumbnail_center_pane

0x3bd6,	// (0x00045b78) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x000512bb) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x000512bb) list_cale_time_pane_t

0xbe34,	// (0x0004ddd6) bg_popup_window_pane_cp02_ParamLimits

0xbe34,	// (0x0004ddd6) bg_popup_window_pane_cp02

0xcb2d,	// (0x0004eacf) heading_pane_cp01_ParamLimits

0xcb2d,	// (0x0004eacf) heading_pane_cp01

0xcb39,	// (0x0004eadb) loc_req_pane_ParamLimits

0xcb39,	// (0x0004eadb) loc_req_pane

0xcb49,	// (0x0004eaeb) loc_type_pane_ParamLimits

0xcb49,	// (0x0004eaeb) loc_type_pane

0xcb5b,	// (0x0004eafd) loc_type_pane_t1_ParamLimits

0xcb5b,	// (0x0004eafd) loc_type_pane_t1

0xcb6d,	// (0x0004eb0f) loc_type_pane_t2_ParamLimits

0xcb6d,	// (0x0004eb0f) loc_type_pane_t2

0xcb7f,	// (0x0004eb21) loc_type_pane_t3_ParamLimits

0xcb7f,	// (0x0004eb21) loc_type_pane_t3

0x0002,

0xf320,	// (0x000512c2) loc_type_pane_t_ParamLimits

0xf320,	// (0x000512c2) loc_type_pane_t

0xcb91,	// (0x0004eb33) list_loc_req_pane

0xcb9b,	// (0x0004eb3d) scroll_pane_cp012

0x325b,	// (0x000451fd) list_single_loc_request_popup_menu_pane_ParamLimits

0x325b,	// (0x000451fd) list_single_loc_request_popup_menu_pane

0xcba6,	// (0x0004eb48) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcba6,	// (0x0004eb48) list_single_loc_request_popup_menu_pane_g1

0xcbb2,	// (0x0004eb54) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbb2,	// (0x0004eb54) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x000512c9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x000512c9) list_single_loc_request_popup_menu_pane_g

0xcbbe,	// (0x0004eb60) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbbe,	// (0x0004eb60) list_single_loc_request_popup_menu_pane_t1

0xc438,	// (0x0004e3da) bg_popup_window_pane_cp03_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_window_pane_cp03

0xd5fc,	// (0x0004f59e) heading_loc_req_pane_ParamLimits

0xd5fc,	// (0x0004f59e) heading_loc_req_pane

0x3268,	// (0x0004520a) popup_dyc_status_message_window_g1_ParamLimits

0x3268,	// (0x0004520a) popup_dyc_status_message_window_g1

0x327c,	// (0x0004521e) popup_dyc_status_message_window_t1_ParamLimits

0x327c,	// (0x0004521e) popup_dyc_status_message_window_t1

0x3291,	// (0x00045233) popup_dyc_status_message_window_t2_ParamLimits

0x3291,	// (0x00045233) popup_dyc_status_message_window_t2

0x32a6,	// (0x00045248) popup_dyc_status_message_window_t3_ParamLimits

0x32a6,	// (0x00045248) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x000512ce) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x000512ce) popup_dyc_status_message_window_t

0xc1dd,	// (0x0004e17f) bg_heading_pane_cp01

0xcbd4,	// (0x0004eb76) heading_loc_req_pane_g1

0xcbdc,	// (0x0004eb7e) heading_loc_req_pane_g2

0xcbe4,	// (0x0004eb86) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x000512d5) heading_loc_req_pane_g

0xcbec,	// (0x0004eb8e) heading_loc_req_pane_t1

0xcbfb,	// (0x0004eb9d) bg_popup_sub_pane_cp01_ParamLimits

0xcbfb,	// (0x0004eb9d) bg_popup_sub_pane_cp01

0xcc09,	// (0x0004ebab) popup_cale_events_window_g1_ParamLimits

0xcc09,	// (0x0004ebab) popup_cale_events_window_g1

0xcc29,	// (0x0004ebcb) popup_cale_events_window_g2_ParamLimits

0xcc29,	// (0x0004ebcb) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00051309) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00051309) popup_cale_events_window_g

0xcc49,	// (0x0004ebeb) popup_cale_events_window_t1_ParamLimits

0xcc49,	// (0x0004ebeb) popup_cale_events_window_t1

0xcc5b,	// (0x0004ebfd) popup_cale_events_window_t2_ParamLimits

0xcc5b,	// (0x0004ebfd) popup_cale_events_window_t2

0xcc99,	// (0x0004ec3b) popup_cale_events_window_t3_ParamLimits

0xcc99,	// (0x0004ec3b) popup_cale_events_window_t3

0xccd3,	// (0x0004ec75) popup_cale_events_window_t4_ParamLimits

0xccd3,	// (0x0004ec75) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0005130e) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0005130e) popup_cale_events_window_t

0x32da,	// (0x0004527c) call_type_pane

0x32ea,	// (0x0004528c) popup_call_status_window_g1

0x32fe,	// (0x000452a0) popup_call_status_window_g2

0x3312,	// (0x000452b4) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00051317) popup_call_status_window_g

0xcd09,	// (0x0004ecab) call_type_pane_g1

0xcd12,	// (0x0004ecb4) call_type_pane_g2

0x0001,

0xf37c,	// (0x0005131e) call_type_pane_g

0xc1dd,	// (0x0004e17f) bg_popup_sub_pane_cp02

0xcd1b,	// (0x0004ecbd) listscroll_popup_wml_pane

0xcd23,	// (0x0004ecc5) list_wml_pane

0xcd2d,	// (0x0004eccf) scroll_pane_cp013

0xcd38,	// (0x0004ecda) list_single_graphic_popup_wml_pane_ParamLimits

0xcd38,	// (0x0004ecda) list_single_graphic_popup_wml_pane

0xc560,	// (0x0004e502) list_single_graphic_popup_wml_pane_g1

0xcd4c,	// (0x0004ecee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00051323) list_single_graphic_popup_wml_pane_g

0xcd54,	// (0x0004ecf6) list_single_graphic_popup_wml_pane_t1

0xcd6a,	// (0x0004ed0c) aid_call_pane

0xc430,	// (0x0004e3d2) popup_clock_analogue_window_g1

0xc430,	// (0x0004e3d2) popup_clock_analogue_window_g2

0xa8fd,	// (0x0004c89f) popup_clock_analogue_window_g3

0xa8fd,	// (0x0004c89f) popup_clock_analogue_window_g4

0xc560,	// (0x0004e502) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00051328) popup_clock_analogue_window_g

0xa905,	// (0x0004c8a7) popup_clock_analogue_window_t1

0xa913,	// (0x0004c8b5) clock_digital_number_pane_ParamLimits

0xa913,	// (0x0004c8b5) clock_digital_number_pane

0xa91f,	// (0x0004c8c1) clock_digital_number_pane_cp02_ParamLimits

0xa91f,	// (0x0004c8c1) clock_digital_number_pane_cp02

0xa92b,	// (0x0004c8cd) clock_digital_number_pane_cp03_ParamLimits

0xa92b,	// (0x0004c8cd) clock_digital_number_pane_cp03

0xa937,	// (0x0004c8d9) clock_digital_number_pane_cp04_ParamLimits

0xa937,	// (0x0004c8d9) clock_digital_number_pane_cp04

0xa947,	// (0x0004c8e9) clock_digital_separator_pane_ParamLimits

0xa947,	// (0x0004c8e9) clock_digital_separator_pane

0xa953,	// (0x0004c8f5) popup_clock_digital_window_t1

0xc560,	// (0x0004e502) clock_digital_number_pane_g1

0xc560,	// (0x0004e502) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00051296) clock_digital_number_pane_g

0xc560,	// (0x0004e502) clock_digital_separator_pane_g1

0xc560,	// (0x0004e502) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00051296) clock_digital_separator_pane_g

0xc1dd,	// (0x0004e17f) bg_popup_window_pane_cp04

0xcd72,	// (0x0004ed14) heading_pane_cp03

0xcd7a,	// (0x0004ed1c) listscroll_popup_gms_pane

0xcd82,	// (0x0004ed24) grid_large_graphic_popup_pane

0xcd8c,	// (0x0004ed2e) listscroll_popup_gms_pane_g1

0xcd94,	// (0x0004ed36) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00051333) listscroll_popup_gms_pane_g

0xc851,	// (0x0004e7f3) scroll_pane_cp014

0x3321,	// (0x000452c3) cell_large_graphic_popup_pane_ParamLimits

0x3321,	// (0x000452c3) cell_large_graphic_popup_pane

0x3339,	// (0x000452db) cell_large_graphic_popup_pane_g1_ParamLimits

0x3339,	// (0x000452db) cell_large_graphic_popup_pane_g1

0xcd9c,	// (0x0004ed3e) cell_large_graphic_popup_pane_g2_ParamLimits

0xcd9c,	// (0x0004ed3e) cell_large_graphic_popup_pane_g2

0xcda8,	// (0x0004ed4a) cell_large_graphic_popup_pane_g3_ParamLimits

0xcda8,	// (0x0004ed4a) cell_large_graphic_popup_pane_g3

0xcdb5,	// (0x0004ed57) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdb5,	// (0x0004ed57) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00051338) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00051338) cell_large_graphic_popup_pane_g

0xcdc5,	// (0x0004ed67) grid_highlight_pane_cp010

0xc560,	// (0x0004e502) bg_popup_call_pane_g1

0xcdcf,	// (0x0004ed71) list_single_graphic_popup_conf_pane_ParamLimits

0xcdcf,	// (0x0004ed71) list_single_graphic_popup_conf_pane

0xcde2,	// (0x0004ed84) list_highlight_pane_cp01

0xcdeb,	// (0x0004ed8d) list_single_graphic_popup_conf_pane_g1

0xcdf3,	// (0x0004ed95) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00051341) list_single_graphic_popup_conf_pane_g

0xcdfb,	// (0x0004ed9d) list_single_graphic_popup_conf_pane_t1

0xce09,	// (0x0004edab) linegrid_cams_pane_g1

0x3345,	// (0x000452e7) linegrid_cams_pane_g2

0xc68c,	// (0x0004e62e) linegrid_cams_pane_g3

0xce12,	// (0x0004edb4) linegrid_cams_pane_g4

0x334e,	// (0x000452f0) linegrid_cams_pane_g5

0x3357,	// (0x000452f9) linegrid_cams_pane_g6

0xc695,	// (0x0004e637) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00051346) linegrid_cams_pane_g

0xce1b,	// (0x0004edbd) popup_clock_analogue_window

0xce1b,	// (0x0004edbd) popup_clock_digital_window

0xc1dd,	// (0x0004e17f) popup_phob_thumbnail_window

0xc560,	// (0x0004e502) call_video_uplink_pane_g1

0xce24,	// (0x0004edc6) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00051355) call_video_uplink_pane_g

0xce2c,	// (0x0004edce) video_uplink_pane

0xce34,	// (0x0004edd6) mce_image_pane_g1

0x3362,	// (0x00045304) mce_image_pane_g2

0x336c,	// (0x0004530e) mce_image_pane_g3

0x3374,	// (0x00045316) mce_image_pane_g4

0x337c,	// (0x0004531e) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0005135a) mce_image_pane_g

0xce3e,	// (0x0004ede0) control_top_pane_stacon_cp01_ParamLimits

0xce3e,	// (0x0004ede0) control_top_pane_stacon_cp01

0xce52,	// (0x0004edf4) uni_indicator_pane_stacon_cp01_ParamLimits

0xce52,	// (0x0004edf4) uni_indicator_pane_stacon_cp01

0xce63,	// (0x0004ee05) bg_popup_sub_pane_cp03

0x3384,	// (0x00045326) chi_dic_find_pane

0x338c,	// (0x0004532e) listscroll_chi_dic_pane

0x3395,	// (0x00045337) main_pane_chidic_g1

0xce6d,	// (0x0004ee0f) chi_dic_find_pane_t1

0xce7b,	// (0x0004ee1d) find_chidic_pane

0xce84,	// (0x0004ee26) chi_dic_list_pane_ParamLimits

0xce84,	// (0x0004ee26) chi_dic_list_pane

0xce95,	// (0x0004ee37) scroll_pane_cp020

0xce9d,	// (0x0004ee3f) find_chidic_pane_t1

0xc1dd,	// (0x0004e17f) input_focus_pane_cp06

0x33a8,	// (0x0004534a) list_chi_dic_pane_ParamLimits

0x33a8,	// (0x0004534a) list_chi_dic_pane

0x33ba,	// (0x0004535c) list_chi_dic_pane_t1_ParamLimits

0x33ba,	// (0x0004535c) list_chi_dic_pane_t1

0xc1dd,	// (0x0004e17f) list_highlight_pane_cp020

0xceac,	// (0x0004ee4e) bg_cale_heading_pane_g1

0x33cd,	// (0x0004536f) bg_cale_heading_pane_g2

0x33d5,	// (0x00045377) bg_cale_heading_pane_g3

0x33dd,	// (0x0004537f) bg_cale_heading_pane_g4

0x33e7,	// (0x00045389) bg_cale_heading_pane_g5

0x33f1,	// (0x00045393) bg_cale_heading_pane_g6

0x33f9,	// (0x0004539b) bg_cale_heading_pane_g7

0x3401,	// (0x000453a3) bg_cale_heading_pane_g8

0x340b,	// (0x000453ad) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00051365) bg_cale_heading_pane_g

0xceac,	// (0x0004ee4e) bg_cale_side_pane_g1

0x3415,	// (0x000453b7) bg_cale_side_pane_g2

0x341d,	// (0x000453bf) bg_cale_side_pane_g3

0x3425,	// (0x000453c7) bg_cale_side_pane_g4

0x342d,	// (0x000453cf) bg_cale_side_pane_g5

0x3435,	// (0x000453d7) bg_cale_side_pane_g6

0x343d,	// (0x000453df) bg_cale_side_pane_g7

0x3445,	// (0x000453e7) bg_cale_side_pane_g8

0x344d,	// (0x000453ef) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00051378) bg_cale_side_pane_g

0x3455,	// (0x000453f7) popup_call_status_window_ParamLimits

0x3455,	// (0x000453f7) popup_call_status_window

0xceb4,	// (0x0004ee56) stacon_top_pane

0xcebc,	// (0x0004ee5e) status_pane_ParamLimits

0xcebc,	// (0x0004ee5e) status_pane

0xced1,	// (0x0004ee73) status_small_pane

0xced9,	// (0x0004ee7b) control_pane

0xc1dd,	// (0x0004e17f) stacon_bottom_pane

0xcee1,	// (0x0004ee83) list_single_mce_smart_pane_t1_ParamLimits

0xcee1,	// (0x0004ee83) list_single_mce_smart_pane_t1

0xcef4,	// (0x0004ee96) list_single_mce_smart_pane_t2_ParamLimits

0xcef4,	// (0x0004ee96) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0005138b) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0005138b) list_single_mce_smart_pane_t

0x349e,	// (0x00045440) compass_pane

0x34a7,	// (0x00045449) main_location2_pane_t1

0x34b9,	// (0x0004545b) main_location2_pane_t2

0x34cb,	// (0x0004546d) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00051390) main_location2_pane_t

0xcf13,	// (0x0004eeb5) compass_pane_g1_ParamLimits

0xcf13,	// (0x0004eeb5) compass_pane_g1

0x350f,	// (0x000454b1) compass_pane_t1

0x351e,	// (0x000454c0) compass_pane_t2

0x0005,

0xf3f7,	// (0x00051399) compass_pane_t

0x3565,	// (0x00045507) text_secondary_cp61

0xcf27,	// (0x0004eec9) navi_pane_cams_g5

0xcf4a,	// (0x0004eeec) navi_pane_im_t1

0xcf58,	// (0x0004eefa) navi_pane_mp_g1_ParamLimits

0xcf58,	// (0x0004eefa) navi_pane_mp_g1

0xcf6c,	// (0x0004ef0e) navi_pane_mp_g2_ParamLimits

0xcf6c,	// (0x0004ef0e) navi_pane_mp_g2

0xcf78,	// (0x0004ef1a) navi_pane_mp_g3_ParamLimits

0xcf78,	// (0x0004ef1a) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x000513ad) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x000513ad) navi_pane_mp_g

0xcf84,	// (0x0004ef26) navi_pane_mp_t1

0xcf92,	// (0x0004ef34) navi_pane_mp_t2

0x0002,

0xf412,	// (0x000513b4) navi_pane_mp_t

0xcfce,	// (0x0004ef70) navi_pane_vt_g1

0xcf84,	// (0x0004ef26) navi_pane_vt_t1

0xcfd6,	// (0x0004ef78) navi_slider_pane

0xcfde,	// (0x0004ef80) zooming_pane

0xcfe6,	// (0x0004ef88) navi_slider_pane_g1

0xa970,	// (0x0004c912) navi_slider_pane_g2

0x0006,

0xf419,	// (0x000513bb) navi_slider_pane_g

0xd018,	// (0x0004efba) aid_levels_zoom

0xd020,	// (0x0004efc2) zooming_pane_g1

0xd028,	// (0x0004efca) zooming_pane_g2

0xd028,	// (0x0004efca) zooming_pane_g3

0x0002,

0x0055,	// (0x00041ff7) zooming_pane_g

0xd030,	// (0x0004efd2) level_10_zoom

0xd039,	// (0x0004efdb) level_11_zoom

0xd042,	// (0x0004efe4) level_1_zoom

0xd04b,	// (0x0004efed) level_2_zoom

0xd054,	// (0x0004eff6) level_3_zoom

0xd05d,	// (0x0004efff) level_4_zoom

0xd066,	// (0x0004f008) level_5_zoom

0xd06f,	// (0x0004f011) level_6_zoom

0xd078,	// (0x0004f01a) level_7_zoom

0xd081,	// (0x0004f023) level_8_zoom

0xd08a,	// (0x0004f02c) level_9_zoom

0xd09b,	// (0x0004f03d) popup_phob_thumbnail_window_g1

0xd0a3,	// (0x0004f045) popup_phob_thumbnail_window_g2

0x0001,

0x005c,	// (0x00041ffe) popup_phob_thumbnail_window_g

0xe399,	// (0x0005033b) level_1_location

0xe3a1,	// (0x00050343) level_2_location

0xe3a9,	// (0x0005034b) level_3_location

0xe3b1,	// (0x00050353) level_4_location

0xcfde,	// (0x0004ef80) level_5_location

0x36a0,	// (0x00045642) mce_icon_pane_g1

0x36a8,	// (0x0004564a) mce_icon_pane_g2

0x0001,

0xf428,	// (0x000513ca) mce_icon_pane_g

0x36b0,	// (0x00045652) main_mup_pane_g1_ParamLimits

0x36b0,	// (0x00045652) main_mup_pane_g1

0x36c6,	// (0x00045668) main_mup_pane_g2_ParamLimits

0x36c6,	// (0x00045668) main_mup_pane_g2

0x36de,	// (0x00045680) main_mup_pane_g3_ParamLimits

0x36de,	// (0x00045680) main_mup_pane_g3

0x36f6,	// (0x00045698) main_mup_pane_g4_ParamLimits

0x36f6,	// (0x00045698) main_mup_pane_g4

0x370e,	// (0x000456b0) main_mup_pane_g5_ParamLimits

0x370e,	// (0x000456b0) main_mup_pane_g5

0x372a,	// (0x000456cc) main_mup_pane_g6_ParamLimits

0x372a,	// (0x000456cc) main_mup_pane_g6

0x3742,	// (0x000456e4) main_mup_pane_g7_ParamLimits

0x3742,	// (0x000456e4) main_mup_pane_g7

0x375a,	// (0x000456fc) main_mup_pane_g8_ParamLimits

0x375a,	// (0x000456fc) main_mup_pane_g8

0x3774,	// (0x00045716) main_mup_pane_g9_ParamLimits

0x3774,	// (0x00045716) main_mup_pane_g9

0x378e,	// (0x00045730) main_mup_pane_g10_ParamLimits

0x378e,	// (0x00045730) main_mup_pane_g10

0x37a8,	// (0x0004574a) main_mup_pane_g11_ParamLimits

0x37a8,	// (0x0004574a) main_mup_pane_g11

0x37bc,	// (0x0004575e) main_mup_pane_g12_ParamLimits

0x37bc,	// (0x0004575e) main_mup_pane_g12

0x37d2,	// (0x00045774) main_mup_pane_g13_ParamLimits

0x37d2,	// (0x00045774) main_mup_pane_g13

0x000c,

0xf42d,	// (0x000513cf) main_mup_pane_g_ParamLimits

0xf42d,	// (0x000513cf) main_mup_pane_g

0x37e6,	// (0x00045788) main_mup_pane_t1_ParamLimits

0x37e6,	// (0x00045788) main_mup_pane_t1

0x3800,	// (0x000457a2) main_mup_pane_t2_ParamLimits

0x3800,	// (0x000457a2) main_mup_pane_t2

0x3818,	// (0x000457ba) main_mup_pane_t3_ParamLimits

0x3818,	// (0x000457ba) main_mup_pane_t3

0x3830,	// (0x000457d2) main_mup_pane_t4_ParamLimits

0x3830,	// (0x000457d2) main_mup_pane_t4

0x384e,	// (0x000457f0) main_mup_pane_t5_ParamLimits

0x384e,	// (0x000457f0) main_mup_pane_t5

0x3863,	// (0x00045805) main_mup_pane_t6_ParamLimits

0x3863,	// (0x00045805) main_mup_pane_t6

0x0005,

0xf448,	// (0x000513ea) main_mup_pane_t_ParamLimits

0xf448,	// (0x000513ea) main_mup_pane_t

0x3875,	// (0x00045817) mup_progress_pane_ParamLimits

0x3875,	// (0x00045817) mup_progress_pane

0x3881,	// (0x00045823) mup_visualizer_pane_ParamLimits

0x3881,	// (0x00045823) mup_visualizer_pane

0x38b1,	// (0x00045853) mup_volume_pane_ParamLimits

0x38b1,	// (0x00045853) mup_volume_pane

0xcfef,	// (0x0004ef91) mup_visualizer_pane_g1_ParamLimits

0xcfef,	// (0x0004ef91) mup_visualizer_pane_g1

0xcfef,	// (0x0004ef91) mup_visualizer_pane_g2_ParamLimits

0xcfef,	// (0x0004ef91) mup_visualizer_pane_g2

0xcf13,	// (0x0004eeb5) mup_visualizer_pane_g3_ParamLimits

0xcf13,	// (0x0004eeb5) mup_visualizer_pane_g3

0x0002,

0xf455,	// (0x000513f7) mup_visualizer_pane_g_ParamLimits

0xf455,	// (0x000513f7) mup_visualizer_pane_g

0xc560,	// (0x0004e502) mup_volume_pane_g1

0xd0b3,	// (0x0004f055) mup_volume_pane_g2

0x0001,

0x0095,	// (0x00042037) mup_volume_pane_g

0xc560,	// (0x0004e502) mup_progress_pane_g1

0xd0bc,	// (0x0004f05e) mup_progress_pane_g2

0xd0c5,	// (0x0004f067) mup_progress_pane_g3

0x0002,

0x009a,	// (0x0004203c) mup_progress_pane_g

0xc1dd,	// (0x0004e17f) bg_popup_window_pane_cp05

0xd0ce,	// (0x0004f070) heading_pane_cp02_ParamLimits

0xd0ce,	// (0x0004f070) heading_pane_cp02

0xd0e8,	// (0x0004f08a) list_popup_blid_pane

0xd0f0,	// (0x0004f092) list_blid_sat_info_pane_ParamLimits

0xd0f0,	// (0x0004f092) list_blid_sat_info_pane

0xd103,	// (0x0004f0a5) list_blid_sat_info_pane_g1

0xd10b,	// (0x0004f0ad) list_blid_sat_info_pane_t1

0x39c7,	// (0x00045969) mup_equalizer_pane_ParamLimits

0x39c7,	// (0x00045969) mup_equalizer_pane

0x39e0,	// (0x00045982) mup_equalizer_pane_cp1_ParamLimits

0x39e0,	// (0x00045982) mup_equalizer_pane_cp1

0x39fd,	// (0x0004599f) mup_equalizer_pane_cp2_ParamLimits

0x39fd,	// (0x0004599f) mup_equalizer_pane_cp2

0x3a1a,	// (0x000459bc) mup_equalizer_pane_cp3_ParamLimits

0x3a1a,	// (0x000459bc) mup_equalizer_pane_cp3

0x3a3b,	// (0x000459dd) mup_equalizer_pane_cp4_ParamLimits

0x3a3b,	// (0x000459dd) mup_equalizer_pane_cp4

0x3a5c,	// (0x000459fe) mup_equalizer_pane_cp5

0x3a70,	// (0x00045a12) mup_equalizer_pane_cp6

0x3a84,	// (0x00045a26) mup_equalizer_pane_cp7

0xe2b7,	// (0x00050259) bg_popup_call_poc_act_pane_g9

0xe2bf,	// (0x00050261) bg_popup_call_poc_act_pane_g10

0xe2c7,	// (0x00050269) bg_popup_call_poc_act_pane_g11

0x000a,

0xc438,	// (0x0004e3da) mup_scale_pane

0xc560,	// (0x0004e502) mup_scale_pane_g1

0xd119,	// (0x0004f0bb) mup_scale_pane_g2

0x0006,

0xf471,	// (0x00051413) mup_scale_pane_g

0xd13d,	// (0x0004f0df) msg_data_pane

0xd145,	// (0x0004f0e7) scroll_pane_cp017

0x0c55,	// (0x00042bf7) bg_list_pane_cp04_ParamLimits

0x0c55,	// (0x00042bf7) bg_list_pane_cp04

0xd14d,	// (0x0004f0ef) msg_data_pane_g1

0x3aaa,	// (0x00045a4c) msg_data_pane_g2

0x3ab4,	// (0x00045a56) msg_data_pane_g3

0x3abc,	// (0x00045a5e) msg_data_pane_g4

0x3ac4,	// (0x00045a66) msg_data_pane_g5

0x3acc,	// (0x00045a6e) msg_data_pane_g6

0x3ad4,	// (0x00045a76) msg_data_pane_g7

0x0006,

0xf480,	// (0x00051422) msg_data_pane_g

0x0c75,	// (0x00042c17) msg_text_pane_ParamLimits

0x0c75,	// (0x00042c17) msg_text_pane

0x3adc,	// (0x00045a7e) qrid_highlight_pane_cp011_ParamLimits

0x3adc,	// (0x00045a7e) qrid_highlight_pane_cp011

0xc1dd,	// (0x0004e17f) msg_body_pane

0xc1dd,	// (0x0004e17f) msg_header_pane

0xd15e,	// (0x0004f100) input_focus_pane_cp07

0x0ca8,	// (0x00042c4a) msg_header_pane_t1_ParamLimits

0x0ca8,	// (0x00042c4a) msg_header_pane_t1

0x0cbc,	// (0x00042c5e) msg_header_pane_t2_ParamLimits

0x0cbc,	// (0x00042c5e) msg_header_pane_t2

0x0001,

0xf494,	// (0x00051436) msg_header_pane_t_ParamLimits

0xf494,	// (0x00051436) msg_header_pane_t

0xd173,	// (0x0004f115) msg_body_pane_g1

0x0cce,	// (0x00042c70) msg_body_pane_t1_ParamLimits

0x0cce,	// (0x00042c70) msg_body_pane_t1

0x0cff,	// (0x00042ca1) msg_body_pane_t2_ParamLimits

0x0cff,	// (0x00042ca1) msg_body_pane_t2

0x0d11,	// (0x00042cb3) msg_body_pane_t3_ParamLimits

0x0d11,	// (0x00042cb3) msg_body_pane_t3

0x0002,

0xf499,	// (0x0005143b) msg_body_pane_t_ParamLimits

0xf499,	// (0x0005143b) msg_body_pane_t

0x3b2c,	// (0x00045ace) main_viewer_pane_g1_ParamLimits

0x3b2c,	// (0x00045ace) main_viewer_pane_g1

0x3b3a,	// (0x00045adc) main_viewer_pane_g2_ParamLimits

0x3b3a,	// (0x00045adc) main_viewer_pane_g2

0x3b48,	// (0x00045aea) main_viewer_pane_g3_ParamLimits

0x3b48,	// (0x00045aea) main_viewer_pane_g3

0x3b57,	// (0x00045af9) main_viewer_pane_g4_ParamLimits

0x3b57,	// (0x00045af9) main_viewer_pane_g4

0xa99a,	// (0x0004c93c) main_viewer_pane_g5_ParamLimits

0xa99a,	// (0x0004c93c) main_viewer_pane_g5

0xa99a,	// (0x0004c93c) main_viewer_pane_g7_ParamLimits

0xa99a,	// (0x0004c93c) main_viewer_pane_g7

0xa9ac,	// (0x0004c94e) main_viewer_pane_g8_ParamLimits

0xa9ac,	// (0x0004c94e) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0005144b) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0005144b) main_viewer_pane_g

0xd17b,	// (0x0004f11d) viewer_content_pane_ParamLimits

0xd17b,	// (0x0004f11d) viewer_content_pane

0x3b93,	// (0x00045b35) main_postcard_pane_g1_ParamLimits

0x3b93,	// (0x00045b35) main_postcard_pane_g1

0x3ba9,	// (0x00045b4b) main_postcard_pane_g2_ParamLimits

0x3ba9,	// (0x00045b4b) main_postcard_pane_g2

0x3bbf,	// (0x00045b61) main_postcard_pane_g3_ParamLimits

0x3bbf,	// (0x00045b61) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0005145c) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0005145c) main_postcard_pane_g

0x3bd6,	// (0x00045b78) main_postcard_pane_g4

0xe4cc,	// (0x0005046e) smil_status_volume_pane_g2

0x3c19,	// (0x00045bbb) postcard_pane_ParamLimits

0x3c19,	// (0x00045bbb) postcard_pane

0xd189,	// (0x0004f12b) postcard_pane_g1_ParamLimits

0xd189,	// (0x0004f12b) postcard_pane_g1

0x3c5b,	// (0x00045bfd) postcard_pane_g2_ParamLimits

0x3c5b,	// (0x00045bfd) postcard_pane_g2

0x3c67,	// (0x00045c09) postcard_pane_g3_ParamLimits

0x3c67,	// (0x00045c09) postcard_pane_g3

0xd197,	// (0x0004f139) postcard_pane_g4_ParamLimits

0xd197,	// (0x0004f139) postcard_pane_g4

0x3c73,	// (0x00045c15) postcard_pane_g5_ParamLimits

0x3c73,	// (0x00045c15) postcard_pane_g5

0x3c88,	// (0x00045c2a) postcard_pane_g6_ParamLimits

0x3c88,	// (0x00045c2a) postcard_pane_g6

0xd189,	// (0x0004f12b) postcard_pane_g7_ParamLimits

0xd189,	// (0x0004f12b) postcard_pane_g7

0x0006,

0xf4c7,	// (0x00051469) postcard_pane_g_ParamLimits

0xf4c7,	// (0x00051469) postcard_pane_g

0x3c9c,	// (0x00045c3e) main_mp2_pane_g1_ParamLimits

0x3c9c,	// (0x00045c3e) main_mp2_pane_g1

0x3ca8,	// (0x00045c4a) main_mp2_pane_g2_ParamLimits

0x3ca8,	// (0x00045c4a) main_mp2_pane_g2

0x3cb4,	// (0x00045c56) main_mp2_pane_g3_ParamLimits

0x3cb4,	// (0x00045c56) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x00051478) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x00051478) main_mp2_pane_g

0x3cc0,	// (0x00045c62) main_mp2_pane_t1_ParamLimits

0x3cc0,	// (0x00045c62) main_mp2_pane_t1

0x3cd5,	// (0x00045c77) main_mp2_pane_t2_ParamLimits

0x3cd5,	// (0x00045c77) main_mp2_pane_t2

0x3ce7,	// (0x00045c89) main_mp2_pane_t3_ParamLimits

0x3ce7,	// (0x00045c89) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0005147f) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0005147f) main_mp2_pane_t

0xd1a5,	// (0x0004f147) pec_content_pane_ParamLimits

0xd1a5,	// (0x0004f147) pec_content_pane

0xc851,	// (0x0004e7f3) scroll_pane_cp015

0xd1b7,	// (0x0004f159) pec_attribute_pane_ParamLimits

0xd1b7,	// (0x0004f159) pec_attribute_pane

0x3cf9,	// (0x00045c9b) pec_content_pane_g1_ParamLimits

0x3cf9,	// (0x00045c9b) pec_content_pane_g1

0xd1c7,	// (0x0004f169) pec_content_pane_t1_ParamLimits

0xd1c7,	// (0x0004f169) pec_content_pane_t1

0xd1d9,	// (0x0004f17b) pec_content_pane_t2_ParamLimits

0xd1d9,	// (0x0004f17b) pec_content_pane_t2

0x0001,

0x0129,	// (0x000420cb) pec_content_pane_t_ParamLimits

0x0129,	// (0x000420cb) pec_content_pane_t

0x3d05,	// (0x00045ca7) list_single_graphic_pane_cp01_ParamLimits

0x3d05,	// (0x00045ca7) list_single_graphic_pane_cp01

0xc438,	// (0x0004e3da) bg_popup_sub_pane_cp04

0xd1eb,	// (0x0004f18d) popup_mup_playback_window_g1

0xd1f7,	// (0x0004f199) popup_mup_playback_window_t1

0xd20c,	// (0x0004f1ae) popup_mup_playback_window_t2

0x0001,

0x012e,	// (0x000420d0) popup_mup_playback_window_t

0xd243,	// (0x0004f1e5) main_image_pane_g1_ParamLimits

0xd243,	// (0x0004f1e5) main_image_pane_g1

0xd286,	// (0x0004f228) scroll_pane_cp018_ParamLimits

0xd286,	// (0x0004f228) scroll_pane_cp018

0xd29e,	// (0x0004f240) scroll_pane_cp016_ParamLimits

0xd29e,	// (0x0004f240) scroll_pane_cp016

0x3dd2,	// (0x00045d74) smil2_image_pane_ParamLimits

0x3dd2,	// (0x00045d74) smil2_image_pane

0x3e02,	// (0x00045da4) smil2_root_pane_ParamLimits

0x3e02,	// (0x00045da4) smil2_root_pane

0x3e3a,	// (0x00045ddc) smil2_text_pane_ParamLimits

0x3e3a,	// (0x00045ddc) smil2_text_pane

0xc1dd,	// (0x0004e17f) bg_list_pane_cp06

0xd2da,	// (0x0004f27c) grid_radio_pane

0xc1dd,	// (0x0004e17f) bg_popup_window_pane_cp06

0xd2e2,	// (0x0004f284) main_fmradio_pane_t1

0xcd72,	// (0x0004ed14) heading_pane_cp04

0xd2f0,	// (0x0004f292) main_fmradio_pane_t2

0xe2cf,	// (0x00050271) popup_cale_lunar_info_window_g1

0xd2fe,	// (0x0004f2a0) main_fmradio_pane_t3

0xe2d7,	// (0x00050279) popup_cale_lunar_info_window_g2

0xd30c,	// (0x0004f2ae) main_fmradio_pane_t4

0x0001,

0xd31a,	// (0x0004f2bc) main_fmradio_pane_t5

0x0004,

0x0209,	// (0x000421ab) popup_cale_lunar_info_window_g

0x0143,	// (0x000420e5) main_fmradio_pane_t

0xd328,	// (0x0004f2ca) wait_bar_pane_cp03

0xd330,	// (0x0004f2d2) cell_fmradio_pane_ParamLimits

0xd330,	// (0x0004f2d2) cell_fmradio_pane

0xd189,	// (0x0004f12b) cell_fmradio_pane_g1_ParamLimits

0xd189,	// (0x0004f12b) cell_fmradio_pane_g1

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp011

0xd343,	// (0x0004f2e5) poc_content_pane_ParamLimits

0xd343,	// (0x0004f2e5) poc_content_pane

0xd355,	// (0x0004f2f7) scroll_pane_cp019

0x3eba,	// (0x00045e5c) popup_call_poc_act_window_ParamLimits

0x3eba,	// (0x00045e5c) popup_call_poc_act_window

0x3ede,	// (0x00045e80) popup_call_poc_inact_window_ParamLimits

0x3ede,	// (0x00045e80) popup_call_poc_inact_window

0x01e0,	// (0x00042182) bg_popup_call_poc_act_pane_g

0xe247,	// (0x000501e9) bg_popup_call_poc_inact_pane_g1

0xe24f,	// (0x000501f1) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x0004f2ff) popup_call_poc_act_window_g2

0xe257,	// (0x000501f9) bg_popup_call_poc_inact_pane_g3

0xe25f,	// (0x00050201) bg_popup_call_poc_inact_pane_g4

0xe267,	// (0x00050209) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0004f307) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0004f307) popup_call_poc_act_window_t1

0xd38d,	// (0x0004f32f) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x0004f32f) popup_call_poc_act_window_t2

0xd3b5,	// (0x0004f357) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x0004f357) popup_call_poc_act_window_t3

0xd3dd,	// (0x0004f37f) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x0004f37f) popup_call_poc_act_window_t4

0x0003,

0x014e,	// (0x000420f0) popup_call_poc_act_window_t_ParamLimits

0x014e,	// (0x000420f0) popup_call_poc_act_window_t

0xe26f,	// (0x00050211) bg_popup_call_poc_inact_pane_g6

0xe277,	// (0x00050219) bg_popup_call_poc_inact_pane_g7

0xe27f,	// (0x00050221) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x0004f391) popup_call_poc_inact_window_g2

0xe287,	// (0x00050229) bg_popup_call_poc_inact_pane_g9

0x0008,

0x01cd,	// (0x0004216f) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x0004f399) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x0004f399) popup_call_poc_inact_window_t1

0xd40c,	// (0x0004f3ae) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x0004f3ae) popup_call_poc_inact_window_t2

0xd421,	// (0x0004f3c3) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x0004f3c3) popup_call_poc_inact_window_t3

0x0002,

0x0157,	// (0x000420f9) popup_call_poc_inact_window_t_ParamLimits

0x0157,	// (0x000420f9) popup_call_poc_inact_window_t

0xe43f,	// (0x000503e1) context_pane_ParamLimits

0x4711,	// (0x000466b3) signal_pane_ParamLimits

0xcfde,	// (0x0004ef80) main_call2_pane

0xe42d,	// (0x000503cf) popup_phob_thumbnail2_window_ParamLimits

0xe42d,	// (0x000503cf) popup_phob_thumbnail2_window

0xa982,	// (0x0004c924) aid_hotspot_pointer_arrow_pane

0xa98a,	// (0x0004c92c) aid_hotspot_pointer_hand_pane

0x4227,	// (0x000461c9) phob_pre_status_pane_g5

0x2211,	// (0x000441b3) cams_zoom_pane_ParamLimits

0x2220,	// (0x000441c2) image_vga_pane_ParamLimits

0x223a,	// (0x000441dc) main_camera_pane_g1_ParamLimits

0x224c,	// (0x000441ee) main_camera_pane_g2_ParamLimits

0x225c,	// (0x000441fe) main_camera_pane_g3_ParamLimits

0x226c,	// (0x0004420e) main_camera_pane_g4_ParamLimits

0x227c,	// (0x0004421e) main_camera_pane_g5_ParamLimits

0x228c,	// (0x0004422e) main_camera_pane_g6_ParamLimits

0x229e,	// (0x00044240) main_camera_pane_g7_ParamLimits

0xf229,	// (0x000511cb) main_camera_pane_g_ParamLimits

0x22ae,	// (0x00044250) main_camera_pane_t1_ParamLimits

0x22c4,	// (0x00044266) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x000511dc) main_camera_pane_t_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_preview_window_pane_cp01_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_preview_window_pane_cp01

0xd436,	// (0x0004f3d8) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x0004f3d8) popup_phob_thumbnail2_window_g1

0xc1dd,	// (0x0004e17f) call2_cli_visual_pane

0x3f12,	// (0x00045eb4) popup_call2_audio_conf_window_ParamLimits

0x3f12,	// (0x00045eb4) popup_call2_audio_conf_window

0x3f32,	// (0x00045ed4) popup_call2_audio_first_window_ParamLimits

0x3f32,	// (0x00045ed4) popup_call2_audio_first_window

0x3fc8,	// (0x00045f6a) popup_call2_audio_in_window_ParamLimits

0x3fc8,	// (0x00045f6a) popup_call2_audio_in_window

0x4010,	// (0x00045fb2) popup_call2_audio_out_window_ParamLimits

0x4010,	// (0x00045fb2) popup_call2_audio_out_window

0x407a,	// (0x0004601c) popup_call2_audio_second_window_ParamLimits

0x407a,	// (0x0004601c) popup_call2_audio_second_window

0x40e0,	// (0x00046082) popup_call2_audio_wait_window_ParamLimits

0x40e0,	// (0x00046082) popup_call2_audio_wait_window

0xc1dd,	// (0x0004e17f) bg_popup_call2_act_pane_cp03

0xc41a,	// (0x0004e3bc) list_conf_pane_cp

0xd442,	// (0x0004f3e4) popup_call2_audio_conf_window_t1

0xcdcf,	// (0x0004ed71) list_single_graphic_popup_conf2_pane_ParamLimits

0xcdcf,	// (0x0004ed71) list_single_graphic_popup_conf2_pane

0xcde2,	// (0x0004ed84) list_highlight_pane_cp04

0xd450,	// (0x0004f3f2) list_single_graphic_popup_conf2_pane_g1

0xcdf3,	// (0x0004ed95) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f4,	// (0x00051496) list_single_graphic_popup_conf2_pane_g

0xd45a,	// (0x0004f3fc) list_single_graphic_popup_conf2_pane_t1

0xd468,	// (0x0004f40a) bg_popup_call2_act_pane_cp01_ParamLimits

0xd468,	// (0x0004f40a) bg_popup_call2_act_pane_cp01

0xd4f2,	// (0x0004f494) call_type_pane_cp05_ParamLimits

0xd4f2,	// (0x0004f494) call_type_pane_cp05

0xd546,	// (0x0004f4e8) popup_call2_audio_second_window_g1_ParamLimits

0xd546,	// (0x0004f4e8) popup_call2_audio_second_window_g1

0xd59a,	// (0x0004f53c) popup_call2_audio_second_window_g2_ParamLimits

0xd59a,	// (0x0004f53c) popup_call2_audio_second_window_g2

0x0002,

0xf4f9,	// (0x0005149b) popup_call2_audio_second_window_g_ParamLimits

0xf4f9,	// (0x0005149b) popup_call2_audio_second_window_g

0xd619,	// (0x0004f5bb) popup_call2_audio_second_window_t1_ParamLimits

0xd619,	// (0x0004f5bb) popup_call2_audio_second_window_t1

0xd6d4,	// (0x0004f676) popup_call2_audio_second_window_t2_ParamLimits

0xd6d4,	// (0x0004f676) popup_call2_audio_second_window_t2

0xd727,	// (0x0004f6c9) popup_call2_audio_second_window_t3_ParamLimits

0xd727,	// (0x0004f6c9) popup_call2_audio_second_window_t3

0x0003,

0xf500,	// (0x000514a2) popup_call2_audio_second_window_t_ParamLimits

0xf500,	// (0x000514a2) popup_call2_audio_second_window_t

0xc1dd,	// (0x0004e17f) bg_popup_call2_in_pane_cp02

0xc1e7,	// (0x0004e189) call_type_pane_cp04

0xc1ef,	// (0x0004e191) popup_call2_audio_wait_window_g1

0xc1f7,	// (0x0004e199) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x000510b8) popup_call2_audio_wait_window_g

0xc1ff,	// (0x0004e1a1) popup_call2_audio_wait_window_t3

0xd81a,	// (0x0004f7bc) bg_popup_call2_act_pane_ParamLimits

0xd81a,	// (0x0004f7bc) bg_popup_call2_act_pane

0xd8da,	// (0x0004f87c) call_type_pane_cp03_ParamLimits

0xd8da,	// (0x0004f87c) call_type_pane_cp03

0xd93e,	// (0x0004f8e0) popup_call2_audio_first_window_g1_ParamLimits

0xd93e,	// (0x0004f8e0) popup_call2_audio_first_window_g1

0xd9ae,	// (0x0004f950) popup_call2_audio_first_window_g2_ParamLimits

0xd9ae,	// (0x0004f950) popup_call2_audio_first_window_g2

0xcfef,	// (0x0004ef91) popup_call2_audio_first_window_g3_ParamLimits

0xcfef,	// (0x0004ef91) popup_call2_audio_first_window_g3

0x0004,

0xf509,	// (0x000514ab) popup_call2_audio_first_window_g_ParamLimits

0xf509,	// (0x000514ab) popup_call2_audio_first_window_g

0xda8c,	// (0x0004fa2e) popup_call2_audio_first_window_t1_ParamLimits

0xda8c,	// (0x0004fa2e) popup_call2_audio_first_window_t1

0xdb8f,	// (0x0004fb31) popup_call2_audio_first_window_t4_ParamLimits

0xdb8f,	// (0x0004fb31) popup_call2_audio_first_window_t4

0xdc72,	// (0x0004fc14) popup_call2_audio_first_window_t5_ParamLimits

0xdc72,	// (0x0004fc14) popup_call2_audio_first_window_t5

0x0003,

0x017e,	// (0x00042120) popup_call2_audio_first_window_t_ParamLimits

0x017e,	// (0x00042120) popup_call2_audio_first_window_t

0xc430,	// (0x0004e3d2) bg_popup_call2_act_pane_g1

0xe2df,	// (0x00050281) popup_cale_lunar_info_window_t1

0xe2ed,	// (0x0005028f) popup_cale_lunar_info_window_t2

0xe2fb,	// (0x0005029d) popup_cale_lunar_info_window_t3

0xc1dd,	// (0x0004e17f) bg_popup_call2_bubble_pane

0xdd73,	// (0x0004fd15) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd73,	// (0x0004fd15) bg_popup_call2_in_pane_cp01

0xbeb9,	// (0x0004de5b) call_type_pane_cp02

0xddbb,	// (0x0004fd5d) popup_call2_audio_out_window_g1_ParamLimits

0xddbb,	// (0x0004fd5d) popup_call2_audio_out_window_g1

0xdde7,	// (0x0004fd89) popup_call2_audio_out_window_g2_ParamLimits

0xdde7,	// (0x0004fd89) popup_call2_audio_out_window_g2

0xde0f,	// (0x0004fdb1) popup_call2_audio_out_window_g3_ParamLimits

0xde0f,	// (0x0004fdb1) popup_call2_audio_out_window_g3

0x0003,

0x0187,	// (0x00042129) popup_call2_audio_out_window_g_ParamLimits

0x0187,	// (0x00042129) popup_call2_audio_out_window_g

0xde4a,	// (0x0004fdec) popup_call2_audio_out_window_t1_ParamLimits

0xde4a,	// (0x0004fdec) popup_call2_audio_out_window_t1

0xdea9,	// (0x0004fe4b) popup_call2_audio_out_window_t2_ParamLimits

0xdea9,	// (0x0004fe4b) popup_call2_audio_out_window_t2

0xdefd,	// (0x0004fe9f) popup_call2_audio_out_window_t3_ParamLimits

0xdefd,	// (0x0004fe9f) popup_call2_audio_out_window_t3

0xdf13,	// (0x0004feb5) popup_call2_audio_out_window_t4_ParamLimits

0xdf13,	// (0x0004feb5) popup_call2_audio_out_window_t4

0xdf29,	// (0x0004fecb) popup_call2_audio_out_window_t5_ParamLimits

0xdf29,	// (0x0004fecb) popup_call2_audio_out_window_t5

0x0005,

0x0190,	// (0x00042132) popup_call2_audio_out_window_t_ParamLimits

0x0190,	// (0x00042132) popup_call2_audio_out_window_t

0xdf8d,	// (0x0004ff2f) bg_popup_call2_in_pane_ParamLimits

0xdf8d,	// (0x0004ff2f) bg_popup_call2_in_pane

0xdfe9,	// (0x0004ff8b) popup_call2_audio_in_window_g1_ParamLimits

0xdfe9,	// (0x0004ff8b) popup_call2_audio_in_window_g1

0xe021,	// (0x0004ffc3) popup_call2_audio_in_window_g2_ParamLimits

0xe021,	// (0x0004ffc3) popup_call2_audio_in_window_g2

0xe059,	// (0x0004fffb) popup_call2_audio_in_window_g3_ParamLimits

0xe059,	// (0x0004fffb) popup_call2_audio_in_window_g3

0x0003,

0x019d,	// (0x0004213f) popup_call2_audio_in_window_g_ParamLimits

0x019d,	// (0x0004213f) popup_call2_audio_in_window_g

0xe0b1,	// (0x00050053) popup_call2_audio_in_window_t1_ParamLimits

0xe0b1,	// (0x00050053) popup_call2_audio_in_window_t1

0xe131,	// (0x000500d3) popup_call2_audio_in_window_t2_ParamLimits

0xe131,	// (0x000500d3) popup_call2_audio_in_window_t2

0xe1b1,	// (0x00050153) popup_call2_audio_in_window_t3_ParamLimits

0xe1b1,	// (0x00050153) popup_call2_audio_in_window_t3

0xe1cb,	// (0x0005016d) popup_call2_audio_in_window_t4_ParamLimits

0xe1cb,	// (0x0005016d) popup_call2_audio_in_window_t4

0xe1dd,	// (0x0005017f) popup_call2_audio_in_window_t5_ParamLimits

0xe1dd,	// (0x0005017f) popup_call2_audio_in_window_t5

0xe1f2,	// (0x00050194) popup_call2_audio_in_window_t6_ParamLimits

0xe1f2,	// (0x00050194) popup_call2_audio_in_window_t6

0x0005,

0x01a6,	// (0x00042148) popup_call2_audio_in_window_t_ParamLimits

0x01a6,	// (0x00042148) popup_call2_audio_in_window_t

0xc430,	// (0x0004e3d2) bg_popup_call2_in_pane_g1

0xe309,	// (0x000502ab) popup_cale_lunar_info_window_t4

0x0003,

0x020e,	// (0x000421b0) popup_cale_lunar_info_window_t

0xc438,	// (0x0004e3da) bg_popup_call2_rect_pane_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_call2_rect_pane

0xc1dd,	// (0x0004e17f) call2_cli_visual_graphic_pane

0xc1dd,	// (0x0004e17f) call2_cli_visual_text_pane

0xa9c4,	// (0x0004c966) smil_status_volume_pane_g3

0x0002,

0xc560,	// (0x0004e502) call2_cli_visual_graphic_pane_g1

0xc560,	// (0x0004e502) call2_cli_visual_graphic_pane_g2

0xc560,	// (0x0004e502) call2_cli_visual_graphic_pane_g3

0x0002,

0x01b3,	// (0x00042155) call2_cli_visual_graphic_pane_g

0xe207,	// (0x000501a9) bg_popup_call2_rect_pane_g1

0xc5ec,	// (0x0004e58e) bg_popup_call2_rect_pane_g2

0xe20f,	// (0x000501b1) bg_popup_call2_rect_pane_g3

0xe217,	// (0x000501b9) bg_popup_call2_rect_pane_g4

0xe21f,	// (0x000501c1) bg_popup_call2_rect_pane_g5

0xe227,	// (0x000501c9) bg_popup_call2_rect_pane_g6

0xe22f,	// (0x000501d1) bg_popup_call2_rect_pane_g7

0xe237,	// (0x000501d9) bg_popup_call2_rect_pane_g8

0xe23f,	// (0x000501e1) bg_popup_call2_rect_pane_g9

0x0008,

0x01ba,	// (0x0004215c) bg_popup_call2_rect_pane_g

0xe247,	// (0x000501e9) bg_popup_call2_bubble_pane_g1

0xe24f,	// (0x000501f1) bg_popup_call2_bubble_pane_g2

0xe257,	// (0x000501f9) bg_popup_call2_bubble_pane_g3

0xe25f,	// (0x00050201) bg_popup_call2_bubble_pane_g4

0xe267,	// (0x00050209) bg_popup_call2_bubble_pane_g5

0xe26f,	// (0x00050211) bg_popup_call2_bubble_pane_g6

0xe277,	// (0x00050219) bg_popup_call2_bubble_pane_g7

0xe27f,	// (0x00050221) bg_popup_call2_bubble_pane_g8

0xe287,	// (0x00050229) bg_popup_call2_bubble_pane_g9

0x0008,

0x01cd,	// (0x0004216f) bg_popup_call2_bubble_pane_g

0x1dbe,	// (0x00043d60) aid_cale_week_size_cell_pane

0x22da,	// (0x0004427c) aid_cams_cif_uncrop_pane_ParamLimits

0x22da,	// (0x0004427c) aid_cams_cif_uncrop_pane

0x248f,	// (0x00044431) aid_cams_size_cell_ParamLimits

0x248f,	// (0x00044431) aid_cams_size_cell

0x24a3,	// (0x00044445) grid_cams_pane_ParamLimits

0x24bd,	// (0x0004445f) linegrid_cams_pane_ParamLimits

0x25a4,	// (0x00044546) call_video_pane_t1

0x25c2,	// (0x00044564) call_video_pane_t2

0x0001,

0xf28d,	// (0x0005122f) call_video_pane_t

0x29ee,	// (0x00044990) aid_cale_month_size_cell_pane_ParamLimits

0x29ee,	// (0x00044990) aid_cale_month_size_cell_pane

0xf544,	// (0x000514e6) smil_status_volume_pane_g

0xa9d1,	// (0x0004c973) volume_smil_pane_ParamLimits

0xa632,	// (0x0004c5d4) aid_popup2_width_pane

0x1d2e,	// (0x00043cd0) cell_qdial_pane_g4_ParamLimits

0x1d2e,	// (0x00043cd0) cell_qdial_pane_g4

0x34ef,	// (0x00045491) aid_blid_cardinal_pane_ParamLimits

0x34fb,	// (0x0004549d) aid_blid_destination_pane_ParamLimits

0x34fb,	// (0x0004549d) aid_blid_destination_pane

0xc438,	// (0x0004e3da) bg_popup_call_poc_act_pane_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_call_poc_act_pane

0xc438,	// (0x0004e3da) bg_popup_call_poc_inact_pane_ParamLimits

0xc438,	// (0x0004e3da) bg_popup_call_poc_inact_pane

0xe28f,	// (0x00050231) bg_popup_call_poc_act_pane_g1

0xe297,	// (0x00050239) bg_popup_call_poc_act_pane_g2

0xe29f,	// (0x00050241) bg_popup_call_poc_act_pane_g3

0xe25f,	// (0x00050201) bg_popup_call_poc_act_pane_g4

0xe267,	// (0x00050209) bg_popup_call_poc_act_pane_g5

0xe2a7,	// (0x00050249) bg_popup_call_poc_act_pane_g6

0xe277,	// (0x00050219) bg_popup_call_poc_act_pane_g7

0xe2af,	// (0x00050251) bg_popup_call_poc_act_pane_g8

0xc1dd,	// (0x0004e17f) main_usb_pane

0xe408,	// (0x000503aa) popup_cale_lunar_info_window

0x289a,	// (0x0004483c) im_reading_pane_t1_ParamLimits

0xc7a9,	// (0x0004e74b) list_im_pane_ParamLimits

0xc7ba,	// (0x0004e75c) scroll_pane_cp07_ParamLimits

0xc1dd,	// (0x0004e17f) grid_highlight_pane_cp012

0xc438,	// (0x0004e3da) mup_scale_pane_ParamLimits

0xd189,	// (0x0004f12b) main_usb_pane_g1_ParamLimits

0xd189,	// (0x0004f12b) main_usb_pane_g1

0x413c,	// (0x000460de) main_usb_pane_g2_ParamLimits

0x413c,	// (0x000460de) main_usb_pane_g2

0x0001,

0xf514,	// (0x000514b6) main_usb_pane_g_ParamLimits

0xf514,	// (0x000514b6) main_usb_pane_g

0x4152,	// (0x000460f4) main_usb_pane_t1_ParamLimits

0x4152,	// (0x000460f4) main_usb_pane_t1

0x4164,	// (0x00046106) main_usb_pane_t2_ParamLimits

0x4164,	// (0x00046106) main_usb_pane_t2

0x4176,	// (0x00046118) main_usb_pane_t3_ParamLimits

0x4176,	// (0x00046118) main_usb_pane_t3

0x4188,	// (0x0004612a) main_usb_pane_t4_ParamLimits

0x4188,	// (0x0004612a) main_usb_pane_t4

0x419a,	// (0x0004613c) main_usb_pane_t5_ParamLimits

0x419a,	// (0x0004613c) main_usb_pane_t5

0x41ac,	// (0x0004614e) main_usb_pane_t6_ParamLimits

0x41ac,	// (0x0004614e) main_usb_pane_t6

0x0005,

0xf519,	// (0x000514bb) main_usb_pane_t_ParamLimits

0x349e,	// (0x00045440) aid_text_placing

0x34a7,	// (0x00045449) main_location2_pane_t1_ParamLimits

0x34b9,	// (0x0004545b) main_location2_pane_t2_ParamLimits

0x34cb,	// (0x0004546d) main_location2_pane_t3_ParamLimits

0x34dd,	// (0x0004547f) main_location2_pane_t4_ParamLimits

0x34dd,	// (0x0004547f) main_location2_pane_t4

0xf3ee,	// (0x00051390) main_location2_pane_t_ParamLimits

0xc474,	// (0x0004e416) find_pinb_pane_g2_ParamLimits

0xc474,	// (0x0004e416) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x000510de) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x000510de) find_pinb_pane_g

0xc480,	// (0x0004e422) find_pinb_pane_t1_ParamLimits

0xc492,	// (0x0004e434) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x000510e3) find_pinb_pane_t_ParamLimits

0xc1dd,	// (0x0004e17f) main_call3_pane

0x2d52,	// (0x00044cf4) cale_month_day_heading_pane_t1_ParamLimits

0x2db0,	// (0x00044d52) cale_month_day_heading_pane_t2_ParamLimits

0x2e15,	// (0x00044db7) cale_month_day_heading_pane_t3_ParamLimits

0x2e7a,	// (0x00044e1c) cale_month_day_heading_pane_t4_ParamLimits

0x2edf,	// (0x00044e81) cale_month_day_heading_pane_t5_ParamLimits

0x2f54,	// (0x00044ef6) cale_month_day_heading_pane_t6_ParamLimits

0x2fc9,	// (0x00044f6b) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00051267) cale_month_day_heading_pane_t_ParamLimits

0xc9fa,	// (0x0004e99c) smil_status_volume_pane

0x3c37,	// (0x00045bd9) postcard_address_pane_ParamLimits

0x3c37,	// (0x00045bd9) postcard_address_pane

0x3c49,	// (0x00045beb) postcard_message_pane_ParamLimits

0x3c49,	// (0x00045beb) postcard_message_pane

0x411a,	// (0x000460bc) call2_cli_visual_pane_t1_ParamLimits

0x411a,	// (0x000460bc) call2_cli_visual_pane_t1

0x493e,	// (0x000468e0) postcard_message_pane_t1_ParamLimits

0x493e,	// (0x000468e0) postcard_message_pane_t1

0x4927,	// (0x000468c9) postcard_address_pane_t1_ParamLimits

0x4927,	// (0x000468c9) postcard_address_pane_t1

0x4913,	// (0x000468b5) popup_call3_audio_in_window_ParamLimits

0x4913,	// (0x000468b5) popup_call3_audio_in_window

0x479e,	// (0x00046740) bg_popup_call3_in_pane_ParamLimits

0x479e,	// (0x00046740) bg_popup_call3_in_pane

0x4814,	// (0x000467b6) popup_call3_audio_in_window_g1_ParamLimits

0x4814,	// (0x000467b6) popup_call3_audio_in_window_g1

0x4834,	// (0x000467d6) popup_call3_audio_in_window_g2_ParamLimits

0x4834,	// (0x000467d6) popup_call3_audio_in_window_g2

0x4854,	// (0x000467f6) popup_call3_audio_in_window_g3_ParamLimits

0x4854,	// (0x000467f6) popup_call3_audio_in_window_g3

0x0003,

0xf54b,	// (0x000514ed) popup_call3_audio_in_window_g_ParamLimits

0xf54b,	// (0x000514ed) popup_call3_audio_in_window_g

0x4885,	// (0x00046827) popup_call3_audio_in_window_t1_ParamLimits

0x4885,	// (0x00046827) popup_call3_audio_in_window_t1

0x48c3,	// (0x00046865) popup_call3_audio_in_window_t2_ParamLimits

0x48c3,	// (0x00046865) popup_call3_audio_in_window_t2

0x4901,	// (0x000468a3) popup_call3_audio_in_window_t3_ParamLimits

0x4901,	// (0x000468a3) popup_call3_audio_in_window_t3

0x0002,

0xf554,	// (0x000514f6) popup_call3_audio_in_window_t_ParamLimits

0xf554,	// (0x000514f6) popup_call3_audio_in_window_t

0xcfde,	// (0x0004ef80) bg_popup_call3_rect_pane

0xe207,	// (0x000501a9) bg_popup_call3_rect_pane_g1

0xc5ec,	// (0x0004e58e) bg_popup_call3_rect_pane_g2

0xe20f,	// (0x000501b1) bg_popup_call3_rect_pane_g3

0xe217,	// (0x000501b9) bg_popup_call3_rect_pane_g4

0xe21f,	// (0x000501c1) bg_popup_call3_rect_pane_g5

0xe227,	// (0x000501c9) bg_popup_call3_rect_pane_g6

0xe22f,	// (0x000501d1) bg_popup_call3_rect_pane_g7

0x38c7,	// (0x00045869) mup_visualizer_osc_pane

0xd0ab,	// (0x0004f04d) mup_visualizer_spec_pane

0x47ce,	// (0x00046770) call3_video_qcif_pane_ParamLimits

0x47ce,	// (0x00046770) call3_video_qcif_pane

0x47e1,	// (0x00046783) call3_video_qcif_uncrop_pane_ParamLimits

0x47e1,	// (0x00046783) call3_video_qcif_uncrop_pane

0x47ef,	// (0x00046791) call3_video_subqcif_pane_ParamLimits

0x47ef,	// (0x00046791) call3_video_subqcif_pane

0x4803,	// (0x000467a5) call3_video_subqcif_uncrop_pane_ParamLimits

0x4803,	// (0x000467a5) call3_video_subqcif_uncrop_pane

0x4874,	// (0x00046816) popup_call3_audio_in_window_g4_ParamLimits

0x4874,	// (0x00046816) popup_call3_audio_in_window_g4

0x478d,	// (0x0004672f) mup_spec_half_pane

0x4796,	// (0x00046738) mup_spec_half_pane_cp

0xe49f,	// (0x00050441) mup_osc_middle_pane

0xe4a8,	// (0x0005044a) mup_visualizer_osc_pane_g1

0x476d,	// (0x0004670f) mup_spec_bar_pane_ParamLimits

0x476d,	// (0x0004670f) mup_spec_bar_pane

0xe48c,	// (0x0005042e) mup_spec_bar_pane_g1

0xe496,	// (0x00050438) mup_spec_bar_pane_g2

0x0001,

0x0252,	// (0x000421f4) mup_spec_bar_pane_g

0x1dbe,	// (0x00043d60) aid_cale_week_size_cell_pane_ParamLimits

0x1dd1,	// (0x00043d73) bg_cale_heading_pane_ParamLimits

0xc620,	// (0x0004e5c2) bg_cale_pane_cp01_ParamLimits

0x1de5,	// (0x00043d87) cale_week_corner_pane_ParamLimits

0x1dfb,	// (0x00043d9d) cale_week_day_heading_pane_ParamLimits

0x1e0f,	// (0x00043db1) cale_week_scroll_pane_g1_ParamLimits

0x1e20,	// (0x00043dc2) cale_week_scroll_pane_g2_ParamLimits

0x1e31,	// (0x00043dd3) cale_week_scroll_pane_g3_ParamLimits

0x1e42,	// (0x00043de4) cale_week_scroll_pane_g4_ParamLimits

0x1e53,	// (0x00043df5) cale_week_scroll_pane_g5_ParamLimits

0x1e66,	// (0x00043e08) cale_week_scroll_pane_g6_ParamLimits

0x1e79,	// (0x00043e1b) cale_week_scroll_pane_g7_ParamLimits

0x1e8c,	// (0x00043e2e) cale_week_scroll_pane_g8_ParamLimits

0x1e9f,	// (0x00043e41) cale_week_scroll_pane_g9_ParamLimits

0x1eb0,	// (0x00043e52) cale_week_scroll_pane_g10_ParamLimits

0x1ec1,	// (0x00043e63) cale_week_scroll_pane_g11_ParamLimits

0x1ed2,	// (0x00043e74) cale_week_scroll_pane_g12_ParamLimits

0x1ee3,	// (0x00043e85) cale_week_scroll_pane_g13_ParamLimits

0x1ef4,	// (0x00043e96) cale_week_scroll_pane_g14_ParamLimits

0x1f05,	// (0x00043ea7) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0005116f) cale_week_scroll_pane_g_ParamLimits

0x1f16,	// (0x00043eb8) cale_week_time_pane_ParamLimits

0x1f29,	// (0x00043ecb) grid_cale_week_pane_ParamLimits

0xc639,	// (0x0004e5db) listscroll_cale_week_pane_t1

0x1f3e,	// (0x00043ee0) scroll_pane_cp08_ParamLimits

0x2a2f,	// (0x000449d1) cale_month_corner_pane_ParamLimits

0xc9d0,	// (0x0004e972) cale_month_pane_t1

0x2d11,	// (0x00044cb3) cale_month_week_pane_ParamLimits

0x32ea,	// (0x0004528c) popup_call_status_window_g1_ParamLimits

0x32fe,	// (0x000452a0) popup_call_status_window_g2_ParamLimits

0x3312,	// (0x000452b4) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00051317) popup_call_status_window_g_ParamLimits

0xcd62,	// (0x0004ed04) aid_call2_pane

0x0c9a,	// (0x00042c3c) msg_header_pane_g1

0x3c37,	// (0x00045bd9) postcard_address2_pane_ParamLimits

0x3c37,	// (0x00045bd9) postcard_address2_pane

0x3c49,	// (0x00045beb) postcard_message2_pane_ParamLimits

0x3c49,	// (0x00045beb) postcard_message2_pane

0x471f,	// (0x000466c1) message2_row_pane_ParamLimits

0x471f,	// (0x000466c1) message2_row_pane

0x473b,	// (0x000466dd) address2_row_pane_ParamLimits

0x473b,	// (0x000466dd) address2_row_pane

0xe45a,	// (0x000503fc) postcard_message2_row_pane_g1

0xe462,	// (0x00050404) postcard_message2_row_pane_t1

0xe45a,	// (0x000503fc) address2_row_pane_g1

0xe462,	// (0x00050404) address2_row_pane_t1

0x21d6,	// (0x00044178) aid_size_cell_vorec

0xc1dd,	// (0x0004e17f) main_rss_pane

0x474e,	// (0x000466f0) rss_list_single_pane_ParamLimits

0x474e,	// (0x000466f0) rss_list_single_pane

0xe470,	// (0x00050412) rss_list_single_pane_t1

0xe47e,	// (0x00050420) rss_list_single_pane_t2

0x0001,

0x024d,	// (0x000421ef) rss_list_single_pane_t

0xc1dd,	// (0x0004e17f) main_camera2_pane

0xc1dd,	// (0x0004e17f) main_video2_pane

0x49b7,	// (0x00046959) cams_zoom_pane_cp2_ParamLimits

0x49b7,	// (0x00046959) cams_zoom_pane_cp2

0x49d7,	// (0x00046979) image2_vga_pane_ParamLimits

0x49d7,	// (0x00046979) image2_vga_pane

0x4a28,	// (0x000469ca) main_camera2_pane_g1_ParamLimits

0x4a28,	// (0x000469ca) main_camera2_pane_g1

0x4a48,	// (0x000469ea) main_camera2_pane_g2_ParamLimits

0x4a48,	// (0x000469ea) main_camera2_pane_g2

0x4a68,	// (0x00046a0a) main_camera2_pane_g3_ParamLimits

0x4a68,	// (0x00046a0a) main_camera2_pane_g3

0x4a88,	// (0x00046a2a) main_camera2_pane_g4_ParamLimits

0x4a88,	// (0x00046a2a) main_camera2_pane_g4

0x4aa8,	// (0x00046a4a) main_camera2_pane_g5_ParamLimits

0x4aa8,	// (0x00046a4a) main_camera2_pane_g5

0x4ac8,	// (0x00046a6a) main_camera2_pane_g6_ParamLimits

0x4ac8,	// (0x00046a6a) main_camera2_pane_g6

0x4ae8,	// (0x00046a8a) main_camera2_pane_g7_ParamLimits

0x4ae8,	// (0x00046a8a) main_camera2_pane_g7

0x4b08,	// (0x00046aaa) main_camera2_pane_g8_ParamLimits

0x4b08,	// (0x00046aaa) main_camera2_pane_g8

0x0008,

0xf55b,	// (0x000514fd) main_camera2_pane_g_ParamLimits

0xf55b,	// (0x000514fd) main_camera2_pane_g

0x4b48,	// (0x00046aea) main_camera2_pane_t1_ParamLimits

0x4b48,	// (0x00046aea) main_camera2_pane_t1

0x4b7d,	// (0x00046b1f) main_camera2_pane_t2_ParamLimits

0x4b7d,	// (0x00046b1f) main_camera2_pane_t2

0x4ba3,	// (0x00046b45) main_camera2_pane_t3_ParamLimits

0x4ba3,	// (0x00046b45) main_camera2_pane_t3

0x4c01,	// (0x00046ba3) main_camera2_pane_t4_ParamLimits

0x4c01,	// (0x00046ba3) main_camera2_pane_t4

0x0006,

0xf56e,	// (0x00051510) main_camera2_pane_t_ParamLimits

0xf56e,	// (0x00051510) main_camera2_pane_t

0x4c93,	// (0x00046c35) cams_zoom_pane_cp4_ParamLimits

0x4c93,	// (0x00046c35) cams_zoom_pane_cp4

0x4ca9,	// (0x00046c4b) image2_cif_pane_ParamLimits

0x4ca9,	// (0x00046c4b) image2_cif_pane

0x4cd4,	// (0x00046c76) image2_subqcif_pane_ParamLimits

0x4cd4,	// (0x00046c76) image2_subqcif_pane

0x4cee,	// (0x00046c90) main_video2_pane_g1_ParamLimits

0x4cee,	// (0x00046c90) main_video2_pane_g1

0x4d08,	// (0x00046caa) main_video2_pane_g2_ParamLimits

0x4d08,	// (0x00046caa) main_video2_pane_g2

0x4d1e,	// (0x00046cc0) main_video2_pane_g3_ParamLimits

0x4d1e,	// (0x00046cc0) main_video2_pane_g3

0x4d34,	// (0x00046cd6) main_video2_pane_g4_ParamLimits

0x4d34,	// (0x00046cd6) main_video2_pane_g4

0x4d4a,	// (0x00046cec) main_video2_pane_g5_ParamLimits

0x4d4a,	// (0x00046cec) main_video2_pane_g5

0x4d60,	// (0x00046d02) main_video2_pane_g6_ParamLimits

0x4d60,	// (0x00046d02) main_video2_pane_g6

0x0005,

0xf57d,	// (0x0005151f) main_video2_pane_g_ParamLimits

0xf57d,	// (0x0005151f) main_video2_pane_g

0x4d7a,	// (0x00046d1c) main_video2_pane_t1_ParamLimits

0x4d7a,	// (0x00046d1c) main_video2_pane_t1

0x4d9e,	// (0x00046d40) main_video2_pane_t2_ParamLimits

0x4d9e,	// (0x00046d40) main_video2_pane_t2

0x4dec,	// (0x00046d8e) main_video2_pane_t3_ParamLimits

0x4dec,	// (0x00046d8e) main_video2_pane_t3

0x0002,

0xf58a,	// (0x0005152c) main_video2_pane_t_ParamLimits

0xf58a,	// (0x0005152c) main_video2_pane_t

0x4267,	// (0x00046209) call_muted_g2

0x0001,

0xf53f,	// (0x000514e1) call_muted_g

0xc1dd,	// (0x0004e17f) main_mup2_pane

0x4e30,	// (0x00046dd2) main_mup2_pane_g1_ParamLimits

0x4e30,	// (0x00046dd2) main_mup2_pane_g1

0x4e3c,	// (0x00046dde) main_mup2_pane_g2_ParamLimits

0x4e3c,	// (0x00046dde) main_mup2_pane_g2

0xaa3f,	// (0x0004c9e1) main_mup_pane_g13_cp1

0xaa47,	// (0x0004c9e9) mup_volume_pane_cp1

0x4e58,	// (0x00046dfa) main_mup2_pane_g4_ParamLimits

0x4e58,	// (0x00046dfa) main_mup2_pane_g4

0x4e6a,	// (0x00046e0c) main_mup2_pane_g5_ParamLimits

0x4e6a,	// (0x00046e0c) main_mup2_pane_g5

0x4e7c,	// (0x00046e1e) main_mup2_pane_g6_ParamLimits

0x4e7c,	// (0x00046e1e) main_mup2_pane_g6

0x4e8e,	// (0x00046e30) main_mup2_pane_g7_ParamLimits

0x4e8e,	// (0x00046e30) main_mup2_pane_g7

0x0006,

0xf591,	// (0x00051533) main_mup2_pane_g_ParamLimits

0xf591,	// (0x00051533) main_mup2_pane_g

0x4ea6,	// (0x00046e48) main_mup2_pane_t1_ParamLimits

0x4ea6,	// (0x00046e48) main_mup2_pane_t1

0x4ebc,	// (0x00046e5e) main_mup2_pane_t2_ParamLimits

0x4ebc,	// (0x00046e5e) main_mup2_pane_t2

0x4ed2,	// (0x00046e74) main_mup2_pane_t3_ParamLimits

0x4ed2,	// (0x00046e74) main_mup2_pane_t3

0x4ee8,	// (0x00046e8a) main_mup2_pane_t4_ParamLimits

0x4ee8,	// (0x00046e8a) main_mup2_pane_t4

0x4f00,	// (0x00046ea2) main_mup2_pane_t5_ParamLimits

0x4f00,	// (0x00046ea2) main_mup2_pane_t5

0x4f18,	// (0x00046eba) main_mup2_pane_t6_ParamLimits

0x4f18,	// (0x00046eba) main_mup2_pane_t6

0x0005,

0xf5a0,	// (0x00051542) main_mup2_pane_t_ParamLimits

0xf5a0,	// (0x00051542) main_mup2_pane_t

0x4f48,	// (0x00046eea) mup2_visualizer_pane_ParamLimits

0x4f48,	// (0x00046eea) mup2_visualizer_pane

0x4f76,	// (0x00046f18) mup_progress_pane_cp_ParamLimits

0x4f76,	// (0x00046f18) mup_progress_pane_cp

0xaa2a,	// (0x0004c9cc) mup_volume_pane_cp_ParamLimits

0xaa2a,	// (0x0004c9cc) mup_volume_pane_cp

0x4f8a,	// (0x00046f2c) mup2_visualizer_pane_g1_ParamLimits

0x4f8a,	// (0x00046f2c) mup2_visualizer_pane_g1

0xe4df,	// (0x00050481) mup2_visualizer_pane_g2_ParamLimits

0xe4df,	// (0x00050481) mup2_visualizer_pane_g2

0x4fa1,	// (0x00046f43) mup2_visualizer_pane_g3_ParamLimits

0x4fa1,	// (0x00046f43) mup2_visualizer_pane_g3

0x0002,

0xf5ad,	// (0x0005154f) mup2_visualizer_pane_g_ParamLimits

0xf5ad,	// (0x0005154f) mup2_visualizer_pane_g

0xd2d2,	// (0x0004f274) aid_size_cell_fmradio

0x4419,	// (0x000463bb) aid_height_parent_landcape

0xc838,	// (0x0004e7da) wml_content_pane_cp

0xc840,	// (0x0004e7e2) wml_tabs_pane

0xc849,	// (0x0004e7eb) popup_wml_miniature_window

0xc851,	// (0x0004e7f3) scroll_pane_cp021

0xc865,	// (0x0004e807) wml_content_pane_comp8

0xc1dd,	// (0x0004e17f) bg_popup_sub_pane_cp05

0xe4fd,	// (0x0005049f) popup_wml_miniature_window_g1

0xe505,	// (0x000504a7) wml_miniature_view_pane

0x4fad,	// (0x00046f4f) aid_size_wml_view

0x4fb5,	// (0x00046f57) wml_miniature_view_pane_g1

0x4fbe,	// (0x00046f60) wml_miniature_view_pane_g2

0x4fc7,	// (0x00046f69) wml_miniature_view_pane_g3

0x4fcf,	// (0x00046f71) wml_miniature_view_pane_g4

0x4fd7,	// (0x00046f79) wml_miniature_view_pane_g5

0x4fdf,	// (0x00046f81) wml_miniature_view_pane_g6

0x4fe7,	// (0x00046f89) wml_miniature_view_pane_g7

0x4fef,	// (0x00046f91) wml_miniature_view_pane_g8

0x0007,

0xf5b4,	// (0x00051556) wml_miniature_view_pane_g

0xe50d,	// (0x000504af) background_graphic_ParamLimits

0xe50d,	// (0x000504af) background_graphic

0xe519,	// (0x000504bb) wml_tabs_2_pane

0xe522,	// (0x000504c4) wml_tabs_3_pane_ParamLimits

0xe522,	// (0x000504c4) wml_tabs_3_pane

0xe534,	// (0x000504d6) wml_tabs_4_pane_ParamLimits

0xe534,	// (0x000504d6) wml_tabs_4_pane

0xe54a,	// (0x000504ec) wml_tabs_5_pane_ParamLimits

0xe54a,	// (0x000504ec) wml_tabs_5_pane

0xe564,	// (0x00050506) wml_tabs_pane_g2_ParamLimits

0xe564,	// (0x00050506) wml_tabs_pane_g2

0xe578,	// (0x0005051a) wml_tabs_pane_g3_ParamLimits

0xe578,	// (0x0005051a) wml_tabs_pane_g3

0x4ff7,	// (0x00046f99) wml_tabs_2_active_pane_ParamLimits

0x4ff7,	// (0x00046f99) wml_tabs_2_active_pane

0x500b,	// (0x00046fad) wml_tabs_2_passive_pane_ParamLimits

0x500b,	// (0x00046fad) wml_tabs_2_passive_pane

0x501f,	// (0x00046fc1) wml_tabs_3_active_pane_cp_ParamLimits

0x501f,	// (0x00046fc1) wml_tabs_3_active_pane_cp

0x5034,	// (0x00046fd6) wml_tabs_3_passive_pane_ParamLimits

0x5034,	// (0x00046fd6) wml_tabs_3_passive_pane

0x5047,	// (0x00046fe9) wml_tabs_3_passive_pane_cp_ParamLimits

0x5047,	// (0x00046fe9) wml_tabs_3_passive_pane_cp

0x505e,	// (0x00047000) tabs_4_active_pane

0x5066,	// (0x00047008) tabs_4_passive_pane

0x5070,	// (0x00047012) tabs_4_passive_pane_cp

0x5078,	// (0x0004701a) tabs_4_passive_pane_cp2

0x4134,	// (0x000460d6) aid_height_text

0x389d,	// (0x0004583f) mup_volume_cont_pane_ParamLimits

0x389d,	// (0x0004583f) mup_volume_cont_pane

0x19af,	// (0x00043951) aid_size_cell_pinb

0x19b9,	// (0x0004395b) aid_size_list_pinb

0x4f62,	// (0x00046f04) mup2_volume_cont_pane_ParamLimits

0x4f62,	// (0x00046f04) mup2_volume_cont_pane

0xaa16,	// (0x0004c9b8) mup2_volume_cont_pane_g1_ParamLimits

0xaa16,	// (0x0004c9b8) mup2_volume_cont_pane_g1

0x1691,	// (0x00043633) aid_size_cell_touch_ParamLimits

0x1691,	// (0x00043633) aid_size_cell_touch

0x189f,	// (0x00043841) touch_pane_ParamLimits

0x189f,	// (0x00043841) touch_pane

0xa620,	// (0x0004c5c2) main_rss2_pane

0xe595,	// (0x00050537) listscroll_rss2_pane

0xe59e,	// (0x00050540) rss2_navigation_pane

0xe5a6,	// (0x00050548) list_rss2_pane

0xce95,	// (0x0004ee37) scroll_pane_cp22

0xe5ae,	// (0x00050550) rss2_navigation_pane_g1

0xe5b7,	// (0x00050559) rss2_navigation_pane_g2

0xe5bf,	// (0x00050561) rss2_navigation_pane_g3

0x0002,

0x02d8,	// (0x0004227a) rss2_navigation_pane_g

0xe5c7,	// (0x00050569) rss2_navigation_pane_t1

0x5082,	// (0x00047024) rss2_list_single_pane_ParamLimits

0x5082,	// (0x00047024) rss2_list_single_pane

0xe5d5,	// (0x00050577) rss2_list_single_pane_t2

0xe5e3,	// (0x00050585) rss2_list_single_pane_t3_ParamLimits

0xe5e3,	// (0x00050585) rss2_list_single_pane_t3

0xe600,	// (0x000505a2) rss2_list_single_pane_t4

0x31c3,	// (0x00045165) smil_status_pane_g1

0xd5ee,	// (0x0004f590) main_image2_pane_ParamLimits

0xd5ee,	// (0x0004f590) main_image2_pane

0x4b28,	// (0x00046aca) main_camera2_pane_g9_ParamLimits

0x4b28,	// (0x00046aca) main_camera2_pane_g9

0x4c56,	// (0x00046bf8) main_camera2_pane_t5_ParamLimits

0x4c56,	// (0x00046bf8) main_camera2_pane_t5

0xa9e6,	// (0x0004c988) main_camera2_pane_t6_ParamLimits

0xa9e6,	// (0x0004c988) main_camera2_pane_t6

0x5097,	// (0x00047039) main_image2_pane_g1_ParamLimits

0x5097,	// (0x00047039) main_image2_pane_g1

0x3e70,	// (0x00045e12) smil2_video_pane_ParamLimits

0x3e70,	// (0x00045e12) smil2_video_pane

0xa64e,	// (0x0004c5f0) aid_zoom_text_primary_cp

0xa68e,	// (0x0004c630) popup_preview_fixed_window

0xc7a1,	// (0x0004e743) im_reading_pane_g1

0x499f,	// (0x00046941) cams2_bc_adjust_pane_cp_ParamLimits

0x499f,	// (0x00046941) cams2_bc_adjust_pane_cp

0x4c85,	// (0x00046c27) cams2_bc_adjust_pane_ParamLimits

0x4c85,	// (0x00046c27) cams2_bc_adjust_pane

0xaa4f,	// (0x0004c9f1) cams2_bc_adjust_pane_g1

0xaa57,	// (0x0004c9f9) cams2_slider_pane

0xaa60,	// (0x0004ca02) cams2_slider_pane_g1

0xaa69,	// (0x0004ca0b) cams2_slider_pane_g2

0x0006,

0xf5c5,	// (0x00051567) cams2_slider_pane_g

0x1aa7,	// (0x00043a49) calc_display_pane_ParamLimits

0x1acf,	// (0x00043a71) calc_paper_pane_ParamLimits

0x1af2,	// (0x00043a94) grid_calc_pane_ParamLimits

0xa953,	// (0x0004c8f5) popup_clock_digital_window_t1_ParamLimits

0xd26f,	// (0x0004f211) main_image_pane_t1

0x1a89,	// (0x00043a2b) aid_size_cell_calc_ParamLimits

0x1a89,	// (0x00043a2b) aid_size_cell_calc

0x445f,	// (0x00046401) popup_blid_sat_info2_window_ParamLimits

0x445f,	// (0x00046401) popup_blid_sat_info2_window

0xe616,	// (0x000505b8) aid_size_cell_blid

0xe61e,	// (0x000505c0) bg_popup_window_pane_cp07

0xe641,	// (0x000505e3) grid_popup_blid_pane

0xe64b,	// (0x000505ed) heading_pane_cp05_ParamLimits

0xe64b,	// (0x000505ed) heading_pane_cp05

0xe715,	// (0x000506b7) cell_popup_blid_pane_ParamLimits

0xe715,	// (0x000506b7) cell_popup_blid_pane

0xe739,	// (0x000506db) cell_popup_blid_pane_g1

0xe741,	// (0x000506e3) cell_popup_blid_pane_t1

0x4f32,	// (0x00046ed4) mup2_indicator_pane_ParamLimits

0x4f32,	// (0x00046ed4) mup2_indicator_pane

0xcfde,	// (0x0004ef80) mup2_visualizer_osc_pane

0xe4eb,	// (0x0005048d) mup2_visualizer_spec_pane_ParamLimits

0xe4eb,	// (0x0005048d) mup2_visualizer_spec_pane

0x50ad,	// (0x0004704f) mup2_spec_half_pane

0x50b6,	// (0x00047058) mup2_spec_half_pane_cp

0x50be,	// (0x00047060) mup2_spec_bar_pane_ParamLimits

0x50be,	// (0x00047060) mup2_spec_bar_pane

0xe48c,	// (0x0005042e) mup2_spec_bar_pane_g1

0xe496,	// (0x00050438) mup2_spec_bar_pane_g2

0x0001,

0x0252,	// (0x000421f4) mup2_spec_bar_pane_g

0x50de,	// (0x00047080) mup2_osc_middle_pane

0xe4a8,	// (0x0005044a) mup2_visualizer_osc_pane_g1

0xbdea,	// (0x0004dd8c) popup_number_entry_window_t1_ParamLimits

0xbdfd,	// (0x0004dd9f) popup_number_entry_window_t2_ParamLimits

0xbe0f,	// (0x0004ddb1) popup_number_entry_window_t3_ParamLimits

0x18f1,	// (0x00043893) popup_number_entry_window_t5_ParamLimits

0x18f1,	// (0x00043893) popup_number_entry_window_t5

0xf0e7,	// (0x00051089) popup_number_entry_window_t_ParamLimits

0xbe21,	// (0x0004ddc3) text_title_cp2_ParamLimits

0xa992,	// (0x0004c934) aid_hotspot_pointer_text2_pane

0xa9b8,	// (0x0004c95a) main_viewer_pane_g9_ParamLimits

0xa9b8,	// (0x0004c95a) main_viewer_pane_g9

0xc9d0,	// (0x0004e972) cale_month_pane_t1_ParamLimits

0xca0d,	// (0x0004e9af) bg_cale_pane_ParamLimits

0xca25,	// (0x0004e9c7) list_cale_pane_ParamLimits

0xc639,	// (0x0004e5db) listscroll_cale_day_pane_t1

0xca36,	// (0x0004e9d8) scroll_pane_cp09_ParamLimits

0x38cf,	// (0x00045871) main_mup_eq_pane_t1_ParamLimits

0x38cf,	// (0x00045871) main_mup_eq_pane_t1

0x38e9,	// (0x0004588b) main_mup_eq_pane_t2_ParamLimits

0x38e9,	// (0x0004588b) main_mup_eq_pane_t2

0x3903,	// (0x000458a5) main_mup_eq_pane_t3_ParamLimits

0x3903,	// (0x000458a5) main_mup_eq_pane_t3

0x391f,	// (0x000458c1) main_mup_eq_pane_t4_ParamLimits

0x391f,	// (0x000458c1) main_mup_eq_pane_t4

0x393b,	// (0x000458dd) main_mup_eq_pane_t5_ParamLimits

0x393b,	// (0x000458dd) main_mup_eq_pane_t5

0x3957,	// (0x000458f9) main_mup_eq_pane_t6_ParamLimits

0x3957,	// (0x000458f9) main_mup_eq_pane_t6

0x396b,	// (0x0004590d) main_mup_eq_pane_t7_ParamLimits

0x396b,	// (0x0004590d) main_mup_eq_pane_t7

0x397f,	// (0x00045921) main_mup_eq_pane_t8_ParamLimits

0x397f,	// (0x00045921) main_mup_eq_pane_t8

0x3993,	// (0x00045935) main_mup_eq_pane_t9_ParamLimits

0x3993,	// (0x00045935) main_mup_eq_pane_t9

0x39ad,	// (0x0004594f) main_mup_eq_pane_t10_ParamLimits

0x39ad,	// (0x0004594f) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x000513fe) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x000513fe) main_mup_eq_pane_t

0x3a5c,	// (0x000459fe) mup_equalizer_pane_cp5_ParamLimits

0x3a70,	// (0x00045a12) mup_equalizer_pane_cp6_ParamLimits

0x3a84,	// (0x00045a26) mup_equalizer_pane_cp7_ParamLimits

0xa620,	// (0x0004c5c2) main_gallery_pane

0xe4b1,	// (0x00050453) smil2_volume_pane

0xe4b9,	// (0x0005045b) smil_status_volume_pane_g1_ParamLimits

0xe4cc,	// (0x0005046e) smil_status_volume_pane_g2_ParamLimits

0xa9c4,	// (0x0004c966) smil_status_volume_pane_g3_ParamLimits

0xf544,	// (0x000514e6) smil_status_volume_pane_g_ParamLimits

0xe61e,	// (0x000505c0) bg_popup_window_pane_cp07_ParamLimits

0xe62c,	// (0x000505ce) blid_firmament_pane

0x50e7,	// (0x00047089) aid_size_cell_gallery_ParamLimits

0x50e7,	// (0x00047089) aid_size_cell_gallery

0x50fd,	// (0x0004709f) grid_gallery_pane_ParamLimits

0x50fd,	// (0x0004709f) grid_gallery_pane

0x5116,	// (0x000470b8) cell_gallery_pane_ParamLimits

0x5116,	// (0x000470b8) cell_gallery_pane

0xe74f,	// (0x000506f1) bg_cell_gallery_focus_pane_ParamLimits

0xe74f,	// (0x000506f1) bg_cell_gallery_focus_pane

0xe761,	// (0x00050703) cell_gallery_pane_g1_ParamLimits

0xe761,	// (0x00050703) cell_gallery_pane_g1

0x515f,	// (0x00047101) cell_gallery_pane_g2_ParamLimits

0x515f,	// (0x00047101) cell_gallery_pane_g2

0x516c,	// (0x0004710e) cell_gallery_pane_g3_ParamLimits

0x516c,	// (0x0004710e) cell_gallery_pane_g3

0xe76d,	// (0x0005070f) cell_gallery_pane_g4_ParamLimits

0xe76d,	// (0x0005070f) cell_gallery_pane_g4

0x0003,

0xf5eb,	// (0x0005158d) cell_gallery_pane_g_ParamLimits

0xf5eb,	// (0x0005158d) cell_gallery_pane_g

0xe779,	// (0x0005071b) bg_cell_gallery_focus_pane_g1

0xe781,	// (0x00050723) bg_cell_gallery_focus_pane_g2

0xe789,	// (0x0005072b) bg_cell_gallery_focus_pane_g3

0xe791,	// (0x00050733) bg_cell_gallery_focus_pane_g4

0xe799,	// (0x0005073b) bg_cell_gallery_focus_pane_g5

0xe7a1,	// (0x00050743) bg_cell_gallery_focus_pane_g6

0xe7a9,	// (0x0005074b) bg_cell_gallery_focus_pane_g7

0xe7b1,	// (0x00050753) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f4,	// (0x00051596) bg_cell_gallery_focus_pane_g

0xe7b9,	// (0x0005075b) aid_firma_cardinal

0xe7cd,	// (0x0005076f) blid_firmament_pane_t1

0xe7e4,	// (0x00050786) blid_firmament_pane_t2

0xe7fb,	// (0x0005079d) blid_firmament_pane_t3

0xe812,	// (0x000507b4) blid_firmament_pane_t4

0x0003,

0xf605,	// (0x000515a7) blid_firmament_pane_t

0xe829,	// (0x000507cb) blid_sat_info_pane

0xe839,	// (0x000507db) blid_sat_info_pane_g1

0xe839,	// (0x000507db) blid_sat_info_pane_g2

0x0001,

0xf60e,	// (0x000515b0) blid_sat_info_pane_g

0xe843,	// (0x000507e5) blid_sat_info_pane_t1

0xe851,	// (0x000507f3) smil2_volume_content_pane

0xe86b,	// (0x0005080d) smil2_volume_pane_g1

0xe85a,	// (0x000507fc) smil2_volume_content_pane_g1

0xe873,	// (0x00050815) smil2_volume_content_pane_g2

0xe87c,	// (0x0005081e) smil2_volume_content_pane_g3

0xe885,	// (0x00050827) smil2_volume_content_pane_g4

0xe88e,	// (0x00050830) smil2_volume_content_pane_g5

0xe897,	// (0x00050839) smil2_volume_content_pane_g6

0xe8a0,	// (0x00050842) smil2_volume_content_pane_g7

0xe8a9,	// (0x0005084b) smil2_volume_content_pane_g8

0xe8b2,	// (0x00050854) smil2_volume_content_pane_g9

0xe8bb,	// (0x0005085d) smil2_volume_content_pane_g10

0x0009,

0xf613,	// (0x000515b5) smil2_volume_content_pane_g

0x1f98,	// (0x00043f3a) cale_week_day_heading_pane_t1_ParamLimits

0x1fc2,	// (0x00043f64) cale_week_day_heading_pane_t2_ParamLimits

0x1fec,	// (0x00043f8e) cale_week_day_heading_pane_t3_ParamLimits

0x2016,	// (0x00043fb8) cale_week_day_heading_pane_t4_ParamLimits

0x2040,	// (0x00043fe2) cale_week_day_heading_pane_t5_ParamLimits

0x206a,	// (0x0004400c) cale_week_day_heading_pane_t6_ParamLimits

0x2096,	// (0x00044038) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0005118e) cale_week_day_heading_pane_t_ParamLimits

0xc64b,	// (0x0004e5ed) bg_cale_side_pane_ParamLimits

0x20c0,	// (0x00044062) cale_week_time_pane_t1_ParamLimits

0x20d8,	// (0x0004407a) cale_week_time_pane_t2_ParamLimits

0x20f0,	// (0x00044092) cale_week_time_pane_t3_ParamLimits

0x2108,	// (0x000440aa) cale_week_time_pane_t4_ParamLimits

0x2120,	// (0x000440c2) cale_week_time_pane_t5_ParamLimits

0x2138,	// (0x000440da) cale_week_time_pane_t6_ParamLimits

0x2150,	// (0x000440f2) cale_week_time_pane_t7_ParamLimits

0x2168,	// (0x0004410a) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0005119d) cale_week_time_pane_t_ParamLimits

0x2180,	// (0x00044122) cell_cale_week_pane_g2_ParamLimits

0xc64b,	// (0x0004e5ed) bg_cale_side_pane_cp01_ParamLimits

0x303e,	// (0x00044fe0) cale_month_week_pane_t1_ParamLimits

0x3055,	// (0x00044ff7) cale_month_week_pane_t2_ParamLimits

0x306c,	// (0x0004500e) cale_month_week_pane_t3_ParamLimits

0x3083,	// (0x00045025) cale_month_week_pane_t4_ParamLimits

0x309a,	// (0x0004503c) cale_month_week_pane_t5_ParamLimits

0x30b1,	// (0x00045053) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00051276) cale_month_week_pane_t_ParamLimits

0xa85a,	// (0x0004c7fc) cell_cale_month_pane_g1_ParamLimits

0xa620,	// (0x0004c5c2) main_cale_event_viewer_pane

0xa620,	// (0x0004c5c2) listscroll_cale_event_viewer_pane

0xe8c4,	// (0x00050866) list_cale_ev_pane

0xe8cc,	// (0x0005086e) scroll_pane_cp023

0xe8d8,	// (0x0005087a) field_cale_ev_pane_ParamLimits

0xe8d8,	// (0x0005087a) field_cale_ev_pane

0xe8f6,	// (0x00050898) field_cale_ev_content_pane_ParamLimits

0xe8f6,	// (0x00050898) field_cale_ev_content_pane

0xe902,	// (0x000508a4) field_cale_ev_pane_g1_ParamLimits

0xe902,	// (0x000508a4) field_cale_ev_pane_g1

0xe90e,	// (0x000508b0) field_cale_ev_pane_g2_ParamLimits

0xe90e,	// (0x000508b0) field_cale_ev_pane_g2

0xe926,	// (0x000508c8) field_cale_ev_pane_g3_ParamLimits

0xe926,	// (0x000508c8) field_cale_ev_pane_g3

0x0002,

0x0342,	// (0x000422e4) field_cale_ev_pane_g_ParamLimits

0x0342,	// (0x000422e4) field_cale_ev_pane_g

0xe93e,	// (0x000508e0) field_cale_ev_pane_t1_ParamLimits

0xe93e,	// (0x000508e0) field_cale_ev_pane_t1

0xe955,	// (0x000508f7) field_cale_ev_content_pane_t1_ParamLimits

0xe955,	// (0x000508f7) field_cale_ev_content_pane_t1

0xd155,	// (0x0004f0f7) bg_button_pane_cp01

0xc50b,	// (0x0004e4ad) listscroll_cale_week_pane_ParamLimits

0x1db4,	// (0x00043d56) popup_toolbar_window_cp01

0xc639,	// (0x0004e5db) listscroll_cale_week_pane_t1_ParamLimits

0xc50b,	// (0x0004e4ad) listscroll_cale_day_pane_ParamLimits

0x3214,	// (0x000451b6) popup_toolbar_window_cp02

0xc639,	// (0x0004e5db) listscroll_cale_day_pane_t1_ParamLimits

0xc50b,	// (0x0004e4ad) main_cale_month_pane_ParamLimits

0x4693,	// (0x00046635) popup_toolbar_window_cp03_ParamLimits

0x4693,	// (0x00046635) popup_toolbar_window_cp03

0x3d38,	// (0x00045cda) main_image_pane_g2_ParamLimits

0x3d38,	// (0x00045cda) main_image_pane_g2

0x3d49,	// (0x00045ceb) main_image_pane_g3_ParamLimits

0x3d49,	// (0x00045ceb) main_image_pane_g3

0x0002,

0xf4e4,	// (0x00051486) main_image_pane_g_ParamLimits

0xf4e4,	// (0x00051486) main_image_pane_g

0xd26f,	// (0x0004f211) main_image_pane_t1_ParamLimits

0x3d5a,	// (0x00045cfc) main_image_pane_t2_ParamLimits

0x3d5a,	// (0x00045cfc) main_image_pane_t2

0x3d6c,	// (0x00045d0e) main_image_pane_t3_ParamLimits

0x3d6c,	// (0x00045d0e) main_image_pane_t3

0x3d94,	// (0x00045d36) main_image_pane_t4_ParamLimits

0x3d94,	// (0x00045d36) main_image_pane_t4

0x0003,

0xf4eb,	// (0x0005148d) main_image_pane_t_ParamLimits

0xf4eb,	// (0x0005148d) main_image_pane_t

0x3db4,	// (0x00045d56) popup_image_details_window_cp01

0x3dbe,	// (0x00045d60) popup_toobar_trans_pane_cp01_ParamLimits

0x3dbe,	// (0x00045d60) popup_toobar_trans_pane_cp01

0x453e,	// (0x000464e0) popup_image_details_window_ParamLimits

0x453e,	// (0x000464e0) popup_image_details_window

0xe412,	// (0x000503b4) popup_image_focus_window

0x4959,	// (0x000468fb) camera2_autofocus_pane_ParamLimits

0x4959,	// (0x000468fb) camera2_autofocus_pane

0xa620,	// (0x0004c5c2) bg_popup_sub_pane_cp06

0xe973,	// (0x00050915) popup_image_focus_window_g1

0xe97b,	// (0x0005091d) popup_image_focus_window_g2

0xe983,	// (0x00050925) popup_image_focus_window_g3

0xe98b,	// (0x0005092d) popup_image_focus_window_g4

0x0003,

0x0349,	// (0x000422eb) popup_image_focus_window_g

0xe993,	// (0x00050935) popup_image_focus_window_t1

0xe9a1,	// (0x00050943) popup_image_focus_window_t2

0xe9b1,	// (0x00050953) popup_image_focus_window_t3

0x0002,

0x0352,	// (0x000422f4) popup_image_focus_window_t

0xe9bf,	// (0x00050961) camera2_autofocus_pane_g1

0xd5ee,	// (0x0004f590) bg_tb_trans_pane_cp01

0xe9cd,	// (0x0005096f) popup_image_details_window_g1

0xe9e0,	// (0x00050982) popup_image_details_window_g2

0x0002,

0x0364,	// (0x00042306) popup_image_details_window_g

0xea09,	// (0x000509ab) popup_image_details_window_t1

0xea1b,	// (0x000509bd) popup_image_details_window_t2

0xea34,	// (0x000509d6) popup_image_details_window_t3

0xea48,	// (0x000509ea) popup_image_details_window_t4

0xea63,	// (0x00050a05) popup_image_details_window_t5

0x0004,

0x036b,	// (0x0004230d) popup_image_details_window_t

0xc4f7,	// (0x0004e499) bg_calc_paper_pane_ParamLimits

0xa620,	// (0x0004c5c2) grid_highlight_pane_cp013

0xa6a0,	// (0x0004c642) list_calc_pane_ParamLimits

0xa6b2,	// (0x0004c654) scroll_pane_cp024

0xc50b,	// (0x0004e4ad) bg_calc_display_pane_ParamLimits

0x1bf0,	// (0x00043b92) calc_display_pane_t1_ParamLimits

0x1c02,	// (0x00043ba4) calc_display_pane_t2_ParamLimits

0xa6ba,	// (0x0004c65c) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00051110) calc_display_pane_t_ParamLimits

0x1cbf,	// (0x00043c61) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0005112d) cell_calc_pane_g

0x1cc8,	// (0x00043c6a) cell_calc_pane_t1

0xc56a,	// (0x0004e50c) grid_highlight_pane_cp02_ParamLimits

0xc580,	// (0x0004e522) toolbar_button_pane_cp01_ParamLimits

0xc580,	// (0x0004e522) toolbar_button_pane_cp01

0xd2b4,	// (0x0004f256) temp_image_control_pane_ParamLimits

0xd2b4,	// (0x0004f256) temp_image_control_pane

0xd5ee,	// (0x0004f590) main_mp3_pane

0xea7d,	// (0x00050a1f) temp_image_control_pane_g1_ParamLimits

0xea7d,	// (0x00050a1f) temp_image_control_pane_g1

0xea8b,	// (0x00050a2d) temp_image_control_pane_g2_ParamLimits

0xea8b,	// (0x00050a2d) temp_image_control_pane_g2

0xea9d,	// (0x00050a3f) temp_image_control_pane_g3_ParamLimits

0xea9d,	// (0x00050a3f) temp_image_control_pane_g3

0x51a9,	// (0x0004714b) temp_image_control_pane_g4_ParamLimits

0x51a9,	// (0x0004714b) temp_image_control_pane_g4

0x0003,

0xf633,	// (0x000515d5) temp_image_control_pane_g_ParamLimits

0xf633,	// (0x000515d5) temp_image_control_pane_g

0xea7d,	// (0x00050a1f) main_mp3_pane_g1

0x51bc,	// (0x0004715e) main_mp3_pane_g2

0x0007,

0xf63c,	// (0x000515de) main_mp3_pane_g

0xeae0,	// (0x00050a82) main_mp3_pane_t1

0xc6b0,	// (0x0004e652) main_camera_pane_g8_ParamLimits

0xc6b0,	// (0x0004e652) main_camera_pane_g8

0x2435,	// (0x000443d7) main_video_pane_g7_ParamLimits

0x2435,	// (0x000443d7) main_video_pane_g7

0xaa04,	// (0x0004c9a6) main_camera2_pane_t7_ParamLimits

0xaa04,	// (0x0004c9a6) main_camera2_pane_t7

0xc7f8,	// (0x0004e79a) scroll_pane_cp025_ParamLimits

0xc7f8,	// (0x0004e79a) scroll_pane_cp025

0xc80c,	// (0x0004e7ae) scroll_pane_cp026_ParamLimits

0xc80c,	// (0x0004e7ae) scroll_pane_cp026

0xc81b,	// (0x0004e7bd) wml_content_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_touch_calib_pane

0x5286,	// (0x00047228) main_touch_calib_pane_g1

0x5292,	// (0x00047234) main_touch_calib_pane_g2

0x529e,	// (0x00047240) main_touch_calib_pane_g3

0x52aa,	// (0x0004724c) main_touch_calib_pane_g4

0x0003,

0xf65a,	// (0x000515fc) main_touch_calib_pane_g

0x52b6,	// (0x00047258) main_touch_calib_pane_t1

0x52d0,	// (0x00047272) main_touch_calib_pane_t2

0x0004,

0xf663,	// (0x00051605) main_touch_calib_pane_t

0xcf1f,	// (0x0004eec1) mup_progress_pane_cp02

0xcf3e,	// (0x0004eee0) navi_pane_g1

0xcfa0,	// (0x0004ef42) navi_pane_mp_t3

0xd5ee,	// (0x0004f590) main_mp3_pane_ParamLimits

0x46d1,	// (0x00046673) navi_pane_ParamLimits

0xea7d,	// (0x00050a1f) main_mp3_pane_g1_ParamLimits

0x51bc,	// (0x0004715e) main_mp3_pane_g2_ParamLimits

0x51ca,	// (0x0004716c) main_mp3_pane_g3_ParamLimits

0x51ca,	// (0x0004716c) main_mp3_pane_g3

0x51d8,	// (0x0004717a) main_mp3_pane_g4_ParamLimits

0x51d8,	// (0x0004717a) main_mp3_pane_g4

0xeaad,	// (0x00050a4f) main_mp3_pane_g5_ParamLimits

0xeaad,	// (0x00050a4f) main_mp3_pane_g5

0xeabb,	// (0x00050a5d) main_mp3_pane_g6_ParamLimits

0xeabb,	// (0x00050a5d) main_mp3_pane_g6

0xeac8,	// (0x00050a6a) main_mp3_pane_g7_ParamLimits

0xeac8,	// (0x00050a6a) main_mp3_pane_g7

0xead4,	// (0x00050a76) main_mp3_pane_g8_ParamLimits

0xead4,	// (0x00050a76) main_mp3_pane_g8

0xf63c,	// (0x000515de) main_mp3_pane_g_ParamLimits

0x51e4,	// (0x00047186) main_mp3_pane_t2

0x51f2,	// (0x00047194) main_mp3_pane_t3

0xeaee,	// (0x00050a90) main_mp3_pane_t4

0xeafc,	// (0x00050a9e) main_mp3_pane_t5

0x0005,

0xf64d,	// (0x000515ef) main_mp3_pane_t

0xeb0a,	// (0x00050aac) mup_progress_pane_cp01

0xa64e,	// (0x0004c5f0) aid_zoom_text_secondary2

0xe8c4,	// (0x00050866) list_cale_ev2_pane

0xe8cc,	// (0x0005086e) scroll_pane_cp023_ParamLimits

0x5326,	// (0x000472c8) field_cale_ev2_pane_ParamLimits

0x5326,	// (0x000472c8) field_cale_ev2_pane

0xaa83,	// (0x0004ca25) field_cale_ev2_pane_g1_ParamLimits

0xaa83,	// (0x0004ca25) field_cale_ev2_pane_g1

0xaa8f,	// (0x0004ca31) field_cale_ev2_pane_g2_ParamLimits

0xaa8f,	// (0x0004ca31) field_cale_ev2_pane_g2

0xaaa7,	// (0x0004ca49) field_cale_ev2_pane_g3_ParamLimits

0xaaa7,	// (0x0004ca49) field_cale_ev2_pane_g3

0x0003,

0xf66e,	// (0x00051610) field_cale_ev2_pane_g_ParamLimits

0xf66e,	// (0x00051610) field_cale_ev2_pane_g

0x0d23,	// (0x00042cc5) field_cale_ev2_pane_t1_ParamLimits

0x0d23,	// (0x00042cc5) field_cale_ev2_pane_t1

0x0d3a,	// (0x00042cdc) field_cale_ev2_pane_t2_ParamLimits

0x0d3a,	// (0x00042cdc) field_cale_ev2_pane_t2

0x0001,

0xf677,	// (0x00051619) field_cale_ev2_pane_t_ParamLimits

0xf677,	// (0x00051619) field_cale_ev2_pane_t

0x3bed,	// (0x00045b8f) main_postcard_pane_g5_ParamLimits

0x3bed,	// (0x00045b8f) main_postcard_pane_g5

0x3c03,	// (0x00045ba5) main_postcard_pane_g6_ParamLimits

0x3c03,	// (0x00045ba5) main_postcard_pane_g6

0x21f9,	// (0x0004419b) camera2_autofocus_pane_cp_ParamLimits

0x21f9,	// (0x0004419b) camera2_autofocus_pane_cp

0xd5ee,	// (0x0004f590) main_mup3_pane

0x5366,	// (0x00047308) main_mup3_pane_g1_ParamLimits

0x5366,	// (0x00047308) main_mup3_pane_g1

0x5388,	// (0x0004732a) main_mup3_pane_g2_ParamLimits

0x5388,	// (0x0004732a) main_mup3_pane_g2

0x5406,	// (0x000473a8) main_mup3_pane_g3_ParamLimits

0x5406,	// (0x000473a8) main_mup3_pane_g3

0x544c,	// (0x000473ee) main_mup3_pane_g4_ParamLimits

0x544c,	// (0x000473ee) main_mup3_pane_g4

0x5492,	// (0x00047434) main_mup3_pane_g5_ParamLimits

0x5492,	// (0x00047434) main_mup3_pane_g5

0x54d8,	// (0x0004747a) main_mup3_pane_g6_ParamLimits

0x54d8,	// (0x0004747a) main_mup3_pane_g6

0xeb12,	// (0x00050ab4) main_mup3_pane_g7_ParamLimits

0xeb12,	// (0x00050ab4) main_mup3_pane_g7

0x0007,

0xf687,	// (0x00051629) main_mup3_pane_g_ParamLimits

0xf687,	// (0x00051629) main_mup3_pane_g

0x5556,	// (0x000474f8) main_mup3_pane_t1_ParamLimits

0x5556,	// (0x000474f8) main_mup3_pane_t1

0x55ca,	// (0x0004756c) main_mup3_pane_t2_ParamLimits

0x55ca,	// (0x0004756c) main_mup3_pane_t2

0x569e,	// (0x00047640) main_mup3_pane_t4_ParamLimits

0x569e,	// (0x00047640) main_mup3_pane_t4

0x56f4,	// (0x00047696) main_mup3_pane_t5_ParamLimits

0x56f4,	// (0x00047696) main_mup3_pane_t5

0x57b0,	// (0x00047752) main_mup3_pane_t6_ParamLimits

0x57b0,	// (0x00047752) main_mup3_pane_t6

0x0005,

0xf698,	// (0x0005163a) main_mup3_pane_t_ParamLimits

0xf698,	// (0x0005163a) main_mup3_pane_t

0x5868,	// (0x0004780a) mup3_progress_pane_ParamLimits

0x5868,	// (0x0004780a) mup3_progress_pane

0x58fe,	// (0x000478a0) popup_mup3_control_window_ParamLimits

0x58fe,	// (0x000478a0) popup_mup3_control_window

0xeb20,	// (0x00050ac2) popup_mup3_text_window

0x5930,	// (0x000478d2) mup3_progress_pane_t1

0x594f,	// (0x000478f1) mup3_progress_pane_t2

0xeb28,	// (0x00050aca) mup3_progress_pane_t3

0x0002,

0xf6a5,	// (0x00051647) mup3_progress_pane_t

0xeb45,	// (0x00050ae7) mup_progress_pane_cp03

0xa620,	// (0x0004c5c2) bg_tb_trans_pane_cp04

0x596e,	// (0x00047910) mup3_volume_pane

0x5976,	// (0x00047918) popup_mup3_control_window_g1

0x597f,	// (0x00047921) mup3_volume_pane_g1

0x5988,	// (0x0004792a) mup3_volume_pane_g2

0x5991,	// (0x00047933) mup3_volume_pane_g3

0x0002,

0xf6ac,	// (0x0005164e) mup3_volume_pane_g

0xa620,	// (0x0004c5c2) bg_tb_trans_pane_cp03

0xeb55,	// (0x00050af7) popup_mup3_text_window_g1

0xeb5d,	// (0x00050aff) popup_mup3_text_window_t1

0xc553,	// (0x0004e4f5) list_calc_item_pane_g1_ParamLimits

0xe58c,	// (0x0005052e) mup_volume_pane_cp_g1

0x52ea,	// (0x0004728c) main_touch_calib_pane_t3

0x52fe,	// (0x000472a0) main_touch_calib_pane_t4

0x5312,	// (0x000472b4) main_touch_calib_pane_t5

0xa62a,	// (0x0004c5cc) aid_cell_size_toolbar2

0xa632,	// (0x0004c5d4) aid_popup3_width_pane

0xa63e,	// (0x0004c5e0) aid_zoom_text_msg_primary

0xa77a,	// (0x0004c71c) vorec_t7

0xc517,	// (0x0004e4b9) bg_calc_paper_pane_g1_ParamLimits

0xc523,	// (0x0004e4c5) bg_calc_paper_pane_g2_ParamLimits

0xc52f,	// (0x0004e4d1) bg_calc_paper_pane_g3_ParamLimits

0xc53b,	// (0x0004e4dd) bg_calc_paper_pane_g4_ParamLimits

0xc547,	// (0x0004e4e9) bg_calc_paper_pane_g5_ParamLimits

0x1c49,	// (0x00043beb) bg_calc_paper_pane_g6_ParamLimits

0x1c58,	// (0x00043bfa) bg_calc_paper_pane_g7_ParamLimits

0x1c67,	// (0x00043c09) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00051117) bg_calc_paper_pane_g_ParamLimits

0x1c7a,	// (0x00043c1c) calc_bg_paper_pane_g9_ParamLimits

0x2347,	// (0x000442e9) image_qvga_pane_ParamLimits

0x2347,	// (0x000442e9) image_qvga_pane

0xc438,	// (0x0004e3da) bg_popup_sub_pane_cp04_ParamLimits

0xd1eb,	// (0x0004f18d) popup_mup_playback_window_g1_ParamLimits

0xd1f7,	// (0x0004f199) popup_mup_playback_window_t1_ParamLimits

0xd20c,	// (0x0004f1ae) popup_mup_playback_window_t2_ParamLimits

0x012e,	// (0x000420d0) popup_mup_playback_window_t_ParamLimits

0x4e4c,	// (0x00046dee) main_mup2_pane_g3_ParamLimits

0x4e4c,	// (0x00046dee) main_mup2_pane_g3

0x2645,	// (0x000445e7) popup_toolbar_window_cp04

0xd608,	// (0x0004f5aa) popup_call2_audio_second_window_g3_ParamLimits

0xd608,	// (0x0004f5aa) popup_call2_audio_second_window_g3

0xda12,	// (0x0004f9b4) popup_call2_audio_first_window_g4_ParamLimits

0xda12,	// (0x0004f9b4) popup_call2_audio_first_window_g4

0xe091,	// (0x00050033) popup_call2_audio_in_window_g4_ParamLimits

0xe091,	// (0x00050033) popup_call2_audio_in_window_g4

0x3d1a,	// (0x00045cbc) aid_area_sk_bg_cut_ParamLimits

0x3d1a,	// (0x00045cbc) aid_area_sk_bg_cut

0xd221,	// (0x0004f1c3) aid_area_sk_bg_cut_2_ParamLimits

0xd221,	// (0x0004f1c3) aid_area_sk_bg_cut_2

0x514f,	// (0x000470f1) aid_placing_details_win

0x5157,	// (0x000470f9) aid_placing_details_win_2

0xe9bf,	// (0x00050961) camera2_autofocus_pane_g1_ParamLimits

0x183e,	// (0x000437e0) popup_fixed_preview_cale_window_ParamLimits

0x183e,	// (0x000437e0) popup_fixed_preview_cale_window

0xcffd,	// (0x0004ef9f) navi_slider_pane_g3

0xd006,	// (0x0004efa8) navi_slider_pane_g4

0xd00f,	// (0x0004efb1) navi_slider_pane_g5

0xcffd,	// (0x0004ef9f) navi_slider_pane_g6

0xa979,	// (0x0004c91b) navi_slider_pane_g7

0xd122,	// (0x0004f0c4) mup_scale_pane_g3

0xd12b,	// (0x0004f0cd) mup_scale_pane_g4

0xd134,	// (0x0004f0d6) mup_scale_pane_g5

0x3a98,	// (0x00045a3a) mup_scale_pane_g6

0x3aa1,	// (0x00045a43) mup_scale_pane_g7

0xcffd,	// (0x0004ef9f) cams2_slider_pane_g3

0xe60e,	// (0x000505b0) cams2_slider_pane_g4

0xaa72,	// (0x0004ca14) cams2_slider_pane_g5

0xcffd,	// (0x0004ef9f) cams2_slider_pane_g6

0xaa7a,	// (0x0004ca1c) cams2_slider_pane_g7

0xe839,	// (0x000507db) camera2_autofocus_pane_cp_g1

0xeb6b,	// (0x00050b0d) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb6b,	// (0x00050b0d) bg_popup_preview_window_pane_cp02

0xeb77,	// (0x00050b19) list_fp_cale_pane_ParamLimits

0xeb77,	// (0x00050b19) list_fp_cale_pane

0xeb83,	// (0x00050b25) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb83,	// (0x00050b25) popup_fixed_preview_cale_window_t1

0x599a,	// (0x0004793c) popup_fixed_preview_cale_window_t2_ParamLimits

0x599a,	// (0x0004793c) popup_fixed_preview_cale_window_t2

0x59af,	// (0x00047951) popup_fixed_preview_cale_window_t3_ParamLimits

0x59af,	// (0x00047951) popup_fixed_preview_cale_window_t3

0x0002,

0xf6b3,	// (0x00051655) popup_fixed_preview_cale_window_t_ParamLimits

0xf6b3,	// (0x00051655) popup_fixed_preview_cale_window_t

0x59c4,	// (0x00047966) list_single_fp_cale_pane_ParamLimits

0x59c4,	// (0x00047966) list_single_fp_cale_pane

0xeba1,	// (0x00050b43) list_single_fp_cale_pane_g1_ParamLimits

0xeba1,	// (0x00050b43) list_single_fp_cale_pane_g1

0xebad,	// (0x00050b4f) list_single_fp_cale_pane_g2_ParamLimits

0xebad,	// (0x00050b4f) list_single_fp_cale_pane_g2

0x0002,

0x03fd,	// (0x0004239f) list_single_fp_cale_pane_g_ParamLimits

0x03fd,	// (0x0004239f) list_single_fp_cale_pane_g

0xebc6,	// (0x00050b68) list_single_fp_cale_pane_t1_ParamLimits

0xebc6,	// (0x00050b68) list_single_fp_cale_pane_t1

0xebd8,	// (0x00050b7a) list_single_fp_cale_pane_t2_ParamLimits

0xebd8,	// (0x00050b7a) list_single_fp_cale_pane_t2

0x0001,

0x0404,	// (0x000423a6) list_single_fp_cale_pane_t_ParamLimits

0x0404,	// (0x000423a6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa620,	// (0x0004c5c2) main_dialer_pane

0x59d9,	// (0x0004797b) aid_cell_size_keypad

0x59e3,	// (0x00047985) dialer_ne_pane

0x59eb,	// (0x0004798d) grid_dialer_command_1_pane

0x59f3,	// (0x00047995) grid_dialer_command_2_pane

0x59fb,	// (0x0004799d) grid_dialer_keypad_pane

0x5a0d,	// (0x000479af) bg_popup_call_pane_cp06_ParamLimits

0x5a0d,	// (0x000479af) bg_popup_call_pane_cp06

0x5a19,	// (0x000479bb) dialer_ne_clear_pane_ParamLimits

0x5a19,	// (0x000479bb) dialer_ne_clear_pane

0xec0b,	// (0x00050bad) dialer_ne_pane_g1

0xec13,	// (0x00050bb5) dialer_ne_pane_t1_ParamLimits

0xec13,	// (0x00050bb5) dialer_ne_pane_t1

0x5a25,	// (0x000479c7) dialer_ne_pane_t2_ParamLimits

0x5a25,	// (0x000479c7) dialer_ne_pane_t2

0x5a4f,	// (0x000479f1) dialer_ne_pane_t3_ParamLimits

0x5a4f,	// (0x000479f1) dialer_ne_pane_t3

0x0002,

0xf6ba,	// (0x0005165c) dialer_ne_pane_t_ParamLimits

0xf6ba,	// (0x0005165c) dialer_ne_pane_t

0x5a7f,	// (0x00047a21) dialer_ne_pane_t3_copy1_ParamLimits

0x5a7f,	// (0x00047a21) dialer_ne_pane_t3_copy1

0x5aae,	// (0x00047a50) cell_dialer_keypad_pane_ParamLimits

0x5aae,	// (0x00047a50) cell_dialer_keypad_pane

0x5ac5,	// (0x00047a67) cell_dialer_command_1_pane_ParamLimits

0x5ac5,	// (0x00047a67) cell_dialer_command_1_pane

0x5adb,	// (0x00047a7d) cell_dialer_command_2_pane_ParamLimits

0x5adb,	// (0x00047a7d) cell_dialer_command_2_pane

0xec25,	// (0x00050bc7) bg_button_pane_cp02_ParamLimits

0xec25,	// (0x00050bc7) bg_button_pane_cp02

0x5aea,	// (0x00047a8c) cell_dialer_keypad_pane_g1_ParamLimits

0x5aea,	// (0x00047a8c) cell_dialer_keypad_pane_g1

0xec25,	// (0x00050bc7) bg_button_pane_cp03_ParamLimits

0xec25,	// (0x00050bc7) bg_button_pane_cp03

0x5afe,	// (0x00047aa0) cell_dialer_command_1_pane_g1_ParamLimits

0x5afe,	// (0x00047aa0) cell_dialer_command_1_pane_g1

0xec31,	// (0x00050bd3) bg_button_pane_cp04

0x5b12,	// (0x00047ab4) cell_dialer_command_2_pane_g1

0xcfde,	// (0x0004ef80) bg_button_pane_cp06

0xec39,	// (0x00050bdb) dialer_ne_clear_pane_g1

0x35dc,	// (0x0004557e) navi_pane_g2

0x360a,	// (0x000455ac) navi_pane_g3

0x0002,

0xf404,	// (0x000513a6) navi_pane_g

0x3633,	// (0x000455d5) navi_pane_mv_g2

0x365a,	// (0x000455fc) navi_pane_mv_g5

0x3662,	// (0x00045604) navi_pane_mv_t1

0xc50b,	// (0x0004e4ad) main_clock2_pane

0x5b4a,	// (0x00047aec) main_clock2_list_pane_ParamLimits

0x5b4a,	// (0x00047aec) main_clock2_list_pane

0x5b82,	// (0x00047b24) main_clock2_pane_t1_ParamLimits

0x5b82,	// (0x00047b24) main_clock2_pane_t1

0x5bbe,	// (0x00047b60) main_clock2_pane_t2_ParamLimits

0x5bbe,	// (0x00047b60) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x00051663) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x00051663) main_clock2_pane_t

0x5c5b,	// (0x00047bfd) popup_clock_analogue_window_cp03_ParamLimits

0x5c5b,	// (0x00047bfd) popup_clock_analogue_window_cp03

0x5c80,	// (0x00047c22) popup_clock_digital_window_cp02_ParamLimits

0x5c80,	// (0x00047c22) popup_clock_digital_window_cp02

0x5cf1,	// (0x00047c93) main_clock2_list_single_pane_ParamLimits

0x5cf1,	// (0x00047c93) main_clock2_list_single_pane

0xcfde,	// (0x0004ef80) list_highlight_pane_cp05

0xec41,	// (0x00050be3) main_clock2_list_single_pane_t1

0x2645,	// (0x000445e7) popup_toolbar_window_cp04_ParamLimits

0x5179,	// (0x0004711b) camera2_autofocus_pane_g2_ParamLimits

0x5179,	// (0x0004711b) camera2_autofocus_pane_g2

0x5185,	// (0x00047127) camera2_autofocus_pane_g3_ParamLimits

0x5185,	// (0x00047127) camera2_autofocus_pane_g3

0x5191,	// (0x00047133) camera2_autofocus_pane_g4_ParamLimits

0x5191,	// (0x00047133) camera2_autofocus_pane_g4

0x519d,	// (0x0004713f) camera2_autofocus_pane_g5_ParamLimits

0x519d,	// (0x0004713f) camera2_autofocus_pane_g5

0x0004,

0xf628,	// (0x000515ca) camera2_autofocus_pane_g_ParamLimits

0xf628,	// (0x000515ca) camera2_autofocus_pane_g

0x5346,	// (0x000472e8) camera2_autofocus_pane_cp_g2

0x534e,	// (0x000472f0) camera2_autofocus_pane_cp_g3

0x5356,	// (0x000472f8) camera2_autofocus_pane_cp_g4

0x535e,	// (0x00047300) camera2_autofocus_pane_cp_g5

0x0004,

0xf67c,	// (0x0005161e) camera2_autofocus_pane_cp_g

0x5a05,	// (0x000479a7) popup_dialer_spcha_window

0xa620,	// (0x0004c5c2) bg_popup_sub_pane_cp07

0xec4f,	// (0x00050bf1) list_spcha_pane

0xec57,	// (0x00050bf9) list_single_spcha_pane_ParamLimits

0xec57,	// (0x00050bf9) list_single_spcha_pane

0xa620,	// (0x0004c5c2) list_highlight_pane_cp06

0xec68,	// (0x00050c0a) list_single_spcha_pane_t1

0xde3b,	// (0x0004fddd) popup_call2_audio_out_window_g4_ParamLimits

0xde3b,	// (0x0004fddd) popup_call2_audio_out_window_g4

0xa620,	// (0x0004c5c2) main_imed2_pane

0xe41a,	// (0x000503bc) popup_imed_adjust2_window

0x4556,	// (0x000464f8) popup_imed_trans_window_ParamLimits

0x4556,	// (0x000464f8) popup_imed_trans_window

0xe677,	// (0x00050619) popup_blid_sat_info2_window_t1

0xe685,	// (0x00050627) popup_blid_sat_info2_window_t2

0x000a,

0xf5d4,	// (0x00051576) popup_blid_sat_info2_window_t

0x5d9b,	// (0x00047d3d) aid_size_cell_colour_35

0x5dbb,	// (0x00047d5d) aid_size_cell_colour_112

0x5ddb,	// (0x00047d7d) aid_size_cell_effect

0xe3f2,	// (0x00050394) bg_tb_trans_pane_cp02

0xcb2d,	// (0x0004eacf) heading_imed_pane

0x5dfb,	// (0x00047d9d) listscroll_imed_pane

0xec76,	// (0x00050c18) heading_imed_pane_g1

0xec7e,	// (0x00050c20) heading_imed_pane_t1

0xec8c,	// (0x00050c2e) grid_imed_colour_35_pane_ParamLimits

0xec8c,	// (0x00050c2e) grid_imed_colour_35_pane

0x5e07,	// (0x00047da9) grid_imed_effect_pane

0xeca3,	// (0x00050c45) list_imed_aspect_pane

0x5e1d,	// (0x00047dbf) scroll_pane_cp027_ParamLimits

0x5e1d,	// (0x00047dbf) scroll_pane_cp027

0x5e2e,	// (0x00047dd0) cell_imed_effect_pane_ParamLimits

0x5e2e,	// (0x00047dd0) cell_imed_effect_pane

0xecab,	// (0x00050c4d) cell_imed_colour_pane_ParamLimits

0xecab,	// (0x00050c4d) cell_imed_colour_pane

0xeced,	// (0x00050c8f) cell_imed_colour_pane_g1_ParamLimits

0xeced,	// (0x00050c8f) cell_imed_colour_pane_g1

0xecfe,	// (0x00050ca0) hgihlgiht_grid_pane_cp016_ParamLimits

0xecfe,	// (0x00050ca0) hgihlgiht_grid_pane_cp016

0x5e55,	// (0x00047df7) cell_imed_effect_pane_g1

0x5e5d,	// (0x00047dff) grid_highlight_pane_cp017

0xed0f,	// (0x00050cb1) list_imed_single_pane_ParamLimits

0xed0f,	// (0x00050cb1) list_imed_single_pane

0xa620,	// (0x0004c5c2) list_highlight_pane_cp07

0xed24,	// (0x00050cc6) list_imed_aspect_pane_comp1_t1

0xe3f2,	// (0x00050394) bg_tb_trans_pane_cp05

0xed46,	// (0x00050ce8) popup_imed_adjust2_window_g1

0xed6d,	// (0x00050d0f) popup_imed_adjust2_window_t1

0xed85,	// (0x00050d27) slider_imed_adjust_pane

0xed99,	// (0x00050d3b) slider_imed_adjust_pane_g1

0xeda9,	// (0x00050d4b) slider_imed_adjust_pane_g2

0xedb9,	// (0x00050d5b) slider_imed_adjust_pane_g3

0xedca,	// (0x00050d6c) slider_imed_adjust_pane_g4

0x0003,

0x042d,	// (0x000423cf) slider_imed_adjust_pane_g

0x5e66,	// (0x00047e08) aid_size_cell_clipart2

0x5e72,	// (0x00047e14) grid_imed_clipart_pane

0xeddb,	// (0x00050d7d) scroll_pane_cp031

0x5e7c,	// (0x00047e1e) cell_imed_clipart_pane_ParamLimits

0x5e7c,	// (0x00047e1e) cell_imed_clipart_pane

0x5e9e,	// (0x00047e40) cell_imed_clipart_pane_g1

0xa620,	// (0x0004c5c2) grid_highlight_pane_cp014

0x5b5f,	// (0x00047b01) main_clock2_pane_g1_ParamLimits

0x5b5f,	// (0x00047b01) main_clock2_pane_g1

0x5c9c,	// (0x00047c3e) aid_call2_pane_cp10

0x5cae,	// (0x00047c50) aid_call_pane_cp10

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g1

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g2

0x5cc0,	// (0x00047c62) popup_clock_analogue_window_cp10_g3

0x5cc0,	// (0x00047c62) popup_clock_analogue_window_cp10_g4

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x0005166e) popup_clock_analogue_window_cp10_g

0x5cd2,	// (0x00047c74) popup_clock_analogue_window_cp10_t1

0x5d03,	// (0x00047ca5) clock_digital_number_pane_cp10_ParamLimits

0x5d03,	// (0x00047ca5) clock_digital_number_pane_cp10

0x5d1b,	// (0x00047cbd) clock_digital_number_pane_cp11_ParamLimits

0x5d1b,	// (0x00047cbd) clock_digital_number_pane_cp11

0x5d33,	// (0x00047cd5) clock_digital_number_pane_cp12_ParamLimits

0x5d33,	// (0x00047cd5) clock_digital_number_pane_cp12

0x5d4b,	// (0x00047ced) clock_digital_number_pane_cp13_ParamLimits

0x5d4b,	// (0x00047ced) clock_digital_number_pane_cp13

0x5d63,	// (0x00047d05) clock_digital_separator_pane_cp10_ParamLimits

0x5d63,	// (0x00047d05) clock_digital_separator_pane_cp10

0x5d7b,	// (0x00047d1d) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d7b,	// (0x00047d1d) popup_clock_digital_window_cp02_t1

0xc430,	// (0x0004e3d2) clock_digital_number_pane_cp10_g1

0xc430,	// (0x0004e3d2) clock_digital_number_pane_cp10_g2

0x0001,

0x0436,	// (0x000423d8) clock_digital_number_pane_cp10_g

0xc430,	// (0x0004e3d2) clock_digital_separator_pane_cp10_g1

0xc430,	// (0x0004e3d2) clock_digital_separator_pane_g2_cp10

0xcfae,	// (0x0004ef50) navi_pane_vded_g4

0xcfb7,	// (0x0004ef59) navi_pane_vded_g5

0xcfc0,	// (0x0004ef62) navi_pane_vded_t1

0xa620,	// (0x0004c5c2) main_vded_pane

0x5ea7,	// (0x00047e49) main_vded_pane_g1

0x5eb1,	// (0x00047e53) main_vded_pane_g2

0x5ebb,	// (0x00047e5d) main_vded_pane_g3

0x0002,

0xf6d7,	// (0x00051679) main_vded_pane_g

0x5ec5,	// (0x00047e67) main_vded_pane_t1

0x5ed3,	// (0x00047e75) main_vded_pane_t2

0x0001,

0xf6de,	// (0x00051680) main_vded_pane_t

0x5ee1,	// (0x00047e83) vded_slider_pane

0x5ee9,	// (0x00047e8b) vded_video_pane

0xede3,	// (0x00050d85) vded_video_pane_g1

0x5ef1,	// (0x00047e93) vded_video_pane_g2

0xe839,	// (0x000507db) vded_video_pane_g3

0x0002,

0xf6e3,	// (0x00051685) vded_video_pane_g

0xeded,	// (0x00050d8f) vded_slider_pane_g1

0xe58c,	// (0x0005052e) vded_slider_pane_g2

0xedf6,	// (0x00050d98) vded_slider_pane_g3

0xedff,	// (0x00050da1) vded_slider_pane_g4

0xee08,	// (0x00050daa) vded_slider_pane_g5

0x0004,

0x044e,	// (0x000423f0) vded_slider_pane_g

0x58e6,	// (0x00047888) mup3_rocker_pane_ParamLimits

0x58e6,	// (0x00047888) mup3_rocker_pane

0x5efa,	// (0x00047e9c) mup3_control_keys_pane_g1

0x5f02,	// (0x00047ea4) mup3_control_keys_pane_g2

0x5f0a,	// (0x00047eac) mup3_control_keys_pane_g3

0x5f12,	// (0x00047eb4) mup3_control_keys_pane_g4

0x0003,

0xf6ea,	// (0x0005168c) mup3_control_keys_pane_g

0x1875,	// (0x00043817) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1875,	// (0x00043817) popup_toolbar2_fixed_window_cp01

0x591a,	// (0x000478bc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x591a,	// (0x000478bc) popup_toolbar2_fixed_window_cp02

0xd77a,	// (0x0004f71c) popup_call2_audio_second_window_t4_ParamLimits

0xd77a,	// (0x0004f71c) popup_call2_audio_second_window_t4

0xdca8,	// (0x0004fc4a) popup_call2_audio_first_window_t6_ParamLimits

0xdca8,	// (0x0004fc4a) popup_call2_audio_first_window_t6

0xdf3e,	// (0x0004fee0) popup_call2_audio_out_window_t6_ParamLimits

0xdf3e,	// (0x0004fee0) popup_call2_audio_out_window_t6

0xa620,	// (0x0004c5c2) main_vitu_pane

0x5f22,	// (0x00047ec4) aid_size_cell_itu_ParamLimits

0x5f22,	// (0x00047ec4) aid_size_cell_itu

0xd5ee,	// (0x0004f590) bg_popup_window_pane_cp08_ParamLimits

0xd5ee,	// (0x0004f590) bg_popup_window_pane_cp08

0x5f38,	// (0x00047eda) field_vitu_entry_pane_ParamLimits

0x5f38,	// (0x00047eda) field_vitu_entry_pane

0x5f4f,	// (0x00047ef1) grid_vitu_function_pane_ParamLimits

0x5f4f,	// (0x00047ef1) grid_vitu_function_pane

0x5f6a,	// (0x00047f0c) grid_vitu_itu_pane_ParamLimits

0x5f6a,	// (0x00047f0c) grid_vitu_itu_pane

0x5f88,	// (0x00047f2a) cell_vitu_itu_pane_ParamLimits

0x5f88,	// (0x00047f2a) cell_vitu_itu_pane

0x5faa,	// (0x00047f4c) cell_vitu_function_pane_ParamLimits

0x5faa,	// (0x00047f4c) cell_vitu_function_pane

0xd5ee,	// (0x0004f590) bg_popup_sub_pane_cp08_ParamLimits

0xd5ee,	// (0x0004f590) bg_popup_sub_pane_cp08

0x5fc3,	// (0x00047f65) field_vitu_entry_pane_t1_ParamLimits

0x5fc3,	// (0x00047f65) field_vitu_entry_pane_t1

0xee29,	// (0x00050dcb) field_vitu_entry_pane_t2_ParamLimits

0xee29,	// (0x00050dcb) field_vitu_entry_pane_t2

0x0001,

0xf6f3,	// (0x00051695) field_vitu_entry_pane_t_ParamLimits

0xf6f3,	// (0x00051695) field_vitu_entry_pane_t

0xee46,	// (0x00050de8) bg_button_pane_cp05_ParamLimits

0xee46,	// (0x00050de8) bg_button_pane_cp05

0x5fe1,	// (0x00047f83) cell_vitu_itu_pane_g1

0x5ff9,	// (0x00047f9b) cell_vitu_itu_pane_t1_ParamLimits

0x5ff9,	// (0x00047f9b) cell_vitu_itu_pane_t1

0x600b,	// (0x00047fad) cell_vitu_itu_pane_t2_ParamLimits

0x600b,	// (0x00047fad) cell_vitu_itu_pane_t2

0x0002,

0xf6f8,	// (0x0005169a) cell_vitu_itu_pane_t_ParamLimits

0xf6f8,	// (0x0005169a) cell_vitu_itu_pane_t

0xee54,	// (0x00050df6) bg_button_pane_cp07

0x6040,	// (0x00047fe2) cell_vitu_function_pane_g1

0xa698,	// (0x0004c63a) main_calc_pane_g1

0x16b5,	// (0x00043657) aid_visual_content_pane

0xa620,	// (0x0004c5c2) main_vradio_pane

0x6049,	// (0x00047feb) main_vradio_pane_g1_ParamLimits

0x6049,	// (0x00047feb) main_vradio_pane_g1

0xee5e,	// (0x00050e00) main_vradio_pane_g2_ParamLimits

0xee5e,	// (0x00050e00) main_vradio_pane_g2

0x0001,

0xf6ff,	// (0x000516a1) main_vradio_pane_g_ParamLimits

0xf6ff,	// (0x000516a1) main_vradio_pane_g

0x6062,	// (0x00048004) main_vradio_pane_t1_ParamLimits

0x6062,	// (0x00048004) main_vradio_pane_t1

0x6077,	// (0x00048019) main_vradio_pane_t2_ParamLimits

0x6077,	// (0x00048019) main_vradio_pane_t2

0xee6b,	// (0x00050e0d) main_vradio_pane_t3_ParamLimits

0xee6b,	// (0x00050e0d) main_vradio_pane_t3

0x0002,

0xf704,	// (0x000516a6) main_vradio_pane_t_ParamLimits

0xf704,	// (0x000516a6) main_vradio_pane_t

0x608c,	// (0x0004802e) vradio_rocker_control_pane_ParamLimits

0x608c,	// (0x0004802e) vradio_rocker_control_pane

0x609e,	// (0x00048040) vradio_station_info_pane_ParamLimits

0x609e,	// (0x00048040) vradio_station_info_pane

0xee7f,	// (0x00050e21) vradio_frequency_info_pane_ParamLimits

0xee7f,	// (0x00050e21) vradio_frequency_info_pane

0xe839,	// (0x000507db) vradio_station_info_pane_g1

0xee8e,	// (0x00050e30) vradio_station_info_pane_t1_ParamLimits

0xee8e,	// (0x00050e30) vradio_station_info_pane_t1

0xeeb0,	// (0x00050e52) vradio_station_info_pane_t2_ParamLimits

0xeeb0,	// (0x00050e52) vradio_station_info_pane_t2

0x0001,

0x047f,	// (0x00042421) vradio_station_info_pane_t_ParamLimits

0x047f,	// (0x00042421) vradio_station_info_pane_t

0xeec2,	// (0x00050e64) vradio_tuning_pane

0xeeca,	// (0x00050e6c) vradio_rocker_control_pane_g1

0xeed2,	// (0x00050e74) vradio_rocker_control_pane_g2

0xeeda,	// (0x00050e7c) vradio_rocker_control_pane_g3

0xeee2,	// (0x00050e84) vradio_rocker_control_pane_g4

0xeeea,	// (0x00050e8c) vradio_rocker_control_pane_g5

0x0004,

0x0484,	// (0x00042426) vradio_rocker_control_pane_g

0x60b0,	// (0x00048052) vradio_frequency_info_pane_g1

0xeef2,	// (0x00050e94) vradio_frequency_info_pane_t1_ParamLimits

0xeef2,	// (0x00050e94) vradio_frequency_info_pane_t1

0x60ba,	// (0x0004805c) vradio_tuning_pane_g1

0x60c5,	// (0x00048067) vradio_tuning_pane_t1

0xa656,	// (0x0004c5f8) area_side_right_pane_ParamLimits

0xa656,	// (0x0004c5f8) area_side_right_pane

0xe3b9,	// (0x0005035b) status_small_pane_g1

0xe3c1,	// (0x00050363) status_small_pane_g2

0xe3ca,	// (0x0005036c) status_small_pane_g3

0xe3d3,	// (0x00050375) status_small_pane_g4

0x0003,

0x0244,	// (0x000421e6) status_small_pane_g

0xe3dc,	// (0x0005037e) status_small_pane_t1

0xa620,	// (0x0004c5c2) main_video3_pane

0xef06,	// (0x00050ea8) cams_zoom_vslider_pane

0xef0e,	// (0x00050eb0) image3_wide_pane_ParamLimits

0xef0e,	// (0x00050eb0) image3_wide_pane

0xef28,	// (0x00050eca) image3_wide_small_pane

0xef34,	// (0x00050ed6) main_video3_pane_g1_ParamLimits

0xef34,	// (0x00050ed6) main_video3_pane_g1

0xef50,	// (0x00050ef2) main_video3_pane_g2_ParamLimits

0xef50,	// (0x00050ef2) main_video3_pane_g2

0x0001,

0x048f,	// (0x00042431) main_video3_pane_g_ParamLimits

0x048f,	// (0x00042431) main_video3_pane_g

0xef6c,	// (0x00050f0e) main_video3_pane_t1_ParamLimits

0xef6c,	// (0x00050f0e) main_video3_pane_t1

0xef97,	// (0x00050f39) main_video3_pane_t2_ParamLimits

0xef97,	// (0x00050f39) main_video3_pane_t2

0xefc2,	// (0x00050f64) main_video3_pane_t3_ParamLimits

0xefc2,	// (0x00050f64) main_video3_pane_t3

0x0002,

0x0494,	// (0x00042436) main_video3_pane_t_ParamLimits

0x0494,	// (0x00042436) main_video3_pane_t

0xefef,	// (0x00050f91) cams_zoom_vslider_pane_g1

0xeff8,	// (0x00050f9a) cams_zoom_vslider_pane_g2

0x0001,

0x049b,	// (0x0004243d) cams_zoom_vslider_pane_g

0xf000,	// (0x00050fa2) small_slider_vertical_pane

0xe839,	// (0x000507db) small_slider_vertical_pane_g1

0xe839,	// (0x000507db) small_slider_vertical_pane_g2

0xf008,	// (0x00050faa) small_slider_vertical_pane_g3

0x0002,

0xf70b,	// (0x000516ad) small_slider_vertical_pane_g

0xa620,	// (0x0004c5c2) main_hwr_training_pane

0xf011,	// (0x00050fb3) hwr_training_instruct_pane_ParamLimits

0xf011,	// (0x00050fb3) hwr_training_instruct_pane

0x60d4,	// (0x00048076) hwr_training_navi_pane_ParamLimits

0x60d4,	// (0x00048076) hwr_training_navi_pane

0x60f3,	// (0x00048095) hwr_training_write_pane_ParamLimits

0x60f3,	// (0x00048095) hwr_training_write_pane

0xa620,	// (0x0004c5c2) bg_frame_shadow_pane

0xf048,	// (0x00050fea) hwr_training_write_pane_g1

0xf050,	// (0x00050ff2) hwr_training_write_pane_g2

0xf058,	// (0x00050ffa) hwr_training_write_pane_g3

0xf060,	// (0x00051002) hwr_training_write_pane_g4

0xf068,	// (0x0005100a) hwr_training_write_pane_g5

0xf070,	// (0x00051012) hwr_training_write_pane_g6

0xf078,	// (0x0005101a) hwr_training_write_pane_g7

0x0006,

0x04a7,	// (0x00042449) hwr_training_write_pane_g

0xaacb,	// (0x0004ca6d) hwr_training_navi_pane_g1_ParamLimits

0xaacb,	// (0x0004ca6d) hwr_training_navi_pane_g1

0xaadd,	// (0x0004ca7f) hwr_training_navi_pane_g2_ParamLimits

0xaadd,	// (0x0004ca7f) hwr_training_navi_pane_g2

0xaaef,	// (0x0004ca91) hwr_training_navi_pane_g3_ParamLimits

0xaaef,	// (0x0004ca91) hwr_training_navi_pane_g3

0xaaff,	// (0x0004caa1) hwr_training_navi_pane_g4_ParamLimits

0xaaff,	// (0x0004caa1) hwr_training_navi_pane_g4

0x0004,

0xf712,	// (0x000516b4) hwr_training_navi_pane_g_ParamLimits

0xf712,	// (0x000516b4) hwr_training_navi_pane_g

0xab0c,	// (0x0004caae) hwr_training_navi_pane_t1

0x613b,	// (0x000480dd) list_single_hwr_training_instruct_pane_ParamLimits

0x613b,	// (0x000480dd) list_single_hwr_training_instruct_pane

0xf080,	// (0x00051022) list_single_hwr_training_instruct_pane_t1

0xe779,	// (0x0005071b) bg_frame_shadow_pane_g1

0xf08f,	// (0x00051031) bg_frame_shadow_pane_g2

0xf097,	// (0x00051039) bg_frame_shadow_pane_g3

0xf09f,	// (0x00051041) bg_frame_shadow_pane_g4

0xf0a7,	// (0x00051049) bg_frame_shadow_pane_g5

0xf0af,	// (0x00051051) bg_frame_shadow_pane_g6

0xf0b7,	// (0x00051059) bg_frame_shadow_pane_g7

0xc5c4,	// (0x0004e566) bg_frame_shadow_pane_g8

0x0007,

0xf71d,	// (0x000516bf) bg_frame_shadow_pane_g

0xa620,	// (0x0004c5c2) main_video_tele_dialer_pane

0x6150,	// (0x000480f2) aid_size_cell_video_keypad_ParamLimits

0x6150,	// (0x000480f2) aid_size_cell_video_keypad

0x616a,	// (0x0004810c) grid_video_dialer_keypad_pane_ParamLimits

0x616a,	// (0x0004810c) grid_video_dialer_keypad_pane

0x61b4,	// (0x00048156) video_down_pane_cp_ParamLimits

0x61b4,	// (0x00048156) video_down_pane_cp

0x61c4,	// (0x00048166) cell_video_dialer_keypad_pane_ParamLimits

0x61c4,	// (0x00048166) cell_video_dialer_keypad_pane

0xf0db,	// (0x0005107d) bg_button_pane_cp08_ParamLimits

0xf0db,	// (0x0005107d) bg_button_pane_cp08

0x61e6,	// (0x00048188) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61e6,	// (0x00048188) cell_video_dialer_keypad_pane_g1

0x58d0,	// (0x00047872) mup3_rocker2_pane_ParamLimits

0x58d0,	// (0x00047872) mup3_rocker2_pane

0xe839,	// (0x000507db) mup3_rocker2_pane_g1

0x4437,	// (0x000463d9) main_dialer2_pane

0xa620,	// (0x0004c5c2) main_mp4_pane

0xab22,	// (0x0004cac4) main_mp4_pane_g1_ParamLimits

0xab22,	// (0x0004cac4) main_mp4_pane_g1

0xab22,	// (0x0004cac4) main_mp4_pane_g2_ParamLimits

0xab22,	// (0x0004cac4) main_mp4_pane_g2

0x6220,	// (0x000481c2) main_mp4_pane_g3_ParamLimits

0x6220,	// (0x000481c2) main_mp4_pane_g3

0xab30,	// (0x0004cad2) main_mp4_pane_g4_ParamLimits

0xab30,	// (0x0004cad2) main_mp4_pane_g4

0xab58,	// (0x0004cafa) main_mp4_pane_g5_ParamLimits

0xab58,	// (0x0004cafa) main_mp4_pane_g5

0x0005,

0xf738,	// (0x000516da) main_mp4_pane_g_ParamLimits

0xf738,	// (0x000516da) main_mp4_pane_g

0xaba8,	// (0x0004cb4a) main_mp4_pane_t1_ParamLimits

0xaba8,	// (0x0004cb4a) main_mp4_pane_t1

0xac04,	// (0x0004cba6) main_mp4_pane_t2_ParamLimits

0xac04,	// (0x0004cba6) main_mp4_pane_t2

0x625c,	// (0x000481fe) main_mp4_pane_t3_ParamLimits

0x625c,	// (0x000481fe) main_mp4_pane_t3

0xac56,	// (0x0004cbf8) main_mp4_pane_t4_ParamLimits

0xac56,	// (0x0004cbf8) main_mp4_pane_t4

0x0003,

0xf745,	// (0x000516e7) main_mp4_pane_t_ParamLimits

0xf745,	// (0x000516e7) main_mp4_pane_t

0xac9a,	// (0x0004cc3c) mp4_progress_pane_ParamLimits

0xac9a,	// (0x0004cc3c) mp4_progress_pane

0xace4,	// (0x0004cc86) mp4_rocker_pane_ParamLimits

0xace4,	// (0x0004cc86) mp4_rocker_pane

0x6284,	// (0x00048226) mp4_progress_pane_t1

0x629d,	// (0x0004823f) mp4_progress_pane_t2

0x0001,

0xf74e,	// (0x000516f0) mp4_progress_pane_t

0x62b6,	// (0x00048258) mup_progress_pane_cp04

0xe839,	// (0x000507db) mp4_rocker_pane_g1

0x62c2,	// (0x00048264) aid_cell_size_keypad2_ParamLimits

0x62c2,	// (0x00048264) aid_cell_size_keypad2

0x62d8,	// (0x0004827a) dialer2_ne_pane_ParamLimits

0x62d8,	// (0x0004827a) dialer2_ne_pane

0x62f2,	// (0x00048294) grid_dialer2_keypad_pane_ParamLimits

0x62f2,	// (0x00048294) grid_dialer2_keypad_pane

0xe61e,	// (0x000505c0) bg_popup_call_pane_cp07_ParamLimits

0xe61e,	// (0x000505c0) bg_popup_call_pane_cp07

0x630e,	// (0x000482b0) dialer2_ne_pane_t1_ParamLimits

0x630e,	// (0x000482b0) dialer2_ne_pane_t1

0x635b,	// (0x000482fd) cell_dialer2_keypad_pane_ParamLimits

0x635b,	// (0x000482fd) cell_dialer2_keypad_pane

0x637d,	// (0x0004831f) bg_button_pane_pane_cp04_ParamLimits

0x637d,	// (0x0004831f) bg_button_pane_pane_cp04

0x6389,	// (0x0004832b) cell_dialer2_keypad_pane_g1_ParamLimits

0x6389,	// (0x0004832b) cell_dialer2_keypad_pane_g1

0x2519,	// (0x000444bb) aid_placing_vt_set_content_ParamLimits

0x2519,	// (0x000444bb) aid_placing_vt_set_content

0x2541,	// (0x000444e3) aid_placing_vt_set_title_ParamLimits

0x2541,	// (0x000444e3) aid_placing_vt_set_title

0xa620,	// (0x0004c5c2) main_image3_pane

0x644f,	// (0x000483f1) area_side_right_pane_cp01_ParamLimits

0x644f,	// (0x000483f1) area_side_right_pane_cp01

0xab22,	// (0x0004cac4) main_image3_pane_g1_ParamLimits

0xab22,	// (0x0004cac4) main_image3_pane_g1

0x6466,	// (0x00048408) main_image3_pane_g2_ParamLimits

0x6466,	// (0x00048408) main_image3_pane_g2

0x648e,	// (0x00048430) main_image3_pane_g3_ParamLimits

0x648e,	// (0x00048430) main_image3_pane_g3

0x64b8,	// (0x0004845a) main_image3_pane_g4_ParamLimits

0x64b8,	// (0x0004845a) main_image3_pane_g4

0x0003,

0xf75d,	// (0x000516ff) main_image3_pane_g_ParamLimits

0xf75d,	// (0x000516ff) main_image3_pane_g

0x64e2,	// (0x00048484) main_image3_pane_t1_ParamLimits

0x64e2,	// (0x00048484) main_image3_pane_t1

0x653a,	// (0x000484dc) main_image3_pane_t2_ParamLimits

0x653a,	// (0x000484dc) main_image3_pane_t2

0x658c,	// (0x0004852e) main_image3_pane_t3_ParamLimits

0x658c,	// (0x0004852e) main_image3_pane_t3

0x0003,

0xf766,	// (0x00051708) main_image3_pane_t_ParamLimits

0xf766,	// (0x00051708) main_image3_pane_t

0xd5ee,	// (0x0004f590) grid_sctrl_middle_pane_cp01_ParamLimits

0xd5ee,	// (0x0004f590) grid_sctrl_middle_pane_cp01

0x6614,	// (0x000485b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x6614,	// (0x000485b6) cell_sctrl_middle_pane_cp01

0x6631,	// (0x000485d3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6631,	// (0x000485d3) cell_sctrl_middle_pane_cp01_g1

0xa620,	// (0x0004c5c2) main_call4_pane

0x6647,	// (0x000485e9) aid_size_button_call4_ParamLimits

0x6647,	// (0x000485e9) aid_size_button_call4

0x6678,	// (0x0004861a) call4_windows_pane_ParamLimits

0x6678,	// (0x0004861a) call4_windows_pane

0x6698,	// (0x0004863a) grid_call4_button_pane_ParamLimits

0x6698,	// (0x0004863a) grid_call4_button_pane

0x66c5,	// (0x00048667) call4_windows_conf_pane

0x66dc,	// (0x0004867e) popup_call4_audio_first_window_ParamLimits

0x66dc,	// (0x0004867e) popup_call4_audio_first_window

0x6728,	// (0x000486ca) popup_call4_audio_second_window_ParamLimits

0x6728,	// (0x000486ca) popup_call4_audio_second_window

0x673c,	// (0x000486de) popup_call4_audio_wait_window_ParamLimits

0x673c,	// (0x000486de) popup_call4_audio_wait_window

0x674a,	// (0x000486ec) cell_call4_button_pane_ParamLimits

0x674a,	// (0x000486ec) cell_call4_button_pane

0x6773,	// (0x00048715) bg_button_pane_cp09_ParamLimits

0x6773,	// (0x00048715) bg_button_pane_cp09

0x677f,	// (0x00048721) cell_call4_button_pane_g1_ParamLimits

0x677f,	// (0x00048721) cell_call4_button_pane_g1

0x67a5,	// (0x00048747) cell_call4_button_pane_t1_ParamLimits

0x67a5,	// (0x00048747) cell_call4_button_pane_t1

0x6805,	// (0x000487a7) popup_call4_audio_conf_window_ParamLimits

0x6805,	// (0x000487a7) popup_call4_audio_conf_window

0x5930,	// (0x000478d2) mup3_progress_pane_t1_ParamLimits

0x594f,	// (0x000478f1) mup3_progress_pane_t2_ParamLimits

0xeb28,	// (0x00050aca) mup3_progress_pane_t3_ParamLimits

0xf6a5,	// (0x00051647) mup3_progress_pane_t_ParamLimits

0xeb45,	// (0x00050ae7) mup_progress_pane_cp03_ParamLimits

0x5f1a,	// (0x00047ebc) mup3_control_keys_pane_g4_copy1

0xacc8,	// (0x0004cc6a) mp4_rocker2_pane_ParamLimits

0xacc8,	// (0x0004cc6a) mp4_rocker2_pane

0x6819,	// (0x000487bb) mp4_rocker2_pane_g1

0x6821,	// (0x000487c3) mp4_rocker2_pane_g2

0xad36,	// (0x0004ccd8) mp4_rocker2_pane_g3

0xad3e,	// (0x0004cce0) mp4_rocker2_pane_g4

0xad46,	// (0x0004cce8) mp4_rocker2_pane_g5

0x0004,

0xf76f,	// (0x00051711) mp4_rocker2_pane_g

0xa620,	// (0x0004c5c2) main_camera4_pane

0xa620,	// (0x0004c5c2) main_video4_pane

0x6182,	// (0x00048124) main_video_tele_dialer_pane_t1_ParamLimits

0x6182,	// (0x00048124) main_video_tele_dialer_pane_t1

0x619b,	// (0x0004813d) main_video_tele_dialer_pane_t2_ParamLimits

0x619b,	// (0x0004813d) main_video_tele_dialer_pane_t2

0x0001,

0xf72e,	// (0x000516d0) main_video_tele_dialer_pane_t_ParamLimits

0xf72e,	// (0x000516d0) main_video_tele_dialer_pane_t

0x6841,	// (0x000487e3) cam4_autofocus_pane_ParamLimits

0x6841,	// (0x000487e3) cam4_autofocus_pane

0x6857,	// (0x000487f9) cam4_image_uncrop_pane_ParamLimits

0x6857,	// (0x000487f9) cam4_image_uncrop_pane

0x6871,	// (0x00048813) cam4_indicators_pane_ParamLimits

0x6871,	// (0x00048813) cam4_indicators_pane

0x689c,	// (0x0004883e) main_camera4_pane_g1_ParamLimits

0x689c,	// (0x0004883e) main_camera4_pane_g1

0x68af,	// (0x00048851) main_camera4_pane_g2_ParamLimits

0x68af,	// (0x00048851) main_camera4_pane_g2

0x68c2,	// (0x00048864) main_camera4_pane_g3_ParamLimits

0x68c2,	// (0x00048864) main_camera4_pane_g3

0x68d5,	// (0x00048877) main_camera4_pane_g4_ParamLimits

0x68d5,	// (0x00048877) main_camera4_pane_g4

0x68e8,	// (0x0004888a) main_camera4_pane_g5_ParamLimits

0x68e8,	// (0x0004888a) main_camera4_pane_g5

0x0005,

0xf77a,	// (0x0005171c) main_camera4_pane_g_ParamLimits

0xf77a,	// (0x0005171c) main_camera4_pane_g

0x690c,	// (0x000488ae) main_camera4_pane_t1_ParamLimits

0x690c,	// (0x000488ae) main_camera4_pane_t1

0xeaad,	// (0x00050a4f) bg_tb_trans_pane_cp06

0xad72,	// (0x0004cd14) cam4_indicators_pane_g1

0xad83,	// (0x0004cd25) cam4_indicators_pane_g2

0x0002,

0xf795,	// (0x00051737) cam4_indicators_pane_g

0xada1,	// (0x0004cd43) cam4_indicators_pane_t1

0x6982,	// (0x00048924) main_video4_pane_g1_ParamLimits

0x6982,	// (0x00048924) main_video4_pane_g1

0x6995,	// (0x00048937) main_video4_pane_g2_ParamLimits

0x6995,	// (0x00048937) main_video4_pane_g2

0x69a9,	// (0x0004894b) main_video4_pane_g3_ParamLimits

0x69a9,	// (0x0004894b) main_video4_pane_g3

0x69bd,	// (0x0004895f) main_video4_pane_g4_ParamLimits

0x69bd,	// (0x0004895f) main_video4_pane_g4

0x0004,

0xf79c,	// (0x0005173e) main_video4_pane_g_ParamLimits

0xf79c,	// (0x0005173e) main_video4_pane_g

0x69e5,	// (0x00048987) vid4_indicators_pane_ParamLimits

0x69e5,	// (0x00048987) vid4_indicators_pane

0x6a15,	// (0x000489b7) video4_image_uncrop_cif_pane_ParamLimits

0x6a15,	// (0x000489b7) video4_image_uncrop_cif_pane

0x6a2f,	// (0x000489d1) video4_image_uncrop_nhd_pane_ParamLimits

0x6a2f,	// (0x000489d1) video4_image_uncrop_nhd_pane

0x6857,	// (0x000487f9) video4_image_uncrop_vga_pane_ParamLimits

0x6857,	// (0x000487f9) video4_image_uncrop_vga_pane

0xadc3,	// (0x0004cd65) bg_tb_trans_pane_cp07

0x6a43,	// (0x000489e5) vid4_indicators_pane_g1

0x6a50,	// (0x000489f2) vid4_indicators_pane_g2

0x6a5d,	// (0x000489ff) vid4_indicators_pane_g3

0x0004,

0xf7a7,	// (0x00051749) vid4_indicators_pane_g

0x6a82,	// (0x00048a24) vid4_indicators_pane_t1

0x6a94,	// (0x00048a36) cam4_autofocus_pane_g1

0x6a9c,	// (0x00048a3e) cam4_autofocus_pane_g2

0x6aa4,	// (0x00048a46) cam4_autofocus_pane_g3

0x0002,

0xf7b2,	// (0x00051754) cam4_autofocus_pane_g

0x6aac,	// (0x00048a4e) cam4_autofocus_pane_g3_copy1

0xf0bf,	// (0x00051061) video_down_pane_cp_t1

0xf0cd,	// (0x0005106f) video_down_pane_cp_t2

0x0001,

0x04d7,	// (0x00042479) video_down_pane_cp_t

0xd5ee,	// (0x0004f590) popup_vitu2_window_ParamLimits

0xd5ee,	// (0x0004f590) popup_vitu2_window

0x6ab4,	// (0x00048a56) aid_size_cell2_itu2_ParamLimits

0x6ab4,	// (0x00048a56) aid_size_cell2_itu2

0x6ada,	// (0x00048a7c) aid_size_cell_itu2_ParamLimits

0x6ada,	// (0x00048a7c) aid_size_cell_itu2

0x6b36,	// (0x00048ad8) bg_popup_window_pane_cp09_ParamLimits

0x6b36,	// (0x00048ad8) bg_popup_window_pane_cp09

0x6b44,	// (0x00048ae6) field_vitu2_entry_pane_ParamLimits

0x6b44,	// (0x00048ae6) field_vitu2_entry_pane

0x6b6a,	// (0x00048b0c) grid_vitu2_function_pane_ParamLimits

0x6b6a,	// (0x00048b0c) grid_vitu2_function_pane

0x6bbb,	// (0x00048b5d) grid_vitu2_itu_pane_ParamLimits

0x6bbb,	// (0x00048b5d) grid_vitu2_itu_pane

0x6c4e,	// (0x00048bf0) cell_vitu2_itu_pane_ParamLimits

0x6c4e,	// (0x00048bf0) cell_vitu2_itu_pane

0x6c72,	// (0x00048c14) cell_vitu2_function_pane_ParamLimits

0x6c72,	// (0x00048c14) cell_vitu2_function_pane

0x6cb1,	// (0x00048c53) bg_popup_call_pane_cp08_ParamLimits

0x6cb1,	// (0x00048c53) bg_popup_call_pane_cp08

0x6cca,	// (0x00048c6c) field_vitu2_entry_pane_g1

0x6cd6,	// (0x00048c78) field_vitu2_entry_pane_g2

0x0002,

0xf7b9,	// (0x0005175b) field_vitu2_entry_pane_g

0x0d4f,	// (0x00042cf1) field_vitu2_entry_pane_t1_ParamLimits

0x0d4f,	// (0x00042cf1) field_vitu2_entry_pane_t1

0xaddb,	// (0x0004cd7d) field_vitu2_entry_pane_t2_ParamLimits

0xaddb,	// (0x0004cd7d) field_vitu2_entry_pane_t2

0x0001,

0xf7c0,	// (0x00051762) field_vitu2_entry_pane_t_ParamLimits

0xf7c0,	// (0x00051762) field_vitu2_entry_pane_t

0x6cf8,	// (0x00048c9a) bg_button_pane_cp010_ParamLimits

0x6cf8,	// (0x00048c9a) bg_button_pane_cp010

0x6d06,	// (0x00048ca8) cell_vitu2_itu_pane_g1

0x6d24,	// (0x00048cc6) cell_vitu2_itu_pane_t1_ParamLimits

0x6d24,	// (0x00048cc6) cell_vitu2_itu_pane_t1

0x0d7e,	// (0x00042d20) cell_vitu2_itu_pane_t2_ParamLimits

0x0d7e,	// (0x00042d20) cell_vitu2_itu_pane_t2

0x0002,

0xf7ca,	// (0x0005176c) cell_vitu2_itu_pane_t_ParamLimits

0xf7ca,	// (0x0005176c) cell_vitu2_itu_pane_t

0xd5ee,	// (0x0004f590) bg_button_pane_cp011

0x6d8a,	// (0x00048d2c) cell_vitu2_function_pane_g1

0xa620,	// (0x0004c5c2) main_myfav_hc_pane

0x65dc,	// (0x0004857e) popup_image3_note_pane_ParamLimits

0x65dc,	// (0x0004857e) popup_image3_note_pane

0x65f8,	// (0x0004859a) popup_image3_tool_bar_pane_ParamLimits

0x65f8,	// (0x0004859a) popup_image3_tool_bar_pane

0x0e02,	// (0x00042da4) cell_vitu2_itu_pane_t3_ParamLimits

0x0e02,	// (0x00042da4) cell_vitu2_itu_pane_t3

0xa620,	// (0x0004c5c2) bg_popup_trans_pane

0x6d9e,	// (0x00048d40) grid_image3_tool_bar_pane

0x6da8,	// (0x00048d4a) bg_popup_trans_pane_g1

0xc901,	// (0x0004e8a3) bg_popup_trans_pane_g2

0x6db0,	// (0x00048d52) bg_popup_trans_pane_g3

0x6db8,	// (0x00048d5a) bg_popup_trans_pane_g4

0x6dc0,	// (0x00048d62) bg_popup_trans_pane_g5

0x6dc8,	// (0x00048d6a) bg_popup_trans_pane_g6

0x6dd0,	// (0x00048d72) bg_popup_trans_pane_g7

0x6dd8,	// (0x00048d7a) bg_popup_trans_pane_g8

0xc8e1,	// (0x0004e883) bg_popup_trans_pane_g9

0x0008,

0xf7d1,	// (0x00051773) bg_popup_trans_pane_g

0x6de0,	// (0x00048d82) cell_image3_tool_bar_pane_ParamLimits

0x6de0,	// (0x00048d82) cell_image3_tool_bar_pane

0xe839,	// (0x000507db) cell_image3_tool_bar_pane_g1

0xa620,	// (0x0004c5c2) bg_popup_trans_pane_cp1

0x6df4,	// (0x00048d96) popup_image3_note_pane_t1

0x6e02,	// (0x00048da4) popup_image3_note_pane_t2

0x6e10,	// (0x00048db2) popup_image3_note_pane_t3

0x0002,

0xf7e4,	// (0x00051786) popup_image3_note_pane_t

0x6e1e,	// (0x00048dc0) popup_image3_note_pane_t3_copy1

0x6e2c,	// (0x00048dce) bg_myfav_hc_instruction_pane_ParamLimits

0x6e2c,	// (0x00048dce) bg_myfav_hc_instruction_pane

0x6e40,	// (0x00048de2) cell_myfav_contact_pane_ParamLimits

0x6e40,	// (0x00048de2) cell_myfav_contact_pane

0x6e5e,	// (0x00048e00) cell_myfav_contact_pane_cp1_ParamLimits

0x6e5e,	// (0x00048e00) cell_myfav_contact_pane_cp1

0x6e76,	// (0x00048e18) cell_myfav_contact_pane_cp2_ParamLimits

0x6e76,	// (0x00048e18) cell_myfav_contact_pane_cp2

0x6e8e,	// (0x00048e30) cell_myfav_contact_pane_cp3_ParamLimits

0x6e8e,	// (0x00048e30) cell_myfav_contact_pane_cp3

0x6ea5,	// (0x00048e47) cell_myfav_contact_pane_cp4_ParamLimits

0x6ea5,	// (0x00048e47) cell_myfav_contact_pane_cp4

0x6ebd,	// (0x00048e5f) cell_myfav_contact_pane_cp5_ParamLimits

0x6ebd,	// (0x00048e5f) cell_myfav_contact_pane_cp5

0x6ed1,	// (0x00048e73) cell_myfav_contact_pane_cp6_ParamLimits

0x6ed1,	// (0x00048e73) cell_myfav_contact_pane_cp6

0x6ee7,	// (0x00048e89) cell_myfav_contact_pane_cp7_ParamLimits

0x6ee7,	// (0x00048e89) cell_myfav_contact_pane_cp7

0x6f01,	// (0x00048ea3) listscroll_gen_pane_cp05

0x6f0a,	// (0x00048eac) main_myfav_hc_pane_g1_ParamLimits

0x6f0a,	// (0x00048eac) main_myfav_hc_pane_g1

0x6f24,	// (0x00048ec6) main_myfav_hc_pane_g2_ParamLimits

0x6f24,	// (0x00048ec6) main_myfav_hc_pane_g2

0x0002,

0xf7eb,	// (0x0005178d) main_myfav_hc_pane_g_ParamLimits

0xf7eb,	// (0x0005178d) main_myfav_hc_pane_g

0x6f56,	// (0x00048ef8) main_myfav_hc_pane_t1_ParamLimits

0x6f56,	// (0x00048ef8) main_myfav_hc_pane_t1

0x6f6d,	// (0x00048f0f) main_myfav_hc_pane_t2_ParamLimits

0x6f6d,	// (0x00048f0f) main_myfav_hc_pane_t2

0x6f7f,	// (0x00048f21) main_myfav_hc_pane_t3_ParamLimits

0x6f7f,	// (0x00048f21) main_myfav_hc_pane_t3

0x6f91,	// (0x00048f33) main_myfav_hc_pane_t4_ParamLimits

0x6f91,	// (0x00048f33) main_myfav_hc_pane_t4

0x0004,

0xf7f2,	// (0x00051794) main_myfav_hc_pane_t_ParamLimits

0xf7f2,	// (0x00051794) main_myfav_hc_pane_t

0xe839,	// (0x000507db) bg_myfav_hc_instruction_pane_g1

0x6fb9,	// (0x00048f5b) cell_myfav_contact_pane_g1_ParamLimits

0x6fb9,	// (0x00048f5b) cell_myfav_contact_pane_g1

0x6fb9,	// (0x00048f5b) cell_myfav_contact_pane_g2_ParamLimits

0x6fb9,	// (0x00048f5b) cell_myfav_contact_pane_g2

0x6fc5,	// (0x00048f67) cell_myfav_contact_pane_g3_ParamLimits

0x6fc5,	// (0x00048f67) cell_myfav_contact_pane_g3

0xeb12,	// (0x00050ab4) cell_myfav_contact_pane_g4_ParamLimits

0xeb12,	// (0x00050ab4) cell_myfav_contact_pane_g4

0x6fd2,	// (0x00048f74) cell_myfav_contact_pane_g5_ParamLimits

0x6fd2,	// (0x00048f74) cell_myfav_contact_pane_g5

0x0004,

0xf7fd,	// (0x0005179f) cell_myfav_contact_pane_g_ParamLimits

0xf7fd,	// (0x0005179f) cell_myfav_contact_pane_g

0x6f3e,	// (0x00048ee0) main_myfav_hc_pane_g3_ParamLimits

0x6f3e,	// (0x00048ee0) main_myfav_hc_pane_g3

0x17d7,	// (0x00043779) popup_adpt_find_window

0x6fde,	// (0x00048f80) afind_page_pane_ParamLimits

0x6fde,	// (0x00048f80) afind_page_pane

0x6ff3,	// (0x00048f95) aid_size_cell_afind_ParamLimits

0x6ff3,	// (0x00048f95) aid_size_cell_afind

0x7011,	// (0x00048fb3) bg_popup_sub_pane_cp09_ParamLimits

0x7011,	// (0x00048fb3) bg_popup_sub_pane_cp09

0x701e,	// (0x00048fc0) find_pane_cp01_ParamLimits

0x701e,	// (0x00048fc0) find_pane_cp01

0x702b,	// (0x00048fcd) grid_afind_control_pane_ParamLimits

0x702b,	// (0x00048fcd) grid_afind_control_pane

0x703f,	// (0x00048fe1) grid_afind_pane_ParamLimits

0x703f,	// (0x00048fe1) grid_afind_pane

0x7061,	// (0x00049003) cell_afind_pane_ParamLimits

0x7061,	// (0x00049003) cell_afind_pane

0xe839,	// (0x000507db) afind_page_pane_g1

0x70c2,	// (0x00049064) afind_page_pane_g2

0x70cb,	// (0x0004906d) afind_page_pane_g3

0x0002,

0xf808,	// (0x000517aa) afind_page_pane_g

0x70d4,	// (0x00049076) afind_page_pane_t1

0x70f4,	// (0x00049096) cell_afind_grid_control_pane_ParamLimits

0x70f4,	// (0x00049096) cell_afind_grid_control_pane

0x637d,	// (0x0004831f) bg_button_pane_cp69_ParamLimits

0x637d,	// (0x0004831f) bg_button_pane_cp69

0x7103,	// (0x000490a5) cell_afind_pane_g1_ParamLimits

0x7103,	// (0x000490a5) cell_afind_pane_g1

0x7110,	// (0x000490b2) cell_afind_pane_t1_ParamLimits

0x7110,	// (0x000490b2) cell_afind_pane_t1

0xc6fa,	// (0x0004e69c) bg_button_pane_cp72

0x7122,	// (0x000490c4) cell_afind_grid_control_pane_g1

0x3ef7,	// (0x00045e99) aid_image_placing_area_ParamLimits

0x3ef7,	// (0x00045e99) aid_image_placing_area

0xee11,	// (0x00050db3) field_vitu_entry_pane_g1_ParamLimits

0xee11,	// (0x00050db3) field_vitu_entry_pane_g1

0xee1d,	// (0x00050dbf) field_vitu_entry_pane_g2_ParamLimits

0xee1d,	// (0x00050dbf) field_vitu_entry_pane_g2

0x0001,

0x0462,	// (0x00042404) field_vitu_entry_pane_g_ParamLimits

0x0462,	// (0x00042404) field_vitu_entry_pane_g

0x5fe1,	// (0x00047f83) cell_vitu_itu_pane_g1_ParamLimits

0x6023,	// (0x00047fc5) cell_vitu_itu_pane_t3_ParamLimits

0x6023,	// (0x00047fc5) cell_vitu_itu_pane_t3

0x6284,	// (0x00048226) mp4_progress_pane_t1_ParamLimits

0x629d,	// (0x0004823f) mp4_progress_pane_t2_ParamLimits

0xf74e,	// (0x000516f0) mp4_progress_pane_t_ParamLimits

0x62b6,	// (0x00048258) mup_progress_pane_cp04_ParamLimits

0x6fa5,	// (0x00048f47) main_myfav_hc_pane_t5_ParamLimits

0x6fa5,	// (0x00048f47) main_myfav_hc_pane_t5

0xa646,	// (0x0004c5e8) aid_zoom_text_primary

0x17d7,	// (0x00043779) popup_adpt_find_window_ParamLimits

0xd5ee,	// (0x0004f590) main_cam_set_pane

0x6888,	// (0x0004882a) cam4_zoom_pane_ParamLimits

0x6888,	// (0x0004882a) cam4_zoom_pane

0x712b,	// (0x000490cd) main_cam_set_pane_g1_ParamLimits

0x712b,	// (0x000490cd) main_cam_set_pane_g1

0x7139,	// (0x000490db) main_cam_set_pane_g2_ParamLimits

0x7139,	// (0x000490db) main_cam_set_pane_g2

0x0001,

0xf80f,	// (0x000517b1) main_cam_set_pane_g_ParamLimits

0xf80f,	// (0x000517b1) main_cam_set_pane_g

0x715a,	// (0x000490fc) main_cam_set_pane_t1_ParamLimits

0x715a,	// (0x000490fc) main_cam_set_pane_t1

0x7175,	// (0x00049117) main_cset_listscroll_pane_ParamLimits

0x7175,	// (0x00049117) main_cset_listscroll_pane

0x7195,	// (0x00049137) main_cset_slider_pane_ParamLimits

0x7195,	// (0x00049137) main_cset_slider_pane

0x71c3,	// (0x00049165) main_cset_list_pane_ParamLimits

0x71c3,	// (0x00049165) main_cset_list_pane

0x71d3,	// (0x00049175) scroll_pane_cp028

0x71dc,	// (0x0004917e) aid_area_touch_slider

0x71f8,	// (0x0004919a) cset_slider_pane

0x7222,	// (0x000491c4) main_cset_slider_pane_g1

0x7237,	// (0x000491d9) main_cset_slider_pane_g2

0x0011,

0xf814,	// (0x000517b6) main_cset_slider_pane_g

0x7323,	// (0x000492c5) main_cset_slider_pane_t1

0x7351,	// (0x000492f3) main_cset_slider_pane_t2

0x736b,	// (0x0004930d) main_cset_slider_pane_t3

0x7385,	// (0x00049327) main_cset_slider_pane_t4

0x739f,	// (0x00049341) main_cset_slider_pane_t5

0x73b9,	// (0x0004935b) main_cset_slider_pane_t6

0x73ce,	// (0x00049370) main_cset_slider_pane_t7

0x000e,

0xf839,	// (0x000517db) main_cset_slider_pane_t

0x7544,	// (0x000494e6) cset_list_set_pane_ParamLimits

0x7544,	// (0x000494e6) cset_list_set_pane

0x7556,	// (0x000494f8) aid_position_infowindow_above

0x755e,	// (0x00049500) aid_position_infowindow_below

0xadf8,	// (0x0004cd9a) cset_list_set_pane_g1_ParamLimits

0xadf8,	// (0x0004cd9a) cset_list_set_pane_g1

0xae04,	// (0x0004cda6) cset_list_set_pane_g3_ParamLimits

0xae04,	// (0x0004cda6) cset_list_set_pane_g3

0x0001,

0xf858,	// (0x000517fa) cset_list_set_pane_g_ParamLimits

0xf858,	// (0x000517fa) cset_list_set_pane_g

0xae13,	// (0x0004cdb5) cset_list_set_pane_t1_ParamLimits

0xae13,	// (0x0004cdb5) cset_list_set_pane_t1

0xd5ee,	// (0x0004f590) list_highlight_pane_cp021_ParamLimits

0xd5ee,	// (0x0004f590) list_highlight_pane_cp021

0xd122,	// (0x0004f0c4) cset_slider_pane_g1

0xd134,	// (0x0004f0d6) cset_slider_pane_g2

0xd12b,	// (0x0004f0cd) cset_slider_pane_g3

0x0002,

0x0606,	// (0x000425a8) cset_slider_pane_g

0xae28,	// (0x0004cdca) aid_area_touch_cam4_zoom

0xae30,	// (0x0004cdd2) cam4_zoom_cont_pane

0xae38,	// (0x0004cdda) cam4_zoom_pane_g1

0xae40,	// (0x0004cde2) cam4_zoom_pane_g2

0x7566,	// (0x00049508) cam4_zoom_pane_g3

0x0002,

0xf85d,	// (0x000517ff) cam4_zoom_pane_g

0x756e,	// (0x00049510) cam4_zoom_cont_pane_g1

0x7577,	// (0x00049519) cam4_zoom_cont_pane_g2

0x7580,	// (0x00049522) cam4_zoom_cont_pane_g3

0x0002,

0xf864,	// (0x00051806) cam4_zoom_cont_pane_g

0x6665,	// (0x00048607) call4_image_pane_ParamLimits

0x6665,	// (0x00048607) call4_image_pane

0x66c5,	// (0x00048667) call4_windows_conf_pane_ParamLimits

0x6706,	// (0x000486a8) popup_call4_audio_in_window_ParamLimits

0x6706,	// (0x000486a8) popup_call4_audio_in_window

0xa620,	// (0x0004c5c2) bg_popup_call2_act_pane_cp02

0x67fd,	// (0x0004879f) call4_list_conf_pane

0xe839,	// (0x000507db) call4_image_pane_g1

0xe839,	// (0x000507db) call4_image_pane_g2

0x0001,

0xf60e,	// (0x000515b0) call4_image_pane_g

0x7589,	// (0x0004952b) list_single_graphic_popup_conf4_pane_ParamLimits

0x7589,	// (0x0004952b) list_single_graphic_popup_conf4_pane

0xa620,	// (0x0004c5c2) list_highlight_pane_cp022

0x759c,	// (0x0004953e) list_single_graphic_popup_conf4_pane_g1

0xcdf3,	// (0x0004ed95) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf86b,	// (0x0005180d) list_single_graphic_popup_conf4_pane_g

0x75a4,	// (0x00049546) list_single_graphic_popup_conf4_pane_t1

0x2665,	// (0x00044607) popup_vtel_slider_window_ParamLimits

0x2665,	// (0x00044607) popup_vtel_slider_window

0x6349,	// (0x000482eb) dialer2_ne_pane_t2_ParamLimits

0x6349,	// (0x000482eb) dialer2_ne_pane_t2

0x0001,

0xf753,	// (0x000516f5) dialer2_ne_pane_t_ParamLimits

0xf753,	// (0x000516f5) dialer2_ne_pane_t

0xe61e,	// (0x000505c0) bg_popup_sub_pane_cp010_ParamLimits

0xe61e,	// (0x000505c0) bg_popup_sub_pane_cp010

0x75ba,	// (0x0004955c) popup_vtel_slider_window_g1_ParamLimits

0x75ba,	// (0x0004955c) popup_vtel_slider_window_g1

0x75cd,	// (0x0004956f) popup_vtel_slider_window_g2_ParamLimits

0x75cd,	// (0x0004956f) popup_vtel_slider_window_g2

0x0003,

0xf870,	// (0x00051812) popup_vtel_slider_window_g_ParamLimits

0xf870,	// (0x00051812) popup_vtel_slider_window_g

0x7623,	// (0x000495c5) vtel_slider_pane_ParamLimits

0x7623,	// (0x000495c5) vtel_slider_pane

0x7645,	// (0x000495e7) vtel_slider_pane_g1_ParamLimits

0x7645,	// (0x000495e7) vtel_slider_pane_g1

0x7659,	// (0x000495fb) vtel_slider_pane_g2_ParamLimits

0x7659,	// (0x000495fb) vtel_slider_pane_g2

0x7671,	// (0x00049613) vtel_slider_pane_g3_ParamLimits

0x7671,	// (0x00049613) vtel_slider_pane_g3

0x7645,	// (0x000495e7) vtel_slider_pane_g4_ParamLimits

0x7645,	// (0x000495e7) vtel_slider_pane_g4

0x7687,	// (0x00049629) vtel_slider_pane_g5_ParamLimits

0x7687,	// (0x00049629) vtel_slider_pane_g5

0x0004,

0xf879,	// (0x0005181b) vtel_slider_pane_g_ParamLimits

0xf879,	// (0x0005181b) vtel_slider_pane_g

0xa620,	// (0x0004c5c2) main_gallery2_pane

0x6b06,	// (0x00048aa8) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b06,	// (0x00048aa8) aid_size_row_itut2_dropdow_list

0x6b92,	// (0x00048b34) grid_vitu2_function_top_pane_ParamLimits

0x6b92,	// (0x00048b34) grid_vitu2_function_top_pane

0x6bf7,	// (0x00048b99) popup_vitu2_dropdown_list_window_ParamLimits

0x6bf7,	// (0x00048b99) popup_vitu2_dropdown_list_window

0x6c20,	// (0x00048bc2) popup_vitu2_match_list_window

0x769d,	// (0x0004963f) cell_vitu2_function_top_pane_ParamLimits

0x769d,	// (0x0004963f) cell_vitu2_function_top_pane

0x76bb,	// (0x0004965d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76bb,	// (0x0004965d) cell_vitu2_function_top_pane_cp01

0x76d9,	// (0x0004967b) cell_vitu2_function_top_wide_pane_ParamLimits

0x76d9,	// (0x0004967b) cell_vitu2_function_top_wide_pane

0xd5ee,	// (0x0004f590) bg_button_pane_cp012

0x76f7,	// (0x00049699) cell_vitu2_function_top_pane_g1

0xae56,	// (0x0004cdf8) bg_button_pane_cp013_ParamLimits

0xae56,	// (0x0004cdf8) bg_button_pane_cp013

0x770b,	// (0x000496ad) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x770b,	// (0x000496ad) cell_vitu2_function_top_wide_pane_g1

0xd5ee,	// (0x0004f590) bg_popup_sub_pane_cp20

0x7723,	// (0x000496c5) list_vitu2_match_list_pane

0x6da8,	// (0x00048d4a) bg_popup_sub_pane_cp20_g1

0x6db0,	// (0x00048d52) bg_popup_sub_pane_cp20_g2

0xc901,	// (0x0004e8a3) bg_popup_sub_pane_cp20_g3

0x6db8,	// (0x00048d5a) bg_popup_sub_pane_cp20_g4

0xc8e1,	// (0x0004e883) bg_popup_sub_pane_cp20_g5

0x7741,	// (0x000496e3) bg_popup_sub_pane_cp20_g6

0x6dc8,	// (0x00048d6a) bg_popup_sub_pane_cp20_g7

0x6dd0,	// (0x00048d72) bg_popup_sub_pane_cp20_g8

0x6dd8,	// (0x00048d7a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf884,	// (0x00051826) bg_popup_sub_pane_cp20_g

0xae72,	// (0x0004ce14) list_vitu2_match_list_item_pane_ParamLimits

0xae72,	// (0x0004ce14) list_vitu2_match_list_item_pane

0xae84,	// (0x0004ce26) list_vitu2_match_list_item_pane_t1

0xa620,	// (0x0004c5c2) bg_popup_sub_pane_cp21

0xcd1b,	// (0x0004ecbd) grid_vitu2_dropdown_list_pane

0x7749,	// (0x000496eb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7749,	// (0x000496eb) cell_vitu2_dropdown_list_char_pane

0x776a,	// (0x0004970c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x776a,	// (0x0004970c) cell_vitu2_dropdown_list_ctrl_pane

0x7796,	// (0x00049738) cell_vitu2_dropdown_list_char_pane_g1

0x779f,	// (0x00049741) cell_vitu2_dropdown_list_char_pane_g2

0x77a8,	// (0x0004974a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8a1,	// (0x00051843) cell_vitu2_dropdown_list_char_pane_g

0x77b1,	// (0x00049753) cell_vitu2_dropdown_list_char_pane_t1

0x77bf,	// (0x00049761) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x77bf,	// (0x00049761) cell_vitu2_dropdown_list_ctrl_pane_g1

0x77cc,	// (0x0004976e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x77cc,	// (0x0004976e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x77d9,	// (0x0004977b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x77d9,	// (0x0004977b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x77e6,	// (0x00049788) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x77e6,	// (0x00049788) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeaad,	// (0x00050a4f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeaad,	// (0x00050a4f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8a8,	// (0x0005184a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8a8,	// (0x0005184a) cell_vitu2_dropdown_list_ctrl_pane_g

0x7802,	// (0x000497a4) aid_size_cell_gallery2_ParamLimits

0x7802,	// (0x000497a4) aid_size_cell_gallery2

0x7818,	// (0x000497ba) grid_gallery2_pane_ParamLimits

0x7818,	// (0x000497ba) grid_gallery2_pane

0x782c,	// (0x000497ce) scroll_pane_cp029_ParamLimits

0x782c,	// (0x000497ce) scroll_pane_cp029

0x7838,	// (0x000497da) cell_gallery2_pane_ParamLimits

0x7838,	// (0x000497da) cell_gallery2_pane

0x786e,	// (0x00049810) cell_gallery2_pane_g2

0x7878,	// (0x0004981a) cell_gallery2_pane_g3

0x7880,	// (0x00049822) cell_gallery2_pane_g4

0x7888,	// (0x0004982a) cell_gallery2_pane_g5

0xcfde,	// (0x0004ef80) grid_highlight_pane_cp10

0x6c20,	// (0x00048bc2) popup_vitu2_match_list_window_ParamLimits

0x6c37,	// (0x00048bd9) popup_vitu2_query_window_ParamLimits

0x6c37,	// (0x00048bd9) popup_vitu2_query_window

0xa620,	// (0x0004c5c2) bg_vitu2_candi_button_pane

0x7796,	// (0x00049738) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x779f,	// (0x00049741) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x77a8,	// (0x0004974a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0e8f,	// (0x00042e31) bg_button_pane_cp015

0x7890,	// (0x00049832) bg_button_pane_cp016

0x78a3,	// (0x00049845) bg_button_pane_cp017

0xe3f2,	// (0x00050394) bg_popup_sub_pane_cp22

0x78c7,	// (0x00049869) popup_vitu2_query_window_g1

0x0ec2,	// (0x00042e64) popup_vitu2_query_window_g2

0x0002,

0xf8b3,	// (0x00051855) popup_vitu2_query_window_g

0x0ee1,	// (0x00042e83) popup_vitu2_query_window_t1_ParamLimits

0x0ee1,	// (0x00042e83) popup_vitu2_query_window_t1

0x0f16,	// (0x00042eb8) popup_vitu2_query_window_t2_ParamLimits

0x0f16,	// (0x00042eb8) popup_vitu2_query_window_t2

0x0f28,	// (0x00042eca) popup_vitu2_query_window_t3_ParamLimits

0x0f28,	// (0x00042eca) popup_vitu2_query_window_t3

0x78d3,	// (0x00049875) popup_vitu2_query_window_t4_ParamLimits

0x78d3,	// (0x00049875) popup_vitu2_query_window_t4

0x78f4,	// (0x00049896) popup_vitu2_query_window_t5_ParamLimits

0x78f4,	// (0x00049896) popup_vitu2_query_window_t5

0x0006,

0xf8ba,	// (0x0005185c) popup_vitu2_query_window_t_ParamLimits

0xf8ba,	// (0x0005185c) popup_vitu2_query_window_t

0x71bb,	// (0x0004915d) main_cset_text_pane

0x71dc,	// (0x0004917e) aid_area_touch_slider_ParamLimits

0x71f8,	// (0x0004919a) cset_slider_pane_ParamLimits

0x7222,	// (0x000491c4) main_cset_slider_pane_g1_ParamLimits

0x7237,	// (0x000491d9) main_cset_slider_pane_g2_ParamLimits

0x724c,	// (0x000491ee) main_cset_slider_pane_g3_ParamLimits

0x724c,	// (0x000491ee) main_cset_slider_pane_g3

0x7258,	// (0x000491fa) main_cset_slider_pane_g4_ParamLimits

0x7258,	// (0x000491fa) main_cset_slider_pane_g4

0x7267,	// (0x00049209) main_cset_slider_pane_g5_ParamLimits

0x7267,	// (0x00049209) main_cset_slider_pane_g5

0x7273,	// (0x00049215) main_cset_slider_pane_g6_ParamLimits

0x7273,	// (0x00049215) main_cset_slider_pane_g6

0xf814,	// (0x000517b6) main_cset_slider_pane_g_ParamLimits

0x7323,	// (0x000492c5) main_cset_slider_pane_t1_ParamLimits

0x7351,	// (0x000492f3) main_cset_slider_pane_t2_ParamLimits

0x736b,	// (0x0004930d) main_cset_slider_pane_t3_ParamLimits

0x7385,	// (0x00049327) main_cset_slider_pane_t4_ParamLimits

0x739f,	// (0x00049341) main_cset_slider_pane_t5_ParamLimits

0x73b9,	// (0x0004935b) main_cset_slider_pane_t6_ParamLimits

0x73ce,	// (0x00049370) main_cset_slider_pane_t7_ParamLimits

0x73f8,	// (0x0004939a) main_cset_slider_pane_t8_ParamLimits

0x73f8,	// (0x0004939a) main_cset_slider_pane_t8

0x7420,	// (0x000493c2) main_cset_slider_pane_t9_ParamLimits

0x7420,	// (0x000493c2) main_cset_slider_pane_t9

0x7448,	// (0x000493ea) main_cset_slider_pane_t10_ParamLimits

0x7448,	// (0x000493ea) main_cset_slider_pane_t10

0x7470,	// (0x00049412) main_cset_slider_pane_t11_ParamLimits

0x7470,	// (0x00049412) main_cset_slider_pane_t11

0x7498,	// (0x0004943a) main_cset_slider_pane_t12_ParamLimits

0x7498,	// (0x0004943a) main_cset_slider_pane_t12

0x74b5,	// (0x00049457) main_cset_slider_pane_t13_ParamLimits

0x74b5,	// (0x00049457) main_cset_slider_pane_t13

0xf839,	// (0x000517db) main_cset_slider_pane_t_ParamLimits

0xa620,	// (0x0004c5c2) bg_popup_sub_pane_cp011

0x7915,	// (0x000498b7) main_cset_text_pane_g1

0x791d,	// (0x000498bf) main_cset_text_pane_t1

0x792b,	// (0x000498cd) main_cset_text_pane_t2

0x7939,	// (0x000498db) main_cset_text_pane_t3

0x7947,	// (0x000498e9) main_cset_text_pane_t4

0x7955,	// (0x000498f7) main_cset_text_pane_t5

0x7963,	// (0x00049905) main_cset_text_pane_t6

0x7971,	// (0x00049913) main_cset_text_pane_t7

0x0006,

0xf8c9,	// (0x0005186b) main_cset_text_pane_t

0xa620,	// (0x0004c5c2) main_cam4_burst_pane

0xa620,	// (0x0004c5c2) main_cam5_pane

0x70e2,	// (0x00049084) bg_button_pane_cp019

0x70eb,	// (0x0004908d) bg_button_pane_cp020

0x7287,	// (0x00049229) main_cset_slider_pane_g7_ParamLimits

0x7287,	// (0x00049229) main_cset_slider_pane_g7

0x7293,	// (0x00049235) main_cset_slider_pane_g8_ParamLimits

0x7293,	// (0x00049235) main_cset_slider_pane_g8

0x729f,	// (0x00049241) main_cset_slider_pane_g9_ParamLimits

0x729f,	// (0x00049241) main_cset_slider_pane_g9

0x72ab,	// (0x0004924d) main_cset_slider_pane_g10_ParamLimits

0x72ab,	// (0x0004924d) main_cset_slider_pane_g10

0x72b7,	// (0x00049259) main_cset_slider_pane_g11_ParamLimits

0x72b7,	// (0x00049259) main_cset_slider_pane_g11

0x72c3,	// (0x00049265) main_cset_slider_pane_g12_ParamLimits

0x72c3,	// (0x00049265) main_cset_slider_pane_g12

0x72cf,	// (0x00049271) main_cset_slider_pane_g13_ParamLimits

0x72cf,	// (0x00049271) main_cset_slider_pane_g13

0x72db,	// (0x0004927d) main_cset_slider_pane_g14_ParamLimits

0x72db,	// (0x0004927d) main_cset_slider_pane_g14

0x72e7,	// (0x00049289) main_cset_slider_pane_g15_ParamLimits

0x72e7,	// (0x00049289) main_cset_slider_pane_g15

0x74d2,	// (0x00049474) main_cset_slider_pane_t14_ParamLimits

0x74d2,	// (0x00049474) main_cset_slider_pane_t14

0x750b,	// (0x000494ad) main_cset_slider_pane_t15_ParamLimits

0x750b,	// (0x000494ad) main_cset_slider_pane_t15

0x797f,	// (0x00049921) aid_cam4_burst_size_cell_ParamLimits

0x797f,	// (0x00049921) aid_cam4_burst_size_cell

0x799f,	// (0x00049941) grid_cam4_burst_pane_ParamLimits

0x799f,	// (0x00049941) grid_cam4_burst_pane

0x79d7,	// (0x00049979) linegrid_cam4_burst_pane_ParamLimits

0x79d7,	// (0x00049979) linegrid_cam4_burst_pane

0x79fb,	// (0x0004999d) scroll_pane_cp30_ParamLimits

0x79fb,	// (0x0004999d) scroll_pane_cp30

0x7a07,	// (0x000499a9) cell_cam4_burst_pane_ParamLimits

0x7a07,	// (0x000499a9) cell_cam4_burst_pane

0x7a54,	// (0x000499f6) linegrid_cam4_burst_pane_g1_ParamLimits

0x7a54,	// (0x000499f6) linegrid_cam4_burst_pane_g1

0x7a61,	// (0x00049a03) linegrid_cam4_burst_pane_g2_ParamLimits

0x7a61,	// (0x00049a03) linegrid_cam4_burst_pane_g2

0x7a72,	// (0x00049a14) linegrid_cam4_burst_pane_g3_ParamLimits

0x7a72,	// (0x00049a14) linegrid_cam4_burst_pane_g3

0x0002,

0xf8d8,	// (0x0005187a) linegrid_cam4_burst_pane_g_ParamLimits

0xf8d8,	// (0x0005187a) linegrid_cam4_burst_pane_g

0x7a7f,	// (0x00049a21) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7a7f,	// (0x00049a21) linegrid_cam4_burst_pane_g3_copy1

0x7a99,	// (0x00049a3b) linegrid_cam4_burst_pane_g4_ParamLimits

0x7a99,	// (0x00049a3b) linegrid_cam4_burst_pane_g4

0x7aa6,	// (0x00049a48) linegrid_cam4_burst_pane_g5_ParamLimits

0x7aa6,	// (0x00049a48) linegrid_cam4_burst_pane_g5

0x7ab7,	// (0x00049a59) linegrid_cam4_burst_pane_g6_ParamLimits

0x7ab7,	// (0x00049a59) linegrid_cam4_burst_pane_g6

0x7ace,	// (0x00049a70) linegrid_cam4_burst_pane_g7_ParamLimits

0x7ace,	// (0x00049a70) linegrid_cam4_burst_pane_g7

0x7adb,	// (0x00049a7d) cell_cam4_burst_pane_g1

0x7afa,	// (0x00049a9c) main_cam5_pane_t1_ParamLimits

0x7afa,	// (0x00049a9c) main_cam5_pane_t1

0x7b0c,	// (0x00049aae) main_cam5_pane_t2_ParamLimits

0x7b0c,	// (0x00049aae) main_cam5_pane_t2

0x7b1e,	// (0x00049ac0) main_cam5_pane_t3_ParamLimits

0x7b1e,	// (0x00049ac0) main_cam5_pane_t3

0x7b30,	// (0x00049ad2) main_cam5_pane_t4_ParamLimits

0x7b30,	// (0x00049ad2) main_cam5_pane_t4

0x7b48,	// (0x00049aea) main_cam5_pane_t5_ParamLimits

0x7b48,	// (0x00049aea) main_cam5_pane_t5

0x7b5c,	// (0x00049afe) main_cam5_pane_t6_ParamLimits

0x7b5c,	// (0x00049afe) main_cam5_pane_t6

0x7b70,	// (0x00049b12) main_cam5_pane_t7_ParamLimits

0x7b70,	// (0x00049b12) main_cam5_pane_t7

0x7b82,	// (0x00049b24) main_cam5_pane_t8_ParamLimits

0x7b82,	// (0x00049b24) main_cam5_pane_t8

0x7b9e,	// (0x00049b40) main_cam5_pane_t9_ParamLimits

0x7b9e,	// (0x00049b40) main_cam5_pane_t9

0x7bb0,	// (0x00049b52) main_cam5_pane_t10_ParamLimits

0x7bb0,	// (0x00049b52) main_cam5_pane_t10

0x7bc2,	// (0x00049b64) main_cam5_pane_t11_ParamLimits

0x7bc2,	// (0x00049b64) main_cam5_pane_t11

0x7bd4,	// (0x00049b76) main_cam5_pane_t12_ParamLimits

0x7bd4,	// (0x00049b76) main_cam5_pane_t12

0x7be9,	// (0x00049b8b) main_cam5_pane_t13_ParamLimits

0x7be9,	// (0x00049b8b) main_cam5_pane_t13

0x000c,

0xf8e4,	// (0x00051886) main_cam5_pane_t_ParamLimits

0xf8e4,	// (0x00051886) main_cam5_pane_t

0x1859,	// (0x000437fb) popup_scut_keymap_window_ParamLimits

0x1859,	// (0x000437fb) popup_scut_keymap_window

0x7c06,	// (0x00049ba8) aid_size_cell_brow_shortcut

0xcfde,	// (0x0004ef80) bg_popup_window_pane_cp010

0x7c12,	// (0x00049bb4) grid_scut_pane

0x7c1e,	// (0x00049bc0) cell_scut_pane_ParamLimits

0x7c1e,	// (0x00049bc0) cell_scut_pane

0x7c35,	// (0x00049bd7) cell_scut_pane_g1

0x7c3e,	// (0x00049be0) cell_scut_pane_t1

0x7c4d,	// (0x00049bef) cell_scut_pane_t2

0x7c5c,	// (0x00049bfe) cell_scut_pane_t3

0x0002,

0xf8ff,	// (0x000518a1) cell_scut_pane_t

0x54e9,	// (0x0004748b) main_mup3_pane_g8_ParamLimits

0x54e9,	// (0x0004748b) main_mup3_pane_g8

0x6b1e,	// (0x00048ac0) area_vitu2_query_pane_ParamLimits

0x6b1e,	// (0x00048ac0) area_vitu2_query_pane

0x0ea1,	// (0x00042e43) input_focus_pane_cp08

0x7c6a,	// (0x00049c0c) area_vitu2_query_pane_g1

0x0fa6,	// (0x00042f48) area_vitu2_query_pane_g2

0x0001,

0xf906,	// (0x000518a8) area_vitu2_query_pane_g

0x7c76,	// (0x00049c18) area_vitu2_query_pane_t1_ParamLimits

0x7c76,	// (0x00049c18) area_vitu2_query_pane_t1

0x7c8a,	// (0x00049c2c) area_vitu2_query_pane_t2_ParamLimits

0x7c8a,	// (0x00049c2c) area_vitu2_query_pane_t2

0x0fb7,	// (0x00042f59) area_vitu2_query_pane_t3_ParamLimits

0x0fb7,	// (0x00042f59) area_vitu2_query_pane_t3

0xaeaa,	// (0x0004ce4c) area_vitu2_query_pane_t4_ParamLimits

0xaeaa,	// (0x0004ce4c) area_vitu2_query_pane_t4

0xaed2,	// (0x0004ce74) area_vitu2_query_pane_t5_ParamLimits

0xaed2,	// (0x0004ce74) area_vitu2_query_pane_t5

0xaefa,	// (0x0004ce9c) area_vitu2_query_pane_t6_ParamLimits

0xaefa,	// (0x0004ce9c) area_vitu2_query_pane_t6

0x0006,

0xf90b,	// (0x000518ad) area_vitu2_query_pane_t_ParamLimits

0xf90b,	// (0x000518ad) area_vitu2_query_pane_t

0x7c9e,	// (0x00049c40) bg_button_pane_cp018

0x7cac,	// (0x00049c4e) bg_button_pane_cp021

0x0fdf,	// (0x00042f81) bg_button_pane_cp022

0x0fee,	// (0x00042f90) input_focus_pane_cp09

0x3574,	// (0x00045516) aid_size_touch_mv_arrow_left

0x359d,	// (0x0004553f) aid_size_touch_mv_arrow_right

0x72ff,	// (0x000492a1) main_cset_slider_pane_g16_ParamLimits

0x72ff,	// (0x000492a1) main_cset_slider_pane_g16

0x730b,	// (0x000492ad) main_cset_slider_pane_g17_ParamLimits

0x730b,	// (0x000492ad) main_cset_slider_pane_g17

0x7adb,	// (0x00049a7d) cell_cam4_burst_pane_g1_ParamLimits

0xa620,	// (0x0004c5c2) compa_mode_pane

0x75dd,	// (0x0004957f) popup_vtel_slider_window_g3_ParamLimits

0x75dd,	// (0x0004957f) popup_vtel_slider_window_g3

0x75f4,	// (0x00049596) popup_vtel_slider_window_g4_ParamLimits

0x75f4,	// (0x00049596) popup_vtel_slider_window_g4

0x760b,	// (0x000495ad) popup_vtel_slider_window_t1_ParamLimits

0x760b,	// (0x000495ad) popup_vtel_slider_window_t1

0xa620,	// (0x0004c5c2) main_cl_pane

0xe41a,	// (0x000503bc) popup_imed_adjust2_window_ParamLimits

0xe3f2,	// (0x00050394) bg_tb_trans_pane_cp05_ParamLimits

0xed46,	// (0x00050ce8) popup_imed_adjust2_window_g1_ParamLimits

0xed55,	// (0x00050cf7) popup_imed_adjust2_window_g2_ParamLimits

0xed55,	// (0x00050cf7) popup_imed_adjust2_window_g2

0xed61,	// (0x00050d03) popup_imed_adjust2_window_g3_ParamLimits

0xed61,	// (0x00050d03) popup_imed_adjust2_window_g3

0x0002,

0x0426,	// (0x000423c8) popup_imed_adjust2_window_g_ParamLimits

0x0426,	// (0x000423c8) popup_imed_adjust2_window_g

0xed6d,	// (0x00050d0f) popup_imed_adjust2_window_t1_ParamLimits

0xed85,	// (0x00050d27) slider_imed_adjust_pane_ParamLimits

0xed99,	// (0x00050d3b) slider_imed_adjust_pane_g1_ParamLimits

0xeda9,	// (0x00050d4b) slider_imed_adjust_pane_g2_ParamLimits

0xedb9,	// (0x00050d5b) slider_imed_adjust_pane_g3_ParamLimits

0xedca,	// (0x00050d6c) slider_imed_adjust_pane_g4_ParamLimits

0x042d,	// (0x000423cf) slider_imed_adjust_pane_g_ParamLimits

0x6829,	// (0x000487cb) aid_touch_area_cam4_ParamLimits

0x6829,	// (0x000487cb) aid_touch_area_cam4

0xad4e,	// (0x0004ccf0) battery_pane_cp01

0x68f9,	// (0x0004889b) main_camera4_pane_g6_ParamLimits

0x68f9,	// (0x0004889b) main_camera4_pane_g6

0x6923,	// (0x000488c5) main_camera4_pane_t2_ParamLimits

0x6923,	// (0x000488c5) main_camera4_pane_t2

0x0001,

0xf787,	// (0x00051729) main_camera4_pane_t_ParamLimits

0xf787,	// (0x00051729) main_camera4_pane_t

0x696a,	// (0x0004890c) aid_touch_area_vid4_ParamLimits

0x696a,	// (0x0004890c) aid_touch_area_vid4

0x69d1,	// (0x00048973) main_video4_pane_g5_ParamLimits

0x69d1,	// (0x00048973) main_video4_pane_g5

0x69fc,	// (0x0004899e) vid4_progress_pane_ParamLimits

0x69fc,	// (0x0004899e) vid4_progress_pane

0x7317,	// (0x000492b9) main_cset_slider_pane_g18_ParamLimits

0x7317,	// (0x000492b9) main_cset_slider_pane_g18

0x7aee,	// (0x00049a90) cell_cam4_burst_pane_g2_ParamLimits

0x7aee,	// (0x00049a90) cell_cam4_burst_pane_g2

0x0001,

0xf8df,	// (0x00051881) cell_cam4_burst_pane_g_ParamLimits

0xf8df,	// (0x00051881) cell_cam4_burst_pane_g

0xc50b,	// (0x0004e4ad) bg_cl_pane_ParamLimits

0xc50b,	// (0x0004e4ad) bg_cl_pane

0x7cb8,	// (0x00049c5a) cl_header_pane_ParamLimits

0x7cb8,	// (0x00049c5a) cl_header_pane

0x7ccc,	// (0x00049c6e) cl_listscroll_pane_ParamLimits

0x7ccc,	// (0x00049c6e) cl_listscroll_pane

0x7cdc,	// (0x00049c7e) bg_cl_pane_g1

0x7ce4,	// (0x00049c86) bg_cl_pane_g2

0x7cec,	// (0x00049c8e) bg_cl_pane_g3

0x7cf4,	// (0x00049c96) bg_cl_pane_g4

0x7cfc,	// (0x00049c9e) bg_cl_pane_g5

0x7d04,	// (0x00049ca6) bg_cl_pane_g6

0x7d0c,	// (0x00049cae) bg_cl_pane_g7

0x7d14,	// (0x00049cb6) bg_cl_pane_g8

0x7d1c,	// (0x00049cbe) bg_cl_pane_g9

0x0008,

0xf91a,	// (0x000518bc) bg_cl_pane_g

0x7d24,	// (0x00049cc6) aid_height_cl_leading_ParamLimits

0x7d24,	// (0x00049cc6) aid_height_cl_leading

0x7d30,	// (0x00049cd2) aid_height_cl_text_ParamLimits

0x7d30,	// (0x00049cd2) aid_height_cl_text

0xd5ee,	// (0x0004f590) bg_cl_header_pane_ParamLimits

0xd5ee,	// (0x0004f590) bg_cl_header_pane

0x7d4f,	// (0x00049cf1) cl_header_pane_g1_ParamLimits

0x7d4f,	// (0x00049cf1) cl_header_pane_g1

0x7d65,	// (0x00049d07) cl_header_pane_t1_ParamLimits

0x7d65,	// (0x00049d07) cl_header_pane_t1

0x7d7e,	// (0x00049d20) cl_list_pane

0x71d3,	// (0x00049175) hc_scroll_pane_cp01

0xc8e1,	// (0x0004e883) bg_cl_header_pane_g1

0x6da8,	// (0x00048d4a) bg_cl_header_pane_g2

0xc901,	// (0x0004e8a3) bg_cl_header_pane_g3

0x6db8,	// (0x00048d5a) bg_cl_header_pane_g4

0x6db0,	// (0x00048d52) bg_cl_header_pane_g5

0x7741,	// (0x000496e3) bg_cl_header_pane_g6

0x6dd0,	// (0x00048d72) bg_cl_header_pane_g7

0x6dd8,	// (0x00048d7a) bg_cl_header_pane_g8

0x6dc8,	// (0x00048d6a) bg_cl_header_pane_g9

0x0008,

0xf92d,	// (0x000518cf) bg_cl_header_pane_g

0x7d87,	// (0x00049d29) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7d87,	// (0x00049d29) hc_cl_list_double_graphic_heading_pane

0x7d98,	// (0x00049d3a) hc_cl_list_single_graphic_pane_ParamLimits

0x7d98,	// (0x00049d3a) hc_cl_list_single_graphic_pane

0x7dae,	// (0x00049d50) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7dae,	// (0x00049d50) hc_cl_list_single_graphic_pane_g1

0x7dba,	// (0x00049d5c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7dba,	// (0x00049d5c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf940,	// (0x000518e2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf940,	// (0x000518e2) hc_cl_list_single_graphic_pane_g

0x7dce,	// (0x00049d70) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7dce,	// (0x00049d70) hc_cl_list_single_graphic_pane_t1

0x7dae,	// (0x00049d50) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7dae,	// (0x00049d50) hc_cl_list_double_graphic_heading_pane_g1

0x7de3,	// (0x00049d85) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7de3,	// (0x00049d85) hc_cl_list_double_graphic_heading_pane_g2

0x7df7,	// (0x00049d99) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7df7,	// (0x00049d99) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf945,	// (0x000518e7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf945,	// (0x000518e7) hc_cl_list_double_graphic_heading_pane_g

0x7e0b,	// (0x00049dad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7e0b,	// (0x00049dad) hc_cl_list_double_graphic_heading_pane_t1

0x7e20,	// (0x00049dc2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7e20,	// (0x00049dc2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf94c,	// (0x000518ee) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf94c,	// (0x000518ee) hc_cl_list_double_graphic_heading_pane_t

0xaf4e,	// (0x0004cef0) vid4_progress_pane_g1

0xaf5e,	// (0x0004cf00) vid4_progress_pane_g2

0xa9ac,	// (0x0004c94e) vid4_progress_pane_g3

0xaf6e,	// (0x0004cf10) vid4_progress_pane_g4

0x0004,

0xf951,	// (0x000518f3) vid4_progress_pane_g

0xaf8c,	// (0x0004cf2e) vid4_progress_pane_t1

0xafa1,	// (0x0004cf43) vid4_progress_pane_t2

0x0002,

0xf95c,	// (0x000518fe) vid4_progress_pane_t

0xafcc,	// (0x0004cf6e) wait_bar_pane_cp07

0xe62c,	// (0x000505ce) blid_firmament_pane_ParamLimits

0xe66f,	// (0x00050611) popup_blid_sat_info2_window_g1

0xe693,	// (0x00050635) popup_blid_sat_info2_window_t3

0xe6a1,	// (0x00050643) popup_blid_sat_info2_window_t4

0xe6af,	// (0x00050651) popup_blid_sat_info2_window_t5

0xe6bd,	// (0x0005065f) popup_blid_sat_info2_window_t6

0xe6cd,	// (0x0005066f) popup_blid_sat_info2_window_t7

0xe6db,	// (0x0005067d) popup_blid_sat_info2_window_t8

0xe6e9,	// (0x0005068b) popup_blid_sat_info2_window_t9

0xe6f7,	// (0x00050699) popup_blid_sat_info2_window_t10

0xe7b9,	// (0x0005075b) aid_firma_cardinal_ParamLimits

0xe7cd,	// (0x0005076f) blid_firmament_pane_t1_ParamLimits

0xe7e4,	// (0x00050786) blid_firmament_pane_t2_ParamLimits

0xe7fb,	// (0x0005079d) blid_firmament_pane_t3_ParamLimits

0xe812,	// (0x000507b4) blid_firmament_pane_t4_ParamLimits

0xf605,	// (0x000515a7) blid_firmament_pane_t_ParamLimits

0xe829,	// (0x000507cb) blid_sat_info_pane_ParamLimits

0xd5ee,	// (0x0004f590) main_cam_set_pane_ParamLimits

0x5d9b,	// (0x00047d3d) aid_size_cell_colour_35_ParamLimits

0x5dbb,	// (0x00047d5d) aid_size_cell_colour_112_ParamLimits

0x5ddb,	// (0x00047d7d) aid_size_cell_effect_ParamLimits

0xe3f2,	// (0x00050394) bg_tb_trans_pane_cp02_ParamLimits

0xcb2d,	// (0x0004eacf) heading_imed_pane_ParamLimits

0x5dfb,	// (0x00047d9d) listscroll_imed_pane_ParamLimits

0xda24,	// (0x0004f9c6) popup_call2_audio_first_window_g5_ParamLimits

0xda24,	// (0x0004f9c6) popup_call2_audio_first_window_g5

0x63f1,	// (0x00048393) aid_size_touch_image3_arrow_left_ParamLimits

0x63f1,	// (0x00048393) aid_size_touch_image3_arrow_left

0x641d,	// (0x000483bf) aid_size_touch_image3_arrow_right_ParamLimits

0x641d,	// (0x000483bf) aid_size_touch_image3_arrow_right

0xafb7,	// (0x0004cf59) vid4_progress_pane_t3

0x610e,	// (0x000480b0) main_hwr_training_symbol_option_pane_ParamLimits

0x610e,	// (0x000480b0) main_hwr_training_symbol_option_pane

0xf033,	// (0x00050fd5) popup_hwr_training_preview_window_ParamLimits

0xf033,	// (0x00050fd5) popup_hwr_training_preview_window

0x612e,	// (0x000480d0) hwr_training_navi_pane_g5_ParamLimits

0x612e,	// (0x000480d0) hwr_training_navi_pane_g5

0x6cf0,	// (0x00048c92) popup_char_count_window

0xd5ee,	// (0x0004f590) bg_popup_sub_pane_cp20_ParamLimits

0x7723,	// (0x000496c5) list_vitu2_match_list_pane_ParamLimits

0x7732,	// (0x000496d4) vitu2_page_scroll_pane_ParamLimits

0x7732,	// (0x000496d4) vitu2_page_scroll_pane

0x7e35,	// (0x00049dd7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7e35,	// (0x00049dd7) list_single_hwr_training_symbol_option_pane

0x7e48,	// (0x00049dea) list_single_hwr_training_symbol_option_pane_g1

0x7e50,	// (0x00049df2) list_single_hwr_training_symbol_option_pane_t1

0x7e5e,	// (0x00049e00) bg_button_pane_cp023

0x7e67,	// (0x00049e09) bg_button_pane_cp024

0x7e9a,	// (0x00049e3c) vitu2_page_scroll_pane_g1

0x7ea2,	// (0x00049e44) vitu2_page_scroll_pane_g2

0x0001,

0xf963,	// (0x00051905) vitu2_page_scroll_pane_g

0x7eaa,	// (0x00049e4c) vitu2_page_scroll_pane_t1

0x7eb9,	// (0x00049e5b) popup_char_count_window_g1

0x7ec2,	// (0x00049e64) popup_char_count_window_g2

0x7ecb,	// (0x00049e6d) popup_char_count_window_g3

0x0002,

0xf968,	// (0x0005190a) popup_char_count_window_g

0x7ed4,	// (0x00049e76) popup_char_count_window_t1

0xa620,	// (0x0004c5c2) main_vded2_pane

0xed32,	// (0x00050cd4) aid_size_cell_imed_line

0xed3c,	// (0x00050cde) grid_imed_line_width_pane

0x6a6a,	// (0x00048a0c) vid4_indicators_pane_g4

0x7ee2,	// (0x00049e84) cell_imed_line_width_pane_ParamLimits

0x7ee2,	// (0x00049e84) cell_imed_line_width_pane

0x7ef6,	// (0x00049e98) cell_imed_line_width_pane_g1

0xe863,	// (0x00050805) cell_imed_line_width_pane_g2

0x0001,

0xf96f,	// (0x00051911) cell_imed_line_width_pane_g

0x7eff,	// (0x00049ea1) main_vded2_pane_g1_ParamLimits

0x7eff,	// (0x00049ea1) main_vded2_pane_g1

0x7f15,	// (0x00049eb7) main_vded2_pane_g2_ParamLimits

0x7f15,	// (0x00049eb7) main_vded2_pane_g2

0x0001,

0xf974,	// (0x00051916) main_vded2_pane_g_ParamLimits

0xf974,	// (0x00051916) main_vded2_pane_g

0x7f27,	// (0x00049ec9) vded2_slider_pane_ParamLimits

0x7f27,	// (0x00049ec9) vded2_slider_pane

0x7f37,	// (0x00049ed9) aid_size_touch_vded2_end

0x7f41,	// (0x00049ee3) aid_size_touch_vded2_playhead

0x7f4b,	// (0x00049eed) aid_size_touch_vded2_start

0x7f53,	// (0x00049ef5) vded2_slider_bg_pane

0x7f5c,	// (0x00049efe) vded2_slider_pane_g1

0x7f65,	// (0x00049f07) vded2_slider_pane_g2

0x7f6d,	// (0x00049f0f) vded2_slider_pane_g3

0x0002,

0xf979,	// (0x0005191b) vded2_slider_pane_g

0x7f78,	// (0x00049f1a) vded2_slider_bg_pane_g1

0x7f81,	// (0x00049f23) vded2_slider_bg_pane_g2

0x7f8a,	// (0x00049f2c) vded2_slider_bg_pane_g3

0x0002,

0xf980,	// (0x00051922) vded2_slider_bg_pane_g

0x3b66,	// (0x00045b08) aid_postcard_touch_down_pane_ParamLimits

0x3b66,	// (0x00045b08) aid_postcard_touch_down_pane

0x3b7c,	// (0x00045b1e) aid_postcard_touch_up_pane_ParamLimits

0x3b7c,	// (0x00045b1e) aid_postcard_touch_up_pane

0xa620,	// (0x0004c5c2) main_blid2_pane

0xe400,	// (0x000503a2) popup_blid2_search_window

0xa620,	// (0x0004c5c2) blid2_gps_pane

0xa620,	// (0x0004c5c2) blid2_navig_pane

0xa620,	// (0x0004c5c2) blid2_search_pane

0xa620,	// (0x0004c5c2) blid2_tripm_pane

0x7f93,	// (0x00049f35) blid2_search_pane_g1_ParamLimits

0x7f93,	// (0x00049f35) blid2_search_pane_g1

0x7fad,	// (0x00049f4f) blid2_search_pane_t1_ParamLimits

0x7fad,	// (0x00049f4f) blid2_search_pane_t1

0x7fbf,	// (0x00049f61) aid_size_cell_blid2_gps_ParamLimits

0x7fbf,	// (0x00049f61) aid_size_cell_blid2_gps

0x7fd7,	// (0x00049f79) blid2_gps_pane_g1_ParamLimits

0x7fd7,	// (0x00049f79) blid2_gps_pane_g1

0x7feb,	// (0x00049f8d) grid_blid2_satellite_pane_ParamLimits

0x7feb,	// (0x00049f8d) grid_blid2_satellite_pane

0x8005,	// (0x00049fa7) blid2_navig_pane_g1_ParamLimits

0x8005,	// (0x00049fa7) blid2_navig_pane_g1

0x8011,	// (0x00049fb3) blid2_navig_pane_t1_ParamLimits

0x8011,	// (0x00049fb3) blid2_navig_pane_t1

0x802c,	// (0x00049fce) blid2_navig_pane_t2_ParamLimits

0x802c,	// (0x00049fce) blid2_navig_pane_t2

0x0001,

0xf987,	// (0x00051929) blid2_navig_pane_t_ParamLimits

0xf987,	// (0x00051929) blid2_navig_pane_t

0x8047,	// (0x00049fe9) blid2_navig_ring_pane_ParamLimits

0x8047,	// (0x00049fe9) blid2_navig_ring_pane

0x8060,	// (0x0004a002) blid2_speed_pane_ParamLimits

0x8060,	// (0x0004a002) blid2_speed_pane

0x806c,	// (0x0004a00e) blid2_tripm_pane_g1_ParamLimits

0x806c,	// (0x0004a00e) blid2_tripm_pane_g1

0x8085,	// (0x0004a027) blid2_tripm_pane_g2_ParamLimits

0x8085,	// (0x0004a027) blid2_tripm_pane_g2

0x8099,	// (0x0004a03b) blid2_tripm_pane_g3_ParamLimits

0x8099,	// (0x0004a03b) blid2_tripm_pane_g3

0x80ad,	// (0x0004a04f) blid2_tripm_pane_g4_ParamLimits

0x80ad,	// (0x0004a04f) blid2_tripm_pane_g4

0x80c1,	// (0x0004a063) blid2_tripm_pane_g5_ParamLimits

0x80c1,	// (0x0004a063) blid2_tripm_pane_g5

0x0005,

0xf98c,	// (0x0005192e) blid2_tripm_pane_g_ParamLimits

0xf98c,	// (0x0005192e) blid2_tripm_pane_g

0x80e7,	// (0x0004a089) blid2_tripm_pane_t1_ParamLimits

0x80e7,	// (0x0004a089) blid2_tripm_pane_t1

0x8102,	// (0x0004a0a4) blid2_tripm_pane_t2_ParamLimits

0x8102,	// (0x0004a0a4) blid2_tripm_pane_t2

0x811b,	// (0x0004a0bd) blid2_tripm_pane_t3_ParamLimits

0x811b,	// (0x0004a0bd) blid2_tripm_pane_t3

0x0003,

0xf999,	// (0x0005193b) blid2_tripm_pane_t_ParamLimits

0xf999,	// (0x0005193b) blid2_tripm_pane_t

0x8162,	// (0x0004a104) cell_blid2_satellite_pane_ParamLimits

0x8162,	// (0x0004a104) cell_blid2_satellite_pane

0x8180,	// (0x0004a122) cell_blid2_satellite_pane_g1

0x8189,	// (0x0004a12b) cell_blid2_satellite_pane_t1

0xe839,	// (0x000507db) blid2_speed_pane_g1

0x8197,	// (0x0004a139) blid2_speed_pane_t1

0x81a5,	// (0x0004a147) blid2_speed_pane_t2

0x0001,

0xf9a2,	// (0x00051944) blid2_speed_pane_t

0xe839,	// (0x000507db) blid2_navig_ring_pane_g1

0x81b3,	// (0x0004a155) blid2_navig_ring_pane_g2

0x81bb,	// (0x0004a15d) blid2_navig_ring_pane_g3

0x81c3,	// (0x0004a165) blid2_navig_ring_pane_g4

0x81cb,	// (0x0004a16d) blid2_navig_ring_pane_g5

0x0004,

0xf9a7,	// (0x00051949) blid2_navig_ring_pane_g

0xa620,	// (0x0004c5c2) bg_popup_window_pane_cp011

0x81d3,	// (0x0004a175) popup_blid2_search_window_g1

0x81db,	// (0x0004a17d) popup_blid2_search_window_t1

0x81e9,	// (0x0004a18b) popup_blid2_search_window_t2

0x0001,

0xf9b2,	// (0x00051954) popup_blid2_search_window_t

0xc7f0,	// (0x0004e792) main_browser_pane_g1

0xc50b,	// (0x0004e4ad) main_browser_pane_ParamLimits

0xd5ee,	// (0x0004f590) bg_button_pane_cp011_ParamLimits

0x6d8a,	// (0x00048d2c) cell_vitu2_function_pane_g1_ParamLimits

0xe3f2,	// (0x00050394) bg_popup_sub_pane_cp22_ParamLimits

0x0ea1,	// (0x00042e43) input_focus_pane_cp08_ParamLimits

0x78b6,	// (0x00049858) popup_vitu2_query_button_pane_ParamLimits

0x78b6,	// (0x00049858) popup_vitu2_query_button_pane

0x0eb8,	// (0x00042e5a) popup_vitu2_query_input_button_pane

0x78c7,	// (0x00049869) popup_vitu2_query_window_g1_ParamLimits

0x0ec2,	// (0x00042e64) popup_vitu2_query_window_g2_ParamLimits

0xf8b3,	// (0x00051855) popup_vitu2_query_window_g_ParamLimits

0xa620,	// (0x0004c5c2) bg_button_pane_cp026

0x81f7,	// (0x0004a199) popup_vitu2_query_input_button_pane_g1

0xa620,	// (0x0004c5c2) bg_button_pane_cp025

0x81ff,	// (0x0004a1a1) popup_vitu2_query_button_pane_t1

0x5200,	// (0x000471a2) main_mp3_pane_t6

0x520e,	// (0x000471b0) popup_slider_window_cp01

0xad6a,	// (0x0004cd0c) cam4_battery_pane

0xadd1,	// (0x0004cd73) cam4_battery_pane_cp02

0xaf46,	// (0x0004cee8) cam4_battery_pane_cp01

0xaf46,	// (0x0004cee8) cam4_battery_pane_cp03

0xe839,	// (0x000507db) cam4_battery_pane_g1

0x820d,	// (0x0004a1af) cam4_battery_pane_g2

0x0001,

0xf9b7,	// (0x00051959) cam4_battery_pane_g

0xe705,	// (0x000506a7) popup_blid_sat_info2_window_t11

0x3574,	// (0x00045516) aid_size_touch_mv_arrow_left_ParamLimits

0x359d,	// (0x0004553f) aid_size_touch_mv_arrow_right_ParamLimits

0xcf3e,	// (0x0004eee0) navi_pane_g1_ParamLimits

0x35dc,	// (0x0004557e) navi_pane_g2_ParamLimits

0x360a,	// (0x000455ac) navi_pane_g3_ParamLimits

0xf404,	// (0x000513a6) navi_pane_g_ParamLimits

0x3662,	// (0x00045604) navi_pane_mv_t1_ParamLimits

0x5e07,	// (0x00047da9) grid_imed_effect_pane_ParamLimits

0x2562,	// (0x00044504) aid_placing_vt_slider_lsc

0xc73f,	// (0x0004e6e1) aid_placing_vt_slider_prt

0xd5ee,	// (0x0004f590) bg_tb_trans_pane_cp01_ParamLimits

0xe9cd,	// (0x0005096f) popup_image_details_window_g1_ParamLimits

0xe9e0,	// (0x00050982) popup_image_details_window_g2_ParamLimits

0xe9f5,	// (0x00050997) popup_image_details_window_g3_ParamLimits

0xe9f5,	// (0x00050997) popup_image_details_window_g3

0x0364,	// (0x00042306) popup_image_details_window_g_ParamLimits

0xea09,	// (0x000509ab) popup_image_details_window_t1_ParamLimits

0xea1b,	// (0x000509bd) popup_image_details_window_t2_ParamLimits

0xea34,	// (0x000509d6) popup_image_details_window_t3_ParamLimits

0xea48,	// (0x000509ea) popup_image_details_window_t4_ParamLimits

0xea63,	// (0x00050a05) popup_image_details_window_t5_ParamLimits

0x036b,	// (0x0004230d) popup_image_details_window_t_ParamLimits

0x7d3c,	// (0x00049cde) cl_header_name_pane_ParamLimits

0x7d3c,	// (0x00049cde) cl_header_name_pane

0x8217,	// (0x0004a1b9) cl_header_name_pane_t1_ParamLimits

0x8217,	// (0x0004a1b9) cl_header_name_pane_t1

0x8238,	// (0x0004a1da) cl_header_name_pane_t2_ParamLimits

0x8238,	// (0x0004a1da) cl_header_name_pane_t2

0x827a,	// (0x0004a21c) cl_header_name_pane_t3_ParamLimits

0x827a,	// (0x0004a21c) cl_header_name_pane_t3

0x0002,

0xf9bc,	// (0x0005195e) cl_header_name_pane_t_ParamLimits

0xf9bc,	// (0x0005195e) cl_header_name_pane_t

0x3633,	// (0x000455d5) navi_pane_mv_g2_ParamLimits

0x6cca,	// (0x00048c6c) field_vitu2_entry_pane_g1_ParamLimits

0x6cd6,	// (0x00048c78) field_vitu2_entry_pane_g2_ParamLimits

0x6ce2,	// (0x00048c84) field_vitu2_entry_pane_g3_ParamLimits

0x6ce2,	// (0x00048c84) field_vitu2_entry_pane_g3

0xf7b9,	// (0x0005175b) field_vitu2_entry_pane_g_ParamLimits

0x6d06,	// (0x00048ca8) cell_vitu2_itu_pane_g1_ParamLimits

0x6d16,	// (0x00048cb8) cell_vitu2_itu_pane_g2_ParamLimits

0x6d16,	// (0x00048cb8) cell_vitu2_itu_pane_g2

0x0001,

0xf7c5,	// (0x00051767) cell_vitu2_itu_pane_g_ParamLimits

0xf7c5,	// (0x00051767) cell_vitu2_itu_pane_g

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp05_ParamLimits

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp05

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp03

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp04

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp10_ParamLimits

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp10

0x0fdf,	// (0x00042f81) bg_vkb2_func_pane_cp08

0x7c9e,	// (0x00049c40) bg_vkb2_func_pane_cp06

0x7cac,	// (0x00049c4e) bg_vkb2_func_pane_cp07

0x7e70,	// (0x00049e12) bg_vkb2_func_pane_cp11_ParamLimits

0x7e70,	// (0x00049e12) bg_vkb2_func_pane_cp11

0x7e85,	// (0x00049e27) bg_vkb2_func_pane_cp12_ParamLimits

0x7e85,	// (0x00049e27) bg_vkb2_func_pane_cp12

0xa620,	// (0x0004c5c2) bg_vkb2_func_pane_cp09

0x6da8,	// (0x00048d4a) bg_vkb2_func_pane_g1

0xc901,	// (0x0004e8a3) bg_vkb2_func_pane_g2

0x6db0,	// (0x00048d52) bg_vkb2_func_pane_g3

0x6db8,	// (0x00048d5a) bg_vkb2_func_pane_g4

0x7741,	// (0x000496e3) bg_vkb2_func_pane_g5

0x6dd0,	// (0x00048d72) bg_vkb2_func_pane_g6

0x6dd8,	// (0x00048d7a) bg_vkb2_func_pane_g7

0x6dc8,	// (0x00048d6a) bg_vkb2_func_pane_g8

0xc8e1,	// (0x0004e883) bg_vkb2_func_pane_g9

0x0008,

0xf9c3,	// (0x00051965) bg_vkb2_func_pane_g

0x80d5,	// (0x0004a077) blid2_tripm_pane_g6_ParamLimits

0x80d5,	// (0x0004a077) blid2_tripm_pane_g6

0x627c,	// (0x0004821e) mp4_progress_pane_g1

0x814e,	// (0x0004a0f0) blid2_tripm_values_pane_ParamLimits

0x814e,	// (0x0004a0f0) blid2_tripm_values_pane

0x82ab,	// (0x0004a24d) blid2_tripm_values_pane_t1

0x82b9,	// (0x0004a25b) blid2_tripm_values_pane_t2

0x82c7,	// (0x0004a269) blid2_tripm_values_pane_t3

0x82d5,	// (0x0004a277) blid2_tripm_values_pane_t4

0x82e3,	// (0x0004a285) blid2_tripm_values_pane_t5

0x82f1,	// (0x0004a293) blid2_tripm_values_pane_t6

0x82ff,	// (0x0004a2a1) blid2_tripm_values_pane_t7

0x830d,	// (0x0004a2af) blid2_tripm_values_pane_t8

0x831b,	// (0x0004a2bd) blid2_tripm_values_pane_t9

0x0008,

0xf9d6,	// (0x00051978) blid2_tripm_values_pane_t

0x25a4,	// (0x00044546) call_video_pane_t1_ParamLimits

0x25c2,	// (0x00044564) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0005122f) call_video_pane_t_ParamLimits

0x0c9a,	// (0x00042c3c) msg_header_pane_g1_ParamLimits

0xd167,	// (0x0004f109) msg_header_pane_g2_ParamLimits

0xd167,	// (0x0004f109) msg_header_pane_g2

0x0001,

0xf48f,	// (0x00051431) msg_header_pane_g_ParamLimits

0xf48f,	// (0x00051431) msg_header_pane_g

0xc50b,	// (0x0004e4ad) main_clock2_pane_ParamLimits

0x5b1a,	// (0x00047abc) grid_clock2_toolbar_pane_ParamLimits

0x5b1a,	// (0x00047abc) grid_clock2_toolbar_pane

0x5b1a,	// (0x00047abc) listscroll_clock2_pane_ParamLimits

0x5b1a,	// (0x00047abc) listscroll_clock2_pane

0x5bfc,	// (0x00047b9e) main_clock2_pane_t3_ParamLimits

0x5bfc,	// (0x00047b9e) main_clock2_pane_t3

0x5c1f,	// (0x00047bc1) main_clock2_pane_t4_ParamLimits

0x5c1f,	// (0x00047bc1) main_clock2_pane_t4

0x8329,	// (0x0004a2cb) cell_clock2_toolbar_pane

0x8331,	// (0x0004a2d3) cell_clock2_toolbar_pane_cp01

0x8331,	// (0x0004a2d3) cell_clock2_toolbar_pane_cp02

0x8339,	// (0x0004a2db) cell_clock2_toolbar_pane_cp03

0x8341,	// (0x0004a2e3) list_clock2_pane

0xce95,	// (0x0004ee37) scroll_pane_cp10

0x8349,	// (0x0004a2eb) list_single_clock2_pane_ParamLimits

0x8349,	// (0x0004a2eb) list_single_clock2_pane

0xcfde,	// (0x0004ef80) list_highlight_pane_cp08

0x8356,	// (0x0004a2f8) list_single_clock2_pane_t1

0x8364,	// (0x0004a306) list_single_clock2_pane_t2

0x0001,

0xf9e9,	// (0x0005198b) list_single_clock2_pane_t

0xa620,	// (0x0004c5c2) bg_button_pane_cp10

0x8372,	// (0x0004a314) cell_clock2_toolbar_pane_g1

0x3af2,	// (0x00045a94) aid_main_viewer_pane_g1_ParamLimits

0x3af2,	// (0x00045a94) aid_main_viewer_pane_g1

0x3b00,	// (0x00045aa2) aid_main_viewer_pane_g2_ParamLimits

0x3b00,	// (0x00045aa2) aid_main_viewer_pane_g2

0x3b0e,	// (0x00045ab0) aid_main_viewer_pane_g3_ParamLimits

0x3b0e,	// (0x00045ab0) aid_main_viewer_pane_g3

0x3b1d,	// (0x00045abf) aid_main_viewer_pane_g4_ParamLimits

0x3b1d,	// (0x00045abf) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x00051442) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x00051442) aid_main_viewer_pane_g

0x4423,	// (0x000463c5) main_calc_pane_ParamLimits

0x4437,	// (0x000463d9) main_dialer2_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_cam6_pane

0xa620,	// (0x0004c5c2) main_vid6_pane

0x5b26,	// (0x00047ac8) listscroll_gen_pane_cp06_ParamLimits

0x5b26,	// (0x00047ac8) listscroll_gen_pane_cp06

0x5c42,	// (0x00047be4) main_clock2_pane_t5_ParamLimits

0x5c42,	// (0x00047be4) main_clock2_pane_t5

0x5c9c,	// (0x00047c3e) aid_call2_pane_cp10_ParamLimits

0x5cae,	// (0x00047c50) aid_call_pane_cp10_ParamLimits

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5cc0,	// (0x00047c62) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5cc0,	// (0x00047c62) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf13,	// (0x0004eeb5) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x0005166e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5cd2,	// (0x00047c74) popup_clock_analogue_window_cp10_t1_ParamLimits

0x639e,	// (0x00048340) cell_dialer2_keypad_pane_g2_ParamLimits

0x639e,	// (0x00048340) cell_dialer2_keypad_pane_g2

0x0001,

0xf758,	// (0x000516fa) cell_dialer2_keypad_pane_g_ParamLimits

0xf758,	// (0x000516fa) cell_dialer2_keypad_pane_g

0x63ba,	// (0x0004835c) cell_dialer2_keypad_pane_t1

0x71ad,	// (0x0004914f) main_cset_text2_pane_ParamLimits

0x71ad,	// (0x0004914f) main_cset_text2_pane

0x7c6a,	// (0x00049c0c) area_vitu2_query_pane_g1_ParamLimits

0x0fa6,	// (0x00042f48) area_vitu2_query_pane_g2_ParamLimits

0xf906,	// (0x000518a8) area_vitu2_query_pane_g_ParamLimits

0xaf22,	// (0x0004cec4) area_vitu2_query_pane_t7_ParamLimits

0xaf22,	// (0x0004cec4) area_vitu2_query_pane_t7

0x7c9e,	// (0x00049c40) bg_button_pane_cp018_ParamLimits

0x7cac,	// (0x00049c4e) bg_button_pane_cp021_ParamLimits

0x0fdf,	// (0x00042f81) bg_button_pane_cp022_ParamLimits

0x0fdf,	// (0x00042f81) bg_vkb2_func_pane_cp08_ParamLimits

0x7c9e,	// (0x00049c40) bg_vkb2_func_pane_cp06_ParamLimits

0x7cac,	// (0x00049c4e) bg_vkb2_func_pane_cp07_ParamLimits

0x0fee,	// (0x00042f90) input_focus_pane_cp09_ParamLimits

0xb038,	// (0x0004cfda) cam6_autofocus_pane_ParamLimits

0xb038,	// (0x0004cfda) cam6_autofocus_pane

0x837a,	// (0x0004a31c) cam6_image_uncrop_pane_ParamLimits

0x837a,	// (0x0004a31c) cam6_image_uncrop_pane

0x8389,	// (0x0004a32b) cam6_indi_pane_ParamLimits

0x8389,	// (0x0004a32b) cam6_indi_pane

0x839f,	// (0x0004a341) cam6_mode_pane_ParamLimits

0x839f,	// (0x0004a341) cam6_mode_pane

0x83b1,	// (0x0004a353) cam6_timer_pane_ParamLimits

0x83b1,	// (0x0004a353) cam6_timer_pane

0x83bd,	// (0x0004a35f) cam6_zoom_pane_ParamLimits

0x83bd,	// (0x0004a35f) cam6_zoom_pane

0x83c9,	// (0x0004a36b) cam6_mode_pane_g1_ParamLimits

0x83c9,	// (0x0004a36b) cam6_mode_pane_g1

0x83d9,	// (0x0004a37b) cam6_mode_pane_g2_ParamLimits

0x83d9,	// (0x0004a37b) cam6_mode_pane_g2

0x83e9,	// (0x0004a38b) cam6_mode_pane_g3_ParamLimits

0x83e9,	// (0x0004a38b) cam6_mode_pane_g3

0x83f9,	// (0x0004a39b) cam6_mode_pane_g4_ParamLimits

0x83f9,	// (0x0004a39b) cam6_mode_pane_g4

0x0003,

0xf9ee,	// (0x00051990) cam6_mode_pane_g_ParamLimits

0xf9ee,	// (0x00051990) cam6_mode_pane_g

0x8409,	// (0x0004a3ab) bg_tb_trans_pane_cp08_ParamLimits

0x8409,	// (0x0004a3ab) bg_tb_trans_pane_cp08

0x8417,	// (0x0004a3b9) cam6_battery_pane_ParamLimits

0x8417,	// (0x0004a3b9) cam6_battery_pane

0x842d,	// (0x0004a3cf) cam6_indi_pane_g1_ParamLimits

0x842d,	// (0x0004a3cf) cam6_indi_pane_g1

0x843f,	// (0x0004a3e1) cam6_indi_pane_g2_ParamLimits

0x843f,	// (0x0004a3e1) cam6_indi_pane_g2

0x8451,	// (0x0004a3f3) cam6_indi_pane_g3_ParamLimits

0x8451,	// (0x0004a3f3) cam6_indi_pane_g3

0x0002,

0xf9f7,	// (0x00051999) cam6_indi_pane_g_ParamLimits

0xf9f7,	// (0x00051999) cam6_indi_pane_g

0x8463,	// (0x0004a405) cam6_indi_pane_t1_ParamLimits

0x8463,	// (0x0004a405) cam6_indi_pane_t1

0x8489,	// (0x0004a42b) cam6_autofocus_pane_g1

0x8491,	// (0x0004a433) cam6_autofocus_pane_g2

0x8499,	// (0x0004a43b) cam6_autofocus_pane_g3

0x84a1,	// (0x0004a443) cam6_autofocus_pane_g4

0x0003,

0xf9fe,	// (0x000519a0) cam6_autofocus_pane_g

0x84a9,	// (0x0004a44b) cam6_timer_pane_g1

0x84b1,	// (0x0004a453) cam6_timer_pane_t1

0x84bf,	// (0x0004a461) cam6_zoom_cont_pane

0x84c7,	// (0x0004a469) cam6_zoom_pane_g1

0x84cf,	// (0x0004a471) cam6_zoom_pane_g2

0x84d7,	// (0x0004a479) cam6_zoom_pane_g3

0x0002,

0xfa07,	// (0x000519a9) cam6_zoom_pane_g

0xe839,	// (0x000507db) cam6_battery_pane_g1

0xe839,	// (0x000507db) cam6_battery_pane_g2

0x0001,

0xf60e,	// (0x000515b0) cam6_battery_pane_g

0x84df,	// (0x0004a481) cam6_zoom_cont_pane_g1

0x84e8,	// (0x0004a48a) cam6_zoom_cont_pane_g2

0x84f1,	// (0x0004a493) cam6_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x000519b0) cam6_zoom_cont_pane_g

0x850e,	// (0x0004a4b0) cam6_mode_pane_cp_ParamLimits

0x850e,	// (0x0004a4b0) cam6_mode_pane_cp

0x83bd,	// (0x0004a35f) cam6_zoom_pane_cp_ParamLimits

0x83bd,	// (0x0004a35f) cam6_zoom_pane_cp

0x8520,	// (0x0004a4c2) vid6_image_uncrop_cif_pane_ParamLimits

0x8520,	// (0x0004a4c2) vid6_image_uncrop_cif_pane

0x8530,	// (0x0004a4d2) vid6_image_uncrop_nhd_pane_ParamLimits

0x8530,	// (0x0004a4d2) vid6_image_uncrop_nhd_pane

0x837a,	// (0x0004a31c) vid6_image_uncrop_vga_pane_ParamLimits

0x837a,	// (0x0004a31c) vid6_image_uncrop_vga_pane

0x854f,	// (0x0004a4f1) vid6_image_uncrop_wvga_pane_ParamLimits

0x854f,	// (0x0004a4f1) vid6_image_uncrop_wvga_pane

0x855e,	// (0x0004a500) vid6_indi_pane_ParamLimits

0x855e,	// (0x0004a500) vid6_indi_pane

0x8409,	// (0x0004a3ab) bg_tb_trans_pane_cp09_ParamLimits

0x8409,	// (0x0004a3ab) bg_tb_trans_pane_cp09

0x8576,	// (0x0004a518) cam6_battery_pane_cp_ParamLimits

0x8576,	// (0x0004a518) cam6_battery_pane_cp

0x8582,	// (0x0004a524) vid6_indi_pane_g1_ParamLimits

0x8582,	// (0x0004a524) vid6_indi_pane_g1

0x8594,	// (0x0004a536) vid6_indi_pane_g2_ParamLimits

0x8594,	// (0x0004a536) vid6_indi_pane_g2

0x85a6,	// (0x0004a548) vid6_indi_pane_g3_ParamLimits

0x85a6,	// (0x0004a548) vid6_indi_pane_g3

0x85bb,	// (0x0004a55d) vid6_indi_pane_g4_ParamLimits

0x85bb,	// (0x0004a55d) vid6_indi_pane_g4

0x85d0,	// (0x0004a572) vid6_indi_pane_g5_ParamLimits

0x85d0,	// (0x0004a572) vid6_indi_pane_g5

0x0004,

0xfa15,	// (0x000519b7) vid6_indi_pane_g_ParamLimits

0xfa15,	// (0x000519b7) vid6_indi_pane_g

0x85ea,	// (0x0004a58c) vid6_indi_pane_t1_ParamLimits

0x85ea,	// (0x0004a58c) vid6_indi_pane_t1

0x8600,	// (0x0004a5a2) vid6_indi_pane_t2_ParamLimits

0x8600,	// (0x0004a5a2) vid6_indi_pane_t2

0x8628,	// (0x0004a5ca) vid6_indi_pane_t3_ParamLimits

0x8628,	// (0x0004a5ca) vid6_indi_pane_t3

0x8650,	// (0x0004a5f2) vid6_indi_pane_t4_ParamLimits

0x8650,	// (0x0004a5f2) vid6_indi_pane_t4

0x0003,

0xfa20,	// (0x000519c2) vid6_indi_pane_t_ParamLimits

0xfa20,	// (0x000519c2) vid6_indi_pane_t

0x8674,	// (0x0004a616) wait_bar_pane_cp08

0x8683,	// (0x0004a625) main_cset_text2_pane_t1_ParamLimits

0x8683,	// (0x0004a625) main_cset_text2_pane_t1

0x84f9,	// (0x0004a49b) listscroll_gen_pane_cp06_t1_ParamLimits

0x84f9,	// (0x0004a49b) listscroll_gen_pane_cp06_t1

0xa620,	// (0x0004c5c2) main_cam6_set_pane

0xeaad,	// (0x00050a4f) bg_tb_trans_pane_cp06_ParamLimits

0xad72,	// (0x0004cd14) cam4_indicators_pane_g1_ParamLimits

0xad83,	// (0x0004cd25) cam4_indicators_pane_g2_ParamLimits

0xf795,	// (0x00051737) cam4_indicators_pane_g_ParamLimits

0xada1,	// (0x0004cd43) cam4_indicators_pane_t1_ParamLimits

0xadc3,	// (0x0004cd65) bg_tb_trans_pane_cp07_ParamLimits

0x6a43,	// (0x000489e5) vid4_indicators_pane_g1_ParamLimits

0x6a50,	// (0x000489f2) vid4_indicators_pane_g2_ParamLimits

0x6a5d,	// (0x000489ff) vid4_indicators_pane_g3_ParamLimits

0x6a6a,	// (0x00048a0c) vid4_indicators_pane_g4_ParamLimits

0xf7a7,	// (0x00051749) vid4_indicators_pane_g_ParamLimits

0x6a82,	// (0x00048a24) vid4_indicators_pane_t1_ParamLimits

0xaf4e,	// (0x0004cef0) vid4_progress_pane_g1_ParamLimits

0xaf5e,	// (0x0004cf00) vid4_progress_pane_g2_ParamLimits

0xa9ac,	// (0x0004c94e) vid4_progress_pane_g3_ParamLimits

0xaf6e,	// (0x0004cf10) vid4_progress_pane_g4_ParamLimits

0xf951,	// (0x000518f3) vid4_progress_pane_g_ParamLimits

0xaf8c,	// (0x0004cf2e) vid4_progress_pane_t1_ParamLimits

0xafa1,	// (0x0004cf43) vid4_progress_pane_t2_ParamLimits

0xafb7,	// (0x0004cf59) vid4_progress_pane_t3_ParamLimits

0xf95c,	// (0x000518fe) vid4_progress_pane_t_ParamLimits

0xafcc,	// (0x0004cf6e) wait_bar_pane_cp07_ParamLimits

0x86a0,	// (0x0004a642) main_cam6_set_pane_g2_ParamLimits

0x86a0,	// (0x0004a642) main_cam6_set_pane_g2

0x86c4,	// (0x0004a666) main_cset6_listscroll_pane_ParamLimits

0x86c4,	// (0x0004a666) main_cset6_listscroll_pane

0x86e4,	// (0x0004a686) main_cset6_slider_pane_ParamLimits

0x86e4,	// (0x0004a686) main_cset6_slider_pane

0x86fa,	// (0x0004a69c) main_cset6_text2_pane_ParamLimits

0x86fa,	// (0x0004a69c) main_cset6_text2_pane

0x8708,	// (0x0004a6aa) main_cset6_text_pane

0x8710,	// (0x0004a6b2) main_cset_list_pane_copy1_ParamLimits

0x8710,	// (0x0004a6b2) main_cset_list_pane_copy1

0x8720,	// (0x0004a6c2) scroll_pane_cp028_copy1

0x8729,	// (0x0004a6cb) cset_list_set_pane_copy1

0x873a,	// (0x0004a6dc) aid_position_infowindow_above_copy1

0x8742,	// (0x0004a6e4) aid_position_infowindow_below_copy1

0x0ffd,	// (0x00042f9f) cset_list_set_pane_g1_copy1

0x1005,	// (0x00042fa7) cset_list_set_pane_g3_copy1_ParamLimits

0x1005,	// (0x00042fa7) cset_list_set_pane_g3_copy1

0x1014,	// (0x00042fb6) cset_list_set_pane_t1_copy1_ParamLimits

0x1014,	// (0x00042fb6) cset_list_set_pane_t1_copy1

0xd5ee,	// (0x0004f590) list_highlight_pane_cp021_copy1_ParamLimits

0xd5ee,	// (0x0004f590) list_highlight_pane_cp021_copy1

0x874a,	// (0x0004a6ec) cset6_slider_pane_ParamLimits

0x874a,	// (0x0004a6ec) cset6_slider_pane

0x8776,	// (0x0004a718) main_cset6_slider_pane_g1_ParamLimits

0x8776,	// (0x0004a718) main_cset6_slider_pane_g1

0x879e,	// (0x0004a740) main_cset6_slider_pane_g2_ParamLimits

0x879e,	// (0x0004a740) main_cset6_slider_pane_g2

0x87c6,	// (0x0004a768) main_cset6_slider_pane_g3_ParamLimits

0x87c6,	// (0x0004a768) main_cset6_slider_pane_g3

0x87d2,	// (0x0004a774) main_cset6_slider_pane_g4_ParamLimits

0x87d2,	// (0x0004a774) main_cset6_slider_pane_g4

0x87de,	// (0x0004a780) main_cset6_slider_pane_g5_ParamLimits

0x87de,	// (0x0004a780) main_cset6_slider_pane_g5

0x7287,	// (0x00049229) main_cset6_slider_pane_g7_ParamLimits

0x7287,	// (0x00049229) main_cset6_slider_pane_g7

0x7293,	// (0x00049235) main_cset6_slider_pane_g8_ParamLimits

0x7293,	// (0x00049235) main_cset6_slider_pane_g8

0x729f,	// (0x00049241) main_cset6_slider_pane_g9_ParamLimits

0x729f,	// (0x00049241) main_cset6_slider_pane_g9

0x72ab,	// (0x0004924d) main_cset6_slider_pane_g10_ParamLimits

0x72ab,	// (0x0004924d) main_cset6_slider_pane_g10

0x72b7,	// (0x00049259) main_cset6_slider_pane_g11_ParamLimits

0x72b7,	// (0x00049259) main_cset6_slider_pane_g11

0x72c3,	// (0x00049265) main_cset6_slider_pane_g12_ParamLimits

0x72c3,	// (0x00049265) main_cset6_slider_pane_g12

0x72cf,	// (0x00049271) main_cset6_slider_pane_g13_ParamLimits

0x72cf,	// (0x00049271) main_cset6_slider_pane_g13

0x72db,	// (0x0004927d) main_cset6_slider_pane_g14_ParamLimits

0x72db,	// (0x0004927d) main_cset6_slider_pane_g14

0x87ea,	// (0x0004a78c) main_cset6_slider_pane_g15_ParamLimits

0x87ea,	// (0x0004a78c) main_cset6_slider_pane_g15

0x72ff,	// (0x000492a1) main_cset6_slider_pane_g16_ParamLimits

0x72ff,	// (0x000492a1) main_cset6_slider_pane_g16

0x730b,	// (0x000492ad) main_cset6_slider_pane_g17_ParamLimits

0x730b,	// (0x000492ad) main_cset6_slider_pane_g17

0x0011,

0xfa29,	// (0x000519cb) main_cset6_slider_pane_g_ParamLimits

0xfa29,	// (0x000519cb) main_cset6_slider_pane_g

0x881a,	// (0x0004a7bc) main_cset6_slider_pane_t1_ParamLimits

0x881a,	// (0x0004a7bc) main_cset6_slider_pane_t1

0x885b,	// (0x0004a7fd) main_cset6_slider_pane_t2_ParamLimits

0x885b,	// (0x0004a7fd) main_cset6_slider_pane_t2

0x8886,	// (0x0004a828) main_cset6_slider_pane_t3_ParamLimits

0x8886,	// (0x0004a828) main_cset6_slider_pane_t3

0x88b1,	// (0x0004a853) main_cset6_slider_pane_t4_ParamLimits

0x88b1,	// (0x0004a853) main_cset6_slider_pane_t4

0x88dc,	// (0x0004a87e) main_cset6_slider_pane_t5_ParamLimits

0x88dc,	// (0x0004a87e) main_cset6_slider_pane_t5

0x8907,	// (0x0004a8a9) main_cset6_slider_pane_t7_ParamLimits

0x8907,	// (0x0004a8a9) main_cset6_slider_pane_t7

0x893d,	// (0x0004a8df) main_cset6_slider_pane_t8_ParamLimits

0x893d,	// (0x0004a8df) main_cset6_slider_pane_t8

0x8961,	// (0x0004a903) main_cset6_slider_pane_t9_ParamLimits

0x8961,	// (0x0004a903) main_cset6_slider_pane_t9

0x8985,	// (0x0004a927) main_cset6_slider_pane_t10_ParamLimits

0x8985,	// (0x0004a927) main_cset6_slider_pane_t10

0x89a9,	// (0x0004a94b) main_cset6_slider_pane_t11_ParamLimits

0x89a9,	// (0x0004a94b) main_cset6_slider_pane_t11

0x89cd,	// (0x0004a96f) main_cset6_slider_pane_t14_ParamLimits

0x89cd,	// (0x0004a96f) main_cset6_slider_pane_t14

0x8a06,	// (0x0004a9a8) main_cset6_slider_pane_t15_ParamLimits

0x8a06,	// (0x0004a9a8) main_cset6_slider_pane_t15

0x000b,

0xfa4e,	// (0x000519f0) main_cset6_slider_pane_t_ParamLimits

0xfa4e,	// (0x000519f0) main_cset6_slider_pane_t

0x756e,	// (0x00049510) cset_slider_pane_g1_copy1

0x7577,	// (0x00049519) cset_slider_pane_g2_copy1

0x7580,	// (0x00049522) cset_slider_pane_g3_copy1

0xa620,	// (0x0004c5c2) bg_popup_sub_pane_cp011_copy1

0x7915,	// (0x000498b7) main_cset_text_pane_g1_copy1

0x791d,	// (0x000498bf) main_cset_text_pane_t1_copy1

0x792b,	// (0x000498cd) main_cset_text_pane_t2_copy1

0x7939,	// (0x000498db) main_cset_text_pane_t3_copy1

0x7947,	// (0x000498e9) main_cset_text_pane_t4_copy1

0x7955,	// (0x000498f7) main_cset_text_pane_t5_copy1

0x7963,	// (0x00049905) main_cset_text_pane_t6_copy1

0x7971,	// (0x00049913) main_cset_text_pane_t7_copy1

0x8683,	// (0x0004a625) main_cset_text2_pane_t1_copy1

0xa620,	// (0x0004c5c2) main_ncimui_pane

0x4679,	// (0x0004661b) popup_query_ncimui_window_ParamLimits

0x4679,	// (0x0004661b) popup_query_ncimui_window

0xaabf,	// (0x0004ca61) field_cale_ev2_pane_g4_ParamLimits

0xaabf,	// (0x0004ca61) field_cale_ev2_pane_g4

0x61fa,	// (0x0004819c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61fa,	// (0x0004819c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf733,	// (0x000516d5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf733,	// (0x000516d5) cell_video_dialer_keypad_pane_g

0x6212,	// (0x000481b4) cell_video_dialer_keypad_pane_t1

0xa620,	// (0x0004c5c2) bg_popup_window_pane_cp012

0xcd72,	// (0x0004ed14) heading_pane_cp06

0x8b56,	// (0x0004aaf8) ncim_query_content_pane

0xa620,	// (0x0004c5c2) bg_popup_heading_pane_cp01

0x8b5e,	// (0x0004ab00) ncim_heading_pane_t1

0x8b6c,	// (0x0004ab0e) ncim_indicator_popup_pane

0x8b7e,	// (0x0004ab20) ncim_query_button_pane

0x8b9e,	// (0x0004ab40) ncim_query_content_pane_t1

0x8bb0,	// (0x0004ab52) ncim_query_content_pane_t2

0x0005,

0xfa8d,	// (0x00051a2f) ncim_query_content_pane_t

0x8c62,	// (0x0004ac04) ncim_query_list_pane

0x8c74,	// (0x0004ac16) ncim_query_popup_pane

0x8b6c,	// (0x0004ab0e) ncim_indicator_popup_pane_ParamLimits

0x8b86,	// (0x0004ab28) ncim_query_content_pane_g1_ParamLimits

0x8b86,	// (0x0004ab28) ncim_query_content_pane_g1

0x8b9e,	// (0x0004ab40) ncim_query_content_pane_t1_ParamLimits

0x8bb0,	// (0x0004ab52) ncim_query_content_pane_t2_ParamLimits

0x8bc2,	// (0x0004ab64) ncim_query_content_pane_t3_ParamLimits

0x8bc2,	// (0x0004ab64) ncim_query_content_pane_t3

0x8bea,	// (0x0004ab8c) ncim_query_content_pane_t4_ParamLimits

0x8bea,	// (0x0004ab8c) ncim_query_content_pane_t4

0x8c12,	// (0x0004abb4) ncim_query_content_pane_t5_ParamLimits

0x8c12,	// (0x0004abb4) ncim_query_content_pane_t5

0x8c3a,	// (0x0004abdc) ncim_query_content_pane_t6_ParamLimits

0x8c3a,	// (0x0004abdc) ncim_query_content_pane_t6

0xfa8d,	// (0x00051a2f) ncim_query_content_pane_t_ParamLimits

0x8c62,	// (0x0004ac04) ncim_query_list_pane_ParamLimits

0x8c74,	// (0x0004ac16) ncim_query_popup_pane_ParamLimits

0x8c88,	// (0x0004ac2a) wait_bar_pane_cp04

0xa620,	// (0x0004c5c2) input_focus_pane_cp011

0x8c90,	// (0x0004ac32) ncim_query_popup_pane_t1

0x8c9e,	// (0x0004ac40) ncim_list_query_list_pane_ParamLimits

0x8c9e,	// (0x0004ac40) ncim_list_query_list_pane

0xa620,	// (0x0004c5c2) bg_button_pane_cp027

0x8cab,	// (0x0004ac4d) ncim_query_button_pane_g1

0xa620,	// (0x0004c5c2) list_highlight_pane_cp012

0x8cb5,	// (0x0004ac57) ncim_list_query_list_pane_g1

0x8cbd,	// (0x0004ac5f) ncim_list_query_list_pane_t1

0xad92,	// (0x0004cd34) cam4_indicators_pane_g3_ParamLimits

0xad92,	// (0x0004cd34) cam4_indicators_pane_g3

0x6a76,	// (0x00048a18) vid4_indicators_pane_g5_ParamLimits

0x6a76,	// (0x00048a18) vid4_indicators_pane_g5

0xaf7d,	// (0x0004cf1f) vid4_progress_pane_g5_ParamLimits

0xaf7d,	// (0x0004cf1f) vid4_progress_pane_g5

0x8a6f,	// (0x0004aa11) main_ncimui_pane_g1

0x8ac5,	// (0x0004aa67) ncimui_group_query_pane_ParamLimits

0x8ac5,	// (0x0004aa67) ncimui_group_query_pane

0x8b01,	// (0x0004aaa3) ncimui_list_pane_ParamLimits

0x8b01,	// (0x0004aaa3) ncimui_list_pane

0x8b22,	// (0x0004aac4) ncimui_text_pane_ParamLimits

0x8b22,	// (0x0004aac4) ncimui_text_pane

0x8ccb,	// (0x0004ac6d) ncimui_text_pane_t1_ParamLimits

0x8ccb,	// (0x0004ac6d) ncimui_text_pane_t1

0x8ce9,	// (0x0004ac8b) ncimui_list_single_graphic_pane_ParamLimits

0x8ce9,	// (0x0004ac8b) ncimui_list_single_graphic_pane

0x8cf9,	// (0x0004ac9b) ncimui_query_pane_ParamLimits

0x8cf9,	// (0x0004ac9b) ncimui_query_pane

0xa620,	// (0x0004c5c2) list_highlight_pane_cp013

0x8d0c,	// (0x0004acae) ncim_list_query_list_pane_t1_copy1

0x8cb5,	// (0x0004ac57) ncim_list_single_graphic_pane_g1

0x8d1a,	// (0x0004acbc) ncim_query_button_pane_cp01

0x8d26,	// (0x0004acc8) ncim_query_entry_pane_ParamLimits

0x8d26,	// (0x0004acc8) ncim_query_entry_pane

0x8d39,	// (0x0004acdb) ncimui_query_pane_g1

0x8d45,	// (0x0004ace7) ncimui_query_pane_t1_ParamLimits

0x8d45,	// (0x0004ace7) ncimui_query_pane_t1

0xd5ee,	// (0x0004f590) input_focus_pane_cp012

0x8d5e,	// (0x0004ad00) ncim_query_entry_pane_t1

0xc50b,	// (0x0004e4ad) main_im_pane_ParamLimits

0xd5ee,	// (0x0004f590) main_mobtv_pane_ParamLimits

0xd5ee,	// (0x0004f590) main_mobtv_pane

0x8802,	// (0x0004a7a4) main_cset6_slider_pane_g18_ParamLimits

0x8802,	// (0x0004a7a4) main_cset6_slider_pane_g18

0x880e,	// (0x0004a7b0) main_cset6_slider_pane_g19_ParamLimits

0x880e,	// (0x0004a7b0) main_cset6_slider_pane_g19

0x8d70,	// (0x0004ad12) bg_main_mobtv_pane_ParamLimits

0x8d70,	// (0x0004ad12) bg_main_mobtv_pane

0x8d7e,	// (0x0004ad20) main_mobtv_info_pane

0x8d87,	// (0x0004ad29) main_mobtv_loading_pane_ParamLimits

0x8d87,	// (0x0004ad29) main_mobtv_loading_pane

0x8d94,	// (0x0004ad36) main_mobtv_pg_channel_list_pane

0x8d9e,	// (0x0004ad40) main_mobtv_pg_hdr_pane

0x8da7,	// (0x0004ad49) main_mobtv_programe_curr_pane_ParamLimits

0x8da7,	// (0x0004ad49) main_mobtv_programe_curr_pane

0x8db4,	// (0x0004ad56) main_mobtv_programe_next_pane_ParamLimits

0x8db4,	// (0x0004ad56) main_mobtv_programe_next_pane

0x8dc1,	// (0x0004ad63) popup_mobtv_noti_window

0xe839,	// (0x000507db) main_tv_pg_hdr_pane_g1

0x8dc9,	// (0x0004ad6b) main_tv_pg_hdr_pane_g2

0x8dd1,	// (0x0004ad73) main_tv_pg_hdr_pane_g3

0x8dd9,	// (0x0004ad7b) main_tv_pg_hdr_pane_g4

0x8de1,	// (0x0004ad83) main_tv_pg_hdr_pane_g5

0x8deb,	// (0x0004ad8d) main_tv_pg_hdr_pane_g6

0x8df5,	// (0x0004ad97) main_tv_pg_hdr_pane_g7

0x8dff,	// (0x0004ada1) main_tv_pg_hdr_pane_g8

0x8e09,	// (0x0004adab) main_tv_pg_hdr_pane_g9

0x8e13,	// (0x0004adb5) main_tv_pg_hdr_pane_g10

0x8e1d,	// (0x0004adbf) main_tv_pg_hdr_pane_g11

0x000a,

0xfa9a,	// (0x00051a3c) main_tv_pg_hdr_pane_g

0x8e27,	// (0x0004adc9) main_tv_pg_hdr_pane_t1

0x8e35,	// (0x0004add7) main_tv_pg_hdr_pane_t2

0x8e43,	// (0x0004ade5) main_tv_pg_hdr_pane_t3

0x8e53,	// (0x0004adf5) main_tv_pg_hdr_pane_t4

0x8e63,	// (0x0004ae05) main_tv_pg_hdr_pane_t5

0x0004,

0xfab1,	// (0x00051a53) main_tv_pg_hdr_pane_t

0x8e73,	// (0x0004ae15) single_mobtv_pg_channel_pane_ParamLimits

0x8e73,	// (0x0004ae15) single_mobtv_pg_channel_pane

0x8e85,	// (0x0004ae27) single_mobtv_pg_channel_table_pane

0x8e8e,	// (0x0004ae30) single_mobtv_pg_channel_thumb_pane

0x8e97,	// (0x0004ae39) single_tv_pg_channel_pane_g1

0x8ea0,	// (0x0004ae42) single_tv_pg_channel_pane_g2

0x0001,

0xfabc,	// (0x00051a5e) single_tv_pg_channel_pane_g

0xeaad,	// (0x00050a4f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeaad,	// (0x00050a4f) bg_single_mobtv_pg_channel_thumb_pane

0x8ea9,	// (0x0004ae4b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8ea9,	// (0x0004ae4b) single_mobtv_pg_channel_thumb_pane_g1

0x8eb7,	// (0x0004ae59) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8eb7,	// (0x0004ae59) single_mobtv_pg_channel_thumb_pane_g2

0x8ec3,	// (0x0004ae65) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8ec3,	// (0x0004ae65) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfac1,	// (0x00051a63) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfac1,	// (0x00051a63) single_mobtv_pg_channel_thumb_pane_g

0x8ecf,	// (0x0004ae71) single_mobtv_pg_channel_thumb_pane_t1

0x8edd,	// (0x0004ae7f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfac8,	// (0x00051a6a) single_mobtv_pg_channel_thumb_pane_t

0xe839,	// (0x000507db) bg_single_mobtv_pg_channel_table_pane_g1

0xe839,	// (0x000507db) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf60e,	// (0x000515b0) bg_single_mobtv_pg_channel_table_pane_g

0x8eeb,	// (0x0004ae8d) single_mobtv_pg_channel_table_pane_t1

0x8ef9,	// (0x0004ae9b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfacd,	// (0x00051a6f) single_mobtv_pg_channel_table_pane_t

0x8f0f,	// (0x0004aeb1) main_mobtv_info_pane_g1_ParamLimits

0x8f0f,	// (0x0004aeb1) main_mobtv_info_pane_g1

0x8f2d,	// (0x0004aecf) main_mobtv_info_pane_t1_ParamLimits

0x8f2d,	// (0x0004aecf) main_mobtv_info_pane_t1

0x8fa5,	// (0x0004af47) main_mobtv_info_pane_t2_ParamLimits

0x8fa5,	// (0x0004af47) main_mobtv_info_pane_t2

0x0002,

0xfad7,	// (0x00051a79) main_mobtv_info_pane_t_ParamLimits

0xfad7,	// (0x00051a79) main_mobtv_info_pane_t

0x9034,	// (0x0004afd6) wait_bar_pane_cp05

0x9046,	// (0x0004afe8) main_mobtv_loading_pane_g1_ParamLimits

0x9046,	// (0x0004afe8) main_mobtv_loading_pane_g1

0x9059,	// (0x0004affb) main_mobtv_loading_pane_g2_ParamLimits

0x9059,	// (0x0004affb) main_mobtv_loading_pane_g2

0x9065,	// (0x0004b007) main_mobtv_loading_pane_g3_ParamLimits

0x9065,	// (0x0004b007) main_mobtv_loading_pane_g3

0x0002,

0xfade,	// (0x00051a80) main_mobtv_loading_pane_g_ParamLimits

0xfade,	// (0x00051a80) main_mobtv_loading_pane_g

0x9078,	// (0x0004b01a) main_mobtv_loading_pane_t1_ParamLimits

0x9078,	// (0x0004b01a) main_mobtv_loading_pane_t1

0x9090,	// (0x0004b032) main_mobtv_loading_pane_t2_ParamLimits

0x9090,	// (0x0004b032) main_mobtv_loading_pane_t2

0x0001,

0xfae5,	// (0x00051a87) main_mobtv_loading_pane_t_ParamLimits

0xfae5,	// (0x00051a87) main_mobtv_loading_pane_t

0x90b4,	// (0x0004b056) wait_bar_pane_cp06_ParamLimits

0x90b4,	// (0x0004b056) wait_bar_pane_cp06

0x90c3,	// (0x0004b065) main_mobtv_programe_curr_pane_t1

0x90d1,	// (0x0004b073) main_mobtv_programe_curr_pane_t2

0x0001,

0xfaea,	// (0x00051a8c) main_mobtv_programe_curr_pane_t

0x90df,	// (0x0004b081) main_mobtv_programe_next_pane_t1

0x90ed,	// (0x0004b08f) main_mobtv_programe_next_pane_t2

0x90fb,	// (0x0004b09d) main_mobtv_programe_next_pane_t3

0x0002,

0xfaef,	// (0x00051a91) main_mobtv_programe_next_pane_t

0xa620,	// (0x0004c5c2) bg_popup_mobtv_noti_window_pane

0x9109,	// (0x0004b0ab) popup_mobtv_noti_window_g1

0x9111,	// (0x0004b0b3) popup_mobtv_noti_window_t1

0x911f,	// (0x0004b0c1) popup_mobtv_noti_window_t2

0x0001,

0xfaf6,	// (0x00051a98) popup_mobtv_noti_window_t

0xe839,	// (0x000507db) bg_popup_mobtv_noti_window_pane_g1

0xa620,	// (0x0004c5c2) sc_clock_pane

0xa620,	// (0x0004c5c2) main_fs_bigclock_pane

0x8138,	// (0x0004a0da) blid2_tripm_pane_t4_ParamLimits

0x8138,	// (0x0004a0da) blid2_tripm_pane_t4

0x912d,	// (0x0004b0cf) sc_clock_pane_g1_ParamLimits

0x912d,	// (0x0004b0cf) sc_clock_pane_g1

0x913f,	// (0x0004b0e1) sc_clock_pane_t1_ParamLimits

0x913f,	// (0x0004b0e1) sc_clock_pane_t1

0x9161,	// (0x0004b103) sc_clock_pane_t2_ParamLimits

0x9161,	// (0x0004b103) sc_clock_pane_t2

0x9179,	// (0x0004b11b) sc_clock_pane_t3_ParamLimits

0x9179,	// (0x0004b11b) sc_clock_pane_t3

0x0004,

0xfafb,	// (0x00051a9d) sc_clock_pane_t_ParamLimits

0xfafb,	// (0x00051a9d) sc_clock_pane_t

0x9de4,	// (0x0004bd86) main_fs_bigclock_indicator_pane_ParamLimits

0x9de4,	// (0x0004bd86) main_fs_bigclock_indicator_pane

0xea7d,	// (0x00050a1f) main_fs_bigclock_pane_g1_ParamLimits

0xea7d,	// (0x00050a1f) main_fs_bigclock_pane_g1

0x9df0,	// (0x0004bd92) main_fs_bigclock_pane_t1_ParamLimits

0x9df0,	// (0x0004bd92) main_fs_bigclock_pane_t1

0x9e02,	// (0x0004bda4) main_fs_bigclock_pane_t2_ParamLimits

0x9e02,	// (0x0004bda4) main_fs_bigclock_pane_t2

0x9e16,	// (0x0004bdb8) main_fs_bigclock_pane_t3_ParamLimits

0x9e16,	// (0x0004bdb8) main_fs_bigclock_pane_t3

0x0002,

0xfcff,	// (0x00051ca1) main_fs_bigclock_pane_t_ParamLimits

0xfcff,	// (0x00051ca1) main_fs_bigclock_pane_t

0xb98a,	// (0x0004d92c) main_fs_bigclock_indicator_pane_g1

0x8b92,	// (0x0004ab34) ncim_query_content_pane_g2_ParamLimits

0x8b92,	// (0x0004ab34) ncim_query_content_pane_g2

0x0001,

0xfa88,	// (0x00051a2a) ncim_query_content_pane_g_ParamLimits

0xfa88,	// (0x00051a2a) ncim_query_content_pane_g

0x9192,	// (0x0004b134) sc_clock_pane_t4_ParamLimits

0x9192,	// (0x0004b134) sc_clock_pane_t4

0xd5ee,	// (0x0004f590) main_radioblah_pane

0x67cb,	// (0x0004876d) cell_call4_button_pane_t1_copy1_ParamLimits

0x67cb,	// (0x0004876d) cell_call4_button_pane_t1_copy1

0x8a77,	// (0x0004aa19) main_ncimui_pane_t1_ParamLimits

0x8a77,	// (0x0004aa19) main_ncimui_pane_t1

0x8a91,	// (0x0004aa33) main_ncimui_pane_t2_ParamLimits

0x8a91,	// (0x0004aa33) main_ncimui_pane_t2

0x0002,

0xfa81,	// (0x00051a23) main_ncimui_pane_t_ParamLimits

0xfa81,	// (0x00051a23) main_ncimui_pane_t

0x9366,	// (0x0004b308) main_radioblah_anim_pane_ParamLimits

0x9366,	// (0x0004b308) main_radioblah_anim_pane

0x9377,	// (0x0004b319) main_radioblah_info_pane_ParamLimits

0x9377,	// (0x0004b319) main_radioblah_info_pane

0x939d,	// (0x0004b33f) main_radioblah_pane_t1_ParamLimits

0x939d,	// (0x0004b33f) main_radioblah_pane_t1

0x93b9,	// (0x0004b35b) main_radioblah_pane_t2_ParamLimits

0x93b9,	// (0x0004b35b) main_radioblah_pane_t2

0x0003,

0xfb1c,	// (0x00051abe) main_radioblah_pane_t_ParamLimits

0xfb1c,	// (0x00051abe) main_radioblah_pane_t

0x9401,	// (0x0004b3a3) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9401,	// (0x0004b3a3) main_radioblah_rocker_ctrl_pane

0x9459,	// (0x0004b3fb) main_radioblah_info_pane_t1_ParamLimits

0x9459,	// (0x0004b3fb) main_radioblah_info_pane_t1

0x9493,	// (0x0004b435) main_radioblah_info_pane_t2_ParamLimits

0x9493,	// (0x0004b435) main_radioblah_info_pane_t2

0x0003,

0xfb25,	// (0x00051ac7) main_radioblah_info_pane_t_ParamLimits

0xfb25,	// (0x00051ac7) main_radioblah_info_pane_t

0xe839,	// (0x000507db) main_radioblah_rocker_ctrl_pane_g1

0x9543,	// (0x0004b4e5) main_radioblah_rocker_ctrl_pane_g2

0x954b,	// (0x0004b4ed) main_radioblah_rocker_ctrl_pane_g3

0x9553,	// (0x0004b4f5) main_radioblah_rocker_ctrl_pane_g4

0x955b,	// (0x0004b4fd) main_radioblah_rocker_ctrl_pane_g5

0x9563,	// (0x0004b505) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb2e,	// (0x00051ad0) main_radioblah_rocker_ctrl_pane_g

0x8683,	// (0x0004a625) main_cset_text2_pane_t1_copy1_ParamLimits

0xad62,	// (0x0004cd04) cam4_image_uncrop_qvga_pane

0xadbb,	// (0x0004cd5d) vid4_image_uncrop_qcif_pane

0xb038,	// (0x0004cfda) cam6_image_uncrop_qvga_pane_ParamLimits

0xb038,	// (0x0004cfda) cam6_image_uncrop_qvga_pane

0x853f,	// (0x0004a4e1) vid6_image_uncrop_qcif_pane_ParamLimits

0x853f,	// (0x0004a4e1) vid6_image_uncrop_qcif_pane

0xa620,	// (0x0004c5c2) bg_popup_preview_window_pane_cp03

0x8a3f,	// (0x0004a9e1) list_cset_text2_pane

0x8a47,	// (0x0004a9e9) main_cset6_text2_pane_g1

0x8a4f,	// (0x0004a9f1) main_cset6_text2_pane_t1

0x956b,	// (0x0004b50d) list_cset_text2_pane_t1_ParamLimits

0x956b,	// (0x0004b50d) list_cset_text2_pane_t1

0xd5ee,	// (0x0004f590) main_radioblah_pane_ParamLimits

0x9020,	// (0x0004afc2) main_mobtv_info_pane_t3_ParamLimits

0x9020,	// (0x0004afc2) main_mobtv_info_pane_t3

0x938b,	// (0x0004b32d) main_radioblah_pane_g1

0x9429,	// (0x0004b3cb) main_radioblah_info_pane_g1

0x94e8,	// (0x0004b48a) main_radioblah_info_pane_t3_ParamLimits

0x94e8,	// (0x0004b48a) main_radioblah_info_pane_t3

0x3180,	// (0x00045122) highlight_cell_cale_month_pane_ParamLimits

0x3180,	// (0x00045122) highlight_cell_cale_month_pane

0xa620,	// (0x0004c5c2) main_phob_fisheye_pane

0xeb95,	// (0x00050b37) scroll_pane_cp0031_ParamLimits

0xeb95,	// (0x00050b37) scroll_pane_cp0031

0x8674,	// (0x0004a616) wait_bar_pane_cp08_ParamLimits

0x8729,	// (0x0004a6cb) cset_list_set_pane_copy1_ParamLimits

0x9584,	// (0x0004b526) highlight_cell_cale_month_pane_g1

0x958c,	// (0x0004b52e) highlight_cell_cale_month_pane_t1

0x7d7e,	// (0x00049d20) list_gen_pane_cp01

0x71d3,	// (0x00049175) scroll_pane_01

0x959a,	// (0x0004b53c) list_single_double_fisheye_pane

0x1029,	// (0x00042fcb) list_double_fisheye_pane_g1_ParamLimits

0x1029,	// (0x00042fcb) list_double_fisheye_pane_g1

0x1035,	// (0x00042fd7) list_double_fisheye_pane_g2_ParamLimits

0x1035,	// (0x00042fd7) list_double_fisheye_pane_g2

0x95a3,	// (0x0004b545) list_double_fisheye_pane_g3_ParamLimits

0x95a3,	// (0x0004b545) list_double_fisheye_pane_g3

0x0004,

0xfb3b,	// (0x00051add) list_double_fisheye_pane_g_ParamLimits

0xfb3b,	// (0x00051add) list_double_fisheye_pane_g

0x1066,	// (0x00043008) list_double_fisheye_pane_t1_ParamLimits

0x1066,	// (0x00043008) list_double_fisheye_pane_t1

0x1081,	// (0x00043023) list_double_fisheye_pane_t2_ParamLimits

0x1081,	// (0x00043023) list_double_fisheye_pane_t2

0x0001,

0xfb46,	// (0x00051ae8) list_double_fisheye_pane_t_ParamLimits

0xfb46,	// (0x00051ae8) list_double_fisheye_pane_t

0xa620,	// (0x0004c5c2) main_call5_pane

0x91bd,	// (0x0004b15f) sc_swipe_pane_ParamLimits

0x91bd,	// (0x0004b15f) sc_swipe_pane

0x95c2,	// (0x0004b564) call5_image_pane_ParamLimits

0x95c2,	// (0x0004b564) call5_image_pane

0x95df,	// (0x0004b581) call5_swipe_1_pane_ParamLimits

0x95df,	// (0x0004b581) call5_swipe_1_pane

0x95f2,	// (0x0004b594) call5_swipe_2_pane_ParamLimits

0x95f2,	// (0x0004b594) call5_swipe_2_pane

0x961d,	// (0x0004b5bf) popup_call5_audio_first_window_ParamLimits

0x961d,	// (0x0004b5bf) popup_call5_audio_first_window

0xeaad,	// (0x00050a4f) call5_swipe_1_pane_g1_ParamLimits

0xeaad,	// (0x00050a4f) call5_swipe_1_pane_g1

0x962e,	// (0x0004b5d0) call5_swipe_1_pane_g2_ParamLimits

0x962e,	// (0x0004b5d0) call5_swipe_1_pane_g2

0x0001,

0xfb4b,	// (0x00051aed) call5_swipe_1_pane_g_ParamLimits

0xfb4b,	// (0x00051aed) call5_swipe_1_pane_g

0x963a,	// (0x0004b5dc) call5_swipe_1_pane_t1_ParamLimits

0x963a,	// (0x0004b5dc) call5_swipe_1_pane_t1

0xeaad,	// (0x00050a4f) call5_swipe_2_pane_g1_ParamLimits

0xeaad,	// (0x00050a4f) call5_swipe_2_pane_g1

0x964f,	// (0x0004b5f1) call5_swipe_2_pane_g2_ParamLimits

0x964f,	// (0x0004b5f1) call5_swipe_2_pane_g2

0x0001,

0xfb50,	// (0x00051af2) call5_swipe_2_pane_g_ParamLimits

0xfb50,	// (0x00051af2) call5_swipe_2_pane_g

0x965b,	// (0x0004b5fd) call5_swipe_2_pane_t1_ParamLimits

0x965b,	// (0x0004b5fd) call5_swipe_2_pane_t1

0x9670,	// (0x0004b612) sc_swipe_pane_g1_ParamLimits

0x9670,	// (0x0004b612) sc_swipe_pane_g1

0x967d,	// (0x0004b61f) sc_swipe_pane_g2_ParamLimits

0x967d,	// (0x0004b61f) sc_swipe_pane_g2

0x0001,

0xfb55,	// (0x00051af7) sc_swipe_pane_g_ParamLimits

0xfb55,	// (0x00051af7) sc_swipe_pane_g

0x9689,	// (0x0004b62b) sc_swipe_pane_t1_ParamLimits

0x9689,	// (0x0004b62b) sc_swipe_pane_t1

0xa620,	// (0x0004c5c2) main_cmail_launcher_pane

0x969e,	// (0x0004b640) aid_size_cell_cmail_l_ParamLimits

0x969e,	// (0x0004b640) aid_size_cell_cmail_l

0x96b8,	// (0x0004b65a) grid_cmail_l_pane_ParamLimits

0x96b8,	// (0x0004b65a) grid_cmail_l_pane

0x96d3,	// (0x0004b675) cell_cmail_l_pane_ParamLimits

0x96d3,	// (0x0004b675) cell_cmail_l_pane

0x96f9,	// (0x0004b69b) cell_cmail_l_pane_g1_ParamLimits

0x96f9,	// (0x0004b69b) cell_cmail_l_pane_g1

0x9705,	// (0x0004b6a7) cell_cmail_l_pane_t1_ParamLimits

0x9705,	// (0x0004b6a7) cell_cmail_l_pane_t1

0x971b,	// (0x0004b6bd) cell_cmail_l_pane_t2_ParamLimits

0x971b,	// (0x0004b6bd) cell_cmail_l_pane_t2

0x0001,

0xfb5a,	// (0x00051afc) cell_cmail_l_pane_t_ParamLimits

0xfb5a,	// (0x00051afc) cell_cmail_l_pane_t

0xd5ee,	// (0x0004f590) grid_highlight_pane_cp018_ParamLimits

0xd5ee,	// (0x0004f590) grid_highlight_pane_cp018

0x1757,	// (0x000436f9) main2_pane_ParamLimits

0x1757,	// (0x000436f9) main2_pane

0xc5a4,	// (0x0004e546) popup_sp_fs_action_menu_bg_pane_g1

0xc5ac,	// (0x0004e54e) popup_sp_fs_action_menu_bg_pane_g2

0xc5b4,	// (0x0004e556) popup_sp_fs_action_menu_bg_pane_g3

0xc5bc,	// (0x0004e55e) popup_sp_fs_action_menu_bg_pane_g4

0xc5c4,	// (0x0004e566) popup_sp_fs_action_menu_bg_pane_g5

0xc5cc,	// (0x0004e56e) popup_sp_fs_action_menu_bg_pane_g6

0xc5d4,	// (0x0004e576) popup_sp_fs_action_menu_bg_pane_g7

0xc5dc,	// (0x0004e57e) popup_sp_fs_action_menu_bg_pane_g8

0xc5e4,	// (0x0004e586) popup_sp_fs_action_menu_bg_pane_g9

0xc5ec,	// (0x0004e58e) popup_sp_fs_action_menu_bg_pane_g10

0xc5ec,	// (0x0004e58e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00051149) popup_sp_fs_action_menu_bg_pane_g

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g3_g1

0xa79c,	// (0x0004c73e) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_t3_g3_g2

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x000511f9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x000511f9) list_medium_line_x2_t3_g3_g

0xa7b4,	// (0x0004c756) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa7b4,	// (0x0004c756) list_medium_line_x2_t3_g3_t1

0x0ba2,	// (0x00042b44) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ba2,	// (0x00042b44) list_medium_line_x2_t3_g3_t2

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00051200) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00051200) list_medium_line_x2_t3_g3_t

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g2_g1

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00051207) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00051207) list_medium_line_x2_t3_g2_g

0xa7de,	// (0x0004c780) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa7de,	// (0x0004c780) list_medium_line_x2_t3_g2_t1

0xa7f4,	// (0x0004c796) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa7f4,	// (0x0004c796) list_medium_line_x2_t3_g2_t2

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0005120c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0005120c) list_medium_line_x2_t3_g2_t

0xa790,	// (0x0004c732) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t4_g4_g1

0xa806,	// (0x0004c7a8) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa806,	// (0x0004c7a8) list_medium_line_x2_t4_g4_g2

0xa79c,	// (0x0004c73e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_t4_g4_g3

0xa812,	// (0x0004c7b4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa812,	// (0x0004c7b4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00051213) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00051213) list_medium_line_x2_t4_g4_g

0x0bb6,	// (0x00042b58) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0bb6,	// (0x00042b58) list_medium_line_x2_t4_g4_t1

0x0bd0,	// (0x00042b72) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0bd0,	// (0x00042b72) list_medium_line_x2_t4_g4_t2

0x0be6,	// (0x00042b88) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0be6,	// (0x00042b88) list_medium_line_x2_t4_g4_t3

0xa81e,	// (0x0004c7c0) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa81e,	// (0x0004c7c0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0005121c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0005121c) list_medium_line_x2_t4_g4_t

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g4_g1

0xa806,	// (0x0004c7a8) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa806,	// (0x0004c7a8) list_medium_line_x2_t2_g4_g2

0xa79c,	// (0x0004c73e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_t2_g4_g3

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00051283) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00051283) list_medium_line_x2_t2_g4_g

0xa830,	// (0x0004c7d2) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa830,	// (0x0004c7d2) list_medium_line_x2_t2_g4_t1

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0005128c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0005128c) list_medium_line_x2_t2_g4_t

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g3_g1

0xa79c,	// (0x0004c73e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_t2_g3_g2

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x000511f9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x000511f9) list_medium_line_x2_t2_g3_g

0xa845,	// (0x0004c7e7) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa845,	// (0x0004c7e7) list_medium_line_x2_t2_g3_t1

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00051291) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00051291) list_medium_line_x2_t2_g3_t

0x32c2,	// (0x00045264) main_sp_fs_list_pane_ParamLimits

0x32c2,	// (0x00045264) main_sp_fs_list_pane

0x32ce,	// (0x00045270) sp_fs_scroll_pane_ParamLimits

0x32ce,	// (0x00045270) sp_fs_scroll_pane

0x0bfb,	// (0x00042b9d) list_medium_line_x2_t3_t1

0x0c0b,	// (0x00042bad) list_medium_line_x2_t3_t2

0xa888,	// (0x0004c82a) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x000512dc) list_medium_line_x2_t3_t

0x0c19,	// (0x00042bbb) list_medium_line_x3_t4_t1

0x0c29,	// (0x00042bcb) list_medium_line_x3_t4_t2

0xa896,	// (0x0004c838) list_medium_line_x3_t4_t3

0xa888,	// (0x0004c82a) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x000512e3) list_medium_line_x3_t4_t

0x0c37,	// (0x00042bd9) list_medium_line_x4_t5_t1

0x0c47,	// (0x00042be9) list_medium_line_x4_t5_t2

0xa896,	// (0x0004c838) list_medium_line_x4_t5_t3

0xa8a4,	// (0x0004c846) list_medium_line_x4_t5_t4

0xa888,	// (0x0004c82a) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x000512ec) list_medium_line_x4_t5_t

0xa790,	// (0x0004c732) list_medium_line_t4_g4_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_t4_g4_g1

0xa812,	// (0x0004c7b4) list_medium_line_t4_g4_g2_ParamLimits

0xa812,	// (0x0004c7b4) list_medium_line_t4_g4_g2

0xa8b2,	// (0x0004c854) list_medium_line_t4_g4_g3_ParamLimits

0xa8b2,	// (0x0004c854) list_medium_line_t4_g4_g3

0xa7a8,	// (0x0004c74a) list_medium_line_t4_g4_g4_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x000512f7) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x000512f7) list_medium_line_t4_g4_g

0xa8be,	// (0x0004c860) list_medium_line_t4_g4_t1_ParamLimits

0xa8be,	// (0x0004c860) list_medium_line_t4_g4_t1

0xa8d3,	// (0x0004c875) list_medium_line_t4_g4_t2_ParamLimits

0xa8d3,	// (0x0004c875) list_medium_line_t4_g4_t2

0xa8e8,	// (0x0004c88a) list_medium_line_t4_g4_t3_ParamLimits

0xa8e8,	// (0x0004c88a) list_medium_line_t4_g4_t3

0xa7c9,	// (0x0004c76b) list_medium_line_t4_g4_t4_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00051300) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00051300) list_medium_line_t4_g4_t

0x339d,	// (0x0004533f) chi_dic_find_pane_g1

0x444b,	// (0x000463ed) main_tport_pane

0xae48,	// (0x0004cdea) list_medium_line_plain_t1

0xae92,	// (0x0004ce34) list_medium_line_t2_g2_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t2_g2_g1

0xae9e,	// (0x0004ce40) list_medium_line_t2_g2_g2_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_t2_g2_g2

0x0001,

0xf897,	// (0x00051839) list_medium_line_t2_g2_g_ParamLimits

0xf897,	// (0x00051839) list_medium_line_t2_g2_g

0x0e5a,	// (0x00042dfc) list_medium_line_t2_g2_t1_ParamLimits

0x0e5a,	// (0x00042dfc) list_medium_line_t2_g2_t1

0x0e74,	// (0x00042e16) list_medium_line_t2_g2_t2_ParamLimits

0x0e74,	// (0x00042e16) list_medium_line_t2_g2_t2

0x0001,

0xf89c,	// (0x0005183e) list_medium_line_t2_g2_t_ParamLimits

0xf89c,	// (0x0005183e) list_medium_line_t2_g2_t

0xafde,	// (0x0004cf80) aid_sp_fs_list_icon_a_sm

0xafe6,	// (0x0004cf88) aid_sp_fs_list_icon_d

0xafee,	// (0x0004cf90) aid_sp_fs_text_primary

0xaff7,	// (0x0004cf99) aid_sp_fs_text_secondary

0xb000,	// (0x0004cfa2) list_medium_line

0xb000,	// (0x0004cfa2) list_medium_line_g2

0xb000,	// (0x0004cfa2) list_medium_line_g3

0xb000,	// (0x0004cfa2) list_medium_line_plain

0xb000,	// (0x0004cfa2) list_medium_line_plain_t2

0xb000,	// (0x0004cfa2) list_medium_line_plain_t3

0xb000,	// (0x0004cfa2) list_medium_line_right_icon

0xb000,	// (0x0004cfa2) list_medium_line_right_iconx2

0xb000,	// (0x0004cfa2) list_medium_line_t2

0xb000,	// (0x0004cfa2) list_medium_line_t2_g2

0xb000,	// (0x0004cfa2) list_medium_line_t2_g3

0xb000,	// (0x0004cfa2) list_medium_line_t2_right_icon

0xb000,	// (0x0004cfa2) list_medium_line_t2_right_iconx2

0xb000,	// (0x0004cfa2) list_medium_line_t3

0xb000,	// (0x0004cfa2) list_medium_line_t3_g2

0xb000,	// (0x0004cfa2) list_medium_line_t3_g3

0xb000,	// (0x0004cfa2) list_medium_line_t3_right_iconx2

0xb009,	// (0x0004cfab) list_medium_line_t4_g4

0xb012,	// (0x0004cfb4) list_medium_line_x2

0xb012,	// (0x0004cfb4) list_medium_line_x2_t2_g2

0xb012,	// (0x0004cfb4) list_medium_line_x2_t2_g3

0xb012,	// (0x0004cfb4) list_medium_line_x2_t2_g4

0xb012,	// (0x0004cfb4) list_medium_line_x2_t3

0xb012,	// (0x0004cfb4) list_medium_line_x2_t3_g2

0xb012,	// (0x0004cfb4) list_medium_line_x2_t3_g3

0xb012,	// (0x0004cfb4) list_medium_line_x2_t3_g4

0xb012,	// (0x0004cfb4) list_medium_line_x2_t4_g2

0xb012,	// (0x0004cfb4) list_medium_line_x2_t4_g4

0xb01b,	// (0x0004cfbd) list_medium_line_x3

0xb01b,	// (0x0004cfbd) list_medium_line_x3_t4

0xb01b,	// (0x0004cfbd) list_medium_line_x3_t4_g4

0xb009,	// (0x0004cfab) list_medium_line_x4_t4

0xb009,	// (0x0004cfab) list_medium_line_x4_t4_g7

0xb009,	// (0x0004cfab) list_medium_line_x4_t5

0xb024,	// (0x0004cfc6) list_single_fs_dyc_pane_ParamLimits

0xb024,	// (0x0004cfc6) list_single_fs_dyc_pane

0xa790,	// (0x0004c732) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x4_t4_g7_g1

0xb046,	// (0x0004cfe8) list_medium_line_x4_t4_g7_g2_ParamLimits

0xb046,	// (0x0004cfe8) list_medium_line_x4_t4_g7_g2

0xb052,	// (0x0004cff4) list_medium_line_x4_t4_g7_g3_ParamLimits

0xb052,	// (0x0004cff4) list_medium_line_x4_t4_g7_g3

0xb061,	// (0x0004d003) list_medium_line_x4_t4_g7_g4_ParamLimits

0xb061,	// (0x0004d003) list_medium_line_x4_t4_g7_g4

0xb06d,	// (0x0004d00f) list_medium_line_x4_t4_g7_g5_ParamLimits

0xb06d,	// (0x0004d00f) list_medium_line_x4_t4_g7_g5

0xb07c,	// (0x0004d01e) list_medium_line_x4_t4_g7_g6_ParamLimits

0xb07c,	// (0x0004d01e) list_medium_line_x4_t4_g7_g6

0xb08b,	// (0x0004d02d) list_medium_line_x4_t4_g7_g7_ParamLimits

0xb08b,	// (0x0004d02d) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa67,	// (0x00051a09) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa67,	// (0x00051a09) list_medium_line_x4_t4_g7_g

0xb097,	// (0x0004d039) list_medium_line_x4_t4_g7_t1_ParamLimits

0xb097,	// (0x0004d039) list_medium_line_x4_t4_g7_t1

0xb0ac,	// (0x0004d04e) list_medium_line_x4_t4_g7_t2_ParamLimits

0xb0ac,	// (0x0004d04e) list_medium_line_x4_t4_g7_t2

0xb0c1,	// (0x0004d063) list_medium_line_x4_t4_g7_t3_ParamLimits

0xb0c1,	// (0x0004d063) list_medium_line_x4_t4_g7_t3

0xb0d6,	// (0x0004d078) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb0d6,	// (0x0004d078) list_medium_line_x4_t4_g7_t4

0xb0e8,	// (0x0004d08a) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb0e8,	// (0x0004d08a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa76,	// (0x00051a18) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa76,	// (0x00051a18) list_medium_line_x4_t4_g7_t

0xb0fa,	// (0x0004d09c) list_single_dyc_row_pane_ParamLimits

0xb0fa,	// (0x0004d09c) list_single_dyc_row_pane

0x95af,	// (0x0004b551) call5_gesture_pane_ParamLimits

0x95af,	// (0x0004b551) call5_gesture_pane

0x9605,	// (0x0004b5a7) call5_windows_pane_ParamLimits

0x9605,	// (0x0004b5a7) call5_windows_pane

0x972d,	// (0x0004b6cf) call5_swipe_1_pane_cp_ParamLimits

0x972d,	// (0x0004b6cf) call5_swipe_1_pane_cp

0x9739,	// (0x0004b6db) call5_swipe_2_pane_cp_ParamLimits

0x9739,	// (0x0004b6db) call5_swipe_2_pane_cp

0xcfde,	// (0x0004ef80) call5_image_pane_cp

0x9745,	// (0x0004b6e7) popup_call5_audio_first_window_cp_ParamLimits

0x9745,	// (0x0004b6e7) popup_call5_audio_first_window_cp

0x9670,	// (0x0004b612) call5_swipe_1_pane_g1_cp_ParamLimits

0x9670,	// (0x0004b612) call5_swipe_1_pane_g1_cp

0x9753,	// (0x0004b6f5) call5_swipe_1_pane_g2_cp

0x9689,	// (0x0004b62b) call5_swipe_1_pane_t1_cp_ParamLimits

0x9689,	// (0x0004b62b) call5_swipe_1_pane_t1_cp

0x9670,	// (0x0004b612) call5_swipe_2_pane_g1_cp_ParamLimits

0x9670,	// (0x0004b612) call5_swipe_2_pane_g1_cp

0x975b,	// (0x0004b6fd) call5_swipe_2_pane_g2_cp

0x9763,	// (0x0004b705) call5_swipe_2_pane_t1_cp_ParamLimits

0x9763,	// (0x0004b705) call5_swipe_2_pane_t1_cp

0xd5ee,	// (0x0004f590) main_sp_fs_email_pane

0x9778,	// (0x0004b71a) main_sp_fs_listscroll_pane_te

0xb117,	// (0x0004d0b9) popup_sp_fs_action_menu_pane_ParamLimits

0xb117,	// (0x0004d0b9) popup_sp_fs_action_menu_pane

0xe839,	// (0x000507db) bg_sp_fs_ctrlbar_pane_g1

0x9781,	// (0x0004b723) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x978a,	// (0x0004b72c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x9793,	// (0x0004b735) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe839,	// (0x000507db) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb5f,	// (0x00051b01) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe61e,	// (0x000505c0) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe61e,	// (0x000505c0) bg_sp_fs_ctrlbar_ddmenu_pane

0x979c,	// (0x0004b73e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x979c,	// (0x0004b73e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x97a8,	// (0x0004b74a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x97a8,	// (0x0004b74a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb68,	// (0x00051b0a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb68,	// (0x00051b0a) main_sp_fs_ctrlbar_ddmenu_pane_g

0x97b4,	// (0x0004b756) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x97b4,	// (0x0004b756) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xb15b,	// (0x0004d0fd) list_medium_line_t2_right_icon_g1

0x10a3,	// (0x00043045) list_medium_line_t2_right_icon_t1

0x10b3,	// (0x00043055) list_medium_line_t2_right_icon_t2

0x0001,

0xfb6d,	// (0x00051b0f) list_medium_line_t2_right_icon_t

0xe3f2,	// (0x00050394) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe3f2,	// (0x00050394) bg_sp_fs_ctrlbar_pane

0x9851,	// (0x0004b7f3) main_sp_fs_ctrlbar_button_pane_cp01

0x985b,	// (0x0004b7fd) main_sp_fs_ctrlbar_ddmenu_pane

0x9865,	// (0x0004b807) main_sp_fs_ctrlbar_pane_g1

0x9871,	// (0x0004b813) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfb72,	// (0x00051b14) main_sp_fs_ctrlbar_pane_g

0x987d,	// (0x0004b81f) main_sp_fs_ctrlbar_pane_t1

0x10c5,	// (0x00043067) main_sp_fs_ctrlbar_pane

0x10e9,	// (0x0004308b) main_sp_fs_listscroll_pane_te_cp01

0x1109,	// (0x000430ab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1109,	// (0x000430ab) popup_sp_fs_action_menu_pane_cp01

0xd5ee,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd5ee,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp01

0xb163,	// (0x0004d105) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb163,	// (0x0004d105) sp_fs_action_menu_list_gene_pane_g1

0x98a2,	// (0x0004b844) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x98a2,	// (0x0004b844) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb7c,	// (0x00051b1e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb7c,	// (0x00051b1e) sp_fs_action_menu_list_gene_pane_g

0xb172,	// (0x0004d114) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb172,	// (0x0004d114) sp_fs_action_menu_list_gene_pane_t1

0xb18a,	// (0x0004d12c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb18a,	// (0x0004d12c) sp_fs_action_menu_list_gene_pane

0x98af,	// (0x0004b851) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x98af,	// (0x0004b851) popup_sp_fs_action_menu_bg_pane

0xb1a9,	// (0x0004d14b) sp_fs_action_menu_list_pane_ParamLimits

0xb1a9,	// (0x0004d14b) sp_fs_action_menu_list_pane

0x98bd,	// (0x0004b85f) sp_fs_scroll_pane_cp01_ParamLimits

0x98bd,	// (0x0004b85f) sp_fs_scroll_pane_cp01

0x1123,	// (0x000430c5) list_medium_line_plain_t2_t1

0x1133,	// (0x000430d5) list_medium_line_plain_t2_t2

0x0001,

0xfb81,	// (0x00051b23) list_medium_line_plain_t2_t

0x1143,	// (0x000430e5) list_medium_line_plain_t3_t1

0x1153,	// (0x000430f5) list_medium_line_plain_t3_t2

0x1161,	// (0x00043103) list_medium_line_plain_t3_t3

0x0002,

0xfb86,	// (0x00051b28) list_medium_line_plain_t3_t

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t2_g2_g1

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00051207) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00051207) list_medium_line_x2_t2_g2_g

0xa8be,	// (0x0004c860) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa8be,	// (0x0004c860) list_medium_line_x2_t2_g2_t1

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfb8d,	// (0x00051b2f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfb8d,	// (0x00051b2f) list_medium_line_x2_t2_g2_t

0xa790,	// (0x0004c732) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t4_g2_g1

0xb1c9,	// (0x0004d16b) list_medium_line_x2_t4_g2_g2_ParamLimits

0xb1c9,	// (0x0004d16b) list_medium_line_x2_t4_g2_g2

0x0001,

0xfb92,	// (0x00051b34) list_medium_line_x2_t4_g2_g_ParamLimits

0xfb92,	// (0x00051b34) list_medium_line_x2_t4_g2_g

0x116f,	// (0x00043111) list_medium_line_x2_t4_g2_t1_ParamLimits

0x116f,	// (0x00043111) list_medium_line_x2_t4_g2_t1

0x1186,	// (0x00043128) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1186,	// (0x00043128) list_medium_line_x2_t4_g2_t2

0x119b,	// (0x0004313d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x119b,	// (0x0004313d) list_medium_line_x2_t4_g2_t3

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfb97,	// (0x00051b39) list_medium_line_x2_t4_g2_t_ParamLimits

0xfb97,	// (0x00051b39) list_medium_line_x2_t4_g2_t

0xb1db,	// (0x0004d17d) list_medium_line_t3_right_iconx2_g1

0xb15b,	// (0x0004d0fd) list_medium_line_t3_right_iconx2_g2

0x11ad,	// (0x0004314f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfba0,	// (0x00051b42) list_medium_line_t3_right_iconx2_g

0x11b7,	// (0x00043159) list_medium_line_t3_right_iconx2_t1

0x11c7,	// (0x00043169) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfba7,	// (0x00051b49) list_medium_line_t3_right_iconx2_t

0xa790,	// (0x0004c732) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x3_t4_g4_g1

0xa79c,	// (0x0004c73e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x3_t4_g4_g2

0xa812,	// (0x0004c7b4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa812,	// (0x0004c7b4) list_medium_line_x3_t4_g4_g3

0xb1e3,	// (0x0004d185) list_medium_line_x3_t4_g4_g4_ParamLimits

0xb1e3,	// (0x0004d185) list_medium_line_x3_t4_g4_g4

0x0003,

0xfbac,	// (0x00051b4e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfbac,	// (0x00051b4e) list_medium_line_x3_t4_g4_g

0x11d5,	// (0x00043177) list_medium_line_x3_t4_g4_t1_ParamLimits

0x11d5,	// (0x00043177) list_medium_line_x3_t4_g4_t1

0x11ec,	// (0x0004318e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x11ec,	// (0x0004318e) list_medium_line_x3_t4_g4_t2

0xa8d3,	// (0x0004c875) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa8d3,	// (0x0004c875) list_medium_line_x3_t4_g4_t3

0xb1ef,	// (0x0004d191) list_medium_line_x3_t4_g4_t4_ParamLimits

0xb1ef,	// (0x0004d191) list_medium_line_x3_t4_g4_t4

0x0003,

0xfbb5,	// (0x00051b57) list_medium_line_x3_t4_g4_t_ParamLimits

0xfbb5,	// (0x00051b57) list_medium_line_x3_t4_g4_t

0x1207,	// (0x000431a9) list_single_dyc_row_text_pane_t1_ParamLimits

0x1207,	// (0x000431a9) list_single_dyc_row_text_pane_t1

0x1250,	// (0x000431f2) list_single_dyc_row_text_pane_t2_ParamLimits

0x1250,	// (0x000431f2) list_single_dyc_row_text_pane_t2

0xb20c,	// (0x0004d1ae) list_single_dyc_row_text_pane_t3_ParamLimits

0xb20c,	// (0x0004d1ae) list_single_dyc_row_text_pane_t3

0x0002,

0xfbbe,	// (0x00051b60) list_single_dyc_row_text_pane_t_ParamLimits

0xfbbe,	// (0x00051b60) list_single_dyc_row_text_pane_t

0xb21e,	// (0x0004d1c0) list_single_dyc_row_pane_g1_ParamLimits

0xb21e,	// (0x0004d1c0) list_single_dyc_row_pane_g1

0xb22a,	// (0x0004d1cc) list_single_dyc_row_pane_g2_ParamLimits

0xb22a,	// (0x0004d1cc) list_single_dyc_row_pane_g2

0xb236,	// (0x0004d1d8) list_single_dyc_row_pane_g3_ParamLimits

0xb236,	// (0x0004d1d8) list_single_dyc_row_pane_g3

0xb242,	// (0x0004d1e4) list_single_dyc_row_pane_g4_ParamLimits

0xb242,	// (0x0004d1e4) list_single_dyc_row_pane_g4

0x0003,

0xfbc5,	// (0x00051b67) list_single_dyc_row_pane_g_ParamLimits

0xfbc5,	// (0x00051b67) list_single_dyc_row_pane_g

0xb24e,	// (0x0004d1f0) list_single_dyc_row_text_pane_ParamLimits

0xb24e,	// (0x0004d1f0) list_single_dyc_row_text_pane

0xa620,	// (0x0004c5c2) bg_sp_fs_scroll_pane

0xb26d,	// (0x0004d20f) thumb_sp_fs_scroll_pane

0xae92,	// (0x0004ce34) list_medium_line_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_g1

0xb276,	// (0x0004d218) list_medium_line_t1_ParamLimits

0xb276,	// (0x0004d218) list_medium_line_t1

0xa790,	// (0x0004c732) list_medium_line_x2_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_g1

0xa79c,	// (0x0004c73e) list_medium_line_x2_g2_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_g2

0x0001,

0xfbce,	// (0x00051b70) list_medium_line_x2_g_ParamLimits

0xfbce,	// (0x00051b70) list_medium_line_x2_g

0xb28b,	// (0x0004d22d) list_medium_line_x2_t1_ParamLimits

0xb28b,	// (0x0004d22d) list_medium_line_x2_t1

0xa790,	// (0x0004c732) list_medium_line_x3_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x3_g1

0xa79c,	// (0x0004c73e) list_medium_line_x3_g2_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x3_g2

0x0001,

0xfbce,	// (0x00051b70) list_medium_line_x3_g_ParamLimits

0xfbce,	// (0x00051b70) list_medium_line_x3_g

0xb28b,	// (0x0004d22d) list_medium_line_x3_t1_ParamLimits

0xb28b,	// (0x0004d22d) list_medium_line_x3_t1

0xb2a1,	// (0x0004d243) thumb_sp_fs_scroll_pane_g1

0xb2aa,	// (0x0004d24c) thumb_sp_fs_scroll_pane_g2

0xb2b3,	// (0x0004d255) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbd3,	// (0x00051b75) thumb_sp_fs_scroll_pane_g

0xb2a1,	// (0x0004d243) bg_sp_fs_scroll_pane_g1

0xb2aa,	// (0x0004d24c) bg_sp_fs_scroll_pane_g2

0xb2b3,	// (0x0004d255) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbd3,	// (0x00051b75) bg_sp_fs_scroll_pane_g

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa790,	// (0x0004c732) list_medium_line_x2_t3_g4_g1

0xa806,	// (0x0004c7a8) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa806,	// (0x0004c7a8) list_medium_line_x2_t3_g4_g2

0xa79c,	// (0x0004c73e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa79c,	// (0x0004c73e) list_medium_line_x2_t3_g4_g3

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa7a8,	// (0x0004c74a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00051283) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00051283) list_medium_line_x2_t3_g4_g

0x12aa,	// (0x0004324c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x12aa,	// (0x0004324c) list_medium_line_x2_t3_g4_t1

0x12c4,	// (0x00043266) list_medium_line_x2_t3_g4_t2_ParamLimits

0x12c4,	// (0x00043266) list_medium_line_x2_t3_g4_t2

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa7c9,	// (0x0004c76b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfbda,	// (0x00051b7c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfbda,	// (0x00051b7c) list_medium_line_x2_t3_g4_t

0xae92,	// (0x0004ce34) list_medium_line_g2_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_g2_g1

0xae9e,	// (0x0004ce40) list_medium_line_g2_g2_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_g2_g2

0x0001,

0xf897,	// (0x00051839) list_medium_line_g2_g_ParamLimits

0xf897,	// (0x00051839) list_medium_line_g2_g

0xb2bc,	// (0x0004d25e) list_medium_line_g2_t1_ParamLimits

0xb2bc,	// (0x0004d25e) list_medium_line_g2_t1

0xae92,	// (0x0004ce34) list_medium_line_t3_g2_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t3_g2_g1

0xae9e,	// (0x0004ce40) list_medium_line_t3_g2_g2_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_t3_g2_g2

0x0001,

0xf897,	// (0x00051839) list_medium_line_t3_g2_g_ParamLimits

0xf897,	// (0x00051839) list_medium_line_t3_g2_g

0x12de,	// (0x00043280) list_medium_line_t3_g2_t1_ParamLimits

0x12de,	// (0x00043280) list_medium_line_t3_g2_t1

0x12f8,	// (0x0004329a) list_medium_line_t3_g2_t2_ParamLimits

0x12f8,	// (0x0004329a) list_medium_line_t3_g2_t2

0x130d,	// (0x000432af) list_medium_line_t3_g2_t3_ParamLimits

0x130d,	// (0x000432af) list_medium_line_t3_g2_t3

0x0002,

0xfbe1,	// (0x00051b83) list_medium_line_t3_g2_t_ParamLimits

0xfbe1,	// (0x00051b83) list_medium_line_t3_g2_t

0xb15b,	// (0x0004d0fd) list_medium_line_right_icon_g1

0xb2d1,	// (0x0004d273) list_medium_line_right_icon_t1

0xae92,	// (0x0004ce34) list_medium_line_t2_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t2_g1

0x1327,	// (0x000432c9) list_medium_line_t2_t1_ParamLimits

0x1327,	// (0x000432c9) list_medium_line_t2_t1

0x1341,	// (0x000432e3) list_medium_line_t2_t2_ParamLimits

0x1341,	// (0x000432e3) list_medium_line_t2_t2

0x0001,

0xfbe8,	// (0x00051b8a) list_medium_line_t2_t_ParamLimits

0xfbe8,	// (0x00051b8a) list_medium_line_t2_t

0xae92,	// (0x0004ce34) list_medium_line_t3_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t3_g1

0x135a,	// (0x000432fc) list_medium_line_t3_t1_ParamLimits

0x135a,	// (0x000432fc) list_medium_line_t3_t1

0x1371,	// (0x00043313) list_medium_line_t3_t2_ParamLimits

0x1371,	// (0x00043313) list_medium_line_t3_t2

0x1386,	// (0x00043328) list_medium_line_t3_t3_ParamLimits

0x1386,	// (0x00043328) list_medium_line_t3_t3

0x0002,

0xfbed,	// (0x00051b8f) list_medium_line_t3_t_ParamLimits

0xfbed,	// (0x00051b8f) list_medium_line_t3_t

0xae92,	// (0x0004ce34) list_medium_line_g3_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_g3_g1

0xb2df,	// (0x0004d281) list_medium_line_g3_g2_ParamLimits

0xb2df,	// (0x0004d281) list_medium_line_g3_g2

0xae9e,	// (0x0004ce40) list_medium_line_g3_g3_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_g3_g3

0x0002,

0xfbf4,	// (0x00051b96) list_medium_line_g3_g_ParamLimits

0xfbf4,	// (0x00051b96) list_medium_line_g3_g

0xb2eb,	// (0x0004d28d) list_medium_line_g3_t1_ParamLimits

0xb2eb,	// (0x0004d28d) list_medium_line_g3_t1

0xae92,	// (0x0004ce34) list_medium_line_t2_g3_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t2_g3_g1

0xb2df,	// (0x0004d281) list_medium_line_t2_g3_g2_ParamLimits

0xb2df,	// (0x0004d281) list_medium_line_t2_g3_g2

0xae9e,	// (0x0004ce40) list_medium_line_t2_g3_g3_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_t2_g3_g3

0x0002,

0xfbf4,	// (0x00051b96) list_medium_line_t2_g3_g_ParamLimits

0xfbf4,	// (0x00051b96) list_medium_line_t2_g3_g

0x1398,	// (0x0004333a) list_medium_line_t2_g3_t1_ParamLimits

0x1398,	// (0x0004333a) list_medium_line_t2_g3_t1

0x13b2,	// (0x00043354) list_medium_line_t2_g3_t2_ParamLimits

0x13b2,	// (0x00043354) list_medium_line_t2_g3_t2

0x0001,

0xfbfb,	// (0x00051b9d) list_medium_line_t2_g3_t_ParamLimits

0xfbfb,	// (0x00051b9d) list_medium_line_t2_g3_t

0xae92,	// (0x0004ce34) list_medium_line_t3_g3_g1_ParamLimits

0xae92,	// (0x0004ce34) list_medium_line_t3_g3_g1

0xb2df,	// (0x0004d281) list_medium_line_t3_g3_g2_ParamLimits

0xb2df,	// (0x0004d281) list_medium_line_t3_g3_g2

0xae9e,	// (0x0004ce40) list_medium_line_t3_g3_g3_ParamLimits

0xae9e,	// (0x0004ce40) list_medium_line_t3_g3_g3

0x0002,

0xfbf4,	// (0x00051b96) list_medium_line_t3_g3_g_ParamLimits

0xfbf4,	// (0x00051b96) list_medium_line_t3_g3_g

0x13cd,	// (0x0004336f) list_medium_line_t3_g3_t1_ParamLimits

0x13cd,	// (0x0004336f) list_medium_line_t3_g3_t1

0x13e1,	// (0x00043383) list_medium_line_t3_g3_t2_ParamLimits

0x13e1,	// (0x00043383) list_medium_line_t3_g3_t2

0x13f3,	// (0x00043395) list_medium_line_t3_g3_t3_ParamLimits

0x13f3,	// (0x00043395) list_medium_line_t3_g3_t3

0x0002,

0xfc00,	// (0x00051ba2) list_medium_line_t3_g3_t_ParamLimits

0xfc00,	// (0x00051ba2) list_medium_line_t3_g3_t

0xb1db,	// (0x0004d17d) list_medium_line_right_iconx2_g1

0xb15b,	// (0x0004d0fd) list_medium_line_right_iconx2_g2

0x0001,

0xfc07,	// (0x00051ba9) list_medium_line_right_iconx2_g

0xb300,	// (0x0004d2a2) list_medium_line_right_iconx2_t1

0xb1db,	// (0x0004d17d) list_medium_line_t2_right_iconx2_g1

0xb15b,	// (0x0004d0fd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc07,	// (0x00051ba9) list_medium_line_t2_right_iconx2_g

0x1407,	// (0x000433a9) list_medium_line_t2_right_iconx2_t1

0x1417,	// (0x000433b9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc0c,	// (0x00051bae) list_medium_line_t2_right_iconx2_t

0xb30e,	// (0x0004d2b0) list_medium_line_x4_t4_t1

0x1429,	// (0x000433cb) list_medium_line_x4_t4_t2

0x1439,	// (0x000433db) list_medium_line_x4_t4_t3

0x1449,	// (0x000433eb) list_medium_line_x4_t4_t4

0x0003,

0xfc11,	// (0x00051bb3) list_medium_line_x4_t4_t

0x9926,	// (0x0004b8c8) tport_appsw_pane_ParamLimits

0x9926,	// (0x0004b8c8) tport_appsw_pane

0x9937,	// (0x0004b8d9) tport_contact_pane_ParamLimits

0x9937,	// (0x0004b8d9) tport_contact_pane

0x9950,	// (0x0004b8f2) tport_listscroll_pane_ParamLimits

0x9950,	// (0x0004b8f2) tport_listscroll_pane

0x996b,	// (0x0004b90d) cell_tport_appsw_pane_ParamLimits

0x996b,	// (0x0004b90d) cell_tport_appsw_pane

0x6ce2,	// (0x00048c84) tport_appsw_pane_g1_ParamLimits

0x6ce2,	// (0x00048c84) tport_appsw_pane_g1

0xb31c,	// (0x0004d2be) tport_contact_pane_g1

0x8c90,	// (0x0004ac32) tport_contact_pane_t1

0xb325,	// (0x0004d2c7) tport_contact_pane_t2

0x0001,

0xfc1a,	// (0x00051bbc) tport_contact_pane_t

0xb333,	// (0x0004d2d5) list_tport_pane

0xb33c,	// (0x0004d2de) scroll_pane_cp_030

0xb34d,	// (0x0004d2ef) cell_tport_appsw_pane_g1

0xb35d,	// (0x0004d2ff) cell_tport_appsw_pane_t1

0xa620,	// (0x0004c5c2) grid_highlight_pane_cp019

0x99ab,	// (0x0004b94d) list_tport_double_graphic_pane_ParamLimits

0x99ab,	// (0x0004b94d) list_tport_double_graphic_pane

0xd5ee,	// (0x0004f590) list_highlight_pane_cp023_ParamLimits

0xd5ee,	// (0x0004f590) list_highlight_pane_cp023

0x99b8,	// (0x0004b95a) list_tport_double_graphic_pane_g1_ParamLimits

0x99b8,	// (0x0004b95a) list_tport_double_graphic_pane_g1

0x99c5,	// (0x0004b967) list_tport_double_graphic_pane_t1_ParamLimits

0x99c5,	// (0x0004b967) list_tport_double_graphic_pane_t1

0x99da,	// (0x0004b97c) list_tport_double_graphic_pane_t2_ParamLimits

0x99da,	// (0x0004b97c) list_tport_double_graphic_pane_t2

0x0001,

0xfc26,	// (0x00051bc8) list_tport_double_graphic_pane_t_ParamLimits

0xfc26,	// (0x00051bc8) list_tport_double_graphic_pane_t

0xa620,	// (0x0004c5c2) main_cale_note_pane

0x6c97,	// (0x00048c39) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6c97,	// (0x00048c39) cell_vitu2_function_top_wide_pane_cp01

0x9034,	// (0x0004afd6) wait_bar_pane_cp05_ParamLimits

0xa620,	// (0x0004c5c2) listscroll_cmail_pane

0xb373,	// (0x0004d315) list_cmail_pane

0x7589,	// (0x0004952b) list_cmail_body_pane

0x99f6,	// (0x0004b998) list_single_cmail_header_caption_pane

0x9a0c,	// (0x0004b9ae) list_single_cmail_header_detail_pane_ParamLimits

0x9a0c,	// (0x0004b9ae) list_single_cmail_header_detail_pane

0x9a35,	// (0x0004b9d7) list_single_cmail_header_caption_pane_t1

0x1459,	// (0x000433fb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1459,	// (0x000433fb) list_single_cmail_header_detail_pane_g1

0xb394,	// (0x0004d336) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb394,	// (0x0004d336) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2b,	// (0x00051bcd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2b,	// (0x00051bcd) list_single_cmail_header_detail_pane_g

0xb3ad,	// (0x0004d34f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb3ad,	// (0x0004d34f) list_single_cmail_header_detail_pane_t1

0xb3e3,	// (0x0004d385) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb3e3,	// (0x0004d385) list_single_cmail_header_editor_pane_bg

0x8ea0,	// (0x0004ae42) list_cmail_body_pane_g1

0xb3f5,	// (0x0004d397) list_cmail_body_pane_t1

0x6da8,	// (0x00048d4a) list_single_cmail_header_editor_pane_bg_g1

0xc901,	// (0x0004e8a3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6db8,	// (0x00048d5a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6db0,	// (0x00048d52) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7741,	// (0x000496e3) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6dd8,	// (0x00048d7a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6dc8,	// (0x00048d6a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6dd0,	// (0x00048d72) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc8e1,	// (0x0004e883) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a45,	// (0x0004b9e7) calenote_gesture_pane_ParamLimits

0x9a45,	// (0x0004b9e7) calenote_gesture_pane

0x9a65,	// (0x0004ba07) calenote_window_pane_ParamLimits

0x9a65,	// (0x0004ba07) calenote_window_pane

0xb403,	// (0x0004d3a5) popup_note_window_cp01

0x9a81,	// (0x0004ba23) calenote_swipe_1_pane_ParamLimits

0x9a81,	// (0x0004ba23) calenote_swipe_1_pane

0x9739,	// (0x0004b6db) calenote_swipe_2_pane_ParamLimits

0x9739,	// (0x0004b6db) calenote_swipe_2_pane

0x9670,	// (0x0004b612) calenote_swipe_1_pane_g1_ParamLimits

0x9670,	// (0x0004b612) calenote_swipe_1_pane_g1

0x967d,	// (0x0004b61f) calenote_swipe_1_pane_g2_ParamLimits

0x967d,	// (0x0004b61f) calenote_swipe_1_pane_g2

0x0001,

0xfb55,	// (0x00051af7) calenote_swipe_1_pane_g_ParamLimits

0xfb55,	// (0x00051af7) calenote_swipe_1_pane_g

0xb415,	// (0x0004d3b7) calenote_swipe_1_pane_t1_ParamLimits

0xb415,	// (0x0004d3b7) calenote_swipe_1_pane_t1

0x9670,	// (0x0004b612) calenote_swipe_2_pane_g1_ParamLimits

0x9670,	// (0x0004b612) calenote_swipe_2_pane_g1

0xb434,	// (0x0004d3d6) calenote_swipe_2_pane_g2_ParamLimits

0xb434,	// (0x0004d3d6) calenote_swipe_2_pane_g2

0x0001,

0xfc37,	// (0x00051bd9) calenote_swipe_2_pane_g_ParamLimits

0xfc37,	// (0x00051bd9) calenote_swipe_2_pane_g

0xb440,	// (0x0004d3e2) calenote_swipe_2_pane_t1_ParamLimits

0xb440,	// (0x0004d3e2) calenote_swipe_2_pane_t1

0xa620,	// (0x0004c5c2) main_mup_navstr_pane

0x57c2,	// (0x00047764) main_mup3_pane_t7_ParamLimits

0x57c2,	// (0x00047764) main_mup3_pane_t7

0xab80,	// (0x0004cb22) main_mp4_pane_g6_ParamLimits

0xab80,	// (0x0004cb22) main_mp4_pane_g6

0xad24,	// (0x0004ccc6) main_image3_pane_t4_ParamLimits

0xad24,	// (0x0004ccc6) main_image3_pane_t4

0x9a96,	// (0x0004ba38) popup_navstr_preview_pane_ParamLimits

0x9a96,	// (0x0004ba38) popup_navstr_preview_pane

0x9aaa,	// (0x0004ba4c) scroll_navstr_pane_ParamLimits

0x9aaa,	// (0x0004ba4c) scroll_navstr_pane

0xa620,	// (0x0004c5c2) bg_popup_preview_window_pane_cp04

0xb467,	// (0x0004d409) popup_navstr_preview_pane_t1

0x9abe,	// (0x0004ba60) scroll_navstr_pane_g1_ParamLimits

0x9abe,	// (0x0004ba60) scroll_navstr_pane_g1

0x9ad2,	// (0x0004ba74) scroll_navstr_pane_t1_ParamLimits

0x9ad2,	// (0x0004ba74) scroll_navstr_pane_t1

0xb40c,	// (0x0004d3ae) bg_button_pane_cp014

0xb40c,	// (0x0004d3ae) bg_button_pane_cp030

0x1049,	// (0x00042feb) list_double_fisheye_pane_g4_ParamLimits

0x1049,	// (0x00042feb) list_double_fisheye_pane_g4

0x1055,	// (0x00042ff7) list_double_fisheye_pane_g5_ParamLimits

0x1055,	// (0x00042ff7) list_double_fisheye_pane_g5

0xb37b,	// (0x0004d31d) sp_fs_scroll_pane_cp03

0x9865,	// (0x0004b807) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x9871,	// (0x0004b813) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb72,	// (0x00051b14) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x987d,	// (0x0004b81f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x99ec,	// (0x0004b98e) sp_fs_scroll_pane_cp02

0xc60f,	// (0x0004e5b1) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc60f,	// (0x0004e5b1) popup_sp_fs_calendar_preview_list_single_pane

0xa620,	// (0x0004c5c2) main_cam6_pano_pane

0xd5ee,	// (0x0004f590) main_mup3_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_phacti_pane

0x8f07,	// (0x0004aea9) bg_button_pane_cp11

0x8f21,	// (0x0004aec3) main_mobtv_info_pane_g2_ParamLimits

0x8f21,	// (0x0004aec3) main_mobtv_info_pane_g2

0x0001,

0xfad2,	// (0x00051a74) main_mobtv_info_pane_g_ParamLimits

0xfad2,	// (0x00051a74) main_mobtv_info_pane_g

0x91a4,	// (0x0004b146) sc_clock_pane_t5_ParamLimits

0x91a4,	// (0x0004b146) sc_clock_pane_t5

0x938b,	// (0x0004b32d) main_radioblah_pane_g1_ParamLimits

0x93d1,	// (0x0004b373) main_radioblah_pane_t3_ParamLimits

0x93d1,	// (0x0004b373) main_radioblah_pane_t3

0x93e9,	// (0x0004b38b) main_radioblah_pane_t4_ParamLimits

0x93e9,	// (0x0004b38b) main_radioblah_pane_t4

0x9417,	// (0x0004b3b9) main_radioblah_text_pane_ParamLimits

0x9417,	// (0x0004b3b9) main_radioblah_text_pane

0x9429,	// (0x0004b3cb) main_radioblah_info_pane_g1_ParamLimits

0x94fc,	// (0x0004b49e) main_radioblah_info_pane_t4_ParamLimits

0x94fc,	// (0x0004b49e) main_radioblah_info_pane_t4

0xd5ee,	// (0x0004f590) main_sp_fs_calendar_pane

0x9ae9,	// (0x0004ba8b) main_phacti_pane_g1

0x9af1,	// (0x0004ba93) phacti_note_pane_ParamLimits

0x9af1,	// (0x0004ba93) phacti_note_pane

0xb47e,	// (0x0004d420) phacti_term_pane_ParamLimits

0xb47e,	// (0x0004d420) phacti_term_pane

0xb493,	// (0x0004d435) phacti_note_pane_t1_ParamLimits

0xb493,	// (0x0004d435) phacti_note_pane_t1

0xb4aa,	// (0x0004d44c) phacti_term_pane_g1

0xb4b2,	// (0x0004d454) phacti_term_pane_t1_ParamLimits

0xb4b2,	// (0x0004d454) phacti_term_pane_t1

0xb4dc,	// (0x0004d47e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc702,	// (0x0004e6a4) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc41,	// (0x00051be3) popup_sp_fs_calendar_preview_list_single_pane_g

0xb4e4,	// (0x0004d486) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb4e4,	// (0x0004d486) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb4f9,	// (0x0004d49b) aid_popup_sp_fs_bg_corner_pane

0xe839,	// (0x000507db) popup_sp_fs_calendar_preview_bg_pane_g1

0xa620,	// (0x0004c5c2) popup_sp_fs_calendar_preview_bg_pane

0xb501,	// (0x0004d4a3) popup_sp_fs_calendar_preview_list_pane

0xd5ee,	// (0x0004f590) bg_main_sp_fs_cale_pane_ParamLimits

0xd5ee,	// (0x0004f590) bg_main_sp_fs_cale_pane

0xb509,	// (0x0004d4ab) listscroll_cale_mrui_pane_ParamLimits

0xb509,	// (0x0004d4ab) listscroll_cale_mrui_pane

0xb51d,	// (0x0004d4bf) listscroll_sp_fs_schedule_track_pane

0xb526,	// (0x0004d4c8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb526,	// (0x0004d4c8) main_sp_fs_ctrlbar_pane_cp01

0xb537,	// (0x0004d4d9) main_sp_fs_ribbon_pane

0xb53f,	// (0x0004d4e1) popup_sp_fs_cale_preview_window

0x9b4c,	// (0x0004baee) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b4c,	// (0x0004baee) list_single_sp_fs_schedule_track_pane

0xd5ee,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd5ee,	// (0x0004f590) bg_sp_fs_highlight_list_pane_cp03

0x9b5e,	// (0x0004bb00) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b5e,	// (0x0004bb00) list_single_sp_fs_schedule_track_pane_g1

0x9b6a,	// (0x0004bb0c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b6a,	// (0x0004bb0c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc46,	// (0x00051be8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc46,	// (0x00051be8) list_single_sp_fs_schedule_track_pane_g

0x9b76,	// (0x0004bb18) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b76,	// (0x0004bb18) list_single_sp_fs_schedule_track_pane_t1

0x9b90,	// (0x0004bb32) sp_fs_schedule_track_pane_ParamLimits

0x9b90,	// (0x0004bb32) sp_fs_schedule_track_pane

0xb551,	// (0x0004d4f3) sp_fs_schedule_track_pane_g1

0xb559,	// (0x0004d4fb) sp_fs_schedule_track_pane_g2

0xb561,	// (0x0004d503) sp_fs_schedule_track_pane_g3

0xb569,	// (0x0004d50b) sp_fs_schedule_track_pane_g4

0xb571,	// (0x0004d513) sp_fs_schedule_track_pane_g5

0x0004,

0xfc4b,	// (0x00051bed) sp_fs_schedule_track_pane_g

0x6da8,	// (0x00048d4a) bg_sp_fs_schedule_viewer_highlight_g1

0xc901,	// (0x0004e8a3) bg_sp_fs_schedule_viewer_highlight_g2

0x6db0,	// (0x00048d52) bg_sp_fs_schedule_viewer_highlight_g3

0x6db8,	// (0x00048d5a) bg_sp_fs_schedule_viewer_highlight_g4

0x7741,	// (0x000496e3) bg_sp_fs_schedule_viewer_highlight_g5

0x6dc8,	// (0x00048d6a) bg_sp_fs_schedule_viewer_highlight_g6

0x6dd0,	// (0x00048d72) bg_sp_fs_schedule_viewer_highlight_g7

0x6dd8,	// (0x00048d7a) bg_sp_fs_schedule_viewer_highlight_g8

0xc8e1,	// (0x0004e883) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc56,	// (0x00051bf8) bg_sp_fs_schedule_viewer_highlight_g

0xa620,	// (0x0004c5c2) bg_main_sp_fs_ribbon_pane

0x9ba1,	// (0x0004bb43) main_sp_fs_ribbon_pane_g1

0xb579,	// (0x0004d51b) main_sp_fs_ribbon_pane_t1

0x9baa,	// (0x0004bb4c) main_sp_fs_ribbon_pane_t2

0xb588,	// (0x0004d52a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc69,	// (0x00051c0b) main_sp_fs_ribbon_pane_t

0xb597,	// (0x0004d539) main_sp_fs_ribbon_scheduler_pane

0xb59f,	// (0x0004d541) bg_main_sp_fs_ribbon_pane_g1

0xb5a8,	// (0x0004d54a) bg_main_sp_fs_ribbon_pane_g2

0xb5b1,	// (0x0004d553) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc70,	// (0x00051c12) bg_main_sp_fs_ribbon_pane_g

0xb5b9,	// (0x0004d55b) main_sp_fs_ribbon_scheduler_pane_g1

0xb5c2,	// (0x0004d564) main_sp_fs_ribbon_scheduler_pane_g2

0xb5cb,	// (0x0004d56d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc77,	// (0x00051c19) main_sp_fs_ribbon_scheduler_pane_g

0xb5d4,	// (0x0004d576) list_cale_mrui_pane

0x9bb9,	// (0x0004bb5b) sp_fs_scroll_pane_cp07_ParamLimits

0x9bb9,	// (0x0004bb5b) sp_fs_scroll_pane_cp07

0x9bcd,	// (0x0004bb6f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9bcd,	// (0x0004bb6f) bg_sp_fs_schedule_viewer_highlight

0xb5dd,	// (0x0004d57f) list_single_sp_fs_schedule_track_pane_cp01

0xb5e5,	// (0x0004d587) list_sp_fs_schedule_track_pane

0xb5ed,	// (0x0004d58f) sp_fs_scroll_pane_cp06_ParamLimits

0xb5ed,	// (0x0004d58f) sp_fs_scroll_pane_cp06

0xe839,	// (0x000507db) bgmain_sp_fs_calendar_pane_g1

0x1497,	// (0x00043439) list_single_cale_mrui_pane_ParamLimits

0x1497,	// (0x00043439) list_single_cale_mrui_pane

0xb5ff,	// (0x0004d5a1) list_single_cale_mrui_row_pane_ParamLimits

0xb5ff,	// (0x0004d5a1) list_single_cale_mrui_row_pane

0xb60c,	// (0x0004d5ae) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb60c,	// (0x0004d5ae) list_single_cale_mrui_row_pane_g1

0xb651,	// (0x0004d5f3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb651,	// (0x0004d5f3) list_single_cale_mrui_row_pane_t1

0x14b7,	// (0x00043459) list_single_cale_mrui_row_pane_t2_ParamLimits

0x14b7,	// (0x00043459) list_single_cale_mrui_row_pane_t2

0xb663,	// (0x0004d605) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb663,	// (0x0004d605) list_single_cale_mrui_row_pane_t3

0xb692,	// (0x0004d634) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb692,	// (0x0004d634) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc85,	// (0x00051c27) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc85,	// (0x00051c27) list_single_cale_mrui_row_pane_t

0x151f,	// (0x000434c1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x151f,	// (0x000434c1) list_single_cmail_header_editor_pane_bg_cp01

0x1545,	// (0x000434e7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1545,	// (0x000434e7) list_single_cmail_header_editor_pane_bg_cp02

0x9bdd,	// (0x0004bb7f) main_radioblah_text_pane_t1_ParamLimits

0x9bdd,	// (0x0004bb7f) main_radioblah_text_pane_t1

0xb6c1,	// (0x0004d663) cam6_indi_pane_cp01

0xb6c9,	// (0x0004d66b) cam6_mode_pane_cp01

0xb6d1,	// (0x0004d673) cam6_pano_pane

0xb6da,	// (0x0004d67c) cam6_zoom_pane_cp01

0xb6e2,	// (0x0004d684) cam6_pano_image_pane

0xb6ed,	// (0x0004d68f) cam6_pano_pane_g1

0x8ea0,	// (0x0004ae42) cam6_pano_pane_g2

0xb6f6,	// (0x0004d698) cam6_pano_pane_g3

0xb6ff,	// (0x0004d6a1) cam6_pano_pane_g4

0xede3,	// (0x00050d85) cam6_pano_pane_g5

0xb708,	// (0x0004d6aa) cam6_pano_pane_g6

0xb712,	// (0x0004d6b4) cam6_pano_pane_g7

0xb71a,	// (0x0004d6bc) cam6_pano_pane_g8

0xb723,	// (0x0004d6c5) cam6_pano_pane_g9

0x0008,

0xfc8e,	// (0x00051c30) cam6_pano_pane_g

0xa620,	// (0x0004c5c2) main_browser_tag_pane

0xb45f,	// (0x0004d401) grid_navstr_albumart_pane

0xb72e,	// (0x0004d6d0) cell_navstr_albumart_pane_ParamLimits

0xb72e,	// (0x0004d6d0) cell_navstr_albumart_pane

0xb751,	// (0x0004d6f3) cell_navstr_albumart_pane_g1

0xe20f,	// (0x000501b1) cell_navstr_albumart_pane_g2

0xe21f,	// (0x000501c1) cell_navstr_albumart_pane_g3

0xe217,	// (0x000501b9) cell_navstr_albumart_pane_g4

0x0003,

0xfca1,	// (0x00051c43) cell_navstr_albumart_pane_g

0x9bf7,	// (0x0004bb99) bt_list_pane_ParamLimits

0x9bf7,	// (0x0004bb99) bt_list_pane

0x9c0b,	// (0x0004bbad) bt_list_pane_t1

0x9c1a,	// (0x0004bbbc) bt_list_pane_t2

0x0001,

0xfcaa,	// (0x00051c4c) bt_list_pane_t

0xa620,	// (0x0004c5c2) main_cale_prevew_pane

0x9c29,	// (0x0004bbcb) popup_cale_preview_window_ParamLimits

0x9c29,	// (0x0004bbcb) popup_cale_preview_window

0xd5ee,	// (0x0004f590) bg_popup_preview_window_pane_cp05_ParamLimits

0xd5ee,	// (0x0004f590) bg_popup_preview_window_pane_cp05

0xb759,	// (0x0004d6fb) list_cale_preview_pane_ParamLimits

0xb759,	// (0x0004d6fb) list_cale_preview_pane

0x9c44,	// (0x0004bbe6) list_double_cale_preview_pane_ParamLimits

0x9c44,	// (0x0004bbe6) list_double_cale_preview_pane

0x9c56,	// (0x0004bbf8) list_single_cale_preview_pane_ParamLimits

0x9c56,	// (0x0004bbf8) list_single_cale_preview_pane

0x9c6c,	// (0x0004bc0e) list_single_cale_preview_pane_g1

0x9c74,	// (0x0004bc16) list_single_cale_preview_pane_t1_ParamLimits

0x9c74,	// (0x0004bc16) list_single_cale_preview_pane_t1

0x9c89,	// (0x0004bc2b) list_double_cale_preview_pane_g1

0x9c91,	// (0x0004bc33) list_double_cale_preview_pane_t1_ParamLimits

0x9c91,	// (0x0004bc33) list_double_cale_preview_pane_t1

0x9ca6,	// (0x0004bc48) list_double_cale_preview_pane_t2_ParamLimits

0x9ca6,	// (0x0004bc48) list_double_cale_preview_pane_t2

0x0001,

0xfcaf,	// (0x00051c51) list_double_cale_preview_pane_t_ParamLimits

0xfcaf,	// (0x00051c51) list_double_cale_preview_pane_t

0xa620,	// (0x0004c5c2) main_ezdial_pane

0xd5ee,	// (0x0004f590) main_sp_fs_email_pane_ParamLimits

0x97ce,	// (0x0004b770) cmail_ddmenu_btn01_pane_ParamLimits

0x97ce,	// (0x0004b770) cmail_ddmenu_btn01_pane

0x97e1,	// (0x0004b783) cmail_ddmenu_btn02_pane_ParamLimits

0x97e1,	// (0x0004b783) cmail_ddmenu_btn02_pane

0x983c,	// (0x0004b7de) cmail_ddmenu_btn03_pane_ParamLimits

0x983c,	// (0x0004b7de) cmail_ddmenu_btn03_pane

0x10c5,	// (0x00043067) main_sp_fs_ctrlbar_pane_ParamLimits

0x10e9,	// (0x0004308b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7589,	// (0x0004952b) list_cmail_body_pane_ParamLimits

0xb38b,	// (0x0004d32d) bg_button_pane_cp12

0xb3a0,	// (0x0004d342) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb3a0,	// (0x0004d342) list_single_cmail_header_detail_pane_g3

0x1471,	// (0x00043413) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1471,	// (0x00043413) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc32,	// (0x00051bd4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc32,	// (0x00051bd4) list_single_cmail_header_detail_pane_t

0xb4c7,	// (0x0004d469) phacti_term_pane_t2_ParamLimits

0xb4c7,	// (0x0004d469) phacti_term_pane_t2

0x0001,

0xfc3c,	// (0x00051bde) phacti_term_pane_t_ParamLimits

0xfc3c,	// (0x00051bde) phacti_term_pane_t

0xb765,	// (0x0004d707) aid_size_list_single_double

0x9cbe,	// (0x0004bc60) popup_ezdial_listscroll_window

0x9cda,	// (0x0004bc7c) popup_number_entry_window_cp01

0xcfde,	// (0x0004ef80) bg_popup_call_pane_cp09

0xb771,	// (0x0004d713) ezdial_list_pane

0xb779,	// (0x0004d71b) scroll_pane_cp23

0xe3f2,	// (0x00050394) bg_button_pane_cp028_ParamLimits

0xe3f2,	// (0x00050394) bg_button_pane_cp028

0x9ce8,	// (0x0004bc8a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9ce8,	// (0x0004bc8a) cmail_ddmenu_btn01_pane_g1

0x9cf7,	// (0x0004bc99) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9cf7,	// (0x0004bc99) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcb4,	// (0x00051c56) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcb4,	// (0x00051c56) cmail_ddmenu_btn01_pane_g

0xb781,	// (0x0004d723) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb781,	// (0x0004d723) cmail_ddmenu_btn01_pane_t1

0xe3f2,	// (0x00050394) bg_button_pane_cp029_ParamLimits

0xe3f2,	// (0x00050394) bg_button_pane_cp029

0x9d07,	// (0x0004bca9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d07,	// (0x0004bca9) cmail_ddmenu_btn02_pane_g1

0x9d22,	// (0x0004bcc4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d22,	// (0x0004bcc4) cmail_ddmenu_btn02_pane_t1

0xd5ee,	// (0x0004f590) bg_button_pane_cp031_ParamLimits

0xd5ee,	// (0x0004f590) bg_button_pane_cp031

0x9d07,	// (0x0004bca9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d07,	// (0x0004bca9) cmail_ddmenu_btn03_pane_g1

0x9d22,	// (0x0004bcc4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d22,	// (0x0004bcc4) cmail_ddmenu_btn03_pane_t1

0x63ba,	// (0x0004835c) cell_dialer2_keypad_pane_t1_ParamLimits

0x63d4,	// (0x00048376) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x63d4,	// (0x00048376) cell_dialer2_keypad_pane_t1_copy1

0x8abd,	// (0x0004aa5f) ncimui_group_button_pane

0xd5ee,	// (0x0004f590) main_sp_fs_calendar_pane_ParamLimits

0x99f6,	// (0x0004b998) list_single_cmail_header_caption_pane_ParamLimits

0xaff7,	// (0x0004cf99) aid_recal_txt_sm_pane

0xa620,	// (0x0004c5c2) mian_recal_day_pane

0xb53f,	// (0x0004d4e1) popup_sp_fs_cale_preview_window_ParamLimits

0xa620,	// (0x0004c5c2) list_recal_day_pane

0xb7b0,	// (0x0004d752) list_single_recal_day_pane_ParamLimits

0xb7b0,	// (0x0004d752) list_single_recal_day_pane

0xb7c2,	// (0x0004d764) list_single_recal_day_pane_g1_ParamLimits

0xb7c2,	// (0x0004d764) list_single_recal_day_pane_g1

0xb7ce,	// (0x0004d770) list_single_recal_day_pane_g2_ParamLimits

0xb7ce,	// (0x0004d770) list_single_recal_day_pane_g2

0xb7de,	// (0x0004d780) list_single_recal_day_pane_g3_ParamLimits

0xb7de,	// (0x0004d780) list_single_recal_day_pane_g3

0x9d49,	// (0x0004bceb) list_single_recal_day_pane_g4_ParamLimits

0x9d49,	// (0x0004bceb) list_single_recal_day_pane_g4

0xb7ea,	// (0x0004d78c) list_single_recal_day_pane_g5_ParamLimits

0xb7ea,	// (0x0004d78c) list_single_recal_day_pane_g5

0xb7fa,	// (0x0004d79c) list_single_recal_day_pane_g6_ParamLimits

0xb7fa,	// (0x0004d79c) list_single_recal_day_pane_g6

0x0004,

0xfcc3,	// (0x00051c65) list_single_recal_day_pane_g_ParamLimits

0xfcc3,	// (0x00051c65) list_single_recal_day_pane_g

0xb811,	// (0x0004d7b3) list_single_recal_day_pane_t1

0xb823,	// (0x0004d7c5) list_single_recal_day_pane_t2

0x0001,

0xfcce,	// (0x00051c70) list_single_recal_day_pane_t

0x9d69,	// (0x0004bd0b) ncimui_query_button_pane_ParamLimits

0x9d69,	// (0x0004bd0b) ncimui_query_button_pane

0x9d79,	// (0x0004bd1b) ncimui_query_button_pane_t1_ParamLimits

0x9d79,	// (0x0004bd1b) ncimui_query_button_pane_t1

0xb838,	// (0x0004d7da) ncimui_query_button_pane_t2_ParamLimits

0xb838,	// (0x0004d7da) ncimui_query_button_pane_t2

0x0001,

0xfcd3,	// (0x00051c75) ncimui_query_button_pane_t_ParamLimits

0xfcd3,	// (0x00051c75) ncimui_query_button_pane_t

0x9d8c,	// (0x0004bd2e) query_button_pane_ParamLimits

0x9d8c,	// (0x0004bd2e) query_button_pane

0xa620,	// (0x0004c5c2) bg_button_pane_cp0028

0xb84b,	// (0x0004d7ed) query_button_pane_t1

0x444b,	// (0x000463ed) main_tport_pane_ParamLimits

0x98e3,	// (0x0004b885) bg_popup_window_pane_cp01_ParamLimits

0x98e3,	// (0x0004b885) bg_popup_window_pane_cp01

0x98fd,	// (0x0004b89f) heading_pane_cp08_ParamLimits

0x98fd,	// (0x0004b89f) heading_pane_cp08

0x9911,	// (0x0004b8b3) heading_pane_cp07_ParamLimits

0x9911,	// (0x0004b8b3) heading_pane_cp07

0xb34d,	// (0x0004d2ef) cell_tport_appsw_pane_g2

0x0002,

0xfc1f,	// (0x00051bc1) cell_tport_appsw_pane_g

0x0c6d,	// (0x00042c0f) input_candi_list_open_g1

0xcaa8,	// (0x0004ea4a) list_cale_time_pane_g6_ParamLimits

0xcaa8,	// (0x0004ea4a) list_cale_time_pane_g6

0x5218,	// (0x000471ba) aid_size_touch_calib_1_ParamLimits

0x5218,	// (0x000471ba) aid_size_touch_calib_1

0x5224,	// (0x000471c6) aid_size_touch_calib_2_ParamLimits

0x5224,	// (0x000471c6) aid_size_touch_calib_2

0x523a,	// (0x000471dc) aid_size_touch_calib_3_ParamLimits

0x523a,	// (0x000471dc) aid_size_touch_calib_3

0x5258,	// (0x000471fa) aid_size_touch_calib_4_ParamLimits

0x5258,	// (0x000471fa) aid_size_touch_calib_4

0x526e,	// (0x00047210) main_touch_calib_button_group_pane_ParamLimits

0x526e,	// (0x00047210) main_touch_calib_button_group_pane

0x5286,	// (0x00047228) main_touch_calib_pane_g1_ParamLimits

0x5292,	// (0x00047234) main_touch_calib_pane_g2_ParamLimits

0x529e,	// (0x00047240) main_touch_calib_pane_g3_ParamLimits

0x52aa,	// (0x0004724c) main_touch_calib_pane_g4_ParamLimits

0xf65a,	// (0x000515fc) main_touch_calib_pane_g_ParamLimits

0x52b6,	// (0x00047258) main_touch_calib_pane_t1_ParamLimits

0x52d0,	// (0x00047272) main_touch_calib_pane_t2_ParamLimits

0x52ea,	// (0x0004728c) main_touch_calib_pane_t3_ParamLimits

0x52fe,	// (0x000472a0) main_touch_calib_pane_t4_ParamLimits

0x5312,	// (0x000472b4) main_touch_calib_pane_t5_ParamLimits

0xf663,	// (0x00051605) main_touch_calib_pane_t_ParamLimits

0xebb9,	// (0x00050b5b) list_single_fp_cale_pane_g3_ParamLimits

0xebb9,	// (0x00050b5b) list_single_fp_cale_pane_g3

0xd5ee,	// (0x0004f590) bg_button_pane_cp012_ParamLimits

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp03_ParamLimits

0x76f7,	// (0x00049699) cell_vitu2_function_top_pane_g1_ParamLimits

0xd5ee,	// (0x0004f590) bg_vkb2_func_pane_cp04_ParamLimits

0x8a5d,	// (0x0004a9ff) main_ncimui_button_group_pane_ParamLimits

0x8a5d,	// (0x0004a9ff) main_ncimui_button_group_pane

0x8aab,	// (0x0004aa4d) main_ncimui_pane_t3_ParamLimits

0x8aab,	// (0x0004aa4d) main_ncimui_pane_t3

0xb475,	// (0x0004d417) phacti_button_group_pane

0xb765,	// (0x0004d707) aid_size_list_single_double_ParamLimits

0x9cbe,	// (0x0004bc60) popup_ezdial_listscroll_window_ParamLimits

0x9cda,	// (0x0004bc7c) popup_number_entry_window_cp01_ParamLimits

0x9d9f,	// (0x0004bd41) phacti_button_pane_ParamLimits

0x9d9f,	// (0x0004bd41) phacti_button_pane

0xa620,	// (0x0004c5c2) bg_button_pane_cp14

0xb859,	// (0x0004d7fb) phacti_button_pane_t1

0x9db0,	// (0x0004bd52) main_touch_calib_button_pane_ParamLimits

0x9db0,	// (0x0004bd52) main_touch_calib_button_pane

0xc50b,	// (0x0004e4ad) bg_button_pane_cp18_ParamLimits

0xc50b,	// (0x0004e4ad) bg_button_pane_cp18

0xb867,	// (0x0004d809) main_touch_calib_button_pane_t1_ParamLimits

0xb867,	// (0x0004d809) main_touch_calib_button_pane_t1

0xb87d,	// (0x0004d81f) main_touch_calib_button_pane_t2_ParamLimits

0xb87d,	// (0x0004d81f) main_touch_calib_button_pane_t2

0x0001,

0xfcd8,	// (0x00051c7a) main_touch_calib_button_pane_t_ParamLimits

0xfcd8,	// (0x00051c7a) main_touch_calib_button_pane_t

0xa620,	// (0x0004c5c2) cell_ncimui_button_pane

0xa620,	// (0x0004c5c2) bg_button_pane_cp032

0xb89b,	// (0x0004d83d) cell_ncimui_button_pane_t1

0xad04,	// (0x0004cca6) image3_infobar_pane_ParamLimits

0xad04,	// (0x0004cca6) image3_infobar_pane

0x91d0,	// (0x0004b172) fs_bigclock_status_pane_ParamLimits

0x91d0,	// (0x0004b172) fs_bigclock_status_pane

0x91dd,	// (0x0004b17f) main_fs_bigclock_clock_pane_ParamLimits

0x91dd,	// (0x0004b17f) main_fs_bigclock_clock_pane

0x91f1,	// (0x0004b193) main_fs_bigclock_indi_pane_ParamLimits

0x91f1,	// (0x0004b193) main_fs_bigclock_indi_pane

0x920a,	// (0x0004b1ac) main_fs_bigclock_swipe_pane_ParamLimits

0x920a,	// (0x0004b1ac) main_fs_bigclock_swipe_pane

0xa620,	// (0x0004c5c2) main_fs_clock_dumped_data

0x922e,	// (0x0004b1d0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x922e,	// (0x0004b1d0) list_single_fs_bigclock_indicator_pane_g1

0x9254,	// (0x0004b1f6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x9254,	// (0x0004b1f6) list_single_fs_bigclock_indicator_pane_g2

0x926e,	// (0x0004b210) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x926e,	// (0x0004b210) list_single_fs_bigclock_indicator_pane_g3

0x9288,	// (0x0004b22a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x9288,	// (0x0004b22a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb06,	// (0x00051aa8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb06,	// (0x00051aa8) list_single_fs_bigclock_indicator_pane_g

0x92b1,	// (0x0004b253) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x92b1,	// (0x0004b253) list_single_fs_bigclock_indicator_pane_t1

0x92d9,	// (0x0004b27b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x92d9,	// (0x0004b27b) list_single_fs_bigclock_indicator_pane_t2

0x9301,	// (0x0004b2a3) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x9301,	// (0x0004b2a3) list_single_fs_bigclock_indicator_pane_t3

0x9329,	// (0x0004b2cb) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9329,	// (0x0004b2cb) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb11,	// (0x00051ab3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb11,	// (0x00051ab3) list_single_fs_bigclock_indicator_pane_t

0xb8a9,	// (0x0004d84b) image3_infobar_fav_pane_ParamLimits

0xb8a9,	// (0x0004d84b) image3_infobar_fav_pane

0xb8b9,	// (0x0004d85b) image3_infobar_loc_pane_ParamLimits

0xb8b9,	// (0x0004d85b) image3_infobar_loc_pane

0xb8cd,	// (0x0004d86f) image3_infobar_time_pane_ParamLimits

0xb8cd,	// (0x0004d86f) image3_infobar_time_pane

0xe839,	// (0x000507db) image3_infobar_time_pane_g1

0xb8dd,	// (0x0004d87f) image3_infobar_time_pane_t1

0xe839,	// (0x000507db) image3_infobar_loc_pane_g1

0xb8eb,	// (0x0004d88d) image3_infobar_loc_pane_g2

0x0001,

0xfcdd,	// (0x00051c7f) image3_infobar_loc_pane_g

0xb8f3,	// (0x0004d895) image3_infobar_loc_pane_t1

0xe839,	// (0x000507db) image3_infobar_fav_pane_g1

0xb901,	// (0x0004d8a3) image3_infobar_fav_pane_g2

0x0001,

0xfce2,	// (0x00051c84) image3_infobar_fav_pane_g

0xb909,	// (0x0004d8ab) fs_bigclock_status_battery_pane

0xb912,	// (0x0004d8b4) fs_bigclock_status_signal_pane

0xb91b,	// (0x0004d8bd) fs_bigclock_status_title_pane

0xb924,	// (0x0004d8c6) fs_bigclock_status_signal_pane_g1

0xb92d,	// (0x0004d8cf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfce7,	// (0x00051c89) fs_bigclock_status_signal_pane_g

0xb935,	// (0x0004d8d7) fs_bigclock_status_battery_pane_g1

0xb93e,	// (0x0004d8e0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcec,	// (0x00051c8e) fs_bigclock_status_battery_pane_g

0xb946,	// (0x0004d8e8) fs_bigclock_status_title_pane_t1

0xe839,	// (0x000507db) main_fs_bigclock_clock_pane_g1

0xb954,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g2

0xb954,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g3

0xb954,	// (0x0004d8f6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcf1,	// (0x00051c93) main_fs_bigclock_clock_pane_g

0xb95c,	// (0x0004d8fe) main_fs_bigclock_clock_pane_t1

0xb96a,	// (0x0004d90c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcfa,	// (0x00051c9c) main_fs_bigclock_clock_pane_t

0xb979,	// (0x0004d91b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb979,	// (0x0004d91b) list_single_fs_bigclock_indicator_pane

0x9dc5,	// (0x0004bd67) list_single_fs_bigclock_pane_ParamLimits

0x9dc5,	// (0x0004bd67) list_single_fs_bigclock_pane

0xb993,	// (0x0004d935) main_fs_bigclock_indicator_pane_t1

0xb9a2,	// (0x0004d944) list_single_fs_bigclock_pane_g1

0xb9aa,	// (0x0004d94c) list_single_fs_bigclock_pane_t1

0xe839,	// (0x000507db) main_fs_bigclock_swipe_pane_g1

0xb9ed,	// (0x0004d98f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd0b,	// (0x00051cad) main_fs_bigclock_swipe_pane_g

0xb9f5,	// (0x0004d997) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb9f5,	// (0x0004d997) main_fs_bigclock_swipe_pane_t1

0x32da,	// (0x0004527c) call_type_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_btmg_pane

0xb638,	// (0x0004d5da) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb638,	// (0x0004d5da) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc7e,	// (0x00051c20) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc7e,	// (0x00051c20) list_single_cale_mrui_row_pane_g

0xb7a0,	// (0x0004d742) list_recal_vselct_arw_lo_pane

0xb7a8,	// (0x0004d74a) list_recal_vselct_arw_up_pane

0xafee,	// (0x0004cf90) list_recal_vselct_pane

0xba12,	// (0x0004d9b4) btmg_button_pane

0x9e28,	// (0x0004bdca) main_btmg_pane_g1

0xa620,	// (0x0004c5c2) bg_button_pane_cp044

0xba1c,	// (0x0004d9be) btmg_button_pane_t1

0xe3ea,	// (0x0005038c) aid_listscroll_gen

0xd5ee,	// (0x0004f590) main_cntbar_detail_pane

0xb36b,	// (0x0004d30d) list_cmail_folder_pane

0xb37b,	// (0x0004d31d) sp_fs_scroll_pane_cp03_ParamLimits

0x1565,	// (0x00043507) list_single_fs_dyc_pane_cp01_ParamLimits

0x1565,	// (0x00043507) list_single_fs_dyc_pane_cp01

0xba2a,	// (0x0004d9cc) aid_size_cmail_indent

0xba33,	// (0x0004d9d5) list_single_dyc_row_pane_cp01

0x9e5e,	// (0x0004be00) cntbar_detail_list_pane_ParamLimits

0x9e5e,	// (0x0004be00) cntbar_detail_list_pane

0x9eaa,	// (0x0004be4c) main_cntbar_detail_cont_pane_ParamLimits

0x9eaa,	// (0x0004be4c) main_cntbar_detail_cont_pane

0x32ce,	// (0x00045270) scroll_pane_cp032_ParamLimits

0x32ce,	// (0x00045270) scroll_pane_cp032

0x9ebe,	// (0x0004be60) cntbar_detail_list_event_pane_ParamLimits

0x9ebe,	// (0x0004be60) cntbar_detail_list_event_pane

0x9e6e,	// (0x0004be10) cntbar_detail_list_shct_pane

0xc94f,	// (0x0004e8f1) aid_list_gen

0xba3c,	// (0x0004d9de) aid_scroll

0xba45,	// (0x0004d9e7) aid_size_touch_scroll_bar

0x9ece,	// (0x0004be70) aid_list_double

0xba4e,	// (0x0004d9f0) aid_list_single

0x157b,	// (0x0004351d) aid_list_single_lg

0xba57,	// (0x0004d9f9) aid_list_z_g_a_sm

0xba5f,	// (0x0004da01) aid_list_z_g_d

0xba67,	// (0x0004da09) aid_txt_z_prm

0x1584,	// (0x00043526) aid_txt_z_prm_cp01

0x1592,	// (0x00043534) aid_txt_z_sec

0x9ed7,	// (0x0004be79) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9ed7,	// (0x0004be79) main_cntbar_detail_cont_pane_g1

0x9eeb,	// (0x0004be8d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9eeb,	// (0x0004be8d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd10,	// (0x00051cb2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd10,	// (0x00051cb2) main_cntbar_detail_cont_pane_g

0xba75,	// (0x0004da17) main_cntbar_detail_cont_pane_t1

0xba83,	// (0x0004da25) main_cntbar_detail_cont_pane_t2

0xba91,	// (0x0004da33) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd15,	// (0x00051cb7) main_cntbar_detail_cont_pane_t

0x9efb,	// (0x0004be9d) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9efb,	// (0x0004be9d) cell_cntbar_detail_list_shct_pane

0xba9f,	// (0x0004da41) cntbar_detail_list_shct_pane_g1

0xbaa8,	// (0x0004da4a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd1c,	// (0x00051cbe) cntbar_detail_list_shct_pane_g

0x9f0f,	// (0x0004beb1) cntbar_detail_list_event_pane_g1_ParamLimits

0x9f0f,	// (0x0004beb1) cntbar_detail_list_event_pane_g1

0x9f1b,	// (0x0004bebd) cntbar_detail_list_event_pane_g2_ParamLimits

0x9f1b,	// (0x0004bebd) cntbar_detail_list_event_pane_g2

0x0005,

0xfd21,	// (0x00051cc3) cntbar_detail_list_event_pane_g_ParamLimits

0xfd21,	// (0x00051cc3) cntbar_detail_list_event_pane_g

0x9f87,	// (0x0004bf29) cntbar_detail_list_event_pane_t1_ParamLimits

0x9f87,	// (0x0004bf29) cntbar_detail_list_event_pane_t1

0x9f9c,	// (0x0004bf3e) cntbar_detail_list_event_pane_t2_ParamLimits

0x9f9c,	// (0x0004bf3e) cntbar_detail_list_event_pane_t2

0x0002,

0xfd2e,	// (0x00051cd0) cntbar_detail_list_event_pane_t_ParamLimits

0xfd2e,	// (0x00051cd0) cntbar_detail_list_event_pane_t

0xe839,	// (0x000507db) cell_cntbar_detail_list_shct_pane_g1

0x3652,	// (0x000455f4) navi_pane_mv_g3

0xd5ee,	// (0x0004f590) main_cntbar_detail_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_notif_wgt_pane

0xab1a,	// (0x0004cabc) aid_tch_main_mp4_pane_g4

0xacfc,	// (0x0004cc9e) popup_slider_window_cp02

0xb796,	// (0x0004d738) list_recal_day_event_pane

0x9e32,	// (0x0004bdd4) cntbar_detail_btn_pane_ParamLimits

0x9e32,	// (0x0004bdd4) cntbar_detail_btn_pane

0x9e48,	// (0x0004bdea) cntbar_detail_btn_pane_cp01_ParamLimits

0x9e48,	// (0x0004bdea) cntbar_detail_btn_pane_cp01

0x9e6e,	// (0x0004be10) cntbar_detail_list_shct_pane_ParamLimits

0x9e7e,	// (0x0004be20) cntbar_detail_pane_g1_ParamLimits

0x9e7e,	// (0x0004be20) cntbar_detail_pane_g1

0x9e8e,	// (0x0004be30) cntbar_detail_pane_t1_ParamLimits

0x9e8e,	// (0x0004be30) cntbar_detail_pane_t1

0x9f27,	// (0x0004bec9) cntbar_detail_list_event_pane_g3_ParamLimits

0x9f27,	// (0x0004bec9) cntbar_detail_list_event_pane_g3

0x9f3f,	// (0x0004bee1) cntbar_detail_list_event_pane_g4_ParamLimits

0x9f3f,	// (0x0004bee1) cntbar_detail_list_event_pane_g4

0x9f57,	// (0x0004bef9) cntbar_detail_list_event_pane_g5_ParamLimits

0x9f57,	// (0x0004bef9) cntbar_detail_list_event_pane_g5

0x9f6f,	// (0x0004bf11) cntbar_detail_list_event_pane_g6_ParamLimits

0x9f6f,	// (0x0004bf11) cntbar_detail_list_event_pane_g6

0x9fb1,	// (0x0004bf53) cntbar_detail_list_event_pane_t3_ParamLimits

0x9fb1,	// (0x0004bf53) cntbar_detail_list_event_pane_t3

0x9fc3,	// (0x0004bf65) popup_notif_wgt_window_ParamLimits

0x9fc3,	// (0x0004bf65) popup_notif_wgt_window

0x9fdc,	// (0x0004bf7e) popup_submenu_window_cp01_ParamLimits

0x9fdc,	// (0x0004bf7e) popup_submenu_window_cp01

0xcfde,	// (0x0004ef80) bg_popup_window_pane_cp10

0xbab1,	// (0x0004da53) listscroll_notif_wgt_pane

0xbabb,	// (0x0004da5d) list_notif_wgt_window

0xbac4,	// (0x0004da66) scroll_pane_cp033

0xbacd,	// (0x0004da6f) list_notif_wgt_row_pane_ParamLimits

0xbacd,	// (0x0004da6f) list_notif_wgt_row_pane

0xbadf,	// (0x0004da81) aid_size_list_notif_wgt_del

0xbae8,	// (0x0004da8a) list_notif_wgt_row_pane_g1

0xbaf0,	// (0x0004da92) list_notif_wgt_row_pane_g2

0xbaf8,	// (0x0004da9a) list_notif_wgt_row_pane_g3

0x0002,

0xfd35,	// (0x00051cd7) list_notif_wgt_row_pane_g

0xbb01,	// (0x0004daa3) list_notif_wgt_row_pane_t1

0xbb0f,	// (0x0004dab1) list_notif_wgt_row_pane_t2

0xbb1d,	// (0x0004dabf) list_notif_wgt_row_pane_t3

0x0002,

0xfd3c,	// (0x00051cde) list_notif_wgt_row_pane_t

0x7796,	// (0x00049738) list_recal_day_event_pane_g1

0xbb2b,	// (0x0004dacd) list_recal_day_event_pane_t1

0xa620,	// (0x0004c5c2) bg_button_pane_cp045

0xbb3a,	// (0x0004dadc) cntbar_detail_btn_pane_t1

0xe3f2,	// (0x00050394) main_callh_pane_ParamLimits

0xe3f2,	// (0x00050394) main_callh_pane

0xa620,	// (0x0004c5c2) main_coverflow0_pane

0xa620,	// (0x0004c5c2) main_wgtman_pane

0x9218,	// (0x0004b1ba) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9218,	// (0x0004b1ba) main_fs_bigclock_unlock_btn_pane

0xb345,	// (0x0004d2e7) bg_button_pane_cp16

0xb355,	// (0x0004d2f7) cell_tport_appsw_pane_g3

0x9fee,	// (0x0004bf90) cf0_flow_pane_ParamLimits

0x9fee,	// (0x0004bf90) cf0_flow_pane

0xbb48,	// (0x0004daea) listscroll_cf0_pane

0xbb51,	// (0x0004daf3) main_cf0_pane_g1

0xa003,	// (0x0004bfa5) main_cf0_pane_t1_ParamLimits

0xa003,	// (0x0004bfa5) main_cf0_pane_t1

0xa01a,	// (0x0004bfbc) main_cf0_pane_t2_ParamLimits

0xa01a,	// (0x0004bfbc) main_cf0_pane_t2

0x0001,

0xfd43,	// (0x00051ce5) main_cf0_pane_t_ParamLimits

0xfd43,	// (0x00051ce5) main_cf0_pane_t

0xbb5b,	// (0x0004dafd) scroll_pane_cp11

0xa031,	// (0x0004bfd3) cf0_flow_pane_g1

0xa039,	// (0x0004bfdb) cf0_flow_pane_g2

0x0001,

0xfd48,	// (0x00051cea) cf0_flow_pane_g

0xa041,	// (0x0004bfe3) cf0_flow_pane_t1

0xa620,	// (0x0004c5c2) main_call6_pane

0xa620,	// (0x0004c5c2) main_calllock_pane

0xa04f,	// (0x0004bff1) call6_btn_grp_pane_ParamLimits

0xa04f,	// (0x0004bff1) call6_btn_grp_pane

0xa069,	// (0x0004c00b) call6_pane_g1_ParamLimits

0xa069,	// (0x0004c00b) call6_pane_g1

0xa07e,	// (0x0004c020) popup_call6_1st_window_ParamLimits

0xa07e,	// (0x0004c020) popup_call6_1st_window

0xa08f,	// (0x0004c031) popup_call6_2nd_window_ParamLimits

0xa08f,	// (0x0004c031) popup_call6_2nd_window

0xa0a0,	// (0x0004c042) cell_call6_btn_pane_ParamLimits

0xa0a0,	// (0x0004c042) cell_call6_btn_pane

0xcfde,	// (0x0004ef80) bg_popup_call2_in_pane_cp03

0xbb66,	// (0x0004db08) popup_call6_1st_window_g1

0xbb6e,	// (0x0004db10) popup_call6_1st_window_g2

0xbb76,	// (0x0004db18) popup_call6_1st_window_g3

0x0002,

0xfd4d,	// (0x00051cef) popup_call6_1st_window_g

0xbb7e,	// (0x0004db20) popup_call6_1st_window_t1

0xbb8d,	// (0x0004db2f) popup_call6_1st_window_t2

0xbb9d,	// (0x0004db3f) popup_call6_1st_window_t3

0x0002,

0xfd54,	// (0x00051cf6) popup_call6_1st_window_t

0xcfde,	// (0x0004ef80) bg_popup_call2_in_pane_cp04

0xbb66,	// (0x0004db08) popup_call6_2nd_window_g1

0xbb6e,	// (0x0004db10) popup_call6_2nd_window_g2

0xbb76,	// (0x0004db18) popup_call6_2nd_window_g3

0x0002,

0xfd4d,	// (0x00051cef) popup_call6_2nd_window_g

0xbb7e,	// (0x0004db20) popup_call6_2nd_window_t1

0xa620,	// (0x0004c5c2) bg_button_pane_cp15

0xbbad,	// (0x0004db4f) cell_call6_btn_pane_g1

0xbbb6,	// (0x0004db58) cell_call6_btn_pane_t1

0xa0b4,	// (0x0004c056) listscroll_wgtman_pane_ParamLimits

0xa0b4,	// (0x0004c056) listscroll_wgtman_pane

0xa0d7,	// (0x0004c079) wgtman_btn_pane_ParamLimits

0xa0d7,	// (0x0004c079) wgtman_btn_pane

0xce95,	// (0x0004ee37) aid_scroll_copy1

0xbbc5,	// (0x0004db67) list_wgtman_pane

0xa11a,	// (0x0004c0bc) wgtman_btn_pane_g1_ParamLimits

0xa11a,	// (0x0004c0bc) wgtman_btn_pane_g1

0xa146,	// (0x0004c0e8) wgtman_btn_pane_t1_ParamLimits

0xa146,	// (0x0004c0e8) wgtman_btn_pane_t1

0xbbcf,	// (0x0004db71) wgtman_btn_pane_t2_ParamLimits

0xbbcf,	// (0x0004db71) wgtman_btn_pane_t2

0x0001,

0xfd5b,	// (0x00051cfd) wgtman_btn_pane_t_ParamLimits

0xfd5b,	// (0x00051cfd) wgtman_btn_pane_t

0xa183,	// (0x0004c125) listrow_wgtman_pane_ParamLimits

0xa183,	// (0x0004c125) listrow_wgtman_pane

0xa195,	// (0x0004c137) listrow_wgtman_pane_g1

0xa19e,	// (0x0004c140) listrow_wgtman_pane_g2

0x0001,

0xfd60,	// (0x00051d02) listrow_wgtman_pane_g

0x15a0,	// (0x00043542) listrow_wgtman_pane_t1

0x15ae,	// (0x00043550) listrow_wgtman_pane_t2

0x0001,

0xfd65,	// (0x00051d07) listrow_wgtman_pane_t

0x15bc,	// (0x0004355e) wait_bar_pane_cp09

0xbbe6,	// (0x0004db88) main_calllock_btn_pane

0xbbf0,	// (0x0004db92) main_calllock_pane_g1

0xa620,	// (0x0004c5c2) bg_button_pane_cp17

0xbbfc,	// (0x0004db9e) main_calllock_btn_pane_g1

0xbc05,	// (0x0004dba7) main_calllock_btn_pane_t1

0xa620,	// (0x0004c5c2) main_dialer3_pane

0xa620,	// (0x0004c5c2) main_fmrd2_pane

0xe839,	// (0x000507db) main_fs_bigclock_unlock_btn_pane_g1

0xbc1c,	// (0x0004dbbe) main_fs_bigclock_unlock_btn_pane_t1

0xa1a8,	// (0x0004c14a) area_fmrd2_info_pane_ParamLimits

0xa1a8,	// (0x0004c14a) area_fmrd2_info_pane

0xa1b9,	// (0x0004c15b) area_fmrd2_visual_pane_ParamLimits

0xa1b9,	// (0x0004c15b) area_fmrd2_visual_pane

0xa1c7,	// (0x0004c169) fmrd2_indi_pane_ParamLimits

0xa1c7,	// (0x0004c169) fmrd2_indi_pane

0xa1d4,	// (0x0004c176) area_fmrd2_visual_pane_g1

0xa1dc,	// (0x0004c17e) area_fmrd2_visual_pane_t1

0xa1ec,	// (0x0004c18e) area_fmrd2_visual_pane_t2

0xa1fc,	// (0x0004c19e) area_fmrd2_visual_pane_t3

0x0002,

0xfd6f,	// (0x00051d11) area_fmrd2_visual_pane_t

0xa20c,	// (0x0004c1ae) area_fmrd2_info_pane_g1

0xa214,	// (0x0004c1b6) area_fmrd2_info_pane_t1

0xa224,	// (0x0004c1c6) area_fmrd2_info_pane_t2

0xa234,	// (0x0004c1d6) area_fmrd2_info_pane_t3

0xa244,	// (0x0004c1e6) area_fmrd2_info_pane_t4

0x0003,

0xfd76,	// (0x00051d18) area_fmrd2_info_pane_t

0xa252,	// (0x0004c1f4) fmrd2_indi_pane_t1

0xa262,	// (0x0004c204) fmrd2_indi_pane_t2

0xa272,	// (0x0004c214) fmrd2_indi_pane_t3

0x0002,

0xfd7f,	// (0x00051d21) fmrd2_indi_pane_t

0x9297,	// (0x0004b239) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x9297,	// (0x0004b239) list_single_fs_bigclock_indicator_pane_g5

0x933e,	// (0x0004b2e0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x933e,	// (0x0004b2e0) list_single_fs_bigclock_indicator_pane_t5

0x9b05,	// (0x0004baa7) aid_cell_bcale_month_pane_ParamLimits

0x9b05,	// (0x0004baa7) aid_cell_bcale_month_pane

0x9b17,	// (0x0004bab9) bcale_month_pane_ParamLimits

0x9b17,	// (0x0004bab9) bcale_month_pane

0x9b31,	// (0x0004bad3) bcale_preview_pane_ParamLimits

0x9b31,	// (0x0004bad3) bcale_preview_pane

0xb9aa,	// (0x0004d94c) list_single_fs_bigclock_pane_t1_ParamLimits

0xb9c9,	// (0x0004d96b) list_single_fs_bigclock_pane_t2_ParamLimits

0xb9c9,	// (0x0004d96b) list_single_fs_bigclock_pane_t2

0x0001,

0xfd06,	// (0x00051ca8) list_single_fs_bigclock_pane_t_ParamLimits

0xfd06,	// (0x00051ca8) list_single_fs_bigclock_pane_t

0xbc14,	// (0x0004dbb6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd6a,	// (0x00051d0c) main_fs_bigclock_unlock_btn_pane_g

0xa282,	// (0x0004c224) aid_dia3_key_size_ParamLimits

0xa282,	// (0x0004c224) aid_dia3_key_size

0xa291,	// (0x0004c233) aid_dia3_listrow_size_ParamLimits

0xa291,	// (0x0004c233) aid_dia3_listrow_size

0xa2a6,	// (0x0004c248) dia3_keypad_fun_pane_ParamLimits

0xa2a6,	// (0x0004c248) dia3_keypad_fun_pane

0xa2c2,	// (0x0004c264) dia3_keypad_num_pane_ParamLimits

0xa2c2,	// (0x0004c264) dia3_keypad_num_pane

0xa2dd,	// (0x0004c27f) dia3_listscroll_pane_ParamLimits

0xa2dd,	// (0x0004c27f) dia3_listscroll_pane

0xa2f0,	// (0x0004c292) dia3_numentry_pane_ParamLimits

0xa2f0,	// (0x0004c292) dia3_numentry_pane

0xbc2a,	// (0x0004dbcc) dia3_list_pane

0xbc35,	// (0x0004dbd7) scroll_pane_cp12

0xa620,	// (0x0004c5c2) bg_dia3_numentry_pane

0xa304,	// (0x0004c2a6) dia3_numentry_pane_t1

0xa313,	// (0x0004c2b5) cell_dia3_key_num_pane

0xa31b,	// (0x0004c2bd) cell_dia3_key0_fun_pane_ParamLimits

0xa31b,	// (0x0004c2bd) cell_dia3_key0_fun_pane

0xa32f,	// (0x0004c2d1) cell_dia3_key1_fun_pane_ParamLimits

0xa32f,	// (0x0004c2d1) cell_dia3_key1_fun_pane

0xa347,	// (0x0004c2e9) dia3_listrow_pane

0x8cab,	// (0x0004ac4d) bg_dia3_numentry_pane_g1

0xa620,	// (0x0004c5c2) bg_button_pane_cp21

0xbc40,	// (0x0004dbe2) cell_dia3_key_num_pane_t1

0xbc4e,	// (0x0004dbf0) cell_dia3_key_num_pane_t2

0xbc5d,	// (0x0004dbff) cell_dia3_key_num_pane_t3

0xbc6c,	// (0x0004dc0e) cell_dia3_key_num_pane_t4

0x0003,

0xfd86,	// (0x00051d28) cell_dia3_key_num_pane_t

0xa620,	// (0x0004c5c2) bg_button_pane_cp19

0xa359,	// (0x0004c2fb) cell_dia3_key0_fun_pane_g1

0xa620,	// (0x0004c5c2) bg_button_pane_cp20

0xa361,	// (0x0004c303) cell_dia3_key1_fun_pane_g1

0xa369,	// (0x0004c30b) area_left_week_number_pane

0xa372,	// (0x0004c314) area_top_day_name_pane

0xa37b,	// (0x0004c31d) frame_month_view_pane

0xa383,	// (0x0004c325) grid_month_view_pane

0xa38d,	// (0x0004c32f) cell_top_day_name_pane_ParamLimits

0xa38d,	// (0x0004c32f) cell_top_day_name_pane

0xa3a3,	// (0x0004c345) cell_area_left_week_number_pane_ParamLimits

0xa3a3,	// (0x0004c345) cell_area_left_week_number_pane

0xa3b7,	// (0x0004c359) cell_month_view_pane_ParamLimits

0xa3b7,	// (0x0004c359) cell_month_view_pane

0xbc7b,	// (0x0004dc1d) frm_month_g1

0xa3d2,	// (0x0004c374) frm_month_g2

0xa3da,	// (0x0004c37c) frm_month_g3

0xa3e2,	// (0x0004c384) frm_month_g4

0xa3ea,	// (0x0004c38c) frm_month_g5

0xa3f2,	// (0x0004c394) frm_month_g6

0xa3fa,	// (0x0004c39c) frm_month_g7

0xbc84,	// (0x0004dc26) frm_month_g8

0xa402,	// (0x0004c3a4) frm_month_g9

0xa40b,	// (0x0004c3ad) frm_month_g10

0xa414,	// (0x0004c3b6) frm_month_g11

0xa41d,	// (0x0004c3bf) frm_month_g12

0xa426,	// (0x0004c3c8) frm_month_g13

0xa42f,	// (0x0004c3d1) frm_month_g14

0xa438,	// (0x0004c3da) frm_month_g15

0xa441,	// (0x0004c3e3) frm_month_g16

0x000f,

0xfd8f,	// (0x00051d31) frm_month_g

0xa44a,	// (0x0004c3ec) cell_top_day_name_pane_t1

0xa459,	// (0x0004c3fb) cell_area_left_week_number_pane_g1

0xa44a,	// (0x0004c3ec) cell_area_left_week_number_pane_t1

0xe839,	// (0x000507db) cell_month_view_pane_g1

0xa461,	// (0x0004c403) cell_month_view_pane_t1

0xa620,	// (0x0004c5c2) main_fps_pane

0x9804,	// (0x0004b7a6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x9804,	// (0x0004b7a6) cmail_ddmenu_btn02_pane_cp1

0x9820,	// (0x0004b7c2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x9820,	// (0x0004b7c2) cmail_ddmenu_btn02_pane_cp2

0x9d16,	// (0x0004bcb8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d16,	// (0x0004bcb8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcb9,	// (0x00051c5b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcb9,	// (0x00051c5b) cmail_ddmenu_btn02_pane_g

0x9d37,	// (0x0004bcd9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9d37,	// (0x0004bcd9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcbe,	// (0x00051c60) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcbe,	// (0x00051c60) cmail_ddmenu_btn02_pane_t

0xa470,	// (0x0004c412) fps_text_pane_ParamLimits

0xa470,	// (0x0004c412) fps_text_pane

0xa487,	// (0x0004c429) main_fps_pane_g1_ParamLimits

0xa487,	// (0x0004c429) main_fps_pane_g1

0xa4a1,	// (0x0004c443) wait_bar_pane_cp010_ParamLimits

0xa4a1,	// (0x0004c443) wait_bar_pane_cp010

0xa4b2,	// (0x0004c454) fps_text_pane_t1_ParamLimits

0xa4b2,	// (0x0004c454) fps_text_pane_t1

0x6944,	// (0x000488e6) cam4_image_uncrop_pane_g1

0x694d,	// (0x000488ef) cam4_image_uncrop_pane_g2

0x6956,	// (0x000488f8) cam4_image_uncrop_pane_g3

0x695f,	// (0x00048901) cam4_image_uncrop_pane_g4

0x0003,

0xf78c,	// (0x0005172e) cam4_image_uncrop_pane_g

0xa347,	// (0x0004c2e9) dia3_listrow_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_phob2_pane

0x997c,	// (0x0004b91e) cell_tport_appsw_pane_cp02_ParamLimits

0x997c,	// (0x0004b91e) cell_tport_appsw_pane_cp02

0x9990,	// (0x0004b932) cell_tport_appsw_pane_cp03_ParamLimits

0x9990,	// (0x0004b932) cell_tport_appsw_pane_cp03

0xa620,	// (0x0004c5c2) phob2_contact_card_pane

0xa620,	// (0x0004c5c2) phob2_listscroll_pane

0xbc8d,	// (0x0004dc2f) phob2_list_pane

0xbc95,	// (0x0004dc37) scroll_pane_cp034

0xa4ca,	// (0x0004c46c) phob2_cc_data_pane_ParamLimits

0xa4ca,	// (0x0004c46c) phob2_cc_data_pane

0xa4e9,	// (0x0004c48b) phob2_cc_listscroll_pane_ParamLimits

0xa4e9,	// (0x0004c48b) phob2_cc_listscroll_pane

0xa507,	// (0x0004c4a9) list_double_large_graphic_phob2_pane_ParamLimits

0xa507,	// (0x0004c4a9) list_double_large_graphic_phob2_pane

0xa519,	// (0x0004c4bb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa519,	// (0x0004c4bb) list_double_large_graphic_phob2_pane_g1

0x15c4,	// (0x00043566) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x15c4,	// (0x00043566) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfdb0,	// (0x00051d52) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdb0,	// (0x00051d52) list_double_large_graphic_phob2_pane_g

0x15d0,	// (0x00043572) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x15d0,	// (0x00043572) list_double_large_graphic_phob2_pane_t1

0x15e5,	// (0x00043587) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x15e5,	// (0x00043587) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb5,	// (0x00051d57) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb5,	// (0x00051d57) list_double_large_graphic_phob2_pane_t

0xa620,	// (0x0004c5c2) list_highlight_pane_cp024

0xbc9d,	// (0x0004dc3f) phob2_cc_button_pane

0xa526,	// (0x0004c4c8) phob2_cc_data_pane_g1_ParamLimits

0xa526,	// (0x0004c4c8) phob2_cc_data_pane_g1

0xa53b,	// (0x0004c4dd) phob2_cc_data_pane_g2_ParamLimits

0xa53b,	// (0x0004c4dd) phob2_cc_data_pane_g2

0x0001,

0xfdba,	// (0x00051d5c) phob2_cc_data_pane_g_ParamLimits

0xfdba,	// (0x00051d5c) phob2_cc_data_pane_g

0xa54d,	// (0x0004c4ef) phob2_cc_data_pane_t1_ParamLimits

0xa54d,	// (0x0004c4ef) phob2_cc_data_pane_t1

0xa565,	// (0x0004c507) phob2_cc_data_pane_t2_ParamLimits

0xa565,	// (0x0004c507) phob2_cc_data_pane_t2

0xa57d,	// (0x0004c51f) phob2_cc_data_pane_t3_ParamLimits

0xa57d,	// (0x0004c51f) phob2_cc_data_pane_t3

0x0002,

0xfdbf,	// (0x00051d61) phob2_cc_data_pane_t_ParamLimits

0xfdbf,	// (0x00051d61) phob2_cc_data_pane_t

0xbca5,	// (0x0004dc47) phob2_cc_list_pane_ParamLimits

0xbca5,	// (0x0004dc47) phob2_cc_list_pane

0x79fb,	// (0x0004999d) scroll_pane_cp035_ParamLimits

0x79fb,	// (0x0004999d) scroll_pane_cp035

0xd5ee,	// (0x0004f590) bg_button_pane_cp033

0xbcb1,	// (0x0004dc53) phob2_cc_button_pane_g1

0xbcbd,	// (0x0004dc5f) phob2_cc_button_pane_t1

0xbcd2,	// (0x0004dc74) phob2_cc_button_pane_t2

0x0001,

0xfdc6,	// (0x00051d68) phob2_cc_button_pane_t

0xa595,	// (0x0004c537) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa595,	// (0x0004c537) list_double_large_graphic_phob2_cc_pane

0xa5a7,	// (0x0004c549) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa5a7,	// (0x0004c549) list_double_large_graphic_phob2_cc_pane_g1

0x15f7,	// (0x00043599) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x15f7,	// (0x00043599) list_double_large_graphic_phob2_cc_pane_g2

0x1603,	// (0x000435a5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x1603,	// (0x000435a5) list_double_large_graphic_phob2_cc_pane_g3

0x160f,	// (0x000435b1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x160f,	// (0x000435b1) list_double_large_graphic_phob2_cc_pane_g4

0x161b,	// (0x000435bd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x161b,	// (0x000435bd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdcb,	// (0x00051d6d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdcb,	// (0x00051d6d) list_double_large_graphic_phob2_cc_pane_g

0x1627,	// (0x000435c9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1627,	// (0x000435c9) list_double_large_graphic_phob2_cc_pane_t1

0x1650,	// (0x000435f2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1650,	// (0x000435f2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdd6,	// (0x00051d78) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdd6,	// (0x00051d78) list_double_large_graphic_phob2_cc_pane_t

0xbce4,	// (0x0004dc86) list_highlight_pane_cp025_ParamLimits

0xbce4,	// (0x0004dc86) list_highlight_pane_cp025

0xd5ee,	// (0x0004f590) bg_button_pane_cp033_ParamLimits

0xbcb1,	// (0x0004dc53) phob2_cc_button_pane_g1_ParamLimits

0xbcbd,	// (0x0004dc5f) phob2_cc_button_pane_t1_ParamLimits

0xbcd2,	// (0x0004dc74) phob2_cc_button_pane_t2_ParamLimits

0xfdc6,	// (0x00051d68) phob2_cc_button_pane_t_ParamLimits

0x1893,	// (0x00043835) popup_wgtman_window

0x71d3,	// (0x00049175) scroll_pane_cp038

0xa0fc,	// (0x0004c09e) wgtman_btn_pane_cp_01_ParamLimits

0xa0fc,	// (0x0004c09e) wgtman_btn_pane_cp_01

0xbcf2,	// (0x0004dc94) wgtman_content_pane

0xbcfb,	// (0x0004dc9d) wgtman_heading_pane

0xa620,	// (0x0004c5c2) bg_heading_pane_cp02

0xbd04,	// (0x0004dca6) wgtman_heading_pane_g1

0xbd0c,	// (0x0004dcae) wgtman_heading_pane_t1

0xbd1a,	// (0x0004dcbc) scroll_pane_cp036

0xbd22,	// (0x0004dcc4) wgtman_list_pane

0xbd2a,	// (0x0004dccc) wgtman_list_pane_t1_ParamLimits

0xbd2a,	// (0x0004dccc) wgtman_list_pane_t1

0xad56,	// (0x0004ccf8) cam4_grid_pane

0x0e8f,	// (0x00042e31) bg_button_pane_cp015_ParamLimits

0x7890,	// (0x00049832) bg_button_pane_cp016_ParamLimits

0x78a3,	// (0x00049845) bg_button_pane_cp017_ParamLimits

0x0ed5,	// (0x00042e77) popup_vitu2_query_window_g3_ParamLimits

0x0ed5,	// (0x00042e77) popup_vitu2_query_window_g3

0x0f50,	// (0x00042ef2) popup_vitu2_query_window_t6_ParamLimits

0x0f50,	// (0x00042ef2) popup_vitu2_query_window_t6

0x0f7b,	// (0x00042f1d) popup_vitu2_query_window_t7_ParamLimits

0x0f7b,	// (0x00042f1d) popup_vitu2_query_window_t7

0x6944,	// (0x000488e6) cam4_grid_pane_g1

0x694d,	// (0x000488ef) cam4_grid_pane_g2

0xbd47,	// (0x0004dce9) cam4_grid_pane_g3

0xbd50,	// (0x0004dcf2) cam4_grid_pane_g4

0x0003,

0xfddb,	// (0x00051d7d) cam4_grid_pane_g

0x2562,	// (0x00044504) aid_placing_vt_slider_lsc_ParamLimits

0x286d,	// (0x0004480f) vidtel_button_pane_ParamLimits

0x286d,	// (0x0004480f) vidtel_button_pane

0xbd5b,	// (0x0004dcfd) bg_button_pane_cp034

0xa5b3,	// (0x0004c555) vidtel_button_pane_g1

0xbd65,	// (0x0004dd07) vidtel_button_pane_t1

0x75b2,	// (0x00049554) aid_size_vtel_slider_touch

0x79fb,	// (0x0004999d) scroll_pane_cp039

0x8d1a,	// (0x0004acbc) ncim_query_button_pane_cp01_ParamLimits

0x8d39,	// (0x0004acdb) ncimui_query_pane_g1_ParamLimits

0xd5ee,	// (0x0004f590) input_focus_pane_cp012_ParamLimits

0x8d5e,	// (0x0004ad00) ncim_query_entry_pane_t1_ParamLimits

0x79fb,	// (0x0004999d) scroll_pane_cp039_ParamLimits

0x35c6,	// (0x00045568) navi_pane_bcale_mc_g1

0x35ce,	// (0x00045570) navi_pane_bcale_mc_t1

0x9892,	// (0x0004b834) main_sp_fs_email_pane_g1

0x989a,	// (0x0004b83c) main_sp_fs_email_pane_g2

0x0001,

0xfb77,	// (0x00051b19) main_sp_fs_email_pane_g

0xb644,	// (0x0004d5e6) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb644,	// (0x0004d5e6) list_single_cale_mrui_row_pane_g3

0x9d5f,	// (0x0004bd01) list_single_recal_day_pane_g5_event_pane

0xb809,	// (0x0004d7ab) list_single_recal_day_pane_g7

0xbd73,	// (0x0004dd15) list_recal_day_event_pane_cp01

0xbd7c,	// (0x0004dd1e) list_recal_vselct_arw_lo_pane_cp01

0xbd84,	// (0x0004dd26) list_recal_vselct_arw_up_pane_cp01

0xbd8c,	// (0x0004dd2e) list_recal_vselct_pane_cp01

0x7796,	// (0x00049738) list_recal_day_event_pane_cp01_g1

0xbd96,	// (0x0004dd38) list_recal_day_event_pane_cp01_t1

0xb811,	// (0x0004d7b3) list_single_recal_day_pane_t1_ParamLimits

0xb823,	// (0x0004d7c5) list_single_recal_day_pane_t2_ParamLimits

0xfcce,	// (0x00051c70) list_single_recal_day_pane_t_ParamLimits

0xc4db,	// (0x0004e47d) bg_notes_pane_ParamLimits

0xc4e9,	// (0x0004e48b) list_notes_pane_ParamLimits

0x1bdc,	// (0x00043b7e) scroll_pane_cp06_ParamLimits

0xc50b,	// (0x0004e4ad) main_notes_pane_ParamLimits

0xa620,	// (0x0004c5c2) main_welc_pane

0xa5bb,	// (0x0004c55d) main_welc_body_pane_ParamLimits

0xa5bb,	// (0x0004c55d) main_welc_body_pane

0xa5d0,	// (0x0004c572) main_welc_opti_pane_ParamLimits

0xa5d0,	// (0x0004c572) main_welc_opti_pane

0xa5e5,	// (0x0004c587) main_welc_pane_t1_ParamLimits

0xa5e5,	// (0x0004c587) main_welc_pane_t1

0xa5fc,	// (0x0004c59e) main_welc_body_row_pane_ParamLimits

0xa5fc,	// (0x0004c59e) main_welc_body_row_pane

0xa610,	// (0x0004c5b2) main_welc_opti_row_pane_ParamLimits

0xa610,	// (0x0004c5b2) main_welc_opti_row_pane

0xbda4,	// (0x0004dd46) main_welc_opti_row_pane_g1

0xbdac,	// (0x0004dd4e) main_welc_opti_row_pane_t1

0xbdbb,	// (0x0004dd5d) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small

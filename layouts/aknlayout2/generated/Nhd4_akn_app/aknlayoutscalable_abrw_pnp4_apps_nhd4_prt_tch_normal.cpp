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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000157f8 };

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
0x832c,	// (0x0001db24) Screen

0x8338,	// (0x0001db30) application_window

0x8378,	// (0x0001db70) area_bottom_pane_ParamLimits

0x8378,	// (0x0001db70) area_bottom_pane

0x83ad,	// (0x0001dba5) area_top_pane_ParamLimits

0x83ad,	// (0x0001dba5) area_top_pane

0x09fa,	// (0x000161f2) call_video_uplink_pane_ParamLimits

0x09fa,	// (0x000161f2) call_video_uplink_pane

0x843b,	// (0x0001dc33) main_pane_ParamLimits

0x843b,	// (0x0001dc33) main_pane

0x3420,	// (0x00018c18) context_pane

0xaf84,	// (0x0002077c) navi_pane

0xafa4,	// (0x0002079c) popup_cale_events_window_ParamLimits

0xafa4,	// (0x0002079c) popup_cale_events_window

0x3433,	// (0x00018c2b) popup_mup_playback_window

0xafbc,	// (0x000207b4) signal_pane

0x11c3,	// (0x000169bb) main_browser_pane

0x1f3c,	// (0x00017734) main_burst_pane

0xae5a,	// (0x00020652) main_calc_pane

0x1f3c,	// (0x00017734) main_cale_day_pane

0x11c3,	// (0x000169bb) main_cale_month_pane

0x1f3c,	// (0x00017734) main_cale_week_pane

0x1f3c,	// (0x00017734) main_call_pane

0x0e37,	// (0x0001662f) main_call_poc_pane

0x1f3c,	// (0x00017734) main_camera_pane

0x1f3c,	// (0x00017734) main_chi_dic_pane

0x1dcb,	// (0x000175c3) main_clock_pane

0x0e37,	// (0x0001662f) main_fmradio_pane

0x1f3c,	// (0x00017734) main_graph_messa_pane

0x0e37,	// (0x0001662f) main_help_pane

0x11c3,	// (0x000169bb) main_im_pane

0x1092,	// (0x0001688a) main_image_pane_ParamLimits

0x1092,	// (0x0001688a) main_image_pane

0x0e37,	// (0x0001662f) main_location2_pane

0x1f3c,	// (0x00017734) main_location_pane

0x0e37,	// (0x0001662f) main_messa_pane

0x0e37,	// (0x0001662f) main_mp2_pane

0x1f3c,	// (0x00017734) main_mp_pane

0x0e37,	// (0x0001662f) main_msg_pane

0x0e37,	// (0x0001662f) main_mup_eq_pane

0x0e37,	// (0x0001662f) main_mup_pane

0x1f3c,	// (0x00017734) main_notes_pane

0x0e37,	// (0x0001662f) main_pec_pane

0x0e37,	// (0x0001662f) main_phob_pane

0x0e37,	// (0x0001662f) main_pinb_pane

0x0e37,	// (0x0001662f) main_postcard_pane

0x0e37,	// (0x0001662f) main_qdial_pane

0x1f3c,	// (0x00017734) main_skin_pane

0x0e37,	// (0x0001662f) main_smil2_pane

0x1f3c,	// (0x00017734) main_smil_pane

0x1f3c,	// (0x00017734) main_video_pane

0x1f3c,	// (0x00017734) main_video_tele_pane

0x1092,	// (0x0001688a) main_viewer_pane_ParamLimits

0x1092,	// (0x0001688a) main_viewer_pane

0x1f3c,	// (0x00017734) main_vorec_pane

0xae90,	// (0x00020688) popup_blid_sat_info_window_ParamLimits

0xae90,	// (0x00020688) popup_blid_sat_info_window

0xaea6,	// (0x0002069e) popup_dyc_status_message_window_ParamLimits

0xaea6,	// (0x0002069e) popup_dyc_status_message_window

0xaeb4,	// (0x000206ac) popup_grid_large_graphic_window_ParamLimits

0xaeb4,	// (0x000206ac) popup_grid_large_graphic_window

0xaf28,	// (0x00020720) popup_loc_request_window_ParamLimits

0xaf28,	// (0x00020720) popup_loc_request_window

0xaf5c,	// (0x00020754) popup_wml_address_window_ParamLimits

0xaf5c,	// (0x00020754) popup_wml_address_window

0xad32,	// (0x0002052a) call_muted_g1

0xa9e9,	// (0x000201e1) popup_call_audio_conf_window_ParamLimits

0xa9e9,	// (0x000201e1) popup_call_audio_conf_window

0xad42,	// (0x0002053a) popup_call_audio_first_window_ParamLimits

0xad42,	// (0x0002053a) popup_call_audio_first_window

0xad82,	// (0x0002057a) popup_call_audio_in_window_ParamLimits

0xad82,	// (0x0002057a) popup_call_audio_in_window

0xada6,	// (0x0002059e) popup_call_audio_out_window_ParamLimits

0xada6,	// (0x0002059e) popup_call_audio_out_window

0xadc8,	// (0x000205c0) popup_call_audio_second_window_ParamLimits

0xadc8,	// (0x000205c0) popup_call_audio_second_window

0xadf8,	// (0x000205f0) popup_call_audio_wait_window_ParamLimits

0xadf8,	// (0x000205f0) popup_call_audio_wait_window

0xae19,	// (0x00020611) popup_number_entry_window_ParamLimits

0xae19,	// (0x00020611) popup_number_entry_window

0x0a26,	// (0x0001621e) bg_popup_call_pane_cp05_ParamLimits

0x0a26,	// (0x0001621e) bg_popup_call_pane_cp05

0x0a46,	// (0x0001623e) popup_number_entry_window_t1

0x0a59,	// (0x00016251) popup_number_entry_window_t2

0x0a6b,	// (0x00016263) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00024927) popup_number_entry_window_t

0x0a7d,	// (0x00016275) text_title_cp2

0x0a90,	// (0x00016288) bg_popup_call_pane_cp_ParamLimits

0x0a90,	// (0x00016288) bg_popup_call_pane_cp

0x0a9e,	// (0x00016296) call_thumbnail_pane

0x0aa6,	// (0x0001629e) popup_call_audio_in_window_g1_ParamLimits

0x0aa6,	// (0x0001629e) popup_call_audio_in_window_g1

0x0ab2,	// (0x000162aa) popup_call_audio_in_window_g2_ParamLimits

0x0ab2,	// (0x000162aa) popup_call_audio_in_window_g2

0x0abe,	// (0x000162b6) popup_call_audio_in_window_g3_ParamLimits

0x0abe,	// (0x000162b6) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00024930) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00024930) popup_call_audio_in_window_g

0x0aca,	// (0x000162c2) popup_call_audio_in_window_t1_ParamLimits

0x0aca,	// (0x000162c2) popup_call_audio_in_window_t1

0x0ae5,	// (0x000162dd) popup_call_audio_in_window_t2_ParamLimits

0x0ae5,	// (0x000162dd) popup_call_audio_in_window_t2

0x0b00,	// (0x000162f8) popup_call_audio_in_window_t3_ParamLimits

0x0b00,	// (0x000162f8) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00024937) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00024937) popup_call_audio_in_window_t

0x0a90,	// (0x00016288) bg_popup_call_pane_cp01_ParamLimits

0x0a90,	// (0x00016288) bg_popup_call_pane_cp01

0x0a9e,	// (0x00016296) call_thumbnail_pane_cp02

0x0b13,	// (0x0001630b) call_type_pane_cp022

0x0b1b,	// (0x00016313) popup_call_audio_out_window_g1_ParamLimits

0x0b1b,	// (0x00016313) popup_call_audio_out_window_g1

0x0b2d,	// (0x00016325) popup_call_audio_out_window_g2_ParamLimits

0x0b2d,	// (0x00016325) popup_call_audio_out_window_g2

0x0b39,	// (0x00016331) popup_call_audio_out_window_g3_ParamLimits

0x0b39,	// (0x00016331) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0002493e) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0002493e) popup_call_audio_out_window_g

0x0b4b,	// (0x00016343) popup_call_audio_out_window_t1_ParamLimits

0x0b4b,	// (0x00016343) popup_call_audio_out_window_t1

0x0b63,	// (0x0001635b) popup_call_audio_out_window_t2_ParamLimits

0x0b63,	// (0x0001635b) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00024945) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00024945) popup_call_audio_out_window_t

0x0b78,	// (0x00016370) bg_popup_call_pane_ParamLimits

0x0b78,	// (0x00016370) bg_popup_call_pane

0x8627,	// (0x0001de1f) call_thumbnail_pane_cp_ParamLimits

0x8627,	// (0x0001de1f) call_thumbnail_pane_cp

0x0bfc,	// (0x000163f4) call_type_pane_cp01_ParamLimits

0x0bfc,	// (0x000163f4) call_type_pane_cp01

0x0c40,	// (0x00016438) popup_call_audio_first_window_g1_ParamLimits

0x0c40,	// (0x00016438) popup_call_audio_first_window_g1

0x0c8c,	// (0x00016484) popup_call_audio_first_window_g2_ParamLimits

0x0c8c,	// (0x00016484) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x0002494a) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x0002494a) popup_call_audio_first_window_g

0x0cd0,	// (0x000164c8) popup_call_audio_first_window_t1_ParamLimits

0x0cd0,	// (0x000164c8) popup_call_audio_first_window_t1

0x0d7c,	// (0x00016574) popup_call_audio_first_window_t4_ParamLimits

0x0d7c,	// (0x00016574) popup_call_audio_first_window_t4

0x0e08,	// (0x00016600) popup_call_audio_first_window_t5_ParamLimits

0x0e08,	// (0x00016600) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0002494f) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0002494f) popup_call_audio_first_window_t

0x0e37,	// (0x0001662f) bg_popup_call_pane_cp02

0x0e41,	// (0x00016639) call_type_pane_cp023

0x0e49,	// (0x00016641) popup_call_audio_wait_window_g1

0x0e51,	// (0x00016649) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00024956) popup_call_audio_wait_window_g

0x0e59,	// (0x00016651) popup_call_audio_wait_window_t3

0x0e67,	// (0x0001665f) bg_popup_call_pane_cp03_ParamLimits

0x0e67,	// (0x0001665f) bg_popup_call_pane_cp03

0x0ec7,	// (0x000166bf) call_thumbnail_pane_cp011_ParamLimits

0x0ec7,	// (0x000166bf) call_thumbnail_pane_cp011

0x0ed3,	// (0x000166cb) call_type_pane_cp034_ParamLimits

0x0ed3,	// (0x000166cb) call_type_pane_cp034

0x0f0f,	// (0x00016707) popup_call_audio_second_window_g1_ParamLimits

0x0f0f,	// (0x00016707) popup_call_audio_second_window_g1

0x0f4b,	// (0x00016743) popup_call_audio_second_window_g2_ParamLimits

0x0f4b,	// (0x00016743) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x0002495b) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x0002495b) popup_call_audio_second_window_g

0x0f87,	// (0x0001677f) popup_call_audio_second_window_t1_ParamLimits

0x0f87,	// (0x0001677f) popup_call_audio_second_window_t1

0x1008,	// (0x00016800) popup_call_audio_second_window_t2_ParamLimits

0x1008,	// (0x00016800) popup_call_audio_second_window_t2

0x103e,	// (0x00016836) popup_call_audio_second_window_t3_ParamLimits

0x103e,	// (0x00016836) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00024960) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00024960) popup_call_audio_second_window_t

0x0e37,	// (0x0001662f) bg_popup_call_pane_cp04

0x1074,	// (0x0001686c) list_conf_pane

0x107c,	// (0x00016874) popup_call_audio_conf_window_t1

0x108a,	// (0x00016882) call_thumbnail_pane_g1

0x1092,	// (0x0001688a) bg_pinb_pane_ParamLimits

0x1092,	// (0x0001688a) bg_pinb_pane

0x10a0,	// (0x00016898) find_pinb_pane

0x10a9,	// (0x000168a1) listscroll_pinb_pane_ParamLimits

0x10a9,	// (0x000168a1) listscroll_pinb_pane

0x10b8,	// (0x000168b0) pinb_bg_pane_g1

0x864b,	// (0x0001de43) pinb_bg_pane_g2

0x8657,	// (0x0001de4f) pinb_bg_pane_g3

0x8663,	// (0x0001de5b) pinb_bg_pane_g4

0x866f,	// (0x0001de67) pinb_bg_pane_g5

0x867b,	// (0x0001de73) pinb_bg_pane_g6

0x8686,	// (0x0001de7e) pinb_bg_pane_g7

0x8691,	// (0x0001de89) pinb_bg_pane_g8

0x869c,	// (0x0001de94) pinb_bg_pane_g9

0x86a6,	// (0x0001de9e) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00024967) pinb_bg_pane_g

0x86bb,	// (0x0001deb3) grid_pinb_pane

0x86c6,	// (0x0001debe) list_pinb_pane

0x86d1,	// (0x0001dec9) scroll_pane_cp01_ParamLimits

0x86d1,	// (0x0001dec9) scroll_pane_cp01

0x10ca,	// (0x000168c2) find_pinb_pane_g1_ParamLimits

0x10ca,	// (0x000168c2) find_pinb_pane_g1

0x10e2,	// (0x000168da) find_pinb_pane_t1

0x10f4,	// (0x000168ec) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00024981) find_pinb_pane_t

0x1109,	// (0x00016901) input_focus_pane_cp01_ParamLimits

0x1109,	// (0x00016901) input_focus_pane_cp01

0x86e3,	// (0x0001dedb) cell_pinb_pane_ParamLimits

0x86e3,	// (0x0001dedb) cell_pinb_pane

0x8711,	// (0x0001df09) cell_pinb_pane_g1_ParamLimits

0x8711,	// (0x0001df09) cell_pinb_pane_g1

0x8726,	// (0x0001df1e) cell_pinb_pane_g2_ParamLimits

0x8726,	// (0x0001df1e) cell_pinb_pane_g2

0x1115,	// (0x0001690d) cell_pinb_pane_g3_ParamLimits

0x1115,	// (0x0001690d) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00024986) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00024986) cell_pinb_pane_g

0x0e37,	// (0x0001662f) grid_highlight_pane_cp01

0x8732,	// (0x0001df2a) list_pinb_item_pane_ParamLimits

0x8732,	// (0x0001df2a) list_pinb_item_pane

0x0e37,	// (0x0001662f) list_highlight_pane_cp02

0x1121,	// (0x00016919) list_pinb_item_pane_g1_ParamLimits

0x1121,	// (0x00016919) list_pinb_item_pane_g1

0x112e,	// (0x00016926) list_pinb_item_pane_g2_ParamLimits

0x112e,	// (0x00016926) list_pinb_item_pane_g2

0x875c,	// (0x0001df54) list_pinb_item_pane_g3_ParamLimits

0x875c,	// (0x0001df54) list_pinb_item_pane_g3

0x113a,	// (0x00016932) list_pinb_item_pane_g4_ParamLimits

0x113a,	// (0x00016932) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x0002498d) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x0002498d) list_pinb_item_pane_g

0x1146,	// (0x0001693e) list_pinb_item_pane_t1_ParamLimits

0x1146,	// (0x0001693e) list_pinb_item_pane_t1

0x6f66,	// (0x0001c75e) calc_display_pane

0x6f84,	// (0x0001c77c) calc_paper_pane

0x6fa0,	// (0x0001c798) grid_calc_pane

0x0e37,	// (0x0001662f) bg_list_pane_cp01

0x876d,	// (0x0001df65) clock_g1

0x8775,	// (0x0001df6d) clock_g2

0x0001,

0xf19e,	// (0x00024996) clock_g

0x877f,	// (0x0001df77) clock_t1_ParamLimits

0x877f,	// (0x0001df77) clock_t1

0x8794,	// (0x0001df8c) clock_t2_ParamLimits

0x8794,	// (0x0001df8c) clock_t2

0x87a6,	// (0x0001df9e) clock_t3_ParamLimits

0x87a6,	// (0x0001df9e) clock_t3

0x87b8,	// (0x0001dfb0) clock_t4_ParamLimits

0x87b8,	// (0x0001dfb0) clock_t4

0x87ca,	// (0x0001dfc2) clock_t5_ParamLimits

0x87ca,	// (0x0001dfc2) clock_t5

0x87df,	// (0x0001dfd7) clock_t6_ParamLimits

0x87df,	// (0x0001dfd7) clock_t6

0x87f1,	// (0x0001dfe9) clock_t7_ParamLimits

0x87f1,	// (0x0001dfe9) clock_t7

0x8803,	// (0x0001dffb) clock_t8_ParamLimits

0x8803,	// (0x0001dffb) clock_t8

0x8819,	// (0x0001e011) clock_t9_ParamLimits

0x8819,	// (0x0001e011) clock_t9

0x0008,

0xf1a3,	// (0x0002499b) clock_t_ParamLimits

0xf1a3,	// (0x0002499b) clock_t

0x1165,	// (0x0001695d) popup_clock_analogue_window_cp02

0x1165,	// (0x0001695d) popup_clock_digital_window_cp01

0x116d,	// (0x00016965) listscroll_help_pane

0x0e37,	// (0x0001662f) phob_pre_status_pane

0x1177,	// (0x0001696f) grid_qdial_pane

0x0e37,	// (0x0001662f) listscroll_mce_pane

0x1181,	// (0x00016979) bg_notes_pane

0x118b,	// (0x00016983) list_notes_pane

0x882f,	// (0x0001e027) scroll_pane_cp06

0x1195,	// (0x0001698d) bg_calc_paper_pane

0x6fd6,	// (0x0001c7ce) list_calc_pane

0x11c3,	// (0x000169bb) bg_calc_display_pane

0x6ff0,	// (0x0001c7e8) calc_display_pane_t1

0x7005,	// (0x0001c7fd) calc_display_pane_t2

0x701a,	// (0x0001c812) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000249ae) calc_display_pane_t

0x702c,	// (0x0001c824) cell_calc_pane_ParamLimits

0x702c,	// (0x0001c824) cell_calc_pane

0x11e1,	// (0x000169d9) bg_calc_paper_pane_g1

0x11f9,	// (0x000169f1) bg_calc_paper_pane_g2

0x11ed,	// (0x000169e5) bg_calc_paper_pane_g3

0x1211,	// (0x00016a09) bg_calc_paper_pane_g4

0x1205,	// (0x000169fd) bg_calc_paper_pane_g5

0x883a,	// (0x0001e032) bg_calc_paper_pane_g6

0x884b,	// (0x0001e043) bg_calc_paper_pane_g7

0x885c,	// (0x0001e054) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x000249b5) bg_calc_paper_pane_g

0x886d,	// (0x0001e065) calc_bg_paper_pane_g9

0x887e,	// (0x0001e076) list_calc_item_pane_ParamLimits

0x887e,	// (0x0001e076) list_calc_item_pane

0x121d,	// (0x00016a15) list_calc_item_pane_g1

0x7059,	// (0x0001c851) list_calc_item_pane_t1_ParamLimits

0x7059,	// (0x0001c851) list_calc_item_pane_t1

0x706b,	// (0x0001c863) list_calc_item_pane_t2_ParamLimits

0x706b,	// (0x0001c863) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000249c6) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000249c6) list_calc_item_pane_t

0x123c,	// (0x00016a34) cell_calc_pane_g1

0x1246,	// (0x00016a3e) grid_highlight_pane_cp02

0x127b,	// (0x00016a73) bg_calc_display_pane_g1

0x709b,	// (0x0001c893) bg_calc_display_pane_g2

0x1268,	// (0x00016a60) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000249d0) bg_calc_display_pane_g

0x70a5,	// (0x0001c89d) cell_qdial_pane_ParamLimits

0x70a5,	// (0x0001c89d) cell_qdial_pane

0x88b8,	// (0x0001e0b0) cell_qdial_pane_g1_ParamLimits

0x88b8,	// (0x0001e0b0) cell_qdial_pane_g1

0x88c5,	// (0x0001e0bd) cell_qdial_pane_g2_ParamLimits

0x88c5,	// (0x0001e0bd) cell_qdial_pane_g2

0x1284,	// (0x00016a7c) cell_qdial_pane_g3_ParamLimits

0x1284,	// (0x00016a7c) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x000249d7) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x000249d7) cell_qdial_pane_g

0x88e3,	// (0x0001e0db) cell_qdial_pane_t1_ParamLimits

0x88e3,	// (0x0001e0db) cell_qdial_pane_t1

0x88fb,	// (0x0001e0f3) cell_qdial_pane_t2_ParamLimits

0x88fb,	// (0x0001e0f3) cell_qdial_pane_t2

0x890e,	// (0x0001e106) cell_qdial_pane_t3_ParamLimits

0x890e,	// (0x0001e106) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x000249e0) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x000249e0) cell_qdial_pane_t

0x0e37,	// (0x0001662f) grid_highlight_pane_cp04

0x1290,	// (0x00016a88) thumbnail_qdial_pane_ParamLimits

0x1290,	// (0x00016a88) thumbnail_qdial_pane

0x12ec,	// (0x00016ae4) list_help_pane

0x12f5,	// (0x00016aed) scroll_pane_cp02

0x8921,	// (0x0001e119) help_list_pane_t1_ParamLimits

0x8921,	// (0x0001e119) help_list_pane_t1

0x70b9,	// (0x0001c8b1) bg_notes_pane_g2

0x70c1,	// (0x0001c8b9) bg_notes_pane_g3

0x70c9,	// (0x0001c8c1) notes_bg_pane_g1

0x70d1,	// (0x0001c8c9) notes_bg_pane_g4

0x70d9,	// (0x0001c8d1) notes_bg_pane_g5

0x70e1,	// (0x0001c8d9) notes_bg_pane_g6

0x70e9,	// (0x0001c8e1) notes_bg_pane_g7

0x70f1,	// (0x0001c8e9) notes_bg_pane_g8

0x70f9,	// (0x0001c8f1) notes_bg_pane_g9

0x0006,

0xf206,	// (0x000249fe) notes_bg_pane_g

0x895f,	// (0x0001e157) list_notes_text_pane_ParamLimits

0x895f,	// (0x0001e157) list_notes_text_pane

0x1346,	// (0x00016b3e) list_notes_text_pane_g1

0x134f,	// (0x00016b47) list_notes_text_pane_t1

0x11c3,	// (0x000169bb) listscroll_cale_week_pane

0x89ac,	// (0x0001e1a4) bg_cale_heading_pane

0x136e,	// (0x00016b66) bg_cale_pane_cp01

0x89c0,	// (0x0001e1b8) cale_week_corner_pane

0x89d1,	// (0x0001e1c9) cale_week_day_heading_pane

0x89e5,	// (0x0001e1dd) cale_week_scroll_pane_g1

0x89f6,	// (0x0001e1ee) cale_week_scroll_pane_g2

0x8a07,	// (0x0001e1ff) cale_week_scroll_pane_g3

0x8a18,	// (0x0001e210) cale_week_scroll_pane_g4

0x8a29,	// (0x0001e221) cale_week_scroll_pane_g5

0x8a3a,	// (0x0001e232) cale_week_scroll_pane_g6

0x8a4b,	// (0x0001e243) cale_week_scroll_pane_g7

0x8a5e,	// (0x0001e256) cale_week_scroll_pane_g8

0x8a71,	// (0x0001e269) cale_week_scroll_pane_g9

0x8a82,	// (0x0001e27a) cale_week_scroll_pane_g10

0x8a93,	// (0x0001e28b) cale_week_scroll_pane_g11

0x8aa4,	// (0x0001e29c) cale_week_scroll_pane_g12

0x8ab5,	// (0x0001e2ad) cale_week_scroll_pane_g13

0x8ac6,	// (0x0001e2be) cale_week_scroll_pane_g14

0x8ad7,	// (0x0001e2cf) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x00024a0d) cale_week_scroll_pane_g

0x8ae8,	// (0x0001e2e0) cale_week_time_pane

0x8afb,	// (0x0001e2f3) grid_cale_week_pane

0x8b10,	// (0x0001e308) scroll_pane_cp08

0x8b2a,	// (0x0001e322) cell_cale_week_pane_ParamLimits

0x8b2a,	// (0x0001e322) cell_cale_week_pane

0x8b66,	// (0x0001e35e) cale_week_day_heading_pane_t1

0x8b7a,	// (0x0001e372) cale_week_day_heading_pane_t2

0x8b8e,	// (0x0001e386) cale_week_day_heading_pane_t3

0x8ba2,	// (0x0001e39a) cale_week_day_heading_pane_t4

0x8bb6,	// (0x0001e3ae) cale_week_day_heading_pane_t5

0x8bca,	// (0x0001e3c2) cale_week_day_heading_pane_t6

0x8bde,	// (0x0001e3d6) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00024a2c) cale_week_day_heading_pane_t

0x1399,	// (0x00016b91) bg_cale_side_pane

0x7101,	// (0x0001c8f9) cale_week_time_pane_t1

0x7119,	// (0x0001c911) cale_week_time_pane_t2

0x7131,	// (0x0001c929) cale_week_time_pane_t3

0x7149,	// (0x0001c941) cale_week_time_pane_t4

0x7161,	// (0x0001c959) cale_week_time_pane_t5

0x7179,	// (0x0001c971) cale_week_time_pane_t6

0x7191,	// (0x0001c989) cale_week_time_pane_t7

0x71a9,	// (0x0001c9a1) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00024a3b) cale_week_time_pane_t

0x8bf2,	// (0x0001e3ea) cell_cale_week_pane_g2

0x8c0b,	// (0x0001e403) cell_cale_week_pane_g3_ParamLimits

0x8c0b,	// (0x0001e403) cell_cale_week_pane_g3

0x13a7,	// (0x00016b9f) grid_highlight_pane_cp07

0x13af,	// (0x00016ba7) listscroll_gms_pane

0x13b9,	// (0x00016bb1) grid_gms_pane

0x13c2,	// (0x00016bba) listscroll_gms_pane_g1

0x13ca,	// (0x00016bc2) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00024a4c) listscroll_gms_pane_g

0x8c23,	// (0x0001e41b) scroll_pane_cp010

0x8c2e,	// (0x0001e426) cell_gms_pane_ParamLimits

0x8c2e,	// (0x0001e426) cell_gms_pane

0x8c40,	// (0x0001e438) cell_gms_pane_g1

0x13d2,	// (0x00016bca) cell_gms_pane_g2

0x1346,	// (0x00016b3e) cell_gms_pane_g3

0x13da,	// (0x00016bd2) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00024a51) cell_gms_pane_g

0x13e3,	// (0x00016bdb) grid_highlight_pane_cp09

0xacda,	// (0x000204d2) phob_pre_status_pane_g1

0xace2,	// (0x000204da) phob_pre_status_pane_g2

0xacea,	// (0x000204e2) phob_pre_status_pane_g3

0xacf2,	// (0x000204ea) phob_pre_status_pane_g4

0x0004,

0xf648,	// (0x00024e40) phob_pre_status_pane_g

0xad02,	// (0x000204fa) phob_pre_status_pane_t1

0xad12,	// (0x0002050a) phob_pre_status_pane_t2

0xad22,	// (0x0002051a) phob_pre_status_pane_t3

0x0002,

0xf653,	// (0x00024e4b) phob_pre_status_pane_t

0x0e37,	// (0x0001662f) bg_list_pane_cp05

0x71c9,	// (0x0001c9c1) grid_vorec_pane

0x71d1,	// (0x0001c9c9) vorec_t1

0x71df,	// (0x0001c9d7) vorec_t2

0x71ed,	// (0x0001c9e5) vorec_t3

0x71fb,	// (0x0001c9f3) vorec_t4

0x7209,	// (0x0001ca01) vorec_t5

0x7217,	// (0x0001ca0f) vorec_t6

0x0006,

0xf262,	// (0x00024a5a) vorec_t

0x7233,	// (0x0001ca2b) wait_bar_pane_cp01

0x1465,	// (0x00016c5d) cell_vorec_pane_ParamLimits

0x1465,	// (0x00016c5d) cell_vorec_pane

0x1478,	// (0x00016c70) cell_vorec_pane_g1

0x0e37,	// (0x0001662f) grid_highlight_pane_cp05

0x8c58,	// (0x0001e450) cams_zoom_pane

0x8c64,	// (0x0001e45c) image_vga_pane

0x8c73,	// (0x0001e46b) main_camera_pane_g1

0x8c81,	// (0x0001e479) main_camera_pane_g2

0x8c8f,	// (0x0001e487) main_camera_pane_g3

0x8c9b,	// (0x0001e493) main_camera_pane_g4

0x8ca7,	// (0x0001e49f) main_camera_pane_g5

0x8cb3,	// (0x0001e4ab) main_camera_pane_g6

0x8cbf,	// (0x0001e4b7) main_camera_pane_g7

0x0007,

0xf271,	// (0x00024a69) main_camera_pane_g

0x8ccb,	// (0x0001e4c3) main_camera_pane_t1

0x8cdd,	// (0x0001e4d5) main_camera_pane_t2

0x0001,

0xf282,	// (0x00024a7a) main_camera_pane_t

0x8cfe,	// (0x0001e4f6) cams_zoom_pane_cp_ParamLimits

0x8cfe,	// (0x0001e4f6) cams_zoom_pane_cp

0x8d22,	// (0x0001e51a) image_cif_pane_ParamLimits

0x8d22,	// (0x0001e51a) image_cif_pane

0x8d40,	// (0x0001e538) image_subqcif_pane

0x8d48,	// (0x0001e540) main_video_pane_g1_ParamLimits

0x8d48,	// (0x0001e540) main_video_pane_g1

0x8d68,	// (0x0001e560) main_video_pane_g2_ParamLimits

0x8d68,	// (0x0001e560) main_video_pane_g2

0x8d9a,	// (0x0001e592) main_video_pane_g3_ParamLimits

0x8d9a,	// (0x0001e592) main_video_pane_g3

0x8dc5,	// (0x0001e5bd) main_video_pane_g4_ParamLimits

0x8dc5,	// (0x0001e5bd) main_video_pane_g4

0x8df0,	// (0x0001e5e8) main_video_pane_g5_ParamLimits

0x8df0,	// (0x0001e5e8) main_video_pane_g5

0x148e,	// (0x00016c86) main_video_pane_g6_ParamLimits

0x148e,	// (0x00016c86) main_video_pane_g6

0x0006,

0xf287,	// (0x00024a7f) main_video_pane_g_ParamLimits

0xf287,	// (0x00024a7f) main_video_pane_g

0x8e14,	// (0x0001e60c) main_video_pane_t1_ParamLimits

0x8e14,	// (0x0001e60c) main_video_pane_t1

0x14a8,	// (0x00016ca0) cams_zoom_pane_g1

0x14b1,	// (0x00016ca9) cams_zoom_pane_g2

0x14ba,	// (0x00016cb2) cams_zoom_pane_g3

0x14c3,	// (0x00016cbb) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00024a8e) cams_zoom_pane_g

0x8e5e,	// (0x0001e656) grid_cams_pane

0x8e6c,	// (0x0001e664) linegrid_cams_pane

0x8e7a,	// (0x0001e672) cell_cams_pane_ParamLimits

0x8e7a,	// (0x0001e672) cell_cams_pane

0x14cc,	// (0x00016cc4) cams_burst_image_pane

0x14d4,	// (0x00016ccc) cell_cams_pane_g1

0x0e37,	// (0x0001662f) grid_highlight_pane_cp03

0x123c,	// (0x00016a34) mp_bg_pane_g1

0x0e37,	// (0x0001662f) bg_list_pane_cp03

0x32f8,	// (0x00018af0) bg_mp_pane

0x3300,	// (0x00018af8) grid_mp_pane

0x3308,	// (0x00018b00) media_player_g1

0x3310,	// (0x00018b08) media_player_t1

0x331e,	// (0x00018b16) media_player_t2

0x332c,	// (0x00018b24) media_player_t3

0x333a,	// (0x00018b32) media_player_t4

0x3348,	// (0x00018b40) media_player_t5

0x3356,	// (0x00018b4e) media_player_t6

0x3364,	// (0x00018b5c) media_player_t7

0x0006,

0xf632,	// (0x00024e2a) media_player_t

0x3372,	// (0x00018b6a) wait_bar_pane_cp02

0xf617,	// (0x00024e0f) main_usb_pane_t

0xacd1,	// (0x000204c9) cell_mp_pane

0x123c,	// (0x00016a34) cell_mp_pane_g1

0x0e37,	// (0x0001662f) grid_highlight_pane_cp06

0x1599,	// (0x00016d91) grid_skin_colour_pane

0x15a1,	// (0x00016d99) list_highlight_pane_cp03

0x8ee3,	// (0x0001e6db) skin_g1

0x15a9,	// (0x00016da1) skin_t1

0x15b8,	// (0x00016db0) skin_t2

0x0001,

0xf2cb,	// (0x00024ac3) skin_t

0x8eed,	// (0x0001e6e5) cell_skin_colour_pane_ParamLimits

0x8eed,	// (0x0001e6e5) cell_skin_colour_pane

0x15c6,	// (0x00016dbe) cell_skin_colour_pane_g1

0x8f44,	// (0x0001e73c) call_video_g1_ParamLimits

0x8f44,	// (0x0001e73c) call_video_g1

0x8f54,	// (0x0001e74c) call_video_g2_ParamLimits

0x8f54,	// (0x0001e74c) call_video_g2

0x0001,

0xf2d0,	// (0x00024ac8) call_video_g_ParamLimits

0xf2d0,	// (0x00024ac8) call_video_g

0x8f94,	// (0x0001e78c) call_video_uplink_pane_cp1_ParamLimits

0x8f94,	// (0x0001e78c) call_video_uplink_pane_cp1

0x15e0,	// (0x00016dd8) call_video_uplink_pane_cp2

0x9040,	// (0x0001e838) video_down_crop_pane_ParamLimits

0x9040,	// (0x0001e838) video_down_crop_pane

0x9118,	// (0x0001e910) video_down_pane_ParamLimits

0x9118,	// (0x0001e910) video_down_pane

0x15e8,	// (0x00016de0) video_down_subqcif_pane_ParamLimits

0x15e8,	// (0x00016de0) video_down_subqcif_pane

0x1600,	// (0x00016df8) video_down_subqcif_pane_cp_ParamLimits

0x1600,	// (0x00016df8) video_down_subqcif_pane_cp

0x1624,	// (0x00016e1c) im_reading_pane_ParamLimits

0x1624,	// (0x00016e1c) im_reading_pane

0x91fa,	// (0x0001e9f2) im_writing_pane_ParamLimits

0x91fa,	// (0x0001e9f2) im_writing_pane

0x9218,	// (0x0001ea10) im_reading_pane_t1

0x163e,	// (0x00016e36) list_im_pane

0x164f,	// (0x00016e47) scroll_pane_cp07

0x9278,	// (0x0001ea70) im_writing_pane_t1_ParamLimits

0x9278,	// (0x0001ea70) im_writing_pane_t1

0x1668,	// (0x00016e60) im_writing_pane_t2_ParamLimits

0x1668,	// (0x00016e60) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00024ad2) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00024ad2) im_writing_pane_t

0x0e37,	// (0x0001662f) input_focus_pane_cp04

0x0e37,	// (0x0001662f) input_focus_pane_cp05

0x928a,	// (0x0001ea82) list_im_single_pane_ParamLimits

0x928a,	// (0x0001ea82) list_im_single_pane

0x92b6,	// (0x0001eaae) list_single_im_pane_t1

0xac95,	// (0x0002048d) blid_accuracy_pane

0xac9d,	// (0x00020495) blid_compass_pane

0xaca7,	// (0x0002049f) main_location_t1

0xacb5,	// (0x000204ad) main_location_t2

0xacc3,	// (0x000204bb) main_location_t3

0x0002,

0xf641,	// (0x00024e39) main_location_t

0x0e37,	// (0x0001662f) aid_levels_location

0x123c,	// (0x00016a34) blid_accuracy_pane_g1

0x123c,	// (0x00016a34) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00024b34) blid_accuracy_pane_g

0x16b0,	// (0x00016ea8) wml_content_pane

0x16ee,	// (0x00016ee6) wml_button_pane_ParamLimits

0x16ee,	// (0x00016ee6) wml_button_pane

0x92c5,	// (0x0001eabd) wml_list_single_large_pane_ParamLimits

0x92c5,	// (0x0001eabd) wml_list_single_large_pane

0x92f7,	// (0x0001eaef) wml_list_single_medium_pane_ParamLimits

0x92f7,	// (0x0001eaef) wml_list_single_medium_pane

0x9330,	// (0x0001eb28) wml_list_single_small_pane_ParamLimits

0x9330,	// (0x0001eb28) wml_list_single_small_pane

0x1702,	// (0x00016efa) wml_selection_box_pane_ParamLimits

0x1702,	// (0x00016efa) wml_selection_box_pane

0x1715,	// (0x00016f0d) wml_list_single_pane_t1

0x1724,	// (0x00016f1c) wml_list_single_medium_pane_t1

0x1733,	// (0x00016f2b) wml_list_single_large_pane_t1

0x1742,	// (0x00016f3a) input_focus_pane_cp02_ParamLimits

0x1742,	// (0x00016f3a) input_focus_pane_cp02

0x1755,	// (0x00016f4d) wml_selection_box_pane_g1

0x175e,	// (0x00016f56) wml_selection_box_pane_t1_ParamLimits

0x175e,	// (0x00016f56) wml_selection_box_pane_t1

0x1092,	// (0x0001688a) bg_wml_button_pane_ParamLimits

0x1092,	// (0x0001688a) bg_wml_button_pane

0x1776,	// (0x00016f6e) wml_button_pane_g1

0x177e,	// (0x00016f76) wml_button_pane_t1

0x1776,	// (0x00016f6e) wml_button_bg_pane_g1

0x178e,	// (0x00016f86) wml_button_bg_pane_g2

0x1796,	// (0x00016f8e) wml_button_bg_pane_g3

0x179e,	// (0x00016f96) wml_button_bg_pane_g4

0x17a6,	// (0x00016f9e) wml_button_bg_pane_g5

0x17ae,	// (0x00016fa6) wml_button_bg_pane_g6

0x17b6,	// (0x00016fae) wml_button_bg_pane_g7

0x17be,	// (0x00016fb6) wml_button_bg_pane_g8

0x17c6,	// (0x00016fbe) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00024ad7) wml_button_bg_pane_g

0x9378,	// (0x0001eb70) bg_list_pane_cp02

0x17ce,	// (0x00016fc6) mce_header_pane_ParamLimits

0x17ce,	// (0x00016fc6) mce_header_pane

0x17e4,	// (0x00016fdc) mce_icon_pane

0x17e4,	// (0x00016fdc) mce_image_pane

0x17ed,	// (0x00016fe5) mce_text_pane_ParamLimits

0x17ed,	// (0x00016fe5) mce_text_pane

0x9382,	// (0x0001eb7a) scroll_pane_cp03

0x16e6,	// (0x00016ede) scroll_pane_cp04

0x1800,	// (0x00016ff8) scroll_pane_cp05_ParamLimits

0x1800,	// (0x00016ff8) scroll_pane_cp05

0x938c,	// (0x0001eb84) mce_header_field_pane_ParamLimits

0x938c,	// (0x0001eb84) mce_header_field_pane

0x93ac,	// (0x0001eba4) mce_header_field_pane_2_ParamLimits

0x93ac,	// (0x0001eba4) mce_header_field_pane_2

0x93c2,	// (0x0001ebba) mce_header_field_pane_3

0x93ca,	// (0x0001ebc2) list_single_mce_message_pane_ParamLimits

0x93ca,	// (0x0001ebc2) list_single_mce_message_pane

0x93fa,	// (0x0001ebf2) list_single_mce_smart_pane_ParamLimits

0x93fa,	// (0x0001ebf2) list_single_mce_smart_pane

0x180c,	// (0x00017004) input_focus_pane_cp03

0x1815,	// (0x0001700d) list_header_data_pane

0x9435,	// (0x0001ec2d) mce_header_field_pane_t1

0x9445,	// (0x0001ec3d) list_single_mce_header_pane_ParamLimits

0x9445,	// (0x0001ec3d) list_single_mce_header_pane

0x181d,	// (0x00017015) list_single_mce_header_pane_t1

0x182c,	// (0x00017024) list_single_mce_message_pane_g1

0x1834,	// (0x0001702c) list_single_mce_message_pane_t1

0x9497,	// (0x0001ec8f) bg_cale_heading_pane_cp01_ParamLimits

0x9497,	// (0x0001ec8f) bg_cale_heading_pane_cp01

0x1842,	// (0x0001703a) bg_cale_pane_cp02_ParamLimits

0x1842,	// (0x0001703a) bg_cale_pane_cp02

0x94ba,	// (0x0001ecb2) cale_month_corner_pane

0x94d0,	// (0x0001ecc8) cale_month_day_heading_pane_ParamLimits

0x94d0,	// (0x0001ecc8) cale_month_day_heading_pane

0x9503,	// (0x0001ecfb) cale_month_pane_g1_ParamLimits

0x9503,	// (0x0001ecfb) cale_month_pane_g1

0x951f,	// (0x0001ed17) cale_month_pane_g2_ParamLimits

0x951f,	// (0x0001ed17) cale_month_pane_g2

0x953a,	// (0x0001ed32) cale_month_pane_g3_ParamLimits

0x953a,	// (0x0001ed32) cale_month_pane_g3

0x9566,	// (0x0001ed5e) cale_month_pane_g4_ParamLimits

0x9566,	// (0x0001ed5e) cale_month_pane_g4

0x9592,	// (0x0001ed8a) cale_month_pane_g5_ParamLimits

0x9592,	// (0x0001ed8a) cale_month_pane_g5

0x95be,	// (0x0001edb6) cale_month_pane_g6_ParamLimits

0x95be,	// (0x0001edb6) cale_month_pane_g6

0x95ea,	// (0x0001ede2) cale_month_pane_g7_ParamLimits

0x95ea,	// (0x0001ede2) cale_month_pane_g7

0x9626,	// (0x0001ee1e) cale_month_pane_g8_ParamLimits

0x9626,	// (0x0001ee1e) cale_month_pane_g8

0x9662,	// (0x0001ee5a) cale_month_pane_g9_ParamLimits

0x9662,	// (0x0001ee5a) cale_month_pane_g9

0x969c,	// (0x0001ee94) cale_month_pane_g10_ParamLimits

0x969c,	// (0x0001ee94) cale_month_pane_g10

0x96d6,	// (0x0001eece) cale_month_pane_g11_ParamLimits

0x96d6,	// (0x0001eece) cale_month_pane_g11

0x9710,	// (0x0001ef08) cale_month_pane_g12_ParamLimits

0x9710,	// (0x0001ef08) cale_month_pane_g12

0x974a,	// (0x0001ef42) cale_month_pane_g13_ParamLimits

0x974a,	// (0x0001ef42) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00024aea) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00024aea) cale_month_pane_g

0x9784,	// (0x0001ef7c) cale_month_week_pane

0x9797,	// (0x0001ef8f) grid_cale_month_pane_ParamLimits

0x9797,	// (0x0001ef8f) grid_cale_month_pane

0x97c5,	// (0x0001efbd) cale_month_day_heading_pane_t1

0x9823,	// (0x0001f01b) cale_month_day_heading_pane_t2

0x9888,	// (0x0001f080) cale_month_day_heading_pane_t3

0x98ed,	// (0x0001f0e5) cale_month_day_heading_pane_t4

0x9952,	// (0x0001f14a) cale_month_day_heading_pane_t5

0x99b7,	// (0x0001f1af) cale_month_day_heading_pane_t6

0x9a24,	// (0x0001f21c) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00024b05) cale_month_day_heading_pane_t

0x1399,	// (0x00016b91) bg_cale_side_pane_cp01

0x9a99,	// (0x0001f291) cale_month_week_pane_t1

0x9ab0,	// (0x0001f2a8) cale_month_week_pane_t2

0x9ac7,	// (0x0001f2bf) cale_month_week_pane_t3

0x9ade,	// (0x0001f2d6) cale_month_week_pane_t4

0x9af5,	// (0x0001f2ed) cale_month_week_pane_t5

0x9b0c,	// (0x0001f304) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00024b14) cale_month_week_pane_t

0x9b23,	// (0x0001f31b) cell_cale_month_pane_ParamLimits

0x9b23,	// (0x0001f31b) cell_cale_month_pane

0x723b,	// (0x0001ca33) cell_cale_month_pane_g1

0x7247,	// (0x0001ca3f) cell_cale_month_pane_t1_ParamLimits

0x7247,	// (0x0001ca3f) cell_cale_month_pane_t1

0x13a7,	// (0x00016b9f) grid_highlight_pane_cp08

0x123c,	// (0x00016a34) main_smil_g1

0x9bd9,	// (0x0001f3d1) smil_status_pane

0x18ad,	// (0x000170a5) smil_text_pane

0x3218,	// (0x00018a10) bg_popup_call3_rect_pane_g8

0x3220,	// (0x00018a18) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00024dcd) bg_popup_call3_rect_pane_g

0x34ad,	// (0x00018ca5) smil_status_volume_pane_g1

0x18b7,	// (0x000170af) smil_status_pane_t1

0x7385,	// (0x0001cb7d) volume_smil_pane

0x18ce,	// (0x000170c6) list_smil_text_pane

0x9bec,	// (0x0001f3e4) scroll_pane_cp011

0x9bf7,	// (0x0001f3ef) smil_text_list_pane_t1_ParamLimits

0x9bf7,	// (0x0001f3ef) smil_text_list_pane_t1

0x7263,	// (0x0001ca5b) aid_volume_smil_ParamLimits

0x7263,	// (0x0001ca5b) aid_volume_smil

0x123c,	// (0x00016a34) smil_volume_pane_g1

0x123c,	// (0x00016a34) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00024b34) smil_volume_pane_g

0x11c3,	// (0x000169bb) listscroll_cale_day_pane

0x18fa,	// (0x000170f2) bg_cale_pane

0x1912,	// (0x0001710a) list_cale_pane

0x1923,	// (0x0001711b) scroll_pane_cp09

0x1934,	// (0x0001712c) cale_bg_pane_g1

0x193c,	// (0x00017134) cale_bg_pane_g2

0x1944,	// (0x0001713c) cale_bg_pane_g3

0x194c,	// (0x00017144) cale_bg_pane_g4

0x1954,	// (0x0001714c) cale_bg_pane_g5

0x195c,	// (0x00017154) cale_bg_pane_g6

0x1964,	// (0x0001715c) cale_bg_pane_g7

0x196c,	// (0x00017164) cale_bg_pane_g8

0x1974,	// (0x0001716c) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00024b39) cale_bg_pane_g

0x9ca2,	// (0x0001f49a) list_cale_time_pane_ParamLimits

0x9ca2,	// (0x0001f49a) list_cale_time_pane

0x9cc3,	// (0x0001f4bb) list_cale_time_pane_g1_ParamLimits

0x9cc3,	// (0x0001f4bb) list_cale_time_pane_g1

0x197c,	// (0x00017174) list_cale_time_pane_g2_ParamLimits

0x197c,	// (0x00017174) list_cale_time_pane_g2

0x9ccf,	// (0x0001f4c7) list_cale_time_pane_g3_ParamLimits

0x9ccf,	// (0x0001f4c7) list_cale_time_pane_g3

0x9ceb,	// (0x0001f4e3) list_cale_time_pane_g4_ParamLimits

0x9ceb,	// (0x0001f4e3) list_cale_time_pane_g4

0x9cf9,	// (0x0001f4f1) list_cale_time_pane_g5_ParamLimits

0x9cf9,	// (0x0001f4f1) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00024b4c) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00024b4c) list_cale_time_pane_g

0x9d07,	// (0x0001f4ff) list_cale_time_pane_t1_ParamLimits

0x9d07,	// (0x0001f4ff) list_cale_time_pane_t1

0x9d2f,	// (0x0001f527) list_cale_time_pane_t2_ParamLimits

0x9d2f,	// (0x0001f527) list_cale_time_pane_t2

0xa00e,	// (0x0001f806) aid_blid_cardinal_pane

0xa050,	// (0x0001f848) compass_pane_t4

0x9d57,	// (0x0001f54f) list_cale_time_pane_t4_ParamLimits

0x9d57,	// (0x0001f54f) list_cale_time_pane_t4

0xa05e,	// (0x0001f856) compass_pane_t5

0xa06e,	// (0x0001f866) compass_pane_t6

0xa07c,	// (0x0001f874) compass_pane_t7

0x1e8e,	// (0x00017686) navi_pane_cc_t1

0x1ff5,	// (0x000177ed) aid_phob_thumbnail_center_pane

0xa783,	// (0x0001ff7b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00024b59) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00024b59) list_cale_time_pane_t

0x0a90,	// (0x00016288) bg_popup_window_pane_cp02_ParamLimits

0x0a90,	// (0x00016288) bg_popup_window_pane_cp02

0x1996,	// (0x0001718e) heading_pane_cp01_ParamLimits

0x1996,	// (0x0001718e) heading_pane_cp01

0x19a2,	// (0x0001719a) loc_req_pane_ParamLimits

0x19a2,	// (0x0001719a) loc_req_pane

0x19b2,	// (0x000171aa) loc_type_pane_ParamLimits

0x19b2,	// (0x000171aa) loc_type_pane

0x19c4,	// (0x000171bc) loc_type_pane_t1_ParamLimits

0x19c4,	// (0x000171bc) loc_type_pane_t1

0x19d6,	// (0x000171ce) loc_type_pane_t2_ParamLimits

0x19d6,	// (0x000171ce) loc_type_pane_t2

0x19e8,	// (0x000171e0) loc_type_pane_t3_ParamLimits

0x19e8,	// (0x000171e0) loc_type_pane_t3

0x0002,

0xf368,	// (0x00024b60) loc_type_pane_t_ParamLimits

0xf368,	// (0x00024b60) loc_type_pane_t

0x19fa,	// (0x000171f2) list_loc_req_pane

0x1a04,	// (0x000171fc) scroll_pane_cp012

0x9d7f,	// (0x0001f577) list_single_loc_request_popup_menu_pane_ParamLimits

0x9d7f,	// (0x0001f577) list_single_loc_request_popup_menu_pane

0x1a0f,	// (0x00017207) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1a0f,	// (0x00017207) list_single_loc_request_popup_menu_pane_g1

0x1a1b,	// (0x00017213) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1a1b,	// (0x00017213) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00024b67) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00024b67) list_single_loc_request_popup_menu_pane_g

0x1a27,	// (0x0001721f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1a27,	// (0x0001721f) list_single_loc_request_popup_menu_pane_t1

0x9d91,	// (0x0001f589) bg_popup_window_pane_cp03_ParamLimits

0x9d91,	// (0x0001f589) bg_popup_window_pane_cp03

0x9d9f,	// (0x0001f597) heading_loc_req_pane_ParamLimits

0x9d9f,	// (0x0001f597) heading_loc_req_pane

0x9dab,	// (0x0001f5a3) popup_dyc_status_message_window_g1_ParamLimits

0x9dab,	// (0x0001f5a3) popup_dyc_status_message_window_g1

0x9db7,	// (0x0001f5af) popup_dyc_status_message_window_t1_ParamLimits

0x9db7,	// (0x0001f5af) popup_dyc_status_message_window_t1

0x9dc9,	// (0x0001f5c1) popup_dyc_status_message_window_t2_ParamLimits

0x9dc9,	// (0x0001f5c1) popup_dyc_status_message_window_t2

0x9ddb,	// (0x0001f5d3) popup_dyc_status_message_window_t3_ParamLimits

0x9ddb,	// (0x0001f5d3) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00024b6c) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00024b6c) popup_dyc_status_message_window_t

0x0e37,	// (0x0001662f) bg_heading_pane_cp01

0x1a3d,	// (0x00017235) heading_loc_req_pane_g1

0x1a45,	// (0x0001723d) heading_loc_req_pane_g2

0x1a4d,	// (0x00017245) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00024b73) heading_loc_req_pane_g

0x1a55,	// (0x0001724d) heading_loc_req_pane_t1

0x1ad9,	// (0x000172d1) bg_popup_sub_pane_cp01_ParamLimits

0x1ad9,	// (0x000172d1) bg_popup_sub_pane_cp01

0x1ae7,	// (0x000172df) popup_cale_events_window_g1_ParamLimits

0x1ae7,	// (0x000172df) popup_cale_events_window_g1

0x1b07,	// (0x000172ff) popup_cale_events_window_g2_ParamLimits

0x1b07,	// (0x000172ff) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00024ba7) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00024ba7) popup_cale_events_window_g

0x1b27,	// (0x0001731f) popup_cale_events_window_t1_ParamLimits

0x1b27,	// (0x0001731f) popup_cale_events_window_t1

0x1b39,	// (0x00017331) popup_cale_events_window_t2_ParamLimits

0x1b39,	// (0x00017331) popup_cale_events_window_t2

0x1b77,	// (0x0001736f) popup_cale_events_window_t3_ParamLimits

0x1b77,	// (0x0001736f) popup_cale_events_window_t3

0x1bb1,	// (0x000173a9) popup_cale_events_window_t4_ParamLimits

0x1bb1,	// (0x000173a9) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00024bac) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00024bac) popup_cale_events_window_t

0x9e5f,	// (0x0001f657) call_type_pane

0x200d,	// (0x00017805) popup_call_status_window_g1

0x9e6b,	// (0x0001f663) popup_call_status_window_g2

0x9e77,	// (0x0001f66f) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00024bb5) popup_call_status_window_g

0x1be7,	// (0x000173df) call_type_pane_g1

0x1bf0,	// (0x000173e8) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00024bbc) call_type_pane_g

0x0e37,	// (0x0001662f) bg_popup_sub_pane_cp02

0x1bf9,	// (0x000173f1) listscroll_popup_wml_pane

0x1c01,	// (0x000173f9) list_wml_pane

0x1c0b,	// (0x00017403) scroll_pane_cp013

0x1c16,	// (0x0001740e) list_single_graphic_popup_wml_pane_ParamLimits

0x1c16,	// (0x0001740e) list_single_graphic_popup_wml_pane

0x123c,	// (0x00016a34) list_single_graphic_popup_wml_pane_g1

0x1c2a,	// (0x00017422) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00024bc1) list_single_graphic_popup_wml_pane_g

0x1c32,	// (0x0001742a) list_single_graphic_popup_wml_pane_t1

0x1c40,	// (0x00017438) aid_call_pane

0x108a,	// (0x00016882) popup_clock_analogue_window_g1

0x108a,	// (0x00016882) popup_clock_analogue_window_g2

0x7285,	// (0x0001ca7d) popup_clock_analogue_window_g3

0x7285,	// (0x0001ca7d) popup_clock_analogue_window_g4

0x123c,	// (0x00016a34) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00024bc6) popup_clock_analogue_window_g

0x728d,	// (0x0001ca85) popup_clock_analogue_window_t1

0x729b,	// (0x0001ca93) clock_digital_number_pane_ParamLimits

0x729b,	// (0x0001ca93) clock_digital_number_pane

0x72a7,	// (0x0001ca9f) clock_digital_number_pane_cp02_ParamLimits

0x72a7,	// (0x0001ca9f) clock_digital_number_pane_cp02

0x72b3,	// (0x0001caab) clock_digital_number_pane_cp03_ParamLimits

0x72b3,	// (0x0001caab) clock_digital_number_pane_cp03

0x72bf,	// (0x0001cab7) clock_digital_number_pane_cp04_ParamLimits

0x72bf,	// (0x0001cab7) clock_digital_number_pane_cp04

0x72cb,	// (0x0001cac3) clock_digital_separator_pane_ParamLimits

0x72cb,	// (0x0001cac3) clock_digital_separator_pane

0x72d7,	// (0x0001cacf) popup_clock_digital_window_t1

0x123c,	// (0x00016a34) clock_digital_number_pane_g1

0x123c,	// (0x00016a34) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00024b34) clock_digital_number_pane_g

0x123c,	// (0x00016a34) clock_digital_separator_pane_g1

0x123c,	// (0x00016a34) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00024b34) clock_digital_separator_pane_g

0x0e37,	// (0x0001662f) bg_popup_window_pane_cp04

0x1cbf,	// (0x000174b7) heading_pane_cp03

0x1cc7,	// (0x000174bf) listscroll_popup_gms_pane

0x1ccf,	// (0x000174c7) grid_large_graphic_popup_pane

0x1cd9,	// (0x000174d1) listscroll_popup_gms_pane_g1

0x1ce1,	// (0x000174d9) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00024bd1) listscroll_popup_gms_pane_g

0x16e6,	// (0x00016ede) scroll_pane_cp014

0x1ce9,	// (0x000174e1) cell_large_graphic_popup_pane_ParamLimits

0x1ce9,	// (0x000174e1) cell_large_graphic_popup_pane

0x1d01,	// (0x000174f9) cell_large_graphic_popup_pane_g1_ParamLimits

0x1d01,	// (0x000174f9) cell_large_graphic_popup_pane_g1

0x1d0d,	// (0x00017505) cell_large_graphic_popup_pane_g2_ParamLimits

0x1d0d,	// (0x00017505) cell_large_graphic_popup_pane_g2

0x1d19,	// (0x00017511) cell_large_graphic_popup_pane_g3_ParamLimits

0x1d19,	// (0x00017511) cell_large_graphic_popup_pane_g3

0x1d26,	// (0x0001751e) cell_large_graphic_popup_pane_g4_ParamLimits

0x1d26,	// (0x0001751e) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00024bd6) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00024bd6) cell_large_graphic_popup_pane_g

0x1d36,	// (0x0001752e) grid_highlight_pane_cp010

0x123c,	// (0x00016a34) bg_popup_call_pane_g1

0x1d40,	// (0x00017538) list_single_graphic_popup_conf_pane_ParamLimits

0x1d40,	// (0x00017538) list_single_graphic_popup_conf_pane

0x1d52,	// (0x0001754a) list_highlight_pane_cp01

0x1d5b,	// (0x00017553) list_single_graphic_popup_conf_pane_g1

0x1d63,	// (0x0001755b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00024bdf) list_single_graphic_popup_conf_pane_g

0x1d6b,	// (0x00017563) list_single_graphic_popup_conf_pane_t1

0x1d79,	// (0x00017571) linegrid_cams_pane_g1

0x9e83,	// (0x0001f67b) linegrid_cams_pane_g2

0x1346,	// (0x00016b3e) linegrid_cams_pane_g3

0x1d82,	// (0x0001757a) linegrid_cams_pane_g4

0x9e8c,	// (0x0001f684) linegrid_cams_pane_g5

0x9e95,	// (0x0001f68d) linegrid_cams_pane_g6

0x13da,	// (0x00016bd2) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00024be4) linegrid_cams_pane_g

0x1d8b,	// (0x00017583) popup_clock_analogue_window

0x1d8b,	// (0x00017583) popup_clock_digital_window

0x0e37,	// (0x0001662f) popup_phob_thumbnail_window

0x123c,	// (0x00016a34) call_video_uplink_pane_g1

0x1d94,	// (0x0001758c) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00024bf3) call_video_uplink_pane_g

0x13a7,	// (0x00016b9f) video_uplink_pane

0x1d9c,	// (0x00017594) mce_image_pane_g1

0x9e9e,	// (0x0001f696) mce_image_pane_g2

0x9ea6,	// (0x0001f69e) mce_image_pane_g3

0x9eae,	// (0x0001f6a6) mce_image_pane_g4

0x9eb6,	// (0x0001f6ae) mce_image_pane_g5

0x0004,

0xf400,	// (0x00024bf8) mce_image_pane_g

0x1da6,	// (0x0001759e) control_top_pane_stacon_cp01_ParamLimits

0x1da6,	// (0x0001759e) control_top_pane_stacon_cp01

0x1dba,	// (0x000175b2) uni_indicator_pane_stacon_cp01_ParamLimits

0x1dba,	// (0x000175b2) uni_indicator_pane_stacon_cp01

0x1dcb,	// (0x000175c3) bg_popup_sub_pane_cp03

0x9ebe,	// (0x0001f6b6) chi_dic_find_pane

0x9ec6,	// (0x0001f6be) listscroll_chi_dic_pane

0x9ecf,	// (0x0001f6c7) main_pane_chidic_g1

0x9ee2,	// (0x0001f6da) chi_dic_find_pane_t1

0x1dd5,	// (0x000175cd) find_chidic_pane

0x1dde,	// (0x000175d6) chi_dic_list_pane_ParamLimits

0x1dde,	// (0x000175d6) chi_dic_list_pane

0x1def,	// (0x000175e7) scroll_pane_cp020

0x9ef0,	// (0x0001f6e8) find_chidic_pane_t1

0x0e37,	// (0x0001662f) input_focus_pane_cp06

0x9eff,	// (0x0001f6f7) list_chi_dic_pane_ParamLimits

0x9eff,	// (0x0001f6f7) list_chi_dic_pane

0x1df7,	// (0x000175ef) list_chi_dic_pane_t1_ParamLimits

0x1df7,	// (0x000175ef) list_chi_dic_pane_t1

0x0e37,	// (0x0001662f) list_highlight_pane_cp020

0x1e0a,	// (0x00017602) bg_cale_heading_pane_g1

0x9f20,	// (0x0001f718) bg_cale_heading_pane_g2

0x9f28,	// (0x0001f720) bg_cale_heading_pane_g3

0x9f30,	// (0x0001f728) bg_cale_heading_pane_g4

0x9f3a,	// (0x0001f732) bg_cale_heading_pane_g5

0x9f44,	// (0x0001f73c) bg_cale_heading_pane_g6

0x9f4c,	// (0x0001f744) bg_cale_heading_pane_g7

0x9f54,	// (0x0001f74c) bg_cale_heading_pane_g8

0x9f5e,	// (0x0001f756) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00024c03) bg_cale_heading_pane_g

0x1e0a,	// (0x00017602) bg_cale_side_pane_g1

0x9f68,	// (0x0001f760) bg_cale_side_pane_g2

0x9f70,	// (0x0001f768) bg_cale_side_pane_g3

0x9f78,	// (0x0001f770) bg_cale_side_pane_g4

0x9f80,	// (0x0001f778) bg_cale_side_pane_g5

0x9f88,	// (0x0001f780) bg_cale_side_pane_g6

0x9f90,	// (0x0001f788) bg_cale_side_pane_g7

0x9f98,	// (0x0001f790) bg_cale_side_pane_g8

0x9fa0,	// (0x0001f798) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00024c16) bg_cale_side_pane_g

0x9fa8,	// (0x0001f7a0) popup_call_status_window_ParamLimits

0x9fa8,	// (0x0001f7a0) popup_call_status_window

0x1e12,	// (0x0001760a) stacon_top_pane

0x1e1a,	// (0x00017612) status_pane_ParamLimits

0x1e1a,	// (0x00017612) status_pane

0x1e2f,	// (0x00017627) status_small_pane

0x1e37,	// (0x0001762f) control_pane

0x0e37,	// (0x0001662f) stacon_bottom_pane

0x1e3f,	// (0x00017637) list_single_mce_smart_pane_t1_ParamLimits

0x1e3f,	// (0x00017637) list_single_mce_smart_pane_t1

0x1e52,	// (0x0001764a) list_single_mce_smart_pane_t2_ParamLimits

0x1e52,	// (0x0001764a) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00024c29) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00024c29) list_single_mce_smart_pane_t

0x9fb4,	// (0x0001f7ac) compass_pane

0x9fc0,	// (0x0001f7b8) main_location2_pane_t1

0x9fd4,	// (0x0001f7cc) main_location2_pane_t2

0x9fe8,	// (0x0001f7e0) main_location2_pane_t3

0x0003,

0xf436,	// (0x00024c2e) main_location2_pane_t

0x1e71,	// (0x00017669) compass_pane_g1_ParamLimits

0x1e71,	// (0x00017669) compass_pane_g1

0xa032,	// (0x0001f82a) compass_pane_t1

0xa041,	// (0x0001f839) compass_pane_t2

0x0005,

0xf43f,	// (0x00024c37) compass_pane_t

0xa08c,	// (0x0001f884) text_secondary_cp61

0x1e85,	// (0x0001767d) navi_pane_cams_g5

0x1ea8,	// (0x000176a0) navi_pane_im_t1

0x1eb6,	// (0x000176ae) navi_pane_mp_g1_ParamLimits

0x1eb6,	// (0x000176ae) navi_pane_mp_g1

0x1eca,	// (0x000176c2) navi_pane_mp_g2_ParamLimits

0x1eca,	// (0x000176c2) navi_pane_mp_g2

0x1ed6,	// (0x000176ce) navi_pane_mp_g3_ParamLimits

0x1ed6,	// (0x000176ce) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00024c4b) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00024c4b) navi_pane_mp_g

0x1ee2,	// (0x000176da) navi_pane_mp_t1

0x1ef0,	// (0x000176e8) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00024c52) navi_pane_mp_t

0x1f2c,	// (0x00017724) navi_pane_vt_g1

0x1ee2,	// (0x000176da) navi_pane_vt_t1

0x1f34,	// (0x0001772c) navi_slider_pane

0x1f3c,	// (0x00017734) zooming_pane

0x1f44,	// (0x0001773c) navi_slider_pane_g1

0x72f4,	// (0x0001caec) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00024c59) navi_slider_pane_g

0x1f7a,	// (0x00017772) aid_levels_zoom

0x1f82,	// (0x0001777a) zooming_pane_g1

0x1f8a,	// (0x00017782) zooming_pane_g2

0x1f8a,	// (0x00017782) zooming_pane_g3

0x0002,

0xf470,	// (0x00024c68) zooming_pane_g

0x1f92,	// (0x0001778a) level_10_zoom

0x1f9b,	// (0x00017793) level_11_zoom

0x1fa4,	// (0x0001779c) level_1_zoom

0x1fad,	// (0x000177a5) level_2_zoom

0x1fb6,	// (0x000177ae) level_3_zoom

0x1fbf,	// (0x000177b7) level_4_zoom

0x1fc8,	// (0x000177c0) level_5_zoom

0x1fd1,	// (0x000177c9) level_6_zoom

0x1fda,	// (0x000177d2) level_7_zoom

0x1fe3,	// (0x000177db) level_8_zoom

0x1fec,	// (0x000177e4) level_9_zoom

0x1ffd,	// (0x000177f5) popup_phob_thumbnail_window_g1

0x2005,	// (0x000177fd) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00024c6f) popup_phob_thumbnail_window_g

0x337a,	// (0x00018b72) level_1_location

0x3382,	// (0x00018b7a) level_2_location

0x338a,	// (0x00018b82) level_3_location

0x3392,	// (0x00018b8a) level_4_location

0x1f3c,	// (0x00017734) level_5_location

0xa1a3,	// (0x0001f99b) mce_icon_pane_g1

0xa1ab,	// (0x0001f9a3) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00024c74) mce_icon_pane_g

0xa1b3,	// (0x0001f9ab) main_mup_pane_g1_ParamLimits

0xa1b3,	// (0x0001f9ab) main_mup_pane_g1

0xa1cb,	// (0x0001f9c3) main_mup_pane_g2_ParamLimits

0xa1cb,	// (0x0001f9c3) main_mup_pane_g2

0xa1e7,	// (0x0001f9df) main_mup_pane_g3_ParamLimits

0xa1e7,	// (0x0001f9df) main_mup_pane_g3

0xa203,	// (0x0001f9fb) main_mup_pane_g4_ParamLimits

0xa203,	// (0x0001f9fb) main_mup_pane_g4

0xa21f,	// (0x0001fa17) main_mup_pane_g5_ParamLimits

0xa21f,	// (0x0001fa17) main_mup_pane_g5

0xa240,	// (0x0001fa38) main_mup_pane_g6_ParamLimits

0xa240,	// (0x0001fa38) main_mup_pane_g6

0xa25c,	// (0x0001fa54) main_mup_pane_g7_ParamLimits

0xa25c,	// (0x0001fa54) main_mup_pane_g7

0xa278,	// (0x0001fa70) main_mup_pane_g8_ParamLimits

0xa278,	// (0x0001fa70) main_mup_pane_g8

0xa294,	// (0x0001fa8c) main_mup_pane_g9_ParamLimits

0xa294,	// (0x0001fa8c) main_mup_pane_g9

0xa2b3,	// (0x0001faab) main_mup_pane_g10_ParamLimits

0xa2b3,	// (0x0001faab) main_mup_pane_g10

0xa2d2,	// (0x0001faca) main_mup_pane_g11_ParamLimits

0xa2d2,	// (0x0001faca) main_mup_pane_g11

0xa2ea,	// (0x0001fae2) main_mup_pane_g12_ParamLimits

0xa2ea,	// (0x0001fae2) main_mup_pane_g12

0xa2f8,	// (0x0001faf0) main_mup_pane_g13_ParamLimits

0xa2f8,	// (0x0001faf0) main_mup_pane_g13

0x000c,

0xf481,	// (0x00024c79) main_mup_pane_g_ParamLimits

0xf481,	// (0x00024c79) main_mup_pane_g

0xa30e,	// (0x0001fb06) main_mup_pane_t1_ParamLimits

0xa30e,	// (0x0001fb06) main_mup_pane_t1

0xa32b,	// (0x0001fb23) main_mup_pane_t2_ParamLimits

0xa32b,	// (0x0001fb23) main_mup_pane_t2

0xa345,	// (0x0001fb3d) main_mup_pane_t3_ParamLimits

0xa345,	// (0x0001fb3d) main_mup_pane_t3

0xa35f,	// (0x0001fb57) main_mup_pane_t4_ParamLimits

0xa35f,	// (0x0001fb57) main_mup_pane_t4

0xa371,	// (0x0001fb69) main_mup_pane_t5_ParamLimits

0xa371,	// (0x0001fb69) main_mup_pane_t5

0xa383,	// (0x0001fb7b) main_mup_pane_t6_ParamLimits

0xa383,	// (0x0001fb7b) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00024c94) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00024c94) main_mup_pane_t

0xa399,	// (0x0001fb91) mup_progress_pane_ParamLimits

0xa399,	// (0x0001fb91) mup_progress_pane

0xa3a5,	// (0x0001fb9d) mup_visualizer_pane_ParamLimits

0xa3a5,	// (0x0001fb9d) mup_visualizer_pane

0xa3e3,	// (0x0001fbdb) mup_volume_pane_ParamLimits

0xa3e3,	// (0x0001fbdb) mup_volume_pane

0x200d,	// (0x00017805) mup_visualizer_pane_g1_ParamLimits

0x200d,	// (0x00017805) mup_visualizer_pane_g1

0x200d,	// (0x00017805) mup_visualizer_pane_g2_ParamLimits

0x200d,	// (0x00017805) mup_visualizer_pane_g2

0x1e71,	// (0x00017669) mup_visualizer_pane_g3_ParamLimits

0x1e71,	// (0x00017669) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00024ca1) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00024ca1) mup_visualizer_pane_g

0x123c,	// (0x00016a34) mup_volume_pane_g1

0x2023,	// (0x0001781b) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00024ca8) mup_volume_pane_g

0x123c,	// (0x00016a34) mup_progress_pane_g1

0x202c,	// (0x00017824) mup_progress_pane_g2

0x2035,	// (0x0001782d) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00024cad) mup_progress_pane_g

0x0e37,	// (0x0001662f) bg_popup_window_pane_cp05

0x203e,	// (0x00017836) heading_pane_cp02_ParamLimits

0x203e,	// (0x00017836) heading_pane_cp02

0x2058,	// (0x00017850) list_popup_blid_pane

0x2060,	// (0x00017858) list_blid_sat_info_pane_ParamLimits

0x2060,	// (0x00017858) list_blid_sat_info_pane

0x2073,	// (0x0001786b) list_blid_sat_info_pane_g1

0x207b,	// (0x00017873) list_blid_sat_info_pane_t1

0xa4ee,	// (0x0001fce6) mup_equalizer_pane_ParamLimits

0xa4ee,	// (0x0001fce6) mup_equalizer_pane

0xa50f,	// (0x0001fd07) mup_equalizer_pane_cp1_ParamLimits

0xa50f,	// (0x0001fd07) mup_equalizer_pane_cp1

0xa530,	// (0x0001fd28) mup_equalizer_pane_cp2_ParamLimits

0xa530,	// (0x0001fd28) mup_equalizer_pane_cp2

0xa551,	// (0x0001fd49) mup_equalizer_pane_cp3_ParamLimits

0xa551,	// (0x0001fd49) mup_equalizer_pane_cp3

0xa572,	// (0x0001fd6a) mup_equalizer_pane_cp4_ParamLimits

0xa572,	// (0x0001fd6a) mup_equalizer_pane_cp4

0xa593,	// (0x0001fd8b) mup_equalizer_pane_cp5

0xa5a9,	// (0x0001fda1) mup_equalizer_pane_cp6

0xa5c1,	// (0x0001fdb9) mup_equalizer_pane_cp7

0x3298,	// (0x00018a90) bg_popup_call_poc_act_pane_g9

0x32a0,	// (0x00018a98) bg_popup_call_poc_act_pane_g10

0x32a8,	// (0x00018aa0) bg_popup_call_poc_act_pane_g11

0x000a,

0x1092,	// (0x0001688a) mup_scale_pane

0x123c,	// (0x00016a34) mup_scale_pane_g1

0x2089,	// (0x00017881) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00024cc9) mup_scale_pane_g

0x20ad,	// (0x000178a5) msg_data_pane

0x20b5,	// (0x000178ad) scroll_pane_cp017

0xa5eb,	// (0x0001fde3) bg_list_pane_cp04_ParamLimits

0xa5eb,	// (0x0001fde3) bg_list_pane_cp04

0x20bd,	// (0x000178b5) msg_data_pane_g1

0xa60b,	// (0x0001fe03) msg_data_pane_g2

0x9ea6,	// (0x0001f69e) msg_data_pane_g3

0xa613,	// (0x0001fe0b) msg_data_pane_g4

0xa61b,	// (0x0001fe13) msg_data_pane_g5

0xa623,	// (0x0001fe1b) msg_data_pane_g6

0xa62b,	// (0x0001fe23) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00024cd8) msg_data_pane_g

0xa633,	// (0x0001fe2b) msg_text_pane_ParamLimits

0xa633,	// (0x0001fe2b) msg_text_pane

0xa684,	// (0x0001fe7c) qrid_highlight_pane_cp011_ParamLimits

0xa684,	// (0x0001fe7c) qrid_highlight_pane_cp011

0x0e37,	// (0x0001662f) msg_body_pane

0x0e37,	// (0x0001662f) msg_header_pane

0x20ce,	// (0x000178c6) input_focus_pane_cp07

0xa6ae,	// (0x0001fea6) msg_header_pane_t1_ParamLimits

0xa6ae,	// (0x0001fea6) msg_header_pane_t1

0x20e3,	// (0x000178db) msg_header_pane_t2_ParamLimits

0x20e3,	// (0x000178db) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00024cec) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00024cec) msg_header_pane_t

0x20f5,	// (0x000178ed) msg_body_pane_g1

0xa6c2,	// (0x0001feba) msg_body_pane_t1_ParamLimits

0xa6c2,	// (0x0001feba) msg_body_pane_t1

0x20fd,	// (0x000178f5) msg_body_pane_t2_ParamLimits

0x20fd,	// (0x000178f5) msg_body_pane_t2

0x210f,	// (0x00017907) msg_body_pane_t3_ParamLimits

0x210f,	// (0x00017907) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00024cf1) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00024cf1) msg_body_pane_t

0x7336,	// (0x0001cb2e) main_viewer_pane_g1_ParamLimits

0x7336,	// (0x0001cb2e) main_viewer_pane_g1

0x7342,	// (0x0001cb3a) main_viewer_pane_g2_ParamLimits

0x7342,	// (0x0001cb3a) main_viewer_pane_g2

0xa715,	// (0x0001ff0d) main_viewer_pane_g3_ParamLimits

0xa715,	// (0x0001ff0d) main_viewer_pane_g3

0xa726,	// (0x0001ff1e) main_viewer_pane_g4_ParamLimits

0xa726,	// (0x0001ff1e) main_viewer_pane_g4

0x734e,	// (0x0001cb46) main_viewer_pane_g5_ParamLimits

0x734e,	// (0x0001cb46) main_viewer_pane_g5

0x734e,	// (0x0001cb46) main_viewer_pane_g7_ParamLimits

0x734e,	// (0x0001cb46) main_viewer_pane_g7

0x7360,	// (0x0001cb58) main_viewer_pane_g8_ParamLimits

0x7360,	// (0x0001cb58) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00024d01) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00024d01) main_viewer_pane_g

0x2163,	// (0x0001795b) viewer_content_pane_ParamLimits

0x2163,	// (0x0001795b) viewer_content_pane

0xa757,	// (0x0001ff4f) main_postcard_pane_g1_ParamLimits

0xa757,	// (0x0001ff4f) main_postcard_pane_g1

0xa765,	// (0x0001ff5d) main_postcard_pane_g2_ParamLimits

0xa765,	// (0x0001ff5d) main_postcard_pane_g2

0xa773,	// (0x0001ff6b) main_postcard_pane_g3_ParamLimits

0xa773,	// (0x0001ff6b) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00024d12) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00024d12) main_postcard_pane_g

0xa783,	// (0x0001ff7b) main_postcard_pane_g4

0x349a,	// (0x00018c92) smil_status_volume_pane_g2

0xa7af,	// (0x0001ffa7) postcard_pane_ParamLimits

0xa7af,	// (0x0001ffa7) postcard_pane

0x200d,	// (0x00017805) postcard_pane_g1_ParamLimits

0x200d,	// (0x00017805) postcard_pane_g1

0xa7e1,	// (0x0001ffd9) postcard_pane_g2_ParamLimits

0xa7e1,	// (0x0001ffd9) postcard_pane_g2

0xa7ed,	// (0x0001ffe5) postcard_pane_g3_ParamLimits

0xa7ed,	// (0x0001ffe5) postcard_pane_g3

0x217f,	// (0x00017977) postcard_pane_g4_ParamLimits

0x217f,	// (0x00017977) postcard_pane_g4

0xa7f9,	// (0x0001fff1) postcard_pane_g5_ParamLimits

0xa7f9,	// (0x0001fff1) postcard_pane_g5

0xa805,	// (0x0001fffd) postcard_pane_g6_ParamLimits

0xa805,	// (0x0001fffd) postcard_pane_g6

0x2171,	// (0x00017969) postcard_pane_g7_ParamLimits

0x2171,	// (0x00017969) postcard_pane_g7

0x0006,

0xf527,	// (0x00024d1f) postcard_pane_g_ParamLimits

0xf527,	// (0x00024d1f) postcard_pane_g

0xa811,	// (0x00020009) main_mp2_pane_g1_ParamLimits

0xa811,	// (0x00020009) main_mp2_pane_g1

0xa81d,	// (0x00020015) main_mp2_pane_g2_ParamLimits

0xa81d,	// (0x00020015) main_mp2_pane_g2

0xa829,	// (0x00020021) main_mp2_pane_g3_ParamLimits

0xa829,	// (0x00020021) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00024d2e) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00024d2e) main_mp2_pane_g

0xa835,	// (0x0002002d) main_mp2_pane_t1_ParamLimits

0xa835,	// (0x0002002d) main_mp2_pane_t1

0xa84c,	// (0x00020044) main_mp2_pane_t2_ParamLimits

0xa84c,	// (0x00020044) main_mp2_pane_t2

0xa85e,	// (0x00020056) main_mp2_pane_t3_ParamLimits

0xa85e,	// (0x00020056) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00024d35) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00024d35) main_mp2_pane_t

0x218d,	// (0x00017985) pec_content_pane_ParamLimits

0x218d,	// (0x00017985) pec_content_pane

0x16e6,	// (0x00016ede) scroll_pane_cp015

0x219f,	// (0x00017997) pec_attribute_pane_ParamLimits

0x219f,	// (0x00017997) pec_attribute_pane

0xa870,	// (0x00020068) pec_content_pane_g1_ParamLimits

0xa870,	// (0x00020068) pec_content_pane_g1

0x21af,	// (0x000179a7) pec_content_pane_t1_ParamLimits

0x21af,	// (0x000179a7) pec_content_pane_t1

0x21c1,	// (0x000179b9) pec_content_pane_t2_ParamLimits

0x21c1,	// (0x000179b9) pec_content_pane_t2

0x0001,

0xf544,	// (0x00024d3c) pec_content_pane_t_ParamLimits

0xf544,	// (0x00024d3c) pec_content_pane_t

0xa87c,	// (0x00020074) list_single_graphic_pane_cp01_ParamLimits

0xa87c,	// (0x00020074) list_single_graphic_pane_cp01

0x1092,	// (0x0001688a) bg_popup_sub_pane_cp04

0x21d3,	// (0x000179cb) popup_mup_playback_window_g1

0x21df,	// (0x000179d7) popup_mup_playback_window_t1

0x21f4,	// (0x000179ec) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00024d41) popup_mup_playback_window_t

0x222b,	// (0x00017a23) main_image_pane_g1_ParamLimits

0x222b,	// (0x00017a23) main_image_pane_g1

0x226e,	// (0x00017a66) scroll_pane_cp018_ParamLimits

0x226e,	// (0x00017a66) scroll_pane_cp018

0x2286,	// (0x00017a7e) scroll_pane_cp016_ParamLimits

0x2286,	// (0x00017a7e) scroll_pane_cp016

0xa920,	// (0x00020118) smil2_image_pane_ParamLimits

0xa920,	// (0x00020118) smil2_image_pane

0xa954,	// (0x0002014c) smil2_root_pane_ParamLimits

0xa954,	// (0x0002014c) smil2_root_pane

0xa980,	// (0x00020178) smil2_text_pane_ParamLimits

0xa980,	// (0x00020178) smil2_text_pane

0x0e37,	// (0x0001662f) bg_list_pane_cp06

0x22c2,	// (0x00017aba) grid_radio_pane

0x0e37,	// (0x0001662f) bg_popup_window_pane_cp06

0x22ca,	// (0x00017ac2) main_fmradio_pane_t1

0x1cbf,	// (0x000174b7) heading_pane_cp04

0x22d8,	// (0x00017ad0) main_fmradio_pane_t2

0x32b0,	// (0x00018aa8) popup_cale_lunar_info_window_g1

0x22e6,	// (0x00017ade) main_fmradio_pane_t3

0x32b8,	// (0x00018ab0) popup_cale_lunar_info_window_g2

0x22f4,	// (0x00017aec) main_fmradio_pane_t4

0x0001,

0x2302,	// (0x00017afa) main_fmradio_pane_t5

0x0004,

0xf624,	// (0x00024e1c) popup_cale_lunar_info_window_g

0xf55e,	// (0x00024d56) main_fmradio_pane_t

0x2310,	// (0x00017b08) wait_bar_pane_cp03

0x2318,	// (0x00017b10) cell_fmradio_pane_ParamLimits

0x2318,	// (0x00017b10) cell_fmradio_pane

0x2171,	// (0x00017969) cell_fmradio_pane_g1_ParamLimits

0x2171,	// (0x00017969) cell_fmradio_pane_g1

0x0e37,	// (0x0001662f) grid_highlight_pane_cp011

0x232b,	// (0x00017b23) poc_content_pane_ParamLimits

0x232b,	// (0x00017b23) poc_content_pane

0x233d,	// (0x00017b35) scroll_pane_cp019

0xa9c0,	// (0x000201b8) popup_call_poc_act_window_ParamLimits

0xa9c0,	// (0x000201b8) popup_call_poc_act_window

0xa9cd,	// (0x000201c5) popup_call_poc_inact_window_ParamLimits

0xa9cd,	// (0x000201c5) popup_call_poc_inact_window

0xf5fb,	// (0x00024df3) bg_popup_call_poc_act_pane_g

0x3228,	// (0x00018a20) bg_popup_call_poc_inact_pane_g1

0x3230,	// (0x00018a28) bg_popup_call_poc_inact_pane_g2

0x2345,	// (0x00017b3d) popup_call_poc_act_window_g2

0x3238,	// (0x00018a30) bg_popup_call_poc_inact_pane_g3

0x3240,	// (0x00018a38) bg_popup_call_poc_inact_pane_g4

0x3248,	// (0x00018a40) bg_popup_call_poc_inact_pane_g5

0x234d,	// (0x00017b45) popup_call_poc_act_window_t1_ParamLimits

0x234d,	// (0x00017b45) popup_call_poc_act_window_t1

0x2375,	// (0x00017b6d) popup_call_poc_act_window_t2_ParamLimits

0x2375,	// (0x00017b6d) popup_call_poc_act_window_t2

0x239d,	// (0x00017b95) popup_call_poc_act_window_t3_ParamLimits

0x239d,	// (0x00017b95) popup_call_poc_act_window_t3

0x23c5,	// (0x00017bbd) popup_call_poc_act_window_t4_ParamLimits

0x23c5,	// (0x00017bbd) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00024d61) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00024d61) popup_call_poc_act_window_t

0x3250,	// (0x00018a48) bg_popup_call_poc_inact_pane_g6

0x3258,	// (0x00018a50) bg_popup_call_poc_inact_pane_g7

0x3260,	// (0x00018a58) bg_popup_call_poc_inact_pane_g8

0x23d7,	// (0x00017bcf) popup_call_poc_inact_window_g2

0x3268,	// (0x00018a60) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5e8,	// (0x00024de0) bg_popup_call_poc_inact_pane_g

0x23df,	// (0x00017bd7) popup_call_poc_inact_window_t1_ParamLimits

0x23df,	// (0x00017bd7) popup_call_poc_inact_window_t1

0x23f4,	// (0x00017bec) popup_call_poc_inact_window_t2_ParamLimits

0x23f4,	// (0x00017bec) popup_call_poc_inact_window_t2

0x2409,	// (0x00017c01) popup_call_poc_inact_window_t3_ParamLimits

0x2409,	// (0x00017c01) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00024d6a) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00024d6a) popup_call_poc_inact_window_t

0x3420,	// (0x00018c18) context_pane_ParamLimits

0xafbc,	// (0x000207b4) signal_pane_ParamLimits

0x1f3c,	// (0x00017734) main_call2_pane

0x340e,	// (0x00018c06) popup_phob_thumbnail2_window_ParamLimits

0x340e,	// (0x00018c06) popup_phob_thumbnail2_window

0x7306,	// (0x0001cafe) aid_hotspot_pointer_arrow_pane

0x730e,	// (0x0001cb06) aid_hotspot_pointer_hand_pane

0xacfa,	// (0x000204f2) phob_pre_status_pane_g5

0x8c58,	// (0x0001e450) cams_zoom_pane_ParamLimits

0x8c64,	// (0x0001e45c) image_vga_pane_ParamLimits

0x8c73,	// (0x0001e46b) main_camera_pane_g1_ParamLimits

0x8c81,	// (0x0001e479) main_camera_pane_g2_ParamLimits

0x8c8f,	// (0x0001e487) main_camera_pane_g3_ParamLimits

0x8c9b,	// (0x0001e493) main_camera_pane_g4_ParamLimits

0x8ca7,	// (0x0001e49f) main_camera_pane_g5_ParamLimits

0x8cb3,	// (0x0001e4ab) main_camera_pane_g6_ParamLimits

0x8cbf,	// (0x0001e4b7) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00024a69) main_camera_pane_g_ParamLimits

0x8ccb,	// (0x0001e4c3) main_camera_pane_t1_ParamLimits

0x8cdd,	// (0x0001e4d5) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00024a7a) main_camera_pane_t_ParamLimits

0x1092,	// (0x0001688a) bg_popup_preview_window_pane_cp01_ParamLimits

0x1092,	// (0x0001688a) bg_popup_preview_window_pane_cp01

0x241e,	// (0x00017c16) popup_phob_thumbnail2_window_g1_ParamLimits

0x241e,	// (0x00017c16) popup_phob_thumbnail2_window_g1

0x0e37,	// (0x0001662f) call2_cli_visual_pane

0xa9e9,	// (0x000201e1) popup_call2_audio_conf_window_ParamLimits

0xa9e9,	// (0x000201e1) popup_call2_audio_conf_window

0xa9fe,	// (0x000201f6) popup_call2_audio_first_window_ParamLimits

0xa9fe,	// (0x000201f6) popup_call2_audio_first_window

0xaa9c,	// (0x00020294) popup_call2_audio_in_window_ParamLimits

0xaa9c,	// (0x00020294) popup_call2_audio_in_window

0xaade,	// (0x000202d6) popup_call2_audio_out_window_ParamLimits

0xaade,	// (0x000202d6) popup_call2_audio_out_window

0xab40,	// (0x00020338) popup_call2_audio_second_window_ParamLimits

0xab40,	// (0x00020338) popup_call2_audio_second_window

0xab9e,	// (0x00020396) popup_call2_audio_wait_window_ParamLimits

0xab9e,	// (0x00020396) popup_call2_audio_wait_window

0x0e37,	// (0x0001662f) bg_popup_call2_act_pane_cp03

0x1074,	// (0x0001686c) list_conf_pane_cp

0x242a,	// (0x00017c22) popup_call2_audio_conf_window_t1

0x2438,	// (0x00017c30) list_single_graphic_popup_conf2_pane_ParamLimits

0x2438,	// (0x00017c30) list_single_graphic_popup_conf2_pane

0x1d52,	// (0x0001754a) list_highlight_pane_cp04

0x244b,	// (0x00017c43) list_single_graphic_popup_conf2_pane_g1

0x1d63,	// (0x0001755b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00024d71) list_single_graphic_popup_conf2_pane_g

0x2455,	// (0x00017c4d) list_single_graphic_popup_conf2_pane_t1

0x2463,	// (0x00017c5b) bg_popup_call2_act_pane_cp01_ParamLimits

0x2463,	// (0x00017c5b) bg_popup_call2_act_pane_cp01

0x24ed,	// (0x00017ce5) call_type_pane_cp05_ParamLimits

0x24ed,	// (0x00017ce5) call_type_pane_cp05

0x2541,	// (0x00017d39) popup_call2_audio_second_window_g1_ParamLimits

0x2541,	// (0x00017d39) popup_call2_audio_second_window_g1

0x2595,	// (0x00017d8d) popup_call2_audio_second_window_g2_ParamLimits

0x2595,	// (0x00017d8d) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00024d76) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00024d76) popup_call2_audio_second_window_g

0x25fa,	// (0x00017df2) popup_call2_audio_second_window_t1_ParamLimits

0x25fa,	// (0x00017df2) popup_call2_audio_second_window_t1

0x26b5,	// (0x00017ead) popup_call2_audio_second_window_t2_ParamLimits

0x26b5,	// (0x00017ead) popup_call2_audio_second_window_t2

0x2708,	// (0x00017f00) popup_call2_audio_second_window_t3_ParamLimits

0x2708,	// (0x00017f00) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00024d7d) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00024d7d) popup_call2_audio_second_window_t

0x0e37,	// (0x0001662f) bg_popup_call2_in_pane_cp02

0x0e41,	// (0x00016639) call_type_pane_cp04

0x0e49,	// (0x00016641) popup_call2_audio_wait_window_g1

0x0e51,	// (0x00016649) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00024956) popup_call2_audio_wait_window_g

0x0e59,	// (0x00016651) popup_call2_audio_wait_window_t3

0x27fb,	// (0x00017ff3) bg_popup_call2_act_pane_ParamLimits

0x27fb,	// (0x00017ff3) bg_popup_call2_act_pane

0x28bb,	// (0x000180b3) call_type_pane_cp03_ParamLimits

0x28bb,	// (0x000180b3) call_type_pane_cp03

0x291f,	// (0x00018117) popup_call2_audio_first_window_g1_ParamLimits

0x291f,	// (0x00018117) popup_call2_audio_first_window_g1

0x298f,	// (0x00018187) popup_call2_audio_first_window_g2_ParamLimits

0x298f,	// (0x00018187) popup_call2_audio_first_window_g2

0x200d,	// (0x00017805) popup_call2_audio_first_window_g3_ParamLimits

0x200d,	// (0x00017805) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00024d86) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00024d86) popup_call2_audio_first_window_g

0x2a6d,	// (0x00018265) popup_call2_audio_first_window_t1_ParamLimits

0x2a6d,	// (0x00018265) popup_call2_audio_first_window_t1

0x2b70,	// (0x00018368) popup_call2_audio_first_window_t4_ParamLimits

0x2b70,	// (0x00018368) popup_call2_audio_first_window_t4

0x2c53,	// (0x0001844b) popup_call2_audio_first_window_t5_ParamLimits

0x2c53,	// (0x0001844b) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00024d91) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00024d91) popup_call2_audio_first_window_t

0x108a,	// (0x00016882) bg_popup_call2_act_pane_g1

0x32c0,	// (0x00018ab8) popup_cale_lunar_info_window_t1

0x32ce,	// (0x00018ac6) popup_cale_lunar_info_window_t2

0x32dc,	// (0x00018ad4) popup_cale_lunar_info_window_t3

0x0e37,	// (0x0001662f) bg_popup_call2_bubble_pane

0x2d54,	// (0x0001854c) bg_popup_call2_in_pane_cp01_ParamLimits

0x2d54,	// (0x0001854c) bg_popup_call2_in_pane_cp01

0x0b13,	// (0x0001630b) call_type_pane_cp02

0x2d9c,	// (0x00018594) popup_call2_audio_out_window_g1_ParamLimits

0x2d9c,	// (0x00018594) popup_call2_audio_out_window_g1

0x2dc8,	// (0x000185c0) popup_call2_audio_out_window_g2_ParamLimits

0x2dc8,	// (0x000185c0) popup_call2_audio_out_window_g2

0x2df0,	// (0x000185e8) popup_call2_audio_out_window_g3_ParamLimits

0x2df0,	// (0x000185e8) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00024d9a) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00024d9a) popup_call2_audio_out_window_g

0x2e2b,	// (0x00018623) popup_call2_audio_out_window_t1_ParamLimits

0x2e2b,	// (0x00018623) popup_call2_audio_out_window_t1

0x2e8a,	// (0x00018682) popup_call2_audio_out_window_t2_ParamLimits

0x2e8a,	// (0x00018682) popup_call2_audio_out_window_t2

0x2ede,	// (0x000186d6) popup_call2_audio_out_window_t3_ParamLimits

0x2ede,	// (0x000186d6) popup_call2_audio_out_window_t3

0x2ef4,	// (0x000186ec) popup_call2_audio_out_window_t4_ParamLimits

0x2ef4,	// (0x000186ec) popup_call2_audio_out_window_t4

0x2f0a,	// (0x00018702) popup_call2_audio_out_window_t5_ParamLimits

0x2f0a,	// (0x00018702) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00024da3) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00024da3) popup_call2_audio_out_window_t

0x2f6e,	// (0x00018766) bg_popup_call2_in_pane_ParamLimits

0x2f6e,	// (0x00018766) bg_popup_call2_in_pane

0x2fca,	// (0x000187c2) popup_call2_audio_in_window_g1_ParamLimits

0x2fca,	// (0x000187c2) popup_call2_audio_in_window_g1

0x3002,	// (0x000187fa) popup_call2_audio_in_window_g2_ParamLimits

0x3002,	// (0x000187fa) popup_call2_audio_in_window_g2

0x303a,	// (0x00018832) popup_call2_audio_in_window_g3_ParamLimits

0x303a,	// (0x00018832) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00024db0) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00024db0) popup_call2_audio_in_window_g

0x3092,	// (0x0001888a) popup_call2_audio_in_window_t1_ParamLimits

0x3092,	// (0x0001888a) popup_call2_audio_in_window_t1

0x3112,	// (0x0001890a) popup_call2_audio_in_window_t2_ParamLimits

0x3112,	// (0x0001890a) popup_call2_audio_in_window_t2

0x3192,	// (0x0001898a) popup_call2_audio_in_window_t3_ParamLimits

0x3192,	// (0x0001898a) popup_call2_audio_in_window_t3

0x31ac,	// (0x000189a4) popup_call2_audio_in_window_t4_ParamLimits

0x31ac,	// (0x000189a4) popup_call2_audio_in_window_t4

0x31be,	// (0x000189b6) popup_call2_audio_in_window_t5_ParamLimits

0x31be,	// (0x000189b6) popup_call2_audio_in_window_t5

0x31d3,	// (0x000189cb) popup_call2_audio_in_window_t6_ParamLimits

0x31d3,	// (0x000189cb) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00024db9) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00024db9) popup_call2_audio_in_window_t

0x108a,	// (0x00016882) bg_popup_call2_in_pane_g1

0x32ea,	// (0x00018ae2) popup_cale_lunar_info_window_t4

0x0003,

0xf629,	// (0x00024e21) popup_cale_lunar_info_window_t

0x1092,	// (0x0001688a) bg_popup_call2_rect_pane_ParamLimits

0x1092,	// (0x0001688a) bg_popup_call2_rect_pane

0x0e37,	// (0x0001662f) call2_cli_visual_graphic_pane

0x0e37,	// (0x0001662f) call2_cli_visual_text_pane

0x7378,	// (0x0001cb70) smil_status_volume_pane_g3

0x0002,

0x123c,	// (0x00016a34) call2_cli_visual_graphic_pane_g1

0x123c,	// (0x00016a34) call2_cli_visual_graphic_pane_g2

0x123c,	// (0x00016a34) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00024dc6) call2_cli_visual_graphic_pane_g

0x31e8,	// (0x000189e0) bg_popup_call2_rect_pane_g1

0x12e4,	// (0x00016adc) bg_popup_call2_rect_pane_g2

0x31f0,	// (0x000189e8) bg_popup_call2_rect_pane_g3

0x31f8,	// (0x000189f0) bg_popup_call2_rect_pane_g4

0x3200,	// (0x000189f8) bg_popup_call2_rect_pane_g5

0x3208,	// (0x00018a00) bg_popup_call2_rect_pane_g6

0x3210,	// (0x00018a08) bg_popup_call2_rect_pane_g7

0x3218,	// (0x00018a10) bg_popup_call2_rect_pane_g8

0x3220,	// (0x00018a18) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00024dcd) bg_popup_call2_rect_pane_g

0x3228,	// (0x00018a20) bg_popup_call2_bubble_pane_g1

0x3230,	// (0x00018a28) bg_popup_call2_bubble_pane_g2

0x3238,	// (0x00018a30) bg_popup_call2_bubble_pane_g3

0x3240,	// (0x00018a38) bg_popup_call2_bubble_pane_g4

0x3248,	// (0x00018a40) bg_popup_call2_bubble_pane_g5

0x3250,	// (0x00018a48) bg_popup_call2_bubble_pane_g6

0x3258,	// (0x00018a50) bg_popup_call2_bubble_pane_g7

0x3260,	// (0x00018a58) bg_popup_call2_bubble_pane_g8

0x3268,	// (0x00018a60) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00024de0) bg_popup_call2_bubble_pane_g

0x8999,	// (0x0001e191) aid_cale_week_size_cell_pane

0x8cef,	// (0x0001e4e7) aid_cams_cif_uncrop_pane_ParamLimits

0x8cef,	// (0x0001e4e7) aid_cams_cif_uncrop_pane

0x8e52,	// (0x0001e64a) aid_cams_size_cell_ParamLimits

0x8e52,	// (0x0001e64a) aid_cams_size_cell

0x8e5e,	// (0x0001e656) grid_cams_pane_ParamLimits

0x8e6c,	// (0x0001e664) linegrid_cams_pane_ParamLimits

0x8f60,	// (0x0001e758) call_video_pane_t1

0x8f7a,	// (0x0001e772) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00024acd) call_video_pane_t

0x9479,	// (0x0001ec71) aid_cale_month_size_cell_pane_ParamLimits

0x9479,	// (0x0001ec71) aid_cale_month_size_cell_pane

0xf672,	// (0x00024e6a) smil_status_volume_pane_g

0x7385,	// (0x0001cb7d) volume_smil_pane_ParamLimits

0x09ba,	// (0x000161b2) aid_popup2_width_pane

0x88d6,	// (0x0001e0ce) cell_qdial_pane_g4_ParamLimits

0x88d6,	// (0x0001e0ce) cell_qdial_pane_g4

0xa00e,	// (0x0001f806) aid_blid_cardinal_pane_ParamLimits

0xa01e,	// (0x0001f816) aid_blid_destination_pane_ParamLimits

0xa01e,	// (0x0001f816) aid_blid_destination_pane

0x1092,	// (0x0001688a) bg_popup_call_poc_act_pane_ParamLimits

0x1092,	// (0x0001688a) bg_popup_call_poc_act_pane

0x1092,	// (0x0001688a) bg_popup_call_poc_inact_pane_ParamLimits

0x1092,	// (0x0001688a) bg_popup_call_poc_inact_pane

0x3270,	// (0x00018a68) bg_popup_call_poc_act_pane_g1

0x3278,	// (0x00018a70) bg_popup_call_poc_act_pane_g2

0x3280,	// (0x00018a78) bg_popup_call_poc_act_pane_g3

0x3240,	// (0x00018a38) bg_popup_call_poc_act_pane_g4

0x3248,	// (0x00018a40) bg_popup_call_poc_act_pane_g5

0x3288,	// (0x00018a80) bg_popup_call_poc_act_pane_g6

0x3258,	// (0x00018a50) bg_popup_call_poc_act_pane_g7

0x3290,	// (0x00018a88) bg_popup_call_poc_act_pane_g8

0x0e37,	// (0x0001662f) main_usb_pane

0x33e9,	// (0x00018be1) popup_cale_lunar_info_window

0x9218,	// (0x0001ea10) im_reading_pane_t1_ParamLimits

0x163e,	// (0x00016e36) list_im_pane_ParamLimits

0x164f,	// (0x00016e47) scroll_pane_cp07_ParamLimits

0x0e37,	// (0x0001662f) grid_highlight_pane_cp012

0x1092,	// (0x0001688a) mup_scale_pane_ParamLimits

0x200d,	// (0x00017805) main_usb_pane_g1_ParamLimits

0x200d,	// (0x00017805) main_usb_pane_g1

0xac1d,	// (0x00020415) main_usb_pane_g2_ParamLimits

0xac1d,	// (0x00020415) main_usb_pane_g2

0x0001,

0xf612,	// (0x00024e0a) main_usb_pane_g_ParamLimits

0xf612,	// (0x00024e0a) main_usb_pane_g

0xac29,	// (0x00020421) main_usb_pane_t1_ParamLimits

0xac29,	// (0x00020421) main_usb_pane_t1

0xac3b,	// (0x00020433) main_usb_pane_t2_ParamLimits

0xac3b,	// (0x00020433) main_usb_pane_t2

0xac4d,	// (0x00020445) main_usb_pane_t3_ParamLimits

0xac4d,	// (0x00020445) main_usb_pane_t3

0xac5f,	// (0x00020457) main_usb_pane_t4_ParamLimits

0xac5f,	// (0x00020457) main_usb_pane_t4

0xac71,	// (0x00020469) main_usb_pane_t5_ParamLimits

0xac71,	// (0x00020469) main_usb_pane_t5

0xac83,	// (0x0002047b) main_usb_pane_t6_ParamLimits

0xac83,	// (0x0002047b) main_usb_pane_t6

0x0005,

0xf617,	// (0x00024e0f) main_usb_pane_t_ParamLimits

0x9fb4,	// (0x0001f7ac) aid_text_placing

0x9fc0,	// (0x0001f7b8) main_location2_pane_t1_ParamLimits

0x9fd4,	// (0x0001f7cc) main_location2_pane_t2_ParamLimits

0x9fe8,	// (0x0001f7e0) main_location2_pane_t3_ParamLimits

0x9ffc,	// (0x0001f7f4) main_location2_pane_t4_ParamLimits

0x9ffc,	// (0x0001f7f4) main_location2_pane_t4

0xf436,	// (0x00024c2e) main_location2_pane_t_ParamLimits

0x10d6,	// (0x000168ce) find_pinb_pane_g2_ParamLimits

0x10d6,	// (0x000168ce) find_pinb_pane_g2

0x0001,

0xf184,	// (0x0002497c) find_pinb_pane_g_ParamLimits

0xf184,	// (0x0002497c) find_pinb_pane_g

0x10e2,	// (0x000168da) find_pinb_pane_t1_ParamLimits

0x10f4,	// (0x000168ec) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00024981) find_pinb_pane_t_ParamLimits

0x0e37,	// (0x0001662f) main_call3_pane

0x97c5,	// (0x0001efbd) cale_month_day_heading_pane_t1_ParamLimits

0x9823,	// (0x0001f01b) cale_month_day_heading_pane_t2_ParamLimits

0x9888,	// (0x0001f080) cale_month_day_heading_pane_t3_ParamLimits

0x98ed,	// (0x0001f0e5) cale_month_day_heading_pane_t4_ParamLimits

0x9952,	// (0x0001f14a) cale_month_day_heading_pane_t5_ParamLimits

0x99b7,	// (0x0001f1af) cale_month_day_heading_pane_t6_ParamLimits

0x9a24,	// (0x0001f21c) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00024b05) cale_month_day_heading_pane_t_ParamLimits

0x18c5,	// (0x000170bd) smil_status_volume_pane

0xa7c9,	// (0x0001ffc1) postcard_address_pane_ParamLimits

0xa7c9,	// (0x0001ffc1) postcard_address_pane

0xa7d5,	// (0x0001ffcd) postcard_message_pane_ParamLimits

0xa7d5,	// (0x0001ffcd) postcard_message_pane

0xabdd,	// (0x000203d5) call2_cli_visual_pane_t1_ParamLimits

0xabdd,	// (0x000203d5) call2_cli_visual_pane_t1

0xb1aa,	// (0x000209a2) postcard_message_pane_t1_ParamLimits

0xb1aa,	// (0x000209a2) postcard_message_pane_t1

0xb193,	// (0x0002098b) postcard_address_pane_t1_ParamLimits

0xb193,	// (0x0002098b) postcard_address_pane_t1

0xb184,	// (0x0002097c) popup_call3_audio_in_window_ParamLimits

0xb184,	// (0x0002097c) popup_call3_audio_in_window

0xb06c,	// (0x00020864) bg_popup_call3_in_pane_ParamLimits

0xb06c,	// (0x00020864) bg_popup_call3_in_pane

0xb0ca,	// (0x000208c2) popup_call3_audio_in_window_g1_ParamLimits

0xb0ca,	// (0x000208c2) popup_call3_audio_in_window_g1

0xb0e2,	// (0x000208da) popup_call3_audio_in_window_g2_ParamLimits

0xb0e2,	// (0x000208da) popup_call3_audio_in_window_g2

0xb0fa,	// (0x000208f2) popup_call3_audio_in_window_g3_ParamLimits

0xb0fa,	// (0x000208f2) popup_call3_audio_in_window_g3

0x0003,

0xf679,	// (0x00024e71) popup_call3_audio_in_window_g_ParamLimits

0xf679,	// (0x00024e71) popup_call3_audio_in_window_g

0xb122,	// (0x0002091a) popup_call3_audio_in_window_t1_ParamLimits

0xb122,	// (0x0002091a) popup_call3_audio_in_window_t1

0xb14a,	// (0x00020942) popup_call3_audio_in_window_t2_ParamLimits

0xb14a,	// (0x00020942) popup_call3_audio_in_window_t2

0xb172,	// (0x0002096a) popup_call3_audio_in_window_t3_ParamLimits

0xb172,	// (0x0002096a) popup_call3_audio_in_window_t3

0x0002,

0xf682,	// (0x00024e7a) popup_call3_audio_in_window_t_ParamLimits

0xf682,	// (0x00024e7a) popup_call3_audio_in_window_t

0x1f3c,	// (0x00017734) bg_popup_call3_rect_pane

0x31e8,	// (0x000189e0) bg_popup_call3_rect_pane_g1

0x12e4,	// (0x00016adc) bg_popup_call3_rect_pane_g2

0x31f0,	// (0x000189e8) bg_popup_call3_rect_pane_g3

0x31f8,	// (0x000189f0) bg_popup_call3_rect_pane_g4

0x3200,	// (0x000189f8) bg_popup_call3_rect_pane_g5

0x3208,	// (0x00018a00) bg_popup_call3_rect_pane_g6

0x3210,	// (0x00018a08) bg_popup_call3_rect_pane_g7

0xa3fe,	// (0x0001fbf6) mup_visualizer_osc_pane

0x201b,	// (0x00017813) mup_visualizer_spec_pane

0xb08c,	// (0x00020884) call3_video_qcif_pane_ParamLimits

0xb08c,	// (0x00020884) call3_video_qcif_pane

0xb09c,	// (0x00020894) call3_video_qcif_uncrop_pane_ParamLimits

0xb09c,	// (0x00020894) call3_video_qcif_uncrop_pane

0xb0a8,	// (0x000208a0) call3_video_subqcif_pane_ParamLimits

0xb0a8,	// (0x000208a0) call3_video_subqcif_pane

0xb0ba,	// (0x000208b2) call3_video_subqcif_uncrop_pane_ParamLimits

0xb0ba,	// (0x000208b2) call3_video_subqcif_uncrop_pane

0xb112,	// (0x0002090a) popup_call3_audio_in_window_g4_ParamLimits

0xb112,	// (0x0002090a) popup_call3_audio_in_window_g4

0xb05b,	// (0x00020853) mup_spec_half_pane

0xb064,	// (0x0002085c) mup_spec_half_pane_cp

0x3480,	// (0x00018c78) mup_osc_middle_pane

0x3489,	// (0x00018c81) mup_visualizer_osc_pane_g1

0xb03c,	// (0x00020834) mup_spec_bar_pane_ParamLimits

0xb03c,	// (0x00020834) mup_spec_bar_pane

0x346d,	// (0x00018c65) mup_spec_bar_pane_g1

0x3477,	// (0x00018c6f) mup_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00024e65) mup_spec_bar_pane_g

0x8999,	// (0x0001e191) aid_cale_week_size_cell_pane_ParamLimits

0x89ac,	// (0x0001e1a4) bg_cale_heading_pane_ParamLimits

0x136e,	// (0x00016b66) bg_cale_pane_cp01_ParamLimits

0x89c0,	// (0x0001e1b8) cale_week_corner_pane_ParamLimits

0x89d1,	// (0x0001e1c9) cale_week_day_heading_pane_ParamLimits

0x89e5,	// (0x0001e1dd) cale_week_scroll_pane_g1_ParamLimits

0x89f6,	// (0x0001e1ee) cale_week_scroll_pane_g2_ParamLimits

0x8a07,	// (0x0001e1ff) cale_week_scroll_pane_g3_ParamLimits

0x8a18,	// (0x0001e210) cale_week_scroll_pane_g4_ParamLimits

0x8a29,	// (0x0001e221) cale_week_scroll_pane_g5_ParamLimits

0x8a3a,	// (0x0001e232) cale_week_scroll_pane_g6_ParamLimits

0x8a4b,	// (0x0001e243) cale_week_scroll_pane_g7_ParamLimits

0x8a5e,	// (0x0001e256) cale_week_scroll_pane_g8_ParamLimits

0x8a71,	// (0x0001e269) cale_week_scroll_pane_g9_ParamLimits

0x8a82,	// (0x0001e27a) cale_week_scroll_pane_g10_ParamLimits

0x8a93,	// (0x0001e28b) cale_week_scroll_pane_g11_ParamLimits

0x8aa4,	// (0x0001e29c) cale_week_scroll_pane_g12_ParamLimits

0x8ab5,	// (0x0001e2ad) cale_week_scroll_pane_g13_ParamLimits

0x8ac6,	// (0x0001e2be) cale_week_scroll_pane_g14_ParamLimits

0x8ad7,	// (0x0001e2cf) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x00024a0d) cale_week_scroll_pane_g_ParamLimits

0x8ae8,	// (0x0001e2e0) cale_week_time_pane_ParamLimits

0x8afb,	// (0x0001e2f3) grid_cale_week_pane_ParamLimits

0x1387,	// (0x00016b7f) listscroll_cale_week_pane_t1

0x8b10,	// (0x0001e308) scroll_pane_cp08_ParamLimits

0x94ba,	// (0x0001ecb2) cale_month_corner_pane_ParamLimits

0x1865,	// (0x0001705d) cale_month_pane_t1

0x9784,	// (0x0001ef7c) cale_month_week_pane_ParamLimits

0x200d,	// (0x00017805) popup_call_status_window_g1_ParamLimits

0x9e6b,	// (0x0001f663) popup_call_status_window_g2_ParamLimits

0x9e77,	// (0x0001f66f) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00024bb5) popup_call_status_window_g_ParamLimits

0x1c48,	// (0x00017440) aid_call2_pane

0xa6a0,	// (0x0001fe98) msg_header_pane_g1

0xa7c9,	// (0x0001ffc1) postcard_address2_pane_ParamLimits

0xa7c9,	// (0x0001ffc1) postcard_address2_pane

0xa7d5,	// (0x0001ffcd) postcard_message2_pane_ParamLimits

0xa7d5,	// (0x0001ffcd) postcard_message2_pane

0xafca,	// (0x000207c2) message2_row_pane_ParamLimits

0xafca,	// (0x000207c2) message2_row_pane

0xafe7,	// (0x000207df) address2_row_pane_ParamLimits

0xafe7,	// (0x000207df) address2_row_pane

0x343b,	// (0x00018c33) postcard_message2_row_pane_g1

0x3443,	// (0x00018c3b) postcard_message2_row_pane_t1

0x343b,	// (0x00018c33) address2_row_pane_g1

0x3443,	// (0x00018c3b) address2_row_pane_t1

0x71c1,	// (0x0001c9b9) aid_size_cell_vorec

0x0e37,	// (0x0001662f) main_rss_pane

0xaffa,	// (0x000207f2) rss_list_single_pane_ParamLimits

0xaffa,	// (0x000207f2) rss_list_single_pane

0x3451,	// (0x00018c49) rss_list_single_pane_t1

0x345f,	// (0x00018c57) rss_list_single_pane_t2

0x0001,

0xf668,	// (0x00024e60) rss_list_single_pane_t

0x0e37,	// (0x0001662f) main_camera2_pane

0x0e37,	// (0x0001662f) main_video2_pane

0x73e3,	// (0x0001cbdb) cams_zoom_pane_cp2_ParamLimits

0x73e3,	// (0x0001cbdb) cams_zoom_pane_cp2

0x73ef,	// (0x0001cbe7) image2_vga_pane_ParamLimits

0x73ef,	// (0x0001cbe7) image2_vga_pane

0x73fe,	// (0x0001cbf6) main_camera2_pane_g1_ParamLimits

0x73fe,	// (0x0001cbf6) main_camera2_pane_g1

0x740a,	// (0x0001cc02) main_camera2_pane_g2_ParamLimits

0x740a,	// (0x0001cc02) main_camera2_pane_g2

0x7416,	// (0x0001cc0e) main_camera2_pane_g3_ParamLimits

0x7416,	// (0x0001cc0e) main_camera2_pane_g3

0x7422,	// (0x0001cc1a) main_camera2_pane_g4_ParamLimits

0x7422,	// (0x0001cc1a) main_camera2_pane_g4

0x742e,	// (0x0001cc26) main_camera2_pane_g5_ParamLimits

0x742e,	// (0x0001cc26) main_camera2_pane_g5

0x743a,	// (0x0001cc32) main_camera2_pane_g6_ParamLimits

0x743a,	// (0x0001cc32) main_camera2_pane_g6

0x7446,	// (0x0001cc3e) main_camera2_pane_g7_ParamLimits

0x7446,	// (0x0001cc3e) main_camera2_pane_g7

0x7452,	// (0x0001cc4a) main_camera2_pane_g8_ParamLimits

0x7452,	// (0x0001cc4a) main_camera2_pane_g8

0x0008,

0xf689,	// (0x00024e81) main_camera2_pane_g_ParamLimits

0xf689,	// (0x00024e81) main_camera2_pane_g

0x746a,	// (0x0001cc62) main_camera2_pane_t1_ParamLimits

0x746a,	// (0x0001cc62) main_camera2_pane_t1

0x747c,	// (0x0001cc74) main_camera2_pane_t2_ParamLimits

0x747c,	// (0x0001cc74) main_camera2_pane_t2

0x748e,	// (0x0001cc86) main_camera2_pane_t3_ParamLimits

0x748e,	// (0x0001cc86) main_camera2_pane_t3

0x74a0,	// (0x0001cc98) main_camera2_pane_t4_ParamLimits

0x74a0,	// (0x0001cc98) main_camera2_pane_t4

0x0006,

0xf69c,	// (0x00024e94) main_camera2_pane_t_ParamLimits

0xf69c,	// (0x00024e94) main_camera2_pane_t

0x7502,	// (0x0001ccfa) cams_zoom_pane_cp4_ParamLimits

0x7502,	// (0x0001ccfa) cams_zoom_pane_cp4

0x7512,	// (0x0001cd0a) image2_cif_pane_ParamLimits

0x7512,	// (0x0001cd0a) image2_cif_pane

0x7527,	// (0x0001cd1f) image2_subqcif_pane_ParamLimits

0x7527,	// (0x0001cd1f) image2_subqcif_pane

0x7536,	// (0x0001cd2e) main_video2_pane_g1_ParamLimits

0x7536,	// (0x0001cd2e) main_video2_pane_g1

0x7548,	// (0x0001cd40) main_video2_pane_g2_ParamLimits

0x7548,	// (0x0001cd40) main_video2_pane_g2

0x7558,	// (0x0001cd50) main_video2_pane_g3_ParamLimits

0x7558,	// (0x0001cd50) main_video2_pane_g3

0x7568,	// (0x0001cd60) main_video2_pane_g4_ParamLimits

0x7568,	// (0x0001cd60) main_video2_pane_g4

0x7578,	// (0x0001cd70) main_video2_pane_g5_ParamLimits

0x7578,	// (0x0001cd70) main_video2_pane_g5

0x7588,	// (0x0001cd80) main_video2_pane_g6_ParamLimits

0x7588,	// (0x0001cd80) main_video2_pane_g6

0x0005,

0xf6ab,	// (0x00024ea3) main_video2_pane_g_ParamLimits

0xf6ab,	// (0x00024ea3) main_video2_pane_g

0x759a,	// (0x0001cd92) main_video2_pane_t1_ParamLimits

0x759a,	// (0x0001cd92) main_video2_pane_t1

0x75b4,	// (0x0001cdac) main_video2_pane_t2_ParamLimits

0x75b4,	// (0x0001cdac) main_video2_pane_t2

0x75da,	// (0x0001cdd2) main_video2_pane_t3_ParamLimits

0x75da,	// (0x0001cdd2) main_video2_pane_t3

0x0002,

0xf6b8,	// (0x00024eb0) main_video2_pane_t_ParamLimits

0xf6b8,	// (0x00024eb0) main_video2_pane_t

0xad3a,	// (0x00020532) call_muted_g2

0x0001,

0xf65a,	// (0x00024e52) call_muted_g

0x0e37,	// (0x0001662f) main_mup2_pane

0x3540,	// (0x00018d38) main_mup2_pane_g1_ParamLimits

0x3540,	// (0x00018d38) main_mup2_pane_g1

0xb1c5,	// (0x000209bd) main_mup2_pane_g2_ParamLimits

0xb1c5,	// (0x000209bd) main_mup2_pane_g2

0x7629,	// (0x0001ce21) main_mup_pane_g13_cp1

0x7631,	// (0x0001ce29) mup_volume_pane_cp1

0xb1e5,	// (0x000209dd) main_mup2_pane_g4_ParamLimits

0xb1e5,	// (0x000209dd) main_mup2_pane_g4

0xb1fa,	// (0x000209f2) main_mup2_pane_g5_ParamLimits

0xb1fa,	// (0x000209f2) main_mup2_pane_g5

0xb20f,	// (0x00020a07) main_mup2_pane_g6_ParamLimits

0xb20f,	// (0x00020a07) main_mup2_pane_g6

0xb224,	// (0x00020a1c) main_mup2_pane_g7_ParamLimits

0xb224,	// (0x00020a1c) main_mup2_pane_g7

0x0006,

0xf6bf,	// (0x00024eb7) main_mup2_pane_g_ParamLimits

0xf6bf,	// (0x00024eb7) main_mup2_pane_g

0xb240,	// (0x00020a38) main_mup2_pane_t1_ParamLimits

0xb240,	// (0x00020a38) main_mup2_pane_t1

0xb257,	// (0x00020a4f) main_mup2_pane_t2_ParamLimits

0xb257,	// (0x00020a4f) main_mup2_pane_t2

0xb26e,	// (0x00020a66) main_mup2_pane_t3_ParamLimits

0xb26e,	// (0x00020a66) main_mup2_pane_t3

0xb285,	// (0x00020a7d) main_mup2_pane_t4_ParamLimits

0xb285,	// (0x00020a7d) main_mup2_pane_t4

0xb29f,	// (0x00020a97) main_mup2_pane_t5_ParamLimits

0xb29f,	// (0x00020a97) main_mup2_pane_t5

0xb2b9,	// (0x00020ab1) main_mup2_pane_t6_ParamLimits

0xb2b9,	// (0x00020ab1) main_mup2_pane_t6

0x0005,

0xf6ce,	// (0x00024ec6) main_mup2_pane_t_ParamLimits

0xf6ce,	// (0x00024ec6) main_mup2_pane_t

0xb2f1,	// (0x00020ae9) mup2_visualizer_pane_ParamLimits

0xb2f1,	// (0x00020ae9) mup2_visualizer_pane

0xb327,	// (0x00020b1f) mup_progress_pane_cp_ParamLimits

0xb327,	// (0x00020b1f) mup_progress_pane_cp

0x7614,	// (0x0001ce0c) mup_volume_pane_cp_ParamLimits

0x7614,	// (0x0001ce0c) mup_volume_pane_cp

0xb33e,	// (0x00020b36) mup2_visualizer_pane_g1_ParamLimits

0xb33e,	// (0x00020b36) mup2_visualizer_pane_g1

0x3512,	// (0x00018d0a) mup2_visualizer_pane_g2_ParamLimits

0x3512,	// (0x00018d0a) mup2_visualizer_pane_g2

0xb353,	// (0x00020b4b) mup2_visualizer_pane_g3_ParamLimits

0xb353,	// (0x00020b4b) mup2_visualizer_pane_g3

0x0002,

0xf6db,	// (0x00024ed3) mup2_visualizer_pane_g_ParamLimits

0xf6db,	// (0x00024ed3) mup2_visualizer_pane_g

0x22ba,	// (0x00017ab2) aid_size_cell_fmradio

0xae50,	// (0x00020648) aid_height_parent_landcape

0x16cd,	// (0x00016ec5) wml_content_pane_cp

0x16d5,	// (0x00016ecd) wml_tabs_pane

0x16de,	// (0x00016ed6) popup_wml_miniature_window

0x16e6,	// (0x00016ede) scroll_pane_cp021

0x16fa,	// (0x00016ef2) wml_content_pane_comp8

0x0e37,	// (0x0001662f) bg_popup_sub_pane_cp05

0x3530,	// (0x00018d28) popup_wml_miniature_window_g1

0x3538,	// (0x00018d30) wml_miniature_view_pane

0xb361,	// (0x00020b59) aid_size_wml_view

0xb369,	// (0x00020b61) wml_miniature_view_pane_g1

0xb372,	// (0x00020b6a) wml_miniature_view_pane_g2

0xb37b,	// (0x00020b73) wml_miniature_view_pane_g3

0xb383,	// (0x00020b7b) wml_miniature_view_pane_g4

0xb38b,	// (0x00020b83) wml_miniature_view_pane_g5

0xb393,	// (0x00020b8b) wml_miniature_view_pane_g6

0xb39b,	// (0x00020b93) wml_miniature_view_pane_g7

0xb3a3,	// (0x00020b9b) wml_miniature_view_pane_g8

0x0007,

0xf6e2,	// (0x00024eda) wml_miniature_view_pane_g

0x3540,	// (0x00018d38) background_graphic_ParamLimits

0x3540,	// (0x00018d38) background_graphic

0x354c,	// (0x00018d44) wml_tabs_2_pane

0x3555,	// (0x00018d4d) wml_tabs_3_pane_ParamLimits

0x3555,	// (0x00018d4d) wml_tabs_3_pane

0x3567,	// (0x00018d5f) wml_tabs_4_pane_ParamLimits

0x3567,	// (0x00018d5f) wml_tabs_4_pane

0x357d,	// (0x00018d75) wml_tabs_5_pane_ParamLimits

0x357d,	// (0x00018d75) wml_tabs_5_pane

0x3597,	// (0x00018d8f) wml_tabs_pane_g2_ParamLimits

0x3597,	// (0x00018d8f) wml_tabs_pane_g2

0x35ab,	// (0x00018da3) wml_tabs_pane_g3_ParamLimits

0x35ab,	// (0x00018da3) wml_tabs_pane_g3

0xb3ab,	// (0x00020ba3) wml_tabs_2_active_pane_ParamLimits

0xb3ab,	// (0x00020ba3) wml_tabs_2_active_pane

0xb3bb,	// (0x00020bb3) wml_tabs_2_passive_pane_ParamLimits

0xb3bb,	// (0x00020bb3) wml_tabs_2_passive_pane

0xb3cb,	// (0x00020bc3) wml_tabs_3_active_pane_cp_ParamLimits

0xb3cb,	// (0x00020bc3) wml_tabs_3_active_pane_cp

0xb3dc,	// (0x00020bd4) wml_tabs_3_passive_pane_ParamLimits

0xb3dc,	// (0x00020bd4) wml_tabs_3_passive_pane

0xb3ed,	// (0x00020be5) wml_tabs_3_passive_pane_cp_ParamLimits

0xb3ed,	// (0x00020be5) wml_tabs_3_passive_pane_cp

0xb3fe,	// (0x00020bf6) tabs_4_active_pane

0xb406,	// (0x00020bfe) tabs_4_passive_pane

0xb40e,	// (0x00020c06) tabs_4_passive_pane_cp

0xb416,	// (0x00020c0e) tabs_4_passive_pane_cp2

0xac15,	// (0x0002040d) aid_height_text

0xa3c7,	// (0x0001fbbf) mup_volume_cont_pane_ParamLimits

0xa3c7,	// (0x0001fbbf) mup_volume_cont_pane

0x86b1,	// (0x0001dea9) aid_size_cell_pinb

0x10c2,	// (0x000168ba) aid_size_list_pinb

0xb310,	// (0x00020b08) mup2_volume_cont_pane_ParamLimits

0xb310,	// (0x00020b08) mup2_volume_cont_pane

0x7600,	// (0x0001cdf8) mup2_volume_cont_pane_g1_ParamLimits

0x7600,	// (0x0001cdf8) mup2_volume_cont_pane_g1

0x8344,	// (0x0001db3c) aid_size_cell_touch_ParamLimits

0x8344,	// (0x0001db3c) aid_size_cell_touch

0x8591,	// (0x0001dd89) touch_pane_ParamLimits

0x8591,	// (0x0001dd89) touch_pane

0x09a8,	// (0x000161a0) main_rss2_pane

0x3601,	// (0x00018df9) listscroll_rss2_pane

0x360a,	// (0x00018e02) rss2_navigation_pane

0x3612,	// (0x00018e0a) list_rss2_pane

0x1def,	// (0x000175e7) scroll_pane_cp22

0x361a,	// (0x00018e12) rss2_navigation_pane_g1

0x3623,	// (0x00018e1b) rss2_navigation_pane_g2

0x362b,	// (0x00018e23) rss2_navigation_pane_g3

0x0002,

0xf6f3,	// (0x00024eeb) rss2_navigation_pane_g

0x3633,	// (0x00018e2b) rss2_navigation_pane_t1

0xb41e,	// (0x00020c16) rss2_list_single_pane_ParamLimits

0xb41e,	// (0x00020c16) rss2_list_single_pane

0x3641,	// (0x00018e39) rss2_list_single_pane_t2

0x364f,	// (0x00018e47) rss2_list_single_pane_t3_ParamLimits

0x364f,	// (0x00018e47) rss2_list_single_pane_t3

0x366c,	// (0x00018e64) rss2_list_single_pane_t4

0x9be4,	// (0x0001f3dc) smil_status_pane_g1

0x0a18,	// (0x00016210) main_image2_pane_ParamLimits

0x0a18,	// (0x00016210) main_image2_pane

0x745e,	// (0x0001cc56) main_camera2_pane_g9_ParamLimits

0x745e,	// (0x0001cc56) main_camera2_pane_g9

0x74b2,	// (0x0001ccaa) main_camera2_pane_t5_ParamLimits

0x74b2,	// (0x0001ccaa) main_camera2_pane_t5

0x74c4,	// (0x0001ccbc) main_camera2_pane_t6_ParamLimits

0x74c4,	// (0x0001ccbc) main_camera2_pane_t6

0xb45a,	// (0x00020c52) main_image2_pane_g1_ParamLimits

0xb45a,	// (0x00020c52) main_image2_pane_g1

0xa9aa,	// (0x000201a2) smil2_video_pane_ParamLimits

0xa9aa,	// (0x000201a2) smil2_video_pane

0x09c6,	// (0x000161be) aid_zoom_text_primary_cp

0x0a0e,	// (0x00016206) popup_preview_fixed_window

0x1636,	// (0x00016e2e) im_reading_pane_g1

0x73a8,	// (0x0001cba0) cams2_bc_adjust_pane_cp_ParamLimits

0x73a8,	// (0x0001cba0) cams2_bc_adjust_pane_cp

0x74f4,	// (0x0001ccec) cams2_bc_adjust_pane_ParamLimits

0x74f4,	// (0x0001ccec) cams2_bc_adjust_pane

0x4d8a,	// (0x0001a582) cams2_bc_adjust_pane_g1

0x7639,	// (0x0001ce31) cams2_slider_pane

0x7642,	// (0x0001ce3a) cams2_slider_pane_g1

0x764b,	// (0x0001ce43) cams2_slider_pane_g2

0x0006,

0xf6fa,	// (0x00024ef2) cams2_slider_pane_g

0x6f66,	// (0x0001c75e) calc_display_pane_ParamLimits

0x6f84,	// (0x0001c77c) calc_paper_pane_ParamLimits

0x6fa0,	// (0x0001c798) grid_calc_pane_ParamLimits

0x72d7,	// (0x0001cacf) popup_clock_digital_window_t1_ParamLimits

0x2257,	// (0x00017a4f) main_image_pane_t1

0x6f4c,	// (0x0001c744) aid_size_cell_calc_ParamLimits

0x6f4c,	// (0x0001c744) aid_size_cell_calc

0xae82,	// (0x0002067a) popup_blid_sat_info2_window_ParamLimits

0xae82,	// (0x0002067a) popup_blid_sat_info2_window

0x36b6,	// (0x00018eae) aid_size_cell_blid

0x36be,	// (0x00018eb6) bg_popup_window_pane_cp07

0x36e1,	// (0x00018ed9) grid_popup_blid_pane

0x36eb,	// (0x00018ee3) heading_pane_cp05_ParamLimits

0x36eb,	// (0x00018ee3) heading_pane_cp05

0x37b5,	// (0x00018fad) cell_popup_blid_pane_ParamLimits

0x37b5,	// (0x00018fad) cell_popup_blid_pane

0x37db,	// (0x00018fd3) cell_popup_blid_pane_g1

0x37e3,	// (0x00018fdb) cell_popup_blid_pane_t1

0xb2d6,	// (0x00020ace) mup2_indicator_pane_ParamLimits

0xb2d6,	// (0x00020ace) mup2_indicator_pane

0x1f3c,	// (0x00017734) mup2_visualizer_osc_pane

0x351e,	// (0x00018d16) mup2_visualizer_spec_pane_ParamLimits

0x351e,	// (0x00018d16) mup2_visualizer_spec_pane

0xb466,	// (0x00020c5e) mup2_spec_half_pane

0xb46f,	// (0x00020c67) mup2_spec_half_pane_cp

0xb479,	// (0x00020c71) mup2_spec_bar_pane_ParamLimits

0xb479,	// (0x00020c71) mup2_spec_bar_pane

0x346d,	// (0x00018c65) mup2_spec_bar_pane_g1

0x3477,	// (0x00018c6f) mup2_spec_bar_pane_g2

0x0001,

0xf66d,	// (0x00024e65) mup2_spec_bar_pane_g

0xb498,	// (0x00020c90) mup2_osc_middle_pane

0x3489,	// (0x00018c81) mup2_visualizer_osc_pane_g1

0x0a46,	// (0x0001623e) popup_number_entry_window_t1_ParamLimits

0x0a59,	// (0x00016251) popup_number_entry_window_t2_ParamLimits

0x0a6b,	// (0x00016263) popup_number_entry_window_t3_ParamLimits

0x85e8,	// (0x0001dde0) popup_number_entry_window_t5_ParamLimits

0x85e8,	// (0x0001dde0) popup_number_entry_window_t5

0xf12f,	// (0x00024927) popup_number_entry_window_t_ParamLimits

0x0a7d,	// (0x00016275) text_title_cp2_ParamLimits

0x7316,	// (0x0001cb0e) aid_hotspot_pointer_text2_pane

0x736c,	// (0x0001cb64) main_viewer_pane_g9_ParamLimits

0x736c,	// (0x0001cb64) main_viewer_pane_g9

0x1865,	// (0x0001705d) cale_month_pane_t1_ParamLimits

0x18fa,	// (0x000170f2) bg_cale_pane_ParamLimits

0x1912,	// (0x0001710a) list_cale_pane_ParamLimits

0x1387,	// (0x00016b7f) listscroll_cale_day_pane_t1

0x1923,	// (0x0001711b) scroll_pane_cp09_ParamLimits

0xa406,	// (0x0001fbfe) main_mup_eq_pane_t1_ParamLimits

0xa406,	// (0x0001fbfe) main_mup_eq_pane_t1

0xa420,	// (0x0001fc18) main_mup_eq_pane_t2_ParamLimits

0xa420,	// (0x0001fc18) main_mup_eq_pane_t2

0xa438,	// (0x0001fc30) main_mup_eq_pane_t3_ParamLimits

0xa438,	// (0x0001fc30) main_mup_eq_pane_t3

0xa450,	// (0x0001fc48) main_mup_eq_pane_t4_ParamLimits

0xa450,	// (0x0001fc48) main_mup_eq_pane_t4

0xa468,	// (0x0001fc60) main_mup_eq_pane_t5_ParamLimits

0xa468,	// (0x0001fc60) main_mup_eq_pane_t5

0xa480,	// (0x0001fc78) main_mup_eq_pane_t6_ParamLimits

0xa480,	// (0x0001fc78) main_mup_eq_pane_t6

0xa494,	// (0x0001fc8c) main_mup_eq_pane_t7_ParamLimits

0xa494,	// (0x0001fc8c) main_mup_eq_pane_t7

0xa4a8,	// (0x0001fca0) main_mup_eq_pane_t8_ParamLimits

0xa4a8,	// (0x0001fca0) main_mup_eq_pane_t8

0xa4be,	// (0x0001fcb6) main_mup_eq_pane_t9_ParamLimits

0xa4be,	// (0x0001fcb6) main_mup_eq_pane_t9

0xa4d6,	// (0x0001fcce) main_mup_eq_pane_t10_ParamLimits

0xa4d6,	// (0x0001fcce) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00024cb4) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00024cb4) main_mup_eq_pane_t

0xa593,	// (0x0001fd8b) mup_equalizer_pane_cp5_ParamLimits

0xa5a9,	// (0x0001fda1) mup_equalizer_pane_cp6_ParamLimits

0xa5c1,	// (0x0001fdb9) mup_equalizer_pane_cp7_ParamLimits

0x09a8,	// (0x000161a0) main_gallery_pane

0x3492,	// (0x00018c8a) smil2_volume_pane

0x34ad,	// (0x00018ca5) smil_status_volume_pane_g1_ParamLimits

0x349a,	// (0x00018c92) smil_status_volume_pane_g2_ParamLimits

0x7378,	// (0x0001cb70) smil_status_volume_pane_g3_ParamLimits

0xf672,	// (0x00024e6a) smil_status_volume_pane_g_ParamLimits

0x36be,	// (0x00018eb6) bg_popup_window_pane_cp07_ParamLimits

0x36cc,	// (0x00018ec4) blid_firmament_pane

0xb4a1,	// (0x00020c99) aid_size_cell_gallery_ParamLimits

0xb4a1,	// (0x00020c99) aid_size_cell_gallery

0xb4af,	// (0x00020ca7) grid_gallery_pane_ParamLimits

0xb4af,	// (0x00020ca7) grid_gallery_pane

0xb4bf,	// (0x00020cb7) cell_gallery_pane_ParamLimits

0xb4bf,	// (0x00020cb7) cell_gallery_pane

0x37f1,	// (0x00018fe9) bg_cell_gallery_focus_pane_ParamLimits

0x37f1,	// (0x00018fe9) bg_cell_gallery_focus_pane

0x3803,	// (0x00018ffb) cell_gallery_pane_g1_ParamLimits

0x3803,	// (0x00018ffb) cell_gallery_pane_g1

0xb50d,	// (0x00020d05) cell_gallery_pane_g2_ParamLimits

0xb50d,	// (0x00020d05) cell_gallery_pane_g2

0xb51a,	// (0x00020d12) cell_gallery_pane_g3_ParamLimits

0xb51a,	// (0x00020d12) cell_gallery_pane_g3

0x380f,	// (0x00019007) cell_gallery_pane_g4_ParamLimits

0x380f,	// (0x00019007) cell_gallery_pane_g4

0x0003,

0xf720,	// (0x00024f18) cell_gallery_pane_g_ParamLimits

0xf720,	// (0x00024f18) cell_gallery_pane_g

0x381b,	// (0x00019013) bg_cell_gallery_focus_pane_g1

0x3823,	// (0x0001901b) bg_cell_gallery_focus_pane_g2

0x382b,	// (0x00019023) bg_cell_gallery_focus_pane_g3

0x3833,	// (0x0001902b) bg_cell_gallery_focus_pane_g4

0x383b,	// (0x00019033) bg_cell_gallery_focus_pane_g5

0x3843,	// (0x0001903b) bg_cell_gallery_focus_pane_g6

0x384b,	// (0x00019043) bg_cell_gallery_focus_pane_g7

0x3853,	// (0x0001904b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf729,	// (0x00024f21) bg_cell_gallery_focus_pane_g

0x385b,	// (0x00019053) aid_firma_cardinal

0x386f,	// (0x00019067) blid_firmament_pane_t1

0x3886,	// (0x0001907e) blid_firmament_pane_t2

0x389d,	// (0x00019095) blid_firmament_pane_t3

0x38b4,	// (0x000190ac) blid_firmament_pane_t4

0x0003,

0xf73a,	// (0x00024f32) blid_firmament_pane_t

0x38cb,	// (0x000190c3) blid_sat_info_pane

0x38db,	// (0x000190d3) blid_sat_info_pane_g1

0x38db,	// (0x000190d3) blid_sat_info_pane_g2

0x0001,

0xf743,	// (0x00024f3b) blid_sat_info_pane_g

0x38e5,	// (0x000190dd) blid_sat_info_pane_t1

0x38f3,	// (0x000190eb) smil2_volume_content_pane

0x38fc,	// (0x000190f4) smil2_volume_pane_g1

0x3904,	// (0x000190fc) smil2_volume_content_pane_g1

0x390d,	// (0x00019105) smil2_volume_content_pane_g2

0x3916,	// (0x0001910e) smil2_volume_content_pane_g3

0x391f,	// (0x00019117) smil2_volume_content_pane_g4

0x3928,	// (0x00019120) smil2_volume_content_pane_g5

0x3931,	// (0x00019129) smil2_volume_content_pane_g6

0x393a,	// (0x00019132) smil2_volume_content_pane_g7

0x3943,	// (0x0001913b) smil2_volume_content_pane_g8

0x394c,	// (0x00019144) smil2_volume_content_pane_g9

0x3955,	// (0x0001914d) smil2_volume_content_pane_g10

0x0009,

0xf748,	// (0x00024f40) smil2_volume_content_pane_g

0x8b66,	// (0x0001e35e) cale_week_day_heading_pane_t1_ParamLimits

0x8b7a,	// (0x0001e372) cale_week_day_heading_pane_t2_ParamLimits

0x8b8e,	// (0x0001e386) cale_week_day_heading_pane_t3_ParamLimits

0x8ba2,	// (0x0001e39a) cale_week_day_heading_pane_t4_ParamLimits

0x8bb6,	// (0x0001e3ae) cale_week_day_heading_pane_t5_ParamLimits

0x8bca,	// (0x0001e3c2) cale_week_day_heading_pane_t6_ParamLimits

0x8bde,	// (0x0001e3d6) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00024a2c) cale_week_day_heading_pane_t_ParamLimits

0x1399,	// (0x00016b91) bg_cale_side_pane_ParamLimits

0x7101,	// (0x0001c8f9) cale_week_time_pane_t1_ParamLimits

0x7119,	// (0x0001c911) cale_week_time_pane_t2_ParamLimits

0x7131,	// (0x0001c929) cale_week_time_pane_t3_ParamLimits

0x7149,	// (0x0001c941) cale_week_time_pane_t4_ParamLimits

0x7161,	// (0x0001c959) cale_week_time_pane_t5_ParamLimits

0x7179,	// (0x0001c971) cale_week_time_pane_t6_ParamLimits

0x7191,	// (0x0001c989) cale_week_time_pane_t7_ParamLimits

0x71a9,	// (0x0001c9a1) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00024a3b) cale_week_time_pane_t_ParamLimits

0x8bf2,	// (0x0001e3ea) cell_cale_week_pane_g2_ParamLimits

0x1399,	// (0x00016b91) bg_cale_side_pane_cp01_ParamLimits

0x9a99,	// (0x0001f291) cale_month_week_pane_t1_ParamLimits

0x9ab0,	// (0x0001f2a8) cale_month_week_pane_t2_ParamLimits

0x9ac7,	// (0x0001f2bf) cale_month_week_pane_t3_ParamLimits

0x9ade,	// (0x0001f2d6) cale_month_week_pane_t4_ParamLimits

0x9af5,	// (0x0001f2ed) cale_month_week_pane_t5_ParamLimits

0x9b0c,	// (0x0001f304) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00024b14) cale_month_week_pane_t_ParamLimits

0x723b,	// (0x0001ca33) cell_cale_month_pane_g1_ParamLimits

0x09a8,	// (0x000161a0) main_cale_event_viewer_pane

0x09a8,	// (0x000161a0) listscroll_cale_event_viewer_pane

0x395e,	// (0x00019156) list_cale_ev_pane

0x3966,	// (0x0001915e) scroll_pane_cp023

0x3972,	// (0x0001916a) field_cale_ev_pane_ParamLimits

0x3972,	// (0x0001916a) field_cale_ev_pane

0x398c,	// (0x00019184) field_cale_ev_content_pane_ParamLimits

0x398c,	// (0x00019184) field_cale_ev_content_pane

0x3998,	// (0x00019190) field_cale_ev_pane_g1_ParamLimits

0x3998,	// (0x00019190) field_cale_ev_pane_g1

0x39a4,	// (0x0001919c) field_cale_ev_pane_g2_ParamLimits

0x39a4,	// (0x0001919c) field_cale_ev_pane_g2

0x39bc,	// (0x000191b4) field_cale_ev_pane_g3_ParamLimits

0x39bc,	// (0x000191b4) field_cale_ev_pane_g3

0x0002,

0xf75d,	// (0x00024f55) field_cale_ev_pane_g_ParamLimits

0xf75d,	// (0x00024f55) field_cale_ev_pane_g

0x39d4,	// (0x000191cc) field_cale_ev_pane_t1_ParamLimits

0x39d4,	// (0x000191cc) field_cale_ev_pane_t1

0x39eb,	// (0x000191e3) field_cale_ev_content_pane_t1_ParamLimits

0x39eb,	// (0x000191e3) field_cale_ev_content_pane_t1

0x20c5,	// (0x000178bd) bg_button_pane_cp01

0x11c3,	// (0x000169bb) listscroll_cale_week_pane_ParamLimits

0x898f,	// (0x0001e187) popup_toolbar_window_cp01

0x1387,	// (0x00016b7f) listscroll_cale_week_pane_t1_ParamLimits

0x11c3,	// (0x000169bb) listscroll_cale_day_pane_ParamLimits

0x898f,	// (0x0001e187) popup_toolbar_window_cp02

0x1387,	// (0x00016b7f) listscroll_cale_day_pane_t1_ParamLimits

0x11c3,	// (0x000169bb) main_cale_month_pane_ParamLimits

0xaf46,	// (0x0002073e) popup_toolbar_window_cp03_ParamLimits

0xaf46,	// (0x0002073e) popup_toolbar_window_cp03

0xa8bc,	// (0x000200b4) main_image_pane_g2_ParamLimits

0xa8bc,	// (0x000200b4) main_image_pane_g2

0xa8c8,	// (0x000200c0) main_image_pane_g3_ParamLimits

0xa8c8,	// (0x000200c0) main_image_pane_g3

0x0002,

0xf54e,	// (0x00024d46) main_image_pane_g_ParamLimits

0xf54e,	// (0x00024d46) main_image_pane_g

0x2257,	// (0x00017a4f) main_image_pane_t1_ParamLimits

0xa8d4,	// (0x000200cc) main_image_pane_t2_ParamLimits

0xa8d4,	// (0x000200cc) main_image_pane_t2

0xa8e6,	// (0x000200de) main_image_pane_t3_ParamLimits

0xa8e6,	// (0x000200de) main_image_pane_t3

0xa8f8,	// (0x000200f0) main_image_pane_t4_ParamLimits

0xa8f8,	// (0x000200f0) main_image_pane_t4

0x0003,

0xf555,	// (0x00024d4d) main_image_pane_t_ParamLimits

0xf555,	// (0x00024d4d) main_image_pane_t

0xa90a,	// (0x00020102) popup_image_details_window_cp01

0xa914,	// (0x0002010c) popup_toobar_trans_pane_cp01_ParamLimits

0xa914,	// (0x0002010c) popup_toobar_trans_pane_cp01

0xaecb,	// (0x000206c3) popup_image_details_window_ParamLimits

0xaecb,	// (0x000206c3) popup_image_details_window

0x33f3,	// (0x00018beb) popup_image_focus_window

0x739a,	// (0x0001cb92) camera2_autofocus_pane_ParamLimits

0x739a,	// (0x0001cb92) camera2_autofocus_pane

0x09a8,	// (0x000161a0) bg_popup_sub_pane_cp06

0x3a08,	// (0x00019200) popup_image_focus_window_g1

0x3a10,	// (0x00019208) popup_image_focus_window_g2

0x3a18,	// (0x00019210) popup_image_focus_window_g3

0x3a20,	// (0x00019218) popup_image_focus_window_g4

0x0003,

0xf764,	// (0x00024f5c) popup_image_focus_window_g

0x3a28,	// (0x00019220) popup_image_focus_window_t1

0x3a36,	// (0x0001922e) popup_image_focus_window_t2

0x3a46,	// (0x0001923e) popup_image_focus_window_t3

0x0002,

0xf76d,	// (0x00024f65) popup_image_focus_window_t

0x3a54,	// (0x0001924c) camera2_autofocus_pane_g1

0x0a18,	// (0x00016210) bg_tb_trans_pane_cp01

0x3a62,	// (0x0001925a) popup_image_details_window_g1

0x3a75,	// (0x0001926d) popup_image_details_window_g2

0x0002,

0xf77f,	// (0x00024f77) popup_image_details_window_g

0x3a9e,	// (0x00019296) popup_image_details_window_t1

0x3ab0,	// (0x000192a8) popup_image_details_window_t2

0x3ac9,	// (0x000192c1) popup_image_details_window_t3

0x3add,	// (0x000192d5) popup_image_details_window_t4

0x3af8,	// (0x000192f0) popup_image_details_window_t5

0x0004,

0xf786,	// (0x00024f7e) popup_image_details_window_t

0x1195,	// (0x0001698d) bg_calc_paper_pane_ParamLimits

0x6fcc,	// (0x0001c7c4) grid_highlight_pane_cp013

0x6fd6,	// (0x0001c7ce) list_calc_pane_ParamLimits

0x6fe8,	// (0x0001c7e0) scroll_pane_cp024

0x11c3,	// (0x000169bb) bg_calc_display_pane_ParamLimits

0x6ff0,	// (0x0001c7e8) calc_display_pane_t1_ParamLimits

0x7005,	// (0x0001c7fd) calc_display_pane_t2_ParamLimits

0x701a,	// (0x0001c812) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000249ae) calc_display_pane_t_ParamLimits

0x7083,	// (0x0001c87b) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000249cb) cell_calc_pane_g

0x708c,	// (0x0001c884) cell_calc_pane_t1

0x1246,	// (0x00016a3e) grid_highlight_pane_cp02_ParamLimits

0x125c,	// (0x00016a54) toolbar_button_pane_cp01_ParamLimits

0x125c,	// (0x00016a54) toolbar_button_pane_cp01

0x229c,	// (0x00017a94) temp_image_control_pane_ParamLimits

0x229c,	// (0x00017a94) temp_image_control_pane

0x0a18,	// (0x00016210) main_mp3_pane

0x3b12,	// (0x0001930a) temp_image_control_pane_g1_ParamLimits

0x3b12,	// (0x0001930a) temp_image_control_pane_g1

0x3b20,	// (0x00019318) temp_image_control_pane_g2_ParamLimits

0x3b20,	// (0x00019318) temp_image_control_pane_g2

0x3b32,	// (0x0001932a) temp_image_control_pane_g3_ParamLimits

0x3b32,	// (0x0001932a) temp_image_control_pane_g3

0xb557,	// (0x00020d4f) temp_image_control_pane_g4_ParamLimits

0xb557,	// (0x00020d4f) temp_image_control_pane_g4

0x0003,

0xf791,	// (0x00024f89) temp_image_control_pane_g_ParamLimits

0xf791,	// (0x00024f89) temp_image_control_pane_g

0x3b12,	// (0x0001930a) main_mp3_pane_g1

0xb568,	// (0x00020d60) main_mp3_pane_g2

0x0007,

0xf79a,	// (0x00024f92) main_mp3_pane_g

0x3b75,	// (0x0001936d) main_mp3_pane_t1

0x1482,	// (0x00016c7a) main_camera_pane_g8_ParamLimits

0x1482,	// (0x00016c7a) main_camera_pane_g8

0x8e08,	// (0x0001e600) main_video_pane_g7_ParamLimits

0x8e08,	// (0x0001e600) main_video_pane_g7

0x74e2,	// (0x0001ccda) main_camera2_pane_t7_ParamLimits

0x74e2,	// (0x0001ccda) main_camera2_pane_t7

0x168d,	// (0x00016e85) scroll_pane_cp025_ParamLimits

0x168d,	// (0x00016e85) scroll_pane_cp025

0x16a1,	// (0x00016e99) scroll_pane_cp026_ParamLimits

0x16a1,	// (0x00016e99) scroll_pane_cp026

0x16b0,	// (0x00016ea8) wml_content_pane_ParamLimits

0x09a8,	// (0x000161a0) main_touch_calib_pane

0xb60c,	// (0x00020e04) main_touch_calib_pane_g1

0xb618,	// (0x00020e10) main_touch_calib_pane_g2

0xb624,	// (0x00020e1c) main_touch_calib_pane_g3

0xb630,	// (0x00020e28) main_touch_calib_pane_g4

0x0003,

0xf7b8,	// (0x00024fb0) main_touch_calib_pane_g

0xb63c,	// (0x00020e34) main_touch_calib_pane_t1

0xb653,	// (0x00020e4b) main_touch_calib_pane_t2

0x0004,

0xf7c1,	// (0x00024fb9) main_touch_calib_pane_t

0x1e7d,	// (0x00017675) mup_progress_pane_cp02

0x1e9c,	// (0x00017694) navi_pane_g1

0x1efe,	// (0x000176f6) navi_pane_mp_t3

0x0a18,	// (0x00016210) main_mp3_pane_ParamLimits

0xaf84,	// (0x0002077c) navi_pane_ParamLimits

0x3b12,	// (0x0001930a) main_mp3_pane_g1_ParamLimits

0xb568,	// (0x00020d60) main_mp3_pane_g2_ParamLimits

0xb574,	// (0x00020d6c) main_mp3_pane_g3_ParamLimits

0xb574,	// (0x00020d6c) main_mp3_pane_g3

0xb580,	// (0x00020d78) main_mp3_pane_g4_ParamLimits

0xb580,	// (0x00020d78) main_mp3_pane_g4

0x3b42,	// (0x0001933a) main_mp3_pane_g5_ParamLimits

0x3b42,	// (0x0001933a) main_mp3_pane_g5

0x3b50,	// (0x00019348) main_mp3_pane_g6_ParamLimits

0x3b50,	// (0x00019348) main_mp3_pane_g6

0x3b5d,	// (0x00019355) main_mp3_pane_g7_ParamLimits

0x3b5d,	// (0x00019355) main_mp3_pane_g7

0x3b69,	// (0x00019361) main_mp3_pane_g8_ParamLimits

0x3b69,	// (0x00019361) main_mp3_pane_g8

0xf79a,	// (0x00024f92) main_mp3_pane_g_ParamLimits

0xb58c,	// (0x00020d84) main_mp3_pane_t2

0xb59c,	// (0x00020d94) main_mp3_pane_t3

0x3b83,	// (0x0001937b) main_mp3_pane_t4

0x3b91,	// (0x00019389) main_mp3_pane_t5

0x0005,

0xf7ab,	// (0x00024fa3) main_mp3_pane_t

0x3b9f,	// (0x00019397) mup_progress_pane_cp01

0x09c6,	// (0x000161be) aid_zoom_text_secondary2

0x395e,	// (0x00019156) list_cale_ev2_pane

0x3966,	// (0x0001915e) scroll_pane_cp023_ParamLimits

0xb6a6,	// (0x00020e9e) field_cale_ev2_pane_ParamLimits

0xb6a6,	// (0x00020e9e) field_cale_ev2_pane

0xb6da,	// (0x00020ed2) field_cale_ev2_pane_g1_ParamLimits

0xb6da,	// (0x00020ed2) field_cale_ev2_pane_g1

0xb6e6,	// (0x00020ede) field_cale_ev2_pane_g2_ParamLimits

0xb6e6,	// (0x00020ede) field_cale_ev2_pane_g2

0xb6fe,	// (0x00020ef6) field_cale_ev2_pane_g3_ParamLimits

0xb6fe,	// (0x00020ef6) field_cale_ev2_pane_g3

0x0003,

0xf7cc,	// (0x00024fc4) field_cale_ev2_pane_g_ParamLimits

0xf7cc,	// (0x00024fc4) field_cale_ev2_pane_g

0x3bb3,	// (0x000193ab) field_cale_ev2_pane_t1_ParamLimits

0x3bb3,	// (0x000193ab) field_cale_ev2_pane_t1

0x3bca,	// (0x000193c2) field_cale_ev2_pane_t2_ParamLimits

0x3bca,	// (0x000193c2) field_cale_ev2_pane_t2

0x0001,

0xf7d5,	// (0x00024fcd) field_cale_ev2_pane_t_ParamLimits

0xf7d5,	// (0x00024fcd) field_cale_ev2_pane_t

0xa793,	// (0x0001ff8b) main_postcard_pane_g5_ParamLimits

0xa793,	// (0x0001ff8b) main_postcard_pane_g5

0xa7a1,	// (0x0001ff99) main_postcard_pane_g6_ParamLimits

0xa7a1,	// (0x0001ff99) main_postcard_pane_g6

0x8c48,	// (0x0001e440) camera2_autofocus_pane_cp_ParamLimits

0x8c48,	// (0x0001e440) camera2_autofocus_pane_cp

0x0a18,	// (0x00016210) main_mup3_pane

0xb736,	// (0x00020f2e) main_mup3_pane_g1_ParamLimits

0xb736,	// (0x00020f2e) main_mup3_pane_g1

0xb757,	// (0x00020f4f) main_mup3_pane_g2_ParamLimits

0xb757,	// (0x00020f4f) main_mup3_pane_g2

0xb7d2,	// (0x00020fca) main_mup3_pane_g3_ParamLimits

0xb7d2,	// (0x00020fca) main_mup3_pane_g3

0xb811,	// (0x00021009) main_mup3_pane_g4_ParamLimits

0xb811,	// (0x00021009) main_mup3_pane_g4

0xb850,	// (0x00021048) main_mup3_pane_g5_ParamLimits

0xb850,	// (0x00021048) main_mup3_pane_g5

0xb891,	// (0x00021089) main_mup3_pane_g6_ParamLimits

0xb891,	// (0x00021089) main_mup3_pane_g6

0x3bdf,	// (0x000193d7) main_mup3_pane_g7_ParamLimits

0x3bdf,	// (0x000193d7) main_mup3_pane_g7

0x0007,

0xf7e5,	// (0x00024fdd) main_mup3_pane_g_ParamLimits

0xf7e5,	// (0x00024fdd) main_mup3_pane_g

0xb903,	// (0x000210fb) main_mup3_pane_t1_ParamLimits

0xb903,	// (0x000210fb) main_mup3_pane_t1

0xb972,	// (0x0002116a) main_mup3_pane_t2_ParamLimits

0xb972,	// (0x0002116a) main_mup3_pane_t2

0xba3b,	// (0x00021233) main_mup3_pane_t4_ParamLimits

0xba3b,	// (0x00021233) main_mup3_pane_t4

0xba8d,	// (0x00021285) main_mup3_pane_t5_ParamLimits

0xba8d,	// (0x00021285) main_mup3_pane_t5

0xbb35,	// (0x0002132d) main_mup3_pane_t6_ParamLimits

0xbb35,	// (0x0002132d) main_mup3_pane_t6

0x0005,

0xf7f6,	// (0x00024fee) main_mup3_pane_t_ParamLimits

0xf7f6,	// (0x00024fee) main_mup3_pane_t

0xbbdd,	// (0x000213d5) mup3_progress_pane_ParamLimits

0xbbdd,	// (0x000213d5) mup3_progress_pane

0xbc42,	// (0x0002143a) popup_mup3_control_window_ParamLimits

0xbc42,	// (0x0002143a) popup_mup3_control_window

0x3bed,	// (0x000193e5) popup_mup3_text_window

0xbc5b,	// (0x00021453) mup3_progress_pane_t1

0xbc72,	// (0x0002146a) mup3_progress_pane_t2

0x3bf5,	// (0x000193ed) mup3_progress_pane_t3

0x0002,

0xf803,	// (0x00024ffb) mup3_progress_pane_t

0x3c0c,	// (0x00019404) mup_progress_pane_cp03

0x09a8,	// (0x000161a0) bg_tb_trans_pane_cp04

0xbc89,	// (0x00021481) mup3_volume_pane

0xbc91,	// (0x00021489) popup_mup3_control_window_g1

0xbc9a,	// (0x00021492) mup3_volume_pane_g1

0xbca3,	// (0x0002149b) mup3_volume_pane_g2

0xbcac,	// (0x000214a4) mup3_volume_pane_g3

0x0002,

0xf80a,	// (0x00025002) mup3_volume_pane_g

0x09a8,	// (0x000161a0) bg_tb_trans_pane_cp03

0x3c1c,	// (0x00019414) popup_mup3_text_window_g1

0x3c24,	// (0x0001941c) popup_mup3_text_window_t1

0x121d,	// (0x00016a15) list_calc_item_pane_g1_ParamLimits

0x35e8,	// (0x00018de0) mup_volume_pane_cp_g1

0xb66a,	// (0x00020e62) main_touch_calib_pane_t3

0xb67e,	// (0x00020e76) main_touch_calib_pane_t4

0xb692,	// (0x00020e8a) main_touch_calib_pane_t5

0x09b2,	// (0x000161aa) aid_cell_size_toolbar2

0x09ba,	// (0x000161b2) aid_popup3_width_pane

0x09c6,	// (0x000161be) aid_zoom_text_msg_primary

0x7225,	// (0x0001ca1d) vorec_t7

0x11e1,	// (0x000169d9) bg_calc_paper_pane_g1_ParamLimits

0x11f9,	// (0x000169f1) bg_calc_paper_pane_g2_ParamLimits

0x11ed,	// (0x000169e5) bg_calc_paper_pane_g3_ParamLimits

0x1211,	// (0x00016a09) bg_calc_paper_pane_g4_ParamLimits

0x1205,	// (0x000169fd) bg_calc_paper_pane_g5_ParamLimits

0x883a,	// (0x0001e032) bg_calc_paper_pane_g6_ParamLimits

0x884b,	// (0x0001e043) bg_calc_paper_pane_g7_ParamLimits

0x885c,	// (0x0001e054) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x000249b5) bg_calc_paper_pane_g_ParamLimits

0x886d,	// (0x0001e065) calc_bg_paper_pane_g9_ParamLimits

0x8d31,	// (0x0001e529) image_qvga_pane_ParamLimits

0x8d31,	// (0x0001e529) image_qvga_pane

0x1092,	// (0x0001688a) bg_popup_sub_pane_cp04_ParamLimits

0x21d3,	// (0x000179cb) popup_mup_playback_window_g1_ParamLimits

0x21df,	// (0x000179d7) popup_mup_playback_window_t1_ParamLimits

0x21f4,	// (0x000179ec) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00024d41) popup_mup_playback_window_t_ParamLimits

0xb1d6,	// (0x000209ce) main_mup2_pane_g3_ParamLimits

0xb1d6,	// (0x000209ce) main_mup2_pane_g3

0x8fe0,	// (0x0001e7d8) popup_toolbar_window_cp04

0x25e9,	// (0x00017de1) popup_call2_audio_second_window_g3_ParamLimits

0x25e9,	// (0x00017de1) popup_call2_audio_second_window_g3

0x29f3,	// (0x000181eb) popup_call2_audio_first_window_g4_ParamLimits

0x29f3,	// (0x000181eb) popup_call2_audio_first_window_g4

0x3072,	// (0x0001886a) popup_call2_audio_in_window_g4_ParamLimits

0x3072,	// (0x0001886a) popup_call2_audio_in_window_g4

0xa8af,	// (0x000200a7) aid_area_sk_bg_cut_ParamLimits

0xa8af,	// (0x000200a7) aid_area_sk_bg_cut

0x2209,	// (0x00017a01) aid_area_sk_bg_cut_2_ParamLimits

0x2209,	// (0x00017a01) aid_area_sk_bg_cut_2

0xb4fd,	// (0x00020cf5) aid_placing_details_win

0xb505,	// (0x00020cfd) aid_placing_details_win_2

0x3a54,	// (0x0001924c) camera2_autofocus_pane_g1_ParamLimits

0x854b,	// (0x0001dd43) popup_fixed_preview_cale_window_ParamLimits

0x854b,	// (0x0001dd43) popup_fixed_preview_cale_window

0x1f68,	// (0x00017760) navi_slider_pane_g3

0x1f5f,	// (0x00017757) navi_slider_pane_g4

0x1f56,	// (0x0001774e) navi_slider_pane_g5

0x1f68,	// (0x00017760) navi_slider_pane_g6

0x72fd,	// (0x0001caf5) navi_slider_pane_g7

0x2092,	// (0x0001788a) mup_scale_pane_g3

0x209b,	// (0x00017893) mup_scale_pane_g4

0x20a4,	// (0x0001789c) mup_scale_pane_g5

0xa5d9,	// (0x0001fdd1) mup_scale_pane_g6

0xa5e2,	// (0x0001fdda) mup_scale_pane_g7

0x1f68,	// (0x00017760) cams2_slider_pane_g3

0x369d,	// (0x00018e95) cams2_slider_pane_g4

0x7654,	// (0x0001ce4c) cams2_slider_pane_g5

0x1f68,	// (0x00017760) cams2_slider_pane_g6

0x765c,	// (0x0001ce54) cams2_slider_pane_g7

0x38db,	// (0x000190d3) camera2_autofocus_pane_cp_g1

0x3c63,	// (0x0001945b) bg_popup_preview_window_pane_cp02_ParamLimits

0x3c63,	// (0x0001945b) bg_popup_preview_window_pane_cp02

0x3c6f,	// (0x00019467) list_fp_cale_pane_ParamLimits

0x3c6f,	// (0x00019467) list_fp_cale_pane

0x3c7b,	// (0x00019473) popup_fixed_preview_cale_window_t1_ParamLimits

0x3c7b,	// (0x00019473) popup_fixed_preview_cale_window_t1

0xbcb5,	// (0x000214ad) popup_fixed_preview_cale_window_t2_ParamLimits

0xbcb5,	// (0x000214ad) popup_fixed_preview_cale_window_t2

0xbcca,	// (0x000214c2) popup_fixed_preview_cale_window_t3_ParamLimits

0xbcca,	// (0x000214c2) popup_fixed_preview_cale_window_t3

0x0002,

0xf811,	// (0x00025009) popup_fixed_preview_cale_window_t_ParamLimits

0xf811,	// (0x00025009) popup_fixed_preview_cale_window_t

0xbcdf,	// (0x000214d7) list_single_fp_cale_pane_ParamLimits

0xbcdf,	// (0x000214d7) list_single_fp_cale_pane

0x3c99,	// (0x00019491) list_single_fp_cale_pane_g1_ParamLimits

0x3c99,	// (0x00019491) list_single_fp_cale_pane_g1

0x3ca5,	// (0x0001949d) list_single_fp_cale_pane_g2_ParamLimits

0x3ca5,	// (0x0001949d) list_single_fp_cale_pane_g2

0x0002,

0xf818,	// (0x00025010) list_single_fp_cale_pane_g_ParamLimits

0xf818,	// (0x00025010) list_single_fp_cale_pane_g

0x3cbe,	// (0x000194b6) list_single_fp_cale_pane_t1_ParamLimits

0x3cbe,	// (0x000194b6) list_single_fp_cale_pane_t1

0x3cd0,	// (0x000194c8) list_single_fp_cale_pane_t2_ParamLimits

0x3cd0,	// (0x000194c8) list_single_fp_cale_pane_t2

0x0001,

0xf81f,	// (0x00025017) list_single_fp_cale_pane_t_ParamLimits

0xf81f,	// (0x00025017) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x09a8,	// (0x000161a0) main_dialer_pane

0xbcf3,	// (0x000214eb) aid_cell_size_keypad

0xbcfd,	// (0x000214f5) dialer_ne_pane

0xbd07,	// (0x000214ff) grid_dialer_command_1_pane

0xbd0f,	// (0x00021507) grid_dialer_command_2_pane

0xbd17,	// (0x0002150f) grid_dialer_keypad_pane

0xbd2b,	// (0x00021523) bg_popup_call_pane_cp06_ParamLimits

0xbd2b,	// (0x00021523) bg_popup_call_pane_cp06

0xbd37,	// (0x0002152f) dialer_ne_clear_pane_ParamLimits

0xbd37,	// (0x0002152f) dialer_ne_clear_pane

0x3d03,	// (0x000194fb) dialer_ne_pane_g1

0x3d0b,	// (0x00019503) dialer_ne_pane_t1_ParamLimits

0x3d0b,	// (0x00019503) dialer_ne_pane_t1

0xbd43,	// (0x0002153b) dialer_ne_pane_t2_ParamLimits

0xbd43,	// (0x0002153b) dialer_ne_pane_t2

0xbd60,	// (0x00021558) dialer_ne_pane_t3_ParamLimits

0xbd60,	// (0x00021558) dialer_ne_pane_t3

0x0002,

0xf824,	// (0x0002501c) dialer_ne_pane_t_ParamLimits

0xf824,	// (0x0002501c) dialer_ne_pane_t

0xbd84,	// (0x0002157c) dialer_ne_pane_t3_copy1_ParamLimits

0xbd84,	// (0x0002157c) dialer_ne_pane_t3_copy1

0xbda8,	// (0x000215a0) cell_dialer_keypad_pane_ParamLimits

0xbda8,	// (0x000215a0) cell_dialer_keypad_pane

0xbdbf,	// (0x000215b7) cell_dialer_command_1_pane_ParamLimits

0xbdbf,	// (0x000215b7) cell_dialer_command_1_pane

0xbdd5,	// (0x000215cd) cell_dialer_command_2_pane_ParamLimits

0xbdd5,	// (0x000215cd) cell_dialer_command_2_pane

0x3d1d,	// (0x00019515) bg_button_pane_cp02_ParamLimits

0x3d1d,	// (0x00019515) bg_button_pane_cp02

0xbde4,	// (0x000215dc) cell_dialer_keypad_pane_g1_ParamLimits

0xbde4,	// (0x000215dc) cell_dialer_keypad_pane_g1

0x3d1d,	// (0x00019515) bg_button_pane_cp03_ParamLimits

0x3d1d,	// (0x00019515) bg_button_pane_cp03

0xbdf9,	// (0x000215f1) cell_dialer_command_1_pane_g1_ParamLimits

0xbdf9,	// (0x000215f1) cell_dialer_command_1_pane_g1

0x3d29,	// (0x00019521) bg_button_pane_cp04

0xbe0c,	// (0x00021604) cell_dialer_command_2_pane_g1

0x1f3c,	// (0x00017734) bg_button_pane_cp06

0x3d31,	// (0x00019529) dialer_ne_clear_pane_g1

0xa0ef,	// (0x0001f8e7) navi_pane_g2

0xa11d,	// (0x0001f915) navi_pane_g3

0x0002,

0xf44c,	// (0x00024c44) navi_pane_g

0xa148,	// (0x0001f940) navi_pane_mv_g2

0xa16f,	// (0x0001f967) navi_pane_mv_g5

0xa177,	// (0x0001f96f) navi_pane_mv_t1

0x11c3,	// (0x000169bb) main_clock2_pane

0xbe3a,	// (0x00021632) main_clock2_list_pane_ParamLimits

0xbe3a,	// (0x00021632) main_clock2_list_pane

0xbe62,	// (0x0002165a) main_clock2_pane_t1_ParamLimits

0xbe62,	// (0x0002165a) main_clock2_pane_t1

0xbe92,	// (0x0002168a) main_clock2_pane_t2_ParamLimits

0xbe92,	// (0x0002168a) main_clock2_pane_t2

0x0004,

0xf82b,	// (0x00025023) main_clock2_pane_t_ParamLimits

0xf82b,	// (0x00025023) main_clock2_pane_t

0xbef9,	// (0x000216f1) popup_clock_analogue_window_cp03_ParamLimits

0xbef9,	// (0x000216f1) popup_clock_analogue_window_cp03

0xbf19,	// (0x00021711) popup_clock_digital_window_cp02_ParamLimits

0xbf19,	// (0x00021711) popup_clock_digital_window_cp02

0xbf8e,	// (0x00021786) main_clock2_list_single_pane_ParamLimits

0xbf8e,	// (0x00021786) main_clock2_list_single_pane

0x1f3c,	// (0x00017734) list_highlight_pane_cp05

0x3d39,	// (0x00019531) main_clock2_list_single_pane_t1

0x8fe0,	// (0x0001e7d8) popup_toolbar_window_cp04_ParamLimits

0xb527,	// (0x00020d1f) camera2_autofocus_pane_g2_ParamLimits

0xb527,	// (0x00020d1f) camera2_autofocus_pane_g2

0xb533,	// (0x00020d2b) camera2_autofocus_pane_g3_ParamLimits

0xb533,	// (0x00020d2b) camera2_autofocus_pane_g3

0xb53f,	// (0x00020d37) camera2_autofocus_pane_g4_ParamLimits

0xb53f,	// (0x00020d37) camera2_autofocus_pane_g4

0xb54b,	// (0x00020d43) camera2_autofocus_pane_g5_ParamLimits

0xb54b,	// (0x00020d43) camera2_autofocus_pane_g5

0x0004,

0xf774,	// (0x00024f6c) camera2_autofocus_pane_g_ParamLimits

0xf774,	// (0x00024f6c) camera2_autofocus_pane_g

0xb716,	// (0x00020f0e) camera2_autofocus_pane_cp_g2

0xb71e,	// (0x00020f16) camera2_autofocus_pane_cp_g3

0xb726,	// (0x00020f1e) camera2_autofocus_pane_cp_g4

0xb72e,	// (0x00020f26) camera2_autofocus_pane_cp_g5

0x0004,

0xf7da,	// (0x00024fd2) camera2_autofocus_pane_cp_g

0xbd23,	// (0x0002151b) popup_dialer_spcha_window

0x09a8,	// (0x000161a0) bg_popup_sub_pane_cp07

0x3d47,	// (0x0001953f) list_spcha_pane

0x3d4f,	// (0x00019547) list_single_spcha_pane_ParamLimits

0x3d4f,	// (0x00019547) list_single_spcha_pane

0x09a8,	// (0x000161a0) list_highlight_pane_cp06

0x3d60,	// (0x00019558) list_single_spcha_pane_t1

0x2e1c,	// (0x00018614) popup_call2_audio_out_window_g4_ParamLimits

0x2e1c,	// (0x00018614) popup_call2_audio_out_window_g4

0x09a8,	// (0x000161a0) main_imed2_pane

0x33fb,	// (0x00018bf3) popup_imed_adjust2_window

0xaed9,	// (0x000206d1) popup_imed_trans_window_ParamLimits

0xaed9,	// (0x000206d1) popup_imed_trans_window

0x3717,	// (0x00018f0f) popup_blid_sat_info2_window_t1

0x3725,	// (0x00018f1d) popup_blid_sat_info2_window_t2

0x000a,

0xf709,	// (0x00024f01) popup_blid_sat_info2_window_t

0xbfc0,	// (0x000217b8) aid_size_cell_colour_35

0xbfda,	// (0x000217d2) aid_size_cell_colour_112

0xbff1,	// (0x000217e9) aid_size_cell_effect

0x0a18,	// (0x00016210) bg_tb_trans_pane_cp02

0x3c57,	// (0x0001944f) heading_imed_pane

0xc00b,	// (0x00021803) listscroll_imed_pane

0x3d6e,	// (0x00019566) heading_imed_pane_g1

0x3d76,	// (0x0001956e) heading_imed_pane_t1

0x3d84,	// (0x0001957c) grid_imed_colour_35_pane_ParamLimits

0x3d84,	// (0x0001957c) grid_imed_colour_35_pane

0xc017,	// (0x0002180f) grid_imed_effect_pane

0x3d9f,	// (0x00019597) list_imed_aspect_pane

0xc027,	// (0x0002181f) scroll_pane_cp027_ParamLimits

0xc027,	// (0x0002181f) scroll_pane_cp027

0xc033,	// (0x0002182b) cell_imed_effect_pane_ParamLimits

0xc033,	// (0x0002182b) cell_imed_effect_pane

0x3da7,	// (0x0001959f) cell_imed_colour_pane_ParamLimits

0x3da7,	// (0x0001959f) cell_imed_colour_pane

0x3de9,	// (0x000195e1) cell_imed_colour_pane_g1_ParamLimits

0x3de9,	// (0x000195e1) cell_imed_colour_pane_g1

0x3dfa,	// (0x000195f2) hgihlgiht_grid_pane_cp016_ParamLimits

0x3dfa,	// (0x000195f2) hgihlgiht_grid_pane_cp016

0xc04b,	// (0x00021843) cell_imed_effect_pane_g1

0xc053,	// (0x0002184b) grid_highlight_pane_cp017

0x3c40,	// (0x00019438) list_imed_single_pane_ParamLimits

0x3c40,	// (0x00019438) list_imed_single_pane

0x09a8,	// (0x000161a0) list_highlight_pane_cp07

0x3e0b,	// (0x00019603) list_imed_aspect_pane_comp1_t1

0x33d3,	// (0x00018bcb) bg_tb_trans_pane_cp05

0x3e2d,	// (0x00019625) popup_imed_adjust2_window_g1

0x3e54,	// (0x0001964c) popup_imed_adjust2_window_t1

0x3e6c,	// (0x00019664) slider_imed_adjust_pane

0x3e80,	// (0x00019678) slider_imed_adjust_pane_g1

0x3e90,	// (0x00019688) slider_imed_adjust_pane_g2

0x3ea0,	// (0x00019698) slider_imed_adjust_pane_g3

0x3eb1,	// (0x000196a9) slider_imed_adjust_pane_g4

0x0003,

0xf848,	// (0x00025040) slider_imed_adjust_pane_g

0xc05c,	// (0x00021854) aid_size_cell_clipart2

0xc068,	// (0x00021860) grid_imed_clipart_pane

0x3ec2,	// (0x000196ba) scroll_pane_cp031

0xc072,	// (0x0002186a) cell_imed_clipart_pane_ParamLimits

0xc072,	// (0x0002186a) cell_imed_clipart_pane

0xc099,	// (0x00021891) cell_imed_clipart_pane_g1

0x09a8,	// (0x000161a0) grid_highlight_pane_cp014

0xbe46,	// (0x0002163e) main_clock2_pane_g1_ParamLimits

0xbe46,	// (0x0002163e) main_clock2_pane_g1

0xbf35,	// (0x0002172d) aid_call2_pane_cp10

0xbf47,	// (0x0002173f) aid_call_pane_cp10

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g1

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g2

0xbf59,	// (0x00021751) popup_clock_analogue_window_cp10_g3

0xbf59,	// (0x00021751) popup_clock_analogue_window_cp10_g4

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g5

0x0004,

0xf836,	// (0x0002502e) popup_clock_analogue_window_cp10_g

0xbf6f,	// (0x00021767) popup_clock_analogue_window_cp10_t1

0x7665,	// (0x0001ce5d) clock_digital_number_pane_cp10_ParamLimits

0x7665,	// (0x0001ce5d) clock_digital_number_pane_cp10

0x767d,	// (0x0001ce75) clock_digital_number_pane_cp11_ParamLimits

0x767d,	// (0x0001ce75) clock_digital_number_pane_cp11

0x7695,	// (0x0001ce8d) clock_digital_number_pane_cp12_ParamLimits

0x7695,	// (0x0001ce8d) clock_digital_number_pane_cp12

0x76ad,	// (0x0001cea5) clock_digital_number_pane_cp13_ParamLimits

0x76ad,	// (0x0001cea5) clock_digital_number_pane_cp13

0x76c5,	// (0x0001cebd) clock_digital_separator_pane_cp10_ParamLimits

0x76c5,	// (0x0001cebd) clock_digital_separator_pane_cp10

0xbfa0,	// (0x00021798) popup_clock_digital_window_cp02_t1_ParamLimits

0xbfa0,	// (0x00021798) popup_clock_digital_window_cp02_t1

0x108a,	// (0x00016882) clock_digital_number_pane_cp10_g1

0x108a,	// (0x00016882) clock_digital_number_pane_cp10_g2

0x0001,

0xf851,	// (0x00025049) clock_digital_number_pane_cp10_g

0x108a,	// (0x00016882) clock_digital_separator_pane_cp10_g1

0x108a,	// (0x00016882) clock_digital_separator_pane_g2_cp10

0x1f0c,	// (0x00017704) navi_pane_vded_g4

0x1f15,	// (0x0001770d) navi_pane_vded_g5

0x1f1e,	// (0x00017716) navi_pane_vded_t1

0x09a8,	// (0x000161a0) main_vded_pane

0xc0a2,	// (0x0002189a) main_vded_pane_g1

0xc0ae,	// (0x000218a6) main_vded_pane_g2

0xc0b8,	// (0x000218b0) main_vded_pane_g3

0x0002,

0xf856,	// (0x0002504e) main_vded_pane_g

0xc0c2,	// (0x000218ba) main_vded_pane_t1

0xc0d0,	// (0x000218c8) main_vded_pane_t2

0x0001,

0xf85d,	// (0x00025055) main_vded_pane_t

0xc0de,	// (0x000218d6) vded_slider_pane

0xc0e8,	// (0x000218e0) vded_video_pane

0x3eca,	// (0x000196c2) vded_video_pane_g1

0xc0f2,	// (0x000218ea) vded_video_pane_g2

0x38db,	// (0x000190d3) vded_video_pane_g3

0x0002,

0xf862,	// (0x0002505a) vded_video_pane_g

0x3ed4,	// (0x000196cc) vded_slider_pane_g1

0x35e8,	// (0x00018de0) vded_slider_pane_g2

0x3edd,	// (0x000196d5) vded_slider_pane_g3

0x3ee6,	// (0x000196de) vded_slider_pane_g4

0x3eef,	// (0x000196e7) vded_slider_pane_g5

0x0004,

0xf869,	// (0x00025061) vded_slider_pane_g

0xbc34,	// (0x0002142c) mup3_rocker_pane_ParamLimits

0xbc34,	// (0x0002142c) mup3_rocker_pane

0xc0fb,	// (0x000218f3) mup3_control_keys_pane_g1

0xc103,	// (0x000218fb) mup3_control_keys_pane_g2

0xc10b,	// (0x00021903) mup3_control_keys_pane_g3

0xc113,	// (0x0002190b) mup3_control_keys_pane_g4

0x0003,

0xf874,	// (0x0002506c) mup3_control_keys_pane_g

0x8569,	// (0x0001dd61) popup_toolbar2_fixed_window_cp01_ParamLimits

0x8569,	// (0x0001dd61) popup_toolbar2_fixed_window_cp01

0xbc4e,	// (0x00021446) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbc4e,	// (0x00021446) popup_toolbar2_fixed_window_cp02

0x275b,	// (0x00017f53) popup_call2_audio_second_window_t4_ParamLimits

0x275b,	// (0x00017f53) popup_call2_audio_second_window_t4

0x2c89,	// (0x00018481) popup_call2_audio_first_window_t6_ParamLimits

0x2c89,	// (0x00018481) popup_call2_audio_first_window_t6

0x2f1f,	// (0x00018717) popup_call2_audio_out_window_t6_ParamLimits

0x2f1f,	// (0x00018717) popup_call2_audio_out_window_t6

0x09a8,	// (0x000161a0) main_vitu_pane

0xc123,	// (0x0002191b) aid_size_cell_itu_ParamLimits

0xc123,	// (0x0002191b) aid_size_cell_itu

0x3c32,	// (0x0001942a) bg_popup_window_pane_cp08_ParamLimits

0x3c32,	// (0x0001942a) bg_popup_window_pane_cp08

0xc131,	// (0x00021929) field_vitu_entry_pane_ParamLimits

0xc131,	// (0x00021929) field_vitu_entry_pane

0xc140,	// (0x00021938) grid_vitu_function_pane_ParamLimits

0xc140,	// (0x00021938) grid_vitu_function_pane

0xc150,	// (0x00021948) grid_vitu_itu_pane_ParamLimits

0xc150,	// (0x00021948) grid_vitu_itu_pane

0xc160,	// (0x00021958) cell_vitu_itu_pane_ParamLimits

0xc160,	// (0x00021958) cell_vitu_itu_pane

0xc175,	// (0x0002196d) cell_vitu_function_pane_ParamLimits

0xc175,	// (0x0002196d) cell_vitu_function_pane

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp08_ParamLimits

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp08

0xc189,	// (0x00021981) field_vitu_entry_pane_t1_ParamLimits

0xc189,	// (0x00021981) field_vitu_entry_pane_t1

0x3f10,	// (0x00019708) field_vitu_entry_pane_t2_ParamLimits

0x3f10,	// (0x00019708) field_vitu_entry_pane_t2

0x0001,

0xf882,	// (0x0002507a) field_vitu_entry_pane_t_ParamLimits

0xf882,	// (0x0002507a) field_vitu_entry_pane_t

0x3f2d,	// (0x00019725) bg_button_pane_cp05_ParamLimits

0x3f2d,	// (0x00019725) bg_button_pane_cp05

0xc1a6,	// (0x0002199e) cell_vitu_itu_pane_g1

0xc1be,	// (0x000219b6) cell_vitu_itu_pane_t1_ParamLimits

0xc1be,	// (0x000219b6) cell_vitu_itu_pane_t1

0xc1d0,	// (0x000219c8) cell_vitu_itu_pane_t2_ParamLimits

0xc1d0,	// (0x000219c8) cell_vitu_itu_pane_t2

0x0002,

0xf887,	// (0x0002507f) cell_vitu_itu_pane_t_ParamLimits

0xf887,	// (0x0002507f) cell_vitu_itu_pane_t

0x3f3b,	// (0x00019733) bg_button_pane_cp07

0xc205,	// (0x000219fd) cell_vitu_function_pane_g1

0x6fc4,	// (0x0001c7bc) main_calc_pane_g1

0x836c,	// (0x0001db64) aid_visual_content_pane

0x09a8,	// (0x000161a0) main_vradio_pane

0xc20e,	// (0x00021a06) main_vradio_pane_g1_ParamLimits

0xc20e,	// (0x00021a06) main_vradio_pane_g1

0x3f45,	// (0x0001973d) main_vradio_pane_g2_ParamLimits

0x3f45,	// (0x0001973d) main_vradio_pane_g2

0x0001,

0xf88e,	// (0x00025086) main_vradio_pane_g_ParamLimits

0xf88e,	// (0x00025086) main_vradio_pane_g

0xc21e,	// (0x00021a16) main_vradio_pane_t1_ParamLimits

0xc21e,	// (0x00021a16) main_vradio_pane_t1

0xc230,	// (0x00021a28) main_vradio_pane_t2_ParamLimits

0xc230,	// (0x00021a28) main_vradio_pane_t2

0x3f52,	// (0x0001974a) main_vradio_pane_t3_ParamLimits

0x3f52,	// (0x0001974a) main_vradio_pane_t3

0x0002,

0xf893,	// (0x0002508b) main_vradio_pane_t_ParamLimits

0xf893,	// (0x0002508b) main_vradio_pane_t

0xc242,	// (0x00021a3a) vradio_rocker_control_pane_ParamLimits

0xc242,	// (0x00021a3a) vradio_rocker_control_pane

0xc24e,	// (0x00021a46) vradio_station_info_pane_ParamLimits

0xc24e,	// (0x00021a46) vradio_station_info_pane

0x3f66,	// (0x0001975e) vradio_frequency_info_pane_ParamLimits

0x3f66,	// (0x0001975e) vradio_frequency_info_pane

0x38db,	// (0x000190d3) vradio_station_info_pane_g1

0x3f75,	// (0x0001976d) vradio_station_info_pane_t1_ParamLimits

0x3f75,	// (0x0001976d) vradio_station_info_pane_t1

0x3f97,	// (0x0001978f) vradio_station_info_pane_t2_ParamLimits

0x3f97,	// (0x0001978f) vradio_station_info_pane_t2

0x0001,

0xf89a,	// (0x00025092) vradio_station_info_pane_t_ParamLimits

0xf89a,	// (0x00025092) vradio_station_info_pane_t

0x3fa9,	// (0x000197a1) vradio_tuning_pane

0x3fb1,	// (0x000197a9) vradio_rocker_control_pane_g1

0x3fb9,	// (0x000197b1) vradio_rocker_control_pane_g2

0x3fc1,	// (0x000197b9) vradio_rocker_control_pane_g3

0x3fc9,	// (0x000197c1) vradio_rocker_control_pane_g4

0x3fd1,	// (0x000197c9) vradio_rocker_control_pane_g5

0x0004,

0xf89f,	// (0x00025097) vradio_rocker_control_pane_g

0xc25d,	// (0x00021a55) vradio_frequency_info_pane_g1

0x3fd9,	// (0x000197d1) vradio_frequency_info_pane_t1_ParamLimits

0x3fd9,	// (0x000197d1) vradio_frequency_info_pane_t1

0xc267,	// (0x00021a5f) vradio_tuning_pane_g1

0xc270,	// (0x00021a68) vradio_tuning_pane_t1

0x09d6,	// (0x000161ce) area_side_right_pane_ParamLimits

0x09d6,	// (0x000161ce) area_side_right_pane

0x339a,	// (0x00018b92) status_small_pane_g1

0x33a2,	// (0x00018b9a) status_small_pane_g2

0x33ab,	// (0x00018ba3) status_small_pane_g3

0x33b4,	// (0x00018bac) status_small_pane_g4

0x0003,

0xf65f,	// (0x00024e57) status_small_pane_g

0x33bd,	// (0x00018bb5) status_small_pane_t1

0x09a8,	// (0x000161a0) main_video3_pane

0x3fed,	// (0x000197e5) cams_zoom_vslider_pane

0x3ff5,	// (0x000197ed) image3_wide_pane_ParamLimits

0x3ff5,	// (0x000197ed) image3_wide_pane

0x400f,	// (0x00019807) image3_wide_small_pane

0x401b,	// (0x00019813) main_video3_pane_g1_ParamLimits

0x401b,	// (0x00019813) main_video3_pane_g1

0x4037,	// (0x0001982f) main_video3_pane_g2_ParamLimits

0x4037,	// (0x0001982f) main_video3_pane_g2

0x0001,

0xf8aa,	// (0x000250a2) main_video3_pane_g_ParamLimits

0xf8aa,	// (0x000250a2) main_video3_pane_g

0x4053,	// (0x0001984b) main_video3_pane_t1_ParamLimits

0x4053,	// (0x0001984b) main_video3_pane_t1

0x407e,	// (0x00019876) main_video3_pane_t2_ParamLimits

0x407e,	// (0x00019876) main_video3_pane_t2

0x40a9,	// (0x000198a1) main_video3_pane_t3_ParamLimits

0x40a9,	// (0x000198a1) main_video3_pane_t3

0x0002,

0xf8af,	// (0x000250a7) main_video3_pane_t_ParamLimits

0xf8af,	// (0x000250a7) main_video3_pane_t

0x40d6,	// (0x000198ce) cams_zoom_vslider_pane_g1

0x40df,	// (0x000198d7) cams_zoom_vslider_pane_g2

0x0001,

0xf8b6,	// (0x000250ae) cams_zoom_vslider_pane_g

0x40e7,	// (0x000198df) small_slider_vertical_pane

0x38db,	// (0x000190d3) small_slider_vertical_pane_g1

0x38db,	// (0x000190d3) small_slider_vertical_pane_g2

0x40ef,	// (0x000198e7) small_slider_vertical_pane_g3

0x0002,

0xf8bb,	// (0x000250b3) small_slider_vertical_pane_g

0x09a8,	// (0x000161a0) main_hwr_training_pane

0x40f8,	// (0x000198f0) hwr_training_instruct_pane_ParamLimits

0x40f8,	// (0x000198f0) hwr_training_instruct_pane

0xc27f,	// (0x00021a77) hwr_training_navi_pane_ParamLimits

0xc27f,	// (0x00021a77) hwr_training_navi_pane

0xc299,	// (0x00021a91) hwr_training_write_pane_ParamLimits

0xc299,	// (0x00021a91) hwr_training_write_pane

0x09a8,	// (0x000161a0) bg_frame_shadow_pane

0x412f,	// (0x00019927) hwr_training_write_pane_g1

0x4137,	// (0x0001992f) hwr_training_write_pane_g2

0x413f,	// (0x00019937) hwr_training_write_pane_g3

0x4147,	// (0x0001993f) hwr_training_write_pane_g4

0x414f,	// (0x00019947) hwr_training_write_pane_g5

0x4157,	// (0x0001994f) hwr_training_write_pane_g6

0x415f,	// (0x00019957) hwr_training_write_pane_g7

0x0006,

0xf8c2,	// (0x000250ba) hwr_training_write_pane_g

0x76dd,	// (0x0001ced5) hwr_training_navi_pane_g1_ParamLimits

0x76dd,	// (0x0001ced5) hwr_training_navi_pane_g1

0x76ef,	// (0x0001cee7) hwr_training_navi_pane_g2_ParamLimits

0x76ef,	// (0x0001cee7) hwr_training_navi_pane_g2

0x7701,	// (0x0001cef9) hwr_training_navi_pane_g3_ParamLimits

0x7701,	// (0x0001cef9) hwr_training_navi_pane_g3

0x7711,	// (0x0001cf09) hwr_training_navi_pane_g4_ParamLimits

0x7711,	// (0x0001cf09) hwr_training_navi_pane_g4

0x0004,

0xf8d1,	// (0x000250c9) hwr_training_navi_pane_g_ParamLimits

0xf8d1,	// (0x000250c9) hwr_training_navi_pane_g

0x772b,	// (0x0001cf23) hwr_training_navi_pane_t1

0xc2d1,	// (0x00021ac9) list_single_hwr_training_instruct_pane_ParamLimits

0xc2d1,	// (0x00021ac9) list_single_hwr_training_instruct_pane

0x41b6,	// (0x000199ae) list_single_hwr_training_instruct_pane_t1

0x381b,	// (0x00019013) bg_frame_shadow_pane_g1

0x41c5,	// (0x000199bd) bg_frame_shadow_pane_g2

0x41cd,	// (0x000199c5) bg_frame_shadow_pane_g3

0x41d5,	// (0x000199cd) bg_frame_shadow_pane_g4

0x41dd,	// (0x000199d5) bg_frame_shadow_pane_g5

0x41e5,	// (0x000199dd) bg_frame_shadow_pane_g6

0x41ed,	// (0x000199e5) bg_frame_shadow_pane_g7

0x12bc,	// (0x00016ab4) bg_frame_shadow_pane_g8

0x0007,

0xf8dc,	// (0x000250d4) bg_frame_shadow_pane_g

0x09a8,	// (0x000161a0) main_video_tele_dialer_pane

0x7739,	// (0x0001cf31) aid_size_cell_video_keypad_ParamLimits

0x7739,	// (0x0001cf31) aid_size_cell_video_keypad

0x7749,	// (0x0001cf41) grid_video_dialer_keypad_pane_ParamLimits

0x7749,	// (0x0001cf41) grid_video_dialer_keypad_pane

0x7759,	// (0x0001cf51) video_down_pane_cp_ParamLimits

0x7759,	// (0x0001cf51) video_down_pane_cp

0x7767,	// (0x0001cf5f) cell_video_dialer_keypad_pane_ParamLimits

0x7767,	// (0x0001cf5f) cell_video_dialer_keypad_pane

0x41f5,	// (0x000199ed) bg_button_pane_cp08_ParamLimits

0x41f5,	// (0x000199ed) bg_button_pane_cp08

0xc347,	// (0x00021b3f) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc347,	// (0x00021b3f) cell_video_dialer_keypad_pane_g1

0xbc28,	// (0x00021420) mup3_rocker2_pane_ParamLimits

0xbc28,	// (0x00021420) mup3_rocker2_pane

0x38db,	// (0x000190d3) mup3_rocker2_pane_g1

0xae67,	// (0x0002065f) main_dialer2_pane

0x09a8,	// (0x000161a0) main_mp4_pane

0x7784,	// (0x0001cf7c) main_mp4_pane_g1_ParamLimits

0x7784,	// (0x0001cf7c) main_mp4_pane_g1

0x7792,	// (0x0001cf8a) main_mp4_pane_g2_ParamLimits

0x7792,	// (0x0001cf8a) main_mp4_pane_g2

0x77a0,	// (0x0001cf98) main_mp4_pane_g3_ParamLimits

0x77a0,	// (0x0001cf98) main_mp4_pane_g3

0x77e5,	// (0x0001cfdd) main_mp4_pane_g4_ParamLimits

0x77e5,	// (0x0001cfdd) main_mp4_pane_g4

0x77ff,	// (0x0001cff7) main_mp4_pane_g5_ParamLimits

0x77ff,	// (0x0001cff7) main_mp4_pane_g5

0x0005,

0xf8fc,	// (0x000250f4) main_mp4_pane_g_ParamLimits

0xf8fc,	// (0x000250f4) main_mp4_pane_g

0x7833,	// (0x0001d02b) main_mp4_pane_t1_ParamLimits

0x7833,	// (0x0001d02b) main_mp4_pane_t1

0x788f,	// (0x0001d087) main_mp4_pane_t2_ParamLimits

0x788f,	// (0x0001d087) main_mp4_pane_t2

0x4313,	// (0x00019b0b) main_mp4_pane_t3_ParamLimits

0x4313,	// (0x00019b0b) main_mp4_pane_t3

0x78e1,	// (0x0001d0d9) main_mp4_pane_t4_ParamLimits

0x78e1,	// (0x0001d0d9) main_mp4_pane_t4

0x0003,

0xf909,	// (0x00025101) main_mp4_pane_t_ParamLimits

0xf909,	// (0x00025101) main_mp4_pane_t

0x7925,	// (0x0001d11d) mp4_progress_pane_ParamLimits

0x7925,	// (0x0001d11d) mp4_progress_pane

0x796f,	// (0x0001d167) mp4_rocker_pane_ParamLimits

0x796f,	// (0x0001d167) mp4_rocker_pane

0x43e9,	// (0x00019be1) mp4_progress_pane_t1

0x4402,	// (0x00019bfa) mp4_progress_pane_t2

0x0001,

0xf912,	// (0x0002510a) mp4_progress_pane_t

0x441b,	// (0x00019c13) mup_progress_pane_cp04

0x4e2b,	// (0x0001a623) mp4_rocker_pane_g1

0x798f,	// (0x0001d187) aid_cell_size_keypad2_ParamLimits

0x798f,	// (0x0001d187) aid_cell_size_keypad2

0x799f,	// (0x0001d197) dialer2_ne_pane_ParamLimits

0x799f,	// (0x0001d197) dialer2_ne_pane

0x79ad,	// (0x0001d1a5) grid_dialer2_keypad_pane_ParamLimits

0x79ad,	// (0x0001d1a5) grid_dialer2_keypad_pane

0x4e94,	// (0x0001a68c) bg_popup_call_pane_cp07_ParamLimits

0x4e94,	// (0x0001a68c) bg_popup_call_pane_cp07

0xc37e,	// (0x00021b76) dialer2_ne_pane_t1_ParamLimits

0xc37e,	// (0x00021b76) dialer2_ne_pane_t1

0x79bd,	// (0x0001d1b5) cell_dialer2_keypad_pane_ParamLimits

0x79bd,	// (0x0001d1b5) cell_dialer2_keypad_pane

0x4439,	// (0x00019c31) bg_button_pane_pane_cp04_ParamLimits

0x4439,	// (0x00019c31) bg_button_pane_pane_cp04

0xc3a3,	// (0x00021b9b) cell_dialer2_keypad_pane_g1_ParamLimits

0xc3a3,	// (0x00021b9b) cell_dialer2_keypad_pane_g1

0x8f09,	// (0x0001e701) aid_placing_vt_set_content_ParamLimits

0x8f09,	// (0x0001e701) aid_placing_vt_set_content

0x8f29,	// (0x0001e721) aid_placing_vt_set_title_ParamLimits

0x8f29,	// (0x0001e721) aid_placing_vt_set_title

0x09a8,	// (0x000161a0) main_image3_pane

0x7a06,	// (0x0001d1fe) area_side_right_pane_cp01_ParamLimits

0x7a06,	// (0x0001d1fe) area_side_right_pane_cp01

0x7a33,	// (0x0001d22b) main_image3_pane_g1_ParamLimits

0x7a33,	// (0x0001d22b) main_image3_pane_g1

0x7a41,	// (0x0001d239) main_image3_pane_g2_ParamLimits

0x7a41,	// (0x0001d239) main_image3_pane_g2

0x7a5a,	// (0x0001d252) main_image3_pane_g3_ParamLimits

0x7a5a,	// (0x0001d252) main_image3_pane_g3

0x7a73,	// (0x0001d26b) main_image3_pane_g4_ParamLimits

0x7a73,	// (0x0001d26b) main_image3_pane_g4

0x0003,

0xf921,	// (0x00025119) main_image3_pane_g_ParamLimits

0xf921,	// (0x00025119) main_image3_pane_g

0x7a8c,	// (0x0001d284) main_image3_pane_t1_ParamLimits

0x7a8c,	// (0x0001d284) main_image3_pane_t1

0x7ab1,	// (0x0001d2a9) main_image3_pane_t2_ParamLimits

0x7ab1,	// (0x0001d2a9) main_image3_pane_t2

0x7ad0,	// (0x0001d2c8) main_image3_pane_t3_ParamLimits

0x7ad0,	// (0x0001d2c8) main_image3_pane_t3

0x0003,

0xf92a,	// (0x00025122) main_image3_pane_t_ParamLimits

0xf92a,	// (0x00025122) main_image3_pane_t

0x3c32,	// (0x0001942a) grid_sctrl_middle_pane_cp01_ParamLimits

0x3c32,	// (0x0001942a) grid_sctrl_middle_pane_cp01

0xc40b,	// (0x00021c03) cell_sctrl_middle_pane_cp01_ParamLimits

0xc40b,	// (0x00021c03) cell_sctrl_middle_pane_cp01

0xc41c,	// (0x00021c14) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc41c,	// (0x00021c14) cell_sctrl_middle_pane_cp01_g1

0x09a8,	// (0x000161a0) main_call4_pane

0xc429,	// (0x00021c21) aid_size_button_call4_ParamLimits

0xc429,	// (0x00021c21) aid_size_button_call4

0xc459,	// (0x00021c51) call4_windows_pane_ParamLimits

0xc459,	// (0x00021c51) call4_windows_pane

0xc473,	// (0x00021c6b) grid_call4_button_pane_ParamLimits

0xc473,	// (0x00021c6b) grid_call4_button_pane

0x4477,	// (0x00019c6f) call4_windows_conf_pane

0x448c,	// (0x00019c84) popup_call4_audio_first_window_ParamLimits

0x448c,	// (0x00019c84) popup_call4_audio_first_window

0x44d8,	// (0x00019cd0) popup_call4_audio_second_window_ParamLimits

0x44d8,	// (0x00019cd0) popup_call4_audio_second_window

0x44ec,	// (0x00019ce4) popup_call4_audio_wait_window_ParamLimits

0x44ec,	// (0x00019ce4) popup_call4_audio_wait_window

0xc497,	// (0x00021c8f) cell_call4_button_pane_ParamLimits

0xc497,	// (0x00021c8f) cell_call4_button_pane

0xc4bc,	// (0x00021cb4) bg_button_pane_cp09_ParamLimits

0xc4bc,	// (0x00021cb4) bg_button_pane_cp09

0xc4c8,	// (0x00021cc0) cell_call4_button_pane_g1_ParamLimits

0xc4c8,	// (0x00021cc0) cell_call4_button_pane_g1

0xc4d5,	// (0x00021ccd) cell_call4_button_pane_t1_ParamLimits

0xc4d5,	// (0x00021ccd) cell_call4_button_pane_t1

0x4534,	// (0x00019d2c) popup_call4_audio_conf_window_ParamLimits

0x4534,	// (0x00019d2c) popup_call4_audio_conf_window

0xbc5b,	// (0x00021453) mup3_progress_pane_t1_ParamLimits

0xbc72,	// (0x0002146a) mup3_progress_pane_t2_ParamLimits

0x3bf5,	// (0x000193ed) mup3_progress_pane_t3_ParamLimits

0xf803,	// (0x00024ffb) mup3_progress_pane_t_ParamLimits

0x3c0c,	// (0x00019404) mup_progress_pane_cp03_ParamLimits

0xc11b,	// (0x00021913) mup3_control_keys_pane_g4_copy1

0x7953,	// (0x0001d14b) mp4_rocker2_pane_ParamLimits

0x7953,	// (0x0001d14b) mp4_rocker2_pane

0x4550,	// (0x00019d48) mp4_rocker2_pane_g1

0x4548,	// (0x00019d40) mp4_rocker2_pane_g2

0x7b31,	// (0x0001d329) mp4_rocker2_pane_g3

0x7b39,	// (0x0001d331) mp4_rocker2_pane_g4

0x7b41,	// (0x0001d339) mp4_rocker2_pane_g5

0x0004,

0xf933,	// (0x0002512b) mp4_rocker2_pane_g

0x09a8,	// (0x000161a0) main_camera4_pane

0x09a8,	// (0x000161a0) main_video4_pane

0xc307,	// (0x00021aff) main_video_tele_dialer_pane_t1_ParamLimits

0xc307,	// (0x00021aff) main_video_tele_dialer_pane_t1

0xc319,	// (0x00021b11) main_video_tele_dialer_pane_t2_ParamLimits

0xc319,	// (0x00021b11) main_video_tele_dialer_pane_t2

0x0001,

0xf8ed,	// (0x000250e5) main_video_tele_dialer_pane_t_ParamLimits

0xf8ed,	// (0x000250e5) main_video_tele_dialer_pane_t

0x7b61,	// (0x0001d359) cam4_autofocus_pane_ParamLimits

0x7b61,	// (0x0001d359) cam4_autofocus_pane

0x7b6f,	// (0x0001d367) cam4_image_uncrop_pane_ParamLimits

0x7b6f,	// (0x0001d367) cam4_image_uncrop_pane

0x7b86,	// (0x0001d37e) cam4_indicators_pane_ParamLimits

0x7b86,	// (0x0001d37e) cam4_indicators_pane

0x7ba2,	// (0x0001d39a) main_camera4_pane_g1_ParamLimits

0x7ba2,	// (0x0001d39a) main_camera4_pane_g1

0x7bae,	// (0x0001d3a6) main_camera4_pane_g2_ParamLimits

0x7bae,	// (0x0001d3a6) main_camera4_pane_g2

0x7bba,	// (0x0001d3b2) main_camera4_pane_g3_ParamLimits

0x7bba,	// (0x0001d3b2) main_camera4_pane_g3

0x7bc6,	// (0x0001d3be) main_camera4_pane_g4_ParamLimits

0x7bc6,	// (0x0001d3be) main_camera4_pane_g4

0x7bd2,	// (0x0001d3ca) main_camera4_pane_g5_ParamLimits

0x7bd2,	// (0x0001d3ca) main_camera4_pane_g5

0x0005,

0xf93e,	// (0x00025136) main_camera4_pane_g_ParamLimits

0xf93e,	// (0x00025136) main_camera4_pane_g

0x7bec,	// (0x0001d3e4) main_camera4_pane_t1_ParamLimits

0x7bec,	// (0x0001d3e4) main_camera4_pane_t1

0x7c10,	// (0x0001d408) bg_tb_trans_pane_cp06

0x7c26,	// (0x0001d41e) cam4_indicators_pane_g1

0x7c33,	// (0x0001d42b) cam4_indicators_pane_g2

0x0002,

0xf950,	// (0x00025148) cam4_indicators_pane_g

0x7c53,	// (0x0001d44b) cam4_indicators_pane_t1

0x7c7d,	// (0x0001d475) main_video4_pane_g1_ParamLimits

0x7c7d,	// (0x0001d475) main_video4_pane_g1

0x7c89,	// (0x0001d481) main_video4_pane_g2_ParamLimits

0x7c89,	// (0x0001d481) main_video4_pane_g2

0x7c95,	// (0x0001d48d) main_video4_pane_g3_ParamLimits

0x7c95,	// (0x0001d48d) main_video4_pane_g3

0x7ca1,	// (0x0001d499) main_video4_pane_g4_ParamLimits

0x7ca1,	// (0x0001d499) main_video4_pane_g4

0x0004,

0xf957,	// (0x0002514f) main_video4_pane_g_ParamLimits

0xf957,	// (0x0002514f) main_video4_pane_g

0x7cc1,	// (0x0001d4b9) vid4_indicators_pane_ParamLimits

0x7cc1,	// (0x0001d4b9) vid4_indicators_pane

0x7cdf,	// (0x0001d4d7) video4_image_uncrop_cif_pane_ParamLimits

0x7cdf,	// (0x0001d4d7) video4_image_uncrop_cif_pane

0x7cee,	// (0x0001d4e6) video4_image_uncrop_nhd_pane_ParamLimits

0x7cee,	// (0x0001d4e6) video4_image_uncrop_nhd_pane

0x7b6f,	// (0x0001d367) video4_image_uncrop_vga_pane_ParamLimits

0x7b6f,	// (0x0001d367) video4_image_uncrop_vga_pane

0x7cfb,	// (0x0001d4f3) bg_tb_trans_pane_cp07

0x7c26,	// (0x0001d41e) vid4_indicators_pane_g1

0x7d11,	// (0x0001d509) vid4_indicators_pane_g2

0x7d1e,	// (0x0001d516) vid4_indicators_pane_g3

0x0004,

0xf962,	// (0x0002515a) vid4_indicators_pane_g

0x7d4b,	// (0x0001d543) vid4_indicators_pane_t1

0xc4e7,	// (0x00021cdf) cam4_autofocus_pane_g1

0xc4ef,	// (0x00021ce7) cam4_autofocus_pane_g2

0xc4f7,	// (0x00021cef) cam4_autofocus_pane_g3

0x0002,

0xf96d,	// (0x00025165) cam4_autofocus_pane_g

0xc4ff,	// (0x00021cf7) cam4_autofocus_pane_g3_copy1

0xc32b,	// (0x00021b23) video_down_pane_cp_t1

0xc339,	// (0x00021b31) video_down_pane_cp_t2

0x0001,

0xf8f2,	// (0x000250ea) video_down_pane_cp_t

0x3c32,	// (0x0001942a) popup_vitu2_window_ParamLimits

0x3c32,	// (0x0001942a) popup_vitu2_window

0x7d65,	// (0x0001d55d) aid_size_cell2_itu2_ParamLimits

0x7d65,	// (0x0001d55d) aid_size_cell2_itu2

0x7d87,	// (0x0001d57f) aid_size_cell_itu2_ParamLimits

0x7d87,	// (0x0001d57f) aid_size_cell_itu2

0x7dcb,	// (0x0001d5c3) bg_popup_window_pane_cp09_ParamLimits

0x7dcb,	// (0x0001d5c3) bg_popup_window_pane_cp09

0x7dd9,	// (0x0001d5d1) field_vitu2_entry_pane_ParamLimits

0x7dd9,	// (0x0001d5d1) field_vitu2_entry_pane

0x7df9,	// (0x0001d5f1) grid_vitu2_function_pane_ParamLimits

0x7df9,	// (0x0001d5f1) grid_vitu2_function_pane

0x7e3d,	// (0x0001d635) grid_vitu2_itu_pane_ParamLimits

0x7e3d,	// (0x0001d635) grid_vitu2_itu_pane

0x7eb3,	// (0x0001d6ab) cell_vitu2_itu_pane_ParamLimits

0x7eb3,	// (0x0001d6ab) cell_vitu2_itu_pane

0x7ec8,	// (0x0001d6c0) cell_vitu2_function_pane_ParamLimits

0x7ec8,	// (0x0001d6c0) cell_vitu2_function_pane

0x4598,	// (0x00019d90) bg_popup_call_pane_cp08_ParamLimits

0x4598,	// (0x00019d90) bg_popup_call_pane_cp08

0x45b1,	// (0x00019da9) field_vitu2_entry_pane_g1

0x45bd,	// (0x00019db5) field_vitu2_entry_pane_g2

0x0002,

0xf974,	// (0x0002516c) field_vitu2_entry_pane_g

0x45d7,	// (0x00019dcf) field_vitu2_entry_pane_t1_ParamLimits

0x45d7,	// (0x00019dcf) field_vitu2_entry_pane_t1

0x45f6,	// (0x00019dee) field_vitu2_entry_pane_t2_ParamLimits

0x45f6,	// (0x00019dee) field_vitu2_entry_pane_t2

0x0001,

0xf97b,	// (0x00025173) field_vitu2_entry_pane_t_ParamLimits

0xf97b,	// (0x00025173) field_vitu2_entry_pane_t

0x7f09,	// (0x0001d701) bg_button_pane_cp010_ParamLimits

0x7f09,	// (0x0001d701) bg_button_pane_cp010

0x7f17,	// (0x0001d70f) cell_vitu2_itu_pane_g1

0x7f35,	// (0x0001d72d) cell_vitu2_itu_pane_t1_ParamLimits

0x7f35,	// (0x0001d72d) cell_vitu2_itu_pane_t1

0x7f87,	// (0x0001d77f) cell_vitu2_itu_pane_t2_ParamLimits

0x7f87,	// (0x0001d77f) cell_vitu2_itu_pane_t2

0x0002,

0xf985,	// (0x0002517d) cell_vitu2_itu_pane_t_ParamLimits

0xf985,	// (0x0002517d) cell_vitu2_itu_pane_t

0x7cfb,	// (0x0001d4f3) bg_button_pane_cp011

0x8042,	// (0x0001d83a) cell_vitu2_function_pane_g1

0x09a8,	// (0x000161a0) main_myfav_hc_pane

0x7b12,	// (0x0001d30a) popup_image3_note_pane_ParamLimits

0x7b12,	// (0x0001d30a) popup_image3_note_pane

0x7b20,	// (0x0001d318) popup_image3_tool_bar_pane_ParamLimits

0x7b20,	// (0x0001d318) popup_image3_tool_bar_pane

0x7ff5,	// (0x0001d7ed) cell_vitu2_itu_pane_t3_ParamLimits

0x7ff5,	// (0x0001d7ed) cell_vitu2_itu_pane_t3

0x09a8,	// (0x000161a0) bg_popup_trans_pane

0x461b,	// (0x00019e13) grid_image3_tool_bar_pane

0x4625,	// (0x00019e1d) bg_popup_trans_pane_g1

0x1796,	// (0x00016f8e) bg_popup_trans_pane_g2

0x462d,	// (0x00019e25) bg_popup_trans_pane_g3

0x4635,	// (0x00019e2d) bg_popup_trans_pane_g4

0x463d,	// (0x00019e35) bg_popup_trans_pane_g5

0x4645,	// (0x00019e3d) bg_popup_trans_pane_g6

0x464d,	// (0x00019e45) bg_popup_trans_pane_g7

0x4655,	// (0x00019e4d) bg_popup_trans_pane_g8

0x1776,	// (0x00016f6e) bg_popup_trans_pane_g9

0x0008,

0xf98c,	// (0x00025184) bg_popup_trans_pane_g

0x465d,	// (0x00019e55) cell_image3_tool_bar_pane_ParamLimits

0x465d,	// (0x00019e55) cell_image3_tool_bar_pane

0x38db,	// (0x000190d3) cell_image3_tool_bar_pane_g1

0x09a8,	// (0x000161a0) bg_popup_trans_pane_cp1

0x4671,	// (0x00019e69) popup_image3_note_pane_t1

0x467f,	// (0x00019e77) popup_image3_note_pane_t2

0x468d,	// (0x00019e85) popup_image3_note_pane_t3

0x0002,

0xf99f,	// (0x00025197) popup_image3_note_pane_t

0x469b,	// (0x00019e93) popup_image3_note_pane_t3_copy1

0xc507,	// (0x00021cff) bg_myfav_hc_instruction_pane_ParamLimits

0xc507,	// (0x00021cff) bg_myfav_hc_instruction_pane

0xc51f,	// (0x00021d17) cell_myfav_contact_pane_ParamLimits

0xc51f,	// (0x00021d17) cell_myfav_contact_pane

0xc539,	// (0x00021d31) cell_myfav_contact_pane_cp1_ParamLimits

0xc539,	// (0x00021d31) cell_myfav_contact_pane_cp1

0xc551,	// (0x00021d49) cell_myfav_contact_pane_cp2_ParamLimits

0xc551,	// (0x00021d49) cell_myfav_contact_pane_cp2

0xc569,	// (0x00021d61) cell_myfav_contact_pane_cp3_ParamLimits

0xc569,	// (0x00021d61) cell_myfav_contact_pane_cp3

0xc580,	// (0x00021d78) cell_myfav_contact_pane_cp4_ParamLimits

0xc580,	// (0x00021d78) cell_myfav_contact_pane_cp4

0xc596,	// (0x00021d8e) cell_myfav_contact_pane_cp5_ParamLimits

0xc596,	// (0x00021d8e) cell_myfav_contact_pane_cp5

0xc5aa,	// (0x00021da2) cell_myfav_contact_pane_cp6_ParamLimits

0xc5aa,	// (0x00021da2) cell_myfav_contact_pane_cp6

0xc5be,	// (0x00021db6) cell_myfav_contact_pane_cp7_ParamLimits

0xc5be,	// (0x00021db6) cell_myfav_contact_pane_cp7

0x46a9,	// (0x00019ea1) listscroll_gen_pane_cp05

0xc5d6,	// (0x00021dce) main_myfav_hc_pane_g1_ParamLimits

0xc5d6,	// (0x00021dce) main_myfav_hc_pane_g1

0xc5ee,	// (0x00021de6) main_myfav_hc_pane_g2_ParamLimits

0xc5ee,	// (0x00021de6) main_myfav_hc_pane_g2

0x0002,

0xf9a6,	// (0x0002519e) main_myfav_hc_pane_g_ParamLimits

0xf9a6,	// (0x0002519e) main_myfav_hc_pane_g

0xc61e,	// (0x00021e16) main_myfav_hc_pane_t1_ParamLimits

0xc61e,	// (0x00021e16) main_myfav_hc_pane_t1

0x46b2,	// (0x00019eaa) main_myfav_hc_pane_t2_ParamLimits

0x46b2,	// (0x00019eaa) main_myfav_hc_pane_t2

0x46c4,	// (0x00019ebc) main_myfav_hc_pane_t3_ParamLimits

0x46c4,	// (0x00019ebc) main_myfav_hc_pane_t3

0xc635,	// (0x00021e2d) main_myfav_hc_pane_t4_ParamLimits

0xc635,	// (0x00021e2d) main_myfav_hc_pane_t4

0x0004,

0xf9ad,	// (0x000251a5) main_myfav_hc_pane_t_ParamLimits

0xf9ad,	// (0x000251a5) main_myfav_hc_pane_t

0x38db,	// (0x000190d3) bg_myfav_hc_instruction_pane_g1

0x46d6,	// (0x00019ece) cell_myfav_contact_pane_g1_ParamLimits

0x46d6,	// (0x00019ece) cell_myfav_contact_pane_g1

0x46d6,	// (0x00019ece) cell_myfav_contact_pane_g2_ParamLimits

0x46d6,	// (0x00019ece) cell_myfav_contact_pane_g2

0x46e2,	// (0x00019eda) cell_myfav_contact_pane_g3_ParamLimits

0x46e2,	// (0x00019eda) cell_myfav_contact_pane_g3

0x3bdf,	// (0x000193d7) cell_myfav_contact_pane_g4_ParamLimits

0x3bdf,	// (0x000193d7) cell_myfav_contact_pane_g4

0x46ef,	// (0x00019ee7) cell_myfav_contact_pane_g5_ParamLimits

0x46ef,	// (0x00019ee7) cell_myfav_contact_pane_g5

0x0004,

0xf9b8,	// (0x000251b0) cell_myfav_contact_pane_g_ParamLimits

0xf9b8,	// (0x000251b0) cell_myfav_contact_pane_g

0xc606,	// (0x00021dfe) main_myfav_hc_pane_g3_ParamLimits

0xc606,	// (0x00021dfe) main_myfav_hc_pane_g3

0x84ad,	// (0x0001dca5) popup_adpt_find_window

0xc65f,	// (0x00021e57) afind_page_pane_ParamLimits

0xc65f,	// (0x00021e57) afind_page_pane

0xc66c,	// (0x00021e64) aid_size_cell_afind_ParamLimits

0xc66c,	// (0x00021e64) aid_size_cell_afind

0xc686,	// (0x00021e7e) bg_popup_sub_pane_cp09_ParamLimits

0xc686,	// (0x00021e7e) bg_popup_sub_pane_cp09

0xc693,	// (0x00021e8b) find_pane_cp01_ParamLimits

0xc693,	// (0x00021e8b) find_pane_cp01

0x46fb,	// (0x00019ef3) grid_afind_control_pane_ParamLimits

0x46fb,	// (0x00019ef3) grid_afind_control_pane

0xc6a0,	// (0x00021e98) grid_afind_pane_ParamLimits

0xc6a0,	// (0x00021e98) grid_afind_pane

0xc6bc,	// (0x00021eb4) cell_afind_pane_ParamLimits

0xc6bc,	// (0x00021eb4) cell_afind_pane

0x38db,	// (0x000190d3) afind_page_pane_g1

0xc704,	// (0x00021efc) afind_page_pane_g2

0xc70d,	// (0x00021f05) afind_page_pane_g3

0x0002,

0xf9c3,	// (0x000251bb) afind_page_pane_g

0xc716,	// (0x00021f0e) afind_page_pane_t1

0x470f,	// (0x00019f07) cell_afind_grid_control_pane_ParamLimits

0x470f,	// (0x00019f07) cell_afind_grid_control_pane

0x4439,	// (0x00019c31) bg_button_pane_cp69_ParamLimits

0x4439,	// (0x00019c31) bg_button_pane_cp69

0xc72d,	// (0x00021f25) cell_afind_pane_g1_ParamLimits

0xc72d,	// (0x00021f25) cell_afind_pane_g1

0xc73a,	// (0x00021f32) cell_afind_pane_t1_ParamLimits

0xc73a,	// (0x00021f32) cell_afind_pane_t1

0x14cc,	// (0x00016cc4) bg_button_pane_cp72

0x471e,	// (0x00019f16) cell_afind_grid_control_pane_g1

0xa9da,	// (0x000201d2) aid_image_placing_area_ParamLimits

0xa9da,	// (0x000201d2) aid_image_placing_area

0x3ef8,	// (0x000196f0) field_vitu_entry_pane_g1_ParamLimits

0x3ef8,	// (0x000196f0) field_vitu_entry_pane_g1

0x3f04,	// (0x000196fc) field_vitu_entry_pane_g2_ParamLimits

0x3f04,	// (0x000196fc) field_vitu_entry_pane_g2

0x0001,

0xf87d,	// (0x00025075) field_vitu_entry_pane_g_ParamLimits

0xf87d,	// (0x00025075) field_vitu_entry_pane_g

0xc1a6,	// (0x0002199e) cell_vitu_itu_pane_g1_ParamLimits

0xc1e8,	// (0x000219e0) cell_vitu_itu_pane_t3_ParamLimits

0xc1e8,	// (0x000219e0) cell_vitu_itu_pane_t3

0x43e9,	// (0x00019be1) mp4_progress_pane_t1_ParamLimits

0x4402,	// (0x00019bfa) mp4_progress_pane_t2_ParamLimits

0xf912,	// (0x0002510a) mp4_progress_pane_t_ParamLimits

0x441b,	// (0x00019c13) mup_progress_pane_cp04_ParamLimits

0xc649,	// (0x00021e41) main_myfav_hc_pane_t5_ParamLimits

0xc649,	// (0x00021e41) main_myfav_hc_pane_t5

0x09ce,	// (0x000161c6) aid_zoom_text_primary

0x84ad,	// (0x0001dca5) popup_adpt_find_window_ParamLimits

0x0a18,	// (0x00016210) main_cam_set_pane

0x7b94,	// (0x0001d38c) cam4_zoom_pane_ParamLimits

0x7b94,	// (0x0001d38c) cam4_zoom_pane

0xc74c,	// (0x00021f44) main_cam_set_pane_g1_ParamLimits

0xc74c,	// (0x00021f44) main_cam_set_pane_g1

0xc75a,	// (0x00021f52) main_cam_set_pane_g2_ParamLimits

0xc75a,	// (0x00021f52) main_cam_set_pane_g2

0x0001,

0xf9ca,	// (0x000251c2) main_cam_set_pane_g_ParamLimits

0xf9ca,	// (0x000251c2) main_cam_set_pane_g

0xc766,	// (0x00021f5e) main_cam_set_pane_t1_ParamLimits

0xc766,	// (0x00021f5e) main_cam_set_pane_t1

0xc782,	// (0x00021f7a) main_cset_listscroll_pane_ParamLimits

0xc782,	// (0x00021f7a) main_cset_listscroll_pane

0xc7af,	// (0x00021fa7) main_cset_slider_pane_ParamLimits

0xc7af,	// (0x00021fa7) main_cset_slider_pane

0x472f,	// (0x00019f27) main_cset_list_pane_ParamLimits

0x472f,	// (0x00019f27) main_cset_list_pane

0x473f,	// (0x00019f37) scroll_pane_cp028

0xc7ce,	// (0x00021fc6) aid_area_touch_slider

0xc7ea,	// (0x00021fe2) cset_slider_pane

0xc814,	// (0x0002200c) main_cset_slider_pane_g1

0xc829,	// (0x00022021) main_cset_slider_pane_g2

0x0011,

0xf9cf,	// (0x000251c7) main_cset_slider_pane_g

0x4778,	// (0x00019f70) main_cset_slider_pane_t1

0xc8f1,	// (0x000220e9) main_cset_slider_pane_t2

0xc90b,	// (0x00022103) main_cset_slider_pane_t3

0xc925,	// (0x0002211d) main_cset_slider_pane_t4

0xc943,	// (0x0002213b) main_cset_slider_pane_t5

0xc965,	// (0x0002215d) main_cset_slider_pane_t6

0xc97c,	// (0x00022174) main_cset_slider_pane_t7

0x000e,

0xf9f4,	// (0x000251ec) main_cset_slider_pane_t

0xca8a,	// (0x00022282) cset_list_set_pane_ParamLimits

0xca8a,	// (0x00022282) cset_list_set_pane

0xcaa7,	// (0x0002229f) aid_position_infowindow_above

0xcaaf,	// (0x000222a7) aid_position_infowindow_below

0xcab7,	// (0x000222af) cset_list_set_pane_g1_ParamLimits

0xcab7,	// (0x000222af) cset_list_set_pane_g1

0x4f5c,	// (0x0001a754) cset_list_set_pane_g3_ParamLimits

0x4f5c,	// (0x0001a754) cset_list_set_pane_g3

0x0001,

0xfa13,	// (0x0002520b) cset_list_set_pane_g_ParamLimits

0xfa13,	// (0x0002520b) cset_list_set_pane_g

0x4f6b,	// (0x0001a763) cset_list_set_pane_t1_ParamLimits

0x4f6b,	// (0x0001a763) cset_list_set_pane_t1

0x0a18,	// (0x00016210) list_highlight_pane_cp021_ParamLimits

0x0a18,	// (0x00016210) list_highlight_pane_cp021

0x2092,	// (0x0001788a) cset_slider_pane_g1

0x20a4,	// (0x0001789c) cset_slider_pane_g2

0x209b,	// (0x00017893) cset_slider_pane_g3

0x0002,

0xfa18,	// (0x00025210) cset_slider_pane_g

0x8056,	// (0x0001d84e) aid_area_touch_cam4_zoom

0x805e,	// (0x0001d856) cam4_zoom_cont_pane

0x8066,	// (0x0001d85e) cam4_zoom_pane_g1

0x806e,	// (0x0001d866) cam4_zoom_pane_g2

0x8076,	// (0x0001d86e) cam4_zoom_pane_g3

0x0002,

0xfa1f,	// (0x00025217) cam4_zoom_pane_g

0x807e,	// (0x0001d876) cam4_zoom_cont_pane_g1

0x8087,	// (0x0001d87f) cam4_zoom_cont_pane_g2

0x8090,	// (0x0001d888) cam4_zoom_cont_pane_g3

0x0002,

0xfa26,	// (0x0002521e) cam4_zoom_cont_pane_g

0xc443,	// (0x00021c3b) call4_image_pane_ParamLimits

0xc443,	// (0x00021c3b) call4_image_pane

0x4477,	// (0x00019c6f) call4_windows_conf_pane_ParamLimits

0x44b6,	// (0x00019cae) popup_call4_audio_in_window_ParamLimits

0x44b6,	// (0x00019cae) popup_call4_audio_in_window

0x09a8,	// (0x000161a0) bg_popup_call2_act_pane_cp02

0x452c,	// (0x00019d24) call4_list_conf_pane

0x38db,	// (0x000190d3) call4_image_pane_g1

0x38db,	// (0x000190d3) call4_image_pane_g2

0x0001,

0xf743,	// (0x00024f3b) call4_image_pane_g

0x4853,	// (0x0001a04b) list_single_graphic_popup_conf4_pane_ParamLimits

0x4853,	// (0x0001a04b) list_single_graphic_popup_conf4_pane

0x09a8,	// (0x000161a0) list_highlight_pane_cp022

0x4866,	// (0x0001a05e) list_single_graphic_popup_conf4_pane_g1

0x1d63,	// (0x0001755b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa2d,	// (0x00025225) list_single_graphic_popup_conf4_pane_g

0x486e,	// (0x0001a066) list_single_graphic_popup_conf4_pane_t1

0x9032,	// (0x0001e82a) popup_vtel_slider_window_ParamLimits

0x9032,	// (0x0001e82a) popup_vtel_slider_window

0x4427,	// (0x00019c1f) dialer2_ne_pane_t2_ParamLimits

0x4427,	// (0x00019c1f) dialer2_ne_pane_t2

0x0001,

0xf917,	// (0x0002510f) dialer2_ne_pane_t_ParamLimits

0xf917,	// (0x0002510f) dialer2_ne_pane_t

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp010_ParamLimits

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp010

0xcac3,	// (0x000222bb) popup_vtel_slider_window_g1_ParamLimits

0xcac3,	// (0x000222bb) popup_vtel_slider_window_g1

0xcacf,	// (0x000222c7) popup_vtel_slider_window_g2_ParamLimits

0xcacf,	// (0x000222c7) popup_vtel_slider_window_g2

0x0003,

0xfa32,	// (0x0002522a) popup_vtel_slider_window_g_ParamLimits

0xfa32,	// (0x0002522a) popup_vtel_slider_window_g

0xcb17,	// (0x0002230f) vtel_slider_pane_ParamLimits

0xcb17,	// (0x0002230f) vtel_slider_pane

0xcb26,	// (0x0002231e) vtel_slider_pane_g1_ParamLimits

0xcb26,	// (0x0002231e) vtel_slider_pane_g1

0xcb33,	// (0x0002232b) vtel_slider_pane_g2_ParamLimits

0xcb33,	// (0x0002232b) vtel_slider_pane_g2

0xcb40,	// (0x00022338) vtel_slider_pane_g3_ParamLimits

0xcb40,	// (0x00022338) vtel_slider_pane_g3

0xcb26,	// (0x0002231e) vtel_slider_pane_g4_ParamLimits

0xcb26,	// (0x0002231e) vtel_slider_pane_g4

0xcb4d,	// (0x00022345) vtel_slider_pane_g5_ParamLimits

0xcb4d,	// (0x00022345) vtel_slider_pane_g5

0x0004,

0xfa3b,	// (0x00025233) vtel_slider_pane_g_ParamLimits

0xfa3b,	// (0x00025233) vtel_slider_pane_g

0x09a8,	// (0x000161a0) main_gallery2_pane

0x7dad,	// (0x0001d5a5) aid_size_row_itut2_dropdow_list_ParamLimits

0x7dad,	// (0x0001d5a5) aid_size_row_itut2_dropdow_list

0x7e1b,	// (0x0001d613) grid_vitu2_function_top_pane_ParamLimits

0x7e1b,	// (0x0001d613) grid_vitu2_function_top_pane

0x7e71,	// (0x0001d669) popup_vitu2_dropdown_list_window_ParamLimits

0x7e71,	// (0x0001d669) popup_vitu2_dropdown_list_window

0x7e91,	// (0x0001d689) popup_vitu2_match_list_window

0x8099,	// (0x0001d891) cell_vitu2_function_top_pane_ParamLimits

0x8099,	// (0x0001d891) cell_vitu2_function_top_pane

0x80b9,	// (0x0001d8b1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x80b9,	// (0x0001d8b1) cell_vitu2_function_top_pane_cp01

0x80d7,	// (0x0001d8cf) cell_vitu2_function_top_wide_pane_ParamLimits

0x80d7,	// (0x0001d8cf) cell_vitu2_function_top_wide_pane

0x7cfb,	// (0x0001d4f3) bg_button_pane_cp012

0x80f5,	// (0x0001d8ed) cell_vitu2_function_top_pane_g1

0x8104,	// (0x0001d8fc) bg_button_pane_cp013_ParamLimits

0x8104,	// (0x0001d8fc) bg_button_pane_cp013

0xcb5a,	// (0x00022352) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcb5a,	// (0x00022352) cell_vitu2_function_top_wide_pane_g1

0x8120,	// (0x0001d918) bg_popup_sub_pane_cp20

0x812e,	// (0x0001d926) list_vitu2_match_list_pane

0x4625,	// (0x00019e1d) bg_popup_sub_pane_cp20_g1

0x462d,	// (0x00019e25) bg_popup_sub_pane_cp20_g2

0x1796,	// (0x00016f8e) bg_popup_sub_pane_cp20_g3

0x4635,	// (0x00019e2d) bg_popup_sub_pane_cp20_g4

0x1776,	// (0x00016f6e) bg_popup_sub_pane_cp20_g5

0x48a6,	// (0x0001a09e) bg_popup_sub_pane_cp20_g6

0x4645,	// (0x00019e3d) bg_popup_sub_pane_cp20_g7

0x464d,	// (0x00019e45) bg_popup_sub_pane_cp20_g8

0x4655,	// (0x00019e4d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa46,	// (0x0002523e) bg_popup_sub_pane_cp20_g

0x8146,	// (0x0001d93e) list_vitu2_match_list_item_pane_ParamLimits

0x8146,	// (0x0001d93e) list_vitu2_match_list_item_pane

0x8158,	// (0x0001d950) list_vitu2_match_list_item_pane_t1

0x6fcc,	// (0x0001c7c4) bg_popup_sub_pane_cp21

0x8166,	// (0x0001d95e) grid_vitu2_dropdown_list_pane

0x816e,	// (0x0001d966) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x816e,	// (0x0001d966) cell_vitu2_dropdown_list_char_pane

0x818f,	// (0x0001d987) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x818f,	// (0x0001d987) cell_vitu2_dropdown_list_ctrl_pane

0x48f8,	// (0x0001a0f0) cell_vitu2_dropdown_list_char_pane_g1

0x48ef,	// (0x0001a0e7) cell_vitu2_dropdown_list_char_pane_g2

0x48e6,	// (0x0001a0de) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa63,	// (0x0002525b) cell_vitu2_dropdown_list_char_pane_g

0x81bb,	// (0x0001d9b3) cell_vitu2_dropdown_list_char_pane_t1

0xcba1,	// (0x00022399) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcba1,	// (0x00022399) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcbb1,	// (0x000223a9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcbb1,	// (0x000223a9) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcbc2,	// (0x000223ba) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcbc2,	// (0x000223ba) cell_vitu2_dropdown_list_ctrl_pane_g3

0x81c9,	// (0x0001d9c1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x81c9,	// (0x0001d9c1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7c10,	// (0x0001d408) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7c10,	// (0x0001d408) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa6a,	// (0x00025262) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa6a,	// (0x00025262) cell_vitu2_dropdown_list_ctrl_pane_g

0xcbd2,	// (0x000223ca) aid_size_cell_gallery2_ParamLimits

0xcbd2,	// (0x000223ca) aid_size_cell_gallery2

0xcbe0,	// (0x000223d8) grid_gallery2_pane_ParamLimits

0xcbe0,	// (0x000223d8) grid_gallery2_pane

0xcbef,	// (0x000223e7) scroll_pane_cp029_ParamLimits

0xcbef,	// (0x000223e7) scroll_pane_cp029

0xcbfb,	// (0x000223f3) cell_gallery2_pane_ParamLimits

0xcbfb,	// (0x000223f3) cell_gallery2_pane

0x4901,	// (0x0001a0f9) cell_gallery2_pane_g2

0xcc2c,	// (0x00022424) cell_gallery2_pane_g3

0x490b,	// (0x0001a103) cell_gallery2_pane_g4

0x4913,	// (0x0001a10b) cell_gallery2_pane_g5

0x1f3c,	// (0x00017734) grid_highlight_pane_cp10

0x7e91,	// (0x0001d689) popup_vitu2_match_list_window_ParamLimits

0x7ea3,	// (0x0001d69b) popup_vitu2_query_window_ParamLimits

0x7ea3,	// (0x0001d69b) popup_vitu2_query_window

0x6fcc,	// (0x0001c7c4) bg_vitu2_candi_button_pane

0x48f8,	// (0x0001a0f0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x48ef,	// (0x0001a0e7) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x48e6,	// (0x0001a0de) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcc34,	// (0x0002242c) bg_button_pane_cp015

0xcc3e,	// (0x00022436) bg_button_pane_cp016

0xcc48,	// (0x00022440) bg_button_pane_cp017

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp22

0x491b,	// (0x0001a113) popup_vitu2_query_window_g1

0xcc70,	// (0x00022468) popup_vitu2_query_window_g2

0x0001,

0xfa75,	// (0x0002526d) popup_vitu2_query_window_g

0xcc7e,	// (0x00022476) popup_vitu2_query_window_t1_ParamLimits

0xcc7e,	// (0x00022476) popup_vitu2_query_window_t1

0xcca6,	// (0x0002249e) popup_vitu2_query_window_t2_ParamLimits

0xcca6,	// (0x0002249e) popup_vitu2_query_window_t2

0xccb8,	// (0x000224b0) popup_vitu2_query_window_t3_ParamLimits

0xccb8,	// (0x000224b0) popup_vitu2_query_window_t3

0xcce0,	// (0x000224d8) popup_vitu2_query_window_t4_ParamLimits

0xcce0,	// (0x000224d8) popup_vitu2_query_window_t4

0xccf4,	// (0x000224ec) popup_vitu2_query_window_t5_ParamLimits

0xccf4,	// (0x000224ec) popup_vitu2_query_window_t5

0x0004,

0xfa7a,	// (0x00025272) popup_vitu2_query_window_t_ParamLimits

0xfa7a,	// (0x00025272) popup_vitu2_query_window_t

0x4727,	// (0x00019f1f) main_cset_text_pane

0xc7ce,	// (0x00021fc6) aid_area_touch_slider_ParamLimits

0xc7ea,	// (0x00021fe2) cset_slider_pane_ParamLimits

0xc814,	// (0x0002200c) main_cset_slider_pane_g1_ParamLimits

0xc829,	// (0x00022021) main_cset_slider_pane_g2_ParamLimits

0x4748,	// (0x00019f40) main_cset_slider_pane_g3_ParamLimits

0x4748,	// (0x00019f40) main_cset_slider_pane_g3

0xc83e,	// (0x00022036) main_cset_slider_pane_g4_ParamLimits

0xc83e,	// (0x00022036) main_cset_slider_pane_g4

0xc84d,	// (0x00022045) main_cset_slider_pane_g5_ParamLimits

0xc84d,	// (0x00022045) main_cset_slider_pane_g5

0xc85b,	// (0x00022053) main_cset_slider_pane_g6_ParamLimits

0xc85b,	// (0x00022053) main_cset_slider_pane_g6

0xf9cf,	// (0x000251c7) main_cset_slider_pane_g_ParamLimits

0x4778,	// (0x00019f70) main_cset_slider_pane_t1_ParamLimits

0xc8f1,	// (0x000220e9) main_cset_slider_pane_t2_ParamLimits

0xc90b,	// (0x00022103) main_cset_slider_pane_t3_ParamLimits

0xc925,	// (0x0002211d) main_cset_slider_pane_t4_ParamLimits

0xc943,	// (0x0002213b) main_cset_slider_pane_t5_ParamLimits

0xc965,	// (0x0002215d) main_cset_slider_pane_t6_ParamLimits

0xc97c,	// (0x00022174) main_cset_slider_pane_t7_ParamLimits

0xc9aa,	// (0x000221a2) main_cset_slider_pane_t8_ParamLimits

0xc9aa,	// (0x000221a2) main_cset_slider_pane_t8

0xc9d2,	// (0x000221ca) main_cset_slider_pane_t9_ParamLimits

0xc9d2,	// (0x000221ca) main_cset_slider_pane_t9

0xc9fa,	// (0x000221f2) main_cset_slider_pane_t10_ParamLimits

0xc9fa,	// (0x000221f2) main_cset_slider_pane_t10

0xca22,	// (0x0002221a) main_cset_slider_pane_t11_ParamLimits

0xca22,	// (0x0002221a) main_cset_slider_pane_t11

0xca4c,	// (0x00022244) main_cset_slider_pane_t12_ParamLimits

0xca4c,	// (0x00022244) main_cset_slider_pane_t12

0xca6b,	// (0x00022263) main_cset_slider_pane_t13_ParamLimits

0xca6b,	// (0x00022263) main_cset_slider_pane_t13

0xf9f4,	// (0x000251ec) main_cset_slider_pane_t_ParamLimits

0x09a8,	// (0x000161a0) bg_popup_sub_pane_cp011

0x4927,	// (0x0001a11f) main_cset_text_pane_g1

0x492f,	// (0x0001a127) main_cset_text_pane_t1

0x493d,	// (0x0001a135) main_cset_text_pane_t2

0x494b,	// (0x0001a143) main_cset_text_pane_t3

0x4959,	// (0x0001a151) main_cset_text_pane_t4

0x4967,	// (0x0001a15f) main_cset_text_pane_t5

0x4975,	// (0x0001a16d) main_cset_text_pane_t6

0x4983,	// (0x0001a17b) main_cset_text_pane_t7

0x0006,

0xfa85,	// (0x0002527d) main_cset_text_pane_t

0x09a8,	// (0x000161a0) main_cam4_burst_pane

0x09a8,	// (0x000161a0) main_cam5_pane

0x18c5,	// (0x000170bd) bg_button_pane_cp019

0xc724,	// (0x00021f1c) bg_button_pane_cp020

0x4754,	// (0x00019f4c) main_cset_slider_pane_g7_ParamLimits

0x4754,	// (0x00019f4c) main_cset_slider_pane_g7

0x4760,	// (0x00019f58) main_cset_slider_pane_g8_ParamLimits

0x4760,	// (0x00019f58) main_cset_slider_pane_g8

0xc871,	// (0x00022069) main_cset_slider_pane_g9_ParamLimits

0xc871,	// (0x00022069) main_cset_slider_pane_g9

0xc87d,	// (0x00022075) main_cset_slider_pane_g10_ParamLimits

0xc87d,	// (0x00022075) main_cset_slider_pane_g10

0xc889,	// (0x00022081) main_cset_slider_pane_g11_ParamLimits

0xc889,	// (0x00022081) main_cset_slider_pane_g11

0xc895,	// (0x0002208d) main_cset_slider_pane_g12_ParamLimits

0xc895,	// (0x0002208d) main_cset_slider_pane_g12

0xc8a1,	// (0x00022099) main_cset_slider_pane_g13_ParamLimits

0xc8a1,	// (0x00022099) main_cset_slider_pane_g13

0xc8af,	// (0x000220a7) main_cset_slider_pane_g14_ParamLimits

0xc8af,	// (0x000220a7) main_cset_slider_pane_g14

0xc8bd,	// (0x000220b5) main_cset_slider_pane_g15_ParamLimits

0xc8bd,	// (0x000220b5) main_cset_slider_pane_g15

0x47a6,	// (0x00019f9e) main_cset_slider_pane_t14_ParamLimits

0x47a6,	// (0x00019f9e) main_cset_slider_pane_t14

0x47df,	// (0x00019fd7) main_cset_slider_pane_t15_ParamLimits

0x47df,	// (0x00019fd7) main_cset_slider_pane_t15

0xcd08,	// (0x00022500) aid_cam4_burst_size_cell_ParamLimits

0xcd08,	// (0x00022500) aid_cam4_burst_size_cell

0xcd24,	// (0x0002251c) grid_cam4_burst_pane_ParamLimits

0xcd24,	// (0x0002251c) grid_cam4_burst_pane

0xcd54,	// (0x0002254c) linegrid_cam4_burst_pane_ParamLimits

0xcd54,	// (0x0002254c) linegrid_cam4_burst_pane

0xcd76,	// (0x0002256e) scroll_pane_cp30_ParamLimits

0xcd76,	// (0x0002256e) scroll_pane_cp30

0xcd82,	// (0x0002257a) cell_cam4_burst_pane_ParamLimits

0xcd82,	// (0x0002257a) cell_cam4_burst_pane

0x4991,	// (0x0001a189) linegrid_cam4_burst_pane_g1_ParamLimits

0x4991,	// (0x0001a189) linegrid_cam4_burst_pane_g1

0xcdbe,	// (0x000225b6) linegrid_cam4_burst_pane_g2_ParamLimits

0xcdbe,	// (0x000225b6) linegrid_cam4_burst_pane_g2

0x499e,	// (0x0001a196) linegrid_cam4_burst_pane_g3_ParamLimits

0x499e,	// (0x0001a196) linegrid_cam4_burst_pane_g3

0x0002,

0xfa94,	// (0x0002528c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa94,	// (0x0002528c) linegrid_cam4_burst_pane_g

0xcdcf,	// (0x000225c7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcdcf,	// (0x000225c7) linegrid_cam4_burst_pane_g3_copy1

0x49ab,	// (0x0001a1a3) linegrid_cam4_burst_pane_g4_ParamLimits

0x49ab,	// (0x0001a1a3) linegrid_cam4_burst_pane_g4

0xcde9,	// (0x000225e1) linegrid_cam4_burst_pane_g5_ParamLimits

0xcde9,	// (0x000225e1) linegrid_cam4_burst_pane_g5

0xcdfa,	// (0x000225f2) linegrid_cam4_burst_pane_g6_ParamLimits

0xcdfa,	// (0x000225f2) linegrid_cam4_burst_pane_g6

0x49b8,	// (0x0001a1b0) linegrid_cam4_burst_pane_g7_ParamLimits

0x49b8,	// (0x0001a1b0) linegrid_cam4_burst_pane_g7

0xce0b,	// (0x00022603) cell_cam4_burst_pane_g1

0x49d1,	// (0x0001a1c9) main_cam5_pane_t1_ParamLimits

0x49d1,	// (0x0001a1c9) main_cam5_pane_t1

0x49e3,	// (0x0001a1db) main_cam5_pane_t2_ParamLimits

0x49e3,	// (0x0001a1db) main_cam5_pane_t2

0x49f5,	// (0x0001a1ed) main_cam5_pane_t3_ParamLimits

0x49f5,	// (0x0001a1ed) main_cam5_pane_t3

0x4a07,	// (0x0001a1ff) main_cam5_pane_t4_ParamLimits

0x4a07,	// (0x0001a1ff) main_cam5_pane_t4

0x4a1d,	// (0x0001a215) main_cam5_pane_t5_ParamLimits

0x4a1d,	// (0x0001a215) main_cam5_pane_t5

0x4a2f,	// (0x0001a227) main_cam5_pane_t6_ParamLimits

0x4a2f,	// (0x0001a227) main_cam5_pane_t6

0x4a43,	// (0x0001a23b) main_cam5_pane_t7_ParamLimits

0x4a43,	// (0x0001a23b) main_cam5_pane_t7

0x4a55,	// (0x0001a24d) main_cam5_pane_t8_ParamLimits

0x4a55,	// (0x0001a24d) main_cam5_pane_t8

0x4a71,	// (0x0001a269) main_cam5_pane_t9_ParamLimits

0x4a71,	// (0x0001a269) main_cam5_pane_t9

0x4a83,	// (0x0001a27b) main_cam5_pane_t10_ParamLimits

0x4a83,	// (0x0001a27b) main_cam5_pane_t10

0x4a95,	// (0x0001a28d) main_cam5_pane_t11_ParamLimits

0x4a95,	// (0x0001a28d) main_cam5_pane_t11

0x4aa7,	// (0x0001a29f) main_cam5_pane_t12_ParamLimits

0x4aa7,	// (0x0001a29f) main_cam5_pane_t12

0x4abc,	// (0x0001a2b4) main_cam5_pane_t13_ParamLimits

0x4abc,	// (0x0001a2b4) main_cam5_pane_t13

0x000c,

0xfaa0,	// (0x00025298) main_cam5_pane_t_ParamLimits

0xfaa0,	// (0x00025298) main_cam5_pane_t

0x855a,	// (0x0001dd52) popup_scut_keymap_window_ParamLimits

0x855a,	// (0x0001dd52) popup_scut_keymap_window

0xce1e,	// (0x00022616) aid_size_cell_brow_shortcut

0x1f3c,	// (0x00017734) bg_popup_window_pane_cp010

0xce2a,	// (0x00022622) grid_scut_pane

0xce36,	// (0x0002262e) cell_scut_pane_ParamLimits

0xce36,	// (0x0002262e) cell_scut_pane

0xce4d,	// (0x00022645) cell_scut_pane_g1

0x4ad9,	// (0x0001a2d1) cell_scut_pane_t1

0x4ae8,	// (0x0001a2e0) cell_scut_pane_t2

0xce56,	// (0x0002264e) cell_scut_pane_t3

0x0002,

0xfabb,	// (0x000252b3) cell_scut_pane_t

0xb89f,	// (0x00021097) main_mup3_pane_g8_ParamLimits

0xb89f,	// (0x00021097) main_mup3_pane_g8

0x7dbb,	// (0x0001d5b3) area_vitu2_query_pane_ParamLimits

0x7dbb,	// (0x0001d5b3) area_vitu2_query_pane

0xcc52,	// (0x0002244a) input_focus_pane_cp08

0x4af7,	// (0x0001a2ef) area_vitu2_query_pane_g1

0xce64,	// (0x0002265c) area_vitu2_query_pane_g2

0x0001,

0xfac2,	// (0x000252ba) area_vitu2_query_pane_g

0xce75,	// (0x0002266d) area_vitu2_query_pane_t1_ParamLimits

0xce75,	// (0x0002266d) area_vitu2_query_pane_t1

0xce89,	// (0x00022681) area_vitu2_query_pane_t2_ParamLimits

0xce89,	// (0x00022681) area_vitu2_query_pane_t2

0xce9d,	// (0x00022695) area_vitu2_query_pane_t3_ParamLimits

0xce9d,	// (0x00022695) area_vitu2_query_pane_t3

0x4b03,	// (0x0001a2fb) area_vitu2_query_pane_t4_ParamLimits

0x4b03,	// (0x0001a2fb) area_vitu2_query_pane_t4

0x4b2b,	// (0x0001a323) area_vitu2_query_pane_t5_ParamLimits

0x4b2b,	// (0x0001a323) area_vitu2_query_pane_t5

0x4b53,	// (0x0001a34b) area_vitu2_query_pane_t6_ParamLimits

0x4b53,	// (0x0001a34b) area_vitu2_query_pane_t6

0x0006,

0xfac7,	// (0x000252bf) area_vitu2_query_pane_t_ParamLimits

0xfac7,	// (0x000252bf) area_vitu2_query_pane_t

0xcec5,	// (0x000226bd) bg_button_pane_cp018

0xced3,	// (0x000226cb) bg_button_pane_cp021

0xcedf,	// (0x000226d7) bg_button_pane_cp022

0xcef0,	// (0x000226e8) input_focus_pane_cp09

0xa09b,	// (0x0001f893) aid_size_touch_mv_arrow_left

0xa0c6,	// (0x0001f8be) aid_size_touch_mv_arrow_right

0xc8d5,	// (0x000220cd) main_cset_slider_pane_g16_ParamLimits

0xc8d5,	// (0x000220cd) main_cset_slider_pane_g16

0xc8e3,	// (0x000220db) main_cset_slider_pane_g17_ParamLimits

0xc8e3,	// (0x000220db) main_cset_slider_pane_g17

0xce0b,	// (0x00022603) cell_cam4_burst_pane_g1_ParamLimits

0x09a8,	// (0x000161a0) compa_mode_pane

0xcadb,	// (0x000222d3) popup_vtel_slider_window_g3_ParamLimits

0xcadb,	// (0x000222d3) popup_vtel_slider_window_g3

0xcaef,	// (0x000222e7) popup_vtel_slider_window_g4_ParamLimits

0xcaef,	// (0x000222e7) popup_vtel_slider_window_g4

0xcb03,	// (0x000222fb) popup_vtel_slider_window_t1_ParamLimits

0xcb03,	// (0x000222fb) popup_vtel_slider_window_t1

0x09a8,	// (0x000161a0) main_cl_pane

0x33fb,	// (0x00018bf3) popup_imed_adjust2_window_ParamLimits

0x33d3,	// (0x00018bcb) bg_tb_trans_pane_cp05_ParamLimits

0x3e2d,	// (0x00019625) popup_imed_adjust2_window_g1_ParamLimits

0x3e3c,	// (0x00019634) popup_imed_adjust2_window_g2_ParamLimits

0x3e3c,	// (0x00019634) popup_imed_adjust2_window_g2

0x3e48,	// (0x00019640) popup_imed_adjust2_window_g3_ParamLimits

0x3e48,	// (0x00019640) popup_imed_adjust2_window_g3

0x0002,

0xf841,	// (0x00025039) popup_imed_adjust2_window_g_ParamLimits

0xf841,	// (0x00025039) popup_imed_adjust2_window_g

0x3e54,	// (0x0001964c) popup_imed_adjust2_window_t1_ParamLimits

0x3e6c,	// (0x00019664) slider_imed_adjust_pane_ParamLimits

0x3e80,	// (0x00019678) slider_imed_adjust_pane_g1_ParamLimits

0x3e90,	// (0x00019688) slider_imed_adjust_pane_g2_ParamLimits

0x3ea0,	// (0x00019698) slider_imed_adjust_pane_g3_ParamLimits

0x3eb1,	// (0x000196a9) slider_imed_adjust_pane_g4_ParamLimits

0xf848,	// (0x00025040) slider_imed_adjust_pane_g_ParamLimits

0x7b49,	// (0x0001d341) aid_touch_area_cam4_ParamLimits

0x7b49,	// (0x0001d341) aid_touch_area_cam4

0x7b59,	// (0x0001d351) battery_pane_cp01

0x7be0,	// (0x0001d3d8) main_camera4_pane_g6_ParamLimits

0x7be0,	// (0x0001d3d8) main_camera4_pane_g6

0x7bfe,	// (0x0001d3f6) main_camera4_pane_t2_ParamLimits

0x7bfe,	// (0x0001d3f6) main_camera4_pane_t2

0x0001,

0xf94b,	// (0x00025143) main_camera4_pane_t_ParamLimits

0xf94b,	// (0x00025143) main_camera4_pane_t

0x7c6d,	// (0x0001d465) aid_touch_area_vid4_ParamLimits

0x7c6d,	// (0x0001d465) aid_touch_area_vid4

0x7cad,	// (0x0001d4a5) main_video4_pane_g5_ParamLimits

0x7cad,	// (0x0001d4a5) main_video4_pane_g5

0x7ccf,	// (0x0001d4c7) vid4_progress_pane_ParamLimits

0x7ccf,	// (0x0001d4c7) vid4_progress_pane

0x476c,	// (0x00019f64) main_cset_slider_pane_g18_ParamLimits

0x476c,	// (0x00019f64) main_cset_slider_pane_g18

0x49c5,	// (0x0001a1bd) cell_cam4_burst_pane_g2_ParamLimits

0x49c5,	// (0x0001a1bd) cell_cam4_burst_pane_g2

0x0001,

0xfa9b,	// (0x00025293) cell_cam4_burst_pane_g_ParamLimits

0xfa9b,	// (0x00025293) cell_cam4_burst_pane_g

0xcf01,	// (0x000226f9) bg_cl_pane_ParamLimits

0xcf01,	// (0x000226f9) bg_cl_pane

0xcf0d,	// (0x00022705) cl_header_pane_ParamLimits

0xcf0d,	// (0x00022705) cl_header_pane

0xcf19,	// (0x00022711) cl_listscroll_pane_ParamLimits

0xcf19,	// (0x00022711) cl_listscroll_pane

0x4b9f,	// (0x0001a397) bg_cl_pane_g1

0x4ba7,	// (0x0001a39f) bg_cl_pane_g2

0x4baf,	// (0x0001a3a7) bg_cl_pane_g3

0x4bb7,	// (0x0001a3af) bg_cl_pane_g4

0x4bbf,	// (0x0001a3b7) bg_cl_pane_g5

0x4bc7,	// (0x0001a3bf) bg_cl_pane_g6

0x4bcf,	// (0x0001a3c7) bg_cl_pane_g7

0x4bd7,	// (0x0001a3cf) bg_cl_pane_g8

0x4bdf,	// (0x0001a3d7) bg_cl_pane_g9

0x0008,

0xfad6,	// (0x000252ce) bg_cl_pane_g

0xcf25,	// (0x0002271d) aid_height_cl_leading_ParamLimits

0xcf25,	// (0x0002271d) aid_height_cl_leading

0xcf31,	// (0x00022729) aid_height_cl_text_ParamLimits

0xcf31,	// (0x00022729) aid_height_cl_text

0x3c32,	// (0x0001942a) bg_cl_header_pane_ParamLimits

0x3c32,	// (0x0001942a) bg_cl_header_pane

0xcf49,	// (0x00022741) cl_header_pane_g1_ParamLimits

0xcf49,	// (0x00022741) cl_header_pane_g1

0xcf56,	// (0x0002274e) cl_header_pane_t1_ParamLimits

0xcf56,	// (0x0002274e) cl_header_pane_t1

0x4be7,	// (0x0001a3df) cl_list_pane

0x473f,	// (0x00019f37) hc_scroll_pane_cp01

0x1776,	// (0x00016f6e) bg_cl_header_pane_g1

0x4625,	// (0x00019e1d) bg_cl_header_pane_g2

0x1796,	// (0x00016f8e) bg_cl_header_pane_g3

0x4635,	// (0x00019e2d) bg_cl_header_pane_g4

0x462d,	// (0x00019e25) bg_cl_header_pane_g5

0x48a6,	// (0x0001a09e) bg_cl_header_pane_g6

0x464d,	// (0x00019e45) bg_cl_header_pane_g7

0x4655,	// (0x00019e4d) bg_cl_header_pane_g8

0x4645,	// (0x00019e3d) bg_cl_header_pane_g9

0x0008,

0xfae9,	// (0x000252e1) bg_cl_header_pane_g

0xcf68,	// (0x00022760) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcf68,	// (0x00022760) hc_cl_list_double_graphic_heading_pane

0xcf7f,	// (0x00022777) hc_cl_list_single_graphic_pane_ParamLimits

0xcf7f,	// (0x00022777) hc_cl_list_single_graphic_pane

0xcf9f,	// (0x00022797) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcf9f,	// (0x00022797) hc_cl_list_single_graphic_pane_g1

0xcfab,	// (0x000227a3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcfab,	// (0x000227a3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfafc,	// (0x000252f4) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfafc,	// (0x000252f4) hc_cl_list_single_graphic_pane_g

0xcfbf,	// (0x000227b7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcfbf,	// (0x000227b7) hc_cl_list_single_graphic_pane_t1

0xcf9f,	// (0x00022797) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcf9f,	// (0x00022797) hc_cl_list_double_graphic_heading_pane_g1

0xcfd4,	// (0x000227cc) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcfd4,	// (0x000227cc) hc_cl_list_double_graphic_heading_pane_g2

0xcfe8,	// (0x000227e0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcfe8,	// (0x000227e0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb01,	// (0x000252f9) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb01,	// (0x000252f9) hc_cl_list_double_graphic_heading_pane_g

0xcffc,	// (0x000227f4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xcffc,	// (0x000227f4) hc_cl_list_double_graphic_heading_pane_t1

0xd011,	// (0x00022809) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd011,	// (0x00022809) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb08,	// (0x00025300) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb08,	// (0x00025300) hc_cl_list_double_graphic_heading_pane_t

0x81f5,	// (0x0001d9ed) vid4_progress_pane_g1

0x8201,	// (0x0001d9f9) vid4_progress_pane_g2

0x820d,	// (0x0001da05) vid4_progress_pane_g3

0x821c,	// (0x0001da14) vid4_progress_pane_g4

0x0004,

0xfb0d,	// (0x00025305) vid4_progress_pane_g

0x823a,	// (0x0001da32) vid4_progress_pane_t1

0x8250,	// (0x0001da48) vid4_progress_pane_t2

0x0002,

0xfb18,	// (0x00025310) vid4_progress_pane_t

0x827b,	// (0x0001da73) wait_bar_pane_cp07

0x36cc,	// (0x00018ec4) blid_firmament_pane_ParamLimits

0x370f,	// (0x00018f07) popup_blid_sat_info2_window_g1

0x3733,	// (0x00018f2b) popup_blid_sat_info2_window_t3

0x3741,	// (0x00018f39) popup_blid_sat_info2_window_t4

0x374f,	// (0x00018f47) popup_blid_sat_info2_window_t5

0x375d,	// (0x00018f55) popup_blid_sat_info2_window_t6

0x376d,	// (0x00018f65) popup_blid_sat_info2_window_t7

0x377b,	// (0x00018f73) popup_blid_sat_info2_window_t8

0x3789,	// (0x00018f81) popup_blid_sat_info2_window_t9

0x3797,	// (0x00018f8f) popup_blid_sat_info2_window_t10

0x385b,	// (0x00019053) aid_firma_cardinal_ParamLimits

0x386f,	// (0x00019067) blid_firmament_pane_t1_ParamLimits

0x3886,	// (0x0001907e) blid_firmament_pane_t2_ParamLimits

0x389d,	// (0x00019095) blid_firmament_pane_t3_ParamLimits

0x38b4,	// (0x000190ac) blid_firmament_pane_t4_ParamLimits

0xf73a,	// (0x00024f32) blid_firmament_pane_t_ParamLimits

0x38cb,	// (0x000190c3) blid_sat_info_pane_ParamLimits

0x0a18,	// (0x00016210) main_cam_set_pane_ParamLimits

0xbfc0,	// (0x000217b8) aid_size_cell_colour_35_ParamLimits

0xbfda,	// (0x000217d2) aid_size_cell_colour_112_ParamLimits

0xbff1,	// (0x000217e9) aid_size_cell_effect_ParamLimits

0x0a18,	// (0x00016210) bg_tb_trans_pane_cp02_ParamLimits

0x3c57,	// (0x0001944f) heading_imed_pane_ParamLimits

0xc00b,	// (0x00021803) listscroll_imed_pane_ParamLimits

0x2a05,	// (0x000181fd) popup_call2_audio_first_window_g5_ParamLimits

0x2a05,	// (0x000181fd) popup_call2_audio_first_window_g5

0x79d4,	// (0x0001d1cc) aid_size_touch_image3_arrow_left_ParamLimits

0x79d4,	// (0x0001d1cc) aid_size_touch_image3_arrow_left

0x79ea,	// (0x0001d1e2) aid_size_touch_image3_arrow_right_ParamLimits

0x79ea,	// (0x0001d1e2) aid_size_touch_image3_arrow_right

0x8266,	// (0x0001da5e) vid4_progress_pane_t3

0xc2b1,	// (0x00021aa9) main_hwr_training_symbol_option_pane_ParamLimits

0xc2b1,	// (0x00021aa9) main_hwr_training_symbol_option_pane

0x411a,	// (0x00019912) popup_hwr_training_preview_window_ParamLimits

0x411a,	// (0x00019912) popup_hwr_training_preview_window

0x771e,	// (0x0001cf16) hwr_training_navi_pane_g5_ParamLimits

0x771e,	// (0x0001cf16) hwr_training_navi_pane_g5

0x4613,	// (0x00019e0b) popup_char_count_window

0x8120,	// (0x0001d918) bg_popup_sub_pane_cp20_ParamLimits

0x812e,	// (0x0001d926) list_vitu2_match_list_pane_ParamLimits

0x813a,	// (0x0001d932) vitu2_page_scroll_pane_ParamLimits

0x813a,	// (0x0001d932) vitu2_page_scroll_pane

0x4ce8,	// (0x0001a4e0) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4ce8,	// (0x0001a4e0) list_single_hwr_training_symbol_option_pane

0x4cfb,	// (0x0001a4f3) list_single_hwr_training_symbol_option_pane_g1

0x4d03,	// (0x0001a4fb) list_single_hwr_training_symbol_option_pane_t1

0x4d11,	// (0x0001a509) bg_button_pane_cp023

0x4d1a,	// (0x0001a512) bg_button_pane_cp024

0xd026,	// (0x0002281e) vitu2_page_scroll_pane_g1

0xd02e,	// (0x00022826) vitu2_page_scroll_pane_g2

0x0001,

0xfb1f,	// (0x00025317) vitu2_page_scroll_pane_g

0xd036,	// (0x0002282e) vitu2_page_scroll_pane_t1

0x35e8,	// (0x00018de0) popup_char_count_window_g1

0x4d4d,	// (0x0001a545) popup_char_count_window_g2

0x4d56,	// (0x0001a54e) popup_char_count_window_g3

0x0002,

0xfb24,	// (0x0002531c) popup_char_count_window_g

0x4d5f,	// (0x0001a557) popup_char_count_window_t1

0x09a8,	// (0x000161a0) main_vded2_pane

0x3e19,	// (0x00019611) aid_size_cell_imed_line

0x3e23,	// (0x0001961b) grid_imed_line_width_pane

0x7d2f,	// (0x0001d527) vid4_indicators_pane_g4

0x4d6d,	// (0x0001a565) cell_imed_line_width_pane_ParamLimits

0x4d6d,	// (0x0001a565) cell_imed_line_width_pane

0x4d81,	// (0x0001a579) cell_imed_line_width_pane_g1

0x4d8a,	// (0x0001a582) cell_imed_line_width_pane_g2

0x0001,

0xfb2b,	// (0x00025323) cell_imed_line_width_pane_g

0xd045,	// (0x0002283d) main_vded2_pane_g1_ParamLimits

0xd045,	// (0x0002283d) main_vded2_pane_g1

0xd052,	// (0x0002284a) main_vded2_pane_g2_ParamLimits

0xd052,	// (0x0002284a) main_vded2_pane_g2

0x0001,

0xfb30,	// (0x00025328) main_vded2_pane_g_ParamLimits

0xfb30,	// (0x00025328) main_vded2_pane_g

0xd060,	// (0x00022858) vded2_slider_pane_ParamLimits

0xd060,	// (0x00022858) vded2_slider_pane

0xd06d,	// (0x00022865) aid_size_touch_vded2_end

0xd077,	// (0x0002286f) aid_size_touch_vded2_playhead

0x4d92,	// (0x0001a58a) aid_size_touch_vded2_start

0x4d9a,	// (0x0001a592) vded2_slider_bg_pane

0x4da3,	// (0x0001a59b) vded2_slider_pane_g1

0x4dac,	// (0x0001a5a4) vded2_slider_pane_g2

0xd07f,	// (0x00022877) vded2_slider_pane_g3

0x0002,

0xfb35,	// (0x0002532d) vded2_slider_pane_g

0x4db4,	// (0x0001a5ac) vded2_slider_bg_pane_g1

0x4dbd,	// (0x0001a5b5) vded2_slider_bg_pane_g2

0x4dc6,	// (0x0001a5be) vded2_slider_bg_pane_g3

0x0002,

0xfb3c,	// (0x00025334) vded2_slider_bg_pane_g

0xa737,	// (0x0001ff2f) aid_postcard_touch_down_pane_ParamLimits

0xa737,	// (0x0001ff2f) aid_postcard_touch_down_pane

0xa747,	// (0x0001ff3f) aid_postcard_touch_up_pane_ParamLimits

0xa747,	// (0x0001ff3f) aid_postcard_touch_up_pane

0x09a8,	// (0x000161a0) main_blid2_pane

0x33e1,	// (0x00018bd9) popup_blid2_search_window

0x09a8,	// (0x000161a0) blid2_gps_pane

0x09a8,	// (0x000161a0) blid2_navig_pane

0x09a8,	// (0x000161a0) blid2_search_pane

0x09a8,	// (0x000161a0) blid2_tripm_pane

0xd088,	// (0x00022880) blid2_search_pane_g1_ParamLimits

0xd088,	// (0x00022880) blid2_search_pane_g1

0xd098,	// (0x00022890) blid2_search_pane_t1_ParamLimits

0xd098,	// (0x00022890) blid2_search_pane_t1

0xd0aa,	// (0x000228a2) aid_size_cell_blid2_gps_ParamLimits

0xd0aa,	// (0x000228a2) aid_size_cell_blid2_gps

0xd0ba,	// (0x000228b2) blid2_gps_pane_g1_ParamLimits

0xd0ba,	// (0x000228b2) blid2_gps_pane_g1

0xd0c6,	// (0x000228be) grid_blid2_satellite_pane_ParamLimits

0xd0c6,	// (0x000228be) grid_blid2_satellite_pane

0xd0d6,	// (0x000228ce) blid2_navig_pane_g1_ParamLimits

0xd0d6,	// (0x000228ce) blid2_navig_pane_g1

0xd0e2,	// (0x000228da) blid2_navig_pane_t1_ParamLimits

0xd0e2,	// (0x000228da) blid2_navig_pane_t1

0xd0f4,	// (0x000228ec) blid2_navig_pane_t2_ParamLimits

0xd0f4,	// (0x000228ec) blid2_navig_pane_t2

0x0001,

0xfb43,	// (0x0002533b) blid2_navig_pane_t_ParamLimits

0xfb43,	// (0x0002533b) blid2_navig_pane_t

0xd106,	// (0x000228fe) blid2_navig_ring_pane_ParamLimits

0xd106,	// (0x000228fe) blid2_navig_ring_pane

0xd116,	// (0x0002290e) blid2_speed_pane_ParamLimits

0xd116,	// (0x0002290e) blid2_speed_pane

0xd122,	// (0x0002291a) blid2_tripm_pane_g1_ParamLimits

0xd122,	// (0x0002291a) blid2_tripm_pane_g1

0xd132,	// (0x0002292a) blid2_tripm_pane_g2_ParamLimits

0xd132,	// (0x0002292a) blid2_tripm_pane_g2

0xd13e,	// (0x00022936) blid2_tripm_pane_g3_ParamLimits

0xd13e,	// (0x00022936) blid2_tripm_pane_g3

0xd14a,	// (0x00022942) blid2_tripm_pane_g4_ParamLimits

0xd14a,	// (0x00022942) blid2_tripm_pane_g4

0xd156,	// (0x0002294e) blid2_tripm_pane_g5_ParamLimits

0xd156,	// (0x0002294e) blid2_tripm_pane_g5

0x0005,

0xfb48,	// (0x00025340) blid2_tripm_pane_g_ParamLimits

0xfb48,	// (0x00025340) blid2_tripm_pane_g

0xd172,	// (0x0002296a) blid2_tripm_pane_t1_ParamLimits

0xd172,	// (0x0002296a) blid2_tripm_pane_t1

0xd186,	// (0x0002297e) blid2_tripm_pane_t2_ParamLimits

0xd186,	// (0x0002297e) blid2_tripm_pane_t2

0xd19a,	// (0x00022992) blid2_tripm_pane_t3_ParamLimits

0xd19a,	// (0x00022992) blid2_tripm_pane_t3

0x0003,

0xfb55,	// (0x0002534d) blid2_tripm_pane_t_ParamLimits

0xfb55,	// (0x0002534d) blid2_tripm_pane_t

0xd1cc,	// (0x000229c4) cell_blid2_satellite_pane_ParamLimits

0xd1cc,	// (0x000229c4) cell_blid2_satellite_pane

0xd1e6,	// (0x000229de) cell_blid2_satellite_pane_g1

0x4dcf,	// (0x0001a5c7) cell_blid2_satellite_pane_t1

0x38db,	// (0x000190d3) blid2_speed_pane_g1

0x4ddd,	// (0x0001a5d5) blid2_speed_pane_t1

0x4deb,	// (0x0001a5e3) blid2_speed_pane_t2

0x0001,

0xfb5e,	// (0x00025356) blid2_speed_pane_t

0x38db,	// (0x000190d3) blid2_navig_ring_pane_g1

0xd1ef,	// (0x000229e7) blid2_navig_ring_pane_g2

0xd1f7,	// (0x000229ef) blid2_navig_ring_pane_g3

0xd1ff,	// (0x000229f7) blid2_navig_ring_pane_g4

0xd207,	// (0x000229ff) blid2_navig_ring_pane_g5

0x0004,

0xfb63,	// (0x0002535b) blid2_navig_ring_pane_g

0x09a8,	// (0x000161a0) bg_popup_window_pane_cp011

0x4df9,	// (0x0001a5f1) popup_blid2_search_window_g1

0x4e01,	// (0x0001a5f9) popup_blid2_search_window_t1

0x4e0f,	// (0x0001a607) popup_blid2_search_window_t2

0x0001,

0xfb6e,	// (0x00025366) popup_blid2_search_window_t

0x1685,	// (0x00016e7d) main_browser_pane_g1

0x11c3,	// (0x000169bb) main_browser_pane_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_button_pane_cp011_ParamLimits

0x8042,	// (0x0001d83a) cell_vitu2_function_pane_g1_ParamLimits

0x0a18,	// (0x00016210) bg_popup_sub_pane_cp22_ParamLimits

0xcc52,	// (0x0002244a) input_focus_pane_cp08_ParamLimits

0xcc5f,	// (0x00022457) popup_vitu2_query_button_pane_ParamLimits

0xcc5f,	// (0x00022457) popup_vitu2_query_button_pane

0xcc34,	// (0x0002242c) popup_vitu2_query_input_button_pane

0x491b,	// (0x0001a113) popup_vitu2_query_window_g1_ParamLimits

0xcc70,	// (0x00022468) popup_vitu2_query_window_g2_ParamLimits

0xfa75,	// (0x0002526d) popup_vitu2_query_window_g_ParamLimits

0x09a8,	// (0x000161a0) bg_button_pane_cp026

0xd20f,	// (0x00022a07) popup_vitu2_query_input_button_pane_g1

0x09a8,	// (0x000161a0) bg_button_pane_cp025

0x4e1d,	// (0x0001a615) popup_vitu2_query_button_pane_t1

0xb5ac,	// (0x00020da4) main_mp3_pane_t6

0xb5bc,	// (0x00020db4) popup_slider_window_cp01

0x7c1e,	// (0x0001d416) cam4_battery_pane

0x7d09,	// (0x0001d501) cam4_battery_pane_cp02

0x81e5,	// (0x0001d9dd) cam4_battery_pane_cp01

0x81ed,	// (0x0001d9e5) cam4_battery_pane_cp03

0x4e2b,	// (0x0001a623) cam4_battery_pane_g1

0x38db,	// (0x000190d3) cam4_battery_pane_g2

0x0001,

0xfb73,	// (0x0002536b) cam4_battery_pane_g

0x37a5,	// (0x00018f9d) popup_blid_sat_info2_window_t11

0xa09b,	// (0x0001f893) aid_size_touch_mv_arrow_left_ParamLimits

0xa0c6,	// (0x0001f8be) aid_size_touch_mv_arrow_right_ParamLimits

0x1e9c,	// (0x00017694) navi_pane_g1_ParamLimits

0xa0ef,	// (0x0001f8e7) navi_pane_g2_ParamLimits

0xa11d,	// (0x0001f915) navi_pane_g3_ParamLimits

0xf44c,	// (0x00024c44) navi_pane_g_ParamLimits

0xa177,	// (0x0001f96f) navi_pane_mv_t1_ParamLimits

0xc017,	// (0x0002180f) grid_imed_effect_pane_ParamLimits

0x15ce,	// (0x00016dc6) aid_placing_vt_slider_lsc

0x15d6,	// (0x00016dce) aid_placing_vt_slider_prt

0x0a18,	// (0x00016210) bg_tb_trans_pane_cp01_ParamLimits

0x3a62,	// (0x0001925a) popup_image_details_window_g1_ParamLimits

0x3a75,	// (0x0001926d) popup_image_details_window_g2_ParamLimits

0x3a8a,	// (0x00019282) popup_image_details_window_g3_ParamLimits

0x3a8a,	// (0x00019282) popup_image_details_window_g3

0xf77f,	// (0x00024f77) popup_image_details_window_g_ParamLimits

0x3a9e,	// (0x00019296) popup_image_details_window_t1_ParamLimits

0x3ab0,	// (0x000192a8) popup_image_details_window_t2_ParamLimits

0x3ac9,	// (0x000192c1) popup_image_details_window_t3_ParamLimits

0x3add,	// (0x000192d5) popup_image_details_window_t4_ParamLimits

0x3af8,	// (0x000192f0) popup_image_details_window_t5_ParamLimits

0xf786,	// (0x00024f7e) popup_image_details_window_t_ParamLimits

0xcf3d,	// (0x00022735) cl_header_name_pane_ParamLimits

0xcf3d,	// (0x00022735) cl_header_name_pane

0xd217,	// (0x00022a0f) cl_header_name_pane_t1_ParamLimits

0xd217,	// (0x00022a0f) cl_header_name_pane_t1

0xd22e,	// (0x00022a26) cl_header_name_pane_t2_ParamLimits

0xd22e,	// (0x00022a26) cl_header_name_pane_t2

0xd258,	// (0x00022a50) cl_header_name_pane_t3_ParamLimits

0xd258,	// (0x00022a50) cl_header_name_pane_t3

0x0002,

0xfb78,	// (0x00025370) cl_header_name_pane_t_ParamLimits

0xfb78,	// (0x00025370) cl_header_name_pane_t

0xa148,	// (0x0001f940) navi_pane_mv_g2_ParamLimits

0x45b1,	// (0x00019da9) field_vitu2_entry_pane_g1_ParamLimits

0x45bd,	// (0x00019db5) field_vitu2_entry_pane_g2_ParamLimits

0x45c9,	// (0x00019dc1) field_vitu2_entry_pane_g3_ParamLimits

0x45c9,	// (0x00019dc1) field_vitu2_entry_pane_g3

0xf974,	// (0x0002516c) field_vitu2_entry_pane_g_ParamLimits

0x7f17,	// (0x0001d70f) cell_vitu2_itu_pane_g1_ParamLimits

0x7f27,	// (0x0001d71f) cell_vitu2_itu_pane_g2_ParamLimits

0x7f27,	// (0x0001d71f) cell_vitu2_itu_pane_g2

0x0001,

0xf980,	// (0x00025178) cell_vitu2_itu_pane_g_ParamLimits

0xf980,	// (0x00025178) cell_vitu2_itu_pane_g

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp05_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp05

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp03

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp04

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp10_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp10

0xcedf,	// (0x000226d7) bg_vkb2_func_pane_cp08

0xcec5,	// (0x000226bd) bg_vkb2_func_pane_cp06

0xced3,	// (0x000226cb) bg_vkb2_func_pane_cp07

0x4d23,	// (0x0001a51b) bg_vkb2_func_pane_cp11_ParamLimits

0x4d23,	// (0x0001a51b) bg_vkb2_func_pane_cp11

0x4d38,	// (0x0001a530) bg_vkb2_func_pane_cp12_ParamLimits

0x4d38,	// (0x0001a530) bg_vkb2_func_pane_cp12

0x09a8,	// (0x000161a0) bg_vkb2_func_pane_cp09

0x4625,	// (0x00019e1d) bg_vkb2_func_pane_g1

0x1796,	// (0x00016f8e) bg_vkb2_func_pane_g2

0x462d,	// (0x00019e25) bg_vkb2_func_pane_g3

0x4635,	// (0x00019e2d) bg_vkb2_func_pane_g4

0x48a6,	// (0x0001a09e) bg_vkb2_func_pane_g5

0x464d,	// (0x00019e45) bg_vkb2_func_pane_g6

0x4655,	// (0x00019e4d) bg_vkb2_func_pane_g7

0x4645,	// (0x00019e3d) bg_vkb2_func_pane_g8

0x1776,	// (0x00016f6e) bg_vkb2_func_pane_g9

0x0008,

0xfb7f,	// (0x00025377) bg_vkb2_func_pane_g

0xd164,	// (0x0002295c) blid2_tripm_pane_g6_ParamLimits

0xd164,	// (0x0002295c) blid2_tripm_pane_g6

0x43e1,	// (0x00019bd9) mp4_progress_pane_g1

0xd1c0,	// (0x000229b8) blid2_tripm_values_pane_ParamLimits

0xd1c0,	// (0x000229b8) blid2_tripm_values_pane

0xd27d,	// (0x00022a75) blid2_tripm_values_pane_t1

0xd28b,	// (0x00022a83) blid2_tripm_values_pane_t2

0xd299,	// (0x00022a91) blid2_tripm_values_pane_t3

0xd2a7,	// (0x00022a9f) blid2_tripm_values_pane_t4

0xd2b5,	// (0x00022aad) blid2_tripm_values_pane_t5

0xd2c3,	// (0x00022abb) blid2_tripm_values_pane_t6

0xd2d1,	// (0x00022ac9) blid2_tripm_values_pane_t7

0xd2df,	// (0x00022ad7) blid2_tripm_values_pane_t8

0xd2ed,	// (0x00022ae5) blid2_tripm_values_pane_t9

0x0008,

0xfb92,	// (0x0002538a) blid2_tripm_values_pane_t

0x8f60,	// (0x0001e758) call_video_pane_t1_ParamLimits

0x8f7a,	// (0x0001e772) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00024acd) call_video_pane_t_ParamLimits

0xa6a0,	// (0x0001fe98) msg_header_pane_g1_ParamLimits

0x20d7,	// (0x000178cf) msg_header_pane_g2_ParamLimits

0x20d7,	// (0x000178cf) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00024ce7) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00024ce7) msg_header_pane_g

0x11c3,	// (0x000169bb) main_clock2_pane_ParamLimits

0xbe14,	// (0x0002160c) grid_clock2_toolbar_pane_ParamLimits

0xbe14,	// (0x0002160c) grid_clock2_toolbar_pane

0xbe14,	// (0x0002160c) listscroll_clock2_pane_ParamLimits

0xbe14,	// (0x0002160c) listscroll_clock2_pane

0xbec2,	// (0x000216ba) main_clock2_pane_t3_ParamLimits

0xbec2,	// (0x000216ba) main_clock2_pane_t3

0xbed4,	// (0x000216cc) main_clock2_pane_t4_ParamLimits

0xbed4,	// (0x000216cc) main_clock2_pane_t4

0x4e35,	// (0x0001a62d) cell_clock2_toolbar_pane

0x4e3d,	// (0x0001a635) cell_clock2_toolbar_pane_cp01

0x4e3d,	// (0x0001a635) cell_clock2_toolbar_pane_cp02

0x4e45,	// (0x0001a63d) cell_clock2_toolbar_pane_cp03

0x4e4d,	// (0x0001a645) list_clock2_pane

0x1def,	// (0x000175e7) scroll_pane_cp10

0x4e55,	// (0x0001a64d) list_single_clock2_pane_ParamLimits

0x4e55,	// (0x0001a64d) list_single_clock2_pane

0x1f3c,	// (0x00017734) list_highlight_pane_cp08

0x4e62,	// (0x0001a65a) list_single_clock2_pane_t1

0x4e70,	// (0x0001a668) list_single_clock2_pane_t2

0x0001,

0xfba5,	// (0x0002539d) list_single_clock2_pane_t

0x09a8,	// (0x000161a0) bg_button_pane_cp10

0x4e7e,	// (0x0001a676) cell_clock2_toolbar_pane_g1

0x731e,	// (0x0001cb16) aid_main_viewer_pane_g1_ParamLimits

0x731e,	// (0x0001cb16) aid_main_viewer_pane_g1

0x732a,	// (0x0001cb22) aid_main_viewer_pane_g2_ParamLimits

0x732a,	// (0x0001cb22) aid_main_viewer_pane_g2

0xa6f3,	// (0x0001feeb) aid_main_viewer_pane_g3_ParamLimits

0xa6f3,	// (0x0001feeb) aid_main_viewer_pane_g3

0xa704,	// (0x0001fefc) aid_main_viewer_pane_g4_ParamLimits

0xa704,	// (0x0001fefc) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00024cf8) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00024cf8) aid_main_viewer_pane_g

0xae5a,	// (0x00020652) main_calc_pane_ParamLimits

0xae67,	// (0x0002065f) main_dialer2_pane_ParamLimits

0x09a8,	// (0x000161a0) main_cam6_pane

0x09a8,	// (0x000161a0) main_vid6_pane

0xbe20,	// (0x00021618) listscroll_gen_pane_cp06_ParamLimits

0xbe20,	// (0x00021618) listscroll_gen_pane_cp06

0xbee6,	// (0x000216de) main_clock2_pane_t5_ParamLimits

0xbee6,	// (0x000216de) main_clock2_pane_t5

0xbf35,	// (0x0002172d) aid_call2_pane_cp10_ParamLimits

0xbf47,	// (0x0002173f) aid_call_pane_cp10_ParamLimits

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbf59,	// (0x00021751) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbf59,	// (0x00021751) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1e71,	// (0x00017669) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf836,	// (0x0002502e) popup_clock_analogue_window_cp10_g_ParamLimits

0xbf6f,	// (0x00021767) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc3b8,	// (0x00021bb0) cell_dialer2_keypad_pane_g2_ParamLimits

0xc3b8,	// (0x00021bb0) cell_dialer2_keypad_pane_g2

0x0001,

0xf91c,	// (0x00025114) cell_dialer2_keypad_pane_g_ParamLimits

0xf91c,	// (0x00025114) cell_dialer2_keypad_pane_g

0xc3d4,	// (0x00021bcc) cell_dialer2_keypad_pane_t1

0xc7bb,	// (0x00021fb3) main_cset_text2_pane_ParamLimits

0xc7bb,	// (0x00021fb3) main_cset_text2_pane

0x4af7,	// (0x0001a2ef) area_vitu2_query_pane_g1_ParamLimits

0xce64,	// (0x0002265c) area_vitu2_query_pane_g2_ParamLimits

0xfac2,	// (0x000252ba) area_vitu2_query_pane_g_ParamLimits

0x4b7b,	// (0x0001a373) area_vitu2_query_pane_t7_ParamLimits

0x4b7b,	// (0x0001a373) area_vitu2_query_pane_t7

0xcec5,	// (0x000226bd) bg_button_pane_cp018_ParamLimits

0xced3,	// (0x000226cb) bg_button_pane_cp021_ParamLimits

0xcedf,	// (0x000226d7) bg_button_pane_cp022_ParamLimits

0xcedf,	// (0x000226d7) bg_vkb2_func_pane_cp08_ParamLimits

0xcec5,	// (0x000226bd) bg_vkb2_func_pane_cp06_ParamLimits

0xced3,	// (0x000226cb) bg_vkb2_func_pane_cp07_ParamLimits

0xcef0,	// (0x000226e8) input_focus_pane_cp09_ParamLimits

0x828b,	// (0x0001da83) cam6_autofocus_pane_ParamLimits

0x828b,	// (0x0001da83) cam6_autofocus_pane

0x82ad,	// (0x0001daa5) cam6_image_uncrop_pane_ParamLimits

0x82ad,	// (0x0001daa5) cam6_image_uncrop_pane

0x82da,	// (0x0001dad2) cam6_indi_pane_ParamLimits

0x82da,	// (0x0001dad2) cam6_indi_pane

0x82f4,	// (0x0001daec) cam6_mode_pane_ParamLimits

0x82f4,	// (0x0001daec) cam6_mode_pane

0x8308,	// (0x0001db00) cam6_timer_pane_ParamLimits

0x8308,	// (0x0001db00) cam6_timer_pane

0x8314,	// (0x0001db0c) cam6_zoom_pane_ParamLimits

0x8314,	// (0x0001db0c) cam6_zoom_pane

0xd2fb,	// (0x00022af3) cam6_mode_pane_g1_ParamLimits

0xd2fb,	// (0x00022af3) cam6_mode_pane_g1

0xd307,	// (0x00022aff) cam6_mode_pane_g2_ParamLimits

0xd307,	// (0x00022aff) cam6_mode_pane_g2

0xd313,	// (0x00022b0b) cam6_mode_pane_g3_ParamLimits

0xd313,	// (0x00022b0b) cam6_mode_pane_g3

0xd31f,	// (0x00022b17) cam6_mode_pane_g4_ParamLimits

0xd31f,	// (0x00022b17) cam6_mode_pane_g4

0x0003,

0xfbaa,	// (0x000253a2) cam6_mode_pane_g_ParamLimits

0xfbaa,	// (0x000253a2) cam6_mode_pane_g

0x4e94,	// (0x0001a68c) bg_tb_trans_pane_cp08_ParamLimits

0x4e94,	// (0x0001a68c) bg_tb_trans_pane_cp08

0x4ea2,	// (0x0001a69a) cam6_battery_pane_ParamLimits

0x4ea2,	// (0x0001a69a) cam6_battery_pane

0x4eb8,	// (0x0001a6b0) cam6_indi_pane_g1_ParamLimits

0x4eb8,	// (0x0001a6b0) cam6_indi_pane_g1

0x4eca,	// (0x0001a6c2) cam6_indi_pane_g2_ParamLimits

0x4eca,	// (0x0001a6c2) cam6_indi_pane_g2

0x4edc,	// (0x0001a6d4) cam6_indi_pane_g3_ParamLimits

0x4edc,	// (0x0001a6d4) cam6_indi_pane_g3

0x0002,

0xfbb3,	// (0x000253ab) cam6_indi_pane_g_ParamLimits

0xfbb3,	// (0x000253ab) cam6_indi_pane_g

0x4eee,	// (0x0001a6e6) cam6_indi_pane_t1_ParamLimits

0x4eee,	// (0x0001a6e6) cam6_indi_pane_t1

0xc4ef,	// (0x00021ce7) cam6_autofocus_pane_g1

0xc4e7,	// (0x00021cdf) cam6_autofocus_pane_g2

0xc4ff,	// (0x00021cf7) cam6_autofocus_pane_g3

0xc4f7,	// (0x00021cef) cam6_autofocus_pane_g4

0x0003,

0xfbba,	// (0x000253b2) cam6_autofocus_pane_g

0x4f14,	// (0x0001a70c) cam6_timer_pane_g1

0x4f1c,	// (0x0001a714) cam6_timer_pane_t1

0x4f2a,	// (0x0001a722) cam6_zoom_cont_pane

0x4f32,	// (0x0001a72a) cam6_zoom_pane_g1

0x4f3a,	// (0x0001a732) cam6_zoom_pane_g2

0xd32b,	// (0x00022b23) cam6_zoom_pane_g3

0x0002,

0xfbc3,	// (0x000253bb) cam6_zoom_pane_g

0x38db,	// (0x000190d3) cam6_battery_pane_g1

0x38db,	// (0x000190d3) cam6_battery_pane_g2

0x0001,

0xf743,	// (0x00024f3b) cam6_battery_pane_g

0x4f42,	// (0x0001a73a) cam6_zoom_cont_pane_g1

0x4f4b,	// (0x0001a743) cam6_zoom_cont_pane_g2

0x4f54,	// (0x0001a74c) cam6_zoom_cont_pane_g3

0x0002,

0xfbca,	// (0x000253c2) cam6_zoom_cont_pane_g

0xd345,	// (0x00022b3d) cam6_mode_pane_cp_ParamLimits

0xd345,	// (0x00022b3d) cam6_mode_pane_cp

0xd359,	// (0x00022b51) cam6_zoom_pane_cp_ParamLimits

0xd359,	// (0x00022b51) cam6_zoom_pane_cp

0xd371,	// (0x00022b69) vid6_image_uncrop_cif_pane_ParamLimits

0xd371,	// (0x00022b69) vid6_image_uncrop_cif_pane

0xd39d,	// (0x00022b95) vid6_image_uncrop_nhd_pane_ParamLimits

0xd39d,	// (0x00022b95) vid6_image_uncrop_nhd_pane

0xd3ba,	// (0x00022bb2) vid6_image_uncrop_vga_pane_ParamLimits

0xd3ba,	// (0x00022bb2) vid6_image_uncrop_vga_pane

0xd3d9,	// (0x00022bd1) vid6_image_uncrop_wvga_pane_ParamLimits

0xd3d9,	// (0x00022bd1) vid6_image_uncrop_wvga_pane

0xd3f6,	// (0x00022bee) vid6_indi_pane_ParamLimits

0xd3f6,	// (0x00022bee) vid6_indi_pane

0x4e94,	// (0x0001a68c) bg_tb_trans_pane_cp09_ParamLimits

0x4e94,	// (0x0001a68c) bg_tb_trans_pane_cp09

0x4f9e,	// (0x0001a796) cam6_battery_pane_cp_ParamLimits

0x4f9e,	// (0x0001a796) cam6_battery_pane_cp

0x4faa,	// (0x0001a7a2) vid6_indi_pane_g1_ParamLimits

0x4faa,	// (0x0001a7a2) vid6_indi_pane_g1

0x4fbc,	// (0x0001a7b4) vid6_indi_pane_g2_ParamLimits

0x4fbc,	// (0x0001a7b4) vid6_indi_pane_g2

0x4fce,	// (0x0001a7c6) vid6_indi_pane_g3_ParamLimits

0x4fce,	// (0x0001a7c6) vid6_indi_pane_g3

0x4fe3,	// (0x0001a7db) vid6_indi_pane_g4_ParamLimits

0x4fe3,	// (0x0001a7db) vid6_indi_pane_g4

0x4ff8,	// (0x0001a7f0) vid6_indi_pane_g5_ParamLimits

0x4ff8,	// (0x0001a7f0) vid6_indi_pane_g5

0x0004,

0xfbd1,	// (0x000253c9) vid6_indi_pane_g_ParamLimits

0xfbd1,	// (0x000253c9) vid6_indi_pane_g

0x5012,	// (0x0001a80a) vid6_indi_pane_t1_ParamLimits

0x5012,	// (0x0001a80a) vid6_indi_pane_t1

0x5028,	// (0x0001a820) vid6_indi_pane_t2_ParamLimits

0x5028,	// (0x0001a820) vid6_indi_pane_t2

0x5050,	// (0x0001a848) vid6_indi_pane_t3_ParamLimits

0x5050,	// (0x0001a848) vid6_indi_pane_t3

0x5078,	// (0x0001a870) vid6_indi_pane_t4_ParamLimits

0x5078,	// (0x0001a870) vid6_indi_pane_t4

0x0003,

0xfbdc,	// (0x000253d4) vid6_indi_pane_t_ParamLimits

0xfbdc,	// (0x000253d4) vid6_indi_pane_t

0x509c,	// (0x0001a894) wait_bar_pane_cp08

0xd419,	// (0x00022c11) main_cset_text2_pane_t1_ParamLimits

0xd419,	// (0x00022c11) main_cset_text2_pane_t1

0xd333,	// (0x00022b2b) listscroll_gen_pane_cp06_t1_ParamLimits

0xd333,	// (0x00022b2b) listscroll_gen_pane_cp06_t1

0x09a8,	// (0x000161a0) main_cam6_set_pane

0x7c10,	// (0x0001d408) bg_tb_trans_pane_cp06_ParamLimits

0x7c26,	// (0x0001d41e) cam4_indicators_pane_g1_ParamLimits

0x7c33,	// (0x0001d42b) cam4_indicators_pane_g2_ParamLimits

0xf950,	// (0x00025148) cam4_indicators_pane_g_ParamLimits

0x7c53,	// (0x0001d44b) cam4_indicators_pane_t1_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_tb_trans_pane_cp07_ParamLimits

0x7c26,	// (0x0001d41e) vid4_indicators_pane_g1_ParamLimits

0x7d11,	// (0x0001d509) vid4_indicators_pane_g2_ParamLimits

0x7d1e,	// (0x0001d516) vid4_indicators_pane_g3_ParamLimits

0x7d2f,	// (0x0001d527) vid4_indicators_pane_g4_ParamLimits

0xf962,	// (0x0002515a) vid4_indicators_pane_g_ParamLimits

0x7d4b,	// (0x0001d543) vid4_indicators_pane_t1_ParamLimits

0x81f5,	// (0x0001d9ed) vid4_progress_pane_g1_ParamLimits

0x8201,	// (0x0001d9f9) vid4_progress_pane_g2_ParamLimits

0x820d,	// (0x0001da05) vid4_progress_pane_g3_ParamLimits

0x821c,	// (0x0001da14) vid4_progress_pane_g4_ParamLimits

0xfb0d,	// (0x00025305) vid4_progress_pane_g_ParamLimits

0x823a,	// (0x0001da32) vid4_progress_pane_t1_ParamLimits

0x8250,	// (0x0001da48) vid4_progress_pane_t2_ParamLimits

0x8266,	// (0x0001da5e) vid4_progress_pane_t3_ParamLimits

0xfb18,	// (0x00025310) vid4_progress_pane_t_ParamLimits

0x827b,	// (0x0001da73) wait_bar_pane_cp07_ParamLimits

0xd457,	// (0x00022c4f) main_cam6_set_pane_g2_ParamLimits

0xd457,	// (0x00022c4f) main_cam6_set_pane_g2

0xd463,	// (0x00022c5b) main_cset6_listscroll_pane_ParamLimits

0xd463,	// (0x00022c5b) main_cset6_listscroll_pane

0xd48e,	// (0x00022c86) main_cset6_slider_pane_ParamLimits

0xd48e,	// (0x00022c86) main_cset6_slider_pane

0xd49a,	// (0x00022c92) main_cset6_text2_pane_ParamLimits

0xd49a,	// (0x00022c92) main_cset6_text2_pane

0x50ab,	// (0x0001a8a3) main_cset6_text_pane

0x50b3,	// (0x0001a8ab) main_cset_list_pane_copy1_ParamLimits

0x50b3,	// (0x0001a8ab) main_cset_list_pane_copy1

0x50c3,	// (0x0001a8bb) scroll_pane_cp028_copy1

0xd4ad,	// (0x00022ca5) cset_list_set_pane_copy1

0xd4c7,	// (0x00022cbf) aid_position_infowindow_above_copy1

0xd4cf,	// (0x00022cc7) aid_position_infowindow_below_copy1

0x50cc,	// (0x0001a8c4) cset_list_set_pane_g1_copy1

0x4f5c,	// (0x0001a754) cset_list_set_pane_g3_copy1_ParamLimits

0x4f5c,	// (0x0001a754) cset_list_set_pane_g3_copy1

0x4f6b,	// (0x0001a763) cset_list_set_pane_t1_copy1_ParamLimits

0x4f6b,	// (0x0001a763) cset_list_set_pane_t1_copy1

0x0a18,	// (0x00016210) list_highlight_pane_cp021_copy1_ParamLimits

0x0a18,	// (0x00016210) list_highlight_pane_cp021_copy1

0x50d4,	// (0x0001a8cc) cset6_slider_pane_ParamLimits

0x50d4,	// (0x0001a8cc) cset6_slider_pane

0x5100,	// (0x0001a8f8) main_cset6_slider_pane_g1_ParamLimits

0x5100,	// (0x0001a8f8) main_cset6_slider_pane_g1

0xd4d7,	// (0x00022ccf) main_cset6_slider_pane_g2_ParamLimits

0xd4d7,	// (0x00022ccf) main_cset6_slider_pane_g2

0x4754,	// (0x00019f4c) main_cset6_slider_pane_g3_ParamLimits

0x4754,	// (0x00019f4c) main_cset6_slider_pane_g3

0xd4ff,	// (0x00022cf7) main_cset6_slider_pane_g4_ParamLimits

0xd4ff,	// (0x00022cf7) main_cset6_slider_pane_g4

0xd50b,	// (0x00022d03) main_cset6_slider_pane_g5_ParamLimits

0xd50b,	// (0x00022d03) main_cset6_slider_pane_g5

0x4754,	// (0x00019f4c) main_cset6_slider_pane_g7_ParamLimits

0x4754,	// (0x00019f4c) main_cset6_slider_pane_g7

0x4760,	// (0x00019f58) main_cset6_slider_pane_g8_ParamLimits

0x4760,	// (0x00019f58) main_cset6_slider_pane_g8

0xd519,	// (0x00022d11) main_cset6_slider_pane_g9_ParamLimits

0xd519,	// (0x00022d11) main_cset6_slider_pane_g9

0xd525,	// (0x00022d1d) main_cset6_slider_pane_g10_ParamLimits

0xd525,	// (0x00022d1d) main_cset6_slider_pane_g10

0xd4ff,	// (0x00022cf7) main_cset6_slider_pane_g11_ParamLimits

0xd4ff,	// (0x00022cf7) main_cset6_slider_pane_g11

0xd531,	// (0x00022d29) main_cset6_slider_pane_g12_ParamLimits

0xd531,	// (0x00022d29) main_cset6_slider_pane_g12

0xd53d,	// (0x00022d35) main_cset6_slider_pane_g13_ParamLimits

0xd53d,	// (0x00022d35) main_cset6_slider_pane_g13

0xd54b,	// (0x00022d43) main_cset6_slider_pane_g14_ParamLimits

0xd54b,	// (0x00022d43) main_cset6_slider_pane_g14

0xd559,	// (0x00022d51) main_cset6_slider_pane_g15_ParamLimits

0xd559,	// (0x00022d51) main_cset6_slider_pane_g15

0xd50b,	// (0x00022d03) main_cset6_slider_pane_g16_ParamLimits

0xd50b,	// (0x00022d03) main_cset6_slider_pane_g16

0xd571,	// (0x00022d69) main_cset6_slider_pane_g17_ParamLimits

0xd571,	// (0x00022d69) main_cset6_slider_pane_g17

0x0011,

0xfbe5,	// (0x000253dd) main_cset6_slider_pane_g_ParamLimits

0xfbe5,	// (0x000253dd) main_cset6_slider_pane_g

0x5128,	// (0x0001a920) main_cset6_slider_pane_t1_ParamLimits

0x5128,	// (0x0001a920) main_cset6_slider_pane_t1

0xd57f,	// (0x00022d77) main_cset6_slider_pane_t2_ParamLimits

0xd57f,	// (0x00022d77) main_cset6_slider_pane_t2

0xd5aa,	// (0x00022da2) main_cset6_slider_pane_t3_ParamLimits

0xd5aa,	// (0x00022da2) main_cset6_slider_pane_t3

0xd5d5,	// (0x00022dcd) main_cset6_slider_pane_t4_ParamLimits

0xd5d5,	// (0x00022dcd) main_cset6_slider_pane_t4

0xd602,	// (0x00022dfa) main_cset6_slider_pane_t5_ParamLimits

0xd602,	// (0x00022dfa) main_cset6_slider_pane_t5

0x5169,	// (0x0001a961) main_cset6_slider_pane_t7_ParamLimits

0x5169,	// (0x0001a961) main_cset6_slider_pane_t7

0xd62f,	// (0x00022e27) main_cset6_slider_pane_t8_ParamLimits

0xd62f,	// (0x00022e27) main_cset6_slider_pane_t8

0xd653,	// (0x00022e4b) main_cset6_slider_pane_t9_ParamLimits

0xd653,	// (0x00022e4b) main_cset6_slider_pane_t9

0xd677,	// (0x00022e6f) main_cset6_slider_pane_t10_ParamLimits

0xd677,	// (0x00022e6f) main_cset6_slider_pane_t10

0xd69b,	// (0x00022e93) main_cset6_slider_pane_t11_ParamLimits

0xd69b,	// (0x00022e93) main_cset6_slider_pane_t11

0x519f,	// (0x0001a997) main_cset6_slider_pane_t14_ParamLimits

0x519f,	// (0x0001a997) main_cset6_slider_pane_t14

0x51d8,	// (0x0001a9d0) main_cset6_slider_pane_t15_ParamLimits

0x51d8,	// (0x0001a9d0) main_cset6_slider_pane_t15

0x000b,

0xfc0a,	// (0x00025402) main_cset6_slider_pane_t_ParamLimits

0xfc0a,	// (0x00025402) main_cset6_slider_pane_t

0x4838,	// (0x0001a030) cset_slider_pane_g1_copy1

0x4841,	// (0x0001a039) cset_slider_pane_g2_copy1

0x484a,	// (0x0001a042) cset_slider_pane_g3_copy1

0x09a8,	// (0x000161a0) bg_popup_sub_pane_cp011_copy1

0x4927,	// (0x0001a11f) main_cset_text_pane_g1_copy1

0x492f,	// (0x0001a127) main_cset_text_pane_t1_copy1

0x493d,	// (0x0001a135) main_cset_text_pane_t2_copy1

0x494b,	// (0x0001a143) main_cset_text_pane_t3_copy1

0x4959,	// (0x0001a151) main_cset_text_pane_t4_copy1

0x4967,	// (0x0001a15f) main_cset_text_pane_t5_copy1

0x4975,	// (0x0001a16d) main_cset_text_pane_t6_copy1

0x4983,	// (0x0001a17b) main_cset_text_pane_t7_copy1

0xd6c1,	// (0x00022eb9) main_cset_text2_pane_t1_copy1

0x09a8,	// (0x000161a0) main_ncimui_pane

0xaea6,	// (0x0002069e) popup_query_ncimui_window_ParamLimits

0xaea6,	// (0x0002069e) popup_query_ncimui_window

0x3ba7,	// (0x0001939f) field_cale_ev2_pane_g4_ParamLimits

0x3ba7,	// (0x0001939f) field_cale_ev2_pane_g4

0xc358,	// (0x00021b50) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc358,	// (0x00021b50) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8f7,	// (0x000250ef) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8f7,	// (0x000250ef) cell_video_dialer_keypad_pane_g

0xc370,	// (0x00021b68) cell_video_dialer_keypad_pane_t1

0x09a8,	// (0x000161a0) bg_popup_window_pane_cp012

0x1cbf,	// (0x000174b7) heading_pane_cp06

0x5300,	// (0x0001aaf8) ncim_query_content_pane

0x09a8,	// (0x000161a0) bg_popup_heading_pane_cp01

0x5308,	// (0x0001ab00) ncim_heading_pane_t1

0x5316,	// (0x0001ab0e) ncim_indicator_popup_pane

0x5328,	// (0x0001ab20) ncim_query_button_pane

0x533c,	// (0x0001ab34) ncim_query_content_pane_t1

0x534e,	// (0x0001ab46) ncim_query_content_pane_t2

0x0005,

0xfc49,	// (0x00025441) ncim_query_content_pane_t

0x5388,	// (0x0001ab80) ncim_query_list_pane

0x539a,	// (0x0001ab92) ncim_query_popup_pane

0x5316,	// (0x0001ab0e) ncim_indicator_popup_pane_ParamLimits

0xd7bc,	// (0x00022fb4) ncim_query_content_pane_g1_ParamLimits

0xd7bc,	// (0x00022fb4) ncim_query_content_pane_g1

0x533c,	// (0x0001ab34) ncim_query_content_pane_t1_ParamLimits

0x534e,	// (0x0001ab46) ncim_query_content_pane_t2_ParamLimits

0xd7c8,	// (0x00022fc0) ncim_query_content_pane_t3_ParamLimits

0xd7c8,	// (0x00022fc0) ncim_query_content_pane_t3

0xd7e5,	// (0x00022fdd) ncim_query_content_pane_t4_ParamLimits

0xd7e5,	// (0x00022fdd) ncim_query_content_pane_t4

0xd802,	// (0x00022ffa) ncim_query_content_pane_t5_ParamLimits

0xd802,	// (0x00022ffa) ncim_query_content_pane_t5

0x5360,	// (0x0001ab58) ncim_query_content_pane_t6_ParamLimits

0x5360,	// (0x0001ab58) ncim_query_content_pane_t6

0xfc49,	// (0x00025441) ncim_query_content_pane_t_ParamLimits

0x5388,	// (0x0001ab80) ncim_query_list_pane_ParamLimits

0x539a,	// (0x0001ab92) ncim_query_popup_pane_ParamLimits

0x53ae,	// (0x0001aba6) wait_bar_pane_cp04

0x09a8,	// (0x000161a0) input_focus_pane_cp011

0x53b6,	// (0x0001abae) ncim_query_popup_pane_t1

0x53c4,	// (0x0001abbc) ncim_list_query_list_pane_ParamLimits

0x53c4,	// (0x0001abbc) ncim_list_query_list_pane

0x09a8,	// (0x000161a0) bg_button_pane_cp027

0x53d7,	// (0x0001abcf) ncim_query_button_pane_g1

0x09a8,	// (0x000161a0) list_highlight_pane_cp012

0x53e1,	// (0x0001abd9) ncim_list_query_list_pane_g1

0x53e9,	// (0x0001abe1) ncim_list_query_list_pane_t1

0x7c43,	// (0x0001d43b) cam4_indicators_pane_g3_ParamLimits

0x7c43,	// (0x0001d43b) cam4_indicators_pane_g3

0x7d3b,	// (0x0001d533) vid4_indicators_pane_g5_ParamLimits

0x7d3b,	// (0x0001d533) vid4_indicators_pane_g5

0x822b,	// (0x0001da23) vid4_progress_pane_g5_ParamLimits

0x822b,	// (0x0001da23) vid4_progress_pane_g5

0xd704,	// (0x00022efc) main_ncimui_pane_g1

0xd74a,	// (0x00022f42) ncimui_group_query_pane_ParamLimits

0xd74a,	// (0x00022f42) ncimui_group_query_pane

0xd77e,	// (0x00022f76) ncimui_list_pane_ParamLimits

0xd77e,	// (0x00022f76) ncimui_list_pane

0xd798,	// (0x00022f90) ncimui_text_pane_ParamLimits

0xd798,	// (0x00022f90) ncimui_text_pane

0xd81f,	// (0x00023017) ncimui_text_pane_t1_ParamLimits

0xd81f,	// (0x00023017) ncimui_text_pane_t1

0x53f7,	// (0x0001abef) ncimui_list_single_graphic_pane_ParamLimits

0x53f7,	// (0x0001abef) ncimui_list_single_graphic_pane

0xd83e,	// (0x00023036) ncimui_query_pane_ParamLimits

0xd83e,	// (0x00023036) ncimui_query_pane

0x09a8,	// (0x000161a0) list_highlight_pane_cp013

0x5407,	// (0x0001abff) ncim_list_query_list_pane_t1_copy1

0x53e1,	// (0x0001abd9) ncim_list_single_graphic_pane_g1

0x5415,	// (0x0001ac0d) ncim_query_button_pane_cp01

0x541d,	// (0x0001ac15) ncim_query_entry_pane_ParamLimits

0x541d,	// (0x0001ac15) ncim_query_entry_pane

0x542d,	// (0x0001ac25) ncimui_query_pane_g1

0x5435,	// (0x0001ac2d) ncimui_query_pane_t1_ParamLimits

0x5435,	// (0x0001ac2d) ncimui_query_pane_t1

0x09a8,	// (0x000161a0) input_focus_pane_cp012

0x53b6,	// (0x0001abae) ncim_query_entry_pane_t1

0x11c3,	// (0x000169bb) main_im_pane_ParamLimits

0x0a18,	// (0x00016210) main_mobtv_pane_ParamLimits

0x0a18,	// (0x00016210) main_mobtv_pane

0xd519,	// (0x00022d11) main_cset6_slider_pane_g18_ParamLimits

0xd519,	// (0x00022d11) main_cset6_slider_pane_g18

0xd53d,	// (0x00022d35) main_cset6_slider_pane_g19_ParamLimits

0xd53d,	// (0x00022d35) main_cset6_slider_pane_g19

0x45c9,	// (0x00019dc1) bg_main_mobtv_pane_ParamLimits

0x45c9,	// (0x00019dc1) bg_main_mobtv_pane

0xd84e,	// (0x00023046) main_mobtv_info_pane

0xd859,	// (0x00023051) main_mobtv_loading_pane_ParamLimits

0xd859,	// (0x00023051) main_mobtv_loading_pane

0x544b,	// (0x0001ac43) main_mobtv_pg_channel_list_pane

0x5455,	// (0x0001ac4d) main_mobtv_pg_hdr_pane

0xd866,	// (0x0002305e) main_mobtv_programe_curr_pane_ParamLimits

0xd866,	// (0x0002305e) main_mobtv_programe_curr_pane

0xd873,	// (0x0002306b) main_mobtv_programe_next_pane_ParamLimits

0xd873,	// (0x0002306b) main_mobtv_programe_next_pane

0x545e,	// (0x0001ac56) popup_mobtv_noti_window

0x38db,	// (0x000190d3) main_tv_pg_hdr_pane_g1

0x5466,	// (0x0001ac5e) main_tv_pg_hdr_pane_g2

0x546e,	// (0x0001ac66) main_tv_pg_hdr_pane_g3

0x5476,	// (0x0001ac6e) main_tv_pg_hdr_pane_g4

0x547e,	// (0x0001ac76) main_tv_pg_hdr_pane_g5

0x5488,	// (0x0001ac80) main_tv_pg_hdr_pane_g6

0x5492,	// (0x0001ac8a) main_tv_pg_hdr_pane_g7

0x549c,	// (0x0001ac94) main_tv_pg_hdr_pane_g8

0x54a6,	// (0x0001ac9e) main_tv_pg_hdr_pane_g9

0x54b0,	// (0x0001aca8) main_tv_pg_hdr_pane_g10

0x54ba,	// (0x0001acb2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc56,	// (0x0002544e) main_tv_pg_hdr_pane_g

0x54c4,	// (0x0001acbc) main_tv_pg_hdr_pane_t1

0x54d2,	// (0x0001acca) main_tv_pg_hdr_pane_t2

0x54e0,	// (0x0001acd8) main_tv_pg_hdr_pane_t3

0x54f0,	// (0x0001ace8) main_tv_pg_hdr_pane_t4

0x5500,	// (0x0001acf8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc6d,	// (0x00025465) main_tv_pg_hdr_pane_t

0x5510,	// (0x0001ad08) single_mobtv_pg_channel_pane_ParamLimits

0x5510,	// (0x0001ad08) single_mobtv_pg_channel_pane

0x5522,	// (0x0001ad1a) single_mobtv_pg_channel_table_pane

0x552b,	// (0x0001ad23) single_mobtv_pg_channel_thumb_pane

0x5534,	// (0x0001ad2c) single_tv_pg_channel_pane_g1

0x553d,	// (0x0001ad35) single_tv_pg_channel_pane_g2

0x0001,

0xfc78,	// (0x00025470) single_tv_pg_channel_pane_g

0x3b42,	// (0x0001933a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x3b42,	// (0x0001933a) bg_single_mobtv_pg_channel_thumb_pane

0x5546,	// (0x0001ad3e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5546,	// (0x0001ad3e) single_mobtv_pg_channel_thumb_pane_g1

0x5554,	// (0x0001ad4c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5554,	// (0x0001ad4c) single_mobtv_pg_channel_thumb_pane_g2

0x5560,	// (0x0001ad58) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5560,	// (0x0001ad58) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc7d,	// (0x00025475) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc7d,	// (0x00025475) single_mobtv_pg_channel_thumb_pane_g

0x556c,	// (0x0001ad64) single_mobtv_pg_channel_thumb_pane_t1

0x557a,	// (0x0001ad72) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc84,	// (0x0002547c) single_mobtv_pg_channel_thumb_pane_t

0x38db,	// (0x000190d3) bg_single_mobtv_pg_channel_table_pane_g1

0x38db,	// (0x000190d3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf743,	// (0x00024f3b) bg_single_mobtv_pg_channel_table_pane_g

0x5588,	// (0x0001ad80) single_mobtv_pg_channel_table_pane_t1

0x5596,	// (0x0001ad8e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc89,	// (0x00025481) single_mobtv_pg_channel_table_pane_t

0xd888,	// (0x00023080) main_mobtv_info_pane_g1_ParamLimits

0xd888,	// (0x00023080) main_mobtv_info_pane_g1

0xd8a4,	// (0x0002309c) main_mobtv_info_pane_t1_ParamLimits

0xd8a4,	// (0x0002309c) main_mobtv_info_pane_t1

0xd91c,	// (0x00023114) main_mobtv_info_pane_t2_ParamLimits

0xd91c,	// (0x00023114) main_mobtv_info_pane_t2

0x0002,

0xfc93,	// (0x0002548b) main_mobtv_info_pane_t_ParamLimits

0xfc93,	// (0x0002548b) main_mobtv_info_pane_t

0xd9ab,	// (0x000231a3) wait_bar_pane_cp05

0xd9bd,	// (0x000231b5) main_mobtv_loading_pane_g1_ParamLimits

0xd9bd,	// (0x000231b5) main_mobtv_loading_pane_g1

0xd9cb,	// (0x000231c3) main_mobtv_loading_pane_g2_ParamLimits

0xd9cb,	// (0x000231c3) main_mobtv_loading_pane_g2

0xd9d7,	// (0x000231cf) main_mobtv_loading_pane_g3_ParamLimits

0xd9d7,	// (0x000231cf) main_mobtv_loading_pane_g3

0x0002,

0xfc9a,	// (0x00025492) main_mobtv_loading_pane_g_ParamLimits

0xfc9a,	// (0x00025492) main_mobtv_loading_pane_g

0x55a4,	// (0x0001ad9c) main_mobtv_loading_pane_t1_ParamLimits

0x55a4,	// (0x0001ad9c) main_mobtv_loading_pane_t1

0x55bc,	// (0x0001adb4) main_mobtv_loading_pane_t2_ParamLimits

0x55bc,	// (0x0001adb4) main_mobtv_loading_pane_t2

0x0001,

0xfca1,	// (0x00025499) main_mobtv_loading_pane_t_ParamLimits

0xfca1,	// (0x00025499) main_mobtv_loading_pane_t

0xd9e5,	// (0x000231dd) wait_bar_pane_cp06_ParamLimits

0xd9e5,	// (0x000231dd) wait_bar_pane_cp06

0x55e0,	// (0x0001add8) main_mobtv_programe_curr_pane_t1

0x55ee,	// (0x0001ade6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfca6,	// (0x0002549e) main_mobtv_programe_curr_pane_t

0x55fc,	// (0x0001adf4) main_mobtv_programe_next_pane_t1

0x560a,	// (0x0001ae02) main_mobtv_programe_next_pane_t2

0x5618,	// (0x0001ae10) main_mobtv_programe_next_pane_t3

0x0002,

0xfcab,	// (0x000254a3) main_mobtv_programe_next_pane_t

0x09a8,	// (0x000161a0) bg_popup_mobtv_noti_window_pane

0x5626,	// (0x0001ae1e) popup_mobtv_noti_window_g1

0x562e,	// (0x0001ae26) popup_mobtv_noti_window_t1

0x563c,	// (0x0001ae34) popup_mobtv_noti_window_t2

0x0001,

0xfcb2,	// (0x000254aa) popup_mobtv_noti_window_t

0x38db,	// (0x000190d3) bg_popup_mobtv_noti_window_pane_g1

0x09a8,	// (0x000161a0) sc_clock_pane

0x09a8,	// (0x000161a0) main_fs_bigclock_pane

0xd1ae,	// (0x000229a6) blid2_tripm_pane_t4_ParamLimits

0xd1ae,	// (0x000229a6) blid2_tripm_pane_t4

0xd9f1,	// (0x000231e9) sc_clock_pane_g1_ParamLimits

0xd9f1,	// (0x000231e9) sc_clock_pane_g1

0xd9ff,	// (0x000231f7) sc_clock_pane_t1_ParamLimits

0xd9ff,	// (0x000231f7) sc_clock_pane_t1

0xda12,	// (0x0002320a) sc_clock_pane_t2_ParamLimits

0xda12,	// (0x0002320a) sc_clock_pane_t2

0xda24,	// (0x0002321c) sc_clock_pane_t3_ParamLimits

0xda24,	// (0x0002321c) sc_clock_pane_t3

0x0004,

0xfcb7,	// (0x000254af) sc_clock_pane_t_ParamLimits

0xfcb7,	// (0x000254af) sc_clock_pane_t

0xe843,	// (0x0002403b) main_fs_bigclock_indicator_pane_ParamLimits

0xe843,	// (0x0002403b) main_fs_bigclock_indicator_pane

0xdaac,	// (0x000232a4) main_fs_bigclock_pane_g1_ParamLimits

0xdaac,	// (0x000232a4) main_fs_bigclock_pane_g1

0xe84f,	// (0x00024047) main_fs_bigclock_pane_t1_ParamLimits

0xe84f,	// (0x00024047) main_fs_bigclock_pane_t1

0xe861,	// (0x00024059) main_fs_bigclock_pane_t2_ParamLimits

0xe861,	// (0x00024059) main_fs_bigclock_pane_t2

0xe873,	// (0x0002406b) main_fs_bigclock_pane_t3_ParamLimits

0xe873,	// (0x0002406b) main_fs_bigclock_pane_t3

0x0002,

0xfeb1,	// (0x000256a9) main_fs_bigclock_pane_t_ParamLimits

0xfeb1,	// (0x000256a9) main_fs_bigclock_pane_t

0xe885,	// (0x0002407d) main_fs_bigclock_indicator_pane_g1

0x5330,	// (0x0001ab28) ncim_query_content_pane_g2_ParamLimits

0x5330,	// (0x0001ab28) ncim_query_content_pane_g2

0x0001,

0xfc44,	// (0x0002543c) ncim_query_content_pane_g_ParamLimits

0xfc44,	// (0x0002543c) ncim_query_content_pane_g

0xda38,	// (0x00023230) sc_clock_pane_t4_ParamLimits

0xda38,	// (0x00023230) sc_clock_pane_t4

0x0a18,	// (0x00016210) main_radioblah_pane

0x44fa,	// (0x00019cf2) cell_call4_button_pane_t1_copy1_ParamLimits

0x44fa,	// (0x00019cf2) cell_call4_button_pane_t1_copy1

0xd70c,	// (0x00022f04) main_ncimui_pane_t1_ParamLimits

0xd70c,	// (0x00022f04) main_ncimui_pane_t1

0xd71e,	// (0x00022f16) main_ncimui_pane_t2_ParamLimits

0xd71e,	// (0x00022f16) main_ncimui_pane_t2

0x0002,

0xfc3d,	// (0x00025435) main_ncimui_pane_t_ParamLimits

0xfc3d,	// (0x00025435) main_ncimui_pane_t

0x576c,	// (0x0001af64) main_radioblah_anim_pane_ParamLimits

0x576c,	// (0x0001af64) main_radioblah_anim_pane

0x577d,	// (0x0001af75) main_radioblah_info_pane_ParamLimits

0x577d,	// (0x0001af75) main_radioblah_info_pane

0x5791,	// (0x0001af89) main_radioblah_pane_t1_ParamLimits

0x5791,	// (0x0001af89) main_radioblah_pane_t1

0x57ad,	// (0x0001afa5) main_radioblah_pane_t2_ParamLimits

0x57ad,	// (0x0001afa5) main_radioblah_pane_t2

0x0003,

0xfcd8,	// (0x000254d0) main_radioblah_pane_t_ParamLimits

0xfcd8,	// (0x000254d0) main_radioblah_pane_t

0xdafe,	// (0x000232f6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdafe,	// (0x000232f6) main_radioblah_rocker_ctrl_pane

0x57f5,	// (0x0001afed) main_radioblah_info_pane_t1_ParamLimits

0x57f5,	// (0x0001afed) main_radioblah_info_pane_t1

0xdb43,	// (0x0002333b) main_radioblah_info_pane_t2_ParamLimits

0xdb43,	// (0x0002333b) main_radioblah_info_pane_t2

0x0003,

0xfce1,	// (0x000254d9) main_radioblah_info_pane_t_ParamLimits

0xfce1,	// (0x000254d9) main_radioblah_info_pane_t

0x38db,	// (0x000190d3) main_radioblah_rocker_ctrl_pane_g1

0xdbf3,	// (0x000233eb) main_radioblah_rocker_ctrl_pane_g2

0xdbfb,	// (0x000233f3) main_radioblah_rocker_ctrl_pane_g3

0xdc03,	// (0x000233fb) main_radioblah_rocker_ctrl_pane_g4

0xdc0b,	// (0x00023403) main_radioblah_rocker_ctrl_pane_g5

0xdc13,	// (0x0002340b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcea,	// (0x000254e2) main_radioblah_rocker_ctrl_pane_g

0xd6c1,	// (0x00022eb9) main_cset_text2_pane_t1_copy1_ParamLimits

0x7b7e,	// (0x0001d376) cam4_image_uncrop_qvga_pane

0x7cb9,	// (0x0001d4b1) vid4_image_uncrop_qcif_pane

0x82cc,	// (0x0001dac4) cam6_image_uncrop_qvga_pane_ParamLimits

0x82cc,	// (0x0001dac4) cam6_image_uncrop_qvga_pane

0x4f8e,	// (0x0001a786) vid6_image_uncrop_qcif_pane_ParamLimits

0x4f8e,	// (0x0001a786) vid6_image_uncrop_qcif_pane

0x09a8,	// (0x000161a0) bg_popup_preview_window_pane_cp03

0x52e2,	// (0x0001aada) list_cset_text2_pane

0x52ea,	// (0x0001aae2) main_cset6_text2_pane_g1

0x52f2,	// (0x0001aaea) main_cset6_text2_pane_t1

0xdc1b,	// (0x00023413) list_cset_text2_pane_t1_ParamLimits

0xdc1b,	// (0x00023413) list_cset_text2_pane_t1

0x0a18,	// (0x00016210) main_radioblah_pane_ParamLimits

0xd997,	// (0x0002318f) main_mobtv_info_pane_t3_ParamLimits

0xd997,	// (0x0002318f) main_mobtv_info_pane_t3

0xdaec,	// (0x000232e4) main_radioblah_pane_g1

0xdb17,	// (0x0002330f) main_radioblah_info_pane_g1

0xdb98,	// (0x00023390) main_radioblah_info_pane_t3_ParamLimits

0xdb98,	// (0x00023390) main_radioblah_info_pane_t3

0x9bbb,	// (0x0001f3b3) highlight_cell_cale_month_pane_ParamLimits

0x9bbb,	// (0x0001f3b3) highlight_cell_cale_month_pane

0x09a8,	// (0x000161a0) main_phob_fisheye_pane

0x3c8d,	// (0x00019485) scroll_pane_cp0031_ParamLimits

0x3c8d,	// (0x00019485) scroll_pane_cp0031

0x509c,	// (0x0001a894) wait_bar_pane_cp08_ParamLimits

0xd4ad,	// (0x00022ca5) cset_list_set_pane_copy1_ParamLimits

0x582f,	// (0x0001b027) highlight_cell_cale_month_pane_g1

0xdc46,	// (0x0002343e) highlight_cell_cale_month_pane_t1

0x4be7,	// (0x0001a3df) list_gen_pane_cp01

0x473f,	// (0x00019f37) scroll_pane_01

0xdc54,	// (0x0002344c) list_single_double_fisheye_pane

0x5837,	// (0x0001b02f) list_double_fisheye_pane_g1_ParamLimits

0x5837,	// (0x0001b02f) list_double_fisheye_pane_g1

0x5843,	// (0x0001b03b) list_double_fisheye_pane_g2_ParamLimits

0x5843,	// (0x0001b03b) list_double_fisheye_pane_g2

0xdc5d,	// (0x00023455) list_double_fisheye_pane_g3_ParamLimits

0xdc5d,	// (0x00023455) list_double_fisheye_pane_g3

0x0004,

0xfcf7,	// (0x000254ef) list_double_fisheye_pane_g_ParamLimits

0xfcf7,	// (0x000254ef) list_double_fisheye_pane_g

0xdc69,	// (0x00023461) list_double_fisheye_pane_t1_ParamLimits

0xdc69,	// (0x00023461) list_double_fisheye_pane_t1

0xdc84,	// (0x0002347c) list_double_fisheye_pane_t2_ParamLimits

0xdc84,	// (0x0002347c) list_double_fisheye_pane_t2

0x0001,

0xfd02,	// (0x000254fa) list_double_fisheye_pane_t_ParamLimits

0xfd02,	// (0x000254fa) list_double_fisheye_pane_t

0x09a8,	// (0x000161a0) main_call5_pane

0xda5e,	// (0x00023256) sc_swipe_pane_ParamLimits

0xda5e,	// (0x00023256) sc_swipe_pane

0xdcb2,	// (0x000234aa) call5_image_pane_ParamLimits

0xdcb2,	// (0x000234aa) call5_image_pane

0xdcc2,	// (0x000234ba) call5_swipe_1_pane_ParamLimits

0xdcc2,	// (0x000234ba) call5_swipe_1_pane

0xdcce,	// (0x000234c6) call5_swipe_2_pane_ParamLimits

0xdcce,	// (0x000234c6) call5_swipe_2_pane

0xdce8,	// (0x000234e0) popup_call5_audio_first_window_ParamLimits

0xdce8,	// (0x000234e0) popup_call5_audio_first_window

0x3b42,	// (0x0001933a) call5_swipe_1_pane_g1_ParamLimits

0x3b42,	// (0x0001933a) call5_swipe_1_pane_g1

0x5874,	// (0x0001b06c) call5_swipe_1_pane_g2_ParamLimits

0x5874,	// (0x0001b06c) call5_swipe_1_pane_g2

0x0001,

0xfd07,	// (0x000254ff) call5_swipe_1_pane_g_ParamLimits

0xfd07,	// (0x000254ff) call5_swipe_1_pane_g

0x5880,	// (0x0001b078) call5_swipe_1_pane_t1_ParamLimits

0x5880,	// (0x0001b078) call5_swipe_1_pane_t1

0x3b42,	// (0x0001933a) call5_swipe_2_pane_g1_ParamLimits

0x3b42,	// (0x0001933a) call5_swipe_2_pane_g1

0x5895,	// (0x0001b08d) call5_swipe_2_pane_g2_ParamLimits

0x5895,	// (0x0001b08d) call5_swipe_2_pane_g2

0x0001,

0xfd0c,	// (0x00025504) call5_swipe_2_pane_g_ParamLimits

0xfd0c,	// (0x00025504) call5_swipe_2_pane_g

0x58a1,	// (0x0001b099) call5_swipe_2_pane_t1_ParamLimits

0x58a1,	// (0x0001b099) call5_swipe_2_pane_t1

0x58b6,	// (0x0001b0ae) sc_swipe_pane_g1_ParamLimits

0x58b6,	// (0x0001b0ae) sc_swipe_pane_g1

0x58c3,	// (0x0001b0bb) sc_swipe_pane_g2_ParamLimits

0x58c3,	// (0x0001b0bb) sc_swipe_pane_g2

0x0001,

0xfd11,	// (0x00025509) sc_swipe_pane_g_ParamLimits

0xfd11,	// (0x00025509) sc_swipe_pane_g

0x58cf,	// (0x0001b0c7) sc_swipe_pane_t1_ParamLimits

0x58cf,	// (0x0001b0c7) sc_swipe_pane_t1

0x09a8,	// (0x000161a0) main_cmail_launcher_pane

0xdcf6,	// (0x000234ee) aid_size_cell_cmail_l_ParamLimits

0xdcf6,	// (0x000234ee) aid_size_cell_cmail_l

0xdd06,	// (0x000234fe) grid_cmail_l_pane_ParamLimits

0xdd06,	// (0x000234fe) grid_cmail_l_pane

0xdd16,	// (0x0002350e) cell_cmail_l_pane_ParamLimits

0xdd16,	// (0x0002350e) cell_cmail_l_pane

0xdd2a,	// (0x00023522) cell_cmail_l_pane_g1_ParamLimits

0xdd2a,	// (0x00023522) cell_cmail_l_pane_g1

0xdd36,	// (0x0002352e) cell_cmail_l_pane_t1_ParamLimits

0xdd36,	// (0x0002352e) cell_cmail_l_pane_t1

0x58e4,	// (0x0001b0dc) cell_cmail_l_pane_t2_ParamLimits

0x58e4,	// (0x0001b0dc) cell_cmail_l_pane_t2

0x0001,

0xfd16,	// (0x0002550e) cell_cmail_l_pane_t_ParamLimits

0xfd16,	// (0x0002550e) cell_cmail_l_pane_t

0x0a18,	// (0x00016210) grid_highlight_pane_cp018_ParamLimits

0x0a18,	// (0x00016210) grid_highlight_pane_cp018

0x8411,	// (0x0001dc09) main2_pane_ParamLimits

0x8411,	// (0x0001dc09) main2_pane

0x129c,	// (0x00016a94) popup_sp_fs_action_menu_bg_pane_g1

0x12a4,	// (0x00016a9c) popup_sp_fs_action_menu_bg_pane_g2

0x12ac,	// (0x00016aa4) popup_sp_fs_action_menu_bg_pane_g3

0x12b4,	// (0x00016aac) popup_sp_fs_action_menu_bg_pane_g4

0x12bc,	// (0x00016ab4) popup_sp_fs_action_menu_bg_pane_g5

0x12c4,	// (0x00016abc) popup_sp_fs_action_menu_bg_pane_g6

0x12cc,	// (0x00016ac4) popup_sp_fs_action_menu_bg_pane_g7

0x12d4,	// (0x00016acc) popup_sp_fs_action_menu_bg_pane_g8

0x12dc,	// (0x00016ad4) popup_sp_fs_action_menu_bg_pane_g9

0x12e4,	// (0x00016adc) popup_sp_fs_action_menu_bg_pane_g10

0x12e4,	// (0x00016adc) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x000249e7) popup_sp_fs_action_menu_bg_pane_g

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g3_g1

0x14e8,	// (0x00016ce0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_t3_g3_g2

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g3_g3_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00024a97) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00024a97) list_medium_line_x2_t3_g3_g

0x1500,	// (0x00016cf8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1500,	// (0x00016cf8) list_medium_line_x2_t3_g3_t1

0x8e8d,	// (0x0001e685) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8e8d,	// (0x0001e685) list_medium_line_x2_t3_g3_t2

0x1515,	// (0x00016d0d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00024a9e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00024a9e) list_medium_line_x2_t3_g3_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g2_g1

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g2_g2_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t3_g2_g

0x152a,	// (0x00016d22) list_medium_line_x2_t3_g2_t1_ParamLimits

0x152a,	// (0x00016d22) list_medium_line_x2_t3_g2_t1

0x1540,	// (0x00016d38) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1540,	// (0x00016d38) list_medium_line_x2_t3_g2_t2

0x1552,	// (0x00016d4a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1552,	// (0x00016d4a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00024aaa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00024aaa) list_medium_line_x2_t3_g2_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t4_g4_g1

0x156f,	// (0x00016d67) list_medium_line_x2_t4_g4_g2_ParamLimits

0x156f,	// (0x00016d67) list_medium_line_x2_t4_g4_g2

0x14e8,	// (0x00016ce0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_t4_g4_g3

0x157b,	// (0x00016d73) list_medium_line_x2_t4_g4_g4_ParamLimits

0x157b,	// (0x00016d73) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00024ab1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00024ab1) list_medium_line_x2_t4_g4_g

0x8e9f,	// (0x0001e697) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8e9f,	// (0x0001e697) list_medium_line_x2_t4_g4_t1

0x8eb9,	// (0x0001e6b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8eb9,	// (0x0001e6b1) list_medium_line_x2_t4_g4_t2

0x8ece,	// (0x0001e6c6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8ece,	// (0x0001e6c6) list_medium_line_x2_t4_g4_t3

0x1587,	// (0x00016d7f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1587,	// (0x00016d7f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00024aba) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00024aba) list_medium_line_x2_t4_g4_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g4_g1

0x156f,	// (0x00016d67) list_medium_line_x2_t2_g4_g2_ParamLimits

0x156f,	// (0x00016d67) list_medium_line_x2_t2_g4_g2

0x14e8,	// (0x00016ce0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_t2_g4_g3

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g4_g4_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00024b21) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00024b21) list_medium_line_x2_t2_g4_g

0x1877,	// (0x0001706f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1877,	// (0x0001706f) list_medium_line_x2_t2_g4_t1

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00024b2a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00024b2a) list_medium_line_x2_t2_g4_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g3_g1

0x14e8,	// (0x00016ce0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_t2_g3_g2

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g3_g3_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00024a97) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00024a97) list_medium_line_x2_t2_g3_g

0x188c,	// (0x00017084) list_medium_line_x2_t2_g3_t1_ParamLimits

0x188c,	// (0x00017084) list_medium_line_x2_t2_g3_t1

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00024b2f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00024b2f) list_medium_line_x2_t2_g3_t

0x9ded,	// (0x0001f5e5) main_sp_fs_list_pane_ParamLimits

0x9ded,	// (0x0001f5e5) main_sp_fs_list_pane

0x9df9,	// (0x0001f5f1) sp_fs_scroll_pane_ParamLimits

0x9df9,	// (0x0001f5f1) sp_fs_scroll_pane

0x9e05,	// (0x0001f5fd) list_medium_line_x2_t3_t1

0x9e15,	// (0x0001f60d) list_medium_line_x2_t3_t2

0x1a64,	// (0x0001725c) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00024b7a) list_medium_line_x2_t3_t

0x9e23,	// (0x0001f61b) list_medium_line_x3_t4_t1

0x9e33,	// (0x0001f62b) list_medium_line_x3_t4_t2

0x1a72,	// (0x0001726a) list_medium_line_x3_t4_t3

0x1a64,	// (0x0001725c) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00024b81) list_medium_line_x3_t4_t

0x9e41,	// (0x0001f639) list_medium_line_x4_t5_t1

0x9e51,	// (0x0001f649) list_medium_line_x4_t5_t2

0x1a72,	// (0x0001726a) list_medium_line_x4_t5_t3

0x1a80,	// (0x00017278) list_medium_line_x4_t5_t4

0x1a64,	// (0x0001725c) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00024b8a) list_medium_line_x4_t5_t

0x14dc,	// (0x00016cd4) list_medium_line_t4_g4_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_t4_g4_g1

0x157b,	// (0x00016d73) list_medium_line_t4_g4_g2_ParamLimits

0x157b,	// (0x00016d73) list_medium_line_t4_g4_g2

0x1a8e,	// (0x00017286) list_medium_line_t4_g4_g3_ParamLimits

0x1a8e,	// (0x00017286) list_medium_line_t4_g4_g3

0x14f4,	// (0x00016cec) list_medium_line_t4_g4_g4_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00024b95) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00024b95) list_medium_line_t4_g4_g

0x1a9a,	// (0x00017292) list_medium_line_t4_g4_t1_ParamLimits

0x1a9a,	// (0x00017292) list_medium_line_t4_g4_t1

0x1aaf,	// (0x000172a7) list_medium_line_t4_g4_t2_ParamLimits

0x1aaf,	// (0x000172a7) list_medium_line_t4_g4_t2

0x1ac4,	// (0x000172bc) list_medium_line_t4_g4_t3_ParamLimits

0x1ac4,	// (0x000172bc) list_medium_line_t4_g4_t3

0x1515,	// (0x00016d0d) list_medium_line_t4_g4_t4_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00024b9e) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00024b9e) list_medium_line_t4_g4_t

0x9ed7,	// (0x0001f6cf) chi_dic_find_pane_g1

0xae75,	// (0x0002066d) main_tport_pane

0x487c,	// (0x0001a074) list_medium_line_plain_t1

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g2_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g2_g1

0x48da,	// (0x0001a0d2) list_medium_line_t2_g2_g2_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_t2_g2_g2

0x0001,

0xfa59,	// (0x00025251) list_medium_line_t2_g2_g_ParamLimits

0xfa59,	// (0x00025251) list_medium_line_t2_g2_g

0xcb72,	// (0x0002236a) list_medium_line_t2_g2_t1_ParamLimits

0xcb72,	// (0x0002236a) list_medium_line_t2_g2_t1

0xcb8c,	// (0x00022384) list_medium_line_t2_g2_t2_ParamLimits

0xcb8c,	// (0x00022384) list_medium_line_t2_g2_t2

0x0001,

0xfa5e,	// (0x00025256) list_medium_line_t2_g2_t_ParamLimits

0xfa5e,	// (0x00025256) list_medium_line_t2_g2_t

0x4c8e,	// (0x0001a486) aid_sp_fs_list_icon_a_sm

0x4c96,	// (0x0001a48e) aid_sp_fs_list_icon_d

0x4c9e,	// (0x0001a496) aid_sp_fs_text_primary

0x4ca7,	// (0x0001a49f) aid_sp_fs_text_secondary

0x4cb0,	// (0x0001a4a8) list_medium_line

0x4cb0,	// (0x0001a4a8) list_medium_line_g2

0x4cb0,	// (0x0001a4a8) list_medium_line_g3

0x4cb0,	// (0x0001a4a8) list_medium_line_plain

0x4cb0,	// (0x0001a4a8) list_medium_line_plain_t2

0x4cb0,	// (0x0001a4a8) list_medium_line_plain_t3

0x4cb0,	// (0x0001a4a8) list_medium_line_right_icon

0x4cb0,	// (0x0001a4a8) list_medium_line_right_iconx2

0x4cb0,	// (0x0001a4a8) list_medium_line_t2

0x4cb0,	// (0x0001a4a8) list_medium_line_t2_g2

0x4cb0,	// (0x0001a4a8) list_medium_line_t2_g3

0x4cb0,	// (0x0001a4a8) list_medium_line_t2_right_icon

0x4cb0,	// (0x0001a4a8) list_medium_line_t2_right_iconx2

0x4cb0,	// (0x0001a4a8) list_medium_line_t3

0x4cb0,	// (0x0001a4a8) list_medium_line_t3_g2

0x4cb0,	// (0x0001a4a8) list_medium_line_t3_g3

0x4cb0,	// (0x0001a4a8) list_medium_line_t3_right_iconx2

0x4cb9,	// (0x0001a4b1) list_medium_line_t4_g4

0x4cc2,	// (0x0001a4ba) list_medium_line_x2

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t2_g2

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t2_g3

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t2_g4

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t3

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t3_g2

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t3_g3

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t3_g4

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t4_g2

0x4cc2,	// (0x0001a4ba) list_medium_line_x2_t4_g4

0x4ccb,	// (0x0001a4c3) list_medium_line_x3

0x4ccb,	// (0x0001a4c3) list_medium_line_x3_t4

0x4ccb,	// (0x0001a4c3) list_medium_line_x3_t4_g4

0x4cb9,	// (0x0001a4b1) list_medium_line_x4_t4

0x4cb9,	// (0x0001a4b1) list_medium_line_x4_t4_g7

0x4cb9,	// (0x0001a4b1) list_medium_line_x4_t5

0x4cd4,	// (0x0001a4cc) list_single_fs_dyc_pane_ParamLimits

0x4cd4,	// (0x0001a4cc) list_single_fs_dyc_pane

0x14dc,	// (0x00016cd4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x4_t4_g7_g1

0x5211,	// (0x0001aa09) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5211,	// (0x0001aa09) list_medium_line_x4_t4_g7_g2

0x521d,	// (0x0001aa15) list_medium_line_x4_t4_g7_g3_ParamLimits

0x521d,	// (0x0001aa15) list_medium_line_x4_t4_g7_g3

0x522c,	// (0x0001aa24) list_medium_line_x4_t4_g7_g4_ParamLimits

0x522c,	// (0x0001aa24) list_medium_line_x4_t4_g7_g4

0x5238,	// (0x0001aa30) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5238,	// (0x0001aa30) list_medium_line_x4_t4_g7_g5

0x5247,	// (0x0001aa3f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5247,	// (0x0001aa3f) list_medium_line_x4_t4_g7_g6

0x5256,	// (0x0001aa4e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5256,	// (0x0001aa4e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc23,	// (0x0002541b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc23,	// (0x0002541b) list_medium_line_x4_t4_g7_g

0x5262,	// (0x0001aa5a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5262,	// (0x0001aa5a) list_medium_line_x4_t4_g7_t1

0x5277,	// (0x0001aa6f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5277,	// (0x0001aa6f) list_medium_line_x4_t4_g7_t2

0x528c,	// (0x0001aa84) list_medium_line_x4_t4_g7_t3_ParamLimits

0x528c,	// (0x0001aa84) list_medium_line_x4_t4_g7_t3

0x52a1,	// (0x0001aa99) list_medium_line_x4_t4_g7_t4_ParamLimits

0x52a1,	// (0x0001aa99) list_medium_line_x4_t4_g7_t4

0x52b3,	// (0x0001aaab) list_medium_line_x4_t4_g7_t5_ParamLimits

0x52b3,	// (0x0001aaab) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc32,	// (0x0002542a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc32,	// (0x0002542a) list_medium_line_x4_t4_g7_t

0x52c5,	// (0x0001aabd) list_single_dyc_row_pane_ParamLimits

0x52c5,	// (0x0001aabd) list_single_dyc_row_pane

0xdca6,	// (0x0002349e) call5_gesture_pane_ParamLimits

0xdca6,	// (0x0002349e) call5_gesture_pane

0xdcda,	// (0x000234d2) call5_windows_pane_ParamLimits

0xdcda,	// (0x000234d2) call5_windows_pane

0xdd4c,	// (0x00023544) call5_swipe_1_pane_cp_ParamLimits

0xdd4c,	// (0x00023544) call5_swipe_1_pane_cp

0xdd58,	// (0x00023550) call5_swipe_2_pane_cp_ParamLimits

0xdd58,	// (0x00023550) call5_swipe_2_pane_cp

0x1f3c,	// (0x00017734) call5_image_pane_cp

0xdd64,	// (0x0002355c) popup_call5_audio_first_window_cp_ParamLimits

0xdd64,	// (0x0002355c) popup_call5_audio_first_window_cp

0x58b6,	// (0x0001b0ae) call5_swipe_1_pane_g1_cp_ParamLimits

0x58b6,	// (0x0001b0ae) call5_swipe_1_pane_g1_cp

0x58f6,	// (0x0001b0ee) call5_swipe_1_pane_g2_cp

0x58cf,	// (0x0001b0c7) call5_swipe_1_pane_t1_cp_ParamLimits

0x58cf,	// (0x0001b0c7) call5_swipe_1_pane_t1_cp

0x58b6,	// (0x0001b0ae) call5_swipe_2_pane_g1_cp_ParamLimits

0x58b6,	// (0x0001b0ae) call5_swipe_2_pane_g1_cp

0x58fe,	// (0x0001b0f6) call5_swipe_2_pane_g2_cp

0x5906,	// (0x0001b0fe) call5_swipe_2_pane_t1_cp_ParamLimits

0x5906,	// (0x0001b0fe) call5_swipe_2_pane_t1_cp

0x0a18,	// (0x00016210) main_sp_fs_email_pane

0x591b,	// (0x0001b113) main_sp_fs_listscroll_pane_te

0x5924,	// (0x0001b11c) popup_sp_fs_action_menu_pane_ParamLimits

0x5924,	// (0x0001b11c) popup_sp_fs_action_menu_pane

0x38db,	// (0x000190d3) bg_sp_fs_ctrlbar_pane_g1

0x5964,	// (0x0001b15c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x596d,	// (0x0001b165) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5976,	// (0x0001b16e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x38db,	// (0x000190d3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd1b,	// (0x00025513) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x36be,	// (0x00018eb6) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x36be,	// (0x00018eb6) bg_sp_fs_ctrlbar_ddmenu_pane

0x597f,	// (0x0001b177) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x597f,	// (0x0001b177) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x598b,	// (0x0001b183) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x598b,	// (0x0001b183) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd24,	// (0x0002551c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd24,	// (0x0002551c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5997,	// (0x0001b18f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5997,	// (0x0001b18f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x59b1,	// (0x0001b1a9) list_medium_line_t2_right_icon_g1

0xdd70,	// (0x00023568) list_medium_line_t2_right_icon_t1

0xdd80,	// (0x00023578) list_medium_line_t2_right_icon_t2

0x0001,

0xfd29,	// (0x00025521) list_medium_line_t2_right_icon_t

0x33d3,	// (0x00018bcb) bg_sp_fs_ctrlbar_pane_ParamLimits

0x33d3,	// (0x00018bcb) bg_sp_fs_ctrlbar_pane

0xdde5,	// (0x000235dd) main_sp_fs_ctrlbar_button_pane_cp01

0xdded,	// (0x000235e5) main_sp_fs_ctrlbar_ddmenu_pane

0x14dc,	// (0x00016cd4) main_sp_fs_ctrlbar_pane_g1

0x59f1,	// (0x0001b1e9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd2e,	// (0x00025526) main_sp_fs_ctrlbar_pane_g

0x59fd,	// (0x0001b1f5) main_sp_fs_ctrlbar_pane_t1

0xddf7,	// (0x000235ef) main_sp_fs_ctrlbar_pane

0xde13,	// (0x0002360b) main_sp_fs_listscroll_pane_te_cp01

0xde24,	// (0x0002361c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xde24,	// (0x0002361c) popup_sp_fs_action_menu_pane_cp01

0x0a18,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0a18,	// (0x00016210) bg_sp_fs_highlight_list_pane_cp01

0x5a12,	// (0x0001b20a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5a12,	// (0x0001b20a) sp_fs_action_menu_list_gene_pane_g1

0x5a21,	// (0x0001b219) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5a21,	// (0x0001b219) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd33,	// (0x0002552b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd33,	// (0x0002552b) sp_fs_action_menu_list_gene_pane_g

0x5a2e,	// (0x0001b226) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5a2e,	// (0x0001b226) sp_fs_action_menu_list_gene_pane_t1

0x5a46,	// (0x0001b23e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5a46,	// (0x0001b23e) sp_fs_action_menu_list_gene_pane

0x5a63,	// (0x0001b25b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5a63,	// (0x0001b25b) popup_sp_fs_action_menu_bg_pane

0x5a71,	// (0x0001b269) sp_fs_action_menu_list_pane_ParamLimits

0x5a71,	// (0x0001b269) sp_fs_action_menu_list_pane

0x5a8f,	// (0x0001b287) sp_fs_scroll_pane_cp01_ParamLimits

0x5a8f,	// (0x0001b287) sp_fs_scroll_pane_cp01

0xde3c,	// (0x00023634) list_medium_line_plain_t2_t1

0xde4c,	// (0x00023644) list_medium_line_plain_t2_t2

0x0001,

0xfd38,	// (0x00025530) list_medium_line_plain_t2_t

0xde5a,	// (0x00023652) list_medium_line_plain_t3_t1

0xde6a,	// (0x00023662) list_medium_line_plain_t3_t2

0xde78,	// (0x00023670) list_medium_line_plain_t3_t3

0x0002,

0xfd3d,	// (0x00025535) list_medium_line_plain_t3_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t2_g2_g1

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g2_g2_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t2_g2_g

0x1a9a,	// (0x00017292) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1a9a,	// (0x00017292) list_medium_line_x2_t2_g2_t1

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd44,	// (0x0002553c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd44,	// (0x0002553c) list_medium_line_x2_t2_g2_t

0x14dc,	// (0x00016cd4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t4_g2_g1

0x14f4,	// (0x00016cec) list_medium_line_x2_t4_g2_g2_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x00024aa5) list_medium_line_x2_t4_g2_g

0xde86,	// (0x0002367e) list_medium_line_x2_t4_g2_t1_ParamLimits

0xde86,	// (0x0002367e) list_medium_line_x2_t4_g2_t1

0xdea0,	// (0x00023698) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdea0,	// (0x00023698) list_medium_line_x2_t4_g2_t2

0xdeb5,	// (0x000236ad) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdeb5,	// (0x000236ad) list_medium_line_x2_t4_g2_t3

0x1515,	// (0x00016d0d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd49,	// (0x00025541) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd49,	// (0x00025541) list_medium_line_x2_t4_g2_t

0x5ab5,	// (0x0001b2ad) list_medium_line_t3_right_iconx2_g1

0x59b1,	// (0x0001b1a9) list_medium_line_t3_right_iconx2_g2

0xdeca,	// (0x000236c2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd52,	// (0x0002554a) list_medium_line_t3_right_iconx2_g

0xded2,	// (0x000236ca) list_medium_line_t3_right_iconx2_t1

0xdee2,	// (0x000236da) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd59,	// (0x00025551) list_medium_line_t3_right_iconx2_t

0x14dc,	// (0x00016cd4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x3_t4_g4_g1

0x14e8,	// (0x00016ce0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x3_t4_g4_g2

0x157b,	// (0x00016d73) list_medium_line_x3_t4_g4_g3_ParamLimits

0x157b,	// (0x00016d73) list_medium_line_x3_t4_g4_g3

0x5abd,	// (0x0001b2b5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5abd,	// (0x0001b2b5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd5e,	// (0x00025556) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd5e,	// (0x00025556) list_medium_line_x3_t4_g4_g

0xdef0,	// (0x000236e8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xdef0,	// (0x000236e8) list_medium_line_x3_t4_g4_t1

0xdf07,	// (0x000236ff) list_medium_line_x3_t4_g4_t2_ParamLimits

0xdf07,	// (0x000236ff) list_medium_line_x3_t4_g4_t2

0x1aaf,	// (0x000172a7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1aaf,	// (0x000172a7) list_medium_line_x3_t4_g4_t3

0x5ac9,	// (0x0001b2c1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5ac9,	// (0x0001b2c1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd67,	// (0x0002555f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd67,	// (0x0002555f) list_medium_line_x3_t4_g4_t

0xdf1c,	// (0x00023714) list_single_dyc_row_text_pane_t1_ParamLimits

0xdf1c,	// (0x00023714) list_single_dyc_row_text_pane_t1

0xdf53,	// (0x0002374b) list_single_dyc_row_text_pane_t2_ParamLimits

0xdf53,	// (0x0002374b) list_single_dyc_row_text_pane_t2

0x5ae6,	// (0x0001b2de) list_single_dyc_row_text_pane_t3_ParamLimits

0x5ae6,	// (0x0001b2de) list_single_dyc_row_text_pane_t3

0x0002,

0xfd70,	// (0x00025568) list_single_dyc_row_text_pane_t_ParamLimits

0xfd70,	// (0x00025568) list_single_dyc_row_text_pane_t

0x5af8,	// (0x0001b2f0) list_single_dyc_row_pane_g1_ParamLimits

0x5af8,	// (0x0001b2f0) list_single_dyc_row_pane_g1

0x5b04,	// (0x0001b2fc) list_single_dyc_row_pane_g2_ParamLimits

0x5b04,	// (0x0001b2fc) list_single_dyc_row_pane_g2

0x5b10,	// (0x0001b308) list_single_dyc_row_pane_g3_ParamLimits

0x5b10,	// (0x0001b308) list_single_dyc_row_pane_g3

0x5b1c,	// (0x0001b314) list_single_dyc_row_pane_g4_ParamLimits

0x5b1c,	// (0x0001b314) list_single_dyc_row_pane_g4

0x0003,

0xfd77,	// (0x0002556f) list_single_dyc_row_pane_g_ParamLimits

0xfd77,	// (0x0002556f) list_single_dyc_row_pane_g

0x5b28,	// (0x0001b320) list_single_dyc_row_text_pane_ParamLimits

0x5b28,	// (0x0001b320) list_single_dyc_row_text_pane

0x09a8,	// (0x000161a0) bg_sp_fs_scroll_pane

0x5b47,	// (0x0001b33f) thumb_sp_fs_scroll_pane

0x48ce,	// (0x0001a0c6) list_medium_line_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_g1

0x5b50,	// (0x0001b348) list_medium_line_t1_ParamLimits

0x5b50,	// (0x0001b348) list_medium_line_t1

0x14dc,	// (0x00016cd4) list_medium_line_x2_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_g1

0x14e8,	// (0x00016ce0) list_medium_line_x2_g2_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_g2

0x0001,

0xfd80,	// (0x00025578) list_medium_line_x2_g_ParamLimits

0xfd80,	// (0x00025578) list_medium_line_x2_g

0x5b65,	// (0x0001b35d) list_medium_line_x2_t1_ParamLimits

0x5b65,	// (0x0001b35d) list_medium_line_x2_t1

0x14dc,	// (0x00016cd4) list_medium_line_x3_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x3_g1

0x14e8,	// (0x00016ce0) list_medium_line_x3_g2_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x3_g2

0x0001,

0xfd80,	// (0x00025578) list_medium_line_x3_g_ParamLimits

0xfd80,	// (0x00025578) list_medium_line_x3_g

0x5b65,	// (0x0001b35d) list_medium_line_x3_t1_ParamLimits

0x5b65,	// (0x0001b35d) list_medium_line_x3_t1

0x5b7b,	// (0x0001b373) thumb_sp_fs_scroll_pane_g1

0x5b84,	// (0x0001b37c) thumb_sp_fs_scroll_pane_g2

0x5b8d,	// (0x0001b385) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0002557d) thumb_sp_fs_scroll_pane_g

0x5b7b,	// (0x0001b373) bg_sp_fs_scroll_pane_g1

0x5b84,	// (0x0001b37c) bg_sp_fs_scroll_pane_g2

0x5b8d,	// (0x0001b385) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd85,	// (0x0002557d) bg_sp_fs_scroll_pane_g

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x14dc,	// (0x00016cd4) list_medium_line_x2_t3_g4_g1

0x156f,	// (0x00016d67) list_medium_line_x2_t3_g4_g2_ParamLimits

0x156f,	// (0x00016d67) list_medium_line_x2_t3_g4_g2

0x14e8,	// (0x00016ce0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x14e8,	// (0x00016ce0) list_medium_line_x2_t3_g4_g3

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g4_g4_ParamLimits

0x14f4,	// (0x00016cec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00024b21) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00024b21) list_medium_line_x2_t3_g4_g

0xdfad,	// (0x000237a5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdfad,	// (0x000237a5) list_medium_line_x2_t3_g4_t1

0xdfc3,	// (0x000237bb) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdfc3,	// (0x000237bb) list_medium_line_x2_t3_g4_t2

0x1515,	// (0x00016d0d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1515,	// (0x00016d0d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd8c,	// (0x00025584) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd8c,	// (0x00025584) list_medium_line_x2_t3_g4_t

0x48ce,	// (0x0001a0c6) list_medium_line_g2_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_g2_g1

0x48da,	// (0x0001a0d2) list_medium_line_g2_g2_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_g2_g2

0x0001,

0xfa59,	// (0x00025251) list_medium_line_g2_g_ParamLimits

0xfa59,	// (0x00025251) list_medium_line_g2_g

0x5b96,	// (0x0001b38e) list_medium_line_g2_t1_ParamLimits

0x5b96,	// (0x0001b38e) list_medium_line_g2_t1

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g2_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g2_g1

0x48da,	// (0x0001a0d2) list_medium_line_t3_g2_g2_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_t3_g2_g2

0x0001,

0xfa59,	// (0x00025251) list_medium_line_t3_g2_g_ParamLimits

0xfa59,	// (0x00025251) list_medium_line_t3_g2_g

0xdfdc,	// (0x000237d4) list_medium_line_t3_g2_t1_ParamLimits

0xdfdc,	// (0x000237d4) list_medium_line_t3_g2_t1

0xdff3,	// (0x000237eb) list_medium_line_t3_g2_t2_ParamLimits

0xdff3,	// (0x000237eb) list_medium_line_t3_g2_t2

0xe008,	// (0x00023800) list_medium_line_t3_g2_t3_ParamLimits

0xe008,	// (0x00023800) list_medium_line_t3_g2_t3

0x0002,

0xfd93,	// (0x0002558b) list_medium_line_t3_g2_t_ParamLimits

0xfd93,	// (0x0002558b) list_medium_line_t3_g2_t

0x59b1,	// (0x0001b1a9) list_medium_line_right_icon_g1

0x5bab,	// (0x0001b3a3) list_medium_line_right_icon_t1

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g1

0xe01d,	// (0x00023815) list_medium_line_t2_t1_ParamLimits

0xe01d,	// (0x00023815) list_medium_line_t2_t1

0xe037,	// (0x0002382f) list_medium_line_t2_t2_ParamLimits

0xe037,	// (0x0002382f) list_medium_line_t2_t2

0x0001,

0xfd9a,	// (0x00025592) list_medium_line_t2_t_ParamLimits

0xfd9a,	// (0x00025592) list_medium_line_t2_t

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g1

0xe04c,	// (0x00023844) list_medium_line_t3_t1_ParamLimits

0xe04c,	// (0x00023844) list_medium_line_t3_t1

0xe063,	// (0x0002385b) list_medium_line_t3_t2_ParamLimits

0xe063,	// (0x0002385b) list_medium_line_t3_t2

0xe078,	// (0x00023870) list_medium_line_t3_t3_ParamLimits

0xe078,	// (0x00023870) list_medium_line_t3_t3

0x0002,

0xfd9f,	// (0x00025597) list_medium_line_t3_t_ParamLimits

0xfd9f,	// (0x00025597) list_medium_line_t3_t

0x48ce,	// (0x0001a0c6) list_medium_line_g3_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_g3_g1

0x5bb9,	// (0x0001b3b1) list_medium_line_g3_g2_ParamLimits

0x5bb9,	// (0x0001b3b1) list_medium_line_g3_g2

0x48da,	// (0x0001a0d2) list_medium_line_g3_g3_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_g3_g3

0x0002,

0xfda6,	// (0x0002559e) list_medium_line_g3_g_ParamLimits

0xfda6,	// (0x0002559e) list_medium_line_g3_g

0x5bc5,	// (0x0001b3bd) list_medium_line_g3_t1_ParamLimits

0x5bc5,	// (0x0001b3bd) list_medium_line_g3_t1

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g3_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t2_g3_g1

0x5bb9,	// (0x0001b3b1) list_medium_line_t2_g3_g2_ParamLimits

0x5bb9,	// (0x0001b3b1) list_medium_line_t2_g3_g2

0x48da,	// (0x0001a0d2) list_medium_line_t2_g3_g3_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_t2_g3_g3

0x0002,

0xfda6,	// (0x0002559e) list_medium_line_t2_g3_g_ParamLimits

0xfda6,	// (0x0002559e) list_medium_line_t2_g3_g

0xe08a,	// (0x00023882) list_medium_line_t2_g3_t1_ParamLimits

0xe08a,	// (0x00023882) list_medium_line_t2_g3_t1

0xe0a1,	// (0x00023899) list_medium_line_t2_g3_t2_ParamLimits

0xe0a1,	// (0x00023899) list_medium_line_t2_g3_t2

0x0001,

0xfdad,	// (0x000255a5) list_medium_line_t2_g3_t_ParamLimits

0xfdad,	// (0x000255a5) list_medium_line_t2_g3_t

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g3_g1_ParamLimits

0x48ce,	// (0x0001a0c6) list_medium_line_t3_g3_g1

0x5bb9,	// (0x0001b3b1) list_medium_line_t3_g3_g2_ParamLimits

0x5bb9,	// (0x0001b3b1) list_medium_line_t3_g3_g2

0x48da,	// (0x0001a0d2) list_medium_line_t3_g3_g3_ParamLimits

0x48da,	// (0x0001a0d2) list_medium_line_t3_g3_g3

0x0002,

0xfda6,	// (0x0002559e) list_medium_line_t3_g3_g_ParamLimits

0xfda6,	// (0x0002559e) list_medium_line_t3_g3_g

0xe0b6,	// (0x000238ae) list_medium_line_t3_g3_t1_ParamLimits

0xe0b6,	// (0x000238ae) list_medium_line_t3_g3_t1

0xe0ca,	// (0x000238c2) list_medium_line_t3_g3_t2_ParamLimits

0xe0ca,	// (0x000238c2) list_medium_line_t3_g3_t2

0xe0dc,	// (0x000238d4) list_medium_line_t3_g3_t3_ParamLimits

0xe0dc,	// (0x000238d4) list_medium_line_t3_g3_t3

0x0002,

0xfdb2,	// (0x000255aa) list_medium_line_t3_g3_t_ParamLimits

0xfdb2,	// (0x000255aa) list_medium_line_t3_g3_t

0x5ab5,	// (0x0001b2ad) list_medium_line_right_iconx2_g1

0x59b1,	// (0x0001b1a9) list_medium_line_right_iconx2_g2

0x0001,

0xfdb9,	// (0x000255b1) list_medium_line_right_iconx2_g

0x5bda,	// (0x0001b3d2) list_medium_line_right_iconx2_t1

0x5ab5,	// (0x0001b2ad) list_medium_line_t2_right_iconx2_g1

0x59b1,	// (0x0001b1a9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdb9,	// (0x000255b1) list_medium_line_t2_right_iconx2_g

0xe0ee,	// (0x000238e6) list_medium_line_t2_right_iconx2_t1

0xe0fe,	// (0x000238f6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdbe,	// (0x000255b6) list_medium_line_t2_right_iconx2_t

0x5be8,	// (0x0001b3e0) list_medium_line_x4_t4_t1

0xe10c,	// (0x00023904) list_medium_line_x4_t4_t2

0xe11c,	// (0x00023914) list_medium_line_x4_t4_t3

0xe12c,	// (0x00023924) list_medium_line_x4_t4_t4

0x0003,

0xfdc3,	// (0x000255bb) list_medium_line_x4_t4_t

0xe165,	// (0x0002395d) tport_appsw_pane_ParamLimits

0xe165,	// (0x0002395d) tport_appsw_pane

0xe171,	// (0x00023969) tport_contact_pane_ParamLimits

0xe171,	// (0x00023969) tport_contact_pane

0xe181,	// (0x00023979) tport_listscroll_pane_ParamLimits

0xe181,	// (0x00023979) tport_listscroll_pane

0xe191,	// (0x00023989) cell_tport_appsw_pane_ParamLimits

0xe191,	// (0x00023989) cell_tport_appsw_pane

0x3bdf,	// (0x000193d7) tport_appsw_pane_g1_ParamLimits

0x3bdf,	// (0x000193d7) tport_appsw_pane_g1

0x5bf6,	// (0x0001b3ee) tport_contact_pane_g1

0x5bff,	// (0x0001b3f7) tport_contact_pane_t1

0x5c0d,	// (0x0001b405) tport_contact_pane_t2

0x0001,

0xfdcc,	// (0x000255c4) tport_contact_pane_t

0x5c1b,	// (0x0001b413) list_tport_pane

0x5c24,	// (0x0001b41c) scroll_pane_cp_030

0xe1a6,	// (0x0002399e) cell_tport_appsw_pane_g1

0x5c2d,	// (0x0001b425) cell_tport_appsw_pane_t1

0x09a8,	// (0x000161a0) grid_highlight_pane_cp019

0xe1be,	// (0x000239b6) list_tport_double_graphic_pane_ParamLimits

0xe1be,	// (0x000239b6) list_tport_double_graphic_pane

0x0a18,	// (0x00016210) list_highlight_pane_cp023_ParamLimits

0x0a18,	// (0x00016210) list_highlight_pane_cp023

0xe1d1,	// (0x000239c9) list_tport_double_graphic_pane_g1_ParamLimits

0xe1d1,	// (0x000239c9) list_tport_double_graphic_pane_g1

0xe1de,	// (0x000239d6) list_tport_double_graphic_pane_t1_ParamLimits

0xe1de,	// (0x000239d6) list_tport_double_graphic_pane_t1

0xe1f3,	// (0x000239eb) list_tport_double_graphic_pane_t2_ParamLimits

0xe1f3,	// (0x000239eb) list_tport_double_graphic_pane_t2

0x0001,

0xfdd8,	// (0x000255d0) list_tport_double_graphic_pane_t_ParamLimits

0xfdd8,	// (0x000255d0) list_tport_double_graphic_pane_t

0x09a8,	// (0x000161a0) main_cale_note_pane

0x7eef,	// (0x0001d6e7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7eef,	// (0x0001d6e7) cell_vitu2_function_top_wide_pane_cp01

0xd9ab,	// (0x000231a3) wait_bar_pane_cp05_ParamLimits

0x09a8,	// (0x000161a0) listscroll_cmail_pane

0x5c43,	// (0x0001b43b) list_cmail_pane

0xe20f,	// (0x00023a07) list_cmail_body_pane

0xe233,	// (0x00023a2b) list_single_cmail_header_caption_pane

0xe261,	// (0x00023a59) list_single_cmail_header_detail_pane_ParamLimits

0xe261,	// (0x00023a59) list_single_cmail_header_detail_pane

0xe299,	// (0x00023a91) list_single_cmail_header_caption_pane_t1

0xe2a9,	// (0x00023aa1) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe2a9,	// (0x00023aa1) list_single_cmail_header_detail_pane_g1

0x5c63,	// (0x0001b45b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5c63,	// (0x0001b45b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfddd,	// (0x000255d5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfddd,	// (0x000255d5) list_single_cmail_header_detail_pane_g

0x5c7c,	// (0x0001b474) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5c7c,	// (0x0001b474) list_single_cmail_header_detail_pane_t1

0x5cae,	// (0x0001b4a6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x5cae,	// (0x0001b4a6) list_single_cmail_header_editor_pane_bg

0x5cc0,	// (0x0001b4b8) list_cmail_body_pane_g1

0x5cc9,	// (0x0001b4c1) list_cmail_body_pane_t1

0x4625,	// (0x00019e1d) list_single_cmail_header_editor_pane_bg_g1

0x1796,	// (0x00016f8e) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4635,	// (0x00019e2d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x462d,	// (0x00019e25) list_single_cmail_header_editor_pane_bg_g1_copy3

0x48a6,	// (0x0001a09e) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4655,	// (0x00019e4d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4645,	// (0x00019e3d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x464d,	// (0x00019e45) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1776,	// (0x00016f6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe2e7,	// (0x00023adf) calenote_gesture_pane_ParamLimits

0xe2e7,	// (0x00023adf) calenote_gesture_pane

0xe301,	// (0x00023af9) calenote_window_pane_ParamLimits

0xe301,	// (0x00023af9) calenote_window_pane

0x5cd7,	// (0x0001b4cf) popup_note_window_cp01

0xe319,	// (0x00023b11) calenote_swipe_1_pane_ParamLimits

0xe319,	// (0x00023b11) calenote_swipe_1_pane

0xdd58,	// (0x00023550) calenote_swipe_2_pane_ParamLimits

0xdd58,	// (0x00023550) calenote_swipe_2_pane

0x58b6,	// (0x0001b0ae) calenote_swipe_1_pane_g1_ParamLimits

0x58b6,	// (0x0001b0ae) calenote_swipe_1_pane_g1

0x58c3,	// (0x0001b0bb) calenote_swipe_1_pane_g2_ParamLimits

0x58c3,	// (0x0001b0bb) calenote_swipe_1_pane_g2

0x0001,

0xfd11,	// (0x00025509) calenote_swipe_1_pane_g_ParamLimits

0xfd11,	// (0x00025509) calenote_swipe_1_pane_g

0x5ce9,	// (0x0001b4e1) calenote_swipe_1_pane_t1_ParamLimits

0x5ce9,	// (0x0001b4e1) calenote_swipe_1_pane_t1

0x58b6,	// (0x0001b0ae) calenote_swipe_2_pane_g1_ParamLimits

0x58b6,	// (0x0001b0ae) calenote_swipe_2_pane_g1

0x5d08,	// (0x0001b500) calenote_swipe_2_pane_g2_ParamLimits

0x5d08,	// (0x0001b500) calenote_swipe_2_pane_g2

0x0001,

0xfde9,	// (0x000255e1) calenote_swipe_2_pane_g_ParamLimits

0xfde9,	// (0x000255e1) calenote_swipe_2_pane_g

0x5d14,	// (0x0001b50c) calenote_swipe_2_pane_t1_ParamLimits

0x5d14,	// (0x0001b50c) calenote_swipe_2_pane_t1

0x09a8,	// (0x000161a0) main_mup_navstr_pane

0xbb47,	// (0x0002133f) main_mup3_pane_t7_ParamLimits

0xbb47,	// (0x0002133f) main_mup3_pane_t7

0x7819,	// (0x0001d011) main_mp4_pane_g6_ParamLimits

0x7819,	// (0x0001d011) main_mp4_pane_g6

0x7b00,	// (0x0001d2f8) main_image3_pane_t4_ParamLimits

0x7b00,	// (0x0001d2f8) main_image3_pane_t4

0xe32c,	// (0x00023b24) popup_navstr_preview_pane_ParamLimits

0xe32c,	// (0x00023b24) popup_navstr_preview_pane

0xe338,	// (0x00023b30) scroll_navstr_pane_ParamLimits

0xe338,	// (0x00023b30) scroll_navstr_pane

0x09a8,	// (0x000161a0) bg_popup_preview_window_pane_cp04

0x5d3b,	// (0x0001b533) popup_navstr_preview_pane_t1

0xe344,	// (0x00023b3c) scroll_navstr_pane_g1_ParamLimits

0xe344,	// (0x00023b3c) scroll_navstr_pane_g1

0xe351,	// (0x00023b49) scroll_navstr_pane_t1_ParamLimits

0xe351,	// (0x00023b49) scroll_navstr_pane_t1

0x5ce0,	// (0x0001b4d8) bg_button_pane_cp014

0x5ce0,	// (0x0001b4d8) bg_button_pane_cp030

0x5857,	// (0x0001b04f) list_double_fisheye_pane_g4_ParamLimits

0x5857,	// (0x0001b04f) list_double_fisheye_pane_g4

0x5863,	// (0x0001b05b) list_double_fisheye_pane_g5_ParamLimits

0x5863,	// (0x0001b05b) list_double_fisheye_pane_g5

0x5c4b,	// (0x0001b443) sp_fs_scroll_pane_cp03

0x14dc,	// (0x00016cd4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x59f1,	// (0x0001b1e9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd2e,	// (0x00025526) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x59fd,	// (0x0001b1f5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe205,	// (0x000239fd) sp_fs_scroll_pane_cp02

0x135d,	// (0x00016b55) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x135d,	// (0x00016b55) popup_sp_fs_calendar_preview_list_single_pane

0x09a8,	// (0x000161a0) main_cam6_pano_pane

0x0a18,	// (0x00016210) main_mup3_pane_ParamLimits

0x09a8,	// (0x000161a0) main_phacti_pane

0xd880,	// (0x00023078) bg_button_pane_cp11

0xd898,	// (0x00023090) main_mobtv_info_pane_g2_ParamLimits

0xd898,	// (0x00023090) main_mobtv_info_pane_g2

0x0001,

0xfc8e,	// (0x00025486) main_mobtv_info_pane_g_ParamLimits

0xfc8e,	// (0x00025486) main_mobtv_info_pane_g

0xda4a,	// (0x00023242) sc_clock_pane_t5_ParamLimits

0xda4a,	// (0x00023242) sc_clock_pane_t5

0xdaec,	// (0x000232e4) main_radioblah_pane_g1_ParamLimits

0x57c5,	// (0x0001afbd) main_radioblah_pane_t3_ParamLimits

0x57c5,	// (0x0001afbd) main_radioblah_pane_t3

0x57dd,	// (0x0001afd5) main_radioblah_pane_t4_ParamLimits

0x57dd,	// (0x0001afd5) main_radioblah_pane_t4

0xdb0a,	// (0x00023302) main_radioblah_text_pane_ParamLimits

0xdb0a,	// (0x00023302) main_radioblah_text_pane

0xdb17,	// (0x0002330f) main_radioblah_info_pane_g1_ParamLimits

0xdbac,	// (0x000233a4) main_radioblah_info_pane_t4_ParamLimits

0xdbac,	// (0x000233a4) main_radioblah_info_pane_t4

0x0a18,	// (0x00016210) main_sp_fs_calendar_pane

0xe363,	// (0x00023b5b) main_phacti_pane_g1

0xe36b,	// (0x00023b63) phacti_note_pane_ParamLimits

0xe36b,	// (0x00023b63) phacti_note_pane

0x5d52,	// (0x0001b54a) phacti_term_pane_ParamLimits

0x5d52,	// (0x0001b54a) phacti_term_pane

0x5d67,	// (0x0001b55f) phacti_note_pane_t1_ParamLimits

0x5d67,	// (0x0001b55f) phacti_note_pane_t1

0x5d7e,	// (0x0001b576) phacti_term_pane_g1

0x5d86,	// (0x0001b57e) phacti_term_pane_t1_ParamLimits

0x5d86,	// (0x0001b57e) phacti_term_pane_t1

0x5db0,	// (0x0001b5a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x5db8,	// (0x0001b5b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdf3,	// (0x000255eb) popup_sp_fs_calendar_preview_list_single_pane_g

0x5dc0,	// (0x0001b5b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x5dc0,	// (0x0001b5b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0x5dd6,	// (0x0001b5ce) aid_popup_sp_fs_bg_corner_pane

0x38db,	// (0x000190d3) popup_sp_fs_calendar_preview_bg_pane_g1

0x09a8,	// (0x000161a0) popup_sp_fs_calendar_preview_bg_pane

0x5dde,	// (0x0001b5d6) popup_sp_fs_calendar_preview_list_pane

0x0a18,	// (0x00016210) bg_main_sp_fs_cale_pane_ParamLimits

0x0a18,	// (0x00016210) bg_main_sp_fs_cale_pane

0x5def,	// (0x0001b5e7) listscroll_cale_mrui_pane_ParamLimits

0x5def,	// (0x0001b5e7) listscroll_cale_mrui_pane

0x5e03,	// (0x0001b5fb) listscroll_sp_fs_schedule_track_pane

0x5e0c,	// (0x0001b604) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5e0c,	// (0x0001b604) main_sp_fs_ctrlbar_pane_cp01

0x5e1d,	// (0x0001b615) main_sp_fs_ribbon_pane

0x5e25,	// (0x0001b61d) popup_sp_fs_cale_preview_window

0xe3ae,	// (0x00023ba6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe3ae,	// (0x00023ba6) list_single_sp_fs_schedule_track_pane

0x3c32,	// (0x0001942a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3c32,	// (0x0001942a) bg_sp_fs_highlight_list_pane_cp03

0xe3d0,	// (0x00023bc8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe3d0,	// (0x00023bc8) list_single_sp_fs_schedule_track_pane_g1

0xe3dc,	// (0x00023bd4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe3dc,	// (0x00023bd4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdf8,	// (0x000255f0) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdf8,	// (0x000255f0) list_single_sp_fs_schedule_track_pane_g

0xe3e8,	// (0x00023be0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe3e8,	// (0x00023be0) list_single_sp_fs_schedule_track_pane_t1

0xe400,	// (0x00023bf8) sp_fs_schedule_track_pane_ParamLimits

0xe400,	// (0x00023bf8) sp_fs_schedule_track_pane

0x5e37,	// (0x0001b62f) sp_fs_schedule_track_pane_g1

0x5e3f,	// (0x0001b637) sp_fs_schedule_track_pane_g2

0x5e47,	// (0x0001b63f) sp_fs_schedule_track_pane_g3

0x5e4f,	// (0x0001b647) sp_fs_schedule_track_pane_g4

0x5e57,	// (0x0001b64f) sp_fs_schedule_track_pane_g5

0x0004,

0xfdfd,	// (0x000255f5) sp_fs_schedule_track_pane_g

0x4625,	// (0x00019e1d) bg_sp_fs_schedule_viewer_highlight_g1

0x1796,	// (0x00016f8e) bg_sp_fs_schedule_viewer_highlight_g2

0x462d,	// (0x00019e25) bg_sp_fs_schedule_viewer_highlight_g3

0x4635,	// (0x00019e2d) bg_sp_fs_schedule_viewer_highlight_g4

0x48a6,	// (0x0001a09e) bg_sp_fs_schedule_viewer_highlight_g5

0x4645,	// (0x00019e3d) bg_sp_fs_schedule_viewer_highlight_g6

0x464d,	// (0x00019e45) bg_sp_fs_schedule_viewer_highlight_g7

0x4655,	// (0x00019e4d) bg_sp_fs_schedule_viewer_highlight_g8

0x1776,	// (0x00016f6e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe08,	// (0x00025600) bg_sp_fs_schedule_viewer_highlight_g

0x09a8,	// (0x000161a0) bg_main_sp_fs_ribbon_pane

0xe410,	// (0x00023c08) main_sp_fs_ribbon_pane_g1

0x5e5f,	// (0x0001b657) main_sp_fs_ribbon_pane_t1

0xe419,	// (0x00023c11) main_sp_fs_ribbon_pane_t2

0x5e6e,	// (0x0001b666) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe1b,	// (0x00025613) main_sp_fs_ribbon_pane_t

0x5e7d,	// (0x0001b675) main_sp_fs_ribbon_scheduler_pane

0x5e85,	// (0x0001b67d) bg_main_sp_fs_ribbon_pane_g1

0x5e8e,	// (0x0001b686) bg_main_sp_fs_ribbon_pane_g2

0x5e97,	// (0x0001b68f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe22,	// (0x0002561a) bg_main_sp_fs_ribbon_pane_g

0x5e9f,	// (0x0001b697) main_sp_fs_ribbon_scheduler_pane_g1

0x5ea8,	// (0x0001b6a0) main_sp_fs_ribbon_scheduler_pane_g2

0x5eb1,	// (0x0001b6a9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe29,	// (0x00025621) main_sp_fs_ribbon_scheduler_pane_g

0x5eba,	// (0x0001b6b2) list_cale_mrui_pane

0xe428,	// (0x00023c20) sp_fs_scroll_pane_cp07_ParamLimits

0xe428,	// (0x00023c20) sp_fs_scroll_pane_cp07

0xe43e,	// (0x00023c36) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe43e,	// (0x00023c36) bg_sp_fs_schedule_viewer_highlight

0x5ec3,	// (0x0001b6bb) list_single_sp_fs_schedule_track_pane_cp01

0x5ecb,	// (0x0001b6c3) list_sp_fs_schedule_track_pane

0x5ed3,	// (0x0001b6cb) sp_fs_scroll_pane_cp06_ParamLimits

0x5ed3,	// (0x0001b6cb) sp_fs_scroll_pane_cp06

0x38db,	// (0x000190d3) bgmain_sp_fs_calendar_pane_g1

0xe44b,	// (0x00023c43) list_single_cale_mrui_pane_ParamLimits

0xe44b,	// (0x00023c43) list_single_cale_mrui_pane

0x5ee5,	// (0x0001b6dd) list_single_cale_mrui_row_pane_ParamLimits

0x5ee5,	// (0x0001b6dd) list_single_cale_mrui_row_pane

0x5ef2,	// (0x0001b6ea) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5ef2,	// (0x0001b6ea) list_single_cale_mrui_row_pane_g1

0x5f2a,	// (0x0001b722) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5f2a,	// (0x0001b722) list_single_cale_mrui_row_pane_t1

0xe47a,	// (0x00023c72) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe47a,	// (0x00023c72) list_single_cale_mrui_row_pane_t2

0x5f3c,	// (0x0001b734) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5f3c,	// (0x0001b734) list_single_cale_mrui_row_pane_t3

0x5f6b,	// (0x0001b763) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5f6b,	// (0x0001b763) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe35,	// (0x0002562d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe35,	// (0x0002562d) list_single_cale_mrui_row_pane_t

0xe4e0,	// (0x00023cd8) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe4e0,	// (0x00023cd8) list_single_cmail_header_editor_pane_bg_cp01

0xe502,	// (0x00023cfa) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe502,	// (0x00023cfa) list_single_cmail_header_editor_pane_bg_cp02

0xe51e,	// (0x00023d16) main_radioblah_text_pane_t1_ParamLimits

0xe51e,	// (0x00023d16) main_radioblah_text_pane_t1

0x5f9a,	// (0x0001b792) cam6_indi_pane_cp01

0x5fa2,	// (0x0001b79a) cam6_mode_pane_cp01

0x5faa,	// (0x0001b7a2) cam6_pano_pane

0x5fb3,	// (0x0001b7ab) cam6_zoom_pane_cp01

0x5fbb,	// (0x0001b7b3) cam6_pano_image_pane

0x5fc6,	// (0x0001b7be) cam6_pano_pane_g1

0x553d,	// (0x0001ad35) cam6_pano_pane_g2

0x5fcf,	// (0x0001b7c7) cam6_pano_pane_g3

0x5fd8,	// (0x0001b7d0) cam6_pano_pane_g4

0x3eca,	// (0x000196c2) cam6_pano_pane_g5

0x5fe1,	// (0x0001b7d9) cam6_pano_pane_g6

0x5feb,	// (0x0001b7e3) cam6_pano_pane_g7

0x5ff3,	// (0x0001b7eb) cam6_pano_pane_g8

0x5ffc,	// (0x0001b7f4) cam6_pano_pane_g9

0x0008,

0xfe3e,	// (0x00025636) cam6_pano_pane_g

0x09a8,	// (0x000161a0) main_browser_tag_pane

0x5d33,	// (0x0001b52b) grid_navstr_albumart_pane

0x6007,	// (0x0001b7ff) cell_navstr_albumart_pane_ParamLimits

0x6007,	// (0x0001b7ff) cell_navstr_albumart_pane

0x20bd,	// (0x000178b5) cell_navstr_albumart_pane_g1

0x31f0,	// (0x000189e8) cell_navstr_albumart_pane_g2

0x3200,	// (0x000189f8) cell_navstr_albumart_pane_g3

0x31f8,	// (0x000189f0) cell_navstr_albumart_pane_g4

0x0003,

0xfe51,	// (0x00025649) cell_navstr_albumart_pane_g

0xe53b,	// (0x00023d33) bt_list_pane_ParamLimits

0xe53b,	// (0x00023d33) bt_list_pane

0xe562,	// (0x00023d5a) bt_list_pane_t1

0xe571,	// (0x00023d69) bt_list_pane_t2

0x0001,

0xfe5a,	// (0x00025652) bt_list_pane_t

0x09a8,	// (0x000161a0) main_cale_prevew_pane

0xe580,	// (0x00023d78) popup_cale_preview_window_ParamLimits

0xe580,	// (0x00023d78) popup_cale_preview_window

0x0a18,	// (0x00016210) bg_popup_preview_window_pane_cp05_ParamLimits

0x0a18,	// (0x00016210) bg_popup_preview_window_pane_cp05

0x6029,	// (0x0001b821) list_cale_preview_pane_ParamLimits

0x6029,	// (0x0001b821) list_cale_preview_pane

0xe597,	// (0x00023d8f) list_double_cale_preview_pane_ParamLimits

0xe597,	// (0x00023d8f) list_double_cale_preview_pane

0xe5a9,	// (0x00023da1) list_single_cale_preview_pane_ParamLimits

0xe5a9,	// (0x00023da1) list_single_cale_preview_pane

0xe5bd,	// (0x00023db5) list_single_cale_preview_pane_g1

0xe5c5,	// (0x00023dbd) list_single_cale_preview_pane_t1_ParamLimits

0xe5c5,	// (0x00023dbd) list_single_cale_preview_pane_t1

0xe5da,	// (0x00023dd2) list_double_cale_preview_pane_g1

0xe5e2,	// (0x00023dda) list_double_cale_preview_pane_t1_ParamLimits

0xe5e2,	// (0x00023dda) list_double_cale_preview_pane_t1

0xe5f7,	// (0x00023def) list_double_cale_preview_pane_t2_ParamLimits

0xe5f7,	// (0x00023def) list_double_cale_preview_pane_t2

0x0001,

0xfe5f,	// (0x00025657) list_double_cale_preview_pane_t_ParamLimits

0xfe5f,	// (0x00025657) list_double_cale_preview_pane_t

0x09a8,	// (0x000161a0) main_ezdial_pane

0x0a18,	// (0x00016210) main_sp_fs_email_pane_ParamLimits

0xdd8e,	// (0x00023586) cmail_ddmenu_btn01_pane_ParamLimits

0xdd8e,	// (0x00023586) cmail_ddmenu_btn01_pane

0xddab,	// (0x000235a3) cmail_ddmenu_btn02_pane_ParamLimits

0xddab,	// (0x000235a3) cmail_ddmenu_btn02_pane

0xddc9,	// (0x000235c1) cmail_ddmenu_btn03_pane_ParamLimits

0xddc9,	// (0x000235c1) cmail_ddmenu_btn03_pane

0xddf7,	// (0x000235ef) main_sp_fs_ctrlbar_pane_ParamLimits

0xde13,	// (0x0002360b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe20f,	// (0x00023a07) list_cmail_body_pane_ParamLimits

0x5c5a,	// (0x0001b452) bg_button_pane_cp12

0x5c6f,	// (0x0001b467) list_single_cmail_header_detail_pane_g3_ParamLimits

0x5c6f,	// (0x0001b467) list_single_cmail_header_detail_pane_g3

0xe2c1,	// (0x00023ab9) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe2c1,	// (0x00023ab9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfde4,	// (0x000255dc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfde4,	// (0x000255dc) list_single_cmail_header_detail_pane_t

0x5d9b,	// (0x0001b593) phacti_term_pane_t2_ParamLimits

0x5d9b,	// (0x0001b593) phacti_term_pane_t2

0x0001,

0xfdee,	// (0x000255e6) phacti_term_pane_t_ParamLimits

0xfdee,	// (0x000255e6) phacti_term_pane_t

0x6035,	// (0x0001b82d) aid_size_list_single_double

0xe60f,	// (0x00023e07) popup_ezdial_listscroll_window

0xe630,	// (0x00023e28) popup_number_entry_window_cp01

0x1f3c,	// (0x00017734) bg_popup_call_pane_cp09

0x6041,	// (0x0001b839) ezdial_list_pane

0x6049,	// (0x0001b841) scroll_pane_cp23

0x36be,	// (0x00018eb6) bg_button_pane_cp028_ParamLimits

0x36be,	// (0x00018eb6) bg_button_pane_cp028

0xe63e,	// (0x00023e36) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe63e,	// (0x00023e36) cmail_ddmenu_btn01_pane_g1

0xe650,	// (0x00023e48) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe650,	// (0x00023e48) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe64,	// (0x0002565c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe64,	// (0x0002565c) cmail_ddmenu_btn01_pane_g

0x6051,	// (0x0001b849) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x6051,	// (0x0001b849) cmail_ddmenu_btn01_pane_t1

0x33d3,	// (0x00018bcb) bg_button_pane_cp029_ParamLimits

0x33d3,	// (0x00018bcb) bg_button_pane_cp029

0xe650,	// (0x00023e48) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe650,	// (0x00023e48) cmail_ddmenu_btn02_pane_g1

0xe668,	// (0x00023e60) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe668,	// (0x00023e60) cmail_ddmenu_btn02_pane_t1

0x3c32,	// (0x0001942a) bg_button_pane_cp031_ParamLimits

0x3c32,	// (0x0001942a) bg_button_pane_cp031

0xe650,	// (0x00023e48) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe650,	// (0x00023e48) cmail_ddmenu_btn03_pane_g1

0xe668,	// (0x00023e60) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe668,	// (0x00023e60) cmail_ddmenu_btn03_pane_t1

0xc3d4,	// (0x00021bcc) cell_dialer2_keypad_pane_t1_ParamLimits

0xc3ee,	// (0x00021be6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc3ee,	// (0x00021be6) cell_dialer2_keypad_pane_t1_copy1

0xd742,	// (0x00022f3a) ncimui_group_button_pane

0x0a18,	// (0x00016210) main_sp_fs_calendar_pane_ParamLimits

0xe233,	// (0x00023a2b) list_single_cmail_header_caption_pane_ParamLimits

0x5de6,	// (0x0001b5de) aid_recal_txt_sm_pane

0x09a8,	// (0x000161a0) mian_recal_day_pane

0x5e25,	// (0x0001b61d) popup_sp_fs_cale_preview_window_ParamLimits

0x09a8,	// (0x000161a0) list_recal_day_pane

0x6088,	// (0x0001b880) list_single_recal_day_pane_ParamLimits

0x6088,	// (0x0001b880) list_single_recal_day_pane

0x609a,	// (0x0001b892) list_single_recal_day_pane_g1_ParamLimits

0x609a,	// (0x0001b892) list_single_recal_day_pane_g1

0x60a6,	// (0x0001b89e) list_single_recal_day_pane_g2_ParamLimits

0x60a6,	// (0x0001b89e) list_single_recal_day_pane_g2

0x60b5,	// (0x0001b8ad) list_single_recal_day_pane_g3_ParamLimits

0x60b5,	// (0x0001b8ad) list_single_recal_day_pane_g3

0xe68c,	// (0x00023e84) list_single_recal_day_pane_g4_ParamLimits

0xe68c,	// (0x00023e84) list_single_recal_day_pane_g4

0x60c1,	// (0x0001b8b9) list_single_recal_day_pane_g5_ParamLimits

0x60c1,	// (0x0001b8b9) list_single_recal_day_pane_g5

0x60d0,	// (0x0001b8c8) list_single_recal_day_pane_g6_ParamLimits

0x60d0,	// (0x0001b8c8) list_single_recal_day_pane_g6

0x0005,

0xfe73,	// (0x0002566b) list_single_recal_day_pane_g_ParamLimits

0xfe73,	// (0x0002566b) list_single_recal_day_pane_g

0x60dc,	// (0x0001b8d4) list_single_recal_day_pane_t1

0x60ea,	// (0x0001b8e2) list_single_recal_day_pane_t2

0x0001,

0xfe80,	// (0x00025678) list_single_recal_day_pane_t

0xe69f,	// (0x00023e97) ncimui_query_button_pane_ParamLimits

0xe69f,	// (0x00023e97) ncimui_query_button_pane

0xe6af,	// (0x00023ea7) ncimui_query_button_pane_t1_ParamLimits

0xe6af,	// (0x00023ea7) ncimui_query_button_pane_t1

0x60f8,	// (0x0001b8f0) ncimui_query_button_pane_t2_ParamLimits

0x60f8,	// (0x0001b8f0) ncimui_query_button_pane_t2

0x0001,

0xfe85,	// (0x0002567d) ncimui_query_button_pane_t_ParamLimits

0xfe85,	// (0x0002567d) ncimui_query_button_pane_t

0xe6c2,	// (0x00023eba) query_button_pane_ParamLimits

0xe6c2,	// (0x00023eba) query_button_pane

0x09a8,	// (0x000161a0) bg_button_pane_cp0028

0x610b,	// (0x0001b903) query_button_pane_t1

0xae75,	// (0x0002066d) main_tport_pane_ParamLimits

0xe13c,	// (0x00023934) bg_popup_window_pane_cp01_ParamLimits

0xe13c,	// (0x00023934) bg_popup_window_pane_cp01

0xe149,	// (0x00023941) heading_pane_cp08_ParamLimits

0xe149,	// (0x00023941) heading_pane_cp08

0xe157,	// (0x0002394f) heading_pane_cp07_ParamLimits

0xe157,	// (0x0002394f) heading_pane_cp07

0xe1ae,	// (0x000239a6) cell_tport_appsw_pane_g2

0x0002,

0xfdd1,	// (0x000255c9) cell_tport_appsw_pane_g

0xa603,	// (0x0001fdfb) input_candi_list_open_g1

0x1989,	// (0x00017181) list_cale_time_pane_g6_ParamLimits

0x1989,	// (0x00017181) list_cale_time_pane_g6

0xb5c6,	// (0x00020dbe) aid_size_touch_calib_1_ParamLimits

0xb5c6,	// (0x00020dbe) aid_size_touch_calib_1

0xb5d2,	// (0x00020dca) aid_size_touch_calib_2_ParamLimits

0xb5d2,	// (0x00020dca) aid_size_touch_calib_2

0xb5e0,	// (0x00020dd8) aid_size_touch_calib_3_ParamLimits

0xb5e0,	// (0x00020dd8) aid_size_touch_calib_3

0xb5f0,	// (0x00020de8) aid_size_touch_calib_4_ParamLimits

0xb5f0,	// (0x00020de8) aid_size_touch_calib_4

0xb5fe,	// (0x00020df6) main_touch_calib_button_group_pane_ParamLimits

0xb5fe,	// (0x00020df6) main_touch_calib_button_group_pane

0xb60c,	// (0x00020e04) main_touch_calib_pane_g1_ParamLimits

0xb618,	// (0x00020e10) main_touch_calib_pane_g2_ParamLimits

0xb624,	// (0x00020e1c) main_touch_calib_pane_g3_ParamLimits

0xb630,	// (0x00020e28) main_touch_calib_pane_g4_ParamLimits

0xf7b8,	// (0x00024fb0) main_touch_calib_pane_g_ParamLimits

0xb63c,	// (0x00020e34) main_touch_calib_pane_t1_ParamLimits

0xb653,	// (0x00020e4b) main_touch_calib_pane_t2_ParamLimits

0xb66a,	// (0x00020e62) main_touch_calib_pane_t3_ParamLimits

0xb67e,	// (0x00020e76) main_touch_calib_pane_t4_ParamLimits

0xb692,	// (0x00020e8a) main_touch_calib_pane_t5_ParamLimits

0xf7c1,	// (0x00024fb9) main_touch_calib_pane_t_ParamLimits

0x3cb1,	// (0x000194a9) list_single_fp_cale_pane_g3_ParamLimits

0x3cb1,	// (0x000194a9) list_single_fp_cale_pane_g3

0x7cfb,	// (0x0001d4f3) bg_button_pane_cp012_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp03_ParamLimits

0x80f5,	// (0x0001d8ed) cell_vitu2_function_top_pane_g1_ParamLimits

0x7cfb,	// (0x0001d4f3) bg_vkb2_func_pane_cp04_ParamLimits

0xd6f3,	// (0x00022eeb) main_ncimui_button_group_pane_ParamLimits

0xd6f3,	// (0x00022eeb) main_ncimui_button_group_pane

0xd730,	// (0x00022f28) main_ncimui_pane_t3_ParamLimits

0xd730,	// (0x00022f28) main_ncimui_pane_t3

0x5d49,	// (0x0001b541) phacti_button_group_pane

0x6035,	// (0x0001b82d) aid_size_list_single_double_ParamLimits

0xe60f,	// (0x00023e07) popup_ezdial_listscroll_window_ParamLimits

0xe630,	// (0x00023e28) popup_number_entry_window_cp01_ParamLimits

0xe6cf,	// (0x00023ec7) phacti_button_pane_ParamLimits

0xe6cf,	// (0x00023ec7) phacti_button_pane

0x09a8,	// (0x000161a0) bg_button_pane_cp14

0xe6e0,	// (0x00023ed8) phacti_button_pane_t1

0xe6ee,	// (0x00023ee6) main_touch_calib_button_pane_ParamLimits

0xe6ee,	// (0x00023ee6) main_touch_calib_button_pane

0x11c3,	// (0x000169bb) bg_button_pane_cp18_ParamLimits

0x11c3,	// (0x000169bb) bg_button_pane_cp18

0xe6fe,	// (0x00023ef6) main_touch_calib_button_pane_t1_ParamLimits

0xe6fe,	// (0x00023ef6) main_touch_calib_button_pane_t1

0xe714,	// (0x00023f0c) main_touch_calib_button_pane_t2_ParamLimits

0xe714,	// (0x00023f0c) main_touch_calib_button_pane_t2

0x0001,

0xfe8a,	// (0x00025682) main_touch_calib_button_pane_t_ParamLimits

0xfe8a,	// (0x00025682) main_touch_calib_button_pane_t

0x09a8,	// (0x000161a0) cell_ncimui_button_pane

0x09a8,	// (0x000161a0) bg_button_pane_cp032

0xe732,	// (0x00023f2a) cell_ncimui_button_pane_t1

0x7a13,	// (0x0001d20b) image3_infobar_pane_ParamLimits

0x7a13,	// (0x0001d20b) image3_infobar_pane

0xda6c,	// (0x00023264) fs_bigclock_status_pane_ParamLimits

0xda6c,	// (0x00023264) fs_bigclock_status_pane

0xda79,	// (0x00023271) main_fs_bigclock_clock_pane_ParamLimits

0xda79,	// (0x00023271) main_fs_bigclock_clock_pane

0xda8d,	// (0x00023285) main_fs_bigclock_indi_pane_ParamLimits

0xda8d,	// (0x00023285) main_fs_bigclock_indi_pane

0xdaba,	// (0x000232b2) main_fs_bigclock_swipe_pane_ParamLimits

0xdaba,	// (0x000232b2) main_fs_bigclock_swipe_pane

0x09a8,	// (0x000161a0) main_fs_clock_dumped_data

0x564a,	// (0x0001ae42) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x564a,	// (0x0001ae42) list_single_fs_bigclock_indicator_pane_g1

0x5668,	// (0x0001ae60) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5668,	// (0x0001ae60) list_single_fs_bigclock_indicator_pane_g2

0x5682,	// (0x0001ae7a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5682,	// (0x0001ae7a) list_single_fs_bigclock_indicator_pane_g3

0x569c,	// (0x0001ae94) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x569c,	// (0x0001ae94) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcc2,	// (0x000254ba) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcc2,	// (0x000254ba) list_single_fs_bigclock_indicator_pane_g

0x56c2,	// (0x0001aeba) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x56c2,	// (0x0001aeba) list_single_fs_bigclock_indicator_pane_t1

0x56ea,	// (0x0001aee2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x56ea,	// (0x0001aee2) list_single_fs_bigclock_indicator_pane_t2

0x5712,	// (0x0001af0a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5712,	// (0x0001af0a) list_single_fs_bigclock_indicator_pane_t3

0x573a,	// (0x0001af32) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x573a,	// (0x0001af32) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfccd,	// (0x000254c5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfccd,	// (0x000254c5) list_single_fs_bigclock_indicator_pane_t

0xe740,	// (0x00023f38) image3_infobar_fav_pane_ParamLimits

0xe740,	// (0x00023f38) image3_infobar_fav_pane

0xe750,	// (0x00023f48) image3_infobar_loc_pane_ParamLimits

0xe750,	// (0x00023f48) image3_infobar_loc_pane

0xe764,	// (0x00023f5c) image3_infobar_time_pane_ParamLimits

0xe764,	// (0x00023f5c) image3_infobar_time_pane

0x38db,	// (0x000190d3) image3_infobar_time_pane_g1

0xe774,	// (0x00023f6c) image3_infobar_time_pane_t1

0x38db,	// (0x000190d3) image3_infobar_loc_pane_g1

0xe782,	// (0x00023f7a) image3_infobar_loc_pane_g2

0x0001,

0xfe8f,	// (0x00025687) image3_infobar_loc_pane_g

0xe78a,	// (0x00023f82) image3_infobar_loc_pane_t1

0x38db,	// (0x000190d3) image3_infobar_fav_pane_g1

0xe798,	// (0x00023f90) image3_infobar_fav_pane_g2

0x0001,

0xfe94,	// (0x0002568c) image3_infobar_fav_pane_g

0xe7a0,	// (0x00023f98) fs_bigclock_status_battery_pane

0xe7a9,	// (0x00023fa1) fs_bigclock_status_signal_pane

0xe7b2,	// (0x00023faa) fs_bigclock_status_title_pane

0xe7bb,	// (0x00023fb3) fs_bigclock_status_signal_pane_g1

0xe7c4,	// (0x00023fbc) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe99,	// (0x00025691) fs_bigclock_status_signal_pane_g

0xe7cc,	// (0x00023fc4) fs_bigclock_status_battery_pane_g1

0xe7d5,	// (0x00023fcd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe9e,	// (0x00025696) fs_bigclock_status_battery_pane_g

0xe7dd,	// (0x00023fd5) fs_bigclock_status_title_pane_t1

0x38db,	// (0x000190d3) main_fs_bigclock_clock_pane_g1

0xe7eb,	// (0x00023fe3) main_fs_bigclock_clock_pane_g2

0xe7eb,	// (0x00023fe3) main_fs_bigclock_clock_pane_g3

0xe7eb,	// (0x00023fe3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfea3,	// (0x0002569b) main_fs_bigclock_clock_pane_g

0xe7f3,	// (0x00023feb) main_fs_bigclock_clock_pane_t1

0xe801,	// (0x00023ff9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeac,	// (0x000256a4) main_fs_bigclock_clock_pane_t

0xe810,	// (0x00024008) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe810,	// (0x00024008) list_single_fs_bigclock_indicator_pane

0xe821,	// (0x00024019) list_single_fs_bigclock_pane_ParamLimits

0xe821,	// (0x00024019) list_single_fs_bigclock_pane

0xe88e,	// (0x00024086) main_fs_bigclock_indicator_pane_t1

0xe89d,	// (0x00024095) list_single_fs_bigclock_pane_g1

0xe8a5,	// (0x0002409d) list_single_fs_bigclock_pane_t1

0x38db,	// (0x000190d3) main_fs_bigclock_swipe_pane_g1

0xe8e3,	// (0x000240db) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfebd,	// (0x000256b5) main_fs_bigclock_swipe_pane_g

0xe8eb,	// (0x000240e3) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe8eb,	// (0x000240e3) main_fs_bigclock_swipe_pane_t1

0x9e5f,	// (0x0001f657) call_type_pane_ParamLimits

0x09a8,	// (0x000161a0) main_btmg_pane

0x5f1e,	// (0x0001b716) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5f1e,	// (0x0001b716) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe30,	// (0x00025628) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe30,	// (0x00025628) list_single_cale_mrui_row_pane_g

0x606f,	// (0x0001b867) list_recal_vselct_arw_lo_pane

0x6077,	// (0x0001b86f) list_recal_vselct_arw_up_pane

0x607f,	// (0x0001b877) list_recal_vselct_pane

0xe908,	// (0x00024100) btmg_button_pane

0xe912,	// (0x0002410a) main_btmg_pane_g1

0x09a8,	// (0x000161a0) bg_button_pane_cp044

0xe91a,	// (0x00024112) btmg_button_pane_t1

0x33cb,	// (0x00018bc3) aid_listscroll_gen

0x0a18,	// (0x00016210) main_cntbar_detail_pane

0x5c3b,	// (0x0001b433) list_cmail_folder_pane

0x5c4b,	// (0x0001b443) sp_fs_scroll_pane_cp03_ParamLimits

0xe233,	// (0x00023a2b) list_single_fs_dyc_pane_cp01_ParamLimits

0xe233,	// (0x00023a2b) list_single_fs_dyc_pane_cp01

0xe928,	// (0x00024120) aid_size_cmail_indent

0xe931,	// (0x00024129) list_single_dyc_row_pane_cp01

0xe95a,	// (0x00024152) cntbar_detail_list_pane_ParamLimits

0xe95a,	// (0x00024152) cntbar_detail_list_pane

0xe994,	// (0x0002418c) main_cntbar_detail_cont_pane_ParamLimits

0xe994,	// (0x0002418c) main_cntbar_detail_cont_pane

0x9df9,	// (0x0001f5f1) scroll_pane_cp032_ParamLimits

0x9df9,	// (0x0001f5f1) scroll_pane_cp032

0xe9a0,	// (0x00024198) cntbar_detail_list_event_pane_ParamLimits

0xe9a0,	// (0x00024198) cntbar_detail_list_event_pane

0xe966,	// (0x0002415e) cntbar_detail_list_shct_pane

0x17e4,	// (0x00016fdc) aid_list_gen

0xe9b4,	// (0x000241ac) aid_scroll

0xe9bd,	// (0x000241b5) aid_size_touch_scroll_bar

0xe9c6,	// (0x000241be) aid_list_double

0xe9cf,	// (0x000241c7) aid_list_single

0xe9d8,	// (0x000241d0) aid_list_single_lg

0xe9e1,	// (0x000241d9) aid_list_z_g_a_sm

0xe9e9,	// (0x000241e1) aid_list_z_g_d

0xe9f1,	// (0x000241e9) aid_txt_z_prm

0xe9ff,	// (0x000241f7) aid_txt_z_prm_cp01

0xea0d,	// (0x00024205) aid_txt_z_sec

0xea1b,	// (0x00024213) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea1b,	// (0x00024213) main_cntbar_detail_cont_pane_g1

0xea28,	// (0x00024220) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea28,	// (0x00024220) main_cntbar_detail_cont_pane_g2

0x0001,

0xfec2,	// (0x000256ba) main_cntbar_detail_cont_pane_g_ParamLimits

0xfec2,	// (0x000256ba) main_cntbar_detail_cont_pane_g

0xea34,	// (0x0002422c) main_cntbar_detail_cont_pane_t1

0xea42,	// (0x0002423a) main_cntbar_detail_cont_pane_t2

0xea50,	// (0x00024248) main_cntbar_detail_cont_pane_t3

0x0002,

0xfec7,	// (0x000256bf) main_cntbar_detail_cont_pane_t

0xea5e,	// (0x00024256) cell_cntbar_detail_list_shct_pane_ParamLimits

0xea5e,	// (0x00024256) cell_cntbar_detail_list_shct_pane

0xea72,	// (0x0002426a) cntbar_detail_list_shct_pane_g1

0xea7b,	// (0x00024273) cntbar_detail_list_shct_pane_g2

0x0001,

0xfece,	// (0x000256c6) cntbar_detail_list_shct_pane_g

0xea84,	// (0x0002427c) cntbar_detail_list_event_pane_g1_ParamLimits

0xea84,	// (0x0002427c) cntbar_detail_list_event_pane_g1

0xea90,	// (0x00024288) cntbar_detail_list_event_pane_g2_ParamLimits

0xea90,	// (0x00024288) cntbar_detail_list_event_pane_g2

0x0005,

0xfed3,	// (0x000256cb) cntbar_detail_list_event_pane_g_ParamLimits

0xfed3,	// (0x000256cb) cntbar_detail_list_event_pane_g

0xeafc,	// (0x000242f4) cntbar_detail_list_event_pane_t1_ParamLimits

0xeafc,	// (0x000242f4) cntbar_detail_list_event_pane_t1

0xeb11,	// (0x00024309) cntbar_detail_list_event_pane_t2_ParamLimits

0xeb11,	// (0x00024309) cntbar_detail_list_event_pane_t2

0x0002,

0xfee0,	// (0x000256d8) cntbar_detail_list_event_pane_t_ParamLimits

0xfee0,	// (0x000256d8) cntbar_detail_list_event_pane_t

0x38db,	// (0x000190d3) cell_cntbar_detail_list_shct_pane_g1

0xa167,	// (0x0001f95f) navi_pane_mv_g3

0x0a18,	// (0x00016210) main_cntbar_detail_pane_ParamLimits

0x09a8,	// (0x000161a0) main_notif_wgt_pane

0x777c,	// (0x0001cf74) aid_tch_main_mp4_pane_g4

0x7987,	// (0x0001d17f) popup_slider_window_cp02

0x6066,	// (0x0001b85e) list_recal_day_event_pane

0xe93a,	// (0x00024132) cntbar_detail_btn_pane_ParamLimits

0xe93a,	// (0x00024132) cntbar_detail_btn_pane

0xe94a,	// (0x00024142) cntbar_detail_btn_pane_cp01_ParamLimits

0xe94a,	// (0x00024142) cntbar_detail_btn_pane_cp01

0xe966,	// (0x0002415e) cntbar_detail_list_shct_pane_ParamLimits

0xe972,	// (0x0002416a) cntbar_detail_pane_g1_ParamLimits

0xe972,	// (0x0002416a) cntbar_detail_pane_g1

0xe97e,	// (0x00024176) cntbar_detail_pane_t1_ParamLimits

0xe97e,	// (0x00024176) cntbar_detail_pane_t1

0xea9c,	// (0x00024294) cntbar_detail_list_event_pane_g3_ParamLimits

0xea9c,	// (0x00024294) cntbar_detail_list_event_pane_g3

0xeab4,	// (0x000242ac) cntbar_detail_list_event_pane_g4_ParamLimits

0xeab4,	// (0x000242ac) cntbar_detail_list_event_pane_g4

0xeacc,	// (0x000242c4) cntbar_detail_list_event_pane_g5_ParamLimits

0xeacc,	// (0x000242c4) cntbar_detail_list_event_pane_g5

0xeae4,	// (0x000242dc) cntbar_detail_list_event_pane_g6_ParamLimits

0xeae4,	// (0x000242dc) cntbar_detail_list_event_pane_g6

0xeb26,	// (0x0002431e) cntbar_detail_list_event_pane_t3_ParamLimits

0xeb26,	// (0x0002431e) cntbar_detail_list_event_pane_t3

0xeb38,	// (0x00024330) popup_notif_wgt_window_ParamLimits

0xeb38,	// (0x00024330) popup_notif_wgt_window

0xeb48,	// (0x00024340) popup_submenu_window_cp01_ParamLimits

0xeb48,	// (0x00024340) popup_submenu_window_cp01

0x1f3c,	// (0x00017734) bg_popup_window_pane_cp10

0xeb56,	// (0x0002434e) listscroll_notif_wgt_pane

0xeb60,	// (0x00024358) list_notif_wgt_window

0xeb69,	// (0x00024361) scroll_pane_cp033

0xeb72,	// (0x0002436a) list_notif_wgt_row_pane_ParamLimits

0xeb72,	// (0x0002436a) list_notif_wgt_row_pane

0xeb86,	// (0x0002437e) aid_size_list_notif_wgt_del

0xeb8f,	// (0x00024387) list_notif_wgt_row_pane_g1

0xeb97,	// (0x0002438f) list_notif_wgt_row_pane_g2

0xeb9f,	// (0x00024397) list_notif_wgt_row_pane_g3

0x0002,

0xfee7,	// (0x000256df) list_notif_wgt_row_pane_g

0xeba8,	// (0x000243a0) list_notif_wgt_row_pane_t1

0xebb6,	// (0x000243ae) list_notif_wgt_row_pane_t2

0xebc4,	// (0x000243bc) list_notif_wgt_row_pane_t3

0x0002,

0xfeee,	// (0x000256e6) list_notif_wgt_row_pane_t

0x48e6,	// (0x0001a0de) list_recal_day_event_pane_g1

0xebd2,	// (0x000243ca) list_recal_day_event_pane_t1

0x09a8,	// (0x000161a0) bg_button_pane_cp045

0xebe1,	// (0x000243d9) cntbar_detail_btn_pane_t1

0x33d3,	// (0x00018bcb) main_callh_pane_ParamLimits

0x33d3,	// (0x00018bcb) main_callh_pane

0x09a8,	// (0x000161a0) main_coverflow0_pane

0x09a8,	// (0x000161a0) main_wgtman_pane

0xdad2,	// (0x000232ca) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdad2,	// (0x000232ca) main_fs_bigclock_unlock_btn_pane

0xe19e,	// (0x00023996) bg_button_pane_cp16

0xe1b6,	// (0x000239ae) cell_tport_appsw_pane_g3

0xebef,	// (0x000243e7) cf0_flow_pane_ParamLimits

0xebef,	// (0x000243e7) cf0_flow_pane

0xebfe,	// (0x000243f6) listscroll_cf0_pane

0xec07,	// (0x000243ff) main_cf0_pane_g1

0xec11,	// (0x00024409) main_cf0_pane_t1_ParamLimits

0xec11,	// (0x00024409) main_cf0_pane_t1

0xec25,	// (0x0002441d) main_cf0_pane_t2_ParamLimits

0xec25,	// (0x0002441d) main_cf0_pane_t2

0x0001,

0xfef5,	// (0x000256ed) main_cf0_pane_t_ParamLimits

0xfef5,	// (0x000256ed) main_cf0_pane_t

0xec39,	// (0x00024431) scroll_pane_cp11

0xec44,	// (0x0002443c) cf0_flow_pane_g1

0xec4c,	// (0x00024444) cf0_flow_pane_g2

0x0001,

0xfefa,	// (0x000256f2) cf0_flow_pane_g

0xec54,	// (0x0002444c) cf0_flow_pane_t1

0x09a8,	// (0x000161a0) main_call6_pane

0x09a8,	// (0x000161a0) main_calllock_pane

0xec62,	// (0x0002445a) call6_btn_grp_pane_ParamLimits

0xec62,	// (0x0002445a) call6_btn_grp_pane

0xec71,	// (0x00024469) call6_pane_g1_ParamLimits

0xec71,	// (0x00024469) call6_pane_g1

0xec80,	// (0x00024478) popup_call6_1st_window_ParamLimits

0xec80,	// (0x00024478) popup_call6_1st_window

0xec8e,	// (0x00024486) popup_call6_2nd_window_ParamLimits

0xec8e,	// (0x00024486) popup_call6_2nd_window

0xec9c,	// (0x00024494) cell_call6_btn_pane_ParamLimits

0xec9c,	// (0x00024494) cell_call6_btn_pane

0x1f3c,	// (0x00017734) bg_popup_call2_in_pane_cp03

0xecab,	// (0x000244a3) popup_call6_1st_window_g1

0xecb3,	// (0x000244ab) popup_call6_1st_window_g2

0xecbb,	// (0x000244b3) popup_call6_1st_window_g3

0x0002,

0xfeff,	// (0x000256f7) popup_call6_1st_window_g

0xecc3,	// (0x000244bb) popup_call6_1st_window_t1

0xecd2,	// (0x000244ca) popup_call6_1st_window_t2

0xece2,	// (0x000244da) popup_call6_1st_window_t3

0x0002,

0xff06,	// (0x000256fe) popup_call6_1st_window_t

0x1f3c,	// (0x00017734) bg_popup_call2_in_pane_cp04

0xecab,	// (0x000244a3) popup_call6_2nd_window_g1

0xecb3,	// (0x000244ab) popup_call6_2nd_window_g2

0xecbb,	// (0x000244b3) popup_call6_2nd_window_g3

0x0002,

0xfeff,	// (0x000256f7) popup_call6_2nd_window_g

0xecc3,	// (0x000244bb) popup_call6_2nd_window_t1

0x09a8,	// (0x000161a0) bg_button_pane_cp15

0xecf2,	// (0x000244ea) cell_call6_btn_pane_g1

0xecfb,	// (0x000244f3) cell_call6_btn_pane_t1

0xed0a,	// (0x00024502) listscroll_wgtman_pane_ParamLimits

0xed0a,	// (0x00024502) listscroll_wgtman_pane

0xed19,	// (0x00024511) wgtman_btn_pane_ParamLimits

0xed19,	// (0x00024511) wgtman_btn_pane

0x1def,	// (0x000175e7) aid_scroll_copy1

0xed27,	// (0x0002451f) list_wgtman_pane

0xed31,	// (0x00024529) wgtman_btn_pane_g1_ParamLimits

0xed31,	// (0x00024529) wgtman_btn_pane_g1

0xed3d,	// (0x00024535) wgtman_btn_pane_t1_ParamLimits

0xed3d,	// (0x00024535) wgtman_btn_pane_t1

0xed4f,	// (0x00024547) wgtman_btn_pane_t2_ParamLimits

0xed4f,	// (0x00024547) wgtman_btn_pane_t2

0x0001,

0xff0d,	// (0x00025705) wgtman_btn_pane_t_ParamLimits

0xff0d,	// (0x00025705) wgtman_btn_pane_t

0xed61,	// (0x00024559) listrow_wgtman_pane_ParamLimits

0xed61,	// (0x00024559) listrow_wgtman_pane

0xed7d,	// (0x00024575) listrow_wgtman_pane_g1

0xed86,	// (0x0002457e) listrow_wgtman_pane_g2

0x0001,

0xff12,	// (0x0002570a) listrow_wgtman_pane_g

0xed90,	// (0x00024588) listrow_wgtman_pane_t1

0xed9e,	// (0x00024596) listrow_wgtman_pane_t2

0x0001,

0xff17,	// (0x0002570f) listrow_wgtman_pane_t

0xedac,	// (0x000245a4) wait_bar_pane_cp09

0xedb4,	// (0x000245ac) main_calllock_btn_pane

0xedbe,	// (0x000245b6) main_calllock_pane_g1

0x09a8,	// (0x000161a0) bg_button_pane_cp17

0xedc9,	// (0x000245c1) main_calllock_btn_pane_g1

0xedd2,	// (0x000245ca) main_calllock_btn_pane_t1

0x09a8,	// (0x000161a0) main_dialer3_pane

0x09a8,	// (0x000161a0) main_fmrd2_pane

0x38db,	// (0x000190d3) main_fs_bigclock_unlock_btn_pane_g1

0xede9,	// (0x000245e1) main_fs_bigclock_unlock_btn_pane_t1

0xedf7,	// (0x000245ef) area_fmrd2_info_pane_ParamLimits

0xedf7,	// (0x000245ef) area_fmrd2_info_pane

0xee06,	// (0x000245fe) area_fmrd2_visual_pane_ParamLimits

0xee06,	// (0x000245fe) area_fmrd2_visual_pane

0xee14,	// (0x0002460c) fmrd2_indi_pane_ParamLimits

0xee14,	// (0x0002460c) fmrd2_indi_pane

0xee21,	// (0x00024619) area_fmrd2_visual_pane_g1

0xee29,	// (0x00024621) area_fmrd2_visual_pane_t1

0xee39,	// (0x00024631) area_fmrd2_visual_pane_t2

0xee49,	// (0x00024641) area_fmrd2_visual_pane_t3

0x0002,

0xff21,	// (0x00025719) area_fmrd2_visual_pane_t

0xee59,	// (0x00024651) area_fmrd2_info_pane_g1

0xee61,	// (0x00024659) area_fmrd2_info_pane_t1

0xee71,	// (0x00024669) area_fmrd2_info_pane_t2

0xee81,	// (0x00024679) area_fmrd2_info_pane_t3

0xee91,	// (0x00024689) area_fmrd2_info_pane_t4

0x0003,

0xff28,	// (0x00025720) area_fmrd2_info_pane_t

0xee9f,	// (0x00024697) fmrd2_indi_pane_t1

0xeeaf,	// (0x000246a7) fmrd2_indi_pane_t2

0xeebf,	// (0x000246b7) fmrd2_indi_pane_t3

0x0002,

0xff31,	// (0x00025729) fmrd2_indi_pane_t

0x56ab,	// (0x0001aea3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x56ab,	// (0x0001aea3) list_single_fs_bigclock_indicator_pane_g5

0x574f,	// (0x0001af47) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x574f,	// (0x0001af47) list_single_fs_bigclock_indicator_pane_t5

0xe381,	// (0x00023b79) aid_cell_bcale_month_pane_ParamLimits

0xe381,	// (0x00023b79) aid_cell_bcale_month_pane

0xe38d,	// (0x00023b85) bcale_month_pane_ParamLimits

0xe38d,	// (0x00023b85) bcale_month_pane

0xe39d,	// (0x00023b95) bcale_preview_pane_ParamLimits

0xe39d,	// (0x00023b95) bcale_preview_pane

0xe8a5,	// (0x0002409d) list_single_fs_bigclock_pane_t1_ParamLimits

0xe8bf,	// (0x000240b7) list_single_fs_bigclock_pane_t2_ParamLimits

0xe8bf,	// (0x000240b7) list_single_fs_bigclock_pane_t2

0x0001,

0xfeb8,	// (0x000256b0) list_single_fs_bigclock_pane_t_ParamLimits

0xfeb8,	// (0x000256b0) list_single_fs_bigclock_pane_t

0xede1,	// (0x000245d9) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff1c,	// (0x00025714) main_fs_bigclock_unlock_btn_pane_g

0xeecd,	// (0x000246c5) aid_dia3_key_size_ParamLimits

0xeecd,	// (0x000246c5) aid_dia3_key_size

0xeed9,	// (0x000246d1) aid_dia3_listrow_size_ParamLimits

0xeed9,	// (0x000246d1) aid_dia3_listrow_size

0xeee7,	// (0x000246df) dia3_keypad_fun_pane_ParamLimits

0xeee7,	// (0x000246df) dia3_keypad_fun_pane

0xeef7,	// (0x000246ef) dia3_keypad_num_pane_ParamLimits

0xeef7,	// (0x000246ef) dia3_keypad_num_pane

0xef07,	// (0x000246ff) dia3_listscroll_pane_ParamLimits

0xef07,	// (0x000246ff) dia3_listscroll_pane

0xef15,	// (0x0002470d) dia3_numentry_pane_ParamLimits

0xef15,	// (0x0002470d) dia3_numentry_pane

0xef23,	// (0x0002471b) dia3_list_pane

0xef2e,	// (0x00024726) scroll_pane_cp12

0x09a8,	// (0x000161a0) bg_dia3_numentry_pane

0xef39,	// (0x00024731) dia3_numentry_pane_t1

0xef48,	// (0x00024740) cell_dia3_key_num_pane

0xef50,	// (0x00024748) cell_dia3_key0_fun_pane_ParamLimits

0xef50,	// (0x00024748) cell_dia3_key0_fun_pane

0xef5d,	// (0x00024755) cell_dia3_key1_fun_pane_ParamLimits

0xef5d,	// (0x00024755) cell_dia3_key1_fun_pane

0xef6a,	// (0x00024762) dia3_listrow_pane

0x53d7,	// (0x0001abcf) bg_dia3_numentry_pane_g1

0x09a8,	// (0x000161a0) bg_button_pane_cp21

0xef73,	// (0x0002476b) cell_dia3_key_num_pane_t1

0xef81,	// (0x00024779) cell_dia3_key_num_pane_t2

0xef90,	// (0x00024788) cell_dia3_key_num_pane_t3

0xef9f,	// (0x00024797) cell_dia3_key_num_pane_t4

0x0003,

0xff38,	// (0x00025730) cell_dia3_key_num_pane_t

0x09a8,	// (0x000161a0) bg_button_pane_cp19

0xefae,	// (0x000247a6) cell_dia3_key0_fun_pane_g1

0x09a8,	// (0x000161a0) bg_button_pane_cp20

0xefb6,	// (0x000247ae) cell_dia3_key1_fun_pane_g1

0xefbe,	// (0x000247b6) area_left_week_number_pane

0xefc7,	// (0x000247bf) area_top_day_name_pane

0xefd0,	// (0x000247c8) frame_month_view_pane

0xefda,	// (0x000247d2) grid_month_view_pane

0xefe4,	// (0x000247dc) cell_top_day_name_pane_ParamLimits

0xefe4,	// (0x000247dc) cell_top_day_name_pane

0xeffe,	// (0x000247f6) cell_area_left_week_number_pane_ParamLimits

0xeffe,	// (0x000247f6) cell_area_left_week_number_pane

0xf012,	// (0x0002480a) cell_month_view_pane_ParamLimits

0xf012,	// (0x0002480a) cell_month_view_pane

0xf02f,	// (0x00024827) frm_month_g1

0xf038,	// (0x00024830) frm_month_g2

0xf042,	// (0x0002483a) frm_month_g3

0xf04c,	// (0x00024844) frm_month_g4

0xf056,	// (0x0002484e) frm_month_g5

0xf060,	// (0x00024858) frm_month_g6

0xf06a,	// (0x00024862) frm_month_g7

0xf074,	// (0x0002486c) frm_month_g8

0xf07d,	// (0x00024875) frm_month_g9

0xf086,	// (0x0002487e) frm_month_g10

0xf08f,	// (0x00024887) frm_month_g11

0xf098,	// (0x00024890) frm_month_g12

0xf0a1,	// (0x00024899) frm_month_g13

0xf0aa,	// (0x000248a2) frm_month_g14

0xf0b3,	// (0x000248ab) frm_month_g15

0xf0be,	// (0x000248b6) frm_month_g16

0x000f,

0xff41,	// (0x00025739) frm_month_g

0xf0c9,	// (0x000248c1) cell_top_day_name_pane_t1

0xf0d8,	// (0x000248d0) cell_area_left_week_number_pane_g1

0xf0c9,	// (0x000248c1) cell_area_left_week_number_pane_t1

0x38db,	// (0x000190d3) cell_month_view_pane_g1

0xf0e0,	// (0x000248d8) cell_month_view_pane_t1

0x09a8,	// (0x000161a0) main_fps_pane

0x59b9,	// (0x0001b1b1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x59b9,	// (0x0001b1b1) cmail_ddmenu_btn02_pane_cp1

0x59d5,	// (0x0001b1cd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x59d5,	// (0x0001b1cd) cmail_ddmenu_btn02_pane_cp2

0xe65c,	// (0x00023e54) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe65c,	// (0x00023e54) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe69,	// (0x00025661) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe69,	// (0x00025661) cmail_ddmenu_btn02_pane_g

0xe67a,	// (0x00023e72) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe67a,	// (0x00023e72) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe6e,	// (0x00025666) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe6e,	// (0x00025666) cmail_ddmenu_btn02_pane_t

0xf0ef,	// (0x000248e7) fps_text_pane_ParamLimits

0xf0ef,	// (0x000248e7) fps_text_pane

0xf0fc,	// (0x000248f4) main_fps_pane_g1_ParamLimits

0xf0fc,	// (0x000248f4) main_fps_pane_g1

0xf10a,	// (0x00024902) wait_bar_pane_cp010_ParamLimits

0xf10a,	// (0x00024902) wait_bar_pane_cp010

0xf116,	// (0x0002490e) fps_text_pane_t1_ParamLimits

0xf116,	// (0x0002490e) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal

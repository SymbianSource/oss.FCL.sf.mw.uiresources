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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00032bcf };

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
0x45a6,	// (0x00037175) Screen

0x45b2,	// (0x00037181) application_window

0x4618,	// (0x000371e7) area_bottom_pane_ParamLimits

0x4618,	// (0x000371e7) area_bottom_pane

0x4671,	// (0x00037240) area_top_pane_ParamLimits

0x4671,	// (0x00037240) area_top_pane

0x46d5,	// (0x000372a4) call_video_uplink_pane_ParamLimits

0x46d5,	// (0x000372a4) call_video_uplink_pane

0x4712,	// (0x000372e1) main_pane_ParamLimits

0x4712,	// (0x000372e1) main_pane

0xe43f,	// (0x0004100e) context_pane

0x7688,	// (0x0003a257) navi_pane

0x76a8,	// (0x0003a277) popup_cale_events_window_ParamLimits

0x76a8,	// (0x0003a277) popup_cale_events_window

0xe452,	// (0x00041021) popup_mup_playback_window

0x76c0,	// (0x0003a28f) signal_pane

0xc50b,	// (0x0003f0da) main_browser_pane

0xcfec,	// (0x0003fbbb) main_burst_pane

0x7552,	// (0x0003a121) main_calc_pane

0xcfec,	// (0x0003fbbb) main_cale_day_pane

0xc50b,	// (0x0003f0da) main_cale_month_pane

0xcfec,	// (0x0003fbbb) main_cale_week_pane

0xcfec,	// (0x0003fbbb) main_call_pane

0xc1dd,	// (0x0003edac) main_call_poc_pane

0xcfec,	// (0x0003fbbb) main_camera_pane

0xcfec,	// (0x0003fbbb) main_chi_dic_pane

0xce71,	// (0x0003fa40) main_clock_pane

0xc1dd,	// (0x0003edac) main_fmradio_pane

0xcfec,	// (0x0003fbbb) main_graph_messa_pane

0xc1dd,	// (0x0003edac) main_help_pane

0xc50b,	// (0x0003f0da) main_im_pane

0xc438,	// (0x0003f007) main_image_pane_ParamLimits

0xc438,	// (0x0003f007) main_image_pane

0xc1dd,	// (0x0003edac) main_location2_pane

0xcfec,	// (0x0003fbbb) main_location_pane

0xc1dd,	// (0x0003edac) main_messa_pane

0xc1dd,	// (0x0003edac) main_mp2_pane

0xcfec,	// (0x0003fbbb) main_mp_pane

0xc1dd,	// (0x0003edac) main_msg_pane

0xc1dd,	// (0x0003edac) main_mup_eq_pane

0xc1dd,	// (0x0003edac) main_mup_pane

0xc50b,	// (0x0003f0da) main_notes_pane

0xc1dd,	// (0x0003edac) main_pec_pane

0xc1dd,	// (0x0003edac) main_phob_pane

0xc1dd,	// (0x0003edac) main_pinb_pane

0xc1dd,	// (0x0003edac) main_postcard_pane

0xc1dd,	// (0x0003edac) main_qdial_pane

0xcfec,	// (0x0003fbbb) main_skin_pane

0xc1dd,	// (0x0003edac) main_smil2_pane

0xcfec,	// (0x0003fbbb) main_smil_pane

0xcfec,	// (0x0003fbbb) main_video_pane

0xcfec,	// (0x0003fbbb) main_video_tele_pane

0xc438,	// (0x0003f007) main_viewer_pane_ParamLimits

0xc438,	// (0x0003f007) main_viewer_pane

0xcfec,	// (0x0003fbbb) main_vorec_pane

0x7588,	// (0x0003a157) popup_blid_sat_info_window_ParamLimits

0x7588,	// (0x0003a157) popup_blid_sat_info_window

0x759e,	// (0x0003a16d) popup_dyc_status_message_window_ParamLimits

0x759e,	// (0x0003a16d) popup_dyc_status_message_window

0x75ae,	// (0x0003a17d) popup_grid_large_graphic_window_ParamLimits

0x75ae,	// (0x0003a17d) popup_grid_large_graphic_window

0x7624,	// (0x0003a1f3) popup_loc_request_window_ParamLimits

0x7624,	// (0x0003a1f3) popup_loc_request_window

0x7660,	// (0x0003a22f) popup_wml_address_window_ParamLimits

0x7660,	// (0x0003a22f) popup_wml_address_window

0x742a,	// (0x00039ff9) call_muted_g1

0x70ec,	// (0x00039cbb) popup_call_audio_conf_window_ParamLimits

0x70ec,	// (0x00039cbb) popup_call_audio_conf_window

0x743a,	// (0x0003a009) popup_call_audio_first_window_ParamLimits

0x743a,	// (0x0003a009) popup_call_audio_first_window

0x747a,	// (0x0003a049) popup_call_audio_in_window_ParamLimits

0x747a,	// (0x0003a049) popup_call_audio_in_window

0x749e,	// (0x0003a06d) popup_call_audio_out_window_ParamLimits

0x749e,	// (0x0003a06d) popup_call_audio_out_window

0x74c0,	// (0x0003a08f) popup_call_audio_second_window_ParamLimits

0x74c0,	// (0x0003a08f) popup_call_audio_second_window

0x74f0,	// (0x0003a0bf) popup_call_audio_wait_window_ParamLimits

0x74f0,	// (0x0003a0bf) popup_call_audio_wait_window

0x7511,	// (0x0003a0e0) popup_number_entry_window_ParamLimits

0x7511,	// (0x0003a0e0) popup_number_entry_window

0xbdca,	// (0x0003e999) bg_popup_call_pane_cp05_ParamLimits

0xbdca,	// (0x0003e999) bg_popup_call_pane_cp05

0xbdea,	// (0x0003e9b9) popup_number_entry_window_t1

0xbdfd,	// (0x0003e9cc) popup_number_entry_window_t2

0xbe0f,	// (0x0003e9de) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00041cb6) popup_number_entry_window_t

0xbe21,	// (0x0003e9f0) text_title_cp2

0xbe34,	// (0x0003ea03) bg_popup_call_pane_cp_ParamLimits

0xbe34,	// (0x0003ea03) bg_popup_call_pane_cp

0xbe42,	// (0x0003ea11) call_thumbnail_pane

0xbe4a,	// (0x0003ea19) popup_call_audio_in_window_g1_ParamLimits

0xbe4a,	// (0x0003ea19) popup_call_audio_in_window_g1

0xbe56,	// (0x0003ea25) popup_call_audio_in_window_g2_ParamLimits

0xbe56,	// (0x0003ea25) popup_call_audio_in_window_g2

0xbe62,	// (0x0003ea31) popup_call_audio_in_window_g3_ParamLimits

0xbe62,	// (0x0003ea31) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00041cbf) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00041cbf) popup_call_audio_in_window_g

0xbe6e,	// (0x0003ea3d) popup_call_audio_in_window_t1_ParamLimits

0xbe6e,	// (0x0003ea3d) popup_call_audio_in_window_t1

0xbe8a,	// (0x0003ea59) popup_call_audio_in_window_t2_ParamLimits

0xbe8a,	// (0x0003ea59) popup_call_audio_in_window_t2

0xbea6,	// (0x0003ea75) popup_call_audio_in_window_t3_ParamLimits

0xbea6,	// (0x0003ea75) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00041cc6) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00041cc6) popup_call_audio_in_window_t

0xbe34,	// (0x0003ea03) bg_popup_call_pane_cp01_ParamLimits

0xbe34,	// (0x0003ea03) bg_popup_call_pane_cp01

0xbe42,	// (0x0003ea11) call_thumbnail_pane_cp02

0xbeb9,	// (0x0003ea88) call_type_pane_cp022

0xbec1,	// (0x0003ea90) popup_call_audio_out_window_g1_ParamLimits

0xbec1,	// (0x0003ea90) popup_call_audio_out_window_g1

0xbed3,	// (0x0003eaa2) popup_call_audio_out_window_g2_ParamLimits

0xbed3,	// (0x0003eaa2) popup_call_audio_out_window_g2

0xbedf,	// (0x0003eaae) popup_call_audio_out_window_g3_ParamLimits

0xbedf,	// (0x0003eaae) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00041ccd) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00041ccd) popup_call_audio_out_window_g

0xbef1,	// (0x0003eac0) popup_call_audio_out_window_t1_ParamLimits

0xbef1,	// (0x0003eac0) popup_call_audio_out_window_t1

0xbf09,	// (0x0003ead8) popup_call_audio_out_window_t2_ParamLimits

0xbf09,	// (0x0003ead8) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00041cd4) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00041cd4) popup_call_audio_out_window_t

0xbf1e,	// (0x0003eaed) bg_popup_call_pane_ParamLimits

0xbf1e,	// (0x0003eaed) bg_popup_call_pane

0x4917,	// (0x000374e6) call_thumbnail_pane_cp_ParamLimits

0x4917,	// (0x000374e6) call_thumbnail_pane_cp

0xbfa2,	// (0x0003eb71) call_type_pane_cp01_ParamLimits

0xbfa2,	// (0x0003eb71) call_type_pane_cp01

0xbfe6,	// (0x0003ebb5) popup_call_audio_first_window_g1_ParamLimits

0xbfe6,	// (0x0003ebb5) popup_call_audio_first_window_g1

0xc032,	// (0x0003ec01) popup_call_audio_first_window_g2_ParamLimits

0xc032,	// (0x0003ec01) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00041cd9) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00041cd9) popup_call_audio_first_window_g

0xc076,	// (0x0003ec45) popup_call_audio_first_window_t1_ParamLimits

0xc076,	// (0x0003ec45) popup_call_audio_first_window_t1

0xc122,	// (0x0003ecf1) popup_call_audio_first_window_t4_ParamLimits

0xc122,	// (0x0003ecf1) popup_call_audio_first_window_t4

0xc1ae,	// (0x0003ed7d) popup_call_audio_first_window_t5_ParamLimits

0xc1ae,	// (0x0003ed7d) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00041cde) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00041cde) popup_call_audio_first_window_t

0xc1dd,	// (0x0003edac) bg_popup_call_pane_cp02

0xc1e7,	// (0x0003edb6) call_type_pane_cp023

0xc1ef,	// (0x0003edbe) popup_call_audio_wait_window_g1

0xc1f7,	// (0x0003edc6) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00041ce5) popup_call_audio_wait_window_g

0xc1ff,	// (0x0003edce) popup_call_audio_wait_window_t3

0xc20d,	// (0x0003eddc) bg_popup_call_pane_cp03_ParamLimits

0xc20d,	// (0x0003eddc) bg_popup_call_pane_cp03

0xc26d,	// (0x0003ee3c) call_thumbnail_pane_cp011_ParamLimits

0xc26d,	// (0x0003ee3c) call_thumbnail_pane_cp011

0xc279,	// (0x0003ee48) call_type_pane_cp034_ParamLimits

0xc279,	// (0x0003ee48) call_type_pane_cp034

0xc2b5,	// (0x0003ee84) popup_call_audio_second_window_g1_ParamLimits

0xc2b5,	// (0x0003ee84) popup_call_audio_second_window_g1

0xc2f1,	// (0x0003eec0) popup_call_audio_second_window_g2_ParamLimits

0xc2f1,	// (0x0003eec0) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00041cea) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00041cea) popup_call_audio_second_window_g

0xc32d,	// (0x0003eefc) popup_call_audio_second_window_t1_ParamLimits

0xc32d,	// (0x0003eefc) popup_call_audio_second_window_t1

0xc3ae,	// (0x0003ef7d) popup_call_audio_second_window_t2_ParamLimits

0xc3ae,	// (0x0003ef7d) popup_call_audio_second_window_t2

0xc3e4,	// (0x0003efb3) popup_call_audio_second_window_t3_ParamLimits

0xc3e4,	// (0x0003efb3) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00041cef) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00041cef) popup_call_audio_second_window_t

0xc1dd,	// (0x0003edac) bg_popup_call_pane_cp04

0xc41a,	// (0x0003efe9) list_conf_pane

0xc422,	// (0x0003eff1) popup_call_audio_conf_window_t1

0xc430,	// (0x0003efff) call_thumbnail_pane_g1

0xc438,	// (0x0003f007) bg_pinb_pane_ParamLimits

0xc438,	// (0x0003f007) bg_pinb_pane

0xc446,	// (0x0003f015) find_pinb_pane

0xc44f,	// (0x0003f01e) listscroll_pinb_pane_ParamLimits

0xc44f,	// (0x0003f01e) listscroll_pinb_pane

0xc45e,	// (0x0003f02d) pinb_bg_pane_g1

0x493b,	// (0x0003750a) pinb_bg_pane_g2

0x4947,	// (0x00037516) pinb_bg_pane_g3

0x4953,	// (0x00037522) pinb_bg_pane_g4

0x495f,	// (0x0003752e) pinb_bg_pane_g5

0x496b,	// (0x0003753a) pinb_bg_pane_g6

0x4976,	// (0x00037545) pinb_bg_pane_g7

0x4981,	// (0x00037550) pinb_bg_pane_g8

0x498c,	// (0x0003755b) pinb_bg_pane_g9

0x4996,	// (0x00037565) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00041cf6) pinb_bg_pane_g

0x49b3,	// (0x00037582) grid_pinb_pane

0x49be,	// (0x0003758d) list_pinb_pane

0x49c9,	// (0x00037598) scroll_pane_cp01_ParamLimits

0x49c9,	// (0x00037598) scroll_pane_cp01

0xc468,	// (0x0003f037) find_pinb_pane_g1_ParamLimits

0xc468,	// (0x0003f037) find_pinb_pane_g1

0xc480,	// (0x0003f04f) find_pinb_pane_t1

0xc492,	// (0x0003f061) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00041d10) find_pinb_pane_t

0xc4a7,	// (0x0003f076) input_focus_pane_cp01_ParamLimits

0xc4a7,	// (0x0003f076) input_focus_pane_cp01

0x49db,	// (0x000375aa) cell_pinb_pane_ParamLimits

0x49db,	// (0x000375aa) cell_pinb_pane

0x4a03,	// (0x000375d2) cell_pinb_pane_g1_ParamLimits

0x4a03,	// (0x000375d2) cell_pinb_pane_g1

0x4a18,	// (0x000375e7) cell_pinb_pane_g2_ParamLimits

0x4a18,	// (0x000375e7) cell_pinb_pane_g2

0xc4b3,	// (0x0003f082) cell_pinb_pane_g3_ParamLimits

0xc4b3,	// (0x0003f082) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00041d15) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00041d15) cell_pinb_pane_g

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp01

0x4a24,	// (0x000375f3) list_pinb_item_pane_ParamLimits

0x4a24,	// (0x000375f3) list_pinb_item_pane

0xc1dd,	// (0x0003edac) list_highlight_pane_cp02

0x4a4a,	// (0x00037619) list_pinb_item_pane_g1_ParamLimits

0x4a4a,	// (0x00037619) list_pinb_item_pane_g1

0x4a57,	// (0x00037626) list_pinb_item_pane_g2_ParamLimits

0x4a57,	// (0x00037626) list_pinb_item_pane_g2

0x4a63,	// (0x00037632) list_pinb_item_pane_g3_ParamLimits

0x4a63,	// (0x00037632) list_pinb_item_pane_g3

0x4a74,	// (0x00037643) list_pinb_item_pane_g4_ParamLimits

0x4a74,	// (0x00037643) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00041d1c) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00041d1c) list_pinb_item_pane_g

0x4a80,	// (0x0003764f) list_pinb_item_pane_t1_ParamLimits

0x4a80,	// (0x0003764f) list_pinb_item_pane_t1

0x4ab1,	// (0x00037680) calc_display_pane

0x4acf,	// (0x0003769e) calc_paper_pane

0x4aeb,	// (0x000376ba) grid_calc_pane

0xc1dd,	// (0x0003edac) bg_list_pane_cp01

0x4b17,	// (0x000376e6) clock_g1

0x4b1f,	// (0x000376ee) clock_g2

0x0001,

0xf156,	// (0x00041d25) clock_g

0x4b29,	// (0x000376f8) clock_t1_ParamLimits

0x4b29,	// (0x000376f8) clock_t1

0x4b3e,	// (0x0003770d) clock_t2_ParamLimits

0x4b3e,	// (0x0003770d) clock_t2

0x4b50,	// (0x0003771f) clock_t3_ParamLimits

0x4b50,	// (0x0003771f) clock_t3

0x4b62,	// (0x00037731) clock_t4_ParamLimits

0x4b62,	// (0x00037731) clock_t4

0x4b74,	// (0x00037743) clock_t5_ParamLimits

0x4b74,	// (0x00037743) clock_t5

0x4b89,	// (0x00037758) clock_t6_ParamLimits

0x4b89,	// (0x00037758) clock_t6

0x4b9b,	// (0x0003776a) clock_t7_ParamLimits

0x4b9b,	// (0x0003776a) clock_t7

0x4bad,	// (0x0003777c) clock_t8_ParamLimits

0x4bad,	// (0x0003777c) clock_t8

0x4bc3,	// (0x00037792) clock_t9_ParamLimits

0x4bc3,	// (0x00037792) clock_t9

0x0008,

0xf15b,	// (0x00041d2a) clock_t_ParamLimits

0xf15b,	// (0x00041d2a) clock_t

0xc4bf,	// (0x0003f08e) popup_clock_analogue_window_cp02

0xc4bf,	// (0x0003f08e) popup_clock_digital_window_cp01

0xc4c7,	// (0x0003f096) listscroll_help_pane

0xc1dd,	// (0x0003edac) phob_pre_status_pane

0xc4d1,	// (0x0003f0a0) grid_qdial_pane

0xc1dd,	// (0x0003edac) listscroll_mce_pane

0xc4db,	// (0x0003f0aa) bg_notes_pane

0xc4e9,	// (0x0003f0b8) list_notes_pane

0x4bd9,	// (0x000377a8) scroll_pane_cp06

0xc4f7,	// (0x0003f0c6) bg_calc_paper_pane

0x4be8,	// (0x000377b7) list_calc_pane

0xc50b,	// (0x0003f0da) bg_calc_display_pane

0x4c02,	// (0x000377d1) calc_display_pane_t1

0x4c17,	// (0x000377e6) calc_display_pane_t2

0x4c2c,	// (0x000377fb) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00041d3d) calc_display_pane_t

0x4c3e,	// (0x0003780d) cell_calc_pane_ParamLimits

0x4c3e,	// (0x0003780d) cell_calc_pane

0xc517,	// (0x0003f0e6) bg_calc_paper_pane_g1

0xc523,	// (0x0003f0f2) bg_calc_paper_pane_g2

0xc52f,	// (0x0003f0fe) bg_calc_paper_pane_g3

0xc53b,	// (0x0003f10a) bg_calc_paper_pane_g4

0xc547,	// (0x0003f116) bg_calc_paper_pane_g5

0x4c6b,	// (0x0003783a) bg_calc_paper_pane_g6

0x4c7c,	// (0x0003784b) bg_calc_paper_pane_g7

0x4c8d,	// (0x0003785c) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00041d44) bg_calc_paper_pane_g

0x4c9e,	// (0x0003786d) calc_bg_paper_pane_g9

0x4caf,	// (0x0003787e) list_calc_item_pane_ParamLimits

0x4caf,	// (0x0003787e) list_calc_item_pane

0xc553,	// (0x0003f122) list_calc_item_pane_g1

0x4cde,	// (0x000378ad) list_calc_item_pane_t1_ParamLimits

0x4cde,	// (0x000378ad) list_calc_item_pane_t1

0x4cf0,	// (0x000378bf) list_calc_item_pane_t2_ParamLimits

0x4cf0,	// (0x000378bf) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00041d55) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00041d55) list_calc_item_pane_t

0xc560,	// (0x0003f12f) cell_calc_pane_g1

0xc56a,	// (0x0003f139) grid_highlight_pane_cp02

0xe7d5,	// (0x000413a4) bg_calc_display_pane_g1

0x4d20,	// (0x000378ef) bg_calc_display_pane_g2

0x4d2a,	// (0x000378f9) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00041d5f) bg_calc_display_pane_g

0x4d33,	// (0x00037902) cell_qdial_pane_ParamLimits

0x4d33,	// (0x00037902) cell_qdial_pane

0x4d47,	// (0x00037916) cell_qdial_pane_g1_ParamLimits

0x4d47,	// (0x00037916) cell_qdial_pane_g1

0x4d54,	// (0x00037923) cell_qdial_pane_g2_ParamLimits

0x4d54,	// (0x00037923) cell_qdial_pane_g2

0xc58c,	// (0x0003f15b) cell_qdial_pane_g3_ParamLimits

0xc58c,	// (0x0003f15b) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00041d66) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00041d66) cell_qdial_pane_g

0x4d72,	// (0x00037941) cell_qdial_pane_t1_ParamLimits

0x4d72,	// (0x00037941) cell_qdial_pane_t1

0x4d8a,	// (0x00037959) cell_qdial_pane_t2_ParamLimits

0x4d8a,	// (0x00037959) cell_qdial_pane_t2

0x4d9d,	// (0x0003796c) cell_qdial_pane_t3_ParamLimits

0x4d9d,	// (0x0003796c) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00041d6f) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00041d6f) cell_qdial_pane_t

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp04

0xc598,	// (0x0003f167) thumbnail_qdial_pane_ParamLimits

0xc598,	// (0x0003f167) thumbnail_qdial_pane

0xc5f4,	// (0x0003f1c3) list_help_pane

0xc5fd,	// (0x0003f1cc) scroll_pane_cp02

0x4db0,	// (0x0003797f) help_list_pane_t1_ParamLimits

0x4db0,	// (0x0003797f) help_list_pane_t1

0x4de3,	// (0x000379b2) bg_notes_pane_g2

0x4deb,	// (0x000379ba) bg_notes_pane_g3

0x4df3,	// (0x000379c2) notes_bg_pane_g1

0x4dfb,	// (0x000379ca) notes_bg_pane_g4

0x4e03,	// (0x000379d2) notes_bg_pane_g5

0x4e0b,	// (0x000379da) notes_bg_pane_g6

0x4e13,	// (0x000379e2) notes_bg_pane_g7

0x4e1b,	// (0x000379ea) notes_bg_pane_g8

0x4e23,	// (0x000379f2) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00041d8d) notes_bg_pane_g

0x4e2b,	// (0x000379fa) list_notes_text_pane_ParamLimits

0x4e2b,	// (0x000379fa) list_notes_text_pane

0xc606,	// (0x0003f1d5) list_notes_text_pane_g1

0x3413,	// (0x00035fe2) list_notes_text_pane_t1

0xc50b,	// (0x0003f0da) listscroll_cale_week_pane

0x4e70,	// (0x00037a3f) bg_cale_heading_pane

0xc620,	// (0x0003f1ef) bg_cale_pane_cp01

0x4e8c,	// (0x00037a5b) cale_week_corner_pane

0x4ea2,	// (0x00037a71) cale_week_day_heading_pane

0x4ebe,	// (0x00037a8d) cale_week_scroll_pane_g1

0x4ed7,	// (0x00037aa6) cale_week_scroll_pane_g2

0x4ee8,	// (0x00037ab7) cale_week_scroll_pane_g3

0x4ef9,	// (0x00037ac8) cale_week_scroll_pane_g4

0x4f0a,	// (0x00037ad9) cale_week_scroll_pane_g5

0x4f1b,	// (0x00037aea) cale_week_scroll_pane_g6

0x4f2c,	// (0x00037afb) cale_week_scroll_pane_g7

0x4f3f,	// (0x00037b0e) cale_week_scroll_pane_g8

0x4f52,	// (0x00037b21) cale_week_scroll_pane_g9

0x4f63,	// (0x00037b32) cale_week_scroll_pane_g10

0x4f74,	// (0x00037b43) cale_week_scroll_pane_g11

0x4f85,	// (0x00037b54) cale_week_scroll_pane_g12

0x4f96,	// (0x00037b65) cale_week_scroll_pane_g13

0x4faf,	// (0x00037b7e) cale_week_scroll_pane_g14

0x4fc8,	// (0x00037b97) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00041d9c) cale_week_scroll_pane_g

0x4fe1,	// (0x00037bb0) cale_week_time_pane

0x4ff4,	// (0x00037bc3) grid_cale_week_pane

0x5011,	// (0x00037be0) scroll_pane_cp08

0x502b,	// (0x00037bfa) cell_cale_week_pane_ParamLimits

0x502b,	// (0x00037bfa) cell_cale_week_pane

0x5077,	// (0x00037c46) cale_week_day_heading_pane_t1

0x5090,	// (0x00037c5f) cale_week_day_heading_pane_t2

0x50a9,	// (0x00037c78) cale_week_day_heading_pane_t3

0x50c2,	// (0x00037c91) cale_week_day_heading_pane_t4

0x50db,	// (0x00037caa) cale_week_day_heading_pane_t5

0x50f4,	// (0x00037cc3) cale_week_day_heading_pane_t6

0x510d,	// (0x00037cdc) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00041dbb) cale_week_day_heading_pane_t

0xc64b,	// (0x0003f21a) bg_cale_side_pane

0x5126,	// (0x00037cf5) cale_week_time_pane_t1

0x513e,	// (0x00037d0d) cale_week_time_pane_t2

0x5156,	// (0x00037d25) cale_week_time_pane_t3

0x516e,	// (0x00037d3d) cale_week_time_pane_t4

0x5186,	// (0x00037d55) cale_week_time_pane_t5

0x519e,	// (0x00037d6d) cale_week_time_pane_t6

0x51b6,	// (0x00037d85) cale_week_time_pane_t7

0x51d6,	// (0x00037da5) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x00041dca) cale_week_time_pane_t

0x51f6,	// (0x00037dc5) cell_cale_week_pane_g2

0x5207,	// (0x00037dd6) cell_cale_week_pane_g3_ParamLimits

0x5207,	// (0x00037dd6) cell_cale_week_pane_g3

0xc659,	// (0x0003f228) grid_highlight_pane_cp07

0xc661,	// (0x0003f230) listscroll_gms_pane

0xc66b,	// (0x0003f23a) grid_gms_pane

0xc674,	// (0x0003f243) listscroll_gms_pane_g1

0xc67c,	// (0x0003f24b) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00041ddb) listscroll_gms_pane_g

0x521f,	// (0x00037dee) scroll_pane_cp010

0x522a,	// (0x00037df9) cell_gms_pane_ParamLimits

0x522a,	// (0x00037df9) cell_gms_pane

0x523d,	// (0x00037e0c) cell_gms_pane_g1

0xc684,	// (0x0003f253) cell_gms_pane_g2

0xc68c,	// (0x0003f25b) cell_gms_pane_g3

0xc695,	// (0x0003f264) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00041de0) cell_gms_pane_g

0xc69e,	// (0x0003f26d) grid_highlight_pane_cp09

0x73d2,	// (0x00039fa1) phob_pre_status_pane_g1

0x73da,	// (0x00039fa9) phob_pre_status_pane_g2

0x73e2,	// (0x00039fb1) phob_pre_status_pane_g3

0x73ea,	// (0x00039fb9) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x000421cf) phob_pre_status_pane_g

0x73fa,	// (0x00039fc9) phob_pre_status_pane_t1

0x740a,	// (0x00039fd9) phob_pre_status_pane_t2

0x741a,	// (0x00039fe9) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x000421da) phob_pre_status_pane_t

0xc1dd,	// (0x0003edac) bg_list_pane_cp05

0x524d,	// (0x00037e1c) grid_vorec_pane

0x5257,	// (0x00037e26) vorec_t1

0x5265,	// (0x00037e34) vorec_t2

0x5273,	// (0x00037e42) vorec_t3

0x5281,	// (0x00037e50) vorec_t4

0x528f,	// (0x00037e5e) vorec_t5

0x529d,	// (0x00037e6c) vorec_t6

0x0006,

0xf21a,	// (0x00041de9) vorec_t

0x52b9,	// (0x00037e88) wait_bar_pane_cp01

0x52c1,	// (0x00037e90) cell_vorec_pane_ParamLimits

0x52c1,	// (0x00037e90) cell_vorec_pane

0xc6a6,	// (0x0003f275) cell_vorec_pane_g1

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp05

0x52e4,	// (0x00037eb3) cams_zoom_pane

0x52f0,	// (0x00037ebf) image_vga_pane

0x52ff,	// (0x00037ece) main_camera_pane_g1

0x530d,	// (0x00037edc) main_camera_pane_g2

0x5319,	// (0x00037ee8) main_camera_pane_g3

0x5325,	// (0x00037ef4) main_camera_pane_g4

0x5331,	// (0x00037f00) main_camera_pane_g5

0x533d,	// (0x00037f0c) main_camera_pane_g6

0x5349,	// (0x00037f18) main_camera_pane_g7

0x0007,

0xf229,	// (0x00041df8) main_camera_pane_g

0x5355,	// (0x00037f24) main_camera_pane_t1

0x5367,	// (0x00037f36) main_camera_pane_t2

0x0001,

0xf23a,	// (0x00041e09) main_camera_pane_t

0x5388,	// (0x00037f57) cams_zoom_pane_cp_ParamLimits

0x5388,	// (0x00037f57) cams_zoom_pane_cp

0x53ac,	// (0x00037f7b) image_cif_pane_ParamLimits

0x53ac,	// (0x00037f7b) image_cif_pane

0x53ca,	// (0x00037f99) image_subqcif_pane

0x53d2,	// (0x00037fa1) main_video_pane_g1_ParamLimits

0x53d2,	// (0x00037fa1) main_video_pane_g1

0x53f2,	// (0x00037fc1) main_video_pane_g2_ParamLimits

0x53f2,	// (0x00037fc1) main_video_pane_g2

0x5422,	// (0x00037ff1) main_video_pane_g3_ParamLimits

0x5422,	// (0x00037ff1) main_video_pane_g3

0x544b,	// (0x0003801a) main_video_pane_g4_ParamLimits

0x544b,	// (0x0003801a) main_video_pane_g4

0x5474,	// (0x00038043) main_video_pane_g5_ParamLimits

0x5474,	// (0x00038043) main_video_pane_g5

0xc6bc,	// (0x0003f28b) main_video_pane_g6_ParamLimits

0xc6bc,	// (0x0003f28b) main_video_pane_g6

0x0006,

0xf23f,	// (0x00041e0e) main_video_pane_g_ParamLimits

0xf23f,	// (0x00041e0e) main_video_pane_g

0x5496,	// (0x00038065) main_video_pane_t1_ParamLimits

0x5496,	// (0x00038065) main_video_pane_t1

0xc6d6,	// (0x0003f2a5) cams_zoom_pane_g1

0xc6df,	// (0x0003f2ae) cams_zoom_pane_g2

0xc6e8,	// (0x0003f2b7) cams_zoom_pane_g3

0xc6f1,	// (0x0003f2c0) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00041e1d) cams_zoom_pane_g

0x54e0,	// (0x000380af) grid_cams_pane

0x54ee,	// (0x000380bd) linegrid_cams_pane

0x54fc,	// (0x000380cb) cell_cams_pane_ParamLimits

0x54fc,	// (0x000380cb) cell_cams_pane

0xc6fa,	// (0x0003f2c9) cams_burst_image_pane

0xc702,	// (0x0003f2d1) cell_cams_pane_g1

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp03

0xc560,	// (0x0003f12f) mp_bg_pane_g1

0xc1dd,	// (0x0003edac) bg_list_pane_cp03

0xe317,	// (0x00040ee6) bg_mp_pane

0xe31f,	// (0x00040eee) grid_mp_pane

0xe327,	// (0x00040ef6) media_player_g1

0xe32f,	// (0x00040efe) media_player_t1

0xe33d,	// (0x00040f0c) media_player_t2

0xe34b,	// (0x00040f1a) media_player_t3

0xe359,	// (0x00040f28) media_player_t4

0xe367,	// (0x00040f36) media_player_t5

0xe375,	// (0x00040f44) media_player_t6

0xe383,	// (0x00040f52) media_player_t7

0x0006,

0xf5ea,	// (0x000421b9) media_player_t

0xe391,	// (0x00040f60) wait_bar_pane_cp02

0xf5cf,	// (0x0004219e) main_usb_pane_t

0x73c9,	// (0x00039f98) cell_mp_pane

0xc560,	// (0x0003f12f) cell_mp_pane_g1

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp06

0xc70a,	// (0x0003f2d9) grid_skin_colour_pane

0xc712,	// (0x0003f2e1) list_highlight_pane_cp03

0x550f,	// (0x000380de) skin_g1

0xc71a,	// (0x0003f2e9) skin_t1

0xc729,	// (0x0003f2f8) skin_t2

0x0001,

0xf283,	// (0x00041e52) skin_t

0x5519,	// (0x000380e8) cell_skin_colour_pane_ParamLimits

0x5519,	// (0x000380e8) cell_skin_colour_pane

0xc737,	// (0x0003f306) cell_skin_colour_pane_g1

0x559d,	// (0x0003816c) call_video_g1_ParamLimits

0x559d,	// (0x0003816c) call_video_g1

0x55ad,	// (0x0003817c) call_video_g2_ParamLimits

0x55ad,	// (0x0003817c) call_video_g2

0x0001,

0xf288,	// (0x00041e57) call_video_g_ParamLimits

0xf288,	// (0x00041e57) call_video_g

0x5607,	// (0x000381d6) call_video_uplink_pane_cp1_ParamLimits

0x5607,	// (0x000381d6) call_video_uplink_pane_cp1

0xc749,	// (0x0003f318) call_video_uplink_pane_cp2

0x56d3,	// (0x000382a2) video_down_crop_pane_ParamLimits

0x56d3,	// (0x000382a2) video_down_crop_pane

0x57d1,	// (0x000383a0) video_down_pane_ParamLimits

0x57d1,	// (0x000383a0) video_down_pane

0xc751,	// (0x0003f320) video_down_subqcif_pane_ParamLimits

0xc751,	// (0x0003f320) video_down_subqcif_pane

0xc769,	// (0x0003f338) video_down_subqcif_pane_cp_ParamLimits

0xc769,	// (0x0003f338) video_down_subqcif_pane_cp

0xc78f,	// (0x0003f35e) im_reading_pane_ParamLimits

0xc78f,	// (0x0003f35e) im_reading_pane

0x58f3,	// (0x000384c2) im_writing_pane_ParamLimits

0x58f3,	// (0x000384c2) im_writing_pane

0x5911,	// (0x000384e0) im_reading_pane_t1

0xc7a9,	// (0x0003f378) list_im_pane

0xc7ba,	// (0x0003f389) scroll_pane_cp07

0x5965,	// (0x00038534) im_writing_pane_t1_ParamLimits

0x5965,	// (0x00038534) im_writing_pane_t1

0xc7d3,	// (0x0003f3a2) im_writing_pane_t2_ParamLimits

0xc7d3,	// (0x0003f3a2) im_writing_pane_t2

0x0001,

0xf292,	// (0x00041e61) im_writing_pane_t_ParamLimits

0xf292,	// (0x00041e61) im_writing_pane_t

0xc1dd,	// (0x0003edac) input_focus_pane_cp04

0xc1dd,	// (0x0003edac) input_focus_pane_cp05

0x597a,	// (0x00038549) list_im_single_pane_ParamLimits

0x597a,	// (0x00038549) list_im_single_pane

0x599e,	// (0x0003856d) list_single_im_pane_t1

0x738d,	// (0x00039f5c) blid_accuracy_pane

0x7395,	// (0x00039f64) blid_compass_pane

0x739f,	// (0x00039f6e) main_location_t1

0x73ad,	// (0x00039f7c) main_location_t2

0x73bb,	// (0x00039f8a) main_location_t3

0x0002,

0xf5f9,	// (0x000421c8) main_location_t

0xc1dd,	// (0x0003edac) aid_levels_location

0xc560,	// (0x0003f12f) blid_accuracy_pane_g1

0xc560,	// (0x0003f12f) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00041ec3) blid_accuracy_pane_g

0xc81b,	// (0x0003f3ea) wml_content_pane

0xc859,	// (0x0003f428) wml_button_pane_ParamLimits

0xc859,	// (0x0003f428) wml_button_pane

0x59ad,	// (0x0003857c) wml_list_single_large_pane_ParamLimits

0x59ad,	// (0x0003857c) wml_list_single_large_pane

0x59d7,	// (0x000385a6) wml_list_single_medium_pane_ParamLimits

0x59d7,	// (0x000385a6) wml_list_single_medium_pane

0x5a08,	// (0x000385d7) wml_list_single_small_pane_ParamLimits

0x5a08,	// (0x000385d7) wml_list_single_small_pane

0xc86d,	// (0x0003f43c) wml_selection_box_pane_ParamLimits

0xc86d,	// (0x0003f43c) wml_selection_box_pane

0xc880,	// (0x0003f44f) wml_list_single_pane_t1

0xc88f,	// (0x0003f45e) wml_list_single_medium_pane_t1

0xc89e,	// (0x0003f46d) wml_list_single_large_pane_t1

0xc8ad,	// (0x0003f47c) input_focus_pane_cp02_ParamLimits

0xc8ad,	// (0x0003f47c) input_focus_pane_cp02

0xc8c0,	// (0x0003f48f) wml_selection_box_pane_g1

0xc8c9,	// (0x0003f498) wml_selection_box_pane_t1_ParamLimits

0xc8c9,	// (0x0003f498) wml_selection_box_pane_t1

0xc438,	// (0x0003f007) bg_wml_button_pane_ParamLimits

0xc438,	// (0x0003f007) bg_wml_button_pane

0xc8e1,	// (0x0003f4b0) wml_button_pane_g1

0xc8e9,	// (0x0003f4b8) wml_button_pane_t1

0xc8e1,	// (0x0003f4b0) wml_button_bg_pane_g1

0xc8f9,	// (0x0003f4c8) wml_button_bg_pane_g2

0xc901,	// (0x0003f4d0) wml_button_bg_pane_g3

0xc909,	// (0x0003f4d8) wml_button_bg_pane_g4

0xc911,	// (0x0003f4e0) wml_button_bg_pane_g5

0xc919,	// (0x0003f4e8) wml_button_bg_pane_g6

0xc921,	// (0x0003f4f0) wml_button_bg_pane_g7

0xc929,	// (0x0003f4f8) wml_button_bg_pane_g8

0xc931,	// (0x0003f500) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x00041e66) wml_button_bg_pane_g

0x5a42,	// (0x00038611) bg_list_pane_cp02

0xc939,	// (0x0003f508) mce_header_pane_ParamLimits

0xc939,	// (0x0003f508) mce_header_pane

0xc94f,	// (0x0003f51e) mce_icon_pane

0xc94f,	// (0x0003f51e) mce_image_pane

0xc958,	// (0x0003f527) mce_text_pane_ParamLimits

0xc958,	// (0x0003f527) mce_text_pane

0x5a4c,	// (0x0003861b) scroll_pane_cp03

0xc851,	// (0x0003f420) scroll_pane_cp04

0xc96b,	// (0x0003f53a) scroll_pane_cp05_ParamLimits

0xc96b,	// (0x0003f53a) scroll_pane_cp05

0x5a56,	// (0x00038625) mce_header_field_pane_ParamLimits

0x5a56,	// (0x00038625) mce_header_field_pane

0x5a76,	// (0x00038645) mce_header_field_pane_2_ParamLimits

0x5a76,	// (0x00038645) mce_header_field_pane_2

0x5a8c,	// (0x0003865b) mce_header_field_pane_3

0x5a94,	// (0x00038663) list_single_mce_message_pane_ParamLimits

0x5a94,	// (0x00038663) list_single_mce_message_pane

0x5ab9,	// (0x00038688) list_single_mce_smart_pane_ParamLimits

0x5ab9,	// (0x00038688) list_single_mce_smart_pane

0xc977,	// (0x0003f546) input_focus_pane_cp03

0xc980,	// (0x0003f54f) list_header_data_pane

0x5ae9,	// (0x000386b8) mce_header_field_pane_t1

0x5af7,	// (0x000386c6) list_single_mce_header_pane_ParamLimits

0x5af7,	// (0x000386c6) list_single_mce_header_pane

0xc988,	// (0x0003f557) list_single_mce_header_pane_t1

0xc997,	// (0x0003f566) list_single_mce_message_pane_g1

0xc99f,	// (0x0003f56e) list_single_mce_message_pane_t1

0x5b3b,	// (0x0003870a) bg_cale_heading_pane_cp01_ParamLimits

0x5b3b,	// (0x0003870a) bg_cale_heading_pane_cp01

0xc9ad,	// (0x0003f57c) bg_cale_pane_cp02_ParamLimits

0xc9ad,	// (0x0003f57c) bg_cale_pane_cp02

0x5b6e,	// (0x0003873d) cale_month_corner_pane

0x5b84,	// (0x00038753) cale_month_day_heading_pane_ParamLimits

0x5b84,	// (0x00038753) cale_month_day_heading_pane

0x5bc7,	// (0x00038796) cale_month_pane_g1_ParamLimits

0x5bc7,	// (0x00038796) cale_month_pane_g1

0x5bf3,	// (0x000387c2) cale_month_pane_g2_ParamLimits

0x5bf3,	// (0x000387c2) cale_month_pane_g2

0x5c16,	// (0x000387e5) cale_month_pane_g3_ParamLimits

0x5c16,	// (0x000387e5) cale_month_pane_g3

0x5c52,	// (0x00038821) cale_month_pane_g4_ParamLimits

0x5c52,	// (0x00038821) cale_month_pane_g4

0x5c8e,	// (0x0003885d) cale_month_pane_g5_ParamLimits

0x5c8e,	// (0x0003885d) cale_month_pane_g5

0x5cca,	// (0x00038899) cale_month_pane_g6_ParamLimits

0x5cca,	// (0x00038899) cale_month_pane_g6

0x5d06,	// (0x000388d5) cale_month_pane_g7_ParamLimits

0x5d06,	// (0x000388d5) cale_month_pane_g7

0x5d52,	// (0x00038921) cale_month_pane_g8_ParamLimits

0x5d52,	// (0x00038921) cale_month_pane_g8

0x5d9e,	// (0x0003896d) cale_month_pane_g9_ParamLimits

0x5d9e,	// (0x0003896d) cale_month_pane_g9

0x5de4,	// (0x000389b3) cale_month_pane_g10_ParamLimits

0x5de4,	// (0x000389b3) cale_month_pane_g10

0x5e1e,	// (0x000389ed) cale_month_pane_g11_ParamLimits

0x5e1e,	// (0x000389ed) cale_month_pane_g11

0x5e5c,	// (0x00038a2b) cale_month_pane_g12_ParamLimits

0x5e5c,	// (0x00038a2b) cale_month_pane_g12

0x5e9a,	// (0x00038a69) cale_month_pane_g13_ParamLimits

0x5e9a,	// (0x00038a69) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x00041e79) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x00041e79) cale_month_pane_g

0x5ed8,	// (0x00038aa7) cale_month_week_pane

0x5eeb,	// (0x00038aba) grid_cale_month_pane_ParamLimits

0x5eeb,	// (0x00038aba) grid_cale_month_pane

0x5f29,	// (0x00038af8) cale_month_day_heading_pane_t1

0x5f87,	// (0x00038b56) cale_month_day_heading_pane_t2

0x5fec,	// (0x00038bbb) cale_month_day_heading_pane_t3

0x6051,	// (0x00038c20) cale_month_day_heading_pane_t4

0x60b6,	// (0x00038c85) cale_month_day_heading_pane_t5

0x611b,	// (0x00038cea) cale_month_day_heading_pane_t6

0x6180,	// (0x00038d4f) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x00041e94) cale_month_day_heading_pane_t

0xc64b,	// (0x0003f21a) bg_cale_side_pane_cp01

0x61f5,	// (0x00038dc4) cale_month_week_pane_t1

0x620c,	// (0x00038ddb) cale_month_week_pane_t2

0x6223,	// (0x00038df2) cale_month_week_pane_t3

0x623a,	// (0x00038e09) cale_month_week_pane_t4

0x6251,	// (0x00038e20) cale_month_week_pane_t5

0x626c,	// (0x00038e3b) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00041ea3) cale_month_week_pane_t

0x628b,	// (0x00038e5a) cell_cale_month_pane_ParamLimits

0x628b,	// (0x00038e5a) cell_cale_month_pane

0x6351,	// (0x00038f20) cell_cale_month_pane_g1

0x635d,	// (0x00038f2c) cell_cale_month_pane_t1_ParamLimits

0x635d,	// (0x00038f2c) cell_cale_month_pane_t1

0xc659,	// (0x0003f228) grid_highlight_pane_cp08

0xc560,	// (0x0003f12f) main_smil_g1

0x6379,	// (0x00038f48) smil_status_pane

0xc9e2,	// (0x0003f5b1) smil_text_pane

0xe237,	// (0x00040e06) bg_popup_call3_rect_pane_g8

0xe23f,	// (0x00040e0e) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0004215c) bg_popup_call3_rect_pane_g

0xe4b9,	// (0x00041088) smil_status_volume_pane_g1

0xc9ec,	// (0x0003f5bb) smil_status_pane_t1

0x7773,	// (0x0003a342) volume_smil_pane

0xca03,	// (0x0003f5d2) list_smil_text_pane

0x638c,	// (0x00038f5b) scroll_pane_cp011

0x6397,	// (0x00038f66) smil_text_list_pane_t1_ParamLimits

0x6397,	// (0x00038f66) smil_text_list_pane_t1

0x640f,	// (0x00038fde) aid_volume_smil_ParamLimits

0x640f,	// (0x00038fde) aid_volume_smil

0xc560,	// (0x0003f12f) smil_volume_pane_g1

0xc560,	// (0x0003f12f) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00041ec3) smil_volume_pane_g

0xc50b,	// (0x0003f0da) listscroll_cale_day_pane

0xca0d,	// (0x0003f5dc) bg_cale_pane

0xca25,	// (0x0003f5f4) list_cale_pane

0xca36,	// (0x0003f605) scroll_pane_cp09

0xca47,	// (0x0003f616) cale_bg_pane_g1

0xca4f,	// (0x0003f61e) cale_bg_pane_g2

0xca57,	// (0x0003f626) cale_bg_pane_g3

0xca5f,	// (0x0003f62e) cale_bg_pane_g4

0xca67,	// (0x0003f636) cale_bg_pane_g5

0xca6f,	// (0x0003f63e) cale_bg_pane_g6

0xca77,	// (0x0003f646) cale_bg_pane_g7

0xca7f,	// (0x0003f64e) cale_bg_pane_g8

0xca87,	// (0x0003f656) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x00041ec8) cale_bg_pane_g

0x6431,	// (0x00039000) list_cale_time_pane_ParamLimits

0x6431,	// (0x00039000) list_cale_time_pane

0xca8f,	// (0x0003f65e) list_cale_time_pane_g1_ParamLimits

0xca8f,	// (0x0003f65e) list_cale_time_pane_g1

0xca9b,	// (0x0003f66a) list_cale_time_pane_g2_ParamLimits

0xca9b,	// (0x0003f66a) list_cale_time_pane_g2

0x644d,	// (0x0003901c) list_cale_time_pane_g3_ParamLimits

0x644d,	// (0x0003901c) list_cale_time_pane_g3

0x645b,	// (0x0003902a) list_cale_time_pane_g4_ParamLimits

0x645b,	// (0x0003902a) list_cale_time_pane_g4

0x6469,	// (0x00039038) list_cale_time_pane_g5_ParamLimits

0x6469,	// (0x00039038) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00041edb) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00041edb) list_cale_time_pane_g

0xcab5,	// (0x0003f684) list_cale_time_pane_t1_ParamLimits

0xcab5,	// (0x0003f684) list_cale_time_pane_t1

0xcadd,	// (0x0003f6ac) list_cale_time_pane_t2_ParamLimits

0xcadd,	// (0x0003f6ac) list_cale_time_pane_t2

0x6740,	// (0x0003930f) aid_blid_cardinal_pane

0x6782,	// (0x00039351) compass_pane_t4

0xcb05,	// (0x0003f6d4) list_cale_time_pane_t4_ParamLimits

0xcb05,	// (0x0003f6d4) list_cale_time_pane_t4

0x6790,	// (0x0003935f) compass_pane_t5

0x67a0,	// (0x0003936f) compass_pane_t6

0x67ae,	// (0x0003937d) compass_pane_t7

0xcf3e,	// (0x0003fb0d) navi_pane_cc_t1

0xd093,	// (0x0003fc62) aid_phob_thumbnail_center_pane

0x6e93,	// (0x00039a62) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x00041ee8) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x00041ee8) list_cale_time_pane_t

0xbe34,	// (0x0003ea03) bg_popup_window_pane_cp02_ParamLimits

0xbe34,	// (0x0003ea03) bg_popup_window_pane_cp02

0xcb2d,	// (0x0003f6fc) heading_pane_cp01_ParamLimits

0xcb2d,	// (0x0003f6fc) heading_pane_cp01

0xcb39,	// (0x0003f708) loc_req_pane_ParamLimits

0xcb39,	// (0x0003f708) loc_req_pane

0xcb49,	// (0x0003f718) loc_type_pane_ParamLimits

0xcb49,	// (0x0003f718) loc_type_pane

0xcb5b,	// (0x0003f72a) loc_type_pane_t1_ParamLimits

0xcb5b,	// (0x0003f72a) loc_type_pane_t1

0xcb6d,	// (0x0003f73c) loc_type_pane_t2_ParamLimits

0xcb6d,	// (0x0003f73c) loc_type_pane_t2

0xcb7f,	// (0x0003f74e) loc_type_pane_t3_ParamLimits

0xcb7f,	// (0x0003f74e) loc_type_pane_t3

0x0002,

0xf320,	// (0x00041eef) loc_type_pane_t_ParamLimits

0xf320,	// (0x00041eef) loc_type_pane_t

0xcb91,	// (0x0003f760) list_loc_req_pane

0xcb9b,	// (0x0003f76a) scroll_pane_cp012

0x6477,	// (0x00039046) list_single_loc_request_popup_menu_pane_ParamLimits

0x6477,	// (0x00039046) list_single_loc_request_popup_menu_pane

0xcba6,	// (0x0003f775) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcba6,	// (0x0003f775) list_single_loc_request_popup_menu_pane_g1

0xcbb2,	// (0x0003f781) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbb2,	// (0x0003f781) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x00041ef6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x00041ef6) list_single_loc_request_popup_menu_pane_g

0xcbbe,	// (0x0003f78d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbbe,	// (0x0003f78d) list_single_loc_request_popup_menu_pane_t1

0x6489,	// (0x00039058) bg_popup_window_pane_cp03_ParamLimits

0x6489,	// (0x00039058) bg_popup_window_pane_cp03

0x6497,	// (0x00039066) heading_loc_req_pane_ParamLimits

0x6497,	// (0x00039066) heading_loc_req_pane

0x64a3,	// (0x00039072) popup_dyc_status_message_window_g1_ParamLimits

0x64a3,	// (0x00039072) popup_dyc_status_message_window_g1

0x64af,	// (0x0003907e) popup_dyc_status_message_window_t1_ParamLimits

0x64af,	// (0x0003907e) popup_dyc_status_message_window_t1

0x64c1,	// (0x00039090) popup_dyc_status_message_window_t2_ParamLimits

0x64c1,	// (0x00039090) popup_dyc_status_message_window_t2

0x64d3,	// (0x000390a2) popup_dyc_status_message_window_t3_ParamLimits

0x64d3,	// (0x000390a2) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00041efb) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00041efb) popup_dyc_status_message_window_t

0xc1dd,	// (0x0003edac) bg_heading_pane_cp01

0xcbd4,	// (0x0003f7a3) heading_loc_req_pane_g1

0xcbdc,	// (0x0003f7ab) heading_loc_req_pane_g2

0xcbe4,	// (0x0003f7b3) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00041f02) heading_loc_req_pane_g

0xcbec,	// (0x0003f7bb) heading_loc_req_pane_t1

0xcbfb,	// (0x0003f7ca) bg_popup_sub_pane_cp01_ParamLimits

0xcbfb,	// (0x0003f7ca) bg_popup_sub_pane_cp01

0xcc09,	// (0x0003f7d8) popup_cale_events_window_g1_ParamLimits

0xcc09,	// (0x0003f7d8) popup_cale_events_window_g1

0xcc29,	// (0x0003f7f8) popup_cale_events_window_g2_ParamLimits

0xcc29,	// (0x0003f7f8) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x00041f36) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x00041f36) popup_cale_events_window_g

0xcc49,	// (0x0003f818) popup_cale_events_window_t1_ParamLimits

0xcc49,	// (0x0003f818) popup_cale_events_window_t1

0xcc5b,	// (0x0003f82a) popup_cale_events_window_t2_ParamLimits

0xcc5b,	// (0x0003f82a) popup_cale_events_window_t2

0xcc99,	// (0x0003f868) popup_cale_events_window_t3_ParamLimits

0xcc99,	// (0x0003f868) popup_cale_events_window_t3

0xccd3,	// (0x0003f8a2) popup_cale_events_window_t4_ParamLimits

0xccd3,	// (0x0003f8a2) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x00041f3b) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x00041f3b) popup_cale_events_window_t

0x64fd,	// (0x000390cc) call_type_pane

0xcd09,	// (0x0003f8d8) popup_call_status_window_g1

0x6509,	// (0x000390d8) popup_call_status_window_g2

0x6515,	// (0x000390e4) popup_call_status_window_g3

0x0002,

0xf375,	// (0x00041f44) popup_call_status_window_g

0xcd17,	// (0x0003f8e6) call_type_pane_g1

0xcd20,	// (0x0003f8ef) call_type_pane_g2

0x0001,

0xf37c,	// (0x00041f4b) call_type_pane_g

0xc1dd,	// (0x0003edac) bg_popup_sub_pane_cp02

0xcd29,	// (0x0003f8f8) listscroll_popup_wml_pane

0xcd31,	// (0x0003f900) list_wml_pane

0xcd3b,	// (0x0003f90a) scroll_pane_cp013

0xcd46,	// (0x0003f915) list_single_graphic_popup_wml_pane_ParamLimits

0xcd46,	// (0x0003f915) list_single_graphic_popup_wml_pane

0xc560,	// (0x0003f12f) list_single_graphic_popup_wml_pane_g1

0xcd5a,	// (0x0003f929) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x00041f50) list_single_graphic_popup_wml_pane_g

0xcd62,	// (0x0003f931) list_single_graphic_popup_wml_pane_t1

0xcd78,	// (0x0003f947) aid_call_pane

0xc430,	// (0x0003efff) popup_clock_analogue_window_g1

0xc430,	// (0x0003efff) popup_clock_analogue_window_g2

0x6521,	// (0x000390f0) popup_clock_analogue_window_g3

0x6521,	// (0x000390f0) popup_clock_analogue_window_g4

0xc560,	// (0x0003f12f) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x00041f55) popup_clock_analogue_window_g

0x6529,	// (0x000390f8) popup_clock_analogue_window_t1

0x6537,	// (0x00039106) clock_digital_number_pane_ParamLimits

0x6537,	// (0x00039106) clock_digital_number_pane

0x6543,	// (0x00039112) clock_digital_number_pane_cp02_ParamLimits

0x6543,	// (0x00039112) clock_digital_number_pane_cp02

0x654f,	// (0x0003911e) clock_digital_number_pane_cp03_ParamLimits

0x654f,	// (0x0003911e) clock_digital_number_pane_cp03

0x655b,	// (0x0003912a) clock_digital_number_pane_cp04_ParamLimits

0x655b,	// (0x0003912a) clock_digital_number_pane_cp04

0x656b,	// (0x0003913a) clock_digital_separator_pane_ParamLimits

0x656b,	// (0x0003913a) clock_digital_separator_pane

0x6577,	// (0x00039146) popup_clock_digital_window_t1

0xc560,	// (0x0003f12f) clock_digital_number_pane_g1

0xc560,	// (0x0003f12f) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00041ec3) clock_digital_number_pane_g

0xc560,	// (0x0003f12f) clock_digital_separator_pane_g1

0xc560,	// (0x0003f12f) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00041ec3) clock_digital_separator_pane_g

0xc1dd,	// (0x0003edac) bg_popup_window_pane_cp04

0xcd80,	// (0x0003f94f) heading_pane_cp03

0xcd88,	// (0x0003f957) listscroll_popup_gms_pane

0xcd90,	// (0x0003f95f) grid_large_graphic_popup_pane

0xcd9a,	// (0x0003f969) listscroll_popup_gms_pane_g1

0xcda2,	// (0x0003f971) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x00041f60) listscroll_popup_gms_pane_g

0xc851,	// (0x0003f420) scroll_pane_cp014

0x6594,	// (0x00039163) cell_large_graphic_popup_pane_ParamLimits

0x6594,	// (0x00039163) cell_large_graphic_popup_pane

0x65ac,	// (0x0003917b) cell_large_graphic_popup_pane_g1_ParamLimits

0x65ac,	// (0x0003917b) cell_large_graphic_popup_pane_g1

0xcdaa,	// (0x0003f979) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdaa,	// (0x0003f979) cell_large_graphic_popup_pane_g2

0xcdb6,	// (0x0003f985) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdb6,	// (0x0003f985) cell_large_graphic_popup_pane_g3

0xcdc3,	// (0x0003f992) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdc3,	// (0x0003f992) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x00041f65) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x00041f65) cell_large_graphic_popup_pane_g

0xcdd3,	// (0x0003f9a2) grid_highlight_pane_cp010

0xc560,	// (0x0003f12f) bg_popup_call_pane_g1

0xcddd,	// (0x0003f9ac) list_single_graphic_popup_conf_pane_ParamLimits

0xcddd,	// (0x0003f9ac) list_single_graphic_popup_conf_pane

0xcdf0,	// (0x0003f9bf) list_highlight_pane_cp01

0xcdf9,	// (0x0003f9c8) list_single_graphic_popup_conf_pane_g1

0xce01,	// (0x0003f9d0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x00041f6e) list_single_graphic_popup_conf_pane_g

0xce09,	// (0x0003f9d8) list_single_graphic_popup_conf_pane_t1

0xce17,	// (0x0003f9e6) linegrid_cams_pane_g1

0x65b8,	// (0x00039187) linegrid_cams_pane_g2

0xc68c,	// (0x0003f25b) linegrid_cams_pane_g3

0xce20,	// (0x0003f9ef) linegrid_cams_pane_g4

0x65c1,	// (0x00039190) linegrid_cams_pane_g5

0x65ca,	// (0x00039199) linegrid_cams_pane_g6

0xc695,	// (0x0003f264) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x00041f73) linegrid_cams_pane_g

0xce29,	// (0x0003f9f8) popup_clock_analogue_window

0xce29,	// (0x0003f9f8) popup_clock_digital_window

0xc1dd,	// (0x0003edac) popup_phob_thumbnail_window

0xc560,	// (0x0003f12f) call_video_uplink_pane_g1

0xce32,	// (0x0003fa01) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x00041f82) call_video_uplink_pane_g

0xce3a,	// (0x0003fa09) video_uplink_pane

0xce42,	// (0x0003fa11) mce_image_pane_g1

0x65d3,	// (0x000391a2) mce_image_pane_g2

0x65dd,	// (0x000391ac) mce_image_pane_g3

0x65e5,	// (0x000391b4) mce_image_pane_g4

0x65ed,	// (0x000391bc) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x00041f87) mce_image_pane_g

0xce4c,	// (0x0003fa1b) control_top_pane_stacon_cp01_ParamLimits

0xce4c,	// (0x0003fa1b) control_top_pane_stacon_cp01

0xce60,	// (0x0003fa2f) uni_indicator_pane_stacon_cp01_ParamLimits

0xce60,	// (0x0003fa2f) uni_indicator_pane_stacon_cp01

0xce71,	// (0x0003fa40) bg_popup_sub_pane_cp03

0x65f5,	// (0x000391c4) chi_dic_find_pane

0x65fd,	// (0x000391cc) listscroll_chi_dic_pane

0x6606,	// (0x000391d5) main_pane_chidic_g1

0xce7b,	// (0x0003fa4a) chi_dic_find_pane_t1

0xce89,	// (0x0003fa58) find_chidic_pane

0xce92,	// (0x0003fa61) chi_dic_list_pane_ParamLimits

0xce92,	// (0x0003fa61) chi_dic_list_pane

0xcea3,	// (0x0003fa72) scroll_pane_cp020

0xceab,	// (0x0003fa7a) find_chidic_pane_t1

0xc1dd,	// (0x0003edac) input_focus_pane_cp06

0x6619,	// (0x000391e8) list_chi_dic_pane_ParamLimits

0x6619,	// (0x000391e8) list_chi_dic_pane

0x6633,	// (0x00039202) list_chi_dic_pane_t1_ParamLimits

0x6633,	// (0x00039202) list_chi_dic_pane_t1

0xc1dd,	// (0x0003edac) list_highlight_pane_cp020

0xceba,	// (0x0003fa89) bg_cale_heading_pane_g1

0x6646,	// (0x00039215) bg_cale_heading_pane_g2

0x664e,	// (0x0003921d) bg_cale_heading_pane_g3

0x6656,	// (0x00039225) bg_cale_heading_pane_g4

0x6660,	// (0x0003922f) bg_cale_heading_pane_g5

0x666a,	// (0x00039239) bg_cale_heading_pane_g6

0x6672,	// (0x00039241) bg_cale_heading_pane_g7

0x667a,	// (0x00039249) bg_cale_heading_pane_g8

0x6684,	// (0x00039253) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x00041f92) bg_cale_heading_pane_g

0xceba,	// (0x0003fa89) bg_cale_side_pane_g1

0x668e,	// (0x0003925d) bg_cale_side_pane_g2

0x6698,	// (0x00039267) bg_cale_side_pane_g3

0x66a2,	// (0x00039271) bg_cale_side_pane_g4

0x66ac,	// (0x0003927b) bg_cale_side_pane_g5

0x66b6,	// (0x00039285) bg_cale_side_pane_g6

0x66c0,	// (0x0003928f) bg_cale_side_pane_g7

0x66ca,	// (0x00039299) bg_cale_side_pane_g8

0x66d2,	// (0x000392a1) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x00041fa5) bg_cale_side_pane_g

0x66da,	// (0x000392a9) popup_call_status_window_ParamLimits

0x66da,	// (0x000392a9) popup_call_status_window

0xcec2,	// (0x0003fa91) stacon_top_pane

0xceca,	// (0x0003fa99) status_pane_ParamLimits

0xceca,	// (0x0003fa99) status_pane

0xcedf,	// (0x0003faae) status_small_pane

0xcee7,	// (0x0003fab6) control_pane

0xc1dd,	// (0x0003edac) stacon_bottom_pane

0xceef,	// (0x0003fabe) list_single_mce_smart_pane_t1_ParamLimits

0xceef,	// (0x0003fabe) list_single_mce_smart_pane_t1

0xcf02,	// (0x0003fad1) list_single_mce_smart_pane_t2_ParamLimits

0xcf02,	// (0x0003fad1) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x00041fb8) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x00041fb8) list_single_mce_smart_pane_t

0x66e6,	// (0x000392b5) compass_pane

0x66f2,	// (0x000392c1) main_location2_pane_t1

0x6706,	// (0x000392d5) main_location2_pane_t2

0x671a,	// (0x000392e9) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00041fbd) main_location2_pane_t

0xcf21,	// (0x0003faf0) compass_pane_g1_ParamLimits

0xcf21,	// (0x0003faf0) compass_pane_g1

0x6764,	// (0x00039333) compass_pane_t1

0x6773,	// (0x00039342) compass_pane_t2

0x0005,

0xf3f7,	// (0x00041fc6) compass_pane_t

0x67be,	// (0x0003938d) text_secondary_cp61

0xcf35,	// (0x0003fb04) navi_pane_cams_g5

0xcf58,	// (0x0003fb27) navi_pane_im_t1

0xcf66,	// (0x0003fb35) navi_pane_mp_g1_ParamLimits

0xcf66,	// (0x0003fb35) navi_pane_mp_g1

0xcf7a,	// (0x0003fb49) navi_pane_mp_g2_ParamLimits

0xcf7a,	// (0x0003fb49) navi_pane_mp_g2

0xcf86,	// (0x0003fb55) navi_pane_mp_g3_ParamLimits

0xcf86,	// (0x0003fb55) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x00041fda) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x00041fda) navi_pane_mp_g

0xcf92,	// (0x0003fb61) navi_pane_mp_t1

0xcfa0,	// (0x0003fb6f) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00041fe1) navi_pane_mp_t

0xcfdc,	// (0x0003fbab) navi_pane_vt_g1

0xcf92,	// (0x0003fb61) navi_pane_vt_t1

0xcfe4,	// (0x0003fbb3) navi_slider_pane

0xcfec,	// (0x0003fbbb) zooming_pane

0xcff4,	// (0x0003fbc3) navi_slider_pane_g1

0x68e9,	// (0x000394b8) navi_slider_pane_g2

0x0006,

0xf419,	// (0x00041fe8) navi_slider_pane_g

0xd018,	// (0x0003fbe7) aid_levels_zoom

0xd020,	// (0x0003fbef) zooming_pane_g1

0xd028,	// (0x0003fbf7) zooming_pane_g2

0xd028,	// (0x0003fbf7) zooming_pane_g3

0x0002,

0xf428,	// (0x00041ff7) zooming_pane_g

0xd030,	// (0x0003fbff) level_10_zoom

0xd039,	// (0x0003fc08) level_11_zoom

0xd042,	// (0x0003fc11) level_1_zoom

0xd04b,	// (0x0003fc1a) level_2_zoom

0xd054,	// (0x0003fc23) level_3_zoom

0xd05d,	// (0x0003fc2c) level_4_zoom

0xd066,	// (0x0003fc35) level_5_zoom

0xd06f,	// (0x0003fc3e) level_6_zoom

0xd078,	// (0x0003fc47) level_7_zoom

0xd081,	// (0x0003fc50) level_8_zoom

0xd08a,	// (0x0003fc59) level_9_zoom

0xd09b,	// (0x0003fc6a) popup_phob_thumbnail_window_g1

0xd0a3,	// (0x0003fc72) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00041ffe) popup_phob_thumbnail_window_g

0xe399,	// (0x00040f68) level_1_location

0xe3a1,	// (0x00040f70) level_2_location

0xe3a9,	// (0x00040f78) level_3_location

0xe3b1,	// (0x00040f80) level_4_location

0xcfec,	// (0x0003fbbb) level_5_location

0x68fb,	// (0x000394ca) mce_icon_pane_g1

0x6903,	// (0x000394d2) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00042003) mce_icon_pane_g

0x690b,	// (0x000394da) main_mup_pane_g1_ParamLimits

0x690b,	// (0x000394da) main_mup_pane_g1

0x6923,	// (0x000394f2) main_mup_pane_g2_ParamLimits

0x6923,	// (0x000394f2) main_mup_pane_g2

0x693f,	// (0x0003950e) main_mup_pane_g3_ParamLimits

0x693f,	// (0x0003950e) main_mup_pane_g3

0x695b,	// (0x0003952a) main_mup_pane_g4_ParamLimits

0x695b,	// (0x0003952a) main_mup_pane_g4

0x6977,	// (0x00039546) main_mup_pane_g5_ParamLimits

0x6977,	// (0x00039546) main_mup_pane_g5

0x6998,	// (0x00039567) main_mup_pane_g6_ParamLimits

0x6998,	// (0x00039567) main_mup_pane_g6

0x69b4,	// (0x00039583) main_mup_pane_g7_ParamLimits

0x69b4,	// (0x00039583) main_mup_pane_g7

0x69d0,	// (0x0003959f) main_mup_pane_g8_ParamLimits

0x69d0,	// (0x0003959f) main_mup_pane_g8

0x69f0,	// (0x000395bf) main_mup_pane_g9_ParamLimits

0x69f0,	// (0x000395bf) main_mup_pane_g9

0x6a0f,	// (0x000395de) main_mup_pane_g10_ParamLimits

0x6a0f,	// (0x000395de) main_mup_pane_g10

0x6a2e,	// (0x000395fd) main_mup_pane_g11_ParamLimits

0x6a2e,	// (0x000395fd) main_mup_pane_g11

0x6a46,	// (0x00039615) main_mup_pane_g12_ParamLimits

0x6a46,	// (0x00039615) main_mup_pane_g12

0x6a54,	// (0x00039623) main_mup_pane_g13_ParamLimits

0x6a54,	// (0x00039623) main_mup_pane_g13

0x000c,

0xf439,	// (0x00042008) main_mup_pane_g_ParamLimits

0xf439,	// (0x00042008) main_mup_pane_g

0x6a6a,	// (0x00039639) main_mup_pane_t1_ParamLimits

0x6a6a,	// (0x00039639) main_mup_pane_t1

0x6a87,	// (0x00039656) main_mup_pane_t2_ParamLimits

0x6a87,	// (0x00039656) main_mup_pane_t2

0x6aa1,	// (0x00039670) main_mup_pane_t3_ParamLimits

0x6aa1,	// (0x00039670) main_mup_pane_t3

0x6abb,	// (0x0003968a) main_mup_pane_t4_ParamLimits

0x6abb,	// (0x0003968a) main_mup_pane_t4

0x6acd,	// (0x0003969c) main_mup_pane_t5_ParamLimits

0x6acd,	// (0x0003969c) main_mup_pane_t5

0x6adf,	// (0x000396ae) main_mup_pane_t6_ParamLimits

0x6adf,	// (0x000396ae) main_mup_pane_t6

0x0005,

0xf454,	// (0x00042023) main_mup_pane_t_ParamLimits

0xf454,	// (0x00042023) main_mup_pane_t

0x6af5,	// (0x000396c4) mup_progress_pane_ParamLimits

0x6af5,	// (0x000396c4) mup_progress_pane

0x6b01,	// (0x000396d0) mup_visualizer_pane_ParamLimits

0x6b01,	// (0x000396d0) mup_visualizer_pane

0x6b3b,	// (0x0003970a) mup_volume_pane_ParamLimits

0x6b3b,	// (0x0003970a) mup_volume_pane

0xcd09,	// (0x0003f8d8) mup_visualizer_pane_g1_ParamLimits

0xcd09,	// (0x0003f8d8) mup_visualizer_pane_g1

0xcd09,	// (0x0003f8d8) mup_visualizer_pane_g2_ParamLimits

0xcd09,	// (0x0003f8d8) mup_visualizer_pane_g2

0xcf21,	// (0x0003faf0) mup_visualizer_pane_g3_ParamLimits

0xcf21,	// (0x0003faf0) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00042030) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00042030) mup_visualizer_pane_g

0xc560,	// (0x0003f12f) mup_volume_pane_g1

0xd0b3,	// (0x0003fc82) mup_volume_pane_g2

0x0001,

0xf468,	// (0x00042037) mup_volume_pane_g

0xc560,	// (0x0003f12f) mup_progress_pane_g1

0xd0bc,	// (0x0003fc8b) mup_progress_pane_g2

0xd0c5,	// (0x0003fc94) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0004203c) mup_progress_pane_g

0xc1dd,	// (0x0003edac) bg_popup_window_pane_cp05

0xd0ce,	// (0x0003fc9d) heading_pane_cp02_ParamLimits

0xd0ce,	// (0x0003fc9d) heading_pane_cp02

0xd0e8,	// (0x0003fcb7) list_popup_blid_pane

0xd0f0,	// (0x0003fcbf) list_blid_sat_info_pane_ParamLimits

0xd0f0,	// (0x0003fcbf) list_blid_sat_info_pane

0xd103,	// (0x0003fcd2) list_blid_sat_info_pane_g1

0xd10b,	// (0x0003fcda) list_blid_sat_info_pane_t1

0x6c48,	// (0x00039817) mup_equalizer_pane_ParamLimits

0x6c48,	// (0x00039817) mup_equalizer_pane

0x6c69,	// (0x00039838) mup_equalizer_pane_cp1_ParamLimits

0x6c69,	// (0x00039838) mup_equalizer_pane_cp1

0x6c8a,	// (0x00039859) mup_equalizer_pane_cp2_ParamLimits

0x6c8a,	// (0x00039859) mup_equalizer_pane_cp2

0x6cab,	// (0x0003987a) mup_equalizer_pane_cp3_ParamLimits

0x6cab,	// (0x0003987a) mup_equalizer_pane_cp3

0x6ccc,	// (0x0003989b) mup_equalizer_pane_cp4_ParamLimits

0x6ccc,	// (0x0003989b) mup_equalizer_pane_cp4

0x6ced,	// (0x000398bc) mup_equalizer_pane_cp5

0x6d03,	// (0x000398d2) mup_equalizer_pane_cp6

0x6d1b,	// (0x000398ea) mup_equalizer_pane_cp7

0xe2b7,	// (0x00040e86) bg_popup_call_poc_act_pane_g9

0xe2bf,	// (0x00040e8e) bg_popup_call_poc_act_pane_g10

0xe2c7,	// (0x00040e96) bg_popup_call_poc_act_pane_g11

0x000a,

0xc438,	// (0x0003f007) mup_scale_pane

0xc560,	// (0x0003f12f) mup_scale_pane_g1

0xd119,	// (0x0003fce8) mup_scale_pane_g2

0x0006,

0xf489,	// (0x00042058) mup_scale_pane_g

0xd13d,	// (0x0003fd0c) msg_data_pane

0xd145,	// (0x0003fd14) scroll_pane_cp017

0x3611,	// (0x000361e0) bg_list_pane_cp04_ParamLimits

0x3611,	// (0x000361e0) bg_list_pane_cp04

0xd14d,	// (0x0003fd1c) msg_data_pane_g1

0x6d45,	// (0x00039914) msg_data_pane_g2

0x6d4f,	// (0x0003991e) msg_data_pane_g3

0x6d57,	// (0x00039926) msg_data_pane_g4

0x6d5f,	// (0x0003992e) msg_data_pane_g5

0x6d67,	// (0x00039936) msg_data_pane_g6

0x6d6f,	// (0x0003993e) msg_data_pane_g7

0x0006,

0xf498,	// (0x00042067) msg_data_pane_g

0x3635,	// (0x00036204) msg_text_pane_ParamLimits

0x3635,	// (0x00036204) msg_text_pane

0x6d77,	// (0x00039946) qrid_highlight_pane_cp011_ParamLimits

0x6d77,	// (0x00039946) qrid_highlight_pane_cp011

0xc1dd,	// (0x0003edac) msg_body_pane

0xc1dd,	// (0x0003edac) msg_header_pane

0xd15e,	// (0x0003fd2d) input_focus_pane_cp07

0x3681,	// (0x00036250) msg_header_pane_t1_ParamLimits

0x3681,	// (0x00036250) msg_header_pane_t1

0x3693,	// (0x00036262) msg_header_pane_t2_ParamLimits

0x3693,	// (0x00036262) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0004207b) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0004207b) msg_header_pane_t

0xd173,	// (0x0003fd42) msg_body_pane_g1

0x36a5,	// (0x00036274) msg_body_pane_t1_ParamLimits

0x36a5,	// (0x00036274) msg_body_pane_t1

0x36d6,	// (0x000362a5) msg_body_pane_t2_ParamLimits

0x36d6,	// (0x000362a5) msg_body_pane_t2

0x36e8,	// (0x000362b7) msg_body_pane_t3_ParamLimits

0x36e8,	// (0x000362b7) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x00042080) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x00042080) msg_body_pane_t

0x6de3,	// (0x000399b2) main_viewer_pane_g1_ParamLimits

0x6de3,	// (0x000399b2) main_viewer_pane_g1

0x6def,	// (0x000399be) main_viewer_pane_g2_ParamLimits

0x6def,	// (0x000399be) main_viewer_pane_g2

0x6dfb,	// (0x000399ca) main_viewer_pane_g3_ParamLimits

0x6dfb,	// (0x000399ca) main_viewer_pane_g3

0x6e0c,	// (0x000399db) main_viewer_pane_g4_ParamLimits

0x6e0c,	// (0x000399db) main_viewer_pane_g4

0x6e1d,	// (0x000399ec) main_viewer_pane_g5_ParamLimits

0x6e1d,	// (0x000399ec) main_viewer_pane_g5

0x6e1d,	// (0x000399ec) main_viewer_pane_g7_ParamLimits

0x6e1d,	// (0x000399ec) main_viewer_pane_g7

0x6e2f,	// (0x000399fe) main_viewer_pane_g8_ParamLimits

0x6e2f,	// (0x000399fe) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x00042090) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x00042090) main_viewer_pane_g

0xd17b,	// (0x0003fd4a) viewer_content_pane_ParamLimits

0xd17b,	// (0x0003fd4a) viewer_content_pane

0x6e67,	// (0x00039a36) main_postcard_pane_g1_ParamLimits

0x6e67,	// (0x00039a36) main_postcard_pane_g1

0x6e75,	// (0x00039a44) main_postcard_pane_g2_ParamLimits

0x6e75,	// (0x00039a44) main_postcard_pane_g2

0x6e83,	// (0x00039a52) main_postcard_pane_g3_ParamLimits

0x6e83,	// (0x00039a52) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x000420a1) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x000420a1) main_postcard_pane_g

0x6e93,	// (0x00039a62) main_postcard_pane_g4

0xe4cc,	// (0x0004109b) smil_status_volume_pane_g2

0x6ebf,	// (0x00039a8e) postcard_pane_ParamLimits

0x6ebf,	// (0x00039a8e) postcard_pane

0xcd09,	// (0x0003f8d8) postcard_pane_g1_ParamLimits

0xcd09,	// (0x0003f8d8) postcard_pane_g1

0x6ef1,	// (0x00039ac0) postcard_pane_g2_ParamLimits

0x6ef1,	// (0x00039ac0) postcard_pane_g2

0x6efd,	// (0x00039acc) postcard_pane_g3_ParamLimits

0x6efd,	// (0x00039acc) postcard_pane_g3

0xd189,	// (0x0003fd58) postcard_pane_g4_ParamLimits

0xd189,	// (0x0003fd58) postcard_pane_g4

0x6f09,	// (0x00039ad8) postcard_pane_g5_ParamLimits

0x6f09,	// (0x00039ad8) postcard_pane_g5

0x6f15,	// (0x00039ae4) postcard_pane_g6_ParamLimits

0x6f15,	// (0x00039ae4) postcard_pane_g6

0xd197,	// (0x0003fd66) postcard_pane_g7_ParamLimits

0xd197,	// (0x0003fd66) postcard_pane_g7

0x0006,

0xf4df,	// (0x000420ae) postcard_pane_g_ParamLimits

0xf4df,	// (0x000420ae) postcard_pane_g

0x6f21,	// (0x00039af0) main_mp2_pane_g1_ParamLimits

0x6f21,	// (0x00039af0) main_mp2_pane_g1

0x6f2d,	// (0x00039afc) main_mp2_pane_g2_ParamLimits

0x6f2d,	// (0x00039afc) main_mp2_pane_g2

0x6f39,	// (0x00039b08) main_mp2_pane_g3_ParamLimits

0x6f39,	// (0x00039b08) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x000420bd) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x000420bd) main_mp2_pane_g

0x6f45,	// (0x00039b14) main_mp2_pane_t1_ParamLimits

0x6f45,	// (0x00039b14) main_mp2_pane_t1

0x6f5c,	// (0x00039b2b) main_mp2_pane_t2_ParamLimits

0x6f5c,	// (0x00039b2b) main_mp2_pane_t2

0x6f70,	// (0x00039b3f) main_mp2_pane_t3_ParamLimits

0x6f70,	// (0x00039b3f) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x000420c4) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x000420c4) main_mp2_pane_t

0xd1a5,	// (0x0003fd74) pec_content_pane_ParamLimits

0xd1a5,	// (0x0003fd74) pec_content_pane

0xc851,	// (0x0003f420) scroll_pane_cp015

0xd1b7,	// (0x0003fd86) pec_attribute_pane_ParamLimits

0xd1b7,	// (0x0003fd86) pec_attribute_pane

0x6f82,	// (0x00039b51) pec_content_pane_g1_ParamLimits

0x6f82,	// (0x00039b51) pec_content_pane_g1

0xd1c7,	// (0x0003fd96) pec_content_pane_t1_ParamLimits

0xd1c7,	// (0x0003fd96) pec_content_pane_t1

0xd1d9,	// (0x0003fda8) pec_content_pane_t2_ParamLimits

0xd1d9,	// (0x0003fda8) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x000420cb) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x000420cb) pec_content_pane_t

0x6f8e,	// (0x00039b5d) list_single_graphic_pane_cp01_ParamLimits

0x6f8e,	// (0x00039b5d) list_single_graphic_pane_cp01

0xc438,	// (0x0003f007) bg_popup_sub_pane_cp04

0xd1eb,	// (0x0003fdba) popup_mup_playback_window_g1

0xd1f7,	// (0x0003fdc6) popup_mup_playback_window_t1

0xd20c,	// (0x0003fddb) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x000420d0) popup_mup_playback_window_t

0xd243,	// (0x0003fe12) main_image_pane_g1_ParamLimits

0xd243,	// (0x0003fe12) main_image_pane_g1

0xd286,	// (0x0003fe55) scroll_pane_cp018_ParamLimits

0xd286,	// (0x0003fe55) scroll_pane_cp018

0xd29e,	// (0x0003fe6d) scroll_pane_cp016_ParamLimits

0xd29e,	// (0x0003fe6d) scroll_pane_cp016

0x7027,	// (0x00039bf6) smil2_image_pane_ParamLimits

0x7027,	// (0x00039bf6) smil2_image_pane

0x7057,	// (0x00039c26) smil2_root_pane_ParamLimits

0x7057,	// (0x00039c26) smil2_root_pane

0x7083,	// (0x00039c52) smil2_text_pane_ParamLimits

0x7083,	// (0x00039c52) smil2_text_pane

0xc1dd,	// (0x0003edac) bg_list_pane_cp06

0xd2da,	// (0x0003fea9) grid_radio_pane

0xc1dd,	// (0x0003edac) bg_popup_window_pane_cp06

0xd2e2,	// (0x0003feb1) main_fmradio_pane_t1

0xcd80,	// (0x0003f94f) heading_pane_cp04

0xd2f0,	// (0x0003febf) main_fmradio_pane_t2

0xe2cf,	// (0x00040e9e) popup_cale_lunar_info_window_g1

0xd2fe,	// (0x0003fecd) main_fmradio_pane_t3

0xe2d7,	// (0x00040ea6) popup_cale_lunar_info_window_g2

0xd30c,	// (0x0003fedb) main_fmradio_pane_t4

0x0001,

0xd31a,	// (0x0003fee9) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x000421ab) popup_cale_lunar_info_window_g

0xf516,	// (0x000420e5) main_fmradio_pane_t

0xd328,	// (0x0003fef7) wait_bar_pane_cp03

0xd330,	// (0x0003feff) cell_fmradio_pane_ParamLimits

0xd330,	// (0x0003feff) cell_fmradio_pane

0xd197,	// (0x0003fd66) cell_fmradio_pane_g1_ParamLimits

0xd197,	// (0x0003fd66) cell_fmradio_pane_g1

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp011

0xd343,	// (0x0003ff12) poc_content_pane_ParamLimits

0xd343,	// (0x0003ff12) poc_content_pane

0xd355,	// (0x0003ff24) scroll_pane_cp019

0x70c3,	// (0x00039c92) popup_call_poc_act_window_ParamLimits

0x70c3,	// (0x00039c92) popup_call_poc_act_window

0x70d0,	// (0x00039c9f) popup_call_poc_inact_window_ParamLimits

0x70d0,	// (0x00039c9f) popup_call_poc_inact_window

0xf5b3,	// (0x00042182) bg_popup_call_poc_act_pane_g

0xe247,	// (0x00040e16) bg_popup_call_poc_inact_pane_g1

0xe24f,	// (0x00040e1e) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x0003ff2c) popup_call_poc_act_window_g2

0xe257,	// (0x00040e26) bg_popup_call_poc_inact_pane_g3

0xe25f,	// (0x00040e2e) bg_popup_call_poc_inact_pane_g4

0xe267,	// (0x00040e36) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0003ff34) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0003ff34) popup_call_poc_act_window_t1

0xd38d,	// (0x0003ff5c) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x0003ff5c) popup_call_poc_act_window_t2

0xd3b5,	// (0x0003ff84) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x0003ff84) popup_call_poc_act_window_t3

0xd3dd,	// (0x0003ffac) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x0003ffac) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x000420f0) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x000420f0) popup_call_poc_act_window_t

0xe26f,	// (0x00040e3e) bg_popup_call_poc_inact_pane_g6

0xe277,	// (0x00040e46) bg_popup_call_poc_inact_pane_g7

0xe27f,	// (0x00040e4e) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x0003ffbe) popup_call_poc_inact_window_g2

0xe287,	// (0x00040e56) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0004216f) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x0003ffc6) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x0003ffc6) popup_call_poc_inact_window_t1

0xd40c,	// (0x0003ffdb) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x0003ffdb) popup_call_poc_inact_window_t2

0xd421,	// (0x0003fff0) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x0003fff0) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x000420f9) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x000420f9) popup_call_poc_inact_window_t

0xe43f,	// (0x0004100e) context_pane_ParamLimits

0x76c0,	// (0x0003a28f) signal_pane_ParamLimits

0xcfec,	// (0x0003fbbb) main_call2_pane

0xe42d,	// (0x00040ffc) popup_phob_thumbnail2_window_ParamLimits

0xe42d,	// (0x00040ffc) popup_phob_thumbnail2_window

0x6d91,	// (0x00039960) aid_hotspot_pointer_arrow_pane

0x6d99,	// (0x00039968) aid_hotspot_pointer_hand_pane

0x73f2,	// (0x00039fc1) phob_pre_status_pane_g5

0x52e4,	// (0x00037eb3) cams_zoom_pane_ParamLimits

0x52f0,	// (0x00037ebf) image_vga_pane_ParamLimits

0x52ff,	// (0x00037ece) main_camera_pane_g1_ParamLimits

0x530d,	// (0x00037edc) main_camera_pane_g2_ParamLimits

0x5319,	// (0x00037ee8) main_camera_pane_g3_ParamLimits

0x5325,	// (0x00037ef4) main_camera_pane_g4_ParamLimits

0x5331,	// (0x00037f00) main_camera_pane_g5_ParamLimits

0x533d,	// (0x00037f0c) main_camera_pane_g6_ParamLimits

0x5349,	// (0x00037f18) main_camera_pane_g7_ParamLimits

0xf229,	// (0x00041df8) main_camera_pane_g_ParamLimits

0x5355,	// (0x00037f24) main_camera_pane_t1_ParamLimits

0x5367,	// (0x00037f36) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x00041e09) main_camera_pane_t_ParamLimits

0xc438,	// (0x0003f007) bg_popup_preview_window_pane_cp01_ParamLimits

0xc438,	// (0x0003f007) bg_popup_preview_window_pane_cp01

0xd436,	// (0x00040005) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x00040005) popup_phob_thumbnail2_window_g1

0xc1dd,	// (0x0003edac) call2_cli_visual_pane

0x70ec,	// (0x00039cbb) popup_call2_audio_conf_window_ParamLimits

0x70ec,	// (0x00039cbb) popup_call2_audio_conf_window

0x7101,	// (0x00039cd0) popup_call2_audio_first_window_ParamLimits

0x7101,	// (0x00039cd0) popup_call2_audio_first_window

0x719f,	// (0x00039d6e) popup_call2_audio_in_window_ParamLimits

0x719f,	// (0x00039d6e) popup_call2_audio_in_window

0x71e1,	// (0x00039db0) popup_call2_audio_out_window_ParamLimits

0x71e1,	// (0x00039db0) popup_call2_audio_out_window

0x7243,	// (0x00039e12) popup_call2_audio_second_window_ParamLimits

0x7243,	// (0x00039e12) popup_call2_audio_second_window

0x72a1,	// (0x00039e70) popup_call2_audio_wait_window_ParamLimits

0x72a1,	// (0x00039e70) popup_call2_audio_wait_window

0xc1dd,	// (0x0003edac) bg_popup_call2_act_pane_cp03

0xc41a,	// (0x0003efe9) list_conf_pane_cp

0xd442,	// (0x00040011) popup_call2_audio_conf_window_t1

0xcddd,	// (0x0003f9ac) list_single_graphic_popup_conf2_pane_ParamLimits

0xcddd,	// (0x0003f9ac) list_single_graphic_popup_conf2_pane

0xcdf0,	// (0x0003f9bf) list_highlight_pane_cp04

0xd450,	// (0x0004001f) list_single_graphic_popup_conf2_pane_g1

0xce01,	// (0x0003f9d0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00042100) list_single_graphic_popup_conf2_pane_g

0xd45a,	// (0x00040029) list_single_graphic_popup_conf2_pane_t1

0xd468,	// (0x00040037) bg_popup_call2_act_pane_cp01_ParamLimits

0xd468,	// (0x00040037) bg_popup_call2_act_pane_cp01

0xd4f2,	// (0x000400c1) call_type_pane_cp05_ParamLimits

0xd4f2,	// (0x000400c1) call_type_pane_cp05

0xd546,	// (0x00040115) popup_call2_audio_second_window_g1_ParamLimits

0xd546,	// (0x00040115) popup_call2_audio_second_window_g1

0xd59a,	// (0x00040169) popup_call2_audio_second_window_g2_ParamLimits

0xd59a,	// (0x00040169) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x00042105) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x00042105) popup_call2_audio_second_window_g

0xd5ff,	// (0x000401ce) popup_call2_audio_second_window_t1_ParamLimits

0xd5ff,	// (0x000401ce) popup_call2_audio_second_window_t1

0xd6ba,	// (0x00040289) popup_call2_audio_second_window_t2_ParamLimits

0xd6ba,	// (0x00040289) popup_call2_audio_second_window_t2

0xd70d,	// (0x000402dc) popup_call2_audio_second_window_t3_ParamLimits

0xd70d,	// (0x000402dc) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0004210c) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0004210c) popup_call2_audio_second_window_t

0xc1dd,	// (0x0003edac) bg_popup_call2_in_pane_cp02

0xc1e7,	// (0x0003edb6) call_type_pane_cp04

0xc1ef,	// (0x0003edbe) popup_call2_audio_wait_window_g1

0xc1f7,	// (0x0003edc6) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00041ce5) popup_call2_audio_wait_window_g

0xc1ff,	// (0x0003edce) popup_call2_audio_wait_window_t3

0xd800,	// (0x000403cf) bg_popup_call2_act_pane_ParamLimits

0xd800,	// (0x000403cf) bg_popup_call2_act_pane

0xd8da,	// (0x000404a9) call_type_pane_cp03_ParamLimits

0xd8da,	// (0x000404a9) call_type_pane_cp03

0xd93e,	// (0x0004050d) popup_call2_audio_first_window_g1_ParamLimits

0xd93e,	// (0x0004050d) popup_call2_audio_first_window_g1

0xd9ae,	// (0x0004057d) popup_call2_audio_first_window_g2_ParamLimits

0xd9ae,	// (0x0004057d) popup_call2_audio_first_window_g2

0xcd09,	// (0x0003f8d8) popup_call2_audio_first_window_g3_ParamLimits

0xcd09,	// (0x0003f8d8) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x00042115) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x00042115) popup_call2_audio_first_window_g

0xda8c,	// (0x0004065b) popup_call2_audio_first_window_t1_ParamLimits

0xda8c,	// (0x0004065b) popup_call2_audio_first_window_t1

0xdb8f,	// (0x0004075e) popup_call2_audio_first_window_t4_ParamLimits

0xdb8f,	// (0x0004075e) popup_call2_audio_first_window_t4

0xdc72,	// (0x00040841) popup_call2_audio_first_window_t5_ParamLimits

0xdc72,	// (0x00040841) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00042120) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00042120) popup_call2_audio_first_window_t

0xc430,	// (0x0003efff) bg_popup_call2_act_pane_g1

0xe2df,	// (0x00040eae) popup_cale_lunar_info_window_t1

0xe2ed,	// (0x00040ebc) popup_cale_lunar_info_window_t2

0xe2fb,	// (0x00040eca) popup_cale_lunar_info_window_t3

0xc1dd,	// (0x0003edac) bg_popup_call2_bubble_pane

0xdd73,	// (0x00040942) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd73,	// (0x00040942) bg_popup_call2_in_pane_cp01

0xbeb9,	// (0x0003ea88) call_type_pane_cp02

0xddbb,	// (0x0004098a) popup_call2_audio_out_window_g1_ParamLimits

0xddbb,	// (0x0004098a) popup_call2_audio_out_window_g1

0xdde7,	// (0x000409b6) popup_call2_audio_out_window_g2_ParamLimits

0xdde7,	// (0x000409b6) popup_call2_audio_out_window_g2

0xde0f,	// (0x000409de) popup_call2_audio_out_window_g3_ParamLimits

0xde0f,	// (0x000409de) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x00042129) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x00042129) popup_call2_audio_out_window_g

0xde4a,	// (0x00040a19) popup_call2_audio_out_window_t1_ParamLimits

0xde4a,	// (0x00040a19) popup_call2_audio_out_window_t1

0xdea9,	// (0x00040a78) popup_call2_audio_out_window_t2_ParamLimits

0xdea9,	// (0x00040a78) popup_call2_audio_out_window_t2

0xdefd,	// (0x00040acc) popup_call2_audio_out_window_t3_ParamLimits

0xdefd,	// (0x00040acc) popup_call2_audio_out_window_t3

0xdf13,	// (0x00040ae2) popup_call2_audio_out_window_t4_ParamLimits

0xdf13,	// (0x00040ae2) popup_call2_audio_out_window_t4

0xdf29,	// (0x00040af8) popup_call2_audio_out_window_t5_ParamLimits

0xdf29,	// (0x00040af8) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00042132) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00042132) popup_call2_audio_out_window_t

0xdf8d,	// (0x00040b5c) bg_popup_call2_in_pane_ParamLimits

0xdf8d,	// (0x00040b5c) bg_popup_call2_in_pane

0xdfe9,	// (0x00040bb8) popup_call2_audio_in_window_g1_ParamLimits

0xdfe9,	// (0x00040bb8) popup_call2_audio_in_window_g1

0xe021,	// (0x00040bf0) popup_call2_audio_in_window_g2_ParamLimits

0xe021,	// (0x00040bf0) popup_call2_audio_in_window_g2

0xe059,	// (0x00040c28) popup_call2_audio_in_window_g3_ParamLimits

0xe059,	// (0x00040c28) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0004213f) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0004213f) popup_call2_audio_in_window_g

0xe0b1,	// (0x00040c80) popup_call2_audio_in_window_t1_ParamLimits

0xe0b1,	// (0x00040c80) popup_call2_audio_in_window_t1

0xe131,	// (0x00040d00) popup_call2_audio_in_window_t2_ParamLimits

0xe131,	// (0x00040d00) popup_call2_audio_in_window_t2

0xe1b1,	// (0x00040d80) popup_call2_audio_in_window_t3_ParamLimits

0xe1b1,	// (0x00040d80) popup_call2_audio_in_window_t3

0xe1cb,	// (0x00040d9a) popup_call2_audio_in_window_t4_ParamLimits

0xe1cb,	// (0x00040d9a) popup_call2_audio_in_window_t4

0xe1dd,	// (0x00040dac) popup_call2_audio_in_window_t5_ParamLimits

0xe1dd,	// (0x00040dac) popup_call2_audio_in_window_t5

0xe1f2,	// (0x00040dc1) popup_call2_audio_in_window_t6_ParamLimits

0xe1f2,	// (0x00040dc1) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x00042148) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x00042148) popup_call2_audio_in_window_t

0xc430,	// (0x0003efff) bg_popup_call2_in_pane_g1

0xe309,	// (0x00040ed8) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x000421b0) popup_cale_lunar_info_window_t

0xc438,	// (0x0003f007) bg_popup_call2_rect_pane_ParamLimits

0xc438,	// (0x0003f007) bg_popup_call2_rect_pane

0xc1dd,	// (0x0003edac) call2_cli_visual_graphic_pane

0xc1dd,	// (0x0003edac) call2_cli_visual_text_pane

0x7766,	// (0x0003a335) smil_status_volume_pane_g3

0x0002,

0xc560,	// (0x0003f12f) call2_cli_visual_graphic_pane_g1

0xc560,	// (0x0003f12f) call2_cli_visual_graphic_pane_g2

0xc560,	// (0x0003f12f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x00042155) call2_cli_visual_graphic_pane_g

0xe207,	// (0x00040dd6) bg_popup_call2_rect_pane_g1

0xc5ec,	// (0x0003f1bb) bg_popup_call2_rect_pane_g2

0xe20f,	// (0x00040dde) bg_popup_call2_rect_pane_g3

0xe217,	// (0x00040de6) bg_popup_call2_rect_pane_g4

0xe21f,	// (0x00040dee) bg_popup_call2_rect_pane_g5

0xe227,	// (0x00040df6) bg_popup_call2_rect_pane_g6

0xe22f,	// (0x00040dfe) bg_popup_call2_rect_pane_g7

0xe237,	// (0x00040e06) bg_popup_call2_rect_pane_g8

0xe23f,	// (0x00040e0e) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0004215c) bg_popup_call2_rect_pane_g

0xe247,	// (0x00040e16) bg_popup_call2_bubble_pane_g1

0xe24f,	// (0x00040e1e) bg_popup_call2_bubble_pane_g2

0xe257,	// (0x00040e26) bg_popup_call2_bubble_pane_g3

0xe25f,	// (0x00040e2e) bg_popup_call2_bubble_pane_g4

0xe267,	// (0x00040e36) bg_popup_call2_bubble_pane_g5

0xe26f,	// (0x00040e3e) bg_popup_call2_bubble_pane_g6

0xe277,	// (0x00040e46) bg_popup_call2_bubble_pane_g7

0xe27f,	// (0x00040e4e) bg_popup_call2_bubble_pane_g8

0xe287,	// (0x00040e56) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0004216f) bg_popup_call2_bubble_pane_g

0x4e5d,	// (0x00037a2c) aid_cale_week_size_cell_pane

0x5379,	// (0x00037f48) aid_cams_cif_uncrop_pane_ParamLimits

0x5379,	// (0x00037f48) aid_cams_cif_uncrop_pane

0x54d4,	// (0x000380a3) aid_cams_size_cell_ParamLimits

0x54d4,	// (0x000380a3) aid_cams_size_cell

0x54e0,	// (0x000380af) grid_cams_pane_ParamLimits

0x54ee,	// (0x000380bd) linegrid_cams_pane_ParamLimits

0x55c5,	// (0x00038194) call_video_pane_t1

0x55e6,	// (0x000381b5) call_video_pane_t2

0x0001,

0xf28d,	// (0x00041e5c) call_video_pane_t

0x5b1d,	// (0x000386ec) aid_cale_month_size_cell_pane_ParamLimits

0x5b1d,	// (0x000386ec) aid_cale_month_size_cell_pane

0xf62a,	// (0x000421f9) smil_status_volume_pane_g

0x7773,	// (0x0003a342) volume_smil_pane_ParamLimits

0x45d0,	// (0x0003719f) aid_popup2_width_pane

0x4d65,	// (0x00037934) cell_qdial_pane_g4_ParamLimits

0x4d65,	// (0x00037934) cell_qdial_pane_g4

0x6740,	// (0x0003930f) aid_blid_cardinal_pane_ParamLimits

0x6750,	// (0x0003931f) aid_blid_destination_pane_ParamLimits

0x6750,	// (0x0003931f) aid_blid_destination_pane

0xc438,	// (0x0003f007) bg_popup_call_poc_act_pane_ParamLimits

0xc438,	// (0x0003f007) bg_popup_call_poc_act_pane

0xc438,	// (0x0003f007) bg_popup_call_poc_inact_pane_ParamLimits

0xc438,	// (0x0003f007) bg_popup_call_poc_inact_pane

0xe28f,	// (0x00040e5e) bg_popup_call_poc_act_pane_g1

0xe297,	// (0x00040e66) bg_popup_call_poc_act_pane_g2

0xe29f,	// (0x00040e6e) bg_popup_call_poc_act_pane_g3

0xe25f,	// (0x00040e2e) bg_popup_call_poc_act_pane_g4

0xe267,	// (0x00040e36) bg_popup_call_poc_act_pane_g5

0xe2a7,	// (0x00040e76) bg_popup_call_poc_act_pane_g6

0xe277,	// (0x00040e46) bg_popup_call_poc_act_pane_g7

0xe2af,	// (0x00040e7e) bg_popup_call_poc_act_pane_g8

0xc1dd,	// (0x0003edac) main_usb_pane

0xe408,	// (0x00040fd7) popup_cale_lunar_info_window

0x5911,	// (0x000384e0) im_reading_pane_t1_ParamLimits

0xc7a9,	// (0x0003f378) list_im_pane_ParamLimits

0xc7ba,	// (0x0003f389) scroll_pane_cp07_ParamLimits

0xc1dd,	// (0x0003edac) grid_highlight_pane_cp012

0xc438,	// (0x0003f007) mup_scale_pane_ParamLimits

0xcd09,	// (0x0003f8d8) main_usb_pane_g1_ParamLimits

0xcd09,	// (0x0003f8d8) main_usb_pane_g1

0x7315,	// (0x00039ee4) main_usb_pane_g2_ParamLimits

0x7315,	// (0x00039ee4) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x00042199) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x00042199) main_usb_pane_g

0x7321,	// (0x00039ef0) main_usb_pane_t1_ParamLimits

0x7321,	// (0x00039ef0) main_usb_pane_t1

0x7333,	// (0x00039f02) main_usb_pane_t2_ParamLimits

0x7333,	// (0x00039f02) main_usb_pane_t2

0x7345,	// (0x00039f14) main_usb_pane_t3_ParamLimits

0x7345,	// (0x00039f14) main_usb_pane_t3

0x7357,	// (0x00039f26) main_usb_pane_t4_ParamLimits

0x7357,	// (0x00039f26) main_usb_pane_t4

0x7369,	// (0x00039f38) main_usb_pane_t5_ParamLimits

0x7369,	// (0x00039f38) main_usb_pane_t5

0x737b,	// (0x00039f4a) main_usb_pane_t6_ParamLimits

0x737b,	// (0x00039f4a) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0004219e) main_usb_pane_t_ParamLimits

0x66e6,	// (0x000392b5) aid_text_placing

0x66f2,	// (0x000392c1) main_location2_pane_t1_ParamLimits

0x6706,	// (0x000392d5) main_location2_pane_t2_ParamLimits

0x671a,	// (0x000392e9) main_location2_pane_t3_ParamLimits

0x672e,	// (0x000392fd) main_location2_pane_t4_ParamLimits

0x672e,	// (0x000392fd) main_location2_pane_t4

0xf3ee,	// (0x00041fbd) main_location2_pane_t_ParamLimits

0xc474,	// (0x0003f043) find_pinb_pane_g2_ParamLimits

0xc474,	// (0x0003f043) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00041d0b) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00041d0b) find_pinb_pane_g

0xc480,	// (0x0003f04f) find_pinb_pane_t1_ParamLimits

0xc492,	// (0x0003f061) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00041d10) find_pinb_pane_t_ParamLimits

0xc1dd,	// (0x0003edac) main_call3_pane

0x5f29,	// (0x00038af8) cale_month_day_heading_pane_t1_ParamLimits

0x5f87,	// (0x00038b56) cale_month_day_heading_pane_t2_ParamLimits

0x5fec,	// (0x00038bbb) cale_month_day_heading_pane_t3_ParamLimits

0x6051,	// (0x00038c20) cale_month_day_heading_pane_t4_ParamLimits

0x60b6,	// (0x00038c85) cale_month_day_heading_pane_t5_ParamLimits

0x611b,	// (0x00038cea) cale_month_day_heading_pane_t6_ParamLimits

0x6180,	// (0x00038d4f) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x00041e94) cale_month_day_heading_pane_t_ParamLimits

0xc9fa,	// (0x0003f5c9) smil_status_volume_pane

0x6ed9,	// (0x00039aa8) postcard_address_pane_ParamLimits

0x6ed9,	// (0x00039aa8) postcard_address_pane

0x6ee5,	// (0x00039ab4) postcard_message_pane_ParamLimits

0x6ee5,	// (0x00039ab4) postcard_message_pane

0x72e0,	// (0x00039eaf) call2_cli_visual_pane_t1_ParamLimits

0x72e0,	// (0x00039eaf) call2_cli_visual_pane_t1

0x78ca,	// (0x0003a499) postcard_message_pane_t1_ParamLimits

0x78ca,	// (0x0003a499) postcard_message_pane_t1

0x78b3,	// (0x0003a482) postcard_address_pane_t1_ParamLimits

0x78b3,	// (0x0003a482) postcard_address_pane_t1

0x78a4,	// (0x0003a473) popup_call3_audio_in_window_ParamLimits

0x78a4,	// (0x0003a473) popup_call3_audio_in_window

0x7788,	// (0x0003a357) bg_popup_call3_in_pane_ParamLimits

0x7788,	// (0x0003a357) bg_popup_call3_in_pane

0x77ea,	// (0x0003a3b9) popup_call3_audio_in_window_g1_ParamLimits

0x77ea,	// (0x0003a3b9) popup_call3_audio_in_window_g1

0x7802,	// (0x0003a3d1) popup_call3_audio_in_window_g2_ParamLimits

0x7802,	// (0x0003a3d1) popup_call3_audio_in_window_g2

0x781a,	// (0x0003a3e9) popup_call3_audio_in_window_g3_ParamLimits

0x781a,	// (0x0003a3e9) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00042200) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00042200) popup_call3_audio_in_window_g

0x7842,	// (0x0003a411) popup_call3_audio_in_window_t1_ParamLimits

0x7842,	// (0x0003a411) popup_call3_audio_in_window_t1

0x786a,	// (0x0003a439) popup_call3_audio_in_window_t2_ParamLimits

0x786a,	// (0x0003a439) popup_call3_audio_in_window_t2

0x7892,	// (0x0003a461) popup_call3_audio_in_window_t3_ParamLimits

0x7892,	// (0x0003a461) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x00042209) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x00042209) popup_call3_audio_in_window_t

0xcfec,	// (0x0003fbbb) bg_popup_call3_rect_pane

0xe207,	// (0x00040dd6) bg_popup_call3_rect_pane_g1

0xc5ec,	// (0x0003f1bb) bg_popup_call3_rect_pane_g2

0xe20f,	// (0x00040dde) bg_popup_call3_rect_pane_g3

0xe217,	// (0x00040de6) bg_popup_call3_rect_pane_g4

0xe21f,	// (0x00040dee) bg_popup_call3_rect_pane_g5

0xe227,	// (0x00040df6) bg_popup_call3_rect_pane_g6

0xe22f,	// (0x00040dfe) bg_popup_call3_rect_pane_g7

0x6b56,	// (0x00039725) mup_visualizer_osc_pane

0xd0ab,	// (0x0003fc7a) mup_visualizer_spec_pane

0x77a8,	// (0x0003a377) call3_video_qcif_pane_ParamLimits

0x77a8,	// (0x0003a377) call3_video_qcif_pane

0x77ba,	// (0x0003a389) call3_video_qcif_uncrop_pane_ParamLimits

0x77ba,	// (0x0003a389) call3_video_qcif_uncrop_pane

0x77c8,	// (0x0003a397) call3_video_subqcif_pane_ParamLimits

0x77c8,	// (0x0003a397) call3_video_subqcif_pane

0x77da,	// (0x0003a3a9) call3_video_subqcif_uncrop_pane_ParamLimits

0x77da,	// (0x0003a3a9) call3_video_subqcif_uncrop_pane

0x7832,	// (0x0003a401) popup_call3_audio_in_window_g4_ParamLimits

0x7832,	// (0x0003a401) popup_call3_audio_in_window_g4

0x7755,	// (0x0003a324) mup_spec_half_pane

0x775e,	// (0x0003a32d) mup_spec_half_pane_cp

0xe49f,	// (0x0004106e) mup_osc_middle_pane

0xe4a8,	// (0x00041077) mup_visualizer_osc_pane_g1

0x7736,	// (0x0003a305) mup_spec_bar_pane_ParamLimits

0x7736,	// (0x0003a305) mup_spec_bar_pane

0xe48c,	// (0x0004105b) mup_spec_bar_pane_g1

0xe496,	// (0x00041065) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x000421f4) mup_spec_bar_pane_g

0x4e5d,	// (0x00037a2c) aid_cale_week_size_cell_pane_ParamLimits

0x4e70,	// (0x00037a3f) bg_cale_heading_pane_ParamLimits

0xc620,	// (0x0003f1ef) bg_cale_pane_cp01_ParamLimits

0x4e8c,	// (0x00037a5b) cale_week_corner_pane_ParamLimits

0x4ea2,	// (0x00037a71) cale_week_day_heading_pane_ParamLimits

0x4ebe,	// (0x00037a8d) cale_week_scroll_pane_g1_ParamLimits

0x4ed7,	// (0x00037aa6) cale_week_scroll_pane_g2_ParamLimits

0x4ee8,	// (0x00037ab7) cale_week_scroll_pane_g3_ParamLimits

0x4ef9,	// (0x00037ac8) cale_week_scroll_pane_g4_ParamLimits

0x4f0a,	// (0x00037ad9) cale_week_scroll_pane_g5_ParamLimits

0x4f1b,	// (0x00037aea) cale_week_scroll_pane_g6_ParamLimits

0x4f2c,	// (0x00037afb) cale_week_scroll_pane_g7_ParamLimits

0x4f3f,	// (0x00037b0e) cale_week_scroll_pane_g8_ParamLimits

0x4f52,	// (0x00037b21) cale_week_scroll_pane_g9_ParamLimits

0x4f63,	// (0x00037b32) cale_week_scroll_pane_g10_ParamLimits

0x4f74,	// (0x00037b43) cale_week_scroll_pane_g11_ParamLimits

0x4f85,	// (0x00037b54) cale_week_scroll_pane_g12_ParamLimits

0x4f96,	// (0x00037b65) cale_week_scroll_pane_g13_ParamLimits

0x4faf,	// (0x00037b7e) cale_week_scroll_pane_g14_ParamLimits

0x4fc8,	// (0x00037b97) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00041d9c) cale_week_scroll_pane_g_ParamLimits

0x4fe1,	// (0x00037bb0) cale_week_time_pane_ParamLimits

0x4ff4,	// (0x00037bc3) grid_cale_week_pane_ParamLimits

0xc639,	// (0x0003f208) listscroll_cale_week_pane_t1

0x5011,	// (0x00037be0) scroll_pane_cp08_ParamLimits

0x5b6e,	// (0x0003873d) cale_month_corner_pane_ParamLimits

0xc9d0,	// (0x0003f59f) cale_month_pane_t1

0x5ed8,	// (0x00038aa7) cale_month_week_pane_ParamLimits

0xcd09,	// (0x0003f8d8) popup_call_status_window_g1_ParamLimits

0x6509,	// (0x000390d8) popup_call_status_window_g2_ParamLimits

0x6515,	// (0x000390e4) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x00041f44) popup_call_status_window_g_ParamLimits

0xcd70,	// (0x0003f93f) aid_call2_pane

0x3675,	// (0x00036244) msg_header_pane_g1

0x6ed9,	// (0x00039aa8) postcard_address2_pane_ParamLimits

0x6ed9,	// (0x00039aa8) postcard_address2_pane

0x6ee5,	// (0x00039ab4) postcard_message2_pane_ParamLimits

0x6ee5,	// (0x00039ab4) postcard_message2_pane

0x76ce,	// (0x0003a29d) message2_row_pane_ParamLimits

0x76ce,	// (0x0003a29d) message2_row_pane

0x76e9,	// (0x0003a2b8) address2_row_pane_ParamLimits

0x76e9,	// (0x0003a2b8) address2_row_pane

0xe45a,	// (0x00041029) postcard_message2_row_pane_g1

0xe462,	// (0x00041031) postcard_message2_row_pane_t1

0xe45a,	// (0x00041029) address2_row_pane_g1

0xe462,	// (0x00041031) address2_row_pane_t1

0x5245,	// (0x00037e14) aid_size_cell_vorec

0xc1dd,	// (0x0003edac) main_rss_pane

0x76fc,	// (0x0003a2cb) rss_list_single_pane_ParamLimits

0x76fc,	// (0x0003a2cb) rss_list_single_pane

0xe470,	// (0x0004103f) rss_list_single_pane_t1

0xe47e,	// (0x0004104d) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x000421ef) rss_list_single_pane_t

0xc1dd,	// (0x0003edac) main_camera2_pane

0xc1dd,	// (0x0003edac) main_video2_pane

0x792e,	// (0x0003a4fd) cams_zoom_pane_cp2_ParamLimits

0x792e,	// (0x0003a4fd) cams_zoom_pane_cp2

0x793a,	// (0x0003a509) image2_vga_pane_ParamLimits

0x793a,	// (0x0003a509) image2_vga_pane

0x7949,	// (0x0003a518) main_camera2_pane_g1_ParamLimits

0x7949,	// (0x0003a518) main_camera2_pane_g1

0x7955,	// (0x0003a524) main_camera2_pane_g2_ParamLimits

0x7955,	// (0x0003a524) main_camera2_pane_g2

0x7961,	// (0x0003a530) main_camera2_pane_g3_ParamLimits

0x7961,	// (0x0003a530) main_camera2_pane_g3

0x796d,	// (0x0003a53c) main_camera2_pane_g4_ParamLimits

0x796d,	// (0x0003a53c) main_camera2_pane_g4

0x7979,	// (0x0003a548) main_camera2_pane_g5_ParamLimits

0x7979,	// (0x0003a548) main_camera2_pane_g5

0x7985,	// (0x0003a554) main_camera2_pane_g6_ParamLimits

0x7985,	// (0x0003a554) main_camera2_pane_g6

0x7991,	// (0x0003a560) main_camera2_pane_g7_ParamLimits

0x7991,	// (0x0003a560) main_camera2_pane_g7

0x799d,	// (0x0003a56c) main_camera2_pane_g8_ParamLimits

0x799d,	// (0x0003a56c) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00042210) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00042210) main_camera2_pane_g

0x79b5,	// (0x0003a584) main_camera2_pane_t1_ParamLimits

0x79b5,	// (0x0003a584) main_camera2_pane_t1

0x79c7,	// (0x0003a596) main_camera2_pane_t2_ParamLimits

0x79c7,	// (0x0003a596) main_camera2_pane_t2

0x79d9,	// (0x0003a5a8) main_camera2_pane_t3_ParamLimits

0x79d9,	// (0x0003a5a8) main_camera2_pane_t3

0x79eb,	// (0x0003a5ba) main_camera2_pane_t4_ParamLimits

0x79eb,	// (0x0003a5ba) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00042223) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00042223) main_camera2_pane_t

0x7a4d,	// (0x0003a61c) cams_zoom_pane_cp4_ParamLimits

0x7a4d,	// (0x0003a61c) cams_zoom_pane_cp4

0x7a5d,	// (0x0003a62c) image2_cif_pane_ParamLimits

0x7a5d,	// (0x0003a62c) image2_cif_pane

0x7a72,	// (0x0003a641) image2_subqcif_pane_ParamLimits

0x7a72,	// (0x0003a641) image2_subqcif_pane

0x7a81,	// (0x0003a650) main_video2_pane_g1_ParamLimits

0x7a81,	// (0x0003a650) main_video2_pane_g1

0x7a93,	// (0x0003a662) main_video2_pane_g2_ParamLimits

0x7a93,	// (0x0003a662) main_video2_pane_g2

0x7aa3,	// (0x0003a672) main_video2_pane_g3_ParamLimits

0x7aa3,	// (0x0003a672) main_video2_pane_g3

0x7ab3,	// (0x0003a682) main_video2_pane_g4_ParamLimits

0x7ab3,	// (0x0003a682) main_video2_pane_g4

0x7ac3,	// (0x0003a692) main_video2_pane_g5_ParamLimits

0x7ac3,	// (0x0003a692) main_video2_pane_g5

0x7ad3,	// (0x0003a6a2) main_video2_pane_g6_ParamLimits

0x7ad3,	// (0x0003a6a2) main_video2_pane_g6

0x0005,

0xf663,	// (0x00042232) main_video2_pane_g_ParamLimits

0xf663,	// (0x00042232) main_video2_pane_g

0x7ae5,	// (0x0003a6b4) main_video2_pane_t1_ParamLimits

0x7ae5,	// (0x0003a6b4) main_video2_pane_t1

0x7aff,	// (0x0003a6ce) main_video2_pane_t2_ParamLimits

0x7aff,	// (0x0003a6ce) main_video2_pane_t2

0x7b25,	// (0x0003a6f4) main_video2_pane_t3_ParamLimits

0x7b25,	// (0x0003a6f4) main_video2_pane_t3

0x0002,

0xf670,	// (0x0004223f) main_video2_pane_t_ParamLimits

0xf670,	// (0x0004223f) main_video2_pane_t

0x7432,	// (0x0003a001) call_muted_g2

0x0001,

0xf612,	// (0x000421e1) call_muted_g

0xc1dd,	// (0x0003edac) main_mup2_pane

0xe4df,	// (0x000410ae) main_mup2_pane_g1_ParamLimits

0xe4df,	// (0x000410ae) main_mup2_pane_g1

0x7b4b,	// (0x0003a71a) main_mup2_pane_g2_ParamLimits

0x7b4b,	// (0x0003a71a) main_mup2_pane_g2

0x7dcd,	// (0x0003a99c) main_mup_pane_g13_cp1

0x7dd5,	// (0x0003a9a4) mup_volume_pane_cp1

0x7b6b,	// (0x0003a73a) main_mup2_pane_g4_ParamLimits

0x7b6b,	// (0x0003a73a) main_mup2_pane_g4

0x7b80,	// (0x0003a74f) main_mup2_pane_g5_ParamLimits

0x7b80,	// (0x0003a74f) main_mup2_pane_g5

0x7b95,	// (0x0003a764) main_mup2_pane_g6_ParamLimits

0x7b95,	// (0x0003a764) main_mup2_pane_g6

0x7baa,	// (0x0003a779) main_mup2_pane_g7_ParamLimits

0x7baa,	// (0x0003a779) main_mup2_pane_g7

0x0006,

0xf677,	// (0x00042246) main_mup2_pane_g_ParamLimits

0xf677,	// (0x00042246) main_mup2_pane_g

0x7bc6,	// (0x0003a795) main_mup2_pane_t1_ParamLimits

0x7bc6,	// (0x0003a795) main_mup2_pane_t1

0x7bdd,	// (0x0003a7ac) main_mup2_pane_t2_ParamLimits

0x7bdd,	// (0x0003a7ac) main_mup2_pane_t2

0x7bf4,	// (0x0003a7c3) main_mup2_pane_t3_ParamLimits

0x7bf4,	// (0x0003a7c3) main_mup2_pane_t3

0x7c0b,	// (0x0003a7da) main_mup2_pane_t4_ParamLimits

0x7c0b,	// (0x0003a7da) main_mup2_pane_t4

0x7c25,	// (0x0003a7f4) main_mup2_pane_t5_ParamLimits

0x7c25,	// (0x0003a7f4) main_mup2_pane_t5

0x7c3f,	// (0x0003a80e) main_mup2_pane_t6_ParamLimits

0x7c3f,	// (0x0003a80e) main_mup2_pane_t6

0x0005,

0xf686,	// (0x00042255) main_mup2_pane_t_ParamLimits

0xf686,	// (0x00042255) main_mup2_pane_t

0x7c77,	// (0x0003a846) mup2_visualizer_pane_ParamLimits

0x7c77,	// (0x0003a846) mup2_visualizer_pane

0x7cad,	// (0x0003a87c) mup_progress_pane_cp_ParamLimits

0x7cad,	// (0x0003a87c) mup_progress_pane_cp

0x7db8,	// (0x0003a987) mup_volume_pane_cp_ParamLimits

0x7db8,	// (0x0003a987) mup_volume_pane_cp

0x7cc4,	// (0x0003a893) mup2_visualizer_pane_g1_ParamLimits

0x7cc4,	// (0x0003a893) mup2_visualizer_pane_g1

0xe4eb,	// (0x000410ba) mup2_visualizer_pane_g2_ParamLimits

0xe4eb,	// (0x000410ba) mup2_visualizer_pane_g2

0x7cd9,	// (0x0003a8a8) mup2_visualizer_pane_g3_ParamLimits

0x7cd9,	// (0x0003a8a8) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x00042262) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x00042262) mup2_visualizer_pane_g

0xd2d2,	// (0x0003fea1) aid_size_cell_fmradio

0x7548,	// (0x0003a117) aid_height_parent_landcape

0xc838,	// (0x0003f407) wml_content_pane_cp

0xc840,	// (0x0003f40f) wml_tabs_pane

0xc849,	// (0x0003f418) popup_wml_miniature_window

0xc851,	// (0x0003f420) scroll_pane_cp021

0xc865,	// (0x0003f434) wml_content_pane_comp8

0xc1dd,	// (0x0003edac) bg_popup_sub_pane_cp05

0xe509,	// (0x000410d8) popup_wml_miniature_window_g1

0xe511,	// (0x000410e0) wml_miniature_view_pane

0x7ce7,	// (0x0003a8b6) aid_size_wml_view

0x7cef,	// (0x0003a8be) wml_miniature_view_pane_g1

0x7cf8,	// (0x0003a8c7) wml_miniature_view_pane_g2

0x7d01,	// (0x0003a8d0) wml_miniature_view_pane_g3

0x7d09,	// (0x0003a8d8) wml_miniature_view_pane_g4

0x7d11,	// (0x0003a8e0) wml_miniature_view_pane_g5

0x7d19,	// (0x0003a8e8) wml_miniature_view_pane_g6

0x7d21,	// (0x0003a8f0) wml_miniature_view_pane_g7

0x7d29,	// (0x0003a8f8) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x00042269) wml_miniature_view_pane_g

0xe4df,	// (0x000410ae) background_graphic_ParamLimits

0xe4df,	// (0x000410ae) background_graphic

0xe519,	// (0x000410e8) wml_tabs_2_pane

0xe522,	// (0x000410f1) wml_tabs_3_pane_ParamLimits

0xe522,	// (0x000410f1) wml_tabs_3_pane

0xe534,	// (0x00041103) wml_tabs_4_pane_ParamLimits

0xe534,	// (0x00041103) wml_tabs_4_pane

0xe54a,	// (0x00041119) wml_tabs_5_pane_ParamLimits

0xe54a,	// (0x00041119) wml_tabs_5_pane

0xe564,	// (0x00041133) wml_tabs_pane_g2_ParamLimits

0xe564,	// (0x00041133) wml_tabs_pane_g2

0xe578,	// (0x00041147) wml_tabs_pane_g3_ParamLimits

0xe578,	// (0x00041147) wml_tabs_pane_g3

0x7d31,	// (0x0003a900) wml_tabs_2_active_pane_ParamLimits

0x7d31,	// (0x0003a900) wml_tabs_2_active_pane

0x7d41,	// (0x0003a910) wml_tabs_2_passive_pane_ParamLimits

0x7d41,	// (0x0003a910) wml_tabs_2_passive_pane

0x7d51,	// (0x0003a920) wml_tabs_3_active_pane_cp_ParamLimits

0x7d51,	// (0x0003a920) wml_tabs_3_active_pane_cp

0x7d62,	// (0x0003a931) wml_tabs_3_passive_pane_ParamLimits

0x7d62,	// (0x0003a931) wml_tabs_3_passive_pane

0x7d73,	// (0x0003a942) wml_tabs_3_passive_pane_cp_ParamLimits

0x7d73,	// (0x0003a942) wml_tabs_3_passive_pane_cp

0x7d84,	// (0x0003a953) tabs_4_active_pane

0x7d8c,	// (0x0003a95b) tabs_4_passive_pane

0x7d94,	// (0x0003a963) tabs_4_passive_pane_cp

0x7d9c,	// (0x0003a96b) tabs_4_passive_pane_cp2

0x730d,	// (0x00039edc) aid_height_text

0x6b23,	// (0x000396f2) mup_volume_cont_pane_ParamLimits

0x6b23,	// (0x000396f2) mup_volume_cont_pane

0x49a1,	// (0x00037570) aid_size_cell_pinb

0x49ab,	// (0x0003757a) aid_size_list_pinb

0x7c96,	// (0x0003a865) mup2_volume_cont_pane_ParamLimits

0x7c96,	// (0x0003a865) mup2_volume_cont_pane

0x7da4,	// (0x0003a973) mup2_volume_cont_pane_g1_ParamLimits

0x7da4,	// (0x0003a973) mup2_volume_cont_pane_g1

0x45dc,	// (0x000371ab) aid_size_cell_touch_ParamLimits

0x45dc,	// (0x000371ab) aid_size_cell_touch

0x4887,	// (0x00037456) touch_pane_ParamLimits

0x4887,	// (0x00037456) touch_pane

0x45be,	// (0x0003718d) main_rss2_pane

0xe595,	// (0x00041164) listscroll_rss2_pane

0xe59e,	// (0x0004116d) rss2_navigation_pane

0xe5a6,	// (0x00041175) list_rss2_pane

0xcea3,	// (0x0003fa72) scroll_pane_cp22

0xe5ae,	// (0x0004117d) rss2_navigation_pane_g1

0xe5b7,	// (0x00041186) rss2_navigation_pane_g2

0xe5bf,	// (0x0004118e) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0004227a) rss2_navigation_pane_g

0xe5c7,	// (0x00041196) rss2_navigation_pane_t1

0x7ddd,	// (0x0003a9ac) rss2_list_single_pane_ParamLimits

0x7ddd,	// (0x0003a9ac) rss2_list_single_pane

0xe5d5,	// (0x000411a4) rss2_list_single_pane_t2

0xe5e3,	// (0x000411b2) rss2_list_single_pane_t3_ParamLimits

0xe5e3,	// (0x000411b2) rss2_list_single_pane_t3

0xe600,	// (0x000411cf) rss2_list_single_pane_t4

0x6384,	// (0x00038f53) smil_status_pane_g1

0xd8c0,	// (0x0004048f) main_image2_pane_ParamLimits

0xd8c0,	// (0x0004048f) main_image2_pane

0x79a9,	// (0x0003a578) main_camera2_pane_g9_ParamLimits

0x79a9,	// (0x0003a578) main_camera2_pane_g9

0x79fd,	// (0x0003a5cc) main_camera2_pane_t5_ParamLimits

0x79fd,	// (0x0003a5cc) main_camera2_pane_t5

0x7a0f,	// (0x0003a5de) main_camera2_pane_t6_ParamLimits

0x7a0f,	// (0x0003a5de) main_camera2_pane_t6

0x7e0e,	// (0x0003a9dd) main_image2_pane_g1_ParamLimits

0x7e0e,	// (0x0003a9dd) main_image2_pane_g1

0x70ad,	// (0x00039c7c) smil2_video_pane_ParamLimits

0x70ad,	// (0x00039c7c) smil2_video_pane

0x340b,	// (0x00035fda) aid_zoom_text_primary_cp

0x482c,	// (0x000373fb) popup_preview_fixed_window

0xc7a1,	// (0x0003f370) im_reading_pane_g1

0x78f3,	// (0x0003a4c2) cams2_bc_adjust_pane_cp_ParamLimits

0x78f3,	// (0x0003a4c2) cams2_bc_adjust_pane_cp

0x7a3f,	// (0x0003a60e) cams2_bc_adjust_pane_ParamLimits

0x7a3f,	// (0x0003a60e) cams2_bc_adjust_pane

0x7e1a,	// (0x0003a9e9) cams2_bc_adjust_pane_g1

0x7e22,	// (0x0003a9f1) cams2_slider_pane

0x7e2b,	// (0x0003a9fa) cams2_slider_pane_g1

0x7e34,	// (0x0003aa03) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x00042281) cams2_slider_pane_g

0x4ab1,	// (0x00037680) calc_display_pane_ParamLimits

0x4acf,	// (0x0003769e) calc_paper_pane_ParamLimits

0x4aeb,	// (0x000376ba) grid_calc_pane_ParamLimits

0x6577,	// (0x00039146) popup_clock_digital_window_t1_ParamLimits

0xd26f,	// (0x0003fe3e) main_image_pane_t1

0x4a97,	// (0x00037666) aid_size_cell_calc_ParamLimits

0x4a97,	// (0x00037666) aid_size_cell_calc

0x757a,	// (0x0003a149) popup_blid_sat_info2_window_ParamLimits

0x757a,	// (0x0003a149) popup_blid_sat_info2_window

0xe616,	// (0x000411e5) aid_size_cell_blid

0xe61e,	// (0x000411ed) bg_popup_window_pane_cp07

0xe649,	// (0x00041218) grid_popup_blid_pane

0xe653,	// (0x00041222) heading_pane_cp05_ParamLimits

0xe653,	// (0x00041222) heading_pane_cp05

0xe71d,	// (0x000412ec) cell_popup_blid_pane_ParamLimits

0xe71d,	// (0x000412ec) cell_popup_blid_pane

0xe741,	// (0x00041310) cell_popup_blid_pane_g1

0xe749,	// (0x00041318) cell_popup_blid_pane_t1

0x7c5c,	// (0x0003a82b) mup2_indicator_pane_ParamLimits

0x7c5c,	// (0x0003a82b) mup2_indicator_pane

0xcfec,	// (0x0003fbbb) mup2_visualizer_osc_pane

0xe4f7,	// (0x000410c6) mup2_visualizer_spec_pane_ParamLimits

0xe4f7,	// (0x000410c6) mup2_visualizer_spec_pane

0x7e4e,	// (0x0003aa1d) mup2_spec_half_pane

0x7e57,	// (0x0003aa26) mup2_spec_half_pane_cp

0x7e61,	// (0x0003aa30) mup2_spec_bar_pane_ParamLimits

0x7e61,	// (0x0003aa30) mup2_spec_bar_pane

0xe48c,	// (0x0004105b) mup2_spec_bar_pane_g1

0xe496,	// (0x00041065) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x000421f4) mup2_spec_bar_pane_g

0x7e80,	// (0x0003aa4f) mup2_osc_middle_pane

0xe4a8,	// (0x00041077) mup2_visualizer_osc_pane_g1

0xbdea,	// (0x0003e9b9) popup_number_entry_window_t1_ParamLimits

0xbdfd,	// (0x0003e9cc) popup_number_entry_window_t2_ParamLimits

0xbe0f,	// (0x0003e9de) popup_number_entry_window_t3_ParamLimits

0x48de,	// (0x000374ad) popup_number_entry_window_t5_ParamLimits

0x48de,	// (0x000374ad) popup_number_entry_window_t5

0xf0e7,	// (0x00041cb6) popup_number_entry_window_t_ParamLimits

0xbe21,	// (0x0003e9f0) text_title_cp2_ParamLimits

0x6da1,	// (0x00039970) aid_hotspot_pointer_text2_pane

0x6e3b,	// (0x00039a0a) main_viewer_pane_g9_ParamLimits

0x6e3b,	// (0x00039a0a) main_viewer_pane_g9

0xc9d0,	// (0x0003f59f) cale_month_pane_t1_ParamLimits

0xca0d,	// (0x0003f5dc) bg_cale_pane_ParamLimits

0xca25,	// (0x0003f5f4) list_cale_pane_ParamLimits

0xc639,	// (0x0003f208) listscroll_cale_day_pane_t1

0xca36,	// (0x0003f605) scroll_pane_cp09_ParamLimits

0x6b5e,	// (0x0003972d) main_mup_eq_pane_t1_ParamLimits

0x6b5e,	// (0x0003972d) main_mup_eq_pane_t1

0x6b78,	// (0x00039747) main_mup_eq_pane_t2_ParamLimits

0x6b78,	// (0x00039747) main_mup_eq_pane_t2

0x6b92,	// (0x00039761) main_mup_eq_pane_t3_ParamLimits

0x6b92,	// (0x00039761) main_mup_eq_pane_t3

0x6baa,	// (0x00039779) main_mup_eq_pane_t4_ParamLimits

0x6baa,	// (0x00039779) main_mup_eq_pane_t4

0x6bc2,	// (0x00039791) main_mup_eq_pane_t5_ParamLimits

0x6bc2,	// (0x00039791) main_mup_eq_pane_t5

0x6bda,	// (0x000397a9) main_mup_eq_pane_t6_ParamLimits

0x6bda,	// (0x000397a9) main_mup_eq_pane_t6

0x6bee,	// (0x000397bd) main_mup_eq_pane_t7_ParamLimits

0x6bee,	// (0x000397bd) main_mup_eq_pane_t7

0x6c02,	// (0x000397d1) main_mup_eq_pane_t8_ParamLimits

0x6c02,	// (0x000397d1) main_mup_eq_pane_t8

0x6c18,	// (0x000397e7) main_mup_eq_pane_t9_ParamLimits

0x6c18,	// (0x000397e7) main_mup_eq_pane_t9

0x6c30,	// (0x000397ff) main_mup_eq_pane_t10_ParamLimits

0x6c30,	// (0x000397ff) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x00042043) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x00042043) main_mup_eq_pane_t

0x6ced,	// (0x000398bc) mup_equalizer_pane_cp5_ParamLimits

0x6d03,	// (0x000398d2) mup_equalizer_pane_cp6_ParamLimits

0x6d1b,	// (0x000398ea) mup_equalizer_pane_cp7_ParamLimits

0x45be,	// (0x0003718d) main_gallery_pane

0xe4b1,	// (0x00041080) smil2_volume_pane

0xe4b9,	// (0x00041088) smil_status_volume_pane_g1_ParamLimits

0xe4cc,	// (0x0004109b) smil_status_volume_pane_g2_ParamLimits

0x7766,	// (0x0003a335) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x000421f9) smil_status_volume_pane_g_ParamLimits

0xe61e,	// (0x000411ed) bg_popup_window_pane_cp07_ParamLimits

0xe634,	// (0x00041203) blid_firmament_pane

0x7e89,	// (0x0003aa58) aid_size_cell_gallery_ParamLimits

0x7e89,	// (0x0003aa58) aid_size_cell_gallery

0x7e97,	// (0x0003aa66) grid_gallery_pane_ParamLimits

0x7e97,	// (0x0003aa66) grid_gallery_pane

0x7ea7,	// (0x0003aa76) cell_gallery_pane_ParamLimits

0x7ea7,	// (0x0003aa76) cell_gallery_pane

0xe757,	// (0x00041326) bg_cell_gallery_focus_pane_ParamLimits

0xe757,	// (0x00041326) bg_cell_gallery_focus_pane

0xe769,	// (0x00041338) cell_gallery_pane_g1_ParamLimits

0xe769,	// (0x00041338) cell_gallery_pane_g1

0x7ef5,	// (0x0003aac4) cell_gallery_pane_g2_ParamLimits

0x7ef5,	// (0x0003aac4) cell_gallery_pane_g2

0x7f02,	// (0x0003aad1) cell_gallery_pane_g3_ParamLimits

0x7f02,	// (0x0003aad1) cell_gallery_pane_g3

0xe775,	// (0x00041344) cell_gallery_pane_g4_ParamLimits

0xe775,	// (0x00041344) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x000422a7) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x000422a7) cell_gallery_pane_g

0xe781,	// (0x00041350) bg_cell_gallery_focus_pane_g1

0xe789,	// (0x00041358) bg_cell_gallery_focus_pane_g2

0xe791,	// (0x00041360) bg_cell_gallery_focus_pane_g3

0xe799,	// (0x00041368) bg_cell_gallery_focus_pane_g4

0xe7a1,	// (0x00041370) bg_cell_gallery_focus_pane_g5

0xe7a9,	// (0x00041378) bg_cell_gallery_focus_pane_g6

0xe7b1,	// (0x00041380) bg_cell_gallery_focus_pane_g7

0xe7b9,	// (0x00041388) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x000422b0) bg_cell_gallery_focus_pane_g

0xe7c1,	// (0x00041390) aid_firma_cardinal

0xe7de,	// (0x000413ad) blid_firmament_pane_t1

0xe7f5,	// (0x000413c4) blid_firmament_pane_t2

0xe80c,	// (0x000413db) blid_firmament_pane_t3

0xe823,	// (0x000413f2) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x000422c1) blid_firmament_pane_t

0xe83a,	// (0x00041409) blid_sat_info_pane

0xe84a,	// (0x00041419) blid_sat_info_pane_g1

0xe84a,	// (0x00041419) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x000422ca) blid_sat_info_pane_g

0xe854,	// (0x00041423) blid_sat_info_pane_t1

0xe862,	// (0x00041431) smil2_volume_content_pane

0xe86b,	// (0x0004143a) smil2_volume_pane_g1

0xe7d5,	// (0x000413a4) smil2_volume_content_pane_g1

0xe873,	// (0x00041442) smil2_volume_content_pane_g2

0xe87c,	// (0x0004144b) smil2_volume_content_pane_g3

0xe885,	// (0x00041454) smil2_volume_content_pane_g4

0xe88e,	// (0x0004145d) smil2_volume_content_pane_g5

0xe897,	// (0x00041466) smil2_volume_content_pane_g6

0xe8a0,	// (0x0004146f) smil2_volume_content_pane_g7

0xe8a9,	// (0x00041478) smil2_volume_content_pane_g8

0xe8b2,	// (0x00041481) smil2_volume_content_pane_g9

0xe8bb,	// (0x0004148a) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x000422cf) smil2_volume_content_pane_g

0x5077,	// (0x00037c46) cale_week_day_heading_pane_t1_ParamLimits

0x5090,	// (0x00037c5f) cale_week_day_heading_pane_t2_ParamLimits

0x50a9,	// (0x00037c78) cale_week_day_heading_pane_t3_ParamLimits

0x50c2,	// (0x00037c91) cale_week_day_heading_pane_t4_ParamLimits

0x50db,	// (0x00037caa) cale_week_day_heading_pane_t5_ParamLimits

0x50f4,	// (0x00037cc3) cale_week_day_heading_pane_t6_ParamLimits

0x510d,	// (0x00037cdc) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00041dbb) cale_week_day_heading_pane_t_ParamLimits

0xc64b,	// (0x0003f21a) bg_cale_side_pane_ParamLimits

0x5126,	// (0x00037cf5) cale_week_time_pane_t1_ParamLimits

0x513e,	// (0x00037d0d) cale_week_time_pane_t2_ParamLimits

0x5156,	// (0x00037d25) cale_week_time_pane_t3_ParamLimits

0x516e,	// (0x00037d3d) cale_week_time_pane_t4_ParamLimits

0x5186,	// (0x00037d55) cale_week_time_pane_t5_ParamLimits

0x519e,	// (0x00037d6d) cale_week_time_pane_t6_ParamLimits

0x51b6,	// (0x00037d85) cale_week_time_pane_t7_ParamLimits

0x51d6,	// (0x00037da5) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x00041dca) cale_week_time_pane_t_ParamLimits

0x51f6,	// (0x00037dc5) cell_cale_week_pane_g2_ParamLimits

0xc64b,	// (0x0003f21a) bg_cale_side_pane_cp01_ParamLimits

0x61f5,	// (0x00038dc4) cale_month_week_pane_t1_ParamLimits

0x620c,	// (0x00038ddb) cale_month_week_pane_t2_ParamLimits

0x6223,	// (0x00038df2) cale_month_week_pane_t3_ParamLimits

0x623a,	// (0x00038e09) cale_month_week_pane_t4_ParamLimits

0x6251,	// (0x00038e20) cale_month_week_pane_t5_ParamLimits

0x626c,	// (0x00038e3b) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00041ea3) cale_month_week_pane_t_ParamLimits

0x6351,	// (0x00038f20) cell_cale_month_pane_g1_ParamLimits

0x45be,	// (0x0003718d) main_cale_event_viewer_pane

0x45be,	// (0x0003718d) listscroll_cale_event_viewer_pane

0xe8c4,	// (0x00041493) list_cale_ev_pane

0xe8cc,	// (0x0004149b) scroll_pane_cp023

0xe8d8,	// (0x000414a7) field_cale_ev_pane_ParamLimits

0xe8d8,	// (0x000414a7) field_cale_ev_pane

0xe8f6,	// (0x000414c5) field_cale_ev_content_pane_ParamLimits

0xe8f6,	// (0x000414c5) field_cale_ev_content_pane

0xe902,	// (0x000414d1) field_cale_ev_pane_g1_ParamLimits

0xe902,	// (0x000414d1) field_cale_ev_pane_g1

0xe90e,	// (0x000414dd) field_cale_ev_pane_g2_ParamLimits

0xe90e,	// (0x000414dd) field_cale_ev_pane_g2

0xe926,	// (0x000414f5) field_cale_ev_pane_g3_ParamLimits

0xe926,	// (0x000414f5) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x000422e4) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x000422e4) field_cale_ev_pane_g

0xe93e,	// (0x0004150d) field_cale_ev_pane_t1_ParamLimits

0xe93e,	// (0x0004150d) field_cale_ev_pane_t1

0xe955,	// (0x00041524) field_cale_ev_content_pane_t1_ParamLimits

0xe955,	// (0x00041524) field_cale_ev_content_pane_t1

0xd155,	// (0x0003fd24) bg_button_pane_cp01

0xc50b,	// (0x0003f0da) listscroll_cale_week_pane_ParamLimits

0x4e53,	// (0x00037a22) popup_toolbar_window_cp01

0xc639,	// (0x0003f208) listscroll_cale_week_pane_t1_ParamLimits

0xc50b,	// (0x0003f0da) listscroll_cale_day_pane_ParamLimits

0x4e53,	// (0x00037a22) popup_toolbar_window_cp02

0xc639,	// (0x0003f208) listscroll_cale_day_pane_t1_ParamLimits

0xc50b,	// (0x0003f0da) main_cale_month_pane_ParamLimits

0x764a,	// (0x0003a219) popup_toolbar_window_cp03_ParamLimits

0x764a,	// (0x0003a219) popup_toolbar_window_cp03

0x6fc3,	// (0x00039b92) main_image_pane_g2_ParamLimits

0x6fc3,	// (0x00039b92) main_image_pane_g2

0x6fcf,	// (0x00039b9e) main_image_pane_g3_ParamLimits

0x6fcf,	// (0x00039b9e) main_image_pane_g3

0x0002,

0xf506,	// (0x000420d5) main_image_pane_g_ParamLimits

0xf506,	// (0x000420d5) main_image_pane_g

0xd26f,	// (0x0003fe3e) main_image_pane_t1_ParamLimits

0x6fdb,	// (0x00039baa) main_image_pane_t2_ParamLimits

0x6fdb,	// (0x00039baa) main_image_pane_t2

0x6fed,	// (0x00039bbc) main_image_pane_t3_ParamLimits

0x6fed,	// (0x00039bbc) main_image_pane_t3

0x6fff,	// (0x00039bce) main_image_pane_t4_ParamLimits

0x6fff,	// (0x00039bce) main_image_pane_t4

0x0003,

0xf50d,	// (0x000420dc) main_image_pane_t_ParamLimits

0xf50d,	// (0x000420dc) main_image_pane_t

0x7011,	// (0x00039be0) popup_image_details_window_cp01

0x701b,	// (0x00039bea) popup_toobar_trans_pane_cp01_ParamLimits

0x701b,	// (0x00039bea) popup_toobar_trans_pane_cp01

0x75c7,	// (0x0003a196) popup_image_details_window_ParamLimits

0x75c7,	// (0x0003a196) popup_image_details_window

0xe412,	// (0x00040fe1) popup_image_focus_window

0x78e5,	// (0x0003a4b4) camera2_autofocus_pane_ParamLimits

0x78e5,	// (0x0003a4b4) camera2_autofocus_pane

0x45be,	// (0x0003718d) bg_popup_sub_pane_cp06

0xe973,	// (0x00041542) popup_image_focus_window_g1

0xe97b,	// (0x0004154a) popup_image_focus_window_g2

0xe983,	// (0x00041552) popup_image_focus_window_g3

0xe98b,	// (0x0004155a) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x000422eb) popup_image_focus_window_g

0xe993,	// (0x00041562) popup_image_focus_window_t1

0xe9a1,	// (0x00041570) popup_image_focus_window_t2

0xe9b1,	// (0x00041580) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x000422f4) popup_image_focus_window_t

0xe9bf,	// (0x0004158e) camera2_autofocus_pane_g1

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp01

0xe9cd,	// (0x0004159c) popup_image_details_window_g1

0xe9e0,	// (0x000415af) popup_image_details_window_g2

0x0002,

0xf737,	// (0x00042306) popup_image_details_window_g

0xea09,	// (0x000415d8) popup_image_details_window_t1

0xea1b,	// (0x000415ea) popup_image_details_window_t2

0xea34,	// (0x00041603) popup_image_details_window_t3

0xea48,	// (0x00041617) popup_image_details_window_t4

0xea63,	// (0x00041632) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0004230d) popup_image_details_window_t

0xc4f7,	// (0x0003f0c6) bg_calc_paper_pane_ParamLimits

0x45be,	// (0x0003718d) grid_highlight_pane_cp013

0x4be8,	// (0x000377b7) list_calc_pane_ParamLimits

0x4bfa,	// (0x000377c9) scroll_pane_cp024

0xc50b,	// (0x0003f0da) bg_calc_display_pane_ParamLimits

0x4c02,	// (0x000377d1) calc_display_pane_t1_ParamLimits

0x4c17,	// (0x000377e6) calc_display_pane_t2_ParamLimits

0x4c2c,	// (0x000377fb) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00041d3d) calc_display_pane_t_ParamLimits

0x4d08,	// (0x000378d7) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00041d5a) cell_calc_pane_g

0x4d11,	// (0x000378e0) cell_calc_pane_t1

0xc56a,	// (0x0003f139) grid_highlight_pane_cp02_ParamLimits

0xc580,	// (0x0003f14f) toolbar_button_pane_cp01_ParamLimits

0xc580,	// (0x0003f14f) toolbar_button_pane_cp01

0xd2b4,	// (0x0003fe83) temp_image_control_pane_ParamLimits

0xd2b4,	// (0x0003fe83) temp_image_control_pane

0xd8c0,	// (0x0004048f) main_mp3_pane

0xea7d,	// (0x0004164c) temp_image_control_pane_g1_ParamLimits

0xea7d,	// (0x0004164c) temp_image_control_pane_g1

0xea8b,	// (0x0004165a) temp_image_control_pane_g2_ParamLimits

0xea8b,	// (0x0004165a) temp_image_control_pane_g2

0xea9d,	// (0x0004166c) temp_image_control_pane_g3_ParamLimits

0xea9d,	// (0x0004166c) temp_image_control_pane_g3

0x7f3f,	// (0x0003ab0e) temp_image_control_pane_g4_ParamLimits

0x7f3f,	// (0x0003ab0e) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x00042318) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x00042318) temp_image_control_pane_g

0xea7d,	// (0x0004164c) main_mp3_pane_g1

0x7f50,	// (0x0003ab1f) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00042321) main_mp3_pane_g

0xeae0,	// (0x000416af) main_mp3_pane_t1

0xc6b0,	// (0x0003f27f) main_camera_pane_g8_ParamLimits

0xc6b0,	// (0x0003f27f) main_camera_pane_g8

0x548a,	// (0x00038059) main_video_pane_g7_ParamLimits

0x548a,	// (0x00038059) main_video_pane_g7

0x7a2d,	// (0x0003a5fc) main_camera2_pane_t7_ParamLimits

0x7a2d,	// (0x0003a5fc) main_camera2_pane_t7

0xc7f8,	// (0x0003f3c7) scroll_pane_cp025_ParamLimits

0xc7f8,	// (0x0003f3c7) scroll_pane_cp025

0xc80c,	// (0x0003f3db) scroll_pane_cp026_ParamLimits

0xc80c,	// (0x0003f3db) scroll_pane_cp026

0xc81b,	// (0x0003f3ea) wml_content_pane_ParamLimits

0x45be,	// (0x0003718d) main_touch_calib_pane

0x7ff4,	// (0x0003abc3) main_touch_calib_pane_g1

0x8000,	// (0x0003abcf) main_touch_calib_pane_g2

0x800c,	// (0x0003abdb) main_touch_calib_pane_g3

0x8018,	// (0x0003abe7) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0004233f) main_touch_calib_pane_g

0x8024,	// (0x0003abf3) main_touch_calib_pane_t1

0x803b,	// (0x0003ac0a) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x00042348) main_touch_calib_pane_t

0xcf2d,	// (0x0003fafc) mup_progress_pane_cp02

0xcf4c,	// (0x0003fb1b) navi_pane_g1

0xcfae,	// (0x0003fb7d) navi_pane_mp_t3

0xd8c0,	// (0x0004048f) main_mp3_pane_ParamLimits

0x7688,	// (0x0003a257) navi_pane_ParamLimits

0xea7d,	// (0x0004164c) main_mp3_pane_g1_ParamLimits

0x7f50,	// (0x0003ab1f) main_mp3_pane_g2_ParamLimits

0x7f5c,	// (0x0003ab2b) main_mp3_pane_g3_ParamLimits

0x7f5c,	// (0x0003ab2b) main_mp3_pane_g3

0x7f68,	// (0x0003ab37) main_mp3_pane_g4_ParamLimits

0x7f68,	// (0x0003ab37) main_mp3_pane_g4

0xeaad,	// (0x0004167c) main_mp3_pane_g5_ParamLimits

0xeaad,	// (0x0004167c) main_mp3_pane_g5

0xeabb,	// (0x0004168a) main_mp3_pane_g6_ParamLimits

0xeabb,	// (0x0004168a) main_mp3_pane_g6

0xeac8,	// (0x00041697) main_mp3_pane_g7_ParamLimits

0xeac8,	// (0x00041697) main_mp3_pane_g7

0xead4,	// (0x000416a3) main_mp3_pane_g8_ParamLimits

0xead4,	// (0x000416a3) main_mp3_pane_g8

0xf752,	// (0x00042321) main_mp3_pane_g_ParamLimits

0x7f74,	// (0x0003ab43) main_mp3_pane_t2

0x7f84,	// (0x0003ab53) main_mp3_pane_t3

0xeaee,	// (0x000416bd) main_mp3_pane_t4

0xeafc,	// (0x000416cb) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00042332) main_mp3_pane_t

0xeb0a,	// (0x000416d9) mup_progress_pane_cp01

0x340b,	// (0x00035fda) aid_zoom_text_secondary2

0xe8c4,	// (0x00041493) list_cale_ev2_pane

0xe8cc,	// (0x0004149b) scroll_pane_cp023_ParamLimits

0x8090,	// (0x0003ac5f) field_cale_ev2_pane_ParamLimits

0x8090,	// (0x0003ac5f) field_cale_ev2_pane

0x36fa,	// (0x000362c9) field_cale_ev2_pane_g1_ParamLimits

0x36fa,	// (0x000362c9) field_cale_ev2_pane_g1

0x3706,	// (0x000362d5) field_cale_ev2_pane_g2_ParamLimits

0x3706,	// (0x000362d5) field_cale_ev2_pane_g2

0x371e,	// (0x000362ed) field_cale_ev2_pane_g3_ParamLimits

0x371e,	// (0x000362ed) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x00042353) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x00042353) field_cale_ev2_pane_g

0x3742,	// (0x00036311) field_cale_ev2_pane_t1_ParamLimits

0x3742,	// (0x00036311) field_cale_ev2_pane_t1

0x3759,	// (0x00036328) field_cale_ev2_pane_t2_ParamLimits

0x3759,	// (0x00036328) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0004235c) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0004235c) field_cale_ev2_pane_t

0x6ea3,	// (0x00039a72) main_postcard_pane_g5_ParamLimits

0x6ea3,	// (0x00039a72) main_postcard_pane_g5

0x6eb1,	// (0x00039a80) main_postcard_pane_g6_ParamLimits

0x6eb1,	// (0x00039a80) main_postcard_pane_g6

0x52d4,	// (0x00037ea3) camera2_autofocus_pane_cp_ParamLimits

0x52d4,	// (0x00037ea3) camera2_autofocus_pane_cp

0xd8c0,	// (0x0004048f) main_mup3_pane

0x80d9,	// (0x0003aca8) main_mup3_pane_g1_ParamLimits

0x80d9,	// (0x0003aca8) main_mup3_pane_g1

0x80fa,	// (0x0003acc9) main_mup3_pane_g2_ParamLimits

0x80fa,	// (0x0003acc9) main_mup3_pane_g2

0x8172,	// (0x0003ad41) main_mup3_pane_g3_ParamLimits

0x8172,	// (0x0003ad41) main_mup3_pane_g3

0x81b5,	// (0x0003ad84) main_mup3_pane_g4_ParamLimits

0x81b5,	// (0x0003ad84) main_mup3_pane_g4

0x81f8,	// (0x0003adc7) main_mup3_pane_g5_ParamLimits

0x81f8,	// (0x0003adc7) main_mup3_pane_g5

0x823b,	// (0x0003ae0a) main_mup3_pane_g6_ParamLimits

0x823b,	// (0x0003ae0a) main_mup3_pane_g6

0xeb12,	// (0x000416e1) main_mup3_pane_g7_ParamLimits

0xeb12,	// (0x000416e1) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0004236c) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0004236c) main_mup3_pane_g

0x82b1,	// (0x0003ae80) main_mup3_pane_t1_ParamLimits

0x82b1,	// (0x0003ae80) main_mup3_pane_t1

0x8320,	// (0x0003aeef) main_mup3_pane_t2_ParamLimits

0x8320,	// (0x0003aeef) main_mup3_pane_t2

0x83e9,	// (0x0003afb8) main_mup3_pane_t4_ParamLimits

0x83e9,	// (0x0003afb8) main_mup3_pane_t4

0x8437,	// (0x0003b006) main_mup3_pane_t5_ParamLimits

0x8437,	// (0x0003b006) main_mup3_pane_t5

0x84e7,	// (0x0003b0b6) main_mup3_pane_t6_ParamLimits

0x84e7,	// (0x0003b0b6) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0004237d) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0004237d) main_mup3_pane_t

0x8593,	// (0x0003b162) mup3_progress_pane_ParamLimits

0x8593,	// (0x0003b162) mup3_progress_pane

0x8611,	// (0x0003b1e0) popup_mup3_control_window_ParamLimits

0x8611,	// (0x0003b1e0) popup_mup3_control_window

0xeb20,	// (0x000416ef) popup_mup3_text_window

0x862a,	// (0x0003b1f9) mup3_progress_pane_t1

0x8649,	// (0x0003b218) mup3_progress_pane_t2

0xeb28,	// (0x000416f7) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0004238a) mup3_progress_pane_t

0xeb45,	// (0x00041714) mup_progress_pane_cp03

0x45be,	// (0x0003718d) bg_tb_trans_pane_cp04

0x8668,	// (0x0003b237) mup3_volume_pane

0x8670,	// (0x0003b23f) popup_mup3_control_window_g1

0x8679,	// (0x0003b248) mup3_volume_pane_g1

0x8682,	// (0x0003b251) mup3_volume_pane_g2

0x868b,	// (0x0003b25a) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x00042391) mup3_volume_pane_g

0x45be,	// (0x0003718d) bg_tb_trans_pane_cp03

0xeb55,	// (0x00041724) popup_mup3_text_window_g1

0xeb5d,	// (0x0004172c) popup_mup3_text_window_t1

0xc553,	// (0x0003f122) list_calc_item_pane_g1_ParamLimits

0xe58c,	// (0x0004115b) mup_volume_pane_cp_g1

0x8052,	// (0x0003ac21) main_touch_calib_pane_t3

0x8066,	// (0x0003ac35) main_touch_calib_pane_t4

0x807a,	// (0x0003ac49) main_touch_calib_pane_t5

0x45c8,	// (0x00037197) aid_cell_size_toolbar2

0x45d0,	// (0x0003719f) aid_popup3_width_pane

0x3403,	// (0x00035fd2) aid_zoom_text_msg_primary

0x52ab,	// (0x00037e7a) vorec_t7

0xc517,	// (0x0003f0e6) bg_calc_paper_pane_g1_ParamLimits

0xc523,	// (0x0003f0f2) bg_calc_paper_pane_g2_ParamLimits

0xc52f,	// (0x0003f0fe) bg_calc_paper_pane_g3_ParamLimits

0xc53b,	// (0x0003f10a) bg_calc_paper_pane_g4_ParamLimits

0xc547,	// (0x0003f116) bg_calc_paper_pane_g5_ParamLimits

0x4c6b,	// (0x0003783a) bg_calc_paper_pane_g6_ParamLimits

0x4c7c,	// (0x0003784b) bg_calc_paper_pane_g7_ParamLimits

0x4c8d,	// (0x0003785c) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00041d44) bg_calc_paper_pane_g_ParamLimits

0x4c9e,	// (0x0003786d) calc_bg_paper_pane_g9_ParamLimits

0x53bb,	// (0x00037f8a) image_qvga_pane_ParamLimits

0x53bb,	// (0x00037f8a) image_qvga_pane

0xc438,	// (0x0003f007) bg_popup_sub_pane_cp04_ParamLimits

0xd1eb,	// (0x0003fdba) popup_mup_playback_window_g1_ParamLimits

0xd1f7,	// (0x0003fdc6) popup_mup_playback_window_t1_ParamLimits

0xd20c,	// (0x0003fddb) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x000420d0) popup_mup_playback_window_t_ParamLimits

0x7b5c,	// (0x0003a72b) main_mup2_pane_g3_ParamLimits

0x7b5c,	// (0x0003a72b) main_mup2_pane_g3

0x5673,	// (0x00038242) popup_toolbar_window_cp04

0xd5ee,	// (0x000401bd) popup_call2_audio_second_window_g3_ParamLimits

0xd5ee,	// (0x000401bd) popup_call2_audio_second_window_g3

0xda12,	// (0x000405e1) popup_call2_audio_first_window_g4_ParamLimits

0xda12,	// (0x000405e1) popup_call2_audio_first_window_g4

0xe091,	// (0x00040c60) popup_call2_audio_in_window_g4_ParamLimits

0xe091,	// (0x00040c60) popup_call2_audio_in_window_g4

0x6fb6,	// (0x00039b85) aid_area_sk_bg_cut_ParamLimits

0x6fb6,	// (0x00039b85) aid_area_sk_bg_cut

0xd221,	// (0x0003fdf0) aid_area_sk_bg_cut_2_ParamLimits

0xd221,	// (0x0003fdf0) aid_area_sk_bg_cut_2

0x7ee5,	// (0x0003aab4) aid_placing_details_win

0x7eed,	// (0x0003aabc) aid_placing_details_win_2

0xe9bf,	// (0x0004158e) camera2_autofocus_pane_g1_ParamLimits

0x481d,	// (0x000373ec) popup_fixed_preview_cale_window_ParamLimits

0x481d,	// (0x000373ec) popup_fixed_preview_cale_window

0xcffd,	// (0x0003fbcc) navi_slider_pane_g3

0xd006,	// (0x0003fbd5) navi_slider_pane_g4

0xd00f,	// (0x0003fbde) navi_slider_pane_g5

0xcffd,	// (0x0003fbcc) navi_slider_pane_g6

0x68f2,	// (0x000394c1) navi_slider_pane_g7

0xd122,	// (0x0003fcf1) mup_scale_pane_g3

0xd12b,	// (0x0003fcfa) mup_scale_pane_g4

0xd134,	// (0x0003fd03) mup_scale_pane_g5

0x6d33,	// (0x00039902) mup_scale_pane_g6

0x6d3c,	// (0x0003990b) mup_scale_pane_g7

0xcffd,	// (0x0003fbcc) cams2_slider_pane_g3

0xe60e,	// (0x000411dd) cams2_slider_pane_g4

0x7e3d,	// (0x0003aa0c) cams2_slider_pane_g5

0xcffd,	// (0x0003fbcc) cams2_slider_pane_g6

0x7e45,	// (0x0003aa14) cams2_slider_pane_g7

0xe84a,	// (0x00041419) camera2_autofocus_pane_cp_g1

0xeb6b,	// (0x0004173a) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb6b,	// (0x0004173a) bg_popup_preview_window_pane_cp02

0xeb77,	// (0x00041746) list_fp_cale_pane_ParamLimits

0xeb77,	// (0x00041746) list_fp_cale_pane

0xeb83,	// (0x00041752) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb83,	// (0x00041752) popup_fixed_preview_cale_window_t1

0x8694,	// (0x0003b263) popup_fixed_preview_cale_window_t2_ParamLimits

0x8694,	// (0x0003b263) popup_fixed_preview_cale_window_t2

0x86a9,	// (0x0003b278) popup_fixed_preview_cale_window_t3_ParamLimits

0x86a9,	// (0x0003b278) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x00042398) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x00042398) popup_fixed_preview_cale_window_t

0x86be,	// (0x0003b28d) list_single_fp_cale_pane_ParamLimits

0x86be,	// (0x0003b28d) list_single_fp_cale_pane

0xeba1,	// (0x00041770) list_single_fp_cale_pane_g1_ParamLimits

0xeba1,	// (0x00041770) list_single_fp_cale_pane_g1

0xebad,	// (0x0004177c) list_single_fp_cale_pane_g2_ParamLimits

0xebad,	// (0x0004177c) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0004239f) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0004239f) list_single_fp_cale_pane_g

0xebc6,	// (0x00041795) list_single_fp_cale_pane_t1_ParamLimits

0xebc6,	// (0x00041795) list_single_fp_cale_pane_t1

0xebd8,	// (0x000417a7) list_single_fp_cale_pane_t2_ParamLimits

0xebd8,	// (0x000417a7) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x000423a6) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x000423a6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x45be,	// (0x0003718d) main_dialer_pane

0x86d0,	// (0x0003b29f) aid_cell_size_keypad

0x86da,	// (0x0003b2a9) dialer_ne_pane

0x86e4,	// (0x0003b2b3) grid_dialer_command_1_pane

0x86ec,	// (0x0003b2bb) grid_dialer_command_2_pane

0x86f4,	// (0x0003b2c3) grid_dialer_keypad_pane

0x8706,	// (0x0003b2d5) bg_popup_call_pane_cp06_ParamLimits

0x8706,	// (0x0003b2d5) bg_popup_call_pane_cp06

0x8712,	// (0x0003b2e1) dialer_ne_clear_pane_ParamLimits

0x8712,	// (0x0003b2e1) dialer_ne_clear_pane

0xec0b,	// (0x000417da) dialer_ne_pane_g1

0xec13,	// (0x000417e2) dialer_ne_pane_t1_ParamLimits

0xec13,	// (0x000417e2) dialer_ne_pane_t1

0x871e,	// (0x0003b2ed) dialer_ne_pane_t2_ParamLimits

0x871e,	// (0x0003b2ed) dialer_ne_pane_t2

0x873b,	// (0x0003b30a) dialer_ne_pane_t3_ParamLimits

0x873b,	// (0x0003b30a) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x000423ab) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x000423ab) dialer_ne_pane_t

0x875f,	// (0x0003b32e) dialer_ne_pane_t3_copy1_ParamLimits

0x875f,	// (0x0003b32e) dialer_ne_pane_t3_copy1

0x8783,	// (0x0003b352) cell_dialer_keypad_pane_ParamLimits

0x8783,	// (0x0003b352) cell_dialer_keypad_pane

0x879a,	// (0x0003b369) cell_dialer_command_1_pane_ParamLimits

0x879a,	// (0x0003b369) cell_dialer_command_1_pane

0x87b0,	// (0x0003b37f) cell_dialer_command_2_pane_ParamLimits

0x87b0,	// (0x0003b37f) cell_dialer_command_2_pane

0xec25,	// (0x000417f4) bg_button_pane_cp02_ParamLimits

0xec25,	// (0x000417f4) bg_button_pane_cp02

0x87bf,	// (0x0003b38e) cell_dialer_keypad_pane_g1_ParamLimits

0x87bf,	// (0x0003b38e) cell_dialer_keypad_pane_g1

0xec25,	// (0x000417f4) bg_button_pane_cp03_ParamLimits

0xec25,	// (0x000417f4) bg_button_pane_cp03

0x87d4,	// (0x0003b3a3) cell_dialer_command_1_pane_g1_ParamLimits

0x87d4,	// (0x0003b3a3) cell_dialer_command_1_pane_g1

0xec31,	// (0x00041800) bg_button_pane_cp04

0x87e8,	// (0x0003b3b7) cell_dialer_command_2_pane_g1

0xcfec,	// (0x0003fbbb) bg_button_pane_cp06

0xec39,	// (0x00041808) dialer_ne_clear_pane_g1

0x6835,	// (0x00039404) navi_pane_g2

0x6863,	// (0x00039432) navi_pane_g3

0x0002,

0xf404,	// (0x00041fd3) navi_pane_g

0x688e,	// (0x0003945d) navi_pane_mv_g2

0x68b5,	// (0x00039484) navi_pane_mv_g5

0x68bd,	// (0x0003948c) navi_pane_mv_t1

0xc50b,	// (0x0003f0da) main_clock2_pane

0x8819,	// (0x0003b3e8) main_clock2_list_pane_ParamLimits

0x8819,	// (0x0003b3e8) main_clock2_list_pane

0x8841,	// (0x0003b410) main_clock2_pane_t1_ParamLimits

0x8841,	// (0x0003b410) main_clock2_pane_t1

0x8863,	// (0x0003b432) main_clock2_pane_t2_ParamLimits

0x8863,	// (0x0003b432) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x000423b2) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x000423b2) main_clock2_pane_t

0x88be,	// (0x0003b48d) popup_clock_analogue_window_cp03_ParamLimits

0x88be,	// (0x0003b48d) popup_clock_analogue_window_cp03

0x88dc,	// (0x0003b4ab) popup_clock_digital_window_cp02_ParamLimits

0x88dc,	// (0x0003b4ab) popup_clock_digital_window_cp02

0x8949,	// (0x0003b518) main_clock2_list_single_pane_ParamLimits

0x8949,	// (0x0003b518) main_clock2_list_single_pane

0xcfec,	// (0x0003fbbb) list_highlight_pane_cp05

0xec41,	// (0x00041810) main_clock2_list_single_pane_t1

0x5673,	// (0x00038242) popup_toolbar_window_cp04_ParamLimits

0x7f0f,	// (0x0003aade) camera2_autofocus_pane_g2_ParamLimits

0x7f0f,	// (0x0003aade) camera2_autofocus_pane_g2

0x7f1b,	// (0x0003aaea) camera2_autofocus_pane_g3_ParamLimits

0x7f1b,	// (0x0003aaea) camera2_autofocus_pane_g3

0x7f27,	// (0x0003aaf6) camera2_autofocus_pane_g4_ParamLimits

0x7f27,	// (0x0003aaf6) camera2_autofocus_pane_g4

0x7f33,	// (0x0003ab02) camera2_autofocus_pane_g5_ParamLimits

0x7f33,	// (0x0003ab02) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x000422fb) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x000422fb) camera2_autofocus_pane_g

0x80b9,	// (0x0003ac88) camera2_autofocus_pane_cp_g2

0x80c1,	// (0x0003ac90) camera2_autofocus_pane_cp_g3

0x80c9,	// (0x0003ac98) camera2_autofocus_pane_cp_g4

0x80d1,	// (0x0003aca0) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x00042361) camera2_autofocus_pane_cp_g

0x86fe,	// (0x0003b2cd) popup_dialer_spcha_window

0x45be,	// (0x0003718d) bg_popup_sub_pane_cp07

0xec4f,	// (0x0004181e) list_spcha_pane

0xec57,	// (0x00041826) list_single_spcha_pane_ParamLimits

0xec57,	// (0x00041826) list_single_spcha_pane

0x45be,	// (0x0003718d) list_highlight_pane_cp06

0xec68,	// (0x00041837) list_single_spcha_pane_t1

0xde3b,	// (0x00040a0a) popup_call2_audio_out_window_g4_ParamLimits

0xde3b,	// (0x00040a0a) popup_call2_audio_out_window_g4

0x45be,	// (0x0003718d) main_imed2_pane

0xe41a,	// (0x00040fe9) popup_imed_adjust2_window

0x75d5,	// (0x0003a1a4) popup_imed_trans_window_ParamLimits

0x75d5,	// (0x0003a1a4) popup_imed_trans_window

0xe67f,	// (0x0004124e) popup_blid_sat_info2_window_t1

0xe68d,	// (0x0004125c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x00042290) popup_blid_sat_info2_window_t

0x89f3,	// (0x0003b5c2) aid_size_cell_colour_35

0x8a0d,	// (0x0003b5dc) aid_size_cell_colour_112

0x8a24,	// (0x0003b5f3) aid_size_cell_effect

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp02

0xd8ce,	// (0x0004049d) heading_imed_pane

0x8a3e,	// (0x0003b60d) listscroll_imed_pane

0xec76,	// (0x00041845) heading_imed_pane_g1

0xec7e,	// (0x0004184d) heading_imed_pane_t1

0xec8c,	// (0x0004185b) grid_imed_colour_35_pane_ParamLimits

0xec8c,	// (0x0004185b) grid_imed_colour_35_pane

0x8a4a,	// (0x0003b619) grid_imed_effect_pane

0xeca3,	// (0x00041872) list_imed_aspect_pane

0x8a5a,	// (0x0003b629) scroll_pane_cp027_ParamLimits

0x8a5a,	// (0x0003b629) scroll_pane_cp027

0x8a66,	// (0x0003b635) cell_imed_effect_pane_ParamLimits

0x8a66,	// (0x0003b635) cell_imed_effect_pane

0xecab,	// (0x0004187a) cell_imed_colour_pane_ParamLimits

0xecab,	// (0x0004187a) cell_imed_colour_pane

0xeced,	// (0x000418bc) cell_imed_colour_pane_g1_ParamLimits

0xeced,	// (0x000418bc) cell_imed_colour_pane_g1

0xecfe,	// (0x000418cd) hgihlgiht_grid_pane_cp016_ParamLimits

0xecfe,	// (0x000418cd) hgihlgiht_grid_pane_cp016

0x8a7e,	// (0x0003b64d) cell_imed_effect_pane_g1

0x8a86,	// (0x0003b655) grid_highlight_pane_cp017

0xed0f,	// (0x000418de) list_imed_single_pane_ParamLimits

0xed0f,	// (0x000418de) list_imed_single_pane

0x45be,	// (0x0003718d) list_highlight_pane_cp07

0xed24,	// (0x000418f3) list_imed_aspect_pane_comp1_t1

0xe3f2,	// (0x00040fc1) bg_tb_trans_pane_cp05

0xed46,	// (0x00041915) popup_imed_adjust2_window_g1

0xed6d,	// (0x0004193c) popup_imed_adjust2_window_t1

0xed85,	// (0x00041954) slider_imed_adjust_pane

0xed99,	// (0x00041968) slider_imed_adjust_pane_g1

0xeda9,	// (0x00041978) slider_imed_adjust_pane_g2

0xedb9,	// (0x00041988) slider_imed_adjust_pane_g3

0xedca,	// (0x00041999) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x000423cf) slider_imed_adjust_pane_g

0x8a8f,	// (0x0003b65e) aid_size_cell_clipart2

0x8a9b,	// (0x0003b66a) grid_imed_clipart_pane

0xeddb,	// (0x000419aa) scroll_pane_cp031

0x8aa5,	// (0x0003b674) cell_imed_clipart_pane_ParamLimits

0x8aa5,	// (0x0003b674) cell_imed_clipart_pane

0x8ac7,	// (0x0003b696) cell_imed_clipart_pane_g1

0x45be,	// (0x0003718d) grid_highlight_pane_cp014

0x8825,	// (0x0003b3f4) main_clock2_pane_g1_ParamLimits

0x8825,	// (0x0003b3f4) main_clock2_pane_g1

0x88f4,	// (0x0003b4c3) aid_call2_pane_cp10

0x8906,	// (0x0003b4d5) aid_call_pane_cp10

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g1

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g2

0x8918,	// (0x0003b4e7) popup_clock_analogue_window_cp10_g3

0x8918,	// (0x0003b4e7) popup_clock_analogue_window_cp10_g4

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x000423bd) popup_clock_analogue_window_cp10_g

0x892a,	// (0x0003b4f9) popup_clock_analogue_window_cp10_t1

0x895b,	// (0x0003b52a) clock_digital_number_pane_cp10_ParamLimits

0x895b,	// (0x0003b52a) clock_digital_number_pane_cp10

0x8973,	// (0x0003b542) clock_digital_number_pane_cp11_ParamLimits

0x8973,	// (0x0003b542) clock_digital_number_pane_cp11

0x898b,	// (0x0003b55a) clock_digital_number_pane_cp12_ParamLimits

0x898b,	// (0x0003b55a) clock_digital_number_pane_cp12

0x89a3,	// (0x0003b572) clock_digital_number_pane_cp13_ParamLimits

0x89a3,	// (0x0003b572) clock_digital_number_pane_cp13

0x89bb,	// (0x0003b58a) clock_digital_separator_pane_cp10_ParamLimits

0x89bb,	// (0x0003b58a) clock_digital_separator_pane_cp10

0x89d3,	// (0x0003b5a2) popup_clock_digital_window_cp02_t1_ParamLimits

0x89d3,	// (0x0003b5a2) popup_clock_digital_window_cp02_t1

0xc430,	// (0x0003efff) clock_digital_number_pane_cp10_g1

0xc430,	// (0x0003efff) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x000423d8) clock_digital_number_pane_cp10_g

0xc430,	// (0x0003efff) clock_digital_separator_pane_cp10_g1

0xc430,	// (0x0003efff) clock_digital_separator_pane_g2_cp10

0xcfbc,	// (0x0003fb8b) navi_pane_vded_g4

0xcfc5,	// (0x0003fb94) navi_pane_vded_g5

0xcfce,	// (0x0003fb9d) navi_pane_vded_t1

0x45be,	// (0x0003718d) main_vded_pane

0x8ad0,	// (0x0003b69f) main_vded_pane_g1

0x8adc,	// (0x0003b6ab) main_vded_pane_g2

0x8ae6,	// (0x0003b6b5) main_vded_pane_g3

0x0002,

0xf80e,	// (0x000423dd) main_vded_pane_g

0x8af0,	// (0x0003b6bf) main_vded_pane_t1

0x8afe,	// (0x0003b6cd) main_vded_pane_t2

0x0001,

0xf815,	// (0x000423e4) main_vded_pane_t

0x8b0c,	// (0x0003b6db) vded_slider_pane

0x8b16,	// (0x0003b6e5) vded_video_pane

0xede3,	// (0x000419b2) vded_video_pane_g1

0x8b20,	// (0x0003b6ef) vded_video_pane_g2

0xe84a,	// (0x00041419) vded_video_pane_g3

0x0002,

0xf81a,	// (0x000423e9) vded_video_pane_g

0xeded,	// (0x000419bc) vded_slider_pane_g1

0xe58c,	// (0x0004115b) vded_slider_pane_g2

0xedf6,	// (0x000419c5) vded_slider_pane_g3

0xedff,	// (0x000419ce) vded_slider_pane_g4

0xee08,	// (0x000419d7) vded_slider_pane_g5

0x0004,

0xf821,	// (0x000423f0) vded_slider_pane_g

0x8603,	// (0x0003b1d2) mup3_rocker_pane_ParamLimits

0x8603,	// (0x0003b1d2) mup3_rocker_pane

0x8b29,	// (0x0003b6f8) mup3_control_keys_pane_g1

0x8b31,	// (0x0003b700) mup3_control_keys_pane_g2

0x8b39,	// (0x0003b708) mup3_control_keys_pane_g3

0x8b41,	// (0x0003b710) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x000423fb) mup3_control_keys_pane_g

0x4845,	// (0x00037414) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4845,	// (0x00037414) popup_toolbar2_fixed_window_cp01

0x861d,	// (0x0003b1ec) popup_toolbar2_fixed_window_cp02_ParamLimits

0x861d,	// (0x0003b1ec) popup_toolbar2_fixed_window_cp02

0xd760,	// (0x0004032f) popup_call2_audio_second_window_t4_ParamLimits

0xd760,	// (0x0004032f) popup_call2_audio_second_window_t4

0xdca8,	// (0x00040877) popup_call2_audio_first_window_t6_ParamLimits

0xdca8,	// (0x00040877) popup_call2_audio_first_window_t6

0xdf3e,	// (0x00040b0d) popup_call2_audio_out_window_t6_ParamLimits

0xdf3e,	// (0x00040b0d) popup_call2_audio_out_window_t6

0x45be,	// (0x0003718d) main_vitu_pane

0x8b51,	// (0x0003b720) aid_size_cell_itu_ParamLimits

0x8b51,	// (0x0003b720) aid_size_cell_itu

0x486d,	// (0x0003743c) bg_popup_window_pane_cp08_ParamLimits

0x486d,	// (0x0003743c) bg_popup_window_pane_cp08

0x8b5f,	// (0x0003b72e) field_vitu_entry_pane_ParamLimits

0x8b5f,	// (0x0003b72e) field_vitu_entry_pane

0x8b6e,	// (0x0003b73d) grid_vitu_function_pane_ParamLimits

0x8b6e,	// (0x0003b73d) grid_vitu_function_pane

0x8b7e,	// (0x0003b74d) grid_vitu_itu_pane_ParamLimits

0x8b7e,	// (0x0003b74d) grid_vitu_itu_pane

0x8b8e,	// (0x0003b75d) cell_vitu_itu_pane_ParamLimits

0x8b8e,	// (0x0003b75d) cell_vitu_itu_pane

0x8ba3,	// (0x0003b772) cell_vitu_function_pane_ParamLimits

0x8ba3,	// (0x0003b772) cell_vitu_function_pane

0xd8c0,	// (0x0004048f) bg_popup_sub_pane_cp08_ParamLimits

0xd8c0,	// (0x0004048f) bg_popup_sub_pane_cp08

0x8bb5,	// (0x0003b784) field_vitu_entry_pane_t1_ParamLimits

0x8bb5,	// (0x0003b784) field_vitu_entry_pane_t1

0xee29,	// (0x000419f8) field_vitu_entry_pane_t2_ParamLimits

0xee29,	// (0x000419f8) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x00042409) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x00042409) field_vitu_entry_pane_t

0xee46,	// (0x00041a15) bg_button_pane_cp05_ParamLimits

0xee46,	// (0x00041a15) bg_button_pane_cp05

0x8bd1,	// (0x0003b7a0) cell_vitu_itu_pane_g1

0x8be9,	// (0x0003b7b8) cell_vitu_itu_pane_t1_ParamLimits

0x8be9,	// (0x0003b7b8) cell_vitu_itu_pane_t1

0x8bfb,	// (0x0003b7ca) cell_vitu_itu_pane_t2_ParamLimits

0x8bfb,	// (0x0003b7ca) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0004240e) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0004240e) cell_vitu_itu_pane_t

0xee54,	// (0x00041a23) bg_button_pane_cp07

0x8c30,	// (0x0003b7ff) cell_vitu_function_pane_g1

0x4b0f,	// (0x000376de) main_calc_pane_g1

0x4604,	// (0x000371d3) aid_visual_content_pane

0x45be,	// (0x0003718d) main_vradio_pane

0x8c39,	// (0x0003b808) main_vradio_pane_g1_ParamLimits

0x8c39,	// (0x0003b808) main_vradio_pane_g1

0xee5e,	// (0x00041a2d) main_vradio_pane_g2_ParamLimits

0xee5e,	// (0x00041a2d) main_vradio_pane_g2

0x0001,

0xf846,	// (0x00042415) main_vradio_pane_g_ParamLimits

0xf846,	// (0x00042415) main_vradio_pane_g

0x8c49,	// (0x0003b818) main_vradio_pane_t1_ParamLimits

0x8c49,	// (0x0003b818) main_vradio_pane_t1

0x8c5b,	// (0x0003b82a) main_vradio_pane_t2_ParamLimits

0x8c5b,	// (0x0003b82a) main_vradio_pane_t2

0xee6b,	// (0x00041a3a) main_vradio_pane_t3_ParamLimits

0xee6b,	// (0x00041a3a) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0004241a) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0004241a) main_vradio_pane_t

0x8c6d,	// (0x0003b83c) vradio_rocker_control_pane_ParamLimits

0x8c6d,	// (0x0003b83c) vradio_rocker_control_pane

0x8c79,	// (0x0003b848) vradio_station_info_pane_ParamLimits

0x8c79,	// (0x0003b848) vradio_station_info_pane

0xee7f,	// (0x00041a4e) vradio_frequency_info_pane_ParamLimits

0xee7f,	// (0x00041a4e) vradio_frequency_info_pane

0xe84a,	// (0x00041419) vradio_station_info_pane_g1

0xee8e,	// (0x00041a5d) vradio_station_info_pane_t1_ParamLimits

0xee8e,	// (0x00041a5d) vradio_station_info_pane_t1

0xeeb0,	// (0x00041a7f) vradio_station_info_pane_t2_ParamLimits

0xeeb0,	// (0x00041a7f) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x00042421) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x00042421) vradio_station_info_pane_t

0xeec2,	// (0x00041a91) vradio_tuning_pane

0xeeca,	// (0x00041a99) vradio_rocker_control_pane_g1

0xeed2,	// (0x00041aa1) vradio_rocker_control_pane_g2

0xeeda,	// (0x00041aa9) vradio_rocker_control_pane_g3

0xeee2,	// (0x00041ab1) vradio_rocker_control_pane_g4

0xeeea,	// (0x00041ab9) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x00042426) vradio_rocker_control_pane_g

0x8c88,	// (0x0003b857) vradio_frequency_info_pane_g1

0xeef2,	// (0x00041ac1) vradio_frequency_info_pane_t1_ParamLimits

0xeef2,	// (0x00041ac1) vradio_frequency_info_pane_t1

0x8c92,	// (0x0003b861) vradio_tuning_pane_g1

0x8c9b,	// (0x0003b86a) vradio_tuning_pane_t1

0x464d,	// (0x0003721c) area_side_right_pane_ParamLimits

0x464d,	// (0x0003721c) area_side_right_pane

0xe3b9,	// (0x00040f88) status_small_pane_g1

0xe3c1,	// (0x00040f90) status_small_pane_g2

0xe3ca,	// (0x00040f99) status_small_pane_g3

0xe3d3,	// (0x00040fa2) status_small_pane_g4

0x0003,

0xf617,	// (0x000421e6) status_small_pane_g

0xe3dc,	// (0x00040fab) status_small_pane_t1

0x45be,	// (0x0003718d) main_video3_pane

0xef06,	// (0x00041ad5) cams_zoom_vslider_pane

0xef0e,	// (0x00041add) image3_wide_pane_ParamLimits

0xef0e,	// (0x00041add) image3_wide_pane

0xef28,	// (0x00041af7) image3_wide_small_pane

0xef34,	// (0x00041b03) main_video3_pane_g1_ParamLimits

0xef34,	// (0x00041b03) main_video3_pane_g1

0xef50,	// (0x00041b1f) main_video3_pane_g2_ParamLimits

0xef50,	// (0x00041b1f) main_video3_pane_g2

0x0001,

0xf862,	// (0x00042431) main_video3_pane_g_ParamLimits

0xf862,	// (0x00042431) main_video3_pane_g

0xef6c,	// (0x00041b3b) main_video3_pane_t1_ParamLimits

0xef6c,	// (0x00041b3b) main_video3_pane_t1

0xef97,	// (0x00041b66) main_video3_pane_t2_ParamLimits

0xef97,	// (0x00041b66) main_video3_pane_t2

0xefc2,	// (0x00041b91) main_video3_pane_t3_ParamLimits

0xefc2,	// (0x00041b91) main_video3_pane_t3

0x0002,

0xf867,	// (0x00042436) main_video3_pane_t_ParamLimits

0xf867,	// (0x00042436) main_video3_pane_t

0xefef,	// (0x00041bbe) cams_zoom_vslider_pane_g1

0xeff8,	// (0x00041bc7) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0004243d) cams_zoom_vslider_pane_g

0xf000,	// (0x00041bcf) small_slider_vertical_pane

0xe84a,	// (0x00041419) small_slider_vertical_pane_g1

0xe84a,	// (0x00041419) small_slider_vertical_pane_g2

0xf008,	// (0x00041bd7) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x00042442) small_slider_vertical_pane_g

0x45be,	// (0x0003718d) main_hwr_training_pane

0xf011,	// (0x00041be0) hwr_training_instruct_pane_ParamLimits

0xf011,	// (0x00041be0) hwr_training_instruct_pane

0x8caa,	// (0x0003b879) hwr_training_navi_pane_ParamLimits

0x8caa,	// (0x0003b879) hwr_training_navi_pane

0x8cc4,	// (0x0003b893) hwr_training_write_pane_ParamLimits

0x8cc4,	// (0x0003b893) hwr_training_write_pane

0x45be,	// (0x0003718d) bg_frame_shadow_pane

0xf048,	// (0x00041c17) hwr_training_write_pane_g1

0xf050,	// (0x00041c1f) hwr_training_write_pane_g2

0xf058,	// (0x00041c27) hwr_training_write_pane_g3

0xf060,	// (0x00041c2f) hwr_training_write_pane_g4

0xf068,	// (0x00041c37) hwr_training_write_pane_g5

0xf070,	// (0x00041c3f) hwr_training_write_pane_g6

0xf078,	// (0x00041c47) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x00042449) hwr_training_write_pane_g

0x8cfc,	// (0x0003b8cb) hwr_training_navi_pane_g1_ParamLimits

0x8cfc,	// (0x0003b8cb) hwr_training_navi_pane_g1

0x8d0e,	// (0x0003b8dd) hwr_training_navi_pane_g2_ParamLimits

0x8d0e,	// (0x0003b8dd) hwr_training_navi_pane_g2

0x8d20,	// (0x0003b8ef) hwr_training_navi_pane_g3_ParamLimits

0x8d20,	// (0x0003b8ef) hwr_training_navi_pane_g3

0x8d30,	// (0x0003b8ff) hwr_training_navi_pane_g4_ParamLimits

0x8d30,	// (0x0003b8ff) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x00042458) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x00042458) hwr_training_navi_pane_g

0x8d4a,	// (0x0003b919) hwr_training_navi_pane_t1

0x8d58,	// (0x0003b927) list_single_hwr_training_instruct_pane_ParamLimits

0x8d58,	// (0x0003b927) list_single_hwr_training_instruct_pane

0xf080,	// (0x00041c4f) list_single_hwr_training_instruct_pane_t1

0xe781,	// (0x00041350) bg_frame_shadow_pane_g1

0xf08f,	// (0x00041c5e) bg_frame_shadow_pane_g2

0xf097,	// (0x00041c66) bg_frame_shadow_pane_g3

0xf09f,	// (0x00041c6e) bg_frame_shadow_pane_g4

0xf0a7,	// (0x00041c76) bg_frame_shadow_pane_g5

0xf0af,	// (0x00041c7e) bg_frame_shadow_pane_g6

0xf0b7,	// (0x00041c86) bg_frame_shadow_pane_g7

0xc5c4,	// (0x0003f193) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x00042463) bg_frame_shadow_pane_g

0x45be,	// (0x0003718d) main_video_tele_dialer_pane

0x8d7d,	// (0x0003b94c) aid_size_cell_video_keypad_ParamLimits

0x8d7d,	// (0x0003b94c) aid_size_cell_video_keypad

0x8d8d,	// (0x0003b95c) grid_video_dialer_keypad_pane_ParamLimits

0x8d8d,	// (0x0003b95c) grid_video_dialer_keypad_pane

0x8dbf,	// (0x0003b98e) video_down_pane_cp_ParamLimits

0x8dbf,	// (0x0003b98e) video_down_pane_cp

0x8dcb,	// (0x0003b99a) cell_video_dialer_keypad_pane_ParamLimits

0x8dcb,	// (0x0003b99a) cell_video_dialer_keypad_pane

0xf0db,	// (0x00041caa) bg_button_pane_cp08_ParamLimits

0xf0db,	// (0x00041caa) bg_button_pane_cp08

0x8de0,	// (0x0003b9af) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8de0,	// (0x0003b9af) cell_video_dialer_keypad_pane_g1

0x85f7,	// (0x0003b1c6) mup3_rocker2_pane_ParamLimits

0x85f7,	// (0x0003b1c6) mup3_rocker2_pane

0xe84a,	// (0x00041419) mup3_rocker2_pane_g1

0x755f,	// (0x0003a12e) main_dialer2_pane

0x45be,	// (0x0003718d) main_mp4_pane

0x8e22,	// (0x0003b9f1) main_mp4_pane_g1_ParamLimits

0x8e22,	// (0x0003b9f1) main_mp4_pane_g1

0x8e30,	// (0x0003b9ff) main_mp4_pane_g2_ParamLimits

0x8e30,	// (0x0003b9ff) main_mp4_pane_g2

0x8e3e,	// (0x0003ba0d) main_mp4_pane_g3_ParamLimits

0x8e3e,	// (0x0003ba0d) main_mp4_pane_g3

0x8e83,	// (0x0003ba52) main_mp4_pane_g4_ParamLimits

0x8e83,	// (0x0003ba52) main_mp4_pane_g4

0x8eab,	// (0x0003ba7a) main_mp4_pane_g5_ParamLimits

0x8eab,	// (0x0003ba7a) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x00042483) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x00042483) main_mp4_pane_g

0x8efb,	// (0x0003baca) main_mp4_pane_t1_ParamLimits

0x8efb,	// (0x0003baca) main_mp4_pane_t1

0x8f57,	// (0x0003bb26) main_mp4_pane_t2_ParamLimits

0x8f57,	// (0x0003bb26) main_mp4_pane_t2

0x00d3,	// (0x00032ca2) main_mp4_pane_t3_ParamLimits

0x00d3,	// (0x00032ca2) main_mp4_pane_t3

0x8fa9,	// (0x0003bb78) main_mp4_pane_t4_ParamLimits

0x8fa9,	// (0x0003bb78) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x00042490) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x00042490) main_mp4_pane_t

0x8fed,	// (0x0003bbbc) mp4_progress_pane_ParamLimits

0x8fed,	// (0x0003bbbc) mp4_progress_pane

0x9037,	// (0x0003bc06) mp4_rocker_pane_ParamLimits

0x9037,	// (0x0003bc06) mp4_rocker_pane

0x01a9,	// (0x00032d78) mp4_progress_pane_t1

0x01c2,	// (0x00032d91) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x00042499) mp4_progress_pane_t

0x01db,	// (0x00032daa) mup_progress_pane_cp04

0xe84a,	// (0x00041419) mp4_rocker_pane_g1

0x9057,	// (0x0003bc26) aid_cell_size_keypad2_ParamLimits

0x9057,	// (0x0003bc26) aid_cell_size_keypad2

0x9067,	// (0x0003bc36) dialer2_ne_pane_ParamLimits

0x9067,	// (0x0003bc36) dialer2_ne_pane

0x9075,	// (0x0003bc44) grid_dialer2_keypad_pane_ParamLimits

0x9075,	// (0x0003bc44) grid_dialer2_keypad_pane

0x0d44,	// (0x00033913) bg_popup_call_pane_cp07_ParamLimits

0x0d44,	// (0x00033913) bg_popup_call_pane_cp07

0x9085,	// (0x0003bc54) dialer2_ne_pane_t1_ParamLimits

0x9085,	// (0x0003bc54) dialer2_ne_pane_t1

0x90aa,	// (0x0003bc79) cell_dialer2_keypad_pane_ParamLimits

0x90aa,	// (0x0003bc79) cell_dialer2_keypad_pane

0x0203,	// (0x00032dd2) bg_button_pane_pane_cp04_ParamLimits

0x0203,	// (0x00032dd2) bg_button_pane_pane_cp04

0x90bf,	// (0x0003bc8e) cell_dialer2_keypad_pane_g1_ParamLimits

0x90bf,	// (0x0003bc8e) cell_dialer2_keypad_pane_g1

0x5535,	// (0x00038104) aid_placing_vt_set_content_ParamLimits

0x5535,	// (0x00038104) aid_placing_vt_set_content

0x5561,	// (0x00038130) aid_placing_vt_set_title_ParamLimits

0x5561,	// (0x00038130) aid_placing_vt_set_title

0x45be,	// (0x0003718d) main_image3_pane

0x9159,	// (0x0003bd28) area_side_right_pane_cp01_ParamLimits

0x9159,	// (0x0003bd28) area_side_right_pane_cp01

0x1302,	// (0x00033ed1) main_image3_pane_g1_ParamLimits

0x1302,	// (0x00033ed1) main_image3_pane_g1

0x9186,	// (0x0003bd55) main_image3_pane_g2_ParamLimits

0x9186,	// (0x0003bd55) main_image3_pane_g2

0x919f,	// (0x0003bd6e) main_image3_pane_g3_ParamLimits

0x919f,	// (0x0003bd6e) main_image3_pane_g3

0x91b8,	// (0x0003bd87) main_image3_pane_g4_ParamLimits

0x91b8,	// (0x0003bd87) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x000424a8) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x000424a8) main_image3_pane_g

0x91d1,	// (0x0003bda0) main_image3_pane_t1_ParamLimits

0x91d1,	// (0x0003bda0) main_image3_pane_t1

0x91f6,	// (0x0003bdc5) main_image3_pane_t2_ParamLimits

0x91f6,	// (0x0003bdc5) main_image3_pane_t2

0x9215,	// (0x0003bde4) main_image3_pane_t3_ParamLimits

0x9215,	// (0x0003bde4) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x000424b1) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x000424b1) main_image3_pane_t

0x486d,	// (0x0003743c) grid_sctrl_middle_pane_cp01_ParamLimits

0x486d,	// (0x0003743c) grid_sctrl_middle_pane_cp01

0x9276,	// (0x0003be45) cell_sctrl_middle_pane_cp01_ParamLimits

0x9276,	// (0x0003be45) cell_sctrl_middle_pane_cp01

0x9287,	// (0x0003be56) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9287,	// (0x0003be56) cell_sctrl_middle_pane_cp01_g1

0x45be,	// (0x0003718d) main_call4_pane

0x9294,	// (0x0003be63) aid_size_button_call4_ParamLimits

0x9294,	// (0x0003be63) aid_size_button_call4

0x92c4,	// (0x0003be93) call4_windows_pane_ParamLimits

0x92c4,	// (0x0003be93) call4_windows_pane

0x92de,	// (0x0003bead) grid_call4_button_pane_ParamLimits

0x92de,	// (0x0003bead) grid_call4_button_pane

0x0241,	// (0x00032e10) call4_windows_conf_pane

0x0258,	// (0x00032e27) popup_call4_audio_first_window_ParamLimits

0x0258,	// (0x00032e27) popup_call4_audio_first_window

0x02a4,	// (0x00032e73) popup_call4_audio_second_window_ParamLimits

0x02a4,	// (0x00032e73) popup_call4_audio_second_window

0x02b8,	// (0x00032e87) popup_call4_audio_wait_window_ParamLimits

0x02b8,	// (0x00032e87) popup_call4_audio_wait_window

0x9302,	// (0x0003bed1) cell_call4_button_pane_ParamLimits

0x9302,	// (0x0003bed1) cell_call4_button_pane

0x9327,	// (0x0003bef6) bg_button_pane_cp09_ParamLimits

0x9327,	// (0x0003bef6) bg_button_pane_cp09

0x9333,	// (0x0003bf02) cell_call4_button_pane_g1_ParamLimits

0x9333,	// (0x0003bf02) cell_call4_button_pane_g1

0x9340,	// (0x0003bf0f) cell_call4_button_pane_t1_ParamLimits

0x9340,	// (0x0003bf0f) cell_call4_button_pane_t1

0x0300,	// (0x00032ecf) popup_call4_audio_conf_window_ParamLimits

0x0300,	// (0x00032ecf) popup_call4_audio_conf_window

0x862a,	// (0x0003b1f9) mup3_progress_pane_t1_ParamLimits

0x8649,	// (0x0003b218) mup3_progress_pane_t2_ParamLimits

0xeb28,	// (0x000416f7) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0004238a) mup3_progress_pane_t_ParamLimits

0xeb45,	// (0x00041714) mup_progress_pane_cp03_ParamLimits

0x8b49,	// (0x0003b718) mup3_control_keys_pane_g4_copy1

0x901b,	// (0x0003bbea) mp4_rocker2_pane_ParamLimits

0x901b,	// (0x0003bbea) mp4_rocker2_pane

0x031c,	// (0x00032eeb) mp4_rocker2_pane_g1

0x0314,	// (0x00032ee3) mp4_rocker2_pane_g2

0x9352,	// (0x0003bf21) mp4_rocker2_pane_g3

0x935a,	// (0x0003bf29) mp4_rocker2_pane_g4

0x9362,	// (0x0003bf31) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x000424ba) mp4_rocker2_pane_g

0x45be,	// (0x0003718d) main_camera4_pane

0x45be,	// (0x0003718d) main_video4_pane

0x8d9b,	// (0x0003b96a) main_video_tele_dialer_pane_t1_ParamLimits

0x8d9b,	// (0x0003b96a) main_video_tele_dialer_pane_t1

0x8dad,	// (0x0003b97c) main_video_tele_dialer_pane_t2_ParamLimits

0x8dad,	// (0x0003b97c) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x00042474) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x00042474) main_video_tele_dialer_pane_t

0x9382,	// (0x0003bf51) cam4_autofocus_pane_ParamLimits

0x9382,	// (0x0003bf51) cam4_autofocus_pane

0x939c,	// (0x0003bf6b) cam4_image_uncrop_pane_ParamLimits

0x939c,	// (0x0003bf6b) cam4_image_uncrop_pane

0x93b3,	// (0x0003bf82) cam4_indicators_pane_ParamLimits

0x93b3,	// (0x0003bf82) cam4_indicators_pane

0x93cf,	// (0x0003bf9e) main_camera4_pane_g1_ParamLimits

0x93cf,	// (0x0003bf9e) main_camera4_pane_g1

0x93db,	// (0x0003bfaa) main_camera4_pane_g2_ParamLimits

0x93db,	// (0x0003bfaa) main_camera4_pane_g2

0x93db,	// (0x0003bfaa) main_camera4_pane_g3_ParamLimits

0x93db,	// (0x0003bfaa) main_camera4_pane_g3

0x93e7,	// (0x0003bfb6) main_camera4_pane_g4_ParamLimits

0x93e7,	// (0x0003bfb6) main_camera4_pane_g4

0x93f3,	// (0x0003bfc2) main_camera4_pane_g5_ParamLimits

0x93f3,	// (0x0003bfc2) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x000424c5) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x000424c5) main_camera4_pane_g

0x940d,	// (0x0003bfdc) main_camera4_pane_t1_ParamLimits

0x940d,	// (0x0003bfdc) main_camera4_pane_t1

0xeaad,	// (0x0004167c) bg_tb_trans_pane_cp06

0x945d,	// (0x0003c02c) cam4_indicators_pane_g1

0x946e,	// (0x0003c03d) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x000424e0) cam4_indicators_pane_g

0x948c,	// (0x0003c05b) cam4_indicators_pane_t1

0x94b6,	// (0x0003c085) main_video4_pane_g1_ParamLimits

0x94b6,	// (0x0003c085) main_video4_pane_g1

0x94c2,	// (0x0003c091) main_video4_pane_g2_ParamLimits

0x94c2,	// (0x0003c091) main_video4_pane_g2

0x94ce,	// (0x0003c09d) main_video4_pane_g3_ParamLimits

0x94ce,	// (0x0003c09d) main_video4_pane_g3

0x94da,	// (0x0003c0a9) main_video4_pane_g4_ParamLimits

0x94da,	// (0x0003c0a9) main_video4_pane_g4

0x0004,

0xf918,	// (0x000424e7) main_video4_pane_g_ParamLimits

0xf918,	// (0x000424e7) main_video4_pane_g

0x94fa,	// (0x0003c0c9) vid4_indicators_pane_ParamLimits

0x94fa,	// (0x0003c0c9) vid4_indicators_pane

0x9518,	// (0x0003c0e7) video4_image_uncrop_cif_pane_ParamLimits

0x9518,	// (0x0003c0e7) video4_image_uncrop_cif_pane

0x9527,	// (0x0003c0f6) video4_image_uncrop_nhd_pane_ParamLimits

0x9527,	// (0x0003c0f6) video4_image_uncrop_nhd_pane

0x939c,	// (0x0003bf6b) video4_image_uncrop_vga_pane_ParamLimits

0x939c,	// (0x0003bf6b) video4_image_uncrop_vga_pane

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp07

0x953e,	// (0x0003c10d) vid4_indicators_pane_g1

0x954f,	// (0x0003c11e) vid4_indicators_pane_g2

0x9560,	// (0x0003c12f) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x000424f2) vid4_indicators_pane_g

0x958d,	// (0x0003c15c) vid4_indicators_pane_t1

0x95a6,	// (0x0003c175) cam4_autofocus_pane_g1

0x95ae,	// (0x0003c17d) cam4_autofocus_pane_g2

0x95b6,	// (0x0003c185) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x000424fd) cam4_autofocus_pane_g

0x95be,	// (0x0003c18d) cam4_autofocus_pane_g3_copy1

0xf0bf,	// (0x00041c8e) video_down_pane_cp_t1

0xf0cd,	// (0x00041c9c) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x00042479) video_down_pane_cp_t

0x486d,	// (0x0003743c) popup_vitu2_window_ParamLimits

0x486d,	// (0x0003743c) popup_vitu2_window

0x95c6,	// (0x0003c195) aid_size_cell2_itu2_ParamLimits

0x95c6,	// (0x0003c195) aid_size_cell2_itu2

0x95e8,	// (0x0003c1b7) aid_size_cell_itu2_ParamLimits

0x95e8,	// (0x0003c1b7) aid_size_cell_itu2

0x0d44,	// (0x00033913) bg_popup_window_pane_cp09_ParamLimits

0x0d44,	// (0x00033913) bg_popup_window_pane_cp09

0x962c,	// (0x0003c1fb) field_vitu2_entry_pane_ParamLimits

0x962c,	// (0x0003c1fb) field_vitu2_entry_pane

0x964c,	// (0x0003c21b) grid_vitu2_function_pane_ParamLimits

0x964c,	// (0x0003c21b) grid_vitu2_function_pane

0x9690,	// (0x0003c25f) grid_vitu2_itu_pane_ParamLimits

0x9690,	// (0x0003c25f) grid_vitu2_itu_pane

0x9708,	// (0x0003c2d7) cell_vitu2_itu_pane_ParamLimits

0x9708,	// (0x0003c2d7) cell_vitu2_itu_pane

0x971d,	// (0x0003c2ec) cell_vitu2_function_pane_ParamLimits

0x971d,	// (0x0003c2ec) cell_vitu2_function_pane

0x03e9,	// (0x00032fb8) bg_popup_call_pane_cp08_ParamLimits

0x03e9,	// (0x00032fb8) bg_popup_call_pane_cp08

0x0402,	// (0x00032fd1) field_vitu2_entry_pane_g1

0x040e,	// (0x00032fdd) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x00042504) field_vitu2_entry_pane_g

0x376e,	// (0x0003633d) field_vitu2_entry_pane_t1_ParamLimits

0x376e,	// (0x0003633d) field_vitu2_entry_pane_t1

0x379e,	// (0x0003636d) field_vitu2_entry_pane_t2_ParamLimits

0x379e,	// (0x0003636d) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0004250b) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0004250b) field_vitu2_entry_pane_t

0x975c,	// (0x0003c32b) bg_button_pane_cp010_ParamLimits

0x975c,	// (0x0003c32b) bg_button_pane_cp010

0x976a,	// (0x0003c339) cell_vitu2_itu_pane_g1

0x9788,	// (0x0003c357) cell_vitu2_itu_pane_t1_ParamLimits

0x9788,	// (0x0003c357) cell_vitu2_itu_pane_t1

0x37bb,	// (0x0003638a) cell_vitu2_itu_pane_t2_ParamLimits

0x37bb,	// (0x0003638a) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x00042515) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x00042515) cell_vitu2_itu_pane_t

0xd8c0,	// (0x0004048f) bg_button_pane_cp011

0x97da,	// (0x0003c3a9) cell_vitu2_function_pane_g1

0x45be,	// (0x0003718d) main_myfav_hc_pane

0x9257,	// (0x0003be26) popup_image3_note_pane_ParamLimits

0x9257,	// (0x0003be26) popup_image3_note_pane

0x9265,	// (0x0003be34) popup_image3_tool_bar_pane_ParamLimits

0x9265,	// (0x0003be34) popup_image3_tool_bar_pane

0x3829,	// (0x000363f8) cell_vitu2_itu_pane_t3_ParamLimits

0x3829,	// (0x000363f8) cell_vitu2_itu_pane_t3

0x45be,	// (0x0003718d) bg_popup_trans_pane

0x048a,	// (0x00033059) grid_image3_tool_bar_pane

0x0494,	// (0x00033063) bg_popup_trans_pane_g1

0xc901,	// (0x0003f4d0) bg_popup_trans_pane_g2

0x049c,	// (0x0003306b) bg_popup_trans_pane_g3

0x04a4,	// (0x00033073) bg_popup_trans_pane_g4

0x04ac,	// (0x0003307b) bg_popup_trans_pane_g5

0x04b4,	// (0x00033083) bg_popup_trans_pane_g6

0x04bc,	// (0x0003308b) bg_popup_trans_pane_g7

0x04c4,	// (0x00033093) bg_popup_trans_pane_g8

0xc8e1,	// (0x0003f4b0) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0004251c) bg_popup_trans_pane_g

0x04cc,	// (0x0003309b) cell_image3_tool_bar_pane_ParamLimits

0x04cc,	// (0x0003309b) cell_image3_tool_bar_pane

0xe84a,	// (0x00041419) cell_image3_tool_bar_pane_g1

0x45be,	// (0x0003718d) bg_popup_trans_pane_cp1

0x04e0,	// (0x000330af) popup_image3_note_pane_t1

0x04ee,	// (0x000330bd) popup_image3_note_pane_t2

0x04fc,	// (0x000330cb) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0004252f) popup_image3_note_pane_t

0x050a,	// (0x000330d9) popup_image3_note_pane_t3_copy1

0x97ee,	// (0x0003c3bd) bg_myfav_hc_instruction_pane_ParamLimits

0x97ee,	// (0x0003c3bd) bg_myfav_hc_instruction_pane

0x9806,	// (0x0003c3d5) cell_myfav_contact_pane_ParamLimits

0x9806,	// (0x0003c3d5) cell_myfav_contact_pane

0x9820,	// (0x0003c3ef) cell_myfav_contact_pane_cp1_ParamLimits

0x9820,	// (0x0003c3ef) cell_myfav_contact_pane_cp1

0x9838,	// (0x0003c407) cell_myfav_contact_pane_cp2_ParamLimits

0x9838,	// (0x0003c407) cell_myfav_contact_pane_cp2

0x9850,	// (0x0003c41f) cell_myfav_contact_pane_cp3_ParamLimits

0x9850,	// (0x0003c41f) cell_myfav_contact_pane_cp3

0x9867,	// (0x0003c436) cell_myfav_contact_pane_cp4_ParamLimits

0x9867,	// (0x0003c436) cell_myfav_contact_pane_cp4

0x987d,	// (0x0003c44c) cell_myfav_contact_pane_cp5_ParamLimits

0x987d,	// (0x0003c44c) cell_myfav_contact_pane_cp5

0x9891,	// (0x0003c460) cell_myfav_contact_pane_cp6_ParamLimits

0x9891,	// (0x0003c460) cell_myfav_contact_pane_cp6

0x98a5,	// (0x0003c474) cell_myfav_contact_pane_cp7_ParamLimits

0x98a5,	// (0x0003c474) cell_myfav_contact_pane_cp7

0x0518,	// (0x000330e7) listscroll_gen_pane_cp05

0x98bd,	// (0x0003c48c) main_myfav_hc_pane_g1_ParamLimits

0x98bd,	// (0x0003c48c) main_myfav_hc_pane_g1

0x98d3,	// (0x0003c4a2) main_myfav_hc_pane_g2_ParamLimits

0x98d3,	// (0x0003c4a2) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x00042536) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x00042536) main_myfav_hc_pane_g

0x9901,	// (0x0003c4d0) main_myfav_hc_pane_t1_ParamLimits

0x9901,	// (0x0003c4d0) main_myfav_hc_pane_t1

0x0521,	// (0x000330f0) main_myfav_hc_pane_t2_ParamLimits

0x0521,	// (0x000330f0) main_myfav_hc_pane_t2

0x0533,	// (0x00033102) main_myfav_hc_pane_t3_ParamLimits

0x0533,	// (0x00033102) main_myfav_hc_pane_t3

0x9918,	// (0x0003c4e7) main_myfav_hc_pane_t4_ParamLimits

0x9918,	// (0x0003c4e7) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0004253d) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0004253d) main_myfav_hc_pane_t

0xe84a,	// (0x00041419) bg_myfav_hc_instruction_pane_g1

0x0545,	// (0x00033114) cell_myfav_contact_pane_g1_ParamLimits

0x0545,	// (0x00033114) cell_myfav_contact_pane_g1

0x0545,	// (0x00033114) cell_myfav_contact_pane_g2_ParamLimits

0x0545,	// (0x00033114) cell_myfav_contact_pane_g2

0x0551,	// (0x00033120) cell_myfav_contact_pane_g3_ParamLimits

0x0551,	// (0x00033120) cell_myfav_contact_pane_g3

0xeb12,	// (0x000416e1) cell_myfav_contact_pane_g4_ParamLimits

0xeb12,	// (0x000416e1) cell_myfav_contact_pane_g4

0x055e,	// (0x0003312d) cell_myfav_contact_pane_g5_ParamLimits

0x055e,	// (0x0003312d) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x00042548) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x00042548) cell_myfav_contact_pane_g

0x98e9,	// (0x0003c4b8) main_myfav_hc_pane_g3_ParamLimits

0x98e9,	// (0x0003c4b8) main_myfav_hc_pane_g3

0x4780,	// (0x0003734f) popup_adpt_find_window

0x9942,	// (0x0003c511) afind_page_pane_ParamLimits

0x9942,	// (0x0003c511) afind_page_pane

0x994f,	// (0x0003c51e) aid_size_cell_afind_ParamLimits

0x994f,	// (0x0003c51e) aid_size_cell_afind

0x9969,	// (0x0003c538) bg_popup_sub_pane_cp09_ParamLimits

0x9969,	// (0x0003c538) bg_popup_sub_pane_cp09

0x9976,	// (0x0003c545) find_pane_cp01_ParamLimits

0x9976,	// (0x0003c545) find_pane_cp01

0x056a,	// (0x00033139) grid_afind_control_pane_ParamLimits

0x056a,	// (0x00033139) grid_afind_control_pane

0x9983,	// (0x0003c552) grid_afind_pane_ParamLimits

0x9983,	// (0x0003c552) grid_afind_pane

0x999f,	// (0x0003c56e) cell_afind_pane_ParamLimits

0x999f,	// (0x0003c56e) cell_afind_pane

0xe84a,	// (0x00041419) afind_page_pane_g1

0x99e7,	// (0x0003c5b6) afind_page_pane_g2

0x99f0,	// (0x0003c5bf) afind_page_pane_g3

0x0002,

0xf984,	// (0x00042553) afind_page_pane_g

0x99f9,	// (0x0003c5c8) afind_page_pane_t1

0x057e,	// (0x0003314d) cell_afind_grid_control_pane_ParamLimits

0x057e,	// (0x0003314d) cell_afind_grid_control_pane

0x0203,	// (0x00032dd2) bg_button_pane_cp69_ParamLimits

0x0203,	// (0x00032dd2) bg_button_pane_cp69

0x9a19,	// (0x0003c5e8) cell_afind_pane_g1_ParamLimits

0x9a19,	// (0x0003c5e8) cell_afind_pane_g1

0x9a26,	// (0x0003c5f5) cell_afind_pane_t1_ParamLimits

0x9a26,	// (0x0003c5f5) cell_afind_pane_t1

0xc6fa,	// (0x0003f2c9) bg_button_pane_cp72

0x058d,	// (0x0003315c) cell_afind_grid_control_pane_g1

0x70dd,	// (0x00039cac) aid_image_placing_area_ParamLimits

0x70dd,	// (0x00039cac) aid_image_placing_area

0xee11,	// (0x000419e0) field_vitu_entry_pane_g1_ParamLimits

0xee11,	// (0x000419e0) field_vitu_entry_pane_g1

0xee1d,	// (0x000419ec) field_vitu_entry_pane_g2_ParamLimits

0xee1d,	// (0x000419ec) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x00042404) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x00042404) field_vitu_entry_pane_g

0x8bd1,	// (0x0003b7a0) cell_vitu_itu_pane_g1_ParamLimits

0x8c13,	// (0x0003b7e2) cell_vitu_itu_pane_t3_ParamLimits

0x8c13,	// (0x0003b7e2) cell_vitu_itu_pane_t3

0x01a9,	// (0x00032d78) mp4_progress_pane_t1_ParamLimits

0x01c2,	// (0x00032d91) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x00042499) mp4_progress_pane_t_ParamLimits

0x01db,	// (0x00032daa) mup_progress_pane_cp04_ParamLimits

0x992c,	// (0x0003c4fb) main_myfav_hc_pane_t5_ParamLimits

0x992c,	// (0x0003c4fb) main_myfav_hc_pane_t5

0x4610,	// (0x000371df) aid_zoom_text_primary

0x4780,	// (0x0003734f) popup_adpt_find_window_ParamLimits

0xd8c0,	// (0x0004048f) main_cam_set_pane

0x93c1,	// (0x0003bf90) cam4_zoom_pane_ParamLimits

0x93c1,	// (0x0003bf90) cam4_zoom_pane

0x9a38,	// (0x0003c607) main_cam_set_pane_g1_ParamLimits

0x9a38,	// (0x0003c607) main_cam_set_pane_g1

0x9a46,	// (0x0003c615) main_cam_set_pane_g2_ParamLimits

0x9a46,	// (0x0003c615) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0004255a) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0004255a) main_cam_set_pane_g

0x9a52,	// (0x0003c621) main_cam_set_pane_t1_ParamLimits

0x9a52,	// (0x0003c621) main_cam_set_pane_t1

0x9a6e,	// (0x0003c63d) main_cset_listscroll_pane_ParamLimits

0x9a6e,	// (0x0003c63d) main_cset_listscroll_pane

0x9a99,	// (0x0003c668) main_cset_slider_pane_ParamLimits

0x9a99,	// (0x0003c668) main_cset_slider_pane

0x059e,	// (0x0003316d) main_cset_list_pane_ParamLimits

0x059e,	// (0x0003316d) main_cset_list_pane

0x05ae,	// (0x0003317d) scroll_pane_cp028

0x9ab8,	// (0x0003c687) aid_area_touch_slider

0x9ad4,	// (0x0003c6a3) cset_slider_pane

0x9afe,	// (0x0003c6cd) main_cset_slider_pane_g1

0x9b13,	// (0x0003c6e2) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0004255f) main_cset_slider_pane_g

0x05e7,	// (0x000331b6) main_cset_slider_pane_t1

0x9bd5,	// (0x0003c7a4) main_cset_slider_pane_t2

0x9bef,	// (0x0003c7be) main_cset_slider_pane_t3

0x9c09,	// (0x0003c7d8) main_cset_slider_pane_t4

0x9c23,	// (0x0003c7f2) main_cset_slider_pane_t5

0x9c41,	// (0x0003c810) main_cset_slider_pane_t6

0x9c58,	// (0x0003c827) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x00042584) main_cset_slider_pane_t

0x9d64,	// (0x0003c933) cset_list_set_pane_ParamLimits

0x9d64,	// (0x0003c933) cset_list_set_pane

0x9d7a,	// (0x0003c949) aid_position_infowindow_above

0x9d82,	// (0x0003c951) aid_position_infowindow_below

0x3876,	// (0x00036445) cset_list_set_pane_g1_ParamLimits

0x3876,	// (0x00036445) cset_list_set_pane_g1

0x3882,	// (0x00036451) cset_list_set_pane_g3_ParamLimits

0x3882,	// (0x00036451) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x000425a3) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x000425a3) cset_list_set_pane_g

0x3891,	// (0x00036460) cset_list_set_pane_t1_ParamLimits

0x3891,	// (0x00036460) cset_list_set_pane_t1

0xd8c0,	// (0x0004048f) list_highlight_pane_cp021_ParamLimits

0xd8c0,	// (0x0004048f) list_highlight_pane_cp021

0xd122,	// (0x0003fcf1) cset_slider_pane_g1

0xd134,	// (0x0003fd03) cset_slider_pane_g2

0xd12b,	// (0x0003fcfa) cset_slider_pane_g3

0x0002,

0xf9d9,	// (0x000425a8) cset_slider_pane_g

0x9d8a,	// (0x0003c959) aid_area_touch_cam4_zoom

0x9d92,	// (0x0003c961) cam4_zoom_cont_pane

0x9d9a,	// (0x0003c969) cam4_zoom_pane_g1

0x9da2,	// (0x0003c971) cam4_zoom_pane_g2

0x9daa,	// (0x0003c979) cam4_zoom_pane_g3

0x0002,

0xf9e0,	// (0x000425af) cam4_zoom_pane_g

0x1093,	// (0x00033c62) cam4_zoom_cont_pane_g1

0x109c,	// (0x00033c6b) cam4_zoom_cont_pane_g2

0x10a5,	// (0x00033c74) cam4_zoom_cont_pane_g3

0x0002,

0xf9e7,	// (0x000425b6) cam4_zoom_cont_pane_g

0x92ae,	// (0x0003be7d) call4_image_pane_ParamLimits

0x92ae,	// (0x0003be7d) call4_image_pane

0x0241,	// (0x00032e10) call4_windows_conf_pane_ParamLimits

0x0282,	// (0x00032e51) popup_call4_audio_in_window_ParamLimits

0x0282,	// (0x00032e51) popup_call4_audio_in_window

0x45be,	// (0x0003718d) bg_popup_call2_act_pane_cp02

0x02f8,	// (0x00032ec7) call4_list_conf_pane

0xe84a,	// (0x00041419) call4_image_pane_g1

0xe84a,	// (0x00041419) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x000422ca) call4_image_pane_g

0x06f2,	// (0x000332c1) list_single_graphic_popup_conf4_pane_ParamLimits

0x06f2,	// (0x000332c1) list_single_graphic_popup_conf4_pane

0x45be,	// (0x0003718d) list_highlight_pane_cp022

0x0705,	// (0x000332d4) list_single_graphic_popup_conf4_pane_g1

0xce01,	// (0x0003f9d0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ee,	// (0x000425bd) list_single_graphic_popup_conf4_pane_g

0x070d,	// (0x000332dc) list_single_graphic_popup_conf4_pane_t1

0x56c5,	// (0x00038294) popup_vtel_slider_window_ParamLimits

0x56c5,	// (0x00038294) popup_vtel_slider_window

0x01f1,	// (0x00032dc0) dialer2_ne_pane_t2_ParamLimits

0x01f1,	// (0x00032dc0) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0004249e) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0004249e) dialer2_ne_pane_t

0xd8c0,	// (0x0004048f) bg_popup_sub_pane_cp010_ParamLimits

0xd8c0,	// (0x0004048f) bg_popup_sub_pane_cp010

0x9db2,	// (0x0003c981) popup_vtel_slider_window_g1_ParamLimits

0x9db2,	// (0x0003c981) popup_vtel_slider_window_g1

0x9dbe,	// (0x0003c98d) popup_vtel_slider_window_g2_ParamLimits

0x9dbe,	// (0x0003c98d) popup_vtel_slider_window_g2

0x0003,

0xf9f3,	// (0x000425c2) popup_vtel_slider_window_g_ParamLimits

0xf9f3,	// (0x000425c2) popup_vtel_slider_window_g

0x9e06,	// (0x0003c9d5) vtel_slider_pane_ParamLimits

0x9e06,	// (0x0003c9d5) vtel_slider_pane

0x9e15,	// (0x0003c9e4) vtel_slider_pane_g1_ParamLimits

0x9e15,	// (0x0003c9e4) vtel_slider_pane_g1

0x9e22,	// (0x0003c9f1) vtel_slider_pane_g2_ParamLimits

0x9e22,	// (0x0003c9f1) vtel_slider_pane_g2

0x9e2f,	// (0x0003c9fe) vtel_slider_pane_g3_ParamLimits

0x9e2f,	// (0x0003c9fe) vtel_slider_pane_g3

0x9e15,	// (0x0003c9e4) vtel_slider_pane_g4_ParamLimits

0x9e15,	// (0x0003c9e4) vtel_slider_pane_g4

0x9e3c,	// (0x0003ca0b) vtel_slider_pane_g5_ParamLimits

0x9e3c,	// (0x0003ca0b) vtel_slider_pane_g5

0x0004,

0xf9fc,	// (0x000425cb) vtel_slider_pane_g_ParamLimits

0xf9fc,	// (0x000425cb) vtel_slider_pane_g

0x45be,	// (0x0003718d) main_gallery2_pane

0x960e,	// (0x0003c1dd) aid_size_row_itut2_dropdow_list_ParamLimits

0x960e,	// (0x0003c1dd) aid_size_row_itut2_dropdow_list

0x966e,	// (0x0003c23d) grid_vitu2_function_top_pane_ParamLimits

0x966e,	// (0x0003c23d) grid_vitu2_function_top_pane

0x96c4,	// (0x0003c293) popup_vitu2_dropdown_list_window_ParamLimits

0x96c4,	// (0x0003c293) popup_vitu2_dropdown_list_window

0x96e4,	// (0x0003c2b3) popup_vitu2_match_list_window

0x9e49,	// (0x0003ca18) cell_vitu2_function_top_pane_ParamLimits

0x9e49,	// (0x0003ca18) cell_vitu2_function_top_pane

0x9e69,	// (0x0003ca38) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9e69,	// (0x0003ca38) cell_vitu2_function_top_pane_cp01

0x9e87,	// (0x0003ca56) cell_vitu2_function_top_wide_pane_ParamLimits

0x9e87,	// (0x0003ca56) cell_vitu2_function_top_wide_pane

0xd8c0,	// (0x0004048f) bg_button_pane_cp012

0x9ea5,	// (0x0003ca74) cell_vitu2_function_top_pane_g1

0x9eb4,	// (0x0003ca83) bg_button_pane_cp013_ParamLimits

0x9eb4,	// (0x0003ca83) bg_button_pane_cp013

0x9ed0,	// (0x0003ca9f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9ed0,	// (0x0003ca9f) cell_vitu2_function_top_wide_pane_g1

0x486d,	// (0x0003743c) bg_popup_sub_pane_cp20

0x9ee8,	// (0x0003cab7) list_vitu2_match_list_pane

0x0494,	// (0x00033063) bg_popup_sub_pane_cp20_g1

0x049c,	// (0x0003306b) bg_popup_sub_pane_cp20_g2

0xc901,	// (0x0003f4d0) bg_popup_sub_pane_cp20_g3

0x04a4,	// (0x00033073) bg_popup_sub_pane_cp20_g4

0xc8e1,	// (0x0003f4b0) bg_popup_sub_pane_cp20_g5

0x074d,	// (0x0003331c) bg_popup_sub_pane_cp20_g6

0x04b4,	// (0x00033083) bg_popup_sub_pane_cp20_g7

0x04bc,	// (0x0003308b) bg_popup_sub_pane_cp20_g8

0x04c4,	// (0x00033093) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa07,	// (0x000425d6) bg_popup_sub_pane_cp20_g

0x9f00,	// (0x0003cacf) list_vitu2_match_list_item_pane_ParamLimits

0x9f00,	// (0x0003cacf) list_vitu2_match_list_item_pane

0x9f12,	// (0x0003cae1) list_vitu2_match_list_item_pane_t1

0x45be,	// (0x0003718d) bg_popup_sub_pane_cp21

0xcd29,	// (0x0003f8f8) grid_vitu2_dropdown_list_pane

0x9f20,	// (0x0003caef) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9f20,	// (0x0003caef) cell_vitu2_dropdown_list_char_pane

0x9f41,	// (0x0003cb10) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9f41,	// (0x0003cb10) cell_vitu2_dropdown_list_ctrl_pane

0x07a7,	// (0x00033376) cell_vitu2_dropdown_list_char_pane_g1

0x079e,	// (0x0003336d) cell_vitu2_dropdown_list_char_pane_g2

0x0795,	// (0x00033364) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa24,	// (0x000425f3) cell_vitu2_dropdown_list_char_pane_g

0x9f6d,	// (0x0003cb3c) cell_vitu2_dropdown_list_char_pane_t1

0x9f7b,	// (0x0003cb4a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9f7b,	// (0x0003cb4a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9f8b,	// (0x0003cb5a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9f8b,	// (0x0003cb5a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9f9c,	// (0x0003cb6b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9f9c,	// (0x0003cb6b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9fac,	// (0x0003cb7b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9fac,	// (0x0003cb7b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeaad,	// (0x0004167c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeaad,	// (0x0004167c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa2b,	// (0x000425fa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa2b,	// (0x000425fa) cell_vitu2_dropdown_list_ctrl_pane_g

0x9fc8,	// (0x0003cb97) aid_size_cell_gallery2_ParamLimits

0x9fc8,	// (0x0003cb97) aid_size_cell_gallery2

0x9fd6,	// (0x0003cba5) grid_gallery2_pane_ParamLimits

0x9fd6,	// (0x0003cba5) grid_gallery2_pane

0x9fe5,	// (0x0003cbb4) scroll_pane_cp029_ParamLimits

0x9fe5,	// (0x0003cbb4) scroll_pane_cp029

0x9ff1,	// (0x0003cbc0) cell_gallery2_pane_ParamLimits

0x9ff1,	// (0x0003cbc0) cell_gallery2_pane

0x07b0,	// (0x0003337f) cell_gallery2_pane_g2

0x1ebb,	// (0x00034a8a) cell_gallery2_pane_g3

0x07ba,	// (0x00033389) cell_gallery2_pane_g4

0x07c2,	// (0x00033391) cell_gallery2_pane_g5

0xcfec,	// (0x0003fbbb) grid_highlight_pane_cp10

0x96e4,	// (0x0003c2b3) popup_vitu2_match_list_window_ParamLimits

0x96f8,	// (0x0003c2c7) popup_vitu2_query_window_ParamLimits

0x96f8,	// (0x0003c2c7) popup_vitu2_query_window

0x45be,	// (0x0003718d) bg_vitu2_candi_button_pane

0x07a7,	// (0x00033376) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x079e,	// (0x0003336d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0795,	// (0x00033364) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x38fb,	// (0x000364ca) bg_button_pane_cp015

0xa01f,	// (0x0003cbee) bg_button_pane_cp016

0xa032,	// (0x0003cc01) bg_button_pane_cp017

0xe3f2,	// (0x00040fc1) bg_popup_sub_pane_cp22

0x07ca,	// (0x00033399) popup_vitu2_query_window_g1

0x392e,	// (0x000364fd) popup_vitu2_query_window_g2

0x0002,

0xfa36,	// (0x00042605) popup_vitu2_query_window_g

0x394b,	// (0x0003651a) popup_vitu2_query_window_t1_ParamLimits

0x394b,	// (0x0003651a) popup_vitu2_query_window_t1

0x397e,	// (0x0003654d) popup_vitu2_query_window_t2_ParamLimits

0x397e,	// (0x0003654d) popup_vitu2_query_window_t2

0x3990,	// (0x0003655f) popup_vitu2_query_window_t3_ParamLimits

0x3990,	// (0x0003655f) popup_vitu2_query_window_t3

0xa056,	// (0x0003cc25) popup_vitu2_query_window_t4_ParamLimits

0xa056,	// (0x0003cc25) popup_vitu2_query_window_t4

0xa077,	// (0x0003cc46) popup_vitu2_query_window_t5_ParamLimits

0xa077,	// (0x0003cc46) popup_vitu2_query_window_t5

0x0006,

0xfa3d,	// (0x0004260c) popup_vitu2_query_window_t_ParamLimits

0xfa3d,	// (0x0004260c) popup_vitu2_query_window_t

0x0596,	// (0x00033165) main_cset_text_pane

0x9ab8,	// (0x0003c687) aid_area_touch_slider_ParamLimits

0x9ad4,	// (0x0003c6a3) cset_slider_pane_ParamLimits

0x9afe,	// (0x0003c6cd) main_cset_slider_pane_g1_ParamLimits

0x9b13,	// (0x0003c6e2) main_cset_slider_pane_g2_ParamLimits

0x05b7,	// (0x00033186) main_cset_slider_pane_g3_ParamLimits

0x05b7,	// (0x00033186) main_cset_slider_pane_g3

0x9b28,	// (0x0003c6f7) main_cset_slider_pane_g4_ParamLimits

0x9b28,	// (0x0003c6f7) main_cset_slider_pane_g4

0x9b37,	// (0x0003c706) main_cset_slider_pane_g5_ParamLimits

0x9b37,	// (0x0003c706) main_cset_slider_pane_g5

0x9b45,	// (0x0003c714) main_cset_slider_pane_g6_ParamLimits

0x9b45,	// (0x0003c714) main_cset_slider_pane_g6

0xf990,	// (0x0004255f) main_cset_slider_pane_g_ParamLimits

0x05e7,	// (0x000331b6) main_cset_slider_pane_t1_ParamLimits

0x9bd5,	// (0x0003c7a4) main_cset_slider_pane_t2_ParamLimits

0x9bef,	// (0x0003c7be) main_cset_slider_pane_t3_ParamLimits

0x9c09,	// (0x0003c7d8) main_cset_slider_pane_t4_ParamLimits

0x9c23,	// (0x0003c7f2) main_cset_slider_pane_t5_ParamLimits

0x9c41,	// (0x0003c810) main_cset_slider_pane_t6_ParamLimits

0x9c58,	// (0x0003c827) main_cset_slider_pane_t7_ParamLimits

0x9c86,	// (0x0003c855) main_cset_slider_pane_t8_ParamLimits

0x9c86,	// (0x0003c855) main_cset_slider_pane_t8

0x9cae,	// (0x0003c87d) main_cset_slider_pane_t9_ParamLimits

0x9cae,	// (0x0003c87d) main_cset_slider_pane_t9

0x9cd6,	// (0x0003c8a5) main_cset_slider_pane_t10_ParamLimits

0x9cd6,	// (0x0003c8a5) main_cset_slider_pane_t10

0x9cfe,	// (0x0003c8cd) main_cset_slider_pane_t11_ParamLimits

0x9cfe,	// (0x0003c8cd) main_cset_slider_pane_t11

0x9d28,	// (0x0003c8f7) main_cset_slider_pane_t12_ParamLimits

0x9d28,	// (0x0003c8f7) main_cset_slider_pane_t12

0x9d45,	// (0x0003c914) main_cset_slider_pane_t13_ParamLimits

0x9d45,	// (0x0003c914) main_cset_slider_pane_t13

0xf9b5,	// (0x00042584) main_cset_slider_pane_t_ParamLimits

0x45be,	// (0x0003718d) bg_popup_sub_pane_cp011

0x07d6,	// (0x000333a5) main_cset_text_pane_g1

0x07de,	// (0x000333ad) main_cset_text_pane_t1

0x07ec,	// (0x000333bb) main_cset_text_pane_t2

0x07fa,	// (0x000333c9) main_cset_text_pane_t3

0x0808,	// (0x000333d7) main_cset_text_pane_t4

0x0816,	// (0x000333e5) main_cset_text_pane_t5

0x0824,	// (0x000333f3) main_cset_text_pane_t6

0x0832,	// (0x00033401) main_cset_text_pane_t7

0x0006,

0xfa4c,	// (0x0004261b) main_cset_text_pane_t

0x45be,	// (0x0003718d) main_cam4_burst_pane

0x45be,	// (0x0003718d) main_cam5_pane

0x9a07,	// (0x0003c5d6) bg_button_pane_cp019

0x9a10,	// (0x0003c5df) bg_button_pane_cp020

0x05c3,	// (0x00033192) main_cset_slider_pane_g7_ParamLimits

0x05c3,	// (0x00033192) main_cset_slider_pane_g7

0x05cf,	// (0x0003319e) main_cset_slider_pane_g8_ParamLimits

0x05cf,	// (0x0003319e) main_cset_slider_pane_g8

0x9b59,	// (0x0003c728) main_cset_slider_pane_g9_ParamLimits

0x9b59,	// (0x0003c728) main_cset_slider_pane_g9

0x9b65,	// (0x0003c734) main_cset_slider_pane_g10_ParamLimits

0x9b65,	// (0x0003c734) main_cset_slider_pane_g10

0x9b71,	// (0x0003c740) main_cset_slider_pane_g11_ParamLimits

0x9b71,	// (0x0003c740) main_cset_slider_pane_g11

0x9b7d,	// (0x0003c74c) main_cset_slider_pane_g12_ParamLimits

0x9b7d,	// (0x0003c74c) main_cset_slider_pane_g12

0x9b89,	// (0x0003c758) main_cset_slider_pane_g13_ParamLimits

0x9b89,	// (0x0003c758) main_cset_slider_pane_g13

0x9b95,	// (0x0003c764) main_cset_slider_pane_g14_ParamLimits

0x9b95,	// (0x0003c764) main_cset_slider_pane_g14

0x9ba1,	// (0x0003c770) main_cset_slider_pane_g15_ParamLimits

0x9ba1,	// (0x0003c770) main_cset_slider_pane_g15

0x0615,	// (0x000331e4) main_cset_slider_pane_t14_ParamLimits

0x0615,	// (0x000331e4) main_cset_slider_pane_t14

0x064e,	// (0x0003321d) main_cset_slider_pane_t15_ParamLimits

0x064e,	// (0x0003321d) main_cset_slider_pane_t15

0xa098,	// (0x0003cc67) aid_cam4_burst_size_cell_ParamLimits

0xa098,	// (0x0003cc67) aid_cam4_burst_size_cell

0xa0b4,	// (0x0003cc83) grid_cam4_burst_pane_ParamLimits

0xa0b4,	// (0x0003cc83) grid_cam4_burst_pane

0xa0e4,	// (0x0003ccb3) linegrid_cam4_burst_pane_ParamLimits

0xa0e4,	// (0x0003ccb3) linegrid_cam4_burst_pane

0xa104,	// (0x0003ccd3) scroll_pane_cp30_ParamLimits

0xa104,	// (0x0003ccd3) scroll_pane_cp30

0xa110,	// (0x0003ccdf) cell_cam4_burst_pane_ParamLimits

0xa110,	// (0x0003ccdf) cell_cam4_burst_pane

0x084c,	// (0x0003341b) linegrid_cam4_burst_pane_g1_ParamLimits

0x084c,	// (0x0003341b) linegrid_cam4_burst_pane_g1

0xa14c,	// (0x0003cd1b) linegrid_cam4_burst_pane_g2_ParamLimits

0xa14c,	// (0x0003cd1b) linegrid_cam4_burst_pane_g2

0x0859,	// (0x00033428) linegrid_cam4_burst_pane_g3_ParamLimits

0x0859,	// (0x00033428) linegrid_cam4_burst_pane_g3

0x0002,

0xfa5b,	// (0x0004262a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0004262a) linegrid_cam4_burst_pane_g

0xa15d,	// (0x0003cd2c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa15d,	// (0x0003cd2c) linegrid_cam4_burst_pane_g3_copy1

0x0866,	// (0x00033435) linegrid_cam4_burst_pane_g4_ParamLimits

0x0866,	// (0x00033435) linegrid_cam4_burst_pane_g4

0xa177,	// (0x0003cd46) linegrid_cam4_burst_pane_g5_ParamLimits

0xa177,	// (0x0003cd46) linegrid_cam4_burst_pane_g5

0xa188,	// (0x0003cd57) linegrid_cam4_burst_pane_g6_ParamLimits

0xa188,	// (0x0003cd57) linegrid_cam4_burst_pane_g6

0x0873,	// (0x00033442) linegrid_cam4_burst_pane_g7_ParamLimits

0x0873,	// (0x00033442) linegrid_cam4_burst_pane_g7

0xa199,	// (0x0003cd68) cell_cam4_burst_pane_g1

0x088c,	// (0x0003345b) main_cam5_pane_t1_ParamLimits

0x088c,	// (0x0003345b) main_cam5_pane_t1

0x089e,	// (0x0003346d) main_cam5_pane_t2_ParamLimits

0x089e,	// (0x0003346d) main_cam5_pane_t2

0x08b0,	// (0x0003347f) main_cam5_pane_t3_ParamLimits

0x08b0,	// (0x0003347f) main_cam5_pane_t3

0x08c2,	// (0x00033491) main_cam5_pane_t4_ParamLimits

0x08c2,	// (0x00033491) main_cam5_pane_t4

0x08da,	// (0x000334a9) main_cam5_pane_t5_ParamLimits

0x08da,	// (0x000334a9) main_cam5_pane_t5

0x08ee,	// (0x000334bd) main_cam5_pane_t6_ParamLimits

0x08ee,	// (0x000334bd) main_cam5_pane_t6

0x0902,	// (0x000334d1) main_cam5_pane_t7_ParamLimits

0x0902,	// (0x000334d1) main_cam5_pane_t7

0x0914,	// (0x000334e3) main_cam5_pane_t8_ParamLimits

0x0914,	// (0x000334e3) main_cam5_pane_t8

0x0930,	// (0x000334ff) main_cam5_pane_t9_ParamLimits

0x0930,	// (0x000334ff) main_cam5_pane_t9

0x0942,	// (0x00033511) main_cam5_pane_t10_ParamLimits

0x0942,	// (0x00033511) main_cam5_pane_t10

0x0954,	// (0x00033523) main_cam5_pane_t11_ParamLimits

0x0954,	// (0x00033523) main_cam5_pane_t11

0x0966,	// (0x00033535) main_cam5_pane_t12_ParamLimits

0x0966,	// (0x00033535) main_cam5_pane_t12

0x097b,	// (0x0003354a) main_cam5_pane_t13_ParamLimits

0x097b,	// (0x0003354a) main_cam5_pane_t13

0x000c,

0xfa67,	// (0x00042636) main_cam5_pane_t_ParamLimits

0xfa67,	// (0x00042636) main_cam5_pane_t

0x4836,	// (0x00037405) popup_scut_keymap_window_ParamLimits

0x4836,	// (0x00037405) popup_scut_keymap_window

0xa1ac,	// (0x0003cd7b) aid_size_cell_brow_shortcut

0xcfec,	// (0x0003fbbb) bg_popup_window_pane_cp010

0xa1b8,	// (0x0003cd87) grid_scut_pane

0xa1c4,	// (0x0003cd93) cell_scut_pane_ParamLimits

0xa1c4,	// (0x0003cd93) cell_scut_pane

0xa1db,	// (0x0003cdaa) cell_scut_pane_g1

0x0998,	// (0x00033567) cell_scut_pane_t1

0x09a7,	// (0x00033576) cell_scut_pane_t2

0xa1e4,	// (0x0003cdb3) cell_scut_pane_t3

0x0002,

0xfa82,	// (0x00042651) cell_scut_pane_t

0x8249,	// (0x0003ae18) main_mup3_pane_g8_ParamLimits

0x8249,	// (0x0003ae18) main_mup3_pane_g8

0x961c,	// (0x0003c1eb) area_vitu2_query_pane_ParamLimits

0x961c,	// (0x0003c1eb) area_vitu2_query_pane

0x390d,	// (0x000364dc) input_focus_pane_cp08

0x09b6,	// (0x00033585) area_vitu2_query_pane_g1

0x3a0e,	// (0x000365dd) area_vitu2_query_pane_g2

0x0001,

0xfa89,	// (0x00042658) area_vitu2_query_pane_g

0xa1f2,	// (0x0003cdc1) area_vitu2_query_pane_t1_ParamLimits

0xa1f2,	// (0x0003cdc1) area_vitu2_query_pane_t1

0xa206,	// (0x0003cdd5) area_vitu2_query_pane_t2_ParamLimits

0xa206,	// (0x0003cdd5) area_vitu2_query_pane_t2

0x3a1f,	// (0x000365ee) area_vitu2_query_pane_t3_ParamLimits

0x3a1f,	// (0x000365ee) area_vitu2_query_pane_t3

0x3a47,	// (0x00036616) area_vitu2_query_pane_t4_ParamLimits

0x3a47,	// (0x00036616) area_vitu2_query_pane_t4

0x3a6f,	// (0x0003663e) area_vitu2_query_pane_t5_ParamLimits

0x3a6f,	// (0x0003663e) area_vitu2_query_pane_t5

0x3a97,	// (0x00036666) area_vitu2_query_pane_t6_ParamLimits

0x3a97,	// (0x00036666) area_vitu2_query_pane_t6

0x0006,

0xfa8e,	// (0x0004265d) area_vitu2_query_pane_t_ParamLimits

0xfa8e,	// (0x0004265d) area_vitu2_query_pane_t

0xa21a,	// (0x0003cde9) bg_button_pane_cp018

0xa228,	// (0x0003cdf7) bg_button_pane_cp021

0x3ae3,	// (0x000366b2) bg_button_pane_cp022

0x3af4,	// (0x000366c3) input_focus_pane_cp09

0x67cd,	// (0x0003939c) aid_size_touch_mv_arrow_left

0x67f6,	// (0x000393c5) aid_size_touch_mv_arrow_right

0x9bb9,	// (0x0003c788) main_cset_slider_pane_g16_ParamLimits

0x9bb9,	// (0x0003c788) main_cset_slider_pane_g16

0x9bc7,	// (0x0003c796) main_cset_slider_pane_g17_ParamLimits

0x9bc7,	// (0x0003c796) main_cset_slider_pane_g17

0xa199,	// (0x0003cd68) cell_cam4_burst_pane_g1_ParamLimits

0x45be,	// (0x0003718d) compa_mode_pane

0x9dca,	// (0x0003c999) popup_vtel_slider_window_g3_ParamLimits

0x9dca,	// (0x0003c999) popup_vtel_slider_window_g3

0x9dde,	// (0x0003c9ad) popup_vtel_slider_window_g4_ParamLimits

0x9dde,	// (0x0003c9ad) popup_vtel_slider_window_g4

0x9df2,	// (0x0003c9c1) popup_vtel_slider_window_t1_ParamLimits

0x9df2,	// (0x0003c9c1) popup_vtel_slider_window_t1

0x45be,	// (0x0003718d) main_cl_pane

0xe41a,	// (0x00040fe9) popup_imed_adjust2_window_ParamLimits

0xe3f2,	// (0x00040fc1) bg_tb_trans_pane_cp05_ParamLimits

0xed46,	// (0x00041915) popup_imed_adjust2_window_g1_ParamLimits

0xed55,	// (0x00041924) popup_imed_adjust2_window_g2_ParamLimits

0xed55,	// (0x00041924) popup_imed_adjust2_window_g2

0xed61,	// (0x00041930) popup_imed_adjust2_window_g3_ParamLimits

0xed61,	// (0x00041930) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x000423c8) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x000423c8) popup_imed_adjust2_window_g

0xed6d,	// (0x0004193c) popup_imed_adjust2_window_t1_ParamLimits

0xed85,	// (0x00041954) slider_imed_adjust_pane_ParamLimits

0xed99,	// (0x00041968) slider_imed_adjust_pane_g1_ParamLimits

0xeda9,	// (0x00041978) slider_imed_adjust_pane_g2_ParamLimits

0xedb9,	// (0x00041988) slider_imed_adjust_pane_g3_ParamLimits

0xedca,	// (0x00041999) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x000423cf) slider_imed_adjust_pane_g_ParamLimits

0x936a,	// (0x0003bf39) aid_touch_area_cam4_ParamLimits

0x936a,	// (0x0003bf39) aid_touch_area_cam4

0x937a,	// (0x0003bf49) battery_pane_cp01

0x9401,	// (0x0003bfd0) main_camera4_pane_g6_ParamLimits

0x9401,	// (0x0003bfd0) main_camera4_pane_g6

0x941f,	// (0x0003bfee) main_camera4_pane_t2_ParamLimits

0x941f,	// (0x0003bfee) main_camera4_pane_t2

0x0001,

0xf903,	// (0x000424d2) main_camera4_pane_t_ParamLimits

0xf903,	// (0x000424d2) main_camera4_pane_t

0x94a6,	// (0x0003c075) aid_touch_area_vid4_ParamLimits

0x94a6,	// (0x0003c075) aid_touch_area_vid4

0x94e6,	// (0x0003c0b5) main_video4_pane_g5_ParamLimits

0x94e6,	// (0x0003c0b5) main_video4_pane_g5

0x9508,	// (0x0003c0d7) vid4_progress_pane_ParamLimits

0x9508,	// (0x0003c0d7) vid4_progress_pane

0x05db,	// (0x000331aa) main_cset_slider_pane_g18_ParamLimits

0x05db,	// (0x000331aa) main_cset_slider_pane_g18

0x0880,	// (0x0003344f) cell_cam4_burst_pane_g2_ParamLimits

0x0880,	// (0x0003344f) cell_cam4_burst_pane_g2

0x0001,

0xfa62,	// (0x00042631) cell_cam4_burst_pane_g_ParamLimits

0xfa62,	// (0x00042631) cell_cam4_burst_pane_g

0xa234,	// (0x0003ce03) bg_cl_pane_ParamLimits

0xa234,	// (0x0003ce03) bg_cl_pane

0xa240,	// (0x0003ce0f) cl_header_pane_ParamLimits

0xa240,	// (0x0003ce0f) cl_header_pane

0xa24c,	// (0x0003ce1b) cl_listscroll_pane_ParamLimits

0xa24c,	// (0x0003ce1b) cl_listscroll_pane

0x0a5e,	// (0x0003362d) bg_cl_pane_g1

0x0a66,	// (0x00033635) bg_cl_pane_g2

0x0a6e,	// (0x0003363d) bg_cl_pane_g3

0x0a76,	// (0x00033645) bg_cl_pane_g4

0x0a7e,	// (0x0003364d) bg_cl_pane_g5

0x0a86,	// (0x00033655) bg_cl_pane_g6

0x0a8e,	// (0x0003365d) bg_cl_pane_g7

0x0a96,	// (0x00033665) bg_cl_pane_g8

0x0a9e,	// (0x0003366d) bg_cl_pane_g9

0x0008,

0xfa9d,	// (0x0004266c) bg_cl_pane_g

0xa258,	// (0x0003ce27) aid_height_cl_leading_ParamLimits

0xa258,	// (0x0003ce27) aid_height_cl_leading

0xa264,	// (0x0003ce33) aid_height_cl_text_ParamLimits

0xa264,	// (0x0003ce33) aid_height_cl_text

0x486d,	// (0x0003743c) bg_cl_header_pane_ParamLimits

0x486d,	// (0x0003743c) bg_cl_header_pane

0xa27c,	// (0x0003ce4b) cl_header_pane_g1_ParamLimits

0xa27c,	// (0x0003ce4b) cl_header_pane_g1

0xa289,	// (0x0003ce58) cl_header_pane_t1_ParamLimits

0xa289,	// (0x0003ce58) cl_header_pane_t1

0x0aa6,	// (0x00033675) cl_list_pane

0x05ae,	// (0x0003317d) hc_scroll_pane_cp01

0xc8e1,	// (0x0003f4b0) bg_cl_header_pane_g1

0x0494,	// (0x00033063) bg_cl_header_pane_g2

0xc901,	// (0x0003f4d0) bg_cl_header_pane_g3

0x04a4,	// (0x00033073) bg_cl_header_pane_g4

0x049c,	// (0x0003306b) bg_cl_header_pane_g5

0x074d,	// (0x0003331c) bg_cl_header_pane_g6

0x04bc,	// (0x0003308b) bg_cl_header_pane_g7

0x04c4,	// (0x00033093) bg_cl_header_pane_g8

0x04b4,	// (0x00033083) bg_cl_header_pane_g9

0x0008,

0xfab0,	// (0x0004267f) bg_cl_header_pane_g

0xa29b,	// (0x0003ce6a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa29b,	// (0x0003ce6a) hc_cl_list_double_graphic_heading_pane

0xa2ac,	// (0x0003ce7b) hc_cl_list_single_graphic_pane_ParamLimits

0xa2ac,	// (0x0003ce7b) hc_cl_list_single_graphic_pane

0xa2c5,	// (0x0003ce94) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa2c5,	// (0x0003ce94) hc_cl_list_single_graphic_pane_g1

0xa2d1,	// (0x0003cea0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa2d1,	// (0x0003cea0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac3,	// (0x00042692) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac3,	// (0x00042692) hc_cl_list_single_graphic_pane_g

0xa2e5,	// (0x0003ceb4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa2e5,	// (0x0003ceb4) hc_cl_list_single_graphic_pane_t1

0xa2c5,	// (0x0003ce94) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa2c5,	// (0x0003ce94) hc_cl_list_double_graphic_heading_pane_g1

0xa2fa,	// (0x0003cec9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa2fa,	// (0x0003cec9) hc_cl_list_double_graphic_heading_pane_g2

0xa30e,	// (0x0003cedd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa30e,	// (0x0003cedd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac8,	// (0x00042697) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac8,	// (0x00042697) hc_cl_list_double_graphic_heading_pane_g

0xa322,	// (0x0003cef1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa322,	// (0x0003cef1) hc_cl_list_double_graphic_heading_pane_t1

0xa337,	// (0x0003cf06) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa337,	// (0x0003cf06) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfacf,	// (0x0004269e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfacf,	// (0x0004269e) hc_cl_list_double_graphic_heading_pane_t

0xa354,	// (0x0003cf23) vid4_progress_pane_g1

0xa364,	// (0x0003cf33) vid4_progress_pane_g2

0x6e2f,	// (0x000399fe) vid4_progress_pane_g3

0xa374,	// (0x0003cf43) vid4_progress_pane_g4

0x0004,

0xfad4,	// (0x000426a3) vid4_progress_pane_g

0xa392,	// (0x0003cf61) vid4_progress_pane_t1

0xa3a7,	// (0x0003cf76) vid4_progress_pane_t2

0x0002,

0xfadf,	// (0x000426ae) vid4_progress_pane_t

0xa3d2,	// (0x0003cfa1) wait_bar_pane_cp07

0xe634,	// (0x00041203) blid_firmament_pane_ParamLimits

0xe677,	// (0x00041246) popup_blid_sat_info2_window_g1

0xe69b,	// (0x0004126a) popup_blid_sat_info2_window_t3

0xe6a9,	// (0x00041278) popup_blid_sat_info2_window_t4

0xe6b7,	// (0x00041286) popup_blid_sat_info2_window_t5

0xe6c5,	// (0x00041294) popup_blid_sat_info2_window_t6

0xe6d5,	// (0x000412a4) popup_blid_sat_info2_window_t7

0xe6e3,	// (0x000412b2) popup_blid_sat_info2_window_t8

0xe6f1,	// (0x000412c0) popup_blid_sat_info2_window_t9

0xe6ff,	// (0x000412ce) popup_blid_sat_info2_window_t10

0xe7c1,	// (0x00041390) aid_firma_cardinal_ParamLimits

0xe7de,	// (0x000413ad) blid_firmament_pane_t1_ParamLimits

0xe7f5,	// (0x000413c4) blid_firmament_pane_t2_ParamLimits

0xe80c,	// (0x000413db) blid_firmament_pane_t3_ParamLimits

0xe823,	// (0x000413f2) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x000422c1) blid_firmament_pane_t_ParamLimits

0xe83a,	// (0x00041409) blid_sat_info_pane_ParamLimits

0xd8c0,	// (0x0004048f) main_cam_set_pane_ParamLimits

0x89f3,	// (0x0003b5c2) aid_size_cell_colour_35_ParamLimits

0x8a0d,	// (0x0003b5dc) aid_size_cell_colour_112_ParamLimits

0x8a24,	// (0x0003b5f3) aid_size_cell_effect_ParamLimits

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp02_ParamLimits

0xd8ce,	// (0x0004049d) heading_imed_pane_ParamLimits

0x8a3e,	// (0x0003b60d) listscroll_imed_pane_ParamLimits

0xda24,	// (0x000405f3) popup_call2_audio_first_window_g5_ParamLimits

0xda24,	// (0x000405f3) popup_call2_audio_first_window_g5

0x9127,	// (0x0003bcf6) aid_size_touch_image3_arrow_left_ParamLimits

0x9127,	// (0x0003bcf6) aid_size_touch_image3_arrow_left

0x913d,	// (0x0003bd0c) aid_size_touch_image3_arrow_right_ParamLimits

0x913d,	// (0x0003bd0c) aid_size_touch_image3_arrow_right

0xa3bd,	// (0x0003cf8c) vid4_progress_pane_t3

0x8cdc,	// (0x0003b8ab) main_hwr_training_symbol_option_pane_ParamLimits

0x8cdc,	// (0x0003b8ab) main_hwr_training_symbol_option_pane

0xf033,	// (0x00041c02) popup_hwr_training_preview_window_ParamLimits

0xf033,	// (0x00041c02) popup_hwr_training_preview_window

0x8d3d,	// (0x0003b90c) hwr_training_navi_pane_g5_ParamLimits

0x8d3d,	// (0x0003b90c) hwr_training_navi_pane_g5

0x0474,	// (0x00033043) popup_char_count_window

0x486d,	// (0x0003743c) bg_popup_sub_pane_cp20_ParamLimits

0x9ee8,	// (0x0003cab7) list_vitu2_match_list_pane_ParamLimits

0x9ef4,	// (0x0003cac3) vitu2_page_scroll_pane_ParamLimits

0x9ef4,	// (0x0003cac3) vitu2_page_scroll_pane

0x0ba1,	// (0x00033770) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0ba1,	// (0x00033770) list_single_hwr_training_symbol_option_pane

0x0bb4,	// (0x00033783) list_single_hwr_training_symbol_option_pane_g1

0x0bbc,	// (0x0003378b) list_single_hwr_training_symbol_option_pane_t1

0x0bca,	// (0x00033799) bg_button_pane_cp023

0x0bd3,	// (0x000337a2) bg_button_pane_cp024

0xa3e4,	// (0x0003cfb3) vitu2_page_scroll_pane_g1

0xa3ec,	// (0x0003cfbb) vitu2_page_scroll_pane_g2

0x0001,

0xfae6,	// (0x000426b5) vitu2_page_scroll_pane_g

0xa3f4,	// (0x0003cfc3) vitu2_page_scroll_pane_t1

0x0c06,	// (0x000337d5) popup_char_count_window_g1

0x0c0f,	// (0x000337de) popup_char_count_window_g2

0x0c18,	// (0x000337e7) popup_char_count_window_g3

0x0002,

0xfaeb,	// (0x000426ba) popup_char_count_window_g

0x0c21,	// (0x000337f0) popup_char_count_window_t1

0x45be,	// (0x0003718d) main_vded2_pane

0xed32,	// (0x00041901) aid_size_cell_imed_line

0xed3c,	// (0x0004190b) grid_imed_line_width_pane

0x9571,	// (0x0003c140) vid4_indicators_pane_g4

0x0c2f,	// (0x000337fe) cell_imed_line_width_pane_ParamLimits

0x0c2f,	// (0x000337fe) cell_imed_line_width_pane

0x0c43,	// (0x00033812) cell_imed_line_width_pane_g1

0xe62c,	// (0x000411fb) cell_imed_line_width_pane_g2

0x0001,

0xfaf2,	// (0x000426c1) cell_imed_line_width_pane_g

0xa403,	// (0x0003cfd2) main_vded2_pane_g1_ParamLimits

0xa403,	// (0x0003cfd2) main_vded2_pane_g1

0xa410,	// (0x0003cfdf) main_vded2_pane_g2_ParamLimits

0xa410,	// (0x0003cfdf) main_vded2_pane_g2

0x0001,

0xfaf7,	// (0x000426c6) main_vded2_pane_g_ParamLimits

0xfaf7,	// (0x000426c6) main_vded2_pane_g

0xa41e,	// (0x0003cfed) vded2_slider_pane_ParamLimits

0xa41e,	// (0x0003cfed) vded2_slider_pane

0xa42b,	// (0x0003cffa) aid_size_touch_vded2_end

0xa435,	// (0x0003d004) aid_size_touch_vded2_playhead

0x0c4c,	// (0x0003381b) aid_size_touch_vded2_start

0x0c54,	// (0x00033823) vded2_slider_bg_pane

0x0c5d,	// (0x0003382c) vded2_slider_pane_g1

0x0c66,	// (0x00033835) vded2_slider_pane_g2

0xa43d,	// (0x0003d00c) vded2_slider_pane_g3

0x0002,

0xfafc,	// (0x000426cb) vded2_slider_pane_g

0x0c6e,	// (0x0003383d) vded2_slider_bg_pane_g1

0x0c77,	// (0x00033846) vded2_slider_bg_pane_g2

0x0c80,	// (0x0003384f) vded2_slider_bg_pane_g3

0x0002,

0xfb03,	// (0x000426d2) vded2_slider_bg_pane_g

0x6e47,	// (0x00039a16) aid_postcard_touch_down_pane_ParamLimits

0x6e47,	// (0x00039a16) aid_postcard_touch_down_pane

0x6e57,	// (0x00039a26) aid_postcard_touch_up_pane_ParamLimits

0x6e57,	// (0x00039a26) aid_postcard_touch_up_pane

0x45be,	// (0x0003718d) main_blid2_pane

0xe400,	// (0x00040fcf) popup_blid2_search_window

0x45be,	// (0x0003718d) blid2_gps_pane

0x45be,	// (0x0003718d) blid2_navig_pane

0x45be,	// (0x0003718d) blid2_search_pane

0x45be,	// (0x0003718d) blid2_tripm_pane

0xa446,	// (0x0003d015) blid2_search_pane_g1_ParamLimits

0xa446,	// (0x0003d015) blid2_search_pane_g1

0xa456,	// (0x0003d025) blid2_search_pane_t1_ParamLimits

0xa456,	// (0x0003d025) blid2_search_pane_t1

0xa468,	// (0x0003d037) aid_size_cell_blid2_gps_ParamLimits

0xa468,	// (0x0003d037) aid_size_cell_blid2_gps

0xa478,	// (0x0003d047) blid2_gps_pane_g1_ParamLimits

0xa478,	// (0x0003d047) blid2_gps_pane_g1

0xa484,	// (0x0003d053) grid_blid2_satellite_pane_ParamLimits

0xa484,	// (0x0003d053) grid_blid2_satellite_pane

0xa494,	// (0x0003d063) blid2_navig_pane_g1_ParamLimits

0xa494,	// (0x0003d063) blid2_navig_pane_g1

0xa4a0,	// (0x0003d06f) blid2_navig_pane_t1_ParamLimits

0xa4a0,	// (0x0003d06f) blid2_navig_pane_t1

0xa4b2,	// (0x0003d081) blid2_navig_pane_t2_ParamLimits

0xa4b2,	// (0x0003d081) blid2_navig_pane_t2

0x0001,

0xfb0a,	// (0x000426d9) blid2_navig_pane_t_ParamLimits

0xfb0a,	// (0x000426d9) blid2_navig_pane_t

0xa4c4,	// (0x0003d093) blid2_navig_ring_pane_ParamLimits

0xa4c4,	// (0x0003d093) blid2_navig_ring_pane

0xa4d4,	// (0x0003d0a3) blid2_speed_pane_ParamLimits

0xa4d4,	// (0x0003d0a3) blid2_speed_pane

0xa4e0,	// (0x0003d0af) blid2_tripm_pane_g1_ParamLimits

0xa4e0,	// (0x0003d0af) blid2_tripm_pane_g1

0xa4f0,	// (0x0003d0bf) blid2_tripm_pane_g2_ParamLimits

0xa4f0,	// (0x0003d0bf) blid2_tripm_pane_g2

0xa4fc,	// (0x0003d0cb) blid2_tripm_pane_g3_ParamLimits

0xa4fc,	// (0x0003d0cb) blid2_tripm_pane_g3

0xa508,	// (0x0003d0d7) blid2_tripm_pane_g4_ParamLimits

0xa508,	// (0x0003d0d7) blid2_tripm_pane_g4

0xa514,	// (0x0003d0e3) blid2_tripm_pane_g5_ParamLimits

0xa514,	// (0x0003d0e3) blid2_tripm_pane_g5

0x0005,

0xfb0f,	// (0x000426de) blid2_tripm_pane_g_ParamLimits

0xfb0f,	// (0x000426de) blid2_tripm_pane_g

0xa530,	// (0x0003d0ff) blid2_tripm_pane_t1_ParamLimits

0xa530,	// (0x0003d0ff) blid2_tripm_pane_t1

0xa544,	// (0x0003d113) blid2_tripm_pane_t2_ParamLimits

0xa544,	// (0x0003d113) blid2_tripm_pane_t2

0xa556,	// (0x0003d125) blid2_tripm_pane_t3_ParamLimits

0xa556,	// (0x0003d125) blid2_tripm_pane_t3

0x0003,

0xfb1c,	// (0x000426eb) blid2_tripm_pane_t_ParamLimits

0xfb1c,	// (0x000426eb) blid2_tripm_pane_t

0xa588,	// (0x0003d157) cell_blid2_satellite_pane_ParamLimits

0xa588,	// (0x0003d157) cell_blid2_satellite_pane

0xa5a2,	// (0x0003d171) cell_blid2_satellite_pane_g1

0x0c89,	// (0x00033858) cell_blid2_satellite_pane_t1

0xe84a,	// (0x00041419) blid2_speed_pane_g1

0x0c97,	// (0x00033866) blid2_speed_pane_t1

0x0ca5,	// (0x00033874) blid2_speed_pane_t2

0x0001,

0xfb25,	// (0x000426f4) blid2_speed_pane_t

0xe84a,	// (0x00041419) blid2_navig_ring_pane_g1

0xa5ab,	// (0x0003d17a) blid2_navig_ring_pane_g2

0xa5b3,	// (0x0003d182) blid2_navig_ring_pane_g3

0xa5bb,	// (0x0003d18a) blid2_navig_ring_pane_g4

0xa5c3,	// (0x0003d192) blid2_navig_ring_pane_g5

0x0004,

0xfb2a,	// (0x000426f9) blid2_navig_ring_pane_g

0x45be,	// (0x0003718d) bg_popup_window_pane_cp011

0x0cb3,	// (0x00033882) popup_blid2_search_window_g1

0x0cbb,	// (0x0003388a) popup_blid2_search_window_t1

0x0cc9,	// (0x00033898) popup_blid2_search_window_t2

0x0001,

0xfb35,	// (0x00042704) popup_blid2_search_window_t

0xc7f0,	// (0x0003f3bf) main_browser_pane_g1

0xc50b,	// (0x0003f0da) main_browser_pane_ParamLimits

0xd8c0,	// (0x0004048f) bg_button_pane_cp011_ParamLimits

0x97da,	// (0x0003c3a9) cell_vitu2_function_pane_g1_ParamLimits

0xe3f2,	// (0x00040fc1) bg_popup_sub_pane_cp22_ParamLimits

0x390d,	// (0x000364dc) input_focus_pane_cp08_ParamLimits

0xa045,	// (0x0003cc14) popup_vitu2_query_button_pane_ParamLimits

0xa045,	// (0x0003cc14) popup_vitu2_query_button_pane

0x3924,	// (0x000364f3) popup_vitu2_query_input_button_pane

0x07ca,	// (0x00033399) popup_vitu2_query_window_g1_ParamLimits

0x392e,	// (0x000364fd) popup_vitu2_query_window_g2_ParamLimits

0xfa36,	// (0x00042605) popup_vitu2_query_window_g_ParamLimits

0x45be,	// (0x0003718d) bg_button_pane_cp026

0xa5cb,	// (0x0003d19a) popup_vitu2_query_input_button_pane_g1

0x45be,	// (0x0003718d) bg_button_pane_cp025

0x0cd7,	// (0x000338a6) popup_vitu2_query_button_pane_t1

0x7f94,	// (0x0003ab63) main_mp3_pane_t6

0x7fa4,	// (0x0003ab73) popup_slider_window_cp01

0x9455,	// (0x0003c024) cam4_battery_pane

0x9534,	// (0x0003c103) cam4_battery_pane_cp02

0xa34c,	// (0x0003cf1b) cam4_battery_pane_cp01

0xa34c,	// (0x0003cf1b) cam4_battery_pane_cp03

0xe84a,	// (0x00041419) cam4_battery_pane_g1

0x01e7,	// (0x00032db6) cam4_battery_pane_g2

0x0001,

0xfb3a,	// (0x00042709) cam4_battery_pane_g

0xe70d,	// (0x000412dc) popup_blid_sat_info2_window_t11

0x67cd,	// (0x0003939c) aid_size_touch_mv_arrow_left_ParamLimits

0x67f6,	// (0x000393c5) aid_size_touch_mv_arrow_right_ParamLimits

0xcf4c,	// (0x0003fb1b) navi_pane_g1_ParamLimits

0x6835,	// (0x00039404) navi_pane_g2_ParamLimits

0x6863,	// (0x00039432) navi_pane_g3_ParamLimits

0xf404,	// (0x00041fd3) navi_pane_g_ParamLimits

0x68bd,	// (0x0003948c) navi_pane_mv_t1_ParamLimits

0x8a4a,	// (0x0003b619) grid_imed_effect_pane_ParamLimits

0x5585,	// (0x00038154) aid_placing_vt_slider_lsc

0xc73f,	// (0x0003f30e) aid_placing_vt_slider_prt

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp01_ParamLimits

0xe9cd,	// (0x0004159c) popup_image_details_window_g1_ParamLimits

0xe9e0,	// (0x000415af) popup_image_details_window_g2_ParamLimits

0xe9f5,	// (0x000415c4) popup_image_details_window_g3_ParamLimits

0xe9f5,	// (0x000415c4) popup_image_details_window_g3

0xf737,	// (0x00042306) popup_image_details_window_g_ParamLimits

0xea09,	// (0x000415d8) popup_image_details_window_t1_ParamLimits

0xea1b,	// (0x000415ea) popup_image_details_window_t2_ParamLimits

0xea34,	// (0x00041603) popup_image_details_window_t3_ParamLimits

0xea48,	// (0x00041617) popup_image_details_window_t4_ParamLimits

0xea63,	// (0x00041632) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0004230d) popup_image_details_window_t_ParamLimits

0xa270,	// (0x0003ce3f) cl_header_name_pane_ParamLimits

0xa270,	// (0x0003ce3f) cl_header_name_pane

0xa5d3,	// (0x0003d1a2) cl_header_name_pane_t1_ParamLimits

0xa5d3,	// (0x0003d1a2) cl_header_name_pane_t1

0xa5ea,	// (0x0003d1b9) cl_header_name_pane_t2_ParamLimits

0xa5ea,	// (0x0003d1b9) cl_header_name_pane_t2

0xa614,	// (0x0003d1e3) cl_header_name_pane_t3_ParamLimits

0xa614,	// (0x0003d1e3) cl_header_name_pane_t3

0x0002,

0xfb3f,	// (0x0004270e) cl_header_name_pane_t_ParamLimits

0xfb3f,	// (0x0004270e) cl_header_name_pane_t

0x688e,	// (0x0003945d) navi_pane_mv_g2_ParamLimits

0x0402,	// (0x00032fd1) field_vitu2_entry_pane_g1_ParamLimits

0x040e,	// (0x00032fdd) field_vitu2_entry_pane_g2_ParamLimits

0x041a,	// (0x00032fe9) field_vitu2_entry_pane_g3_ParamLimits

0x041a,	// (0x00032fe9) field_vitu2_entry_pane_g3

0xf935,	// (0x00042504) field_vitu2_entry_pane_g_ParamLimits

0x976a,	// (0x0003c339) cell_vitu2_itu_pane_g1_ParamLimits

0x977a,	// (0x0003c349) cell_vitu2_itu_pane_g2_ParamLimits

0x977a,	// (0x0003c349) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x00042510) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x00042510) cell_vitu2_itu_pane_g

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp05_ParamLimits

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp05

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp03

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp04

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp10_ParamLimits

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp10

0x3ae3,	// (0x000366b2) bg_vkb2_func_pane_cp08

0xa21a,	// (0x0003cde9) bg_vkb2_func_pane_cp06

0xa228,	// (0x0003cdf7) bg_vkb2_func_pane_cp07

0x0bdc,	// (0x000337ab) bg_vkb2_func_pane_cp11_ParamLimits

0x0bdc,	// (0x000337ab) bg_vkb2_func_pane_cp11

0x0bf1,	// (0x000337c0) bg_vkb2_func_pane_cp12_ParamLimits

0x0bf1,	// (0x000337c0) bg_vkb2_func_pane_cp12

0x45be,	// (0x0003718d) bg_vkb2_func_pane_cp09

0x0494,	// (0x00033063) bg_vkb2_func_pane_g1

0xc901,	// (0x0003f4d0) bg_vkb2_func_pane_g2

0x049c,	// (0x0003306b) bg_vkb2_func_pane_g3

0x04a4,	// (0x00033073) bg_vkb2_func_pane_g4

0x074d,	// (0x0003331c) bg_vkb2_func_pane_g5

0x04bc,	// (0x0003308b) bg_vkb2_func_pane_g6

0x04c4,	// (0x00033093) bg_vkb2_func_pane_g7

0x04b4,	// (0x00033083) bg_vkb2_func_pane_g8

0xc8e1,	// (0x0003f4b0) bg_vkb2_func_pane_g9

0x0008,

0xfb46,	// (0x00042715) bg_vkb2_func_pane_g

0xa522,	// (0x0003d0f1) blid2_tripm_pane_g6_ParamLimits

0xa522,	// (0x0003d0f1) blid2_tripm_pane_g6

0x01a1,	// (0x00032d70) mp4_progress_pane_g1

0xa57c,	// (0x0003d14b) blid2_tripm_values_pane_ParamLimits

0xa57c,	// (0x0003d14b) blid2_tripm_values_pane

0xa639,	// (0x0003d208) blid2_tripm_values_pane_t1

0xa647,	// (0x0003d216) blid2_tripm_values_pane_t2

0xa655,	// (0x0003d224) blid2_tripm_values_pane_t3

0xa663,	// (0x0003d232) blid2_tripm_values_pane_t4

0xa671,	// (0x0003d240) blid2_tripm_values_pane_t5

0xa67f,	// (0x0003d24e) blid2_tripm_values_pane_t6

0xa68d,	// (0x0003d25c) blid2_tripm_values_pane_t7

0xa69b,	// (0x0003d26a) blid2_tripm_values_pane_t8

0xa6a9,	// (0x0003d278) blid2_tripm_values_pane_t9

0x0008,

0xfb59,	// (0x00042728) blid2_tripm_values_pane_t

0x55c5,	// (0x00038194) call_video_pane_t1_ParamLimits

0x55e6,	// (0x000381b5) call_video_pane_t2_ParamLimits

0xf28d,	// (0x00041e5c) call_video_pane_t_ParamLimits

0x3675,	// (0x00036244) msg_header_pane_g1_ParamLimits

0xd167,	// (0x0003fd36) msg_header_pane_g2_ParamLimits

0xd167,	// (0x0003fd36) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x00042076) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x00042076) msg_header_pane_g

0xc50b,	// (0x0003f0da) main_clock2_pane_ParamLimits

0x87f0,	// (0x0003b3bf) grid_clock2_toolbar_pane_ParamLimits

0x87f0,	// (0x0003b3bf) grid_clock2_toolbar_pane

0x87f0,	// (0x0003b3bf) listscroll_clock2_pane_ParamLimits

0x87f0,	// (0x0003b3bf) listscroll_clock2_pane

0x8887,	// (0x0003b456) main_clock2_pane_t3_ParamLimits

0x8887,	// (0x0003b456) main_clock2_pane_t3

0x8899,	// (0x0003b468) main_clock2_pane_t4_ParamLimits

0x8899,	// (0x0003b468) main_clock2_pane_t4

0x0ce5,	// (0x000338b4) cell_clock2_toolbar_pane

0x0ced,	// (0x000338bc) cell_clock2_toolbar_pane_cp01

0x0ced,	// (0x000338bc) cell_clock2_toolbar_pane_cp02

0x0cf5,	// (0x000338c4) cell_clock2_toolbar_pane_cp03

0x0cfd,	// (0x000338cc) list_clock2_pane

0xcea3,	// (0x0003fa72) scroll_pane_cp10

0x0d05,	// (0x000338d4) list_single_clock2_pane_ParamLimits

0x0d05,	// (0x000338d4) list_single_clock2_pane

0xcfec,	// (0x0003fbbb) list_highlight_pane_cp08

0x0d12,	// (0x000338e1) list_single_clock2_pane_t1

0x0d20,	// (0x000338ef) list_single_clock2_pane_t2

0x0001,

0xfb6c,	// (0x0004273b) list_single_clock2_pane_t

0x45be,	// (0x0003718d) bg_button_pane_cp10

0x0d2e,	// (0x000338fd) cell_clock2_toolbar_pane_g1

0x6da9,	// (0x00039978) aid_main_viewer_pane_g1_ParamLimits

0x6da9,	// (0x00039978) aid_main_viewer_pane_g1

0x6db5,	// (0x00039984) aid_main_viewer_pane_g2_ParamLimits

0x6db5,	// (0x00039984) aid_main_viewer_pane_g2

0x6dc1,	// (0x00039990) aid_main_viewer_pane_g3_ParamLimits

0x6dc1,	// (0x00039990) aid_main_viewer_pane_g3

0x6dd2,	// (0x000399a1) aid_main_viewer_pane_g4_ParamLimits

0x6dd2,	// (0x000399a1) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x00042087) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x00042087) aid_main_viewer_pane_g

0x7552,	// (0x0003a121) main_calc_pane_ParamLimits

0x755f,	// (0x0003a12e) main_dialer2_pane_ParamLimits

0x45be,	// (0x0003718d) main_cam6_pane

0x45be,	// (0x0003718d) main_vid6_pane

0x87fc,	// (0x0003b3cb) listscroll_gen_pane_cp06_ParamLimits

0x87fc,	// (0x0003b3cb) listscroll_gen_pane_cp06

0x88ab,	// (0x0003b47a) main_clock2_pane_t5_ParamLimits

0x88ab,	// (0x0003b47a) main_clock2_pane_t5

0x88f4,	// (0x0003b4c3) aid_call2_pane_cp10_ParamLimits

0x8906,	// (0x0003b4d5) aid_call_pane_cp10_ParamLimits

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8918,	// (0x0003b4e7) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8918,	// (0x0003b4e7) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf21,	// (0x0003faf0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x000423bd) popup_clock_analogue_window_cp10_g_ParamLimits

0x892a,	// (0x0003b4f9) popup_clock_analogue_window_cp10_t1_ParamLimits

0x90d4,	// (0x0003bca3) cell_dialer2_keypad_pane_g2_ParamLimits

0x90d4,	// (0x0003bca3) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x000424a3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x000424a3) cell_dialer2_keypad_pane_g

0x90f0,	// (0x0003bcbf) cell_dialer2_keypad_pane_t1

0x9aa5,	// (0x0003c674) main_cset_text2_pane_ParamLimits

0x9aa5,	// (0x0003c674) main_cset_text2_pane

0x09b6,	// (0x00033585) area_vitu2_query_pane_g1_ParamLimits

0x3a0e,	// (0x000365dd) area_vitu2_query_pane_g2_ParamLimits

0xfa89,	// (0x00042658) area_vitu2_query_pane_g_ParamLimits

0x3abf,	// (0x0003668e) area_vitu2_query_pane_t7_ParamLimits

0x3abf,	// (0x0003668e) area_vitu2_query_pane_t7

0xa21a,	// (0x0003cde9) bg_button_pane_cp018_ParamLimits

0xa228,	// (0x0003cdf7) bg_button_pane_cp021_ParamLimits

0x3ae3,	// (0x000366b2) bg_button_pane_cp022_ParamLimits

0x3ae3,	// (0x000366b2) bg_vkb2_func_pane_cp08_ParamLimits

0xa21a,	// (0x0003cde9) bg_vkb2_func_pane_cp06_ParamLimits

0xa228,	// (0x0003cdf7) bg_vkb2_func_pane_cp07_ParamLimits

0x3af4,	// (0x000366c3) input_focus_pane_cp09_ParamLimits

0xa6b7,	// (0x0003d286) cam6_autofocus_pane_ParamLimits

0xa6b7,	// (0x0003d286) cam6_autofocus_pane

0xa6d9,	// (0x0003d2a8) cam6_image_uncrop_pane_ParamLimits

0xa6d9,	// (0x0003d2a8) cam6_image_uncrop_pane

0xa706,	// (0x0003d2d5) cam6_indi_pane_ParamLimits

0xa706,	// (0x0003d2d5) cam6_indi_pane

0xa720,	// (0x0003d2ef) cam6_mode_pane_ParamLimits

0xa720,	// (0x0003d2ef) cam6_mode_pane

0xa734,	// (0x0003d303) cam6_timer_pane_ParamLimits

0xa734,	// (0x0003d303) cam6_timer_pane

0xa740,	// (0x0003d30f) cam6_zoom_pane_ParamLimits

0xa740,	// (0x0003d30f) cam6_zoom_pane

0x94b6,	// (0x0003c085) cam6_mode_pane_g1_ParamLimits

0x94b6,	// (0x0003c085) cam6_mode_pane_g1

0x94ce,	// (0x0003c09d) cam6_mode_pane_g2_ParamLimits

0x94ce,	// (0x0003c09d) cam6_mode_pane_g2

0x94da,	// (0x0003c0a9) cam6_mode_pane_g3_ParamLimits

0x94da,	// (0x0003c0a9) cam6_mode_pane_g3

0x94e6,	// (0x0003c0b5) cam6_mode_pane_g4_ParamLimits

0x94e6,	// (0x0003c0b5) cam6_mode_pane_g4

0x0003,

0xfb71,	// (0x00042740) cam6_mode_pane_g_ParamLimits

0xfb71,	// (0x00042740) cam6_mode_pane_g

0x0d44,	// (0x00033913) bg_tb_trans_pane_cp08_ParamLimits

0x0d44,	// (0x00033913) bg_tb_trans_pane_cp08

0x0d52,	// (0x00033921) cam6_battery_pane_ParamLimits

0x0d52,	// (0x00033921) cam6_battery_pane

0x0d68,	// (0x00033937) cam6_indi_pane_g1_ParamLimits

0x0d68,	// (0x00033937) cam6_indi_pane_g1

0x0d7a,	// (0x00033949) cam6_indi_pane_g2_ParamLimits

0x0d7a,	// (0x00033949) cam6_indi_pane_g2

0x0d8c,	// (0x0003395b) cam6_indi_pane_g3_ParamLimits

0x0d8c,	// (0x0003395b) cam6_indi_pane_g3

0x0002,

0xfb7a,	// (0x00042749) cam6_indi_pane_g_ParamLimits

0xfb7a,	// (0x00042749) cam6_indi_pane_g

0x0d9e,	// (0x0003396d) cam6_indi_pane_t1_ParamLimits

0x0d9e,	// (0x0003396d) cam6_indi_pane_t1

0x95a6,	// (0x0003c175) cam6_autofocus_pane_g1

0x95ae,	// (0x0003c17d) cam6_autofocus_pane_g2

0x95b6,	// (0x0003c185) cam6_autofocus_pane_g3

0x95be,	// (0x0003c18d) cam6_autofocus_pane_g4

0x0003,

0xfb81,	// (0x00042750) cam6_autofocus_pane_g

0x0dc4,	// (0x00033993) cam6_timer_pane_g1

0x0dcc,	// (0x0003399b) cam6_timer_pane_t1

0x0dda,	// (0x000339a9) cam6_zoom_cont_pane

0x0de2,	// (0x000339b1) cam6_zoom_pane_g1

0x0dea,	// (0x000339b9) cam6_zoom_pane_g2

0xa758,	// (0x0003d327) cam6_zoom_pane_g3

0x0002,

0xfb8a,	// (0x00042759) cam6_zoom_pane_g

0xe84a,	// (0x00041419) cam6_battery_pane_g1

0xe84a,	// (0x00041419) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x000422ca) cam6_battery_pane_g

0x0df2,	// (0x000339c1) cam6_zoom_cont_pane_g1

0x0dfb,	// (0x000339ca) cam6_zoom_cont_pane_g2

0x0e04,	// (0x000339d3) cam6_zoom_cont_pane_g3

0x0002,

0xfb91,	// (0x00042760) cam6_zoom_cont_pane_g

0xa775,	// (0x0003d344) cam6_mode_pane_cp_ParamLimits

0xa775,	// (0x0003d344) cam6_mode_pane_cp

0xa740,	// (0x0003d30f) cam6_zoom_pane_cp_ParamLimits

0xa740,	// (0x0003d30f) cam6_zoom_pane_cp

0xa789,	// (0x0003d358) vid6_image_uncrop_cif_pane_ParamLimits

0xa789,	// (0x0003d358) vid6_image_uncrop_cif_pane

0xa7b5,	// (0x0003d384) vid6_image_uncrop_nhd_pane_ParamLimits

0xa7b5,	// (0x0003d384) vid6_image_uncrop_nhd_pane

0xa6d9,	// (0x0003d2a8) vid6_image_uncrop_vga_pane_ParamLimits

0xa6d9,	// (0x0003d2a8) vid6_image_uncrop_vga_pane

0xa7d2,	// (0x0003d3a1) vid6_image_uncrop_wvga_pane_ParamLimits

0xa7d2,	// (0x0003d3a1) vid6_image_uncrop_wvga_pane

0xa7ef,	// (0x0003d3be) vid6_indi_pane_ParamLimits

0xa7ef,	// (0x0003d3be) vid6_indi_pane

0x0d44,	// (0x00033913) bg_tb_trans_pane_cp09_ParamLimits

0x0d44,	// (0x00033913) bg_tb_trans_pane_cp09

0x0e1c,	// (0x000339eb) cam6_battery_pane_cp_ParamLimits

0x0e1c,	// (0x000339eb) cam6_battery_pane_cp

0x0e28,	// (0x000339f7) vid6_indi_pane_g1_ParamLimits

0x0e28,	// (0x000339f7) vid6_indi_pane_g1

0x0e3a,	// (0x00033a09) vid6_indi_pane_g2_ParamLimits

0x0e3a,	// (0x00033a09) vid6_indi_pane_g2

0x0e4c,	// (0x00033a1b) vid6_indi_pane_g3_ParamLimits

0x0e4c,	// (0x00033a1b) vid6_indi_pane_g3

0x0e61,	// (0x00033a30) vid6_indi_pane_g4_ParamLimits

0x0e61,	// (0x00033a30) vid6_indi_pane_g4

0x0e76,	// (0x00033a45) vid6_indi_pane_g5_ParamLimits

0x0e76,	// (0x00033a45) vid6_indi_pane_g5

0x0004,

0xfb98,	// (0x00042767) vid6_indi_pane_g_ParamLimits

0xfb98,	// (0x00042767) vid6_indi_pane_g

0x0e90,	// (0x00033a5f) vid6_indi_pane_t1_ParamLimits

0x0e90,	// (0x00033a5f) vid6_indi_pane_t1

0x0ea6,	// (0x00033a75) vid6_indi_pane_t2_ParamLimits

0x0ea6,	// (0x00033a75) vid6_indi_pane_t2

0x0ece,	// (0x00033a9d) vid6_indi_pane_t3_ParamLimits

0x0ece,	// (0x00033a9d) vid6_indi_pane_t3

0x0ef6,	// (0x00033ac5) vid6_indi_pane_t4_ParamLimits

0x0ef6,	// (0x00033ac5) vid6_indi_pane_t4

0x0003,

0xfba3,	// (0x00042772) vid6_indi_pane_t_ParamLimits

0xfba3,	// (0x00042772) vid6_indi_pane_t

0x0f1a,	// (0x00033ae9) wait_bar_pane_cp08

0xa814,	// (0x0003d3e3) main_cset_text2_pane_t1_ParamLimits

0xa814,	// (0x0003d3e3) main_cset_text2_pane_t1

0xa760,	// (0x0003d32f) listscroll_gen_pane_cp06_t1_ParamLimits

0xa760,	// (0x0003d32f) listscroll_gen_pane_cp06_t1

0x45be,	// (0x0003718d) main_cam6_set_pane

0xeaad,	// (0x0004167c) bg_tb_trans_pane_cp06_ParamLimits

0x945d,	// (0x0003c02c) cam4_indicators_pane_g1_ParamLimits

0x946e,	// (0x0003c03d) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x000424e0) cam4_indicators_pane_g_ParamLimits

0x948c,	// (0x0003c05b) cam4_indicators_pane_t1_ParamLimits

0xd8c0,	// (0x0004048f) bg_tb_trans_pane_cp07_ParamLimits

0x953e,	// (0x0003c10d) vid4_indicators_pane_g1_ParamLimits

0x954f,	// (0x0003c11e) vid4_indicators_pane_g2_ParamLimits

0x9560,	// (0x0003c12f) vid4_indicators_pane_g3_ParamLimits

0x9571,	// (0x0003c140) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x000424f2) vid4_indicators_pane_g_ParamLimits

0x958d,	// (0x0003c15c) vid4_indicators_pane_t1_ParamLimits

0xa354,	// (0x0003cf23) vid4_progress_pane_g1_ParamLimits

0xa364,	// (0x0003cf33) vid4_progress_pane_g2_ParamLimits

0x6e2f,	// (0x000399fe) vid4_progress_pane_g3_ParamLimits

0xa374,	// (0x0003cf43) vid4_progress_pane_g4_ParamLimits

0xfad4,	// (0x000426a3) vid4_progress_pane_g_ParamLimits

0xa392,	// (0x0003cf61) vid4_progress_pane_t1_ParamLimits

0xa3a7,	// (0x0003cf76) vid4_progress_pane_t2_ParamLimits

0xa3bd,	// (0x0003cf8c) vid4_progress_pane_t3_ParamLimits

0xfadf,	// (0x000426ae) vid4_progress_pane_t_ParamLimits

0xa3d2,	// (0x0003cfa1) wait_bar_pane_cp07_ParamLimits

0xa847,	// (0x0003d416) main_cam6_set_pane_g2_ParamLimits

0xa847,	// (0x0003d416) main_cam6_set_pane_g2

0xa853,	// (0x0003d422) main_cset6_listscroll_pane_ParamLimits

0xa853,	// (0x0003d422) main_cset6_listscroll_pane

0xa87e,	// (0x0003d44d) main_cset6_slider_pane_ParamLimits

0xa87e,	// (0x0003d44d) main_cset6_slider_pane

0xa88a,	// (0x0003d459) main_cset6_text2_pane_ParamLimits

0xa88a,	// (0x0003d459) main_cset6_text2_pane

0x0f29,	// (0x00033af8) main_cset6_text_pane

0x0f31,	// (0x00033b00) main_cset_list_pane_copy1_ParamLimits

0x0f31,	// (0x00033b00) main_cset_list_pane_copy1

0x0f41,	// (0x00033b10) scroll_pane_cp028_copy1

0xa89d,	// (0x0003d46c) cset_list_set_pane_copy1

0xa8b0,	// (0x0003d47f) aid_position_infowindow_above_copy1

0xa8b8,	// (0x0003d487) aid_position_infowindow_below_copy1

0x3b4d,	// (0x0003671c) cset_list_set_pane_g1_copy1

0x3882,	// (0x00036451) cset_list_set_pane_g3_copy1_ParamLimits

0x3882,	// (0x00036451) cset_list_set_pane_g3_copy1

0x3891,	// (0x00036460) cset_list_set_pane_t1_copy1_ParamLimits

0x3891,	// (0x00036460) cset_list_set_pane_t1_copy1

0xd8c0,	// (0x0004048f) list_highlight_pane_cp021_copy1_ParamLimits

0xd8c0,	// (0x0004048f) list_highlight_pane_cp021_copy1

0x0f4a,	// (0x00033b19) cset6_slider_pane_ParamLimits

0x0f4a,	// (0x00033b19) cset6_slider_pane

0x0f76,	// (0x00033b45) main_cset6_slider_pane_g1_ParamLimits

0x0f76,	// (0x00033b45) main_cset6_slider_pane_g1

0xa8c0,	// (0x0003d48f) main_cset6_slider_pane_g2_ParamLimits

0xa8c0,	// (0x0003d48f) main_cset6_slider_pane_g2

0x0f9e,	// (0x00033b6d) main_cset6_slider_pane_g3_ParamLimits

0x0f9e,	// (0x00033b6d) main_cset6_slider_pane_g3

0xa8e8,	// (0x0003d4b7) main_cset6_slider_pane_g4_ParamLimits

0xa8e8,	// (0x0003d4b7) main_cset6_slider_pane_g4

0xa8f4,	// (0x0003d4c3) main_cset6_slider_pane_g5_ParamLimits

0xa8f4,	// (0x0003d4c3) main_cset6_slider_pane_g5

0x05c3,	// (0x00033192) main_cset6_slider_pane_g7_ParamLimits

0x05c3,	// (0x00033192) main_cset6_slider_pane_g7

0x05cf,	// (0x0003319e) main_cset6_slider_pane_g8_ParamLimits

0x05cf,	// (0x0003319e) main_cset6_slider_pane_g8

0xa902,	// (0x0003d4d1) main_cset6_slider_pane_g9_ParamLimits

0xa902,	// (0x0003d4d1) main_cset6_slider_pane_g9

0xa90e,	// (0x0003d4dd) main_cset6_slider_pane_g10_ParamLimits

0xa90e,	// (0x0003d4dd) main_cset6_slider_pane_g10

0xa91a,	// (0x0003d4e9) main_cset6_slider_pane_g11_ParamLimits

0xa91a,	// (0x0003d4e9) main_cset6_slider_pane_g11

0xa926,	// (0x0003d4f5) main_cset6_slider_pane_g12_ParamLimits

0xa926,	// (0x0003d4f5) main_cset6_slider_pane_g12

0xa932,	// (0x0003d501) main_cset6_slider_pane_g13_ParamLimits

0xa932,	// (0x0003d501) main_cset6_slider_pane_g13

0xa93e,	// (0x0003d50d) main_cset6_slider_pane_g14_ParamLimits

0xa93e,	// (0x0003d50d) main_cset6_slider_pane_g14

0xa94a,	// (0x0003d519) main_cset6_slider_pane_g15_ParamLimits

0xa94a,	// (0x0003d519) main_cset6_slider_pane_g15

0xa962,	// (0x0003d531) main_cset6_slider_pane_g16_ParamLimits

0xa962,	// (0x0003d531) main_cset6_slider_pane_g16

0xa970,	// (0x0003d53f) main_cset6_slider_pane_g17_ParamLimits

0xa970,	// (0x0003d53f) main_cset6_slider_pane_g17

0x0011,

0xfbac,	// (0x0004277b) main_cset6_slider_pane_g_ParamLimits

0xfbac,	// (0x0004277b) main_cset6_slider_pane_g

0x0faa,	// (0x00033b79) main_cset6_slider_pane_t1_ParamLimits

0x0faa,	// (0x00033b79) main_cset6_slider_pane_t1

0xa996,	// (0x0003d565) main_cset6_slider_pane_t2_ParamLimits

0xa996,	// (0x0003d565) main_cset6_slider_pane_t2

0xa9c1,	// (0x0003d590) main_cset6_slider_pane_t3_ParamLimits

0xa9c1,	// (0x0003d590) main_cset6_slider_pane_t3

0xa9ec,	// (0x0003d5bb) main_cset6_slider_pane_t4_ParamLimits

0xa9ec,	// (0x0003d5bb) main_cset6_slider_pane_t4

0xaa17,	// (0x0003d5e6) main_cset6_slider_pane_t5_ParamLimits

0xaa17,	// (0x0003d5e6) main_cset6_slider_pane_t5

0x0feb,	// (0x00033bba) main_cset6_slider_pane_t7_ParamLimits

0x0feb,	// (0x00033bba) main_cset6_slider_pane_t7

0xaa44,	// (0x0003d613) main_cset6_slider_pane_t8_ParamLimits

0xaa44,	// (0x0003d613) main_cset6_slider_pane_t8

0xaa68,	// (0x0003d637) main_cset6_slider_pane_t9_ParamLimits

0xaa68,	// (0x0003d637) main_cset6_slider_pane_t9

0xaa8c,	// (0x0003d65b) main_cset6_slider_pane_t10_ParamLimits

0xaa8c,	// (0x0003d65b) main_cset6_slider_pane_t10

0xaab0,	// (0x0003d67f) main_cset6_slider_pane_t11_ParamLimits

0xaab0,	// (0x0003d67f) main_cset6_slider_pane_t11

0x1021,	// (0x00033bf0) main_cset6_slider_pane_t14_ParamLimits

0x1021,	// (0x00033bf0) main_cset6_slider_pane_t14

0x105a,	// (0x00033c29) main_cset6_slider_pane_t15_ParamLimits

0x105a,	// (0x00033c29) main_cset6_slider_pane_t15

0x000b,

0xfbd1,	// (0x000427a0) main_cset6_slider_pane_t_ParamLimits

0xfbd1,	// (0x000427a0) main_cset6_slider_pane_t

0x1093,	// (0x00033c62) cset_slider_pane_g1_copy1

0x109c,	// (0x00033c6b) cset_slider_pane_g2_copy1

0x10a5,	// (0x00033c74) cset_slider_pane_g3_copy1

0x45be,	// (0x0003718d) bg_popup_sub_pane_cp011_copy1

0x07d6,	// (0x000333a5) main_cset_text_pane_g1_copy1

0x07de,	// (0x000333ad) main_cset_text_pane_t1_copy1

0x07ec,	// (0x000333bb) main_cset_text_pane_t2_copy1

0x07fa,	// (0x000333c9) main_cset_text_pane_t3_copy1

0x0808,	// (0x000333d7) main_cset_text_pane_t4_copy1

0x0816,	// (0x000333e5) main_cset_text_pane_t5_copy1

0x0824,	// (0x000333f3) main_cset_text_pane_t6_copy1

0x0832,	// (0x00033401) main_cset_text_pane_t7_copy1

0xaad4,	// (0x0003d6a3) main_cset_text2_pane_t1_copy1

0x45be,	// (0x0003718d) main_ncimui_pane

0x759e,	// (0x0003a16d) popup_query_ncimui_window_ParamLimits

0x759e,	// (0x0003a16d) popup_query_ncimui_window

0x3736,	// (0x00036305) field_cale_ev2_pane_g4_ParamLimits

0x3736,	// (0x00036305) field_cale_ev2_pane_g4

0x8df4,	// (0x0003b9c3) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8df4,	// (0x0003b9c3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0004247e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0004247e) cell_video_dialer_keypad_pane_g

0x8e0c,	// (0x0003b9db) cell_video_dialer_keypad_pane_t1

0x45be,	// (0x0003718d) bg_popup_window_pane_cp012

0xcd80,	// (0x0003f94f) heading_pane_cp06

0x119d,	// (0x00033d6c) ncim_query_content_pane

0x45be,	// (0x0003718d) bg_popup_heading_pane_cp01

0x11a5,	// (0x00033d74) ncim_heading_pane_t1

0x11b3,	// (0x00033d82) ncim_indicator_popup_pane

0x11c5,	// (0x00033d94) ncim_query_button_pane

0x11d9,	// (0x00033da8) ncim_query_content_pane_t1

0x11eb,	// (0x00033dba) ncim_query_content_pane_t2

0x0005,

0xfc10,	// (0x000427df) ncim_query_content_pane_t

0x1225,	// (0x00033df4) ncim_query_list_pane

0x1237,	// (0x00033e06) ncim_query_popup_pane

0x11b3,	// (0x00033d82) ncim_indicator_popup_pane_ParamLimits

0xabf6,	// (0x0003d7c5) ncim_query_content_pane_g1_ParamLimits

0xabf6,	// (0x0003d7c5) ncim_query_content_pane_g1

0x11d9,	// (0x00033da8) ncim_query_content_pane_t1_ParamLimits

0x11eb,	// (0x00033dba) ncim_query_content_pane_t2_ParamLimits

0xac02,	// (0x0003d7d1) ncim_query_content_pane_t3_ParamLimits

0xac02,	// (0x0003d7d1) ncim_query_content_pane_t3

0xac1f,	// (0x0003d7ee) ncim_query_content_pane_t4_ParamLimits

0xac1f,	// (0x0003d7ee) ncim_query_content_pane_t4

0xac3c,	// (0x0003d80b) ncim_query_content_pane_t5_ParamLimits

0xac3c,	// (0x0003d80b) ncim_query_content_pane_t5

0x11fd,	// (0x00033dcc) ncim_query_content_pane_t6_ParamLimits

0x11fd,	// (0x00033dcc) ncim_query_content_pane_t6

0xfc10,	// (0x000427df) ncim_query_content_pane_t_ParamLimits

0x1225,	// (0x00033df4) ncim_query_list_pane_ParamLimits

0x1237,	// (0x00033e06) ncim_query_popup_pane_ParamLimits

0x124b,	// (0x00033e1a) wait_bar_pane_cp04

0x45be,	// (0x0003718d) input_focus_pane_cp011

0x1253,	// (0x00033e22) ncim_query_popup_pane_t1

0x1261,	// (0x00033e30) ncim_list_query_list_pane_ParamLimits

0x1261,	// (0x00033e30) ncim_list_query_list_pane

0x45be,	// (0x0003718d) bg_button_pane_cp027

0x126e,	// (0x00033e3d) ncim_query_button_pane_g1

0x45be,	// (0x0003718d) list_highlight_pane_cp012

0x1278,	// (0x00033e47) ncim_list_query_list_pane_g1

0x1280,	// (0x00033e4f) ncim_list_query_list_pane_t1

0x947d,	// (0x0003c04c) cam4_indicators_pane_g3_ParamLimits

0x947d,	// (0x0003c04c) cam4_indicators_pane_g3

0x957d,	// (0x0003c14c) vid4_indicators_pane_g5_ParamLimits

0x957d,	// (0x0003c14c) vid4_indicators_pane_g5

0xa383,	// (0x0003cf52) vid4_progress_pane_g5_ParamLimits

0xa383,	// (0x0003cf52) vid4_progress_pane_g5

0xab0f,	// (0x0003d6de) main_ncimui_pane_g1

0xab65,	// (0x0003d734) ncimui_group_query_pane_ParamLimits

0xab65,	// (0x0003d734) ncimui_group_query_pane

0xaba1,	// (0x0003d770) ncimui_list_pane_ParamLimits

0xaba1,	// (0x0003d770) ncimui_list_pane

0xabc2,	// (0x0003d791) ncimui_text_pane_ParamLimits

0xabc2,	// (0x0003d791) ncimui_text_pane

0xac59,	// (0x0003d828) ncimui_text_pane_t1_ParamLimits

0xac59,	// (0x0003d828) ncimui_text_pane_t1

0x128e,	// (0x00033e5d) ncimui_list_single_graphic_pane_ParamLimits

0x128e,	// (0x00033e5d) ncimui_list_single_graphic_pane

0xac78,	// (0x0003d847) ncimui_query_pane_ParamLimits

0xac78,	// (0x0003d847) ncimui_query_pane

0x45be,	// (0x0003718d) list_highlight_pane_cp013

0x129e,	// (0x00033e6d) ncim_list_query_list_pane_t1_copy1

0x1278,	// (0x00033e47) ncim_list_single_graphic_pane_g1

0x12ac,	// (0x00033e7b) ncim_query_button_pane_cp01

0x12b8,	// (0x00033e87) ncim_query_entry_pane_ParamLimits

0x12b8,	// (0x00033e87) ncim_query_entry_pane

0x12cb,	// (0x00033e9a) ncimui_query_pane_g1

0x12d7,	// (0x00033ea6) ncimui_query_pane_t1_ParamLimits

0x12d7,	// (0x00033ea6) ncimui_query_pane_t1

0xd8c0,	// (0x0004048f) input_focus_pane_cp012

0x12f0,	// (0x00033ebf) ncim_query_entry_pane_t1

0xc50b,	// (0x0003f0da) main_im_pane_ParamLimits

0xd8c0,	// (0x0004048f) main_mobtv_pane_ParamLimits

0xd8c0,	// (0x0004048f) main_mobtv_pane

0xa97e,	// (0x0003d54d) main_cset6_slider_pane_g18_ParamLimits

0xa97e,	// (0x0003d54d) main_cset6_slider_pane_g18

0xa98a,	// (0x0003d559) main_cset6_slider_pane_g19_ParamLimits

0xa98a,	// (0x0003d559) main_cset6_slider_pane_g19

0x041a,	// (0x00032fe9) bg_main_mobtv_pane_ParamLimits

0x041a,	// (0x00032fe9) bg_main_mobtv_pane

0xac8b,	// (0x0003d85a) main_mobtv_info_pane

0xac96,	// (0x0003d865) main_mobtv_loading_pane_ParamLimits

0xac96,	// (0x0003d865) main_mobtv_loading_pane

0x1310,	// (0x00033edf) main_mobtv_pg_channel_list_pane

0x131a,	// (0x00033ee9) main_mobtv_pg_hdr_pane

0xaca3,	// (0x0003d872) main_mobtv_programe_curr_pane_ParamLimits

0xaca3,	// (0x0003d872) main_mobtv_programe_curr_pane

0xacb0,	// (0x0003d87f) main_mobtv_programe_next_pane_ParamLimits

0xacb0,	// (0x0003d87f) main_mobtv_programe_next_pane

0x1323,	// (0x00033ef2) popup_mobtv_noti_window

0xe84a,	// (0x00041419) main_tv_pg_hdr_pane_g1

0x132b,	// (0x00033efa) main_tv_pg_hdr_pane_g2

0x1333,	// (0x00033f02) main_tv_pg_hdr_pane_g3

0x133b,	// (0x00033f0a) main_tv_pg_hdr_pane_g4

0x1343,	// (0x00033f12) main_tv_pg_hdr_pane_g5

0x134d,	// (0x00033f1c) main_tv_pg_hdr_pane_g6

0x1357,	// (0x00033f26) main_tv_pg_hdr_pane_g7

0x1361,	// (0x00033f30) main_tv_pg_hdr_pane_g8

0x136b,	// (0x00033f3a) main_tv_pg_hdr_pane_g9

0x1375,	// (0x00033f44) main_tv_pg_hdr_pane_g10

0x137f,	// (0x00033f4e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1d,	// (0x000427ec) main_tv_pg_hdr_pane_g

0x1389,	// (0x00033f58) main_tv_pg_hdr_pane_t1

0x1397,	// (0x00033f66) main_tv_pg_hdr_pane_t2

0x13a5,	// (0x00033f74) main_tv_pg_hdr_pane_t3

0x13b5,	// (0x00033f84) main_tv_pg_hdr_pane_t4

0x13c5,	// (0x00033f94) main_tv_pg_hdr_pane_t5

0x0004,

0xfc34,	// (0x00042803) main_tv_pg_hdr_pane_t

0x13d5,	// (0x00033fa4) single_mobtv_pg_channel_pane_ParamLimits

0x13d5,	// (0x00033fa4) single_mobtv_pg_channel_pane

0x13e7,	// (0x00033fb6) single_mobtv_pg_channel_table_pane

0x13f0,	// (0x00033fbf) single_mobtv_pg_channel_thumb_pane

0x13f9,	// (0x00033fc8) single_tv_pg_channel_pane_g1

0x1402,	// (0x00033fd1) single_tv_pg_channel_pane_g2

0x0001,

0xfc3f,	// (0x0004280e) single_tv_pg_channel_pane_g

0xeaad,	// (0x0004167c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeaad,	// (0x0004167c) bg_single_mobtv_pg_channel_thumb_pane

0x140b,	// (0x00033fda) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x140b,	// (0x00033fda) single_mobtv_pg_channel_thumb_pane_g1

0x1419,	// (0x00033fe8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1419,	// (0x00033fe8) single_mobtv_pg_channel_thumb_pane_g2

0x1425,	// (0x00033ff4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1425,	// (0x00033ff4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc44,	// (0x00042813) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc44,	// (0x00042813) single_mobtv_pg_channel_thumb_pane_g

0x1431,	// (0x00034000) single_mobtv_pg_channel_thumb_pane_t1

0x143f,	// (0x0003400e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc4b,	// (0x0004281a) single_mobtv_pg_channel_thumb_pane_t

0xe84a,	// (0x00041419) bg_single_mobtv_pg_channel_table_pane_g1

0xe84a,	// (0x00041419) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x000422ca) bg_single_mobtv_pg_channel_table_pane_g

0x144d,	// (0x0003401c) single_mobtv_pg_channel_table_pane_t1

0x145b,	// (0x0003402a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc50,	// (0x0004281f) single_mobtv_pg_channel_table_pane_t

0xacc5,	// (0x0003d894) main_mobtv_info_pane_g1_ParamLimits

0xacc5,	// (0x0003d894) main_mobtv_info_pane_g1

0xace1,	// (0x0003d8b0) main_mobtv_info_pane_t1_ParamLimits

0xace1,	// (0x0003d8b0) main_mobtv_info_pane_t1

0xad59,	// (0x0003d928) main_mobtv_info_pane_t2_ParamLimits

0xad59,	// (0x0003d928) main_mobtv_info_pane_t2

0x0002,

0xfc5a,	// (0x00042829) main_mobtv_info_pane_t_ParamLimits

0xfc5a,	// (0x00042829) main_mobtv_info_pane_t

0xade8,	// (0x0003d9b7) wait_bar_pane_cp05

0xadfa,	// (0x0003d9c9) main_mobtv_loading_pane_g1_ParamLimits

0xadfa,	// (0x0003d9c9) main_mobtv_loading_pane_g1

0xae08,	// (0x0003d9d7) main_mobtv_loading_pane_g2_ParamLimits

0xae08,	// (0x0003d9d7) main_mobtv_loading_pane_g2

0xae14,	// (0x0003d9e3) main_mobtv_loading_pane_g3_ParamLimits

0xae14,	// (0x0003d9e3) main_mobtv_loading_pane_g3

0x0002,

0xfc61,	// (0x00042830) main_mobtv_loading_pane_g_ParamLimits

0xfc61,	// (0x00042830) main_mobtv_loading_pane_g

0x1469,	// (0x00034038) main_mobtv_loading_pane_t1_ParamLimits

0x1469,	// (0x00034038) main_mobtv_loading_pane_t1

0x1481,	// (0x00034050) main_mobtv_loading_pane_t2_ParamLimits

0x1481,	// (0x00034050) main_mobtv_loading_pane_t2

0x0001,

0xfc68,	// (0x00042837) main_mobtv_loading_pane_t_ParamLimits

0xfc68,	// (0x00042837) main_mobtv_loading_pane_t

0xae22,	// (0x0003d9f1) wait_bar_pane_cp06_ParamLimits

0xae22,	// (0x0003d9f1) wait_bar_pane_cp06

0x14a5,	// (0x00034074) main_mobtv_programe_curr_pane_t1

0x14b3,	// (0x00034082) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6d,	// (0x0004283c) main_mobtv_programe_curr_pane_t

0x14c1,	// (0x00034090) main_mobtv_programe_next_pane_t1

0x14cf,	// (0x0003409e) main_mobtv_programe_next_pane_t2

0x14dd,	// (0x000340ac) main_mobtv_programe_next_pane_t3

0x0002,

0xfc72,	// (0x00042841) main_mobtv_programe_next_pane_t

0x45be,	// (0x0003718d) bg_popup_mobtv_noti_window_pane

0x14eb,	// (0x000340ba) popup_mobtv_noti_window_g1

0x14f3,	// (0x000340c2) popup_mobtv_noti_window_t1

0x1501,	// (0x000340d0) popup_mobtv_noti_window_t2

0x0001,

0xfc79,	// (0x00042848) popup_mobtv_noti_window_t

0xe84a,	// (0x00041419) bg_popup_mobtv_noti_window_pane_g1

0x45be,	// (0x0003718d) sc_clock_pane

0x45be,	// (0x0003718d) main_fs_bigclock_pane

0xa56a,	// (0x0003d139) blid2_tripm_pane_t4_ParamLimits

0xa56a,	// (0x0003d139) blid2_tripm_pane_t4

0xae2e,	// (0x0003d9fd) sc_clock_pane_g1_ParamLimits

0xae2e,	// (0x0003d9fd) sc_clock_pane_g1

0xae3c,	// (0x0003da0b) sc_clock_pane_t1_ParamLimits

0xae3c,	// (0x0003da0b) sc_clock_pane_t1

0xae4f,	// (0x0003da1e) sc_clock_pane_t2_ParamLimits

0xae4f,	// (0x0003da1e) sc_clock_pane_t2

0xae61,	// (0x0003da30) sc_clock_pane_t3_ParamLimits

0xae61,	// (0x0003da30) sc_clock_pane_t3

0x0004,

0xfc7e,	// (0x0004284d) sc_clock_pane_t_ParamLimits

0xfc7e,	// (0x0004284d) sc_clock_pane_t

0xb64a,	// (0x0003e219) main_fs_bigclock_indicator_pane_ParamLimits

0xb64a,	// (0x0003e219) main_fs_bigclock_indicator_pane

0xaeee,	// (0x0003dabd) main_fs_bigclock_pane_g1_ParamLimits

0xaeee,	// (0x0003dabd) main_fs_bigclock_pane_g1

0xb656,	// (0x0003e225) main_fs_bigclock_pane_t1_ParamLimits

0xb656,	// (0x0003e225) main_fs_bigclock_pane_t1

0xb668,	// (0x0003e237) main_fs_bigclock_pane_t2_ParamLimits

0xb668,	// (0x0003e237) main_fs_bigclock_pane_t2

0xb67c,	// (0x0003e24b) main_fs_bigclock_pane_t3_ParamLimits

0xb67c,	// (0x0003e24b) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x00042a51) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00042a51) main_fs_bigclock_pane_t

0x213c,	// (0x00034d0b) main_fs_bigclock_indicator_pane_g1

0x11cd,	// (0x00033d9c) ncim_query_content_pane_g2_ParamLimits

0x11cd,	// (0x00033d9c) ncim_query_content_pane_g2

0x0001,

0xfc0b,	// (0x000427da) ncim_query_content_pane_g_ParamLimits

0xfc0b,	// (0x000427da) ncim_query_content_pane_g

0xae75,	// (0x0003da44) sc_clock_pane_t4_ParamLimits

0xae75,	// (0x0003da44) sc_clock_pane_t4

0xd8c0,	// (0x0004048f) main_radioblah_pane

0x02c6,	// (0x00032e95) cell_call4_button_pane_t1_copy1_ParamLimits

0x02c6,	// (0x00032e95) cell_call4_button_pane_t1_copy1

0xab17,	// (0x0003d6e6) main_ncimui_pane_t1_ParamLimits

0xab17,	// (0x0003d6e6) main_ncimui_pane_t1

0xab31,	// (0x0003d700) main_ncimui_pane_t2_ParamLimits

0xab31,	// (0x0003d700) main_ncimui_pane_t2

0x0002,

0xfc04,	// (0x000427d3) main_ncimui_pane_t_ParamLimits

0xfc04,	// (0x000427d3) main_ncimui_pane_t

0x1647,	// (0x00034216) main_radioblah_anim_pane_ParamLimits

0x1647,	// (0x00034216) main_radioblah_anim_pane

0x1658,	// (0x00034227) main_radioblah_info_pane_ParamLimits

0x1658,	// (0x00034227) main_radioblah_info_pane

0x166c,	// (0x0003423b) main_radioblah_pane_t1_ParamLimits

0x166c,	// (0x0003423b) main_radioblah_pane_t1

0x1688,	// (0x00034257) main_radioblah_pane_t2_ParamLimits

0x1688,	// (0x00034257) main_radioblah_pane_t2

0x0003,

0xfc9f,	// (0x0004286e) main_radioblah_pane_t_ParamLimits

0xfc9f,	// (0x0004286e) main_radioblah_pane_t

0xaf40,	// (0x0003db0f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaf40,	// (0x0003db0f) main_radioblah_rocker_ctrl_pane

0x16d0,	// (0x0003429f) main_radioblah_info_pane_t1_ParamLimits

0x16d0,	// (0x0003429f) main_radioblah_info_pane_t1

0xaf85,	// (0x0003db54) main_radioblah_info_pane_t2_ParamLimits

0xaf85,	// (0x0003db54) main_radioblah_info_pane_t2

0x0003,

0xfca8,	// (0x00042877) main_radioblah_info_pane_t_ParamLimits

0xfca8,	// (0x00042877) main_radioblah_info_pane_t

0xe84a,	// (0x00041419) main_radioblah_rocker_ctrl_pane_g1

0xb035,	// (0x0003dc04) main_radioblah_rocker_ctrl_pane_g2

0xb03d,	// (0x0003dc0c) main_radioblah_rocker_ctrl_pane_g3

0xb045,	// (0x0003dc14) main_radioblah_rocker_ctrl_pane_g4

0xb04d,	// (0x0003dc1c) main_radioblah_rocker_ctrl_pane_g5

0xb055,	// (0x0003dc24) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb1,	// (0x00042880) main_radioblah_rocker_ctrl_pane_g

0xaad4,	// (0x0003d6a3) main_cset_text2_pane_t1_copy1_ParamLimits

0x93ab,	// (0x0003bf7a) cam4_image_uncrop_qvga_pane

0x94f2,	// (0x0003c0c1) vid4_image_uncrop_qcif_pane

0xa6f8,	// (0x0003d2c7) cam6_image_uncrop_qvga_pane_ParamLimits

0xa6f8,	// (0x0003d2c7) cam6_image_uncrop_qvga_pane

0x0e0c,	// (0x000339db) vid6_image_uncrop_qcif_pane_ParamLimits

0x0e0c,	// (0x000339db) vid6_image_uncrop_qcif_pane

0x45be,	// (0x0003718d) bg_popup_preview_window_pane_cp03

0x117f,	// (0x00033d4e) list_cset_text2_pane

0x1187,	// (0x00033d56) main_cset6_text2_pane_g1

0x118f,	// (0x00033d5e) main_cset6_text2_pane_t1

0x24e8,	// (0x000350b7) list_cset_text2_pane_t1_ParamLimits

0x24e8,	// (0x000350b7) list_cset_text2_pane_t1

0xd8c0,	// (0x0004048f) main_radioblah_pane_ParamLimits

0xadd4,	// (0x0003d9a3) main_mobtv_info_pane_t3_ParamLimits

0xadd4,	// (0x0003d9a3) main_mobtv_info_pane_t3

0xaf2e,	// (0x0003dafd) main_radioblah_pane_g1

0xaf59,	// (0x0003db28) main_radioblah_info_pane_g1

0xafda,	// (0x0003dba9) main_radioblah_info_pane_t3_ParamLimits

0xafda,	// (0x0003dba9) main_radioblah_info_pane_t3

0x6333,	// (0x00038f02) highlight_cell_cale_month_pane_ParamLimits

0x6333,	// (0x00038f02) highlight_cell_cale_month_pane

0x45be,	// (0x0003718d) main_phob_fisheye_pane

0xeb95,	// (0x00041764) scroll_pane_cp0031_ParamLimits

0xeb95,	// (0x00041764) scroll_pane_cp0031

0x0f1a,	// (0x00033ae9) wait_bar_pane_cp08_ParamLimits

0xa89d,	// (0x0003d46c) cset_list_set_pane_copy1_ParamLimits

0x170a,	// (0x000342d9) highlight_cell_cale_month_pane_g1

0xb05d,	// (0x0003dc2c) highlight_cell_cale_month_pane_t1

0x0aa6,	// (0x00033675) list_gen_pane_cp01

0x05ae,	// (0x0003317d) scroll_pane_01

0xb06b,	// (0x0003dc3a) list_single_double_fisheye_pane

0x3c26,	// (0x000367f5) list_double_fisheye_pane_g1_ParamLimits

0x3c26,	// (0x000367f5) list_double_fisheye_pane_g1

0x3c32,	// (0x00036801) list_double_fisheye_pane_g2_ParamLimits

0x3c32,	// (0x00036801) list_double_fisheye_pane_g2

0xb074,	// (0x0003dc43) list_double_fisheye_pane_g3_ParamLimits

0xb074,	// (0x0003dc43) list_double_fisheye_pane_g3

0x0004,

0xfcbe,	// (0x0004288d) list_double_fisheye_pane_g_ParamLimits

0xfcbe,	// (0x0004288d) list_double_fisheye_pane_g

0x3c63,	// (0x00036832) list_double_fisheye_pane_t1_ParamLimits

0x3c63,	// (0x00036832) list_double_fisheye_pane_t1

0x3c7e,	// (0x0003684d) list_double_fisheye_pane_t2_ParamLimits

0x3c7e,	// (0x0003684d) list_double_fisheye_pane_t2

0x0001,

0xfcc9,	// (0x00042898) list_double_fisheye_pane_t_ParamLimits

0xfcc9,	// (0x00042898) list_double_fisheye_pane_t

0x45be,	// (0x0003718d) main_call5_pane

0xae9b,	// (0x0003da6a) sc_swipe_pane_ParamLimits

0xae9b,	// (0x0003da6a) sc_swipe_pane

0xb08c,	// (0x0003dc5b) call5_image_pane_ParamLimits

0xb08c,	// (0x0003dc5b) call5_image_pane

0xb09c,	// (0x0003dc6b) call5_swipe_1_pane_ParamLimits

0xb09c,	// (0x0003dc6b) call5_swipe_1_pane

0xb0a8,	// (0x0003dc77) call5_swipe_2_pane_ParamLimits

0xb0a8,	// (0x0003dc77) call5_swipe_2_pane

0xb0c2,	// (0x0003dc91) popup_call5_audio_first_window_ParamLimits

0xb0c2,	// (0x0003dc91) popup_call5_audio_first_window

0xeaad,	// (0x0004167c) call5_swipe_1_pane_g1_ParamLimits

0xeaad,	// (0x0004167c) call5_swipe_1_pane_g1

0x1712,	// (0x000342e1) call5_swipe_1_pane_g2_ParamLimits

0x1712,	// (0x000342e1) call5_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0004289d) call5_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0004289d) call5_swipe_1_pane_g

0x171e,	// (0x000342ed) call5_swipe_1_pane_t1_ParamLimits

0x171e,	// (0x000342ed) call5_swipe_1_pane_t1

0xeaad,	// (0x0004167c) call5_swipe_2_pane_g1_ParamLimits

0xeaad,	// (0x0004167c) call5_swipe_2_pane_g1

0x1733,	// (0x00034302) call5_swipe_2_pane_g2_ParamLimits

0x1733,	// (0x00034302) call5_swipe_2_pane_g2

0x0001,

0xfcd3,	// (0x000428a2) call5_swipe_2_pane_g_ParamLimits

0xfcd3,	// (0x000428a2) call5_swipe_2_pane_g

0x173f,	// (0x0003430e) call5_swipe_2_pane_t1_ParamLimits

0x173f,	// (0x0003430e) call5_swipe_2_pane_t1

0x1754,	// (0x00034323) sc_swipe_pane_g1_ParamLimits

0x1754,	// (0x00034323) sc_swipe_pane_g1

0x1761,	// (0x00034330) sc_swipe_pane_g2_ParamLimits

0x1761,	// (0x00034330) sc_swipe_pane_g2

0x0001,

0xfcd8,	// (0x000428a7) sc_swipe_pane_g_ParamLimits

0xfcd8,	// (0x000428a7) sc_swipe_pane_g

0x176d,	// (0x0003433c) sc_swipe_pane_t1_ParamLimits

0x176d,	// (0x0003433c) sc_swipe_pane_t1

0x45be,	// (0x0003718d) main_cmail_launcher_pane

0xb0d0,	// (0x0003dc9f) aid_size_cell_cmail_l_ParamLimits

0xb0d0,	// (0x0003dc9f) aid_size_cell_cmail_l

0xb0e0,	// (0x0003dcaf) grid_cmail_l_pane_ParamLimits

0xb0e0,	// (0x0003dcaf) grid_cmail_l_pane

0xb0f0,	// (0x0003dcbf) cell_cmail_l_pane_ParamLimits

0xb0f0,	// (0x0003dcbf) cell_cmail_l_pane

0xb104,	// (0x0003dcd3) cell_cmail_l_pane_g1_ParamLimits

0xb104,	// (0x0003dcd3) cell_cmail_l_pane_g1

0xb110,	// (0x0003dcdf) cell_cmail_l_pane_t1_ParamLimits

0xb110,	// (0x0003dcdf) cell_cmail_l_pane_t1

0x1782,	// (0x00034351) cell_cmail_l_pane_t2_ParamLimits

0x1782,	// (0x00034351) cell_cmail_l_pane_t2

0x0001,

0xfcdd,	// (0x000428ac) cell_cmail_l_pane_t_ParamLimits

0xfcdd,	// (0x000428ac) cell_cmail_l_pane_t

0xd8c0,	// (0x0004048f) grid_highlight_pane_cp018_ParamLimits

0xd8c0,	// (0x0004048f) grid_highlight_pane_cp018

0x46e9,	// (0x000372b8) main2_pane_ParamLimits

0x46e9,	// (0x000372b8) main2_pane

0xc5a4,	// (0x0003f173) popup_sp_fs_action_menu_bg_pane_g1

0xc5ac,	// (0x0003f17b) popup_sp_fs_action_menu_bg_pane_g2

0xc5b4,	// (0x0003f183) popup_sp_fs_action_menu_bg_pane_g3

0xc5bc,	// (0x0003f18b) popup_sp_fs_action_menu_bg_pane_g4

0xc5c4,	// (0x0003f193) popup_sp_fs_action_menu_bg_pane_g5

0xc5cc,	// (0x0003f19b) popup_sp_fs_action_menu_bg_pane_g6

0xc5d4,	// (0x0003f1a3) popup_sp_fs_action_menu_bg_pane_g7

0xc5dc,	// (0x0003f1ab) popup_sp_fs_action_menu_bg_pane_g8

0xc5e4,	// (0x0003f1b3) popup_sp_fs_action_menu_bg_pane_g9

0xc5ec,	// (0x0003f1bb) popup_sp_fs_action_menu_bg_pane_g10

0xc5ec,	// (0x0003f1bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00041d76) popup_sp_fs_action_menu_bg_pane_g

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g3_g1

0x342d,	// (0x00035ffc) list_medium_line_x2_t3_g3_g2_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_t3_g3_g2

0x3439,	// (0x00036008) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x00041e26) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x00041e26) list_medium_line_x2_t3_g3_g

0x3445,	// (0x00036014) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3445,	// (0x00036014) list_medium_line_x2_t3_g3_t1

0x345a,	// (0x00036029) list_medium_line_x2_t3_g3_t2_ParamLimits

0x345a,	// (0x00036029) list_medium_line_x2_t3_g3_t2

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00041e2d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00041e2d) list_medium_line_x2_t3_g3_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g2_g1

0x3439,	// (0x00036008) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00041e34) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00041e34) list_medium_line_x2_t3_g2_g

0x3481,	// (0x00036050) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3481,	// (0x00036050) list_medium_line_x2_t3_g2_t1

0x3497,	// (0x00036066) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3497,	// (0x00036066) list_medium_line_x2_t3_g2_t2

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x00041e39) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x00041e39) list_medium_line_x2_t3_g2_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t4_g4_g1

0x34a9,	// (0x00036078) list_medium_line_x2_t4_g4_g2_ParamLimits

0x34a9,	// (0x00036078) list_medium_line_x2_t4_g4_g2

0x342d,	// (0x00035ffc) list_medium_line_x2_t4_g4_g3_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_t4_g4_g3

0x34b5,	// (0x00036084) list_medium_line_x2_t4_g4_g4_ParamLimits

0x34b5,	// (0x00036084) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x00041e40) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x00041e40) list_medium_line_x2_t4_g4_g

0x34c1,	// (0x00036090) list_medium_line_x2_t4_g4_t1_ParamLimits

0x34c1,	// (0x00036090) list_medium_line_x2_t4_g4_t1

0x34db,	// (0x000360aa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x34db,	// (0x000360aa) list_medium_line_x2_t4_g4_t2

0x34f1,	// (0x000360c0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x34f1,	// (0x000360c0) list_medium_line_x2_t4_g4_t3

0x3506,	// (0x000360d5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3506,	// (0x000360d5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x00041e49) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x00041e49) list_medium_line_x2_t4_g4_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g4_g1

0x34a9,	// (0x00036078) list_medium_line_x2_t2_g4_g2_ParamLimits

0x34a9,	// (0x00036078) list_medium_line_x2_t2_g4_g2

0x342d,	// (0x00035ffc) list_medium_line_x2_t2_g4_g3_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_t2_g4_g3

0x3439,	// (0x00036008) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00041eb0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00041eb0) list_medium_line_x2_t2_g4_g

0x3518,	// (0x000360e7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3518,	// (0x000360e7) list_medium_line_x2_t2_g4_t1

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x00041eb9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x00041eb9) list_medium_line_x2_t2_g4_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g3_g1

0x342d,	// (0x00035ffc) list_medium_line_x2_t2_g3_g2_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_t2_g3_g2

0x3439,	// (0x00036008) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x00041e26) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x00041e26) list_medium_line_x2_t2_g3_g

0x352d,	// (0x000360fc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x352d,	// (0x000360fc) list_medium_line_x2_t2_g3_t1

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00041ebe) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00041ebe) list_medium_line_x2_t2_g3_t

0x64e5,	// (0x000390b4) main_sp_fs_list_pane_ParamLimits

0x64e5,	// (0x000390b4) main_sp_fs_list_pane

0x64f1,	// (0x000390c0) sp_fs_scroll_pane_ParamLimits

0x64f1,	// (0x000390c0) sp_fs_scroll_pane

0x3542,	// (0x00036111) list_medium_line_x2_t3_t1

0x3552,	// (0x00036121) list_medium_line_x2_t3_t2

0x3560,	// (0x0003612f) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x00041f09) list_medium_line_x2_t3_t

0x356e,	// (0x0003613d) list_medium_line_x3_t4_t1

0x357e,	// (0x0003614d) list_medium_line_x3_t4_t2

0x358c,	// (0x0003615b) list_medium_line_x3_t4_t3

0x3560,	// (0x0003612f) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00041f10) list_medium_line_x3_t4_t

0x359a,	// (0x00036169) list_medium_line_x4_t5_t1

0x35aa,	// (0x00036179) list_medium_line_x4_t5_t2

0x358c,	// (0x0003615b) list_medium_line_x4_t5_t3

0x35b8,	// (0x00036187) list_medium_line_x4_t5_t4

0x3560,	// (0x0003612f) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x00041f19) list_medium_line_x4_t5_t

0x3421,	// (0x00035ff0) list_medium_line_t4_g4_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_t4_g4_g1

0x34b5,	// (0x00036084) list_medium_line_t4_g4_g2_ParamLimits

0x34b5,	// (0x00036084) list_medium_line_t4_g4_g2

0x35c6,	// (0x00036195) list_medium_line_t4_g4_g3_ParamLimits

0x35c6,	// (0x00036195) list_medium_line_t4_g4_g3

0x3439,	// (0x00036008) list_medium_line_t4_g4_g4_ParamLimits

0x3439,	// (0x00036008) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00041f24) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00041f24) list_medium_line_t4_g4_g

0x35d2,	// (0x000361a1) list_medium_line_t4_g4_t1_ParamLimits

0x35d2,	// (0x000361a1) list_medium_line_t4_g4_t1

0x35e7,	// (0x000361b6) list_medium_line_t4_g4_t2_ParamLimits

0x35e7,	// (0x000361b6) list_medium_line_t4_g4_t2

0x35fc,	// (0x000361cb) list_medium_line_t4_g4_t3_ParamLimits

0x35fc,	// (0x000361cb) list_medium_line_t4_g4_t3

0x346c,	// (0x0003603b) list_medium_line_t4_g4_t4_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00041f2d) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00041f2d) list_medium_line_t4_g4_t

0x660e,	// (0x000391dd) chi_dic_find_pane_g1

0x756d,	// (0x0003a13c) main_tport_pane

0x38a6,	// (0x00036475) list_medium_line_plain_t1

0x38b4,	// (0x00036483) list_medium_line_t2_g2_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t2_g2_g1

0x38c0,	// (0x0003648f) list_medium_line_t2_g2_g2_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_t2_g2_g2

0x0001,

0xfa1a,	// (0x000425e9) list_medium_line_t2_g2_g_ParamLimits

0xfa1a,	// (0x000425e9) list_medium_line_t2_g2_g

0x38cc,	// (0x0003649b) list_medium_line_t2_g2_t1_ParamLimits

0x38cc,	// (0x0003649b) list_medium_line_t2_g2_t1

0x38e6,	// (0x000364b5) list_medium_line_t2_g2_t2_ParamLimits

0x38e6,	// (0x000364b5) list_medium_line_t2_g2_t2

0x0001,

0xfa1f,	// (0x000425ee) list_medium_line_t2_g2_t_ParamLimits

0xfa1f,	// (0x000425ee) list_medium_line_t2_g2_t

0x3b05,	// (0x000366d4) aid_sp_fs_list_icon_a_sm

0x3b0d,	// (0x000366dc) aid_sp_fs_list_icon_d

0x1f59,	// (0x00034b28) aid_sp_fs_text_primary

0x1ca9,	// (0x00034878) aid_sp_fs_text_secondary

0x3b15,	// (0x000366e4) list_medium_line

0x3b15,	// (0x000366e4) list_medium_line_g2

0x3b15,	// (0x000366e4) list_medium_line_g3

0x3b15,	// (0x000366e4) list_medium_line_plain

0x3b15,	// (0x000366e4) list_medium_line_plain_t2

0x3b15,	// (0x000366e4) list_medium_line_plain_t3

0x3b15,	// (0x000366e4) list_medium_line_right_icon

0x3b15,	// (0x000366e4) list_medium_line_right_iconx2

0x3b15,	// (0x000366e4) list_medium_line_t2

0x3b15,	// (0x000366e4) list_medium_line_t2_g2

0x3b15,	// (0x000366e4) list_medium_line_t2_g3

0x3b15,	// (0x000366e4) list_medium_line_t2_right_icon

0x3b15,	// (0x000366e4) list_medium_line_t2_right_iconx2

0x3b15,	// (0x000366e4) list_medium_line_t3

0x3b15,	// (0x000366e4) list_medium_line_t3_g2

0x3b15,	// (0x000366e4) list_medium_line_t3_g3

0x3b15,	// (0x000366e4) list_medium_line_t3_right_iconx2

0x3b1e,	// (0x000366ed) list_medium_line_t4_g4

0x3b27,	// (0x000366f6) list_medium_line_x2

0x3b27,	// (0x000366f6) list_medium_line_x2_t2_g2

0x3b27,	// (0x000366f6) list_medium_line_x2_t2_g3

0x3b27,	// (0x000366f6) list_medium_line_x2_t2_g4

0x3b27,	// (0x000366f6) list_medium_line_x2_t3

0x3b27,	// (0x000366f6) list_medium_line_x2_t3_g2

0x3b27,	// (0x000366f6) list_medium_line_x2_t3_g3

0x3b27,	// (0x000366f6) list_medium_line_x2_t3_g4

0x3b27,	// (0x000366f6) list_medium_line_x2_t4_g2

0x3b27,	// (0x000366f6) list_medium_line_x2_t4_g4

0x3b30,	// (0x000366ff) list_medium_line_x3

0x3b30,	// (0x000366ff) list_medium_line_x3_t4

0x3b30,	// (0x000366ff) list_medium_line_x3_t4_g4

0x3b1e,	// (0x000366ed) list_medium_line_x4_t4

0x3b1e,	// (0x000366ed) list_medium_line_x4_t4_g7

0x3b1e,	// (0x000366ed) list_medium_line_x4_t5

0x3b39,	// (0x00036708) list_single_fs_dyc_pane_ParamLimits

0x3b39,	// (0x00036708) list_single_fs_dyc_pane

0x3421,	// (0x00035ff0) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x4_t4_g7_g1

0x3b55,	// (0x00036724) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3b55,	// (0x00036724) list_medium_line_x4_t4_g7_g2

0x3b61,	// (0x00036730) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3b61,	// (0x00036730) list_medium_line_x4_t4_g7_g3

0x3b70,	// (0x0003673f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3b70,	// (0x0003673f) list_medium_line_x4_t4_g7_g4

0x3b7c,	// (0x0003674b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3b7c,	// (0x0003674b) list_medium_line_x4_t4_g7_g5

0x3b8b,	// (0x0003675a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3b8b,	// (0x0003675a) list_medium_line_x4_t4_g7_g6

0x3b9a,	// (0x00036769) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3b9a,	// (0x00036769) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbea,	// (0x000427b9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbea,	// (0x000427b9) list_medium_line_x4_t4_g7_g

0x3ba6,	// (0x00036775) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3ba6,	// (0x00036775) list_medium_line_x4_t4_g7_t1

0x3bbb,	// (0x0003678a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3bbb,	// (0x0003678a) list_medium_line_x4_t4_g7_t2

0x3bd0,	// (0x0003679f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3bd0,	// (0x0003679f) list_medium_line_x4_t4_g7_t3

0x3be5,	// (0x000367b4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3be5,	// (0x000367b4) list_medium_line_x4_t4_g7_t4

0x3bf7,	// (0x000367c6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3bf7,	// (0x000367c6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf9,	// (0x000427c8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf9,	// (0x000427c8) list_medium_line_x4_t4_g7_t

0x3c09,	// (0x000367d8) list_single_dyc_row_pane_ParamLimits

0x3c09,	// (0x000367d8) list_single_dyc_row_pane

0xb080,	// (0x0003dc4f) call5_gesture_pane_ParamLimits

0xb080,	// (0x0003dc4f) call5_gesture_pane

0xb0b4,	// (0x0003dc83) call5_windows_pane_ParamLimits

0xb0b4,	// (0x0003dc83) call5_windows_pane

0xb126,	// (0x0003dcf5) call5_swipe_1_pane_cp_ParamLimits

0xb126,	// (0x0003dcf5) call5_swipe_1_pane_cp

0xb132,	// (0x0003dd01) call5_swipe_2_pane_cp_ParamLimits

0xb132,	// (0x0003dd01) call5_swipe_2_pane_cp

0xcfec,	// (0x0003fbbb) call5_image_pane_cp

0xb13e,	// (0x0003dd0d) popup_call5_audio_first_window_cp_ParamLimits

0xb13e,	// (0x0003dd0d) popup_call5_audio_first_window_cp

0x1754,	// (0x00034323) call5_swipe_1_pane_g1_cp_ParamLimits

0x1754,	// (0x00034323) call5_swipe_1_pane_g1_cp

0x1794,	// (0x00034363) call5_swipe_1_pane_g2_cp

0x176d,	// (0x0003433c) call5_swipe_1_pane_t1_cp_ParamLimits

0x176d,	// (0x0003433c) call5_swipe_1_pane_t1_cp

0x1754,	// (0x00034323) call5_swipe_2_pane_g1_cp_ParamLimits

0x1754,	// (0x00034323) call5_swipe_2_pane_g1_cp

0x179c,	// (0x0003436b) call5_swipe_2_pane_g2_cp

0x17a4,	// (0x00034373) call5_swipe_2_pane_t1_cp_ParamLimits

0x17a4,	// (0x00034373) call5_swipe_2_pane_t1_cp

0xd8c0,	// (0x0004048f) main_sp_fs_email_pane

0x17b9,	// (0x00034388) main_sp_fs_listscroll_pane_te

0x3ca0,	// (0x0003686f) popup_sp_fs_action_menu_pane_ParamLimits

0x3ca0,	// (0x0003686f) popup_sp_fs_action_menu_pane

0xe84a,	// (0x00041419) bg_sp_fs_ctrlbar_pane_g1

0x1806,	// (0x000343d5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x180f,	// (0x000343de) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1818,	// (0x000343e7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe84a,	// (0x00041419) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce2,	// (0x000428b1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe61e,	// (0x000411ed) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe61e,	// (0x000411ed) bg_sp_fs_ctrlbar_ddmenu_pane

0x1821,	// (0x000343f0) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1821,	// (0x000343f0) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x182d,	// (0x000343fc) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x182d,	// (0x000343fc) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfceb,	// (0x000428ba) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfceb,	// (0x000428ba) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1839,	// (0x00034408) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1839,	// (0x00034408) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3ce4,	// (0x000368b3) list_medium_line_t2_right_icon_g1

0x3cec,	// (0x000368bb) list_medium_line_t2_right_icon_t1

0x3cfc,	// (0x000368cb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf0,	// (0x000428bf) list_medium_line_t2_right_icon_t

0xe3f2,	// (0x00040fc1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe3f2,	// (0x00040fc1) bg_sp_fs_ctrlbar_pane

0xb1a3,	// (0x0003dd72) main_sp_fs_ctrlbar_button_pane_cp01

0xb1ab,	// (0x0003dd7a) main_sp_fs_ctrlbar_ddmenu_pane

0x1893,	// (0x00034462) main_sp_fs_ctrlbar_pane_g1

0x189f,	// (0x0003446e) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf5,	// (0x000428c4) main_sp_fs_ctrlbar_pane_g

0x18ab,	// (0x0003447a) main_sp_fs_ctrlbar_pane_t1

0x3d0a,	// (0x000368d9) main_sp_fs_ctrlbar_pane

0x3d24,	// (0x000368f3) main_sp_fs_listscroll_pane_te_cp01

0x3d35,	// (0x00036904) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3d35,	// (0x00036904) popup_sp_fs_action_menu_pane_cp01

0xd8c0,	// (0x0004048f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd8c0,	// (0x0004048f) bg_sp_fs_highlight_list_pane_cp01

0x3d4d,	// (0x0003691c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3d4d,	// (0x0003691c) sp_fs_action_menu_list_gene_pane_g1

0x18df,	// (0x000344ae) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x18df,	// (0x000344ae) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x000428ce) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x000428ce) sp_fs_action_menu_list_gene_pane_g

0x3d5c,	// (0x0003692b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3d5c,	// (0x0003692b) sp_fs_action_menu_list_gene_pane_t1

0x3d74,	// (0x00036943) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3d74,	// (0x00036943) sp_fs_action_menu_list_gene_pane

0x1925,	// (0x000344f4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1925,	// (0x000344f4) popup_sp_fs_action_menu_bg_pane

0x3d93,	// (0x00036962) sp_fs_action_menu_list_pane_ParamLimits

0x3d93,	// (0x00036962) sp_fs_action_menu_list_pane

0x1955,	// (0x00034524) sp_fs_scroll_pane_cp01_ParamLimits

0x1955,	// (0x00034524) sp_fs_scroll_pane_cp01

0x3db3,	// (0x00036982) list_medium_line_plain_t2_t1

0x3dc3,	// (0x00036992) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x000428d3) list_medium_line_plain_t2_t

0x3dd1,	// (0x000369a0) list_medium_line_plain_t3_t1

0x3de1,	// (0x000369b0) list_medium_line_plain_t3_t2

0x3def,	// (0x000369be) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x000428d8) list_medium_line_plain_t3_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t2_g2_g1

0x3439,	// (0x00036008) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00041e34) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00041e34) list_medium_line_x2_t2_g2_g

0x35d2,	// (0x000361a1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x35d2,	// (0x000361a1) list_medium_line_x2_t2_g2_t1

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x000428df) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x000428df) list_medium_line_x2_t2_g2_t

0x3421,	// (0x00035ff0) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t4_g2_g1

0x3dfd,	// (0x000369cc) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3dfd,	// (0x000369cc) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x000428e4) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x000428e4) list_medium_line_x2_t4_g2_g

0x3e0f,	// (0x000369de) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3e0f,	// (0x000369de) list_medium_line_x2_t4_g2_t1

0x3e29,	// (0x000369f8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3e29,	// (0x000369f8) list_medium_line_x2_t4_g2_t2

0x3e3e,	// (0x00036a0d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3e3e,	// (0x00036a0d) list_medium_line_x2_t4_g2_t3

0x346c,	// (0x0003603b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x000428e9) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x000428e9) list_medium_line_x2_t4_g2_t

0x3e53,	// (0x00036a22) list_medium_line_t3_right_iconx2_g1

0x3ce4,	// (0x000368b3) list_medium_line_t3_right_iconx2_g2

0x3e5b,	// (0x00036a2a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x000428f2) list_medium_line_t3_right_iconx2_g

0x3e63,	// (0x00036a32) list_medium_line_t3_right_iconx2_t1

0x3e73,	// (0x00036a42) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x000428f9) list_medium_line_t3_right_iconx2_t

0x3421,	// (0x00035ff0) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x3_t4_g4_g1

0x342d,	// (0x00035ffc) list_medium_line_x3_t4_g4_g2_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x3_t4_g4_g2

0x34b5,	// (0x00036084) list_medium_line_x3_t4_g4_g3_ParamLimits

0x34b5,	// (0x00036084) list_medium_line_x3_t4_g4_g3

0x3e81,	// (0x00036a50) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3e81,	// (0x00036a50) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x000428fe) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x000428fe) list_medium_line_x3_t4_g4_g

0x3e8d,	// (0x00036a5c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3e8d,	// (0x00036a5c) list_medium_line_x3_t4_g4_t1

0x3ea4,	// (0x00036a73) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3ea4,	// (0x00036a73) list_medium_line_x3_t4_g4_t2

0x35e7,	// (0x000361b6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x35e7,	// (0x000361b6) list_medium_line_x3_t4_g4_t3

0x3eb9,	// (0x00036a88) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3eb9,	// (0x00036a88) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00042907) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00042907) list_medium_line_x3_t4_g4_t

0x3ed6,	// (0x00036aa5) list_single_dyc_row_text_pane_t1_ParamLimits

0x3ed6,	// (0x00036aa5) list_single_dyc_row_text_pane_t1

0x3f0d,	// (0x00036adc) list_single_dyc_row_text_pane_t2_ParamLimits

0x3f0d,	// (0x00036adc) list_single_dyc_row_text_pane_t2

0x3f67,	// (0x00036b36) list_single_dyc_row_text_pane_t3_ParamLimits

0x3f67,	// (0x00036b36) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x00042910) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x00042910) list_single_dyc_row_text_pane_t

0x3f79,	// (0x00036b48) list_single_dyc_row_pane_g1_ParamLimits

0x3f79,	// (0x00036b48) list_single_dyc_row_pane_g1

0x3f85,	// (0x00036b54) list_single_dyc_row_pane_g2_ParamLimits

0x3f85,	// (0x00036b54) list_single_dyc_row_pane_g2

0x3f91,	// (0x00036b60) list_single_dyc_row_pane_g3_ParamLimits

0x3f91,	// (0x00036b60) list_single_dyc_row_pane_g3

0x3f9d,	// (0x00036b6c) list_single_dyc_row_pane_g4_ParamLimits

0x3f9d,	// (0x00036b6c) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00042917) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00042917) list_single_dyc_row_pane_g

0x3fa9,	// (0x00036b78) list_single_dyc_row_text_pane_ParamLimits

0x3fa9,	// (0x00036b78) list_single_dyc_row_text_pane

0x45be,	// (0x0003718d) bg_sp_fs_scroll_pane

0x1a0d,	// (0x000345dc) thumb_sp_fs_scroll_pane

0x38b4,	// (0x00036483) list_medium_line_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_g1

0x3fc8,	// (0x00036b97) list_medium_line_t1_ParamLimits

0x3fc8,	// (0x00036b97) list_medium_line_t1

0x3421,	// (0x00035ff0) list_medium_line_x2_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_g1

0x342d,	// (0x00035ffc) list_medium_line_x2_g2_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x00042920) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x00042920) list_medium_line_x2_g

0x3fdd,	// (0x00036bac) list_medium_line_x2_t1_ParamLimits

0x3fdd,	// (0x00036bac) list_medium_line_x2_t1

0x3421,	// (0x00035ff0) list_medium_line_x3_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x3_g1

0x342d,	// (0x00035ffc) list_medium_line_x3_g2_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x00042920) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x00042920) list_medium_line_x3_g

0x3fdd,	// (0x00036bac) list_medium_line_x3_t1_ParamLimits

0x3fdd,	// (0x00036bac) list_medium_line_x3_t1

0x1a41,	// (0x00034610) thumb_sp_fs_scroll_pane_g1

0x1a4a,	// (0x00034619) thumb_sp_fs_scroll_pane_g2

0x1a53,	// (0x00034622) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00042925) thumb_sp_fs_scroll_pane_g

0x1a41,	// (0x00034610) bg_sp_fs_scroll_pane_g1

0x1a4a,	// (0x00034619) bg_sp_fs_scroll_pane_g2

0x1a53,	// (0x00034622) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00042925) bg_sp_fs_scroll_pane_g

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3421,	// (0x00035ff0) list_medium_line_x2_t3_g4_g1

0x34a9,	// (0x00036078) list_medium_line_x2_t3_g4_g2_ParamLimits

0x34a9,	// (0x00036078) list_medium_line_x2_t3_g4_g2

0x342d,	// (0x00035ffc) list_medium_line_x2_t3_g4_g3_ParamLimits

0x342d,	// (0x00035ffc) list_medium_line_x2_t3_g4_g3

0x3439,	// (0x00036008) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3439,	// (0x00036008) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00041eb0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00041eb0) list_medium_line_x2_t3_g4_g

0x3ff3,	// (0x00036bc2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3ff3,	// (0x00036bc2) list_medium_line_x2_t3_g4_t1

0x4009,	// (0x00036bd8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4009,	// (0x00036bd8) list_medium_line_x2_t3_g4_t2

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x346c,	// (0x0003603b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0004292c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0004292c) list_medium_line_x2_t3_g4_t

0x38b4,	// (0x00036483) list_medium_line_g2_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_g2_g1

0x38c0,	// (0x0003648f) list_medium_line_g2_g2_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_g2_g2

0x0001,

0xfa1a,	// (0x000425e9) list_medium_line_g2_g_ParamLimits

0xfa1a,	// (0x000425e9) list_medium_line_g2_g

0x4023,	// (0x00036bf2) list_medium_line_g2_t1_ParamLimits

0x4023,	// (0x00036bf2) list_medium_line_g2_t1

0x38b4,	// (0x00036483) list_medium_line_t3_g2_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t3_g2_g1

0x38c0,	// (0x0003648f) list_medium_line_t3_g2_g2_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_t3_g2_g2

0x0001,

0xfa1a,	// (0x000425e9) list_medium_line_t3_g2_g_ParamLimits

0xfa1a,	// (0x000425e9) list_medium_line_t3_g2_g

0x4038,	// (0x00036c07) list_medium_line_t3_g2_t1_ParamLimits

0x4038,	// (0x00036c07) list_medium_line_t3_g2_t1

0x404f,	// (0x00036c1e) list_medium_line_t3_g2_t2_ParamLimits

0x404f,	// (0x00036c1e) list_medium_line_t3_g2_t2

0x4064,	// (0x00036c33) list_medium_line_t3_g2_t3_ParamLimits

0x4064,	// (0x00036c33) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x00042933) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x00042933) list_medium_line_t3_g2_t

0x3ce4,	// (0x000368b3) list_medium_line_right_icon_g1

0x4079,	// (0x00036c48) list_medium_line_right_icon_t1

0x38b4,	// (0x00036483) list_medium_line_t2_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t2_g1

0x4087,	// (0x00036c56) list_medium_line_t2_t1_ParamLimits

0x4087,	// (0x00036c56) list_medium_line_t2_t1

0x40a1,	// (0x00036c70) list_medium_line_t2_t2_ParamLimits

0x40a1,	// (0x00036c70) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0004293a) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0004293a) list_medium_line_t2_t

0x38b4,	// (0x00036483) list_medium_line_t3_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t3_g1

0x40b6,	// (0x00036c85) list_medium_line_t3_t1_ParamLimits

0x40b6,	// (0x00036c85) list_medium_line_t3_t1

0x40cd,	// (0x00036c9c) list_medium_line_t3_t2_ParamLimits

0x40cd,	// (0x00036c9c) list_medium_line_t3_t2

0x40e2,	// (0x00036cb1) list_medium_line_t3_t3_ParamLimits

0x40e2,	// (0x00036cb1) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0004293f) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0004293f) list_medium_line_t3_t

0x38b4,	// (0x00036483) list_medium_line_g3_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_g3_g1

0x40f4,	// (0x00036cc3) list_medium_line_g3_g2_ParamLimits

0x40f4,	// (0x00036cc3) list_medium_line_g3_g2

0x38c0,	// (0x0003648f) list_medium_line_g3_g3_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00042946) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00042946) list_medium_line_g3_g

0x4100,	// (0x00036ccf) list_medium_line_g3_t1_ParamLimits

0x4100,	// (0x00036ccf) list_medium_line_g3_t1

0x38b4,	// (0x00036483) list_medium_line_t2_g3_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t2_g3_g1

0x40f4,	// (0x00036cc3) list_medium_line_t2_g3_g2_ParamLimits

0x40f4,	// (0x00036cc3) list_medium_line_t2_g3_g2

0x38c0,	// (0x0003648f) list_medium_line_t2_g3_g3_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00042946) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00042946) list_medium_line_t2_g3_g

0x4115,	// (0x00036ce4) list_medium_line_t2_g3_t1_ParamLimits

0x4115,	// (0x00036ce4) list_medium_line_t2_g3_t1

0x412f,	// (0x00036cfe) list_medium_line_t2_g3_t2_ParamLimits

0x412f,	// (0x00036cfe) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0004294d) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0004294d) list_medium_line_t2_g3_t

0x38b4,	// (0x00036483) list_medium_line_t3_g3_g1_ParamLimits

0x38b4,	// (0x00036483) list_medium_line_t3_g3_g1

0x40f4,	// (0x00036cc3) list_medium_line_t3_g3_g2_ParamLimits

0x40f4,	// (0x00036cc3) list_medium_line_t3_g3_g2

0x38c0,	// (0x0003648f) list_medium_line_t3_g3_g3_ParamLimits

0x38c0,	// (0x0003648f) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00042946) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00042946) list_medium_line_t3_g3_g

0x4144,	// (0x00036d13) list_medium_line_t3_g3_t1_ParamLimits

0x4144,	// (0x00036d13) list_medium_line_t3_g3_t1

0x4158,	// (0x00036d27) list_medium_line_t3_g3_t2_ParamLimits

0x4158,	// (0x00036d27) list_medium_line_t3_g3_t2

0x416a,	// (0x00036d39) list_medium_line_t3_g3_t3_ParamLimits

0x416a,	// (0x00036d39) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x00042952) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x00042952) list_medium_line_t3_g3_t

0x3e53,	// (0x00036a22) list_medium_line_right_iconx2_g1

0x3ce4,	// (0x000368b3) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00042959) list_medium_line_right_iconx2_g

0x417c,	// (0x00036d4b) list_medium_line_right_iconx2_t1

0x3e53,	// (0x00036a22) list_medium_line_t2_right_iconx2_g1

0x3ce4,	// (0x000368b3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00042959) list_medium_line_t2_right_iconx2_g

0x418a,	// (0x00036d59) list_medium_line_t2_right_iconx2_t1

0x419a,	// (0x00036d69) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0004295e) list_medium_line_t2_right_iconx2_t

0x41a8,	// (0x00036d77) list_medium_line_x4_t4_t1

0x41b6,	// (0x00036d85) list_medium_line_x4_t4_t2

0x41c6,	// (0x00036d95) list_medium_line_x4_t4_t3

0x41d6,	// (0x00036da5) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x00042963) list_medium_line_x4_t4_t

0xb1de,	// (0x0003ddad) tport_appsw_pane_ParamLimits

0xb1de,	// (0x0003ddad) tport_appsw_pane

0xb1ea,	// (0x0003ddb9) tport_contact_pane_ParamLimits

0xb1ea,	// (0x0003ddb9) tport_contact_pane

0xb1fa,	// (0x0003ddc9) tport_listscroll_pane_ParamLimits

0xb1fa,	// (0x0003ddc9) tport_listscroll_pane

0xb20a,	// (0x0003ddd9) cell_tport_appsw_pane_ParamLimits

0xb20a,	// (0x0003ddd9) cell_tport_appsw_pane

0xeb12,	// (0x000416e1) tport_appsw_pane_g1_ParamLimits

0xeb12,	// (0x000416e1) tport_appsw_pane_g1

0x1abc,	// (0x0003468b) tport_contact_pane_g1

0x1253,	// (0x00033e22) tport_contact_pane_t1

0x1ac5,	// (0x00034694) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0004296c) tport_contact_pane_t

0x1ad3,	// (0x000346a2) list_tport_pane

0x1adc,	// (0x000346ab) scroll_pane_cp_030

0x1aed,	// (0x000346bc) cell_tport_appsw_pane_g1

0x1afd,	// (0x000346cc) cell_tport_appsw_pane_t1

0x45be,	// (0x0003718d) grid_highlight_pane_cp019

0xb235,	// (0x0003de04) list_tport_double_graphic_pane_ParamLimits

0xb235,	// (0x0003de04) list_tport_double_graphic_pane

0xd8c0,	// (0x0004048f) list_highlight_pane_cp023_ParamLimits

0xd8c0,	// (0x0004048f) list_highlight_pane_cp023

0xb247,	// (0x0003de16) list_tport_double_graphic_pane_g1_ParamLimits

0xb247,	// (0x0003de16) list_tport_double_graphic_pane_g1

0xb254,	// (0x0003de23) list_tport_double_graphic_pane_t1_ParamLimits

0xb254,	// (0x0003de23) list_tport_double_graphic_pane_t1

0xb269,	// (0x0003de38) list_tport_double_graphic_pane_t2_ParamLimits

0xb269,	// (0x0003de38) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00042978) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00042978) list_tport_double_graphic_pane_t

0x45be,	// (0x0003718d) main_cale_note_pane

0x9742,	// (0x0003c311) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9742,	// (0x0003c311) cell_vitu2_function_top_wide_pane_cp01

0xade8,	// (0x0003d9b7) wait_bar_pane_cp05_ParamLimits

0x45be,	// (0x0003718d) listscroll_cmail_pane

0x1b13,	// (0x000346e2) list_cmail_pane

0xb285,	// (0x0003de54) list_cmail_body_pane

0xb29f,	// (0x0003de6e) list_single_cmail_header_caption_pane

0xb2c4,	// (0x0003de93) list_single_cmail_header_detail_pane_ParamLimits

0xb2c4,	// (0x0003de93) list_single_cmail_header_detail_pane

0xb2f4,	// (0x0003dec3) list_single_cmail_header_caption_pane_t1

0x41e6,	// (0x00036db5) list_single_cmail_header_detail_pane_g1_ParamLimits

0x41e6,	// (0x00036db5) list_single_cmail_header_detail_pane_g1

0x41fc,	// (0x00036dcb) list_single_cmail_header_detail_pane_g2_ParamLimits

0x41fc,	// (0x00036dcb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0004297d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0004297d) list_single_cmail_header_detail_pane_g

0x4208,	// (0x00036dd7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4208,	// (0x00036dd7) list_single_cmail_header_detail_pane_t1

0x4262,	// (0x00036e31) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4262,	// (0x00036e31) list_single_cmail_header_editor_pane_bg

0x1402,	// (0x00033fd1) list_cmail_body_pane_g1

0x1b95,	// (0x00034764) list_cmail_body_pane_t1

0x0494,	// (0x00033063) list_single_cmail_header_editor_pane_bg_g1

0xc901,	// (0x0003f4d0) list_single_cmail_header_editor_pane_bg_g1_copy1

0x04a4,	// (0x00033073) list_single_cmail_header_editor_pane_bg_g1_copy2

0x049c,	// (0x0003306b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x074d,	// (0x0003331c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x04c4,	// (0x00033093) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x04b4,	// (0x00033083) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x04bc,	// (0x0003308b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc8e1,	// (0x0003f4b0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb302,	// (0x0003ded1) calenote_gesture_pane_ParamLimits

0xb302,	// (0x0003ded1) calenote_gesture_pane

0xb31c,	// (0x0003deeb) calenote_window_pane_ParamLimits

0xb31c,	// (0x0003deeb) calenote_window_pane

0x1ba3,	// (0x00034772) popup_note_window_cp01

0xb334,	// (0x0003df03) calenote_swipe_1_pane_ParamLimits

0xb334,	// (0x0003df03) calenote_swipe_1_pane

0xb132,	// (0x0003dd01) calenote_swipe_2_pane_ParamLimits

0xb132,	// (0x0003dd01) calenote_swipe_2_pane

0x1754,	// (0x00034323) calenote_swipe_1_pane_g1_ParamLimits

0x1754,	// (0x00034323) calenote_swipe_1_pane_g1

0x1761,	// (0x00034330) calenote_swipe_1_pane_g2_ParamLimits

0x1761,	// (0x00034330) calenote_swipe_1_pane_g2

0x0001,

0xfcd8,	// (0x000428a7) calenote_swipe_1_pane_g_ParamLimits

0xfcd8,	// (0x000428a7) calenote_swipe_1_pane_g

0x1bb5,	// (0x00034784) calenote_swipe_1_pane_t1_ParamLimits

0x1bb5,	// (0x00034784) calenote_swipe_1_pane_t1

0x1754,	// (0x00034323) calenote_swipe_2_pane_g1_ParamLimits

0x1754,	// (0x00034323) calenote_swipe_2_pane_g1

0x1bd4,	// (0x000347a3) calenote_swipe_2_pane_g2_ParamLimits

0x1bd4,	// (0x000347a3) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00042989) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00042989) calenote_swipe_2_pane_g

0x1be0,	// (0x000347af) calenote_swipe_2_pane_t1_ParamLimits

0x1be0,	// (0x000347af) calenote_swipe_2_pane_t1

0x45be,	// (0x0003718d) main_mup_navstr_pane

0x84f9,	// (0x0003b0c8) main_mup3_pane_t7_ParamLimits

0x84f9,	// (0x0003b0c8) main_mup3_pane_t7

0x8ed3,	// (0x0003baa2) main_mp4_pane_g6_ParamLimits

0x8ed3,	// (0x0003baa2) main_mp4_pane_g6

0x9245,	// (0x0003be14) main_image3_pane_t4_ParamLimits

0x9245,	// (0x0003be14) main_image3_pane_t4

0xb347,	// (0x0003df16) popup_navstr_preview_pane_ParamLimits

0xb347,	// (0x0003df16) popup_navstr_preview_pane

0xb353,	// (0x0003df22) scroll_navstr_pane_ParamLimits

0xb353,	// (0x0003df22) scroll_navstr_pane

0x45be,	// (0x0003718d) bg_popup_preview_window_pane_cp04

0x1c07,	// (0x000347d6) popup_navstr_preview_pane_t1

0xb35f,	// (0x0003df2e) scroll_navstr_pane_g1_ParamLimits

0xb35f,	// (0x0003df2e) scroll_navstr_pane_g1

0xb36c,	// (0x0003df3b) scroll_navstr_pane_t1_ParamLimits

0xb36c,	// (0x0003df3b) scroll_navstr_pane_t1

0x1bac,	// (0x0003477b) bg_button_pane_cp014

0x1bac,	// (0x0003477b) bg_button_pane_cp030

0x3c46,	// (0x00036815) list_double_fisheye_pane_g4_ParamLimits

0x3c46,	// (0x00036815) list_double_fisheye_pane_g4

0x3c52,	// (0x00036821) list_double_fisheye_pane_g5_ParamLimits

0x3c52,	// (0x00036821) list_double_fisheye_pane_g5

0x1b1b,	// (0x000346ea) sp_fs_scroll_pane_cp03

0x1893,	// (0x00034462) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x189f,	// (0x0003446e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf5,	// (0x000428c4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x18ab,	// (0x0003447a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb27b,	// (0x0003de4a) sp_fs_scroll_pane_cp02

0xc60f,	// (0x0003f1de) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc60f,	// (0x0003f1de) popup_sp_fs_calendar_preview_list_single_pane

0x45be,	// (0x0003718d) main_cam6_pano_pane

0xd8c0,	// (0x0004048f) main_mup3_pane_ParamLimits

0x45be,	// (0x0003718d) main_phacti_pane

0xacbd,	// (0x0003d88c) bg_button_pane_cp11

0xacd5,	// (0x0003d8a4) main_mobtv_info_pane_g2_ParamLimits

0xacd5,	// (0x0003d8a4) main_mobtv_info_pane_g2

0x0001,

0xfc55,	// (0x00042824) main_mobtv_info_pane_g_ParamLimits

0xfc55,	// (0x00042824) main_mobtv_info_pane_g

0xae87,	// (0x0003da56) sc_clock_pane_t5_ParamLimits

0xae87,	// (0x0003da56) sc_clock_pane_t5

0xaf2e,	// (0x0003dafd) main_radioblah_pane_g1_ParamLimits

0x16a0,	// (0x0003426f) main_radioblah_pane_t3_ParamLimits

0x16a0,	// (0x0003426f) main_radioblah_pane_t3

0x16b8,	// (0x00034287) main_radioblah_pane_t4_ParamLimits

0x16b8,	// (0x00034287) main_radioblah_pane_t4

0xaf4c,	// (0x0003db1b) main_radioblah_text_pane_ParamLimits

0xaf4c,	// (0x0003db1b) main_radioblah_text_pane

0xaf59,	// (0x0003db28) main_radioblah_info_pane_g1_ParamLimits

0xafee,	// (0x0003dbbd) main_radioblah_info_pane_t4_ParamLimits

0xafee,	// (0x0003dbbd) main_radioblah_info_pane_t4

0xd8c0,	// (0x0004048f) main_sp_fs_calendar_pane

0xb37e,	// (0x0003df4d) main_phacti_pane_g1

0xb386,	// (0x0003df55) phacti_note_pane_ParamLimits

0xb386,	// (0x0003df55) phacti_note_pane

0x1c1e,	// (0x000347ed) phacti_term_pane_ParamLimits

0x1c1e,	// (0x000347ed) phacti_term_pane

0x1c33,	// (0x00034802) phacti_note_pane_t1_ParamLimits

0x1c33,	// (0x00034802) phacti_note_pane_t1

0x4274,	// (0x00036e43) phacti_term_pane_g1

0x427c,	// (0x00036e4b) phacti_term_pane_t1_ParamLimits

0x427c,	// (0x00036e4b) phacti_term_pane_t1

0x1c7c,	// (0x0003484b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc702,	// (0x0003f2d1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x00042993) popup_sp_fs_calendar_preview_list_single_pane_g

0x1c84,	// (0x00034853) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1c84,	// (0x00034853) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1c99,	// (0x00034868) aid_popup_sp_fs_bg_corner_pane

0xe84a,	// (0x00041419) popup_sp_fs_calendar_preview_bg_pane_g1

0x45be,	// (0x0003718d) popup_sp_fs_calendar_preview_bg_pane

0x1ca1,	// (0x00034870) popup_sp_fs_calendar_preview_list_pane

0xd8c0,	// (0x0004048f) bg_main_sp_fs_cale_pane_ParamLimits

0xd8c0,	// (0x0004048f) bg_main_sp_fs_cale_pane

0x42a6,	// (0x00036e75) listscroll_cale_mrui_pane_ParamLimits

0x42a6,	// (0x00036e75) listscroll_cale_mrui_pane

0x42ba,	// (0x00036e89) listscroll_sp_fs_schedule_track_pane

0x42c3,	// (0x00036e92) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x42c3,	// (0x00036e92) main_sp_fs_ctrlbar_pane_cp01

0x1ce0,	// (0x000348af) main_sp_fs_ribbon_pane

0x1ce8,	// (0x000348b7) popup_sp_fs_cale_preview_window

0xb3c9,	// (0x0003df98) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb3c9,	// (0x0003df98) list_single_sp_fs_schedule_track_pane

0x486d,	// (0x0003743c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x486d,	// (0x0003743c) bg_sp_fs_highlight_list_pane_cp03

0xb3e8,	// (0x0003dfb7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb3e8,	// (0x0003dfb7) list_single_sp_fs_schedule_track_pane_g1

0xb3f4,	// (0x0003dfc3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb3f4,	// (0x0003dfc3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00042998) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00042998) list_single_sp_fs_schedule_track_pane_g

0xb400,	// (0x0003dfcf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb400,	// (0x0003dfcf) list_single_sp_fs_schedule_track_pane_t1

0xb418,	// (0x0003dfe7) sp_fs_schedule_track_pane_ParamLimits

0xb418,	// (0x0003dfe7) sp_fs_schedule_track_pane

0x1cfa,	// (0x000348c9) sp_fs_schedule_track_pane_g1

0x1d02,	// (0x000348d1) sp_fs_schedule_track_pane_g2

0x1d0a,	// (0x000348d9) sp_fs_schedule_track_pane_g3

0x1d12,	// (0x000348e1) sp_fs_schedule_track_pane_g4

0x1d1a,	// (0x000348e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0004299d) sp_fs_schedule_track_pane_g

0x0494,	// (0x00033063) bg_sp_fs_schedule_viewer_highlight_g1

0xc901,	// (0x0003f4d0) bg_sp_fs_schedule_viewer_highlight_g2

0x049c,	// (0x0003306b) bg_sp_fs_schedule_viewer_highlight_g3

0x04a4,	// (0x00033073) bg_sp_fs_schedule_viewer_highlight_g4

0x074d,	// (0x0003331c) bg_sp_fs_schedule_viewer_highlight_g5

0x04b4,	// (0x00033083) bg_sp_fs_schedule_viewer_highlight_g6

0x04bc,	// (0x0003308b) bg_sp_fs_schedule_viewer_highlight_g7

0x04c4,	// (0x00033093) bg_sp_fs_schedule_viewer_highlight_g8

0xc8e1,	// (0x0003f4b0) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x000429a8) bg_sp_fs_schedule_viewer_highlight_g

0x45be,	// (0x0003718d) bg_main_sp_fs_ribbon_pane

0xb428,	// (0x0003dff7) main_sp_fs_ribbon_pane_g1

0x1d22,	// (0x000348f1) main_sp_fs_ribbon_pane_t1

0xb431,	// (0x0003e000) main_sp_fs_ribbon_pane_t2

0x1d31,	// (0x00034900) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x000429bb) main_sp_fs_ribbon_pane_t

0x1d40,	// (0x0003490f) main_sp_fs_ribbon_scheduler_pane

0x1d48,	// (0x00034917) bg_main_sp_fs_ribbon_pane_g1

0x1d51,	// (0x00034920) bg_main_sp_fs_ribbon_pane_g2

0x1d5a,	// (0x00034929) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x000429c2) bg_main_sp_fs_ribbon_pane_g

0x1d62,	// (0x00034931) main_sp_fs_ribbon_scheduler_pane_g1

0x1d6b,	// (0x0003493a) main_sp_fs_ribbon_scheduler_pane_g2

0x1d74,	// (0x00034943) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x000429c9) main_sp_fs_ribbon_scheduler_pane_g

0x1d7d,	// (0x0003494c) list_cale_mrui_pane

0xb440,	// (0x0003e00f) sp_fs_scroll_pane_cp07_ParamLimits

0xb440,	// (0x0003e00f) sp_fs_scroll_pane_cp07

0xb456,	// (0x0003e025) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb456,	// (0x0003e025) bg_sp_fs_schedule_viewer_highlight

0x1d86,	// (0x00034955) list_single_sp_fs_schedule_track_pane_cp01

0x1d8e,	// (0x0003495d) list_sp_fs_schedule_track_pane

0x1d96,	// (0x00034965) sp_fs_scroll_pane_cp06_ParamLimits

0x1d96,	// (0x00034965) sp_fs_scroll_pane_cp06

0xe84a,	// (0x00041419) bgmain_sp_fs_calendar_pane_g1

0x42d4,	// (0x00036ea3) list_single_cale_mrui_pane_ParamLimits

0x42d4,	// (0x00036ea3) list_single_cale_mrui_pane

0x42ff,	// (0x00036ece) list_single_cale_mrui_row_pane_ParamLimits

0x42ff,	// (0x00036ece) list_single_cale_mrui_row_pane

0x430c,	// (0x00036edb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x430c,	// (0x00036edb) list_single_cale_mrui_row_pane_g1

0x4344,	// (0x00036f13) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4344,	// (0x00036f13) list_single_cale_mrui_row_pane_t1

0x4356,	// (0x00036f25) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4356,	// (0x00036f25) list_single_cale_mrui_row_pane_t2

0x43bc,	// (0x00036f8b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x43bc,	// (0x00036f8b) list_single_cale_mrui_row_pane_t3

0x43eb,	// (0x00036fba) list_single_cale_mrui_row_pane_t4_ParamLimits

0x43eb,	// (0x00036fba) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe08,	// (0x000429d7) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe08,	// (0x000429d7) list_single_cale_mrui_row_pane_t

0x441a,	// (0x00036fe9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x441a,	// (0x00036fe9) list_single_cmail_header_editor_pane_bg_cp01

0x443a,	// (0x00037009) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x443a,	// (0x00037009) list_single_cmail_header_editor_pane_bg_cp02

0xb463,	// (0x0003e032) main_radioblah_text_pane_t1_ParamLimits

0xb463,	// (0x0003e032) main_radioblah_text_pane_t1

0x1e6a,	// (0x00034a39) cam6_indi_pane_cp01

0x1e72,	// (0x00034a41) cam6_mode_pane_cp01

0x1e7a,	// (0x00034a49) cam6_pano_pane

0x1e83,	// (0x00034a52) cam6_zoom_pane_cp01

0x1e8b,	// (0x00034a5a) cam6_pano_image_pane

0x1e96,	// (0x00034a65) cam6_pano_pane_g1

0x1402,	// (0x00033fd1) cam6_pano_pane_g2

0x1e9f,	// (0x00034a6e) cam6_pano_pane_g3

0x1ea8,	// (0x00034a77) cam6_pano_pane_g4

0xede3,	// (0x000419b2) cam6_pano_pane_g5

0x1eb1,	// (0x00034a80) cam6_pano_pane_g6

0x1ebb,	// (0x00034a8a) cam6_pano_pane_g7

0x1ec3,	// (0x00034a92) cam6_pano_pane_g8

0x1ecc,	// (0x00034a9b) cam6_pano_pane_g9

0x0008,

0xfe11,	// (0x000429e0) cam6_pano_pane_g

0x45be,	// (0x0003718d) main_browser_tag_pane

0x1bff,	// (0x000347ce) grid_navstr_albumart_pane

0x1ed7,	// (0x00034aa6) cell_navstr_albumart_pane_ParamLimits

0x1ed7,	// (0x00034aa6) cell_navstr_albumart_pane

0x1efa,	// (0x00034ac9) cell_navstr_albumart_pane_g1

0xe20f,	// (0x00040dde) cell_navstr_albumart_pane_g2

0xe21f,	// (0x00040dee) cell_navstr_albumart_pane_g3

0xe217,	// (0x00040de6) cell_navstr_albumart_pane_g4

0x0003,

0xfe24,	// (0x000429f3) cell_navstr_albumart_pane_g

0xb47e,	// (0x0003e04d) bt_list_pane_ParamLimits

0xb47e,	// (0x0003e04d) bt_list_pane

0xb49e,	// (0x0003e06d) bt_list_pane_t1

0xb4ad,	// (0x0003e07c) bt_list_pane_t2

0x0001,

0xfe2d,	// (0x000429fc) bt_list_pane_t

0x45be,	// (0x0003718d) main_cale_prevew_pane

0xb4bc,	// (0x0003e08b) popup_cale_preview_window_ParamLimits

0xb4bc,	// (0x0003e08b) popup_cale_preview_window

0xd8c0,	// (0x0004048f) bg_popup_preview_window_pane_cp05_ParamLimits

0xd8c0,	// (0x0004048f) bg_popup_preview_window_pane_cp05

0x1f02,	// (0x00034ad1) list_cale_preview_pane_ParamLimits

0x1f02,	// (0x00034ad1) list_cale_preview_pane

0x227f,	// (0x00034e4e) list_double_cale_preview_pane_ParamLimits

0x227f,	// (0x00034e4e) list_double_cale_preview_pane

0xb4d5,	// (0x0003e0a4) list_single_cale_preview_pane_ParamLimits

0xb4d5,	// (0x0003e0a4) list_single_cale_preview_pane

0xb4eb,	// (0x0003e0ba) list_single_cale_preview_pane_g1

0xb4f3,	// (0x0003e0c2) list_single_cale_preview_pane_t1_ParamLimits

0xb4f3,	// (0x0003e0c2) list_single_cale_preview_pane_t1

0xb508,	// (0x0003e0d7) list_double_cale_preview_pane_g1

0xb510,	// (0x0003e0df) list_double_cale_preview_pane_t1_ParamLimits

0xb510,	// (0x0003e0df) list_double_cale_preview_pane_t1

0xb525,	// (0x0003e0f4) list_double_cale_preview_pane_t2_ParamLimits

0xb525,	// (0x0003e0f4) list_double_cale_preview_pane_t2

0x0001,

0xfe32,	// (0x00042a01) list_double_cale_preview_pane_t_ParamLimits

0xfe32,	// (0x00042a01) list_double_cale_preview_pane_t

0x45be,	// (0x0003718d) main_ezdial_pane

0xd8c0,	// (0x0004048f) main_sp_fs_email_pane_ParamLimits

0xb14c,	// (0x0003dd1b) cmail_ddmenu_btn01_pane_ParamLimits

0xb14c,	// (0x0003dd1b) cmail_ddmenu_btn01_pane

0xb169,	// (0x0003dd38) cmail_ddmenu_btn02_pane_ParamLimits

0xb169,	// (0x0003dd38) cmail_ddmenu_btn02_pane

0xb187,	// (0x0003dd56) cmail_ddmenu_btn03_pane_ParamLimits

0xb187,	// (0x0003dd56) cmail_ddmenu_btn03_pane

0x3d0a,	// (0x000368d9) main_sp_fs_ctrlbar_pane_ParamLimits

0x3d24,	// (0x000368f3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb285,	// (0x0003de54) list_cmail_body_pane_ParamLimits

0x1b2b,	// (0x000346fa) bg_button_pane_cp12

0x1b40,	// (0x0003470f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1b40,	// (0x0003470f) list_single_cmail_header_detail_pane_g3

0x423e,	// (0x00036e0d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x423e,	// (0x00036e0d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x00042984) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x00042984) list_single_cmail_header_detail_pane_t

0x4291,	// (0x00036e60) phacti_term_pane_t2_ParamLimits

0x4291,	// (0x00036e60) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0004298e) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0004298e) phacti_term_pane_t

0x1f0e,	// (0x00034add) aid_size_list_single_double

0xb53d,	// (0x0003e10c) popup_ezdial_listscroll_window

0xb55e,	// (0x0003e12d) popup_number_entry_window_cp01

0xcfec,	// (0x0003fbbb) bg_popup_call_pane_cp09

0x1f1a,	// (0x00034ae9) ezdial_list_pane

0x1f22,	// (0x00034af1) scroll_pane_cp23

0xe61e,	// (0x000411ed) bg_button_pane_cp028_ParamLimits

0xe61e,	// (0x000411ed) bg_button_pane_cp028

0xb56c,	// (0x0003e13b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb56c,	// (0x0003e13b) cmail_ddmenu_btn01_pane_g1

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe37,	// (0x00042a06) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe37,	// (0x00042a06) cmail_ddmenu_btn01_pane_g

0x1f2a,	// (0x00034af9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1f2a,	// (0x00034af9) cmail_ddmenu_btn01_pane_t1

0xe3f2,	// (0x00040fc1) bg_button_pane_cp029_ParamLimits

0xe3f2,	// (0x00040fc1) bg_button_pane_cp029

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn02_pane_g1

0xb596,	// (0x0003e165) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb596,	// (0x0003e165) cmail_ddmenu_btn02_pane_t1

0x486d,	// (0x0003743c) bg_button_pane_cp031_ParamLimits

0x486d,	// (0x0003743c) bg_button_pane_cp031

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb57e,	// (0x0003e14d) cmail_ddmenu_btn03_pane_g1

0xb596,	// (0x0003e165) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb596,	// (0x0003e165) cmail_ddmenu_btn03_pane_t1

0x90f0,	// (0x0003bcbf) cell_dialer2_keypad_pane_t1_ParamLimits

0x910a,	// (0x0003bcd9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x910a,	// (0x0003bcd9) cell_dialer2_keypad_pane_t1_copy1

0xab5d,	// (0x0003d72c) ncimui_group_button_pane

0xd8c0,	// (0x0004048f) main_sp_fs_calendar_pane_ParamLimits

0xb29f,	// (0x0003de6e) list_single_cmail_header_caption_pane_ParamLimits

0x1ca9,	// (0x00034878) aid_recal_txt_sm_pane

0x45be,	// (0x0003718d) mian_recal_day_pane

0x1ce8,	// (0x000348b7) popup_sp_fs_cale_preview_window_ParamLimits

0x45be,	// (0x0003718d) list_recal_day_pane

0x1f62,	// (0x00034b31) list_single_recal_day_pane_ParamLimits

0x1f62,	// (0x00034b31) list_single_recal_day_pane

0x1f74,	// (0x00034b43) list_single_recal_day_pane_g1_ParamLimits

0x1f74,	// (0x00034b43) list_single_recal_day_pane_g1

0x1f80,	// (0x00034b4f) list_single_recal_day_pane_g2_ParamLimits

0x1f80,	// (0x00034b4f) list_single_recal_day_pane_g2

0x1f90,	// (0x00034b5f) list_single_recal_day_pane_g3_ParamLimits

0x1f90,	// (0x00034b5f) list_single_recal_day_pane_g3

0xb5ba,	// (0x0003e189) list_single_recal_day_pane_g4_ParamLimits

0xb5ba,	// (0x0003e189) list_single_recal_day_pane_g4

0x1f9c,	// (0x00034b6b) list_single_recal_day_pane_g5_ParamLimits

0x1f9c,	// (0x00034b6b) list_single_recal_day_pane_g5

0x1fac,	// (0x00034b7b) list_single_recal_day_pane_g6_ParamLimits

0x1fac,	// (0x00034b7b) list_single_recal_day_pane_g6

0x0004,

0xfe46,	// (0x00042a15) list_single_recal_day_pane_g_ParamLimits

0xfe46,	// (0x00042a15) list_single_recal_day_pane_g

0x1fc3,	// (0x00034b92) list_single_recal_day_pane_t1

0x1fd5,	// (0x00034ba4) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x00042a20) list_single_recal_day_pane_t

0xb5da,	// (0x0003e1a9) ncimui_query_button_pane_ParamLimits

0xb5da,	// (0x0003e1a9) ncimui_query_button_pane

0xb5ea,	// (0x0003e1b9) ncimui_query_button_pane_t1_ParamLimits

0xb5ea,	// (0x0003e1b9) ncimui_query_button_pane_t1

0x1fea,	// (0x00034bb9) ncimui_query_button_pane_t2_ParamLimits

0x1fea,	// (0x00034bb9) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00042a25) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00042a25) ncimui_query_button_pane_t

0xb5fd,	// (0x0003e1cc) query_button_pane_ParamLimits

0xb5fd,	// (0x0003e1cc) query_button_pane

0x45be,	// (0x0003718d) bg_button_pane_cp0028

0x1ffd,	// (0x00034bcc) query_button_pane_t1

0x756d,	// (0x0003a13c) main_tport_pane_ParamLimits

0xb1b5,	// (0x0003dd84) bg_popup_window_pane_cp01_ParamLimits

0xb1b5,	// (0x0003dd84) bg_popup_window_pane_cp01

0xb1c2,	// (0x0003dd91) heading_pane_cp08_ParamLimits

0xb1c2,	// (0x0003dd91) heading_pane_cp08

0xb1d0,	// (0x0003dd9f) heading_pane_cp07_ParamLimits

0xb1d0,	// (0x0003dd9f) heading_pane_cp07

0x1aed,	// (0x000346bc) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x00042971) cell_tport_appsw_pane_g

0x362d,	// (0x000361fc) input_candi_list_open_g1

0xcaa8,	// (0x0003f677) list_cale_time_pane_g6_ParamLimits

0xcaa8,	// (0x0003f677) list_cale_time_pane_g6

0x7fae,	// (0x0003ab7d) aid_size_touch_calib_1_ParamLimits

0x7fae,	// (0x0003ab7d) aid_size_touch_calib_1

0x7fba,	// (0x0003ab89) aid_size_touch_calib_2_ParamLimits

0x7fba,	// (0x0003ab89) aid_size_touch_calib_2

0x7fc8,	// (0x0003ab97) aid_size_touch_calib_3_ParamLimits

0x7fc8,	// (0x0003ab97) aid_size_touch_calib_3

0x7fd8,	// (0x0003aba7) aid_size_touch_calib_4_ParamLimits

0x7fd8,	// (0x0003aba7) aid_size_touch_calib_4

0x7fe6,	// (0x0003abb5) main_touch_calib_button_group_pane_ParamLimits

0x7fe6,	// (0x0003abb5) main_touch_calib_button_group_pane

0x7ff4,	// (0x0003abc3) main_touch_calib_pane_g1_ParamLimits

0x8000,	// (0x0003abcf) main_touch_calib_pane_g2_ParamLimits

0x800c,	// (0x0003abdb) main_touch_calib_pane_g3_ParamLimits

0x8018,	// (0x0003abe7) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0004233f) main_touch_calib_pane_g_ParamLimits

0x8024,	// (0x0003abf3) main_touch_calib_pane_t1_ParamLimits

0x803b,	// (0x0003ac0a) main_touch_calib_pane_t2_ParamLimits

0x8052,	// (0x0003ac21) main_touch_calib_pane_t3_ParamLimits

0x8066,	// (0x0003ac35) main_touch_calib_pane_t4_ParamLimits

0x807a,	// (0x0003ac49) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x00042348) main_touch_calib_pane_t_ParamLimits

0xebb9,	// (0x00041788) list_single_fp_cale_pane_g3_ParamLimits

0xebb9,	// (0x00041788) list_single_fp_cale_pane_g3

0xd8c0,	// (0x0004048f) bg_button_pane_cp012_ParamLimits

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp03_ParamLimits

0x9ea5,	// (0x0003ca74) cell_vitu2_function_top_pane_g1_ParamLimits

0xd8c0,	// (0x0004048f) bg_vkb2_func_pane_cp04_ParamLimits

0xaafb,	// (0x0003d6ca) main_ncimui_button_group_pane_ParamLimits

0xaafb,	// (0x0003d6ca) main_ncimui_button_group_pane

0xab4b,	// (0x0003d71a) main_ncimui_pane_t3_ParamLimits

0xab4b,	// (0x0003d71a) main_ncimui_pane_t3

0x1c15,	// (0x000347e4) phacti_button_group_pane

0x1f0e,	// (0x00034add) aid_size_list_single_double_ParamLimits

0xb53d,	// (0x0003e10c) popup_ezdial_listscroll_window_ParamLimits

0xb55e,	// (0x0003e12d) popup_number_entry_window_cp01_ParamLimits

0xb60a,	// (0x0003e1d9) phacti_button_pane_ParamLimits

0xb60a,	// (0x0003e1d9) phacti_button_pane

0x45be,	// (0x0003718d) bg_button_pane_cp14

0x200b,	// (0x00034bda) phacti_button_pane_t1

0xb61b,	// (0x0003e1ea) main_touch_calib_button_pane_ParamLimits

0xb61b,	// (0x0003e1ea) main_touch_calib_button_pane

0xc50b,	// (0x0003f0da) bg_button_pane_cp18_ParamLimits

0xc50b,	// (0x0003f0da) bg_button_pane_cp18

0x2019,	// (0x00034be8) main_touch_calib_button_pane_t1_ParamLimits

0x2019,	// (0x00034be8) main_touch_calib_button_pane_t1

0x202f,	// (0x00034bfe) main_touch_calib_button_pane_t2_ParamLimits

0x202f,	// (0x00034bfe) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00042a2a) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00042a2a) main_touch_calib_button_pane_t

0x45be,	// (0x0003718d) cell_ncimui_button_pane

0x45be,	// (0x0003718d) bg_button_pane_cp032

0x204d,	// (0x00034c1c) cell_ncimui_button_pane_t1

0x9166,	// (0x0003bd35) image3_infobar_pane_ParamLimits

0x9166,	// (0x0003bd35) image3_infobar_pane

0xaea9,	// (0x0003da78) fs_bigclock_status_pane_ParamLimits

0xaea9,	// (0x0003da78) fs_bigclock_status_pane

0xaeb6,	// (0x0003da85) main_fs_bigclock_clock_pane_ParamLimits

0xaeb6,	// (0x0003da85) main_fs_bigclock_clock_pane

0xaecc,	// (0x0003da9b) main_fs_bigclock_indi_pane_ParamLimits

0xaecc,	// (0x0003da9b) main_fs_bigclock_indi_pane

0xaefc,	// (0x0003dacb) main_fs_bigclock_swipe_pane_ParamLimits

0xaefc,	// (0x0003dacb) main_fs_bigclock_swipe_pane

0x45be,	// (0x0003718d) main_fs_clock_dumped_data

0x150f,	// (0x000340de) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x150f,	// (0x000340de) list_single_fs_bigclock_indicator_pane_g1

0x1535,	// (0x00034104) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1535,	// (0x00034104) list_single_fs_bigclock_indicator_pane_g2

0x154f,	// (0x0003411e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x154f,	// (0x0003411e) list_single_fs_bigclock_indicator_pane_g3

0x1569,	// (0x00034138) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1569,	// (0x00034138) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc89,	// (0x00042858) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc89,	// (0x00042858) list_single_fs_bigclock_indicator_pane_g

0x1592,	// (0x00034161) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1592,	// (0x00034161) list_single_fs_bigclock_indicator_pane_t1

0x15ba,	// (0x00034189) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x15ba,	// (0x00034189) list_single_fs_bigclock_indicator_pane_t2

0x15e2,	// (0x000341b1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x15e2,	// (0x000341b1) list_single_fs_bigclock_indicator_pane_t3

0x160a,	// (0x000341d9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x160a,	// (0x000341d9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc94,	// (0x00042863) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc94,	// (0x00042863) list_single_fs_bigclock_indicator_pane_t

0x205b,	// (0x00034c2a) image3_infobar_fav_pane_ParamLimits

0x205b,	// (0x00034c2a) image3_infobar_fav_pane

0x206b,	// (0x00034c3a) image3_infobar_loc_pane_ParamLimits

0x206b,	// (0x00034c3a) image3_infobar_loc_pane

0x207f,	// (0x00034c4e) image3_infobar_time_pane_ParamLimits

0x207f,	// (0x00034c4e) image3_infobar_time_pane

0xe84a,	// (0x00041419) image3_infobar_time_pane_g1

0x208f,	// (0x00034c5e) image3_infobar_time_pane_t1

0xe84a,	// (0x00041419) image3_infobar_loc_pane_g1

0x209d,	// (0x00034c6c) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x00042a2f) image3_infobar_loc_pane_g

0x20a5,	// (0x00034c74) image3_infobar_loc_pane_t1

0xe84a,	// (0x00041419) image3_infobar_fav_pane_g1

0x20b3,	// (0x00034c82) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x00042a34) image3_infobar_fav_pane_g

0x20bb,	// (0x00034c8a) fs_bigclock_status_battery_pane

0x20c4,	// (0x00034c93) fs_bigclock_status_signal_pane

0x20cd,	// (0x00034c9c) fs_bigclock_status_title_pane

0x20d6,	// (0x00034ca5) fs_bigclock_status_signal_pane_g1

0x20df,	// (0x00034cae) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00042a39) fs_bigclock_status_signal_pane_g

0x20e7,	// (0x00034cb6) fs_bigclock_status_battery_pane_g1

0x20f0,	// (0x00034cbf) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00042a3e) fs_bigclock_status_battery_pane_g

0x20f8,	// (0x00034cc7) fs_bigclock_status_title_pane_t1

0xe84a,	// (0x00041419) main_fs_bigclock_clock_pane_g1

0x2106,	// (0x00034cd5) main_fs_bigclock_clock_pane_g2

0x2106,	// (0x00034cd5) main_fs_bigclock_clock_pane_g3

0x2106,	// (0x00034cd5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x00042a43) main_fs_bigclock_clock_pane_g

0x210e,	// (0x00034cdd) main_fs_bigclock_clock_pane_t1

0x211c,	// (0x00034ceb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00042a4c) main_fs_bigclock_clock_pane_t

0x212b,	// (0x00034cfa) list_single_fs_bigclock_indicator_pane_ParamLimits

0x212b,	// (0x00034cfa) list_single_fs_bigclock_indicator_pane

0xb62d,	// (0x0003e1fc) list_single_fs_bigclock_pane_ParamLimits

0xb62d,	// (0x0003e1fc) list_single_fs_bigclock_pane

0x2145,	// (0x00034d14) main_fs_bigclock_indicator_pane_t1

0x2154,	// (0x00034d23) list_single_fs_bigclock_pane_g1

0x215c,	// (0x00034d2b) list_single_fs_bigclock_pane_t1

0xe84a,	// (0x00041419) main_fs_bigclock_swipe_pane_g1

0x219f,	// (0x00034d6e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00042a5d) main_fs_bigclock_swipe_pane_g

0x21a7,	// (0x00034d76) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x21a7,	// (0x00034d76) main_fs_bigclock_swipe_pane_t1

0x64fd,	// (0x000390cc) call_type_pane_ParamLimits

0x45be,	// (0x0003718d) main_btmg_pane

0x4338,	// (0x00036f07) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4338,	// (0x00036f07) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe01,	// (0x000429d0) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x000429d0) list_single_cale_mrui_row_pane_g

0x1f49,	// (0x00034b18) list_recal_vselct_arw_lo_pane

0x1f51,	// (0x00034b20) list_recal_vselct_arw_up_pane

0x1f59,	// (0x00034b28) list_recal_vselct_pane

0x21c4,	// (0x00034d93) btmg_button_pane

0xb68e,	// (0x0003e25d) main_btmg_pane_g1

0x45be,	// (0x0003718d) bg_button_pane_cp044

0x21ce,	// (0x00034d9d) btmg_button_pane_t1

0xe3ea,	// (0x00040fb9) aid_listscroll_gen

0xd8c0,	// (0x0004048f) main_cntbar_detail_pane

0x1b0b,	// (0x000346da) list_cmail_folder_pane

0x1b1b,	// (0x000346ea) sp_fs_scroll_pane_cp03_ParamLimits

0x4456,	// (0x00037025) list_single_fs_dyc_pane_cp01_ParamLimits

0x4456,	// (0x00037025) list_single_fs_dyc_pane_cp01

0x21dc,	// (0x00034dab) aid_size_cmail_indent

0x447c,	// (0x0003704b) list_single_dyc_row_pane_cp01

0xb6b6,	// (0x0003e285) cntbar_detail_list_pane_ParamLimits

0xb6b6,	// (0x0003e285) cntbar_detail_list_pane

0xb6f0,	// (0x0003e2bf) main_cntbar_detail_cont_pane_ParamLimits

0xb6f0,	// (0x0003e2bf) main_cntbar_detail_cont_pane

0x64f1,	// (0x000390c0) scroll_pane_cp032_ParamLimits

0x64f1,	// (0x000390c0) scroll_pane_cp032

0xb6fc,	// (0x0003e2cb) cntbar_detail_list_event_pane_ParamLimits

0xb6fc,	// (0x0003e2cb) cntbar_detail_list_event_pane

0xb6c2,	// (0x0003e291) cntbar_detail_list_shct_pane

0xc94f,	// (0x0003f51e) aid_list_gen

0x21ee,	// (0x00034dbd) aid_scroll

0x21f7,	// (0x00034dc6) aid_size_touch_scroll_bar

0xb710,	// (0x0003e2df) aid_list_double

0x2200,	// (0x00034dcf) aid_list_single

0x0b69,	// (0x00033738) aid_list_single_lg

0x4485,	// (0x00037054) aid_list_z_g_a_sm

0x448d,	// (0x0003705c) aid_list_z_g_d

0x4495,	// (0x00037064) aid_txt_z_prm

0x44a3,	// (0x00037072) aid_txt_z_prm_cp01

0x44b1,	// (0x00037080) aid_txt_z_sec

0xb719,	// (0x0003e2e8) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb719,	// (0x0003e2e8) main_cntbar_detail_cont_pane_g1

0xb726,	// (0x0003e2f5) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb726,	// (0x0003e2f5) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x00042a62) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x00042a62) main_cntbar_detail_cont_pane_g

0x2227,	// (0x00034df6) main_cntbar_detail_cont_pane_t1

0x2235,	// (0x00034e04) main_cntbar_detail_cont_pane_t2

0x2243,	// (0x00034e12) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00042a67) main_cntbar_detail_cont_pane_t

0xb732,	// (0x0003e301) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb732,	// (0x0003e301) cell_cntbar_detail_list_shct_pane

0x2251,	// (0x00034e20) cntbar_detail_list_shct_pane_g1

0x225a,	// (0x00034e29) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00042a6e) cntbar_detail_list_shct_pane_g

0xb746,	// (0x0003e315) cntbar_detail_list_event_pane_g1_ParamLimits

0xb746,	// (0x0003e315) cntbar_detail_list_event_pane_g1

0xb752,	// (0x0003e321) cntbar_detail_list_event_pane_g2_ParamLimits

0xb752,	// (0x0003e321) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x00042a73) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x00042a73) cntbar_detail_list_event_pane_g

0xb7be,	// (0x0003e38d) cntbar_detail_list_event_pane_t1_ParamLimits

0xb7be,	// (0x0003e38d) cntbar_detail_list_event_pane_t1

0xb7d3,	// (0x0003e3a2) cntbar_detail_list_event_pane_t2_ParamLimits

0xb7d3,	// (0x0003e3a2) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x00042a80) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x00042a80) cntbar_detail_list_event_pane_t

0xe84a,	// (0x00041419) cell_cntbar_detail_list_shct_pane_g1

0x68ad,	// (0x0003947c) navi_pane_mv_g3

0xd8c0,	// (0x0004048f) main_cntbar_detail_pane_ParamLimits

0x45be,	// (0x0003718d) main_notif_wgt_pane

0x8e1a,	// (0x0003b9e9) aid_tch_main_mp4_pane_g4

0x904f,	// (0x0003bc1e) popup_slider_window_cp02

0x1f3f,	// (0x00034b0e) list_recal_day_event_pane

0xb696,	// (0x0003e265) cntbar_detail_btn_pane_ParamLimits

0xb696,	// (0x0003e265) cntbar_detail_btn_pane

0xb6a6,	// (0x0003e275) cntbar_detail_btn_pane_cp01_ParamLimits

0xb6a6,	// (0x0003e275) cntbar_detail_btn_pane_cp01

0xb6c2,	// (0x0003e291) cntbar_detail_list_shct_pane_ParamLimits

0xb6ce,	// (0x0003e29d) cntbar_detail_pane_g1_ParamLimits

0xb6ce,	// (0x0003e29d) cntbar_detail_pane_g1

0xb6da,	// (0x0003e2a9) cntbar_detail_pane_t1_ParamLimits

0xb6da,	// (0x0003e2a9) cntbar_detail_pane_t1

0xb75e,	// (0x0003e32d) cntbar_detail_list_event_pane_g3_ParamLimits

0xb75e,	// (0x0003e32d) cntbar_detail_list_event_pane_g3

0xb776,	// (0x0003e345) cntbar_detail_list_event_pane_g4_ParamLimits

0xb776,	// (0x0003e345) cntbar_detail_list_event_pane_g4

0xb78e,	// (0x0003e35d) cntbar_detail_list_event_pane_g5_ParamLimits

0xb78e,	// (0x0003e35d) cntbar_detail_list_event_pane_g5

0xb7a6,	// (0x0003e375) cntbar_detail_list_event_pane_g6_ParamLimits

0xb7a6,	// (0x0003e375) cntbar_detail_list_event_pane_g6

0xb7e8,	// (0x0003e3b7) cntbar_detail_list_event_pane_t3_ParamLimits

0xb7e8,	// (0x0003e3b7) cntbar_detail_list_event_pane_t3

0xb7fa,	// (0x0003e3c9) popup_notif_wgt_window_ParamLimits

0xb7fa,	// (0x0003e3c9) popup_notif_wgt_window

0xb80a,	// (0x0003e3d9) popup_submenu_window_cp01_ParamLimits

0xb80a,	// (0x0003e3d9) popup_submenu_window_cp01

0xcfec,	// (0x0003fbbb) bg_popup_window_pane_cp10

0x2263,	// (0x00034e32) listscroll_notif_wgt_pane

0x226d,	// (0x00034e3c) list_notif_wgt_window

0x2276,	// (0x00034e45) scroll_pane_cp033

0x227f,	// (0x00034e4e) list_notif_wgt_row_pane_ParamLimits

0x227f,	// (0x00034e4e) list_notif_wgt_row_pane

0x2291,	// (0x00034e60) aid_size_list_notif_wgt_del

0x229a,	// (0x00034e69) list_notif_wgt_row_pane_g1

0x22a2,	// (0x00034e71) list_notif_wgt_row_pane_g2

0x22aa,	// (0x00034e79) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00042a87) list_notif_wgt_row_pane_g

0x22b3,	// (0x00034e82) list_notif_wgt_row_pane_t1

0x22c1,	// (0x00034e90) list_notif_wgt_row_pane_t2

0x22cf,	// (0x00034e9e) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00042a8e) list_notif_wgt_row_pane_t

0x07a7,	// (0x00033376) list_recal_day_event_pane_g1

0x22dd,	// (0x00034eac) list_recal_day_event_pane_t1

0x45be,	// (0x0003718d) bg_button_pane_cp045

0x22ec,	// (0x00034ebb) cntbar_detail_btn_pane_t1

0xe3f2,	// (0x00040fc1) main_callh_pane_ParamLimits

0xe3f2,	// (0x00040fc1) main_callh_pane

0x45be,	// (0x0003718d) main_coverflow0_pane

0x45be,	// (0x0003718d) main_wgtman_pane

0xaf14,	// (0x0003dae3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xaf14,	// (0x0003dae3) main_fs_bigclock_unlock_btn_pane

0x1ae5,	// (0x000346b4) bg_button_pane_cp16

0x1af5,	// (0x000346c4) cell_tport_appsw_pane_g3

0xb818,	// (0x0003e3e7) cf0_flow_pane_ParamLimits

0xb818,	// (0x0003e3e7) cf0_flow_pane

0x22fa,	// (0x00034ec9) listscroll_cf0_pane

0x2303,	// (0x00034ed2) main_cf0_pane_g1

0xb827,	// (0x0003e3f6) main_cf0_pane_t1_ParamLimits

0xb827,	// (0x0003e3f6) main_cf0_pane_t1

0xb83b,	// (0x0003e40a) main_cf0_pane_t2_ParamLimits

0xb83b,	// (0x0003e40a) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00042a95) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00042a95) main_cf0_pane_t

0x230d,	// (0x00034edc) scroll_pane_cp11

0xb84f,	// (0x0003e41e) cf0_flow_pane_g1

0xb857,	// (0x0003e426) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00042a9a) cf0_flow_pane_g

0xb85f,	// (0x0003e42e) cf0_flow_pane_t1

0x45be,	// (0x0003718d) main_call6_pane

0x45be,	// (0x0003718d) main_calllock_pane

0xb86d,	// (0x0003e43c) call6_btn_grp_pane_ParamLimits

0xb86d,	// (0x0003e43c) call6_btn_grp_pane

0xb87c,	// (0x0003e44b) call6_pane_g1_ParamLimits

0xb87c,	// (0x0003e44b) call6_pane_g1

0xb88b,	// (0x0003e45a) popup_call6_1st_window_ParamLimits

0xb88b,	// (0x0003e45a) popup_call6_1st_window

0xb899,	// (0x0003e468) popup_call6_2nd_window_ParamLimits

0xb899,	// (0x0003e468) popup_call6_2nd_window

0xb8a7,	// (0x0003e476) cell_call6_btn_pane_ParamLimits

0xb8a7,	// (0x0003e476) cell_call6_btn_pane

0xcfec,	// (0x0003fbbb) bg_popup_call2_in_pane_cp03

0x2318,	// (0x00034ee7) popup_call6_1st_window_g1

0x2320,	// (0x00034eef) popup_call6_1st_window_g2

0x2328,	// (0x00034ef7) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x00042a9f) popup_call6_1st_window_g

0x2330,	// (0x00034eff) popup_call6_1st_window_t1

0x233f,	// (0x00034f0e) popup_call6_1st_window_t2

0x234f,	// (0x00034f1e) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x00042aa6) popup_call6_1st_window_t

0xcfec,	// (0x0003fbbb) bg_popup_call2_in_pane_cp04

0x2318,	// (0x00034ee7) popup_call6_2nd_window_g1

0x2320,	// (0x00034eef) popup_call6_2nd_window_g2

0x2328,	// (0x00034ef7) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x00042a9f) popup_call6_2nd_window_g

0x2330,	// (0x00034eff) popup_call6_2nd_window_t1

0x45be,	// (0x0003718d) bg_button_pane_cp15

0x235f,	// (0x00034f2e) cell_call6_btn_pane_g1

0x2368,	// (0x00034f37) cell_call6_btn_pane_t1

0xb8b6,	// (0x0003e485) listscroll_wgtman_pane_ParamLimits

0xb8b6,	// (0x0003e485) listscroll_wgtman_pane

0xb8d4,	// (0x0003e4a3) wgtman_btn_pane_ParamLimits

0xb8d4,	// (0x0003e4a3) wgtman_btn_pane

0xcea3,	// (0x0003fa72) aid_scroll_copy1

0x2377,	// (0x00034f46) list_wgtman_pane

0xb909,	// (0x0003e4d8) wgtman_btn_pane_g1_ParamLimits

0xb909,	// (0x0003e4d8) wgtman_btn_pane_g1

0xb931,	// (0x0003e500) wgtman_btn_pane_t1_ParamLimits

0xb931,	// (0x0003e500) wgtman_btn_pane_t1

0x2381,	// (0x00034f50) wgtman_btn_pane_t2_ParamLimits

0x2381,	// (0x00034f50) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x00042aad) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x00042aad) wgtman_btn_pane_t

0xb968,	// (0x0003e537) listrow_wgtman_pane_ParamLimits

0xb968,	// (0x0003e537) listrow_wgtman_pane

0xb983,	// (0x0003e552) listrow_wgtman_pane_g1

0xb98c,	// (0x0003e55b) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x00042ab2) listrow_wgtman_pane_g

0x44bf,	// (0x0003708e) listrow_wgtman_pane_t1

0x44cd,	// (0x0003709c) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x00042ab7) listrow_wgtman_pane_t

0x44db,	// (0x000370aa) wait_bar_pane_cp09

0x2398,	// (0x00034f67) main_calllock_btn_pane

0x23a2,	// (0x00034f71) main_calllock_pane_g1

0x45be,	// (0x0003718d) bg_button_pane_cp17

0x23ae,	// (0x00034f7d) main_calllock_btn_pane_g1

0x23b7,	// (0x00034f86) main_calllock_btn_pane_t1

0x45be,	// (0x0003718d) main_dialer3_pane

0x45be,	// (0x0003718d) main_fmrd2_pane

0xe84a,	// (0x00041419) main_fs_bigclock_unlock_btn_pane_g1

0x23ce,	// (0x00034f9d) main_fs_bigclock_unlock_btn_pane_t1

0xb996,	// (0x0003e565) area_fmrd2_info_pane_ParamLimits

0xb996,	// (0x0003e565) area_fmrd2_info_pane

0xb9a4,	// (0x0003e573) area_fmrd2_visual_pane_ParamLimits

0xb9a4,	// (0x0003e573) area_fmrd2_visual_pane

0xb9b2,	// (0x0003e581) fmrd2_indi_pane_ParamLimits

0xb9b2,	// (0x0003e581) fmrd2_indi_pane

0xb9bf,	// (0x0003e58e) area_fmrd2_visual_pane_g1

0xb9c7,	// (0x0003e596) area_fmrd2_visual_pane_t1

0xb9d7,	// (0x0003e5a6) area_fmrd2_visual_pane_t2

0xb9e7,	// (0x0003e5b6) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x00042ac1) area_fmrd2_visual_pane_t

0xb9f7,	// (0x0003e5c6) area_fmrd2_info_pane_g1

0xb9ff,	// (0x0003e5ce) area_fmrd2_info_pane_t1

0xba0f,	// (0x0003e5de) area_fmrd2_info_pane_t2

0xba1f,	// (0x0003e5ee) area_fmrd2_info_pane_t3

0xba2f,	// (0x0003e5fe) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x00042ac8) area_fmrd2_info_pane_t

0xba3d,	// (0x0003e60c) fmrd2_indi_pane_t1

0xba4d,	// (0x0003e61c) fmrd2_indi_pane_t2

0xba5d,	// (0x0003e62c) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x00042ad1) fmrd2_indi_pane_t

0x1578,	// (0x00034147) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1578,	// (0x00034147) list_single_fs_bigclock_indicator_pane_g5

0x161f,	// (0x000341ee) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x161f,	// (0x000341ee) list_single_fs_bigclock_indicator_pane_t5

0xb39c,	// (0x0003df6b) aid_cell_bcale_month_pane_ParamLimits

0xb39c,	// (0x0003df6b) aid_cell_bcale_month_pane

0xb3a8,	// (0x0003df77) bcale_month_pane_ParamLimits

0xb3a8,	// (0x0003df77) bcale_month_pane

0xb3b8,	// (0x0003df87) bcale_preview_pane_ParamLimits

0xb3b8,	// (0x0003df87) bcale_preview_pane

0x215c,	// (0x00034d2b) list_single_fs_bigclock_pane_t1_ParamLimits

0x217b,	// (0x00034d4a) list_single_fs_bigclock_pane_t2_ParamLimits

0x217b,	// (0x00034d4a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00042a58) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00042a58) list_single_fs_bigclock_pane_t

0x23c6,	// (0x00034f95) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x00042abc) main_fs_bigclock_unlock_btn_pane_g

0xba6b,	// (0x0003e63a) aid_dia3_key_size_ParamLimits

0xba6b,	// (0x0003e63a) aid_dia3_key_size

0xba77,	// (0x0003e646) aid_dia3_listrow_size_ParamLimits

0xba77,	// (0x0003e646) aid_dia3_listrow_size

0xba87,	// (0x0003e656) dia3_keypad_fun_pane_ParamLimits

0xba87,	// (0x0003e656) dia3_keypad_fun_pane

0xba99,	// (0x0003e668) dia3_keypad_num_pane_ParamLimits

0xba99,	// (0x0003e668) dia3_keypad_num_pane

0xbaab,	// (0x0003e67a) dia3_listscroll_pane_ParamLimits

0xbaab,	// (0x0003e67a) dia3_listscroll_pane

0xbab9,	// (0x0003e688) dia3_numentry_pane_ParamLimits

0xbab9,	// (0x0003e688) dia3_numentry_pane

0x23dc,	// (0x00034fab) dia3_list_pane

0x23e7,	// (0x00034fb6) scroll_pane_cp12

0x45be,	// (0x0003718d) bg_dia3_numentry_pane

0xbac7,	// (0x0003e696) dia3_numentry_pane_t1

0xbad6,	// (0x0003e6a5) cell_dia3_key_num_pane

0xbade,	// (0x0003e6ad) cell_dia3_key0_fun_pane_ParamLimits

0xbade,	// (0x0003e6ad) cell_dia3_key0_fun_pane

0xbaeb,	// (0x0003e6ba) cell_dia3_key1_fun_pane_ParamLimits

0xbaeb,	// (0x0003e6ba) cell_dia3_key1_fun_pane

0xbaf8,	// (0x0003e6c7) dia3_listrow_pane

0x126e,	// (0x00033e3d) bg_dia3_numentry_pane_g1

0x45be,	// (0x0003718d) bg_button_pane_cp21

0x23f2,	// (0x00034fc1) cell_dia3_key_num_pane_t1

0x2400,	// (0x00034fcf) cell_dia3_key_num_pane_t2

0x240f,	// (0x00034fde) cell_dia3_key_num_pane_t3

0x241e,	// (0x00034fed) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x00042ad8) cell_dia3_key_num_pane_t

0x45be,	// (0x0003718d) bg_button_pane_cp19

0xbb05,	// (0x0003e6d4) cell_dia3_key0_fun_pane_g1

0x45be,	// (0x0003718d) bg_button_pane_cp20

0xbb0d,	// (0x0003e6dc) cell_dia3_key1_fun_pane_g1

0xbb15,	// (0x0003e6e4) area_left_week_number_pane

0xbb1e,	// (0x0003e6ed) area_top_day_name_pane

0xbb27,	// (0x0003e6f6) frame_month_view_pane

0xbb31,	// (0x0003e700) grid_month_view_pane

0xbb3b,	// (0x0003e70a) cell_top_day_name_pane_ParamLimits

0xbb3b,	// (0x0003e70a) cell_top_day_name_pane

0xbb55,	// (0x0003e724) cell_area_left_week_number_pane_ParamLimits

0xbb55,	// (0x0003e724) cell_area_left_week_number_pane

0xbb69,	// (0x0003e738) cell_month_view_pane_ParamLimits

0xbb69,	// (0x0003e738) cell_month_view_pane

0x242d,	// (0x00034ffc) frm_month_g1

0xbb86,	// (0x0003e755) frm_month_g2

0xbb90,	// (0x0003e75f) frm_month_g3

0xbb9a,	// (0x0003e769) frm_month_g4

0xbba4,	// (0x0003e773) frm_month_g5

0xbbae,	// (0x0003e77d) frm_month_g6

0xbbb8,	// (0x0003e787) frm_month_g7

0x2436,	// (0x00035005) frm_month_g8

0xbbc2,	// (0x0003e791) frm_month_g9

0xbbcb,	// (0x0003e79a) frm_month_g10

0xbbd4,	// (0x0003e7a3) frm_month_g11

0xbbdd,	// (0x0003e7ac) frm_month_g12

0xbbe6,	// (0x0003e7b5) frm_month_g13

0xbbef,	// (0x0003e7be) frm_month_g14

0xbbf8,	// (0x0003e7c7) frm_month_g15

0xbc03,	// (0x0003e7d2) frm_month_g16

0x000f,

0xff12,	// (0x00042ae1) frm_month_g

0xbc0e,	// (0x0003e7dd) cell_top_day_name_pane_t1

0xbc1d,	// (0x0003e7ec) cell_area_left_week_number_pane_g1

0xbc0e,	// (0x0003e7dd) cell_area_left_week_number_pane_t1

0xe84a,	// (0x00041419) cell_month_view_pane_g1

0xbc25,	// (0x0003e7f4) cell_month_view_pane_t1

0x45be,	// (0x0003718d) main_fps_pane

0x185b,	// (0x0003442a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x185b,	// (0x0003442a) cmail_ddmenu_btn02_pane_cp1

0x1877,	// (0x00034446) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1877,	// (0x00034446) cmail_ddmenu_btn02_pane_cp2

0xb58a,	// (0x0003e159) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb58a,	// (0x0003e159) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3c,	// (0x00042a0b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3c,	// (0x00042a0b) cmail_ddmenu_btn02_pane_g

0xb5a8,	// (0x0003e177) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb5a8,	// (0x0003e177) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe41,	// (0x00042a10) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe41,	// (0x00042a10) cmail_ddmenu_btn02_pane_t

0xbc34,	// (0x0003e803) fps_text_pane_ParamLimits

0xbc34,	// (0x0003e803) fps_text_pane

0xbc41,	// (0x0003e810) main_fps_pane_g1_ParamLimits

0xbc41,	// (0x0003e810) main_fps_pane_g1

0xbc4f,	// (0x0003e81e) wait_bar_pane_cp010_ParamLimits

0xbc4f,	// (0x0003e81e) wait_bar_pane_cp010

0xbc5b,	// (0x0003e82a) fps_text_pane_t1_ParamLimits

0xbc5b,	// (0x0003e82a) fps_text_pane_t1

0x9431,	// (0x0003c000) cam4_image_uncrop_pane_g1

0x943a,	// (0x0003c009) cam4_image_uncrop_pane_g2

0x9443,	// (0x0003c012) cam4_image_uncrop_pane_g3

0x944c,	// (0x0003c01b) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x000424d7) cam4_image_uncrop_pane_g

0xbaf8,	// (0x0003e6c7) dia3_listrow_pane_ParamLimits

0x45be,	// (0x0003718d) main_phob2_pane

0xb217,	// (0x0003dde6) cell_tport_appsw_pane_cp02_ParamLimits

0xb217,	// (0x0003dde6) cell_tport_appsw_pane_cp02

0xb226,	// (0x0003ddf5) cell_tport_appsw_pane_cp03_ParamLimits

0xb226,	// (0x0003ddf5) cell_tport_appsw_pane_cp03

0x45be,	// (0x0003718d) phob2_contact_card_pane

0x45be,	// (0x0003718d) phob2_listscroll_pane

0x243f,	// (0x0003500e) phob2_list_pane

0x2447,	// (0x00035016) scroll_pane_cp034

0xbc74,	// (0x0003e843) phob2_cc_data_pane_ParamLimits

0xbc74,	// (0x0003e843) phob2_cc_data_pane

0xbc8e,	// (0x0003e85d) phob2_cc_listscroll_pane_ParamLimits

0xbc8e,	// (0x0003e85d) phob2_cc_listscroll_pane

0xbca8,	// (0x0003e877) list_double_large_graphic_phob2_pane_ParamLimits

0xbca8,	// (0x0003e877) list_double_large_graphic_phob2_pane

0xbcc6,	// (0x0003e895) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbcc6,	// (0x0003e895) list_double_large_graphic_phob2_pane_g1

0x44e3,	// (0x000370b2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x44e3,	// (0x000370b2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x00042b02) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x00042b02) list_double_large_graphic_phob2_pane_g

0x44ef,	// (0x000370be) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x44ef,	// (0x000370be) list_double_large_graphic_phob2_pane_t1

0x4504,	// (0x000370d3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4504,	// (0x000370d3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00042b07) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00042b07) list_double_large_graphic_phob2_pane_t

0x45be,	// (0x0003718d) list_highlight_pane_cp024

0x245b,	// (0x0003502a) phob2_cc_button_pane

0xbcd3,	// (0x0003e8a2) phob2_cc_data_pane_g1_ParamLimits

0xbcd3,	// (0x0003e8a2) phob2_cc_data_pane_g1

0xbcdf,	// (0x0003e8ae) phob2_cc_data_pane_g2_ParamLimits

0xbcdf,	// (0x0003e8ae) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00042b0c) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00042b0c) phob2_cc_data_pane_g

0xbceb,	// (0x0003e8ba) phob2_cc_data_pane_t1_ParamLimits

0xbceb,	// (0x0003e8ba) phob2_cc_data_pane_t1

0xbcfd,	// (0x0003e8cc) phob2_cc_data_pane_t2_ParamLimits

0xbcfd,	// (0x0003e8cc) phob2_cc_data_pane_t2

0xbd0f,	// (0x0003e8de) phob2_cc_data_pane_t3_ParamLimits

0xbd0f,	// (0x0003e8de) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x00042b11) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x00042b11) phob2_cc_data_pane_t

0x2463,	// (0x00035032) phob2_cc_list_pane_ParamLimits

0x2463,	// (0x00035032) phob2_cc_list_pane

0x0840,	// (0x0003340f) scroll_pane_cp035_ParamLimits

0x0840,	// (0x0003340f) scroll_pane_cp035

0xd8c0,	// (0x0004048f) bg_button_pane_cp033

0x246f,	// (0x0003503e) phob2_cc_button_pane_g1

0x247b,	// (0x0003504a) phob2_cc_button_pane_t1

0x2490,	// (0x0003505f) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00042b18) phob2_cc_button_pane_t

0xbd21,	// (0x0003e8f0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbd21,	// (0x0003e8f0) list_double_large_graphic_phob2_cc_pane

0xbd48,	// (0x0003e917) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbd48,	// (0x0003e917) list_double_large_graphic_phob2_cc_pane_g1

0x4516,	// (0x000370e5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4516,	// (0x000370e5) list_double_large_graphic_phob2_cc_pane_g2

0x4525,	// (0x000370f4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4525,	// (0x000370f4) list_double_large_graphic_phob2_cc_pane_g3

0x4534,	// (0x00037103) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4534,	// (0x00037103) list_double_large_graphic_phob2_cc_pane_g4

0x4545,	// (0x00037114) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4545,	// (0x00037114) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00042b1d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00042b1d) list_double_large_graphic_phob2_cc_pane_g

0x4554,	// (0x00037123) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4554,	// (0x00037123) list_double_large_graphic_phob2_cc_pane_t1

0x457d,	// (0x0003714c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x457d,	// (0x0003714c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00042b28) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00042b28) list_double_large_graphic_phob2_cc_pane_t

0x24a2,	// (0x00035071) list_highlight_pane_cp025_ParamLimits

0x24a2,	// (0x00035071) list_highlight_pane_cp025

0xd8c0,	// (0x0004048f) bg_button_pane_cp033_ParamLimits

0x246f,	// (0x0003503e) phob2_cc_button_pane_g1_ParamLimits

0x247b,	// (0x0003504a) phob2_cc_button_pane_t1_ParamLimits

0x2490,	// (0x0003505f) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00042b18) phob2_cc_button_pane_t_ParamLimits

0x487b,	// (0x0003744a) popup_wgtman_window

0x05ae,	// (0x0003317d) scroll_pane_cp038

0xb8f1,	// (0x0003e4c0) wgtman_btn_pane_cp_01_ParamLimits

0xb8f1,	// (0x0003e4c0) wgtman_btn_pane_cp_01

0x24b0,	// (0x0003507f) wgtman_content_pane

0x24b9,	// (0x00035088) wgtman_heading_pane

0x45be,	// (0x0003718d) bg_heading_pane_cp02

0x24c2,	// (0x00035091) wgtman_heading_pane_g1

0x24ca,	// (0x00035099) wgtman_heading_pane_t1

0x24d8,	// (0x000350a7) scroll_pane_cp036

0x24e0,	// (0x000350af) wgtman_list_pane

0x24e8,	// (0x000350b7) wgtman_list_pane_t1_ParamLimits

0x24e8,	// (0x000350b7) wgtman_list_pane_t1

0x9390,	// (0x0003bf5f) cam4_grid_pane

0x38fb,	// (0x000364ca) bg_button_pane_cp015_ParamLimits

0xa01f,	// (0x0003cbee) bg_button_pane_cp016_ParamLimits

0xa032,	// (0x0003cc01) bg_button_pane_cp017_ParamLimits

0x393f,	// (0x0003650e) popup_vitu2_query_window_g3_ParamLimits

0x393f,	// (0x0003650e) popup_vitu2_query_window_g3

0x39b8,	// (0x00036587) popup_vitu2_query_window_t6_ParamLimits

0x39b8,	// (0x00036587) popup_vitu2_query_window_t6

0x39e3,	// (0x000365b2) popup_vitu2_query_window_t7_ParamLimits

0x39e3,	// (0x000365b2) popup_vitu2_query_window_t7

0x0358,	// (0x00032f27) cam4_grid_pane_g1

0x0361,	// (0x00032f30) cam4_grid_pane_g2

0x2505,	// (0x000350d4) cam4_grid_pane_g3

0x250e,	// (0x000350dd) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00042b2d) cam4_grid_pane_g

0x5585,	// (0x00038154) aid_placing_vt_slider_lsc_ParamLimits

0x58d1,	// (0x000384a0) vidtel_button_pane_ParamLimits

0x58d1,	// (0x000384a0) vidtel_button_pane

0x2519,	// (0x000350e8) bg_button_pane_cp034

0xbd59,	// (0x0003e928) vidtel_button_pane_g1

0x2523,	// (0x000350f2) vidtel_button_pane_t1

0x071b,	// (0x000332ea) aid_size_vtel_slider_touch

0x0840,	// (0x0003340f) scroll_pane_cp039

0x12ac,	// (0x00033e7b) ncim_query_button_pane_cp01_ParamLimits

0x12cb,	// (0x00033e9a) ncimui_query_pane_g1_ParamLimits

0xd8c0,	// (0x0004048f) input_focus_pane_cp012_ParamLimits

0x12f0,	// (0x00033ebf) ncim_query_entry_pane_t1_ParamLimits

0x0840,	// (0x0003340f) scroll_pane_cp039_ParamLimits

0x681f,	// (0x000393ee) navi_pane_bcale_mc_g1

0x6827,	// (0x000393f6) navi_pane_bcale_mc_t1

0x18c0,	// (0x0003448f) main_sp_fs_email_pane_g1

0x18c8,	// (0x00034497) main_sp_fs_email_pane_g2

0x0001,

0xfcfa,	// (0x000428c9) main_sp_fs_email_pane_g

0x1ded,	// (0x000349bc) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1ded,	// (0x000349bc) list_single_cale_mrui_row_pane_g3

0xb5d0,	// (0x0003e19f) list_single_recal_day_pane_g5_event_pane

0x1fbb,	// (0x00034b8a) list_single_recal_day_pane_g7

0x2531,	// (0x00035100) list_recal_day_event_pane_cp01

0x253a,	// (0x00035109) list_recal_vselct_arw_lo_pane_cp01

0x2542,	// (0x00035111) list_recal_vselct_arw_up_pane_cp01

0x254a,	// (0x00035119) list_recal_vselct_pane_cp01

0x07a7,	// (0x00033376) list_recal_day_event_pane_cp01_g1

0x2554,	// (0x00035123) list_recal_day_event_pane_cp01_t1

0x1fc3,	// (0x00034b92) list_single_recal_day_pane_t1_ParamLimits

0x1fd5,	// (0x00034ba4) list_single_recal_day_pane_t2_ParamLimits

0xfe51,	// (0x00042a20) list_single_recal_day_pane_t_ParamLimits

0xc4db,	// (0x0003f0aa) bg_notes_pane_ParamLimits

0xc4e9,	// (0x0003f0b8) list_notes_pane_ParamLimits

0x4bd9,	// (0x000377a8) scroll_pane_cp06_ParamLimits

0xc50b,	// (0x0003f0da) main_notes_pane_ParamLimits

0x45be,	// (0x0003718d) main_welc_pane

0xbd61,	// (0x0003e930) main_welc_body_pane_ParamLimits

0xbd61,	// (0x0003e930) main_welc_body_pane

0xbd70,	// (0x0003e93f) main_welc_opti_pane_ParamLimits

0xbd70,	// (0x0003e93f) main_welc_opti_pane

0xbd7f,	// (0x0003e94e) main_welc_pane_t1_ParamLimits

0xbd7f,	// (0x0003e94e) main_welc_pane_t1

0xbd91,	// (0x0003e960) main_welc_body_row_pane_ParamLimits

0xbd91,	// (0x0003e960) main_welc_body_row_pane

0xbdb9,	// (0x0003e988) main_welc_opti_row_pane_ParamLimits

0xbdb9,	// (0x0003e988) main_welc_opti_row_pane

0x2562,	// (0x00035131) main_welc_opti_row_pane_g1

0x256a,	// (0x00035139) main_welc_opti_row_pane_t1

0x2579,	// (0x00035148) main_welc_body_row_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small

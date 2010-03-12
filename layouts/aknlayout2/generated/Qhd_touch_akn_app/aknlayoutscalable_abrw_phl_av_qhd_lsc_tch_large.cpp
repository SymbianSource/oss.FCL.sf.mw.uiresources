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

// This customisation implements the interface defined in AknLayoutScalable_Avkon.cdl

#include "aknlayoutscalable_abrw_phl_av_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Avkon { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Avkon::KByteCodedData_AknLayoutScalable_Elaf_php_av_qhd_prt_tch + 0x0004f97a };

TAknWindowComponentLayout WindowLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknLayoutScalableParameterLimits ParameterLimitsV(TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsV(&KImplData, aVariety); }
TAknTextComponentLayout TextLineVCR(TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextLineVCR(&KImplData, aVariety, aCol, aRow); }
TAknTextComponentLayout TextLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineRVC(TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::WindowLineRVC(&KImplData, aRow, aVariety, aCol); }
TAknWindowComponentLayout WindowLineCVR(TInt aCol, TInt aVariety, TInt aRow) { return AknLayoutScalableDecode::WindowLineCVR(&KImplData, aCol, aVariety, aRow); }
TAknWindowComponentLayout WindowLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::WindowLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknTextComponentLayout TextLineVRC(TInt aVariety, TInt aRow, TInt aCol) { return AknLayoutScalableDecode::TextLineVRC(&KImplData, aVariety, aRow, aCol); }
TAknWindowComponentLayout WindowLineCRV(TInt aCol, TInt aRow, TInt aVariety) { return AknLayoutScalableDecode::WindowLineCRV(&KImplData, aCol, aRow, aVariety); }
TAknWindowComponentLayout WindowTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::WindowTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknLayoutScalableTableLimits Limits() { return AknLayoutScalableDecode::TableLimits(KDataLookup); }
TAknLayoutScalableParameterLimits ParameterLimitsTableLV(TInt aLineIndex, TInt aVariety) { return AknLayoutScalableDecode::ParameterLimitsTableLV(&KImplData, aLineIndex, aVariety); }
TAknTextComponentLayout TextTableLVCR(TInt aLineIndex, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::TextTableLVCR(&KImplData, aLineIndex, aVariety, aCol, aRow); }
TAknTextComponentLayout TextTableLRVC(TInt aLineIndex, TInt aRow, TInt aVariety, TInt aCol) { return AknLayoutScalableDecode::TextTableLRVC(&KImplData, aLineIndex, aRow, aVariety, aCol); }
TAknLayoutScalableComponentType GetComponentTypeById(TInt aComponentId) { return AknLayoutScalableDecode::GetComponentTypeById(&KImplData, aComponentId); }
TAknLayoutScalableParameterLimits GetParamLimitsById(TInt aComponentId, TInt aVariety) { return AknLayoutScalableDecode::GetParamLimitsById(&KImplData, aComponentId, aVariety); }
TAknWindowComponentLayout GetWindowComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetWindowComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }
TAknTextComponentLayout GetTextComponentById(TInt aComponentId, TInt aVariety, TInt aCol, TInt aRow) { return AknLayoutScalableDecode::GetTextComponentById(&KImplData, aComponentId, aVariety, aCol, aRow); }

const TUint16 KDataLookup[AknLayoutScalable_Avkon::E_TApiId_TableSize] =
	{
0xb22f,	// (0x0005aba9) Screen

0xb23b,	// (0x0005abb5) application_window_ParamLimits

0xb23b,	// (0x0005abb5) application_window

0x2833,	// (0x000521ad) screen_g1

0xb273,	// (0x0005abed) area_bottom_pane_ParamLimits

0xb273,	// (0x0005abed) area_bottom_pane

0xf348,	// (0x0005ecc2) area_top_pane_ParamLimits

0xf348,	// (0x0005ecc2) area_top_pane

0xf3e6,	// (0x0005ed60) main_pane_ParamLimits

0xf3e6,	// (0x0005ed60) main_pane

0x283d,	// (0x000521b7) misc_graphics

0xd275,	// (0x0005cbef) battery_pane_ParamLimits

0xd275,	// (0x0005cbef) battery_pane

0x5578,	// (0x00054ef2) bg_status_flat_pane_g8

0x5580,	// (0x00054efa) bg_status_flat_pane_g9

0x48c4,	// (0x0005423e) context_pane_ParamLimits

0x48c4,	// (0x0005423e) context_pane

0xd3e0,	// (0x0005cd5a) navi_pane_ParamLimits

0xd3e0,	// (0x0005cd5a) navi_pane

0xd458,	// (0x0005cdd2) signal_pane_ParamLimits

0xd458,	// (0x0005cdd2) signal_pane

0x0008,

0xf878,	// (0x0005f1f2) bg_status_flat_pane_g

0xd4e8,	// (0x0005ce62) status_pane_g1_ParamLimits

0xd4e8,	// (0x0005ce62) status_pane_g1

0xd4fe,	// (0x0005ce78) status_pane_g2_ParamLimits

0xd4fe,	// (0x0005ce78) status_pane_g2

0x4aec,	// (0x00054466) status_pane_g3_ParamLimits

0x4aec,	// (0x00054466) status_pane_g3

0x0004,

0xf7ab,	// (0x0005f125) status_pane_g_ParamLimits

0xf7ab,	// (0x0005f125) status_pane_g

0xd50a,	// (0x0005ce84) title_pane_ParamLimits

0xd50a,	// (0x0005ce84) title_pane

0xd56d,	// (0x0005cee7) uni_indicator_pane_ParamLimits

0xd56d,	// (0x0005cee7) uni_indicator_pane

0x472a,	// (0x000540a4) bg_list_pane_ParamLimits

0x472a,	// (0x000540a4) bg_list_pane

0xd1dc,	// (0x0005cb56) find_pane

0xd1e4,	// (0x0005cb5e) listscroll_app_pane_ParamLimits

0xd1e4,	// (0x0005cb5e) listscroll_app_pane

0x4756,	// (0x000540d0) listscroll_form_pane

0xbc61,	// (0x0005b5db) listscroll_gen_pane_ParamLimits

0xbc61,	// (0x0005b5db) listscroll_gen_pane

0x4756,	// (0x000540d0) listscroll_set_pane

0x6100,	// (0x00055a7a) main_idle_act_pane

0x4430,	// (0x00053daa) main_idle_trad_pane

0x4430,	// (0x00053daa) main_list_empty_pane

0x4770,	// (0x000540ea) main_midp_pane

0x477c,	// (0x000540f6) main_pane_g1_ParamLimits

0x477c,	// (0x000540f6) main_pane_g1

0xbc75,	// (0x0005b5ef) popup_ai_message_window_ParamLimits

0xbc75,	// (0x0005b5ef) popup_ai_message_window

0xbd06,	// (0x0005b680) popup_fep_china_uni_window_ParamLimits

0xbd06,	// (0x0005b680) popup_fep_china_uni_window

0x0f8d,	// (0x00050907) popup_fep_japan_candidate_window_ParamLimits

0x0f8d,	// (0x00050907) popup_fep_japan_candidate_window

0x0fad,	// (0x00050927) popup_fep_japan_predictive_window_ParamLimits

0x0fad,	// (0x00050927) popup_fep_japan_predictive_window

0xbd62,	// (0x0005b6dc) popup_find_window

0xbd7f,	// (0x0005b6f9) popup_grid_graphic_window_ParamLimits

0xbd7f,	// (0x0005b6f9) popup_grid_graphic_window

0x1012,	// (0x0005098c) popup_large_graphic_colour_window

0xbe17,	// (0x0005b791) popup_menu_window_ParamLimits

0xbe17,	// (0x0005b791) popup_menu_window

0xbfe9,	// (0x0005b963) popup_note_image_window

0xbfaf,	// (0x0005b929) popup_note_wait_window_ParamLimits

0xbfaf,	// (0x0005b929) popup_note_wait_window

0xc001,	// (0x0005b97b) popup_note_window_ParamLimits

0xc001,	// (0x0005b97b) popup_note_window

0xc0a7,	// (0x0005ba21) popup_query_code_window_ParamLimits

0xc0a7,	// (0x0005ba21) popup_query_code_window

0x125a,	// (0x00050bd4) popup_query_data_code_window_ParamLimits

0x125a,	// (0x00050bd4) popup_query_data_code_window

0xc0e1,	// (0x0005ba5b) popup_query_data_window_ParamLimits

0xc0e1,	// (0x0005ba5b) popup_query_data_window

0xc163,	// (0x0005badd) popup_query_sat_info_window_ParamLimits

0xc163,	// (0x0005badd) popup_query_sat_info_window

0xc1fa,	// (0x0005bb74) popup_snote_single_graphic_window_ParamLimits

0xc1fa,	// (0x0005bb74) popup_snote_single_graphic_window

0xc1fa,	// (0x0005bb74) popup_snote_single_text_window_ParamLimits

0xc1fa,	// (0x0005bb74) popup_snote_single_text_window

0x12e1,	// (0x00050c5b) popup_sub_window_general

0x1411,	// (0x00050d8b) popup_window_general_ParamLimits

0x1411,	// (0x00050d8b) popup_window_general

0x478a,	// (0x00054104) power_save_pane

0xbaf4,	// (0x0005b46e) control_pane_g1_ParamLimits

0xbaf4,	// (0x0005b46e) control_pane_g1

0xbb1d,	// (0x0005b497) control_pane_g2_ParamLimits

0xbb1d,	// (0x0005b497) control_pane_g2

0x46ed,	// (0x00054067) control_pane_g3_ParamLimits

0x46ed,	// (0x00054067) control_pane_g3

0x0007,

0xf793,	// (0x0005f10d) control_pane_g_ParamLimits

0xf793,	// (0x0005f10d) control_pane_g

0xbb5a,	// (0x0005b4d4) control_pane_t1_ParamLimits

0xbb5a,	// (0x0005b4d4) control_pane_t1

0xbbb8,	// (0x0005b532) control_pane_t2_ParamLimits

0xbbb8,	// (0x0005b532) control_pane_t2

0x0002,

0xf7a4,	// (0x0005f11e) control_pane_t_ParamLimits

0xf7a4,	// (0x0005f11e) control_pane_t

0x460e,	// (0x00053f88) navi_navi_volume_pane_cp1

0x4617,	// (0x00053f91) status_small_icon_pane

0x461f,	// (0x00053f99) status_small_pane_g1_ParamLimits

0x461f,	// (0x00053f99) status_small_pane_g1

0x4653,	// (0x00053fcd) status_small_pane_g2_ParamLimits

0x4653,	// (0x00053fcd) status_small_pane_g2

0x465f,	// (0x00053fd9) status_small_pane_g3_ParamLimits

0x465f,	// (0x00053fd9) status_small_pane_g3

0x466b,	// (0x00053fe5) status_small_pane_g4_ParamLimits

0x466b,	// (0x00053fe5) status_small_pane_g4

0x4677,	// (0x00053ff1) status_small_pane_g5_ParamLimits

0x4677,	// (0x00053ff1) status_small_pane_g5

0x4686,	// (0x00054000) status_small_pane_g6_ParamLimits

0x4686,	// (0x00054000) status_small_pane_g6

0x0007,

0xf782,	// (0x0005f0fc) status_small_pane_g_ParamLimits

0xf782,	// (0x0005f0fc) status_small_pane_g

0x46b6,	// (0x00054030) status_small_pane_t1

0x46d9,	// (0x00054053) status_small_wait_pane_ParamLimits

0x46d9,	// (0x00054053) status_small_wait_pane

0xcfb1,	// (0x0005c92b) aid_levels_signal_ParamLimits

0xcfb1,	// (0x0005c92b) aid_levels_signal

0xcfc9,	// (0x0005c943) signal_pane_g1_ParamLimits

0xcfc9,	// (0x0005c943) signal_pane_g1

0xcfe4,	// (0x0005c95e) signal_pane_g2_ParamLimits

0xcfe4,	// (0x0005c95e) signal_pane_g2

0x0003,

0xf713,	// (0x0005f08d) signal_pane_g_ParamLimits

0xf713,	// (0x0005f08d) signal_pane_g

0x3f1b,	// (0x00053895) context_pane_g1

0xb3ec,	// (0x0005ad66) title_pane_g1

0xb423,	// (0x0005ad9d) title_pane_t1

0x28e5,	// (0x0005225f) title_pane_t2

0x290b,	// (0x00052285) title_pane_t3

0x0002,

0xf55d,	// (0x0005eed7) title_pane_t

0xd595,	// (0x0005cf0f) aid_levels_battery_ParamLimits

0xd595,	// (0x0005cf0f) aid_levels_battery

0xd5b1,	// (0x0005cf2b) battery_pane_g1_ParamLimits

0xd5b1,	// (0x0005cf2b) battery_pane_g1

0xd5ce,	// (0x0005cf48) battery_pane_g2_ParamLimits

0xd5ce,	// (0x0005cf48) battery_pane_g2

0x0001,

0xf7b6,	// (0x0005f130) battery_pane_g_ParamLimits

0xf7b6,	// (0x0005f130) battery_pane_g

0x5e9f,	// (0x00055819) uni_indicator_pane_g1

0x5eb4,	// (0x0005582e) uni_indicator_pane_g2

0x5eca,	// (0x00055844) uni_indicator_pane_g3

0x0005,

0xf920,	// (0x0005f29a) uni_indicator_pane_g

0x42ae,	// (0x00053c28) navi_icon_pane_ParamLimits

0x42ae,	// (0x00053c28) navi_icon_pane

0x41f7,	// (0x00053b71) navi_midp_pane

0x42ca,	// (0x00053c44) navi_navi_pane

0x42d4,	// (0x00053c4e) navi_text_pane_ParamLimits

0x42d4,	// (0x00053c4e) navi_text_pane

0x2833,	// (0x000521ad) status_small_wait_pane_g1

0x337b,	// (0x00052cf5) status_small_wait_pane_g2

0x0001,

0xf91b,	// (0x0005f295) status_small_wait_pane_g

0x5bc4,	// (0x0005553e) navi_navi_icon_text_pane

0x5bcc,	// (0x00055546) navi_navi_pane_g1_ParamLimits

0x5bcc,	// (0x00055546) navi_navi_pane_g1

0x5bde,	// (0x00055558) navi_navi_pane_g2_ParamLimits

0x5bde,	// (0x00055558) navi_navi_pane_g2

0x0001,

0xf8e9,	// (0x0005f263) navi_navi_pane_g_ParamLimits

0xf8e9,	// (0x0005f263) navi_navi_pane_g

0x5bf0,	// (0x0005556a) navi_navi_tabs_pane

0x5bf9,	// (0x00055573) navi_navi_text_pane

0x5bc4,	// (0x0005553e) navi_navi_volume_pane

0x5ba0,	// (0x0005551a) navi_text_pane_t1

0x5b94,	// (0x0005550e) navi_icon_pane_g1

0x5af6,	// (0x00055470) navi_navi_text_pane_t1

0xc4d8,	// (0x0005be52) navi_navi_volume_pane_g1

0xc4e0,	// (0x0005be5a) volume_small_pane

0xd7c3,	// (0x0005d13d) navi_navi_icon_text_pane_g1

0xd7cb,	// (0x0005d145) navi_navi_icon_text_pane_t1

0x42ca,	// (0x00053c44) navi_tabs_2_long_pane

0x42ca,	// (0x00053c44) navi_tabs_2_pane

0x42ca,	// (0x00053c44) navi_tabs_3_long_pane

0x42ca,	// (0x00053c44) navi_tabs_3_pane

0x42ca,	// (0x00053c44) navi_tabs_4_pane

0xc4b8,	// (0x0005be32) tabs_2_active_pane_ParamLimits

0xc4b8,	// (0x0005be32) tabs_2_active_pane

0xc4c8,	// (0x0005be42) tabs_2_passive_pane_ParamLimits

0xc4c8,	// (0x0005be42) tabs_2_passive_pane

0xc486,	// (0x0005be00) tabs_3_active_pane_ParamLimits

0xc486,	// (0x0005be00) tabs_3_active_pane

0xc496,	// (0x0005be10) tabs_3_passive_pane_ParamLimits

0xc496,	// (0x0005be10) tabs_3_passive_pane

0xc4a7,	// (0x0005be21) tabs_3_passive_pane_cp_ParamLimits

0xc4a7,	// (0x0005be21) tabs_3_passive_pane_cp

0xc442,	// (0x0005bdbc) tabs_4_active_pane_ParamLimits

0xc442,	// (0x0005bdbc) tabs_4_active_pane

0xc453,	// (0x0005bdcd) tabs_4_passive_pane_ParamLimits

0xc453,	// (0x0005bdcd) tabs_4_passive_pane

0xc464,	// (0x0005bdde) tabs_4_passive_pane_cp_ParamLimits

0xc464,	// (0x0005bdde) tabs_4_passive_pane_cp

0xc475,	// (0x0005bdef) tabs_4_passive_pane_cp2_ParamLimits

0xc475,	// (0x0005bdef) tabs_4_passive_pane_cp2

0xc422,	// (0x0005bd9c) tabs_2_long_active_pane_ParamLimits

0xc422,	// (0x0005bd9c) tabs_2_long_active_pane

0xc432,	// (0x0005bdac) tabs_2_long_passive_pane_ParamLimits

0xc432,	// (0x0005bdac) tabs_2_long_passive_pane

0xc3ef,	// (0x0005bd69) tabs_3_long_active_pane_ParamLimits

0xc3ef,	// (0x0005bd69) tabs_3_long_active_pane

0xc400,	// (0x0005bd7a) tabs_3_long_passive_pane_ParamLimits

0xc400,	// (0x0005bd7a) tabs_3_long_passive_pane

0xc411,	// (0x0005bd8b) tabs_3_long_passive_pane_cp_ParamLimits

0xc411,	// (0x0005bd8b) tabs_3_long_passive_pane_cp

0x15f2,	// (0x00050f6c) volume_small_pane_g1

0xc39e,	// (0x0005bd18) volume_small_pane_g2

0xc3a7,	// (0x0005bd21) volume_small_pane_g3

0xc3b0,	// (0x0005bd2a) volume_small_pane_g4

0xc3b9,	// (0x0005bd33) volume_small_pane_g5

0xc3c2,	// (0x0005bd3c) volume_small_pane_g6

0xc3cb,	// (0x0005bd45) volume_small_pane_g7

0xc3d4,	// (0x0005bd4e) volume_small_pane_g8

0xc3dd,	// (0x0005bd57) volume_small_pane_g9

0xc3e6,	// (0x0005bd60) volume_small_pane_g10

0x0009,

0xf8b5,	// (0x0005f22f) volume_small_pane_g

0x2b98,	// (0x00052512) bg_active_tab_pane_cp2_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp2

0xcb5c,	// (0x0005c4d6) tabs_3_active_pane_g1

0xcb64,	// (0x0005c4de) tabs_3_active_pane_t1

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp2_ParamLimits

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp2

0xcb5c,	// (0x0005c4d6) tabs_3_passive_pane_g1

0xcb64,	// (0x0005c4de) tabs_3_passive_pane_t1

0x2b98,	// (0x00052512) bg_active_tab_pane_cp3_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp3

0xcb76,	// (0x0005c4f0) tabs_4_active_pane_g1

0xcb7e,	// (0x0005c4f8) tabs_4_active_pane_t1

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp3_ParamLimits

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp3

0xcb76,	// (0x0005c4f0) tabs_4_1_passive_pane_g1

0xcb7e,	// (0x0005c4f8) tabs_4_1_passive_pane_t1

0x4770,	// (0x000540ea) list_highlight_pane_cp2

0xd953,	// (0x0005d2cd) list_set_pane_ParamLimits

0xd953,	// (0x0005d2cd) list_set_pane

0xd9ed,	// (0x0005d367) main_pane_set_t1_ParamLimits

0xd9ed,	// (0x0005d367) main_pane_set_t1

0xda0d,	// (0x0005d387) main_pane_set_t2_ParamLimits

0xda0d,	// (0x0005d387) main_pane_set_t2

0xda21,	// (0x0005d39b) main_pane_set_t3_ParamLimits

0xda21,	// (0x0005d39b) main_pane_set_t3

0xda33,	// (0x0005d3ad) main_pane_set_t4_ParamLimits

0xda33,	// (0x0005d3ad) main_pane_set_t4

0x0003,

0xf985,	// (0x0005f2ff) main_pane_set_t_ParamLimits

0xf985,	// (0x0005f2ff) main_pane_set_t

0xda45,	// (0x0005d3bf) setting_code_pane

0xda4f,	// (0x0005d3c9) setting_slider_graphic_pane

0xda4f,	// (0x0005d3c9) setting_slider_pane

0xda4f,	// (0x0005d3c9) setting_text_pane

0xda4f,	// (0x0005d3c9) setting_volume_pane

0x0052,	// (0x0004f9cc) volume_set_pane

0x291d,	// (0x00052297) bg_set_opt_pane_cp

0x005a,	// (0x0004f9d4) setting_slider_pane_t1

0x0073,	// (0x0004f9ed) setting_slider_pane_t2

0x008d,	// (0x0004fa07) setting_slider_pane_t3

0x0002,

0xf564,	// (0x0005eede) setting_slider_pane_t

0x00a5,	// (0x0004fa1f) slider_set_pane

0x283d,	// (0x000521b7) bg_set_opt_pane_cp2

0x295f,	// (0x000522d9) setting_slider_graphic_pane_g1

0x00bb,	// (0x0004fa35) setting_slider_graphic_pane_t1

0x00cb,	// (0x0004fa45) setting_slider_graphic_pane_t2

0x0001,

0xf56b,	// (0x0005eee5) setting_slider_graphic_pane_t

0x00db,	// (0x0004fa55) slider_set_pane_cp

0x283d,	// (0x000521b7) input_focus_pane_cp1

0x60e7,	// (0x00055a61) list_set_text_pane

0x2833,	// (0x000521ad) setting_text_pane_g1

0x283d,	// (0x000521b7) input_focus_pane_cp2

0x2833,	// (0x000521ad) setting_code_pane_g1

0x2968,	// (0x000522e2) setting_code_pane_t1

0xece9,	// (0x0005e663) set_text_pane_t1_ParamLimits

0xece9,	// (0x0005e663) set_text_pane_t1

0x383d,	// (0x000531b7) set_opt_bg_pane_g1

0x3845,	// (0x000531bf) set_opt_bg_pane_g2

0x60c1,	// (0x00055a3b) set_opt_bg_pane_g3

0x3855,	// (0x000531cf) set_opt_bg_pane_g4

0x385d,	// (0x000531d7) set_opt_bg_pane_g5

0x3865,	// (0x000531df) set_opt_bg_pane_g6

0x60cb,	// (0x00055a45) set_opt_bg_pane_g7

0x60d3,	// (0x00055a4d) set_opt_bg_pane_g8

0x60dd,	// (0x00055a57) set_opt_bg_pane_g9

0x0008,

0xf972,	// (0x0005f2ec) set_opt_bg_pane_g

0x60b4,	// (0x00055a2e) slider_set_pane_g1

0x17e2,	// (0x0005115c) slider_set_pane_g2

0x0006,

0xf963,	// (0x0005f2dd) slider_set_pane_g

0x1756,	// (0x000510d0) volume_set_pane_g1

0x175e,	// (0x000510d8) volume_set_pane_g2

0x1766,	// (0x000510e0) volume_set_pane_g3

0x176e,	// (0x000510e8) volume_set_pane_g4

0x1776,	// (0x000510f0) volume_set_pane_g5

0x177e,	// (0x000510f8) volume_set_pane_g6

0x1786,	// (0x00051100) volume_set_pane_g7

0x178e,	// (0x00051108) volume_set_pane_g8

0x1796,	// (0x00051110) volume_set_pane_g9

0x179e,	// (0x00051118) volume_set_pane_g10

0x0009,

0xf93b,	// (0x0005f2b5) volume_set_pane_g

0xcb90,	// (0x0005c50a) indicator_pane_ParamLimits

0xcb90,	// (0x0005c50a) indicator_pane

0xcbb8,	// (0x0005c532) main_idle_pane_g2_ParamLimits

0xcbb8,	// (0x0005c532) main_idle_pane_g2

0xcbf0,	// (0x0005c56a) main_pane_idle_g1_ParamLimits

0xcbf0,	// (0x0005c56a) main_pane_idle_g1

0x29b7,	// (0x00052331) popup_clock_digital_analogue_window_ParamLimits

0x29b7,	// (0x00052331) popup_clock_digital_analogue_window

0xcc17,	// (0x0005c591) soft_indicator_pane_ParamLimits

0xcc17,	// (0x0005c591) soft_indicator_pane

0xcc31,	// (0x0005c5ab) wallpaper_pane_ParamLimits

0xcc31,	// (0x0005c5ab) wallpaper_pane

0x2833,	// (0x000521ad) wallpaper_pane_g1

0xcc43,	// (0x0005c5bd) indicator_pane_g1_ParamLimits

0xcc43,	// (0x0005c5bd) indicator_pane_g1

0x64a5,	// (0x00055e1f) navi_navi_icon_text_pane_srt_g1

0x2a09,	// (0x00052383) soft_indicator_pane_t1

0x2a23,	// (0x0005239d) aid_ps_area_pane

0xcc59,	// (0x0005c5d3) aid_ps_clock_pane

0x2a42,	// (0x000523bc) aid_ps_indicator_pane

0x2a4e,	// (0x000523c8) indicator_ps_pane_ParamLimits

0x2a4e,	// (0x000523c8) indicator_ps_pane

0x2a5d,	// (0x000523d7) power_save_pane_g1_ParamLimits

0x2a5d,	// (0x000523d7) power_save_pane_g1

0x2a69,	// (0x000523e3) power_save_pane_g2_ParamLimits

0x2a69,	// (0x000523e3) power_save_pane_g2

0xf2b4,	// (0x0005ec2e) aid_navinavi_width_pane

0x2a23,	// (0x0005239d) aid_ps_area_pane_ParamLimits

0x0001,

0xf570,	// (0x0005eeea) power_save_pane_g_ParamLimits

0xf570,	// (0x0005eeea) power_save_pane_g

0x2a77,	// (0x000523f1) power_save_pane_t1_ParamLimits

0x2a77,	// (0x000523f1) power_save_pane_t1

0xcc59,	// (0x0005c5d3) aid_ps_clock_pane_ParamLimits

0x2a42,	// (0x000523bc) aid_ps_indicator_pane_ParamLimits

0x2a89,	// (0x00052403) power_save_pane_t4_ParamLimits

0x2a89,	// (0x00052403) power_save_pane_t4

0x0001,

0xf575,	// (0x0005eeef) power_save_pane_t_ParamLimits

0xf575,	// (0x0005eeef) power_save_pane_t

0x2ab3,	// (0x0005242d) power_save_t3_ParamLimits

0x2ab3,	// (0x0005242d) power_save_t3

0x2a9e,	// (0x00052418) power_save_t2_ParamLimits

0x2a9e,	// (0x00052418) power_save_t2

0x2ac8,	// (0x00052442) indicator_ps_pane_g1

0xcc67,	// (0x0005c5e1) ai_gene_pane_ParamLimits

0xcc67,	// (0x0005c5e1) ai_gene_pane

0xcc7e,	// (0x0005c5f8) ai_links_pane_ParamLimits

0xcc7e,	// (0x0005c5f8) ai_links_pane

0xcc96,	// (0x0005c610) indicator_pane_cp1_ParamLimits

0xcc96,	// (0x0005c610) indicator_pane_cp1

0xcca5,	// (0x0005c61f) main_pane_idle_g1_cp_ParamLimits

0xcca5,	// (0x0005c61f) main_pane_idle_g1_cp

0x2b01,	// (0x0005247b) popup_ai_links_title_window

0xccbd,	// (0x0005c637) soft_indicator_pane_cp1_ParamLimits

0xccbd,	// (0x0005c637) soft_indicator_pane_cp1

0x5e8d,	// (0x00055807) ai_links_pane_g1

0x5e96,	// (0x00055810) grid_ai_links_pane

0xd8d7,	// (0x0005d251) ai_gene_pane_1

0x5e7b,	// (0x000557f5) ai_gene_pane_2

0x5e84,	// (0x000557fe) list_highlight_pane_cp4

0xd8b3,	// (0x0005d22d) cell_ai_link_pane_ParamLimits

0xd8b3,	// (0x0005d22d) cell_ai_link_pane

0x5e4c,	// (0x000557c6) cell_ai_link_pane_g1

0x337b,	// (0x00052cf5) cell_ai_link_pane_g2

0x0001,

0xf916,	// (0x0005f290) cell_ai_link_pane_g

0x283d,	// (0x000521b7) grid_highlight_cp2

0x283d,	// (0x000521b7) bg_popup_sub_pane_cp1

0x2b24,	// (0x0005249e) popup_ai_links_title_window_t1

0x5d9a,	// (0x00055714) ai_gene_pane_1_g1_ParamLimits

0x5d9a,	// (0x00055714) ai_gene_pane_1_g1

0x5da6,	// (0x00055720) ai_gene_pane_1_g2_ParamLimits

0x5da6,	// (0x00055720) ai_gene_pane_1_g2

0x0001,

0xf90c,	// (0x0005f286) ai_gene_pane_1_g_ParamLimits

0xf90c,	// (0x0005f286) ai_gene_pane_1_g

0x5db3,	// (0x0005572d) ai_gene_pane_1_t1_ParamLimits

0x5db3,	// (0x0005572d) ai_gene_pane_1_t1

0x5de7,	// (0x00055761) grid_ai_soft_ind_pane

0x5d85,	// (0x000556ff) ai_gene_pane_2_t1_ParamLimits

0x5d85,	// (0x000556ff) ai_gene_pane_2_t1

0xccd1,	// (0x0005c64b) main_pane_empty_t1_ParamLimits

0xccd1,	// (0x0005c64b) main_pane_empty_t1

0xcce9,	// (0x0005c663) main_pane_empty_t2_ParamLimits

0xcce9,	// (0x0005c663) main_pane_empty_t2

0xccfe,	// (0x0005c678) main_pane_empty_t3_ParamLimits

0xccfe,	// (0x0005c678) main_pane_empty_t3

0xcd10,	// (0x0005c68a) main_pane_empty_t4_ParamLimits

0xcd10,	// (0x0005c68a) main_pane_empty_t4

0xcd22,	// (0x0005c69c) main_pane_empty_t5_ParamLimits

0xcd22,	// (0x0005c69c) main_pane_empty_t5

0x0004,

0xf57a,	// (0x0005eef4) main_pane_empty_t_ParamLimits

0xf57a,	// (0x0005eef4) main_pane_empty_t

0x388e,	// (0x00053208) bg_popup_window_pane_ParamLimits

0x388e,	// (0x00053208) bg_popup_window_pane

0x5b04,	// (0x0005547e) find_popup_pane_cp2_ParamLimits

0x5b04,	// (0x0005547e) find_popup_pane_cp2

0x5b10,	// (0x0005548a) heading_pane_ParamLimits

0x5b10,	// (0x0005548a) heading_pane

0x283d,	// (0x000521b7) bg_popup_sub_pane

0xd7e8,	// (0x0005d162) bg_popup_window_pane_g1_ParamLimits

0xd7e8,	// (0x0005d162) bg_popup_window_pane_g1

0xd7f7,	// (0x0005d171) bg_popup_window_pane_g2_ParamLimits

0xd7f7,	// (0x0005d171) bg_popup_window_pane_g2

0xd803,	// (0x0005d17d) bg_popup_window_pane_g3_ParamLimits

0xd803,	// (0x0005d17d) bg_popup_window_pane_g3

0xd80f,	// (0x0005d189) bg_popup_window_pane_g4_ParamLimits

0xd80f,	// (0x0005d189) bg_popup_window_pane_g4

0xd81e,	// (0x0005d198) bg_popup_window_pane_g5_ParamLimits

0xd81e,	// (0x0005d198) bg_popup_window_pane_g5

0xd82e,	// (0x0005d1a8) bg_popup_window_pane_g6_ParamLimits

0xd82e,	// (0x0005d1a8) bg_popup_window_pane_g6

0xd83a,	// (0x0005d1b4) bg_popup_window_pane_g7_ParamLimits

0xd83a,	// (0x0005d1b4) bg_popup_window_pane_g7

0xd849,	// (0x0005d1c3) bg_popup_window_pane_g8_ParamLimits

0xd849,	// (0x0005d1c3) bg_popup_window_pane_g8

0xd858,	// (0x0005d1d2) bg_popup_window_pane_g9_ParamLimits

0xd858,	// (0x0005d1d2) bg_popup_window_pane_g9

0x5aea,	// (0x00055464) bg_popup_window_pane_g10_ParamLimits

0x5aea,	// (0x00055464) bg_popup_window_pane_g10

0x0009,

0xf8d4,	// (0x0005f24e) bg_popup_window_pane_g_ParamLimits

0xf8d4,	// (0x0005f24e) bg_popup_window_pane_g

0x5a13,	// (0x0005538d) bg_popup_heading_pane_ParamLimits

0x5a13,	// (0x0005538d) bg_popup_heading_pane

0x18e3,	// (0x0005125d) tabs_4_passive_pane_cp_srt_ParamLimits

0x18e3,	// (0x0005125d) tabs_4_passive_pane_cp_srt

0x18f5,	// (0x0005126f) tabs_4_passive_pane_srt_ParamLimits

0x5a27,	// (0x000553a1) heading_pane_g2

0x18f5,	// (0x0005126f) tabs_4_passive_pane_srt

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp3_srt_ParamLimits

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp3_srt

0x5a2f,	// (0x000553a9) heading_pane_t1_ParamLimits

0x5a2f,	// (0x000553a9) heading_pane_t1

0x5a46,	// (0x000553c0) heading_pane_t2_ParamLimits

0x5a46,	// (0x000553c0) heading_pane_t2

0x0001,

0xf8cf,	// (0x0005f249) heading_pane_t_ParamLimits

0xf8cf,	// (0x0005f249) heading_pane_t

0x5540,	// (0x00054eba) bg_popup_heading_pane_g1

0x55ef,	// (0x00054f69) bg_popup_heading_pane_g2

0x55f9,	// (0x00054f73) bg_popup_heading_pane_g3

0x5603,	// (0x00054f7d) bg_popup_heading_pane_g4

0x560d,	// (0x00054f87) bg_popup_heading_pane_g5

0x5617,	// (0x00054f91) bg_popup_heading_pane_g6

0x561f,	// (0x00054f99) bg_popup_heading_pane_g7

0x5627,	// (0x00054fa1) bg_popup_heading_pane_g8

0x5631,	// (0x00054fab) bg_popup_heading_pane_g9

0x0008,

0xf88b,	// (0x0005f205) bg_popup_heading_pane_g

0x4c80,	// (0x000545fa) bg_popup_sub_pane_g1

0x4c90,	// (0x0005460a) bg_popup_sub_pane_g2

0x4c88,	// (0x00054602) bg_popup_sub_pane_g3

0x4ca0,	// (0x0005461a) bg_popup_sub_pane_g4

0x4c98,	// (0x00054612) bg_popup_sub_pane_g5

0x4ca8,	// (0x00054622) bg_popup_sub_pane_g6

0x4cb0,	// (0x0005462a) bg_popup_sub_pane_g7

0x4cc0,	// (0x0005463a) bg_popup_sub_pane_g8

0x4cb8,	// (0x00054632) bg_popup_sub_pane_g9

0x0008,

0xf865,	// (0x0005f1df) bg_popup_sub_pane_g

0x2b98,	// (0x00052512) bg_popup_window_pane_cp5_ParamLimits

0x2b98,	// (0x00052512) bg_popup_window_pane_cp5

0x2bb4,	// (0x0005252e) popup_note_window_g1_ParamLimits

0x2bb4,	// (0x0005252e) popup_note_window_g1

0x2bc0,	// (0x0005253a) popup_note_window_t1_ParamLimits

0x2bc0,	// (0x0005253a) popup_note_window_t1

0x2bd6,	// (0x00052550) popup_note_window_t2_ParamLimits

0x2bd6,	// (0x00052550) popup_note_window_t2

0x2bec,	// (0x00052566) popup_note_window_t3_ParamLimits

0x2bec,	// (0x00052566) popup_note_window_t3

0x2c02,	// (0x0005257c) popup_note_window_t4_ParamLimits

0x2c02,	// (0x0005257c) popup_note_window_t4

0x2c2a,	// (0x000525a4) popup_note_window_t5_ParamLimits

0x2c2a,	// (0x000525a4) popup_note_window_t5

0x0004,

0xf585,	// (0x0005eeff) popup_note_window_t_ParamLimits

0xf585,	// (0x0005eeff) popup_note_window_t

0x2c4e,	// (0x000525c8) bg_popup_window_pane_cp6_ParamLimits

0x2c4e,	// (0x000525c8) bg_popup_window_pane_cp6

0x54bc,	// (0x00054e36) popup_note_image_window_g1_ParamLimits

0x54bc,	// (0x00054e36) popup_note_image_window_g1

0x54c8,	// (0x00054e42) popup_note_image_window_g2_ParamLimits

0x54c8,	// (0x00054e42) popup_note_image_window_g2

0x0001,

0xf859,	// (0x0005f1d3) popup_note_image_window_g_ParamLimits

0xf859,	// (0x0005f1d3) popup_note_image_window_g

0x54e1,	// (0x00054e5b) popup_note_image_window_t1_ParamLimits

0x54e1,	// (0x00054e5b) popup_note_image_window_t1

0x54fa,	// (0x00054e74) popup_note_image_window_t2_ParamLimits

0x54fa,	// (0x00054e74) popup_note_image_window_t2

0x5513,	// (0x00054e8d) popup_note_image_window_t3_ParamLimits

0x5513,	// (0x00054e8d) popup_note_image_window_t3

0x0002,

0xf85e,	// (0x0005f1d8) popup_note_image_window_t_ParamLimits

0xf85e,	// (0x0005f1d8) popup_note_image_window_t

0x535b,	// (0x00054cd5) bg_popup_window_pane_cp7_ParamLimits

0x535b,	// (0x00054cd5) bg_popup_window_pane_cp7

0x538b,	// (0x00054d05) popup_note_wait_window_g1_ParamLimits

0x538b,	// (0x00054d05) popup_note_wait_window_g1

0x5397,	// (0x00054d11) popup_note_wait_window_g2_ParamLimits

0x5397,	// (0x00054d11) popup_note_wait_window_g2

0x0002,

0xf847,	// (0x0005f1c1) popup_note_wait_window_g_ParamLimits

0xf847,	// (0x0005f1c1) popup_note_wait_window_g

0x53af,	// (0x00054d29) popup_note_wait_window_t1_ParamLimits

0x53af,	// (0x00054d29) popup_note_wait_window_t1

0x53d6,	// (0x00054d50) popup_note_wait_window_t2_ParamLimits

0x53d6,	// (0x00054d50) popup_note_wait_window_t2

0x53f3,	// (0x00054d6d) popup_note_wait_window_t3_ParamLimits

0x53f3,	// (0x00054d6d) popup_note_wait_window_t3

0x5428,	// (0x00054da2) popup_note_wait_window_t4_ParamLimits

0x5428,	// (0x00054da2) popup_note_wait_window_t4

0x0004,

0xf84e,	// (0x0005f1c8) popup_note_wait_window_t_ParamLimits

0xf84e,	// (0x0005f1c8) popup_note_wait_window_t

0x544d,	// (0x00054dc7) wait_bar_pane_ParamLimits

0x544d,	// (0x00054dc7) wait_bar_pane

0x283d,	// (0x000521b7) wait_anim_pane

0x283d,	// (0x000521b7) wait_border_pane

0x2833,	// (0x000521ad) wait_anim_pane_g1

0x2833,	// (0x000521ad) wait_anim_pane_g2

0x0001,

0xf70e,	// (0x0005f088) wait_anim_pane_g

0x52ff,	// (0x00054c79) wait_border_pane_g1

0x530a,	// (0x00054c84) wait_border_pane_g2

0x5313,	// (0x00054c8d) wait_border_pane_g3

0x0002,

0xf840,	// (0x0005f1ba) wait_border_pane_g

0x516a,	// (0x00054ae4) bg_popup_window_pane_cp16_ParamLimits

0x516a,	// (0x00054ae4) bg_popup_window_pane_cp16

0x526a,	// (0x00054be4) indicator_popup_pane_cp4_ParamLimits

0x526a,	// (0x00054be4) indicator_popup_pane_cp4

0x527e,	// (0x00054bf8) popup_query_data_window_t1_ParamLimits

0x527e,	// (0x00054bf8) popup_query_data_window_t1

0x5290,	// (0x00054c0a) popup_query_data_window_t2_ParamLimits

0x5290,	// (0x00054c0a) popup_query_data_window_t2

0x52a9,	// (0x00054c23) popup_query_data_window_t3_ParamLimits

0x52a9,	// (0x00054c23) popup_query_data_window_t3

0x0002,

0xf839,	// (0x0005f1b3) popup_query_data_window_t_ParamLimits

0xf839,	// (0x0005f1b3) popup_query_data_window_t

0x52c3,	// (0x00054c3d) query_popup_data_pane_ParamLimits

0x52c3,	// (0x00054c3d) query_popup_data_pane

0x52d7,	// (0x00054c51) query_popup_data_pane_cp1_ParamLimits

0x52d7,	// (0x00054c51) query_popup_data_pane_cp1

0x516a,	// (0x00054ae4) bg_popup_window_pane_cp10_ParamLimits

0x516a,	// (0x00054ae4) bg_popup_window_pane_cp10

0x519c,	// (0x00054b16) indicator_popup_pane_ParamLimits

0x519c,	// (0x00054b16) indicator_popup_pane

0x51be,	// (0x00054b38) popup_query_code_window_t1_ParamLimits

0x51be,	// (0x00054b38) popup_query_code_window_t1

0x51d8,	// (0x00054b52) popup_query_code_window_t2_ParamLimits

0x51d8,	// (0x00054b52) popup_query_code_window_t2

0x5221,	// (0x00054b9b) popup_query_code_window_t3_ParamLimits

0x5221,	// (0x00054b9b) popup_query_code_window_t3

0x0002,

0xf832,	// (0x0005f1ac) popup_query_code_window_t_ParamLimits

0xf832,	// (0x0005f1ac) popup_query_code_window_t

0x5250,	// (0x00054bca) query_popup_pane_ParamLimits

0x5250,	// (0x00054bca) query_popup_pane

0x2c4e,	// (0x000525c8) bg_popup_window_pane_cp15_ParamLimits

0x2c4e,	// (0x000525c8) bg_popup_window_pane_cp15

0x2c6c,	// (0x000525e6) indicator_popup_pane_cp1_ParamLimits

0x2c6c,	// (0x000525e6) indicator_popup_pane_cp1

0x2c7f,	// (0x000525f9) indicator_popup_pane_cp2_ParamLimits

0x2c7f,	// (0x000525f9) indicator_popup_pane_cp2

0x2c92,	// (0x0005260c) popup_query_data_code_window_g1_ParamLimits

0x2c92,	// (0x0005260c) popup_query_data_code_window_g1

0x2ca5,	// (0x0005261f) popup_query_data_code_window_t1_ParamLimits

0x2ca5,	// (0x0005261f) popup_query_data_code_window_t1

0x2cb7,	// (0x00052631) popup_query_data_code_window_t2_ParamLimits

0x2cb7,	// (0x00052631) popup_query_data_code_window_t2

0x330a,	// (0x00052c84) popup_query_data_code_window_t3_ParamLimits

0x330a,	// (0x00052c84) popup_query_data_code_window_t3

0x3320,	// (0x00052c9a) popup_query_data_code_window_t4_ParamLimits

0x3320,	// (0x00052c9a) popup_query_data_code_window_t4

0x0003,

0xf590,	// (0x0005ef0a) popup_query_data_code_window_t_ParamLimits

0xf590,	// (0x0005ef0a) popup_query_data_code_window_t

0x149d,	// (0x00050e17) list_single_midp_graphic_pane_g3

0x3338,	// (0x00052cb2) query_popup_data_pane_cp2_ParamLimits

0x334b,	// (0x00052cc5) query_popup_pane_cp2_ParamLimits

0x334b,	// (0x00052cc5) query_popup_pane_cp2

0x283d,	// (0x000521b7) bg_popup_window_pane_cp11

0x5162,	// (0x00054adc) heading_pane_cp5

0x3433,	// (0x00052dad) listscroll_popup_info_pane

0x283d,	// (0x000521b7) input_focus_pane_cp3

0x335e,	// (0x00052cd8) query_popup_pane_t1

0x336c,	// (0x00052ce6) list_popup_info_pane_ParamLimits

0x336c,	// (0x00052ce6) list_popup_info_pane

0x337b,	// (0x00052cf5) listscroll_popup_info_pane_g1

0x3383,	// (0x00052cfd) scroll_pane_cp7

0x338d,	// (0x00052d07) popup_info_list_pane_t1_ParamLimits

0x338d,	// (0x00052d07) popup_info_list_pane_t1

0x33a7,	// (0x00052d21) popup_info_list_pane_t2_ParamLimits

0x33a7,	// (0x00052d21) popup_info_list_pane_t2

0x0001,

0xf599,	// (0x0005ef13) popup_info_list_pane_t_ParamLimits

0xf599,	// (0x0005ef13) popup_info_list_pane_t

0x283d,	// (0x000521b7) bg_popup_window_pane_cp12

0x64bf,	// (0x00055e39) find_popup_pane

0x291d,	// (0x00052297) bg_popup_window_pane_cp3

0x33c1,	// (0x00052d3b) heading_pane_cp3

0x33cd,	// (0x00052d47) listscroll_popup_graphic_pane

0x283d,	// (0x000521b7) bg_popup_window_pane_cp4

0xcd84,	// (0x0005c6fe) heading_pane_cp4

0x3433,	// (0x00052dad) listscroll_popup_colour_pane

0xcd8c,	// (0x0005c706) cell_large_graphic_colour_none_popup_pane_ParamLimits

0xcd8c,	// (0x0005c706) cell_large_graphic_colour_none_popup_pane

0xcda0,	// (0x0005c71a) grid_large_graphic_colour_popup_pane_ParamLimits

0xcda0,	// (0x0005c71a) grid_large_graphic_colour_popup_pane

0xcdc4,	// (0x0005c73e) listscroll_popup_colour_pane_g1_ParamLimits

0xcdc4,	// (0x0005c73e) listscroll_popup_colour_pane_g1

0xcddb,	// (0x0005c755) listscroll_popup_colour_pane_g2_ParamLimits

0xcddb,	// (0x0005c755) listscroll_popup_colour_pane_g2

0xcdf2,	// (0x0005c76c) listscroll_popup_colour_pane_g3_ParamLimits

0xcdf2,	// (0x0005c76c) listscroll_popup_colour_pane_g3

0xce02,	// (0x0005c77c) listscroll_popup_colour_pane_g4_ParamLimits

0xce02,	// (0x0005c77c) listscroll_popup_colour_pane_g4

0x0003,

0xf59e,	// (0x0005ef18) listscroll_popup_colour_pane_g_ParamLimits

0xf59e,	// (0x0005ef18) listscroll_popup_colour_pane_g

0x34cd,	// (0x00052e47) scroll_pane_cp6_ParamLimits

0x34cd,	// (0x00052e47) scroll_pane_cp6

0xce12,	// (0x0005c78c) cell_large_graphic_colour_popup_pane_ParamLimits

0xce12,	// (0x0005c78c) cell_large_graphic_colour_popup_pane

0x34fe,	// (0x00052e78) cell_large_graphic_colour_none_popup_pane_t1

0x283d,	// (0x000521b7) grid_highlight_pane_cp5

0x350d,	// (0x00052e87) cell_large_graphic_colour_popup_pane_g1

0x3515,	// (0x00052e8f) cell_large_graphic_colour_popup_pane_g2

0x0001,

0xf5a7,	// (0x0005ef21) cell_large_graphic_colour_popup_pane_g

0x351d,	// (0x00052e97) cell_large_graphic_colour_popup_pane_g2_copy1

0x3526,	// (0x00052ea0) grid_highlight_pane_cp4

0x352e,	// (0x00052ea8) bg_popup_window_pane_cp8_ParamLimits

0x352e,	// (0x00052ea8) bg_popup_window_pane_cp8

0x3549,	// (0x00052ec3) popup_snote_single_text_window_g1_ParamLimits

0x3549,	// (0x00052ec3) popup_snote_single_text_window_g1

0x355b,	// (0x00052ed5) popup_snote_single_text_window_t1_ParamLimits

0x355b,	// (0x00052ed5) popup_snote_single_text_window_t1

0x356e,	// (0x00052ee8) popup_snote_single_text_window_t2_ParamLimits

0x356e,	// (0x00052ee8) popup_snote_single_text_window_t2

0x3581,	// (0x00052efb) popup_snote_single_text_window_t3_ParamLimits

0x3581,	// (0x00052efb) popup_snote_single_text_window_t3

0x35ba,	// (0x00052f34) popup_snote_single_text_window_t4_ParamLimits

0x35ba,	// (0x00052f34) popup_snote_single_text_window_t4

0x35ee,	// (0x00052f68) popup_snote_single_text_window_t5_ParamLimits

0x35ee,	// (0x00052f68) popup_snote_single_text_window_t5

0x0004,

0xf5ac,	// (0x0005ef26) popup_snote_single_text_window_t_ParamLimits

0xf5ac,	// (0x0005ef26) popup_snote_single_text_window_t

0x361d,	// (0x00052f97) bg_popup_window_pane_cp9_ParamLimits

0x361d,	// (0x00052f97) bg_popup_window_pane_cp9

0x3549,	// (0x00052ec3) popup_snote_single_graphic_window_g1_ParamLimits

0x3549,	// (0x00052ec3) popup_snote_single_graphic_window_g1

0x362b,	// (0x00052fa5) popup_snote_single_graphic_window_g2_ParamLimits

0x362b,	// (0x00052fa5) popup_snote_single_graphic_window_g2

0x0001,

0xf5b7,	// (0x0005ef31) popup_snote_single_graphic_window_g_ParamLimits

0xf5b7,	// (0x0005ef31) popup_snote_single_graphic_window_g

0x3637,	// (0x00052fb1) popup_snote_single_graphic_window_t1_ParamLimits

0x3637,	// (0x00052fb1) popup_snote_single_graphic_window_t1

0x364a,	// (0x00052fc4) popup_snote_single_graphic_window_t2_ParamLimits

0x364a,	// (0x00052fc4) popup_snote_single_graphic_window_t2

0x365d,	// (0x00052fd7) popup_snote_single_graphic_window_t3_ParamLimits

0x365d,	// (0x00052fd7) popup_snote_single_graphic_window_t3

0x3696,	// (0x00053010) popup_snote_single_graphic_window_t4_ParamLimits

0x3696,	// (0x00053010) popup_snote_single_graphic_window_t4

0x36ca,	// (0x00053044) popup_snote_single_graphic_window_t5_ParamLimits

0x36ca,	// (0x00053044) popup_snote_single_graphic_window_t5

0x0004,

0xf5bc,	// (0x0005ef36) popup_snote_single_graphic_window_t_ParamLimits

0xf5bc,	// (0x0005ef36) popup_snote_single_graphic_window_t

0x6403,	// (0x00055d7d) grid_graphic_popup_pane_ParamLimits

0x6403,	// (0x00055d7d) grid_graphic_popup_pane

0x642b,	// (0x00055da5) listscroll_popup_graphic_pane_g1_ParamLimits

0x642b,	// (0x00055da5) listscroll_popup_graphic_pane_g1

0xdb40,	// (0x0005d4ba) listscroll_popup_graphic_pane_g2_ParamLimits

0xdb40,	// (0x0005d4ba) listscroll_popup_graphic_pane_g2

0x0001,

0xf9af,	// (0x0005f329) listscroll_popup_graphic_pane_g_ParamLimits

0xf9af,	// (0x0005f329) listscroll_popup_graphic_pane_g

0x6453,	// (0x00055dcd) scroll_pane_cp5

0xdb03,	// (0x0005d47d) cell_graphic_popup_pane_ParamLimits

0xdb03,	// (0x0005d47d) cell_graphic_popup_pane

0x638d,	// (0x00055d07) cell_graphic_popup_pane_g1

0x6395,	// (0x00055d0f) cell_graphic_popup_pane_g2

0x351d,	// (0x00052e97) cell_graphic_popup_pane_g3

0x0002,

0xf9a8,	// (0x0005f322) cell_graphic_popup_pane_g

0x639e,	// (0x00055d18) cell_graphic_popup_pane_t2

0x3526,	// (0x00052ea0) grid_highlight_pane_cp3

0x370b,	// (0x00053085) list_gen_pane_ParamLimits

0x370b,	// (0x00053085) list_gen_pane

0x373d,	// (0x000530b7) scroll_pane

0xdaba,	// (0x0005d434) bg_list_pane_g1_ParamLimits

0xdaba,	// (0x0005d434) bg_list_pane_g1

0x6302,	// (0x00055c7c) bg_list_pane_g2_ParamLimits

0x6302,	// (0x00055c7c) bg_list_pane_g2

0x6317,	// (0x00055c91) bg_list_pane_g3_ParamLimits

0x6317,	// (0x00055c91) bg_list_pane_g3

0x632b,	// (0x00055ca5) bg_list_pane_g4_ParamLimits

0x632b,	// (0x00055ca5) bg_list_pane_g4

0xdad7,	// (0x0005d451) bg_list_pane_g5_ParamLimits

0xdad7,	// (0x0005d451) bg_list_pane_g5

0x0004,

0xf99d,	// (0x0005f317) bg_list_pane_g_ParamLimits

0xf99d,	// (0x0005f317) bg_list_pane_g

0xc527,	// (0x0005bea1) list_double2_graphic_large_graphic_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double2_graphic_large_graphic_pane

0xc527,	// (0x0005bea1) list_double2_graphic_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double2_graphic_pane

0xc527,	// (0x0005bea1) list_double2_large_graphic_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double2_large_graphic_pane

0xc527,	// (0x0005bea1) list_double2_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double2_pane

0xc527,	// (0x0005bea1) list_double_graphic_heading_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_graphic_heading_pane

0xc527,	// (0x0005bea1) list_double_graphic_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_graphic_pane

0xc527,	// (0x0005bea1) list_double_heading_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_heading_pane

0xc527,	// (0x0005bea1) list_double_large_graphic_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_large_graphic_pane

0xc527,	// (0x0005bea1) list_double_number_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_number_pane

0xc527,	// (0x0005bea1) list_double_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_pane

0xc527,	// (0x0005bea1) list_double_time_pane_ParamLimits

0xc527,	// (0x0005bea1) list_double_time_pane

0xc527,	// (0x0005bea1) list_setting_number_pane_ParamLimits

0xc527,	// (0x0005bea1) list_setting_number_pane

0xc527,	// (0x0005bea1) list_setting_pane_ParamLimits

0xc527,	// (0x0005bea1) list_setting_pane

0xda82,	// (0x0005d3fc) list_single_2graphic_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_2graphic_pane

0xda82,	// (0x0005d3fc) list_single_graphic_heading_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_graphic_heading_pane

0xda82,	// (0x0005d3fc) list_single_graphic_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_graphic_pane

0xda82,	// (0x0005d3fc) list_single_heading_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_heading_pane

0xdaa8,	// (0x0005d422) list_single_large_graphic_pane_ParamLimits

0xdaa8,	// (0x0005d422) list_single_large_graphic_pane

0xda82,	// (0x0005d3fc) list_single_number_heading_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_number_heading_pane

0xda82,	// (0x0005d3fc) list_single_number_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_number_pane

0xda82,	// (0x0005d3fc) list_single_pane_ParamLimits

0xda82,	// (0x0005d3fc) list_single_pane

0x283d,	// (0x000521b7) list_highlight_pane_cp1

0x4c18,	// (0x00054592) list_single_pane_g1_ParamLimits

0x4c18,	// (0x00054592) list_single_pane_g1

0x2d4d,	// (0x000526c7) list_single_pane_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_pane_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_single_pane_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_single_pane_g

0x19d6,	// (0x00051350) list_single_pane_t1_ParamLimits

0x19d6,	// (0x00051350) list_single_pane_t1

0x4c18,	// (0x00054592) list_single_number_pane_g1_ParamLimits

0x4c18,	// (0x00054592) list_single_number_pane_g1

0x2d4d,	// (0x000526c7) list_single_number_pane_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_number_pane_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_single_number_pane_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_single_number_pane_g

0x1462,	// (0x00050ddc) list_single_number_pane_t1_ParamLimits

0x1462,	// (0x00050ddc) list_single_number_pane_t1

0xc4e9,	// (0x0005be63) list_single_number_pane_t2_ParamLimits

0xc4e9,	// (0x0005be63) list_single_number_pane_t2

0x0001,

0xf95e,	// (0x0005f2d8) list_single_number_pane_t_ParamLimits

0xf95e,	// (0x0005f2d8) list_single_number_pane_t

0xb4af,	// (0x0005ae29) list_single_graphic_pane_g1_ParamLimits

0xb4af,	// (0x0005ae29) list_single_graphic_pane_g1

0x4c18,	// (0x00054592) list_single_graphic_pane_g2_ParamLimits

0x4c18,	// (0x00054592) list_single_graphic_pane_g2

0x2d4d,	// (0x000526c7) list_single_graphic_pane_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_single_graphic_pane_g3

0x0002,

0xf5c7,	// (0x0005ef41) list_single_graphic_pane_g_ParamLimits

0xf5c7,	// (0x0005ef41) list_single_graphic_pane_g

0xb4bb,	// (0x0005ae35) list_single_graphic_pane_t1_ParamLimits

0xb4bb,	// (0x0005ae35) list_single_graphic_pane_t1

0xb4d1,	// (0x0005ae4b) list_single_heading_pane_g1_ParamLimits

0xb4d1,	// (0x0005ae4b) list_single_heading_pane_g1

0x2d4d,	// (0x000526c7) list_single_heading_pane_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_heading_pane_g2

0x0001,

0xf5ce,	// (0x0005ef48) list_single_heading_pane_g_ParamLimits

0xf5ce,	// (0x0005ef48) list_single_heading_pane_g

0xb4e4,	// (0x0005ae5e) list_single_heading_pane_t1_ParamLimits

0xb4e4,	// (0x0005ae5e) list_single_heading_pane_t1

0xb4fa,	// (0x0005ae74) list_single_heading_pane_t2_ParamLimits

0xb4fa,	// (0x0005ae74) list_single_heading_pane_t2

0x0001,

0xf5d3,	// (0x0005ef4d) list_single_heading_pane_t_ParamLimits

0xf5d3,	// (0x0005ef4d) list_single_heading_pane_t

0x4c18,	// (0x00054592) list_single_number_heading_pane_g1_ParamLimits

0x4c18,	// (0x00054592) list_single_number_heading_pane_g1

0x2d4d,	// (0x000526c7) list_single_number_heading_pane_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_number_heading_pane_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_single_number_heading_pane_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_single_number_heading_pane_g

0xb50c,	// (0x0005ae86) list_single_number_heading_pane_t1_ParamLimits

0xb50c,	// (0x0005ae86) list_single_number_heading_pane_t1

0xb522,	// (0x0005ae9c) list_single_number_heading_pane_t2_ParamLimits

0xb522,	// (0x0005ae9c) list_single_number_heading_pane_t2

0x19b0,	// (0x0005132a) list_single_number_heading_pane_t3_ParamLimits

0x19b0,	// (0x0005132a) list_single_number_heading_pane_t3

0x0002,

0xf5dd,	// (0x0005ef57) list_single_number_heading_pane_t_ParamLimits

0xf5dd,	// (0x0005ef57) list_single_number_heading_pane_t

0xb534,	// (0x0005aeae) list_single_graphic_heading_pane_g1_ParamLimits

0xb534,	// (0x0005aeae) list_single_graphic_heading_pane_g1

0xb54a,	// (0x0005aec4) list_single_graphic_heading_pane_g4_ParamLimits

0xb54a,	// (0x0005aec4) list_single_graphic_heading_pane_g4

0x2d4d,	// (0x000526c7) list_single_graphic_heading_pane_g5_ParamLimits

0x2d4d,	// (0x000526c7) list_single_graphic_heading_pane_g5

0x0002,

0xf5e4,	// (0x0005ef5e) list_single_graphic_heading_pane_g_ParamLimits

0xf5e4,	// (0x0005ef5e) list_single_graphic_heading_pane_g

0xb50c,	// (0x0005ae86) list_single_graphic_heading_pane_t1_ParamLimits

0xb50c,	// (0x0005ae86) list_single_graphic_heading_pane_t1

0xb55b,	// (0x0005aed5) list_single_graphic_heading_pane_t2_ParamLimits

0xb55b,	// (0x0005aed5) list_single_graphic_heading_pane_t2

0x0001,

0xf5eb,	// (0x0005ef65) list_single_graphic_heading_pane_t_ParamLimits

0xf5eb,	// (0x0005ef65) list_single_graphic_heading_pane_t

0x2dfd,	// (0x00052777) list_single_large_graphic_pane_g1_ParamLimits

0x2dfd,	// (0x00052777) list_single_large_graphic_pane_g1

0x2e09,	// (0x00052783) list_single_large_graphic_pane_g2_ParamLimits

0x2e09,	// (0x00052783) list_single_large_graphic_pane_g2

0x2e15,	// (0x0005278f) list_single_large_graphic_pane_g3_ParamLimits

0x2e15,	// (0x0005278f) list_single_large_graphic_pane_g3

0x0002,

0xf5f0,	// (0x0005ef6a) list_single_large_graphic_pane_g_ParamLimits

0xf5f0,	// (0x0005ef6a) list_single_large_graphic_pane_g

0x530a,	// (0x00054c84) wait_border_pane_g2_copy1

0xb571,	// (0x0005aeeb) list_single_large_graphic_pane_g4_cp2

0x19ec,	// (0x00051366) list_single_large_graphic_pane_t1_ParamLimits

0x19ec,	// (0x00051366) list_single_large_graphic_pane_t1

0x4369,	// (0x00053ce3) list_double_pane_g1_ParamLimits

0x4369,	// (0x00053ce3) list_double_pane_g1

0xb579,	// (0x0005aef3) list_double_pane_g2_ParamLimits

0xb579,	// (0x0005aef3) list_double_pane_g2

0x0001,

0xf5f7,	// (0x0005ef71) list_double_pane_g_ParamLimits

0xf5f7,	// (0x0005ef71) list_double_pane_g

0xb585,	// (0x0005aeff) list_double_pane_t1_ParamLimits

0xb585,	// (0x0005aeff) list_double_pane_t1

0xb59b,	// (0x0005af15) list_double_pane_t2_ParamLimits

0xb59b,	// (0x0005af15) list_double_pane_t2

0x0001,

0xf5fc,	// (0x0005ef76) list_double_pane_t_ParamLimits

0xf5fc,	// (0x0005ef76) list_double_pane_t

0xb5ad,	// (0x0005af27) list_double2_pane_g1_ParamLimits

0xb5ad,	// (0x0005af27) list_double2_pane_g1

0xb5be,	// (0x0005af38) list_double2_pane_g2_ParamLimits

0xb5be,	// (0x0005af38) list_double2_pane_g2

0x0001,

0xf601,	// (0x0005ef7b) list_double2_pane_g_ParamLimits

0xf601,	// (0x0005ef7b) list_double2_pane_g

0xb5ca,	// (0x0005af44) list_double2_pane_t1_ParamLimits

0xb5ca,	// (0x0005af44) list_double2_pane_t1

0xb5e0,	// (0x0005af5a) list_double2_pane_t2_ParamLimits

0xb5e0,	// (0x0005af5a) list_double2_pane_t2

0x0001,

0xf606,	// (0x0005ef80) list_double2_pane_t_ParamLimits

0xf606,	// (0x0005ef80) list_double2_pane_t

0x4369,	// (0x00053ce3) list_double_number_pane_g1_ParamLimits

0x4369,	// (0x00053ce3) list_double_number_pane_g1

0xb579,	// (0x0005aef3) list_double_number_pane_g2_ParamLimits

0xb579,	// (0x0005aef3) list_double_number_pane_g2

0x0001,

0xf5f7,	// (0x0005ef71) list_double_number_pane_g_ParamLimits

0xf5f7,	// (0x0005ef71) list_double_number_pane_g

0xb5f2,	// (0x0005af6c) list_double_number_pane_t1_ParamLimits

0xb5f2,	// (0x0005af6c) list_double_number_pane_t1

0xb604,	// (0x0005af7e) list_double_number_pane_t2_ParamLimits

0xb604,	// (0x0005af7e) list_double_number_pane_t2

0xb61a,	// (0x0005af94) list_double_number_pane_t3_ParamLimits

0xb61a,	// (0x0005af94) list_double_number_pane_t3

0x0002,

0xf60b,	// (0x0005ef85) list_double_number_pane_t_ParamLimits

0xf60b,	// (0x0005ef85) list_double_number_pane_t

0xb62c,	// (0x0005afa6) list_double_graphic_pane_g1_ParamLimits

0xb62c,	// (0x0005afa6) list_double_graphic_pane_g1

0xb638,	// (0x0005afb2) list_double_graphic_pane_g2_ParamLimits

0xb638,	// (0x0005afb2) list_double_graphic_pane_g2

0x67ef,	// (0x00056169) list_double_graphic_pane_g3_ParamLimits

0x67ef,	// (0x00056169) list_double_graphic_pane_g3

0x0003,

0xf612,	// (0x0005ef8c) list_double_graphic_pane_g_ParamLimits

0xf612,	// (0x0005ef8c) list_double_graphic_pane_g

0xb653,	// (0x0005afcd) list_double_graphic_pane_t1_ParamLimits

0xb653,	// (0x0005afcd) list_double_graphic_pane_t1

0xb669,	// (0x0005afe3) list_double_graphic_pane_t2_ParamLimits

0xb669,	// (0x0005afe3) list_double_graphic_pane_t2

0x0001,

0xf61b,	// (0x0005ef95) list_double_graphic_pane_t_ParamLimits

0xf61b,	// (0x0005ef95) list_double_graphic_pane_t

0x1456,	// (0x00050dd0) list_double2_graphic_pane_g1_ParamLimits

0x1456,	// (0x00050dd0) list_double2_graphic_pane_g1

0x4c18,	// (0x00054592) list_double2_graphic_pane_g2_ParamLimits

0x4c18,	// (0x00054592) list_double2_graphic_pane_g2

0x2d4d,	// (0x000526c7) list_double2_graphic_pane_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_double2_graphic_pane_g3

0x0002,

0xf620,	// (0x0005ef9a) list_double2_graphic_pane_g_ParamLimits

0xf620,	// (0x0005ef9a) list_double2_graphic_pane_g

0x1462,	// (0x00050ddc) list_double2_graphic_pane_t1_ParamLimits

0x1462,	// (0x00050ddc) list_double2_graphic_pane_t1

0xb67b,	// (0x0005aff5) list_double2_graphic_pane_t2_ParamLimits

0xb67b,	// (0x0005aff5) list_double2_graphic_pane_t2

0x0001,

0xf627,	// (0x0005efa1) list_double2_graphic_pane_t_ParamLimits

0xf627,	// (0x0005efa1) list_double2_graphic_pane_t

0xb68d,	// (0x0005b007) list_double_large_graphic_pane_g1_ParamLimits

0xb68d,	// (0x0005b007) list_double_large_graphic_pane_g1

0xb6b8,	// (0x0005b032) list_double_large_graphic_pane_g2_ParamLimits

0xb6b8,	// (0x0005b032) list_double_large_graphic_pane_g2

0xb579,	// (0x0005aef3) list_double_large_graphic_pane_g3_ParamLimits

0xb579,	// (0x0005aef3) list_double_large_graphic_pane_g3

0xb6ce,	// (0x0005b048) list_double_large_graphic_pane_g4_ParamLimits

0xb6ce,	// (0x0005b048) list_double_large_graphic_pane_g4

0x0004,

0xf62c,	// (0x0005efa6) list_double_large_graphic_pane_g_ParamLimits

0xf62c,	// (0x0005efa6) list_double_large_graphic_pane_g

0xb6e1,	// (0x0005b05b) list_double_large_graphic_pane_t1_ParamLimits

0xb6e1,	// (0x0005b05b) list_double_large_graphic_pane_t1

0xb6fa,	// (0x0005b074) list_double_large_graphic_pane_t2_ParamLimits

0xb6fa,	// (0x0005b074) list_double_large_graphic_pane_t2

0x0001,

0xf637,	// (0x0005efb1) list_double_large_graphic_pane_t_ParamLimits

0xf637,	// (0x0005efb1) list_double_large_graphic_pane_t

0xb70c,	// (0x0005b086) list_double2_large_graphic_pane_g1_ParamLimits

0xb70c,	// (0x0005b086) list_double2_large_graphic_pane_g1

0xb54a,	// (0x0005aec4) list_double2_large_graphic_pane_g2_ParamLimits

0xb54a,	// (0x0005aec4) list_double2_large_graphic_pane_g2

0x2d4d,	// (0x000526c7) list_double2_large_graphic_pane_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_double2_large_graphic_pane_g3

0x0002,

0xf63c,	// (0x0005efb6) list_double2_large_graphic_pane_g_ParamLimits

0xf63c,	// (0x0005efb6) list_double2_large_graphic_pane_g

0xb50c,	// (0x0005ae86) list_double2_large_graphic_pane_t1_ParamLimits

0xb50c,	// (0x0005ae86) list_double2_large_graphic_pane_t1

0xb718,	// (0x0005b092) list_double2_large_graphic_pane_t2_ParamLimits

0xb718,	// (0x0005b092) list_double2_large_graphic_pane_t2

0x0001,

0xf643,	// (0x0005efbd) list_double2_large_graphic_pane_t_ParamLimits

0xf643,	// (0x0005efbd) list_double2_large_graphic_pane_t

0xb72a,	// (0x0005b0a4) list_double_heading_pane_g1_ParamLimits

0xb72a,	// (0x0005b0a4) list_double_heading_pane_g1

0xb73b,	// (0x0005b0b5) list_double_heading_pane_g2_ParamLimits

0xb73b,	// (0x0005b0b5) list_double_heading_pane_g2

0x0001,

0xf648,	// (0x0005efc2) list_double_heading_pane_g_ParamLimits

0xf648,	// (0x0005efc2) list_double_heading_pane_g

0xb747,	// (0x0005b0c1) list_double_heading_pane_t1_ParamLimits

0xb747,	// (0x0005b0c1) list_double_heading_pane_t1

0xb5e0,	// (0x0005af5a) list_double_heading_pane_t2_ParamLimits

0xb5e0,	// (0x0005af5a) list_double_heading_pane_t2

0x0001,

0xf64d,	// (0x0005efc7) list_double_heading_pane_t_ParamLimits

0xf64d,	// (0x0005efc7) list_double_heading_pane_t

0x02ab,	// (0x0004fc25) list_double_graphic_heading_pane_g1_ParamLimits

0x02ab,	// (0x0004fc25) list_double_graphic_heading_pane_g1

0xb72a,	// (0x0005b0a4) list_double_graphic_heading_pane_g2_ParamLimits

0xb72a,	// (0x0005b0a4) list_double_graphic_heading_pane_g2

0xb73b,	// (0x0005b0b5) list_double_graphic_heading_pane_g3_ParamLimits

0xb73b,	// (0x0005b0b5) list_double_graphic_heading_pane_g3

0x0002,

0xf652,	// (0x0005efcc) list_double_graphic_heading_pane_g_ParamLimits

0xf652,	// (0x0005efcc) list_double_graphic_heading_pane_g

0xb75d,	// (0x0005b0d7) list_double_graphic_heading_pane_t1_ParamLimits

0xb75d,	// (0x0005b0d7) list_double_graphic_heading_pane_t1

0xb67b,	// (0x0005aff5) list_double_graphic_heading_pane_t2_ParamLimits

0xb67b,	// (0x0005aff5) list_double_graphic_heading_pane_t2

0x0001,

0xf659,	// (0x0005efd3) list_double_graphic_heading_pane_t_ParamLimits

0xf659,	// (0x0005efd3) list_double_graphic_heading_pane_t

0xb773,	// (0x0005b0ed) list_double_time_pane_g1_ParamLimits

0xb773,	// (0x0005b0ed) list_double_time_pane_g1

0xb784,	// (0x0005b0fe) list_double_time_pane_g2_ParamLimits

0xb784,	// (0x0005b0fe) list_double_time_pane_g2

0x0001,

0xf65e,	// (0x0005efd8) list_double_time_pane_g_ParamLimits

0xf65e,	// (0x0005efd8) list_double_time_pane_g

0xb790,	// (0x0005b10a) list_double_time_pane_t1_ParamLimits

0xb790,	// (0x0005b10a) list_double_time_pane_t1

0xb7a6,	// (0x0005b120) list_double_time_pane_t2_ParamLimits

0xb7a6,	// (0x0005b120) list_double_time_pane_t2

0xb7b8,	// (0x0005b132) list_double_time_pane_t3_ParamLimits

0xb7b8,	// (0x0005b132) list_double_time_pane_t3

0xb7ca,	// (0x0005b144) list_double_time_pane_t4_ParamLimits

0xb7ca,	// (0x0005b144) list_double_time_pane_t4

0x0003,

0xf663,	// (0x0005efdd) list_double_time_pane_t_ParamLimits

0xf663,	// (0x0005efdd) list_double_time_pane_t

0xb7dc,	// (0x0005b156) list_setting_pane_g1_ParamLimits

0xb7dc,	// (0x0005b156) list_setting_pane_g1

0xb5be,	// (0x0005af38) list_setting_pane_g2_ParamLimits

0xb5be,	// (0x0005af38) list_setting_pane_g2

0x0001,

0xf66c,	// (0x0005efe6) list_setting_pane_g_ParamLimits

0xf66c,	// (0x0005efe6) list_setting_pane_g

0xb7e8,	// (0x0005b162) list_setting_pane_t1_ParamLimits

0xb7e8,	// (0x0005b162) list_setting_pane_t1

0xb802,	// (0x0005b17c) list_setting_pane_t2_ParamLimits

0xb802,	// (0x0005b17c) list_setting_pane_t2

0x0002,

0xf671,	// (0x0005efeb) list_setting_pane_t_ParamLimits

0xf671,	// (0x0005efeb) list_setting_pane_t

0xb841,	// (0x0005b1bb) set_value_pane_cp_ParamLimits

0xb841,	// (0x0005b1bb) set_value_pane_cp

0xb84d,	// (0x0005b1c7) list_setting_number_pane_g1_ParamLimits

0xb84d,	// (0x0005b1c7) list_setting_number_pane_g1

0xb859,	// (0x0005b1d3) list_setting_number_pane_g2_ParamLimits

0xb859,	// (0x0005b1d3) list_setting_number_pane_g2

0x0001,

0xf678,	// (0x0005eff2) list_setting_number_pane_g_ParamLimits

0xf678,	// (0x0005eff2) list_setting_number_pane_g

0xb865,	// (0x0005b1df) list_setting_number_pane_t1_ParamLimits

0xb865,	// (0x0005b1df) list_setting_number_pane_t1

0xb87e,	// (0x0005b1f8) list_setting_number_pane_t2_ParamLimits

0xb87e,	// (0x0005b1f8) list_setting_number_pane_t2

0xb898,	// (0x0005b212) list_setting_number_pane_t3_ParamLimits

0xb898,	// (0x0005b212) list_setting_number_pane_t3

0x0003,

0xf67d,	// (0x0005eff7) list_setting_number_pane_t_ParamLimits

0xf67d,	// (0x0005eff7) list_setting_number_pane_t

0xb841,	// (0x0005b1bb) set_value_pane_ParamLimits

0xb841,	// (0x0005b1bb) set_value_pane

0x377d,	// (0x000530f7) bg_set_opt_pane_ParamLimits

0x377d,	// (0x000530f7) bg_set_opt_pane

0x0586,	// (0x0004ff00) set_value_pane_t1

0x379e,	// (0x00053118) slider_set_pane_cp3

0x37a7,	// (0x00053121) volume_small_pane_cp

0x37b0,	// (0x0005312a) list_form_gen_pane

0x37b9,	// (0x00053133) scroll_pane_cp8

0xb8db,	// (0x0005b255) form_field_data_pane_ParamLimits

0xb8db,	// (0x0005b255) form_field_data_pane

0xb8f2,	// (0x0005b26c) form_field_data_wide_pane_ParamLimits

0xb8f2,	// (0x0005b26c) form_field_data_wide_pane

0xb912,	// (0x0005b28c) form_field_popup_pane_ParamLimits

0xb912,	// (0x0005b28c) form_field_popup_pane

0xb92a,	// (0x0005b2a4) form_field_popup_wide_pane_ParamLimits

0xb92a,	// (0x0005b2a4) form_field_popup_wide_pane

0x0622,	// (0x0004ff9c) form_field_slider_pane_ParamLimits

0x0622,	// (0x0004ff9c) form_field_slider_pane

0x0635,	// (0x0004ffaf) form_field_slider_wide_pane_ParamLimits

0x0635,	// (0x0004ffaf) form_field_slider_wide_pane

0x37ca,	// (0x00053144) data_form_pane

0xb94b,	// (0x0005b2c5) form_field_data_pane_t1

0x37d6,	// (0x00053150) input_focus_pane

0x37e4,	// (0x0005315e) data_form_wide_pane

0x0676,	// (0x0004fff0) form_field_data_wide_pane_t1

0x353b,	// (0x00052eb5) input_focus_pane_cp6

0xb965,	// (0x0005b2df) form_field_popup_pane_t1

0x37d6,	// (0x00053150) input_focus_pane_cp7

0x3810,	// (0x0005318a) list_form_pane

0x06b8,	// (0x00050032) form_field_popup_wide_pane_t1

0x37d6,	// (0x00053150) input_focus_pane_cp8

0x381c,	// (0x00053196) list_form_wide_pane

0xb987,	// (0x0005b301) form_field_slider_pane_t1_ParamLimits

0xb987,	// (0x0005b301) form_field_slider_pane_t1

0xb99f,	// (0x0005b319) form_field_slider_pane_t2_ParamLimits

0xb99f,	// (0x0005b319) form_field_slider_pane_t2

0x0001,

0xf68d,	// (0x0005f007) form_field_slider_pane_t_ParamLimits

0xf68d,	// (0x0005f007) form_field_slider_pane_t

0x2b98,	// (0x00052512) input_focus_pane_cp9_ParamLimits

0x2b98,	// (0x00052512) input_focus_pane_cp9

0xb9b4,	// (0x0005b32e) slider_cont_pane_ParamLimits

0xb9b4,	// (0x0005b32e) slider_cont_pane

0x382b,	// (0x000531a5) form_field_slider_wide_pane_t1_ParamLimits

0x382b,	// (0x000531a5) form_field_slider_wide_pane_t1

0x0714,	// (0x0005008e) form_field_slider_wide_pane_t2_ParamLimits

0x0714,	// (0x0005008e) form_field_slider_wide_pane_t2

0x0001,

0xf692,	// (0x0005f00c) form_field_slider_wide_pane_t_ParamLimits

0xf692,	// (0x0005f00c) form_field_slider_wide_pane_t

0x2b98,	// (0x00052512) input_focus_pane_cp10_ParamLimits

0x2b98,	// (0x00052512) input_focus_pane_cp10

0xb9c8,	// (0x0005b342) slider_cont_pane_cp1_ParamLimits

0xb9c8,	// (0x0005b342) slider_cont_pane_cp1

0xb9dc,	// (0x0005b356) slider_form_pane_cp

0x383d,	// (0x000531b7) input_focus_pane_g1

0x3845,	// (0x000531bf) input_focus_pane_g2

0x384d,	// (0x000531c7) input_focus_pane_g3

0x3855,	// (0x000531cf) input_focus_pane_g4

0x385d,	// (0x000531d7) input_focus_pane_g5

0x3865,	// (0x000531df) input_focus_pane_g6

0x386d,	// (0x000531e7) input_focus_pane_g7

0x3875,	// (0x000531ef) input_focus_pane_g8

0x387d,	// (0x000531f7) input_focus_pane_g9

0x2833,	// (0x000521ad) input_focus_pane_g10

0x0009,

0xf697,	// (0x0005f011) input_focus_pane_g

0x5313,	// (0x00054c8d) wait_border_pane_g3_copy1

0xb9e4,	// (0x0005b35e) data_form_pane_t1

0x2833,	// (0x000521ad) wait_anim_pane_g1_copy1

0xc4fb,	// (0x0005be75) data_form_wide_pane_t1

0xb9fd,	// (0x0005b377) list_form_graphic_pane_cp_ParamLimits

0xb9fd,	// (0x0005b377) list_form_graphic_pane_cp

0x625c,	// (0x00055bd6) slider_form_pane_g1

0x6265,	// (0x00055bdf) slider_form_pane_g2

0x0006,

0xf98e,	// (0x0005f308) slider_form_pane_g

0xba0e,	// (0x0005b388) list_form_graphic_pane_ParamLimits

0xba0e,	// (0x0005b388) list_form_graphic_pane

0x0792,	// (0x0005010c) list_form_graphic_pane_g1

0x079a,	// (0x00050114) list_form_graphic_pane_t1_ParamLimits

0x079a,	// (0x00050114) list_form_graphic_pane_t1

0x291d,	// (0x00052297) list_highlight_pane_cp5_ParamLimits

0x291d,	// (0x00052297) list_highlight_pane_cp5

0xba20,	// (0x0005b39a) find_pane_g1

0x3885,	// (0x000531ff) input_find_pane

0xba29,	// (0x0005b3a3) input_find_pane_g1_ParamLimits

0xba29,	// (0x0005b3a3) input_find_pane_g1

0xba35,	// (0x0005b3af) input_find_pane_t1_ParamLimits

0xba35,	// (0x0005b3af) input_find_pane_t1

0xba4a,	// (0x0005b3c4) input_find_pane_t2_ParamLimits

0xba4a,	// (0x0005b3c4) input_find_pane_t2

0x0001,

0xf6ac,	// (0x0005f026) input_find_pane_t_ParamLimits

0xf6ac,	// (0x0005f026) input_find_pane_t

0x388e,	// (0x00053208) input_focus_pane_cp5_ParamLimits

0x388e,	// (0x00053208) input_focus_pane_cp5

0x38a8,	// (0x00053222) bg_popup_window_pane_cp2_ParamLimits

0x38a8,	// (0x00053222) bg_popup_window_pane_cp2

0x38b5,	// (0x0005322f) listscroll_menu_pane_ParamLimits

0x38b5,	// (0x0005322f) listscroll_menu_pane

0xce47,	// (0x0005c7c1) popup_submenu_window_ParamLimits

0xce47,	// (0x0005c7c1) popup_submenu_window

0x38ed,	// (0x00053267) find_popup_pane_g1

0x38f5,	// (0x0005326f) input_popup_find_pane_cp

0x388e,	// (0x00053208) input_focus_pane_cp4_ParamLimits

0x388e,	// (0x00053208) input_focus_pane_cp4

0x390b,	// (0x00053285) input_popup_find_pane_t1_ParamLimits

0x390b,	// (0x00053285) input_popup_find_pane_t1

0x283d,	// (0x000521b7) bg_popup_sub_pane_cp

0x3939,	// (0x000532b3) listscroll_popup_sub_pane

0x3941,	// (0x000532bb) list_submenu_pane_ParamLimits

0x3941,	// (0x000532bb) list_submenu_pane

0x3952,	// (0x000532cc) scroll_pane_cp4

0x395a,	// (0x000532d4) list_single_popup_submenu_pane_ParamLimits

0x395a,	// (0x000532d4) list_single_popup_submenu_pane

0x396e,	// (0x000532e8) list_single_popup_submenu_pane_g1

0x3976,	// (0x000532f0) list_single_popup_submenu_pane_t1_ParamLimits

0x3976,	// (0x000532f0) list_single_popup_submenu_pane_t1

0x2b98,	// (0x00052512) bg_active_tab_pane_cp1_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp1

0xce81,	// (0x0005c7fb) tabs_2_active_pane_g1

0xce89,	// (0x0005c803) tabs_2_active_pane_t1

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp1_ParamLimits

0x2b98,	// (0x00052512) bg_passive_tab_pane_cp1

0xce81,	// (0x0005c7fb) tabs_2_passive_pane_g1

0xce89,	// (0x0005c803) tabs_2_passive_pane_t1

0x291d,	// (0x00052297) bg_active_tab_pane_cp4

0xce9b,	// (0x0005c815) tabs_2_long_active_pane_t1

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp4

0x14a5,	// (0x00050e1f) list_single_midp_graphic_pane_g4_ParamLimits

0x291d,	// (0x00052297) bg_active_tab_pane_cp5

0xceae,	// (0x0005c828) tabs_3_long_active_pane_t1

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp5

0x14a5,	// (0x00050e1f) list_single_midp_graphic_pane_g4

0x291d,	// (0x00052297) bg_popup_window_pane_cp13_ParamLimits

0x291d,	// (0x00052297) bg_popup_window_pane_cp13

0x39ed,	// (0x00053367) listscroll_popup_fast_pane_ParamLimits

0x39ed,	// (0x00053367) listscroll_popup_fast_pane

0x39fc,	// (0x00053376) grid_popup_fast_pane_ParamLimits

0x39fc,	// (0x00053376) grid_popup_fast_pane

0x3a0e,	// (0x00053388) scroll_pane_cp9_ParamLimits

0x3a0e,	// (0x00053388) scroll_pane_cp9

0x7bb4,	// (0x0005752e) list_single_graphic_hl_pane_t1_cp2_ParamLimits

0x7bb4,	// (0x0005752e) list_single_graphic_hl_pane_t1_cp2

0x3a32,	// (0x000533ac) input_focus_pane_cp20_ParamLimits

0x3a32,	// (0x000533ac) input_focus_pane_cp20

0x3a40,	// (0x000533ba) query_popup_data_pane_t1_ParamLimits

0x3a40,	// (0x000533ba) query_popup_data_pane_t1

0x3a53,	// (0x000533cd) query_popup_data_pane_t2_ParamLimits

0x3a53,	// (0x000533cd) query_popup_data_pane_t2

0x3a99,	// (0x00053413) query_popup_data_pane_t3_ParamLimits

0x3a99,	// (0x00053413) query_popup_data_pane_t3

0x3ada,	// (0x00053454) query_popup_data_pane_t4_ParamLimits

0x3ada,	// (0x00053454) query_popup_data_pane_t4

0x3b16,	// (0x00053490) query_popup_data_pane_t5_ParamLimits

0x3b16,	// (0x00053490) query_popup_data_pane_t5

0x0004,

0xf6b1,	// (0x0005f02b) query_popup_data_pane_t_ParamLimits

0xf6b1,	// (0x0005f02b) query_popup_data_pane_t

0x383d,	// (0x000531b7) bg_set_opt_pane_g1

0x3845,	// (0x000531bf) bg_set_opt_pane_g2

0x384d,	// (0x000531c7) bg_set_opt_pane_g3

0x3855,	// (0x000531cf) bg_set_opt_pane_g4

0x385d,	// (0x000531d7) bg_set_opt_pane_g5

0x3865,	// (0x000531df) bg_set_opt_pane_g6

0x386d,	// (0x000531e7) bg_set_opt_pane_g7

0x3875,	// (0x000531ef) bg_set_opt_pane_g8

0x387d,	// (0x000531f7) bg_set_opt_pane_g9

0x0008,

0xf6bc,	// (0x0005f036) bg_set_opt_pane_g

0x0b17,	// (0x00050491) control_top_pane_stacon_ParamLimits

0x0b17,	// (0x00050491) control_top_pane_stacon

0x0b6a,	// (0x000504e4) signal_pane_stacon_ParamLimits

0x0b6a,	// (0x000504e4) signal_pane_stacon

0x40d5,	// (0x00053a4f) stacon_top_pane_g1_ParamLimits

0x40d5,	// (0x00053a4f) stacon_top_pane_g1

0x0b8f,	// (0x00050509) title_pane_stacon_ParamLimits

0x0b8f,	// (0x00050509) title_pane_stacon

0x0bb9,	// (0x00050533) uni_indicator_pane_stacon_ParamLimits

0x0bb9,	// (0x00050533) uni_indicator_pane_stacon

0x0bce,	// (0x00050548) battery_pane_stacon_ParamLimits

0x0bce,	// (0x00050548) battery_pane_stacon

0x0c12,	// (0x0005058c) control_bottom_pane_stacon_ParamLimits

0x0c12,	// (0x0005058c) control_bottom_pane_stacon

0x0c35,	// (0x000505af) navi_pane_stacon_ParamLimits

0x0c35,	// (0x000505af) navi_pane_stacon

0x40f7,	// (0x00053a71) stacon_bottom_pane_g1_ParamLimits

0x40f7,	// (0x00053a71) stacon_bottom_pane_g1

0x07ee,	// (0x00050168) aid_levels_signal_lsc_ParamLimits

0x07ee,	// (0x00050168) aid_levels_signal_lsc

0x0805,	// (0x0005017f) signal_pane_stacon_g1_ParamLimits

0x0805,	// (0x0005017f) signal_pane_stacon_g1

0x0819,	// (0x00050193) signal_pane_stacon_g2_ParamLimits

0x0819,	// (0x00050193) signal_pane_stacon_g2

0x0001,

0xf6cf,	// (0x0005f049) signal_pane_stacon_g_ParamLimits

0xf6cf,	// (0x0005f049) signal_pane_stacon_g

0x084e,	// (0x000501c8) title_pane_stacon_t1_ParamLimits

0x084e,	// (0x000501c8) title_pane_stacon_t1

0x3b5a,	// (0x000534d4) uni_indicator_pane_stacon_g1

0x3b64,	// (0x000534de) uni_indicator_pane_stacon_g2

0x3b6e,	// (0x000534e8) uni_indicator_pane_stacon_g3

0x3b78,	// (0x000534f2) uni_indicator_pane_stacon_g4

0x0003,

0xf6db,	// (0x0005f055) uni_indicator_pane_stacon_g

0x0873,	// (0x000501ed) control_top_pane_stacon_g1

0x087b,	// (0x000501f5) control_top_pane_stacon_t1_ParamLimits

0x087b,	// (0x000501f5) control_top_pane_stacon_t1

0x08b2,	// (0x0005022c) aid_levels_battery_lsc_ParamLimits

0x08b2,	// (0x0005022c) aid_levels_battery_lsc

0x08ca,	// (0x00050244) battery_pane_stacon_g1_ParamLimits

0x08ca,	// (0x00050244) battery_pane_stacon_g1

0x08dd,	// (0x00050257) battery_pane_stacon_g2_ParamLimits

0x08dd,	// (0x00050257) battery_pane_stacon_g2

0x0001,

0xf6e4,	// (0x0005f05e) battery_pane_stacon_g_ParamLimits

0xf6e4,	// (0x0005f05e) battery_pane_stacon_g

0x091b,	// (0x00050295) navi_icon_pane_stacon

0x092f,	// (0x000502a9) navi_navi_pane_stacon

0x091b,	// (0x00050295) navi_text_pane_stacon

0x0873,	// (0x000501ed) control_bottom_pane_stacon_g1

0x0943,	// (0x000502bd) control_bottom_pane_stacon_t1_ParamLimits

0x0943,	// (0x000502bd) control_bottom_pane_stacon_t1

0xcec0,	// (0x0005c83a) grid_app_pane_ParamLimits

0xcec0,	// (0x0005c83a) grid_app_pane

0xcef8,	// (0x0005c872) scroll_pane_cp15_ParamLimits

0xcef8,	// (0x0005c872) scroll_pane_cp15

0xcf11,	// (0x0005c88b) cell_app_pane_ParamLimits

0xcf11,	// (0x0005c88b) cell_app_pane

0xcf56,	// (0x0005c8d0) cell_app_pane_g1_ParamLimits

0xcf56,	// (0x0005c8d0) cell_app_pane_g1

0x3c19,	// (0x00053593) cell_app_pane_g2_ParamLimits

0x3c19,	// (0x00053593) cell_app_pane_g2

0x0001,

0xf6e9,	// (0x0005f063) cell_app_pane_g_ParamLimits

0xf6e9,	// (0x0005f063) cell_app_pane_g

0xcf76,	// (0x0005c8f0) cell_app_pane_t1_ParamLimits

0xcf76,	// (0x0005c8f0) cell_app_pane_t1

0x3c3c,	// (0x000535b6) grid_highlight_pane_ParamLimits

0x3c3c,	// (0x000535b6) grid_highlight_pane

0x383d,	// (0x000531b7) cell_highlight_pane_g1

0x3845,	// (0x000531bf) cell_highlight_pane_g2

0x384d,	// (0x000531c7) cell_highlight_pane_g3

0x3855,	// (0x000531cf) cell_highlight_pane_g4

0x385d,	// (0x000531d7) cell_highlight_pane_g5

0x3865,	// (0x000531df) cell_highlight_pane_g6

0x386d,	// (0x000531e7) cell_highlight_pane_g7

0x3875,	// (0x000531ef) cell_highlight_pane_g8

0x387d,	// (0x000531f7) cell_highlight_pane_g9

0x2833,	// (0x000521ad) cell_highlight_pane_g10

0x0009,

0xf697,	// (0x0005f011) cell_highlight_pane_g

0x3c4d,	// (0x000535c7) bg_scroll_pane

0x098d,	// (0x00050307) scroll_handle_pane

0x3c94,	// (0x0005360e) scroll_bg_pane_g1

0x3ca9,	// (0x00053623) scroll_bg_pane_g2

0x3cc1,	// (0x0005363b) scroll_bg_pane_g3

0x0002,

0xf6ee,	// (0x0005f068) scroll_bg_pane_g

0x3cd6,	// (0x00053650) scroll_handle_focus_pane_ParamLimits

0x3cd6,	// (0x00053650) scroll_handle_focus_pane

0x3c94,	// (0x0005360e) scroll_handle_pane_g1

0x3ce3,	// (0x0005365d) scroll_handle_pane_g2

0x3cc1,	// (0x0005363b) scroll_handle_pane_g3

0x0002,

0xf6f5,	// (0x0005f06f) scroll_handle_pane_g

0x388e,	// (0x00053208) bg_popup_sub_pane_cp21_ParamLimits

0x388e,	// (0x00053208) bg_popup_sub_pane_cp21

0x3cf7,	// (0x00053671) popup_fep_japan_predictive_window_t1_ParamLimits

0x3cf7,	// (0x00053671) popup_fep_japan_predictive_window_t1

0x3d11,	// (0x0005368b) popup_fep_japan_predictive_window_t2_ParamLimits

0x3d11,	// (0x0005368b) popup_fep_japan_predictive_window_t2

0x3d44,	// (0x000536be) popup_fep_japan_predictive_window_t3_ParamLimits

0x3d44,	// (0x000536be) popup_fep_japan_predictive_window_t3

0x0002,

0xf6fc,	// (0x0005f076) popup_fep_japan_predictive_window_t_ParamLimits

0xf6fc,	// (0x0005f076) popup_fep_japan_predictive_window_t

0x283d,	// (0x000521b7) bg_popup_sub_pane_cp23

0x3d7b,	// (0x000536f5) listscroll_japin_cand_pane

0x3d83,	// (0x000536fd) popup_fep_japan_candidate_window_t1

0x3d91,	// (0x0005370b) candidate_pane_ParamLimits

0x3d91,	// (0x0005370b) candidate_pane

0x3da3,	// (0x0005371d) scroll_pane_cp30

0x3dab,	// (0x00053725) list_single_popup_jap_candidate_pane_ParamLimits

0x3dab,	// (0x00053725) list_single_popup_jap_candidate_pane

0x283d,	// (0x000521b7) list_highlight_pane_cp30

0x3dc0,	// (0x0005373a) list_single_popup_jap_candidate_pane_t1

0x3dcf,	// (0x00053749) level_1_signal

0x3ddc,	// (0x00053756) level_2_signal

0x3de9,	// (0x00053763) level_3_signal

0x3df6,	// (0x00053770) level_4_signal

0x3e03,	// (0x0005377d) level_5_signal

0x3e10,	// (0x0005378a) level_6_signal

0x3e1d,	// (0x00053797) level_7_signal

0x3dcf,	// (0x00053749) level_1_battery

0x3ddc,	// (0x00053756) level_2_battery

0x3de9,	// (0x00053763) level_3_battery

0x3df6,	// (0x00053770) level_4_battery

0x3e03,	// (0x0005377d) level_5_battery

0x3e10,	// (0x0005378a) level_6_battery

0x3e1d,	// (0x00053797) level_7_battery

0x3e42,	// (0x000537bc) list_menu_pane_ParamLimits

0x3e42,	// (0x000537bc) list_menu_pane

0x3e58,	// (0x000537d2) scroll_pane_cp25_ParamLimits

0x3e58,	// (0x000537d2) scroll_pane_cp25

0x3e71,	// (0x000537eb) list_double2_graphic_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double2_graphic_pane_cp2

0x3e71,	// (0x000537eb) list_double2_large_graphic_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double2_large_graphic_pane_cp2

0x3e71,	// (0x000537eb) list_double2_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double2_pane_cp2

0x3e71,	// (0x000537eb) list_double_graphic_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double_graphic_pane_cp2

0x3e71,	// (0x000537eb) list_double_large_graphic_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double_large_graphic_pane_cp2

0x3e71,	// (0x000537eb) list_double_number_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double_number_pane_cp2

0x3e71,	// (0x000537eb) list_double_pane_cp2_ParamLimits

0x3e71,	// (0x000537eb) list_double_pane_cp2

0xcf9e,	// (0x0005c918) list_single_2graphic_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_2graphic_pane_cp2

0xcf9e,	// (0x0005c918) list_single_graphic_heading_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_graphic_heading_pane_cp2

0xcf9e,	// (0x0005c918) list_single_graphic_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_graphic_pane_cp2

0xcf9e,	// (0x0005c918) list_single_heading_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_heading_pane_cp2

0x3eae,	// (0x00053828) list_single_large_graphic_pane_cp2_ParamLimits

0x3eae,	// (0x00053828) list_single_large_graphic_pane_cp2

0xcf9e,	// (0x0005c918) list_single_number_heading_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_number_heading_pane_cp2

0xcf9e,	// (0x0005c918) list_single_number_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_number_pane_cp2

0xcf9e,	// (0x0005c918) list_single_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_pane_cp2

0x3f24,	// (0x0005389e) bg_popup_sub_pane_cp22

0x0a3f,	// (0x000503b9) popup_side_volume_key_window_g1

0x0a69,	// (0x000503e3) popup_side_volume_key_window_t1

0x0a85,	// (0x000503ff) volume_small_pane_cp1

0x2b98,	// (0x00052512) bg_popup_sub_pane_cp24_ParamLimits

0x2b98,	// (0x00052512) bg_popup_sub_pane_cp24

0x3f3a,	// (0x000538b4) fep_china_uni_candidate_pane_ParamLimits

0x3f3a,	// (0x000538b4) fep_china_uni_candidate_pane

0x3f4e,	// (0x000538c8) fep_china_uni_entry_pane

0x3f5e,	// (0x000538d8) popup_fep_china_uni_window_g1

0x3f7a,	// (0x000538f4) fep_china_uni_entry_pane_g1

0x3f82,	// (0x000538fc) fep_china_uni_entry_pane_g2

0x0001,

0xf72d,	// (0x0005f0a7) fep_china_uni_entry_pane_g

0x3f8a,	// (0x00053904) fep_entry_item_pane

0x3f94,	// (0x0005390e) fep_candidate_item_pane

0x3f9c,	// (0x00053916) fep_china_uni_candidate_pane_g1

0x3fa4,	// (0x0005391e) fep_china_uni_candidate_pane_g2

0x3fac,	// (0x00053926) fep_china_uni_candidate_pane_g3

0x3fb4,	// (0x0005392e) fep_china_uni_candidate_pane_g4

0x0003,

0xf732,	// (0x0005f0ac) fep_china_uni_candidate_pane_g

0x2833,	// (0x000521ad) fep_entry_item_pane_g1

0x3fbc,	// (0x00053936) fep_entry_item_pane_t1_ParamLimits

0x3fbc,	// (0x00053936) fep_entry_item_pane_t1

0x3fd2,	// (0x0005394c) fep_candidate_item_pane_t1_ParamLimits

0x3fd2,	// (0x0005394c) fep_candidate_item_pane_t1

0x3fe7,	// (0x00053961) fep_candidate_item_pane_t2_ParamLimits

0x3fe7,	// (0x00053961) fep_candidate_item_pane_t2

0x0001,

0xf73b,	// (0x0005f0b5) fep_candidate_item_pane_t_ParamLimits

0xf73b,	// (0x0005f0b5) fep_candidate_item_pane_t

0x291d,	// (0x00052297) list_highlight_pane_cp31_ParamLimits

0x291d,	// (0x00052297) list_highlight_pane_cp31

0x3ff9,	// (0x00053973) level_1_signal_lsc

0x4002,	// (0x0005397c) level_2_signal_lsc

0x400b,	// (0x00053985) level_3_signal_lsc

0x4014,	// (0x0005398e) level_4_signal_lsc

0x401d,	// (0x00053997) level_5_signal_lsc

0x4026,	// (0x000539a0) level_6_signal_lsc

0x402f,	// (0x000539a9) level_7_signal_lsc

0x402f,	// (0x000539a9) level_1_battery_lsc

0x4038,	// (0x000539b2) level_2_battery_lsc

0x4041,	// (0x000539bb) level_3_battery_lsc

0x404a,	// (0x000539c4) level_4_battery_lsc

0x4053,	// (0x000539cd) level_5_battery_lsc

0x405c,	// (0x000539d6) level_6_battery_lsc

0x3ff9,	// (0x00053973) level_7_battery_lsc

0x4065,	// (0x000539df) scroll_handle_focus_pane_g1

0x406e,	// (0x000539e8) scroll_handle_focus_pane_g2

0x4077,	// (0x000539f1) scroll_handle_focus_pane_g3

0x0002,

0xf740,	// (0x0005f0ba) scroll_handle_focus_pane_g

0xba68,	// (0x0005b3e2) list_single_2graphic_pane_g1_ParamLimits

0xba68,	// (0x0005b3e2) list_single_2graphic_pane_g1

0xb54a,	// (0x0005aec4) list_single_2graphic_pane_g2_ParamLimits

0xb54a,	// (0x0005aec4) list_single_2graphic_pane_g2

0x2d4d,	// (0x000526c7) list_single_2graphic_pane_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_single_2graphic_pane_g3

0xba74,	// (0x0005b3ee) list_single_2graphic_pane_g4_ParamLimits

0xba74,	// (0x0005b3ee) list_single_2graphic_pane_g4

0x0003,

0xf747,	// (0x0005f0c1) list_single_2graphic_pane_g_ParamLimits

0xf747,	// (0x0005f0c1) list_single_2graphic_pane_g

0xba80,	// (0x0005b3fa) list_single_2graphic_pane_t1_ParamLimits

0xba80,	// (0x0005b3fa) list_single_2graphic_pane_t1

0xbaae,	// (0x0005b428) list_double2_graphic_large_graphic_pane_g1_ParamLimits

0xbaae,	// (0x0005b428) list_double2_graphic_large_graphic_pane_g1

0xb54a,	// (0x0005aec4) list_double2_graphic_large_graphic_pane_g2_ParamLimits

0xb54a,	// (0x0005aec4) list_double2_graphic_large_graphic_pane_g2

0x2d4d,	// (0x000526c7) list_double2_graphic_large_graphic_pane_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_double2_graphic_large_graphic_pane_g3

0xbac0,	// (0x0005b43a) list_double2_graphic_large_graphic_pane_g4_ParamLimits

0xbac0,	// (0x0005b43a) list_double2_graphic_large_graphic_pane_g4

0x0003,

0xf750,	// (0x0005f0ca) list_double2_graphic_large_graphic_pane_g_ParamLimits

0xf750,	// (0x0005f0ca) list_double2_graphic_large_graphic_pane_g

0xbacc,	// (0x0005b446) list_double2_graphic_large_graphic_pane_t1_ParamLimits

0xbacc,	// (0x0005b446) list_double2_graphic_large_graphic_pane_t1

0xbae2,	// (0x0005b45c) list_double2_graphic_large_graphic_pane_t2_ParamLimits

0xbae2,	// (0x0005b45c) list_double2_graphic_large_graphic_pane_t2

0x0001,

0xf759,	// (0x0005f0d3) list_double2_graphic_large_graphic_pane_t_ParamLimits

0xf759,	// (0x0005f0d3) list_double2_graphic_large_graphic_pane_t

0x41bf,	// (0x00053b39) popup_fast_swap_window_ParamLimits

0x41bf,	// (0x00053b39) popup_fast_swap_window

0x41db,	// (0x00053b55) popup_side_volume_key_window

0x41f7,	// (0x00053b71) stacon_top_pane

0x4201,	// (0x00053b7b) status_pane_ParamLimits

0x4201,	// (0x00053b7b) status_pane

0x41f7,	// (0x00053b71) status_small_pane

0x283d,	// (0x000521b7) control_pane

0x283d,	// (0x000521b7) stacon_bottom_pane

0x37b9,	// (0x00053133) scroll_pane_cp121

0x37b0,	// (0x0005312a) set_content_pane

0x409b,	// (0x00053a15) bg_active_tab_pane_g1_cp1

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp1

0x40a4,	// (0x00053a1e) bg_active_tab_pane_g3_cp1

0x409b,	// (0x00053a15) bg_passive_tab_pane_g1_cp1

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp1

0x40a4,	// (0x00053a1e) bg_passive_tab_pane_g3_cp1

0xd02c,	// (0x0005c9a6) bg_active_tab_pane_g1_cp2

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp2

0xd035,	// (0x0005c9af) bg_active_tab_pane_g3_cp2

0xd02c,	// (0x0005c9a6) bg_passive_tab_pane_g1_cp2

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp2

0xd035,	// (0x0005c9af) bg_passive_tab_pane_g3_cp2

0xd03e,	// (0x0005c9b8) bg_active_tab_pane_g1_cp3

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp3

0xd047,	// (0x0005c9c1) bg_active_tab_pane_g3_cp3

0xd03e,	// (0x0005c9b8) bg_passive_tab_pane_g1_cp3

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp3

0xd047,	// (0x0005c9c1) bg_passive_tab_pane_g3_cp3

0xd050,	// (0x0005c9ca) bg_active_tab_pane_g1_cp4

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp4

0xd059,	// (0x0005c9d3) bg_active_tab_pane_g3_cp4

0xd050,	// (0x0005c9ca) bg_passive_tab_pane_g1_cp4

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp4

0xd059,	// (0x0005c9d3) bg_passive_tab_pane_g3_cp4

0x4113,	// (0x00053a8d) bg_active_tab_pane_g1_cp5

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp5

0x411c,	// (0x00053a96) bg_active_tab_pane_g3_cp5

0x4113,	// (0x00053a8d) bg_passive_tab_pane_g1_cp5

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp5

0x411c,	// (0x00053a96) bg_passive_tab_pane_g3_cp5

0x6813,	// (0x0005618d) list_set_graphic_pane_ParamLimits

0x6813,	// (0x0005618d) list_set_graphic_pane

0x283d,	// (0x000521b7) bg_set_opt_pane_cp4

0xd062,	// (0x0005c9dc) list_set_graphic_pane_g1_ParamLimits

0xd062,	// (0x0005c9dc) list_set_graphic_pane_g1

0xd06e,	// (0x0005c9e8) list_set_graphic_pane_g2_ParamLimits

0xd06e,	// (0x0005c9e8) list_set_graphic_pane_g2

0x0001,

0xf75e,	// (0x0005f0d8) list_set_graphic_pane_g_ParamLimits

0xf75e,	// (0x0005f0d8) list_set_graphic_pane_g

0x0009,

0xfad3,	// (0x0005f44d) volume_small_pane_cp_g

0xd092,	// (0x0005ca0c) list_double2_large_graphic_pane_g1_cp2_ParamLimits

0xd092,	// (0x0005ca0c) list_double2_large_graphic_pane_g1_cp2

0xd0a0,	// (0x0005ca1a) list_double2_large_graphic_pane_g2_cp2_ParamLimits

0xd0a0,	// (0x0005ca1a) list_double2_large_graphic_pane_g2_cp2

0x418f,	// (0x00053b09) list_double2_large_graphic_pane_g3_cp2

0x4197,	// (0x00053b11) list_double2_large_graphic_pane_t1_cp2_ParamLimits

0x4197,	// (0x00053b11) list_double2_large_graphic_pane_t1_cp2

0x41ad,	// (0x00053b27) list_double2_large_graphic_pane_t2_cp2_ParamLimits

0x41ad,	// (0x00053b27) list_double2_large_graphic_pane_t2_cp2

0xd88f,	// (0x0005d209) list_double_large_graphic_pane_g1_cp2_ParamLimits

0xd88f,	// (0x0005d209) list_double_large_graphic_pane_g1_cp2

0xd8a2,	// (0x0005d21c) list_double_large_graphic_pane_g2_cp2_ParamLimits

0xd8a2,	// (0x0005d21c) list_double_large_graphic_pane_g2_cp2

0x4311,	// (0x00053c8b) list_double_large_graphic_pane_g3_cp2

0x5e1b,	// (0x00055795) list_double_large_graphic_pane_g4_cp

0x5e23,	// (0x0005579d) list_double_large_graphic_pane_t1_cp2_ParamLimits

0x5e23,	// (0x0005579d) list_double_large_graphic_pane_t1_cp2

0x5e3a,	// (0x000557b4) list_double_large_graphic_pane_t2_cp2_ParamLimits

0x5e3a,	// (0x000557b4) list_double_large_graphic_pane_t2_cp2

0xd0b1,	// (0x0005ca2b) list_double2_graphic_pane_g1_cp2_ParamLimits

0xd0b1,	// (0x0005ca2b) list_double2_graphic_pane_g1_cp2

0xd0bf,	// (0x0005ca39) list_double2_graphic_pane_g2_cp2_ParamLimits

0xd0bf,	// (0x0005ca39) list_double2_graphic_pane_g2_cp2

0xd0d0,	// (0x0005ca4a) list_double2_graphic_pane_g3_cp2

0x4238,	// (0x00053bb2) list_double2_graphic_pane_t1_cp2_ParamLimits

0x4238,	// (0x00053bb2) list_double2_graphic_pane_t1_cp2

0x424e,	// (0x00053bc8) list_double2_graphic_pane_t2_cp2_ParamLimits

0x424e,	// (0x00053bc8) list_double2_graphic_pane_t2_cp2

0x4260,	// (0x00053bda) list_single_number_heading_pane_g1_cp2_ParamLimits

0x4260,	// (0x00053bda) list_single_number_heading_pane_g1_cp2

0x426c,	// (0x00053be6) list_single_number_heading_pane_g2_cp2

0x4274,	// (0x00053bee) list_single_number_heading_pane_t1_cp2_ParamLimits

0x4274,	// (0x00053bee) list_single_number_heading_pane_t1_cp2

0xd0da,	// (0x0005ca54) list_single_number_heading_pane_t2_cp2_ParamLimits

0xd0da,	// (0x0005ca54) list_single_number_heading_pane_t2_cp2

0x429c,	// (0x00053c16) list_single_number_heading_pane_t3_cp2_ParamLimits

0x429c,	// (0x00053c16) list_single_number_heading_pane_t3_cp2

0x4260,	// (0x00053bda) list_single_heading_pane_g1_cp2_ParamLimits

0x4260,	// (0x00053bda) list_single_heading_pane_g1_cp2

0x426c,	// (0x00053be6) list_single_heading_pane_g2_cp2

0x4274,	// (0x00053bee) list_single_heading_pane_t1_cp2_ParamLimits

0x4274,	// (0x00053bee) list_single_heading_pane_t1_cp2

0xd87b,	// (0x0005d1f5) list_single_heading_pane_t2_cp2_ParamLimits

0xd87b,	// (0x0005d1f5) list_single_heading_pane_t2_cp2

0x5b58,	// (0x000554d2) list_double_graphic_pane_g1_cp2_ParamLimits

0x5b58,	// (0x000554d2) list_double_graphic_pane_g1_cp2

0x491e,	// (0x00054298) list_double_graphic_pane_g2_cp2_ParamLimits

0x491e,	// (0x00054298) list_double_graphic_pane_g2_cp2

0x5b64,	// (0x000554de) list_double_graphic_pane_g3_cp2

0x5b6c,	// (0x000554e6) list_double_graphic_pane_t1_cp2_ParamLimits

0x5b6c,	// (0x000554e6) list_double_graphic_pane_t1_cp2

0x5b82,	// (0x000554fc) list_double_graphic_pane_t2_cp2_ParamLimits

0x5b82,	// (0x000554fc) list_double_graphic_pane_t2_cp2

0x3771,	// (0x000530eb) list_double_number_pane_g1_cp2_ParamLimits

0x3771,	// (0x000530eb) list_double_number_pane_g1_cp2

0x4311,	// (0x00053c8b) list_double_number_pane_g2_cp2

0xd867,	// (0x0005d1e1) list_double_number_pane_t1_cp2_ParamLimits

0xd867,	// (0x0005d1e1) list_double_number_pane_t1_cp2

0x5b30,	// (0x000554aa) list_double_number_pane_t2_cp2_ParamLimits

0x5b30,	// (0x000554aa) list_double_number_pane_t2_cp2

0x5b46,	// (0x000554c0) list_double_number_pane_t3_cp2_ParamLimits

0x5b46,	// (0x000554c0) list_double_number_pane_t3_cp2

0xd7b5,	// (0x0005d12f) list_single_graphic_pane_g1_cp2_ParamLimits

0xd7b5,	// (0x0005d12f) list_single_graphic_pane_g1_cp2

0x4369,	// (0x00053ce3) list_single_graphic_pane_g2_cp2_ParamLimits

0x4369,	// (0x00053ce3) list_single_graphic_pane_g2_cp2

0x4375,	// (0x00053cef) list_single_graphic_pane_g3_cp2

0x59db,	// (0x00055355) list_single_graphic_pane_t1_cp2_ParamLimits

0x59db,	// (0x00055355) list_single_graphic_pane_t1_cp2

0x4369,	// (0x00053ce3) list_single_number_pane_g1_cp2_ParamLimits

0x4369,	// (0x00053ce3) list_single_number_pane_g1_cp2

0x4375,	// (0x00053cef) list_single_number_pane_g2_cp2

0x59db,	// (0x00055355) list_single_number_pane_t1_cp2_ParamLimits

0x59db,	// (0x00055355) list_single_number_pane_t1_cp2

0xd7a1,	// (0x0005d11b) list_single_number_pane_t2_cp2_ParamLimits

0xd7a1,	// (0x0005d11b) list_single_number_pane_t2_cp2

0xd0a0,	// (0x0005ca1a) list_double2_pane_g1_cp2_ParamLimits

0xd0a0,	// (0x0005ca1a) list_double2_pane_g1_cp2

0x418f,	// (0x00053b09) list_double2_pane_g2_cp2

0x42e9,	// (0x00053c63) list_double2_pane_t1_cp2_ParamLimits

0x42e9,	// (0x00053c63) list_double2_pane_t1_cp2

0x42ff,	// (0x00053c79) list_double2_pane_t2_cp2_ParamLimits

0x42ff,	// (0x00053c79) list_double2_pane_t2_cp2

0x3771,	// (0x000530eb) list_double_pane_g1_cp2_ParamLimits

0x3771,	// (0x000530eb) list_double_pane_g1_cp2

0x4311,	// (0x00053c8b) list_double_pane_g2_cp2

0x4319,	// (0x00053c93) list_double_pane_t1_cp2_ParamLimits

0x4319,	// (0x00053c93) list_double_pane_t1_cp2

0x432f,	// (0x00053ca9) list_double_pane_t2_cp2_ParamLimits

0x432f,	// (0x00053ca9) list_double_pane_t2_cp2

0x4359,	// (0x00053cd3) list_single_pane_cp2_g3

0x4369,	// (0x00053ce3) list_single_pane_g1_cp2_ParamLimits

0x4369,	// (0x00053ce3) list_single_pane_g1_cp2

0x4375,	// (0x00053cef) list_single_pane_g2_cp2

0x437d,	// (0x00053cf7) list_single_pane_t1_cp2_ParamLimits

0x437d,	// (0x00053cf7) list_single_pane_t1_cp2

0xd106,	// (0x0005ca80) list_single_large_graphic_pane_g1_cp2_ParamLimits

0xd106,	// (0x0005ca80) list_single_large_graphic_pane_g1_cp2

0x43a1,	// (0x00053d1b) list_single_large_graphic_pane_g2_cp2_ParamLimits

0x43a1,	// (0x00053d1b) list_single_large_graphic_pane_g2_cp2

0x43ad,	// (0x00053d27) list_single_large_graphic_pane_g3_cp2

0x43b5,	// (0x00053d2f) list_single_large_graphic_pane_g4_cp1_ParamLimits

0x43b5,	// (0x00053d2f) list_single_large_graphic_pane_g4_cp1

0x43cf,	// (0x00053d49) list_single_large_graphic_pane_t1_cp2_ParamLimits

0x43cf,	// (0x00053d49) list_single_large_graphic_pane_t1_cp2

0x59a7,	// (0x00055321) list_single_graphic_heading_pane_g1_cp2_ParamLimits

0x59a7,	// (0x00055321) list_single_graphic_heading_pane_g1_cp2

0xd77c,	// (0x0005d0f6) list_single_graphic_heading_pane_g4_cp2_ParamLimits

0xd77c,	// (0x0005d0f6) list_single_graphic_heading_pane_g4_cp2

0x4375,	// (0x00053cef) list_single_graphic_heading_pane_g5_cp2

0x59b3,	// (0x0005532d) list_single_graphic_heading_pane_t1_cp2_ParamLimits

0x59b3,	// (0x0005532d) list_single_graphic_heading_pane_t1_cp2

0xd78d,	// (0x0005d107) list_single_graphic_heading_pane_t2_cp2_ParamLimits

0xd78d,	// (0x0005d107) list_single_graphic_heading_pane_t2_cp2

0x5968,	// (0x000552e2) list_single_2graphic_pane_g1_cp2_ParamLimits

0x5968,	// (0x000552e2) list_single_2graphic_pane_g1_cp2

0xd77c,	// (0x0005d0f6) list_single_2graphic_pane_g2_cp2_ParamLimits

0xd77c,	// (0x0005d0f6) list_single_2graphic_pane_g2_cp2

0x4375,	// (0x00053cef) list_single_2graphic_pane_g3_cp2

0x5985,	// (0x000552ff) list_single_2graphic_pane_g4_cp2_ParamLimits

0x5985,	// (0x000552ff) list_single_2graphic_pane_g4_cp2

0x5991,	// (0x0005530b) list_single_2graphic_pane_t1_cp2_ParamLimits

0x5991,	// (0x0005530b) list_single_2graphic_pane_t1_cp2

0x2833,	// (0x000521ad) list_highlight_pane_g10_cp1

0x5540,	// (0x00054eba) list_highlight_pane_g1_cp1

0x5548,	// (0x00054ec2) list_highlight_pane_g2_cp1

0x5550,	// (0x00054eca) list_highlight_pane_g3_cp1

0x5558,	// (0x00054ed2) list_highlight_pane_g4_cp1

0x5560,	// (0x00054eda) list_highlight_pane_g5_cp1

0x5568,	// (0x00054ee2) list_highlight_pane_g6_cp1

0x5570,	// (0x00054eea) list_highlight_pane_g7_cp1

0x5578,	// (0x00054ef2) list_highlight_pane_g8_cp1

0x5580,	// (0x00054efa) list_highlight_pane_g9_cp1

0xd742,	// (0x0005d0bc) form_field_slider_pane_t3

0xd750,	// (0x0005d0ca) form_field_slider_pane_t4

0x547c,	// (0x00054df6) slider_form_pane_ParamLimits

0x547c,	// (0x00054df6) slider_form_pane

0x283d,	// (0x000521b7) control_abbreviations

0x283d,	// (0x000521b7) control_conventions

0x283d,	// (0x000521b7) control_definitions

0x283d,	// (0x000521b7) format_table_attribute

0x5c4b,	// (0x000555c5) bg_popup_preview_window_pane_g9

0x283d,	// (0x000521b7) format_table_data2

0x283d,	// (0x000521b7) format_table_data3

0x283d,	// (0x000521b7) format_table_data_example

0x0008,

0x283d,	// (0x000521b7) intro_purpose

0xf8ee,	// (0x0005f268) bg_popup_preview_window_pane_g

0x283d,	// (0x000521b7) texts_category

0x283d,	// (0x000521b7) texts_graphics

0x43e5,	// (0x00053d5f) text_digital

0x43f4,	// (0x00053d6e) text_primary

0x4403,	// (0x00053d7d) text_primary_small

0x4412,	// (0x00053d8c) text_secondary

0x4421,	// (0x00053d9b) text_title

0x6361,	// (0x00055cdb) bg_passive_tab_pane_g1_cp3_srt

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp3_srt

0x636a,	// (0x00055ce4) bg_passive_tab_pane_g3_cp3_srt

0x2b98,	// (0x00052512) bg_active_tab_pane_cp3_srt_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp3_srt

0x6373,	// (0x00055ced) tabs_4_active_pane_srt_g1

0xdaed,	// (0x0005d467) tabs_4_active_pane_srt_t1_ParamLimits

0xdaed,	// (0x0005d467) tabs_4_active_pane_srt_t1

0x6361,	// (0x00055cdb) bg_active_tab_pane_g1_cp3_copy1

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp3_copy1

0x636a,	// (0x00055ce4) bg_active_tab_pane_g3_cp3_copy1

0x291d,	// (0x00052297) tabs_2_long_active_pane_srt_ParamLimits

0x291d,	// (0x00052297) tabs_2_long_active_pane_srt

0x291d,	// (0x00052297) tabs_2_long_passive_pane_srt_ParamLimits

0x291d,	// (0x00052297) tabs_2_long_passive_pane_srt

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp4_srt_ParamLimits

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp4_srt

0x608f,	// (0x00055a09) bg_passive_tab_pane_g1_cp4_srt

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp4_srt

0x6098,	// (0x00055a12) bg_passive_tab_pane_g3_cp4_srt

0x291d,	// (0x00052297) bg_active_tab_pane_cp4_srt_ParamLimits

0x291d,	// (0x00052297) bg_active_tab_pane_cp4_srt

0xd917,	// (0x0005d291) tabs_2_long_active_pane_srt_t1_ParamLimits

0xd917,	// (0x0005d291) tabs_2_long_active_pane_srt_t1

0x608f,	// (0x00055a09) bg_active_tab_pane_g1_cp4_srt

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp4_srt

0x6098,	// (0x00055a12) bg_active_tab_pane_g3_cp4_srt

0x2b98,	// (0x00052512) tabs_3_long_active_pane_srt_ParamLimits

0x2b98,	// (0x00052512) tabs_3_long_active_pane_srt

0x2b98,	// (0x00052512) tabs_3_long_passive_pane_cp_srt_ParamLimits

0x2b98,	// (0x00052512) tabs_3_long_passive_pane_cp_srt

0x2b98,	// (0x00052512) tabs_3_long_passive_pane_srt_ParamLimits

0x2b98,	// (0x00052512) tabs_3_long_passive_pane_srt

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp5_srt_ParamLimits

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp5_srt

0x4113,	// (0x00053a8d) bg_passive_tab_pane_g1_cp5_srt

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp5_srt

0x411c,	// (0x00053a96) bg_passive_tab_pane_g3_cp5_srt

0x291d,	// (0x00052297) bg_active_tab_pane_cp5_srt_ParamLimits

0x291d,	// (0x00052297) bg_active_tab_pane_cp5_srt

0xd901,	// (0x0005d27b) tabs_3_long_active_pane_srt_t1_ParamLimits

0xd901,	// (0x0005d27b) tabs_3_long_active_pane_srt_t1

0x4113,	// (0x00053a8d) bg_active_tab_pane_g1_cp5_srt

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp5_srt

0x411c,	// (0x00053a96) bg_active_tab_pane_g3_cp5_srt

0x606f,	// (0x000559e9) navi_text_pane_srt_t1

0x6067,	// (0x000559e1) navi_icon_pane_srt_g1

0x45e8,	// (0x00053f62) midp_editing_number_pane_srt

0x4430,	// (0x00053daa) midp_ticker_pane_srt

0x45f0,	// (0x00053f6a) midp_ticker_pane_srt_g1

0x45f8,	// (0x00053f72) midp_ticker_pane_srt_g2

0x0001,

0xf77d,	// (0x0005f0f7) midp_ticker_pane_srt_g

0x4600,	// (0x00053f7a) midp_ticker_pane_srt_t1

0x6058,	// (0x000559d2) midp_editing_number_pane_t1_copy1

0x4770,	// (0x000540ea) listscroll_midp_pane

0x4770,	// (0x000540ea) midp_form_pane

0x449a,	// (0x00053e14) midp_info_popup_window_ParamLimits

0x449a,	// (0x00053e14) midp_info_popup_window

0x388e,	// (0x00053208) bg_popup_sub_pane_cp50_ParamLimits

0x388e,	// (0x00053208) bg_popup_sub_pane_cp50

0x5156,	// (0x00054ad0) listscroll_midp_info_pane_ParamLimits

0x5156,	// (0x00054ad0) listscroll_midp_info_pane

0x513e,	// (0x00054ab8) listscroll_form_midp_pane_ParamLimits

0x513e,	// (0x00054ab8) listscroll_form_midp_pane

0x514a,	// (0x00054ac4) scroll_bar_cp050

0xd736,	// (0x0005d0b0) list_midp_pane

0x6e3b,	// (0x000567b5) signal_pane_g2_cp

0x5058,	// (0x000549d2) listscroll_midp_info_pane_t1_ParamLimits

0x5058,	// (0x000549d2) listscroll_midp_info_pane_t1

0x5070,	// (0x000549ea) listscroll_midp_info_pane_t2_ParamLimits

0x5070,	// (0x000549ea) listscroll_midp_info_pane_t2

0x50ae,	// (0x00054a28) listscroll_midp_info_pane_t3_ParamLimits

0x50ae,	// (0x00054a28) listscroll_midp_info_pane_t3

0x50e8,	// (0x00054a62) listscroll_midp_info_pane_t4_ParamLimits

0x50e8,	// (0x00054a62) listscroll_midp_info_pane_t4

0x0003,

0xf829,	// (0x0005f1a3) listscroll_midp_info_pane_t_ParamLimits

0xf829,	// (0x0005f1a3) listscroll_midp_info_pane_t

0x3952,	// (0x000532cc) scroll_pane_cp21

0x4ff6,	// (0x00054970) form_midp_field_choice_group_pane

0x4fff,	// (0x00054979) form_midp_field_text_pane

0x503e,	// (0x000549b8) form_midp_field_time_pane

0x5046,	// (0x000549c0) form_midp_gauge_slider_pane

0x504f,	// (0x000549c9) form_midp_gauge_wait_pane

0x283d,	// (0x000521b7) form_midp_image_pane

0xc389,	// (0x0005bd03) list_single_midp_pane_ParamLimits

0xc389,	// (0x0005bd03) list_single_midp_pane

0xd714,	// (0x0005d08e) form_midp_field_text_pane_t1

0x4d78,	// (0x000546f2) input_focus_pane_cp050

0x4fe5,	// (0x0005495f) list_midp_form_text_pane

0x4f7d,	// (0x000548f7) form_midp_field_choice_group_pane_t1

0x4f8b,	// (0x00054905) input_focus_pane_cp051

0x4f9f,	// (0x00054919) list_midp_choice_pane

0x283d,	// (0x000521b7) status_idle_pane

0x4f61,	// (0x000548db) form_midp_field_time_pane_t1

0x2833,	// (0x000521ad) wait_anim_pane_g2_copy1

0x4f6f,	// (0x000548e9) form_midp_field_time_pane_t2

0x0001,

0x4548,	// (0x00053ec2) aid_navinavi_width_2_pane

0xf824,	// (0x0005f19e) form_midp_field_time_pane_t

0x283d,	// (0x000521b7) input_focus_pane_cp052

0x283d,	// (0x000521b7) bg_input_focus_pane_cp040

0x4f21,	// (0x0005489b) form_midp_gauge_slider_pane_t1

0x4f2f,	// (0x000548a9) form_midp_gauge_slider_pane_t2

0xd6f8,	// (0x0005d072) form_midp_gauge_slider_pane_t3

0xd706,	// (0x0005d080) form_midp_gauge_slider_pane_t4

0x0003,

0xf81b,	// (0x0005f195) form_midp_gauge_slider_pane_t

0x4f59,	// (0x000548d3) form_midp_slider_pane

0x291d,	// (0x00052297) bg_input_focus_pane_cp041_ParamLimits

0x291d,	// (0x00052297) bg_input_focus_pane_cp041

0x4eee,	// (0x00054868) form_midp_gauge_wait_pane_t1_ParamLimits

0x4eee,	// (0x00054868) form_midp_gauge_wait_pane_t1

0x4f00,	// (0x0005487a) form_midp_gauge_wait_pane_t2_ParamLimits

0x4f00,	// (0x0005487a) form_midp_gauge_wait_pane_t2

0x0001,

0xf816,	// (0x0005f190) form_midp_gauge_wait_pane_t_ParamLimits

0xf816,	// (0x0005f190) form_midp_gauge_wait_pane_t

0x4f12,	// (0x0005488c) form_midp_wait_pane_ParamLimits

0x4f12,	// (0x0005488c) form_midp_wait_pane

0x4eb8,	// (0x00054832) form_midp_image_pane_g1

0x4ec1,	// (0x0005483b) form_midp_image_pane_t1

0x4ed0,	// (0x0005484a) form_midp_image_pane_t2

0x4edf,	// (0x00054859) form_midp_image_pane_t3

0x0002,

0xf80f,	// (0x0005f189) form_midp_image_pane_t

0x4eaf,	// (0x00054829) list_single_midp_pane_g1

0x15b8,	// (0x00050f32) list_single_midp_pane_t1

0xd6e3,	// (0x0005d05d) list_midp_form_item_pane_ParamLimits

0xd6e3,	// (0x0005d05d) list_midp_form_item_pane

0x44f0,	// (0x00053e6a) list_midp_form_item_pane_t1

0x44ff,	// (0x00053e79) midp_ticker_pane_g1

0x450b,	// (0x00053e85) midp_ticker_pane_g2

0x0001,

0xf763,	// (0x0005f0dd) midp_ticker_pane_g

0x4517,	// (0x00053e91) midp_ticker_pane_t1

0x62a9,	// (0x00055c23) midp_editing_number_pane_t1

0x6287,	// (0x00055c01) midp_editing_number_pane

0x6296,	// (0x00055c10) midp_ticker_pane

0x6048,	// (0x000559c2) ai_message_heading_pane

0x283d,	// (0x000521b7) bg_popup_window_pane_cp14

0x6050,	// (0x000559ca) listscroll_ai_message_pane

0x5fd2,	// (0x0005594c) ai_message_heading_pane_g1_ParamLimits

0x5fd2,	// (0x0005594c) ai_message_heading_pane_g1

0x5fde,	// (0x00055958) ai_message_heading_pane_g2_ParamLimits

0x5fde,	// (0x00055958) ai_message_heading_pane_g2

0x5fea,	// (0x00055964) ai_message_heading_pane_g3_ParamLimits

0x5fea,	// (0x00055964) ai_message_heading_pane_g3

0x5ff6,	// (0x00055970) ai_message_heading_pane_g4_ParamLimits

0x5ff6,	// (0x00055970) ai_message_heading_pane_g4

0x0003,

0xf950,	// (0x0005f2ca) ai_message_heading_pane_g_ParamLimits

0xf950,	// (0x0005f2ca) ai_message_heading_pane_g

0x6002,	// (0x0005597c) ai_message_heading_pane_t1_ParamLimits

0x6002,	// (0x0005597c) ai_message_heading_pane_t1

0x601c,	// (0x00055996) ai_message_heading_pane_t2_ParamLimits

0x601c,	// (0x00055996) ai_message_heading_pane_t2

0x0001,

0xf959,	// (0x0005f2d3) ai_message_heading_pane_t_ParamLimits

0xf959,	// (0x0005f2d3) ai_message_heading_pane_t

0x602e,	// (0x000559a8) bg_popup_heading_pane_cp1_ParamLimits

0x602e,	// (0x000559a8) bg_popup_heading_pane_cp1

0x5fc0,	// (0x0005593a) list_ai_message_pane_ParamLimits

0x5fc0,	// (0x0005593a) list_ai_message_pane

0x3952,	// (0x000532cc) scroll_pane_cp10

0x5f5c,	// (0x000558d6) list_ai_message_pane_g1

0x5f64,	// (0x000558de) list_ai_message_pane_g2

0x0001,

0xf92d,	// (0x0005f2a7) list_ai_message_pane_g

0x5f6c,	// (0x000558e6) list_ai_message_pane_t1_ParamLimits

0x5f6c,	// (0x000558e6) list_ai_message_pane_t1

0x5f81,	// (0x000558fb) list_ai_message_pane_t2_ParamLimits

0x5f81,	// (0x000558fb) list_ai_message_pane_t2

0x5f96,	// (0x00055910) list_ai_message_pane_t3_ParamLimits

0x5f96,	// (0x00055910) list_ai_message_pane_t3

0x5fab,	// (0x00055925) list_ai_message_pane_t4_ParamLimits

0x5fab,	// (0x00055925) list_ai_message_pane_t4

0x0003,

0xf932,	// (0x0005f2ac) list_ai_message_pane_t_ParamLimits

0xf932,	// (0x0005f2ac) list_ai_message_pane_t

0xd8e0,	// (0x0005d25a) cell_ai_soft_ind_pane_ParamLimits

0xd8e0,	// (0x0005d25a) cell_ai_soft_ind_pane

0x4529,	// (0x00053ea3) cell_ai_soft_ind_pane_g1_ParamLimits

0x4529,	// (0x00053ea3) cell_ai_soft_ind_pane_g1

0x283d,	// (0x000521b7) grid_highlight_cp1

0x4536,	// (0x00053eb0) text_secondary_cp56_ParamLimits

0x4536,	// (0x00053eb0) text_secondary_cp56

0x5f1c,	// (0x00055896) example_general_pane_ParamLimits

0x5f1c,	// (0x00055896) example_general_pane

0x5f28,	// (0x000558a2) example_parent_pane_g1_ParamLimits

0x5f28,	// (0x000558a2) example_parent_pane_g1

0x5f34,	// (0x000558ae) example_parent_pane_t1_ParamLimits

0x5f34,	// (0x000558ae) example_parent_pane_t1

0xc033,	// (0x0005b9ad) popup_preview_text_window_ParamLimits

0xc033,	// (0x0005b9ad) popup_preview_text_window

0x4361,	// (0x00053cdb) list_single_pane_cp2_g4

0x2c4e,	// (0x000525c8) bg_popup_preview_window_pane_ParamLimits

0x2c4e,	// (0x000525c8) bg_popup_preview_window_pane

0x5c53,	// (0x000555cd) popup_preview_text_window_t1_ParamLimits

0x5c53,	// (0x000555cd) popup_preview_text_window_t1

0x5c71,	// (0x000555eb) popup_preview_text_window_t2_ParamLimits

0x5c71,	// (0x000555eb) popup_preview_text_window_t2

0x5cba,	// (0x00055634) popup_preview_text_window_t3_ParamLimits

0x5cba,	// (0x00055634) popup_preview_text_window_t3

0x5cff,	// (0x00055679) popup_preview_text_window_t4_ParamLimits

0x5cff,	// (0x00055679) popup_preview_text_window_t4

0x0004,

0xf901,	// (0x0005f27b) popup_preview_text_window_t_ParamLimits

0xf901,	// (0x0005f27b) popup_preview_text_window_t

0x5d7d,	// (0x000556f7) scroll_pane_cp11

0x4c80,	// (0x000545fa) bg_popup_preview_window_pane_g1

0x5c13,	// (0x0005558d) bg_popup_preview_window_pane_g2

0x5c1b,	// (0x00055595) bg_popup_preview_window_pane_g3

0x5c23,	// (0x0005559d) bg_popup_preview_window_pane_g4

0x5c2b,	// (0x000555a5) bg_popup_preview_window_pane_g5

0x5c33,	// (0x000555ad) bg_popup_preview_window_pane_g6

0x5c3b,	// (0x000555b5) bg_popup_preview_window_pane_g7

0x5c43,	// (0x000555bd) bg_popup_preview_window_pane_g8

0xf2c0,	// (0x0005ec3a) aid_popup_width_pane

0xbfaf,	// (0x0005b929) popup_midp_note_alarm_window_ParamLimits

0xbfaf,	// (0x0005b929) popup_midp_note_alarm_window

0x37ca,	// (0x00053144) data_form_pane_ParamLimits

0xb941,	// (0x0005b2bb) form_field_data_pane_g1

0xb94b,	// (0x0005b2c5) form_field_data_pane_t1_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_ParamLimits

0x37e4,	// (0x0005315e) data_form_wide_pane_ParamLimits

0x066a,	// (0x0004ffe4) form_field_data_wide_pane_g1

0x0676,	// (0x0004fff0) form_field_data_wide_pane_t1_ParamLimits

0x353b,	// (0x00052eb5) input_focus_pane_cp6_ParamLimits

0xce73,	// (0x0005c7ed) input_popup_find_pane_g1_ParamLimits

0xce73,	// (0x0005c7ed) input_popup_find_pane_g1

0x08ee,	// (0x00050268) aid_navi_side_left_pane

0x0903,	// (0x0005027d) aid_navi_side_right_pane

0x563b,	// (0x00054fb5) bg_popup_window_pane_cp30_ParamLimits

0x563b,	// (0x00054fb5) bg_popup_window_pane_cp30

0x56b5,	// (0x0005502f) popup_midp_note_alarm_window_g1_ParamLimits

0x56b5,	// (0x0005502f) popup_midp_note_alarm_window_g1

0x56e5,	// (0x0005505f) popup_midp_note_alarm_window_t1_ParamLimits

0x56e5,	// (0x0005505f) popup_midp_note_alarm_window_t1

0x5786,	// (0x00055100) popup_midp_note_alarm_window_t2_ParamLimits

0x5786,	// (0x00055100) popup_midp_note_alarm_window_t2

0x5834,	// (0x000551ae) popup_midp_note_alarm_window_t3_ParamLimits

0x5834,	// (0x000551ae) popup_midp_note_alarm_window_t3

0x5866,	// (0x000551e0) popup_midp_note_alarm_window_t4_ParamLimits

0x5866,	// (0x000551e0) popup_midp_note_alarm_window_t4

0x588c,	// (0x00055206) popup_midp_note_alarm_window_t5_ParamLimits

0x588c,	// (0x00055206) popup_midp_note_alarm_window_t5

0x000a,

0xf89e,	// (0x0005f218) popup_midp_note_alarm_window_t_ParamLimits

0xf89e,	// (0x0005f218) popup_midp_note_alarm_window_t

0x5938,	// (0x000552b2) wait_bar_pane_cp1_ParamLimits

0x5938,	// (0x000552b2) wait_bar_pane_cp1

0x283d,	// (0x000521b7) wait_anim_pane_copy1

0x283d,	// (0x000521b7) wait_border_pane_copy1

0x52ff,	// (0x00054c79) wait_border_pane_g1_copy1

0x0690,	// (0x0005000a) form_field_popup_pane_g1

0xb965,	// (0x0005b2df) form_field_popup_pane_t1_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_cp7_ParamLimits

0x3810,	// (0x0005318a) list_form_pane_ParamLimits

0x06b0,	// (0x0005002a) form_field_popup_wide_pane_g1

0x06b8,	// (0x00050032) form_field_popup_wide_pane_t1_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_cp8_ParamLimits

0x381c,	// (0x00053196) list_form_wide_pane_ParamLimits

0x63ed,	// (0x00055d67) aid_size_cell_graphic_pane

0xb9e4,	// (0x0005b35e) data_form_pane_t1_ParamLimits

0xc4fb,	// (0x0005be75) data_form_wide_pane_t1_ParamLimits

0xd2d4,	// (0x0005cc4e) bg_status_flat_pane

0xb423,	// (0x0005ad9d) title_pane_t1_ParamLimits

0x28e5,	// (0x0005225f) title_pane_t2_ParamLimits

0x290b,	// (0x00052285) title_pane_t3_ParamLimits

0xf55d,	// (0x0005eed7) title_pane_t_ParamLimits

0x3dcf,	// (0x00053749) level_1_signal_ParamLimits

0x3ddc,	// (0x00053756) level_2_signal_ParamLimits

0x3de9,	// (0x00053763) level_3_signal_ParamLimits

0x3df6,	// (0x00053770) level_4_signal_ParamLimits

0x3e03,	// (0x0005377d) level_5_signal_ParamLimits

0x3e10,	// (0x0005378a) level_6_signal_ParamLimits

0x3e1d,	// (0x00053797) level_7_signal_ParamLimits

0x3dcf,	// (0x00053749) level_1_battery_ParamLimits

0x3ddc,	// (0x00053756) level_2_battery_ParamLimits

0x3de9,	// (0x00053763) level_3_battery_ParamLimits

0x3df6,	// (0x00053770) level_4_battery_ParamLimits

0x3e03,	// (0x0005377d) level_5_battery_ParamLimits

0x3e10,	// (0x0005378a) level_6_battery_ParamLimits

0x3e1d,	// (0x00053797) level_7_battery_ParamLimits

0x5540,	// (0x00054eba) bg_status_flat_pane_g1

0x5548,	// (0x00054ec2) bg_status_flat_pane_g2

0x5550,	// (0x00054eca) bg_status_flat_pane_g3

0x5558,	// (0x00054ed2) bg_status_flat_pane_g4

0x5560,	// (0x00054eda) bg_status_flat_pane_g5

0x5568,	// (0x00054ee2) bg_status_flat_pane_g6

0x5570,	// (0x00054eea) bg_status_flat_pane_g7

0xcb64,	// (0x0005c4de) tabs_3_active_pane_t1_ParamLimits

0xcb64,	// (0x0005c4de) tabs_3_passive_pane_t1_ParamLimits

0xcb7e,	// (0x0005c4f8) tabs_4_active_pane_t1_ParamLimits

0xcb7e,	// (0x0005c4f8) tabs_4_1_passive_pane_t1_ParamLimits

0xce89,	// (0x0005c803) tabs_2_active_pane_t1_ParamLimits

0xce89,	// (0x0005c803) tabs_2_passive_pane_t1_ParamLimits

0x291d,	// (0x00052297) bg_active_tab_pane_cp4_ParamLimits

0xce9b,	// (0x0005c815) tabs_2_long_active_pane_t1_ParamLimits

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp4_ParamLimits

0x1505,	// (0x00050e7f) list_single_midp_graphic_pane_t1_ParamLimits

0x291d,	// (0x00052297) bg_active_tab_pane_cp5_ParamLimits

0xceae,	// (0x0005c828) tabs_3_long_active_pane_t1_ParamLimits

0x4770,	// (0x000540ea) bg_passive_tab_pane_cp5_ParamLimits

0x1505,	// (0x00050e7f) list_single_midp_graphic_pane_t1

0xd2d4,	// (0x0005cc4e) bg_status_flat_pane_ParamLimits

0x4906,	// (0x00054280) indicator_pane_cp2_ParamLimits

0x4906,	// (0x00054280) indicator_pane_cp2

0xd44c,	// (0x0005cdc6) navi_pane_srt_ParamLimits

0xd44c,	// (0x0005cdc6) navi_pane_srt

0x4a5e,	// (0x000543d8) popup_clock_digital_analogue_window_cp1

0x29fa,	// (0x00052374) indicator_pane_t1

0x4430,	// (0x00053daa) copy_highlight_pane

0x4430,	// (0x00053daa) cursor_graphics_pane

0x4430,	// (0x00053daa) graphic_within_text_pane

0x4430,	// (0x00053daa) link_highlight_pane

0x5d40,	// (0x000556ba) popup_preview_text_window_t5_ParamLimits

0x5d40,	// (0x000556ba) popup_preview_text_window_t5

0x4550,	// (0x00053eca) cursor_digital_pane

0x4550,	// (0x00053eca) cursor_primary_pane

0x4561,	// (0x00053edb) cursor_primary_small_pane

0x4569,	// (0x00053ee3) cursor_secondary_pane

0x4571,	// (0x00053eeb) cursor_title_pane

0x4550,	// (0x00053eca) link_highlight_digital_pane

0x4558,	// (0x00053ed2) link_highlight_primary_pane

0x4561,	// (0x00053edb) link_highlight_primary_small_pane

0x4569,	// (0x00053ee3) link_highlight_secondary_pane

0x4571,	// (0x00053eeb) link_highlight_title_pane

0x4550,	// (0x00053eca) copy_highlight_digital_pane

0x4550,	// (0x00053eca) copy_highlight_primary_pane

0x4561,	// (0x00053edb) copy_highlight_primary_small_pane

0x4569,	// (0x00053ee3) copy_highlight_secondary_pane

0x4571,	// (0x00053eeb) copy_highlight_title_pane

0x4569,	// (0x00053ee3) graphic_text_digital_pane

0x55de,	// (0x00054f58) graphic_text_primary_pane

0x55e7,	// (0x00054f61) graphic_text_primary_small_pane

0x4561,	// (0x00053edb) graphic_text_secondary_pane

0x4550,	// (0x00053eca) graphic_text_title_pane

0xd1ab,	// (0x0005cb25) cursor_primary_pane_g1

0x55d0,	// (0x00054f4a) cursor_text_primary_t1

0xd772,	// (0x0005d0ec) cursor_primary_small_pane_g1

0x55c2,	// (0x00054f3c) cursor_text_primary_small_t1

0xd768,	// (0x0005d0e2) cursor_primary_small_pane_g1_copy1

0x55aa,	// (0x00054f24) cursor_text_primary_small_t1_copy1

0x5588,	// (0x00054f02) cursor_text_title_t1

0xd75e,	// (0x0005d0d8) cursor_title_pane_g1

0xd1ab,	// (0x0005cb25) cursor_digital_pane_g1

0x4583,	// (0x00053efd) cursor_text_digital_t1

0x45a8,	// (0x00053f22) link_highlight_primary_pane_g1

0x5531,	// (0x00054eab) link_highlight_primary_pane_t1

0x4591,	// (0x00053f0b) link_highlight_primary_small_pane_g1

0x4599,	// (0x00053f13) link_highlight_primary_small_pane_t1

0x45a8,	// (0x00053f22) link_highlight_secondary_pane_g1

0x45b0,	// (0x00053f2a) link_highlight_secondary_pane_t1

0x54a5,	// (0x00054e1f) link_highlight_title_pane_g1

0x54ad,	// (0x00054e27) link_highlight_title_pane_t1

0x548e,	// (0x00054e08) link_highlight_digital_pane_g1

0x5496,	// (0x00054e10) link_highlight_digital_pane_t1

0x5344,	// (0x00054cbe) copy_highlight_primary_pane_g1

0x534c,	// (0x00054cc6) copy_highlight_primary_pane_t1

0x531e,	// (0x00054c98) copy_highlight_primary_small_pane_g1

0x5335,	// (0x00054caf) copy_highlight_primary_small_pane_t1

0x45bf,	// (0x00053f39) copy_highlight_secondary_pane_g1

0x45c7,	// (0x00053f41) copy_highlight_secondary_pane_t1

0x531e,	// (0x00054c98) copy_highlight_title_pane_g1

0x5326,	// (0x00054ca0) copy_highlight_title_pane_t1

0x5344,	// (0x00054cbe) copy_highlight_digital_pane_g1

0x65b7,	// (0x00055f31) copy_highlight_digital_pane_t1

0x650b,	// (0x00055e85) graphic_text_primary_pane_g1

0x659b,	// (0x00055f15) graphic_text_primary_pane_t1

0x65a9,	// (0x00055f23) graphic_text_primary_pane_t2

0x0001,

0xf9cd,	// (0x0005f347) graphic_text_primary_pane_t

0x6577,	// (0x00055ef1) graphic_text_primary_small_pane_g1

0x657f,	// (0x00055ef9) graphic_text_primary_small_pane_t1

0x658d,	// (0x00055f07) graphic_text_primary_small_pane_t2

0x0001,

0xf9c8,	// (0x0005f342) graphic_text_primary_small_pane_t

0x6553,	// (0x00055ecd) graphic_text_secondary_pane_g1

0x655b,	// (0x00055ed5) graphic_text_secondary_pane_t1

0x6569,	// (0x00055ee3) graphic_text_secondary_pane_t2

0x0001,

0xf9c3,	// (0x0005f33d) graphic_text_secondary_pane_t

0x652f,	// (0x00055ea9) graphic_text_title_pane_g1

0x6537,	// (0x00055eb1) graphic_text_title_pane_t1

0x6545,	// (0x00055ebf) graphic_text_title_pane_t2

0x0001,

0xf9be,	// (0x0005f338) graphic_text_title_pane_t

0x650b,	// (0x00055e85) graphic_text_digital_pane_g1

0x6513,	// (0x00055e8d) graphic_text_digital_pane_t1

0x6521,	// (0x00055e9b) graphic_text_digital_pane_t2

0x0001,

0xf9b9,	// (0x0005f333) graphic_text_digital_pane_t

0x291d,	// (0x00052297) navi_icon_pane_srt_ParamLimits

0x291d,	// (0x00052297) navi_icon_pane_srt

0x283d,	// (0x000521b7) navi_midp_pane_srt

0x283d,	// (0x000521b7) navi_navi_pane_srt

0x291d,	// (0x00052297) navi_text_pane_srt_ParamLimits

0x291d,	// (0x00052297) navi_text_pane_srt

0x64d6,	// (0x00055e50) navi_navi_icon_text_pane_srt

0x64de,	// (0x00055e58) navi_navi_pane_srt_g1_ParamLimits

0x64de,	// (0x00055e58) navi_navi_pane_srt_g1

0x64f0,	// (0x00055e6a) navi_navi_pane_srt_g2_ParamLimits

0x64f0,	// (0x00055e6a) navi_navi_pane_srt_g2

0x0001,

0xf9b4,	// (0x0005f32e) navi_navi_pane_srt_g_ParamLimits

0xf9b4,	// (0x0005f32e) navi_navi_pane_srt_g

0x6502,	// (0x00055e7c) navi_navi_tabs_pane_srt

0x64d6,	// (0x00055e50) navi_navi_text_pane_srt

0x64d6,	// (0x00055e50) navi_navi_volume_pane_srt

0x64c7,	// (0x00055e41) navi_navi_text_pane_srt_t1

0x195a,	// (0x000512d4) navi_navi_volume_pane_srt_g1

0x1962,	// (0x000512dc) volume_small_pane_srt_ParamLimits

0x1962,	// (0x000512dc) volume_small_pane_srt

0x0c58,	// (0x000505d2) volume_small_pane_srt_g1_ParamLimits

0x0c58,	// (0x000505d2) volume_small_pane_srt_g1

0x0c68,	// (0x000505e2) volume_small_pane_srt_g2_ParamLimits

0x0c68,	// (0x000505e2) volume_small_pane_srt_g2

0x0c79,	// (0x000505f3) volume_small_pane_srt_g3_ParamLimits

0x0c79,	// (0x000505f3) volume_small_pane_srt_g3

0x0c8a,	// (0x00050604) volume_small_pane_srt_g4_ParamLimits

0x0c8a,	// (0x00050604) volume_small_pane_srt_g4

0x0c9b,	// (0x00050615) volume_small_pane_srt_g5_ParamLimits

0x0c9b,	// (0x00050615) volume_small_pane_srt_g5

0x0cac,	// (0x00050626) volume_small_pane_srt_g6_ParamLimits

0x0cac,	// (0x00050626) volume_small_pane_srt_g6

0x0cbd,	// (0x00050637) volume_small_pane_srt_g7_ParamLimits

0x0cbd,	// (0x00050637) volume_small_pane_srt_g7

0x0cce,	// (0x00050648) volume_small_pane_srt_g8_ParamLimits

0x0cce,	// (0x00050648) volume_small_pane_srt_g8

0x0cdf,	// (0x00050659) volume_small_pane_srt_g9_ParamLimits

0x0cdf,	// (0x00050659) volume_small_pane_srt_g9

0x0cf0,	// (0x0005066a) volume_small_pane_srt_g10_ParamLimits

0x0cf0,	// (0x0005066a) volume_small_pane_srt_g10

0x0009,

0xf768,	// (0x0005f0e2) volume_small_pane_srt_g_ParamLimits

0xf768,	// (0x0005f0e2) volume_small_pane_srt_g

0x3338,	// (0x00052cb2) query_popup_data_pane_cp2

0x64ad,	// (0x00055e27) navi_navi_icon_text_pane_srt_t1_ParamLimits

0x64ad,	// (0x00055e27) navi_navi_icon_text_pane_srt_t1

0x55de,	// (0x00054f58) navi_tabs_2_long_pane_srt

0x55de,	// (0x00054f58) navi_tabs_2_pane_srt

0x55de,	// (0x00054f58) navi_tabs_3_long_pane_srt

0x55de,	// (0x00054f58) navi_tabs_3_pane_srt

0x55de,	// (0x00054f58) navi_tabs_4_pane_srt

0x193a,	// (0x000512b4) tabs_2_active_pane_srt_ParamLimits

0x193a,	// (0x000512b4) tabs_2_active_pane_srt

0x194a,	// (0x000512c4) tabs_2_passive_pane_srt_ParamLimits

0x194a,	// (0x000512c4) tabs_2_passive_pane_srt

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp1_srt_ParamLimits

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp1_srt

0x6479,	// (0x00055df3) bg_passive_tab_pane_g1_cp1_srt

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp1_srt

0x6482,	// (0x00055dfc) bg_passive_tab_pane_g3_cp1_srt

0x2b98,	// (0x00052512) bg_active_tab_pane_cp1_srt_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp1_srt

0x648b,	// (0x00055e05) tabs_2_active_pane_srt_g1

0xdb6a,	// (0x0005d4e4) tabs_2_active_pane_srt_t1_ParamLimits

0xdb6a,	// (0x0005d4e4) tabs_2_active_pane_srt_t1

0x6479,	// (0x00055df3) bg_active_tab_pane_g1_cp1_srt

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp1_srt

0x6482,	// (0x00055dfc) bg_active_tab_pane_g3_cp1_srt

0x1907,	// (0x00051281) tabs_3_active_pane_srt_ParamLimits

0x1907,	// (0x00051281) tabs_3_active_pane_srt

0x1918,	// (0x00051292) tabs_3_passive_pane_cp_srt_ParamLimits

0x1918,	// (0x00051292) tabs_3_passive_pane_cp_srt

0x1929,	// (0x000512a3) tabs_3_passive_pane_srt_ParamLimits

0x1929,	// (0x000512a3) tabs_3_passive_pane_srt

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp2_srt_ParamLimits

0x4d78,	// (0x000546f2) bg_passive_tab_pane_cp2_srt

0x45d6,	// (0x00053f50) bg_passive_tab_pane_g1_cp2_srt

0x4089,	// (0x00053a03) bg_passive_tab_pane_g2_cp2_srt

0x45df,	// (0x00053f59) bg_passive_tab_pane_g3_cp2_srt

0x2b98,	// (0x00052512) bg_active_tab_pane_cp2_srt_ParamLimits

0x2b98,	// (0x00052512) bg_active_tab_pane_cp2_srt

0x645f,	// (0x00055dd9) tabs_3_active_pane_srt_g1

0xdb54,	// (0x0005d4ce) tabs_3_active_pane_srt_t1_ParamLimits

0xdb54,	// (0x0005d4ce) tabs_3_active_pane_srt_t1

0x45d6,	// (0x00053f50) bg_active_tab_pane_g1_cp2_srt

0x4089,	// (0x00053a03) bg_active_tab_pane_g2_cp2_srt

0x45df,	// (0x00053f59) bg_active_tab_pane_g3_cp2_srt

0x18bf,	// (0x00051239) tabs_4_active_pane_srt_ParamLimits

0x18bf,	// (0x00051239) tabs_4_active_pane_srt

0x18d1,	// (0x0005124b) tabs_4_passive_pane_cp2_srt_ParamLimits

0x18d1,	// (0x0005124b) tabs_4_passive_pane_cp2_srt

0x0e51,	// (0x000507cb) aid_size_cell_toolbar

0x6100,	// (0x00055a7a) main_idle_act_pane_ParamLimits

0x1012,	// (0x0005098c) popup_large_graphic_colour_window_ParamLimits

0xc2bf,	// (0x0005bc39) popup_toolbar_window_ParamLimits

0xc2bf,	// (0x0005bc39) popup_toolbar_window

0x62b8,	// (0x00055c32) list_single_graphic_2heading_pane_ParamLimits

0x62b8,	// (0x00055c32) list_single_graphic_2heading_pane

0x3b82,	// (0x000534fc) aid_size_cell_apps_grid_lsc_pane

0x3b94,	// (0x0005350e) aid_size_cell_apps_grid_prt_pane

0x4770,	// (0x000540ea) bg_wml_button_pane_cp1_ParamLimits

0x4770,	// (0x000540ea) bg_wml_button_pane_cp1

0xd714,	// (0x0005d08e) form_midp_field_text_pane_t1_ParamLimits

0x4d78,	// (0x000546f2) input_focus_pane_cp050_ParamLimits

0x4fe5,	// (0x0005495f) list_midp_form_text_pane_ParamLimits

0x4f8b,	// (0x00054905) input_focus_pane_cp051_ParamLimits

0x4f9f,	// (0x00054919) list_midp_choice_pane_ParamLimits

0xd6b1,	// (0x0005d02b) list_single_2graphic_pane_cp3_ParamLimits

0xd6b1,	// (0x0005d02b) list_single_2graphic_pane_cp3

0xd6c4,	// (0x0005d03e) list_single_midp_graphic_pane_ParamLimits

0xd6c4,	// (0x0005d03e) list_single_midp_graphic_pane

0xf2dc,	// (0x0005ec56) list_single_graphic_2heading_pane_g1_ParamLimits

0xf2dc,	// (0x0005ec56) list_single_graphic_2heading_pane_g1

0xf2e8,	// (0x0005ec62) list_single_graphic_2heading_pane_g4_ParamLimits

0xf2e8,	// (0x0005ec62) list_single_graphic_2heading_pane_g4

0xf2f4,	// (0x0005ec6e) list_single_graphic_2heading_pane_g5_ParamLimits

0xf2f4,	// (0x0005ec6e) list_single_graphic_2heading_pane_g5

0x0002,

0xf7bb,	// (0x0005f135) list_single_graphic_2heading_pane_g_ParamLimits

0xf7bb,	// (0x0005f135) list_single_graphic_2heading_pane_g

0xf300,	// (0x0005ec7a) list_single_graphic_2heading_pane_t1_ParamLimits

0xf300,	// (0x0005ec7a) list_single_graphic_2heading_pane_t1

0xf314,	// (0x0005ec8e) list_single_graphic_2heading_pane_t2_ParamLimits

0xf314,	// (0x0005ec8e) list_single_graphic_2heading_pane_t2

0xf330,	// (0x0005ecaa) list_single_graphic_2heading_pane_t3_ParamLimits

0xf330,	// (0x0005ecaa) list_single_graphic_2heading_pane_t3

0x0002,

0xf7c2,	// (0x0005f13c) list_single_graphic_2heading_pane_t_ParamLimits

0xf7c2,	// (0x0005f13c) list_single_graphic_2heading_pane_t

0x4bb2,	// (0x0005452c) bg_popup_sub_pane_cp2

0x4bdc,	// (0x00054556) grid_toobar_pane

0x1426,	// (0x00050da0) cell_toolbar_pane_ParamLimits

0x1426,	// (0x00050da0) cell_toolbar_pane

0x4c24,	// (0x0005459e) cell_toolbar_pane_g1_ParamLimits

0x4c24,	// (0x0005459e) cell_toolbar_pane_g1

0x4c38,	// (0x000545b2) cell_toolbar_pane_g2_ParamLimits

0x4c38,	// (0x000545b2) cell_toolbar_pane_g2

0x0001,

0xf7c9,	// (0x0005f143) cell_toolbar_pane_g_ParamLimits

0xf7c9,	// (0x0005f143) cell_toolbar_pane_g

0x4c5a,	// (0x000545d4) grid_highlight_pane_cp2_ParamLimits

0x4c5a,	// (0x000545d4) grid_highlight_pane_cp2

0x4c74,	// (0x000545ee) toolbar_button_pane

0x4c80,	// (0x000545fa) toolbar_button_pane_g1

0x4c88,	// (0x00054602) toolbar_button_pane_g2

0x4c90,	// (0x0005460a) toolbar_button_pane_g3

0x4c98,	// (0x00054612) toolbar_button_pane_g4

0x4ca0,	// (0x0005461a) toolbar_button_pane_g5

0x4ca8,	// (0x00054622) toolbar_button_pane_g6

0x4cb0,	// (0x0005462a) toolbar_button_pane_g7

0x4cb8,	// (0x00054632) toolbar_button_pane_g8

0x4cc0,	// (0x0005463a) toolbar_button_pane_g9

0x0009,

0xf7ce,	// (0x0005f148) toolbar_button_pane_g

0x1480,	// (0x00050dfa) list_single_2graphic_pane_g1_cp3_ParamLimits

0x1480,	// (0x00050dfa) list_single_2graphic_pane_g1_cp3

0xc317,	// (0x0005bc91) list_single_2graphic_pane_g2_cp3_ParamLimits

0xc317,	// (0x0005bc91) list_single_2graphic_pane_g2_cp3

0x149d,	// (0x00050e17) list_single_2graphic_pane_g3_cp3

0x14a5,	// (0x00050e1f) list_single_2graphic_pane_g4_cp3_ParamLimits

0x14a5,	// (0x00050e1f) list_single_2graphic_pane_g4_cp3

0x14b1,	// (0x00050e2b) list_single_2graphic_pane_t1_cp3_ParamLimits

0x14b1,	// (0x00050e2b) list_single_2graphic_pane_t1_cp3

0x14f9,	// (0x00050e73) list_single_midp_graphic_pane_g2_ParamLimits

0x14f9,	// (0x00050e73) list_single_midp_graphic_pane_g2

0xf2d4,	// (0x0005ec4e) aid_zoom_text_primary

0x0e59,	// (0x000507d3) aid_zoom_text_secondary

0x4693,	// (0x0005400d) status_small_pane_g7_ParamLimits

0x4693,	// (0x0005400d) status_small_pane_g7

0x46b6,	// (0x00054030) status_small_pane_t1_ParamLimits

0xb3ff,	// (0x0005ad79) title_pane_g2

0x0003,

0xf554,	// (0x0005eece) title_pane_g

0xcd34,	// (0x0005c6ae) aid_size_cell_colour_1_pane_ParamLimits

0xcd34,	// (0x0005c6ae) aid_size_cell_colour_1_pane

0xcd48,	// (0x0005c6c2) aid_size_cell_colour_2_pane_ParamLimits

0xcd48,	// (0x0005c6c2) aid_size_cell_colour_2_pane

0xcd5c,	// (0x0005c6d6) aid_size_cell_colour_3_pane_ParamLimits

0xcd5c,	// (0x0005c6d6) aid_size_cell_colour_3_pane

0xcd70,	// (0x0005c6ea) aid_size_cell_colour_4_pane_ParamLimits

0xcd70,	// (0x0005c6ea) aid_size_cell_colour_4_pane

0x082a,	// (0x000501a4) title_pane_stacon_g1_ParamLimits

0x082a,	// (0x000501a4) title_pane_stacon_g1

0x53a3,	// (0x00054d1d) popup_note_wait_window_g3_ParamLimits

0x53a3,	// (0x00054d1d) popup_note_wait_window_g3

0x543b,	// (0x00054db5) popup_note_wait_window_t5_ParamLimits

0x543b,	// (0x00054db5) popup_note_wait_window_t5

0x283d,	// (0x000521b7) main_feb_china_hwr_fs_writing_pane

0xbccd,	// (0x0005b647) popup_feb_china_hwr_fs_window_ParamLimits

0xbccd,	// (0x0005b647) popup_feb_china_hwr_fs_window

0xc328,	// (0x0005bca2) aid_size_cell_hwr_fs_ParamLimits

0xc328,	// (0x0005bca2) aid_size_cell_hwr_fs

0x4d78,	// (0x000546f2) bg_popup_sub_pane_cp3_ParamLimits

0x4d78,	// (0x000546f2) bg_popup_sub_pane_cp3

0xc33d,	// (0x0005bcb7) grid_hwr_fs_pane_ParamLimits

0xc33d,	// (0x0005bcb7) grid_hwr_fs_pane

0x1548,	// (0x00050ec2) linegrid_hwr_fs_pane_ParamLimits

0x1548,	// (0x00050ec2) linegrid_hwr_fs_pane

0xc355,	// (0x0005bccf) cell_hwr_fs_pane_ParamLimits

0xc355,	// (0x0005bccf) cell_hwr_fs_pane

0x4d84,	// (0x000546fe) linegrid_hwr_fs_pane_g1_ParamLimits

0x4d84,	// (0x000546fe) linegrid_hwr_fs_pane_g1

0xd685,	// (0x0005cfff) linegrid_hwr_fs_pane_g2_ParamLimits

0xd685,	// (0x0005cfff) linegrid_hwr_fs_pane_g2

0x4da2,	// (0x0005471c) linegrid_hwr_fs_pane_g3_ParamLimits

0x4da2,	// (0x0005471c) linegrid_hwr_fs_pane_g3

0x157a,	// (0x00050ef4) linegrid_hwr_fs_pane_g4_ParamLimits

0x157a,	// (0x00050ef4) linegrid_hwr_fs_pane_g4

0x1594,	// (0x00050f0e) linegrid_hwr_fs_pane_g5_ParamLimits

0x1594,	// (0x00050f0e) linegrid_hwr_fs_pane_g5

0x0004,

0xf7f4,	// (0x0005f16e) linegrid_hwr_fs_pane_g_ParamLimits

0xf7f4,	// (0x0005f16e) linegrid_hwr_fs_pane_g

0x4dae,	// (0x00054728) cell_hwr_fs_pane_g1_ParamLimits

0x4dae,	// (0x00054728) cell_hwr_fs_pane_g1

0x4aec,	// (0x00054466) cell_hwr_fs_pane_g2_ParamLimits

0x4aec,	// (0x00054466) cell_hwr_fs_pane_g2

0xd697,	// (0x0005d011) cell_hwr_fs_pane_g3_ParamLimits

0xd697,	// (0x0005d011) cell_hwr_fs_pane_g3

0xd6a4,	// (0x0005d01e) cell_hwr_fs_pane_g4_ParamLimits

0xd6a4,	// (0x0005d01e) cell_hwr_fs_pane_g4

0x0003,

0xf7ff,	// (0x0005f179) cell_hwr_fs_pane_g_ParamLimits

0xf7ff,	// (0x0005f179) cell_hwr_fs_pane_g

0xc37b,	// (0x0005bcf5) cell_hwr_fs_pane_t1

0x283d,	// (0x000521b7) grid_highlight_pane_cp6

0x283d,	// (0x000521b7) main_idle_act2_pane

0x3939,	// (0x000532b3) aid_inside_area_popup_secondary

0xd7d9,	// (0x0005d153) aid_inside_area_window_primary_ParamLimits

0xd7d9,	// (0x0005d153) aid_inside_area_window_primary

0x65c6,	// (0x00055f40) ai2_news_ticker_pane

0x65ce,	// (0x00055f48) aid_size_cell_ai1_link_ParamLimits

0x65ce,	// (0x00055f48) aid_size_cell_ai1_link

0xdb80,	// (0x0005d4fa) popup_ai2_data_window_ParamLimits

0xdb80,	// (0x0005d4fa) popup_ai2_data_window

0x65fe,	// (0x00055f78) popup_ai2_link_window_ParamLimits

0x65fe,	// (0x00055f78) popup_ai2_link_window

0x4d78,	// (0x000546f2) bg_popup_sub_pane_cp4_ParamLimits

0x4d78,	// (0x000546f2) bg_popup_sub_pane_cp4

0x6612,	// (0x00055f8c) grid_ai2_link_pane_ParamLimits

0x6612,	// (0x00055f8c) grid_ai2_link_pane

0x6629,	// (0x00055fa3) popup_ai2_link_window_g1_ParamLimits

0x6629,	// (0x00055fa3) popup_ai2_link_window_g1

0x6635,	// (0x00055faf) popup_ai2_link_window_g2_ParamLimits

0x6635,	// (0x00055faf) popup_ai2_link_window_g2

0x0001,

0xf9d2,	// (0x0005f34c) popup_ai2_link_window_g_ParamLimits

0xf9d2,	// (0x0005f34c) popup_ai2_link_window_g

0x6644,	// (0x00055fbe) ai2_mp_button_pane

0x664c,	// (0x00055fc6) ai2_mp_volume_pane

0x4f8b,	// (0x00054905) bg_popup_sub_pane_cp5_ParamLimits

0x4f8b,	// (0x00054905) bg_popup_sub_pane_cp5

0x6654,	// (0x00055fce) heading_ai2_gene_pane_ParamLimits

0x6654,	// (0x00055fce) heading_ai2_gene_pane

0x6660,	// (0x00055fda) list_ai2_gene_pane_ParamLimits

0x6660,	// (0x00055fda) list_ai2_gene_pane

0x66a8,	// (0x00056022) cell_ai2_link_pane_ParamLimits

0x66a8,	// (0x00056022) cell_ai2_link_pane

0x66be,	// (0x00056038) cell_ai2_link_pane_g1

0x283d,	// (0x000521b7) grid_highlight_pane_cp7

0x1977,	// (0x000512f1) ai2_mp_volume_pane_g1

0x678e,	// (0x00056108) ai2_mp_volume_pane_g2

0xdbaa,	// (0x0005d524) list_ai2_gene_pane_t1

0x6796,	// (0x00056110) ai2_mp_volume_pane_g3

0x0002,

0xf9eb,	// (0x0005f365) ai2_mp_volume_pane_g

0x197f,	// (0x000512f9) volume_small_pane_cp3

0x679e,	// (0x00056118) aid_size_cell_ai2_button

0x67a6,	// (0x00056120) grid_ai2_button_pane

0x67af,	// (0x00056129) cell_ai2_button_pane_ParamLimits

0x67af,	// (0x00056129) cell_ai2_button_pane

0x2833,	// (0x000521ad) cell_ai2_button_pane_g1

0x283d,	// (0x000521b7) grid_highlight_pane_cp8

0x674e,	// (0x000560c8) ai2_gene_pane_t1_ParamLimits

0x674e,	// (0x000560c8) ai2_gene_pane_t1

0xbc57,	// (0x0005b5d1) aid_height_parent_landscape

0xd92e,	// (0x0005d2a8) aid_height_set_list

0x6100,	// (0x00055a7a) aid_size_parent

0x63ed,	// (0x00055d67) aid_size_cell_graphic_pane_ParamLimits

0x6670,	// (0x00055fea) popup_ai2_data_window_g1_ParamLimits

0x6670,	// (0x00055fea) popup_ai2_data_window_g1

0x667c,	// (0x00055ff6) ai2_news_ticker_pane_g1

0x6684,	// (0x00055ffe) ai2_news_ticker_pane_g2

0x0001,

0xf9d7,	// (0x0005f351) ai2_news_ticker_pane_g

0x668c,	// (0x00056006) ai2_news_ticker_pane_t1

0x669a,	// (0x00056014) ai2_news_ticker_pane_t2

0x0001,

0xf9dc,	// (0x0005f356) ai2_news_ticker_pane_t

0x66c7,	// (0x00056041) heading_ai2_gene_pane_g1

0x66cf,	// (0x00056049) heading_ai2_gene_pane_t1_ParamLimits

0x66cf,	// (0x00056049) heading_ai2_gene_pane_t1

0x66e4,	// (0x0005605e) list_highlight_pane_cp6

0xdb94,	// (0x0005d50e) ai2_gene_pane_ParamLimits

0xdb94,	// (0x0005d50e) ai2_gene_pane

0xdbb8,	// (0x0005d532) list_ai2_gene_pane_t2

0x0001,

0xf9e1,	// (0x0005f35b) list_ai2_gene_pane_t

0x671f,	// (0x00056099) list_highlight_pane_cp8_ParamLimits

0x671f,	// (0x00056099) list_highlight_pane_cp8

0x6730,	// (0x000560aa) ai2_gene_pane_g1_ParamLimits

0x6730,	// (0x000560aa) ai2_gene_pane_g1

0x6742,	// (0x000560bc) ai2_gene_pane_g2_ParamLimits

0x6742,	// (0x000560bc) ai2_gene_pane_g2

0x0001,

0xf9e6,	// (0x0005f360) ai2_gene_pane_g_ParamLimits

0xf9e6,	// (0x0005f360) ai2_gene_pane_g

0x3760,	// (0x000530da) scroll_pane_cp12

0xbc16,	// (0x0005b590) control_pane_t3_ParamLimits

0xbc16,	// (0x0005b590) control_pane_t3

0x46a7,	// (0x00054021) status_small_pane_g8_ParamLimits

0x46a7,	// (0x00054021) status_small_pane_g8

0xbd62,	// (0x0005b6dc) popup_find_window_ParamLimits

0xbfe9,	// (0x0005b963) popup_note_image_window_ParamLimits

0x1456,	// (0x00050dd0) list_double2_graphic_pane_vc_g1_ParamLimits

0x1456,	// (0x00050dd0) list_double2_graphic_pane_vc_g1

0x4c18,	// (0x00054592) list_double2_graphic_pane_vc_g2_ParamLimits

0x4c18,	// (0x00054592) list_double2_graphic_pane_vc_g2

0x2d4d,	// (0x000526c7) list_double2_graphic_pane_vc_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_double2_graphic_pane_vc_g3

0x0002,

0xf620,	// (0x0005ef9a) list_double2_graphic_pane_vc_g_ParamLimits

0xf620,	// (0x0005ef9a) list_double2_graphic_pane_vc_g

0x1462,	// (0x00050ddc) list_double2_graphic_pane_vc_t1_ParamLimits

0x1462,	// (0x00050ddc) list_double2_graphic_pane_vc_t1

0x4c18,	// (0x00054592) list_single_heading_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_single_heading_pane_vc_g1

0x2d4d,	// (0x000526c7) list_single_heading_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_single_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_single_heading_pane_vc_g

0x14cd,	// (0x00050e47) list_single_heading_pane_vc_t1_ParamLimits

0x14cd,	// (0x00050e47) list_single_heading_pane_vc_t1

0x14e5,	// (0x00050e5f) list_single_heading_pane_vc_t2_ParamLimits

0x14e5,	// (0x00050e5f) list_single_heading_pane_vc_t2

0x0001,

0xf7e3,	// (0x0005f15d) list_single_heading_pane_vc_t_ParamLimits

0xf7e3,	// (0x0005f15d) list_single_heading_pane_vc_t

0x4cc8,	// (0x00054642) list_setting_number_pane_vc_g1_ParamLimits

0x4cc8,	// (0x00054642) list_setting_number_pane_vc_g1

0x4cd4,	// (0x0005464e) list_setting_number_pane_vc_g2_ParamLimits

0x4cd4,	// (0x0005464e) list_setting_number_pane_vc_g2

0x0001,

0xf7e8,	// (0x0005f162) list_setting_number_pane_vc_g_ParamLimits

0xf7e8,	// (0x0005f162) list_setting_number_pane_vc_g

0x4ce0,	// (0x0005465a) list_setting_number_pane_vc_t1_ParamLimits

0x4ce0,	// (0x0005465a) list_setting_number_pane_vc_t1

0x4cf4,	// (0x0005466e) list_setting_number_pane_vc_t2_ParamLimits

0x4cf4,	// (0x0005466e) list_setting_number_pane_vc_t2

0x4d10,	// (0x0005468a) list_setting_number_pane_vc_t3_ParamLimits

0x4d10,	// (0x0005468a) list_setting_number_pane_vc_t3

0x0002,

0xf7ed,	// (0x0005f167) list_setting_number_pane_vc_t_ParamLimits

0xf7ed,	// (0x0005f167) list_setting_number_pane_vc_t

0x4d3c,	// (0x000546b6) set_value_pane_vc_ParamLimits

0x4d3c,	// (0x000546b6) set_value_pane_vc

0x62b8,	// (0x00055c32) list_double2_graphic_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double2_graphic_pane_vc

0x2d59,	// (0x000526d3) list_double2_large_graphic_pane_vc_ParamLimits

0x2d59,	// (0x000526d3) list_double2_large_graphic_pane_vc

0x62b8,	// (0x00055c32) list_double2_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double2_pane_vc

0x62b8,	// (0x00055c32) list_double_graphic_heading_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_graphic_heading_pane_vc

0x62b8,	// (0x00055c32) list_double_graphic_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_graphic_pane_vc

0x62b8,	// (0x00055c32) list_double_heading_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_heading_pane_vc

0x2d59,	// (0x000526d3) list_double_large_graphic_pane_vc_ParamLimits

0x2d59,	// (0x000526d3) list_double_large_graphic_pane_vc

0x62b8,	// (0x00055c32) list_double_number_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_number_pane_vc

0x62b8,	// (0x00055c32) list_double_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_pane_vc

0x62b8,	// (0x00055c32) list_double_time_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_double_time_pane_vc

0x62b8,	// (0x00055c32) list_setting_number_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_setting_number_pane_vc

0x62b8,	// (0x00055c32) list_setting_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_setting_pane_vc

0x62b8,	// (0x00055c32) list_single_graphic_heading_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_single_graphic_heading_pane_vc

0x62b8,	// (0x00055c32) list_single_heading_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_single_heading_pane_vc

0x62b8,	// (0x00055c32) list_single_number_heading_pane_vc_ParamLimits

0x62b8,	// (0x00055c32) list_single_number_heading_pane_vc

0x1456,	// (0x00050dd0) list_double_graphic_heading_pane_vc_g1_ParamLimits

0x1456,	// (0x00050dd0) list_double_graphic_heading_pane_vc_g1

0x4c18,	// (0x00054592) list_double_graphic_heading_pane_vc_g2_ParamLimits

0x4c18,	// (0x00054592) list_double_graphic_heading_pane_vc_g2

0x2d4d,	// (0x000526c7) list_double_graphic_heading_pane_vc_g3_ParamLimits

0x2d4d,	// (0x000526c7) list_double_graphic_heading_pane_vc_g3

0x0002,

0xf620,	// (0x0005ef9a) list_double_graphic_heading_pane_vc_g_ParamLimits

0xf620,	// (0x0005ef9a) list_double_graphic_heading_pane_vc_g

0x1988,	// (0x00051302) list_double_graphic_heading_pane_vc_t1_ParamLimits

0x1988,	// (0x00051302) list_double_graphic_heading_pane_vc_t1

0x14cd,	// (0x00050e47) list_double_graphic_heading_pane_vc_t2_ParamLimits

0x14cd,	// (0x00050e47) list_double_graphic_heading_pane_vc_t2

0x0001,

0xf9f2,	// (0x0005f36c) list_double_graphic_heading_pane_vc_t_ParamLimits

0xf9f2,	// (0x0005f36c) list_double_graphic_heading_pane_vc_t

0x4cc8,	// (0x00054642) list_setting_pane_vc_g1_ParamLimits

0x4cc8,	// (0x00054642) list_setting_pane_vc_g1

0x4cd4,	// (0x0005464e) list_setting_pane_vc_g2_ParamLimits

0x4cd4,	// (0x0005464e) list_setting_pane_vc_g2

0x0001,

0xf7e8,	// (0x0005f162) list_setting_pane_vc_g_ParamLimits

0xf7e8,	// (0x0005f162) list_setting_pane_vc_g

0x69ef,	// (0x00056369) list_setting_pane_vc_t1_ParamLimits

0x69ef,	// (0x00056369) list_setting_pane_vc_t1

0x6a4d,	// (0x000563c7) list_setting_pane_vc_t2_ParamLimits

0x6a4d,	// (0x000563c7) list_setting_pane_vc_t2

0x0001,

0xfa35,	// (0x0005f3af) list_setting_pane_vc_t_ParamLimits

0xfa35,	// (0x0005f3af) list_setting_pane_vc_t

0x4d3c,	// (0x000546b6) set_value_pane_cp_vc_ParamLimits

0x4d3c,	// (0x000546b6) set_value_pane_cp_vc

0x4c18,	// (0x00054592) list_single_number_heading_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_single_number_heading_pane_vc_g1

0x2d4d,	// (0x000526c7) list_single_number_heading_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_single_number_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_single_number_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_single_number_heading_pane_vc_g

0x14cd,	// (0x00050e47) list_single_number_heading_pane_vc_t1_ParamLimits

0x14cd,	// (0x00050e47) list_single_number_heading_pane_vc_t1

0x199c,	// (0x00051316) list_single_number_heading_pane_vc_t2_ParamLimits

0x199c,	// (0x00051316) list_single_number_heading_pane_vc_t2

0x19b0,	// (0x0005132a) list_single_number_heading_pane_vc_t3_ParamLimits

0x19b0,	// (0x0005132a) list_single_number_heading_pane_vc_t3

0x0002,

0xfa3a,	// (0x0005f3b4) list_single_number_heading_pane_vc_t_ParamLimits

0xfa3a,	// (0x0005f3b4) list_single_number_heading_pane_vc_t

0x1456,	// (0x00050dd0) list_single_graphic_heading_pane_vc_g1_ParamLimits

0x1456,	// (0x00050dd0) list_single_graphic_heading_pane_vc_g1

0x4c18,	// (0x00054592) list_single_graphic_heading_pane_vc_g4_ParamLimits

0x4c18,	// (0x00054592) list_single_graphic_heading_pane_vc_g4

0x2d4d,	// (0x000526c7) list_single_graphic_heading_pane_vc_g5_ParamLimits

0x2d4d,	// (0x000526c7) list_single_graphic_heading_pane_vc_g5

0x0002,

0xf620,	// (0x0005ef9a) list_single_graphic_heading_pane_vc_g_ParamLimits

0xf620,	// (0x0005ef9a) list_single_graphic_heading_pane_vc_g

0x14cd,	// (0x00050e47) list_single_graphic_heading_pane_vc_t1_ParamLimits

0x14cd,	// (0x00050e47) list_single_graphic_heading_pane_vc_t1

0x19c2,	// (0x0005133c) list_single_graphic_heading_pane_vc_t2_ParamLimits

0x19c2,	// (0x0005133c) list_single_graphic_heading_pane_vc_t2

0x0001,

0xfa41,	// (0x0005f3bb) list_single_graphic_heading_pane_vc_t_ParamLimits

0xfa41,	// (0x0005f3bb) list_single_graphic_heading_pane_vc_t

0x4c18,	// (0x00054592) list_double2_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_double2_pane_vc_g1

0x2d4d,	// (0x000526c7) list_double2_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_double2_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_double2_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_double2_pane_vc_g

0x19d6,	// (0x00051350) list_double2_pane_vc_t1_ParamLimits

0x19d6,	// (0x00051350) list_double2_pane_vc_t1

0x2dfd,	// (0x00052777) list_double2_large_graphic_pane_vc_g1_ParamLimits

0x2dfd,	// (0x00052777) list_double2_large_graphic_pane_vc_g1

0x2e09,	// (0x00052783) list_double2_large_graphic_pane_vc_g2_ParamLimits

0x2e09,	// (0x00052783) list_double2_large_graphic_pane_vc_g2

0x2e15,	// (0x0005278f) list_double2_large_graphic_pane_vc_g3_ParamLimits

0x2e15,	// (0x0005278f) list_double2_large_graphic_pane_vc_g3

0x0002,

0xf5f0,	// (0x0005ef6a) list_double2_large_graphic_pane_vc_g_ParamLimits

0xf5f0,	// (0x0005ef6a) list_double2_large_graphic_pane_vc_g

0x19ec,	// (0x00051366) list_double2_large_graphic_pane_vc_t1_ParamLimits

0x19ec,	// (0x00051366) list_double2_large_graphic_pane_vc_t1

0x2e21,	// (0x0005279b) list_double_time_pane_vc_g1_ParamLimits

0x2e21,	// (0x0005279b) list_double_time_pane_vc_g1

0x2e2d,	// (0x000527a7) list_double_time_pane_vc_g2_ParamLimits

0x2e2d,	// (0x000527a7) list_double_time_pane_vc_g2

0x0001,

0xfa46,	// (0x0005f3c0) list_double_time_pane_vc_g_ParamLimits

0xfa46,	// (0x0005f3c0) list_double_time_pane_vc_g

0x1a02,	// (0x0005137c) list_double_time_pane_vc_t1_ParamLimits

0x1a02,	// (0x0005137c) list_double_time_pane_vc_t1

0x1a26,	// (0x000513a0) list_double_time_pane_vc_t2_ParamLimits

0x1a26,	// (0x000513a0) list_double_time_pane_vc_t2

0x1a75,	// (0x000513ef) list_double_time_pane_vc_t3_ParamLimits

0x1a75,	// (0x000513ef) list_double_time_pane_vc_t3

0x2e39,	// (0x000527b3) list_double_time_pane_vc_t4_ParamLimits

0x2e39,	// (0x000527b3) list_double_time_pane_vc_t4

0x0003,

0xfa4b,	// (0x0005f3c5) list_double_time_pane_vc_t_ParamLimits

0xfa4b,	// (0x0005f3c5) list_double_time_pane_vc_t

0x4c18,	// (0x00054592) list_double_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_double_pane_vc_g1

0x2d4d,	// (0x000526c7) list_double_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_double_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_double_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_double_pane_vc_g

0x2e5e,	// (0x000527d8) list_double_pane_vc_t1_ParamLimits

0x2e5e,	// (0x000527d8) list_double_pane_vc_t1

0x2e72,	// (0x000527ec) list_double_pane_vc_t2_ParamLimits

0x2e72,	// (0x000527ec) list_double_pane_vc_t2

0x0001,

0xfa54,	// (0x0005f3ce) list_double_pane_vc_t_ParamLimits

0xfa54,	// (0x0005f3ce) list_double_pane_vc_t

0x4c18,	// (0x00054592) list_double_number_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_double_number_pane_vc_g1

0x2d4d,	// (0x000526c7) list_double_number_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_double_number_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_double_number_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_double_number_pane_vc_g

0x2e8a,	// (0x00052804) list_double_number_pane_vc_t1_ParamLimits

0x2e8a,	// (0x00052804) list_double_number_pane_vc_t1

0x2e9e,	// (0x00052818) list_double_number_pane_vc_t2_ParamLimits

0x2e9e,	// (0x00052818) list_double_number_pane_vc_t2

0x2e72,	// (0x000527ec) list_double_number_pane_vc_t3_ParamLimits

0x2e72,	// (0x000527ec) list_double_number_pane_vc_t3

0x0002,

0xfa59,	// (0x0005f3d3) list_double_number_pane_vc_t_ParamLimits

0xfa59,	// (0x0005f3d3) list_double_number_pane_vc_t

0x2eb2,	// (0x0005282c) list_double_large_graphic_pane_vc_g1_ParamLimits

0x2eb2,	// (0x0005282c) list_double_large_graphic_pane_vc_g1

0x2ec3,	// (0x0005283d) list_double_large_graphic_pane_vc_g2_ParamLimits

0x2ec3,	// (0x0005283d) list_double_large_graphic_pane_vc_g2

0x2e15,	// (0x0005278f) list_double_large_graphic_pane_vc_g3_ParamLimits

0x2e15,	// (0x0005278f) list_double_large_graphic_pane_vc_g3

0x2ed2,	// (0x0005284c) list_double_large_graphic_pane_vc_g4_ParamLimits

0x2ed2,	// (0x0005284c) list_double_large_graphic_pane_vc_g4

0x0003,

0xfa60,	// (0x0005f3da) list_double_large_graphic_pane_vc_g_ParamLimits

0xfa60,	// (0x0005f3da) list_double_large_graphic_pane_vc_g

0x2ede,	// (0x00052858) list_double_large_graphic_pane_vc_t1_ParamLimits

0x2ede,	// (0x00052858) list_double_large_graphic_pane_vc_t1

0x2ef7,	// (0x00052871) list_double_large_graphic_pane_vc_t2_ParamLimits

0x2ef7,	// (0x00052871) list_double_large_graphic_pane_vc_t2

0x0001,

0xfa69,	// (0x0005f3e3) list_double_large_graphic_pane_vc_t_ParamLimits

0xfa69,	// (0x0005f3e3) list_double_large_graphic_pane_vc_t

0x4c18,	// (0x00054592) list_double_heading_pane_vc_g1_ParamLimits

0x4c18,	// (0x00054592) list_double_heading_pane_vc_g1

0x2d4d,	// (0x000526c7) list_double_heading_pane_vc_g2_ParamLimits

0x2d4d,	// (0x000526c7) list_double_heading_pane_vc_g2

0x0001,

0xf5d8,	// (0x0005ef52) list_double_heading_pane_vc_g_ParamLimits

0xf5d8,	// (0x0005ef52) list_double_heading_pane_vc_g

0x2f10,	// (0x0005288a) list_double_heading_pane_vc_t1_ParamLimits

0x2f10,	// (0x0005288a) list_double_heading_pane_vc_t1

0x14cd,	// (0x00050e47) list_double_heading_pane_vc_t2_ParamLimits

0x14cd,	// (0x00050e47) list_double_heading_pane_vc_t2

0x0001,

0xfa6e,	// (0x0005f3e8) list_double_heading_pane_vc_t_ParamLimits

0xfa6e,	// (0x0005f3e8) list_double_heading_pane_vc_t

0x1456,	// (0x00050dd0) list_double_graphic_pane_vc_g1_ParamLimits

0x1456,	// (0x00050dd0) list_double_graphic_pane_vc_g1

0x2f24,	// (0x0005289e) list_double_graphic_pane_vc_g2_ParamLimits

0x2f24,	// (0x0005289e) list_double_graphic_pane_vc_g2

0x2f33,	// (0x000528ad) list_double_graphic_pane_vc_g3_ParamLimits

0x2f33,	// (0x000528ad) list_double_graphic_pane_vc_g3

0x0002,

0xfa73,	// (0x0005f3ed) list_double_graphic_pane_vc_g_ParamLimits

0xfa73,	// (0x0005f3ed) list_double_graphic_pane_vc_g

0x2f3f,	// (0x000528b9) list_double_graphic_pane_vc_t1_ParamLimits

0x2f3f,	// (0x000528b9) list_double_graphic_pane_vc_t1

0x2e72,	// (0x000527ec) list_double_graphic_pane_vc_t2_ParamLimits

0x2e72,	// (0x000527ec) list_double_graphic_pane_vc_t2

0x0001,

0xfa7a,	// (0x0005f3f4) list_double_graphic_pane_vc_t_ParamLimits

0xfa7a,	// (0x0005f3f4) list_double_graphic_pane_vc_t

0xf2cc,	// (0x0005ec46) aid_size_cell_fastswap

0xb24b,	// (0x0005abc5) aid_size_cell_touch_ParamLimits

0xb24b,	// (0x0005abc5) aid_size_cell_touch

0xf4c1,	// (0x0005ee3b) popup_fast_swap_wide_window_ParamLimits

0xf4c1,	// (0x0005ee3b) popup_fast_swap_wide_window

0xb396,	// (0x0005ad10) touch_pane_ParamLimits

0xb396,	// (0x0005ad10) touch_pane

0x37c2,	// (0x0005313c) button_value_adjust_pane_cp2

0x0594,	// (0x0004ff0e) button_value_adjust_pane_cp4

0x05b8,	// (0x0004ff32) form_field_data_pane_cp2

0xb908,	// (0x0005b282) form_field_data_wide_pane_cp2

0x3c4d,	// (0x000535c7) bg_scroll_pane_ParamLimits

0x098d,	// (0x00050307) scroll_handle_pane_ParamLimits

0x09a1,	// (0x0005031b) scroll_sc2_down_pane_ParamLimits

0x09a1,	// (0x0005031b) scroll_sc2_down_pane

0x3c7e,	// (0x000535f8) scroll_sc2_up_pane_ParamLimits

0x3c7e,	// (0x000535f8) scroll_sc2_up_pane

0xdce2,	// (0x0005d65c) grid_wheel_folder_pane_g1_ParamLimits

0xdce2,	// (0x0005d65c) grid_wheel_folder_pane_g1

0x0bf0,	// (0x0005056a) clock_nsta_pane_cp2_ParamLimits

0x0bf0,	// (0x0005056a) clock_nsta_pane_cp2

0x4770,	// (0x000540ea) listscroll_midp_pane_ParamLimits

0xd114,	// (0x0005ca8e) midp_canvas_pane

0x4722,	// (0x0005409c) nsta_clock_indic_pane

0x4756,	// (0x000540d0) listscroll_form_pane_vc

0x475e,	// (0x000540d8) listscroll_set_pane_vc_ParamLimits

0x475e,	// (0x000540d8) listscroll_set_pane_vc

0xd2fc,	// (0x0005cc76) clock_nsta_pane

0xd326,	// (0x0005cca0) indicator_nsta_pane

0x4bb2,	// (0x0005452c) bg_popup_sub_pane_cp2_ParamLimits

0x4bc6,	// (0x00054540) find_pane_cp2_ParamLimits

0x4bc6,	// (0x00054540) find_pane_cp2

0x4bdc,	// (0x00054556) grid_toobar_pane_ParamLimits

0x4d4c,	// (0x000546c6) list_form_gen_pane_vc_ParamLimits

0x4d4c,	// (0x000546c6) list_form_gen_pane_vc

0x4d62,	// (0x000546dc) scroll_pane_cp8_vc_ParamLimits

0x4d62,	// (0x000546dc) scroll_pane_cp8_vc

0x4dde,	// (0x00054758) data_form_wide_pane_vc_ParamLimits

0x4dde,	// (0x00054758) data_form_wide_pane_vc

0x4dea,	// (0x00054764) form_field_data_wide_pane_vc_g1

0x4df2,	// (0x0005476c) form_field_data_wide_pane_vc_t1_ParamLimits

0x4df2,	// (0x0005476c) form_field_data_wide_pane_vc_t1

0x37d6,	// (0x00053150) input_focus_pane_cp6_vc_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_cp6_vc

0xd736,	// (0x0005d0b0) list_midp_pane_ParamLimits

0x6453,	// (0x00055dcd) scroll_pane_cp16_ParamLimits

0x6453,	// (0x00055dcd) scroll_pane_cp16

0x5178,	// (0x00054af2) button_value_adjust_pane_ParamLimits

0x5178,	// (0x00054af2) button_value_adjust_pane

0xd93f,	// (0x0005d2b9) button_value_adjust_pane_cp6_ParamLimits

0xd93f,	// (0x0005d2b9) button_value_adjust_pane_cp6

0xda59,	// (0x0005d3d3) settings_code_pane_cp_ParamLimits

0xda59,	// (0x0005d3d3) settings_code_pane_cp

0x2833,	// (0x000521ad) cell_touch_pane_g1

0x2833,	// (0x000521ad) cell_touch_pane_g2

0x0001,

0xf70e,	// (0x0005f088) cell_touch_pane_g

0xdbc6,	// (0x0005d540) cell_touch_pane_cp_ParamLimits

0xdbc6,	// (0x0005d540) cell_touch_pane_cp

0xdbe2,	// (0x0005d55c) cell_touch_pane_ParamLimits

0xdbe2,	// (0x0005d55c) cell_touch_pane

0x2833,	// (0x000521ad) scroll_sc2_down_pane_g1

0x2833,	// (0x000521ad) scroll_sc2_up_pane_g1

0x283d,	// (0x000521b7) bg_set_opt_pane_cp4_vc

0x67e3,	// (0x0005615d) list_set_graphic_pane_vc_g1_ParamLimits

0x67e3,	// (0x0005615d) list_set_graphic_pane_vc_g1

0x67ef,	// (0x00056169) list_set_graphic_pane_vc_g2_ParamLimits

0x67ef,	// (0x00056169) list_set_graphic_pane_vc_g2

0x0001,

0xf9f7,	// (0x0005f371) list_set_graphic_pane_vc_g_ParamLimits

0xf9f7,	// (0x0005f371) list_set_graphic_pane_vc_g

0x67fb,	// (0x00056175) text_primary_small_cp13_vc_ParamLimits

0x67fb,	// (0x00056175) text_primary_small_cp13_vc

0x6813,	// (0x0005618d) list_set_graphic_pane_vc_ParamLimits

0x6813,	// (0x0005618d) list_set_graphic_pane_vc

0x283d,	// (0x000521b7) input_focus_pane_cp2_vc

0x2833,	// (0x000521ad) setting_code_pane_vc_g1

0x2968,	// (0x000522e2) setting_code_pane_vc_t1

0x6825,	// (0x0005619f) set_text_pane_vc_t1_ParamLimits

0x6825,	// (0x0005619f) set_text_pane_vc_t1

0x283d,	// (0x000521b7) input_focus_pane_cp1_vc

0x6840,	// (0x000561ba) list_set_text_pane_vc

0x2833,	// (0x000521ad) setting_text_pane_vc_g1

0x283d,	// (0x000521b7) bg_set_opt_pane_cp2_vc

0x295f,	// (0x000522d9) setting_slider_graphic_pane_vc_g1

0x684a,	// (0x000561c4) setting_slider_graphic_pane_vc_t1

0x685a,	// (0x000561d4) setting_slider_graphic_pane_vc_t2

0x0001,

0xf9fc,	// (0x0005f376) setting_slider_graphic_pane_vc_t

0x686a,	// (0x000561e4) slider_set_pane_cp_vc

0x6872,	// (0x000561ec) slider_set_pane_vc_g1

0x687b,	// (0x000561f5) slider_set_pane_vc_g2

0x0006,

0xfa01,	// (0x0005f37b) slider_set_pane_vc_g

0x383d,	// (0x000531b7) set_opt_bg_pane_g1_copy1

0x3845,	// (0x000531bf) set_opt_bg_pane_g2_copy1

0x68a7,	// (0x00056221) set_opt_bg_pane_g3_copy1

0x3855,	// (0x000531cf) set_opt_bg_pane_g4_copy1

0x385d,	// (0x000531d7) set_opt_bg_pane_g5_copy1

0x3865,	// (0x000531df) set_opt_bg_pane_g6_copy1

0x68b1,	// (0x0005622b) set_opt_bg_pane_g7_copy1

0x68b9,	// (0x00056233) set_opt_bg_pane_g8_copy1

0x68c3,	// (0x0005623d) set_opt_bg_pane_g9_copy1

0x283d,	// (0x000521b7) bg_set_opt_pane_cp_vc

0x68cd,	// (0x00056247) setting_slider_pane_vc_t1

0x68dc,	// (0x00056256) setting_slider_pane_vc_t2

0x68ec,	// (0x00056266) setting_slider_pane_vc_t3

0x0002,

0xfa10,	// (0x0005f38a) setting_slider_pane_vc_t

0x68fc,	// (0x00056276) slider_set_pane_vc

0x15f2,	// (0x00050f6c) volume_set_pane_vc_g1

0x15fb,	// (0x00050f75) volume_set_pane_vc_g2

0x1604,	// (0x00050f7e) volume_set_pane_vc_g3

0x160d,	// (0x00050f87) volume_set_pane_vc_g4

0x1616,	// (0x00050f90) volume_set_pane_vc_g5

0x161f,	// (0x00050f99) volume_set_pane_vc_g6

0x1628,	// (0x00050fa2) volume_set_pane_vc_g7

0x1631,	// (0x00050fab) volume_set_pane_vc_g8

0x163a,	// (0x00050fb4) volume_set_pane_vc_g9

0x1643,	// (0x00050fbd) volume_set_pane_vc_g10

0x0009,

0xfa17,	// (0x0005f391) volume_set_pane_vc_g

0x6904,	// (0x0005627e) volume_set_pane_vc

0x690c,	// (0x00056286) button_value_adjust_pane_cp1_vc

0x6916,	// (0x00056290) list_highlight_pane_cp2_vc

0x691f,	// (0x00056299) list_set_pane_vc_ParamLimits

0x691f,	// (0x00056299) list_set_pane_vc

0x697d,	// (0x000562f7) main_pane_set_vc_t1_ParamLimits

0x697d,	// (0x000562f7) main_pane_set_vc_t1

0x6992,	// (0x0005630c) main_pane_set_vc_t2_ParamLimits

0x6992,	// (0x0005630c) main_pane_set_vc_t2

0x69a4,	// (0x0005631e) main_pane_set_vc_t3_ParamLimits

0x69a4,	// (0x0005631e) main_pane_set_vc_t3

0x69b8,	// (0x00056332) main_pane_set_vc_t4_ParamLimits

0x69b8,	// (0x00056332) main_pane_set_vc_t4

0x0003,

0xfa2c,	// (0x0005f3a6) main_pane_set_vc_t_ParamLimits

0xfa2c,	// (0x0005f3a6) main_pane_set_vc_t

0x69cc,	// (0x00056346) setting_code_pane_vc_ParamLimits

0x69cc,	// (0x00056346) setting_code_pane_vc

0x69dd,	// (0x00056357) setting_slider_graphic_pane_vc

0x69dd,	// (0x00056357) setting_slider_pane_vc

0x69dd,	// (0x00056357) setting_text_pane_vc

0x69dd,	// (0x00056357) setting_volume_pane_vc

0x69e7,	// (0x00056361) scroll_pane_cp121_vc

0x37b0,	// (0x0005312a) set_content_pane_vc

0x6a69,	// (0x000563e3) button_value_adjust_pane_g1

0x6a72,	// (0x000563ec) button_value_adjust_pane_g2

0x0001,

0xfa7f,	// (0x0005f3f9) button_value_adjust_pane_g

0x6a7b,	// (0x000563f5) form_field_slider_wide_pane_vc_t1_ParamLimits

0x6a7b,	// (0x000563f5) form_field_slider_wide_pane_vc_t1

0x6a8f,	// (0x00056409) form_field_slider_wide_pane_vc_t2_ParamLimits

0x6a8f,	// (0x00056409) form_field_slider_wide_pane_vc_t2

0x0002,

0xfa84,	// (0x0005f3fe) form_field_slider_wide_pane_vc_t_ParamLimits

0xfa84,	// (0x0005f3fe) form_field_slider_wide_pane_vc_t

0x2b98,	// (0x00052512) input_focus_pane_cp10_vc_ParamLimits

0x2b98,	// (0x00052512) input_focus_pane_cp10_vc

0x6abd,	// (0x00056437) slider_cont_pane_cp1_vc_ParamLimits

0x6abd,	// (0x00056437) slider_cont_pane_cp1_vc

0x6acf,	// (0x00056449) slider_form_pane_g1_cp2

0x687b,	// (0x000561f5) slider_form_pane_g2_cp2

0x6afc,	// (0x00056476) form_field_slider_pane_vc_t3

0x6b0a,	// (0x00056484) form_field_slider_pane_vc_t4

0x6b18,	// (0x00056492) slider_form_pane_vc_ParamLimits

0x6b18,	// (0x00056492) slider_form_pane_vc

0x6b25,	// (0x0005649f) form_field_slider_pane_vc_t1_ParamLimits

0x6b25,	// (0x0005649f) form_field_slider_pane_vc_t1

0x6a8f,	// (0x00056409) form_field_slider_pane_vc_t2_ParamLimits

0x6a8f,	// (0x00056409) form_field_slider_pane_vc_t2

0x0001,

0xfa96,	// (0x0005f410) form_field_slider_pane_vc_t_ParamLimits

0xfa96,	// (0x0005f410) form_field_slider_pane_vc_t

0x2b98,	// (0x00052512) input_focus_pane_cp9_vc_ParamLimits

0x2b98,	// (0x00052512) input_focus_pane_cp9_vc

0x6b41,	// (0x000564bb) slider_cont_pane_vc_ParamLimits

0x6b41,	// (0x000564bb) slider_cont_pane_vc

0x6b55,	// (0x000564cf) list_form_graphic_pane_cp_vc_ParamLimits

0x6b55,	// (0x000564cf) list_form_graphic_pane_cp_vc

0x4dea,	// (0x00054764) form_field_popup_wide_pane_vc_g1

0x6b6a,	// (0x000564e4) form_field_popup_wide_pane_vc_t1_ParamLimits

0x6b6a,	// (0x000564e4) form_field_popup_wide_pane_vc_t1

0x37d6,	// (0x00053150) input_focus_pane_cp8_vc_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_cp8_vc

0x6baf,	// (0x00056529) list_form_wide_pane_vc_ParamLimits

0x6baf,	// (0x00056529) list_form_wide_pane_vc

0x6bbb,	// (0x00056535) list_form_graphic_pane_vc_g1

0x6bc3,	// (0x0005653d) list_form_graphic_pane_vc_t1_ParamLimits

0x6bc3,	// (0x0005653d) list_form_graphic_pane_vc_t1

0x291d,	// (0x00052297) list_highlight_pane_cp5_vc_ParamLimits

0x291d,	// (0x00052297) list_highlight_pane_cp5_vc

0x6bdf,	// (0x00056559) list_form_graphic_pane_vc_ParamLimits

0x6bdf,	// (0x00056559) list_form_graphic_pane_vc

0x4dea,	// (0x00054764) form_field_popup_pane_vc_g1

0x6bf5,	// (0x0005656f) form_field_popup_pane_vc_t1_ParamLimits

0x6bf5,	// (0x0005656f) form_field_popup_pane_vc_t1

0x37d6,	// (0x00053150) input_focus_pane_cp7_vc_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_cp7_vc

0x6c0c,	// (0x00056586) list_form_pane_vc_ParamLimits

0x6c0c,	// (0x00056586) list_form_pane_vc

0x6c18,	// (0x00056592) data_form_pane_vc_t1_ParamLimits

0x6c18,	// (0x00056592) data_form_pane_vc_t1

0x383d,	// (0x000531b7) input_focus_pane_vc_g1

0x3845,	// (0x000531bf) input_focus_pane_vc_g2

0x384d,	// (0x000531c7) input_focus_pane_vc_g3

0x3855,	// (0x000531cf) input_focus_pane_vc_g4

0x385d,	// (0x000531d7) input_focus_pane_vc_g5

0x3865,	// (0x000531df) input_focus_pane_vc_g6

0x386d,	// (0x000531e7) input_focus_pane_vc_g7

0x3875,	// (0x000531ef) input_focus_pane_vc_g8

0x387d,	// (0x000531f7) input_focus_pane_vc_g9

0x2833,	// (0x000521ad) input_focus_pane_vc_g10

0x0009,

0xf697,	// (0x0005f011) input_focus_pane_vc_g

0x4dde,	// (0x00054758) data_form_pane_vc_ParamLimits

0x4dde,	// (0x00054758) data_form_pane_vc

0x4dea,	// (0x00054764) form_field_data_pane_vc_g1

0x6c33,	// (0x000565ad) form_field_data_pane_vc_t1_ParamLimits

0x6c33,	// (0x000565ad) form_field_data_pane_vc_t1

0x37d6,	// (0x00053150) input_focus_pane_vc_ParamLimits

0x37d6,	// (0x00053150) input_focus_pane_vc

0x6c4d,	// (0x000565c7) button_value_adjust_pane_cp3_vc

0x6c55,	// (0x000565cf) button_value_adjust_pane_cp5_vc

0x6c5d,	// (0x000565d7) form_field_data_pane_vc_ParamLimits

0x6c5d,	// (0x000565d7) form_field_data_pane_vc

0x6c74,	// (0x000565ee) form_field_data_pane_vc_cp2

0x6c7c,	// (0x000565f6) form_field_data_wide_pane_vc_ParamLimits

0x6c7c,	// (0x000565f6) form_field_data_wide_pane_vc

0x6c92,	// (0x0005660c) form_field_data_wide_pane_vc_cp2

0x6c9a,	// (0x00056614) form_field_popup_pane_vc_ParamLimits

0x6c9a,	// (0x00056614) form_field_popup_pane_vc

0x6cb1,	// (0x0005662b) form_field_popup_wide_pane_vc_ParamLimits

0x6cb1,	// (0x0005662b) form_field_popup_wide_pane_vc

0x6cc7,	// (0x00056641) form_field_slider_pane_vc_ParamLimits

0x6cc7,	// (0x00056641) form_field_slider_pane_vc

0x6cda,	// (0x00056654) form_field_slider_wide_pane_vc_ParamLimits

0x6cda,	// (0x00056654) form_field_slider_wide_pane_vc

0xdc00,	// (0x0005d57a) grid_touch_1_pane_ParamLimits

0xdc00,	// (0x0005d57a) grid_touch_1_pane

0xdc14,	// (0x0005d58e) grid_touch_2_pane_ParamLimits

0xdc14,	// (0x0005d58e) grid_touch_2_pane

0x6daf,	// (0x00056729) touch_pane_g1_ParamLimits

0x6daf,	// (0x00056729) touch_pane_g1

0x6d11,	// (0x0005668b) cell_app_pane_cp_wide_ParamLimits

0x6d11,	// (0x0005668b) cell_app_pane_cp_wide

0x6d22,	// (0x0005669c) grid_popup_fast_wide_pane_ParamLimits

0x6d22,	// (0x0005669c) grid_popup_fast_wide_pane

0x6d36,	// (0x000566b0) scroll_pane_cp19_ParamLimits

0x6d36,	// (0x000566b0) scroll_pane_cp19

0x283d,	// (0x000521b7) bg_popup_window_pane_cp20

0x6d4a,	// (0x000566c4) listscroll_popup_fast_wide_pane

0x39a5,	// (0x0005331f) grid_indicator_nsta_pane

0x6d52,	// (0x000566cc) clock_nsta_pane_g1

0x6d5b,	// (0x000566d5) clock_nsta_pane_t1

0xdc3e,	// (0x0005d5b8) cell_indicator_nsta_pane_ParamLimits

0xdc3e,	// (0x0005d5b8) cell_indicator_nsta_pane

0x6daf,	// (0x00056729) cell_indicator_nsta_pane_g1

0xdc57,	// (0x0005d5d1) cell_indicator_nsta_pane_g2

0x0001,

0xfaa7,	// (0x0005f421) cell_indicator_nsta_pane_g

0x6dd3,	// (0x0005674d) clock_nsta_pane_cp

0x6ddb,	// (0x00056755) indicator_nsta_pane_cp

0x6de4,	// (0x0005675e) nsta_clock_indic_pane_g1

0x29e6,	// (0x00052360) grid_indicator_pane

0x3d73,	// (0x000536ed) scroll_pane_cp29

0x0b3f,	// (0x000504b9) indicator_nsta_pane_cp2_ParamLimits

0x0b3f,	// (0x000504b9) indicator_nsta_pane_cp2

0x291d,	// (0x00052297) main_apps_wheel_pane

0x4fff,	// (0x00054979) form_midp_field_text_pane_ParamLimits

0x514a,	// (0x00054ac4) scroll_bar_cp050_ParamLimits

0x6e4d,	// (0x000567c7) cell_indicator_pane_ParamLimits

0x6e4d,	// (0x000567c7) cell_indicator_pane

0x6e64,	// (0x000567de) cell_indicator_pane_g1

0xdc6c,	// (0x0005d5e6) grid_wheel_folder_pane_ParamLimits

0xdc6c,	// (0x0005d5e6) grid_wheel_folder_pane

0xdc7a,	// (0x0005d5f4) list_wheel_apps_pane_ParamLimits

0xdc7a,	// (0x0005d5f4) list_wheel_apps_pane

0xdc88,	// (0x0005d602) main_apps_wheel_pane_g1_ParamLimits

0xdc88,	// (0x0005d602) main_apps_wheel_pane_g1

0xdc94,	// (0x0005d60e) main_apps_wheel_pane_g2_ParamLimits

0xdc94,	// (0x0005d60e) main_apps_wheel_pane_g2

0x0001,

0xfac3,	// (0x0005f43d) main_apps_wheel_pane_g_ParamLimits

0xfac3,	// (0x0005f43d) main_apps_wheel_pane_g

0xdca2,	// (0x0005d61c) main_apps_wheel_pane_t1_ParamLimits

0xdca2,	// (0x0005d61c) main_apps_wheel_pane_t1

0xdcb6,	// (0x0005d630) list_wheel_apps_pane_g1

0xdcbe,	// (0x0005d638) list_wheel_apps_pane_g2

0xdcc6,	// (0x0005d640) list_wheel_apps_pane_g3

0xdcce,	// (0x0005d648) list_wheel_apps_pane_g4

0xdcd8,	// (0x0005d652) list_wheel_apps_pane_g5

0x0004,

0xfac8,	// (0x0005f442) list_wheel_apps_pane_g

0x42bc,	// (0x00053c36) navi_icon_text_pane

0xd1f0,	// (0x0005cb6a) aid_fill_nsta

0x6f27,	// (0x000568a1) navi_icon_text_pane_g1

0x6f33,	// (0x000568ad) navi_icon_text_pane_t1

0xd07a,	// (0x0005c9f4) list_set_graphic_pane_t1_ParamLimits

0xd07a,	// (0x0005c9f4) list_set_graphic_pane_t1

0x58bb,	// (0x00055235) popup_midp_note_alarm_window_t6_ParamLimits

0x58bb,	// (0x00055235) popup_midp_note_alarm_window_t6

0x58cd,	// (0x00055247) popup_midp_note_alarm_window_t7_ParamLimits

0x58cd,	// (0x00055247) popup_midp_note_alarm_window_t7

0x58df,	// (0x00055259) popup_midp_note_alarm_window_t8_ParamLimits

0x58df,	// (0x00055259) popup_midp_note_alarm_window_t8

0x58f1,	// (0x0005526b) popup_midp_note_alarm_window_t9_ParamLimits

0x58f1,	// (0x0005526b) popup_midp_note_alarm_window_t9

0x5903,	// (0x0005527d) popup_midp_note_alarm_window_t10_ParamLimits

0x5903,	// (0x0005527d) popup_midp_note_alarm_window_t10

0x5915,	// (0x0005528f) popup_midp_note_alarm_window_t11_ParamLimits

0x5915,	// (0x0005528f) popup_midp_note_alarm_window_t11

0x5927,	// (0x000552a1) scroll_pane_cp17_ParamLimits

0x5927,	// (0x000552a1) scroll_pane_cp17

0x15f2,	// (0x00050f6c) volume_small_pane_cp_g1

0x1a87,	// (0x00051401) volume_small_pane_cp_g2

0x1a90,	// (0x0005140a) volume_small_pane_cp_g3

0x1a99,	// (0x00051413) volume_small_pane_cp_g4

0x1aa2,	// (0x0005141c) volume_small_pane_cp_g5

0x1aab,	// (0x00051425) volume_small_pane_cp_g6

0x1ab4,	// (0x0005142e) volume_small_pane_cp_g7

0x1abd,	// (0x00051437) volume_small_pane_cp_g8

0x1ac6,	// (0x00051440) volume_small_pane_cp_g9

0x1acf,	// (0x00051449) volume_small_pane_cp_g10

0x44ff,	// (0x00053e79) midp_ticker_pane_g1_ParamLimits

0x450b,	// (0x00053e85) midp_ticker_pane_g2_ParamLimits

0xf763,	// (0x0005f0dd) midp_ticker_pane_g_ParamLimits

0x4517,	// (0x00053e91) midp_ticker_pane_t1_ParamLimits

0xd214,	// (0x0005cb8e) aid_fill_nsta_2

0x5136,	// (0x00054ab0) list_form2_midp_pane

0x6287,	// (0x00055c01) midp_editing_number_pane_ParamLimits

0x6296,	// (0x00055c10) midp_ticker_pane_ParamLimits

0x6f45,	// (0x000568bf) form2_midp_field_pane

0x6f69,	// (0x000568e3) scroll_pane_cp51

0x6f89,	// (0x00056903) form2_midp_button_pane_ParamLimits

0x6f89,	// (0x00056903) form2_midp_button_pane

0x6f9b,	// (0x00056915) form2_midp_content_pane_ParamLimits

0x6f9b,	// (0x00056915) form2_midp_content_pane

0x6fb5,	// (0x0005692f) form2_midp_field_choice_group_pane

0x6fbd,	// (0x00056937) form2_midp_field_pane_g1

0x6fc5,	// (0x0005693f) form2_midp_field_pane_g2

0x6fcd,	// (0x00056947) form2_midp_field_pane_g3

0x6fd5,	// (0x0005694f) form2_midp_field_pane_g4

0x0003,

0xfaed,	// (0x0005f467) form2_midp_field_pane_g

0x6fdd,	// (0x00056957) form2_midp_gauge_slider_pane

0x6fe5,	// (0x0005695f) form2_midp_gauge_wait_pane

0x6fed,	// (0x00056967) form2_midp_image_pane_ParamLimits

0x6fed,	// (0x00056967) form2_midp_image_pane

0x7008,	// (0x00056982) form2_midp_label_pane_ParamLimits

0x7008,	// (0x00056982) form2_midp_label_pane

0xdd0b,	// (0x0005d685) form2_midp_label_pane_cp_ParamLimits

0xdd0b,	// (0x0005d685) form2_midp_label_pane_cp

0x7042,	// (0x000569bc) form2_midp_string_pane_ParamLimits

0x7042,	// (0x000569bc) form2_midp_string_pane

0xc538,	// (0x0005beb2) form2_midp_text_pane_ParamLimits

0xc538,	// (0x0005beb2) form2_midp_text_pane

0x7054,	// (0x000569ce) form2_midp_time_pane

0x7064,	// (0x000569de) input_focus_pane_cp51_ParamLimits

0x7064,	// (0x000569de) input_focus_pane_cp51

0x707c,	// (0x000569f6) form2_midp_label_pane_t1_ParamLimits

0x707c,	// (0x000569f6) form2_midp_label_pane_t1

0xc557,	// (0x0005bed1) form2_mdip_text_pane_t1_ParamLimits

0xc557,	// (0x0005bed1) form2_mdip_text_pane_t1

0x2f90,	// (0x0005290a) form2_midp_time_pane_t1

0x70c5,	// (0x00056a3f) form2_midp_gauge_slider_pane_t1

0xdd2a,	// (0x0005d6a4) form2_midp_gauge_slider_pane_t2

0xdd3c,	// (0x0005d6b6) form2_midp_gauge_slider_pane_t3

0x0002,

0xfaf6,	// (0x0005f470) form2_midp_gauge_slider_pane_t

0x70fb,	// (0x00056a75) form2_midp_slider_pane

0x7107,	// (0x00056a81) form2_midp_gauge_wait_pane_t1

0x7115,	// (0x00056a8f) form2_midp_wait_pane_ParamLimits

0x7115,	// (0x00056a8f) form2_midp_wait_pane

0xdd4e,	// (0x0005d6c8) list_single_2graphic_pane_cp4_ParamLimits

0xdd4e,	// (0x0005d6c8) list_single_2graphic_pane_cp4

0xd6c4,	// (0x0005d03e) list_single_midp_graphic_pane_cp_ParamLimits

0xd6c4,	// (0x0005d03e) list_single_midp_graphic_pane_cp

0x283d,	// (0x000521b7) list_highlight_pane_cp20

0x716f,	// (0x00056ae9) list_single_2graphic_pane_g1_cp4

0x7177,	// (0x00056af1) list_single_2graphic_pane_g2_cp4

0x717f,	// (0x00056af9) list_single_2graphic_pane_t1_cp4

0x291d,	// (0x00052297) list_highlight_pane_cp21

0x718e,	// (0x00056b08) list_single_midp_graphic_pane_g4_cp

0x719d,	// (0x00056b17) list_single_midp_graphic_pane_t1_cp

0xdd62,	// (0x0005d6dc) form2_mdip_string_pane_t1_ParamLimits

0xdd62,	// (0x0005d6dc) form2_mdip_string_pane_t1

0x283d,	// (0x000521b7) bg_wml_button_pane_cp2

0x2833,	// (0x000521ad) form2_midp_image_pane_g1

0x2d30,	// (0x000526aa) list_double_large_graphic_pane_g5_ParamLimits

0x2d30,	// (0x000526aa) list_double_large_graphic_pane_g5

0x4770,	// (0x000540ea) midp_form_pane_ParamLimits

0x291d,	// (0x00052297) main_apps_wheel_pane_ParamLimits

0xc067,	// (0x0005b9e1) popup_preview_window_ParamLimits

0xc067,	// (0x0005b9e1) popup_preview_window

0x13d1,	// (0x00050d4b) popup_touch_info_window_ParamLimits

0x13d1,	// (0x00050d4b) popup_touch_info_window

0x13ef,	// (0x00050d69) popup_touch_menu_window_ParamLimits

0x13ef,	// (0x00050d69) popup_touch_menu_window

0x2829,	// (0x000521a3) bg_popup_sub_pane_cp6

0x72ab,	// (0x00056c25) list_touch_menu_pane

0x72b3,	// (0x00056c2d) list_single_touch_menu_pane_ParamLimits

0x72b3,	// (0x00056c2d) list_single_touch_menu_pane

0x72c9,	// (0x00056c43) list_single_touch_menu_pane_t1

0x291d,	// (0x00052297) bg_popup_sub_pane_cp7_ParamLimits

0x291d,	// (0x00052297) bg_popup_sub_pane_cp7

0x72d7,	// (0x00056c51) heading_sub_pane

0x72df,	// (0x00056c59) list_touch_info_pane_ParamLimits

0x72df,	// (0x00056c59) list_touch_info_pane

0x72ee,	// (0x00056c68) list_single_touch_info_pane_ParamLimits

0x72ee,	// (0x00056c68) list_single_touch_info_pane

0x7300,	// (0x00056c7a) list_single_touch_info_pane_t1

0x730e,	// (0x00056c88) list_single_touch_info_pane_t2

0x0001,

0xfb04,	// (0x0005f47e) list_single_touch_info_pane_t

0x4430,	// (0x00053daa) bg_popup_heading_pane_cp

0x731c,	// (0x00056c96) heading_sub_pane_t1

0x4d78,	// (0x000546f2) bg_popup_preview_window_pane_cp_ParamLimits

0x4d78,	// (0x000546f2) bg_popup_preview_window_pane_cp

0x72d7,	// (0x00056c51) heading_preview_pane

0x72df,	// (0x00056c59) list_preview_pane_ParamLimits

0x72df,	// (0x00056c59) list_preview_pane

0x732a,	// (0x00056ca4) popup_preview_window_g1

0x72ee,	// (0x00056c68) list_single_preview_pane_ParamLimits

0x72ee,	// (0x00056c68) list_single_preview_pane

0x7332,	// (0x00056cac) list_single_preview_pane_g1

0x733a,	// (0x00056cb4) list_single_preview_pane_t1

0x7300,	// (0x00056c7a) list_single_preview_pane_t2

0x0001,

0xfb09,	// (0x0005f483) list_single_preview_pane_t

0x7348,	// (0x00056cc2) bg_popup_heading_pane_cp2_ParamLimits

0x7348,	// (0x00056cc2) bg_popup_heading_pane_cp2

0x735e,	// (0x00056cd8) heading_preview_pane_g1

0x7366,	// (0x00056ce0) heading_preview_pane_t1_ParamLimits

0x7366,	// (0x00056ce0) heading_preview_pane_t1

0x2a09,	// (0x00052383) soft_indicator_pane_t1_ParamLimits

0x373d,	// (0x000530b7) scroll_pane_ParamLimits

0x3c6c,	// (0x000535e6) scroll_sc2_left_pane

0x3c75,	// (0x000535ef) scroll_sc2_right_pane

0x3c94,	// (0x0005360e) scroll_bg_pane_g1_ParamLimits

0x3ca9,	// (0x00053623) scroll_bg_pane_g2_ParamLimits

0x3cc1,	// (0x0005363b) scroll_bg_pane_g3_ParamLimits

0xf6ee,	// (0x0005f068) scroll_bg_pane_g_ParamLimits

0x3c94,	// (0x0005360e) scroll_handle_pane_g1_ParamLimits

0x3ce3,	// (0x0005365d) scroll_handle_pane_g2_ParamLimits

0x3cc1,	// (0x0005363b) scroll_handle_pane_g3_ParamLimits

0xf6f5,	// (0x0005f06f) scroll_handle_pane_g_ParamLimits

0x0e99,	// (0x00050813) popup_choice_list_window_ParamLimits

0x0e99,	// (0x00050813) popup_choice_list_window

0x4bbe,	// (0x00054538) choice_list_pane

0x4c4c,	// (0x000545c6) cell_toolbar_pane_t1

0x4c74,	// (0x000545ee) toolbar_button_pane_ParamLimits

0x5dd2,	// (0x0005574c) ai_gene_pane_1_t2_ParamLimits

0x5dd2,	// (0x0005574c) ai_gene_pane_1_t2

0x0001,

0xf911,	// (0x0005f28b) ai_gene_pane_1_t_ParamLimits

0xf911,	// (0x0005f28b) ai_gene_pane_1_t

0x7383,	// (0x00056cfd) scroll_sc2_left_pane_g1

0x7383,	// (0x00056cfd) scroll_sc2_right_pane_g1

0x4770,	// (0x000540ea) bg_popup_sub_pane_cp10

0x738d,	// (0x00056d07) list_choice_list_pane

0x73a6,	// (0x00056d20) list_single_choice_list_pane_ParamLimits

0x73a6,	// (0x00056d20) list_single_choice_list_pane

0x73b9,	// (0x00056d33) list_single_choice_list_pane_g1

0x3976,	// (0x000532f0) list_single_choice_list_pane_t1_ParamLimits

0x3976,	// (0x000532f0) list_single_choice_list_pane_t1

0x73c1,	// (0x00056d3b) choice_list_pane_g1

0x73c9,	// (0x00056d43) choice_list_pane_t1

0x2829,	// (0x000521a3) input_focus_pane_cp11

0x3b4d,	// (0x000534c7) title_pane_stacon_g2_ParamLimits

0x3b4d,	// (0x000534c7) title_pane_stacon_g2

0x0002,

0xf6d4,	// (0x0005f04e) title_pane_stacon_g_ParamLimits

0xf6d4,	// (0x0005f04e) title_pane_stacon_g

0x4430,	// (0x00053daa) cursor_press_pane

0xbd1a,	// (0x0005b694) popup_fep_hwr_window_ParamLimits

0xbd1a,	// (0x0005b694) popup_fep_hwr_window

0x0fbf,	// (0x00050939) popup_fep_vkb_window_ParamLimits

0x0fbf,	// (0x00050939) popup_fep_vkb_window

0x73d7,	// (0x00056d51) cursor_press_pane_g1

0x0002,

0xfb32,	// (0x0005f4ac) fep_vkb_side_pane_g_ParamLimits

0x1b11,	// (0x0005148b) fep_hwr_candidate_pane_ParamLimits

0x1b11,	// (0x0005148b) fep_hwr_candidate_pane

0x1b3b,	// (0x000514b5) fep_hwr_side_pane_ParamLimits

0x1b3b,	// (0x000514b5) fep_hwr_side_pane

0x1b5b,	// (0x000514d5) fep_hwr_top_pane_ParamLimits

0x1b5b,	// (0x000514d5) fep_hwr_top_pane

0x1b73,	// (0x000514ed) fep_hwr_write_pane_ParamLimits

0x1b73,	// (0x000514ed) fep_hwr_write_pane

0xfb32,	// (0x0005f4ac) fep_vkb_side_pane_g

0x73df,	// (0x00056d59) fep_hwr_top_pane_g1

0x73f1,	// (0x00056d6b) fep_hwr_top_pane_g2

0x1bad,	// (0x00051527) fep_hwr_top_pane_g3

0x0002,

0xfb0e,	// (0x0005f488) fep_hwr_top_pane_g

0x1bc2,	// (0x0005153c) fep_hwr_top_text_pane

0x3e3a,	// (0x000537b4) fep_hwr_top_text_pane_g1

0x7427,	// (0x00056da1) fep_hwr_top_text_pane_t1

0x1cb8,	// (0x00051632) fep_hwr_candidate_pane_g1

0x767a,	// (0x00056ff4) fep_vkb_keypad_pane_g3_ParamLimits

0x767a,	// (0x00056ff4) fep_vkb_keypad_pane_g3

0x76a2,	// (0x0005701c) fep_vkb_keypad_pane_g4_ParamLimits

0x76a2,	// (0x0005701c) fep_vkb_keypad_pane_g4

0x7711,	// (0x0005708b) fep_vkb_bottom_pane_g2_ParamLimits

0x7711,	// (0x0005708b) fep_vkb_bottom_pane_g2

0x0001,

0xfb39,	// (0x0005f4b3) fep_vkb_bottom_pane_g_ParamLimits

0xfb39,	// (0x0005f4b3) fep_vkb_bottom_pane_g

0x7383,	// (0x00056cfd) cell_vkb_side_pane_g2

0x0001,

0xfb43,	// (0x0005f4bd) cell_vkb_side_pane_g

0x779c,	// (0x00057116) cell_vkb_side_pane_t1

0x77aa,	// (0x00057124) cell_vkb_side_pane_t1_copy1

0x7383,	// (0x00056cfd) bg_fep_vkb_candidate_pane_g2

0x78d6,	// (0x00057250) cell_vkb_candidate_pane_ParamLimits

0x7435,	// (0x00056daf) aid_size_cell_vkb_ParamLimits

0x7435,	// (0x00056daf) aid_size_cell_vkb

0x78d6,	// (0x00057250) cell_vkb_candidate_pane

0x1cdf,	// (0x00051659) bg_popup_fep_shadow_pane_g1

0xdde6,	// (0x0005d760) fep_vkb_bottom_pane_ParamLimits

0xdde6,	// (0x0005d760) fep_vkb_bottom_pane

0x74f9,	// (0x00056e73) fep_vkb_candidate_pane_ParamLimits

0x74f9,	// (0x00056e73) fep_vkb_candidate_pane

0xde0b,	// (0x0005d785) fep_vkb_keypad_pane_ParamLimits

0xde0b,	// (0x0005d785) fep_vkb_keypad_pane

0xde47,	// (0x0005d7c1) fep_vkb_side_pane_ParamLimits

0xde47,	// (0x0005d7c1) fep_vkb_side_pane

0xde83,	// (0x0005d7fd) fep_vkb_top_pane_ParamLimits

0xde83,	// (0x0005d7fd) fep_vkb_top_pane

0x75d3,	// (0x00056f4d) fep_vkb_top_pane_g1_ParamLimits

0x75d3,	// (0x00056f4d) fep_vkb_top_pane_g1

0x75e2,	// (0x00056f5c) fep_vkb_top_pane_g2_ParamLimits

0x75e2,	// (0x00056f5c) fep_vkb_top_pane_g2

0x75f1,	// (0x00056f6b) fep_vkb_top_pane_g3_ParamLimits

0x75f1,	// (0x00056f6b) fep_vkb_top_pane_g3

0x0003,

0xfb29,	// (0x0005f4a3) fep_vkb_top_pane_g_ParamLimits

0xfb29,	// (0x0005f4a3) fep_vkb_top_pane_g

0x760f,	// (0x00056f89) fep_vkb_top_text_pane_ParamLimits

0x760f,	// (0x00056f89) fep_vkb_top_text_pane

0xdebf,	// (0x0005d839) fep_vkb_side_pane_g1_ParamLimits

0xdebf,	// (0x0005d839) fep_vkb_side_pane_g1

0x7669,	// (0x00056fe3) grid_vkb_side_pane_ParamLimits

0x7669,	// (0x00056fe3) grid_vkb_side_pane

0x1ce7,	// (0x00051661) bg_popup_fep_shadow_pane_g2

0x1cf0,	// (0x0005166a) bg_popup_fep_shadow_pane_g3

0x1cf8,	// (0x00051672) bg_popup_fep_shadow_pane_g4

0x1d01,	// (0x0005167b) bg_popup_fep_shadow_pane_g5

0x1d0b,	// (0x00051685) bg_popup_fep_shadow_pane_g6

0x1d13,	// (0x0005168d) bg_popup_fep_shadow_pane_g7

0x3855,	// (0x000531cf) bg_popup_fep_shadow_pane_g8

0x76c0,	// (0x0005703a) grid_vkb_keypad_number_pane_ParamLimits

0x76c0,	// (0x0005703a) grid_vkb_keypad_number_pane

0x76d0,	// (0x0005704a) grid_vkb_keypad_pane_ParamLimits

0x76d0,	// (0x0005704a) grid_vkb_keypad_pane

0x76f6,	// (0x00057070) fep_vkb_bottom_pane_g1_ParamLimits

0x76f6,	// (0x00057070) fep_vkb_bottom_pane_g1

0x771f,	// (0x00057099) grid_vkb_keypad_bottom_left_pane_ParamLimits

0x771f,	// (0x00057099) grid_vkb_keypad_bottom_left_pane

0x7734,	// (0x000570ae) grid_vkb_keypad_bottom_right_pane_ParamLimits

0x7734,	// (0x000570ae) grid_vkb_keypad_bottom_right_pane

0x7749,	// (0x000570c3) fep_vkb_top_text_pane_g1

0xdf06,	// (0x0005d880) fep_vkb_top_text_pane_t1

0xdf18,	// (0x0005d892) cell_vkb_side_pane_ParamLimits

0xdf18,	// (0x0005d892) cell_vkb_side_pane

0x7383,	// (0x00056cfd) cell_vkb_side_pane_g1

0x77b8,	// (0x00057132) cell_vkb_keypad_pane_ParamLimits

0x77b8,	// (0x00057132) cell_vkb_keypad_pane

0x782d,	// (0x000571a7) cell_vkb_keypad_pane_g1

0x0008,

0xfb56,	// (0x0005f4d0) bg_popup_fep_shadow_pane_g

0x1d25,	// (0x0005169f) cell_hwr_side_pane_g1

0x1d25,	// (0x0005169f) cell_hwr_side_pane_g2

0x7837,	// (0x000571b1) cell_vkb_keypad_pane_t1

0xdf2e,	// (0x0005d8a8) cell_vkb_keypad_bottom_left_pane_ParamLimits

0xdf2e,	// (0x0005d8a8) cell_vkb_keypad_bottom_left_pane

0xdf43,	// (0x0005d8bd) cell_vkb_keypad_bottom_right_pane_ParamLimits

0xdf43,	// (0x0005d8bd) cell_vkb_keypad_bottom_right_pane

0x7383,	// (0x00056cfd) cell_vkb_keypad_bottom_left_pane_g1

0x7383,	// (0x00056cfd) cell_vkb_keypad_bottom_right_pane_g1

0x789b,	// (0x00057215) cell_vkb_keypad_number_pane_ParamLimits

0x789b,	// (0x00057215) cell_vkb_keypad_number_pane

0x78ba,	// (0x00057234) cell_vkb_keypad_number_pane_g1

0x78c4,	// (0x0005723e) cell_vkb_keypad_number_pane_g2

0x78cd,	// (0x00057247) cell_vkb_keypad_number_pane_g3

0x0002,

0xfb48,	// (0x0005f4c2) cell_vkb_keypad_number_pane_g

0x7837,	// (0x000571b1) cell_vkb_keypad_number_pane_t1

0x78f1,	// (0x0005726b) fep_vkb_candidate_pane_g1

0x0001,

0xfb69,	// (0x0005f4e3) cell_hwr_side_pane_g

0x790a,	// (0x00057284) cell_hwr_side_pane_t1

0x1d2f,	// (0x000516a9) cell_hwr_side_pane_t1_copy1

0x1d3d,	// (0x000516b7) cell_hwr_candidate_pane_g1

0x1d6c,	// (0x000516e6) cell_hwr_candidate_pane_t1

0x7383,	// (0x00056cfd) cell_vkb_candidate_pane_g2

0x794e,	// (0x000572c8) cell_vkb_candidate_pane_t1

0x1ad8,	// (0x00051452) bg_popup_fep_shadow_pane_ParamLimits

0x1ad8,	// (0x00051452) bg_popup_fep_shadow_pane

0x1b8d,	// (0x00051507) bg_fep_hwr_top_pane_g4

0x7403,	// (0x00056d7d) bg_hwr_side_pane_g1_ParamLimits

0x7403,	// (0x00056d7d) bg_hwr_side_pane_g1

0xc589,	// (0x0005bf03) cell_hwr_side_pane_ParamLimits

0xc589,	// (0x0005bf03) cell_hwr_side_pane

0x1c39,	// (0x000515b3) fep_hwr_write_pane_g1_ParamLimits

0x1c39,	// (0x000515b3) fep_hwr_write_pane_g1

0x1c46,	// (0x000515c0) fep_hwr_write_pane_g2_ParamLimits

0x1c46,	// (0x000515c0) fep_hwr_write_pane_g2

0x1c53,	// (0x000515cd) fep_hwr_write_pane_g3_ParamLimits

0x1c53,	// (0x000515cd) fep_hwr_write_pane_g3

0xc5a9,	// (0x0005bf23) fep_hwr_write_pane_g4_ParamLimits

0xc5a9,	// (0x0005bf23) fep_hwr_write_pane_g4

0x0005,

0xfb15,	// (0x0005f48f) fep_hwr_write_pane_g_ParamLimits

0xfb15,	// (0x0005f48f) fep_hwr_write_pane_g

0x1b8d,	// (0x00051507) bg_fep_hwr_candidate_pane_g2_ParamLimits

0x1b8d,	// (0x00051507) bg_fep_hwr_candidate_pane_g2

0x1c76,	// (0x000515f0) cell_hwr_candidate_pane_ParamLimits

0x1c76,	// (0x000515f0) cell_hwr_candidate_pane

0x1cb8,	// (0x00051632) fep_hwr_candidate_pane_g1_ParamLimits

0x7463,	// (0x00056ddd) bg_popup_fep_shadow_pane_cp2_ParamLimits

0x7463,	// (0x00056ddd) bg_popup_fep_shadow_pane_cp2

0x7601,	// (0x00056f7b) fep_vkb_top_pane_g4_ParamLimits

0x7601,	// (0x00056f7b) fep_vkb_top_pane_g4

0x7647,	// (0x00056fc1) fep_vkb_side_pane_g2_ParamLimits

0x7647,	// (0x00056fc1) fep_vkb_side_pane_g2

0xb816,	// (0x0005b190) list_setting_pane_t4_ParamLimits

0xb816,	// (0x0005b190) list_setting_pane_t4

0xb8b0,	// (0x0005b22a) list_setting_number_pane_t5_ParamLimits

0xb8b0,	// (0x0005b22a) list_setting_number_pane_t5

0xcf8d,	// (0x0005c907) list_double_heading_pane_cp2_ParamLimits

0xcf8d,	// (0x0005c907) list_double_heading_pane_cp2

0x37f0,	// (0x0005316a) list_double_heading_pane_g1_cp2_ParamLimits

0x37f0,	// (0x0005316a) list_double_heading_pane_g1_cp2

0x37fc,	// (0x00053176) list_double_heading_pane_g2_cp2_ParamLimits

0x37fc,	// (0x00053176) list_double_heading_pane_g2_cp2

0x795c,	// (0x000572d6) list_double_heading_pane_t1_cp2_ParamLimits

0x795c,	// (0x000572d6) list_double_heading_pane_t1_cp2

0x7972,	// (0x000572ec) list_double_heading_pane_t2_cp2_ParamLimits

0x7972,	// (0x000572ec) list_double_heading_pane_t2_cp2

0x2811,	// (0x0005218b) aid_value_unit2

0xf4e5,	// (0x0005ee5f) popup_preview_fixed_window

0x2ba6,	// (0x00052520) bg_popup_preview_window_pane_cp02

0x7984,	// (0x000572fe) list_preview_fixed_pane

0x79ca,	// (0x00057344) list_empty_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_empty_pane_fp

0x79ca,	// (0x00057344) list_single_cale_day_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_cale_day_pane_fp

0x79ca,	// (0x00057344) list_single_graphic_heading_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_graphic_heading_pane_fp

0x79ca,	// (0x00057344) list_single_graphic_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_graphic_pane_fp

0x79ca,	// (0x00057344) list_single_heading_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_heading_pane_fp

0x79ca,	// (0x00057344) list_single_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_pane_fp

0x79df,	// (0x00057359) list_single_pane_fp_g1_ParamLimits

0x79df,	// (0x00057359) list_single_pane_fp_g1

0x37f0,	// (0x0005316a) list_single_pane_fp_g2_ParamLimits

0x37f0,	// (0x0005316a) list_single_pane_fp_g2

0x37fc,	// (0x00053176) list_single_pane_fp_g3_ParamLimits

0x37fc,	// (0x00053176) list_single_pane_fp_g3

0x79eb,	// (0x00057365) list_single_pane_fp_g4_ParamLimits

0x79eb,	// (0x00057365) list_single_pane_fp_g4

0x0003,

0xfb7c,	// (0x0005f4f6) list_single_pane_fp_g_ParamLimits

0xfb7c,	// (0x0005f4f6) list_single_pane_fp_g

0x2fa3,	// (0x0005291d) list_single_pane_fp_t1_ParamLimits

0x2fa3,	// (0x0005291d) list_single_pane_fp_t1

0x2fba,	// (0x00052934) list_single_graphic_pane_fp_g1_ParamLimits

0x2fba,	// (0x00052934) list_single_graphic_pane_fp_g1

0x79df,	// (0x00057359) list_single_graphic_pane_fp_g2_ParamLimits

0x79df,	// (0x00057359) list_single_graphic_pane_fp_g2

0x37f0,	// (0x0005316a) list_single_graphic_pane_fp_g3_ParamLimits

0x37f0,	// (0x0005316a) list_single_graphic_pane_fp_g3

0x37fc,	// (0x00053176) list_single_graphic_pane_fp_g4_ParamLimits

0x37fc,	// (0x00053176) list_single_graphic_pane_fp_g4

0x79eb,	// (0x00057365) list_single_graphic_pane_fp_g5_ParamLimits

0x79eb,	// (0x00057365) list_single_graphic_pane_fp_g5

0x0004,

0xfb85,	// (0x0005f4ff) list_single_graphic_pane_fp_g_ParamLimits

0xfb85,	// (0x0005f4ff) list_single_graphic_pane_fp_g

0x2fc6,	// (0x00052940) list_single_graphic_pane_fp_t1_ParamLimits

0x2fc6,	// (0x00052940) list_single_graphic_pane_fp_t1

0x2fba,	// (0x00052934) list_single_graphic_heading_pane_fp_g1_ParamLimits

0x2fba,	// (0x00052934) list_single_graphic_heading_pane_fp_g1

0x79df,	// (0x00057359) list_single_graphic_heading_pane_fp_g2_ParamLimits

0x79df,	// (0x00057359) list_single_graphic_heading_pane_fp_g2

0x37f0,	// (0x0005316a) list_single_graphic_heading_pane_fp_g3_ParamLimits

0x37f0,	// (0x0005316a) list_single_graphic_heading_pane_fp_g3

0x37fc,	// (0x00053176) list_single_graphic_heading_pane_fp_g4_ParamLimits

0x37fc,	// (0x00053176) list_single_graphic_heading_pane_fp_g4

0x79eb,	// (0x00057365) list_single_graphic_heading_pane_fp_g5_ParamLimits

0x79eb,	// (0x00057365) list_single_graphic_heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0005f4ff) list_single_graphic_heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0005f4ff) list_single_graphic_heading_pane_fp_g

0x2fdc,	// (0x00052956) list_single_graphic_heading_pane_fp_t1_ParamLimits

0x2fdc,	// (0x00052956) list_single_graphic_heading_pane_fp_t1

0x2ff2,	// (0x0005296c) list_single_graphic_heading_pane_fp_t2_ParamLimits

0x2ff2,	// (0x0005296c) list_single_graphic_heading_pane_fp_t2

0x0001,

0xfb90,	// (0x0005f50a) list_single_graphic_heading_pane_fp_t_ParamLimits

0xfb90,	// (0x0005f50a) list_single_graphic_heading_pane_fp_t

0x3004,	// (0x0005297e) list_single_cale_day_pane_fp_g1_ParamLimits

0x3004,	// (0x0005297e) list_single_cale_day_pane_fp_g1

0x79f7,	// (0x00057371) list_single_cale_day_pane_fp_g2_ParamLimits

0x79f7,	// (0x00057371) list_single_cale_day_pane_fp_g2

0x303c,	// (0x000529b6) list_single_cale_day_pane_fp_g3_ParamLimits

0x303c,	// (0x000529b6) list_single_cale_day_pane_fp_g3

0x3064,	// (0x000529de) list_single_cale_day_pane_fp_g4_ParamLimits

0x3064,	// (0x000529de) list_single_cale_day_pane_fp_g4

0x3088,	// (0x00052a02) list_single_cale_day_pane_fp_g5_ParamLimits

0x3088,	// (0x00052a02) list_single_cale_day_pane_fp_g5

0x0004,

0xfb95,	// (0x0005f50f) list_single_cale_day_pane_fp_g_ParamLimits

0xfb95,	// (0x0005f50f) list_single_cale_day_pane_fp_g

0x30ac,	// (0x00052a26) list_single_cale_day_pane_fp_t1_ParamLimits

0x30ac,	// (0x00052a26) list_single_cale_day_pane_fp_t1

0x30d2,	// (0x00052a4c) list_single_cale_day_pane_fp_t2_ParamLimits

0x30d2,	// (0x00052a4c) list_single_cale_day_pane_fp_t2

0x30eb,	// (0x00052a65) list_single_cale_day_pane_fp_t3_ParamLimits

0x30eb,	// (0x00052a65) list_single_cale_day_pane_fp_t3

0x0002,

0xfba0,	// (0x0005f51a) list_single_cale_day_pane_fp_t_ParamLimits

0xfba0,	// (0x0005f51a) list_single_cale_day_pane_fp_t

0x79df,	// (0x00057359) list_empty_pane_fp_g1_ParamLimits

0x79df,	// (0x00057359) list_empty_pane_fp_g1

0x3104,	// (0x00052a7e) list_empty_pane_fp_t1

0x3112,	// (0x00052a8c) list_empty_pane_fp_t2

0x0001,

0xfba7,	// (0x0005f521) list_empty_pane_fp_t

0x79df,	// (0x00057359) list_single_heading_pane_fp_g1_ParamLimits

0x79df,	// (0x00057359) list_single_heading_pane_fp_g1

0x37f0,	// (0x0005316a) list_single_heading_pane_fp_g2_ParamLimits

0x37f0,	// (0x0005316a) list_single_heading_pane_fp_g2

0x37fc,	// (0x00053176) list_single_heading_pane_fp_g3_ParamLimits

0x37fc,	// (0x00053176) list_single_heading_pane_fp_g3

0x0002,

0xfbac,	// (0x0005f526) list_single_heading_pane_fp_g_ParamLimits

0xfbac,	// (0x0005f526) list_single_heading_pane_fp_g

0x3120,	// (0x00052a9a) list_single_heading_pane_fp_t1_ParamLimits

0x3120,	// (0x00052a9a) list_single_heading_pane_fp_t1

0x3132,	// (0x00052aac) list_single_heading_pane_fp_t2_ParamLimits

0x3132,	// (0x00052aac) list_single_heading_pane_fp_t2

0x0001,

0xfbb3,	// (0x0005f52d) list_single_heading_pane_fp_t_ParamLimits

0xfbb3,	// (0x0005f52d) list_single_heading_pane_fp_t

0x39e4,	// (0x0005335e) aid_size_cell_fast

0x2b16,	// (0x00052490) soft_indicator_pane_cp1_t1

0x3a21,	// (0x0005339b) cell_app_pane_cp2_ParamLimits

0x3a21,	// (0x0005339b) cell_app_pane_cp2

0x1afa,	// (0x00051474) fep_hwr_candidate_drop_down_list_pane

0x1cd2,	// (0x0005164c) fep_hwr_candidate_pane_g3_ParamLimits

0x1cd2,	// (0x0005164c) fep_hwr_candidate_pane_g3

0xe1b4,	// (0x0005db2e) fep_hwr_candidate_pane_g4_ParamLimits

0xe1b4,	// (0x0005db2e) fep_hwr_candidate_pane_g4

0x0002,

0xfb22,	// (0x0005f49c) fep_hwr_candidate_pane_g_ParamLimits

0xfb22,	// (0x0005f49c) fep_hwr_candidate_pane_g

0x74e8,	// (0x00056e62) fep_vkb_candidate_drop_down_list_pane_ParamLimits

0x74e8,	// (0x00056e62) fep_vkb_candidate_drop_down_list_pane

0x78f9,	// (0x00057273) fep_vkb_candidate_pane_g3

0x7901,	// (0x0005727b) fep_vkb_candidate_pane_g4

0x0002,

0xfb4f,	// (0x0005f4c9) fep_vkb_candidate_pane_g

0x1d3d,	// (0x000516b7) cell_hwr_candidate_pane_g1_ParamLimits

0x1d4b,	// (0x000516c5) cell_hwr_candidate_pane_g3_ParamLimits

0x1d4b,	// (0x000516c5) cell_hwr_candidate_pane_g3

0x96bc,	// (0x00059036) cell_hwr_candidate_pane_g4_ParamLimits

0x96bc,	// (0x00059036) cell_hwr_candidate_pane_g4

0x0002,

0xfb6e,	// (0x0005f4e8) cell_hwr_candidate_pane_g_ParamLimits

0xfb6e,	// (0x0005f4e8) cell_hwr_candidate_pane_g

0x7918,	// (0x00057292) cell_vkb_candidate_pane_g3_ParamLimits

0x7918,	// (0x00057292) cell_vkb_candidate_pane_g3

0x7933,	// (0x000572ad) cell_vkb_candidate_pane_g4_ParamLimits

0x7933,	// (0x000572ad) cell_vkb_candidate_pane_g4

0x7a03,	// (0x0005737d) cell_app_pane_cp2_g1_ParamLimits

0x7a03,	// (0x0005737d) cell_app_pane_cp2_g1

0x7a21,	// (0x0005739b) cell_app_pane_cp2_g2_ParamLimits

0x7a21,	// (0x0005739b) cell_app_pane_cp2_g2

0x0001,

0xfbb8,	// (0x0005f532) cell_app_pane_cp2_g_ParamLimits

0xfbb8,	// (0x0005f532) cell_app_pane_cp2_g

0x7a2d,	// (0x000573a7) cell_app_pane_cp2_t1_ParamLimits

0x7a2d,	// (0x000573a7) cell_app_pane_cp2_t1

0x37d6,	// (0x00053150) grid_highlight_pane_cp1_ParamLimits

0x37d6,	// (0x00053150) grid_highlight_pane_cp1

0x1d8a,	// (0x00051704) cell_hwr_candidate_pane_cp1_ParamLimits

0x1d8a,	// (0x00051704) cell_hwr_candidate_pane_cp1

0x1d3d,	// (0x000516b7) fep_hwr_candidate_drop_down_list_pane_g1

0x1da9,	// (0x00051723) fep_hwr_candidate_drop_down_list_pane_g2

0x1db6,	// (0x00051730) fep_hwr_candidate_drop_down_list_pane_g3

0x0002,

0xfbbd,	// (0x0005f537) fep_hwr_candidate_drop_down_list_pane_g

0x1dc3,	// (0x0005173d) fep_hwr_candidate_drop_down_list_scroll_pane

0x1dcc,	// (0x00051746) fep_hwr_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x1dcc,	// (0x00051746) fep_hwr_candidate_drop_down_list_scroll_pane_g1

0x1dd9,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x1dd9,	// (0x00051753) fep_hwr_candidate_drop_down_list_scroll_pane_g2

0x1de6,	// (0x00051760) fep_hwr_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x1de6,	// (0x00051760) fep_hwr_candidate_drop_down_list_scroll_pane_g3

0x1df3,	// (0x0005176d) fep_hwr_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x1df3,	// (0x0005176d) fep_hwr_candidate_drop_down_list_scroll_pane_g4

0x1e0e,	// (0x00051788) fep_hwr_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x1e0e,	// (0x00051788) fep_hwr_candidate_drop_down_list_scroll_pane_g5

0x1e29,	// (0x000517a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x1e29,	// (0x000517a3) fep_hwr_candidate_drop_down_list_scroll_pane_g6

0x1e44,	// (0x000517be) fep_hwr_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x1e44,	// (0x000517be) fep_hwr_candidate_drop_down_list_scroll_pane_g7

0x1e5f,	// (0x000517d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x1e5f,	// (0x000517d9) fep_hwr_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbc4,	// (0x0005f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbc4,	// (0x0005f53e) fep_hwr_candidate_drop_down_list_scroll_pane_g

0x7a3f,	// (0x000573b9) cell_vkb_candidate_pane_cp1_ParamLimits

0x7a3f,	// (0x000573b9) cell_vkb_candidate_pane_cp1

0x7601,	// (0x00056f7b) fep_vkb_candidate_drop_down_list_pane_g1_ParamLimits

0x7601,	// (0x00056f7b) fep_vkb_candidate_drop_down_list_pane_g1

0x7a5f,	// (0x000573d9) fep_vkb_candidate_drop_down_list_pane_g2_ParamLimits

0x7a5f,	// (0x000573d9) fep_vkb_candidate_drop_down_list_pane_g2

0x7a6c,	// (0x000573e6) fep_vkb_candidate_drop_down_list_pane_g3_ParamLimits

0x7a6c,	// (0x000573e6) fep_vkb_candidate_drop_down_list_pane_g3

0x0002,

0xfbd5,	// (0x0005f54f) fep_vkb_candidate_drop_down_list_pane_g_ParamLimits

0xfbd5,	// (0x0005f54f) fep_vkb_candidate_drop_down_list_pane_g

0x7a79,	// (0x000573f3) fep_vkb_candidate_drop_down_list_scroll_pane_ParamLimits

0x7a79,	// (0x000573f3) fep_vkb_candidate_drop_down_list_scroll_pane

0x7a86,	// (0x00057400) fep_vkb_candidate_drop_down_list_scroll_pane_g1_ParamLimits

0x7a86,	// (0x00057400) fep_vkb_candidate_drop_down_list_scroll_pane_g1

0x7a93,	// (0x0005740d) fep_vkb_candidate_drop_down_list_scroll_pane_g2_ParamLimits

0x7a93,	// (0x0005740d) fep_vkb_candidate_drop_down_list_scroll_pane_g2

0x7a9f,	// (0x00057419) fep_vkb_candidate_drop_down_list_scroll_pane_g3_ParamLimits

0x7a9f,	// (0x00057419) fep_vkb_candidate_drop_down_list_scroll_pane_g3

0x7aab,	// (0x00057425) fep_vkb_candidate_drop_down_list_scroll_pane_g4_ParamLimits

0x7aab,	// (0x00057425) fep_vkb_candidate_drop_down_list_scroll_pane_g4

0x7acc,	// (0x00057446) fep_vkb_candidate_drop_down_list_scroll_pane_g5_ParamLimits

0x7acc,	// (0x00057446) fep_vkb_candidate_drop_down_list_scroll_pane_g5

0x7aed,	// (0x00057467) fep_vkb_candidate_drop_down_list_scroll_pane_g6_ParamLimits

0x7aed,	// (0x00057467) fep_vkb_candidate_drop_down_list_scroll_pane_g6

0x7b0e,	// (0x00057488) fep_vkb_candidate_drop_down_list_scroll_pane_g7_ParamLimits

0x7b0e,	// (0x00057488) fep_vkb_candidate_drop_down_list_scroll_pane_g7

0x7b2f,	// (0x000574a9) fep_vkb_candidate_drop_down_list_scroll_pane_g8_ParamLimits

0x7b2f,	// (0x000574a9) fep_vkb_candidate_drop_down_list_scroll_pane_g8

0x0007,

0xfbdc,	// (0x0005f556) fep_vkb_candidate_drop_down_list_scroll_pane_g_ParamLimits

0xfbdc,	// (0x0005f556) fep_vkb_candidate_drop_down_list_scroll_pane_g

0xb3ec,	// (0x0005ad66) title_pane_g1_ParamLimits

0xb3ff,	// (0x0005ad79) title_pane_g2_ParamLimits

0xf554,	// (0x0005eece) title_pane_g_ParamLimits

0x3e2a,	// (0x000537a4) aid_call2_pane

0x3e32,	// (0x000537ac) aid_call_pane

0x3e3a,	// (0x000537b4) popup_clock_analogue_window_g1

0x3e3a,	// (0x000537b4) popup_clock_analogue_window_g2

0x09b6,	// (0x00050330) popup_clock_analogue_window_g3

0x09bf,	// (0x00050339) popup_clock_analogue_window_g4

0x2833,	// (0x000521ad) popup_clock_analogue_window_g5

0x0004,

0xf703,	// (0x0005f07d) popup_clock_analogue_window_g

0x09c7,	// (0x00050341) popup_clock_analogue_window_t1

0x09d5,	// (0x0005034f) clock_digital_number_pane_ParamLimits

0x09d5,	// (0x0005034f) clock_digital_number_pane

0x09e1,	// (0x0005035b) clock_digital_number_pane_cp02_ParamLimits

0x09e1,	// (0x0005035b) clock_digital_number_pane_cp02

0x09ed,	// (0x00050367) clock_digital_number_pane_cp03_ParamLimits

0x09ed,	// (0x00050367) clock_digital_number_pane_cp03

0x09f9,	// (0x00050373) clock_digital_number_pane_cp04_ParamLimits

0x09f9,	// (0x00050373) clock_digital_number_pane_cp04

0x0a05,	// (0x0005037f) clock_digital_separator_pane_ParamLimits

0x0a05,	// (0x0005037f) clock_digital_separator_pane

0x0a11,	// (0x0005038b) popup_clock_digital_window_t1_ParamLimits

0x0a11,	// (0x0005038b) popup_clock_digital_window_t1

0x2833,	// (0x000521ad) clock_digital_number_pane_g1

0x2833,	// (0x000521ad) clock_digital_number_pane_g2

0x0001,

0xf70e,	// (0x0005f088) clock_digital_number_pane_g

0x2833,	// (0x000521ad) clock_digital_separator_pane_g1

0x2833,	// (0x000521ad) clock_digital_separator_pane_g2

0x0001,

0xf70e,	// (0x0005f088) clock_digital_separator_pane_g

0xd1f0,	// (0x0005cb6a) aid_fill_nsta_ParamLimits

0xd326,	// (0x0005cca0) indicator_nsta_pane_ParamLimits

0x4a56,	// (0x000543d0) popup_clock_analogue_window

0x4a56,	// (0x000543d0) popup_clock_digital_window

0x39a5,	// (0x0005331f) grid_indicator_nsta_pane_ParamLimits

0x6d69,	// (0x000566e3) clock_nsta_pane_t2

0x0001,

0xfaa2,	// (0x0005f41c) clock_nsta_pane_t

0x097a,	// (0x000502f4) aid_size_max_handle

0xba5f,	// (0x0005b3d9) aid_size_min_handle

0x4430,	// (0x00053daa) editor_scroll_pane

0x7b4a,	// (0x000574c4) ex_editor_pane

0x3952,	// (0x000532cc) scroll_pane_cp13

0x3769,	// (0x000530e3) scroll_pane_cp14

0x3e69,	// (0x000537e3) scroll_pane_cp36

0xcf9e,	// (0x0005c918) list_single_graphic_hl_pane_cp2_ParamLimits

0xcf9e,	// (0x0005c918) list_single_graphic_hl_pane_cp2

0xd5eb,	// (0x0005cf65) list_single_graphic_hl_pane_ParamLimits

0xd5eb,	// (0x0005cf65) list_single_graphic_hl_pane

0x3148,	// (0x00052ac2) aid_size_min_hl_cp1

0x7b52,	// (0x000574cc) list_highlight_pane_cp34_ParamLimits

0x7b52,	// (0x000574cc) list_highlight_pane_cp34

0x7b63,	// (0x000574dd) list_single_graphic_hl_pane_g1_ParamLimits

0x7b63,	// (0x000574dd) list_single_graphic_hl_pane_g1

0x3151,	// (0x00052acb) list_single_graphic_hl_pane_g2_ParamLimits

0x3151,	// (0x00052acb) list_single_graphic_hl_pane_g2

0x3151,	// (0x00052acb) list_single_graphic_hl_pane_g3_ParamLimits

0x3151,	// (0x00052acb) list_single_graphic_hl_pane_g3

0x43a1,	// (0x00053d1b) list_single_graphic_hl_pane_g4_ParamLimits

0x43a1,	// (0x00053d1b) list_single_graphic_hl_pane_g4

0x315d,	// (0x00052ad7) list_single_graphic_hl_pane_g5_ParamLimits

0x315d,	// (0x00052ad7) list_single_graphic_hl_pane_g5

0x0004,

0xfbed,	// (0x0005f567) list_single_graphic_hl_pane_g_ParamLimits

0xfbed,	// (0x0005f567) list_single_graphic_hl_pane_g

0x3171,	// (0x00052aeb) list_single_graphic_hl_pane_t1_ParamLimits

0x3171,	// (0x00052aeb) list_single_graphic_hl_pane_t1

0x7b70,	// (0x000574ea) aid_size_min_hl_cp2

0x7b79,	// (0x000574f3) list_highlight_pane_cp34_cp2_ParamLimits

0x7b79,	// (0x000574f3) list_highlight_pane_cp34_cp2

0x7b63,	// (0x000574dd) list_single_graphic_hl_pane_g1_cp2_ParamLimits

0x7b63,	// (0x000574dd) list_single_graphic_hl_pane_g1_cp2

0x7b86,	// (0x00057500) list_single_graphic_hl_pane_g2_cp2_ParamLimits

0x7b86,	// (0x00057500) list_single_graphic_hl_pane_g2_cp2

0xdf5e,	// (0x0005d8d8) list_single_graphic_hl_pane_g3_cp2_ParamLimits

0xdf5e,	// (0x0005d8d8) list_single_graphic_hl_pane_g3_cp2

0x4c18,	// (0x00054592) list_single_graphic_hl_pane_g4_cp2_ParamLimits

0x4c18,	// (0x00054592) list_single_graphic_hl_pane_g4_cp2

0x7ba0,	// (0x0005751a) list_single_graphic_hl_pane_g5_cp2_ParamLimits

0x7ba0,	// (0x0005751a) list_single_graphic_hl_pane_g5_cp2

0xbb42,	// (0x0005b4bc) control_pane_g4_ParamLimits

0xbb42,	// (0x0005b4bc) control_pane_g4

0x4770,	// (0x000540ea) bg_popup_sub_pane_cp10_ParamLimits

0x738d,	// (0x00056d07) list_choice_list_pane_ParamLimits

0x739c,	// (0x00056d16) scroll_pane_cp23

0x2ba6,	// (0x00052520) bg_popup_preview_window_pane_cp02_ParamLimits

0x7984,	// (0x000572fe) list_preview_fixed_pane_ParamLimits

0x799a,	// (0x00057314) list_preview_fixed_pane_cp_ParamLimits

0x799a,	// (0x00057314) list_preview_fixed_pane_cp

0x79a6,	// (0x00057320) popup_preview_fixed_window_g1_ParamLimits

0x79a6,	// (0x00057320) popup_preview_fixed_window_g1

0x79b2,	// (0x0005732c) popup_preview_fixed_window_g2_ParamLimits

0x79b2,	// (0x0005732c) popup_preview_fixed_window_g2

0x0002,

0xfb75,	// (0x0005f4ef) popup_preview_fixed_window_g_ParamLimits

0xfb75,	// (0x0005f4ef) popup_preview_fixed_window_g

0x08ee,	// (0x00050268) aid_navi_side_left_pane_ParamLimits

0x0903,	// (0x0005027d) aid_navi_side_right_pane_ParamLimits

0x091b,	// (0x00050295) navi_icon_pane_stacon_ParamLimits

0x092f,	// (0x000502a9) navi_navi_pane_stacon_ParamLimits

0x091b,	// (0x00050295) navi_text_pane_stacon_ParamLimits

0xf3dc,	// (0x0005ed56) main_text_info_pane

0x7bca,	// (0x00057544) listscroll_text_info_pane

0x7bd2,	// (0x0005754c) list_text_info_pane_ParamLimits

0x7bd2,	// (0x0005754c) list_text_info_pane

0x7be1,	// (0x0005755b) scroll_pane_cp24_ParamLimits

0x7be1,	// (0x0005755b) scroll_pane_cp24

0xdf6c,	// (0x0005d8e6) list_text_info_pane_t1_ParamLimits

0xdf6c,	// (0x0005d8e6) list_text_info_pane_t1

0xbc8d,	// (0x0005b607) popup_fast_swap2_window_ParamLimits

0xbc8d,	// (0x0005b607) popup_fast_swap2_window

0x7c30,	// (0x000575aa) aid_size_cell_fast2

0x2829,	// (0x000521a3) bg_popup_window_pane_cp17

0x5162,	// (0x00054adc) heading_pane_cp2

0x3433,	// (0x00052dad) listscroll_fast2_pane

0x7c3a,	// (0x000575b4) grid_fast2_pane

0x7c44,	// (0x000575be) listscroll_fast2_pane_g1

0x7c4c,	// (0x000575c6) listscroll_fast2_pane_g2

0x0001,

0xfbf8,	// (0x0005f572) listscroll_fast2_pane_g

0x3952,	// (0x000532cc) scroll_pane_cp26

0x7c56,	// (0x000575d0) cell_fast2_pane_ParamLimits

0x7c56,	// (0x000575d0) cell_fast2_pane

0x7c6b,	// (0x000575e5) cell_fast2_pane_g1

0x7c74,	// (0x000575ee) cell_fast2_pane_g2

0x7c7d,	// (0x000575f7) cell_fast2_pane_g3

0x0002,

0xfbfd,	// (0x0005f577) cell_fast2_pane_g

0x3526,	// (0x00052ea0) grid_highlight_pane_cp9

0x0e75,	// (0x000507ef) main_eswt_pane_ParamLimits

0x0e75,	// (0x000507ef) main_eswt_pane

0x7bf6,	// (0x00057570) list_single_text_info_pane

0x7c85,	// (0x000575ff) eswt_ctrl_button_pane

0x7c85,	// (0x000575ff) eswt_ctrl_canvas_pane

0x7c8d,	// (0x00057607) eswt_ctrl_combo_pane

0x7c85,	// (0x000575ff) eswt_ctrl_default_pane

0x7c85,	// (0x000575ff) eswt_ctrl_label_pane

0x7c95,	// (0x0005760f) eswt_ctrl_wait_pane

0x7c9d,	// (0x00057617) eswt_shell_pane

0x2829,	// (0x000521a3) listscroll_eswt_app_pane

0x7cbd,	// (0x00057637) popup_eswt_tasktip_window_ParamLimits

0x7cbd,	// (0x00057637) popup_eswt_tasktip_window

0x4d78,	// (0x000546f2) bg_popup_window_pane_cp18

0x7cce,	// (0x00057648) eswt_control_pane_g1_ParamLimits

0x7cce,	// (0x00057648) eswt_control_pane_g1

0x7cdb,	// (0x00057655) eswt_control_pane_g2_ParamLimits

0x7cdb,	// (0x00057655) eswt_control_pane_g2

0x7ce8,	// (0x00057662) eswt_control_pane_g3_ParamLimits

0x7ce8,	// (0x00057662) eswt_control_pane_g3

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_ParamLimits

0x7cf5,	// (0x0005766f) eswt_control_pane_g4

0x0003,

0xfc04,	// (0x0005f57e) eswt_control_pane_g_ParamLimits

0xfc04,	// (0x0005f57e) eswt_control_pane_g

0x37d6,	// (0x00053150) bg_button_pane_ParamLimits

0x37d6,	// (0x00053150) bg_button_pane

0x353b,	// (0x00052eb5) common_borders_pane_copy2_ParamLimits

0x353b,	// (0x00052eb5) common_borders_pane_copy2

0x7d02,	// (0x0005767c) control_button_pane_g1_ParamLimits

0x7d02,	// (0x0005767c) control_button_pane_g1

0x7d0e,	// (0x00057688) control_button_pane_g2_ParamLimits

0x7d0e,	// (0x00057688) control_button_pane_g2

0x7d1a,	// (0x00057694) control_button_pane_g3_ParamLimits

0x7d1a,	// (0x00057694) control_button_pane_g3

0x0002,

0xfc0d,	// (0x0005f587) control_button_pane_g_ParamLimits

0xfc0d,	// (0x0005f587) control_button_pane_g

0x7d2e,	// (0x000576a8) control_button_pane_t1

0x7d3c,	// (0x000576b6) control_button_pane_t2

0x0001,

0xfc14,	// (0x0005f58e) control_button_pane_t

0x4c80,	// (0x000545fa) bg_button_pane_g1

0x4c90,	// (0x0005460a) bg_button_pane_g2

0x4c88,	// (0x00054602) bg_button_pane_g3

0x4ca0,	// (0x0005461a) bg_button_pane_g4

0x4c98,	// (0x00054612) bg_button_pane_g5

0x4ca8,	// (0x00054622) bg_button_pane_g6

0x4cb0,	// (0x0005462a) bg_button_pane_g7

0x4cc0,	// (0x0005463a) bg_button_pane_g8

0x4cb8,	// (0x00054632) bg_button_pane_g9

0x0008,

0xf865,	// (0x0005f1df) bg_button_pane_g

0x7348,	// (0x00056cc2) common_borders_pane_ParamLimits

0x7348,	// (0x00056cc2) common_borders_pane

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy1_ParamLimits

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy1

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy1_ParamLimits

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy1

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy1_ParamLimits

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy1

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy1_ParamLimits

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy1

0x7383,	// (0x00056cfd) bg_eswt_ctrl_canvas_pane_g1

0x7348,	// (0x00056cc2) common_borders_pane_cp2_ParamLimits

0x7348,	// (0x00056cc2) common_borders_pane_cp2

0x7348,	// (0x00056cc2) common_borders_pane_cp3_ParamLimits

0x7348,	// (0x00056cc2) common_borders_pane_cp3

0x7d4a,	// (0x000576c4) separator_horizontal_pane

0x7d52,	// (0x000576cc) separator_vertical_pane

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy2_ParamLimits

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy2

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy2_ParamLimits

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy2

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy2_ParamLimits

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy2

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy2_ParamLimits

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy2

0x2829,	// (0x000521a3) common_borders_pane_cp4

0x7d5b,	// (0x000576d5) separator_horizontal_pane_g1

0x7d64,	// (0x000576de) separator_horizontal_pane_g2

0x7d6d,	// (0x000576e7) separator_horizontal_pane_g3

0x0002,

0xfc19,	// (0x0005f593) separator_horizontal_pane_g

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy3_ParamLimits

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy3

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy3_ParamLimits

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy3

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy3_ParamLimits

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy3

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy3_ParamLimits

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy3

0x2829,	// (0x000521a3) common_borders_pane_cp5

0x7d76,	// (0x000576f0) separator_vertical_pane_g1

0x7d7f,	// (0x000576f9) separator_vertical_pane_g2

0x7d88,	// (0x00057702) separator_vertical_pane_g3

0x0002,

0xfc20,	// (0x0005f59a) separator_vertical_pane_g

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy4_ParamLimits

0x7cce,	// (0x00057648) eswt_control_pane_g1_copy4

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy4_ParamLimits

0x7cdb,	// (0x00057655) eswt_control_pane_g2_copy4

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy4_ParamLimits

0x7ce8,	// (0x00057662) eswt_control_pane_g3_copy4

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy4_ParamLimits

0x7cf5,	// (0x0005766f) eswt_control_pane_g4_copy4

0xdf87,	// (0x0005d901) eswt_ctrl_combo_button_pane

0xdf8f,	// (0x0005d909) eswt_ctrl_input_pane

0xdf97,	// (0x0005d911) popup_choice_list_window_cp70

0xdf9f,	// (0x0005d919) eswt_ctrl_input_pane_t1

0x2829,	// (0x000521a3) input_focus_pane_cp70

0x7348,	// (0x00056cc2) bg_button_pane_cp70_ParamLimits

0x7348,	// (0x00056cc2) bg_button_pane_cp70

0xdfad,	// (0x0005d927) eswt_ctrl_combo_button_pane_g1

0x7dbf,	// (0x00057739) wait_bar_pane_cp70

0x4d78,	// (0x000546f2) bg_popup_window_pane_cp70_ParamLimits

0x4d78,	// (0x000546f2) bg_popup_window_pane_cp70

0x7dc7,	// (0x00057741) popup_eswt_tasktip_window_t1

0x7ddd,	// (0x00057757) wait_bar_pane_cp71_ParamLimits

0x7ddd,	// (0x00057757) wait_bar_pane_cp71

0x7de9,	// (0x00057763) grid_eswt_app_pane

0x3c6c,	// (0x000535e6) scroll_pane_cp70

0xdfb5,	// (0x0005d92f) cell_eswt_app_pane_ParamLimits

0xdfb5,	// (0x0005d92f) cell_eswt_app_pane

0xdfdf,	// (0x0005d959) cell_eswt_app_pane_g1_ParamLimits

0xdfdf,	// (0x0005d959) cell_eswt_app_pane_g1

0xe00e,	// (0x0005d988) cell_eswt_app_pane_g2_ParamLimits

0xe00e,	// (0x0005d988) cell_eswt_app_pane_g2

0x0001,

0xfc27,	// (0x0005f5a1) cell_eswt_app_pane_g_ParamLimits

0xfc27,	// (0x0005f5a1) cell_eswt_app_pane_g

0xe037,	// (0x0005d9b1) cell_eswt_app_pane_t1_ParamLimits

0xe037,	// (0x0005d9b1) cell_eswt_app_pane_t1

0x7eac,	// (0x00057826) grid_highlight_pane_cp70_ParamLimits

0x7eac,	// (0x00057826) grid_highlight_pane_cp70

0x3771,	// (0x000530eb) set_content_pane_g1

0x46d0,	// (0x0005404a) status_small_volume_pane

0x1e7a,	// (0x000517f4) status_small_volume_pane_g1

0x1e82,	// (0x000517fc) volume_small2_pane

0x1e8b,	// (0x00051805) volume_small2_pane_g1

0x1e94,	// (0x0005180e) volume_small2_pane_g2

0x1e9d,	// (0x00051817) volume_small2_pane_g3

0x1ea6,	// (0x00051820) volume_small2_pane_g4

0x1eaf,	// (0x00051829) volume_small2_pane_g5

0x1eb8,	// (0x00051832) volume_small2_pane_g6

0x1ec1,	// (0x0005183b) volume_small2_pane_g7

0x1eca,	// (0x00051844) volume_small2_pane_g8

0x1ed3,	// (0x0005184d) volume_small2_pane_g9

0x1edc,	// (0x00051856) volume_small2_pane_g10

0x0009,

0xfc2c,	// (0x0005f5a6) volume_small2_pane_g

0x7749,	// (0x000570c3) fep_vkb_top_text_pane_g1_ParamLimits

0xdf06,	// (0x0005d880) fep_vkb_top_text_pane_t1_ParamLimits

0x79be,	// (0x00057338) popup_preview_fixed_window_g3_ParamLimits

0x79be,	// (0x00057338) popup_preview_fixed_window_g3

0xc2aa,	// (0x0005bc24) popup_toolbar_trans_pane

0xd92e,	// (0x0005d2a8) aid_height_set_list_ParamLimits

0x6100,	// (0x00055a7a) aid_size_parent_ParamLimits

0x4770,	// (0x000540ea) list_highlight_pane_cp2_ParamLimits

0x3771,	// (0x000530eb) set_content_pane_g1_ParamLimits

0xd5fc,	// (0x0005cf76) list_single_image_pane_ParamLimits

0xd5fc,	// (0x0005cf76) list_single_image_pane

0xe069,	// (0x0005d9e3) aid_size_cell_image_ParamLimits

0xe069,	// (0x0005d9e3) aid_size_cell_image

0xe076,	// (0x0005d9f0) grid_single_image_pane_ParamLimits

0xe076,	// (0x0005d9f0) grid_single_image_pane

0x5406,	// (0x00054d80) list_single_image_pane_g1_ParamLimits

0x5406,	// (0x00054d80) list_single_image_pane_g1

0x7ed3,	// (0x0005784d) list_single_image_pane_g2_ParamLimits

0x7ed3,	// (0x0005784d) list_single_image_pane_g2

0x0001,

0xfc41,	// (0x0005f5bb) list_single_image_pane_g_ParamLimits

0xfc41,	// (0x0005f5bb) list_single_image_pane_g

0x5412,	// (0x00054d8c) list_single_image_pane_t1_ParamLimits

0x5412,	// (0x00054d8c) list_single_image_pane_t1

0xe084,	// (0x0005d9fe) cell_image_list_pane_ParamLimits

0xe084,	// (0x0005d9fe) cell_image_list_pane

0xe09a,	// (0x0005da14) cell_image_list_pane_g1

0xe0a3,	// (0x0005da1d) cell_image_list_pane_g2

0x0001,

0xfc46,	// (0x0005f5c0) cell_image_list_pane_g

0x7f0c,	// (0x00057886) aid_size_cell_tb_trans_pane

0x37d6,	// (0x00053150) bg_tb_trans_pane

0x7f1e,	// (0x00057898) grid_tb_trans_pane

0x4c80,	// (0x000545fa) bg_tb_trans_pane_g1

0x4c90,	// (0x0005460a) bg_tb_trans_pane_g2

0x4c88,	// (0x00054602) bg_tb_trans_pane_g3

0x4ca0,	// (0x0005461a) bg_tb_trans_pane_g4

0x4c98,	// (0x00054612) bg_tb_trans_pane_g5

0x4cc0,	// (0x0005463a) bg_tb_trans_pane_g6

0x4cb8,	// (0x00054632) bg_tb_trans_pane_g7

0x4ca8,	// (0x00054622) bg_tb_trans_pane_g8

0x4cb0,	// (0x0005462a) bg_tb_trans_pane_g9

0x0008,

0xfc4b,	// (0x0005f5c5) bg_tb_trans_pane_g

0x7f32,	// (0x000578ac) cell_toolbar_trans_pane_ParamLimits

0x7f32,	// (0x000578ac) cell_toolbar_trans_pane

0x7383,	// (0x00056cfd) cell_toolbar_trans_pane_g1

0xdcef,	// (0x0005d669) list_form2_midp_pane_t1

0xdcfd,	// (0x0005d677) list_form2_midp_pane_t2

0x0001,

0xfae8,	// (0x0005f462) list_form2_midp_pane_t

0x6f69,	// (0x000568e3) scroll_pane_cp51_ParamLimits

0x7125,	// (0x00056a9f) form2_midp_wait_pane_g1

0x712e,	// (0x00056aa8) form2_midp_wait_pane_g2

0x7137,	// (0x00056ab1) form2_midp_wait_pane_g3

0x0002,

0xfafd,	// (0x0005f477) form2_midp_wait_pane_g

0x291d,	// (0x00052297) list_highlight_pane_cp21_ParamLimits

0x718e,	// (0x00056b08) list_single_midp_graphic_pane_g4_cp_ParamLimits

0x719d,	// (0x00056b17) list_single_midp_graphic_pane_t1_cp_ParamLimits

0x62b8,	// (0x00055c32) list_single_2graphic_im_pane_ParamLimits

0x62b8,	// (0x00055c32) list_single_2graphic_im_pane

0xe0ac,	// (0x0005da26) list_single_2graphic_im_pane_g1_ParamLimits

0xe0ac,	// (0x0005da26) list_single_2graphic_im_pane_g1

0xe0bd,	// (0x0005da37) list_single_2graphic_im_pane_g2_ParamLimits

0xe0bd,	// (0x0005da37) list_single_2graphic_im_pane_g2

0xe0c9,	// (0x0005da43) list_single_2graphic_im_pane_g3_ParamLimits

0xe0c9,	// (0x0005da43) list_single_2graphic_im_pane_g3

0x0003,

0xfc5e,	// (0x0005f5d8) list_single_2graphic_im_pane_g_ParamLimits

0xfc5e,	// (0x0005f5d8) list_single_2graphic_im_pane_g

0xe0dd,	// (0x0005da57) list_single_2graphic_im_pane_t1_ParamLimits

0xe0dd,	// (0x0005da57) list_single_2graphic_im_pane_t1

0x79ca,	// (0x00057344) list_single_graphic_2heading_pane_fp_ParamLimits

0x79ca,	// (0x00057344) list_single_graphic_2heading_pane_fp

0x2fba,	// (0x00052934) list_single_graphic_2heading_pane_fp_g1_ParamLimits

0x2fba,	// (0x00052934) list_single_graphic_2heading_pane_fp_g1

0x79df,	// (0x00057359) list_single_graphic_2heading_pane_fp_g2_ParamLimits

0x79df,	// (0x00057359) list_single_graphic_2heading_pane_fp_g2

0x37f0,	// (0x0005316a) list_single_graphic_2heading_pane_fp_g3_ParamLimits

0x37f0,	// (0x0005316a) list_single_graphic_2heading_pane_fp_g3

0x37fc,	// (0x00053176) list_single_graphic_2heading_pane_fp_g4_ParamLimits

0x37fc,	// (0x00053176) list_single_graphic_2heading_pane_fp_g4

0x79eb,	// (0x00057365) list_single_graphic_2heading_pane_fp_g5_ParamLimits

0x79eb,	// (0x00057365) list_single_graphic_2heading_pane_fp_g5

0x0004,

0xfb85,	// (0x0005f4ff) list_single_graphic_2heading_pane_fp_g_ParamLimits

0xfb85,	// (0x0005f4ff) list_single_graphic_2heading_pane_fp_g

0x3187,	// (0x00052b01) list_single_graphic_2heading_pane_fp_t1_ParamLimits

0x3187,	// (0x00052b01) list_single_graphic_2heading_pane_fp_t1

0x2ff2,	// (0x0005296c) list_single_graphic_2heading_pane_fp_t2_ParamLimits

0x2ff2,	// (0x0005296c) list_single_graphic_2heading_pane_fp_t2

0x319d,	// (0x00052b17) list_single_graphic_2heading_pane_fp_t3_ParamLimits

0x319d,	// (0x00052b17) list_single_graphic_2heading_pane_fp_t3

0x0002,

0xfc67,	// (0x0005f5e1) list_single_graphic_2heading_pane_fp_t_ParamLimits

0xfc67,	// (0x0005f5e1) list_single_graphic_2heading_pane_fp_t

0x740f,	// (0x00056d89) fep_hwr_write_pane_g5_ParamLimits

0x740f,	// (0x00056d89) fep_hwr_write_pane_g5

0x741b,	// (0x00056d95) fep_hwr_write_pane_g6_ParamLimits

0x741b,	// (0x00056d95) fep_hwr_write_pane_g6

0x7c9d,	// (0x00057617) eswt_shell_pane_ParamLimits

0x4d78,	// (0x000546f2) bg_popup_window_pane_cp18_ParamLimits

0x6048,	// (0x000559c2) heading_pane_cp70

0x7dc7,	// (0x00057741) popup_eswt_tasktip_window_t1_ParamLimits

0xd24b,	// (0x0005cbc5) aid_touch_tab_arrow_left

0xd261,	// (0x0005cbdb) aid_touch_tab_arrow_right

0xb417,	// (0x0005ad91) title_pane_g3_ParamLimits

0xb417,	// (0x0005ad91) title_pane_g3

0x3795,	// (0x0005310f) set_value_pane_g1

0xc2aa,	// (0x0005bc24) popup_toolbar_trans_pane_ParamLimits

0x7f0c,	// (0x00057886) aid_size_cell_tb_trans_pane_ParamLimits

0x37d6,	// (0x00053150) bg_tb_trans_pane_ParamLimits

0x7f1e,	// (0x00057898) grid_tb_trans_pane_ParamLimits

0x2ba6,	// (0x00052520) cont_note_pane_ParamLimits

0x2ba6,	// (0x00052520) cont_note_pane

0x353b,	// (0x00052eb5) cont_snote2_single_text_pane_ParamLimits

0x353b,	// (0x00052eb5) cont_snote2_single_text_pane

0x353b,	// (0x00052eb5) cont_snote2_single_graphic_pane_ParamLimits

0x353b,	// (0x00052eb5) cont_snote2_single_graphic_pane

0x537d,	// (0x00054cf7) cont_note_wait_pane_ParamLimits

0x537d,	// (0x00054cf7) cont_note_wait_pane

0x537d,	// (0x00054cf7) cont_note_image_pane_ParamLimits

0x537d,	// (0x00054cf7) cont_note_image_pane

0x7fc6,	// (0x00057940) popup_note2_window_g1_ParamLimits

0x7fc6,	// (0x00057940) popup_note2_window_g1

0x7ff7,	// (0x00057971) popup_note2_window_t1_ParamLimits

0x7ff7,	// (0x00057971) popup_note2_window_t1

0x803c,	// (0x000579b6) popup_note2_window_t2_ParamLimits

0x803c,	// (0x000579b6) popup_note2_window_t2

0x8081,	// (0x000579fb) popup_note2_window_t3_ParamLimits

0x8081,	// (0x000579fb) popup_note2_window_t3

0x80c6,	// (0x00057a40) popup_note2_window_t4_ParamLimits

0x80c6,	// (0x00057a40) popup_note2_window_t4

0x2c2a,	// (0x000525a4) popup_note2_window_t5_ParamLimits

0x2c2a,	// (0x000525a4) popup_note2_window_t5

0x0004,

0xfc73,	// (0x0005f5ed) popup_note2_window_t_ParamLimits

0xfc73,	// (0x0005f5ed) popup_note2_window_t

0x80f5,	// (0x00057a6f) popup_note2_image_window_g1_ParamLimits

0x80f5,	// (0x00057a6f) popup_note2_image_window_g1

0x8101,	// (0x00057a7b) popup_note2_image_window_g2_ParamLimits

0x8101,	// (0x00057a7b) popup_note2_image_window_g2

0x0001,

0xfc7e,	// (0x0005f5f8) popup_note2_image_window_g_ParamLimits

0xfc7e,	// (0x0005f5f8) popup_note2_image_window_g

0x8113,	// (0x00057a8d) popup_note2_image_window_t1_ParamLimits

0x8113,	// (0x00057a8d) popup_note2_image_window_t1

0x812b,	// (0x00057aa5) popup_note2_image_window_t2_ParamLimits

0x812b,	// (0x00057aa5) popup_note2_image_window_t2

0x8143,	// (0x00057abd) popup_note2_image_window_t3_ParamLimits

0x8143,	// (0x00057abd) popup_note2_image_window_t3

0x0002,

0xfc83,	// (0x0005f5fd) popup_note2_image_window_t_ParamLimits

0xfc83,	// (0x0005f5fd) popup_note2_image_window_t

0x538b,	// (0x00054d05) popup_note2_wait_window_g1_ParamLimits

0x538b,	// (0x00054d05) popup_note2_wait_window_g1

0x815f,	// (0x00057ad9) popup_note2_wait_window_g2_ParamLimits

0x815f,	// (0x00057ad9) popup_note2_wait_window_g2

0x53a3,	// (0x00054d1d) popup_note2_wait_window_g3_ParamLimits

0x53a3,	// (0x00054d1d) popup_note2_wait_window_g3

0x0002,

0xfc8a,	// (0x0005f604) popup_note2_wait_window_g_ParamLimits

0xfc8a,	// (0x0005f604) popup_note2_wait_window_g

0x816b,	// (0x00057ae5) popup_note2_wait_window_t1_ParamLimits

0x816b,	// (0x00057ae5) popup_note2_wait_window_t1

0x8189,	// (0x00057b03) popup_note2_wait_window_t2_ParamLimits

0x8189,	// (0x00057b03) popup_note2_wait_window_t2

0x81a7,	// (0x00057b21) popup_note2_wait_window_t3_ParamLimits

0x81a7,	// (0x00057b21) popup_note2_wait_window_t3

0x81b9,	// (0x00057b33) popup_note2_wait_window_t4_ParamLimits

0x81b9,	// (0x00057b33) popup_note2_wait_window_t4

0x0003,

0xfc91,	// (0x0005f60b) popup_note2_wait_window_t_ParamLimits

0xfc91,	// (0x0005f60b) popup_note2_wait_window_t

0x81cb,	// (0x00057b45) wait_bar2_pane_ParamLimits

0x81cb,	// (0x00057b45) wait_bar2_pane

0x81e3,	// (0x00057b5d) popup_snote2_single_text_window_g1_ParamLimits

0x81e3,	// (0x00057b5d) popup_snote2_single_text_window_g1

0x820b,	// (0x00057b85) popup_snote2_single_text_window_t1_ParamLimits

0x820b,	// (0x00057b85) popup_snote2_single_text_window_t1

0x8257,	// (0x00057bd1) popup_snote2_single_text_window_t2_ParamLimits

0x8257,	// (0x00057bd1) popup_snote2_single_text_window_t2

0x82a3,	// (0x00057c1d) popup_snote2_single_text_window_t3_ParamLimits

0x82a3,	// (0x00057c1d) popup_snote2_single_text_window_t3

0x82e4,	// (0x00057c5e) popup_snote2_single_text_window_t4_ParamLimits

0x82e4,	// (0x00057c5e) popup_snote2_single_text_window_t4

0x831a,	// (0x00057c94) popup_snote2_single_text_window_t5_ParamLimits

0x831a,	// (0x00057c94) popup_snote2_single_text_window_t5

0x0004,

0xfc9a,	// (0x0005f614) popup_snote2_single_text_window_t_ParamLimits

0xfc9a,	// (0x0005f614) popup_snote2_single_text_window_t

0x8345,	// (0x00057cbf) popup_snote2_single_graphic_window_g1_ParamLimits

0x8345,	// (0x00057cbf) popup_snote2_single_graphic_window_g1

0x836d,	// (0x00057ce7) popup_snote2_single_graphic_window_g2_ParamLimits

0x836d,	// (0x00057ce7) popup_snote2_single_graphic_window_g2

0x0001,

0xfca5,	// (0x0005f61f) popup_snote2_single_graphic_window_g_ParamLimits

0xfca5,	// (0x0005f61f) popup_snote2_single_graphic_window_g

0x8395,	// (0x00057d0f) popup_snote2_single_graphic_window_t1_ParamLimits

0x8395,	// (0x00057d0f) popup_snote2_single_graphic_window_t1

0x83e1,	// (0x00057d5b) popup_snote2_single_graphic_window_t2_ParamLimits

0x83e1,	// (0x00057d5b) popup_snote2_single_graphic_window_t2

0x82a3,	// (0x00057c1d) popup_snote2_single_graphic_window_t3_ParamLimits

0x82a3,	// (0x00057c1d) popup_snote2_single_graphic_window_t3

0x82e4,	// (0x00057c5e) popup_snote2_single_graphic_window_t4_ParamLimits

0x82e4,	// (0x00057c5e) popup_snote2_single_graphic_window_t4

0x831a,	// (0x00057c94) popup_snote2_single_graphic_window_t5_ParamLimits

0x831a,	// (0x00057c94) popup_snote2_single_graphic_window_t5

0x0004,

0xfcaa,	// (0x0005f624) popup_snote2_single_graphic_window_t_ParamLimits

0xfcaa,	// (0x0005f624) popup_snote2_single_graphic_window_t

0x6e2c,	// (0x000567a6) clock_nsta_pane_cp2_t1

0x6e2c,	// (0x000567a6) clock_nsta_pane_cp2_t2

0x0001,

0xfabe,	// (0x0005f438) clock_nsta_pane_cp2_t

0x066a,	// (0x0004ffe4) form_field_data_wide_pane_g1_ParamLimits

0x37f0,	// (0x0005316a) form_field_data_wide_pane_g2_ParamLimits

0x37f0,	// (0x0005316a) form_field_data_wide_pane_g2

0x37fc,	// (0x00053176) form_field_data_wide_pane_g3_ParamLimits

0x37fc,	// (0x00053176) form_field_data_wide_pane_g3

0x0002,

0xf686,	// (0x0005f000) form_field_data_wide_pane_g_ParamLimits

0xf686,	// (0x0005f000) form_field_data_wide_pane_g

0xdc28,	// (0x0005d5a2) grid_touch_3_pane_ParamLimits

0xdc28,	// (0x0005d5a2) grid_touch_3_pane

0xe10e,	// (0x0005da88) cell_touch_3_pane_ParamLimits

0xe10e,	// (0x0005da88) cell_touch_3_pane

0x7383,	// (0x00056cfd) cell_touch_3_pane_g1

0x7383,	// (0x00056cfd) cell_touch_3_pane_g2

0x0001,

0xfb43,	// (0x0005f4bd) cell_touch_3_pane_g

0x2c5c,	// (0x000525d6) cont_query_data_pane

0x2c64,	// (0x000525de) cont_query_data_pane_cp1

0x845b,	// (0x00057dd5) button_value_adjust_pane_cp7

0x8463,	// (0x00057ddd) query_popup_pane_cp3

0x3f24,	// (0x0005389e) bg_popup_sub_pane_cp22_ParamLimits

0x0a30,	// (0x000503aa) navi_navi_volume_pane_cp2

0x0a4b,	// (0x000503c5) popup_side_volume_key_window_g2

0x0a5a,	// (0x000503d4) popup_side_volume_key_window_g3

0x0002,

0xf71c,	// (0x0005f096) popup_side_volume_key_window_g

0x0a77,	// (0x000503f1) popup_side_volume_key_window_t2

0x0001,

0xf723,	// (0x0005f09d) popup_side_volume_key_window_t

0x41db,	// (0x00053b55) popup_side_volume_key_window_ParamLimits

0xb647,	// (0x0005afc1) list_double_graphic_pane_g4_ParamLimits

0xb647,	// (0x0005afc1) list_double_graphic_pane_g4

0xda95,	// (0x0005d40f) list_single_2heading_msg_pane_ParamLimits

0xda95,	// (0x0005d40f) list_single_2heading_msg_pane

0xd60d,	// (0x0005cf87) list_single_2heading_msg_pane_g1_ParamLimits

0xd60d,	// (0x0005cf87) list_single_2heading_msg_pane_g1

0xd619,	// (0x0005cf93) list_single_2heading_msg_pane_g2_ParamLimits

0xd619,	// (0x0005cf93) list_single_2heading_msg_pane_g2

0xd62c,	// (0x0005cfa6) list_single_2heading_msg_pane_g3_ParamLimits

0xd62c,	// (0x0005cfa6) list_single_2heading_msg_pane_g3

0xd638,	// (0x0005cfb2) list_single_2heading_msg_pane_g4_ParamLimits

0xd638,	// (0x0005cfb2) list_single_2heading_msg_pane_g4

0x0003,

0xfcb5,	// (0x0005f62f) list_single_2heading_msg_pane_g_ParamLimits

0xfcb5,	// (0x0005f62f) list_single_2heading_msg_pane_g

0xc5be,	// (0x0005bf38) list_single_2heading_msg_pane_t1_ParamLimits

0xc5be,	// (0x0005bf38) list_single_2heading_msg_pane_t1

0xc5e6,	// (0x0005bf60) list_single_2heading_msg_pane_t2_ParamLimits

0xc5e6,	// (0x0005bf60) list_single_2heading_msg_pane_t2

0xc651,	// (0x0005bfcb) list_single_2heading_msg_pane_t3_ParamLimits

0xc651,	// (0x0005bfcb) list_single_2heading_msg_pane_t3

0x3282,	// (0x00052bfc) list_single_2heading_msg_pane_t4_ParamLimits

0x3282,	// (0x00052bfc) list_single_2heading_msg_pane_t4

0x0003,

0xfcbe,	// (0x0005f638) list_single_2heading_msg_pane_t_ParamLimits

0xfcbe,	// (0x0005f638) list_single_2heading_msg_pane_t

0x2871,	// (0x000521eb) title_pane_g4_ParamLimits

0x2871,	// (0x000521eb) title_pane_g4

0x083e,	// (0x000501b8) title_pane_stacon_g3_ParamLimits

0x083e,	// (0x000501b8) title_pane_stacon_g3

0x7f89,	// (0x00057903) list_single_2graphic_im_pane_g4_ParamLimits

0x7f89,	// (0x00057903) list_single_2graphic_im_pane_g4

0x5def,	// (0x00055769) popup_side_volume_key_window_cp

0x65da,	// (0x00055f54) main_idle_act2_pane_t1

0x1478,	// (0x00050df2) toolbar_button_pane_g10

0xce31,	// (0x0005c7ab) popup_toolbar_window_cp1

0x6e1d,	// (0x00056797) clock_nsta_pane_cp_t1

0x6e1d,	// (0x00056797) clock_nsta_pane_cp_t2

0x0001,

0xfab9,	// (0x0005f433) clock_nsta_pane_cp_t

0x0a30,	// (0x000503aa) navi_navi_volume_pane_cp2_ParamLimits

0x0a3f,	// (0x000503b9) popup_side_volume_key_window_g1_ParamLimits

0x0a4b,	// (0x000503c5) popup_side_volume_key_window_g2_ParamLimits

0x0a5a,	// (0x000503d4) popup_side_volume_key_window_g3_ParamLimits

0xf71c,	// (0x0005f096) popup_side_volume_key_window_g_ParamLimits

0x1ae6,	// (0x00051460) fep_hwr_aid_pane

0x1b8d,	// (0x00051507) bg_fep_hwr_top_pane_g4_ParamLimits

0x73df,	// (0x00056d59) fep_hwr_top_pane_g1_ParamLimits

0x73f1,	// (0x00056d6b) fep_hwr_top_pane_g2_ParamLimits

0x1bad,	// (0x00051527) fep_hwr_top_pane_g3_ParamLimits

0xfb0e,	// (0x0005f488) fep_hwr_top_pane_g_ParamLimits

0x1bc2,	// (0x0005153c) fep_hwr_top_text_pane_ParamLimits

0x5bb2,	// (0x0005552c) aid_touch_tab_arrow_arrow_2

0x5bbb,	// (0x00055535) aid_touch_tab_arrow_left_2

0x1afa,	// (0x00051474) fep_hwr_candidate_drop_down_list_pane_ParamLimits

0x1b31,	// (0x000514ab) fep_hwr_prediction_pane

0x7551,	// (0x00056ecb) fep_vkb_prediction_pane

0xdee6,	// (0x0005d860) fep_vkb_side_pane_g3_ParamLimits

0xdee6,	// (0x0005d860) fep_vkb_side_pane_g3

0x1d3d,	// (0x000516b7) fep_hwr_candidate_drop_down_list_pane_g1_ParamLimits

0x1da9,	// (0x00051723) fep_hwr_candidate_drop_down_list_pane_g2_ParamLimits

0x1db6,	// (0x00051730) fep_hwr_candidate_drop_down_list_pane_g3_ParamLimits

0xfbbd,	// (0x0005f537) fep_hwr_candidate_drop_down_list_pane_g_ParamLimits

0x1ee5,	// (0x0005185f) fep_hwr_prediction_pane_g1

0x1eef,	// (0x00051869) fep_hwr_prediction_pane_g2

0x1ef7,	// (0x00051871) fep_hwr_prediction_pane_g3

0x1eff,	// (0x00051879) fep_hwr_prediction_pane_g4

0x0003,

0xfcc7,	// (0x0005f641) fep_hwr_prediction_pane_g

0x8488,	// (0x00057e02) fep_vkb_prediction_pane_g1

0x8492,	// (0x00057e0c) fep_vkb_prediction_pane_g2

0x849a,	// (0x00057e14) fep_vkb_prediction_pane_g3

0x84a2,	// (0x00057e1c) fep_vkb_prediction_pane_g4

0x0003,

0xfcd0,	// (0x0005f64a) fep_vkb_prediction_pane_g

0x17ee,	// (0x00051168) slider_set_pane_g3

0x1802,	// (0x0005117c) slider_set_pane_g4

0x181a,	// (0x00051194) slider_set_pane_g5

0x17ee,	// (0x00051168) slider_set_pane_g6

0x1830,	// (0x000511aa) slider_set_pane_g7

0x6265,	// (0x00055bdf) slider_form_pane_g3

0x626e,	// (0x00055be8) slider_form_pane_g4

0x6276,	// (0x00055bf0) slider_form_pane_g5

0x6265,	// (0x00055bdf) slider_form_pane_g6

0xda79,	// (0x0005d3f3) slider_form_pane_g7

0x6883,	// (0x000561fd) slider_set_pane_vc_g3

0x688c,	// (0x00056206) slider_set_pane_vc_g4

0x6895,	// (0x0005620f) slider_set_pane_vc_g5

0x6883,	// (0x000561fd) slider_set_pane_vc_g6

0x689e,	// (0x00056218) slider_set_pane_vc_g7

0x6ad8,	// (0x00056452) slider_form_pane_vc_g1

0x6ae1,	// (0x0005645b) slider_form_pane_vc_g2

0x6aea,	// (0x00056464) slider_form_pane_vc_g3

0x6ad8,	// (0x00056452) slider_form_pane_vc_g4

0x6af3,	// (0x0005646d) slider_form_pane_vc_g5

0x0004,

0xfa8b,	// (0x0005f405) slider_form_pane_vc_g

0xf3dc,	// (0x0005ed56) main_idle_act3_pane

0x84aa,	// (0x00057e24) ai3_links_pane

0xe158,	// (0x0005dad2) popup_ai3_data_window_ParamLimits

0xe158,	// (0x0005dad2) popup_ai3_data_window

0x2829,	// (0x000521a3) grid_ai3_links_pane

0xe172,	// (0x0005daec) cell_ai3_links_pane_ParamLimits

0xe172,	// (0x0005daec) cell_ai3_links_pane

0x84e5,	// (0x00057e5f) bg_popup_sub_pane_cp11

0x84f2,	// (0x00057e6c) cell_ai3_links_pane_g1

0x2829,	// (0x000521a3) bg_popup_sub_pane_cp12

0x8517,	// (0x00057e91) heading_ai3_data_pane

0x851f,	// (0x00057e99) list_ai3_gene_pane

0x852b,	// (0x00057ea5) popup_ai3_data_window_g1

0x8533,	// (0x00057ead) heading_ai3_data_pane_g1

0x853b,	// (0x00057eb5) heading_ai3_data_pane_t1

0x8549,	// (0x00057ec3) list_double_ai3_gene_pane_ParamLimits

0x8549,	// (0x00057ec3) list_double_ai3_gene_pane

0x8556,	// (0x00057ed0) list_single_ai3_gene_pane_ParamLimits

0x8556,	// (0x00057ed0) list_single_ai3_gene_pane

0x7348,	// (0x00056cc2) list_highlight_pane_cp7_ParamLimits

0x7348,	// (0x00056cc2) list_highlight_pane_cp7

0x8563,	// (0x00057edd) list_single_a13_gene_pane_t1_ParamLimits

0x8563,	// (0x00057edd) list_single_a13_gene_pane_t1

0x857a,	// (0x00057ef4) list_single_ai3_gene_pane_g1

0x8583,	// (0x00057efd) list_single_ai3_gene_pane_g2

0x0001,

0xfcd9,	// (0x0005f653) list_single_ai3_gene_pane_g

0x858b,	// (0x00057f05) list_double_ai3_gene_pane_g1_ParamLimits

0x858b,	// (0x00057f05) list_double_ai3_gene_pane_g1

0x8597,	// (0x00057f11) list_double_ai3_gene_pane_t1_ParamLimits

0x8597,	// (0x00057f11) list_double_ai3_gene_pane_t1

0x85b3,	// (0x00057f2d) list_double_ai3_gene_pane_t2_ParamLimits

0x85b3,	// (0x00057f2d) list_double_ai3_gene_pane_t2

0x85c9,	// (0x00057f43) list_double_ai3_gene_pane_t3_ParamLimits

0x85c9,	// (0x00057f43) list_double_ai3_gene_pane_t3

0x0002,

0xfcde,	// (0x0005f658) list_double_ai3_gene_pane_t_ParamLimits

0xfcde,	// (0x0005f658) list_double_ai3_gene_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x31b3,	// (0x00052b2d) aid_size_min_col_2

0xe142,	// (0x0005dabc) aid_size_min_msg_ParamLimits

0xe142,	// (0x0005dabc) aid_size_min_msg

0xdefa,	// (0x0005d874) fep_vkb_top_text_pane_g2_ParamLimits

0xdefa,	// (0x0005d874) fep_vkb_top_text_pane_g2

0x0001,

0xfb3e,	// (0x0005f4b8) fep_vkb_top_text_pane_g_ParamLimits

0xfb3e,	// (0x0005f4b8) fep_vkb_top_text_pane_g

0xf3dc,	// (0x0005ed56) main_hc_apps_shell_pane

0x85e6,	// (0x00057f60) grid_hc_apps_pane_ParamLimits

0x85e6,	// (0x00057f60) grid_hc_apps_pane

0x85f5,	// (0x00057f6f) list_hc_apps_pane

0x85fd,	// (0x00057f77) scroll_pane_cp37_ParamLimits

0x85fd,	// (0x00057f77) scroll_pane_cp37

0xe1c1,	// (0x0005db3b) cell_hc_apps_pane_ParamLimits

0xe1c1,	// (0x0005db3b) cell_hc_apps_pane

0xe27f,	// (0x0005dbf9) cell_hc_apps_pane_g1_ParamLimits

0xe27f,	// (0x0005dbf9) cell_hc_apps_pane_g1

0x86e8,	// (0x00058062) cell_hc_apps_pane_g2_ParamLimits

0x86e8,	// (0x00058062) cell_hc_apps_pane_g2

0x8704,	// (0x0005807e) cell_hc_apps_pane_g3_ParamLimits

0x8704,	// (0x0005807e) cell_hc_apps_pane_g3

0x0002,

0xfce5,	// (0x0005f65f) cell_hc_apps_pane_g_ParamLimits

0xfce5,	// (0x0005f65f) cell_hc_apps_pane_g

0xe2ac,	// (0x0005dc26) cell_hc_apps_pane_t1_ParamLimits

0xe2ac,	// (0x0005dc26) cell_hc_apps_pane_t1

0x2ba6,	// (0x00052520) grid_highlight_pane_cp10_ParamLimits

0x2ba6,	// (0x00052520) grid_highlight_pane_cp10

0xe2ea,	// (0x0005dc64) list_single_hc_apps_pane_ParamLimits

0xe2ea,	// (0x0005dc64) list_single_hc_apps_pane

0xe317,	// (0x0005dc91) list_single_hc_apps_pane_g1

0xd650,	// (0x0005cfca) list_single_hc_apps_pane_g2

0x0001,

0xfcec,	// (0x0005f666) list_single_hc_apps_pane_g

0xd669,	// (0x0005cfe3) list_single_hc_apps_pane_g2_copy1

0x32dc,	// (0x00052c56) list_single_hc_apps_pane_t1

0x291d,	// (0x00052297) bg_set_opt_pane_cp_ParamLimits

0x005a,	// (0x0004f9d4) setting_slider_pane_t1_ParamLimits

0x0073,	// (0x0004f9ed) setting_slider_pane_t2_ParamLimits

0x008d,	// (0x0004fa07) setting_slider_pane_t3_ParamLimits

0xf564,	// (0x0005eede) setting_slider_pane_t_ParamLimits

0x00a5,	// (0x0004fa1f) slider_set_pane_ParamLimits

0x0d5f,	// (0x000506d9) control_pane_g5_ParamLimits

0x0d5f,	// (0x000506d9) control_pane_g5

0x60b4,	// (0x00055a2e) slider_set_pane_g1_ParamLimits

0x17e2,	// (0x0005115c) slider_set_pane_g2_ParamLimits

0x17ee,	// (0x00051168) slider_set_pane_g3_ParamLimits

0x1802,	// (0x0005117c) slider_set_pane_g4_ParamLimits

0x181a,	// (0x00051194) slider_set_pane_g5_ParamLimits

0x17ee,	// (0x00051168) slider_set_pane_g6_ParamLimits

0x1830,	// (0x000511aa) slider_set_pane_g7_ParamLimits

0xf963,	// (0x0005f2dd) slider_set_pane_g_ParamLimits

0x42bc,	// (0x00053c36) navi_icon_text_pane_ParamLimits

0xd214,	// (0x0005cb8e) aid_fill_nsta_2_ParamLimits

0xd24b,	// (0x0005cbc5) aid_touch_tab_arrow_left_ParamLimits

0xd261,	// (0x0005cbdb) aid_touch_tab_arrow_right_ParamLimits

0xd2fc,	// (0x0005cc76) clock_nsta_pane_ParamLimits

0x5b94,	// (0x0005550e) navi_icon_pane_g1_ParamLimits

0x5ba0,	// (0x0005551a) navi_text_pane_t1_ParamLimits

0x6f27,	// (0x000568a1) navi_icon_text_pane_g1_ParamLimits

0x6f33,	// (0x000568ad) navi_icon_text_pane_t1_ParamLimits

0xe317,	// (0x0005dc91) list_single_hc_apps_pane_g1_ParamLimits

0xd650,	// (0x0005cfca) list_single_hc_apps_pane_g2_ParamLimits

0xfcec,	// (0x0005f666) list_single_hc_apps_pane_g_ParamLimits

0xd669,	// (0x0005cfe3) list_single_hc_apps_pane_g2_copy1_ParamLimits

0x32dc,	// (0x00052c56) list_single_hc_apps_pane_t1_ParamLimits

0xb381,	// (0x0005acfb) popup_toolbar2_fixed_window_ParamLimits

0xb381,	// (0x0005acfb) popup_toolbar2_fixed_window

0xc2a0,	// (0x0005bc1a) popup_toolbar2_float_window

0x2829,	// (0x000521a3) bg_popup_sub_pane_cp27

0x87db,	// (0x00058155) grid_toolbar2_float_pane

0x2829,	// (0x000521a3) bg_popup_sub_pane_cp26

0x87db,	// (0x00058155) grid_toolbar2_fixed_pane

0xe330,	// (0x0005dcaa) cell_toolbar2_fixed_pane_ParamLimits

0xe330,	// (0x0005dcaa) cell_toolbar2_fixed_pane

0xe34b,	// (0x0005dcc5) cell_toolbar2_fixed_pane_g1

0x87fc,	// (0x00058176) toolbar2_fixed_button_pane

0x4c80,	// (0x000545fa) toolbar2_fixed_button_pane_g1

0x4c90,	// (0x0005460a) toolbar2_fixed_button_pane_g2

0x4c88,	// (0x00054602) toolbar2_fixed_button_pane_g3

0x4ca0,	// (0x0005461a) toolbar2_fixed_button_pane_g4

0x4c98,	// (0x00054612) toolbar2_fixed_button_pane_g5

0x4ca8,	// (0x00054622) toolbar2_fixed_button_pane_g6

0x4cb0,	// (0x0005462a) toolbar2_fixed_button_pane_g7

0x4cc0,	// (0x0005463a) toolbar2_fixed_button_pane_g8

0x4cb8,	// (0x00054632) toolbar2_fixed_button_pane_g9

0x0008,

0xf865,	// (0x0005f1df) toolbar2_fixed_button_pane_g

0x8804,	// (0x0005817e) cell_toolbar2_float_pane_ParamLimits

0x8804,	// (0x0005817e) cell_toolbar2_float_pane

0x8815,	// (0x0005818f) cell_toolbar2_float_pane_g1

0x87fc,	// (0x00058176) toolbar2_fixed_button_pane_cp

0xddd4,	// (0x0005d74e) fep_vkb_accented_list_pane_ParamLimits

0xddd4,	// (0x0005d74e) fep_vkb_accented_list_pane

0x1d1d,	// (0x00051697) bg_popup_fep_shadow_pane_g9

0x4430,	// (0x00053daa) bg_popup_fep_shadow_pane_cp3

0x3939,	// (0x000532b3) list_accented_list_pane

0x881e,	// (0x00058198) list_single_accented_list_pane_ParamLimits

0x881e,	// (0x00058198) list_single_accented_list_pane

0x4430,	// (0x00053daa) list_highlight_pane_cp10

0x882f,	// (0x000581a9) list_single_accented_list_pane_t1

0xc1ca,	// (0x0005bb44) popup_slider_window_ParamLimits

0xc1ca,	// (0x0005bb44) popup_slider_window

0x846b,	// (0x00057de5) aid_indentation_list_msg

0xe444,	// (0x0005ddbe) bg_popup_window_pane_cp19

0x8953,	// (0x000582cd) popup_slider_window_g1

0x896f,	// (0x000582e9) popup_slider_window_g2

0x898b,	// (0x00058305) popup_slider_window_g3

0x0005,

0xfcf1,	// (0x0005f66b) popup_slider_window_g

0x89e7,	// (0x00058361) popup_slider_window_t1

0x8a5b,	// (0x000583d5) small_volume_slider_vertical_pane

0x7383,	// (0x00056cfd) small_volume_slider_vertical_pane_g1

0x7383,	// (0x00056cfd) small_volume_slider_vertical_pane_g2

0x8a77,	// (0x000583f1) small_volume_slider_vertical_pane_g3

0x0002,

0xfd03,	// (0x0005f67d) small_volume_slider_vertical_pane_g

0xb2ef,	// (0x0005ac69) area_side_right_pane_ParamLimits

0xb2ef,	// (0x0005ac69) area_side_right_pane

0xc6bf,	// (0x0005c039) aid_size_side_button_ParamLimits

0xc6bf,	// (0x0005c039) aid_size_side_button

0xc6d8,	// (0x0005c052) grid_sctrl_middle_pane_ParamLimits

0xc6d8,	// (0x0005c052) grid_sctrl_middle_pane

0x1f3b,	// (0x000518b5) sctrl_sk_bottom_pane

0x1f4c,	// (0x000518c6) sctrl_sk_top_pane

0x1f5e,	// (0x000518d8) aid_touch_sctrl_top

0x1f6b,	// (0x000518e5) bg_sctrl_sk_pane_ParamLimits

0x1f6b,	// (0x000518e5) bg_sctrl_sk_pane

0x1f79,	// (0x000518f3) sctrl_sk_top_pane_g1

0x1f86,	// (0x00051900) sctrl_sk_top_pane_t1

0x1f5e,	// (0x000518d8) aid_touch_sctrl_bottom

0x1f6b,	// (0x000518e5) bg_sctrl_sk_pane_cp_ParamLimits

0x1f6b,	// (0x000518e5) bg_sctrl_sk_pane_cp

0x1fa1,	// (0x0005191b) sctrl_sk_bottom_pane_g1

0x1f86,	// (0x00051900) sctrl_sk_bottom_pane_t1

0xc6f2,	// (0x0005c06c) cell_sctrl_middle_pane_ParamLimits

0xc6f2,	// (0x0005c06c) cell_sctrl_middle_pane

0xc703,	// (0x0005c07d) aid_touch_sctrl_middle_ParamLimits

0xc703,	// (0x0005c07d) aid_touch_sctrl_middle

0xc710,	// (0x0005c08a) bg_sctrl_middle_pane_ParamLimits

0xc710,	// (0x0005c08a) bg_sctrl_middle_pane

0x260e,	// (0x00051f88) cell_sctrl_middle_pane_g1_ParamLimits

0x260e,	// (0x00051f88) cell_sctrl_middle_pane_g1

0xc71e,	// (0x0005c098) cell_sctrl_middle_pane_g2_ParamLimits

0xc71e,	// (0x0005c098) cell_sctrl_middle_pane_g2

0x0001,

0xfd0f,	// (0x0005f689) cell_sctrl_middle_pane_g_ParamLimits

0xfd0f,	// (0x0005f689) cell_sctrl_middle_pane_g

0x4c80,	// (0x000545fa) bg_sctrl_middle_pane_g1

0x4c88,	// (0x00054602) bg_sctrl_middle_pane_g2

0x4c90,	// (0x0005460a) bg_sctrl_middle_pane_g3

0x4c98,	// (0x00054612) bg_sctrl_middle_pane_g4

0x4ca0,	// (0x0005461a) bg_sctrl_middle_pane_g5

0x4ca8,	// (0x00054622) bg_sctrl_middle_pane_g6

0x4cb0,	// (0x0005462a) bg_sctrl_middle_pane_g7

0x4cb8,	// (0x00054632) bg_sctrl_middle_pane_g8

0x0007,

0xfd14,	// (0x0005f68e) bg_sctrl_middle_pane_g

0x4cc0,	// (0x0005463a) bg_sctrl_middle_pane_g8_copy1

0x4c80,	// (0x000545fa) bg_sctrl_sk_pane_g1

0x4c90,	// (0x0005460a) bg_sctrl_sk_pane_g2

0x4c88,	// (0x00054602) bg_sctrl_sk_pane_g3

0x0008,

0xf865,	// (0x0005f1df) bg_sctrl_sk_pane_g

0x36f9,	// (0x00053073) aid_size_touch_scroll_bar

0x4ca0,	// (0x0005461a) bg_sctrl_sk_pane_g4

0x4c98,	// (0x00054612) bg_sctrl_sk_pane_g5

0x4ca8,	// (0x00054622) bg_sctrl_sk_pane_g6

0x4cb0,	// (0x0005462a) bg_sctrl_sk_pane_g7

0x4cc0,	// (0x0005463a) bg_sctrl_sk_pane_g8

0x4cb8,	// (0x00054632) bg_sctrl_sk_pane_g9

0x0f15,	// (0x0005088f) popup_fep_china_hwr2_fs_candidate_window

0xbcea,	// (0x0005b664) popup_fep_china_hwr2_fs_control_window_ParamLimits

0xbcea,	// (0x0005b664) popup_fep_china_hwr2_fs_control_window

0x1d3d,	// (0x000516b7) sctrl_sk_top_pane_g2

0x0001,

0xfd0a,	// (0x0005f684) sctrl_sk_top_pane_g

0xe4fc,	// (0x0005de76) aid_fep_china_hwr2_fs_cell_ParamLimits

0xe4fc,	// (0x0005de76) aid_fep_china_hwr2_fs_cell

0xe510,	// (0x0005de8a) bg_popup_fep_shadow_pane_cp4_ParamLimits

0xe510,	// (0x0005de8a) bg_popup_fep_shadow_pane_cp4

0xe527,	// (0x0005dea1) bg_popup_fep_shadow_pane_cp5_ParamLimits

0xe527,	// (0x0005dea1) bg_popup_fep_shadow_pane_cp5

0xe539,	// (0x0005deb3) popup_fep_china_hwr2_fs_control_bar_grid_ParamLimits

0xe539,	// (0x0005deb3) popup_fep_china_hwr2_fs_control_bar_grid

0xe54d,	// (0x0005dec7) popup_fep_china_hwr2_fs_control_funtion_grid

0x8ad3,	// (0x0005844d) aid_fep_china_hwr2_fs_candi_cell

0x2829,	// (0x000521a3) bg_popup_fep_shadow_pane_cp6

0x8add,	// (0x00058457) popup_fep_china_hwr2_fs_candidate_grid

0xe555,	// (0x0005decf) cell_fep_china_hwr2_fs_funtion_grid_ParamLimits

0xe555,	// (0x0005decf) cell_fep_china_hwr2_fs_funtion_grid

0x7383,	// (0x00056cfd) popup_fep_china_hwr2_fs_control_funtion_grid_g1

0x8aff,	// (0x00058479) cell_fep_china_hwr2_fs_funtion_grid_g1_ParamLimits

0x8aff,	// (0x00058479) cell_fep_china_hwr2_fs_funtion_grid_g1

0x8b0d,	// (0x00058487) cell_fep_china_hwr2_fs_funtion_grid_g2_ParamLimits

0x8b0d,	// (0x00058487) cell_fep_china_hwr2_fs_funtion_grid_g2

0x0001,

0xfd25,	// (0x0005f69f) cell_fep_china_hwr2_fs_funtion_grid_g_ParamLimits

0xfd25,	// (0x0005f69f) cell_fep_china_hwr2_fs_funtion_grid_g

0xe56d,	// (0x0005dee7) cell_fep_china_hwr2_fs_funtion_grid_t1_ParamLimits

0xe56d,	// (0x0005dee7) cell_fep_china_hwr2_fs_funtion_grid_t1

0xe582,	// (0x0005defc) cell_fep_china_hwr2_fs_funtion_grid_t2_ParamLimits

0xe582,	// (0x0005defc) cell_fep_china_hwr2_fs_funtion_grid_t2

0x0001,

0xfd2a,	// (0x0005f6a4) cell_fep_china_hwr2_fs_funtion_grid_t_ParamLimits

0xfd2a,	// (0x0005f6a4) cell_fep_china_hwr2_fs_funtion_grid_t

0x8b54,	// (0x000584ce) popup_fep_china_hwr2_fs_control_bar_grid_g1

0x8b5c,	// (0x000584d6) popup_fep_china_hwr2_fs_control_bar_grid_g2

0x8b64,	// (0x000584de) popup_fep_china_hwr2_fs_control_bar_grid_g3

0x0002,

0xfd2f,	// (0x0005f6a9) popup_fep_china_hwr2_fs_control_bar_grid_g

0x8b6c,	// (0x000584e6) cell_fep_china_hwr2_fs_candidate_grid_ParamLimits

0x8b6c,	// (0x000584e6) cell_fep_china_hwr2_fs_candidate_grid

0x8b85,	// (0x000584ff) popup_fep_china_hwr2_fs_candidate_grid_g20

0x8b8d,	// (0x00058507) popup_fep_china_hwr2_fs_candidate_grid_g21

0x7383,	// (0x00056cfd) cell_fep_china_hwr2_fs_candidate_grid_g1

0x7383,	// (0x00056cfd) cell_fep_china_hwr2_fs_candidate_grid_g2

0x0001,

0xfb43,	// (0x0005f4bd) cell_fep_china_hwr2_fs_candidate_grid_g

0x8b95,	// (0x0005850f) cell_fep_china_hwr2_fs_candidate_grid_t1

0x486c,	// (0x000541e6) clock_nsta_pane_cp_24_ParamLimits

0x486c,	// (0x000541e6) clock_nsta_pane_cp_24

0x48ea,	// (0x00054264) indicator_nsta_pane_cp_24_ParamLimits

0x48ea,	// (0x00054264) indicator_nsta_pane_cp_24

0x5a1f,	// (0x00055399) heading_pane_g1

0x0001,

0xf8ca,	// (0x0005f244) heading_pane_g

0x6423,	// (0x00055d9d) grid_sct_catagory_button_pane

0x6453,	// (0x00055dcd) scroll_pane_cp5_ParamLimits

0x6f75,	// (0x000568ef) button_value_adjust_pane_cp5_ParamLimits

0x6f75,	// (0x000568ef) button_value_adjust_pane_cp5

0x7054,	// (0x000569ce) form2_midp_time_pane_ParamLimits

0x8ba3,	// (0x0005851d) cell_sct_catagory_button_pane_ParamLimits

0x8ba3,	// (0x0005851d) cell_sct_catagory_button_pane

0x7348,	// (0x00056cc2) bg_button_pane_cp01_ParamLimits

0x7348,	// (0x00056cc2) bg_button_pane_cp01

0x7383,	// (0x00056cfd) cell_sct_catagory_button_pane_g1

0xc243,	// (0x0005bbbd) popup_tb_extension_window

0xe59e,	// (0x0005df18) aid_size_cell_ext_ParamLimits

0xe59e,	// (0x0005df18) aid_size_cell_ext

0x353b,	// (0x00052eb5) bg_tb_trans_pane_cp1_ParamLimits

0x353b,	// (0x00052eb5) bg_tb_trans_pane_cp1

0xe5c4,	// (0x0005df3e) grid_tb_ext_pane_ParamLimits

0xe5c4,	// (0x0005df3e) grid_tb_ext_pane

0xe602,	// (0x0005df7c) cell_tb_ext_pane_ParamLimits

0xe602,	// (0x0005df7c) cell_tb_ext_pane

0xe62a,	// (0x0005dfa4) cell_tb_ext_pane_g1_ParamLimits

0xe62a,	// (0x0005dfa4) cell_tb_ext_pane_g1

0x8c39,	// (0x000585b3) cell_tb_ext_pane_t1

0x2ba6,	// (0x00052520) list_highlight_pane_cp11_ParamLimits

0x2ba6,	// (0x00052520) list_highlight_pane_cp11

0xf4ef,	// (0x0005ee69) popup_uni_indicator_window_ParamLimits

0xf4ef,	// (0x0005ee69) popup_uni_indicator_window

0x37d6,	// (0x00053150) bg_popup_sub_pane_cp14

0x8c54,	// (0x000585ce) list_uniindi_pane

0x8c60,	// (0x000585da) uniindi_top_pane

0x2ba6,	// (0x00052520) bg_uniindi_top_pane

0x8c7f,	// (0x000585f9) uniindi_top_pane_g1

0x8c95,	// (0x0005860f) uniindi_top_pane_g2

0x0003,

0xfd36,	// (0x0005f6b0) uniindi_top_pane_g

0x8cbf,	// (0x00058639) uniindi_top_pane_t1

0x8ce9,	// (0x00058663) list_single_uniindi_pane_ParamLimits

0x8ce9,	// (0x00058663) list_single_uniindi_pane

0x7383,	// (0x00056cfd) bg_uniindi_top_pane_g1

0x8cfc,	// (0x00058676) list_single_uniindi_pane_g1

0x8d0f,	// (0x00058689) list_single_uniindi_pane_t1

0xf3dc,	// (0x0005ed56) control_bg_pane

0x8d34,	// (0x000586ae) bg_sctrl_sk_pane_cp1

0x8d3d,	// (0x000586b7) bg_sctrl_sk_pane_cp2

0x8d46,	// (0x000586c0) control_bg_pane_g1

0x8d4f,	// (0x000586c9) control_bg_pane_g2

0x0001,

0xfd3f,	// (0x0005f6b9) control_bg_pane_g

0x6daf,	// (0x00056729) cell_indicator_nsta_pane_g1_ParamLimits

0xdc57,	// (0x0005d5d1) cell_indicator_nsta_pane_g2_ParamLimits

0xfaa7,	// (0x0005f421) cell_indicator_nsta_pane_g_ParamLimits

0x2f90,	// (0x0005290a) form2_midp_time_pane_t1_ParamLimits

0x1ad8,	// (0x00051452) main_idle_act4_pane_ParamLimits

0x1ad8,	// (0x00051452) main_idle_act4_pane

0xc243,	// (0x0005bbbd) popup_tb_extension_window_ParamLimits

0xe5e9,	// (0x0005df63) tb_ext_find_pane_ParamLimits

0xe5e9,	// (0x0005df63) tb_ext_find_pane

0x8d58,	// (0x000586d2) ai_gene_pane_1_cp1

0x4569,	// (0x00053ee3) ai_gene_pane_2_cp1

0x8d60,	// (0x000586da) list_single_idle_plugin_calendar_pane

0x8d69,	// (0x000586e3) list_single_idle_plugin_notification_pane

0x8d72,	// (0x000586ec) list_single_idle_plugin_player_pane

0xe647,	// (0x0005dfc1) list_single_idle_plugin_shortcut_pane_ParamLimits

0xe647,	// (0x0005dfc1) list_single_idle_plugin_shortcut_pane

0xe66f,	// (0x0005dfe9) main_idle_act4_pane_t1

0xe685,	// (0x0005dfff) main_idle_act4_pane_t2

0x0001,

0xfd44,	// (0x0005f6be) main_idle_act4_pane_t

0xe69b,	// (0x0005e015) middle_sk_idle_act4_pane_ParamLimits

0xe69b,	// (0x0005e015) middle_sk_idle_act4_pane

0xe6b7,	// (0x0005e031) popup_clock_digital_analogue_window_cp2

0xe6df,	// (0x0005e059) shortcut_wheel_idle_act4_pane_ParamLimits

0xe6df,	// (0x0005e059) shortcut_wheel_idle_act4_pane

0x7383,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g1

0x7383,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g2

0x7383,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g3

0x7383,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g4

0x7383,	// (0x00056cfd) shortcut_wheel_idle_act4_pane_g5

0x8e05,	// (0x0005877f) shortcut_wheel_idle_act4_pane_g6

0x8e0d,	// (0x00058787) shortcut_wheel_idle_act4_pane_g7

0x8e15,	// (0x0005878f) shortcut_wheel_idle_act4_pane_g8

0x8e1d,	// (0x00058797) shortcut_wheel_idle_act4_pane_g9

0x0008,

0xfd49,	// (0x0005f6c3) shortcut_wheel_idle_act4_pane_g

0xe18c,	// (0x0005db06) middle_sk_idle_act4_pane_g1_ParamLimits

0xe18c,	// (0x0005db06) middle_sk_idle_act4_pane_g1

0xe75c,	// (0x0005e0d6) middle_sk_idle_act4_pane_g2_ParamLimits

0xe75c,	// (0x0005e0d6) middle_sk_idle_act4_pane_g2

0x0001,

0xfd6c,	// (0x0005f6e6) middle_sk_idle_act4_pane_g_ParamLimits

0xfd6c,	// (0x0005f6e6) middle_sk_idle_act4_pane_g

0xe774,	// (0x0005e0ee) middle_sk_idle_act4_pane_t1_ParamLimits

0xe774,	// (0x0005e0ee) middle_sk_idle_act4_pane_t1

0xe7a3,	// (0x0005e11d) grid_ai_shortcut_pane_ParamLimits

0xe7a3,	// (0x0005e11d) grid_ai_shortcut_pane

0xe7c0,	// (0x0005e13a) list_highlight_pane_cp16_ParamLimits

0xe7c0,	// (0x0005e13a) list_highlight_pane_cp16

0xe7cd,	// (0x0005e147) list_single_idle_plugin_shortcut_pane_g1_ParamLimits

0xe7cd,	// (0x0005e147) list_single_idle_plugin_shortcut_pane_g1

0xe7d9,	// (0x0005e153) list_single_idle_plugin_shortcut_pane_g2_ParamLimits

0xe7d9,	// (0x0005e153) list_single_idle_plugin_shortcut_pane_g2

0xe7f5,	// (0x0005e16f) list_single_idle_plugin_shortcut_pane_g3_ParamLimits

0xe7f5,	// (0x0005e16f) list_single_idle_plugin_shortcut_pane_g3

0x0002,

0xfd71,	// (0x0005f6eb) list_single_idle_plugin_shortcut_pane_g_ParamLimits

0xfd71,	// (0x0005f6eb) list_single_idle_plugin_shortcut_pane_g

0xe80a,	// (0x0005e184) cell_ai_shortcut_pane_ParamLimits

0xe80a,	// (0x0005e184) cell_ai_shortcut_pane

0xe820,	// (0x0005e19a) cell_ai_shortcut_pane_g1_ParamLimits

0xe820,	// (0x0005e19a) cell_ai_shortcut_pane_g1

0x8d58,	// (0x000586d2) ai_gene_pane_1_cp2

0x8f4d,	// (0x000588c7) ai_gene_pane_2_cp2

0x8f55,	// (0x000588cf) list_highlight_pane_cp15

0x8f5e,	// (0x000588d8) list_single_idle_plugin_calendar_pane_g1

0x8f55,	// (0x000588cf) list_highlight_pane_cp17

0x8f66,	// (0x000588e0) list_single_idle_plugin_calendar_pane_g1_copy1

0x8f6e,	// (0x000588e8) list_single_idle_plugin_player_pane_g1

0x667c,	// (0x00055ff6) list_single_idle_plugin_player_pane_g2

0x0001,

0xfd78,	// (0x0005f6f2) list_single_idle_plugin_player_pane_g

0x8f76,	// (0x000588f0) list_single_idle_plugin_player_pane_t1

0x8f84,	// (0x000588fe) list_single_idle_plugin_player_pane_t2

0x8f92,	// (0x0005890c) list_single_idle_plugin_player_pane_t3

0x8fa0,	// (0x0005891a) list_single_idle_plugin_player_pane_t4

0x0003,

0xfd7d,	// (0x0005f6f7) list_single_idle_plugin_player_pane_t

0x8fae,	// (0x00058928) wait_bar_pane_cp15

0x8fb6,	// (0x00058930) grid_ai_notification_pane

0x667c,	// (0x00055ff6) list_single_idle_plugin_notification_pane_g1

0xe842,	// (0x0005e1bc) cell_ai_notification_pane_ParamLimits

0xe842,	// (0x0005e1bc) cell_ai_notification_pane

0x8fcc,	// (0x00058946) cell_ai_notification_pane_g1

0x8fd4,	// (0x0005894e) cell_ai_notification_pane_t1

0xe84f,	// (0x0005e1c9) tb_ext_find_button_pane

0xe857,	// (0x0005e1d1) tb_ext_find_pane_g1

0xe85f,	// (0x0005e1d9) tb_ext_find_pane_t1

0x3e3a,	// (0x000537b4) tb_ext_find_button_pane_g1

0x9000,	// (0x0005897a) tb_ext_find_button_pane_g2

0x0001,

0xfd86,	// (0x0005f700) tb_ext_find_button_pane_g

0xe66f,	// (0x0005dfe9) main_idle_act4_pane_t1_ParamLimits

0xe685,	// (0x0005dfff) main_idle_act4_pane_t2_ParamLimits

0xfd44,	// (0x0005f6be) main_idle_act4_pane_t_ParamLimits

0xe6b7,	// (0x0005e031) popup_clock_digital_analogue_window_cp2_ParamLimits

0xe6cf,	// (0x0005e049) sat_plugin_idle_act4_pane_ParamLimits

0xe6cf,	// (0x0005e049) sat_plugin_idle_act4_pane

0xe86d,	// (0x0005e1e7) sat_plugin_idle_act4_pane_t1_ParamLimits

0xe86d,	// (0x0005e1e7) sat_plugin_idle_act4_pane_t1

0xe885,	// (0x0005e1ff) sat_plugin_idle_act4_pane_t2_ParamLimits

0xe885,	// (0x0005e1ff) sat_plugin_idle_act4_pane_t2

0xe89d,	// (0x0005e217) sat_plugin_idle_act4_pane_t3_ParamLimits

0xe89d,	// (0x0005e217) sat_plugin_idle_act4_pane_t3

0xe8b5,	// (0x0005e22f) sat_plugin_idle_act4_pane_t4_ParamLimits

0xe8b5,	// (0x0005e22f) sat_plugin_idle_act4_pane_t4

0x0003,

0xfd8b,	// (0x0005f705) sat_plugin_idle_act4_pane_t_ParamLimits

0xfd8b,	// (0x0005f705) sat_plugin_idle_act4_pane_t

0xf4a1,	// (0x0005ee1b) popup_battery_window_ParamLimits

0xf4a1,	// (0x0005ee1b) popup_battery_window

0x2ba6,	// (0x00052520) bg_popup_sub_pane_cp25_ParamLimits

0x2ba6,	// (0x00052520) bg_popup_sub_pane_cp25

0x9055,	// (0x000589cf) popup_battery_window_g1_ParamLimits

0x9055,	// (0x000589cf) popup_battery_window_g1

0x9061,	// (0x000589db) popup_battery_window_t1_ParamLimits

0x9061,	// (0x000589db) popup_battery_window_t1

0x9073,	// (0x000589ed) popup_battery_window_t2_ParamLimits

0x9073,	// (0x000589ed) popup_battery_window_t2

0x0001,

0xfd94,	// (0x0005f70e) popup_battery_window_t_ParamLimits

0xfd94,	// (0x0005f70e) popup_battery_window_t

0xd114,	// (0x0005ca8e) midp_canvas_pane_ParamLimits

0xd16f,	// (0x0005cae9) midp_keypad_pane_ParamLimits

0xd16f,	// (0x0005cae9) midp_keypad_pane

0x4770,	// (0x000540ea) main_midp_pane_ParamLimits

0x6e3b,	// (0x000567b5) signal_pane_g2_cp_ParamLimits

0xe8cd,	// (0x0005e247) aid_size_cell_midp_keypad_ParamLimits

0xe8cd,	// (0x0005e247) aid_size_cell_midp_keypad

0xe8eb,	// (0x0005e265) midp_keyp_game_grid_pane_ParamLimits

0xe8eb,	// (0x0005e265) midp_keyp_game_grid_pane

0xe912,	// (0x0005e28c) midp_keyp_rocker_pane_ParamLimits

0xe912,	// (0x0005e28c) midp_keyp_rocker_pane

0xe953,	// (0x0005e2cd) midp_keyp_sk_left_pane_ParamLimits

0xe953,	// (0x0005e2cd) midp_keyp_sk_left_pane

0xe9a7,	// (0x0005e321) midp_keyp_sk_right_pane_ParamLimits

0xe9a7,	// (0x0005e321) midp_keyp_sk_right_pane

0x2829,	// (0x000521a3) bg_button_pane_cp03

0xe9fb,	// (0x0005e375) midp_keyp_sk_left_pane_g1

0x2829,	// (0x000521a3) bg_button_pane_cp04

0xe9fb,	// (0x0005e375) midp_keyp_sk_right_pane_g1

0x7383,	// (0x00056cfd) midp_keyp_rocker_pane_g1

0xea04,	// (0x0005e37e) keyp_game_cell_pane_ParamLimits

0xea04,	// (0x0005e37e) keyp_game_cell_pane

0x2829,	// (0x000521a3) bg_button_pane_cp02

0xea28,	// (0x0005e3a2) keyp_game_cell_pane_g1

0xb331,	// (0x0005acab) popup_fep_vkb2_window_ParamLimits

0xb331,	// (0x0005acab) popup_fep_vkb2_window

0xc72a,	// (0x0005c0a4) aid_size_cell_vkb2_ParamLimits

0xc72a,	// (0x0005c0a4) aid_size_cell_vkb2

0xc760,	// (0x0005c0da) popup_fep_vkb2_window_g1_ParamLimits

0xc760,	// (0x0005c0da) popup_fep_vkb2_window_g1

0xc7b0,	// (0x0005c12a) vkb2_area_bottom_pane_ParamLimits

0xc7b0,	// (0x0005c12a) vkb2_area_bottom_pane

0xc804,	// (0x0005c17e) vkb2_area_keypad_pane_ParamLimits

0xc804,	// (0x0005c17e) vkb2_area_keypad_pane

0xc84c,	// (0x0005c1c6) vkb2_area_top_pane_ParamLimits

0xc84c,	// (0x0005c1c6) vkb2_area_top_pane

0xc8d2,	// (0x0005c24c) vkb2_top_entry_pane_ParamLimits

0xc8d2,	// (0x0005c24c) vkb2_top_entry_pane

0xc8ff,	// (0x0005c279) vkb2_top_grid_left_pane_ParamLimits

0xc8ff,	// (0x0005c279) vkb2_top_grid_left_pane

0xc91f,	// (0x0005c299) vkb2_top_grid_right_pane_ParamLimits

0xc91f,	// (0x0005c299) vkb2_top_grid_right_pane

0x220d,	// (0x00051b87) vkb2_cell_keypad_pane_ParamLimits

0x220d,	// (0x00051b87) vkb2_cell_keypad_pane

0xc965,	// (0x0005c2df) vkb2_area_bottom_grid_pane_ParamLimits

0xc965,	// (0x0005c2df) vkb2_area_bottom_grid_pane

0xc98f,	// (0x0005c309) vkb2_area_bottom_pane_g1_ParamLimits

0xc98f,	// (0x0005c309) vkb2_area_bottom_pane_g1

0xc9b5,	// (0x0005c32f) vkb2_area_bottom_pane_g2_ParamLimits

0xc9b5,	// (0x0005c32f) vkb2_area_bottom_pane_g2

0xc9e6,	// (0x0005c360) vkb2_area_bottom_pane_g3_ParamLimits

0xc9e6,	// (0x0005c360) vkb2_area_bottom_pane_g3

0x0002,

0xfd99,	// (0x0005f713) vkb2_area_bottom_pane_g_ParamLimits

0xfd99,	// (0x0005f713) vkb2_area_bottom_pane_g

0x23b7,	// (0x00051d31) vkb2_top_cell_left_pane_ParamLimits

0x23b7,	// (0x00051d31) vkb2_top_cell_left_pane

0xea31,	// (0x0005e3ab) vkb2_top_entry_pane_g1_ParamLimits

0xea31,	// (0x0005e3ab) vkb2_top_entry_pane_g1

0xea3f,	// (0x0005e3b9) vkb2_top_entry_pane_t1_ParamLimits

0xea3f,	// (0x0005e3b9) vkb2_top_entry_pane_t1

0x9216,	// (0x00058b90) vkb2_top_entry_pane_t2_ParamLimits

0x9216,	// (0x00058b90) vkb2_top_entry_pane_t2

0x9248,	// (0x00058bc2) vkb2_top_entry_pane_t3_ParamLimits

0x9248,	// (0x00058bc2) vkb2_top_entry_pane_t3

0x0002,

0xfda0,	// (0x0005f71a) vkb2_top_entry_pane_t_ParamLimits

0xfda0,	// (0x0005f71a) vkb2_top_entry_pane_t

0xca50,	// (0x0005c3ca) vkb2_top_grid_right_pane_g1_ParamLimits

0xca50,	// (0x0005c3ca) vkb2_top_grid_right_pane_g1

0x241a,	// (0x00051d94) vkb2_top_grid_right_pane_g2_ParamLimits

0x241a,	// (0x00051d94) vkb2_top_grid_right_pane_g2

0x2432,	// (0x00051dac) vkb2_top_grid_right_pane_g3_ParamLimits

0x2432,	// (0x00051dac) vkb2_top_grid_right_pane_g3

0xca66,	// (0x0005c3e0) vkb2_top_grid_right_pane_g4_ParamLimits

0xca66,	// (0x0005c3e0) vkb2_top_grid_right_pane_g4

0x0003,

0xfda7,	// (0x0005f721) vkb2_top_grid_right_pane_g_ParamLimits

0xfda7,	// (0x0005f721) vkb2_top_grid_right_pane_g

0x2460,	// (0x00051dda) vkb2_top_cell_left_pane_g1

0x2477,	// (0x00051df1) vkb2_cell_keypad_pane_g1_ParamLimits

0x2477,	// (0x00051df1) vkb2_cell_keypad_pane_g1

0x926c,	// (0x00058be6) vkb2_cell_keypad_pane_t1_ParamLimits

0x926c,	// (0x00058be6) vkb2_cell_keypad_pane_t1

0x2485,	// (0x00051dff) vkb2_cell_bottom_grid_pane_ParamLimits

0x2485,	// (0x00051dff) vkb2_cell_bottom_grid_pane

0x24be,	// (0x00051e38) vkb2_cell_bottom_grid_pane_g1

0xe700,	// (0x0005e07a) aid_call2_pane_cp02

0xe708,	// (0x0005e082) aid_call_pane_cp02

0xe710,	// (0x0005e08a) clock_digital_number_pane_cp10

0xe718,	// (0x0005e092) clock_digital_number_pane_cp11

0xe720,	// (0x0005e09a) clock_digital_number_pane_cp12

0xe728,	// (0x0005e0a2) clock_digital_number_pane_cp13

0xe730,	// (0x0005e0aa) clock_digital_separator_pane_cp10

0x3e3a,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g1

0x3e3a,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g2

0xe738,	// (0x0005e0b2) popup_clock_digital_analogue_window_cp2_g3

0x3e3a,	// (0x000537b4) popup_clock_digital_analogue_window_cp2_g4

0xe738,	// (0x0005e0b2) popup_clock_digital_analogue_window_cp2_g5

0x0004,

0xfd5c,	// (0x0005f6d6) popup_clock_digital_analogue_window_cp2_g

0xe740,	// (0x0005e0ba) popup_clock_digital_analogue_window_cp2_t1

0xe74e,	// (0x0005e0c8) popup_clock_digital_analogue_window_cp2_t2

0x0001,

0xfd67,	// (0x0005f6e1) popup_clock_digital_analogue_window_cp2_t

0x7383,	// (0x00056cfd) clock_digital_number_pane_cp10_g1

0x7383,	// (0x00056cfd) clock_digital_number_pane_cp10_g2

0x0001,

0xfb43,	// (0x0005f4bd) clock_digital_number_pane_cp10_g

0x7383,	// (0x00056cfd) clock_digital_separator_pane_cp10_g1

0x7383,	// (0x00056cfd) clock_digital_separator_pane_cp10_g2

0x0001,

0xfb43,	// (0x0005f4bd) clock_digital_separator_pane_cp10_g

0x8ca1,	// (0x0005861b) uniindi_top_pane_g3

0x8cb2,	// (0x0005862c) uniindi_top_pane_g4

0x2298,	// (0x00051c12) vkb2_row_keypad_pane_ParamLimits

0x2298,	// (0x00051c12) vkb2_row_keypad_pane

0x24da,	// (0x00051e54) vkb2_cell_t_keypad_pane_ParamLimits

0x24da,	// (0x00051e54) vkb2_cell_t_keypad_pane

0x24ea,	// (0x00051e64) vkb2_cell_t_keypad_pane_cp08_ParamLimits

0x24ea,	// (0x00051e64) vkb2_cell_t_keypad_pane_cp08

0x24fd,	// (0x00051e77) vkb2_cell_t_keypad_pane_cp09_ParamLimits

0x24fd,	// (0x00051e77) vkb2_cell_t_keypad_pane_cp09

0x2511,	// (0x00051e8b) vkb2_cell_t_keypad_pane_cp01_ParamLimits

0x2511,	// (0x00051e8b) vkb2_cell_t_keypad_pane_cp01

0x2522,	// (0x00051e9c) vkb2_cell_t_keypad_pane_cp02_ParamLimits

0x2522,	// (0x00051e9c) vkb2_cell_t_keypad_pane_cp02

0x2533,	// (0x00051ead) vkb2_cell_t_keypad_pane_cp03_ParamLimits

0x2533,	// (0x00051ead) vkb2_cell_t_keypad_pane_cp03

0x2544,	// (0x00051ebe) vkb2_cell_t_keypad_pane_cp04_ParamLimits

0x2544,	// (0x00051ebe) vkb2_cell_t_keypad_pane_cp04

0x2555,	// (0x00051ecf) vkb2_cell_t_keypad_pane_cp05_ParamLimits

0x2555,	// (0x00051ecf) vkb2_cell_t_keypad_pane_cp05

0x2566,	// (0x00051ee0) vkb2_cell_t_keypad_pane_cp06_ParamLimits

0x2566,	// (0x00051ee0) vkb2_cell_t_keypad_pane_cp06

0x2577,	// (0x00051ef1) vkb2_cell_t_keypad_pane_cp07_ParamLimits

0x2577,	// (0x00051ef1) vkb2_cell_t_keypad_pane_cp07

0x2588,	// (0x00051f02) vkb2_cell_t_keypad_pane_cp10_ParamLimits

0x2588,	// (0x00051f02) vkb2_cell_t_keypad_pane_cp10

0x1d3d,	// (0x000516b7) vkb2_cell_t_keypad_pane_g1

0x9283,	// (0x00058bfd) vkb2_cell_t_keypad_pane_t1

0xf3dc,	// (0x0005ed56) popup_grid_graphic2_window

0xea78,	// (0x0005e3f2) aid_size_cell_graphic2_ParamLimits

0xea78,	// (0x0005e3f2) aid_size_cell_graphic2

0xeab6,	// (0x0005e430) bg_popup_window_pane_cp21_ParamLimits

0xeab6,	// (0x0005e430) bg_popup_window_pane_cp21

0xeac4,	// (0x0005e43e) graphic2_pages_pane_ParamLimits

0xeac4,	// (0x0005e43e) graphic2_pages_pane

0xeb1a,	// (0x0005e494) grid_graphic2_control_pane_ParamLimits

0xeb1a,	// (0x0005e494) grid_graphic2_control_pane

0xeb62,	// (0x0005e4dc) grid_graphic2_pane_ParamLimits

0xeb62,	// (0x0005e4dc) grid_graphic2_pane

0xebe9,	// (0x0005e563) cell_graphic2_pane

0xf3dc,	// (0x0005ed56) main_comp_mode_pane

0x851f,	// (0x00057e99) list_ai3_gene_pane_ParamLimits

0xe444,	// (0x0005ddbe) bg_popup_window_pane_cp19_ParamLimits

0x88f5,	// (0x0005826f) bg_touch_area_indi_pane_ParamLimits

0x88f5,	// (0x0005826f) bg_touch_area_indi_pane

0x890b,	// (0x00058285) bg_touch_area_indi_pane_cp01_ParamLimits

0x890b,	// (0x00058285) bg_touch_area_indi_pane_cp01

0x8921,	// (0x0005829b) bg_touch_area_indi_pane_cp02_ParamLimits

0x8921,	// (0x0005829b) bg_touch_area_indi_pane_cp02

0x8939,	// (0x000582b3) bg_touch_area_indi_pane_cp03_ParamLimits

0x8939,	// (0x000582b3) bg_touch_area_indi_pane_cp03

0x8953,	// (0x000582cd) popup_slider_window_g1_ParamLimits

0x896f,	// (0x000582e9) popup_slider_window_g2_ParamLimits

0x898b,	// (0x00058305) popup_slider_window_g3_ParamLimits

0xfcf1,	// (0x0005f66b) popup_slider_window_g_ParamLimits

0x89e7,	// (0x00058361) popup_slider_window_t1_ParamLimits

0x8a5b,	// (0x000583d5) small_volume_slider_vertical_pane_ParamLimits

0xebe9,	// (0x0005e563) cell_graphic2_pane_ParamLimits

0xec46,	// (0x0005e5c0) bg_button_pane_cp10_ParamLimits

0xec46,	// (0x0005e5c0) bg_button_pane_cp10

0xec59,	// (0x0005e5d3) bg_button_pane_cp11_ParamLimits

0xec59,	// (0x0005e5d3) bg_button_pane_cp11

0xec6c,	// (0x0005e5e6) graphic2_pages_pane_g1_ParamLimits

0xec6c,	// (0x0005e5e6) graphic2_pages_pane_g1

0xec87,	// (0x0005e601) graphic2_pages_pane_g2_ParamLimits

0xec87,	// (0x0005e601) graphic2_pages_pane_g2

0x0001,

0xfdb5,	// (0x0005f72f) graphic2_pages_pane_g_ParamLimits

0xfdb5,	// (0x0005f72f) graphic2_pages_pane_g

0xec9f,	// (0x0005e619) graphic2_pages_pane_t1_ParamLimits

0xec9f,	// (0x0005e619) graphic2_pages_pane_t1

0xecb7,	// (0x0005e631) cell_graphic2_control_pane_ParamLimits

0xecb7,	// (0x0005e631) cell_graphic2_control_pane

0xed02,	// (0x0005e67c) cell_graphic2_pane_g1_ParamLimits

0xed02,	// (0x0005e67c) cell_graphic2_pane_g1

0xe19a,	// (0x0005db14) cell_graphic2_pane_g2_ParamLimits

0xe19a,	// (0x0005db14) cell_graphic2_pane_g2

0xe1b4,	// (0x0005db2e) cell_graphic2_pane_g3_ParamLimits

0xe1b4,	// (0x0005db2e) cell_graphic2_pane_g3

0xe1a7,	// (0x0005db21) cell_graphic2_pane_g4_ParamLimits

0xe1a7,	// (0x0005db21) cell_graphic2_pane_g4

0xed0f,	// (0x0005e689) cell_graphic2_pane_g5_ParamLimits

0xed0f,	// (0x0005e689) cell_graphic2_pane_g5

0x0004,

0xfdba,	// (0x0005f734) cell_graphic2_pane_g_ParamLimits

0xfdba,	// (0x0005f734) cell_graphic2_pane_g

0xed2f,	// (0x0005e6a9) cell_graphic2_pane_t1_ParamLimits

0xed2f,	// (0x0005e6a9) cell_graphic2_pane_t1

0x5a13,	// (0x0005538d) grid_highlight_pane_cp11_ParamLimits

0x5a13,	// (0x0005538d) grid_highlight_pane_cp11

0x2ba6,	// (0x00052520) bg_button_pane_cp05

0xed64,	// (0x0005e6de) cell_graphic2_control_pane_g1

0x7383,	// (0x00056cfd) bg_touch_area_indi_pane_g1

0x9553,	// (0x00058ecd) aid_cmod_rocker_key_size

0x955d,	// (0x00058ed7) aid_cmode_itu_key_size

0x9567,	// (0x00058ee1) main_cmode_video_pane

0x9571,	// (0x00058eeb) main_comp_mode_itu_pane

0x957d,	// (0x00058ef7) main_comp_mode_rocker_pane

0x9589,	// (0x00058f03) cell_cmode_rocker_pane_ParamLimits

0x9589,	// (0x00058f03) cell_cmode_rocker_pane

0x959b,	// (0x00058f15) cell_cmode_itu_pane_ParamLimits

0x959b,	// (0x00058f15) cell_cmode_itu_pane

0x37d6,	// (0x00053150) bg_button_pane_cp06_ParamLimits

0x37d6,	// (0x00053150) bg_button_pane_cp06

0x7601,	// (0x00056f7b) cell_cmode_rocker_pane_g1_ParamLimits

0x7601,	// (0x00056f7b) cell_cmode_rocker_pane_g1

0x8aff,	// (0x00058479) cell_cmode_rocker_pane_g2_ParamLimits

0x8aff,	// (0x00058479) cell_cmode_rocker_pane_g2

0x0001,

0xfdca,	// (0x0005f744) cell_cmode_rocker_pane_g_ParamLimits

0xfdca,	// (0x0005f744) cell_cmode_rocker_pane_g

0x2829,	// (0x000521a3) bg_button_pane_cp07

0x95b0,	// (0x00058f2a) cell_cmode_itu_pane_g1

0x95b9,	// (0x00058f33) cell_cmode_itu_pane_t1

0x95c7,	// (0x00058f41) cell_cmode_itu_pane_t2

0x0001,

0xfdcf,	// (0x0005f749) cell_cmode_itu_pane_t

0x8d24,	// (0x0005869e) aid_touch_ctrl_left

0x8d2c,	// (0x000586a6) aid_touch_ctrl_right

0x2829,	// (0x000521a3) compa_mode_pane

0xed8a,	// (0x0005e704) aid_cmod_rocker_key_size_cp

0xed94,	// (0x0005e70e) aid_cmode_itu_key_size_cp

0x95e9,	// (0x00058f63) compa_mode_pane_g1

0x95f1,	// (0x00058f6b) compa_mode_pane_g2

0x95f9,	// (0x00058f73) compa_mode_pane_g3

0x0002,

0xfdd4,	// (0x0005f74e) compa_mode_pane_g

0xed9e,	// (0x0005e718) main_comp_mode_itu_pane_cp

0xeda6,	// (0x0005e720) main_comp_mode_rocker_pane_cp

0xedae,	// (0x0005e728) cell_cmode_itu_pane_cp_ParamLimits

0xedae,	// (0x0005e728) cell_cmode_itu_pane_cp

0xedc3,	// (0x0005e73d) cell_cmode_rocker_pane_cp_ParamLimits

0xedc3,	// (0x0005e73d) cell_cmode_rocker_pane_cp

0x37d6,	// (0x00053150) bg_button_pane_cp06_cp_ParamLimits

0x37d6,	// (0x00053150) bg_button_pane_cp06_cp

0x7601,	// (0x00056f7b) cell_cmode_rocker_pane_g1_cp_ParamLimits

0x7601,	// (0x00056f7b) cell_cmode_rocker_pane_g1_cp

0x7383,	// (0x00056cfd) cell_cmode_rocker_pane_g2_cp

0x2829,	// (0x000521a3) bg_button_pane_cp07_cp

0xedd5,	// (0x0005e74f) cell_cmode_itu_pane_g1_cp

0xedde,	// (0x0005e758) cell_cmode_itu_pane_t1_cp

0xedde,	// (0x0005e758) cell_cmode_itu_pane_t2_cp

0xda6f,	// (0x0005d3e9) settings_code_pane_cp2

0x291d,	// (0x00052297) bg_popup_window_pane_cp3_ParamLimits

0x33c1,	// (0x00052d3b) heading_pane_cp3_ParamLimits

0x33cd,	// (0x00052d47) listscroll_popup_graphic_pane_ParamLimits

0x1ae6,	// (0x00051460) fep_hwr_aid_pane_ParamLimits

0x1f5e,	// (0x000518d8) aid_touch_sctrl_top_ParamLimits

0x1f79,	// (0x000518f3) sctrl_sk_top_pane_g1_ParamLimits

0x1d3d,	// (0x000516b7) sctrl_sk_top_pane_g2_ParamLimits

0xfd0a,	// (0x0005f684) sctrl_sk_top_pane_g_ParamLimits

0x1f86,	// (0x00051900) sctrl_sk_top_pane_t1_ParamLimits

0x1f5e,	// (0x000518d8) aid_touch_sctrl_bottom_ParamLimits

0x1f86,	// (0x00051900) sctrl_sk_bottom_pane_t1_ParamLimits

0x8c6d,	// (0x000585e7) aid_area_touch_clock

0xc894,	// (0x0005c20e) aid_vkb2_area_top_pane_cell_ParamLimits

0xc894,	// (0x0005c20e) aid_vkb2_area_top_pane_cell

0xc93f,	// (0x0005c2b9) aid_vkb2_area_bottom_pane_cell_ParamLimits

0xc93f,	// (0x0005c2b9) aid_vkb2_area_bottom_pane_cell

0x91ce,	// (0x00058b48) popup_char_count_window

0x9646,	// (0x00058fc0) popup_char_count_window_g1

0x964f,	// (0x00058fc9) popup_char_count_window_g2

0x9658,	// (0x00058fd2) popup_char_count_window_g3

0x0002,

0xfddb,	// (0x0005f755) popup_char_count_window_g

0x9661,	// (0x00058fdb) popup_char_count_window_t1

0x2035,	// (0x000519af) popup_fep_char_preview_window_ParamLimits

0x2035,	// (0x000519af) popup_fep_char_preview_window

0xc8b4,	// (0x0005c22e) vkb2_top_candi_pane_ParamLimits

0xc8b4,	// (0x0005c22e) vkb2_top_candi_pane

0xedec,	// (0x0005e766) cell_vkb2_top_candi_pane_ParamLimits

0xedec,	// (0x0005e766) cell_vkb2_top_candi_pane

0x259d,	// (0x00051f17) bg_popup_fep_char_preview_window_ParamLimits

0x259d,	// (0x00051f17) bg_popup_fep_char_preview_window

0x25ab,	// (0x00051f25) popup_fep_char_preview_window_t1_ParamLimits

0x25ab,	// (0x00051f25) popup_fep_char_preview_window_t1

0x96dd,	// (0x00059057) bg_popup_fep_char_preview_window_g1

0x96e5,	// (0x0005905f) bg_popup_fep_char_preview_window_g2

0x96ed,	// (0x00059067) bg_popup_fep_char_preview_window_g3

0x96f5,	// (0x0005906f) bg_popup_fep_char_preview_window_g4

0x96fd,	// (0x00059077) bg_popup_fep_char_preview_window_g5

0x25e5,	// (0x00051f5f) bg_popup_fep_char_preview_window_g6

0x9705,	// (0x0005907f) bg_popup_fep_char_preview_window_g7

0x970d,	// (0x00059087) bg_popup_fep_char_preview_window_g8

0x9715,	// (0x0005908f) bg_popup_fep_char_preview_window_g9

0x0008,

0xfde2,	// (0x0005f75c) bg_popup_fep_char_preview_window_g

0x1d3d,	// (0x000516b7) cell_vkb2_top_candi_pane_g1_ParamLimits

0x1d3d,	// (0x000516b7) cell_vkb2_top_candi_pane_g1

0x1d4b,	// (0x000516c5) cell_vkb2_top_candi_pane_g2_ParamLimits

0x1d4b,	// (0x000516c5) cell_vkb2_top_candi_pane_g2

0x96bc,	// (0x00059036) cell_vkb2_top_candi_pane_g3_ParamLimits

0x96bc,	// (0x00059036) cell_vkb2_top_candi_pane_g3

0x25ed,	// (0x00051f67) cell_vkb2_top_candi_pane_g4_ParamLimits

0x25ed,	// (0x00051f67) cell_vkb2_top_candi_pane_g4

0x7acc,	// (0x00057446) cell_vkb2_top_candi_pane_g5_ParamLimits

0x7acc,	// (0x00057446) cell_vkb2_top_candi_pane_g5

0x260e,	// (0x00051f88) cell_vkb2_top_candi_pane_g6_ParamLimits

0x260e,	// (0x00051f88) cell_vkb2_top_candi_pane_g6

0x0005,

0xfdf5,	// (0x0005f76f) cell_vkb2_top_candi_pane_g_ParamLimits

0xfdf5,	// (0x0005f76f) cell_vkb2_top_candi_pane_g

0x261c,	// (0x00051f96) cell_vkb2_top_candi_pane_t1

0x17ce,	// (0x00051148) aid_size_touch_slider_mark_ParamLimits

0x17ce,	// (0x00051148) aid_size_touch_slider_mark

0xeb00,	// (0x0005e47a) grid_graphic2_catg_pane_ParamLimits

0xeb00,	// (0x0005e47a) grid_graphic2_catg_pane

0xebbc,	// (0x0005e536) popup_grid_graphic2_window_t1_ParamLimits

0xebbc,	// (0x0005e536) popup_grid_graphic2_window_t1

0xebd2,	// (0x0005e54c) popup_grid_graphic2_window_t2_ParamLimits

0xebd2,	// (0x0005e54c) popup_grid_graphic2_window_t2

0x0001,

0xfdb0,	// (0x0005f72a) popup_grid_graphic2_window_t_ParamLimits

0xfdb0,	// (0x0005f72a) popup_grid_graphic2_window_t

0x2ba6,	// (0x00052520) bg_button_pane_cp05_ParamLimits

0xed64,	// (0x0005e6de) cell_graphic2_control_pane_g1_ParamLimits

0xee52,	// (0x0005e7cc) cell_graphic2_catg_pane_ParamLimits

0xee52,	// (0x0005e7cc) cell_graphic2_catg_pane

0x2829,	// (0x000521a3) bg_button_pane_cp12

0xee64,	// (0x0005e7de) cell_graphic2_catg_pane_g1

0x8c39,	// (0x000585b3) cell_tb_ext_pane_t1_ParamLimits

0x23d7,	// (0x00051d51) vkb2_top_cell_right_narrow_pane_ParamLimits

0x23d7,	// (0x00051d51) vkb2_top_cell_right_narrow_pane

0x23ef,	// (0x00051d69) vkb2_top_cell_right_wide_pane_ParamLimits

0x23ef,	// (0x00051d69) vkb2_top_cell_right_wide_pane

0x1ad8,	// (0x00051452) bg_vkb2_func_pane_ParamLimits

0x1ad8,	// (0x00051452) bg_vkb2_func_pane

0x2460,	// (0x00051dda) vkb2_top_cell_left_pane_g1_ParamLimits

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp03_ParamLimits

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp03

0x24be,	// (0x00051e38) vkb2_cell_bottom_grid_pane_g1_ParamLimits

0x4c88,	// (0x00054602) bg_vkb2_func_pane_g1

0x4c90,	// (0x0005460a) bg_vkb2_func_pane_g2

0x4ca0,	// (0x0005461a) bg_vkb2_func_pane_g3

0x4c98,	// (0x00054612) bg_vkb2_func_pane_g4

0x4ca8,	// (0x00054622) bg_vkb2_func_pane_g5

0x4cb0,	// (0x0005462a) bg_vkb2_func_pane_g6

0x4cb8,	// (0x00054632) bg_vkb2_func_pane_g7

0x4cc0,	// (0x0005463a) bg_vkb2_func_pane_g8

0x4c80,	// (0x000545fa) bg_vkb2_func_pane_g9

0x0008,

0xfe02,	// (0x0005f77c) bg_vkb2_func_pane_g

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp01_ParamLimits

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp01

0x2460,	// (0x00051dda) vkb2_top_cell_right_wide_pane_g1_ParamLimits

0x2460,	// (0x00051dda) vkb2_top_cell_right_wide_pane_g1

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp02_ParamLimits

0x1ad8,	// (0x00051452) bg_vkb2_fuc_pane_cp02

0x24be,	// (0x00051e38) vkb2_top_cell_right_narrow_pane_g1_ParamLimits

0x24be,	// (0x00051e38) vkb2_top_cell_right_narrow_pane_g1

0xe384,	// (0x0005dcfe) aid_touch_area_decrease_ParamLimits

0xe384,	// (0x0005dcfe) aid_touch_area_decrease

0xe3b8,	// (0x0005dd32) aid_touch_area_increase_ParamLimits

0xe3b8,	// (0x0005dd32) aid_touch_area_increase

0xe3e0,	// (0x0005dd5a) aid_touch_area_mute_ParamLimits

0xe3e0,	// (0x0005dd5a) aid_touch_area_mute

0xe410,	// (0x0005dd8a) aid_touch_area_slider_ParamLimits

0xe410,	// (0x0005dd8a) aid_touch_area_slider

0xe450,	// (0x0005ddca) popup_slider_window_g4_ParamLimits

0xe450,	// (0x0005ddca) popup_slider_window_g4

0xe478,	// (0x0005ddf2) popup_slider_window_g5_ParamLimits

0xe478,	// (0x0005ddf2) popup_slider_window_g5

0xe4ac,	// (0x0005de26) popup_slider_window_g6_ParamLimits

0xe4ac,	// (0x0005de26) popup_slider_window_g6

0x8a15,	// (0x0005838f) popup_slider_window_t2_ParamLimits

0x8a15,	// (0x0005838f) popup_slider_window_t2

0x0001,

0xfcfe,	// (0x0005f678) popup_slider_window_t_ParamLimits

0xfcfe,	// (0x0005f678) popup_slider_window_t

0xe4c8,	// (0x0005de42) slider_pane_ParamLimits

0xe4c8,	// (0x0005de42) slider_pane

0x9738,	// (0x000590b2) slider_pane_g1_ParamLimits

0x9738,	// (0x000590b2) slider_pane_g1

0x974c,	// (0x000590c6) slider_pane_g2_ParamLimits

0x974c,	// (0x000590c6) slider_pane_g2

0x9762,	// (0x000590dc) slider_pane_g3_ParamLimits

0x9762,	// (0x000590dc) slider_pane_g3

0x0003,

0xfe15,	// (0x0005f78f) slider_pane_g_ParamLimits

0xfe15,	// (0x0005f78f) slider_pane_g

0xc28b,	// (0x0005bc05) popup_tb_float_extension_window_ParamLimits

0xc28b,	// (0x0005bc05) popup_tb_float_extension_window

0x978e,	// (0x00059108) aid_size_cell_tb_float_ext

0x2829,	// (0x000521a3) bg_popup_sub_window_cp28

0x979a,	// (0x00059114) grid_tb_float_ext_pane

0x97a4,	// (0x0005911e) cell_tb_float_ext_pane_ParamLimits

0x97a4,	// (0x0005911e) cell_tb_float_ext_pane

0x97be,	// (0x00059138) cell_tb_float_ext_pane_g1

0x97c7,	// (0x00059141) grid_highlight_pane_cp12

0xc59c,	// (0x0005bf16) cell_last_hwr_side_pane_ParamLimits

0xc59c,	// (0x0005bf16) cell_last_hwr_side_pane

0x7383,	// (0x00056cfd) cell_last_hwr_side_pane_g1

0x97d0,	// (0x0005914a) cell_last_hwr_side_pane_g2

0x0001,

0xfe1e,	// (0x0005f798) cell_last_hwr_side_pane_g

0xca1b,	// (0x0005c395) vkb2_area_bottom_space_btn_pane_ParamLimits

0xca1b,	// (0x0005c395) vkb2_area_bottom_space_btn_pane

0x1d3d,	// (0x000516b7) vkb2_cell_t_keypad_pane_g1_ParamLimits

0x9283,	// (0x00058bfd) vkb2_cell_t_keypad_pane_t1_ParamLimits

0x261c,	// (0x00051f96) cell_vkb2_top_candi_pane_t1_ParamLimits

0x263b,	// (0x00051fb5) vkb2_area_bottom_space_btn_pane_g1_ParamLimits

0x263b,	// (0x00051fb5) vkb2_area_bottom_space_btn_pane_g1

0x2675,	// (0x00051fef) vkb2_area_bottom_space_btn_pane_g2_ParamLimits

0x2675,	// (0x00051fef) vkb2_area_bottom_space_btn_pane_g2

0x26ab,	// (0x00052025) vkb2_area_bottom_space_btn_pane_g3_ParamLimits

0x26ab,	// (0x00052025) vkb2_area_bottom_space_btn_pane_g3

0x0003,

0xfe23,	// (0x0005f79d) vkb2_area_bottom_space_btn_pane_g_ParamLimits

0xfe23,	// (0x0005f79d) vkb2_area_bottom_space_btn_pane_g

0x1b9b,	// (0x00051515) cel_fep_hwr_func_pane_ParamLimits

0x1b9b,	// (0x00051515) cel_fep_hwr_func_pane

0xc571,	// (0x0005beeb) cell_hwr_side_button_pane_ParamLimits

0xc571,	// (0x0005beeb) cell_hwr_side_button_pane

0x8c6d,	// (0x000585e7) aid_area_touch_clock_ParamLimits

0x2ba6,	// (0x00052520) bg_uniindi_top_pane_ParamLimits

0x8c7f,	// (0x000585f9) uniindi_top_pane_g1_ParamLimits

0x8c95,	// (0x0005860f) uniindi_top_pane_g2_ParamLimits

0x8ca1,	// (0x0005861b) uniindi_top_pane_g3_ParamLimits

0x8cb2,	// (0x0005862c) uniindi_top_pane_g4_ParamLimits

0xfd36,	// (0x0005f6b0) uniindi_top_pane_g_ParamLimits

0x8cbf,	// (0x00058639) uniindi_top_pane_t1_ParamLimits

0x2ba6,	// (0x00052520) bg_vkb2_func_pane_cp01_ParamLimits

0x2ba6,	// (0x00052520) bg_vkb2_func_pane_cp01

0x97d9,	// (0x00059153) cel_fep_hwr_func_pane_g1_ParamLimits

0x97d9,	// (0x00059153) cel_fep_hwr_func_pane_g1

0x2ba6,	// (0x00052520) bg_vkb2_func_pane_cp02_ParamLimits

0x2ba6,	// (0x00052520) bg_vkb2_func_pane_cp02

0x97d9,	// (0x00059153) cell_hwr_side_button_pane_g1_ParamLimits

0x97d9,	// (0x00059153) cell_hwr_side_button_pane_g1

0x4af8,	// (0x00054472) status_pane_g4_ParamLimits

0x4af8,	// (0x00054472) status_pane_g4

0x4b12,	// (0x0005448c) status_pane_t1

0x70bd,	// (0x00056a37) form2_midp_gauge_slider_cont_pane

0x70c5,	// (0x00056a3f) form2_midp_gauge_slider_pane_t1_ParamLimits

0xdd2a,	// (0x0005d6a4) form2_midp_gauge_slider_pane_t2_ParamLimits

0xdd3c,	// (0x0005d6b6) form2_midp_gauge_slider_pane_t3_ParamLimits

0xfaf6,	// (0x0005f470) form2_midp_gauge_slider_pane_t_ParamLimits

0x70fb,	// (0x00056a75) form2_midp_slider_pane_ParamLimits

0x1ff5,	// (0x0005196f) aid_size_cell_func_vkb2_ParamLimits

0x1ff5,	// (0x0005196f) aid_size_cell_func_vkb2

0x977a,	// (0x000590f4) slider_pane_g4_ParamLimits

0x977a,	// (0x000590f4) slider_pane_g4

0xca7c,	// (0x0005c3f6) form2_midp_gauge_slider_pane_t2_cp01

0xca8a,	// (0x0005c404) form2_midp_gauge_slider_pane_t3_cp01_ParamLimits

0xca8a,	// (0x0005c404) form2_midp_gauge_slider_pane_t3_cp01

0x2720,	// (0x0005209a) form2_midp_slider_pane_cp01

0x2829,	// (0x000521a3) navi_smil_pane

0x9812,	// (0x0005918c) navi_smil_pane_g1

0x981a,	// (0x00059194) navi_smil_pane_t1

0x97e7,	// (0x00059161) form2_midp_slider_pane_g1

0x97f0,	// (0x0005916a) form2_midp_slider_pane_g2

0x97f8,	// (0x00059172) form2_midp_slider_pane_g3

0x97e7,	// (0x00059161) form2_midp_slider_pane_g4

0xee6d,	// (0x0005e7e7) form2_midp_slider_pane_g5

0x0004,

0xfe2c,	// (0x0005f7a6) form2_midp_slider_pane_g

0x26e5,	// (0x0005205f) vkb2_area_bottom_space_btn_pane_g4_ParamLimits

0x26e5,	// (0x0005205f) vkb2_area_bottom_space_btn_pane_g4

0xd347,	// (0x0005ccc1) lc0_navi_pane_ParamLimits

0xd347,	// (0x0005ccc1) lc0_navi_pane

0xd3b1,	// (0x0005cd2b) lc0_stat_indi_pane_ParamLimits

0xd3b1,	// (0x0005cd2b) lc0_stat_indi_pane

0xd3c6,	// (0x0005cd40) ls0_title_pane_ParamLimits

0xd3c6,	// (0x0005cd40) ls0_title_pane

0x37d6,	// (0x00053150) bg_popup_sub_pane_cp14_ParamLimits

0x8c54,	// (0x000585ce) list_uniindi_pane_ParamLimits

0x8c60,	// (0x000585da) uniindi_top_pane_ParamLimits

0x8cfc,	// (0x00058676) list_single_uniindi_pane_g1_ParamLimits

0x8d0f,	// (0x00058689) list_single_uniindi_pane_t1_ParamLimits

0xcaa7,	// (0x0005c421) lc0_stat_clock_pane_ParamLimits

0xcaa7,	// (0x0005c421) lc0_stat_clock_pane

0xee78,	// (0x0005e7f2) lc0_stat_indi_pane_g1_ParamLimits

0xee78,	// (0x0005e7f2) lc0_stat_indi_pane_g1

0xee85,	// (0x0005e7ff) lc0_stat_indi_pane_g2_ParamLimits

0xee85,	// (0x0005e7ff) lc0_stat_indi_pane_g2

0x0001,

0xfe37,	// (0x0005f7b1) lc0_stat_indi_pane_g_ParamLimits

0xfe37,	// (0x0005f7b1) lc0_stat_indi_pane_g

0xcab4,	// (0x0005c42e) lc0_uni_indicator_pane_ParamLimits

0xcab4,	// (0x0005c42e) lc0_uni_indicator_pane

0xee92,	// (0x0005e80c) ls0_title_pane_g1_ParamLimits

0xee92,	// (0x0005e80c) ls0_title_pane_g1

0xeea6,	// (0x0005e820) ls0_title_pane_t1_ParamLimits

0xeea6,	// (0x0005e820) ls0_title_pane_t1

0xcac1,	// (0x0005c43b) lc0_uni_indicator_pane_g1_ParamLimits

0xcac1,	// (0x0005c43b) lc0_uni_indicator_pane_g1

0x988c,	// (0x00059206) lc0_stat_clock_pane_t1

0xf3dc,	// (0x0005ed56) main_ai5_pane

0x989a,	// (0x00059214) ai5_sk_pane_ParamLimits

0x989a,	// (0x00059214) ai5_sk_pane

0xeed4,	// (0x0005e84e) cell_ai5_widget_pane_ParamLimits

0xeed4,	// (0x0005e84e) cell_ai5_widget_pane

0x995d,	// (0x000592d7) aid_size_cell_widget_grid

0x9973,	// (0x000592ed) bg_ai5_widget_pane_ParamLimits

0x9973,	// (0x000592ed) bg_ai5_widget_pane

0x99dd,	// (0x00059357) cell_ai5_widget_pane_g2

0x99ed,	// (0x00059367) cell_ai5_widget_pane_g3

0x9a0c,	// (0x00059386) cell_ai5_widget_pane_g4

0x9a18,	// (0x00059392) cell_ai5_widget_pane_g5

0x9a24,	// (0x0005939e) cell_ai5_widget_pane_g6

0x9a30,	// (0x000593aa) cell_ai5_widget_pane_g7

0x9a78,	// (0x000593f2) cell_ai5_widget_pane_t1_ParamLimits

0x9a78,	// (0x000593f2) cell_ai5_widget_pane_t1

0x9a95,	// (0x0005940f) cell_ai5_widget_pane_t2_ParamLimits

0x9a95,	// (0x0005940f) cell_ai5_widget_pane_t2

0x9aad,	// (0x00059427) cell_ai5_widget_pane_t3_ParamLimits

0x9aad,	// (0x00059427) cell_ai5_widget_pane_t3

0x9ac5,	// (0x0005943f) cell_ai5_widget_pane_t4_ParamLimits

0x9ac5,	// (0x0005943f) cell_ai5_widget_pane_t4

0x9adf,	// (0x00059459) cell_ai5_widget_pane_t5_ParamLimits

0x9adf,	// (0x00059459) cell_ai5_widget_pane_t5

0x9afe,	// (0x00059478) cell_ai5_widget_pane_t6_ParamLimits

0x9afe,	// (0x00059478) cell_ai5_widget_pane_t6

0x9b10,	// (0x0005948a) cell_ai5_widget_pane_t7_ParamLimits

0x9b10,	// (0x0005948a) cell_ai5_widget_pane_t7

0x9b29,	// (0x000594a3) cell_ai5_widget_pane_t8_ParamLimits

0x9b29,	// (0x000594a3) cell_ai5_widget_pane_t8

0x0009,

0xfe51,	// (0x0005f7cb) cell_ai5_widget_pane_t_ParamLimits

0xfe51,	// (0x0005f7cb) cell_ai5_widget_pane_t

0x9b75,	// (0x000594ef) grid_ai5_widget_pane

0x37d6,	// (0x00053150) highlight_cell_ai5_widget_pane_ParamLimits

0x37d6,	// (0x00053150) highlight_cell_ai5_widget_pane

0xef3e,	// (0x0005e8b8) ai5_sk_left_pane

0xef48,	// (0x0005e8c2) ai5_sk_middle_pane

0xef52,	// (0x0005e8cc) ai5_sk_right_pane

0x9bab,	// (0x00059525) bg_ai5_widget_pane_g1_ParamLimits

0x9bab,	// (0x00059525) bg_ai5_widget_pane_g1

0x9bb7,	// (0x00059531) bg_ai5_widget_pane_g2_ParamLimits

0x9bb7,	// (0x00059531) bg_ai5_widget_pane_g2

0x9bc3,	// (0x0005953d) bg_ai5_widget_pane_g3_ParamLimits

0x9bc3,	// (0x0005953d) bg_ai5_widget_pane_g3

0x9bcf,	// (0x00059549) bg_ai5_widget_pane_g4_ParamLimits

0x9bcf,	// (0x00059549) bg_ai5_widget_pane_g4

0x9bdb,	// (0x00059555) bg_ai5_widget_pane_g5_ParamLimits

0x9bdb,	// (0x00059555) bg_ai5_widget_pane_g5

0x9be7,	// (0x00059561) bg_ai5_widget_pane_g6_ParamLimits

0x9be7,	// (0x00059561) bg_ai5_widget_pane_g6

0x9bf3,	// (0x0005956d) bg_ai5_widget_pane_g7_ParamLimits

0x9bf3,	// (0x0005956d) bg_ai5_widget_pane_g7

0x9bff,	// (0x00059579) bg_ai5_widget_pane_g8_ParamLimits

0x9bff,	// (0x00059579) bg_ai5_widget_pane_g8

0x9c0b,	// (0x00059585) bg_ai5_widget_pane_g9_ParamLimits

0x9c0b,	// (0x00059585) bg_ai5_widget_pane_g9

0x0008,

0xfe66,	// (0x0005f7e0) bg_ai5_widget_pane_g_ParamLimits

0xfe66,	// (0x0005f7e0) bg_ai5_widget_pane_g

0x9c3e,	// (0x000595b8) cell_shortcut_ai5_widget_pane_ParamLimits

0x9c3e,	// (0x000595b8) cell_shortcut_ai5_widget_pane

0x4430,	// (0x00053daa) bg_cell_shortcut_ai5_widget_pane

0x9c4f,	// (0x000595c9) cell_grid_ai5_widget_pane_g1

0x9c58,	// (0x000595d2) highlight_cell_shortcut_ai5_widget_pane

0x4c88,	// (0x00054602) ai5_sk_left_pane_g1

0x9c60,	// (0x000595da) ai5_sk_left_pane_g2

0x9c68,	// (0x000595e2) ai5_sk_left_pane_g3

0x9c70,	// (0x000595ea) ai5_sk_left_pane_g4

0x0003,

0xfe79,	// (0x0005f7f3) ai5_sk_left_pane_g

0x9c78,	// (0x000595f2) ai5_sk_left_pane_t1

0x4c90,	// (0x0005460a) ai5_sk_right_pane_g1

0x9c86,	// (0x00059600) ai5_sk_right_pane_g2

0x9c8e,	// (0x00059608) ai5_sk_right_pane_g3

0x9c96,	// (0x00059610) ai5_sk_right_pane_g4

0x0003,

0xfe82,	// (0x0005f7fc) ai5_sk_right_pane_g

0x9c9e,	// (0x00059618) ai5_sk_right_pane_t1

0x4c90,	// (0x0005460a) ai5_sk_middle_pane_g1

0x4c88,	// (0x00054602) ai5_sk_middle_pane_g2

0x4ca8,	// (0x00054622) ai5_sk_middle_pane_g3

0x9c8e,	// (0x00059608) ai5_sk_middle_pane_g4

0x9c68,	// (0x000595e2) ai5_sk_middle_pane_g5

0x9cac,	// (0x00059626) ai5_sk_middle_pane_g6

0xef5c,	// (0x0005e8d6) ai5_sk_middle_pane_g7

0x0006,

0xfe8b,	// (0x0005f805) ai5_sk_middle_pane_g

0xd233,	// (0x0005cbad) aid_touch_area_size_lc0_ParamLimits

0xd233,	// (0x0005cbad) aid_touch_area_size_lc0

0x1d6c,	// (0x000516e6) cell_hwr_candidate_pane_t1_ParamLimits

0x47d2,	// (0x0005414c) aid_touch_navi_pane

0xd4b9,	// (0x0005ce33) status_dt_navi_pane_ParamLimits

0xd4b9,	// (0x0005ce33) status_dt_navi_pane

0xd4d1,	// (0x0005ce4b) status_dt_sta_pane_ParamLimits

0xd4d1,	// (0x0005ce4b) status_dt_sta_pane

0xef64,	// (0x0005e8de) dt_sta_controll_pane

0xef71,	// (0x0005e8eb) dt_sta_indi_pane

0xef7e,	// (0x0005e8f8) dt_sta_title_pane

0x2ba6,	// (0x00052520) bg_dt_sta_indi_pane_ParamLimits

0x2ba6,	// (0x00052520) bg_dt_sta_indi_pane

0x9ce7,	// (0x00059661) dt_sta_battery_pane

0x9cef,	// (0x00059669) dt_sta_indi_pane_g1

0x9cf8,	// (0x00059672) dt_sta_indi_pane_g2

0x9d01,	// (0x0005967b) dt_sta_indi_pane_g3

0x0002,

0xfe9a,	// (0x0005f814) dt_sta_indi_pane_g

0x9d0a,	// (0x00059684) dt_sta_signal_pane

0x37d6,	// (0x00053150) bg_dt_sta_title_pane_ParamLimits

0x37d6,	// (0x00053150) bg_dt_sta_title_pane

0x9d13,	// (0x0005968d) dt_sta_title_pane_g1

0x9d1b,	// (0x00059695) dt_sta_title_pane_t1_ParamLimits

0x9d1b,	// (0x00059695) dt_sta_title_pane_t1

0x2829,	// (0x000521a3) bg_dt_sta_control_pane

0x9d30,	// (0x000596aa) dt_sta_controll_pane_g1

0x9d39,	// (0x000596b3) bg_dt_sta_title_pane_g1

0x9d42,	// (0x000596bc) bg_dt_sta_title_pane_g2

0x9d4b,	// (0x000596c5) bg_dt_sta_title_pane_g3

0x0002,

0xfea1,	// (0x0005f81b) bg_dt_sta_title_pane_g

0x7383,	// (0x00056cfd) bg_dt_sta_indi_pane_g1

0x9d54,	// (0x000596ce) dt_sta_signal_pane_g1

0x9d5c,	// (0x000596d6) dt_sta_signal_pane_g2

0x0001,

0xfea8,	// (0x0005f822) dt_sta_signal_pane_g

0x9d64,	// (0x000596de) dt_sta_battery_pane_g1

0x9d6d,	// (0x000596e7) dt_sta_battery_pane_t1

0x7383,	// (0x00056cfd) bg_dt_sta_control_pane_g1

0x3f46,	// (0x000538c0) fep_china_uni_eep_pane

0x3f4e,	// (0x000538c8) fep_china_uni_entry_pane_ParamLimits

0x3f5e,	// (0x000538d8) popup_fep_china_uni_window_g1_ParamLimits

0x3f6e,	// (0x000538e8) popup_fep_china_uni_window_g2_ParamLimits

0x3f6e,	// (0x000538e8) popup_fep_china_uni_window_g2

0x0001,

0xf728,	// (0x0005f0a2) popup_fep_china_uni_window_g_ParamLimits

0xf728,	// (0x0005f0a2) popup_fep_china_uni_window_g

0x9d7c,	// (0x000596f6) fep_china_uni_eep_pane_g1

0x9d84,	// (0x000596fe) fep_china_uni_eep_pane_t1

0x9809,	// (0x00059183) aid_touch_area_size_smil_player

0x492d,	// (0x000542a7) lc0_clock_pane

0x4b06,	// (0x00054480) status_pane_g5_ParamLimits

0x4b06,	// (0x00054480) status_pane_g5

0xbe0d,	// (0x0005b787) popup_keymap_window

0x4acc,	// (0x00054446) status_icon_pane

0x99ed,	// (0x00059367) cell_ai5_widget_pane_g3_ParamLimits

0x9a0c,	// (0x00059386) cell_ai5_widget_pane_g4_ParamLimits

0x9a18,	// (0x00059392) cell_ai5_widget_pane_g5_ParamLimits

0x9a3c,	// (0x000593b6) cell_ai5_widget_pane_g8_ParamLimits

0x9a3c,	// (0x000593b6) cell_ai5_widget_pane_g8

0x9a50,	// (0x000593ca) cell_ai5_widget_pane_g9_ParamLimits

0x9a50,	// (0x000593ca) cell_ai5_widget_pane_g9

0x9a64,	// (0x000593de) cell_ai5_widget_pane_g10_ParamLimits

0x9a64,	// (0x000593de) cell_ai5_widget_pane_g10

0x9d93,	// (0x0005970d) status_icon_pane_g1

0x2829,	// (0x000521a3) bg_popup_sub_pane_cp13

0x9d9b,	// (0x00059715) popup_keymap_window_t1

0xd1b5,	// (0x0005cb2f) control_pane_g6_ParamLimits

0xd1b5,	// (0x0005cb2f) control_pane_g6

0xd1c2,	// (0x0005cb3c) control_pane_g7_ParamLimits

0xd1c2,	// (0x0005cb3c) control_pane_g7

0xd1cf,	// (0x0005cb49) control_pane_g8_ParamLimits

0xd1cf,	// (0x0005cb49) control_pane_g8

0xef64,	// (0x0005e8de) dt_sta_controll_pane_ParamLimits

0xef71,	// (0x0005e8eb) dt_sta_indi_pane_ParamLimits

0xef7e,	// (0x0005e8f8) dt_sta_title_pane_ParamLimits

0x3702,	// (0x0005307c) aid_size_touch_scroll_bar_cale

0xf4b5,	// (0x0005ee2f) popup_discreet_window_ParamLimits

0xf4b5,	// (0x0005ee2f) popup_discreet_window

0xb377,	// (0x0005acf1) popup_sk_window

0x537d,	// (0x00054cf7) bg_popup_sub_pane_cp28_ParamLimits

0x537d,	// (0x00054cf7) bg_popup_sub_pane_cp28

0x9da9,	// (0x00059723) popup_discreet_window_g1_ParamLimits

0x9da9,	// (0x00059723) popup_discreet_window_g1

0x9dc9,	// (0x00059743) popup_discreet_window_t1_ParamLimits

0x9dc9,	// (0x00059743) popup_discreet_window_t1

0x9de7,	// (0x00059761) popup_discreet_window_t2_ParamLimits

0x9de7,	// (0x00059761) popup_discreet_window_t2

0x0002,

0xfead,	// (0x0005f827) popup_discreet_window_t_ParamLimits

0xfead,	// (0x0005f827) popup_discreet_window_t

0x2757,	// (0x000520d1) popup_sk_window_g1

0x2761,	// (0x000520db) popup_sk_window_g2

0x0001,

0xfeb4,	// (0x0005f82e) popup_sk_window_g

0x276b,	// (0x000520e5) popup_sk_window_t1

0x2779,	// (0x000520f3) popup_sk_window_t1_copy1

0x99dd,	// (0x00059357) cell_ai5_widget_pane_g2_ParamLimits

0x9b3b,	// (0x000594b5) cell_ai5_widget_pane_t9_ParamLimits

0x9b3b,	// (0x000594b5) cell_ai5_widget_pane_t9

0x2829,	// (0x000521a3) main_fep_fshwr2_pane

0xcae8,	// (0x0005c462) aid_fshwr2_btn_pane

0xcaf7,	// (0x0005c471) aid_fshwr2_syb_pane

0xcb09,	// (0x0005c483) aid_fshwr2_txt_pane

0xcb18,	// (0x0005c492) fshwr2_func_candi_pane

0xcb29,	// (0x0005c4a3) fshwr2_hwr_syb_pane

0xcb44,	// (0x0005c4be) fshwr2_icf_pane

0x2829,	// (0x000521a3) fshwr2_icf_bg_pane

0xef90,	// (0x0005e90a) fshwr2_icf_pane_t1_ParamLimits

0xef90,	// (0x0005e90a) fshwr2_icf_pane_t1

0x7383,	// (0x00056cfd) fshwr2_func_candi_pane_g1

0x9e50,	// (0x000597ca) fshwr2_func_candi_row_pane_ParamLimits

0x9e50,	// (0x000597ca) fshwr2_func_candi_row_pane

0xefa8,	// (0x0005e922) cell_fshwr2_syb_pane_ParamLimits

0xefa8,	// (0x0005e922) cell_fshwr2_syb_pane

0x7601,	// (0x00056f7b) fshwr2_hwr_syb_pane_g1_ParamLimits

0x7601,	// (0x00056f7b) fshwr2_hwr_syb_pane_g1

0x2829,	// (0x000521a3) bg_popup_call_pane_cp01

0x9e7b,	// (0x000597f5) fshwr2_func_candi_cell_pane_ParamLimits

0x9e7b,	// (0x000597f5) fshwr2_func_candi_cell_pane

0x9eac,	// (0x00059826) fshwr2_func_candi_cell_bg_pane_ParamLimits

0x9eac,	// (0x00059826) fshwr2_func_candi_cell_bg_pane

0x9ec6,	// (0x00059840) fshwr2_func_candi_cell_pane_g1_ParamLimits

0x9ec6,	// (0x00059840) fshwr2_func_candi_cell_pane_g1

0x9eee,	// (0x00059868) fshwr2_func_candi_cell_pane_t1_ParamLimits

0x9eee,	// (0x00059868) fshwr2_func_candi_cell_pane_t1

0x2829,	// (0x000521a3) bg_button_pane_cp08

0x4430,	// (0x00053daa) cell_fshwr2_syb_bg_pane

0xefc2,	// (0x0005e93c) cell_fshwr2_syb_bg_pane_g1

0xefca,	// (0x0005e944) cell_fshwr2_syb_bg_pane_t1

0x37d6,	// (0x00053150) main_tmo_pane

0x5e9f,	// (0x00055819) uni_indicator_pane_g1_ParamLimits

0x5eb4,	// (0x0005582e) uni_indicator_pane_g2_ParamLimits

0x5eca,	// (0x00055844) uni_indicator_pane_g3_ParamLimits

0x5ee0,	// (0x0005585a) uni_indicator_pane_g4_ParamLimits

0x5ee0,	// (0x0005585a) uni_indicator_pane_g4

0x5ef4,	// (0x0005586e) uni_indicator_pane_g5_ParamLimits

0x5ef4,	// (0x0005586e) uni_indicator_pane_g5

0x5f08,	// (0x00055882) uni_indicator_pane_g6_ParamLimits

0x5f08,	// (0x00055882) uni_indicator_pane_g6

0xf920,	// (0x0005f29a) uni_indicator_pane_g_ParamLimits

0xe360,	// (0x0005dcda) popup_tmo_note_window_ParamLimits

0xe360,	// (0x0005dcda) popup_tmo_note_window

0x1fd7,	// (0x00051951) fshwr2_bg_pane

0x9edf,	// (0x00059859) fshwr2_func_candi_cell_pane_g2_ParamLimits

0x9edf,	// (0x00059859) fshwr2_func_candi_cell_pane_g2

0x0001,

0xfeb9,	// (0x0005f833) fshwr2_func_candi_cell_pane_g_ParamLimits

0xfeb9,	// (0x0005f833) fshwr2_func_candi_cell_pane_g

0x7383,	// (0x00056cfd) bg_popup_window_pane_cp01

0x9f18,	// (0x00059892) bg_popup_window_pane_g1_cp01

0x9f21,	// (0x0005989b) bg_popup_window_pane_cp22_ParamLimits

0x9f21,	// (0x0005989b) bg_popup_window_pane_cp22

0x9f2f,	// (0x000598a9) listscroll_tmo_link_pane_ParamLimits

0x9f2f,	// (0x000598a9) listscroll_tmo_link_pane

0x9f6f,	// (0x000598e9) popup_tmo_note_window_g1_ParamLimits

0x9f6f,	// (0x000598e9) popup_tmo_note_window_g1

0x9f7c,	// (0x000598f6) tmo_note_info_pane_ParamLimits

0x9f7c,	// (0x000598f6) tmo_note_info_pane

0xefd9,	// (0x0005e953) list_tmo_note_info_pane_g1_ParamLimits

0xefd9,	// (0x0005e953) list_tmo_note_info_pane_g1

0x9fad,	// (0x00059927) list_tmo_note_info_pane_g2_ParamLimits

0x9fad,	// (0x00059927) list_tmo_note_info_pane_g2

0x0001,

0xfebe,	// (0x0005f838) list_tmo_note_info_pane_g_ParamLimits

0xfebe,	// (0x0005f838) list_tmo_note_info_pane_g

0x9fc9,	// (0x00059943) list_tmo_note_info_text_pane_ParamLimits

0x9fc9,	// (0x00059943) list_tmo_note_info_text_pane

0xa04a,	// (0x000599c4) list_tmo_link_pane

0xa057,	// (0x000599d1) scroll_pane_cp20

0xa064,	// (0x000599de) list_single_tmo_link_pane_ParamLimits

0xa064,	// (0x000599de) list_single_tmo_link_pane

0xa074,	// (0x000599ee) list_single_tmo_link_pane_t1

0xa082,	// (0x000599fc) list_tmo_note_info_text_pane_t1_ParamLimits

0xa082,	// (0x000599fc) list_tmo_note_info_text_pane_t1

0xce3b,	// (0x0005c7b5) aid_size_touch_scroll_bar_cp01_ParamLimits

0xce3b,	// (0x0005c7b5) aid_size_touch_scroll_bar_cp01

0xb97f,	// (0x0005b2f9) aid_size_touch_slider_marker

0xb367,	// (0x0005ace1) popup_settings_window_ParamLimits

0xb367,	// (0x0005ace1) popup_settings_window

0x0e91,	// (0x0005080b) popup_candi_list_indi_window

0x47d2,	// (0x0005414c) aid_touch_navi_pane_ParamLimits

0x1f32,	// (0x000518ac) rs_clock_indi_pane

0x1f3b,	// (0x000518b5) sctrl_sk_bottom_pane_ParamLimits

0x1f4c,	// (0x000518c6) sctrl_sk_top_pane_ParamLimits

0x204f,	// (0x000519c9) popup_fep_tooltip_window

0x995d,	// (0x000592d7) aid_size_cell_widget_grid_ParamLimits

0x99d1,	// (0x0005934b) cell_ai5_widget_pane_g1_ParamLimits

0x99d1,	// (0x0005934b) cell_ai5_widget_pane_g1

0x9a24,	// (0x0005939e) cell_ai5_widget_pane_g6_ParamLimits

0x9a30,	// (0x000593aa) cell_ai5_widget_pane_g7_ParamLimits

0x0009,

0xfe3c,	// (0x0005f7b6) cell_ai5_widget_pane_g_ParamLimits

0xfe3c,	// (0x0005f7b6) cell_ai5_widget_pane_g

0x9b5f,	// (0x000594d9) cell_ai5_widget_pane_t10_ParamLimits

0x9b5f,	// (0x000594d9) cell_ai5_widget_pane_t10

0x9b75,	// (0x000594ef) grid_ai5_widget_pane_ParamLimits

0x9c17,	// (0x00059591) cell_contacts_ai5_widget_pane_ParamLimits

0x9c17,	// (0x00059591) cell_contacts_ai5_widget_pane

0x9dfc,	// (0x00059776) popup_discreet_window_t3_ParamLimits

0x9dfc,	// (0x00059776) popup_discreet_window_t3

0x27f1,	// (0x0005216b) popup_fshwr2_char_preview_window_ParamLimits

0x27f1,	// (0x0005216b) popup_fshwr2_char_preview_window

0xeff0,	// (0x0005e96a) tmo_note_info_pane_t1

0xf005,	// (0x0005e97f) tmo_note_info_pane_t2

0xf01c,	// (0x0005e996) tmo_note_info_pane_t3

0xa026,	// (0x000599a0) tmo_note_info_pane_t4

0xa038,	// (0x000599b2) tmo_note_info_pane_t5

0x0004,

0xfec3,	// (0x0005f83d) tmo_note_info_pane_t

0xa04a,	// (0x000599c4) list_tmo_link_pane_ParamLimits

0xa057,	// (0x000599d1) scroll_pane_cp20_ParamLimits

0x2829,	// (0x000521a3) bg_popup_fep_char_preview_window_cp01

0xa09b,	// (0x00059a15) popup_fshwr2_char_preview_window_t1

0xa0a9,	// (0x00059a23) popup_candi_list_indi_window_g1

0xa0b2,	// (0x00059a2c) bg_cell_contacts_ai5_widget_pane

0xa0be,	// (0x00059a38) cell_contacts_ai5_widget_pane_g1

0xa0d2,	// (0x00059a4c) cell_contacts_ai5_widget_pane_g2

0xa0de,	// (0x00059a58) cell_contacts_ai5_widget_pane_g3

0x0002,

0xfece,	// (0x0005f848) cell_contacts_ai5_widget_pane_g

0xa0f1,	// (0x00059a6b) cell_contacts_ai5_widget_pane_t1

0x37d6,	// (0x00053150) highlight_cell_shortcut_ai5_widget_pane_cp01

0xf096,	// (0x0005ea10) settings_container_pane

0x4430,	// (0x00053daa) listscroll_set_pane_copy1

0x69e7,	// (0x00056361) scroll_pane_cp121_copy1

0xa174,	// (0x00059aee) set_content_pane_copy1

0xf0a2,	// (0x0005ea1c) aid_height_set_list_copy1_ParamLimits

0xf0a2,	// (0x0005ea1c) aid_height_set_list_copy1

0x6100,	// (0x00055a7a) aid_size_parent_copy1_ParamLimits

0x6100,	// (0x00055a7a) aid_size_parent_copy1

0xf0ae,	// (0x0005ea28) button_value_adjust_pane_cp6_copy1_ParamLimits

0xf0ae,	// (0x0005ea28) button_value_adjust_pane_cp6_copy1

0x4770,	// (0x000540ea) list_highlight_pane_cp2_copy1_ParamLimits

0x4770,	// (0x000540ea) list_highlight_pane_cp2_copy1

0xf0c2,	// (0x0005ea3c) list_set_pane_copy1_ParamLimits

0xf0c2,	// (0x0005ea3c) list_set_pane_copy1

0xf031,	// (0x0005e9ab) main_pane_set_t1_copy1_ParamLimits

0xf031,	// (0x0005e9ab) main_pane_set_t1_copy1

0xf06b,	// (0x0005e9e5) main_pane_set_t2_copy1_ParamLimits

0xf06b,	// (0x0005e9e5) main_pane_set_t2_copy1

0xf16f,	// (0x0005eae9) main_pane_set_t3_copy1

0xf17d,	// (0x0005eaf7) main_pane_set_t4_copy1

0xf08a,	// (0x0005ea04) set_content_pane_g1_copy1_ParamLimits

0xf08a,	// (0x0005ea04) set_content_pane_g1_copy1

0xf18b,	// (0x0005eb05) setting_code_pane_copy1

0xa26d,	// (0x00059be7) setting_slider_graphic_pane_copy1

0xa26d,	// (0x00059be7) setting_slider_pane_copy1

0xa26d,	// (0x00059be7) setting_text_pane_copy1

0xa26d,	// (0x00059be7) setting_volume_pane_copy1

0xf18b,	// (0x0005eb05) settings_code_pane_cp2_copy1

0xf193,	// (0x0005eb0d) settings_code_pane_cp_copy1_ParamLimits

0xf193,	// (0x0005eb0d) settings_code_pane_cp_copy1

0xf1a7,	// (0x0005eb21) volume_set_pane_copy1

0xf1af,	// (0x0005eb29) volume_set_pane_g10_copy1

0xf1b7,	// (0x0005eb31) volume_set_pane_g1_copy1

0xf1bf,	// (0x0005eb39) volume_set_pane_g2_copy1

0xf1c7,	// (0x0005eb41) volume_set_pane_g3_copy1

0xf1cf,	// (0x0005eb49) volume_set_pane_g4_copy1

0xf1d7,	// (0x0005eb51) volume_set_pane_g5_copy1

0xf1df,	// (0x0005eb59) volume_set_pane_g6_copy1

0xf1e7,	// (0x0005eb61) volume_set_pane_g7_copy1

0xf1ef,	// (0x0005eb69) volume_set_pane_g8_copy1

0xf1f7,	// (0x0005eb71) volume_set_pane_g9_copy1

0x291d,	// (0x00052297) bg_set_opt_pane_cp_copy1_ParamLimits

0x291d,	// (0x00052297) bg_set_opt_pane_cp_copy1

0xa2e1,	// (0x00059c5b) setting_slider_pane_t1_copy1_ParamLimits

0xa2e1,	// (0x00059c5b) setting_slider_pane_t1_copy1

0xf1ff,	// (0x0005eb79) setting_slider_pane_t2_copy1_ParamLimits

0xf1ff,	// (0x0005eb79) setting_slider_pane_t2_copy1

0xf219,	// (0x0005eb93) setting_slider_pane_t3_copy1_ParamLimits

0xf219,	// (0x0005eb93) setting_slider_pane_t3_copy1

0xf231,	// (0x0005ebab) slider_set_pane_copy1_ParamLimits

0xf231,	// (0x0005ebab) slider_set_pane_copy1

0x383d,	// (0x000531b7) set_opt_bg_pane_g1_copy2

0x3845,	// (0x000531bf) set_opt_bg_pane_g2_copy2

0xa347,	// (0x00059cc1) set_opt_bg_pane_g3_copy2

0x3855,	// (0x000531cf) set_opt_bg_pane_g4_copy2

0x385d,	// (0x000531d7) set_opt_bg_pane_g5_copy2

0x3865,	// (0x000531df) set_opt_bg_pane_g6_copy2

0xf247,	// (0x0005ebc1) set_opt_bg_pane_g7_copy2

0xa359,	// (0x00059cd3) set_opt_bg_pane_g8_copy2

0xa363,	// (0x00059cdd) set_opt_bg_pane_g9_copy2

0xa36d,	// (0x00059ce7) aid_size_touch_slider_mark_copy1_ParamLimits

0xa36d,	// (0x00059ce7) aid_size_touch_slider_mark_copy1

0xa381,	// (0x00059cfb) slider_set_pane_g1_copy1

0xa38a,	// (0x00059d04) slider_set_pane_g2_copy1

0x6a0b,	// (0x00056385) slider_set_pane_g3_copy1_ParamLimits

0x6a0b,	// (0x00056385) slider_set_pane_g3_copy1

0x6a1f,	// (0x00056399) slider_set_pane_g4_copy1_ParamLimits

0x6a1f,	// (0x00056399) slider_set_pane_g4_copy1

0x6a37,	// (0x000563b1) slider_set_pane_g5_copy1_ParamLimits

0x6a37,	// (0x000563b1) slider_set_pane_g5_copy1

0x6a0b,	// (0x00056385) slider_set_pane_g6_copy1_ParamLimits

0x6a0b,	// (0x00056385) slider_set_pane_g6_copy1

0xf24f,	// (0x0005ebc9) slider_set_pane_g7_copy1_ParamLimits

0xf24f,	// (0x0005ebc9) slider_set_pane_g7_copy1

0x283d,	// (0x000521b7) bg_set_opt_pane_cp2_copy1

0xa3a8,	// (0x00059d22) setting_slider_graphic_pane_g1_copy1

0xf265,	// (0x0005ebdf) setting_slider_graphic_pane_t1_copy1

0xf275,	// (0x0005ebef) setting_slider_graphic_pane_t2_copy1

0xf285,	// (0x0005ebff) slider_set_pane_cp_copy1

0xa3e1,	// (0x00059d5b) input_focus_pane_cp1_copy1

0xa3ea,	// (0x00059d64) list_set_text_pane_copy1

0xa3f2,	// (0x00059d6c) setting_text_pane_g1_copy1

0xece9,	// (0x0005e663) set_text_pane_t1_copy1

0xa3e1,	// (0x00059d5b) input_focus_pane_cp2_copy1

0xa3f2,	// (0x00059d6c) setting_code_pane_g1_copy1

0xf28d,	// (0x0005ec07) setting_code_pane_t1_copy1

0x6813,	// (0x0005618d) list_set_graphic_pane_copy1

0x283d,	// (0x000521b7) bg_set_opt_pane_cp4_copy1

0xd062,	// (0x0005c9dc) list_set_graphic_pane_g1_copy1_ParamLimits

0xd062,	// (0x0005c9dc) list_set_graphic_pane_g1_copy1

0xf29b,	// (0x0005ec15) list_set_graphic_pane_g2_copy1

0xd07a,	// (0x0005c9f4) list_set_graphic_pane_t1_copy1_ParamLimits

0xd07a,	// (0x0005c9f4) list_set_graphic_pane_t1_copy1

0x7383,	// (0x00056cfd) rs_clock_indi_pane_g1

0xa423,	// (0x00059d9d) rs_clock_indi_pane_t1

0xa431,	// (0x00059dab) rs_indi_pane

0xa439,	// (0x00059db3) rs_indi_pane_g1

0xa442,	// (0x00059dbc) rs_indi_pane_g2

0xa44b,	// (0x00059dc5) rs_indi_pane_g3

0x0002,

0xfed5,	// (0x0005f84f) rs_indi_pane_g

0x4430,	// (0x00053daa) bg_popup_preview_window_pane_cp03

0xa454,	// (0x00059dce) popup_fep_tooltip_window_t1

0x7fea,	// (0x00057964) popup_note2_window_g2_ParamLimits

0x7fea,	// (0x00057964) popup_note2_window_g2

0x0001,

0xfc6e,	// (0x0005f5e8) popup_note2_window_g_ParamLimits

0xfc6e,	// (0x0005f5e8) popup_note2_window_g

0x84e5,	// (0x00057e5f) bg_popup_sub_pane_cp11_ParamLimits

0x84f2,	// (0x00057e6c) cell_ai3_links_pane_g1_ParamLimits

0x8509,	// (0x00057e83) cell_ai3_links_pane_t1

0xece9,	// (0x0005e663) set_text_pane_t1_copy1_ParamLimits

0xd0ee,	// (0x0005ca68) cell_graphic_popup_pane_cp2_ParamLimits

0xd0ee,	// (0x0005ca68) cell_graphic_popup_pane_cp2

0xf2a3,	// (0x0005ec1d) cell_graphic_popup_pane_g1_cp2

0x3515,	// (0x00052e8f) cell_graphic_popup_pane_g2_cp2

0xa46a,	// (0x00059de4) cell_graphic_popup_pane_g3_cp2

0xa472,	// (0x00059dec) cell_graphic_popup_pane_t2_cp2

0x3526,	// (0x00052ea0) grid_highlight_pane_cp3_cp2

0x3b82,	// (0x000534fc) aid_size_cell_apps_grid_lsc_pane_ParamLimits

0x37d6,	// (0x00053150) main_tmo_pane_ParamLimits

0xe354,	// (0x0005dcce) popup_tmo_big_image_note_window

0x99c1,	// (0x0005933b) cell_ai5_widget_list_pane

0x99c9,	// (0x00059343) cell_ai5_widget_lrg_icon_pane

0xeff0,	// (0x0005e96a) tmo_note_info_pane_t1_ParamLimits

0xf005,	// (0x0005e97f) tmo_note_info_pane_t2_ParamLimits

0xf01c,	// (0x0005e996) tmo_note_info_pane_t3_ParamLimits

0xa026,	// (0x000599a0) tmo_note_info_pane_t4_ParamLimits

0xa038,	// (0x000599b2) tmo_note_info_pane_t5_ParamLimits

0xfec3,	// (0x0005f83d) tmo_note_info_pane_t_ParamLimits

0xf096,	// (0x0005ea10) settings_container_pane_ParamLimits

0xa3d9,	// (0x00059d53) indicator_popup_pane_cp5

0xa3d9,	// (0x00059d53) indicator_popup_pane_cp6

0x6813,	// (0x0005618d) list_set_graphic_pane_copy1_ParamLimits

0x2829,	// (0x000521a3) bg_popup_window_pane_cp23

0xa480,	// (0x00059dfa) popup_tmo_big_image_note_window_g1

0xa48a,	// (0x00059e04) popup_tmo_big_image_note_window_t1

0xa49a,	// (0x00059e14) popup_tmo_big_image_note_window_t2

0xa4aa,	// (0x00059e24) popup_tmo_big_image_note_window_t3

0x0002,

0xfedc,	// (0x0005f856) popup_tmo_big_image_note_window_t

0xa4ba,	// (0x00059e34) cell_ai5_widget_lrg_icon_pane_g1

0xa4c2,	// (0x00059e3c) cell_ai5_widget_lrg_icon_pane_t1

0xa4d0,	// (0x00059e4a) cell_ai5_widget_list_row_pane_ParamLimits

0xa4d0,	// (0x00059e4a) cell_ai5_widget_list_row_pane

0xa4e9,	// (0x00059e63) cell_ai5_widget_list_row_pane_g1_ParamLimits

0xa4e9,	// (0x00059e63) cell_ai5_widget_list_row_pane_g1

0xa4f6,	// (0x00059e70) cell_ai5_widget_list_row_pane_t1_ParamLimits

0xa4f6,	// (0x00059e70) cell_ai5_widget_list_row_pane_t1

0xa50e,	// (0x00059e88) cell_ai5_widget_list_row_pane_t2_ParamLimits

0xa50e,	// (0x00059e88) cell_ai5_widget_list_row_pane_t2

0x0002,

0xfee3,	// (0x0005f85d) cell_ai5_widget_list_row_pane_t_ParamLimits

0xfee3,	// (0x0005f85d) cell_ai5_widget_list_row_pane_t

0xf3dc,	// (0x0005ed56) main_fep_vtchi_ss_pane

0xa545,	// (0x00059ebf) popup_fep_char_pre_window

0xa54d,	// (0x00059ec7) popup_fep_ituss_window

0xa56e,	// (0x00059ee8) popup_fep_vkbss_window

0xa58d,	// (0x00059f07) grid_vkbss_keypad_pane_ParamLimits

0xa58d,	// (0x00059f07) grid_vkbss_keypad_pane

0xa59d,	// (0x00059f17) ituss_keypad_pane

0xa5b9,	// (0x00059f33) aid_vkbss_key_offset_ParamLimits

0xa5b9,	// (0x00059f33) aid_vkbss_key_offset

0xa5c5,	// (0x00059f3f) cell_vkbss_key_pane_ParamLimits

0xa5c5,	// (0x00059f3f) cell_vkbss_key_pane

0xa5db,	// (0x00059f55) bg_cell_vkbss_key_g1_ParamLimits

0xa5db,	// (0x00059f55) bg_cell_vkbss_key_g1

0xa5e7,	// (0x00059f61) cell_vkbss_key_3p_pane_ParamLimits

0xa5e7,	// (0x00059f61) cell_vkbss_key_3p_pane

0xa601,	// (0x00059f7b) cell_vkbss_key_g1_ParamLimits

0xa601,	// (0x00059f7b) cell_vkbss_key_g1

0xa61b,	// (0x00059f95) cell_vkbss_key_t1_ParamLimits

0xa61b,	// (0x00059f95) cell_vkbss_key_t1

0xa646,	// (0x00059fc0) cell_ituss_key_pane_ParamLimits

0xa646,	// (0x00059fc0) cell_ituss_key_pane

0xa657,	// (0x00059fd1) bg_cell_ituss_key_g1_ParamLimits

0xa657,	// (0x00059fd1) bg_cell_ituss_key_g1

0xa663,	// (0x00059fdd) cell_ituss_key_pane_g1_ParamLimits

0xa663,	// (0x00059fdd) cell_ituss_key_pane_g1

0xa67d,	// (0x00059ff7) cell_ituss_key_pane_g2_ParamLimits

0xa67d,	// (0x00059ff7) cell_ituss_key_pane_g2

0x0001,

0xfeea,	// (0x0005f864) cell_ituss_key_pane_g_ParamLimits

0xfeea,	// (0x0005f864) cell_ituss_key_pane_g

0xa6a8,	// (0x0005a022) cell_ituss_key_t1_ParamLimits

0xa6a8,	// (0x0005a022) cell_ituss_key_t1

0xa6d6,	// (0x0005a050) cell_ituss_key_t2_ParamLimits

0xa6d6,	// (0x0005a050) cell_ituss_key_t2

0xa707,	// (0x0005a081) cell_ituss_key_t3_ParamLimits

0xa707,	// (0x0005a081) cell_ituss_key_t3

0xa738,	// (0x0005a0b2) cell_ituss_key_t4_ParamLimits

0xa738,	// (0x0005a0b2) cell_ituss_key_t4

0x0003,

0xfeef,	// (0x0005f869) cell_ituss_key_t_ParamLimits

0xfeef,	// (0x0005f869) cell_ituss_key_t

0xa769,	// (0x0005a0e3) cell_vkbss_key_3p_pane_g1

0xa771,	// (0x0005a0eb) cell_vkbss_key_3p_pane_g2

0xa779,	// (0x0005a0f3) cell_vkbss_key_3p_pane_g3

0x0002,

0xfef8,	// (0x0005f872) cell_vkbss_key_3p_pane_g

0x2829,	// (0x000521a3) bg_popup_fep_char_preview_window_cp02

0xa781,	// (0x0005a0fb) popup_fep_char_pre_window_t1

0xef34,	// (0x0005e8ae) main_ai5_sk_pane

0xa0b2,	// (0x00059a2c) bg_cell_contacts_ai5_widget_pane_ParamLimits

0xa0be,	// (0x00059a38) cell_contacts_ai5_widget_pane_g1_ParamLimits

0xa0d2,	// (0x00059a4c) cell_contacts_ai5_widget_pane_g2_ParamLimits

0xa0de,	// (0x00059a58) cell_contacts_ai5_widget_pane_g3_ParamLimits

0xfece,	// (0x0005f848) cell_contacts_ai5_widget_pane_g_ParamLimits

0xa0f1,	// (0x00059a6b) cell_contacts_ai5_widget_pane_t1_ParamLimits

0x37d6,	// (0x00053150) highlight_cell_shortcut_ai5_widget_pane_cp01_ParamLimits

0xf2ab,	// (0x0005ec25) main_ai5_sk_pane_g1

0x51b6,	// (0x00054b30) popup_query_code_window_g1

0xa563,	// (0x00059edd) popup_fep_vkb_icf_pane

0xa577,	// (0x00059ef1) popup_fep_vtchi_icf_pane

0x37d6,	// (0x00053150) bg_icf_pane

0xa799,	// (0x0005a113) list_vkb_icf_pane

0x37d6,	// (0x00053150) bg_icf_pane_cp01

0xa7a5,	// (0x0005a11f) vtchi_icf_list_pane

0xa7b6,	// (0x0005a130) list_vkb_icf_pane_t1_ParamLimits

0xa7b6,	// (0x0005a130) list_vkb_icf_pane_t1

0xa7cd,	// (0x0005a147) vtchi_icf_list_pane_t1_ParamLimits

0xa7cd,	// (0x0005a147) vtchi_icf_list_pane_t1

0xa54d,	// (0x00059ec7) popup_fep_ituss_window_ParamLimits

0xa577,	// (0x00059ef1) popup_fep_vtchi_icf_pane_ParamLimits

0xa59d,	// (0x00059f17) ituss_keypad_pane_ParamLimits

0xa5ad,	// (0x00059f27) ituss_sks_pane

0x37d6,	// (0x00053150) bg_icf_pane_ParamLimits

0xa536,	// (0x00059eb0) icf_edit_indi_pane_ParamLimits

0xa536,	// (0x00059eb0) icf_edit_indi_pane

0xa799,	// (0x0005a113) list_vkb_icf_pane_ParamLimits

0x37d6,	// (0x00053150) bg_icf_pane_cp01_ParamLimits

0xa536,	// (0x00059eb0) icf_edit_indi_pane_cp01_ParamLimits

0xa536,	// (0x00059eb0) icf_edit_indi_pane_cp01

0xa7ad,	// (0x0005a127) vtchi_query_pane

0x7601,	// (0x00056f7b) icf_edit_indi_pane_g1_ParamLimits

0x7601,	// (0x00056f7b) icf_edit_indi_pane_g1

0xa853,	// (0x0005a1cd) icf_edit_indi_pane_g2_ParamLimits

0xa853,	// (0x0005a1cd) icf_edit_indi_pane_g2

0x0001,

0xff10,	// (0x0005f88a) icf_edit_indi_pane_g_ParamLimits

0xff10,	// (0x0005f88a) icf_edit_indi_pane_g

0xa862,	// (0x0005a1dc) icf_edit_indi_pane_t1

0xa7e9,	// (0x0005a163) bg_input_focus_pane_cp042

0x36f9,	// (0x00053073) vtchi_button_pane

0xa7f2,	// (0x0005a16c) vtchi_query_pane_t1

0xa800,	// (0x0005a17a) vtchi_query_pane_t2

0xa80e,	// (0x0005a188) vtchi_query_pane_t3

0x0002,

0xfeff,	// (0x0005f879) vtchi_query_pane_t

0x2829,	// (0x000521a3) bg_button_pane_cp13

0xa81c,	// (0x0005a196) vtchi_button_pane_g1

0xa824,	// (0x0005a19e) ituss_sks_pane_g1

0xa82f,	// (0x0005a1a9) ituss_sks_pane_g2

0x0001,

0xff06,	// (0x0005f880) ituss_sks_pane_g

0xa837,	// (0x0005a1b1) ituss_sks_pane_t1

0xa845,	// (0x0005a1bf) ituss_sks_pane_t2

0x0001,

0xff0b,	// (0x0005f885) ituss_sks_pane_t

0x6dec,	// (0x00056766) indicator_nsta_pane_cp_g1

0x6df5,	// (0x0005676f) indicator_nsta_pane_cp_g2

0x6dfd,	// (0x00056777) indicator_nsta_pane_cp_g3

0x6e05,	// (0x0005677f) indicator_nsta_pane_cp_g4

0x6e0d,	// (0x00056787) indicator_nsta_pane_cp_g5

0x6e15,	// (0x0005678f) indicator_nsta_pane_cp_g6

0x0005,

0xfaac,	// (0x0005f426) indicator_nsta_pane_cp_g

0xed46,	// (0x0005e6c0) cell_graphic2_pane_t2_ParamLimits

0xed46,	// (0x0005e6c0) cell_graphic2_pane_t2

0x0001,

0xfdc5,	// (0x0005f73f) cell_graphic2_pane_t_ParamLimits

0xfdc5,	// (0x0005f73f) cell_graphic2_pane_t

0xed7c,	// (0x0005e6f6) cell_graphic2_control_pane_t1

0xd000,	// (0x0005c97a) signal_pane_g3_ParamLimits

0xd000,	// (0x0005c97a) signal_pane_g3

0xd014,	// (0x0005c98e) signal_pane_g4_ParamLimits

0xd014,	// (0x0005c98e) signal_pane_g4

0xa520,	// (0x00059e9a) cell_ai5_widget_list_row_pane_t3_ParamLimits

0xa520,	// (0x00059e9a) cell_ai5_widget_list_row_pane_t3

0xa696,	// (0x0005a010) cell_ituss_key_pane_t1_ParamLimits

0xa696,	// (0x0005a010) cell_ituss_key_pane_t1

0x4e09,	// (0x00054783) form_field_data_wide_pane_vc_t2_ParamLimits

0x4e09,	// (0x00054783) form_field_data_wide_pane_vc_t2

0x4e1d,	// (0x00054797) form_field_data_wide_pane_vc_t3_ParamLimits

0x4e1d,	// (0x00054797) form_field_data_wide_pane_vc_t3

0x0002,

0xf808,	// (0x0005f182) form_field_data_wide_pane_vc_t_ParamLimits

0xf808,	// (0x0005f182) form_field_data_wide_pane_vc_t

0x6aa3,	// (0x0005641d) form_field_slider_wide_pane_vc_t3_ParamLimits

0x6aa3,	// (0x0005641d) form_field_slider_wide_pane_vc_t3

0x6b81,	// (0x000564fb) form_field_popup_wide_pane_vc_t2_ParamLimits

0x6b81,	// (0x000564fb) form_field_popup_wide_pane_vc_t2

0x6b98,	// (0x00056512) form_field_popup_wide_pane_vc_t3_ParamLimits

0x6b98,	// (0x00056512) form_field_popup_wide_pane_vc_t3

0x0002,

0xfa9b,	// (0x0005f415) form_field_popup_wide_pane_vc_t_ParamLimits

0xfa9b,	// (0x0005f415) form_field_popup_wide_pane_vc_t

0xcae8,	// (0x0005c462) aid_fshwr2_btn_pane_ParamLimits

0xcaf7,	// (0x0005c471) aid_fshwr2_syb_pane_ParamLimits

0xcb09,	// (0x0005c483) aid_fshwr2_txt_pane_ParamLimits

0x1fd7,	// (0x00051951) fshwr2_bg_pane_ParamLimits

0xcb18,	// (0x0005c492) fshwr2_func_candi_pane_ParamLimits

0xcb29,	// (0x0005c4a3) fshwr2_hwr_syb_pane_ParamLimits

0xcb44,	// (0x0005c4be) fshwr2_icf_pane_ParamLimits
};


const AknLayoutScalable_Avkon::SCdlImpl KCdlImpl = 
	{
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLRVC,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&TextLineRVC,
	&WindowLineVCR,
	&TextLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&Limits,
	&WindowLineVCR,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineCVR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
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
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&TextLineVCR,
	&Limits,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
	&ParameterLimitsV,
	&TextLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVRC,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineCVR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVRC,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVRC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
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
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsTableLV,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineRVC,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineRVC,
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
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
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
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&WindowLineVCR,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineRVC,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
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
	&GetComponentTypeById,
	&GetParamLimitsById,
	&GetWindowComponentById,
	&GetTextComponentById,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineRVC,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineCVR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
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
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineCVR,
	&TextLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineCRV,
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
	&ParameterLimitsV,
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
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
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
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsTableLV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
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
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_phl_av_qhd_lsc_tch_Large

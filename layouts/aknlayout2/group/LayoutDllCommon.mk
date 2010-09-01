#
# Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
# All rights reserved.
# This component and the accompanying materials are made available
# under the terms of "Eclipse Public License v1.0"
# which accompanies this distribution, and is available
# at the URL "http://www.eclipse.org/legal/epl-v10.html".
#
# Initial Contributors:
# Nokia Corporation - initial contribution.
#
# Contributors:
#
# Description:
#

include LayoutConfig.mk

layout_gen_dir = $(gen_dir)/$(name)$(delivery)_akn_app
common_dll = -x .. 101fe2aa.dll

Elaf_Portrait_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_p$(prt_code)_av_$(short)_prt$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Elaf_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)_ZOOM \
        
Abrw_Portrait_Pack_Contents=\
        EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_p$(prt_code)_av_$(short)_prt$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Abrw_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)_ZOOM

Apac_Portrait_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_p$(prt_code)_av_$(short)_prt$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Elaf_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)_ZOOM
        
Elaf_Landscape_Pack_Contents=\
        EAknLayoutIdELAF \
        AknLayoutScalable_Elaf_p$(land_code)_av_$(short)_lsc$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Elaf_p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)_ZOOM
        
Abrw_Landscape_Pack_Contents=\
	EAknLayoutIdABRW \
        AknLayoutScalable_Abrw_p$(land_code)_av_$(short)_lsc$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Abrw_p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)_ZOOM
        
Apac_Landscape_Pack_Contents=\
        EAknLayoutIdAPAC \
        AknLayoutScalable_Elaf_p$(land_code)_av_$(short)_lsc$(touch)$(delivery)_ZOOM \
        AknLayoutScalable_Elaf_p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)_ZOOM
        
ifndef delivery
Elaf_Portrait_Pack_Contents := $(Elaf_Portrait_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_scrollbar \

Abrw_Portrait_Pack_Contents := $(Abrw_Portrait_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_abrw \
        $(common_dll) LayoutMetaData_scrollbar

Apac_Portrait_Pack_Contents := $(Apac_Portrait_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AknApacLayout \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppApacLayout \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_scrollbar \
        $(common_dll) LayoutMetaData_APAC

Elaf_Landscape_Pack_Contents := $(Elaf_Landscape_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_scrollbar \
        $(common_dll) LayoutMetaData_land

Abrw_Landscape_Pack_Contents := $(Abrw_Landscape_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_abrw \
        $(common_dll) LayoutMetaData_scrollbar \
        $(common_dll) LayoutMetaData_land

Apac_Landscape_Pack_Contents := $(Apac_Landscape_Pack_Contents) \
        CdlFontInst_$(font_name) \
        displaylayoutmetricsinst_$(name) \
        $(common_dll) Adaptation_Layer_AknLayout_Elaf \
        $(common_dll) Adaptation_Layer_AknApacLayout \
        $(common_dll) Adaptation_Layer_AppLayout_Elaf \
        $(common_dll) Adaptation_Layer_AppApacLayout \
        $(common_dll) Adaptation_Layer_SkinLayout \
        $(common_dll) LayoutMetaData_defaults \
        $(common_dll) LayoutMetaData_scrollbar \
        $(common_dll) LayoutMetaData_land \
        $(common_dll) LayoutMetaData_APAC

ifdef touch
        Elaf_Portrait_Pack_Contents := $(Elaf_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
        Abrw_Portrait_Pack_Contents := $(Abrw_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
        Apac_Portrait_Pack_Contents := $(Apac_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
        Elaf_Landscape_Pack_Contents := $(Elaf_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
        Abrw_Landscape_Pack_Contents := $(Abrw_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
        Apac_Landscape_Pack_Contents := $(Apac_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_pensupport
endif

ifdef liststretching
        Elaf_Portrait_Pack_Contents := $(Elaf_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
        Abrw_Portrait_Pack_Contents := $(Abrw_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
        Apac_Portrait_Pack_Contents := $(Apac_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
        Elaf_Landscape_Pack_Contents := $(Elaf_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
        Abrw_Landscape_Pack_Contents := $(Abrw_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
        Apac_Landscape_Pack_Contents := $(Apac_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_liststretching
endif

ifeq ($(msk), yes)
        Elaf_Portrait_Pack_Contents := $(Elaf_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_MSK
        Abrw_Portrait_Pack_Contents := $(Abrw_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_MSK
        Apac_Portrait_Pack_Contents := $(Apac_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_MSK
        Elaf_Landscape_Pack_Contents := $(Elaf_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_MSK
        Abrw_Landscape_Pack_Contents := $(Abrw_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_MSK
        Apac_Landscape_Pack_Contents := $(Apac_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_MSK
endif

ifeq ($(touchpane), yes)
        Elaf_Portrait_Pack_Contents := $(Elaf_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
        Abrw_Portrait_Pack_Contents := $(Abrw_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
        Apac_Portrait_Pack_Contents := $(Apac_Portrait_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
        Elaf_Landscape_Pack_Contents := $(Elaf_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
        Abrw_Landscape_Pack_Contents := $(Abrw_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
        Apac_Landscape_Pack_Contents := $(Apac_Landscape_Pack_Contents) $(common_dll) LayoutMetaData_touchpane
endif

endif

pkg = @AknLayoutCompiler -p$(layout_gen_dir) LayPkg -z../generated/LayoutZoomFactorConfig.txt -d$(delivery) -p$(priority) -a$(appUid)

Elaf_portrait :
	$(pkg) Elaf_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Elaf_Portrait_Pack_Contents) >> $(layout_gen_dir)/instances.txt

Abrw_portrait :
	$(pkg) Abrw_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Abrw_Portrait_Pack_Contents) >> $(layout_gen_dir)/instances.txt

Apac_portrait :
	$(pkg) Apac_$(name)_ZOOM$(delivery)_Pack $(dim1) $(dim2) -s$(style_name) $(Apac_Portrait_Pack_Contents) >> $(layout_gen_dir)/instances.txt

Elaf_landscape :
	$(pkg) Elaf_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Elaf_Landscape_Pack_Contents) >> $(layout_gen_dir)/instances.txt

Abrw_landscape :
	$(pkg) Abrw_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Abrw_Landscape_Pack_Contents) >> $(layout_gen_dir)/instances.txt

Apac_landscape :
	$(pkg) Apac_$(name)_land_ZOOM$(delivery)_Pack $(dim2) $(dim1) -s$(style_name) $(Apac_Landscape_Pack_Contents) >> $(layout_gen_dir)/instances.txt

clean_inst_list : 
	@python -c "import os,os.path; os.path.exists('$(layout_gen_dir)/instances.txt') and os.remove('$(layout_gen_dir)/instances.txt')"

layout_packages : \
	clean_inst_list \
	Elaf_portrait \
	Abrw_portrait \
	Apac_portrait \
	Elaf_landscape \
	Abrw_landscape \
	Apac_landscape

do_nothing :


standard_flags = -p$(layout_gen_dir) MLCompCdl2InstO -i$(layout_gen_dir)/instances.txt -z../generated/LayoutZoomFactorConfig.txt -allparams -d$(delivery)

make_layout_gen_dir : make_gen_dir
	@python -c "import os,os.path; os.path.exists('$(layout_gen_dir)') or os.mkdir('$(layout_gen_dir)')"




avkon_scalable_instances_cpp=\
    $(layout_gen_dir)/aknlayoutscalable_elaf_p$(prt_code)_av_$(short)_prt$(touch)$(delivery)_normal.cpp



app_scalable_instances_cpp=\
    $(layout_gen_dir)/aknlayoutscalable_elaf_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)_normal.cpp

ifndef delivery
delivery_dir=_all
endif
ifdef delivery
delivery_dir=$(delivery)
endif

avkon_scalable_instances_dep=\
    ../generated/LayoutZoomFactorConfig.txt \
    ../cdl/AknLayoutScalable_Avkon.cdl \
    ../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_attributes.xml \
    ../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_attributes.xml

app_scalable_instances_dep=\
    ../generated/LayoutZoomFactorConfig.txt \
    ../cdl/AknLayoutScalable_Apps.cdl \
    ../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml \
    ../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml \
    ../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_attributes.xml \
    ../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_eur_attributes.xml \
    ../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_attributes.xml

$(avkon_scalable_instances_cpp): $(avkon_scalable_instances_dep)

	@python -c "import os,os.path; os.path.exists('$(avkon_scalable_instances_cpp)') and os.remove('$(avkon_scalable_instances_cpp)')"
	@AknLayoutCompiler $(standard_flags) ../cdl/AknLayoutScalable_Avkon.cdl \
            -a \
            ../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_p$(prt_code)_av_$(short)_prt$(touch)$(delivery) \
            -m../xml/av/$(delivery_dir)/p$(prt_code)_av_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_p$(prt_code)_av_$(short)_prt$(touch)$(delivery) \
            ../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_p$(land_code)_av_$(short)_lsc$(touch)$(delivery) \
            -m../xml/av/$(delivery_dir)/p$(land_code)_av_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_p$(land_code)_av_$(short)_lsc$(touch)$(delivery)
$(app_scalable_instances_cpp): $(app_scalable_instances_dep)
	@python -c "import os,os.path; os.path.exists('$(app_scalable_instances_cpp)') and os.remove('$(app_scalable_instances_cpp)')"
	@AknLayoutCompiler $(standard_flags) ../cdl/AknLayoutScalable_Apps.cdl \
            -a \
            ../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery) \
            -m../xml/apps/$(delivery_dir)/p$(prt_code)_apps_$(short)_prt$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_p$(prt_code)_apps_$(short)_prt$(touch)$(delivery) \
            ../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_eur_compdata.xml AknLayoutScalable_Elaf_p$(land_code)_apps_$(short)_lsc$(touch)$(delivery) \
            -m../xml/apps/$(delivery_dir)/p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)/display_arabic_hebrew_compdata.xml AknLayoutScalable_Abrw_p$(land_code)_apps_$(short)_lsc$(touch)$(delivery)


INSTANCES: \
    $(avkon_scalable_instances_cpp) \
    $(app_scalable_instances_cpp)
COPY:
	@python -c "import glob,shutil; filelist=glob.glob('../HandCodedFonts/cdlfont.*');\
	map((lambda f: shutil.copy(f, '$(layout_gen_dir)')), filelist)"

	@python -c "import glob,shutil; fontname='$(font_name)'; filelist=glob.glob('../HandCodedFonts/cdlfontinst_'+fontname.lower()+'.*');\
	map((lambda f: shutil.copy(f, '$(layout_gen_dir)')), filelist)"

	@python -c "import glob,shutil; filelist=glob.glob('../displaylayoutmetrics/displaylayoutmetrics.*');\
	map((lambda f: shutil.copy(f, '$(layout_gen_dir)')), filelist)"

	@python -c "import glob,shutil; filelist=glob.glob('../displaylayoutmetrics/displaylayoutmetricsinst_$(name).*');\
	map((lambda f: shutil.copy(f, '$(layout_gen_dir)')), filelist)"

DLL:



	@CdlCompiler dll \
		-n$(dllversion) \
		\
		-p$(layout_gen_dir) \
		\
		-lAknLayout2Scalable.lib \
		-lCdlEngine.lib \
		\
		-s../../Decodelib/AknLayout2ScalableDecode.cpp \
		\
		"-esysteminclude .."\
		\
		LayoutInst_$(name)$(delivery) $(uid) \
		\
		@$(layout_gen_dir)/instances.txt

MAKMAKE : \
	make_layout_gen_dir \
	layout_packages \
	INSTANCES \
	COPY \
	DLL
BLD : do_nothing

CLEAN :

LIB : do_nothing

CLEANLIB : do_nothing

RESOURCE : do_nothing

FREEZE : do_nothing

SAVESPACE : do_nothing

RELEASABLES : do_nothing

FINAL : do_nothing



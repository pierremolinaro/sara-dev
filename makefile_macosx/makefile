#---------------------------------------------------------------*
#                                                               *
# MAKEFILE for building sara command line tools for Mac OS X    *
#                                                               *
#---------------------------------------------------------------*

#--- Release and debug versions of common_sources_makefile.mke
EXECUTABLE := sara
EXECUTABLE_DEBUG := sara_debug

#--- Install directory (for "install" goal)
INSTALL_DIR := /usr/bin

#---------------------------------------------------------------*

#--- Linker libraries
LINKER_OPTIONS :=

#---------------------------------------------------------------*

RELEASE_OPTIONS := -DDO_NOT_GENERATE_MEMORY_CHECK_CODE

#---------------------------------------------------------------*

include ../common_files_for_make/makefile.mke

#---------------------------------------------------------------*
#                                                               *
#     Include gcc tools for MAC OS X                            *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/macosx_gcc_tools.mke

#---------------------------------------------------------------*
#                                                               *
#     Include makefile that performs actual work                *
#                                                               *
#---------------------------------------------------------------*

include $(LIB_PM_PATH)/included_makefiles/generic_makefile.mke

#---------------------------------------------------------------*

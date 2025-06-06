!include ..\..\..\project.inc

# -------------------------------------
# Windows Console
# - Console Interactivity for Win32
# -------------------------------------

# This module provides user interaction with the standard
# windowing and input system used by classic Win32 platforms.

# -------------------------------------
# Preprocessor Settings
# -------------------------------------

C_DEFINES               = $(C_DEFINES) -DFE_SB -D__INSIDE_WINDOWS

# -------------------------------------
# Compiler Settings
# -------------------------------------

# Warning 4201: nonstandard extension used: nameless struct/union
MSC_WARNING_LEVEL       = $(MSC_WARNING_LEVEL) /wd4201

# -------------------------------------
# Build System Settings
# -------------------------------------

# Code in the OneCore depot automatically excludes default Win32 libraries.

# Defines IME and Codepage support

# -------------------------------------
# Sources, Headers, and Libraries
# -------------------------------------

PRECOMPILED_CXX         = 1
PRECOMPILED_INCLUDE     = ..\precomp.h

SOURCES = \
    ..\AccessibilityNotifier.cpp \
    ..\clipboard.cpp \
    ..\ConsoleControl.cpp \
    ..\ConsoleInputThread.cpp \
    ..\consoleKeyInfo.cpp \
    ..\find.cpp \
    ..\icon.cpp \
    ..\menu.cpp \
    ..\screenInfoUiaProvider.cpp \
    ..\SystemConfigurationProvider.cpp \
    ..\UiaTextRange.cpp \
    ..\window.cpp \
    ..\windowdpiapi.cpp \
    ..\windowio.cpp \
    ..\WindowMetrics.cpp \
    ..\windowproc.cpp \
    ..\windowUiaProvider.cpp \

INCLUDES = \
    $(INCLUDES); \
    ..; \

TARGETLIBS = \
    $(TARGETLIBS) \
    $(ONECORE_EXTERNAL_SDK_LIB_VPATH_L)\onecore.lib  \

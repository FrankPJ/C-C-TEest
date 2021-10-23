LOCAL_PATH := $(call my-dir)


LIBUSB_ROOT_REL := $(LOCAL_PATH)
LIBUSB_ROOT_ABS := $(LOCAL_PATH)



# FFmpeg library
include $(CLEAR_VARS)
LOCAL_MODULE := ffmpeg
LOCAL_SRC_FILES := $(LIBUSB_ROOT_REL)/libffmpeg/arm64-v8a/libffmpeg.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)



LOCAL_SRC_FILES := $(LIBUSB_ROOT_REL)/cppTest_/com_example_myapplicationctest_JniUtils.cpp \
                $(LIBUSB_ROOT_REL)/cppTest_/logUtils.cpp \
                $(LIBUSB_ROOT_REL)/cppTest_/Student.cpp \
                $(LIBUSB_ROOT_REL)/cppTest_/thread.cpp \
                $(LIBUSB_ROOT_REL)/cppTest_/usbUtils.cpp \
                $(LIBUSB_ROOT_REL)/libusb_source/core.c \
                $(LIBUSB_ROOT_REL)/libusb_source/descriptor.c \
                $(LIBUSB_ROOT_REL)/libusb_source/hotplug.c \
                $(LIBUSB_ROOT_REL)/libusb_source/io.c \
                $(LIBUSB_ROOT_REL)/libusb_source/sync.c \
                $(LIBUSB_ROOT_REL)/libusb_source/strerror.c \
                $(LIBUSB_ROOT_REL)/libusb_source/os/linux_usbfs.c \
                $(LIBUSB_ROOT_REL)/libusb_source/os/events_posix.c \
                $(LIBUSB_ROOT_REL)/libusb_source/os/threads_posix.c \
                $(LIBUSB_ROOT_REL)/libusb_source/os/linux_netlink.c

LOCAL_C_INCLUDES += \
  $(LOCAL_PATH)/.. \
  $(LIBUSB_ROOT_ABS)/libusb_source \
  $(LIBUSB_ROOT_ABS)/libusb_source/os

LOCAL_EXPORT_C_INCLUDES := \
  $(LIBUSB_ROOT_ABS)/libusb_source

LOCAL_CPPFLAGS := -fvisibility=hidden -pthread

LOCAL_C_INCLUDES += $(LOCAL_PATH)/include

LOCAL_LDLIBS := -llog


LOCAL_SHARED_LIBRARIES := ffmpeg


ifeq ($(USE_PC_NAME),1)
LOCAL_MODULE := cppTest_usb-1.0
else
LOCAL_MODULE := cppTest_libusb1.0
$(warning Building to legacy library name libusb1.0, which differs from pkg-config.)
$(warning Use ndk-build USE_PC_NAME=1 to change the module name to the compatible usb-1.0.)
$(warning USE_PC_NAME=1 may be the default in the future.)
endif

include $(BUILD_SHARED_LIBRARY)
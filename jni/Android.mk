LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include /Users/libo/workspace/android/OpenCV-2.4.7-android-sdk/sdk/native/jni/OpenCV.mk

LOCAL_MODULE    := process_frame 
LOCAL_SRC_FILES := process_frame.cpp
LOCAL_LDLIBS +=  -llog -ldl

include $(BUILD_SHARED_LIBRARY)

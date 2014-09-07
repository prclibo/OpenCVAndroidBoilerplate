# OpenCV4Android Boilerplate with JNI

This is a boilerplate Eclipse project for the OpenCV4Android API. This project includes a simple Android framework which accesses phone camera and processes it using the OpenCV4Android Java API. In addition, this project uses JNI to call a C++ implemented OpenCV function to process the input frame image.

Part of the code in this project is from OpenCV4Android official [tutorial](http://docs.opencv.org/doc/tutorials/introduction/android_binary_package/dev_with_OCV_on_Android.html#hello-opencv-sample).

If you read Chinese, 请参考《[OpenCV4Android+JNI开发快速上手入门](http://my.oschina.net/cvnote/blog/180661)》配合使用。

## Quick Start

This project assumes that you are familiar with OpenCV development. 

0. Install everything.
  - Install Android development toolkit and Eclipse.
  - Download Android NDK.
  - Install OpenCV C++ library (You can find a bunch of tutorials of installing OpenCV for your OS from Google).
  - Download OpenCV4Android SDK, you should then load the OpenCV Library x.x.x project into your workspace.

1. Configure the project.
  - Clone the project: `git clone git@github.com:prclibo/OpenCVAndroidBoilerplate.git`.
  - Load the project into your Eclipse by File > New > Project > Android Project from Existing Code.
  - Right click the project OpenCVAndroidBoilerplate in the Package Explorer in Eclipse and select Properties. Click Android in the Properties window and then add the OpenCV Library x.x.x into the Library list.

2. Compile the native code (C++ code in the `jni` folder)
  - Open `jni/Android.mk`. Change `<some_path>` to the path of your downloaded OpenCV4Android SDK.
  - In a terminal window go to the `jni/` folder, execute `<some_path>/ndk-build`, where `<some_path>` is the path you installed Android NDK. When you see some output as follows, the compilation is good.
    [armeabi-v7a] Install        : libprocess_frame.so => libs/armeabi-v7a/libprocess_frame.so

3. Now you can connect your phone and run your project in Eclipse.

## Implement your own JNI code.

Coming soon.

## Contact
prclibo@gmail.com

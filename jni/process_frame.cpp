#include <com_example_opencvandroidboilerplate_MainActivity.h>
#include <opencv2/opencv.hpp>

JNIEXPORT void JNICALL Java_com_example_opencvandroidboilerplate_MainActivity_processFrame
  (JNIEnv *, jobject, jlong addrInRGBA, jlong addrOut) {
    cv::Mat* pMatInRGBA = (cv::Mat*)addrInRGBA;
    cv::Mat* pMatOut = (cv::Mat*)addrOut;
    cv::Mat imageGray;
    cv::cvtColor(*pMatInRGBA, imageGray, CV_RGBA2GRAY);
    cv::Canny(imageGray, *pMatOut, 30, 90);
}

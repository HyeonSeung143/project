#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {
    // PNG 파일 읽기
    cv::Mat png_image = cv::imread("jcshim.png", cv::IMREAD_COLOR);
    if (png_image.empty()) {
        printf("PNG 이미지를 읽을 수 없습니다.\n");
        return -1;
    }

    // JPG 파일 읽기
    cv::Mat jpg_image = cv::imread("jcshim.jpg", cv::IMREAD_COLOR);
    if (jpg_image.empty()) {
        printf("JPG 이미지를 읽을 수 없습니다.\n");
        return -1;
    }

    // PNG 이미지 표시
    cv::namedWindow("PNG Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("PNG Image", png_image);

    // JPG 이미지 표시
    cv::namedWindow("JPG Image", cv::WINDOW_AUTOSIZE);
    cv::imshow("JPG Image", jpg_image);

    // 키 입력 대기
    cv::waitKey(0);

    // 창 닫기
    cv::destroyAllWindows();

    return 0;
}

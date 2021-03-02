#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

//////////////////////////// Basic Functions ////////////////////////////
/*
int main() {
    string path = "/Users/maudieguez/Documents/Programming/opencv/opencvTutorial/Resources/test.png";
    Mat img = imread(path);
    Mat imgBlur, imgCanny, imgDilate, imgErode;

    GaussianBlur(img,imgBlur,Size(7,7),5);
    Canny(imgBlur, imgCanny, 25, 75);

    Mat kernel = getStructuringElement(MORPH_RECT, Size(5,5));
    dilate(imgCanny, imgDilate, kernel);
    erode(imgDilate, imgErode, kernel);


    imshow("Original", img);
    imshow("Canny", imgCanny);
    imshow("Dilate", imgDilate);
    imshow("Erode", imgErode);
    waitKey(0);
    return 0;
}
*/
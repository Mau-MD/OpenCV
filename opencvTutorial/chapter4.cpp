#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;

//////////////////////////// Figures ////////////////////////////
/*
int main() {
    Mat img(512,512, CV_8UC3, Scalar(255,255,255));

    circle(img, Point(256, 256), 155, Scalar(0,63,255), FILLED);
    rectangle(img, Point(130,226), Point(382, 286), Scalar(255,255, 255),FILLED);
    line(img, Point(130,296), Point(382,296), Scalar(255,255,255), 3);
    putText(img, "Murtaza's Workshop", Point(132,262),FONT_HERSHEY_COMPLEX, 0.73, Scalar(0,63,255),2);

    imshow("Original",img);
    waitKey(0);
}
*/
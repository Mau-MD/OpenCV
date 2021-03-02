#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

using namespace std;
using namespace cv;

/////////////// Resize Images ///////////////
/*
int main() {
    string path = "Resources/test.png";
    Mat img = imread(path);
    Mat imgResize, imgCrop;

    resize(img,imgResize,Size(), 0.5,0.5);

    Rect roi(200, 100,300,280);
    imgCrop = img(roi);
    imshow("Original", img);
    imshow("Cropped",imgCrop);
    waitKey(0);
}
 */
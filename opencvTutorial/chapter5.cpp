#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

//////////////////////////// Warp images ////////////////////////////

float w = 250, h = 350;
int main() {
    string path = "Resources/cards.jpg";
    Mat img = imread(path);

    Point2f src[4] = {{533, 144}, {771,193}, {406, 398}, {674, 458}};
    Point2f dst[4] = {{0, 0}, {w,0}, {0, h}, {w, h}};

    Mat matrix, imgWrap;
    matrix = getPerspectiveTransform(src,dst);
    warpPerspective(img, imgWrap,matrix,Size(w,h));

    imshow("Original", img);
    imshow("Warped", imgWrap);
    waitKey(0);
}
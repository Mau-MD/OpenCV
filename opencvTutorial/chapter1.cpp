#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;

//////////////////////////// Images ////////////////////////////
/*
int main()
{
    string path = "/Users/maudieguez/Documents/Programming/opencv/opencvTutorial/Resources/test.png";
    Mat img = imread(path);
    imshow("Image",img);
    waitKey(0);

    return 0;
}
*/

//////////////////////////// Video ////////////////////////////
/*
int main()
{
    string path = "/Users/maudieguez/Documents/Programming/opencv/opencvTutorial/Resources/test_video.mp4";
    VideoCapture cap(path);
    Mat img;

    while(true)
    {
        cap.read(img);
        imshow("Video", img);
        waitKey(1);
    }
    return 0;
}
*/
//////////////////////////// Webcam ////////////////////////////
/*
int main()
{
    VideoCapture cap(0);
    Mat img;

    while(true)
    {
        cap.read(img);
        imshow("Video", img);
        waitKey(1);
    }
    return 0;
}
*/

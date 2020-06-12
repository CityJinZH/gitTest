#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("D:\\Install\\data\\1.png");  //存放自己图像的路径 
	imshow("显示图像", image);
	waitKey(0);
	return 0;
}
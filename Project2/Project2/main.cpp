#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image = imread("D:\\Install\\data\\1.png");  //����Լ�ͼ���·�� 
	imshow("��ʾͼ��", image);
	waitKey(0);
	return 0;
}
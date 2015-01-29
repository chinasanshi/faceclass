//
//
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <io.h>//遍历文件图片的时候需要的头文件
//#include<conio.h>
#include "captureface.h"
#include "faceclass.h"

using namespace cv;
using namespace std;


int main()
{
	//采集人脸
	//captureface capface;
	//capface.takphoto();

	//签到
	faceclass testface;
	testface.addcascade();
	//testface.traversal();
	//testface.setmodelno();
	//testface.trainsavefacemodel();
	testface.loadfacemodel();
	testface.setmodelthreshold();
	testface.predect(false, true);

	return 0;
}


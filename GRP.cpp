//
//
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/contrib/contrib.hpp"

#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <io.h>//�����ļ�ͼƬ��ʱ����Ҫ��ͷ�ļ�
//#include<conio.h>
#include "captureface.h"
#include "faceclass.h"

using namespace cv;
using namespace std;


int main()
{
	//�ɼ�����
	//captureface capface;
	//capface.takphoto();

	//ǩ��
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


#include<graphics.h>
#include<conio.h>
#include<mmsystem.h>

#pragma comment(lib,"winmm.lib")

int main()
{
	initgraph(367*2, 234*2);
	IMAGE img;
	loadimage(&img, L"E:\\C++\\暑假\\图形文件\\图形文件\\wm.jpg", 367*2, 234*2);
	putimage(1, 1, &img);
	mciSendString(L"play wm.mp3 repeat", 0, 0, 0);
	/*mciSendString(L"open E:\\C++\\暑假\\图形文件\\图形文件\\wm.mp3 alias m", 0, 0, 0);
	mciSendString(L"play m", NULL, 0, NULL);*/
	system("pause");
	/*mciSendString(L"close m", NULL, 0, NULL);*/
	closegraph();
	return 0;
}
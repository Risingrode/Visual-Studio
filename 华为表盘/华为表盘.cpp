#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<graphics.h>
#include "Tools.hpp"
#include<mmsystem.h>     //添加多媒体头文件
#pragma comment(lib,"winmm.lib")       //添加多媒体库


#define WIN_SIZE 500  //窗口大小
#define WIN_HALF (WIN_SIZE/2)

using namespace std;

IMAGE spaceMen[59];//图片数组
IMAGE other[6];

const char *weekDays[7] = { "日","一","二","三","四","五","六" };

void loadImg() {//把图片放进数组中
	//加载图片  循环
	char fileName[70] = { 0 };
	for (int i = 0; i < 59; i++) {
		sprintf(fileName,"./images/human (%d).jpg", i + 2);
		loadimage(spaceMen+i, fileName, 140, 130);
	}

	//加载其它图片

	loadimage(other + 0, "./images/other1.png", 70,70);//心脏
	//drawImg(&other[0], 65, WIN_HALF + 50);	//心率图

	loadimage(other + 1, "./images/other2.png", 70, 70);//太阳
	loadimage(other + 2, "./images/other3.png", 60, 60);//鞋
	loadimage(other + 3, "./images/other4.png",  50, 40);//下降
	loadimage(other + 4, "./images/other5.png", 50, 40);//上升
	loadimage(other + 5, "./images/other6.png", 70, 60);//火箭

}

//太空人动画效果
void animation() {
	static DWORD t1 = 0;
	DWORD t2 = clock();//获取程序运行到调用该函数所经过的毫秒数
	static int i = 0;
	//把图片输出到窗口上面
	if (t2 - t1 > 100) {//毫秒级
		i = (++i) % 59;
		t1 = t2;
	}
	putimage(170, 200, spaceMen+i);//贴图操作
}

//设置文字样式
void setTextStyle(int h,int w,const char* faceName) {
	LOGFONT f={0};//相当于数组
	f.lfHeight = h;
	f.lfWeight = w;
	strcpy(f.lfFaceName, faceName);
	settextstyle(&f);
}

//其它界面绘制
void GameDrew() {
	setTextStyle(40, 40, "KaiTi");
	//绘制表盘
	//设置背景颜色
	setbkcolor(RGB(223, 230, 240));
	cleardevice();//清空绘图设备
	setbkmode(TRANSPARENT);//背景设置为透明
	//绘制表盘
	setlinecolor(RGB(68, 68, 68));
	setlinestyle(PS_SOLID, 40);//实线，线粗40px
	setfillcolor(RGB(223, 230, 240));
	fillellipse(0, 0, WIN_SIZE, WIN_SIZE);// 画填充椭圆(有边框)
	//绘制线条
	setlinecolor(BLACK);//需要重新设置线条属性
	setlinestyle(PS_SOLID, 4);
	//竖线
	line(WIN_HALF - 30, 20, WIN_HALF - 30, 130);
	//横线
	line(WIN_HALF - 195, WIN_HALF-120, WIN_HALF + 195, WIN_HALF - 120);
	line(WIN_HALF - 195, WIN_HALF + 120, WIN_HALF + 195, WIN_HALF + 120);

	/*其它线*/
	line(WIN_HALF,WIN_SIZE-130, WIN_HALF, WIN_SIZE-20);



	//显示动态时间 (需要对月份＋1)
	time_t curTime = time(NULL);//得到的是一串时间代码
	struct tm* humanTime=localtime(&curTime);//对时间代码进行转换
	char buf[40] = { 0 };
	sprintf_s(buf, "%d:%d", humanTime->tm_hour, humanTime->tm_min);
	outtextxy(WIN_HALF-145, WIN_HALF - 115, buf);

	sprintf_s(buf, "%d",humanTime->tm_sec);
	outtextxy(335, 150, buf);
}

void otherDrew() {

	//贴图操作

	putimage(130, 70, other + 5);//左上角小火箭

	putimage(350, 300, other + 1);//小太阳

	putimage(135, 380, other + 0);//心脏

	putimage(275, 390, other + 2);//鞋子

	putimage(250, 40, other + 4);//上按钮

	putimage(250, 80, other + 3);//下按钮

}

//添加文本
void putText() {
	settextcolor(BLACK);
	setTextStyle(20, 20, "KaiTi");
	outtextxy(180, 50, "90%");

	drawImg(&other[2], WIN_HALF + 20, WIN_HALF + 65);
	//outtextxy(180, 50, "90%");
	//outtextxy(180, 50, "90%");
	//outtextxy(180, 50, "90%");

}

int main() {
	initgraph(500, 500/*, EW_SHOWCONSOLE*/);
	
	SetWindowNewStyle(WIN_SIZE, WIN_SIZE);

	//设置背景颜色
	setbkcolor(RGB(223, 230, 240));
	cleardevice();//清空绘图设备

	loadImg();

	mciSendString("open ./images/帝都.mp3", 0, 0, 0);   //打开音乐
	mciSendString("play ./images/帝都.mp3 repeat", 0, 0, 0);   //播放音乐
	
	BeginBatchDraw();//双缓冲绘图，防止闪停

	while (true) {
		GameDrew();
		putText();//贴文本
		otherDrew();//贴其它图片
		mouseEvent();
		animation();	//动画要在绘制的后面
		FlushBatchDraw();//刷新函数   与前面的双缓冲呼应
	}

	getchar();//防止程序退出  也可以用scanf代替
	return 0;
}


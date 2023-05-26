#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<graphics.h>
#include "Tools.hpp"
#include<mmsystem.h>     //��Ӷ�ý��ͷ�ļ�
#pragma comment(lib,"winmm.lib")       //��Ӷ�ý���


#define WIN_SIZE 500  //���ڴ�С
#define WIN_HALF (WIN_SIZE/2)

using namespace std;

IMAGE spaceMen[59];//ͼƬ����
IMAGE other[6];

const char *weekDays[7] = { "��","һ","��","��","��","��","��" };

void loadImg() {//��ͼƬ�Ž�������
	//����ͼƬ  ѭ��
	char fileName[70] = { 0 };
	for (int i = 0; i < 59; i++) {
		sprintf(fileName,"./images/human (%d).jpg", i + 2);
		loadimage(spaceMen+i, fileName, 140, 130);
	}

	//��������ͼƬ

	loadimage(other + 0, "./images/other1.png", 70,70);//����
	//drawImg(&other[0], 65, WIN_HALF + 50);	//����ͼ

	loadimage(other + 1, "./images/other2.png", 70, 70);//̫��
	loadimage(other + 2, "./images/other3.png", 60, 60);//Ь
	loadimage(other + 3, "./images/other4.png",  50, 40);//�½�
	loadimage(other + 4, "./images/other5.png", 50, 40);//����
	loadimage(other + 5, "./images/other6.png", 70, 60);//���

}

//̫���˶���Ч��
void animation() {
	static DWORD t1 = 0;
	DWORD t2 = clock();//��ȡ�������е����øú����������ĺ�����
	static int i = 0;
	//��ͼƬ�������������
	if (t2 - t1 > 100) {//���뼶
		i = (++i) % 59;
		t1 = t2;
	}
	putimage(170, 200, spaceMen+i);//��ͼ����
}

//����������ʽ
void setTextStyle(int h,int w,const char* faceName) {
	LOGFONT f={0};//�൱������
	f.lfHeight = h;
	f.lfWeight = w;
	strcpy(f.lfFaceName, faceName);
	settextstyle(&f);
}

//�����������
void GameDrew() {
	setTextStyle(40, 40, "KaiTi");
	//���Ʊ���
	//���ñ�����ɫ
	setbkcolor(RGB(223, 230, 240));
	cleardevice();//��ջ�ͼ�豸
	setbkmode(TRANSPARENT);//��������Ϊ͸��
	//���Ʊ���
	setlinecolor(RGB(68, 68, 68));
	setlinestyle(PS_SOLID, 40);//ʵ�ߣ��ߴ�40px
	setfillcolor(RGB(223, 230, 240));
	fillellipse(0, 0, WIN_SIZE, WIN_SIZE);// �������Բ(�б߿�)
	//��������
	setlinecolor(BLACK);//��Ҫ����������������
	setlinestyle(PS_SOLID, 4);
	//����
	line(WIN_HALF - 30, 20, WIN_HALF - 30, 130);
	//����
	line(WIN_HALF - 195, WIN_HALF-120, WIN_HALF + 195, WIN_HALF - 120);
	line(WIN_HALF - 195, WIN_HALF + 120, WIN_HALF + 195, WIN_HALF + 120);

	/*������*/
	line(WIN_HALF,WIN_SIZE-130, WIN_HALF, WIN_SIZE-20);



	//��ʾ��̬ʱ�� (��Ҫ���·ݣ�1)
	time_t curTime = time(NULL);//�õ�����һ��ʱ�����
	struct tm* humanTime=localtime(&curTime);//��ʱ��������ת��
	char buf[40] = { 0 };
	sprintf_s(buf, "%d:%d", humanTime->tm_hour, humanTime->tm_min);
	outtextxy(WIN_HALF-145, WIN_HALF - 115, buf);

	sprintf_s(buf, "%d",humanTime->tm_sec);
	outtextxy(335, 150, buf);
}

void otherDrew() {

	//��ͼ����

	putimage(130, 70, other + 5);//���Ͻ�С���

	putimage(350, 300, other + 1);//С̫��

	putimage(135, 380, other + 0);//����

	putimage(275, 390, other + 2);//Ь��

	putimage(250, 40, other + 4);//�ϰ�ť

	putimage(250, 80, other + 3);//�°�ť

}

//����ı�
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

	//���ñ�����ɫ
	setbkcolor(RGB(223, 230, 240));
	cleardevice();//��ջ�ͼ�豸

	loadImg();

	mciSendString("open ./images/�۶�.mp3", 0, 0, 0);   //������
	mciSendString("play ./images/�۶�.mp3 repeat", 0, 0, 0);   //��������
	
	BeginBatchDraw();//˫�����ͼ����ֹ��ͣ

	while (true) {
		GameDrew();
		putText();//���ı�
		otherDrew();//������ͼƬ
		mouseEvent();
		animation();	//����Ҫ�ڻ��Ƶĺ���
		FlushBatchDraw();//ˢ�º���   ��ǰ���˫�����Ӧ
	}

	getchar();//��ֹ�����˳�  Ҳ������scanf����
	return 0;
}


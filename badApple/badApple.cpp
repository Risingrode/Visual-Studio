#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<graphics.h>
#include <mmsystem.h>	 //添加多媒体头文件
#include<Windows.h>
#include <strsafe.h>
		 
#pragma comment(lib, "winmm.lib") //添加多媒体库
using namespace std;


int main(int argc, char const* argv[])
{
	FILE* fp;
	fp = fopen("badapple.txt", "r");
	fseek(fp, 0, SEEK_END);//重定位流上的文件指针

	int file_size = ftell(fp);//C语言函数ftell用于获取文件位置指针当前位置相对于文件首的偏移字节数。

	char* tmp;
	fseek(fp, 0, SEEK_SET);//定位到开头位置
	tmp = (char*)malloc(file_size * sizeof(char));

	fread(tmp, file_size, sizeof(char), fp);//fread 和 fwrite , fread 用于读取文件 , fwrite 用于写出文件

	const char* delim = "nekomark";//作为一个截断标志
	char* p = NULL;

	p = strtok(tmp, delim);//截断字符串

	//这里添加音乐
	mciSendStringA("open ./Music/badapple.mp3", 0, 0, 0);
	mciSendStringA("play ./Music/badapple.mp3 repeat", 0, 0, 0);

	while (p != NULL)
	{
	
		//system("cls");
		
		Sleep(100);
		printf("%s", p);
		p = strtok(NULL, delim);
		
	}

	getchar();
	return 0;
}





















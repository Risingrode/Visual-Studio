#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<graphics.h>
#include <mmsystem.h>	 //��Ӷ�ý��ͷ�ļ�
#include<Windows.h>
#include <strsafe.h>
		 
#pragma comment(lib, "winmm.lib") //��Ӷ�ý���
using namespace std;


int main(int argc, char const* argv[])
{
	FILE* fp;
	fp = fopen("badapple.txt", "r");
	fseek(fp, 0, SEEK_END);//�ض�λ���ϵ��ļ�ָ��

	int file_size = ftell(fp);//C���Ժ���ftell���ڻ�ȡ�ļ�λ��ָ�뵱ǰλ��������ļ��׵�ƫ���ֽ�����

	char* tmp;
	fseek(fp, 0, SEEK_SET);//��λ����ͷλ��
	tmp = (char*)malloc(file_size * sizeof(char));

	fread(tmp, file_size, sizeof(char), fp);//fread �� fwrite , fread ���ڶ�ȡ�ļ� , fwrite ����д���ļ�

	const char* delim = "nekomark";//��Ϊһ���ضϱ�־
	char* p = NULL;

	p = strtok(tmp, delim);//�ض��ַ���

	//�����������
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





















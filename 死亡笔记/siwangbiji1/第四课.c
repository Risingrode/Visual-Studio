///**/#include<stdio.h>
//#include<stdlib.h>//Դ�ļ�����ͷ�ļ�
//#include"time.h"
/*#include "common.h"

#include"��һ�β���.h"//include�����ǵ������滻
#ifndef ��һ�β��� 
#define ��һ�β���
//����ͷ�ļ�����
//Ϊ�˱����ظ�

#endif // !
int main() {
	printf("%d\n", sum);
}*/  //�˴��Թ�
/*#include<stdio.h>
#include<stdlib.h>
int main() {
#define a 1
#ifdef a

	printf("����");
	printf("xiaokeai   ");
#else
	printf("����");

#endif;

#ifndef a
	printf("keyi ");
#else
	printf("xiuqi ");
#endif

#if 1
	printf("iostream ");
#else
	printf("stdio ");
#endif
	printf("woaini ");
}*/


//extern��ȫ�ֱ���������  ��ȫ����Ч  ����򹲴���
//extern int a;   û�����  �ھֲ�������Ҫ�� �����治�ü�

//static�Ǿ�̬ȫ�ֱ���������  ֻ�������ļ�����Ч
//�����ļ������ظ�����   ��������   ����򹲴���

//��̬�ֲ����� �ڱ���ǰ����static  ������ ����򹲴���

//��̬����  ���ļ�����ǰ��static ֻ�ڸ��ļ���������

//const �������η�  �������ι��ı����������޸�
//int const a=12;  ������ָ���(�ӿ����⣩
//const int a[1][2]={1,2,3,4,}
//const int *p   //*p���ܱ�
//int* const p  //p���ܱ�
// const int* constp
//const int*fun (const int *p��//��������

//register  int a;   //�Ĵ���
//����ȡ��ַ  ��������ȫ�ֱ���

//volatile  �ױ����  ��ֹ�ı����������ַ
//volatile int a;

//restrict  �ϲ��Ż�  int *restrict p=~��

//�����в���  �ҵ�cmd���ҵ��ļ�exe ����ڿ�
//���ļ�

//����� rand ��srand
/*int main() {
	srand(9);//���������
	//srand(size_t)time(NULL);
	//int a = rand();//���������
	int a;
	a = rand();
	printf("%d\n", a);//��������ѭ��
	//�ڷ�Χ�ڳ��������
	//0~78  rand()%79
	//100~999  +100>>100~999
	//�������ϣ�����ָ��һ�����е�ĳ������
	int b = 2;
	printf("%")


}*/
//����ת��  
//ʮ������  A~F��Ӧ10~15
//������ӷ�  ��   ��תȡ�෨
/*void fun();
int main() {
	//scanf_s("%d\n", &a);
	fun();
}
void fun(){	
	long long int a,n=1, b,i=1,j=1;
	for (b = 0; b <= 10000; b++) {
		if (b < 3)
			printf("1");
		if (b >= 3)
			n = i + j;
		    i = j;
		    j = n;
			printf("%d\n", n);
	}
}*/
//λ����
/*int main() {
	int a=199, b = 13;
	int c = a & b;
	printf("%d\n", c);
}*/
//λ�ֶ�   ��ȷ���ֽ�
/*#include<stdlib.h>
#include<stdio.h>
struct mn {//����������
	int b5 : 2;//��ʾ����λ
	int b4 : 1;  //ʮλ
	int b3 : 1;  //ǧλ
	int b2 : 1;
	int b1 : 1;
}d;
int main() {
	d.b1 = 1;//��ֵ
	d.b2 = 1;
	printf("%d\n", d);
}*/
//�ļ�����
//���ļ�
/*int main() {        //·����ģʽ
	int a = errno;
	FILE* pFile=0;  
	//r ֻ���ļ�  w����д  a����д r+�ɶ���д  w+  a+
	//��������ʽ  rb wb ab r+b  rb+ �Դ�����
    fopen_s("&pFile","C:\\c����\\qwe.txt", "r");
	//������
	if (pFile == NULL) {
		printf("��ӡ����\n");
		printf("%c\n", a);
	}
	return 0;
}*/
//д��
/*int main() {
	int a;
    FILE*pFile=fopen_s( "D:\\C����\\qwe.txt", "w");
	char* str = "hellow c3~";
	fwrite(str, sizeof(char), strlen(str) + 1, pFile);
	errno;
	fclose(pFile);//�ر��ļ�
}*/
//���ļ�  fread
/*int main(void) {
	int a;
	FILE* pFile; 
	pFile != 0;
    a= fopen_s(&pFile,"D:\\C����\\qwe.txt", "r");
	char* str = "hellow c3~";
	fwrite(str, sizeof(char), strlen(str) + 1, pFile);
	//��ַ+�ֽ���+���������+�ļ�ָ��
	while (a = fread(str, sizeof(char), 2, pFile)) {
		printf(str);
	}
	fclose(pFile);
}*/
//��д��С��  fputs  pgets
/*int main() {
	int arr;
	FILE* pFile;
	pFile != 0;
	char a[100] = { 0 };
    arr= fopen_s(&pFile,"D:\\C����\\qwe.txt", "a");
	char* str = "hellow c3~";
	fwrite(str, 1,  2, pFile);

	int fputs(qwerj, pFile);
	//fputs()  һ��д��һ��
	//fgets(��һ�ζ�һ��

	fclose(pFile);
}*/
//fscanf  fprintf
/*int main() {//�ַ������м�Ҫ�ÿո����
	int arr;
	FILE* pFile;
	pFile != 0;
	int a=0;
	double b = 1.0;
	char str[20] = { 0 };
	arr = fopen_s(&pFile, "D:\\C����\\qwe.txt", "w");
	//fprintf(pFile, "%d,%s", 12, "hellow  fu~");
	fscanf (pFile, "%d,%s %lf",&a,str,&b);
	fclose(pFile);
}*/
//fseek��ftell  �����ļ�ָ��λ��   ���ص�ǰָ���λ��
/*fseek(pFile, 0L, SEEK_SET)//������ʾ����
�����ļ�ָ��ָ��ͷ
fseek(pFile, 10L, SEEK_SET)
�����ļ�ָ��ָ���10���ֽ�
fseek(pFile, 10L, SEEK_CUR)
�����ļ�ָ���ڵ�ǰλ����ǰ(���ǵ����)Ų��10��
fseek(pFile, 0L, SEEK_SET)
�����ļ�ָ��ָ��ͷ
fseek(pFile, 10L, SEEK_SET)
�����ļ�ָ��ָ���10���ֽ�
fseek(pFile, 10L, SEEK_CUR)
�����ļ�ָ���ڵ�ǰλ����ǰ(���ǵ����)Ų��10��*/
//ftell(*stream)

 //                                  �������




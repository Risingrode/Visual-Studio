///**/#include<stdio.h>
//#include<stdlib.h>//源文件调动头文件
//#include"time.h"
/*#include "common.h"

#include"第一次测试.h"//include本质是单纯的替换
#ifndef 第一次测试 
#define 第一次测试
//加上头文件内容
//为了避免重复

#endif // !
int main() {
	printf("%d\n", sum);
}*/  //此处略过
/*#include<stdio.h>
#include<stdlib.h>
int main() {
#define a 1
#ifdef a

	printf("出差");
	printf("xiaokeai   ");
#else
	printf("爱！");

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


//extern是全局变量的声明  在全局有效  与程序共存亡
//extern int a;   没多大用  在局部变量内要加 放外面不用加

//static是静态全局变量的声明  只在所在文件内有效
//其他文件可以重复变量   可以重名   与程序共存亡

//静态局部变量 在变量前加上static  可重名 与程序共存亡

//静态函数  在文件名字前加static 只在该文件中起作用

//const 常量修饰符  被他修饰过的变量不能再修改
//int const a=12;  可以用指针改(接口问题）
//const int a[1][2]={1,2,3,4,}
//const int *p   //*p不能变
//int* const p  //p不能变
// const int* constp
//const int*fun (const int *p）//保护数据

//register  int a;   //寄存器
//不能取地址  不能修饰全局变量

//volatile  易变变量  禁止改变变量存续地址
//volatile int a;

//restrict  合并优化  int *restrict p=~；

//命令行参数  找到cmd再找到文件exe 拖入黑框
//打开文件

//随机数 rand 和srand
/*int main() {
	srand(9);//随机数种子
	//srand(size_t)time(NULL);
	//int a = rand();//产生随机数
	int a;
	a = rand();
	printf("%d\n", a);//可以利用循环
	//在范围内出现随机数
	//0~78  rand()%79
	//100~999  +100>>100~999
	//与数组结合，产生指定一组数中的某个数字
	int b = 2;
	printf("%")


}*/
//进制转化  
//十六进制  A~F对应10~15
//基数相加法  与   反转取余法
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
//位运算
/*int main() {
	int a=199, b = 13;
	int c = a & b;
	printf("%d\n", c);
}*/
//位字段   精确到字节
/*#include<stdlib.h>
#include<stdio.h>
struct mn {//从下往上算
	int b5 : 2;//表示两个位
	int b4 : 1;  //十位
	int b3 : 1;  //千位
	int b2 : 1;
	int b1 : 1;
}d;
int main() {
	d.b1 = 1;//赋值
	d.b2 = 1;
	printf("%d\n", d);
}*/
//文件操作
//打开文件
/*int main() {        //路径加模式
	int a = errno;
	FILE* pFile=0;  
	//r 只读文件  w擦除写  a继续写 r+可读可写  w+  a+
	//二进制形式  rb wb ab r+b  rb+ 以此类推
    fopen_s("&pFile","C:\\c语言\\qwe.txt", "r");
	//错误码
	if (pFile == NULL) {
		printf("打印错误\n");
		printf("%c\n", a);
	}
	return 0;
}*/
//写入
/*int main() {
	int a;
    FILE*pFile=fopen_s( "D:\\C语言\\qwe.txt", "w");
	char* str = "hellow c3~";
	fwrite(str, sizeof(char), strlen(str) + 1, pFile);
	errno;
	fclose(pFile);//关闭文件
}*/
//读文件  fread
/*int main(void) {
	int a;
	FILE* pFile; 
	pFile != 0;
    a= fopen_s(&pFile,"D:\\C语言\\qwe.txt", "r");
	char* str = "hellow c3~";
	fwrite(str, sizeof(char), strlen(str) + 1, pFile);
	//地址+字节数+数据项个数+文件指针
	while (a = fread(str, sizeof(char), 2, pFile)) {
		printf(str);
	}
	fclose(pFile);
}*/
//读写的小弟  fputs  pgets
/*int main() {
	int arr;
	FILE* pFile;
	pFile != 0;
	char a[100] = { 0 };
    arr= fopen_s(&pFile,"D:\\C语言\\qwe.txt", "a");
	char* str = "hellow c3~";
	fwrite(str, 1,  2, pFile);

	int fputs(qwerj, pFile);
	//fputs()  一次写入一行
	//fgets(）一次读一行

	fclose(pFile);
}*/
//fscanf  fprintf
/*int main() {//字符串在中间要用空格隔开
	int arr;
	FILE* pFile;
	pFile != 0;
	int a=0;
	double b = 1.0;
	char str[20] = { 0 };
	arr = fopen_s(&pFile, "D:\\C语言\\qwe.txt", "w");
	//fprintf(pFile, "%d,%s", 12, "hellow  fu~");
	fscanf (pFile, "%d,%s %lf",&a,str,&b);
	fclose(pFile);
}*/
//fseek和ftell  设置文件指针位置   返回当前指针的位置
/*fseek(pFile, 0L, SEEK_SET)//正负表示方向
设置文件指针指向头
fseek(pFile, 10L, SEEK_SET)
设置文件指针指向第10个字节
fseek(pFile, 10L, SEEK_CUR)
设置文件指针在当前位置向前(咱们得向后)挪动10个
fseek(pFile, 0L, SEEK_SET)
设置文件指针指向头
fseek(pFile, 10L, SEEK_SET)
设置文件指针指向第10个字节
fseek(pFile, 10L, SEEK_CUR)
设置文件指针在当前位置向前(咱们得向后)挪动10个*/
//ftell(*stream)

 //                                  完结撒花




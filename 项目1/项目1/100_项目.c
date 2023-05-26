//#include<stdio.h>
//#include<stdlib.h>
//1.1~4能组成多少个不同三位数

/*int main() {
	int i, a, b,  n,m=0;
	for (i = 1; i <= 4; i++) {
		for (a = 1; a <= 4; a++) {
			for (b = 1; b <= 4; b++) {
				if (i != a || a != b || i != b) {
                n = i * 100 + a * 10 + b;
				m++;
				printf("%d\n", n);	
				}
			}
		}
	}
						printf("%d\n", m);

}*/
//1.1  测试数组
/*int main() {
	int a[100] = { 0 };
	int b[1] = { 0 };
	for (int i = 1; i < 100; i++) {
		a[i] = i;
		printf("\t%d", a[i]);
		b[1] = i;
		printf("%3d", b[1]);
	}
	int n;
	scanf_s("%d", &n);
	while (n > 2) {
		printf("\ncheng gong\n");
		n++;
		if (n = 18) {
			printf("if的测试");
			break;//多循环跳出
		}
	}
}*/
//2.企业发放奖金
/*int  main() {
	double i,a;
	i = 1;
	if (i <= 10) {
		a = i /10;
	}
	else if (10 < i < 20) {
		a = 1 + (i - 10) * 0.075;
	     }
	else {
		a = i;
	}
	printf("%lf", a);

}*/
//3.找整数
/*int main() {
	for (int i = 1; i <=10000; i++) {
		for (int j = 1; j <=100; j++) {		
			for (int k = 1; k <= 100; k++) {
                if (j*j == (i+100) && k*k == (i + 168)) {
				printf("%d", j);
			    }
			}
			
		}
	}
}*/
//4.年月日
/*int main() {//奇数为30
	int a, b, c, m, n;
	scanf_s("%d年%d月%d日", &a, &b, &c);
	if (b % 2 == 0) {
		m = 31 * b;
		m = m - (b / 2)+c;
		printf("%d\n", m);
	}
	else {
		n = 31 * b;
		n = n -(( (b - 1) / 2) +c);
		printf("%d\n", n);
	}
}*/
//5.比大小
/*int main() {
	int a, b, c,n;
	scanf_s("%d,%d,%d\n", &a, &b, &c);
	if (a>b) {
		n = b;
		b = a;
		a = n;
	}
	if (b > c) {
		n = c;
		c = b;
		b = n;
	}
	if (a > c) {
		n = c;
		c = a;
		a = n;
	}
	printf("%d%d%d", a, b, c);
}*/
//6.字符测试
/*int main() {
	printf("%c\n", 109);
	for (int i = 1; i < 100; i++) {
		printf("%2c", 'm' - i);
	}
	printf("\n\n\n");
	char a[] = { "qwer"};
	printf("%s", a);
	int s[40] = { 0 };
	for (int g = 101; g <=109; g++)
		s[328] = g ;
	
	int* p = &s;

	for(int j=0;j<=8;j++)
	printf("%d,%c", p[j], p[j]);
}*/
//7.输出c
/*int main() {
	printf("**************\n");
	printf("**************\n");
	printf("****      ****\n");
	printf("****      ****\n");
	printf("****      ****\n");
	printf("**************\n");
	printf("****      ****\n");
	printf("****      ****\n");
	printf("****      ****\n");
	printf("**************\n");

}*/
//8.输出国际象棋棋盘  asc2表扩展包无法正常输出

//9.打印楼梯
/*int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == j) {
				printf("[付昌威真厉害]");
				printf("\n");
			}
			else {
				printf("[我爱付昌威]");
			}

		}
	}
}*/
//10.我爱斐波那契
/*int main() {
	int a = 1, b = 1, n;
	for (int i = 1; i < 20; i++) {
	if (i <= 2) {
		printf("\t%d", a);
	}
	else {
		a = a + b;
		printf("\t%d", a);
		b = a + b;
		printf("\t%d", b);
	}
	}
}*/
//11.测试while语句
/*int main() {
	int n=11;
	//scanf_s("%d\n", &n);
	while (n > 9) {
		printf(" 测试");
		if (n == 19) {
			printf(" 可以");			
		}
		else {
			printf(" 错误");			
		}
		n++;
	}
	system("pause");
	return 0;
}*/
//12.大小值排列
/*int main() {
	int a, b, c,n;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b) {
		n = b;//右值赋给左值
		b = a;
		a = n;
	}
	if (a > c) {
		n = c;
		c = a;
		a = n;
	}
	if (b > c) {
		n = c;
		c = b;
		b = n;
	}
	printf("%d\t%d\t%d", a, b, c);
}*/
//13.输出特殊符号 不成功
/*int main() {
	for (int i = 1; i <= 210; i++) {
		printf("\t%c", i);
		printf("\t%d", i);
	}
	printf("\n\n\n\n");
	for (int j = 1; j <= 20; j++) {
		printf("\t%c,%c", 35, 42);
	}
}*/
//14.99乘法表

//15.打印水仙花数 注意：ctrl+分号  改变光标
/*int main() {
	int a, b, c;
	for (int i = 100; i <= 999; i++) {
		c = i % 10;//个位
		b = (i % 100 - c) / 10;
		a = (i-10*b-c)/100;
		if (i==a*a*a + b*b * b +c*c* c) {
			printf("%d\n", i);
		}
		else {
			continue;
		}
	}
	return 0;
}*/
//16.测试scanf_s  成功
/*int main() {
	int a;
	scanf_s("%d", &a);
	printf("%d\n", a % 10);
}*/
//17.asc2码  不成功
/*int main() {
	for (int i = 1; i <= 210; i++) {
	printf("\t%c %d", i, i);
	}
}*/
//18.分解质因数 不成功
/*int main() {
	int a,b [20]={0}, c, n = 0;
	scanf_s("%d", &a);
	c = a;
	for (int i = 2; ; a != 1) {
		if (a % i == 0) {
			b[n] = i;
			n++;
			a = a / i;
			i = 2;
		}
		else{i++;}		
	}
	printf("%d的因数是：", c);
    printf("%d", b[0]);
	for (int m = 1; m < n; m++) {
		printf("X%d", b[n]);
	}
	//for (int i = 97; i <= 122; i++) {//输出小写字母
	//	printf("%c", i);
	//}
}*/
/*int main() {
	int a, b, c;
	scanf_s("%d", &a);
	for (int i = 2; i <a/2; i++) {//找质因数
		//b = i;
		for (int j = 2; j <= i; j++) {//排除能分项
			if (a % i == 0 && i % j == 0) {
				printf("\t%d", j);

			}
		}
	}
}*/
//19.找两个数的公约数和公倍数
/*int main() {
	int m, n,a,b;
	scanf_s("%d%d", &m, &n);
	for (int i = 2; i <= m; i++) {
		for (int j = 2; j <= n; j++) {
			if (m % i  == 0 && n % j  == 0&&i==j) {
				printf("%d\n", i);
			    printf("%d", m * n / i/ i);
				break;
			}			
		}
	}
}*/
//20.输入字符，统计个数  gets length
/*int main() {
	int s[20],length;
	gets(s);
	length = strlen(s);
	printf("%d\n", length);
}*/
//21.数学问题 反向输出数字
/*int main() {
	int a,b,c;
	scanf_s("%d", &a);
	for (int i = 0;; i++) {
		b = a / 10;
		c = a % 10;
		a = b;
		if (a >= 1) {
			printf("%4d", c);
		}
		else {
			printf("%4d", c);
			break;
		}
	}
	return 0;
}*/
//22.计算机  成功
/*int main() {
	int a,m,n;
	scanf_s("%d%d%d", &a,&m,&n);
	switch (a) {
	case 1:
		printf("%d", (m + n));
		break;
	case 2:
		printf("%d", (m * n));
		break;
	}
}*/
//23.逻辑问题
/*int main() {

}*/
//24.矩阵
/*int main() {
	//int n;
	//scanf_s("%d", &n);
	printf("玩出新花样");
	for (int i = 0;; i++) {

		if (i % 32 == 0) {
			printf("\n");
		}
		else if (i % 3 == 0) {
			printf("\t");
		}
		else {
		printf("\t[]");
		}
	}
}*/
//25.随机数
/*int main() {
	srand(90);
	for (int i = 0; i < 90; i++) {
	int a;
	a = rand();
	printf("\t%d", a);
	}
}*/
//26.转义字符
/*int main() {
	for (int i = 1; i <= 210; i++) {
		printf("\67");
	}
}*/
//27.无限数相加 
/*int main() {//先乘10累加，锁定单个数字，再累加
	int a, sum = 0, b=0;
	scanf_s("%d", &a);
	for (int i = 1; i <= 5; i++) {
		b += a;
		sum += b;
		a *= 10;
	}
	printf("%d", sum);	
	return 0;
}*/
//28.小球落体  不成功
/*int main() {
	float h = 100,i,a=100,b,sum=0;
	for (i = 0; i < 9; i++) {
		sum += ((h / 2)*2);
		h = h / 2;
	}
	printf("%lf", sum);
}*/
//29.猴子吃桃
/*int main() {
	int n = 1,sum=0;
	for (int i = 0;i<9; i++) {
		n= (n + 1) * 2;
	}
	printf("%d", n);	
}*/
//30.打乒乓球找名单 a不与x比，c不与x,z比
/*int main() {
	char a, b, c;
	for (a = 'x'; a >= 'x' && a <= 'z'; a++)
		for (b = 'x'; b >= 'x' && b <= 'z'; b++)
			for (c = 'x'; c >= 'x' && c <= 'z'; c++)
				if (a != 'x' && c != 'x' && c != 'z' && a != b && a != c && b != c)
					printf("a的对手是%c,b的对手是%c,c的对手是%c", a, b, c);
}*/
//31.打印图案 未完成，待修复
/*int main() {
	int n; 
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int m = 0; m <= abs(n/2-i); m++) { printf("  "); }
		for (int a = 0; a <= abs(n / 2 - i); a++) { printf("*"); };
		printf("\n");
		for (int m = 0; m <= abs(n / 2 - i); m++) { printf("  "); }
	}
}*/
//32.求数列前n项和 
/*int main() {
	double sum=0,b=0;
	int n;
	scanf_s("%d", &n);
	for (double i = 0; i < n; i++) {
		b = (i + 2) / (i + 1);
		sum += b;
	}
	printf("%lf", sum);
}*/
//33.求阶乘相加之和 
/*int main() {
	int n,sum=0,j=1,b=1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < i; j++) {
		b *= (j + 1);
		}
		sum += b;
	}
	printf("%d", sum);
}*/
//34.用递归求阶乘 不成功
/*#include<stdio.h>
#include<stdlib.h>
int fun(int a);
int main() {
	long long n;
	scanf_s("%d", &n);
	printf("%d", fun(n));
}
int fun(int a) {
	if (a >1) 
		return a* fun(a - 1);
	else 
		return 1;	
}*/
//35.利用递归反向打印字符
/*int main() {//不是递归
	char s[5],n[5];
	printf("输入5个字符：");
	gets(s);
	//fun(s);
	for (int i = 0; i < 5; i++) {
	n[i] = s[4 - i];
    printf("%c",n[i]);
	}	
}*/
/*int main() {//递归 未完成
	int n;
	scanf_s("%d", &n);
	fun(n);
	return 0;
}
int fun(int a) {
	if (a > 1) {
		printf("可以");
	}
	else if (a < -3)
		return 0;
	else
    printf("长得帅");
	return fun(a - 1);
}*/
/*int main() {
	char s;
	gets(s);
	fun(s);
}
int fun(char t);
int fun(char t) {
	int length = strlen(t);
	for (int i = 0; i < length; i++) {
		if(t[i])
	}
}*/
//36.整数操作  几位数 与逆序打印
/*int main() {
	int a,b,c,m,i;
	scanf_s("%d", &a);
	for (int i = 1;; i++) {
		b = a / 10;
	if (b<1) {
			printf("位数是%d\n", i);	
			break;
		}	
	}		
	for (int j = 1;; j++) {
		c = a % 10;
		m = a / 10;
		a = m;
		printf("%4d", c);
	}
}*/
//37.判断一个数是不是回文数
/*int main() {
	int a, b[5], c;
	printf("请输入一个5位数：\n");
	scanf_s("%d", &a);
	for (int i = 0; i < 5; i++) {
		b[i] = a % 10;		
		a = a / 10;
	}
	if (b[0] == b[4] && b[1] == b[3]) {
		printf("是回文数\n");
	}
	else {
		printf("不是回文数\n");
	}
	system("pause");
	return 0;
}*/
//38.颜色
/*#include<windows.h>
int main() {
	int colar=0;
	for (int i = 0; i <= 14; i++) {
		colar++;
		printf("我最帅\n");
		//getch();//回车
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colar);
	}
	/*system("@color 2");
	printf("niu\n");
	system("@color 4");
	printf("niu\n");*///直接改变系统	
/*int a;
	scanf_s("%d", &a);
	while (a > 0) {
    color(4);
	printf("\t\t\t\t\t\t\t\t\t可以\t\t\t");
	color(7);
	printf("\t\t真帅\t\t\t\t");
	color(13);
	printf("\t\t可以"); 
	color(5);
	printf("棒\t\t\t"); 
	color(9);
	printf("可\t\t\t以");
	}
}
int color(int a);
int color(int a) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}*/
//39.学习gotoxy()与clrscr()  以后再学

//40.颜色设置
/*#include<windows.h>
int main() {
	int color;
	scanf_s("%d", &color);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	printf("黑，蓝，绿，湖蓝，红，紫黄白灰，淡蓝淡绿淡浅绿淡红单子淡黄白\n");
	printf("我最帅");
}*/
//41.求素数（质数）  //未完成
/*int main() {
	int a, b=1;
	for (int i = 2; i <= 100; i++) {
		for (int j = 2; j <= i / 2; j++) {
			if (i % j != 0) {
				break;
			}
			else {
				printf("\t%d", i);
			}
		}
	}
}*/
//42.排序问题
/*int main() {
	int i=0,temp,a[10];
	srand(10);
	for (int p = 0; p < 10; p++) {
		a[p] = rand();
	}
	for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
		    if (a[i] < a[j]) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		    }
	}
	}	
	for (int m = 0; m < 10; m++) { printf("\t%d",a[m]); }
}*/
//43.求3*3矩阵对角线之和
/*int main() {
	srand(9);
	int a[3][3];
	for (int s = 0; s < 3; s++) {
		for (int y = 0; y < 3; y++) {
		a[s][y] = rand();
		if (y == 2) {
			printf("\t%d\n",a[s][y]);
		}
		else {
		printf("\t%d", a[s][y]);
		}
		}
	}	
	int c,b;
	b = a[0][0] + a[2][2];
	c = a[0][2] + a[2][0];
	printf("%d,%d", b, c);
}*/
//44.静态变量 static  静态只能在本文件中引用

//45.auto

//46.外部变量 extern

//47.register

//48.#define 宏

//49.#if  #ifdef #ifndef
/*int main() {
	int a = 2, b = 1;

}*/
//50.#include的应用:引用头文件名字，可以引用自己写的 注意双引号

//51.位运算符
/*int main() {
	int a = 1, b = 78;
	printf("%6d", a ^ b);//相同为0
	printf("%6d", a & b);//都为1是才为1
	printf("%6d", a | b);//双0为0
	a = ~a;
	printf("%6d",a);//取反 正整数取反是加1的负数，负整数取反是加1的绝对值，0是-1
}*/
//52.用circle画图  这个重要  缺少头文件 https://easyx.cn/ 安装软件
/*#include<conio.h>
#include<graphics.h>
int main() {
	initgraph(640, 480);
	circle(320, 240, 100);
	_getch();
	closegraph();
}*/
//53.杨辉三角 未完成
//int main() {
//	system("color 5");
//	int n;
//	scanf_s("%d", &n);
//	int a[15][15], i, j,m=1;
//	for (i = 1; i <= n; i++) {//行
//		for (j = 1; j <= i; j++) {//每行个数
//			a[i][1] = 1;
//			if (j == 1) {
//				printf("%d", a[i][1]);
//			}
//			else if(i == j) {
//				a[i][j] = 1;
//				printf("%d\n", a[i][j]);
//			}
//			else {
//				m = m * (i - j + 1) / j;
//				printf("%d", m);
//			}
//		}
//	}
//	return 0;
//}

//int main() {
//	int h, l, s,n;
//	scanf_s("%d", &n);
//	for (h = 0; h < n; h++) {
//		for (int m = 0; m < n - h; m++) { printf("\t"); }
//		for (l = 0; l <= h; l++) {
//			if (h == 0 || l == 0) {
//				s = 1;
//				printf("%d", s);
//				if (l == 0) {
//					printf("\n");
//				}
//			}
//			else {
//				s *= ((h - l + 1) / l);
//				printf("%d", s);
//			}
//		}
//	}
//}
/*int main() {
	printf("请输入行数: ");
	int hang,shu;
	scanf_s("%d", &hang);
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < hang - i; j++)printf("  ");
		for (int m = 0; m <= i; m++) {
			if (i == 0 || m == 0) 
				shu = 1;		
			else
				shu =shu* (i - m + 1) / m;
			printf("%4d", shu);
		}
		printf("\n");
	}
	return 0;
}*///成功
//54.putpixel

//55.USTL位数
/*int main() {
	int a,i;
	scanf_s("%d", &a);
	for (int i = 1; i < 8; i++) {
		for (int j = 1; j <= i; j++) {
			if()
		}
	}
	return 0;
}*/
//56.小兴趣
/*#include<windows.h>
int main() {
	int n;
	scanf_s("%d", &n);
	while (n > 0) {
		for(int i=0;;i++){
			if(i!=7){
        printf("\t\t\t\t好");
		printf("\t\t好\t\t");
		printf("\t\t\t\t好\n\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);		
            }
        }
	}
}*/
/*int main() {
	int i = 0, j = 0,n;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {	
			if (j == i) {
				printf("[]\n");
			}
			else {
				printf("[]");
			}						
		}
	}	
	system("@color 4");
	return 0;
}*/
/*int main() {
	int a[10];
	int* p = &a;
	srand(10);
	for (int i = 0; i < 10; i++)
		a[i] = rand();
	for (int m = 0; m < 10; m++) {
		printf("  %d", p[m]);
		printf("  %p", &p[m]);
	}
}*/
/*int main() {
	int n;
	scanf_s("%d", &n);
	printf("%d", fun(n));
}
int fun(int a) {
	if (a == 1 || a == 2)
		return 1;
	else
		return fun(a - 1) + fun(a - 2);

}*/
/*int main() {
	int a, b, c;
	scanf_s("%d", &a);
	while (a > 0) {
		switch (a) {
		case 1:
			printf("真厉害！");
		case 2:
			printf("真漂亮！");
		case 3:
			printf("学习好！");
			goto moon;
		}
		a--;
	}
moon:
	printf("我爱训练，我要训练，我还能坚持！");
	system("color 8");
}*/
//求字符串长度 无
/*int main() {
	char s[20];
	gets(s);
	int a=0;
	char* p = &s;
	for (int i = 0; i < 20; i++) {
	while (p[i] != '\0') {
		a++;
	}
	}	
	printf("%d", a);
	return 0;
}*/
//圆桌骑士
/*#include<stdlib.h>
#include <stdio.h>
int main()
{
	int num = 0;              //总人数
	int left_num = 0;         //当前余下的人数
	int i = 0;
	int count = 0;            //报数 1-3
	printf("请输入人数n\n");
	scanf_s("%d", &num);
	left_num = num;
	int array[num];       //存放人员的号码
	for (i = 1; i <= num; i++) //0号无效
		array[i] = i;         //1-num为人员号码
	i = 0;
	while (left_num > 1)       //余下的人数大于1
	{
		i++;
		if (i > num)
			i = 1;            //新的一轮 1-num
		if (array[i] != 0)
			count++;          //报数
		if (count == 3)
		{
			array[i] = 0;     //报到3的人退出循环
			count = 0;        //报数复位，再从1开始
			left_num--;       //余下人数-1
			printf("%d号退出\n", i);  //Debug
		}
	}
	for (i = 1; i <= num; i++)
		if (array[i] != 0)
			printf("最后留下的是%d号\n", i);
	return 0;
}*/

#include <stdio.h>
void main()
{
	int num[50], n, * p, j, loop, i, m, k;
	scanf_s("%d", &n);
	p = num;
	for (j = 0; j < n; j++)
	{
		*(p + j) = j + 1;
	}
	i = 0;
	m = 0;
	k = 0;
	while (m < n - 1)
	{
		if (*(p + i) != 0)
		{
			k++;
		}
		if (k == 3)
		{
			k = 0; 
			*(p + i) = 0;
			m++;   
		}
		i++; 
		if (i == n)
		{
			i = 0;
		}
	}
	for (loop = 0; loop < n; loop++)
	{
		if (num[loop] != 0)
		{
			printf("%2d号\n", num[loop]);
		}
	}
}

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a[100], * p, i, n=0, m,l=0,k=0,s=0;
//	scanf_s("%d", &m);
//	p = a;
//	for (i = 1; i <= m; i++) {
//		p[i] = i;
//	}
//	l = m;
//	while (s<m-1) {
//		if (p[m] != 0) {
//			n++;
//		}
//		if (n == 3) {
//			n = 0;
//			p[m] = 0;
//			s++;
//		}
//		k++;
//		if (m == k) {
//			k = 0;
//		}
//	}
//	for (int r = 1; r <= l; r++) {
//		if (a[r] != 0) {
//			printf("%d", a[r]);
//		}
//	}
//	return 0;
//}
//**指针
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//	int a[10],b=0;
//	int* p = &a;
//	
//
//
//
//}















/*#include<stdio.h>
#include<stdlib.h>*/
//int main()
//{//小数
	/*float f = 12.123;
	printf("%f", f);
	return 0;*/
//简单++
	/*int a;
	int b;
	a = 7;
	b = ++a;
	printf("%d\n", b);
	return 0;*/
//比大小
	/*int a;
	int b;
	a = 3;
	b = 4;
	if (a > b) {
		printf("%d\n", b);
	}
	else (a <= b);
	{
		printf("%d\n", a);
	}*/
//if语句 已完成 else后不加数
	/*int a;
	scanf_s("%d", &a);
	
	if (a>10)
	{
		printf("不帅\n", a);
	}
	else
	{
		printf("长得帅\n", a);
	}
	return 0;*/
//for循环
	/*int a;
	for (a = 0; a < 10; a++);
	printf("%d\n", a); */
	//法二 
/*int main() {
    int sum = 0;
	int i=1;
	for (i=1; i <= 10; i++)
	{
	sum += i;
	}
	printf("%d\n", sum);
}*/

//while语句
/*int main() {
int a=0;
int sum=0;
	while (a <=12) {
		a++;
		printf("%d\n", a);
	}
	printf("%d\n",a);
 }*/
	
	//法二
/*int main() {
    int sum = 0;
	int i = 1;
	while (i <= 10) 
	{
		sum += i;
		i++;
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
}*/
/*int main() {
	int a = 0;
	int i = 0;

	int sum = 0;
	for (i = 0; i <= 10; i++) {
		sum += i;
		printf("%d\n", sum);
	}
	printf("%d\n", sum);
}*/
	
//for与while与do while可以互相替换，for用的多。
//dowhile循环
	/*int sum = 0;
	int i = 1;
	do {
		sum += i;
		i++;
	} while (i <= 10);
//	printf("%d\n", sum);*/
	//%的知识点
/*	以printf为前提
	%d十进制 %c字符  用单引号
	%s字符串  用双引号
	%f 可用于fioat和double且等同于%lf
		%x十六进制 %X %08x %08X
    以scanf为前提    %lf用于double
     后跟地址    不加\n
*/
 
	/*printf("%d%c\n", 65, 65);
	float a = 12.5f;
	double b = 23.4;
	printf("%f%f\n", a, b);
	printf("%lf%lf\n", a, b);
	printf("%x\n", 20);
	printf("%08X\n", 1234);

	scanf_s("%f", & a);
	printf("%f\n", a);*/
//break与continue;
//	break跳出一层循环
 //   continue 用法  直接跳过
 /*  int main() {
	int i=0;	
	int n=0;
	for (i = 0; i <= 7; i++) {
		if(i==5){			
	    continue;//跳过并继续
		}
    printf("%d\n", i);
	}

		for (n = 0; n <= 7; n++) {
			if (n == 5) {
				break;//直接跳出去，啥都不管
			}
        printf("%d\n", n);

		}
		return 0;
 }*/ 


//计算加  与减
/*int main() {
    int a;
	int b;
	int c;
	scanf_s ("%d", &a);
	scanf_s ("%d", &b);
	c =( a-b);
	
	printf ("%d\n", c);
}*/
	
//输入分数  可以用两个if
	/*int a = -1;
	printf("请输入成绩：");
	scanf_s ("%d", &a);
	if (a >= 60) {
		printf("%d分及格\n", a);
	}
	if (a < 60) {
		printf("%d不及格\n", a);
	}*/
//switch语法   可以用好多指令
/*int main() {
      int a ;
	  scanf_s("%d", &a);
	  switch (a)
	  {
	  case 2334:
		  printf("我最帅\n",a);
		  break;
	  case -100:
		  printf("我不帅\n",a);
		  break;
	  }
}*/
      
//if适用于复杂结构  if与switch差不多
//goto语句能不用就不用  可以跳出循环  可劲跳转
/*int main() {
int i = 0;
    step:
    printf("帅\n");
    i++;
	if(3==i){
		goto step1;
	}
    goto step;
	step1:
	printf("可以\n");
}*/
    



	
	